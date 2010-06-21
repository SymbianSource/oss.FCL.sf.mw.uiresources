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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004245b };

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
0x64be,	// (0x00048919) Screen

0x64ca,	// (0x00048925) application_window_ParamLimits

0x64ca,	// (0x00048925) application_window

0x09fc,	// (0x00042e57) screen_g1

0x6526,	// (0x00048981) area_bottom_pane_ParamLimits

0x6526,	// (0x00048981) area_bottom_pane

0x65e6,	// (0x00048a41) area_top_pane_ParamLimits

0x65e6,	// (0x00048a41) area_top_pane

0x667a,	// (0x00048ad5) main_pane_ParamLimits

0x667a,	// (0x00048ad5) main_pane

0x0a06,	// (0x00042e61) misc_graphics

0x9865,	// (0x0004bcc0) battery_pane_ParamLimits

0x9865,	// (0x0004bcc0) battery_pane

0xa533,	// (0x0004c98e) bg_status_flat_pane_g8

0xa53b,	// (0x0004c996) bg_status_flat_pane_g9

0x992d,	// (0x0004bd88) context_pane_ParamLimits

0x992d,	// (0x0004bd88) context_pane

0x9a43,	// (0x0004be9e) navi_pane_ParamLimits

0x9a43,	// (0x0004be9e) navi_pane

0x9ac7,	// (0x0004bf22) signal_pane_ParamLimits

0x9ac7,	// (0x0004bf22) signal_pane

0x0008,

0xf874,	// (0x00051ccf) bg_status_flat_pane_g

0x9b34,	// (0x0004bf8f) status_pane_g1_ParamLimits

0x9b34,	// (0x0004bf8f) status_pane_g1

0x9b48,	// (0x0004bfa3) status_pane_g2_ParamLimits

0x9b48,	// (0x0004bfa3) status_pane_g2

0x9b54,	// (0x0004bfaf) status_pane_g3_ParamLimits

0x9b54,	// (0x0004bfaf) status_pane_g3

0x0004,

0xf79b,	// (0x00051bf6) status_pane_g_ParamLimits

0xf79b,	// (0x00051bf6) status_pane_g

0x9b88,	// (0x0004bfe3) title_pane_ParamLimits

0x9b88,	// (0x0004bfe3) title_pane

0x9bc5,	// (0x0004c020) uni_indicator_pane_ParamLimits

0x9bc5,	// (0x0004c020) uni_indicator_pane

0x9795,	// (0x0004bbf0) bg_list_pane_ParamLimits

0x9795,	// (0x0004bbf0) bg_list_pane

0x7ad4,	// (0x00049f2f) find_pane

0x97b5,	// (0x0004bc10) listscroll_app_pane_ParamLimits

0x97b5,	// (0x0004bc10) listscroll_app_pane

0x97c1,	// (0x0004bc1c) listscroll_form_pane

0x7adc,	// (0x00049f37) listscroll_gen_pane_ParamLimits

0x7adc,	// (0x00049f37) listscroll_gen_pane

0x7af0,	// (0x00049f4b) listscroll_set_pane

0x701d,	// (0x00049478) main_idle_act_pane

0x4ca9,	// (0x00047104) main_idle_trad_pane

0x4ca9,	// (0x00047104) main_list_empty_pane

0x97b5,	// (0x0004bc10) main_midp_pane

0x97db,	// (0x0004bc36) main_pane_g1_ParamLimits

0x97db,	// (0x0004bc36) main_pane_g1

0x7af8,	// (0x00049f53) popup_ai_message_window_ParamLimits

0x7af8,	// (0x00049f53) popup_ai_message_window

0x7b9c,	// (0x00049ff7) popup_fep_china_uni_window_ParamLimits

0x7b9c,	// (0x00049ff7) popup_fep_china_uni_window

0x7bf6,	// (0x0004a051) popup_fep_japan_candidate_window_ParamLimits

0x7bf6,	// (0x0004a051) popup_fep_japan_candidate_window

0x7c14,	// (0x0004a06f) popup_fep_japan_predictive_window_ParamLimits

0x7c14,	// (0x0004a06f) popup_fep_japan_predictive_window

0x7c44,	// (0x0004a09f) popup_find_window

0x7c51,	// (0x0004a0ac) popup_grid_graphic_window_ParamLimits

0x7c51,	// (0x0004a0ac) popup_grid_graphic_window

0x7c7b,	// (0x0004a0d6) popup_large_graphic_colour_window

0x7ca1,	// (0x0004a0fc) popup_menu_window_ParamLimits

0x7ca1,	// (0x0004a0fc) popup_menu_window

0x7e5d,	// (0x0004a2b8) popup_note_image_window

0x7e49,	// (0x0004a2a4) popup_note_wait_window_ParamLimits

0x7e49,	// (0x0004a2a4) popup_note_wait_window

0x7e49,	// (0x0004a2a4) popup_note_window_ParamLimits

0x7e49,	// (0x0004a2a4) popup_note_window

0x7eb3,	// (0x0004a30e) popup_query_code_window_ParamLimits

0x7eb3,	// (0x0004a30e) popup_query_code_window

0x7ec7,	// (0x0004a322) popup_query_data_code_window_ParamLimits

0x7ec7,	// (0x0004a322) popup_query_data_code_window

0x7ee4,	// (0x0004a33f) popup_query_data_window_ParamLimits

0x7ee4,	// (0x0004a33f) popup_query_data_window

0x7f00,	// (0x0004a35b) popup_query_sat_info_window_ParamLimits

0x7f00,	// (0x0004a35b) popup_query_sat_info_window

0x7f39,	// (0x0004a394) popup_snote_single_graphic_window_ParamLimits

0x7f39,	// (0x0004a394) popup_snote_single_graphic_window

0x7f39,	// (0x0004a394) popup_snote_single_text_window_ParamLimits

0x7f39,	// (0x0004a394) popup_snote_single_text_window

0x7f4e,	// (0x0004a3a9) popup_sub_window_general

0x807e,	// (0x0004a4d9) popup_window_general_ParamLimits

0x807e,	// (0x0004a4d9) popup_window_general

0x97e9,	// (0x0004bc44) power_save_pane

0x7966,	// (0x00049dc1) control_pane_g1_ParamLimits

0x7966,	// (0x00049dc1) control_pane_g1

0x798d,	// (0x00049de8) control_pane_g2_ParamLimits

0x798d,	// (0x00049de8) control_pane_g2

0x9758,	// (0x0004bbb3) control_pane_g3_ParamLimits

0x9758,	// (0x0004bbb3) control_pane_g3

0x0007,

0xf783,	// (0x00051bde) control_pane_g_ParamLimits

0xf783,	// (0x00051bde) control_pane_g

0x79d7,	// (0x00049e32) control_pane_t1_ParamLimits

0x79d7,	// (0x00049e32) control_pane_t1

0x7a2b,	// (0x00049e86) control_pane_t2_ParamLimits

0x7a2b,	// (0x00049e86) control_pane_t2

0x0002,

0xf794,	// (0x00051bef) control_pane_t_ParamLimits

0xf794,	// (0x00051bef) control_pane_t

0x967d,	// (0x0004bad8) navi_navi_volume_pane_cp1

0x9685,	// (0x0004bae0) status_small_icon_pane

0x968d,	// (0x0004bae8) status_small_pane_g1_ParamLimits

0x968d,	// (0x0004bae8) status_small_pane_g1

0x96c1,	// (0x0004bb1c) status_small_pane_g2_ParamLimits

0x96c1,	// (0x0004bb1c) status_small_pane_g2

0x96cd,	// (0x0004bb28) status_small_pane_g3_ParamLimits

0x96cd,	// (0x0004bb28) status_small_pane_g3

0x96d9,	// (0x0004bb34) status_small_pane_g4_ParamLimits

0x96d9,	// (0x0004bb34) status_small_pane_g4

0x96e5,	// (0x0004bb40) status_small_pane_g5_ParamLimits

0x96e5,	// (0x0004bb40) status_small_pane_g5

0x96f3,	// (0x0004bb4e) status_small_pane_g6_ParamLimits

0x96f3,	// (0x0004bb4e) status_small_pane_g6

0x0007,

0xf772,	// (0x00051bcd) status_small_pane_g_ParamLimits

0xf772,	// (0x00051bcd) status_small_pane_g

0x9722,	// (0x0004bb7d) status_small_pane_t1

0x9744,	// (0x0004bb9f) status_small_wait_pane_ParamLimits

0x9744,	// (0x0004bb9f) status_small_wait_pane

0x73f0,	// (0x0004984b) aid_levels_signal_ParamLimits

0x73f0,	// (0x0004984b) aid_levels_signal

0x7402,	// (0x0004985d) signal_pane_g1_ParamLimits

0x7402,	// (0x0004985d) signal_pane_g1

0x7417,	// (0x00049872) signal_pane_g2_ParamLimits

0x7417,	// (0x00049872) signal_pane_g2

0x0003,

0xf703,	// (0x00051b5e) signal_pane_g_ParamLimits

0xf703,	// (0x00051b5e) signal_pane_g

0x129f,	// (0x000436fa) context_pane_g1

0x68bb,	// (0x00048d16) title_pane_g1

0x68e5,	// (0x00048d40) title_pane_t1

0x0a1c,	// (0x00042e77) title_pane_t2

0x0a42,	// (0x00042e9d) title_pane_t3

0x0002,

0xf557,	// (0x000519b2) title_pane_t

0x9bdd,	// (0x0004c038) aid_levels_battery_ParamLimits

0x9bdd,	// (0x0004c038) aid_levels_battery

0x9bf1,	// (0x0004c04c) battery_pane_g1_ParamLimits

0x9bf1,	// (0x0004c04c) battery_pane_g1

0x9c07,	// (0x0004c062) battery_pane_g2_ParamLimits

0x9c07,	// (0x0004c062) battery_pane_g2

0x0001,

0xf7a6,	// (0x00051c01) battery_pane_g_ParamLimits

0xf7a6,	// (0x00051c01) battery_pane_g

0xae57,	// (0x0004d2b2) uni_indicator_pane_g1

0xae6a,	// (0x0004d2c5) uni_indicator_pane_g2

0xae7c,	// (0x0004d2d7) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00051d77) uni_indicator_pane_g

0x4b49,	// (0x00046fa4) navi_icon_pane_ParamLimits

0x4b49,	// (0x00046fa4) navi_icon_pane

0x4a9e,	// (0x00046ef9) navi_midp_pane

0x4b65,	// (0x00046fc0) navi_navi_pane

0x4b6f,	// (0x00046fca) navi_text_pane_ParamLimits

0x4b6f,	// (0x00046fca) navi_text_pane

0x09fc,	// (0x00042e57) status_small_wait_pane_g1

0x0c93,	// (0x000430ee) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00051d72) status_small_wait_pane_g

0xab7e,	// (0x0004cfd9) navi_navi_icon_text_pane

0xab86,	// (0x0004cfe1) navi_navi_pane_g1_ParamLimits

0xab86,	// (0x0004cfe1) navi_navi_pane_g1

0xab98,	// (0x0004cff3) navi_navi_pane_g2_ParamLimits

0xab98,	// (0x0004cff3) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00051d40) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00051d40) navi_navi_pane_g

0xabaa,	// (0x0004d005) navi_navi_tabs_pane

0xabb3,	// (0x0004d00e) navi_navi_text_pane

0xab7e,	// (0x0004cfd9) navi_navi_volume_pane

0xab5a,	// (0x0004cfb5) navi_text_pane_t1

0xab4e,	// (0x0004cfa9) navi_icon_pane_g1

0xaaa1,	// (0x0004cefc) navi_navi_text_pane_t1

0x8334,	// (0x0004a78f) navi_navi_volume_pane_g1

0x833c,	// (0x0004a797) volume_small_pane

0xaa07,	// (0x0004ce62) navi_navi_icon_text_pane_g1

0xaa0f,	// (0x0004ce6a) navi_navi_icon_text_pane_t1

0x4b65,	// (0x00046fc0) navi_tabs_2_long_pane

0x4b65,	// (0x00046fc0) navi_tabs_2_pane

0x4b65,	// (0x00046fc0) navi_tabs_3_long_pane

0x4b65,	// (0x00046fc0) navi_tabs_3_pane

0x4b65,	// (0x00046fc0) navi_tabs_4_pane

0x8314,	// (0x0004a76f) tabs_2_active_pane_ParamLimits

0x8314,	// (0x0004a76f) tabs_2_active_pane

0x8324,	// (0x0004a77f) tabs_2_passive_pane_ParamLimits

0x8324,	// (0x0004a77f) tabs_2_passive_pane

0x82e2,	// (0x0004a73d) tabs_3_active_pane_ParamLimits

0x82e2,	// (0x0004a73d) tabs_3_active_pane

0x82f2,	// (0x0004a74d) tabs_3_passive_pane_ParamLimits

0x82f2,	// (0x0004a74d) tabs_3_passive_pane

0x8303,	// (0x0004a75e) tabs_3_passive_pane_cp_ParamLimits

0x8303,	// (0x0004a75e) tabs_3_passive_pane_cp

0x829e,	// (0x0004a6f9) tabs_4_active_pane_ParamLimits

0x829e,	// (0x0004a6f9) tabs_4_active_pane

0x82af,	// (0x0004a70a) tabs_4_passive_pane_ParamLimits

0x82af,	// (0x0004a70a) tabs_4_passive_pane

0x82c0,	// (0x0004a71b) tabs_4_passive_pane_cp_ParamLimits

0x82c0,	// (0x0004a71b) tabs_4_passive_pane_cp

0x82d1,	// (0x0004a72c) tabs_4_passive_pane_cp2_ParamLimits

0x82d1,	// (0x0004a72c) tabs_4_passive_pane_cp2

0x827a,	// (0x0004a6d5) tabs_2_long_active_pane_ParamLimits

0x827a,	// (0x0004a6d5) tabs_2_long_active_pane

0x828c,	// (0x0004a6e7) tabs_2_long_passive_pane_ParamLimits

0x828c,	// (0x0004a6e7) tabs_2_long_passive_pane

0x8235,	// (0x0004a690) tabs_3_long_active_pane_ParamLimits

0x8235,	// (0x0004a690) tabs_3_long_active_pane

0x824e,	// (0x0004a6a9) tabs_3_long_passive_pane_ParamLimits

0x824e,	// (0x0004a6a9) tabs_3_long_passive_pane

0x8261,	// (0x0004a6bc) tabs_3_long_passive_pane_cp_ParamLimits

0x8261,	// (0x0004a6bc) tabs_3_long_passive_pane_cp

0x81db,	// (0x0004a636) volume_small_pane_g1

0x81e4,	// (0x0004a63f) volume_small_pane_g2

0x81ed,	// (0x0004a648) volume_small_pane_g3

0x81f6,	// (0x0004a651) volume_small_pane_g4

0x81ff,	// (0x0004a65a) volume_small_pane_g5

0x8208,	// (0x0004a663) volume_small_pane_g6

0x8211,	// (0x0004a66c) volume_small_pane_g7

0x821a,	// (0x0004a675) volume_small_pane_g8

0x8223,	// (0x0004a67e) volume_small_pane_g9

0x822c,	// (0x0004a687) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00051d0c) volume_small_pane_g

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp2_ParamLimits

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp2

0x694d,	// (0x00048da8) tabs_3_active_pane_g1

0x6955,	// (0x00048db0) tabs_3_active_pane_t1

0x0a62,	// (0x00042ebd) bg_passive_tab_pane_cp2_ParamLimits

0x0a62,	// (0x00042ebd) bg_passive_tab_pane_cp2

0x694d,	// (0x00048da8) tabs_3_passive_pane_g1

0x6955,	// (0x00048db0) tabs_3_passive_pane_t1

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp3_ParamLimits

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp3

0x6967,	// (0x00048dc2) tabs_4_active_pane_g1

0x696f,	// (0x00048dca) tabs_4_active_pane_t1

0x0a62,	// (0x00042ebd) bg_passive_tab_pane_cp3_ParamLimits

0x0a62,	// (0x00042ebd) bg_passive_tab_pane_cp3

0x6967,	// (0x00048dc2) tabs_4_1_passive_pane_g1

0x696f,	// (0x00048dca) tabs_4_1_passive_pane_t1

0x97b5,	// (0x0004bc10) list_highlight_pane_cp2

0xb0bf,	// (0x0004d51a) list_set_pane_ParamLimits

0xb0bf,	// (0x0004d51a) list_set_pane

0xb161,	// (0x0004d5bc) main_pane_set_t1_ParamLimits

0xb161,	// (0x0004d5bc) main_pane_set_t1

0xb181,	// (0x0004d5dc) main_pane_set_t2_ParamLimits

0xb181,	// (0x0004d5dc) main_pane_set_t2

0xb195,	// (0x0004d5f0) main_pane_set_t3_ParamLimits

0xb195,	// (0x0004d5f0) main_pane_set_t3

0xb1a7,	// (0x0004d602) main_pane_set_t4_ParamLimits

0xb1a7,	// (0x0004d602) main_pane_set_t4

0x0003,

0xf981,	// (0x00051ddc) main_pane_set_t_ParamLimits

0xf981,	// (0x00051ddc) main_pane_set_t

0xb1b9,	// (0x0004d614) setting_code_pane

0xb1c5,	// (0x0004d620) setting_slider_graphic_pane

0xb1c5,	// (0x0004d620) setting_slider_pane

0xb1c5,	// (0x0004d620) setting_text_pane

0xb1c5,	// (0x0004d620) setting_volume_pane

0x6981,	// (0x00048ddc) volume_set_pane

0x0a62,	// (0x00042ebd) bg_set_opt_pane_cp

0x6989,	// (0x00048de4) setting_slider_pane_t1

0x69a2,	// (0x00048dfd) setting_slider_pane_t2

0x69bc,	// (0x00048e17) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000519b9) setting_slider_pane_t

0x69d4,	// (0x00048e2f) slider_set_pane

0x0a06,	// (0x00042e61) bg_set_opt_pane_cp2

0x0a70,	// (0x00042ecb) setting_slider_graphic_pane_g1

0x69ea,	// (0x00048e45) setting_slider_graphic_pane_t1

0x69fa,	// (0x00048e55) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000519c0) setting_slider_graphic_pane_t

0x6a0a,	// (0x00048e65) slider_set_pane_cp

0x0a06,	// (0x00042e61) input_focus_pane_cp1

0xb07e,	// (0x0004d4d9) list_set_text_pane

0x09fc,	// (0x00042e57) setting_text_pane_g1

0x0a06,	// (0x00042e61) input_focus_pane_cp2

0x09fc,	// (0x00042e57) setting_code_pane_g1

0x0a79,	// (0x00042ed4) setting_code_pane_t1

0x566b,	// (0x00047ac6) set_text_pane_t1_ParamLimits

0x566b,	// (0x00047ac6) set_text_pane_t1

0x0e6c,	// (0x000432c7) set_opt_bg_pane_g1

0x0e74,	// (0x000432cf) set_opt_bg_pane_g2

0xb058,	// (0x0004d4b3) set_opt_bg_pane_g3

0x0e84,	// (0x000432df) set_opt_bg_pane_g4

0x0e8c,	// (0x000432e7) set_opt_bg_pane_g5

0x0e94,	// (0x000432ef) set_opt_bg_pane_g6

0xb062,	// (0x0004d4bd) set_opt_bg_pane_g7

0xb06a,	// (0x0004d4c5) set_opt_bg_pane_g8

0xb074,	// (0x0004d4cf) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00051dc9) set_opt_bg_pane_g

0xb04b,	// (0x0004d4a6) slider_set_pane_g1

0x83a9,	// (0x0004a804) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00051dba) slider_set_pane_g

0x8345,	// (0x0004a7a0) volume_set_pane_g1

0x834d,	// (0x0004a7a8) volume_set_pane_g2

0x8355,	// (0x0004a7b0) volume_set_pane_g3

0x835d,	// (0x0004a7b8) volume_set_pane_g4

0x8365,	// (0x0004a7c0) volume_set_pane_g5

0x836d,	// (0x0004a7c8) volume_set_pane_g6

0x8375,	// (0x0004a7d0) volume_set_pane_g7

0x837d,	// (0x0004a7d8) volume_set_pane_g8

0x8385,	// (0x0004a7e0) volume_set_pane_g9

0x838d,	// (0x0004a7e8) volume_set_pane_g10

0x0009,

0xf937,	// (0x00051d92) volume_set_pane_g

0x6a12,	// (0x00048e6d) indicator_pane_ParamLimits

0x6a12,	// (0x00048e6d) indicator_pane

0x6a1e,	// (0x00048e79) main_idle_pane_g2_ParamLimits

0x6a1e,	// (0x00048e79) main_idle_pane_g2

0x6a46,	// (0x00048ea1) main_pane_idle_g1_ParamLimits

0x6a46,	// (0x00048ea1) main_pane_idle_g1

0x0a87,	// (0x00042ee2) popup_clock_digital_analogue_window_ParamLimits

0x0a87,	// (0x00042ee2) popup_clock_digital_analogue_window

0x6a53,	// (0x00048eae) soft_indicator_pane_ParamLimits

0x6a53,	// (0x00048eae) soft_indicator_pane

0x6a5f,	// (0x00048eba) wallpaper_pane_ParamLimits

0x6a5f,	// (0x00048eba) wallpaper_pane

0x09fc,	// (0x00042e57) wallpaper_pane_g1

0x6a6b,	// (0x00048ec6) indicator_pane_g1_ParamLimits

0x6a6b,	// (0x00048ec6) indicator_pane_g1

0xb447,	// (0x0004d8a2) navi_navi_icon_text_pane_srt_g1

0x0ab5,	// (0x00042f10) soft_indicator_pane_t1

0x0acf,	// (0x00042f2a) aid_ps_area_pane

0x6a77,	// (0x00048ed2) aid_ps_clock_pane

0x0ae0,	// (0x00042f3b) aid_ps_indicator_pane

0x0aec,	// (0x00042f47) indicator_ps_pane_ParamLimits

0x0aec,	// (0x00042f47) indicator_ps_pane

0x0afb,	// (0x00042f56) power_save_pane_g1_ParamLimits

0x0afb,	// (0x00042f56) power_save_pane_g1

0x0b07,	// (0x00042f62) power_save_pane_g2_ParamLimits

0x0b07,	// (0x00042f62) power_save_pane_g2

0x64da,	// (0x00048935) aid_navinavi_width_pane

0x0acf,	// (0x00042f2a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000519c5) power_save_pane_g_ParamLimits

0xf56a,	// (0x000519c5) power_save_pane_g

0x0b15,	// (0x00042f70) power_save_pane_t1_ParamLimits

0x0b15,	// (0x00042f70) power_save_pane_t1

0x6a77,	// (0x00048ed2) aid_ps_clock_pane_ParamLimits

0x0ae0,	// (0x00042f3b) aid_ps_indicator_pane_ParamLimits

0x0b27,	// (0x00042f82) power_save_pane_t4_ParamLimits

0x0b27,	// (0x00042f82) power_save_pane_t4

0x0001,

0xf56f,	// (0x000519ca) power_save_pane_t_ParamLimits

0xf56f,	// (0x000519ca) power_save_pane_t

0x0b51,	// (0x00042fac) power_save_t3_ParamLimits

0x0b51,	// (0x00042fac) power_save_t3

0x0b3c,	// (0x00042f97) power_save_t2_ParamLimits

0x0b3c,	// (0x00042f97) power_save_t2

0x0b66,	// (0x00042fc1) indicator_ps_pane_g1

0x6a85,	// (0x00048ee0) ai_gene_pane_ParamLimits

0x6a85,	// (0x00048ee0) ai_gene_pane

0x6a91,	// (0x00048eec) ai_links_pane_ParamLimits

0x6a91,	// (0x00048eec) ai_links_pane

0x6a9d,	// (0x00048ef8) indicator_pane_cp1_ParamLimits

0x6a9d,	// (0x00048ef8) indicator_pane_cp1

0x6aa9,	// (0x00048f04) main_pane_idle_g1_cp_ParamLimits

0x6aa9,	// (0x00048f04) main_pane_idle_g1_cp

0x6ab5,	// (0x00048f10) popup_ai_links_title_window

0x6abe,	// (0x00048f19) soft_indicator_pane_cp1_ParamLimits

0x6abe,	// (0x00048f19) soft_indicator_pane_cp1

0xae45,	// (0x0004d2a0) ai_links_pane_g1

0xae4e,	// (0x0004d2a9) grid_ai_links_pane

0xae28,	// (0x0004d283) ai_gene_pane_1

0xae33,	// (0x0004d28e) ai_gene_pane_2

0xae3c,	// (0x0004d297) list_highlight_pane_cp4

0xae0c,	// (0x0004d267) cell_ai_link_pane_ParamLimits

0xae0c,	// (0x0004d267) cell_ai_link_pane

0xae04,	// (0x0004d25f) cell_ai_link_pane_g1

0x0c93,	// (0x000430ee) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00051d6d) cell_ai_link_pane_g

0x0a06,	// (0x00042e61) grid_highlight_cp2

0x0a06,	// (0x00042e61) bg_popup_sub_pane_cp1

0x0b7d,	// (0x00042fd8) popup_ai_links_title_window_t1

0xad54,	// (0x0004d1af) ai_gene_pane_1_g1_ParamLimits

0xad54,	// (0x0004d1af) ai_gene_pane_1_g1

0xad60,	// (0x0004d1bb) ai_gene_pane_1_g2_ParamLimits

0xad60,	// (0x0004d1bb) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00051d63) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00051d63) ai_gene_pane_1_g

0xad6d,	// (0x0004d1c8) ai_gene_pane_1_t1_ParamLimits

0xad6d,	// (0x0004d1c8) ai_gene_pane_1_t1

0xada1,	// (0x0004d1fc) grid_ai_soft_ind_pane

0xad3f,	// (0x0004d19a) ai_gene_pane_2_t1_ParamLimits

0xad3f,	// (0x0004d19a) ai_gene_pane_2_t1

0x6aca,	// (0x00048f25) main_pane_empty_t1_ParamLimits

0x6aca,	// (0x00048f25) main_pane_empty_t1

0x6ae2,	// (0x00048f3d) main_pane_empty_t2_ParamLimits

0x6ae2,	// (0x00048f3d) main_pane_empty_t2

0x6af7,	// (0x00048f52) main_pane_empty_t3_ParamLimits

0x6af7,	// (0x00048f52) main_pane_empty_t3

0x6b09,	// (0x00048f64) main_pane_empty_t4_ParamLimits

0x6b09,	// (0x00048f64) main_pane_empty_t4

0x6b1b,	// (0x00048f76) main_pane_empty_t5_ParamLimits

0x6b1b,	// (0x00048f76) main_pane_empty_t5

0x0004,

0xf574,	// (0x000519cf) main_pane_empty_t_ParamLimits

0xf574,	// (0x000519cf) main_pane_empty_t

0x0ebd,	// (0x00043318) bg_popup_window_pane_ParamLimits

0x0ebd,	// (0x00043318) bg_popup_window_pane

0xaaaf,	// (0x0004cf0a) find_popup_pane_cp2_ParamLimits

0xaaaf,	// (0x0004cf0a) find_popup_pane_cp2

0xaabb,	// (0x0004cf16) heading_pane_ParamLimits

0xaabb,	// (0x0004cf16) heading_pane

0x0a06,	// (0x00042e61) bg_popup_sub_pane

0xaa29,	// (0x0004ce84) bg_popup_window_pane_g1_ParamLimits

0xaa29,	// (0x0004ce84) bg_popup_window_pane_g1

0xaa35,	// (0x0004ce90) bg_popup_window_pane_g2_ParamLimits

0xaa35,	// (0x0004ce90) bg_popup_window_pane_g2

0xaa41,	// (0x0004ce9c) bg_popup_window_pane_g3_ParamLimits

0xaa41,	// (0x0004ce9c) bg_popup_window_pane_g3

0xaa4d,	// (0x0004cea8) bg_popup_window_pane_g4_ParamLimits

0xaa4d,	// (0x0004cea8) bg_popup_window_pane_g4

0xaa59,	// (0x0004ceb4) bg_popup_window_pane_g5_ParamLimits

0xaa59,	// (0x0004ceb4) bg_popup_window_pane_g5

0xaa65,	// (0x0004cec0) bg_popup_window_pane_g6_ParamLimits

0xaa65,	// (0x0004cec0) bg_popup_window_pane_g6

0xaa71,	// (0x0004cecc) bg_popup_window_pane_g7_ParamLimits

0xaa71,	// (0x0004cecc) bg_popup_window_pane_g7

0xaa7d,	// (0x0004ced8) bg_popup_window_pane_g8_ParamLimits

0xaa7d,	// (0x0004ced8) bg_popup_window_pane_g8

0xaa89,	// (0x0004cee4) bg_popup_window_pane_g9_ParamLimits

0xaa89,	// (0x0004cee4) bg_popup_window_pane_g9

0xaa95,	// (0x0004cef0) bg_popup_window_pane_g10_ParamLimits

0xaa95,	// (0x0004cef0) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00051d2b) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00051d2b) bg_popup_window_pane_g

0xa9be,	// (0x0004ce19) bg_popup_heading_pane_ParamLimits

0xa9be,	// (0x0004ce19) bg_popup_heading_pane

0x84cd,	// (0x0004a928) tabs_4_passive_pane_cp_srt_ParamLimits

0x84cd,	// (0x0004a928) tabs_4_passive_pane_cp_srt

0x84df,	// (0x0004a93a) tabs_4_passive_pane_srt_ParamLimits

0xa9d2,	// (0x0004ce2d) heading_pane_g2

0x84df,	// (0x0004a93a) tabs_4_passive_pane_srt

0x97b5,	// (0x0004bc10) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97b5,	// (0x0004bc10) bg_passive_tab_pane_cp3_srt

0xa9da,	// (0x0004ce35) heading_pane_t1_ParamLimits

0xa9da,	// (0x0004ce35) heading_pane_t1

0xa9f1,	// (0x0004ce4c) heading_pane_t2_ParamLimits

0xa9f1,	// (0x0004ce4c) heading_pane_t2

0x0001,

0xf8cb,	// (0x00051d26) heading_pane_t_ParamLimits

0xf8cb,	// (0x00051d26) heading_pane_t

0xa4fb,	// (0x0004c956) bg_popup_heading_pane_g1

0xa5aa,	// (0x0004ca05) bg_popup_heading_pane_g2

0xa5b4,	// (0x0004ca0f) bg_popup_heading_pane_g3

0xa5be,	// (0x0004ca19) bg_popup_heading_pane_g4

0xa5c8,	// (0x0004ca23) bg_popup_heading_pane_g5

0xa5d2,	// (0x0004ca2d) bg_popup_heading_pane_g6

0xa5da,	// (0x0004ca35) bg_popup_heading_pane_g7

0xa5e2,	// (0x0004ca3d) bg_popup_heading_pane_g8

0xa5ec,	// (0x0004ca47) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00051ce2) bg_popup_heading_pane_g

0x9cdc,	// (0x0004c137) bg_popup_sub_pane_g1

0x9ce4,	// (0x0004c13f) bg_popup_sub_pane_g2

0x9cec,	// (0x0004c147) bg_popup_sub_pane_g3

0x9cf4,	// (0x0004c14f) bg_popup_sub_pane_g4

0x9cfc,	// (0x0004c157) bg_popup_sub_pane_g5

0x9d04,	// (0x0004c15f) bg_popup_sub_pane_g6

0x9d0c,	// (0x0004c167) bg_popup_sub_pane_g7

0x9d14,	// (0x0004c16f) bg_popup_sub_pane_g8

0x9d1c,	// (0x0004c177) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00051cbc) bg_popup_sub_pane_g

0x0a54,	// (0x00042eaf) bg_popup_window_pane_cp5_ParamLimits

0x0a54,	// (0x00042eaf) bg_popup_window_pane_cp5

0x0b9a,	// (0x00042ff5) popup_note_window_g1_ParamLimits

0x0b9a,	// (0x00042ff5) popup_note_window_g1

0x0ba6,	// (0x00043001) popup_note_window_t1_ParamLimits

0x0ba6,	// (0x00043001) popup_note_window_t1

0x0bbc,	// (0x00043017) popup_note_window_t2_ParamLimits

0x0bbc,	// (0x00043017) popup_note_window_t2

0x0bd2,	// (0x0004302d) popup_note_window_t3_ParamLimits

0x0bd2,	// (0x0004302d) popup_note_window_t3

0x0be8,	// (0x00043043) popup_note_window_t4_ParamLimits

0x0be8,	// (0x00043043) popup_note_window_t4

0x0c10,	// (0x0004306b) popup_note_window_t5_ParamLimits

0x0c10,	// (0x0004306b) popup_note_window_t5

0x0004,

0xf57f,	// (0x000519da) popup_note_window_t_ParamLimits

0xf57f,	// (0x000519da) popup_note_window_t

0x0c34,	// (0x0004308f) bg_popup_window_pane_cp6_ParamLimits

0x0c34,	// (0x0004308f) bg_popup_window_pane_cp6

0xa477,	// (0x0004c8d2) popup_note_image_window_g1_ParamLimits

0xa477,	// (0x0004c8d2) popup_note_image_window_g1

0xa483,	// (0x0004c8de) popup_note_image_window_g2_ParamLimits

0xa483,	// (0x0004c8de) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00051cb0) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00051cb0) popup_note_image_window_g

0xa49c,	// (0x0004c8f7) popup_note_image_window_t1_ParamLimits

0xa49c,	// (0x0004c8f7) popup_note_image_window_t1

0xa4b5,	// (0x0004c910) popup_note_image_window_t2_ParamLimits

0xa4b5,	// (0x0004c910) popup_note_image_window_t2

0xa4ce,	// (0x0004c929) popup_note_image_window_t3_ParamLimits

0xa4ce,	// (0x0004c929) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00051cb5) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00051cb5) popup_note_image_window_t

0xa340,	// (0x0004c79b) bg_popup_window_pane_cp7_ParamLimits

0xa340,	// (0x0004c79b) bg_popup_window_pane_cp7

0xa370,	// (0x0004c7cb) popup_note_wait_window_g1_ParamLimits

0xa370,	// (0x0004c7cb) popup_note_wait_window_g1

0xa37c,	// (0x0004c7d7) popup_note_wait_window_g2_ParamLimits

0xa37c,	// (0x0004c7d7) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00051c9e) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00051c9e) popup_note_wait_window_g

0xa394,	// (0x0004c7ef) popup_note_wait_window_t1_ParamLimits

0xa394,	// (0x0004c7ef) popup_note_wait_window_t1

0xa3bb,	// (0x0004c816) popup_note_wait_window_t2_ParamLimits

0xa3bb,	// (0x0004c816) popup_note_wait_window_t2

0xa3d8,	// (0x0004c833) popup_note_wait_window_t3_ParamLimits

0xa3d8,	// (0x0004c833) popup_note_wait_window_t3

0xa3eb,	// (0x0004c846) popup_note_wait_window_t4_ParamLimits

0xa3eb,	// (0x0004c846) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00051ca5) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00051ca5) popup_note_wait_window_t

0xa410,	// (0x0004c86b) wait_bar_pane_ParamLimits

0xa410,	// (0x0004c86b) wait_bar_pane

0x0a06,	// (0x00042e61) wait_anim_pane

0x0a06,	// (0x00042e61) wait_border_pane

0x09fc,	// (0x00042e57) wait_anim_pane_g1

0x09fc,	// (0x00042e57) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00051b59) wait_anim_pane_g

0xa2ec,	// (0x0004c747) wait_border_pane_g1

0xa2f7,	// (0x0004c752) wait_border_pane_g2

0xa300,	// (0x0004c75b) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00051c97) wait_border_pane_g

0xa157,	// (0x0004c5b2) bg_popup_window_pane_cp16_ParamLimits

0xa157,	// (0x0004c5b2) bg_popup_window_pane_cp16

0xa257,	// (0x0004c6b2) indicator_popup_pane_cp4_ParamLimits

0xa257,	// (0x0004c6b2) indicator_popup_pane_cp4

0xa26b,	// (0x0004c6c6) popup_query_data_window_t1_ParamLimits

0xa26b,	// (0x0004c6c6) popup_query_data_window_t1

0xa27d,	// (0x0004c6d8) popup_query_data_window_t2_ParamLimits

0xa27d,	// (0x0004c6d8) popup_query_data_window_t2

0xa296,	// (0x0004c6f1) popup_query_data_window_t3_ParamLimits

0xa296,	// (0x0004c6f1) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00051c90) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00051c90) popup_query_data_window_t

0xa2b0,	// (0x0004c70b) query_popup_data_pane_ParamLimits

0xa2b0,	// (0x0004c70b) query_popup_data_pane

0xa2c4,	// (0x0004c71f) query_popup_data_pane_cp1_ParamLimits

0xa2c4,	// (0x0004c71f) query_popup_data_pane_cp1

0xa157,	// (0x0004c5b2) bg_popup_window_pane_cp10_ParamLimits

0xa157,	// (0x0004c5b2) bg_popup_window_pane_cp10

0xa189,	// (0x0004c5e4) indicator_popup_pane_ParamLimits

0xa189,	// (0x0004c5e4) indicator_popup_pane

0xa1ab,	// (0x0004c606) popup_query_code_window_t1_ParamLimits

0xa1ab,	// (0x0004c606) popup_query_code_window_t1

0xa1c5,	// (0x0004c620) popup_query_code_window_t2_ParamLimits

0xa1c5,	// (0x0004c620) popup_query_code_window_t2

0xa20e,	// (0x0004c669) popup_query_code_window_t3_ParamLimits

0xa20e,	// (0x0004c669) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00051c89) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00051c89) popup_query_code_window_t

0xa23d,	// (0x0004c698) query_popup_pane_ParamLimits

0xa23d,	// (0x0004c698) query_popup_pane

0x0c34,	// (0x0004308f) bg_popup_window_pane_cp15_ParamLimits

0x0c34,	// (0x0004308f) bg_popup_window_pane_cp15

0x6b55,	// (0x00048fb0) indicator_popup_pane_cp1_ParamLimits

0x6b55,	// (0x00048fb0) indicator_popup_pane_cp1

0x6b68,	// (0x00048fc3) indicator_popup_pane_cp2_ParamLimits

0x6b68,	// (0x00048fc3) indicator_popup_pane_cp2

0x6b7b,	// (0x00048fd6) popup_query_data_code_window_g1_ParamLimits

0x6b7b,	// (0x00048fd6) popup_query_data_code_window_g1

0x0c52,	// (0x000430ad) popup_query_data_code_window_t1_ParamLimits

0x0c52,	// (0x000430ad) popup_query_data_code_window_t1

0x0c64,	// (0x000430bf) popup_query_data_code_window_t2_ParamLimits

0x0c64,	// (0x000430bf) popup_query_data_code_window_t2

0x6b8e,	// (0x00048fe9) popup_query_data_code_window_t3_ParamLimits

0x6b8e,	// (0x00048fe9) popup_query_data_code_window_t3

0x6ba4,	// (0x00048fff) popup_query_data_code_window_t4_ParamLimits

0x6ba4,	// (0x00048fff) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000519e5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000519e5) popup_query_data_code_window_t

0x4b07,	// (0x00046f62) list_single_midp_graphic_pane_g3

0x6bbc,	// (0x00049017) query_popup_data_pane_cp2_ParamLimits

0x6bcf,	// (0x0004902a) query_popup_pane_cp2_ParamLimits

0x6bcf,	// (0x0004902a) query_popup_pane_cp2

0x0a06,	// (0x00042e61) bg_popup_window_pane_cp11

0xa143,	// (0x0004c59e) heading_pane_cp5

0x0cc0,	// (0x0004311b) listscroll_popup_info_pane

0x0a06,	// (0x00042e61) input_focus_pane_cp3

0x0c76,	// (0x000430d1) query_popup_pane_t1

0x0c84,	// (0x000430df) list_popup_info_pane_ParamLimits

0x0c84,	// (0x000430df) list_popup_info_pane

0x0c93,	// (0x000430ee) listscroll_popup_info_pane_g1

0x0c9b,	// (0x000430f6) scroll_pane_cp7

0x6be2,	// (0x0004903d) popup_info_list_pane_t1_ParamLimits

0x6be2,	// (0x0004903d) popup_info_list_pane_t1

0x6bfc,	// (0x00049057) popup_info_list_pane_t2_ParamLimits

0x6bfc,	// (0x00049057) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000519ee) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000519ee) popup_info_list_pane_t

0x0a06,	// (0x00042e61) bg_popup_window_pane_cp12

0xb461,	// (0x0004d8bc) find_popup_pane

0x0a62,	// (0x00042ebd) bg_popup_window_pane_cp3

0x0ca5,	// (0x00043100) heading_pane_cp3

0x0cb1,	// (0x0004310c) listscroll_popup_graphic_pane

0x0a06,	// (0x00042e61) bg_popup_window_pane_cp4

0x6c66,	// (0x000490c1) heading_pane_cp4

0x0cc0,	// (0x0004311b) listscroll_popup_colour_pane

0x6c70,	// (0x000490cb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6c70,	// (0x000490cb) cell_large_graphic_colour_none_popup_pane

0x6c84,	// (0x000490df) grid_large_graphic_colour_popup_pane_ParamLimits

0x6c84,	// (0x000490df) grid_large_graphic_colour_popup_pane

0x6cac,	// (0x00049107) listscroll_popup_colour_pane_g1_ParamLimits

0x6cac,	// (0x00049107) listscroll_popup_colour_pane_g1

0x6cc3,	// (0x0004911e) listscroll_popup_colour_pane_g2_ParamLimits

0x6cc3,	// (0x0004911e) listscroll_popup_colour_pane_g2

0x6cda,	// (0x00049135) listscroll_popup_colour_pane_g3_ParamLimits

0x6cda,	// (0x00049135) listscroll_popup_colour_pane_g3

0x6cea,	// (0x00049145) listscroll_popup_colour_pane_g4_ParamLimits

0x6cea,	// (0x00049145) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000519f3) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000519f3) listscroll_popup_colour_pane_g

0x0cc8,	// (0x00043123) scroll_pane_cp6_ParamLimits

0x0cc8,	// (0x00043123) scroll_pane_cp6

0x6cfa,	// (0x00049155) cell_large_graphic_colour_popup_pane_ParamLimits

0x6cfa,	// (0x00049155) cell_large_graphic_colour_popup_pane

0x6d19,	// (0x00049174) cell_large_graphic_colour_none_popup_pane_t1

0x0a06,	// (0x00042e61) grid_highlight_pane_cp5

0x0cda,	// (0x00043135) cell_large_graphic_colour_popup_pane_g1

0x0ce2,	// (0x0004313d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000519fc) cell_large_graphic_colour_popup_pane_g

0x0cea,	// (0x00043145) cell_large_graphic_colour_popup_pane_g2_copy1

0x0cf3,	// (0x0004314e) grid_highlight_pane_cp4

0x0cfb,	// (0x00043156) bg_popup_window_pane_cp8_ParamLimits

0x0cfb,	// (0x00043156) bg_popup_window_pane_cp8

0x6d28,	// (0x00049183) popup_snote_single_text_window_g1_ParamLimits

0x6d28,	// (0x00049183) popup_snote_single_text_window_g1

0x6d3a,	// (0x00049195) popup_snote_single_text_window_t1_ParamLimits

0x6d3a,	// (0x00049195) popup_snote_single_text_window_t1

0x6d4d,	// (0x000491a8) popup_snote_single_text_window_t2_ParamLimits

0x6d4d,	// (0x000491a8) popup_snote_single_text_window_t2

0x6d60,	// (0x000491bb) popup_snote_single_text_window_t3_ParamLimits

0x6d60,	// (0x000491bb) popup_snote_single_text_window_t3

0x6d99,	// (0x000491f4) popup_snote_single_text_window_t4_ParamLimits

0x6d99,	// (0x000491f4) popup_snote_single_text_window_t4

0x6dcd,	// (0x00049228) popup_snote_single_text_window_t5_ParamLimits

0x6dcd,	// (0x00049228) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00051a01) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00051a01) popup_snote_single_text_window_t

0x0d16,	// (0x00043171) bg_popup_window_pane_cp9_ParamLimits

0x0d16,	// (0x00043171) bg_popup_window_pane_cp9

0x6d28,	// (0x00049183) popup_snote_single_graphic_window_g1_ParamLimits

0x6d28,	// (0x00049183) popup_snote_single_graphic_window_g1

0x0d24,	// (0x0004317f) popup_snote_single_graphic_window_g2_ParamLimits

0x0d24,	// (0x0004317f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00051a0c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00051a0c) popup_snote_single_graphic_window_g

0x0d30,	// (0x0004318b) popup_snote_single_graphic_window_t1_ParamLimits

0x0d30,	// (0x0004318b) popup_snote_single_graphic_window_t1

0x0d43,	// (0x0004319e) popup_snote_single_graphic_window_t2_ParamLimits

0x0d43,	// (0x0004319e) popup_snote_single_graphic_window_t2

0x6dfc,	// (0x00049257) popup_snote_single_graphic_window_t3_ParamLimits

0x6dfc,	// (0x00049257) popup_snote_single_graphic_window_t3

0x6e35,	// (0x00049290) popup_snote_single_graphic_window_t4_ParamLimits

0x6e35,	// (0x00049290) popup_snote_single_graphic_window_t4

0x6e69,	// (0x000492c4) popup_snote_single_graphic_window_t5_ParamLimits

0x6e69,	// (0x000492c4) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00051a11) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00051a11) popup_snote_single_graphic_window_t

0xb3a3,	// (0x0004d7fe) grid_graphic_popup_pane_ParamLimits

0xb3a3,	// (0x0004d7fe) grid_graphic_popup_pane

0xb3cd,	// (0x0004d828) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3cd,	// (0x0004d828) listscroll_popup_graphic_pane_g1

0xb3e1,	// (0x0004d83c) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3e1,	// (0x0004d83c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00051e06) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00051e06) listscroll_popup_graphic_pane_g

0xb3f5,	// (0x0004d850) scroll_pane_cp5

0xb342,	// (0x0004d79d) cell_graphic_popup_pane_ParamLimits

0xb342,	// (0x0004d79d) cell_graphic_popup_pane

0xb323,	// (0x0004d77e) cell_graphic_popup_pane_g1

0xb32b,	// (0x0004d786) cell_graphic_popup_pane_g2

0x0cea,	// (0x00043145) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00051dff) cell_graphic_popup_pane_g

0xb334,	// (0x0004d78f) cell_graphic_popup_pane_t2

0x0cf3,	// (0x0004314e) grid_highlight_pane_cp3

0x0d68,	// (0x000431c3) list_gen_pane_ParamLimits

0x0d68,	// (0x000431c3) list_gen_pane

0x0d90,	// (0x000431eb) scroll_pane

0xb27b,	// (0x0004d6d6) bg_list_pane_g1_ParamLimits

0xb27b,	// (0x0004d6d6) bg_list_pane_g1

0xb298,	// (0x0004d6f3) bg_list_pane_g2_ParamLimits

0xb298,	// (0x0004d6f3) bg_list_pane_g2

0xb2ad,	// (0x0004d708) bg_list_pane_g3_ParamLimits

0xb2ad,	// (0x0004d708) bg_list_pane_g3

0xb2c1,	// (0x0004d71c) bg_list_pane_g4_ParamLimits

0xb2c1,	// (0x0004d71c) bg_list_pane_g4

0xb2d5,	// (0x0004d730) bg_list_pane_g5_ParamLimits

0xb2d5,	// (0x0004d730) bg_list_pane_g5

0x0004,

0xf999,	// (0x00051df4) bg_list_pane_g_ParamLimits

0xf999,	// (0x00051df4) bg_list_pane_g

0x5ef1,	// (0x0004834c) list_double2_graphic_large_graphic_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double2_graphic_large_graphic_pane

0x5ef1,	// (0x0004834c) list_double2_graphic_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double2_graphic_pane

0x5ef1,	// (0x0004834c) list_double2_large_graphic_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double2_large_graphic_pane

0x5ef1,	// (0x0004834c) list_double2_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double2_pane

0x5ef1,	// (0x0004834c) list_double_graphic_heading_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double_graphic_heading_pane

0x5ef1,	// (0x0004834c) list_double_graphic_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double_graphic_pane

0x5ef1,	// (0x0004834c) list_double_heading_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double_heading_pane

0x5ef1,	// (0x0004834c) list_double_large_graphic_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double_large_graphic_pane

0x5ef1,	// (0x0004834c) list_double_number_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double_number_pane

0x5ef1,	// (0x0004834c) list_double_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double_pane

0x5ef1,	// (0x0004834c) list_double_time_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_double_time_pane

0x5ef1,	// (0x0004834c) list_setting_number_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_setting_number_pane

0x5ef1,	// (0x0004834c) list_setting_pane_ParamLimits

0x5ef1,	// (0x0004834c) list_setting_pane

0x842c,	// (0x0004a887) list_single_2graphic_pane_ParamLimits

0x842c,	// (0x0004a887) list_single_2graphic_pane

0x842c,	// (0x0004a887) list_single_graphic_heading_pane_ParamLimits

0x842c,	// (0x0004a887) list_single_graphic_heading_pane

0x842c,	// (0x0004a887) list_single_graphic_pane_ParamLimits

0x842c,	// (0x0004a887) list_single_graphic_pane

0x842c,	// (0x0004a887) list_single_heading_pane_ParamLimits

0x842c,	// (0x0004a887) list_single_heading_pane

0x8487,	// (0x0004a8e2) list_single_large_graphic_pane_ParamLimits

0x8487,	// (0x0004a8e2) list_single_large_graphic_pane

0x842c,	// (0x0004a887) list_single_number_heading_pane_ParamLimits

0x842c,	// (0x0004a887) list_single_number_heading_pane

0x842c,	// (0x0004a887) list_single_number_pane_ParamLimits

0x842c,	// (0x0004a887) list_single_number_pane

0x842c,	// (0x0004a887) list_single_pane_ParamLimits

0x842c,	// (0x0004a887) list_single_pane

0x0a06,	// (0x00042e61) list_highlight_pane_cp1

0x6ea2,	// (0x000492fd) list_single_pane_g1_ParamLimits

0x6ea2,	// (0x000492fd) list_single_pane_g1

0x6eae,	// (0x00049309) list_single_pane_g2_ParamLimits

0x6eae,	// (0x00049309) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00051a2d) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00051a2d) list_single_pane_g

0x5edb,	// (0x00048336) list_single_pane_t1_ParamLimits

0x5edb,	// (0x00048336) list_single_pane_t1

0x6ea2,	// (0x000492fd) list_single_number_pane_g1_ParamLimits

0x6ea2,	// (0x000492fd) list_single_number_pane_g1

0x6eae,	// (0x00049309) list_single_number_pane_g2_ParamLimits

0x6eae,	// (0x00049309) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00051a2d) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00051a2d) list_single_number_pane_g

0x5690,	// (0x00047aeb) list_single_number_pane_t1_ParamLimits

0x5690,	// (0x00047aeb) list_single_number_pane_t1

0x5e99,	// (0x000482f4) list_single_number_pane_t2_ParamLimits

0x5e99,	// (0x000482f4) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00051db5) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00051db5) list_single_number_pane_t

0x5684,	// (0x00047adf) list_single_graphic_pane_g1_ParamLimits

0x5684,	// (0x00047adf) list_single_graphic_pane_g1

0x6ea2,	// (0x000492fd) list_single_graphic_pane_g2_ParamLimits

0x6ea2,	// (0x000492fd) list_single_graphic_pane_g2

0x6eae,	// (0x00049309) list_single_graphic_pane_g3_ParamLimits

0x6eae,	// (0x00049309) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00051a1c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00051a1c) list_single_graphic_pane_g

0x5690,	// (0x00047aeb) list_single_graphic_pane_t1_ParamLimits

0x5690,	// (0x00047aeb) list_single_graphic_pane_t1

0x56a6,	// (0x00047b01) list_single_heading_pane_g1_ParamLimits

0x56a6,	// (0x00047b01) list_single_heading_pane_g1

0x6eae,	// (0x00049309) list_single_heading_pane_g2_ParamLimits

0x6eae,	// (0x00049309) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00051a23) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00051a23) list_single_heading_pane_g

0x56b9,	// (0x00047b14) list_single_heading_pane_t1_ParamLimits

0x56b9,	// (0x00047b14) list_single_heading_pane_t1

0x6eba,	// (0x00049315) list_single_heading_pane_t2_ParamLimits

0x6eba,	// (0x00049315) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00051a28) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00051a28) list_single_heading_pane_t

0x6ea2,	// (0x000492fd) list_single_number_heading_pane_g1_ParamLimits

0x6ea2,	// (0x000492fd) list_single_number_heading_pane_g1

0x6eae,	// (0x00049309) list_single_number_heading_pane_g2_ParamLimits

0x6eae,	// (0x00049309) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00051a2d) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00051a2d) list_single_number_heading_pane_g

0x56cf,	// (0x00047b2a) list_single_number_heading_pane_t1_ParamLimits

0x56cf,	// (0x00047b2a) list_single_number_heading_pane_t1

0x56e5,	// (0x00047b40) list_single_number_heading_pane_t2_ParamLimits

0x56e5,	// (0x00047b40) list_single_number_heading_pane_t2

0x56f7,	// (0x00047b52) list_single_number_heading_pane_t3_ParamLimits

0x56f7,	// (0x00047b52) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00051a32) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00051a32) list_single_number_heading_pane_t

0x5709,	// (0x00047b64) list_single_graphic_heading_pane_g1_ParamLimits

0x5709,	// (0x00047b64) list_single_graphic_heading_pane_g1

0x6ecc,	// (0x00049327) list_single_graphic_heading_pane_g4_ParamLimits

0x6ecc,	// (0x00049327) list_single_graphic_heading_pane_g4

0x6eae,	// (0x00049309) list_single_graphic_heading_pane_g5_ParamLimits

0x6eae,	// (0x00049309) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00051a39) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00051a39) list_single_graphic_heading_pane_g

0x56cf,	// (0x00047b2a) list_single_graphic_heading_pane_t1_ParamLimits

0x56cf,	// (0x00047b2a) list_single_graphic_heading_pane_t1

0x571f,	// (0x00047b7a) list_single_graphic_heading_pane_t2_ParamLimits

0x571f,	// (0x00047b7a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00051a40) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00051a40) list_single_graphic_heading_pane_t

0x6edd,	// (0x00049338) list_single_large_graphic_pane_g1_ParamLimits

0x6edd,	// (0x00049338) list_single_large_graphic_pane_g1

0x6ee9,	// (0x00049344) list_single_large_graphic_pane_g2_ParamLimits

0x6ee9,	// (0x00049344) list_single_large_graphic_pane_g2

0x6ef5,	// (0x00049350) list_single_large_graphic_pane_g3_ParamLimits

0x6ef5,	// (0x00049350) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00051a45) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00051a45) list_single_large_graphic_pane_g

0xa2f7,	// (0x0004c752) wait_border_pane_g2_copy1

0x6f01,	// (0x0004935c) list_single_large_graphic_pane_g4_cp2

0x5737,	// (0x00047b92) list_single_large_graphic_pane_t1_ParamLimits

0x5737,	// (0x00047b92) list_single_large_graphic_pane_t1

0x6f09,	// (0x00049364) list_double_pane_g1_ParamLimits

0x6f09,	// (0x00049364) list_double_pane_g1

0x6f15,	// (0x00049370) list_double_pane_g2_ParamLimits

0x6f15,	// (0x00049370) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00051a4c) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00051a4c) list_double_pane_g

0x574d,	// (0x00047ba8) list_double_pane_t1_ParamLimits

0x574d,	// (0x00047ba8) list_double_pane_t1

0x5763,	// (0x00047bbe) list_double_pane_t2_ParamLimits

0x5763,	// (0x00047bbe) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00051a51) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00051a51) list_double_pane_t

0x5775,	// (0x00047bd0) list_double2_pane_g1_ParamLimits

0x5775,	// (0x00047bd0) list_double2_pane_g1

0x5786,	// (0x00047be1) list_double2_pane_g2_ParamLimits

0x5786,	// (0x00047be1) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00051a56) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00051a56) list_double2_pane_g

0x5792,	// (0x00047bed) list_double2_pane_t1_ParamLimits

0x5792,	// (0x00047bed) list_double2_pane_t1

0x57a8,	// (0x00047c03) list_double2_pane_t2_ParamLimits

0x57a8,	// (0x00047c03) list_double2_pane_t2

0x0001,

0xf600,	// (0x00051a5b) list_double2_pane_t_ParamLimits

0xf600,	// (0x00051a5b) list_double2_pane_t

0x6f09,	// (0x00049364) list_double_number_pane_g1_ParamLimits

0x6f09,	// (0x00049364) list_double_number_pane_g1

0x6f15,	// (0x00049370) list_double_number_pane_g2_ParamLimits

0x6f15,	// (0x00049370) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00051a4c) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00051a4c) list_double_number_pane_g

0x57ba,	// (0x00047c15) list_double_number_pane_t1_ParamLimits

0x57ba,	// (0x00047c15) list_double_number_pane_t1

0x57cc,	// (0x00047c27) list_double_number_pane_t2_ParamLimits

0x57cc,	// (0x00047c27) list_double_number_pane_t2

0x57e2,	// (0x00047c3d) list_double_number_pane_t3_ParamLimits

0x57e2,	// (0x00047c3d) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00051a60) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00051a60) list_double_number_pane_t

0x57f4,	// (0x00047c4f) list_double_graphic_pane_g1_ParamLimits

0x57f4,	// (0x00047c4f) list_double_graphic_pane_g1

0x6f21,	// (0x0004937c) list_double_graphic_pane_g2_ParamLimits

0x6f21,	// (0x0004937c) list_double_graphic_pane_g2

0x6f30,	// (0x0004938b) list_double_graphic_pane_g3_ParamLimits

0x6f30,	// (0x0004938b) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00051a67) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00051a67) list_double_graphic_pane_g

0x57cc,	// (0x00047c27) list_double_graphic_pane_t1_ParamLimits

0x57cc,	// (0x00047c27) list_double_graphic_pane_t1

0x57e2,	// (0x00047c3d) list_double_graphic_pane_t2_ParamLimits

0x57e2,	// (0x00047c3d) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00051a70) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00051a70) list_double_graphic_pane_t

0x580c,	// (0x00047c67) list_double2_graphic_pane_g1_ParamLimits

0x580c,	// (0x00047c67) list_double2_graphic_pane_g1

0xbfb6,	// (0x0004e411) list_double2_graphic_pane_g2_ParamLimits

0xbfb6,	// (0x0004e411) list_double2_graphic_pane_g2

0x6f3c,	// (0x00049397) list_double2_graphic_pane_g3_ParamLimits

0x6f3c,	// (0x00049397) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00051a75) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00051a75) list_double2_graphic_pane_g

0x5818,	// (0x00047c73) list_double2_graphic_pane_t1_ParamLimits

0x5818,	// (0x00047c73) list_double2_graphic_pane_t1

0x582e,	// (0x00047c89) list_double2_graphic_pane_t2_ParamLimits

0x582e,	// (0x00047c89) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00051a7c) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00051a7c) list_double2_graphic_pane_t

0x5840,	// (0x00047c9b) list_double_large_graphic_pane_g1_ParamLimits

0x5840,	// (0x00047c9b) list_double_large_graphic_pane_g1

0x585f,	// (0x00047cba) list_double_large_graphic_pane_g2_ParamLimits

0x585f,	// (0x00047cba) list_double_large_graphic_pane_g2

0x6f15,	// (0x00049370) list_double_large_graphic_pane_g3_ParamLimits

0x6f15,	// (0x00049370) list_double_large_graphic_pane_g3

0x5875,	// (0x00047cd0) list_double_large_graphic_pane_g4_ParamLimits

0x5875,	// (0x00047cd0) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00051a81) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00051a81) list_double_large_graphic_pane_g

0x5887,	// (0x00047ce2) list_double_large_graphic_pane_t1_ParamLimits

0x5887,	// (0x00047ce2) list_double_large_graphic_pane_t1

0x58a0,	// (0x00047cfb) list_double_large_graphic_pane_t2_ParamLimits

0x58a0,	// (0x00047cfb) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00051a8c) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00051a8c) list_double_large_graphic_pane_t

0x58b2,	// (0x00047d0d) list_double2_large_graphic_pane_g1_ParamLimits

0x58b2,	// (0x00047d0d) list_double2_large_graphic_pane_g1

0x58be,	// (0x00047d19) list_double2_large_graphic_pane_g2_ParamLimits

0x58be,	// (0x00047d19) list_double2_large_graphic_pane_g2

0x6f3c,	// (0x00049397) list_double2_large_graphic_pane_g3_ParamLimits

0x6f3c,	// (0x00049397) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00051a91) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00051a91) list_double2_large_graphic_pane_g

0x5818,	// (0x00047c73) list_double2_large_graphic_pane_t1_ParamLimits

0x5818,	// (0x00047c73) list_double2_large_graphic_pane_t1

0x582e,	// (0x00047c89) list_double2_large_graphic_pane_t2_ParamLimits

0x582e,	// (0x00047c89) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x00051a7c) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x00051a7c) list_double2_large_graphic_pane_t

0x6f5d,	// (0x000493b8) list_double_heading_pane_g1_ParamLimits

0x6f5d,	// (0x000493b8) list_double_heading_pane_g1

0x6f6e,	// (0x000493c9) list_double_heading_pane_g2_ParamLimits

0x6f6e,	// (0x000493c9) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00051a98) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00051a98) list_double_heading_pane_g

0x58cf,	// (0x00047d2a) list_double_heading_pane_t1_ParamLimits

0x58cf,	// (0x00047d2a) list_double_heading_pane_t1

0x582e,	// (0x00047c89) list_double_heading_pane_t2_ParamLimits

0x582e,	// (0x00047c89) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00051a9d) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00051a9d) list_double_heading_pane_t

0x58e5,	// (0x00047d40) list_double_graphic_heading_pane_g1_ParamLimits

0x58e5,	// (0x00047d40) list_double_graphic_heading_pane_g1

0x6f5d,	// (0x000493b8) list_double_graphic_heading_pane_g2_ParamLimits

0x6f5d,	// (0x000493b8) list_double_graphic_heading_pane_g2

0x6f6e,	// (0x000493c9) list_double_graphic_heading_pane_g3_ParamLimits

0x6f6e,	// (0x000493c9) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00051aa2) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00051aa2) list_double_graphic_heading_pane_g

0x58cf,	// (0x00047d2a) list_double_graphic_heading_pane_t1_ParamLimits

0x58cf,	// (0x00047d2a) list_double_graphic_heading_pane_t1

0x582e,	// (0x00047c89) list_double_graphic_heading_pane_t2_ParamLimits

0x582e,	// (0x00047c89) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x00051a9d) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x00051a9d) list_double_graphic_heading_pane_t

0x58f1,	// (0x00047d4c) list_double_time_pane_g1_ParamLimits

0x58f1,	// (0x00047d4c) list_double_time_pane_g1

0x5902,	// (0x00047d5d) list_double_time_pane_g2_ParamLimits

0x5902,	// (0x00047d5d) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x00051aa9) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x00051aa9) list_double_time_pane_g

0x590e,	// (0x00047d69) list_double_time_pane_t1_ParamLimits

0x590e,	// (0x00047d69) list_double_time_pane_t1

0x5924,	// (0x00047d7f) list_double_time_pane_t2_ParamLimits

0x5924,	// (0x00047d7f) list_double_time_pane_t2

0x5936,	// (0x00047d91) list_double_time_pane_t3_ParamLimits

0x5936,	// (0x00047d91) list_double_time_pane_t3

0x5948,	// (0x00047da3) list_double_time_pane_t4_ParamLimits

0x5948,	// (0x00047da3) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00051aae) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00051aae) list_double_time_pane_t

0x595a,	// (0x00047db5) list_setting_pane_g1_ParamLimits

0x595a,	// (0x00047db5) list_setting_pane_g1

0x5786,	// (0x00047be1) list_setting_pane_g2_ParamLimits

0x5786,	// (0x00047be1) list_setting_pane_g2

0x0001,

0xf65c,	// (0x00051ab7) list_setting_pane_g_ParamLimits

0xf65c,	// (0x00051ab7) list_setting_pane_g

0x5966,	// (0x00047dc1) list_setting_pane_t1_ParamLimits

0x5966,	// (0x00047dc1) list_setting_pane_t1

0x5980,	// (0x00047ddb) list_setting_pane_t2_ParamLimits

0x5980,	// (0x00047ddb) list_setting_pane_t2

0x0002,

0xf661,	// (0x00051abc) list_setting_pane_t_ParamLimits

0xf661,	// (0x00051abc) list_setting_pane_t

0x59bd,	// (0x00047e18) set_value_pane_cp_ParamLimits

0x59bd,	// (0x00047e18) set_value_pane_cp

0x59c9,	// (0x00047e24) list_setting_number_pane_g1_ParamLimits

0x59c9,	// (0x00047e24) list_setting_number_pane_g1

0x59d5,	// (0x00047e30) list_setting_number_pane_g2_ParamLimits

0x59d5,	// (0x00047e30) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x00051ac3) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x00051ac3) list_setting_number_pane_g

0x59e1,	// (0x00047e3c) list_setting_number_pane_t1_ParamLimits

0x59e1,	// (0x00047e3c) list_setting_number_pane_t1

0x59fa,	// (0x00047e55) list_setting_number_pane_t2_ParamLimits

0x59fa,	// (0x00047e55) list_setting_number_pane_t2

0x5a14,	// (0x00047e6f) list_setting_number_pane_t3_ParamLimits

0x5a14,	// (0x00047e6f) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00051ac8) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00051ac8) list_setting_number_pane_t

0x59bd,	// (0x00047e18) set_value_pane_ParamLimits

0x59bd,	// (0x00047e18) set_value_pane

0x0dc4,	// (0x0004321f) bg_set_opt_pane_ParamLimits

0x0dc4,	// (0x0004321f) bg_set_opt_pane

0x5a57,	// (0x00047eb2) set_value_pane_t1

0x0de5,	// (0x00043240) slider_set_pane_cp3

0x6f7a,	// (0x000493d5) volume_small_pane_cp

0x0dee,	// (0x00043249) list_form_gen_pane

0x0df7,	// (0x00043252) scroll_pane_cp8

0x5a6d,	// (0x00047ec8) form_field_data_pane_ParamLimits

0x5a6d,	// (0x00047ec8) form_field_data_pane

0x5a8f,	// (0x00047eea) form_field_data_wide_pane_ParamLimits

0x5a8f,	// (0x00047eea) form_field_data_wide_pane

0x5ab2,	// (0x00047f0d) form_field_popup_pane_ParamLimits

0x5ab2,	// (0x00047f0d) form_field_popup_pane

0x5ad2,	// (0x00047f2d) form_field_popup_wide_pane_ParamLimits

0x5ad2,	// (0x00047f2d) form_field_popup_wide_pane

0x5aef,	// (0x00047f4a) form_field_slider_pane_ParamLimits

0x5aef,	// (0x00047f4a) form_field_slider_pane

0x5b02,	// (0x00047f5d) form_field_slider_wide_pane_ParamLimits

0x5b02,	// (0x00047f5d) form_field_slider_wide_pane

0x0e08,	// (0x00043263) data_form_pane

0x5b1f,	// (0x00047f7a) form_field_data_pane_t1

0x0e14,	// (0x0004326f) input_focus_pane

0x5b37,	// (0x00047f92) data_form_wide_pane

0x5b54,	// (0x00047faf) form_field_data_wide_pane_t1

0x0d08,	// (0x00043163) input_focus_pane_cp6

0x5b76,	// (0x00047fd1) form_field_popup_pane_t1

0x0e14,	// (0x0004326f) input_focus_pane_cp7

0x0e42,	// (0x0004329d) list_form_pane

0x5b96,	// (0x00047ff1) form_field_popup_wide_pane_t1

0x0e14,	// (0x0004326f) input_focus_pane_cp8

0x0e4e,	// (0x000432a9) list_form_wide_pane

0x5bb3,	// (0x0004800e) form_field_slider_pane_t1_ParamLimits

0x5bb3,	// (0x0004800e) form_field_slider_pane_t1

0x5bc9,	// (0x00048024) form_field_slider_pane_t2_ParamLimits

0x5bc9,	// (0x00048024) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00051ad8) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00051ad8) form_field_slider_pane_t

0x0a54,	// (0x00042eaf) input_focus_pane_cp9_ParamLimits

0x0a54,	// (0x00042eaf) input_focus_pane_cp9

0x5bde,	// (0x00048039) slider_cont_pane_ParamLimits

0x5bde,	// (0x00048039) slider_cont_pane

0x0e5a,	// (0x000432b5) form_field_slider_wide_pane_t1_ParamLimits

0x0e5a,	// (0x000432b5) form_field_slider_wide_pane_t1

0x5bf2,	// (0x0004804d) form_field_slider_wide_pane_t2_ParamLimits

0x5bf2,	// (0x0004804d) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00051add) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00051add) form_field_slider_wide_pane_t

0x0a54,	// (0x00042eaf) input_focus_pane_cp10_ParamLimits

0x0a54,	// (0x00042eaf) input_focus_pane_cp10

0x5c04,	// (0x0004805f) slider_cont_pane_cp1_ParamLimits

0x5c04,	// (0x0004805f) slider_cont_pane_cp1

0x5c18,	// (0x00048073) slider_form_pane_cp

0x0e6c,	// (0x000432c7) input_focus_pane_g1

0x0e74,	// (0x000432cf) input_focus_pane_g2

0x0e7c,	// (0x000432d7) input_focus_pane_g3

0x0e84,	// (0x000432df) input_focus_pane_g4

0x0e8c,	// (0x000432e7) input_focus_pane_g5

0x0e94,	// (0x000432ef) input_focus_pane_g6

0x0e9c,	// (0x000432f7) input_focus_pane_g7

0x0ea4,	// (0x000432ff) input_focus_pane_g8

0x0eac,	// (0x00043307) input_focus_pane_g9

0x09fc,	// (0x00042e57) input_focus_pane_g10

0x0009,

0xf687,	// (0x00051ae2) input_focus_pane_g

0xa300,	// (0x0004c75b) wait_border_pane_g3_copy1

0x5c20,	// (0x0004807b) data_form_pane_t1

0x09fc,	// (0x00042e57) wait_anim_pane_g1_copy1

0x5eab,	// (0x00048306) data_form_wide_pane_t1

0x5c3b,	// (0x00048096) list_form_graphic_pane_cp_ParamLimits

0x5c3b,	// (0x00048096) list_form_graphic_pane_cp

0xb1ef,	// (0x0004d64a) slider_form_pane_g1

0xb1f8,	// (0x0004d653) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00051de5) slider_form_pane_g

0x5c3b,	// (0x00048096) list_form_graphic_pane_ParamLimits

0x5c3b,	// (0x00048096) list_form_graphic_pane

0x5c54,	// (0x000480af) list_form_graphic_pane_g1

0x5c5c,	// (0x000480b7) list_form_graphic_pane_t1_ParamLimits

0x5c5c,	// (0x000480b7) list_form_graphic_pane_t1

0x0a62,	// (0x00042ebd) list_highlight_pane_cp5_ParamLimits

0x0a62,	// (0x00042ebd) list_highlight_pane_cp5

0x5c71,	// (0x000480cc) find_pane_g1

0x0eb4,	// (0x0004330f) input_find_pane

0x5c7a,	// (0x000480d5) input_find_pane_g1_ParamLimits

0x5c7a,	// (0x000480d5) input_find_pane_g1

0x5c86,	// (0x000480e1) input_find_pane_t1_ParamLimits

0x5c86,	// (0x000480e1) input_find_pane_t1

0x5c9b,	// (0x000480f6) input_find_pane_t2_ParamLimits

0x5c9b,	// (0x000480f6) input_find_pane_t2

0x0001,

0xf69c,	// (0x00051af7) input_find_pane_t_ParamLimits

0xf69c,	// (0x00051af7) input_find_pane_t

0x0ebd,	// (0x00043318) input_focus_pane_cp5_ParamLimits

0x0ebd,	// (0x00043318) input_focus_pane_cp5

0x0ecb,	// (0x00043326) bg_popup_window_pane_cp2_ParamLimits

0x0ecb,	// (0x00043326) bg_popup_window_pane_cp2

0x0ed8,	// (0x00043333) listscroll_menu_pane_ParamLimits

0x0ed8,	// (0x00043333) listscroll_menu_pane

0x6f8f,	// (0x000493ea) popup_submenu_window_ParamLimits

0x6f8f,	// (0x000493ea) popup_submenu_window

0x0ee4,	// (0x0004333f) find_popup_pane_g1

0x6fb7,	// (0x00049412) input_popup_find_pane_cp

0x0ebd,	// (0x00043318) input_focus_pane_cp4_ParamLimits

0x0ebd,	// (0x00043318) input_focus_pane_cp4

0x0eec,	// (0x00043347) input_popup_find_pane_t1_ParamLimits

0x0eec,	// (0x00043347) input_popup_find_pane_t1

0x0a06,	// (0x00042e61) bg_popup_sub_pane_cp

0x0f1a,	// (0x00043375) listscroll_popup_sub_pane

0x0f22,	// (0x0004337d) list_submenu_pane_ParamLimits

0x0f22,	// (0x0004337d) list_submenu_pane

0x0f33,	// (0x0004338e) scroll_pane_cp4

0x6fcf,	// (0x0004942a) list_single_popup_submenu_pane_ParamLimits

0x6fcf,	// (0x0004942a) list_single_popup_submenu_pane

0x237e,	// (0x000447d9) list_single_popup_submenu_pane_g1

0x6fe3,	// (0x0004943e) list_single_popup_submenu_pane_t1_ParamLimits

0x6fe3,	// (0x0004943e) list_single_popup_submenu_pane_t1

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp1_ParamLimits

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp1

0x0f3b,	// (0x00043396) tabs_2_active_pane_g1

0x6ff8,	// (0x00049453) tabs_2_active_pane_t1

0x0a62,	// (0x00042ebd) bg_passive_tab_pane_cp1_ParamLimits

0x0a62,	// (0x00042ebd) bg_passive_tab_pane_cp1

0x0f3b,	// (0x00043396) tabs_2_passive_pane_g1

0x6ff8,	// (0x00049453) tabs_2_passive_pane_t1

0x213e,	// (0x00044599) bg_active_tab_pane_cp4

0x700a,	// (0x00049465) tabs_2_long_active_pane_t1

0x701d,	// (0x00049478) bg_passive_tab_pane_cp4

0x80e8,	// (0x0004a543) list_single_midp_graphic_pane_g4_ParamLimits

0x213e,	// (0x00044599) bg_active_tab_pane_cp5

0x7029,	// (0x00049484) tabs_3_long_active_pane_t1

0x701d,	// (0x00049478) bg_passive_tab_pane_cp5

0x80e8,	// (0x0004a543) list_single_midp_graphic_pane_g4

0x0a62,	// (0x00042ebd) bg_popup_window_pane_cp13_ParamLimits

0x0a62,	// (0x00042ebd) bg_popup_window_pane_cp13

0x0f43,	// (0x0004339e) listscroll_popup_fast_pane_ParamLimits

0x0f43,	// (0x0004339e) listscroll_popup_fast_pane

0x0f4f,	// (0x000433aa) grid_popup_fast_pane_ParamLimits

0x0f4f,	// (0x000433aa) grid_popup_fast_pane

0x0f61,	// (0x000433bc) scroll_pane_cp9_ParamLimits

0x0f61,	// (0x000433bc) scroll_pane_cp9

0xcadf,	// (0x0004ef3a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcadf,	// (0x0004ef3a) list_single_graphic_hl_pane_t1_cp2

0x0f74,	// (0x000433cf) input_focus_pane_cp20_ParamLimits

0x0f74,	// (0x000433cf) input_focus_pane_cp20

0x0f82,	// (0x000433dd) query_popup_data_pane_t1_ParamLimits

0x0f82,	// (0x000433dd) query_popup_data_pane_t1

0x0f95,	// (0x000433f0) query_popup_data_pane_t2_ParamLimits

0x0f95,	// (0x000433f0) query_popup_data_pane_t2

0x0fdb,	// (0x00043436) query_popup_data_pane_t3_ParamLimits

0x0fdb,	// (0x00043436) query_popup_data_pane_t3

0x101c,	// (0x00043477) query_popup_data_pane_t4_ParamLimits

0x101c,	// (0x00043477) query_popup_data_pane_t4

0x1058,	// (0x000434b3) query_popup_data_pane_t5_ParamLimits

0x1058,	// (0x000434b3) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00051afc) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00051afc) query_popup_data_pane_t

0x0e6c,	// (0x000432c7) bg_set_opt_pane_g1

0x0e74,	// (0x000432cf) bg_set_opt_pane_g2

0x0e7c,	// (0x000432d7) bg_set_opt_pane_g3

0x0e84,	// (0x000432df) bg_set_opt_pane_g4

0x0e8c,	// (0x000432e7) bg_set_opt_pane_g5

0x0e94,	// (0x000432ef) bg_set_opt_pane_g6

0x0e9c,	// (0x000432f7) bg_set_opt_pane_g7

0x0ea4,	// (0x000432ff) bg_set_opt_pane_g8

0x0eac,	// (0x00043307) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00051b07) bg_set_opt_pane_g

0x7520,	// (0x0004997b) control_top_pane_stacon_ParamLimits

0x7520,	// (0x0004997b) control_top_pane_stacon

0x7573,	// (0x000499ce) signal_pane_stacon_ParamLimits

0x7573,	// (0x000499ce) signal_pane_stacon

0x4928,	// (0x00046d83) stacon_top_pane_g1_ParamLimits

0x4928,	// (0x00046d83) stacon_top_pane_g1

0x7598,	// (0x000499f3) title_pane_stacon_ParamLimits

0x7598,	// (0x000499f3) title_pane_stacon

0x75c2,	// (0x00049a1d) uni_indicator_pane_stacon_ParamLimits

0x75c2,	// (0x00049a1d) uni_indicator_pane_stacon

0x75d7,	// (0x00049a32) battery_pane_stacon_ParamLimits

0x75d7,	// (0x00049a32) battery_pane_stacon

0x761b,	// (0x00049a76) control_bottom_pane_stacon_ParamLimits

0x761b,	// (0x00049a76) control_bottom_pane_stacon

0x763e,	// (0x00049a99) navi_pane_stacon_ParamLimits

0x763e,	// (0x00049a99) navi_pane_stacon

0x4a13,	// (0x00046e6e) stacon_bottom_pane_g1_ParamLimits

0x4a13,	// (0x00046e6e) stacon_bottom_pane_g1

0x7055,	// (0x000494b0) aid_levels_signal_lsc_ParamLimits

0x7055,	// (0x000494b0) aid_levels_signal_lsc

0x706b,	// (0x000494c6) signal_pane_stacon_g1_ParamLimits

0x706b,	// (0x000494c6) signal_pane_stacon_g1

0x707f,	// (0x000494da) signal_pane_stacon_g2_ParamLimits

0x707f,	// (0x000494da) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00051b1a) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00051b1a) signal_pane_stacon_g

0x70b4,	// (0x0004950f) title_pane_stacon_t1_ParamLimits

0x70b4,	// (0x0004950f) title_pane_stacon_t1

0x10b0,	// (0x0004350b) uni_indicator_pane_stacon_g1

0x10ba,	// (0x00043515) uni_indicator_pane_stacon_g2

0x109c,	// (0x000434f7) uni_indicator_pane_stacon_g3

0x10a6,	// (0x00043501) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00051b26) uni_indicator_pane_stacon_g

0x70d9,	// (0x00049534) control_top_pane_stacon_g1

0x70e1,	// (0x0004953c) control_top_pane_stacon_t1_ParamLimits

0x70e1,	// (0x0004953c) control_top_pane_stacon_t1

0x7118,	// (0x00049573) aid_levels_battery_lsc_ParamLimits

0x7118,	// (0x00049573) aid_levels_battery_lsc

0x712f,	// (0x0004958a) battery_pane_stacon_g1_ParamLimits

0x712f,	// (0x0004958a) battery_pane_stacon_g1

0x7142,	// (0x0004959d) battery_pane_stacon_g2_ParamLimits

0x7142,	// (0x0004959d) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00051b2f) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00051b2f) battery_pane_stacon_g

0x7180,	// (0x000495db) navi_icon_pane_stacon

0x7194,	// (0x000495ef) navi_navi_pane_stacon

0x7180,	// (0x000495db) navi_text_pane_stacon

0x70d9,	// (0x00049534) control_bottom_pane_stacon_g1

0x71a8,	// (0x00049603) control_bottom_pane_stacon_t1_ParamLimits

0x71a8,	// (0x00049603) control_bottom_pane_stacon_t1

0x71df,	// (0x0004963a) grid_app_pane_ParamLimits

0x71df,	// (0x0004963a) grid_app_pane

0x7201,	// (0x0004965c) scroll_pane_cp15_ParamLimits

0x7201,	// (0x0004965c) scroll_pane_cp15

0x7214,	// (0x0004966f) cell_app_pane_ParamLimits

0x7214,	// (0x0004966f) cell_app_pane

0x723c,	// (0x00049697) cell_app_pane_g1_ParamLimits

0x723c,	// (0x00049697) cell_app_pane_g1

0x10de,	// (0x00043539) cell_app_pane_g2_ParamLimits

0x10de,	// (0x00043539) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00051b34) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00051b34) cell_app_pane_g

0x7260,	// (0x000496bb) cell_app_pane_t1_ParamLimits

0x7260,	// (0x000496bb) cell_app_pane_t1

0x10ea,	// (0x00043545) grid_highlight_pane_ParamLimits

0x10ea,	// (0x00043545) grid_highlight_pane

0x0e6c,	// (0x000432c7) cell_highlight_pane_g1

0x0e74,	// (0x000432cf) cell_highlight_pane_g2

0x0e7c,	// (0x000432d7) cell_highlight_pane_g3

0x0e84,	// (0x000432df) cell_highlight_pane_g4

0x0e8c,	// (0x000432e7) cell_highlight_pane_g5

0x0e94,	// (0x000432ef) cell_highlight_pane_g6

0x0e9c,	// (0x000432f7) cell_highlight_pane_g7

0x0ea4,	// (0x000432ff) cell_highlight_pane_g8

0x0eac,	// (0x00043307) cell_highlight_pane_g9

0x09fc,	// (0x00042e57) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00051ae2) cell_highlight_pane_g

0x10fb,	// (0x00043556) bg_scroll_pane

0x728a,	// (0x000496e5) scroll_handle_pane

0x1142,	// (0x0004359d) scroll_bg_pane_g1

0x1157,	// (0x000435b2) scroll_bg_pane_g2

0x116f,	// (0x000435ca) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00051b39) scroll_bg_pane_g

0x72b3,	// (0x0004970e) scroll_handle_focus_pane_ParamLimits

0x72b3,	// (0x0004970e) scroll_handle_focus_pane

0x1142,	// (0x0004359d) scroll_handle_pane_g1

0x1184,	// (0x000435df) scroll_handle_pane_g2

0x116f,	// (0x000435ca) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00051b40) scroll_handle_pane_g

0x0ebd,	// (0x00043318) bg_popup_sub_pane_cp21_ParamLimits

0x0ebd,	// (0x00043318) bg_popup_sub_pane_cp21

0x72c0,	// (0x0004971b) popup_fep_japan_predictive_window_t1_ParamLimits

0x72c0,	// (0x0004971b) popup_fep_japan_predictive_window_t1

0x72da,	// (0x00049735) popup_fep_japan_predictive_window_t2_ParamLimits

0x72da,	// (0x00049735) popup_fep_japan_predictive_window_t2

0x730d,	// (0x00049768) popup_fep_japan_predictive_window_t3_ParamLimits

0x730d,	// (0x00049768) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00051b47) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00051b47) popup_fep_japan_predictive_window_t

0x0a06,	// (0x00042e61) bg_popup_sub_pane_cp23

0x34b7,	// (0x00045912) listscroll_japin_cand_pane

0x1198,	// (0x000435f3) popup_fep_japan_candidate_window_t1

0x11a6,	// (0x00043601) candidate_pane_ParamLimits

0x11a6,	// (0x00043601) candidate_pane

0x7344,	// (0x0004979f) scroll_pane_cp30

0x11b8,	// (0x00043613) list_single_popup_jap_candidate_pane_ParamLimits

0x11b8,	// (0x00043613) list_single_popup_jap_candidate_pane

0x0a06,	// (0x00042e61) list_highlight_pane_cp30

0x11cd,	// (0x00043628) list_single_popup_jap_candidate_pane_t1

0x11dc,	// (0x00043637) level_1_signal

0x11e9,	// (0x00043644) level_2_signal

0x11f6,	// (0x00043651) level_3_signal

0x1203,	// (0x0004365e) level_4_signal

0x1210,	// (0x0004366b) level_5_signal

0x121d,	// (0x00043678) level_6_signal

0x122a,	// (0x00043685) level_7_signal

0x11dc,	// (0x00043637) level_1_battery

0x11e9,	// (0x00043644) level_2_battery

0x11f6,	// (0x00043651) level_3_battery

0x1203,	// (0x0004365e) level_4_battery

0x1210,	// (0x0004366b) level_5_battery

0x121d,	// (0x00043678) level_6_battery

0x122a,	// (0x00043685) level_7_battery

0x124f,	// (0x000436aa) list_menu_pane_ParamLimits

0x124f,	// (0x000436aa) list_menu_pane

0x1265,	// (0x000436c0) scroll_pane_cp25_ParamLimits

0x1265,	// (0x000436c0) scroll_pane_cp25

0x127e,	// (0x000436d9) list_double2_graphic_pane_cp2_ParamLimits

0x127e,	// (0x000436d9) list_double2_graphic_pane_cp2

0x127e,	// (0x000436d9) list_double2_large_graphic_pane_cp2_ParamLimits

0x127e,	// (0x000436d9) list_double2_large_graphic_pane_cp2

0x127e,	// (0x000436d9) list_double2_pane_cp2_ParamLimits

0x127e,	// (0x000436d9) list_double2_pane_cp2

0x127e,	// (0x000436d9) list_double_graphic_pane_cp2_ParamLimits

0x127e,	// (0x000436d9) list_double_graphic_pane_cp2

0x127e,	// (0x000436d9) list_double_large_graphic_pane_cp2_ParamLimits

0x127e,	// (0x000436d9) list_double_large_graphic_pane_cp2

0x127e,	// (0x000436d9) list_double_number_pane_cp2_ParamLimits

0x127e,	// (0x000436d9) list_double_number_pane_cp2

0x127e,	// (0x000436d9) list_double_pane_cp2_ParamLimits

0x127e,	// (0x000436d9) list_double_pane_cp2

0x737f,	// (0x000497da) list_single_2graphic_pane_cp2_ParamLimits

0x737f,	// (0x000497da) list_single_2graphic_pane_cp2

0x737f,	// (0x000497da) list_single_graphic_heading_pane_cp2_ParamLimits

0x737f,	// (0x000497da) list_single_graphic_heading_pane_cp2

0x737f,	// (0x000497da) list_single_graphic_pane_cp2_ParamLimits

0x737f,	// (0x000497da) list_single_graphic_pane_cp2

0x737f,	// (0x000497da) list_single_heading_pane_cp2_ParamLimits

0x737f,	// (0x000497da) list_single_heading_pane_cp2

0x128e,	// (0x000436e9) list_single_large_graphic_pane_cp2_ParamLimits

0x128e,	// (0x000436e9) list_single_large_graphic_pane_cp2

0x737f,	// (0x000497da) list_single_number_heading_pane_cp2_ParamLimits

0x737f,	// (0x000497da) list_single_number_heading_pane_cp2

0x737f,	// (0x000497da) list_single_number_pane_cp2_ParamLimits

0x737f,	// (0x000497da) list_single_number_pane_cp2

0x737f,	// (0x000497da) list_single_pane_cp2_ParamLimits

0x737f,	// (0x000497da) list_single_pane_cp2

0x12a8,	// (0x00043703) bg_popup_sub_pane_cp22

0x7457,	// (0x000498b2) popup_side_volume_key_window_g1

0x747b,	// (0x000498d6) popup_side_volume_key_window_t1

0x7497,	// (0x000498f2) volume_small_pane_cp1

0x0a54,	// (0x00042eaf) bg_popup_sub_pane_cp24_ParamLimits

0x0a54,	// (0x00042eaf) bg_popup_sub_pane_cp24

0x12be,	// (0x00043719) fep_china_uni_candidate_pane_ParamLimits

0x12be,	// (0x00043719) fep_china_uni_candidate_pane

0x12d2,	// (0x0004372d) fep_china_uni_entry_pane

0x12e2,	// (0x0004373d) popup_fep_china_uni_window_g1

0x749f,	// (0x000498fa) fep_china_uni_entry_pane_g1

0x74a7,	// (0x00049902) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00051b78) fep_china_uni_entry_pane_g

0x12fe,	// (0x00043759) fep_entry_item_pane

0x1308,	// (0x00043763) fep_candidate_item_pane

0x74af,	// (0x0004990a) fep_china_uni_candidate_pane_g1

0x1310,	// (0x0004376b) fep_china_uni_candidate_pane_g2

0x1318,	// (0x00043773) fep_china_uni_candidate_pane_g3

0x74b7,	// (0x00049912) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00051b7d) fep_china_uni_candidate_pane_g

0x09fc,	// (0x00042e57) fep_entry_item_pane_g1

0x1320,	// (0x0004377b) fep_entry_item_pane_t1_ParamLimits

0x1320,	// (0x0004377b) fep_entry_item_pane_t1

0x1336,	// (0x00043791) fep_candidate_item_pane_t1_ParamLimits

0x1336,	// (0x00043791) fep_candidate_item_pane_t1

0x134b,	// (0x000437a6) fep_candidate_item_pane_t2_ParamLimits

0x134b,	// (0x000437a6) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00051b86) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00051b86) fep_candidate_item_pane_t

0x0a62,	// (0x00042ebd) list_highlight_pane_cp31_ParamLimits

0x0a62,	// (0x00042ebd) list_highlight_pane_cp31

0x135d,	// (0x000437b8) level_1_signal_lsc

0x1366,	// (0x000437c1) level_2_signal_lsc

0x136f,	// (0x000437ca) level_3_signal_lsc

0x1378,	// (0x000437d3) level_4_signal_lsc

0x1381,	// (0x000437dc) level_5_signal_lsc

0x138a,	// (0x000437e5) level_6_signal_lsc

0x1393,	// (0x000437ee) level_7_signal_lsc

0x1393,	// (0x000437ee) level_1_battery_lsc

0x139c,	// (0x000437f7) level_2_battery_lsc

0x13a5,	// (0x00043800) level_3_battery_lsc

0x13ae,	// (0x00043809) level_4_battery_lsc

0x13b7,	// (0x00043812) level_5_battery_lsc

0x13c0,	// (0x0004381b) level_6_battery_lsc

0x135d,	// (0x000437b8) level_7_battery_lsc

0x13c9,	// (0x00043824) scroll_handle_focus_pane_g1

0x13d2,	// (0x0004382d) scroll_handle_focus_pane_g2

0x13db,	// (0x00043836) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00051b8b) scroll_handle_focus_pane_g

0x5cb0,	// (0x0004810b) list_single_2graphic_pane_g1_ParamLimits

0x5cb0,	// (0x0004810b) list_single_2graphic_pane_g1

0x6ecc,	// (0x00049327) list_single_2graphic_pane_g2_ParamLimits

0x6ecc,	// (0x00049327) list_single_2graphic_pane_g2

0x6eae,	// (0x00049309) list_single_2graphic_pane_g3_ParamLimits

0x6eae,	// (0x00049309) list_single_2graphic_pane_g3

0x5cbc,	// (0x00048117) list_single_2graphic_pane_g4_ParamLimits

0x5cbc,	// (0x00048117) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00051b92) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00051b92) list_single_2graphic_pane_g

0x5cc8,	// (0x00048123) list_single_2graphic_pane_t1_ParamLimits

0x5cc8,	// (0x00048123) list_single_2graphic_pane_t1

0x5cf6,	// (0x00048151) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5cf6,	// (0x00048151) list_double2_graphic_large_graphic_pane_g1

0x58be,	// (0x00047d19) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x58be,	// (0x00047d19) list_double2_graphic_large_graphic_pane_g2

0x6f3c,	// (0x00049397) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6f3c,	// (0x00049397) list_double2_graphic_large_graphic_pane_g3

0x74bf,	// (0x0004991a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x74bf,	// (0x0004991a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00051b9b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00051b9b) list_double2_graphic_large_graphic_pane_g

0x5d06,	// (0x00048161) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5d06,	// (0x00048161) list_double2_graphic_large_graphic_pane_t1

0x5d1c,	// (0x00048177) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5d1c,	// (0x00048177) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00051ba4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00051ba4) list_double2_graphic_large_graphic_pane_t

0x769d,	// (0x00049af8) popup_fast_swap_window_ParamLimits

0x769d,	// (0x00049af8) popup_fast_swap_window

0x76b9,	// (0x00049b14) popup_side_volume_key_window

0x4a9e,	// (0x00046ef9) stacon_top_pane

0x4aa8,	// (0x00046f03) status_pane_ParamLimits

0x4aa8,	// (0x00046f03) status_pane

0x76d3,	// (0x00049b2e) status_small_pane

0x0a06,	// (0x00042e61) control_pane

0x0a06,	// (0x00042e61) stacon_bottom_pane

0x0df7,	// (0x00043252) scroll_pane_cp121

0x0dee,	// (0x00043249) set_content_pane

0x74cb,	// (0x00049926) bg_active_tab_pane_g1_cp1

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp1

0x74dd,	// (0x00049938) bg_active_tab_pane_g3_cp1

0x74cb,	// (0x00049926) bg_passive_tab_pane_g1_cp1

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp1

0x74dd,	// (0x00049938) bg_passive_tab_pane_g3_cp1

0x74e6,	// (0x00049941) bg_active_tab_pane_g1_cp2

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp2

0x74ef,	// (0x0004994a) bg_active_tab_pane_g3_cp2

0x74e6,	// (0x00049941) bg_passive_tab_pane_g1_cp2

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp2

0x74ef,	// (0x0004994a) bg_passive_tab_pane_g3_cp2

0x74f8,	// (0x00049953) bg_active_tab_pane_g1_cp3

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp3

0x7501,	// (0x0004995c) bg_active_tab_pane_g3_cp3

0x74f8,	// (0x00049953) bg_passive_tab_pane_g1_cp3

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp3

0x7501,	// (0x0004995c) bg_passive_tab_pane_g3_cp3

0x750a,	// (0x00049965) bg_active_tab_pane_g1_cp4

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp4

0x7515,	// (0x00049970) bg_active_tab_pane_g3_cp4

0x750a,	// (0x00049965) bg_passive_tab_pane_g1_cp4

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp4

0x7515,	// (0x00049970) bg_passive_tab_pane_g3_cp4

0x7661,	// (0x00049abc) bg_active_tab_pane_g1_cp5

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp5

0x766a,	// (0x00049ac5) bg_active_tab_pane_g3_cp5

0x7661,	// (0x00049abc) bg_passive_tab_pane_g1_cp5

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp5

0x766a,	// (0x00049ac5) bg_passive_tab_pane_g3_cp5

0x7673,	// (0x00049ace) list_set_graphic_pane_ParamLimits

0x7673,	// (0x00049ace) list_set_graphic_pane

0x0a06,	// (0x00042e61) bg_set_opt_pane_cp4

0x4a2f,	// (0x00046e8a) list_set_graphic_pane_g1_ParamLimits

0x4a2f,	// (0x00046e8a) list_set_graphic_pane_g1

0x4a3b,	// (0x00046e96) list_set_graphic_pane_g2_ParamLimits

0x4a3b,	// (0x00046e96) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00051ba9) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00051ba9) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00051f41) volume_small_pane_cp_g

0x7691,	// (0x00049aec) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7691,	// (0x00049aec) list_double2_large_graphic_pane_g1_cp2

0x4a5d,	// (0x00046eb8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a5d,	// (0x00046eb8) list_double2_large_graphic_pane_g2_cp2

0x4a6e,	// (0x00046ec9) list_double2_large_graphic_pane_g3_cp2

0x4a76,	// (0x00046ed1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4a76,	// (0x00046ed1) list_double2_large_graphic_pane_t1_cp2

0x4a8c,	// (0x00046ee7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4a8c,	// (0x00046ee7) list_double2_large_graphic_pane_t2_cp2

0xadb1,	// (0x0004d20c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadb1,	// (0x0004d20c) list_double_large_graphic_pane_g1_cp2

0xadc2,	// (0x0004d21d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xadc2,	// (0x0004d21d) list_double_large_graphic_pane_g2_cp2

0x4bb8,	// (0x00047013) list_double_large_graphic_pane_g3_cp2

0xadd3,	// (0x0004d22e) list_double_large_graphic_pane_g4_cp

0xaddb,	// (0x0004d236) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaddb,	// (0x0004d236) list_double_large_graphic_pane_t1_cp2

0xadf2,	// (0x0004d24d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadf2,	// (0x0004d24d) list_double_large_graphic_pane_t2_cp2

0x4ab6,	// (0x00046f11) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4ab6,	// (0x00046f11) list_double2_graphic_pane_g1_cp2

0x4ac4,	// (0x00046f1f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4ac4,	// (0x00046f1f) list_double2_graphic_pane_g2_cp2

0x4ad5,	// (0x00046f30) list_double2_graphic_pane_g3_cp2

0x4adf,	// (0x00046f3a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4adf,	// (0x00046f3a) list_double2_graphic_pane_t1_cp2

0x4af5,	// (0x00046f50) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4af5,	// (0x00046f50) list_double2_graphic_pane_t2_cp2

0x13e4,	// (0x0004383f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x13e4,	// (0x0004383f) list_single_number_heading_pane_g1_cp2

0x4b07,	// (0x00046f62) list_single_number_heading_pane_g2_cp2

0x4b0f,	// (0x00046f6a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b0f,	// (0x00046f6a) list_single_number_heading_pane_t1_cp2

0x4b25,	// (0x00046f80) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4b25,	// (0x00046f80) list_single_number_heading_pane_t2_cp2

0x4b37,	// (0x00046f92) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4b37,	// (0x00046f92) list_single_number_heading_pane_t3_cp2

0x13e4,	// (0x0004383f) list_single_heading_pane_g1_cp2_ParamLimits

0x13e4,	// (0x0004383f) list_single_heading_pane_g1_cp2

0x4b07,	// (0x00046f62) list_single_heading_pane_g2_cp2

0x4b0f,	// (0x00046f6a) list_single_heading_pane_t1_cp2_ParamLimits

0x4b0f,	// (0x00046f6a) list_single_heading_pane_t1_cp2

0xabbb,	// (0x0004d016) list_single_heading_pane_t2_cp2_ParamLimits

0xabbb,	// (0x0004d016) list_single_heading_pane_t2_cp2

0xab03,	// (0x0004cf5e) list_double_graphic_pane_g1_cp2_ParamLimits

0xab03,	// (0x0004cf5e) list_double_graphic_pane_g1_cp2

0xab0f,	// (0x0004cf6a) list_double_graphic_pane_g2_cp2_ParamLimits

0xab0f,	// (0x0004cf6a) list_double_graphic_pane_g2_cp2

0xab1e,	// (0x0004cf79) list_double_graphic_pane_g3_cp2

0xab26,	// (0x0004cf81) list_double_graphic_pane_t1_cp2_ParamLimits

0xab26,	// (0x0004cf81) list_double_graphic_pane_t1_cp2

0xab3c,	// (0x0004cf97) list_double_graphic_pane_t2_cp2_ParamLimits

0xab3c,	// (0x0004cf97) list_double_graphic_pane_t2_cp2

0x4bac,	// (0x00047007) list_double_number_pane_g1_cp2_ParamLimits

0x4bac,	// (0x00047007) list_double_number_pane_g1_cp2

0x4bb8,	// (0x00047013) list_double_number_pane_g2_cp2

0xaac7,	// (0x0004cf22) list_double_number_pane_t1_cp2_ParamLimits

0xaac7,	// (0x0004cf22) list_double_number_pane_t1_cp2

0xaadb,	// (0x0004cf36) list_double_number_pane_t2_cp2_ParamLimits

0xaadb,	// (0x0004cf36) list_double_number_pane_t2_cp2

0xaaf1,	// (0x0004cf4c) list_double_number_pane_t3_cp2_ParamLimits

0xaaf1,	// (0x0004cf4c) list_double_number_pane_t3_cp2

0xa9b0,	// (0x0004ce0b) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9b0,	// (0x0004ce0b) list_single_graphic_pane_g1_cp2

0x4c08,	// (0x00047063) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c08,	// (0x00047063) list_single_graphic_pane_g2_cp2

0x4c14,	// (0x0004706f) list_single_graphic_pane_g3_cp2

0xa986,	// (0x0004cde1) list_single_graphic_pane_t1_cp2_ParamLimits

0xa986,	// (0x0004cde1) list_single_graphic_pane_t1_cp2

0x4c08,	// (0x00047063) list_single_number_pane_g1_cp2_ParamLimits

0x4c08,	// (0x00047063) list_single_number_pane_g1_cp2

0x4c14,	// (0x0004706f) list_single_number_pane_g2_cp2

0xa986,	// (0x0004cde1) list_single_number_pane_t1_cp2_ParamLimits

0xa986,	// (0x0004cde1) list_single_number_pane_t1_cp2

0xa99c,	// (0x0004cdf7) list_single_number_pane_t2_cp2_ParamLimits

0xa99c,	// (0x0004cdf7) list_single_number_pane_t2_cp2

0x4a5d,	// (0x00046eb8) list_double2_pane_g1_cp2_ParamLimits

0x4a5d,	// (0x00046eb8) list_double2_pane_g1_cp2

0x4a6e,	// (0x00046ec9) list_double2_pane_g2_cp2

0x4b84,	// (0x00046fdf) list_double2_pane_t1_cp2_ParamLimits

0x4b84,	// (0x00046fdf) list_double2_pane_t1_cp2

0x4b9a,	// (0x00046ff5) list_double2_pane_t2_cp2_ParamLimits

0x4b9a,	// (0x00046ff5) list_double2_pane_t2_cp2

0x4bac,	// (0x00047007) list_double_pane_g1_cp2_ParamLimits

0x4bac,	// (0x00047007) list_double_pane_g1_cp2

0x4bb8,	// (0x00047013) list_double_pane_g2_cp2

0x4bc0,	// (0x0004701b) list_double_pane_t1_cp2_ParamLimits

0x4bc0,	// (0x0004701b) list_double_pane_t1_cp2

0x4bd6,	// (0x00047031) list_double_pane_t2_cp2_ParamLimits

0x4bd6,	// (0x00047031) list_double_pane_t2_cp2

0x76de,	// (0x00049b39) list_single_pane_cp2_g3

0x4c08,	// (0x00047063) list_single_pane_g1_cp2_ParamLimits

0x4c08,	// (0x00047063) list_single_pane_g1_cp2

0x4c14,	// (0x0004706f) list_single_pane_g2_cp2

0x4c1c,	// (0x00047077) list_single_pane_t1_cp2_ParamLimits

0x4c1c,	// (0x00047077) list_single_pane_t1_cp2

0x76e6,	// (0x00049b41) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x76e6,	// (0x00049b41) list_single_large_graphic_pane_g1_cp2

0x4c34,	// (0x0004708f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4c34,	// (0x0004708f) list_single_large_graphic_pane_g2_cp2

0x4c40,	// (0x0004709b) list_single_large_graphic_pane_g3_cp2

0x76f2,	// (0x00049b4d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x76f2,	// (0x00049b4d) list_single_large_graphic_pane_g4_cp1

0x4c48,	// (0x000470a3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c48,	// (0x000470a3) list_single_large_graphic_pane_t1_cp2

0xa952,	// (0x0004cdad) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa952,	// (0x0004cdad) list_single_graphic_heading_pane_g1_cp2

0xa91f,	// (0x0004cd7a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa91f,	// (0x0004cd7a) list_single_graphic_heading_pane_g4_cp2

0x4c14,	// (0x0004706f) list_single_graphic_heading_pane_g5_cp2

0xa95e,	// (0x0004cdb9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa95e,	// (0x0004cdb9) list_single_graphic_heading_pane_t1_cp2

0xa974,	// (0x0004cdcf) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa974,	// (0x0004cdcf) list_single_graphic_heading_pane_t2_cp2

0xa913,	// (0x0004cd6e) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa913,	// (0x0004cd6e) list_single_2graphic_pane_g1_cp2

0xa91f,	// (0x0004cd7a) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa91f,	// (0x0004cd7a) list_single_2graphic_pane_g2_cp2

0x4c14,	// (0x0004706f) list_single_2graphic_pane_g3_cp2

0xa930,	// (0x0004cd8b) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa930,	// (0x0004cd8b) list_single_2graphic_pane_g4_cp2

0xa93c,	// (0x0004cd97) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa93c,	// (0x0004cd97) list_single_2graphic_pane_t1_cp2

0x09fc,	// (0x00042e57) list_highlight_pane_g10_cp1

0xa4fb,	// (0x0004c956) list_highlight_pane_g1_cp1

0xa503,	// (0x0004c95e) list_highlight_pane_g2_cp1

0xa50b,	// (0x0004c966) list_highlight_pane_g3_cp1

0xa513,	// (0x0004c96e) list_highlight_pane_g4_cp1

0xa51b,	// (0x0004c976) list_highlight_pane_g5_cp1

0xa523,	// (0x0004c97e) list_highlight_pane_g6_cp1

0xa52b,	// (0x0004c986) list_highlight_pane_g7_cp1

0xa533,	// (0x0004c98e) list_highlight_pane_g8_cp1

0xa53b,	// (0x0004c996) list_highlight_pane_g9_cp1

0xa423,	// (0x0004c87e) form_field_slider_pane_t3

0xa431,	// (0x0004c88c) form_field_slider_pane_t4

0xa43f,	// (0x0004c89a) slider_form_pane_ParamLimits

0xa43f,	// (0x0004c89a) slider_form_pane

0x0a06,	// (0x00042e61) control_abbreviations

0x0a06,	// (0x00042e61) control_conventions

0x0a06,	// (0x00042e61) control_definitions

0x0a06,	// (0x00042e61) format_table_attribute

0xac05,	// (0x0004d060) bg_popup_preview_window_pane_g9

0x0a06,	// (0x00042e61) format_table_data2

0x0a06,	// (0x00042e61) format_table_data3

0x0a06,	// (0x00042e61) format_table_data_example

0x0008,

0x0a06,	// (0x00042e61) intro_purpose

0xf8ea,	// (0x00051d45) bg_popup_preview_window_pane_g

0x0a06,	// (0x00042e61) texts_category

0x0a06,	// (0x00042e61) texts_graphics

0x4c5e,	// (0x000470b9) text_digital

0x4c6d,	// (0x000470c8) text_primary

0x4c7c,	// (0x000470d7) text_primary_small

0x4c8b,	// (0x000470e6) text_secondary

0x4c9a,	// (0x000470f5) text_title

0xb2f7,	// (0x0004d752) bg_passive_tab_pane_g1_cp3_srt

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp3_srt

0xb300,	// (0x0004d75b) bg_passive_tab_pane_g3_cp3_srt

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp3_srt_ParamLimits

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp3_srt

0xb309,	// (0x0004d764) tabs_4_active_pane_srt_g1

0xb311,	// (0x0004d76c) tabs_4_active_pane_srt_t1_ParamLimits

0xb311,	// (0x0004d76c) tabs_4_active_pane_srt_t1

0xb2f7,	// (0x0004d752) bg_active_tab_pane_g1_cp3_copy1

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp3_copy1

0xb300,	// (0x0004d75b) bg_active_tab_pane_g3_cp3_copy1

0x0a62,	// (0x00042ebd) tabs_2_long_active_pane_srt_ParamLimits

0x0a62,	// (0x00042ebd) tabs_2_long_active_pane_srt

0x0a62,	// (0x00042ebd) tabs_2_long_passive_pane_srt_ParamLimits

0x0a62,	// (0x00042ebd) tabs_2_long_passive_pane_srt

0x701d,	// (0x00049478) bg_passive_tab_pane_cp4_srt_ParamLimits

0x701d,	// (0x00049478) bg_passive_tab_pane_cp4_srt

0xb026,	// (0x0004d481) bg_passive_tab_pane_g1_cp4_srt

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp4_srt

0xb02f,	// (0x0004d48a) bg_passive_tab_pane_g3_cp4_srt

0x213e,	// (0x00044599) bg_active_tab_pane_cp4_srt_ParamLimits

0x213e,	// (0x00044599) bg_active_tab_pane_cp4_srt

0xb038,	// (0x0004d493) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb038,	// (0x0004d493) tabs_2_long_active_pane_srt_t1

0xb026,	// (0x0004d481) bg_active_tab_pane_g1_cp4_srt

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp4_srt

0xb02f,	// (0x0004d48a) bg_active_tab_pane_g3_cp4_srt

0x0a54,	// (0x00042eaf) tabs_3_long_active_pane_srt_ParamLimits

0x0a54,	// (0x00042eaf) tabs_3_long_active_pane_srt

0x0a54,	// (0x00042eaf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0a54,	// (0x00042eaf) tabs_3_long_passive_pane_cp_srt

0x0a54,	// (0x00042eaf) tabs_3_long_passive_pane_srt_ParamLimits

0x0a54,	// (0x00042eaf) tabs_3_long_passive_pane_srt

0x701d,	// (0x00049478) bg_passive_tab_pane_cp5_srt_ParamLimits

0x701d,	// (0x00049478) bg_passive_tab_pane_cp5_srt

0x7661,	// (0x00049abc) bg_passive_tab_pane_g1_cp5_srt

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp5_srt

0x766a,	// (0x00049ac5) bg_passive_tab_pane_g3_cp5_srt

0x213e,	// (0x00044599) bg_active_tab_pane_cp5_srt_ParamLimits

0x213e,	// (0x00044599) bg_active_tab_pane_cp5_srt

0xb014,	// (0x0004d46f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb014,	// (0x0004d46f) tabs_3_long_active_pane_srt_t1

0x7661,	// (0x00049abc) bg_active_tab_pane_g1_cp5_srt

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp5_srt

0x766a,	// (0x00049ac5) bg_active_tab_pane_g3_cp5_srt

0xb006,	// (0x0004d461) navi_text_pane_srt_t1

0xaffe,	// (0x0004d459) navi_icon_pane_srt_g1

0x9657,	// (0x0004bab2) midp_editing_number_pane_srt

0x4ca9,	// (0x00047104) midp_ticker_pane_srt

0x965f,	// (0x0004baba) midp_ticker_pane_srt_g1

0x9667,	// (0x0004bac2) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00051bc8) midp_ticker_pane_srt_g

0x966f,	// (0x0004baca) midp_ticker_pane_srt_t1

0xafef,	// (0x0004d44a) midp_editing_number_pane_t1_copy1

0x770c,	// (0x00049b67) listscroll_midp_pane

0x770c,	// (0x00049b67) midp_form_pane

0x777e,	// (0x00049bd9) midp_info_popup_window_ParamLimits

0x777e,	// (0x00049bd9) midp_info_popup_window

0x0ebd,	// (0x00043318) bg_popup_sub_pane_cp50_ParamLimits

0x0ebd,	// (0x00043318) bg_popup_sub_pane_cp50

0xa137,	// (0x0004c592) listscroll_midp_info_pane_ParamLimits

0xa137,	// (0x0004c592) listscroll_midp_info_pane

0xa117,	// (0x0004c572) listscroll_form_midp_pane_ParamLimits

0xa117,	// (0x0004c572) listscroll_form_midp_pane

0xa123,	// (0x0004c57e) scroll_bar_cp050

0xa0f7,	// (0x0004c552) list_midp_pane

0xbd2e,	// (0x0004e189) signal_pane_g2_cp

0xa031,	// (0x0004c48c) listscroll_midp_info_pane_t1_ParamLimits

0xa031,	// (0x0004c48c) listscroll_midp_info_pane_t1

0xa049,	// (0x0004c4a4) listscroll_midp_info_pane_t2_ParamLimits

0xa049,	// (0x0004c4a4) listscroll_midp_info_pane_t2

0xa087,	// (0x0004c4e2) listscroll_midp_info_pane_t3_ParamLimits

0xa087,	// (0x0004c4e2) listscroll_midp_info_pane_t3

0xa0c1,	// (0x0004c51c) listscroll_midp_info_pane_t4_ParamLimits

0xa0c1,	// (0x0004c51c) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00051c80) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00051c80) listscroll_midp_info_pane_t

0x0f33,	// (0x0004338e) scroll_pane_cp21

0x9fd1,	// (0x0004c42c) form_midp_field_choice_group_pane

0x9fda,	// (0x0004c435) form_midp_field_text_pane

0xa017,	// (0x0004c472) form_midp_field_time_pane

0xa01f,	// (0x0004c47a) form_midp_gauge_slider_pane

0xa028,	// (0x0004c483) form_midp_gauge_wait_pane

0x0a06,	// (0x00042e61) form_midp_image_pane

0x5e6b,	// (0x000482c6) list_single_midp_pane_ParamLimits

0x5e6b,	// (0x000482c6) list_single_midp_pane

0x9f86,	// (0x0004c3e1) form_midp_field_text_pane_t1

0x9d50,	// (0x0004c1ab) input_focus_pane_cp050

0x9fc0,	// (0x0004c41b) list_midp_form_text_pane

0x9f55,	// (0x0004c3b0) form_midp_field_choice_group_pane_t1

0x9f63,	// (0x0004c3be) input_focus_pane_cp051

0x9f77,	// (0x0004c3d2) list_midp_choice_pane

0x0a06,	// (0x00042e61) status_idle_pane

0x9f39,	// (0x0004c394) form_midp_field_time_pane_t1

0x09fc,	// (0x00042e57) wait_anim_pane_g2_copy1

0x9f47,	// (0x0004c3a2) form_midp_field_time_pane_t2

0x0001,

0x782e,	// (0x00049c89) aid_navinavi_width_2_pane

0xf820,	// (0x00051c7b) form_midp_field_time_pane_t

0x0a06,	// (0x00042e61) input_focus_pane_cp052

0x0a06,	// (0x00042e61) bg_input_focus_pane_cp040

0x9ef9,	// (0x0004c354) form_midp_gauge_slider_pane_t1

0x9f07,	// (0x0004c362) form_midp_gauge_slider_pane_t2

0x9f15,	// (0x0004c370) form_midp_gauge_slider_pane_t3

0x9f23,	// (0x0004c37e) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00051c72) form_midp_gauge_slider_pane_t

0x9f31,	// (0x0004c38c) form_midp_slider_pane

0x0a62,	// (0x00042ebd) bg_input_focus_pane_cp041_ParamLimits

0x0a62,	// (0x00042ebd) bg_input_focus_pane_cp041

0x9ec6,	// (0x0004c321) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ec6,	// (0x0004c321) form_midp_gauge_wait_pane_t1

0x9ed8,	// (0x0004c333) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ed8,	// (0x0004c333) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00051c6d) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00051c6d) form_midp_gauge_wait_pane_t

0x9eea,	// (0x0004c345) form_midp_wait_pane_ParamLimits

0x9eea,	// (0x0004c345) form_midp_wait_pane

0x9e90,	// (0x0004c2eb) form_midp_image_pane_g1

0x9e99,	// (0x0004c2f4) form_midp_image_pane_t1

0x9ea8,	// (0x0004c303) form_midp_image_pane_t2

0x9eb7,	// (0x0004c312) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00051c66) form_midp_image_pane_t

0x9e87,	// (0x0004c2e2) list_single_midp_pane_g1

0x5e5c,	// (0x000482b7) list_single_midp_pane_t1

0x9e5e,	// (0x0004c2b9) list_midp_form_item_pane_ParamLimits

0x9e5e,	// (0x0004c2b9) list_midp_form_item_pane

0x77d6,	// (0x00049c31) list_midp_form_item_pane_t1

0x77e5,	// (0x00049c40) midp_ticker_pane_g1

0x77f1,	// (0x00049c4c) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00051bae) midp_ticker_pane_g

0x77fd,	// (0x00049c58) midp_ticker_pane_t1

0xb23c,	// (0x0004d697) midp_editing_number_pane_t1

0xb21a,	// (0x0004d675) midp_editing_number_pane

0xb229,	// (0x0004d684) midp_ticker_pane

0xafdf,	// (0x0004d43a) ai_message_heading_pane

0x0a06,	// (0x00042e61) bg_popup_window_pane_cp14

0xafe7,	// (0x0004d442) listscroll_ai_message_pane

0xaf69,	// (0x0004d3c4) ai_message_heading_pane_g1_ParamLimits

0xaf69,	// (0x0004d3c4) ai_message_heading_pane_g1

0xaf75,	// (0x0004d3d0) ai_message_heading_pane_g2_ParamLimits

0xaf75,	// (0x0004d3d0) ai_message_heading_pane_g2

0xaf81,	// (0x0004d3dc) ai_message_heading_pane_g3_ParamLimits

0xaf81,	// (0x0004d3dc) ai_message_heading_pane_g3

0xaf8d,	// (0x0004d3e8) ai_message_heading_pane_g4_ParamLimits

0xaf8d,	// (0x0004d3e8) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00051da7) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00051da7) ai_message_heading_pane_g

0xaf99,	// (0x0004d3f4) ai_message_heading_pane_t1_ParamLimits

0xaf99,	// (0x0004d3f4) ai_message_heading_pane_t1

0xafb3,	// (0x0004d40e) ai_message_heading_pane_t2_ParamLimits

0xafb3,	// (0x0004d40e) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00051db0) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00051db0) ai_message_heading_pane_t

0xafc5,	// (0x0004d420) bg_popup_heading_pane_cp1_ParamLimits

0xafc5,	// (0x0004d420) bg_popup_heading_pane_cp1

0xaf57,	// (0x0004d3b2) list_ai_message_pane_ParamLimits

0xaf57,	// (0x0004d3b2) list_ai_message_pane

0x0f33,	// (0x0004338e) scroll_pane_cp10

0xaef3,	// (0x0004d34e) list_ai_message_pane_g1

0xaefb,	// (0x0004d356) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00051d84) list_ai_message_pane_g

0xaf03,	// (0x0004d35e) list_ai_message_pane_t1_ParamLimits

0xaf03,	// (0x0004d35e) list_ai_message_pane_t1

0xaf18,	// (0x0004d373) list_ai_message_pane_t2_ParamLimits

0xaf18,	// (0x0004d373) list_ai_message_pane_t2

0xaf2d,	// (0x0004d388) list_ai_message_pane_t3_ParamLimits

0xaf2d,	// (0x0004d388) list_ai_message_pane_t3

0xaf42,	// (0x0004d39d) list_ai_message_pane_t4_ParamLimits

0xaf42,	// (0x0004d39d) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00051d89) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00051d89) list_ai_message_pane_t

0xaede,	// (0x0004d339) cell_ai_soft_ind_pane_ParamLimits

0xaede,	// (0x0004d339) cell_ai_soft_ind_pane

0x780f,	// (0x00049c6a) cell_ai_soft_ind_pane_g1_ParamLimits

0x780f,	// (0x00049c6a) cell_ai_soft_ind_pane_g1

0x0a06,	// (0x00042e61) grid_highlight_cp1

0x781c,	// (0x00049c77) text_secondary_cp56_ParamLimits

0x781c,	// (0x00049c77) text_secondary_cp56

0xaeb3,	// (0x0004d30e) example_general_pane_ParamLimits

0xaeb3,	// (0x0004d30e) example_general_pane

0xaebf,	// (0x0004d31a) example_parent_pane_g1_ParamLimits

0xaebf,	// (0x0004d31a) example_parent_pane_g1

0xaecb,	// (0x0004d326) example_parent_pane_t1_ParamLimits

0xaecb,	// (0x0004d326) example_parent_pane_t1

0x7e6b,	// (0x0004a2c6) popup_preview_text_window_ParamLimits

0x7e6b,	// (0x0004a2c6) popup_preview_text_window

0x4c00,	// (0x0004705b) list_single_pane_cp2_g4

0x0c34,	// (0x0004308f) bg_popup_preview_window_pane_ParamLimits

0x0c34,	// (0x0004308f) bg_popup_preview_window_pane

0xac0d,	// (0x0004d068) popup_preview_text_window_t1_ParamLimits

0xac0d,	// (0x0004d068) popup_preview_text_window_t1

0xac2b,	// (0x0004d086) popup_preview_text_window_t2_ParamLimits

0xac2b,	// (0x0004d086) popup_preview_text_window_t2

0xac74,	// (0x0004d0cf) popup_preview_text_window_t3_ParamLimits

0xac74,	// (0x0004d0cf) popup_preview_text_window_t3

0xacb9,	// (0x0004d114) popup_preview_text_window_t4_ParamLimits

0xacb9,	// (0x0004d114) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00051d58) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00051d58) popup_preview_text_window_t

0xad37,	// (0x0004d192) scroll_pane_cp11

0x9cdc,	// (0x0004c137) bg_popup_preview_window_pane_g1

0xabcd,	// (0x0004d028) bg_popup_preview_window_pane_g2

0xabd5,	// (0x0004d030) bg_popup_preview_window_pane_g3

0xabdd,	// (0x0004d038) bg_popup_preview_window_pane_g4

0xabe5,	// (0x0004d040) bg_popup_preview_window_pane_g5

0xabed,	// (0x0004d048) bg_popup_preview_window_pane_g6

0xabf5,	// (0x0004d050) bg_popup_preview_window_pane_g7

0xabfd,	// (0x0004d058) bg_popup_preview_window_pane_g8

0x64e6,	// (0x00048941) aid_popup_width_pane

0x7e49,	// (0x0004a2a4) popup_midp_note_alarm_window_ParamLimits

0x7e49,	// (0x0004a2a4) popup_midp_note_alarm_window

0x0e08,	// (0x00043263) data_form_pane_ParamLimits

0x5b15,	// (0x00047f70) form_field_data_pane_g1

0x5b1f,	// (0x00047f7a) form_field_data_pane_t1_ParamLimits

0x0e14,	// (0x0004326f) input_focus_pane_ParamLimits

0x5b37,	// (0x00047f92) data_form_wide_pane_ParamLimits

0x5b48,	// (0x00047fa3) form_field_data_wide_pane_g1

0x5b54,	// (0x00047faf) form_field_data_wide_pane_t1_ParamLimits

0x0d08,	// (0x00043163) input_focus_pane_cp6_ParamLimits

0x6fc1,	// (0x0004941c) input_popup_find_pane_g1_ParamLimits

0x6fc1,	// (0x0004941c) input_popup_find_pane_g1

0x7153,	// (0x000495ae) aid_navi_side_left_pane

0x7168,	// (0x000495c3) aid_navi_side_right_pane

0xa5f6,	// (0x0004ca51) bg_popup_window_pane_cp30_ParamLimits

0xa5f6,	// (0x0004ca51) bg_popup_window_pane_cp30

0xa670,	// (0x0004cacb) popup_midp_note_alarm_window_g1_ParamLimits

0xa670,	// (0x0004cacb) popup_midp_note_alarm_window_g1

0xa6a0,	// (0x0004cafb) popup_midp_note_alarm_window_t1_ParamLimits

0xa6a0,	// (0x0004cafb) popup_midp_note_alarm_window_t1

0xa741,	// (0x0004cb9c) popup_midp_note_alarm_window_t2_ParamLimits

0xa741,	// (0x0004cb9c) popup_midp_note_alarm_window_t2

0xa7ef,	// (0x0004cc4a) popup_midp_note_alarm_window_t3_ParamLimits

0xa7ef,	// (0x0004cc4a) popup_midp_note_alarm_window_t3

0xa817,	// (0x0004cc72) popup_midp_note_alarm_window_t4_ParamLimits

0xa817,	// (0x0004cc72) popup_midp_note_alarm_window_t4

0xa837,	// (0x0004cc92) popup_midp_note_alarm_window_t5_ParamLimits

0xa837,	// (0x0004cc92) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00051cf5) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00051cf5) popup_midp_note_alarm_window_t

0xa8e3,	// (0x0004cd3e) wait_bar_pane_cp1_ParamLimits

0xa8e3,	// (0x0004cd3e) wait_bar_pane_cp1

0x0a06,	// (0x00042e61) wait_anim_pane_copy1

0x0a06,	// (0x00042e61) wait_border_pane_copy1

0xa2ec,	// (0x0004c747) wait_border_pane_g1_copy1

0x5b6e,	// (0x00047fc9) form_field_popup_pane_g1

0x5b76,	// (0x00047fd1) form_field_popup_pane_t1_ParamLimits

0x0e14,	// (0x0004326f) input_focus_pane_cp7_ParamLimits

0x0e42,	// (0x0004329d) list_form_pane_ParamLimits

0x5b8e,	// (0x00047fe9) form_field_popup_wide_pane_g1

0x5b96,	// (0x00047ff1) form_field_popup_wide_pane_t1_ParamLimits

0x0e14,	// (0x0004326f) input_focus_pane_cp8_ParamLimits

0x0e4e,	// (0x000432a9) list_form_wide_pane_ParamLimits

0xb38b,	// (0x0004d7e6) aid_size_cell_graphic_pane

0x5c20,	// (0x0004807b) data_form_pane_t1_ParamLimits

0x5eab,	// (0x00048306) data_form_wide_pane_t1_ParamLimits

0x98a6,	// (0x0004bd01) bg_status_flat_pane

0x68e5,	// (0x00048d40) title_pane_t1_ParamLimits

0x0a1c,	// (0x00042e77) title_pane_t2_ParamLimits

0x0a42,	// (0x00042e9d) title_pane_t3_ParamLimits

0xf557,	// (0x000519b2) title_pane_t_ParamLimits

0x11dc,	// (0x00043637) level_1_signal_ParamLimits

0x11e9,	// (0x00043644) level_2_signal_ParamLimits

0x11f6,	// (0x00043651) level_3_signal_ParamLimits

0x1203,	// (0x0004365e) level_4_signal_ParamLimits

0x1210,	// (0x0004366b) level_5_signal_ParamLimits

0x121d,	// (0x00043678) level_6_signal_ParamLimits

0x122a,	// (0x00043685) level_7_signal_ParamLimits

0x11dc,	// (0x00043637) level_1_battery_ParamLimits

0x11e9,	// (0x00043644) level_2_battery_ParamLimits

0x11f6,	// (0x00043651) level_3_battery_ParamLimits

0x1203,	// (0x0004365e) level_4_battery_ParamLimits

0x1210,	// (0x0004366b) level_5_battery_ParamLimits

0x121d,	// (0x00043678) level_6_battery_ParamLimits

0x122a,	// (0x00043685) level_7_battery_ParamLimits

0xa4fb,	// (0x0004c956) bg_status_flat_pane_g1

0xa503,	// (0x0004c95e) bg_status_flat_pane_g2

0xa50b,	// (0x0004c966) bg_status_flat_pane_g3

0xa513,	// (0x0004c96e) bg_status_flat_pane_g4

0xa51b,	// (0x0004c976) bg_status_flat_pane_g5

0xa523,	// (0x0004c97e) bg_status_flat_pane_g6

0xa52b,	// (0x0004c986) bg_status_flat_pane_g7

0x6955,	// (0x00048db0) tabs_3_active_pane_t1_ParamLimits

0x6955,	// (0x00048db0) tabs_3_passive_pane_t1_ParamLimits

0x696f,	// (0x00048dca) tabs_4_active_pane_t1_ParamLimits

0x696f,	// (0x00048dca) tabs_4_1_passive_pane_t1_ParamLimits

0x6ff8,	// (0x00049453) tabs_2_active_pane_t1_ParamLimits

0x6ff8,	// (0x00049453) tabs_2_passive_pane_t1_ParamLimits

0x213e,	// (0x00044599) bg_active_tab_pane_cp4_ParamLimits

0x700a,	// (0x00049465) tabs_2_long_active_pane_t1_ParamLimits

0x701d,	// (0x00049478) bg_passive_tab_pane_cp4_ParamLimits

0x8110,	// (0x0004a56b) list_single_midp_graphic_pane_t1_ParamLimits

0x213e,	// (0x00044599) bg_active_tab_pane_cp5_ParamLimits

0x7029,	// (0x00049484) tabs_3_long_active_pane_t1_ParamLimits

0x701d,	// (0x00049478) bg_passive_tab_pane_cp5_ParamLimits

0x8110,	// (0x0004a56b) list_single_midp_graphic_pane_t1

0x98a6,	// (0x0004bd01) bg_status_flat_pane_ParamLimits

0x996f,	// (0x0004bdca) indicator_pane_cp2_ParamLimits

0x996f,	// (0x0004bdca) indicator_pane_cp2

0x9a9a,	// (0x0004bef5) navi_pane_srt_ParamLimits

0x9a9a,	// (0x0004bef5) navi_pane_srt

0x9abe,	// (0x0004bf19) popup_clock_digital_analogue_window_cp1

0x0aa6,	// (0x00042f01) indicator_pane_t1

0x4ca9,	// (0x00047104) copy_highlight_pane

0x4ca9,	// (0x00047104) cursor_graphics_pane

0x4ca9,	// (0x00047104) graphic_within_text_pane

0x4ca9,	// (0x00047104) link_highlight_pane

0xacfa,	// (0x0004d155) popup_preview_text_window_t5_ParamLimits

0xacfa,	// (0x0004d155) popup_preview_text_window_t5

0x7836,	// (0x00049c91) cursor_digital_pane

0x7836,	// (0x00049c91) cursor_primary_pane

0x7847,	// (0x00049ca2) cursor_primary_small_pane

0x784f,	// (0x00049caa) cursor_secondary_pane

0x7857,	// (0x00049cb2) cursor_title_pane

0x7836,	// (0x00049c91) link_highlight_digital_pane

0x783e,	// (0x00049c99) link_highlight_primary_pane

0x7847,	// (0x00049ca2) link_highlight_primary_small_pane

0x784f,	// (0x00049caa) link_highlight_secondary_pane

0x7857,	// (0x00049cb2) link_highlight_title_pane

0x7836,	// (0x00049c91) copy_highlight_digital_pane

0x7836,	// (0x00049c91) copy_highlight_primary_pane

0x7847,	// (0x00049ca2) copy_highlight_primary_small_pane

0x784f,	// (0x00049caa) copy_highlight_secondary_pane

0x7857,	// (0x00049cb2) copy_highlight_title_pane

0x784f,	// (0x00049caa) graphic_text_digital_pane

0xa599,	// (0x0004c9f4) graphic_text_primary_pane

0xa5a2,	// (0x0004c9fd) graphic_text_primary_small_pane

0x7847,	// (0x00049ca2) graphic_text_secondary_pane

0x7836,	// (0x00049c91) graphic_text_title_pane

0x785f,	// (0x00049cba) cursor_primary_pane_g1

0xa58b,	// (0x0004c9e6) cursor_text_primary_t1

0xa573,	// (0x0004c9ce) cursor_primary_small_pane_g1

0xa57d,	// (0x0004c9d8) cursor_text_primary_small_t1

0xa55b,	// (0x0004c9b6) cursor_primary_small_pane_g1_copy1

0xa565,	// (0x0004c9c0) cursor_text_primary_small_t1_copy1

0xa543,	// (0x0004c99e) cursor_text_title_t1

0xa551,	// (0x0004c9ac) cursor_title_pane_g1

0x785f,	// (0x00049cba) cursor_digital_pane_g1

0x7869,	// (0x00049cc4) cursor_text_digital_t1

0x7877,	// (0x00049cd2) link_highlight_primary_pane_g1

0xa4ec,	// (0x0004c947) link_highlight_primary_pane_t1

0x7877,	// (0x00049cd2) link_highlight_primary_small_pane_g1

0x787f,	// (0x00049cda) link_highlight_primary_small_pane_t1

0x7877,	// (0x00049cd2) link_highlight_secondary_pane_g1

0x788e,	// (0x00049ce9) link_highlight_secondary_pane_t1

0xa451,	// (0x0004c8ac) link_highlight_title_pane_g1

0xa468,	// (0x0004c8c3) link_highlight_title_pane_t1

0xa451,	// (0x0004c8ac) link_highlight_digital_pane_g1

0xa459,	// (0x0004c8b4) link_highlight_digital_pane_t1

0xa30b,	// (0x0004c766) copy_highlight_primary_pane_g1

0xa331,	// (0x0004c78c) copy_highlight_primary_pane_t1

0xa30b,	// (0x0004c766) copy_highlight_primary_small_pane_g1

0xa322,	// (0x0004c77d) copy_highlight_primary_small_pane_t1

0x789d,	// (0x00049cf8) copy_highlight_secondary_pane_g1

0x78a5,	// (0x00049d00) copy_highlight_secondary_pane_t1

0xa30b,	// (0x0004c766) copy_highlight_title_pane_g1

0xa313,	// (0x0004c76e) copy_highlight_title_pane_t1

0xa30b,	// (0x0004c766) copy_highlight_digital_pane_g1

0xb559,	// (0x0004d9b4) copy_highlight_digital_pane_t1

0xb4ad,	// (0x0004d908) graphic_text_primary_pane_g1

0xb53d,	// (0x0004d998) graphic_text_primary_pane_t1

0xb54b,	// (0x0004d9a6) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00051e24) graphic_text_primary_pane_t

0xb519,	// (0x0004d974) graphic_text_primary_small_pane_g1

0xb521,	// (0x0004d97c) graphic_text_primary_small_pane_t1

0xb52f,	// (0x0004d98a) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00051e1f) graphic_text_primary_small_pane_t

0xb4f5,	// (0x0004d950) graphic_text_secondary_pane_g1

0xb4fd,	// (0x0004d958) graphic_text_secondary_pane_t1

0xb50b,	// (0x0004d966) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00051e1a) graphic_text_secondary_pane_t

0xb4d1,	// (0x0004d92c) graphic_text_title_pane_g1

0xb4d9,	// (0x0004d934) graphic_text_title_pane_t1

0xb4e7,	// (0x0004d942) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00051e15) graphic_text_title_pane_t

0xb4ad,	// (0x0004d908) graphic_text_digital_pane_g1

0xb4b5,	// (0x0004d910) graphic_text_digital_pane_t1

0xb4c3,	// (0x0004d91e) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00051e10) graphic_text_digital_pane_t

0x0a62,	// (0x00042ebd) navi_icon_pane_srt_ParamLimits

0x0a62,	// (0x00042ebd) navi_icon_pane_srt

0x0a06,	// (0x00042e61) navi_midp_pane_srt

0x0a06,	// (0x00042e61) navi_navi_pane_srt

0x0a62,	// (0x00042ebd) navi_text_pane_srt_ParamLimits

0x0a62,	// (0x00042ebd) navi_text_pane_srt

0xb478,	// (0x0004d8d3) navi_navi_icon_text_pane_srt

0xb480,	// (0x0004d8db) navi_navi_pane_srt_g1_ParamLimits

0xb480,	// (0x0004d8db) navi_navi_pane_srt_g1

0xb492,	// (0x0004d8ed) navi_navi_pane_srt_g2_ParamLimits

0xb492,	// (0x0004d8ed) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00051e0b) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00051e0b) navi_navi_pane_srt_g

0xb4a4,	// (0x0004d8ff) navi_navi_tabs_pane_srt

0xb478,	// (0x0004d8d3) navi_navi_text_pane_srt

0xb478,	// (0x0004d8d3) navi_navi_volume_pane_srt

0xb469,	// (0x0004d8c4) navi_navi_text_pane_srt_t1

0x8544,	// (0x0004a99f) navi_navi_volume_pane_srt_g1

0x854c,	// (0x0004a9a7) volume_small_pane_srt_ParamLimits

0x854c,	// (0x0004a9a7) volume_small_pane_srt

0x78b4,	// (0x00049d0f) volume_small_pane_srt_g1_ParamLimits

0x78b4,	// (0x00049d0f) volume_small_pane_srt_g1

0x78c4,	// (0x00049d1f) volume_small_pane_srt_g2_ParamLimits

0x78c4,	// (0x00049d1f) volume_small_pane_srt_g2

0x78d5,	// (0x00049d30) volume_small_pane_srt_g3_ParamLimits

0x78d5,	// (0x00049d30) volume_small_pane_srt_g3

0x78e6,	// (0x00049d41) volume_small_pane_srt_g4_ParamLimits

0x78e6,	// (0x00049d41) volume_small_pane_srt_g4

0x78f7,	// (0x00049d52) volume_small_pane_srt_g5_ParamLimits

0x78f7,	// (0x00049d52) volume_small_pane_srt_g5

0x7908,	// (0x00049d63) volume_small_pane_srt_g6_ParamLimits

0x7908,	// (0x00049d63) volume_small_pane_srt_g6

0x7919,	// (0x00049d74) volume_small_pane_srt_g7_ParamLimits

0x7919,	// (0x00049d74) volume_small_pane_srt_g7

0x792a,	// (0x00049d85) volume_small_pane_srt_g8_ParamLimits

0x792a,	// (0x00049d85) volume_small_pane_srt_g8

0x793b,	// (0x00049d96) volume_small_pane_srt_g9_ParamLimits

0x793b,	// (0x00049d96) volume_small_pane_srt_g9

0x794c,	// (0x00049da7) volume_small_pane_srt_g10_ParamLimits

0x794c,	// (0x00049da7) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00051bb3) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00051bb3) volume_small_pane_srt_g

0x6bbc,	// (0x00049017) query_popup_data_pane_cp2

0xb44f,	// (0x0004d8aa) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb44f,	// (0x0004d8aa) navi_navi_icon_text_pane_srt_t1

0xa599,	// (0x0004c9f4) navi_tabs_2_long_pane_srt

0xa599,	// (0x0004c9f4) navi_tabs_2_pane_srt

0xa599,	// (0x0004c9f4) navi_tabs_3_long_pane_srt

0xa599,	// (0x0004c9f4) navi_tabs_3_pane_srt

0xa599,	// (0x0004c9f4) navi_tabs_4_pane_srt

0x8524,	// (0x0004a97f) tabs_2_active_pane_srt_ParamLimits

0x8524,	// (0x0004a97f) tabs_2_active_pane_srt

0x8534,	// (0x0004a98f) tabs_2_passive_pane_srt_ParamLimits

0x8534,	// (0x0004a98f) tabs_2_passive_pane_srt

0x97b5,	// (0x0004bc10) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97b5,	// (0x0004bc10) bg_passive_tab_pane_cp1_srt

0xb41b,	// (0x0004d876) bg_passive_tab_pane_g1_cp1_srt

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp1_srt

0xb424,	// (0x0004d87f) bg_passive_tab_pane_g3_cp1_srt

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp1_srt_ParamLimits

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp1_srt

0xb42d,	// (0x0004d888) tabs_2_active_pane_srt_g1

0xb435,	// (0x0004d890) tabs_2_active_pane_srt_t1_ParamLimits

0xb435,	// (0x0004d890) tabs_2_active_pane_srt_t1

0xb41b,	// (0x0004d876) bg_active_tab_pane_g1_cp1_srt

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp1_srt

0xb424,	// (0x0004d87f) bg_active_tab_pane_g3_cp1_srt

0x84f1,	// (0x0004a94c) tabs_3_active_pane_srt_ParamLimits

0x84f1,	// (0x0004a94c) tabs_3_active_pane_srt

0x8502,	// (0x0004a95d) tabs_3_passive_pane_cp_srt_ParamLimits

0x8502,	// (0x0004a95d) tabs_3_passive_pane_cp_srt

0x8513,	// (0x0004a96e) tabs_3_passive_pane_srt_ParamLimits

0x8513,	// (0x0004a96e) tabs_3_passive_pane_srt

0x97b5,	// (0x0004bc10) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97b5,	// (0x0004bc10) bg_passive_tab_pane_cp2_srt

0x795d,	// (0x00049db8) bg_passive_tab_pane_g1_cp2_srt

0x74d4,	// (0x0004992f) bg_passive_tab_pane_g2_cp2_srt

0x964e,	// (0x0004baa9) bg_passive_tab_pane_g3_cp2_srt

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp2_srt_ParamLimits

0x0a62,	// (0x00042ebd) bg_active_tab_pane_cp2_srt

0xb401,	// (0x0004d85c) tabs_3_active_pane_srt_g1

0xb409,	// (0x0004d864) tabs_3_active_pane_srt_t1_ParamLimits

0xb409,	// (0x0004d864) tabs_3_active_pane_srt_t1

0x795d,	// (0x00049db8) bg_active_tab_pane_g1_cp2_srt

0x74d4,	// (0x0004992f) bg_active_tab_pane_g2_cp2_srt

0x964e,	// (0x0004baa9) bg_active_tab_pane_g3_cp2_srt

0x84a9,	// (0x0004a904) tabs_4_active_pane_srt_ParamLimits

0x84a9,	// (0x0004a904) tabs_4_active_pane_srt

0x84bb,	// (0x0004a916) tabs_4_passive_pane_cp2_srt_ParamLimits

0x84bb,	// (0x0004a916) tabs_4_passive_pane_cp2_srt

0x7ac4,	// (0x00049f1f) aid_size_cell_toolbar

0x701d,	// (0x00049478) main_idle_act_pane_ParamLimits

0x7c7b,	// (0x0004a0d6) popup_large_graphic_colour_window_ParamLimits

0x7fe6,	// (0x0004a441) popup_toolbar_window_ParamLimits

0x7fe6,	// (0x0004a441) popup_toolbar_window

0xb24b,	// (0x0004d6a6) list_single_graphic_2heading_pane_ParamLimits

0xb24b,	// (0x0004d6a6) list_single_graphic_2heading_pane

0x10c4,	// (0x0004351f) aid_size_cell_apps_grid_lsc_pane

0x10d6,	// (0x00043531) aid_size_cell_apps_grid_prt_pane

0x97b5,	// (0x0004bc10) bg_wml_button_pane_cp1_ParamLimits

0x97b5,	// (0x0004bc10) bg_wml_button_pane_cp1

0x9f86,	// (0x0004c3e1) form_midp_field_text_pane_t1_ParamLimits

0x9d50,	// (0x0004c1ab) input_focus_pane_cp050_ParamLimits

0x9fc0,	// (0x0004c41b) list_midp_form_text_pane_ParamLimits

0x9f63,	// (0x0004c3be) input_focus_pane_cp051_ParamLimits

0x9f77,	// (0x0004c3d2) list_midp_choice_pane_ParamLimits

0x9e06,	// (0x0004c261) list_single_2graphic_pane_cp3_ParamLimits

0x9e06,	// (0x0004c261) list_single_2graphic_pane_cp3

0x9e2b,	// (0x0004c286) list_single_midp_graphic_pane_ParamLimits

0x9e2b,	// (0x0004c286) list_single_midp_graphic_pane

0x5d3e,	// (0x00048199) list_single_graphic_2heading_pane_g1_ParamLimits

0x5d3e,	// (0x00048199) list_single_graphic_2heading_pane_g1

0x5d4a,	// (0x000481a5) list_single_graphic_2heading_pane_g4_ParamLimits

0x5d4a,	// (0x000481a5) list_single_graphic_2heading_pane_g4

0x5d56,	// (0x000481b1) list_single_graphic_2heading_pane_g5_ParamLimits

0x5d56,	// (0x000481b1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00051c06) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00051c06) list_single_graphic_2heading_pane_g

0x5d62,	// (0x000481bd) list_single_graphic_2heading_pane_t1_ParamLimits

0x5d62,	// (0x000481bd) list_single_graphic_2heading_pane_t1

0x5d76,	// (0x000481d1) list_single_graphic_2heading_pane_t2_ParamLimits

0x5d76,	// (0x000481d1) list_single_graphic_2heading_pane_t2

0x5d90,	// (0x000481eb) list_single_graphic_2heading_pane_t3_ParamLimits

0x5d90,	// (0x000481eb) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00051c0d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00051c0d) list_single_graphic_2heading_pane_t

0x9c1a,	// (0x0004c075) bg_popup_sub_pane_cp2

0x9c44,	// (0x0004c09f) grid_toobar_pane

0x8093,	// (0x0004a4ee) cell_toolbar_pane_ParamLimits

0x8093,	// (0x0004a4ee) cell_toolbar_pane

0x9c80,	// (0x0004c0db) cell_toolbar_pane_g1_ParamLimits

0x9c80,	// (0x0004c0db) cell_toolbar_pane_g1

0x9c94,	// (0x0004c0ef) cell_toolbar_pane_g2_ParamLimits

0x9c94,	// (0x0004c0ef) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x00051c1b) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x00051c1b) cell_toolbar_pane_g

0x9cb6,	// (0x0004c111) grid_highlight_pane_cp2_ParamLimits

0x9cb6,	// (0x0004c111) grid_highlight_pane_cp2

0x9cd0,	// (0x0004c12b) toolbar_button_pane

0x9cdc,	// (0x0004c137) toolbar_button_pane_g1

0x9ce4,	// (0x0004c13f) toolbar_button_pane_g2

0x9cec,	// (0x0004c147) toolbar_button_pane_g3

0x9cf4,	// (0x0004c14f) toolbar_button_pane_g4

0x9cfc,	// (0x0004c157) toolbar_button_pane_g5

0x9d04,	// (0x0004c15f) toolbar_button_pane_g6

0x9d0c,	// (0x0004c167) toolbar_button_pane_g7

0x9d14,	// (0x0004c16f) toolbar_button_pane_g8

0x9d1c,	// (0x0004c177) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00051c20) toolbar_button_pane_g

0x80cb,	// (0x0004a526) list_single_2graphic_pane_g1_cp3_ParamLimits

0x80cb,	// (0x0004a526) list_single_2graphic_pane_g1_cp3

0x80d7,	// (0x0004a532) list_single_2graphic_pane_g2_cp3_ParamLimits

0x80d7,	// (0x0004a532) list_single_2graphic_pane_g2_cp3

0x4b07,	// (0x00046f62) list_single_2graphic_pane_g3_cp3

0x80e8,	// (0x0004a543) list_single_2graphic_pane_g4_cp3_ParamLimits

0x80e8,	// (0x0004a543) list_single_2graphic_pane_g4_cp3

0x80f4,	// (0x0004a54f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x80f4,	// (0x0004a54f) list_single_2graphic_pane_t1_cp3

0x13e4,	// (0x0004383f) list_single_midp_graphic_pane_g2_ParamLimits

0x13e4,	// (0x0004383f) list_single_midp_graphic_pane_g2

0x5d2e,	// (0x00048189) aid_zoom_text_primary

0x7acc,	// (0x00049f27) aid_zoom_text_secondary

0x96ff,	// (0x0004bb5a) status_small_pane_g7_ParamLimits

0x96ff,	// (0x0004bb5a) status_small_pane_g7

0x9722,	// (0x0004bb7d) status_small_pane_t1_ParamLimits

0x68c8,	// (0x00048d23) title_pane_g2

0x0003,

0xf54e,	// (0x000519a9) title_pane_g

0x6c16,	// (0x00049071) aid_size_cell_colour_1_pane_ParamLimits

0x6c16,	// (0x00049071) aid_size_cell_colour_1_pane

0x6c2a,	// (0x00049085) aid_size_cell_colour_2_pane_ParamLimits

0x6c2a,	// (0x00049085) aid_size_cell_colour_2_pane

0x6c3e,	// (0x00049099) aid_size_cell_colour_3_pane_ParamLimits

0x6c3e,	// (0x00049099) aid_size_cell_colour_3_pane

0x6c52,	// (0x000490ad) aid_size_cell_colour_4_pane_ParamLimits

0x6c52,	// (0x000490ad) aid_size_cell_colour_4_pane

0x7090,	// (0x000494eb) title_pane_stacon_g1_ParamLimits

0x7090,	// (0x000494eb) title_pane_stacon_g1

0xa388,	// (0x0004c7e3) popup_note_wait_window_g3_ParamLimits

0xa388,	// (0x0004c7e3) popup_note_wait_window_g3

0xa3fe,	// (0x0004c859) popup_note_wait_window_t5_ParamLimits

0xa3fe,	// (0x0004c859) popup_note_wait_window_t5

0x0a06,	// (0x00042e61) main_feb_china_hwr_fs_writing_pane

0x7b62,	// (0x00049fbd) popup_feb_china_hwr_fs_window_ParamLimits

0x7b62,	// (0x00049fbd) popup_feb_china_hwr_fs_window

0x813e,	// (0x0004a599) aid_size_cell_hwr_fs_ParamLimits

0x813e,	// (0x0004a599) aid_size_cell_hwr_fs

0x9d50,	// (0x0004c1ab) bg_popup_sub_pane_cp3_ParamLimits

0x9d50,	// (0x0004c1ab) bg_popup_sub_pane_cp3

0x8153,	// (0x0004a5ae) grid_hwr_fs_pane_ParamLimits

0x8153,	// (0x0004a5ae) grid_hwr_fs_pane

0x816b,	// (0x0004a5c6) linegrid_hwr_fs_pane_ParamLimits

0x816b,	// (0x0004a5c6) linegrid_hwr_fs_pane

0x817b,	// (0x0004a5d6) cell_hwr_fs_pane_ParamLimits

0x817b,	// (0x0004a5d6) cell_hwr_fs_pane

0x9d5c,	// (0x0004c1b7) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d5c,	// (0x0004c1b7) linegrid_hwr_fs_pane_g1

0x9d68,	// (0x0004c1c3) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d68,	// (0x0004c1c3) linegrid_hwr_fs_pane_g2

0x9d7a,	// (0x0004c1d5) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d7a,	// (0x0004c1d5) linegrid_hwr_fs_pane_g3

0x819d,	// (0x0004a5f8) linegrid_hwr_fs_pane_g4_ParamLimits

0x819d,	// (0x0004a5f8) linegrid_hwr_fs_pane_g4

0x81b7,	// (0x0004a612) linegrid_hwr_fs_pane_g5_ParamLimits

0x81b7,	// (0x0004a612) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00051c4b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00051c4b) linegrid_hwr_fs_pane_g

0x9d86,	// (0x0004c1e1) cell_hwr_fs_pane_g1_ParamLimits

0x9d86,	// (0x0004c1e1) cell_hwr_fs_pane_g1

0x9b54,	// (0x0004bfaf) cell_hwr_fs_pane_g2_ParamLimits

0x9b54,	// (0x0004bfaf) cell_hwr_fs_pane_g2

0x9d9c,	// (0x0004c1f7) cell_hwr_fs_pane_g3_ParamLimits

0x9d9c,	// (0x0004c1f7) cell_hwr_fs_pane_g3

0x9da9,	// (0x0004c204) cell_hwr_fs_pane_g4_ParamLimits

0x9da9,	// (0x0004c204) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00051c56) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00051c56) cell_hwr_fs_pane_g

0x81cd,	// (0x0004a628) cell_hwr_fs_pane_t1

0x0a06,	// (0x00042e61) grid_highlight_pane_cp6

0x0a06,	// (0x00042e61) main_idle_act2_pane

0x0f1a,	// (0x00043375) aid_inside_area_popup_secondary

0xaa1d,	// (0x0004ce78) aid_inside_area_window_primary_ParamLimits

0xaa1d,	// (0x0004ce78) aid_inside_area_window_primary

0xb568,	// (0x0004d9c3) ai2_news_ticker_pane

0xb570,	// (0x0004d9cb) aid_size_cell_ai1_link_ParamLimits

0xb570,	// (0x0004d9cb) aid_size_cell_ai1_link

0xb58a,	// (0x0004d9e5) popup_ai2_data_window_ParamLimits

0xb58a,	// (0x0004d9e5) popup_ai2_data_window

0xb5a0,	// (0x0004d9fb) popup_ai2_link_window_ParamLimits

0xb5a0,	// (0x0004d9fb) popup_ai2_link_window

0x9d50,	// (0x0004c1ab) bg_popup_sub_pane_cp4_ParamLimits

0x9d50,	// (0x0004c1ab) bg_popup_sub_pane_cp4

0xb5b4,	// (0x0004da0f) grid_ai2_link_pane_ParamLimits

0xb5b4,	// (0x0004da0f) grid_ai2_link_pane

0xb5cb,	// (0x0004da26) popup_ai2_link_window_g1_ParamLimits

0xb5cb,	// (0x0004da26) popup_ai2_link_window_g1

0xb5d7,	// (0x0004da32) popup_ai2_link_window_g2_ParamLimits

0xb5d7,	// (0x0004da32) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00051e29) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00051e29) popup_ai2_link_window_g

0xb5e6,	// (0x0004da41) ai2_mp_button_pane

0xb5ee,	// (0x0004da49) ai2_mp_volume_pane

0x9f63,	// (0x0004c3be) bg_popup_sub_pane_cp5_ParamLimits

0x9f63,	// (0x0004c3be) bg_popup_sub_pane_cp5

0xb5f6,	// (0x0004da51) heading_ai2_gene_pane_ParamLimits

0xb5f6,	// (0x0004da51) heading_ai2_gene_pane

0xb602,	// (0x0004da5d) list_ai2_gene_pane_ParamLimits

0xb602,	// (0x0004da5d) list_ai2_gene_pane

0xb64a,	// (0x0004daa5) cell_ai2_link_pane_ParamLimits

0xb64a,	// (0x0004daa5) cell_ai2_link_pane

0xb660,	// (0x0004dabb) cell_ai2_link_pane_g1

0x0a06,	// (0x00042e61) grid_highlight_pane_cp7

0x8561,	// (0x0004a9bc) ai2_mp_volume_pane_g1

0xb730,	// (0x0004db8b) ai2_mp_volume_pane_g2

0xb6a5,	// (0x0004db00) list_ai2_gene_pane_t1

0xb738,	// (0x0004db93) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00051e42) ai2_mp_volume_pane_g

0x8569,	// (0x0004a9c4) volume_small_pane_cp3

0xb740,	// (0x0004db9b) aid_size_cell_ai2_button

0xb748,	// (0x0004dba3) grid_ai2_button_pane

0xb751,	// (0x0004dbac) cell_ai2_button_pane_ParamLimits

0xb751,	// (0x0004dbac) cell_ai2_button_pane

0x09fc,	// (0x00042e57) cell_ai2_button_pane_g1

0x0a06,	// (0x00042e61) grid_highlight_pane_cp8

0xb6f0,	// (0x0004db4b) ai2_gene_pane_t1_ParamLimits

0xb6f0,	// (0x0004db4b) ai2_gene_pane_t1

0x7aba,	// (0x00049f15) aid_height_parent_landscape

0xb086,	// (0x0004d4e1) aid_height_set_list

0xb097,	// (0x0004d4f2) aid_size_parent

0xb38b,	// (0x0004d7e6) aid_size_cell_graphic_pane_ParamLimits

0xb612,	// (0x0004da6d) popup_ai2_data_window_g1_ParamLimits

0xb612,	// (0x0004da6d) popup_ai2_data_window_g1

0xb61e,	// (0x0004da79) ai2_news_ticker_pane_g1

0xb626,	// (0x0004da81) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00051e2e) ai2_news_ticker_pane_g

0xb62e,	// (0x0004da89) ai2_news_ticker_pane_t1

0xb63c,	// (0x0004da97) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00051e33) ai2_news_ticker_pane_t

0xb669,	// (0x0004dac4) heading_ai2_gene_pane_g1

0xb671,	// (0x0004dacc) heading_ai2_gene_pane_t1_ParamLimits

0xb671,	// (0x0004dacc) heading_ai2_gene_pane_t1

0xb686,	// (0x0004dae1) list_highlight_pane_cp6

0xb68e,	// (0x0004dae9) ai2_gene_pane_ParamLimits

0xb68e,	// (0x0004dae9) ai2_gene_pane

0xb6b3,	// (0x0004db0e) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00051e38) list_ai2_gene_pane_t

0xb6c1,	// (0x0004db1c) list_highlight_pane_cp8_ParamLimits

0xb6c1,	// (0x0004db1c) list_highlight_pane_cp8

0xb6d2,	// (0x0004db2d) ai2_gene_pane_g1_ParamLimits

0xb6d2,	// (0x0004db2d) ai2_gene_pane_g1

0xb6e4,	// (0x0004db3f) ai2_gene_pane_g2_ParamLimits

0xb6e4,	// (0x0004db3f) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00051e3d) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00051e3d) ai2_gene_pane_g

0x0db3,	// (0x0004320e) scroll_pane_cp12

0x7a77,	// (0x00049ed2) control_pane_t3_ParamLimits

0x7a77,	// (0x00049ed2) control_pane_t3

0x9713,	// (0x0004bb6e) status_small_pane_g8_ParamLimits

0x9713,	// (0x0004bb6e) status_small_pane_g8

0x7c44,	// (0x0004a09f) popup_find_window_ParamLimits

0x7e5d,	// (0x0004a2b8) popup_note_image_window_ParamLimits

0x5da8,	// (0x00048203) list_double2_graphic_pane_vc_g1_ParamLimits

0x5da8,	// (0x00048203) list_double2_graphic_pane_vc_g1

0x6ee9,	// (0x00049344) list_double2_graphic_pane_vc_g2_ParamLimits

0x6ee9,	// (0x00049344) list_double2_graphic_pane_vc_g2

0x6ef5,	// (0x00049350) list_double2_graphic_pane_vc_g3_ParamLimits

0x6ef5,	// (0x00049350) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00051c14) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00051c14) list_double2_graphic_pane_vc_g

0x5db4,	// (0x0004820f) list_double2_graphic_pane_vc_t1_ParamLimits

0x5db4,	// (0x0004820f) list_double2_graphic_pane_vc_t1

0x6ee9,	// (0x00049344) list_single_heading_pane_vc_g1_ParamLimits

0x6ee9,	// (0x00049344) list_single_heading_pane_vc_g1

0x6ef5,	// (0x00049350) list_single_heading_pane_vc_g2_ParamLimits

0x6ef5,	// (0x00049350) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00051c35) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00051c35) list_single_heading_pane_vc_g

0x5dca,	// (0x00048225) list_single_heading_pane_vc_t1_ParamLimits

0x5dca,	// (0x00048225) list_single_heading_pane_vc_t1

0x5de0,	// (0x0004823b) list_single_heading_pane_vc_t2_ParamLimits

0x5de0,	// (0x0004823b) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00051c3a) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00051c3a) list_single_heading_pane_vc_t

0x8126,	// (0x0004a581) list_setting_number_pane_vc_g1_ParamLimits

0x8126,	// (0x0004a581) list_setting_number_pane_vc_g1

0x8132,	// (0x0004a58d) list_setting_number_pane_vc_g2_ParamLimits

0x8132,	// (0x0004a58d) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051c3f) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051c3f) list_setting_number_pane_vc_g

0x5df2,	// (0x0004824d) list_setting_number_pane_vc_t1_ParamLimits

0x5df2,	// (0x0004824d) list_setting_number_pane_vc_t1

0x5e06,	// (0x00048261) list_setting_number_pane_vc_t2_ParamLimits

0x5e06,	// (0x00048261) list_setting_number_pane_vc_t2

0x5e22,	// (0x0004827d) list_setting_number_pane_vc_t3_ParamLimits

0x5e22,	// (0x0004827d) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00051c44) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00051c44) list_setting_number_pane_vc_t

0x5e4c,	// (0x000482a7) set_value_pane_vc_ParamLimits

0x5e4c,	// (0x000482a7) set_value_pane_vc

0xb24b,	// (0x0004d6a6) list_double2_graphic_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_double2_graphic_pane_vc

0xb24b,	// (0x0004d6a6) list_double2_large_graphic_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_double2_large_graphic_pane_vc

0xb24b,	// (0x0004d6a6) list_double2_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_double2_pane_vc

0xb24b,	// (0x0004d6a6) list_double_graphic_heading_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_double_graphic_heading_pane_vc

0xb24b,	// (0x0004d6a6) list_double_graphic_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_double_graphic_pane_vc

0xb24b,	// (0x0004d6a6) list_double_heading_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_double_heading_pane_vc

0xb25d,	// (0x0004d6b8) list_double_large_graphic_pane_vc_ParamLimits

0xb25d,	// (0x0004d6b8) list_double_large_graphic_pane_vc

0xb24b,	// (0x0004d6a6) list_double_number_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_double_number_pane_vc

0xb24b,	// (0x0004d6a6) list_double_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_double_pane_vc

0xb24b,	// (0x0004d6a6) list_double_time_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_double_time_pane_vc

0xb24b,	// (0x0004d6a6) list_setting_number_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_setting_number_pane_vc

0xb24b,	// (0x0004d6a6) list_setting_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_setting_pane_vc

0xb24b,	// (0x0004d6a6) list_single_graphic_heading_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_single_graphic_heading_pane_vc

0xb24b,	// (0x0004d6a6) list_single_heading_pane_vc_ParamLimits

0xb24b,	// (0x0004d6a6) list_single_heading_pane_vc

0x840d,	// (0x0004a868) list_single_number_heading_pane_vc_ParamLimits

0x840d,	// (0x0004a868) list_single_number_heading_pane_vc

0x5f2a,	// (0x00048385) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5f2a,	// (0x00048385) list_double_graphic_heading_pane_vc_g1

0x6ee9,	// (0x00049344) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6ee9,	// (0x00049344) list_double_graphic_heading_pane_vc_g2

0x6ef5,	// (0x00049350) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6ef5,	// (0x00049350) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00051e49) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00051e49) list_double_graphic_heading_pane_vc_g

0x5f36,	// (0x00048391) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5f36,	// (0x00048391) list_double_graphic_heading_pane_vc_t1

0x5f4a,	// (0x000483a5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5f4a,	// (0x000483a5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00051e50) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00051e50) list_double_graphic_heading_pane_vc_t

0x8126,	// (0x0004a581) list_setting_pane_vc_g1_ParamLimits

0x8126,	// (0x0004a581) list_setting_pane_vc_g1

0x8132,	// (0x0004a58d) list_setting_pane_vc_g2_ParamLimits

0x8132,	// (0x0004a58d) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051c3f) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051c3f) list_setting_pane_vc_g

0x5f62,	// (0x000483bd) list_setting_pane_vc_t1_ParamLimits

0x5f62,	// (0x000483bd) list_setting_pane_vc_t1

0x5f7e,	// (0x000483d9) list_setting_pane_vc_t2_ParamLimits

0x5f7e,	// (0x000483d9) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00051e93) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00051e93) list_setting_pane_vc_t

0x5e4c,	// (0x000482a7) set_value_pane_cp_vc_ParamLimits

0x5e4c,	// (0x000482a7) set_value_pane_cp_vc

0x6ee9,	// (0x00049344) list_single_number_heading_pane_vc_g1_ParamLimits

0x6ee9,	// (0x00049344) list_single_number_heading_pane_vc_g1

0x6ef5,	// (0x00049350) list_single_number_heading_pane_vc_g2_ParamLimits

0x6ef5,	// (0x00049350) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00051c35) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00051c35) list_single_number_heading_pane_vc_g

0x5f98,	// (0x000483f3) list_single_number_heading_pane_vc_t1_ParamLimits

0x5f98,	// (0x000483f3) list_single_number_heading_pane_vc_t1

0x5fae,	// (0x00048409) list_single_number_heading_pane_vc_t2_ParamLimits

0x5fae,	// (0x00048409) list_single_number_heading_pane_vc_t2

0x5fc0,	// (0x0004841b) list_single_number_heading_pane_vc_t3_ParamLimits

0x5fc0,	// (0x0004841b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00051e98) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00051e98) list_single_number_heading_pane_vc_t

0x5fd2,	// (0x0004842d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5fd2,	// (0x0004842d) list_single_graphic_heading_pane_vc_g1

0x6ee9,	// (0x00049344) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6ee9,	// (0x00049344) list_single_graphic_heading_pane_vc_g4

0x6ef5,	// (0x00049350) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6ef5,	// (0x00049350) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa44,	// (0x00051e9f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x00051e9f) list_single_graphic_heading_pane_vc_g

0x5dca,	// (0x00048225) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5dca,	// (0x00048225) list_single_graphic_heading_pane_vc_t1

0x5fde,	// (0x00048439) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5fde,	// (0x00048439) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4b,	// (0x00051ea6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4b,	// (0x00051ea6) list_single_graphic_heading_pane_vc_t

0x6ee9,	// (0x00049344) list_double2_pane_vc_g1_ParamLimits

0x6ee9,	// (0x00049344) list_double2_pane_vc_g1

0x6ef5,	// (0x00049350) list_double2_pane_vc_g2_ParamLimits

0x6ef5,	// (0x00049350) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x00051c35) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x00051c35) list_double2_pane_vc_g

0x5ff0,	// (0x0004844b) list_double2_pane_vc_t1_ParamLimits

0x5ff0,	// (0x0004844b) list_double2_pane_vc_t1

0x85c3,	// (0x0004aa1e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x85c3,	// (0x0004aa1e) list_double2_large_graphic_pane_vc_g1

0x6ee9,	// (0x00049344) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6ee9,	// (0x00049344) list_double2_large_graphic_pane_vc_g2

0x6ef5,	// (0x00049350) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6ef5,	// (0x00049350) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa50,	// (0x00051eab) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa50,	// (0x00051eab) list_double2_large_graphic_pane_vc_g

0x5db4,	// (0x0004820f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5db4,	// (0x0004820f) list_double2_large_graphic_pane_vc_t1

0x85cf,	// (0x0004aa2a) list_double_time_pane_vc_g1_ParamLimits

0x85cf,	// (0x0004aa2a) list_double_time_pane_vc_g1

0x85db,	// (0x0004aa36) list_double_time_pane_vc_g2_ParamLimits

0x85db,	// (0x0004aa36) list_double_time_pane_vc_g2

0x0001,

0xfa57,	// (0x00051eb2) list_double_time_pane_vc_g_ParamLimits

0xfa57,	// (0x00051eb2) list_double_time_pane_vc_g

0x6008,	// (0x00048463) list_double_time_pane_vc_t1_ParamLimits

0x6008,	// (0x00048463) list_double_time_pane_vc_t1

0x602c,	// (0x00048487) list_double_time_pane_vc_t2_ParamLimits

0x602c,	// (0x00048487) list_double_time_pane_vc_t2

0x607b,	// (0x000484d6) list_double_time_pane_vc_t3_ParamLimits

0x607b,	// (0x000484d6) list_double_time_pane_vc_t3

0x608d,	// (0x000484e8) list_double_time_pane_vc_t4_ParamLimits

0x608d,	// (0x000484e8) list_double_time_pane_vc_t4

0x0003,

0xfa5c,	// (0x00051eb7) list_double_time_pane_vc_t_ParamLimits

0xfa5c,	// (0x00051eb7) list_double_time_pane_vc_t

0x6ee9,	// (0x00049344) list_double_pane_vc_g1_ParamLimits

0x6ee9,	// (0x00049344) list_double_pane_vc_g1

0x6ef5,	// (0x00049350) list_double_pane_vc_g2_ParamLimits

0x6ef5,	// (0x00049350) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x00051c35) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x00051c35) list_double_pane_vc_g

0x60a1,	// (0x000484fc) list_double_pane_vc_t1_ParamLimits

0x60a1,	// (0x000484fc) list_double_pane_vc_t1

0x60b5,	// (0x00048510) list_double_pane_vc_t2_ParamLimits

0x60b5,	// (0x00048510) list_double_pane_vc_t2

0x0001,

0xfa65,	// (0x00051ec0) list_double_pane_vc_t_ParamLimits

0xfa65,	// (0x00051ec0) list_double_pane_vc_t

0x6ee9,	// (0x00049344) list_double_number_pane_vc_g1_ParamLimits

0x6ee9,	// (0x00049344) list_double_number_pane_vc_g1

0x6ef5,	// (0x00049350) list_double_number_pane_vc_g2_ParamLimits

0x6ef5,	// (0x00049350) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x00051c35) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x00051c35) list_double_number_pane_vc_g

0x60cd,	// (0x00048528) list_double_number_pane_vc_t1_ParamLimits

0x60cd,	// (0x00048528) list_double_number_pane_vc_t1

0x60a1,	// (0x000484fc) list_double_number_pane_vc_t2_ParamLimits

0x60a1,	// (0x000484fc) list_double_number_pane_vc_t2

0x60df,	// (0x0004853a) list_double_number_pane_vc_t3_ParamLimits

0x60df,	// (0x0004853a) list_double_number_pane_vc_t3

0x0002,

0xfa6a,	// (0x00051ec5) list_double_number_pane_vc_t_ParamLimits

0xfa6a,	// (0x00051ec5) list_double_number_pane_vc_t

0x85e7,	// (0x0004aa42) list_double_large_graphic_pane_vc_g1_ParamLimits

0x85e7,	// (0x0004aa42) list_double_large_graphic_pane_vc_g1

0x8609,	// (0x0004aa64) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8609,	// (0x0004aa64) list_double_large_graphic_pane_vc_g2

0x861d,	// (0x0004aa78) list_double_large_graphic_pane_vc_g3_ParamLimits

0x861d,	// (0x0004aa78) list_double_large_graphic_pane_vc_g3

0x60f7,	// (0x00048552) list_double_large_graphic_pane_vc_g4_ParamLimits

0x60f7,	// (0x00048552) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa71,	// (0x00051ecc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x00051ecc) list_double_large_graphic_pane_vc_g

0x6103,	// (0x0004855e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6103,	// (0x0004855e) list_double_large_graphic_pane_vc_t1

0x611f,	// (0x0004857a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x611f,	// (0x0004857a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x00051ed5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x00051ed5) list_double_large_graphic_pane_vc_t

0x6ee9,	// (0x00049344) list_double_heading_pane_vc_g1_ParamLimits

0x6ee9,	// (0x00049344) list_double_heading_pane_vc_g1

0x6ef5,	// (0x00049350) list_double_heading_pane_vc_g2_ParamLimits

0x6ef5,	// (0x00049350) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00051c35) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00051c35) list_double_heading_pane_vc_g

0x6141,	// (0x0004859c) list_double_heading_pane_vc_t1_ParamLimits

0x6141,	// (0x0004859c) list_double_heading_pane_vc_t1

0x6155,	// (0x000485b0) list_double_heading_pane_vc_t2_ParamLimits

0x6155,	// (0x000485b0) list_double_heading_pane_vc_t2

0x0001,

0xfa7f,	// (0x00051eda) list_double_heading_pane_vc_t_ParamLimits

0xfa7f,	// (0x00051eda) list_double_heading_pane_vc_t

0x616d,	// (0x000485c8) list_double_graphic_pane_vc_g1_ParamLimits

0x616d,	// (0x000485c8) list_double_graphic_pane_vc_g1

0x862c,	// (0x0004aa87) list_double_graphic_pane_vc_g2_ParamLimits

0x862c,	// (0x0004aa87) list_double_graphic_pane_vc_g2

0x6ee9,	// (0x00049344) list_double_graphic_pane_vc_g3_ParamLimits

0x6ee9,	// (0x00049344) list_double_graphic_pane_vc_g3

0x0003,

0xfa84,	// (0x00051edf) list_double_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x00051edf) list_double_graphic_pane_vc_g

0x6180,	// (0x000485db) list_double_graphic_pane_vc_t1_ParamLimits

0x6180,	// (0x000485db) list_double_graphic_pane_vc_t1

0x619f,	// (0x000485fa) list_double_graphic_pane_vc_t2_ParamLimits

0x619f,	// (0x000485fa) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x00051ee8) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x00051ee8) list_double_graphic_pane_vc_t

0x64f2,	// (0x0004894d) aid_size_cell_fastswap

0x64fa,	// (0x00048955) aid_size_cell_touch_ParamLimits

0x64fa,	// (0x00048955) aid_size_cell_touch

0x6755,	// (0x00048bb0) popup_fast_swap_wide_window_ParamLimits

0x6755,	// (0x00048bb0) popup_fast_swap_wide_window

0x685b,	// (0x00048cb6) touch_pane_ParamLimits

0x685b,	// (0x00048cb6) touch_pane

0x0e00,	// (0x0004325b) button_value_adjust_pane_cp2

0x5a65,	// (0x00047ec0) button_value_adjust_pane_cp4

0x5a87,	// (0x00047ee2) form_field_data_pane_cp2

0x5aa8,	// (0x00047f03) form_field_data_wide_pane_cp2

0x10fb,	// (0x00043556) bg_scroll_pane_ParamLimits

0x728a,	// (0x000496e5) scroll_handle_pane_ParamLimits

0x729e,	// (0x000496f9) scroll_sc2_down_pane_ParamLimits

0x729e,	// (0x000496f9) scroll_sc2_down_pane

0x112c,	// (0x00043587) scroll_sc2_up_pane_ParamLimits

0x112c,	// (0x00043587) scroll_sc2_up_pane

0xbe07,	// (0x0004e262) grid_wheel_folder_pane_g1_ParamLimits

0xbe07,	// (0x0004e262) grid_wheel_folder_pane_g1

0x75f9,	// (0x00049a54) clock_nsta_pane_cp2_ParamLimits

0x75f9,	// (0x00049a54) clock_nsta_pane_cp2

0x770c,	// (0x00049b67) listscroll_midp_pane_ParamLimits

0x7718,	// (0x00049b73) midp_canvas_pane

0x978d,	// (0x0004bbe8) nsta_clock_indic_pane

0x97c1,	// (0x0004bc1c) listscroll_form_pane_vc

0x97c9,	// (0x0004bc24) listscroll_set_pane_vc_ParamLimits

0x97c9,	// (0x0004bc24) listscroll_set_pane_vc

0x98c2,	// (0x0004bd1d) clock_nsta_pane

0x993d,	// (0x0004bd98) indicator_nsta_pane

0x9c1a,	// (0x0004c075) bg_popup_sub_pane_cp2_ParamLimits

0x9c2e,	// (0x0004c089) find_pane_cp2_ParamLimits

0x9c2e,	// (0x0004c089) find_pane_cp2

0x9c44,	// (0x0004c09f) grid_toobar_pane_ParamLimits

0x9d24,	// (0x0004c17f) list_form_gen_pane_vc_ParamLimits

0x9d24,	// (0x0004c17f) list_form_gen_pane_vc

0x9d3a,	// (0x0004c195) scroll_pane_cp8_vc_ParamLimits

0x9d3a,	// (0x0004c195) scroll_pane_cp8_vc

0x9db6,	// (0x0004c211) data_form_wide_pane_vc_ParamLimits

0x9db6,	// (0x0004c211) data_form_wide_pane_vc

0x9dc2,	// (0x0004c21d) form_field_data_wide_pane_vc_g1

0x9dca,	// (0x0004c225) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dca,	// (0x0004c225) form_field_data_wide_pane_vc_t1

0x0e14,	// (0x0004326f) input_focus_pane_cp6_vc_ParamLimits

0x0e14,	// (0x0004326f) input_focus_pane_cp6_vc

0xa0f7,	// (0x0004c552) list_midp_pane_ParamLimits

0xa103,	// (0x0004c55e) scroll_pane_cp16_ParamLimits

0xa103,	// (0x0004c55e) scroll_pane_cp16

0xa165,	// (0x0004c5c0) button_value_adjust_pane_ParamLimits

0xa165,	// (0x0004c5c0) button_value_adjust_pane

0xb0a9,	// (0x0004d504) button_value_adjust_pane_cp6_ParamLimits

0xb0a9,	// (0x0004d504) button_value_adjust_pane_cp6

0xb1cf,	// (0x0004d62a) settings_code_pane_cp_ParamLimits

0xb1cf,	// (0x0004d62a) settings_code_pane_cp

0x09fc,	// (0x00042e57) cell_touch_pane_g1

0x09fc,	// (0x00042e57) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00051b59) cell_touch_pane_g

0xb763,	// (0x0004dbbe) cell_touch_pane_cp_ParamLimits

0xb763,	// (0x0004dbbe) cell_touch_pane_cp

0xb773,	// (0x0004dbce) cell_touch_pane_ParamLimits

0xb773,	// (0x0004dbce) cell_touch_pane

0x09fc,	// (0x00042e57) scroll_sc2_down_pane_g1

0x09fc,	// (0x00042e57) scroll_sc2_up_pane_g1

0x0a06,	// (0x00042e61) bg_set_opt_pane_cp4_vc

0xb785,	// (0x0004dbe0) list_set_graphic_pane_vc_g1_ParamLimits

0xb785,	// (0x0004dbe0) list_set_graphic_pane_vc_g1

0xb791,	// (0x0004dbec) list_set_graphic_pane_vc_g2_ParamLimits

0xb791,	// (0x0004dbec) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00051e55) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00051e55) list_set_graphic_pane_vc_g

0xb79d,	// (0x0004dbf8) text_primary_small_cp13_vc_ParamLimits

0xb79d,	// (0x0004dbf8) text_primary_small_cp13_vc

0xb7b5,	// (0x0004dc10) list_set_graphic_pane_vc_ParamLimits

0xb7b5,	// (0x0004dc10) list_set_graphic_pane_vc

0x0a06,	// (0x00042e61) input_focus_pane_cp2_vc

0x09fc,	// (0x00042e57) setting_code_pane_vc_g1

0x0a79,	// (0x00042ed4) setting_code_pane_vc_t1

0xb7c8,	// (0x0004dc23) set_text_pane_vc_t1_ParamLimits

0xb7c8,	// (0x0004dc23) set_text_pane_vc_t1

0x0a06,	// (0x00042e61) input_focus_pane_cp1_vc

0xb7e4,	// (0x0004dc3f) list_set_text_pane_vc

0x09fc,	// (0x00042e57) setting_text_pane_vc_g1

0x0a06,	// (0x00042e61) bg_set_opt_pane_cp2_vc

0x0a70,	// (0x00042ecb) setting_slider_graphic_pane_vc_g1

0xb7ee,	// (0x0004dc49) setting_slider_graphic_pane_vc_t1

0xb7fe,	// (0x0004dc59) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00051e5a) setting_slider_graphic_pane_vc_t

0xb80e,	// (0x0004dc69) slider_set_pane_cp_vc

0xb816,	// (0x0004dc71) slider_set_pane_vc_g1

0xb81f,	// (0x0004dc7a) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00051e5f) slider_set_pane_vc_g

0x0e6c,	// (0x000432c7) set_opt_bg_pane_g1_copy1

0x0e74,	// (0x000432cf) set_opt_bg_pane_g2_copy1

0xb84b,	// (0x0004dca6) set_opt_bg_pane_g3_copy1

0x0e84,	// (0x000432df) set_opt_bg_pane_g4_copy1

0x0e8c,	// (0x000432e7) set_opt_bg_pane_g5_copy1

0x0e94,	// (0x000432ef) set_opt_bg_pane_g6_copy1

0xb853,	// (0x0004dcae) set_opt_bg_pane_g7_copy1

0xb85b,	// (0x0004dcb6) set_opt_bg_pane_g8_copy1

0xb863,	// (0x0004dcbe) set_opt_bg_pane_g9_copy1

0x0a06,	// (0x00042e61) bg_set_opt_pane_cp_vc

0xb86b,	// (0x0004dcc6) setting_slider_pane_vc_t1

0xb87a,	// (0x0004dcd5) setting_slider_pane_vc_t2

0xb88a,	// (0x0004dce5) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00051e6e) setting_slider_pane_vc_t

0xb89a,	// (0x0004dcf5) slider_set_pane_vc

0x81db,	// (0x0004a636) volume_set_pane_vc_g1

0x8572,	// (0x0004a9cd) volume_set_pane_vc_g2

0x857b,	// (0x0004a9d6) volume_set_pane_vc_g3

0x8584,	// (0x0004a9df) volume_set_pane_vc_g4

0x858d,	// (0x0004a9e8) volume_set_pane_vc_g5

0x8596,	// (0x0004a9f1) volume_set_pane_vc_g6

0x859f,	// (0x0004a9fa) volume_set_pane_vc_g7

0x85a8,	// (0x0004aa03) volume_set_pane_vc_g8

0x85b1,	// (0x0004aa0c) volume_set_pane_vc_g9

0x85ba,	// (0x0004aa15) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00051e75) volume_set_pane_vc_g

0xb8a2,	// (0x0004dcfd) volume_set_pane_vc

0xb8aa,	// (0x0004dd05) button_value_adjust_pane_cp1_vc

0xb8b4,	// (0x0004dd0f) list_highlight_pane_cp2_vc

0xb8bd,	// (0x0004dd18) list_set_pane_vc_ParamLimits

0xb8bd,	// (0x0004dd18) list_set_pane_vc

0xb91b,	// (0x0004dd76) main_pane_set_vc_t1_ParamLimits

0xb91b,	// (0x0004dd76) main_pane_set_vc_t1

0xb930,	// (0x0004dd8b) main_pane_set_vc_t2_ParamLimits

0xb930,	// (0x0004dd8b) main_pane_set_vc_t2

0xb942,	// (0x0004dd9d) main_pane_set_vc_t3_ParamLimits

0xb942,	// (0x0004dd9d) main_pane_set_vc_t3

0xb954,	// (0x0004ddaf) main_pane_set_vc_t4_ParamLimits

0xb954,	// (0x0004ddaf) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00051e8a) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00051e8a) main_pane_set_vc_t

0xb966,	// (0x0004ddc1) setting_code_pane_vc_ParamLimits

0xb966,	// (0x0004ddc1) setting_code_pane_vc

0xb975,	// (0x0004ddd0) setting_slider_graphic_pane_vc

0xb975,	// (0x0004ddd0) setting_slider_pane_vc

0xb975,	// (0x0004ddd0) setting_text_pane_vc

0xb975,	// (0x0004ddd0) setting_volume_pane_vc

0xb97d,	// (0x0004ddd8) scroll_pane_cp121_vc

0x0dee,	// (0x00043249) set_content_pane_vc

0xb985,	// (0x0004dde0) button_value_adjust_pane_g1

0xb98e,	// (0x0004dde9) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x00051eed) button_value_adjust_pane_g

0xb997,	// (0x0004ddf2) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb997,	// (0x0004ddf2) form_field_slider_wide_pane_vc_t1

0xb9ab,	// (0x0004de06) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9ab,	// (0x0004de06) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x00051ef2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00051ef2) form_field_slider_wide_pane_vc_t

0x0a54,	// (0x00042eaf) input_focus_pane_cp10_vc_ParamLimits

0x0a54,	// (0x00042eaf) input_focus_pane_cp10_vc

0xb9d9,	// (0x0004de34) slider_cont_pane_cp1_vc_ParamLimits

0xb9d9,	// (0x0004de34) slider_cont_pane_cp1_vc

0xb9eb,	// (0x0004de46) slider_form_pane_g1_cp2

0xb81f,	// (0x0004dc7a) slider_form_pane_g2_cp2

0xba18,	// (0x0004de73) form_field_slider_pane_vc_t3

0xba26,	// (0x0004de81) form_field_slider_pane_vc_t4

0xba34,	// (0x0004de8f) slider_form_pane_vc_ParamLimits

0xba34,	// (0x0004de8f) slider_form_pane_vc

0xba41,	// (0x0004de9c) form_field_slider_pane_vc_t1_ParamLimits

0xba41,	// (0x0004de9c) form_field_slider_pane_vc_t1

0xb9ab,	// (0x0004de06) form_field_slider_pane_vc_t2_ParamLimits

0xb9ab,	// (0x0004de06) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x00051f04) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x00051f04) form_field_slider_pane_vc_t

0x0a54,	// (0x00042eaf) input_focus_pane_cp9_vc_ParamLimits

0x0a54,	// (0x00042eaf) input_focus_pane_cp9_vc

0xba5d,	// (0x0004deb8) slider_cont_pane_vc_ParamLimits

0xba5d,	// (0x0004deb8) slider_cont_pane_vc

0xba71,	// (0x0004decc) list_form_graphic_pane_cp_vc_ParamLimits

0xba71,	// (0x0004decc) list_form_graphic_pane_cp_vc

0x9dc2,	// (0x0004c21d) form_field_popup_wide_pane_vc_g1

0xba86,	// (0x0004dee1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba86,	// (0x0004dee1) form_field_popup_wide_pane_vc_t1

0x0e14,	// (0x0004326f) input_focus_pane_cp8_vc_ParamLimits

0x0e14,	// (0x0004326f) input_focus_pane_cp8_vc

0xbacb,	// (0x0004df26) list_form_wide_pane_vc_ParamLimits

0xbacb,	// (0x0004df26) list_form_wide_pane_vc

0xbad7,	// (0x0004df32) list_form_graphic_pane_vc_g1

0xbadf,	// (0x0004df3a) list_form_graphic_pane_vc_t1_ParamLimits

0xbadf,	// (0x0004df3a) list_form_graphic_pane_vc_t1

0x0a62,	// (0x00042ebd) list_highlight_pane_cp5_vc_ParamLimits

0x0a62,	// (0x00042ebd) list_highlight_pane_cp5_vc

0xbafb,	// (0x0004df56) list_form_graphic_pane_vc_ParamLimits

0xbafb,	// (0x0004df56) list_form_graphic_pane_vc

0x9dc2,	// (0x0004c21d) form_field_popup_pane_vc_g1

0xbb11,	// (0x0004df6c) form_field_popup_pane_vc_t1_ParamLimits

0xbb11,	// (0x0004df6c) form_field_popup_pane_vc_t1

0x0e14,	// (0x0004326f) input_focus_pane_cp7_vc_ParamLimits

0x0e14,	// (0x0004326f) input_focus_pane_cp7_vc

0xbb28,	// (0x0004df83) list_form_pane_vc_ParamLimits

0xbb28,	// (0x0004df83) list_form_pane_vc

0xbb34,	// (0x0004df8f) data_form_pane_vc_t1_ParamLimits

0xbb34,	// (0x0004df8f) data_form_pane_vc_t1

0x0e6c,	// (0x000432c7) input_focus_pane_vc_g1

0x0e74,	// (0x000432cf) input_focus_pane_vc_g2

0x0e7c,	// (0x000432d7) input_focus_pane_vc_g3

0x0e84,	// (0x000432df) input_focus_pane_vc_g4

0x0e8c,	// (0x000432e7) input_focus_pane_vc_g5

0x0e94,	// (0x000432ef) input_focus_pane_vc_g6

0x0e9c,	// (0x000432f7) input_focus_pane_vc_g7

0x0ea4,	// (0x000432ff) input_focus_pane_vc_g8

0x0eac,	// (0x00043307) input_focus_pane_vc_g9

0x09fc,	// (0x00042e57) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00051ae2) input_focus_pane_vc_g

0x9db6,	// (0x0004c211) data_form_pane_vc_ParamLimits

0x9db6,	// (0x0004c211) data_form_pane_vc

0x9dc2,	// (0x0004c21d) form_field_data_pane_vc_g1

0xbb4f,	// (0x0004dfaa) form_field_data_pane_vc_t1_ParamLimits

0xbb4f,	// (0x0004dfaa) form_field_data_pane_vc_t1

0x0e14,	// (0x0004326f) input_focus_pane_vc_ParamLimits

0x0e14,	// (0x0004326f) input_focus_pane_vc

0xbb69,	// (0x0004dfc4) button_value_adjust_pane_cp3_vc

0xbb71,	// (0x0004dfcc) button_value_adjust_pane_cp5_vc

0xbb79,	// (0x0004dfd4) form_field_data_pane_vc_ParamLimits

0xbb79,	// (0x0004dfd4) form_field_data_pane_vc

0xbb90,	// (0x0004dfeb) form_field_data_pane_vc_cp2

0xbb98,	// (0x0004dff3) form_field_data_wide_pane_vc_ParamLimits

0xbb98,	// (0x0004dff3) form_field_data_wide_pane_vc

0xbbae,	// (0x0004e009) form_field_data_wide_pane_vc_cp2

0xbbb6,	// (0x0004e011) form_field_popup_pane_vc_ParamLimits

0xbbb6,	// (0x0004e011) form_field_popup_pane_vc

0xbbcd,	// (0x0004e028) form_field_popup_wide_pane_vc_ParamLimits

0xbbcd,	// (0x0004e028) form_field_popup_wide_pane_vc

0xbbe3,	// (0x0004e03e) form_field_slider_pane_vc_ParamLimits

0xbbe3,	// (0x0004e03e) form_field_slider_pane_vc

0xbbf6,	// (0x0004e051) form_field_slider_wide_pane_vc_ParamLimits

0xbbf6,	// (0x0004e051) form_field_slider_wide_pane_vc

0xbc09,	// (0x0004e064) grid_touch_1_pane_ParamLimits

0xbc09,	// (0x0004e064) grid_touch_1_pane

0xbc15,	// (0x0004e070) grid_touch_2_pane_ParamLimits

0xbc15,	// (0x0004e070) grid_touch_2_pane

0x9758,	// (0x0004bbb3) touch_pane_g1_ParamLimits

0x9758,	// (0x0004bbb3) touch_pane_g1

0xbc2d,	// (0x0004e088) cell_app_pane_cp_wide_ParamLimits

0xbc2d,	// (0x0004e088) cell_app_pane_cp_wide

0xbc3e,	// (0x0004e099) grid_popup_fast_wide_pane_ParamLimits

0xbc3e,	// (0x0004e099) grid_popup_fast_wide_pane

0xbc52,	// (0x0004e0ad) scroll_pane_cp19_ParamLimits

0xbc52,	// (0x0004e0ad) scroll_pane_cp19

0x0a06,	// (0x00042e61) bg_popup_window_pane_cp20

0xbc66,	// (0x0004e0c1) listscroll_popup_fast_wide_pane

0x0a62,	// (0x00042ebd) grid_indicator_nsta_pane

0xbc6e,	// (0x0004e0c9) clock_nsta_pane_g1

0xbc77,	// (0x0004e0d2) clock_nsta_pane_t1

0xbc93,	// (0x0004e0ee) cell_indicator_nsta_pane_ParamLimits

0xbc93,	// (0x0004e0ee) cell_indicator_nsta_pane

0xbcc4,	// (0x0004e11f) cell_indicator_nsta_pane_g1

0xbcd2,	// (0x0004e12d) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x00051f15) cell_indicator_nsta_pane_g

0xbcdf,	// (0x0004e13a) clock_nsta_pane_cp

0xbce8,	// (0x0004e143) indicator_nsta_pane_cp

0xbcf0,	// (0x0004e14b) nsta_clock_indic_pane_g1

0x0a9e,	// (0x00042ef9) grid_indicator_pane

0x733c,	// (0x00049797) scroll_pane_cp29

0x7548,	// (0x000499a3) indicator_nsta_pane_cp2_ParamLimits

0x7548,	// (0x000499a3) indicator_nsta_pane_cp2

0x0a62,	// (0x00042ebd) main_apps_wheel_pane

0x9fda,	// (0x0004c435) form_midp_field_text_pane_ParamLimits

0xa123,	// (0x0004c57e) scroll_bar_cp050_ParamLimits

0xbd40,	// (0x0004e19b) cell_indicator_pane_ParamLimits

0xbd40,	// (0x0004e19b) cell_indicator_pane

0xbd59,	// (0x0004e1b4) cell_indicator_pane_g1

0xbd63,	// (0x0004e1be) grid_wheel_folder_pane_ParamLimits

0xbd63,	// (0x0004e1be) grid_wheel_folder_pane

0xbd79,	// (0x0004e1d4) list_wheel_apps_pane_ParamLimits

0xbd79,	// (0x0004e1d4) list_wheel_apps_pane

0xbd8a,	// (0x0004e1e5) main_apps_wheel_pane_g1_ParamLimits

0xbd8a,	// (0x0004e1e5) main_apps_wheel_pane_g1

0xbd9e,	// (0x0004e1f9) main_apps_wheel_pane_g2_ParamLimits

0xbd9e,	// (0x0004e1f9) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00051f31) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00051f31) main_apps_wheel_pane_g

0xbdb6,	// (0x0004e211) main_apps_wheel_pane_t1_ParamLimits

0xbdb6,	// (0x0004e211) main_apps_wheel_pane_t1

0xbdd9,	// (0x0004e234) list_wheel_apps_pane_g1

0xbde1,	// (0x0004e23c) list_wheel_apps_pane_g2

0xbde9,	// (0x0004e244) list_wheel_apps_pane_g3

0xbdf3,	// (0x0004e24e) list_wheel_apps_pane_g4

0xbdfd,	// (0x0004e258) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00051f36) list_wheel_apps_pane_g

0x4b57,	// (0x00046fb2) navi_icon_text_pane

0x97f1,	// (0x0004bc4c) aid_fill_nsta

0xbe20,	// (0x0004e27b) navi_icon_text_pane_g1

0xbe2c,	// (0x0004e287) navi_icon_text_pane_t1

0x4a47,	// (0x00046ea2) list_set_graphic_pane_t1_ParamLimits

0x4a47,	// (0x00046ea2) list_set_graphic_pane_t1

0xa866,	// (0x0004ccc1) popup_midp_note_alarm_window_t6_ParamLimits

0xa866,	// (0x0004ccc1) popup_midp_note_alarm_window_t6

0xa878,	// (0x0004ccd3) popup_midp_note_alarm_window_t7_ParamLimits

0xa878,	// (0x0004ccd3) popup_midp_note_alarm_window_t7

0xa88a,	// (0x0004cce5) popup_midp_note_alarm_window_t8_ParamLimits

0xa88a,	// (0x0004cce5) popup_midp_note_alarm_window_t8

0xa89c,	// (0x0004ccf7) popup_midp_note_alarm_window_t9_ParamLimits

0xa89c,	// (0x0004ccf7) popup_midp_note_alarm_window_t9

0xa8ae,	// (0x0004cd09) popup_midp_note_alarm_window_t10_ParamLimits

0xa8ae,	// (0x0004cd09) popup_midp_note_alarm_window_t10

0xa8c0,	// (0x0004cd1b) popup_midp_note_alarm_window_t11_ParamLimits

0xa8c0,	// (0x0004cd1b) popup_midp_note_alarm_window_t11

0xa8d2,	// (0x0004cd2d) scroll_pane_cp17_ParamLimits

0xa8d2,	// (0x0004cd2d) scroll_pane_cp17

0x81db,	// (0x0004a636) volume_small_pane_cp_g1

0x8649,	// (0x0004aaa4) volume_small_pane_cp_g2

0x8652,	// (0x0004aaad) volume_small_pane_cp_g3

0x865b,	// (0x0004aab6) volume_small_pane_cp_g4

0x8664,	// (0x0004aabf) volume_small_pane_cp_g5

0x858d,	// (0x0004a9e8) volume_small_pane_cp_g6

0x866d,	// (0x0004aac8) volume_small_pane_cp_g7

0x8676,	// (0x0004aad1) volume_small_pane_cp_g8

0x867f,	// (0x0004aada) volume_small_pane_cp_g9

0x8688,	// (0x0004aae3) volume_small_pane_cp_g10

0x77e5,	// (0x00049c40) midp_ticker_pane_g1_ParamLimits

0x77f1,	// (0x00049c4c) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00051bae) midp_ticker_pane_g_ParamLimits

0x77fd,	// (0x00049c58) midp_ticker_pane_t1_ParamLimits

0x9807,	// (0x0004bc62) aid_fill_nsta_2

0xa10f,	// (0x0004c56a) list_form2_midp_pane

0xb21a,	// (0x0004d675) midp_editing_number_pane_ParamLimits

0xb229,	// (0x0004d684) midp_ticker_pane_ParamLimits

0xbe3e,	// (0x0004e299) form2_midp_field_pane

0xbe62,	// (0x0004e2bd) scroll_pane_cp51

0xbe82,	// (0x0004e2dd) form2_midp_button_pane_ParamLimits

0xbe82,	// (0x0004e2dd) form2_midp_button_pane

0xbe94,	// (0x0004e2ef) form2_midp_content_pane_ParamLimits

0xbe94,	// (0x0004e2ef) form2_midp_content_pane

0xbeae,	// (0x0004e309) form2_midp_field_choice_group_pane

0xbeb6,	// (0x0004e311) form2_midp_field_pane_g1

0xbebe,	// (0x0004e319) form2_midp_field_pane_g2

0xbec6,	// (0x0004e321) form2_midp_field_pane_g3

0xbece,	// (0x0004e329) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x00051f5b) form2_midp_field_pane_g

0xbed6,	// (0x0004e331) form2_midp_gauge_slider_pane

0xbede,	// (0x0004e339) form2_midp_gauge_wait_pane

0xbee6,	// (0x0004e341) form2_midp_image_pane_ParamLimits

0xbee6,	// (0x0004e341) form2_midp_image_pane

0xbf01,	// (0x0004e35c) form2_midp_label_pane_ParamLimits

0xbf01,	// (0x0004e35c) form2_midp_label_pane

0xbf1a,	// (0x0004e375) form2_midp_label_pane_cp_ParamLimits

0xbf1a,	// (0x0004e375) form2_midp_label_pane_cp

0xbf3b,	// (0x0004e396) form2_midp_string_pane_ParamLimits

0xbf3b,	// (0x0004e396) form2_midp_string_pane

0x61c9,	// (0x00048624) form2_midp_text_pane_ParamLimits

0x61c9,	// (0x00048624) form2_midp_text_pane

0xbf4d,	// (0x0004e3a8) form2_midp_time_pane

0xbf5d,	// (0x0004e3b8) input_focus_pane_cp51_ParamLimits

0xbf5d,	// (0x0004e3b8) input_focus_pane_cp51

0xbf75,	// (0x0004e3d0) form2_midp_label_pane_t1_ParamLimits

0xbf75,	// (0x0004e3d0) form2_midp_label_pane_t1

0x61e6,	// (0x00048641) form2_mdip_text_pane_t1_ParamLimits

0x61e6,	// (0x00048641) form2_mdip_text_pane_t1

0x6204,	// (0x0004865f) form2_midp_time_pane_t1

0xbfca,	// (0x0004e425) form2_midp_gauge_slider_pane_t1

0xbfdc,	// (0x0004e437) form2_midp_gauge_slider_pane_t2

0xbfee,	// (0x0004e449) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00051f64) form2_midp_gauge_slider_pane_t

0xc000,	// (0x0004e45b) form2_midp_slider_pane

0xc00c,	// (0x0004e467) form2_midp_gauge_wait_pane_t1

0xc01a,	// (0x0004e475) form2_midp_wait_pane_ParamLimits

0xc01a,	// (0x0004e475) form2_midp_wait_pane

0xc045,	// (0x0004e4a0) list_single_2graphic_pane_cp4_ParamLimits

0xc045,	// (0x0004e4a0) list_single_2graphic_pane_cp4

0x9e2b,	// (0x0004c286) list_single_midp_graphic_pane_cp_ParamLimits

0x9e2b,	// (0x0004c286) list_single_midp_graphic_pane_cp

0x0a06,	// (0x00042e61) list_highlight_pane_cp20

0xc06d,	// (0x0004e4c8) list_single_2graphic_pane_g1_cp4

0xb669,	// (0x0004dac4) list_single_2graphic_pane_g2_cp4

0xc075,	// (0x0004e4d0) list_single_2graphic_pane_t1_cp4

0x0a62,	// (0x00042ebd) list_highlight_pane_cp21

0xc084,	// (0x0004e4df) list_single_midp_graphic_pane_g4_cp

0xc093,	// (0x0004e4ee) list_single_midp_graphic_pane_t1_cp

0xc0a8,	// (0x0004e503) form2_mdip_string_pane_t1_ParamLimits

0xc0a8,	// (0x0004e503) form2_mdip_string_pane_t1

0x0a06,	// (0x00042e61) bg_wml_button_pane_cp2

0x09fc,	// (0x00042e57) form2_midp_image_pane_g1

0x6f48,	// (0x000493a3) list_double_large_graphic_pane_g5_ParamLimits

0x6f48,	// (0x000493a3) list_double_large_graphic_pane_g5

0x770c,	// (0x00049b67) midp_form_pane_ParamLimits

0x0a62,	// (0x00042ebd) main_apps_wheel_pane_ParamLimits

0x7e83,	// (0x0004a2de) popup_preview_window_ParamLimits

0x7e83,	// (0x0004a2de) popup_preview_window

0x803e,	// (0x0004a499) popup_touch_info_window_ParamLimits

0x803e,	// (0x0004a499) popup_touch_info_window

0x805c,	// (0x0004a4b7) popup_touch_menu_window_ParamLimits

0x805c,	// (0x0004a4b7) popup_touch_menu_window

0x09f2,	// (0x00042e4d) bg_popup_sub_pane_cp6

0xc1af,	// (0x0004e60a) list_touch_menu_pane

0xc1b7,	// (0x0004e612) list_single_touch_menu_pane_ParamLimits

0xc1b7,	// (0x0004e612) list_single_touch_menu_pane

0xc1cd,	// (0x0004e628) list_single_touch_menu_pane_t1

0x0a62,	// (0x00042ebd) bg_popup_sub_pane_cp7_ParamLimits

0x0a62,	// (0x00042ebd) bg_popup_sub_pane_cp7

0xc1db,	// (0x0004e636) heading_sub_pane

0xc1e3,	// (0x0004e63e) list_touch_info_pane_ParamLimits

0xc1e3,	// (0x0004e63e) list_touch_info_pane

0xc1f2,	// (0x0004e64d) list_single_touch_info_pane_ParamLimits

0xc1f2,	// (0x0004e64d) list_single_touch_info_pane

0xc204,	// (0x0004e65f) list_single_touch_info_pane_t1

0xc212,	// (0x0004e66d) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00051f72) list_single_touch_info_pane_t

0x4ca9,	// (0x00047104) bg_popup_heading_pane_cp

0xc220,	// (0x0004e67b) heading_sub_pane_t1

0x9d50,	// (0x0004c1ab) bg_popup_preview_window_pane_cp_ParamLimits

0x9d50,	// (0x0004c1ab) bg_popup_preview_window_pane_cp

0xc1db,	// (0x0004e636) heading_preview_pane

0xc1e3,	// (0x0004e63e) list_preview_pane_ParamLimits

0xc1e3,	// (0x0004e63e) list_preview_pane

0xc22e,	// (0x0004e689) popup_preview_window_g1

0xc1f2,	// (0x0004e64d) list_single_preview_pane_ParamLimits

0xc1f2,	// (0x0004e64d) list_single_preview_pane

0xc236,	// (0x0004e691) list_single_preview_pane_g1

0xc23e,	// (0x0004e699) list_single_preview_pane_t1

0xc204,	// (0x0004e65f) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00051f77) list_single_preview_pane_t

0xc24c,	// (0x0004e6a7) bg_popup_heading_pane_cp2_ParamLimits

0xc24c,	// (0x0004e6a7) bg_popup_heading_pane_cp2

0xc262,	// (0x0004e6bd) heading_preview_pane_g1

0xc26a,	// (0x0004e6c5) heading_preview_pane_t1_ParamLimits

0xc26a,	// (0x0004e6c5) heading_preview_pane_t1

0x0ab5,	// (0x00042f10) soft_indicator_pane_t1_ParamLimits

0x0d90,	// (0x000431eb) scroll_pane_ParamLimits

0x1123,	// (0x0004357e) scroll_sc2_left_pane

0x111a,	// (0x00043575) scroll_sc2_right_pane

0x1142,	// (0x0004359d) scroll_bg_pane_g1_ParamLimits

0x1157,	// (0x000435b2) scroll_bg_pane_g2_ParamLimits

0x116f,	// (0x000435ca) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00051b39) scroll_bg_pane_g_ParamLimits

0x1142,	// (0x0004359d) scroll_handle_pane_g1_ParamLimits

0x1184,	// (0x000435df) scroll_handle_pane_g2_ParamLimits

0x116f,	// (0x000435ca) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00051b40) scroll_handle_pane_g_ParamLimits

0x7b06,	// (0x00049f61) popup_choice_list_window_ParamLimits

0x7b06,	// (0x00049f61) popup_choice_list_window

0x9c26,	// (0x0004c081) choice_list_pane

0x9ca8,	// (0x0004c103) cell_toolbar_pane_t1

0x9cd0,	// (0x0004c12b) toolbar_button_pane_ParamLimits

0xad8c,	// (0x0004d1e7) ai_gene_pane_1_t2_ParamLimits

0xad8c,	// (0x0004d1e7) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00051d68) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00051d68) ai_gene_pane_1_t

0xc287,	// (0x0004e6e2) scroll_sc2_left_pane_g1

0xc287,	// (0x0004e6e2) scroll_sc2_right_pane_g1

0x97b5,	// (0x0004bc10) bg_popup_sub_pane_cp10

0xc291,	// (0x0004e6ec) list_choice_list_pane

0xc2aa,	// (0x0004e705) list_single_choice_list_pane_ParamLimits

0xc2aa,	// (0x0004e705) list_single_choice_list_pane

0xc2bd,	// (0x0004e718) list_single_choice_list_pane_g1

0x6fe3,	// (0x0004943e) list_single_choice_list_pane_t1_ParamLimits

0x6fe3,	// (0x0004943e) list_single_choice_list_pane_t1

0xc2c5,	// (0x0004e720) choice_list_pane_g1

0xc2cd,	// (0x0004e728) choice_list_pane_t1

0x09f2,	// (0x00042e4d) input_focus_pane_cp11

0x108f,	// (0x000434ea) title_pane_stacon_g2_ParamLimits

0x108f,	// (0x000434ea) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00051b1f) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00051b1f) title_pane_stacon_g

0x4ca9,	// (0x00047104) cursor_press_pane

0x7bae,	// (0x0004a009) popup_fep_hwr_window_ParamLimits

0x7bae,	// (0x0004a009) popup_fep_hwr_window

0x7c26,	// (0x0004a081) popup_fep_vkb_window_ParamLimits

0x7c26,	// (0x0004a081) popup_fep_vkb_window

0xc2db,	// (0x0004e736) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00051fa0) fep_vkb_side_pane_g_ParamLimits

0x86ca,	// (0x0004ab25) fep_hwr_candidate_pane_ParamLimits

0x86ca,	// (0x0004ab25) fep_hwr_candidate_pane

0x86f4,	// (0x0004ab4f) fep_hwr_side_pane_ParamLimits

0x86f4,	// (0x0004ab4f) fep_hwr_side_pane

0x8714,	// (0x0004ab6f) fep_hwr_top_pane_ParamLimits

0x8714,	// (0x0004ab6f) fep_hwr_top_pane

0x872c,	// (0x0004ab87) fep_hwr_write_pane_ParamLimits

0x872c,	// (0x0004ab87) fep_hwr_write_pane

0xfb45,	// (0x00051fa0) fep_vkb_side_pane_g

0xc2e3,	// (0x0004e73e) fep_hwr_top_pane_g1

0xc2f5,	// (0x0004e750) fep_hwr_top_pane_g2

0x8758,	// (0x0004abb3) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x00051f7c) fep_hwr_top_pane_g

0x876d,	// (0x0004abc8) fep_hwr_top_text_pane

0x1247,	// (0x000436a2) fep_hwr_top_text_pane_g1

0xc32b,	// (0x0004e786) fep_hwr_top_text_pane_t1

0x8863,	// (0x0004acbe) fep_hwr_candidate_pane_g1

0xc570,	// (0x0004e9cb) fep_vkb_keypad_pane_g3_ParamLimits

0xc570,	// (0x0004e9cb) fep_vkb_keypad_pane_g3

0xc598,	// (0x0004e9f3) fep_vkb_keypad_pane_g4_ParamLimits

0xc598,	// (0x0004e9f3) fep_vkb_keypad_pane_g4

0xc607,	// (0x0004ea62) fep_vkb_bottom_pane_g2_ParamLimits

0xc607,	// (0x0004ea62) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x00051fa7) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x00051fa7) fep_vkb_bottom_pane_g

0xc287,	// (0x0004e6e2) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x00051fb1) cell_vkb_side_pane_g

0xc692,	// (0x0004eaed) cell_vkb_side_pane_t1

0xc6a0,	// (0x0004eafb) cell_vkb_side_pane_t1_copy1

0xc287,	// (0x0004e6e2) bg_fep_vkb_candidate_pane_g2

0xc7cc,	// (0x0004ec27) cell_vkb_candidate_pane_ParamLimits

0xc339,	// (0x0004e794) aid_size_cell_vkb_ParamLimits

0xc339,	// (0x0004e794) aid_size_cell_vkb

0xc7cc,	// (0x0004ec27) cell_vkb_candidate_pane

0x887d,	// (0x0004acd8) bg_popup_fep_shadow_pane_g1

0xc3c7,	// (0x0004e822) fep_vkb_bottom_pane_ParamLimits

0xc3c7,	// (0x0004e822) fep_vkb_bottom_pane

0xc3fd,	// (0x0004e858) fep_vkb_candidate_pane_ParamLimits

0xc3fd,	// (0x0004e858) fep_vkb_candidate_pane

0xc419,	// (0x0004e874) fep_vkb_keypad_pane_ParamLimits

0xc419,	// (0x0004e874) fep_vkb_keypad_pane

0xc458,	// (0x0004e8b3) fep_vkb_side_pane_ParamLimits

0xc458,	// (0x0004e8b3) fep_vkb_side_pane

0xc494,	// (0x0004e8ef) fep_vkb_top_pane_ParamLimits

0xc494,	// (0x0004e8ef) fep_vkb_top_pane

0xc4c9,	// (0x0004e924) fep_vkb_top_pane_g1_ParamLimits

0xc4c9,	// (0x0004e924) fep_vkb_top_pane_g1

0xc4d8,	// (0x0004e933) fep_vkb_top_pane_g2_ParamLimits

0xc4d8,	// (0x0004e933) fep_vkb_top_pane_g2

0xc4e7,	// (0x0004e942) fep_vkb_top_pane_g3_ParamLimits

0xc4e7,	// (0x0004e942) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x00051f97) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x00051f97) fep_vkb_top_pane_g

0xc505,	// (0x0004e960) fep_vkb_top_text_pane_ParamLimits

0xc505,	// (0x0004e960) fep_vkb_top_text_pane

0xc516,	// (0x0004e971) fep_vkb_side_pane_g1_ParamLimits

0xc516,	// (0x0004e971) fep_vkb_side_pane_g1

0xc55f,	// (0x0004e9ba) grid_vkb_side_pane_ParamLimits

0xc55f,	// (0x0004e9ba) grid_vkb_side_pane

0x8885,	// (0x0004ace0) bg_popup_fep_shadow_pane_g2

0x888e,	// (0x0004ace9) bg_popup_fep_shadow_pane_g3

0x8896,	// (0x0004acf1) bg_popup_fep_shadow_pane_g4

0x889f,	// (0x0004acfa) bg_popup_fep_shadow_pane_g5

0x88a9,	// (0x0004ad04) bg_popup_fep_shadow_pane_g6

0x88b1,	// (0x0004ad0c) bg_popup_fep_shadow_pane_g7

0x0e8c,	// (0x000432e7) bg_popup_fep_shadow_pane_g8

0xc5b6,	// (0x0004ea11) grid_vkb_keypad_number_pane_ParamLimits

0xc5b6,	// (0x0004ea11) grid_vkb_keypad_number_pane

0xc5c6,	// (0x0004ea21) grid_vkb_keypad_pane_ParamLimits

0xc5c6,	// (0x0004ea21) grid_vkb_keypad_pane

0xc5ec,	// (0x0004ea47) fep_vkb_bottom_pane_g1_ParamLimits

0xc5ec,	// (0x0004ea47) fep_vkb_bottom_pane_g1

0xc615,	// (0x0004ea70) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc615,	// (0x0004ea70) grid_vkb_keypad_bottom_left_pane

0xc62a,	// (0x0004ea85) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc62a,	// (0x0004ea85) grid_vkb_keypad_bottom_right_pane

0xc63f,	// (0x0004ea9a) fep_vkb_top_text_pane_g1

0xc65a,	// (0x0004eab5) fep_vkb_top_text_pane_t1

0xc66f,	// (0x0004eaca) cell_vkb_side_pane_ParamLimits

0xc66f,	// (0x0004eaca) cell_vkb_side_pane

0xc287,	// (0x0004e6e2) cell_vkb_side_pane_g1

0xc6ae,	// (0x0004eb09) cell_vkb_keypad_pane_ParamLimits

0xc6ae,	// (0x0004eb09) cell_vkb_keypad_pane

0xc723,	// (0x0004eb7e) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x00051fc4) bg_popup_fep_shadow_pane_g

0xc287,	// (0x0004e6e2) cell_hwr_side_pane_g1

0xc287,	// (0x0004e6e2) cell_hwr_side_pane_g2

0xc72d,	// (0x0004eb88) cell_vkb_keypad_pane_t1

0xc73b,	// (0x0004eb96) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc73b,	// (0x0004eb96) cell_vkb_keypad_bottom_left_pane

0xc758,	// (0x0004ebb3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc758,	// (0x0004ebb3) cell_vkb_keypad_bottom_right_pane

0xc287,	// (0x0004e6e2) cell_vkb_keypad_bottom_left_pane_g1

0xc287,	// (0x0004e6e2) cell_vkb_keypad_bottom_right_pane_g1

0xc791,	// (0x0004ebec) cell_vkb_keypad_number_pane_ParamLimits

0xc791,	// (0x0004ebec) cell_vkb_keypad_number_pane

0xc7b0,	// (0x0004ec0b) cell_vkb_keypad_number_pane_g1

0xc7ba,	// (0x0004ec15) cell_vkb_keypad_number_pane_g2

0xc7c3,	// (0x0004ec1e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x00051fb6) cell_vkb_keypad_number_pane_g

0xc72d,	// (0x0004eb88) cell_vkb_keypad_number_pane_t1

0xc7e7,	// (0x0004ec42) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x00051fb1) cell_hwr_side_pane_g

0xc800,	// (0x0004ec5b) cell_hwr_side_pane_t1

0x88c3,	// (0x0004ad1e) cell_hwr_side_pane_t1_copy1

0xc4f7,	// (0x0004e952) cell_hwr_candidate_pane_g1

0x88d1,	// (0x0004ad2c) cell_hwr_candidate_pane_t1

0xc287,	// (0x0004e6e2) cell_vkb_candidate_pane_g2

0xc886,	// (0x0004ece1) cell_vkb_candidate_pane_t1

0x8691,	// (0x0004aaec) bg_popup_fep_shadow_pane_ParamLimits

0x8691,	// (0x0004aaec) bg_popup_fep_shadow_pane

0x2a65,	// (0x00044ec0) bg_fep_hwr_top_pane_g4

0xc307,	// (0x0004e762) bg_hwr_side_pane_g1_ParamLimits

0xc307,	// (0x0004e762) bg_hwr_side_pane_g1

0x87a9,	// (0x0004ac04) cell_hwr_side_pane_ParamLimits

0x87a9,	// (0x0004ac04) cell_hwr_side_pane

0x87e4,	// (0x0004ac3f) fep_hwr_write_pane_g1_ParamLimits

0x87e4,	// (0x0004ac3f) fep_hwr_write_pane_g1

0x87f1,	// (0x0004ac4c) fep_hwr_write_pane_g2_ParamLimits

0x87f1,	// (0x0004ac4c) fep_hwr_write_pane_g2

0x87fe,	// (0x0004ac59) fep_hwr_write_pane_g3_ParamLimits

0x87fe,	// (0x0004ac59) fep_hwr_write_pane_g3

0x880c,	// (0x0004ac67) fep_hwr_write_pane_g4_ParamLimits

0x880c,	// (0x0004ac67) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00051f83) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00051f83) fep_hwr_write_pane_g

0x2a65,	// (0x00044ec0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2a65,	// (0x00044ec0) bg_fep_hwr_candidate_pane_g2

0x8821,	// (0x0004ac7c) cell_hwr_candidate_pane_ParamLimits

0x8821,	// (0x0004ac7c) cell_hwr_candidate_pane

0x8863,	// (0x0004acbe) fep_hwr_candidate_pane_g1_ParamLimits

0xc367,	// (0x0004e7c2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc367,	// (0x0004e7c2) bg_popup_fep_shadow_pane_cp2

0xc4f7,	// (0x0004e952) fep_vkb_top_pane_g4_ParamLimits

0xc4f7,	// (0x0004e952) fep_vkb_top_pane_g4

0xc53d,	// (0x0004e998) fep_vkb_side_pane_g2_ParamLimits

0xc53d,	// (0x0004e998) fep_vkb_side_pane_g2

0x5992,	// (0x00047ded) list_setting_pane_t4_ParamLimits

0x5992,	// (0x00047ded) list_setting_pane_t4

0x5a2c,	// (0x00047e87) list_setting_number_pane_t5_ParamLimits

0x5a2c,	// (0x00047e87) list_setting_number_pane_t5

0x736b,	// (0x000497c6) list_double_heading_pane_cp2_ParamLimits

0x736b,	// (0x000497c6) list_double_heading_pane_cp2

0xbfb6,	// (0x0004e411) list_double_heading_pane_g1_cp2_ParamLimits

0xbfb6,	// (0x0004e411) list_double_heading_pane_g1_cp2

0xc894,	// (0x0004ecef) list_double_heading_pane_g2_cp2_ParamLimits

0xc894,	// (0x0004ecef) list_double_heading_pane_g2_cp2

0xc8a8,	// (0x0004ed03) list_double_heading_pane_t1_cp2_ParamLimits

0xc8a8,	// (0x0004ed03) list_double_heading_pane_t1_cp2

0xc8be,	// (0x0004ed19) list_double_heading_pane_t2_cp2_ParamLimits

0xc8be,	// (0x0004ed19) list_double_heading_pane_t2_cp2

0x09ea,	// (0x00042e45) aid_value_unit2

0x67a1,	// (0x00048bfc) popup_preview_fixed_window

0x0b8c,	// (0x00042fe7) bg_popup_preview_window_pane_cp02

0xc8d0,	// (0x0004ed2b) list_preview_fixed_pane

0xc916,	// (0x0004ed71) list_empty_pane_fp_ParamLimits

0xc916,	// (0x0004ed71) list_empty_pane_fp

0xc916,	// (0x0004ed71) list_single_cale_day_pane_fp_ParamLimits

0xc916,	// (0x0004ed71) list_single_cale_day_pane_fp

0xc916,	// (0x0004ed71) list_single_graphic_heading_pane_fp_ParamLimits

0xc916,	// (0x0004ed71) list_single_graphic_heading_pane_fp

0xc916,	// (0x0004ed71) list_single_graphic_pane_fp_ParamLimits

0xc916,	// (0x0004ed71) list_single_graphic_pane_fp

0xc916,	// (0x0004ed71) list_single_heading_pane_fp_ParamLimits

0xc916,	// (0x0004ed71) list_single_heading_pane_fp

0xc916,	// (0x0004ed71) list_single_pane_fp_ParamLimits

0xc916,	// (0x0004ed71) list_single_pane_fp

0xc92c,	// (0x0004ed87) list_single_pane_fp_g1_ParamLimits

0xc92c,	// (0x0004ed87) list_single_pane_fp_g1

0xc938,	// (0x0004ed93) list_single_pane_fp_g2_ParamLimits

0xc938,	// (0x0004ed93) list_single_pane_fp_g2

0xc944,	// (0x0004ed9f) list_single_pane_fp_g3_ParamLimits

0xc944,	// (0x0004ed9f) list_single_pane_fp_g3

0xc958,	// (0x0004edb3) list_single_pane_fp_g4_ParamLimits

0xc958,	// (0x0004edb3) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x00051fe5) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x00051fe5) list_single_pane_fp_g

0x6217,	// (0x00048672) list_single_pane_fp_t1_ParamLimits

0x6217,	// (0x00048672) list_single_pane_fp_t1

0x622e,	// (0x00048689) list_single_graphic_pane_fp_g1_ParamLimits

0x622e,	// (0x00048689) list_single_graphic_pane_fp_g1

0xc92c,	// (0x0004ed87) list_single_graphic_pane_fp_g2_ParamLimits

0xc92c,	// (0x0004ed87) list_single_graphic_pane_fp_g2

0xc938,	// (0x0004ed93) list_single_graphic_pane_fp_g3_ParamLimits

0xc938,	// (0x0004ed93) list_single_graphic_pane_fp_g3

0xc944,	// (0x0004ed9f) list_single_graphic_pane_fp_g4_ParamLimits

0xc944,	// (0x0004ed9f) list_single_graphic_pane_fp_g4

0xc958,	// (0x0004edb3) list_single_graphic_pane_fp_g5_ParamLimits

0xc958,	// (0x0004edb3) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x00051fee) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x00051fee) list_single_graphic_pane_fp_g

0x623a,	// (0x00048695) list_single_graphic_pane_fp_t1_ParamLimits

0x623a,	// (0x00048695) list_single_graphic_pane_fp_t1

0x622e,	// (0x00048689) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x622e,	// (0x00048689) list_single_graphic_heading_pane_fp_g1

0xc92c,	// (0x0004ed87) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x0004ed87) list_single_graphic_heading_pane_fp_g2

0xc938,	// (0x0004ed93) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc938,	// (0x0004ed93) list_single_graphic_heading_pane_fp_g3

0xc944,	// (0x0004ed9f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc944,	// (0x0004ed9f) list_single_graphic_heading_pane_fp_g4

0xc958,	// (0x0004edb3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc958,	// (0x0004edb3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00051fee) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00051fee) list_single_graphic_heading_pane_fp_g

0x6250,	// (0x000486ab) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6250,	// (0x000486ab) list_single_graphic_heading_pane_fp_t1

0x6266,	// (0x000486c1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6266,	// (0x000486c1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x00051ff9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x00051ff9) list_single_graphic_heading_pane_fp_t

0x6278,	// (0x000486d3) list_single_cale_day_pane_fp_g1_ParamLimits

0x6278,	// (0x000486d3) list_single_cale_day_pane_fp_g1

0xc964,	// (0x0004edbf) list_single_cale_day_pane_fp_g2_ParamLimits

0xc964,	// (0x0004edbf) list_single_cale_day_pane_fp_g2

0x88ef,	// (0x0004ad4a) list_single_cale_day_pane_fp_g3_ParamLimits

0x88ef,	// (0x0004ad4a) list_single_cale_day_pane_fp_g3

0x8917,	// (0x0004ad72) list_single_cale_day_pane_fp_g4_ParamLimits

0x8917,	// (0x0004ad72) list_single_cale_day_pane_fp_g4

0x893b,	// (0x0004ad96) list_single_cale_day_pane_fp_g5_ParamLimits

0x893b,	// (0x0004ad96) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x00051ffe) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x00051ffe) list_single_cale_day_pane_fp_g

0x62b0,	// (0x0004870b) list_single_cale_day_pane_fp_t1_ParamLimits

0x62b0,	// (0x0004870b) list_single_cale_day_pane_fp_t1

0x62d6,	// (0x00048731) list_single_cale_day_pane_fp_t2_ParamLimits

0x62d6,	// (0x00048731) list_single_cale_day_pane_fp_t2

0x62ef,	// (0x0004874a) list_single_cale_day_pane_fp_t3_ParamLimits

0x62ef,	// (0x0004874a) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x00052009) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x00052009) list_single_cale_day_pane_fp_t

0xc92c,	// (0x0004ed87) list_empty_pane_fp_g1_ParamLimits

0xc92c,	// (0x0004ed87) list_empty_pane_fp_g1

0x6308,	// (0x00048763) list_empty_pane_fp_t1

0x6316,	// (0x00048771) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x00052010) list_empty_pane_fp_t

0xc92c,	// (0x0004ed87) list_single_heading_pane_fp_g1_ParamLimits

0xc92c,	// (0x0004ed87) list_single_heading_pane_fp_g1

0xc938,	// (0x0004ed93) list_single_heading_pane_fp_g2_ParamLimits

0xc938,	// (0x0004ed93) list_single_heading_pane_fp_g2

0xc944,	// (0x0004ed9f) list_single_heading_pane_fp_g3_ParamLimits

0xc944,	// (0x0004ed9f) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x00052015) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x00052015) list_single_heading_pane_fp_g

0x6324,	// (0x0004877f) list_single_heading_pane_fp_t1_ParamLimits

0x6324,	// (0x0004877f) list_single_heading_pane_fp_t1

0x6336,	// (0x00048791) list_single_heading_pane_fp_t2_ParamLimits

0x6336,	// (0x00048791) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x0005201c) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x0005201c) list_single_heading_pane_fp_t

0x703b,	// (0x00049496) aid_size_cell_fast

0x0b6f,	// (0x00042fca) soft_indicator_pane_cp1_t1

0x7044,	// (0x0004949f) cell_app_pane_cp2_ParamLimits

0x7044,	// (0x0004949f) cell_app_pane_cp2

0x86b3,	// (0x0004ab0e) fep_hwr_candidate_drop_down_list_pane

0x2a73,	// (0x00044ece) fep_hwr_candidate_pane_g3_ParamLimits

0x2a73,	// (0x00044ece) fep_hwr_candidate_pane_g3

0x2a80,	// (0x00044edb) fep_hwr_candidate_pane_g4_ParamLimits

0x2a80,	// (0x00044edb) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00051f90) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00051f90) fep_hwr_candidate_pane_g

0xc3ec,	// (0x0004e847) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3ec,	// (0x0004e847) fep_vkb_candidate_drop_down_list_pane

0xc7ef,	// (0x0004ec4a) fep_vkb_candidate_pane_g3

0xc7f7,	// (0x0004ec52) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x00051fbd) fep_vkb_candidate_pane_g

0xc4f7,	// (0x0004e952) cell_hwr_candidate_pane_g1_ParamLimits

0xc80e,	// (0x0004ec69) cell_hwr_candidate_pane_g3_ParamLimits

0xc80e,	// (0x0004ec69) cell_hwr_candidate_pane_g3

0xc82f,	// (0x0004ec8a) cell_hwr_candidate_pane_g4_ParamLimits

0xc82f,	// (0x0004ec8a) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x00051fd7) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x00051fd7) cell_hwr_candidate_pane_g

0xc850,	// (0x0004ecab) cell_vkb_candidate_pane_g3_ParamLimits

0xc850,	// (0x0004ecab) cell_vkb_candidate_pane_g3

0xc86b,	// (0x0004ecc6) cell_vkb_candidate_pane_g4_ParamLimits

0xc86b,	// (0x0004ecc6) cell_vkb_candidate_pane_g4

0xc970,	// (0x0004edcb) cell_app_pane_cp2_g1_ParamLimits

0xc970,	// (0x0004edcb) cell_app_pane_cp2_g1

0xc98e,	// (0x0004ede9) cell_app_pane_cp2_g2_ParamLimits

0xc98e,	// (0x0004ede9) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x00052021) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x00052021) cell_app_pane_cp2_g

0xc99a,	// (0x0004edf5) cell_app_pane_cp2_t1_ParamLimits

0xc99a,	// (0x0004edf5) cell_app_pane_cp2_t1

0x0e14,	// (0x0004326f) grid_highlight_pane_cp1_ParamLimits

0x0e14,	// (0x0004326f) grid_highlight_pane_cp1

0x895f,	// (0x0004adba) cell_hwr_candidate_pane_cp1_ParamLimits

0x895f,	// (0x0004adba) cell_hwr_candidate_pane_cp1

0xc4f7,	// (0x0004e952) fep_hwr_candidate_drop_down_list_pane_g1

0xc9ac,	// (0x0004ee07) fep_hwr_candidate_drop_down_list_pane_g2

0xc9b9,	// (0x0004ee14) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00052026) fep_hwr_candidate_drop_down_list_pane_g

0x897e,	// (0x0004add9) fep_hwr_candidate_drop_down_list_scroll_pane

0x8987,	// (0x0004ade2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8987,	// (0x0004ade2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8994,	// (0x0004adef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8994,	// (0x0004adef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x89a1,	// (0x0004adfc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x89a1,	// (0x0004adfc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc850,	// (0x0004ecab) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc850,	// (0x0004ecab) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc86b,	// (0x0004ecc6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc86b,	// (0x0004ecc6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x89ae,	// (0x0004ae09) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x89ae,	// (0x0004ae09) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x89c9,	// (0x0004ae24) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x89c9,	// (0x0004ae24) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x89e4,	// (0x0004ae3f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x89e4,	// (0x0004ae3f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0005202d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0005202d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9c6,	// (0x0004ee21) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9c6,	// (0x0004ee21) cell_vkb_candidate_pane_cp1

0xc4f7,	// (0x0004e952) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4f7,	// (0x0004e952) fep_vkb_candidate_drop_down_list_pane_g1

0xc9ac,	// (0x0004ee07) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9ac,	// (0x0004ee07) fep_vkb_candidate_drop_down_list_pane_g2

0xc9b9,	// (0x0004ee14) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9b9,	// (0x0004ee14) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00052026) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x00052026) fep_vkb_candidate_drop_down_list_pane_g

0xc9e6,	// (0x0004ee41) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9e6,	// (0x0004ee41) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f3,	// (0x0004ee4e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f3,	// (0x0004ee4e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca00,	// (0x0004ee5b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca00,	// (0x0004ee5b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca0c,	// (0x0004ee67) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca0c,	// (0x0004ee67) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc80e,	// (0x0004ec69) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc80e,	// (0x0004ec69) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc82f,	// (0x0004ec8a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc82f,	// (0x0004ec8a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca18,	// (0x0004ee73) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca18,	// (0x0004ee73) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca39,	// (0x0004ee94) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca39,	// (0x0004ee94) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5a,	// (0x0004eeb5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5a,	// (0x0004eeb5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0005203e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0005203e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x68bb,	// (0x00048d16) title_pane_g1_ParamLimits

0x68c8,	// (0x00048d23) title_pane_g2_ParamLimits

0xf54e,	// (0x000519a9) title_pane_g_ParamLimits

0x123f,	// (0x0004369a) aid_call2_pane

0x1237,	// (0x00043692) aid_call_pane

0x1247,	// (0x000436a2) popup_clock_analogue_window_g1

0x1247,	// (0x000436a2) popup_clock_analogue_window_g2

0x734c,	// (0x000497a7) popup_clock_analogue_window_g3

0x7355,	// (0x000497b0) popup_clock_analogue_window_g4

0x09fc,	// (0x00042e57) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00051b4e) popup_clock_analogue_window_g

0x735d,	// (0x000497b8) popup_clock_analogue_window_t1

0x7395,	// (0x000497f0) clock_digital_number_pane_ParamLimits

0x7395,	// (0x000497f0) clock_digital_number_pane

0x73a1,	// (0x000497fc) clock_digital_number_pane_cp02_ParamLimits

0x73a1,	// (0x000497fc) clock_digital_number_pane_cp02

0x73ad,	// (0x00049808) clock_digital_number_pane_cp03_ParamLimits

0x73ad,	// (0x00049808) clock_digital_number_pane_cp03

0x73b9,	// (0x00049814) clock_digital_number_pane_cp04_ParamLimits

0x73b9,	// (0x00049814) clock_digital_number_pane_cp04

0x73c5,	// (0x00049820) clock_digital_separator_pane_ParamLimits

0x73c5,	// (0x00049820) clock_digital_separator_pane

0x73d1,	// (0x0004982c) popup_clock_digital_window_t1_ParamLimits

0x73d1,	// (0x0004982c) popup_clock_digital_window_t1

0x09fc,	// (0x00042e57) clock_digital_number_pane_g1

0x09fc,	// (0x00042e57) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00051b59) clock_digital_number_pane_g

0x09fc,	// (0x00042e57) clock_digital_separator_pane_g1

0x09fc,	// (0x00042e57) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00051b59) clock_digital_separator_pane_g

0x97f1,	// (0x0004bc4c) aid_fill_nsta_ParamLimits

0x993d,	// (0x0004bd98) indicator_nsta_pane_ParamLimits

0x9ab6,	// (0x0004bf11) popup_clock_analogue_window

0x9ab6,	// (0x0004bf11) popup_clock_digital_window

0x0a62,	// (0x00042ebd) grid_indicator_nsta_pane_ParamLimits

0xbc85,	// (0x0004e0e0) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00051f10) clock_nsta_pane_t

0x7277,	// (0x000496d2) aid_size_max_handle

0x7281,	// (0x000496dc) aid_size_min_handle

0x4ca9,	// (0x00047104) editor_scroll_pane

0xca75,	// (0x0004eed0) ex_editor_pane

0x0f33,	// (0x0004338e) scroll_pane_cp13

0x0dbc,	// (0x00043217) scroll_pane_cp14

0x1276,	// (0x000436d1) scroll_pane_cp36

0x737f,	// (0x000497da) list_single_graphic_hl_pane_cp2_ParamLimits

0x737f,	// (0x000497da) list_single_graphic_hl_pane_cp2

0x5f0c,	// (0x00048367) list_single_graphic_hl_pane_ParamLimits

0x5f0c,	// (0x00048367) list_single_graphic_hl_pane

0x634c,	// (0x000487a7) aid_size_min_hl_cp1

0xca7d,	// (0x0004eed8) list_highlight_pane_cp34_ParamLimits

0xca7d,	// (0x0004eed8) list_highlight_pane_cp34

0xca8e,	// (0x0004eee9) list_single_graphic_hl_pane_g1_ParamLimits

0xca8e,	// (0x0004eee9) list_single_graphic_hl_pane_g1

0x6355,	// (0x000487b0) list_single_graphic_hl_pane_g2_ParamLimits

0x6355,	// (0x000487b0) list_single_graphic_hl_pane_g2

0x6355,	// (0x000487b0) list_single_graphic_hl_pane_g3_ParamLimits

0x6355,	// (0x000487b0) list_single_graphic_hl_pane_g3

0x4c34,	// (0x0004708f) list_single_graphic_hl_pane_g4_ParamLimits

0x4c34,	// (0x0004708f) list_single_graphic_hl_pane_g4

0x6361,	// (0x000487bc) list_single_graphic_hl_pane_g5_ParamLimits

0x6361,	// (0x000487bc) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x0005204f) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x0005204f) list_single_graphic_hl_pane_g

0x6375,	// (0x000487d0) list_single_graphic_hl_pane_t1_ParamLimits

0x6375,	// (0x000487d0) list_single_graphic_hl_pane_t1

0xca9b,	// (0x0004eef6) aid_size_min_hl_cp2

0xcaa4,	// (0x0004eeff) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa4,	// (0x0004eeff) list_highlight_pane_cp34_cp2

0xca8e,	// (0x0004eee9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca8e,	// (0x0004eee9) list_single_graphic_hl_pane_g1_cp2

0xcab1,	// (0x0004ef0c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab1,	// (0x0004ef0c) list_single_graphic_hl_pane_g2_cp2

0xcabd,	// (0x0004ef18) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcabd,	// (0x0004ef18) list_single_graphic_hl_pane_g3_cp2

0x4c08,	// (0x00047063) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4c08,	// (0x00047063) list_single_graphic_hl_pane_g4_cp2

0xcacb,	// (0x0004ef26) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacb,	// (0x0004ef26) list_single_graphic_hl_pane_g5_cp2

0x79b4,	// (0x00049e0f) control_pane_g4_ParamLimits

0x79b4,	// (0x00049e0f) control_pane_g4

0x97b5,	// (0x0004bc10) bg_popup_sub_pane_cp10_ParamLimits

0xc291,	// (0x0004e6ec) list_choice_list_pane_ParamLimits

0xc2a0,	// (0x0004e6fb) scroll_pane_cp23

0x0b8c,	// (0x00042fe7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8d0,	// (0x0004ed2b) list_preview_fixed_pane_ParamLimits

0xc8e6,	// (0x0004ed41) list_preview_fixed_pane_cp_ParamLimits

0xc8e6,	// (0x0004ed41) list_preview_fixed_pane_cp

0xc8f2,	// (0x0004ed4d) popup_preview_fixed_window_g1_ParamLimits

0xc8f2,	// (0x0004ed4d) popup_preview_fixed_window_g1

0xc8fe,	// (0x0004ed59) popup_preview_fixed_window_g2_ParamLimits

0xc8fe,	// (0x0004ed59) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x00051fde) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x00051fde) popup_preview_fixed_window_g

0x7153,	// (0x000495ae) aid_navi_side_left_pane_ParamLimits

0x7168,	// (0x000495c3) aid_navi_side_right_pane_ParamLimits

0x7180,	// (0x000495db) navi_icon_pane_stacon_ParamLimits

0x7194,	// (0x000495ef) navi_navi_pane_stacon_ParamLimits

0x7180,	// (0x000495db) navi_text_pane_stacon_ParamLimits

0x09f2,	// (0x00042e4d) main_text_info_pane

0xcaf5,	// (0x0004ef50) listscroll_text_info_pane

0xcafd,	// (0x0004ef58) list_text_info_pane_ParamLimits

0xcafd,	// (0x0004ef58) list_text_info_pane

0xcb0c,	// (0x0004ef67) scroll_pane_cp24_ParamLimits

0xcb0c,	// (0x0004ef67) scroll_pane_cp24

0xcb2a,	// (0x0004ef85) list_text_info_pane_t1_ParamLimits

0xcb2a,	// (0x0004ef85) list_text_info_pane_t1

0x7b22,	// (0x00049f7d) popup_fast_swap2_window_ParamLimits

0x7b22,	// (0x00049f7d) popup_fast_swap2_window

0xcb5e,	// (0x0004efb9) aid_size_cell_fast2

0x09f2,	// (0x00042e4d) bg_popup_window_pane_cp17

0xa143,	// (0x0004c59e) heading_pane_cp2

0x0cc0,	// (0x0004311b) listscroll_fast2_pane

0xcb68,	// (0x0004efc3) grid_fast2_pane

0xcb72,	// (0x0004efcd) listscroll_fast2_pane_g1

0xcb7a,	// (0x0004efd5) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x0005205a) listscroll_fast2_pane_g

0x0f33,	// (0x0004338e) scroll_pane_cp26

0xcb84,	// (0x0004efdf) cell_fast2_pane_ParamLimits

0xcb84,	// (0x0004efdf) cell_fast2_pane

0xcb99,	// (0x0004eff4) cell_fast2_pane_g1

0xcba2,	// (0x0004effd) cell_fast2_pane_g2

0xcbab,	// (0x0004f006) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x0005205f) cell_fast2_pane_g

0x0cf3,	// (0x0004314e) grid_highlight_pane_cp9

0x0d08,	// (0x00043163) main_eswt_pane_ParamLimits

0x0d08,	// (0x00043163) main_eswt_pane

0xcb21,	// (0x0004ef7c) list_single_text_info_pane

0xcbb3,	// (0x0004f00e) eswt_ctrl_button_pane

0xcbb3,	// (0x0004f00e) eswt_ctrl_canvas_pane

0xcbbb,	// (0x0004f016) eswt_ctrl_combo_pane

0xcbb3,	// (0x0004f00e) eswt_ctrl_default_pane

0xcbb3,	// (0x0004f00e) eswt_ctrl_label_pane

0xcbc3,	// (0x0004f01e) eswt_ctrl_wait_pane

0xcbcb,	// (0x0004f026) eswt_shell_pane

0x09f2,	// (0x00042e4d) listscroll_eswt_app_pane

0xcbeb,	// (0x0004f046) popup_eswt_tasktip_window_ParamLimits

0xcbeb,	// (0x0004f046) popup_eswt_tasktip_window

0x9d50,	// (0x0004c1ab) bg_popup_window_pane_cp18

0xcbfc,	// (0x0004f057) eswt_control_pane_g1_ParamLimits

0xcbfc,	// (0x0004f057) eswt_control_pane_g1

0xcc09,	// (0x0004f064) eswt_control_pane_g2_ParamLimits

0xcc09,	// (0x0004f064) eswt_control_pane_g2

0xcc16,	// (0x0004f071) eswt_control_pane_g3_ParamLimits

0xcc16,	// (0x0004f071) eswt_control_pane_g3

0xcc23,	// (0x0004f07e) eswt_control_pane_g4_ParamLimits

0xcc23,	// (0x0004f07e) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x00052066) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x00052066) eswt_control_pane_g

0x0e14,	// (0x0004326f) bg_button_pane_ParamLimits

0x0e14,	// (0x0004326f) bg_button_pane

0x0d08,	// (0x00043163) common_borders_pane_copy2_ParamLimits

0x0d08,	// (0x00043163) common_borders_pane_copy2

0xcc30,	// (0x0004f08b) control_button_pane_g1_ParamLimits

0xcc30,	// (0x0004f08b) control_button_pane_g1

0xcc3c,	// (0x0004f097) control_button_pane_g2_ParamLimits

0xcc3c,	// (0x0004f097) control_button_pane_g2

0xcc48,	// (0x0004f0a3) control_button_pane_g3_ParamLimits

0xcc48,	// (0x0004f0a3) control_button_pane_g3

0x0002,

0xfc14,	// (0x0005206f) control_button_pane_g_ParamLimits

0xfc14,	// (0x0005206f) control_button_pane_g

0xcc5c,	// (0x0004f0b7) control_button_pane_t1

0xcc6a,	// (0x0004f0c5) control_button_pane_t2

0x0001,

0xfc1b,	// (0x00052076) control_button_pane_t

0x9cdc,	// (0x0004c137) bg_button_pane_g1

0x9ce4,	// (0x0004c13f) bg_button_pane_g2

0x9cec,	// (0x0004c147) bg_button_pane_g3

0x9cf4,	// (0x0004c14f) bg_button_pane_g4

0x9cfc,	// (0x0004c157) bg_button_pane_g5

0x9d04,	// (0x0004c15f) bg_button_pane_g6

0x9d0c,	// (0x0004c167) bg_button_pane_g7

0x9d14,	// (0x0004c16f) bg_button_pane_g8

0x9d1c,	// (0x0004c177) bg_button_pane_g9

0x0008,

0xf861,	// (0x00051cbc) bg_button_pane_g

0xc24c,	// (0x0004e6a7) common_borders_pane_ParamLimits

0xc24c,	// (0x0004e6a7) common_borders_pane

0xcbfc,	// (0x0004f057) eswt_control_pane_g1_copy1_ParamLimits

0xcbfc,	// (0x0004f057) eswt_control_pane_g1_copy1

0xcc09,	// (0x0004f064) eswt_control_pane_g2_copy1_ParamLimits

0xcc09,	// (0x0004f064) eswt_control_pane_g2_copy1

0xcc16,	// (0x0004f071) eswt_control_pane_g3_copy1_ParamLimits

0xcc16,	// (0x0004f071) eswt_control_pane_g3_copy1

0xcc23,	// (0x0004f07e) eswt_control_pane_g4_copy1_ParamLimits

0xcc23,	// (0x0004f07e) eswt_control_pane_g4_copy1

0xc287,	// (0x0004e6e2) bg_eswt_ctrl_canvas_pane_g1

0xc24c,	// (0x0004e6a7) common_borders_pane_cp2_ParamLimits

0xc24c,	// (0x0004e6a7) common_borders_pane_cp2

0xc24c,	// (0x0004e6a7) common_borders_pane_cp3_ParamLimits

0xc24c,	// (0x0004e6a7) common_borders_pane_cp3

0xcc78,	// (0x0004f0d3) separator_horizontal_pane

0xcc80,	// (0x0004f0db) separator_vertical_pane

0xcbfc,	// (0x0004f057) eswt_control_pane_g1_copy2_ParamLimits

0xcbfc,	// (0x0004f057) eswt_control_pane_g1_copy2

0xcc09,	// (0x0004f064) eswt_control_pane_g2_copy2_ParamLimits

0xcc09,	// (0x0004f064) eswt_control_pane_g2_copy2

0xcc16,	// (0x0004f071) eswt_control_pane_g3_copy2_ParamLimits

0xcc16,	// (0x0004f071) eswt_control_pane_g3_copy2

0xcc23,	// (0x0004f07e) eswt_control_pane_g4_copy2_ParamLimits

0xcc23,	// (0x0004f07e) eswt_control_pane_g4_copy2

0x09f2,	// (0x00042e4d) common_borders_pane_cp4

0xcc89,	// (0x0004f0e4) separator_horizontal_pane_g1

0xcc92,	// (0x0004f0ed) separator_horizontal_pane_g2

0xcc9b,	// (0x0004f0f6) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x0005207b) separator_horizontal_pane_g

0xcbfc,	// (0x0004f057) eswt_control_pane_g1_copy3_ParamLimits

0xcbfc,	// (0x0004f057) eswt_control_pane_g1_copy3

0xcc09,	// (0x0004f064) eswt_control_pane_g2_copy3_ParamLimits

0xcc09,	// (0x0004f064) eswt_control_pane_g2_copy3

0xcc16,	// (0x0004f071) eswt_control_pane_g3_copy3_ParamLimits

0xcc16,	// (0x0004f071) eswt_control_pane_g3_copy3

0xcc23,	// (0x0004f07e) eswt_control_pane_g4_copy3_ParamLimits

0xcc23,	// (0x0004f07e) eswt_control_pane_g4_copy3

0x09f2,	// (0x00042e4d) common_borders_pane_cp5

0xcca4,	// (0x0004f0ff) separator_vertical_pane_g1

0xccad,	// (0x0004f108) separator_vertical_pane_g2

0xccb6,	// (0x0004f111) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x00052082) separator_vertical_pane_g

0xcbfc,	// (0x0004f057) eswt_control_pane_g1_copy4_ParamLimits

0xcbfc,	// (0x0004f057) eswt_control_pane_g1_copy4

0xcc09,	// (0x0004f064) eswt_control_pane_g2_copy4_ParamLimits

0xcc09,	// (0x0004f064) eswt_control_pane_g2_copy4

0xcc16,	// (0x0004f071) eswt_control_pane_g3_copy4_ParamLimits

0xcc16,	// (0x0004f071) eswt_control_pane_g3_copy4

0xcc23,	// (0x0004f07e) eswt_control_pane_g4_copy4_ParamLimits

0xcc23,	// (0x0004f07e) eswt_control_pane_g4_copy4

0xccbf,	// (0x0004f11a) eswt_ctrl_combo_button_pane

0xccc7,	// (0x0004f122) eswt_ctrl_input_pane

0xcccf,	// (0x0004f12a) popup_choice_list_window_cp70

0xccd7,	// (0x0004f132) eswt_ctrl_input_pane_t1

0x09f2,	// (0x00042e4d) input_focus_pane_cp70

0xc24c,	// (0x0004e6a7) bg_button_pane_cp70_ParamLimits

0xc24c,	// (0x0004e6a7) bg_button_pane_cp70

0xcce5,	// (0x0004f140) eswt_ctrl_combo_button_pane_g1

0xcced,	// (0x0004f148) wait_bar_pane_cp70

0x9d50,	// (0x0004c1ab) bg_popup_window_pane_cp70_ParamLimits

0x9d50,	// (0x0004c1ab) bg_popup_window_pane_cp70

0xccf5,	// (0x0004f150) popup_eswt_tasktip_window_t1

0xcd0b,	// (0x0004f166) wait_bar_pane_cp71_ParamLimits

0xcd0b,	// (0x0004f166) wait_bar_pane_cp71

0xcd17,	// (0x0004f172) grid_eswt_app_pane

0x111a,	// (0x00043575) scroll_pane_cp70

0xcd20,	// (0x0004f17b) cell_eswt_app_pane_ParamLimits

0xcd20,	// (0x0004f17b) cell_eswt_app_pane

0xcd50,	// (0x0004f1ab) cell_eswt_app_pane_g1_ParamLimits

0xcd50,	// (0x0004f1ab) cell_eswt_app_pane_g1

0xcd7f,	// (0x0004f1da) cell_eswt_app_pane_g2_ParamLimits

0xcd7f,	// (0x0004f1da) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x00052089) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x00052089) cell_eswt_app_pane_g

0xcda3,	// (0x0004f1fe) cell_eswt_app_pane_t1_ParamLimits

0xcda3,	// (0x0004f1fe) cell_eswt_app_pane_t1

0xcdd5,	// (0x0004f230) grid_highlight_pane_cp70_ParamLimits

0xcdd5,	// (0x0004f230) grid_highlight_pane_cp70

0x4bac,	// (0x00047007) set_content_pane_g1

0x973c,	// (0x0004bb97) status_small_volume_pane

0x89ff,	// (0x0004ae5a) status_small_volume_pane_g1

0x8a07,	// (0x0004ae62) volume_small2_pane

0x8a10,	// (0x0004ae6b) volume_small2_pane_g1

0x8a19,	// (0x0004ae74) volume_small2_pane_g2

0x8a22,	// (0x0004ae7d) volume_small2_pane_g3

0x8a2b,	// (0x0004ae86) volume_small2_pane_g4

0x8a34,	// (0x0004ae8f) volume_small2_pane_g5

0x8a3d,	// (0x0004ae98) volume_small2_pane_g6

0x8a46,	// (0x0004aea1) volume_small2_pane_g7

0x8a4f,	// (0x0004aeaa) volume_small2_pane_g8

0x8a58,	// (0x0004aeb3) volume_small2_pane_g9

0x8a61,	// (0x0004aebc) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x0005208e) volume_small2_pane_g

0xc63f,	// (0x0004ea9a) fep_vkb_top_text_pane_g1_ParamLimits

0xc65a,	// (0x0004eab5) fep_vkb_top_text_pane_t1_ParamLimits

0xc90a,	// (0x0004ed65) popup_preview_fixed_window_g3_ParamLimits

0xc90a,	// (0x0004ed65) popup_preview_fixed_window_g3

0x7fd1,	// (0x0004a42c) popup_toolbar_trans_pane

0xb086,	// (0x0004d4e1) aid_height_set_list_ParamLimits

0xb097,	// (0x0004d4f2) aid_size_parent_ParamLimits

0x97b5,	// (0x0004bc10) list_highlight_pane_cp2_ParamLimits

0x4bac,	// (0x00047007) set_content_pane_g1_ParamLimits

0x846c,	// (0x0004a8c7) list_single_image_pane_ParamLimits

0x846c,	// (0x0004a8c7) list_single_image_pane

0xcde1,	// (0x0004f23c) aid_size_cell_image_ParamLimits

0xcde1,	// (0x0004f23c) aid_size_cell_image

0xcdee,	// (0x0004f249) grid_single_image_pane_ParamLimits

0xcdee,	// (0x0004f249) grid_single_image_pane

0xc938,	// (0x0004ed93) list_single_image_pane_g1_ParamLimits

0xc938,	// (0x0004ed93) list_single_image_pane_g1

0xc944,	// (0x0004ed9f) list_single_image_pane_g2_ParamLimits

0xc944,	// (0x0004ed9f) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x000520a3) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x000520a3) list_single_image_pane_g

0xcdfc,	// (0x0004f257) list_single_image_pane_t1_ParamLimits

0xcdfc,	// (0x0004f257) list_single_image_pane_t1

0xce12,	// (0x0004f26d) cell_image_list_pane_ParamLimits

0xce12,	// (0x0004f26d) cell_image_list_pane

0xce26,	// (0x0004f281) cell_image_list_pane_g1

0xce2f,	// (0x0004f28a) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x000520a8) cell_image_list_pane_g

0xce38,	// (0x0004f293) aid_size_cell_tb_trans_pane

0x0e14,	// (0x0004326f) bg_tb_trans_pane

0xce4a,	// (0x0004f2a5) grid_tb_trans_pane

0x9cdc,	// (0x0004c137) bg_tb_trans_pane_g1

0x9ce4,	// (0x0004c13f) bg_tb_trans_pane_g2

0x9cec,	// (0x0004c147) bg_tb_trans_pane_g3

0x9cf4,	// (0x0004c14f) bg_tb_trans_pane_g4

0x9cfc,	// (0x0004c157) bg_tb_trans_pane_g5

0x9d14,	// (0x0004c16f) bg_tb_trans_pane_g6

0x9d1c,	// (0x0004c177) bg_tb_trans_pane_g7

0x9d04,	// (0x0004c15f) bg_tb_trans_pane_g8

0x9d0c,	// (0x0004c167) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x000520ad) bg_tb_trans_pane_g

0xce5e,	// (0x0004f2b9) cell_toolbar_trans_pane_ParamLimits

0xce5e,	// (0x0004f2b9) cell_toolbar_trans_pane

0xc287,	// (0x0004e6e2) cell_toolbar_trans_pane_g1

0xbe46,	// (0x0004e2a1) list_form2_midp_pane_t1

0xbe54,	// (0x0004e2af) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00051f56) list_form2_midp_pane_t

0xbe62,	// (0x0004e2bd) scroll_pane_cp51_ParamLimits

0xc02a,	// (0x0004e485) form2_midp_wait_pane_g1

0xc033,	// (0x0004e48e) form2_midp_wait_pane_g2

0xc03c,	// (0x0004e497) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x00051f6b) form2_midp_wait_pane_g

0x0a62,	// (0x00042ebd) list_highlight_pane_cp21_ParamLimits

0xc084,	// (0x0004e4df) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc093,	// (0x0004e4ee) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x840d,	// (0x0004a868) list_single_2graphic_im_pane_ParamLimits

0x840d,	// (0x0004a868) list_single_2graphic_im_pane

0xce84,	// (0x0004f2df) list_single_2graphic_im_pane_g1_ParamLimits

0xce84,	// (0x0004f2df) list_single_2graphic_im_pane_g1

0xce95,	// (0x0004f2f0) list_single_2graphic_im_pane_g2_ParamLimits

0xce95,	// (0x0004f2f0) list_single_2graphic_im_pane_g2

0xcea1,	// (0x0004f2fc) list_single_2graphic_im_pane_g3_ParamLimits

0xcea1,	// (0x0004f2fc) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x000520c0) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x000520c0) list_single_2graphic_im_pane_g

0xcec1,	// (0x0004f31c) list_single_2graphic_im_pane_t1_ParamLimits

0xcec1,	// (0x0004f31c) list_single_2graphic_im_pane_t1

0xc916,	// (0x0004ed71) list_single_graphic_2heading_pane_fp_ParamLimits

0xc916,	// (0x0004ed71) list_single_graphic_2heading_pane_fp

0x622e,	// (0x00048689) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x622e,	// (0x00048689) list_single_graphic_2heading_pane_fp_g1

0xc92c,	// (0x0004ed87) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x0004ed87) list_single_graphic_2heading_pane_fp_g2

0xc938,	// (0x0004ed93) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc938,	// (0x0004ed93) list_single_graphic_2heading_pane_fp_g3

0xc944,	// (0x0004ed9f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc944,	// (0x0004ed9f) list_single_graphic_2heading_pane_fp_g4

0xc958,	// (0x0004edb3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc958,	// (0x0004edb3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00051fee) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00051fee) list_single_graphic_2heading_pane_fp_g

0x638b,	// (0x000487e6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x638b,	// (0x000487e6) list_single_graphic_2heading_pane_fp_t1

0x6266,	// (0x000486c1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6266,	// (0x000486c1) list_single_graphic_2heading_pane_fp_t2

0x63a1,	// (0x000487fc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x63a1,	// (0x000487fc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x000520c9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x000520c9) list_single_graphic_2heading_pane_fp_t

0xc313,	// (0x0004e76e) fep_hwr_write_pane_g5_ParamLimits

0xc313,	// (0x0004e76e) fep_hwr_write_pane_g5

0xc31f,	// (0x0004e77a) fep_hwr_write_pane_g6_ParamLimits

0xc31f,	// (0x0004e77a) fep_hwr_write_pane_g6

0xcbcb,	// (0x0004f026) eswt_shell_pane_ParamLimits

0x9d50,	// (0x0004c1ab) bg_popup_window_pane_cp18_ParamLimits

0xafdf,	// (0x0004d43a) heading_pane_cp70

0xccf5,	// (0x0004f150) popup_eswt_tasktip_window_t1_ParamLimits

0x9846,	// (0x0004bca1) aid_touch_tab_arrow_left

0x9855,	// (0x0004bcb0) aid_touch_tab_arrow_right

0x68d9,	// (0x00048d34) title_pane_g3_ParamLimits

0x68d9,	// (0x00048d34) title_pane_g3

0x0ddc,	// (0x00043237) set_value_pane_g1

0x7fd1,	// (0x0004a42c) popup_toolbar_trans_pane_ParamLimits

0xce38,	// (0x0004f293) aid_size_cell_tb_trans_pane_ParamLimits

0x0e14,	// (0x0004326f) bg_tb_trans_pane_ParamLimits

0xce4a,	// (0x0004f2a5) grid_tb_trans_pane_ParamLimits

0x0b8c,	// (0x00042fe7) cont_note_pane_ParamLimits

0x0b8c,	// (0x00042fe7) cont_note_pane

0x0d08,	// (0x00043163) cont_snote2_single_text_pane_ParamLimits

0x0d08,	// (0x00043163) cont_snote2_single_text_pane

0x0d08,	// (0x00043163) cont_snote2_single_graphic_pane_ParamLimits

0x0d08,	// (0x00043163) cont_snote2_single_graphic_pane

0xa362,	// (0x0004c7bd) cont_note_wait_pane_ParamLimits

0xa362,	// (0x0004c7bd) cont_note_wait_pane

0xa362,	// (0x0004c7bd) cont_note_image_pane_ParamLimits

0xa362,	// (0x0004c7bd) cont_note_image_pane

0xcef2,	// (0x0004f34d) popup_note2_window_g1_ParamLimits

0xcef2,	// (0x0004f34d) popup_note2_window_g1

0xcf23,	// (0x0004f37e) popup_note2_window_t1_ParamLimits

0xcf23,	// (0x0004f37e) popup_note2_window_t1

0xcf68,	// (0x0004f3c3) popup_note2_window_t2_ParamLimits

0xcf68,	// (0x0004f3c3) popup_note2_window_t2

0xcfad,	// (0x0004f408) popup_note2_window_t3_ParamLimits

0xcfad,	// (0x0004f408) popup_note2_window_t3

0xcff2,	// (0x0004f44d) popup_note2_window_t4_ParamLimits

0xcff2,	// (0x0004f44d) popup_note2_window_t4

0x0c10,	// (0x0004306b) popup_note2_window_t5_ParamLimits

0x0c10,	// (0x0004306b) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x000520d5) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x000520d5) popup_note2_window_t

0xd021,	// (0x0004f47c) popup_note2_image_window_g1_ParamLimits

0xd021,	// (0x0004f47c) popup_note2_image_window_g1

0xd02d,	// (0x0004f488) popup_note2_image_window_g2_ParamLimits

0xd02d,	// (0x0004f488) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x000520e0) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x000520e0) popup_note2_image_window_g

0xd03f,	// (0x0004f49a) popup_note2_image_window_t1_ParamLimits

0xd03f,	// (0x0004f49a) popup_note2_image_window_t1

0xd057,	// (0x0004f4b2) popup_note2_image_window_t2_ParamLimits

0xd057,	// (0x0004f4b2) popup_note2_image_window_t2

0xd06f,	// (0x0004f4ca) popup_note2_image_window_t3_ParamLimits

0xd06f,	// (0x0004f4ca) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x000520e5) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x000520e5) popup_note2_image_window_t

0xa370,	// (0x0004c7cb) popup_note2_wait_window_g1_ParamLimits

0xa370,	// (0x0004c7cb) popup_note2_wait_window_g1

0xa37c,	// (0x0004c7d7) popup_note2_wait_window_g2_ParamLimits

0xa37c,	// (0x0004c7d7) popup_note2_wait_window_g2

0xa388,	// (0x0004c7e3) popup_note2_wait_window_g3_ParamLimits

0xa388,	// (0x0004c7e3) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x00051c9e) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x00051c9e) popup_note2_wait_window_g

0xd08b,	// (0x0004f4e6) popup_note2_wait_window_t1_ParamLimits

0xd08b,	// (0x0004f4e6) popup_note2_wait_window_t1

0xd0a9,	// (0x0004f504) popup_note2_wait_window_t2_ParamLimits

0xd0a9,	// (0x0004f504) popup_note2_wait_window_t2

0xd0c7,	// (0x0004f522) popup_note2_wait_window_t3_ParamLimits

0xd0c7,	// (0x0004f522) popup_note2_wait_window_t3

0xd0d9,	// (0x0004f534) popup_note2_wait_window_t4_ParamLimits

0xd0d9,	// (0x0004f534) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x000520ec) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x000520ec) popup_note2_wait_window_t

0xd0eb,	// (0x0004f546) wait_bar2_pane_ParamLimits

0xd0eb,	// (0x0004f546) wait_bar2_pane

0xd103,	// (0x0004f55e) popup_snote2_single_text_window_g1_ParamLimits

0xd103,	// (0x0004f55e) popup_snote2_single_text_window_g1

0xd12b,	// (0x0004f586) popup_snote2_single_text_window_t1_ParamLimits

0xd12b,	// (0x0004f586) popup_snote2_single_text_window_t1

0xd177,	// (0x0004f5d2) popup_snote2_single_text_window_t2_ParamLimits

0xd177,	// (0x0004f5d2) popup_snote2_single_text_window_t2

0xd1c3,	// (0x0004f61e) popup_snote2_single_text_window_t3_ParamLimits

0xd1c3,	// (0x0004f61e) popup_snote2_single_text_window_t3

0xd204,	// (0x0004f65f) popup_snote2_single_text_window_t4_ParamLimits

0xd204,	// (0x0004f65f) popup_snote2_single_text_window_t4

0xd23a,	// (0x0004f695) popup_snote2_single_text_window_t5_ParamLimits

0xd23a,	// (0x0004f695) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x000520f5) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x000520f5) popup_snote2_single_text_window_t

0xd265,	// (0x0004f6c0) popup_snote2_single_graphic_window_g1_ParamLimits

0xd265,	// (0x0004f6c0) popup_snote2_single_graphic_window_g1

0xd28d,	// (0x0004f6e8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd28d,	// (0x0004f6e8) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x00052100) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x00052100) popup_snote2_single_graphic_window_g

0xd2b5,	// (0x0004f710) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2b5,	// (0x0004f710) popup_snote2_single_graphic_window_t1

0xd301,	// (0x0004f75c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd301,	// (0x0004f75c) popup_snote2_single_graphic_window_t2

0xd1c3,	// (0x0004f61e) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1c3,	// (0x0004f61e) popup_snote2_single_graphic_window_t3

0xd204,	// (0x0004f65f) popup_snote2_single_graphic_window_t4_ParamLimits

0xd204,	// (0x0004f65f) popup_snote2_single_graphic_window_t4

0xd23a,	// (0x0004f695) popup_snote2_single_graphic_window_t5_ParamLimits

0xd23a,	// (0x0004f695) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x00052105) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x00052105) popup_snote2_single_graphic_window_t

0xbd1f,	// (0x0004e17a) clock_nsta_pane_cp2_t1

0xbd1f,	// (0x0004e17a) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00051f2c) clock_nsta_pane_cp2_t

0x5b48,	// (0x00047fa3) form_field_data_wide_pane_g1_ParamLimits

0x0e22,	// (0x0004327d) form_field_data_wide_pane_g2_ParamLimits

0x0e22,	// (0x0004327d) form_field_data_wide_pane_g2

0x0e2e,	// (0x00043289) form_field_data_wide_pane_g3_ParamLimits

0x0e2e,	// (0x00043289) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00051ad1) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00051ad1) form_field_data_wide_pane_g

0xbc21,	// (0x0004e07c) grid_touch_3_pane_ParamLimits

0xbc21,	// (0x0004e07c) grid_touch_3_pane

0xd34d,	// (0x0004f7a8) cell_touch_3_pane_ParamLimits

0xd34d,	// (0x0004f7a8) cell_touch_3_pane

0xc287,	// (0x0004e6e2) cell_touch_3_pane_g1

0xc287,	// (0x0004e6e2) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x00051fb1) cell_touch_3_pane_g

0x0c42,	// (0x0004309d) cont_query_data_pane

0x0c4a,	// (0x000430a5) cont_query_data_pane_cp1

0xd37b,	// (0x0004f7d6) button_value_adjust_pane_cp7

0xd383,	// (0x0004f7de) query_popup_pane_cp3

0x12a8,	// (0x00043703) bg_popup_sub_pane_cp22_ParamLimits

0x744b,	// (0x000498a6) navi_navi_volume_pane_cp2

0x7463,	// (0x000498be) popup_side_volume_key_window_g2

0x746f,	// (0x000498ca) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00051b67) popup_side_volume_key_window_g

0x7489,	// (0x000498e4) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00051b6e) popup_side_volume_key_window_t

0x76b9,	// (0x00049b14) popup_side_volume_key_window_ParamLimits

0x5800,	// (0x00047c5b) list_double_graphic_pane_g4_ParamLimits

0x5800,	// (0x00047c5b) list_double_graphic_pane_g4

0x844c,	// (0x0004a8a7) list_single_2heading_msg_pane_ParamLimits

0x844c,	// (0x0004a8a7) list_single_2heading_msg_pane

0x8a6a,	// (0x0004aec5) list_single_2heading_msg_pane_g1_ParamLimits

0x8a6a,	// (0x0004aec5) list_single_2heading_msg_pane_g1

0x6ea2,	// (0x000492fd) list_single_2heading_msg_pane_g2_ParamLimits

0x6ea2,	// (0x000492fd) list_single_2heading_msg_pane_g2

0x8a76,	// (0x0004aed1) list_single_2heading_msg_pane_g3_ParamLimits

0x8a76,	// (0x0004aed1) list_single_2heading_msg_pane_g3

0x8a82,	// (0x0004aedd) list_single_2heading_msg_pane_g4_ParamLimits

0x8a82,	// (0x0004aedd) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x00052110) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x00052110) list_single_2heading_msg_pane_g

0x63c1,	// (0x0004881c) list_single_2heading_msg_pane_t1_ParamLimits

0x63c1,	// (0x0004881c) list_single_2heading_msg_pane_t1

0x63e9,	// (0x00048844) list_single_2heading_msg_pane_t2_ParamLimits

0x63e9,	// (0x00048844) list_single_2heading_msg_pane_t2

0x6418,	// (0x00048873) list_single_2heading_msg_pane_t3_ParamLimits

0x6418,	// (0x00048873) list_single_2heading_msg_pane_t3

0x6451,	// (0x000488ac) list_single_2heading_msg_pane_t4_ParamLimits

0x6451,	// (0x000488ac) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x00052119) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x00052119) list_single_2heading_msg_pane_t

0x0a10,	// (0x00042e6b) title_pane_g4_ParamLimits

0x0a10,	// (0x00042e6b) title_pane_g4

0x70a4,	// (0x000494ff) title_pane_stacon_g3_ParamLimits

0x70a4,	// (0x000494ff) title_pane_stacon_g3

0xceb5,	// (0x0004f310) list_single_2graphic_im_pane_g4_ParamLimits

0xceb5,	// (0x0004f310) list_single_2graphic_im_pane_g4

0xada9,	// (0x0004d204) popup_side_volume_key_window_cp

0xb57c,	// (0x0004d9d7) main_idle_act2_pane_t1

0x80c3,	// (0x0004a51e) toolbar_button_pane_g10

0x6e98,	// (0x000492f3) popup_toolbar_window_cp1

0xbd10,	// (0x0004e16b) clock_nsta_pane_cp_t1

0xbd10,	// (0x0004e16b) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00051f27) clock_nsta_pane_cp_t

0x744b,	// (0x000498a6) navi_navi_volume_pane_cp2_ParamLimits

0x7457,	// (0x000498b2) popup_side_volume_key_window_g1_ParamLimits

0x7463,	// (0x000498be) popup_side_volume_key_window_g2_ParamLimits

0x746f,	// (0x000498ca) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00051b67) popup_side_volume_key_window_g_ParamLimits

0x869f,	// (0x0004aafa) fep_hwr_aid_pane

0x2a65,	// (0x00044ec0) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2e3,	// (0x0004e73e) fep_hwr_top_pane_g1_ParamLimits

0xc2f5,	// (0x0004e750) fep_hwr_top_pane_g2_ParamLimits

0x8758,	// (0x0004abb3) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x00051f7c) fep_hwr_top_pane_g_ParamLimits

0x876d,	// (0x0004abc8) fep_hwr_top_text_pane_ParamLimits

0xab6c,	// (0x0004cfc7) aid_touch_tab_arrow_arrow_2

0xab75,	// (0x0004cfd0) aid_touch_tab_arrow_left_2

0x86b3,	// (0x0004ab0e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x86ea,	// (0x0004ab45) fep_hwr_prediction_pane

0xc44e,	// (0x0004e8a9) fep_vkb_prediction_pane

0xc54b,	// (0x0004e9a6) fep_vkb_side_pane_g3_ParamLimits

0xc54b,	// (0x0004e9a6) fep_vkb_side_pane_g3

0xc4f7,	// (0x0004e952) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9ac,	// (0x0004ee07) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9b9,	// (0x0004ee14) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x00052026) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3a8,	// (0x0004f803) fep_hwr_prediction_pane_g1

0x8a9a,	// (0x0004aef5) fep_hwr_prediction_pane_g2

0x8aa2,	// (0x0004aefd) fep_hwr_prediction_pane_g3

0x8aaa,	// (0x0004af05) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00052122) fep_hwr_prediction_pane_g

0xd3a8,	// (0x0004f803) fep_vkb_prediction_pane_g1

0xd3b2,	// (0x0004f80d) fep_vkb_prediction_pane_g2

0xd3ba,	// (0x0004f815) fep_vkb_prediction_pane_g3

0xd3c2,	// (0x0004f81d) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0005212b) fep_vkb_prediction_pane_g

0x83b5,	// (0x0004a810) slider_set_pane_g3

0x83c9,	// (0x0004a824) slider_set_pane_g4

0x83e1,	// (0x0004a83c) slider_set_pane_g5

0x83b5,	// (0x0004a810) slider_set_pane_g6

0x83f7,	// (0x0004a852) slider_set_pane_g7

0xb1f8,	// (0x0004d653) slider_form_pane_g3

0xb201,	// (0x0004d65c) slider_form_pane_g4

0xb209,	// (0x0004d664) slider_form_pane_g5

0xb1f8,	// (0x0004d653) slider_form_pane_g6

0xb211,	// (0x0004d66c) slider_form_pane_g7

0xb827,	// (0x0004dc82) slider_set_pane_vc_g3

0xb830,	// (0x0004dc8b) slider_set_pane_vc_g4

0xb839,	// (0x0004dc94) slider_set_pane_vc_g5

0xb827,	// (0x0004dc82) slider_set_pane_vc_g6

0xb842,	// (0x0004dc9d) slider_set_pane_vc_g7

0xb9f4,	// (0x0004de4f) slider_form_pane_vc_g1

0xb9fd,	// (0x0004de58) slider_form_pane_vc_g2

0xba06,	// (0x0004de61) slider_form_pane_vc_g3

0xb9f4,	// (0x0004de4f) slider_form_pane_vc_g4

0xba0f,	// (0x0004de6a) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x00051ef9) slider_form_pane_vc_g

0x09f2,	// (0x00042e4d) main_idle_act3_pane

0xd3ca,	// (0x0004f825) ai3_links_pane

0xd3d3,	// (0x0004f82e) popup_ai3_data_window_ParamLimits

0xd3d3,	// (0x0004f82e) popup_ai3_data_window

0x09f2,	// (0x00042e4d) grid_ai3_links_pane

0xd3eb,	// (0x0004f846) cell_ai3_links_pane_ParamLimits

0xd3eb,	// (0x0004f846) cell_ai3_links_pane

0xd403,	// (0x0004f85e) bg_popup_sub_pane_cp11

0xd410,	// (0x0004f86b) cell_ai3_links_pane_g1

0x09f2,	// (0x00042e4d) bg_popup_sub_pane_cp12

0xd435,	// (0x0004f890) heading_ai3_data_pane

0xd43d,	// (0x0004f898) list_ai3_gene_pane

0xd449,	// (0x0004f8a4) popup_ai3_data_window_g1

0xd451,	// (0x0004f8ac) heading_ai3_data_pane_g1

0xd459,	// (0x0004f8b4) heading_ai3_data_pane_t1

0xd467,	// (0x0004f8c2) list_double_ai3_gene_pane_ParamLimits

0xd467,	// (0x0004f8c2) list_double_ai3_gene_pane

0xd474,	// (0x0004f8cf) list_single_ai3_gene_pane_ParamLimits

0xd474,	// (0x0004f8cf) list_single_ai3_gene_pane

0xc24c,	// (0x0004e6a7) list_highlight_pane_cp7_ParamLimits

0xc24c,	// (0x0004e6a7) list_highlight_pane_cp7

0xd481,	// (0x0004f8dc) list_single_a13_gene_pane_t1_ParamLimits

0xd481,	// (0x0004f8dc) list_single_a13_gene_pane_t1

0xd498,	// (0x0004f8f3) list_single_ai3_gene_pane_g1

0xd4a1,	// (0x0004f8fc) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x00052134) list_single_ai3_gene_pane_g

0xd4a9,	// (0x0004f904) list_double_ai3_gene_pane_g1_ParamLimits

0xd4a9,	// (0x0004f904) list_double_ai3_gene_pane_g1

0xd4b5,	// (0x0004f910) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b5,	// (0x0004f910) list_double_ai3_gene_pane_t1

0xd4d1,	// (0x0004f92c) list_double_ai3_gene_pane_t2_ParamLimits

0xd4d1,	// (0x0004f92c) list_double_ai3_gene_pane_t2

0xd4e6,	// (0x0004f941) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e6,	// (0x0004f941) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x00052139) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x00052139) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x63b7,	// (0x00048812) aid_size_min_col_2

0xd394,	// (0x0004f7ef) aid_size_min_msg_ParamLimits

0xd394,	// (0x0004f7ef) aid_size_min_msg

0xc64b,	// (0x0004eaa6) fep_vkb_top_text_pane_g2_ParamLimits

0xc64b,	// (0x0004eaa6) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x00051fac) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x00051fac) fep_vkb_top_text_pane_g

0x09f2,	// (0x00042e4d) main_hc_apps_shell_pane

0xd503,	// (0x0004f95e) grid_hc_apps_pane_ParamLimits

0xd503,	// (0x0004f95e) grid_hc_apps_pane

0xd512,	// (0x0004f96d) list_hc_apps_pane

0xd51a,	// (0x0004f975) scroll_pane_cp37_ParamLimits

0xd51a,	// (0x0004f975) scroll_pane_cp37

0xd526,	// (0x0004f981) cell_hc_apps_pane_ParamLimits

0xd526,	// (0x0004f981) cell_hc_apps_pane

0xd5d4,	// (0x0004fa2f) cell_hc_apps_pane_g1_ParamLimits

0xd5d4,	// (0x0004fa2f) cell_hc_apps_pane_g1

0xd605,	// (0x0004fa60) cell_hc_apps_pane_g2_ParamLimits

0xd605,	// (0x0004fa60) cell_hc_apps_pane_g2

0xd621,	// (0x0004fa7c) cell_hc_apps_pane_g3_ParamLimits

0xd621,	// (0x0004fa7c) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x00052140) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x00052140) cell_hc_apps_pane_g

0xd643,	// (0x0004fa9e) cell_hc_apps_pane_t1_ParamLimits

0xd643,	// (0x0004fa9e) cell_hc_apps_pane_t1

0x0b8c,	// (0x00042fe7) grid_highlight_pane_cp10_ParamLimits

0x0b8c,	// (0x00042fe7) grid_highlight_pane_cp10

0xd683,	// (0x0004fade) list_single_hc_apps_pane_ParamLimits

0xd683,	// (0x0004fade) list_single_hc_apps_pane

0xd6e6,	// (0x0004fb41) list_single_hc_apps_pane_g1

0x8ab2,	// (0x0004af0d) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x00052147) list_single_hc_apps_pane_g

0x8acb,	// (0x0004af26) list_single_hc_apps_pane_g2_copy1

0x6476,	// (0x000488d1) list_single_hc_apps_pane_t1

0x0a62,	// (0x00042ebd) bg_set_opt_pane_cp_ParamLimits

0x6989,	// (0x00048de4) setting_slider_pane_t1_ParamLimits

0x69a2,	// (0x00048dfd) setting_slider_pane_t2_ParamLimits

0x69bc,	// (0x00048e17) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000519b9) setting_slider_pane_t_ParamLimits

0x69d4,	// (0x00048e2f) slider_set_pane_ParamLimits

0x79c8,	// (0x00049e23) control_pane_g5_ParamLimits

0x79c8,	// (0x00049e23) control_pane_g5

0xb04b,	// (0x0004d4a6) slider_set_pane_g1_ParamLimits

0x83a9,	// (0x0004a804) slider_set_pane_g2_ParamLimits

0x83b5,	// (0x0004a810) slider_set_pane_g3_ParamLimits

0x83c9,	// (0x0004a824) slider_set_pane_g4_ParamLimits

0x83e1,	// (0x0004a83c) slider_set_pane_g5_ParamLimits

0x83b5,	// (0x0004a810) slider_set_pane_g6_ParamLimits

0x83f7,	// (0x0004a852) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00051dba) slider_set_pane_g_ParamLimits

0x4b57,	// (0x00046fb2) navi_icon_text_pane_ParamLimits

0x9807,	// (0x0004bc62) aid_fill_nsta_2_ParamLimits

0x9846,	// (0x0004bca1) aid_touch_tab_arrow_left_ParamLimits

0x9855,	// (0x0004bcb0) aid_touch_tab_arrow_right_ParamLimits

0x98c2,	// (0x0004bd1d) clock_nsta_pane_ParamLimits

0xab4e,	// (0x0004cfa9) navi_icon_pane_g1_ParamLimits

0xab5a,	// (0x0004cfb5) navi_text_pane_t1_ParamLimits

0xbe20,	// (0x0004e27b) navi_icon_text_pane_g1_ParamLimits

0xbe2c,	// (0x0004e287) navi_icon_text_pane_t1_ParamLimits

0xd6e6,	// (0x0004fb41) list_single_hc_apps_pane_g1_ParamLimits

0x8ab2,	// (0x0004af0d) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x00052147) list_single_hc_apps_pane_g_ParamLimits

0x8acb,	// (0x0004af26) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6476,	// (0x000488d1) list_single_hc_apps_pane_t1_ParamLimits

0x67cd,	// (0x00048c28) popup_toolbar2_fixed_window_ParamLimits

0x67cd,	// (0x00048c28) popup_toolbar2_fixed_window

0x7fc7,	// (0x0004a422) popup_toolbar2_float_window

0x09f2,	// (0x00042e4d) bg_popup_sub_pane_cp27

0xd6ff,	// (0x0004fb5a) grid_toolbar2_float_pane

0x09f2,	// (0x00042e4d) bg_popup_sub_pane_cp26

0xd6ff,	// (0x0004fb5a) grid_toolbar2_fixed_pane

0xd707,	// (0x0004fb62) cell_toolbar2_fixed_pane_ParamLimits

0xd707,	// (0x0004fb62) cell_toolbar2_fixed_pane

0xd717,	// (0x0004fb72) cell_toolbar2_fixed_pane_g1

0x9c5c,	// (0x0004c0b7) toolbar2_fixed_button_pane

0x9cdc,	// (0x0004c137) toolbar2_fixed_button_pane_g1

0x9ce4,	// (0x0004c13f) toolbar2_fixed_button_pane_g2

0x9cec,	// (0x0004c147) toolbar2_fixed_button_pane_g3

0x9cf4,	// (0x0004c14f) toolbar2_fixed_button_pane_g4

0x9cfc,	// (0x0004c157) toolbar2_fixed_button_pane_g5

0x9d04,	// (0x0004c15f) toolbar2_fixed_button_pane_g6

0x9d0c,	// (0x0004c167) toolbar2_fixed_button_pane_g7

0x9d14,	// (0x0004c16f) toolbar2_fixed_button_pane_g8

0x9d1c,	// (0x0004c177) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00051cbc) toolbar2_fixed_button_pane_g

0xd720,	// (0x0004fb7b) cell_toolbar2_float_pane_ParamLimits

0xd720,	// (0x0004fb7b) cell_toolbar2_float_pane

0xd731,	// (0x0004fb8c) cell_toolbar2_float_pane_g1

0x9c5c,	// (0x0004c0b7) toolbar2_fixed_button_pane_cp

0xc3b5,	// (0x0004e810) fep_vkb_accented_list_pane_ParamLimits

0xc3b5,	// (0x0004e810) fep_vkb_accented_list_pane

0x88bb,	// (0x0004ad16) bg_popup_fep_shadow_pane_g9

0x4ca9,	// (0x00047104) bg_popup_fep_shadow_pane_cp3

0x0f1a,	// (0x00043375) list_accented_list_pane

0xd73a,	// (0x0004fb95) list_single_accented_list_pane_ParamLimits

0xd73a,	// (0x0004fb95) list_single_accented_list_pane

0x4ca9,	// (0x00047104) list_highlight_pane_cp10

0xd74b,	// (0x0004fba6) list_single_accented_list_pane_t1

0x7f17,	// (0x0004a372) popup_slider_window_ParamLimits

0x7f17,	// (0x0004a372) popup_slider_window

0xd38b,	// (0x0004f7e6) aid_indentation_list_msg

0xd809,	// (0x0004fc64) bg_popup_window_pane_cp19

0xd871,	// (0x0004fccc) popup_slider_window_g1

0xd88d,	// (0x0004fce8) popup_slider_window_g2

0xd8a9,	// (0x0004fd04) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0005214c) popup_slider_window_g

0xd90f,	// (0x0004fd6a) popup_slider_window_t1

0xd983,	// (0x0004fdde) small_volume_slider_vertical_pane

0xc287,	// (0x0004e6e2) small_volume_slider_vertical_pane_g1

0xc287,	// (0x0004e6e2) small_volume_slider_vertical_pane_g2

0xd99f,	// (0x0004fdfa) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0005215e) small_volume_slider_vertical_pane_g

0x659d,	// (0x000489f8) area_side_right_pane_ParamLimits

0x659d,	// (0x000489f8) area_side_right_pane

0x8ae7,	// (0x0004af42) aid_size_side_button_ParamLimits

0x8ae7,	// (0x0004af42) aid_size_side_button

0x8afb,	// (0x0004af56) grid_sctrl_middle_pane_ParamLimits

0x8afb,	// (0x0004af56) grid_sctrl_middle_pane

0x8b1a,	// (0x0004af75) sctrl_sk_bottom_pane

0x8b2b,	// (0x0004af86) sctrl_sk_top_pane

0x8b3d,	// (0x0004af98) aid_touch_sctrl_top

0x0b8c,	// (0x00042fe7) bg_sctrl_sk_pane_ParamLimits

0x0b8c,	// (0x00042fe7) bg_sctrl_sk_pane

0x8b4a,	// (0x0004afa5) sctrl_sk_top_pane_g1

0x8b57,	// (0x0004afb2) sctrl_sk_top_pane_t1

0x8b3d,	// (0x0004af98) aid_touch_sctrl_bottom

0x0b8c,	// (0x00042fe7) bg_sctrl_sk_pane_cp_ParamLimits

0x0b8c,	// (0x00042fe7) bg_sctrl_sk_pane_cp

0x8b72,	// (0x0004afcd) sctrl_sk_bottom_pane_g1

0x8b57,	// (0x0004afb2) sctrl_sk_bottom_pane_t1

0x8b7b,	// (0x0004afd6) cell_sctrl_middle_pane_ParamLimits

0x8b7b,	// (0x0004afd6) cell_sctrl_middle_pane

0x8b96,	// (0x0004aff1) aid_touch_sctrl_middle_ParamLimits

0x8b96,	// (0x0004aff1) aid_touch_sctrl_middle

0x0e14,	// (0x0004326f) bg_sctrl_middle_pane_ParamLimits

0x0e14,	// (0x0004326f) bg_sctrl_middle_pane

0xc4f7,	// (0x0004e952) cell_sctrl_middle_pane_g1_ParamLimits

0xc4f7,	// (0x0004e952) cell_sctrl_middle_pane_g1

0x8ba8,	// (0x0004b003) cell_sctrl_middle_pane_g2_ParamLimits

0x8ba8,	// (0x0004b003) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0005216a) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0005216a) cell_sctrl_middle_pane_g

0x9cdc,	// (0x0004c137) bg_sctrl_middle_pane_g1

0x9ce4,	// (0x0004c13f) bg_sctrl_middle_pane_g2

0x9cec,	// (0x0004c147) bg_sctrl_middle_pane_g3

0x9cf4,	// (0x0004c14f) bg_sctrl_middle_pane_g4

0x9cfc,	// (0x0004c157) bg_sctrl_middle_pane_g5

0x9d04,	// (0x0004c15f) bg_sctrl_middle_pane_g6

0x9d0c,	// (0x0004c167) bg_sctrl_middle_pane_g7

0x9d14,	// (0x0004c16f) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0005216f) bg_sctrl_middle_pane_g

0x9d1c,	// (0x0004c177) bg_sctrl_middle_pane_g8_copy1

0x9cdc,	// (0x0004c137) bg_sctrl_sk_pane_g1

0x9ce4,	// (0x0004c13f) bg_sctrl_sk_pane_g2

0x9cec,	// (0x0004c147) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00051cbc) bg_sctrl_sk_pane_g

0x0d56,	// (0x000431b1) aid_size_touch_scroll_bar

0x9cf4,	// (0x0004c14f) bg_sctrl_sk_pane_g4

0x9cfc,	// (0x0004c157) bg_sctrl_sk_pane_g5

0x9d04,	// (0x0004c15f) bg_sctrl_sk_pane_g6

0x9d0c,	// (0x0004c167) bg_sctrl_sk_pane_g7

0x9d14,	// (0x0004c16f) bg_sctrl_sk_pane_g8

0x9d1c,	// (0x0004c177) bg_sctrl_sk_pane_g9

0x7b80,	// (0x00049fdb) popup_fep_china_hwr2_fs_candidate_window

0x7b8a,	// (0x00049fe5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7b8a,	// (0x00049fe5) popup_fep_china_hwr2_fs_control_window

0xc4f7,	// (0x0004e952) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x00052165) sctrl_sk_top_pane_g

0xd9a8,	// (0x0004fe03) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9a8,	// (0x0004fe03) aid_fep_china_hwr2_fs_cell

0xd9ba,	// (0x0004fe15) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9ba,	// (0x0004fe15) bg_popup_fep_shadow_pane_cp4

0xd9d1,	// (0x0004fe2c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9d1,	// (0x0004fe2c) bg_popup_fep_shadow_pane_cp5

0xd9e3,	// (0x0004fe3e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9e3,	// (0x0004fe3e) popup_fep_china_hwr2_fs_control_bar_grid

0xd9f3,	// (0x0004fe4e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9fb,	// (0x0004fe56) aid_fep_china_hwr2_fs_candi_cell

0x09f2,	// (0x00042e4d) bg_popup_fep_shadow_pane_cp6

0xda05,	// (0x0004fe60) popup_fep_china_hwr2_fs_candidate_grid

0xda0f,	// (0x0004fe6a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda0f,	// (0x0004fe6a) cell_fep_china_hwr2_fs_funtion_grid

0xc287,	// (0x0004e6e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda27,	// (0x0004fe82) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda27,	// (0x0004fe82) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda35,	// (0x0004fe90) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda35,	// (0x0004fe90) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x00052180) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x00052180) cell_fep_china_hwr2_fs_funtion_grid_g

0xda4b,	// (0x0004fea6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda4b,	// (0x0004fea6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda60,	// (0x0004febb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda60,	// (0x0004febb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x00052185) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x00052185) cell_fep_china_hwr2_fs_funtion_grid_t

0xda7c,	// (0x0004fed7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda84,	// (0x0004fedf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda8c,	// (0x0004fee7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0005218a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda94,	// (0x0004feef) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda94,	// (0x0004feef) cell_fep_china_hwr2_fs_candidate_grid

0xdaad,	// (0x0004ff08) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab5,	// (0x0004ff10) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc287,	// (0x0004e6e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc287,	// (0x0004e6e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x00051fb1) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabd,	// (0x0004ff18) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98d5,	// (0x0004bd30) clock_nsta_pane_cp_24_ParamLimits

0x98d5,	// (0x0004bd30) clock_nsta_pane_cp_24

0x9953,	// (0x0004bdae) indicator_nsta_pane_cp_24_ParamLimits

0x9953,	// (0x0004bdae) indicator_nsta_pane_cp_24

0xa9ca,	// (0x0004ce25) heading_pane_g1

0x0001,

0xf8c6,	// (0x00051d21) heading_pane_g

0xb3c5,	// (0x0004d820) grid_sct_catagory_button_pane

0xb3f5,	// (0x0004d850) scroll_pane_cp5_ParamLimits

0xbe6e,	// (0x0004e2c9) button_value_adjust_pane_cp5_ParamLimits

0xbe6e,	// (0x0004e2c9) button_value_adjust_pane_cp5

0xbf4d,	// (0x0004e3a8) form2_midp_time_pane_ParamLimits

0xdacb,	// (0x0004ff26) cell_sct_catagory_button_pane_ParamLimits

0xdacb,	// (0x0004ff26) cell_sct_catagory_button_pane

0xc24c,	// (0x0004e6a7) bg_button_pane_cp01_ParamLimits

0xc24c,	// (0x0004e6a7) bg_button_pane_cp01

0xc287,	// (0x0004e6e2) cell_sct_catagory_button_pane_g1

0x7f56,	// (0x0004a3b1) popup_tb_extension_window

0xdadd,	// (0x0004ff38) aid_size_cell_ext_ParamLimits

0xdadd,	// (0x0004ff38) aid_size_cell_ext

0x0b8c,	// (0x00042fe7) bg_tb_trans_pane_cp1_ParamLimits

0x0b8c,	// (0x00042fe7) bg_tb_trans_pane_cp1

0xdafd,	// (0x0004ff58) grid_tb_ext_pane_ParamLimits

0xdafd,	// (0x0004ff58) grid_tb_ext_pane

0xdb2d,	// (0x0004ff88) cell_tb_ext_pane_ParamLimits

0xdb2d,	// (0x0004ff88) cell_tb_ext_pane

0xdb44,	// (0x0004ff9f) cell_tb_ext_pane_g1_ParamLimits

0xdb44,	// (0x0004ff9f) cell_tb_ext_pane_g1

0xdb61,	// (0x0004ffbc) cell_tb_ext_pane_t1

0x0b8c,	// (0x00042fe7) list_highlight_pane_cp11_ParamLimits

0x0b8c,	// (0x00042fe7) list_highlight_pane_cp11

0x67ec,	// (0x00048c47) popup_uni_indicator_window_ParamLimits

0x67ec,	// (0x00048c47) popup_uni_indicator_window

0x0e14,	// (0x0004326f) bg_popup_sub_pane_cp14

0xdb7d,	// (0x0004ffd8) list_uniindi_pane

0xdb89,	// (0x0004ffe4) uniindi_top_pane

0x0b8c,	// (0x00042fe7) bg_uniindi_top_pane

0xdba8,	// (0x00050003) uniindi_top_pane_g1

0xdbbe,	// (0x00050019) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x00052191) uniindi_top_pane_g

0xdbe8,	// (0x00050043) uniindi_top_pane_t1

0xdc12,	// (0x0005006d) list_single_uniindi_pane_ParamLimits

0xdc12,	// (0x0005006d) list_single_uniindi_pane

0xc287,	// (0x0004e6e2) bg_uniindi_top_pane_g1

0xdc24,	// (0x0005007f) list_single_uniindi_pane_g1

0xdc37,	// (0x00050092) list_single_uniindi_pane_t1

0x09f2,	// (0x00042e4d) control_bg_pane

0xdc5c,	// (0x000500b7) bg_sctrl_sk_pane_cp1

0xdc65,	// (0x000500c0) bg_sctrl_sk_pane_cp2

0xdc6e,	// (0x000500c9) control_bg_pane_g1

0xdc77,	// (0x000500d2) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0005219a) control_bg_pane_g

0xbcc4,	// (0x0004e11f) cell_indicator_nsta_pane_g1_ParamLimits

0xbcd2,	// (0x0004e12d) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x00051f15) cell_indicator_nsta_pane_g_ParamLimits

0x6204,	// (0x0004865f) form2_midp_time_pane_t1_ParamLimits

0x0d08,	// (0x00043163) main_idle_act4_pane_ParamLimits

0x0d08,	// (0x00043163) main_idle_act4_pane

0x7f56,	// (0x0004a3b1) popup_tb_extension_window_ParamLimits

0xdb1d,	// (0x0004ff78) tb_ext_find_pane_ParamLimits

0xdb1d,	// (0x0004ff78) tb_ext_find_pane

0xdc80,	// (0x000500db) ai_gene_pane_1_cp1

0x784f,	// (0x00049caa) ai_gene_pane_2_cp1

0xdc88,	// (0x000500e3) list_single_idle_plugin_calendar_pane

0xdc91,	// (0x000500ec) list_single_idle_plugin_notification_pane

0xdc9a,	// (0x000500f5) list_single_idle_plugin_player_pane

0xdca3,	// (0x000500fe) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca3,	// (0x000500fe) list_single_idle_plugin_shortcut_pane

0xdcc5,	// (0x00050120) main_idle_act4_pane_t1

0xdcd7,	// (0x00050132) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0005219f) main_idle_act4_pane_t

0xdce9,	// (0x00050144) middle_sk_idle_act4_pane_ParamLimits

0xdce9,	// (0x00050144) middle_sk_idle_act4_pane

0xdcff,	// (0x0005015a) popup_clock_digital_analogue_window_cp2

0xdd19,	// (0x00050174) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd19,	// (0x00050174) shortcut_wheel_idle_act4_pane

0xc287,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g1

0xc287,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g2

0xc287,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g3

0xc287,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g4

0xc287,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g5

0xdd2d,	// (0x00050188) shortcut_wheel_idle_act4_pane_g6

0xdd35,	// (0x00050190) shortcut_wheel_idle_act4_pane_g7

0xdd3d,	// (0x00050198) shortcut_wheel_idle_act4_pane_g8

0xdd45,	// (0x000501a0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x000521a4) shortcut_wheel_idle_act4_pane_g

0xc4f7,	// (0x0004e952) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4f7,	// (0x0004e952) middle_sk_idle_act4_pane_g1

0xdda9,	// (0x00050204) middle_sk_idle_act4_pane_g2_ParamLimits

0xdda9,	// (0x00050204) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x000521c7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x000521c7) middle_sk_idle_act4_pane_g

0xddb5,	// (0x00050210) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb5,	// (0x00050210) middle_sk_idle_act4_pane_t1

0xddd2,	// (0x0005022d) grid_ai_shortcut_pane_ParamLimits

0xddd2,	// (0x0005022d) grid_ai_shortcut_pane

0xddeb,	// (0x00050246) list_highlight_pane_cp16_ParamLimits

0xddeb,	// (0x00050246) list_highlight_pane_cp16

0xddf8,	// (0x00050253) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddf8,	// (0x00050253) list_single_idle_plugin_shortcut_pane_g1

0xde04,	// (0x0005025f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde04,	// (0x0005025f) list_single_idle_plugin_shortcut_pane_g2

0xde1c,	// (0x00050277) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde1c,	// (0x00050277) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x000521cc) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x000521cc) list_single_idle_plugin_shortcut_pane_g

0xde2f,	// (0x0005028a) cell_ai_shortcut_pane_ParamLimits

0xde2f,	// (0x0005028a) cell_ai_shortcut_pane

0xde53,	// (0x000502ae) cell_ai_shortcut_pane_g1_ParamLimits

0xde53,	// (0x000502ae) cell_ai_shortcut_pane_g1

0xdc80,	// (0x000500db) ai_gene_pane_1_cp2

0xde75,	// (0x000502d0) ai_gene_pane_2_cp2

0xde7d,	// (0x000502d8) list_highlight_pane_cp15

0xde86,	// (0x000502e1) list_single_idle_plugin_calendar_pane_g1

0xde7d,	// (0x000502d8) list_highlight_pane_cp17

0xde8e,	// (0x000502e9) list_single_idle_plugin_calendar_pane_g1_copy1

0xde96,	// (0x000502f1) list_single_idle_plugin_player_pane_g1

0xb61e,	// (0x0004da79) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x000521d3) list_single_idle_plugin_player_pane_g

0xde9e,	// (0x000502f9) list_single_idle_plugin_player_pane_t1

0xdeac,	// (0x00050307) list_single_idle_plugin_player_pane_t2

0xdeba,	// (0x00050315) list_single_idle_plugin_player_pane_t3

0xdec8,	// (0x00050323) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x000521d8) list_single_idle_plugin_player_pane_t

0xded6,	// (0x00050331) wait_bar_pane_cp15

0xdede,	// (0x00050339) grid_ai_notification_pane

0xb61e,	// (0x0004da79) list_single_idle_plugin_notification_pane_g1

0xdee7,	// (0x00050342) cell_ai_notification_pane_ParamLimits

0xdee7,	// (0x00050342) cell_ai_notification_pane

0xdef4,	// (0x0005034f) cell_ai_notification_pane_g1

0xdefc,	// (0x00050357) cell_ai_notification_pane_t1

0xdf0a,	// (0x00050365) tb_ext_find_button_pane

0xdf12,	// (0x0005036d) tb_ext_find_pane_g1

0xdf1a,	// (0x00050375) tb_ext_find_pane_t1

0x1247,	// (0x000436a2) tb_ext_find_button_pane_g1

0xdf28,	// (0x00050383) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x000521e1) tb_ext_find_button_pane_g

0xdcc5,	// (0x00050120) main_idle_act4_pane_t1_ParamLimits

0xdcd7,	// (0x00050132) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0005219f) main_idle_act4_pane_t_ParamLimits

0xdcff,	// (0x0005015a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd0d,	// (0x00050168) sat_plugin_idle_act4_pane_ParamLimits

0xdd0d,	// (0x00050168) sat_plugin_idle_act4_pane

0xdf31,	// (0x0005038c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf31,	// (0x0005038c) sat_plugin_idle_act4_pane_t1

0xdf44,	// (0x0005039f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf44,	// (0x0005039f) sat_plugin_idle_act4_pane_t2

0xdf57,	// (0x000503b2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf57,	// (0x000503b2) sat_plugin_idle_act4_pane_t3

0xdf6a,	// (0x000503c5) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf6a,	// (0x000503c5) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x000521e6) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x000521e6) sat_plugin_idle_act4_pane_t

0x6735,	// (0x00048b90) popup_battery_window_ParamLimits

0x6735,	// (0x00048b90) popup_battery_window

0x0b8c,	// (0x00042fe7) bg_popup_sub_pane_cp25_ParamLimits

0x0b8c,	// (0x00042fe7) bg_popup_sub_pane_cp25

0xdf7d,	// (0x000503d8) popup_battery_window_g1_ParamLimits

0xdf7d,	// (0x000503d8) popup_battery_window_g1

0xdf89,	// (0x000503e4) popup_battery_window_t1_ParamLimits

0xdf89,	// (0x000503e4) popup_battery_window_t1

0xdf9b,	// (0x000503f6) popup_battery_window_t2_ParamLimits

0xdf9b,	// (0x000503f6) popup_battery_window_t2

0x0001,

0xfd94,	// (0x000521ef) popup_battery_window_t_ParamLimits

0xfd94,	// (0x000521ef) popup_battery_window_t

0x7718,	// (0x00049b73) midp_canvas_pane_ParamLimits

0x7791,	// (0x00049bec) midp_keypad_pane_ParamLimits

0x7791,	// (0x00049bec) midp_keypad_pane

0x97b5,	// (0x0004bc10) main_midp_pane_ParamLimits

0xbd2e,	// (0x0004e189) signal_pane_g2_cp_ParamLimits

0xdfb8,	// (0x00050413) aid_size_cell_midp_keypad_ParamLimits

0xdfb8,	// (0x00050413) aid_size_cell_midp_keypad

0xdfd2,	// (0x0005042d) midp_keyp_game_grid_pane_ParamLimits

0xdfd2,	// (0x0005042d) midp_keyp_game_grid_pane

0xdff2,	// (0x0005044d) midp_keyp_rocker_pane_ParamLimits

0xdff2,	// (0x0005044d) midp_keyp_rocker_pane

0xe02b,	// (0x00050486) midp_keyp_sk_left_pane_ParamLimits

0xe02b,	// (0x00050486) midp_keyp_sk_left_pane

0xe085,	// (0x000504e0) midp_keyp_sk_right_pane_ParamLimits

0xe085,	// (0x000504e0) midp_keyp_sk_right_pane

0x09f2,	// (0x00042e4d) bg_button_pane_cp03

0xe0df,	// (0x0005053a) midp_keyp_sk_left_pane_g1

0x09f2,	// (0x00042e4d) bg_button_pane_cp04

0xe0df,	// (0x0005053a) midp_keyp_sk_right_pane_g1

0xc287,	// (0x0004e6e2) midp_keyp_rocker_pane_g1

0xe0e8,	// (0x00050543) keyp_game_cell_pane_ParamLimits

0xe0e8,	// (0x00050543) keyp_game_cell_pane

0x09f2,	// (0x00042e4d) bg_button_pane_cp02

0xe0fb,	// (0x00050556) keyp_game_cell_pane_g1

0x676b,	// (0x00048bc6) popup_fep_vkb2_window_ParamLimits

0x676b,	// (0x00048bc6) popup_fep_vkb2_window

0x8bc6,	// (0x0004b021) aid_size_cell_vkb2_ParamLimits

0x8bc6,	// (0x0004b021) aid_size_cell_vkb2

0x8c1a,	// (0x0004b075) popup_fep_vkb2_window_g1_ParamLimits

0x8c1a,	// (0x0004b075) popup_fep_vkb2_window_g1

0x8c62,	// (0x0004b0bd) vkb2_area_bottom_pane_ParamLimits

0x8c62,	// (0x0004b0bd) vkb2_area_bottom_pane

0x8cae,	// (0x0004b109) vkb2_area_keypad_pane_ParamLimits

0x8cae,	// (0x0004b109) vkb2_area_keypad_pane

0x8cf0,	// (0x0004b14b) vkb2_area_top_pane_ParamLimits

0x8cf0,	// (0x0004b14b) vkb2_area_top_pane

0x8d6a,	// (0x0004b1c5) vkb2_top_entry_pane_ParamLimits

0x8d6a,	// (0x0004b1c5) vkb2_top_entry_pane

0x8d94,	// (0x0004b1ef) vkb2_top_grid_left_pane_ParamLimits

0x8d94,	// (0x0004b1ef) vkb2_top_grid_left_pane

0x8db2,	// (0x0004b20d) vkb2_top_grid_right_pane_ParamLimits

0x8db2,	// (0x0004b20d) vkb2_top_grid_right_pane

0x8dd0,	// (0x0004b22b) vkb2_cell_keypad_pane_ParamLimits

0x8dd0,	// (0x0004b22b) vkb2_cell_keypad_pane

0x8ea1,	// (0x0004b2fc) vkb2_area_bottom_grid_pane_ParamLimits

0x8ea1,	// (0x0004b2fc) vkb2_area_bottom_grid_pane

0x8ec7,	// (0x0004b322) vkb2_area_bottom_pane_g1_ParamLimits

0x8ec7,	// (0x0004b322) vkb2_area_bottom_pane_g1

0x8eeb,	// (0x0004b346) vkb2_area_bottom_pane_g2_ParamLimits

0x8eeb,	// (0x0004b346) vkb2_area_bottom_pane_g2

0x8f19,	// (0x0004b374) vkb2_area_bottom_pane_g3_ParamLimits

0x8f19,	// (0x0004b374) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x000521f4) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x000521f4) vkb2_area_bottom_pane_g

0x8f7a,	// (0x0004b3d5) vkb2_top_cell_left_pane_ParamLimits

0x8f7a,	// (0x0004b3d5) vkb2_top_cell_left_pane

0xe10c,	// (0x00050567) vkb2_top_entry_pane_g1_ParamLimits

0xe10c,	// (0x00050567) vkb2_top_entry_pane_g1

0xe11a,	// (0x00050575) vkb2_top_entry_pane_t1_ParamLimits

0xe11a,	// (0x00050575) vkb2_top_entry_pane_t1

0xe14c,	// (0x000505a7) vkb2_top_entry_pane_t2_ParamLimits

0xe14c,	// (0x000505a7) vkb2_top_entry_pane_t2

0xe17e,	// (0x000505d9) vkb2_top_entry_pane_t3_ParamLimits

0xe17e,	// (0x000505d9) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x000521fb) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x000521fb) vkb2_top_entry_pane_t

0x8fc7,	// (0x0004b422) vkb2_top_grid_right_pane_g1_ParamLimits

0x8fc7,	// (0x0004b422) vkb2_top_grid_right_pane_g1

0x8fdd,	// (0x0004b438) vkb2_top_grid_right_pane_g2_ParamLimits

0x8fdd,	// (0x0004b438) vkb2_top_grid_right_pane_g2

0x8ff5,	// (0x0004b450) vkb2_top_grid_right_pane_g3_ParamLimits

0x8ff5,	// (0x0004b450) vkb2_top_grid_right_pane_g3

0x900d,	// (0x0004b468) vkb2_top_grid_right_pane_g4_ParamLimits

0x900d,	// (0x0004b468) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x00052202) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x00052202) vkb2_top_grid_right_pane_g

0x9023,	// (0x0004b47e) vkb2_top_cell_left_pane_g1

0x903a,	// (0x0004b495) vkb2_cell_keypad_pane_g1_ParamLimits

0x903a,	// (0x0004b495) vkb2_cell_keypad_pane_g1

0xe1a2,	// (0x000505fd) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1a2,	// (0x000505fd) vkb2_cell_keypad_pane_t1

0x9048,	// (0x0004b4a3) vkb2_cell_bottom_grid_pane_ParamLimits

0x9048,	// (0x0004b4a3) vkb2_cell_bottom_grid_pane

0x9081,	// (0x0004b4dc) vkb2_cell_bottom_grid_pane_g1

0xdd4d,	// (0x000501a8) aid_call2_pane_cp02

0xdd55,	// (0x000501b0) aid_call_pane_cp02

0xdd5d,	// (0x000501b8) clock_digital_number_pane_cp10

0xdd65,	// (0x000501c0) clock_digital_number_pane_cp11

0xdd6d,	// (0x000501c8) clock_digital_number_pane_cp12

0xdd75,	// (0x000501d0) clock_digital_number_pane_cp13

0xdd7d,	// (0x000501d8) clock_digital_separator_pane_cp10

0x1247,	// (0x000436a2) popup_clock_digital_analogue_window_cp2_g1

0x1247,	// (0x000436a2) popup_clock_digital_analogue_window_cp2_g2

0xdd85,	// (0x000501e0) popup_clock_digital_analogue_window_cp2_g3

0x1247,	// (0x000436a2) popup_clock_digital_analogue_window_cp2_g4

0xdd85,	// (0x000501e0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x000521b7) popup_clock_digital_analogue_window_cp2_g

0xdd8d,	// (0x000501e8) popup_clock_digital_analogue_window_cp2_t1

0xdd9b,	// (0x000501f6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x000521c2) popup_clock_digital_analogue_window_cp2_t

0xc287,	// (0x0004e6e2) clock_digital_number_pane_cp10_g1

0xc287,	// (0x0004e6e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x00051fb1) clock_digital_number_pane_cp10_g

0xc287,	// (0x0004e6e2) clock_digital_separator_pane_cp10_g1

0xc287,	// (0x0004e6e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x00051fb1) clock_digital_separator_pane_cp10_g

0xdbca,	// (0x00050025) uniindi_top_pane_g3

0xdbdb,	// (0x00050036) uniindi_top_pane_g4

0x8e5b,	// (0x0004b2b6) vkb2_row_keypad_pane_ParamLimits

0x8e5b,	// (0x0004b2b6) vkb2_row_keypad_pane

0x909d,	// (0x0004b4f8) vkb2_cell_t_keypad_pane_ParamLimits

0x909d,	// (0x0004b4f8) vkb2_cell_t_keypad_pane

0x90ad,	// (0x0004b508) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x90ad,	// (0x0004b508) vkb2_cell_t_keypad_pane_cp08

0x90c0,	// (0x0004b51b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x90c0,	// (0x0004b51b) vkb2_cell_t_keypad_pane_cp09

0x90d4,	// (0x0004b52f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x90d4,	// (0x0004b52f) vkb2_cell_t_keypad_pane_cp01

0x90e5,	// (0x0004b540) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x90e5,	// (0x0004b540) vkb2_cell_t_keypad_pane_cp02

0x90f6,	// (0x0004b551) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x90f6,	// (0x0004b551) vkb2_cell_t_keypad_pane_cp03

0x9107,	// (0x0004b562) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9107,	// (0x0004b562) vkb2_cell_t_keypad_pane_cp04

0x9118,	// (0x0004b573) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9118,	// (0x0004b573) vkb2_cell_t_keypad_pane_cp05

0x9129,	// (0x0004b584) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9129,	// (0x0004b584) vkb2_cell_t_keypad_pane_cp06

0x913a,	// (0x0004b595) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x913a,	// (0x0004b595) vkb2_cell_t_keypad_pane_cp07

0x914b,	// (0x0004b5a6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x914b,	// (0x0004b5a6) vkb2_cell_t_keypad_pane_cp10

0xc4f7,	// (0x0004e952) vkb2_cell_t_keypad_pane_g1

0xe1b9,	// (0x00050614) vkb2_cell_t_keypad_pane_t1

0x09f2,	// (0x00042e4d) popup_grid_graphic2_window

0xe1cb,	// (0x00050626) aid_size_cell_graphic2_ParamLimits

0xe1cb,	// (0x00050626) aid_size_cell_graphic2

0xe203,	// (0x0005065e) bg_popup_window_pane_cp21_ParamLimits

0xe203,	// (0x0005065e) bg_popup_window_pane_cp21

0xe211,	// (0x0005066c) graphic2_pages_pane_ParamLimits

0xe211,	// (0x0005066c) graphic2_pages_pane

0xe257,	// (0x000506b2) grid_graphic2_control_pane_ParamLimits

0xe257,	// (0x000506b2) grid_graphic2_control_pane

0xe295,	// (0x000506f0) grid_graphic2_pane_ParamLimits

0xe295,	// (0x000506f0) grid_graphic2_pane

0xe309,	// (0x00050764) cell_graphic2_pane

0x09f2,	// (0x00042e4d) main_comp_mode_pane

0xd43d,	// (0x0004f898) list_ai3_gene_pane_ParamLimits

0xd809,	// (0x0004fc64) bg_popup_window_pane_cp19_ParamLimits

0xd815,	// (0x0004fc70) bg_touch_area_indi_pane_ParamLimits

0xd815,	// (0x0004fc70) bg_touch_area_indi_pane

0xd82b,	// (0x0004fc86) bg_touch_area_indi_pane_cp01_ParamLimits

0xd82b,	// (0x0004fc86) bg_touch_area_indi_pane_cp01

0xd841,	// (0x0004fc9c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd841,	// (0x0004fc9c) bg_touch_area_indi_pane_cp02

0xd857,	// (0x0004fcb2) bg_touch_area_indi_pane_cp03_ParamLimits

0xd857,	// (0x0004fcb2) bg_touch_area_indi_pane_cp03

0xd871,	// (0x0004fccc) popup_slider_window_g1_ParamLimits

0xd88d,	// (0x0004fce8) popup_slider_window_g2_ParamLimits

0xd8a9,	// (0x0004fd04) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0005214c) popup_slider_window_g_ParamLimits

0xd90f,	// (0x0004fd6a) popup_slider_window_t1_ParamLimits

0xd983,	// (0x0004fdde) small_volume_slider_vertical_pane_ParamLimits

0xe309,	// (0x00050764) cell_graphic2_pane_ParamLimits

0xe358,	// (0x000507b3) bg_button_pane_cp10_ParamLimits

0xe358,	// (0x000507b3) bg_button_pane_cp10

0xe36b,	// (0x000507c6) bg_button_pane_cp11_ParamLimits

0xe36b,	// (0x000507c6) bg_button_pane_cp11

0xe37e,	// (0x000507d9) graphic2_pages_pane_g1_ParamLimits

0xe37e,	// (0x000507d9) graphic2_pages_pane_g1

0xe399,	// (0x000507f4) graphic2_pages_pane_g2_ParamLimits

0xe399,	// (0x000507f4) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x00052210) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x00052210) graphic2_pages_pane_g

0xe3b1,	// (0x0005080c) graphic2_pages_pane_t1_ParamLimits

0xe3b1,	// (0x0005080c) graphic2_pages_pane_t1

0xe3c9,	// (0x00050824) cell_graphic2_control_pane_ParamLimits

0xe3c9,	// (0x00050824) cell_graphic2_control_pane

0xe3e7,	// (0x00050842) cell_graphic2_pane_g1_ParamLimits

0xe3e7,	// (0x00050842) cell_graphic2_pane_g1

0xe3f4,	// (0x0005084f) cell_graphic2_pane_g2_ParamLimits

0xe3f4,	// (0x0005084f) cell_graphic2_pane_g2

0xe401,	// (0x0005085c) cell_graphic2_pane_g3_ParamLimits

0xe401,	// (0x0005085c) cell_graphic2_pane_g3

0xe40e,	// (0x00050869) cell_graphic2_pane_g4_ParamLimits

0xe40e,	// (0x00050869) cell_graphic2_pane_g4

0xe41b,	// (0x00050876) cell_graphic2_pane_g5_ParamLimits

0xe41b,	// (0x00050876) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x00052215) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x00052215) cell_graphic2_pane_g

0xe436,	// (0x00050891) cell_graphic2_pane_t1_ParamLimits

0xe436,	// (0x00050891) cell_graphic2_pane_t1

0x9d50,	// (0x0004c1ab) grid_highlight_pane_cp11_ParamLimits

0x9d50,	// (0x0004c1ab) grid_highlight_pane_cp11

0x0b8c,	// (0x00042fe7) bg_button_pane_cp05

0xe46d,	// (0x000508c8) cell_graphic2_control_pane_g1

0xc287,	// (0x0004e6e2) bg_touch_area_indi_pane_g1

0xe495,	// (0x000508f0) aid_cmod_rocker_key_size

0xe49f,	// (0x000508fa) aid_cmode_itu_key_size

0xe4a9,	// (0x00050904) main_cmode_video_pane

0xe4b3,	// (0x0005090e) main_comp_mode_itu_pane

0xe4bf,	// (0x0005091a) main_comp_mode_rocker_pane

0xe4cb,	// (0x00050926) cell_cmode_rocker_pane_ParamLimits

0xe4cb,	// (0x00050926) cell_cmode_rocker_pane

0xe4dd,	// (0x00050938) cell_cmode_itu_pane_ParamLimits

0xe4dd,	// (0x00050938) cell_cmode_itu_pane

0x0e14,	// (0x0004326f) bg_button_pane_cp06_ParamLimits

0x0e14,	// (0x0004326f) bg_button_pane_cp06

0xc4f7,	// (0x0004e952) cell_cmode_rocker_pane_g1_ParamLimits

0xc4f7,	// (0x0004e952) cell_cmode_rocker_pane_g1

0xda27,	// (0x0004fe82) cell_cmode_rocker_pane_g2_ParamLimits

0xda27,	// (0x0004fe82) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x00052225) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x00052225) cell_cmode_rocker_pane_g

0x09f2,	// (0x00042e4d) bg_button_pane_cp07

0xe4f2,	// (0x0005094d) cell_cmode_itu_pane_g1

0xe4fb,	// (0x00050956) cell_cmode_itu_pane_t1

0xe509,	// (0x00050964) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0005222a) cell_cmode_itu_pane_t

0xdc4c,	// (0x000500a7) aid_touch_ctrl_left

0xdc54,	// (0x000500af) aid_touch_ctrl_right

0x09f2,	// (0x00042e4d) compa_mode_pane

0xe517,	// (0x00050972) aid_cmod_rocker_key_size_cp

0xe521,	// (0x0005097c) aid_cmode_itu_key_size_cp

0xe52b,	// (0x00050986) compa_mode_pane_g1

0xe533,	// (0x0005098e) compa_mode_pane_g2

0xe53b,	// (0x00050996) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0005222f) compa_mode_pane_g

0xe543,	// (0x0005099e) main_comp_mode_itu_pane_cp

0xe54b,	// (0x000509a6) main_comp_mode_rocker_pane_cp

0xe553,	// (0x000509ae) cell_cmode_itu_pane_cp_ParamLimits

0xe553,	// (0x000509ae) cell_cmode_itu_pane_cp

0xe568,	// (0x000509c3) cell_cmode_rocker_pane_cp_ParamLimits

0xe568,	// (0x000509c3) cell_cmode_rocker_pane_cp

0x0e14,	// (0x0004326f) bg_button_pane_cp06_cp_ParamLimits

0x0e14,	// (0x0004326f) bg_button_pane_cp06_cp

0xc4f7,	// (0x0004e952) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4f7,	// (0x0004e952) cell_cmode_rocker_pane_g1_cp

0xc287,	// (0x0004e6e2) cell_cmode_rocker_pane_g2_cp

0x09f2,	// (0x00042e4d) bg_button_pane_cp07_cp

0xe57a,	// (0x000509d5) cell_cmode_itu_pane_g1_cp

0xe583,	// (0x000509de) cell_cmode_itu_pane_t1_cp

0xe583,	// (0x000509de) cell_cmode_itu_pane_t2_cp

0xb1e5,	// (0x0004d640) settings_code_pane_cp2

0x0a62,	// (0x00042ebd) bg_popup_window_pane_cp3_ParamLimits

0x0ca5,	// (0x00043100) heading_pane_cp3_ParamLimits

0x0cb1,	// (0x0004310c) listscroll_popup_graphic_pane_ParamLimits

0x869f,	// (0x0004aafa) fep_hwr_aid_pane_ParamLimits

0x8b3d,	// (0x0004af98) aid_touch_sctrl_top_ParamLimits

0x8b4a,	// (0x0004afa5) sctrl_sk_top_pane_g1_ParamLimits

0xc4f7,	// (0x0004e952) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x00052165) sctrl_sk_top_pane_g_ParamLimits

0x8b57,	// (0x0004afb2) sctrl_sk_top_pane_t1_ParamLimits

0x8b3d,	// (0x0004af98) aid_touch_sctrl_bottom_ParamLimits

0x8b57,	// (0x0004afb2) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb96,	// (0x0004fff1) aid_area_touch_clock

0x8d32,	// (0x0004b18d) aid_vkb2_area_top_pane_cell_ParamLimits

0x8d32,	// (0x0004b18d) aid_vkb2_area_top_pane_cell

0x8e7d,	// (0x0004b2d8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8e7d,	// (0x0004b2d8) aid_vkb2_area_bottom_pane_cell

0xe104,	// (0x0005055f) popup_char_count_window

0xe591,	// (0x000509ec) popup_char_count_window_g1

0xe59a,	// (0x000509f5) popup_char_count_window_g2

0xe5a3,	// (0x000509fe) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x00052236) popup_char_count_window_g

0xe5ac,	// (0x00050a07) popup_char_count_window_t1

0x8bf8,	// (0x0004b053) popup_fep_char_preview_window_ParamLimits

0x8bf8,	// (0x0004b053) popup_fep_char_preview_window

0x8d50,	// (0x0004b1ab) vkb2_top_candi_pane_ParamLimits

0x8d50,	// (0x0004b1ab) vkb2_top_candi_pane

0xe5ba,	// (0x00050a15) cell_vkb2_top_candi_pane_ParamLimits

0xe5ba,	// (0x00050a15) cell_vkb2_top_candi_pane

0xa362,	// (0x0004c7bd) bg_popup_fep_char_preview_window_ParamLimits

0xa362,	// (0x0004c7bd) bg_popup_fep_char_preview_window

0x9160,	// (0x0004b5bb) popup_fep_char_preview_window_t1_ParamLimits

0x9160,	// (0x0004b5bb) popup_fep_char_preview_window_t1

0xe607,	// (0x00050a62) bg_popup_fep_char_preview_window_g1

0xe60f,	// (0x00050a6a) bg_popup_fep_char_preview_window_g2

0xe617,	// (0x00050a72) bg_popup_fep_char_preview_window_g3

0xe61f,	// (0x00050a7a) bg_popup_fep_char_preview_window_g4

0xe627,	// (0x00050a82) bg_popup_fep_char_preview_window_g5

0x919a,	// (0x0004b5f5) bg_popup_fep_char_preview_window_g6

0xe62f,	// (0x00050a8a) bg_popup_fep_char_preview_window_g7

0xe637,	// (0x00050a92) bg_popup_fep_char_preview_window_g8

0xe63f,	// (0x00050a9a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0005223d) bg_popup_fep_char_preview_window_g

0xc4f7,	// (0x0004e952) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4f7,	// (0x0004e952) cell_vkb2_top_candi_pane_g1

0xc80e,	// (0x0004ec69) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc80e,	// (0x0004ec69) cell_vkb2_top_candi_pane_g2

0xc82f,	// (0x0004ec8a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc82f,	// (0x0004ec8a) cell_vkb2_top_candi_pane_g3

0x91a2,	// (0x0004b5fd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x91a2,	// (0x0004b5fd) cell_vkb2_top_candi_pane_g4

0xe647,	// (0x00050aa2) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe647,	// (0x00050aa2) cell_vkb2_top_candi_pane_g5

0xda27,	// (0x0004fe82) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda27,	// (0x0004fe82) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x00052250) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x00052250) cell_vkb2_top_candi_pane_g

0x91c3,	// (0x0004b61e) cell_vkb2_top_candi_pane_t1

0x8395,	// (0x0004a7f0) aid_size_touch_slider_mark_ParamLimits

0x8395,	// (0x0004a7f0) aid_size_touch_slider_mark

0xe247,	// (0x000506a2) grid_graphic2_catg_pane_ParamLimits

0xe247,	// (0x000506a2) grid_graphic2_catg_pane

0xe2e5,	// (0x00050740) popup_grid_graphic2_window_t1_ParamLimits

0xe2e5,	// (0x00050740) popup_grid_graphic2_window_t1

0xe2f7,	// (0x00050752) popup_grid_graphic2_window_t2_ParamLimits

0xe2f7,	// (0x00050752) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0005220b) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0005220b) popup_grid_graphic2_window_t

0x0b8c,	// (0x00042fe7) bg_button_pane_cp05_ParamLimits

0xe46d,	// (0x000508c8) cell_graphic2_control_pane_g1_ParamLimits

0xe668,	// (0x00050ac3) cell_graphic2_catg_pane_ParamLimits

0xe668,	// (0x00050ac3) cell_graphic2_catg_pane

0x09f2,	// (0x00042e4d) bg_button_pane_cp12

0xe67a,	// (0x00050ad5) cell_graphic2_catg_pane_g1

0xdb61,	// (0x0004ffbc) cell_tb_ext_pane_t1_ParamLimits

0x8f9a,	// (0x0004b3f5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8f9a,	// (0x0004b3f5) vkb2_top_cell_right_narrow_pane

0x8fb2,	// (0x0004b40d) vkb2_top_cell_right_wide_pane_ParamLimits

0x8fb2,	// (0x0004b40d) vkb2_top_cell_right_wide_pane

0x8691,	// (0x0004aaec) bg_vkb2_func_pane_ParamLimits

0x8691,	// (0x0004aaec) bg_vkb2_func_pane

0x9023,	// (0x0004b47e) vkb2_top_cell_left_pane_g1_ParamLimits

0x8691,	// (0x0004aaec) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8691,	// (0x0004aaec) bg_vkb2_fuc_pane_cp03

0x9081,	// (0x0004b4dc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ce4,	// (0x0004c13f) bg_vkb2_func_pane_g1

0x9cec,	// (0x0004c147) bg_vkb2_func_pane_g2

0x9cfc,	// (0x0004c157) bg_vkb2_func_pane_g3

0x9cf4,	// (0x0004c14f) bg_vkb2_func_pane_g4

0x9d04,	// (0x0004c15f) bg_vkb2_func_pane_g5

0x9d0c,	// (0x0004c167) bg_vkb2_func_pane_g6

0x9d14,	// (0x0004c16f) bg_vkb2_func_pane_g7

0x9d1c,	// (0x0004c177) bg_vkb2_func_pane_g8

0x9cdc,	// (0x0004c137) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0005225d) bg_vkb2_func_pane_g

0x8691,	// (0x0004aaec) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8691,	// (0x0004aaec) bg_vkb2_fuc_pane_cp01

0x9023,	// (0x0004b47e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9023,	// (0x0004b47e) vkb2_top_cell_right_wide_pane_g1

0x8691,	// (0x0004aaec) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8691,	// (0x0004aaec) bg_vkb2_fuc_pane_cp02

0x9081,	// (0x0004b4dc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9081,	// (0x0004b4dc) vkb2_top_cell_right_narrow_pane_g1

0xd783,	// (0x0004fbde) aid_touch_area_decrease_ParamLimits

0xd783,	// (0x0004fbde) aid_touch_area_decrease

0xd7a7,	// (0x0004fc02) aid_touch_area_increase_ParamLimits

0xd7a7,	// (0x0004fc02) aid_touch_area_increase

0xd7bf,	// (0x0004fc1a) aid_touch_area_mute_ParamLimits

0xd7bf,	// (0x0004fc1a) aid_touch_area_mute

0xd7db,	// (0x0004fc36) aid_touch_area_slider_ParamLimits

0xd7db,	// (0x0004fc36) aid_touch_area_slider

0xd8c5,	// (0x0004fd20) popup_slider_window_g4_ParamLimits

0xd8c5,	// (0x0004fd20) popup_slider_window_g4

0xd8dd,	// (0x0004fd38) popup_slider_window_g5_ParamLimits

0xd8dd,	// (0x0004fd38) popup_slider_window_g5

0xd8ff,	// (0x0004fd5a) popup_slider_window_g6_ParamLimits

0xd8ff,	// (0x0004fd5a) popup_slider_window_g6

0xd93d,	// (0x0004fd98) popup_slider_window_t2_ParamLimits

0xd93d,	// (0x0004fd98) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x00052159) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x00052159) popup_slider_window_t

0xd955,	// (0x0004fdb0) slider_pane_ParamLimits

0xd955,	// (0x0004fdb0) slider_pane

0xe683,	// (0x00050ade) slider_pane_g1_ParamLimits

0xe683,	// (0x00050ade) slider_pane_g1

0xe697,	// (0x00050af2) slider_pane_g2_ParamLimits

0xe697,	// (0x00050af2) slider_pane_g2

0xe6ad,	// (0x00050b08) slider_pane_g3_ParamLimits

0xe6ad,	// (0x00050b08) slider_pane_g3

0x0003,

0xfe15,	// (0x00052270) slider_pane_g_ParamLimits

0xfe15,	// (0x00052270) slider_pane_g

0x7fb2,	// (0x0004a40d) popup_tb_float_extension_window_ParamLimits

0x7fb2,	// (0x0004a40d) popup_tb_float_extension_window

0xe6d9,	// (0x00050b34) aid_size_cell_tb_float_ext

0x09f2,	// (0x00042e4d) bg_popup_sub_window_cp28

0xe6e5,	// (0x00050b40) grid_tb_float_ext_pane

0xe6ef,	// (0x00050b4a) cell_tb_float_ext_pane_ParamLimits

0xe6ef,	// (0x00050b4a) cell_tb_float_ext_pane

0xe709,	// (0x00050b64) cell_tb_float_ext_pane_g1

0xe712,	// (0x00050b6d) grid_highlight_pane_cp12

0x87d2,	// (0x0004ac2d) cell_last_hwr_side_pane_ParamLimits

0x87d2,	// (0x0004ac2d) cell_last_hwr_side_pane

0xc287,	// (0x0004e6e2) cell_last_hwr_side_pane_g1

0xe71b,	// (0x00050b76) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x00052279) cell_last_hwr_side_pane_g

0x8f49,	// (0x0004b3a4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8f49,	// (0x0004b3a4) vkb2_area_bottom_space_btn_pane

0xc4f7,	// (0x0004e952) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1b9,	// (0x00050614) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x91c3,	// (0x0004b61e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x91e2,	// (0x0004b63d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x91e2,	// (0x0004b63d) vkb2_area_bottom_space_btn_pane_g1

0x921c,	// (0x0004b677) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x921c,	// (0x0004b677) vkb2_area_bottom_space_btn_pane_g2

0x9252,	// (0x0004b6ad) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9252,	// (0x0004b6ad) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0005227e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0005227e) vkb2_area_bottom_space_btn_pane_g

0x8746,	// (0x0004aba1) cel_fep_hwr_func_pane_ParamLimits

0x8746,	// (0x0004aba1) cel_fep_hwr_func_pane

0x8782,	// (0x0004abdd) cell_hwr_side_button_pane_ParamLimits

0x8782,	// (0x0004abdd) cell_hwr_side_button_pane

0xdb96,	// (0x0004fff1) aid_area_touch_clock_ParamLimits

0x0b8c,	// (0x00042fe7) bg_uniindi_top_pane_ParamLimits

0xdba8,	// (0x00050003) uniindi_top_pane_g1_ParamLimits

0xdbbe,	// (0x00050019) uniindi_top_pane_g2_ParamLimits

0xdbca,	// (0x00050025) uniindi_top_pane_g3_ParamLimits

0xdbdb,	// (0x00050036) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x00052191) uniindi_top_pane_g_ParamLimits

0xdbe8,	// (0x00050043) uniindi_top_pane_t1_ParamLimits

0x0b8c,	// (0x00042fe7) bg_vkb2_func_pane_cp01_ParamLimits

0x0b8c,	// (0x00042fe7) bg_vkb2_func_pane_cp01

0xe724,	// (0x00050b7f) cel_fep_hwr_func_pane_g1_ParamLimits

0xe724,	// (0x00050b7f) cel_fep_hwr_func_pane_g1

0x0b8c,	// (0x00042fe7) bg_vkb2_func_pane_cp02_ParamLimits

0x0b8c,	// (0x00042fe7) bg_vkb2_func_pane_cp02

0xe724,	// (0x00050b7f) cell_hwr_side_button_pane_g1_ParamLimits

0xe724,	// (0x00050b7f) cell_hwr_side_button_pane_g1

0x9b60,	// (0x0004bfbb) status_pane_g4_ParamLimits

0x9b60,	// (0x0004bfbb) status_pane_g4

0x9b7a,	// (0x0004bfd5) status_pane_t1

0xbfc2,	// (0x0004e41d) form2_midp_gauge_slider_cont_pane

0xbfca,	// (0x0004e425) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfdc,	// (0x0004e437) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfee,	// (0x0004e449) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00051f64) form2_midp_gauge_slider_pane_t_ParamLimits

0xc000,	// (0x0004e45b) form2_midp_slider_pane_ParamLimits

0x8bb8,	// (0x0004b013) aid_size_cell_func_vkb2_ParamLimits

0x8bb8,	// (0x0004b013) aid_size_cell_func_vkb2

0xe6c5,	// (0x00050b20) slider_pane_g4_ParamLimits

0xe6c5,	// (0x00050b20) slider_pane_g4

0x929c,	// (0x0004b6f7) form2_midp_gauge_slider_pane_t2_cp01

0x92aa,	// (0x0004b705) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x92aa,	// (0x0004b705) form2_midp_gauge_slider_pane_t3_cp01

0x92c7,	// (0x0004b722) form2_midp_slider_pane_cp01

0x09f2,	// (0x00042e4d) navi_smil_pane

0xe75d,	// (0x00050bb8) navi_smil_pane_g1

0xe765,	// (0x00050bc0) navi_smil_pane_t1

0xe732,	// (0x00050b8d) form2_midp_slider_pane_g1

0xe73b,	// (0x00050b96) form2_midp_slider_pane_g2

0xe743,	// (0x00050b9e) form2_midp_slider_pane_g3

0xe732,	// (0x00050b8d) form2_midp_slider_pane_g4

0xe74b,	// (0x00050ba6) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x00052287) form2_midp_slider_pane_g

0x928c,	// (0x0004b6e7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x928c,	// (0x0004b6e7) vkb2_area_bottom_space_btn_pane_g4

0x998f,	// (0x0004bdea) lc0_navi_pane_ParamLimits

0x998f,	// (0x0004bdea) lc0_navi_pane

0x9a05,	// (0x0004be60) lc0_stat_indi_pane_ParamLimits

0x9a05,	// (0x0004be60) lc0_stat_indi_pane

0x9a1c,	// (0x0004be77) ls0_title_pane_ParamLimits

0x9a1c,	// (0x0004be77) ls0_title_pane

0x0e14,	// (0x0004326f) bg_popup_sub_pane_cp14_ParamLimits

0xdb7d,	// (0x0004ffd8) list_uniindi_pane_ParamLimits

0xdb89,	// (0x0004ffe4) uniindi_top_pane_ParamLimits

0xdc24,	// (0x0005007f) list_single_uniindi_pane_g1_ParamLimits

0xdc37,	// (0x00050092) list_single_uniindi_pane_t1_ParamLimits

0x92d0,	// (0x0004b72b) lc0_stat_clock_pane_ParamLimits

0x92d0,	// (0x0004b72b) lc0_stat_clock_pane

0xe773,	// (0x00050bce) lc0_stat_indi_pane_g1_ParamLimits

0xe773,	// (0x00050bce) lc0_stat_indi_pane_g1

0xe780,	// (0x00050bdb) lc0_stat_indi_pane_g2_ParamLimits

0xe780,	// (0x00050bdb) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x00052292) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x00052292) lc0_stat_indi_pane_g

0x92dd,	// (0x0004b738) lc0_uni_indicator_pane_ParamLimits

0x92dd,	// (0x0004b738) lc0_uni_indicator_pane

0xe78d,	// (0x00050be8) ls0_title_pane_g1_ParamLimits

0xe78d,	// (0x00050be8) ls0_title_pane_g1

0xe7a1,	// (0x00050bfc) ls0_title_pane_t1_ParamLimits

0xe7a1,	// (0x00050bfc) ls0_title_pane_t1

0x92ea,	// (0x0004b745) lc0_uni_indicator_pane_g1_ParamLimits

0x92ea,	// (0x0004b745) lc0_uni_indicator_pane_g1

0xe7d7,	// (0x00050c32) lc0_stat_clock_pane_t1

0x09f2,	// (0x00042e4d) main_ai5_pane

0xe7e5,	// (0x00050c40) ai5_sk_pane_ParamLimits

0xe7e5,	// (0x00050c40) ai5_sk_pane

0xe7f2,	// (0x00050c4d) cell_ai5_widget_pane_ParamLimits

0xe7f2,	// (0x00050c4d) cell_ai5_widget_pane

0xe8ad,	// (0x00050d08) aid_size_cell_widget_grid

0xe8bb,	// (0x00050d16) bg_ai5_widget_pane_ParamLimits

0xe8bb,	// (0x00050d16) bg_ai5_widget_pane

0xe933,	// (0x00050d8e) cell_ai5_widget_pane_g2

0xe947,	// (0x00050da2) cell_ai5_widget_pane_g3

0xe961,	// (0x00050dbc) cell_ai5_widget_pane_g4

0xe971,	// (0x00050dcc) cell_ai5_widget_pane_g5

0xe981,	// (0x00050ddc) cell_ai5_widget_pane_g6

0xe98d,	// (0x00050de8) cell_ai5_widget_pane_g7

0xe9d5,	// (0x00050e30) cell_ai5_widget_pane_t1_ParamLimits

0xe9d5,	// (0x00050e30) cell_ai5_widget_pane_t1

0xe9f2,	// (0x00050e4d) cell_ai5_widget_pane_t2_ParamLimits

0xe9f2,	// (0x00050e4d) cell_ai5_widget_pane_t2

0xea0a,	// (0x00050e65) cell_ai5_widget_pane_t3_ParamLimits

0xea0a,	// (0x00050e65) cell_ai5_widget_pane_t3

0xea22,	// (0x00050e7d) cell_ai5_widget_pane_t4_ParamLimits

0xea22,	// (0x00050e7d) cell_ai5_widget_pane_t4

0xea48,	// (0x00050ea3) cell_ai5_widget_pane_t5_ParamLimits

0xea48,	// (0x00050ea3) cell_ai5_widget_pane_t5

0xea68,	// (0x00050ec3) cell_ai5_widget_pane_t6_ParamLimits

0xea68,	// (0x00050ec3) cell_ai5_widget_pane_t6

0xea7a,	// (0x00050ed5) cell_ai5_widget_pane_t7_ParamLimits

0xea7a,	// (0x00050ed5) cell_ai5_widget_pane_t7

0xea93,	// (0x00050eee) cell_ai5_widget_pane_t8_ParamLimits

0xea93,	// (0x00050eee) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x000522ac) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x000522ac) cell_ai5_widget_pane_t

0xeaf2,	// (0x00050f4d) grid_ai5_widget_pane

0x0e14,	// (0x0004326f) highlight_cell_ai5_widget_pane_ParamLimits

0x0e14,	// (0x0004326f) highlight_cell_ai5_widget_pane

0xeb00,	// (0x00050f5b) ai5_sk_left_pane

0xeb0a,	// (0x00050f65) ai5_sk_middle_pane

0xeb14,	// (0x00050f6f) ai5_sk_right_pane

0xeb1e,	// (0x00050f79) bg_ai5_widget_pane_g1_ParamLimits

0xeb1e,	// (0x00050f79) bg_ai5_widget_pane_g1

0xeb2a,	// (0x00050f85) bg_ai5_widget_pane_g2_ParamLimits

0xeb2a,	// (0x00050f85) bg_ai5_widget_pane_g2

0xeb36,	// (0x00050f91) bg_ai5_widget_pane_g3_ParamLimits

0xeb36,	// (0x00050f91) bg_ai5_widget_pane_g3

0xeb42,	// (0x00050f9d) bg_ai5_widget_pane_g4_ParamLimits

0xeb42,	// (0x00050f9d) bg_ai5_widget_pane_g4

0xeb4e,	// (0x00050fa9) bg_ai5_widget_pane_g5_ParamLimits

0xeb4e,	// (0x00050fa9) bg_ai5_widget_pane_g5

0xeb5a,	// (0x00050fb5) bg_ai5_widget_pane_g6_ParamLimits

0xeb5a,	// (0x00050fb5) bg_ai5_widget_pane_g6

0xeb66,	// (0x00050fc1) bg_ai5_widget_pane_g7_ParamLimits

0xeb66,	// (0x00050fc1) bg_ai5_widget_pane_g7

0xeb72,	// (0x00050fcd) bg_ai5_widget_pane_g8_ParamLimits

0xeb72,	// (0x00050fcd) bg_ai5_widget_pane_g8

0xeb7e,	// (0x00050fd9) bg_ai5_widget_pane_g9_ParamLimits

0xeb7e,	// (0x00050fd9) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x000522c1) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x000522c1) bg_ai5_widget_pane_g

0xebb0,	// (0x0005100b) cell_shortcut_ai5_widget_pane_ParamLimits

0xebb0,	// (0x0005100b) cell_shortcut_ai5_widget_pane

0x4ca9,	// (0x00047104) bg_cell_shortcut_ai5_widget_pane

0xebc1,	// (0x0005101c) cell_grid_ai5_widget_pane_g1

0x4ca9,	// (0x00047104) highlight_cell_shortcut_ai5_widget_pane

0x9cec,	// (0x0004c147) ai5_sk_left_pane_g1

0xebca,	// (0x00051025) ai5_sk_left_pane_g2

0xebd2,	// (0x0005102d) ai5_sk_left_pane_g3

0xebda,	// (0x00051035) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x000522d4) ai5_sk_left_pane_g

0xebe2,	// (0x0005103d) ai5_sk_left_pane_t1

0x9ce4,	// (0x0004c13f) ai5_sk_right_pane_g1

0xebf0,	// (0x0005104b) ai5_sk_right_pane_g2

0xebf8,	// (0x00051053) ai5_sk_right_pane_g3

0xec00,	// (0x0005105b) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x000522dd) ai5_sk_right_pane_g

0xec08,	// (0x00051063) ai5_sk_right_pane_t1

0x9ce4,	// (0x0004c13f) ai5_sk_middle_pane_g1

0x9cec,	// (0x0004c147) ai5_sk_middle_pane_g2

0x9d04,	// (0x0004c15f) ai5_sk_middle_pane_g3

0xebf8,	// (0x00051053) ai5_sk_middle_pane_g4

0xebd2,	// (0x0005102d) ai5_sk_middle_pane_g5

0xec16,	// (0x00051071) ai5_sk_middle_pane_g6

0xec1e,	// (0x00051079) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x000522e6) ai5_sk_middle_pane_g

0x9815,	// (0x0004bc70) aid_touch_area_size_lc0_ParamLimits

0x9815,	// (0x0004bc70) aid_touch_area_size_lc0

0x88d1,	// (0x0004ad2c) cell_hwr_candidate_pane_t1_ParamLimits

0x9831,	// (0x0004bc8c) aid_touch_navi_pane

0x9b0a,	// (0x0004bf65) status_dt_navi_pane_ParamLimits

0x9b0a,	// (0x0004bf65) status_dt_navi_pane

0x9b17,	// (0x0004bf72) status_dt_sta_pane_ParamLimits

0x9b17,	// (0x0004bf72) status_dt_sta_pane

0xec26,	// (0x00051081) dt_sta_controll_pane

0xec33,	// (0x0005108e) dt_sta_indi_pane

0xec44,	// (0x0005109f) dt_sta_title_pane

0x0b8c,	// (0x00042fe7) bg_dt_sta_indi_pane_ParamLimits

0x0b8c,	// (0x00042fe7) bg_dt_sta_indi_pane

0xec57,	// (0x000510b2) dt_sta_battery_pane

0xec5f,	// (0x000510ba) dt_sta_indi_pane_g1

0xec68,	// (0x000510c3) dt_sta_indi_pane_g2

0xec71,	// (0x000510cc) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x000522f5) dt_sta_indi_pane_g

0xec7a,	// (0x000510d5) dt_sta_signal_pane

0x0e14,	// (0x0004326f) bg_dt_sta_title_pane_ParamLimits

0x0e14,	// (0x0004326f) bg_dt_sta_title_pane

0xab1e,	// (0x0004cf79) dt_sta_title_pane_g1

0xec83,	// (0x000510de) dt_sta_title_pane_t1_ParamLimits

0xec83,	// (0x000510de) dt_sta_title_pane_t1

0x09f2,	// (0x00042e4d) bg_dt_sta_control_pane

0xec98,	// (0x000510f3) dt_sta_controll_pane_g1

0xeca1,	// (0x000510fc) bg_dt_sta_title_pane_g1

0xecaa,	// (0x00051105) bg_dt_sta_title_pane_g2

0xecb3,	// (0x0005110e) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x000522fc) bg_dt_sta_title_pane_g

0xc287,	// (0x0004e6e2) bg_dt_sta_indi_pane_g1

0xecbc,	// (0x00051117) dt_sta_signal_pane_g1

0xecc4,	// (0x0005111f) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x00052303) dt_sta_signal_pane_g

0xeccc,	// (0x00051127) dt_sta_battery_pane_g1

0xecd5,	// (0x00051130) dt_sta_battery_pane_t1

0xc287,	// (0x0004e6e2) bg_dt_sta_control_pane_g1

0x12ca,	// (0x00043725) fep_china_uni_eep_pane

0x12d2,	// (0x0004372d) fep_china_uni_entry_pane_ParamLimits

0x12e2,	// (0x0004373d) popup_fep_china_uni_window_g1_ParamLimits

0x12f2,	// (0x0004374d) popup_fep_china_uni_window_g2_ParamLimits

0x12f2,	// (0x0004374d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00051b73) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00051b73) popup_fep_china_uni_window_g

0xece4,	// (0x0005113f) fep_china_uni_eep_pane_g1

0xecec,	// (0x00051147) fep_china_uni_eep_pane_t1

0xe754,	// (0x00050baf) aid_touch_area_size_smil_player

0x9987,	// (0x0004bde2) lc0_clock_pane

0x9b6e,	// (0x0004bfc9) status_pane_g5_ParamLimits

0x9b6e,	// (0x0004bfc9) status_pane_g5

0x7c73,	// (0x0004a0ce) popup_keymap_window

0x9b2c,	// (0x0004bf87) status_icon_pane

0xe947,	// (0x00050da2) cell_ai5_widget_pane_g3_ParamLimits

0xe961,	// (0x00050dbc) cell_ai5_widget_pane_g4_ParamLimits

0xe971,	// (0x00050dcc) cell_ai5_widget_pane_g5_ParamLimits

0xe999,	// (0x00050df4) cell_ai5_widget_pane_g8_ParamLimits

0xe999,	// (0x00050df4) cell_ai5_widget_pane_g8

0xe9ad,	// (0x00050e08) cell_ai5_widget_pane_g9_ParamLimits

0xe9ad,	// (0x00050e08) cell_ai5_widget_pane_g9

0xe9c1,	// (0x00050e1c) cell_ai5_widget_pane_g10_ParamLimits

0xe9c1,	// (0x00050e1c) cell_ai5_widget_pane_g10

0xecfb,	// (0x00051156) status_icon_pane_g1

0x09f2,	// (0x00042e4d) bg_popup_sub_pane_cp13

0xed03,	// (0x0005115e) popup_keymap_window_t1

0x9766,	// (0x0004bbc1) control_pane_g6_ParamLimits

0x9766,	// (0x0004bbc1) control_pane_g6

0x9773,	// (0x0004bbce) control_pane_g7_ParamLimits

0x9773,	// (0x0004bbce) control_pane_g7

0x9780,	// (0x0004bbdb) control_pane_g8_ParamLimits

0x9780,	// (0x0004bbdb) control_pane_g8

0xec26,	// (0x00051081) dt_sta_controll_pane_ParamLimits

0xec33,	// (0x0005108e) dt_sta_indi_pane_ParamLimits

0xec44,	// (0x0005109f) dt_sta_title_pane_ParamLimits

0x0d5f,	// (0x000431ba) aid_size_touch_scroll_bar_cale

0x6749,	// (0x00048ba4) popup_discreet_window_ParamLimits

0x6749,	// (0x00048ba4) popup_discreet_window

0x67c3,	// (0x00048c1e) popup_sk_window

0xa362,	// (0x0004c7bd) bg_popup_sub_pane_cp28_ParamLimits

0xa362,	// (0x0004c7bd) bg_popup_sub_pane_cp28

0xed11,	// (0x0005116c) popup_discreet_window_g1_ParamLimits

0xed11,	// (0x0005116c) popup_discreet_window_g1

0xed31,	// (0x0005118c) popup_discreet_window_t1_ParamLimits

0xed31,	// (0x0005118c) popup_discreet_window_t1

0xed4f,	// (0x000511aa) popup_discreet_window_t2_ParamLimits

0xed4f,	// (0x000511aa) popup_discreet_window_t2

0x0002,

0xfead,	// (0x00052308) popup_discreet_window_t_ParamLimits

0xfead,	// (0x00052308) popup_discreet_window_t

0x92fe,	// (0x0004b759) popup_sk_window_g1

0x9308,	// (0x0004b763) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0005230f) popup_sk_window_g

0x9310,	// (0x0004b76b) popup_sk_window_t1

0x931e,	// (0x0004b779) popup_sk_window_t1_copy1

0xe933,	// (0x00050d8e) cell_ai5_widget_pane_g2_ParamLimits

0xeaa5,	// (0x00050f00) cell_ai5_widget_pane_t9_ParamLimits

0xeaa5,	// (0x00050f00) cell_ai5_widget_pane_t9

0x09f2,	// (0x00042e4d) main_fep_fshwr2_pane

0x932c,	// (0x0004b787) aid_fshwr2_btn_pane

0x9338,	// (0x0004b793) aid_fshwr2_syb_pane

0x9349,	// (0x0004b7a4) aid_fshwr2_txt_pane

0x9355,	// (0x0004b7b0) fshwr2_func_candi_pane

0x936d,	// (0x0004b7c8) fshwr2_hwr_syb_pane

0x9384,	// (0x0004b7df) fshwr2_icf_pane

0x09f2,	// (0x00042e4d) fshwr2_icf_bg_pane

0x93ad,	// (0x0004b808) fshwr2_icf_pane_t1_ParamLimits

0x93ad,	// (0x0004b808) fshwr2_icf_pane_t1

0x1247,	// (0x000436a2) fshwr2_func_candi_pane_g1

0xeda1,	// (0x000511fc) fshwr2_func_candi_row_pane_ParamLimits

0xeda1,	// (0x000511fc) fshwr2_func_candi_row_pane

0x93c6,	// (0x0004b821) cell_fshwr2_syb_pane_ParamLimits

0x93c6,	// (0x0004b821) cell_fshwr2_syb_pane

0xc4f7,	// (0x0004e952) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4f7,	// (0x0004e952) fshwr2_hwr_syb_pane_g1

0x09f2,	// (0x00042e4d) bg_popup_call_pane_cp01

0x93dc,	// (0x0004b837) fshwr2_func_candi_cell_pane_ParamLimits

0x93dc,	// (0x0004b837) fshwr2_func_candi_cell_pane

0xa9be,	// (0x0004ce19) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9be,	// (0x0004ce19) fshwr2_func_candi_cell_bg_pane

0x9427,	// (0x0004b882) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9427,	// (0x0004b882) fshwr2_func_candi_cell_pane_g1

0x944f,	// (0x0004b8aa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x944f,	// (0x0004b8aa) fshwr2_func_candi_cell_pane_t1

0x09f2,	// (0x00042e4d) bg_button_pane_cp08

0xedb1,	// (0x0005120c) cell_fshwr2_syb_bg_pane

0x9462,	// (0x0004b8bd) cell_fshwr2_syb_bg_pane_g1

0x946a,	// (0x0004b8c5) cell_fshwr2_syb_bg_pane_t1

0x0e14,	// (0x0004326f) main_tmo_pane

0xae57,	// (0x0004d2b2) uni_indicator_pane_g1_ParamLimits

0xae6a,	// (0x0004d2c5) uni_indicator_pane_g2_ParamLimits

0xae7c,	// (0x0004d2d7) uni_indicator_pane_g3_ParamLimits

0xae8b,	// (0x0004d2e6) uni_indicator_pane_g4_ParamLimits

0xae8b,	// (0x0004d2e6) uni_indicator_pane_g4

0xae9f,	// (0x0004d2fa) uni_indicator_pane_g5_ParamLimits

0xae9f,	// (0x0004d2fa) uni_indicator_pane_g5

0xae9f,	// (0x0004d2fa) uni_indicator_pane_g6_ParamLimits

0xae9f,	// (0x0004d2fa) uni_indicator_pane_g6

0xf91c,	// (0x00051d77) uni_indicator_pane_g_ParamLimits

0xd765,	// (0x0004fbc0) popup_tmo_note_window_ParamLimits

0xd765,	// (0x0004fbc0) popup_tmo_note_window

0x0e14,	// (0x0004326f) fshwr2_bg_pane

0x9440,	// (0x0004b89b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9440,	// (0x0004b89b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x00052314) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x00052314) fshwr2_func_candi_cell_pane_g

0xc287,	// (0x0004e6e2) bg_popup_window_pane_cp01

0x9479,	// (0x0004b8d4) bg_popup_window_pane_g1_cp01

0xedb9,	// (0x00051214) bg_popup_window_pane_cp22_ParamLimits

0xedb9,	// (0x00051214) bg_popup_window_pane_cp22

0xedc7,	// (0x00051222) listscroll_tmo_link_pane_ParamLimits

0xedc7,	// (0x00051222) listscroll_tmo_link_pane

0xee07,	// (0x00051262) popup_tmo_note_window_g1_ParamLimits

0xee07,	// (0x00051262) popup_tmo_note_window_g1

0xee14,	// (0x0005126f) tmo_note_info_pane_ParamLimits

0xee14,	// (0x0005126f) tmo_note_info_pane

0xee2e,	// (0x00051289) list_tmo_note_info_pane_g1_ParamLimits

0xee2e,	// (0x00051289) list_tmo_note_info_pane_g1

0xee45,	// (0x000512a0) list_tmo_note_info_pane_g2_ParamLimits

0xee45,	// (0x000512a0) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00052319) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00052319) list_tmo_note_info_pane_g

0xee61,	// (0x000512bc) list_tmo_note_info_text_pane_ParamLimits

0xee61,	// (0x000512bc) list_tmo_note_info_text_pane

0xeee2,	// (0x0005133d) list_tmo_link_pane

0xeeef,	// (0x0005134a) scroll_pane_cp20

0xeefc,	// (0x00051357) list_single_tmo_link_pane_ParamLimits

0xeefc,	// (0x00051357) list_single_tmo_link_pane

0xef0c,	// (0x00051367) list_single_tmo_link_pane_t1

0xef1a,	// (0x00051375) list_tmo_note_info_text_pane_t1_ParamLimits

0xef1a,	// (0x00051375) list_tmo_note_info_text_pane_t1

0x6f83,	// (0x000493de) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6f83,	// (0x000493de) aid_size_touch_scroll_bar_cp01

0x5bab,	// (0x00048006) aid_size_touch_slider_marker

0x67ab,	// (0x00048c06) popup_settings_window_ParamLimits

0x67ab,	// (0x00048c06) popup_settings_window

0x5d36,	// (0x00048191) popup_candi_list_indi_window

0x9831,	// (0x0004bc8c) aid_touch_navi_pane_ParamLimits

0x8b11,	// (0x0004af6c) rs_clock_indi_pane

0x8b1a,	// (0x0004af75) sctrl_sk_bottom_pane_ParamLimits

0x8b2b,	// (0x0004af86) sctrl_sk_top_pane_ParamLimits

0x8c12,	// (0x0004b06d) popup_fep_tooltip_window

0xe8ad,	// (0x00050d08) aid_size_cell_widget_grid_ParamLimits

0xe91e,	// (0x00050d79) cell_ai5_widget_pane_g1_ParamLimits

0xe91e,	// (0x00050d79) cell_ai5_widget_pane_g1

0xe981,	// (0x00050ddc) cell_ai5_widget_pane_g6_ParamLimits

0xe98d,	// (0x00050de8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x00052297) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00052297) cell_ai5_widget_pane_g

0xead4,	// (0x00050f2f) cell_ai5_widget_pane_t10_ParamLimits

0xead4,	// (0x00050f2f) cell_ai5_widget_pane_t10

0xeaf2,	// (0x00050f4d) grid_ai5_widget_pane_ParamLimits

0xeb8a,	// (0x00050fe5) cell_contacts_ai5_widget_pane_ParamLimits

0xeb8a,	// (0x00050fe5) cell_contacts_ai5_widget_pane

0xed64,	// (0x000511bf) popup_discreet_window_t3_ParamLimits

0xed64,	// (0x000511bf) popup_discreet_window_t3

0x9399,	// (0x0004b7f4) popup_fshwr2_char_preview_window_ParamLimits

0x9399,	// (0x0004b7f4) popup_fshwr2_char_preview_window

0xee7f,	// (0x000512da) tmo_note_info_pane_t1

0xee94,	// (0x000512ef) tmo_note_info_pane_t2

0xeea9,	// (0x00051304) tmo_note_info_pane_t3

0xeebe,	// (0x00051319) tmo_note_info_pane_t4

0xeed0,	// (0x0005132b) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0005231e) tmo_note_info_pane_t

0xeee2,	// (0x0005133d) list_tmo_link_pane_ParamLimits

0xeeef,	// (0x0005134a) scroll_pane_cp20_ParamLimits

0x09f2,	// (0x00042e4d) bg_popup_fep_char_preview_window_cp01

0xef33,	// (0x0005138e) popup_fshwr2_char_preview_window_t1

0xef41,	// (0x0005139c) popup_candi_list_indi_window_g1

0xef4a,	// (0x000513a5) bg_cell_contacts_ai5_widget_pane

0xef56,	// (0x000513b1) cell_contacts_ai5_widget_pane_g1

0xc98e,	// (0x0004ede9) cell_contacts_ai5_widget_pane_g2

0xef6b,	// (0x000513c6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00052329) cell_contacts_ai5_widget_pane_g

0xef77,	// (0x000513d2) cell_contacts_ai5_widget_pane_t1

0x0e14,	// (0x0004326f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefee,	// (0x00051449) settings_container_pane

0x4ca9,	// (0x00047104) listscroll_set_pane_copy1

0xb97d,	// (0x0004ddd8) scroll_pane_cp121_copy1

0xa10f,	// (0x0004c56a) set_content_pane_copy1

0xeffa,	// (0x00051455) aid_height_set_list_copy1_ParamLimits

0xeffa,	// (0x00051455) aid_height_set_list_copy1

0xb097,	// (0x0004d4f2) aid_size_parent_copy1_ParamLimits

0xb097,	// (0x0004d4f2) aid_size_parent_copy1

0xf006,	// (0x00051461) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf006,	// (0x00051461) button_value_adjust_pane_cp6_copy1

0x97b5,	// (0x0004bc10) list_highlight_pane_cp2_copy1_ParamLimits

0x97b5,	// (0x0004bc10) list_highlight_pane_cp2_copy1

0xf01a,	// (0x00051475) list_set_pane_copy1_ParamLimits

0xf01a,	// (0x00051475) list_set_pane_copy1

0xef89,	// (0x000513e4) main_pane_set_t1_copy1_ParamLimits

0xef89,	// (0x000513e4) main_pane_set_t1_copy1

0xefc3,	// (0x0005141e) main_pane_set_t2_copy1_ParamLimits

0xefc3,	// (0x0005141e) main_pane_set_t2_copy1

0xf0c7,	// (0x00051522) main_pane_set_t3_copy1

0xf0d5,	// (0x00051530) main_pane_set_t4_copy1

0xefe2,	// (0x0005143d) set_content_pane_g1_copy1_ParamLimits

0xefe2,	// (0x0005143d) set_content_pane_g1_copy1

0xf0e3,	// (0x0005153e) setting_code_pane_copy1

0xf0eb,	// (0x00051546) setting_slider_graphic_pane_copy1

0xf0eb,	// (0x00051546) setting_slider_pane_copy1

0xf0eb,	// (0x00051546) setting_text_pane_copy1

0xf0eb,	// (0x00051546) setting_volume_pane_copy1

0xf0e3,	// (0x0005153e) settings_code_pane_cp2_copy1

0xf0f3,	// (0x0005154e) settings_code_pane_cp_copy1_ParamLimits

0xf0f3,	// (0x0005154e) settings_code_pane_cp_copy1

0x9482,	// (0x0004b8dd) volume_set_pane_copy1

0xf107,	// (0x00051562) volume_set_pane_g10_copy1

0xf10f,	// (0x0005156a) volume_set_pane_g1_copy1

0xf117,	// (0x00051572) volume_set_pane_g2_copy1

0xf11f,	// (0x0005157a) volume_set_pane_g3_copy1

0xf127,	// (0x00051582) volume_set_pane_g4_copy1

0xf12f,	// (0x0005158a) volume_set_pane_g5_copy1

0xf137,	// (0x00051592) volume_set_pane_g6_copy1

0xf13f,	// (0x0005159a) volume_set_pane_g7_copy1

0xf147,	// (0x000515a2) volume_set_pane_g8_copy1

0xf14f,	// (0x000515aa) volume_set_pane_g9_copy1

0x0a62,	// (0x00042ebd) bg_set_opt_pane_cp_copy1_ParamLimits

0x0a62,	// (0x00042ebd) bg_set_opt_pane_cp_copy1

0x948a,	// (0x0004b8e5) setting_slider_pane_t1_copy1_ParamLimits

0x948a,	// (0x0004b8e5) setting_slider_pane_t1_copy1

0x94a8,	// (0x0004b903) setting_slider_pane_t2_copy1_ParamLimits

0x94a8,	// (0x0004b903) setting_slider_pane_t2_copy1

0x94c2,	// (0x0004b91d) setting_slider_pane_t3_copy1_ParamLimits

0x94c2,	// (0x0004b91d) setting_slider_pane_t3_copy1

0x94da,	// (0x0004b935) slider_set_pane_copy1_ParamLimits

0x94da,	// (0x0004b935) slider_set_pane_copy1

0x0e6c,	// (0x000432c7) set_opt_bg_pane_g1_copy2

0x0e74,	// (0x000432cf) set_opt_bg_pane_g2_copy2

0xf157,	// (0x000515b2) set_opt_bg_pane_g3_copy2

0x0e84,	// (0x000432df) set_opt_bg_pane_g4_copy2

0x0e8c,	// (0x000432e7) set_opt_bg_pane_g5_copy2

0x0e94,	// (0x000432ef) set_opt_bg_pane_g6_copy2

0xf161,	// (0x000515bc) set_opt_bg_pane_g7_copy2

0xf169,	// (0x000515c4) set_opt_bg_pane_g8_copy2

0xf173,	// (0x000515ce) set_opt_bg_pane_g9_copy2

0x94f0,	// (0x0004b94b) aid_size_touch_slider_mark_copy1_ParamLimits

0x94f0,	// (0x0004b94b) aid_size_touch_slider_mark_copy1

0xf17d,	// (0x000515d8) slider_set_pane_g1_copy1

0x9504,	// (0x0004b95f) slider_set_pane_g2_copy1

0x83b5,	// (0x0004a810) slider_set_pane_g3_copy1_ParamLimits

0x83b5,	// (0x0004a810) slider_set_pane_g3_copy1

0x83c9,	// (0x0004a824) slider_set_pane_g4_copy1_ParamLimits

0x83c9,	// (0x0004a824) slider_set_pane_g4_copy1

0x83e1,	// (0x0004a83c) slider_set_pane_g5_copy1_ParamLimits

0x83e1,	// (0x0004a83c) slider_set_pane_g5_copy1

0x83b5,	// (0x0004a810) slider_set_pane_g6_copy1_ParamLimits

0x83b5,	// (0x0004a810) slider_set_pane_g6_copy1

0x950c,	// (0x0004b967) slider_set_pane_g7_copy1_ParamLimits

0x950c,	// (0x0004b967) slider_set_pane_g7_copy1

0x0a06,	// (0x00042e61) bg_set_opt_pane_cp2_copy1

0xf186,	// (0x000515e1) setting_slider_graphic_pane_g1_copy1

0xf18f,	// (0x000515ea) setting_slider_graphic_pane_t1_copy1

0xf19f,	// (0x000515fa) setting_slider_graphic_pane_t2_copy1

0xf1af,	// (0x0005160a) slider_set_pane_cp_copy1

0xf1bf,	// (0x0005161a) input_focus_pane_cp1_copy1

0xf1c8,	// (0x00051623) list_set_text_pane_copy1

0xf1d0,	// (0x0005162b) setting_text_pane_g1_copy1

0x64a4,	// (0x000488ff) set_text_pane_t1_copy1

0xf1bf,	// (0x0005161a) input_focus_pane_cp2_copy1

0xf1d0,	// (0x0005162b) setting_code_pane_g1_copy1

0xf1d9,	// (0x00051634) setting_code_pane_t1_copy1

0xf1e7,	// (0x00051642) list_set_graphic_pane_copy1

0x0a06,	// (0x00042e61) bg_set_opt_pane_cp4_copy1

0x4a2f,	// (0x00046e8a) list_set_graphic_pane_g1_copy1_ParamLimits

0x4a2f,	// (0x00046e8a) list_set_graphic_pane_g1_copy1

0xf1fb,	// (0x00051656) list_set_graphic_pane_g2_copy1

0x4a47,	// (0x00046ea2) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a47,	// (0x00046ea2) list_set_graphic_pane_t1_copy1

0xc287,	// (0x0004e6e2) rs_clock_indi_pane_g1

0xf203,	// (0x0005165e) rs_clock_indi_pane_t1

0xf211,	// (0x0005166c) rs_indi_pane

0xf219,	// (0x00051674) rs_indi_pane_g1

0xf222,	// (0x0005167d) rs_indi_pane_g2

0xef41,	// (0x0005139c) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x00052330) rs_indi_pane_g

0x4ca9,	// (0x00047104) bg_popup_preview_window_pane_cp03

0xf22b,	// (0x00051686) popup_fep_tooltip_window_t1

0xcf16,	// (0x0004f371) popup_note2_window_g2_ParamLimits

0xcf16,	// (0x0004f371) popup_note2_window_g2

0x0001,

0xfc75,	// (0x000520d0) popup_note2_window_g_ParamLimits

0xfc75,	// (0x000520d0) popup_note2_window_g

0xd403,	// (0x0004f85e) bg_popup_sub_pane_cp11_ParamLimits

0xd410,	// (0x0004f86b) cell_ai3_links_pane_g1_ParamLimits

0xd427,	// (0x0004f882) cell_ai3_links_pane_t1

0x64a4,	// (0x000488ff) set_text_pane_t1_copy1_ParamLimits

0x4be8,	// (0x00047043) cell_graphic_popup_pane_cp2_ParamLimits

0x4be8,	// (0x00047043) cell_graphic_popup_pane_cp2

0xf239,	// (0x00051694) cell_graphic_popup_pane_g1_cp2

0x0ce2,	// (0x0004313d) cell_graphic_popup_pane_g2_cp2

0xf241,	// (0x0005169c) cell_graphic_popup_pane_g3_cp2

0xf249,	// (0x000516a4) cell_graphic_popup_pane_t2_cp2

0x0cf3,	// (0x0004314e) grid_highlight_pane_cp3_cp2

0x10c4,	// (0x0004351f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0e14,	// (0x0004326f) main_tmo_pane_ParamLimits

0xd759,	// (0x0004fbb4) popup_tmo_big_image_note_window

0xe90d,	// (0x00050d68) cell_ai5_widget_list_pane

0xe915,	// (0x00050d70) cell_ai5_widget_lrg_icon_pane

0xee7f,	// (0x000512da) tmo_note_info_pane_t1_ParamLimits

0xee94,	// (0x000512ef) tmo_note_info_pane_t2_ParamLimits

0xeea9,	// (0x00051304) tmo_note_info_pane_t3_ParamLimits

0xeebe,	// (0x00051319) tmo_note_info_pane_t4_ParamLimits

0xeed0,	// (0x0005132b) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0005231e) tmo_note_info_pane_t_ParamLimits

0xefee,	// (0x00051449) settings_container_pane_ParamLimits

0xf1b7,	// (0x00051612) indicator_popup_pane_cp5

0xf1b7,	// (0x00051612) indicator_popup_pane_cp6

0xf1e7,	// (0x00051642) list_set_graphic_pane_copy1_ParamLimits

0x09f2,	// (0x00042e4d) bg_popup_window_pane_cp23

0xf257,	// (0x000516b2) popup_tmo_big_image_note_window_g1

0xf260,	// (0x000516bb) popup_tmo_big_image_note_window_t1

0xf270,	// (0x000516cb) popup_tmo_big_image_note_window_t2

0xf280,	// (0x000516db) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x00052337) popup_tmo_big_image_note_window_t

0xc287,	// (0x0004e6e2) cell_ai5_widget_lrg_icon_pane_g1

0xf290,	// (0x000516eb) cell_ai5_widget_lrg_icon_pane_t1

0xf29e,	// (0x000516f9) cell_ai5_widget_list_row_pane_ParamLimits

0xf29e,	// (0x000516f9) cell_ai5_widget_list_row_pane

0xf2b5,	// (0x00051710) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2b5,	// (0x00051710) cell_ai5_widget_list_row_pane_g1

0xf2c2,	// (0x0005171d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2c2,	// (0x0005171d) cell_ai5_widget_list_row_pane_t1

0xf2ed,	// (0x00051748) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ed,	// (0x00051748) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0005233e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0005233e) cell_ai5_widget_list_row_pane_t

0x09f2,	// (0x00042e4d) main_fep_vtchi_ss_pane

0xf335,	// (0x00051790) popup_fep_char_pre_window

0xf33d,	// (0x00051798) popup_fep_ituss_window

0xf35e,	// (0x000517b9) popup_fep_vkbss_window

0xf388,	// (0x000517e3) grid_vkbss_keypad_pane_ParamLimits

0xf388,	// (0x000517e3) grid_vkbss_keypad_pane

0xf398,	// (0x000517f3) ituss_keypad_pane

0x952e,	// (0x0004b989) aid_vkbss_key_offset_ParamLimits

0x952e,	// (0x0004b989) aid_vkbss_key_offset

0x953a,	// (0x0004b995) cell_vkbss_key_pane_ParamLimits

0x953a,	// (0x0004b995) cell_vkbss_key_pane

0x9b48,	// (0x0004bfa3) bg_cell_vkbss_key_g1_ParamLimits

0x9b48,	// (0x0004bfa3) bg_cell_vkbss_key_g1

0xf3a7,	// (0x00051802) cell_vkbss_key_3p_pane_ParamLimits

0xf3a7,	// (0x00051802) cell_vkbss_key_3p_pane

0xf3bb,	// (0x00051816) cell_vkbss_key_g1_ParamLimits

0xf3bb,	// (0x00051816) cell_vkbss_key_g1

0xf3cf,	// (0x0005182a) cell_vkbss_key_t1_ParamLimits

0xf3cf,	// (0x0005182a) cell_vkbss_key_t1

0x9550,	// (0x0004b9ab) cell_ituss_key_pane_ParamLimits

0x9550,	// (0x0004b9ab) cell_ituss_key_pane

0xf3fa,	// (0x00051855) bg_cell_ituss_key_g1_ParamLimits

0xf3fa,	// (0x00051855) bg_cell_ituss_key_g1

0xf406,	// (0x00051861) cell_ituss_key_pane_g1_ParamLimits

0xf406,	// (0x00051861) cell_ituss_key_pane_g1

0x9561,	// (0x0004b9bc) cell_ituss_key_pane_g2_ParamLimits

0x9561,	// (0x0004b9bc) cell_ituss_key_pane_g2

0x0002,

0xfeea,	// (0x00052345) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x00052345) cell_ituss_key_pane_g

0x958d,	// (0x0004b9e8) cell_ituss_key_t1_ParamLimits

0x958d,	// (0x0004b9e8) cell_ituss_key_t1

0x95c7,	// (0x0004ba22) cell_ituss_key_t2_ParamLimits

0x95c7,	// (0x0004ba22) cell_ituss_key_t2

0x95f8,	// (0x0004ba53) cell_ituss_key_t3_ParamLimits

0x95f8,	// (0x0004ba53) cell_ituss_key_t3

0x95c7,	// (0x0004ba22) cell_ituss_key_t4_ParamLimits

0x95c7,	// (0x0004ba22) cell_ituss_key_t4

0x0004,

0xfef1,	// (0x0005234c) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x0005234c) cell_ituss_key_t

0xf42c,	// (0x00051887) cell_vkbss_key_3p_pane_g1

0xf434,	// (0x0005188f) cell_vkbss_key_3p_pane_g2

0xf43c,	// (0x00051897) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x00052357) cell_vkbss_key_3p_pane_g

0x4ca9,	// (0x00047104) bg_popup_fep_char_preview_window_cp02

0xf444,	// (0x0005189f) popup_fep_char_pre_window_t1

0xe89a,	// (0x00050cf5) main_ai5_sk_pane

0xef4a,	// (0x000513a5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef56,	// (0x000513b1) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc98e,	// (0x0004ede9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef6b,	// (0x000513c6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00052329) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef77,	// (0x000513d2) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0e14,	// (0x0004326f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf452,	// (0x000518ad) main_ai5_sk_pane_g1

0xa1a3,	// (0x0004c5fe) popup_query_code_window_g1

0xf353,	// (0x000517ae) popup_fep_vkb_icf_pane

0xf372,	// (0x000517cd) popup_fep_vtchi_icf_pane

0xf45b,	// (0x000518b6) bg_icf_pane

0xf467,	// (0x000518c2) list_vkb_icf_pane

0xf476,	// (0x000518d1) bg_icf_pane_cp01

0xf489,	// (0x000518e4) vtchi_icf_list_pane

0xf499,	// (0x000518f4) list_vkb_icf_pane_t1_ParamLimits

0xf499,	// (0x000518f4) list_vkb_icf_pane_t1

0xf4b0,	// (0x0005190b) vtchi_icf_list_pane_t1_ParamLimits

0xf4b0,	// (0x0005190b) vtchi_icf_list_pane_t1

0xf33d,	// (0x00051798) popup_fep_ituss_window_ParamLimits

0xf372,	// (0x000517cd) popup_fep_vtchi_icf_pane_ParamLimits

0xf398,	// (0x000517f3) ituss_keypad_pane_ParamLimits

0x9522,	// (0x0004b97d) ituss_sks_pane

0xf45b,	// (0x000518b6) bg_icf_pane_ParamLimits

0xf315,	// (0x00051770) icf_edit_indi_pane_ParamLimits

0xf315,	// (0x00051770) icf_edit_indi_pane

0xf467,	// (0x000518c2) list_vkb_icf_pane_ParamLimits

0xf476,	// (0x000518d1) bg_icf_pane_cp01_ParamLimits

0xf328,	// (0x00051783) icf_edit_indi_pane_cp01_ParamLimits

0xf328,	// (0x00051783) icf_edit_indi_pane_cp01

0xf491,	// (0x000518ec) vtchi_query_pane

0xe724,	// (0x00050b7f) icf_edit_indi_pane_g1_ParamLimits

0xe724,	// (0x00050b7f) icf_edit_indi_pane_g1

0xf525,	// (0x00051980) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x00051980) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x0005236f) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x0005236f) icf_edit_indi_pane_g

0xf537,	// (0x00051992) icf_edit_indi_pane_t1

0xf4ce,	// (0x00051929) bg_input_focus_pane_cp042

0x0d56,	// (0x000431b1) vtchi_button_pane

0xf4d7,	// (0x00051932) vtchi_query_pane_t1

0xf4e5,	// (0x00051940) vtchi_query_pane_t2

0xf4f3,	// (0x0005194e) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x0005235e) vtchi_query_pane_t

0x09f2,	// (0x00042e4d) bg_button_pane_cp13

0xf501,	// (0x0005195c) vtchi_button_pane_g1

0x963b,	// (0x0004ba96) ituss_sks_pane_g1

0x9646,	// (0x0004baa1) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x00052365) ituss_sks_pane_g

0xf509,	// (0x00051964) ituss_sks_pane_t1

0xf517,	// (0x00051972) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x0005236a) ituss_sks_pane_t

0xbcf8,	// (0x0004e153) indicator_nsta_pane_cp_g1

0xbd00,	// (0x0004e15b) indicator_nsta_pane_cp_g2

0xbd08,	// (0x0004e163) indicator_nsta_pane_cp_g3

0xbcf8,	// (0x0004e153) indicator_nsta_pane_cp_g4

0xbd00,	// (0x0004e15b) indicator_nsta_pane_cp_g5

0xbd08,	// (0x0004e163) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x00051f1a) indicator_nsta_pane_cp_g

0xe45a,	// (0x000508b5) cell_graphic2_pane_t2_ParamLimits

0xe45a,	// (0x000508b5) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x00052220) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x00052220) cell_graphic2_pane_t

0xe487,	// (0x000508e2) cell_graphic2_control_pane_t1

0x7429,	// (0x00049884) signal_pane_g3_ParamLimits

0x7429,	// (0x00049884) signal_pane_g3

0x743b,	// (0x00049896) signal_pane_g4_ParamLimits

0x743b,	// (0x00049896) signal_pane_g4

0xf2ff,	// (0x0005175a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2ff,	// (0x0005175a) cell_ai5_widget_list_row_pane_t3

0xf41a,	// (0x00051875) cell_ituss_key_pane_t1_ParamLimits

0xf41a,	// (0x00051875) cell_ituss_key_pane_t1

0x9dde,	// (0x0004c239) form_field_data_wide_pane_vc_t2_ParamLimits

0x9dde,	// (0x0004c239) form_field_data_wide_pane_vc_t2

0x9df2,	// (0x0004c24d) form_field_data_wide_pane_vc_t3_ParamLimits

0x9df2,	// (0x0004c24d) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00051c5f) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00051c5f) form_field_data_wide_pane_vc_t

0xb9bf,	// (0x0004de1a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9bf,	// (0x0004de1a) form_field_slider_wide_pane_vc_t3

0xba9d,	// (0x0004def8) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba9d,	// (0x0004def8) form_field_popup_wide_pane_vc_t2

0xbab4,	// (0x0004df0f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbab4,	// (0x0004df0f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x00051f09) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x00051f09) form_field_popup_wide_pane_vc_t

0x932c,	// (0x0004b787) aid_fshwr2_btn_pane_ParamLimits

0x9338,	// (0x0004b793) aid_fshwr2_syb_pane_ParamLimits

0x9349,	// (0x0004b7a4) aid_fshwr2_txt_pane_ParamLimits

0x0e14,	// (0x0004326f) fshwr2_bg_pane_ParamLimits

0x9355,	// (0x0004b7b0) fshwr2_func_candi_pane_ParamLimits

0x936d,	// (0x0004b7c8) fshwr2_hwr_syb_pane_ParamLimits

0x9384,	// (0x0004b7df) fshwr2_icf_pane_ParamLimits

0x863d,	// (0x0004aa98) list_double_graphic_pane_vc_g4_ParamLimits

0x863d,	// (0x0004aa98) list_double_graphic_pane_vc_g4

0x9581,	// (0x0004b9dc) cell_ituss_key_pane_g3_ParamLimits

0x9581,	// (0x0004b9dc) cell_ituss_key_pane_g3

0x9629,	// (0x0004ba84) cell_ituss_key_t5_ParamLimits

0x9629,	// (0x0004ba84) cell_ituss_key_t5

0xf35e,	// (0x000517b9) popup_fep_vkbss_window_ParamLimits

0xe8a4,	// (0x00050cff) aid_cell_ai5_quarter

0xf537,	// (0x00051992) icf_edit_indi_pane_t1_ParamLimits

0x6b2f,	// (0x00048f8a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6b2f,	// (0x00048f8a) aid_tch_indicator_popup_pane_cp2

0x6b42,	// (0x00048f9d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6b42,	// (0x00048f9d) aid_tch_query_popup_data_pane_cp2

0xa14b,	// (0x0004c5a6) aid_tch_query_popup_pane_ParamLimits

0xa14b,	// (0x0004c5a6) aid_tch_query_popup_pane

0xa14b,	// (0x0004c5a6) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa14b,	// (0x0004c5a6) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
