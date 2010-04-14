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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001f58b };

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
0xbe35,	// (0x0002b3c0) Screen

0xbe41,	// (0x0002b3cc) application_window_ParamLimits

0xbe41,	// (0x0002b3cc) application_window

0x35d4,	// (0x00022b5f) screen_g1

0xbe79,	// (0x0002b404) area_bottom_pane_ParamLimits

0xbe79,	// (0x0002b404) area_bottom_pane

0x12e6,	// (0x00020871) area_top_pane_ParamLimits

0x12e6,	// (0x00020871) area_top_pane

0x137a,	// (0x00020905) main_pane_ParamLimits

0x137a,	// (0x00020905) main_pane

0x35de,	// (0x00022b69) misc_graphics

0xd66f,	// (0x0002cbfa) battery_pane_ParamLimits

0xd66f,	// (0x0002cbfa) battery_pane

0x5c65,	// (0x000251f0) bg_status_flat_pane_g8

0x5c6d,	// (0x000251f8) bg_status_flat_pane_g9

0x5055,	// (0x000245e0) context_pane_ParamLimits

0x5055,	// (0x000245e0) context_pane

0xd7da,	// (0x0002cd65) navi_pane_ParamLimits

0xd7da,	// (0x0002cd65) navi_pane

0xd858,	// (0x0002cde3) signal_pane_ParamLimits

0xd858,	// (0x0002cde3) signal_pane

0x0008,

0xf86d,	// (0x0002edf8) bg_status_flat_pane_g

0xd8e8,	// (0x0002ce73) status_pane_g1_ParamLimits

0xd8e8,	// (0x0002ce73) status_pane_g1

0xd8fe,	// (0x0002ce89) status_pane_g2_ParamLimits

0xd8fe,	// (0x0002ce89) status_pane_g2

0x527c,	// (0x00024807) status_pane_g3_ParamLimits

0x527c,	// (0x00024807) status_pane_g3

0x0004,

0xf7a0,	// (0x0002ed2b) status_pane_g_ParamLimits

0xf7a0,	// (0x0002ed2b) status_pane_g

0xd90a,	// (0x0002ce95) title_pane_ParamLimits

0xd90a,	// (0x0002ce95) title_pane

0xd96d,	// (0x0002cef8) uni_indicator_pane_ParamLimits

0xd96d,	// (0x0002cef8) uni_indicator_pane

0x4eb7,	// (0x00024442) bg_list_pane_ParamLimits

0x4eb7,	// (0x00024442) bg_list_pane

0xd5e2,	// (0x0002cb6d) find_pane

0xc294,	// (0x0002b81f) listscroll_app_pane_ParamLimits

0xc294,	// (0x0002b81f) listscroll_app_pane

0x4ee3,	// (0x0002446e) listscroll_form_pane

0xc2a4,	// (0x0002b82f) listscroll_gen_pane_ParamLimits

0xc2a4,	// (0x0002b82f) listscroll_gen_pane

0x1c45,	// (0x000211d0) listscroll_set_pane

0x67e7,	// (0x00025d72) main_idle_act_pane

0x4bbf,	// (0x0002414a) main_idle_trad_pane

0x4bbf,	// (0x0002414a) main_list_empty_pane

0x4efd,	// (0x00024488) main_midp_pane

0x4f09,	// (0x00024494) main_pane_g1_ParamLimits

0x4f09,	// (0x00024494) main_pane_g1

0xc2b8,	// (0x0002b843) popup_ai_message_window_ParamLimits

0xc2b8,	// (0x0002b843) popup_ai_message_window

0xc349,	// (0x0002b8d4) popup_fep_china_uni_window_ParamLimits

0xc349,	// (0x0002b8d4) popup_fep_china_uni_window

0x1d4f,	// (0x000212da) popup_fep_japan_candidate_window_ParamLimits

0x1d4f,	// (0x000212da) popup_fep_japan_candidate_window

0x1d6f,	// (0x000212fa) popup_fep_japan_predictive_window_ParamLimits

0x1d6f,	// (0x000212fa) popup_fep_japan_predictive_window

0xc3a5,	// (0x0002b930) popup_find_window

0xc3c2,	// (0x0002b94d) popup_grid_graphic_window_ParamLimits

0xc3c2,	// (0x0002b94d) popup_grid_graphic_window

0x1dd6,	// (0x00021361) popup_large_graphic_colour_window

0xc460,	// (0x0002b9eb) popup_menu_window_ParamLimits

0xc460,	// (0x0002b9eb) popup_menu_window

0xc632,	// (0x0002bbbd) popup_note_image_window

0xc5f8,	// (0x0002bb83) popup_note_wait_window_ParamLimits

0xc5f8,	// (0x0002bb83) popup_note_wait_window

0xc64a,	// (0x0002bbd5) popup_note_window_ParamLimits

0xc64a,	// (0x0002bbd5) popup_note_window

0xc6f0,	// (0x0002bc7b) popup_query_code_window_ParamLimits

0xc6f0,	// (0x0002bc7b) popup_query_code_window

0x201e,	// (0x000215a9) popup_query_data_code_window_ParamLimits

0x201e,	// (0x000215a9) popup_query_data_code_window

0xc72a,	// (0x0002bcb5) popup_query_data_window_ParamLimits

0xc72a,	// (0x0002bcb5) popup_query_data_window

0xc7ac,	// (0x0002bd37) popup_query_sat_info_window_ParamLimits

0xc7ac,	// (0x0002bd37) popup_query_sat_info_window

0xc843,	// (0x0002bdce) popup_snote_single_graphic_window_ParamLimits

0xc843,	// (0x0002bdce) popup_snote_single_graphic_window

0xc843,	// (0x0002bdce) popup_snote_single_text_window_ParamLimits

0xc843,	// (0x0002bdce) popup_snote_single_text_window

0x20a5,	// (0x00021630) popup_sub_window_general

0x21d5,	// (0x00021760) popup_window_general_ParamLimits

0x21d5,	// (0x00021760) popup_window_general

0x4f17,	// (0x000244a2) power_save_pane

0xc123,	// (0x0002b6ae) control_pane_g1_ParamLimits

0xc123,	// (0x0002b6ae) control_pane_g1

0xc14c,	// (0x0002b6d7) control_pane_g2_ParamLimits

0xc14c,	// (0x0002b6d7) control_pane_g2

0x4e7a,	// (0x00024405) control_pane_g3_ParamLimits

0x4e7a,	// (0x00024405) control_pane_g3

0x0007,

0xf788,	// (0x0002ed13) control_pane_g_ParamLimits

0xf788,	// (0x0002ed13) control_pane_g

0xc18d,	// (0x0002b718) control_pane_t1_ParamLimits

0xc18d,	// (0x0002b718) control_pane_t1

0xc1eb,	// (0x0002b776) control_pane_t2_ParamLimits

0xc1eb,	// (0x0002b776) control_pane_t2

0x0002,

0xf799,	// (0x0002ed24) control_pane_t_ParamLimits

0xf799,	// (0x0002ed24) control_pane_t

0xd514,	// (0x0002ca9f) navi_navi_volume_pane_cp1

0xd51c,	// (0x0002caa7) status_small_icon_pane

0x4daf,	// (0x0002433a) status_small_pane_g1_ParamLimits

0x4daf,	// (0x0002433a) status_small_pane_g1

0xd524,	// (0x0002caaf) status_small_pane_g2_ParamLimits

0xd524,	// (0x0002caaf) status_small_pane_g2

0xd530,	// (0x0002cabb) status_small_pane_g3_ParamLimits

0xd530,	// (0x0002cabb) status_small_pane_g3

0xd53c,	// (0x0002cac7) status_small_pane_g4_ParamLimits

0xd53c,	// (0x0002cac7) status_small_pane_g4

0xd548,	// (0x0002cad3) status_small_pane_g5_ParamLimits

0xd548,	// (0x0002cad3) status_small_pane_g5

0xd556,	// (0x0002cae1) status_small_pane_g6_ParamLimits

0xd556,	// (0x0002cae1) status_small_pane_g6

0x0007,

0xf777,	// (0x0002ed02) status_small_pane_g_ParamLimits

0xf777,	// (0x0002ed02) status_small_pane_g

0xd585,	// (0x0002cb10) status_small_pane_t1

0xd5a7,	// (0x0002cb32) status_small_wait_pane_ParamLimits

0xd5a7,	// (0x0002cb32) status_small_wait_pane

0xd3bb,	// (0x0002c946) aid_levels_signal_ParamLimits

0xd3bb,	// (0x0002c946) aid_levels_signal

0xd3d3,	// (0x0002c95e) signal_pane_g1_ParamLimits

0xd3d3,	// (0x0002c95e) signal_pane_g1

0xd3ee,	// (0x0002c979) signal_pane_g2_ParamLimits

0xd3ee,	// (0x0002c979) signal_pane_g2

0x0003,

0xf708,	// (0x0002ec93) signal_pane_g_ParamLimits

0xf708,	// (0x0002ec93) signal_pane_g

0x4693,	// (0x00023c1e) context_pane_g1

0xc057,	// (0x0002b5e2) title_pane_g1

0xc08e,	// (0x0002b619) title_pane_t1

0x3686,	// (0x00022c11) title_pane_t2

0x36ac,	// (0x00022c37) title_pane_t3

0x0002,

0xf557,	// (0x0002eae2) title_pane_t

0xd995,	// (0x0002cf20) aid_levels_battery_ParamLimits

0xd995,	// (0x0002cf20) aid_levels_battery

0xd9b1,	// (0x0002cf3c) battery_pane_g1_ParamLimits

0xd9b1,	// (0x0002cf3c) battery_pane_g1

0xd9ce,	// (0x0002cf59) battery_pane_g2_ParamLimits

0xd9ce,	// (0x0002cf59) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002ed36) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002ed36) battery_pane_g

0xdbdb,	// (0x0002d166) uni_indicator_pane_g1

0xdbf1,	// (0x0002d17c) uni_indicator_pane_g2

0xdc07,	// (0x0002d192) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002eea0) uni_indicator_pane_g

0x4a31,	// (0x00023fbc) navi_icon_pane_ParamLimits

0x4a31,	// (0x00023fbc) navi_icon_pane

0x496f,	// (0x00023efa) navi_midp_pane

0x4a4d,	// (0x00023fd8) navi_navi_pane

0x4a57,	// (0x00023fe2) navi_text_pane_ParamLimits

0x4a57,	// (0x00023fe2) navi_text_pane

0x35d4,	// (0x00022b5f) status_small_wait_pane_g1

0x3adb,	// (0x00023066) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002ee9b) status_small_wait_pane_g

0x62c0,	// (0x0002584b) navi_navi_icon_text_pane

0x62c8,	// (0x00025853) navi_navi_pane_g1_ParamLimits

0x62c8,	// (0x00025853) navi_navi_pane_g1

0x62da,	// (0x00025865) navi_navi_pane_g2_ParamLimits

0x62da,	// (0x00025865) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002ee69) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002ee69) navi_navi_pane_g

0x62ec,	// (0x00025877) navi_navi_tabs_pane

0x62f5,	// (0x00025880) navi_navi_text_pane

0x62c0,	// (0x0002584b) navi_navi_volume_pane

0x629c,	// (0x00025827) navi_text_pane_t1

0x6290,	// (0x0002581b) navi_icon_pane_g1

0x61e3,	// (0x0002576e) navi_navi_text_pane_t1

0x245f,	// (0x000219ea) navi_navi_volume_pane_g1

0x2467,	// (0x000219f2) volume_small_pane

0x6149,	// (0x000256d4) navi_navi_icon_text_pane_g1

0x6151,	// (0x000256dc) navi_navi_icon_text_pane_t1

0x4a4d,	// (0x00023fd8) navi_tabs_2_long_pane

0x4a4d,	// (0x00023fd8) navi_tabs_2_pane

0x4a4d,	// (0x00023fd8) navi_tabs_3_long_pane

0x4a4d,	// (0x00023fd8) navi_tabs_3_pane

0x4a4d,	// (0x00023fd8) navi_tabs_4_pane

0x243f,	// (0x000219ca) tabs_2_active_pane_ParamLimits

0x243f,	// (0x000219ca) tabs_2_active_pane

0x244f,	// (0x000219da) tabs_2_passive_pane_ParamLimits

0x244f,	// (0x000219da) tabs_2_passive_pane

0x240d,	// (0x00021998) tabs_3_active_pane_ParamLimits

0x240d,	// (0x00021998) tabs_3_active_pane

0x241d,	// (0x000219a8) tabs_3_passive_pane_ParamLimits

0x241d,	// (0x000219a8) tabs_3_passive_pane

0x242e,	// (0x000219b9) tabs_3_passive_pane_cp_ParamLimits

0x242e,	// (0x000219b9) tabs_3_passive_pane_cp

0x23c9,	// (0x00021954) tabs_4_active_pane_ParamLimits

0x23c9,	// (0x00021954) tabs_4_active_pane

0x23da,	// (0x00021965) tabs_4_passive_pane_ParamLimits

0x23da,	// (0x00021965) tabs_4_passive_pane

0x23eb,	// (0x00021976) tabs_4_passive_pane_cp_ParamLimits

0x23eb,	// (0x00021976) tabs_4_passive_pane_cp

0x23fc,	// (0x00021987) tabs_4_passive_pane_cp2_ParamLimits

0x23fc,	// (0x00021987) tabs_4_passive_pane_cp2

0x23a5,	// (0x00021930) tabs_2_long_active_pane_ParamLimits

0x23a5,	// (0x00021930) tabs_2_long_active_pane

0x23b7,	// (0x00021942) tabs_2_long_passive_pane_ParamLimits

0x23b7,	// (0x00021942) tabs_2_long_passive_pane

0x2366,	// (0x000218f1) tabs_3_long_active_pane_ParamLimits

0x2366,	// (0x000218f1) tabs_3_long_active_pane

0x2379,	// (0x00021904) tabs_3_long_passive_pane_ParamLimits

0x2379,	// (0x00021904) tabs_3_long_passive_pane

0x2392,	// (0x0002191d) tabs_3_long_passive_pane_cp_ParamLimits

0x2392,	// (0x0002191d) tabs_3_long_passive_pane_cp

0x230c,	// (0x00021897) volume_small_pane_g1

0x2315,	// (0x000218a0) volume_small_pane_g2

0x231e,	// (0x000218a9) volume_small_pane_g3

0x2327,	// (0x000218b2) volume_small_pane_g4

0x2330,	// (0x000218bb) volume_small_pane_g5

0x2339,	// (0x000218c4) volume_small_pane_g6

0x2342,	// (0x000218cd) volume_small_pane_g7

0x234b,	// (0x000218d6) volume_small_pane_g8

0x2354,	// (0x000218df) volume_small_pane_g9

0x235d,	// (0x000218e8) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002ee35) volume_small_pane_g

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp2_ParamLimits

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp2

0x36cc,	// (0x00022c57) tabs_3_active_pane_g1

0xcfe6,	// (0x0002c571) tabs_3_active_pane_t1

0x3939,	// (0x00022ec4) bg_passive_tab_pane_cp2_ParamLimits

0x3939,	// (0x00022ec4) bg_passive_tab_pane_cp2

0x36cc,	// (0x00022c57) tabs_3_passive_pane_g1

0xcfe6,	// (0x0002c571) tabs_3_passive_pane_t1

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp3_ParamLimits

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp3

0x36e6,	// (0x00022c71) tabs_4_active_pane_g1

0xcff8,	// (0x0002c583) tabs_4_active_pane_t1

0x3939,	// (0x00022ec4) bg_passive_tab_pane_cp3_ParamLimits

0x3939,	// (0x00022ec4) bg_passive_tab_pane_cp3

0x36e6,	// (0x00022c71) tabs_4_1_passive_pane_g1

0xcff8,	// (0x0002c583) tabs_4_1_passive_pane_t1

0x4efd,	// (0x00024488) list_highlight_pane_cp2

0xdc8f,	// (0x0002d21a) list_set_pane_ParamLimits

0xdc8f,	// (0x0002d21a) list_set_pane

0xdd29,	// (0x0002d2b4) main_pane_set_t1_ParamLimits

0xdd29,	// (0x0002d2b4) main_pane_set_t1

0xdd49,	// (0x0002d2d4) main_pane_set_t2_ParamLimits

0xdd49,	// (0x0002d2d4) main_pane_set_t2

0xdd5d,	// (0x0002d2e8) main_pane_set_t3_ParamLimits

0xdd5d,	// (0x0002d2e8) main_pane_set_t3

0xdd6f,	// (0x0002d2fa) main_pane_set_t4_ParamLimits

0xdd6f,	// (0x0002d2fa) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002ef05) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002ef05) main_pane_set_t

0xdd81,	// (0x0002d30c) setting_code_pane

0xdd8b,	// (0x0002d316) setting_slider_graphic_pane

0xdd8b,	// (0x0002d316) setting_slider_pane

0xdd8b,	// (0x0002d316) setting_text_pane

0xdd8b,	// (0x0002d316) setting_volume_pane

0x15c9,	// (0x00020b54) volume_set_pane

0x36be,	// (0x00022c49) bg_set_opt_pane_cp

0x15d1,	// (0x00020b5c) setting_slider_pane_t1

0x15ea,	// (0x00020b75) setting_slider_pane_t2

0x1604,	// (0x00020b8f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002eae9) setting_slider_pane_t

0x161c,	// (0x00020ba7) slider_set_pane

0x35de,	// (0x00022b69) bg_set_opt_pane_cp2

0x3700,	// (0x00022c8b) setting_slider_graphic_pane_g1

0x1632,	// (0x00020bbd) setting_slider_graphic_pane_t1

0x1642,	// (0x00020bcd) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002eaf0) setting_slider_graphic_pane_t

0x1652,	// (0x00020bdd) slider_set_pane_cp

0x35de,	// (0x00022b69) input_focus_pane_cp1

0x67ce,	// (0x00025d59) list_set_text_pane

0x35d4,	// (0x00022b5f) setting_text_pane_g1

0x35de,	// (0x00022b69) input_focus_pane_cp2

0x35d4,	// (0x00022b5f) setting_code_pane_g1

0x3709,	// (0x00022c94) setting_code_pane_t1

0x0097,	// (0x0001f622) set_text_pane_t1_ParamLimits

0x0097,	// (0x0001f622) set_text_pane_t1

0x3f88,	// (0x00023513) set_opt_bg_pane_g1

0x3f90,	// (0x0002351b) set_opt_bg_pane_g2

0x67a8,	// (0x00025d33) set_opt_bg_pane_g3

0x3fa0,	// (0x0002352b) set_opt_bg_pane_g4

0x3fa8,	// (0x00023533) set_opt_bg_pane_g5

0x3fb0,	// (0x0002353b) set_opt_bg_pane_g6

0x67b2,	// (0x00025d3d) set_opt_bg_pane_g7

0x67ba,	// (0x00025d45) set_opt_bg_pane_g8

0x67c4,	// (0x00025d4f) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002eef2) set_opt_bg_pane_g

0x679b,	// (0x00025d26) slider_set_pane_g1

0x24d4,	// (0x00021a5f) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002eee3) slider_set_pane_g

0x2470,	// (0x000219fb) volume_set_pane_g1

0x2478,	// (0x00021a03) volume_set_pane_g2

0x2480,	// (0x00021a0b) volume_set_pane_g3

0x2488,	// (0x00021a13) volume_set_pane_g4

0x2490,	// (0x00021a1b) volume_set_pane_g5

0x2498,	// (0x00021a23) volume_set_pane_g6

0x24a0,	// (0x00021a2b) volume_set_pane_g7

0x24a8,	// (0x00021a33) volume_set_pane_g8

0x24b0,	// (0x00021a3b) volume_set_pane_g9

0x24b8,	// (0x00021a43) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002eebb) volume_set_pane_g

0xd00a,	// (0x0002c595) indicator_pane_ParamLimits

0xd00a,	// (0x0002c595) indicator_pane

0xd032,	// (0x0002c5bd) main_idle_pane_g2_ParamLimits

0xd032,	// (0x0002c5bd) main_idle_pane_g2

0xd06a,	// (0x0002c5f5) main_pane_idle_g1_ParamLimits

0xd06a,	// (0x0002c5f5) main_pane_idle_g1

0x3758,	// (0x00022ce3) popup_clock_digital_analogue_window_ParamLimits

0x3758,	// (0x00022ce3) popup_clock_digital_analogue_window

0xd091,	// (0x0002c61c) soft_indicator_pane_ParamLimits

0xd091,	// (0x0002c61c) soft_indicator_pane

0xd0ab,	// (0x0002c636) wallpaper_pane_ParamLimits

0xd0ab,	// (0x0002c636) wallpaper_pane

0x35d4,	// (0x00022b5f) wallpaper_pane_g1

0xd0bd,	// (0x0002c648) indicator_pane_g1_ParamLimits

0xd0bd,	// (0x0002c648) indicator_pane_g1

0x6bd3,	// (0x0002615e) navi_navi_icon_text_pane_srt_g1

0x37aa,	// (0x00022d35) soft_indicator_pane_t1

0x37c4,	// (0x00022d4f) aid_ps_area_pane

0xd0d3,	// (0x0002c65e) aid_ps_clock_pane

0x37e3,	// (0x00022d6e) aid_ps_indicator_pane

0x37ef,	// (0x00022d7a) indicator_ps_pane_ParamLimits

0x37ef,	// (0x00022d7a) indicator_ps_pane

0x37fe,	// (0x00022d89) power_save_pane_g1_ParamLimits

0x37fe,	// (0x00022d89) power_save_pane_g1

0x380a,	// (0x00022d95) power_save_pane_g2_ParamLimits

0x380a,	// (0x00022d95) power_save_pane_g2

0x11da,	// (0x00020765) aid_navinavi_width_pane

0x37c4,	// (0x00022d4f) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002eaf5) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002eaf5) power_save_pane_g

0x3818,	// (0x00022da3) power_save_pane_t1_ParamLimits

0x3818,	// (0x00022da3) power_save_pane_t1

0xd0d3,	// (0x0002c65e) aid_ps_clock_pane_ParamLimits

0x37e3,	// (0x00022d6e) aid_ps_indicator_pane_ParamLimits

0x382a,	// (0x00022db5) power_save_pane_t4_ParamLimits

0x382a,	// (0x00022db5) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002eafa) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002eafa) power_save_pane_t

0x3854,	// (0x00022ddf) power_save_t3_ParamLimits

0x3854,	// (0x00022ddf) power_save_t3

0x383f,	// (0x00022dca) power_save_t2_ParamLimits

0x383f,	// (0x00022dca) power_save_t2

0x3869,	// (0x00022df4) indicator_ps_pane_g1

0xd0e1,	// (0x0002c66c) ai_gene_pane_ParamLimits

0xd0e1,	// (0x0002c66c) ai_gene_pane

0xd0f8,	// (0x0002c683) ai_links_pane_ParamLimits

0xd0f8,	// (0x0002c683) ai_links_pane

0xd110,	// (0x0002c69b) indicator_pane_cp1_ParamLimits

0xd110,	// (0x0002c69b) indicator_pane_cp1

0xd11f,	// (0x0002c6aa) main_pane_idle_g1_cp_ParamLimits

0xd11f,	// (0x0002c6aa) main_pane_idle_g1_cp

0x38a2,	// (0x00022e2d) popup_ai_links_title_window

0xd137,	// (0x0002c6c2) soft_indicator_pane_cp1_ParamLimits

0xd137,	// (0x0002c6c2) soft_indicator_pane_cp1

0x6589,	// (0x00025b14) ai_links_pane_g1

0x6592,	// (0x00025b1d) grid_ai_links_pane

0xdbd2,	// (0x0002d15d) ai_gene_pane_1

0x6577,	// (0x00025b02) ai_gene_pane_2

0x6580,	// (0x00025b0b) list_highlight_pane_cp4

0xdbae,	// (0x0002d139) cell_ai_link_pane_ParamLimits

0xdbae,	// (0x0002d139) cell_ai_link_pane

0x6548,	// (0x00025ad3) cell_ai_link_pane_g1

0x3adb,	// (0x00023066) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002ee96) cell_ai_link_pane_g

0x35de,	// (0x00022b69) grid_highlight_cp2

0x35de,	// (0x00022b69) bg_popup_sub_pane_cp1

0x38c5,	// (0x00022e50) popup_ai_links_title_window_t1

0x6496,	// (0x00025a21) ai_gene_pane_1_g1_ParamLimits

0x6496,	// (0x00025a21) ai_gene_pane_1_g1

0x64a2,	// (0x00025a2d) ai_gene_pane_1_g2_ParamLimits

0x64a2,	// (0x00025a2d) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002ee8c) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002ee8c) ai_gene_pane_1_g

0x64af,	// (0x00025a3a) ai_gene_pane_1_t1_ParamLimits

0x64af,	// (0x00025a3a) ai_gene_pane_1_t1

0x64e3,	// (0x00025a6e) grid_ai_soft_ind_pane

0x6481,	// (0x00025a0c) ai_gene_pane_2_t1_ParamLimits

0x6481,	// (0x00025a0c) ai_gene_pane_2_t1

0xd14b,	// (0x0002c6d6) main_pane_empty_t1_ParamLimits

0xd14b,	// (0x0002c6d6) main_pane_empty_t1

0xd163,	// (0x0002c6ee) main_pane_empty_t2_ParamLimits

0xd163,	// (0x0002c6ee) main_pane_empty_t2

0xd178,	// (0x0002c703) main_pane_empty_t3_ParamLimits

0xd178,	// (0x0002c703) main_pane_empty_t3

0xd18a,	// (0x0002c715) main_pane_empty_t4_ParamLimits

0xd18a,	// (0x0002c715) main_pane_empty_t4

0xd19c,	// (0x0002c727) main_pane_empty_t5_ParamLimits

0xd19c,	// (0x0002c727) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002eaff) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002eaff) main_pane_empty_t

0x3fd9,	// (0x00023564) bg_popup_window_pane_ParamLimits

0x3fd9,	// (0x00023564) bg_popup_window_pane

0x61f1,	// (0x0002577c) find_popup_pane_cp2_ParamLimits

0x61f1,	// (0x0002577c) find_popup_pane_cp2

0x61fd,	// (0x00025788) heading_pane_ParamLimits

0x61fd,	// (0x00025788) heading_pane

0x35de,	// (0x00022b69) bg_popup_sub_pane

0xdb07,	// (0x0002d092) bg_popup_window_pane_g1_ParamLimits

0xdb07,	// (0x0002d092) bg_popup_window_pane_g1

0xdb16,	// (0x0002d0a1) bg_popup_window_pane_g2_ParamLimits

0xdb16,	// (0x0002d0a1) bg_popup_window_pane_g2

0xdb22,	// (0x0002d0ad) bg_popup_window_pane_g3_ParamLimits

0xdb22,	// (0x0002d0ad) bg_popup_window_pane_g3

0xdb2e,	// (0x0002d0b9) bg_popup_window_pane_g4_ParamLimits

0xdb2e,	// (0x0002d0b9) bg_popup_window_pane_g4

0xdb65,	// (0x0002d0f0) bg_popup_window_pane_g5_ParamLimits

0xdb65,	// (0x0002d0f0) bg_popup_window_pane_g5

0xdb75,	// (0x0002d100) bg_popup_window_pane_g6_ParamLimits

0xdb75,	// (0x0002d100) bg_popup_window_pane_g6

0xdb81,	// (0x0002d10c) bg_popup_window_pane_g7_ParamLimits

0xdb81,	// (0x0002d10c) bg_popup_window_pane_g7

0xdb90,	// (0x0002d11b) bg_popup_window_pane_g8_ParamLimits

0xdb90,	// (0x0002d11b) bg_popup_window_pane_g8

0xdb9f,	// (0x0002d12a) bg_popup_window_pane_g9_ParamLimits

0xdb9f,	// (0x0002d12a) bg_popup_window_pane_g9

0x61d7,	// (0x00025762) bg_popup_window_pane_g10_ParamLimits

0x61d7,	// (0x00025762) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002ee54) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002ee54) bg_popup_window_pane_g

0x6100,	// (0x0002568b) bg_popup_heading_pane_ParamLimits

0x6100,	// (0x0002568b) bg_popup_heading_pane

0x255c,	// (0x00021ae7) tabs_4_passive_pane_cp_srt_ParamLimits

0x255c,	// (0x00021ae7) tabs_4_passive_pane_cp_srt

0x256e,	// (0x00021af9) tabs_4_passive_pane_srt_ParamLimits

0x6114,	// (0x0002569f) heading_pane_g2

0x256e,	// (0x00021af9) tabs_4_passive_pane_srt

0x547b,	// (0x00024a06) bg_passive_tab_pane_cp3_srt_ParamLimits

0x547b,	// (0x00024a06) bg_passive_tab_pane_cp3_srt

0x611c,	// (0x000256a7) heading_pane_t1_ParamLimits

0x611c,	// (0x000256a7) heading_pane_t1

0x6133,	// (0x000256be) heading_pane_t2_ParamLimits

0x6133,	// (0x000256be) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002ee4f) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002ee4f) heading_pane_t

0x5c2d,	// (0x000251b8) bg_popup_heading_pane_g1

0x5cdc,	// (0x00025267) bg_popup_heading_pane_g2

0x5ce6,	// (0x00025271) bg_popup_heading_pane_g3

0x5cf0,	// (0x0002527b) bg_popup_heading_pane_g4

0x5cfa,	// (0x00025285) bg_popup_heading_pane_g5

0x5d04,	// (0x0002528f) bg_popup_heading_pane_g6

0x5d0c,	// (0x00025297) bg_popup_heading_pane_g7

0x5d14,	// (0x0002529f) bg_popup_heading_pane_g8

0x5d1e,	// (0x000252a9) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002ee0b) bg_popup_heading_pane_g

0x5407,	// (0x00024992) bg_popup_sub_pane_g1

0x540f,	// (0x0002499a) bg_popup_sub_pane_g2

0x5417,	// (0x000249a2) bg_popup_sub_pane_g3

0x541f,	// (0x000249aa) bg_popup_sub_pane_g4

0x5427,	// (0x000249b2) bg_popup_sub_pane_g5

0x542f,	// (0x000249ba) bg_popup_sub_pane_g6

0x5437,	// (0x000249c2) bg_popup_sub_pane_g7

0x543f,	// (0x000249ca) bg_popup_sub_pane_g8

0x5447,	// (0x000249d2) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002ede5) bg_popup_sub_pane_g

0x3939,	// (0x00022ec4) bg_popup_window_pane_cp5_ParamLimits

0x3939,	// (0x00022ec4) bg_popup_window_pane_cp5

0x3955,	// (0x00022ee0) popup_note_window_g1_ParamLimits

0x3955,	// (0x00022ee0) popup_note_window_g1

0x3961,	// (0x00022eec) popup_note_window_t1_ParamLimits

0x3961,	// (0x00022eec) popup_note_window_t1

0x3977,	// (0x00022f02) popup_note_window_t2_ParamLimits

0x3977,	// (0x00022f02) popup_note_window_t2

0x398d,	// (0x00022f18) popup_note_window_t3_ParamLimits

0x398d,	// (0x00022f18) popup_note_window_t3

0x39a3,	// (0x00022f2e) popup_note_window_t4_ParamLimits

0x39a3,	// (0x00022f2e) popup_note_window_t4

0x39cb,	// (0x00022f56) popup_note_window_t5_ParamLimits

0x39cb,	// (0x00022f56) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002eb0a) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002eb0a) popup_note_window_t

0x39ef,	// (0x00022f7a) bg_popup_window_pane_cp6_ParamLimits

0x39ef,	// (0x00022f7a) bg_popup_window_pane_cp6

0x5ba9,	// (0x00025134) popup_note_image_window_g1_ParamLimits

0x5ba9,	// (0x00025134) popup_note_image_window_g1

0x5bb5,	// (0x00025140) popup_note_image_window_g2_ParamLimits

0x5bb5,	// (0x00025140) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002edd9) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002edd9) popup_note_image_window_g

0x5bce,	// (0x00025159) popup_note_image_window_t1_ParamLimits

0x5bce,	// (0x00025159) popup_note_image_window_t1

0x5be7,	// (0x00025172) popup_note_image_window_t2_ParamLimits

0x5be7,	// (0x00025172) popup_note_image_window_t2

0x5c00,	// (0x0002518b) popup_note_image_window_t3_ParamLimits

0x5c00,	// (0x0002518b) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002edde) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002edde) popup_note_image_window_t

0x5a6a,	// (0x00024ff5) bg_popup_window_pane_cp7_ParamLimits

0x5a6a,	// (0x00024ff5) bg_popup_window_pane_cp7

0x5a9a,	// (0x00025025) popup_note_wait_window_g1_ParamLimits

0x5a9a,	// (0x00025025) popup_note_wait_window_g1

0x5aa6,	// (0x00025031) popup_note_wait_window_g2_ParamLimits

0x5aa6,	// (0x00025031) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002edc7) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002edc7) popup_note_wait_window_g

0x5abe,	// (0x00025049) popup_note_wait_window_t1_ParamLimits

0x5abe,	// (0x00025049) popup_note_wait_window_t1

0x5ae5,	// (0x00025070) popup_note_wait_window_t2_ParamLimits

0x5ae5,	// (0x00025070) popup_note_wait_window_t2

0x5b02,	// (0x0002508d) popup_note_wait_window_t3_ParamLimits

0x5b02,	// (0x0002508d) popup_note_wait_window_t3

0x5b15,	// (0x000250a0) popup_note_wait_window_t4_ParamLimits

0x5b15,	// (0x000250a0) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002edce) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002edce) popup_note_wait_window_t

0x5b3a,	// (0x000250c5) wait_bar_pane_ParamLimits

0x5b3a,	// (0x000250c5) wait_bar_pane

0x35de,	// (0x00022b69) wait_anim_pane

0x35de,	// (0x00022b69) wait_border_pane

0x35d4,	// (0x00022b5f) wait_anim_pane_g1

0x35d4,	// (0x00022b5f) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002ec8e) wait_anim_pane_g

0x5a0e,	// (0x00024f99) wait_border_pane_g1

0x5a19,	// (0x00024fa4) wait_border_pane_g2

0x5a22,	// (0x00024fad) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002edc0) wait_border_pane_g

0x586d,	// (0x00024df8) bg_popup_window_pane_cp16_ParamLimits

0x586d,	// (0x00024df8) bg_popup_window_pane_cp16

0x5979,	// (0x00024f04) indicator_popup_pane_cp4_ParamLimits

0x5979,	// (0x00024f04) indicator_popup_pane_cp4

0x598d,	// (0x00024f18) popup_query_data_window_t1_ParamLimits

0x598d,	// (0x00024f18) popup_query_data_window_t1

0x599f,	// (0x00024f2a) popup_query_data_window_t2_ParamLimits

0x599f,	// (0x00024f2a) popup_query_data_window_t2

0x59b8,	// (0x00024f43) popup_query_data_window_t3_ParamLimits

0x59b8,	// (0x00024f43) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002edb9) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002edb9) popup_query_data_window_t

0x59d2,	// (0x00024f5d) query_popup_data_pane_ParamLimits

0x59d2,	// (0x00024f5d) query_popup_data_pane

0x59e6,	// (0x00024f71) query_popup_data_pane_cp1_ParamLimits

0x59e6,	// (0x00024f71) query_popup_data_pane_cp1

0x586d,	// (0x00024df8) bg_popup_window_pane_cp10_ParamLimits

0x586d,	// (0x00024df8) bg_popup_window_pane_cp10

0x589f,	// (0x00024e2a) indicator_popup_pane_ParamLimits

0x589f,	// (0x00024e2a) indicator_popup_pane

0x58cd,	// (0x00024e58) popup_query_code_window_t1_ParamLimits

0x58cd,	// (0x00024e58) popup_query_code_window_t1

0x58e7,	// (0x00024e72) popup_query_code_window_t2_ParamLimits

0x58e7,	// (0x00024e72) popup_query_code_window_t2

0x5930,	// (0x00024ebb) popup_query_code_window_t3_ParamLimits

0x5930,	// (0x00024ebb) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002edb2) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002edb2) popup_query_code_window_t

0x595f,	// (0x00024eea) query_popup_pane_ParamLimits

0x595f,	// (0x00024eea) query_popup_pane

0x39ef,	// (0x00022f7a) bg_popup_window_pane_cp15_ParamLimits

0x39ef,	// (0x00022f7a) bg_popup_window_pane_cp15

0x3a0d,	// (0x00022f98) indicator_popup_pane_cp1_ParamLimits

0x3a0d,	// (0x00022f98) indicator_popup_pane_cp1

0x3a20,	// (0x00022fab) indicator_popup_pane_cp2_ParamLimits

0x3a20,	// (0x00022fab) indicator_popup_pane_cp2

0x3a33,	// (0x00022fbe) popup_query_data_code_window_g1_ParamLimits

0x3a33,	// (0x00022fbe) popup_query_data_code_window_g1

0x3a46,	// (0x00022fd1) popup_query_data_code_window_t1_ParamLimits

0x3a46,	// (0x00022fd1) popup_query_data_code_window_t1

0x3a58,	// (0x00022fe3) popup_query_data_code_window_t2_ParamLimits

0x3a58,	// (0x00022fe3) popup_query_data_code_window_t2

0x3a6a,	// (0x00022ff5) popup_query_data_code_window_t3_ParamLimits

0x3a6a,	// (0x00022ff5) popup_query_data_code_window_t3

0x3a80,	// (0x0002300b) popup_query_data_code_window_t4_ParamLimits

0x3a80,	// (0x0002300b) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002eb15) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002eb15) popup_query_data_code_window_t

0x223f,	// (0x000217ca) list_single_midp_graphic_pane_g3

0x3a98,	// (0x00023023) query_popup_data_pane_cp2_ParamLimits

0x3aab,	// (0x00023036) query_popup_pane_cp2_ParamLimits

0x3aab,	// (0x00023036) query_popup_pane_cp2

0x35de,	// (0x00022b69) bg_popup_window_pane_cp11

0x5865,	// (0x00024df0) heading_pane_cp5

0x3b96,	// (0x00023121) listscroll_popup_info_pane

0x35de,	// (0x00022b69) input_focus_pane_cp3

0x3abe,	// (0x00023049) query_popup_pane_t1

0x3acc,	// (0x00023057) list_popup_info_pane_ParamLimits

0x3acc,	// (0x00023057) list_popup_info_pane

0x3adb,	// (0x00023066) listscroll_popup_info_pane_g1

0x3ae3,	// (0x0002306e) scroll_pane_cp7

0x3aed,	// (0x00023078) popup_info_list_pane_t1_ParamLimits

0x3aed,	// (0x00023078) popup_info_list_pane_t1

0x3b07,	// (0x00023092) popup_info_list_pane_t2_ParamLimits

0x3b07,	// (0x00023092) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002eb1e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002eb1e) popup_info_list_pane_t

0x35de,	// (0x00022b69) bg_popup_window_pane_cp12

0x6bed,	// (0x00026178) find_popup_pane

0x36be,	// (0x00022c49) bg_popup_window_pane_cp3

0x3b21,	// (0x000230ac) heading_pane_cp3

0x3b2d,	// (0x000230b8) listscroll_popup_graphic_pane

0x35de,	// (0x00022b69) bg_popup_window_pane_cp4

0xd1fe,	// (0x0002c789) heading_pane_cp4

0x3b96,	// (0x00023121) listscroll_popup_colour_pane

0x3b9e,	// (0x00023129) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3b9e,	// (0x00023129) cell_large_graphic_colour_none_popup_pane

0xd206,	// (0x0002c791) grid_large_graphic_colour_popup_pane_ParamLimits

0xd206,	// (0x0002c791) grid_large_graphic_colour_popup_pane

0x3bde,	// (0x00023169) listscroll_popup_colour_pane_g1_ParamLimits

0x3bde,	// (0x00023169) listscroll_popup_colour_pane_g1

0x3bf5,	// (0x00023180) listscroll_popup_colour_pane_g2_ParamLimits

0x3bf5,	// (0x00023180) listscroll_popup_colour_pane_g2

0x3c0c,	// (0x00023197) listscroll_popup_colour_pane_g3_ParamLimits

0x3c0c,	// (0x00023197) listscroll_popup_colour_pane_g3

0xd22a,	// (0x0002c7b5) listscroll_popup_colour_pane_g4_ParamLimits

0xd22a,	// (0x0002c7b5) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002eb23) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002eb23) listscroll_popup_colour_pane_g

0x3c30,	// (0x000231bb) scroll_pane_cp6_ParamLimits

0x3c30,	// (0x000231bb) scroll_pane_cp6

0xd23a,	// (0x0002c7c5) cell_large_graphic_colour_popup_pane_ParamLimits

0xd23a,	// (0x0002c7c5) cell_large_graphic_colour_popup_pane

0x3c61,	// (0x000231ec) cell_large_graphic_colour_none_popup_pane_t1

0x35de,	// (0x00022b69) grid_highlight_pane_cp5

0x3c70,	// (0x000231fb) cell_large_graphic_colour_popup_pane_g1

0x3c78,	// (0x00023203) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002eb2c) cell_large_graphic_colour_popup_pane_g

0x3c80,	// (0x0002320b) cell_large_graphic_colour_popup_pane_g2_copy1

0x3c89,	// (0x00023214) grid_highlight_pane_cp4

0x3c91,	// (0x0002321c) bg_popup_window_pane_cp8_ParamLimits

0x3c91,	// (0x0002321c) bg_popup_window_pane_cp8

0x3cac,	// (0x00023237) popup_snote_single_text_window_g1_ParamLimits

0x3cac,	// (0x00023237) popup_snote_single_text_window_g1

0x3cbe,	// (0x00023249) popup_snote_single_text_window_t1_ParamLimits

0x3cbe,	// (0x00023249) popup_snote_single_text_window_t1

0x3cd1,	// (0x0002325c) popup_snote_single_text_window_t2_ParamLimits

0x3cd1,	// (0x0002325c) popup_snote_single_text_window_t2

0x3ce4,	// (0x0002326f) popup_snote_single_text_window_t3_ParamLimits

0x3ce4,	// (0x0002326f) popup_snote_single_text_window_t3

0x3d1d,	// (0x000232a8) popup_snote_single_text_window_t4_ParamLimits

0x3d1d,	// (0x000232a8) popup_snote_single_text_window_t4

0x3d51,	// (0x000232dc) popup_snote_single_text_window_t5_ParamLimits

0x3d51,	// (0x000232dc) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002eb31) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002eb31) popup_snote_single_text_window_t

0x3d80,	// (0x0002330b) bg_popup_window_pane_cp9_ParamLimits

0x3d80,	// (0x0002330b) bg_popup_window_pane_cp9

0x3cac,	// (0x00023237) popup_snote_single_graphic_window_g1_ParamLimits

0x3cac,	// (0x00023237) popup_snote_single_graphic_window_g1

0x3d8e,	// (0x00023319) popup_snote_single_graphic_window_g2_ParamLimits

0x3d8e,	// (0x00023319) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002eb3c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002eb3c) popup_snote_single_graphic_window_g

0x3d9a,	// (0x00023325) popup_snote_single_graphic_window_t1_ParamLimits

0x3d9a,	// (0x00023325) popup_snote_single_graphic_window_t1

0x3dad,	// (0x00023338) popup_snote_single_graphic_window_t2_ParamLimits

0x3dad,	// (0x00023338) popup_snote_single_graphic_window_t2

0x3dc0,	// (0x0002334b) popup_snote_single_graphic_window_t3_ParamLimits

0x3dc0,	// (0x0002334b) popup_snote_single_graphic_window_t3

0x3df9,	// (0x00023384) popup_snote_single_graphic_window_t4_ParamLimits

0x3df9,	// (0x00023384) popup_snote_single_graphic_window_t4

0x3e2d,	// (0x000233b8) popup_snote_single_graphic_window_t5_ParamLimits

0x3e2d,	// (0x000233b8) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002eb41) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002eb41) popup_snote_single_graphic_window_t

0xde83,	// (0x0002d40e) grid_graphic_popup_pane_ParamLimits

0xde83,	// (0x0002d40e) grid_graphic_popup_pane

0x6b59,	// (0x000260e4) listscroll_popup_graphic_pane_g1_ParamLimits

0x6b59,	// (0x000260e4) listscroll_popup_graphic_pane_g1

0xdea2,	// (0x0002d42d) listscroll_popup_graphic_pane_g2_ParamLimits

0xdea2,	// (0x0002d42d) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002ef2f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002ef2f) listscroll_popup_graphic_pane_g

0x6b81,	// (0x0002610c) scroll_pane_cp5

0xde3f,	// (0x0002d3ca) cell_graphic_popup_pane_ParamLimits

0xde3f,	// (0x0002d3ca) cell_graphic_popup_pane

0x6aae,	// (0x00026039) cell_graphic_popup_pane_g1

0x6ab6,	// (0x00026041) cell_graphic_popup_pane_g2

0x3c80,	// (0x0002320b) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002ef28) cell_graphic_popup_pane_g

0x6abf,	// (0x0002604a) cell_graphic_popup_pane_t2

0x3c89,	// (0x00023214) grid_highlight_pane_cp3

0x3e6e,	// (0x000233f9) list_gen_pane_ParamLimits

0x3e6e,	// (0x000233f9) list_gen_pane

0x3ea0,	// (0x0002342b) scroll_pane

0xddf6,	// (0x0002d381) bg_list_pane_g1_ParamLimits

0xddf6,	// (0x0002d381) bg_list_pane_g1

0x6a23,	// (0x00025fae) bg_list_pane_g2_ParamLimits

0x6a23,	// (0x00025fae) bg_list_pane_g2

0x6a38,	// (0x00025fc3) bg_list_pane_g3_ParamLimits

0x6a38,	// (0x00025fc3) bg_list_pane_g3

0x6a4c,	// (0x00025fd7) bg_list_pane_g4_ParamLimits

0x6a4c,	// (0x00025fd7) bg_list_pane_g4

0xde13,	// (0x0002d39e) bg_list_pane_g5_ParamLimits

0xde13,	// (0x0002d39e) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002ef1d) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002ef1d) bg_list_pane_g

0xddbe,	// (0x0002d349) list_double2_graphic_large_graphic_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double2_graphic_large_graphic_pane

0xddbe,	// (0x0002d349) list_double2_graphic_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double2_graphic_pane

0xddbe,	// (0x0002d349) list_double2_large_graphic_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double2_large_graphic_pane

0xddbe,	// (0x0002d349) list_double2_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double2_pane

0xddbe,	// (0x0002d349) list_double_graphic_heading_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double_graphic_heading_pane

0xddbe,	// (0x0002d349) list_double_graphic_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double_graphic_pane

0xddbe,	// (0x0002d349) list_double_heading_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double_heading_pane

0xddbe,	// (0x0002d349) list_double_large_graphic_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double_large_graphic_pane

0xddbe,	// (0x0002d349) list_double_number_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double_number_pane

0xddbe,	// (0x0002d349) list_double_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double_pane

0xddbe,	// (0x0002d349) list_double_time_pane_ParamLimits

0xddbe,	// (0x0002d349) list_double_time_pane

0xddbe,	// (0x0002d349) list_setting_number_pane_ParamLimits

0xddbe,	// (0x0002d349) list_setting_number_pane

0xddbe,	// (0x0002d349) list_setting_pane_ParamLimits

0xddbe,	// (0x0002d349) list_setting_pane

0xddd0,	// (0x0002d35b) list_single_2graphic_pane_ParamLimits

0xddd0,	// (0x0002d35b) list_single_2graphic_pane

0xddd0,	// (0x0002d35b) list_single_graphic_heading_pane_ParamLimits

0xddd0,	// (0x0002d35b) list_single_graphic_heading_pane

0xddd0,	// (0x0002d35b) list_single_graphic_pane_ParamLimits

0xddd0,	// (0x0002d35b) list_single_graphic_pane

0xddd0,	// (0x0002d35b) list_single_heading_pane_ParamLimits

0xddd0,	// (0x0002d35b) list_single_heading_pane

0xddd0,	// (0x0002d35b) list_single_large_graphic_pane_ParamLimits

0xddd0,	// (0x0002d35b) list_single_large_graphic_pane

0xddd0,	// (0x0002d35b) list_single_number_heading_pane_ParamLimits

0xddd0,	// (0x0002d35b) list_single_number_heading_pane

0xddd0,	// (0x0002d35b) list_single_number_pane_ParamLimits

0xddd0,	// (0x0002d35b) list_single_number_pane

0xddd0,	// (0x0002d35b) list_single_pane_ParamLimits

0xddd0,	// (0x0002d35b) list_single_pane

0x35de,	// (0x00022b69) list_highlight_pane_cp1

0x0874,	// (0x0001fdff) list_single_pane_g1_ParamLimits

0x0874,	// (0x0001fdff) list_single_pane_g1

0x0880,	// (0x0001fe0b) list_single_pane_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_single_pane_g

0x0b88,	// (0x00020113) list_single_pane_t1_ParamLimits

0x0b88,	// (0x00020113) list_single_pane_t1

0x0874,	// (0x0001fdff) list_single_number_pane_g1_ParamLimits

0x0874,	// (0x0001fdff) list_single_number_pane_g1

0x0880,	// (0x0001fe0b) list_single_number_pane_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_single_number_pane_g

0x08d2,	// (0x0001fe5d) list_single_number_pane_t1_ParamLimits

0x08d2,	// (0x0001fe5d) list_single_number_pane_t1

0xbbb4,	// (0x0002b13f) list_single_number_pane_t2_ParamLimits

0xbbb4,	// (0x0002b13f) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002eede) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002eede) list_single_number_pane_t

0xb59e,	// (0x0002ab29) list_single_graphic_pane_g1_ParamLimits

0xb59e,	// (0x0002ab29) list_single_graphic_pane_g1

0x0874,	// (0x0001fdff) list_single_graphic_pane_g2_ParamLimits

0x0874,	// (0x0001fdff) list_single_graphic_pane_g2

0x0880,	// (0x0001fe0b) list_single_graphic_pane_g3_ParamLimits

0x0880,	// (0x0001fe0b) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002eb4c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002eb4c) list_single_graphic_pane_g

0xb5aa,	// (0x0002ab35) list_single_graphic_pane_t1_ParamLimits

0xb5aa,	// (0x0002ab35) list_single_graphic_pane_t1

0x0874,	// (0x0001fdff) list_single_heading_pane_g1_ParamLimits

0x0874,	// (0x0001fdff) list_single_heading_pane_g1

0x0880,	// (0x0001fe0b) list_single_heading_pane_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_single_heading_pane_g

0xb5c0,	// (0x0002ab4b) list_single_heading_pane_t1_ParamLimits

0xb5c0,	// (0x0002ab4b) list_single_heading_pane_t1

0xb5d6,	// (0x0002ab61) list_single_heading_pane_t2_ParamLimits

0xb5d6,	// (0x0002ab61) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002eb58) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002eb58) list_single_heading_pane_t

0x0874,	// (0x0001fdff) list_single_number_heading_pane_g1_ParamLimits

0x0874,	// (0x0001fdff) list_single_number_heading_pane_g1

0x0880,	// (0x0001fe0b) list_single_number_heading_pane_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_single_number_heading_pane_g

0xb5c0,	// (0x0002ab4b) list_single_number_heading_pane_t1_ParamLimits

0xb5c0,	// (0x0002ab4b) list_single_number_heading_pane_t1

0xb5e8,	// (0x0002ab73) list_single_number_heading_pane_t2_ParamLimits

0xb5e8,	// (0x0002ab73) list_single_number_heading_pane_t2

0x0b62,	// (0x000200ed) list_single_number_heading_pane_t3_ParamLimits

0x0b62,	// (0x000200ed) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002eb5d) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002eb5d) list_single_number_heading_pane_t

0x0868,	// (0x0001fdf3) list_single_graphic_heading_pane_g1_ParamLimits

0x0868,	// (0x0001fdf3) list_single_graphic_heading_pane_g1

0xb5fa,	// (0x0002ab85) list_single_graphic_heading_pane_g4_ParamLimits

0xb5fa,	// (0x0002ab85) list_single_graphic_heading_pane_g4

0x0880,	// (0x0001fe0b) list_single_graphic_heading_pane_g5_ParamLimits

0x0880,	// (0x0001fe0b) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002eb64) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002eb64) list_single_graphic_heading_pane_g

0xb5c0,	// (0x0002ab4b) list_single_graphic_heading_pane_t1_ParamLimits

0xb5c0,	// (0x0002ab4b) list_single_graphic_heading_pane_t1

0xb60b,	// (0x0002ab96) list_single_graphic_heading_pane_t2_ParamLimits

0xb60b,	// (0x0002ab96) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002eb6b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002eb6b) list_single_graphic_heading_pane_t

0x0b9e,	// (0x00020129) list_single_large_graphic_pane_g1_ParamLimits

0x0b9e,	// (0x00020129) list_single_large_graphic_pane_g1

0x0874,	// (0x0001fdff) list_single_large_graphic_pane_g2_ParamLimits

0x0874,	// (0x0001fdff) list_single_large_graphic_pane_g2

0x0880,	// (0x0001fe0b) list_single_large_graphic_pane_g3_ParamLimits

0x0880,	// (0x0001fe0b) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002eb70) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002eb70) list_single_large_graphic_pane_g

0x5a19,	// (0x00024fa4) wait_border_pane_g2_copy1

0xb61d,	// (0x0002aba8) list_single_large_graphic_pane_g4_cp2

0x0baa,	// (0x00020135) list_single_large_graphic_pane_t1_ParamLimits

0x0baa,	// (0x00020135) list_single_large_graphic_pane_t1

0xb625,	// (0x0002abb0) list_double_pane_g1_ParamLimits

0xb625,	// (0x0002abb0) list_double_pane_g1

0xb631,	// (0x0002abbc) list_double_pane_g2_ParamLimits

0xb631,	// (0x0002abbc) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002eb77) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002eb77) list_double_pane_g

0xb63d,	// (0x0002abc8) list_double_pane_t1_ParamLimits

0xb63d,	// (0x0002abc8) list_double_pane_t1

0xb653,	// (0x0002abde) list_double_pane_t2_ParamLimits

0xb653,	// (0x0002abde) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002eb7c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002eb7c) list_double_pane_t

0xb665,	// (0x0002abf0) list_double2_pane_g1_ParamLimits

0xb665,	// (0x0002abf0) list_double2_pane_g1

0xb676,	// (0x0002ac01) list_double2_pane_g2_ParamLimits

0xb676,	// (0x0002ac01) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002eb81) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002eb81) list_double2_pane_g

0xb682,	// (0x0002ac0d) list_double2_pane_t1_ParamLimits

0xb682,	// (0x0002ac0d) list_double2_pane_t1

0xb698,	// (0x0002ac23) list_double2_pane_t2_ParamLimits

0xb698,	// (0x0002ac23) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002eb86) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002eb86) list_double2_pane_t

0xb625,	// (0x0002abb0) list_double_number_pane_g1_ParamLimits

0xb625,	// (0x0002abb0) list_double_number_pane_g1

0xb631,	// (0x0002abbc) list_double_number_pane_g2_ParamLimits

0xb631,	// (0x0002abbc) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002eb77) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002eb77) list_double_number_pane_g

0xb6aa,	// (0x0002ac35) list_double_number_pane_t1_ParamLimits

0xb6aa,	// (0x0002ac35) list_double_number_pane_t1

0xb6bc,	// (0x0002ac47) list_double_number_pane_t2_ParamLimits

0xb6bc,	// (0x0002ac47) list_double_number_pane_t2

0xb6d2,	// (0x0002ac5d) list_double_number_pane_t3_ParamLimits

0xb6d2,	// (0x0002ac5d) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002eb8b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002eb8b) list_double_number_pane_t

0xb6e4,	// (0x0002ac6f) list_double_graphic_pane_g1_ParamLimits

0xb6e4,	// (0x0002ac6f) list_double_graphic_pane_g1

0xb6f0,	// (0x0002ac7b) list_double_graphic_pane_g2_ParamLimits

0xb6f0,	// (0x0002ac7b) list_double_graphic_pane_g2

0xb6ff,	// (0x0002ac8a) list_double_graphic_pane_g3_ParamLimits

0xb6ff,	// (0x0002ac8a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002eb92) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002eb92) list_double_graphic_pane_g

0xb717,	// (0x0002aca2) list_double_graphic_pane_t1_ParamLimits

0xb717,	// (0x0002aca2) list_double_graphic_pane_t1

0xb72d,	// (0x0002acb8) list_double_graphic_pane_t2_ParamLimits

0xb72d,	// (0x0002acb8) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002eb9b) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002eb9b) list_double_graphic_pane_t

0x03e0,	// (0x0001f96b) list_double2_graphic_pane_g1_ParamLimits

0x03e0,	// (0x0001f96b) list_double2_graphic_pane_g1

0x0e47,	// (0x000203d2) list_double2_graphic_pane_g2_ParamLimits

0x0e47,	// (0x000203d2) list_double2_graphic_pane_g2

0xb676,	// (0x0002ac01) list_double2_graphic_pane_g3_ParamLimits

0xb676,	// (0x0002ac01) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002eba0) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002eba0) list_double2_graphic_pane_g

0xb73f,	// (0x0002acca) list_double2_graphic_pane_t1_ParamLimits

0xb73f,	// (0x0002acca) list_double2_graphic_pane_t1

0xb755,	// (0x0002ace0) list_double2_graphic_pane_t2_ParamLimits

0xb755,	// (0x0002ace0) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002eba7) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002eba7) list_double2_graphic_pane_t

0xb767,	// (0x0002acf2) list_double_large_graphic_pane_g1_ParamLimits

0xb767,	// (0x0002acf2) list_double_large_graphic_pane_g1

0xb786,	// (0x0002ad11) list_double_large_graphic_pane_g2_ParamLimits

0xb786,	// (0x0002ad11) list_double_large_graphic_pane_g2

0xb631,	// (0x0002abbc) list_double_large_graphic_pane_g3_ParamLimits

0xb631,	// (0x0002abbc) list_double_large_graphic_pane_g3

0xb797,	// (0x0002ad22) list_double_large_graphic_pane_g4_ParamLimits

0xb797,	// (0x0002ad22) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002ebac) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002ebac) list_double_large_graphic_pane_g

0xb7aa,	// (0x0002ad35) list_double_large_graphic_pane_t1_ParamLimits

0xb7aa,	// (0x0002ad35) list_double_large_graphic_pane_t1

0xb7c3,	// (0x0002ad4e) list_double_large_graphic_pane_t2_ParamLimits

0xb7c3,	// (0x0002ad4e) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002ebb7) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002ebb7) list_double_large_graphic_pane_t

0xb7d5,	// (0x0002ad60) list_double2_large_graphic_pane_g1_ParamLimits

0xb7d5,	// (0x0002ad60) list_double2_large_graphic_pane_g1

0xb665,	// (0x0002abf0) list_double2_large_graphic_pane_g2_ParamLimits

0xb665,	// (0x0002abf0) list_double2_large_graphic_pane_g2

0xb676,	// (0x0002ac01) list_double2_large_graphic_pane_g3_ParamLimits

0xb676,	// (0x0002ac01) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002ebbc) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002ebbc) list_double2_large_graphic_pane_g

0xb7e1,	// (0x0002ad6c) list_double2_large_graphic_pane_t1_ParamLimits

0xb7e1,	// (0x0002ad6c) list_double2_large_graphic_pane_t1

0xb7f7,	// (0x0002ad82) list_double2_large_graphic_pane_t2_ParamLimits

0xb7f7,	// (0x0002ad82) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002ebc3) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002ebc3) list_double2_large_graphic_pane_t

0xb809,	// (0x0002ad94) list_double_heading_pane_g1_ParamLimits

0xb809,	// (0x0002ad94) list_double_heading_pane_g1

0x01b5,	// (0x0001f740) list_double_heading_pane_g2_ParamLimits

0x01b5,	// (0x0001f740) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002ebc8) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002ebc8) list_double_heading_pane_g

0xb81a,	// (0x0002ada5) list_double_heading_pane_t1_ParamLimits

0xb81a,	// (0x0002ada5) list_double_heading_pane_t1

0xb698,	// (0x0002ac23) list_double_heading_pane_t2_ParamLimits

0xb698,	// (0x0002ac23) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002ebcd) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002ebcd) list_double_heading_pane_t

0x03e0,	// (0x0001f96b) list_double_graphic_heading_pane_g1_ParamLimits

0x03e0,	// (0x0001f96b) list_double_graphic_heading_pane_g1

0xb809,	// (0x0002ad94) list_double_graphic_heading_pane_g2_ParamLimits

0xb809,	// (0x0002ad94) list_double_graphic_heading_pane_g2

0x01b5,	// (0x0001f740) list_double_graphic_heading_pane_g3_ParamLimits

0x01b5,	// (0x0001f740) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002ebd2) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002ebd2) list_double_graphic_heading_pane_g

0xb830,	// (0x0002adbb) list_double_graphic_heading_pane_t1_ParamLimits

0xb830,	// (0x0002adbb) list_double_graphic_heading_pane_t1

0xb755,	// (0x0002ace0) list_double_graphic_heading_pane_t2_ParamLimits

0xb755,	// (0x0002ace0) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002ebd9) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002ebd9) list_double_graphic_heading_pane_t

0xb786,	// (0x0002ad11) list_double_time_pane_g1_ParamLimits

0xb786,	// (0x0002ad11) list_double_time_pane_g1

0xb631,	// (0x0002abbc) list_double_time_pane_g2_ParamLimits

0xb631,	// (0x0002abbc) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002ebde) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002ebde) list_double_time_pane_g

0xb846,	// (0x0002add1) list_double_time_pane_t1_ParamLimits

0xb846,	// (0x0002add1) list_double_time_pane_t1

0xb85c,	// (0x0002ade7) list_double_time_pane_t2_ParamLimits

0xb85c,	// (0x0002ade7) list_double_time_pane_t2

0xb86e,	// (0x0002adf9) list_double_time_pane_t3_ParamLimits

0xb86e,	// (0x0002adf9) list_double_time_pane_t3

0xb880,	// (0x0002ae0b) list_double_time_pane_t4_ParamLimits

0xb880,	// (0x0002ae0b) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002ebe3) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002ebe3) list_double_time_pane_t

0xb892,	// (0x0002ae1d) list_setting_pane_g1_ParamLimits

0xb892,	// (0x0002ae1d) list_setting_pane_g1

0xb89e,	// (0x0002ae29) list_setting_pane_g2_ParamLimits

0xb89e,	// (0x0002ae29) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002ebec) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002ebec) list_setting_pane_g

0xb8aa,	// (0x0002ae35) list_setting_pane_t1_ParamLimits

0xb8aa,	// (0x0002ae35) list_setting_pane_t1

0xb8c4,	// (0x0002ae4f) list_setting_pane_t2_ParamLimits

0xb8c4,	// (0x0002ae4f) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002ebf1) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002ebf1) list_setting_pane_t

0xb903,	// (0x0002ae8e) set_value_pane_cp_ParamLimits

0xb903,	// (0x0002ae8e) set_value_pane_cp

0xb90f,	// (0x0002ae9a) list_setting_number_pane_g1_ParamLimits

0xb90f,	// (0x0002ae9a) list_setting_number_pane_g1

0xb91b,	// (0x0002aea6) list_setting_number_pane_g2_ParamLimits

0xb91b,	// (0x0002aea6) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002ebf8) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002ebf8) list_setting_number_pane_g

0xb927,	// (0x0002aeb2) list_setting_number_pane_t1_ParamLimits

0xb927,	// (0x0002aeb2) list_setting_number_pane_t1

0xb940,	// (0x0002aecb) list_setting_number_pane_t2_ParamLimits

0xb940,	// (0x0002aecb) list_setting_number_pane_t2

0xb95a,	// (0x0002aee5) list_setting_number_pane_t3_ParamLimits

0xb95a,	// (0x0002aee5) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002ebfd) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002ebfd) list_setting_number_pane_t

0xb903,	// (0x0002ae8e) set_value_pane_ParamLimits

0xb903,	// (0x0002ae8e) set_value_pane

0x3ed4,	// (0x0002345f) bg_set_opt_pane_ParamLimits

0x3ed4,	// (0x0002345f) bg_set_opt_pane

0x0541,	// (0x0001facc) set_value_pane_t1

0x3ef5,	// (0x00023480) slider_set_pane_cp3

0x3efe,	// (0x00023489) volume_small_pane_cp

0x3f07,	// (0x00023492) list_form_gen_pane

0x3f10,	// (0x0002349b) scroll_pane_cp8

0xb99d,	// (0x0002af28) form_field_data_pane_ParamLimits

0xb99d,	// (0x0002af28) form_field_data_pane

0xb9b4,	// (0x0002af3f) form_field_data_wide_pane_ParamLimits

0xb9b4,	// (0x0002af3f) form_field_data_wide_pane

0xb9d4,	// (0x0002af5f) form_field_popup_pane_ParamLimits

0xb9d4,	// (0x0002af5f) form_field_popup_pane

0xb9ec,	// (0x0002af77) form_field_popup_wide_pane_ParamLimits

0xb9ec,	// (0x0002af77) form_field_popup_wide_pane

0x05d5,	// (0x0001fb60) form_field_slider_pane_ParamLimits

0x05d5,	// (0x0001fb60) form_field_slider_pane

0x05e8,	// (0x0001fb73) form_field_slider_wide_pane_ParamLimits

0x05e8,	// (0x0001fb73) form_field_slider_wide_pane

0x3f21,	// (0x000234ac) data_form_pane

0xba0d,	// (0x0002af98) form_field_data_pane_t1

0x3f2d,	// (0x000234b8) input_focus_pane

0x061d,	// (0x0001fba8) data_form_wide_pane

0x063a,	// (0x0001fbc5) form_field_data_wide_pane_t1

0x3c9e,	// (0x00023229) input_focus_pane_cp6

0xba27,	// (0x0002afb2) form_field_popup_pane_t1

0x3f2d,	// (0x000234b8) input_focus_pane_cp7

0x3f5b,	// (0x000234e6) list_form_pane

0x067c,	// (0x0001fc07) form_field_popup_wide_pane_t1

0x3f2d,	// (0x000234b8) input_focus_pane_cp8

0x3f67,	// (0x000234f2) list_form_wide_pane

0xba49,	// (0x0002afd4) form_field_slider_pane_t1_ParamLimits

0xba49,	// (0x0002afd4) form_field_slider_pane_t1

0xba61,	// (0x0002afec) form_field_slider_pane_t2_ParamLimits

0xba61,	// (0x0002afec) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002ec0d) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002ec0d) form_field_slider_pane_t

0x3939,	// (0x00022ec4) input_focus_pane_cp9_ParamLimits

0x3939,	// (0x00022ec4) input_focus_pane_cp9

0xba76,	// (0x0002b001) slider_cont_pane_ParamLimits

0xba76,	// (0x0002b001) slider_cont_pane

0x3f76,	// (0x00023501) form_field_slider_wide_pane_t1_ParamLimits

0x3f76,	// (0x00023501) form_field_slider_wide_pane_t1

0x06d8,	// (0x0001fc63) form_field_slider_wide_pane_t2_ParamLimits

0x06d8,	// (0x0001fc63) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002ec12) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002ec12) form_field_slider_wide_pane_t

0x3939,	// (0x00022ec4) input_focus_pane_cp10_ParamLimits

0x3939,	// (0x00022ec4) input_focus_pane_cp10

0xba8a,	// (0x0002b015) slider_cont_pane_cp1_ParamLimits

0xba8a,	// (0x0002b015) slider_cont_pane_cp1

0xba9e,	// (0x0002b029) slider_form_pane_cp

0x3f88,	// (0x00023513) input_focus_pane_g1

0x3f90,	// (0x0002351b) input_focus_pane_g2

0x3f98,	// (0x00023523) input_focus_pane_g3

0x3fa0,	// (0x0002352b) input_focus_pane_g4

0x3fa8,	// (0x00023533) input_focus_pane_g5

0x3fb0,	// (0x0002353b) input_focus_pane_g6

0x3fb8,	// (0x00023543) input_focus_pane_g7

0x3fc0,	// (0x0002354b) input_focus_pane_g8

0x3fc8,	// (0x00023553) input_focus_pane_g9

0x35d4,	// (0x00022b5f) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002ec17) input_focus_pane_g

0x5a22,	// (0x00024fad) wait_border_pane_g3_copy1

0xbaa6,	// (0x0002b031) data_form_pane_t1

0x35d4,	// (0x00022b5f) wait_anim_pane_g1_copy1

0xbbc6,	// (0x0002b151) data_form_wide_pane_t1

0xbac0,	// (0x0002b04b) list_form_graphic_pane_cp_ParamLimits

0xbac0,	// (0x0002b04b) list_form_graphic_pane_cp

0x6943,	// (0x00025ece) slider_form_pane_g1

0x694c,	// (0x00025ed7) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002ef0e) slider_form_pane_g

0xbac0,	// (0x0002b04b) list_form_graphic_pane_ParamLimits

0xbac0,	// (0x0002b04b) list_form_graphic_pane

0x0756,	// (0x0001fce1) list_form_graphic_pane_g1

0x075e,	// (0x0001fce9) list_form_graphic_pane_t1_ParamLimits

0x075e,	// (0x0001fce9) list_form_graphic_pane_t1

0x36be,	// (0x00022c49) list_highlight_pane_cp5_ParamLimits

0x36be,	// (0x00022c49) list_highlight_pane_cp5

0xbad2,	// (0x0002b05d) find_pane_g1

0x3fd0,	// (0x0002355b) input_find_pane

0xbadb,	// (0x0002b066) input_find_pane_g1_ParamLimits

0xbadb,	// (0x0002b066) input_find_pane_g1

0xbae7,	// (0x0002b072) input_find_pane_t1_ParamLimits

0xbae7,	// (0x0002b072) input_find_pane_t1

0xbafc,	// (0x0002b087) input_find_pane_t2_ParamLimits

0xbafc,	// (0x0002b087) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002ec2c) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002ec2c) input_find_pane_t

0x3fd9,	// (0x00023564) input_focus_pane_cp5_ParamLimits

0x3fd9,	// (0x00023564) input_focus_pane_cp5

0x3ff3,	// (0x0002357e) bg_popup_window_pane_cp2_ParamLimits

0x3ff3,	// (0x0002357e) bg_popup_window_pane_cp2

0x4000,	// (0x0002358b) listscroll_menu_pane_ParamLimits

0x4000,	// (0x0002358b) listscroll_menu_pane

0xd26f,	// (0x0002c7fa) popup_submenu_window_ParamLimits

0xd26f,	// (0x0002c7fa) popup_submenu_window

0x4038,	// (0x000235c3) find_popup_pane_g1

0x4040,	// (0x000235cb) input_popup_find_pane_cp

0x3fd9,	// (0x00023564) input_focus_pane_cp4_ParamLimits

0x3fd9,	// (0x00023564) input_focus_pane_cp4

0x4056,	// (0x000235e1) input_popup_find_pane_t1_ParamLimits

0x4056,	// (0x000235e1) input_popup_find_pane_t1

0x35de,	// (0x00022b69) bg_popup_sub_pane_cp

0x4084,	// (0x0002360f) listscroll_popup_sub_pane

0x408c,	// (0x00023617) list_submenu_pane_ParamLimits

0x408c,	// (0x00023617) list_submenu_pane

0x409d,	// (0x00023628) scroll_pane_cp4

0x40a5,	// (0x00023630) list_single_popup_submenu_pane_ParamLimits

0x40a5,	// (0x00023630) list_single_popup_submenu_pane

0x40b9,	// (0x00023644) list_single_popup_submenu_pane_g1

0x40c1,	// (0x0002364c) list_single_popup_submenu_pane_t1_ParamLimits

0x40c1,	// (0x0002364c) list_single_popup_submenu_pane_t1

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp1_ParamLimits

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp1

0x40d6,	// (0x00023661) tabs_2_active_pane_g1

0xd2a9,	// (0x0002c834) tabs_2_active_pane_t1

0x3939,	// (0x00022ec4) bg_passive_tab_pane_cp1_ParamLimits

0x3939,	// (0x00022ec4) bg_passive_tab_pane_cp1

0x40d6,	// (0x00023661) tabs_2_passive_pane_g1

0xd2a9,	// (0x0002c834) tabs_2_passive_pane_t1

0x36be,	// (0x00022c49) bg_active_tab_pane_cp4

0xd2bb,	// (0x0002c846) tabs_2_long_active_pane_t1

0x4efd,	// (0x00024488) bg_passive_tab_pane_cp4

0x2247,	// (0x000217d2) list_single_midp_graphic_pane_g4_ParamLimits

0x36be,	// (0x00022c49) bg_active_tab_pane_cp5

0xd2ce,	// (0x0002c859) tabs_3_long_active_pane_t1

0x4efd,	// (0x00024488) bg_passive_tab_pane_cp5

0x2247,	// (0x000217d2) list_single_midp_graphic_pane_g4

0x36be,	// (0x00022c49) bg_popup_window_pane_cp13_ParamLimits

0x36be,	// (0x00022c49) bg_popup_window_pane_cp13

0x4138,	// (0x000236c3) listscroll_popup_fast_pane_ParamLimits

0x4138,	// (0x000236c3) listscroll_popup_fast_pane

0x4147,	// (0x000236d2) grid_popup_fast_pane_ParamLimits

0x4147,	// (0x000236d2) grid_popup_fast_pane

0x4159,	// (0x000236e4) scroll_pane_cp9_ParamLimits

0x4159,	// (0x000236e4) scroll_pane_cp9

0x825f,	// (0x000277ea) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x825f,	// (0x000277ea) list_single_graphic_hl_pane_t1_cp2

0x417d,	// (0x00023708) input_focus_pane_cp20_ParamLimits

0x417d,	// (0x00023708) input_focus_pane_cp20

0x418b,	// (0x00023716) query_popup_data_pane_t1_ParamLimits

0x418b,	// (0x00023716) query_popup_data_pane_t1

0x419e,	// (0x00023729) query_popup_data_pane_t2_ParamLimits

0x419e,	// (0x00023729) query_popup_data_pane_t2

0x41e4,	// (0x0002376f) query_popup_data_pane_t3_ParamLimits

0x41e4,	// (0x0002376f) query_popup_data_pane_t3

0x4225,	// (0x000237b0) query_popup_data_pane_t4_ParamLimits

0x4225,	// (0x000237b0) query_popup_data_pane_t4

0x4261,	// (0x000237ec) query_popup_data_pane_t5_ParamLimits

0x4261,	// (0x000237ec) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002ec31) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002ec31) query_popup_data_pane_t

0x3f88,	// (0x00023513) bg_set_opt_pane_g1

0x3f90,	// (0x0002351b) bg_set_opt_pane_g2

0x3f98,	// (0x00023523) bg_set_opt_pane_g3

0x3fa0,	// (0x0002352b) bg_set_opt_pane_g4

0x3fa8,	// (0x00023533) bg_set_opt_pane_g5

0x3fb0,	// (0x0002353b) bg_set_opt_pane_g6

0x3fb8,	// (0x00023543) bg_set_opt_pane_g7

0x3fc0,	// (0x0002354b) bg_set_opt_pane_g8

0x3fc8,	// (0x00023553) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002ec3c) bg_set_opt_pane_g

0x18f7,	// (0x00020e82) control_top_pane_stacon_ParamLimits

0x18f7,	// (0x00020e82) control_top_pane_stacon

0x194a,	// (0x00020ed5) signal_pane_stacon_ParamLimits

0x194a,	// (0x00020ed5) signal_pane_stacon

0x484d,	// (0x00023dd8) stacon_top_pane_g1_ParamLimits

0x484d,	// (0x00023dd8) stacon_top_pane_g1

0x196f,	// (0x00020efa) title_pane_stacon_ParamLimits

0x196f,	// (0x00020efa) title_pane_stacon

0x1999,	// (0x00020f24) uni_indicator_pane_stacon_ParamLimits

0x1999,	// (0x00020f24) uni_indicator_pane_stacon

0x19ae,	// (0x00020f39) battery_pane_stacon_ParamLimits

0x19ae,	// (0x00020f39) battery_pane_stacon

0x19f2,	// (0x00020f7d) control_bottom_pane_stacon_ParamLimits

0x19f2,	// (0x00020f7d) control_bottom_pane_stacon

0x1a15,	// (0x00020fa0) navi_pane_stacon_ParamLimits

0x1a15,	// (0x00020fa0) navi_pane_stacon

0x486f,	// (0x00023dfa) stacon_bottom_pane_g1_ParamLimits

0x486f,	// (0x00023dfa) stacon_bottom_pane_g1

0x165a,	// (0x00020be5) aid_levels_signal_lsc_ParamLimits

0x165a,	// (0x00020be5) aid_levels_signal_lsc

0x1670,	// (0x00020bfb) signal_pane_stacon_g1_ParamLimits

0x1670,	// (0x00020bfb) signal_pane_stacon_g1

0x1684,	// (0x00020c0f) signal_pane_stacon_g2_ParamLimits

0x1684,	// (0x00020c0f) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002ec4f) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002ec4f) signal_pane_stacon_g

0x16b9,	// (0x00020c44) title_pane_stacon_t1_ParamLimits

0x16b9,	// (0x00020c44) title_pane_stacon_t1

0x42a5,	// (0x00023830) uni_indicator_pane_stacon_g1

0x42af,	// (0x0002383a) uni_indicator_pane_stacon_g2

0x42b9,	// (0x00023844) uni_indicator_pane_stacon_g3

0x42c3,	// (0x0002384e) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002ec5b) uni_indicator_pane_stacon_g

0x16de,	// (0x00020c69) control_top_pane_stacon_g1

0x16e6,	// (0x00020c71) control_top_pane_stacon_t1_ParamLimits

0x16e6,	// (0x00020c71) control_top_pane_stacon_t1

0x171d,	// (0x00020ca8) aid_levels_battery_lsc_ParamLimits

0x171d,	// (0x00020ca8) aid_levels_battery_lsc

0x1734,	// (0x00020cbf) battery_pane_stacon_g1_ParamLimits

0x1734,	// (0x00020cbf) battery_pane_stacon_g1

0x1747,	// (0x00020cd2) battery_pane_stacon_g2_ParamLimits

0x1747,	// (0x00020cd2) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002ec64) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002ec64) battery_pane_stacon_g

0x1785,	// (0x00020d10) navi_icon_pane_stacon

0x1799,	// (0x00020d24) navi_navi_pane_stacon

0x1785,	// (0x00020d10) navi_text_pane_stacon

0x16de,	// (0x00020c69) control_bottom_pane_stacon_g1

0x17ad,	// (0x00020d38) control_bottom_pane_stacon_t1_ParamLimits

0x17ad,	// (0x00020d38) control_bottom_pane_stacon_t1

0xd2e0,	// (0x0002c86b) grid_app_pane_ParamLimits

0xd2e0,	// (0x0002c86b) grid_app_pane

0xd318,	// (0x0002c8a3) scroll_pane_cp15_ParamLimits

0xd318,	// (0x0002c8a3) scroll_pane_cp15

0xd32d,	// (0x0002c8b8) cell_app_pane_ParamLimits

0xd32d,	// (0x0002c8b8) cell_app_pane

0xd372,	// (0x0002c8fd) cell_app_pane_g1_ParamLimits

0xd372,	// (0x0002c8fd) cell_app_pane_g1

0x4362,	// (0x000238ed) cell_app_pane_g2_ParamLimits

0x4362,	// (0x000238ed) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002ec69) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002ec69) cell_app_pane_g

0xd392,	// (0x0002c91d) cell_app_pane_t1_ParamLimits

0xd392,	// (0x0002c91d) cell_app_pane_t1

0x4385,	// (0x00023910) grid_highlight_pane_ParamLimits

0x4385,	// (0x00023910) grid_highlight_pane

0x3f88,	// (0x00023513) cell_highlight_pane_g1

0x3f90,	// (0x0002351b) cell_highlight_pane_g2

0x3f98,	// (0x00023523) cell_highlight_pane_g3

0x3fa0,	// (0x0002352b) cell_highlight_pane_g4

0x3fa8,	// (0x00023533) cell_highlight_pane_g5

0x3fb0,	// (0x0002353b) cell_highlight_pane_g6

0x3fb8,	// (0x00023543) cell_highlight_pane_g7

0x3fc0,	// (0x0002354b) cell_highlight_pane_g8

0x3fc8,	// (0x00023553) cell_highlight_pane_g9

0x35d4,	// (0x00022b5f) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002ec17) cell_highlight_pane_g

0x4396,	// (0x00023921) bg_scroll_pane

0x17f7,	// (0x00020d82) scroll_handle_pane

0x43dd,	// (0x00023968) scroll_bg_pane_g1

0x43f2,	// (0x0002397d) scroll_bg_pane_g2

0x440a,	// (0x00023995) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002ec6e) scroll_bg_pane_g

0x441f,	// (0x000239aa) scroll_handle_focus_pane_ParamLimits

0x441f,	// (0x000239aa) scroll_handle_focus_pane

0x43dd,	// (0x00023968) scroll_handle_pane_g1

0x442c,	// (0x000239b7) scroll_handle_pane_g2

0x440a,	// (0x00023995) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002ec75) scroll_handle_pane_g

0x3fd9,	// (0x00023564) bg_popup_sub_pane_cp21_ParamLimits

0x3fd9,	// (0x00023564) bg_popup_sub_pane_cp21

0x4440,	// (0x000239cb) popup_fep_japan_predictive_window_t1_ParamLimits

0x4440,	// (0x000239cb) popup_fep_japan_predictive_window_t1

0x445a,	// (0x000239e5) popup_fep_japan_predictive_window_t2_ParamLimits

0x445a,	// (0x000239e5) popup_fep_japan_predictive_window_t2

0x448d,	// (0x00023a18) popup_fep_japan_predictive_window_t3_ParamLimits

0x448d,	// (0x00023a18) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002ec7c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002ec7c) popup_fep_japan_predictive_window_t

0x35de,	// (0x00022b69) bg_popup_sub_pane_cp23

0x44c4,	// (0x00023a4f) listscroll_japin_cand_pane

0x44cc,	// (0x00023a57) popup_fep_japan_candidate_window_t1

0x44da,	// (0x00023a65) candidate_pane_ParamLimits

0x44da,	// (0x00023a65) candidate_pane

0x44ec,	// (0x00023a77) scroll_pane_cp30

0x44f4,	// (0x00023a7f) list_single_popup_jap_candidate_pane_ParamLimits

0x44f4,	// (0x00023a7f) list_single_popup_jap_candidate_pane

0x35de,	// (0x00022b69) list_highlight_pane_cp30

0x4509,	// (0x00023a94) list_single_popup_jap_candidate_pane_t1

0x4518,	// (0x00023aa3) level_1_signal

0x452a,	// (0x00023ab5) level_2_signal

0x453d,	// (0x00023ac8) level_3_signal

0x4550,	// (0x00023adb) level_4_signal

0x4563,	// (0x00023aee) level_5_signal

0x4576,	// (0x00023b01) level_6_signal

0x4589,	// (0x00023b14) level_7_signal

0x4518,	// (0x00023aa3) level_1_battery

0x452a,	// (0x00023ab5) level_2_battery

0x453d,	// (0x00023ac8) level_3_battery

0x4550,	// (0x00023adb) level_4_battery

0x4563,	// (0x00023aee) level_5_battery

0x4576,	// (0x00023b01) level_6_battery

0x4589,	// (0x00023b14) level_7_battery

0x45b4,	// (0x00023b3f) list_menu_pane_ParamLimits

0x45b4,	// (0x00023b3f) list_menu_pane

0x45ca,	// (0x00023b55) scroll_pane_cp25_ParamLimits

0x45ca,	// (0x00023b55) scroll_pane_cp25

0x45e3,	// (0x00023b6e) list_double2_graphic_pane_cp2_ParamLimits

0x45e3,	// (0x00023b6e) list_double2_graphic_pane_cp2

0x45e3,	// (0x00023b6e) list_double2_large_graphic_pane_cp2_ParamLimits

0x45e3,	// (0x00023b6e) list_double2_large_graphic_pane_cp2

0x45e3,	// (0x00023b6e) list_double2_pane_cp2_ParamLimits

0x45e3,	// (0x00023b6e) list_double2_pane_cp2

0x45e3,	// (0x00023b6e) list_double_graphic_pane_cp2_ParamLimits

0x45e3,	// (0x00023b6e) list_double_graphic_pane_cp2

0x45e3,	// (0x00023b6e) list_double_large_graphic_pane_cp2_ParamLimits

0x45e3,	// (0x00023b6e) list_double_large_graphic_pane_cp2

0x45e3,	// (0x00023b6e) list_double_number_pane_cp2_ParamLimits

0x45e3,	// (0x00023b6e) list_double_number_pane_cp2

0x45e3,	// (0x00023b6e) list_double_pane_cp2_ParamLimits

0x45e3,	// (0x00023b6e) list_double_pane_cp2

0xd3a9,	// (0x0002c934) list_single_2graphic_pane_cp2_ParamLimits

0xd3a9,	// (0x0002c934) list_single_2graphic_pane_cp2

0xd3a9,	// (0x0002c934) list_single_graphic_heading_pane_cp2_ParamLimits

0xd3a9,	// (0x0002c934) list_single_graphic_heading_pane_cp2

0xd3a9,	// (0x0002c934) list_single_graphic_pane_cp2_ParamLimits

0xd3a9,	// (0x0002c934) list_single_graphic_pane_cp2

0xd3a9,	// (0x0002c934) list_single_heading_pane_cp2_ParamLimits

0xd3a9,	// (0x0002c934) list_single_heading_pane_cp2

0x4620,	// (0x00023bab) list_single_large_graphic_pane_cp2_ParamLimits

0x4620,	// (0x00023bab) list_single_large_graphic_pane_cp2

0xd3a9,	// (0x0002c934) list_single_number_heading_pane_cp2_ParamLimits

0xd3a9,	// (0x0002c934) list_single_number_heading_pane_cp2

0xd3a9,	// (0x0002c934) list_single_number_pane_cp2_ParamLimits

0xd3a9,	// (0x0002c934) list_single_number_pane_cp2

0xd3a9,	// (0x0002c934) list_single_pane_cp2_ParamLimits

0xd3a9,	// (0x0002c934) list_single_pane_cp2

0x469c,	// (0x00023c27) bg_popup_sub_pane_cp22

0x18a9,	// (0x00020e34) popup_side_volume_key_window_g1

0x18d3,	// (0x00020e5e) popup_side_volume_key_window_t1

0x18ef,	// (0x00020e7a) volume_small_pane_cp1

0x3939,	// (0x00022ec4) bg_popup_sub_pane_cp24_ParamLimits

0x3939,	// (0x00022ec4) bg_popup_sub_pane_cp24

0x46b2,	// (0x00023c3d) fep_china_uni_candidate_pane_ParamLimits

0x46b2,	// (0x00023c3d) fep_china_uni_candidate_pane

0x46c6,	// (0x00023c51) fep_china_uni_entry_pane

0x46d6,	// (0x00023c61) popup_fep_china_uni_window_g1

0x46f2,	// (0x00023c7d) fep_china_uni_entry_pane_g1

0x46fa,	// (0x00023c85) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002ecad) fep_china_uni_entry_pane_g

0x4702,	// (0x00023c8d) fep_entry_item_pane

0x470c,	// (0x00023c97) fep_candidate_item_pane

0x4714,	// (0x00023c9f) fep_china_uni_candidate_pane_g1

0x471c,	// (0x00023ca7) fep_china_uni_candidate_pane_g2

0x4724,	// (0x00023caf) fep_china_uni_candidate_pane_g3

0x472c,	// (0x00023cb7) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002ecb2) fep_china_uni_candidate_pane_g

0x35d4,	// (0x00022b5f) fep_entry_item_pane_g1

0x4734,	// (0x00023cbf) fep_entry_item_pane_t1_ParamLimits

0x4734,	// (0x00023cbf) fep_entry_item_pane_t1

0x474a,	// (0x00023cd5) fep_candidate_item_pane_t1_ParamLimits

0x474a,	// (0x00023cd5) fep_candidate_item_pane_t1

0x475f,	// (0x00023cea) fep_candidate_item_pane_t2_ParamLimits

0x475f,	// (0x00023cea) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002ecbb) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002ecbb) fep_candidate_item_pane_t

0x36be,	// (0x00022c49) list_highlight_pane_cp31_ParamLimits

0x36be,	// (0x00022c49) list_highlight_pane_cp31

0x4771,	// (0x00023cfc) level_1_signal_lsc

0x477a,	// (0x00023d05) level_2_signal_lsc

0x4783,	// (0x00023d0e) level_3_signal_lsc

0x478c,	// (0x00023d17) level_4_signal_lsc

0x4795,	// (0x00023d20) level_5_signal_lsc

0x479e,	// (0x00023d29) level_6_signal_lsc

0x47a7,	// (0x00023d32) level_7_signal_lsc

0x47a7,	// (0x00023d32) level_1_battery_lsc

0x47b0,	// (0x00023d3b) level_2_battery_lsc

0x47b9,	// (0x00023d44) level_3_battery_lsc

0x47c2,	// (0x00023d4d) level_4_battery_lsc

0x47cb,	// (0x00023d56) level_5_battery_lsc

0x47d4,	// (0x00023d5f) level_6_battery_lsc

0x4771,	// (0x00023cfc) level_7_battery_lsc

0x47dd,	// (0x00023d68) scroll_handle_focus_pane_g1

0x47e6,	// (0x00023d71) scroll_handle_focus_pane_g2

0x47ef,	// (0x00023d7a) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002ecc0) scroll_handle_focus_pane_g

0xbb11,	// (0x0002b09c) list_single_2graphic_pane_g1_ParamLimits

0xbb11,	// (0x0002b09c) list_single_2graphic_pane_g1

0xb5fa,	// (0x0002ab85) list_single_2graphic_pane_g2_ParamLimits

0xb5fa,	// (0x0002ab85) list_single_2graphic_pane_g2

0x0880,	// (0x0001fe0b) list_single_2graphic_pane_g3_ParamLimits

0x0880,	// (0x0001fe0b) list_single_2graphic_pane_g3

0xbb1d,	// (0x0002b0a8) list_single_2graphic_pane_g4_ParamLimits

0xbb1d,	// (0x0002b0a8) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002ecc7) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002ecc7) list_single_2graphic_pane_g

0xbb29,	// (0x0002b0b4) list_single_2graphic_pane_t1_ParamLimits

0xbb29,	// (0x0002b0b4) list_single_2graphic_pane_t1

0xbb57,	// (0x0002b0e2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb57,	// (0x0002b0e2) list_double2_graphic_large_graphic_pane_g1

0xb665,	// (0x0002abf0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb665,	// (0x0002abf0) list_double2_graphic_large_graphic_pane_g2

0xb676,	// (0x0002ac01) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb676,	// (0x0002ac01) list_double2_graphic_large_graphic_pane_g3

0xbb69,	// (0x0002b0f4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb69,	// (0x0002b0f4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002ecd0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002ecd0) list_double2_graphic_large_graphic_pane_g

0xbb75,	// (0x0002b100) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb75,	// (0x0002b100) list_double2_graphic_large_graphic_pane_t1

0xbb8b,	// (0x0002b116) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb8b,	// (0x0002b116) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002ecd9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002ecd9) list_double2_graphic_large_graphic_pane_t

0x4937,	// (0x00023ec2) popup_fast_swap_window_ParamLimits

0x4937,	// (0x00023ec2) popup_fast_swap_window

0x4953,	// (0x00023ede) popup_side_volume_key_window

0x496f,	// (0x00023efa) stacon_top_pane

0x4979,	// (0x00023f04) status_pane_ParamLimits

0x4979,	// (0x00023f04) status_pane

0xd466,	// (0x0002c9f1) status_small_pane

0x35de,	// (0x00022b69) control_pane

0x35de,	// (0x00022b69) stacon_bottom_pane

0x3f10,	// (0x0002349b) scroll_pane_cp121

0x3f07,	// (0x00023492) set_content_pane

0x47f8,	// (0x00023d83) bg_active_tab_pane_g1_cp1

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp1

0x480a,	// (0x00023d95) bg_active_tab_pane_g3_cp1

0x47f8,	// (0x00023d83) bg_passive_tab_pane_g1_cp1

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp1

0x480a,	// (0x00023d95) bg_passive_tab_pane_g3_cp1

0x4813,	// (0x00023d9e) bg_active_tab_pane_g1_cp2

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp2

0x481c,	// (0x00023da7) bg_active_tab_pane_g3_cp2

0x4813,	// (0x00023d9e) bg_passive_tab_pane_g1_cp2

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp2

0x481c,	// (0x00023da7) bg_passive_tab_pane_g3_cp2

0x4825,	// (0x00023db0) bg_active_tab_pane_g1_cp3

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp3

0x482e,	// (0x00023db9) bg_active_tab_pane_g3_cp3

0x4825,	// (0x00023db0) bg_passive_tab_pane_g1_cp3

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp3

0x482e,	// (0x00023db9) bg_passive_tab_pane_g3_cp3

0x4837,	// (0x00023dc2) bg_active_tab_pane_g1_cp4

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp4

0x4842,	// (0x00023dcd) bg_active_tab_pane_g3_cp4

0x4837,	// (0x00023dc2) bg_passive_tab_pane_g1_cp4

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp4

0x4842,	// (0x00023dcd) bg_passive_tab_pane_g3_cp4

0x488b,	// (0x00023e16) bg_active_tab_pane_g1_cp5

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp5

0x4894,	// (0x00023e1f) bg_active_tab_pane_g3_cp5

0x488b,	// (0x00023e16) bg_passive_tab_pane_g1_cp5

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp5

0x4894,	// (0x00023e1f) bg_passive_tab_pane_g3_cp5

0x6f41,	// (0x000264cc) list_set_graphic_pane_ParamLimits

0x6f41,	// (0x000264cc) list_set_graphic_pane

0x35de,	// (0x00022b69) bg_set_opt_pane_cp4

0xd436,	// (0x0002c9c1) list_set_graphic_pane_g1_ParamLimits

0xd436,	// (0x0002c9c1) list_set_graphic_pane_g1

0xd442,	// (0x0002c9cd) list_set_graphic_pane_g2_ParamLimits

0xd442,	// (0x0002c9cd) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002ecde) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002ecde) list_set_graphic_pane_g

0x0009,

0xfab5,	// (0x0002f040) volume_small_pane_cp_g

0x48ea,	// (0x00023e75) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x48ea,	// (0x00023e75) list_double2_large_graphic_pane_g1_cp2

0x48f6,	// (0x00023e81) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x48f6,	// (0x00023e81) list_double2_large_graphic_pane_g2_cp2

0x4907,	// (0x00023e92) list_double2_large_graphic_pane_g3_cp2

0x490f,	// (0x00023e9a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x490f,	// (0x00023e9a) list_double2_large_graphic_pane_t1_cp2

0x4925,	// (0x00023eb0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4925,	// (0x00023eb0) list_double2_large_graphic_pane_t2_cp2

0x64f5,	// (0x00025a80) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x64f5,	// (0x00025a80) list_double_large_graphic_pane_g1_cp2

0x6506,	// (0x00025a91) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6506,	// (0x00025a91) list_double_large_graphic_pane_g2_cp2

0x4aa0,	// (0x0002402b) list_double_large_graphic_pane_g3_cp2

0x6517,	// (0x00025aa2) list_double_large_graphic_pane_g4_cp

0x651f,	// (0x00025aaa) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x651f,	// (0x00025aaa) list_double_large_graphic_pane_t1_cp2

0x6536,	// (0x00025ac1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6536,	// (0x00025ac1) list_double_large_graphic_pane_t2_cp2

0x4992,	// (0x00023f1d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4992,	// (0x00023f1d) list_double2_graphic_pane_g1_cp2

0x49a0,	// (0x00023f2b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x49a0,	// (0x00023f2b) list_double2_graphic_pane_g2_cp2

0x49b1,	// (0x00023f3c) list_double2_graphic_pane_g3_cp2

0x49bb,	// (0x00023f46) list_double2_graphic_pane_t1_cp2_ParamLimits

0x49bb,	// (0x00023f46) list_double2_graphic_pane_t1_cp2

0x49d1,	// (0x00023f5c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x49d1,	// (0x00023f5c) list_double2_graphic_pane_t2_cp2

0x49e3,	// (0x00023f6e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x49e3,	// (0x00023f6e) list_single_number_heading_pane_g1_cp2

0x49ef,	// (0x00023f7a) list_single_number_heading_pane_g2_cp2

0x49f7,	// (0x00023f82) list_single_number_heading_pane_t1_cp2_ParamLimits

0x49f7,	// (0x00023f82) list_single_number_heading_pane_t1_cp2

0x4a0d,	// (0x00023f98) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4a0d,	// (0x00023f98) list_single_number_heading_pane_t2_cp2

0x4a1f,	// (0x00023faa) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4a1f,	// (0x00023faa) list_single_number_heading_pane_t3_cp2

0x49e3,	// (0x00023f6e) list_single_heading_pane_g1_cp2_ParamLimits

0x49e3,	// (0x00023f6e) list_single_heading_pane_g1_cp2

0x49ef,	// (0x00023f7a) list_single_heading_pane_g2_cp2

0x49f7,	// (0x00023f82) list_single_heading_pane_t1_cp2_ParamLimits

0x49f7,	// (0x00023f82) list_single_heading_pane_t1_cp2

0x62fd,	// (0x00025888) list_single_heading_pane_t2_cp2_ParamLimits

0x62fd,	// (0x00025888) list_single_heading_pane_t2_cp2

0x6245,	// (0x000257d0) list_double_graphic_pane_g1_cp2_ParamLimits

0x6245,	// (0x000257d0) list_double_graphic_pane_g1_cp2

0x6251,	// (0x000257dc) list_double_graphic_pane_g2_cp2_ParamLimits

0x6251,	// (0x000257dc) list_double_graphic_pane_g2_cp2

0x6260,	// (0x000257eb) list_double_graphic_pane_g3_cp2

0x6268,	// (0x000257f3) list_double_graphic_pane_t1_cp2_ParamLimits

0x6268,	// (0x000257f3) list_double_graphic_pane_t1_cp2

0x627e,	// (0x00025809) list_double_graphic_pane_t2_cp2_ParamLimits

0x627e,	// (0x00025809) list_double_graphic_pane_t2_cp2

0x4a94,	// (0x0002401f) list_double_number_pane_g1_cp2_ParamLimits

0x4a94,	// (0x0002401f) list_double_number_pane_g1_cp2

0x4aa0,	// (0x0002402b) list_double_number_pane_g2_cp2

0x6209,	// (0x00025794) list_double_number_pane_t1_cp2_ParamLimits

0x6209,	// (0x00025794) list_double_number_pane_t1_cp2

0x621d,	// (0x000257a8) list_double_number_pane_t2_cp2_ParamLimits

0x621d,	// (0x000257a8) list_double_number_pane_t2_cp2

0x6233,	// (0x000257be) list_double_number_pane_t3_cp2_ParamLimits

0x6233,	// (0x000257be) list_double_number_pane_t3_cp2

0x60f2,	// (0x0002567d) list_single_graphic_pane_g1_cp2_ParamLimits

0x60f2,	// (0x0002567d) list_single_graphic_pane_g1_cp2

0x4af8,	// (0x00024083) list_single_graphic_pane_g2_cp2_ParamLimits

0x4af8,	// (0x00024083) list_single_graphic_pane_g2_cp2

0x4b04,	// (0x0002408f) list_single_graphic_pane_g3_cp2

0x60c8,	// (0x00025653) list_single_graphic_pane_t1_cp2_ParamLimits

0x60c8,	// (0x00025653) list_single_graphic_pane_t1_cp2

0x4af8,	// (0x00024083) list_single_number_pane_g1_cp2_ParamLimits

0x4af8,	// (0x00024083) list_single_number_pane_g1_cp2

0x4b04,	// (0x0002408f) list_single_number_pane_g2_cp2

0x60c8,	// (0x00025653) list_single_number_pane_t1_cp2_ParamLimits

0x60c8,	// (0x00025653) list_single_number_pane_t1_cp2

0x60de,	// (0x00025669) list_single_number_pane_t2_cp2_ParamLimits

0x60de,	// (0x00025669) list_single_number_pane_t2_cp2

0x48f6,	// (0x00023e81) list_double2_pane_g1_cp2_ParamLimits

0x48f6,	// (0x00023e81) list_double2_pane_g1_cp2

0x4907,	// (0x00023e92) list_double2_pane_g2_cp2

0x4a6c,	// (0x00023ff7) list_double2_pane_t1_cp2_ParamLimits

0x4a6c,	// (0x00023ff7) list_double2_pane_t1_cp2

0x4a82,	// (0x0002400d) list_double2_pane_t2_cp2_ParamLimits

0x4a82,	// (0x0002400d) list_double2_pane_t2_cp2

0x4a94,	// (0x0002401f) list_double_pane_g1_cp2_ParamLimits

0x4a94,	// (0x0002401f) list_double_pane_g1_cp2

0x4aa0,	// (0x0002402b) list_double_pane_g2_cp2

0x4aa8,	// (0x00024033) list_double_pane_t1_cp2_ParamLimits

0x4aa8,	// (0x00024033) list_double_pane_t1_cp2

0x4abe,	// (0x00024049) list_double_pane_t2_cp2_ParamLimits

0x4abe,	// (0x00024049) list_double_pane_t2_cp2

0x4ae8,	// (0x00024073) list_single_pane_cp2_g3

0x4af8,	// (0x00024083) list_single_pane_g1_cp2_ParamLimits

0x4af8,	// (0x00024083) list_single_pane_g1_cp2

0x4b04,	// (0x0002408f) list_single_pane_g2_cp2

0x4b0c,	// (0x00024097) list_single_pane_t1_cp2_ParamLimits

0x4b0c,	// (0x00024097) list_single_pane_t1_cp2

0x4b24,	// (0x000240af) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4b24,	// (0x000240af) list_single_large_graphic_pane_g1_cp2

0x4b30,	// (0x000240bb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4b30,	// (0x000240bb) list_single_large_graphic_pane_g2_cp2

0x4b3c,	// (0x000240c7) list_single_large_graphic_pane_g3_cp2

0x4b44,	// (0x000240cf) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4b44,	// (0x000240cf) list_single_large_graphic_pane_g4_cp1

0x4b5e,	// (0x000240e9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4b5e,	// (0x000240e9) list_single_large_graphic_pane_t1_cp2

0x6094,	// (0x0002561f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6094,	// (0x0002561f) list_single_graphic_heading_pane_g1_cp2

0x6061,	// (0x000255ec) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6061,	// (0x000255ec) list_single_graphic_heading_pane_g4_cp2

0x4b04,	// (0x0002408f) list_single_graphic_heading_pane_g5_cp2

0x60a0,	// (0x0002562b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x60a0,	// (0x0002562b) list_single_graphic_heading_pane_t1_cp2

0x60b6,	// (0x00025641) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x60b6,	// (0x00025641) list_single_graphic_heading_pane_t2_cp2

0x6055,	// (0x000255e0) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6055,	// (0x000255e0) list_single_2graphic_pane_g1_cp2

0x6061,	// (0x000255ec) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6061,	// (0x000255ec) list_single_2graphic_pane_g2_cp2

0x4b04,	// (0x0002408f) list_single_2graphic_pane_g3_cp2

0x6072,	// (0x000255fd) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6072,	// (0x000255fd) list_single_2graphic_pane_g4_cp2

0x607e,	// (0x00025609) list_single_2graphic_pane_t1_cp2_ParamLimits

0x607e,	// (0x00025609) list_single_2graphic_pane_t1_cp2

0x35d4,	// (0x00022b5f) list_highlight_pane_g10_cp1

0x5c2d,	// (0x000251b8) list_highlight_pane_g1_cp1

0x5c35,	// (0x000251c0) list_highlight_pane_g2_cp1

0x5c3d,	// (0x000251c8) list_highlight_pane_g3_cp1

0x5c45,	// (0x000251d0) list_highlight_pane_g4_cp1

0x5c4d,	// (0x000251d8) list_highlight_pane_g5_cp1

0x5c55,	// (0x000251e0) list_highlight_pane_g6_cp1

0x5c5d,	// (0x000251e8) list_highlight_pane_g7_cp1

0x5c65,	// (0x000251f0) list_highlight_pane_g8_cp1

0x5c6d,	// (0x000251f8) list_highlight_pane_g9_cp1

0xdabe,	// (0x0002d049) form_field_slider_pane_t3

0xdacc,	// (0x0002d057) form_field_slider_pane_t4

0x5b69,	// (0x000250f4) slider_form_pane_ParamLimits

0x5b69,	// (0x000250f4) slider_form_pane

0x35de,	// (0x00022b69) control_abbreviations

0x35de,	// (0x00022b69) control_conventions

0x35de,	// (0x00022b69) control_definitions

0x35de,	// (0x00022b69) format_table_attribute

0x6347,	// (0x000258d2) bg_popup_preview_window_pane_g9

0x35de,	// (0x00022b69) format_table_data2

0x35de,	// (0x00022b69) format_table_data3

0x35de,	// (0x00022b69) format_table_data_example

0x0008,

0x35de,	// (0x00022b69) intro_purpose

0xf8e3,	// (0x0002ee6e) bg_popup_preview_window_pane_g

0x35de,	// (0x00022b69) texts_category

0x35de,	// (0x00022b69) texts_graphics

0x4b74,	// (0x000240ff) text_digital

0x4b83,	// (0x0002410e) text_primary

0x4b92,	// (0x0002411d) text_primary_small

0x4ba1,	// (0x0002412c) text_secondary

0x4bb0,	// (0x0002413b) text_title

0x6a82,	// (0x0002600d) bg_passive_tab_pane_g1_cp3_srt

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp3_srt

0x6a8b,	// (0x00026016) bg_passive_tab_pane_g3_cp3_srt

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp3_srt_ParamLimits

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp3_srt

0x6a94,	// (0x0002601f) tabs_4_active_pane_srt_g1

0xde29,	// (0x0002d3b4) tabs_4_active_pane_srt_t1_ParamLimits

0xde29,	// (0x0002d3b4) tabs_4_active_pane_srt_t1

0x6a82,	// (0x0002600d) bg_active_tab_pane_g1_cp3_copy1

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp3_copy1

0x6a8b,	// (0x00026016) bg_active_tab_pane_g3_cp3_copy1

0x36be,	// (0x00022c49) tabs_2_long_active_pane_srt_ParamLimits

0x36be,	// (0x00022c49) tabs_2_long_active_pane_srt

0x36be,	// (0x00022c49) tabs_2_long_passive_pane_srt_ParamLimits

0x36be,	// (0x00022c49) tabs_2_long_passive_pane_srt

0x4efd,	// (0x00024488) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4efd,	// (0x00024488) bg_passive_tab_pane_cp4_srt

0x6776,	// (0x00025d01) bg_passive_tab_pane_g1_cp4_srt

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp4_srt

0x677f,	// (0x00025d0a) bg_passive_tab_pane_g3_cp4_srt

0x36be,	// (0x00022c49) bg_active_tab_pane_cp4_srt_ParamLimits

0x36be,	// (0x00022c49) bg_active_tab_pane_cp4_srt

0xdc53,	// (0x0002d1de) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc53,	// (0x0002d1de) tabs_2_long_active_pane_srt_t1

0x6776,	// (0x00025d01) bg_active_tab_pane_g1_cp4_srt

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp4_srt

0x677f,	// (0x00025d0a) bg_active_tab_pane_g3_cp4_srt

0x3939,	// (0x00022ec4) tabs_3_long_active_pane_srt_ParamLimits

0x3939,	// (0x00022ec4) tabs_3_long_active_pane_srt

0x3939,	// (0x00022ec4) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3939,	// (0x00022ec4) tabs_3_long_passive_pane_cp_srt

0x3939,	// (0x00022ec4) tabs_3_long_passive_pane_srt_ParamLimits

0x3939,	// (0x00022ec4) tabs_3_long_passive_pane_srt

0x4efd,	// (0x00024488) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4efd,	// (0x00024488) bg_passive_tab_pane_cp5_srt

0x488b,	// (0x00023e16) bg_passive_tab_pane_g1_cp5_srt

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp5_srt

0x4894,	// (0x00023e1f) bg_passive_tab_pane_g3_cp5_srt

0x36be,	// (0x00022c49) bg_active_tab_pane_cp5_srt_ParamLimits

0x36be,	// (0x00022c49) bg_active_tab_pane_cp5_srt

0xdc3d,	// (0x0002d1c8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdc3d,	// (0x0002d1c8) tabs_3_long_active_pane_srt_t1

0x488b,	// (0x00023e16) bg_active_tab_pane_g1_cp5_srt

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp5_srt

0x4894,	// (0x00023e1f) bg_active_tab_pane_g3_cp5_srt

0x6756,	// (0x00025ce1) navi_text_pane_srt_t1

0x674e,	// (0x00025cd9) navi_icon_pane_srt_g1

0x4d79,	// (0x00024304) midp_editing_number_pane_srt

0x4bbf,	// (0x0002414a) midp_ticker_pane_srt

0x4d81,	// (0x0002430c) midp_ticker_pane_srt_g1

0x4d89,	// (0x00024314) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002ecfd) midp_ticker_pane_srt_g

0x4d91,	// (0x0002431c) midp_ticker_pane_srt_t1

0x673f,	// (0x00025cca) midp_editing_number_pane_t1_copy1

0x4efd,	// (0x00024488) listscroll_midp_pane

0x4efd,	// (0x00024488) midp_form_pane

0x4c2b,	// (0x000241b6) midp_info_popup_window_ParamLimits

0x4c2b,	// (0x000241b6) midp_info_popup_window

0x3fd9,	// (0x00023564) bg_popup_sub_pane_cp50_ParamLimits

0x3fd9,	// (0x00023564) bg_popup_sub_pane_cp50

0x5859,	// (0x00024de4) listscroll_midp_info_pane_ParamLimits

0x5859,	// (0x00024de4) listscroll_midp_info_pane

0x5841,	// (0x00024dcc) listscroll_form_midp_pane_ParamLimits

0x5841,	// (0x00024dcc) listscroll_form_midp_pane

0x584d,	// (0x00024dd8) scroll_bar_cp050

0xdab2,	// (0x0002d03d) list_midp_pane

0x74d8,	// (0x00026a63) signal_pane_g2_cp

0x575b,	// (0x00024ce6) listscroll_midp_info_pane_t1_ParamLimits

0x575b,	// (0x00024ce6) listscroll_midp_info_pane_t1

0x5773,	// (0x00024cfe) listscroll_midp_info_pane_t2_ParamLimits

0x5773,	// (0x00024cfe) listscroll_midp_info_pane_t2

0x57b1,	// (0x00024d3c) listscroll_midp_info_pane_t3_ParamLimits

0x57b1,	// (0x00024d3c) listscroll_midp_info_pane_t3

0x57eb,	// (0x00024d76) listscroll_midp_info_pane_t4_ParamLimits

0x57eb,	// (0x00024d76) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002eda9) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002eda9) listscroll_midp_info_pane_t

0x409d,	// (0x00023628) scroll_pane_cp21

0x56f9,	// (0x00024c84) form_midp_field_choice_group_pane

0x5702,	// (0x00024c8d) form_midp_field_text_pane

0x5741,	// (0x00024ccc) form_midp_field_time_pane

0x5749,	// (0x00024cd4) form_midp_gauge_slider_pane

0x5752,	// (0x00024cdd) form_midp_gauge_wait_pane

0x35de,	// (0x00022b69) form_midp_image_pane

0xbb9d,	// (0x0002b128) list_single_midp_pane_ParamLimits

0xbb9d,	// (0x0002b128) list_single_midp_pane

0xda90,	// (0x0002d01b) form_midp_field_text_pane_t1

0x547b,	// (0x00024a06) input_focus_pane_cp050

0x56e8,	// (0x00024c73) list_midp_form_text_pane

0x5680,	// (0x00024c0b) form_midp_field_choice_group_pane_t1

0x568e,	// (0x00024c19) input_focus_pane_cp051

0x56a2,	// (0x00024c2d) list_midp_choice_pane

0x35de,	// (0x00022b69) status_idle_pane

0x5664,	// (0x00024bef) form_midp_field_time_pane_t1

0x35d4,	// (0x00022b5f) wait_anim_pane_g2_copy1

0x5672,	// (0x00024bfd) form_midp_field_time_pane_t2

0x0001,

0x4cd9,	// (0x00024264) aid_navinavi_width_2_pane

0xf819,	// (0x0002eda4) form_midp_field_time_pane_t

0x35de,	// (0x00022b69) input_focus_pane_cp052

0x35de,	// (0x00022b69) bg_input_focus_pane_cp040

0x5624,	// (0x00024baf) form_midp_gauge_slider_pane_t1

0x5632,	// (0x00024bbd) form_midp_gauge_slider_pane_t2

0xda74,	// (0x0002cfff) form_midp_gauge_slider_pane_t3

0xda82,	// (0x0002d00d) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002ed9b) form_midp_gauge_slider_pane_t

0x565c,	// (0x00024be7) form_midp_slider_pane

0x36be,	// (0x00022c49) bg_input_focus_pane_cp041_ParamLimits

0x36be,	// (0x00022c49) bg_input_focus_pane_cp041

0x55f1,	// (0x00024b7c) form_midp_gauge_wait_pane_t1_ParamLimits

0x55f1,	// (0x00024b7c) form_midp_gauge_wait_pane_t1

0x5603,	// (0x00024b8e) form_midp_gauge_wait_pane_t2_ParamLimits

0x5603,	// (0x00024b8e) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002ed96) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002ed96) form_midp_gauge_wait_pane_t

0x5615,	// (0x00024ba0) form_midp_wait_pane_ParamLimits

0x5615,	// (0x00024ba0) form_midp_wait_pane

0x55bb,	// (0x00024b46) form_midp_image_pane_g1

0x55c4,	// (0x00024b4f) form_midp_image_pane_t1

0x55d3,	// (0x00024b5e) form_midp_image_pane_t2

0x55e2,	// (0x00024b6d) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002ed8f) form_midp_image_pane_t

0x55b2,	// (0x00024b3d) list_single_midp_pane_g1

0x0992,	// (0x0001ff1d) list_single_midp_pane_t1

0xda5f,	// (0x0002cfea) list_midp_form_item_pane_ParamLimits

0xda5f,	// (0x0002cfea) list_midp_form_item_pane

0x4c81,	// (0x0002420c) list_midp_form_item_pane_t1

0x4c90,	// (0x0002421b) midp_ticker_pane_g1

0x4c9c,	// (0x00024227) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002ece3) midp_ticker_pane_g

0x4ca8,	// (0x00024233) midp_ticker_pane_t1

0x6990,	// (0x00025f1b) midp_editing_number_pane_t1

0x696e,	// (0x00025ef9) midp_editing_number_pane

0x697d,	// (0x00025f08) midp_ticker_pane

0x672f,	// (0x00025cba) ai_message_heading_pane

0x35de,	// (0x00022b69) bg_popup_window_pane_cp14

0x6737,	// (0x00025cc2) listscroll_ai_message_pane

0x66b9,	// (0x00025c44) ai_message_heading_pane_g1_ParamLimits

0x66b9,	// (0x00025c44) ai_message_heading_pane_g1

0x66c5,	// (0x00025c50) ai_message_heading_pane_g2_ParamLimits

0x66c5,	// (0x00025c50) ai_message_heading_pane_g2

0x66d1,	// (0x00025c5c) ai_message_heading_pane_g3_ParamLimits

0x66d1,	// (0x00025c5c) ai_message_heading_pane_g3

0x66dd,	// (0x00025c68) ai_message_heading_pane_g4_ParamLimits

0x66dd,	// (0x00025c68) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002eed0) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002eed0) ai_message_heading_pane_g

0x66e9,	// (0x00025c74) ai_message_heading_pane_t1_ParamLimits

0x66e9,	// (0x00025c74) ai_message_heading_pane_t1

0x6703,	// (0x00025c8e) ai_message_heading_pane_t2_ParamLimits

0x6703,	// (0x00025c8e) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002eed9) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002eed9) ai_message_heading_pane_t

0x6715,	// (0x00025ca0) bg_popup_heading_pane_cp1_ParamLimits

0x6715,	// (0x00025ca0) bg_popup_heading_pane_cp1

0x66a7,	// (0x00025c32) list_ai_message_pane_ParamLimits

0x66a7,	// (0x00025c32) list_ai_message_pane

0x409d,	// (0x00023628) scroll_pane_cp10

0x6643,	// (0x00025bce) list_ai_message_pane_g1

0x664b,	// (0x00025bd6) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002eead) list_ai_message_pane_g

0x6653,	// (0x00025bde) list_ai_message_pane_t1_ParamLimits

0x6653,	// (0x00025bde) list_ai_message_pane_t1

0x6668,	// (0x00025bf3) list_ai_message_pane_t2_ParamLimits

0x6668,	// (0x00025bf3) list_ai_message_pane_t2

0x667d,	// (0x00025c08) list_ai_message_pane_t3_ParamLimits

0x667d,	// (0x00025c08) list_ai_message_pane_t3

0x6692,	// (0x00025c1d) list_ai_message_pane_t4_ParamLimits

0x6692,	// (0x00025c1d) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002eeb2) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002eeb2) list_ai_message_pane_t

0xdc1c,	// (0x0002d1a7) cell_ai_soft_ind_pane_ParamLimits

0xdc1c,	// (0x0002d1a7) cell_ai_soft_ind_pane

0x4cba,	// (0x00024245) cell_ai_soft_ind_pane_g1_ParamLimits

0x4cba,	// (0x00024245) cell_ai_soft_ind_pane_g1

0x35de,	// (0x00022b69) grid_highlight_cp1

0x4cc7,	// (0x00024252) text_secondary_cp56_ParamLimits

0x4cc7,	// (0x00024252) text_secondary_cp56

0x6603,	// (0x00025b8e) example_general_pane_ParamLimits

0x6603,	// (0x00025b8e) example_general_pane

0x660f,	// (0x00025b9a) example_parent_pane_g1_ParamLimits

0x660f,	// (0x00025b9a) example_parent_pane_g1

0x661b,	// (0x00025ba6) example_parent_pane_t1_ParamLimits

0x661b,	// (0x00025ba6) example_parent_pane_t1

0xc67c,	// (0x0002bc07) popup_preview_text_window_ParamLimits

0xc67c,	// (0x0002bc07) popup_preview_text_window

0x4af0,	// (0x0002407b) list_single_pane_cp2_g4

0x39ef,	// (0x00022f7a) bg_popup_preview_window_pane_ParamLimits

0x39ef,	// (0x00022f7a) bg_popup_preview_window_pane

0x634f,	// (0x000258da) popup_preview_text_window_t1_ParamLimits

0x634f,	// (0x000258da) popup_preview_text_window_t1

0x636d,	// (0x000258f8) popup_preview_text_window_t2_ParamLimits

0x636d,	// (0x000258f8) popup_preview_text_window_t2

0x63b6,	// (0x00025941) popup_preview_text_window_t3_ParamLimits

0x63b6,	// (0x00025941) popup_preview_text_window_t3

0x63fb,	// (0x00025986) popup_preview_text_window_t4_ParamLimits

0x63fb,	// (0x00025986) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002ee81) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002ee81) popup_preview_text_window_t

0x6479,	// (0x00025a04) scroll_pane_cp11

0x5407,	// (0x00024992) bg_popup_preview_window_pane_g1

0x630f,	// (0x0002589a) bg_popup_preview_window_pane_g2

0x6317,	// (0x000258a2) bg_popup_preview_window_pane_g3

0x631f,	// (0x000258aa) bg_popup_preview_window_pane_g4

0x6327,	// (0x000258b2) bg_popup_preview_window_pane_g5

0x632f,	// (0x000258ba) bg_popup_preview_window_pane_g6

0x6337,	// (0x000258c2) bg_popup_preview_window_pane_g7

0x633f,	// (0x000258ca) bg_popup_preview_window_pane_g8

0x11e6,	// (0x00020771) aid_popup_width_pane

0xc5f8,	// (0x0002bb83) popup_midp_note_alarm_window_ParamLimits

0xc5f8,	// (0x0002bb83) popup_midp_note_alarm_window

0x3f21,	// (0x000234ac) data_form_pane_ParamLimits

0xba03,	// (0x0002af8e) form_field_data_pane_g1

0xba0d,	// (0x0002af98) form_field_data_pane_t1_ParamLimits

0x3f2d,	// (0x000234b8) input_focus_pane_ParamLimits

0x061d,	// (0x0001fba8) data_form_wide_pane_ParamLimits

0x062e,	// (0x0001fbb9) form_field_data_wide_pane_g1

0x063a,	// (0x0001fbc5) form_field_data_wide_pane_t1_ParamLimits

0x3c9e,	// (0x00023229) input_focus_pane_cp6_ParamLimits

0xd29b,	// (0x0002c826) input_popup_find_pane_g1_ParamLimits

0xd29b,	// (0x0002c826) input_popup_find_pane_g1

0x1758,	// (0x00020ce3) aid_navi_side_left_pane

0x176d,	// (0x00020cf8) aid_navi_side_right_pane

0x5d28,	// (0x000252b3) bg_popup_window_pane_cp30_ParamLimits

0x5d28,	// (0x000252b3) bg_popup_window_pane_cp30

0x5da2,	// (0x0002532d) popup_midp_note_alarm_window_g1_ParamLimits

0x5da2,	// (0x0002532d) popup_midp_note_alarm_window_g1

0x5dd2,	// (0x0002535d) popup_midp_note_alarm_window_t1_ParamLimits

0x5dd2,	// (0x0002535d) popup_midp_note_alarm_window_t1

0x5e73,	// (0x000253fe) popup_midp_note_alarm_window_t2_ParamLimits

0x5e73,	// (0x000253fe) popup_midp_note_alarm_window_t2

0x5f21,	// (0x000254ac) popup_midp_note_alarm_window_t3_ParamLimits

0x5f21,	// (0x000254ac) popup_midp_note_alarm_window_t3

0x5f53,	// (0x000254de) popup_midp_note_alarm_window_t4_ParamLimits

0x5f53,	// (0x000254de) popup_midp_note_alarm_window_t4

0x5f79,	// (0x00025504) popup_midp_note_alarm_window_t5_ParamLimits

0x5f79,	// (0x00025504) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002ee1e) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002ee1e) popup_midp_note_alarm_window_t

0x6025,	// (0x000255b0) wait_bar_pane_cp1_ParamLimits

0x6025,	// (0x000255b0) wait_bar_pane_cp1

0x35de,	// (0x00022b69) wait_anim_pane_copy1

0x35de,	// (0x00022b69) wait_border_pane_copy1

0x5a0e,	// (0x00024f99) wait_border_pane_g1_copy1

0x0654,	// (0x0001fbdf) form_field_popup_pane_g1

0xba27,	// (0x0002afb2) form_field_popup_pane_t1_ParamLimits

0x3f2d,	// (0x000234b8) input_focus_pane_cp7_ParamLimits

0x3f5b,	// (0x000234e6) list_form_pane_ParamLimits

0x0674,	// (0x0001fbff) form_field_popup_wide_pane_g1

0x067c,	// (0x0001fc07) form_field_popup_wide_pane_t1_ParamLimits

0x3f2d,	// (0x000234b8) input_focus_pane_cp8_ParamLimits

0x3f67,	// (0x000234f2) list_form_wide_pane_ParamLimits

0x6b1a,	// (0x000260a5) aid_size_cell_graphic_pane

0xbaa6,	// (0x0002b031) data_form_pane_t1_ParamLimits

0xbbc6,	// (0x0002b151) data_form_wide_pane_t1_ParamLimits

0xd6ce,	// (0x0002cc59) bg_status_flat_pane

0xc08e,	// (0x0002b619) title_pane_t1_ParamLimits

0x3686,	// (0x00022c11) title_pane_t2_ParamLimits

0x36ac,	// (0x00022c37) title_pane_t3_ParamLimits

0xf557,	// (0x0002eae2) title_pane_t_ParamLimits

0x4518,	// (0x00023aa3) level_1_signal_ParamLimits

0x452a,	// (0x00023ab5) level_2_signal_ParamLimits

0x453d,	// (0x00023ac8) level_3_signal_ParamLimits

0x4550,	// (0x00023adb) level_4_signal_ParamLimits

0x4563,	// (0x00023aee) level_5_signal_ParamLimits

0x4576,	// (0x00023b01) level_6_signal_ParamLimits

0x4589,	// (0x00023b14) level_7_signal_ParamLimits

0x4518,	// (0x00023aa3) level_1_battery_ParamLimits

0x452a,	// (0x00023ab5) level_2_battery_ParamLimits

0x453d,	// (0x00023ac8) level_3_battery_ParamLimits

0x4550,	// (0x00023adb) level_4_battery_ParamLimits

0x4563,	// (0x00023aee) level_5_battery_ParamLimits

0x4576,	// (0x00023b01) level_6_battery_ParamLimits

0x4589,	// (0x00023b14) level_7_battery_ParamLimits

0x5c2d,	// (0x000251b8) bg_status_flat_pane_g1

0x5c35,	// (0x000251c0) bg_status_flat_pane_g2

0x5c3d,	// (0x000251c8) bg_status_flat_pane_g3

0x5c45,	// (0x000251d0) bg_status_flat_pane_g4

0x5c4d,	// (0x000251d8) bg_status_flat_pane_g5

0x5c55,	// (0x000251e0) bg_status_flat_pane_g6

0x5c5d,	// (0x000251e8) bg_status_flat_pane_g7

0xcfe6,	// (0x0002c571) tabs_3_active_pane_t1_ParamLimits

0xcfe6,	// (0x0002c571) tabs_3_passive_pane_t1_ParamLimits

0xcff8,	// (0x0002c583) tabs_4_active_pane_t1_ParamLimits

0xcff8,	// (0x0002c583) tabs_4_1_passive_pane_t1_ParamLimits

0xd2a9,	// (0x0002c834) tabs_2_active_pane_t1_ParamLimits

0xd2a9,	// (0x0002c834) tabs_2_passive_pane_t1_ParamLimits

0x36be,	// (0x00022c49) bg_active_tab_pane_cp4_ParamLimits

0xd2bb,	// (0x0002c846) tabs_2_long_active_pane_t1_ParamLimits

0x4efd,	// (0x00024488) bg_passive_tab_pane_cp4_ParamLimits

0xd9eb,	// (0x0002cf76) list_single_midp_graphic_pane_t1_ParamLimits

0x36be,	// (0x00022c49) bg_active_tab_pane_cp5_ParamLimits

0xd2ce,	// (0x0002c859) tabs_3_long_active_pane_t1_ParamLimits

0x4efd,	// (0x00024488) bg_passive_tab_pane_cp5_ParamLimits

0xd9eb,	// (0x0002cf76) list_single_midp_graphic_pane_t1

0xd6ce,	// (0x0002cc59) bg_status_flat_pane_ParamLimits

0x5097,	// (0x00024622) indicator_pane_cp2_ParamLimits

0x5097,	// (0x00024622) indicator_pane_cp2

0xd84c,	// (0x0002cdd7) navi_pane_srt_ParamLimits

0xd84c,	// (0x0002cdd7) navi_pane_srt

0x51e6,	// (0x00024771) popup_clock_digital_analogue_window_cp1

0x379b,	// (0x00022d26) indicator_pane_t1

0x4bbf,	// (0x0002414a) copy_highlight_pane

0x4bbf,	// (0x0002414a) cursor_graphics_pane

0x4bbf,	// (0x0002414a) graphic_within_text_pane

0x4bbf,	// (0x0002414a) link_highlight_pane

0x643c,	// (0x000259c7) popup_preview_text_window_t5_ParamLimits

0x643c,	// (0x000259c7) popup_preview_text_window_t5

0x4ce1,	// (0x0002426c) cursor_digital_pane

0x4ce1,	// (0x0002426c) cursor_primary_pane

0x4cf2,	// (0x0002427d) cursor_primary_small_pane

0x4cfa,	// (0x00024285) cursor_secondary_pane

0x4d02,	// (0x0002428d) cursor_title_pane

0x4ce1,	// (0x0002426c) link_highlight_digital_pane

0x4ce9,	// (0x00024274) link_highlight_primary_pane

0x4cf2,	// (0x0002427d) link_highlight_primary_small_pane

0x4cfa,	// (0x00024285) link_highlight_secondary_pane

0x4d02,	// (0x0002428d) link_highlight_title_pane

0x4ce1,	// (0x0002426c) copy_highlight_digital_pane

0x4ce1,	// (0x0002426c) copy_highlight_primary_pane

0x4cf2,	// (0x0002427d) copy_highlight_primary_small_pane

0x4cfa,	// (0x00024285) copy_highlight_secondary_pane

0x4d02,	// (0x0002428d) copy_highlight_title_pane

0x4cfa,	// (0x00024285) graphic_text_digital_pane

0x5ccb,	// (0x00025256) graphic_text_primary_pane

0x5cd4,	// (0x0002525f) graphic_text_primary_small_pane

0x4cf2,	// (0x0002427d) graphic_text_secondary_pane

0x4ce1,	// (0x0002426c) graphic_text_title_pane

0xd50a,	// (0x0002ca95) cursor_primary_pane_g1

0x5cbd,	// (0x00025248) cursor_text_primary_t1

0xdaee,	// (0x0002d079) cursor_primary_small_pane_g1

0x5caf,	// (0x0002523a) cursor_text_primary_small_t1

0xdae4,	// (0x0002d06f) cursor_primary_small_pane_g1_copy1

0x5c97,	// (0x00025222) cursor_text_primary_small_t1_copy1

0x5c75,	// (0x00025200) cursor_text_title_t1

0xdada,	// (0x0002d065) cursor_title_pane_g1

0xd50a,	// (0x0002ca95) cursor_digital_pane_g1

0x4d14,	// (0x0002429f) cursor_text_digital_t1

0x4d39,	// (0x000242c4) link_highlight_primary_pane_g1

0x5c1e,	// (0x000251a9) link_highlight_primary_pane_t1

0x4d22,	// (0x000242ad) link_highlight_primary_small_pane_g1

0x4d2a,	// (0x000242b5) link_highlight_primary_small_pane_t1

0x4d39,	// (0x000242c4) link_highlight_secondary_pane_g1

0x4d41,	// (0x000242cc) link_highlight_secondary_pane_t1

0x5b92,	// (0x0002511d) link_highlight_title_pane_g1

0x5b9a,	// (0x00025125) link_highlight_title_pane_t1

0x5b7b,	// (0x00025106) link_highlight_digital_pane_g1

0x5b83,	// (0x0002510e) link_highlight_digital_pane_t1

0x5a53,	// (0x00024fde) copy_highlight_primary_pane_g1

0x5a5b,	// (0x00024fe6) copy_highlight_primary_pane_t1

0x5a2d,	// (0x00024fb8) copy_highlight_primary_small_pane_g1

0x5a44,	// (0x00024fcf) copy_highlight_primary_small_pane_t1

0x4d50,	// (0x000242db) copy_highlight_secondary_pane_g1

0x4d58,	// (0x000242e3) copy_highlight_secondary_pane_t1

0x5a2d,	// (0x00024fb8) copy_highlight_title_pane_g1

0x5a35,	// (0x00024fc0) copy_highlight_title_pane_t1

0x5a53,	// (0x00024fde) copy_highlight_digital_pane_g1

0x6ce5,	// (0x00026270) copy_highlight_digital_pane_t1

0x6c39,	// (0x000261c4) graphic_text_primary_pane_g1

0x6cc9,	// (0x00026254) graphic_text_primary_pane_t1

0x6cd7,	// (0x00026262) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002ef4d) graphic_text_primary_pane_t

0x6ca5,	// (0x00026230) graphic_text_primary_small_pane_g1

0x6cad,	// (0x00026238) graphic_text_primary_small_pane_t1

0x6cbb,	// (0x00026246) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002ef48) graphic_text_primary_small_pane_t

0x6c81,	// (0x0002620c) graphic_text_secondary_pane_g1

0x6c89,	// (0x00026214) graphic_text_secondary_pane_t1

0x6c97,	// (0x00026222) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002ef43) graphic_text_secondary_pane_t

0x6c5d,	// (0x000261e8) graphic_text_title_pane_g1

0x6c65,	// (0x000261f0) graphic_text_title_pane_t1

0x6c73,	// (0x000261fe) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002ef3e) graphic_text_title_pane_t

0x6c39,	// (0x000261c4) graphic_text_digital_pane_g1

0x6c41,	// (0x000261cc) graphic_text_digital_pane_t1

0x6c4f,	// (0x000261da) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002ef39) graphic_text_digital_pane_t

0x36be,	// (0x00022c49) navi_icon_pane_srt_ParamLimits

0x36be,	// (0x00022c49) navi_icon_pane_srt

0x35de,	// (0x00022b69) navi_midp_pane_srt

0x35de,	// (0x00022b69) navi_navi_pane_srt

0x36be,	// (0x00022c49) navi_text_pane_srt_ParamLimits

0x36be,	// (0x00022c49) navi_text_pane_srt

0x6c04,	// (0x0002618f) navi_navi_icon_text_pane_srt

0x6c0c,	// (0x00026197) navi_navi_pane_srt_g1_ParamLimits

0x6c0c,	// (0x00026197) navi_navi_pane_srt_g1

0x6c1e,	// (0x000261a9) navi_navi_pane_srt_g2_ParamLimits

0x6c1e,	// (0x000261a9) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002ef34) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002ef34) navi_navi_pane_srt_g

0x6c30,	// (0x000261bb) navi_navi_tabs_pane_srt

0x6c04,	// (0x0002618f) navi_navi_text_pane_srt

0x6c04,	// (0x0002618f) navi_navi_volume_pane_srt

0x6bf5,	// (0x00026180) navi_navi_text_pane_srt_t1

0x25d3,	// (0x00021b5e) navi_navi_volume_pane_srt_g1

0x25db,	// (0x00021b66) volume_small_pane_srt_ParamLimits

0x25db,	// (0x00021b66) volume_small_pane_srt

0x1a38,	// (0x00020fc3) volume_small_pane_srt_g1_ParamLimits

0x1a38,	// (0x00020fc3) volume_small_pane_srt_g1

0x1a48,	// (0x00020fd3) volume_small_pane_srt_g2_ParamLimits

0x1a48,	// (0x00020fd3) volume_small_pane_srt_g2

0x1a59,	// (0x00020fe4) volume_small_pane_srt_g3_ParamLimits

0x1a59,	// (0x00020fe4) volume_small_pane_srt_g3

0x1a6a,	// (0x00020ff5) volume_small_pane_srt_g4_ParamLimits

0x1a6a,	// (0x00020ff5) volume_small_pane_srt_g4

0x1a7b,	// (0x00021006) volume_small_pane_srt_g5_ParamLimits

0x1a7b,	// (0x00021006) volume_small_pane_srt_g5

0x1a8c,	// (0x00021017) volume_small_pane_srt_g6_ParamLimits

0x1a8c,	// (0x00021017) volume_small_pane_srt_g6

0x1a9d,	// (0x00021028) volume_small_pane_srt_g7_ParamLimits

0x1a9d,	// (0x00021028) volume_small_pane_srt_g7

0x1aae,	// (0x00021039) volume_small_pane_srt_g8_ParamLimits

0x1aae,	// (0x00021039) volume_small_pane_srt_g8

0x1abf,	// (0x0002104a) volume_small_pane_srt_g9_ParamLimits

0x1abf,	// (0x0002104a) volume_small_pane_srt_g9

0x1ad0,	// (0x0002105b) volume_small_pane_srt_g10_ParamLimits

0x1ad0,	// (0x0002105b) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002ece8) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002ece8) volume_small_pane_srt_g

0x3a98,	// (0x00023023) query_popup_data_pane_cp2

0x6bdb,	// (0x00026166) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6bdb,	// (0x00026166) navi_navi_icon_text_pane_srt_t1

0x5ccb,	// (0x00025256) navi_tabs_2_long_pane_srt

0x5ccb,	// (0x00025256) navi_tabs_2_pane_srt

0x5ccb,	// (0x00025256) navi_tabs_3_long_pane_srt

0x5ccb,	// (0x00025256) navi_tabs_3_pane_srt

0x5ccb,	// (0x00025256) navi_tabs_4_pane_srt

0x25b3,	// (0x00021b3e) tabs_2_active_pane_srt_ParamLimits

0x25b3,	// (0x00021b3e) tabs_2_active_pane_srt

0x25c3,	// (0x00021b4e) tabs_2_passive_pane_srt_ParamLimits

0x25c3,	// (0x00021b4e) tabs_2_passive_pane_srt

0x547b,	// (0x00024a06) bg_passive_tab_pane_cp1_srt_ParamLimits

0x547b,	// (0x00024a06) bg_passive_tab_pane_cp1_srt

0x6ba7,	// (0x00026132) bg_passive_tab_pane_g1_cp1_srt

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp1_srt

0x6bb0,	// (0x0002613b) bg_passive_tab_pane_g3_cp1_srt

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp1_srt_ParamLimits

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp1_srt

0x6bb9,	// (0x00026144) tabs_2_active_pane_srt_g1

0xdecc,	// (0x0002d457) tabs_2_active_pane_srt_t1_ParamLimits

0xdecc,	// (0x0002d457) tabs_2_active_pane_srt_t1

0x6ba7,	// (0x00026132) bg_active_tab_pane_g1_cp1_srt

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp1_srt

0x6bb0,	// (0x0002613b) bg_active_tab_pane_g3_cp1_srt

0x2580,	// (0x00021b0b) tabs_3_active_pane_srt_ParamLimits

0x2580,	// (0x00021b0b) tabs_3_active_pane_srt

0x2591,	// (0x00021b1c) tabs_3_passive_pane_cp_srt_ParamLimits

0x2591,	// (0x00021b1c) tabs_3_passive_pane_cp_srt

0x25a2,	// (0x00021b2d) tabs_3_passive_pane_srt_ParamLimits

0x25a2,	// (0x00021b2d) tabs_3_passive_pane_srt

0x547b,	// (0x00024a06) bg_passive_tab_pane_cp2_srt_ParamLimits

0x547b,	// (0x00024a06) bg_passive_tab_pane_cp2_srt

0x4d67,	// (0x000242f2) bg_passive_tab_pane_g1_cp2_srt

0x4801,	// (0x00023d8c) bg_passive_tab_pane_g2_cp2_srt

0x4d70,	// (0x000242fb) bg_passive_tab_pane_g3_cp2_srt

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp2_srt_ParamLimits

0x3939,	// (0x00022ec4) bg_active_tab_pane_cp2_srt

0x6b8d,	// (0x00026118) tabs_3_active_pane_srt_g1

0xdeb6,	// (0x0002d441) tabs_3_active_pane_srt_t1_ParamLimits

0xdeb6,	// (0x0002d441) tabs_3_active_pane_srt_t1

0x4d67,	// (0x000242f2) bg_active_tab_pane_g1_cp2_srt

0x4801,	// (0x00023d8c) bg_active_tab_pane_g2_cp2_srt

0x4d70,	// (0x000242fb) bg_active_tab_pane_g3_cp2_srt

0x2538,	// (0x00021ac3) tabs_4_active_pane_srt_ParamLimits

0x2538,	// (0x00021ac3) tabs_4_active_pane_srt

0x254a,	// (0x00021ad5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x254a,	// (0x00021ad5) tabs_4_passive_pane_cp2_srt

0x1c35,	// (0x000211c0) aid_size_cell_toolbar

0x67e7,	// (0x00025d72) main_idle_act_pane_ParamLimits

0x1dd6,	// (0x00021361) popup_large_graphic_colour_window_ParamLimits

0xc908,	// (0x0002be93) popup_toolbar_window_ParamLimits

0xc908,	// (0x0002be93) popup_toolbar_window

0x699f,	// (0x00025f2a) list_single_graphic_2heading_pane_ParamLimits

0x699f,	// (0x00025f2a) list_single_graphic_2heading_pane

0x42cd,	// (0x00023858) aid_size_cell_apps_grid_lsc_pane

0x42df,	// (0x0002386a) aid_size_cell_apps_grid_prt_pane

0x4efd,	// (0x00024488) bg_wml_button_pane_cp1_ParamLimits

0x4efd,	// (0x00024488) bg_wml_button_pane_cp1

0xda90,	// (0x0002d01b) form_midp_field_text_pane_t1_ParamLimits

0x547b,	// (0x00024a06) input_focus_pane_cp050_ParamLimits

0x56e8,	// (0x00024c73) list_midp_form_text_pane_ParamLimits

0x568e,	// (0x00024c19) input_focus_pane_cp051_ParamLimits

0x56a2,	// (0x00024c2d) list_midp_choice_pane_ParamLimits

0xda2d,	// (0x0002cfb8) list_single_2graphic_pane_cp3_ParamLimits

0xda2d,	// (0x0002cfb8) list_single_2graphic_pane_cp3

0xda40,	// (0x0002cfcb) list_single_midp_graphic_pane_ParamLimits

0xda40,	// (0x0002cfcb) list_single_midp_graphic_pane

0x0868,	// (0x0001fdf3) list_single_graphic_2heading_pane_g1_ParamLimits

0x0868,	// (0x0001fdf3) list_single_graphic_2heading_pane_g1

0x0874,	// (0x0001fdff) list_single_graphic_2heading_pane_g4_ParamLimits

0x0874,	// (0x0001fdff) list_single_graphic_2heading_pane_g4

0x0880,	// (0x0001fe0b) list_single_graphic_2heading_pane_g5_ParamLimits

0x0880,	// (0x0001fe0b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002ed3b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002ed3b) list_single_graphic_2heading_pane_g

0x088c,	// (0x0001fe17) list_single_graphic_2heading_pane_t1_ParamLimits

0x088c,	// (0x0001fe17) list_single_graphic_2heading_pane_t1

0x08a0,	// (0x0001fe2b) list_single_graphic_2heading_pane_t2_ParamLimits

0x08a0,	// (0x0001fe2b) list_single_graphic_2heading_pane_t2

0x08ba,	// (0x0001fe45) list_single_graphic_2heading_pane_t3_ParamLimits

0x08ba,	// (0x0001fe45) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002ed42) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002ed42) list_single_graphic_2heading_pane_t

0x5345,	// (0x000248d0) bg_popup_sub_pane_cp2

0x536f,	// (0x000248fa) grid_toobar_pane

0x21ea,	// (0x00021775) cell_toolbar_pane_ParamLimits

0x21ea,	// (0x00021775) cell_toolbar_pane

0x53ab,	// (0x00024936) cell_toolbar_pane_g1_ParamLimits

0x53ab,	// (0x00024936) cell_toolbar_pane_g1

0x53bf,	// (0x0002494a) cell_toolbar_pane_g2_ParamLimits

0x53bf,	// (0x0002494a) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002ed49) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002ed49) cell_toolbar_pane_g

0x53e1,	// (0x0002496c) grid_highlight_pane_cp2_ParamLimits

0x53e1,	// (0x0002496c) grid_highlight_pane_cp2

0x53fb,	// (0x00024986) toolbar_button_pane

0x5407,	// (0x00024992) toolbar_button_pane_g1

0x540f,	// (0x0002499a) toolbar_button_pane_g2

0x5417,	// (0x000249a2) toolbar_button_pane_g3

0x541f,	// (0x000249aa) toolbar_button_pane_g4

0x5427,	// (0x000249b2) toolbar_button_pane_g5

0x542f,	// (0x000249ba) toolbar_button_pane_g6

0x5437,	// (0x000249c2) toolbar_button_pane_g7

0x543f,	// (0x000249ca) toolbar_button_pane_g8

0x5447,	// (0x000249d2) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002ed4e) toolbar_button_pane_g

0x2222,	// (0x000217ad) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2222,	// (0x000217ad) list_single_2graphic_pane_g1_cp3

0xc960,	// (0x0002beeb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc960,	// (0x0002beeb) list_single_2graphic_pane_g2_cp3

0x223f,	// (0x000217ca) list_single_2graphic_pane_g3_cp3

0x2247,	// (0x000217d2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2247,	// (0x000217d2) list_single_2graphic_pane_g4_cp3

0x2253,	// (0x000217de) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2253,	// (0x000217de) list_single_2graphic_pane_t1_cp3

0x58b9,	// (0x00024e44) list_single_midp_graphic_pane_g2_ParamLimits

0x58b9,	// (0x00024e44) list_single_midp_graphic_pane_g2

0x1c3d,	// (0x000211c8) aid_zoom_text_primary

0x083c,	// (0x0001fdc7) aid_zoom_text_secondary

0xd562,	// (0x0002caed) status_small_pane_g7_ParamLimits

0xd562,	// (0x0002caed) status_small_pane_g7

0xd585,	// (0x0002cb10) status_small_pane_t1_ParamLimits

0xc06a,	// (0x0002b5f5) title_pane_g2

0x0003,

0xf54e,	// (0x0002ead9) title_pane_g

0xd1ae,	// (0x0002c739) aid_size_cell_colour_1_pane_ParamLimits

0xd1ae,	// (0x0002c739) aid_size_cell_colour_1_pane

0xd1c2,	// (0x0002c74d) aid_size_cell_colour_2_pane_ParamLimits

0xd1c2,	// (0x0002c74d) aid_size_cell_colour_2_pane

0xd1d6,	// (0x0002c761) aid_size_cell_colour_3_pane_ParamLimits

0xd1d6,	// (0x0002c761) aid_size_cell_colour_3_pane

0xd1ea,	// (0x0002c775) aid_size_cell_colour_4_pane_ParamLimits

0xd1ea,	// (0x0002c775) aid_size_cell_colour_4_pane

0x1695,	// (0x00020c20) title_pane_stacon_g1_ParamLimits

0x1695,	// (0x00020c20) title_pane_stacon_g1

0x5ab2,	// (0x0002503d) popup_note_wait_window_g3_ParamLimits

0x5ab2,	// (0x0002503d) popup_note_wait_window_g3

0x5b28,	// (0x000250b3) popup_note_wait_window_t5_ParamLimits

0x5b28,	// (0x000250b3) popup_note_wait_window_t5

0x35de,	// (0x00022b69) main_feb_china_hwr_fs_writing_pane

0xc310,	// (0x0002b89b) popup_feb_china_hwr_fs_window_ParamLimits

0xc310,	// (0x0002b89b) popup_feb_china_hwr_fs_window

0xc971,	// (0x0002befc) aid_size_cell_hwr_fs_ParamLimits

0xc971,	// (0x0002befc) aid_size_cell_hwr_fs

0x547b,	// (0x00024a06) bg_popup_sub_pane_cp3_ParamLimits

0x547b,	// (0x00024a06) bg_popup_sub_pane_cp3

0xc986,	// (0x0002bf11) grid_hwr_fs_pane_ParamLimits

0xc986,	// (0x0002bf11) grid_hwr_fs_pane

0x229c,	// (0x00021827) linegrid_hwr_fs_pane_ParamLimits

0x229c,	// (0x00021827) linegrid_hwr_fs_pane

0xc99e,	// (0x0002bf29) cell_hwr_fs_pane_ParamLimits

0xc99e,	// (0x0002bf29) cell_hwr_fs_pane

0x5487,	// (0x00024a12) linegrid_hwr_fs_pane_g1_ParamLimits

0x5487,	// (0x00024a12) linegrid_hwr_fs_pane_g1

0xda01,	// (0x0002cf8c) linegrid_hwr_fs_pane_g2_ParamLimits

0xda01,	// (0x0002cf8c) linegrid_hwr_fs_pane_g2

0x54a5,	// (0x00024a30) linegrid_hwr_fs_pane_g3_ParamLimits

0x54a5,	// (0x00024a30) linegrid_hwr_fs_pane_g3

0x22ce,	// (0x00021859) linegrid_hwr_fs_pane_g4_ParamLimits

0x22ce,	// (0x00021859) linegrid_hwr_fs_pane_g4

0x22e8,	// (0x00021873) linegrid_hwr_fs_pane_g5_ParamLimits

0x22e8,	// (0x00021873) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002ed74) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002ed74) linegrid_hwr_fs_pane_g

0x54b1,	// (0x00024a3c) cell_hwr_fs_pane_g1_ParamLimits

0x54b1,	// (0x00024a3c) cell_hwr_fs_pane_g1

0x527c,	// (0x00024807) cell_hwr_fs_pane_g2_ParamLimits

0x527c,	// (0x00024807) cell_hwr_fs_pane_g2

0xda13,	// (0x0002cf9e) cell_hwr_fs_pane_g3_ParamLimits

0xda13,	// (0x0002cf9e) cell_hwr_fs_pane_g3

0xda20,	// (0x0002cfab) cell_hwr_fs_pane_g4_ParamLimits

0xda20,	// (0x0002cfab) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002ed7f) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002ed7f) cell_hwr_fs_pane_g

0xc9c4,	// (0x0002bf4f) cell_hwr_fs_pane_t1

0x35de,	// (0x00022b69) grid_highlight_pane_cp6

0x35de,	// (0x00022b69) main_idle_act2_pane

0x4084,	// (0x0002360f) aid_inside_area_popup_secondary

0xdaf8,	// (0x0002d083) aid_inside_area_window_primary_ParamLimits

0xdaf8,	// (0x0002d083) aid_inside_area_window_primary

0x6cf4,	// (0x0002627f) ai2_news_ticker_pane

0x6cfc,	// (0x00026287) aid_size_cell_ai1_link_ParamLimits

0x6cfc,	// (0x00026287) aid_size_cell_ai1_link

0xdee2,	// (0x0002d46d) popup_ai2_data_window_ParamLimits

0xdee2,	// (0x0002d46d) popup_ai2_data_window

0x6d2c,	// (0x000262b7) popup_ai2_link_window_ParamLimits

0x6d2c,	// (0x000262b7) popup_ai2_link_window

0x547b,	// (0x00024a06) bg_popup_sub_pane_cp4_ParamLimits

0x547b,	// (0x00024a06) bg_popup_sub_pane_cp4

0x6d40,	// (0x000262cb) grid_ai2_link_pane_ParamLimits

0x6d40,	// (0x000262cb) grid_ai2_link_pane

0x6d57,	// (0x000262e2) popup_ai2_link_window_g1_ParamLimits

0x6d57,	// (0x000262e2) popup_ai2_link_window_g1

0x6d63,	// (0x000262ee) popup_ai2_link_window_g2_ParamLimits

0x6d63,	// (0x000262ee) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002ef52) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002ef52) popup_ai2_link_window_g

0x6d72,	// (0x000262fd) ai2_mp_button_pane

0x6d7a,	// (0x00026305) ai2_mp_volume_pane

0x568e,	// (0x00024c19) bg_popup_sub_pane_cp5_ParamLimits

0x568e,	// (0x00024c19) bg_popup_sub_pane_cp5

0x6d82,	// (0x0002630d) heading_ai2_gene_pane_ParamLimits

0x6d82,	// (0x0002630d) heading_ai2_gene_pane

0x6d8e,	// (0x00026319) list_ai2_gene_pane_ParamLimits

0x6d8e,	// (0x00026319) list_ai2_gene_pane

0x6dd6,	// (0x00026361) cell_ai2_link_pane_ParamLimits

0x6dd6,	// (0x00026361) cell_ai2_link_pane

0x6dec,	// (0x00026377) cell_ai2_link_pane_g1

0x35de,	// (0x00022b69) grid_highlight_pane_cp7

0x25f0,	// (0x00021b7b) ai2_mp_volume_pane_g1

0x6ebc,	// (0x00026447) ai2_mp_volume_pane_g2

0xdf0c,	// (0x0002d497) list_ai2_gene_pane_t1

0x6ec4,	// (0x0002644f) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002ef6b) ai2_mp_volume_pane_g

0x25f8,	// (0x00021b83) volume_small_pane_cp3

0x6ecc,	// (0x00026457) aid_size_cell_ai2_button

0x6ed4,	// (0x0002645f) grid_ai2_button_pane

0x6edd,	// (0x00026468) cell_ai2_button_pane_ParamLimits

0x6edd,	// (0x00026468) cell_ai2_button_pane

0x35d4,	// (0x00022b5f) cell_ai2_button_pane_g1

0x35de,	// (0x00022b69) grid_highlight_pane_cp8

0x6e7c,	// (0x00026407) ai2_gene_pane_t1_ParamLimits

0x6e7c,	// (0x00026407) ai2_gene_pane_t1

0xc28a,	// (0x0002b815) aid_height_parent_landscape

0xdc6a,	// (0x0002d1f5) aid_height_set_list

0x67e7,	// (0x00025d72) aid_size_parent

0x6b1a,	// (0x000260a5) aid_size_cell_graphic_pane_ParamLimits

0x6d9e,	// (0x00026329) popup_ai2_data_window_g1_ParamLimits

0x6d9e,	// (0x00026329) popup_ai2_data_window_g1

0x6daa,	// (0x00026335) ai2_news_ticker_pane_g1

0x6db2,	// (0x0002633d) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002ef57) ai2_news_ticker_pane_g

0x6dba,	// (0x00026345) ai2_news_ticker_pane_t1

0x6dc8,	// (0x00026353) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002ef5c) ai2_news_ticker_pane_t

0x6df5,	// (0x00026380) heading_ai2_gene_pane_g1

0x6dfd,	// (0x00026388) heading_ai2_gene_pane_t1_ParamLimits

0x6dfd,	// (0x00026388) heading_ai2_gene_pane_t1

0x6e12,	// (0x0002639d) list_highlight_pane_cp6

0xdef6,	// (0x0002d481) ai2_gene_pane_ParamLimits

0xdef6,	// (0x0002d481) ai2_gene_pane

0xdf1a,	// (0x0002d4a5) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002ef61) list_ai2_gene_pane_t

0x6e4d,	// (0x000263d8) list_highlight_pane_cp8_ParamLimits

0x6e4d,	// (0x000263d8) list_highlight_pane_cp8

0x6e5e,	// (0x000263e9) ai2_gene_pane_g1_ParamLimits

0x6e5e,	// (0x000263e9) ai2_gene_pane_g1

0x6e70,	// (0x000263fb) ai2_gene_pane_g2_ParamLimits

0x6e70,	// (0x000263fb) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002ef66) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002ef66) ai2_gene_pane_g

0x3ec3,	// (0x0002344e) scroll_pane_cp12

0xc249,	// (0x0002b7d4) control_pane_t3_ParamLimits

0xc249,	// (0x0002b7d4) control_pane_t3

0xd576,	// (0x0002cb01) status_small_pane_g8_ParamLimits

0xd576,	// (0x0002cb01) status_small_pane_g8

0xc3a5,	// (0x0002b930) popup_find_window_ParamLimits

0xc632,	// (0x0002bbbd) popup_note_image_window_ParamLimits

0x0868,	// (0x0001fdf3) list_double2_graphic_pane_vc_g1_ParamLimits

0x0868,	// (0x0001fdf3) list_double2_graphic_pane_vc_g1

0x0874,	// (0x0001fdff) list_double2_graphic_pane_vc_g2_ParamLimits

0x0874,	// (0x0001fdff) list_double2_graphic_pane_vc_g2

0x0880,	// (0x0001fe0b) list_double2_graphic_pane_vc_g3_ParamLimits

0x0880,	// (0x0001fe0b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002ed3b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002ed3b) list_double2_graphic_pane_vc_g

0x08d2,	// (0x0001fe5d) list_double2_graphic_pane_vc_t1_ParamLimits

0x08d2,	// (0x0001fe5d) list_double2_graphic_pane_vc_t1

0x0874,	// (0x0001fdff) list_single_heading_pane_vc_g1_ParamLimits

0x0874,	// (0x0001fdff) list_single_heading_pane_vc_g1

0x0880,	// (0x0001fe0b) list_single_heading_pane_vc_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_single_heading_pane_vc_g

0x08e8,	// (0x0001fe73) list_single_heading_pane_vc_t1_ParamLimits

0x08e8,	// (0x0001fe73) list_single_heading_pane_vc_t1

0x0900,	// (0x0001fe8b) list_single_heading_pane_vc_t2_ParamLimits

0x0900,	// (0x0001fe8b) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002ed63) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002ed63) list_single_heading_pane_vc_t

0x091c,	// (0x0001fea7) list_setting_number_pane_vc_g1_ParamLimits

0x091c,	// (0x0001fea7) list_setting_number_pane_vc_g1

0x0928,	// (0x0001feb3) list_setting_number_pane_vc_g2_ParamLimits

0x0928,	// (0x0001feb3) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002ed68) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002ed68) list_setting_number_pane_vc_g

0x0934,	// (0x0001febf) list_setting_number_pane_vc_t1_ParamLimits

0x0934,	// (0x0001febf) list_setting_number_pane_vc_t1

0x0948,	// (0x0001fed3) list_setting_number_pane_vc_t2_ParamLimits

0x0948,	// (0x0001fed3) list_setting_number_pane_vc_t2

0x0964,	// (0x0001feef) list_setting_number_pane_vc_t3_ParamLimits

0x0964,	// (0x0001feef) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002ed6d) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002ed6d) list_setting_number_pane_vc_t

0x0982,	// (0x0001ff0d) set_value_pane_vc_ParamLimits

0x0982,	// (0x0001ff0d) set_value_pane_vc

0x699f,	// (0x00025f2a) list_double2_graphic_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_double2_graphic_pane_vc

0x699f,	// (0x00025f2a) list_double2_large_graphic_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_double2_large_graphic_pane_vc

0x699f,	// (0x00025f2a) list_double2_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_double2_pane_vc

0x699f,	// (0x00025f2a) list_double_graphic_heading_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_double_graphic_heading_pane_vc

0x699f,	// (0x00025f2a) list_double_graphic_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_double_graphic_pane_vc

0x699f,	// (0x00025f2a) list_double_heading_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_double_heading_pane_vc

0x69b1,	// (0x00025f3c) list_double_large_graphic_pane_vc_ParamLimits

0x69b1,	// (0x00025f3c) list_double_large_graphic_pane_vc

0x699f,	// (0x00025f2a) list_double_number_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_double_number_pane_vc

0x699f,	// (0x00025f2a) list_double_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_double_pane_vc

0x699f,	// (0x00025f2a) list_double_time_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_double_time_pane_vc

0x699f,	// (0x00025f2a) list_setting_number_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_setting_number_pane_vc

0x699f,	// (0x00025f2a) list_setting_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_setting_pane_vc

0x699f,	// (0x00025f2a) list_single_graphic_heading_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_single_graphic_heading_pane_vc

0x699f,	// (0x00025f2a) list_single_heading_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_single_heading_pane_vc

0x699f,	// (0x00025f2a) list_single_number_heading_pane_vc_ParamLimits

0x699f,	// (0x00025f2a) list_single_number_heading_pane_vc

0x0868,	// (0x0001fdf3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0868,	// (0x0001fdf3) list_double_graphic_heading_pane_vc_g1

0x0874,	// (0x0001fdff) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0874,	// (0x0001fdff) list_double_graphic_heading_pane_vc_g2

0x0880,	// (0x0001fe0b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0880,	// (0x0001fe0b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002ed3b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002ed3b) list_double_graphic_heading_pane_vc_g

0x0adc,	// (0x00020067) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0adc,	// (0x00020067) list_double_graphic_heading_pane_vc_t1

0x0af8,	// (0x00020083) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0af8,	// (0x00020083) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0002ef72) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0002ef72) list_double_graphic_heading_pane_vc_t

0x091c,	// (0x0001fea7) list_setting_pane_vc_g1_ParamLimits

0x091c,	// (0x0001fea7) list_setting_pane_vc_g1

0x0928,	// (0x0001feb3) list_setting_pane_vc_g2_ParamLimits

0x0928,	// (0x0001feb3) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002ed68) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002ed68) list_setting_pane_vc_g

0x0b16,	// (0x000200a1) list_setting_pane_vc_t1_ParamLimits

0x0b16,	// (0x000200a1) list_setting_pane_vc_t1

0x0b32,	// (0x000200bd) list_setting_pane_vc_t2_ParamLimits

0x0b32,	// (0x000200bd) list_setting_pane_vc_t2

0x0001,

0xfa15,	// (0x0002efa0) list_setting_pane_vc_t_ParamLimits

0xfa15,	// (0x0002efa0) list_setting_pane_vc_t

0x0982,	// (0x0001ff0d) set_value_pane_cp_vc_ParamLimits

0x0982,	// (0x0001ff0d) set_value_pane_cp_vc

0x0874,	// (0x0001fdff) list_single_number_heading_pane_vc_g1_ParamLimits

0x0874,	// (0x0001fdff) list_single_number_heading_pane_vc_g1

0x0880,	// (0x0001fe0b) list_single_number_heading_pane_vc_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_single_number_heading_pane_vc_g

0x08e8,	// (0x0001fe73) list_single_number_heading_pane_vc_t1_ParamLimits

0x08e8,	// (0x0001fe73) list_single_number_heading_pane_vc_t1

0x0b4e,	// (0x000200d9) list_single_number_heading_pane_vc_t2_ParamLimits

0x0b4e,	// (0x000200d9) list_single_number_heading_pane_vc_t2

0x0b62,	// (0x000200ed) list_single_number_heading_pane_vc_t3_ParamLimits

0x0b62,	// (0x000200ed) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1a,	// (0x0002efa5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002efa5) list_single_number_heading_pane_vc_t

0x0868,	// (0x0001fdf3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0868,	// (0x0001fdf3) list_single_graphic_heading_pane_vc_g1

0x0874,	// (0x0001fdff) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0874,	// (0x0001fdff) list_single_graphic_heading_pane_vc_g4

0x0880,	// (0x0001fe0b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0880,	// (0x0001fe0b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002ed3b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002ed3b) list_single_graphic_heading_pane_vc_g

0x08e8,	// (0x0001fe73) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x08e8,	// (0x0001fe73) list_single_graphic_heading_pane_vc_t1

0x0b74,	// (0x000200ff) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0b74,	// (0x000200ff) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa21,	// (0x0002efac) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0002efac) list_single_graphic_heading_pane_vc_t

0x0874,	// (0x0001fdff) list_double2_pane_vc_g1_ParamLimits

0x0874,	// (0x0001fdff) list_double2_pane_vc_g1

0x0880,	// (0x0001fe0b) list_double2_pane_vc_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_double2_pane_vc_g

0x0b88,	// (0x00020113) list_double2_pane_vc_t1_ParamLimits

0x0b88,	// (0x00020113) list_double2_pane_vc_t1

0x0b9e,	// (0x00020129) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0b9e,	// (0x00020129) list_double2_large_graphic_pane_vc_g1

0x0874,	// (0x0001fdff) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0874,	// (0x0001fdff) list_double2_large_graphic_pane_vc_g2

0x0880,	// (0x0001fe0b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0880,	// (0x0001fe0b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002eb70) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002eb70) list_double2_large_graphic_pane_vc_g

0x0baa,	// (0x00020135) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0baa,	// (0x00020135) list_double2_large_graphic_pane_vc_t1

0x0bc0,	// (0x0002014b) list_double_time_pane_vc_g1_ParamLimits

0x0bc0,	// (0x0002014b) list_double_time_pane_vc_g1

0x0bcc,	// (0x00020157) list_double_time_pane_vc_g2_ParamLimits

0x0bcc,	// (0x00020157) list_double_time_pane_vc_g2

0x0001,

0xfa26,	// (0x0002efb1) list_double_time_pane_vc_g_ParamLimits

0xfa26,	// (0x0002efb1) list_double_time_pane_vc_g

0x0bd8,	// (0x00020163) list_double_time_pane_vc_t1_ParamLimits

0x0bd8,	// (0x00020163) list_double_time_pane_vc_t1

0x0bfc,	// (0x00020187) list_double_time_pane_vc_t2_ParamLimits

0x0bfc,	// (0x00020187) list_double_time_pane_vc_t2

0x0c4b,	// (0x000201d6) list_double_time_pane_vc_t3_ParamLimits

0x0c4b,	// (0x000201d6) list_double_time_pane_vc_t3

0x0c5d,	// (0x000201e8) list_double_time_pane_vc_t4_ParamLimits

0x0c5d,	// (0x000201e8) list_double_time_pane_vc_t4

0x0003,

0xfa2b,	// (0x0002efb6) list_double_time_pane_vc_t_ParamLimits

0xfa2b,	// (0x0002efb6) list_double_time_pane_vc_t

0x0874,	// (0x0001fdff) list_double_pane_vc_g1_ParamLimits

0x0874,	// (0x0001fdff) list_double_pane_vc_g1

0x0880,	// (0x0001fe0b) list_double_pane_vc_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_double_pane_vc_g

0x0c71,	// (0x000201fc) list_double_pane_vc_t1_ParamLimits

0x0c71,	// (0x000201fc) list_double_pane_vc_t1

0x0c85,	// (0x00020210) list_double_pane_vc_t2_ParamLimits

0x0c85,	// (0x00020210) list_double_pane_vc_t2

0x0001,

0xfa34,	// (0x0002efbf) list_double_pane_vc_t_ParamLimits

0xfa34,	// (0x0002efbf) list_double_pane_vc_t

0x0874,	// (0x0001fdff) list_double_number_pane_vc_g1_ParamLimits

0x0874,	// (0x0001fdff) list_double_number_pane_vc_g1

0x0880,	// (0x0001fe0b) list_double_number_pane_vc_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_double_number_pane_vc_g

0x0c9d,	// (0x00020228) list_double_number_pane_vc_t1_ParamLimits

0x0c9d,	// (0x00020228) list_double_number_pane_vc_t1

0x0caf,	// (0x0002023a) list_double_number_pane_vc_t2_ParamLimits

0x0caf,	// (0x0002023a) list_double_number_pane_vc_t2

0x0cc3,	// (0x0002024e) list_double_number_pane_vc_t3_ParamLimits

0x0cc3,	// (0x0002024e) list_double_number_pane_vc_t3

0x0002,

0xfa39,	// (0x0002efc4) list_double_number_pane_vc_t_ParamLimits

0xfa39,	// (0x0002efc4) list_double_number_pane_vc_t

0x0cdb,	// (0x00020266) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0cdb,	// (0x00020266) list_double_large_graphic_pane_vc_g1

0x0cfd,	// (0x00020288) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0cfd,	// (0x00020288) list_double_large_graphic_pane_vc_g2

0x0d11,	// (0x0002029c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0d11,	// (0x0002029c) list_double_large_graphic_pane_vc_g3

0x0d20,	// (0x000202ab) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0d20,	// (0x000202ab) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa40,	// (0x0002efcb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa40,	// (0x0002efcb) list_double_large_graphic_pane_vc_g

0x0d2c,	// (0x000202b7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0d2c,	// (0x000202b7) list_double_large_graphic_pane_vc_t1

0x0d48,	// (0x000202d3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0d48,	// (0x000202d3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa49,	// (0x0002efd4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa49,	// (0x0002efd4) list_double_large_graphic_pane_vc_t

0x0874,	// (0x0001fdff) list_double_heading_pane_vc_g1_ParamLimits

0x0874,	// (0x0001fdff) list_double_heading_pane_vc_g1

0x0880,	// (0x0001fe0b) list_double_heading_pane_vc_g2_ParamLimits

0x0880,	// (0x0001fe0b) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb53) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb53) list_double_heading_pane_vc_g

0x0d6a,	// (0x000202f5) list_double_heading_pane_vc_t1_ParamLimits

0x0d6a,	// (0x000202f5) list_double_heading_pane_vc_t1

0x08e8,	// (0x0001fe73) list_double_heading_pane_vc_t2_ParamLimits

0x08e8,	// (0x0001fe73) list_double_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002efd9) list_double_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002efd9) list_double_heading_pane_vc_t

0x0d7e,	// (0x00020309) list_double_graphic_pane_vc_g1_ParamLimits

0x0d7e,	// (0x00020309) list_double_graphic_pane_vc_g1

0x0d8a,	// (0x00020315) list_double_graphic_pane_vc_g2_ParamLimits

0x0d8a,	// (0x00020315) list_double_graphic_pane_vc_g2

0x0874,	// (0x0001fdff) list_double_graphic_pane_vc_g3_ParamLimits

0x0874,	// (0x0001fdff) list_double_graphic_pane_vc_g3

0x0003,

0xfa53,	// (0x0002efde) list_double_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0002efde) list_double_graphic_pane_vc_g

0x0da7,	// (0x00020332) list_double_graphic_pane_vc_t1_ParamLimits

0x0da7,	// (0x00020332) list_double_graphic_pane_vc_t1

0x0dd1,	// (0x0002035c) list_double_graphic_pane_vc_t2_ParamLimits

0x0dd1,	// (0x0002035c) list_double_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002efe7) list_double_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002efe7) list_double_graphic_pane_vc_t

0x11f2,	// (0x0002077d) aid_size_cell_fastswap

0xbe51,	// (0x0002b3dc) aid_size_cell_touch_ParamLimits

0xbe51,	// (0x0002b3dc) aid_size_cell_touch

0x1455,	// (0x000209e0) popup_fast_swap_wide_window_ParamLimits

0x1455,	// (0x000209e0) popup_fast_swap_wide_window

0xc001,	// (0x0002b58c) touch_pane_ParamLimits

0xc001,	// (0x0002b58c) touch_pane

0x3f19,	// (0x000234a4) button_value_adjust_pane_cp2

0x054f,	// (0x0001fada) button_value_adjust_pane_cp4

0x056f,	// (0x0001fafa) form_field_data_pane_cp2

0xb9ca,	// (0x0002af55) form_field_data_wide_pane_cp2

0x4396,	// (0x00023921) bg_scroll_pane_ParamLimits

0x17f7,	// (0x00020d82) scroll_handle_pane_ParamLimits

0x180b,	// (0x00020d96) scroll_sc2_down_pane_ParamLimits

0x180b,	// (0x00020d96) scroll_sc2_down_pane

0x43c7,	// (0x00023952) scroll_sc2_up_pane_ParamLimits

0x43c7,	// (0x00023952) scroll_sc2_up_pane

0xe03a,	// (0x0002d5c5) grid_wheel_folder_pane_g1_ParamLimits

0xe03a,	// (0x0002d5c5) grid_wheel_folder_pane_g1

0x19d0,	// (0x00020f5b) clock_nsta_pane_cp2_ParamLimits

0x19d0,	// (0x00020f5b) clock_nsta_pane_cp2

0x4efd,	// (0x00024488) listscroll_midp_pane_ParamLimits

0xd471,	// (0x0002c9fc) midp_canvas_pane

0x4eaf,	// (0x0002443a) nsta_clock_indic_pane

0x4ee3,	// (0x0002446e) listscroll_form_pane_vc

0x4eeb,	// (0x00024476) listscroll_set_pane_vc_ParamLimits

0x4eeb,	// (0x00024476) listscroll_set_pane_vc

0xd6f6,	// (0x0002cc81) clock_nsta_pane

0xd720,	// (0x0002ccab) indicator_nsta_pane

0x5345,	// (0x000248d0) bg_popup_sub_pane_cp2_ParamLimits

0x5359,	// (0x000248e4) find_pane_cp2_ParamLimits

0x5359,	// (0x000248e4) find_pane_cp2

0x536f,	// (0x000248fa) grid_toobar_pane_ParamLimits

0x544f,	// (0x000249da) list_form_gen_pane_vc_ParamLimits

0x544f,	// (0x000249da) list_form_gen_pane_vc

0x5465,	// (0x000249f0) scroll_pane_cp8_vc_ParamLimits

0x5465,	// (0x000249f0) scroll_pane_cp8_vc

0x54e1,	// (0x00024a6c) data_form_wide_pane_vc_ParamLimits

0x54e1,	// (0x00024a6c) data_form_wide_pane_vc

0x54ed,	// (0x00024a78) form_field_data_wide_pane_vc_g1

0x54f5,	// (0x00024a80) form_field_data_wide_pane_vc_t1_ParamLimits

0x54f5,	// (0x00024a80) form_field_data_wide_pane_vc_t1

0x3f2d,	// (0x000234b8) input_focus_pane_cp6_vc_ParamLimits

0x3f2d,	// (0x000234b8) input_focus_pane_cp6_vc

0xdab2,	// (0x0002d03d) list_midp_pane_ParamLimits

0x6b81,	// (0x0002610c) scroll_pane_cp16_ParamLimits

0x6b81,	// (0x0002610c) scroll_pane_cp16

0x587b,	// (0x00024e06) button_value_adjust_pane_ParamLimits

0x587b,	// (0x00024e06) button_value_adjust_pane

0xdc7b,	// (0x0002d206) button_value_adjust_pane_cp6_ParamLimits

0xdc7b,	// (0x0002d206) button_value_adjust_pane_cp6

0xdd95,	// (0x0002d320) settings_code_pane_cp_ParamLimits

0xdd95,	// (0x0002d320) settings_code_pane_cp

0x35d4,	// (0x00022b5f) cell_touch_pane_g1

0x35d4,	// (0x00022b5f) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002ec8e) cell_touch_pane_g

0xdf28,	// (0x0002d4b3) cell_touch_pane_cp_ParamLimits

0xdf28,	// (0x0002d4b3) cell_touch_pane_cp

0xdf44,	// (0x0002d4cf) cell_touch_pane_ParamLimits

0xdf44,	// (0x0002d4cf) cell_touch_pane

0x35d4,	// (0x00022b5f) scroll_sc2_down_pane_g1

0x35d4,	// (0x00022b5f) scroll_sc2_up_pane_g1

0x35de,	// (0x00022b69) bg_set_opt_pane_cp4_vc

0x6f11,	// (0x0002649c) list_set_graphic_pane_vc_g1_ParamLimits

0x6f11,	// (0x0002649c) list_set_graphic_pane_vc_g1

0x6f1d,	// (0x000264a8) list_set_graphic_pane_vc_g2_ParamLimits

0x6f1d,	// (0x000264a8) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x0002ef77) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002ef77) list_set_graphic_pane_vc_g

0x6f29,	// (0x000264b4) text_primary_small_cp13_vc_ParamLimits

0x6f29,	// (0x000264b4) text_primary_small_cp13_vc

0x6f41,	// (0x000264cc) list_set_graphic_pane_vc_ParamLimits

0x6f41,	// (0x000264cc) list_set_graphic_pane_vc

0x35de,	// (0x00022b69) input_focus_pane_cp2_vc

0x35d4,	// (0x00022b5f) setting_code_pane_vc_g1

0x3709,	// (0x00022c94) setting_code_pane_vc_t1

0x6f54,	// (0x000264df) set_text_pane_vc_t1_ParamLimits

0x6f54,	// (0x000264df) set_text_pane_vc_t1

0x35de,	// (0x00022b69) input_focus_pane_cp1_vc

0x6f70,	// (0x000264fb) list_set_text_pane_vc

0x35d4,	// (0x00022b5f) setting_text_pane_vc_g1

0x35de,	// (0x00022b69) bg_set_opt_pane_cp2_vc

0x3700,	// (0x00022c8b) setting_slider_graphic_pane_vc_g1

0x6f7a,	// (0x00026505) setting_slider_graphic_pane_vc_t1

0x6f8a,	// (0x00026515) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x0002ef7c) setting_slider_graphic_pane_vc_t

0x6f9a,	// (0x00026525) slider_set_pane_cp_vc

0x6fa2,	// (0x0002652d) slider_set_pane_vc_g1

0x6fab,	// (0x00026536) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x0002ef81) slider_set_pane_vc_g

0x3f88,	// (0x00023513) set_opt_bg_pane_g1_copy1

0x3f90,	// (0x0002351b) set_opt_bg_pane_g2_copy1

0x6fd7,	// (0x00026562) set_opt_bg_pane_g3_copy1

0x3fa0,	// (0x0002352b) set_opt_bg_pane_g4_copy1

0x3fa8,	// (0x00023533) set_opt_bg_pane_g5_copy1

0x3fb0,	// (0x0002353b) set_opt_bg_pane_g6_copy1

0x6fe1,	// (0x0002656c) set_opt_bg_pane_g7_copy1

0x6fe9,	// (0x00026574) set_opt_bg_pane_g8_copy1

0x6ff3,	// (0x0002657e) set_opt_bg_pane_g9_copy1

0x35de,	// (0x00022b69) bg_set_opt_pane_cp_vc

0x6ffd,	// (0x00026588) setting_slider_pane_vc_t1

0x700c,	// (0x00026597) setting_slider_pane_vc_t2

0x701c,	// (0x000265a7) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x0002ef90) setting_slider_pane_vc_t

0x702c,	// (0x000265b7) slider_set_pane_vc

0x230c,	// (0x00021897) volume_set_pane_vc_g1

0x2315,	// (0x000218a0) volume_set_pane_vc_g2

0x231e,	// (0x000218a9) volume_set_pane_vc_g3

0x2327,	// (0x000218b2) volume_set_pane_vc_g4

0x2330,	// (0x000218bb) volume_set_pane_vc_g5

0x2339,	// (0x000218c4) volume_set_pane_vc_g6

0x2342,	// (0x000218cd) volume_set_pane_vc_g7

0x234b,	// (0x000218d6) volume_set_pane_vc_g8

0x2354,	// (0x000218df) volume_set_pane_vc_g9

0x235d,	// (0x000218e8) volume_set_pane_vc_g10

0x0009,

0xf8aa,	// (0x0002ee35) volume_set_pane_vc_g

0x7034,	// (0x000265bf) volume_set_pane_vc

0x703c,	// (0x000265c7) button_value_adjust_pane_cp1_vc

0x7046,	// (0x000265d1) list_highlight_pane_cp2_vc

0x704f,	// (0x000265da) list_set_pane_vc_ParamLimits

0x704f,	// (0x000265da) list_set_pane_vc

0x70ad,	// (0x00026638) main_pane_set_vc_t1_ParamLimits

0x70ad,	// (0x00026638) main_pane_set_vc_t1

0x70c2,	// (0x0002664d) main_pane_set_vc_t2_ParamLimits

0x70c2,	// (0x0002664d) main_pane_set_vc_t2

0x70d4,	// (0x0002665f) main_pane_set_vc_t3_ParamLimits

0x70d4,	// (0x0002665f) main_pane_set_vc_t3

0x70e8,	// (0x00026673) main_pane_set_vc_t4_ParamLimits

0x70e8,	// (0x00026673) main_pane_set_vc_t4

0x0003,

0xfa0c,	// (0x0002ef97) main_pane_set_vc_t_ParamLimits

0xfa0c,	// (0x0002ef97) main_pane_set_vc_t

0x70fc,	// (0x00026687) setting_code_pane_vc_ParamLimits

0x70fc,	// (0x00026687) setting_code_pane_vc

0x710d,	// (0x00026698) setting_slider_graphic_pane_vc

0x710d,	// (0x00026698) setting_slider_pane_vc

0x710d,	// (0x00026698) setting_text_pane_vc

0x710d,	// (0x00026698) setting_volume_pane_vc

0x7117,	// (0x000266a2) scroll_pane_cp121_vc

0x3f07,	// (0x00023492) set_content_pane_vc

0x711f,	// (0x000266aa) button_value_adjust_pane_g1

0x7128,	// (0x000266b3) button_value_adjust_pane_g2

0x0001,

0xfa61,	// (0x0002efec) button_value_adjust_pane_g

0x7131,	// (0x000266bc) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7131,	// (0x000266bc) form_field_slider_wide_pane_vc_t1

0x7145,	// (0x000266d0) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7145,	// (0x000266d0) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa66,	// (0x0002eff1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0002eff1) form_field_slider_wide_pane_vc_t

0x3939,	// (0x00022ec4) input_focus_pane_cp10_vc_ParamLimits

0x3939,	// (0x00022ec4) input_focus_pane_cp10_vc

0x7173,	// (0x000266fe) slider_cont_pane_cp1_vc_ParamLimits

0x7173,	// (0x000266fe) slider_cont_pane_cp1_vc

0x7185,	// (0x00026710) slider_form_pane_g1_cp2

0x6fab,	// (0x00026536) slider_form_pane_g2_cp2

0x71b2,	// (0x0002673d) form_field_slider_pane_vc_t3

0x71c0,	// (0x0002674b) form_field_slider_pane_vc_t4

0x71ce,	// (0x00026759) slider_form_pane_vc_ParamLimits

0x71ce,	// (0x00026759) slider_form_pane_vc

0x71db,	// (0x00026766) form_field_slider_pane_vc_t1_ParamLimits

0x71db,	// (0x00026766) form_field_slider_pane_vc_t1

0x7145,	// (0x000266d0) form_field_slider_pane_vc_t2_ParamLimits

0x7145,	// (0x000266d0) form_field_slider_pane_vc_t2

0x0001,

0xfa78,	// (0x0002f003) form_field_slider_pane_vc_t_ParamLimits

0xfa78,	// (0x0002f003) form_field_slider_pane_vc_t

0x3939,	// (0x00022ec4) input_focus_pane_cp9_vc_ParamLimits

0x3939,	// (0x00022ec4) input_focus_pane_cp9_vc

0x71f7,	// (0x00026782) slider_cont_pane_vc_ParamLimits

0x71f7,	// (0x00026782) slider_cont_pane_vc

0x720b,	// (0x00026796) list_form_graphic_pane_cp_vc_ParamLimits

0x720b,	// (0x00026796) list_form_graphic_pane_cp_vc

0x54ed,	// (0x00024a78) form_field_popup_wide_pane_vc_g1

0x7220,	// (0x000267ab) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7220,	// (0x000267ab) form_field_popup_wide_pane_vc_t1

0x3f2d,	// (0x000234b8) input_focus_pane_cp8_vc_ParamLimits

0x3f2d,	// (0x000234b8) input_focus_pane_cp8_vc

0x7265,	// (0x000267f0) list_form_wide_pane_vc_ParamLimits

0x7265,	// (0x000267f0) list_form_wide_pane_vc

0x7271,	// (0x000267fc) list_form_graphic_pane_vc_g1

0x7279,	// (0x00026804) list_form_graphic_pane_vc_t1_ParamLimits

0x7279,	// (0x00026804) list_form_graphic_pane_vc_t1

0x36be,	// (0x00022c49) list_highlight_pane_cp5_vc_ParamLimits

0x36be,	// (0x00022c49) list_highlight_pane_cp5_vc

0x7295,	// (0x00026820) list_form_graphic_pane_vc_ParamLimits

0x7295,	// (0x00026820) list_form_graphic_pane_vc

0x54ed,	// (0x00024a78) form_field_popup_pane_vc_g1

0x72ab,	// (0x00026836) form_field_popup_pane_vc_t1_ParamLimits

0x72ab,	// (0x00026836) form_field_popup_pane_vc_t1

0x3f2d,	// (0x000234b8) input_focus_pane_cp7_vc_ParamLimits

0x3f2d,	// (0x000234b8) input_focus_pane_cp7_vc

0x72c2,	// (0x0002684d) list_form_pane_vc_ParamLimits

0x72c2,	// (0x0002684d) list_form_pane_vc

0x72ce,	// (0x00026859) data_form_pane_vc_t1_ParamLimits

0x72ce,	// (0x00026859) data_form_pane_vc_t1

0x3f88,	// (0x00023513) input_focus_pane_vc_g1

0x3f90,	// (0x0002351b) input_focus_pane_vc_g2

0x3f98,	// (0x00023523) input_focus_pane_vc_g3

0x3fa0,	// (0x0002352b) input_focus_pane_vc_g4

0x3fa8,	// (0x00023533) input_focus_pane_vc_g5

0x3fb0,	// (0x0002353b) input_focus_pane_vc_g6

0x3fb8,	// (0x00023543) input_focus_pane_vc_g7

0x3fc0,	// (0x0002354b) input_focus_pane_vc_g8

0x3fc8,	// (0x00023553) input_focus_pane_vc_g9

0x35d4,	// (0x00022b5f) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002ec17) input_focus_pane_vc_g

0x54e1,	// (0x00024a6c) data_form_pane_vc_ParamLimits

0x54e1,	// (0x00024a6c) data_form_pane_vc

0x54ed,	// (0x00024a78) form_field_data_pane_vc_g1

0x72e9,	// (0x00026874) form_field_data_pane_vc_t1_ParamLimits

0x72e9,	// (0x00026874) form_field_data_pane_vc_t1

0x3f2d,	// (0x000234b8) input_focus_pane_vc_ParamLimits

0x3f2d,	// (0x000234b8) input_focus_pane_vc

0x7303,	// (0x0002688e) button_value_adjust_pane_cp3_vc

0x730b,	// (0x00026896) button_value_adjust_pane_cp5_vc

0x7313,	// (0x0002689e) form_field_data_pane_vc_ParamLimits

0x7313,	// (0x0002689e) form_field_data_pane_vc

0x732a,	// (0x000268b5) form_field_data_pane_vc_cp2

0x7332,	// (0x000268bd) form_field_data_wide_pane_vc_ParamLimits

0x7332,	// (0x000268bd) form_field_data_wide_pane_vc

0x7348,	// (0x000268d3) form_field_data_wide_pane_vc_cp2

0x7350,	// (0x000268db) form_field_popup_pane_vc_ParamLimits

0x7350,	// (0x000268db) form_field_popup_pane_vc

0x7367,	// (0x000268f2) form_field_popup_wide_pane_vc_ParamLimits

0x7367,	// (0x000268f2) form_field_popup_wide_pane_vc

0x737d,	// (0x00026908) form_field_slider_pane_vc_ParamLimits

0x737d,	// (0x00026908) form_field_slider_pane_vc

0x7390,	// (0x0002691b) form_field_slider_wide_pane_vc_ParamLimits

0x7390,	// (0x0002691b) form_field_slider_wide_pane_vc

0xdf62,	// (0x0002d4ed) grid_touch_1_pane_ParamLimits

0xdf62,	// (0x0002d4ed) grid_touch_1_pane

0xdf76,	// (0x0002d501) grid_touch_2_pane_ParamLimits

0xdf76,	// (0x0002d501) grid_touch_2_pane

0x745e,	// (0x000269e9) touch_pane_g1_ParamLimits

0x745e,	// (0x000269e9) touch_pane_g1

0x73c7,	// (0x00026952) cell_app_pane_cp_wide_ParamLimits

0x73c7,	// (0x00026952) cell_app_pane_cp_wide

0x73d8,	// (0x00026963) grid_popup_fast_wide_pane_ParamLimits

0x73d8,	// (0x00026963) grid_popup_fast_wide_pane

0x73ec,	// (0x00026977) scroll_pane_cp19_ParamLimits

0x73ec,	// (0x00026977) scroll_pane_cp19

0x35de,	// (0x00022b69) bg_popup_window_pane_cp20

0x7400,	// (0x0002698b) listscroll_popup_fast_wide_pane

0x40f0,	// (0x0002367b) grid_indicator_nsta_pane

0x7408,	// (0x00026993) clock_nsta_pane_g1

0x7411,	// (0x0002699c) clock_nsta_pane_t1

0xdfa0,	// (0x0002d52b) cell_indicator_nsta_pane_ParamLimits

0xdfa0,	// (0x0002d52b) cell_indicator_nsta_pane

0x745e,	// (0x000269e9) cell_indicator_nsta_pane_g1

0xdfb7,	// (0x0002d542) cell_indicator_nsta_pane_g2

0x0001,

0xfa89,	// (0x0002f014) cell_indicator_nsta_pane_g

0x7479,	// (0x00026a04) clock_nsta_pane_cp

0x7481,	// (0x00026a0c) indicator_nsta_pane_cp

0x7489,	// (0x00026a14) nsta_clock_indic_pane_g1

0x3787,	// (0x00022d12) grid_indicator_pane

0x44bc,	// (0x00023a47) scroll_pane_cp29

0x191f,	// (0x00020eaa) indicator_nsta_pane_cp2_ParamLimits

0x191f,	// (0x00020eaa) indicator_nsta_pane_cp2

0x36be,	// (0x00022c49) main_apps_wheel_pane

0x5702,	// (0x00024c8d) form_midp_field_text_pane_ParamLimits

0x584d,	// (0x00024dd8) scroll_bar_cp050_ParamLimits

0x74ea,	// (0x00026a75) cell_indicator_pane_ParamLimits

0x74ea,	// (0x00026a75) cell_indicator_pane

0x7501,	// (0x00026a8c) cell_indicator_pane_g1

0xdfc4,	// (0x0002d54f) grid_wheel_folder_pane_ParamLimits

0xdfc4,	// (0x0002d54f) grid_wheel_folder_pane

0xdfd2,	// (0x0002d55d) list_wheel_apps_pane_ParamLimits

0xdfd2,	// (0x0002d55d) list_wheel_apps_pane

0xdfe0,	// (0x0002d56b) main_apps_wheel_pane_g1_ParamLimits

0xdfe0,	// (0x0002d56b) main_apps_wheel_pane_g1

0xdfec,	// (0x0002d577) main_apps_wheel_pane_g2_ParamLimits

0xdfec,	// (0x0002d577) main_apps_wheel_pane_g2

0x0001,

0xfaa5,	// (0x0002f030) main_apps_wheel_pane_g_ParamLimits

0xfaa5,	// (0x0002f030) main_apps_wheel_pane_g

0xdffa,	// (0x0002d585) main_apps_wheel_pane_t1_ParamLimits

0xdffa,	// (0x0002d585) main_apps_wheel_pane_t1

0xe00e,	// (0x0002d599) list_wheel_apps_pane_g1

0xe016,	// (0x0002d5a1) list_wheel_apps_pane_g2

0xe01e,	// (0x0002d5a9) list_wheel_apps_pane_g3

0xe026,	// (0x0002d5b1) list_wheel_apps_pane_g4

0xe030,	// (0x0002d5bb) list_wheel_apps_pane_g5

0x0004,

0xfaaa,	// (0x0002f035) list_wheel_apps_pane_g

0x4a3f,	// (0x00023fca) navi_icon_text_pane

0xd5ea,	// (0x0002cb75) aid_fill_nsta

0x75c6,	// (0x00026b51) navi_icon_text_pane_g1

0x75d2,	// (0x00026b5d) navi_icon_text_pane_t1

0xd44e,	// (0x0002c9d9) list_set_graphic_pane_t1_ParamLimits

0xd44e,	// (0x0002c9d9) list_set_graphic_pane_t1

0x5fa8,	// (0x00025533) popup_midp_note_alarm_window_t6_ParamLimits

0x5fa8,	// (0x00025533) popup_midp_note_alarm_window_t6

0x5fba,	// (0x00025545) popup_midp_note_alarm_window_t7_ParamLimits

0x5fba,	// (0x00025545) popup_midp_note_alarm_window_t7

0x5fcc,	// (0x00025557) popup_midp_note_alarm_window_t8_ParamLimits

0x5fcc,	// (0x00025557) popup_midp_note_alarm_window_t8

0x5fde,	// (0x00025569) popup_midp_note_alarm_window_t9_ParamLimits

0x5fde,	// (0x00025569) popup_midp_note_alarm_window_t9

0x5ff0,	// (0x0002557b) popup_midp_note_alarm_window_t10_ParamLimits

0x5ff0,	// (0x0002557b) popup_midp_note_alarm_window_t10

0x6002,	// (0x0002558d) popup_midp_note_alarm_window_t11_ParamLimits

0x6002,	// (0x0002558d) popup_midp_note_alarm_window_t11

0x6014,	// (0x0002559f) scroll_pane_cp17_ParamLimits

0x6014,	// (0x0002559f) scroll_pane_cp17

0x230c,	// (0x00021897) volume_small_pane_cp_g1

0x2601,	// (0x00021b8c) volume_small_pane_cp_g2

0x260a,	// (0x00021b95) volume_small_pane_cp_g3

0x2613,	// (0x00021b9e) volume_small_pane_cp_g4

0x261c,	// (0x00021ba7) volume_small_pane_cp_g5

0x2625,	// (0x00021bb0) volume_small_pane_cp_g6

0x262e,	// (0x00021bb9) volume_small_pane_cp_g7

0x2637,	// (0x00021bc2) volume_small_pane_cp_g8

0x2640,	// (0x00021bcb) volume_small_pane_cp_g9

0x2649,	// (0x00021bd4) volume_small_pane_cp_g10

0x4c90,	// (0x0002421b) midp_ticker_pane_g1_ParamLimits

0x4c9c,	// (0x00024227) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002ece3) midp_ticker_pane_g_ParamLimits

0x4ca8,	// (0x00024233) midp_ticker_pane_t1_ParamLimits

0xd60e,	// (0x0002cb99) aid_fill_nsta_2

0x5839,	// (0x00024dc4) list_form2_midp_pane

0x696e,	// (0x00025ef9) midp_editing_number_pane_ParamLimits

0x697d,	// (0x00025f08) midp_ticker_pane_ParamLimits

0x75e4,	// (0x00026b6f) form2_midp_field_pane

0x7608,	// (0x00026b93) scroll_pane_cp51

0x7634,	// (0x00026bbf) form2_midp_button_pane_ParamLimits

0x7634,	// (0x00026bbf) form2_midp_button_pane

0x7646,	// (0x00026bd1) form2_midp_content_pane_ParamLimits

0x7646,	// (0x00026bd1) form2_midp_content_pane

0x7660,	// (0x00026beb) form2_midp_field_choice_group_pane

0x7668,	// (0x00026bf3) form2_midp_field_pane_g1

0x7670,	// (0x00026bfb) form2_midp_field_pane_g2

0x7678,	// (0x00026c03) form2_midp_field_pane_g3

0x7680,	// (0x00026c0b) form2_midp_field_pane_g4

0x0003,

0xfacf,	// (0x0002f05a) form2_midp_field_pane_g

0x7688,	// (0x00026c13) form2_midp_gauge_slider_pane

0x7690,	// (0x00026c1b) form2_midp_gauge_wait_pane

0x7698,	// (0x00026c23) form2_midp_image_pane_ParamLimits

0x7698,	// (0x00026c23) form2_midp_image_pane

0x76b3,	// (0x00026c3e) form2_midp_label_pane_ParamLimits

0x76b3,	// (0x00026c3e) form2_midp_label_pane

0xe063,	// (0x0002d5ee) form2_midp_label_pane_cp_ParamLimits

0xe063,	// (0x0002d5ee) form2_midp_label_pane_cp

0x76ed,	// (0x00026c78) form2_midp_string_pane_ParamLimits

0x76ed,	// (0x00026c78) form2_midp_string_pane

0xbc16,	// (0x0002b1a1) form2_midp_text_pane_ParamLimits

0xbc16,	// (0x0002b1a1) form2_midp_text_pane

0x76ff,	// (0x00026c8a) form2_midp_time_pane

0x770f,	// (0x00026c9a) input_focus_pane_cp51_ParamLimits

0x770f,	// (0x00026c9a) input_focus_pane_cp51

0x7727,	// (0x00026cb2) form2_midp_label_pane_t1_ParamLimits

0x7727,	// (0x00026cb2) form2_midp_label_pane_t1

0xbc2f,	// (0x0002b1ba) form2_mdip_text_pane_t1_ParamLimits

0xbc2f,	// (0x0002b1ba) form2_mdip_text_pane_t1

0x0e34,	// (0x000203bf) form2_midp_time_pane_t1

0x7770,	// (0x00026cfb) form2_midp_gauge_slider_pane_t1

0xe082,	// (0x0002d60d) form2_midp_gauge_slider_pane_t2

0xe094,	// (0x0002d61f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad8,	// (0x0002f063) form2_midp_gauge_slider_pane_t

0x77a6,	// (0x00026d31) form2_midp_slider_pane

0x77b2,	// (0x00026d3d) form2_midp_gauge_wait_pane_t1

0x77c0,	// (0x00026d4b) form2_midp_wait_pane_ParamLimits

0x77c0,	// (0x00026d4b) form2_midp_wait_pane

0xe0a6,	// (0x0002d631) list_single_2graphic_pane_cp4_ParamLimits

0xe0a6,	// (0x0002d631) list_single_2graphic_pane_cp4

0xda40,	// (0x0002cfcb) list_single_midp_graphic_pane_cp_ParamLimits

0xda40,	// (0x0002cfcb) list_single_midp_graphic_pane_cp

0x35de,	// (0x00022b69) list_highlight_pane_cp20

0x781a,	// (0x00026da5) list_single_2graphic_pane_g1_cp4

0x7822,	// (0x00026dad) list_single_2graphic_pane_g2_cp4

0x782a,	// (0x00026db5) list_single_2graphic_pane_t1_cp4

0x36be,	// (0x00022c49) list_highlight_pane_cp21

0x7839,	// (0x00026dc4) list_single_midp_graphic_pane_g4_cp

0x7848,	// (0x00026dd3) list_single_midp_graphic_pane_t1_cp

0xe0ba,	// (0x0002d645) form2_mdip_string_pane_t1_ParamLimits

0xe0ba,	// (0x0002d645) form2_mdip_string_pane_t1

0x35de,	// (0x00022b69) bg_wml_button_pane_cp2

0x35d4,	// (0x00022b5f) form2_midp_image_pane_g1

0x0339,	// (0x0001f8c4) list_double_large_graphic_pane_g5_ParamLimits

0x0339,	// (0x0001f8c4) list_double_large_graphic_pane_g5

0x4efd,	// (0x00024488) midp_form_pane_ParamLimits

0x36be,	// (0x00022c49) main_apps_wheel_pane_ParamLimits

0xc6b0,	// (0x0002bc3b) popup_preview_window_ParamLimits

0xc6b0,	// (0x0002bc3b) popup_preview_window

0x2195,	// (0x00021720) popup_touch_info_window_ParamLimits

0x2195,	// (0x00021720) popup_touch_info_window

0x21b3,	// (0x0002173e) popup_touch_menu_window_ParamLimits

0x21b3,	// (0x0002173e) popup_touch_menu_window

0x35ca,	// (0x00022b55) bg_popup_sub_pane_cp6

0x7956,	// (0x00026ee1) list_touch_menu_pane

0x795e,	// (0x00026ee9) list_single_touch_menu_pane_ParamLimits

0x795e,	// (0x00026ee9) list_single_touch_menu_pane

0x7974,	// (0x00026eff) list_single_touch_menu_pane_t1

0x36be,	// (0x00022c49) bg_popup_sub_pane_cp7_ParamLimits

0x36be,	// (0x00022c49) bg_popup_sub_pane_cp7

0x7982,	// (0x00026f0d) heading_sub_pane

0x798a,	// (0x00026f15) list_touch_info_pane_ParamLimits

0x798a,	// (0x00026f15) list_touch_info_pane

0x7999,	// (0x00026f24) list_single_touch_info_pane_ParamLimits

0x7999,	// (0x00026f24) list_single_touch_info_pane

0x79ab,	// (0x00026f36) list_single_touch_info_pane_t1

0x79b9,	// (0x00026f44) list_single_touch_info_pane_t2

0x0001,

0xfae6,	// (0x0002f071) list_single_touch_info_pane_t

0x4bbf,	// (0x0002414a) bg_popup_heading_pane_cp

0x79c7,	// (0x00026f52) heading_sub_pane_t1

0x547b,	// (0x00024a06) bg_popup_preview_window_pane_cp_ParamLimits

0x547b,	// (0x00024a06) bg_popup_preview_window_pane_cp

0x7982,	// (0x00026f0d) heading_preview_pane

0x798a,	// (0x00026f15) list_preview_pane_ParamLimits

0x798a,	// (0x00026f15) list_preview_pane

0x79d5,	// (0x00026f60) popup_preview_window_g1

0x7999,	// (0x00026f24) list_single_preview_pane_ParamLimits

0x7999,	// (0x00026f24) list_single_preview_pane

0x79dd,	// (0x00026f68) list_single_preview_pane_g1

0x79e5,	// (0x00026f70) list_single_preview_pane_t1

0x79ab,	// (0x00026f36) list_single_preview_pane_t2

0x0001,

0xfaeb,	// (0x0002f076) list_single_preview_pane_t

0x79f3,	// (0x00026f7e) bg_popup_heading_pane_cp2_ParamLimits

0x79f3,	// (0x00026f7e) bg_popup_heading_pane_cp2

0x7a09,	// (0x00026f94) heading_preview_pane_g1

0x7a11,	// (0x00026f9c) heading_preview_pane_t1_ParamLimits

0x7a11,	// (0x00026f9c) heading_preview_pane_t1

0x37aa,	// (0x00022d35) soft_indicator_pane_t1_ParamLimits

0x3ea0,	// (0x0002342b) scroll_pane_ParamLimits

0x43b5,	// (0x00023940) scroll_sc2_left_pane

0x43be,	// (0x00023949) scroll_sc2_right_pane

0x43dd,	// (0x00023968) scroll_bg_pane_g1_ParamLimits

0x43f2,	// (0x0002397d) scroll_bg_pane_g2_ParamLimits

0x440a,	// (0x00023995) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002ec6e) scroll_bg_pane_g_ParamLimits

0x43dd,	// (0x00023968) scroll_handle_pane_g1_ParamLimits

0x442c,	// (0x000239b7) scroll_handle_pane_g2_ParamLimits

0x440a,	// (0x00023995) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002ec75) scroll_handle_pane_g_ParamLimits

0x1c5b,	// (0x000211e6) popup_choice_list_window_ParamLimits

0x1c5b,	// (0x000211e6) popup_choice_list_window

0x5351,	// (0x000248dc) choice_list_pane

0x53d3,	// (0x0002495e) cell_toolbar_pane_t1

0x53fb,	// (0x00024986) toolbar_button_pane_ParamLimits

0x64ce,	// (0x00025a59) ai_gene_pane_1_t2_ParamLimits

0x64ce,	// (0x00025a59) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002ee91) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002ee91) ai_gene_pane_1_t

0x7a2e,	// (0x00026fb9) scroll_sc2_left_pane_g1

0x7a2e,	// (0x00026fb9) scroll_sc2_right_pane_g1

0x4efd,	// (0x00024488) bg_popup_sub_pane_cp10

0x7a38,	// (0x00026fc3) list_choice_list_pane

0x7a51,	// (0x00026fdc) list_single_choice_list_pane_ParamLimits

0x7a51,	// (0x00026fdc) list_single_choice_list_pane

0x7a64,	// (0x00026fef) list_single_choice_list_pane_g1

0x40c1,	// (0x0002364c) list_single_choice_list_pane_t1_ParamLimits

0x40c1,	// (0x0002364c) list_single_choice_list_pane_t1

0x7a6c,	// (0x00026ff7) choice_list_pane_g1

0x7a74,	// (0x00026fff) choice_list_pane_t1

0x35ca,	// (0x00022b55) input_focus_pane_cp11

0x4298,	// (0x00023823) title_pane_stacon_g2_ParamLimits

0x4298,	// (0x00023823) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002ec54) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002ec54) title_pane_stacon_g

0x4bbf,	// (0x0002414a) cursor_press_pane

0xc35d,	// (0x0002b8e8) popup_fep_hwr_window_ParamLimits

0xc35d,	// (0x0002b8e8) popup_fep_hwr_window

0x1d81,	// (0x0002130c) popup_fep_vkb_window_ParamLimits

0x1d81,	// (0x0002130c) popup_fep_vkb_window

0x7a82,	// (0x0002700d) cursor_press_pane_g1

0x0002,

0xfb14,	// (0x0002f09f) fep_vkb_side_pane_g_ParamLimits

0x268b,	// (0x00021c16) fep_hwr_candidate_pane_ParamLimits

0x268b,	// (0x00021c16) fep_hwr_candidate_pane

0x26b5,	// (0x00021c40) fep_hwr_side_pane_ParamLimits

0x26b5,	// (0x00021c40) fep_hwr_side_pane

0x26d5,	// (0x00021c60) fep_hwr_top_pane_ParamLimits

0x26d5,	// (0x00021c60) fep_hwr_top_pane

0x26ed,	// (0x00021c78) fep_hwr_write_pane_ParamLimits

0x26ed,	// (0x00021c78) fep_hwr_write_pane

0xfb14,	// (0x0002f09f) fep_vkb_side_pane_g

0x7a8a,	// (0x00027015) fep_hwr_top_pane_g1

0x7a9c,	// (0x00027027) fep_hwr_top_pane_g2

0x2719,	// (0x00021ca4) fep_hwr_top_pane_g3

0x0002,

0xfaf0,	// (0x0002f07b) fep_hwr_top_pane_g

0x272e,	// (0x00021cb9) fep_hwr_top_text_pane

0x45ac,	// (0x00023b37) fep_hwr_top_text_pane_g1

0x7ad2,	// (0x0002705d) fep_hwr_top_text_pane_t1

0x2824,	// (0x00021daf) fep_hwr_candidate_pane_g1

0x7d25,	// (0x000272b0) fep_vkb_keypad_pane_g3_ParamLimits

0x7d25,	// (0x000272b0) fep_vkb_keypad_pane_g3

0x7d4d,	// (0x000272d8) fep_vkb_keypad_pane_g4_ParamLimits

0x7d4d,	// (0x000272d8) fep_vkb_keypad_pane_g4

0x7dbc,	// (0x00027347) fep_vkb_bottom_pane_g2_ParamLimits

0x7dbc,	// (0x00027347) fep_vkb_bottom_pane_g2

0x0001,

0xfb1b,	// (0x0002f0a6) fep_vkb_bottom_pane_g_ParamLimits

0xfb1b,	// (0x0002f0a6) fep_vkb_bottom_pane_g

0x7a2e,	// (0x00026fb9) cell_vkb_side_pane_g2

0x0001,

0xfb25,	// (0x0002f0b0) cell_vkb_side_pane_g

0x7e47,	// (0x000273d2) cell_vkb_side_pane_t1

0x7e55,	// (0x000273e0) cell_vkb_side_pane_t1_copy1

0x7a2e,	// (0x00026fb9) bg_fep_vkb_candidate_pane_g2

0x7f81,	// (0x0002750c) cell_vkb_candidate_pane_ParamLimits

0x7ae0,	// (0x0002706b) aid_size_cell_vkb_ParamLimits

0x7ae0,	// (0x0002706b) aid_size_cell_vkb

0x7f81,	// (0x0002750c) cell_vkb_candidate_pane

0x283e,	// (0x00021dc9) bg_popup_fep_shadow_pane_g1

0xe13e,	// (0x0002d6c9) fep_vkb_bottom_pane_ParamLimits

0xe13e,	// (0x0002d6c9) fep_vkb_bottom_pane

0x7ba4,	// (0x0002712f) fep_vkb_candidate_pane_ParamLimits

0x7ba4,	// (0x0002712f) fep_vkb_candidate_pane

0xe163,	// (0x0002d6ee) fep_vkb_keypad_pane_ParamLimits

0xe163,	// (0x0002d6ee) fep_vkb_keypad_pane

0xe19f,	// (0x0002d72a) fep_vkb_side_pane_ParamLimits

0xe19f,	// (0x0002d72a) fep_vkb_side_pane

0xe1db,	// (0x0002d766) fep_vkb_top_pane_ParamLimits

0xe1db,	// (0x0002d766) fep_vkb_top_pane

0x7c7e,	// (0x00027209) fep_vkb_top_pane_g1_ParamLimits

0x7c7e,	// (0x00027209) fep_vkb_top_pane_g1

0x7c8d,	// (0x00027218) fep_vkb_top_pane_g2_ParamLimits

0x7c8d,	// (0x00027218) fep_vkb_top_pane_g2

0x7c9c,	// (0x00027227) fep_vkb_top_pane_g3_ParamLimits

0x7c9c,	// (0x00027227) fep_vkb_top_pane_g3

0x0003,

0xfb0b,	// (0x0002f096) fep_vkb_top_pane_g_ParamLimits

0xfb0b,	// (0x0002f096) fep_vkb_top_pane_g

0x7cba,	// (0x00027245) fep_vkb_top_text_pane_ParamLimits

0x7cba,	// (0x00027245) fep_vkb_top_text_pane

0xe217,	// (0x0002d7a2) fep_vkb_side_pane_g1_ParamLimits

0xe217,	// (0x0002d7a2) fep_vkb_side_pane_g1

0x7d14,	// (0x0002729f) grid_vkb_side_pane_ParamLimits

0x7d14,	// (0x0002729f) grid_vkb_side_pane

0x2846,	// (0x00021dd1) bg_popup_fep_shadow_pane_g2

0x284f,	// (0x00021dda) bg_popup_fep_shadow_pane_g3

0x2857,	// (0x00021de2) bg_popup_fep_shadow_pane_g4

0x2860,	// (0x00021deb) bg_popup_fep_shadow_pane_g5

0x286a,	// (0x00021df5) bg_popup_fep_shadow_pane_g6

0x2872,	// (0x00021dfd) bg_popup_fep_shadow_pane_g7

0x3fa8,	// (0x00023533) bg_popup_fep_shadow_pane_g8

0x7d6b,	// (0x000272f6) grid_vkb_keypad_number_pane_ParamLimits

0x7d6b,	// (0x000272f6) grid_vkb_keypad_number_pane

0x7d7b,	// (0x00027306) grid_vkb_keypad_pane_ParamLimits

0x7d7b,	// (0x00027306) grid_vkb_keypad_pane

0x7da1,	// (0x0002732c) fep_vkb_bottom_pane_g1_ParamLimits

0x7da1,	// (0x0002732c) fep_vkb_bottom_pane_g1

0x7dca,	// (0x00027355) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7dca,	// (0x00027355) grid_vkb_keypad_bottom_left_pane

0x7ddf,	// (0x0002736a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ddf,	// (0x0002736a) grid_vkb_keypad_bottom_right_pane

0x7df4,	// (0x0002737f) fep_vkb_top_text_pane_g1

0xe25e,	// (0x0002d7e9) fep_vkb_top_text_pane_t1

0xe270,	// (0x0002d7fb) cell_vkb_side_pane_ParamLimits

0xe270,	// (0x0002d7fb) cell_vkb_side_pane

0x7a2e,	// (0x00026fb9) cell_vkb_side_pane_g1

0x7e63,	// (0x000273ee) cell_vkb_keypad_pane_ParamLimits

0x7e63,	// (0x000273ee) cell_vkb_keypad_pane

0x7ed8,	// (0x00027463) cell_vkb_keypad_pane_g1

0x0008,

0xfb38,	// (0x0002f0c3) bg_popup_fep_shadow_pane_g

0x7a2e,	// (0x00026fb9) cell_hwr_side_pane_g1

0x7a2e,	// (0x00026fb9) cell_hwr_side_pane_g2

0x7ee2,	// (0x0002746d) cell_vkb_keypad_pane_t1

0xe286,	// (0x0002d811) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe286,	// (0x0002d811) cell_vkb_keypad_bottom_left_pane

0xe29b,	// (0x0002d826) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe29b,	// (0x0002d826) cell_vkb_keypad_bottom_right_pane

0x7a2e,	// (0x00026fb9) cell_vkb_keypad_bottom_left_pane_g1

0x7a2e,	// (0x00026fb9) cell_vkb_keypad_bottom_right_pane_g1

0x7f46,	// (0x000274d1) cell_vkb_keypad_number_pane_ParamLimits

0x7f46,	// (0x000274d1) cell_vkb_keypad_number_pane

0x7f65,	// (0x000274f0) cell_vkb_keypad_number_pane_g1

0x7f6f,	// (0x000274fa) cell_vkb_keypad_number_pane_g2

0x7f78,	// (0x00027503) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2a,	// (0x0002f0b5) cell_vkb_keypad_number_pane_g

0x7ee2,	// (0x0002746d) cell_vkb_keypad_number_pane_t1

0x7f9c,	// (0x00027527) fep_vkb_candidate_pane_g1

0x0001,

0xfb25,	// (0x0002f0b0) cell_hwr_side_pane_g

0x7fb5,	// (0x00027540) cell_hwr_side_pane_t1

0x2884,	// (0x00021e0f) cell_hwr_side_pane_t1_copy1

0x7cac,	// (0x00027237) cell_hwr_candidate_pane_g1

0x2892,	// (0x00021e1d) cell_hwr_candidate_pane_t1

0x7a2e,	// (0x00026fb9) cell_vkb_candidate_pane_g2

0x7ff9,	// (0x00027584) cell_vkb_candidate_pane_t1

0x2652,	// (0x00021bdd) bg_popup_fep_shadow_pane_ParamLimits

0x2652,	// (0x00021bdd) bg_popup_fep_shadow_pane

0xdb3d,	// (0x0002d0c8) bg_fep_hwr_top_pane_g4

0x7aae,	// (0x00027039) bg_hwr_side_pane_g1_ParamLimits

0x7aae,	// (0x00027039) bg_hwr_side_pane_g1

0xc9ea,	// (0x0002bf75) cell_hwr_side_pane_ParamLimits

0xc9ea,	// (0x0002bf75) cell_hwr_side_pane

0x27a5,	// (0x00021d30) fep_hwr_write_pane_g1_ParamLimits

0x27a5,	// (0x00021d30) fep_hwr_write_pane_g1

0x27b2,	// (0x00021d3d) fep_hwr_write_pane_g2_ParamLimits

0x27b2,	// (0x00021d3d) fep_hwr_write_pane_g2

0x27bf,	// (0x00021d4a) fep_hwr_write_pane_g3_ParamLimits

0x27bf,	// (0x00021d4a) fep_hwr_write_pane_g3

0xca0a,	// (0x0002bf95) fep_hwr_write_pane_g4_ParamLimits

0xca0a,	// (0x0002bf95) fep_hwr_write_pane_g4

0x0005,

0xfaf7,	// (0x0002f082) fep_hwr_write_pane_g_ParamLimits

0xfaf7,	// (0x0002f082) fep_hwr_write_pane_g

0xdb3d,	// (0x0002d0c8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdb3d,	// (0x0002d0c8) bg_fep_hwr_candidate_pane_g2

0x27e2,	// (0x00021d6d) cell_hwr_candidate_pane_ParamLimits

0x27e2,	// (0x00021d6d) cell_hwr_candidate_pane

0x2824,	// (0x00021daf) fep_hwr_candidate_pane_g1_ParamLimits

0x7b0e,	// (0x00027099) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7b0e,	// (0x00027099) bg_popup_fep_shadow_pane_cp2

0x7cac,	// (0x00027237) fep_vkb_top_pane_g4_ParamLimits

0x7cac,	// (0x00027237) fep_vkb_top_pane_g4

0x7cf2,	// (0x0002727d) fep_vkb_side_pane_g2_ParamLimits

0x7cf2,	// (0x0002727d) fep_vkb_side_pane_g2

0xb8d8,	// (0x0002ae63) list_setting_pane_t4_ParamLimits

0xb8d8,	// (0x0002ae63) list_setting_pane_t4

0xb972,	// (0x0002aefd) list_setting_number_pane_t5_ParamLimits

0xb972,	// (0x0002aefd) list_setting_number_pane_t5

0x45e3,	// (0x00023b6e) list_double_heading_pane_cp2_ParamLimits

0x45e3,	// (0x00023b6e) list_double_heading_pane_cp2

0x3f3b,	// (0x000234c6) list_double_heading_pane_g1_cp2_ParamLimits

0x3f3b,	// (0x000234c6) list_double_heading_pane_g1_cp2

0x3f47,	// (0x000234d2) list_double_heading_pane_g2_cp2_ParamLimits

0x3f47,	// (0x000234d2) list_double_heading_pane_g2_cp2

0x8007,	// (0x00027592) list_double_heading_pane_t1_cp2_ParamLimits

0x8007,	// (0x00027592) list_double_heading_pane_t1_cp2

0x801d,	// (0x000275a8) list_double_heading_pane_t2_cp2_ParamLimits

0x801d,	// (0x000275a8) list_double_heading_pane_t2_cp2

0x35b2,	// (0x00022b3d) aid_value_unit2

0x14af,	// (0x00020a3a) popup_preview_fixed_window

0x3947,	// (0x00022ed2) bg_popup_preview_window_pane_cp02

0x802f,	// (0x000275ba) list_preview_fixed_pane

0x8075,	// (0x00027600) list_empty_pane_fp_ParamLimits

0x8075,	// (0x00027600) list_empty_pane_fp

0x8075,	// (0x00027600) list_single_cale_day_pane_fp_ParamLimits

0x8075,	// (0x00027600) list_single_cale_day_pane_fp

0x8075,	// (0x00027600) list_single_graphic_heading_pane_fp_ParamLimits

0x8075,	// (0x00027600) list_single_graphic_heading_pane_fp

0x8075,	// (0x00027600) list_single_graphic_pane_fp_ParamLimits

0x8075,	// (0x00027600) list_single_graphic_pane_fp

0x8075,	// (0x00027600) list_single_heading_pane_fp_ParamLimits

0x8075,	// (0x00027600) list_single_heading_pane_fp

0x8075,	// (0x00027600) list_single_pane_fp_ParamLimits

0x8075,	// (0x00027600) list_single_pane_fp

0x808a,	// (0x00027615) list_single_pane_fp_g1_ParamLimits

0x808a,	// (0x00027615) list_single_pane_fp_g1

0x0e47,	// (0x000203d2) list_single_pane_fp_g2_ParamLimits

0x0e47,	// (0x000203d2) list_single_pane_fp_g2

0x0e53,	// (0x000203de) list_single_pane_fp_g3_ParamLimits

0x0e53,	// (0x000203de) list_single_pane_fp_g3

0x8096,	// (0x00027621) list_single_pane_fp_g4_ParamLimits

0x8096,	// (0x00027621) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x0002f0e4) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x0002f0e4) list_single_pane_fp_g

0x0e67,	// (0x000203f2) list_single_pane_fp_t1_ParamLimits

0x0e67,	// (0x000203f2) list_single_pane_fp_t1

0x0e7e,	// (0x00020409) list_single_graphic_pane_fp_g1_ParamLimits

0x0e7e,	// (0x00020409) list_single_graphic_pane_fp_g1

0x808a,	// (0x00027615) list_single_graphic_pane_fp_g2_ParamLimits

0x808a,	// (0x00027615) list_single_graphic_pane_fp_g2

0x0e47,	// (0x000203d2) list_single_graphic_pane_fp_g3_ParamLimits

0x0e47,	// (0x000203d2) list_single_graphic_pane_fp_g3

0x0e53,	// (0x000203de) list_single_graphic_pane_fp_g4_ParamLimits

0x0e53,	// (0x000203de) list_single_graphic_pane_fp_g4

0x8096,	// (0x00027621) list_single_graphic_pane_fp_g5_ParamLimits

0x8096,	// (0x00027621) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x0002f0ed) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x0002f0ed) list_single_graphic_pane_fp_g

0x0e8a,	// (0x00020415) list_single_graphic_pane_fp_t1_ParamLimits

0x0e8a,	// (0x00020415) list_single_graphic_pane_fp_t1

0x0e7e,	// (0x00020409) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0e7e,	// (0x00020409) list_single_graphic_heading_pane_fp_g1

0x808a,	// (0x00027615) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x808a,	// (0x00027615) list_single_graphic_heading_pane_fp_g2

0x0e47,	// (0x000203d2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0e47,	// (0x000203d2) list_single_graphic_heading_pane_fp_g3

0x0e53,	// (0x000203de) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0e53,	// (0x000203de) list_single_graphic_heading_pane_fp_g4

0x8096,	// (0x00027621) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8096,	// (0x00027621) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002f0ed) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002f0ed) list_single_graphic_heading_pane_fp_g

0x0ea0,	// (0x0002042b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0ea0,	// (0x0002042b) list_single_graphic_heading_pane_fp_t1

0x0eb6,	// (0x00020441) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0eb6,	// (0x00020441) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x0002f0f8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x0002f0f8) list_single_graphic_heading_pane_fp_t

0x0ec8,	// (0x00020453) list_single_cale_day_pane_fp_g1_ParamLimits

0x0ec8,	// (0x00020453) list_single_cale_day_pane_fp_g1

0x80a2,	// (0x0002762d) list_single_cale_day_pane_fp_g2_ParamLimits

0x80a2,	// (0x0002762d) list_single_cale_day_pane_fp_g2

0x0f00,	// (0x0002048b) list_single_cale_day_pane_fp_g3_ParamLimits

0x0f00,	// (0x0002048b) list_single_cale_day_pane_fp_g3

0x0f28,	// (0x000204b3) list_single_cale_day_pane_fp_g4_ParamLimits

0x0f28,	// (0x000204b3) list_single_cale_day_pane_fp_g4

0x0f4c,	// (0x000204d7) list_single_cale_day_pane_fp_g5_ParamLimits

0x0f4c,	// (0x000204d7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x0002f0fd) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x0002f0fd) list_single_cale_day_pane_fp_g

0x0f70,	// (0x000204fb) list_single_cale_day_pane_fp_t1_ParamLimits

0x0f70,	// (0x000204fb) list_single_cale_day_pane_fp_t1

0x0f96,	// (0x00020521) list_single_cale_day_pane_fp_t2_ParamLimits

0x0f96,	// (0x00020521) list_single_cale_day_pane_fp_t2

0x0faf,	// (0x0002053a) list_single_cale_day_pane_fp_t3_ParamLimits

0x0faf,	// (0x0002053a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x0002f108) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x0002f108) list_single_cale_day_pane_fp_t

0x808a,	// (0x00027615) list_empty_pane_fp_g1_ParamLimits

0x808a,	// (0x00027615) list_empty_pane_fp_g1

0x0fc8,	// (0x00020553) list_empty_pane_fp_t1

0x0fd6,	// (0x00020561) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x0002f10f) list_empty_pane_fp_t

0x808a,	// (0x00027615) list_single_heading_pane_fp_g1_ParamLimits

0x808a,	// (0x00027615) list_single_heading_pane_fp_g1

0x0e47,	// (0x000203d2) list_single_heading_pane_fp_g2_ParamLimits

0x0e47,	// (0x000203d2) list_single_heading_pane_fp_g2

0x0e53,	// (0x000203de) list_single_heading_pane_fp_g3_ParamLimits

0x0e53,	// (0x000203de) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x0002f114) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002f114) list_single_heading_pane_fp_g

0x0fe4,	// (0x0002056f) list_single_heading_pane_fp_t1_ParamLimits

0x0fe4,	// (0x0002056f) list_single_heading_pane_fp_t1

0x0ff6,	// (0x00020581) list_single_heading_pane_fp_t2_ParamLimits

0x0ff6,	// (0x00020581) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0002f11b) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0002f11b) list_single_heading_pane_fp_t

0x412f,	// (0x000236ba) aid_size_cell_fast

0x38b7,	// (0x00022e42) soft_indicator_pane_cp1_t1

0x416c,	// (0x000236f7) cell_app_pane_cp2_ParamLimits

0x416c,	// (0x000236f7) cell_app_pane_cp2

0x2674,	// (0x00021bff) fep_hwr_candidate_drop_down_list_pane

0xdb4b,	// (0x0002d0d6) fep_hwr_candidate_pane_g3_ParamLimits

0xdb4b,	// (0x0002d0d6) fep_hwr_candidate_pane_g3

0xdb58,	// (0x0002d0e3) fep_hwr_candidate_pane_g4_ParamLimits

0xdb58,	// (0x0002d0e3) fep_hwr_candidate_pane_g4

0x0002,

0xfb04,	// (0x0002f08f) fep_hwr_candidate_pane_g_ParamLimits

0xfb04,	// (0x0002f08f) fep_hwr_candidate_pane_g

0x7b93,	// (0x0002711e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b93,	// (0x0002711e) fep_vkb_candidate_drop_down_list_pane

0x7fa4,	// (0x0002752f) fep_vkb_candidate_pane_g3

0x7fac,	// (0x00027537) fep_vkb_candidate_pane_g4

0x0002,

0xfb31,	// (0x0002f0bc) fep_vkb_candidate_pane_g

0x7cac,	// (0x00027237) cell_hwr_candidate_pane_g1_ParamLimits

0x810a,	// (0x00027695) cell_hwr_candidate_pane_g3_ParamLimits

0x810a,	// (0x00027695) cell_hwr_candidate_pane_g3

0x812b,	// (0x000276b6) cell_hwr_candidate_pane_g4_ParamLimits

0x812b,	// (0x000276b6) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0002f0d6) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x0002f0d6) cell_hwr_candidate_pane_g

0x7fc3,	// (0x0002754e) cell_vkb_candidate_pane_g3_ParamLimits

0x7fc3,	// (0x0002754e) cell_vkb_candidate_pane_g3

0x7fde,	// (0x00027569) cell_vkb_candidate_pane_g4_ParamLimits

0x7fde,	// (0x00027569) cell_vkb_candidate_pane_g4

0x80ae,	// (0x00027639) cell_app_pane_cp2_g1_ParamLimits

0x80ae,	// (0x00027639) cell_app_pane_cp2_g1

0x80cc,	// (0x00027657) cell_app_pane_cp2_g2_ParamLimits

0x80cc,	// (0x00027657) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x0002f120) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x0002f120) cell_app_pane_cp2_g

0x80d8,	// (0x00027663) cell_app_pane_cp2_t1_ParamLimits

0x80d8,	// (0x00027663) cell_app_pane_cp2_t1

0x3f2d,	// (0x000234b8) grid_highlight_pane_cp1_ParamLimits

0x3f2d,	// (0x000234b8) grid_highlight_pane_cp1

0x28b0,	// (0x00021e3b) cell_hwr_candidate_pane_cp1_ParamLimits

0x28b0,	// (0x00021e3b) cell_hwr_candidate_pane_cp1

0x7cac,	// (0x00027237) fep_hwr_candidate_drop_down_list_pane_g1

0x814c,	// (0x000276d7) fep_hwr_candidate_drop_down_list_pane_g2

0x8159,	// (0x000276e4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002f125) fep_hwr_candidate_drop_down_list_pane_g

0x28cf,	// (0x00021e5a) fep_hwr_candidate_drop_down_list_scroll_pane

0x28d8,	// (0x00021e63) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x28d8,	// (0x00021e63) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x28e5,	// (0x00021e70) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x28e5,	// (0x00021e70) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x28f2,	// (0x00021e7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x28f2,	// (0x00021e7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7fc3,	// (0x0002754e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7fc3,	// (0x0002754e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7fde,	// (0x00027569) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7fde,	// (0x00027569) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x28ff,	// (0x00021e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x28ff,	// (0x00021e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x291a,	// (0x00021ea5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x291a,	// (0x00021ea5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2935,	// (0x00021ec0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2935,	// (0x00021ec0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x0002f12c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x0002f12c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x80ea,	// (0x00027675) cell_vkb_candidate_pane_cp1_ParamLimits

0x80ea,	// (0x00027675) cell_vkb_candidate_pane_cp1

0x7cac,	// (0x00027237) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7cac,	// (0x00027237) fep_vkb_candidate_drop_down_list_pane_g1

0x814c,	// (0x000276d7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x814c,	// (0x000276d7) fep_vkb_candidate_drop_down_list_pane_g2

0x8159,	// (0x000276e4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8159,	// (0x000276e4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002f125) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9a,	// (0x0002f125) fep_vkb_candidate_drop_down_list_pane_g

0x8166,	// (0x000276f1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8166,	// (0x000276f1) fep_vkb_candidate_drop_down_list_scroll_pane

0x8173,	// (0x000276fe) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8173,	// (0x000276fe) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8180,	// (0x0002770b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8180,	// (0x0002770b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x818c,	// (0x00027717) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x818c,	// (0x00027717) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x810a,	// (0x00027695) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x810a,	// (0x00027695) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x812b,	// (0x000276b6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x812b,	// (0x000276b6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8198,	// (0x00027723) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8198,	// (0x00027723) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x81b9,	// (0x00027744) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x81b9,	// (0x00027744) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x81da,	// (0x00027765) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x81da,	// (0x00027765) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0002f13d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0002f13d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc057,	// (0x0002b5e2) title_pane_g1_ParamLimits

0xc06a,	// (0x0002b5f5) title_pane_g2_ParamLimits

0xf54e,	// (0x0002ead9) title_pane_g_ParamLimits

0x459c,	// (0x00023b27) aid_call2_pane

0x45a4,	// (0x00023b2f) aid_call_pane

0x45ac,	// (0x00023b37) popup_clock_analogue_window_g1

0x45ac,	// (0x00023b37) popup_clock_analogue_window_g2

0x1820,	// (0x00020dab) popup_clock_analogue_window_g3

0x1829,	// (0x00020db4) popup_clock_analogue_window_g4

0x35d4,	// (0x00022b5f) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002ec83) popup_clock_analogue_window_g

0x1831,	// (0x00020dbc) popup_clock_analogue_window_t1

0x183f,	// (0x00020dca) clock_digital_number_pane_ParamLimits

0x183f,	// (0x00020dca) clock_digital_number_pane

0x184b,	// (0x00020dd6) clock_digital_number_pane_cp02_ParamLimits

0x184b,	// (0x00020dd6) clock_digital_number_pane_cp02

0x1857,	// (0x00020de2) clock_digital_number_pane_cp03_ParamLimits

0x1857,	// (0x00020de2) clock_digital_number_pane_cp03

0x1863,	// (0x00020dee) clock_digital_number_pane_cp04_ParamLimits

0x1863,	// (0x00020dee) clock_digital_number_pane_cp04

0x186f,	// (0x00020dfa) clock_digital_separator_pane_ParamLimits

0x186f,	// (0x00020dfa) clock_digital_separator_pane

0x187b,	// (0x00020e06) popup_clock_digital_window_t1_ParamLimits

0x187b,	// (0x00020e06) popup_clock_digital_window_t1

0x35d4,	// (0x00022b5f) clock_digital_number_pane_g1

0x35d4,	// (0x00022b5f) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002ec8e) clock_digital_number_pane_g

0x35d4,	// (0x00022b5f) clock_digital_separator_pane_g1

0x35d4,	// (0x00022b5f) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002ec8e) clock_digital_separator_pane_g

0xd5ea,	// (0x0002cb75) aid_fill_nsta_ParamLimits

0xd720,	// (0x0002ccab) indicator_nsta_pane_ParamLimits

0x51de,	// (0x00024769) popup_clock_analogue_window

0x51de,	// (0x00024769) popup_clock_digital_window

0x40f0,	// (0x0002367b) grid_indicator_nsta_pane_ParamLimits

0x741f,	// (0x000269aa) clock_nsta_pane_t2

0x0001,

0xfa84,	// (0x0002f00f) clock_nsta_pane_t

0x17e4,	// (0x00020d6f) aid_size_max_handle

0xc11a,	// (0x0002b6a5) aid_size_min_handle

0x4bbf,	// (0x0002414a) editor_scroll_pane

0x81f5,	// (0x00027780) ex_editor_pane

0x409d,	// (0x00023628) scroll_pane_cp13

0x3ecc,	// (0x00023457) scroll_pane_cp14

0x45db,	// (0x00023b66) scroll_pane_cp36

0xd3a9,	// (0x0002c934) list_single_graphic_hl_pane_cp2_ParamLimits

0xd3a9,	// (0x0002c934) list_single_graphic_hl_pane_cp2

0xbbf2,	// (0x0002b17d) list_single_graphic_hl_pane_ParamLimits

0xbbf2,	// (0x0002b17d) list_single_graphic_hl_pane

0x100c,	// (0x00020597) aid_size_min_hl_cp1

0x81fd,	// (0x00027788) list_highlight_pane_cp34_ParamLimits

0x81fd,	// (0x00027788) list_highlight_pane_cp34

0x820e,	// (0x00027799) list_single_graphic_hl_pane_g1_ParamLimits

0x820e,	// (0x00027799) list_single_graphic_hl_pane_g1

0xbc4c,	// (0x0002b1d7) list_single_graphic_hl_pane_g2_ParamLimits

0xbc4c,	// (0x0002b1d7) list_single_graphic_hl_pane_g2

0xbc4c,	// (0x0002b1d7) list_single_graphic_hl_pane_g3_ParamLimits

0xbc4c,	// (0x0002b1d7) list_single_graphic_hl_pane_g3

0xbc58,	// (0x0002b1e3) list_single_graphic_hl_pane_g4_ParamLimits

0xbc58,	// (0x0002b1e3) list_single_graphic_hl_pane_g4

0xbc64,	// (0x0002b1ef) list_single_graphic_hl_pane_g5_ParamLimits

0xbc64,	// (0x0002b1ef) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0002f14e) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0002f14e) list_single_graphic_hl_pane_g

0xbc78,	// (0x0002b203) list_single_graphic_hl_pane_t1_ParamLimits

0xbc78,	// (0x0002b203) list_single_graphic_hl_pane_t1

0x821b,	// (0x000277a6) aid_size_min_hl_cp2

0x8224,	// (0x000277af) list_highlight_pane_cp34_cp2_ParamLimits

0x8224,	// (0x000277af) list_highlight_pane_cp34_cp2

0x820e,	// (0x00027799) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x820e,	// (0x00027799) list_single_graphic_hl_pane_g1_cp2

0x8231,	// (0x000277bc) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8231,	// (0x000277bc) list_single_graphic_hl_pane_g2_cp2

0x823d,	// (0x000277c8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x823d,	// (0x000277c8) list_single_graphic_hl_pane_g3_cp2

0x7614,	// (0x00026b9f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7614,	// (0x00026b9f) list_single_graphic_hl_pane_g4_cp2

0x824b,	// (0x000277d6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x824b,	// (0x000277d6) list_single_graphic_hl_pane_g5_cp2

0xc175,	// (0x0002b700) control_pane_g4_ParamLimits

0xc175,	// (0x0002b700) control_pane_g4

0x4efd,	// (0x00024488) bg_popup_sub_pane_cp10_ParamLimits

0x7a38,	// (0x00026fc3) list_choice_list_pane_ParamLimits

0x7a47,	// (0x00026fd2) scroll_pane_cp23

0x3947,	// (0x00022ed2) bg_popup_preview_window_pane_cp02_ParamLimits

0x802f,	// (0x000275ba) list_preview_fixed_pane_ParamLimits

0x8045,	// (0x000275d0) list_preview_fixed_pane_cp_ParamLimits

0x8045,	// (0x000275d0) list_preview_fixed_pane_cp

0x8051,	// (0x000275dc) popup_preview_fixed_window_g1_ParamLimits

0x8051,	// (0x000275dc) popup_preview_fixed_window_g1

0x805d,	// (0x000275e8) popup_preview_fixed_window_g2_ParamLimits

0x805d,	// (0x000275e8) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x0002f0dd) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x0002f0dd) popup_preview_fixed_window_g

0x1758,	// (0x00020ce3) aid_navi_side_left_pane_ParamLimits

0x176d,	// (0x00020cf8) aid_navi_side_right_pane_ParamLimits

0x1785,	// (0x00020d10) navi_icon_pane_stacon_ParamLimits

0x1799,	// (0x00020d24) navi_navi_pane_stacon_ParamLimits

0x1785,	// (0x00020d10) navi_text_pane_stacon_ParamLimits

0x35ca,	// (0x00022b55) main_text_info_pane

0x8275,	// (0x00027800) listscroll_text_info_pane

0x827d,	// (0x00027808) list_text_info_pane_ParamLimits

0x827d,	// (0x00027808) list_text_info_pane

0x828c,	// (0x00027817) scroll_pane_cp24_ParamLimits

0x828c,	// (0x00027817) scroll_pane_cp24

0xe2b6,	// (0x0002d841) list_text_info_pane_t1_ParamLimits

0xe2b6,	// (0x0002d841) list_text_info_pane_t1

0xc2d0,	// (0x0002b85b) popup_fast_swap2_window_ParamLimits

0xc2d0,	// (0x0002b85b) popup_fast_swap2_window

0x82db,	// (0x00027866) aid_size_cell_fast2

0x35ca,	// (0x00022b55) bg_popup_window_pane_cp17

0x5865,	// (0x00024df0) heading_pane_cp2

0x3b96,	// (0x00023121) listscroll_fast2_pane

0x82e5,	// (0x00027870) grid_fast2_pane

0x82ef,	// (0x0002787a) listscroll_fast2_pane_g1

0x82f7,	// (0x00027882) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0002f159) listscroll_fast2_pane_g

0x409d,	// (0x00023628) scroll_pane_cp26

0x8301,	// (0x0002788c) cell_fast2_pane_ParamLimits

0x8301,	// (0x0002788c) cell_fast2_pane

0x8316,	// (0x000278a1) cell_fast2_pane_g1

0x831f,	// (0x000278aa) cell_fast2_pane_g2

0x8328,	// (0x000278b3) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0002f15e) cell_fast2_pane_g

0x3c89,	// (0x00023214) grid_highlight_pane_cp9

0x3c9e,	// (0x00023229) main_eswt_pane_ParamLimits

0x3c9e,	// (0x00023229) main_eswt_pane

0x82a1,	// (0x0002782c) list_single_text_info_pane

0x8330,	// (0x000278bb) eswt_ctrl_button_pane

0x8330,	// (0x000278bb) eswt_ctrl_canvas_pane

0x8338,	// (0x000278c3) eswt_ctrl_combo_pane

0x8330,	// (0x000278bb) eswt_ctrl_default_pane

0x8330,	// (0x000278bb) eswt_ctrl_label_pane

0x8340,	// (0x000278cb) eswt_ctrl_wait_pane

0x8348,	// (0x000278d3) eswt_shell_pane

0x35ca,	// (0x00022b55) listscroll_eswt_app_pane

0x8368,	// (0x000278f3) popup_eswt_tasktip_window_ParamLimits

0x8368,	// (0x000278f3) popup_eswt_tasktip_window

0x547b,	// (0x00024a06) bg_popup_window_pane_cp18

0x8379,	// (0x00027904) eswt_control_pane_g1_ParamLimits

0x8379,	// (0x00027904) eswt_control_pane_g1

0x8386,	// (0x00027911) eswt_control_pane_g2_ParamLimits

0x8386,	// (0x00027911) eswt_control_pane_g2

0x8393,	// (0x0002791e) eswt_control_pane_g3_ParamLimits

0x8393,	// (0x0002791e) eswt_control_pane_g3

0x83a0,	// (0x0002792b) eswt_control_pane_g4_ParamLimits

0x83a0,	// (0x0002792b) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0002f165) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0002f165) eswt_control_pane_g

0x3f2d,	// (0x000234b8) bg_button_pane_ParamLimits

0x3f2d,	// (0x000234b8) bg_button_pane

0x3c9e,	// (0x00023229) common_borders_pane_copy2_ParamLimits

0x3c9e,	// (0x00023229) common_borders_pane_copy2

0x83ad,	// (0x00027938) control_button_pane_g1_ParamLimits

0x83ad,	// (0x00027938) control_button_pane_g1

0x83b9,	// (0x00027944) control_button_pane_g2_ParamLimits

0x83b9,	// (0x00027944) control_button_pane_g2

0x83c5,	// (0x00027950) control_button_pane_g3_ParamLimits

0x83c5,	// (0x00027950) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0002f16e) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0002f16e) control_button_pane_g

0x83d9,	// (0x00027964) control_button_pane_t1

0x83e7,	// (0x00027972) control_button_pane_t2

0x0001,

0xfbea,	// (0x0002f175) control_button_pane_t

0x5407,	// (0x00024992) bg_button_pane_g1

0x540f,	// (0x0002499a) bg_button_pane_g2

0x5417,	// (0x000249a2) bg_button_pane_g3

0x541f,	// (0x000249aa) bg_button_pane_g4

0x5427,	// (0x000249b2) bg_button_pane_g5

0x542f,	// (0x000249ba) bg_button_pane_g6

0x5437,	// (0x000249c2) bg_button_pane_g7

0x543f,	// (0x000249ca) bg_button_pane_g8

0x5447,	// (0x000249d2) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002ede5) bg_button_pane_g

0x79f3,	// (0x00026f7e) common_borders_pane_ParamLimits

0x79f3,	// (0x00026f7e) common_borders_pane

0x8379,	// (0x00027904) eswt_control_pane_g1_copy1_ParamLimits

0x8379,	// (0x00027904) eswt_control_pane_g1_copy1

0x8386,	// (0x00027911) eswt_control_pane_g2_copy1_ParamLimits

0x8386,	// (0x00027911) eswt_control_pane_g2_copy1

0x8393,	// (0x0002791e) eswt_control_pane_g3_copy1_ParamLimits

0x8393,	// (0x0002791e) eswt_control_pane_g3_copy1

0x83a0,	// (0x0002792b) eswt_control_pane_g4_copy1_ParamLimits

0x83a0,	// (0x0002792b) eswt_control_pane_g4_copy1

0x7a2e,	// (0x00026fb9) bg_eswt_ctrl_canvas_pane_g1

0x79f3,	// (0x00026f7e) common_borders_pane_cp2_ParamLimits

0x79f3,	// (0x00026f7e) common_borders_pane_cp2

0x79f3,	// (0x00026f7e) common_borders_pane_cp3_ParamLimits

0x79f3,	// (0x00026f7e) common_borders_pane_cp3

0x83f5,	// (0x00027980) separator_horizontal_pane

0x83fd,	// (0x00027988) separator_vertical_pane

0x8379,	// (0x00027904) eswt_control_pane_g1_copy2_ParamLimits

0x8379,	// (0x00027904) eswt_control_pane_g1_copy2

0x8386,	// (0x00027911) eswt_control_pane_g2_copy2_ParamLimits

0x8386,	// (0x00027911) eswt_control_pane_g2_copy2

0x8393,	// (0x0002791e) eswt_control_pane_g3_copy2_ParamLimits

0x8393,	// (0x0002791e) eswt_control_pane_g3_copy2

0x83a0,	// (0x0002792b) eswt_control_pane_g4_copy2_ParamLimits

0x83a0,	// (0x0002792b) eswt_control_pane_g4_copy2

0x35ca,	// (0x00022b55) common_borders_pane_cp4

0x8406,	// (0x00027991) separator_horizontal_pane_g1

0x840f,	// (0x0002799a) separator_horizontal_pane_g2

0x8418,	// (0x000279a3) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0002f17a) separator_horizontal_pane_g

0x8379,	// (0x00027904) eswt_control_pane_g1_copy3_ParamLimits

0x8379,	// (0x00027904) eswt_control_pane_g1_copy3

0x8386,	// (0x00027911) eswt_control_pane_g2_copy3_ParamLimits

0x8386,	// (0x00027911) eswt_control_pane_g2_copy3

0x8393,	// (0x0002791e) eswt_control_pane_g3_copy3_ParamLimits

0x8393,	// (0x0002791e) eswt_control_pane_g3_copy3

0x83a0,	// (0x0002792b) eswt_control_pane_g4_copy3_ParamLimits

0x83a0,	// (0x0002792b) eswt_control_pane_g4_copy3

0x35ca,	// (0x00022b55) common_borders_pane_cp5

0x8421,	// (0x000279ac) separator_vertical_pane_g1

0x842a,	// (0x000279b5) separator_vertical_pane_g2

0x8433,	// (0x000279be) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0002f181) separator_vertical_pane_g

0x8379,	// (0x00027904) eswt_control_pane_g1_copy4_ParamLimits

0x8379,	// (0x00027904) eswt_control_pane_g1_copy4

0x8386,	// (0x00027911) eswt_control_pane_g2_copy4_ParamLimits

0x8386,	// (0x00027911) eswt_control_pane_g2_copy4

0x8393,	// (0x0002791e) eswt_control_pane_g3_copy4_ParamLimits

0x8393,	// (0x0002791e) eswt_control_pane_g3_copy4

0x83a0,	// (0x0002792b) eswt_control_pane_g4_copy4_ParamLimits

0x83a0,	// (0x0002792b) eswt_control_pane_g4_copy4

0xe2d1,	// (0x0002d85c) eswt_ctrl_combo_button_pane

0xe2d9,	// (0x0002d864) eswt_ctrl_input_pane

0xe2e1,	// (0x0002d86c) popup_choice_list_window_cp70

0xe2e9,	// (0x0002d874) eswt_ctrl_input_pane_t1

0x35ca,	// (0x00022b55) input_focus_pane_cp70

0x79f3,	// (0x00026f7e) bg_button_pane_cp70_ParamLimits

0x79f3,	// (0x00026f7e) bg_button_pane_cp70

0xe2f7,	// (0x0002d882) eswt_ctrl_combo_button_pane_g1

0x846a,	// (0x000279f5) wait_bar_pane_cp70

0x547b,	// (0x00024a06) bg_popup_window_pane_cp70_ParamLimits

0x547b,	// (0x00024a06) bg_popup_window_pane_cp70

0x8472,	// (0x000279fd) popup_eswt_tasktip_window_t1

0x8488,	// (0x00027a13) wait_bar_pane_cp71_ParamLimits

0x8488,	// (0x00027a13) wait_bar_pane_cp71

0x8494,	// (0x00027a1f) grid_eswt_app_pane

0x43be,	// (0x00023949) scroll_pane_cp70

0xe2ff,	// (0x0002d88a) cell_eswt_app_pane_ParamLimits

0xe2ff,	// (0x0002d88a) cell_eswt_app_pane

0xe329,	// (0x0002d8b4) cell_eswt_app_pane_g1_ParamLimits

0xe329,	// (0x0002d8b4) cell_eswt_app_pane_g1

0xe358,	// (0x0002d8e3) cell_eswt_app_pane_g2_ParamLimits

0xe358,	// (0x0002d8e3) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0002f188) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0002f188) cell_eswt_app_pane_g

0xe381,	// (0x0002d90c) cell_eswt_app_pane_t1_ParamLimits

0xe381,	// (0x0002d90c) cell_eswt_app_pane_t1

0x8557,	// (0x00027ae2) grid_highlight_pane_cp70_ParamLimits

0x8557,	// (0x00027ae2) grid_highlight_pane_cp70

0x4a94,	// (0x0002401f) set_content_pane_g1

0xd59f,	// (0x0002cb2a) status_small_volume_pane

0x2950,	// (0x00021edb) status_small_volume_pane_g1

0x2958,	// (0x00021ee3) volume_small2_pane

0x2961,	// (0x00021eec) volume_small2_pane_g1

0x296a,	// (0x00021ef5) volume_small2_pane_g2

0x2973,	// (0x00021efe) volume_small2_pane_g3

0x297c,	// (0x00021f07) volume_small2_pane_g4

0x2985,	// (0x00021f10) volume_small2_pane_g5

0x298e,	// (0x00021f19) volume_small2_pane_g6

0x2997,	// (0x00021f22) volume_small2_pane_g7

0x29a0,	// (0x00021f2b) volume_small2_pane_g8

0x29a9,	// (0x00021f34) volume_small2_pane_g9

0x29b2,	// (0x00021f3d) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0002f18d) volume_small2_pane_g

0x7df4,	// (0x0002737f) fep_vkb_top_text_pane_g1_ParamLimits

0xe25e,	// (0x0002d7e9) fep_vkb_top_text_pane_t1_ParamLimits

0x8069,	// (0x000275f4) popup_preview_fixed_window_g3_ParamLimits

0x8069,	// (0x000275f4) popup_preview_fixed_window_g3

0xc8f3,	// (0x0002be7e) popup_toolbar_trans_pane

0xdc6a,	// (0x0002d1f5) aid_height_set_list_ParamLimits

0x67e7,	// (0x00025d72) aid_size_parent_ParamLimits

0x4efd,	// (0x00024488) list_highlight_pane_cp2_ParamLimits

0x4a94,	// (0x0002401f) set_content_pane_g1_ParamLimits

0xbc04,	// (0x0002b18f) list_single_image_pane_ParamLimits

0xbc04,	// (0x0002b18f) list_single_image_pane

0xe3b3,	// (0x0002d93e) aid_size_cell_image_ParamLimits

0xe3b3,	// (0x0002d93e) aid_size_cell_image

0xe3c0,	// (0x0002d94b) grid_single_image_pane_ParamLimits

0xe3c0,	// (0x0002d94b) grid_single_image_pane

0x58b9,	// (0x00024e44) list_single_image_pane_g1_ParamLimits

0x58b9,	// (0x00024e44) list_single_image_pane_g1

0x857c,	// (0x00027b07) list_single_image_pane_g2_ParamLimits

0x857c,	// (0x00027b07) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0002f1a2) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0002f1a2) list_single_image_pane_g

0x8590,	// (0x00027b1b) list_single_image_pane_t1_ParamLimits

0x8590,	// (0x00027b1b) list_single_image_pane_t1

0xe3ce,	// (0x0002d959) cell_image_list_pane_ParamLimits

0xe3ce,	// (0x0002d959) cell_image_list_pane

0xe3e4,	// (0x0002d96f) cell_image_list_pane_g1

0xe3ed,	// (0x0002d978) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0002f1a7) cell_image_list_pane_g

0x85cc,	// (0x00027b57) aid_size_cell_tb_trans_pane

0x3f2d,	// (0x000234b8) bg_tb_trans_pane

0x85de,	// (0x00027b69) grid_tb_trans_pane

0x5407,	// (0x00024992) bg_tb_trans_pane_g1

0x540f,	// (0x0002499a) bg_tb_trans_pane_g2

0x5417,	// (0x000249a2) bg_tb_trans_pane_g3

0x541f,	// (0x000249aa) bg_tb_trans_pane_g4

0x5427,	// (0x000249b2) bg_tb_trans_pane_g5

0x543f,	// (0x000249ca) bg_tb_trans_pane_g6

0x5447,	// (0x000249d2) bg_tb_trans_pane_g7

0x542f,	// (0x000249ba) bg_tb_trans_pane_g8

0x5437,	// (0x000249c2) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0002f1ac) bg_tb_trans_pane_g

0x85f2,	// (0x00027b7d) cell_toolbar_trans_pane_ParamLimits

0x85f2,	// (0x00027b7d) cell_toolbar_trans_pane

0x7a2e,	// (0x00026fb9) cell_toolbar_trans_pane_g1

0xe047,	// (0x0002d5d2) list_form2_midp_pane_t1

0xe055,	// (0x0002d5e0) list_form2_midp_pane_t2

0x0001,

0xfaca,	// (0x0002f055) list_form2_midp_pane_t

0x7608,	// (0x00026b93) scroll_pane_cp51_ParamLimits

0x77d0,	// (0x00026d5b) form2_midp_wait_pane_g1

0x77d9,	// (0x00026d64) form2_midp_wait_pane_g2

0x77e2,	// (0x00026d6d) form2_midp_wait_pane_g3

0x0002,

0xfadf,	// (0x0002f06a) form2_midp_wait_pane_g

0x36be,	// (0x00022c49) list_highlight_pane_cp21_ParamLimits

0x7839,	// (0x00026dc4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7848,	// (0x00026dd3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x699f,	// (0x00025f2a) list_single_2graphic_im_pane_ParamLimits

0x699f,	// (0x00025f2a) list_single_2graphic_im_pane

0xe3f6,	// (0x0002d981) list_single_2graphic_im_pane_g1_ParamLimits

0xe3f6,	// (0x0002d981) list_single_2graphic_im_pane_g1

0xe407,	// (0x0002d992) list_single_2graphic_im_pane_g2_ParamLimits

0xe407,	// (0x0002d992) list_single_2graphic_im_pane_g2

0xe413,	// (0x0002d99e) list_single_2graphic_im_pane_g3_ParamLimits

0xe413,	// (0x0002d99e) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0002f1bf) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0002f1bf) list_single_2graphic_im_pane_g

0xe427,	// (0x0002d9b2) list_single_2graphic_im_pane_t1_ParamLimits

0xe427,	// (0x0002d9b2) list_single_2graphic_im_pane_t1

0x8075,	// (0x00027600) list_single_graphic_2heading_pane_fp_ParamLimits

0x8075,	// (0x00027600) list_single_graphic_2heading_pane_fp

0x0e7e,	// (0x00020409) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0e7e,	// (0x00020409) list_single_graphic_2heading_pane_fp_g1

0x808a,	// (0x00027615) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x808a,	// (0x00027615) list_single_graphic_2heading_pane_fp_g2

0x0e47,	// (0x000203d2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0e47,	// (0x000203d2) list_single_graphic_2heading_pane_fp_g3

0x0e53,	// (0x000203de) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0e53,	// (0x000203de) list_single_graphic_2heading_pane_fp_g4

0x8096,	// (0x00027621) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8096,	// (0x00027621) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002f0ed) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002f0ed) list_single_graphic_2heading_pane_fp_g

0x1057,	// (0x000205e2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1057,	// (0x000205e2) list_single_graphic_2heading_pane_fp_t1

0x0eb6,	// (0x00020441) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0eb6,	// (0x00020441) list_single_graphic_2heading_pane_fp_t2

0x106d,	// (0x000205f8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x106d,	// (0x000205f8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0002f1c8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0002f1c8) list_single_graphic_2heading_pane_fp_t

0x7aba,	// (0x00027045) fep_hwr_write_pane_g5_ParamLimits

0x7aba,	// (0x00027045) fep_hwr_write_pane_g5

0x7ac6,	// (0x00027051) fep_hwr_write_pane_g6_ParamLimits

0x7ac6,	// (0x00027051) fep_hwr_write_pane_g6

0x8348,	// (0x000278d3) eswt_shell_pane_ParamLimits

0x547b,	// (0x00024a06) bg_popup_window_pane_cp18_ParamLimits

0x672f,	// (0x00025cba) heading_pane_cp70

0x8472,	// (0x000279fd) popup_eswt_tasktip_window_t1_ParamLimits

0xd645,	// (0x0002cbd0) aid_touch_tab_arrow_left

0xd65b,	// (0x0002cbe6) aid_touch_tab_arrow_right

0xc082,	// (0x0002b60d) title_pane_g3_ParamLimits

0xc082,	// (0x0002b60d) title_pane_g3

0x3eec,	// (0x00023477) set_value_pane_g1

0xc8f3,	// (0x0002be7e) popup_toolbar_trans_pane_ParamLimits

0x85cc,	// (0x00027b57) aid_size_cell_tb_trans_pane_ParamLimits

0x3f2d,	// (0x000234b8) bg_tb_trans_pane_ParamLimits

0x85de,	// (0x00027b69) grid_tb_trans_pane_ParamLimits

0x3947,	// (0x00022ed2) cont_note_pane_ParamLimits

0x3947,	// (0x00022ed2) cont_note_pane

0x3c9e,	// (0x00023229) cont_snote2_single_text_pane_ParamLimits

0x3c9e,	// (0x00023229) cont_snote2_single_text_pane

0x3c9e,	// (0x00023229) cont_snote2_single_graphic_pane_ParamLimits

0x3c9e,	// (0x00023229) cont_snote2_single_graphic_pane

0x5a8c,	// (0x00025017) cont_note_wait_pane_ParamLimits

0x5a8c,	// (0x00025017) cont_note_wait_pane

0x5a8c,	// (0x00025017) cont_note_image_pane_ParamLimits

0x5a8c,	// (0x00025017) cont_note_image_pane

0x8686,	// (0x00027c11) popup_note2_window_g1_ParamLimits

0x8686,	// (0x00027c11) popup_note2_window_g1

0x86b7,	// (0x00027c42) popup_note2_window_t1_ParamLimits

0x86b7,	// (0x00027c42) popup_note2_window_t1

0x86fc,	// (0x00027c87) popup_note2_window_t2_ParamLimits

0x86fc,	// (0x00027c87) popup_note2_window_t2

0x8741,	// (0x00027ccc) popup_note2_window_t3_ParamLimits

0x8741,	// (0x00027ccc) popup_note2_window_t3

0x8786,	// (0x00027d11) popup_note2_window_t4_ParamLimits

0x8786,	// (0x00027d11) popup_note2_window_t4

0x39cb,	// (0x00022f56) popup_note2_window_t5_ParamLimits

0x39cb,	// (0x00022f56) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0002f1d4) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0002f1d4) popup_note2_window_t

0x87b5,	// (0x00027d40) popup_note2_image_window_g1_ParamLimits

0x87b5,	// (0x00027d40) popup_note2_image_window_g1

0x87c1,	// (0x00027d4c) popup_note2_image_window_g2_ParamLimits

0x87c1,	// (0x00027d4c) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0002f1df) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0002f1df) popup_note2_image_window_g

0x87d3,	// (0x00027d5e) popup_note2_image_window_t1_ParamLimits

0x87d3,	// (0x00027d5e) popup_note2_image_window_t1

0x87eb,	// (0x00027d76) popup_note2_image_window_t2_ParamLimits

0x87eb,	// (0x00027d76) popup_note2_image_window_t2

0x8803,	// (0x00027d8e) popup_note2_image_window_t3_ParamLimits

0x8803,	// (0x00027d8e) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0002f1e4) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0002f1e4) popup_note2_image_window_t

0x5a9a,	// (0x00025025) popup_note2_wait_window_g1_ParamLimits

0x5a9a,	// (0x00025025) popup_note2_wait_window_g1

0x881f,	// (0x00027daa) popup_note2_wait_window_g2_ParamLimits

0x881f,	// (0x00027daa) popup_note2_wait_window_g2

0x5ab2,	// (0x0002503d) popup_note2_wait_window_g3_ParamLimits

0x5ab2,	// (0x0002503d) popup_note2_wait_window_g3

0x0002,

0xfc60,	// (0x0002f1eb) popup_note2_wait_window_g_ParamLimits

0xfc60,	// (0x0002f1eb) popup_note2_wait_window_g

0x882b,	// (0x00027db6) popup_note2_wait_window_t1_ParamLimits

0x882b,	// (0x00027db6) popup_note2_wait_window_t1

0x8849,	// (0x00027dd4) popup_note2_wait_window_t2_ParamLimits

0x8849,	// (0x00027dd4) popup_note2_wait_window_t2

0x8867,	// (0x00027df2) popup_note2_wait_window_t3_ParamLimits

0x8867,	// (0x00027df2) popup_note2_wait_window_t3

0x8879,	// (0x00027e04) popup_note2_wait_window_t4_ParamLimits

0x8879,	// (0x00027e04) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x0002f1f2) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x0002f1f2) popup_note2_wait_window_t

0x888b,	// (0x00027e16) wait_bar2_pane_ParamLimits

0x888b,	// (0x00027e16) wait_bar2_pane

0x88a3,	// (0x00027e2e) popup_snote2_single_text_window_g1_ParamLimits

0x88a3,	// (0x00027e2e) popup_snote2_single_text_window_g1

0x88cb,	// (0x00027e56) popup_snote2_single_text_window_t1_ParamLimits

0x88cb,	// (0x00027e56) popup_snote2_single_text_window_t1

0x8917,	// (0x00027ea2) popup_snote2_single_text_window_t2_ParamLimits

0x8917,	// (0x00027ea2) popup_snote2_single_text_window_t2

0x8963,	// (0x00027eee) popup_snote2_single_text_window_t3_ParamLimits

0x8963,	// (0x00027eee) popup_snote2_single_text_window_t3

0x89a4,	// (0x00027f2f) popup_snote2_single_text_window_t4_ParamLimits

0x89a4,	// (0x00027f2f) popup_snote2_single_text_window_t4

0x89da,	// (0x00027f65) popup_snote2_single_text_window_t5_ParamLimits

0x89da,	// (0x00027f65) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x0002f1fb) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x0002f1fb) popup_snote2_single_text_window_t

0x8a05,	// (0x00027f90) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a05,	// (0x00027f90) popup_snote2_single_graphic_window_g1

0x8a2d,	// (0x00027fb8) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a2d,	// (0x00027fb8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x0002f206) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x0002f206) popup_snote2_single_graphic_window_g

0x8a55,	// (0x00027fe0) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a55,	// (0x00027fe0) popup_snote2_single_graphic_window_t1

0x8aa1,	// (0x0002802c) popup_snote2_single_graphic_window_t2_ParamLimits

0x8aa1,	// (0x0002802c) popup_snote2_single_graphic_window_t2

0x8963,	// (0x00027eee) popup_snote2_single_graphic_window_t3_ParamLimits

0x8963,	// (0x00027eee) popup_snote2_single_graphic_window_t3

0x89a4,	// (0x00027f2f) popup_snote2_single_graphic_window_t4_ParamLimits

0x89a4,	// (0x00027f2f) popup_snote2_single_graphic_window_t4

0x89da,	// (0x00027f65) popup_snote2_single_graphic_window_t5_ParamLimits

0x89da,	// (0x00027f65) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x0002f20b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x0002f20b) popup_snote2_single_graphic_window_t

0x74c9,	// (0x00026a54) clock_nsta_pane_cp2_t1

0x74c9,	// (0x00026a54) clock_nsta_pane_cp2_t2

0x0001,

0xfaa0,	// (0x0002f02b) clock_nsta_pane_cp2_t

0x062e,	// (0x0001fbb9) form_field_data_wide_pane_g1_ParamLimits

0x3f3b,	// (0x000234c6) form_field_data_wide_pane_g2_ParamLimits

0x3f3b,	// (0x000234c6) form_field_data_wide_pane_g2

0x3f47,	// (0x000234d2) form_field_data_wide_pane_g3_ParamLimits

0x3f47,	// (0x000234d2) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002ec06) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002ec06) form_field_data_wide_pane_g

0xdf8a,	// (0x0002d515) grid_touch_3_pane_ParamLimits

0xdf8a,	// (0x0002d515) grid_touch_3_pane

0xe458,	// (0x0002d9e3) cell_touch_3_pane_ParamLimits

0xe458,	// (0x0002d9e3) cell_touch_3_pane

0x7a2e,	// (0x00026fb9) cell_touch_3_pane_g1

0x7a2e,	// (0x00026fb9) cell_touch_3_pane_g2

0x0001,

0xfb25,	// (0x0002f0b0) cell_touch_3_pane_g

0x39fd,	// (0x00022f88) cont_query_data_pane

0x3a05,	// (0x00022f90) cont_query_data_pane_cp1

0x8b1b,	// (0x000280a6) button_value_adjust_pane_cp7

0x8b23,	// (0x000280ae) query_popup_pane_cp3

0x469c,	// (0x00023c27) bg_popup_sub_pane_cp22_ParamLimits

0x189a,	// (0x00020e25) navi_navi_volume_pane_cp2

0x18b5,	// (0x00020e40) popup_side_volume_key_window_g2

0x18c4,	// (0x00020e4f) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002ec9c) popup_side_volume_key_window_g

0x18e1,	// (0x00020e6c) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002eca3) popup_side_volume_key_window_t

0x4953,	// (0x00023ede) popup_side_volume_key_window_ParamLimits

0xb70b,	// (0x0002ac96) list_double_graphic_pane_g4_ParamLimits

0xb70b,	// (0x0002ac96) list_double_graphic_pane_g4

0xdde3,	// (0x0002d36e) list_single_2heading_msg_pane_ParamLimits

0xdde3,	// (0x0002d36e) list_single_2heading_msg_pane

0xbc8e,	// (0x0002b219) list_single_2heading_msg_pane_g1_ParamLimits

0xbc8e,	// (0x0002b219) list_single_2heading_msg_pane_g1

0xbc9a,	// (0x0002b225) list_single_2heading_msg_pane_g2_ParamLimits

0xbc9a,	// (0x0002b225) list_single_2heading_msg_pane_g2

0xbcad,	// (0x0002b238) list_single_2heading_msg_pane_g3_ParamLimits

0xbcad,	// (0x0002b238) list_single_2heading_msg_pane_g3

0xbcb9,	// (0x0002b244) list_single_2heading_msg_pane_g4_ParamLimits

0xbcb9,	// (0x0002b244) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x0002f216) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x0002f216) list_single_2heading_msg_pane_g

0xbcd1,	// (0x0002b25c) list_single_2heading_msg_pane_t1_ParamLimits

0xbcd1,	// (0x0002b25c) list_single_2heading_msg_pane_t1

0xbcf9,	// (0x0002b284) list_single_2heading_msg_pane_t2_ParamLimits

0xbcf9,	// (0x0002b284) list_single_2heading_msg_pane_t2

0xbd64,	// (0x0002b2ef) list_single_2heading_msg_pane_t3_ParamLimits

0xbd64,	// (0x0002b2ef) list_single_2heading_msg_pane_t3

0x1152,	// (0x000206dd) list_single_2heading_msg_pane_t4_ParamLimits

0x1152,	// (0x000206dd) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x0002f21f) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x0002f21f) list_single_2heading_msg_pane_t

0x3612,	// (0x00022b9d) title_pane_g4_ParamLimits

0x3612,	// (0x00022b9d) title_pane_g4

0x16a9,	// (0x00020c34) title_pane_stacon_g3_ParamLimits

0x16a9,	// (0x00020c34) title_pane_stacon_g3

0x8649,	// (0x00027bd4) list_single_2graphic_im_pane_g4_ParamLimits

0x8649,	// (0x00027bd4) list_single_2graphic_im_pane_g4

0x64eb,	// (0x00025a76) popup_side_volume_key_window_cp

0x6d08,	// (0x00026293) main_idle_act2_pane_t1

0x221a,	// (0x000217a5) toolbar_button_pane_g10

0xd259,	// (0x0002c7e4) popup_toolbar_window_cp1

0x74ba,	// (0x00026a45) clock_nsta_pane_cp_t1

0x74ba,	// (0x00026a45) clock_nsta_pane_cp_t2

0x0001,

0xfa9b,	// (0x0002f026) clock_nsta_pane_cp_t

0x189a,	// (0x00020e25) navi_navi_volume_pane_cp2_ParamLimits

0x18a9,	// (0x00020e34) popup_side_volume_key_window_g1_ParamLimits

0x18b5,	// (0x00020e40) popup_side_volume_key_window_g2_ParamLimits

0x18c4,	// (0x00020e4f) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002ec9c) popup_side_volume_key_window_g_ParamLimits

0x2660,	// (0x00021beb) fep_hwr_aid_pane

0xdb3d,	// (0x0002d0c8) bg_fep_hwr_top_pane_g4_ParamLimits

0x7a8a,	// (0x00027015) fep_hwr_top_pane_g1_ParamLimits

0x7a9c,	// (0x00027027) fep_hwr_top_pane_g2_ParamLimits

0x2719,	// (0x00021ca4) fep_hwr_top_pane_g3_ParamLimits

0xfaf0,	// (0x0002f07b) fep_hwr_top_pane_g_ParamLimits

0x272e,	// (0x00021cb9) fep_hwr_top_text_pane_ParamLimits

0x62ae,	// (0x00025839) aid_touch_tab_arrow_arrow_2

0x62b7,	// (0x00025842) aid_touch_tab_arrow_left_2

0x2674,	// (0x00021bff) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x26ab,	// (0x00021c36) fep_hwr_prediction_pane

0x7bfc,	// (0x00027187) fep_vkb_prediction_pane

0xe23e,	// (0x0002d7c9) fep_vkb_side_pane_g3_ParamLimits

0xe23e,	// (0x0002d7c9) fep_vkb_side_pane_g3

0x7cac,	// (0x00027237) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x814c,	// (0x000276d7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8159,	// (0x000276e4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x0002f125) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8b48,	// (0x000280d3) fep_hwr_prediction_pane_g1

0x29bb,	// (0x00021f46) fep_hwr_prediction_pane_g2

0x29c3,	// (0x00021f4e) fep_hwr_prediction_pane_g3

0x29cb,	// (0x00021f56) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0002f228) fep_hwr_prediction_pane_g

0x8b48,	// (0x000280d3) fep_vkb_prediction_pane_g1

0x8b52,	// (0x000280dd) fep_vkb_prediction_pane_g2

0x8b5a,	// (0x000280e5) fep_vkb_prediction_pane_g3

0x8b62,	// (0x000280ed) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x0002f231) fep_vkb_prediction_pane_g

0x24e0,	// (0x00021a6b) slider_set_pane_g3

0x24f4,	// (0x00021a7f) slider_set_pane_g4

0x250c,	// (0x00021a97) slider_set_pane_g5

0x24e0,	// (0x00021a6b) slider_set_pane_g6

0x2522,	// (0x00021aad) slider_set_pane_g7

0x694c,	// (0x00025ed7) slider_form_pane_g3

0x6955,	// (0x00025ee0) slider_form_pane_g4

0x695d,	// (0x00025ee8) slider_form_pane_g5

0x694c,	// (0x00025ed7) slider_form_pane_g6

0xddb5,	// (0x0002d340) slider_form_pane_g7

0x6fb3,	// (0x0002653e) slider_set_pane_vc_g3

0x6fbc,	// (0x00026547) slider_set_pane_vc_g4

0x6fc5,	// (0x00026550) slider_set_pane_vc_g5

0x6fb3,	// (0x0002653e) slider_set_pane_vc_g6

0x6fce,	// (0x00026559) slider_set_pane_vc_g7

0x718e,	// (0x00026719) slider_form_pane_vc_g1

0x7197,	// (0x00026722) slider_form_pane_vc_g2

0x71a0,	// (0x0002672b) slider_form_pane_vc_g3

0x718e,	// (0x00026719) slider_form_pane_vc_g4

0x71a9,	// (0x00026734) slider_form_pane_vc_g5

0x0004,

0xfa6d,	// (0x0002eff8) slider_form_pane_vc_g

0x35ca,	// (0x00022b55) main_idle_act3_pane

0x8b6a,	// (0x000280f5) ai3_links_pane

0xe4a0,	// (0x0002da2b) popup_ai3_data_window_ParamLimits

0xe4a0,	// (0x0002da2b) popup_ai3_data_window

0x35ca,	// (0x00022b55) grid_ai3_links_pane

0xe4ba,	// (0x0002da45) cell_ai3_links_pane_ParamLimits

0xe4ba,	// (0x0002da45) cell_ai3_links_pane

0x8ba5,	// (0x00028130) bg_popup_sub_pane_cp11

0x8bb2,	// (0x0002813d) cell_ai3_links_pane_g1

0x35ca,	// (0x00022b55) bg_popup_sub_pane_cp12

0x8bd7,	// (0x00028162) heading_ai3_data_pane

0x8bdf,	// (0x0002816a) list_ai3_gene_pane

0x8beb,	// (0x00028176) popup_ai3_data_window_g1

0x8bf3,	// (0x0002817e) heading_ai3_data_pane_g1

0x8bfb,	// (0x00028186) heading_ai3_data_pane_t1

0x8c09,	// (0x00028194) list_double_ai3_gene_pane_ParamLimits

0x8c09,	// (0x00028194) list_double_ai3_gene_pane

0x8c16,	// (0x000281a1) list_single_ai3_gene_pane_ParamLimits

0x8c16,	// (0x000281a1) list_single_ai3_gene_pane

0x79f3,	// (0x00026f7e) list_highlight_pane_cp7_ParamLimits

0x79f3,	// (0x00026f7e) list_highlight_pane_cp7

0x8c23,	// (0x000281ae) list_single_a13_gene_pane_t1_ParamLimits

0x8c23,	// (0x000281ae) list_single_a13_gene_pane_t1

0x8c3a,	// (0x000281c5) list_single_ai3_gene_pane_g1

0x8c43,	// (0x000281ce) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x0002f23a) list_single_ai3_gene_pane_g

0x8c4b,	// (0x000281d6) list_double_ai3_gene_pane_g1_ParamLimits

0x8c4b,	// (0x000281d6) list_double_ai3_gene_pane_g1

0x8c57,	// (0x000281e2) list_double_ai3_gene_pane_t1_ParamLimits

0x8c57,	// (0x000281e2) list_double_ai3_gene_pane_t1

0x8c73,	// (0x000281fe) list_double_ai3_gene_pane_t2_ParamLimits

0x8c73,	// (0x000281fe) list_double_ai3_gene_pane_t2

0x8c89,	// (0x00028214) list_double_ai3_gene_pane_t3_ParamLimits

0x8c89,	// (0x00028214) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x0002f23f) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x0002f23f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1083,	// (0x0002060e) aid_size_min_col_2

0xe48a,	// (0x0002da15) aid_size_min_msg_ParamLimits

0xe48a,	// (0x0002da15) aid_size_min_msg

0xe252,	// (0x0002d7dd) fep_vkb_top_text_pane_g2_ParamLimits

0xe252,	// (0x0002d7dd) fep_vkb_top_text_pane_g2

0x0001,

0xfb20,	// (0x0002f0ab) fep_vkb_top_text_pane_g_ParamLimits

0xfb20,	// (0x0002f0ab) fep_vkb_top_text_pane_g

0x35ca,	// (0x00022b55) main_hc_apps_shell_pane

0x8ca6,	// (0x00028231) grid_hc_apps_pane_ParamLimits

0x8ca6,	// (0x00028231) grid_hc_apps_pane

0x8cb5,	// (0x00028240) list_hc_apps_pane

0x8cbd,	// (0x00028248) scroll_pane_cp37_ParamLimits

0x8cbd,	// (0x00028248) scroll_pane_cp37

0xe4d4,	// (0x0002da5f) cell_hc_apps_pane_ParamLimits

0xe4d4,	// (0x0002da5f) cell_hc_apps_pane

0xe592,	// (0x0002db1d) cell_hc_apps_pane_g1_ParamLimits

0xe592,	// (0x0002db1d) cell_hc_apps_pane_g1

0x8da8,	// (0x00028333) cell_hc_apps_pane_g2_ParamLimits

0x8da8,	// (0x00028333) cell_hc_apps_pane_g2

0x8dc4,	// (0x0002834f) cell_hc_apps_pane_g3_ParamLimits

0x8dc4,	// (0x0002834f) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0002f246) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0002f246) cell_hc_apps_pane_g

0xe5bf,	// (0x0002db4a) cell_hc_apps_pane_t1_ParamLimits

0xe5bf,	// (0x0002db4a) cell_hc_apps_pane_t1

0x3947,	// (0x00022ed2) grid_highlight_pane_cp10_ParamLimits

0x3947,	// (0x00022ed2) grid_highlight_pane_cp10

0xe5fd,	// (0x0002db88) list_single_hc_apps_pane_ParamLimits

0xe5fd,	// (0x0002db88) list_single_hc_apps_pane

0xe62a,	// (0x0002dbb5) list_single_hc_apps_pane_g1

0xbdd2,	// (0x0002b35d) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x0002f24d) list_single_hc_apps_pane_g

0xbdeb,	// (0x0002b376) list_single_hc_apps_pane_g2_copy1

0xbe07,	// (0x0002b392) list_single_hc_apps_pane_t1

0x36be,	// (0x00022c49) bg_set_opt_pane_cp_ParamLimits

0x15d1,	// (0x00020b5c) setting_slider_pane_t1_ParamLimits

0x15ea,	// (0x00020b75) setting_slider_pane_t2_ParamLimits

0x1604,	// (0x00020b8f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002eae9) setting_slider_pane_t_ParamLimits

0x161c,	// (0x00020ba7) slider_set_pane_ParamLimits

0x1b43,	// (0x000210ce) control_pane_g5_ParamLimits

0x1b43,	// (0x000210ce) control_pane_g5

0x679b,	// (0x00025d26) slider_set_pane_g1_ParamLimits

0x24d4,	// (0x00021a5f) slider_set_pane_g2_ParamLimits

0x24e0,	// (0x00021a6b) slider_set_pane_g3_ParamLimits

0x24f4,	// (0x00021a7f) slider_set_pane_g4_ParamLimits

0x250c,	// (0x00021a97) slider_set_pane_g5_ParamLimits

0x24e0,	// (0x00021a6b) slider_set_pane_g6_ParamLimits

0x2522,	// (0x00021aad) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002eee3) slider_set_pane_g_ParamLimits

0x4a3f,	// (0x00023fca) navi_icon_text_pane_ParamLimits

0xd60e,	// (0x0002cb99) aid_fill_nsta_2_ParamLimits

0xd645,	// (0x0002cbd0) aid_touch_tab_arrow_left_ParamLimits

0xd65b,	// (0x0002cbe6) aid_touch_tab_arrow_right_ParamLimits

0xd6f6,	// (0x0002cc81) clock_nsta_pane_ParamLimits

0x6290,	// (0x0002581b) navi_icon_pane_g1_ParamLimits

0x629c,	// (0x00025827) navi_text_pane_t1_ParamLimits

0x75c6,	// (0x00026b51) navi_icon_text_pane_g1_ParamLimits

0x75d2,	// (0x00026b5d) navi_icon_text_pane_t1_ParamLimits

0xe62a,	// (0x0002dbb5) list_single_hc_apps_pane_g1_ParamLimits

0xbdd2,	// (0x0002b35d) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x0002f24d) list_single_hc_apps_pane_g_ParamLimits

0xbdeb,	// (0x0002b376) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe07,	// (0x0002b392) list_single_hc_apps_pane_t1_ParamLimits

0xbf87,	// (0x0002b512) popup_toolbar2_fixed_window_ParamLimits

0xbf87,	// (0x0002b512) popup_toolbar2_fixed_window

0xc8e9,	// (0x0002be74) popup_toolbar2_float_window

0x35ca,	// (0x00022b55) bg_popup_sub_pane_cp27

0x8e9b,	// (0x00028426) grid_toolbar2_float_pane

0x35ca,	// (0x00022b55) bg_popup_sub_pane_cp26

0x8e9b,	// (0x00028426) grid_toolbar2_fixed_pane

0xe643,	// (0x0002dbce) cell_toolbar2_fixed_pane_ParamLimits

0xe643,	// (0x0002dbce) cell_toolbar2_fixed_pane

0xe65d,	// (0x0002dbe8) cell_toolbar2_fixed_pane_g1

0x8ebc,	// (0x00028447) toolbar2_fixed_button_pane

0x5407,	// (0x00024992) toolbar2_fixed_button_pane_g1

0x540f,	// (0x0002499a) toolbar2_fixed_button_pane_g2

0x5417,	// (0x000249a2) toolbar2_fixed_button_pane_g3

0x541f,	// (0x000249aa) toolbar2_fixed_button_pane_g4

0x5427,	// (0x000249b2) toolbar2_fixed_button_pane_g5

0x542f,	// (0x000249ba) toolbar2_fixed_button_pane_g6

0x5437,	// (0x000249c2) toolbar2_fixed_button_pane_g7

0x543f,	// (0x000249ca) toolbar2_fixed_button_pane_g8

0x5447,	// (0x000249d2) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002ede5) toolbar2_fixed_button_pane_g

0x8ec4,	// (0x0002844f) cell_toolbar2_float_pane_ParamLimits

0x8ec4,	// (0x0002844f) cell_toolbar2_float_pane

0x8ed5,	// (0x00028460) cell_toolbar2_float_pane_g1

0x8ebc,	// (0x00028447) toolbar2_fixed_button_pane_cp

0xe12c,	// (0x0002d6b7) fep_vkb_accented_list_pane_ParamLimits

0xe12c,	// (0x0002d6b7) fep_vkb_accented_list_pane

0x287c,	// (0x00021e07) bg_popup_fep_shadow_pane_g9

0x4bbf,	// (0x0002414a) bg_popup_fep_shadow_pane_cp3

0x4084,	// (0x0002360f) list_accented_list_pane

0x8ede,	// (0x00028469) list_single_accented_list_pane_ParamLimits

0x8ede,	// (0x00028469) list_single_accented_list_pane

0x4bbf,	// (0x0002414a) list_highlight_pane_cp10

0x8eef,	// (0x0002847a) list_single_accented_list_pane_t1

0xc813,	// (0x0002bd9e) popup_slider_window_ParamLimits

0xc813,	// (0x0002bd9e) popup_slider_window

0x8b2b,	// (0x000280b6) aid_indentation_list_msg

0xe756,	// (0x0002dce1) bg_popup_window_pane_cp19

0x9013,	// (0x0002859e) popup_slider_window_g1

0x902f,	// (0x000285ba) popup_slider_window_g2

0x904b,	// (0x000285d6) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x0002f252) popup_slider_window_g

0x90a7,	// (0x00028632) popup_slider_window_t1

0x911b,	// (0x000286a6) small_volume_slider_vertical_pane

0x7a2e,	// (0x00026fb9) small_volume_slider_vertical_pane_g1

0x7a2e,	// (0x00026fb9) small_volume_slider_vertical_pane_g2

0x9137,	// (0x000286c2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0002f264) small_volume_slider_vertical_pane_g

0xbef5,	// (0x0002b480) area_side_right_pane_ParamLimits

0xbef5,	// (0x0002b480) area_side_right_pane

0xca1f,	// (0x0002bfaa) aid_size_side_button_ParamLimits

0xca1f,	// (0x0002bfaa) aid_size_side_button

0xca38,	// (0x0002bfc3) grid_sctrl_middle_pane_ParamLimits

0xca38,	// (0x0002bfc3) grid_sctrl_middle_pane

0x2a06,	// (0x00021f91) sctrl_sk_bottom_pane

0x2a17,	// (0x00021fa2) sctrl_sk_top_pane

0x2a29,	// (0x00021fb4) aid_touch_sctrl_top

0x3947,	// (0x00022ed2) bg_sctrl_sk_pane_ParamLimits

0x3947,	// (0x00022ed2) bg_sctrl_sk_pane

0x2a36,	// (0x00021fc1) sctrl_sk_top_pane_g1

0x2a43,	// (0x00021fce) sctrl_sk_top_pane_t1

0x2a29,	// (0x00021fb4) aid_touch_sctrl_bottom

0x3947,	// (0x00022ed2) bg_sctrl_sk_pane_cp_ParamLimits

0x3947,	// (0x00022ed2) bg_sctrl_sk_pane_cp

0x2a5e,	// (0x00021fe9) sctrl_sk_bottom_pane_g1

0x2a43,	// (0x00021fce) sctrl_sk_bottom_pane_t1

0xca52,	// (0x0002bfdd) cell_sctrl_middle_pane_ParamLimits

0xca52,	// (0x0002bfdd) cell_sctrl_middle_pane

0xca63,	// (0x0002bfee) aid_touch_sctrl_middle_ParamLimits

0xca63,	// (0x0002bfee) aid_touch_sctrl_middle

0xca70,	// (0x0002bffb) bg_sctrl_middle_pane_ParamLimits

0xca70,	// (0x0002bffb) bg_sctrl_middle_pane

0x91bf,	// (0x0002874a) cell_sctrl_middle_pane_g1_ParamLimits

0x91bf,	// (0x0002874a) cell_sctrl_middle_pane_g1

0xca7e,	// (0x0002c009) cell_sctrl_middle_pane_g2_ParamLimits

0xca7e,	// (0x0002c009) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x0002f270) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x0002f270) cell_sctrl_middle_pane_g

0x5407,	// (0x00024992) bg_sctrl_middle_pane_g1

0x540f,	// (0x0002499a) bg_sctrl_middle_pane_g2

0x5417,	// (0x000249a2) bg_sctrl_middle_pane_g3

0x541f,	// (0x000249aa) bg_sctrl_middle_pane_g4

0x5427,	// (0x000249b2) bg_sctrl_middle_pane_g5

0x542f,	// (0x000249ba) bg_sctrl_middle_pane_g6

0x5437,	// (0x000249c2) bg_sctrl_middle_pane_g7

0x543f,	// (0x000249ca) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0002f275) bg_sctrl_middle_pane_g

0x5447,	// (0x000249d2) bg_sctrl_middle_pane_g8_copy1

0x5407,	// (0x00024992) bg_sctrl_sk_pane_g1

0x540f,	// (0x0002499a) bg_sctrl_sk_pane_g2

0x5417,	// (0x000249a2) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002ede5) bg_sctrl_sk_pane_g

0x3e5c,	// (0x000233e7) aid_size_touch_scroll_bar

0x541f,	// (0x000249aa) bg_sctrl_sk_pane_g4

0x5427,	// (0x000249b2) bg_sctrl_sk_pane_g5

0x542f,	// (0x000249ba) bg_sctrl_sk_pane_g6

0x5437,	// (0x000249c2) bg_sctrl_sk_pane_g7

0x543f,	// (0x000249ca) bg_sctrl_sk_pane_g8

0x5447,	// (0x000249d2) bg_sctrl_sk_pane_g9

0x1cd7,	// (0x00021262) popup_fep_china_hwr2_fs_candidate_window

0xc32d,	// (0x0002b8b8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc32d,	// (0x0002b8b8) popup_fep_china_hwr2_fs_control_window

0x7cac,	// (0x00027237) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0002f26b) sctrl_sk_top_pane_g

0xe80e,	// (0x0002dd99) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe80e,	// (0x0002dd99) aid_fep_china_hwr2_fs_cell

0xe822,	// (0x0002ddad) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe822,	// (0x0002ddad) bg_popup_fep_shadow_pane_cp4

0xe839,	// (0x0002ddc4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe839,	// (0x0002ddc4) bg_popup_fep_shadow_pane_cp5

0xe84b,	// (0x0002ddd6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe84b,	// (0x0002ddd6) popup_fep_china_hwr2_fs_control_bar_grid

0xe85f,	// (0x0002ddea) popup_fep_china_hwr2_fs_control_funtion_grid

0x9193,	// (0x0002871e) aid_fep_china_hwr2_fs_candi_cell

0x35ca,	// (0x00022b55) bg_popup_fep_shadow_pane_cp6

0x919d,	// (0x00028728) popup_fep_china_hwr2_fs_candidate_grid

0xe867,	// (0x0002ddf2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe867,	// (0x0002ddf2) cell_fep_china_hwr2_fs_funtion_grid

0x7a2e,	// (0x00026fb9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x91bf,	// (0x0002874a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x91bf,	// (0x0002874a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x91cd,	// (0x00028758) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x91cd,	// (0x00028758) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0002f286) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0002f286) cell_fep_china_hwr2_fs_funtion_grid_g

0xe87f,	// (0x0002de0a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe87f,	// (0x0002de0a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe894,	// (0x0002de1f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe894,	// (0x0002de1f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x0002f28b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x0002f28b) cell_fep_china_hwr2_fs_funtion_grid_t

0x9214,	// (0x0002879f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x921c,	// (0x000287a7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9224,	// (0x000287af) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x0002f290) popup_fep_china_hwr2_fs_control_bar_grid_g

0x922c,	// (0x000287b7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x922c,	// (0x000287b7) cell_fep_china_hwr2_fs_candidate_grid

0x9245,	// (0x000287d0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x924d,	// (0x000287d8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7a2e,	// (0x00026fb9) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7a2e,	// (0x00026fb9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb25,	// (0x0002f0b0) cell_fep_china_hwr2_fs_candidate_grid_g

0x9255,	// (0x000287e0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4ffd,	// (0x00024588) clock_nsta_pane_cp_24_ParamLimits

0x4ffd,	// (0x00024588) clock_nsta_pane_cp_24

0x507b,	// (0x00024606) indicator_nsta_pane_cp_24_ParamLimits

0x507b,	// (0x00024606) indicator_nsta_pane_cp_24

0x610c,	// (0x00025697) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002ee4a) heading_pane_g

0x6b51,	// (0x000260dc) grid_sct_catagory_button_pane

0x6b81,	// (0x0002610c) scroll_pane_cp5_ParamLimits

0x7620,	// (0x00026bab) button_value_adjust_pane_cp5_ParamLimits

0x7620,	// (0x00026bab) button_value_adjust_pane_cp5

0x76ff,	// (0x00026c8a) form2_midp_time_pane_ParamLimits

0x9263,	// (0x000287ee) cell_sct_catagory_button_pane_ParamLimits

0x9263,	// (0x000287ee) cell_sct_catagory_button_pane

0x79f3,	// (0x00026f7e) bg_button_pane_cp01_ParamLimits

0x79f3,	// (0x00026f7e) bg_button_pane_cp01

0x7a2e,	// (0x00026fb9) cell_sct_catagory_button_pane_g1

0xc88c,	// (0x0002be17) popup_tb_extension_window

0xe8b0,	// (0x0002de3b) aid_size_cell_ext_ParamLimits

0xe8b0,	// (0x0002de3b) aid_size_cell_ext

0x3c9e,	// (0x00023229) bg_tb_trans_pane_cp1_ParamLimits

0x3c9e,	// (0x00023229) bg_tb_trans_pane_cp1

0xe8d6,	// (0x0002de61) grid_tb_ext_pane_ParamLimits

0xe8d6,	// (0x0002de61) grid_tb_ext_pane

0xe911,	// (0x0002de9c) cell_tb_ext_pane_ParamLimits

0xe911,	// (0x0002de9c) cell_tb_ext_pane

0xe939,	// (0x0002dec4) cell_tb_ext_pane_g1_ParamLimits

0xe939,	// (0x0002dec4) cell_tb_ext_pane_g1

0x92f7,	// (0x00028882) cell_tb_ext_pane_t1

0x3947,	// (0x00022ed2) list_highlight_pane_cp11_ParamLimits

0x3947,	// (0x00022ed2) list_highlight_pane_cp11

0xbf9c,	// (0x0002b527) popup_uni_indicator_window_ParamLimits

0xbf9c,	// (0x0002b527) popup_uni_indicator_window

0x3f2d,	// (0x000234b8) bg_popup_sub_pane_cp14

0x9312,	// (0x0002889d) list_uniindi_pane

0x931e,	// (0x000288a9) uniindi_top_pane

0x3947,	// (0x00022ed2) bg_uniindi_top_pane

0x933d,	// (0x000288c8) uniindi_top_pane_g1

0x9353,	// (0x000288de) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x0002f297) uniindi_top_pane_g

0x937d,	// (0x00028908) uniindi_top_pane_t1

0x93a7,	// (0x00028932) list_single_uniindi_pane_ParamLimits

0x93a7,	// (0x00028932) list_single_uniindi_pane

0x7a2e,	// (0x00026fb9) bg_uniindi_top_pane_g1

0x93ba,	// (0x00028945) list_single_uniindi_pane_g1

0x93cd,	// (0x00028958) list_single_uniindi_pane_t1

0x35ca,	// (0x00022b55) control_bg_pane

0x93f2,	// (0x0002897d) bg_sctrl_sk_pane_cp1

0x93fb,	// (0x00028986) bg_sctrl_sk_pane_cp2

0x9404,	// (0x0002898f) control_bg_pane_g1

0x940d,	// (0x00028998) control_bg_pane_g2

0x0001,

0xfd15,	// (0x0002f2a0) control_bg_pane_g

0x745e,	// (0x000269e9) cell_indicator_nsta_pane_g1_ParamLimits

0xdfb7,	// (0x0002d542) cell_indicator_nsta_pane_g2_ParamLimits

0xfa89,	// (0x0002f014) cell_indicator_nsta_pane_g_ParamLimits

0x0e34,	// (0x000203bf) form2_midp_time_pane_t1_ParamLimits

0x2652,	// (0x00021bdd) main_idle_act4_pane_ParamLimits

0x2652,	// (0x00021bdd) main_idle_act4_pane

0xc88c,	// (0x0002be17) popup_tb_extension_window_ParamLimits

0xe8f8,	// (0x0002de83) tb_ext_find_pane_ParamLimits

0xe8f8,	// (0x0002de83) tb_ext_find_pane

0x9416,	// (0x000289a1) ai_gene_pane_1_cp1

0x4cfa,	// (0x00024285) ai_gene_pane_2_cp1

0x941e,	// (0x000289a9) list_single_idle_plugin_calendar_pane

0x9427,	// (0x000289b2) list_single_idle_plugin_notification_pane

0x9430,	// (0x000289bb) list_single_idle_plugin_player_pane

0xe956,	// (0x0002dee1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe956,	// (0x0002dee1) list_single_idle_plugin_shortcut_pane

0xe97e,	// (0x0002df09) main_idle_act4_pane_t1

0xe994,	// (0x0002df1f) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x0002f2a5) main_idle_act4_pane_t

0xe9aa,	// (0x0002df35) middle_sk_idle_act4_pane_ParamLimits

0xe9aa,	// (0x0002df35) middle_sk_idle_act4_pane

0xe9c6,	// (0x0002df51) popup_clock_digital_analogue_window_cp2

0xe9ee,	// (0x0002df79) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9ee,	// (0x0002df79) shortcut_wheel_idle_act4_pane

0x7a2e,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g1

0x7a2e,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g2

0x7a2e,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g3

0x7a2e,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g4

0x7a2e,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g5

0x94c3,	// (0x00028a4e) shortcut_wheel_idle_act4_pane_g6

0x94cb,	// (0x00028a56) shortcut_wheel_idle_act4_pane_g7

0x94d3,	// (0x00028a5e) shortcut_wheel_idle_act4_pane_g8

0x94db,	// (0x00028a66) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x0002f2aa) shortcut_wheel_idle_act4_pane_g

0xdb3d,	// (0x0002d0c8) middle_sk_idle_act4_pane_g1_ParamLimits

0xdb3d,	// (0x0002d0c8) middle_sk_idle_act4_pane_g1

0xea6b,	// (0x0002dff6) middle_sk_idle_act4_pane_g2_ParamLimits

0xea6b,	// (0x0002dff6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x0002f2cd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x0002f2cd) middle_sk_idle_act4_pane_g

0xea83,	// (0x0002e00e) middle_sk_idle_act4_pane_t1_ParamLimits

0xea83,	// (0x0002e00e) middle_sk_idle_act4_pane_t1

0xeab2,	// (0x0002e03d) grid_ai_shortcut_pane_ParamLimits

0xeab2,	// (0x0002e03d) grid_ai_shortcut_pane

0xeacf,	// (0x0002e05a) list_highlight_pane_cp16_ParamLimits

0xeacf,	// (0x0002e05a) list_highlight_pane_cp16

0xeadc,	// (0x0002e067) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeadc,	// (0x0002e067) list_single_idle_plugin_shortcut_pane_g1

0xeae8,	// (0x0002e073) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeae8,	// (0x0002e073) list_single_idle_plugin_shortcut_pane_g2

0xeb04,	// (0x0002e08f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb04,	// (0x0002e08f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x0002f2d2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x0002f2d2) list_single_idle_plugin_shortcut_pane_g

0xeb19,	// (0x0002e0a4) cell_ai_shortcut_pane_ParamLimits

0xeb19,	// (0x0002e0a4) cell_ai_shortcut_pane

0xeb2f,	// (0x0002e0ba) cell_ai_shortcut_pane_g1_ParamLimits

0xeb2f,	// (0x0002e0ba) cell_ai_shortcut_pane_g1

0x9416,	// (0x000289a1) ai_gene_pane_1_cp2

0x960b,	// (0x00028b96) ai_gene_pane_2_cp2

0x9613,	// (0x00028b9e) list_highlight_pane_cp15

0x961c,	// (0x00028ba7) list_single_idle_plugin_calendar_pane_g1

0x9613,	// (0x00028b9e) list_highlight_pane_cp17

0x9624,	// (0x00028baf) list_single_idle_plugin_calendar_pane_g1_copy1

0x962c,	// (0x00028bb7) list_single_idle_plugin_player_pane_g1

0x6daa,	// (0x00026335) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x0002f2d9) list_single_idle_plugin_player_pane_g

0x9634,	// (0x00028bbf) list_single_idle_plugin_player_pane_t1

0x9642,	// (0x00028bcd) list_single_idle_plugin_player_pane_t2

0x9650,	// (0x00028bdb) list_single_idle_plugin_player_pane_t3

0x965e,	// (0x00028be9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x0002f2de) list_single_idle_plugin_player_pane_t

0x966c,	// (0x00028bf7) wait_bar_pane_cp15

0x9674,	// (0x00028bff) grid_ai_notification_pane

0x6daa,	// (0x00026335) list_single_idle_plugin_notification_pane_g1

0xeb51,	// (0x0002e0dc) cell_ai_notification_pane_ParamLimits

0xeb51,	// (0x0002e0dc) cell_ai_notification_pane

0x968a,	// (0x00028c15) cell_ai_notification_pane_g1

0x9692,	// (0x00028c1d) cell_ai_notification_pane_t1

0xeb5e,	// (0x0002e0e9) tb_ext_find_button_pane

0xeb66,	// (0x0002e0f1) tb_ext_find_pane_g1

0xeb6e,	// (0x0002e0f9) tb_ext_find_pane_t1

0x45ac,	// (0x00023b37) tb_ext_find_button_pane_g1

0x96be,	// (0x00028c49) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x0002f2e7) tb_ext_find_button_pane_g

0xe97e,	// (0x0002df09) main_idle_act4_pane_t1_ParamLimits

0xe994,	// (0x0002df1f) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x0002f2a5) main_idle_act4_pane_t_ParamLimits

0xe9c6,	// (0x0002df51) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9de,	// (0x0002df69) sat_plugin_idle_act4_pane_ParamLimits

0xe9de,	// (0x0002df69) sat_plugin_idle_act4_pane

0xeb7c,	// (0x0002e107) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb7c,	// (0x0002e107) sat_plugin_idle_act4_pane_t1

0xeb94,	// (0x0002e11f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb94,	// (0x0002e11f) sat_plugin_idle_act4_pane_t2

0xebac,	// (0x0002e137) sat_plugin_idle_act4_pane_t3_ParamLimits

0xebac,	// (0x0002e137) sat_plugin_idle_act4_pane_t3

0xebc4,	// (0x0002e14f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xebc4,	// (0x0002e14f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x0002f2ec) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x0002f2ec) sat_plugin_idle_act4_pane_t

0x1435,	// (0x000209c0) popup_battery_window_ParamLimits

0x1435,	// (0x000209c0) popup_battery_window

0x3947,	// (0x00022ed2) bg_popup_sub_pane_cp25_ParamLimits

0x3947,	// (0x00022ed2) bg_popup_sub_pane_cp25

0x9713,	// (0x00028c9e) popup_battery_window_g1_ParamLimits

0x9713,	// (0x00028c9e) popup_battery_window_g1

0x971f,	// (0x00028caa) popup_battery_window_t1_ParamLimits

0x971f,	// (0x00028caa) popup_battery_window_t1

0x9731,	// (0x00028cbc) popup_battery_window_t2_ParamLimits

0x9731,	// (0x00028cbc) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x0002f2f5) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x0002f2f5) popup_battery_window_t

0xd471,	// (0x0002c9fc) midp_canvas_pane_ParamLimits

0xd4ce,	// (0x0002ca59) midp_keypad_pane_ParamLimits

0xd4ce,	// (0x0002ca59) midp_keypad_pane

0x4efd,	// (0x00024488) main_midp_pane_ParamLimits

0x74d8,	// (0x00026a63) signal_pane_g2_cp_ParamLimits

0xebdc,	// (0x0002e167) aid_size_cell_midp_keypad_ParamLimits

0xebdc,	// (0x0002e167) aid_size_cell_midp_keypad

0xebfa,	// (0x0002e185) midp_keyp_game_grid_pane_ParamLimits

0xebfa,	// (0x0002e185) midp_keyp_game_grid_pane

0xec21,	// (0x0002e1ac) midp_keyp_rocker_pane_ParamLimits

0xec21,	// (0x0002e1ac) midp_keyp_rocker_pane

0xec72,	// (0x0002e1fd) midp_keyp_sk_left_pane_ParamLimits

0xec72,	// (0x0002e1fd) midp_keyp_sk_left_pane

0xecc6,	// (0x0002e251) midp_keyp_sk_right_pane_ParamLimits

0xecc6,	// (0x0002e251) midp_keyp_sk_right_pane

0x35ca,	// (0x00022b55) bg_button_pane_cp03

0xed1a,	// (0x0002e2a5) midp_keyp_sk_left_pane_g1

0x35ca,	// (0x00022b55) bg_button_pane_cp04

0xed1a,	// (0x0002e2a5) midp_keyp_sk_right_pane_g1

0x7a2e,	// (0x00026fb9) midp_keyp_rocker_pane_g1

0xed23,	// (0x0002e2ae) keyp_game_cell_pane_ParamLimits

0xed23,	// (0x0002e2ae) keyp_game_cell_pane

0x35ca,	// (0x00022b55) bg_button_pane_cp02

0xed47,	// (0x0002e2d2) keyp_game_cell_pane_g1

0xbf37,	// (0x0002b4c2) popup_fep_vkb2_window_ParamLimits

0xbf37,	// (0x0002b4c2) popup_fep_vkb2_window

0xca8a,	// (0x0002c015) aid_size_cell_vkb2_ParamLimits

0xca8a,	// (0x0002c015) aid_size_cell_vkb2

0xcac0,	// (0x0002c04b) popup_fep_vkb2_window_g1_ParamLimits

0xcac0,	// (0x0002c04b) popup_fep_vkb2_window_g1

0xcb10,	// (0x0002c09b) vkb2_area_bottom_pane_ParamLimits

0xcb10,	// (0x0002c09b) vkb2_area_bottom_pane

0xcb64,	// (0x0002c0ef) vkb2_area_keypad_pane_ParamLimits

0xcb64,	// (0x0002c0ef) vkb2_area_keypad_pane

0xcbac,	// (0x0002c137) vkb2_area_top_pane_ParamLimits

0xcbac,	// (0x0002c137) vkb2_area_top_pane

0xcc32,	// (0x0002c1bd) vkb2_top_entry_pane_ParamLimits

0xcc32,	// (0x0002c1bd) vkb2_top_entry_pane

0xcc5f,	// (0x0002c1ea) vkb2_top_grid_left_pane_ParamLimits

0xcc5f,	// (0x0002c1ea) vkb2_top_grid_left_pane

0xcc7f,	// (0x0002c20a) vkb2_top_grid_right_pane_ParamLimits

0xcc7f,	// (0x0002c20a) vkb2_top_grid_right_pane

0x2cbc,	// (0x00022247) vkb2_cell_keypad_pane_ParamLimits

0x2cbc,	// (0x00022247) vkb2_cell_keypad_pane

0xccc5,	// (0x0002c250) vkb2_area_bottom_grid_pane_ParamLimits

0xccc5,	// (0x0002c250) vkb2_area_bottom_grid_pane

0xccef,	// (0x0002c27a) vkb2_area_bottom_pane_g1_ParamLimits

0xccef,	// (0x0002c27a) vkb2_area_bottom_pane_g1

0xcd15,	// (0x0002c2a0) vkb2_area_bottom_pane_g2_ParamLimits

0xcd15,	// (0x0002c2a0) vkb2_area_bottom_pane_g2

0xcd46,	// (0x0002c2d1) vkb2_area_bottom_pane_g3_ParamLimits

0xcd46,	// (0x0002c2d1) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x0002f2fa) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x0002f2fa) vkb2_area_bottom_pane_g

0x2e66,	// (0x000223f1) vkb2_top_cell_left_pane_ParamLimits

0x2e66,	// (0x000223f1) vkb2_top_cell_left_pane

0xed50,	// (0x0002e2db) vkb2_top_entry_pane_g1_ParamLimits

0xed50,	// (0x0002e2db) vkb2_top_entry_pane_g1

0xed5e,	// (0x0002e2e9) vkb2_top_entry_pane_t1_ParamLimits

0xed5e,	// (0x0002e2e9) vkb2_top_entry_pane_t1

0x98e2,	// (0x00028e6d) vkb2_top_entry_pane_t2_ParamLimits

0x98e2,	// (0x00028e6d) vkb2_top_entry_pane_t2

0x9914,	// (0x00028e9f) vkb2_top_entry_pane_t3_ParamLimits

0x9914,	// (0x00028e9f) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x0002f301) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x0002f301) vkb2_top_entry_pane_t

0xcdb0,	// (0x0002c33b) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdb0,	// (0x0002c33b) vkb2_top_grid_right_pane_g1

0x2ec9,	// (0x00022454) vkb2_top_grid_right_pane_g2_ParamLimits

0x2ec9,	// (0x00022454) vkb2_top_grid_right_pane_g2

0x2ee1,	// (0x0002246c) vkb2_top_grid_right_pane_g3_ParamLimits

0x2ee1,	// (0x0002246c) vkb2_top_grid_right_pane_g3

0xcdc6,	// (0x0002c351) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdc6,	// (0x0002c351) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x0002f308) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x0002f308) vkb2_top_grid_right_pane_g

0x2f0f,	// (0x0002249a) vkb2_top_cell_left_pane_g1

0x2f26,	// (0x000224b1) vkb2_cell_keypad_pane_g1_ParamLimits

0x2f26,	// (0x000224b1) vkb2_cell_keypad_pane_g1

0x9938,	// (0x00028ec3) vkb2_cell_keypad_pane_t1_ParamLimits

0x9938,	// (0x00028ec3) vkb2_cell_keypad_pane_t1

0x2f34,	// (0x000224bf) vkb2_cell_bottom_grid_pane_ParamLimits

0x2f34,	// (0x000224bf) vkb2_cell_bottom_grid_pane

0x2f6d,	// (0x000224f8) vkb2_cell_bottom_grid_pane_g1

0xea0f,	// (0x0002df9a) aid_call2_pane_cp02

0xea17,	// (0x0002dfa2) aid_call_pane_cp02

0xea1f,	// (0x0002dfaa) clock_digital_number_pane_cp10

0xea27,	// (0x0002dfb2) clock_digital_number_pane_cp11

0xea2f,	// (0x0002dfba) clock_digital_number_pane_cp12

0xea37,	// (0x0002dfc2) clock_digital_number_pane_cp13

0xea3f,	// (0x0002dfca) clock_digital_separator_pane_cp10

0x45ac,	// (0x00023b37) popup_clock_digital_analogue_window_cp2_g1

0x45ac,	// (0x00023b37) popup_clock_digital_analogue_window_cp2_g2

0xea47,	// (0x0002dfd2) popup_clock_digital_analogue_window_cp2_g3

0x45ac,	// (0x00023b37) popup_clock_digital_analogue_window_cp2_g4

0xea47,	// (0x0002dfd2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x0002f2bd) popup_clock_digital_analogue_window_cp2_g

0xea4f,	// (0x0002dfda) popup_clock_digital_analogue_window_cp2_t1

0xea5d,	// (0x0002dfe8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x0002f2c8) popup_clock_digital_analogue_window_cp2_t

0x7a2e,	// (0x00026fb9) clock_digital_number_pane_cp10_g1

0x7a2e,	// (0x00026fb9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002f0b0) clock_digital_number_pane_cp10_g

0x7a2e,	// (0x00026fb9) clock_digital_separator_pane_cp10_g1

0x7a2e,	// (0x00026fb9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002f0b0) clock_digital_separator_pane_cp10_g

0x935f,	// (0x000288ea) uniindi_top_pane_g3

0x9370,	// (0x000288fb) uniindi_top_pane_g4

0x2d47,	// (0x000222d2) vkb2_row_keypad_pane_ParamLimits

0x2d47,	// (0x000222d2) vkb2_row_keypad_pane

0x2f89,	// (0x00022514) vkb2_cell_t_keypad_pane_ParamLimits

0x2f89,	// (0x00022514) vkb2_cell_t_keypad_pane

0x2f99,	// (0x00022524) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2f99,	// (0x00022524) vkb2_cell_t_keypad_pane_cp08

0x2fac,	// (0x00022537) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2fac,	// (0x00022537) vkb2_cell_t_keypad_pane_cp09

0x2fc0,	// (0x0002254b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2fc0,	// (0x0002254b) vkb2_cell_t_keypad_pane_cp01

0x2fd1,	// (0x0002255c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2fd1,	// (0x0002255c) vkb2_cell_t_keypad_pane_cp02

0x2fe2,	// (0x0002256d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2fe2,	// (0x0002256d) vkb2_cell_t_keypad_pane_cp03

0x2ff3,	// (0x0002257e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2ff3,	// (0x0002257e) vkb2_cell_t_keypad_pane_cp04

0x3004,	// (0x0002258f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3004,	// (0x0002258f) vkb2_cell_t_keypad_pane_cp05

0x3015,	// (0x000225a0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3015,	// (0x000225a0) vkb2_cell_t_keypad_pane_cp06

0x3026,	// (0x000225b1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3026,	// (0x000225b1) vkb2_cell_t_keypad_pane_cp07

0x3037,	// (0x000225c2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3037,	// (0x000225c2) vkb2_cell_t_keypad_pane_cp10

0x7cac,	// (0x00027237) vkb2_cell_t_keypad_pane_g1

0x994f,	// (0x00028eda) vkb2_cell_t_keypad_pane_t1

0x35ca,	// (0x00022b55) popup_grid_graphic2_window

0xed97,	// (0x0002e322) aid_size_cell_graphic2_ParamLimits

0xed97,	// (0x0002e322) aid_size_cell_graphic2

0xedd5,	// (0x0002e360) bg_popup_window_pane_cp21_ParamLimits

0xedd5,	// (0x0002e360) bg_popup_window_pane_cp21

0xede3,	// (0x0002e36e) graphic2_pages_pane_ParamLimits

0xede3,	// (0x0002e36e) graphic2_pages_pane

0xee39,	// (0x0002e3c4) grid_graphic2_control_pane_ParamLimits

0xee39,	// (0x0002e3c4) grid_graphic2_control_pane

0xee81,	// (0x0002e40c) grid_graphic2_pane_ParamLimits

0xee81,	// (0x0002e40c) grid_graphic2_pane

0xef15,	// (0x0002e4a0) cell_graphic2_pane

0x35ca,	// (0x00022b55) main_comp_mode_pane

0x8bdf,	// (0x0002816a) list_ai3_gene_pane_ParamLimits

0xe756,	// (0x0002dce1) bg_popup_window_pane_cp19_ParamLimits

0x8fb5,	// (0x00028540) bg_touch_area_indi_pane_ParamLimits

0x8fb5,	// (0x00028540) bg_touch_area_indi_pane

0x8fcb,	// (0x00028556) bg_touch_area_indi_pane_cp01_ParamLimits

0x8fcb,	// (0x00028556) bg_touch_area_indi_pane_cp01

0x8fe1,	// (0x0002856c) bg_touch_area_indi_pane_cp02_ParamLimits

0x8fe1,	// (0x0002856c) bg_touch_area_indi_pane_cp02

0x8ff9,	// (0x00028584) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ff9,	// (0x00028584) bg_touch_area_indi_pane_cp03

0x9013,	// (0x0002859e) popup_slider_window_g1_ParamLimits

0x902f,	// (0x000285ba) popup_slider_window_g2_ParamLimits

0x904b,	// (0x000285d6) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x0002f252) popup_slider_window_g_ParamLimits

0x90a7,	// (0x00028632) popup_slider_window_t1_ParamLimits

0x911b,	// (0x000286a6) small_volume_slider_vertical_pane_ParamLimits

0xef15,	// (0x0002e4a0) cell_graphic2_pane_ParamLimits

0xef72,	// (0x0002e4fd) bg_button_pane_cp10_ParamLimits

0xef72,	// (0x0002e4fd) bg_button_pane_cp10

0xef85,	// (0x0002e510) bg_button_pane_cp11_ParamLimits

0xef85,	// (0x0002e510) bg_button_pane_cp11

0xef98,	// (0x0002e523) graphic2_pages_pane_g1_ParamLimits

0xef98,	// (0x0002e523) graphic2_pages_pane_g1

0xefb3,	// (0x0002e53e) graphic2_pages_pane_g2_ParamLimits

0xefb3,	// (0x0002e53e) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x0002f316) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x0002f316) graphic2_pages_pane_g

0xefcb,	// (0x0002e556) graphic2_pages_pane_t1_ParamLimits

0xefcb,	// (0x0002e556) graphic2_pages_pane_t1

0xefe3,	// (0x0002e56e) cell_graphic2_control_pane_ParamLimits

0xefe3,	// (0x0002e56e) cell_graphic2_control_pane

0xf015,	// (0x0002e5a0) cell_graphic2_pane_g1_ParamLimits

0xf015,	// (0x0002e5a0) cell_graphic2_pane_g1

0xdb4b,	// (0x0002d0d6) cell_graphic2_pane_g2_ParamLimits

0xdb4b,	// (0x0002d0d6) cell_graphic2_pane_g2

0xeedb,	// (0x0002e466) cell_graphic2_pane_g3_ParamLimits

0xeedb,	// (0x0002e466) cell_graphic2_pane_g3

0xdb58,	// (0x0002d0e3) cell_graphic2_pane_g4_ParamLimits

0xdb58,	// (0x0002d0e3) cell_graphic2_pane_g4

0xf022,	// (0x0002e5ad) cell_graphic2_pane_g5_ParamLimits

0xf022,	// (0x0002e5ad) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x0002f31b) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x0002f31b) cell_graphic2_pane_g

0xf042,	// (0x0002e5cd) cell_graphic2_pane_t1_ParamLimits

0xf042,	// (0x0002e5cd) cell_graphic2_pane_t1

0x6100,	// (0x0002568b) grid_highlight_pane_cp11_ParamLimits

0x6100,	// (0x0002568b) grid_highlight_pane_cp11

0x3947,	// (0x00022ed2) bg_button_pane_cp05

0xf077,	// (0x0002e602) cell_graphic2_control_pane_g1

0x7a2e,	// (0x00026fb9) bg_touch_area_indi_pane_g1

0x9c1f,	// (0x000291aa) aid_cmod_rocker_key_size

0x9c29,	// (0x000291b4) aid_cmode_itu_key_size

0x9c33,	// (0x000291be) main_cmode_video_pane

0x9c3d,	// (0x000291c8) main_comp_mode_itu_pane

0x9c49,	// (0x000291d4) main_comp_mode_rocker_pane

0x9c55,	// (0x000291e0) cell_cmode_rocker_pane_ParamLimits

0x9c55,	// (0x000291e0) cell_cmode_rocker_pane

0x9c67,	// (0x000291f2) cell_cmode_itu_pane_ParamLimits

0x9c67,	// (0x000291f2) cell_cmode_itu_pane

0x3f2d,	// (0x000234b8) bg_button_pane_cp06_ParamLimits

0x3f2d,	// (0x000234b8) bg_button_pane_cp06

0x7cac,	// (0x00027237) cell_cmode_rocker_pane_g1_ParamLimits

0x7cac,	// (0x00027237) cell_cmode_rocker_pane_g1

0x91bf,	// (0x0002874a) cell_cmode_rocker_pane_g2_ParamLimits

0x91bf,	// (0x0002874a) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x0002f32b) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x0002f32b) cell_cmode_rocker_pane_g

0x35ca,	// (0x00022b55) bg_button_pane_cp07

0x9c7c,	// (0x00029207) cell_cmode_itu_pane_g1

0x9c85,	// (0x00029210) cell_cmode_itu_pane_t1

0x9c93,	// (0x0002921e) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x0002f330) cell_cmode_itu_pane_t

0x93e2,	// (0x0002896d) aid_touch_ctrl_left

0x93ea,	// (0x00028975) aid_touch_ctrl_right

0x35ca,	// (0x00022b55) compa_mode_pane

0xf09d,	// (0x0002e628) aid_cmod_rocker_key_size_cp

0xf0a7,	// (0x0002e632) aid_cmode_itu_key_size_cp

0x9cb5,	// (0x00029240) compa_mode_pane_g1

0x9cbd,	// (0x00029248) compa_mode_pane_g2

0x9cc5,	// (0x00029250) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x0002f335) compa_mode_pane_g

0xf0b1,	// (0x0002e63c) main_comp_mode_itu_pane_cp

0xf0b9,	// (0x0002e644) main_comp_mode_rocker_pane_cp

0xf0c1,	// (0x0002e64c) cell_cmode_itu_pane_cp_ParamLimits

0xf0c1,	// (0x0002e64c) cell_cmode_itu_pane_cp

0xf0d6,	// (0x0002e661) cell_cmode_rocker_pane_cp_ParamLimits

0xf0d6,	// (0x0002e661) cell_cmode_rocker_pane_cp

0x3f2d,	// (0x000234b8) bg_button_pane_cp06_cp_ParamLimits

0x3f2d,	// (0x000234b8) bg_button_pane_cp06_cp

0x7cac,	// (0x00027237) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7cac,	// (0x00027237) cell_cmode_rocker_pane_g1_cp

0x7a2e,	// (0x00026fb9) cell_cmode_rocker_pane_g2_cp

0x35ca,	// (0x00022b55) bg_button_pane_cp07_cp

0xf0e8,	// (0x0002e673) cell_cmode_itu_pane_g1_cp

0xf0f1,	// (0x0002e67c) cell_cmode_itu_pane_t1_cp

0xf0f1,	// (0x0002e67c) cell_cmode_itu_pane_t2_cp

0xddab,	// (0x0002d336) settings_code_pane_cp2

0x36be,	// (0x00022c49) bg_popup_window_pane_cp3_ParamLimits

0x3b21,	// (0x000230ac) heading_pane_cp3_ParamLimits

0x3b2d,	// (0x000230b8) listscroll_popup_graphic_pane_ParamLimits

0x2660,	// (0x00021beb) fep_hwr_aid_pane_ParamLimits

0x2a29,	// (0x00021fb4) aid_touch_sctrl_top_ParamLimits

0x2a36,	// (0x00021fc1) sctrl_sk_top_pane_g1_ParamLimits

0x7cac,	// (0x00027237) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0002f26b) sctrl_sk_top_pane_g_ParamLimits

0x2a43,	// (0x00021fce) sctrl_sk_top_pane_t1_ParamLimits

0x2a29,	// (0x00021fb4) aid_touch_sctrl_bottom_ParamLimits

0x2a43,	// (0x00021fce) sctrl_sk_bottom_pane_t1_ParamLimits

0x932b,	// (0x000288b6) aid_area_touch_clock

0xcbf4,	// (0x0002c17f) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbf4,	// (0x0002c17f) aid_vkb2_area_top_pane_cell

0xcc9f,	// (0x0002c22a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc9f,	// (0x0002c22a) aid_vkb2_area_bottom_pane_cell

0x989a,	// (0x00028e25) popup_char_count_window

0x9d12,	// (0x0002929d) popup_char_count_window_g1

0x9d1b,	// (0x000292a6) popup_char_count_window_g2

0x9d24,	// (0x000292af) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x0002f33c) popup_char_count_window_g

0x9d2d,	// (0x000292b8) popup_char_count_window_t1

0x2ae4,	// (0x0002206f) popup_fep_char_preview_window_ParamLimits

0x2ae4,	// (0x0002206f) popup_fep_char_preview_window

0xcc14,	// (0x0002c19f) vkb2_top_candi_pane_ParamLimits

0xcc14,	// (0x0002c19f) vkb2_top_candi_pane

0xf0ff,	// (0x0002e68a) cell_vkb2_top_candi_pane_ParamLimits

0xf0ff,	// (0x0002e68a) cell_vkb2_top_candi_pane

0x5a8c,	// (0x00025017) bg_popup_fep_char_preview_window_ParamLimits

0x5a8c,	// (0x00025017) bg_popup_fep_char_preview_window

0x304c,	// (0x000225d7) popup_fep_char_preview_window_t1_ParamLimits

0x304c,	// (0x000225d7) popup_fep_char_preview_window_t1

0x9db1,	// (0x0002933c) bg_popup_fep_char_preview_window_g1

0x9db9,	// (0x00029344) bg_popup_fep_char_preview_window_g2

0x9d88,	// (0x00029313) bg_popup_fep_char_preview_window_g3

0x9dc1,	// (0x0002934c) bg_popup_fep_char_preview_window_g4

0x9dc9,	// (0x00029354) bg_popup_fep_char_preview_window_g5

0x3086,	// (0x00022611) bg_popup_fep_char_preview_window_g6

0x9dd1,	// (0x0002935c) bg_popup_fep_char_preview_window_g7

0x9dd9,	// (0x00029364) bg_popup_fep_char_preview_window_g8

0x9de1,	// (0x0002936c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdb8,	// (0x0002f343) bg_popup_fep_char_preview_window_g

0x7cac,	// (0x00027237) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7cac,	// (0x00027237) cell_vkb2_top_candi_pane_g1

0x810a,	// (0x00027695) cell_vkb2_top_candi_pane_g2_ParamLimits

0x810a,	// (0x00027695) cell_vkb2_top_candi_pane_g2

0x812b,	// (0x000276b6) cell_vkb2_top_candi_pane_g3_ParamLimits

0x812b,	// (0x000276b6) cell_vkb2_top_candi_pane_g3

0x308e,	// (0x00022619) cell_vkb2_top_candi_pane_g4_ParamLimits

0x308e,	// (0x00022619) cell_vkb2_top_candi_pane_g4

0x9d90,	// (0x0002931b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9d90,	// (0x0002931b) cell_vkb2_top_candi_pane_g5

0x91bf,	// (0x0002874a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x91bf,	// (0x0002874a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x0002f356) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x0002f356) cell_vkb2_top_candi_pane_g

0x30af,	// (0x0002263a) cell_vkb2_top_candi_pane_t1

0x24c0,	// (0x00021a4b) aid_size_touch_slider_mark_ParamLimits

0x24c0,	// (0x00021a4b) aid_size_touch_slider_mark

0xee1f,	// (0x0002e3aa) grid_graphic2_catg_pane_ParamLimits

0xee1f,	// (0x0002e3aa) grid_graphic2_catg_pane

0xeee8,	// (0x0002e473) popup_grid_graphic2_window_t1_ParamLimits

0xeee8,	// (0x0002e473) popup_grid_graphic2_window_t1

0xeefe,	// (0x0002e489) popup_grid_graphic2_window_t2_ParamLimits

0xeefe,	// (0x0002e489) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x0002f311) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x0002f311) popup_grid_graphic2_window_t

0x3947,	// (0x00022ed2) bg_button_pane_cp05_ParamLimits

0xf077,	// (0x0002e602) cell_graphic2_control_pane_g1_ParamLimits

0xf165,	// (0x0002e6f0) cell_graphic2_catg_pane_ParamLimits

0xf165,	// (0x0002e6f0) cell_graphic2_catg_pane

0x35ca,	// (0x00022b55) bg_button_pane_cp12

0xf177,	// (0x0002e702) cell_graphic2_catg_pane_g1

0x92f7,	// (0x00028882) cell_tb_ext_pane_t1_ParamLimits

0x2e86,	// (0x00022411) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2e86,	// (0x00022411) vkb2_top_cell_right_narrow_pane

0x2e9e,	// (0x00022429) vkb2_top_cell_right_wide_pane_ParamLimits

0x2e9e,	// (0x00022429) vkb2_top_cell_right_wide_pane

0x2652,	// (0x00021bdd) bg_vkb2_func_pane_ParamLimits

0x2652,	// (0x00021bdd) bg_vkb2_func_pane

0x2f0f,	// (0x0002249a) vkb2_top_cell_left_pane_g1_ParamLimits

0x2652,	// (0x00021bdd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2652,	// (0x00021bdd) bg_vkb2_fuc_pane_cp03

0x2f6d,	// (0x000224f8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x540f,	// (0x0002499a) bg_vkb2_func_pane_g1

0x5417,	// (0x000249a2) bg_vkb2_func_pane_g2

0x5427,	// (0x000249b2) bg_vkb2_func_pane_g3

0x541f,	// (0x000249aa) bg_vkb2_func_pane_g4

0x542f,	// (0x000249ba) bg_vkb2_func_pane_g5

0x5437,	// (0x000249c2) bg_vkb2_func_pane_g6

0x543f,	// (0x000249ca) bg_vkb2_func_pane_g7

0x5447,	// (0x000249d2) bg_vkb2_func_pane_g8

0x5407,	// (0x00024992) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x0002f363) bg_vkb2_func_pane_g

0x2652,	// (0x00021bdd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2652,	// (0x00021bdd) bg_vkb2_fuc_pane_cp01

0x2f0f,	// (0x0002249a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2f0f,	// (0x0002249a) vkb2_top_cell_right_wide_pane_g1

0x2652,	// (0x00021bdd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2652,	// (0x00021bdd) bg_vkb2_fuc_pane_cp02

0x2f6d,	// (0x000224f8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2f6d,	// (0x000224f8) vkb2_top_cell_right_narrow_pane_g1

0xe696,	// (0x0002dc21) aid_touch_area_decrease_ParamLimits

0xe696,	// (0x0002dc21) aid_touch_area_decrease

0xe6ca,	// (0x0002dc55) aid_touch_area_increase_ParamLimits

0xe6ca,	// (0x0002dc55) aid_touch_area_increase

0xe6f2,	// (0x0002dc7d) aid_touch_area_mute_ParamLimits

0xe6f2,	// (0x0002dc7d) aid_touch_area_mute

0xe722,	// (0x0002dcad) aid_touch_area_slider_ParamLimits

0xe722,	// (0x0002dcad) aid_touch_area_slider

0xe762,	// (0x0002dced) popup_slider_window_g4_ParamLimits

0xe762,	// (0x0002dced) popup_slider_window_g4

0xe78a,	// (0x0002dd15) popup_slider_window_g5_ParamLimits

0xe78a,	// (0x0002dd15) popup_slider_window_g5

0xe7be,	// (0x0002dd49) popup_slider_window_g6_ParamLimits

0xe7be,	// (0x0002dd49) popup_slider_window_g6

0x90d5,	// (0x00028660) popup_slider_window_t2_ParamLimits

0x90d5,	// (0x00028660) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x0002f25f) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x0002f25f) popup_slider_window_t

0xe7da,	// (0x0002dd65) slider_pane_ParamLimits

0xe7da,	// (0x0002dd65) slider_pane

0x9e04,	// (0x0002938f) slider_pane_g1_ParamLimits

0x9e04,	// (0x0002938f) slider_pane_g1

0x9e18,	// (0x000293a3) slider_pane_g2_ParamLimits

0x9e18,	// (0x000293a3) slider_pane_g2

0x9e2e,	// (0x000293b9) slider_pane_g3_ParamLimits

0x9e2e,	// (0x000293b9) slider_pane_g3

0x0003,

0xfdeb,	// (0x0002f376) slider_pane_g_ParamLimits

0xfdeb,	// (0x0002f376) slider_pane_g

0xc8d4,	// (0x0002be5f) popup_tb_float_extension_window_ParamLimits

0xc8d4,	// (0x0002be5f) popup_tb_float_extension_window

0x9e5a,	// (0x000293e5) aid_size_cell_tb_float_ext

0x35ca,	// (0x00022b55) bg_popup_sub_window_cp28

0x9e66,	// (0x000293f1) grid_tb_float_ext_pane

0x9e70,	// (0x000293fb) cell_tb_float_ext_pane_ParamLimits

0x9e70,	// (0x000293fb) cell_tb_float_ext_pane

0x9e8a,	// (0x00029415) cell_tb_float_ext_pane_g1

0x9e93,	// (0x0002941e) grid_highlight_pane_cp12

0xc9fd,	// (0x0002bf88) cell_last_hwr_side_pane_ParamLimits

0xc9fd,	// (0x0002bf88) cell_last_hwr_side_pane

0x7a2e,	// (0x00026fb9) cell_last_hwr_side_pane_g1

0x9e9c,	// (0x00029427) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x0002f37f) cell_last_hwr_side_pane_g

0xcd7b,	// (0x0002c306) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd7b,	// (0x0002c306) vkb2_area_bottom_space_btn_pane

0x7cac,	// (0x00027237) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x994f,	// (0x00028eda) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x30af,	// (0x0002263a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x30ce,	// (0x00022659) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x30ce,	// (0x00022659) vkb2_area_bottom_space_btn_pane_g1

0x3108,	// (0x00022693) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3108,	// (0x00022693) vkb2_area_bottom_space_btn_pane_g2

0x313e,	// (0x000226c9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x313e,	// (0x000226c9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x0002f384) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x0002f384) vkb2_area_bottom_space_btn_pane_g

0x2707,	// (0x00021c92) cel_fep_hwr_func_pane_ParamLimits

0x2707,	// (0x00021c92) cel_fep_hwr_func_pane

0xc9d2,	// (0x0002bf5d) cell_hwr_side_button_pane_ParamLimits

0xc9d2,	// (0x0002bf5d) cell_hwr_side_button_pane

0x932b,	// (0x000288b6) aid_area_touch_clock_ParamLimits

0x3947,	// (0x00022ed2) bg_uniindi_top_pane_ParamLimits

0x933d,	// (0x000288c8) uniindi_top_pane_g1_ParamLimits

0x9353,	// (0x000288de) uniindi_top_pane_g2_ParamLimits

0x935f,	// (0x000288ea) uniindi_top_pane_g3_ParamLimits

0x9370,	// (0x000288fb) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x0002f297) uniindi_top_pane_g_ParamLimits

0x937d,	// (0x00028908) uniindi_top_pane_t1_ParamLimits

0x3947,	// (0x00022ed2) bg_vkb2_func_pane_cp01_ParamLimits

0x3947,	// (0x00022ed2) bg_vkb2_func_pane_cp01

0x9ea5,	// (0x00029430) cel_fep_hwr_func_pane_g1_ParamLimits

0x9ea5,	// (0x00029430) cel_fep_hwr_func_pane_g1

0x3947,	// (0x00022ed2) bg_vkb2_func_pane_cp02_ParamLimits

0x3947,	// (0x00022ed2) bg_vkb2_func_pane_cp02

0x9ea5,	// (0x00029430) cell_hwr_side_button_pane_g1_ParamLimits

0x9ea5,	// (0x00029430) cell_hwr_side_button_pane_g1

0x5288,	// (0x00024813) status_pane_g4_ParamLimits

0x5288,	// (0x00024813) status_pane_g4

0x52a2,	// (0x0002482d) status_pane_t1

0x7768,	// (0x00026cf3) form2_midp_gauge_slider_cont_pane

0x7770,	// (0x00026cfb) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe082,	// (0x0002d60d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe094,	// (0x0002d61f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad8,	// (0x0002f063) form2_midp_gauge_slider_pane_t_ParamLimits

0x77a6,	// (0x00026d31) form2_midp_slider_pane_ParamLimits

0x2aa4,	// (0x0002202f) aid_size_cell_func_vkb2_ParamLimits

0x2aa4,	// (0x0002202f) aid_size_cell_func_vkb2

0x9e46,	// (0x000293d1) slider_pane_g4_ParamLimits

0x9e46,	// (0x000293d1) slider_pane_g4

0xcddc,	// (0x0002c367) form2_midp_gauge_slider_pane_t2_cp01

0xcdea,	// (0x0002c375) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcdea,	// (0x0002c375) form2_midp_gauge_slider_pane_t3_cp01

0x31b3,	// (0x0002273e) form2_midp_slider_pane_cp01

0x35ca,	// (0x00022b55) navi_smil_pane

0x9ede,	// (0x00029469) navi_smil_pane_g1

0x9ee6,	// (0x00029471) navi_smil_pane_t1

0x9eb3,	// (0x0002943e) form2_midp_slider_pane_g1

0x9ebc,	// (0x00029447) form2_midp_slider_pane_g2

0x9ec4,	// (0x0002944f) form2_midp_slider_pane_g3

0x9eb3,	// (0x0002943e) form2_midp_slider_pane_g4

0xf180,	// (0x0002e70b) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x0002f38d) form2_midp_slider_pane_g

0x3178,	// (0x00022703) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3178,	// (0x00022703) vkb2_area_bottom_space_btn_pane_g4

0xd741,	// (0x0002cccc) lc0_navi_pane_ParamLimits

0xd741,	// (0x0002cccc) lc0_navi_pane

0xd7ab,	// (0x0002cd36) lc0_stat_indi_pane_ParamLimits

0xd7ab,	// (0x0002cd36) lc0_stat_indi_pane

0xd7c0,	// (0x0002cd4b) ls0_title_pane_ParamLimits

0xd7c0,	// (0x0002cd4b) ls0_title_pane

0x3f2d,	// (0x000234b8) bg_popup_sub_pane_cp14_ParamLimits

0x9312,	// (0x0002889d) list_uniindi_pane_ParamLimits

0x931e,	// (0x000288a9) uniindi_top_pane_ParamLimits

0x93ba,	// (0x00028945) list_single_uniindi_pane_g1_ParamLimits

0x93cd,	// (0x00028958) list_single_uniindi_pane_t1_ParamLimits

0xce07,	// (0x0002c392) lc0_stat_clock_pane_ParamLimits

0xce07,	// (0x0002c392) lc0_stat_clock_pane

0xf18b,	// (0x0002e716) lc0_stat_indi_pane_g1_ParamLimits

0xf18b,	// (0x0002e716) lc0_stat_indi_pane_g1

0xf198,	// (0x0002e723) lc0_stat_indi_pane_g2_ParamLimits

0xf198,	// (0x0002e723) lc0_stat_indi_pane_g2

0x0001,

0xfe0d,	// (0x0002f398) lc0_stat_indi_pane_g_ParamLimits

0xfe0d,	// (0x0002f398) lc0_stat_indi_pane_g

0xce14,	// (0x0002c39f) lc0_uni_indicator_pane_ParamLimits

0xce14,	// (0x0002c39f) lc0_uni_indicator_pane

0xf1a5,	// (0x0002e730) ls0_title_pane_g1_ParamLimits

0xf1a5,	// (0x0002e730) ls0_title_pane_g1

0xf1b9,	// (0x0002e744) ls0_title_pane_t1_ParamLimits

0xf1b9,	// (0x0002e744) ls0_title_pane_t1

0xce21,	// (0x0002c3ac) lc0_uni_indicator_pane_g1_ParamLimits

0xce21,	// (0x0002c3ac) lc0_uni_indicator_pane_g1

0x9f58,	// (0x000294e3) lc0_stat_clock_pane_t1

0x35ca,	// (0x00022b55) main_ai5_pane

0x9f66,	// (0x000294f1) ai5_sk_pane_ParamLimits

0x9f66,	// (0x000294f1) ai5_sk_pane

0xf1e7,	// (0x0002e772) cell_ai5_widget_pane_ParamLimits

0xf1e7,	// (0x0002e772) cell_ai5_widget_pane

0xa029,	// (0x000295b4) aid_size_cell_widget_grid

0xa03f,	// (0x000295ca) bg_ai5_widget_pane_ParamLimits

0xa03f,	// (0x000295ca) bg_ai5_widget_pane

0xa0b3,	// (0x0002963e) cell_ai5_widget_pane_g2

0xa0c3,	// (0x0002964e) cell_ai5_widget_pane_g3

0xa0da,	// (0x00029665) cell_ai5_widget_pane_g4

0xa0e6,	// (0x00029671) cell_ai5_widget_pane_g5

0xa0f2,	// (0x0002967d) cell_ai5_widget_pane_g6

0xa0fe,	// (0x00029689) cell_ai5_widget_pane_g7

0xa146,	// (0x000296d1) cell_ai5_widget_pane_t1_ParamLimits

0xa146,	// (0x000296d1) cell_ai5_widget_pane_t1

0xa163,	// (0x000296ee) cell_ai5_widget_pane_t2_ParamLimits

0xa163,	// (0x000296ee) cell_ai5_widget_pane_t2

0xa17b,	// (0x00029706) cell_ai5_widget_pane_t3_ParamLimits

0xa17b,	// (0x00029706) cell_ai5_widget_pane_t3

0xa193,	// (0x0002971e) cell_ai5_widget_pane_t4_ParamLimits

0xa193,	// (0x0002971e) cell_ai5_widget_pane_t4

0xa1b0,	// (0x0002973b) cell_ai5_widget_pane_t5_ParamLimits

0xa1b0,	// (0x0002973b) cell_ai5_widget_pane_t5

0xa1cf,	// (0x0002975a) cell_ai5_widget_pane_t6_ParamLimits

0xa1cf,	// (0x0002975a) cell_ai5_widget_pane_t6

0xa1e1,	// (0x0002976c) cell_ai5_widget_pane_t7_ParamLimits

0xa1e1,	// (0x0002976c) cell_ai5_widget_pane_t7

0xa1fa,	// (0x00029785) cell_ai5_widget_pane_t8_ParamLimits

0xa1fa,	// (0x00029785) cell_ai5_widget_pane_t8

0x0009,

0xfe27,	// (0x0002f3b2) cell_ai5_widget_pane_t_ParamLimits

0xfe27,	// (0x0002f3b2) cell_ai5_widget_pane_t

0xa24e,	// (0x000297d9) grid_ai5_widget_pane

0x3f2d,	// (0x000234b8) highlight_cell_ai5_widget_pane_ParamLimits

0x3f2d,	// (0x000234b8) highlight_cell_ai5_widget_pane

0xf251,	// (0x0002e7dc) ai5_sk_left_pane

0xf25b,	// (0x0002e7e6) ai5_sk_middle_pane

0xf265,	// (0x0002e7f0) ai5_sk_right_pane

0xa283,	// (0x0002980e) bg_ai5_widget_pane_g1_ParamLimits

0xa283,	// (0x0002980e) bg_ai5_widget_pane_g1

0xa28f,	// (0x0002981a) bg_ai5_widget_pane_g2_ParamLimits

0xa28f,	// (0x0002981a) bg_ai5_widget_pane_g2

0xa29b,	// (0x00029826) bg_ai5_widget_pane_g3_ParamLimits

0xa29b,	// (0x00029826) bg_ai5_widget_pane_g3

0xa2a7,	// (0x00029832) bg_ai5_widget_pane_g4_ParamLimits

0xa2a7,	// (0x00029832) bg_ai5_widget_pane_g4

0xa2b3,	// (0x0002983e) bg_ai5_widget_pane_g5_ParamLimits

0xa2b3,	// (0x0002983e) bg_ai5_widget_pane_g5

0xa2bf,	// (0x0002984a) bg_ai5_widget_pane_g6_ParamLimits

0xa2bf,	// (0x0002984a) bg_ai5_widget_pane_g6

0xa2cb,	// (0x00029856) bg_ai5_widget_pane_g7_ParamLimits

0xa2cb,	// (0x00029856) bg_ai5_widget_pane_g7

0xa2d7,	// (0x00029862) bg_ai5_widget_pane_g8_ParamLimits

0xa2d7,	// (0x00029862) bg_ai5_widget_pane_g8

0xa2e3,	// (0x0002986e) bg_ai5_widget_pane_g9_ParamLimits

0xa2e3,	// (0x0002986e) bg_ai5_widget_pane_g9

0x0008,

0xfe3c,	// (0x0002f3c7) bg_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0002f3c7) bg_ai5_widget_pane_g

0xa315,	// (0x000298a0) cell_shortcut_ai5_widget_pane_ParamLimits

0xa315,	// (0x000298a0) cell_shortcut_ai5_widget_pane

0x4bbf,	// (0x0002414a) bg_cell_shortcut_ai5_widget_pane

0xa326,	// (0x000298b1) cell_grid_ai5_widget_pane_g1

0x4bbf,	// (0x0002414a) highlight_cell_shortcut_ai5_widget_pane

0x5417,	// (0x000249a2) ai5_sk_left_pane_g1

0xa32f,	// (0x000298ba) ai5_sk_left_pane_g2

0xa337,	// (0x000298c2) ai5_sk_left_pane_g3

0xa33f,	// (0x000298ca) ai5_sk_left_pane_g4

0x0003,

0xfe4f,	// (0x0002f3da) ai5_sk_left_pane_g

0xa347,	// (0x000298d2) ai5_sk_left_pane_t1

0x540f,	// (0x0002499a) ai5_sk_right_pane_g1

0xa355,	// (0x000298e0) ai5_sk_right_pane_g2

0xa35d,	// (0x000298e8) ai5_sk_right_pane_g3

0xa365,	// (0x000298f0) ai5_sk_right_pane_g4

0x0003,

0xfe58,	// (0x0002f3e3) ai5_sk_right_pane_g

0xa36d,	// (0x000298f8) ai5_sk_right_pane_t1

0x540f,	// (0x0002499a) ai5_sk_middle_pane_g1

0x5417,	// (0x000249a2) ai5_sk_middle_pane_g2

0x542f,	// (0x000249ba) ai5_sk_middle_pane_g3

0xa35d,	// (0x000298e8) ai5_sk_middle_pane_g4

0xa337,	// (0x000298c2) ai5_sk_middle_pane_g5

0xa37b,	// (0x00029906) ai5_sk_middle_pane_g6

0xf26f,	// (0x0002e7fa) ai5_sk_middle_pane_g7

0x0006,

0xfe61,	// (0x0002f3ec) ai5_sk_middle_pane_g

0xd62d,	// (0x0002cbb8) aid_touch_area_size_lc0_ParamLimits

0xd62d,	// (0x0002cbb8) aid_touch_area_size_lc0

0x2892,	// (0x00021e1d) cell_hwr_candidate_pane_t1_ParamLimits

0x4f5f,	// (0x000244ea) aid_touch_navi_pane

0xd8b9,	// (0x0002ce44) status_dt_navi_pane_ParamLimits

0xd8b9,	// (0x0002ce44) status_dt_navi_pane

0xd8d1,	// (0x0002ce5c) status_dt_sta_pane_ParamLimits

0xd8d1,	// (0x0002ce5c) status_dt_sta_pane

0xf277,	// (0x0002e802) dt_sta_controll_pane

0xf284,	// (0x0002e80f) dt_sta_indi_pane

0xf291,	// (0x0002e81c) dt_sta_title_pane

0x3947,	// (0x00022ed2) bg_dt_sta_indi_pane_ParamLimits

0x3947,	// (0x00022ed2) bg_dt_sta_indi_pane

0xf2a3,	// (0x0002e82e) dt_sta_battery_pane

0xf2ab,	// (0x0002e836) dt_sta_indi_pane_g1

0xa3cd,	// (0x00029958) dt_sta_indi_pane_g2

0xa3d6,	// (0x00029961) dt_sta_indi_pane_g3

0x0002,

0xfe70,	// (0x0002f3fb) dt_sta_indi_pane_g

0xa3df,	// (0x0002996a) dt_sta_signal_pane

0x3f2d,	// (0x000234b8) bg_dt_sta_title_pane_ParamLimits

0x3f2d,	// (0x000234b8) bg_dt_sta_title_pane

0xa3e8,	// (0x00029973) dt_sta_title_pane_g1

0xa3f0,	// (0x0002997b) dt_sta_title_pane_t1_ParamLimits

0xa3f0,	// (0x0002997b) dt_sta_title_pane_t1

0x35ca,	// (0x00022b55) bg_dt_sta_control_pane

0xf2b4,	// (0x0002e83f) dt_sta_controll_pane_g1

0xa40e,	// (0x00029999) bg_dt_sta_title_pane_g1

0xa417,	// (0x000299a2) bg_dt_sta_title_pane_g2

0xa420,	// (0x000299ab) bg_dt_sta_title_pane_g3

0x0002,

0xfe77,	// (0x0002f402) bg_dt_sta_title_pane_g

0x7a2e,	// (0x00026fb9) bg_dt_sta_indi_pane_g1

0xa429,	// (0x000299b4) dt_sta_signal_pane_g1

0xa431,	// (0x000299bc) dt_sta_signal_pane_g2

0x0001,

0xfe7e,	// (0x0002f409) dt_sta_signal_pane_g

0xa439,	// (0x000299c4) dt_sta_battery_pane_g1

0xa442,	// (0x000299cd) dt_sta_battery_pane_t1

0x7a2e,	// (0x00026fb9) bg_dt_sta_control_pane_g1

0x46be,	// (0x00023c49) fep_china_uni_eep_pane

0x46c6,	// (0x00023c51) fep_china_uni_entry_pane_ParamLimits

0x46d6,	// (0x00023c61) popup_fep_china_uni_window_g1_ParamLimits

0x46e6,	// (0x00023c71) popup_fep_china_uni_window_g2_ParamLimits

0x46e6,	// (0x00023c71) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002eca8) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002eca8) popup_fep_china_uni_window_g

0xa451,	// (0x000299dc) fep_china_uni_eep_pane_g1

0xa459,	// (0x000299e4) fep_china_uni_eep_pane_t1

0x9ed5,	// (0x00029460) aid_touch_area_size_smil_player

0x50af,	// (0x0002463a) lc0_clock_pane

0x5296,	// (0x00024821) status_pane_g5_ParamLimits

0x5296,	// (0x00024821) status_pane_g5

0xc456,	// (0x0002b9e1) popup_keymap_window

0x5254,	// (0x000247df) status_icon_pane

0xa0c3,	// (0x0002964e) cell_ai5_widget_pane_g3_ParamLimits

0xa0da,	// (0x00029665) cell_ai5_widget_pane_g4_ParamLimits

0xa0e6,	// (0x00029671) cell_ai5_widget_pane_g5_ParamLimits

0xa10a,	// (0x00029695) cell_ai5_widget_pane_g8_ParamLimits

0xa10a,	// (0x00029695) cell_ai5_widget_pane_g8

0xa11e,	// (0x000296a9) cell_ai5_widget_pane_g9_ParamLimits

0xa11e,	// (0x000296a9) cell_ai5_widget_pane_g9

0xa132,	// (0x000296bd) cell_ai5_widget_pane_g10_ParamLimits

0xa132,	// (0x000296bd) cell_ai5_widget_pane_g10

0xa468,	// (0x000299f3) status_icon_pane_g1

0x35ca,	// (0x00022b55) bg_popup_sub_pane_cp13

0xa470,	// (0x000299fb) popup_keymap_window_t1

0xd5bb,	// (0x0002cb46) control_pane_g6_ParamLimits

0xd5bb,	// (0x0002cb46) control_pane_g6

0xd5c8,	// (0x0002cb53) control_pane_g7_ParamLimits

0xd5c8,	// (0x0002cb53) control_pane_g7

0xd5d5,	// (0x0002cb60) control_pane_g8_ParamLimits

0xd5d5,	// (0x0002cb60) control_pane_g8

0xf277,	// (0x0002e802) dt_sta_controll_pane_ParamLimits

0xf284,	// (0x0002e80f) dt_sta_indi_pane_ParamLimits

0xf291,	// (0x0002e81c) dt_sta_title_pane_ParamLimits

0x3e65,	// (0x000233f0) aid_size_touch_scroll_bar_cale

0x1449,	// (0x000209d4) popup_discreet_window_ParamLimits

0x1449,	// (0x000209d4) popup_discreet_window

0xbf7d,	// (0x0002b508) popup_sk_window

0x5a8c,	// (0x00025017) bg_popup_sub_pane_cp28_ParamLimits

0x5a8c,	// (0x00025017) bg_popup_sub_pane_cp28

0xa47e,	// (0x00029a09) popup_discreet_window_g1_ParamLimits

0xa47e,	// (0x00029a09) popup_discreet_window_g1

0xa49e,	// (0x00029a29) popup_discreet_window_t1_ParamLimits

0xa49e,	// (0x00029a29) popup_discreet_window_t1

0xa4bc,	// (0x00029a47) popup_discreet_window_t2_ParamLimits

0xa4bc,	// (0x00029a47) popup_discreet_window_t2

0x0002,

0xfe83,	// (0x0002f40e) popup_discreet_window_t_ParamLimits

0xfe83,	// (0x0002f40e) popup_discreet_window_t

0x31ea,	// (0x00022775) popup_sk_window_g1

0x31f4,	// (0x0002277f) popup_sk_window_g2

0x0001,

0xfe8a,	// (0x0002f415) popup_sk_window_g

0x31fe,	// (0x00022789) popup_sk_window_t1

0x320c,	// (0x00022797) popup_sk_window_t1_copy1

0xa0b3,	// (0x0002963e) cell_ai5_widget_pane_g2_ParamLimits

0xa20c,	// (0x00029797) cell_ai5_widget_pane_t9_ParamLimits

0xa20c,	// (0x00029797) cell_ai5_widget_pane_t9

0x35ca,	// (0x00022b55) main_fep_fshwr2_pane

0xce48,	// (0x0002c3d3) aid_fshwr2_btn_pane

0xce59,	// (0x0002c3e4) aid_fshwr2_syb_pane

0xce6a,	// (0x0002c3f5) aid_fshwr2_txt_pane

0xce76,	// (0x0002c401) fshwr2_func_candi_pane

0xce95,	// (0x0002c420) fshwr2_hwr_syb_pane

0xceb0,	// (0x0002c43b) fshwr2_icf_pane

0x35ca,	// (0x00022b55) fshwr2_icf_bg_pane

0x328c,	// (0x00022817) fshwr2_icf_pane_t1_ParamLimits

0x328c,	// (0x00022817) fshwr2_icf_pane_t1

0x45ac,	// (0x00023b37) fshwr2_func_candi_pane_g1

0xf2bd,	// (0x0002e848) fshwr2_func_candi_row_pane_ParamLimits

0xf2bd,	// (0x0002e848) fshwr2_func_candi_row_pane

0xcedc,	// (0x0002c467) cell_fshwr2_syb_pane_ParamLimits

0xcedc,	// (0x0002c467) cell_fshwr2_syb_pane

0x7cac,	// (0x00027237) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7cac,	// (0x00027237) fshwr2_hwr_syb_pane_g1

0x35ca,	// (0x00022b55) bg_popup_call_pane_cp01

0xcef2,	// (0x0002c47d) fshwr2_func_candi_cell_pane_ParamLimits

0xcef2,	// (0x0002c47d) fshwr2_func_candi_cell_pane

0xf2d5,	// (0x0002e860) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf2d5,	// (0x0002e860) fshwr2_func_candi_cell_bg_pane

0xcf27,	// (0x0002c4b2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf27,	// (0x0002c4b2) fshwr2_func_candi_cell_pane_g1

0xcf56,	// (0x0002c4e1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf56,	// (0x0002c4e1) fshwr2_func_candi_cell_pane_t1

0x35ca,	// (0x00022b55) bg_button_pane_cp08

0xa52a,	// (0x00029ab5) cell_fshwr2_syb_bg_pane

0xcf69,	// (0x0002c4f4) cell_fshwr2_syb_bg_pane_g1

0xcf71,	// (0x0002c4fc) cell_fshwr2_syb_bg_pane_t1

0x3f2d,	// (0x000234b8) main_tmo_pane

0xdbdb,	// (0x0002d166) uni_indicator_pane_g1_ParamLimits

0xdbf1,	// (0x0002d17c) uni_indicator_pane_g2_ParamLimits

0xdc07,	// (0x0002d192) uni_indicator_pane_g3_ParamLimits

0x65db,	// (0x00025b66) uni_indicator_pane_g4_ParamLimits

0x65db,	// (0x00025b66) uni_indicator_pane_g4

0x65ef,	// (0x00025b7a) uni_indicator_pane_g5_ParamLimits

0x65ef,	// (0x00025b7a) uni_indicator_pane_g5

0x65ef,	// (0x00025b7a) uni_indicator_pane_g6_ParamLimits

0x65ef,	// (0x00025b7a) uni_indicator_pane_g6

0xf915,	// (0x0002eea0) uni_indicator_pane_g_ParamLimits

0xe672,	// (0x0002dbfd) popup_tmo_note_window_ParamLimits

0xe672,	// (0x0002dbfd) popup_tmo_note_window

0x3f2d,	// (0x000234b8) fshwr2_bg_pane

0xcf47,	// (0x0002c4d2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf47,	// (0x0002c4d2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8f,	// (0x0002f41a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8f,	// (0x0002f41a) fshwr2_func_candi_cell_pane_g

0x7a2e,	// (0x00026fb9) bg_popup_window_pane_cp01

0x3341,	// (0x000228cc) bg_popup_window_pane_g1_cp01

0xa532,	// (0x00029abd) bg_popup_window_pane_cp22_ParamLimits

0xa532,	// (0x00029abd) bg_popup_window_pane_cp22

0xa540,	// (0x00029acb) listscroll_tmo_link_pane_ParamLimits

0xa540,	// (0x00029acb) listscroll_tmo_link_pane

0xa580,	// (0x00029b0b) popup_tmo_note_window_g1_ParamLimits

0xa580,	// (0x00029b0b) popup_tmo_note_window_g1

0xa58d,	// (0x00029b18) tmo_note_info_pane_ParamLimits

0xa58d,	// (0x00029b18) tmo_note_info_pane

0xf2e1,	// (0x0002e86c) list_tmo_note_info_pane_g1_ParamLimits

0xf2e1,	// (0x0002e86c) list_tmo_note_info_pane_g1

0xa5be,	// (0x00029b49) list_tmo_note_info_pane_g2_ParamLimits

0xa5be,	// (0x00029b49) list_tmo_note_info_pane_g2

0x0001,

0xfe94,	// (0x0002f41f) list_tmo_note_info_pane_g_ParamLimits

0xfe94,	// (0x0002f41f) list_tmo_note_info_pane_g

0xa5da,	// (0x00029b65) list_tmo_note_info_text_pane_ParamLimits

0xa5da,	// (0x00029b65) list_tmo_note_info_text_pane

0xa65b,	// (0x00029be6) list_tmo_link_pane

0xa668,	// (0x00029bf3) scroll_pane_cp20

0xa675,	// (0x00029c00) list_single_tmo_link_pane_ParamLimits

0xa675,	// (0x00029c00) list_single_tmo_link_pane

0xa685,	// (0x00029c10) list_single_tmo_link_pane_t1

0xa693,	// (0x00029c1e) list_tmo_note_info_text_pane_t1_ParamLimits

0xa693,	// (0x00029c1e) list_tmo_note_info_text_pane_t1

0xd263,	// (0x0002c7ee) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd263,	// (0x0002c7ee) aid_size_touch_scroll_bar_cp01

0xba41,	// (0x0002afcc) aid_size_touch_slider_marker

0xbf6d,	// (0x0002b4f8) popup_settings_window_ParamLimits

0xbf6d,	// (0x0002b4f8) popup_settings_window

0x0860,	// (0x0001fdeb) popup_candi_list_indi_window

0x4f5f,	// (0x000244ea) aid_touch_navi_pane_ParamLimits

0x29fd,	// (0x00021f88) rs_clock_indi_pane

0x2a06,	// (0x00021f91) sctrl_sk_bottom_pane_ParamLimits

0x2a17,	// (0x00021fa2) sctrl_sk_top_pane_ParamLimits

0x2afe,	// (0x00022089) popup_fep_tooltip_window

0xa029,	// (0x000295b4) aid_size_cell_widget_grid_ParamLimits

0xa09e,	// (0x00029629) cell_ai5_widget_pane_g1_ParamLimits

0xa09e,	// (0x00029629) cell_ai5_widget_pane_g1

0xa0f2,	// (0x0002967d) cell_ai5_widget_pane_g6_ParamLimits

0xa0fe,	// (0x00029689) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe12,	// (0x0002f39d) cell_ai5_widget_pane_g_ParamLimits

0xfe12,	// (0x0002f39d) cell_ai5_widget_pane_g

0xa230,	// (0x000297bb) cell_ai5_widget_pane_t10_ParamLimits

0xa230,	// (0x000297bb) cell_ai5_widget_pane_t10

0xa24e,	// (0x000297d9) grid_ai5_widget_pane_ParamLimits

0xa2ef,	// (0x0002987a) cell_contacts_ai5_widget_pane_ParamLimits

0xa2ef,	// (0x0002987a) cell_contacts_ai5_widget_pane

0xa4d1,	// (0x00029a5c) popup_discreet_window_t3_ParamLimits

0xa4d1,	// (0x00029a5c) popup_discreet_window_t3

0xcec8,	// (0x0002c453) popup_fshwr2_char_preview_window_ParamLimits

0xcec8,	// (0x0002c453) popup_fshwr2_char_preview_window

0xf2f8,	// (0x0002e883) tmo_note_info_pane_t1

0xf30d,	// (0x0002e898) tmo_note_info_pane_t2

0xf324,	// (0x0002e8af) tmo_note_info_pane_t3

0xa637,	// (0x00029bc2) tmo_note_info_pane_t4

0xa649,	// (0x00029bd4) tmo_note_info_pane_t5

0x0004,

0xfe99,	// (0x0002f424) tmo_note_info_pane_t

0xa65b,	// (0x00029be6) list_tmo_link_pane_ParamLimits

0xa668,	// (0x00029bf3) scroll_pane_cp20_ParamLimits

0x35ca,	// (0x00022b55) bg_popup_fep_char_preview_window_cp01

0xa6ac,	// (0x00029c37) popup_fshwr2_char_preview_window_t1

0xa6ba,	// (0x00029c45) popup_candi_list_indi_window_g1

0xa6c3,	// (0x00029c4e) bg_cell_contacts_ai5_widget_pane

0xa6cf,	// (0x00029c5a) cell_contacts_ai5_widget_pane_g1

0x80cc,	// (0x00027657) cell_contacts_ai5_widget_pane_g2

0xa6e4,	// (0x00029c6f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea4,	// (0x0002f42f) cell_contacts_ai5_widget_pane_g

0xa6f0,	// (0x00029c7b) cell_contacts_ai5_widget_pane_t1

0x3f2d,	// (0x000234b8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf39e,	// (0x0002e929) settings_container_pane

0x4bbf,	// (0x0002414a) listscroll_set_pane_copy1

0x7117,	// (0x000266a2) scroll_pane_cp121_copy1

0xa773,	// (0x00029cfe) set_content_pane_copy1

0xf3aa,	// (0x0002e935) aid_height_set_list_copy1_ParamLimits

0xf3aa,	// (0x0002e935) aid_height_set_list_copy1

0x67e7,	// (0x00025d72) aid_size_parent_copy1_ParamLimits

0x67e7,	// (0x00025d72) aid_size_parent_copy1

0xf3b6,	// (0x0002e941) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3b6,	// (0x0002e941) button_value_adjust_pane_cp6_copy1

0x4efd,	// (0x00024488) list_highlight_pane_cp2_copy1_ParamLimits

0x4efd,	// (0x00024488) list_highlight_pane_cp2_copy1

0xf3ca,	// (0x0002e955) list_set_pane_copy1_ParamLimits

0xf3ca,	// (0x0002e955) list_set_pane_copy1

0xf339,	// (0x0002e8c4) main_pane_set_t1_copy1_ParamLimits

0xf339,	// (0x0002e8c4) main_pane_set_t1_copy1

0xf373,	// (0x0002e8fe) main_pane_set_t2_copy1_ParamLimits

0xf373,	// (0x0002e8fe) main_pane_set_t2_copy1

0xf477,	// (0x0002ea02) main_pane_set_t3_copy1

0xf485,	// (0x0002ea10) main_pane_set_t4_copy1

0xf392,	// (0x0002e91d) set_content_pane_g1_copy1_ParamLimits

0xf392,	// (0x0002e91d) set_content_pane_g1_copy1

0xf493,	// (0x0002ea1e) setting_code_pane_copy1

0xa86c,	// (0x00029df7) setting_slider_graphic_pane_copy1

0xa86c,	// (0x00029df7) setting_slider_pane_copy1

0xa86c,	// (0x00029df7) setting_text_pane_copy1

0xa86c,	// (0x00029df7) setting_volume_pane_copy1

0xf493,	// (0x0002ea1e) settings_code_pane_cp2_copy1

0xf49b,	// (0x0002ea26) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0002ea26) settings_code_pane_cp_copy1

0xcf80,	// (0x0002c50b) volume_set_pane_copy1

0xf4af,	// (0x0002ea3a) volume_set_pane_g10_copy1

0xf4b7,	// (0x0002ea42) volume_set_pane_g1_copy1

0xf4bf,	// (0x0002ea4a) volume_set_pane_g2_copy1

0xf4c7,	// (0x0002ea52) volume_set_pane_g3_copy1

0xf4cf,	// (0x0002ea5a) volume_set_pane_g4_copy1

0xf4d7,	// (0x0002ea62) volume_set_pane_g5_copy1

0xf4df,	// (0x0002ea6a) volume_set_pane_g6_copy1

0xf4e7,	// (0x0002ea72) volume_set_pane_g7_copy1

0xf4ef,	// (0x0002ea7a) volume_set_pane_g8_copy1

0xf4f7,	// (0x0002ea82) volume_set_pane_g9_copy1

0x36be,	// (0x00022c49) bg_set_opt_pane_cp_copy1_ParamLimits

0x36be,	// (0x00022c49) bg_set_opt_pane_cp_copy1

0x3352,	// (0x000228dd) setting_slider_pane_t1_copy1_ParamLimits

0x3352,	// (0x000228dd) setting_slider_pane_t1_copy1

0xcf88,	// (0x0002c513) setting_slider_pane_t2_copy1_ParamLimits

0xcf88,	// (0x0002c513) setting_slider_pane_t2_copy1

0xcfa2,	// (0x0002c52d) setting_slider_pane_t3_copy1_ParamLimits

0xcfa2,	// (0x0002c52d) setting_slider_pane_t3_copy1

0xcfba,	// (0x0002c545) slider_set_pane_copy1_ParamLimits

0xcfba,	// (0x0002c545) slider_set_pane_copy1

0x3f88,	// (0x00023513) set_opt_bg_pane_g1_copy2

0x3f90,	// (0x0002351b) set_opt_bg_pane_g2_copy2

0xa8d8,	// (0x00029e63) set_opt_bg_pane_g3_copy2

0x3fa0,	// (0x0002352b) set_opt_bg_pane_g4_copy2

0x3fa8,	// (0x00023533) set_opt_bg_pane_g5_copy2

0x3fb0,	// (0x0002353b) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0002ea8a) set_opt_bg_pane_g7_copy2

0xa8ea,	// (0x00029e75) set_opt_bg_pane_g8_copy2

0xa8f4,	// (0x00029e7f) set_opt_bg_pane_g9_copy2

0x33b8,	// (0x00022943) aid_size_touch_slider_mark_copy1_ParamLimits

0x33b8,	// (0x00022943) aid_size_touch_slider_mark_copy1

0xa8fe,	// (0x00029e89) slider_set_pane_g1_copy1

0x33cc,	// (0x00022957) slider_set_pane_g2_copy1

0x24e0,	// (0x00021a6b) slider_set_pane_g3_copy1_ParamLimits

0x24e0,	// (0x00021a6b) slider_set_pane_g3_copy1

0x24f4,	// (0x00021a7f) slider_set_pane_g4_copy1_ParamLimits

0x24f4,	// (0x00021a7f) slider_set_pane_g4_copy1

0x250c,	// (0x00021a97) slider_set_pane_g5_copy1_ParamLimits

0x250c,	// (0x00021a97) slider_set_pane_g5_copy1

0x24e0,	// (0x00021a6b) slider_set_pane_g6_copy1_ParamLimits

0x24e0,	// (0x00021a6b) slider_set_pane_g6_copy1

0xcfd0,	// (0x0002c55b) slider_set_pane_g7_copy1_ParamLimits

0xcfd0,	// (0x0002c55b) slider_set_pane_g7_copy1

0x35de,	// (0x00022b69) bg_set_opt_pane_cp2_copy1

0xa907,	// (0x00029e92) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0002ea92) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0002eaa2) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0002eab2) slider_set_pane_cp_copy1

0xa940,	// (0x00029ecb) input_focus_pane_cp1_copy1

0xa949,	// (0x00029ed4) list_set_text_pane_copy1

0xa951,	// (0x00029edc) setting_text_pane_g1_copy1

0x0097,	// (0x0001f622) set_text_pane_t1_copy1

0xa940,	// (0x00029ecb) input_focus_pane_cp2_copy1

0xa951,	// (0x00029edc) setting_code_pane_g1_copy1

0xf52f,	// (0x0002eaba) setting_code_pane_t1_copy1

0x6f41,	// (0x000264cc) list_set_graphic_pane_copy1

0x35de,	// (0x00022b69) bg_set_opt_pane_cp4_copy1

0xd436,	// (0x0002c9c1) list_set_graphic_pane_g1_copy1_ParamLimits

0xd436,	// (0x0002c9c1) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0002eac8) list_set_graphic_pane_g2_copy1

0xd44e,	// (0x0002c9d9) list_set_graphic_pane_t1_copy1_ParamLimits

0xd44e,	// (0x0002c9d9) list_set_graphic_pane_t1_copy1

0x7a2e,	// (0x00026fb9) rs_clock_indi_pane_g1

0xa982,	// (0x00029f0d) rs_clock_indi_pane_t1

0xa990,	// (0x00029f1b) rs_indi_pane

0xa998,	// (0x00029f23) rs_indi_pane_g1

0xa9a1,	// (0x00029f2c) rs_indi_pane_g2

0xa9aa,	// (0x00029f35) rs_indi_pane_g3

0x0002,

0xfeab,	// (0x0002f436) rs_indi_pane_g

0x4bbf,	// (0x0002414a) bg_popup_preview_window_pane_cp03

0xa9b3,	// (0x00029f3e) popup_fep_tooltip_window_t1

0x86aa,	// (0x00027c35) popup_note2_window_g2_ParamLimits

0x86aa,	// (0x00027c35) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0002f1cf) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0002f1cf) popup_note2_window_g

0x8ba5,	// (0x00028130) bg_popup_sub_pane_cp11_ParamLimits

0x8bb2,	// (0x0002813d) cell_ai3_links_pane_g1_ParamLimits

0x8bc9,	// (0x00028154) cell_ai3_links_pane_t1

0x0097,	// (0x0001f622) set_text_pane_t1_copy1_ParamLimits

0x4ad0,	// (0x0002405b) cell_graphic_popup_pane_cp2_ParamLimits

0x4ad0,	// (0x0002405b) cell_graphic_popup_pane_cp2

0xa9c1,	// (0x00029f4c) cell_graphic_popup_pane_g1_cp2

0x3c78,	// (0x00023203) cell_graphic_popup_pane_g2_cp2

0xa9c9,	// (0x00029f54) cell_graphic_popup_pane_g3_cp2

0xa9d1,	// (0x00029f5c) cell_graphic_popup_pane_t2_cp2

0x3c89,	// (0x00023214) grid_highlight_pane_cp3_cp2

0x42cd,	// (0x00023858) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3f2d,	// (0x000234b8) main_tmo_pane_ParamLimits

0xe666,	// (0x0002dbf1) popup_tmo_big_image_note_window

0xa08d,	// (0x00029618) cell_ai5_widget_list_pane

0xa095,	// (0x00029620) cell_ai5_widget_lrg_icon_pane

0xf2f8,	// (0x0002e883) tmo_note_info_pane_t1_ParamLimits

0xf30d,	// (0x0002e898) tmo_note_info_pane_t2_ParamLimits

0xf324,	// (0x0002e8af) tmo_note_info_pane_t3_ParamLimits

0xa637,	// (0x00029bc2) tmo_note_info_pane_t4_ParamLimits

0xa649,	// (0x00029bd4) tmo_note_info_pane_t5_ParamLimits

0xfe99,	// (0x0002f424) tmo_note_info_pane_t_ParamLimits

0xf39e,	// (0x0002e929) settings_container_pane_ParamLimits

0xa938,	// (0x00029ec3) indicator_popup_pane_cp5

0xa938,	// (0x00029ec3) indicator_popup_pane_cp6

0x6f41,	// (0x000264cc) list_set_graphic_pane_copy1_ParamLimits

0x35ca,	// (0x00022b55) bg_popup_window_pane_cp23

0xa9df,	// (0x00029f6a) popup_tmo_big_image_note_window_g1

0xa9e9,	// (0x00029f74) popup_tmo_big_image_note_window_t1

0xa9f9,	// (0x00029f84) popup_tmo_big_image_note_window_t2

0xaa09,	// (0x00029f94) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb2,	// (0x0002f43d) popup_tmo_big_image_note_window_t

0x7a2e,	// (0x00026fb9) cell_ai5_widget_lrg_icon_pane_g1

0xaa19,	// (0x00029fa4) cell_ai5_widget_lrg_icon_pane_t1

0xaa27,	// (0x00029fb2) cell_ai5_widget_list_row_pane_ParamLimits

0xaa27,	// (0x00029fb2) cell_ai5_widget_list_row_pane

0xaa3e,	// (0x00029fc9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa3e,	// (0x00029fc9) cell_ai5_widget_list_row_pane_g1

0xaa4b,	// (0x00029fd6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa4b,	// (0x00029fd6) cell_ai5_widget_list_row_pane_t1

0xaa7c,	// (0x0002a007) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa7c,	// (0x0002a007) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb9,	// (0x0002f444) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb9,	// (0x0002f444) cell_ai5_widget_list_row_pane_t

0x35ca,	// (0x00022b55) main_fep_vtchi_ss_pane

0x3406,	// (0x00022991) popup_fep_char_pre_window

0x340e,	// (0x00022999) popup_fep_ituss_window

0x342f,	// (0x000229ba) popup_fep_vkbss_window

0xaaa4,	// (0x0002a02f) grid_vkbss_keypad_pane_ParamLimits

0xaaa4,	// (0x0002a02f) grid_vkbss_keypad_pane

0xaab4,	// (0x0002a03f) ituss_keypad_pane

0x345a,	// (0x000229e5) aid_vkbss_key_offset_ParamLimits

0x345a,	// (0x000229e5) aid_vkbss_key_offset

0x3466,	// (0x000229f1) cell_vkbss_key_pane_ParamLimits

0x3466,	// (0x000229f1) cell_vkbss_key_pane

0xaac3,	// (0x0002a04e) bg_cell_vkbss_key_g1_ParamLimits

0xaac3,	// (0x0002a04e) bg_cell_vkbss_key_g1

0xaacf,	// (0x0002a05a) cell_vkbss_key_3p_pane_ParamLimits

0xaacf,	// (0x0002a05a) cell_vkbss_key_3p_pane

0xaae9,	// (0x0002a074) cell_vkbss_key_g1_ParamLimits

0xaae9,	// (0x0002a074) cell_vkbss_key_g1

0xab03,	// (0x0002a08e) cell_vkbss_key_t1_ParamLimits

0xab03,	// (0x0002a08e) cell_vkbss_key_t1

0x347c,	// (0x00022a07) cell_ituss_key_pane_ParamLimits

0x347c,	// (0x00022a07) cell_ituss_key_pane

0xab2e,	// (0x0002a0b9) bg_cell_ituss_key_g1_ParamLimits

0xab2e,	// (0x0002a0b9) bg_cell_ituss_key_g1

0xab3a,	// (0x0002a0c5) cell_ituss_key_pane_g1_ParamLimits

0xab3a,	// (0x0002a0c5) cell_ituss_key_pane_g1

0x348d,	// (0x00022a18) cell_ituss_key_pane_g2_ParamLimits

0x348d,	// (0x00022a18) cell_ituss_key_pane_g2

0x0002,

0xfec0,	// (0x0002f44b) cell_ituss_key_pane_g_ParamLimits

0xfec0,	// (0x0002f44b) cell_ituss_key_pane_g

0x34b9,	// (0x00022a44) cell_ituss_key_t1_ParamLimits

0x34b9,	// (0x00022a44) cell_ituss_key_t1

0x34f3,	// (0x00022a7e) cell_ituss_key_t2_ParamLimits

0x34f3,	// (0x00022a7e) cell_ituss_key_t2

0x3524,	// (0x00022aaf) cell_ituss_key_t3_ParamLimits

0x3524,	// (0x00022aaf) cell_ituss_key_t3

0x34f3,	// (0x00022a7e) cell_ituss_key_t4_ParamLimits

0x34f3,	// (0x00022a7e) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0002f452) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0002f452) cell_ituss_key_t

0xab66,	// (0x0002a0f1) cell_vkbss_key_3p_pane_g1

0xab6e,	// (0x0002a0f9) cell_vkbss_key_3p_pane_g2

0xab76,	// (0x0002a101) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0002f45d) cell_vkbss_key_3p_pane_g

0x35ca,	// (0x00022b55) bg_popup_fep_char_preview_window_cp02

0x3567,	// (0x00022af2) popup_fep_char_pre_window_t1

0xf247,	// (0x0002e7d2) main_ai5_sk_pane

0xa6c3,	// (0x00029c4e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa6cf,	// (0x00029c5a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x80cc,	// (0x00027657) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa6e4,	// (0x00029c6f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea4,	// (0x0002f42f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6f0,	// (0x00029c7b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3f2d,	// (0x000234b8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0002ead0) main_ai5_sk_pane_g1

0x58c5,	// (0x00024e50) popup_query_code_window_g1

0x3424,	// (0x000229af) popup_fep_vkb_icf_pane

0x3438,	// (0x000229c3) popup_fep_vtchi_icf_pane

0xab87,	// (0x0002a112) bg_icf_pane

0xab93,	// (0x0002a11e) list_vkb_icf_pane

0xab9f,	// (0x0002a12a) bg_icf_pane_cp01

0xabab,	// (0x0002a136) vtchi_icf_list_pane

0xabbc,	// (0x0002a147) list_vkb_icf_pane_t1_ParamLimits

0xabbc,	// (0x0002a147) list_vkb_icf_pane_t1

0xabd2,	// (0x0002a15d) vtchi_icf_list_pane_t1_ParamLimits

0xabd2,	// (0x0002a15d) vtchi_icf_list_pane_t1

0x340e,	// (0x00022999) popup_fep_ituss_window_ParamLimits

0x3438,	// (0x000229c3) popup_fep_vtchi_icf_pane_ParamLimits

0xaab4,	// (0x0002a03f) ituss_keypad_pane_ParamLimits

0x344e,	// (0x000229d9) ituss_sks_pane

0xab87,	// (0x0002a112) bg_icf_pane_ParamLimits

0x33ea,	// (0x00022975) icf_edit_indi_pane_ParamLimits

0x33ea,	// (0x00022975) icf_edit_indi_pane

0xab93,	// (0x0002a11e) list_vkb_icf_pane_ParamLimits

0xab9f,	// (0x0002a12a) bg_icf_pane_cp01_ParamLimits

0x33f9,	// (0x00022984) icf_edit_indi_pane_cp01_ParamLimits

0x33f9,	// (0x00022984) icf_edit_indi_pane_cp01

0xabb3,	// (0x0002a13e) vtchi_query_pane

0x7cac,	// (0x00027237) icf_edit_indi_pane_g1_ParamLimits

0x7cac,	// (0x00027237) icf_edit_indi_pane_g1

0x3589,	// (0x00022b14) icf_edit_indi_pane_g2_ParamLimits

0x3589,	// (0x00022b14) icf_edit_indi_pane_g2

0x0001,

0xfeea,	// (0x0002f475) icf_edit_indi_pane_g_ParamLimits

0xfeea,	// (0x0002f475) icf_edit_indi_pane_g

0x3598,	// (0x00022b23) icf_edit_indi_pane_t1

0xabec,	// (0x0002a177) bg_input_focus_pane_cp042

0x3e5c,	// (0x000233e7) vtchi_button_pane

0xabf5,	// (0x0002a180) vtchi_query_pane_t1

0xac03,	// (0x0002a18e) vtchi_query_pane_t2

0xac11,	// (0x0002a19c) vtchi_query_pane_t3

0x0002,

0xfed9,	// (0x0002f464) vtchi_query_pane_t

0x35ca,	// (0x00022b55) bg_button_pane_cp13

0xac1f,	// (0x0002a1aa) vtchi_button_pane_g1

0x3576,	// (0x00022b01) ituss_sks_pane_g1

0x3581,	// (0x00022b0c) ituss_sks_pane_g2

0x0001,

0xfee0,	// (0x0002f46b) ituss_sks_pane_g

0xac27,	// (0x0002a1b2) ituss_sks_pane_t1

0xac35,	// (0x0002a1c0) ituss_sks_pane_t2

0x0001,

0xfee5,	// (0x0002f470) ituss_sks_pane_t

0x7491,	// (0x00026a1c) indicator_nsta_pane_cp_g1

0x749a,	// (0x00026a25) indicator_nsta_pane_cp_g2

0x74a2,	// (0x00026a2d) indicator_nsta_pane_cp_g3

0x74aa,	// (0x00026a35) indicator_nsta_pane_cp_g4

0x74b2,	// (0x00026a3d) indicator_nsta_pane_cp_g5

0x74b2,	// (0x00026a3d) indicator_nsta_pane_cp_g6

0x0005,

0xfa8e,	// (0x0002f019) indicator_nsta_pane_cp_g

0xf059,	// (0x0002e5e4) cell_graphic2_pane_t2_ParamLimits

0xf059,	// (0x0002e5e4) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x0002f326) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x0002f326) cell_graphic2_pane_t

0xf08f,	// (0x0002e61a) cell_graphic2_control_pane_t1

0xd40a,	// (0x0002c995) signal_pane_g3_ParamLimits

0xd40a,	// (0x0002c995) signal_pane_g3

0xd41e,	// (0x0002c9a9) signal_pane_g4_ParamLimits

0xd41e,	// (0x0002c9a9) signal_pane_g4

0xaa8e,	// (0x0002a019) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa8e,	// (0x0002a019) cell_ai5_widget_list_row_pane_t3

0xab54,	// (0x0002a0df) cell_ituss_key_pane_t1_ParamLimits

0xab54,	// (0x0002a0df) cell_ituss_key_pane_t1

0x550c,	// (0x00024a97) form_field_data_wide_pane_vc_t2_ParamLimits

0x550c,	// (0x00024a97) form_field_data_wide_pane_vc_t2

0x5520,	// (0x00024aab) form_field_data_wide_pane_vc_t3_ParamLimits

0x5520,	// (0x00024aab) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002ed88) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002ed88) form_field_data_wide_pane_vc_t

0x7159,	// (0x000266e4) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7159,	// (0x000266e4) form_field_slider_wide_pane_vc_t3

0x7237,	// (0x000267c2) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7237,	// (0x000267c2) form_field_popup_wide_pane_vc_t2

0x724e,	// (0x000267d9) form_field_popup_wide_pane_vc_t3_ParamLimits

0x724e,	// (0x000267d9) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7d,	// (0x0002f008) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002f008) form_field_popup_wide_pane_vc_t

0xce48,	// (0x0002c3d3) aid_fshwr2_btn_pane_ParamLimits

0xce59,	// (0x0002c3e4) aid_fshwr2_syb_pane_ParamLimits

0xce6a,	// (0x0002c3f5) aid_fshwr2_txt_pane_ParamLimits

0x3f2d,	// (0x000234b8) fshwr2_bg_pane_ParamLimits

0xce76,	// (0x0002c401) fshwr2_func_candi_pane_ParamLimits

0xce95,	// (0x0002c420) fshwr2_hwr_syb_pane_ParamLimits

0xceb0,	// (0x0002c43b) fshwr2_icf_pane_ParamLimits

0x0d9b,	// (0x00020326) list_double_graphic_pane_vc_g4_ParamLimits

0x0d9b,	// (0x00020326) list_double_graphic_pane_vc_g4

0x34ad,	// (0x00022a38) cell_ituss_key_pane_g3_ParamLimits

0x34ad,	// (0x00022a38) cell_ituss_key_pane_g3

0x3555,	// (0x00022ae0) cell_ituss_key_t5_ParamLimits

0x3555,	// (0x00022ae0) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
