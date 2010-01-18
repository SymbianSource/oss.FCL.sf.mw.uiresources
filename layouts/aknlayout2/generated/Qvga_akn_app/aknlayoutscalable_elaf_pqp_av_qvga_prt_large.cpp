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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000200e6 };

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
0x345a,	// (0x00023540) Screen

0x3464,	// (0x0002354a) application_window_ParamLimits

0x3464,	// (0x0002354a) application_window

0x0817,	// (0x000208fd) screen_g1

0x34ad,	// (0x00023593) area_bottom_pane_ParamLimits

0x34ad,	// (0x00023593) area_bottom_pane

0x0821,	// (0x00020907) area_top_pane_ParamLimits

0x0821,	// (0x00020907) area_top_pane

0xd34f,	// (0x0002d435) main_pane_ParamLimits

0xd34f,	// (0x0002d435) main_pane

0x0899,	// (0x0002097f) misc_graphics

0x46cf,	// (0x000247b5) battery_pane_ParamLimits

0x46cf,	// (0x000247b5) battery_pane

0x266f,	// (0x00022755) bg_status_flat_pane_g8

0x2677,	// (0x0002275d) bg_status_flat_pane_g9

0x1dcf,	// (0x00021eb5) context_pane_ParamLimits

0x1dcf,	// (0x00021eb5) context_pane

0x4801,	// (0x000248e7) navi_pane_ParamLimits

0x4801,	// (0x000248e7) navi_pane

0x486d,	// (0x00024953) signal_pane_ParamLimits

0x486d,	// (0x00024953) signal_pane

0x0008,

0xf88a,	// (0x0002f970) bg_status_flat_pane_g

0x48ce,	// (0x000249b4) status_pane_g1_ParamLimits

0x48ce,	// (0x000249b4) status_pane_g1

0x48da,	// (0x000249c0) status_pane_g2_ParamLimits

0x48da,	// (0x000249c0) status_pane_g2

0x1e35,	// (0x00021f1b) status_pane_g3_ParamLimits

0x1e35,	// (0x00021f1b) status_pane_g3

0x0004,

0xf7bd,	// (0x0002f8a3) status_pane_g_ParamLimits

0xf7bd,	// (0x0002f8a3) status_pane_g

0x48e6,	// (0x000249cc) title_pane_ParamLimits

0x48e6,	// (0x000249cc) title_pane

0x4923,	// (0x00024a09) uni_indicator_pane_ParamLimits

0x4923,	// (0x00024a09) uni_indicator_pane

0x1c31,	// (0x00021d17) bg_list_pane_ParamLimits

0x1c31,	// (0x00021d17) bg_list_pane

0xccf5,	// (0x0002cddb) find_pane

0x42db,	// (0x000243c1) listscroll_app_pane_ParamLimits

0x42db,	// (0x000243c1) listscroll_app_pane

0x1c51,	// (0x00021d37) listscroll_form_pane

0xccfd,	// (0x0002cde3) listscroll_gen_pane_ParamLimits

0xccfd,	// (0x0002cde3) listscroll_gen_pane

0x1c51,	// (0x00021d37) listscroll_set_pane

0x3ae9,	// (0x00023bcf) main_idle_act_pane

0x1a07,	// (0x00021aed) main_idle_trad_pane

0x1a07,	// (0x00021aed) main_list_empty_pane

0x13af,	// (0x00021495) main_midp_pane

0x1c6b,	// (0x00021d51) main_pane_g1_ParamLimits

0x1c6b,	// (0x00021d51) main_pane_g1

0x42e7,	// (0x000243cd) popup_ai_message_window_ParamLimits

0x42e7,	// (0x000243cd) popup_ai_message_window

0x435b,	// (0x00024441) popup_fep_china_uni_window_ParamLimits

0x435b,	// (0x00024441) popup_fep_china_uni_window

0x1c9b,	// (0x00021d81) popup_fep_japan_candidate_window_ParamLimits

0x1c9b,	// (0x00021d81) popup_fep_japan_candidate_window

0x1cb9,	// (0x00021d9f) popup_fep_japan_predictive_window_ParamLimits

0x1cb9,	// (0x00021d9f) popup_fep_japan_predictive_window

0x4399,	// (0x0002447f) popup_find_window

0x43a6,	// (0x0002448c) popup_grid_graphic_window_ParamLimits

0x43a6,	// (0x0002448c) popup_grid_graphic_window

0x1ce5,	// (0x00021dcb) popup_large_graphic_colour_window

0x43c4,	// (0x000244aa) popup_menu_window_ParamLimits

0x43c4,	// (0x000244aa) popup_menu_window

0x44fc,	// (0x000245e2) popup_note_image_window

0x44ea,	// (0x000245d0) popup_note_wait_window_ParamLimits

0x44ea,	// (0x000245d0) popup_note_wait_window

0x44ea,	// (0x000245d0) popup_note_window_ParamLimits

0x44ea,	// (0x000245d0) popup_note_window

0x4550,	// (0x00024636) popup_query_code_window_ParamLimits

0x4550,	// (0x00024636) popup_query_code_window

0x1d04,	// (0x00021dea) popup_query_data_code_window_ParamLimits

0x1d04,	// (0x00021dea) popup_query_data_code_window

0x4562,	// (0x00024648) popup_query_data_window_ParamLimits

0x4562,	// (0x00024648) popup_query_data_window

0x4578,	// (0x0002465e) popup_query_sat_info_window_ParamLimits

0x4578,	// (0x0002465e) popup_query_sat_info_window

0x45a9,	// (0x0002468f) popup_snote_single_graphic_window_ParamLimits

0x45a9,	// (0x0002468f) popup_snote_single_graphic_window

0x45a9,	// (0x0002468f) popup_snote_single_text_window_ParamLimits

0x45a9,	// (0x0002468f) popup_snote_single_text_window

0x1d19,	// (0x00021dff) popup_sub_window_general

0x1d5b,	// (0x00021e41) popup_window_general_ParamLimits

0x1d5b,	// (0x00021e41) popup_window_general

0x1d6e,	// (0x00021e54) power_save_pane

0xda94,	// (0x0002db7a) control_pane_g1_ParamLimits

0xda94,	// (0x0002db7a) control_pane_g1

0xdab5,	// (0x0002db9b) control_pane_g2_ParamLimits

0xdab5,	// (0x0002db9b) control_pane_g2

0x1c13,	// (0x00021cf9) control_pane_g3_ParamLimits

0x1c13,	// (0x00021cf9) control_pane_g3

0x0007,

0xf7a5,	// (0x0002f88b) control_pane_g_ParamLimits

0xf7a5,	// (0x0002f88b) control_pane_g

0xdaf8,	// (0x0002dbde) control_pane_t1_ParamLimits

0xdaf8,	// (0x0002dbde) control_pane_t1

0xdb4a,	// (0x0002dc30) control_pane_t2_ParamLimits

0xdb4a,	// (0x0002dc30) control_pane_t2

0x0002,

0xf7b6,	// (0x0002f89c) control_pane_t_ParamLimits

0xf7b6,	// (0x0002f89c) control_pane_t

0x1b36,	// (0x00021c1c) navi_navi_volume_pane_cp1

0x1b3f,	// (0x00021c25) status_small_icon_pane

0x1b47,	// (0x00021c2d) status_small_pane_g1_ParamLimits

0x1b47,	// (0x00021c2d) status_small_pane_g1

0x1b7b,	// (0x00021c61) status_small_pane_g2_ParamLimits

0x1b7b,	// (0x00021c61) status_small_pane_g2

0x1b87,	// (0x00021c6d) status_small_pane_g3_ParamLimits

0x1b87,	// (0x00021c6d) status_small_pane_g3

0x1b93,	// (0x00021c79) status_small_pane_g4_ParamLimits

0x1b93,	// (0x00021c79) status_small_pane_g4

0x1b9f,	// (0x00021c85) status_small_pane_g5_ParamLimits

0x1b9f,	// (0x00021c85) status_small_pane_g5

0x1bac,	// (0x00021c92) status_small_pane_g6_ParamLimits

0x1bac,	// (0x00021c92) status_small_pane_g6

0x0007,

0xf794,	// (0x0002f87a) status_small_pane_g_ParamLimits

0xf794,	// (0x0002f87a) status_small_pane_g

0x1bdc,	// (0x00021cc2) status_small_pane_t1

0x1bff,	// (0x00021ce5) status_small_wait_pane_ParamLimits

0x1bff,	// (0x00021ce5) status_small_wait_pane

0x3ded,	// (0x00023ed3) aid_levels_signal_ParamLimits

0x3ded,	// (0x00023ed3) aid_levels_signal

0x3dfe,	// (0x00023ee4) signal_pane_g1_ParamLimits

0x3dfe,	// (0x00023ee4) signal_pane_g1

0x3e14,	// (0x00023efa) signal_pane_g2_ParamLimits

0x3e14,	// (0x00023efa) signal_pane_g2

0x0001,

0xf729,	// (0x0002f80f) signal_pane_g_ParamLimits

0xf729,	// (0x0002f80f) signal_pane_g

0x15ac,	// (0x00021692) context_pane_g1

0x3764,	// (0x0002384a) title_pane_g1

0x378e,	// (0x00023874) title_pane_t1

0x08af,	// (0x00020995) title_pane_t2

0x08d5,	// (0x000209bb) title_pane_t3

0x0002,

0xf573,	// (0x0002f659) title_pane_t

0x4939,	// (0x00024a1f) aid_levels_battery_ParamLimits

0x4939,	// (0x00024a1f) aid_levels_battery

0x494c,	// (0x00024a32) battery_pane_g1_ParamLimits

0x494c,	// (0x00024a32) battery_pane_g1

0x4961,	// (0x00024a47) battery_pane_g2_ParamLimits

0x4961,	// (0x00024a47) battery_pane_g2

0x0001,

0xf7c8,	// (0x0002f8ae) battery_pane_g_ParamLimits

0xf7c8,	// (0x0002f8ae) battery_pane_g

0x892d,	// (0x00028a13) uni_indicator_pane_g1

0x8942,	// (0x00028a28) uni_indicator_pane_g2

0x8958,	// (0x00028a3e) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0002fa18) uni_indicator_pane_g

0x0f5d,	// (0x00021043) navi_icon_pane_ParamLimits

0x0f5d,	// (0x00021043) navi_icon_pane

0x0899,	// (0x0002097f) navi_midp_pane

0x0899,	// (0x0002097f) navi_navi_pane

0x0f5d,	// (0x00021043) navi_text_pane_ParamLimits

0x0f5d,	// (0x00021043) navi_text_pane

0x0817,	// (0x000208fd) status_small_wait_pane_g1

0x0bf0,	// (0x00020cd6) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0002fa13) status_small_wait_pane_g

0x5c94,	// (0x00025d7a) navi_navi_icon_text_pane

0x5cae,	// (0x00025d94) navi_navi_pane_g1_ParamLimits

0x5cae,	// (0x00025d94) navi_navi_pane_g1

0x5c9c,	// (0x00025d82) navi_navi_pane_g2_ParamLimits

0x5c9c,	// (0x00025d82) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0002f9e1) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0002f9e1) navi_navi_pane_g

0x5cc0,	// (0x00025da6) navi_navi_tabs_pane

0x5c94,	// (0x00025d7a) navi_navi_text_pane

0x5c94,	// (0x00025d7a) navi_navi_volume_pane

0x5c70,	// (0x00025d56) navi_text_pane_t1

0x5c64,	// (0x00025d4a) navi_icon_pane_g1

0x5bb8,	// (0x00025c9e) navi_navi_text_pane_t1

0xde3b,	// (0x0002df21) navi_navi_volume_pane_g1

0xde43,	// (0x0002df29) volume_small_pane

0x887a,	// (0x00028960) navi_navi_icon_text_pane_g1

0x8882,	// (0x00028968) navi_navi_icon_text_pane_t1

0x26b7,	// (0x0002279d) navi_tabs_2_long_pane

0x26b7,	// (0x0002279d) navi_tabs_2_pane

0x26b7,	// (0x0002279d) navi_tabs_3_long_pane

0x26b7,	// (0x0002279d) navi_tabs_3_pane

0x26b7,	// (0x0002279d) navi_tabs_4_pane

0xde1b,	// (0x0002df01) tabs_2_active_pane_ParamLimits

0xde1b,	// (0x0002df01) tabs_2_active_pane

0xde2b,	// (0x0002df11) tabs_2_passive_pane_ParamLimits

0xde2b,	// (0x0002df11) tabs_2_passive_pane

0xdde9,	// (0x0002decf) tabs_3_active_pane_ParamLimits

0xdde9,	// (0x0002decf) tabs_3_active_pane

0xddf9,	// (0x0002dedf) tabs_3_passive_pane_ParamLimits

0xddf9,	// (0x0002dedf) tabs_3_passive_pane

0xde0a,	// (0x0002def0) tabs_3_passive_pane_cp_ParamLimits

0xde0a,	// (0x0002def0) tabs_3_passive_pane_cp

0xdda5,	// (0x0002de8b) tabs_4_active_pane_ParamLimits

0xdda5,	// (0x0002de8b) tabs_4_active_pane

0xddb6,	// (0x0002de9c) tabs_4_passive_pane_ParamLimits

0xddb6,	// (0x0002de9c) tabs_4_passive_pane

0xddc7,	// (0x0002dead) tabs_4_passive_pane_cp_ParamLimits

0xddc7,	// (0x0002dead) tabs_4_passive_pane_cp

0xddd8,	// (0x0002debe) tabs_4_passive_pane_cp2_ParamLimits

0xddd8,	// (0x0002debe) tabs_4_passive_pane_cp2

0xdd85,	// (0x0002de6b) tabs_2_long_active_pane_ParamLimits

0xdd85,	// (0x0002de6b) tabs_2_long_active_pane

0xdd95,	// (0x0002de7b) tabs_2_long_passive_pane_ParamLimits

0xdd95,	// (0x0002de7b) tabs_2_long_passive_pane

0xdd50,	// (0x0002de36) tabs_3_long_active_pane_ParamLimits

0xdd50,	// (0x0002de36) tabs_3_long_active_pane

0xdd61,	// (0x0002de47) tabs_3_long_passive_pane_ParamLimits

0xdd61,	// (0x0002de47) tabs_3_long_passive_pane

0xdd74,	// (0x0002de5a) tabs_3_long_passive_pane_cp_ParamLimits

0xdd74,	// (0x0002de5a) tabs_3_long_passive_pane_cp

0xdcf6,	// (0x0002dddc) volume_small_pane_g1

0xdcff,	// (0x0002dde5) volume_small_pane_g2

0xdd08,	// (0x0002ddee) volume_small_pane_g3

0xdd11,	// (0x0002ddf7) volume_small_pane_g4

0xdd1a,	// (0x0002de00) volume_small_pane_g5

0xdd23,	// (0x0002de09) volume_small_pane_g6

0xdd2c,	// (0x0002de12) volume_small_pane_g7

0xdd35,	// (0x0002de1b) volume_small_pane_g8

0xdd3e,	// (0x0002de24) volume_small_pane_g9

0xdd47,	// (0x0002de2d) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0002f9ad) volume_small_pane_g

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp2_ParamLimits

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp2

0x08f5,	// (0x000209db) tabs_3_active_pane_g1

0x37f6,	// (0x000238dc) tabs_3_active_pane_t1

0x08fd,	// (0x000209e3) bg_passive_tab_pane_cp2_ParamLimits

0x08fd,	// (0x000209e3) bg_passive_tab_pane_cp2

0x08f5,	// (0x000209db) tabs_3_passive_pane_g1

0x37f6,	// (0x000238dc) tabs_3_passive_pane_t1

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp3_ParamLimits

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp3

0x3808,	// (0x000238ee) tabs_4_active_pane_g1

0x3810,	// (0x000238f6) tabs_4_active_pane_t1

0x08fd,	// (0x000209e3) bg_passive_tab_pane_cp3_ParamLimits

0x08fd,	// (0x000209e3) bg_passive_tab_pane_cp3

0x3808,	// (0x000238ee) tabs_4_1_passive_pane_g1

0x3810,	// (0x000238f6) tabs_4_1_passive_pane_t1

0x13af,	// (0x00021495) list_highlight_pane_cp2

0x89ae,	// (0x00028a94) list_set_pane_ParamLimits

0x89ae,	// (0x00028a94) list_set_pane

0x8a3c,	// (0x00028b22) main_pane_set_t1_ParamLimits

0x8a3c,	// (0x00028b22) main_pane_set_t1

0x8a5c,	// (0x00028b42) main_pane_set_t2_ParamLimits

0x8a5c,	// (0x00028b42) main_pane_set_t2

0x8a6e,	// (0x00028b54) main_pane_set_t3_ParamLimits

0x8a6e,	// (0x00028b54) main_pane_set_t3

0x8a80,	// (0x00028b66) main_pane_set_t4_ParamLimits

0x8a80,	// (0x00028b66) main_pane_set_t4

0x0003,

0xf997,	// (0x0002fa7d) main_pane_set_t_ParamLimits

0xf997,	// (0x0002fa7d) main_pane_set_t

0x8a92,	// (0x00028b78) setting_code_pane

0x8a9a,	// (0x00028b80) setting_slider_graphic_pane

0x8a9a,	// (0x00028b80) setting_slider_pane

0x8a9a,	// (0x00028b80) setting_text_pane

0x8a9a,	// (0x00028b80) setting_volume_pane

0xd54e,	// (0x0002d634) volume_set_pane

0x08fd,	// (0x000209e3) bg_set_opt_pane_cp

0x090b,	// (0x000209f1) setting_slider_pane_t1

0xd556,	// (0x0002d63c) setting_slider_pane_t2

0xd56f,	// (0x0002d655) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0002f660) setting_slider_pane_t

0x0921,	// (0x00020a07) slider_set_pane

0x0899,	// (0x0002097f) bg_set_opt_pane_cp2

0x0937,	// (0x00020a1d) setting_slider_graphic_pane_g1

0xd586,	// (0x0002d66c) setting_slider_graphic_pane_t1

0xd595,	// (0x0002d67b) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0002f667) setting_slider_graphic_pane_t

0xd5a4,	// (0x0002d68a) slider_set_pane_cp

0x0899,	// (0x0002097f) input_focus_pane_cp1

0x60f5,	// (0x000261db) list_set_text_pane

0x0817,	// (0x000208fd) setting_text_pane_g1

0x0899,	// (0x0002097f) input_focus_pane_cp2

0x0817,	// (0x000208fd) setting_code_pane_g1

0x0940,	// (0x00020a26) setting_code_pane_t1

0xc5de,	// (0x0002c6c4) set_text_pane_t1_ParamLimits

0xc5de,	// (0x0002c6c4) set_text_pane_t1

0x0ef8,	// (0x00020fde) set_opt_bg_pane_g1

0x0f00,	// (0x00020fe6) set_opt_bg_pane_g2

0x896e,	// (0x00028a54) set_opt_bg_pane_g3

0x0f10,	// (0x00020ff6) set_opt_bg_pane_g4

0x0f18,	// (0x00020ffe) set_opt_bg_pane_g5

0x0f20,	// (0x00021006) set_opt_bg_pane_g6

0x8976,	// (0x00028a5c) set_opt_bg_pane_g7

0x897e,	// (0x00028a64) set_opt_bg_pane_g8

0x8986,	// (0x00028a6c) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0002fa6a) set_opt_bg_pane_g

0x60e8,	// (0x000261ce) slider_set_pane_g1

0xde9c,	// (0x0002df82) slider_set_pane_g2

0x0006,

0xf975,	// (0x0002fa5b) slider_set_pane_g

0xde4c,	// (0x0002df32) volume_set_pane_g1

0xde54,	// (0x0002df3a) volume_set_pane_g2

0xde5c,	// (0x0002df42) volume_set_pane_g3

0xde64,	// (0x0002df4a) volume_set_pane_g4

0xde6c,	// (0x0002df52) volume_set_pane_g5

0xde74,	// (0x0002df5a) volume_set_pane_g6

0xde7c,	// (0x0002df62) volume_set_pane_g7

0xde84,	// (0x0002df6a) volume_set_pane_g8

0xde8c,	// (0x0002df72) volume_set_pane_g9

0xde94,	// (0x0002df7a) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0002fa33) volume_set_pane_g

0x38ac,	// (0x00023992) indicator_pane_ParamLimits

0x38ac,	// (0x00023992) indicator_pane

0x38b8,	// (0x0002399e) main_idle_pane_g2_ParamLimits

0x38b8,	// (0x0002399e) main_idle_pane_g2

0x38dc,	// (0x000239c2) main_pane_idle_g1_ParamLimits

0x38dc,	// (0x000239c2) main_pane_idle_g1

0x094e,	// (0x00020a34) popup_clock_digital_analogue_window_ParamLimits

0x094e,	// (0x00020a34) popup_clock_digital_analogue_window

0x38e9,	// (0x000239cf) soft_indicator_pane_ParamLimits

0x38e9,	// (0x000239cf) soft_indicator_pane

0x38f5,	// (0x000239db) wallpaper_pane_ParamLimits

0x38f5,	// (0x000239db) wallpaper_pane

0x0817,	// (0x000208fd) wallpaper_pane_g1

0x3901,	// (0x000239e7) indicator_pane_g1_ParamLimits

0x3901,	// (0x000239e7) indicator_pane_g1

0x621d,	// (0x00026303) navi_navi_icon_text_pane_srt_g1

0x097c,	// (0x00020a62) soft_indicator_pane_t1

0x0996,	// (0x00020a7c) aid_ps_area_pane

0x390d,	// (0x000239f3) aid_ps_clock_pane

0x09a7,	// (0x00020a8d) aid_ps_indicator_pane

0x09b3,	// (0x00020a99) indicator_ps_pane_ParamLimits

0x09b3,	// (0x00020a99) indicator_ps_pane

0x09c2,	// (0x00020aa8) power_save_pane_g1_ParamLimits

0x09c2,	// (0x00020aa8) power_save_pane_g1

0x09ce,	// (0x00020ab4) power_save_pane_g2_ParamLimits

0x09ce,	// (0x00020ab4) power_save_pane_g2

0xd2cb,	// (0x0002d3b1) aid_navinavi_width_pane

0x0996,	// (0x00020a7c) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0002f66c) power_save_pane_g_ParamLimits

0xf586,	// (0x0002f66c) power_save_pane_g

0x09dc,	// (0x00020ac2) power_save_pane_t1_ParamLimits

0x09dc,	// (0x00020ac2) power_save_pane_t1

0x390d,	// (0x000239f3) aid_ps_clock_pane_ParamLimits

0x09a7,	// (0x00020a8d) aid_ps_indicator_pane_ParamLimits

0x09ee,	// (0x00020ad4) power_save_pane_t4_ParamLimits

0x09ee,	// (0x00020ad4) power_save_pane_t4

0x0001,

0xf58b,	// (0x0002f671) power_save_pane_t_ParamLimits

0xf58b,	// (0x0002f671) power_save_pane_t

0x0a18,	// (0x00020afe) power_save_t3_ParamLimits

0x0a18,	// (0x00020afe) power_save_t3

0x0a03,	// (0x00020ae9) power_save_t2_ParamLimits

0x0a03,	// (0x00020ae9) power_save_t2

0x0a2d,	// (0x00020b13) indicator_ps_pane_g1

0x3919,	// (0x000239ff) ai_gene_pane_ParamLimits

0x3919,	// (0x000239ff) ai_gene_pane

0x3925,	// (0x00023a0b) ai_links_pane_ParamLimits

0x3925,	// (0x00023a0b) ai_links_pane

0x3931,	// (0x00023a17) indicator_pane_cp1_ParamLimits

0x3931,	// (0x00023a17) indicator_pane_cp1

0x393d,	// (0x00023a23) main_pane_idle_g1_cp_ParamLimits

0x393d,	// (0x00023a23) main_pane_idle_g1_cp

0x0a36,	// (0x00020b1c) popup_ai_links_title_window

0x3949,	// (0x00023a2f) soft_indicator_pane_cp1_ParamLimits

0x3949,	// (0x00023a2f) soft_indicator_pane_cp1

0x5f2a,	// (0x00026010) ai_links_pane_g1

0x5f33,	// (0x00026019) grid_ai_links_pane

0x8924,	// (0x00028a0a) ai_gene_pane_1

0x5f18,	// (0x00025ffe) ai_gene_pane_2

0x5f21,	// (0x00026007) list_highlight_pane_cp4

0x8908,	// (0x000289ee) cell_ai_link_pane_ParamLimits

0x8908,	// (0x000289ee) cell_ai_link_pane

0x5f10,	// (0x00025ff6) cell_ai_link_pane_g1

0x0bf0,	// (0x00020cd6) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0002fa0e) cell_ai_link_pane_g

0x0899,	// (0x0002097f) grid_highlight_cp2

0x0899,	// (0x0002097f) bg_popup_sub_pane_cp1

0x0a4d,	// (0x00020b33) popup_ai_links_title_window_t1

0x5e62,	// (0x00025f48) ai_gene_pane_1_g1_ParamLimits

0x5e62,	// (0x00025f48) ai_gene_pane_1_g1

0x5e6e,	// (0x00025f54) ai_gene_pane_1_g2_ParamLimits

0x5e6e,	// (0x00025f54) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0002fa04) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0002fa04) ai_gene_pane_1_g

0x5e7b,	// (0x00025f61) ai_gene_pane_1_t1_ParamLimits

0x5e7b,	// (0x00025f61) ai_gene_pane_1_t1

0x5eaf,	// (0x00025f95) grid_ai_soft_ind_pane

0x5e4d,	// (0x00025f33) ai_gene_pane_2_t1_ParamLimits

0x5e4d,	// (0x00025f33) ai_gene_pane_2_t1

0x3955,	// (0x00023a3b) main_pane_empty_t1_ParamLimits

0x3955,	// (0x00023a3b) main_pane_empty_t1

0x3972,	// (0x00023a58) main_pane_empty_t2_ParamLimits

0x3972,	// (0x00023a58) main_pane_empty_t2

0x398a,	// (0x00023a70) main_pane_empty_t3_ParamLimits

0x398a,	// (0x00023a70) main_pane_empty_t3

0x399d,	// (0x00023a83) main_pane_empty_t4_ParamLimits

0x399d,	// (0x00023a83) main_pane_empty_t4

0x39b0,	// (0x00023a96) main_pane_empty_t5_ParamLimits

0x39b0,	// (0x00023a96) main_pane_empty_t5

0x0004,

0xf590,	// (0x0002f676) main_pane_empty_t_ParamLimits

0xf590,	// (0x0002f676) main_pane_empty_t

0x0f5d,	// (0x00021043) bg_popup_window_pane_ParamLimits

0x0f5d,	// (0x00021043) bg_popup_window_pane

0x5bc7,	// (0x00025cad) find_popup_pane_cp2_ParamLimits

0x5bc7,	// (0x00025cad) find_popup_pane_cp2

0x5bd3,	// (0x00025cb9) heading_pane_ParamLimits

0x5bd3,	// (0x00025cb9) heading_pane

0x0899,	// (0x0002097f) bg_popup_sub_pane

0x889c,	// (0x00028982) bg_popup_window_pane_g1_ParamLimits

0x889c,	// (0x00028982) bg_popup_window_pane_g1

0x88a8,	// (0x0002898e) bg_popup_window_pane_g2_ParamLimits

0x88a8,	// (0x0002898e) bg_popup_window_pane_g2

0x88b4,	// (0x0002899a) bg_popup_window_pane_g3_ParamLimits

0x88b4,	// (0x0002899a) bg_popup_window_pane_g3

0x88c0,	// (0x000289a6) bg_popup_window_pane_g4_ParamLimits

0x88c0,	// (0x000289a6) bg_popup_window_pane_g4

0x88cc,	// (0x000289b2) bg_popup_window_pane_g5_ParamLimits

0x88cc,	// (0x000289b2) bg_popup_window_pane_g5

0x88d8,	// (0x000289be) bg_popup_window_pane_g6_ParamLimits

0x88d8,	// (0x000289be) bg_popup_window_pane_g6

0x88e4,	// (0x000289ca) bg_popup_window_pane_g7_ParamLimits

0x88e4,	// (0x000289ca) bg_popup_window_pane_g7

0x88f0,	// (0x000289d6) bg_popup_window_pane_g8_ParamLimits

0x88f0,	// (0x000289d6) bg_popup_window_pane_g8

0x88fc,	// (0x000289e2) bg_popup_window_pane_g9_ParamLimits

0x88fc,	// (0x000289e2) bg_popup_window_pane_g9

0x5bac,	// (0x00025c92) bg_popup_window_pane_g10_ParamLimits

0x5bac,	// (0x00025c92) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0002f9cc) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0002f9cc) bg_popup_window_pane_g

0x5b63,	// (0x00025c49) bg_popup_heading_pane_ParamLimits

0x5b63,	// (0x00025c49) bg_popup_heading_pane

0xdf0b,	// (0x0002dff1) tabs_4_passive_pane_cp_srt_ParamLimits

0xdf0b,	// (0x0002dff1) tabs_4_passive_pane_cp_srt

0xdf1d,	// (0x0002e003) tabs_4_passive_pane_srt_ParamLimits

0x5b77,	// (0x00025c5d) heading_pane_g2

0xdf1d,	// (0x0002e003) tabs_4_passive_pane_srt

0x13af,	// (0x00021495) bg_passive_tab_pane_cp3_srt_ParamLimits

0x13af,	// (0x00021495) bg_passive_tab_pane_cp3_srt

0x5b7f,	// (0x00025c65) heading_pane_t1_ParamLimits

0x5b7f,	// (0x00025c65) heading_pane_t1

0x5b96,	// (0x00025c7c) heading_pane_t2_ParamLimits

0x5b96,	// (0x00025c7c) heading_pane_t2

0x0001,

0xf8e1,	// (0x0002f9c7) heading_pane_t_ParamLimits

0xf8e1,	// (0x0002f9c7) heading_pane_t

0x2637,	// (0x0002271d) bg_popup_heading_pane_g1

0x26c8,	// (0x000227ae) bg_popup_heading_pane_g2

0x26d0,	// (0x000227b6) bg_popup_heading_pane_g3

0x26d8,	// (0x000227be) bg_popup_heading_pane_g4

0x26e0,	// (0x000227c6) bg_popup_heading_pane_g5

0x26e8,	// (0x000227ce) bg_popup_heading_pane_g6

0x26f0,	// (0x000227d6) bg_popup_heading_pane_g7

0x26f8,	// (0x000227de) bg_popup_heading_pane_g8

0x2700,	// (0x000227e6) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0002f983) bg_popup_heading_pane_g

0x1f1d,	// (0x00022003) bg_popup_sub_pane_g1

0x1f25,	// (0x0002200b) bg_popup_sub_pane_g2

0x1f2d,	// (0x00022013) bg_popup_sub_pane_g3

0x1f35,	// (0x0002201b) bg_popup_sub_pane_g4

0x1f3d,	// (0x00022023) bg_popup_sub_pane_g5

0x1f45,	// (0x0002202b) bg_popup_sub_pane_g6

0x1f4d,	// (0x00022033) bg_popup_sub_pane_g7

0x1f55,	// (0x0002203b) bg_popup_sub_pane_g8

0x1f5d,	// (0x00022043) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0002f95d) bg_popup_sub_pane_g

0x08e7,	// (0x000209cd) bg_popup_window_pane_cp5_ParamLimits

0x08e7,	// (0x000209cd) bg_popup_window_pane_cp5

0x0a6a,	// (0x00020b50) popup_note_window_g1_ParamLimits

0x0a6a,	// (0x00020b50) popup_note_window_g1

0x0a76,	// (0x00020b5c) popup_note_window_t1_ParamLimits

0x0a76,	// (0x00020b5c) popup_note_window_t1

0x0a8c,	// (0x00020b72) popup_note_window_t2_ParamLimits

0x0a8c,	// (0x00020b72) popup_note_window_t2

0x0aa2,	// (0x00020b88) popup_note_window_t3_ParamLimits

0x0aa2,	// (0x00020b88) popup_note_window_t3

0x0ab8,	// (0x00020b9e) popup_note_window_t4_ParamLimits

0x0ab8,	// (0x00020b9e) popup_note_window_t4

0x0ae0,	// (0x00020bc6) popup_note_window_t5_ParamLimits

0x0ae0,	// (0x00020bc6) popup_note_window_t5

0x0004,

0xf59b,	// (0x0002f681) popup_note_window_t_ParamLimits

0xf59b,	// (0x0002f681) popup_note_window_t

0x0b04,	// (0x00020bea) bg_popup_window_pane_cp6_ParamLimits

0x0b04,	// (0x00020bea) bg_popup_window_pane_cp6

0x25b3,	// (0x00022699) popup_note_image_window_g1_ParamLimits

0x25b3,	// (0x00022699) popup_note_image_window_g1

0x25bf,	// (0x000226a5) popup_note_image_window_g2_ParamLimits

0x25bf,	// (0x000226a5) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0002f951) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0002f951) popup_note_image_window_g

0x25d8,	// (0x000226be) popup_note_image_window_t1_ParamLimits

0x25d8,	// (0x000226be) popup_note_image_window_t1

0x25f1,	// (0x000226d7) popup_note_image_window_t2_ParamLimits

0x25f1,	// (0x000226d7) popup_note_image_window_t2

0x260a,	// (0x000226f0) popup_note_image_window_t3_ParamLimits

0x260a,	// (0x000226f0) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0002f956) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0002f956) popup_note_image_window_t

0x249e,	// (0x00022584) bg_popup_window_pane_cp7_ParamLimits

0x249e,	// (0x00022584) bg_popup_window_pane_cp7

0x24ce,	// (0x000225b4) popup_note_wait_window_g1_ParamLimits

0x24ce,	// (0x000225b4) popup_note_wait_window_g1

0x24da,	// (0x000225c0) popup_note_wait_window_g2_ParamLimits

0x24da,	// (0x000225c0) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0002f93f) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0002f93f) popup_note_wait_window_g

0x24f2,	// (0x000225d8) popup_note_wait_window_t1_ParamLimits

0x24f2,	// (0x000225d8) popup_note_wait_window_t1

0x2519,	// (0x000225ff) popup_note_wait_window_t2_ParamLimits

0x2519,	// (0x000225ff) popup_note_wait_window_t2

0x2536,	// (0x0002261c) popup_note_wait_window_t3_ParamLimits

0x2536,	// (0x0002261c) popup_note_wait_window_t3

0x2549,	// (0x0002262f) popup_note_wait_window_t4_ParamLimits

0x2549,	// (0x0002262f) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0002f946) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0002f946) popup_note_wait_window_t

0x256e,	// (0x00022654) wait_bar_pane_ParamLimits

0x256e,	// (0x00022654) wait_bar_pane

0x0899,	// (0x0002097f) wait_anim_pane

0x0899,	// (0x0002097f) wait_border_pane

0x0817,	// (0x000208fd) wait_anim_pane_g1

0x0817,	// (0x000208fd) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0002f80a) wait_anim_pane_g

0x244e,	// (0x00022534) wait_border_pane_g1

0x2457,	// (0x0002253d) wait_border_pane_g2

0x2460,	// (0x00022546) wait_border_pane_g3

0x0002,

0xf852,	// (0x0002f938) wait_border_pane_g

0x22be,	// (0x000223a4) bg_popup_window_pane_cp16_ParamLimits

0x22be,	// (0x000223a4) bg_popup_window_pane_cp16

0x23be,	// (0x000224a4) indicator_popup_pane_cp4_ParamLimits

0x23be,	// (0x000224a4) indicator_popup_pane_cp4

0x23d2,	// (0x000224b8) popup_query_data_window_t1_ParamLimits

0x23d2,	// (0x000224b8) popup_query_data_window_t1

0x23e4,	// (0x000224ca) popup_query_data_window_t2_ParamLimits

0x23e4,	// (0x000224ca) popup_query_data_window_t2

0x23fd,	// (0x000224e3) popup_query_data_window_t3_ParamLimits

0x23fd,	// (0x000224e3) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0002f931) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0002f931) popup_query_data_window_t

0x2417,	// (0x000224fd) query_popup_data_pane_ParamLimits

0x2417,	// (0x000224fd) query_popup_data_pane

0x242b,	// (0x00022511) query_popup_data_pane_cp1_ParamLimits

0x242b,	// (0x00022511) query_popup_data_pane_cp1

0x22be,	// (0x000223a4) bg_popup_window_pane_cp10_ParamLimits

0x22be,	// (0x000223a4) bg_popup_window_pane_cp10

0x22f0,	// (0x000223d6) indicator_popup_pane_ParamLimits

0x22f0,	// (0x000223d6) indicator_popup_pane

0x2312,	// (0x000223f8) popup_query_code_window_t1_ParamLimits

0x2312,	// (0x000223f8) popup_query_code_window_t1

0x232c,	// (0x00022412) popup_query_code_window_t2_ParamLimits

0x232c,	// (0x00022412) popup_query_code_window_t2

0x2375,	// (0x0002245b) popup_query_code_window_t3_ParamLimits

0x2375,	// (0x0002245b) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0002f92a) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0002f92a) popup_query_code_window_t

0x23a4,	// (0x0002248a) query_popup_pane_ParamLimits

0x23a4,	// (0x0002248a) query_popup_pane

0x0b04,	// (0x00020bea) bg_popup_window_pane_cp15_ParamLimits

0x0b04,	// (0x00020bea) bg_popup_window_pane_cp15

0x0b22,	// (0x00020c08) indicator_popup_pane_cp1_ParamLimits

0x0b22,	// (0x00020c08) indicator_popup_pane_cp1

0x0b35,	// (0x00020c1b) indicator_popup_pane_cp2_ParamLimits

0x0b35,	// (0x00020c1b) indicator_popup_pane_cp2

0x0b48,	// (0x00020c2e) popup_query_data_code_window_g1_ParamLimits

0x0b48,	// (0x00020c2e) popup_query_data_code_window_g1

0x0b5b,	// (0x00020c41) popup_query_data_code_window_t1_ParamLimits

0x0b5b,	// (0x00020c41) popup_query_data_code_window_t1

0x0b6d,	// (0x00020c53) popup_query_data_code_window_t2_ParamLimits

0x0b6d,	// (0x00020c53) popup_query_data_code_window_t2

0x0b7f,	// (0x00020c65) popup_query_data_code_window_t3_ParamLimits

0x0b7f,	// (0x00020c65) popup_query_data_code_window_t3

0x0b95,	// (0x00020c7b) popup_query_data_code_window_t4_ParamLimits

0x0b95,	// (0x00020c7b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0002f68c) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0002f68c) popup_query_data_code_window_t

0x1888,	// (0x0002196e) list_single_midp_graphic_pane_g3

0x0bad,	// (0x00020c93) query_popup_data_pane_cp2_ParamLimits

0x0bc0,	// (0x00020ca6) query_popup_pane_cp2_ParamLimits

0x0bc0,	// (0x00020ca6) query_popup_pane_cp2

0x0899,	// (0x0002097f) bg_popup_window_pane_cp11

0x22b6,	// (0x0002239c) heading_pane_cp5

0x0c4c,	// (0x00020d32) listscroll_popup_info_pane

0x0899,	// (0x0002097f) input_focus_pane_cp3

0x0bd3,	// (0x00020cb9) query_popup_pane_t1

0x0be1,	// (0x00020cc7) list_popup_info_pane_ParamLimits

0x0be1,	// (0x00020cc7) list_popup_info_pane

0x0bf0,	// (0x00020cd6) listscroll_popup_info_pane_g1

0x0bf8,	// (0x00020cde) scroll_pane_cp7

0x0c00,	// (0x00020ce6) popup_info_list_pane_t1_ParamLimits

0x0c00,	// (0x00020ce6) popup_info_list_pane_t1

0x0c1a,	// (0x00020d00) popup_info_list_pane_t2_ParamLimits

0x0c1a,	// (0x00020d00) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0002f695) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0002f695) popup_info_list_pane_t

0x0899,	// (0x0002097f) bg_popup_window_pane_cp12

0x6237,	// (0x0002631d) find_popup_pane

0x08fd,	// (0x000209e3) bg_popup_window_pane_cp3

0x0c34,	// (0x00020d1a) heading_pane_cp3

0x0c40,	// (0x00020d26) listscroll_popup_graphic_pane

0x0899,	// (0x0002097f) bg_popup_window_pane_cp4

0x3a13,	// (0x00023af9) heading_pane_cp4

0x0c4c,	// (0x00020d32) listscroll_popup_colour_pane

0x0c54,	// (0x00020d3a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0c54,	// (0x00020d3a) cell_large_graphic_colour_none_popup_pane

0x3a1b,	// (0x00023b01) grid_large_graphic_colour_popup_pane_ParamLimits

0x3a1b,	// (0x00023b01) grid_large_graphic_colour_popup_pane

0x3a37,	// (0x00023b1d) listscroll_popup_colour_pane_g1_ParamLimits

0x3a37,	// (0x00023b1d) listscroll_popup_colour_pane_g1

0x3a4e,	// (0x00023b34) listscroll_popup_colour_pane_g2_ParamLimits

0x3a4e,	// (0x00023b34) listscroll_popup_colour_pane_g2

0x0c64,	// (0x00020d4a) listscroll_popup_colour_pane_g3_ParamLimits

0x0c64,	// (0x00020d4a) listscroll_popup_colour_pane_g3

0x3a62,	// (0x00023b48) listscroll_popup_colour_pane_g4_ParamLimits

0x3a62,	// (0x00023b48) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0002f69a) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0002f69a) listscroll_popup_colour_pane_g

0x0c74,	// (0x00020d5a) scroll_pane_cp6_ParamLimits

0x0c74,	// (0x00020d5a) scroll_pane_cp6

0x3a71,	// (0x00023b57) cell_large_graphic_colour_popup_pane_ParamLimits

0x3a71,	// (0x00023b57) cell_large_graphic_colour_popup_pane

0x0c86,	// (0x00020d6c) cell_large_graphic_colour_none_popup_pane_t1

0x0899,	// (0x0002097f) grid_highlight_pane_cp5

0x0c95,	// (0x00020d7b) cell_large_graphic_colour_popup_pane_g1

0x0c9d,	// (0x00020d83) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0002f6a3) cell_large_graphic_colour_popup_pane_g

0x0ca5,	// (0x00020d8b) cell_large_graphic_colour_popup_pane_g2_copy1

0x0cae,	// (0x00020d94) grid_highlight_pane_cp4

0x0cb6,	// (0x00020d9c) bg_popup_window_pane_cp8_ParamLimits

0x0cb6,	// (0x00020d9c) bg_popup_window_pane_cp8

0x0cd1,	// (0x00020db7) popup_snote_single_text_window_g1_ParamLimits

0x0cd1,	// (0x00020db7) popup_snote_single_text_window_g1

0x0ce3,	// (0x00020dc9) popup_snote_single_text_window_t1_ParamLimits

0x0ce3,	// (0x00020dc9) popup_snote_single_text_window_t1

0x0cf6,	// (0x00020ddc) popup_snote_single_text_window_t2_ParamLimits

0x0cf6,	// (0x00020ddc) popup_snote_single_text_window_t2

0x0d09,	// (0x00020def) popup_snote_single_text_window_t3_ParamLimits

0x0d09,	// (0x00020def) popup_snote_single_text_window_t3

0x0d42,	// (0x00020e28) popup_snote_single_text_window_t4_ParamLimits

0x0d42,	// (0x00020e28) popup_snote_single_text_window_t4

0x0d76,	// (0x00020e5c) popup_snote_single_text_window_t5_ParamLimits

0x0d76,	// (0x00020e5c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0002f6a8) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0002f6a8) popup_snote_single_text_window_t

0x0da5,	// (0x00020e8b) bg_popup_window_pane_cp9_ParamLimits

0x0da5,	// (0x00020e8b) bg_popup_window_pane_cp9

0x0cd1,	// (0x00020db7) popup_snote_single_graphic_window_g1_ParamLimits

0x0cd1,	// (0x00020db7) popup_snote_single_graphic_window_g1

0x0db3,	// (0x00020e99) popup_snote_single_graphic_window_g2_ParamLimits

0x0db3,	// (0x00020e99) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0002f6b3) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0002f6b3) popup_snote_single_graphic_window_g

0x0dbf,	// (0x00020ea5) popup_snote_single_graphic_window_t1_ParamLimits

0x0dbf,	// (0x00020ea5) popup_snote_single_graphic_window_t1

0x0dd2,	// (0x00020eb8) popup_snote_single_graphic_window_t2_ParamLimits

0x0dd2,	// (0x00020eb8) popup_snote_single_graphic_window_t2

0x0d09,	// (0x00020def) popup_snote_single_graphic_window_t3_ParamLimits

0x0d09,	// (0x00020def) popup_snote_single_graphic_window_t3

0x0d42,	// (0x00020e28) popup_snote_single_graphic_window_t4_ParamLimits

0x0d42,	// (0x00020e28) popup_snote_single_graphic_window_t4

0x0d76,	// (0x00020e5c) popup_snote_single_graphic_window_t5_ParamLimits

0x0d76,	// (0x00020e5c) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002f6b8) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002f6b8) popup_snote_single_graphic_window_t

0x8b8d,	// (0x00028c73) grid_graphic_popup_pane_ParamLimits

0x8b8d,	// (0x00028c73) grid_graphic_popup_pane

0x8bb0,	// (0x00028c96) listscroll_popup_graphic_pane_g1_ParamLimits

0x8bb0,	// (0x00028c96) listscroll_popup_graphic_pane_g1

0x8bc4,	// (0x00028caa) listscroll_popup_graphic_pane_g2_ParamLimits

0x8bc4,	// (0x00028caa) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0002faa7) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0002faa7) listscroll_popup_graphic_pane_g

0x61ef,	// (0x000262d5) scroll_pane_cp5

0x8b46,	// (0x00028c2c) cell_graphic_popup_pane_ParamLimits

0x8b46,	// (0x00028c2c) cell_graphic_popup_pane

0x61ba,	// (0x000262a0) cell_graphic_popup_pane_g1

0x61c2,	// (0x000262a8) cell_graphic_popup_pane_g2

0x0ca5,	// (0x00020d8b) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0002faa0) cell_graphic_popup_pane_g

0x61cb,	// (0x000262b1) cell_graphic_popup_pane_t2

0x0cae,	// (0x00020d94) grid_highlight_pane_cp3

0x0df7,	// (0x00020edd) list_gen_pane_ParamLimits

0x0df7,	// (0x00020edd) list_gen_pane

0x0e20,	// (0x00020f06) scroll_pane

0x8b17,	// (0x00028bfd) bg_list_pane_g1_ParamLimits

0x8b17,	// (0x00028bfd) bg_list_pane_g1

0x6169,	// (0x0002624f) bg_list_pane_g2_ParamLimits

0x6169,	// (0x0002624f) bg_list_pane_g2

0x617c,	// (0x00026262) bg_list_pane_g3_ParamLimits

0x617c,	// (0x00026262) bg_list_pane_g3

0x618e,	// (0x00026274) bg_list_pane_g4_ParamLimits

0x618e,	// (0x00026274) bg_list_pane_g4

0x8b2e,	// (0x00028c14) bg_list_pane_g5_ParamLimits

0x8b2e,	// (0x00028c14) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0002fa95) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0002fa95) bg_list_pane_g

0x8ac7,	// (0x00028bad) list_double2_graphic_large_graphic_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double2_graphic_large_graphic_pane

0x8ac7,	// (0x00028bad) list_double2_graphic_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double2_graphic_pane

0x8ac7,	// (0x00028bad) list_double2_large_graphic_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double2_large_graphic_pane

0x8ac7,	// (0x00028bad) list_double2_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double2_pane

0x8ac7,	// (0x00028bad) list_double_graphic_heading_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double_graphic_heading_pane

0x8ac7,	// (0x00028bad) list_double_graphic_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double_graphic_pane

0x8ac7,	// (0x00028bad) list_double_heading_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double_heading_pane

0x8ac7,	// (0x00028bad) list_double_large_graphic_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double_large_graphic_pane

0x8ac7,	// (0x00028bad) list_double_number_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double_number_pane

0x8ac7,	// (0x00028bad) list_double_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double_pane

0x8ac7,	// (0x00028bad) list_double_time_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_double_time_pane

0x8ac7,	// (0x00028bad) list_setting_number_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_setting_number_pane

0x8ac7,	// (0x00028bad) list_setting_pane_ParamLimits

0x8ac7,	// (0x00028bad) list_setting_pane

0xce31,	// (0x0002cf17) list_single_2graphic_pane_ParamLimits

0xce31,	// (0x0002cf17) list_single_2graphic_pane

0xce31,	// (0x0002cf17) list_single_graphic_heading_pane_ParamLimits

0xce31,	// (0x0002cf17) list_single_graphic_heading_pane

0xce31,	// (0x0002cf17) list_single_graphic_pane_ParamLimits

0xce31,	// (0x0002cf17) list_single_graphic_pane

0xce31,	// (0x0002cf17) list_single_heading_pane_ParamLimits

0xce31,	// (0x0002cf17) list_single_heading_pane

0xded1,	// (0x0002dfb7) list_single_large_graphic_pane_ParamLimits

0xded1,	// (0x0002dfb7) list_single_large_graphic_pane

0xce31,	// (0x0002cf17) list_single_number_heading_pane_ParamLimits

0xce31,	// (0x0002cf17) list_single_number_heading_pane

0xce31,	// (0x0002cf17) list_single_number_pane_ParamLimits

0xce31,	// (0x0002cf17) list_single_number_pane

0xce31,	// (0x0002cf17) list_single_pane_ParamLimits

0xce31,	// (0x0002cf17) list_single_pane

0x0899,	// (0x0002097f) list_highlight_pane_cp1

0xd5ac,	// (0x0002d692) list_single_pane_g1_ParamLimits

0xd5ac,	// (0x0002d692) list_single_pane_g1

0xd5b8,	// (0x0002d69e) list_single_pane_g2_ParamLimits

0xd5b8,	// (0x0002d69e) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0002f6d4) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0002f6d4) list_single_pane_g

0xce07,	// (0x0002ceed) list_single_pane_t1_ParamLimits

0xce07,	// (0x0002ceed) list_single_pane_t1

0xd5ac,	// (0x0002d692) list_single_number_pane_g1_ParamLimits

0xd5ac,	// (0x0002d692) list_single_number_pane_g1

0xd5b8,	// (0x0002d69e) list_single_number_pane_g2_ParamLimits

0xd5b8,	// (0x0002d69e) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0002f6d4) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0002f6d4) list_single_number_pane_g

0xc605,	// (0x0002c6eb) list_single_number_pane_t1_ParamLimits

0xc605,	// (0x0002c6eb) list_single_number_pane_t1

0xcdc6,	// (0x0002ceac) list_single_number_pane_t2_ParamLimits

0xcdc6,	// (0x0002ceac) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0002fa56) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0002fa56) list_single_number_pane_t

0xc5f9,	// (0x0002c6df) list_single_graphic_pane_g1_ParamLimits

0xc5f9,	// (0x0002c6df) list_single_graphic_pane_g1

0xd5ac,	// (0x0002d692) list_single_graphic_pane_g2_ParamLimits

0xd5ac,	// (0x0002d692) list_single_graphic_pane_g2

0xd5b8,	// (0x0002d69e) list_single_graphic_pane_g3_ParamLimits

0xd5b8,	// (0x0002d69e) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0002f6c3) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0002f6c3) list_single_graphic_pane_g

0xc605,	// (0x0002c6eb) list_single_graphic_pane_t1_ParamLimits

0xc605,	// (0x0002c6eb) list_single_graphic_pane_t1

0xc61b,	// (0x0002c701) list_single_heading_pane_g1_ParamLimits

0xc61b,	// (0x0002c701) list_single_heading_pane_g1

0xd5b8,	// (0x0002d69e) list_single_heading_pane_g2_ParamLimits

0xd5b8,	// (0x0002d69e) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002f6ca) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002f6ca) list_single_heading_pane_g

0xc62e,	// (0x0002c714) list_single_heading_pane_t1_ParamLimits

0xc62e,	// (0x0002c714) list_single_heading_pane_t1

0xc644,	// (0x0002c72a) list_single_heading_pane_t2_ParamLimits

0xc644,	// (0x0002c72a) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0002f6cf) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0002f6cf) list_single_heading_pane_t

0xd5ac,	// (0x0002d692) list_single_number_heading_pane_g1_ParamLimits

0xd5ac,	// (0x0002d692) list_single_number_heading_pane_g1

0xd5b8,	// (0x0002d69e) list_single_number_heading_pane_g2_ParamLimits

0xd5b8,	// (0x0002d69e) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0002f6d4) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0002f6d4) list_single_number_heading_pane_g

0xc656,	// (0x0002c73c) list_single_number_heading_pane_t1_ParamLimits

0xc656,	// (0x0002c73c) list_single_number_heading_pane_t1

0xc66c,	// (0x0002c752) list_single_number_heading_pane_t2_ParamLimits

0xc66c,	// (0x0002c752) list_single_number_heading_pane_t2

0xc67e,	// (0x0002c764) list_single_number_heading_pane_t3_ParamLimits

0xc67e,	// (0x0002c764) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0002f6d9) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0002f6d9) list_single_number_heading_pane_t

0xc690,	// (0x0002c776) list_single_graphic_heading_pane_g1_ParamLimits

0xc690,	// (0x0002c776) list_single_graphic_heading_pane_g1

0xd5c4,	// (0x0002d6aa) list_single_graphic_heading_pane_g4_ParamLimits

0xd5c4,	// (0x0002d6aa) list_single_graphic_heading_pane_g4

0xd5b8,	// (0x0002d69e) list_single_graphic_heading_pane_g5_ParamLimits

0xd5b8,	// (0x0002d69e) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0002f6e0) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0002f6e0) list_single_graphic_heading_pane_g

0xc656,	// (0x0002c73c) list_single_graphic_heading_pane_t1_ParamLimits

0xc656,	// (0x0002c73c) list_single_graphic_heading_pane_t1

0xc6a4,	// (0x0002c78a) list_single_graphic_heading_pane_t2_ParamLimits

0xc6a4,	// (0x0002c78a) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0002f6e7) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0002f6e7) list_single_graphic_heading_pane_t

0xd5d3,	// (0x0002d6b9) list_single_large_graphic_pane_g1_ParamLimits

0xd5d3,	// (0x0002d6b9) list_single_large_graphic_pane_g1

0xd5df,	// (0x0002d6c5) list_single_large_graphic_pane_g2_ParamLimits

0xd5df,	// (0x0002d6c5) list_single_large_graphic_pane_g2

0xd5eb,	// (0x0002d6d1) list_single_large_graphic_pane_g3_ParamLimits

0xd5eb,	// (0x0002d6d1) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0002f6ec) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0002f6ec) list_single_large_graphic_pane_g

0x2457,	// (0x0002253d) wait_border_pane_g2_copy1

0xd5f7,	// (0x0002d6dd) list_single_large_graphic_pane_g4_cp2

0xc6bc,	// (0x0002c7a2) list_single_large_graphic_pane_t1_ParamLimits

0xc6bc,	// (0x0002c7a2) list_single_large_graphic_pane_t1

0xd5ff,	// (0x0002d6e5) list_double_pane_g1_ParamLimits

0xd5ff,	// (0x0002d6e5) list_double_pane_g1

0xd60b,	// (0x0002d6f1) list_double_pane_g2_ParamLimits

0xd60b,	// (0x0002d6f1) list_double_pane_g2

0x0001,

0xf60d,	// (0x0002f6f3) list_double_pane_g_ParamLimits

0xf60d,	// (0x0002f6f3) list_double_pane_g

0xc6d2,	// (0x0002c7b8) list_double_pane_t1_ParamLimits

0xc6d2,	// (0x0002c7b8) list_double_pane_t1

0xc6e8,	// (0x0002c7ce) list_double_pane_t2_ParamLimits

0xc6e8,	// (0x0002c7ce) list_double_pane_t2

0x0001,

0xf612,	// (0x0002f6f8) list_double_pane_t_ParamLimits

0xf612,	// (0x0002f6f8) list_double_pane_t

0xc6fa,	// (0x0002c7e0) list_double2_pane_g1_ParamLimits

0xc6fa,	// (0x0002c7e0) list_double2_pane_g1

0xc709,	// (0x0002c7ef) list_double2_pane_g2_ParamLimits

0xc709,	// (0x0002c7ef) list_double2_pane_g2

0x0001,

0xf617,	// (0x0002f6fd) list_double2_pane_g_ParamLimits

0xf617,	// (0x0002f6fd) list_double2_pane_g

0xc715,	// (0x0002c7fb) list_double2_pane_t1_ParamLimits

0xc715,	// (0x0002c7fb) list_double2_pane_t1

0xc72b,	// (0x0002c811) list_double2_pane_t2_ParamLimits

0xc72b,	// (0x0002c811) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0002f702) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0002f702) list_double2_pane_t

0xd5ff,	// (0x0002d6e5) list_double_number_pane_g1_ParamLimits

0xd5ff,	// (0x0002d6e5) list_double_number_pane_g1

0xd60b,	// (0x0002d6f1) list_double_number_pane_g2_ParamLimits

0xd60b,	// (0x0002d6f1) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0002f6f3) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0002f6f3) list_double_number_pane_g

0xc73d,	// (0x0002c823) list_double_number_pane_t1_ParamLimits

0xc73d,	// (0x0002c823) list_double_number_pane_t1

0xc74f,	// (0x0002c835) list_double_number_pane_t2_ParamLimits

0xc74f,	// (0x0002c835) list_double_number_pane_t2

0xc765,	// (0x0002c84b) list_double_number_pane_t3_ParamLimits

0xc765,	// (0x0002c84b) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0002f707) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0002f707) list_double_number_pane_t

0xc777,	// (0x0002c85d) list_double_graphic_pane_g1_ParamLimits

0xc777,	// (0x0002c85d) list_double_graphic_pane_g1

0xd617,	// (0x0002d6fd) list_double_graphic_pane_g2_ParamLimits

0xd617,	// (0x0002d6fd) list_double_graphic_pane_g2

0xd626,	// (0x0002d70c) list_double_graphic_pane_g3_ParamLimits

0xd626,	// (0x0002d70c) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0002f70e) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0002f70e) list_double_graphic_pane_g

0xc783,	// (0x0002c869) list_double_graphic_pane_t1_ParamLimits

0xc783,	// (0x0002c869) list_double_graphic_pane_t1

0xc799,	// (0x0002c87f) list_double_graphic_pane_t2_ParamLimits

0xc799,	// (0x0002c87f) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0002f717) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0002f717) list_double_graphic_pane_t

0xc7ab,	// (0x0002c891) list_double2_graphic_pane_g1_ParamLimits

0xc7ab,	// (0x0002c891) list_double2_graphic_pane_g1

0x0eb7,	// (0x00020f9d) list_double2_graphic_pane_g2_ParamLimits

0x0eb7,	// (0x00020f9d) list_double2_graphic_pane_g2

0xd63e,	// (0x0002d724) list_double2_graphic_pane_g3_ParamLimits

0xd63e,	// (0x0002d724) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0002f71c) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0002f71c) list_double2_graphic_pane_g

0xc7b7,	// (0x0002c89d) list_double2_graphic_pane_t1_ParamLimits

0xc7b7,	// (0x0002c89d) list_double2_graphic_pane_t1

0xc7cd,	// (0x0002c8b3) list_double2_graphic_pane_t2_ParamLimits

0xc7cd,	// (0x0002c8b3) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0002f723) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0002f723) list_double2_graphic_pane_t

0xc7df,	// (0x0002c8c5) list_double_large_graphic_pane_g1_ParamLimits

0xc7df,	// (0x0002c8c5) list_double_large_graphic_pane_g1

0xc7fc,	// (0x0002c8e2) list_double_large_graphic_pane_g2_ParamLimits

0xc7fc,	// (0x0002c8e2) list_double_large_graphic_pane_g2

0xd60b,	// (0x0002d6f1) list_double_large_graphic_pane_g3_ParamLimits

0xd60b,	// (0x0002d6f1) list_double_large_graphic_pane_g3

0xc810,	// (0x0002c8f6) list_double_large_graphic_pane_g4_ParamLimits

0xc810,	// (0x0002c8f6) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0002f728) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0002f728) list_double_large_graphic_pane_g

0xc821,	// (0x0002c907) list_double_large_graphic_pane_t1_ParamLimits

0xc821,	// (0x0002c907) list_double_large_graphic_pane_t1

0xc83a,	// (0x0002c920) list_double_large_graphic_pane_t2_ParamLimits

0xc83a,	// (0x0002c920) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0002f733) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0002f733) list_double_large_graphic_pane_t

0xd65f,	// (0x0002d745) list_double2_large_graphic_pane_g1_ParamLimits

0xd65f,	// (0x0002d745) list_double2_large_graphic_pane_g1

0xd66b,	// (0x0002d751) list_double2_large_graphic_pane_g2_ParamLimits

0xd66b,	// (0x0002d751) list_double2_large_graphic_pane_g2

0xd63e,	// (0x0002d724) list_double2_large_graphic_pane_g3_ParamLimits

0xd63e,	// (0x0002d724) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0002f738) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0002f738) list_double2_large_graphic_pane_g

0xc84c,	// (0x0002c932) list_double2_large_graphic_pane_t1_ParamLimits

0xc84c,	// (0x0002c932) list_double2_large_graphic_pane_t1

0xc862,	// (0x0002c948) list_double2_large_graphic_pane_t2_ParamLimits

0xc862,	// (0x0002c948) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0002f73f) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0002f73f) list_double2_large_graphic_pane_t

0xc874,	// (0x0002c95a) list_double_heading_pane_g1_ParamLimits

0xc874,	// (0x0002c95a) list_double_heading_pane_g1

0xc883,	// (0x0002c969) list_double_heading_pane_g2_ParamLimits

0xc883,	// (0x0002c969) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0002f744) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0002f744) list_double_heading_pane_g

0xc88f,	// (0x0002c975) list_double_heading_pane_t1_ParamLimits

0xc88f,	// (0x0002c975) list_double_heading_pane_t1

0xc72b,	// (0x0002c811) list_double_heading_pane_t2_ParamLimits

0xc72b,	// (0x0002c811) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0002f749) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0002f749) list_double_heading_pane_t

0xc8a5,	// (0x0002c98b) list_double_graphic_heading_pane_g1_ParamLimits

0xc8a5,	// (0x0002c98b) list_double_graphic_heading_pane_g1

0xc874,	// (0x0002c95a) list_double_graphic_heading_pane_g2_ParamLimits

0xc874,	// (0x0002c95a) list_double_graphic_heading_pane_g2

0xc883,	// (0x0002c969) list_double_graphic_heading_pane_g3_ParamLimits

0xc883,	// (0x0002c969) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0002f74e) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0002f74e) list_double_graphic_heading_pane_g

0xc8b1,	// (0x0002c997) list_double_graphic_heading_pane_t1_ParamLimits

0xc8b1,	// (0x0002c997) list_double_graphic_heading_pane_t1

0xc7cd,	// (0x0002c8b3) list_double_graphic_heading_pane_t2_ParamLimits

0xc7cd,	// (0x0002c8b3) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0002f755) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0002f755) list_double_graphic_heading_pane_t

0xc8c7,	// (0x0002c9ad) list_double_time_pane_g1_ParamLimits

0xc8c7,	// (0x0002c9ad) list_double_time_pane_g1

0xc8d6,	// (0x0002c9bc) list_double_time_pane_g2_ParamLimits

0xc8d6,	// (0x0002c9bc) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0002f75a) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0002f75a) list_double_time_pane_g

0xc8e2,	// (0x0002c9c8) list_double_time_pane_t1_ParamLimits

0xc8e2,	// (0x0002c9c8) list_double_time_pane_t1

0xc8f8,	// (0x0002c9de) list_double_time_pane_t2_ParamLimits

0xc8f8,	// (0x0002c9de) list_double_time_pane_t2

0xc90a,	// (0x0002c9f0) list_double_time_pane_t3_ParamLimits

0xc90a,	// (0x0002c9f0) list_double_time_pane_t3

0xc91c,	// (0x0002ca02) list_double_time_pane_t4_ParamLimits

0xc91c,	// (0x0002ca02) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0002f75f) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0002f75f) list_double_time_pane_t

0xc92e,	// (0x0002ca14) list_setting_pane_g1_ParamLimits

0xc92e,	// (0x0002ca14) list_setting_pane_g1

0xc709,	// (0x0002c7ef) list_setting_pane_g2_ParamLimits

0xc709,	// (0x0002c7ef) list_setting_pane_g2

0x0001,

0xf682,	// (0x0002f768) list_setting_pane_g_ParamLimits

0xf682,	// (0x0002f768) list_setting_pane_g

0xc93a,	// (0x0002ca20) list_setting_pane_t1_ParamLimits

0xc93a,	// (0x0002ca20) list_setting_pane_t1

0xc954,	// (0x0002ca3a) list_setting_pane_t2_ParamLimits

0xc954,	// (0x0002ca3a) list_setting_pane_t2

0x0002,

0xf687,	// (0x0002f76d) list_setting_pane_t_ParamLimits

0xf687,	// (0x0002f76d) list_setting_pane_t

0xc991,	// (0x0002ca77) set_value_pane_cp_ParamLimits

0xc991,	// (0x0002ca77) set_value_pane_cp

0xc99d,	// (0x0002ca83) list_setting_number_pane_g1_ParamLimits

0xc99d,	// (0x0002ca83) list_setting_number_pane_g1

0xc9a9,	// (0x0002ca8f) list_setting_number_pane_g2_ParamLimits

0xc9a9,	// (0x0002ca8f) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0002f774) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0002f774) list_setting_number_pane_g

0xc9b5,	// (0x0002ca9b) list_setting_number_pane_t1_ParamLimits

0xc9b5,	// (0x0002ca9b) list_setting_number_pane_t1

0xc9cc,	// (0x0002cab2) list_setting_number_pane_t2_ParamLimits

0xc9cc,	// (0x0002cab2) list_setting_number_pane_t2

0xc9e6,	// (0x0002cacc) list_setting_number_pane_t3_ParamLimits

0xc9e6,	// (0x0002cacc) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0002f779) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0002f779) list_setting_number_pane_t

0xc991,	// (0x0002ca77) set_value_pane_ParamLimits

0xc991,	// (0x0002ca77) set_value_pane

0x0e55,	// (0x00020f3b) bg_set_opt_pane_ParamLimits

0x0e55,	// (0x00020f3b) bg_set_opt_pane

0xca27,	// (0x0002cb0d) set_value_pane_t1

0x0e76,	// (0x00020f5c) slider_set_pane_cp3

0x0e7f,	// (0x00020f65) volume_small_pane_cp

0x0e88,	// (0x00020f6e) list_form_gen_pane

0x0e44,	// (0x00020f2a) scroll_pane_cp8

0xca45,	// (0x0002cb2b) form_field_data_pane_ParamLimits

0xca45,	// (0x0002cb2b) form_field_data_pane

0xca65,	// (0x0002cb4b) form_field_data_wide_pane_ParamLimits

0xca65,	// (0x0002cb4b) form_field_data_wide_pane

0xca84,	// (0x0002cb6a) form_field_popup_pane_ParamLimits

0xca84,	// (0x0002cb6a) form_field_popup_pane

0xca9c,	// (0x0002cb82) form_field_popup_wide_pane_ParamLimits

0xca9c,	// (0x0002cb82) form_field_popup_wide_pane

0xcab3,	// (0x0002cb99) form_field_slider_pane_ParamLimits

0xcab3,	// (0x0002cb99) form_field_slider_pane

0xcac6,	// (0x0002cbac) form_field_slider_wide_pane_ParamLimits

0xcac6,	// (0x0002cbac) form_field_slider_wide_pane

0x0e91,	// (0x00020f77) data_form_pane

0xcae1,	// (0x0002cbc7) form_field_data_pane_t1

0x0e9d,	// (0x00020f83) input_focus_pane

0x0eab,	// (0x00020f91) data_form_wide_pane

0xcb05,	// (0x0002cbeb) form_field_data_wide_pane_t1

0x0cc3,	// (0x00020da9) input_focus_pane_cp6

0xcb27,	// (0x0002cc0d) form_field_popup_pane_t1

0x0e9d,	// (0x00020f83) input_focus_pane_cp7

0x0e91,	// (0x00020f77) list_form_pane

0xcb47,	// (0x0002cc2d) form_field_popup_wide_pane_t1

0x0e9d,	// (0x00020f83) input_focus_pane_cp8

0x0ed7,	// (0x00020fbd) list_form_wide_pane

0xcb64,	// (0x0002cc4a) form_field_slider_pane_t1_ParamLimits

0xcb64,	// (0x0002cc4a) form_field_slider_pane_t1

0xcb7a,	// (0x0002cc60) form_field_slider_pane_t2_ParamLimits

0xcb7a,	// (0x0002cc60) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0002f789) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0002f789) form_field_slider_pane_t

0x08e7,	// (0x000209cd) input_focus_pane_cp9_ParamLimits

0x08e7,	// (0x000209cd) input_focus_pane_cp9

0xcb8f,	// (0x0002cc75) slider_cont_pane_ParamLimits

0xcb8f,	// (0x0002cc75) slider_cont_pane

0x0ee6,	// (0x00020fcc) form_field_slider_wide_pane_t1_ParamLimits

0x0ee6,	// (0x00020fcc) form_field_slider_wide_pane_t1

0xcba3,	// (0x0002cc89) form_field_slider_wide_pane_t2_ParamLimits

0xcba3,	// (0x0002cc89) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0002f78e) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0002f78e) form_field_slider_wide_pane_t

0x08e7,	// (0x000209cd) input_focus_pane_cp10_ParamLimits

0x08e7,	// (0x000209cd) input_focus_pane_cp10

0xcbb5,	// (0x0002cc9b) slider_cont_pane_cp1_ParamLimits

0xcbb5,	// (0x0002cc9b) slider_cont_pane_cp1

0xcbcb,	// (0x0002ccb1) slider_form_pane_cp

0x0ef8,	// (0x00020fde) input_focus_pane_g1

0x0f00,	// (0x00020fe6) input_focus_pane_g2

0x0f08,	// (0x00020fee) input_focus_pane_g3

0x0f10,	// (0x00020ff6) input_focus_pane_g4

0x0f18,	// (0x00020ffe) input_focus_pane_g5

0x0f20,	// (0x00021006) input_focus_pane_g6

0x0f28,	// (0x0002100e) input_focus_pane_g7

0x0f30,	// (0x00021016) input_focus_pane_g8

0x0f38,	// (0x0002101e) input_focus_pane_g9

0x0817,	// (0x000208fd) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0002f793) input_focus_pane_g

0x2460,	// (0x00022546) wait_border_pane_g3_copy1

0xcbd3,	// (0x0002ccb9) data_form_pane_t1

0x0817,	// (0x000208fd) wait_anim_pane_g1_copy1

0xcdd8,	// (0x0002cebe) data_form_wide_pane_t1

0xcbed,	// (0x0002ccd3) list_form_graphic_pane_cp_ParamLimits

0xcbed,	// (0x0002ccd3) list_form_graphic_pane_cp

0x610f,	// (0x000261f5) slider_form_pane_g1

0x6118,	// (0x000261fe) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0002fa86) slider_form_pane_g

0xcc01,	// (0x0002cce7) list_form_graphic_pane_ParamLimits

0xcc01,	// (0x0002cce7) list_form_graphic_pane

0xcc17,	// (0x0002ccfd) list_form_graphic_pane_g1

0xcc1f,	// (0x0002cd05) list_form_graphic_pane_t1_ParamLimits

0xcc1f,	// (0x0002cd05) list_form_graphic_pane_t1

0x08fd,	// (0x000209e3) list_highlight_pane_cp5_ParamLimits

0x08fd,	// (0x000209e3) list_highlight_pane_cp5

0xcc34,	// (0x0002cd1a) find_pane_g1

0x0f54,	// (0x0002103a) input_find_pane

0xcc3d,	// (0x0002cd23) input_find_pane_g1_ParamLimits

0xcc3d,	// (0x0002cd23) input_find_pane_g1

0xcc49,	// (0x0002cd2f) input_find_pane_t1_ParamLimits

0xcc49,	// (0x0002cd2f) input_find_pane_t1

0xcc5e,	// (0x0002cd44) input_find_pane_t2_ParamLimits

0xcc5e,	// (0x0002cd44) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0002f7a8) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0002f7a8) input_find_pane_t

0x0f5d,	// (0x00021043) input_focus_pane_cp5_ParamLimits

0x0f5d,	// (0x00021043) input_focus_pane_cp5

0x08e7,	// (0x000209cd) bg_popup_window_pane_cp2_ParamLimits

0x08e7,	// (0x000209cd) bg_popup_window_pane_cp2

0x0f77,	// (0x0002105d) listscroll_menu_pane_ParamLimits

0x0f77,	// (0x0002105d) listscroll_menu_pane

0x0f83,	// (0x00021069) popup_submenu_window_ParamLimits

0x0f83,	// (0x00021069) popup_submenu_window

0x0fa7,	// (0x0002108d) find_popup_pane_g1

0x0faf,	// (0x00021095) input_popup_find_pane_cp

0x0f5d,	// (0x00021043) input_focus_pane_cp4_ParamLimits

0x0f5d,	// (0x00021043) input_focus_pane_cp4

0x0fb9,	// (0x0002109f) input_popup_find_pane_t1_ParamLimits

0x0fb9,	// (0x0002109f) input_popup_find_pane_t1

0x0899,	// (0x0002097f) bg_popup_sub_pane_cp

0x0fe7,	// (0x000210cd) listscroll_popup_sub_pane

0x0fef,	// (0x000210d5) list_submenu_pane_ParamLimits

0x0fef,	// (0x000210d5) list_submenu_pane

0x1000,	// (0x000210e6) scroll_pane_cp4

0x0f40,	// (0x00021026) list_single_popup_submenu_pane_ParamLimits

0x0f40,	// (0x00021026) list_single_popup_submenu_pane

0x1008,	// (0x000210ee) list_single_popup_submenu_pane_g1

0x1010,	// (0x000210f6) list_single_popup_submenu_pane_t1_ParamLimits

0x1010,	// (0x000210f6) list_single_popup_submenu_pane_t1

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp1_ParamLimits

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp1

0x3abc,	// (0x00023ba2) tabs_2_active_pane_g1

0x3ac4,	// (0x00023baa) tabs_2_active_pane_t1

0x08fd,	// (0x000209e3) bg_passive_tab_pane_cp1_ParamLimits

0x08fd,	// (0x000209e3) bg_passive_tab_pane_cp1

0x3abc,	// (0x00023ba2) tabs_2_passive_pane_g1

0x3ac4,	// (0x00023baa) tabs_2_passive_pane_t1

0x1208,	// (0x000212ee) bg_active_tab_pane_cp4

0x3ad6,	// (0x00023bbc) tabs_2_long_active_pane_t1

0x3ae9,	// (0x00023bcf) bg_passive_tab_pane_cp4

0x1f65,	// (0x0002204b) list_single_midp_graphic_pane_g4_ParamLimits

0x1208,	// (0x000212ee) bg_active_tab_pane_cp5

0x3af5,	// (0x00023bdb) tabs_3_long_active_pane_t1

0x3ae9,	// (0x00023bcf) bg_passive_tab_pane_cp5

0x1f65,	// (0x0002204b) list_single_midp_graphic_pane_g4

0x08fd,	// (0x000209e3) bg_popup_window_pane_cp13_ParamLimits

0x08fd,	// (0x000209e3) bg_popup_window_pane_cp13

0x102e,	// (0x00021114) listscroll_popup_fast_pane_ParamLimits

0x102e,	// (0x00021114) listscroll_popup_fast_pane

0x103d,	// (0x00021123) grid_popup_fast_pane_ParamLimits

0x103d,	// (0x00021123) grid_popup_fast_pane

0x104f,	// (0x00021135) scroll_pane_cp9_ParamLimits

0x104f,	// (0x00021135) scroll_pane_cp9

0x7378,	// (0x0002745e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7378,	// (0x0002745e) list_single_graphic_hl_pane_t1_cp2

0x1073,	// (0x00021159) input_focus_pane_cp20_ParamLimits

0x1073,	// (0x00021159) input_focus_pane_cp20

0x1081,	// (0x00021167) query_popup_data_pane_t1_ParamLimits

0x1081,	// (0x00021167) query_popup_data_pane_t1

0x1094,	// (0x0002117a) query_popup_data_pane_t2_ParamLimits

0x1094,	// (0x0002117a) query_popup_data_pane_t2

0x10da,	// (0x000211c0) query_popup_data_pane_t3_ParamLimits

0x10da,	// (0x000211c0) query_popup_data_pane_t3

0x111b,	// (0x00021201) query_popup_data_pane_t4_ParamLimits

0x111b,	// (0x00021201) query_popup_data_pane_t4

0x1157,	// (0x0002123d) query_popup_data_pane_t5_ParamLimits

0x1157,	// (0x0002123d) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0002f7ad) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0002f7ad) query_popup_data_pane_t

0x0ef8,	// (0x00020fde) bg_set_opt_pane_g1

0x0f00,	// (0x00020fe6) bg_set_opt_pane_g2

0x0f08,	// (0x00020fee) bg_set_opt_pane_g3

0x0f10,	// (0x00020ff6) bg_set_opt_pane_g4

0x0f18,	// (0x00020ffe) bg_set_opt_pane_g5

0x0f20,	// (0x00021006) bg_set_opt_pane_g6

0x0f28,	// (0x0002100e) bg_set_opt_pane_g7

0x0f30,	// (0x00021016) bg_set_opt_pane_g8

0x0f38,	// (0x0002101e) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0002f7b8) bg_set_opt_pane_g

0xd8be,	// (0x0002d9a4) control_top_pane_stacon_ParamLimits

0xd8be,	// (0x0002d9a4) control_top_pane_stacon

0xd911,	// (0x0002d9f7) signal_pane_stacon_ParamLimits

0xd911,	// (0x0002d9f7) signal_pane_stacon

0x171a,	// (0x00021800) stacon_top_pane_g1_ParamLimits

0x171a,	// (0x00021800) stacon_top_pane_g1

0xd936,	// (0x0002da1c) title_pane_stacon_ParamLimits

0xd936,	// (0x0002da1c) title_pane_stacon

0xd958,	// (0x0002da3e) uni_indicator_pane_stacon_ParamLimits

0xd958,	// (0x0002da3e) uni_indicator_pane_stacon

0xd96d,	// (0x0002da53) battery_pane_stacon_ParamLimits

0xd96d,	// (0x0002da53) battery_pane_stacon

0xd9ad,	// (0x0002da93) control_bottom_pane_stacon_ParamLimits

0xd9ad,	// (0x0002da93) control_bottom_pane_stacon

0xd9cc,	// (0x0002dab2) navi_pane_stacon_ParamLimits

0xd9cc,	// (0x0002dab2) navi_pane_stacon

0x173c,	// (0x00021822) stacon_bottom_pane_g1_ParamLimits

0x173c,	// (0x00021822) stacon_bottom_pane_g1

0x118e,	// (0x00021274) aid_levels_signal_lsc_ParamLimits

0x118e,	// (0x00021274) aid_levels_signal_lsc

0xd67a,	// (0x0002d760) signal_pane_stacon_g1_ParamLimits

0xd67a,	// (0x0002d760) signal_pane_stacon_g1

0xd686,	// (0x0002d76c) signal_pane_stacon_g2_ParamLimits

0xd686,	// (0x0002d76c) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0002f7cb) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0002f7cb) signal_pane_stacon_g

0xd6ba,	// (0x0002d7a0) title_pane_stacon_t1_ParamLimits

0xd6ba,	// (0x0002d7a0) title_pane_stacon_t1

0x11a8,	// (0x0002128e) uni_indicator_pane_stacon_g1

0x11b2,	// (0x00021298) uni_indicator_pane_stacon_g2

0x11bc,	// (0x000212a2) uni_indicator_pane_stacon_g3

0x11c6,	// (0x000212ac) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0002f7d7) uni_indicator_pane_stacon_g

0xd6df,	// (0x0002d7c5) control_top_pane_stacon_g1

0xd6e7,	// (0x0002d7cd) control_top_pane_stacon_t1_ParamLimits

0xd6e7,	// (0x0002d7cd) control_top_pane_stacon_t1

0x11d0,	// (0x000212b6) aid_levels_battery_lsc_ParamLimits

0x11d0,	// (0x000212b6) aid_levels_battery_lsc

0xd718,	// (0x0002d7fe) battery_pane_stacon_g1_ParamLimits

0xd718,	// (0x0002d7fe) battery_pane_stacon_g1

0xd724,	// (0x0002d80a) battery_pane_stacon_g2_ParamLimits

0xd724,	// (0x0002d80a) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0002f7e0) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0002f7e0) battery_pane_stacon_g

0xd753,	// (0x0002d839) navi_icon_pane_stacon

0xd763,	// (0x0002d849) navi_navi_pane_stacon

0xd753,	// (0x0002d839) navi_text_pane_stacon

0xd6df,	// (0x0002d7c5) control_bottom_pane_stacon_g1

0xd773,	// (0x0002d859) control_bottom_pane_stacon_t1_ParamLimits

0xd773,	// (0x0002d859) control_bottom_pane_stacon_t1

0x3c31,	// (0x00023d17) grid_app_pane_ParamLimits

0x3c31,	// (0x00023d17) grid_app_pane

0x3c4d,	// (0x00023d33) scroll_pane_cp15_ParamLimits

0x3c4d,	// (0x00023d33) scroll_pane_cp15

0x3c60,	// (0x00023d46) cell_app_pane_ParamLimits

0x3c60,	// (0x00023d46) cell_app_pane

0x3c82,	// (0x00023d68) cell_app_pane_g1_ParamLimits

0x3c82,	// (0x00023d68) cell_app_pane_g1

0x13bb,	// (0x000214a1) cell_app_pane_g2_ParamLimits

0x13bb,	// (0x000214a1) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0002f7e5) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0002f7e5) cell_app_pane_g

0x13c7,	// (0x000214ad) cell_app_pane_t1_ParamLimits

0x13c7,	// (0x000214ad) cell_app_pane_t1

0x13d9,	// (0x000214bf) grid_highlight_pane_ParamLimits

0x13d9,	// (0x000214bf) grid_highlight_pane

0x0ef8,	// (0x00020fde) cell_highlight_pane_g1

0x0f00,	// (0x00020fe6) cell_highlight_pane_g2

0x0f08,	// (0x00020fee) cell_highlight_pane_g3

0x0f10,	// (0x00020ff6) cell_highlight_pane_g4

0x0f18,	// (0x00020ffe) cell_highlight_pane_g5

0x0f20,	// (0x00021006) cell_highlight_pane_g6

0x0f28,	// (0x0002100e) cell_highlight_pane_g7

0x0f30,	// (0x00021016) cell_highlight_pane_g8

0x0f38,	// (0x0002101e) cell_highlight_pane_g9

0x0817,	// (0x000208fd) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0002f793) cell_highlight_pane_g

0x13ea,	// (0x000214d0) bg_scroll_pane

0xd7b7,	// (0x0002d89d) scroll_handle_pane

0x1431,	// (0x00021517) scroll_bg_pane_g1

0x1446,	// (0x0002152c) scroll_bg_pane_g2

0x145e,	// (0x00021544) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0002f7ea) scroll_bg_pane_g

0x1473,	// (0x00021559) scroll_handle_focus_pane_ParamLimits

0x1473,	// (0x00021559) scroll_handle_focus_pane

0x1431,	// (0x00021517) scroll_handle_pane_g1

0x1480,	// (0x00021566) scroll_handle_pane_g2

0x145e,	// (0x00021544) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0002f7f1) scroll_handle_pane_g

0x0f5d,	// (0x00021043) bg_popup_sub_pane_cp21_ParamLimits

0x0f5d,	// (0x00021043) bg_popup_sub_pane_cp21

0x1494,	// (0x0002157a) popup_fep_japan_predictive_window_t1_ParamLimits

0x1494,	// (0x0002157a) popup_fep_japan_predictive_window_t1

0x14ab,	// (0x00021591) popup_fep_japan_predictive_window_t2_ParamLimits

0x14ab,	// (0x00021591) popup_fep_japan_predictive_window_t2

0x14de,	// (0x000215c4) popup_fep_japan_predictive_window_t3_ParamLimits

0x14de,	// (0x000215c4) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0002f7f8) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0002f7f8) popup_fep_japan_predictive_window_t

0x0899,	// (0x0002097f) bg_popup_sub_pane_cp23

0x1515,	// (0x000215fb) listscroll_japin_cand_pane

0x151d,	// (0x00021603) popup_fep_japan_candidate_window_t1

0x152b,	// (0x00021611) candidate_pane_ParamLimits

0x152b,	// (0x00021611) candidate_pane

0x153e,	// (0x00021624) scroll_pane_cp30

0x1546,	// (0x0002162c) list_single_popup_jap_candidate_pane_ParamLimits

0x1546,	// (0x0002162c) list_single_popup_jap_candidate_pane

0x0899,	// (0x0002097f) list_highlight_pane_cp30

0x155b,	// (0x00021641) list_single_popup_jap_candidate_pane_t1

0x3ce2,	// (0x00023dc8) level_1_signal

0x3cef,	// (0x00023dd5) level_2_signal

0x3cfc,	// (0x00023de2) level_3_signal

0x3d09,	// (0x00023def) level_4_signal

0x3d16,	// (0x00023dfc) level_5_signal

0x3d23,	// (0x00023e09) level_6_signal

0x3d30,	// (0x00023e16) level_7_signal

0x3ce2,	// (0x00023dc8) level_1_battery

0x3cef,	// (0x00023dd5) level_2_battery

0x3cfc,	// (0x00023de2) level_3_battery

0x3d09,	// (0x00023def) level_4_battery

0x3d16,	// (0x00023dfc) level_5_battery

0x3d23,	// (0x00023e09) level_6_battery

0x3d30,	// (0x00023e16) level_7_battery

0x1582,	// (0x00021668) list_menu_pane_ParamLimits

0x1582,	// (0x00021668) list_menu_pane

0x1593,	// (0x00021679) scroll_pane_cp25_ParamLimits

0x1593,	// (0x00021679) scroll_pane_cp25

0x3d5c,	// (0x00023e42) list_double2_graphic_pane_cp2_ParamLimits

0x3d5c,	// (0x00023e42) list_double2_graphic_pane_cp2

0x3d5c,	// (0x00023e42) list_double2_large_graphic_pane_cp2_ParamLimits

0x3d5c,	// (0x00023e42) list_double2_large_graphic_pane_cp2

0x3d5c,	// (0x00023e42) list_double2_pane_cp2_ParamLimits

0x3d5c,	// (0x00023e42) list_double2_pane_cp2

0x3d5c,	// (0x00023e42) list_double_graphic_pane_cp2_ParamLimits

0x3d5c,	// (0x00023e42) list_double_graphic_pane_cp2

0x3d5c,	// (0x00023e42) list_double_large_graphic_pane_cp2_ParamLimits

0x3d5c,	// (0x00023e42) list_double_large_graphic_pane_cp2

0x3d5c,	// (0x00023e42) list_double_number_pane_cp2_ParamLimits

0x3d5c,	// (0x00023e42) list_double_number_pane_cp2

0x3d5c,	// (0x00023e42) list_double_pane_cp2_ParamLimits

0x3d5c,	// (0x00023e42) list_double_pane_cp2

0x3d6c,	// (0x00023e52) list_single_2graphic_pane_cp2_ParamLimits

0x3d6c,	// (0x00023e52) list_single_2graphic_pane_cp2

0x3d6c,	// (0x00023e52) list_single_graphic_heading_pane_cp2_ParamLimits

0x3d6c,	// (0x00023e52) list_single_graphic_heading_pane_cp2

0x3d6c,	// (0x00023e52) list_single_graphic_pane_cp2_ParamLimits

0x3d6c,	// (0x00023e52) list_single_graphic_pane_cp2

0x3d6c,	// (0x00023e52) list_single_heading_pane_cp2_ParamLimits

0x3d6c,	// (0x00023e52) list_single_heading_pane_cp2

0x3d81,	// (0x00023e67) list_single_large_graphic_pane_cp2_ParamLimits

0x3d81,	// (0x00023e67) list_single_large_graphic_pane_cp2

0x3d6c,	// (0x00023e52) list_single_number_heading_pane_cp2_ParamLimits

0x3d6c,	// (0x00023e52) list_single_number_heading_pane_cp2

0x3d6c,	// (0x00023e52) list_single_number_pane_cp2_ParamLimits

0x3d6c,	// (0x00023e52) list_single_number_pane_cp2

0x3d6c,	// (0x00023e52) list_single_pane_cp2_ParamLimits

0x3d6c,	// (0x00023e52) list_single_pane_cp2

0x15b5,	// (0x0002169b) bg_popup_sub_pane_cp22

0xd866,	// (0x0002d94c) popup_side_volume_key_window_g1

0xd88a,	// (0x0002d970) popup_side_volume_key_window_t1

0xd8a6,	// (0x0002d98c) volume_small_pane_cp1

0x08e7,	// (0x000209cd) bg_popup_sub_pane_cp24_ParamLimits

0x08e7,	// (0x000209cd) bg_popup_sub_pane_cp24

0x15cb,	// (0x000216b1) fep_china_uni_candidate_pane_ParamLimits

0x15cb,	// (0x000216b1) fep_china_uni_candidate_pane

0x15df,	// (0x000216c5) fep_china_uni_entry_pane

0x15ef,	// (0x000216d5) popup_fep_china_uni_window_g1

0x160b,	// (0x000216f1) fep_china_uni_entry_pane_g1

0x1613,	// (0x000216f9) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0002f825) fep_china_uni_entry_pane_g

0x161b,	// (0x00021701) fep_entry_item_pane

0x1625,	// (0x0002170b) fep_candidate_item_pane

0x162d,	// (0x00021713) fep_china_uni_candidate_pane_g1

0x1635,	// (0x0002171b) fep_china_uni_candidate_pane_g2

0x163d,	// (0x00021723) fep_china_uni_candidate_pane_g3

0x1645,	// (0x0002172b) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0002f82a) fep_china_uni_candidate_pane_g

0x0817,	// (0x000208fd) fep_entry_item_pane_g1

0x164d,	// (0x00021733) fep_entry_item_pane_t1_ParamLimits

0x164d,	// (0x00021733) fep_entry_item_pane_t1

0x1663,	// (0x00021749) fep_candidate_item_pane_t1_ParamLimits

0x1663,	// (0x00021749) fep_candidate_item_pane_t1

0x1678,	// (0x0002175e) fep_candidate_item_pane_t2_ParamLimits

0x1678,	// (0x0002175e) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0002f833) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0002f833) fep_candidate_item_pane_t

0x08fd,	// (0x000209e3) list_highlight_pane_cp31_ParamLimits

0x08fd,	// (0x000209e3) list_highlight_pane_cp31

0x168a,	// (0x00021770) level_1_signal_lsc

0x1693,	// (0x00021779) level_2_signal_lsc

0x169c,	// (0x00021782) level_3_signal_lsc

0x16a5,	// (0x0002178b) level_4_signal_lsc

0x16ae,	// (0x00021794) level_5_signal_lsc

0x16b7,	// (0x0002179d) level_6_signal_lsc

0x16c0,	// (0x000217a6) level_7_signal_lsc

0x16c0,	// (0x000217a6) level_1_battery_lsc

0x16c9,	// (0x000217af) level_2_battery_lsc

0x16d2,	// (0x000217b8) level_3_battery_lsc

0x16db,	// (0x000217c1) level_4_battery_lsc

0x16e4,	// (0x000217ca) level_5_battery_lsc

0x16ed,	// (0x000217d3) level_6_battery_lsc

0x168a,	// (0x00021770) level_7_battery_lsc

0x16f6,	// (0x000217dc) scroll_handle_focus_pane_g1

0x16ff,	// (0x000217e5) scroll_handle_focus_pane_g2

0x1708,	// (0x000217ee) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0002f838) scroll_handle_focus_pane_g

0xcc73,	// (0x0002cd59) list_single_2graphic_pane_g1_ParamLimits

0xcc73,	// (0x0002cd59) list_single_2graphic_pane_g1

0xd5c4,	// (0x0002d6aa) list_single_2graphic_pane_g2_ParamLimits

0xd5c4,	// (0x0002d6aa) list_single_2graphic_pane_g2

0xd5b8,	// (0x0002d69e) list_single_2graphic_pane_g3_ParamLimits

0xd5b8,	// (0x0002d69e) list_single_2graphic_pane_g3

0xcc7f,	// (0x0002cd65) list_single_2graphic_pane_g4_ParamLimits

0xcc7f,	// (0x0002cd65) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0002f83f) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0002f83f) list_single_2graphic_pane_g

0xcc8b,	// (0x0002cd71) list_single_2graphic_pane_t1_ParamLimits

0xcc8b,	// (0x0002cd71) list_single_2graphic_pane_t1

0xd8ae,	// (0x0002d994) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd8ae,	// (0x0002d994) list_double2_graphic_large_graphic_pane_g1

0xd66b,	// (0x0002d751) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd66b,	// (0x0002d751) list_double2_graphic_large_graphic_pane_g2

0xd63e,	// (0x0002d724) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd63e,	// (0x0002d724) list_double2_graphic_large_graphic_pane_g3

0xccb9,	// (0x0002cd9f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xccb9,	// (0x0002cd9f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0002f848) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0002f848) list_double2_graphic_large_graphic_pane_g

0xccc5,	// (0x0002cdab) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xccc5,	// (0x0002cdab) list_double2_graphic_large_graphic_pane_t1

0xccdb,	// (0x0002cdc1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xccdb,	// (0x0002cdc1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0002f851) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0002f851) list_double2_graphic_large_graphic_pane_t

0x17e3,	// (0x000218c9) popup_fast_swap_window_ParamLimits

0x17e3,	// (0x000218c9) popup_fast_swap_window

0x17ff,	// (0x000218e5) popup_side_volume_key_window

0x1819,	// (0x000218ff) stacon_top_pane

0x1823,	// (0x00021909) status_pane_ParamLimits

0x1823,	// (0x00021909) status_pane

0x1819,	// (0x000218ff) status_small_pane

0x0899,	// (0x0002097f) control_pane

0x0899,	// (0x0002097f) stacon_bottom_pane

0x0e44,	// (0x00020f2a) scroll_pane_cp121

0x0e88,	// (0x00020f6e) set_content_pane

0x3e87,	// (0x00023f6d) bg_active_tab_pane_g1_cp1

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp1

0x3e7e,	// (0x00023f64) bg_active_tab_pane_g3_cp1

0x3e87,	// (0x00023f6d) bg_passive_tab_pane_g1_cp1

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp1

0x3e7e,	// (0x00023f64) bg_passive_tab_pane_g3_cp1

0x3e99,	// (0x00023f7f) bg_active_tab_pane_g1_cp2

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp2

0x3e90,	// (0x00023f76) bg_active_tab_pane_g3_cp2

0x3e99,	// (0x00023f7f) bg_passive_tab_pane_g1_cp2

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp2

0x3e90,	// (0x00023f76) bg_passive_tab_pane_g3_cp2

0x3eab,	// (0x00023f91) bg_active_tab_pane_g1_cp3

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp3

0x3ea2,	// (0x00023f88) bg_active_tab_pane_g3_cp3

0x3eab,	// (0x00023f91) bg_passive_tab_pane_g1_cp3

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp3

0x3ea2,	// (0x00023f88) bg_passive_tab_pane_g3_cp3

0x3ebd,	// (0x00023fa3) bg_active_tab_pane_g1_cp4

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp4

0x3eb4,	// (0x00023f9a) bg_active_tab_pane_g3_cp4

0x3ebd,	// (0x00023fa3) bg_passive_tab_pane_g1_cp4

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp4

0x3eb4,	// (0x00023f9a) bg_passive_tab_pane_g3_cp4

0x1758,	// (0x0002183e) bg_active_tab_pane_g1_cp5

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp5

0x1761,	// (0x00021847) bg_active_tab_pane_g3_cp5

0x1758,	// (0x0002183e) bg_passive_tab_pane_g1_cp5

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp5

0x1761,	// (0x00021847) bg_passive_tab_pane_g3_cp5

0x3ff3,	// (0x000240d9) list_set_graphic_pane_ParamLimits

0x3ff3,	// (0x000240d9) list_set_graphic_pane

0x0899,	// (0x0002097f) bg_set_opt_pane_cp4

0x176a,	// (0x00021850) list_set_graphic_pane_g1_ParamLimits

0x176a,	// (0x00021850) list_set_graphic_pane_g1

0x1776,	// (0x0002185c) list_set_graphic_pane_g2_ParamLimits

0x1776,	// (0x0002185c) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0002f856) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0002f856) list_set_graphic_pane_g

0x0009,

0xfad7,	// (0x0002fbbd) volume_small_pane_cp_g

0x1798,	// (0x0002187e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1798,	// (0x0002187e) list_double2_large_graphic_pane_g1_cp2

0x17a4,	// (0x0002188a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x17a4,	// (0x0002188a) list_double2_large_graphic_pane_g2_cp2

0x17b3,	// (0x00021899) list_double2_large_graphic_pane_g3_cp2

0x17bb,	// (0x000218a1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x17bb,	// (0x000218a1) list_double2_large_graphic_pane_t1_cp2

0x17d1,	// (0x000218b7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x17d1,	// (0x000218b7) list_double2_large_graphic_pane_t2_cp2

0x5ebf,	// (0x00025fa5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5ebf,	// (0x00025fa5) list_double_large_graphic_pane_g1_cp2

0x5ed0,	// (0x00025fb6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5ed0,	// (0x00025fb6) list_double_large_graphic_pane_g2_cp2

0x18fe,	// (0x000219e4) list_double_large_graphic_pane_g3_cp2

0x5edf,	// (0x00025fc5) list_double_large_graphic_pane_g4_cp

0x5ee7,	// (0x00025fcd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5ee7,	// (0x00025fcd) list_double_large_graphic_pane_t1_cp2

0x5efe,	// (0x00025fe4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5efe,	// (0x00025fe4) list_double_large_graphic_pane_t2_cp2

0x1831,	// (0x00021917) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1831,	// (0x00021917) list_double2_graphic_pane_g1_cp2

0x183d,	// (0x00021923) list_double2_graphic_pane_g2_cp2_ParamLimits

0x183d,	// (0x00021923) list_double2_graphic_pane_g2_cp2

0x184c,	// (0x00021932) list_double2_graphic_pane_g3_cp2

0x1854,	// (0x0002193a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1854,	// (0x0002193a) list_double2_graphic_pane_t1_cp2

0x186a,	// (0x00021950) list_double2_graphic_pane_t2_cp2_ParamLimits

0x186a,	// (0x00021950) list_double2_graphic_pane_t2_cp2

0x187c,	// (0x00021962) list_single_number_heading_pane_g1_cp2_ParamLimits

0x187c,	// (0x00021962) list_single_number_heading_pane_g1_cp2

0x1888,	// (0x0002196e) list_single_number_heading_pane_g2_cp2

0x1890,	// (0x00021976) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1890,	// (0x00021976) list_single_number_heading_pane_t1_cp2

0x18a6,	// (0x0002198c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x18a6,	// (0x0002198c) list_single_number_heading_pane_t2_cp2

0x18b8,	// (0x0002199e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x18b8,	// (0x0002199e) list_single_number_heading_pane_t3_cp2

0x187c,	// (0x00021962) list_single_heading_pane_g1_cp2_ParamLimits

0x187c,	// (0x00021962) list_single_heading_pane_g1_cp2

0x1888,	// (0x0002196e) list_single_heading_pane_g2_cp2

0x1890,	// (0x00021976) list_single_heading_pane_t1_cp2_ParamLimits

0x1890,	// (0x00021976) list_single_heading_pane_t1_cp2

0x5cc9,	// (0x00025daf) list_single_heading_pane_t2_cp2_ParamLimits

0x5cc9,	// (0x00025daf) list_single_heading_pane_t2_cp2

0x5c19,	// (0x00025cff) list_double_graphic_pane_g1_cp2_ParamLimits

0x5c19,	// (0x00025cff) list_double_graphic_pane_g1_cp2

0x5c25,	// (0x00025d0b) list_double_graphic_pane_g2_cp2_ParamLimits

0x5c25,	// (0x00025d0b) list_double_graphic_pane_g2_cp2

0x5c34,	// (0x00025d1a) list_double_graphic_pane_g3_cp2

0x5c3c,	// (0x00025d22) list_double_graphic_pane_t1_cp2_ParamLimits

0x5c3c,	// (0x00025d22) list_double_graphic_pane_t1_cp2

0x5c52,	// (0x00025d38) list_double_graphic_pane_t2_cp2_ParamLimits

0x5c52,	// (0x00025d38) list_double_graphic_pane_t2_cp2

0x18f2,	// (0x000219d8) list_double_number_pane_g1_cp2_ParamLimits

0x18f2,	// (0x000219d8) list_double_number_pane_g1_cp2

0x18fe,	// (0x000219e4) list_double_number_pane_g2_cp2

0x5bdf,	// (0x00025cc5) list_double_number_pane_t1_cp2_ParamLimits

0x5bdf,	// (0x00025cc5) list_double_number_pane_t1_cp2

0x5bf1,	// (0x00025cd7) list_double_number_pane_t2_cp2_ParamLimits

0x5bf1,	// (0x00025cd7) list_double_number_pane_t2_cp2

0x5c07,	// (0x00025ced) list_double_number_pane_t3_cp2_ParamLimits

0x5c07,	// (0x00025ced) list_double_number_pane_t3_cp2

0x5b57,	// (0x00025c3d) list_single_graphic_pane_g1_cp2_ParamLimits

0x5b57,	// (0x00025c3d) list_single_graphic_pane_g1_cp2

0x187c,	// (0x00021962) list_single_graphic_pane_g2_cp2_ParamLimits

0x187c,	// (0x00021962) list_single_graphic_pane_g2_cp2

0x1888,	// (0x0002196e) list_single_graphic_pane_g3_cp2

0x5b2f,	// (0x00025c15) list_single_graphic_pane_t1_cp2_ParamLimits

0x5b2f,	// (0x00025c15) list_single_graphic_pane_t1_cp2

0x187c,	// (0x00021962) list_single_number_pane_g1_cp2_ParamLimits

0x187c,	// (0x00021962) list_single_number_pane_g1_cp2

0x1888,	// (0x0002196e) list_single_number_pane_g2_cp2

0x5b2f,	// (0x00025c15) list_single_number_pane_t1_cp2_ParamLimits

0x5b2f,	// (0x00025c15) list_single_number_pane_t1_cp2

0x5b45,	// (0x00025c2b) list_single_number_pane_t2_cp2_ParamLimits

0x5b45,	// (0x00025c2b) list_single_number_pane_t2_cp2

0x17a4,	// (0x0002188a) list_double2_pane_g1_cp2_ParamLimits

0x17a4,	// (0x0002188a) list_double2_pane_g1_cp2

0x17b3,	// (0x00021899) list_double2_pane_g2_cp2

0x18ca,	// (0x000219b0) list_double2_pane_t1_cp2_ParamLimits

0x18ca,	// (0x000219b0) list_double2_pane_t1_cp2

0x18e0,	// (0x000219c6) list_double2_pane_t2_cp2_ParamLimits

0x18e0,	// (0x000219c6) list_double2_pane_t2_cp2

0x18f2,	// (0x000219d8) list_double_pane_g1_cp2_ParamLimits

0x18f2,	// (0x000219d8) list_double_pane_g1_cp2

0x18fe,	// (0x000219e4) list_double_pane_g2_cp2

0x1906,	// (0x000219ec) list_double_pane_t1_cp2_ParamLimits

0x1906,	// (0x000219ec) list_double_pane_t1_cp2

0x191c,	// (0x00021a02) list_double_pane_t2_cp2_ParamLimits

0x191c,	// (0x00021a02) list_double_pane_t2_cp2

0x1944,	// (0x00021a2a) list_single_pane_cp2_g3

0x187c,	// (0x00021962) list_single_pane_g1_cp2_ParamLimits

0x187c,	// (0x00021962) list_single_pane_g1_cp2

0x1888,	// (0x0002196e) list_single_pane_g2_cp2

0x1954,	// (0x00021a3a) list_single_pane_t1_cp2_ParamLimits

0x1954,	// (0x00021a3a) list_single_pane_t1_cp2

0x196c,	// (0x00021a52) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x196c,	// (0x00021a52) list_single_large_graphic_pane_g1_cp2

0x1978,	// (0x00021a5e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1978,	// (0x00021a5e) list_single_large_graphic_pane_g2_cp2

0x1984,	// (0x00021a6a) list_single_large_graphic_pane_g3_cp2

0x198c,	// (0x00021a72) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x198c,	// (0x00021a72) list_single_large_graphic_pane_g4_cp1

0x19a6,	// (0x00021a8c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x19a6,	// (0x00021a8c) list_single_large_graphic_pane_t1_cp2

0x2a56,	// (0x00022b3c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2a56,	// (0x00022b3c) list_single_graphic_heading_pane_g1_cp2

0x2a31,	// (0x00022b17) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2a31,	// (0x00022b17) list_single_graphic_heading_pane_g4_cp2

0x1888,	// (0x0002196e) list_single_graphic_heading_pane_g5_cp2

0x1890,	// (0x00021976) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1890,	// (0x00021976) list_single_graphic_heading_pane_t1_cp2

0x2a62,	// (0x00022b48) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2a62,	// (0x00022b48) list_single_graphic_heading_pane_t2_cp2

0x2a25,	// (0x00022b0b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2a25,	// (0x00022b0b) list_single_2graphic_pane_g1_cp2

0x2a31,	// (0x00022b17) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2a31,	// (0x00022b17) list_single_2graphic_pane_g2_cp2

0x1888,	// (0x0002196e) list_single_2graphic_pane_g3_cp2

0x1f65,	// (0x0002204b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1f65,	// (0x0002204b) list_single_2graphic_pane_g4_cp2

0x2a40,	// (0x00022b26) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2a40,	// (0x00022b26) list_single_2graphic_pane_t1_cp2

0x0817,	// (0x000208fd) list_highlight_pane_g10_cp1

0x2637,	// (0x0002271d) list_highlight_pane_g1_cp1

0x263f,	// (0x00022725) list_highlight_pane_g2_cp1

0x2647,	// (0x0002272d) list_highlight_pane_g3_cp1

0x264f,	// (0x00022735) list_highlight_pane_g4_cp1

0x2657,	// (0x0002273d) list_highlight_pane_g5_cp1

0x265f,	// (0x00022745) list_highlight_pane_g6_cp1

0x2667,	// (0x0002274d) list_highlight_pane_g7_cp1

0x266f,	// (0x00022755) list_highlight_pane_g8_cp1

0x2677,	// (0x0002275d) list_highlight_pane_g9_cp1

0x4b72,	// (0x00024c58) form_field_slider_pane_t3

0x4b80,	// (0x00024c66) form_field_slider_pane_t4

0x2581,	// (0x00022667) slider_form_pane_ParamLimits

0x2581,	// (0x00022667) slider_form_pane

0x0899,	// (0x0002097f) control_abbreviations

0x0899,	// (0x0002097f) control_conventions

0x0899,	// (0x0002097f) control_definitions

0x0899,	// (0x0002097f) format_table_attribute

0x5d13,	// (0x00025df9) bg_popup_preview_window_pane_g9

0x0899,	// (0x0002097f) format_table_data2

0x0899,	// (0x0002097f) format_table_data3

0x0899,	// (0x0002097f) format_table_data_example

0x0008,

0x0899,	// (0x0002097f) intro_purpose

0xf900,	// (0x0002f9e6) bg_popup_preview_window_pane_g

0x0899,	// (0x0002097f) texts_category

0x0899,	// (0x0002097f) texts_graphics

0x19bc,	// (0x00021aa2) text_digital

0x19cb,	// (0x00021ab1) text_primary

0x19da,	// (0x00021ac0) text_primary_small

0x19e9,	// (0x00021acf) text_secondary

0x19f8,	// (0x00021ade) text_title

0x61a9,	// (0x0002628f) bg_passive_tab_pane_g1_cp3_srt

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp3_srt

0x61a0,	// (0x00026286) bg_passive_tab_pane_g3_cp3_srt

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp3_srt_ParamLimits

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp3_srt

0x61b2,	// (0x00026298) tabs_4_active_pane_srt_g1

0x3810,	// (0x000238f6) tabs_4_active_pane_srt_t1_ParamLimits

0x3810,	// (0x000238f6) tabs_4_active_pane_srt_t1

0x61a9,	// (0x0002628f) bg_active_tab_pane_g1_cp3_copy1

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp3_copy1

0x61a0,	// (0x00026286) bg_active_tab_pane_g3_cp3_copy1

0x08fd,	// (0x000209e3) tabs_2_long_active_pane_srt_ParamLimits

0x08fd,	// (0x000209e3) tabs_2_long_active_pane_srt

0x08fd,	// (0x000209e3) tabs_2_long_passive_pane_srt_ParamLimits

0x08fd,	// (0x000209e3) tabs_2_long_passive_pane_srt

0x3ae9,	// (0x00023bcf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3ae9,	// (0x00023bcf) bg_passive_tab_pane_cp4_srt

0x60df,	// (0x000261c5) bg_passive_tab_pane_g1_cp4_srt

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp4_srt

0x60d6,	// (0x000261bc) bg_passive_tab_pane_g3_cp4_srt

0x1208,	// (0x000212ee) bg_active_tab_pane_cp4_srt_ParamLimits

0x1208,	// (0x000212ee) bg_active_tab_pane_cp4_srt

0x3ad6,	// (0x00023bbc) tabs_2_long_active_pane_srt_t1_ParamLimits

0x3ad6,	// (0x00023bbc) tabs_2_long_active_pane_srt_t1

0x60df,	// (0x000261c5) bg_active_tab_pane_g1_cp4_srt

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp4_srt

0x60d6,	// (0x000261bc) bg_active_tab_pane_g3_cp4_srt

0x08e7,	// (0x000209cd) tabs_3_long_active_pane_srt_ParamLimits

0x08e7,	// (0x000209cd) tabs_3_long_active_pane_srt

0x08e7,	// (0x000209cd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x08e7,	// (0x000209cd) tabs_3_long_passive_pane_cp_srt

0x08e7,	// (0x000209cd) tabs_3_long_passive_pane_srt_ParamLimits

0x08e7,	// (0x000209cd) tabs_3_long_passive_pane_srt

0x3ae9,	// (0x00023bcf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3ae9,	// (0x00023bcf) bg_passive_tab_pane_cp5_srt

0x1758,	// (0x0002183e) bg_passive_tab_pane_g1_cp5_srt

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp5_srt

0x1761,	// (0x00021847) bg_passive_tab_pane_g3_cp5_srt

0x1208,	// (0x000212ee) bg_active_tab_pane_cp5_srt_ParamLimits

0x1208,	// (0x000212ee) bg_active_tab_pane_cp5_srt

0x3af5,	// (0x00023bdb) tabs_3_long_active_pane_srt_t1_ParamLimits

0x3af5,	// (0x00023bdb) tabs_3_long_active_pane_srt_t1

0x1758,	// (0x0002183e) bg_active_tab_pane_g1_cp5_srt

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp5_srt

0x1761,	// (0x00021847) bg_active_tab_pane_g3_cp5_srt

0x60c8,	// (0x000261ae) navi_text_pane_srt_t1

0x60c0,	// (0x000261a6) navi_icon_pane_srt_g1

0x1b10,	// (0x00021bf6) midp_editing_number_pane_srt

0x1a07,	// (0x00021aed) midp_ticker_pane_srt

0x1b18,	// (0x00021bfe) midp_ticker_pane_srt_g1

0x1b20,	// (0x00021c06) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0002f875) midp_ticker_pane_srt_g

0x1b28,	// (0x00021c0e) midp_ticker_pane_srt_t1

0x60b1,	// (0x00026197) midp_editing_number_pane_t1_copy1

0x4009,	// (0x000240ef) listscroll_midp_pane

0x4009,	// (0x000240ef) midp_form_pane

0x1a0f,	// (0x00021af5) midp_info_popup_window_ParamLimits

0x1a0f,	// (0x00021af5) midp_info_popup_window

0x0f5d,	// (0x00021043) bg_popup_sub_pane_cp50_ParamLimits

0x0f5d,	// (0x00021043) bg_popup_sub_pane_cp50

0x22aa,	// (0x00022390) listscroll_midp_info_pane_ParamLimits

0x22aa,	// (0x00022390) listscroll_midp_info_pane

0x2292,	// (0x00022378) listscroll_form_midp_pane_ParamLimits

0x2292,	// (0x00022378) listscroll_form_midp_pane

0x229e,	// (0x00022384) scroll_bar_cp050

0x4b5a,	// (0x00024c40) list_midp_pane

0x69a6,	// (0x00026a8c) signal_pane_g2_cp

0x21c4,	// (0x000222aa) listscroll_midp_info_pane_t1_ParamLimits

0x21c4,	// (0x000222aa) listscroll_midp_info_pane_t1

0x21dc,	// (0x000222c2) listscroll_midp_info_pane_t2_ParamLimits

0x21dc,	// (0x000222c2) listscroll_midp_info_pane_t2

0x221a,	// (0x00022300) listscroll_midp_info_pane_t3_ParamLimits

0x221a,	// (0x00022300) listscroll_midp_info_pane_t3

0x2254,	// (0x0002233a) listscroll_midp_info_pane_t4_ParamLimits

0x2254,	// (0x0002233a) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0002f921) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0002f921) listscroll_midp_info_pane_t

0x1000,	// (0x000210e6) scroll_pane_cp21

0x2168,	// (0x0002224e) form_midp_field_choice_group_pane

0x2171,	// (0x00022257) form_midp_field_text_pane

0x21aa,	// (0x00022290) form_midp_field_time_pane

0x21b2,	// (0x00022298) form_midp_gauge_slider_pane

0x21bb,	// (0x000222a1) form_midp_gauge_wait_pane

0x0899,	// (0x0002097f) form_midp_image_pane

0xcdaf,	// (0x0002ce95) list_single_midp_pane_ParamLimits

0xcdaf,	// (0x0002ce95) list_single_midp_pane

0x4b37,	// (0x00024c1d) form_midp_field_text_pane_t1

0x2017,	// (0x000220fd) input_focus_pane_cp050

0x2157,	// (0x0002223d) list_midp_form_text_pane

0x2126,	// (0x0002220c) form_midp_field_choice_group_pane_t1

0x2134,	// (0x0002221a) input_focus_pane_cp051

0x2148,	// (0x0002222e) list_midp_choice_pane

0x0899,	// (0x0002097f) status_idle_pane

0x210a,	// (0x000221f0) form_midp_field_time_pane_t1

0x0817,	// (0x000208fd) wait_anim_pane_g2_copy1

0x2118,	// (0x000221fe) form_midp_field_time_pane_t2

0x0001,

0x1a7a,	// (0x00021b60) aid_navinavi_width_2_pane

0xf836,	// (0x0002f91c) form_midp_field_time_pane_t

0x0899,	// (0x0002097f) input_focus_pane_cp052

0x0899,	// (0x0002097f) bg_input_focus_pane_cp040

0x20e6,	// (0x000221cc) form_midp_gauge_slider_pane_t1

0x20f4,	// (0x000221da) form_midp_gauge_slider_pane_t2

0x4b1b,	// (0x00024c01) form_midp_gauge_slider_pane_t3

0x4b29,	// (0x00024c0f) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0002f913) form_midp_gauge_slider_pane_t

0x2102,	// (0x000221e8) form_midp_slider_pane

0x08fd,	// (0x000209e3) bg_input_focus_pane_cp041_ParamLimits

0x08fd,	// (0x000209e3) bg_input_focus_pane_cp041

0x20b6,	// (0x0002219c) form_midp_gauge_wait_pane_t1_ParamLimits

0x20b6,	// (0x0002219c) form_midp_gauge_wait_pane_t1

0x20c8,	// (0x000221ae) form_midp_gauge_wait_pane_t2_ParamLimits

0x20c8,	// (0x000221ae) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0002f90e) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0002f90e) form_midp_gauge_wait_pane_t

0x20da,	// (0x000221c0) form_midp_wait_pane_ParamLimits

0x20da,	// (0x000221c0) form_midp_wait_pane

0x2080,	// (0x00022166) form_midp_image_pane_g1

0x2089,	// (0x0002216f) form_midp_image_pane_t1

0x2098,	// (0x0002217e) form_midp_image_pane_t2

0x20a7,	// (0x0002218d) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0002f907) form_midp_image_pane_t

0x2077,	// (0x0002215d) list_single_midp_pane_g1

0xcda0,	// (0x0002ce86) list_single_midp_pane_t1

0x4b05,	// (0x00024beb) list_midp_form_item_pane_ParamLimits

0x4b05,	// (0x00024beb) list_midp_form_item_pane

0x1a22,	// (0x00021b08) list_midp_form_item_pane_t1

0x1a31,	// (0x00021b17) midp_ticker_pane_g1

0x1a3d,	// (0x00021b23) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0002f85b) midp_ticker_pane_g

0x1a49,	// (0x00021b2f) midp_ticker_pane_t1

0x60b1,	// (0x00026197) midp_editing_number_pane_t1

0x6139,	// (0x0002621f) midp_editing_number_pane

0x6145,	// (0x0002622b) midp_ticker_pane

0x60a1,	// (0x00026187) ai_message_heading_pane

0x0899,	// (0x0002097f) bg_popup_window_pane_cp14

0x60a9,	// (0x0002618f) listscroll_ai_message_pane

0x602b,	// (0x00026111) ai_message_heading_pane_g1_ParamLimits

0x602b,	// (0x00026111) ai_message_heading_pane_g1

0x6037,	// (0x0002611d) ai_message_heading_pane_g2_ParamLimits

0x6037,	// (0x0002611d) ai_message_heading_pane_g2

0x6043,	// (0x00026129) ai_message_heading_pane_g3_ParamLimits

0x6043,	// (0x00026129) ai_message_heading_pane_g3

0x604f,	// (0x00026135) ai_message_heading_pane_g4_ParamLimits

0x604f,	// (0x00026135) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0002fa48) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0002fa48) ai_message_heading_pane_g

0x605b,	// (0x00026141) ai_message_heading_pane_t1_ParamLimits

0x605b,	// (0x00026141) ai_message_heading_pane_t1

0x6075,	// (0x0002615b) ai_message_heading_pane_t2_ParamLimits

0x6075,	// (0x0002615b) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0002fa51) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0002fa51) ai_message_heading_pane_t

0x6087,	// (0x0002616d) bg_popup_heading_pane_cp1_ParamLimits

0x6087,	// (0x0002616d) bg_popup_heading_pane_cp1

0x6019,	// (0x000260ff) list_ai_message_pane_ParamLimits

0x6019,	// (0x000260ff) list_ai_message_pane

0x1000,	// (0x000210e6) scroll_pane_cp10

0x5fb5,	// (0x0002609b) list_ai_message_pane_g1

0x5fbd,	// (0x000260a3) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0002fa25) list_ai_message_pane_g

0x5fc5,	// (0x000260ab) list_ai_message_pane_t1_ParamLimits

0x5fc5,	// (0x000260ab) list_ai_message_pane_t1

0x5fda,	// (0x000260c0) list_ai_message_pane_t2_ParamLimits

0x5fda,	// (0x000260c0) list_ai_message_pane_t2

0x5fef,	// (0x000260d5) list_ai_message_pane_t3_ParamLimits

0x5fef,	// (0x000260d5) list_ai_message_pane_t3

0x6004,	// (0x000260ea) list_ai_message_pane_t4_ParamLimits

0x6004,	// (0x000260ea) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0002fa2a) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0002fa2a) list_ai_message_pane_t

0x5fa3,	// (0x00026089) cell_ai_soft_ind_pane_ParamLimits

0x5fa3,	// (0x00026089) cell_ai_soft_ind_pane

0x1a5b,	// (0x00021b41) cell_ai_soft_ind_pane_g1_ParamLimits

0x1a5b,	// (0x00021b41) cell_ai_soft_ind_pane_g1

0x0899,	// (0x0002097f) grid_highlight_cp1

0x1a68,	// (0x00021b4e) text_secondary_cp56_ParamLimits

0x1a68,	// (0x00021b4e) text_secondary_cp56

0x5f78,	// (0x0002605e) example_general_pane_ParamLimits

0x5f78,	// (0x0002605e) example_general_pane

0x5f84,	// (0x0002606a) example_parent_pane_g1_ParamLimits

0x5f84,	// (0x0002606a) example_parent_pane_g1

0x5f90,	// (0x00026076) example_parent_pane_t1_ParamLimits

0x5f90,	// (0x00026076) example_parent_pane_t1

0x4508,	// (0x000245ee) popup_preview_text_window_ParamLimits

0x4508,	// (0x000245ee) popup_preview_text_window

0x194c,	// (0x00021a32) list_single_pane_cp2_g4

0x0b04,	// (0x00020bea) bg_popup_preview_window_pane_ParamLimits

0x0b04,	// (0x00020bea) bg_popup_preview_window_pane

0x5d1b,	// (0x00025e01) popup_preview_text_window_t1_ParamLimits

0x5d1b,	// (0x00025e01) popup_preview_text_window_t1

0x5d39,	// (0x00025e1f) popup_preview_text_window_t2_ParamLimits

0x5d39,	// (0x00025e1f) popup_preview_text_window_t2

0x5d82,	// (0x00025e68) popup_preview_text_window_t3_ParamLimits

0x5d82,	// (0x00025e68) popup_preview_text_window_t3

0x5dc7,	// (0x00025ead) popup_preview_text_window_t4_ParamLimits

0x5dc7,	// (0x00025ead) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0002f9f9) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0002f9f9) popup_preview_text_window_t

0x5e45,	// (0x00025f2b) scroll_pane_cp11

0x1f1d,	// (0x00022003) bg_popup_preview_window_pane_g1

0x5cdb,	// (0x00025dc1) bg_popup_preview_window_pane_g2

0x5ce3,	// (0x00025dc9) bg_popup_preview_window_pane_g3

0x5ceb,	// (0x00025dd1) bg_popup_preview_window_pane_g4

0x5cf3,	// (0x00025dd9) bg_popup_preview_window_pane_g5

0x5cfb,	// (0x00025de1) bg_popup_preview_window_pane_g6

0x5d03,	// (0x00025de9) bg_popup_preview_window_pane_g7

0x5d0b,	// (0x00025df1) bg_popup_preview_window_pane_g8

0xd2d3,	// (0x0002d3b9) aid_popup_width_pane

0x44ea,	// (0x000245d0) popup_midp_note_alarm_window_ParamLimits

0x44ea,	// (0x000245d0) popup_midp_note_alarm_window

0x0e91,	// (0x00020f77) data_form_pane_ParamLimits

0xcad9,	// (0x0002cbbf) form_field_data_pane_g1

0xcae1,	// (0x0002cbc7) form_field_data_pane_t1_ParamLimits

0x0e9d,	// (0x00020f83) input_focus_pane_ParamLimits

0x0eab,	// (0x00020f91) data_form_wide_pane_ParamLimits

0xcaf9,	// (0x0002cbdf) form_field_data_wide_pane_g1

0xcb05,	// (0x0002cbeb) form_field_data_wide_pane_t1_ParamLimits

0x0cc3,	// (0x00020da9) input_focus_pane_cp6_ParamLimits

0x3ab0,	// (0x00023b96) input_popup_find_pane_g1_ParamLimits

0x3ab0,	// (0x00023b96) input_popup_find_pane_g1

0xd734,	// (0x0002d81a) aid_navi_side_left_pane

0xd744,	// (0x0002d82a) aid_navi_side_right_pane

0x2708,	// (0x000227ee) bg_popup_window_pane_cp30_ParamLimits

0x2708,	// (0x000227ee) bg_popup_window_pane_cp30

0x2782,	// (0x00022868) popup_midp_note_alarm_window_g1_ParamLimits

0x2782,	// (0x00022868) popup_midp_note_alarm_window_g1

0x27b2,	// (0x00022898) popup_midp_note_alarm_window_t1_ParamLimits

0x27b2,	// (0x00022898) popup_midp_note_alarm_window_t1

0x2853,	// (0x00022939) popup_midp_note_alarm_window_t2_ParamLimits

0x2853,	// (0x00022939) popup_midp_note_alarm_window_t2

0x2901,	// (0x000229e7) popup_midp_note_alarm_window_t3_ParamLimits

0x2901,	// (0x000229e7) popup_midp_note_alarm_window_t3

0x2929,	// (0x00022a0f) popup_midp_note_alarm_window_t4_ParamLimits

0x2929,	// (0x00022a0f) popup_midp_note_alarm_window_t4

0x2949,	// (0x00022a2f) popup_midp_note_alarm_window_t5_ParamLimits

0x2949,	// (0x00022a2f) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0002f996) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0002f996) popup_midp_note_alarm_window_t

0x29f5,	// (0x00022adb) wait_bar_pane_cp1_ParamLimits

0x29f5,	// (0x00022adb) wait_bar_pane_cp1

0x0899,	// (0x0002097f) wait_anim_pane_copy1

0x0899,	// (0x0002097f) wait_border_pane_copy1

0x244e,	// (0x00022534) wait_border_pane_g1_copy1

0xcb1f,	// (0x0002cc05) form_field_popup_pane_g1

0xcb27,	// (0x0002cc0d) form_field_popup_pane_t1_ParamLimits

0x0e9d,	// (0x00020f83) input_focus_pane_cp7_ParamLimits

0x0e91,	// (0x00020f77) list_form_pane_ParamLimits

0xcb3f,	// (0x0002cc25) form_field_popup_wide_pane_g1

0xcb47,	// (0x0002cc2d) form_field_popup_wide_pane_t1_ParamLimits

0x0e9d,	// (0x00020f83) input_focus_pane_cp8_ParamLimits

0x0ed7,	// (0x00020fbd) list_form_wide_pane_ParamLimits

0x61d9,	// (0x000262bf) aid_size_cell_graphic_pane

0xcbd3,	// (0x0002ccb9) data_form_pane_t1_ParamLimits

0xcdd8,	// (0x0002cebe) data_form_wide_pane_t1_ParamLimits

0x470e,	// (0x000247f4) bg_status_flat_pane

0x378e,	// (0x00023874) title_pane_t1_ParamLimits

0x08af,	// (0x00020995) title_pane_t2_ParamLimits

0x08d5,	// (0x000209bb) title_pane_t3_ParamLimits

0xf573,	// (0x0002f659) title_pane_t_ParamLimits

0x3ce2,	// (0x00023dc8) level_1_signal_ParamLimits

0x3cef,	// (0x00023dd5) level_2_signal_ParamLimits

0x3cfc,	// (0x00023de2) level_3_signal_ParamLimits

0x3d09,	// (0x00023def) level_4_signal_ParamLimits

0x3d16,	// (0x00023dfc) level_5_signal_ParamLimits

0x3d23,	// (0x00023e09) level_6_signal_ParamLimits

0x3d30,	// (0x00023e16) level_7_signal_ParamLimits

0x3ce2,	// (0x00023dc8) level_1_battery_ParamLimits

0x3cef,	// (0x00023dd5) level_2_battery_ParamLimits

0x3cfc,	// (0x00023de2) level_3_battery_ParamLimits

0x3d09,	// (0x00023def) level_4_battery_ParamLimits

0x3d16,	// (0x00023dfc) level_5_battery_ParamLimits

0x3d23,	// (0x00023e09) level_6_battery_ParamLimits

0x3d30,	// (0x00023e16) level_7_battery_ParamLimits

0x2637,	// (0x0002271d) bg_status_flat_pane_g1

0x263f,	// (0x00022725) bg_status_flat_pane_g2

0x2647,	// (0x0002272d) bg_status_flat_pane_g3

0x264f,	// (0x00022735) bg_status_flat_pane_g4

0x2657,	// (0x0002273d) bg_status_flat_pane_g5

0x265f,	// (0x00022745) bg_status_flat_pane_g6

0x2667,	// (0x0002274d) bg_status_flat_pane_g7

0x37f6,	// (0x000238dc) tabs_3_active_pane_t1_ParamLimits

0x37f6,	// (0x000238dc) tabs_3_passive_pane_t1_ParamLimits

0x3810,	// (0x000238f6) tabs_4_active_pane_t1_ParamLimits

0x3810,	// (0x000238f6) tabs_4_1_passive_pane_t1_ParamLimits

0x3ac4,	// (0x00023baa) tabs_2_active_pane_t1_ParamLimits

0x3ac4,	// (0x00023baa) tabs_2_passive_pane_t1_ParamLimits

0x1208,	// (0x000212ee) bg_active_tab_pane_cp4_ParamLimits

0x3ad6,	// (0x00023bbc) tabs_2_long_active_pane_t1_ParamLimits

0x3ae9,	// (0x00023bcf) bg_passive_tab_pane_cp4_ParamLimits

0xdc4b,	// (0x0002dd31) list_single_midp_graphic_pane_t1_ParamLimits

0x1208,	// (0x000212ee) bg_active_tab_pane_cp5_ParamLimits

0x3af5,	// (0x00023bdb) tabs_3_long_active_pane_t1_ParamLimits

0x3ae9,	// (0x00023bcf) bg_passive_tab_pane_cp5_ParamLimits

0xdc4b,	// (0x0002dd31) list_single_midp_graphic_pane_t1

0x470e,	// (0x000247f4) bg_status_flat_pane_ParamLimits

0x1dfc,	// (0x00021ee2) indicator_pane_cp2_ParamLimits

0x1dfc,	// (0x00021ee2) indicator_pane_cp2

0x4851,	// (0x00024937) navi_pane_srt_ParamLimits

0x4851,	// (0x00024937) navi_pane_srt

0x1e24,	// (0x00021f0a) popup_clock_digital_analogue_window_cp1

0x096d,	// (0x00020a53) indicator_pane_t1

0x1a07,	// (0x00021aed) copy_highlight_pane

0x1a07,	// (0x00021aed) cursor_graphics_pane

0x1a07,	// (0x00021aed) graphic_within_text_pane

0x1a07,	// (0x00021aed) link_highlight_pane

0x5e08,	// (0x00025eee) popup_preview_text_window_t5_ParamLimits

0x5e08,	// (0x00025eee) popup_preview_text_window_t5

0x1a82,	// (0x00021b68) cursor_digital_pane

0x1a82,	// (0x00021b68) cursor_primary_pane

0x1a93,	// (0x00021b79) cursor_primary_small_pane

0x1a9b,	// (0x00021b81) cursor_secondary_pane

0x1aa3,	// (0x00021b89) cursor_title_pane

0x1a82,	// (0x00021b68) link_highlight_digital_pane

0x1a8a,	// (0x00021b70) link_highlight_primary_pane

0x1a93,	// (0x00021b79) link_highlight_primary_small_pane

0x1a9b,	// (0x00021b81) link_highlight_secondary_pane

0x1aa3,	// (0x00021b89) link_highlight_title_pane

0x1a82,	// (0x00021b68) copy_highlight_digital_pane

0x1a82,	// (0x00021b68) copy_highlight_primary_pane

0x1a93,	// (0x00021b79) copy_highlight_primary_small_pane

0x1a9b,	// (0x00021b81) copy_highlight_secondary_pane

0x1aa3,	// (0x00021b89) copy_highlight_title_pane

0x1a9b,	// (0x00021b81) graphic_text_digital_pane

0x26b7,	// (0x0002279d) graphic_text_primary_pane

0x26c0,	// (0x000227a6) graphic_text_primary_small_pane

0x1a93,	// (0x00021b79) graphic_text_secondary_pane

0x1a82,	// (0x00021b68) graphic_text_title_pane

0x40ae,	// (0x00024194) cursor_primary_pane_g1

0x26a9,	// (0x0002278f) cursor_text_primary_t1

0x4b9e,	// (0x00024c84) cursor_primary_small_pane_g1

0x269b,	// (0x00022781) cursor_text_primary_small_t1

0x4b96,	// (0x00024c7c) cursor_primary_small_pane_g1_copy1

0x268d,	// (0x00022773) cursor_text_primary_small_t1_copy1

0x267f,	// (0x00022765) cursor_text_title_t1

0x4b8e,	// (0x00024c74) cursor_title_pane_g1

0x40ae,	// (0x00024194) cursor_digital_pane_g1

0x1aab,	// (0x00021b91) cursor_text_digital_t1

0x1ab9,	// (0x00021b9f) link_highlight_primary_pane_g1

0x2628,	// (0x0002270e) link_highlight_primary_pane_t1

0x1ab9,	// (0x00021b9f) link_highlight_primary_small_pane_g1

0x1ac1,	// (0x00021ba7) link_highlight_primary_small_pane_t1

0x1ad0,	// (0x00021bb6) link_highlight_secondary_pane_g1

0x1ad8,	// (0x00021bbe) link_highlight_secondary_pane_t1

0x258d,	// (0x00022673) link_highlight_title_pane_g1

0x25a4,	// (0x0002268a) link_highlight_title_pane_t1

0x258d,	// (0x00022673) link_highlight_digital_pane_g1

0x2595,	// (0x0002267b) link_highlight_digital_pane_t1

0x2469,	// (0x0002254f) copy_highlight_primary_pane_g1

0x248f,	// (0x00022575) copy_highlight_primary_pane_t1

0x2469,	// (0x0002254f) copy_highlight_primary_small_pane_g1

0x2480,	// (0x00022566) copy_highlight_primary_small_pane_t1

0x1ae7,	// (0x00021bcd) copy_highlight_secondary_pane_g1

0x1aef,	// (0x00021bd5) copy_highlight_secondary_pane_t1

0x2469,	// (0x0002254f) copy_highlight_title_pane_g1

0x2471,	// (0x00022557) copy_highlight_title_pane_t1

0x2469,	// (0x0002254f) copy_highlight_digital_pane_g1

0x62fa,	// (0x000263e0) copy_highlight_digital_pane_t1

0x624e,	// (0x00026334) graphic_text_primary_pane_g1

0x62de,	// (0x000263c4) graphic_text_primary_pane_t1

0x62ec,	// (0x000263d2) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0002fac0) graphic_text_primary_pane_t

0x62ba,	// (0x000263a0) graphic_text_primary_small_pane_g1

0x62c2,	// (0x000263a8) graphic_text_primary_small_pane_t1

0x62d0,	// (0x000263b6) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0002fabb) graphic_text_primary_small_pane_t

0x6296,	// (0x0002637c) graphic_text_secondary_pane_g1

0x629e,	// (0x00026384) graphic_text_secondary_pane_t1

0x62ac,	// (0x00026392) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0002fab6) graphic_text_secondary_pane_t

0x6272,	// (0x00026358) graphic_text_title_pane_g1

0x627a,	// (0x00026360) graphic_text_title_pane_t1

0x6288,	// (0x0002636e) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0002fab1) graphic_text_title_pane_t

0x624e,	// (0x00026334) graphic_text_digital_pane_g1

0x6256,	// (0x0002633c) graphic_text_digital_pane_t1

0x6264,	// (0x0002634a) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0002faac) graphic_text_digital_pane_t

0x08fd,	// (0x000209e3) navi_icon_pane_srt_ParamLimits

0x08fd,	// (0x000209e3) navi_icon_pane_srt

0x0899,	// (0x0002097f) navi_midp_pane_srt

0x0899,	// (0x0002097f) navi_navi_pane_srt

0x08fd,	// (0x000209e3) navi_text_pane_srt_ParamLimits

0x08fd,	// (0x000209e3) navi_text_pane_srt

0x5c94,	// (0x00025d7a) navi_navi_icon_text_pane_srt

0x5cae,	// (0x00025d94) navi_navi_pane_srt_g1_ParamLimits

0x5cae,	// (0x00025d94) navi_navi_pane_srt_g1

0x5c9c,	// (0x00025d82) navi_navi_pane_srt_g2_ParamLimits

0x5c9c,	// (0x00025d82) navi_navi_pane_srt_g2

0x0001,

0xf8fb,	// (0x0002f9e1) navi_navi_pane_srt_g_ParamLimits

0xf8fb,	// (0x0002f9e1) navi_navi_pane_srt_g

0x5cc0,	// (0x00025da6) navi_navi_tabs_pane_srt

0x5c94,	// (0x00025d7a) navi_navi_text_pane_srt

0x5c94,	// (0x00025d7a) navi_navi_volume_pane_srt

0x623f,	// (0x00026325) navi_navi_text_pane_srt_t1

0xdf82,	// (0x0002e068) navi_navi_volume_pane_srt_g1

0xdf8a,	// (0x0002e070) volume_small_pane_srt_ParamLimits

0xdf8a,	// (0x0002e070) volume_small_pane_srt

0xd9eb,	// (0x0002dad1) volume_small_pane_srt_g1_ParamLimits

0xd9eb,	// (0x0002dad1) volume_small_pane_srt_g1

0xd9fb,	// (0x0002dae1) volume_small_pane_srt_g2_ParamLimits

0xd9fb,	// (0x0002dae1) volume_small_pane_srt_g2

0xda0c,	// (0x0002daf2) volume_small_pane_srt_g3_ParamLimits

0xda0c,	// (0x0002daf2) volume_small_pane_srt_g3

0xda1d,	// (0x0002db03) volume_small_pane_srt_g4_ParamLimits

0xda1d,	// (0x0002db03) volume_small_pane_srt_g4

0xda2e,	// (0x0002db14) volume_small_pane_srt_g5_ParamLimits

0xda2e,	// (0x0002db14) volume_small_pane_srt_g5

0xda3f,	// (0x0002db25) volume_small_pane_srt_g6_ParamLimits

0xda3f,	// (0x0002db25) volume_small_pane_srt_g6

0xda50,	// (0x0002db36) volume_small_pane_srt_g7_ParamLimits

0xda50,	// (0x0002db36) volume_small_pane_srt_g7

0xda61,	// (0x0002db47) volume_small_pane_srt_g8_ParamLimits

0xda61,	// (0x0002db47) volume_small_pane_srt_g8

0xda72,	// (0x0002db58) volume_small_pane_srt_g9_ParamLimits

0xda72,	// (0x0002db58) volume_small_pane_srt_g9

0xda83,	// (0x0002db69) volume_small_pane_srt_g10_ParamLimits

0xda83,	// (0x0002db69) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0002f860) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0002f860) volume_small_pane_srt_g

0x0bad,	// (0x00020c93) query_popup_data_pane_cp2

0x6225,	// (0x0002630b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6225,	// (0x0002630b) navi_navi_icon_text_pane_srt_t1

0x26b7,	// (0x0002279d) navi_tabs_2_long_pane_srt

0x26b7,	// (0x0002279d) navi_tabs_2_pane_srt

0x26b7,	// (0x0002279d) navi_tabs_3_long_pane_srt

0x26b7,	// (0x0002279d) navi_tabs_3_pane_srt

0x26b7,	// (0x0002279d) navi_tabs_4_pane_srt

0xdf62,	// (0x0002e048) tabs_2_active_pane_srt_ParamLimits

0xdf62,	// (0x0002e048) tabs_2_active_pane_srt

0xdf72,	// (0x0002e058) tabs_2_passive_pane_srt_ParamLimits

0xdf72,	// (0x0002e058) tabs_2_passive_pane_srt

0x13af,	// (0x00021495) bg_passive_tab_pane_cp1_srt_ParamLimits

0x13af,	// (0x00021495) bg_passive_tab_pane_cp1_srt

0x620c,	// (0x000262f2) bg_passive_tab_pane_g1_cp1_srt

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp1_srt

0x6203,	// (0x000262e9) bg_passive_tab_pane_g3_cp1_srt

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp1_srt_ParamLimits

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp1_srt

0x6215,	// (0x000262fb) tabs_2_active_pane_srt_g1

0x3ac4,	// (0x00023baa) tabs_2_active_pane_srt_t1_ParamLimits

0x3ac4,	// (0x00023baa) tabs_2_active_pane_srt_t1

0x620c,	// (0x000262f2) bg_active_tab_pane_g1_cp1_srt

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp1_srt

0x6203,	// (0x000262e9) bg_active_tab_pane_g3_cp1_srt

0xdf2f,	// (0x0002e015) tabs_3_active_pane_srt_ParamLimits

0xdf2f,	// (0x0002e015) tabs_3_active_pane_srt

0xdf40,	// (0x0002e026) tabs_3_passive_pane_cp_srt_ParamLimits

0xdf40,	// (0x0002e026) tabs_3_passive_pane_cp_srt

0xdf51,	// (0x0002e037) tabs_3_passive_pane_srt_ParamLimits

0xdf51,	// (0x0002e037) tabs_3_passive_pane_srt

0x13af,	// (0x00021495) bg_passive_tab_pane_cp2_srt_ParamLimits

0x13af,	// (0x00021495) bg_passive_tab_pane_cp2_srt

0x1afe,	// (0x00021be4) bg_passive_tab_pane_g1_cp2_srt

0x1711,	// (0x000217f7) bg_passive_tab_pane_g2_cp2_srt

0x1b07,	// (0x00021bed) bg_passive_tab_pane_g3_cp2_srt

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp2_srt_ParamLimits

0x08fd,	// (0x000209e3) bg_active_tab_pane_cp2_srt

0x61fb,	// (0x000262e1) tabs_3_active_pane_srt_g1

0x37f6,	// (0x000238dc) tabs_3_active_pane_srt_t1_ParamLimits

0x37f6,	// (0x000238dc) tabs_3_active_pane_srt_t1

0x1afe,	// (0x00021be4) bg_active_tab_pane_g1_cp2_srt

0x1711,	// (0x000217f7) bg_active_tab_pane_g2_cp2_srt

0x1b07,	// (0x00021bed) bg_active_tab_pane_g3_cp2_srt

0xdee7,	// (0x0002dfcd) tabs_4_active_pane_srt_ParamLimits

0xdee7,	// (0x0002dfcd) tabs_4_active_pane_srt

0xdef9,	// (0x0002dfdf) tabs_4_passive_pane_cp2_srt_ParamLimits

0xdef9,	// (0x0002dfdf) tabs_4_passive_pane_cp2_srt

0x1c21,	// (0x00021d07) aid_size_cell_toolbar

0x3ae9,	// (0x00023bcf) main_idle_act_pane_ParamLimits

0x1ce5,	// (0x00021dcb) popup_large_graphic_colour_window_ParamLimits

0x463c,	// (0x00024722) popup_toolbar_window_ParamLimits

0x463c,	// (0x00024722) popup_toolbar_window

0xdebe,	// (0x0002dfa4) list_single_graphic_2heading_pane_ParamLimits

0xdebe,	// (0x0002dfa4) list_single_graphic_2heading_pane

0x11de,	// (0x000212c4) aid_size_cell_apps_grid_lsc_pane

0x11f0,	// (0x000212d6) aid_size_cell_apps_grid_prt_pane

0x13af,	// (0x00021495) bg_wml_button_pane_cp1_ParamLimits

0x13af,	// (0x00021495) bg_wml_button_pane_cp1

0x4b37,	// (0x00024c1d) form_midp_field_text_pane_t1_ParamLimits

0x2017,	// (0x000220fd) input_focus_pane_cp050_ParamLimits

0x2157,	// (0x0002223d) list_midp_form_text_pane_ParamLimits

0x2134,	// (0x0002221a) input_focus_pane_cp051_ParamLimits

0x2148,	// (0x0002222e) list_midp_choice_pane_ParamLimits

0x4ad1,	// (0x00024bb7) list_single_2graphic_pane_cp3_ParamLimits

0x4ad1,	// (0x00024bb7) list_single_2graphic_pane_cp3

0x4ae5,	// (0x00024bcb) list_single_midp_graphic_pane_ParamLimits

0x4ae5,	// (0x00024bcb) list_single_midp_graphic_pane

0xcd1a,	// (0x0002ce00) list_single_graphic_2heading_pane_g1_ParamLimits

0xcd1a,	// (0x0002ce00) list_single_graphic_2heading_pane_g1

0xcd26,	// (0x0002ce0c) list_single_graphic_2heading_pane_g4_ParamLimits

0xcd26,	// (0x0002ce0c) list_single_graphic_2heading_pane_g4

0xc8d6,	// (0x0002c9bc) list_single_graphic_2heading_pane_g5_ParamLimits

0xc8d6,	// (0x0002c9bc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0002f8b3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0002f8b3) list_single_graphic_2heading_pane_g

0xcd32,	// (0x0002ce18) list_single_graphic_2heading_pane_t1_ParamLimits

0xcd32,	// (0x0002ce18) list_single_graphic_2heading_pane_t1

0xcd46,	// (0x0002ce2c) list_single_graphic_2heading_pane_t2_ParamLimits

0xcd46,	// (0x0002ce2c) list_single_graphic_2heading_pane_t2

0xcd60,	// (0x0002ce46) list_single_graphic_2heading_pane_t3_ParamLimits

0xcd60,	// (0x0002ce46) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0002f8ba) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0002f8ba) list_single_graphic_2heading_pane_t

0x1e67,	// (0x00021f4d) bg_popup_sub_pane_cp2

0x1e8d,	// (0x00021f73) grid_toobar_pane

0xdbe7,	// (0x0002dccd) cell_toolbar_pane_ParamLimits

0xdbe7,	// (0x0002dccd) cell_toolbar_pane

0x1ec3,	// (0x00021fa9) cell_toolbar_pane_g1_ParamLimits

0x1ec3,	// (0x00021fa9) cell_toolbar_pane_g1

0x1ed5,	// (0x00021fbb) cell_toolbar_pane_g2_ParamLimits

0x1ed5,	// (0x00021fbb) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0002f8c8) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0002f8c8) cell_toolbar_pane_g

0x1ef7,	// (0x00021fdd) grid_highlight_pane_cp2_ParamLimits

0x1ef7,	// (0x00021fdd) grid_highlight_pane_cp2

0x1f11,	// (0x00021ff7) toolbar_button_pane

0x1f1d,	// (0x00022003) toolbar_button_pane_g1

0x1f25,	// (0x0002200b) toolbar_button_pane_g2

0x1f2d,	// (0x00022013) toolbar_button_pane_g3

0x1f35,	// (0x0002201b) toolbar_button_pane_g4

0x1f3d,	// (0x00022023) toolbar_button_pane_g5

0x1f45,	// (0x0002202b) toolbar_button_pane_g6

0x1f4d,	// (0x00022033) toolbar_button_pane_g7

0x1f55,	// (0x0002203b) toolbar_button_pane_g8

0x1f5d,	// (0x00022043) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0002f8cd) toolbar_button_pane_g

0xdc16,	// (0x0002dcfc) list_single_2graphic_pane_g1_cp3_ParamLimits

0xdc16,	// (0x0002dcfc) list_single_2graphic_pane_g1_cp3

0xdc22,	// (0x0002dd08) list_single_2graphic_pane_g2_cp3_ParamLimits

0xdc22,	// (0x0002dd08) list_single_2graphic_pane_g2_cp3

0x1888,	// (0x0002196e) list_single_2graphic_pane_g3_cp3

0x1f65,	// (0x0002204b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1f65,	// (0x0002204b) list_single_2graphic_pane_g4_cp3

0xdc31,	// (0x0002dd17) list_single_2graphic_pane_t1_cp3_ParamLimits

0xdc31,	// (0x0002dd17) list_single_2graphic_pane_t1_cp3

0x187c,	// (0x00021962) list_single_midp_graphic_pane_g2_ParamLimits

0x187c,	// (0x00021962) list_single_midp_graphic_pane_g2

0xcced,	// (0x0002cdd3) aid_zoom_text_primary

0xdbdf,	// (0x0002dcc5) aid_zoom_text_secondary

0x1bb9,	// (0x00021c9f) status_small_pane_g7_ParamLimits

0x1bb9,	// (0x00021c9f) status_small_pane_g7

0x1bdc,	// (0x00021cc2) status_small_pane_t1_ParamLimits

0x3771,	// (0x00023857) title_pane_g2

0x0003,

0xf56a,	// (0x0002f650) title_pane_g

0x39c3,	// (0x00023aa9) aid_size_cell_colour_1_pane_ParamLimits

0x39c3,	// (0x00023aa9) aid_size_cell_colour_1_pane

0x39d7,	// (0x00023abd) aid_size_cell_colour_2_pane_ParamLimits

0x39d7,	// (0x00023abd) aid_size_cell_colour_2_pane

0x39eb,	// (0x00023ad1) aid_size_cell_colour_3_pane_ParamLimits

0x39eb,	// (0x00023ad1) aid_size_cell_colour_3_pane

0x39ff,	// (0x00023ae5) aid_size_cell_colour_4_pane_ParamLimits

0x39ff,	// (0x00023ae5) aid_size_cell_colour_4_pane

0xd696,	// (0x0002d77c) title_pane_stacon_g1_ParamLimits

0xd696,	// (0x0002d77c) title_pane_stacon_g1

0x24e6,	// (0x000225cc) popup_note_wait_window_g3_ParamLimits

0x24e6,	// (0x000225cc) popup_note_wait_window_g3

0x255c,	// (0x00022642) popup_note_wait_window_t5_ParamLimits

0x255c,	// (0x00022642) popup_note_wait_window_t5

0x0899,	// (0x0002097f) main_feb_china_hwr_fs_writing_pane

0x432b,	// (0x00024411) popup_feb_china_hwr_fs_window_ParamLimits

0x432b,	// (0x00024411) popup_feb_china_hwr_fs_window

0xdc61,	// (0x0002dd47) aid_size_cell_hwr_fs_ParamLimits

0xdc61,	// (0x0002dd47) aid_size_cell_hwr_fs

0x2017,	// (0x000220fd) bg_popup_sub_pane_cp3_ParamLimits

0x2017,	// (0x000220fd) bg_popup_sub_pane_cp3

0xdc76,	// (0x0002dd5c) grid_hwr_fs_pane_ParamLimits

0xdc76,	// (0x0002dd5c) grid_hwr_fs_pane

0xdc8a,	// (0x0002dd70) linegrid_hwr_fs_pane_ParamLimits

0xdc8a,	// (0x0002dd70) linegrid_hwr_fs_pane

0xdc9a,	// (0x0002dd80) cell_hwr_fs_pane_ParamLimits

0xdc9a,	// (0x0002dd80) cell_hwr_fs_pane

0x2023,	// (0x00022109) linegrid_hwr_fs_pane_g1_ParamLimits

0x2023,	// (0x00022109) linegrid_hwr_fs_pane_g1

0x4a67,	// (0x00024b4d) linegrid_hwr_fs_pane_g2_ParamLimits

0x4a67,	// (0x00024b4d) linegrid_hwr_fs_pane_g2

0x202f,	// (0x00022115) linegrid_hwr_fs_pane_g3_ParamLimits

0x202f,	// (0x00022115) linegrid_hwr_fs_pane_g3

0xdcb8,	// (0x0002dd9e) linegrid_hwr_fs_pane_g4_ParamLimits

0xdcb8,	// (0x0002dd9e) linegrid_hwr_fs_pane_g4

0xdcd2,	// (0x0002ddb8) linegrid_hwr_fs_pane_g5_ParamLimits

0xdcd2,	// (0x0002ddb8) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0002f8f3) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0002f8f3) linegrid_hwr_fs_pane_g

0x203b,	// (0x00022121) cell_hwr_fs_pane_g1_ParamLimits

0x203b,	// (0x00022121) cell_hwr_fs_pane_g1

0x1e35,	// (0x00021f1b) cell_hwr_fs_pane_g2_ParamLimits

0x1e35,	// (0x00021f1b) cell_hwr_fs_pane_g2

0x4aa9,	// (0x00024b8f) cell_hwr_fs_pane_g3_ParamLimits

0x4aa9,	// (0x00024b8f) cell_hwr_fs_pane_g3

0x4ab6,	// (0x00024b9c) cell_hwr_fs_pane_g4_ParamLimits

0x4ab6,	// (0x00024b9c) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0002f8fe) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0002f8fe) cell_hwr_fs_pane_g

0xdce8,	// (0x0002ddce) cell_hwr_fs_pane_t1

0x0899,	// (0x0002097f) grid_highlight_pane_cp6

0x0899,	// (0x0002097f) main_idle_act2_pane

0x0fe7,	// (0x000210cd) aid_inside_area_popup_secondary

0x8890,	// (0x00028976) aid_inside_area_window_primary_ParamLimits

0x8890,	// (0x00028976) aid_inside_area_window_primary

0x6309,	// (0x000263ef) ai2_news_ticker_pane

0x6311,	// (0x000263f7) aid_size_cell_ai1_link_ParamLimits

0x6311,	// (0x000263f7) aid_size_cell_ai1_link

0x8bd8,	// (0x00028cbe) popup_ai2_data_window_ParamLimits

0x8bd8,	// (0x00028cbe) popup_ai2_data_window

0x632b,	// (0x00026411) popup_ai2_link_window_ParamLimits

0x632b,	// (0x00026411) popup_ai2_link_window

0x2017,	// (0x000220fd) bg_popup_sub_pane_cp4_ParamLimits

0x2017,	// (0x000220fd) bg_popup_sub_pane_cp4

0x633f,	// (0x00026425) grid_ai2_link_pane_ParamLimits

0x633f,	// (0x00026425) grid_ai2_link_pane

0x6356,	// (0x0002643c) popup_ai2_link_window_g1_ParamLimits

0x6356,	// (0x0002643c) popup_ai2_link_window_g1

0x6362,	// (0x00026448) popup_ai2_link_window_g2_ParamLimits

0x6362,	// (0x00026448) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0002fac5) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0002fac5) popup_ai2_link_window_g

0x6371,	// (0x00026457) ai2_mp_button_pane

0x6379,	// (0x0002645f) ai2_mp_volume_pane

0x2134,	// (0x0002221a) bg_popup_sub_pane_cp5_ParamLimits

0x2134,	// (0x0002221a) bg_popup_sub_pane_cp5

0x6381,	// (0x00026467) heading_ai2_gene_pane_ParamLimits

0x6381,	// (0x00026467) heading_ai2_gene_pane

0x638d,	// (0x00026473) list_ai2_gene_pane_ParamLimits

0x638d,	// (0x00026473) list_ai2_gene_pane

0x63d5,	// (0x000264bb) cell_ai2_link_pane_ParamLimits

0x63d5,	// (0x000264bb) cell_ai2_link_pane

0x63eb,	// (0x000264d1) cell_ai2_link_pane_g1

0x0899,	// (0x0002097f) grid_highlight_pane_cp7

0xdf9f,	// (0x0002e085) ai2_mp_volume_pane_g1

0x6488,	// (0x0002656e) ai2_mp_volume_pane_g2

0x8c03,	// (0x00028ce9) list_ai2_gene_pane_t1

0x6480,	// (0x00026566) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0002fade) ai2_mp_volume_pane_g

0xdfa7,	// (0x0002e08d) volume_small_pane_cp3

0x6490,	// (0x00026576) aid_size_cell_ai2_button

0x6498,	// (0x0002657e) grid_ai2_button_pane

0x64a1,	// (0x00026587) cell_ai2_button_pane_ParamLimits

0x64a1,	// (0x00026587) cell_ai2_button_pane

0x0817,	// (0x000208fd) cell_ai2_button_pane_g1

0x0899,	// (0x0002097f) grid_highlight_pane_cp8

0x6440,	// (0x00026526) ai2_gene_pane_t1_ParamLimits

0x6440,	// (0x00026526) ai2_gene_pane_t1

0x42d1,	// (0x000243b7) aid_height_parent_landscape

0x898e,	// (0x00028a74) aid_height_set_list

0x60fd,	// (0x000261e3) aid_size_parent

0x61d9,	// (0x000262bf) aid_size_cell_graphic_pane_ParamLimits

0x639d,	// (0x00026483) popup_ai2_data_window_g1_ParamLimits

0x639d,	// (0x00026483) popup_ai2_data_window_g1

0x63a9,	// (0x0002648f) ai2_news_ticker_pane_g1

0x63b1,	// (0x00026497) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0002faca) ai2_news_ticker_pane_g

0x63b9,	// (0x0002649f) ai2_news_ticker_pane_t1

0x63c7,	// (0x000264ad) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0002facf) ai2_news_ticker_pane_t

0x61ba,	// (0x000262a0) heading_ai2_gene_pane_g1

0x63f4,	// (0x000264da) heading_ai2_gene_pane_t1_ParamLimits

0x63f4,	// (0x000264da) heading_ai2_gene_pane_t1

0x6409,	// (0x000264ef) list_highlight_pane_cp6

0x8bec,	// (0x00028cd2) ai2_gene_pane_ParamLimits

0x8bec,	// (0x00028cd2) ai2_gene_pane

0x8c11,	// (0x00028cf7) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0002fad4) list_ai2_gene_pane_t

0x6411,	// (0x000264f7) list_highlight_pane_cp8_ParamLimits

0x6411,	// (0x000264f7) list_highlight_pane_cp8

0x6422,	// (0x00026508) ai2_gene_pane_g1_ParamLimits

0x6422,	// (0x00026508) ai2_gene_pane_g1

0x6434,	// (0x0002651a) ai2_gene_pane_g2_ParamLimits

0x6434,	// (0x0002651a) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0002fad9) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0002fad9) ai2_gene_pane_g

0x0e44,	// (0x00020f2a) scroll_pane_cp12

0xdb96,	// (0x0002dc7c) control_pane_t3_ParamLimits

0xdb96,	// (0x0002dc7c) control_pane_t3

0x1bcd,	// (0x00021cb3) status_small_pane_g8_ParamLimits

0x1bcd,	// (0x00021cb3) status_small_pane_g8

0x4399,	// (0x0002447f) popup_find_window_ParamLimits

0x44fc,	// (0x000245e2) popup_note_image_window_ParamLimits

0xc777,	// (0x0002c85d) list_double2_graphic_pane_vc_g1_ParamLimits

0xc777,	// (0x0002c85d) list_double2_graphic_pane_vc_g1

0xd5ff,	// (0x0002d6e5) list_double2_graphic_pane_vc_g2_ParamLimits

0xd5ff,	// (0x0002d6e5) list_double2_graphic_pane_vc_g2

0xd60b,	// (0x0002d6f1) list_double2_graphic_pane_vc_g3_ParamLimits

0xd60b,	// (0x0002d6f1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0002f8c1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0002f8c1) list_double2_graphic_pane_vc_g

0xc74f,	// (0x0002c835) list_double2_graphic_pane_vc_t1_ParamLimits

0xc74f,	// (0x0002c835) list_double2_graphic_pane_vc_t1

0xd5ff,	// (0x0002d6e5) list_single_heading_pane_vc_g1_ParamLimits

0xd5ff,	// (0x0002d6e5) list_single_heading_pane_vc_g1

0xd60b,	// (0x0002d6f1) list_single_heading_pane_vc_g2_ParamLimits

0xd60b,	// (0x0002d6f1) list_single_heading_pane_vc_g2

0x0001,

0xf60d,	// (0x0002f6f3) list_single_heading_pane_vc_g_ParamLimits

0xf60d,	// (0x0002f6f3) list_single_heading_pane_vc_g

0xcd78,	// (0x0002ce5e) list_single_heading_pane_vc_t1_ParamLimits

0xcd78,	// (0x0002ce5e) list_single_heading_pane_vc_t1

0xcd8e,	// (0x0002ce74) list_single_heading_pane_vc_t2_ParamLimits

0xcd8e,	// (0x0002ce74) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0002f8e2) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0002f8e2) list_single_heading_pane_vc_t

0x1f71,	// (0x00022057) list_setting_number_pane_vc_g1_ParamLimits

0x1f71,	// (0x00022057) list_setting_number_pane_vc_g1

0x1f7d,	// (0x00022063) list_setting_number_pane_vc_g2_ParamLimits

0x1f7d,	// (0x00022063) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0002f8e7) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0002f8e7) list_setting_number_pane_vc_g

0x1f89,	// (0x0002206f) list_setting_number_pane_vc_t1_ParamLimits

0x1f89,	// (0x0002206f) list_setting_number_pane_vc_t1

0x1f9d,	// (0x00022083) list_setting_number_pane_vc_t2_ParamLimits

0x1f9d,	// (0x00022083) list_setting_number_pane_vc_t2

0x1fb9,	// (0x0002209f) list_setting_number_pane_vc_t3_ParamLimits

0x1fb9,	// (0x0002209f) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0002f8ec) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0002f8ec) list_setting_number_pane_vc_t

0x1fdf,	// (0x000220c5) set_value_pane_vc_ParamLimits

0x1fdf,	// (0x000220c5) set_value_pane_vc

0xdebe,	// (0x0002dfa4) list_double2_graphic_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_double2_graphic_pane_vc

0x6158,	// (0x0002623e) list_double2_large_graphic_pane_vc_ParamLimits

0x6158,	// (0x0002623e) list_double2_large_graphic_pane_vc

0xdebe,	// (0x0002dfa4) list_double2_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_double2_pane_vc

0xdebe,	// (0x0002dfa4) list_double_graphic_heading_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_double_graphic_heading_pane_vc

0xdebe,	// (0x0002dfa4) list_double_graphic_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_double_graphic_pane_vc

0xdebe,	// (0x0002dfa4) list_double_heading_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_double_heading_pane_vc

0x6158,	// (0x0002623e) list_double_large_graphic_pane_vc_ParamLimits

0x6158,	// (0x0002623e) list_double_large_graphic_pane_vc

0xdebe,	// (0x0002dfa4) list_double_number_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_double_number_pane_vc

0xdebe,	// (0x0002dfa4) list_double_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_double_pane_vc

0xdebe,	// (0x0002dfa4) list_double_time_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_double_time_pane_vc

0xdebe,	// (0x0002dfa4) list_setting_number_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_setting_number_pane_vc

0xdebe,	// (0x0002dfa4) list_setting_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_setting_pane_vc

0xdebe,	// (0x0002dfa4) list_single_graphic_heading_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_single_graphic_heading_pane_vc

0xdebe,	// (0x0002dfa4) list_single_heading_pane_vc_ParamLimits

0xdebe,	// (0x0002dfa4) list_single_heading_pane_vc

0xce1d,	// (0x0002cf03) list_single_number_heading_pane_vc_ParamLimits

0xce1d,	// (0x0002cf03) list_single_number_heading_pane_vc

0xc777,	// (0x0002c85d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc777,	// (0x0002c85d) list_double_graphic_heading_pane_vc_g1

0xd5ff,	// (0x0002d6e5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd5ff,	// (0x0002d6e5) list_double_graphic_heading_pane_vc_g2

0xd60b,	// (0x0002d6f1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd60b,	// (0x0002d6f1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0002f8c1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0002f8c1) list_double_graphic_heading_pane_vc_g

0xce70,	// (0x0002cf56) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xce70,	// (0x0002cf56) list_double_graphic_heading_pane_vc_t1

0xcd78,	// (0x0002ce5e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xcd78,	// (0x0002ce5e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x0002fae5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x0002fae5) list_double_graphic_heading_pane_vc_t

0x1f71,	// (0x00022057) list_setting_pane_vc_g1_ParamLimits

0x1f71,	// (0x00022057) list_setting_pane_vc_g1

0x1f7d,	// (0x00022063) list_setting_pane_vc_g2_ParamLimits

0x1f7d,	// (0x00022063) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0002f8e7) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0002f8e7) list_setting_pane_vc_g

0x6690,	// (0x00026776) list_setting_pane_vc_t1_ParamLimits

0x6690,	// (0x00026776) list_setting_pane_vc_t1

0x66a4,	// (0x0002678a) list_setting_pane_vc_t2_ParamLimits

0x66a4,	// (0x0002678a) list_setting_pane_vc_t2

0x0001,

0xfa42,	// (0x0002fb28) list_setting_pane_vc_t_ParamLimits

0xfa42,	// (0x0002fb28) list_setting_pane_vc_t

0x1fdf,	// (0x000220c5) set_value_pane_cp_vc_ParamLimits

0x1fdf,	// (0x000220c5) set_value_pane_cp_vc

0xd5ff,	// (0x0002d6e5) list_single_number_heading_pane_vc_g1_ParamLimits

0xd5ff,	// (0x0002d6e5) list_single_number_heading_pane_vc_g1

0xd60b,	// (0x0002d6f1) list_single_number_heading_pane_vc_g2_ParamLimits

0xd60b,	// (0x0002d6f1) list_single_number_heading_pane_vc_g2

0x0001,

0xf60d,	// (0x0002f6f3) list_single_number_heading_pane_vc_g_ParamLimits

0xf60d,	// (0x0002f6f3) list_single_number_heading_pane_vc_g

0xcd78,	// (0x0002ce5e) list_single_number_heading_pane_vc_t1_ParamLimits

0xcd78,	// (0x0002ce5e) list_single_number_heading_pane_vc_t1

0xce82,	// (0x0002cf68) list_single_number_heading_pane_vc_t2_ParamLimits

0xce82,	// (0x0002cf68) list_single_number_heading_pane_vc_t2

0xce94,	// (0x0002cf7a) list_single_number_heading_pane_vc_t3_ParamLimits

0xce94,	// (0x0002cf7a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa47,	// (0x0002fb2d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x0002fb2d) list_single_number_heading_pane_vc_t

0xc777,	// (0x0002c85d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc777,	// (0x0002c85d) list_single_graphic_heading_pane_vc_g1

0xd5ff,	// (0x0002d6e5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd5ff,	// (0x0002d6e5) list_single_graphic_heading_pane_vc_g4

0xd60b,	// (0x0002d6f1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd60b,	// (0x0002d6f1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0002f8c1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0002f8c1) list_single_graphic_heading_pane_vc_g

0xcd78,	// (0x0002ce5e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xcd78,	// (0x0002ce5e) list_single_graphic_heading_pane_vc_t1

0xcea6,	// (0x0002cf8c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xcea6,	// (0x0002cf8c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002fb34) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002fb34) list_single_graphic_heading_pane_vc_t

0xd5ff,	// (0x0002d6e5) list_double2_pane_vc_g1_ParamLimits

0xd5ff,	// (0x0002d6e5) list_double2_pane_vc_g1

0xd60b,	// (0x0002d6f1) list_double2_pane_vc_g2_ParamLimits

0xd60b,	// (0x0002d6f1) list_double2_pane_vc_g2

0x0001,

0xf60d,	// (0x0002f6f3) list_double2_pane_vc_g_ParamLimits

0xf60d,	// (0x0002f6f3) list_double2_pane_vc_g

0xc6d2,	// (0x0002c7b8) list_double2_pane_vc_t1_ParamLimits

0xc6d2,	// (0x0002c7b8) list_double2_pane_vc_t1

0xd5d3,	// (0x0002d6b9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd5d3,	// (0x0002d6b9) list_double2_large_graphic_pane_vc_g1

0xd5df,	// (0x0002d6c5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd5df,	// (0x0002d6c5) list_double2_large_graphic_pane_vc_g2

0xd5eb,	// (0x0002d6d1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd5eb,	// (0x0002d6d1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x0002f6ec) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x0002f6ec) list_double2_large_graphic_pane_vc_g

0xc6bc,	// (0x0002c7a2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc6bc,	// (0x0002c7a2) list_double2_large_graphic_pane_vc_t1

0xe001,	// (0x0002e0e7) list_double_time_pane_vc_g1_ParamLimits

0xe001,	// (0x0002e0e7) list_double_time_pane_vc_g1

0xe00d,	// (0x0002e0f3) list_double_time_pane_vc_g2_ParamLimits

0xe00d,	// (0x0002e0f3) list_double_time_pane_vc_g2

0x0001,

0xfa53,	// (0x0002fb39) list_double_time_pane_vc_g_ParamLimits

0xfa53,	// (0x0002fb39) list_double_time_pane_vc_g

0xceb8,	// (0x0002cf9e) list_double_time_pane_vc_t1_ParamLimits

0xceb8,	// (0x0002cf9e) list_double_time_pane_vc_t1

0xced1,	// (0x0002cfb7) list_double_time_pane_vc_t2_ParamLimits

0xced1,	// (0x0002cfb7) list_double_time_pane_vc_t2

0xcf0a,	// (0x0002cff0) list_double_time_pane_vc_t3_ParamLimits

0xcf0a,	// (0x0002cff0) list_double_time_pane_vc_t3

0xcf22,	// (0x0002d008) list_double_time_pane_vc_t4_ParamLimits

0xcf22,	// (0x0002d008) list_double_time_pane_vc_t4

0x0003,

0xfa58,	// (0x0002fb3e) list_double_time_pane_vc_t_ParamLimits

0xfa58,	// (0x0002fb3e) list_double_time_pane_vc_t

0xd5ff,	// (0x0002d6e5) list_double_pane_vc_g1_ParamLimits

0xd5ff,	// (0x0002d6e5) list_double_pane_vc_g1

0xd60b,	// (0x0002d6f1) list_double_pane_vc_g2_ParamLimits

0xd60b,	// (0x0002d6f1) list_double_pane_vc_g2

0x0001,

0xf60d,	// (0x0002f6f3) list_double_pane_vc_g_ParamLimits

0xf60d,	// (0x0002f6f3) list_double_pane_vc_g

0xcf34,	// (0x0002d01a) list_double_pane_vc_t1_ParamLimits

0xcf34,	// (0x0002d01a) list_double_pane_vc_t1

0xcf46,	// (0x0002d02c) list_double_pane_vc_t2_ParamLimits

0xcf46,	// (0x0002d02c) list_double_pane_vc_t2

0x0001,

0xfa61,	// (0x0002fb47) list_double_pane_vc_t_ParamLimits

0xfa61,	// (0x0002fb47) list_double_pane_vc_t

0xd5ff,	// (0x0002d6e5) list_double_number_pane_vc_g1_ParamLimits

0xd5ff,	// (0x0002d6e5) list_double_number_pane_vc_g1

0xd60b,	// (0x0002d6f1) list_double_number_pane_vc_g2_ParamLimits

0xd60b,	// (0x0002d6f1) list_double_number_pane_vc_g2

0x0001,

0xf60d,	// (0x0002f6f3) list_double_number_pane_vc_g_ParamLimits

0xf60d,	// (0x0002f6f3) list_double_number_pane_vc_g

0xcf5c,	// (0x0002d042) list_double_number_pane_vc_t1_ParamLimits

0xcf5c,	// (0x0002d042) list_double_number_pane_vc_t1

0xcf70,	// (0x0002d056) list_double_number_pane_vc_t2_ParamLimits

0xcf70,	// (0x0002d056) list_double_number_pane_vc_t2

0xcf46,	// (0x0002d02c) list_double_number_pane_vc_t3_ParamLimits

0xcf46,	// (0x0002d02c) list_double_number_pane_vc_t3

0x0002,

0xfa66,	// (0x0002fb4c) list_double_number_pane_vc_t_ParamLimits

0xfa66,	// (0x0002fb4c) list_double_number_pane_vc_t

0xe019,	// (0x0002e0ff) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe019,	// (0x0002e0ff) list_double_large_graphic_pane_vc_g1

0xe025,	// (0x0002e10b) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe025,	// (0x0002e10b) list_double_large_graphic_pane_vc_g2

0xd5eb,	// (0x0002d6d1) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd5eb,	// (0x0002d6d1) list_double_large_graphic_pane_vc_g3

0xcf82,	// (0x0002d068) list_double_large_graphic_pane_vc_g4_ParamLimits

0xcf82,	// (0x0002d068) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6d,	// (0x0002fb53) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0002fb53) list_double_large_graphic_pane_vc_g

0xcf8e,	// (0x0002d074) list_double_large_graphic_pane_vc_t1_ParamLimits

0xcf8e,	// (0x0002d074) list_double_large_graphic_pane_vc_t1

0xcfa0,	// (0x0002d086) list_double_large_graphic_pane_vc_t2_ParamLimits

0xcfa0,	// (0x0002d086) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0002fb5c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0002fb5c) list_double_large_graphic_pane_vc_t

0xd5ff,	// (0x0002d6e5) list_double_heading_pane_vc_g1_ParamLimits

0xd5ff,	// (0x0002d6e5) list_double_heading_pane_vc_g1

0xd60b,	// (0x0002d6f1) list_double_heading_pane_vc_g2_ParamLimits

0xd60b,	// (0x0002d6f1) list_double_heading_pane_vc_g2

0x0001,

0xf60d,	// (0x0002f6f3) list_double_heading_pane_vc_g_ParamLimits

0xf60d,	// (0x0002f6f3) list_double_heading_pane_vc_g

0xcfb7,	// (0x0002d09d) list_double_heading_pane_vc_t1_ParamLimits

0xcfb7,	// (0x0002d09d) list_double_heading_pane_vc_t1

0xcd78,	// (0x0002ce5e) list_double_heading_pane_vc_t2_ParamLimits

0xcd78,	// (0x0002ce5e) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0002fb61) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0002fb61) list_double_heading_pane_vc_t

0xc777,	// (0x0002c85d) list_double_graphic_pane_vc_g1_ParamLimits

0xc777,	// (0x0002c85d) list_double_graphic_pane_vc_g1

0xd617,	// (0x0002d6fd) list_double_graphic_pane_vc_g2_ParamLimits

0xd617,	// (0x0002d6fd) list_double_graphic_pane_vc_g2

0xd626,	// (0x0002d70c) list_double_graphic_pane_vc_g3_ParamLimits

0xd626,	// (0x0002d70c) list_double_graphic_pane_vc_g3

0x0002,

0xfa80,	// (0x0002fb66) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0002fb66) list_double_graphic_pane_vc_g

0xcfc9,	// (0x0002d0af) list_double_graphic_pane_vc_t1_ParamLimits

0xcfc9,	// (0x0002d0af) list_double_graphic_pane_vc_t1

0xcf46,	// (0x0002d02c) list_double_graphic_pane_vc_t2_ParamLimits

0xcf46,	// (0x0002d02c) list_double_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0002fb6d) list_double_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0002fb6d) list_double_graphic_pane_vc_t

0xd2db,	// (0x0002d3c1) aid_size_cell_fastswap

0xd2e3,	// (0x0002d3c9) aid_size_cell_touch_ParamLimits

0xd2e3,	// (0x0002d3c9) aid_size_cell_touch

0xd428,	// (0x0002d50e) popup_fast_swap_wide_window_ParamLimits

0xd428,	// (0x0002d50e) popup_fast_swap_wide_window

0xd4ee,	// (0x0002d5d4) touch_pane_ParamLimits

0xd4ee,	// (0x0002d5d4) touch_pane

0xca35,	// (0x0002cb1b) button_value_adjust_pane_cp2

0xca3d,	// (0x0002cb23) button_value_adjust_pane_cp4

0xca5d,	// (0x0002cb43) form_field_data_pane_cp2

0xca7c,	// (0x0002cb62) form_field_data_wide_pane_cp2

0x13ea,	// (0x000214d0) bg_scroll_pane_ParamLimits

0xd7b7,	// (0x0002d89d) scroll_handle_pane_ParamLimits

0xd7cb,	// (0x0002d8b1) scroll_sc2_down_pane_ParamLimits

0xd7cb,	// (0x0002d8b1) scroll_sc2_down_pane

0x141b,	// (0x00021501) scroll_sc2_up_pane_ParamLimits

0x141b,	// (0x00021501) scroll_sc2_up_pane

0x8f5f,	// (0x00029045) grid_wheel_folder_pane_g1_ParamLimits

0x8f5f,	// (0x00029045) grid_wheel_folder_pane_g1

0xd98f,	// (0x0002da75) clock_nsta_pane_cp2_ParamLimits

0xd98f,	// (0x0002da75) clock_nsta_pane_cp2

0x4009,	// (0x000240ef) listscroll_midp_pane_ParamLimits

0x4015,	// (0x000240fb) midp_canvas_pane

0xdbd7,	// (0x0002dcbd) nsta_clock_indic_pane

0x1c51,	// (0x00021d37) listscroll_form_pane_vc

0x1c59,	// (0x00021d3f) listscroll_set_pane_vc_ParamLimits

0x1c59,	// (0x00021d3f) listscroll_set_pane_vc

0x472a,	// (0x00024810) clock_nsta_pane

0x4737,	// (0x0002481d) indicator_nsta_pane

0x1e67,	// (0x00021f4d) bg_popup_sub_pane_cp2_ParamLimits

0x1e7b,	// (0x00021f61) find_pane_cp2_ParamLimits

0x1e7b,	// (0x00021f61) find_pane_cp2

0x1e8d,	// (0x00021f73) grid_toobar_pane_ParamLimits

0x1feb,	// (0x000220d1) list_form_gen_pane_vc_ParamLimits

0x1feb,	// (0x000220d1) list_form_gen_pane_vc

0x2001,	// (0x000220e7) scroll_pane_cp8_vc_ParamLimits

0x2001,	// (0x000220e7) scroll_pane_cp8_vc

0x2051,	// (0x00022137) data_form_wide_pane_vc_ParamLimits

0x2051,	// (0x00022137) data_form_wide_pane_vc

0x205d,	// (0x00022143) form_field_data_wide_pane_vc_g1

0x2065,	// (0x0002214b) form_field_data_wide_pane_vc_t1_ParamLimits

0x2065,	// (0x0002214b) form_field_data_wide_pane_vc_t1

0x0e9d,	// (0x00020f83) input_focus_pane_cp6_vc_ParamLimits

0x0e9d,	// (0x00020f83) input_focus_pane_cp6_vc

0x4b5a,	// (0x00024c40) list_midp_pane_ParamLimits

0x4b66,	// (0x00024c4c) scroll_pane_cp16_ParamLimits

0x4b66,	// (0x00024c4c) scroll_pane_cp16

0x22cc,	// (0x000223b2) button_value_adjust_pane_ParamLimits

0x22cc,	// (0x000223b2) button_value_adjust_pane

0x899a,	// (0x00028a80) button_value_adjust_pane_cp6_ParamLimits

0x899a,	// (0x00028a80) button_value_adjust_pane_cp6

0x8aa2,	// (0x00028b88) settings_code_pane_cp_ParamLimits

0x8aa2,	// (0x00028b88) settings_code_pane_cp

0x0817,	// (0x000208fd) cell_touch_pane_g1

0x0817,	// (0x000208fd) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0002f80a) cell_touch_pane_g

0x8e3c,	// (0x00028f22) cell_touch_pane_cp_ParamLimits

0x8e3c,	// (0x00028f22) cell_touch_pane_cp

0x8e4c,	// (0x00028f32) cell_touch_pane_ParamLimits

0x8e4c,	// (0x00028f32) cell_touch_pane

0x0817,	// (0x000208fd) scroll_sc2_down_pane_g1

0x0817,	// (0x000208fd) scroll_sc2_up_pane_g1

0x0899,	// (0x0002097f) bg_set_opt_pane_cp4_vc

0x64b3,	// (0x00026599) list_set_graphic_pane_vc_g1_ParamLimits

0x64b3,	// (0x00026599) list_set_graphic_pane_vc_g1

0x64bf,	// (0x000265a5) list_set_graphic_pane_vc_g2_ParamLimits

0x64bf,	// (0x000265a5) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x0002faea) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x0002faea) list_set_graphic_pane_vc_g

0x64cb,	// (0x000265b1) text_primary_small_cp13_vc_ParamLimits

0x64cb,	// (0x000265b1) text_primary_small_cp13_vc

0x64e3,	// (0x000265c9) list_set_graphic_pane_vc_ParamLimits

0x64e3,	// (0x000265c9) list_set_graphic_pane_vc

0x0899,	// (0x0002097f) input_focus_pane_cp2_vc

0x0817,	// (0x000208fd) setting_code_pane_vc_g1

0x64f6,	// (0x000265dc) setting_code_pane_vc_t1

0x6504,	// (0x000265ea) set_text_pane_vc_t1_ParamLimits

0x6504,	// (0x000265ea) set_text_pane_vc_t1

0x0899,	// (0x0002097f) input_focus_pane_cp1_vc

0x651f,	// (0x00026605) list_set_text_pane_vc

0x0817,	// (0x000208fd) setting_text_pane_vc_g1

0x0899,	// (0x0002097f) bg_set_opt_pane_cp2_vc

0x6529,	// (0x0002660f) setting_slider_graphic_pane_vc_g1

0x6531,	// (0x00026617) setting_slider_graphic_pane_vc_t1

0x653f,	// (0x00026625) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x0002faef) setting_slider_graphic_pane_vc_t

0x654d,	// (0x00026633) slider_set_pane_cp_vc

0x6555,	// (0x0002663b) slider_set_pane_vc_g1

0x655e,	// (0x00026644) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x0002faf4) slider_set_pane_vc_g

0x0ef8,	// (0x00020fde) set_opt_bg_pane_g1_copy1

0x0f00,	// (0x00020fe6) set_opt_bg_pane_g2_copy1

0x658a,	// (0x00026670) set_opt_bg_pane_g3_copy1

0x0f10,	// (0x00020ff6) set_opt_bg_pane_g4_copy1

0x0f18,	// (0x00020ffe) set_opt_bg_pane_g5_copy1

0x0f20,	// (0x00021006) set_opt_bg_pane_g6_copy1

0x6592,	// (0x00026678) set_opt_bg_pane_g7_copy1

0x659a,	// (0x00026680) set_opt_bg_pane_g8_copy1

0x65a2,	// (0x00026688) set_opt_bg_pane_g9_copy1

0x0899,	// (0x0002097f) bg_set_opt_pane_cp_vc

0x65aa,	// (0x00026690) setting_slider_pane_vc_t1

0x6531,	// (0x00026617) setting_slider_pane_vc_t2

0x653f,	// (0x00026625) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x0002fb03) setting_slider_pane_vc_t

0x654d,	// (0x00026633) slider_set_pane_vc

0xdcf6,	// (0x0002dddc) volume_set_pane_vc_g1

0xdfb0,	// (0x0002e096) volume_set_pane_vc_g2

0xdfb9,	// (0x0002e09f) volume_set_pane_vc_g3

0xdfc2,	// (0x0002e0a8) volume_set_pane_vc_g4

0xdfcb,	// (0x0002e0b1) volume_set_pane_vc_g5

0xdfd4,	// (0x0002e0ba) volume_set_pane_vc_g6

0xdfdd,	// (0x0002e0c3) volume_set_pane_vc_g7

0xdfe6,	// (0x0002e0cc) volume_set_pane_vc_g8

0xdfef,	// (0x0002e0d5) volume_set_pane_vc_g9

0xdff8,	// (0x0002e0de) volume_set_pane_vc_g10

0x0009,

0xfa24,	// (0x0002fb0a) volume_set_pane_vc_g

0x65b9,	// (0x0002669f) volume_set_pane_vc

0x65c1,	// (0x000266a7) button_value_adjust_pane_cp1_vc

0x65cb,	// (0x000266b1) list_highlight_pane_cp2_vc

0x65d4,	// (0x000266ba) list_set_pane_vc_ParamLimits

0x65d4,	// (0x000266ba) list_set_pane_vc

0x6626,	// (0x0002670c) main_pane_set_vc_t1_ParamLimits

0x6626,	// (0x0002670c) main_pane_set_vc_t1

0x663b,	// (0x00026721) main_pane_set_vc_t2_ParamLimits

0x663b,	// (0x00026721) main_pane_set_vc_t2

0x664d,	// (0x00026733) main_pane_set_vc_t3_ParamLimits

0x664d,	// (0x00026733) main_pane_set_vc_t3

0x665f,	// (0x00026745) main_pane_set_vc_t4_ParamLimits

0x665f,	// (0x00026745) main_pane_set_vc_t4

0x0003,

0xfa39,	// (0x0002fb1f) main_pane_set_vc_t_ParamLimits

0xfa39,	// (0x0002fb1f) main_pane_set_vc_t

0x6671,	// (0x00026757) setting_code_pane_vc_ParamLimits

0x6671,	// (0x00026757) setting_code_pane_vc

0x6680,	// (0x00026766) setting_slider_graphic_pane_vc

0x6680,	// (0x00026766) setting_slider_pane_vc

0x6680,	// (0x00026766) setting_text_pane_vc

0x6680,	// (0x00026766) setting_volume_pane_vc

0x6688,	// (0x0002676e) scroll_pane_cp121_vc

0x0e88,	// (0x00020f6e) set_content_pane_vc

0x66c6,	// (0x000267ac) button_value_adjust_pane_g1

0x66cf,	// (0x000267b5) button_value_adjust_pane_g2

0x0001,

0xfa8c,	// (0x0002fb72) button_value_adjust_pane_g

0x66d8,	// (0x000267be) form_field_slider_wide_pane_vc_t1_ParamLimits

0x66d8,	// (0x000267be) form_field_slider_wide_pane_vc_t1

0x66ee,	// (0x000267d4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x66ee,	// (0x000267d4) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa91,	// (0x0002fb77) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x0002fb77) form_field_slider_wide_pane_vc_t

0x08e7,	// (0x000209cd) input_focus_pane_cp10_vc_ParamLimits

0x08e7,	// (0x000209cd) input_focus_pane_cp10_vc

0x6703,	// (0x000267e9) slider_cont_pane_cp1_vc_ParamLimits

0x6703,	// (0x000267e9) slider_cont_pane_cp1_vc

0x6555,	// (0x0002663b) slider_form_pane_g1_cp2

0x655e,	// (0x00026644) slider_form_pane_g2_cp2

0x671e,	// (0x00026804) form_field_slider_pane_vc_t3

0x672c,	// (0x00026812) form_field_slider_pane_vc_t4

0x673a,	// (0x00026820) slider_form_pane_vc_ParamLimits

0x673a,	// (0x00026820) slider_form_pane_vc

0x6747,	// (0x0002682d) form_field_slider_pane_vc_t1_ParamLimits

0x6747,	// (0x0002682d) form_field_slider_pane_vc_t1

0x675d,	// (0x00026843) form_field_slider_pane_vc_t2_ParamLimits

0x675d,	// (0x00026843) form_field_slider_pane_vc_t2

0x0001,

0xfaa1,	// (0x0002fb87) form_field_slider_pane_vc_t_ParamLimits

0xfaa1,	// (0x0002fb87) form_field_slider_pane_vc_t

0x08e7,	// (0x000209cd) input_focus_pane_cp9_vc_ParamLimits

0x08e7,	// (0x000209cd) input_focus_pane_cp9_vc

0x676f,	// (0x00026855) slider_cont_pane_vc_ParamLimits

0x676f,	// (0x00026855) slider_cont_pane_vc

0x6781,	// (0x00026867) list_form_graphic_pane_cp_vc_ParamLimits

0x6781,	// (0x00026867) list_form_graphic_pane_cp_vc

0x205d,	// (0x00022143) form_field_popup_wide_pane_vc_g1

0x6796,	// (0x0002687c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6796,	// (0x0002687c) form_field_popup_wide_pane_vc_t1

0x0e9d,	// (0x00020f83) input_focus_pane_cp8_vc_ParamLimits

0x0e9d,	// (0x00020f83) input_focus_pane_cp8_vc

0x67ab,	// (0x00026891) list_form_wide_pane_vc_ParamLimits

0x67ab,	// (0x00026891) list_form_wide_pane_vc

0x67b7,	// (0x0002689d) list_form_graphic_pane_vc_g1

0x67bf,	// (0x000268a5) list_form_graphic_pane_vc_t1_ParamLimits

0x67bf,	// (0x000268a5) list_form_graphic_pane_vc_t1

0x08fd,	// (0x000209e3) list_highlight_pane_cp5_vc_ParamLimits

0x08fd,	// (0x000209e3) list_highlight_pane_cp5_vc

0x67db,	// (0x000268c1) list_form_graphic_pane_vc_ParamLimits

0x67db,	// (0x000268c1) list_form_graphic_pane_vc

0x205d,	// (0x00022143) form_field_popup_pane_vc_g1

0x67f1,	// (0x000268d7) form_field_popup_pane_vc_t1_ParamLimits

0x67f1,	// (0x000268d7) form_field_popup_pane_vc_t1

0x0e9d,	// (0x00020f83) input_focus_pane_cp7_vc_ParamLimits

0x0e9d,	// (0x00020f83) input_focus_pane_cp7_vc

0x6806,	// (0x000268ec) list_form_pane_vc_ParamLimits

0x6806,	// (0x000268ec) list_form_pane_vc

0x6812,	// (0x000268f8) data_form_pane_vc_t1_ParamLimits

0x6812,	// (0x000268f8) data_form_pane_vc_t1

0x0ef8,	// (0x00020fde) input_focus_pane_vc_g1

0x0f00,	// (0x00020fe6) input_focus_pane_vc_g2

0x0f08,	// (0x00020fee) input_focus_pane_vc_g3

0x0f10,	// (0x00020ff6) input_focus_pane_vc_g4

0x0f18,	// (0x00020ffe) input_focus_pane_vc_g5

0x0f20,	// (0x00021006) input_focus_pane_vc_g6

0x0f28,	// (0x0002100e) input_focus_pane_vc_g7

0x0f30,	// (0x00021016) input_focus_pane_vc_g8

0x0f38,	// (0x0002101e) input_focus_pane_vc_g9

0x0817,	// (0x000208fd) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0002f793) input_focus_pane_vc_g

0x2051,	// (0x00022137) data_form_pane_vc_ParamLimits

0x2051,	// (0x00022137) data_form_pane_vc

0x205d,	// (0x00022143) form_field_data_pane_vc_g1

0x682d,	// (0x00026913) form_field_data_pane_vc_t1_ParamLimits

0x682d,	// (0x00026913) form_field_data_pane_vc_t1

0x0e9d,	// (0x00020f83) input_focus_pane_vc_ParamLimits

0x0e9d,	// (0x00020f83) input_focus_pane_vc

0x11f8,	// (0x000212de) button_value_adjust_pane_cp3_vc

0x5b27,	// (0x00025c0d) button_value_adjust_pane_cp5_vc

0x6843,	// (0x00026929) form_field_data_pane_vc_ParamLimits

0x6843,	// (0x00026929) form_field_data_pane_vc

0x1200,	// (0x000212e6) form_field_data_pane_vc_cp2

0x685a,	// (0x00026940) form_field_data_wide_pane_vc_ParamLimits

0x685a,	// (0x00026940) form_field_data_wide_pane_vc

0x6870,	// (0x00026956) form_field_data_wide_pane_vc_cp2

0x6878,	// (0x0002695e) form_field_popup_pane_vc_ParamLimits

0x6878,	// (0x0002695e) form_field_popup_pane_vc

0x688f,	// (0x00026975) form_field_popup_wide_pane_vc_ParamLimits

0x688f,	// (0x00026975) form_field_popup_wide_pane_vc

0x68a5,	// (0x0002698b) form_field_slider_pane_vc_ParamLimits

0x68a5,	// (0x0002698b) form_field_slider_pane_vc

0x68b8,	// (0x0002699e) form_field_slider_wide_pane_vc_ParamLimits

0x68b8,	// (0x0002699e) form_field_slider_wide_pane_vc

0x8e5e,	// (0x00028f44) grid_touch_1_pane_ParamLimits

0x8e5e,	// (0x00028f44) grid_touch_1_pane

0x8e6a,	// (0x00028f50) grid_touch_2_pane_ParamLimits

0x8e6a,	// (0x00028f50) grid_touch_2_pane

0x1c13,	// (0x00021cf9) touch_pane_g1_ParamLimits

0x1c13,	// (0x00021cf9) touch_pane_g1

0x68cb,	// (0x000269b1) cell_app_pane_cp_wide_ParamLimits

0x68cb,	// (0x000269b1) cell_app_pane_cp_wide

0x68db,	// (0x000269c1) grid_popup_fast_wide_pane_ParamLimits

0x68db,	// (0x000269c1) grid_popup_fast_wide_pane

0x68ef,	// (0x000269d5) scroll_pane_cp19_ParamLimits

0x68ef,	// (0x000269d5) scroll_pane_cp19

0x0899,	// (0x0002097f) bg_popup_window_pane_cp20

0x6903,	// (0x000269e9) listscroll_popup_fast_wide_pane

0x08fd,	// (0x000209e3) grid_indicator_nsta_pane

0x690b,	// (0x000269f1) clock_nsta_pane_g1

0x6914,	// (0x000269fa) clock_nsta_pane_t1

0x8e82,	// (0x00028f68) cell_indicator_nsta_pane_ParamLimits

0x8e82,	// (0x00028f68) cell_indicator_nsta_pane

0x6930,	// (0x00026a16) cell_indicator_nsta_pane_g1

0x8eba,	// (0x00028fa0) cell_indicator_nsta_pane_g2

0x0001,

0xfaab,	// (0x0002fb91) cell_indicator_nsta_pane_g

0x693e,	// (0x00026a24) clock_nsta_pane_cp

0x6946,	// (0x00026a2c) indicator_nsta_pane_cp

0x694f,	// (0x00026a35) nsta_clock_indic_pane_g1

0x0965,	// (0x00020a4b) grid_indicator_pane

0x150d,	// (0x000215f3) scroll_pane_cp29

0xd8e6,	// (0x0002d9cc) indicator_nsta_pane_cp2_ParamLimits

0xd8e6,	// (0x0002d9cc) indicator_nsta_pane_cp2

0x08fd,	// (0x000209e3) main_apps_wheel_pane

0x2171,	// (0x00022257) form_midp_field_text_pane_ParamLimits

0x229e,	// (0x00022384) scroll_bar_cp050_ParamLimits

0x69b8,	// (0x00026a9e) cell_indicator_pane_ParamLimits

0x69b8,	// (0x00026a9e) cell_indicator_pane

0x69ce,	// (0x00026ab4) cell_indicator_pane_g1

0x8ecf,	// (0x00028fb5) grid_wheel_folder_pane_ParamLimits

0x8ecf,	// (0x00028fb5) grid_wheel_folder_pane

0x8ee1,	// (0x00028fc7) list_wheel_apps_pane_ParamLimits

0x8ee1,	// (0x00028fc7) list_wheel_apps_pane

0x8ef0,	// (0x00028fd6) main_apps_wheel_pane_g1_ParamLimits

0x8ef0,	// (0x00028fd6) main_apps_wheel_pane_g1

0x8f04,	// (0x00028fea) main_apps_wheel_pane_g2_ParamLimits

0x8f04,	// (0x00028fea) main_apps_wheel_pane_g2

0x0001,

0xfac7,	// (0x0002fbad) main_apps_wheel_pane_g_ParamLimits

0xfac7,	// (0x0002fbad) main_apps_wheel_pane_g

0x8f18,	// (0x00028ffe) main_apps_wheel_pane_t1_ParamLimits

0x8f18,	// (0x00028ffe) main_apps_wheel_pane_t1

0x8f37,	// (0x0002901d) list_wheel_apps_pane_g1

0x8f3f,	// (0x00029025) list_wheel_apps_pane_g2

0x8f47,	// (0x0002902d) list_wheel_apps_pane_g3

0x8f4f,	// (0x00029035) list_wheel_apps_pane_g4

0x8f57,	// (0x0002903d) list_wheel_apps_pane_g5

0x0004,

0xfacc,	// (0x0002fbb2) list_wheel_apps_pane_g

0x08fd,	// (0x000209e3) navi_icon_text_pane

0x467e,	// (0x00024764) aid_fill_nsta

0x69d8,	// (0x00026abe) navi_icon_text_pane_g1

0x69e4,	// (0x00026aca) navi_icon_text_pane_t1

0x1782,	// (0x00021868) list_set_graphic_pane_t1_ParamLimits

0x1782,	// (0x00021868) list_set_graphic_pane_t1

0x2978,	// (0x00022a5e) popup_midp_note_alarm_window_t6_ParamLimits

0x2978,	// (0x00022a5e) popup_midp_note_alarm_window_t6

0x298a,	// (0x00022a70) popup_midp_note_alarm_window_t7_ParamLimits

0x298a,	// (0x00022a70) popup_midp_note_alarm_window_t7

0x299c,	// (0x00022a82) popup_midp_note_alarm_window_t8_ParamLimits

0x299c,	// (0x00022a82) popup_midp_note_alarm_window_t8

0x29ae,	// (0x00022a94) popup_midp_note_alarm_window_t9_ParamLimits

0x29ae,	// (0x00022a94) popup_midp_note_alarm_window_t9

0x29c0,	// (0x00022aa6) popup_midp_note_alarm_window_t10_ParamLimits

0x29c0,	// (0x00022aa6) popup_midp_note_alarm_window_t10

0x29d2,	// (0x00022ab8) popup_midp_note_alarm_window_t11_ParamLimits

0x29d2,	// (0x00022ab8) popup_midp_note_alarm_window_t11

0x29e4,	// (0x00022aca) scroll_pane_cp17_ParamLimits

0x29e4,	// (0x00022aca) scroll_pane_cp17

0xdcf6,	// (0x0002dddc) volume_small_pane_cp_g1

0xe034,	// (0x0002e11a) volume_small_pane_cp_g2

0xe03d,	// (0x0002e123) volume_small_pane_cp_g3

0xe046,	// (0x0002e12c) volume_small_pane_cp_g4

0xdd23,	// (0x0002de09) volume_small_pane_cp_g5

0xe04f,	// (0x0002e135) volume_small_pane_cp_g6

0xe058,	// (0x0002e13e) volume_small_pane_cp_g7

0xe061,	// (0x0002e147) volume_small_pane_cp_g8

0xe06a,	// (0x0002e150) volume_small_pane_cp_g9

0xe073,	// (0x0002e159) volume_small_pane_cp_g10

0x1a31,	// (0x00021b17) midp_ticker_pane_g1_ParamLimits

0x1a3d,	// (0x00021b23) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0002f85b) midp_ticker_pane_g_ParamLimits

0x1a49,	// (0x00021b2f) midp_ticker_pane_t1_ParamLimits

0x468e,	// (0x00024774) aid_fill_nsta_2

0x228a,	// (0x00022370) list_form2_midp_pane

0x6139,	// (0x0002621f) midp_editing_number_pane_ParamLimits

0x6145,	// (0x0002622b) midp_ticker_pane_ParamLimits

0x69f6,	// (0x00026adc) form2_midp_field_pane

0x69fe,	// (0x00026ae4) scroll_pane_cp51

0x6a1e,	// (0x00026b04) form2_midp_button_pane_ParamLimits

0x6a1e,	// (0x00026b04) form2_midp_button_pane

0x6a30,	// (0x00026b16) form2_midp_content_pane_ParamLimits

0x6a30,	// (0x00026b16) form2_midp_content_pane

0x6a4a,	// (0x00026b30) form2_midp_field_choice_group_pane

0x6a52,	// (0x00026b38) form2_midp_field_pane_g1

0x6a5a,	// (0x00026b40) form2_midp_field_pane_g2

0x6a62,	// (0x00026b48) form2_midp_field_pane_g3

0x6a6a,	// (0x00026b50) form2_midp_field_pane_g4

0x0003,

0xfaf1,	// (0x0002fbd7) form2_midp_field_pane_g

0x6a72,	// (0x00026b58) form2_midp_gauge_slider_pane

0x6a7a,	// (0x00026b60) form2_midp_gauge_wait_pane

0x6a82,	// (0x00026b68) form2_midp_image_pane_ParamLimits

0x6a82,	// (0x00026b68) form2_midp_image_pane

0x6a9d,	// (0x00026b83) form2_midp_label_pane_ParamLimits

0x6a9d,	// (0x00026b83) form2_midp_label_pane

0x8f92,	// (0x00029078) form2_midp_label_pane_cp_ParamLimits

0x8f92,	// (0x00029078) form2_midp_label_pane_cp

0x6ab6,	// (0x00026b9c) form2_midp_string_pane_ParamLimits

0x6ab6,	// (0x00026b9c) form2_midp_string_pane

0xcfdb,	// (0x0002d0c1) form2_midp_text_pane_ParamLimits

0xcfdb,	// (0x0002d0c1) form2_midp_text_pane

0x6ac8,	// (0x00026bae) form2_midp_time_pane

0x6ad8,	// (0x00026bbe) input_focus_pane_cp51_ParamLimits

0x6ad8,	// (0x00026bbe) input_focus_pane_cp51

0x6af0,	// (0x00026bd6) form2_midp_label_pane_t1_ParamLimits

0x6af0,	// (0x00026bd6) form2_midp_label_pane_t1

0xcff4,	// (0x0002d0da) form2_mdip_text_pane_t1_ParamLimits

0xcff4,	// (0x0002d0da) form2_mdip_text_pane_t1

0xd00f,	// (0x0002d0f5) form2_midp_time_pane_t1

0x6b38,	// (0x00026c1e) form2_midp_gauge_slider_pane_t1

0x8fb1,	// (0x00029097) form2_midp_gauge_slider_pane_t2

0x8fc3,	// (0x000290a9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafa,	// (0x0002fbe0) form2_midp_gauge_slider_pane_t

0x6b4a,	// (0x00026c30) form2_midp_slider_pane

0x6b56,	// (0x00026c3c) form2_midp_gauge_wait_pane_t1

0x6b64,	// (0x00026c4a) form2_midp_wait_pane_ParamLimits

0x6b64,	// (0x00026c4a) form2_midp_wait_pane

0x3d6c,	// (0x00023e52) list_single_2graphic_pane_cp4_ParamLimits

0x3d6c,	// (0x00023e52) list_single_2graphic_pane_cp4

0x4ae5,	// (0x00024bcb) list_single_midp_graphic_pane_cp_ParamLimits

0x4ae5,	// (0x00024bcb) list_single_midp_graphic_pane_cp

0x0899,	// (0x0002097f) list_highlight_pane_cp20

0x6b8f,	// (0x00026c75) list_single_2graphic_pane_g1_cp4

0x61ba,	// (0x000262a0) list_single_2graphic_pane_g2_cp4

0x6b97,	// (0x00026c7d) list_single_2graphic_pane_t1_cp4

0x08fd,	// (0x000209e3) list_highlight_pane_cp21

0x6ba6,	// (0x00026c8c) list_single_midp_graphic_pane_g4_cp

0x6bb5,	// (0x00026c9b) list_single_midp_graphic_pane_t1_cp

0x8fd5,	// (0x000290bb) form2_mdip_string_pane_t1_ParamLimits

0x8fd5,	// (0x000290bb) form2_mdip_string_pane_t1

0x0899,	// (0x0002097f) bg_wml_button_pane_cp2

0x0817,	// (0x000208fd) form2_midp_image_pane_g1

0xd64a,	// (0x0002d730) list_double_large_graphic_pane_g5_ParamLimits

0xd64a,	// (0x0002d730) list_double_large_graphic_pane_g5

0x4009,	// (0x000240ef) midp_form_pane_ParamLimits

0x08fd,	// (0x000209e3) main_apps_wheel_pane_ParamLimits

0x4520,	// (0x00024606) popup_preview_window_ParamLimits

0x4520,	// (0x00024606) popup_preview_window

0x1d21,	// (0x00021e07) popup_touch_info_window_ParamLimits

0x1d21,	// (0x00021e07) popup_touch_info_window

0x1d3f,	// (0x00021e25) popup_touch_menu_window_ParamLimits

0x1d3f,	// (0x00021e25) popup_touch_menu_window

0x080d,	// (0x000208f3) bg_popup_sub_pane_cp6

0x6bca,	// (0x00026cb0) list_touch_menu_pane

0x6bd2,	// (0x00026cb8) list_single_touch_menu_pane_ParamLimits

0x6bd2,	// (0x00026cb8) list_single_touch_menu_pane

0x6be9,	// (0x00026ccf) list_single_touch_menu_pane_t1

0x08fd,	// (0x000209e3) bg_popup_sub_pane_cp7_ParamLimits

0x08fd,	// (0x000209e3) bg_popup_sub_pane_cp7

0x6bf7,	// (0x00026cdd) heading_sub_pane

0x6bff,	// (0x00026ce5) list_touch_info_pane_ParamLimits

0x6bff,	// (0x00026ce5) list_touch_info_pane

0x6c0e,	// (0x00026cf4) list_single_touch_info_pane_ParamLimits

0x6c0e,	// (0x00026cf4) list_single_touch_info_pane

0x6c1f,	// (0x00026d05) list_single_touch_info_pane_t1

0x6c2d,	// (0x00026d13) list_single_touch_info_pane_t2

0x0001,

0xfb08,	// (0x0002fbee) list_single_touch_info_pane_t

0x1a07,	// (0x00021aed) bg_popup_heading_pane_cp

0x6c3b,	// (0x00026d21) heading_sub_pane_t1

0x2017,	// (0x000220fd) bg_popup_preview_window_pane_cp_ParamLimits

0x2017,	// (0x000220fd) bg_popup_preview_window_pane_cp

0x6bf7,	// (0x00026cdd) heading_preview_pane

0x6bff,	// (0x00026ce5) list_preview_pane_ParamLimits

0x6bff,	// (0x00026ce5) list_preview_pane

0x6c49,	// (0x00026d2f) popup_preview_window_g1

0x6c0e,	// (0x00026cf4) list_single_preview_pane_ParamLimits

0x6c0e,	// (0x00026cf4) list_single_preview_pane

0x6c51,	// (0x00026d37) list_single_preview_pane_g1

0x6c59,	// (0x00026d3f) list_single_preview_pane_t1

0x6c1f,	// (0x00026d05) list_single_preview_pane_t2

0x0001,

0xfb0d,	// (0x0002fbf3) list_single_preview_pane_t

0x6c67,	// (0x00026d4d) bg_popup_heading_pane_cp2_ParamLimits

0x6c67,	// (0x00026d4d) bg_popup_heading_pane_cp2

0x6c7d,	// (0x00026d63) heading_preview_pane_g1

0x6c85,	// (0x00026d6b) heading_preview_pane_t1_ParamLimits

0x6c85,	// (0x00026d6b) heading_preview_pane_t1

0x097c,	// (0x00020a62) soft_indicator_pane_t1_ParamLimits

0x0e20,	// (0x00020f06) scroll_pane_ParamLimits

0x1409,	// (0x000214ef) scroll_sc2_left_pane

0x1412,	// (0x000214f8) scroll_sc2_right_pane

0x1431,	// (0x00021517) scroll_bg_pane_g1_ParamLimits

0x1446,	// (0x0002152c) scroll_bg_pane_g2_ParamLimits

0x145e,	// (0x00021544) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0002f7ea) scroll_bg_pane_g_ParamLimits

0x1431,	// (0x00021517) scroll_handle_pane_g1_ParamLimits

0x1480,	// (0x00021566) scroll_handle_pane_g2_ParamLimits

0x145e,	// (0x00021544) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0002f7f1) scroll_handle_pane_g_ParamLimits

0x1c79,	// (0x00021d5f) popup_choice_list_window_ParamLimits

0x1c79,	// (0x00021d5f) popup_choice_list_window

0x1e73,	// (0x00021f59) choice_list_pane

0x1ee9,	// (0x00021fcf) cell_toolbar_pane_t1

0x1f11,	// (0x00021ff7) toolbar_button_pane_ParamLimits

0x5e9a,	// (0x00025f80) ai_gene_pane_1_t2_ParamLimits

0x5e9a,	// (0x00025f80) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0002fa09) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0002fa09) ai_gene_pane_1_t

0x6ca2,	// (0x00026d88) scroll_sc2_left_pane_g1

0x6ca2,	// (0x00026d88) scroll_sc2_right_pane_g1

0x13af,	// (0x00021495) bg_popup_sub_pane_cp10

0x6cac,	// (0x00026d92) list_choice_list_pane

0x6cc3,	// (0x00026da9) list_single_choice_list_pane_ParamLimits

0x6cc3,	// (0x00026da9) list_single_choice_list_pane

0x6cd7,	// (0x00026dbd) list_single_choice_list_pane_g1

0x1010,	// (0x000210f6) list_single_choice_list_pane_t1_ParamLimits

0x1010,	// (0x000210f6) list_single_choice_list_pane_t1

0x6cdf,	// (0x00026dc5) choice_list_pane_g1

0x6ce7,	// (0x00026dcd) choice_list_pane_t1

0x080d,	// (0x000208f3) input_focus_pane_cp11

0x119b,	// (0x00021281) title_pane_stacon_g2_ParamLimits

0x119b,	// (0x00021281) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0002f7d0) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0002f7d0) title_pane_stacon_g

0x1a07,	// (0x00021aed) cursor_press_pane

0x436d,	// (0x00024453) popup_fep_hwr_window_ParamLimits

0x436d,	// (0x00024453) popup_fep_hwr_window

0x1ccb,	// (0x00021db1) popup_fep_vkb_window_ParamLimits

0x1ccb,	// (0x00021db1) popup_fep_vkb_window

0x6cf5,	// (0x00026ddb) cursor_press_pane_g1

0x0002,

0xfb36,	// (0x0002fc1c) fep_vkb_side_pane_g_ParamLimits

0xe0a3,	// (0x0002e189) fep_hwr_candidate_pane_ParamLimits

0xe0a3,	// (0x0002e189) fep_hwr_candidate_pane

0xe0cb,	// (0x0002e1b1) fep_hwr_side_pane_ParamLimits

0xe0cb,	// (0x0002e1b1) fep_hwr_side_pane

0xe0eb,	// (0x0002e1d1) fep_hwr_top_pane_ParamLimits

0xe0eb,	// (0x0002e1d1) fep_hwr_top_pane

0xe103,	// (0x0002e1e9) fep_hwr_write_pane_ParamLimits

0xe103,	// (0x0002e1e9) fep_hwr_write_pane

0xfb36,	// (0x0002fc1c) fep_vkb_side_pane_g

0x6d0f,	// (0x00026df5) fep_hwr_top_pane_g1

0x6cfd,	// (0x00026de3) fep_hwr_top_pane_g2

0xe12f,	// (0x0002e215) fep_hwr_top_pane_g3

0x0002,

0xfb12,	// (0x0002fbf8) fep_hwr_top_pane_g

0xe144,	// (0x0002e22a) fep_hwr_top_text_pane

0x157a,	// (0x00021660) fep_hwr_top_text_pane_g1

0x6d45,	// (0x00026e2b) fep_hwr_top_text_pane_t1

0xe232,	// (0x0002e318) fep_hwr_candidate_pane_g1

0x6f0e,	// (0x00026ff4) fep_vkb_keypad_pane_g3_ParamLimits

0x6f0e,	// (0x00026ff4) fep_vkb_keypad_pane_g3

0x6f30,	// (0x00027016) fep_vkb_keypad_pane_g4_ParamLimits

0x6f30,	// (0x00027016) fep_vkb_keypad_pane_g4

0x6f9f,	// (0x00027085) fep_vkb_bottom_pane_g2_ParamLimits

0x6f9f,	// (0x00027085) fep_vkb_bottom_pane_g2

0x0001,

0xfb3d,	// (0x0002fc23) fep_vkb_bottom_pane_g_ParamLimits

0xfb3d,	// (0x0002fc23) fep_vkb_bottom_pane_g

0x6ca2,	// (0x00026d88) cell_vkb_side_pane_g2

0x0001,

0xfb47,	// (0x0002fc2d) cell_vkb_side_pane_g

0x6fe3,	// (0x000270c9) cell_vkb_side_pane_t1

0x6ff1,	// (0x000270d7) cell_vkb_side_pane_t1_copy1

0x6ca2,	// (0x00026d88) bg_fep_vkb_candidate_pane_g2

0x70bf,	// (0x000271a5) cell_vkb_candidate_pane_ParamLimits

0x6d53,	// (0x00026e39) aid_size_cell_vkb_ParamLimits

0x6d53,	// (0x00026e39) aid_size_cell_vkb

0x70bf,	// (0x000271a5) cell_vkb_candidate_pane

0xe24c,	// (0x0002e332) bg_popup_fep_shadow_pane_g1

0x6dbd,	// (0x00026ea3) fep_vkb_bottom_pane_ParamLimits

0x6dbd,	// (0x00026ea3) fep_vkb_bottom_pane

0x6dfa,	// (0x00026ee0) fep_vkb_candidate_pane_ParamLimits

0x6dfa,	// (0x00026ee0) fep_vkb_candidate_pane

0x6e16,	// (0x00026efc) fep_vkb_keypad_pane_ParamLimits

0x6e16,	// (0x00026efc) fep_vkb_keypad_pane

0x6e4a,	// (0x00026f30) fep_vkb_side_pane_ParamLimits

0x6e4a,	// (0x00026f30) fep_vkb_side_pane

0x6e76,	// (0x00026f5c) fep_vkb_top_pane_ParamLimits

0x6e76,	// (0x00026f5c) fep_vkb_top_pane

0x6ea2,	// (0x00026f88) fep_vkb_top_pane_g1_ParamLimits

0x6ea2,	// (0x00026f88) fep_vkb_top_pane_g1

0x6eb1,	// (0x00026f97) fep_vkb_top_pane_g2_ParamLimits

0x6eb1,	// (0x00026f97) fep_vkb_top_pane_g2

0x6ec0,	// (0x00026fa6) fep_vkb_top_pane_g3_ParamLimits

0x6ec0,	// (0x00026fa6) fep_vkb_top_pane_g3

0x0003,

0xfb2d,	// (0x0002fc13) fep_vkb_top_pane_g_ParamLimits

0xfb2d,	// (0x0002fc13) fep_vkb_top_pane_g

0x6ede,	// (0x00026fc4) fep_vkb_top_text_pane_ParamLimits

0x6ede,	// (0x00026fc4) fep_vkb_top_text_pane

0x9059,	// (0x0002913f) fep_vkb_side_pane_g1_ParamLimits

0x9059,	// (0x0002913f) fep_vkb_side_pane_g1

0x6efd,	// (0x00026fe3) grid_vkb_side_pane_ParamLimits

0x6efd,	// (0x00026fe3) grid_vkb_side_pane

0xe254,	// (0x0002e33a) bg_popup_fep_shadow_pane_g2

0xe25d,	// (0x0002e343) bg_popup_fep_shadow_pane_g3

0xe265,	// (0x0002e34b) bg_popup_fep_shadow_pane_g4

0xe26e,	// (0x0002e354) bg_popup_fep_shadow_pane_g5

0xe276,	// (0x0002e35c) bg_popup_fep_shadow_pane_g6

0xe27e,	// (0x0002e364) bg_popup_fep_shadow_pane_g7

0x0f18,	// (0x00020ffe) bg_popup_fep_shadow_pane_g8

0x6f4e,	// (0x00027034) grid_vkb_keypad_number_pane_ParamLimits

0x6f4e,	// (0x00027034) grid_vkb_keypad_number_pane

0x6f5e,	// (0x00027044) grid_vkb_keypad_pane_ParamLimits

0x6f5e,	// (0x00027044) grid_vkb_keypad_pane

0x6f84,	// (0x0002706a) fep_vkb_bottom_pane_g1_ParamLimits

0x6f84,	// (0x0002706a) fep_vkb_bottom_pane_g1

0x6fad,	// (0x00027093) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6fad,	// (0x00027093) grid_vkb_keypad_bottom_left_pane

0x6fc2,	// (0x000270a8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6fc2,	// (0x000270a8) grid_vkb_keypad_bottom_right_pane

0x6fd7,	// (0x000270bd) fep_vkb_top_text_pane_g1

0x90a3,	// (0x00029189) fep_vkb_top_text_pane_t1

0x90b8,	// (0x0002919e) cell_vkb_side_pane_ParamLimits

0x90b8,	// (0x0002919e) cell_vkb_side_pane

0x6ca2,	// (0x00026d88) cell_vkb_side_pane_g1

0x6fff,	// (0x000270e5) cell_vkb_keypad_pane_ParamLimits

0x6fff,	// (0x000270e5) cell_vkb_keypad_pane

0x706c,	// (0x00027152) cell_vkb_keypad_pane_g1

0x0008,

0xfb5a,	// (0x0002fc40) bg_popup_fep_shadow_pane_g

0x6ca2,	// (0x00026d88) cell_hwr_side_pane_g1

0x6ca2,	// (0x00026d88) cell_hwr_side_pane_g2

0x7076,	// (0x0002715c) cell_vkb_keypad_pane_t1

0x90db,	// (0x000291c1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x90db,	// (0x000291c1) cell_vkb_keypad_bottom_left_pane

0x90f8,	// (0x000291de) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x90f8,	// (0x000291de) cell_vkb_keypad_bottom_right_pane

0x6ca2,	// (0x00026d88) cell_vkb_keypad_bottom_left_pane_g1

0x6ca2,	// (0x00026d88) cell_vkb_keypad_bottom_right_pane_g1

0x7084,	// (0x0002716a) cell_vkb_keypad_number_pane_ParamLimits

0x7084,	// (0x0002716a) cell_vkb_keypad_number_pane

0x70a3,	// (0x00027189) cell_vkb_keypad_number_pane_g1

0x70ad,	// (0x00027193) cell_vkb_keypad_number_pane_g2

0x70b6,	// (0x0002719c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4c,	// (0x0002fc32) cell_vkb_keypad_number_pane_g

0x7076,	// (0x0002715c) cell_vkb_keypad_number_pane_t1

0x70d8,	// (0x000271be) fep_vkb_candidate_pane_g1

0x0001,

0xfb47,	// (0x0002fc2d) cell_hwr_side_pane_g

0x70f1,	// (0x000271d7) cell_hwr_side_pane_t1

0xe28e,	// (0x0002e374) cell_hwr_side_pane_t1_copy1

0x6ed0,	// (0x00026fb6) cell_hwr_candidate_pane_g1

0xe29c,	// (0x0002e382) cell_hwr_candidate_pane_t1

0x6ca2,	// (0x00026d88) cell_vkb_candidate_pane_g2

0x7135,	// (0x0002721b) cell_vkb_candidate_pane_t1

0x767c,	// (0x00027762) bg_popup_fep_shadow_pane_ParamLimits

0x767c,	// (0x00027762) bg_popup_fep_shadow_pane

0xad32,	// (0x0002ae18) bg_fep_hwr_top_pane_g4

0x6d21,	// (0x00026e07) bg_hwr_side_pane_g1_ParamLimits

0x6d21,	// (0x00026e07) bg_hwr_side_pane_g1

0xe180,	// (0x0002e266) cell_hwr_side_pane_ParamLimits

0xe180,	// (0x0002e266) cell_hwr_side_pane

0xe1bb,	// (0x0002e2a1) fep_hwr_write_pane_g1_ParamLimits

0xe1bb,	// (0x0002e2a1) fep_hwr_write_pane_g1

0xe1c8,	// (0x0002e2ae) fep_hwr_write_pane_g2_ParamLimits

0xe1c8,	// (0x0002e2ae) fep_hwr_write_pane_g2

0xe1d5,	// (0x0002e2bb) fep_hwr_write_pane_g3_ParamLimits

0xe1d5,	// (0x0002e2bb) fep_hwr_write_pane_g3

0xe1e3,	// (0x0002e2c9) fep_hwr_write_pane_g4_ParamLimits

0xe1e3,	// (0x0002e2c9) fep_hwr_write_pane_g4

0x0005,

0xfb19,	// (0x0002fbff) fep_hwr_write_pane_g_ParamLimits

0xfb19,	// (0x0002fbff) fep_hwr_write_pane_g

0xad32,	// (0x0002ae18) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xad32,	// (0x0002ae18) bg_fep_hwr_candidate_pane_g2

0xe1f8,	// (0x0002e2de) cell_hwr_candidate_pane_ParamLimits

0xe1f8,	// (0x0002e2de) cell_hwr_candidate_pane

0xe232,	// (0x0002e318) fep_hwr_candidate_pane_g1_ParamLimits

0x6d81,	// (0x00026e67) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6d81,	// (0x00026e67) bg_popup_fep_shadow_pane_cp2

0x6ed0,	// (0x00026fb6) fep_vkb_top_pane_g4_ParamLimits

0x6ed0,	// (0x00026fb6) fep_vkb_top_pane_g4

0x6eef,	// (0x00026fd5) fep_vkb_side_pane_g2_ParamLimits

0x6eef,	// (0x00026fd5) fep_vkb_side_pane_g2

0xc966,	// (0x0002ca4c) list_setting_pane_t4_ParamLimits

0xc966,	// (0x0002ca4c) list_setting_pane_t4

0xc9fc,	// (0x0002cae2) list_setting_number_pane_t5_ParamLimits

0xc9fc,	// (0x0002cae2) list_setting_number_pane_t5

0x3d5c,	// (0x00023e42) list_double_heading_pane_cp2_ParamLimits

0x3d5c,	// (0x00023e42) list_double_heading_pane_cp2

0x187c,	// (0x00021962) list_double_heading_pane_g1_cp2_ParamLimits

0x187c,	// (0x00021962) list_double_heading_pane_g1_cp2

0x7143,	// (0x00027229) list_double_heading_pane_g2_cp2_ParamLimits

0x7143,	// (0x00027229) list_double_heading_pane_g2_cp2

0x7157,	// (0x0002723d) list_double_heading_pane_t1_cp2_ParamLimits

0x7157,	// (0x0002723d) list_double_heading_pane_t1_cp2

0x716d,	// (0x00027253) list_double_heading_pane_t2_cp2_ParamLimits

0x716d,	// (0x00027253) list_double_heading_pane_t2_cp2

0x0805,	// (0x000208eb) aid_value_unit2

0xd464,	// (0x0002d54a) popup_preview_fixed_window

0x0a5c,	// (0x00020b42) bg_popup_preview_window_pane_cp02

0x717f,	// (0x00027265) list_preview_fixed_pane

0x71c5,	// (0x000272ab) list_empty_pane_fp_ParamLimits

0x71c5,	// (0x000272ab) list_empty_pane_fp

0x71c5,	// (0x000272ab) list_single_cale_day_pane_fp_ParamLimits

0x71c5,	// (0x000272ab) list_single_cale_day_pane_fp

0x71c5,	// (0x000272ab) list_single_graphic_heading_pane_fp_ParamLimits

0x71c5,	// (0x000272ab) list_single_graphic_heading_pane_fp

0x71c5,	// (0x000272ab) list_single_graphic_pane_fp_ParamLimits

0x71c5,	// (0x000272ab) list_single_graphic_pane_fp

0x71c5,	// (0x000272ab) list_single_heading_pane_fp_ParamLimits

0x71c5,	// (0x000272ab) list_single_heading_pane_fp

0x71c5,	// (0x000272ab) list_single_pane_fp_ParamLimits

0x71c5,	// (0x000272ab) list_single_pane_fp

0x71d9,	// (0x000272bf) list_single_pane_fp_g1_ParamLimits

0x71d9,	// (0x000272bf) list_single_pane_fp_g1

0xd5ff,	// (0x0002d6e5) list_single_pane_fp_g2_ParamLimits

0xd5ff,	// (0x0002d6e5) list_single_pane_fp_g2

0xe2b9,	// (0x0002e39f) list_single_pane_fp_g3_ParamLimits

0xe2b9,	// (0x0002e39f) list_single_pane_fp_g3

0x71e5,	// (0x000272cb) list_single_pane_fp_g4_ParamLimits

0x71e5,	// (0x000272cb) list_single_pane_fp_g4

0x0003,

0xfb7b,	// (0x0002fc61) list_single_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002fc61) list_single_pane_fp_g

0xd022,	// (0x0002d108) list_single_pane_fp_t1_ParamLimits

0xd022,	// (0x0002d108) list_single_pane_fp_t1

0xd039,	// (0x0002d11f) list_single_graphic_pane_fp_g1_ParamLimits

0xd039,	// (0x0002d11f) list_single_graphic_pane_fp_g1

0x71d9,	// (0x000272bf) list_single_graphic_pane_fp_g2_ParamLimits

0x71d9,	// (0x000272bf) list_single_graphic_pane_fp_g2

0xd5ff,	// (0x0002d6e5) list_single_graphic_pane_fp_g3_ParamLimits

0xd5ff,	// (0x0002d6e5) list_single_graphic_pane_fp_g3

0xe2b9,	// (0x0002e39f) list_single_graphic_pane_fp_g4_ParamLimits

0xe2b9,	// (0x0002e39f) list_single_graphic_pane_fp_g4

0x71e5,	// (0x000272cb) list_single_graphic_pane_fp_g5_ParamLimits

0x71e5,	// (0x000272cb) list_single_graphic_pane_fp_g5

0x0004,

0xfb84,	// (0x0002fc6a) list_single_graphic_pane_fp_g_ParamLimits

0xfb84,	// (0x0002fc6a) list_single_graphic_pane_fp_g

0xd045,	// (0x0002d12b) list_single_graphic_pane_fp_t1_ParamLimits

0xd045,	// (0x0002d12b) list_single_graphic_pane_fp_t1

0xd039,	// (0x0002d11f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd039,	// (0x0002d11f) list_single_graphic_heading_pane_fp_g1

0x71d9,	// (0x000272bf) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x71d9,	// (0x000272bf) list_single_graphic_heading_pane_fp_g2

0xd5ff,	// (0x0002d6e5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd5ff,	// (0x0002d6e5) list_single_graphic_heading_pane_fp_g3

0xe2b9,	// (0x0002e39f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe2b9,	// (0x0002e39f) list_single_graphic_heading_pane_fp_g4

0x71e5,	// (0x000272cb) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x71e5,	// (0x000272cb) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0002fc6a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0002fc6a) list_single_graphic_heading_pane_fp_g

0xd05b,	// (0x0002d141) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd05b,	// (0x0002d141) list_single_graphic_heading_pane_fp_t1

0xd071,	// (0x0002d157) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd071,	// (0x0002d157) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x0002fc75) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x0002fc75) list_single_graphic_heading_pane_fp_t

0xd083,	// (0x0002d169) list_single_cale_day_pane_fp_g1_ParamLimits

0xd083,	// (0x0002d169) list_single_cale_day_pane_fp_g1

0x71f1,	// (0x000272d7) list_single_cale_day_pane_fp_g2_ParamLimits

0x71f1,	// (0x000272d7) list_single_cale_day_pane_fp_g2

0xe2cd,	// (0x0002e3b3) list_single_cale_day_pane_fp_g3_ParamLimits

0xe2cd,	// (0x0002e3b3) list_single_cale_day_pane_fp_g3

0xe2f5,	// (0x0002e3db) list_single_cale_day_pane_fp_g4_ParamLimits

0xe2f5,	// (0x0002e3db) list_single_cale_day_pane_fp_g4

0xe319,	// (0x0002e3ff) list_single_cale_day_pane_fp_g5_ParamLimits

0xe319,	// (0x0002e3ff) list_single_cale_day_pane_fp_g5

0x0004,

0xfb94,	// (0x0002fc7a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb94,	// (0x0002fc7a) list_single_cale_day_pane_fp_g

0xd0bb,	// (0x0002d1a1) list_single_cale_day_pane_fp_t1_ParamLimits

0xd0bb,	// (0x0002d1a1) list_single_cale_day_pane_fp_t1

0xd0e1,	// (0x0002d1c7) list_single_cale_day_pane_fp_t2_ParamLimits

0xd0e1,	// (0x0002d1c7) list_single_cale_day_pane_fp_t2

0xd0fa,	// (0x0002d1e0) list_single_cale_day_pane_fp_t3_ParamLimits

0xd0fa,	// (0x0002d1e0) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9f,	// (0x0002fc85) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9f,	// (0x0002fc85) list_single_cale_day_pane_fp_t

0x71d9,	// (0x000272bf) list_empty_pane_fp_g1_ParamLimits

0x71d9,	// (0x000272bf) list_empty_pane_fp_g1

0xd113,	// (0x0002d1f9) list_empty_pane_fp_t1

0xd121,	// (0x0002d207) list_empty_pane_fp_t2

0x0001,

0xfba6,	// (0x0002fc8c) list_empty_pane_fp_t

0x71d9,	// (0x000272bf) list_single_heading_pane_fp_g1_ParamLimits

0x71d9,	// (0x000272bf) list_single_heading_pane_fp_g1

0xd5ff,	// (0x0002d6e5) list_single_heading_pane_fp_g2_ParamLimits

0xd5ff,	// (0x0002d6e5) list_single_heading_pane_fp_g2

0xe2b9,	// (0x0002e39f) list_single_heading_pane_fp_g3_ParamLimits

0xe2b9,	// (0x0002e39f) list_single_heading_pane_fp_g3

0x0002,

0xfbab,	// (0x0002fc91) list_single_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0002fc91) list_single_heading_pane_fp_g

0xd12f,	// (0x0002d215) list_single_heading_pane_fp_t1_ParamLimits

0xd12f,	// (0x0002d215) list_single_heading_pane_fp_t1

0xd141,	// (0x0002d227) list_single_heading_pane_fp_t2_ParamLimits

0xd141,	// (0x0002d227) list_single_heading_pane_fp_t2

0x0001,

0xfbb2,	// (0x0002fc98) list_single_heading_pane_fp_t_ParamLimits

0xfbb2,	// (0x0002fc98) list_single_heading_pane_fp_t

0x1025,	// (0x0002110b) aid_size_cell_fast

0x0a3f,	// (0x00020b25) soft_indicator_pane_cp1_t1

0x1062,	// (0x00021148) cell_app_pane_cp2_ParamLimits

0x1062,	// (0x00021148) cell_app_pane_cp2

0xe090,	// (0x0002e176) fep_hwr_candidate_drop_down_list_pane

0xb0c9,	// (0x0002b1af) fep_hwr_candidate_pane_g3_ParamLimits

0xb0c9,	// (0x0002b1af) fep_hwr_candidate_pane_g3

0xb0d6,	// (0x0002b1bc) fep_hwr_candidate_pane_g4_ParamLimits

0xb0d6,	// (0x0002b1bc) fep_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002fc0c) fep_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0002fc0c) fep_hwr_candidate_pane_g

0x6de9,	// (0x00026ecf) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6de9,	// (0x00026ecf) fep_vkb_candidate_drop_down_list_pane

0x70e0,	// (0x000271c6) fep_vkb_candidate_pane_g3

0x70e8,	// (0x000271ce) fep_vkb_candidate_pane_g4

0x0002,

0xfb53,	// (0x0002fc39) fep_vkb_candidate_pane_g

0x6ed0,	// (0x00026fb6) cell_hwr_candidate_pane_g1_ParamLimits

0x7285,	// (0x0002736b) cell_hwr_candidate_pane_g3_ParamLimits

0x7285,	// (0x0002736b) cell_hwr_candidate_pane_g3

0x72a6,	// (0x0002738c) cell_hwr_candidate_pane_g4_ParamLimits

0x72a6,	// (0x0002738c) cell_hwr_candidate_pane_g4

0x0002,

0xfb6d,	// (0x0002fc53) cell_hwr_candidate_pane_g_ParamLimits

0xfb6d,	// (0x0002fc53) cell_hwr_candidate_pane_g

0x70ff,	// (0x000271e5) cell_vkb_candidate_pane_g3_ParamLimits

0x70ff,	// (0x000271e5) cell_vkb_candidate_pane_g3

0x711a,	// (0x00027200) cell_vkb_candidate_pane_g4_ParamLimits

0x711a,	// (0x00027200) cell_vkb_candidate_pane_g4

0x71fd,	// (0x000272e3) cell_app_pane_cp2_g1_ParamLimits

0x71fd,	// (0x000272e3) cell_app_pane_cp2_g1

0x721b,	// (0x00027301) cell_app_pane_cp2_g2_ParamLimits

0x721b,	// (0x00027301) cell_app_pane_cp2_g2

0x0001,

0xfbb7,	// (0x0002fc9d) cell_app_pane_cp2_g_ParamLimits

0xfbb7,	// (0x0002fc9d) cell_app_pane_cp2_g

0x7227,	// (0x0002730d) cell_app_pane_cp2_t1_ParamLimits

0x7227,	// (0x0002730d) cell_app_pane_cp2_t1

0x0e9d,	// (0x00020f83) grid_highlight_pane_cp1_ParamLimits

0x0e9d,	// (0x00020f83) grid_highlight_pane_cp1

0xe33d,	// (0x0002e423) cell_hwr_candidate_pane_cp1_ParamLimits

0xe33d,	// (0x0002e423) cell_hwr_candidate_pane_cp1

0x6ed0,	// (0x00026fb6) fep_hwr_candidate_drop_down_list_pane_g1

0x7239,	// (0x0002731f) fep_hwr_candidate_drop_down_list_pane_g2

0x7246,	// (0x0002732c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x0002fca2) fep_hwr_candidate_drop_down_list_pane_g

0xe35b,	// (0x0002e441) fep_hwr_candidate_drop_down_list_scroll_pane

0xe364,	// (0x0002e44a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe364,	// (0x0002e44a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe371,	// (0x0002e457) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe371,	// (0x0002e457) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe37e,	// (0x0002e464) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe37e,	// (0x0002e464) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x70ff,	// (0x000271e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x70ff,	// (0x000271e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x711a,	// (0x00027200) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x711a,	// (0x00027200) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe38b,	// (0x0002e471) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe38b,	// (0x0002e471) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe3a6,	// (0x0002e48c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe3a6,	// (0x0002e48c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe3c1,	// (0x0002e4a7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe3c1,	// (0x0002e4a7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc3,	// (0x0002fca9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc3,	// (0x0002fca9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x9131,	// (0x00029217) cell_vkb_candidate_pane_cp1_ParamLimits

0x9131,	// (0x00029217) cell_vkb_candidate_pane_cp1

0x6ed0,	// (0x00026fb6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6ed0,	// (0x00026fb6) fep_vkb_candidate_drop_down_list_pane_g1

0x7239,	// (0x0002731f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7239,	// (0x0002731f) fep_vkb_candidate_drop_down_list_pane_g2

0x7246,	// (0x0002732c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7246,	// (0x0002732c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x0002fca2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbc,	// (0x0002fca2) fep_vkb_candidate_drop_down_list_pane_g

0x7253,	// (0x00027339) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7253,	// (0x00027339) fep_vkb_candidate_drop_down_list_scroll_pane

0x7260,	// (0x00027346) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7260,	// (0x00027346) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x726d,	// (0x00027353) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x726d,	// (0x00027353) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7279,	// (0x0002735f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7279,	// (0x0002735f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7285,	// (0x0002736b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7285,	// (0x0002736b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x72a6,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x72a6,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x72c7,	// (0x000273ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x72c7,	// (0x000273ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x72e8,	// (0x000273ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x72e8,	// (0x000273ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7309,	// (0x000273ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7309,	// (0x000273ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x0002fcba) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x0002fcba) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x3764,	// (0x0002384a) title_pane_g1_ParamLimits

0x3771,	// (0x00023857) title_pane_g2_ParamLimits

0xf56a,	// (0x0002f650) title_pane_g_ParamLimits

0x156a,	// (0x00021650) aid_call2_pane

0x1572,	// (0x00021658) aid_call_pane

0x157a,	// (0x00021660) popup_clock_analogue_window_g1

0x157a,	// (0x00021660) popup_clock_analogue_window_g2

0xd7e0,	// (0x0002d8c6) popup_clock_analogue_window_g3

0xd7e9,	// (0x0002d8cf) popup_clock_analogue_window_g4

0x0817,	// (0x000208fd) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0002f7ff) popup_clock_analogue_window_g

0xd7f1,	// (0x0002d8d7) popup_clock_analogue_window_t1

0xd7ff,	// (0x0002d8e5) clock_digital_number_pane_ParamLimits

0xd7ff,	// (0x0002d8e5) clock_digital_number_pane

0xd80b,	// (0x0002d8f1) clock_digital_number_pane_cp02_ParamLimits

0xd80b,	// (0x0002d8f1) clock_digital_number_pane_cp02

0xd817,	// (0x0002d8fd) clock_digital_number_pane_cp03_ParamLimits

0xd817,	// (0x0002d8fd) clock_digital_number_pane_cp03

0xd823,	// (0x0002d909) clock_digital_number_pane_cp04_ParamLimits

0xd823,	// (0x0002d909) clock_digital_number_pane_cp04

0xd82f,	// (0x0002d915) clock_digital_separator_pane_ParamLimits

0xd82f,	// (0x0002d915) clock_digital_separator_pane

0xd83b,	// (0x0002d921) popup_clock_digital_window_t1_ParamLimits

0xd83b,	// (0x0002d921) popup_clock_digital_window_t1

0x0817,	// (0x000208fd) clock_digital_number_pane_g1

0x0817,	// (0x000208fd) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0002f80a) clock_digital_number_pane_g

0x0817,	// (0x000208fd) clock_digital_separator_pane_g1

0x0817,	// (0x000208fd) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0002f80a) clock_digital_separator_pane_g

0x467e,	// (0x00024764) aid_fill_nsta_ParamLimits

0x4737,	// (0x0002481d) indicator_nsta_pane_ParamLimits

0x1e1c,	// (0x00021f02) popup_clock_analogue_window

0x1e1c,	// (0x00021f02) popup_clock_digital_window

0x08fd,	// (0x000209e3) grid_indicator_nsta_pane_ParamLimits

0x6922,	// (0x00026a08) clock_nsta_pane_t2

0x0001,

0xfaa6,	// (0x0002fb8c) clock_nsta_pane_t

0xd7a4,	// (0x0002d88a) aid_size_max_handle

0xd7ae,	// (0x0002d894) aid_size_min_handle

0x1a07,	// (0x00021aed) editor_scroll_pane

0x7324,	// (0x0002740a) ex_editor_pane

0x1000,	// (0x000210e6) scroll_pane_cp13

0x0e4d,	// (0x00020f33) scroll_pane_cp14

0x15a4,	// (0x0002168a) scroll_pane_cp36

0x3d6c,	// (0x00023e52) list_single_graphic_hl_pane_cp2_ParamLimits

0x3d6c,	// (0x00023e52) list_single_graphic_hl_pane_cp2

0xce5c,	// (0x0002cf42) list_single_graphic_hl_pane_ParamLimits

0xce5c,	// (0x0002cf42) list_single_graphic_hl_pane

0xd157,	// (0x0002d23d) aid_size_min_hl_cp1

0x732c,	// (0x00027412) list_highlight_pane_cp34_ParamLimits

0x732c,	// (0x00027412) list_highlight_pane_cp34

0x733d,	// (0x00027423) list_single_graphic_hl_pane_g1_ParamLimits

0x733d,	// (0x00027423) list_single_graphic_hl_pane_g1

0xd160,	// (0x0002d246) list_single_graphic_hl_pane_g2_ParamLimits

0xd160,	// (0x0002d246) list_single_graphic_hl_pane_g2

0xd160,	// (0x0002d246) list_single_graphic_hl_pane_g3_ParamLimits

0xd160,	// (0x0002d246) list_single_graphic_hl_pane_g3

0xd5ff,	// (0x0002d6e5) list_single_graphic_hl_pane_g4_ParamLimits

0xd5ff,	// (0x0002d6e5) list_single_graphic_hl_pane_g4

0xe2b9,	// (0x0002e39f) list_single_graphic_hl_pane_g5_ParamLimits

0xe2b9,	// (0x0002e39f) list_single_graphic_hl_pane_g5

0x0004,

0xfbe5,	// (0x0002fccb) list_single_graphic_hl_pane_g_ParamLimits

0xfbe5,	// (0x0002fccb) list_single_graphic_hl_pane_g

0xc783,	// (0x0002c869) list_single_graphic_hl_pane_t1_ParamLimits

0xc783,	// (0x0002c869) list_single_graphic_hl_pane_t1

0x734a,	// (0x00027430) aid_size_min_hl_cp2

0x7353,	// (0x00027439) list_highlight_pane_cp34_cp2_ParamLimits

0x7353,	// (0x00027439) list_highlight_pane_cp34_cp2

0x733d,	// (0x00027423) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x733d,	// (0x00027423) list_single_graphic_hl_pane_g1_cp2

0x7360,	// (0x00027446) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7360,	// (0x00027446) list_single_graphic_hl_pane_g2_cp2

0x736c,	// (0x00027452) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x736c,	// (0x00027452) list_single_graphic_hl_pane_g3_cp2

0x187c,	// (0x00021962) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x187c,	// (0x00021962) list_single_graphic_hl_pane_g4_cp2

0x7143,	// (0x00027229) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7143,	// (0x00027229) list_single_graphic_hl_pane_g5_cp2

0xdad6,	// (0x0002dbbc) control_pane_g4_ParamLimits

0xdad6,	// (0x0002dbbc) control_pane_g4

0x13af,	// (0x00021495) bg_popup_sub_pane_cp10_ParamLimits

0x6cac,	// (0x00026d92) list_choice_list_pane_ParamLimits

0x6cbb,	// (0x00026da1) scroll_pane_cp23

0x0a5c,	// (0x00020b42) bg_popup_preview_window_pane_cp02_ParamLimits

0x717f,	// (0x00027265) list_preview_fixed_pane_ParamLimits

0x7195,	// (0x0002727b) list_preview_fixed_pane_cp_ParamLimits

0x7195,	// (0x0002727b) list_preview_fixed_pane_cp

0x71a1,	// (0x00027287) popup_preview_fixed_window_g1_ParamLimits

0x71a1,	// (0x00027287) popup_preview_fixed_window_g1

0x71ad,	// (0x00027293) popup_preview_fixed_window_g2_ParamLimits

0x71ad,	// (0x00027293) popup_preview_fixed_window_g2

0x0002,

0xfb74,	// (0x0002fc5a) popup_preview_fixed_window_g_ParamLimits

0xfb74,	// (0x0002fc5a) popup_preview_fixed_window_g

0xd734,	// (0x0002d81a) aid_navi_side_left_pane_ParamLimits

0xd744,	// (0x0002d82a) aid_navi_side_right_pane_ParamLimits

0xd753,	// (0x0002d839) navi_icon_pane_stacon_ParamLimits

0xd763,	// (0x0002d849) navi_navi_pane_stacon_ParamLimits

0xd753,	// (0x0002d839) navi_text_pane_stacon_ParamLimits

0x080d,	// (0x000208f3) main_text_info_pane

0x738e,	// (0x00027474) listscroll_text_info_pane

0x7396,	// (0x0002747c) list_text_info_pane_ParamLimits

0x7396,	// (0x0002747c) list_text_info_pane

0x73a5,	// (0x0002748b) scroll_pane_cp24_ParamLimits

0x73a5,	// (0x0002748b) scroll_pane_cp24

0x9154,	// (0x0002923a) list_text_info_pane_t1_ParamLimits

0x9154,	// (0x0002923a) list_text_info_pane_t1

0x42f3,	// (0x000243d9) popup_fast_swap2_window_ParamLimits

0x42f3,	// (0x000243d9) popup_fast_swap2_window

0x73c3,	// (0x000274a9) aid_size_cell_fast2

0x080d,	// (0x000208f3) bg_popup_window_pane_cp17

0x22b6,	// (0x0002239c) heading_pane_cp2

0x0c4c,	// (0x00020d32) listscroll_fast2_pane

0x73cd,	// (0x000274b3) grid_fast2_pane

0x73d5,	// (0x000274bb) listscroll_fast2_pane_g1

0x73dd,	// (0x000274c3) listscroll_fast2_pane_g2

0x0001,

0xfbf0,	// (0x0002fcd6) listscroll_fast2_pane_g

0x1000,	// (0x000210e6) scroll_pane_cp26

0x73e5,	// (0x000274cb) cell_fast2_pane_ParamLimits

0x73e5,	// (0x000274cb) cell_fast2_pane

0x73fb,	// (0x000274e1) cell_fast2_pane_g1

0x7404,	// (0x000274ea) cell_fast2_pane_g2

0x740d,	// (0x000274f3) cell_fast2_pane_g3

0x0002,

0xfbf5,	// (0x0002fcdb) cell_fast2_pane_g

0x0cae,	// (0x00020d94) grid_highlight_pane_cp9

0x0cc3,	// (0x00020da9) main_eswt_pane_ParamLimits

0x0cc3,	// (0x00020da9) main_eswt_pane

0x73ba,	// (0x000274a0) list_single_text_info_pane

0x7415,	// (0x000274fb) eswt_ctrl_button_pane

0x7415,	// (0x000274fb) eswt_ctrl_canvas_pane

0x741d,	// (0x00027503) eswt_ctrl_combo_pane

0x7415,	// (0x000274fb) eswt_ctrl_default_pane

0x7415,	// (0x000274fb) eswt_ctrl_label_pane

0x7425,	// (0x0002750b) eswt_ctrl_wait_pane

0x742d,	// (0x00027513) eswt_shell_pane

0x080d,	// (0x000208f3) listscroll_eswt_app_pane

0x7449,	// (0x0002752f) popup_eswt_tasktip_window_ParamLimits

0x7449,	// (0x0002752f) popup_eswt_tasktip_window

0x2017,	// (0x000220fd) bg_popup_window_pane_cp18

0x745a,	// (0x00027540) eswt_control_pane_g1_ParamLimits

0x745a,	// (0x00027540) eswt_control_pane_g1

0x7467,	// (0x0002754d) eswt_control_pane_g2_ParamLimits

0x7467,	// (0x0002754d) eswt_control_pane_g2

0x7474,	// (0x0002755a) eswt_control_pane_g3_ParamLimits

0x7474,	// (0x0002755a) eswt_control_pane_g3

0x7481,	// (0x00027567) eswt_control_pane_g4_ParamLimits

0x7481,	// (0x00027567) eswt_control_pane_g4

0x0003,

0xfbfc,	// (0x0002fce2) eswt_control_pane_g_ParamLimits

0xfbfc,	// (0x0002fce2) eswt_control_pane_g

0x0e9d,	// (0x00020f83) bg_button_pane_ParamLimits

0x0e9d,	// (0x00020f83) bg_button_pane

0x0cc3,	// (0x00020da9) common_borders_pane_copy2_ParamLimits

0x0cc3,	// (0x00020da9) common_borders_pane_copy2

0x748e,	// (0x00027574) control_button_pane_g1_ParamLimits

0x748e,	// (0x00027574) control_button_pane_g1

0x749a,	// (0x00027580) control_button_pane_g2_ParamLimits

0x749a,	// (0x00027580) control_button_pane_g2

0x74a6,	// (0x0002758c) control_button_pane_g3_ParamLimits

0x74a6,	// (0x0002758c) control_button_pane_g3

0x0002,

0xfc05,	// (0x0002fceb) control_button_pane_g_ParamLimits

0xfc05,	// (0x0002fceb) control_button_pane_g

0x74ba,	// (0x000275a0) control_button_pane_t1

0x74c8,	// (0x000275ae) control_button_pane_t2

0x0001,

0xfc0c,	// (0x0002fcf2) control_button_pane_t

0x1f1d,	// (0x00022003) bg_button_pane_g1

0x1f25,	// (0x0002200b) bg_button_pane_g2

0x1f2d,	// (0x00022013) bg_button_pane_g3

0x1f35,	// (0x0002201b) bg_button_pane_g4

0x1f3d,	// (0x00022023) bg_button_pane_g5

0x1f45,	// (0x0002202b) bg_button_pane_g6

0x1f4d,	// (0x00022033) bg_button_pane_g7

0x1f55,	// (0x0002203b) bg_button_pane_g8

0x1f5d,	// (0x00022043) bg_button_pane_g9

0x0008,

0xf877,	// (0x0002f95d) bg_button_pane_g

0x6c67,	// (0x00026d4d) common_borders_pane_ParamLimits

0x6c67,	// (0x00026d4d) common_borders_pane

0x745a,	// (0x00027540) eswt_control_pane_g1_copy1_ParamLimits

0x745a,	// (0x00027540) eswt_control_pane_g1_copy1

0x7467,	// (0x0002754d) eswt_control_pane_g2_copy1_ParamLimits

0x7467,	// (0x0002754d) eswt_control_pane_g2_copy1

0x7474,	// (0x0002755a) eswt_control_pane_g3_copy1_ParamLimits

0x7474,	// (0x0002755a) eswt_control_pane_g3_copy1

0x7481,	// (0x00027567) eswt_control_pane_g4_copy1_ParamLimits

0x7481,	// (0x00027567) eswt_control_pane_g4_copy1

0x6ca2,	// (0x00026d88) bg_eswt_ctrl_canvas_pane_g1

0x6c67,	// (0x00026d4d) common_borders_pane_cp2_ParamLimits

0x6c67,	// (0x00026d4d) common_borders_pane_cp2

0x6c67,	// (0x00026d4d) common_borders_pane_cp3_ParamLimits

0x6c67,	// (0x00026d4d) common_borders_pane_cp3

0x74d6,	// (0x000275bc) separator_horizontal_pane

0x1409,	// (0x000214ef) separator_vertical_pane

0x745a,	// (0x00027540) eswt_control_pane_g1_copy2_ParamLimits

0x745a,	// (0x00027540) eswt_control_pane_g1_copy2

0x7467,	// (0x0002754d) eswt_control_pane_g2_copy2_ParamLimits

0x7467,	// (0x0002754d) eswt_control_pane_g2_copy2

0x7474,	// (0x0002755a) eswt_control_pane_g3_copy2_ParamLimits

0x7474,	// (0x0002755a) eswt_control_pane_g3_copy2

0x7481,	// (0x00027567) eswt_control_pane_g4_copy2_ParamLimits

0x7481,	// (0x00027567) eswt_control_pane_g4_copy2

0x080d,	// (0x000208f3) common_borders_pane_cp4

0x74de,	// (0x000275c4) separator_horizontal_pane_g1

0x74e7,	// (0x000275cd) separator_horizontal_pane_g2

0x74f0,	// (0x000275d6) separator_horizontal_pane_g3

0x0002,

0xfc11,	// (0x0002fcf7) separator_horizontal_pane_g

0x745a,	// (0x00027540) eswt_control_pane_g1_copy3_ParamLimits

0x745a,	// (0x00027540) eswt_control_pane_g1_copy3

0x7467,	// (0x0002754d) eswt_control_pane_g2_copy3_ParamLimits

0x7467,	// (0x0002754d) eswt_control_pane_g2_copy3

0x7474,	// (0x0002755a) eswt_control_pane_g3_copy3_ParamLimits

0x7474,	// (0x0002755a) eswt_control_pane_g3_copy3

0x7481,	// (0x00027567) eswt_control_pane_g4_copy3_ParamLimits

0x7481,	// (0x00027567) eswt_control_pane_g4_copy3

0x080d,	// (0x000208f3) common_borders_pane_cp5

0x74f9,	// (0x000275df) separator_vertical_pane_g1

0x7502,	// (0x000275e8) separator_vertical_pane_g2

0x750b,	// (0x000275f1) separator_vertical_pane_g3

0x0002,

0xfc18,	// (0x0002fcfe) separator_vertical_pane_g

0x745a,	// (0x00027540) eswt_control_pane_g1_copy4_ParamLimits

0x745a,	// (0x00027540) eswt_control_pane_g1_copy4

0x7467,	// (0x0002754d) eswt_control_pane_g2_copy4_ParamLimits

0x7467,	// (0x0002754d) eswt_control_pane_g2_copy4

0x7474,	// (0x0002755a) eswt_control_pane_g3_copy4_ParamLimits

0x7474,	// (0x0002755a) eswt_control_pane_g3_copy4

0x7481,	// (0x00027567) eswt_control_pane_g4_copy4_ParamLimits

0x7481,	// (0x00027567) eswt_control_pane_g4_copy4

0x9171,	// (0x00029257) eswt_ctrl_combo_button_pane

0x9179,	// (0x0002925f) eswt_ctrl_input_pane

0x9181,	// (0x00029267) popup_choice_list_window_cp70

0x9189,	// (0x0002926f) eswt_ctrl_input_pane_t1

0x080d,	// (0x000208f3) input_focus_pane_cp70

0x6c67,	// (0x00026d4d) bg_button_pane_cp70_ParamLimits

0x6c67,	// (0x00026d4d) bg_button_pane_cp70

0x9197,	// (0x0002927d) eswt_ctrl_combo_button_pane_g1

0x7514,	// (0x000275fa) wait_bar_pane_cp70

0x2017,	// (0x000220fd) bg_popup_window_pane_cp70_ParamLimits

0x2017,	// (0x000220fd) bg_popup_window_pane_cp70

0x751c,	// (0x00027602) popup_eswt_tasktip_window_t1

0x7532,	// (0x00027618) wait_bar_pane_cp71_ParamLimits

0x7532,	// (0x00027618) wait_bar_pane_cp71

0x753e,	// (0x00027624) grid_eswt_app_pane

0x1412,	// (0x000214f8) scroll_pane_cp70

0x919f,	// (0x00029285) cell_eswt_app_pane_ParamLimits

0x919f,	// (0x00029285) cell_eswt_app_pane

0x91c7,	// (0x000292ad) cell_eswt_app_pane_g1_ParamLimits

0x91c7,	// (0x000292ad) cell_eswt_app_pane_g1

0x91f6,	// (0x000292dc) cell_eswt_app_pane_g2_ParamLimits

0x91f6,	// (0x000292dc) cell_eswt_app_pane_g2

0x0001,

0xfc1f,	// (0x0002fd05) cell_eswt_app_pane_g_ParamLimits

0xfc1f,	// (0x0002fd05) cell_eswt_app_pane_g

0x921f,	// (0x00029305) cell_eswt_app_pane_t1_ParamLimits

0x921f,	// (0x00029305) cell_eswt_app_pane_t1

0x7547,	// (0x0002762d) grid_highlight_pane_cp70_ParamLimits

0x7547,	// (0x0002762d) grid_highlight_pane_cp70

0x0eb7,	// (0x00020f9d) set_content_pane_g1

0x1bf6,	// (0x00021cdc) status_small_volume_pane

0xe3dc,	// (0x0002e4c2) status_small_volume_pane_g1

0xe3e4,	// (0x0002e4ca) volume_small2_pane

0xe3ed,	// (0x0002e4d3) volume_small2_pane_g1

0xe3f6,	// (0x0002e4dc) volume_small2_pane_g2

0xe3ff,	// (0x0002e4e5) volume_small2_pane_g3

0xe408,	// (0x0002e4ee) volume_small2_pane_g4

0xe411,	// (0x0002e4f7) volume_small2_pane_g5

0xe41a,	// (0x0002e500) volume_small2_pane_g6

0xe423,	// (0x0002e509) volume_small2_pane_g7

0xe42c,	// (0x0002e512) volume_small2_pane_g8

0xe435,	// (0x0002e51b) volume_small2_pane_g9

0xe43e,	// (0x0002e524) volume_small2_pane_g10

0x0009,

0xfc24,	// (0x0002fd0a) volume_small2_pane_g

0x6fd7,	// (0x000270bd) fep_vkb_top_text_pane_g1_ParamLimits

0x90a3,	// (0x00029189) fep_vkb_top_text_pane_t1_ParamLimits

0x71b9,	// (0x0002729f) popup_preview_fixed_window_g3_ParamLimits

0x71b9,	// (0x0002729f) popup_preview_fixed_window_g3

0x4627,	// (0x0002470d) popup_toolbar_trans_pane

0x898e,	// (0x00028a74) aid_height_set_list_ParamLimits

0x60fd,	// (0x000261e3) aid_size_parent_ParamLimits

0x13af,	// (0x00021495) list_highlight_pane_cp2_ParamLimits

0x0eb7,	// (0x00020f9d) set_content_pane_g1_ParamLimits

0x8b05,	// (0x00028beb) list_single_image_pane_ParamLimits

0x8b05,	// (0x00028beb) list_single_image_pane

0x9251,	// (0x00029337) aid_size_cell_image_ParamLimits

0x9251,	// (0x00029337) aid_size_cell_image

0x925e,	// (0x00029344) grid_single_image_pane_ParamLimits

0x925e,	// (0x00029344) grid_single_image_pane

0x0eb7,	// (0x00020f9d) list_single_image_pane_g1_ParamLimits

0x0eb7,	// (0x00020f9d) list_single_image_pane_g1

0x0ec3,	// (0x00020fa9) list_single_image_pane_g2_ParamLimits

0x0ec3,	// (0x00020fa9) list_single_image_pane_g2

0x0001,

0xfc39,	// (0x0002fd1f) list_single_image_pane_g_ParamLimits

0xfc39,	// (0x0002fd1f) list_single_image_pane_g

0x7553,	// (0x00027639) list_single_image_pane_t1_ParamLimits

0x7553,	// (0x00027639) list_single_image_pane_t1

0x926a,	// (0x00029350) cell_image_list_pane_ParamLimits

0x926a,	// (0x00029350) cell_image_list_pane

0x927d,	// (0x00029363) cell_image_list_pane_g1

0x9286,	// (0x0002936c) cell_image_list_pane_g2

0x0001,

0xfc3e,	// (0x0002fd24) cell_image_list_pane_g

0x7569,	// (0x0002764f) aid_size_cell_tb_trans_pane

0x0e9d,	// (0x00020f83) bg_tb_trans_pane

0x757b,	// (0x00027661) grid_tb_trans_pane

0x1f1d,	// (0x00022003) bg_tb_trans_pane_g1

0x1f25,	// (0x0002200b) bg_tb_trans_pane_g2

0x1f2d,	// (0x00022013) bg_tb_trans_pane_g3

0x1f35,	// (0x0002201b) bg_tb_trans_pane_g4

0x1f3d,	// (0x00022023) bg_tb_trans_pane_g5

0x1f55,	// (0x0002203b) bg_tb_trans_pane_g6

0x1f5d,	// (0x00022043) bg_tb_trans_pane_g7

0x1f45,	// (0x0002202b) bg_tb_trans_pane_g8

0x1f4d,	// (0x00022033) bg_tb_trans_pane_g9

0x0008,

0xfc43,	// (0x0002fd29) bg_tb_trans_pane_g

0x758f,	// (0x00027675) cell_toolbar_trans_pane_ParamLimits

0x758f,	// (0x00027675) cell_toolbar_trans_pane

0x6ca2,	// (0x00026d88) cell_toolbar_trans_pane_g1

0x8f76,	// (0x0002905c) list_form2_midp_pane_t1

0x8f84,	// (0x0002906a) list_form2_midp_pane_t2

0x0001,

0xfaec,	// (0x0002fbd2) list_form2_midp_pane_t

0x69fe,	// (0x00026ae4) scroll_pane_cp51_ParamLimits

0x6b74,	// (0x00026c5a) form2_midp_wait_pane_g1

0x6b7d,	// (0x00026c63) form2_midp_wait_pane_g2

0x6b86,	// (0x00026c6c) form2_midp_wait_pane_g3

0x0002,

0xfb01,	// (0x0002fbe7) form2_midp_wait_pane_g

0x08fd,	// (0x000209e3) list_highlight_pane_cp21_ParamLimits

0x6ba6,	// (0x00026c8c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6bb5,	// (0x00026c9b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xce1d,	// (0x0002cf03) list_single_2graphic_im_pane_ParamLimits

0xce1d,	// (0x0002cf03) list_single_2graphic_im_pane

0x928f,	// (0x00029375) list_single_2graphic_im_pane_g1_ParamLimits

0x928f,	// (0x00029375) list_single_2graphic_im_pane_g1

0x92a0,	// (0x00029386) list_single_2graphic_im_pane_g2_ParamLimits

0x92a0,	// (0x00029386) list_single_2graphic_im_pane_g2

0x92ac,	// (0x00029392) list_single_2graphic_im_pane_g3_ParamLimits

0x92ac,	// (0x00029392) list_single_2graphic_im_pane_g3

0x0003,

0xfc56,	// (0x0002fd3c) list_single_2graphic_im_pane_g_ParamLimits

0xfc56,	// (0x0002fd3c) list_single_2graphic_im_pane_g

0x92c0,	// (0x000293a6) list_single_2graphic_im_pane_t1_ParamLimits

0x92c0,	// (0x000293a6) list_single_2graphic_im_pane_t1

0x71c5,	// (0x000272ab) list_single_graphic_2heading_pane_fp_ParamLimits

0x71c5,	// (0x000272ab) list_single_graphic_2heading_pane_fp

0xd039,	// (0x0002d11f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd039,	// (0x0002d11f) list_single_graphic_2heading_pane_fp_g1

0x71d9,	// (0x000272bf) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x71d9,	// (0x000272bf) list_single_graphic_2heading_pane_fp_g2

0xd5ff,	// (0x0002d6e5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd5ff,	// (0x0002d6e5) list_single_graphic_2heading_pane_fp_g3

0xe2b9,	// (0x0002e39f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe2b9,	// (0x0002e39f) list_single_graphic_2heading_pane_fp_g4

0x71e5,	// (0x000272cb) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x71e5,	// (0x000272cb) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0002fc6a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0002fc6a) list_single_graphic_2heading_pane_fp_g

0xd16c,	// (0x0002d252) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd16c,	// (0x0002d252) list_single_graphic_2heading_pane_fp_t1

0xd071,	// (0x0002d157) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd071,	// (0x0002d157) list_single_graphic_2heading_pane_fp_t2

0xd182,	// (0x0002d268) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd182,	// (0x0002d268) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5f,	// (0x0002fd45) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5f,	// (0x0002fd45) list_single_graphic_2heading_pane_fp_t

0x6d2d,	// (0x00026e13) fep_hwr_write_pane_g5_ParamLimits

0x6d2d,	// (0x00026e13) fep_hwr_write_pane_g5

0x6d39,	// (0x00026e1f) fep_hwr_write_pane_g6_ParamLimits

0x6d39,	// (0x00026e1f) fep_hwr_write_pane_g6

0x742d,	// (0x00027513) eswt_shell_pane_ParamLimits

0x2017,	// (0x000220fd) bg_popup_window_pane_cp18_ParamLimits

0x60a1,	// (0x00026187) heading_pane_cp70

0x751c,	// (0x00027602) popup_eswt_tasktip_window_t1_ParamLimits

0x46b4,	// (0x0002479a) aid_touch_tab_arrow_left

0x46c0,	// (0x000247a6) aid_touch_tab_arrow_right

0x3782,	// (0x00023868) title_pane_g3_ParamLimits

0x3782,	// (0x00023868) title_pane_g3

0x0e6d,	// (0x00020f53) set_value_pane_g1

0x4627,	// (0x0002470d) popup_toolbar_trans_pane_ParamLimits

0x7569,	// (0x0002764f) aid_size_cell_tb_trans_pane_ParamLimits

0x0e9d,	// (0x00020f83) bg_tb_trans_pane_ParamLimits

0x757b,	// (0x00027661) grid_tb_trans_pane_ParamLimits

0x0a5c,	// (0x00020b42) cont_note_pane_ParamLimits

0x0a5c,	// (0x00020b42) cont_note_pane

0x0cc3,	// (0x00020da9) cont_snote2_single_text_pane_ParamLimits

0x0cc3,	// (0x00020da9) cont_snote2_single_text_pane

0x0cc3,	// (0x00020da9) cont_snote2_single_graphic_pane_ParamLimits

0x0cc3,	// (0x00020da9) cont_snote2_single_graphic_pane

0x24c0,	// (0x000225a6) cont_note_wait_pane_ParamLimits

0x24c0,	// (0x000225a6) cont_note_wait_pane

0x24c0,	// (0x000225a6) cont_note_image_pane_ParamLimits

0x24c0,	// (0x000225a6) cont_note_image_pane

0x75c1,	// (0x000276a7) popup_note2_window_g1_ParamLimits

0x75c1,	// (0x000276a7) popup_note2_window_g1

0x75f2,	// (0x000276d8) popup_note2_window_t1_ParamLimits

0x75f2,	// (0x000276d8) popup_note2_window_t1

0x7637,	// (0x0002771d) popup_note2_window_t2_ParamLimits

0x7637,	// (0x0002771d) popup_note2_window_t2

0x8335,	// (0x0002841b) popup_note2_window_t3_ParamLimits

0x8335,	// (0x0002841b) popup_note2_window_t3

0x837a,	// (0x00028460) popup_note2_window_t4_ParamLimits

0x837a,	// (0x00028460) popup_note2_window_t4

0x0ae0,	// (0x00020bc6) popup_note2_window_t5_ParamLimits

0x0ae0,	// (0x00020bc6) popup_note2_window_t5

0x0004,

0xfc6b,	// (0x0002fd51) popup_note2_window_t_ParamLimits

0xfc6b,	// (0x0002fd51) popup_note2_window_t

0x83a9,	// (0x0002848f) popup_note2_image_window_g1_ParamLimits

0x83a9,	// (0x0002848f) popup_note2_image_window_g1

0x83b5,	// (0x0002849b) popup_note2_image_window_g2_ParamLimits

0x83b5,	// (0x0002849b) popup_note2_image_window_g2

0x0001,

0xfc76,	// (0x0002fd5c) popup_note2_image_window_g_ParamLimits

0xfc76,	// (0x0002fd5c) popup_note2_image_window_g

0x83c7,	// (0x000284ad) popup_note2_image_window_t1_ParamLimits

0x83c7,	// (0x000284ad) popup_note2_image_window_t1

0x83df,	// (0x000284c5) popup_note2_image_window_t2_ParamLimits

0x83df,	// (0x000284c5) popup_note2_image_window_t2

0x83f7,	// (0x000284dd) popup_note2_image_window_t3_ParamLimits

0x83f7,	// (0x000284dd) popup_note2_image_window_t3

0x0002,

0xfc7b,	// (0x0002fd61) popup_note2_image_window_t_ParamLimits

0xfc7b,	// (0x0002fd61) popup_note2_image_window_t

0x24ce,	// (0x000225b4) popup_note2_wait_window_g1_ParamLimits

0x24ce,	// (0x000225b4) popup_note2_wait_window_g1

0x24da,	// (0x000225c0) popup_note2_wait_window_g2_ParamLimits

0x24da,	// (0x000225c0) popup_note2_wait_window_g2

0x24e6,	// (0x000225cc) popup_note2_wait_window_g3_ParamLimits

0x24e6,	// (0x000225cc) popup_note2_wait_window_g3

0x0002,

0xf859,	// (0x0002f93f) popup_note2_wait_window_g_ParamLimits

0xf859,	// (0x0002f93f) popup_note2_wait_window_g

0x8413,	// (0x000284f9) popup_note2_wait_window_t1_ParamLimits

0x8413,	// (0x000284f9) popup_note2_wait_window_t1

0x8431,	// (0x00028517) popup_note2_wait_window_t2_ParamLimits

0x8431,	// (0x00028517) popup_note2_wait_window_t2

0x844f,	// (0x00028535) popup_note2_wait_window_t3_ParamLimits

0x844f,	// (0x00028535) popup_note2_wait_window_t3

0x8461,	// (0x00028547) popup_note2_wait_window_t4_ParamLimits

0x8461,	// (0x00028547) popup_note2_wait_window_t4

0x0003,

0xfc82,	// (0x0002fd68) popup_note2_wait_window_t_ParamLimits

0xfc82,	// (0x0002fd68) popup_note2_wait_window_t

0x8473,	// (0x00028559) wait_bar2_pane_ParamLimits

0x8473,	// (0x00028559) wait_bar2_pane

0x848b,	// (0x00028571) popup_snote2_single_text_window_g1_ParamLimits

0x848b,	// (0x00028571) popup_snote2_single_text_window_g1

0x84b3,	// (0x00028599) popup_snote2_single_text_window_t1_ParamLimits

0x84b3,	// (0x00028599) popup_snote2_single_text_window_t1

0x84ff,	// (0x000285e5) popup_snote2_single_text_window_t2_ParamLimits

0x84ff,	// (0x000285e5) popup_snote2_single_text_window_t2

0x854b,	// (0x00028631) popup_snote2_single_text_window_t3_ParamLimits

0x854b,	// (0x00028631) popup_snote2_single_text_window_t3

0x858c,	// (0x00028672) popup_snote2_single_text_window_t4_ParamLimits

0x858c,	// (0x00028672) popup_snote2_single_text_window_t4

0x85c2,	// (0x000286a8) popup_snote2_single_text_window_t5_ParamLimits

0x85c2,	// (0x000286a8) popup_snote2_single_text_window_t5

0x0004,

0xfc8b,	// (0x0002fd71) popup_snote2_single_text_window_t_ParamLimits

0xfc8b,	// (0x0002fd71) popup_snote2_single_text_window_t

0x85ed,	// (0x000286d3) popup_snote2_single_graphic_window_g1_ParamLimits

0x85ed,	// (0x000286d3) popup_snote2_single_graphic_window_g1

0x8615,	// (0x000286fb) popup_snote2_single_graphic_window_g2_ParamLimits

0x8615,	// (0x000286fb) popup_snote2_single_graphic_window_g2

0x0001,

0xfc96,	// (0x0002fd7c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc96,	// (0x0002fd7c) popup_snote2_single_graphic_window_g

0x863d,	// (0x00028723) popup_snote2_single_graphic_window_t1_ParamLimits

0x863d,	// (0x00028723) popup_snote2_single_graphic_window_t1

0x8689,	// (0x0002876f) popup_snote2_single_graphic_window_t2_ParamLimits

0x8689,	// (0x0002876f) popup_snote2_single_graphic_window_t2

0x854b,	// (0x00028631) popup_snote2_single_graphic_window_t3_ParamLimits

0x854b,	// (0x00028631) popup_snote2_single_graphic_window_t3

0x858c,	// (0x00028672) popup_snote2_single_graphic_window_t4_ParamLimits

0x858c,	// (0x00028672) popup_snote2_single_graphic_window_t4

0x85c2,	// (0x000286a8) popup_snote2_single_graphic_window_t5_ParamLimits

0x85c2,	// (0x000286a8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9b,	// (0x0002fd81) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9b,	// (0x0002fd81) popup_snote2_single_graphic_window_t

0x6997,	// (0x00026a7d) clock_nsta_pane_cp2_t1

0x6997,	// (0x00026a7d) clock_nsta_pane_cp2_t2

0x0001,

0xfac2,	// (0x0002fba8) clock_nsta_pane_cp2_t

0xcaf9,	// (0x0002cbdf) form_field_data_wide_pane_g1_ParamLimits

0x0eb7,	// (0x00020f9d) form_field_data_wide_pane_g2_ParamLimits

0x0eb7,	// (0x00020f9d) form_field_data_wide_pane_g2

0x0ec3,	// (0x00020fa9) form_field_data_wide_pane_g3_ParamLimits

0x0ec3,	// (0x00020fa9) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0002f782) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0002f782) form_field_data_wide_pane_g

0x8e76,	// (0x00028f5c) grid_touch_3_pane_ParamLimits

0x8e76,	// (0x00028f5c) grid_touch_3_pane

0x92f1,	// (0x000293d7) cell_touch_3_pane_ParamLimits

0x92f1,	// (0x000293d7) cell_touch_3_pane

0x6ca2,	// (0x00026d88) cell_touch_3_pane_g1

0x6ca2,	// (0x00026d88) cell_touch_3_pane_g2

0x0001,

0xfb47,	// (0x0002fc2d) cell_touch_3_pane_g

0x0b12,	// (0x00020bf8) cont_query_data_pane

0x0b1a,	// (0x00020c00) cont_query_data_pane_cp1

0x86d5,	// (0x000287bb) button_value_adjust_pane_cp7

0x86dd,	// (0x000287c3) query_popup_pane_cp3

0x15b5,	// (0x0002169b) bg_popup_sub_pane_cp22_ParamLimits

0xd85a,	// (0x0002d940) navi_navi_volume_pane_cp2

0xd872,	// (0x0002d958) popup_side_volume_key_window_g2

0xd87e,	// (0x0002d964) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0002f814) popup_side_volume_key_window_g

0xd898,	// (0x0002d97e) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0002f81b) popup_side_volume_key_window_t

0x17ff,	// (0x000218e5) popup_side_volume_key_window_ParamLimits

0xd632,	// (0x0002d718) list_double_graphic_pane_g4_ParamLimits

0xd632,	// (0x0002d718) list_double_graphic_pane_g4

0xce46,	// (0x0002cf2c) list_single_2heading_msg_pane_ParamLimits

0xce46,	// (0x0002cf2c) list_single_2heading_msg_pane

0xd1a0,	// (0x0002d286) list_single_2heading_msg_pane_g1_ParamLimits

0xd1a0,	// (0x0002d286) list_single_2heading_msg_pane_g1

0x187c,	// (0x00021962) list_single_2heading_msg_pane_g2_ParamLimits

0x187c,	// (0x00021962) list_single_2heading_msg_pane_g2

0xd1ac,	// (0x0002d292) list_single_2heading_msg_pane_g3_ParamLimits

0xd1ac,	// (0x0002d292) list_single_2heading_msg_pane_g3

0xd1b8,	// (0x0002d29e) list_single_2heading_msg_pane_g4_ParamLimits

0xd1b8,	// (0x0002d29e) list_single_2heading_msg_pane_g4

0x0003,

0xfca6,	// (0x0002fd8c) list_single_2heading_msg_pane_g_ParamLimits

0xfca6,	// (0x0002fd8c) list_single_2heading_msg_pane_g

0xd1d0,	// (0x0002d2b6) list_single_2heading_msg_pane_t1_ParamLimits

0xd1d0,	// (0x0002d2b6) list_single_2heading_msg_pane_t1

0xd1f8,	// (0x0002d2de) list_single_2heading_msg_pane_t2_ParamLimits

0xd1f8,	// (0x0002d2de) list_single_2heading_msg_pane_t2

0xd227,	// (0x0002d30d) list_single_2heading_msg_pane_t3_ParamLimits

0xd227,	// (0x0002d30d) list_single_2heading_msg_pane_t3

0xd260,	// (0x0002d346) list_single_2heading_msg_pane_t4_ParamLimits

0xd260,	// (0x0002d346) list_single_2heading_msg_pane_t4

0x0003,

0xfcaf,	// (0x0002fd95) list_single_2heading_msg_pane_t_ParamLimits

0xfcaf,	// (0x0002fd95) list_single_2heading_msg_pane_t

0x08a3,	// (0x00020989) title_pane_g4_ParamLimits

0x08a3,	// (0x00020989) title_pane_g4

0xd6aa,	// (0x0002d790) title_pane_stacon_g3_ParamLimits

0xd6aa,	// (0x0002d790) title_pane_stacon_g3

0x75b5,	// (0x0002769b) list_single_2graphic_im_pane_g4_ParamLimits

0x75b5,	// (0x0002769b) list_single_2graphic_im_pane_g4

0x5eb7,	// (0x00025f9d) popup_side_volume_key_window_cp

0x631d,	// (0x00026403) main_idle_act2_pane_t1

0xdc0e,	// (0x0002dcf4) toolbar_button_pane_g10

0x3a90,	// (0x00023b76) popup_toolbar_window_cp1

0x6988,	// (0x00026a6e) clock_nsta_pane_cp_t1

0x6988,	// (0x00026a6e) clock_nsta_pane_cp_t2

0x0001,

0xfabd,	// (0x0002fba3) clock_nsta_pane_cp_t

0xd85a,	// (0x0002d940) navi_navi_volume_pane_cp2_ParamLimits

0xd866,	// (0x0002d94c) popup_side_volume_key_window_g1_ParamLimits

0xd872,	// (0x0002d958) popup_side_volume_key_window_g2_ParamLimits

0xd87e,	// (0x0002d964) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0002f814) popup_side_volume_key_window_g_ParamLimits

0xe07c,	// (0x0002e162) fep_hwr_aid_pane

0xad32,	// (0x0002ae18) bg_fep_hwr_top_pane_g4_ParamLimits

0x6d0f,	// (0x00026df5) fep_hwr_top_pane_g1_ParamLimits

0x6cfd,	// (0x00026de3) fep_hwr_top_pane_g2_ParamLimits

0xe12f,	// (0x0002e215) fep_hwr_top_pane_g3_ParamLimits

0xfb12,	// (0x0002fbf8) fep_hwr_top_pane_g_ParamLimits

0xe144,	// (0x0002e22a) fep_hwr_top_text_pane_ParamLimits

0x5c8b,	// (0x00025d71) aid_touch_tab_arrow_arrow_2

0x5c82,	// (0x00025d68) aid_touch_tab_arrow_left_2

0xe090,	// (0x0002e176) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe0c3,	// (0x0002e1a9) fep_hwr_prediction_pane

0x6e42,	// (0x00026f28) fep_vkb_prediction_pane

0x9080,	// (0x00029166) fep_vkb_side_pane_g3_ParamLimits

0x9080,	// (0x00029166) fep_vkb_side_pane_g3

0x6ed0,	// (0x00026fb6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7239,	// (0x0002731f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7246,	// (0x0002732c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbc,	// (0x0002fca2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x86ee,	// (0x000287d4) fep_hwr_prediction_pane_g1

0xe447,	// (0x0002e52d) fep_hwr_prediction_pane_g2

0xe44f,	// (0x0002e535) fep_hwr_prediction_pane_g3

0xe457,	// (0x0002e53d) fep_hwr_prediction_pane_g4

0x0003,

0xfcb8,	// (0x0002fd9e) fep_hwr_prediction_pane_g

0x86ee,	// (0x000287d4) fep_vkb_prediction_pane_g1

0x86f8,	// (0x000287de) fep_vkb_prediction_pane_g2

0x8700,	// (0x000287e6) fep_vkb_prediction_pane_g3

0x8708,	// (0x000287ee) fep_vkb_prediction_pane_g4

0x0003,

0xfcc1,	// (0x0002fda7) fep_vkb_prediction_pane_g

0x769e,	// (0x00027784) slider_set_pane_g3

0x76b2,	// (0x00027798) slider_set_pane_g4

0x76ca,	// (0x000277b0) slider_set_pane_g5

0x769e,	// (0x00027784) slider_set_pane_g6

0xdea8,	// (0x0002df8e) slider_set_pane_g7

0x6120,	// (0x00026206) slider_form_pane_g3

0x6129,	// (0x0002620f) slider_form_pane_g4

0x6131,	// (0x00026217) slider_form_pane_g5

0x6120,	// (0x00026206) slider_form_pane_g6

0x8abe,	// (0x00028ba4) slider_form_pane_g7

0x6566,	// (0x0002664c) slider_set_pane_vc_g3

0x656f,	// (0x00026655) slider_set_pane_vc_g4

0x6578,	// (0x0002665e) slider_set_pane_vc_g5

0x6566,	// (0x0002664c) slider_set_pane_vc_g6

0x6581,	// (0x00026667) slider_set_pane_vc_g7

0x6566,	// (0x0002664c) slider_form_pane_vc_g1

0x656f,	// (0x00026655) slider_form_pane_vc_g2

0x6578,	// (0x0002665e) slider_form_pane_vc_g3

0x6566,	// (0x0002664c) slider_form_pane_vc_g4

0x6715,	// (0x000267fb) slider_form_pane_vc_g5

0x0004,

0xfa96,	// (0x0002fb7c) slider_form_pane_vc_g

0x080d,	// (0x000208f3) main_idle_act3_pane

0x8710,	// (0x000287f6) ai3_links_pane

0x9332,	// (0x00029418) popup_ai3_data_window_ParamLimits

0x9332,	// (0x00029418) popup_ai3_data_window

0x080d,	// (0x000208f3) grid_ai3_links_pane

0x934a,	// (0x00029430) cell_ai3_links_pane_ParamLimits

0x934a,	// (0x00029430) cell_ai3_links_pane

0x8719,	// (0x000287ff) bg_popup_sub_pane_cp11

0x8726,	// (0x0002880c) cell_ai3_links_pane_g1

0x080d,	// (0x000208f3) bg_popup_sub_pane_cp12

0x874b,	// (0x00028831) heading_ai3_data_pane

0x8753,	// (0x00028839) list_ai3_gene_pane

0x875f,	// (0x00028845) popup_ai3_data_window_g1

0x8767,	// (0x0002884d) heading_ai3_data_pane_g1

0x876f,	// (0x00028855) heading_ai3_data_pane_t1

0x877d,	// (0x00028863) list_double_ai3_gene_pane_ParamLimits

0x877d,	// (0x00028863) list_double_ai3_gene_pane

0x878a,	// (0x00028870) list_single_ai3_gene_pane_ParamLimits

0x878a,	// (0x00028870) list_single_ai3_gene_pane

0x6c67,	// (0x00026d4d) list_highlight_pane_cp7_ParamLimits

0x6c67,	// (0x00026d4d) list_highlight_pane_cp7

0x8797,	// (0x0002887d) list_single_a13_gene_pane_t1_ParamLimits

0x8797,	// (0x0002887d) list_single_a13_gene_pane_t1

0x87ae,	// (0x00028894) list_single_ai3_gene_pane_g1

0x87b7,	// (0x0002889d) list_single_ai3_gene_pane_g2

0x0001,

0xfcca,	// (0x0002fdb0) list_single_ai3_gene_pane_g

0x87bf,	// (0x000288a5) list_double_ai3_gene_pane_g1_ParamLimits

0x87bf,	// (0x000288a5) list_double_ai3_gene_pane_g1

0x87cb,	// (0x000288b1) list_double_ai3_gene_pane_t1_ParamLimits

0x87cb,	// (0x000288b1) list_double_ai3_gene_pane_t1

0x87e7,	// (0x000288cd) list_double_ai3_gene_pane_t2_ParamLimits

0x87e7,	// (0x000288cd) list_double_ai3_gene_pane_t2

0x87fc,	// (0x000288e2) list_double_ai3_gene_pane_t3_ParamLimits

0x87fc,	// (0x000288e2) list_double_ai3_gene_pane_t3

0x0002,

0xfccf,	// (0x0002fdb5) list_double_ai3_gene_pane_t_ParamLimits

0xfccf,	// (0x0002fdb5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd198,	// (0x0002d27e) aid_size_min_col_2

0x931e,	// (0x00029404) aid_size_min_msg_ParamLimits

0x931e,	// (0x00029404) aid_size_min_msg

0x9094,	// (0x0002917a) fep_vkb_top_text_pane_g2_ParamLimits

0x9094,	// (0x0002917a) fep_vkb_top_text_pane_g2

0x0001,

0xfb42,	// (0x0002fc28) fep_vkb_top_text_pane_g_ParamLimits

0xfb42,	// (0x0002fc28) fep_vkb_top_text_pane_g

0x080d,	// (0x000208f3) main_hc_apps_shell_pane

0x8819,	// (0x000288ff) grid_hc_apps_pane_ParamLimits

0x8819,	// (0x000288ff) grid_hc_apps_pane

0x8828,	// (0x0002890e) list_hc_apps_pane

0x8830,	// (0x00028916) scroll_pane_cp37_ParamLimits

0x8830,	// (0x00028916) scroll_pane_cp37

0x935e,	// (0x00029444) cell_hc_apps_pane_ParamLimits

0x935e,	// (0x00029444) cell_hc_apps_pane

0x93ec,	// (0x000294d2) cell_hc_apps_pane_g1_ParamLimits

0x93ec,	// (0x000294d2) cell_hc_apps_pane_g1

0x883c,	// (0x00028922) cell_hc_apps_pane_g2_ParamLimits

0x883c,	// (0x00028922) cell_hc_apps_pane_g2

0x8858,	// (0x0002893e) cell_hc_apps_pane_g3_ParamLimits

0x8858,	// (0x0002893e) cell_hc_apps_pane_g3

0x0002,

0xfcd6,	// (0x0002fdbc) cell_hc_apps_pane_g_ParamLimits

0xfcd6,	// (0x0002fdbc) cell_hc_apps_pane_g

0x9419,	// (0x000294ff) cell_hc_apps_pane_t1_ParamLimits

0x9419,	// (0x000294ff) cell_hc_apps_pane_t1

0x0a5c,	// (0x00020b42) grid_highlight_pane_cp10_ParamLimits

0x0a5c,	// (0x00020b42) grid_highlight_pane_cp10

0x9457,	// (0x0002953d) list_single_hc_apps_pane_ParamLimits

0x9457,	// (0x0002953d) list_single_hc_apps_pane

0x9487,	// (0x0002956d) list_single_hc_apps_pane_g1

0xe45f,	// (0x0002e545) list_single_hc_apps_pane_g2

0x0001,

0xfcdd,	// (0x0002fdc3) list_single_hc_apps_pane_g

0xe478,	// (0x0002e55e) list_single_hc_apps_pane_g2_copy1

0xd285,	// (0x0002d36b) list_single_hc_apps_pane_t1

0x08fd,	// (0x000209e3) bg_set_opt_pane_cp_ParamLimits

0x090b,	// (0x000209f1) setting_slider_pane_t1_ParamLimits

0xd556,	// (0x0002d63c) setting_slider_pane_t2_ParamLimits

0xd56f,	// (0x0002d655) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0002f660) setting_slider_pane_t_ParamLimits

0x0921,	// (0x00020a07) slider_set_pane_ParamLimits

0xdaeb,	// (0x0002dbd1) control_pane_g5_ParamLimits

0xdaeb,	// (0x0002dbd1) control_pane_g5

0x60e8,	// (0x000261ce) slider_set_pane_g1_ParamLimits

0xde9c,	// (0x0002df82) slider_set_pane_g2_ParamLimits

0x769e,	// (0x00027784) slider_set_pane_g3_ParamLimits

0x76b2,	// (0x00027798) slider_set_pane_g4_ParamLimits

0x76ca,	// (0x000277b0) slider_set_pane_g5_ParamLimits

0x769e,	// (0x00027784) slider_set_pane_g6_ParamLimits

0xdea8,	// (0x0002df8e) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0002fa5b) slider_set_pane_g_ParamLimits

0x08fd,	// (0x000209e3) navi_icon_text_pane_ParamLimits

0x468e,	// (0x00024774) aid_fill_nsta_2_ParamLimits

0x46b4,	// (0x0002479a) aid_touch_tab_arrow_left_ParamLimits

0x46c0,	// (0x000247a6) aid_touch_tab_arrow_right_ParamLimits

0x472a,	// (0x00024810) clock_nsta_pane_ParamLimits

0x5c64,	// (0x00025d4a) navi_icon_pane_g1_ParamLimits

0x5c70,	// (0x00025d56) navi_text_pane_t1_ParamLimits

0x69d8,	// (0x00026abe) navi_icon_text_pane_g1_ParamLimits

0x69e4,	// (0x00026aca) navi_icon_text_pane_t1_ParamLimits

0x9487,	// (0x0002956d) list_single_hc_apps_pane_g1_ParamLimits

0xe45f,	// (0x0002e545) list_single_hc_apps_pane_g2_ParamLimits

0xfcdd,	// (0x0002fdc3) list_single_hc_apps_pane_g_ParamLimits

0xe478,	// (0x0002e55e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd285,	// (0x0002d36b) list_single_hc_apps_pane_t1_ParamLimits

0xd488,	// (0x0002d56e) popup_toolbar2_fixed_window_ParamLimits

0xd488,	// (0x0002d56e) popup_toolbar2_fixed_window

0x461f,	// (0x00024705) popup_toolbar2_float_window

0x080d,	// (0x000208f3) bg_popup_sub_pane_cp27

0x94a0,	// (0x00029586) grid_toolbar2_float_pane

0x080d,	// (0x000208f3) bg_popup_sub_pane_cp26

0x94a0,	// (0x00029586) grid_toolbar2_fixed_pane

0x94a8,	// (0x0002958e) cell_toolbar2_fixed_pane_ParamLimits

0x94a8,	// (0x0002958e) cell_toolbar2_fixed_pane

0x94b9,	// (0x0002959f) cell_toolbar2_fixed_pane_g1

0x94c2,	// (0x000295a8) toolbar2_fixed_button_pane

0x1f1d,	// (0x00022003) toolbar2_fixed_button_pane_g1

0x1f25,	// (0x0002200b) toolbar2_fixed_button_pane_g2

0x1f2d,	// (0x00022013) toolbar2_fixed_button_pane_g3

0x1f35,	// (0x0002201b) toolbar2_fixed_button_pane_g4

0x1f3d,	// (0x00022023) toolbar2_fixed_button_pane_g5

0x1f45,	// (0x0002202b) toolbar2_fixed_button_pane_g6

0x1f4d,	// (0x00022033) toolbar2_fixed_button_pane_g7

0x1f55,	// (0x0002203b) toolbar2_fixed_button_pane_g8

0x1f5d,	// (0x00022043) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0002f95d) toolbar2_fixed_button_pane_g

0x94ca,	// (0x000295b0) cell_toolbar2_float_pane_ParamLimits

0x94ca,	// (0x000295b0) cell_toolbar2_float_pane

0x94db,	// (0x000295c1) cell_toolbar2_float_pane_g1

0x94c2,	// (0x000295a8) toolbar2_fixed_button_pane_cp

0x904d,	// (0x00029133) fep_vkb_accented_list_pane_ParamLimits

0x904d,	// (0x00029133) fep_vkb_accented_list_pane

0xe286,	// (0x0002e36c) bg_popup_fep_shadow_pane_g9

0x1a07,	// (0x00021aed) bg_popup_fep_shadow_pane_cp3

0x0fe7,	// (0x000210cd) list_accented_list_pane

0x94e4,	// (0x000295ca) list_single_accented_list_pane_ParamLimits

0x94e4,	// (0x000295ca) list_single_accented_list_pane

0x1a07,	// (0x00021aed) list_highlight_pane_cp10

0x94f5,	// (0x000295db) list_single_accented_list_pane_t1

0x458d,	// (0x00024673) popup_slider_window_ParamLimits

0x458d,	// (0x00024673) popup_slider_window

0x86e5,	// (0x000287cb) aid_indentation_list_msg

0x9595,	// (0x0002967b) bg_popup_window_pane_cp19

0x95f9,	// (0x000296df) popup_slider_window_g1

0x9615,	// (0x000296fb) popup_slider_window_g2

0x9631,	// (0x00029717) popup_slider_window_g3

0x0005,

0xfce2,	// (0x0002fdc8) popup_slider_window_g

0x968d,	// (0x00029773) popup_slider_window_t1

0x96ff,	// (0x000297e5) small_volume_slider_vertical_pane

0x6ca2,	// (0x00026d88) small_volume_slider_vertical_pane_g1

0x6ca2,	// (0x00026d88) small_volume_slider_vertical_pane_g2

0x971b,	// (0x00029801) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf4,	// (0x0002fdda) small_volume_slider_vertical_pane_g

0xd306,	// (0x0002d3ec) area_side_right_pane_ParamLimits

0xd306,	// (0x0002d3ec) area_side_right_pane

0xe494,	// (0x0002e57a) aid_size_side_button_ParamLimits

0xe494,	// (0x0002e57a) aid_size_side_button

0xe4a8,	// (0x0002e58e) grid_sctrl_middle_pane_ParamLimits

0xe4a8,	// (0x0002e58e) grid_sctrl_middle_pane

0xe4c4,	// (0x0002e5aa) sctrl_sk_bottom_pane

0xe4d5,	// (0x0002e5bb) sctrl_sk_top_pane

0xe4e7,	// (0x0002e5cd) aid_touch_sctrl_top

0x0a5c,	// (0x00020b42) bg_sctrl_sk_pane_ParamLimits

0x0a5c,	// (0x00020b42) bg_sctrl_sk_pane

0xe4f4,	// (0x0002e5da) sctrl_sk_top_pane_g1

0xe501,	// (0x0002e5e7) sctrl_sk_top_pane_t1

0xe4e7,	// (0x0002e5cd) aid_touch_sctrl_bottom

0x0a5c,	// (0x00020b42) bg_sctrl_sk_pane_cp_ParamLimits

0x0a5c,	// (0x00020b42) bg_sctrl_sk_pane_cp

0xe51c,	// (0x0002e602) sctrl_sk_bottom_pane_g1

0xe501,	// (0x0002e5e7) sctrl_sk_bottom_pane_t1

0xe525,	// (0x0002e60b) cell_sctrl_middle_pane_ParamLimits

0xe525,	// (0x0002e60b) cell_sctrl_middle_pane

0xe540,	// (0x0002e626) aid_touch_sctrl_middle_ParamLimits

0xe540,	// (0x0002e626) aid_touch_sctrl_middle

0x0e9d,	// (0x00020f83) bg_sctrl_middle_pane_ParamLimits

0x0e9d,	// (0x00020f83) bg_sctrl_middle_pane

0x6ed0,	// (0x00026fb6) cell_sctrl_middle_pane_g1_ParamLimits

0x6ed0,	// (0x00026fb6) cell_sctrl_middle_pane_g1

0xe551,	// (0x0002e637) cell_sctrl_middle_pane_g2_ParamLimits

0xe551,	// (0x0002e637) cell_sctrl_middle_pane_g2

0x0001,

0xfd00,	// (0x0002fde6) cell_sctrl_middle_pane_g_ParamLimits

0xfd00,	// (0x0002fde6) cell_sctrl_middle_pane_g

0x1f1d,	// (0x00022003) bg_sctrl_middle_pane_g1

0x1f25,	// (0x0002200b) bg_sctrl_middle_pane_g2

0x1f2d,	// (0x00022013) bg_sctrl_middle_pane_g3

0x1f35,	// (0x0002201b) bg_sctrl_middle_pane_g4

0x1f3d,	// (0x00022023) bg_sctrl_middle_pane_g5

0x1f45,	// (0x0002202b) bg_sctrl_middle_pane_g6

0x1f4d,	// (0x00022033) bg_sctrl_middle_pane_g7

0x1f55,	// (0x0002203b) bg_sctrl_middle_pane_g8

0x0007,

0xfd05,	// (0x0002fdeb) bg_sctrl_middle_pane_g

0x1f5d,	// (0x00022043) bg_sctrl_middle_pane_g8_copy1

0x1f1d,	// (0x00022003) bg_sctrl_sk_pane_g1

0x1f25,	// (0x0002200b) bg_sctrl_sk_pane_g2

0x1f2d,	// (0x00022013) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0002f95d) bg_sctrl_sk_pane_g

0x0de5,	// (0x00020ecb) aid_size_touch_scroll_bar

0x1f35,	// (0x0002201b) bg_sctrl_sk_pane_g4

0x1f3d,	// (0x00022023) bg_sctrl_sk_pane_g5

0x1f45,	// (0x0002202b) bg_sctrl_sk_pane_g6

0x1f4d,	// (0x00022033) bg_sctrl_sk_pane_g7

0x1f55,	// (0x0002203b) bg_sctrl_sk_pane_g8

0x1f5d,	// (0x00022043) bg_sctrl_sk_pane_g9

0x1c93,	// (0x00021d79) popup_fep_china_hwr2_fs_candidate_window

0x4349,	// (0x0002442f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x4349,	// (0x0002442f) popup_fep_china_hwr2_fs_control_window

0x6ed0,	// (0x00026fb6) sctrl_sk_top_pane_g2

0x0001,

0xfcfb,	// (0x0002fde1) sctrl_sk_top_pane_g

0x9724,	// (0x0002980a) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9724,	// (0x0002980a) aid_fep_china_hwr2_fs_cell

0x9735,	// (0x0002981b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9735,	// (0x0002981b) bg_popup_fep_shadow_pane_cp4

0x974c,	// (0x00029832) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x974c,	// (0x00029832) bg_popup_fep_shadow_pane_cp5

0x975e,	// (0x00029844) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x975e,	// (0x00029844) popup_fep_china_hwr2_fs_control_bar_grid

0x976e,	// (0x00029854) popup_fep_china_hwr2_fs_control_funtion_grid

0x9776,	// (0x0002985c) aid_fep_china_hwr2_fs_candi_cell

0x080d,	// (0x000208f3) bg_popup_fep_shadow_pane_cp6

0x9780,	// (0x00029866) popup_fep_china_hwr2_fs_candidate_grid

0x9788,	// (0x0002986e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x9788,	// (0x0002986e) cell_fep_china_hwr2_fs_funtion_grid

0x6ca2,	// (0x00026d88) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x97a0,	// (0x00029886) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x97a0,	// (0x00029886) cell_fep_china_hwr2_fs_funtion_grid_g1

0x97ae,	// (0x00029894) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x97ae,	// (0x00029894) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd16,	// (0x0002fdfc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd16,	// (0x0002fdfc) cell_fep_china_hwr2_fs_funtion_grid_g

0x97c4,	// (0x000298aa) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x97c4,	// (0x000298aa) cell_fep_china_hwr2_fs_funtion_grid_t1

0x97d9,	// (0x000298bf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x97d9,	// (0x000298bf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1b,	// (0x0002fe01) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1b,	// (0x0002fe01) cell_fep_china_hwr2_fs_funtion_grid_t

0x97f5,	// (0x000298db) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x97fd,	// (0x000298e3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9805,	// (0x000298eb) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd20,	// (0x0002fe06) popup_fep_china_hwr2_fs_control_bar_grid_g

0x980d,	// (0x000298f3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x980d,	// (0x000298f3) cell_fep_china_hwr2_fs_candidate_grid

0x9826,	// (0x0002990c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x982e,	// (0x00029914) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6ca2,	// (0x00026d88) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6ca2,	// (0x00026d88) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb47,	// (0x0002fc2d) cell_fep_china_hwr2_fs_candidate_grid_g

0x9836,	// (0x0002991c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1d82,	// (0x00021e68) clock_nsta_pane_cp_24_ParamLimits

0x1d82,	// (0x00021e68) clock_nsta_pane_cp_24

0x1ddf,	// (0x00021ec5) indicator_nsta_pane_cp_24_ParamLimits

0x1ddf,	// (0x00021ec5) indicator_nsta_pane_cp_24

0x5b6f,	// (0x00025c55) heading_pane_g1

0x0001,

0xf8dc,	// (0x0002f9c2) heading_pane_g

0x8ba8,	// (0x00028c8e) grid_sct_catagory_button_pane

0x61ef,	// (0x000262d5) scroll_pane_cp5_ParamLimits

0x6a0a,	// (0x00026af0) button_value_adjust_pane_cp5_ParamLimits

0x6a0a,	// (0x00026af0) button_value_adjust_pane_cp5

0x6ac8,	// (0x00026bae) form2_midp_time_pane_ParamLimits

0x9844,	// (0x0002992a) cell_sct_catagory_button_pane_ParamLimits

0x9844,	// (0x0002992a) cell_sct_catagory_button_pane

0x6c67,	// (0x00026d4d) bg_button_pane_cp01_ParamLimits

0x6c67,	// (0x00026d4d) bg_button_pane_cp01

0x6ca2,	// (0x00026d88) cell_sct_catagory_button_pane_g1

0x45bc,	// (0x000246a2) popup_tb_extension_window

0x9856,	// (0x0002993c) aid_size_cell_ext_ParamLimits

0x9856,	// (0x0002993c) aid_size_cell_ext

0x0a5c,	// (0x00020b42) bg_tb_trans_pane_cp1_ParamLimits

0x0a5c,	// (0x00020b42) bg_tb_trans_pane_cp1

0x9876,	// (0x0002995c) grid_tb_ext_pane_ParamLimits

0x9876,	// (0x0002995c) grid_tb_ext_pane

0x989c,	// (0x00029982) cell_tb_ext_pane_ParamLimits

0x989c,	// (0x00029982) cell_tb_ext_pane

0x98b1,	// (0x00029997) cell_tb_ext_pane_g1_ParamLimits

0x98b1,	// (0x00029997) cell_tb_ext_pane_g1

0x98ce,	// (0x000299b4) cell_tb_ext_pane_t1

0x0a5c,	// (0x00020b42) list_highlight_pane_cp11_ParamLimits

0x0a5c,	// (0x00020b42) list_highlight_pane_cp11

0xd4a7,	// (0x0002d58d) popup_uni_indicator_window_ParamLimits

0xd4a7,	// (0x0002d58d) popup_uni_indicator_window

0x0e9d,	// (0x00020f83) bg_popup_sub_pane_cp14

0x98e9,	// (0x000299cf) list_uniindi_pane

0x98f5,	// (0x000299db) uniindi_top_pane

0x0a5c,	// (0x00020b42) bg_uniindi_top_pane

0x9914,	// (0x000299fa) uniindi_top_pane_g1

0x992a,	// (0x00029a10) uniindi_top_pane_g2

0x0003,

0xfd27,	// (0x0002fe0d) uniindi_top_pane_g

0x9954,	// (0x00029a3a) uniindi_top_pane_t1

0x997e,	// (0x00029a64) list_single_uniindi_pane_ParamLimits

0x997e,	// (0x00029a64) list_single_uniindi_pane

0x6ca2,	// (0x00026d88) bg_uniindi_top_pane_g1

0x9990,	// (0x00029a76) list_single_uniindi_pane_g1

0x99a3,	// (0x00029a89) list_single_uniindi_pane_t1

0x080d,	// (0x000208f3) control_bg_pane

0x99c8,	// (0x00029aae) bg_sctrl_sk_pane_cp1

0x99d1,	// (0x00029ab7) bg_sctrl_sk_pane_cp2

0x99da,	// (0x00029ac0) control_bg_pane_g1

0x99e3,	// (0x00029ac9) control_bg_pane_g2

0x0001,

0xfd30,	// (0x0002fe16) control_bg_pane_g

0x6930,	// (0x00026a16) cell_indicator_nsta_pane_g1_ParamLimits

0x8eba,	// (0x00028fa0) cell_indicator_nsta_pane_g2_ParamLimits

0xfaab,	// (0x0002fb91) cell_indicator_nsta_pane_g_ParamLimits

0xd00f,	// (0x0002d0f5) form2_midp_time_pane_t1_ParamLimits

0x0cc3,	// (0x00020da9) main_idle_act4_pane_ParamLimits

0x0cc3,	// (0x00020da9) main_idle_act4_pane

0x45bc,	// (0x000246a2) popup_tb_extension_window_ParamLimits

0x9890,	// (0x00029976) tb_ext_find_pane_ParamLimits

0x9890,	// (0x00029976) tb_ext_find_pane

0x99ec,	// (0x00029ad2) ai_gene_pane_1_cp1

0x1a9b,	// (0x00021b81) ai_gene_pane_2_cp1

0x99f4,	// (0x00029ada) list_single_idle_plugin_calendar_pane

0x99fd,	// (0x00029ae3) list_single_idle_plugin_notification_pane

0x9a06,	// (0x00029aec) list_single_idle_plugin_player_pane

0x9a0f,	// (0x00029af5) list_single_idle_plugin_shortcut_pane_ParamLimits

0x9a0f,	// (0x00029af5) list_single_idle_plugin_shortcut_pane

0x9a31,	// (0x00029b17) main_idle_act4_pane_t1

0x9a43,	// (0x00029b29) main_idle_act4_pane_t2

0x0001,

0xfd35,	// (0x0002fe1b) main_idle_act4_pane_t

0x9a55,	// (0x00029b3b) middle_sk_idle_act4_pane_ParamLimits

0x9a55,	// (0x00029b3b) middle_sk_idle_act4_pane

0x9a6b,	// (0x00029b51) popup_clock_digital_analogue_window_cp2

0x9a85,	// (0x00029b6b) shortcut_wheel_idle_act4_pane_ParamLimits

0x9a85,	// (0x00029b6b) shortcut_wheel_idle_act4_pane

0x6ca2,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g1

0x6ca2,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g2

0x6ca2,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g3

0x6ca2,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g4

0x6ca2,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g5

0x9a99,	// (0x00029b7f) shortcut_wheel_idle_act4_pane_g6

0x9aa1,	// (0x00029b87) shortcut_wheel_idle_act4_pane_g7

0x9aa9,	// (0x00029b8f) shortcut_wheel_idle_act4_pane_g8

0x9ab1,	// (0x00029b97) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3a,	// (0x0002fe20) shortcut_wheel_idle_act4_pane_g

0x6ed0,	// (0x00026fb6) middle_sk_idle_act4_pane_g1_ParamLimits

0x6ed0,	// (0x00026fb6) middle_sk_idle_act4_pane_g1

0x9b15,	// (0x00029bfb) middle_sk_idle_act4_pane_g2_ParamLimits

0x9b15,	// (0x00029bfb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5d,	// (0x0002fe43) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5d,	// (0x0002fe43) middle_sk_idle_act4_pane_g

0x9b21,	// (0x00029c07) middle_sk_idle_act4_pane_t1_ParamLimits

0x9b21,	// (0x00029c07) middle_sk_idle_act4_pane_t1

0x9b3e,	// (0x00029c24) grid_ai_shortcut_pane_ParamLimits

0x9b3e,	// (0x00029c24) grid_ai_shortcut_pane

0x9b57,	// (0x00029c3d) list_highlight_pane_cp16_ParamLimits

0x9b57,	// (0x00029c3d) list_highlight_pane_cp16

0x9b64,	// (0x00029c4a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x9b64,	// (0x00029c4a) list_single_idle_plugin_shortcut_pane_g1

0x9b70,	// (0x00029c56) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x9b70,	// (0x00029c56) list_single_idle_plugin_shortcut_pane_g2

0x9b88,	// (0x00029c6e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x9b88,	// (0x00029c6e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd62,	// (0x0002fe48) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd62,	// (0x0002fe48) list_single_idle_plugin_shortcut_pane_g

0x9b9b,	// (0x00029c81) cell_ai_shortcut_pane_ParamLimits

0x9b9b,	// (0x00029c81) cell_ai_shortcut_pane

0x9bbc,	// (0x00029ca2) cell_ai_shortcut_pane_g1_ParamLimits

0x9bbc,	// (0x00029ca2) cell_ai_shortcut_pane_g1

0x99ec,	// (0x00029ad2) ai_gene_pane_1_cp2

0x9bde,	// (0x00029cc4) ai_gene_pane_2_cp2

0x9be6,	// (0x00029ccc) list_highlight_pane_cp15

0x9bef,	// (0x00029cd5) list_single_idle_plugin_calendar_pane_g1

0x9be6,	// (0x00029ccc) list_highlight_pane_cp17

0x9bf7,	// (0x00029cdd) list_single_idle_plugin_calendar_pane_g1_copy1

0x9bff,	// (0x00029ce5) list_single_idle_plugin_player_pane_g1

0x63a9,	// (0x0002648f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd69,	// (0x0002fe4f) list_single_idle_plugin_player_pane_g

0x9c07,	// (0x00029ced) list_single_idle_plugin_player_pane_t1

0x9c15,	// (0x00029cfb) list_single_idle_plugin_player_pane_t2

0x9c23,	// (0x00029d09) list_single_idle_plugin_player_pane_t3

0x9c31,	// (0x00029d17) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6e,	// (0x0002fe54) list_single_idle_plugin_player_pane_t

0x9c3f,	// (0x00029d25) wait_bar_pane_cp15

0x9c47,	// (0x00029d2d) grid_ai_notification_pane

0x63a9,	// (0x0002648f) list_single_idle_plugin_notification_pane_g1

0x9c50,	// (0x00029d36) cell_ai_notification_pane_ParamLimits

0x9c50,	// (0x00029d36) cell_ai_notification_pane

0x9c5d,	// (0x00029d43) cell_ai_notification_pane_g1

0x9c65,	// (0x00029d4b) cell_ai_notification_pane_t1

0x9c73,	// (0x00029d59) tb_ext_find_button_pane

0x9c7b,	// (0x00029d61) tb_ext_find_pane_g1

0x9c83,	// (0x00029d69) tb_ext_find_pane_t1

0x157a,	// (0x00021660) tb_ext_find_button_pane_g1

0x9c91,	// (0x00029d77) tb_ext_find_button_pane_g2

0x0001,

0xfd77,	// (0x0002fe5d) tb_ext_find_button_pane_g

0x9a31,	// (0x00029b17) main_idle_act4_pane_t1_ParamLimits

0x9a43,	// (0x00029b29) main_idle_act4_pane_t2_ParamLimits

0xfd35,	// (0x0002fe1b) main_idle_act4_pane_t_ParamLimits

0x9a6b,	// (0x00029b51) popup_clock_digital_analogue_window_cp2_ParamLimits

0x9a79,	// (0x00029b5f) sat_plugin_idle_act4_pane_ParamLimits

0x9a79,	// (0x00029b5f) sat_plugin_idle_act4_pane

0x9c9a,	// (0x00029d80) sat_plugin_idle_act4_pane_t1_ParamLimits

0x9c9a,	// (0x00029d80) sat_plugin_idle_act4_pane_t1

0x9cad,	// (0x00029d93) sat_plugin_idle_act4_pane_t2_ParamLimits

0x9cad,	// (0x00029d93) sat_plugin_idle_act4_pane_t2

0x9cc0,	// (0x00029da6) sat_plugin_idle_act4_pane_t3_ParamLimits

0x9cc0,	// (0x00029da6) sat_plugin_idle_act4_pane_t3

0x9cd3,	// (0x00029db9) sat_plugin_idle_act4_pane_t4_ParamLimits

0x9cd3,	// (0x00029db9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7c,	// (0x0002fe62) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7c,	// (0x0002fe62) sat_plugin_idle_act4_pane_t

0xd408,	// (0x0002d4ee) popup_battery_window_ParamLimits

0xd408,	// (0x0002d4ee) popup_battery_window

0x0a5c,	// (0x00020b42) bg_popup_sub_pane_cp25_ParamLimits

0x0a5c,	// (0x00020b42) bg_popup_sub_pane_cp25

0x9ce6,	// (0x00029dcc) popup_battery_window_g1_ParamLimits

0x9ce6,	// (0x00029dcc) popup_battery_window_g1

0x9cf2,	// (0x00029dd8) popup_battery_window_t1_ParamLimits

0x9cf2,	// (0x00029dd8) popup_battery_window_t1

0x9d04,	// (0x00029dea) popup_battery_window_t2_ParamLimits

0x9d04,	// (0x00029dea) popup_battery_window_t2

0x0001,

0xfd85,	// (0x0002fe6b) popup_battery_window_t_ParamLimits

0xfd85,	// (0x0002fe6b) popup_battery_window_t

0x4015,	// (0x000240fb) midp_canvas_pane_ParamLimits

0x4071,	// (0x00024157) midp_keypad_pane_ParamLimits

0x4071,	// (0x00024157) midp_keypad_pane

0x13af,	// (0x00021495) main_midp_pane_ParamLimits

0x69a6,	// (0x00026a8c) signal_pane_g2_cp_ParamLimits

0x9d21,	// (0x00029e07) aid_size_cell_midp_keypad_ParamLimits

0x9d21,	// (0x00029e07) aid_size_cell_midp_keypad

0x9d3b,	// (0x00029e21) midp_keyp_game_grid_pane_ParamLimits

0x9d3b,	// (0x00029e21) midp_keyp_game_grid_pane

0x9d55,	// (0x00029e3b) midp_keyp_rocker_pane_ParamLimits

0x9d55,	// (0x00029e3b) midp_keyp_rocker_pane

0x9d82,	// (0x00029e68) midp_keyp_sk_left_pane_ParamLimits

0x9d82,	// (0x00029e68) midp_keyp_sk_left_pane

0x9dda,	// (0x00029ec0) midp_keyp_sk_right_pane_ParamLimits

0x9dda,	// (0x00029ec0) midp_keyp_sk_right_pane

0x080d,	// (0x000208f3) bg_button_pane_cp03

0x9e2c,	// (0x00029f12) midp_keyp_sk_left_pane_g1

0x080d,	// (0x000208f3) bg_button_pane_cp04

0x9e2c,	// (0x00029f12) midp_keyp_sk_right_pane_g1

0x6ca2,	// (0x00026d88) midp_keyp_rocker_pane_g1

0x9e35,	// (0x00029f1b) keyp_game_cell_pane_ParamLimits

0x9e35,	// (0x00029f1b) keyp_game_cell_pane

0x080d,	// (0x000208f3) bg_button_pane_cp02

0x9e46,	// (0x00029f2c) keyp_game_cell_pane_g1

0xd43e,	// (0x0002d524) popup_fep_vkb2_window_ParamLimits

0xd43e,	// (0x0002d524) popup_fep_vkb2_window

0xe575,	// (0x0002e65b) aid_size_cell_vkb2_ParamLimits

0xe575,	// (0x0002e65b) aid_size_cell_vkb2

0xe5c9,	// (0x0002e6af) popup_fep_vkb2_window_g1_ParamLimits

0xe5c9,	// (0x0002e6af) popup_fep_vkb2_window_g1

0xe611,	// (0x0002e6f7) vkb2_area_bottom_pane_ParamLimits

0xe611,	// (0x0002e6f7) vkb2_area_bottom_pane

0xe649,	// (0x0002e72f) vkb2_area_keypad_pane_ParamLimits

0xe649,	// (0x0002e72f) vkb2_area_keypad_pane

0xe681,	// (0x0002e767) vkb2_area_top_pane_ParamLimits

0xe681,	// (0x0002e767) vkb2_area_top_pane

0xe6f1,	// (0x0002e7d7) vkb2_top_entry_pane_ParamLimits

0xe6f1,	// (0x0002e7d7) vkb2_top_entry_pane

0xe71b,	// (0x0002e801) vkb2_top_grid_left_pane_ParamLimits

0xe71b,	// (0x0002e801) vkb2_top_grid_left_pane

0xe739,	// (0x0002e81f) vkb2_top_grid_right_pane_ParamLimits

0xe739,	// (0x0002e81f) vkb2_top_grid_right_pane

0xe757,	// (0x0002e83d) vkb2_cell_keypad_pane_ParamLimits

0xe757,	// (0x0002e83d) vkb2_cell_keypad_pane

0xe808,	// (0x0002e8ee) vkb2_area_bottom_grid_pane_ParamLimits

0xe808,	// (0x0002e8ee) vkb2_area_bottom_grid_pane

0xe82c,	// (0x0002e912) vkb2_area_bottom_pane_g1_ParamLimits

0xe82c,	// (0x0002e912) vkb2_area_bottom_pane_g1

0xe850,	// (0x0002e936) vkb2_area_bottom_pane_g2_ParamLimits

0xe850,	// (0x0002e936) vkb2_area_bottom_pane_g2

0xe87e,	// (0x0002e964) vkb2_area_bottom_pane_g3_ParamLimits

0xe87e,	// (0x0002e964) vkb2_area_bottom_pane_g3

0x0002,

0xfd8a,	// (0x0002fe70) vkb2_area_bottom_pane_g_ParamLimits

0xfd8a,	// (0x0002fe70) vkb2_area_bottom_pane_g

0xe8cf,	// (0x0002e9b5) vkb2_top_cell_left_pane_ParamLimits

0xe8cf,	// (0x0002e9b5) vkb2_top_cell_left_pane

0xe8ef,	// (0x0002e9d5) vkb2_top_entry_pane_g1_ParamLimits

0xe8ef,	// (0x0002e9d5) vkb2_top_entry_pane_g1

0xe8fd,	// (0x0002e9e3) vkb2_top_entry_pane_t1_ParamLimits

0xe8fd,	// (0x0002e9e3) vkb2_top_entry_pane_t1

0xb02c,	// (0x0002b112) vkb2_top_entry_pane_t2_ParamLimits

0xb02c,	// (0x0002b112) vkb2_top_entry_pane_t2

0xb05e,	// (0x0002b144) vkb2_top_entry_pane_t3_ParamLimits

0xb05e,	// (0x0002b144) vkb2_top_entry_pane_t3

0x0002,

0xfd91,	// (0x0002fe77) vkb2_top_entry_pane_t_ParamLimits

0xfd91,	// (0x0002fe77) vkb2_top_entry_pane_t

0xe95c,	// (0x0002ea42) vkb2_top_grid_right_pane_g1_ParamLimits

0xe95c,	// (0x0002ea42) vkb2_top_grid_right_pane_g1

0xe972,	// (0x0002ea58) vkb2_top_grid_right_pane_g2_ParamLimits

0xe972,	// (0x0002ea58) vkb2_top_grid_right_pane_g2

0xe98a,	// (0x0002ea70) vkb2_top_grid_right_pane_g3_ParamLimits

0xe98a,	// (0x0002ea70) vkb2_top_grid_right_pane_g3

0xe9a2,	// (0x0002ea88) vkb2_top_grid_right_pane_g4_ParamLimits

0xe9a2,	// (0x0002ea88) vkb2_top_grid_right_pane_g4

0x0003,

0xfd98,	// (0x0002fe7e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd98,	// (0x0002fe7e) vkb2_top_grid_right_pane_g

0xe9b8,	// (0x0002ea9e) vkb2_top_cell_left_pane_g1

0xe9cf,	// (0x0002eab5) vkb2_cell_keypad_pane_g1_ParamLimits

0xe9cf,	// (0x0002eab5) vkb2_cell_keypad_pane_g1

0xb0a0,	// (0x0002b186) vkb2_cell_keypad_pane_t1_ParamLimits

0xb0a0,	// (0x0002b186) vkb2_cell_keypad_pane_t1

0xe9dd,	// (0x0002eac3) vkb2_cell_bottom_grid_pane_ParamLimits

0xe9dd,	// (0x0002eac3) vkb2_cell_bottom_grid_pane

0xea16,	// (0x0002eafc) vkb2_cell_bottom_grid_pane_g1

0x9ab9,	// (0x00029b9f) aid_call2_pane_cp02

0x9ac1,	// (0x00029ba7) aid_call_pane_cp02

0x9ac9,	// (0x00029baf) clock_digital_number_pane_cp10

0x9ad1,	// (0x00029bb7) clock_digital_number_pane_cp11

0x9ad9,	// (0x00029bbf) clock_digital_number_pane_cp12

0x9ae1,	// (0x00029bc7) clock_digital_number_pane_cp13

0x9ae9,	// (0x00029bcf) clock_digital_separator_pane_cp10

0x157a,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g1

0x157a,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g2

0x9af1,	// (0x00029bd7) popup_clock_digital_analogue_window_cp2_g3

0x157a,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g4

0x9af1,	// (0x00029bd7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4d,	// (0x0002fe33) popup_clock_digital_analogue_window_cp2_g

0x9af9,	// (0x00029bdf) popup_clock_digital_analogue_window_cp2_t1

0x9b07,	// (0x00029bed) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd58,	// (0x0002fe3e) popup_clock_digital_analogue_window_cp2_t

0x6ca2,	// (0x00026d88) clock_digital_number_pane_cp10_g1

0x6ca2,	// (0x00026d88) clock_digital_number_pane_cp10_g2

0x0001,

0xfb47,	// (0x0002fc2d) clock_digital_number_pane_cp10_g

0x6ca2,	// (0x00026d88) clock_digital_separator_pane_cp10_g1

0x6ca2,	// (0x00026d88) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb47,	// (0x0002fc2d) clock_digital_separator_pane_cp10_g

0x9936,	// (0x00029a1c) uniindi_top_pane_g3

0x9947,	// (0x00029a2d) uniindi_top_pane_g4

0xe7c2,	// (0x0002e8a8) vkb2_row_keypad_pane_ParamLimits

0xe7c2,	// (0x0002e8a8) vkb2_row_keypad_pane

0xea32,	// (0x0002eb18) vkb2_cell_t_keypad_pane_ParamLimits

0xea32,	// (0x0002eb18) vkb2_cell_t_keypad_pane

0xea3f,	// (0x0002eb25) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xea3f,	// (0x0002eb25) vkb2_cell_t_keypad_pane_cp08

0xea4f,	// (0x0002eb35) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xea4f,	// (0x0002eb35) vkb2_cell_t_keypad_pane_cp09

0xea60,	// (0x0002eb46) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xea60,	// (0x0002eb46) vkb2_cell_t_keypad_pane_cp01

0xea70,	// (0x0002eb56) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xea70,	// (0x0002eb56) vkb2_cell_t_keypad_pane_cp02

0xea80,	// (0x0002eb66) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xea80,	// (0x0002eb66) vkb2_cell_t_keypad_pane_cp03

0xea90,	// (0x0002eb76) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xea90,	// (0x0002eb76) vkb2_cell_t_keypad_pane_cp04

0xeaa0,	// (0x0002eb86) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xeaa0,	// (0x0002eb86) vkb2_cell_t_keypad_pane_cp05

0xeab0,	// (0x0002eb96) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xeab0,	// (0x0002eb96) vkb2_cell_t_keypad_pane_cp06

0xeac0,	// (0x0002eba6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xeac0,	// (0x0002eba6) vkb2_cell_t_keypad_pane_cp07

0xead0,	// (0x0002ebb6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xead0,	// (0x0002ebb6) vkb2_cell_t_keypad_pane_cp10

0x6ed0,	// (0x00026fb6) vkb2_cell_t_keypad_pane_g1

0xb0b7,	// (0x0002b19d) vkb2_cell_t_keypad_pane_t1

0x080d,	// (0x000208f3) popup_grid_graphic2_window

0xeae5,	// (0x0002ebcb) aid_size_cell_graphic2_ParamLimits

0xeae5,	// (0x0002ebcb) aid_size_cell_graphic2

0x767c,	// (0x00027762) bg_popup_window_pane_cp21_ParamLimits

0x767c,	// (0x00027762) bg_popup_window_pane_cp21

0xeb11,	// (0x0002ebf7) graphic2_pages_pane_ParamLimits

0xeb11,	// (0x0002ebf7) graphic2_pages_pane

0xeb4b,	// (0x0002ec31) grid_graphic2_control_pane_ParamLimits

0xeb4b,	// (0x0002ec31) grid_graphic2_control_pane

0xeb73,	// (0x0002ec59) grid_graphic2_pane_ParamLimits

0xeb73,	// (0x0002ec59) grid_graphic2_pane

0xebc3,	// (0x0002eca9) cell_graphic2_pane

0x080d,	// (0x000208f3) main_comp_mode_pane

0x8753,	// (0x00028839) list_ai3_gene_pane_ParamLimits

0x9595,	// (0x0002967b) bg_popup_window_pane_cp19_ParamLimits

0x95a1,	// (0x00029687) bg_touch_area_indi_pane_ParamLimits

0x95a1,	// (0x00029687) bg_touch_area_indi_pane

0x95b7,	// (0x0002969d) bg_touch_area_indi_pane_cp01_ParamLimits

0x95b7,	// (0x0002969d) bg_touch_area_indi_pane_cp01

0x95cd,	// (0x000296b3) bg_touch_area_indi_pane_cp02_ParamLimits

0x95cd,	// (0x000296b3) bg_touch_area_indi_pane_cp02

0x95e3,	// (0x000296c9) bg_touch_area_indi_pane_cp03_ParamLimits

0x95e3,	// (0x000296c9) bg_touch_area_indi_pane_cp03

0x95f9,	// (0x000296df) popup_slider_window_g1_ParamLimits

0x9615,	// (0x000296fb) popup_slider_window_g2_ParamLimits

0x9631,	// (0x00029717) popup_slider_window_g3_ParamLimits

0xfce2,	// (0x0002fdc8) popup_slider_window_g_ParamLimits

0x968d,	// (0x00029773) popup_slider_window_t1_ParamLimits

0x96ff,	// (0x000297e5) small_volume_slider_vertical_pane_ParamLimits

0xebc3,	// (0x0002eca9) cell_graphic2_pane_ParamLimits

0xec00,	// (0x0002ece6) bg_button_pane_cp10_ParamLimits

0xec00,	// (0x0002ece6) bg_button_pane_cp10

0xec11,	// (0x0002ecf7) bg_button_pane_cp11_ParamLimits

0xec11,	// (0x0002ecf7) bg_button_pane_cp11

0xec22,	// (0x0002ed08) graphic2_pages_pane_g1_ParamLimits

0xec22,	// (0x0002ed08) graphic2_pages_pane_g1

0xec35,	// (0x0002ed1b) graphic2_pages_pane_g2_ParamLimits

0xec35,	// (0x0002ed1b) graphic2_pages_pane_g2

0x0001,

0xfda6,	// (0x0002fe8c) graphic2_pages_pane_g_ParamLimits

0xfda6,	// (0x0002fe8c) graphic2_pages_pane_g

0xec4b,	// (0x0002ed31) graphic2_pages_pane_t1_ParamLimits

0xec4b,	// (0x0002ed31) graphic2_pages_pane_t1

0xec61,	// (0x0002ed47) cell_graphic2_control_pane_ParamLimits

0xec61,	// (0x0002ed47) cell_graphic2_control_pane

0xec7b,	// (0x0002ed61) cell_graphic2_pane_g1_ParamLimits

0xec7b,	// (0x0002ed61) cell_graphic2_pane_g1

0xec88,	// (0x0002ed6e) cell_graphic2_pane_g2_ParamLimits

0xec88,	// (0x0002ed6e) cell_graphic2_pane_g2

0xec95,	// (0x0002ed7b) cell_graphic2_pane_g3_ParamLimits

0xec95,	// (0x0002ed7b) cell_graphic2_pane_g3

0xeca2,	// (0x0002ed88) cell_graphic2_pane_g4_ParamLimits

0xeca2,	// (0x0002ed88) cell_graphic2_pane_g4

0xecaf,	// (0x0002ed95) cell_graphic2_pane_g5_ParamLimits

0xecaf,	// (0x0002ed95) cell_graphic2_pane_g5

0x0004,

0xfdab,	// (0x0002fe91) cell_graphic2_pane_g_ParamLimits

0xfdab,	// (0x0002fe91) cell_graphic2_pane_g

0xecca,	// (0x0002edb0) cell_graphic2_pane_t1_ParamLimits

0xecca,	// (0x0002edb0) cell_graphic2_pane_t1

0x2017,	// (0x000220fd) grid_highlight_pane_cp11_ParamLimits

0x2017,	// (0x000220fd) grid_highlight_pane_cp11

0x0e9d,	// (0x00020f83) bg_button_pane_cp05

0xecf3,	// (0x0002edd9) cell_graphic2_control_pane_g1

0x6ca2,	// (0x00026d88) bg_touch_area_indi_pane_g1

0xb0e3,	// (0x0002b1c9) aid_cmod_rocker_key_size

0xb0ed,	// (0x0002b1d3) aid_cmode_itu_key_size

0xb0f7,	// (0x0002b1dd) main_cmode_video_pane

0xb0ff,	// (0x0002b1e5) main_comp_mode_itu_pane

0xb109,	// (0x0002b1ef) main_comp_mode_rocker_pane

0xb111,	// (0x0002b1f7) cell_cmode_rocker_pane_ParamLimits

0xb111,	// (0x0002b1f7) cell_cmode_rocker_pane

0xb123,	// (0x0002b209) cell_cmode_itu_pane_ParamLimits

0xb123,	// (0x0002b209) cell_cmode_itu_pane

0x0e9d,	// (0x00020f83) bg_button_pane_cp06_ParamLimits

0x0e9d,	// (0x00020f83) bg_button_pane_cp06

0x6ed0,	// (0x00026fb6) cell_cmode_rocker_pane_g1_ParamLimits

0x6ed0,	// (0x00026fb6) cell_cmode_rocker_pane_g1

0x97a0,	// (0x00029886) cell_cmode_rocker_pane_g2_ParamLimits

0x97a0,	// (0x00029886) cell_cmode_rocker_pane_g2

0x0001,

0xfdbb,	// (0x0002fea1) cell_cmode_rocker_pane_g_ParamLimits

0xfdbb,	// (0x0002fea1) cell_cmode_rocker_pane_g

0x080d,	// (0x000208f3) bg_button_pane_cp07

0xb138,	// (0x0002b21e) cell_cmode_itu_pane_g1

0xb141,	// (0x0002b227) cell_cmode_itu_pane_t1

0xb14f,	// (0x0002b235) cell_cmode_itu_pane_t2

0x0001,

0xfdc0,	// (0x0002fea6) cell_cmode_itu_pane_t

0x99b8,	// (0x00029a9e) aid_touch_ctrl_left

0x99c0,	// (0x00029aa6) aid_touch_ctrl_right

0x080d,	// (0x000208f3) compa_mode_pane

0xed00,	// (0x0002ede6) aid_cmod_rocker_key_size_cp

0xed0a,	// (0x0002edf0) aid_cmode_itu_key_size_cp

0xb15d,	// (0x0002b243) compa_mode_pane_g1

0xb165,	// (0x0002b24b) compa_mode_pane_g2

0xb16d,	// (0x0002b253) compa_mode_pane_g3

0x0002,

0xfdc5,	// (0x0002feab) compa_mode_pane_g

0xed14,	// (0x0002edfa) main_comp_mode_itu_pane_cp

0xed1c,	// (0x0002ee02) main_comp_mode_rocker_pane_cp

0xed24,	// (0x0002ee0a) cell_cmode_itu_pane_cp_ParamLimits

0xed24,	// (0x0002ee0a) cell_cmode_itu_pane_cp

0xed39,	// (0x0002ee1f) cell_cmode_rocker_pane_cp_ParamLimits

0xed39,	// (0x0002ee1f) cell_cmode_rocker_pane_cp

0x0e9d,	// (0x00020f83) bg_button_pane_cp06_cp_ParamLimits

0x0e9d,	// (0x00020f83) bg_button_pane_cp06_cp

0x6ed0,	// (0x00026fb6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6ed0,	// (0x00026fb6) cell_cmode_rocker_pane_g1_cp

0x6ca2,	// (0x00026d88) cell_cmode_rocker_pane_g2_cp

0x080d,	// (0x000208f3) bg_button_pane_cp07_cp

0xed4b,	// (0x0002ee31) cell_cmode_itu_pane_g1_cp

0xed54,	// (0x0002ee3a) cell_cmode_itu_pane_t1_cp

0xed62,	// (0x0002ee48) cell_cmode_itu_pane_t2_cp

0x8ab6,	// (0x00028b9c) settings_code_pane_cp2

0x08fd,	// (0x000209e3) bg_popup_window_pane_cp3_ParamLimits

0x0c34,	// (0x00020d1a) heading_pane_cp3_ParamLimits

0x0c40,	// (0x00020d26) listscroll_popup_graphic_pane_ParamLimits

0xe07c,	// (0x0002e162) fep_hwr_aid_pane_ParamLimits

0xe4e7,	// (0x0002e5cd) aid_touch_sctrl_top_ParamLimits

0xe4f4,	// (0x0002e5da) sctrl_sk_top_pane_g1_ParamLimits

0x6ed0,	// (0x00026fb6) sctrl_sk_top_pane_g2_ParamLimits

0xfcfb,	// (0x0002fde1) sctrl_sk_top_pane_g_ParamLimits

0xe501,	// (0x0002e5e7) sctrl_sk_top_pane_t1_ParamLimits

0xe4e7,	// (0x0002e5cd) aid_touch_sctrl_bottom_ParamLimits

0xe501,	// (0x0002e5e7) sctrl_sk_bottom_pane_t1_ParamLimits

0x9902,	// (0x000299e8) aid_area_touch_clock

0xe6b9,	// (0x0002e79f) aid_vkb2_area_top_pane_cell_ParamLimits

0xe6b9,	// (0x0002e79f) aid_vkb2_area_top_pane_cell

0xe7e4,	// (0x0002e8ca) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe7e4,	// (0x0002e8ca) aid_vkb2_area_bottom_pane_cell

0xb024,	// (0x0002b10a) popup_char_count_window

0xb175,	// (0x0002b25b) popup_char_count_window_g1

0xb17e,	// (0x0002b264) popup_char_count_window_g2

0xb187,	// (0x0002b26d) popup_char_count_window_g3

0x0002,

0xfdcc,	// (0x0002feb2) popup_char_count_window_g

0xb190,	// (0x0002b276) popup_char_count_window_t1

0xe5a7,	// (0x0002e68d) popup_fep_char_preview_window_ParamLimits

0xe5a7,	// (0x0002e68d) popup_fep_char_preview_window

0xe6d7,	// (0x0002e7bd) vkb2_top_candi_pane_ParamLimits

0xe6d7,	// (0x0002e7bd) vkb2_top_candi_pane

0xed70,	// (0x0002ee56) cell_vkb2_top_candi_pane_ParamLimits

0xed70,	// (0x0002ee56) cell_vkb2_top_candi_pane

0x24c0,	// (0x000225a6) bg_popup_fep_char_preview_window_ParamLimits

0x24c0,	// (0x000225a6) bg_popup_fep_char_preview_window

0xeda9,	// (0x0002ee8f) popup_fep_char_preview_window_t1_ParamLimits

0xeda9,	// (0x0002ee8f) popup_fep_char_preview_window_t1

0xb1ae,	// (0x0002b294) bg_popup_fep_char_preview_window_g1

0xb1a6,	// (0x0002b28c) bg_popup_fep_char_preview_window_g2

0xb19e,	// (0x0002b284) bg_popup_fep_char_preview_window_g3

0xb1ce,	// (0x0002b2b4) bg_popup_fep_char_preview_window_g4

0xb1c6,	// (0x0002b2ac) bg_popup_fep_char_preview_window_g5

0xede3,	// (0x0002eec9) bg_popup_fep_char_preview_window_g6

0xb1be,	// (0x0002b2a4) bg_popup_fep_char_preview_window_g7

0xb1b6,	// (0x0002b29c) bg_popup_fep_char_preview_window_g8

0xb1d6,	// (0x0002b2bc) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd3,	// (0x0002feb9) bg_popup_fep_char_preview_window_g

0x6ed0,	// (0x00026fb6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6ed0,	// (0x00026fb6) cell_vkb2_top_candi_pane_g1

0x7285,	// (0x0002736b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7285,	// (0x0002736b) cell_vkb2_top_candi_pane_g2

0x72a6,	// (0x0002738c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x72a6,	// (0x0002738c) cell_vkb2_top_candi_pane_g3

0xedeb,	// (0x0002eed1) cell_vkb2_top_candi_pane_g4_ParamLimits

0xedeb,	// (0x0002eed1) cell_vkb2_top_candi_pane_g4

0xaca9,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xaca9,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g5

0x97a0,	// (0x00029886) cell_vkb2_top_candi_pane_g6_ParamLimits

0x97a0,	// (0x00029886) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde6,	// (0x0002fecc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde6,	// (0x0002fecc) cell_vkb2_top_candi_pane_g

0xee0c,	// (0x0002eef2) cell_vkb2_top_candi_pane_t1

0x768a,	// (0x00027770) aid_size_touch_slider_mark_ParamLimits

0x768a,	// (0x00027770) aid_size_touch_slider_mark

0xeb3f,	// (0x0002ec25) grid_graphic2_catg_pane_ParamLimits

0xeb3f,	// (0x0002ec25) grid_graphic2_catg_pane

0xeb9f,	// (0x0002ec85) popup_grid_graphic2_window_t1_ParamLimits

0xeb9f,	// (0x0002ec85) popup_grid_graphic2_window_t1

0xebb1,	// (0x0002ec97) popup_grid_graphic2_window_t2_ParamLimits

0xebb1,	// (0x0002ec97) popup_grid_graphic2_window_t2

0x0001,

0xfda1,	// (0x0002fe87) popup_grid_graphic2_window_t_ParamLimits

0xfda1,	// (0x0002fe87) popup_grid_graphic2_window_t

0x0e9d,	// (0x00020f83) bg_button_pane_cp05_ParamLimits

0xecf3,	// (0x0002edd9) cell_graphic2_control_pane_g1_ParamLimits

0xee22,	// (0x0002ef08) cell_graphic2_catg_pane_ParamLimits

0xee22,	// (0x0002ef08) cell_graphic2_catg_pane

0x080d,	// (0x000208f3) bg_button_pane_cp12

0xee34,	// (0x0002ef1a) cell_graphic2_catg_pane_g1

0x98ce,	// (0x000299b4) cell_tb_ext_pane_t1_ParamLimits

0xe92f,	// (0x0002ea15) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe92f,	// (0x0002ea15) vkb2_top_cell_right_narrow_pane

0xe947,	// (0x0002ea2d) vkb2_top_cell_right_wide_pane_ParamLimits

0xe947,	// (0x0002ea2d) vkb2_top_cell_right_wide_pane

0x767c,	// (0x00027762) bg_vkb2_func_pane_ParamLimits

0x767c,	// (0x00027762) bg_vkb2_func_pane

0xe9b8,	// (0x0002ea9e) vkb2_top_cell_left_pane_g1_ParamLimits

0x767c,	// (0x00027762) bg_vkb2_fuc_pane_cp03_ParamLimits

0x767c,	// (0x00027762) bg_vkb2_fuc_pane_cp03

0xea16,	// (0x0002eafc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1f25,	// (0x0002200b) bg_vkb2_func_pane_g1

0x1f2d,	// (0x00022013) bg_vkb2_func_pane_g2

0x1f3d,	// (0x00022023) bg_vkb2_func_pane_g3

0x1f35,	// (0x0002201b) bg_vkb2_func_pane_g4

0x1f45,	// (0x0002202b) bg_vkb2_func_pane_g5

0x1f4d,	// (0x00022033) bg_vkb2_func_pane_g6

0x1f55,	// (0x0002203b) bg_vkb2_func_pane_g7

0x1f5d,	// (0x00022043) bg_vkb2_func_pane_g8

0x1f1d,	// (0x00022003) bg_vkb2_func_pane_g9

0x0008,

0xfdf3,	// (0x0002fed9) bg_vkb2_func_pane_g

0x767c,	// (0x00027762) bg_vkb2_fuc_pane_cp01_ParamLimits

0x767c,	// (0x00027762) bg_vkb2_fuc_pane_cp01

0xe9b8,	// (0x0002ea9e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe9b8,	// (0x0002ea9e) vkb2_top_cell_right_wide_pane_g1

0x767c,	// (0x00027762) bg_vkb2_fuc_pane_cp02_ParamLimits

0x767c,	// (0x00027762) bg_vkb2_fuc_pane_cp02

0xea16,	// (0x0002eafc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xea16,	// (0x0002eafc) vkb2_top_cell_right_narrow_pane_g1

0x9527,	// (0x0002960d) aid_touch_area_decrease_ParamLimits

0x9527,	// (0x0002960d) aid_touch_area_decrease

0x953f,	// (0x00029625) aid_touch_area_increase_ParamLimits

0x953f,	// (0x00029625) aid_touch_area_increase

0x954b,	// (0x00029631) aid_touch_area_mute_ParamLimits

0x954b,	// (0x00029631) aid_touch_area_mute

0x9567,	// (0x0002964d) aid_touch_area_slider_ParamLimits

0x9567,	// (0x0002964d) aid_touch_area_slider

0x964d,	// (0x00029733) popup_slider_window_g4_ParamLimits

0x964d,	// (0x00029733) popup_slider_window_g4

0x9659,	// (0x0002973f) popup_slider_window_g5_ParamLimits

0x9659,	// (0x0002973f) popup_slider_window_g5

0x967b,	// (0x00029761) popup_slider_window_g6_ParamLimits

0x967b,	// (0x00029761) popup_slider_window_g6

0x96b9,	// (0x0002979f) popup_slider_window_t2_ParamLimits

0x96b9,	// (0x0002979f) popup_slider_window_t2

0x0001,

0xfcef,	// (0x0002fdd5) popup_slider_window_t_ParamLimits

0xfcef,	// (0x0002fdd5) popup_slider_window_t

0x96d1,	// (0x000297b7) slider_pane_ParamLimits

0x96d1,	// (0x000297b7) slider_pane

0xb1de,	// (0x0002b2c4) slider_pane_g1_ParamLimits

0xb1de,	// (0x0002b2c4) slider_pane_g1

0xb1f2,	// (0x0002b2d8) slider_pane_g2_ParamLimits

0xb1f2,	// (0x0002b2d8) slider_pane_g2

0xb262,	// (0x0002b348) slider_pane_g3_ParamLimits

0xb262,	// (0x0002b348) slider_pane_g3

0x0003,

0xfe06,	// (0x0002feec) slider_pane_g_ParamLimits

0xfe06,	// (0x0002feec) slider_pane_g

0x460c,	// (0x000246f2) popup_tb_float_extension_window_ParamLimits

0x460c,	// (0x000246f2) popup_tb_float_extension_window

0xb28e,	// (0x0002b374) aid_size_cell_tb_float_ext

0x080d,	// (0x000208f3) bg_popup_sub_window_cp28

0xb299,	// (0x0002b37f) grid_tb_float_ext_pane

0xb2a1,	// (0x0002b387) cell_tb_float_ext_pane_ParamLimits

0xb2a1,	// (0x0002b387) cell_tb_float_ext_pane

0xb2b9,	// (0x0002b39f) cell_tb_float_ext_pane_g1

0xb2c2,	// (0x0002b3a8) grid_highlight_pane_cp12

0xe1a9,	// (0x0002e28f) cell_last_hwr_side_pane_ParamLimits

0xe1a9,	// (0x0002e28f) cell_last_hwr_side_pane

0x6ca2,	// (0x00026d88) cell_last_hwr_side_pane_g1

0xb2cb,	// (0x0002b3b1) cell_last_hwr_side_pane_g2

0x0001,

0xfe0f,	// (0x0002fef5) cell_last_hwr_side_pane_g

0xe8ac,	// (0x0002e992) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe8ac,	// (0x0002e992) vkb2_area_bottom_space_btn_pane

0x6ed0,	// (0x00026fb6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xb0b7,	// (0x0002b19d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xee0c,	// (0x0002eef2) cell_vkb2_top_candi_pane_t1_ParamLimits

0xee3d,	// (0x0002ef23) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xee3d,	// (0x0002ef23) vkb2_area_bottom_space_btn_pane_g1

0xee73,	// (0x0002ef59) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xee73,	// (0x0002ef59) vkb2_area_bottom_space_btn_pane_g2

0xeea9,	// (0x0002ef8f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xeea9,	// (0x0002ef8f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe14,	// (0x0002fefa) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe14,	// (0x0002fefa) vkb2_area_bottom_space_btn_pane_g

0xe11d,	// (0x0002e203) cel_fep_hwr_func_pane_ParamLimits

0xe11d,	// (0x0002e203) cel_fep_hwr_func_pane

0xe159,	// (0x0002e23f) cell_hwr_side_button_pane_ParamLimits

0xe159,	// (0x0002e23f) cell_hwr_side_button_pane

0x9902,	// (0x000299e8) aid_area_touch_clock_ParamLimits

0x0a5c,	// (0x00020b42) bg_uniindi_top_pane_ParamLimits

0x9914,	// (0x000299fa) uniindi_top_pane_g1_ParamLimits

0x992a,	// (0x00029a10) uniindi_top_pane_g2_ParamLimits

0x9936,	// (0x00029a1c) uniindi_top_pane_g3_ParamLimits

0x9947,	// (0x00029a2d) uniindi_top_pane_g4_ParamLimits

0xfd27,	// (0x0002fe0d) uniindi_top_pane_g_ParamLimits

0x9954,	// (0x00029a3a) uniindi_top_pane_t1_ParamLimits

0x0a5c,	// (0x00020b42) bg_vkb2_func_pane_cp01_ParamLimits

0x0a5c,	// (0x00020b42) bg_vkb2_func_pane_cp01

0xb2d4,	// (0x0002b3ba) cel_fep_hwr_func_pane_g1_ParamLimits

0xb2d4,	// (0x0002b3ba) cel_fep_hwr_func_pane_g1

0x0a5c,	// (0x00020b42) bg_vkb2_func_pane_cp02_ParamLimits

0x0a5c,	// (0x00020b42) bg_vkb2_func_pane_cp02

0xb2d4,	// (0x0002b3ba) cell_hwr_side_button_pane_g1_ParamLimits

0xb2d4,	// (0x0002b3ba) cell_hwr_side_button_pane_g1

0x1e41,	// (0x00021f27) status_pane_g4_ParamLimits

0x1e41,	// (0x00021f27) status_pane_g4

0x1e59,	// (0x00021f3f) status_pane_t1

0x6b30,	// (0x00026c16) form2_midp_gauge_slider_cont_pane

0x6b38,	// (0x00026c1e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x8fb1,	// (0x00029097) form2_midp_gauge_slider_pane_t2_ParamLimits

0x8fc3,	// (0x000290a9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafa,	// (0x0002fbe0) form2_midp_gauge_slider_pane_t_ParamLimits

0x6b4a,	// (0x00026c30) form2_midp_slider_pane_ParamLimits

0xe567,	// (0x0002e64d) aid_size_cell_func_vkb2_ParamLimits

0xe567,	// (0x0002e64d) aid_size_cell_func_vkb2

0xb27a,	// (0x0002b360) slider_pane_g4_ParamLimits

0xb27a,	// (0x0002b360) slider_pane_g4

0xeeef,	// (0x0002efd5) form2_midp_gauge_slider_pane_t2_cp01

0xeefd,	// (0x0002efe3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xeefd,	// (0x0002efe3) form2_midp_gauge_slider_pane_t3_cp01

0xef1a,	// (0x0002f000) form2_midp_slider_pane_cp01

0x080d,	// (0x000208f3) navi_smil_pane

0xb304,	// (0x0002b3ea) navi_smil_pane_g1

0xb30c,	// (0x0002b3f2) navi_smil_pane_t1

0xb2e2,	// (0x0002b3c8) form2_midp_slider_pane_g1

0xb2eb,	// (0x0002b3d1) form2_midp_slider_pane_g2

0xb2f3,	// (0x0002b3d9) form2_midp_slider_pane_g3

0xb2e2,	// (0x0002b3c8) form2_midp_slider_pane_g4

0xef23,	// (0x0002f009) form2_midp_slider_pane_g5

0x0004,

0xfe1d,	// (0x0002ff03) form2_midp_slider_pane_g

0xeedf,	// (0x0002efc5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xeedf,	// (0x0002efc5) vkb2_area_bottom_space_btn_pane_g4

0x474d,	// (0x00024833) lc0_navi_pane_ParamLimits

0x474d,	// (0x00024833) lc0_navi_pane

0x47c3,	// (0x000248a9) lc0_stat_indi_pane_ParamLimits

0x47c3,	// (0x000248a9) lc0_stat_indi_pane

0x47da,	// (0x000248c0) ls0_title_pane_ParamLimits

0x47da,	// (0x000248c0) ls0_title_pane

0x0e9d,	// (0x00020f83) bg_popup_sub_pane_cp14_ParamLimits

0x98e9,	// (0x000299cf) list_uniindi_pane_ParamLimits

0x98f5,	// (0x000299db) uniindi_top_pane_ParamLimits

0x9990,	// (0x00029a76) list_single_uniindi_pane_g1_ParamLimits

0x99a3,	// (0x00029a89) list_single_uniindi_pane_t1_ParamLimits

0xef2c,	// (0x0002f012) lc0_stat_clock_pane_ParamLimits

0xef2c,	// (0x0002f012) lc0_stat_clock_pane

0xef39,	// (0x0002f01f) lc0_stat_indi_pane_g1_ParamLimits

0xef39,	// (0x0002f01f) lc0_stat_indi_pane_g1

0xef46,	// (0x0002f02c) lc0_stat_indi_pane_g2_ParamLimits

0xef46,	// (0x0002f02c) lc0_stat_indi_pane_g2

0x0001,

0xfe28,	// (0x0002ff0e) lc0_stat_indi_pane_g_ParamLimits

0xfe28,	// (0x0002ff0e) lc0_stat_indi_pane_g

0xef53,	// (0x0002f039) lc0_uni_indicator_pane_ParamLimits

0xef53,	// (0x0002f039) lc0_uni_indicator_pane

0xb31a,	// (0x0002b400) ls0_title_pane_g1_ParamLimits

0xb31a,	// (0x0002b400) ls0_title_pane_g1

0xef60,	// (0x0002f046) ls0_title_pane_t1_ParamLimits

0xef60,	// (0x0002f046) ls0_title_pane_t1

0xef96,	// (0x0002f07c) lc0_uni_indicator_pane_g1_ParamLimits

0xef96,	// (0x0002f07c) lc0_uni_indicator_pane_g1

0xb32e,	// (0x0002b414) lc0_stat_clock_pane_t1

0x080d,	// (0x000208f3) main_ai5_pane

0xb33c,	// (0x0002b422) ai5_sk_pane_ParamLimits

0xb33c,	// (0x0002b422) ai5_sk_pane

0xefa8,	// (0x0002f08e) cell_ai5_widget_pane_ParamLimits

0xefa8,	// (0x0002f08e) cell_ai5_widget_pane

0xb349,	// (0x0002b42f) aid_size_cell_widget_grid

0xb35b,	// (0x0002b441) bg_ai5_widget_pane_ParamLimits

0xb35b,	// (0x0002b441) bg_ai5_widget_pane

0xf01d,	// (0x0002f103) cell_ai5_widget_pane_g2

0xf02d,	// (0x0002f113) cell_ai5_widget_pane_g3

0xf04c,	// (0x0002f132) cell_ai5_widget_pane_g4

0xf058,	// (0x0002f13e) cell_ai5_widget_pane_g5

0xf064,	// (0x0002f14a) cell_ai5_widget_pane_g6

0xf070,	// (0x0002f156) cell_ai5_widget_pane_g7

0xf0b8,	// (0x0002f19e) cell_ai5_widget_pane_t1_ParamLimits

0xf0b8,	// (0x0002f19e) cell_ai5_widget_pane_t1

0xf0d5,	// (0x0002f1bb) cell_ai5_widget_pane_t2_ParamLimits

0xf0d5,	// (0x0002f1bb) cell_ai5_widget_pane_t2

0xf0ed,	// (0x0002f1d3) cell_ai5_widget_pane_t3_ParamLimits

0xf0ed,	// (0x0002f1d3) cell_ai5_widget_pane_t3

0xf105,	// (0x0002f1eb) cell_ai5_widget_pane_t4_ParamLimits

0xf105,	// (0x0002f1eb) cell_ai5_widget_pane_t4

0xf11f,	// (0x0002f205) cell_ai5_widget_pane_t5_ParamLimits

0xf11f,	// (0x0002f205) cell_ai5_widget_pane_t5

0xb367,	// (0x0002b44d) cell_ai5_widget_pane_t6_ParamLimits

0xb367,	// (0x0002b44d) cell_ai5_widget_pane_t6

0xb379,	// (0x0002b45f) cell_ai5_widget_pane_t7_ParamLimits

0xb379,	// (0x0002b45f) cell_ai5_widget_pane_t7

0xf13e,	// (0x0002f224) cell_ai5_widget_pane_t8_ParamLimits

0xf13e,	// (0x0002f224) cell_ai5_widget_pane_t8

0x0009,

0xfe42,	// (0x0002ff28) cell_ai5_widget_pane_t_ParamLimits

0xfe42,	// (0x0002ff28) cell_ai5_widget_pane_t

0xf189,	// (0x0002f26f) grid_ai5_widget_pane

0x0e9d,	// (0x00020f83) highlight_cell_ai5_widget_pane_ParamLimits

0x0e9d,	// (0x00020f83) highlight_cell_ai5_widget_pane

0xf19d,	// (0x0002f283) ai5_sk_left_pane

0xf1a7,	// (0x0002f28d) ai5_sk_middle_pane

0xf1b1,	// (0x0002f297) ai5_sk_right_pane

0xb392,	// (0x0002b478) bg_ai5_widget_pane_g1_ParamLimits

0xb392,	// (0x0002b478) bg_ai5_widget_pane_g1

0xb39e,	// (0x0002b484) bg_ai5_widget_pane_g2_ParamLimits

0xb39e,	// (0x0002b484) bg_ai5_widget_pane_g2

0xb3aa,	// (0x0002b490) bg_ai5_widget_pane_g3_ParamLimits

0xb3aa,	// (0x0002b490) bg_ai5_widget_pane_g3

0xb3b6,	// (0x0002b49c) bg_ai5_widget_pane_g4_ParamLimits

0xb3b6,	// (0x0002b49c) bg_ai5_widget_pane_g4

0xb3c2,	// (0x0002b4a8) bg_ai5_widget_pane_g5_ParamLimits

0xb3c2,	// (0x0002b4a8) bg_ai5_widget_pane_g5

0xb3ce,	// (0x0002b4b4) bg_ai5_widget_pane_g6_ParamLimits

0xb3ce,	// (0x0002b4b4) bg_ai5_widget_pane_g6

0xb3da,	// (0x0002b4c0) bg_ai5_widget_pane_g7_ParamLimits

0xb3da,	// (0x0002b4c0) bg_ai5_widget_pane_g7

0xb3e6,	// (0x0002b4cc) bg_ai5_widget_pane_g8_ParamLimits

0xb3e6,	// (0x0002b4cc) bg_ai5_widget_pane_g8

0xb3f2,	// (0x0002b4d8) bg_ai5_widget_pane_g9_ParamLimits

0xb3f2,	// (0x0002b4d8) bg_ai5_widget_pane_g9

0x0008,

0xfe57,	// (0x0002ff3d) bg_ai5_widget_pane_g_ParamLimits

0xfe57,	// (0x0002ff3d) bg_ai5_widget_pane_g

0xb424,	// (0x0002b50a) cell_shortcut_ai5_widget_pane_ParamLimits

0xb424,	// (0x0002b50a) cell_shortcut_ai5_widget_pane

0x0965,	// (0x00020a4b) bg_cell_shortcut_ai5_widget_pane

0xb430,	// (0x0002b516) cell_grid_ai5_widget_pane_g1

0xb439,	// (0x0002b51f) highlight_cell_shortcut_ai5_widget_pane

0x1f2d,	// (0x00022013) ai5_sk_left_pane_g1

0xb441,	// (0x0002b527) ai5_sk_left_pane_g2

0xb449,	// (0x0002b52f) ai5_sk_left_pane_g3

0xb451,	// (0x0002b537) ai5_sk_left_pane_g4

0x0003,

0xfe6a,	// (0x0002ff50) ai5_sk_left_pane_g

0xb459,	// (0x0002b53f) ai5_sk_left_pane_t1

0x1f25,	// (0x0002200b) ai5_sk_right_pane_g1

0xb467,	// (0x0002b54d) ai5_sk_right_pane_g2

0xb46f,	// (0x0002b555) ai5_sk_right_pane_g3

0xb477,	// (0x0002b55d) ai5_sk_right_pane_g4

0x0003,

0xfe73,	// (0x0002ff59) ai5_sk_right_pane_g

0xb47f,	// (0x0002b565) ai5_sk_right_pane_t1

0x1f25,	// (0x0002200b) ai5_sk_middle_pane_g1

0x1f2d,	// (0x00022013) ai5_sk_middle_pane_g2

0x1f45,	// (0x0002202b) ai5_sk_middle_pane_g3

0xb46f,	// (0x0002b555) ai5_sk_middle_pane_g4

0xb449,	// (0x0002b52f) ai5_sk_middle_pane_g5

0xb48d,	// (0x0002b573) ai5_sk_middle_pane_g6

0xf1bb,	// (0x0002f2a1) ai5_sk_middle_pane_g7

0x0006,

0xfe7c,	// (0x0002ff62) ai5_sk_middle_pane_g

0x469a,	// (0x00024780) aid_touch_area_size_lc0_ParamLimits

0x469a,	// (0x00024780) aid_touch_area_size_lc0

0xe29c,	// (0x0002e382) cell_hwr_candidate_pane_t1_ParamLimits

0x1d76,	// (0x00021e5c) aid_touch_navi_pane

0x48ac,	// (0x00024992) status_dt_navi_pane_ParamLimits

0x48ac,	// (0x00024992) status_dt_navi_pane

0x48b9,	// (0x0002499f) status_dt_sta_pane_ParamLimits

0x48b9,	// (0x0002499f) status_dt_sta_pane

0xf1c3,	// (0x0002f2a9) dt_sta_controll_pane

0xf1d0,	// (0x0002f2b6) dt_sta_indi_pane

0xf1e1,	// (0x0002f2c7) dt_sta_title_pane

0x0a5c,	// (0x00020b42) bg_dt_sta_indi_pane_ParamLimits

0x0a5c,	// (0x00020b42) bg_dt_sta_indi_pane

0xf1f4,	// (0x0002f2da) dt_sta_battery_pane

0xf1fc,	// (0x0002f2e2) dt_sta_indi_pane_g1

0xf205,	// (0x0002f2eb) dt_sta_indi_pane_g2

0xf20e,	// (0x0002f2f4) dt_sta_indi_pane_g3

0x0002,

0xfe8b,	// (0x0002ff71) dt_sta_indi_pane_g

0xf217,	// (0x0002f2fd) dt_sta_signal_pane

0x0e9d,	// (0x00020f83) bg_dt_sta_title_pane_ParamLimits

0x0e9d,	// (0x00020f83) bg_dt_sta_title_pane

0xf220,	// (0x0002f306) dt_sta_title_pane_g1

0xf228,	// (0x0002f30e) dt_sta_title_pane_t1_ParamLimits

0xf228,	// (0x0002f30e) dt_sta_title_pane_t1

0x080d,	// (0x000208f3) bg_dt_sta_control_pane

0xf23d,	// (0x0002f323) dt_sta_controll_pane_g1

0xf246,	// (0x0002f32c) bg_dt_sta_title_pane_g1

0xf24f,	// (0x0002f335) bg_dt_sta_title_pane_g2

0xf258,	// (0x0002f33e) bg_dt_sta_title_pane_g3

0x0002,

0xfe92,	// (0x0002ff78) bg_dt_sta_title_pane_g

0x6ca2,	// (0x00026d88) bg_dt_sta_indi_pane_g1

0xf261,	// (0x0002f347) dt_sta_signal_pane_g1

0xf269,	// (0x0002f34f) dt_sta_signal_pane_g2

0x0001,

0xfe99,	// (0x0002ff7f) dt_sta_signal_pane_g

0xb495,	// (0x0002b57b) dt_sta_battery_pane_g1

0xb49e,	// (0x0002b584) dt_sta_battery_pane_t1

0x6ca2,	// (0x00026d88) bg_dt_sta_control_pane_g1

0x15d7,	// (0x000216bd) fep_china_uni_eep_pane

0x15df,	// (0x000216c5) fep_china_uni_entry_pane_ParamLimits

0x15ef,	// (0x000216d5) popup_fep_china_uni_window_g1_ParamLimits

0x15ff,	// (0x000216e5) popup_fep_china_uni_window_g2_ParamLimits

0x15ff,	// (0x000216e5) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0002f820) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0002f820) popup_fep_china_uni_window_g

0xb4ad,	// (0x0002b593) fep_china_uni_eep_pane_g1

0xb4b5,	// (0x0002b59b) fep_china_uni_eep_pane_t1

0xb2fb,	// (0x0002b3e1) aid_touch_area_size_smil_player

0x1e14,	// (0x00021efa) lc0_clock_pane

0x1e4d,	// (0x00021f33) status_pane_g5_ParamLimits

0x1e4d,	// (0x00021f33) status_pane_g5

0x43bc,	// (0x000244a2) popup_keymap_window

0x1e2d,	// (0x00021f13) status_icon_pane

0xf02d,	// (0x0002f113) cell_ai5_widget_pane_g3_ParamLimits

0xf04c,	// (0x0002f132) cell_ai5_widget_pane_g4_ParamLimits

0xf058,	// (0x0002f13e) cell_ai5_widget_pane_g5_ParamLimits

0xf07c,	// (0x0002f162) cell_ai5_widget_pane_g8_ParamLimits

0xf07c,	// (0x0002f162) cell_ai5_widget_pane_g8

0xf090,	// (0x0002f176) cell_ai5_widget_pane_g9_ParamLimits

0xf090,	// (0x0002f176) cell_ai5_widget_pane_g9

0xf0a4,	// (0x0002f18a) cell_ai5_widget_pane_g10_ParamLimits

0xf0a4,	// (0x0002f18a) cell_ai5_widget_pane_g10

0xb4c4,	// (0x0002b5aa) status_icon_pane_g1

0x080d,	// (0x000208f3) bg_popup_sub_pane_cp13

0xb4cc,	// (0x0002b5b2) popup_keymap_window_t1

0x41dd,	// (0x000242c3) control_pane_g6_ParamLimits

0x41dd,	// (0x000242c3) control_pane_g6

0x41d0,	// (0x000242b6) control_pane_g7_ParamLimits

0x41d0,	// (0x000242b6) control_pane_g7

0x41c3,	// (0x000242a9) control_pane_g8_ParamLimits

0x41c3,	// (0x000242a9) control_pane_g8

0xf1c3,	// (0x0002f2a9) dt_sta_controll_pane_ParamLimits

0xf1d0,	// (0x0002f2b6) dt_sta_indi_pane_ParamLimits

0xf1e1,	// (0x0002f2c7) dt_sta_title_pane_ParamLimits

0x0dee,	// (0x00020ed4) aid_size_touch_scroll_bar_cale

0xd41c,	// (0x0002d502) popup_discreet_window_ParamLimits

0xd41c,	// (0x0002d502) popup_discreet_window

0xd480,	// (0x0002d566) popup_sk_window

0x24c0,	// (0x000225a6) bg_popup_sub_pane_cp28_ParamLimits

0x24c0,	// (0x000225a6) bg_popup_sub_pane_cp28

0xb4da,	// (0x0002b5c0) popup_discreet_window_g1_ParamLimits

0xb4da,	// (0x0002b5c0) popup_discreet_window_g1

0xb4fa,	// (0x0002b5e0) popup_discreet_window_t1_ParamLimits

0xb4fa,	// (0x0002b5e0) popup_discreet_window_t1

0xb518,	// (0x0002b5fe) popup_discreet_window_t2_ParamLimits

0xb518,	// (0x0002b5fe) popup_discreet_window_t2

0x0002,

0xfe9e,	// (0x0002ff84) popup_discreet_window_t_ParamLimits

0xfe9e,	// (0x0002ff84) popup_discreet_window_t

0xf271,	// (0x0002f357) popup_sk_window_g1

0xf27a,	// (0x0002f360) popup_sk_window_g2

0x0001,

0xfea5,	// (0x0002ff8b) popup_sk_window_g

0xb578,	// (0x0002b65e) popup_sk_window_t1

0xb56a,	// (0x0002b650) popup_sk_window_t1_copy1

0xf01d,	// (0x0002f103) cell_ai5_widget_pane_g2_ParamLimits

0xf150,	// (0x0002f236) cell_ai5_widget_pane_t9_ParamLimits

0xf150,	// (0x0002f236) cell_ai5_widget_pane_t9

0x080d,	// (0x000208f3) main_fep_fshwr2_pane

0xf283,	// (0x0002f369) aid_fshwr2_btn_pane

0xf28b,	// (0x0002f371) aid_fshwr2_syb_pane

0xf293,	// (0x0002f379) aid_fshwr2_txt_pane

0xf29b,	// (0x0002f381) fshwr2_func_candi_pane

0xf2a3,	// (0x0002f389) fshwr2_hwr_syb_pane

0xf2ab,	// (0x0002f391) fshwr2_icf_pane

0x080d,	// (0x000208f3) fshwr2_icf_bg_pane

0xf2b3,	// (0x0002f399) fshwr2_icf_pane_t1_ParamLimits

0xf2b3,	// (0x0002f399) fshwr2_icf_pane_t1

0x6ca2,	// (0x00026d88) fshwr2_func_candi_pane_g1

0xb598,	// (0x0002b67e) fshwr2_func_candi_row_pane_ParamLimits

0xb598,	// (0x0002b67e) fshwr2_func_candi_row_pane

0xf2ca,	// (0x0002f3b0) cell_fshwr2_syb_pane_ParamLimits

0xf2ca,	// (0x0002f3b0) cell_fshwr2_syb_pane

0x6ed0,	// (0x00026fb6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6ed0,	// (0x00026fb6) fshwr2_hwr_syb_pane_g1

0x080d,	// (0x000208f3) bg_popup_call_pane_cp01

0xb5a9,	// (0x0002b68f) fshwr2_func_candi_cell_pane_ParamLimits

0xb5a9,	// (0x0002b68f) fshwr2_func_candi_cell_pane

0xb5d4,	// (0x0002b6ba) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb5d4,	// (0x0002b6ba) fshwr2_func_candi_cell_bg_pane

0xb5ee,	// (0x0002b6d4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb5ee,	// (0x0002b6d4) fshwr2_func_candi_cell_pane_g1

0xb60e,	// (0x0002b6f4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb60e,	// (0x0002b6f4) fshwr2_func_candi_cell_pane_t1

0x080d,	// (0x000208f3) bg_button_pane_cp08

0x1a07,	// (0x00021aed) cell_fshwr2_syb_bg_pane

0xf2e1,	// (0x0002f3c7) cell_fshwr2_syb_bg_pane_g1

0xf2e9,	// (0x0002f3cf) cell_fshwr2_syb_bg_pane_t1

0x0e9d,	// (0x00020f83) main_tmo_pane

0x892d,	// (0x00028a13) uni_indicator_pane_g1_ParamLimits

0x8942,	// (0x00028a28) uni_indicator_pane_g2_ParamLimits

0x8958,	// (0x00028a3e) uni_indicator_pane_g3_ParamLimits

0x5f3c,	// (0x00026022) uni_indicator_pane_g4_ParamLimits

0x5f3c,	// (0x00026022) uni_indicator_pane_g4

0x5f50,	// (0x00026036) uni_indicator_pane_g5_ParamLimits

0x5f50,	// (0x00026036) uni_indicator_pane_g5

0x5f64,	// (0x0002604a) uni_indicator_pane_g6_ParamLimits

0x5f64,	// (0x0002604a) uni_indicator_pane_g6

0xf932,	// (0x0002fa18) uni_indicator_pane_g_ParamLimits

0x950b,	// (0x000295f1) popup_tmo_note_window_ParamLimits

0x950b,	// (0x000295f1) popup_tmo_note_window

0x080d,	// (0x000208f3) fshwr2_bg_pane

0xb5ff,	// (0x0002b6e5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb5ff,	// (0x0002b6e5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaa,	// (0x0002ff90) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaa,	// (0x0002ff90) fshwr2_func_candi_cell_pane_g

0x6ca2,	// (0x00026d88) bg_popup_window_pane_cp01

0xb621,	// (0x0002b707) bg_popup_window_pane_g1_cp01

0xb62a,	// (0x0002b710) bg_popup_window_pane_cp22_ParamLimits

0xb62a,	// (0x0002b710) bg_popup_window_pane_cp22

0xb638,	// (0x0002b71e) listscroll_tmo_link_pane_ParamLimits

0xb638,	// (0x0002b71e) listscroll_tmo_link_pane

0xb678,	// (0x0002b75e) popup_tmo_note_window_g1_ParamLimits

0xb678,	// (0x0002b75e) popup_tmo_note_window_g1

0xb685,	// (0x0002b76b) tmo_note_info_pane_ParamLimits

0xb685,	// (0x0002b76b) tmo_note_info_pane

0xf2f8,	// (0x0002f3de) list_tmo_note_info_pane_g1_ParamLimits

0xf2f8,	// (0x0002f3de) list_tmo_note_info_pane_g1

0xb69f,	// (0x0002b785) list_tmo_note_info_pane_g2_ParamLimits

0xb69f,	// (0x0002b785) list_tmo_note_info_pane_g2

0x0001,

0xfeaf,	// (0x0002ff95) list_tmo_note_info_pane_g_ParamLimits

0xfeaf,	// (0x0002ff95) list_tmo_note_info_pane_g

0xb6bb,	// (0x0002b7a1) list_tmo_note_info_text_pane_ParamLimits

0xb6bb,	// (0x0002b7a1) list_tmo_note_info_text_pane

0xb6fd,	// (0x0002b7e3) list_tmo_link_pane

0xb70a,	// (0x0002b7f0) scroll_pane_cp20

0xb717,	// (0x0002b7fd) list_single_tmo_link_pane_ParamLimits

0xb717,	// (0x0002b7fd) list_single_tmo_link_pane

0xb727,	// (0x0002b80d) list_single_tmo_link_pane_t1

0xb735,	// (0x0002b81b) list_tmo_note_info_text_pane_t1_ParamLimits

0xb735,	// (0x0002b81b) list_tmo_note_info_text_pane_t1

0x0f6b,	// (0x00021051) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0f6b,	// (0x00021051) aid_size_touch_scroll_bar_cp01

0xcb5c,	// (0x0002cc42) aid_size_touch_slider_marker

0xd46c,	// (0x0002d552) popup_settings_window_ParamLimits

0xd46c,	// (0x0002d552) popup_settings_window

0xcd12,	// (0x0002cdf8) popup_candi_list_indi_window

0x1d76,	// (0x00021e5c) aid_touch_navi_pane_ParamLimits

0xe4bb,	// (0x0002e5a1) rs_clock_indi_pane

0xe4c4,	// (0x0002e5aa) sctrl_sk_bottom_pane_ParamLimits

0xe4d5,	// (0x0002e5bb) sctrl_sk_top_pane_ParamLimits

0xe5c1,	// (0x0002e6a7) popup_fep_tooltip_window

0xb349,	// (0x0002b42f) aid_size_cell_widget_grid_ParamLimits

0xf011,	// (0x0002f0f7) cell_ai5_widget_pane_g1_ParamLimits

0xf011,	// (0x0002f0f7) cell_ai5_widget_pane_g1

0xf064,	// (0x0002f14a) cell_ai5_widget_pane_g6_ParamLimits

0xf070,	// (0x0002f156) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2d,	// (0x0002ff13) cell_ai5_widget_pane_g_ParamLimits

0xfe2d,	// (0x0002ff13) cell_ai5_widget_pane_g

0xf174,	// (0x0002f25a) cell_ai5_widget_pane_t10_ParamLimits

0xf174,	// (0x0002f25a) cell_ai5_widget_pane_t10

0xf189,	// (0x0002f26f) grid_ai5_widget_pane_ParamLimits

0xb3fe,	// (0x0002b4e4) cell_contacts_ai5_widget_pane_ParamLimits

0xb3fe,	// (0x0002b4e4) cell_contacts_ai5_widget_pane

0xb52d,	// (0x0002b613) popup_discreet_window_t3_ParamLimits

0xb52d,	// (0x0002b613) popup_discreet_window_t3

0xb586,	// (0x0002b66c) popup_fshwr2_char_preview_window_ParamLimits

0xb586,	// (0x0002b66c) popup_fshwr2_char_preview_window

0xf30f,	// (0x0002f3f5) tmo_note_info_pane_t1

0xf324,	// (0x0002f40a) tmo_note_info_pane_t2

0xf339,	// (0x0002f41f) tmo_note_info_pane_t3

0xb6d9,	// (0x0002b7bf) tmo_note_info_pane_t4

0xb6eb,	// (0x0002b7d1) tmo_note_info_pane_t5

0x0004,

0xfeb4,	// (0x0002ff9a) tmo_note_info_pane_t

0xb6fd,	// (0x0002b7e3) list_tmo_link_pane_ParamLimits

0xb70a,	// (0x0002b7f0) scroll_pane_cp20_ParamLimits

0x080d,	// (0x000208f3) bg_popup_fep_char_preview_window_cp01

0xb74e,	// (0x0002b834) popup_fshwr2_char_preview_window_t1

0xb75c,	// (0x0002b842) popup_candi_list_indi_window_g1

0xb765,	// (0x0002b84b) bg_cell_contacts_ai5_widget_pane

0xb771,	// (0x0002b857) cell_contacts_ai5_widget_pane_g1

0xb785,	// (0x0002b86b) cell_contacts_ai5_widget_pane_g2

0xb794,	// (0x0002b87a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebf,	// (0x0002ffa5) cell_contacts_ai5_widget_pane_g

0xb7a7,	// (0x0002b88d) cell_contacts_ai5_widget_pane_t1

0x0e9d,	// (0x00020f83) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3b1,	// (0x0002f497) settings_container_pane

0x1a07,	// (0x00021aed) listscroll_set_pane_copy1

0x6688,	// (0x0002676e) scroll_pane_cp121_copy1

0xb7bc,	// (0x0002b8a2) set_content_pane_copy1

0xb7c4,	// (0x0002b8aa) aid_height_set_list_copy1_ParamLimits

0xb7c4,	// (0x0002b8aa) aid_height_set_list_copy1

0x60fd,	// (0x000261e3) aid_size_parent_copy1_ParamLimits

0x60fd,	// (0x000261e3) aid_size_parent_copy1

0xb7d0,	// (0x0002b8b6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb7d0,	// (0x0002b8b6) button_value_adjust_pane_cp6_copy1

0x13af,	// (0x00021495) list_highlight_pane_cp2_copy1_ParamLimits

0x13af,	// (0x00021495) list_highlight_pane_cp2_copy1

0xf3bd,	// (0x0002f4a3) list_set_pane_copy1_ParamLimits

0xf3bd,	// (0x0002f4a3) list_set_pane_copy1

0xf34e,	// (0x0002f434) main_pane_set_t1_copy1_ParamLimits

0xf34e,	// (0x0002f434) main_pane_set_t1_copy1

0xf388,	// (0x0002f46e) main_pane_set_t2_copy1_ParamLimits

0xf388,	// (0x0002f46e) main_pane_set_t2_copy1

0xb7e4,	// (0x0002b8ca) main_pane_set_t3_copy1

0xb7f2,	// (0x0002b8d8) main_pane_set_t4_copy1

0xf3a5,	// (0x0002f48b) set_content_pane_g1_copy1_ParamLimits

0xf3a5,	// (0x0002f48b) set_content_pane_g1_copy1

0xb800,	// (0x0002b8e6) setting_code_pane_copy1

0xb808,	// (0x0002b8ee) setting_slider_graphic_pane_copy1

0xb808,	// (0x0002b8ee) setting_slider_pane_copy1

0xb808,	// (0x0002b8ee) setting_text_pane_copy1

0xb808,	// (0x0002b8ee) setting_volume_pane_copy1

0xb810,	// (0x0002b8f6) settings_code_pane_cp2_copy1

0xb818,	// (0x0002b8fe) settings_code_pane_cp_copy1_ParamLimits

0xb818,	// (0x0002b8fe) settings_code_pane_cp_copy1

0xf44b,	// (0x0002f531) volume_set_pane_copy1

0xf453,	// (0x0002f539) volume_set_pane_g10_copy1

0xf45b,	// (0x0002f541) volume_set_pane_g1_copy1

0xf463,	// (0x0002f549) volume_set_pane_g2_copy1

0xf46b,	// (0x0002f551) volume_set_pane_g3_copy1

0xf473,	// (0x0002f559) volume_set_pane_g4_copy1

0xf47b,	// (0x0002f561) volume_set_pane_g5_copy1

0xf483,	// (0x0002f569) volume_set_pane_g6_copy1

0xf48b,	// (0x0002f571) volume_set_pane_g7_copy1

0xf493,	// (0x0002f579) volume_set_pane_g8_copy1

0xf49b,	// (0x0002f581) volume_set_pane_g9_copy1

0x08fd,	// (0x000209e3) bg_set_opt_pane_cp_copy1_ParamLimits

0x08fd,	// (0x000209e3) bg_set_opt_pane_cp_copy1

0x090b,	// (0x000209f1) setting_slider_pane_t1_copy1_ParamLimits

0x090b,	// (0x000209f1) setting_slider_pane_t1_copy1

0xb82c,	// (0x0002b912) setting_slider_pane_t2_copy1_ParamLimits

0xb82c,	// (0x0002b912) setting_slider_pane_t2_copy1

0xb845,	// (0x0002b92b) setting_slider_pane_t3_copy1_ParamLimits

0xb845,	// (0x0002b92b) setting_slider_pane_t3_copy1

0x0921,	// (0x00020a07) slider_set_pane_copy1_ParamLimits

0x0921,	// (0x00020a07) slider_set_pane_copy1

0x0ef8,	// (0x00020fde) set_opt_bg_pane_g1_copy2

0x0f00,	// (0x00020fe6) set_opt_bg_pane_g2_copy2

0xb85c,	// (0x0002b942) set_opt_bg_pane_g3_copy2

0x0f10,	// (0x00020ff6) set_opt_bg_pane_g4_copy2

0x0f18,	// (0x00020ffe) set_opt_bg_pane_g5_copy2

0x0f20,	// (0x00021006) set_opt_bg_pane_g6_copy2

0xf4a3,	// (0x0002f589) set_opt_bg_pane_g7_copy2

0xb864,	// (0x0002b94a) set_opt_bg_pane_g8_copy2

0xb86c,	// (0x0002b952) set_opt_bg_pane_g9_copy2

0x768a,	// (0x00027770) aid_size_touch_slider_mark_copy1_ParamLimits

0x768a,	// (0x00027770) aid_size_touch_slider_mark_copy1

0x610f,	// (0x000261f5) slider_set_pane_g1_copy1

0x6118,	// (0x000261fe) slider_set_pane_g2_copy1

0x769e,	// (0x00027784) slider_set_pane_g3_copy1_ParamLimits

0x769e,	// (0x00027784) slider_set_pane_g3_copy1

0x76b2,	// (0x00027798) slider_set_pane_g4_copy1_ParamLimits

0x76b2,	// (0x00027798) slider_set_pane_g4_copy1

0x76ca,	// (0x000277b0) slider_set_pane_g5_copy1_ParamLimits

0x76ca,	// (0x000277b0) slider_set_pane_g5_copy1

0x769e,	// (0x00027784) slider_set_pane_g6_copy1_ParamLimits

0x769e,	// (0x00027784) slider_set_pane_g6_copy1

0xf4ab,	// (0x0002f591) slider_set_pane_g7_copy1_ParamLimits

0xf4ab,	// (0x0002f591) slider_set_pane_g7_copy1

0x0899,	// (0x0002097f) bg_set_opt_pane_cp2_copy1

0x0937,	// (0x00020a1d) setting_slider_graphic_pane_g1_copy1

0xf4c1,	// (0x0002f5a7) setting_slider_graphic_pane_t1_copy1

0xf4d0,	// (0x0002f5b6) setting_slider_graphic_pane_t2_copy1

0xf4df,	// (0x0002f5c5) slider_set_pane_cp_copy1

0xb87c,	// (0x0002b962) input_focus_pane_cp1_copy1

0xb885,	// (0x0002b96b) list_set_text_pane_copy1

0xb88d,	// (0x0002b973) setting_text_pane_g1_copy1

0xd2b3,	// (0x0002d399) set_text_pane_t1_copy1

0xb87c,	// (0x0002b962) input_focus_pane_cp2_copy1

0xb88d,	// (0x0002b973) setting_code_pane_g1_copy1

0xb896,	// (0x0002b97c) setting_code_pane_t1_copy1

0xf4e7,	// (0x0002f5cd) list_set_graphic_pane_copy1

0x0899,	// (0x0002097f) bg_set_opt_pane_cp4_copy1

0xb8a4,	// (0x0002b98a) list_set_graphic_pane_g1_copy1_ParamLimits

0xb8a4,	// (0x0002b98a) list_set_graphic_pane_g1_copy1

0xb8b0,	// (0x0002b996) list_set_graphic_pane_g2_copy1

0x1782,	// (0x00021868) list_set_graphic_pane_t1_copy1_ParamLimits

0x1782,	// (0x00021868) list_set_graphic_pane_t1_copy1

0x6ca2,	// (0x00026d88) rs_clock_indi_pane_g1

0xb8b8,	// (0x0002b99e) rs_clock_indi_pane_t1

0xb8c6,	// (0x0002b9ac) rs_indi_pane

0xb8ce,	// (0x0002b9b4) rs_indi_pane_g1

0xb8d7,	// (0x0002b9bd) rs_indi_pane_g2

0xb75c,	// (0x0002b842) rs_indi_pane_g3

0x0002,

0xfec6,	// (0x0002ffac) rs_indi_pane_g

0x1a07,	// (0x00021aed) bg_popup_preview_window_pane_cp03

0xb8e0,	// (0x0002b9c6) popup_fep_tooltip_window_t1

0x75e5,	// (0x000276cb) popup_note2_window_g2_ParamLimits

0x75e5,	// (0x000276cb) popup_note2_window_g2

0x0001,

0xfc66,	// (0x0002fd4c) popup_note2_window_g_ParamLimits

0xfc66,	// (0x0002fd4c) popup_note2_window_g

0x8719,	// (0x000287ff) bg_popup_sub_pane_cp11_ParamLimits

0x8726,	// (0x0002880c) cell_ai3_links_pane_g1_ParamLimits

0x873d,	// (0x00028823) cell_ai3_links_pane_t1

0xd2b3,	// (0x0002d399) set_text_pane_t1_copy1_ParamLimits

0x192e,	// (0x00021a14) cell_graphic_popup_pane_cp2_ParamLimits

0x192e,	// (0x00021a14) cell_graphic_popup_pane_cp2

0xb8ee,	// (0x0002b9d4) cell_graphic_popup_pane_g1_cp2

0x0c9d,	// (0x00020d83) cell_graphic_popup_pane_g2_cp2

0xb8f6,	// (0x0002b9dc) cell_graphic_popup_pane_g3_cp2

0xb8fe,	// (0x0002b9e4) cell_graphic_popup_pane_t2_cp2

0x0cae,	// (0x00020d94) grid_highlight_pane_cp3_cp2

0x11de,	// (0x000212c4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0e9d,	// (0x00020f83) main_tmo_pane_ParamLimits

0x9503,	// (0x000295e9) popup_tmo_big_image_note_window

0xf001,	// (0x0002f0e7) cell_ai5_widget_list_pane

0xf009,	// (0x0002f0ef) cell_ai5_widget_lrg_icon_pane

0xf30f,	// (0x0002f3f5) tmo_note_info_pane_t1_ParamLimits

0xf324,	// (0x0002f40a) tmo_note_info_pane_t2_ParamLimits

0xf339,	// (0x0002f41f) tmo_note_info_pane_t3_ParamLimits

0xb6d9,	// (0x0002b7bf) tmo_note_info_pane_t4_ParamLimits

0xb6eb,	// (0x0002b7d1) tmo_note_info_pane_t5_ParamLimits

0xfeb4,	// (0x0002ff9a) tmo_note_info_pane_t_ParamLimits

0xf3b1,	// (0x0002f497) settings_container_pane_ParamLimits

0xb874,	// (0x0002b95a) indicator_popup_pane_cp5

0xb874,	// (0x0002b95a) indicator_popup_pane_cp6

0xf4e7,	// (0x0002f5cd) list_set_graphic_pane_copy1_ParamLimits

0x080d,	// (0x000208f3) bg_popup_window_pane_cp23

0xb90c,	// (0x0002b9f2) popup_tmo_big_image_note_window_g1

0xb915,	// (0x0002b9fb) popup_tmo_big_image_note_window_t1

0xb923,	// (0x0002ba09) popup_tmo_big_image_note_window_t2

0xb931,	// (0x0002ba17) popup_tmo_big_image_note_window_t3

0x0002,

0xfecd,	// (0x0002ffb3) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0002f5e1) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0002f5e9) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0002f5f7) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0002f5f7) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0002f610) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0002f610) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0002f61d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0002f61d) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0002f635) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0002f635) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed4,	// (0x0002ffba) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed4,	// (0x0002ffba) cell_ai5_widget_list_row_pane_t

0x080d,	// (0x000208f3) main_fep_vtchi_ss_pane

0xb93f,	// (0x0002ba25) popup_fep_char_pre_window

0xb947,	// (0x0002ba2d) popup_fep_ituss_window

0xb964,	// (0x0002ba4a) popup_fep_vkbss_window

0xb983,	// (0x0002ba69) grid_vkbss_keypad_pane_ParamLimits

0xb983,	// (0x0002ba69) grid_vkbss_keypad_pane

0xb993,	// (0x0002ba79) ituss_keypad_pane

0xb9ac,	// (0x0002ba92) aid_vkbss_key_offset_ParamLimits

0xb9ac,	// (0x0002ba92) aid_vkbss_key_offset

0xb9b8,	// (0x0002ba9e) cell_vkbss_key_pane_ParamLimits

0xb9b8,	// (0x0002ba9e) cell_vkbss_key_pane

0xb9ce,	// (0x0002bab4) bg_cell_vkbss_key_g1_ParamLimits

0xb9ce,	// (0x0002bab4) bg_cell_vkbss_key_g1

0xb9da,	// (0x0002bac0) cell_vkbss_key_3p_pane_ParamLimits

0xb9da,	// (0x0002bac0) cell_vkbss_key_3p_pane

0xb9f4,	// (0x0002bada) cell_vkbss_key_g1_ParamLimits

0xb9f4,	// (0x0002bada) cell_vkbss_key_g1

0xba0e,	// (0x0002baf4) cell_vkbss_key_t1_ParamLimits

0xba0e,	// (0x0002baf4) cell_vkbss_key_t1

0xba39,	// (0x0002bb1f) cell_ituss_key_pane_ParamLimits

0xba39,	// (0x0002bb1f) cell_ituss_key_pane

0xba49,	// (0x0002bb2f) bg_cell_ituss_key_g1_ParamLimits

0xba49,	// (0x0002bb2f) bg_cell_ituss_key_g1

0xba55,	// (0x0002bb3b) cell_ituss_key_pane_g1_ParamLimits

0xba55,	// (0x0002bb3b) cell_ituss_key_pane_g1

0xba61,	// (0x0002bb47) cell_ituss_key_pane_g2_ParamLimits

0xba61,	// (0x0002bb47) cell_ituss_key_pane_g2

0x0001,

0xfed9,	// (0x0002ffbf) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x0002ffbf) cell_ituss_key_pane_g

0xba7a,	// (0x0002bb60) cell_ituss_key_t1_ParamLimits

0xba7a,	// (0x0002bb60) cell_ituss_key_t1

0xbaa8,	// (0x0002bb8e) cell_ituss_key_t2_ParamLimits

0xbaa8,	// (0x0002bb8e) cell_ituss_key_t2

0xbad9,	// (0x0002bbbf) cell_ituss_key_t3_ParamLimits

0xbad9,	// (0x0002bbbf) cell_ituss_key_t3

0xbb0a,	// (0x0002bbf0) cell_ituss_key_t4_ParamLimits

0xbb0a,	// (0x0002bbf0) cell_ituss_key_t4

0x0003,

0xfede,	// (0x0002ffc4) cell_ituss_key_t_ParamLimits

0xfede,	// (0x0002ffc4) cell_ituss_key_t

0xbb3b,	// (0x0002bc21) cell_vkbss_key_3p_pane_g1

0xbb43,	// (0x0002bc29) cell_vkbss_key_3p_pane_g2

0xbb4b,	// (0x0002bc31) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0002ffcd) cell_vkbss_key_3p_pane_g

0x080d,	// (0x000208f3) bg_popup_fep_char_preview_window_cp02

0xbb53,	// (0x0002bc39) popup_fep_char_pre_window_t1

0xeff7,	// (0x0002f0dd) main_ai5_sk_pane

0xb765,	// (0x0002b84b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb771,	// (0x0002b857) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb785,	// (0x0002b86b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb794,	// (0x0002b87a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebf,	// (0x0002ffa5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb7a7,	// (0x0002b88d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0e9d,	// (0x00020f83) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0002f647) main_ai5_sk_pane_g1

0x230a,	// (0x000223f0) popup_query_code_window_g1

0xb959,	// (0x0002ba3f) popup_fep_vkb_icf_pane

0xb96d,	// (0x0002ba53) popup_fep_vtchi_icf_pane

0x0e9d,	// (0x00020f83) bg_icf_pane

0xbb71,	// (0x0002bc57) list_vkb_icf_pane

0x0e9d,	// (0x00020f83) bg_icf_pane_cp01

0x94c2,	// (0x000295a8) vtchi_icf_list_pane

0xbb91,	// (0x0002bc77) list_vkb_icf_pane_t1_ParamLimits

0xbb91,	// (0x0002bc77) list_vkb_icf_pane_t1

0xbba8,	// (0x0002bc8e) vtchi_icf_list_pane_t1_ParamLimits

0xbba8,	// (0x0002bc8e) vtchi_icf_list_pane_t1

0xb947,	// (0x0002ba2d) popup_fep_ituss_window_ParamLimits

0xb96d,	// (0x0002ba53) popup_fep_vtchi_icf_pane_ParamLimits

0xb993,	// (0x0002ba79) ituss_keypad_pane_ParamLimits

0xb9a3,	// (0x0002ba89) ituss_sks_pane

0x0e9d,	// (0x00020f83) bg_icf_pane_ParamLimits

0xbb62,	// (0x0002bc48) icf_edit_indi_pane_ParamLimits

0xbb62,	// (0x0002bc48) icf_edit_indi_pane

0xbb71,	// (0x0002bc57) list_vkb_icf_pane_ParamLimits

0x0e9d,	// (0x00020f83) bg_icf_pane_cp01_ParamLimits

0xbb7d,	// (0x0002bc63) icf_edit_indi_pane_cp01_ParamLimits

0xbb7d,	// (0x0002bc63) icf_edit_indi_pane_cp01

0xbb89,	// (0x0002bc6f) vtchi_query_pane

0x6ed0,	// (0x00026fb6) icf_edit_indi_pane_g1_ParamLimits

0x6ed0,	// (0x00026fb6) icf_edit_indi_pane_g1

0xbbc1,	// (0x0002bca7) icf_edit_indi_pane_g2_ParamLimits

0xbbc1,	// (0x0002bca7) icf_edit_indi_pane_g2

0x0001,

0xfeee,	// (0x0002ffd4) icf_edit_indi_pane_g_ParamLimits

0xfeee,	// (0x0002ffd4) icf_edit_indi_pane_g

0xbbcd,	// (0x0002bcb3) icf_edit_indi_pane_t1

0xbbdb,	// (0x0002bcc1) bg_input_focus_pane_cp042

0xbbe4,	// (0x0002bcca) vtchi_button_pane

0xbbed,	// (0x0002bcd3) vtchi_query_pane_t1

0xbbfb,	// (0x0002bce1) vtchi_query_pane_t2

0xbc09,	// (0x0002bcef) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002ffd9) vtchi_query_pane_t

0x080d,	// (0x000208f3) bg_button_pane_cp13

0xbc17,	// (0x0002bcfd) vtchi_button_pane_g1

0x99da,	// (0x00029ac0) ituss_sks_pane_g1

0xbc1f,	// (0x0002bd05) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002ffe0) ituss_sks_pane_g

0xbc28,	// (0x0002bd0e) ituss_sks_pane_t1

0xbc36,	// (0x0002bd1c) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002ffe5) ituss_sks_pane_t

0x6957,	// (0x00026a3d) indicator_nsta_pane_cp_g1

0x6960,	// (0x00026a46) indicator_nsta_pane_cp_g2

0x6968,	// (0x00026a4e) indicator_nsta_pane_cp_g3

0x6970,	// (0x00026a56) indicator_nsta_pane_cp_g4

0x6978,	// (0x00026a5e) indicator_nsta_pane_cp_g5

0x6980,	// (0x00026a66) indicator_nsta_pane_cp_g6

0x0005,

0xfab0,	// (0x0002fb96) indicator_nsta_pane_cp_g

0xece0,	// (0x0002edc6) cell_graphic2_pane_t2_ParamLimits

0xece0,	// (0x0002edc6) cell_graphic2_pane_t2

0x0001,

0xfdb6,	// (0x0002fe9c) cell_graphic2_pane_t_ParamLimits

0xfdb6,	// (0x0002fe9c) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large
