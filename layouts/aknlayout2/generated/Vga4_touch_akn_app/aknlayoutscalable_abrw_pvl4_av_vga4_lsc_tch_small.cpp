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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003653e };

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
0x93c2,	// (0x0003f900) Screen

0x93ce,	// (0x0003f90c) application_window_ParamLimits

0x93ce,	// (0x0003f90c) application_window

0xb78a,	// (0x00041cc8) screen_g1

0x9406,	// (0x0003f944) area_bottom_pane_ParamLimits

0x9406,	// (0x0003f944) area_bottom_pane

0xec63,	// (0x000451a1) area_top_pane_ParamLimits

0xec63,	// (0x000451a1) area_top_pane

0xed01,	// (0x0004523f) main_pane_ParamLimits

0xed01,	// (0x0004523f) main_pane

0xb794,	// (0x00041cd2) misc_graphics

0xc1a4,	// (0x000426e2) battery_pane_ParamLimits

0xc1a4,	// (0x000426e2) battery_pane

0x364f,	// (0x00039b8d) bg_status_flat_pane_g8

0x3657,	// (0x00039b95) bg_status_flat_pane_g9

0x2a4d,	// (0x00038f8b) context_pane_ParamLimits

0x2a4d,	// (0x00038f8b) context_pane

0xc31b,	// (0x00042859) navi_pane_ParamLimits

0xc31b,	// (0x00042859) navi_pane

0xc3a5,	// (0x000428e3) signal_pane_ParamLimits

0xc3a5,	// (0x000428e3) signal_pane

0x0008,

0xf84f,	// (0x00045d8d) bg_status_flat_pane_g

0xc435,	// (0x00042973) status_pane_g1_ParamLimits

0xc435,	// (0x00042973) status_pane_g1

0xc44b,	// (0x00042989) status_pane_g2_ParamLimits

0xc44b,	// (0x00042989) status_pane_g2

0x2c86,	// (0x000391c4) status_pane_g3_ParamLimits

0x2c86,	// (0x000391c4) status_pane_g3

0x0004,

0xf77b,	// (0x00045cb9) status_pane_g_ParamLimits

0xf77b,	// (0x00045cb9) status_pane_g

0xc457,	// (0x00042995) title_pane_ParamLimits

0xc457,	// (0x00042995) title_pane

0xc4c0,	// (0x000429fe) uni_indicator_pane_ParamLimits

0xc4c0,	// (0x000429fe) uni_indicator_pane

0x28b7,	// (0x00038df5) bg_list_pane_ParamLimits

0x28b7,	// (0x00038df5) bg_list_pane

0xa4a6,	// (0x000409e4) find_pane

0x2e83,	// (0x000393c1) listscroll_app_pane_ParamLimits

0x2e83,	// (0x000393c1) listscroll_app_pane

0x28e3,	// (0x00038e21) listscroll_form_pane

0x93ae,	// (0x0003f8ec) listscroll_gen_pane_ParamLimits

0x93ae,	// (0x0003f8ec) listscroll_gen_pane

0x0390,	// (0x000368ce) listscroll_set_pane

0x41ec,	// (0x0003a72a) main_idle_act_pane

0x25b0,	// (0x00038aee) main_idle_trad_pane

0x25b0,	// (0x00038aee) main_list_empty_pane

0x28d7,	// (0x00038e15) main_midp_pane

0x28fd,	// (0x00038e3b) main_pane_g1_ParamLimits

0x28fd,	// (0x00038e3b) main_pane_g1

0xa4ae,	// (0x000409ec) popup_ai_message_window_ParamLimits

0xa4ae,	// (0x000409ec) popup_ai_message_window

0xa54e,	// (0x00040a8c) popup_fep_china_uni_window_ParamLimits

0xa54e,	// (0x00040a8c) popup_fep_china_uni_window

0x04ba,	// (0x000369f8) popup_fep_japan_candidate_window_ParamLimits

0x04ba,	// (0x000369f8) popup_fep_japan_candidate_window

0x04e4,	// (0x00036a22) popup_fep_japan_predictive_window_ParamLimits

0x04e4,	// (0x00036a22) popup_fep_japan_predictive_window

0xa5ae,	// (0x00040aec) popup_find_window

0xa5cb,	// (0x00040b09) popup_grid_graphic_window_ParamLimits

0xa5cb,	// (0x00040b09) popup_grid_graphic_window

0x0557,	// (0x00036a95) popup_large_graphic_colour_window

0xa675,	// (0x00040bb3) popup_menu_window_ParamLimits

0xa675,	// (0x00040bb3) popup_menu_window

0xa865,	// (0x00040da3) popup_note_image_window

0xa825,	// (0x00040d63) popup_note_wait_window_ParamLimits

0xa825,	// (0x00040d63) popup_note_wait_window

0xa87d,	// (0x00040dbb) popup_note_window_ParamLimits

0xa87d,	// (0x00040dbb) popup_note_window

0xa92b,	// (0x00040e69) popup_query_code_window_ParamLimits

0xa92b,	// (0x00040e69) popup_query_code_window

0x07c3,	// (0x00036d01) popup_query_data_code_window_ParamLimits

0x07c3,	// (0x00036d01) popup_query_data_code_window

0xa96b,	// (0x00040ea9) popup_query_data_window_ParamLimits

0xa96b,	// (0x00040ea9) popup_query_data_window

0xa9ff,	// (0x00040f3d) popup_query_sat_info_window_ParamLimits

0xa9ff,	// (0x00040f3d) popup_query_sat_info_window

0xaaaa,	// (0x00040fe8) popup_snote_single_graphic_window_ParamLimits

0xaaaa,	// (0x00040fe8) popup_snote_single_graphic_window

0xaaaa,	// (0x00040fe8) popup_snote_single_text_window_ParamLimits

0xaaaa,	// (0x00040fe8) popup_snote_single_text_window

0x085e,	// (0x00036d9c) popup_sub_window_general

0x09a4,	// (0x00036ee2) popup_window_general_ParamLimits

0x09a4,	// (0x00036ee2) popup_window_general

0x290b,	// (0x00038e49) power_save_pane

0x0237,	// (0x00036775) control_pane_g1_ParamLimits

0x0237,	// (0x00036775) control_pane_g1

0x025a,	// (0x00036798) control_pane_g2_ParamLimits

0x025a,	// (0x00036798) control_pane_g2

0x287a,	// (0x00038db8) control_pane_g3_ParamLimits

0x287a,	// (0x00038db8) control_pane_g3

0x0007,

0xf763,	// (0x00045ca1) control_pane_g_ParamLimits

0xf763,	// (0x00045ca1) control_pane_g

0xa3bd,	// (0x000408fb) control_pane_t1_ParamLimits

0xa3bd,	// (0x000408fb) control_pane_t1

0xa40d,	// (0x0004094b) control_pane_t2_ParamLimits

0xa40d,	// (0x0004094b) control_pane_t2

0x0002,

0xf774,	// (0x00045cb2) control_pane_t_ParamLimits

0xf774,	// (0x00045cb2) control_pane_t

0x279f,	// (0x00038cdd) navi_navi_volume_pane_cp1

0x27a7,	// (0x00038ce5) status_small_icon_pane

0x27af,	// (0x00038ced) status_small_pane_g1_ParamLimits

0x27af,	// (0x00038ced) status_small_pane_g1

0x27e3,	// (0x00038d21) status_small_pane_g2_ParamLimits

0x27e3,	// (0x00038d21) status_small_pane_g2

0x27ef,	// (0x00038d2d) status_small_pane_g3_ParamLimits

0x27ef,	// (0x00038d2d) status_small_pane_g3

0xa36f,	// (0x000408ad) status_small_pane_g4_ParamLimits

0xa36f,	// (0x000408ad) status_small_pane_g4

0xa37d,	// (0x000408bb) status_small_pane_g5_ParamLimits

0xa37d,	// (0x000408bb) status_small_pane_g5

0x2815,	// (0x00038d53) status_small_pane_g6_ParamLimits

0x2815,	// (0x00038d53) status_small_pane_g6

0x0007,

0xf752,	// (0x00045c90) status_small_pane_g_ParamLimits

0xf752,	// (0x00045c90) status_small_pane_g

0x2844,	// (0x00038d82) status_small_pane_t1

0xa393,	// (0x000408d1) status_small_wait_pane_ParamLimits

0xa393,	// (0x000408d1) status_small_wait_pane

0xa160,	// (0x0004069e) aid_levels_signal_ParamLimits

0xa160,	// (0x0004069e) aid_levels_signal

0xa178,	// (0x000406b6) signal_pane_g1_ParamLimits

0xa178,	// (0x000406b6) signal_pane_g1

0xa193,	// (0x000406d1) signal_pane_g2_ParamLimits

0xa193,	// (0x000406d1) signal_pane_g2

0x0003,

0xf6e3,	// (0x00045c21) signal_pane_g_ParamLimits

0xf6e3,	// (0x00045c21) signal_pane_g

0xf35d,	// (0x0004589b) context_pane_g1

0x95f2,	// (0x0003fb30) title_pane_g1

0x9635,	// (0x0003fb73) title_pane_t1

0xb7aa,	// (0x00041ce8) title_pane_t2

0xb7d0,	// (0x00041d0e) title_pane_t3

0x0002,

0xf532,	// (0x00045a70) title_pane_t

0xc4e8,	// (0x00042a26) aid_levels_battery_ParamLimits

0xc4e8,	// (0x00042a26) aid_levels_battery

0xc504,	// (0x00042a42) battery_pane_g1_ParamLimits

0xc504,	// (0x00042a42) battery_pane_g1

0xc521,	// (0x00042a5f) battery_pane_g2_ParamLimits

0xc521,	// (0x00042a5f) battery_pane_g2

0x0001,

0xf786,	// (0x00045cc4) battery_pane_g_ParamLimits

0xf786,	// (0x00045cc4) battery_pane_g

0xc753,	// (0x00042c91) uni_indicator_pane_g1

0xc769,	// (0x00042ca7) uni_indicator_pane_g2

0xc77f,	// (0x00042cbd) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00045e35) uni_indicator_pane_g

0x2413,	// (0x00038951) navi_icon_pane_ParamLimits

0x2413,	// (0x00038951) navi_icon_pane

0x235a,	// (0x00038898) navi_midp_pane

0x242f,	// (0x0003896d) navi_navi_pane

0x2439,	// (0x00038977) navi_text_pane_ParamLimits

0x2439,	// (0x00038977) navi_text_pane

0xb78a,	// (0x00041cc8) status_small_wait_pane_g1

0xbaf1,	// (0x0004202f) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00045e30) status_small_wait_pane_g

0xc6f2,	// (0x00042c30) navi_navi_icon_text_pane

0xc6fa,	// (0x00042c38) navi_navi_pane_g1_ParamLimits

0xc6fa,	// (0x00042c38) navi_navi_pane_g1

0xc70c,	// (0x00042c4a) navi_navi_pane_g2_ParamLimits

0xc70c,	// (0x00042c4a) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00045dfe) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00045dfe) navi_navi_pane_g

0x3cd8,	// (0x0003a216) navi_navi_tabs_pane

0xc71e,	// (0x00042c5c) navi_navi_text_pane

0xc6f2,	// (0x00042c30) navi_navi_volume_pane

0xc6e0,	// (0x00042c1e) navi_text_pane_t1

0xc6d4,	// (0x00042c12) navi_icon_pane_g1

0x3bcf,	// (0x0003a10d) navi_navi_text_pane_t1

0xade9,	// (0x00041327) navi_navi_volume_pane_g1

0xadf1,	// (0x0004132f) volume_small_pane

0xc630,	// (0x00042b6e) navi_navi_icon_text_pane_g1

0xc638,	// (0x00042b76) navi_navi_icon_text_pane_t1

0x242f,	// (0x0003896d) navi_tabs_2_long_pane

0x242f,	// (0x0003896d) navi_tabs_2_pane

0x242f,	// (0x0003896d) navi_tabs_3_long_pane

0x242f,	// (0x0003896d) navi_tabs_3_pane

0x242f,	// (0x0003896d) navi_tabs_4_pane

0xadc9,	// (0x00041307) tabs_2_active_pane_ParamLimits

0xadc9,	// (0x00041307) tabs_2_active_pane

0xadd9,	// (0x00041317) tabs_2_passive_pane_ParamLimits

0xadd9,	// (0x00041317) tabs_2_passive_pane

0xad97,	// (0x000412d5) tabs_3_active_pane_ParamLimits

0xad97,	// (0x000412d5) tabs_3_active_pane

0xada7,	// (0x000412e5) tabs_3_passive_pane_ParamLimits

0xada7,	// (0x000412e5) tabs_3_passive_pane

0xadb8,	// (0x000412f6) tabs_3_passive_pane_cp_ParamLimits

0xadb8,	// (0x000412f6) tabs_3_passive_pane_cp

0xad53,	// (0x00041291) tabs_4_active_pane_ParamLimits

0xad53,	// (0x00041291) tabs_4_active_pane

0xad64,	// (0x000412a2) tabs_4_passive_pane_ParamLimits

0xad64,	// (0x000412a2) tabs_4_passive_pane

0xad75,	// (0x000412b3) tabs_4_passive_pane_cp_ParamLimits

0xad75,	// (0x000412b3) tabs_4_passive_pane_cp

0xad86,	// (0x000412c4) tabs_4_passive_pane_cp2_ParamLimits

0xad86,	// (0x000412c4) tabs_4_passive_pane_cp2

0xad2f,	// (0x0004126d) tabs_2_long_active_pane_ParamLimits

0xad2f,	// (0x0004126d) tabs_2_long_active_pane

0xad41,	// (0x0004127f) tabs_2_long_passive_pane_ParamLimits

0xad41,	// (0x0004127f) tabs_2_long_passive_pane

0xacf6,	// (0x00041234) tabs_3_long_active_pane_ParamLimits

0xacf6,	// (0x00041234) tabs_3_long_active_pane

0xad09,	// (0x00041247) tabs_3_long_passive_pane_ParamLimits

0xad09,	// (0x00041247) tabs_3_long_passive_pane

0xad1c,	// (0x0004125a) tabs_3_long_passive_pane_cp_ParamLimits

0xad1c,	// (0x0004125a) tabs_3_long_passive_pane_cp

0x0b26,	// (0x00037064) volume_small_pane_g1

0xaca5,	// (0x000411e3) volume_small_pane_g2

0xacae,	// (0x000411ec) volume_small_pane_g3

0xacb7,	// (0x000411f5) volume_small_pane_g4

0xacc0,	// (0x000411fe) volume_small_pane_g5

0xacc9,	// (0x00041207) volume_small_pane_g6

0xacd2,	// (0x00041210) volume_small_pane_g7

0xacdb,	// (0x00041219) volume_small_pane_g8

0xace4,	// (0x00041222) volume_small_pane_g9

0xaced,	// (0x0004122b) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00045dca) volume_small_pane_g

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp2_ParamLimits

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp2

0x96c1,	// (0x0003fbff) tabs_3_active_pane_g1

0x96c9,	// (0x0003fc07) tabs_3_active_pane_t1

0xb7e2,	// (0x00041d20) bg_passive_tab_pane_cp2_ParamLimits

0xb7e2,	// (0x00041d20) bg_passive_tab_pane_cp2

0x96c1,	// (0x0003fbff) tabs_3_passive_pane_g1

0x96c9,	// (0x0003fc07) tabs_3_passive_pane_t1

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp3_ParamLimits

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp3

0x96db,	// (0x0003fc19) tabs_4_active_pane_g1

0x96e3,	// (0x0003fc21) tabs_4_active_pane_t1

0xb7e2,	// (0x00041d20) bg_passive_tab_pane_cp3_ParamLimits

0xb7e2,	// (0x00041d20) bg_passive_tab_pane_cp3

0x96db,	// (0x0003fc19) tabs_4_1_passive_pane_g1

0x96e3,	// (0x0003fc21) tabs_4_1_passive_pane_t1

0x28d7,	// (0x00038e15) list_highlight_pane_cp2

0xc812,	// (0x00042d50) list_set_pane_ParamLimits

0xc812,	// (0x00042d50) list_set_pane

0xc8d4,	// (0x00042e12) main_pane_set_t1_ParamLimits

0xc8d4,	// (0x00042e12) main_pane_set_t1

0xc8f4,	// (0x00042e32) main_pane_set_t2_ParamLimits

0xc8f4,	// (0x00042e32) main_pane_set_t2

0xc908,	// (0x00042e46) main_pane_set_t3_ParamLimits

0xc908,	// (0x00042e46) main_pane_set_t3

0xc91c,	// (0x00042e5a) main_pane_set_t4_ParamLimits

0xc91c,	// (0x00042e5a) main_pane_set_t4

0x0003,

0xf95c,	// (0x00045e9a) main_pane_set_t_ParamLimits

0xf95c,	// (0x00045e9a) main_pane_set_t

0xc930,	// (0x00042e6e) setting_code_pane

0x433a,	// (0x0003a878) setting_slider_graphic_pane

0x433a,	// (0x0003a878) setting_slider_pane

0x433a,	// (0x0003a878) setting_text_pane

0x433a,	// (0x0003a878) setting_volume_pane

0xee10,	// (0x0004534e) volume_set_pane

0xb7f0,	// (0x00041d2e) bg_set_opt_pane_cp

0xee1a,	// (0x00045358) setting_slider_pane_t1

0xee33,	// (0x00045371) setting_slider_pane_t2

0xee4d,	// (0x0004538b) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00045a77) setting_slider_pane_t

0xee65,	// (0x000453a3) slider_set_pane

0xb794,	// (0x00041cd2) bg_set_opt_pane_cp2

0xb7fe,	// (0x00041d3c) setting_slider_graphic_pane_g1

0xee7b,	// (0x000453b9) setting_slider_graphic_pane_t1

0xee8b,	// (0x000453c9) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00045a7e) setting_slider_graphic_pane_t

0xee9b,	// (0x000453d9) slider_set_pane_cp

0xb794,	// (0x00041cd2) input_focus_pane_cp1

0x41d3,	// (0x0003a711) list_set_text_pane

0xb78a,	// (0x00041cc8) setting_text_pane_g1

0xb794,	// (0x00041cd2) input_focus_pane_cp2

0xb78a,	// (0x00041cc8) setting_code_pane_g1

0xb807,	// (0x00041d45) setting_code_pane_t1

0xd270,	// (0x000437ae) set_text_pane_t1_ParamLimits

0xd270,	// (0x000437ae) set_text_pane_t1

0xbe8a,	// (0x000423c8) set_opt_bg_pane_g1

0xbe92,	// (0x000423d0) set_opt_bg_pane_g2

0x41ab,	// (0x0003a6e9) set_opt_bg_pane_g3

0xbea2,	// (0x000423e0) set_opt_bg_pane_g4

0xbeaa,	// (0x000423e8) set_opt_bg_pane_g5

0xbeb2,	// (0x000423f0) set_opt_bg_pane_g6

0x41b5,	// (0x0003a6f3) set_opt_bg_pane_g7

0x41bf,	// (0x0003a6fd) set_opt_bg_pane_g8

0x41c9,	// (0x0003a707) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00045e87) set_opt_bg_pane_g

0x419e,	// (0x0003a6dc) slider_set_pane_g1

0x0d32,	// (0x00037270) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00045e78) slider_set_pane_g

0x0c92,	// (0x000371d0) volume_set_pane_g1

0x0c9c,	// (0x000371da) volume_set_pane_g2

0x0ca6,	// (0x000371e4) volume_set_pane_g3

0x0cb0,	// (0x000371ee) volume_set_pane_g4

0x0cba,	// (0x000371f8) volume_set_pane_g5

0x0cc4,	// (0x00037202) volume_set_pane_g6

0x0cce,	// (0x0003720c) volume_set_pane_g7

0x0cd8,	// (0x00037216) volume_set_pane_g8

0x0ce2,	// (0x00037220) volume_set_pane_g9

0x0cec,	// (0x0003722a) volume_set_pane_g10

0x0009,

0xf912,	// (0x00045e50) volume_set_pane_g

0x96f5,	// (0x0003fc33) indicator_pane_ParamLimits

0x96f5,	// (0x0003fc33) indicator_pane

0x9721,	// (0x0003fc5f) main_idle_pane_g2_ParamLimits

0x9721,	// (0x0003fc5f) main_idle_pane_g2

0x9759,	// (0x0003fc97) main_pane_idle_g1_ParamLimits

0x9759,	// (0x0003fc97) main_pane_idle_g1

0xb815,	// (0x00041d53) popup_clock_digital_analogue_window_ParamLimits

0xb815,	// (0x00041d53) popup_clock_digital_analogue_window

0x9783,	// (0x0003fcc1) soft_indicator_pane_ParamLimits

0x9783,	// (0x0003fcc1) soft_indicator_pane

0x979f,	// (0x0003fcdd) wallpaper_pane_ParamLimits

0x979f,	// (0x0003fcdd) wallpaper_pane

0xb78a,	// (0x00041cc8) wallpaper_pane_g1

0x97b1,	// (0x0003fcef) indicator_pane_g1_ParamLimits

0x97b1,	// (0x0003fcef) indicator_pane_g1

0x4614,	// (0x0003ab52) navi_navi_icon_text_pane_srt_g1

0xb843,	// (0x00041d81) soft_indicator_pane_t1

0xb85d,	// (0x00041d9b) aid_ps_area_pane

0x97ca,	// (0x0003fd08) aid_ps_clock_pane

0xb86e,	// (0x00041dac) aid_ps_indicator_pane

0xb87a,	// (0x00041db8) indicator_ps_pane_ParamLimits

0xb87a,	// (0x00041db8) indicator_ps_pane

0xb889,	// (0x00041dc7) power_save_pane_g1_ParamLimits

0xb889,	// (0x00041dc7) power_save_pane_g1

0xb895,	// (0x00041dd3) power_save_pane_g2_ParamLimits

0xb895,	// (0x00041dd3) power_save_pane_g2

0xec43,	// (0x00045181) aid_navinavi_width_pane

0xb85d,	// (0x00041d9b) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00045a83) power_save_pane_g_ParamLimits

0xf545,	// (0x00045a83) power_save_pane_g

0xb8a3,	// (0x00041de1) power_save_pane_t1_ParamLimits

0xb8a3,	// (0x00041de1) power_save_pane_t1

0x97ca,	// (0x0003fd08) aid_ps_clock_pane_ParamLimits

0xb86e,	// (0x00041dac) aid_ps_indicator_pane_ParamLimits

0xb8b5,	// (0x00041df3) power_save_pane_t4_ParamLimits

0xb8b5,	// (0x00041df3) power_save_pane_t4

0x0001,

0xf54a,	// (0x00045a88) power_save_pane_t_ParamLimits

0xf54a,	// (0x00045a88) power_save_pane_t

0xb8df,	// (0x00041e1d) power_save_t3_ParamLimits

0xb8df,	// (0x00041e1d) power_save_t3

0xb8ca,	// (0x00041e08) power_save_t2_ParamLimits

0xb8ca,	// (0x00041e08) power_save_t2

0xb8f4,	// (0x00041e32) indicator_ps_pane_g1

0x97d8,	// (0x0003fd16) ai_gene_pane_ParamLimits

0x97d8,	// (0x0003fd16) ai_gene_pane

0x97ef,	// (0x0003fd2d) ai_links_pane_ParamLimits

0x97ef,	// (0x0003fd2d) ai_links_pane

0x9807,	// (0x0003fd45) indicator_pane_cp1_ParamLimits

0x9807,	// (0x0003fd45) indicator_pane_cp1

0x9816,	// (0x0003fd54) main_pane_idle_g1_cp_ParamLimits

0x9816,	// (0x0003fd54) main_pane_idle_g1_cp

0xb8fd,	// (0x00041e3b) popup_ai_links_title_window

0x982e,	// (0x0003fd6c) soft_indicator_pane_cp1_ParamLimits

0x982e,	// (0x0003fd6c) soft_indicator_pane_cp1

0x3f87,	// (0x0003a4c5) ai_links_pane_g1

0x3f90,	// (0x0003a4ce) grid_ai_links_pane

0xc74a,	// (0x00042c88) ai_gene_pane_1

0x3f75,	// (0x0003a4b3) ai_gene_pane_2

0x3f7e,	// (0x0003a4bc) list_highlight_pane_cp4

0xc726,	// (0x00042c64) cell_ai_link_pane_ParamLimits

0xc726,	// (0x00042c64) cell_ai_link_pane

0x3f44,	// (0x0003a482) cell_ai_link_pane_g1

0xbaf1,	// (0x0004202f) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00045e2b) cell_ai_link_pane_g

0xb794,	// (0x00041cd2) grid_highlight_cp2

0xb794,	// (0x00041cd2) bg_popup_sub_pane_cp1

0xb914,	// (0x00041e52) popup_ai_links_title_window_t1

0x3e90,	// (0x0003a3ce) ai_gene_pane_1_g1_ParamLimits

0x3e90,	// (0x0003a3ce) ai_gene_pane_1_g1

0x3e9c,	// (0x0003a3da) ai_gene_pane_1_g2_ParamLimits

0x3e9c,	// (0x0003a3da) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00045e21) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00045e21) ai_gene_pane_1_g

0x3ea9,	// (0x0003a3e7) ai_gene_pane_1_t1_ParamLimits

0x3ea9,	// (0x0003a3e7) ai_gene_pane_1_t1

0x3edd,	// (0x0003a41b) grid_ai_soft_ind_pane

0x3e7b,	// (0x0003a3b9) ai_gene_pane_2_t1_ParamLimits

0x3e7b,	// (0x0003a3b9) ai_gene_pane_2_t1

0x9842,	// (0x0003fd80) main_pane_empty_t1_ParamLimits

0x9842,	// (0x0003fd80) main_pane_empty_t1

0x985a,	// (0x0003fd98) main_pane_empty_t2_ParamLimits

0x985a,	// (0x0003fd98) main_pane_empty_t2

0x986f,	// (0x0003fdad) main_pane_empty_t3_ParamLimits

0x986f,	// (0x0003fdad) main_pane_empty_t3

0x9881,	// (0x0003fdbf) main_pane_empty_t4_ParamLimits

0x9881,	// (0x0003fdbf) main_pane_empty_t4

0x9893,	// (0x0003fdd1) main_pane_empty_t5_ParamLimits

0x9893,	// (0x0003fdd1) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00045a8d) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00045a8d) main_pane_empty_t

0xbf19,	// (0x00042457) bg_popup_window_pane_ParamLimits

0xbf19,	// (0x00042457) bg_popup_window_pane

0x3bdd,	// (0x0003a11b) find_popup_pane_cp2_ParamLimits

0x3bdd,	// (0x0003a11b) find_popup_pane_cp2

0x3be9,	// (0x0003a127) heading_pane_ParamLimits

0x3be9,	// (0x0003a127) heading_pane

0xb794,	// (0x00041cd2) bg_popup_sub_pane

0xc655,	// (0x00042b93) bg_popup_window_pane_g1_ParamLimits

0xc655,	// (0x00042b93) bg_popup_window_pane_g1

0xc664,	// (0x00042ba2) bg_popup_window_pane_g2_ParamLimits

0xc664,	// (0x00042ba2) bg_popup_window_pane_g2

0xc670,	// (0x00042bae) bg_popup_window_pane_g3_ParamLimits

0xc670,	// (0x00042bae) bg_popup_window_pane_g3

0xc67c,	// (0x00042bba) bg_popup_window_pane_g4_ParamLimits

0xc67c,	// (0x00042bba) bg_popup_window_pane_g4

0xc68b,	// (0x00042bc9) bg_popup_window_pane_g5_ParamLimits

0xc68b,	// (0x00042bc9) bg_popup_window_pane_g5

0xc69b,	// (0x00042bd9) bg_popup_window_pane_g6_ParamLimits

0xc69b,	// (0x00042bd9) bg_popup_window_pane_g6

0xc6a7,	// (0x00042be5) bg_popup_window_pane_g7_ParamLimits

0xc6a7,	// (0x00042be5) bg_popup_window_pane_g7

0xc6b6,	// (0x00042bf4) bg_popup_window_pane_g8_ParamLimits

0xc6b6,	// (0x00042bf4) bg_popup_window_pane_g8

0xc6c5,	// (0x00042c03) bg_popup_window_pane_g9_ParamLimits

0xc6c5,	// (0x00042c03) bg_popup_window_pane_g9

0x3bc3,	// (0x0003a101) bg_popup_window_pane_g10_ParamLimits

0x3bc3,	// (0x0003a101) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00045de9) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00045de9) bg_popup_window_pane_g

0x3aec,	// (0x0003a02a) bg_popup_heading_pane_ParamLimits

0x3aec,	// (0x0003a02a) bg_popup_heading_pane

0x0e5d,	// (0x0003739b) tabs_4_passive_pane_cp_srt_ParamLimits

0x0e5d,	// (0x0003739b) tabs_4_passive_pane_cp_srt

0x0e6f,	// (0x000373ad) tabs_4_passive_pane_srt_ParamLimits

0x3b00,	// (0x0003a03e) heading_pane_g2

0x0e6f,	// (0x000373ad) tabs_4_passive_pane_srt

0x2e83,	// (0x000393c1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2e83,	// (0x000393c1) bg_passive_tab_pane_cp3_srt

0x3b08,	// (0x0003a046) heading_pane_t1_ParamLimits

0x3b08,	// (0x0003a046) heading_pane_t1

0x3b1f,	// (0x0003a05d) heading_pane_t2_ParamLimits

0x3b1f,	// (0x0003a05d) heading_pane_t2

0x0001,

0xf8a6,	// (0x00045de4) heading_pane_t_ParamLimits

0xf8a6,	// (0x00045de4) heading_pane_t

0x3617,	// (0x00039b55) bg_popup_heading_pane_g1

0x36c6,	// (0x00039c04) bg_popup_heading_pane_g2

0x36d0,	// (0x00039c0e) bg_popup_heading_pane_g3

0x36da,	// (0x00039c18) bg_popup_heading_pane_g4

0x36e4,	// (0x00039c22) bg_popup_heading_pane_g5

0x36ee,	// (0x00039c2c) bg_popup_heading_pane_g6

0x36f6,	// (0x00039c34) bg_popup_heading_pane_g7

0x36fe,	// (0x00039c3c) bg_popup_heading_pane_g8

0x3708,	// (0x00039c46) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00045da0) bg_popup_heading_pane_g

0x2e0f,	// (0x0003934d) bg_popup_sub_pane_g1

0x2e1f,	// (0x0003935d) bg_popup_sub_pane_g2

0x2e17,	// (0x00039355) bg_popup_sub_pane_g3

0x2e2f,	// (0x0003936d) bg_popup_sub_pane_g4

0x2e27,	// (0x00039365) bg_popup_sub_pane_g5

0x2e37,	// (0x00039375) bg_popup_sub_pane_g6

0x2e3f,	// (0x0003937d) bg_popup_sub_pane_g7

0x2e4f,	// (0x0003938d) bg_popup_sub_pane_g8

0x2e47,	// (0x00039385) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00045d7a) bg_popup_sub_pane_g

0xb7e2,	// (0x00041d20) bg_popup_window_pane_cp5_ParamLimits

0xb7e2,	// (0x00041d20) bg_popup_window_pane_cp5

0xb931,	// (0x00041e6f) popup_note_window_g1_ParamLimits

0xb931,	// (0x00041e6f) popup_note_window_g1

0xb93d,	// (0x00041e7b) popup_note_window_t1_ParamLimits

0xb93d,	// (0x00041e7b) popup_note_window_t1

0xb953,	// (0x00041e91) popup_note_window_t2_ParamLimits

0xb953,	// (0x00041e91) popup_note_window_t2

0xb969,	// (0x00041ea7) popup_note_window_t3_ParamLimits

0xb969,	// (0x00041ea7) popup_note_window_t3

0xb97f,	// (0x00041ebd) popup_note_window_t4_ParamLimits

0xb97f,	// (0x00041ebd) popup_note_window_t4

0xb9a7,	// (0x00041ee5) popup_note_window_t5_ParamLimits

0xb9a7,	// (0x00041ee5) popup_note_window_t5

0x0004,

0xf55a,	// (0x00045a98) popup_note_window_t_ParamLimits

0xf55a,	// (0x00045a98) popup_note_window_t

0xb9f1,	// (0x00041f2f) bg_popup_window_pane_cp6_ParamLimits

0xb9f1,	// (0x00041f2f) bg_popup_window_pane_cp6

0x3593,	// (0x00039ad1) popup_note_image_window_g1_ParamLimits

0x3593,	// (0x00039ad1) popup_note_image_window_g1

0x359f,	// (0x00039add) popup_note_image_window_g2_ParamLimits

0x359f,	// (0x00039add) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00045d6e) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00045d6e) popup_note_image_window_g

0x35b8,	// (0x00039af6) popup_note_image_window_t1_ParamLimits

0x35b8,	// (0x00039af6) popup_note_image_window_t1

0x35d1,	// (0x00039b0f) popup_note_image_window_t2_ParamLimits

0x35d1,	// (0x00039b0f) popup_note_image_window_t2

0x35ea,	// (0x00039b28) popup_note_image_window_t3_ParamLimits

0x35ea,	// (0x00039b28) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00045d73) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00045d73) popup_note_image_window_t

0x3453,	// (0x00039991) bg_popup_window_pane_cp7_ParamLimits

0x3453,	// (0x00039991) bg_popup_window_pane_cp7

0x3483,	// (0x000399c1) popup_note_wait_window_g1_ParamLimits

0x3483,	// (0x000399c1) popup_note_wait_window_g1

0x348f,	// (0x000399cd) popup_note_wait_window_g2_ParamLimits

0x348f,	// (0x000399cd) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00045d5c) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00045d5c) popup_note_wait_window_g

0x34a7,	// (0x000399e5) popup_note_wait_window_t1_ParamLimits

0x34a7,	// (0x000399e5) popup_note_wait_window_t1

0x34ce,	// (0x00039a0c) popup_note_wait_window_t2_ParamLimits

0x34ce,	// (0x00039a0c) popup_note_wait_window_t2

0x34ec,	// (0x00039a2a) popup_note_wait_window_t3_ParamLimits

0x34ec,	// (0x00039a2a) popup_note_wait_window_t3

0x34ff,	// (0x00039a3d) popup_note_wait_window_t4_ParamLimits

0x34ff,	// (0x00039a3d) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00045d63) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00045d63) popup_note_wait_window_t

0x3524,	// (0x00039a62) wait_bar_pane_ParamLimits

0x3524,	// (0x00039a62) wait_bar_pane

0xb794,	// (0x00041cd2) wait_anim_pane

0xb794,	// (0x00041cd2) wait_border_pane

0xb78a,	// (0x00041cc8) wait_anim_pane_g1

0xb78a,	// (0x00041cc8) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x00045c1c) wait_anim_pane_g

0x33f7,	// (0x00039935) wait_border_pane_g1

0x3402,	// (0x00039940) wait_border_pane_g2

0x340b,	// (0x00039949) wait_border_pane_g3

0x0002,

0xf817,	// (0x00045d55) wait_border_pane_g

0x3261,	// (0x0003979f) bg_popup_window_pane_cp16_ParamLimits

0x3261,	// (0x0003979f) bg_popup_window_pane_cp16

0x3361,	// (0x0003989f) indicator_popup_pane_cp4_ParamLimits

0x3361,	// (0x0003989f) indicator_popup_pane_cp4

0x3375,	// (0x000398b3) popup_query_data_window_t1_ParamLimits

0x3375,	// (0x000398b3) popup_query_data_window_t1

0x3387,	// (0x000398c5) popup_query_data_window_t2_ParamLimits

0x3387,	// (0x000398c5) popup_query_data_window_t2

0x33a0,	// (0x000398de) popup_query_data_window_t3_ParamLimits

0x33a0,	// (0x000398de) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00045d4e) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00045d4e) popup_query_data_window_t

0x33ba,	// (0x000398f8) query_popup_data_pane_ParamLimits

0x33ba,	// (0x000398f8) query_popup_data_pane

0x33ce,	// (0x0003990c) query_popup_data_pane_cp1_ParamLimits

0x33ce,	// (0x0003990c) query_popup_data_pane_cp1

0x3261,	// (0x0003979f) bg_popup_window_pane_cp10_ParamLimits

0x3261,	// (0x0003979f) bg_popup_window_pane_cp10

0x3293,	// (0x000397d1) indicator_popup_pane_ParamLimits

0x3293,	// (0x000397d1) indicator_popup_pane

0x32b5,	// (0x000397f3) popup_query_code_window_t1_ParamLimits

0x32b5,	// (0x000397f3) popup_query_code_window_t1

0x32cf,	// (0x0003980d) popup_query_code_window_t2_ParamLimits

0x32cf,	// (0x0003980d) popup_query_code_window_t2

0x3318,	// (0x00039856) popup_query_code_window_t3_ParamLimits

0x3318,	// (0x00039856) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00045d47) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00045d47) popup_query_code_window_t

0x3347,	// (0x00039885) query_popup_pane_ParamLimits

0x3347,	// (0x00039885) query_popup_pane

0xb9f1,	// (0x00041f2f) bg_popup_window_pane_cp15_ParamLimits

0xb9f1,	// (0x00041f2f) bg_popup_window_pane_cp15

0xba11,	// (0x00041f4f) indicator_popup_pane_cp1_ParamLimits

0xba11,	// (0x00041f4f) indicator_popup_pane_cp1

0xba24,	// (0x00041f62) indicator_popup_pane_cp2_ParamLimits

0xba24,	// (0x00041f62) indicator_popup_pane_cp2

0xba3f,	// (0x00041f7d) popup_query_data_code_window_g1_ParamLimits

0xba3f,	// (0x00041f7d) popup_query_data_code_window_g1

0xba52,	// (0x00041f90) popup_query_data_code_window_t1_ParamLimits

0xba52,	// (0x00041f90) popup_query_data_code_window_t1

0xba64,	// (0x00041fa2) popup_query_data_code_window_t2_ParamLimits

0xba64,	// (0x00041fa2) popup_query_data_code_window_t2

0xba76,	// (0x00041fb4) popup_query_data_code_window_t3_ParamLimits

0xba76,	// (0x00041fb4) popup_query_data_code_window_t3

0xba8c,	// (0x00041fca) popup_query_data_code_window_t4_ParamLimits

0xba8c,	// (0x00041fca) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00045aa3) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00045aa3) popup_query_data_code_window_t

0x0a12,	// (0x00036f50) list_single_midp_graphic_pane_g3

0xbaa6,	// (0x00041fe4) query_popup_data_pane_cp2_ParamLimits

0xbab9,	// (0x00041ff7) query_popup_pane_cp2_ParamLimits

0xbab9,	// (0x00041ff7) query_popup_pane_cp2

0xb794,	// (0x00041cd2) bg_popup_window_pane_cp11

0x3245,	// (0x00039783) heading_pane_cp5

0x324d,	// (0x0003978b) listscroll_popup_info_pane

0xb794,	// (0x00041cd2) input_focus_pane_cp3

0xbad4,	// (0x00042012) query_popup_pane_t1

0xbae2,	// (0x00042020) list_popup_info_pane_ParamLimits

0xbae2,	// (0x00042020) list_popup_info_pane

0xbaf1,	// (0x0004202f) listscroll_popup_info_pane_g1

0xbaf9,	// (0x00042037) scroll_pane_cp7

0xbb03,	// (0x00042041) popup_info_list_pane_t1_ParamLimits

0xbb03,	// (0x00042041) popup_info_list_pane_t1

0xbb1d,	// (0x0004205b) popup_info_list_pane_t2_ParamLimits

0xbb1d,	// (0x0004205b) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00045aac) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00045aac) popup_info_list_pane_t

0xb794,	// (0x00041cd2) bg_popup_window_pane_cp12

0x462e,	// (0x0003ab6c) find_popup_pane

0xb7f0,	// (0x00041d2e) bg_popup_window_pane_cp3

0xbb37,	// (0x00042075) heading_pane_cp3

0xbb46,	// (0x00042084) listscroll_popup_graphic_pane

0xb794,	// (0x00041cd2) bg_popup_window_pane_cp4

0x98f5,	// (0x0003fe33) heading_pane_cp4

0xbb56,	// (0x00042094) listscroll_popup_colour_pane

0x98ff,	// (0x0003fe3d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x98ff,	// (0x0003fe3d) cell_large_graphic_colour_none_popup_pane

0x9913,	// (0x0003fe51) grid_large_graphic_colour_popup_pane_ParamLimits

0x9913,	// (0x0003fe51) grid_large_graphic_colour_popup_pane

0x993b,	// (0x0003fe79) listscroll_popup_colour_pane_g1_ParamLimits

0x993b,	// (0x0003fe79) listscroll_popup_colour_pane_g1

0x9952,	// (0x0003fe90) listscroll_popup_colour_pane_g2_ParamLimits

0x9952,	// (0x0003fe90) listscroll_popup_colour_pane_g2

0x9969,	// (0x0003fea7) listscroll_popup_colour_pane_g3_ParamLimits

0x9969,	// (0x0003fea7) listscroll_popup_colour_pane_g3

0x9979,	// (0x0003feb7) listscroll_popup_colour_pane_g4_ParamLimits

0x9979,	// (0x0003feb7) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00045ab1) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00045ab1) listscroll_popup_colour_pane_g

0xbb5e,	// (0x0004209c) scroll_pane_cp6_ParamLimits

0xbb5e,	// (0x0004209c) scroll_pane_cp6

0x9989,	// (0x0003fec7) cell_large_graphic_colour_popup_pane_ParamLimits

0x9989,	// (0x0003fec7) cell_large_graphic_colour_popup_pane

0xbb70,	// (0x000420ae) cell_large_graphic_colour_none_popup_pane_t1

0xb794,	// (0x00041cd2) grid_highlight_pane_cp5

0xbb7f,	// (0x000420bd) cell_large_graphic_colour_popup_pane_g1

0xbb87,	// (0x000420c5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00045aba) cell_large_graphic_colour_popup_pane_g

0xbb8f,	// (0x000420cd) cell_large_graphic_colour_popup_pane_g2_copy1

0xbb98,	// (0x000420d6) grid_highlight_pane_cp4

0xbba0,	// (0x000420de) bg_popup_window_pane_cp8_ParamLimits

0xbba0,	// (0x000420de) bg_popup_window_pane_cp8

0xbbbb,	// (0x000420f9) popup_snote_single_text_window_g1_ParamLimits

0xbbbb,	// (0x000420f9) popup_snote_single_text_window_g1

0xbbcd,	// (0x0004210b) popup_snote_single_text_window_t1_ParamLimits

0xbbcd,	// (0x0004210b) popup_snote_single_text_window_t1

0xbbe0,	// (0x0004211e) popup_snote_single_text_window_t2_ParamLimits

0xbbe0,	// (0x0004211e) popup_snote_single_text_window_t2

0xbbf3,	// (0x00042131) popup_snote_single_text_window_t3_ParamLimits

0xbbf3,	// (0x00042131) popup_snote_single_text_window_t3

0xbc2c,	// (0x0004216a) popup_snote_single_text_window_t4_ParamLimits

0xbc2c,	// (0x0004216a) popup_snote_single_text_window_t4

0xbc60,	// (0x0004219e) popup_snote_single_text_window_t5_ParamLimits

0xbc60,	// (0x0004219e) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00045abf) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00045abf) popup_snote_single_text_window_t

0xbc8f,	// (0x000421cd) bg_popup_window_pane_cp9_ParamLimits

0xbc8f,	// (0x000421cd) bg_popup_window_pane_cp9

0xbbbb,	// (0x000420f9) popup_snote_single_graphic_window_g1_ParamLimits

0xbbbb,	// (0x000420f9) popup_snote_single_graphic_window_g1

0xbc9d,	// (0x000421db) popup_snote_single_graphic_window_g2_ParamLimits

0xbc9d,	// (0x000421db) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00045aca) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00045aca) popup_snote_single_graphic_window_g

0xbca9,	// (0x000421e7) popup_snote_single_graphic_window_t1_ParamLimits

0xbca9,	// (0x000421e7) popup_snote_single_graphic_window_t1

0xbcbc,	// (0x000421fa) popup_snote_single_graphic_window_t2_ParamLimits

0xbcbc,	// (0x000421fa) popup_snote_single_graphic_window_t2

0xbccf,	// (0x0004220d) popup_snote_single_graphic_window_t3_ParamLimits

0xbccf,	// (0x0004220d) popup_snote_single_graphic_window_t3

0xbd08,	// (0x00042246) popup_snote_single_graphic_window_t4_ParamLimits

0xbd08,	// (0x00042246) popup_snote_single_graphic_window_t4

0xbd3c,	// (0x0004227a) popup_snote_single_graphic_window_t5_ParamLimits

0xbd3c,	// (0x0004227a) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00045acf) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00045acf) popup_snote_single_graphic_window_t

0x456c,	// (0x0003aaaa) grid_graphic_popup_pane_ParamLimits

0x456c,	// (0x0003aaaa) grid_graphic_popup_pane

0x459a,	// (0x0003aad8) listscroll_popup_graphic_pane_g1_ParamLimits

0x459a,	// (0x0003aad8) listscroll_popup_graphic_pane_g1

0xca3c,	// (0x00042f7a) listscroll_popup_graphic_pane_g2_ParamLimits

0xca3c,	// (0x00042f7a) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00045ec4) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00045ec4) listscroll_popup_graphic_pane_g

0x45c2,	// (0x0003ab00) scroll_pane_cp5

0xc9f4,	// (0x00042f32) cell_graphic_popup_pane_ParamLimits

0xc9f4,	// (0x00042f32) cell_graphic_popup_pane

0x44e5,	// (0x0003aa23) cell_graphic_popup_pane_g1

0x44ed,	// (0x0003aa2b) cell_graphic_popup_pane_g2

0xbb8f,	// (0x000420cd) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00045ebd) cell_graphic_popup_pane_g

0x44f6,	// (0x0003aa34) cell_graphic_popup_pane_t2

0xbb98,	// (0x000420d6) grid_highlight_pane_cp3

0xbd7d,	// (0x000422bb) list_gen_pane_ParamLimits

0xbd7d,	// (0x000422bb) list_gen_pane

0xbda5,	// (0x000422e3) scroll_pane

0xc9ab,	// (0x00042ee9) bg_list_pane_g1_ParamLimits

0xc9ab,	// (0x00042ee9) bg_list_pane_g1

0x445a,	// (0x0003a998) bg_list_pane_g2_ParamLimits

0x445a,	// (0x0003a998) bg_list_pane_g2

0x446f,	// (0x0003a9ad) bg_list_pane_g3_ParamLimits

0x446f,	// (0x0003a9ad) bg_list_pane_g3

0x4483,	// (0x0003a9c1) bg_list_pane_g4_ParamLimits

0x4483,	// (0x0003a9c1) bg_list_pane_g4

0xc9c8,	// (0x00042f06) bg_list_pane_g5_ParamLimits

0xc9c8,	// (0x00042f06) bg_list_pane_g5

0x0004,

0xf974,	// (0x00045eb2) bg_list_pane_g_ParamLimits

0xf974,	// (0x00045eb2) bg_list_pane_g

0xc96e,	// (0x00042eac) list_double2_graphic_large_graphic_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double2_graphic_large_graphic_pane

0xc96e,	// (0x00042eac) list_double2_graphic_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double2_graphic_pane

0xc96e,	// (0x00042eac) list_double2_large_graphic_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double2_large_graphic_pane

0xc96e,	// (0x00042eac) list_double2_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double2_pane

0xc96e,	// (0x00042eac) list_double_graphic_heading_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double_graphic_heading_pane

0xc96e,	// (0x00042eac) list_double_graphic_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double_graphic_pane

0xc96e,	// (0x00042eac) list_double_heading_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double_heading_pane

0xc96e,	// (0x00042eac) list_double_large_graphic_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double_large_graphic_pane

0xc96e,	// (0x00042eac) list_double_number_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double_number_pane

0xc96e,	// (0x00042eac) list_double_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double_pane

0xc96e,	// (0x00042eac) list_double_time_pane_ParamLimits

0xc96e,	// (0x00042eac) list_double_time_pane

0xc96e,	// (0x00042eac) list_setting_number_pane_ParamLimits

0xc96e,	// (0x00042eac) list_setting_number_pane

0xc96e,	// (0x00042eac) list_setting_pane_ParamLimits

0xc96e,	// (0x00042eac) list_setting_pane

0xae38,	// (0x00041376) list_single_2graphic_pane_ParamLimits

0xae38,	// (0x00041376) list_single_2graphic_pane

0xae38,	// (0x00041376) list_single_graphic_heading_pane_ParamLimits

0xae38,	// (0x00041376) list_single_graphic_heading_pane

0xae38,	// (0x00041376) list_single_graphic_pane_ParamLimits

0xae38,	// (0x00041376) list_single_graphic_pane

0xae38,	// (0x00041376) list_single_heading_pane_ParamLimits

0xae38,	// (0x00041376) list_single_heading_pane

0xc96e,	// (0x00042eac) list_single_large_graphic_pane_ParamLimits

0xc96e,	// (0x00042eac) list_single_large_graphic_pane

0xae38,	// (0x00041376) list_single_number_heading_pane_ParamLimits

0xae38,	// (0x00041376) list_single_number_heading_pane

0xae38,	// (0x00041376) list_single_number_pane_ParamLimits

0xae38,	// (0x00041376) list_single_number_pane

0xae38,	// (0x00041376) list_single_pane_ParamLimits

0xae38,	// (0x00041376) list_single_pane

0xb794,	// (0x00041cd2) list_highlight_pane_cp1

0xd28b,	// (0x000437c9) list_single_pane_g1_ParamLimits

0xd28b,	// (0x000437c9) list_single_pane_g1

0xd297,	// (0x000437d5) list_single_pane_g2_ParamLimits

0xd297,	// (0x000437d5) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_single_pane_g

0xd51e,	// (0x00043a5c) list_single_pane_t1_ParamLimits

0xd51e,	// (0x00043a5c) list_single_pane_t1

0xd28b,	// (0x000437c9) list_single_number_pane_g1_ParamLimits

0xd28b,	// (0x000437c9) list_single_number_pane_g1

0xd297,	// (0x000437d5) list_single_number_pane_g2_ParamLimits

0xd297,	// (0x000437d5) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_single_number_pane_g

0xd449,	// (0x00043987) list_single_number_pane_t1_ParamLimits

0xd449,	// (0x00043987) list_single_number_pane_t1

0xadfa,	// (0x00041338) list_single_number_pane_t2_ParamLimits

0xadfa,	// (0x00041338) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00045e73) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00045e73) list_single_number_pane_t

0x99b4,	// (0x0003fef2) list_single_graphic_pane_g1_ParamLimits

0x99b4,	// (0x0003fef2) list_single_graphic_pane_g1

0xd28b,	// (0x000437c9) list_single_graphic_pane_g2_ParamLimits

0xd28b,	// (0x000437c9) list_single_graphic_pane_g2

0xd297,	// (0x000437d5) list_single_graphic_pane_g3_ParamLimits

0xd297,	// (0x000437d5) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00045ada) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00045ada) list_single_graphic_pane_g

0x99c0,	// (0x0003fefe) list_single_graphic_pane_t1_ParamLimits

0x99c0,	// (0x0003fefe) list_single_graphic_pane_t1

0xd28b,	// (0x000437c9) list_single_heading_pane_g1_ParamLimits

0xd28b,	// (0x000437c9) list_single_heading_pane_g1

0xd297,	// (0x000437d5) list_single_heading_pane_g2_ParamLimits

0xd297,	// (0x000437d5) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_single_heading_pane_g

0xd2a3,	// (0x000437e1) list_single_heading_pane_t1_ParamLimits

0xd2a3,	// (0x000437e1) list_single_heading_pane_t1

0x99d6,	// (0x0003ff14) list_single_heading_pane_t2_ParamLimits

0x99d6,	// (0x0003ff14) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00045ae6) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00045ae6) list_single_heading_pane_t

0xd28b,	// (0x000437c9) list_single_number_heading_pane_g1_ParamLimits

0xd28b,	// (0x000437c9) list_single_number_heading_pane_g1

0xd297,	// (0x000437d5) list_single_number_heading_pane_g2_ParamLimits

0xd297,	// (0x000437d5) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_single_number_heading_pane_g

0xd2a3,	// (0x000437e1) list_single_number_heading_pane_t1_ParamLimits

0xd2a3,	// (0x000437e1) list_single_number_heading_pane_t1

0x99e8,	// (0x0003ff26) list_single_number_heading_pane_t2_ParamLimits

0x99e8,	// (0x0003ff26) list_single_number_heading_pane_t2

0xd2b9,	// (0x000437f7) list_single_number_heading_pane_t3_ParamLimits

0xd2b9,	// (0x000437f7) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00045aeb) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00045aeb) list_single_number_heading_pane_t

0xd2cb,	// (0x00043809) list_single_graphic_heading_pane_g1_ParamLimits

0xd2cb,	// (0x00043809) list_single_graphic_heading_pane_g1

0x99fa,	// (0x0003ff38) list_single_graphic_heading_pane_g4_ParamLimits

0x99fa,	// (0x0003ff38) list_single_graphic_heading_pane_g4

0xd297,	// (0x000437d5) list_single_graphic_heading_pane_g5_ParamLimits

0xd297,	// (0x000437d5) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00045af2) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00045af2) list_single_graphic_heading_pane_g

0xd2a3,	// (0x000437e1) list_single_graphic_heading_pane_t1_ParamLimits

0xd2a3,	// (0x000437e1) list_single_graphic_heading_pane_t1

0x9a0b,	// (0x0003ff49) list_single_graphic_heading_pane_t2_ParamLimits

0x9a0b,	// (0x0003ff49) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00045af9) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00045af9) list_single_graphic_heading_pane_t

0xd2d7,	// (0x00043815) list_single_large_graphic_pane_g1_ParamLimits

0xd2d7,	// (0x00043815) list_single_large_graphic_pane_g1

0xd2e3,	// (0x00043821) list_single_large_graphic_pane_g2_ParamLimits

0xd2e3,	// (0x00043821) list_single_large_graphic_pane_g2

0xd2ef,	// (0x0004382d) list_single_large_graphic_pane_g3_ParamLimits

0xd2ef,	// (0x0004382d) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00045afe) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00045afe) list_single_large_graphic_pane_g

0x3402,	// (0x00039940) wait_border_pane_g2_copy1

0x9a1d,	// (0x0003ff5b) list_single_large_graphic_pane_g4_cp2

0xd2fb,	// (0x00043839) list_single_large_graphic_pane_t1_ParamLimits

0xd2fb,	// (0x00043839) list_single_large_graphic_pane_t1

0x9a25,	// (0x0003ff63) list_double_pane_g1_ParamLimits

0x9a25,	// (0x0003ff63) list_double_pane_g1

0x9a31,	// (0x0003ff6f) list_double_pane_g2_ParamLimits

0x9a31,	// (0x0003ff6f) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00045b05) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00045b05) list_double_pane_g

0x9a3d,	// (0x0003ff7b) list_double_pane_t1_ParamLimits

0x9a3d,	// (0x0003ff7b) list_double_pane_t1

0x9a53,	// (0x0003ff91) list_double_pane_t2_ParamLimits

0x9a53,	// (0x0003ff91) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00045b0a) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00045b0a) list_double_pane_t

0x9a65,	// (0x0003ffa3) list_double2_pane_g1_ParamLimits

0x9a65,	// (0x0003ffa3) list_double2_pane_g1

0x9a76,	// (0x0003ffb4) list_double2_pane_g2_ParamLimits

0x9a76,	// (0x0003ffb4) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00045b0f) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00045b0f) list_double2_pane_g

0x9a82,	// (0x0003ffc0) list_double2_pane_t1_ParamLimits

0x9a82,	// (0x0003ffc0) list_double2_pane_t1

0x9a98,	// (0x0003ffd6) list_double2_pane_t2_ParamLimits

0x9a98,	// (0x0003ffd6) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00045b14) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00045b14) list_double2_pane_t

0x9a25,	// (0x0003ff63) list_double_number_pane_g1_ParamLimits

0x9a25,	// (0x0003ff63) list_double_number_pane_g1

0x9a31,	// (0x0003ff6f) list_double_number_pane_g2_ParamLimits

0x9a31,	// (0x0003ff6f) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00045b05) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00045b05) list_double_number_pane_g

0x9aaa,	// (0x0003ffe8) list_double_number_pane_t1_ParamLimits

0x9aaa,	// (0x0003ffe8) list_double_number_pane_t1

0x9abc,	// (0x0003fffa) list_double_number_pane_t2_ParamLimits

0x9abc,	// (0x0003fffa) list_double_number_pane_t2

0x9ad2,	// (0x00040010) list_double_number_pane_t3_ParamLimits

0x9ad2,	// (0x00040010) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00045b19) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00045b19) list_double_number_pane_t

0x9ae4,	// (0x00040022) list_double_graphic_pane_g1_ParamLimits

0x9ae4,	// (0x00040022) list_double_graphic_pane_g1

0x9af0,	// (0x0004002e) list_double_graphic_pane_g2_ParamLimits

0x9af0,	// (0x0004002e) list_double_graphic_pane_g2

0x9aff,	// (0x0004003d) list_double_graphic_pane_g3_ParamLimits

0x9aff,	// (0x0004003d) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00045b20) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00045b20) list_double_graphic_pane_g

0x9b17,	// (0x00040055) list_double_graphic_pane_t1_ParamLimits

0x9b17,	// (0x00040055) list_double_graphic_pane_t1

0x9b2d,	// (0x0004006b) list_double_graphic_pane_t2_ParamLimits

0x9b2d,	// (0x0004006b) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00045b29) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00045b29) list_double_graphic_pane_t

0x9b3f,	// (0x0004007d) list_double2_graphic_pane_g1_ParamLimits

0x9b3f,	// (0x0004007d) list_double2_graphic_pane_g1

0x9b4b,	// (0x00040089) list_double2_graphic_pane_g2_ParamLimits

0x9b4b,	// (0x00040089) list_double2_graphic_pane_g2

0x9b57,	// (0x00040095) list_double2_graphic_pane_g3_ParamLimits

0x9b57,	// (0x00040095) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00045b2e) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00045b2e) list_double2_graphic_pane_g

0x9b63,	// (0x000400a1) list_double2_graphic_pane_t1_ParamLimits

0x9b63,	// (0x000400a1) list_double2_graphic_pane_t1

0x9b79,	// (0x000400b7) list_double2_graphic_pane_t2_ParamLimits

0x9b79,	// (0x000400b7) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00045b35) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00045b35) list_double2_graphic_pane_t

0x9b8b,	// (0x000400c9) list_double_large_graphic_pane_g1_ParamLimits

0x9b8b,	// (0x000400c9) list_double_large_graphic_pane_g1

0x9baa,	// (0x000400e8) list_double_large_graphic_pane_g2_ParamLimits

0x9baa,	// (0x000400e8) list_double_large_graphic_pane_g2

0x9a31,	// (0x0003ff6f) list_double_large_graphic_pane_g3_ParamLimits

0x9a31,	// (0x0003ff6f) list_double_large_graphic_pane_g3

0x9bbb,	// (0x000400f9) list_double_large_graphic_pane_g4_ParamLimits

0x9bbb,	// (0x000400f9) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00045b3a) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00045b3a) list_double_large_graphic_pane_g

0x9bce,	// (0x0004010c) list_double_large_graphic_pane_t1_ParamLimits

0x9bce,	// (0x0004010c) list_double_large_graphic_pane_t1

0x9be7,	// (0x00040125) list_double_large_graphic_pane_t2_ParamLimits

0x9be7,	// (0x00040125) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00045b45) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00045b45) list_double_large_graphic_pane_t

0x9bf9,	// (0x00040137) list_double2_large_graphic_pane_g1_ParamLimits

0x9bf9,	// (0x00040137) list_double2_large_graphic_pane_g1

0x9a65,	// (0x0003ffa3) list_double2_large_graphic_pane_g2_ParamLimits

0x9a65,	// (0x0003ffa3) list_double2_large_graphic_pane_g2

0x9a76,	// (0x0003ffb4) list_double2_large_graphic_pane_g3_ParamLimits

0x9a76,	// (0x0003ffb4) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00045b4a) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00045b4a) list_double2_large_graphic_pane_g

0x9c05,	// (0x00040143) list_double2_large_graphic_pane_t1_ParamLimits

0x9c05,	// (0x00040143) list_double2_large_graphic_pane_t1

0x9c1b,	// (0x00040159) list_double2_large_graphic_pane_t2_ParamLimits

0x9c1b,	// (0x00040159) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00045b51) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00045b51) list_double2_large_graphic_pane_t

0x9c2d,	// (0x0004016b) list_double_heading_pane_g1_ParamLimits

0x9c2d,	// (0x0004016b) list_double_heading_pane_g1

0x9c3e,	// (0x0004017c) list_double_heading_pane_g2_ParamLimits

0x9c3e,	// (0x0004017c) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00045b56) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00045b56) list_double_heading_pane_g

0x9c4a,	// (0x00040188) list_double_heading_pane_t1_ParamLimits

0x9c4a,	// (0x00040188) list_double_heading_pane_t1

0x9a98,	// (0x0003ffd6) list_double_heading_pane_t2_ParamLimits

0x9a98,	// (0x0003ffd6) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00045b5b) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00045b5b) list_double_heading_pane_t

0x9c60,	// (0x0004019e) list_double_graphic_heading_pane_g1_ParamLimits

0x9c60,	// (0x0004019e) list_double_graphic_heading_pane_g1

0x9c2d,	// (0x0004016b) list_double_graphic_heading_pane_g2_ParamLimits

0x9c2d,	// (0x0004016b) list_double_graphic_heading_pane_g2

0x9c3e,	// (0x0004017c) list_double_graphic_heading_pane_g3_ParamLimits

0x9c3e,	// (0x0004017c) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00045b60) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00045b60) list_double_graphic_heading_pane_g

0x9c6c,	// (0x000401aa) list_double_graphic_heading_pane_t1_ParamLimits

0x9c6c,	// (0x000401aa) list_double_graphic_heading_pane_t1

0x9b79,	// (0x000400b7) list_double_graphic_heading_pane_t2_ParamLimits

0x9b79,	// (0x000400b7) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00045b67) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00045b67) list_double_graphic_heading_pane_t

0x9baa,	// (0x000400e8) list_double_time_pane_g1_ParamLimits

0x9baa,	// (0x000400e8) list_double_time_pane_g1

0x9a31,	// (0x0003ff6f) list_double_time_pane_g2_ParamLimits

0x9a31,	// (0x0003ff6f) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00045b6c) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00045b6c) list_double_time_pane_g

0x9c82,	// (0x000401c0) list_double_time_pane_t1_ParamLimits

0x9c82,	// (0x000401c0) list_double_time_pane_t1

0x9c98,	// (0x000401d6) list_double_time_pane_t2_ParamLimits

0x9c98,	// (0x000401d6) list_double_time_pane_t2

0x9caa,	// (0x000401e8) list_double_time_pane_t3_ParamLimits

0x9caa,	// (0x000401e8) list_double_time_pane_t3

0x9cbc,	// (0x000401fa) list_double_time_pane_t4_ParamLimits

0x9cbc,	// (0x000401fa) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00045b71) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00045b71) list_double_time_pane_t

0x9cce,	// (0x0004020c) list_setting_pane_g1_ParamLimits

0x9cce,	// (0x0004020c) list_setting_pane_g1

0x9cda,	// (0x00040218) list_setting_pane_g2_ParamLimits

0x9cda,	// (0x00040218) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00045b7a) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00045b7a) list_setting_pane_g

0x9ce6,	// (0x00040224) list_setting_pane_t1_ParamLimits

0x9ce6,	// (0x00040224) list_setting_pane_t1

0x9d00,	// (0x0004023e) list_setting_pane_t2_ParamLimits

0x9d00,	// (0x0004023e) list_setting_pane_t2

0x0002,

0xf641,	// (0x00045b7f) list_setting_pane_t_ParamLimits

0xf641,	// (0x00045b7f) list_setting_pane_t

0x9d3f,	// (0x0004027d) set_value_pane_cp_ParamLimits

0x9d3f,	// (0x0004027d) set_value_pane_cp

0x9d4d,	// (0x0004028b) list_setting_number_pane_g1_ParamLimits

0x9d4d,	// (0x0004028b) list_setting_number_pane_g1

0x9d59,	// (0x00040297) list_setting_number_pane_g2_ParamLimits

0x9d59,	// (0x00040297) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x00045b86) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x00045b86) list_setting_number_pane_g

0x9d65,	// (0x000402a3) list_setting_number_pane_t1_ParamLimits

0x9d65,	// (0x000402a3) list_setting_number_pane_t1

0x9d7e,	// (0x000402bc) list_setting_number_pane_t2_ParamLimits

0x9d7e,	// (0x000402bc) list_setting_number_pane_t2

0x9d98,	// (0x000402d6) list_setting_number_pane_t3_ParamLimits

0x9d98,	// (0x000402d6) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00045b8b) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00045b8b) list_setting_number_pane_t

0x9d3f,	// (0x0004027d) set_value_pane_ParamLimits

0x9d3f,	// (0x0004027d) set_value_pane

0xbdd9,	// (0x00042317) bg_set_opt_pane_ParamLimits

0xbdd9,	// (0x00042317) bg_set_opt_pane

0xd326,	// (0x00043864) set_value_pane_t1

0xbdfa,	// (0x00042338) slider_set_pane_cp3

0xbe03,	// (0x00042341) volume_small_pane_cp

0xbe0c,	// (0x0004234a) list_form_gen_pane

0xbe15,	// (0x00042353) scroll_pane_cp8

0x9ddb,	// (0x00040319) form_field_data_pane_ParamLimits

0x9ddb,	// (0x00040319) form_field_data_pane

0x9df6,	// (0x00040334) form_field_data_wide_pane_ParamLimits

0x9df6,	// (0x00040334) form_field_data_wide_pane

0xd344,	// (0x00043882) form_field_popup_pane_ParamLimits

0xd344,	// (0x00043882) form_field_popup_pane

0x9e18,	// (0x00040356) form_field_popup_wide_pane_ParamLimits

0x9e18,	// (0x00040356) form_field_popup_wide_pane

0xd366,	// (0x000438a4) form_field_slider_pane_ParamLimits

0xd366,	// (0x000438a4) form_field_slider_pane

0xd379,	// (0x000438b7) form_field_slider_wide_pane_ParamLimits

0xd379,	// (0x000438b7) form_field_slider_wide_pane

0xbe26,	// (0x00042364) data_form_pane

0x9e43,	// (0x00040381) form_field_data_pane_t1

0xbe32,	// (0x00042370) input_focus_pane

0xd38c,	// (0x000438ca) data_form_wide_pane

0xd3a9,	// (0x000438e7) form_field_data_wide_pane_t1

0xbbad,	// (0x000420eb) input_focus_pane_cp6

0x9e5d,	// (0x0004039b) form_field_popup_pane_t1

0xbe32,	// (0x00042370) input_focus_pane_cp7

0xbe60,	// (0x0004239e) list_form_pane

0xd3d3,	// (0x00043911) form_field_popup_wide_pane_t1

0xbe32,	// (0x00042370) input_focus_pane_cp8

0xbe6c,	// (0x000423aa) list_form_wide_pane

0x9e7f,	// (0x000403bd) form_field_slider_pane_t1_ParamLimits

0x9e7f,	// (0x000403bd) form_field_slider_pane_t1

0x9e97,	// (0x000403d5) form_field_slider_pane_t2_ParamLimits

0x9e97,	// (0x000403d5) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00045b9b) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00045b9b) form_field_slider_pane_t

0xb7e2,	// (0x00041d20) input_focus_pane_cp9_ParamLimits

0xb7e2,	// (0x00041d20) input_focus_pane_cp9

0x9eac,	// (0x000403ea) slider_cont_pane_ParamLimits

0x9eac,	// (0x000403ea) slider_cont_pane

0xbe78,	// (0x000423b6) form_field_slider_wide_pane_t1_ParamLimits

0xbe78,	// (0x000423b6) form_field_slider_wide_pane_t1

0xd3e8,	// (0x00043926) form_field_slider_wide_pane_t2_ParamLimits

0xd3e8,	// (0x00043926) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00045ba0) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00045ba0) form_field_slider_wide_pane_t

0xb7e2,	// (0x00041d20) input_focus_pane_cp10_ParamLimits

0xb7e2,	// (0x00041d20) input_focus_pane_cp10

0x9ec0,	// (0x000403fe) slider_cont_pane_cp1_ParamLimits

0x9ec0,	// (0x000403fe) slider_cont_pane_cp1

0x9ed4,	// (0x00040412) slider_form_pane_cp

0xbe8a,	// (0x000423c8) input_focus_pane_g1

0xbe92,	// (0x000423d0) input_focus_pane_g2

0xbe9a,	// (0x000423d8) input_focus_pane_g3

0xbea2,	// (0x000423e0) input_focus_pane_g4

0xbeaa,	// (0x000423e8) input_focus_pane_g5

0xbeb2,	// (0x000423f0) input_focus_pane_g6

0xbeba,	// (0x000423f8) input_focus_pane_g7

0xbec2,	// (0x00042400) input_focus_pane_g8

0xbeca,	// (0x00042408) input_focus_pane_g9

0xb78a,	// (0x00041cc8) input_focus_pane_g10

0x0009,

0xf667,	// (0x00045ba5) input_focus_pane_g

0x340b,	// (0x00039949) wait_border_pane_g3_copy1

0x9edc,	// (0x0004041a) data_form_pane_t1

0xb78a,	// (0x00041cc8) wait_anim_pane_g1_copy1

0xae0c,	// (0x0004134a) data_form_wide_pane_t1

0xd3fa,	// (0x00043938) list_form_graphic_pane_cp_ParamLimits

0xd3fa,	// (0x00043938) list_form_graphic_pane_cp

0x4362,	// (0x0003a8a0) slider_form_pane_g1

0x436b,	// (0x0003a8a9) slider_form_pane_g2

0x0006,

0xf965,	// (0x00045ea3) slider_form_pane_g

0xd3fa,	// (0x00043938) list_form_graphic_pane_ParamLimits

0xd3fa,	// (0x00043938) list_form_graphic_pane

0xd40c,	// (0x0004394a) list_form_graphic_pane_g1

0xd414,	// (0x00043952) list_form_graphic_pane_t1_ParamLimits

0xd414,	// (0x00043952) list_form_graphic_pane_t1

0xb7f0,	// (0x00041d2e) list_highlight_pane_cp5_ParamLimits

0xb7f0,	// (0x00041d2e) list_highlight_pane_cp5

0x9ef6,	// (0x00040434) find_pane_g1

0xbed2,	// (0x00042410) input_find_pane

0x9eff,	// (0x0004043d) input_find_pane_g1_ParamLimits

0x9eff,	// (0x0004043d) input_find_pane_g1

0x9f0b,	// (0x00040449) input_find_pane_t1_ParamLimits

0x9f0b,	// (0x00040449) input_find_pane_t1

0x9f20,	// (0x0004045e) input_find_pane_t2_ParamLimits

0x9f20,	// (0x0004045e) input_find_pane_t2

0x0001,

0xf67c,	// (0x00045bba) input_find_pane_t_ParamLimits

0xf67c,	// (0x00045bba) input_find_pane_t

0xbedb,	// (0x00042419) input_focus_pane_cp5_ParamLimits

0xbedb,	// (0x00042419) input_focus_pane_cp5

0xbeee,	// (0x0004242c) bg_popup_window_pane_cp2_ParamLimits

0xbeee,	// (0x0004242c) bg_popup_window_pane_cp2

0xbefb,	// (0x00042439) listscroll_menu_pane_ParamLimits

0xbefb,	// (0x00042439) listscroll_menu_pane

0x9f41,	// (0x0004047f) popup_submenu_window_ParamLimits

0x9f41,	// (0x0004047f) popup_submenu_window

0xbf07,	// (0x00042445) find_popup_pane_g1

0xbf0f,	// (0x0004244d) input_popup_find_pane_cp

0xbf19,	// (0x00042457) input_focus_pane_cp4_ParamLimits

0xbf19,	// (0x00042457) input_focus_pane_cp4

0xbf27,	// (0x00042465) input_popup_find_pane_t1_ParamLimits

0xbf27,	// (0x00042465) input_popup_find_pane_t1

0xb794,	// (0x00041cd2) bg_popup_sub_pane_cp

0xbf55,	// (0x00042493) listscroll_popup_sub_pane

0xbf5d,	// (0x0004249b) list_submenu_pane_ParamLimits

0xbf5d,	// (0x0004249b) list_submenu_pane

0xbf6e,	// (0x000424ac) scroll_pane_cp4

0xbf76,	// (0x000424b4) list_single_popup_submenu_pane_ParamLimits

0xbf76,	// (0x000424b4) list_single_popup_submenu_pane

0xbf8b,	// (0x000424c9) list_single_popup_submenu_pane_g1

0xbf93,	// (0x000424d1) list_single_popup_submenu_pane_t1_ParamLimits

0xbf93,	// (0x000424d1) list_single_popup_submenu_pane_t1

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp1_ParamLimits

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp1

0x9f7f,	// (0x000404bd) tabs_2_active_pane_g1

0x9f87,	// (0x000404c5) tabs_2_active_pane_t1

0xb7e2,	// (0x00041d20) bg_passive_tab_pane_cp1_ParamLimits

0xb7e2,	// (0x00041d20) bg_passive_tab_pane_cp1

0x9f7f,	// (0x000404bd) tabs_2_passive_pane_g1

0x9f87,	// (0x000404c5) tabs_2_passive_pane_t1

0xb7f0,	// (0x00041d2e) bg_active_tab_pane_cp4

0x9f99,	// (0x000404d7) tabs_2_long_active_pane_t1

0x28d7,	// (0x00038e15) bg_passive_tab_pane_cp4

0x0a1a,	// (0x00036f58) list_single_midp_graphic_pane_g4_ParamLimits

0xb7f0,	// (0x00041d2e) bg_active_tab_pane_cp5

0x9fac,	// (0x000404ea) tabs_3_long_active_pane_t1

0x28d7,	// (0x00038e15) bg_passive_tab_pane_cp5

0x0a1a,	// (0x00036f58) list_single_midp_graphic_pane_g4

0xb7f0,	// (0x00041d2e) bg_popup_window_pane_cp13_ParamLimits

0xb7f0,	// (0x00041d2e) bg_popup_window_pane_cp13

0xbfb1,	// (0x000424ef) listscroll_popup_fast_pane_ParamLimits

0xbfb1,	// (0x000424ef) listscroll_popup_fast_pane

0xbfc0,	// (0x000424fe) grid_popup_fast_pane_ParamLimits

0xbfc0,	// (0x000424fe) grid_popup_fast_pane

0xbfd2,	// (0x00042510) scroll_pane_cp9_ParamLimits

0xbfd2,	// (0x00042510) scroll_pane_cp9

0x5ce8,	// (0x0003c226) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5ce8,	// (0x0003c226) list_single_graphic_hl_pane_t1_cp2

0xbff6,	// (0x00042534) input_focus_pane_cp20_ParamLimits

0xbff6,	// (0x00042534) input_focus_pane_cp20

0xc004,	// (0x00042542) query_popup_data_pane_t1_ParamLimits

0xc004,	// (0x00042542) query_popup_data_pane_t1

0xc017,	// (0x00042555) query_popup_data_pane_t2_ParamLimits

0xc017,	// (0x00042555) query_popup_data_pane_t2

0xc05d,	// (0x0004259b) query_popup_data_pane_t3_ParamLimits

0xc05d,	// (0x0004259b) query_popup_data_pane_t3

0xc09e,	// (0x000425dc) query_popup_data_pane_t4_ParamLimits

0xc09e,	// (0x000425dc) query_popup_data_pane_t4

0xc0da,	// (0x00042618) query_popup_data_pane_t5_ParamLimits

0xc0da,	// (0x00042618) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00045bbf) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00045bbf) query_popup_data_pane_t

0xbe8a,	// (0x000423c8) bg_set_opt_pane_g1

0xbe92,	// (0x000423d0) bg_set_opt_pane_g2

0xbe9a,	// (0x000423d8) bg_set_opt_pane_g3

0xbea2,	// (0x000423e0) bg_set_opt_pane_g4

0xbeaa,	// (0x000423e8) bg_set_opt_pane_g5

0xbeb2,	// (0x000423f0) bg_set_opt_pane_g6

0xbeba,	// (0x000423f8) bg_set_opt_pane_g7

0xbec2,	// (0x00042400) bg_set_opt_pane_g8

0xbeca,	// (0x00042408) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00045bca) bg_set_opt_pane_g

0x004d,	// (0x0003658b) control_top_pane_stacon_ParamLimits

0x004d,	// (0x0003658b) control_top_pane_stacon

0x00a0,	// (0x000365de) signal_pane_stacon_ParamLimits

0x00a0,	// (0x000365de) signal_pane_stacon

0x2239,	// (0x00038777) stacon_top_pane_g1_ParamLimits

0x2239,	// (0x00038777) stacon_top_pane_g1

0x00c5,	// (0x00036603) title_pane_stacon_ParamLimits

0x00c5,	// (0x00036603) title_pane_stacon

0x00ef,	// (0x0003662d) uni_indicator_pane_stacon_ParamLimits

0x00ef,	// (0x0003662d) uni_indicator_pane_stacon

0x0104,	// (0x00036642) battery_pane_stacon_ParamLimits

0x0104,	// (0x00036642) battery_pane_stacon

0x0148,	// (0x00036686) control_bottom_pane_stacon_ParamLimits

0x0148,	// (0x00036686) control_bottom_pane_stacon

0x016b,	// (0x000366a9) navi_pane_stacon_ParamLimits

0x016b,	// (0x000366a9) navi_pane_stacon

0x225b,	// (0x00038799) stacon_bottom_pane_g1_ParamLimits

0x225b,	// (0x00038799) stacon_bottom_pane_g1

0xef17,	// (0x00045455) aid_levels_signal_lsc_ParamLimits

0xef17,	// (0x00045455) aid_levels_signal_lsc

0xef2e,	// (0x0004546c) signal_pane_stacon_g1_ParamLimits

0xef2e,	// (0x0004546c) signal_pane_stacon_g1

0xef42,	// (0x00045480) signal_pane_stacon_g2_ParamLimits

0xef42,	// (0x00045480) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00045bdd) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00045bdd) signal_pane_stacon_g

0xef77,	// (0x000454b5) title_pane_stacon_t1_ParamLimits

0xef77,	// (0x000454b5) title_pane_stacon_t1

0xc11e,	// (0x0004265c) uni_indicator_pane_stacon_g1

0xc128,	// (0x00042666) uni_indicator_pane_stacon_g2

0xc132,	// (0x00042670) uni_indicator_pane_stacon_g3

0xc13c,	// (0x0004267a) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x00045be9) uni_indicator_pane_stacon_g

0xef9c,	// (0x000454da) control_top_pane_stacon_g1

0xefa4,	// (0x000454e2) control_top_pane_stacon_t1_ParamLimits

0xefa4,	// (0x000454e2) control_top_pane_stacon_t1

0xefdb,	// (0x00045519) aid_levels_battery_lsc_ParamLimits

0xefdb,	// (0x00045519) aid_levels_battery_lsc

0xeff3,	// (0x00045531) battery_pane_stacon_g1_ParamLimits

0xeff3,	// (0x00045531) battery_pane_stacon_g1

0xf005,	// (0x00045543) battery_pane_stacon_g2_ParamLimits

0xf005,	// (0x00045543) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x00045bf2) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x00045bf2) battery_pane_stacon_g

0xf043,	// (0x00045581) navi_icon_pane_stacon

0xf057,	// (0x00045595) navi_navi_pane_stacon

0xf043,	// (0x00045581) navi_text_pane_stacon

0xf06d,	// (0x000455ab) control_bottom_pane_stacon_g1

0xf075,	// (0x000455b3) control_bottom_pane_stacon_t1_ParamLimits

0xf075,	// (0x000455b3) control_bottom_pane_stacon_t1

0x9fbe,	// (0x000404fc) grid_app_pane_ParamLimits

0x9fbe,	// (0x000404fc) grid_app_pane

0x9ff6,	// (0x00040534) scroll_pane_cp15_ParamLimits

0x9ff6,	// (0x00040534) scroll_pane_cp15

0xa00b,	// (0x00040549) cell_app_pane_ParamLimits

0xa00b,	// (0x00040549) cell_app_pane

0xa056,	// (0x00040594) cell_app_pane_g1_ParamLimits

0xa056,	// (0x00040594) cell_app_pane_g1

0xf0ac,	// (0x000455ea) cell_app_pane_g2_ParamLimits

0xf0ac,	// (0x000455ea) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x00045bf7) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x00045bf7) cell_app_pane_g

0xa07a,	// (0x000405b8) cell_app_pane_t1_ParamLimits

0xa07a,	// (0x000405b8) cell_app_pane_t1

0xf0b8,	// (0x000455f6) grid_highlight_pane_ParamLimits

0xf0b8,	// (0x000455f6) grid_highlight_pane

0xbe8a,	// (0x000423c8) cell_highlight_pane_g1

0xbe92,	// (0x000423d0) cell_highlight_pane_g2

0xbe9a,	// (0x000423d8) cell_highlight_pane_g3

0xbea2,	// (0x000423e0) cell_highlight_pane_g4

0xbeaa,	// (0x000423e8) cell_highlight_pane_g5

0xbeb2,	// (0x000423f0) cell_highlight_pane_g6

0xbeba,	// (0x000423f8) cell_highlight_pane_g7

0xbec2,	// (0x00042400) cell_highlight_pane_g8

0xbeca,	// (0x00042408) cell_highlight_pane_g9

0xb78a,	// (0x00041cc8) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x00045ba5) cell_highlight_pane_g

0xf0d3,	// (0x00045611) bg_scroll_pane

0xf0f2,	// (0x00045630) scroll_handle_pane

0xf143,	// (0x00045681) scroll_bg_pane_g1

0xf158,	// (0x00045696) scroll_bg_pane_g2

0xf170,	// (0x000456ae) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x00045bfc) scroll_bg_pane_g

0xf185,	// (0x000456c3) scroll_handle_focus_pane_ParamLimits

0xf185,	// (0x000456c3) scroll_handle_focus_pane

0xf143,	// (0x00045681) scroll_handle_pane_g1

0xf192,	// (0x000456d0) scroll_handle_pane_g2

0xf170,	// (0x000456ae) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x00045c03) scroll_handle_pane_g

0xbf19,	// (0x00042457) bg_popup_sub_pane_cp21_ParamLimits

0xbf19,	// (0x00042457) bg_popup_sub_pane_cp21

0xf1a6,	// (0x000456e4) popup_fep_japan_predictive_window_t1_ParamLimits

0xf1a6,	// (0x000456e4) popup_fep_japan_predictive_window_t1

0xf1bd,	// (0x000456fb) popup_fep_japan_predictive_window_t2_ParamLimits

0xf1bd,	// (0x000456fb) popup_fep_japan_predictive_window_t2

0xf1f0,	// (0x0004572e) popup_fep_japan_predictive_window_t3_ParamLimits

0xf1f0,	// (0x0004572e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x00045c0a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x00045c0a) popup_fep_japan_predictive_window_t

0xb794,	// (0x00041cd2) bg_popup_sub_pane_cp23

0xf227,	// (0x00045765) listscroll_japin_cand_pane

0xf22f,	// (0x0004576d) popup_fep_japan_candidate_window_t1

0xf23d,	// (0x0004577b) candidate_pane_ParamLimits

0xf23d,	// (0x0004577b) candidate_pane

0xf24f,	// (0x0004578d) scroll_pane_cp30

0xf259,	// (0x00045797) list_single_popup_jap_candidate_pane_ParamLimits

0xf259,	// (0x00045797) list_single_popup_jap_candidate_pane

0xb794,	// (0x00041cd2) list_highlight_pane_cp30

0xf26d,	// (0x000457ab) list_single_popup_jap_candidate_pane_t1

0xa0b4,	// (0x000405f2) level_1_signal

0xa0c6,	// (0x00040604) level_2_signal

0xa0d9,	// (0x00040617) level_3_signal

0xa0ec,	// (0x0004062a) level_4_signal

0xa0ff,	// (0x0004063d) level_5_signal

0xa112,	// (0x00040650) level_6_signal

0xa125,	// (0x00040663) level_7_signal

0xa0b4,	// (0x000405f2) level_1_battery

0xa0c6,	// (0x00040604) level_2_battery

0xa0d9,	// (0x00040617) level_3_battery

0xa0ec,	// (0x0004062a) level_4_battery

0xa0ff,	// (0x0004063d) level_5_battery

0xa112,	// (0x00040650) level_6_battery

0xa125,	// (0x00040663) level_7_battery

0xf2b3,	// (0x000457f1) list_menu_pane_ParamLimits

0xf2b3,	// (0x000457f1) list_menu_pane

0xf2c9,	// (0x00045807) scroll_pane_cp25_ParamLimits

0xf2c9,	// (0x00045807) scroll_pane_cp25

0xf2e2,	// (0x00045820) list_double2_graphic_pane_cp2_ParamLimits

0xf2e2,	// (0x00045820) list_double2_graphic_pane_cp2

0xf2e2,	// (0x00045820) list_double2_large_graphic_pane_cp2_ParamLimits

0xf2e2,	// (0x00045820) list_double2_large_graphic_pane_cp2

0xf2e2,	// (0x00045820) list_double2_pane_cp2_ParamLimits

0xf2e2,	// (0x00045820) list_double2_pane_cp2

0xf2e2,	// (0x00045820) list_double_graphic_pane_cp2_ParamLimits

0xf2e2,	// (0x00045820) list_double_graphic_pane_cp2

0xf2e2,	// (0x00045820) list_double_large_graphic_pane_cp2_ParamLimits

0xf2e2,	// (0x00045820) list_double_large_graphic_pane_cp2

0xf2e2,	// (0x00045820) list_double_number_pane_cp2_ParamLimits

0xf2e2,	// (0x00045820) list_double_number_pane_cp2

0xf2e2,	// (0x00045820) list_double_pane_cp2_ParamLimits

0xf2e2,	// (0x00045820) list_double_pane_cp2

0xa138,	// (0x00040676) list_single_2graphic_pane_cp2_ParamLimits

0xa138,	// (0x00040676) list_single_2graphic_pane_cp2

0xa138,	// (0x00040676) list_single_graphic_heading_pane_cp2_ParamLimits

0xa138,	// (0x00040676) list_single_graphic_heading_pane_cp2

0xa138,	// (0x00040676) list_single_graphic_pane_cp2_ParamLimits

0xa138,	// (0x00040676) list_single_graphic_pane_cp2

0xa138,	// (0x00040676) list_single_heading_pane_cp2_ParamLimits

0xa138,	// (0x00040676) list_single_heading_pane_cp2

0xf2f2,	// (0x00045830) list_single_large_graphic_pane_cp2_ParamLimits

0xf2f2,	// (0x00045830) list_single_large_graphic_pane_cp2

0xa138,	// (0x00040676) list_single_number_heading_pane_cp2_ParamLimits

0xa138,	// (0x00040676) list_single_number_heading_pane_cp2

0xa138,	// (0x00040676) list_single_number_pane_cp2_ParamLimits

0xa138,	// (0x00040676) list_single_number_pane_cp2

0xa14c,	// (0x0004068a) list_single_pane_cp2_ParamLimits

0xa14c,	// (0x0004068a) list_single_pane_cp2

0xf366,	// (0x000458a4) bg_popup_sub_pane_cp22

0xf38b,	// (0x000458c9) popup_side_volume_key_window_g1

0xf3b5,	// (0x000458f3) popup_side_volume_key_window_t1

0xf3d3,	// (0x00045911) volume_small_pane_cp1

0xb7e2,	// (0x00041d20) bg_popup_sub_pane_cp24_ParamLimits

0xb7e2,	// (0x00041d20) bg_popup_sub_pane_cp24

0xf3db,	// (0x00045919) fep_china_uni_candidate_pane_ParamLimits

0xf3db,	// (0x00045919) fep_china_uni_candidate_pane

0xf3ef,	// (0x0004592d) fep_china_uni_entry_pane

0xf3ff,	// (0x0004593d) popup_fep_china_uni_window_g1

0xf41b,	// (0x00045959) fep_china_uni_entry_pane_g1

0xf425,	// (0x00045963) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00045c3b) fep_china_uni_entry_pane_g

0xf42f,	// (0x0004596d) fep_entry_item_pane

0xf439,	// (0x00045977) fep_candidate_item_pane

0xf441,	// (0x0004597f) fep_china_uni_candidate_pane_g1

0xf44b,	// (0x00045989) fep_china_uni_candidate_pane_g2

0xf453,	// (0x00045991) fep_china_uni_candidate_pane_g3

0xf45b,	// (0x00045999) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x00045c40) fep_china_uni_candidate_pane_g

0xb78a,	// (0x00041cc8) fep_entry_item_pane_g1

0xf465,	// (0x000459a3) fep_entry_item_pane_t1_ParamLimits

0xf465,	// (0x000459a3) fep_entry_item_pane_t1

0xf47b,	// (0x000459b9) fep_candidate_item_pane_t1_ParamLimits

0xf47b,	// (0x000459b9) fep_candidate_item_pane_t1

0xf490,	// (0x000459ce) fep_candidate_item_pane_t2_ParamLimits

0xf490,	// (0x000459ce) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00045c49) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00045c49) fep_candidate_item_pane_t

0xb7f0,	// (0x00041d2e) list_highlight_pane_cp31_ParamLimits

0xb7f0,	// (0x00041d2e) list_highlight_pane_cp31

0xf4a2,	// (0x000459e0) level_1_signal_lsc

0xf4ab,	// (0x000459e9) level_2_signal_lsc

0xf4b4,	// (0x000459f2) level_3_signal_lsc

0xf4bd,	// (0x000459fb) level_4_signal_lsc

0xf4c6,	// (0x00045a04) level_5_signal_lsc

0xf4cf,	// (0x00045a0d) level_6_signal_lsc

0xf4d8,	// (0x00045a16) level_7_signal_lsc

0xf4d8,	// (0x00045a16) level_1_battery_lsc

0xf4e1,	// (0x00045a1f) level_2_battery_lsc

0xf4ea,	// (0x00045a28) level_3_battery_lsc

0xf4f3,	// (0x00045a31) level_4_battery_lsc

0xf4fc,	// (0x00045a3a) level_5_battery_lsc

0xf505,	// (0x00045a43) level_6_battery_lsc

0xf4a2,	// (0x000459e0) level_7_battery_lsc

0xf50e,	// (0x00045a4c) scroll_handle_focus_pane_g1

0xf517,	// (0x00045a55) scroll_handle_focus_pane_g2

0xf520,	// (0x00045a5e) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00045c4e) scroll_handle_focus_pane_g

0xa1db,	// (0x00040719) list_single_2graphic_pane_g1_ParamLimits

0xa1db,	// (0x00040719) list_single_2graphic_pane_g1

0x99fa,	// (0x0003ff38) list_single_2graphic_pane_g2_ParamLimits

0x99fa,	// (0x0003ff38) list_single_2graphic_pane_g2

0xd297,	// (0x000437d5) list_single_2graphic_pane_g3_ParamLimits

0xd297,	// (0x000437d5) list_single_2graphic_pane_g3

0xa1e7,	// (0x00040725) list_single_2graphic_pane_g4_ParamLimits

0xa1e7,	// (0x00040725) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x00045c55) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x00045c55) list_single_2graphic_pane_g

0xa1f3,	// (0x00040731) list_single_2graphic_pane_t1_ParamLimits

0xa1f3,	// (0x00040731) list_single_2graphic_pane_t1

0xa221,	// (0x0004075f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa221,	// (0x0004075f) list_double2_graphic_large_graphic_pane_g1

0x9a65,	// (0x0003ffa3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9a65,	// (0x0003ffa3) list_double2_graphic_large_graphic_pane_g2

0x9a76,	// (0x0003ffb4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a76,	// (0x0003ffb4) list_double2_graphic_large_graphic_pane_g3

0xa233,	// (0x00040771) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa233,	// (0x00040771) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00045c5e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00045c5e) list_double2_graphic_large_graphic_pane_g

0xa23f,	// (0x0004077d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa23f,	// (0x0004077d) list_double2_graphic_large_graphic_pane_t1

0xa255,	// (0x00040793) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa255,	// (0x00040793) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x00045c67) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x00045c67) list_double2_graphic_large_graphic_pane_t

0x231e,	// (0x0003885c) popup_fast_swap_window_ParamLimits

0x231e,	// (0x0003885c) popup_fast_swap_window

0x233c,	// (0x0003887a) popup_side_volume_key_window

0x235a,	// (0x00038898) stacon_top_pane

0x2364,	// (0x000388a2) status_pane_ParamLimits

0x2364,	// (0x000388a2) status_pane

0xb780,	// (0x00041cbe) status_small_pane

0xb794,	// (0x00041cd2) control_pane

0xb794,	// (0x00041cd2) stacon_bottom_pane

0xbe15,	// (0x00042353) scroll_pane_cp121

0xbe0c,	// (0x0004234a) set_content_pane

0xa267,	// (0x000407a5) bg_active_tab_pane_g1_cp1

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp1

0xa270,	// (0x000407ae) bg_active_tab_pane_g3_cp1

0xa267,	// (0x000407a5) bg_passive_tab_pane_g1_cp1

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp1

0xa270,	// (0x000407ae) bg_passive_tab_pane_g3_cp1

0xa279,	// (0x000407b7) bg_active_tab_pane_g1_cp2

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp2

0xa282,	// (0x000407c0) bg_active_tab_pane_g3_cp2

0xa279,	// (0x000407b7) bg_passive_tab_pane_g1_cp2

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp2

0xa282,	// (0x000407c0) bg_passive_tab_pane_g3_cp2

0xa28b,	// (0x000407c9) bg_active_tab_pane_g1_cp3

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp3

0xa294,	// (0x000407d2) bg_active_tab_pane_g3_cp3

0xa28b,	// (0x000407c9) bg_passive_tab_pane_g1_cp3

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp3

0xa294,	// (0x000407d2) bg_passive_tab_pane_g3_cp3

0xa29d,	// (0x000407db) bg_active_tab_pane_g1_cp4

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp4

0xa2a6,	// (0x000407e4) bg_active_tab_pane_g3_cp4

0xa29d,	// (0x000407db) bg_passive_tab_pane_g1_cp4

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp4

0xa2a6,	// (0x000407e4) bg_passive_tab_pane_g3_cp4

0x2277,	// (0x000387b5) bg_active_tab_pane_g1_cp5

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp5

0x2280,	// (0x000387be) bg_active_tab_pane_g3_cp5

0x2277,	// (0x000387b5) bg_passive_tab_pane_g1_cp5

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp5

0x2280,	// (0x000387be) bg_passive_tab_pane_g3_cp5

0x4990,	// (0x0003aece) list_set_graphic_pane_ParamLimits

0x4990,	// (0x0003aece) list_set_graphic_pane

0xb794,	// (0x00041cd2) bg_set_opt_pane_cp4

0x229f,	// (0x000387dd) list_set_graphic_pane_g1_ParamLimits

0x229f,	// (0x000387dd) list_set_graphic_pane_g1

0x22ab,	// (0x000387e9) list_set_graphic_pane_g2_ParamLimits

0x22ab,	// (0x000387e9) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00045c6c) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00045c6c) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x00045ff1) volume_small_pane_cp_g

0x22cf,	// (0x0003880d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22cf,	// (0x0003880d) list_double2_large_graphic_pane_g1_cp2

0x22dd,	// (0x0003881b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22dd,	// (0x0003881b) list_double2_large_graphic_pane_g2_cp2

0x22ee,	// (0x0003882c) list_double2_large_graphic_pane_g3_cp2

0x22f6,	// (0x00038834) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22f6,	// (0x00038834) list_double2_large_graphic_pane_t1_cp2

0x230c,	// (0x0003884a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x230c,	// (0x0003884a) list_double2_large_graphic_pane_t2_cp2

0x3eef,	// (0x0003a42d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3eef,	// (0x0003a42d) list_double_large_graphic_pane_g1_cp2

0x3f02,	// (0x0003a440) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3f02,	// (0x0003a440) list_double_large_graphic_pane_g2_cp2

0x2482,	// (0x000389c0) list_double_large_graphic_pane_g3_cp2

0x3f13,	// (0x0003a451) list_double_large_graphic_pane_g4_cp

0x3f1b,	// (0x0003a459) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3f1b,	// (0x0003a459) list_double_large_graphic_pane_t1_cp2

0x3f32,	// (0x0003a470) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3f32,	// (0x0003a470) list_double_large_graphic_pane_t2_cp2

0x2372,	// (0x000388b0) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2372,	// (0x000388b0) list_double2_graphic_pane_g1_cp2

0x2380,	// (0x000388be) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2380,	// (0x000388be) list_double2_graphic_pane_g2_cp2

0x2391,	// (0x000388cf) list_double2_graphic_pane_g3_cp2

0x239b,	// (0x000388d9) list_double2_graphic_pane_t1_cp2_ParamLimits

0x239b,	// (0x000388d9) list_double2_graphic_pane_t1_cp2

0x23b1,	// (0x000388ef) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23b1,	// (0x000388ef) list_double2_graphic_pane_t2_cp2

0x23c3,	// (0x00038901) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23c3,	// (0x00038901) list_single_number_heading_pane_g1_cp2

0x23cf,	// (0x0003890d) list_single_number_heading_pane_g2_cp2

0x23d7,	// (0x00038915) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23d7,	// (0x00038915) list_single_number_heading_pane_t1_cp2

0x23ed,	// (0x0003892b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23ed,	// (0x0003892b) list_single_number_heading_pane_t2_cp2

0x2401,	// (0x0003893f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2401,	// (0x0003893f) list_single_number_heading_pane_t3_cp2

0x23c3,	// (0x00038901) list_single_heading_pane_g1_cp2_ParamLimits

0x23c3,	// (0x00038901) list_single_heading_pane_g1_cp2

0x23cf,	// (0x0003890d) list_single_heading_pane_g2_cp2

0x23d7,	// (0x00038915) list_single_heading_pane_t1_cp2_ParamLimits

0x23d7,	// (0x00038915) list_single_heading_pane_t1_cp2

0x3ce9,	// (0x0003a227) list_single_heading_pane_t2_cp2_ParamLimits

0x3ce9,	// (0x0003a227) list_single_heading_pane_t2_cp2

0x3c31,	// (0x0003a16f) list_double_graphic_pane_g1_cp2_ParamLimits

0x3c31,	// (0x0003a16f) list_double_graphic_pane_g1_cp2

0x3c3d,	// (0x0003a17b) list_double_graphic_pane_g2_cp2_ParamLimits

0x3c3d,	// (0x0003a17b) list_double_graphic_pane_g2_cp2

0x3c4c,	// (0x0003a18a) list_double_graphic_pane_g3_cp2

0x3c54,	// (0x0003a192) list_double_graphic_pane_t1_cp2_ParamLimits

0x3c54,	// (0x0003a192) list_double_graphic_pane_t1_cp2

0x3c6a,	// (0x0003a1a8) list_double_graphic_pane_t2_cp2_ParamLimits

0x3c6a,	// (0x0003a1a8) list_double_graphic_pane_t2_cp2

0x2476,	// (0x000389b4) list_double_number_pane_g1_cp2_ParamLimits

0x2476,	// (0x000389b4) list_double_number_pane_g1_cp2

0x2482,	// (0x000389c0) list_double_number_pane_g2_cp2

0x3bf5,	// (0x0003a133) list_double_number_pane_t1_cp2_ParamLimits

0x3bf5,	// (0x0003a133) list_double_number_pane_t1_cp2

0x3c09,	// (0x0003a147) list_double_number_pane_t2_cp2_ParamLimits

0x3c09,	// (0x0003a147) list_double_number_pane_t2_cp2

0x3c1f,	// (0x0003a15d) list_double_number_pane_t3_cp2_ParamLimits

0x3c1f,	// (0x0003a15d) list_double_number_pane_t3_cp2

0x3ade,	// (0x0003a01c) list_single_graphic_pane_g1_cp2_ParamLimits

0x3ade,	// (0x0003a01c) list_single_graphic_pane_g1_cp2

0x24e7,	// (0x00038a25) list_single_graphic_pane_g2_cp2_ParamLimits

0x24e7,	// (0x00038a25) list_single_graphic_pane_g2_cp2

0x24f3,	// (0x00038a31) list_single_graphic_pane_g3_cp2

0x3ab4,	// (0x00039ff2) list_single_graphic_pane_t1_cp2_ParamLimits

0x3ab4,	// (0x00039ff2) list_single_graphic_pane_t1_cp2

0x24e7,	// (0x00038a25) list_single_number_pane_g1_cp2_ParamLimits

0x24e7,	// (0x00038a25) list_single_number_pane_g1_cp2

0x24f3,	// (0x00038a31) list_single_number_pane_g2_cp2

0x3ab4,	// (0x00039ff2) list_single_number_pane_t1_cp2_ParamLimits

0x3ab4,	// (0x00039ff2) list_single_number_pane_t1_cp2

0x3aca,	// (0x0003a008) list_single_number_pane_t2_cp2_ParamLimits

0x3aca,	// (0x0003a008) list_single_number_pane_t2_cp2

0x22dd,	// (0x0003881b) list_double2_pane_g1_cp2_ParamLimits

0x22dd,	// (0x0003881b) list_double2_pane_g1_cp2

0x22ee,	// (0x0003882c) list_double2_pane_g2_cp2

0x244e,	// (0x0003898c) list_double2_pane_t1_cp2_ParamLimits

0x244e,	// (0x0003898c) list_double2_pane_t1_cp2

0x2464,	// (0x000389a2) list_double2_pane_t2_cp2_ParamLimits

0x2464,	// (0x000389a2) list_double2_pane_t2_cp2

0x2476,	// (0x000389b4) list_double_pane_g1_cp2_ParamLimits

0x2476,	// (0x000389b4) list_double_pane_g1_cp2

0x2482,	// (0x000389c0) list_double_pane_g2_cp2

0x248a,	// (0x000389c8) list_double_pane_t1_cp2_ParamLimits

0x248a,	// (0x000389c8) list_double_pane_t1_cp2

0x24a0,	// (0x000389de) list_double_pane_t2_cp2_ParamLimits

0x24a0,	// (0x000389de) list_double_pane_t2_cp2

0x24d7,	// (0x00038a15) list_single_pane_cp2_g3

0x24e7,	// (0x00038a25) list_single_pane_g1_cp2_ParamLimits

0x24e7,	// (0x00038a25) list_single_pane_g1_cp2

0x24f3,	// (0x00038a31) list_single_pane_g2_cp2

0x24fb,	// (0x00038a39) list_single_pane_t1_cp2_ParamLimits

0x24fb,	// (0x00038a39) list_single_pane_t1_cp2

0x2513,	// (0x00038a51) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2513,	// (0x00038a51) list_single_large_graphic_pane_g1_cp2

0x2521,	// (0x00038a5f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2521,	// (0x00038a5f) list_single_large_graphic_pane_g2_cp2

0x252d,	// (0x00038a6b) list_single_large_graphic_pane_g3_cp2

0x2535,	// (0x00038a73) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2535,	// (0x00038a73) list_single_large_graphic_pane_g4_cp1

0x254f,	// (0x00038a8d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x254f,	// (0x00038a8d) list_single_large_graphic_pane_t1_cp2

0x3a7e,	// (0x00039fbc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3a7e,	// (0x00039fbc) list_single_graphic_heading_pane_g1_cp2

0x3a4b,	// (0x00039f89) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3a4b,	// (0x00039f89) list_single_graphic_heading_pane_g4_cp2

0x24f3,	// (0x00038a31) list_single_graphic_heading_pane_g5_cp2

0x3a8a,	// (0x00039fc8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3a8a,	// (0x00039fc8) list_single_graphic_heading_pane_t1_cp2

0x3aa0,	// (0x00039fde) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3aa0,	// (0x00039fde) list_single_graphic_heading_pane_t2_cp2

0x3a3f,	// (0x00039f7d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3a3f,	// (0x00039f7d) list_single_2graphic_pane_g1_cp2

0x3a4b,	// (0x00039f89) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3a4b,	// (0x00039f89) list_single_2graphic_pane_g2_cp2

0x24f3,	// (0x00038a31) list_single_2graphic_pane_g3_cp2

0x3a5c,	// (0x00039f9a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3a5c,	// (0x00039f9a) list_single_2graphic_pane_g4_cp2

0x3a68,	// (0x00039fa6) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3a68,	// (0x00039fa6) list_single_2graphic_pane_t1_cp2

0xb78a,	// (0x00041cc8) list_highlight_pane_g10_cp1

0x3617,	// (0x00039b55) list_highlight_pane_g1_cp1

0x361f,	// (0x00039b5d) list_highlight_pane_g2_cp1

0x3627,	// (0x00039b65) list_highlight_pane_g3_cp1

0x362f,	// (0x00039b6d) list_highlight_pane_g4_cp1

0x3637,	// (0x00039b75) list_highlight_pane_g5_cp1

0x363f,	// (0x00039b7d) list_highlight_pane_g6_cp1

0x3647,	// (0x00039b85) list_highlight_pane_g7_cp1

0x364f,	// (0x00039b8d) list_highlight_pane_g8_cp1

0x3657,	// (0x00039b95) list_highlight_pane_g9_cp1

0xc5f6,	// (0x00042b34) form_field_slider_pane_t3

0xc604,	// (0x00042b42) form_field_slider_pane_t4

0x3553,	// (0x00039a91) slider_form_pane_ParamLimits

0x3553,	// (0x00039a91) slider_form_pane

0xb794,	// (0x00041cd2) control_abbreviations

0xb794,	// (0x00041cd2) control_conventions

0xb794,	// (0x00041cd2) control_definitions

0xb794,	// (0x00041cd2) format_table_attribute

0x3d3f,	// (0x0003a27d) bg_popup_preview_window_pane_g9

0xb794,	// (0x00041cd2) format_table_data2

0xb794,	// (0x00041cd2) format_table_data3

0xb794,	// (0x00041cd2) format_table_data_example

0x0008,

0xb794,	// (0x00041cd2) intro_purpose

0xf8c5,	// (0x00045e03) bg_popup_preview_window_pane_g

0xb794,	// (0x00041cd2) texts_category

0xb794,	// (0x00041cd2) texts_graphics

0x2565,	// (0x00038aa3) text_digital

0x2574,	// (0x00038ab2) text_primary

0x2583,	// (0x00038ac1) text_primary_small

0x2592,	// (0x00038ad0) text_secondary

0x25a1,	// (0x00038adf) text_title

0x44b9,	// (0x0003a9f7) bg_passive_tab_pane_g1_cp3_srt

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp3_srt

0x44c2,	// (0x0003aa00) bg_passive_tab_pane_g3_cp3_srt

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp3_srt_ParamLimits

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp3_srt

0x44cb,	// (0x0003aa09) tabs_4_active_pane_srt_g1

0xc9de,	// (0x00042f1c) tabs_4_active_pane_srt_t1_ParamLimits

0xc9de,	// (0x00042f1c) tabs_4_active_pane_srt_t1

0x44b9,	// (0x0003a9f7) bg_active_tab_pane_g1_cp3_copy1

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp3_copy1

0x44c2,	// (0x0003aa00) bg_active_tab_pane_g3_cp3_copy1

0xb7f0,	// (0x00041d2e) tabs_2_long_active_pane_srt_ParamLimits

0xb7f0,	// (0x00041d2e) tabs_2_long_active_pane_srt

0xb7f0,	// (0x00041d2e) tabs_2_long_passive_pane_srt_ParamLimits

0xb7f0,	// (0x00041d2e) tabs_2_long_passive_pane_srt

0x28d7,	// (0x00038e15) bg_passive_tab_pane_cp4_srt_ParamLimits

0x28d7,	// (0x00038e15) bg_passive_tab_pane_cp4_srt

0x4179,	// (0x0003a6b7) bg_passive_tab_pane_g1_cp4_srt

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp4_srt

0x4182,	// (0x0003a6c0) bg_passive_tab_pane_g3_cp4_srt

0xb7f0,	// (0x00041d2e) bg_active_tab_pane_cp4_srt_ParamLimits

0xb7f0,	// (0x00041d2e) bg_active_tab_pane_cp4_srt

0xc7d6,	// (0x00042d14) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc7d6,	// (0x00042d14) tabs_2_long_active_pane_srt_t1

0x4179,	// (0x0003a6b7) bg_active_tab_pane_g1_cp4_srt

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp4_srt

0x4182,	// (0x0003a6c0) bg_active_tab_pane_g3_cp4_srt

0xb7e2,	// (0x00041d20) tabs_3_long_active_pane_srt_ParamLimits

0xb7e2,	// (0x00041d20) tabs_3_long_active_pane_srt

0xb7e2,	// (0x00041d20) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb7e2,	// (0x00041d20) tabs_3_long_passive_pane_cp_srt

0xb7e2,	// (0x00041d20) tabs_3_long_passive_pane_srt_ParamLimits

0xb7e2,	// (0x00041d20) tabs_3_long_passive_pane_srt

0x28d7,	// (0x00038e15) bg_passive_tab_pane_cp5_srt_ParamLimits

0x28d7,	// (0x00038e15) bg_passive_tab_pane_cp5_srt

0x2277,	// (0x000387b5) bg_passive_tab_pane_g1_cp5_srt

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp5_srt

0x2280,	// (0x000387be) bg_passive_tab_pane_g3_cp5_srt

0xb7f0,	// (0x00041d2e) bg_active_tab_pane_cp5_srt_ParamLimits

0xb7f0,	// (0x00041d2e) bg_active_tab_pane_cp5_srt

0xc7c0,	// (0x00042cfe) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc7c0,	// (0x00042cfe) tabs_3_long_active_pane_srt_t1

0x2277,	// (0x000387b5) bg_active_tab_pane_g1_cp5_srt

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp5_srt

0x2280,	// (0x000387be) bg_active_tab_pane_g3_cp5_srt

0x4159,	// (0x0003a697) navi_text_pane_srt_t1

0x4151,	// (0x0003a68f) navi_icon_pane_srt_g1

0x2779,	// (0x00038cb7) midp_editing_number_pane_srt

0x25b0,	// (0x00038aee) midp_ticker_pane_srt

0x2781,	// (0x00038cbf) midp_ticker_pane_srt_g1

0x2789,	// (0x00038cc7) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00045c8b) midp_ticker_pane_srt_g

0x2791,	// (0x00038ccf) midp_ticker_pane_srt_t1

0x4142,	// (0x0003a680) midp_editing_number_pane_t1_copy1

0xa2af,	// (0x000407ed) listscroll_midp_pane

0xa2af,	// (0x000407ed) midp_form_pane

0x2627,	// (0x00038b65) midp_info_popup_window_ParamLimits

0x2627,	// (0x00038b65) midp_info_popup_window

0xbf19,	// (0x00042457) bg_popup_sub_pane_cp50_ParamLimits

0xbf19,	// (0x00042457) bg_popup_sub_pane_cp50

0x3239,	// (0x00039777) listscroll_midp_info_pane_ParamLimits

0x3239,	// (0x00039777) listscroll_midp_info_pane

0x3219,	// (0x00039757) listscroll_form_midp_pane_ParamLimits

0x3219,	// (0x00039757) listscroll_form_midp_pane

0x3225,	// (0x00039763) scroll_bar_cp050

0x3219,	// (0x00039757) list_midp_pane

0x4f6d,	// (0x0003b4ab) signal_pane_g2_cp

0x3133,	// (0x00039671) listscroll_midp_info_pane_t1_ParamLimits

0x3133,	// (0x00039671) listscroll_midp_info_pane_t1

0x314b,	// (0x00039689) listscroll_midp_info_pane_t2_ParamLimits

0x314b,	// (0x00039689) listscroll_midp_info_pane_t2

0x3189,	// (0x000396c7) listscroll_midp_info_pane_t3_ParamLimits

0x3189,	// (0x000396c7) listscroll_midp_info_pane_t3

0x31c3,	// (0x00039701) listscroll_midp_info_pane_t4_ParamLimits

0x31c3,	// (0x00039701) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00045d3e) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00045d3e) listscroll_midp_info_pane_t

0xbf6e,	// (0x000424ac) scroll_pane_cp21

0x30cd,	// (0x0003960b) form_midp_field_choice_group_pane

0x30d6,	// (0x00039614) form_midp_field_text_pane

0x3119,	// (0x00039657) form_midp_field_time_pane

0x3121,	// (0x0003965f) form_midp_gauge_slider_pane

0x312a,	// (0x00039668) form_midp_gauge_wait_pane

0xb794,	// (0x00041cd2) form_midp_image_pane

0xac88,	// (0x000411c6) list_single_midp_pane_ParamLimits

0xac88,	// (0x000411c6) list_single_midp_pane

0xc5d1,	// (0x00042b0f) form_midp_field_text_pane_t1

0x2e83,	// (0x000393c1) input_focus_pane_cp050

0x30bc,	// (0x000395fa) list_midp_form_text_pane

0x3060,	// (0x0003959e) form_midp_field_choice_group_pane_t1

0x306e,	// (0x000395ac) input_focus_pane_cp051

0x3082,	// (0x000395c0) list_midp_choice_pane

0xb794,	// (0x00041cd2) status_idle_pane

0x3044,	// (0x00039582) form_midp_field_time_pane_t1

0xb78a,	// (0x00041cc8) wait_anim_pane_g2_copy1

0x3052,	// (0x00039590) form_midp_field_time_pane_t2

0x0001,

0x26d7,	// (0x00038c15) aid_navinavi_width_2_pane

0xf7fb,	// (0x00045d39) form_midp_field_time_pane_t

0xb794,	// (0x00041cd2) input_focus_pane_cp052

0xb794,	// (0x00041cd2) bg_input_focus_pane_cp040

0x3004,	// (0x00039542) form_midp_gauge_slider_pane_t1

0x3012,	// (0x00039550) form_midp_gauge_slider_pane_t2

0xc5b5,	// (0x00042af3) form_midp_gauge_slider_pane_t3

0xc5c3,	// (0x00042b01) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00045d30) form_midp_gauge_slider_pane_t

0x303c,	// (0x0003957a) form_midp_slider_pane

0xb7f0,	// (0x00041d2e) bg_input_focus_pane_cp041_ParamLimits

0xb7f0,	// (0x00041d2e) bg_input_focus_pane_cp041

0x2fd1,	// (0x0003950f) form_midp_gauge_wait_pane_t1_ParamLimits

0x2fd1,	// (0x0003950f) form_midp_gauge_wait_pane_t1

0x2fe3,	// (0x00039521) form_midp_gauge_wait_pane_t2_ParamLimits

0x2fe3,	// (0x00039521) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00045d2b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00045d2b) form_midp_gauge_wait_pane_t

0x2ff5,	// (0x00039533) form_midp_wait_pane_ParamLimits

0x2ff5,	// (0x00039533) form_midp_wait_pane

0x2f99,	// (0x000394d7) form_midp_image_pane_g1

0x2fa2,	// (0x000394e0) form_midp_image_pane_t1

0x2fb1,	// (0x000394ef) form_midp_image_pane_t2

0x2fc0,	// (0x000394fe) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00045d24) form_midp_image_pane_t

0x2f90,	// (0x000394ce) list_single_midp_pane_g1

0xd50f,	// (0x00043a4d) list_single_midp_pane_t1

0xc59e,	// (0x00042adc) list_midp_form_item_pane_ParamLimits

0xc59e,	// (0x00042adc) list_midp_form_item_pane

0x267f,	// (0x00038bbd) list_midp_form_item_pane_t1

0x268e,	// (0x00038bcc) midp_ticker_pane_g1

0x269a,	// (0x00038bd8) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00045c71) midp_ticker_pane_g

0xa353,	// (0x00040891) midp_ticker_pane_t1

0xc95f,	// (0x00042e9d) midp_editing_number_pane_t1

0x438d,	// (0x0003a8cb) midp_editing_number_pane

0x439c,	// (0x0003a8da) midp_ticker_pane

0x4132,	// (0x0003a670) ai_message_heading_pane

0xb794,	// (0x00041cd2) bg_popup_window_pane_cp14

0x413a,	// (0x0003a678) listscroll_ai_message_pane

0x40b8,	// (0x0003a5f6) ai_message_heading_pane_g1_ParamLimits

0x40b8,	// (0x0003a5f6) ai_message_heading_pane_g1

0x40c4,	// (0x0003a602) ai_message_heading_pane_g2_ParamLimits

0x40c4,	// (0x0003a602) ai_message_heading_pane_g2

0x40d2,	// (0x0003a610) ai_message_heading_pane_g3_ParamLimits

0x40d2,	// (0x0003a610) ai_message_heading_pane_g3

0x40de,	// (0x0003a61c) ai_message_heading_pane_g4_ParamLimits

0x40de,	// (0x0003a61c) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00045e65) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00045e65) ai_message_heading_pane_g

0x40ea,	// (0x0003a628) ai_message_heading_pane_t1_ParamLimits

0x40ea,	// (0x0003a628) ai_message_heading_pane_t1

0x4104,	// (0x0003a642) ai_message_heading_pane_t2_ParamLimits

0x4104,	// (0x0003a642) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00045e6e) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00045e6e) ai_message_heading_pane_t

0x4118,	// (0x0003a656) bg_popup_heading_pane_cp1_ParamLimits

0x4118,	// (0x0003a656) bg_popup_heading_pane_cp1

0x40a6,	// (0x0003a5e4) list_ai_message_pane_ParamLimits

0x40a6,	// (0x0003a5e4) list_ai_message_pane

0xbf6e,	// (0x000424ac) scroll_pane_cp10

0x4042,	// (0x0003a580) list_ai_message_pane_g1

0x404a,	// (0x0003a588) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x00045e42) list_ai_message_pane_g

0x4052,	// (0x0003a590) list_ai_message_pane_t1_ParamLimits

0x4052,	// (0x0003a590) list_ai_message_pane_t1

0x4067,	// (0x0003a5a5) list_ai_message_pane_t2_ParamLimits

0x4067,	// (0x0003a5a5) list_ai_message_pane_t2

0x407c,	// (0x0003a5ba) list_ai_message_pane_t3_ParamLimits

0x407c,	// (0x0003a5ba) list_ai_message_pane_t3

0x4091,	// (0x0003a5cf) list_ai_message_pane_t4_ParamLimits

0x4091,	// (0x0003a5cf) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00045e47) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00045e47) list_ai_message_pane_t

0xc7a6,	// (0x00042ce4) cell_ai_soft_ind_pane_ParamLimits

0xc7a6,	// (0x00042ce4) cell_ai_soft_ind_pane

0x26b8,	// (0x00038bf6) cell_ai_soft_ind_pane_g1_ParamLimits

0x26b8,	// (0x00038bf6) cell_ai_soft_ind_pane_g1

0xb794,	// (0x00041cd2) grid_highlight_cp1

0x26c5,	// (0x00038c03) text_secondary_cp56_ParamLimits

0x26c5,	// (0x00038c03) text_secondary_cp56

0x4000,	// (0x0003a53e) example_general_pane_ParamLimits

0x4000,	// (0x0003a53e) example_general_pane

0x400c,	// (0x0003a54a) example_parent_pane_g1_ParamLimits

0x400c,	// (0x0003a54a) example_parent_pane_g1

0x4018,	// (0x0003a556) example_parent_pane_t1_ParamLimits

0x4018,	// (0x0003a556) example_parent_pane_t1

0xa8b5,	// (0x00040df3) popup_preview_text_window_ParamLimits

0xa8b5,	// (0x00040df3) popup_preview_text_window

0x24df,	// (0x00038a1d) list_single_pane_cp2_g4

0xb9f1,	// (0x00041f2f) bg_popup_preview_window_pane_ParamLimits

0xb9f1,	// (0x00041f2f) bg_popup_preview_window_pane

0x3d49,	// (0x0003a287) popup_preview_text_window_t1_ParamLimits

0x3d49,	// (0x0003a287) popup_preview_text_window_t1

0x3d67,	// (0x0003a2a5) popup_preview_text_window_t2_ParamLimits

0x3d67,	// (0x0003a2a5) popup_preview_text_window_t2

0x3db0,	// (0x0003a2ee) popup_preview_text_window_t3_ParamLimits

0x3db0,	// (0x0003a2ee) popup_preview_text_window_t3

0x3df5,	// (0x0003a333) popup_preview_text_window_t4_ParamLimits

0x3df5,	// (0x0003a333) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00045e16) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00045e16) popup_preview_text_window_t

0x3e73,	// (0x0003a3b1) scroll_pane_cp11

0x2e0f,	// (0x0003934d) bg_popup_preview_window_pane_g1

0x3cfd,	// (0x0003a23b) bg_popup_preview_window_pane_g2

0x3d07,	// (0x0003a245) bg_popup_preview_window_pane_g3

0x3d11,	// (0x0003a24f) bg_popup_preview_window_pane_g4

0x3d1b,	// (0x0003a259) bg_popup_preview_window_pane_g5

0x3d25,	// (0x0003a263) bg_popup_preview_window_pane_g6

0x3d2d,	// (0x0003a26b) bg_popup_preview_window_pane_g7

0x3d35,	// (0x0003a273) bg_popup_preview_window_pane_g8

0xec4f,	// (0x0004518d) aid_popup_width_pane

0xa825,	// (0x00040d63) popup_midp_note_alarm_window_ParamLimits

0xa825,	// (0x00040d63) popup_midp_note_alarm_window

0xbe26,	// (0x00042364) data_form_pane_ParamLimits

0x9e39,	// (0x00040377) form_field_data_pane_g1

0x9e43,	// (0x00040381) form_field_data_pane_t1_ParamLimits

0xbe32,	// (0x00042370) input_focus_pane_ParamLimits

0xd38c,	// (0x000438ca) data_form_wide_pane_ParamLimits

0xd39d,	// (0x000438db) form_field_data_wide_pane_g1

0xd3a9,	// (0x000438e7) form_field_data_wide_pane_t1_ParamLimits

0xbbad,	// (0x000420eb) input_focus_pane_cp6_ParamLimits

0x9f71,	// (0x000404af) input_popup_find_pane_g1_ParamLimits

0x9f71,	// (0x000404af) input_popup_find_pane_g1

0xf016,	// (0x00045554) aid_navi_side_left_pane

0xf02b,	// (0x00045569) aid_navi_side_right_pane

0x3712,	// (0x00039c50) bg_popup_window_pane_cp30_ParamLimits

0x3712,	// (0x00039c50) bg_popup_window_pane_cp30

0x378c,	// (0x00039cca) popup_midp_note_alarm_window_g1_ParamLimits

0x378c,	// (0x00039cca) popup_midp_note_alarm_window_g1

0x37bc,	// (0x00039cfa) popup_midp_note_alarm_window_t1_ParamLimits

0x37bc,	// (0x00039cfa) popup_midp_note_alarm_window_t1

0x385d,	// (0x00039d9b) popup_midp_note_alarm_window_t2_ParamLimits

0x385d,	// (0x00039d9b) popup_midp_note_alarm_window_t2

0x390b,	// (0x00039e49) popup_midp_note_alarm_window_t3_ParamLimits

0x390b,	// (0x00039e49) popup_midp_note_alarm_window_t3

0x393d,	// (0x00039e7b) popup_midp_note_alarm_window_t4_ParamLimits

0x393d,	// (0x00039e7b) popup_midp_note_alarm_window_t4

0x3963,	// (0x00039ea1) popup_midp_note_alarm_window_t5_ParamLimits

0x3963,	// (0x00039ea1) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00045db3) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00045db3) popup_midp_note_alarm_window_t

0x3a0f,	// (0x00039f4d) wait_bar_pane_cp1_ParamLimits

0x3a0f,	// (0x00039f4d) wait_bar_pane_cp1

0xb794,	// (0x00041cd2) wait_anim_pane_copy1

0xb794,	// (0x00041cd2) wait_border_pane_copy1

0x33f7,	// (0x00039935) wait_border_pane_g1_copy1

0xd3c3,	// (0x00043901) form_field_popup_pane_g1

0x9e5d,	// (0x0004039b) form_field_popup_pane_t1_ParamLimits

0xbe32,	// (0x00042370) input_focus_pane_cp7_ParamLimits

0xbe60,	// (0x0004239e) list_form_pane_ParamLimits

0xd3cb,	// (0x00043909) form_field_popup_wide_pane_g1

0xd3d3,	// (0x00043911) form_field_popup_wide_pane_t1_ParamLimits

0xbe32,	// (0x00042370) input_focus_pane_cp8_ParamLimits

0xbe6c,	// (0x000423aa) list_form_wide_pane_ParamLimits

0x4554,	// (0x0003aa92) aid_size_cell_graphic_pane

0x9edc,	// (0x0004041a) data_form_pane_t1_ParamLimits

0xae0c,	// (0x0004134a) data_form_wide_pane_t1_ParamLimits

0xc203,	// (0x00042741) bg_status_flat_pane

0x9635,	// (0x0003fb73) title_pane_t1_ParamLimits

0xb7aa,	// (0x00041ce8) title_pane_t2_ParamLimits

0xb7d0,	// (0x00041d0e) title_pane_t3_ParamLimits

0xf532,	// (0x00045a70) title_pane_t_ParamLimits

0xa0b4,	// (0x000405f2) level_1_signal_ParamLimits

0xa0c6,	// (0x00040604) level_2_signal_ParamLimits

0xa0d9,	// (0x00040617) level_3_signal_ParamLimits

0xa0ec,	// (0x0004062a) level_4_signal_ParamLimits

0xa0ff,	// (0x0004063d) level_5_signal_ParamLimits

0xa112,	// (0x00040650) level_6_signal_ParamLimits

0xa125,	// (0x00040663) level_7_signal_ParamLimits

0xa0b4,	// (0x000405f2) level_1_battery_ParamLimits

0xa0c6,	// (0x00040604) level_2_battery_ParamLimits

0xa0d9,	// (0x00040617) level_3_battery_ParamLimits

0xa0ec,	// (0x0004062a) level_4_battery_ParamLimits

0xa0ff,	// (0x0004063d) level_5_battery_ParamLimits

0xa112,	// (0x00040650) level_6_battery_ParamLimits

0xa125,	// (0x00040663) level_7_battery_ParamLimits

0x3617,	// (0x00039b55) bg_status_flat_pane_g1

0x361f,	// (0x00039b5d) bg_status_flat_pane_g2

0x3627,	// (0x00039b65) bg_status_flat_pane_g3

0x362f,	// (0x00039b6d) bg_status_flat_pane_g4

0x3637,	// (0x00039b75) bg_status_flat_pane_g5

0x363f,	// (0x00039b7d) bg_status_flat_pane_g6

0x3647,	// (0x00039b85) bg_status_flat_pane_g7

0x96c9,	// (0x0003fc07) tabs_3_active_pane_t1_ParamLimits

0x96c9,	// (0x0003fc07) tabs_3_passive_pane_t1_ParamLimits

0x96e3,	// (0x0003fc21) tabs_4_active_pane_t1_ParamLimits

0x96e3,	// (0x0003fc21) tabs_4_1_passive_pane_t1_ParamLimits

0x9f87,	// (0x000404c5) tabs_2_active_pane_t1_ParamLimits

0x9f87,	// (0x000404c5) tabs_2_passive_pane_t1_ParamLimits

0xb7f0,	// (0x00041d2e) bg_active_tab_pane_cp4_ParamLimits

0x9f99,	// (0x000404d7) tabs_2_long_active_pane_t1_ParamLimits

0x28d7,	// (0x00038e15) bg_passive_tab_pane_cp4_ParamLimits

0x0a4d,	// (0x00036f8b) list_single_midp_graphic_pane_t1_ParamLimits

0xb7f0,	// (0x00041d2e) bg_active_tab_pane_cp5_ParamLimits

0x9fac,	// (0x000404ea) tabs_3_long_active_pane_t1_ParamLimits

0x28d7,	// (0x00038e15) bg_passive_tab_pane_cp5_ParamLimits

0x0a4d,	// (0x00036f8b) list_single_midp_graphic_pane_t1

0xc203,	// (0x00042741) bg_status_flat_pane_ParamLimits

0x2a91,	// (0x00038fcf) indicator_pane_cp2_ParamLimits

0x2a91,	// (0x00038fcf) indicator_pane_cp2

0xc399,	// (0x000428d7) navi_pane_srt_ParamLimits

0xc399,	// (0x000428d7) navi_pane_srt

0x2bf8,	// (0x00039136) popup_clock_digital_analogue_window_cp1

0xb834,	// (0x00041d72) indicator_pane_t1

0x25b0,	// (0x00038aee) copy_highlight_pane

0x25b0,	// (0x00038aee) cursor_graphics_pane

0x25b0,	// (0x00038aee) graphic_within_text_pane

0x25b0,	// (0x00038aee) link_highlight_pane

0x3e36,	// (0x0003a374) popup_preview_text_window_t5_ParamLimits

0x3e36,	// (0x0003a374) popup_preview_text_window_t5

0x26e1,	// (0x00038c1f) cursor_digital_pane

0x26e1,	// (0x00038c1f) cursor_primary_pane

0x26f2,	// (0x00038c30) cursor_primary_small_pane

0x26fa,	// (0x00038c38) cursor_secondary_pane

0x2702,	// (0x00038c40) cursor_title_pane

0x26e1,	// (0x00038c1f) link_highlight_digital_pane

0x26e9,	// (0x00038c27) link_highlight_primary_pane

0x26f2,	// (0x00038c30) link_highlight_primary_small_pane

0x26fa,	// (0x00038c38) link_highlight_secondary_pane

0x2702,	// (0x00038c40) link_highlight_title_pane

0x26e1,	// (0x00038c1f) copy_highlight_digital_pane

0x26e1,	// (0x00038c1f) copy_highlight_primary_pane

0x26f2,	// (0x00038c30) copy_highlight_primary_small_pane

0x26fa,	// (0x00038c38) copy_highlight_secondary_pane

0x2702,	// (0x00038c40) copy_highlight_title_pane

0x26fa,	// (0x00038c38) graphic_text_digital_pane

0x36b5,	// (0x00039bf3) graphic_text_primary_pane

0x36be,	// (0x00039bfc) graphic_text_primary_small_pane

0x26f2,	// (0x00038c30) graphic_text_secondary_pane

0x26e1,	// (0x00038c1f) graphic_text_title_pane

0xa365,	// (0x000408a3) cursor_primary_pane_g1

0x36a7,	// (0x00039be5) cursor_text_primary_t1

0xc626,	// (0x00042b64) cursor_primary_small_pane_g1

0x3699,	// (0x00039bd7) cursor_text_primary_small_t1

0xc61c,	// (0x00042b5a) cursor_primary_small_pane_g1_copy1

0x3681,	// (0x00039bbf) cursor_text_primary_small_t1_copy1

0x365f,	// (0x00039b9d) cursor_text_title_t1

0xc612,	// (0x00042b50) cursor_title_pane_g1

0xa365,	// (0x000408a3) cursor_digital_pane_g1

0x2714,	// (0x00038c52) cursor_text_digital_t1

0x2722,	// (0x00038c60) link_highlight_primary_pane_g1

0x3608,	// (0x00039b46) link_highlight_primary_pane_t1

0x2722,	// (0x00038c60) link_highlight_primary_small_pane_g1

0x272a,	// (0x00038c68) link_highlight_primary_small_pane_t1

0x2739,	// (0x00038c77) link_highlight_secondary_pane_g1

0x2741,	// (0x00038c7f) link_highlight_secondary_pane_t1

0x357c,	// (0x00039aba) link_highlight_title_pane_g1

0x3584,	// (0x00039ac2) link_highlight_title_pane_t1

0x3565,	// (0x00039aa3) link_highlight_digital_pane_g1

0x356d,	// (0x00039aab) link_highlight_digital_pane_t1

0x342d,	// (0x0003996b) copy_highlight_primary_pane_g1

0x3444,	// (0x00039982) copy_highlight_primary_pane_t1

0x342d,	// (0x0003996b) copy_highlight_primary_small_pane_g1

0x3435,	// (0x00039973) copy_highlight_primary_small_pane_t1

0x2750,	// (0x00038c8e) copy_highlight_secondary_pane_g1

0x2758,	// (0x00038c96) copy_highlight_secondary_pane_t1

0x3416,	// (0x00039954) copy_highlight_title_pane_g1

0x341e,	// (0x0003995c) copy_highlight_title_pane_t1

0x342d,	// (0x0003996b) copy_highlight_digital_pane_g1

0x4726,	// (0x0003ac64) copy_highlight_digital_pane_t1

0x467a,	// (0x0003abb8) graphic_text_primary_pane_g1

0x470a,	// (0x0003ac48) graphic_text_primary_pane_t1

0x4718,	// (0x0003ac56) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00045ee2) graphic_text_primary_pane_t

0x46e6,	// (0x0003ac24) graphic_text_primary_small_pane_g1

0x46ee,	// (0x0003ac2c) graphic_text_primary_small_pane_t1

0x46fc,	// (0x0003ac3a) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00045edd) graphic_text_primary_small_pane_t

0x46c2,	// (0x0003ac00) graphic_text_secondary_pane_g1

0x46ca,	// (0x0003ac08) graphic_text_secondary_pane_t1

0x46d8,	// (0x0003ac16) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00045ed8) graphic_text_secondary_pane_t

0x469e,	// (0x0003abdc) graphic_text_title_pane_g1

0x46a6,	// (0x0003abe4) graphic_text_title_pane_t1

0x46b4,	// (0x0003abf2) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00045ed3) graphic_text_title_pane_t

0x467a,	// (0x0003abb8) graphic_text_digital_pane_g1

0x4682,	// (0x0003abc0) graphic_text_digital_pane_t1

0x4690,	// (0x0003abce) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00045ece) graphic_text_digital_pane_t

0xb7f0,	// (0x00041d2e) navi_icon_pane_srt_ParamLimits

0xb7f0,	// (0x00041d2e) navi_icon_pane_srt

0xb794,	// (0x00041cd2) navi_midp_pane_srt

0xb794,	// (0x00041cd2) navi_navi_pane_srt

0xb7f0,	// (0x00041d2e) navi_text_pane_srt_ParamLimits

0xb7f0,	// (0x00041d2e) navi_text_pane_srt

0x4645,	// (0x0003ab83) navi_navi_icon_text_pane_srt

0x464d,	// (0x0003ab8b) navi_navi_pane_srt_g1_ParamLimits

0x464d,	// (0x0003ab8b) navi_navi_pane_srt_g1

0x465f,	// (0x0003ab9d) navi_navi_pane_srt_g2_ParamLimits

0x465f,	// (0x0003ab9d) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00045ec9) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00045ec9) navi_navi_pane_srt_g

0x4671,	// (0x0003abaf) navi_navi_tabs_pane_srt

0x4645,	// (0x0003ab83) navi_navi_text_pane_srt

0x4645,	// (0x0003ab83) navi_navi_volume_pane_srt

0x4636,	// (0x0003ab74) navi_navi_text_pane_srt_t1

0x0ed4,	// (0x00037412) navi_navi_volume_pane_srt_g1

0x0edc,	// (0x0003741a) volume_small_pane_srt_ParamLimits

0x0edc,	// (0x0003741a) volume_small_pane_srt

0x018e,	// (0x000366cc) volume_small_pane_srt_g1_ParamLimits

0x018e,	// (0x000366cc) volume_small_pane_srt_g1

0x019e,	// (0x000366dc) volume_small_pane_srt_g2_ParamLimits

0x019e,	// (0x000366dc) volume_small_pane_srt_g2

0x01af,	// (0x000366ed) volume_small_pane_srt_g3_ParamLimits

0x01af,	// (0x000366ed) volume_small_pane_srt_g3

0x01c0,	// (0x000366fe) volume_small_pane_srt_g4_ParamLimits

0x01c0,	// (0x000366fe) volume_small_pane_srt_g4

0x01d1,	// (0x0003670f) volume_small_pane_srt_g5_ParamLimits

0x01d1,	// (0x0003670f) volume_small_pane_srt_g5

0x01e2,	// (0x00036720) volume_small_pane_srt_g6_ParamLimits

0x01e2,	// (0x00036720) volume_small_pane_srt_g6

0x01f3,	// (0x00036731) volume_small_pane_srt_g7_ParamLimits

0x01f3,	// (0x00036731) volume_small_pane_srt_g7

0x0204,	// (0x00036742) volume_small_pane_srt_g8_ParamLimits

0x0204,	// (0x00036742) volume_small_pane_srt_g8

0x0215,	// (0x00036753) volume_small_pane_srt_g9_ParamLimits

0x0215,	// (0x00036753) volume_small_pane_srt_g9

0x0226,	// (0x00036764) volume_small_pane_srt_g10_ParamLimits

0x0226,	// (0x00036764) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x00045c76) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x00045c76) volume_small_pane_srt_g

0xbaa6,	// (0x00041fe4) query_popup_data_pane_cp2

0x461c,	// (0x0003ab5a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x461c,	// (0x0003ab5a) navi_navi_icon_text_pane_srt_t1

0x36b5,	// (0x00039bf3) navi_tabs_2_long_pane_srt

0x36b5,	// (0x00039bf3) navi_tabs_2_pane_srt

0x36b5,	// (0x00039bf3) navi_tabs_3_long_pane_srt

0x36b5,	// (0x00039bf3) navi_tabs_3_pane_srt

0x36b5,	// (0x00039bf3) navi_tabs_4_pane_srt

0x0eb4,	// (0x000373f2) tabs_2_active_pane_srt_ParamLimits

0x0eb4,	// (0x000373f2) tabs_2_active_pane_srt

0x0ec4,	// (0x00037402) tabs_2_passive_pane_srt_ParamLimits

0x0ec4,	// (0x00037402) tabs_2_passive_pane_srt

0x2e83,	// (0x000393c1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2e83,	// (0x000393c1) bg_passive_tab_pane_cp1_srt

0x45e8,	// (0x0003ab26) bg_passive_tab_pane_g1_cp1_srt

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp1_srt

0x45f1,	// (0x0003ab2f) bg_passive_tab_pane_g3_cp1_srt

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp1_srt_ParamLimits

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp1_srt

0x45fa,	// (0x0003ab38) tabs_2_active_pane_srt_g1

0xca66,	// (0x00042fa4) tabs_2_active_pane_srt_t1_ParamLimits

0xca66,	// (0x00042fa4) tabs_2_active_pane_srt_t1

0x45e8,	// (0x0003ab26) bg_active_tab_pane_g1_cp1_srt

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp1_srt

0x45f1,	// (0x0003ab2f) bg_active_tab_pane_g3_cp1_srt

0x0e81,	// (0x000373bf) tabs_3_active_pane_srt_ParamLimits

0x0e81,	// (0x000373bf) tabs_3_active_pane_srt

0x0e92,	// (0x000373d0) tabs_3_passive_pane_cp_srt_ParamLimits

0x0e92,	// (0x000373d0) tabs_3_passive_pane_cp_srt

0x0ea3,	// (0x000373e1) tabs_3_passive_pane_srt_ParamLimits

0x0ea3,	// (0x000373e1) tabs_3_passive_pane_srt

0x2e83,	// (0x000393c1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2e83,	// (0x000393c1) bg_passive_tab_pane_cp2_srt

0x2767,	// (0x00038ca5) bg_passive_tab_pane_g1_cp2_srt

0x0001,	// (0x0003653f) bg_passive_tab_pane_g2_cp2_srt

0x2770,	// (0x00038cae) bg_passive_tab_pane_g3_cp2_srt

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp2_srt_ParamLimits

0xb7e2,	// (0x00041d20) bg_active_tab_pane_cp2_srt

0x45ce,	// (0x0003ab0c) tabs_3_active_pane_srt_g1

0xca50,	// (0x00042f8e) tabs_3_active_pane_srt_t1_ParamLimits

0xca50,	// (0x00042f8e) tabs_3_active_pane_srt_t1

0x2767,	// (0x00038ca5) bg_active_tab_pane_g1_cp2_srt

0x0001,	// (0x0003653f) bg_active_tab_pane_g2_cp2_srt

0x2770,	// (0x00038cae) bg_active_tab_pane_g3_cp2_srt

0x0e39,	// (0x00037377) tabs_4_active_pane_srt_ParamLimits

0x0e39,	// (0x00037377) tabs_4_active_pane_srt

0x0e4b,	// (0x00037389) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0e4b,	// (0x00037389) tabs_4_passive_pane_cp2_srt

0x0378,	// (0x000368b6) aid_size_cell_toolbar

0x41ec,	// (0x0003a72a) main_idle_act_pane_ParamLimits

0x0557,	// (0x00036a95) popup_large_graphic_colour_window_ParamLimits

0xab7b,	// (0x000410b9) popup_toolbar_window_ParamLimits

0xab7b,	// (0x000410b9) popup_toolbar_window

0xd534,	// (0x00043a72) list_single_graphic_2heading_pane_ParamLimits

0xd534,	// (0x00043a72) list_single_graphic_2heading_pane

0xc146,	// (0x00042684) aid_size_cell_apps_grid_lsc_pane

0xc158,	// (0x00042696) aid_size_cell_apps_grid_prt_pane

0x28d7,	// (0x00038e15) bg_wml_button_pane_cp1_ParamLimits

0x28d7,	// (0x00038e15) bg_wml_button_pane_cp1

0xc5d1,	// (0x00042b0f) form_midp_field_text_pane_t1_ParamLimits

0x2e83,	// (0x000393c1) input_focus_pane_cp050_ParamLimits

0x30bc,	// (0x000395fa) list_midp_form_text_pane_ParamLimits

0x306e,	// (0x000395ac) input_focus_pane_cp051_ParamLimits

0x3082,	// (0x000395c0) list_midp_choice_pane_ParamLimits

0xc56a,	// (0x00042aa8) list_single_2graphic_pane_cp3_ParamLimits

0xc56a,	// (0x00042aa8) list_single_2graphic_pane_cp3

0xc57d,	// (0x00042abb) list_single_midp_graphic_pane_ParamLimits

0xc57d,	// (0x00042abb) list_single_midp_graphic_pane

0xeeab,	// (0x000453e9) list_single_graphic_2heading_pane_g1_ParamLimits

0xeeab,	// (0x000453e9) list_single_graphic_2heading_pane_g1

0xeeb7,	// (0x000453f5) list_single_graphic_2heading_pane_g4_ParamLimits

0xeeb7,	// (0x000453f5) list_single_graphic_2heading_pane_g4

0xeec3,	// (0x00045401) list_single_graphic_2heading_pane_g5_ParamLimits

0xeec3,	// (0x00045401) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x00045cc9) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x00045cc9) list_single_graphic_2heading_pane_g

0xeecf,	// (0x0004540d) list_single_graphic_2heading_pane_t1_ParamLimits

0xeecf,	// (0x0004540d) list_single_graphic_2heading_pane_t1

0xeee3,	// (0x00045421) list_single_graphic_2heading_pane_t2_ParamLimits

0xeee3,	// (0x00045421) list_single_graphic_2heading_pane_t2

0xeeff,	// (0x0004543d) list_single_graphic_2heading_pane_t3_ParamLimits

0xeeff,	// (0x0004543d) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x00045cd0) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x00045cd0) list_single_graphic_2heading_pane_t

0x2d4d,	// (0x0003928b) bg_popup_sub_pane_cp2

0x2d77,	// (0x000392b5) grid_toobar_pane

0x09bd,	// (0x00036efb) cell_toolbar_pane_ParamLimits

0x09bd,	// (0x00036efb) cell_toolbar_pane

0x2db3,	// (0x000392f1) cell_toolbar_pane_g1_ParamLimits

0x2db3,	// (0x000392f1) cell_toolbar_pane_g1

0x2dc7,	// (0x00039305) cell_toolbar_pane_g2_ParamLimits

0x2dc7,	// (0x00039305) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x00045cde) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x00045cde) cell_toolbar_pane_g

0x2de9,	// (0x00039327) grid_highlight_pane_cp2_ParamLimits

0x2de9,	// (0x00039327) grid_highlight_pane_cp2

0x2e03,	// (0x00039341) toolbar_button_pane

0x2e0f,	// (0x0003934d) toolbar_button_pane_g1

0x2e17,	// (0x00039355) toolbar_button_pane_g2

0x2e1f,	// (0x0003935d) toolbar_button_pane_g3

0x2e27,	// (0x00039365) toolbar_button_pane_g4

0x2e2f,	// (0x0003936d) toolbar_button_pane_g5

0x2e37,	// (0x00039375) toolbar_button_pane_g6

0x2e3f,	// (0x0003937d) toolbar_button_pane_g7

0x2e47,	// (0x00039385) toolbar_button_pane_g8

0x2e4f,	// (0x0003938d) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00045ce3) toolbar_button_pane_g

0x09f5,	// (0x00036f33) list_single_2graphic_pane_g1_cp3_ParamLimits

0x09f5,	// (0x00036f33) list_single_2graphic_pane_g1_cp3

0xac16,	// (0x00041154) list_single_2graphic_pane_g2_cp3_ParamLimits

0xac16,	// (0x00041154) list_single_2graphic_pane_g2_cp3

0x0a12,	// (0x00036f50) list_single_2graphic_pane_g3_cp3

0x0a1a,	// (0x00036f58) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a1a,	// (0x00036f58) list_single_2graphic_pane_g4_cp3

0x0a26,	// (0x00036f64) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0a26,	// (0x00036f64) list_single_2graphic_pane_t1_cp3

0x0a41,	// (0x00036f7f) list_single_midp_graphic_pane_g2_ParamLimits

0x0a41,	// (0x00036f7f) list_single_midp_graphic_pane_g2

0x0380,	// (0x000368be) aid_zoom_text_primary

0xeea3,	// (0x000453e1) aid_zoom_text_secondary

0x2821,	// (0x00038d5f) status_small_pane_g7_ParamLimits

0x2821,	// (0x00038d5f) status_small_pane_g7

0x2844,	// (0x00038d82) status_small_pane_t1_ParamLimits

0x9605,	// (0x0003fb43) title_pane_g2

0x0003,

0xf529,	// (0x00045a67) title_pane_g

0x98a5,	// (0x0003fde3) aid_size_cell_colour_1_pane_ParamLimits

0x98a5,	// (0x0003fde3) aid_size_cell_colour_1_pane

0x98b9,	// (0x0003fdf7) aid_size_cell_colour_2_pane_ParamLimits

0x98b9,	// (0x0003fdf7) aid_size_cell_colour_2_pane

0x98cd,	// (0x0003fe0b) aid_size_cell_colour_3_pane_ParamLimits

0x98cd,	// (0x0003fe0b) aid_size_cell_colour_3_pane

0x98e1,	// (0x0003fe1f) aid_size_cell_colour_4_pane_ParamLimits

0x98e1,	// (0x0003fe1f) aid_size_cell_colour_4_pane

0xef53,	// (0x00045491) title_pane_stacon_g1_ParamLimits

0xef53,	// (0x00045491) title_pane_stacon_g1

0x349b,	// (0x000399d9) popup_note_wait_window_g3_ParamLimits

0x349b,	// (0x000399d9) popup_note_wait_window_g3

0x3512,	// (0x00039a50) popup_note_wait_window_t5_ParamLimits

0x3512,	// (0x00039a50) popup_note_wait_window_t5

0xb794,	// (0x00041cd2) main_feb_china_hwr_fs_writing_pane

0xa50c,	// (0x00040a4a) popup_feb_china_hwr_fs_window_ParamLimits

0xa50c,	// (0x00040a4a) popup_feb_china_hwr_fs_window

0xac27,	// (0x00041165) aid_size_cell_hwr_fs_ParamLimits

0xac27,	// (0x00041165) aid_size_cell_hwr_fs

0x2e83,	// (0x000393c1) bg_popup_sub_pane_cp3_ParamLimits

0x2e83,	// (0x000393c1) bg_popup_sub_pane_cp3

0xac3c,	// (0x0004117a) grid_hwr_fs_pane_ParamLimits

0xac3c,	// (0x0004117a) grid_hwr_fs_pane

0x0a90,	// (0x00036fce) linegrid_hwr_fs_pane_ParamLimits

0x0a90,	// (0x00036fce) linegrid_hwr_fs_pane

0xac54,	// (0x00041192) cell_hwr_fs_pane_ParamLimits

0xac54,	// (0x00041192) cell_hwr_fs_pane

0x2e8f,	// (0x000393cd) linegrid_hwr_fs_pane_g1_ParamLimits

0x2e8f,	// (0x000393cd) linegrid_hwr_fs_pane_g1

0xc53e,	// (0x00042a7c) linegrid_hwr_fs_pane_g2_ParamLimits

0xc53e,	// (0x00042a7c) linegrid_hwr_fs_pane_g2

0x2ead,	// (0x000393eb) linegrid_hwr_fs_pane_g3_ParamLimits

0x2ead,	// (0x000393eb) linegrid_hwr_fs_pane_g3

0x0ac4,	// (0x00037002) linegrid_hwr_fs_pane_g4_ParamLimits

0x0ac4,	// (0x00037002) linegrid_hwr_fs_pane_g4

0x0ae2,	// (0x00037020) linegrid_hwr_fs_pane_g5_ParamLimits

0x0ae2,	// (0x00037020) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00045d09) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00045d09) linegrid_hwr_fs_pane_g

0x2eb9,	// (0x000393f7) cell_hwr_fs_pane_g1_ParamLimits

0x2eb9,	// (0x000393f7) cell_hwr_fs_pane_g1

0x2c86,	// (0x000391c4) cell_hwr_fs_pane_g2_ParamLimits

0x2c86,	// (0x000391c4) cell_hwr_fs_pane_g2

0xc550,	// (0x00042a8e) cell_hwr_fs_pane_g3_ParamLimits

0xc550,	// (0x00042a8e) cell_hwr_fs_pane_g3

0xc55d,	// (0x00042a9b) cell_hwr_fs_pane_g4_ParamLimits

0xc55d,	// (0x00042a9b) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00045d14) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00045d14) cell_hwr_fs_pane_g

0xac7a,	// (0x000411b8) cell_hwr_fs_pane_t1

0xb794,	// (0x00041cd2) grid_highlight_pane_cp6

0xb794,	// (0x00041cd2) main_idle_act2_pane

0xbf55,	// (0x00042493) aid_inside_area_popup_secondary

0xc646,	// (0x00042b84) aid_inside_area_window_primary_ParamLimits

0xc646,	// (0x00042b84) aid_inside_area_window_primary

0x4735,	// (0x0003ac73) ai2_news_ticker_pane

0x473d,	// (0x0003ac7b) aid_size_cell_ai1_link_ParamLimits

0x473d,	// (0x0003ac7b) aid_size_cell_ai1_link

0x4757,	// (0x0003ac95) popup_ai2_data_window_ParamLimits

0x4757,	// (0x0003ac95) popup_ai2_data_window

0x4775,	// (0x0003acb3) popup_ai2_link_window_ParamLimits

0x4775,	// (0x0003acb3) popup_ai2_link_window

0x2e83,	// (0x000393c1) bg_popup_sub_pane_cp4_ParamLimits

0x2e83,	// (0x000393c1) bg_popup_sub_pane_cp4

0x478b,	// (0x0003acc9) grid_ai2_link_pane_ParamLimits

0x478b,	// (0x0003acc9) grid_ai2_link_pane

0x47a2,	// (0x0003ace0) popup_ai2_link_window_g1_ParamLimits

0x47a2,	// (0x0003ace0) popup_ai2_link_window_g1

0x47ae,	// (0x0003acec) popup_ai2_link_window_g2_ParamLimits

0x47ae,	// (0x0003acec) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00045ee7) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00045ee7) popup_ai2_link_window_g

0x47bf,	// (0x0003acfd) ai2_mp_button_pane

0x47c7,	// (0x0003ad05) ai2_mp_volume_pane

0x306e,	// (0x000395ac) bg_popup_sub_pane_cp5_ParamLimits

0x306e,	// (0x000395ac) bg_popup_sub_pane_cp5

0x47cf,	// (0x0003ad0d) heading_ai2_gene_pane_ParamLimits

0x47cf,	// (0x0003ad0d) heading_ai2_gene_pane

0x47db,	// (0x0003ad19) list_ai2_gene_pane_ParamLimits

0x47db,	// (0x0003ad19) list_ai2_gene_pane

0x4823,	// (0x0003ad61) cell_ai2_link_pane_ParamLimits

0x4823,	// (0x0003ad61) cell_ai2_link_pane

0x4839,	// (0x0003ad77) cell_ai2_link_pane_g1

0xb794,	// (0x00041cd2) grid_highlight_pane_cp7

0x0ef1,	// (0x0003742f) ai2_mp_volume_pane_g1

0x490c,	// (0x0003ae4a) ai2_mp_volume_pane_g2

0x4881,	// (0x0003adbf) list_ai2_gene_pane_t1

0x4914,	// (0x0003ae52) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00045f00) ai2_mp_volume_pane_g

0x0ef9,	// (0x00037437) volume_small_pane_cp3

0x491c,	// (0x0003ae5a) aid_size_cell_ai2_button

0x4924,	// (0x0003ae62) grid_ai2_button_pane

0x492d,	// (0x0003ae6b) cell_ai2_button_pane_ParamLimits

0x492d,	// (0x0003ae6b) cell_ai2_button_pane

0xb78a,	// (0x00041cc8) cell_ai2_button_pane_g1

0xb794,	// (0x00041cd2) grid_highlight_pane_cp8

0x48cc,	// (0x0003ae0a) ai2_gene_pane_t1_ParamLimits

0x48cc,	// (0x0003ae0a) ai2_gene_pane_t1

0xa49c,	// (0x000409da) aid_height_parent_landscape

0xc7ed,	// (0x00042d2b) aid_height_set_list

0x41ec,	// (0x0003a72a) aid_size_parent

0x4554,	// (0x0003aa92) aid_size_cell_graphic_pane_ParamLimits

0x47eb,	// (0x0003ad29) popup_ai2_data_window_g1_ParamLimits

0x47eb,	// (0x0003ad29) popup_ai2_data_window_g1

0x47f7,	// (0x0003ad35) ai2_news_ticker_pane_g1

0x47ff,	// (0x0003ad3d) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00045eec) ai2_news_ticker_pane_g

0x4807,	// (0x0003ad45) ai2_news_ticker_pane_t1

0x4815,	// (0x0003ad53) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00045ef1) ai2_news_ticker_pane_t

0x4842,	// (0x0003ad80) heading_ai2_gene_pane_g1

0x484a,	// (0x0003ad88) heading_ai2_gene_pane_t1_ParamLimits

0x484a,	// (0x0003ad88) heading_ai2_gene_pane_t1

0x485f,	// (0x0003ad9d) list_highlight_pane_cp6

0x4867,	// (0x0003ada5) ai2_gene_pane_ParamLimits

0x4867,	// (0x0003ada5) ai2_gene_pane

0x488f,	// (0x0003adcd) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00045ef6) list_ai2_gene_pane_t

0x489d,	// (0x0003addb) list_highlight_pane_cp8_ParamLimits

0x489d,	// (0x0003addb) list_highlight_pane_cp8

0x48ae,	// (0x0003adec) ai2_gene_pane_g1_ParamLimits

0x48ae,	// (0x0003adec) ai2_gene_pane_g1

0x48c0,	// (0x0003adfe) ai2_gene_pane_g2_ParamLimits

0x48c0,	// (0x0003adfe) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00045efb) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00045efb) ai2_gene_pane_g

0xbdc8,	// (0x00042306) scroll_pane_cp12

0xa45b,	// (0x00040999) control_pane_t3_ParamLimits

0xa45b,	// (0x00040999) control_pane_t3

0x2835,	// (0x00038d73) status_small_pane_g8_ParamLimits

0x2835,	// (0x00038d73) status_small_pane_g8

0xa5ae,	// (0x00040aec) popup_find_window_ParamLimits

0xa865,	// (0x00040da3) popup_note_image_window_ParamLimits

0xd2cb,	// (0x00043809) list_double2_graphic_pane_vc_g1_ParamLimits

0xd2cb,	// (0x00043809) list_double2_graphic_pane_vc_g1

0xd431,	// (0x0004396f) list_double2_graphic_pane_vc_g2_ParamLimits

0xd431,	// (0x0004396f) list_double2_graphic_pane_vc_g2

0xd43d,	// (0x0004397b) list_double2_graphic_pane_vc_g3_ParamLimits

0xd43d,	// (0x0004397b) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x00045cd7) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x00045cd7) list_double2_graphic_pane_vc_g

0xd449,	// (0x00043987) list_double2_graphic_pane_vc_t1_ParamLimits

0xd449,	// (0x00043987) list_double2_graphic_pane_vc_t1

0xd28b,	// (0x000437c9) list_single_heading_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437c9) list_single_heading_pane_vc_g1

0xd297,	// (0x000437d5) list_single_heading_pane_vc_g2_ParamLimits

0xd297,	// (0x000437d5) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_single_heading_pane_vc_g

0xd45f,	// (0x0004399d) list_single_heading_pane_vc_t1_ParamLimits

0xd45f,	// (0x0004399d) list_single_heading_pane_vc_t1

0xd475,	// (0x000439b3) list_single_heading_pane_vc_t2_ParamLimits

0xd475,	// (0x000439b3) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00045cf8) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00045cf8) list_single_heading_pane_vc_t

0xd487,	// (0x000439c5) list_setting_number_pane_vc_g1_ParamLimits

0xd487,	// (0x000439c5) list_setting_number_pane_vc_g1

0xd493,	// (0x000439d1) list_setting_number_pane_vc_g2_ParamLimits

0xd493,	// (0x000439d1) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00045cfd) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00045cfd) list_setting_number_pane_vc_g

0xd49f,	// (0x000439dd) list_setting_number_pane_vc_t1_ParamLimits

0xd49f,	// (0x000439dd) list_setting_number_pane_vc_t1

0xd4b3,	// (0x000439f1) list_setting_number_pane_vc_t2_ParamLimits

0xd4b3,	// (0x000439f1) list_setting_number_pane_vc_t2

0xd4cf,	// (0x00043a0d) list_setting_number_pane_vc_t3_ParamLimits

0xd4cf,	// (0x00043a0d) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00045d02) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00045d02) list_setting_number_pane_vc_t

0xd4fd,	// (0x00043a3b) set_value_pane_vc_ParamLimits

0xd4fd,	// (0x00043a3b) set_value_pane_vc

0xd534,	// (0x00043a72) list_double2_graphic_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_double2_graphic_pane_vc

0x43d5,	// (0x0003a913) list_double2_large_graphic_pane_vc_ParamLimits

0x43d5,	// (0x0003a913) list_double2_large_graphic_pane_vc

0xd534,	// (0x00043a72) list_double2_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_double2_pane_vc

0xd534,	// (0x00043a72) list_double_graphic_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_double_graphic_heading_pane_vc

0xd534,	// (0x00043a72) list_double_graphic_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_double_graphic_pane_vc

0xd534,	// (0x00043a72) list_double_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_double_heading_pane_vc

0x43e9,	// (0x0003a927) list_double_large_graphic_pane_vc_ParamLimits

0x43e9,	// (0x0003a927) list_double_large_graphic_pane_vc

0xd534,	// (0x00043a72) list_double_number_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_double_number_pane_vc

0xd534,	// (0x00043a72) list_double_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_double_pane_vc

0xd534,	// (0x00043a72) list_double_time_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_double_time_pane_vc

0xd534,	// (0x00043a72) list_setting_number_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_setting_number_pane_vc

0xd534,	// (0x00043a72) list_setting_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_setting_pane_vc

0xd534,	// (0x00043a72) list_single_graphic_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_single_graphic_heading_pane_vc

0xd534,	// (0x00043a72) list_single_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_single_heading_pane_vc

0xd534,	// (0x00043a72) list_single_number_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a72) list_single_number_heading_pane_vc

0xd2cb,	// (0x00043809) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd2cb,	// (0x00043809) list_double_graphic_heading_pane_vc_g1

0xd28b,	// (0x000437c9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd28b,	// (0x000437c9) list_double_graphic_heading_pane_vc_g2

0xd297,	// (0x000437d5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd297,	// (0x000437d5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00045f07) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00045f07) list_double_graphic_heading_pane_vc_g

0xd54b,	// (0x00043a89) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd54b,	// (0x00043a89) list_double_graphic_heading_pane_vc_t1

0xd561,	// (0x00043a9f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd561,	// (0x00043a9f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00045f0e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00045f0e) list_double_graphic_heading_pane_vc_t

0xd487,	// (0x000439c5) list_setting_pane_vc_g1_ParamLimits

0xd487,	// (0x000439c5) list_setting_pane_vc_g1

0xd493,	// (0x000439d1) list_setting_pane_vc_g2_ParamLimits

0xd493,	// (0x000439d1) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00045cfd) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00045cfd) list_setting_pane_vc_g

0xd57f,	// (0x00043abd) list_setting_pane_vc_t1_ParamLimits

0xd57f,	// (0x00043abd) list_setting_pane_vc_t1

0xd59b,	// (0x00043ad9) list_setting_pane_vc_t2_ParamLimits

0xd59b,	// (0x00043ad9) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00045f51) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00045f51) list_setting_pane_vc_t

0xd4fd,	// (0x00043a3b) set_value_pane_cp_vc_ParamLimits

0xd4fd,	// (0x00043a3b) set_value_pane_cp_vc

0xd28b,	// (0x000437c9) list_single_number_heading_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437c9) list_single_number_heading_pane_vc_g1

0xd297,	// (0x000437d5) list_single_number_heading_pane_vc_g2_ParamLimits

0xd297,	// (0x000437d5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_single_number_heading_pane_vc_g

0xd2a3,	// (0x000437e1) list_single_number_heading_pane_vc_t1_ParamLimits

0xd2a3,	// (0x000437e1) list_single_number_heading_pane_vc_t1

0xd5b7,	// (0x00043af5) list_single_number_heading_pane_vc_t2_ParamLimits

0xd5b7,	// (0x00043af5) list_single_number_heading_pane_vc_t2

0xd2b9,	// (0x000437f7) list_single_number_heading_pane_vc_t3_ParamLimits

0xd2b9,	// (0x000437f7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00045f56) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00045f56) list_single_number_heading_pane_vc_t

0xd2cb,	// (0x00043809) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd2cb,	// (0x00043809) list_single_graphic_heading_pane_vc_g1

0xd28b,	// (0x000437c9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd28b,	// (0x000437c9) list_single_graphic_heading_pane_vc_g4

0xd297,	// (0x000437d5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd297,	// (0x000437d5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c9,	// (0x00045f07) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00045f07) list_single_graphic_heading_pane_vc_g

0xd2a3,	// (0x000437e1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd2a3,	// (0x000437e1) list_single_graphic_heading_pane_vc_t1

0xd5cd,	// (0x00043b0b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd5cd,	// (0x00043b0b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x00045f5d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x00045f5d) list_single_graphic_heading_pane_vc_t

0xd28b,	// (0x000437c9) list_double2_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437c9) list_double2_pane_vc_g1

0xd297,	// (0x000437d5) list_double2_pane_vc_g2_ParamLimits

0xd297,	// (0x000437d5) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_double2_pane_vc_g

0xd51e,	// (0x00043a5c) list_double2_pane_vc_t1_ParamLimits

0xd51e,	// (0x00043a5c) list_double2_pane_vc_t1

0xd2d7,	// (0x00043815) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd2d7,	// (0x00043815) list_double2_large_graphic_pane_vc_g1

0xd2e3,	// (0x00043821) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd2e3,	// (0x00043821) list_double2_large_graphic_pane_vc_g2

0xd2ef,	// (0x0004382d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd2ef,	// (0x0004382d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00045afe) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00045afe) list_double2_large_graphic_pane_vc_g

0xd2fb,	// (0x00043839) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd2fb,	// (0x00043839) list_double2_large_graphic_pane_vc_t1

0xd5df,	// (0x00043b1d) list_double_time_pane_vc_g1_ParamLimits

0xd5df,	// (0x00043b1d) list_double_time_pane_vc_g1

0xd5eb,	// (0x00043b29) list_double_time_pane_vc_g2_ParamLimits

0xd5eb,	// (0x00043b29) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x00045f62) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x00045f62) list_double_time_pane_vc_g

0xd5f7,	// (0x00043b35) list_double_time_pane_vc_t1_ParamLimits

0xd5f7,	// (0x00043b35) list_double_time_pane_vc_t1

0xd621,	// (0x00043b5f) list_double_time_pane_vc_t2_ParamLimits

0xd621,	// (0x00043b5f) list_double_time_pane_vc_t2

0xd66a,	// (0x00043ba8) list_double_time_pane_vc_t3_ParamLimits

0xd66a,	// (0x00043ba8) list_double_time_pane_vc_t3

0xd67c,	// (0x00043bba) list_double_time_pane_vc_t4_ParamLimits

0xd67c,	// (0x00043bba) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x00045f67) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x00045f67) list_double_time_pane_vc_t

0xd28b,	// (0x000437c9) list_double_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437c9) list_double_pane_vc_g1

0xd297,	// (0x000437d5) list_double_pane_vc_g2_ParamLimits

0xd297,	// (0x000437d5) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_double_pane_vc_g

0xd690,	// (0x00043bce) list_double_pane_vc_t1_ParamLimits

0xd690,	// (0x00043bce) list_double_pane_vc_t1

0xd6a4,	// (0x00043be2) list_double_pane_vc_t2_ParamLimits

0xd6a4,	// (0x00043be2) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x00045f70) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x00045f70) list_double_pane_vc_t

0xd28b,	// (0x000437c9) list_double_number_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437c9) list_double_number_pane_vc_g1

0xd297,	// (0x000437d5) list_double_number_pane_vc_g2_ParamLimits

0xd297,	// (0x000437d5) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_double_number_pane_vc_g

0xd6ba,	// (0x00043bf8) list_double_number_pane_vc_t1_ParamLimits

0xd6ba,	// (0x00043bf8) list_double_number_pane_vc_t1

0xd6cc,	// (0x00043c0a) list_double_number_pane_vc_t2_ParamLimits

0xd6cc,	// (0x00043c0a) list_double_number_pane_vc_t2

0xd6a4,	// (0x00043be2) list_double_number_pane_vc_t3_ParamLimits

0xd6a4,	// (0x00043be2) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x00045f75) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x00045f75) list_double_number_pane_vc_t

0xd6e0,	// (0x00043c1e) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd6e0,	// (0x00043c1e) list_double_large_graphic_pane_vc_g1

0xd702,	// (0x00043c40) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd702,	// (0x00043c40) list_double_large_graphic_pane_vc_g2

0xd716,	// (0x00043c54) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd716,	// (0x00043c54) list_double_large_graphic_pane_vc_g3

0xd725,	// (0x00043c63) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd725,	// (0x00043c63) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x00045f7c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00045f7c) list_double_large_graphic_pane_vc_g

0xd731,	// (0x00043c6f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd731,	// (0x00043c6f) list_double_large_graphic_pane_vc_t1

0xd74d,	// (0x00043c8b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd74d,	// (0x00043c8b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x00045f85) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x00045f85) list_double_large_graphic_pane_vc_t

0xd28b,	// (0x000437c9) list_double_heading_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437c9) list_double_heading_pane_vc_g1

0xd297,	// (0x000437d5) list_double_heading_pane_vc_g2_ParamLimits

0xd297,	// (0x000437d5) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ae1) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ae1) list_double_heading_pane_vc_g

0xd76d,	// (0x00043cab) list_double_heading_pane_vc_t1_ParamLimits

0xd76d,	// (0x00043cab) list_double_heading_pane_vc_t1

0xd77f,	// (0x00043cbd) list_double_heading_pane_vc_t2_ParamLimits

0xd77f,	// (0x00043cbd) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00045f8a) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00045f8a) list_double_heading_pane_vc_t

0xd797,	// (0x00043cd5) list_double_graphic_pane_vc_g1_ParamLimits

0xd797,	// (0x00043cd5) list_double_graphic_pane_vc_g1

0xd7aa,	// (0x00043ce8) list_double_graphic_pane_vc_g2_ParamLimits

0xd7aa,	// (0x00043ce8) list_double_graphic_pane_vc_g2

0xd28b,	// (0x000437c9) list_double_graphic_pane_vc_g3_ParamLimits

0xd28b,	// (0x000437c9) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00045f8f) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00045f8f) list_double_graphic_pane_vc_g

0xd7c7,	// (0x00043d05) list_double_graphic_pane_vc_t1_ParamLimits

0xd7c7,	// (0x00043d05) list_double_graphic_pane_vc_t1

0xd7f1,	// (0x00043d2f) list_double_graphic_pane_vc_t2_ParamLimits

0xd7f1,	// (0x00043d2f) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x00045f98) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x00045f98) list_double_graphic_pane_vc_t

0xec5b,	// (0x00045199) aid_size_cell_fastswap

0x93de,	// (0x0003f91c) aid_size_cell_touch_ParamLimits

0x93de,	// (0x0003f91c) aid_size_cell_touch

0xede2,	// (0x00045320) popup_fast_swap_wide_window_ParamLimits

0xede2,	// (0x00045320) popup_fast_swap_wide_window

0x959c,	// (0x0003fada) touch_pane_ParamLimits

0x959c,	// (0x0003fada) touch_pane

0xbe1e,	// (0x0004235c) button_value_adjust_pane_cp2

0xd334,	// (0x00043872) button_value_adjust_pane_cp4

0xd33c,	// (0x0004387a) form_field_data_pane_cp2

0x9e0e,	// (0x0004034c) form_field_data_wide_pane_cp2

0xf0d3,	// (0x00045611) bg_scroll_pane_ParamLimits

0xf0f2,	// (0x00045630) scroll_handle_pane_ParamLimits

0xf106,	// (0x00045644) scroll_sc2_down_pane_ParamLimits

0xf106,	// (0x00045644) scroll_sc2_down_pane

0xf12d,	// (0x0004566b) scroll_sc2_up_pane_ParamLimits

0xf12d,	// (0x0004566b) scroll_sc2_up_pane

0xcba8,	// (0x000430e6) grid_wheel_folder_pane_g1_ParamLimits

0xcba8,	// (0x000430e6) grid_wheel_folder_pane_g1

0x0126,	// (0x00036664) clock_nsta_pane_cp2_ParamLimits

0x0126,	// (0x00036664) clock_nsta_pane_cp2

0xa2af,	// (0x000407ed) listscroll_midp_pane_ParamLimits

0xa2bb,	// (0x000407f9) midp_canvas_pane

0x28af,	// (0x00038ded) nsta_clock_indic_pane

0x28e3,	// (0x00038e21) listscroll_form_pane_vc

0x28eb,	// (0x00038e29) listscroll_set_pane_vc_ParamLimits

0x28eb,	// (0x00038e29) listscroll_set_pane_vc

0xc22b,	// (0x00042769) clock_nsta_pane

0xc255,	// (0x00042793) indicator_nsta_pane

0x2d4d,	// (0x0003928b) bg_popup_sub_pane_cp2_ParamLimits

0x2d61,	// (0x0003929f) find_pane_cp2_ParamLimits

0x2d61,	// (0x0003929f) find_pane_cp2

0x2d77,	// (0x000392b5) grid_toobar_pane_ParamLimits

0x2e57,	// (0x00039395) list_form_gen_pane_vc_ParamLimits

0x2e57,	// (0x00039395) list_form_gen_pane_vc

0x2e6d,	// (0x000393ab) scroll_pane_cp8_vc_ParamLimits

0x2e6d,	// (0x000393ab) scroll_pane_cp8_vc

0x2ee9,	// (0x00039427) data_form_wide_pane_vc_ParamLimits

0x2ee9,	// (0x00039427) data_form_wide_pane_vc

0x2ef5,	// (0x00039433) form_field_data_wide_pane_vc_g1

0x2efd,	// (0x0003943b) form_field_data_wide_pane_vc_t1_ParamLimits

0x2efd,	// (0x0003943b) form_field_data_wide_pane_vc_t1

0xbe32,	// (0x00042370) input_focus_pane_cp6_vc_ParamLimits

0xbe32,	// (0x00042370) input_focus_pane_cp6_vc

0x3219,	// (0x00039757) list_midp_pane_ParamLimits

0x45c2,	// (0x0003ab00) scroll_pane_cp16_ParamLimits

0x45c2,	// (0x0003ab00) scroll_pane_cp16

0x326f,	// (0x000397ad) button_value_adjust_pane_ParamLimits

0x326f,	// (0x000397ad) button_value_adjust_pane

0xc7fe,	// (0x00042d3c) button_value_adjust_pane_cp6_ParamLimits

0xc7fe,	// (0x00042d3c) button_value_adjust_pane_cp6

0xc93a,	// (0x00042e78) settings_code_pane_cp_ParamLimits

0xc93a,	// (0x00042e78) settings_code_pane_cp

0xb78a,	// (0x00041cc8) cell_touch_pane_g1

0xb78a,	// (0x00041cc8) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x00045c1c) cell_touch_pane_g

0xca7c,	// (0x00042fba) cell_touch_pane_cp_ParamLimits

0xca7c,	// (0x00042fba) cell_touch_pane_cp

0xca98,	// (0x00042fd6) cell_touch_pane_ParamLimits

0xca98,	// (0x00042fd6) cell_touch_pane

0xb78a,	// (0x00041cc8) scroll_sc2_down_pane_g1

0xb78a,	// (0x00041cc8) scroll_sc2_up_pane_g1

0xb794,	// (0x00041cd2) bg_set_opt_pane_cp4_vc

0x4960,	// (0x0003ae9e) list_set_graphic_pane_vc_g1_ParamLimits

0x4960,	// (0x0003ae9e) list_set_graphic_pane_vc_g1

0x496c,	// (0x0003aeaa) list_set_graphic_pane_vc_g2_ParamLimits

0x496c,	// (0x0003aeaa) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00045f13) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00045f13) list_set_graphic_pane_vc_g

0x4978,	// (0x0003aeb6) text_primary_small_cp13_vc_ParamLimits

0x4978,	// (0x0003aeb6) text_primary_small_cp13_vc

0x4990,	// (0x0003aece) list_set_graphic_pane_vc_ParamLimits

0x4990,	// (0x0003aece) list_set_graphic_pane_vc

0xb794,	// (0x00041cd2) input_focus_pane_cp2_vc

0xb78a,	// (0x00041cc8) setting_code_pane_vc_g1

0xb807,	// (0x00041d45) setting_code_pane_vc_t1

0x49a3,	// (0x0003aee1) set_text_pane_vc_t1_ParamLimits

0x49a3,	// (0x0003aee1) set_text_pane_vc_t1

0xb794,	// (0x00041cd2) input_focus_pane_cp1_vc

0x49c4,	// (0x0003af02) list_set_text_pane_vc

0xb78a,	// (0x00041cc8) setting_text_pane_vc_g1

0xb794,	// (0x00041cd2) bg_set_opt_pane_cp2_vc

0xb7fe,	// (0x00041d3c) setting_slider_graphic_pane_vc_g1

0x49ce,	// (0x0003af0c) setting_slider_graphic_pane_vc_t1

0x49e0,	// (0x0003af1e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00045f18) setting_slider_graphic_pane_vc_t

0x49f2,	// (0x0003af30) slider_set_pane_cp_vc

0x49fc,	// (0x0003af3a) slider_set_pane_vc_g1

0x4a05,	// (0x0003af43) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00045f1d) slider_set_pane_vc_g

0xbe8a,	// (0x000423c8) set_opt_bg_pane_g1_copy1

0xbe92,	// (0x000423d0) set_opt_bg_pane_g2_copy1

0x4a31,	// (0x0003af6f) set_opt_bg_pane_g3_copy1

0xbea2,	// (0x000423e0) set_opt_bg_pane_g4_copy1

0xbeaa,	// (0x000423e8) set_opt_bg_pane_g5_copy1

0xbeb2,	// (0x000423f0) set_opt_bg_pane_g6_copy1

0x4a3b,	// (0x0003af79) set_opt_bg_pane_g7_copy1

0x4a45,	// (0x0003af83) set_opt_bg_pane_g8_copy1

0x4a4f,	// (0x0003af8d) set_opt_bg_pane_g9_copy1

0xb794,	// (0x00041cd2) bg_set_opt_pane_cp_vc

0x4a59,	// (0x0003af97) setting_slider_pane_vc_t1

0x4a68,	// (0x0003afa6) setting_slider_pane_vc_t2

0x4a7a,	// (0x0003afb8) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00045f2c) setting_slider_pane_vc_t

0x4a8c,	// (0x0003afca) slider_set_pane_vc

0x0b26,	// (0x00037064) volume_set_pane_vc_g1

0x0b2f,	// (0x0003706d) volume_set_pane_vc_g2

0x0b38,	// (0x00037076) volume_set_pane_vc_g3

0x0b41,	// (0x0003707f) volume_set_pane_vc_g4

0x0b4a,	// (0x00037088) volume_set_pane_vc_g5

0x0b53,	// (0x00037091) volume_set_pane_vc_g6

0x0b5c,	// (0x0003709a) volume_set_pane_vc_g7

0x0b65,	// (0x000370a3) volume_set_pane_vc_g8

0x0b6e,	// (0x000370ac) volume_set_pane_vc_g9

0x0b77,	// (0x000370b5) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x00045f33) volume_set_pane_vc_g

0x4a96,	// (0x0003afd4) volume_set_pane_vc

0x4aa0,	// (0x0003afde) button_value_adjust_pane_cp1_vc

0x4aaa,	// (0x0003afe8) list_highlight_pane_cp2_vc

0x4ab3,	// (0x0003aff1) list_set_pane_vc_ParamLimits

0x4ab3,	// (0x0003aff1) list_set_pane_vc

0x4b21,	// (0x0003b05f) main_pane_set_vc_t1_ParamLimits

0x4b21,	// (0x0003b05f) main_pane_set_vc_t1

0x4b36,	// (0x0003b074) main_pane_set_vc_t2_ParamLimits

0x4b36,	// (0x0003b074) main_pane_set_vc_t2

0x4b48,	// (0x0003b086) main_pane_set_vc_t3_ParamLimits

0x4b48,	// (0x0003b086) main_pane_set_vc_t3

0x4b5c,	// (0x0003b09a) main_pane_set_vc_t4_ParamLimits

0x4b5c,	// (0x0003b09a) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00045f48) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00045f48) main_pane_set_vc_t

0x4b70,	// (0x0003b0ae) setting_code_pane_vc_ParamLimits

0x4b70,	// (0x0003b0ae) setting_code_pane_vc

0x4b81,	// (0x0003b0bf) setting_slider_graphic_pane_vc

0x4b81,	// (0x0003b0bf) setting_slider_pane_vc

0x4b81,	// (0x0003b0bf) setting_text_pane_vc

0x4b81,	// (0x0003b0bf) setting_volume_pane_vc

0x4b8b,	// (0x0003b0c9) scroll_pane_cp121_vc

0xbe0c,	// (0x0004234a) set_content_pane_vc

0x4b93,	// (0x0003b0d1) button_value_adjust_pane_g1

0x4b9c,	// (0x0003b0da) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00045f9d) button_value_adjust_pane_g

0x4ba5,	// (0x0003b0e3) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4ba5,	// (0x0003b0e3) form_field_slider_wide_pane_vc_t1

0x4bb7,	// (0x0003b0f5) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4bb7,	// (0x0003b0f5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x00045fa2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00045fa2) form_field_slider_wide_pane_vc_t

0xb7e2,	// (0x00041d20) input_focus_pane_cp10_vc_ParamLimits

0xb7e2,	// (0x00041d20) input_focus_pane_cp10_vc

0x4be3,	// (0x0003b121) slider_cont_pane_cp1_vc_ParamLimits

0x4be3,	// (0x0003b121) slider_cont_pane_cp1_vc

0x4bf5,	// (0x0003b133) slider_form_pane_g1_cp2

0x4a05,	// (0x0003af43) slider_form_pane_g2_cp2

0x4c22,	// (0x0003b160) form_field_slider_pane_vc_t3

0x4c30,	// (0x0003b16e) form_field_slider_pane_vc_t4

0x4c3e,	// (0x0003b17c) slider_form_pane_vc_ParamLimits

0x4c3e,	// (0x0003b17c) slider_form_pane_vc

0x4c4b,	// (0x0003b189) form_field_slider_pane_vc_t1_ParamLimits

0x4c4b,	// (0x0003b189) form_field_slider_pane_vc_t1

0x4bb7,	// (0x0003b0f5) form_field_slider_pane_vc_t2_ParamLimits

0x4bb7,	// (0x0003b0f5) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x00045fb4) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x00045fb4) form_field_slider_pane_vc_t

0xb7e2,	// (0x00041d20) input_focus_pane_cp9_vc_ParamLimits

0xb7e2,	// (0x00041d20) input_focus_pane_cp9_vc

0x4c61,	// (0x0003b19f) slider_cont_pane_vc_ParamLimits

0x4c61,	// (0x0003b19f) slider_cont_pane_vc

0x4c75,	// (0x0003b1b3) list_form_graphic_pane_cp_vc_ParamLimits

0x4c75,	// (0x0003b1b3) list_form_graphic_pane_cp_vc

0x2ef5,	// (0x00039433) form_field_popup_wide_pane_vc_g1

0x4c8a,	// (0x0003b1c8) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4c8a,	// (0x0003b1c8) form_field_popup_wide_pane_vc_t1

0xbe32,	// (0x00042370) input_focus_pane_cp8_vc_ParamLimits

0xbe32,	// (0x00042370) input_focus_pane_cp8_vc

0x4ccf,	// (0x0003b20d) list_form_wide_pane_vc_ParamLimits

0x4ccf,	// (0x0003b20d) list_form_wide_pane_vc

0x4cdb,	// (0x0003b219) list_form_graphic_pane_vc_g1

0x4ce3,	// (0x0003b221) list_form_graphic_pane_vc_t1_ParamLimits

0x4ce3,	// (0x0003b221) list_form_graphic_pane_vc_t1

0xb7f0,	// (0x00041d2e) list_highlight_pane_cp5_vc_ParamLimits

0xb7f0,	// (0x00041d2e) list_highlight_pane_cp5_vc

0x4cff,	// (0x0003b23d) list_form_graphic_pane_vc_ParamLimits

0x4cff,	// (0x0003b23d) list_form_graphic_pane_vc

0x2ef5,	// (0x00039433) form_field_popup_pane_vc_g1

0x4d15,	// (0x0003b253) form_field_popup_pane_vc_t1_ParamLimits

0x4d15,	// (0x0003b253) form_field_popup_pane_vc_t1

0xbe32,	// (0x00042370) input_focus_pane_cp7_vc_ParamLimits

0xbe32,	// (0x00042370) input_focus_pane_cp7_vc

0x4d2c,	// (0x0003b26a) list_form_pane_vc_ParamLimits

0x4d2c,	// (0x0003b26a) list_form_pane_vc

0x4d38,	// (0x0003b276) data_form_pane_vc_t1_ParamLimits

0x4d38,	// (0x0003b276) data_form_pane_vc_t1

0xbe8a,	// (0x000423c8) input_focus_pane_vc_g1

0xbe92,	// (0x000423d0) input_focus_pane_vc_g2

0xbe9a,	// (0x000423d8) input_focus_pane_vc_g3

0xbea2,	// (0x000423e0) input_focus_pane_vc_g4

0xbeaa,	// (0x000423e8) input_focus_pane_vc_g5

0xbeb2,	// (0x000423f0) input_focus_pane_vc_g6

0xbeba,	// (0x000423f8) input_focus_pane_vc_g7

0xbec2,	// (0x00042400) input_focus_pane_vc_g8

0xbeca,	// (0x00042408) input_focus_pane_vc_g9

0xb78a,	// (0x00041cc8) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x00045ba5) input_focus_pane_vc_g

0x2ee9,	// (0x00039427) data_form_pane_vc_ParamLimits

0x2ee9,	// (0x00039427) data_form_pane_vc

0x2ef5,	// (0x00039433) form_field_data_pane_vc_g1

0x4d55,	// (0x0003b293) form_field_data_pane_vc_t1_ParamLimits

0x4d55,	// (0x0003b293) form_field_data_pane_vc_t1

0xbe32,	// (0x00042370) input_focus_pane_vc_ParamLimits

0xbe32,	// (0x00042370) input_focus_pane_vc

0x4d6f,	// (0x0003b2ad) button_value_adjust_pane_cp3_vc

0x4d77,	// (0x0003b2b5) button_value_adjust_pane_cp5_vc

0x4d7f,	// (0x0003b2bd) form_field_data_pane_vc_ParamLimits

0x4d7f,	// (0x0003b2bd) form_field_data_pane_vc

0x4d9a,	// (0x0003b2d8) form_field_data_pane_vc_cp2

0x4da2,	// (0x0003b2e0) form_field_data_wide_pane_vc_ParamLimits

0x4da2,	// (0x0003b2e0) form_field_data_wide_pane_vc

0x4dbc,	// (0x0003b2fa) form_field_data_wide_pane_vc_cp2

0x4dc4,	// (0x0003b302) form_field_popup_pane_vc_ParamLimits

0x4dc4,	// (0x0003b302) form_field_popup_pane_vc

0x4ddf,	// (0x0003b31d) form_field_popup_wide_pane_vc_ParamLimits

0x4ddf,	// (0x0003b31d) form_field_popup_wide_pane_vc

0x4df9,	// (0x0003b337) form_field_slider_pane_vc_ParamLimits

0x4df9,	// (0x0003b337) form_field_slider_pane_vc

0x4e0c,	// (0x0003b34a) form_field_slider_wide_pane_vc_ParamLimits

0x4e0c,	// (0x0003b34a) form_field_slider_wide_pane_vc

0xcab6,	// (0x00042ff4) grid_touch_1_pane_ParamLimits

0xcab6,	// (0x00042ff4) grid_touch_1_pane

0xcaca,	// (0x00043008) grid_touch_2_pane_ParamLimits

0xcaca,	// (0x00043008) grid_touch_2_pane

0x4ef2,	// (0x0003b430) touch_pane_g1_ParamLimits

0x4ef2,	// (0x0003b430) touch_pane_g1

0x4e45,	// (0x0003b383) cell_app_pane_cp_wide_ParamLimits

0x4e45,	// (0x0003b383) cell_app_pane_cp_wide

0x4e56,	// (0x0003b394) grid_popup_fast_wide_pane_ParamLimits

0x4e56,	// (0x0003b394) grid_popup_fast_wide_pane

0x4e6a,	// (0x0003b3a8) scroll_pane_cp19_ParamLimits

0x4e6a,	// (0x0003b3a8) scroll_pane_cp19

0xb794,	// (0x00041cd2) bg_popup_window_pane_cp20

0x4e7e,	// (0x0003b3bc) listscroll_popup_fast_wide_pane

0xcaf6,	// (0x00043034) grid_indicator_nsta_pane

0x4e98,	// (0x0003b3d6) clock_nsta_pane_g1

0x4ea1,	// (0x0003b3df) clock_nsta_pane_t1

0xcb02,	// (0x00043040) cell_indicator_nsta_pane_ParamLimits

0xcb02,	// (0x00043040) cell_indicator_nsta_pane

0x4ef2,	// (0x0003b430) cell_indicator_nsta_pane_g1

0xcb1d,	// (0x0004305b) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x00045fc5) cell_indicator_nsta_pane_g

0x4f13,	// (0x0003b451) clock_nsta_pane_cp

0x4f1c,	// (0x0003b45a) indicator_nsta_pane_cp

0x4f26,	// (0x0003b464) nsta_clock_indic_pane_g1

0xb82c,	// (0x00041d6a) grid_indicator_pane

0xf21f,	// (0x0004575d) scroll_pane_cp29

0x0075,	// (0x000365b3) indicator_nsta_pane_cp2_ParamLimits

0x0075,	// (0x000365b3) indicator_nsta_pane_cp2

0xb7f0,	// (0x00041d2e) main_apps_wheel_pane

0x30d6,	// (0x00039614) form_midp_field_text_pane_ParamLimits

0x3225,	// (0x00039763) scroll_bar_cp050_ParamLimits

0x4f7f,	// (0x0003b4bd) cell_indicator_pane_ParamLimits

0x4f7f,	// (0x0003b4bd) cell_indicator_pane

0x4f97,	// (0x0003b4d5) cell_indicator_pane_g1

0xcb2a,	// (0x00043068) grid_wheel_folder_pane_ParamLimits

0xcb2a,	// (0x00043068) grid_wheel_folder_pane

0xcb38,	// (0x00043076) list_wheel_apps_pane_ParamLimits

0xcb38,	// (0x00043076) list_wheel_apps_pane

0xcb46,	// (0x00043084) main_apps_wheel_pane_g1_ParamLimits

0xcb46,	// (0x00043084) main_apps_wheel_pane_g1

0xcb56,	// (0x00043094) main_apps_wheel_pane_g2_ParamLimits

0xcb56,	// (0x00043094) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x00045fe1) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x00045fe1) main_apps_wheel_pane_g

0xcb66,	// (0x000430a4) main_apps_wheel_pane_t1_ParamLimits

0xcb66,	// (0x000430a4) main_apps_wheel_pane_t1

0xcb7e,	// (0x000430bc) list_wheel_apps_pane_g1

0xcb86,	// (0x000430c4) list_wheel_apps_pane_g2

0xcb8e,	// (0x000430cc) list_wheel_apps_pane_g3

0xcb96,	// (0x000430d4) list_wheel_apps_pane_g4

0xcb9e,	// (0x000430dc) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x00045fe6) list_wheel_apps_pane_g

0x2421,	// (0x0003895f) navi_icon_text_pane

0xabd3,	// (0x00041111) aid_fill_nsta

0xcbb9,	// (0x000430f7) navi_icon_text_pane_g1

0xcbc5,	// (0x00043103) navi_icon_text_pane_t1

0x22b7,	// (0x000387f5) list_set_graphic_pane_t1_ParamLimits

0x22b7,	// (0x000387f5) list_set_graphic_pane_t1

0x3992,	// (0x00039ed0) popup_midp_note_alarm_window_t6_ParamLimits

0x3992,	// (0x00039ed0) popup_midp_note_alarm_window_t6

0x39a4,	// (0x00039ee2) popup_midp_note_alarm_window_t7_ParamLimits

0x39a4,	// (0x00039ee2) popup_midp_note_alarm_window_t7

0x39b6,	// (0x00039ef4) popup_midp_note_alarm_window_t8_ParamLimits

0x39b6,	// (0x00039ef4) popup_midp_note_alarm_window_t8

0x39c8,	// (0x00039f06) popup_midp_note_alarm_window_t9_ParamLimits

0x39c8,	// (0x00039f06) popup_midp_note_alarm_window_t9

0x39da,	// (0x00039f18) popup_midp_note_alarm_window_t10_ParamLimits

0x39da,	// (0x00039f18) popup_midp_note_alarm_window_t10

0x39ec,	// (0x00039f2a) popup_midp_note_alarm_window_t11_ParamLimits

0x39ec,	// (0x00039f2a) popup_midp_note_alarm_window_t11

0x39fe,	// (0x00039f3c) scroll_pane_cp17_ParamLimits

0x39fe,	// (0x00039f3c) scroll_pane_cp17

0x0b26,	// (0x00037064) volume_small_pane_cp_g1

0x0f02,	// (0x00037440) volume_small_pane_cp_g2

0x0f0b,	// (0x00037449) volume_small_pane_cp_g3

0x0f14,	// (0x00037452) volume_small_pane_cp_g4

0x0f1d,	// (0x0003745b) volume_small_pane_cp_g5

0x0f26,	// (0x00037464) volume_small_pane_cp_g6

0x0f2f,	// (0x0003746d) volume_small_pane_cp_g7

0x0f38,	// (0x00037476) volume_small_pane_cp_g8

0x0f41,	// (0x0003747f) volume_small_pane_cp_g9

0x0f4a,	// (0x00037488) volume_small_pane_cp_g10

0x268e,	// (0x00038bcc) midp_ticker_pane_g1_ParamLimits

0x269a,	// (0x00038bd8) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00045c71) midp_ticker_pane_g_ParamLimits

0xa353,	// (0x00040891) midp_ticker_pane_t1_ParamLimits

0xabf7,	// (0x00041135) aid_fill_nsta_2

0x3211,	// (0x0003974f) list_form2_midp_pane

0x438d,	// (0x0003a8cb) midp_editing_number_pane_ParamLimits

0x439c,	// (0x0003a8da) midp_ticker_pane_ParamLimits

0x508a,	// (0x0003b5c8) form2_midp_field_pane

0x50ae,	// (0x0003b5ec) scroll_pane_cp51

0x50ce,	// (0x0003b60c) form2_midp_button_pane_ParamLimits

0x50ce,	// (0x0003b60c) form2_midp_button_pane

0x50e0,	// (0x0003b61e) form2_midp_content_pane_ParamLimits

0x50e0,	// (0x0003b61e) form2_midp_content_pane

0x50fa,	// (0x0003b638) form2_midp_field_choice_group_pane

0x5102,	// (0x0003b640) form2_midp_field_pane_g1

0x510a,	// (0x0003b648) form2_midp_field_pane_g2

0x5112,	// (0x0003b650) form2_midp_field_pane_g3

0x511a,	// (0x0003b658) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x0004600b) form2_midp_field_pane_g

0x5122,	// (0x0003b660) form2_midp_gauge_slider_pane

0x512a,	// (0x0003b668) form2_midp_gauge_wait_pane

0x5132,	// (0x0003b670) form2_midp_image_pane_ParamLimits

0x5132,	// (0x0003b670) form2_midp_image_pane

0x514d,	// (0x0003b68b) form2_midp_label_pane_ParamLimits

0x514d,	// (0x0003b68b) form2_midp_label_pane

0xcbf3,	// (0x00043131) form2_midp_label_pane_cp_ParamLimits

0xcbf3,	// (0x00043131) form2_midp_label_pane_cp

0x518d,	// (0x0003b6cb) form2_midp_string_pane_ParamLimits

0x518d,	// (0x0003b6cb) form2_midp_string_pane

0xae68,	// (0x000413a6) form2_midp_text_pane_ParamLimits

0xae68,	// (0x000413a6) form2_midp_text_pane

0x519f,	// (0x0003b6dd) form2_midp_time_pane

0x51af,	// (0x0003b6ed) input_focus_pane_cp51_ParamLimits

0x51af,	// (0x0003b6ed) input_focus_pane_cp51

0x51c7,	// (0x0003b705) form2_midp_label_pane_t1_ParamLimits

0x51c7,	// (0x0003b705) form2_midp_label_pane_t1

0xae89,	// (0x000413c7) form2_mdip_text_pane_t1_ParamLimits

0xae89,	// (0x000413c7) form2_mdip_text_pane_t1

0xd80f,	// (0x00043d4d) form2_midp_time_pane_t1

0x5215,	// (0x0003b753) form2_midp_gauge_slider_pane_t1

0xcc14,	// (0x00043152) form2_midp_gauge_slider_pane_t2

0xcc26,	// (0x00043164) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x00046014) form2_midp_gauge_slider_pane_t

0x524b,	// (0x0003b789) form2_midp_slider_pane

0x5257,	// (0x0003b795) form2_midp_gauge_wait_pane_t1

0x5265,	// (0x0003b7a3) form2_midp_wait_pane_ParamLimits

0x5265,	// (0x0003b7a3) form2_midp_wait_pane

0x2f3c,	// (0x0003947a) list_single_2graphic_pane_cp4_ParamLimits

0x2f3c,	// (0x0003947a) list_single_2graphic_pane_cp4

0xc57d,	// (0x00042abb) list_single_midp_graphic_pane_cp_ParamLimits

0xc57d,	// (0x00042abb) list_single_midp_graphic_pane_cp

0xb794,	// (0x00041cd2) list_highlight_pane_cp20

0x52a9,	// (0x0003b7e7) list_single_2graphic_pane_g1_cp4

0x4842,	// (0x0003ad80) list_single_2graphic_pane_g2_cp4

0x52b1,	// (0x0003b7ef) list_single_2graphic_pane_t1_cp4

0xb7f0,	// (0x00041d2e) list_highlight_pane_cp21

0x52c0,	// (0x0003b7fe) list_single_midp_graphic_pane_g4_cp

0x52cf,	// (0x0003b80d) list_single_midp_graphic_pane_t1_cp

0xcc38,	// (0x00043176) form2_mdip_string_pane_t1_ParamLimits

0xcc38,	// (0x00043176) form2_mdip_string_pane_t1

0xb794,	// (0x00041cd2) bg_wml_button_pane_cp2

0xb78a,	// (0x00041cc8) form2_midp_image_pane_g1

0xd311,	// (0x0004384f) list_double_large_graphic_pane_g5_ParamLimits

0xd311,	// (0x0004384f) list_double_large_graphic_pane_g5

0xa2af,	// (0x000407ed) midp_form_pane_ParamLimits

0xb7f0,	// (0x00041d2e) main_apps_wheel_pane_ParamLimits

0xa8eb,	// (0x00040e29) popup_preview_window_ParamLimits

0xa8eb,	// (0x00040e29) popup_preview_window

0x0956,	// (0x00036e94) popup_touch_info_window_ParamLimits

0x0956,	// (0x00036e94) popup_touch_info_window

0x0978,	// (0x00036eb6) popup_touch_menu_window_ParamLimits

0x0978,	// (0x00036eb6) popup_touch_menu_window

0xb780,	// (0x00041cbe) bg_popup_sub_pane_cp6

0x5380,	// (0x0003b8be) list_touch_menu_pane

0x5388,	// (0x0003b8c6) list_single_touch_menu_pane_ParamLimits

0x5388,	// (0x0003b8c6) list_single_touch_menu_pane

0x53a0,	// (0x0003b8de) list_single_touch_menu_pane_t1

0xb7f0,	// (0x00041d2e) bg_popup_sub_pane_cp7_ParamLimits

0xb7f0,	// (0x00041d2e) bg_popup_sub_pane_cp7

0x53ae,	// (0x0003b8ec) heading_sub_pane

0x53b6,	// (0x0003b8f4) list_touch_info_pane_ParamLimits

0x53b6,	// (0x0003b8f4) list_touch_info_pane

0x53c5,	// (0x0003b903) list_single_touch_info_pane_ParamLimits

0x53c5,	// (0x0003b903) list_single_touch_info_pane

0x53d7,	// (0x0003b915) list_single_touch_info_pane_t1

0x53e5,	// (0x0003b923) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x00046022) list_single_touch_info_pane_t

0x25b0,	// (0x00038aee) bg_popup_heading_pane_cp

0x53f3,	// (0x0003b931) heading_sub_pane_t1

0x2e83,	// (0x000393c1) bg_popup_preview_window_pane_cp_ParamLimits

0x2e83,	// (0x000393c1) bg_popup_preview_window_pane_cp

0x53ae,	// (0x0003b8ec) heading_preview_pane

0x53b6,	// (0x0003b8f4) list_preview_pane_ParamLimits

0x53b6,	// (0x0003b8f4) list_preview_pane

0x5401,	// (0x0003b93f) popup_preview_window_g1

0x53c5,	// (0x0003b903) list_single_preview_pane_ParamLimits

0x53c5,	// (0x0003b903) list_single_preview_pane

0x5409,	// (0x0003b947) list_single_preview_pane_g1

0x5411,	// (0x0003b94f) list_single_preview_pane_t1

0x53d7,	// (0x0003b915) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x00046027) list_single_preview_pane_t

0x541f,	// (0x0003b95d) bg_popup_heading_pane_cp2_ParamLimits

0x541f,	// (0x0003b95d) bg_popup_heading_pane_cp2

0x5435,	// (0x0003b973) heading_preview_pane_g1

0x543d,	// (0x0003b97b) heading_preview_pane_t1_ParamLimits

0x543d,	// (0x0003b97b) heading_preview_pane_t1

0xb843,	// (0x00041d81) soft_indicator_pane_t1_ParamLimits

0xbda5,	// (0x000422e3) scroll_pane_ParamLimits

0xf11b,	// (0x00045659) scroll_sc2_left_pane

0xf124,	// (0x00045662) scroll_sc2_right_pane

0xf143,	// (0x00045681) scroll_bg_pane_g1_ParamLimits

0xf158,	// (0x00045696) scroll_bg_pane_g2_ParamLimits

0xf170,	// (0x000456ae) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x00045bfc) scroll_bg_pane_g_ParamLimits

0xf143,	// (0x00045681) scroll_handle_pane_g1_ParamLimits

0xf192,	// (0x000456d0) scroll_handle_pane_g2_ParamLimits

0xf170,	// (0x000456ae) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x00045c03) scroll_handle_pane_g_ParamLimits

0x03b4,	// (0x000368f2) popup_choice_list_window_ParamLimits

0x03b4,	// (0x000368f2) popup_choice_list_window

0x2d59,	// (0x00039297) choice_list_pane

0x2ddb,	// (0x00039319) cell_toolbar_pane_t1

0x2e03,	// (0x00039341) toolbar_button_pane_ParamLimits

0x3ec8,	// (0x0003a406) ai_gene_pane_1_t2_ParamLimits

0x3ec8,	// (0x0003a406) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00045e26) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00045e26) ai_gene_pane_1_t

0x545a,	// (0x0003b998) scroll_sc2_left_pane_g1

0x545a,	// (0x0003b998) scroll_sc2_right_pane_g1

0x28d7,	// (0x00038e15) bg_popup_sub_pane_cp10

0x5464,	// (0x0003b9a2) list_choice_list_pane

0x547d,	// (0x0003b9bb) list_single_choice_list_pane_ParamLimits

0x547d,	// (0x0003b9bb) list_single_choice_list_pane

0x5495,	// (0x0003b9d3) list_single_choice_list_pane_g1

0xbf93,	// (0x000424d1) list_single_choice_list_pane_t1_ParamLimits

0xbf93,	// (0x000424d1) list_single_choice_list_pane_t1

0x549d,	// (0x0003b9db) choice_list_pane_g1

0x54a5,	// (0x0003b9e3) choice_list_pane_t1

0xb780,	// (0x00041cbe) input_focus_pane_cp11

0xc111,	// (0x0004264f) title_pane_stacon_g2_ParamLimits

0xc111,	// (0x0004264f) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00045be2) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00045be2) title_pane_stacon_g

0x25b0,	// (0x00038aee) cursor_press_pane

0xa562,	// (0x00040aa0) popup_fep_hwr_window_ParamLimits

0xa562,	// (0x00040aa0) popup_fep_hwr_window

0x04f8,	// (0x00036a36) popup_fep_vkb_window_ParamLimits

0x04f8,	// (0x00036a36) popup_fep_vkb_window

0x54b3,	// (0x0003b9f1) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x00046050) fep_vkb_side_pane_g_ParamLimits

0x0fd1,	// (0x0003750f) fep_hwr_candidate_pane_ParamLimits

0x0fd1,	// (0x0003750f) fep_hwr_candidate_pane

0x0ffb,	// (0x00037539) fep_hwr_side_pane_ParamLimits

0x0ffb,	// (0x00037539) fep_hwr_side_pane

0x101d,	// (0x0003755b) fep_hwr_top_pane_ParamLimits

0x101d,	// (0x0003755b) fep_hwr_top_pane

0x1035,	// (0x00037573) fep_hwr_write_pane_ParamLimits

0x1035,	// (0x00037573) fep_hwr_write_pane

0xfb12,	// (0x00046050) fep_vkb_side_pane_g

0x54bb,	// (0x0003b9f9) fep_hwr_top_pane_g1

0x54cd,	// (0x0003ba0b) fep_hwr_top_pane_g2

0x106f,	// (0x000375ad) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x0004602c) fep_hwr_top_pane_g

0x1084,	// (0x000375c2) fep_hwr_top_text_pane

0xf28c,	// (0x000457ca) fep_hwr_top_text_pane_g1

0x5503,	// (0x0003ba41) fep_hwr_top_text_pane_t1

0x118e,	// (0x000376cc) fep_hwr_candidate_pane_g1

0x574e,	// (0x0003bc8c) fep_vkb_keypad_pane_g3_ParamLimits

0x574e,	// (0x0003bc8c) fep_vkb_keypad_pane_g3

0x577a,	// (0x0003bcb8) fep_vkb_keypad_pane_g4_ParamLimits

0x577a,	// (0x0003bcb8) fep_vkb_keypad_pane_g4

0x57f1,	// (0x0003bd2f) fep_vkb_bottom_pane_g2_ParamLimits

0x57f1,	// (0x0003bd2f) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x00046057) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x00046057) fep_vkb_bottom_pane_g

0x545a,	// (0x0003b998) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00046061) cell_vkb_side_pane_g

0x587c,	// (0x0003bdba) cell_vkb_side_pane_t1

0x588a,	// (0x0003bdc8) cell_vkb_side_pane_t1_copy1

0x545a,	// (0x0003b998) bg_fep_vkb_candidate_pane_g2

0x59ce,	// (0x0003bf0c) cell_vkb_candidate_pane_ParamLimits

0x5511,	// (0x0003ba4f) aid_size_cell_vkb_ParamLimits

0x5511,	// (0x0003ba4f) aid_size_cell_vkb

0x59ce,	// (0x0003bf0c) cell_vkb_candidate_pane

0x11b5,	// (0x000376f3) bg_popup_fep_shadow_pane_g1

0xccce,	// (0x0004320c) fep_vkb_bottom_pane_ParamLimits

0xccce,	// (0x0004320c) fep_vkb_bottom_pane

0x55e0,	// (0x0003bb1e) fep_vkb_candidate_pane_ParamLimits

0x55e0,	// (0x0003bb1e) fep_vkb_candidate_pane

0xccfa,	// (0x00043238) fep_vkb_keypad_pane_ParamLimits

0xccfa,	// (0x00043238) fep_vkb_keypad_pane

0xcd21,	// (0x0004325f) fep_vkb_side_pane_ParamLimits

0xcd21,	// (0x0004325f) fep_vkb_side_pane

0xcd5d,	// (0x0004329b) fep_vkb_top_pane_ParamLimits

0xcd5d,	// (0x0004329b) fep_vkb_top_pane

0x56a7,	// (0x0003bbe5) fep_vkb_top_pane_g1_ParamLimits

0x56a7,	// (0x0003bbe5) fep_vkb_top_pane_g1

0x56b6,	// (0x0003bbf4) fep_vkb_top_pane_g2_ParamLimits

0x56b6,	// (0x0003bbf4) fep_vkb_top_pane_g2

0x56c5,	// (0x0003bc03) fep_vkb_top_pane_g3_ParamLimits

0x56c5,	// (0x0003bc03) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x00046047) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x00046047) fep_vkb_top_pane_g

0x56e3,	// (0x0003bc21) fep_vkb_top_text_pane_ParamLimits

0x56e3,	// (0x0003bc21) fep_vkb_top_text_pane

0xcd99,	// (0x000432d7) fep_vkb_side_pane_g1_ParamLimits

0xcd99,	// (0x000432d7) fep_vkb_side_pane_g1

0x573d,	// (0x0003bc7b) grid_vkb_side_pane_ParamLimits

0x573d,	// (0x0003bc7b) grid_vkb_side_pane

0x11bd,	// (0x000376fb) bg_popup_fep_shadow_pane_g2

0x11c6,	// (0x00037704) bg_popup_fep_shadow_pane_g3

0x11ce,	// (0x0003770c) bg_popup_fep_shadow_pane_g4

0x11d7,	// (0x00037715) bg_popup_fep_shadow_pane_g5

0x11e1,	// (0x0003771f) bg_popup_fep_shadow_pane_g6

0x11e9,	// (0x00037727) bg_popup_fep_shadow_pane_g7

0xbea2,	// (0x000423e0) bg_popup_fep_shadow_pane_g8

0x579c,	// (0x0003bcda) grid_vkb_keypad_number_pane_ParamLimits

0x579c,	// (0x0003bcda) grid_vkb_keypad_number_pane

0x57b0,	// (0x0003bcee) grid_vkb_keypad_pane_ParamLimits

0x57b0,	// (0x0003bcee) grid_vkb_keypad_pane

0x57d6,	// (0x0003bd14) fep_vkb_bottom_pane_g1_ParamLimits

0x57d6,	// (0x0003bd14) fep_vkb_bottom_pane_g1

0x57ff,	// (0x0003bd3d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x57ff,	// (0x0003bd3d) grid_vkb_keypad_bottom_left_pane

0x5814,	// (0x0003bd52) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5814,	// (0x0003bd52) grid_vkb_keypad_bottom_right_pane

0x5829,	// (0x0003bd67) fep_vkb_top_text_pane_g1

0xcde0,	// (0x0004331e) fep_vkb_top_text_pane_t1

0xcdf2,	// (0x00043330) cell_vkb_side_pane_ParamLimits

0xcdf2,	// (0x00043330) cell_vkb_side_pane

0x545a,	// (0x0003b998) cell_vkb_side_pane_g1

0x5898,	// (0x0003bdd6) cell_vkb_keypad_pane_ParamLimits

0x5898,	// (0x0003bdd6) cell_vkb_keypad_pane

0x5925,	// (0x0003be63) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x00046074) bg_popup_fep_shadow_pane_g

0x11fb,	// (0x00037739) cell_hwr_side_pane_g1

0x11fb,	// (0x00037739) cell_hwr_side_pane_g2

0x592f,	// (0x0003be6d) cell_vkb_keypad_pane_t1

0xce08,	// (0x00043346) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xce08,	// (0x00043346) cell_vkb_keypad_bottom_left_pane

0xce1d,	// (0x0004335b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xce1d,	// (0x0004335b) cell_vkb_keypad_bottom_right_pane

0x545a,	// (0x0003b998) cell_vkb_keypad_bottom_left_pane_g1

0x545a,	// (0x0003b998) cell_vkb_keypad_bottom_right_pane_g1

0x5993,	// (0x0003bed1) cell_vkb_keypad_number_pane_ParamLimits

0x5993,	// (0x0003bed1) cell_vkb_keypad_number_pane

0x59b2,	// (0x0003bef0) cell_vkb_keypad_number_pane_g1

0x59bc,	// (0x0003befa) cell_vkb_keypad_number_pane_g2

0x59c5,	// (0x0003bf03) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x00046066) cell_vkb_keypad_number_pane_g

0x592f,	// (0x0003be6d) cell_vkb_keypad_number_pane_t1

0x59ef,	// (0x0003bf2d) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00046087) cell_hwr_side_pane_g

0x5a08,	// (0x0003bf46) cell_hwr_side_pane_t1

0x1205,	// (0x00037743) cell_hwr_side_pane_t1_copy1

0x1213,	// (0x00037751) cell_hwr_candidate_pane_g1

0x1242,	// (0x00037780) cell_hwr_candidate_pane_t1

0x545a,	// (0x0003b998) cell_vkb_candidate_pane_g2

0x5a4c,	// (0x0003bf8a) cell_vkb_candidate_pane_t1

0x0f98,	// (0x000374d6) bg_popup_fep_shadow_pane_ParamLimits

0x0f98,	// (0x000374d6) bg_popup_fep_shadow_pane

0x104f,	// (0x0003758d) bg_fep_hwr_top_pane_g4

0x54df,	// (0x0003ba1d) bg_hwr_side_pane_g1_ParamLimits

0x54df,	// (0x0003ba1d) bg_hwr_side_pane_g1

0xaec2,	// (0x00041400) cell_hwr_side_pane_ParamLimits

0xaec2,	// (0x00041400) cell_hwr_side_pane

0x10ff,	// (0x0003763d) fep_hwr_write_pane_g1_ParamLimits

0x10ff,	// (0x0003763d) fep_hwr_write_pane_g1

0x110c,	// (0x0003764a) fep_hwr_write_pane_g2_ParamLimits

0x110c,	// (0x0003764a) fep_hwr_write_pane_g2

0x1119,	// (0x00037657) fep_hwr_write_pane_g3_ParamLimits

0x1119,	// (0x00037657) fep_hwr_write_pane_g3

0xaee2,	// (0x00041420) fep_hwr_write_pane_g4_ParamLimits

0xaee2,	// (0x00041420) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x00046033) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x00046033) fep_hwr_write_pane_g

0x104f,	// (0x0003758d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x104f,	// (0x0003758d) bg_fep_hwr_candidate_pane_g2

0x113c,	// (0x0003767a) cell_hwr_candidate_pane_ParamLimits

0x113c,	// (0x0003767a) cell_hwr_candidate_pane

0x118e,	// (0x000376cc) fep_hwr_candidate_pane_g1_ParamLimits

0x553f,	// (0x0003ba7d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x553f,	// (0x0003ba7d) bg_popup_fep_shadow_pane_cp2

0x56d5,	// (0x0003bc13) fep_vkb_top_pane_g4_ParamLimits

0x56d5,	// (0x0003bc13) fep_vkb_top_pane_g4

0x571b,	// (0x0003bc59) fep_vkb_side_pane_g2_ParamLimits

0x571b,	// (0x0003bc59) fep_vkb_side_pane_g2

0x9d14,	// (0x00040252) list_setting_pane_t4_ParamLimits

0x9d14,	// (0x00040252) list_setting_pane_t4

0x9db0,	// (0x000402ee) list_setting_number_pane_t5_ParamLimits

0x9db0,	// (0x000402ee) list_setting_number_pane_t5

0xf2e2,	// (0x00045820) list_double_heading_pane_cp2_ParamLimits

0xf2e2,	// (0x00045820) list_double_heading_pane_cp2

0x5a5a,	// (0x0003bf98) list_double_heading_pane_g1_cp2_ParamLimits

0x5a5a,	// (0x0003bf98) list_double_heading_pane_g1_cp2

0x5a66,	// (0x0003bfa4) list_double_heading_pane_g2_cp2_ParamLimits

0x5a66,	// (0x0003bfa4) list_double_heading_pane_g2_cp2

0x5a7a,	// (0x0003bfb8) list_double_heading_pane_t1_cp2_ParamLimits

0x5a7a,	// (0x0003bfb8) list_double_heading_pane_t1_cp2

0x5a90,	// (0x0003bfce) list_double_heading_pane_t2_cp2_ParamLimits

0x5a90,	// (0x0003bfce) list_double_heading_pane_t2_cp2

0xb778,	// (0x00041cb6) aid_value_unit2

0xee06,	// (0x00045344) popup_preview_fixed_window

0xb923,	// (0x00041e61) bg_popup_preview_window_pane_cp02

0x5aa2,	// (0x0003bfe0) list_preview_fixed_pane

0x5ae8,	// (0x0003c026) list_empty_pane_fp_ParamLimits

0x5ae8,	// (0x0003c026) list_empty_pane_fp

0x5ae8,	// (0x0003c026) list_single_cale_day_pane_fp_ParamLimits

0x5ae8,	// (0x0003c026) list_single_cale_day_pane_fp

0x5ae8,	// (0x0003c026) list_single_graphic_heading_pane_fp_ParamLimits

0x5ae8,	// (0x0003c026) list_single_graphic_heading_pane_fp

0x5ae8,	// (0x0003c026) list_single_graphic_pane_fp_ParamLimits

0x5ae8,	// (0x0003c026) list_single_graphic_pane_fp

0x5ae8,	// (0x0003c026) list_single_heading_pane_fp_ParamLimits

0x5ae8,	// (0x0003c026) list_single_heading_pane_fp

0x5ae8,	// (0x0003c026) list_single_pane_fp_ParamLimits

0x5ae8,	// (0x0003c026) list_single_pane_fp

0x5b01,	// (0x0003c03f) list_single_pane_fp_g1_ParamLimits

0x5b01,	// (0x0003c03f) list_single_pane_fp_g1

0xd82f,	// (0x00043d6d) list_single_pane_fp_g2_ParamLimits

0xd82f,	// (0x00043d6d) list_single_pane_fp_g2

0xd83b,	// (0x00043d79) list_single_pane_fp_g3_ParamLimits

0xd83b,	// (0x00043d79) list_single_pane_fp_g3

0x5b0d,	// (0x0003c04b) list_single_pane_fp_g4_ParamLimits

0x5b0d,	// (0x0003c04b) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x0004609a) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x0004609a) list_single_pane_fp_g

0xd84f,	// (0x00043d8d) list_single_pane_fp_t1_ParamLimits

0xd84f,	// (0x00043d8d) list_single_pane_fp_t1

0xd866,	// (0x00043da4) list_single_graphic_pane_fp_g1_ParamLimits

0xd866,	// (0x00043da4) list_single_graphic_pane_fp_g1

0x5b01,	// (0x0003c03f) list_single_graphic_pane_fp_g2_ParamLimits

0x5b01,	// (0x0003c03f) list_single_graphic_pane_fp_g2

0xd82f,	// (0x00043d6d) list_single_graphic_pane_fp_g3_ParamLimits

0xd82f,	// (0x00043d6d) list_single_graphic_pane_fp_g3

0xd83b,	// (0x00043d79) list_single_graphic_pane_fp_g4_ParamLimits

0xd83b,	// (0x00043d79) list_single_graphic_pane_fp_g4

0x5b0d,	// (0x0003c04b) list_single_graphic_pane_fp_g5_ParamLimits

0x5b0d,	// (0x0003c04b) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x000460a3) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x000460a3) list_single_graphic_pane_fp_g

0xd872,	// (0x00043db0) list_single_graphic_pane_fp_t1_ParamLimits

0xd872,	// (0x00043db0) list_single_graphic_pane_fp_t1

0xd866,	// (0x00043da4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd866,	// (0x00043da4) list_single_graphic_heading_pane_fp_g1

0x5b01,	// (0x0003c03f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5b01,	// (0x0003c03f) list_single_graphic_heading_pane_fp_g2

0xd82f,	// (0x00043d6d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd82f,	// (0x00043d6d) list_single_graphic_heading_pane_fp_g3

0xd83b,	// (0x00043d79) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd83b,	// (0x00043d79) list_single_graphic_heading_pane_fp_g4

0x5b0d,	// (0x0003c04b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5b0d,	// (0x0003c04b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x000460a3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x000460a3) list_single_graphic_heading_pane_fp_g

0xd888,	// (0x00043dc6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd888,	// (0x00043dc6) list_single_graphic_heading_pane_fp_t1

0xd89e,	// (0x00043ddc) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd89e,	// (0x00043ddc) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x000460ae) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x000460ae) list_single_graphic_heading_pane_fp_t

0xd8b0,	// (0x00043dee) list_single_cale_day_pane_fp_g1_ParamLimits

0xd8b0,	// (0x00043dee) list_single_cale_day_pane_fp_g1

0x5b19,	// (0x0003c057) list_single_cale_day_pane_fp_g2_ParamLimits

0x5b19,	// (0x0003c057) list_single_cale_day_pane_fp_g2

0xd8e8,	// (0x00043e26) list_single_cale_day_pane_fp_g3_ParamLimits

0xd8e8,	// (0x00043e26) list_single_cale_day_pane_fp_g3

0xd910,	// (0x00043e4e) list_single_cale_day_pane_fp_g4_ParamLimits

0xd910,	// (0x00043e4e) list_single_cale_day_pane_fp_g4

0xd934,	// (0x00043e72) list_single_cale_day_pane_fp_g5_ParamLimits

0xd934,	// (0x00043e72) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x000460b3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x000460b3) list_single_cale_day_pane_fp_g

0xd958,	// (0x00043e96) list_single_cale_day_pane_fp_t1_ParamLimits

0xd958,	// (0x00043e96) list_single_cale_day_pane_fp_t1

0xd97e,	// (0x00043ebc) list_single_cale_day_pane_fp_t2_ParamLimits

0xd97e,	// (0x00043ebc) list_single_cale_day_pane_fp_t2

0xd997,	// (0x00043ed5) list_single_cale_day_pane_fp_t3_ParamLimits

0xd997,	// (0x00043ed5) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x000460be) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x000460be) list_single_cale_day_pane_fp_t

0x5b01,	// (0x0003c03f) list_empty_pane_fp_g1_ParamLimits

0x5b01,	// (0x0003c03f) list_empty_pane_fp_g1

0xd9b0,	// (0x00043eee) list_empty_pane_fp_t1

0xd9be,	// (0x00043efc) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x000460c5) list_empty_pane_fp_t

0x5b01,	// (0x0003c03f) list_single_heading_pane_fp_g1_ParamLimits

0x5b01,	// (0x0003c03f) list_single_heading_pane_fp_g1

0xd82f,	// (0x00043d6d) list_single_heading_pane_fp_g2_ParamLimits

0xd82f,	// (0x00043d6d) list_single_heading_pane_fp_g2

0xd83b,	// (0x00043d79) list_single_heading_pane_fp_g3_ParamLimits

0xd83b,	// (0x00043d79) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x000460ca) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x000460ca) list_single_heading_pane_fp_g

0xd9cc,	// (0x00043f0a) list_single_heading_pane_fp_t1_ParamLimits

0xd9cc,	// (0x00043f0a) list_single_heading_pane_fp_t1

0xd9de,	// (0x00043f1c) list_single_heading_pane_fp_t2_ParamLimits

0xd9de,	// (0x00043f1c) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x000460d1) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x000460d1) list_single_heading_pane_fp_t

0xbfa8,	// (0x000424e6) aid_size_cell_fast

0xb906,	// (0x00041e44) soft_indicator_pane_cp1_t1

0xbfe5,	// (0x00042523) cell_app_pane_cp2_ParamLimits

0xbfe5,	// (0x00042523) cell_app_pane_cp2

0x0fba,	// (0x000374f8) fep_hwr_candidate_drop_down_list_pane

0x11a8,	// (0x000376e6) fep_hwr_candidate_pane_g3_ParamLimits

0x11a8,	// (0x000376e6) fep_hwr_candidate_pane_g3

0xd822,	// (0x00043d60) fep_hwr_candidate_pane_g4_ParamLimits

0xd822,	// (0x00043d60) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x00046040) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x00046040) fep_hwr_candidate_pane_g

0x55cf,	// (0x0003bb0d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x55cf,	// (0x0003bb0d) fep_vkb_candidate_drop_down_list_pane

0x59f7,	// (0x0003bf35) fep_vkb_candidate_pane_g3

0x59ff,	// (0x0003bf3d) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x0004606d) fep_vkb_candidate_pane_g

0x1213,	// (0x00037751) cell_hwr_candidate_pane_g1_ParamLimits

0x1221,	// (0x0003775f) cell_hwr_candidate_pane_g3_ParamLimits

0x1221,	// (0x0003775f) cell_hwr_candidate_pane_g3

0x731f,	// (0x0003d85d) cell_hwr_candidate_pane_g4_ParamLimits

0x731f,	// (0x0003d85d) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0004608c) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x0004608c) cell_hwr_candidate_pane_g

0x5a16,	// (0x0003bf54) cell_vkb_candidate_pane_g3_ParamLimits

0x5a16,	// (0x0003bf54) cell_vkb_candidate_pane_g3

0x5a31,	// (0x0003bf6f) cell_vkb_candidate_pane_g4_ParamLimits

0x5a31,	// (0x0003bf6f) cell_vkb_candidate_pane_g4

0x5b25,	// (0x0003c063) cell_app_pane_cp2_g1_ParamLimits

0x5b25,	// (0x0003c063) cell_app_pane_cp2_g1

0x5b43,	// (0x0003c081) cell_app_pane_cp2_g2_ParamLimits

0x5b43,	// (0x0003c081) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x000460d6) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x000460d6) cell_app_pane_cp2_g

0x5b4f,	// (0x0003c08d) cell_app_pane_cp2_t1_ParamLimits

0x5b4f,	// (0x0003c08d) cell_app_pane_cp2_t1

0xbe32,	// (0x00042370) grid_highlight_pane_cp1_ParamLimits

0xbe32,	// (0x00042370) grid_highlight_pane_cp1

0x1260,	// (0x0003779e) cell_hwr_candidate_pane_cp1_ParamLimits

0x1260,	// (0x0003779e) cell_hwr_candidate_pane_cp1

0x1213,	// (0x00037751) fep_hwr_candidate_drop_down_list_pane_g1

0x1284,	// (0x000377c2) fep_hwr_candidate_drop_down_list_pane_g2

0x1291,	// (0x000377cf) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x000460db) fep_hwr_candidate_drop_down_list_pane_g

0x129e,	// (0x000377dc) fep_hwr_candidate_drop_down_list_scroll_pane

0x12a7,	// (0x000377e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x12a7,	// (0x000377e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x12b4,	// (0x000377f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x12b4,	// (0x000377f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x12c1,	// (0x000377ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x12c1,	// (0x000377ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x12ce,	// (0x0003780c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x12ce,	// (0x0003780c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x12e9,	// (0x00037827) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x12e9,	// (0x00037827) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1304,	// (0x00037842) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1304,	// (0x00037842) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x131f,	// (0x0003785d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x131f,	// (0x0003785d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x133a,	// (0x00037878) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x133a,	// (0x00037878) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x000460e2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x000460e2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5b61,	// (0x0003c09f) cell_vkb_candidate_pane_cp1_ParamLimits

0x5b61,	// (0x0003c09f) cell_vkb_candidate_pane_cp1

0x56d5,	// (0x0003bc13) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x56d5,	// (0x0003bc13) fep_vkb_candidate_drop_down_list_pane_g1

0x5b87,	// (0x0003c0c5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5b87,	// (0x0003c0c5) fep_vkb_candidate_drop_down_list_pane_g2

0x5b94,	// (0x0003c0d2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5b94,	// (0x0003c0d2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x000460f3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x000460f3) fep_vkb_candidate_drop_down_list_pane_g

0x5ba1,	// (0x0003c0df) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5ba1,	// (0x0003c0df) fep_vkb_candidate_drop_down_list_scroll_pane

0x5bae,	// (0x0003c0ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5bae,	// (0x0003c0ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5bbb,	// (0x0003c0f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5bbb,	// (0x0003c0f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5bc7,	// (0x0003c105) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5bc7,	// (0x0003c105) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5bd3,	// (0x0003c111) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5bd3,	// (0x0003c111) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5bf4,	// (0x0003c132) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5bf4,	// (0x0003c132) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5c15,	// (0x0003c153) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c15,	// (0x0003c153) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5c36,	// (0x0003c174) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5c36,	// (0x0003c174) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5c57,	// (0x0003c195) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5c57,	// (0x0003c195) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x000460fa) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x000460fa) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x95f2,	// (0x0003fb30) title_pane_g1_ParamLimits

0x9605,	// (0x0003fb43) title_pane_g2_ParamLimits

0xf529,	// (0x00045a67) title_pane_g_ParamLimits

0xf27c,	// (0x000457ba) aid_call2_pane

0xf284,	// (0x000457c2) aid_call_pane

0xf28c,	// (0x000457ca) popup_clock_analogue_window_g1

0xf28c,	// (0x000457ca) popup_clock_analogue_window_g2

0xf294,	// (0x000457d2) popup_clock_analogue_window_g3

0xf29d,	// (0x000457db) popup_clock_analogue_window_g4

0xb78a,	// (0x00041cc8) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x00045c11) popup_clock_analogue_window_g

0xf2a5,	// (0x000457e3) popup_clock_analogue_window_t1

0xf302,	// (0x00045840) clock_digital_number_pane_ParamLimits

0xf302,	// (0x00045840) clock_digital_number_pane

0xf30e,	// (0x0004584c) clock_digital_number_pane_cp02_ParamLimits

0xf30e,	// (0x0004584c) clock_digital_number_pane_cp02

0xf31a,	// (0x00045858) clock_digital_number_pane_cp03_ParamLimits

0xf31a,	// (0x00045858) clock_digital_number_pane_cp03

0xf326,	// (0x00045864) clock_digital_number_pane_cp04_ParamLimits

0xf326,	// (0x00045864) clock_digital_number_pane_cp04

0xf332,	// (0x00045870) clock_digital_separator_pane_ParamLimits

0xf332,	// (0x00045870) clock_digital_separator_pane

0xf33e,	// (0x0004587c) popup_clock_digital_window_t1_ParamLimits

0xf33e,	// (0x0004587c) popup_clock_digital_window_t1

0xb78a,	// (0x00041cc8) clock_digital_number_pane_g1

0xb78a,	// (0x00041cc8) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x00045c1c) clock_digital_number_pane_g

0xb78a,	// (0x00041cc8) clock_digital_separator_pane_g1

0xb78a,	// (0x00041cc8) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x00045c1c) clock_digital_separator_pane_g

0xabd3,	// (0x00041111) aid_fill_nsta_ParamLimits

0xc255,	// (0x00042793) indicator_nsta_pane_ParamLimits

0x2bf0,	// (0x0003912e) popup_clock_analogue_window

0x2bf0,	// (0x0003912e) popup_clock_digital_window

0xcaf6,	// (0x00043034) grid_indicator_nsta_pane_ParamLimits

0x4eaf,	// (0x0003b3ed) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x00045fc0) clock_nsta_pane_t

0xf0c9,	// (0x00045607) aid_size_max_handle

0xa0ab,	// (0x000405e9) aid_size_min_handle

0x25b0,	// (0x00038aee) editor_scroll_pane

0x5c72,	// (0x0003c1b0) ex_editor_pane

0xbf6e,	// (0x000424ac) scroll_pane_cp13

0xbdd1,	// (0x0004230f) scroll_pane_cp14

0xf2da,	// (0x00045818) scroll_pane_cp36

0xa138,	// (0x00040676) list_single_graphic_hl_pane_cp2_ParamLimits

0xa138,	// (0x00040676) list_single_graphic_hl_pane_cp2

0xc983,	// (0x00042ec1) list_single_graphic_hl_pane_ParamLimits

0xc983,	// (0x00042ec1) list_single_graphic_hl_pane

0xd9f4,	// (0x00043f32) aid_size_min_hl_cp1

0x5c7a,	// (0x0003c1b8) list_highlight_pane_cp34_ParamLimits

0x5c7a,	// (0x0003c1b8) list_highlight_pane_cp34

0x5c8b,	// (0x0003c1c9) list_single_graphic_hl_pane_g1_ParamLimits

0x5c8b,	// (0x0003c1c9) list_single_graphic_hl_pane_g1

0xaef7,	// (0x00041435) list_single_graphic_hl_pane_g2_ParamLimits

0xaef7,	// (0x00041435) list_single_graphic_hl_pane_g2

0xaef7,	// (0x00041435) list_single_graphic_hl_pane_g3_ParamLimits

0xaef7,	// (0x00041435) list_single_graphic_hl_pane_g3

0xaf03,	// (0x00041441) list_single_graphic_hl_pane_g4_ParamLimits

0xaf03,	// (0x00041441) list_single_graphic_hl_pane_g4

0xaf0f,	// (0x0004144d) list_single_graphic_hl_pane_g5_ParamLimits

0xaf0f,	// (0x0004144d) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x0004610b) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x0004610b) list_single_graphic_hl_pane_g

0xaf23,	// (0x00041461) list_single_graphic_hl_pane_t1_ParamLimits

0xaf23,	// (0x00041461) list_single_graphic_hl_pane_t1

0x5c98,	// (0x0003c1d6) aid_size_min_hl_cp2

0x5ca1,	// (0x0003c1df) list_highlight_pane_cp34_cp2_ParamLimits

0x5ca1,	// (0x0003c1df) list_highlight_pane_cp34_cp2

0x5c8b,	// (0x0003c1c9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5c8b,	// (0x0003c1c9) list_single_graphic_hl_pane_g1_cp2

0x5cae,	// (0x0003c1ec) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5cae,	// (0x0003c1ec) list_single_graphic_hl_pane_g2_cp2

0x5cba,	// (0x0003c1f8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5cba,	// (0x0003c1f8) list_single_graphic_hl_pane_g3_cp2

0x5cc8,	// (0x0003c206) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5cc8,	// (0x0003c206) list_single_graphic_hl_pane_g4_cp2

0x5cd4,	// (0x0003c212) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5cd4,	// (0x0003c212) list_single_graphic_hl_pane_g5_cp2

0xa3a7,	// (0x000408e5) control_pane_g4_ParamLimits

0xa3a7,	// (0x000408e5) control_pane_g4

0x28d7,	// (0x00038e15) bg_popup_sub_pane_cp10_ParamLimits

0x5464,	// (0x0003b9a2) list_choice_list_pane_ParamLimits

0x5473,	// (0x0003b9b1) scroll_pane_cp23

0xb923,	// (0x00041e61) bg_popup_preview_window_pane_cp02_ParamLimits

0x5aa2,	// (0x0003bfe0) list_preview_fixed_pane_ParamLimits

0x5ab8,	// (0x0003bff6) list_preview_fixed_pane_cp_ParamLimits

0x5ab8,	// (0x0003bff6) list_preview_fixed_pane_cp

0x5ac4,	// (0x0003c002) popup_preview_fixed_window_g1_ParamLimits

0x5ac4,	// (0x0003c002) popup_preview_fixed_window_g1

0x5ad0,	// (0x0003c00e) popup_preview_fixed_window_g2_ParamLimits

0x5ad0,	// (0x0003c00e) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x00046093) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x00046093) popup_preview_fixed_window_g

0xf016,	// (0x00045554) aid_navi_side_left_pane_ParamLimits

0xf02b,	// (0x00045569) aid_navi_side_right_pane_ParamLimits

0xf043,	// (0x00045581) navi_icon_pane_stacon_ParamLimits

0xf057,	// (0x00045595) navi_navi_pane_stacon_ParamLimits

0xf043,	// (0x00045581) navi_text_pane_stacon_ParamLimits

0xecf7,	// (0x00045235) main_text_info_pane

0x5cfe,	// (0x0003c23c) listscroll_text_info_pane

0x5d06,	// (0x0003c244) list_text_info_pane_ParamLimits

0x5d06,	// (0x0003c244) list_text_info_pane

0x5d15,	// (0x0003c253) scroll_pane_cp24_ParamLimits

0x5d15,	// (0x0003c253) scroll_pane_cp24

0xce38,	// (0x00043376) list_text_info_pane_t1_ParamLimits

0xce38,	// (0x00043376) list_text_info_pane_t1

0xa4c6,	// (0x00040a04) popup_fast_swap2_window_ParamLimits

0xa4c6,	// (0x00040a04) popup_fast_swap2_window

0x5d58,	// (0x0003c296) aid_size_cell_fast2

0xb780,	// (0x00041cbe) bg_popup_window_pane_cp17

0x5d62,	// (0x0003c2a0) heading_pane_cp2

0x5d6a,	// (0x0003c2a8) listscroll_fast2_pane

0x5d72,	// (0x0003c2b0) grid_fast2_pane

0x5d7c,	// (0x0003c2ba) listscroll_fast2_pane_g1

0x5d86,	// (0x0003c2c4) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x00046116) listscroll_fast2_pane_g

0xbf6e,	// (0x000424ac) scroll_pane_cp26

0x5d90,	// (0x0003c2ce) cell_fast2_pane_ParamLimits

0x5d90,	// (0x0003c2ce) cell_fast2_pane

0x5da7,	// (0x0003c2e5) cell_fast2_pane_g1

0x5db0,	// (0x0003c2ee) cell_fast2_pane_g2

0x5db9,	// (0x0003c2f7) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x0004611b) cell_fast2_pane_g

0xbb98,	// (0x000420d6) grid_highlight_pane_cp9

0x0398,	// (0x000368d6) main_eswt_pane_ParamLimits

0x0398,	// (0x000368d6) main_eswt_pane

0x5d2a,	// (0x0003c268) list_single_text_info_pane

0x5dc1,	// (0x0003c2ff) eswt_ctrl_button_pane

0x5dc1,	// (0x0003c2ff) eswt_ctrl_canvas_pane

0x5dc9,	// (0x0003c307) eswt_ctrl_combo_pane

0x5dc1,	// (0x0003c2ff) eswt_ctrl_default_pane

0x5dc1,	// (0x0003c2ff) eswt_ctrl_label_pane

0x5dd1,	// (0x0003c30f) eswt_ctrl_wait_pane

0x5dd9,	// (0x0003c317) eswt_shell_pane

0xb780,	// (0x00041cbe) listscroll_eswt_app_pane

0x5df9,	// (0x0003c337) popup_eswt_tasktip_window_ParamLimits

0x5df9,	// (0x0003c337) popup_eswt_tasktip_window

0x2e83,	// (0x000393c1) bg_popup_window_pane_cp18

0x5e12,	// (0x0003c350) eswt_control_pane_g1_ParamLimits

0x5e12,	// (0x0003c350) eswt_control_pane_g1

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2_ParamLimits

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3_ParamLimits

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3

0x5e39,	// (0x0003c377) eswt_control_pane_g4_ParamLimits

0x5e39,	// (0x0003c377) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x00046122) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x00046122) eswt_control_pane_g

0xbe32,	// (0x00042370) bg_button_pane_ParamLimits

0xbe32,	// (0x00042370) bg_button_pane

0xbbad,	// (0x000420eb) common_borders_pane_copy2_ParamLimits

0xbbad,	// (0x000420eb) common_borders_pane_copy2

0x5e46,	// (0x0003c384) control_button_pane_g1_ParamLimits

0x5e46,	// (0x0003c384) control_button_pane_g1

0x5e52,	// (0x0003c390) control_button_pane_g2_ParamLimits

0x5e52,	// (0x0003c390) control_button_pane_g2

0x5e5e,	// (0x0003c39c) control_button_pane_g3_ParamLimits

0x5e5e,	// (0x0003c39c) control_button_pane_g3

0x0002,

0xfbed,	// (0x0004612b) control_button_pane_g_ParamLimits

0xfbed,	// (0x0004612b) control_button_pane_g

0x5e72,	// (0x0003c3b0) control_button_pane_t1

0x5e80,	// (0x0003c3be) control_button_pane_t2

0x0001,

0xfbf4,	// (0x00046132) control_button_pane_t

0x2e0f,	// (0x0003934d) bg_button_pane_g1

0x2e1f,	// (0x0003935d) bg_button_pane_g2

0x2e17,	// (0x00039355) bg_button_pane_g3

0x2e2f,	// (0x0003936d) bg_button_pane_g4

0x2e27,	// (0x00039365) bg_button_pane_g5

0x2e37,	// (0x00039375) bg_button_pane_g6

0x2e3f,	// (0x0003937d) bg_button_pane_g7

0x2e4f,	// (0x0003938d) bg_button_pane_g8

0x2e47,	// (0x00039385) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00045d7a) bg_button_pane_g

0x541f,	// (0x0003b95d) common_borders_pane_ParamLimits

0x541f,	// (0x0003b95d) common_borders_pane

0x5e12,	// (0x0003c350) eswt_control_pane_g1_copy1_ParamLimits

0x5e12,	// (0x0003c350) eswt_control_pane_g1_copy1

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2_copy1_ParamLimits

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2_copy1

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3_copy1_ParamLimits

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3_copy1

0x5e39,	// (0x0003c377) eswt_control_pane_g4_copy1_ParamLimits

0x5e39,	// (0x0003c377) eswt_control_pane_g4_copy1

0x545a,	// (0x0003b998) bg_eswt_ctrl_canvas_pane_g1

0x541f,	// (0x0003b95d) common_borders_pane_cp2_ParamLimits

0x541f,	// (0x0003b95d) common_borders_pane_cp2

0x541f,	// (0x0003b95d) common_borders_pane_cp3_ParamLimits

0x541f,	// (0x0003b95d) common_borders_pane_cp3

0x5e8e,	// (0x0003c3cc) separator_horizontal_pane

0x5e96,	// (0x0003c3d4) separator_vertical_pane

0x5e12,	// (0x0003c350) eswt_control_pane_g1_copy2_ParamLimits

0x5e12,	// (0x0003c350) eswt_control_pane_g1_copy2

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2_copy2_ParamLimits

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2_copy2

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3_copy2_ParamLimits

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3_copy2

0x5e39,	// (0x0003c377) eswt_control_pane_g4_copy2_ParamLimits

0x5e39,	// (0x0003c377) eswt_control_pane_g4_copy2

0xb780,	// (0x00041cbe) common_borders_pane_cp4

0x5e9f,	// (0x0003c3dd) separator_horizontal_pane_g1

0x5ea8,	// (0x0003c3e6) separator_horizontal_pane_g2

0x5eb1,	// (0x0003c3ef) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x00046137) separator_horizontal_pane_g

0x5e12,	// (0x0003c350) eswt_control_pane_g1_copy3_ParamLimits

0x5e12,	// (0x0003c350) eswt_control_pane_g1_copy3

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2_copy3_ParamLimits

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2_copy3

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3_copy3_ParamLimits

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3_copy3

0x5e39,	// (0x0003c377) eswt_control_pane_g4_copy3_ParamLimits

0x5e39,	// (0x0003c377) eswt_control_pane_g4_copy3

0xb780,	// (0x00041cbe) common_borders_pane_cp5

0x5eba,	// (0x0003c3f8) separator_vertical_pane_g1

0x5ec3,	// (0x0003c401) separator_vertical_pane_g2

0x5ecc,	// (0x0003c40a) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x0004613e) separator_vertical_pane_g

0x5e12,	// (0x0003c350) eswt_control_pane_g1_copy4_ParamLimits

0x5e12,	// (0x0003c350) eswt_control_pane_g1_copy4

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2_copy4_ParamLimits

0x5e1f,	// (0x0003c35d) eswt_control_pane_g2_copy4

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3_copy4_ParamLimits

0x5e2c,	// (0x0003c36a) eswt_control_pane_g3_copy4

0x5e39,	// (0x0003c377) eswt_control_pane_g4_copy4_ParamLimits

0x5e39,	// (0x0003c377) eswt_control_pane_g4_copy4

0xce5a,	// (0x00043398) eswt_ctrl_combo_button_pane

0xce62,	// (0x000433a0) eswt_ctrl_input_pane

0xce6a,	// (0x000433a8) popup_choice_list_window_cp70

0xce72,	// (0x000433b0) eswt_ctrl_input_pane_t1

0xb780,	// (0x00041cbe) input_focus_pane_cp70

0x541f,	// (0x0003b95d) bg_button_pane_cp70_ParamLimits

0x541f,	// (0x0003b95d) bg_button_pane_cp70

0xce80,	// (0x000433be) eswt_ctrl_combo_button_pane_g1

0x5f03,	// (0x0003c441) wait_bar_pane_cp70

0x2e83,	// (0x000393c1) bg_popup_window_pane_cp70_ParamLimits

0x2e83,	// (0x000393c1) bg_popup_window_pane_cp70

0x5f0b,	// (0x0003c449) popup_eswt_tasktip_window_t1

0x5f21,	// (0x0003c45f) wait_bar_pane_cp71_ParamLimits

0x5f21,	// (0x0003c45f) wait_bar_pane_cp71

0x5f2d,	// (0x0003c46b) grid_eswt_app_pane

0xf11b,	// (0x00045659) scroll_pane_cp70

0xce88,	// (0x000433c6) cell_eswt_app_pane_ParamLimits

0xce88,	// (0x000433c6) cell_eswt_app_pane

0xceba,	// (0x000433f8) cell_eswt_app_pane_g1_ParamLimits

0xceba,	// (0x000433f8) cell_eswt_app_pane_g1

0xcee9,	// (0x00043427) cell_eswt_app_pane_g2_ParamLimits

0xcee9,	// (0x00043427) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x00046145) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x00046145) cell_eswt_app_pane_g

0xcf12,	// (0x00043450) cell_eswt_app_pane_t1_ParamLimits

0xcf12,	// (0x00043450) cell_eswt_app_pane_t1

0x5ff2,	// (0x0003c530) grid_highlight_pane_cp70_ParamLimits

0x5ff2,	// (0x0003c530) grid_highlight_pane_cp70

0x2476,	// (0x000389b4) set_content_pane_g1

0xa38b,	// (0x000408c9) status_small_volume_pane

0xaf39,	// (0x00041477) status_small_volume_pane_g1

0xaf41,	// (0x0004147f) volume_small2_pane

0xaf4a,	// (0x00041488) volume_small2_pane_g1

0xaf53,	// (0x00041491) volume_small2_pane_g2

0xaf5c,	// (0x0004149a) volume_small2_pane_g3

0xaf65,	// (0x000414a3) volume_small2_pane_g4

0xaf6e,	// (0x000414ac) volume_small2_pane_g5

0xaf77,	// (0x000414b5) volume_small2_pane_g6

0xaf80,	// (0x000414be) volume_small2_pane_g7

0xaf89,	// (0x000414c7) volume_small2_pane_g8

0xaf92,	// (0x000414d0) volume_small2_pane_g9

0xaf9b,	// (0x000414d9) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x0004614a) volume_small2_pane_g

0x5829,	// (0x0003bd67) fep_vkb_top_text_pane_g1_ParamLimits

0xcde0,	// (0x0004331e) fep_vkb_top_text_pane_t1_ParamLimits

0x5adc,	// (0x0003c01a) popup_preview_fixed_window_g3_ParamLimits

0x5adc,	// (0x0003c01a) popup_preview_fixed_window_g3

0xab66,	// (0x000410a4) popup_toolbar_trans_pane

0xc7ed,	// (0x00042d2b) aid_height_set_list_ParamLimits

0x41ec,	// (0x0003a72a) aid_size_parent_ParamLimits

0x28d7,	// (0x00038e15) list_highlight_pane_cp2_ParamLimits

0x2476,	// (0x000389b4) set_content_pane_g1_ParamLimits

0xc997,	// (0x00042ed5) list_single_image_pane_ParamLimits

0xc997,	// (0x00042ed5) list_single_image_pane

0xcf44,	// (0x00043482) aid_size_cell_image_ParamLimits

0xcf44,	// (0x00043482) aid_size_cell_image

0xcf51,	// (0x0004348f) grid_single_image_pane_ParamLimits

0xcf51,	// (0x0004348f) grid_single_image_pane

0xbe40,	// (0x0004237e) list_single_image_pane_g1_ParamLimits

0xbe40,	// (0x0004237e) list_single_image_pane_g1

0xbe4c,	// (0x0004238a) list_single_image_pane_g2_ParamLimits

0xbe4c,	// (0x0004238a) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x0004615f) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x0004615f) list_single_image_pane_g

0x6019,	// (0x0003c557) list_single_image_pane_t1_ParamLimits

0x6019,	// (0x0003c557) list_single_image_pane_t1

0xcf5f,	// (0x0004349d) cell_image_list_pane_ParamLimits

0xcf5f,	// (0x0004349d) cell_image_list_pane

0xcf75,	// (0x000434b3) cell_image_list_pane_g1

0xcf7e,	// (0x000434bc) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x00046164) cell_image_list_pane_g

0x6059,	// (0x0003c597) aid_size_cell_tb_trans_pane

0xbe32,	// (0x00042370) bg_tb_trans_pane

0x606b,	// (0x0003c5a9) grid_tb_trans_pane

0x2e0f,	// (0x0003934d) bg_tb_trans_pane_g1

0x2e1f,	// (0x0003935d) bg_tb_trans_pane_g2

0x2e17,	// (0x00039355) bg_tb_trans_pane_g3

0x2e2f,	// (0x0003936d) bg_tb_trans_pane_g4

0x2e27,	// (0x00039365) bg_tb_trans_pane_g5

0x2e4f,	// (0x0003938d) bg_tb_trans_pane_g6

0x2e47,	// (0x00039385) bg_tb_trans_pane_g7

0x2e37,	// (0x00039375) bg_tb_trans_pane_g8

0x2e3f,	// (0x0003937d) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x00046169) bg_tb_trans_pane_g

0x607f,	// (0x0003c5bd) cell_toolbar_trans_pane_ParamLimits

0x607f,	// (0x0003c5bd) cell_toolbar_trans_pane

0x545a,	// (0x0003b998) cell_toolbar_trans_pane_g1

0xcbd7,	// (0x00043115) list_form2_midp_pane_t1

0xcbe5,	// (0x00043123) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x00046006) list_form2_midp_pane_t

0x50ae,	// (0x0003b5ec) scroll_pane_cp51_ParamLimits

0x5275,	// (0x0003b7b3) form2_midp_wait_pane_g1

0x527e,	// (0x0003b7bc) form2_midp_wait_pane_g2

0x5287,	// (0x0003b7c5) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x0004601b) form2_midp_wait_pane_g

0xb7f0,	// (0x00041d2e) list_highlight_pane_cp21_ParamLimits

0x52c0,	// (0x0003b7fe) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x52cf,	// (0x0003b80d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd534,	// (0x00043a72) list_single_2graphic_im_pane_ParamLimits

0xd534,	// (0x00043a72) list_single_2graphic_im_pane

0xcf87,	// (0x000434c5) list_single_2graphic_im_pane_g1_ParamLimits

0xcf87,	// (0x000434c5) list_single_2graphic_im_pane_g1

0xcf98,	// (0x000434d6) list_single_2graphic_im_pane_g2_ParamLimits

0xcf98,	// (0x000434d6) list_single_2graphic_im_pane_g2

0xcfa4,	// (0x000434e2) list_single_2graphic_im_pane_g3_ParamLimits

0xcfa4,	// (0x000434e2) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x0004617c) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x0004617c) list_single_2graphic_im_pane_g

0xcfb8,	// (0x000434f6) list_single_2graphic_im_pane_t1_ParamLimits

0xcfb8,	// (0x000434f6) list_single_2graphic_im_pane_t1

0x5ae8,	// (0x0003c026) list_single_graphic_2heading_pane_fp_ParamLimits

0x5ae8,	// (0x0003c026) list_single_graphic_2heading_pane_fp

0xd866,	// (0x00043da4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd866,	// (0x00043da4) list_single_graphic_2heading_pane_fp_g1

0x5b01,	// (0x0003c03f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5b01,	// (0x0003c03f) list_single_graphic_2heading_pane_fp_g2

0xd82f,	// (0x00043d6d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd82f,	// (0x00043d6d) list_single_graphic_2heading_pane_fp_g3

0xd83b,	// (0x00043d79) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd83b,	// (0x00043d79) list_single_graphic_2heading_pane_fp_g4

0x5b0d,	// (0x0003c04b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5b0d,	// (0x0003c04b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x000460a3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x000460a3) list_single_graphic_2heading_pane_fp_g

0xd9fd,	// (0x00043f3b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd9fd,	// (0x00043f3b) list_single_graphic_2heading_pane_fp_t1

0xd89e,	// (0x00043ddc) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd89e,	// (0x00043ddc) list_single_graphic_2heading_pane_fp_t2

0xda13,	// (0x00043f51) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xda13,	// (0x00043f51) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x00046185) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x00046185) list_single_graphic_2heading_pane_fp_t

0x54eb,	// (0x0003ba29) fep_hwr_write_pane_g5_ParamLimits

0x54eb,	// (0x0003ba29) fep_hwr_write_pane_g5

0x54f7,	// (0x0003ba35) fep_hwr_write_pane_g6_ParamLimits

0x54f7,	// (0x0003ba35) fep_hwr_write_pane_g6

0x5dd9,	// (0x0003c317) eswt_shell_pane_ParamLimits

0x2e83,	// (0x000393c1) bg_popup_window_pane_cp18_ParamLimits

0x5e0a,	// (0x0003c348) heading_pane_cp70

0x5f0b,	// (0x0003c449) popup_eswt_tasktip_window_t1_ParamLimits

0xc17a,	// (0x000426b8) aid_touch_tab_arrow_left

0xc190,	// (0x000426ce) aid_touch_tab_arrow_right

0x9629,	// (0x0003fb67) title_pane_g3_ParamLimits

0x9629,	// (0x0003fb67) title_pane_g3

0xbdf1,	// (0x0004232f) set_value_pane_g1

0xab66,	// (0x000410a4) popup_toolbar_trans_pane_ParamLimits

0x6059,	// (0x0003c597) aid_size_cell_tb_trans_pane_ParamLimits

0xbe32,	// (0x00042370) bg_tb_trans_pane_ParamLimits

0x606b,	// (0x0003c5a9) grid_tb_trans_pane_ParamLimits

0xb923,	// (0x00041e61) cont_note_pane_ParamLimits

0xb923,	// (0x00041e61) cont_note_pane

0xbbad,	// (0x000420eb) cont_snote2_single_text_pane_ParamLimits

0xbbad,	// (0x000420eb) cont_snote2_single_text_pane

0xbbad,	// (0x000420eb) cont_snote2_single_graphic_pane_ParamLimits

0xbbad,	// (0x000420eb) cont_snote2_single_graphic_pane

0x3475,	// (0x000399b3) cont_note_wait_pane_ParamLimits

0x3475,	// (0x000399b3) cont_note_wait_pane

0x3475,	// (0x000399b3) cont_note_image_pane_ParamLimits

0x3475,	// (0x000399b3) cont_note_image_pane

0x6113,	// (0x0003c651) popup_note2_window_g1_ParamLimits

0x6113,	// (0x0003c651) popup_note2_window_g1

0x6144,	// (0x0003c682) popup_note2_window_t1_ParamLimits

0x6144,	// (0x0003c682) popup_note2_window_t1

0x6189,	// (0x0003c6c7) popup_note2_window_t2_ParamLimits

0x6189,	// (0x0003c6c7) popup_note2_window_t2

0x61ce,	// (0x0003c70c) popup_note2_window_t3_ParamLimits

0x61ce,	// (0x0003c70c) popup_note2_window_t3

0x6213,	// (0x0003c751) popup_note2_window_t4_ParamLimits

0x6213,	// (0x0003c751) popup_note2_window_t4

0xb9a7,	// (0x00041ee5) popup_note2_window_t5_ParamLimits

0xb9a7,	// (0x00041ee5) popup_note2_window_t5

0x0004,

0xfc53,	// (0x00046191) popup_note2_window_t_ParamLimits

0xfc53,	// (0x00046191) popup_note2_window_t

0x6242,	// (0x0003c780) popup_note2_image_window_g1_ParamLimits

0x6242,	// (0x0003c780) popup_note2_image_window_g1

0x624e,	// (0x0003c78c) popup_note2_image_window_g2_ParamLimits

0x624e,	// (0x0003c78c) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x0004619c) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x0004619c) popup_note2_image_window_g

0x6260,	// (0x0003c79e) popup_note2_image_window_t1_ParamLimits

0x6260,	// (0x0003c79e) popup_note2_image_window_t1

0x6278,	// (0x0003c7b6) popup_note2_image_window_t2_ParamLimits

0x6278,	// (0x0003c7b6) popup_note2_image_window_t2

0x6290,	// (0x0003c7ce) popup_note2_image_window_t3_ParamLimits

0x6290,	// (0x0003c7ce) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x000461a1) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x000461a1) popup_note2_image_window_t

0x3483,	// (0x000399c1) popup_note2_wait_window_g1_ParamLimits

0x3483,	// (0x000399c1) popup_note2_wait_window_g1

0x62ac,	// (0x0003c7ea) popup_note2_wait_window_g2_ParamLimits

0x62ac,	// (0x0003c7ea) popup_note2_wait_window_g2

0x349b,	// (0x000399d9) popup_note2_wait_window_g3_ParamLimits

0x349b,	// (0x000399d9) popup_note2_wait_window_g3

0x0002,

0xfc6a,	// (0x000461a8) popup_note2_wait_window_g_ParamLimits

0xfc6a,	// (0x000461a8) popup_note2_wait_window_g

0x62b8,	// (0x0003c7f6) popup_note2_wait_window_t1_ParamLimits

0x62b8,	// (0x0003c7f6) popup_note2_wait_window_t1

0x62d6,	// (0x0003c814) popup_note2_wait_window_t2_ParamLimits

0x62d6,	// (0x0003c814) popup_note2_wait_window_t2

0x62f4,	// (0x0003c832) popup_note2_wait_window_t3_ParamLimits

0x62f4,	// (0x0003c832) popup_note2_wait_window_t3

0x6306,	// (0x0003c844) popup_note2_wait_window_t4_ParamLimits

0x6306,	// (0x0003c844) popup_note2_wait_window_t4

0x0003,

0xfc71,	// (0x000461af) popup_note2_wait_window_t_ParamLimits

0xfc71,	// (0x000461af) popup_note2_wait_window_t

0x6318,	// (0x0003c856) wait_bar2_pane_ParamLimits

0x6318,	// (0x0003c856) wait_bar2_pane

0x6330,	// (0x0003c86e) popup_snote2_single_text_window_g1_ParamLimits

0x6330,	// (0x0003c86e) popup_snote2_single_text_window_g1

0x6358,	// (0x0003c896) popup_snote2_single_text_window_t1_ParamLimits

0x6358,	// (0x0003c896) popup_snote2_single_text_window_t1

0x63a4,	// (0x0003c8e2) popup_snote2_single_text_window_t2_ParamLimits

0x63a4,	// (0x0003c8e2) popup_snote2_single_text_window_t2

0x63f0,	// (0x0003c92e) popup_snote2_single_text_window_t3_ParamLimits

0x63f0,	// (0x0003c92e) popup_snote2_single_text_window_t3

0x6431,	// (0x0003c96f) popup_snote2_single_text_window_t4_ParamLimits

0x6431,	// (0x0003c96f) popup_snote2_single_text_window_t4

0x6467,	// (0x0003c9a5) popup_snote2_single_text_window_t5_ParamLimits

0x6467,	// (0x0003c9a5) popup_snote2_single_text_window_t5

0x0004,

0xfc7a,	// (0x000461b8) popup_snote2_single_text_window_t_ParamLimits

0xfc7a,	// (0x000461b8) popup_snote2_single_text_window_t

0x6492,	// (0x0003c9d0) popup_snote2_single_graphic_window_g1_ParamLimits

0x6492,	// (0x0003c9d0) popup_snote2_single_graphic_window_g1

0x64ba,	// (0x0003c9f8) popup_snote2_single_graphic_window_g2_ParamLimits

0x64ba,	// (0x0003c9f8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc85,	// (0x000461c3) popup_snote2_single_graphic_window_g_ParamLimits

0xfc85,	// (0x000461c3) popup_snote2_single_graphic_window_g

0x64e2,	// (0x0003ca20) popup_snote2_single_graphic_window_t1_ParamLimits

0x64e2,	// (0x0003ca20) popup_snote2_single_graphic_window_t1

0x652e,	// (0x0003ca6c) popup_snote2_single_graphic_window_t2_ParamLimits

0x652e,	// (0x0003ca6c) popup_snote2_single_graphic_window_t2

0x63f0,	// (0x0003c92e) popup_snote2_single_graphic_window_t3_ParamLimits

0x63f0,	// (0x0003c92e) popup_snote2_single_graphic_window_t3

0x6431,	// (0x0003c96f) popup_snote2_single_graphic_window_t4_ParamLimits

0x6431,	// (0x0003c96f) popup_snote2_single_graphic_window_t4

0x6467,	// (0x0003c9a5) popup_snote2_single_graphic_window_t5_ParamLimits

0x6467,	// (0x0003c9a5) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8a,	// (0x000461c8) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8a,	// (0x000461c8) popup_snote2_single_graphic_window_t

0x4f5e,	// (0x0003b49c) clock_nsta_pane_cp2_t1

0x4f5e,	// (0x0003b49c) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x00045fdc) clock_nsta_pane_cp2_t

0xd39d,	// (0x000438db) form_field_data_wide_pane_g1_ParamLimits

0xbe40,	// (0x0004237e) form_field_data_wide_pane_g2_ParamLimits

0xbe40,	// (0x0004237e) form_field_data_wide_pane_g2

0xbe4c,	// (0x0004238a) form_field_data_wide_pane_g3_ParamLimits

0xbe4c,	// (0x0004238a) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x00045b94) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x00045b94) form_field_data_wide_pane_g

0xcae0,	// (0x0004301e) grid_touch_3_pane_ParamLimits

0xcae0,	// (0x0004301e) grid_touch_3_pane

0xcfe9,	// (0x00043527) cell_touch_3_pane_ParamLimits

0xcfe9,	// (0x00043527) cell_touch_3_pane

0x545a,	// (0x0003b998) cell_touch_3_pane_g1

0x545a,	// (0x0003b998) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00046061) cell_touch_3_pane_g

0xb9ff,	// (0x00041f3d) cont_query_data_pane

0xba07,	// (0x00041f45) cont_query_data_pane_cp1

0x65ad,	// (0x0003caeb) button_value_adjust_pane_cp7

0x65b5,	// (0x0003caf3) query_popup_pane_cp3

0xf366,	// (0x000458a4) bg_popup_sub_pane_cp22_ParamLimits

0xf37c,	// (0x000458ba) navi_navi_volume_pane_cp2

0xf397,	// (0x000458d5) popup_side_volume_key_window_g2

0xf3a6,	// (0x000458e4) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x00045c2a) popup_side_volume_key_window_g

0xf3c3,	// (0x00045901) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x00045c31) popup_side_volume_key_window_t

0x233c,	// (0x0003887a) popup_side_volume_key_window_ParamLimits

0x9b0b,	// (0x00040049) list_double_graphic_pane_g4_ParamLimits

0x9b0b,	// (0x00040049) list_double_graphic_pane_g4

0xae50,	// (0x0004138e) list_single_2heading_msg_pane_ParamLimits

0xae50,	// (0x0004138e) list_single_2heading_msg_pane

0xafa4,	// (0x000414e2) list_single_2heading_msg_pane_g1_ParamLimits

0xafa4,	// (0x000414e2) list_single_2heading_msg_pane_g1

0xafb0,	// (0x000414ee) list_single_2heading_msg_pane_g2_ParamLimits

0xafb0,	// (0x000414ee) list_single_2heading_msg_pane_g2

0xafc3,	// (0x00041501) list_single_2heading_msg_pane_g3_ParamLimits

0xafc3,	// (0x00041501) list_single_2heading_msg_pane_g3

0xafcf,	// (0x0004150d) list_single_2heading_msg_pane_g4_ParamLimits

0xafcf,	// (0x0004150d) list_single_2heading_msg_pane_g4

0x0003,

0xfc95,	// (0x000461d3) list_single_2heading_msg_pane_g_ParamLimits

0xfc95,	// (0x000461d3) list_single_2heading_msg_pane_g

0xafe7,	// (0x00041525) list_single_2heading_msg_pane_t1_ParamLimits

0xafe7,	// (0x00041525) list_single_2heading_msg_pane_t1

0xb00f,	// (0x0004154d) list_single_2heading_msg_pane_t2_ParamLimits

0xb00f,	// (0x0004154d) list_single_2heading_msg_pane_t2

0xb07a,	// (0x000415b8) list_single_2heading_msg_pane_t3_ParamLimits

0xb07a,	// (0x000415b8) list_single_2heading_msg_pane_t3

0xda33,	// (0x00043f71) list_single_2heading_msg_pane_t4_ParamLimits

0xda33,	// (0x00043f71) list_single_2heading_msg_pane_t4

0x0003,

0xfc9e,	// (0x000461dc) list_single_2heading_msg_pane_t_ParamLimits

0xfc9e,	// (0x000461dc) list_single_2heading_msg_pane_t

0xb79e,	// (0x00041cdc) title_pane_g4_ParamLimits

0xb79e,	// (0x00041cdc) title_pane_g4

0xef67,	// (0x000454a5) title_pane_stacon_g3_ParamLimits

0xef67,	// (0x000454a5) title_pane_stacon_g3

0x60d6,	// (0x0003c614) list_single_2graphic_im_pane_g4_ParamLimits

0x60d6,	// (0x0003c614) list_single_2graphic_im_pane_g4

0x3ee5,	// (0x0003a423) popup_side_volume_key_window_cp

0x4749,	// (0x0003ac87) main_idle_act2_pane_t1

0x09ed,	// (0x00036f2b) toolbar_button_pane_g10

0x99aa,	// (0x0003fee8) popup_toolbar_window_cp1

0x4f4f,	// (0x0003b48d) clock_nsta_pane_cp_t1

0x4f4f,	// (0x0003b48d) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x00045fd7) clock_nsta_pane_cp_t

0xf37c,	// (0x000458ba) navi_navi_volume_pane_cp2_ParamLimits

0xf38b,	// (0x000458c9) popup_side_volume_key_window_g1_ParamLimits

0xf397,	// (0x000458d5) popup_side_volume_key_window_g2_ParamLimits

0xf3a6,	// (0x000458e4) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x00045c2a) popup_side_volume_key_window_g_ParamLimits

0x0fa6,	// (0x000374e4) fep_hwr_aid_pane

0x104f,	// (0x0003758d) bg_fep_hwr_top_pane_g4_ParamLimits

0x54bb,	// (0x0003b9f9) fep_hwr_top_pane_g1_ParamLimits

0x54cd,	// (0x0003ba0b) fep_hwr_top_pane_g2_ParamLimits

0x106f,	// (0x000375ad) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x0004602c) fep_hwr_top_pane_g_ParamLimits

0x1084,	// (0x000375c2) fep_hwr_top_text_pane_ParamLimits

0x3c9a,	// (0x0003a1d8) aid_touch_tab_arrow_arrow_2

0x3ca3,	// (0x0003a1e1) aid_touch_tab_arrow_left_2

0x0fba,	// (0x000374f8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0ff1,	// (0x0003752f) fep_hwr_prediction_pane

0x5623,	// (0x0003bb61) fep_vkb_prediction_pane

0xcdc0,	// (0x000432fe) fep_vkb_side_pane_g3_ParamLimits

0xcdc0,	// (0x000432fe) fep_vkb_side_pane_g3

0x1213,	// (0x00037751) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1284,	// (0x000377c2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1291,	// (0x000377cf) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x000460db) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x14bb,	// (0x000379f9) fep_hwr_prediction_pane_g1

0x14c5,	// (0x00037a03) fep_hwr_prediction_pane_g2

0x14cd,	// (0x00037a0b) fep_hwr_prediction_pane_g3

0x14d5,	// (0x00037a13) fep_hwr_prediction_pane_g4

0x0003,

0xfca7,	// (0x000461e5) fep_hwr_prediction_pane_g

0x65dc,	// (0x0003cb1a) fep_vkb_prediction_pane_g1

0x65e6,	// (0x0003cb24) fep_vkb_prediction_pane_g2

0x65ee,	// (0x0003cb2c) fep_vkb_prediction_pane_g3

0x65f6,	// (0x0003cb34) fep_vkb_prediction_pane_g4

0x0003,

0xfcb0,	// (0x000461ee) fep_vkb_prediction_pane_g

0x0d3e,	// (0x0003727c) slider_set_pane_g3

0x0d52,	// (0x00037290) slider_set_pane_g4

0x0d6a,	// (0x000372a8) slider_set_pane_g5

0x0d3e,	// (0x0003727c) slider_set_pane_g6

0x0d80,	// (0x000372be) slider_set_pane_g7

0x436b,	// (0x0003a8a9) slider_form_pane_g3

0x4374,	// (0x0003a8b2) slider_form_pane_g4

0x437c,	// (0x0003a8ba) slider_form_pane_g5

0x436b,	// (0x0003a8a9) slider_form_pane_g6

0xc956,	// (0x00042e94) slider_form_pane_g7

0x4a0d,	// (0x0003af4b) slider_set_pane_vc_g3

0x4a16,	// (0x0003af54) slider_set_pane_vc_g4

0x4a1f,	// (0x0003af5d) slider_set_pane_vc_g5

0x4a0d,	// (0x0003af4b) slider_set_pane_vc_g6

0x4a28,	// (0x0003af66) slider_set_pane_vc_g7

0x4bfe,	// (0x0003b13c) slider_form_pane_vc_g1

0x4c07,	// (0x0003b145) slider_form_pane_vc_g2

0x4c10,	// (0x0003b14e) slider_form_pane_vc_g3

0x4bfe,	// (0x0003b13c) slider_form_pane_vc_g4

0x4c19,	// (0x0003b157) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x00045fa9) slider_form_pane_vc_g

0xecf7,	// (0x00045235) main_idle_act3_pane

0x65fe,	// (0x0003cb3c) ai3_links_pane

0xd035,	// (0x00043573) popup_ai3_data_window_ParamLimits

0xd035,	// (0x00043573) popup_ai3_data_window

0xb780,	// (0x00041cbe) grid_ai3_links_pane

0xd053,	// (0x00043591) cell_ai3_links_pane_ParamLimits

0xd053,	// (0x00043591) cell_ai3_links_pane

0x663f,	// (0x0003cb7d) bg_popup_sub_pane_cp11

0x664c,	// (0x0003cb8a) cell_ai3_links_pane_g1

0xb780,	// (0x00041cbe) bg_popup_sub_pane_cp12

0x6671,	// (0x0003cbaf) heading_ai3_data_pane

0x6679,	// (0x0003cbb7) list_ai3_gene_pane

0x6685,	// (0x0003cbc3) popup_ai3_data_window_g1

0x668d,	// (0x0003cbcb) heading_ai3_data_pane_g1

0x6695,	// (0x0003cbd3) heading_ai3_data_pane_t1

0x66a3,	// (0x0003cbe1) list_double_ai3_gene_pane_ParamLimits

0x66a3,	// (0x0003cbe1) list_double_ai3_gene_pane

0x66b0,	// (0x0003cbee) list_single_ai3_gene_pane_ParamLimits

0x66b0,	// (0x0003cbee) list_single_ai3_gene_pane

0x541f,	// (0x0003b95d) list_highlight_pane_cp7_ParamLimits

0x541f,	// (0x0003b95d) list_highlight_pane_cp7

0x66bd,	// (0x0003cbfb) list_single_a13_gene_pane_t1_ParamLimits

0x66bd,	// (0x0003cbfb) list_single_a13_gene_pane_t1

0x66d4,	// (0x0003cc12) list_single_ai3_gene_pane_g1

0x66dd,	// (0x0003cc1b) list_single_ai3_gene_pane_g2

0x0001,

0xfcb9,	// (0x000461f7) list_single_ai3_gene_pane_g

0x66e5,	// (0x0003cc23) list_double_ai3_gene_pane_g1_ParamLimits

0x66e5,	// (0x0003cc23) list_double_ai3_gene_pane_g1

0x66f1,	// (0x0003cc2f) list_double_ai3_gene_pane_t1_ParamLimits

0x66f1,	// (0x0003cc2f) list_double_ai3_gene_pane_t1

0x670d,	// (0x0003cc4b) list_double_ai3_gene_pane_t2_ParamLimits

0x670d,	// (0x0003cc4b) list_double_ai3_gene_pane_t2

0x6722,	// (0x0003cc60) list_double_ai3_gene_pane_t3_ParamLimits

0x6722,	// (0x0003cc60) list_double_ai3_gene_pane_t3

0x0002,

0xfcbe,	// (0x000461fc) list_double_ai3_gene_pane_t_ParamLimits

0xfcbe,	// (0x000461fc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xda29,	// (0x00043f67) aid_size_min_col_2

0xd01f,	// (0x0004355d) aid_size_min_msg_ParamLimits

0xd01f,	// (0x0004355d) aid_size_min_msg

0xcdd4,	// (0x00043312) fep_vkb_top_text_pane_g2_ParamLimits

0xcdd4,	// (0x00043312) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x0004605c) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x0004605c) fep_vkb_top_text_pane_g

0xecf7,	// (0x00045235) main_hc_apps_shell_pane

0x673f,	// (0x0003cc7d) grid_hc_apps_pane_ParamLimits

0x673f,	// (0x0003cc7d) grid_hc_apps_pane

0x6751,	// (0x0003cc8f) list_hc_apps_pane

0x6759,	// (0x0003cc97) scroll_pane_cp37_ParamLimits

0x6759,	// (0x0003cc97) scroll_pane_cp37

0xd06d,	// (0x000435ab) cell_hc_apps_pane_ParamLimits

0xd06d,	// (0x000435ab) cell_hc_apps_pane

0xd133,	// (0x00043671) cell_hc_apps_pane_g1_ParamLimits

0xd133,	// (0x00043671) cell_hc_apps_pane_g1

0x6845,	// (0x0003cd83) cell_hc_apps_pane_g2_ParamLimits

0x6845,	// (0x0003cd83) cell_hc_apps_pane_g2

0x6861,	// (0x0003cd9f) cell_hc_apps_pane_g3_ParamLimits

0x6861,	// (0x0003cd9f) cell_hc_apps_pane_g3

0x0002,

0xfcc5,	// (0x00046203) cell_hc_apps_pane_g_ParamLimits

0xfcc5,	// (0x00046203) cell_hc_apps_pane_g

0xd15f,	// (0x0004369d) cell_hc_apps_pane_t1_ParamLimits

0xd15f,	// (0x0004369d) cell_hc_apps_pane_t1

0xb923,	// (0x00041e61) grid_highlight_pane_cp10_ParamLimits

0xb923,	// (0x00041e61) grid_highlight_pane_cp10

0xd19d,	// (0x000436db) list_single_hc_apps_pane_ParamLimits

0xd19d,	// (0x000436db) list_single_hc_apps_pane

0xd1d0,	// (0x0004370e) list_single_hc_apps_pane_g1

0xb0e8,	// (0x00041626) list_single_hc_apps_pane_g2

0x0001,

0xfccc,	// (0x0004620a) list_single_hc_apps_pane_g

0xb101,	// (0x0004163f) list_single_hc_apps_pane_g2_copy1

0xb11d,	// (0x0004165b) list_single_hc_apps_pane_t1

0xb7f0,	// (0x00041d2e) bg_set_opt_pane_cp_ParamLimits

0xee1a,	// (0x00045358) setting_slider_pane_t1_ParamLimits

0xee33,	// (0x00045371) setting_slider_pane_t2_ParamLimits

0xee4d,	// (0x0004538b) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00045a77) setting_slider_pane_t_ParamLimits

0xee65,	// (0x000453a3) slider_set_pane_ParamLimits

0x0290,	// (0x000367ce) control_pane_g5_ParamLimits

0x0290,	// (0x000367ce) control_pane_g5

0x419e,	// (0x0003a6dc) slider_set_pane_g1_ParamLimits

0x0d32,	// (0x00037270) slider_set_pane_g2_ParamLimits

0x0d3e,	// (0x0003727c) slider_set_pane_g3_ParamLimits

0x0d52,	// (0x00037290) slider_set_pane_g4_ParamLimits

0x0d6a,	// (0x000372a8) slider_set_pane_g5_ParamLimits

0x0d3e,	// (0x0003727c) slider_set_pane_g6_ParamLimits

0x0d80,	// (0x000372be) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00045e78) slider_set_pane_g_ParamLimits

0x2421,	// (0x0003895f) navi_icon_text_pane_ParamLimits

0xabf7,	// (0x00041135) aid_fill_nsta_2_ParamLimits

0xc17a,	// (0x000426b8) aid_touch_tab_arrow_left_ParamLimits

0xc190,	// (0x000426ce) aid_touch_tab_arrow_right_ParamLimits

0xc22b,	// (0x00042769) clock_nsta_pane_ParamLimits

0xc6d4,	// (0x00042c12) navi_icon_pane_g1_ParamLimits

0xc6e0,	// (0x00042c1e) navi_text_pane_t1_ParamLimits

0xcbb9,	// (0x000430f7) navi_icon_text_pane_g1_ParamLimits

0xcbc5,	// (0x00043103) navi_icon_text_pane_t1_ParamLimits

0xd1d0,	// (0x0004370e) list_single_hc_apps_pane_g1_ParamLimits

0xb0e8,	// (0x00041626) list_single_hc_apps_pane_g2_ParamLimits

0xfccc,	// (0x0004620a) list_single_hc_apps_pane_g_ParamLimits

0xb101,	// (0x0004163f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb11d,	// (0x0004165b) list_single_hc_apps_pane_t1_ParamLimits

0x9518,	// (0x0003fa56) popup_toolbar2_fixed_window_ParamLimits

0x9518,	// (0x0003fa56) popup_toolbar2_fixed_window

0xab5c,	// (0x0004109a) popup_toolbar2_float_window

0xb780,	// (0x00041cbe) bg_popup_sub_pane_cp27

0x691b,	// (0x0003ce59) grid_toolbar2_float_pane

0xb780,	// (0x00041cbe) bg_popup_sub_pane_cp26

0x691b,	// (0x0003ce59) grid_toolbar2_fixed_pane

0xd1e9,	// (0x00043727) cell_toolbar2_fixed_pane_ParamLimits

0xd1e9,	// (0x00043727) cell_toolbar2_fixed_pane

0xd203,	// (0x00043741) cell_toolbar2_fixed_pane_g1

0x693c,	// (0x0003ce7a) toolbar2_fixed_button_pane

0x2e0f,	// (0x0003934d) toolbar2_fixed_button_pane_g1

0x2e1f,	// (0x0003935d) toolbar2_fixed_button_pane_g2

0x2e17,	// (0x00039355) toolbar2_fixed_button_pane_g3

0x2e2f,	// (0x0003936d) toolbar2_fixed_button_pane_g4

0x2e27,	// (0x00039365) toolbar2_fixed_button_pane_g5

0x2e37,	// (0x00039375) toolbar2_fixed_button_pane_g6

0x2e3f,	// (0x0003937d) toolbar2_fixed_button_pane_g7

0x2e4f,	// (0x0003938d) toolbar2_fixed_button_pane_g8

0x2e47,	// (0x00039385) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00045d7a) toolbar2_fixed_button_pane_g

0x6944,	// (0x0003ce82) cell_toolbar2_float_pane_ParamLimits

0x6944,	// (0x0003ce82) cell_toolbar2_float_pane

0x6955,	// (0x0003ce93) cell_toolbar2_float_pane_g1

0x693c,	// (0x0003ce7a) toolbar2_fixed_button_pane_cp

0xccbc,	// (0x000431fa) fep_vkb_accented_list_pane_ParamLimits

0xccbc,	// (0x000431fa) fep_vkb_accented_list_pane

0x11f3,	// (0x00037731) bg_popup_fep_shadow_pane_g9

0x25b0,	// (0x00038aee) bg_popup_fep_shadow_pane_cp3

0xbf55,	// (0x00042493) list_accented_list_pane

0x695e,	// (0x0003ce9c) list_single_accented_list_pane_ParamLimits

0x695e,	// (0x0003ce9c) list_single_accented_list_pane

0x25b0,	// (0x00038aee) list_highlight_pane_cp10

0x696f,	// (0x0003cead) list_single_accented_list_pane_t1

0xaa78,	// (0x00040fb6) popup_slider_window_ParamLimits

0xaa78,	// (0x00040fb6) popup_slider_window

0x65bd,	// (0x0003cafb) aid_indentation_list_msg

0xdb16,	// (0x00044054) bg_popup_window_pane_cp19

0x6aab,	// (0x0003cfe9) popup_slider_window_g1

0x6ac7,	// (0x0003d005) popup_slider_window_g2

0x6ae3,	// (0x0003d021) popup_slider_window_g3

0x0005,

0xfcd1,	// (0x0004620f) popup_slider_window_g

0x6b49,	// (0x0003d087) popup_slider_window_t1

0x6bbd,	// (0x0003d0fb) small_volume_slider_vertical_pane

0x545a,	// (0x0003b998) small_volume_slider_vertical_pane_g1

0x545a,	// (0x0003b998) small_volume_slider_vertical_pane_g2

0x6bd9,	// (0x0003d117) small_volume_slider_vertical_pane_g3

0x0002,

0xfce3,	// (0x00046221) small_volume_slider_vertical_pane_g

0x9482,	// (0x0003f9c0) area_side_right_pane_ParamLimits

0x9482,	// (0x0003f9c0) area_side_right_pane

0xb14b,	// (0x00041689) aid_size_side_button_ParamLimits

0xb14b,	// (0x00041689) aid_size_side_button

0xb164,	// (0x000416a2) grid_sctrl_middle_pane_ParamLimits

0xb164,	// (0x000416a2) grid_sctrl_middle_pane

0x1573,	// (0x00037ab1) sctrl_sk_bottom_pane

0x1584,	// (0x00037ac2) sctrl_sk_top_pane

0x1596,	// (0x00037ad4) aid_touch_sctrl_top

0x15a3,	// (0x00037ae1) bg_sctrl_sk_pane_ParamLimits

0x15a3,	// (0x00037ae1) bg_sctrl_sk_pane

0x15b1,	// (0x00037aef) sctrl_sk_top_pane_g1

0x15be,	// (0x00037afc) sctrl_sk_top_pane_t1

0x1596,	// (0x00037ad4) aid_touch_sctrl_bottom

0x15a3,	// (0x00037ae1) bg_sctrl_sk_pane_cp_ParamLimits

0x15a3,	// (0x00037ae1) bg_sctrl_sk_pane_cp

0x15d9,	// (0x00037b17) sctrl_sk_bottom_pane_g1

0x15be,	// (0x00037afc) sctrl_sk_bottom_pane_t1

0xb17e,	// (0x000416bc) cell_sctrl_middle_pane_ParamLimits

0xb17e,	// (0x000416bc) cell_sctrl_middle_pane

0xb191,	// (0x000416cf) aid_touch_sctrl_middle_ParamLimits

0xb191,	// (0x000416cf) aid_touch_sctrl_middle

0xb19e,	// (0x000416dc) bg_sctrl_middle_pane_ParamLimits

0xb19e,	// (0x000416dc) bg_sctrl_middle_pane

0x1c5c,	// (0x0003819a) cell_sctrl_middle_pane_g1_ParamLimits

0x1c5c,	// (0x0003819a) cell_sctrl_middle_pane_g1

0xb1ac,	// (0x000416ea) cell_sctrl_middle_pane_g2_ParamLimits

0xb1ac,	// (0x000416ea) cell_sctrl_middle_pane_g2

0x0001,

0xfcef,	// (0x0004622d) cell_sctrl_middle_pane_g_ParamLimits

0xfcef,	// (0x0004622d) cell_sctrl_middle_pane_g

0x2e0f,	// (0x0003934d) bg_sctrl_middle_pane_g1

0x2e17,	// (0x00039355) bg_sctrl_middle_pane_g2

0x2e1f,	// (0x0003935d) bg_sctrl_middle_pane_g3

0x2e27,	// (0x00039365) bg_sctrl_middle_pane_g4

0x2e2f,	// (0x0003936d) bg_sctrl_middle_pane_g5

0x2e37,	// (0x00039375) bg_sctrl_middle_pane_g6

0x2e3f,	// (0x0003937d) bg_sctrl_middle_pane_g7

0x2e47,	// (0x00039385) bg_sctrl_middle_pane_g8

0x0007,

0xfcf4,	// (0x00046232) bg_sctrl_middle_pane_g

0x2e4f,	// (0x0003938d) bg_sctrl_middle_pane_g8_copy1

0x2e0f,	// (0x0003934d) bg_sctrl_sk_pane_g1

0x2e1f,	// (0x0003935d) bg_sctrl_sk_pane_g2

0x2e17,	// (0x00039355) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00045d7a) bg_sctrl_sk_pane_g

0xbd6b,	// (0x000422a9) aid_size_touch_scroll_bar

0x2e2f,	// (0x0003936d) bg_sctrl_sk_pane_g4

0x2e27,	// (0x00039365) bg_sctrl_sk_pane_g5

0x2e37,	// (0x00039375) bg_sctrl_sk_pane_g6

0x2e3f,	// (0x0003937d) bg_sctrl_sk_pane_g7

0x2e4f,	// (0x0003938d) bg_sctrl_sk_pane_g8

0x2e47,	// (0x00039385) bg_sctrl_sk_pane_g9

0x043a,	// (0x00036978) popup_fep_china_hwr2_fs_candidate_window

0xa52a,	// (0x00040a68) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa52a,	// (0x00040a68) popup_fep_china_hwr2_fs_control_window

0x1213,	// (0x00037751) sctrl_sk_top_pane_g2

0x0001,

0xfcea,	// (0x00046228) sctrl_sk_top_pane_g

0xdbce,	// (0x0004410c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdbce,	// (0x0004410c) aid_fep_china_hwr2_fs_cell

0xdbe4,	// (0x00044122) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdbe4,	// (0x00044122) bg_popup_fep_shadow_pane_cp4

0xdbfb,	// (0x00044139) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdbfb,	// (0x00044139) bg_popup_fep_shadow_pane_cp5

0xdc0d,	// (0x0004414b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdc0d,	// (0x0004414b) popup_fep_china_hwr2_fs_control_bar_grid

0xdc21,	// (0x0004415f) popup_fep_china_hwr2_fs_control_funtion_grid

0x6c38,	// (0x0003d176) aid_fep_china_hwr2_fs_candi_cell

0xb780,	// (0x00041cbe) bg_popup_fep_shadow_pane_cp6

0x6c42,	// (0x0003d180) popup_fep_china_hwr2_fs_candidate_grid

0xdc29,	// (0x00044167) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdc29,	// (0x00044167) cell_fep_china_hwr2_fs_funtion_grid

0x545a,	// (0x0003b998) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6c64,	// (0x0003d1a2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6c64,	// (0x0003d1a2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6c72,	// (0x0003d1b0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6c72,	// (0x0003d1b0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd05,	// (0x00046243) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd05,	// (0x00046243) cell_fep_china_hwr2_fs_funtion_grid_g

0xdc41,	// (0x0004417f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdc41,	// (0x0004417f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdc56,	// (0x00044194) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdc56,	// (0x00044194) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0a,	// (0x00046248) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0a,	// (0x00046248) cell_fep_china_hwr2_fs_funtion_grid_t

0x6cb9,	// (0x0003d1f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6cc1,	// (0x0003d1ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6cc9,	// (0x0003d207) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0f,	// (0x0004624d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6cd1,	// (0x0003d20f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6cd1,	// (0x0003d20f) cell_fep_china_hwr2_fs_candidate_grid

0x6cf0,	// (0x0003d22e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6cf8,	// (0x0003d236) popup_fep_china_hwr2_fs_candidate_grid_g21

0x545a,	// (0x0003b998) cell_fep_china_hwr2_fs_candidate_grid_g1

0x545a,	// (0x0003b998) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00046061) cell_fep_china_hwr2_fs_candidate_grid_g

0x6d00,	// (0x0003d23e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x29f5,	// (0x00038f33) clock_nsta_pane_cp_24_ParamLimits

0x29f5,	// (0x00038f33) clock_nsta_pane_cp_24

0x2a75,	// (0x00038fb3) indicator_nsta_pane_cp_24_ParamLimits

0x2a75,	// (0x00038fb3) indicator_nsta_pane_cp_24

0x3af8,	// (0x0003a036) heading_pane_g1

0x0001,

0xf8a1,	// (0x00045ddf) heading_pane_g

0x4590,	// (0x0003aace) grid_sct_catagory_button_pane

0x45c2,	// (0x0003ab00) scroll_pane_cp5_ParamLimits

0x50ba,	// (0x0003b5f8) button_value_adjust_pane_cp5_ParamLimits

0x50ba,	// (0x0003b5f8) button_value_adjust_pane_cp5

0x519f,	// (0x0003b6dd) form2_midp_time_pane_ParamLimits

0x6d0e,	// (0x0003d24c) cell_sct_catagory_button_pane_ParamLimits

0x6d0e,	// (0x0003d24c) cell_sct_catagory_button_pane

0x541f,	// (0x0003b95d) bg_button_pane_cp01_ParamLimits

0x541f,	// (0x0003b95d) bg_button_pane_cp01

0x545a,	// (0x0003b998) cell_sct_catagory_button_pane_g1

0xaaf9,	// (0x00041037) popup_tb_extension_window

0xdc72,	// (0x000441b0) aid_size_cell_ext_ParamLimits

0xdc72,	// (0x000441b0) aid_size_cell_ext

0xbbad,	// (0x000420eb) bg_tb_trans_pane_cp1_ParamLimits

0xbbad,	// (0x000420eb) bg_tb_trans_pane_cp1

0xdc98,	// (0x000441d6) grid_tb_ext_pane_ParamLimits

0xdc98,	// (0x000441d6) grid_tb_ext_pane

0xdcd5,	// (0x00044213) cell_tb_ext_pane_ParamLimits

0xdcd5,	// (0x00044213) cell_tb_ext_pane

0xdcfd,	// (0x0004423b) cell_tb_ext_pane_g1_ParamLimits

0xdcfd,	// (0x0004423b) cell_tb_ext_pane_g1

0x6da2,	// (0x0003d2e0) cell_tb_ext_pane_t1

0xb923,	// (0x00041e61) list_highlight_pane_cp11_ParamLimits

0xb923,	// (0x00041e61) list_highlight_pane_cp11

0x952d,	// (0x0003fa6b) popup_uni_indicator_window_ParamLimits

0x952d,	// (0x0003fa6b) popup_uni_indicator_window

0xbe32,	// (0x00042370) bg_popup_sub_pane_cp14

0x6dbd,	// (0x0003d2fb) list_uniindi_pane

0x6dc9,	// (0x0003d307) uniindi_top_pane

0xb923,	// (0x00041e61) bg_uniindi_top_pane

0x6dea,	// (0x0003d328) uniindi_top_pane_g1

0x6e00,	// (0x0003d33e) uniindi_top_pane_g2

0x0003,

0xfd16,	// (0x00046254) uniindi_top_pane_g

0x6e2a,	// (0x0003d368) uniindi_top_pane_t1

0x6e56,	// (0x0003d394) list_single_uniindi_pane_ParamLimits

0x6e56,	// (0x0003d394) list_single_uniindi_pane

0x545a,	// (0x0003b998) bg_uniindi_top_pane_g1

0x6e69,	// (0x0003d3a7) list_single_uniindi_pane_g1

0x6e7c,	// (0x0003d3ba) list_single_uniindi_pane_t1

0xecf7,	// (0x00045235) control_bg_pane

0x6ea1,	// (0x0003d3df) bg_sctrl_sk_pane_cp1

0x6eaa,	// (0x0003d3e8) bg_sctrl_sk_pane_cp2

0x6eb3,	// (0x0003d3f1) control_bg_pane_g1

0x6ebc,	// (0x0003d3fa) control_bg_pane_g2

0x0001,

0xfd1f,	// (0x0004625d) control_bg_pane_g

0x4ef2,	// (0x0003b430) cell_indicator_nsta_pane_g1_ParamLimits

0xcb1d,	// (0x0004305b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x00045fc5) cell_indicator_nsta_pane_g_ParamLimits

0xd80f,	// (0x00043d4d) form2_midp_time_pane_t1_ParamLimits

0x0f98,	// (0x000374d6) main_idle_act4_pane_ParamLimits

0x0f98,	// (0x000374d6) main_idle_act4_pane

0xaaf9,	// (0x00041037) popup_tb_extension_window_ParamLimits

0xdcbd,	// (0x000441fb) tb_ext_find_pane_ParamLimits

0xdcbd,	// (0x000441fb) tb_ext_find_pane

0x6ec5,	// (0x0003d403) ai_gene_pane_1_cp1

0x26fa,	// (0x00038c38) ai_gene_pane_2_cp1

0x6ecd,	// (0x0003d40b) list_single_idle_plugin_calendar_pane

0x6ed6,	// (0x0003d414) list_single_idle_plugin_notification_pane

0x6edf,	// (0x0003d41d) list_single_idle_plugin_player_pane

0xdd1a,	// (0x00044258) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd1a,	// (0x00044258) list_single_idle_plugin_shortcut_pane

0xdd42,	// (0x00044280) main_idle_act4_pane_t1

0xdd5a,	// (0x00044298) main_idle_act4_pane_t2

0x0001,

0xfd24,	// (0x00046262) main_idle_act4_pane_t

0xdd72,	// (0x000442b0) middle_sk_idle_act4_pane_ParamLimits

0xdd72,	// (0x000442b0) middle_sk_idle_act4_pane

0xdd8e,	// (0x000442cc) popup_clock_digital_analogue_window_cp2

0xddb5,	// (0x000442f3) shortcut_wheel_idle_act4_pane_ParamLimits

0xddb5,	// (0x000442f3) shortcut_wheel_idle_act4_pane

0x545a,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g1

0x545a,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g2

0x545a,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g3

0x545a,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g4

0x545a,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g5

0x6f72,	// (0x0003d4b0) shortcut_wheel_idle_act4_pane_g6

0x6f7a,	// (0x0003d4b8) shortcut_wheel_idle_act4_pane_g7

0x6f82,	// (0x0003d4c0) shortcut_wheel_idle_act4_pane_g8

0x6f8a,	// (0x0003d4c8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd29,	// (0x00046267) shortcut_wheel_idle_act4_pane_g

0xd248,	// (0x00043786) middle_sk_idle_act4_pane_g1_ParamLimits

0xd248,	// (0x00043786) middle_sk_idle_act4_pane_g1

0xde32,	// (0x00044370) middle_sk_idle_act4_pane_g2_ParamLimits

0xde32,	// (0x00044370) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x0004628a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x0004628a) middle_sk_idle_act4_pane_g

0xde4a,	// (0x00044388) middle_sk_idle_act4_pane_t1_ParamLimits

0xde4a,	// (0x00044388) middle_sk_idle_act4_pane_t1

0xde79,	// (0x000443b7) grid_ai_shortcut_pane_ParamLimits

0xde79,	// (0x000443b7) grid_ai_shortcut_pane

0xde96,	// (0x000443d4) list_highlight_pane_cp16_ParamLimits

0xde96,	// (0x000443d4) list_highlight_pane_cp16

0xdea3,	// (0x000443e1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdea3,	// (0x000443e1) list_single_idle_plugin_shortcut_pane_g1

0xdeaf,	// (0x000443ed) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdeaf,	// (0x000443ed) list_single_idle_plugin_shortcut_pane_g2

0xdecd,	// (0x0004440b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdecd,	// (0x0004440b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd51,	// (0x0004628f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd51,	// (0x0004628f) list_single_idle_plugin_shortcut_pane_g

0xdee2,	// (0x00044420) cell_ai_shortcut_pane_ParamLimits

0xdee2,	// (0x00044420) cell_ai_shortcut_pane

0xdef8,	// (0x00044436) cell_ai_shortcut_pane_g1_ParamLimits

0xdef8,	// (0x00044436) cell_ai_shortcut_pane_g1

0x6ec5,	// (0x0003d403) ai_gene_pane_1_cp2

0x70bb,	// (0x0003d5f9) ai_gene_pane_2_cp2

0x70c3,	// (0x0003d601) list_highlight_pane_cp15

0x70cc,	// (0x0003d60a) list_single_idle_plugin_calendar_pane_g1

0x70c3,	// (0x0003d601) list_highlight_pane_cp17

0x70d4,	// (0x0003d612) list_single_idle_plugin_calendar_pane_g1_copy1

0x70dc,	// (0x0003d61a) list_single_idle_plugin_player_pane_g1

0x47f7,	// (0x0003ad35) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd58,	// (0x00046296) list_single_idle_plugin_player_pane_g

0x70e4,	// (0x0003d622) list_single_idle_plugin_player_pane_t1

0x70f2,	// (0x0003d630) list_single_idle_plugin_player_pane_t2

0x7100,	// (0x0003d63e) list_single_idle_plugin_player_pane_t3

0x710e,	// (0x0003d64c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5d,	// (0x0004629b) list_single_idle_plugin_player_pane_t

0x711c,	// (0x0003d65a) wait_bar_pane_cp15

0x7124,	// (0x0003d662) grid_ai_notification_pane

0x47f7,	// (0x0003ad35) list_single_idle_plugin_notification_pane_g1

0xdf1a,	// (0x00044458) cell_ai_notification_pane_ParamLimits

0xdf1a,	// (0x00044458) cell_ai_notification_pane

0x713a,	// (0x0003d678) cell_ai_notification_pane_g1

0x7142,	// (0x0003d680) cell_ai_notification_pane_t1

0xdf27,	// (0x00044465) tb_ext_find_button_pane

0xdf2f,	// (0x0004446d) tb_ext_find_pane_g1

0xdf37,	// (0x00044475) tb_ext_find_pane_t1

0xf28c,	// (0x000457ca) tb_ext_find_button_pane_g1

0x716e,	// (0x0003d6ac) tb_ext_find_button_pane_g2

0x0001,

0xfd66,	// (0x000462a4) tb_ext_find_button_pane_g

0xdd42,	// (0x00044280) main_idle_act4_pane_t1_ParamLimits

0xdd5a,	// (0x00044298) main_idle_act4_pane_t2_ParamLimits

0xfd24,	// (0x00046262) main_idle_act4_pane_t_ParamLimits

0xdd8e,	// (0x000442cc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdda5,	// (0x000442e3) sat_plugin_idle_act4_pane_ParamLimits

0xdda5,	// (0x000442e3) sat_plugin_idle_act4_pane

0xdf45,	// (0x00044483) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf45,	// (0x00044483) sat_plugin_idle_act4_pane_t1

0xdf5d,	// (0x0004449b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5d,	// (0x0004449b) sat_plugin_idle_act4_pane_t2

0xdf75,	// (0x000444b3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf75,	// (0x000444b3) sat_plugin_idle_act4_pane_t3

0xdf8d,	// (0x000444cb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf8d,	// (0x000444cb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6b,	// (0x000462a9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6b,	// (0x000462a9) sat_plugin_idle_act4_pane_t

0xedbc,	// (0x000452fa) popup_battery_window_ParamLimits

0xedbc,	// (0x000452fa) popup_battery_window

0xb923,	// (0x00041e61) bg_popup_sub_pane_cp25_ParamLimits

0xb923,	// (0x00041e61) bg_popup_sub_pane_cp25

0x71c3,	// (0x0003d701) popup_battery_window_g1_ParamLimits

0x71c3,	// (0x0003d701) popup_battery_window_g1

0x71cf,	// (0x0003d70d) popup_battery_window_t1_ParamLimits

0x71cf,	// (0x0003d70d) popup_battery_window_t1

0x71e1,	// (0x0003d71f) popup_battery_window_t2_ParamLimits

0x71e1,	// (0x0003d71f) popup_battery_window_t2

0x0001,

0xfd74,	// (0x000462b2) popup_battery_window_t_ParamLimits

0xfd74,	// (0x000462b2) popup_battery_window_t

0xa2bb,	// (0x000407f9) midp_canvas_pane_ParamLimits

0xa317,	// (0x00040855) midp_keypad_pane_ParamLimits

0xa317,	// (0x00040855) midp_keypad_pane

0x28d7,	// (0x00038e15) main_midp_pane_ParamLimits

0x4f6d,	// (0x0003b4ab) signal_pane_g2_cp_ParamLimits

0xdfa5,	// (0x000444e3) aid_size_cell_midp_keypad_ParamLimits

0xdfa5,	// (0x000444e3) aid_size_cell_midp_keypad

0xdfc3,	// (0x00044501) midp_keyp_game_grid_pane_ParamLimits

0xdfc3,	// (0x00044501) midp_keyp_game_grid_pane

0xdfea,	// (0x00044528) midp_keyp_rocker_pane_ParamLimits

0xdfea,	// (0x00044528) midp_keyp_rocker_pane

0xe039,	// (0x00044577) midp_keyp_sk_left_pane_ParamLimits

0xe039,	// (0x00044577) midp_keyp_sk_left_pane

0xe08f,	// (0x000445cd) midp_keyp_sk_right_pane_ParamLimits

0xe08f,	// (0x000445cd) midp_keyp_sk_right_pane

0xb780,	// (0x00041cbe) bg_button_pane_cp03

0xe0e5,	// (0x00044623) midp_keyp_sk_left_pane_g1

0xb780,	// (0x00041cbe) bg_button_pane_cp04

0xe0e5,	// (0x00044623) midp_keyp_sk_right_pane_g1

0x545a,	// (0x0003b998) midp_keyp_rocker_pane_g1

0xe0ed,	// (0x0004462b) keyp_game_cell_pane_ParamLimits

0xe0ed,	// (0x0004462b) keyp_game_cell_pane

0xb780,	// (0x00041cbe) bg_button_pane_cp02

0xe113,	// (0x00044651) keyp_game_cell_pane_g1

0x94c4,	// (0x0003fa02) popup_fep_vkb2_window_ParamLimits

0x94c4,	// (0x0003fa02) popup_fep_vkb2_window

0xb1b8,	// (0x000416f6) aid_size_cell_vkb2_ParamLimits

0xb1b8,	// (0x000416f6) aid_size_cell_vkb2

0xb1e4,	// (0x00041722) popup_fep_vkb2_window_g1_ParamLimits

0xb1e4,	// (0x00041722) popup_fep_vkb2_window_g1

0xb234,	// (0x00041772) vkb2_area_bottom_pane_ParamLimits

0xb234,	// (0x00041772) vkb2_area_bottom_pane

0xb290,	// (0x000417ce) vkb2_area_keypad_pane_ParamLimits

0xb290,	// (0x000417ce) vkb2_area_keypad_pane

0xb2de,	// (0x0004181c) vkb2_area_top_pane_ParamLimits

0xb2de,	// (0x0004181c) vkb2_area_top_pane

0xb36b,	// (0x000418a9) vkb2_top_entry_pane_ParamLimits

0xb36b,	// (0x000418a9) vkb2_top_entry_pane

0xb398,	// (0x000418d6) vkb2_top_grid_left_pane_ParamLimits

0xb398,	// (0x000418d6) vkb2_top_grid_left_pane

0xb3b9,	// (0x000418f7) vkb2_top_grid_right_pane_ParamLimits

0xb3b9,	// (0x000418f7) vkb2_top_grid_right_pane

0x1853,	// (0x00037d91) vkb2_cell_keypad_pane_ParamLimits

0x1853,	// (0x00037d91) vkb2_cell_keypad_pane

0xb401,	// (0x0004193f) vkb2_area_bottom_grid_pane_ParamLimits

0xb401,	// (0x0004193f) vkb2_area_bottom_grid_pane

0xb42b,	// (0x00041969) vkb2_area_bottom_pane_g1_ParamLimits

0xb42b,	// (0x00041969) vkb2_area_bottom_pane_g1

0xb451,	// (0x0004198f) vkb2_area_bottom_pane_g2_ParamLimits

0xb451,	// (0x0004198f) vkb2_area_bottom_pane_g2

0xb482,	// (0x000419c0) vkb2_area_bottom_pane_g3_ParamLimits

0xb482,	// (0x000419c0) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x000462b7) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x000462b7) vkb2_area_bottom_pane_g

0x19fd,	// (0x00037f3b) vkb2_top_cell_left_pane_ParamLimits

0x19fd,	// (0x00037f3b) vkb2_top_cell_left_pane

0xe11c,	// (0x0004465a) vkb2_top_entry_pane_g1_ParamLimits

0xe11c,	// (0x0004465a) vkb2_top_entry_pane_g1

0xe12a,	// (0x00044668) vkb2_top_entry_pane_t1_ParamLimits

0xe12a,	// (0x00044668) vkb2_top_entry_pane_t1

0x73ac,	// (0x0003d8ea) vkb2_top_entry_pane_t2_ParamLimits

0x73ac,	// (0x0003d8ea) vkb2_top_entry_pane_t2

0x73de,	// (0x0003d91c) vkb2_top_entry_pane_t3_ParamLimits

0x73de,	// (0x0003d91c) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x000462be) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x000462be) vkb2_top_entry_pane_t

0xb4ec,	// (0x00041a2a) vkb2_top_grid_right_pane_g1_ParamLimits

0xb4ec,	// (0x00041a2a) vkb2_top_grid_right_pane_g1

0x1a60,	// (0x00037f9e) vkb2_top_grid_right_pane_g2_ParamLimits

0x1a60,	// (0x00037f9e) vkb2_top_grid_right_pane_g2

0x1a78,	// (0x00037fb6) vkb2_top_grid_right_pane_g3_ParamLimits

0x1a78,	// (0x00037fb6) vkb2_top_grid_right_pane_g3

0xb502,	// (0x00041a40) vkb2_top_grid_right_pane_g4_ParamLimits

0xb502,	// (0x00041a40) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x000462c5) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x000462c5) vkb2_top_grid_right_pane_g

0x1aa6,	// (0x00037fe4) vkb2_top_cell_left_pane_g1

0x1abd,	// (0x00037ffb) vkb2_cell_keypad_pane_g1_ParamLimits

0x1abd,	// (0x00037ffb) vkb2_cell_keypad_pane_g1

0x7402,	// (0x0003d940) vkb2_cell_keypad_pane_t1_ParamLimits

0x7402,	// (0x0003d940) vkb2_cell_keypad_pane_t1

0x1acb,	// (0x00038009) vkb2_cell_bottom_grid_pane_ParamLimits

0x1acb,	// (0x00038009) vkb2_cell_bottom_grid_pane

0x1b04,	// (0x00038042) vkb2_cell_bottom_grid_pane_g1

0xddd6,	// (0x00044314) aid_call2_pane_cp02

0xddde,	// (0x0004431c) aid_call_pane_cp02

0xdde6,	// (0x00044324) clock_digital_number_pane_cp10

0xddee,	// (0x0004432c) clock_digital_number_pane_cp11

0xddf6,	// (0x00044334) clock_digital_number_pane_cp12

0xddfe,	// (0x0004433c) clock_digital_number_pane_cp13

0xde06,	// (0x00044344) clock_digital_separator_pane_cp10

0xf28c,	// (0x000457ca) popup_clock_digital_analogue_window_cp2_g1

0xf28c,	// (0x000457ca) popup_clock_digital_analogue_window_cp2_g2

0xde0e,	// (0x0004434c) popup_clock_digital_analogue_window_cp2_g3

0xf28c,	// (0x000457ca) popup_clock_digital_analogue_window_cp2_g4

0xde0e,	// (0x0004434c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3c,	// (0x0004627a) popup_clock_digital_analogue_window_cp2_g

0xde16,	// (0x00044354) popup_clock_digital_analogue_window_cp2_t1

0xde24,	// (0x00044362) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd47,	// (0x00046285) popup_clock_digital_analogue_window_cp2_t

0x545a,	// (0x0003b998) clock_digital_number_pane_cp10_g1

0x545a,	// (0x0003b998) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00046061) clock_digital_number_pane_cp10_g

0x545a,	// (0x0003b998) clock_digital_separator_pane_cp10_g1

0x545a,	// (0x0003b998) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00046061) clock_digital_separator_pane_cp10_g

0x6e0c,	// (0x0003d34a) uniindi_top_pane_g3

0x6e1d,	// (0x0003d35b) uniindi_top_pane_g4

0x18de,	// (0x00037e1c) vkb2_row_keypad_pane_ParamLimits

0x18de,	// (0x00037e1c) vkb2_row_keypad_pane

0x1b20,	// (0x0003805e) vkb2_cell_t_keypad_pane_ParamLimits

0x1b20,	// (0x0003805e) vkb2_cell_t_keypad_pane

0x1b30,	// (0x0003806e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1b30,	// (0x0003806e) vkb2_cell_t_keypad_pane_cp08

0x1b45,	// (0x00038083) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1b45,	// (0x00038083) vkb2_cell_t_keypad_pane_cp09

0x1b59,	// (0x00038097) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1b59,	// (0x00038097) vkb2_cell_t_keypad_pane_cp01

0x1b6a,	// (0x000380a8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1b6a,	// (0x000380a8) vkb2_cell_t_keypad_pane_cp02

0x1b7b,	// (0x000380b9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1b7b,	// (0x000380b9) vkb2_cell_t_keypad_pane_cp03

0x1b8c,	// (0x000380ca) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1b8c,	// (0x000380ca) vkb2_cell_t_keypad_pane_cp04

0x1b9d,	// (0x000380db) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1b9d,	// (0x000380db) vkb2_cell_t_keypad_pane_cp05

0x1bae,	// (0x000380ec) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1bae,	// (0x000380ec) vkb2_cell_t_keypad_pane_cp06

0x1bc1,	// (0x000380ff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1bc1,	// (0x000380ff) vkb2_cell_t_keypad_pane_cp07

0x1bd6,	// (0x00038114) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1bd6,	// (0x00038114) vkb2_cell_t_keypad_pane_cp10

0x1213,	// (0x00037751) vkb2_cell_t_keypad_pane_g1

0x7419,	// (0x0003d957) vkb2_cell_t_keypad_pane_t1

0xecf7,	// (0x00045235) popup_grid_graphic2_window

0xe163,	// (0x000446a1) aid_size_cell_graphic2_ParamLimits

0xe163,	// (0x000446a1) aid_size_cell_graphic2

0xe1a1,	// (0x000446df) bg_popup_window_pane_cp21_ParamLimits

0xe1a1,	// (0x000446df) bg_popup_window_pane_cp21

0xe1af,	// (0x000446ed) graphic2_pages_pane_ParamLimits

0xe1af,	// (0x000446ed) graphic2_pages_pane

0xe207,	// (0x00044745) grid_graphic2_control_pane_ParamLimits

0xe207,	// (0x00044745) grid_graphic2_control_pane

0xe24f,	// (0x0004478d) grid_graphic2_pane_ParamLimits

0xe24f,	// (0x0004478d) grid_graphic2_pane

0xe2da,	// (0x00044818) cell_graphic2_pane

0xecf7,	// (0x00045235) main_comp_mode_pane

0x6679,	// (0x0003cbb7) list_ai3_gene_pane_ParamLimits

0xdb16,	// (0x00044054) bg_popup_window_pane_cp19_ParamLimits

0x6a4b,	// (0x0003cf89) bg_touch_area_indi_pane_ParamLimits

0x6a4b,	// (0x0003cf89) bg_touch_area_indi_pane

0x6a61,	// (0x0003cf9f) bg_touch_area_indi_pane_cp01_ParamLimits

0x6a61,	// (0x0003cf9f) bg_touch_area_indi_pane_cp01

0x6a77,	// (0x0003cfb5) bg_touch_area_indi_pane_cp02_ParamLimits

0x6a77,	// (0x0003cfb5) bg_touch_area_indi_pane_cp02

0x6a91,	// (0x0003cfcf) bg_touch_area_indi_pane_cp03_ParamLimits

0x6a91,	// (0x0003cfcf) bg_touch_area_indi_pane_cp03

0x6aab,	// (0x0003cfe9) popup_slider_window_g1_ParamLimits

0x6ac7,	// (0x0003d005) popup_slider_window_g2_ParamLimits

0x6ae3,	// (0x0003d021) popup_slider_window_g3_ParamLimits

0xfcd1,	// (0x0004620f) popup_slider_window_g_ParamLimits

0x6b49,	// (0x0003d087) popup_slider_window_t1_ParamLimits

0x6bbd,	// (0x0003d0fb) small_volume_slider_vertical_pane_ParamLimits

0xe2da,	// (0x00044818) cell_graphic2_pane_ParamLimits

0xe33c,	// (0x0004487a) bg_button_pane_cp10_ParamLimits

0xe33c,	// (0x0004487a) bg_button_pane_cp10

0xe34f,	// (0x0004488d) bg_button_pane_cp11_ParamLimits

0xe34f,	// (0x0004488d) bg_button_pane_cp11

0xe362,	// (0x000448a0) graphic2_pages_pane_g1_ParamLimits

0xe362,	// (0x000448a0) graphic2_pages_pane_g1

0xe37d,	// (0x000448bb) graphic2_pages_pane_g2_ParamLimits

0xe37d,	// (0x000448bb) graphic2_pages_pane_g2

0x0001,

0xfd95,	// (0x000462d3) graphic2_pages_pane_g_ParamLimits

0xfd95,	// (0x000462d3) graphic2_pages_pane_g

0xe395,	// (0x000448d3) graphic2_pages_pane_t1_ParamLimits

0xe395,	// (0x000448d3) graphic2_pages_pane_t1

0xe3ad,	// (0x000448eb) cell_graphic2_control_pane_ParamLimits

0xe3ad,	// (0x000448eb) cell_graphic2_control_pane

0xe3e1,	// (0x0004491f) cell_graphic2_pane_g1_ParamLimits

0xe3e1,	// (0x0004491f) cell_graphic2_pane_g1

0xd256,	// (0x00043794) cell_graphic2_pane_g2_ParamLimits

0xd256,	// (0x00043794) cell_graphic2_pane_g2

0xd822,	// (0x00043d60) cell_graphic2_pane_g3_ParamLimits

0xd822,	// (0x00043d60) cell_graphic2_pane_g3

0xd263,	// (0x000437a1) cell_graphic2_pane_g4_ParamLimits

0xd263,	// (0x000437a1) cell_graphic2_pane_g4

0xe3ee,	// (0x0004492c) cell_graphic2_pane_g5_ParamLimits

0xe3ee,	// (0x0004492c) cell_graphic2_pane_g5

0x0004,

0xfd9a,	// (0x000462d8) cell_graphic2_pane_g_ParamLimits

0xfd9a,	// (0x000462d8) cell_graphic2_pane_g

0xe40a,	// (0x00044948) cell_graphic2_pane_t1_ParamLimits

0xe40a,	// (0x00044948) cell_graphic2_pane_t1

0x3aec,	// (0x0003a02a) grid_highlight_pane_cp11_ParamLimits

0x3aec,	// (0x0003a02a) grid_highlight_pane_cp11

0xb923,	// (0x00041e61) bg_button_pane_cp05

0xe453,	// (0x00044991) cell_graphic2_control_pane_g1

0x545a,	// (0x0003b998) bg_touch_area_indi_pane_g1

0x76fc,	// (0x0003dc3a) aid_cmod_rocker_key_size

0x7706,	// (0x0003dc44) aid_cmode_itu_key_size

0x7710,	// (0x0003dc4e) main_cmode_video_pane

0x771a,	// (0x0003dc58) main_comp_mode_itu_pane

0x7726,	// (0x0003dc64) main_comp_mode_rocker_pane

0x7732,	// (0x0003dc70) cell_cmode_rocker_pane_ParamLimits

0x7732,	// (0x0003dc70) cell_cmode_rocker_pane

0x7746,	// (0x0003dc84) cell_cmode_itu_pane_ParamLimits

0x7746,	// (0x0003dc84) cell_cmode_itu_pane

0xbe32,	// (0x00042370) bg_button_pane_cp06_ParamLimits

0xbe32,	// (0x00042370) bg_button_pane_cp06

0x56d5,	// (0x0003bc13) cell_cmode_rocker_pane_g1_ParamLimits

0x56d5,	// (0x0003bc13) cell_cmode_rocker_pane_g1

0x6c64,	// (0x0003d1a2) cell_cmode_rocker_pane_g2_ParamLimits

0x6c64,	// (0x0003d1a2) cell_cmode_rocker_pane_g2

0x0001,

0xfdaa,	// (0x000462e8) cell_cmode_rocker_pane_g_ParamLimits

0xfdaa,	// (0x000462e8) cell_cmode_rocker_pane_g

0xb780,	// (0x00041cbe) bg_button_pane_cp07

0x775d,	// (0x0003dc9b) cell_cmode_itu_pane_g1

0x7766,	// (0x0003dca4) cell_cmode_itu_pane_t1

0x7774,	// (0x0003dcb2) cell_cmode_itu_pane_t2

0x0001,

0xfdaf,	// (0x000462ed) cell_cmode_itu_pane_t

0x6e91,	// (0x0003d3cf) aid_touch_ctrl_left

0x6e99,	// (0x0003d3d7) aid_touch_ctrl_right

0xb780,	// (0x00041cbe) compa_mode_pane

0xe47b,	// (0x000449b9) aid_cmod_rocker_key_size_cp

0xe485,	// (0x000449c3) aid_cmode_itu_key_size_cp

0x7796,	// (0x0003dcd4) compa_mode_pane_g1

0x779e,	// (0x0003dcdc) compa_mode_pane_g2

0x77a6,	// (0x0003dce4) compa_mode_pane_g3

0x0002,

0xfdb4,	// (0x000462f2) compa_mode_pane_g

0xe48f,	// (0x000449cd) main_comp_mode_itu_pane_cp

0xe497,	// (0x000449d5) main_comp_mode_rocker_pane_cp

0xe49f,	// (0x000449dd) cell_cmode_itu_pane_cp_ParamLimits

0xe49f,	// (0x000449dd) cell_cmode_itu_pane_cp

0xe4b4,	// (0x000449f2) cell_cmode_rocker_pane_cp_ParamLimits

0xe4b4,	// (0x000449f2) cell_cmode_rocker_pane_cp

0xbe32,	// (0x00042370) bg_button_pane_cp06_cp_ParamLimits

0xbe32,	// (0x00042370) bg_button_pane_cp06_cp

0x56d5,	// (0x0003bc13) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x56d5,	// (0x0003bc13) cell_cmode_rocker_pane_g1_cp

0x545a,	// (0x0003b998) cell_cmode_rocker_pane_g2_cp

0xb780,	// (0x00041cbe) bg_button_pane_cp07_cp

0xe4c6,	// (0x00044a04) cell_cmode_itu_pane_g1_cp

0xe4cf,	// (0x00044a0d) cell_cmode_itu_pane_t1_cp

0xe4cf,	// (0x00044a0d) cell_cmode_itu_pane_t2_cp

0xc94e,	// (0x00042e8c) settings_code_pane_cp2

0xb7f0,	// (0x00041d2e) bg_popup_window_pane_cp3_ParamLimits

0xbb37,	// (0x00042075) heading_pane_cp3_ParamLimits

0xbb46,	// (0x00042084) listscroll_popup_graphic_pane_ParamLimits

0x0fa6,	// (0x000374e4) fep_hwr_aid_pane_ParamLimits

0x1596,	// (0x00037ad4) aid_touch_sctrl_top_ParamLimits

0x15b1,	// (0x00037aef) sctrl_sk_top_pane_g1_ParamLimits

0x1213,	// (0x00037751) sctrl_sk_top_pane_g2_ParamLimits

0xfcea,	// (0x00046228) sctrl_sk_top_pane_g_ParamLimits

0x15be,	// (0x00037afc) sctrl_sk_top_pane_t1_ParamLimits

0x1596,	// (0x00037ad4) aid_touch_sctrl_bottom_ParamLimits

0x15be,	// (0x00037afc) sctrl_sk_bottom_pane_t1_ParamLimits

0x6dd6,	// (0x0003d314) aid_area_touch_clock

0xb32a,	// (0x00041868) aid_vkb2_area_top_pane_cell_ParamLimits

0xb32a,	// (0x00041868) aid_vkb2_area_top_pane_cell

0xb3da,	// (0x00041918) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb3da,	// (0x00041918) aid_vkb2_area_bottom_pane_cell

0x7364,	// (0x0003d8a2) popup_char_count_window

0x77fc,	// (0x0003dd3a) popup_char_count_window_g1

0x7805,	// (0x0003dd43) popup_char_count_window_g2

0x780e,	// (0x0003dd4c) popup_char_count_window_g3

0x0002,

0xfdbb,	// (0x000462f9) popup_char_count_window_g

0x7817,	// (0x0003dd55) popup_char_count_window_t1

0x1667,	// (0x00037ba5) popup_fep_char_preview_window_ParamLimits

0x1667,	// (0x00037ba5) popup_fep_char_preview_window

0xb34a,	// (0x00041888) vkb2_top_candi_pane_ParamLimits

0xb34a,	// (0x00041888) vkb2_top_candi_pane

0xe4dd,	// (0x00044a1b) cell_vkb2_top_candi_pane_ParamLimits

0xe4dd,	// (0x00044a1b) cell_vkb2_top_candi_pane

0x1beb,	// (0x00038129) bg_popup_fep_char_preview_window_ParamLimits

0x1beb,	// (0x00038129) bg_popup_fep_char_preview_window

0x1bf9,	// (0x00038137) popup_fep_char_preview_window_t1_ParamLimits

0x1bf9,	// (0x00038137) popup_fep_char_preview_window_t1

0x7873,	// (0x0003ddb1) bg_popup_fep_char_preview_window_g1

0x787b,	// (0x0003ddb9) bg_popup_fep_char_preview_window_g2

0x7883,	// (0x0003ddc1) bg_popup_fep_char_preview_window_g3

0x788b,	// (0x0003ddc9) bg_popup_fep_char_preview_window_g4

0x7893,	// (0x0003ddd1) bg_popup_fep_char_preview_window_g5

0x789b,	// (0x0003ddd9) bg_popup_fep_char_preview_window_g6

0x78a3,	// (0x0003dde1) bg_popup_fep_char_preview_window_g7

0x78ab,	// (0x0003dde9) bg_popup_fep_char_preview_window_g8

0x78b3,	// (0x0003ddf1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc2,	// (0x00046300) bg_popup_fep_char_preview_window_g

0x1213,	// (0x00037751) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1213,	// (0x00037751) cell_vkb2_top_candi_pane_g1

0x1221,	// (0x0003775f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1221,	// (0x0003775f) cell_vkb2_top_candi_pane_g2

0x731f,	// (0x0003d85d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x731f,	// (0x0003d85d) cell_vkb2_top_candi_pane_g3

0x1c3b,	// (0x00038179) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1c3b,	// (0x00038179) cell_vkb2_top_candi_pane_g4

0x5bf4,	// (0x0003c132) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5bf4,	// (0x0003c132) cell_vkb2_top_candi_pane_g5

0x1c5c,	// (0x0003819a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1c5c,	// (0x0003819a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x00046315) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x00046315) cell_vkb2_top_candi_pane_g

0x1c6a,	// (0x000381a8) cell_vkb2_top_candi_pane_t1

0x0d1e,	// (0x0003725c) aid_size_touch_slider_mark_ParamLimits

0x0d1e,	// (0x0003725c) aid_size_touch_slider_mark

0xe1eb,	// (0x00044729) grid_graphic2_catg_pane_ParamLimits

0xe1eb,	// (0x00044729) grid_graphic2_catg_pane

0xe2a9,	// (0x000447e7) popup_grid_graphic2_window_t1_ParamLimits

0xe2a9,	// (0x000447e7) popup_grid_graphic2_window_t1

0xe2bf,	// (0x000447fd) popup_grid_graphic2_window_t2_ParamLimits

0xe2bf,	// (0x000447fd) popup_grid_graphic2_window_t2

0x0001,

0xfd90,	// (0x000462ce) popup_grid_graphic2_window_t_ParamLimits

0xfd90,	// (0x000462ce) popup_grid_graphic2_window_t

0xb923,	// (0x00041e61) bg_button_pane_cp05_ParamLimits

0xe453,	// (0x00044991) cell_graphic2_control_pane_g1_ParamLimits

0xe541,	// (0x00044a7f) cell_graphic2_catg_pane_ParamLimits

0xe541,	// (0x00044a7f) cell_graphic2_catg_pane

0xb780,	// (0x00041cbe) bg_button_pane_cp12

0xe553,	// (0x00044a91) cell_graphic2_catg_pane_g1

0x6da2,	// (0x0003d2e0) cell_tb_ext_pane_t1_ParamLimits

0x1a1d,	// (0x00037f5b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1a1d,	// (0x00037f5b) vkb2_top_cell_right_narrow_pane

0x1a35,	// (0x00037f73) vkb2_top_cell_right_wide_pane_ParamLimits

0x1a35,	// (0x00037f73) vkb2_top_cell_right_wide_pane

0x0f98,	// (0x000374d6) bg_vkb2_func_pane_ParamLimits

0x0f98,	// (0x000374d6) bg_vkb2_func_pane

0x1aa6,	// (0x00037fe4) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f98,	// (0x000374d6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f98,	// (0x000374d6) bg_vkb2_fuc_pane_cp03

0x1b04,	// (0x00038042) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2e17,	// (0x00039355) bg_vkb2_func_pane_g1

0x2e1f,	// (0x0003935d) bg_vkb2_func_pane_g2

0x2e2f,	// (0x0003936d) bg_vkb2_func_pane_g3

0x2e27,	// (0x00039365) bg_vkb2_func_pane_g4

0x2e37,	// (0x00039375) bg_vkb2_func_pane_g5

0x2e3f,	// (0x0003937d) bg_vkb2_func_pane_g6

0x2e47,	// (0x00039385) bg_vkb2_func_pane_g7

0x2e4f,	// (0x0003938d) bg_vkb2_func_pane_g8

0x2e0f,	// (0x0003934d) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x00046322) bg_vkb2_func_pane_g

0x0f98,	// (0x000374d6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f98,	// (0x000374d6) bg_vkb2_fuc_pane_cp01

0x1aa6,	// (0x00037fe4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1aa6,	// (0x00037fe4) vkb2_top_cell_right_wide_pane_g1

0x0f98,	// (0x000374d6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f98,	// (0x000374d6) bg_vkb2_fuc_pane_cp02

0x1c88,	// (0x000381c6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1c88,	// (0x000381c6) vkb2_top_cell_right_narrow_pane_g1

0xda58,	// (0x00043f96) aid_touch_area_decrease_ParamLimits

0xda58,	// (0x00043f96) aid_touch_area_decrease

0xda92,	// (0x00043fd0) aid_touch_area_increase_ParamLimits

0xda92,	// (0x00043fd0) aid_touch_area_increase

0xdaba,	// (0x00043ff8) aid_touch_area_mute_ParamLimits

0xdaba,	// (0x00043ff8) aid_touch_area_mute

0xdae2,	// (0x00044020) aid_touch_area_slider_ParamLimits

0xdae2,	// (0x00044020) aid_touch_area_slider

0xdb22,	// (0x00044060) popup_slider_window_g4_ParamLimits

0xdb22,	// (0x00044060) popup_slider_window_g4

0xdb4a,	// (0x00044088) popup_slider_window_g5_ParamLimits

0xdb4a,	// (0x00044088) popup_slider_window_g5

0xdb7e,	// (0x000440bc) popup_slider_window_g6_ParamLimits

0xdb7e,	// (0x000440bc) popup_slider_window_g6

0x6b77,	// (0x0003d0b5) popup_slider_window_t2_ParamLimits

0x6b77,	// (0x0003d0b5) popup_slider_window_t2

0x0001,

0xfcde,	// (0x0004621c) popup_slider_window_t_ParamLimits

0xfcde,	// (0x0004621c) popup_slider_window_t

0xdb9a,	// (0x000440d8) slider_pane_ParamLimits

0xdb9a,	// (0x000440d8) slider_pane

0x78d6,	// (0x0003de14) slider_pane_g1_ParamLimits

0x78d6,	// (0x0003de14) slider_pane_g1

0x78ea,	// (0x0003de28) slider_pane_g2_ParamLimits

0x78ea,	// (0x0003de28) slider_pane_g2

0x7900,	// (0x0003de3e) slider_pane_g3_ParamLimits

0x7900,	// (0x0003de3e) slider_pane_g3

0x0003,

0xfdf7,	// (0x00046335) slider_pane_g_ParamLimits

0xfdf7,	// (0x00046335) slider_pane_g

0xab45,	// (0x00041083) popup_tb_float_extension_window_ParamLimits

0xab45,	// (0x00041083) popup_tb_float_extension_window

0x792c,	// (0x0003de6a) aid_size_cell_tb_float_ext

0xb780,	// (0x00041cbe) bg_popup_sub_window_cp28

0x7938,	// (0x0003de76) grid_tb_float_ext_pane

0x7944,	// (0x0003de82) cell_tb_float_ext_pane_ParamLimits

0x7944,	// (0x0003de82) cell_tb_float_ext_pane

0x7960,	// (0x0003de9e) cell_tb_float_ext_pane_g1

0x7969,	// (0x0003dea7) grid_highlight_pane_cp12

0xaed5,	// (0x00041413) cell_last_hwr_side_pane_ParamLimits

0xaed5,	// (0x00041413) cell_last_hwr_side_pane

0x545a,	// (0x0003b998) cell_last_hwr_side_pane_g1

0x7972,	// (0x0003deb0) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0004633e) cell_last_hwr_side_pane_g

0xb4b7,	// (0x000419f5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb4b7,	// (0x000419f5) vkb2_area_bottom_space_btn_pane

0x1213,	// (0x00037751) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7419,	// (0x0003d957) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1c6a,	// (0x000381a8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1ca4,	// (0x000381e2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1ca4,	// (0x000381e2) vkb2_area_bottom_space_btn_pane_g1

0x1cde,	// (0x0003821c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1cde,	// (0x0003821c) vkb2_area_bottom_space_btn_pane_g2

0x1d14,	// (0x00038252) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1d14,	// (0x00038252) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x00046343) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x00046343) vkb2_area_bottom_space_btn_pane_g

0x105d,	// (0x0003759b) cel_fep_hwr_func_pane_ParamLimits

0x105d,	// (0x0003759b) cel_fep_hwr_func_pane

0xaeaa,	// (0x000413e8) cell_hwr_side_button_pane_ParamLimits

0xaeaa,	// (0x000413e8) cell_hwr_side_button_pane

0x6dd6,	// (0x0003d314) aid_area_touch_clock_ParamLimits

0xb923,	// (0x00041e61) bg_uniindi_top_pane_ParamLimits

0x6dea,	// (0x0003d328) uniindi_top_pane_g1_ParamLimits

0x6e00,	// (0x0003d33e) uniindi_top_pane_g2_ParamLimits

0x6e0c,	// (0x0003d34a) uniindi_top_pane_g3_ParamLimits

0x6e1d,	// (0x0003d35b) uniindi_top_pane_g4_ParamLimits

0xfd16,	// (0x00046254) uniindi_top_pane_g_ParamLimits

0x6e2a,	// (0x0003d368) uniindi_top_pane_t1_ParamLimits

0xb923,	// (0x00041e61) bg_vkb2_func_pane_cp01_ParamLimits

0xb923,	// (0x00041e61) bg_vkb2_func_pane_cp01

0x797b,	// (0x0003deb9) cel_fep_hwr_func_pane_g1_ParamLimits

0x797b,	// (0x0003deb9) cel_fep_hwr_func_pane_g1

0xb923,	// (0x00041e61) bg_vkb2_func_pane_cp02_ParamLimits

0xb923,	// (0x00041e61) bg_vkb2_func_pane_cp02

0x797b,	// (0x0003deb9) cell_hwr_side_button_pane_g1_ParamLimits

0x797b,	// (0x0003deb9) cell_hwr_side_button_pane_g1

0x2c92,	// (0x000391d0) status_pane_g4_ParamLimits

0x2c92,	// (0x000391d0) status_pane_g4

0x2cac,	// (0x000391ea) status_pane_t1

0x520d,	// (0x0003b74b) form2_midp_gauge_slider_cont_pane

0x5215,	// (0x0003b753) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcc14,	// (0x00043152) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcc26,	// (0x00043164) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x00046014) form2_midp_gauge_slider_pane_t_ParamLimits

0x524b,	// (0x0003b789) form2_midp_slider_pane_ParamLimits

0x162f,	// (0x00037b6d) aid_size_cell_func_vkb2_ParamLimits

0x162f,	// (0x00037b6d) aid_size_cell_func_vkb2

0x7918,	// (0x0003de56) slider_pane_g4_ParamLimits

0x7918,	// (0x0003de56) slider_pane_g4

0xb520,	// (0x00041a5e) form2_midp_gauge_slider_pane_t2_cp01

0xb52e,	// (0x00041a6c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb52e,	// (0x00041a6c) form2_midp_gauge_slider_pane_t3_cp01

0x1d89,	// (0x000382c7) form2_midp_slider_pane_cp01

0xb780,	// (0x00041cbe) navi_smil_pane

0x79b4,	// (0x0003def2) navi_smil_pane_g1

0x79bc,	// (0x0003defa) navi_smil_pane_t1

0x7989,	// (0x0003dec7) form2_midp_slider_pane_g1

0x7992,	// (0x0003ded0) form2_midp_slider_pane_g2

0x799a,	// (0x0003ded8) form2_midp_slider_pane_g3

0x7989,	// (0x0003dec7) form2_midp_slider_pane_g4

0xe55c,	// (0x00044a9a) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0004634c) form2_midp_slider_pane_g

0x1d4e,	// (0x0003828c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1d4e,	// (0x0003828c) vkb2_area_bottom_space_btn_pane_g4

0xc276,	// (0x000427b4) lc0_navi_pane_ParamLimits

0xc276,	// (0x000427b4) lc0_navi_pane

0xc2e6,	// (0x00042824) lc0_stat_indi_pane_ParamLimits

0xc2e6,	// (0x00042824) lc0_stat_indi_pane

0xc2fb,	// (0x00042839) ls0_title_pane_ParamLimits

0xc2fb,	// (0x00042839) ls0_title_pane

0xbe32,	// (0x00042370) bg_popup_sub_pane_cp14_ParamLimits

0x6dbd,	// (0x0003d2fb) list_uniindi_pane_ParamLimits

0x6dc9,	// (0x0003d307) uniindi_top_pane_ParamLimits

0x6e69,	// (0x0003d3a7) list_single_uniindi_pane_g1_ParamLimits

0x6e7c,	// (0x0003d3ba) list_single_uniindi_pane_t1_ParamLimits

0xb54b,	// (0x00041a89) lc0_stat_clock_pane_ParamLimits

0xb54b,	// (0x00041a89) lc0_stat_clock_pane

0xe565,	// (0x00044aa3) lc0_stat_indi_pane_g1_ParamLimits

0xe565,	// (0x00044aa3) lc0_stat_indi_pane_g1

0xe572,	// (0x00044ab0) lc0_stat_indi_pane_g2_ParamLimits

0xe572,	// (0x00044ab0) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x00046357) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x00046357) lc0_stat_indi_pane_g

0xb558,	// (0x00041a96) lc0_uni_indicator_pane_ParamLimits

0xb558,	// (0x00041a96) lc0_uni_indicator_pane

0xe57f,	// (0x00044abd) ls0_title_pane_g1_ParamLimits

0xe57f,	// (0x00044abd) ls0_title_pane_g1

0xe593,	// (0x00044ad1) ls0_title_pane_t1_ParamLimits

0xe593,	// (0x00044ad1) ls0_title_pane_t1

0xb565,	// (0x00041aa3) lc0_uni_indicator_pane_g1_ParamLimits

0xb565,	// (0x00041aa3) lc0_uni_indicator_pane_g1

0x7a2e,	// (0x0003df6c) lc0_stat_clock_pane_t1

0xecf7,	// (0x00045235) main_ai5_pane

0x7a3c,	// (0x0003df7a) ai5_sk_pane_ParamLimits

0x7a3c,	// (0x0003df7a) ai5_sk_pane

0xe5c1,	// (0x00044aff) cell_ai5_widget_pane_ParamLimits

0xe5c1,	// (0x00044aff) cell_ai5_widget_pane

0xe640,	// (0x00044b7e) aid_size_cell_widget_grid

0x7af6,	// (0x0003e034) bg_ai5_widget_pane_ParamLimits

0x7af6,	// (0x0003e034) bg_ai5_widget_pane

0xe674,	// (0x00044bb2) cell_ai5_widget_pane_g2

0xe688,	// (0x00044bc6) cell_ai5_widget_pane_g3

0xe6a2,	// (0x00044be0) cell_ai5_widget_pane_g4

0xe6b2,	// (0x00044bf0) cell_ai5_widget_pane_g5

0xe6c2,	// (0x00044c00) cell_ai5_widget_pane_g6

0xe6ce,	// (0x00044c0c) cell_ai5_widget_pane_g7

0xe73a,	// (0x00044c78) cell_ai5_widget_pane_t1_ParamLimits

0xe73a,	// (0x00044c78) cell_ai5_widget_pane_t1

0xe757,	// (0x00044c95) cell_ai5_widget_pane_t2_ParamLimits

0xe757,	// (0x00044c95) cell_ai5_widget_pane_t2

0xe76f,	// (0x00044cad) cell_ai5_widget_pane_t3_ParamLimits

0xe76f,	// (0x00044cad) cell_ai5_widget_pane_t3

0xe787,	// (0x00044cc5) cell_ai5_widget_pane_t4_ParamLimits

0xe787,	// (0x00044cc5) cell_ai5_widget_pane_t4

0xe7ad,	// (0x00044ceb) cell_ai5_widget_pane_t5_ParamLimits

0xe7ad,	// (0x00044ceb) cell_ai5_widget_pane_t5

0x7ccb,	// (0x0003e209) cell_ai5_widget_pane_t6_ParamLimits

0x7ccb,	// (0x0003e209) cell_ai5_widget_pane_t6

0x7cdd,	// (0x0003e21b) cell_ai5_widget_pane_t7_ParamLimits

0x7cdd,	// (0x0003e21b) cell_ai5_widget_pane_t7

0xe7cd,	// (0x00044d0b) cell_ai5_widget_pane_t8_ParamLimits

0xe7cd,	// (0x00044d0b) cell_ai5_widget_pane_t8

0x000b,

0xfe39,	// (0x00046377) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x00046377) cell_ai5_widget_pane_t

0xe851,	// (0x00044d8f) grid_ai5_widget_pane

0xbe32,	// (0x00042370) highlight_cell_ai5_widget_pane_ParamLimits

0xbe32,	// (0x00042370) highlight_cell_ai5_widget_pane

0xe85f,	// (0x00044d9d) ai5_sk_left_pane

0xe869,	// (0x00044da7) ai5_sk_middle_pane

0xe873,	// (0x00044db1) ai5_sk_right_pane

0x7dac,	// (0x0003e2ea) bg_ai5_widget_pane_g1_ParamLimits

0x7dac,	// (0x0003e2ea) bg_ai5_widget_pane_g1

0x7db8,	// (0x0003e2f6) bg_ai5_widget_pane_g2_ParamLimits

0x7db8,	// (0x0003e2f6) bg_ai5_widget_pane_g2

0x7dc4,	// (0x0003e302) bg_ai5_widget_pane_g3_ParamLimits

0x7dc4,	// (0x0003e302) bg_ai5_widget_pane_g3

0x7dd0,	// (0x0003e30e) bg_ai5_widget_pane_g4_ParamLimits

0x7dd0,	// (0x0003e30e) bg_ai5_widget_pane_g4

0x7ddc,	// (0x0003e31a) bg_ai5_widget_pane_g5_ParamLimits

0x7ddc,	// (0x0003e31a) bg_ai5_widget_pane_g5

0x7de8,	// (0x0003e326) bg_ai5_widget_pane_g6_ParamLimits

0x7de8,	// (0x0003e326) bg_ai5_widget_pane_g6

0x7df4,	// (0x0003e332) bg_ai5_widget_pane_g7_ParamLimits

0x7df4,	// (0x0003e332) bg_ai5_widget_pane_g7

0x7e00,	// (0x0003e33e) bg_ai5_widget_pane_g8_ParamLimits

0x7e00,	// (0x0003e33e) bg_ai5_widget_pane_g8

0x7e0c,	// (0x0003e34a) bg_ai5_widget_pane_g9_ParamLimits

0x7e0c,	// (0x0003e34a) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x00046390) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x00046390) bg_ai5_widget_pane_g

0xe8a7,	// (0x00044de5) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8a7,	// (0x00044de5) cell_shortcut_ai5_widget_pane

0x25b0,	// (0x00038aee) bg_cell_shortcut_ai5_widget_pane

0x7e57,	// (0x0003e395) cell_grid_ai5_widget_pane_g1

0x25b0,	// (0x00038aee) highlight_cell_shortcut_ai5_widget_pane

0x2e17,	// (0x00039355) ai5_sk_left_pane_g1

0x7e60,	// (0x0003e39e) ai5_sk_left_pane_g2

0x7e68,	// (0x0003e3a6) ai5_sk_left_pane_g3

0x7e70,	// (0x0003e3ae) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x000463a3) ai5_sk_left_pane_g

0x7e78,	// (0x0003e3b6) ai5_sk_left_pane_t1

0x2e1f,	// (0x0003935d) ai5_sk_right_pane_g1

0x7e86,	// (0x0003e3c4) ai5_sk_right_pane_g2

0x7e8e,	// (0x0003e3cc) ai5_sk_right_pane_g3

0x7e96,	// (0x0003e3d4) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x000463ac) ai5_sk_right_pane_g

0x7e9e,	// (0x0003e3dc) ai5_sk_right_pane_t1

0x2e1f,	// (0x0003935d) ai5_sk_middle_pane_g1

0x2e17,	// (0x00039355) ai5_sk_middle_pane_g2

0x2e37,	// (0x00039375) ai5_sk_middle_pane_g3

0x7e8e,	// (0x0003e3cc) ai5_sk_middle_pane_g4

0x7e68,	// (0x0003e3a6) ai5_sk_middle_pane_g5

0x7eac,	// (0x0003e3ea) ai5_sk_middle_pane_g6

0xe8ba,	// (0x00044df8) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x000463b5) ai5_sk_middle_pane_g

0xc160,	// (0x0004269e) aid_touch_area_size_lc0_ParamLimits

0xc160,	// (0x0004269e) aid_touch_area_size_lc0

0x1242,	// (0x00037780) cell_hwr_candidate_pane_t1_ParamLimits

0x2955,	// (0x00038e93) aid_touch_navi_pane

0xc406,	// (0x00042944) status_dt_navi_pane_ParamLimits

0xc406,	// (0x00042944) status_dt_navi_pane

0xc41e,	// (0x0004295c) status_dt_sta_pane_ParamLimits

0xc41e,	// (0x0004295c) status_dt_sta_pane

0xe8c2,	// (0x00044e00) dt_sta_controll_pane

0xe8cf,	// (0x00044e0d) dt_sta_indi_pane

0xe8dc,	// (0x00044e1a) dt_sta_title_pane

0xb923,	// (0x00041e61) bg_dt_sta_indi_pane_ParamLimits

0xb923,	// (0x00041e61) bg_dt_sta_indi_pane

0xe8ee,	// (0x00044e2c) dt_sta_battery_pane

0xe8f6,	// (0x00044e34) dt_sta_indi_pane_g1

0xe8ff,	// (0x00044e3d) dt_sta_indi_pane_g2

0xe908,	// (0x00044e46) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x000463c4) dt_sta_indi_pane_g

0xe911,	// (0x00044e4f) dt_sta_signal_pane

0xbe32,	// (0x00042370) bg_dt_sta_title_pane_ParamLimits

0xbe32,	// (0x00042370) bg_dt_sta_title_pane

0xe91a,	// (0x00044e58) dt_sta_title_pane_g1

0xe922,	// (0x00044e60) dt_sta_title_pane_t1_ParamLimits

0xe922,	// (0x00044e60) dt_sta_title_pane_t1

0xb780,	// (0x00041cbe) bg_dt_sta_control_pane

0xe937,	// (0x00044e75) dt_sta_controll_pane_g1

0xe940,	// (0x00044e7e) bg_dt_sta_title_pane_g1

0xe949,	// (0x00044e87) bg_dt_sta_title_pane_g2

0xe952,	// (0x00044e90) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x000463cb) bg_dt_sta_title_pane_g

0x545a,	// (0x0003b998) bg_dt_sta_indi_pane_g1

0x7f5a,	// (0x0003e498) dt_sta_signal_pane_g1

0x7f62,	// (0x0003e4a0) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x000463d2) dt_sta_signal_pane_g

0x7f6a,	// (0x0003e4a8) dt_sta_battery_pane_g1

0x7f73,	// (0x0003e4b1) dt_sta_battery_pane_t1

0x545a,	// (0x0003b998) bg_dt_sta_control_pane_g1

0xf3e7,	// (0x00045925) fep_china_uni_eep_pane

0xf3ef,	// (0x0004592d) fep_china_uni_entry_pane_ParamLimits

0xf3ff,	// (0x0004593d) popup_fep_china_uni_window_g1_ParamLimits

0xf40f,	// (0x0004594d) popup_fep_china_uni_window_g2_ParamLimits

0xf40f,	// (0x0004594d) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x00045c36) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x00045c36) popup_fep_china_uni_window_g

0x7f82,	// (0x0003e4c0) fep_china_uni_eep_pane_g1

0x7f8a,	// (0x0003e4c8) fep_china_uni_eep_pane_t1

0x79ab,	// (0x0003dee9) aid_touch_area_size_smil_player

0x2aa9,	// (0x00038fe7) lc0_clock_pane

0x2ca0,	// (0x000391de) status_pane_g5_ParamLimits

0x2ca0,	// (0x000391de) status_pane_g5

0xa66b,	// (0x00040ba9) popup_keymap_window

0x2c66,	// (0x000391a4) status_icon_pane

0xe688,	// (0x00044bc6) cell_ai5_widget_pane_g3_ParamLimits

0xe6a2,	// (0x00044be0) cell_ai5_widget_pane_g4_ParamLimits

0xe6b2,	// (0x00044bf0) cell_ai5_widget_pane_g5_ParamLimits

0xe6da,	// (0x00044c18) cell_ai5_widget_pane_g8_ParamLimits

0xe6da,	// (0x00044c18) cell_ai5_widget_pane_g8

0xe6ee,	// (0x00044c2c) cell_ai5_widget_pane_g9_ParamLimits

0xe6ee,	// (0x00044c2c) cell_ai5_widget_pane_g9

0xe702,	// (0x00044c40) cell_ai5_widget_pane_g10_ParamLimits

0xe702,	// (0x00044c40) cell_ai5_widget_pane_g10

0x7f99,	// (0x0003e4d7) status_icon_pane_g1

0xb780,	// (0x00041cbe) bg_popup_sub_pane_cp13

0x7fa1,	// (0x0003e4df) popup_keymap_window_t1

0x2888,	// (0x00038dc6) control_pane_g6_ParamLimits

0x2888,	// (0x00038dc6) control_pane_g6

0x2895,	// (0x00038dd3) control_pane_g7_ParamLimits

0x2895,	// (0x00038dd3) control_pane_g7

0x28a2,	// (0x00038de0) control_pane_g8_ParamLimits

0x28a2,	// (0x00038de0) control_pane_g8

0xe8c2,	// (0x00044e00) dt_sta_controll_pane_ParamLimits

0xe8cf,	// (0x00044e0d) dt_sta_indi_pane_ParamLimits

0xe8dc,	// (0x00044e1a) dt_sta_title_pane_ParamLimits

0xbd74,	// (0x000422b2) aid_size_touch_scroll_bar_cale

0xedd4,	// (0x00045312) popup_discreet_window_ParamLimits

0xedd4,	// (0x00045312) popup_discreet_window

0x950e,	// (0x0003fa4c) popup_sk_window

0x3475,	// (0x000399b3) bg_popup_sub_pane_cp28_ParamLimits

0x3475,	// (0x000399b3) bg_popup_sub_pane_cp28

0x7faf,	// (0x0003e4ed) popup_discreet_window_g1_ParamLimits

0x7faf,	// (0x0003e4ed) popup_discreet_window_g1

0x7fcf,	// (0x0003e50d) popup_discreet_window_t1_ParamLimits

0x7fcf,	// (0x0003e50d) popup_discreet_window_t1

0x7fed,	// (0x0003e52b) popup_discreet_window_t2_ParamLimits

0x7fed,	// (0x0003e52b) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x000463d7) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x000463d7) popup_discreet_window_t

0x1dbf,	// (0x000382fd) popup_sk_window_g1

0x1dc9,	// (0x00038307) popup_sk_window_g2

0x0001,

0xfea0,	// (0x000463de) popup_sk_window_g

0x1dd1,	// (0x0003830f) popup_sk_window_t1

0x1ddf,	// (0x0003831d) popup_sk_window_t1_copy1

0xe674,	// (0x00044bb2) cell_ai5_widget_pane_g2_ParamLimits

0xe7df,	// (0x00044d1d) cell_ai5_widget_pane_t9_ParamLimits

0xe7df,	// (0x00044d1d) cell_ai5_widget_pane_t9

0xb780,	// (0x00041cbe) main_fep_fshwr2_pane

0xb584,	// (0x00041ac2) aid_fshwr2_btn_pane

0xb598,	// (0x00041ad6) aid_fshwr2_syb_pane

0xb5ac,	// (0x00041aea) aid_fshwr2_txt_pane

0xb5bc,	// (0x00041afa) fshwr2_func_candi_pane

0xb5de,	// (0x00041b1c) fshwr2_hwr_syb_pane

0xb602,	// (0x00041b40) fshwr2_icf_pane

0xecf7,	// (0x00045235) fshwr2_icf_bg_pane

0x1e8b,	// (0x000383c9) fshwr2_icf_pane_t1_ParamLimits

0x1e8b,	// (0x000383c9) fshwr2_icf_pane_t1

0xf28c,	// (0x000457ca) fshwr2_func_candi_pane_g1

0xe95b,	// (0x00044e99) fshwr2_func_candi_row_pane_ParamLimits

0xe95b,	// (0x00044e99) fshwr2_func_candi_row_pane

0xb632,	// (0x00041b70) cell_fshwr2_syb_pane_ParamLimits

0xb632,	// (0x00041b70) cell_fshwr2_syb_pane

0x1ec4,	// (0x00038402) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1ec4,	// (0x00038402) fshwr2_hwr_syb_pane_g1

0xecf7,	// (0x00045235) bg_popup_call_pane_cp01

0xb65a,	// (0x00041b98) fshwr2_func_candi_cell_pane_ParamLimits

0xb65a,	// (0x00041b98) fshwr2_func_candi_cell_pane

0x3255,	// (0x00039793) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3255,	// (0x00039793) fshwr2_func_candi_cell_bg_pane

0xb6a5,	// (0x00041be3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb6a5,	// (0x00041be3) fshwr2_func_candi_cell_pane_g1

0xb6dc,	// (0x00041c1a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb6dc,	// (0x00041c1a) fshwr2_func_candi_cell_pane_t1

0xecf7,	// (0x00045235) bg_button_pane_cp08

0x28d7,	// (0x00038e15) cell_fshwr2_syb_bg_pane

0xb6f7,	// (0x00041c35) cell_fshwr2_syb_bg_pane_g1

0xb70b,	// (0x00041c49) cell_fshwr2_syb_bg_pane_t1

0xbe32,	// (0x00042370) main_tmo_pane

0xc753,	// (0x00042c91) uni_indicator_pane_g1_ParamLimits

0xc769,	// (0x00042ca7) uni_indicator_pane_g2_ParamLimits

0xc77f,	// (0x00042cbd) uni_indicator_pane_g3_ParamLimits

0xc792,	// (0x00042cd0) uni_indicator_pane_g4_ParamLimits

0xc792,	// (0x00042cd0) uni_indicator_pane_g4

0x3fec,	// (0x0003a52a) uni_indicator_pane_g5_ParamLimits

0x3fec,	// (0x0003a52a) uni_indicator_pane_g5

0x3fec,	// (0x0003a52a) uni_indicator_pane_g6_ParamLimits

0x3fec,	// (0x0003a52a) uni_indicator_pane_g6

0xf8f7,	// (0x00045e35) uni_indicator_pane_g_ParamLimits

0xd218,	// (0x00043756) popup_tmo_note_window_ParamLimits

0xd218,	// (0x00043756) popup_tmo_note_window

0x1611,	// (0x00037b4f) fshwr2_bg_pane

0xb6cd,	// (0x00041c0b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb6cd,	// (0x00041c0b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x000463e3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x000463e3) fshwr2_func_candi_cell_pane_g

0x11fb,	// (0x00037739) bg_popup_window_pane_cp01

0x1f8b,	// (0x000384c9) bg_popup_window_pane_g1_cp01

0x8062,	// (0x0003e5a0) bg_popup_window_pane_cp22_ParamLimits

0x8062,	// (0x0003e5a0) bg_popup_window_pane_cp22

0x8070,	// (0x0003e5ae) listscroll_tmo_link_pane_ParamLimits

0x8070,	// (0x0003e5ae) listscroll_tmo_link_pane

0x80b0,	// (0x0003e5ee) popup_tmo_note_window_g1_ParamLimits

0x80b0,	// (0x0003e5ee) popup_tmo_note_window_g1

0x80bd,	// (0x0003e5fb) tmo_note_info_pane_ParamLimits

0x80bd,	// (0x0003e5fb) tmo_note_info_pane

0xe982,	// (0x00044ec0) list_tmo_note_info_pane_g1_ParamLimits

0xe982,	// (0x00044ec0) list_tmo_note_info_pane_g1

0x80ee,	// (0x0003e62c) list_tmo_note_info_pane_g2_ParamLimits

0x80ee,	// (0x0003e62c) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x000463e8) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x000463e8) list_tmo_note_info_pane_g

0x810a,	// (0x0003e648) list_tmo_note_info_text_pane_ParamLimits

0x810a,	// (0x0003e648) list_tmo_note_info_text_pane

0x818f,	// (0x0003e6cd) list_tmo_link_pane

0x819c,	// (0x0003e6da) scroll_pane_cp20

0x81a9,	// (0x0003e6e7) list_single_tmo_link_pane_ParamLimits

0x81a9,	// (0x0003e6e7) list_single_tmo_link_pane

0x81b9,	// (0x0003e6f7) list_single_tmo_link_pane_t1

0x81c7,	// (0x0003e705) list_tmo_note_info_text_pane_t1_ParamLimits

0x81c7,	// (0x0003e705) list_tmo_note_info_text_pane_t1

0x9f35,	// (0x00040473) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9f35,	// (0x00040473) aid_size_touch_scroll_bar_cp01

0x9e77,	// (0x000403b5) aid_size_touch_slider_marker

0x94fe,	// (0x0003fa3c) popup_settings_window_ParamLimits

0x94fe,	// (0x0003fa3c) popup_settings_window

0xd429,	// (0x00043967) popup_candi_list_indi_window

0x2955,	// (0x00038e93) aid_touch_navi_pane_ParamLimits

0x156a,	// (0x00037aa8) rs_clock_indi_pane

0x1573,	// (0x00037ab1) sctrl_sk_bottom_pane_ParamLimits

0x1584,	// (0x00037ac2) sctrl_sk_top_pane_ParamLimits

0x1681,	// (0x00037bbf) popup_fep_tooltip_window

0xe640,	// (0x00044b7e) aid_size_cell_widget_grid_ParamLimits

0xe65f,	// (0x00044b9d) cell_ai5_widget_pane_g1_ParamLimits

0xe65f,	// (0x00044b9d) cell_ai5_widget_pane_g1

0xe6c2,	// (0x00044c00) cell_ai5_widget_pane_g6_ParamLimits

0xe6ce,	// (0x00044c0c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1e,	// (0x0004635c) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0004635c) cell_ai5_widget_pane_g

0xe80e,	// (0x00044d4c) cell_ai5_widget_pane_t10_ParamLimits

0xe80e,	// (0x00044d4c) cell_ai5_widget_pane_t10

0xe851,	// (0x00044d8f) grid_ai5_widget_pane_ParamLimits

0xe87d,	// (0x00044dbb) cell_contacts_ai5_widget_pane_ParamLimits

0xe87d,	// (0x00044dbb) cell_contacts_ai5_widget_pane

0x8002,	// (0x0003e540) popup_discreet_window_t3_ParamLimits

0x8002,	// (0x0003e540) popup_discreet_window_t3

0xb61e,	// (0x00041b5c) popup_fshwr2_char_preview_window_ParamLimits

0xb61e,	// (0x00041b5c) popup_fshwr2_char_preview_window

0xe999,	// (0x00044ed7) tmo_note_info_pane_t1

0xe9ae,	// (0x00044eec) tmo_note_info_pane_t2

0xe9c7,	// (0x00044f05) tmo_note_info_pane_t3

0x816b,	// (0x0003e6a9) tmo_note_info_pane_t4

0x817d,	// (0x0003e6bb) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x000463ed) tmo_note_info_pane_t

0x818f,	// (0x0003e6cd) list_tmo_link_pane_ParamLimits

0x819c,	// (0x0003e6da) scroll_pane_cp20_ParamLimits

0xecf7,	// (0x00045235) bg_popup_fep_char_preview_window_cp01

0x81e0,	// (0x0003e71e) popup_fshwr2_char_preview_window_t1

0x81ee,	// (0x0003e72c) popup_candi_list_indi_window_g1

0x81f7,	// (0x0003e735) bg_cell_contacts_ai5_widget_pane

0xe9dc,	// (0x00044f1a) cell_contacts_ai5_widget_pane_g1

0x8218,	// (0x0003e756) cell_contacts_ai5_widget_pane_g2

0x8224,	// (0x0003e762) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x000463f8) cell_contacts_ai5_widget_pane_g

0x8230,	// (0x0003e76e) cell_contacts_ai5_widget_pane_t1

0xbe32,	// (0x00042370) highlight_cell_shortcut_ai5_widget_pane_cp01

0x82a7,	// (0x0003e7e5) settings_container_pane

0x25b0,	// (0x00038aee) listscroll_set_pane_copy1

0x4b8b,	// (0x0003b0c9) scroll_pane_cp121_copy1

0x82b3,	// (0x0003e7f1) set_content_pane_copy1

0x82bb,	// (0x0003e7f9) aid_height_set_list_copy1_ParamLimits

0x82bb,	// (0x0003e7f9) aid_height_set_list_copy1

0x41ec,	// (0x0003a72a) aid_size_parent_copy1_ParamLimits

0x41ec,	// (0x0003a72a) aid_size_parent_copy1

0x82c7,	// (0x0003e805) button_value_adjust_pane_cp6_copy1_ParamLimits

0x82c7,	// (0x0003e805) button_value_adjust_pane_cp6_copy1

0x28d7,	// (0x00038e15) list_highlight_pane_cp2_copy1_ParamLimits

0x28d7,	// (0x00038e15) list_highlight_pane_cp2_copy1

0x82db,	// (0x0003e819) list_set_pane_copy1_ParamLimits

0x82db,	// (0x0003e819) list_set_pane_copy1

0x8242,	// (0x0003e780) main_pane_set_t1_copy1_ParamLimits

0x8242,	// (0x0003e780) main_pane_set_t1_copy1

0x827c,	// (0x0003e7ba) main_pane_set_t2_copy1_ParamLimits

0x827c,	// (0x0003e7ba) main_pane_set_t2_copy1

0x839c,	// (0x0003e8da) main_pane_set_t3_copy1

0x83aa,	// (0x0003e8e8) main_pane_set_t4_copy1

0x829b,	// (0x0003e7d9) set_content_pane_g1_copy1_ParamLimits

0x829b,	// (0x0003e7d9) set_content_pane_g1_copy1

0x83b8,	// (0x0003e8f6) setting_code_pane_copy1

0x83c0,	// (0x0003e8fe) setting_slider_graphic_pane_copy1

0x83c0,	// (0x0003e8fe) setting_slider_pane_copy1

0x83c8,	// (0x0003e906) setting_text_pane_copy1

0x83c8,	// (0x0003e906) setting_volume_pane_copy1

0x83b8,	// (0x0003e8f6) settings_code_pane_cp2_copy1

0x83d0,	// (0x0003e90e) settings_code_pane_cp_copy1_ParamLimits

0x83d0,	// (0x0003e90e) settings_code_pane_cp_copy1

0x1f94,	// (0x000384d2) volume_set_pane_copy1

0x83e4,	// (0x0003e922) volume_set_pane_g10_copy1

0x83f0,	// (0x0003e92e) volume_set_pane_g1_copy1

0x83fa,	// (0x0003e938) volume_set_pane_g2_copy1

0x8404,	// (0x0003e942) volume_set_pane_g3_copy1

0x840e,	// (0x0003e94c) volume_set_pane_g4_copy1

0x8418,	// (0x0003e956) volume_set_pane_g5_copy1

0x8422,	// (0x0003e960) volume_set_pane_g6_copy1

0x842c,	// (0x0003e96a) volume_set_pane_g7_copy1

0x8436,	// (0x0003e974) volume_set_pane_g8_copy1

0x8440,	// (0x0003e97e) volume_set_pane_g9_copy1

0xb7f0,	// (0x00041d2e) bg_set_opt_pane_cp_copy1_ParamLimits

0xb7f0,	// (0x00041d2e) bg_set_opt_pane_cp_copy1

0x1fa0,	// (0x000384de) setting_slider_pane_t1_copy1_ParamLimits

0x1fa0,	// (0x000384de) setting_slider_pane_t1_copy1

0x1fbf,	// (0x000384fd) setting_slider_pane_t2_copy1_ParamLimits

0x1fbf,	// (0x000384fd) setting_slider_pane_t2_copy1

0x1fd9,	// (0x00038517) setting_slider_pane_t3_copy1_ParamLimits

0x1fd9,	// (0x00038517) setting_slider_pane_t3_copy1

0x1ff1,	// (0x0003852f) slider_set_pane_copy1_ParamLimits

0x1ff1,	// (0x0003852f) slider_set_pane_copy1

0xbe8a,	// (0x000423c8) set_opt_bg_pane_g1_copy2

0xbe92,	// (0x000423d0) set_opt_bg_pane_g2_copy2

0x844c,	// (0x0003e98a) set_opt_bg_pane_g3_copy2

0xbea2,	// (0x000423e0) set_opt_bg_pane_g4_copy2

0xbeaa,	// (0x000423e8) set_opt_bg_pane_g5_copy2

0xbeb2,	// (0x000423f0) set_opt_bg_pane_g6_copy2

0x8456,	// (0x0003e994) set_opt_bg_pane_g7_copy2

0x8460,	// (0x0003e99e) set_opt_bg_pane_g8_copy2

0x846a,	// (0x0003e9a8) set_opt_bg_pane_g9_copy2

0x2007,	// (0x00038545) aid_size_touch_slider_mark_copy1_ParamLimits

0x2007,	// (0x00038545) aid_size_touch_slider_mark_copy1

0x8474,	// (0x0003e9b2) slider_set_pane_g1_copy1

0x201b,	// (0x00038559) slider_set_pane_g2_copy1

0x0d3e,	// (0x0003727c) slider_set_pane_g3_copy1_ParamLimits

0x0d3e,	// (0x0003727c) slider_set_pane_g3_copy1

0x0d52,	// (0x00037290) slider_set_pane_g4_copy1_ParamLimits

0x0d52,	// (0x00037290) slider_set_pane_g4_copy1

0x0d6a,	// (0x000372a8) slider_set_pane_g5_copy1_ParamLimits

0x0d6a,	// (0x000372a8) slider_set_pane_g5_copy1

0x0d3e,	// (0x0003727c) slider_set_pane_g6_copy1_ParamLimits

0x0d3e,	// (0x0003727c) slider_set_pane_g6_copy1

0x2023,	// (0x00038561) slider_set_pane_g7_copy1_ParamLimits

0x2023,	// (0x00038561) slider_set_pane_g7_copy1

0xb794,	// (0x00041cd2) bg_set_opt_pane_cp2_copy1

0x847d,	// (0x0003e9bb) setting_slider_graphic_pane_g1_copy1

0x8486,	// (0x0003e9c4) setting_slider_graphic_pane_t1_copy1

0x8496,	// (0x0003e9d4) setting_slider_graphic_pane_t2_copy1

0x84a6,	// (0x0003e9e4) slider_set_pane_cp_copy1

0x84b6,	// (0x0003e9f4) input_focus_pane_cp1_copy1

0x84bf,	// (0x0003e9fd) list_set_text_pane_copy1

0x84c7,	// (0x0003ea05) setting_text_pane_g1_copy1

0xe9f1,	// (0x00044f2f) set_text_pane_t1_copy1

0x84b6,	// (0x0003e9f4) input_focus_pane_cp2_copy1

0x84c7,	// (0x0003ea05) setting_code_pane_g1_copy1

0x84d0,	// (0x0003ea0e) setting_code_pane_t1_copy1

0x4990,	// (0x0003aece) list_set_graphic_pane_copy1

0xb794,	// (0x00041cd2) bg_set_opt_pane_cp4_copy1

0x229f,	// (0x000387dd) list_set_graphic_pane_g1_copy1_ParamLimits

0x229f,	// (0x000387dd) list_set_graphic_pane_g1_copy1

0x84de,	// (0x0003ea1c) list_set_graphic_pane_g2_copy1

0x22b7,	// (0x000387f5) list_set_graphic_pane_t1_copy1_ParamLimits

0x22b7,	// (0x000387f5) list_set_graphic_pane_t1_copy1

0x545a,	// (0x0003b998) rs_clock_indi_pane_g1

0x84e6,	// (0x0003ea24) rs_clock_indi_pane_t1

0x84f4,	// (0x0003ea32) rs_indi_pane

0x84fc,	// (0x0003ea3a) rs_indi_pane_g1

0x8505,	// (0x0003ea43) rs_indi_pane_g2

0x81ee,	// (0x0003e72c) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x000463ff) rs_indi_pane_g

0x25b0,	// (0x00038aee) bg_popup_preview_window_pane_cp03

0x850e,	// (0x0003ea4c) popup_fep_tooltip_window_t1

0x6137,	// (0x0003c675) popup_note2_window_g2_ParamLimits

0x6137,	// (0x0003c675) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x0004618c) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x0004618c) popup_note2_window_g

0x663f,	// (0x0003cb7d) bg_popup_sub_pane_cp11_ParamLimits

0x664c,	// (0x0003cb8a) cell_ai3_links_pane_g1_ParamLimits

0x6663,	// (0x0003cba1) cell_ai3_links_pane_t1

0xe9f1,	// (0x00044f2f) set_text_pane_t1_copy1_ParamLimits

0x24b2,	// (0x000389f0) cell_graphic_popup_pane_cp2_ParamLimits

0x24b2,	// (0x000389f0) cell_graphic_popup_pane_cp2

0x851c,	// (0x0003ea5a) cell_graphic_popup_pane_g1_cp2

0xbb87,	// (0x000420c5) cell_graphic_popup_pane_g2_cp2

0x8524,	// (0x0003ea62) cell_graphic_popup_pane_g3_cp2

0x852c,	// (0x0003ea6a) cell_graphic_popup_pane_t2_cp2

0xbb98,	// (0x000420d6) grid_highlight_pane_cp3_cp2

0xc146,	// (0x00042684) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbe32,	// (0x00042370) main_tmo_pane_ParamLimits

0xd20c,	// (0x0004374a) popup_tmo_big_image_note_window

0xe64e,	// (0x00044b8c) cell_ai5_widget_list_pane

0xe656,	// (0x00044b94) cell_ai5_widget_lrg_icon_pane

0xe999,	// (0x00044ed7) tmo_note_info_pane_t1_ParamLimits

0xe9ae,	// (0x00044eec) tmo_note_info_pane_t2_ParamLimits

0xe9c7,	// (0x00044f05) tmo_note_info_pane_t3_ParamLimits

0x816b,	// (0x0003e6a9) tmo_note_info_pane_t4_ParamLimits

0x817d,	// (0x0003e6bb) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x000463ed) tmo_note_info_pane_t_ParamLimits

0x82a7,	// (0x0003e7e5) settings_container_pane_ParamLimits

0x84ae,	// (0x0003e9ec) indicator_popup_pane_cp5

0x84ae,	// (0x0003e9ec) indicator_popup_pane_cp6

0x4990,	// (0x0003aece) list_set_graphic_pane_copy1_ParamLimits

0xb780,	// (0x00041cbe) bg_popup_window_pane_cp23

0x853a,	// (0x0003ea78) popup_tmo_big_image_note_window_g1

0x8546,	// (0x0003ea84) popup_tmo_big_image_note_window_t1

0x8556,	// (0x0003ea94) popup_tmo_big_image_note_window_t2

0x8566,	// (0x0003eaa4) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x00046406) popup_tmo_big_image_note_window_t

0x545a,	// (0x0003b998) cell_ai5_widget_lrg_icon_pane_g1

0xea0b,	// (0x00044f49) cell_ai5_widget_lrg_icon_pane_t1

0xea19,	// (0x00044f57) cell_ai5_widget_list_row_pane_ParamLimits

0xea19,	// (0x00044f57) cell_ai5_widget_list_row_pane

0xea31,	// (0x00044f6f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xea31,	// (0x00044f6f) cell_ai5_widget_list_row_pane_g1

0xea3e,	// (0x00044f7c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xea3e,	// (0x00044f7c) cell_ai5_widget_list_row_pane_t1

0xea69,	// (0x00044fa7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xea69,	// (0x00044fa7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecf,	// (0x0004640d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x0004640d) cell_ai5_widget_list_row_pane_t

0xecf7,	// (0x00045235) main_fep_vtchi_ss_pane

0x8624,	// (0x0003eb62) popup_fep_char_pre_window

0x862c,	// (0x0003eb6a) popup_fep_ituss_window

0xeabb,	// (0x00044ff9) popup_fep_vkbss_window

0x28d7,	// (0x00038e15) grid_vkbss_keypad_pane_ParamLimits

0x28d7,	// (0x00038e15) grid_vkbss_keypad_pane

0x869a,	// (0x0003ebd8) ituss_keypad_pane

0x2043,	// (0x00038581) aid_vkbss_key_offset_ParamLimits

0x2043,	// (0x00038581) aid_vkbss_key_offset

0xb721,	// (0x00041c5f) cell_vkbss_key_pane_ParamLimits

0xb721,	// (0x00041c5f) cell_vkbss_key_pane

0x86a6,	// (0x0003ebe4) bg_cell_vkbss_key_g1_ParamLimits

0x86a6,	// (0x0003ebe4) bg_cell_vkbss_key_g1

0xeaca,	// (0x00045008) cell_vkbss_key_3p_pane_ParamLimits

0xeaca,	// (0x00045008) cell_vkbss_key_3p_pane

0xeb00,	// (0x0004503e) cell_vkbss_key_g1_ParamLimits

0xeb00,	// (0x0004503e) cell_vkbss_key_g1

0xeb36,	// (0x00045074) cell_vkbss_key_t1_ParamLimits

0xeb36,	// (0x00045074) cell_vkbss_key_t1

0x20b1,	// (0x000385ef) cell_ituss_key_pane_ParamLimits

0x20b1,	// (0x000385ef) cell_ituss_key_pane

0x877a,	// (0x0003ecb8) bg_cell_ituss_key_g1_ParamLimits

0x877a,	// (0x0003ecb8) bg_cell_ituss_key_g1

0x8786,	// (0x0003ecc4) cell_ituss_key_pane_g1_ParamLimits

0x8786,	// (0x0003ecc4) cell_ituss_key_pane_g1

0x20c2,	// (0x00038600) cell_ituss_key_pane_g2_ParamLimits

0x20c2,	// (0x00038600) cell_ituss_key_pane_g2

0x0005,

0xfed6,	// (0x00046414) cell_ituss_key_pane_g_ParamLimits

0xfed6,	// (0x00046414) cell_ituss_key_pane_g

0x2146,	// (0x00038684) cell_ituss_key_t1_ParamLimits

0x2146,	// (0x00038684) cell_ituss_key_t1

0x2180,	// (0x000386be) cell_ituss_key_t2_ParamLimits

0x2180,	// (0x000386be) cell_ituss_key_t2

0x21b2,	// (0x000386f0) cell_ituss_key_t3_ParamLimits

0x21b2,	// (0x000386f0) cell_ituss_key_t3

0x21e3,	// (0x00038721) cell_ituss_key_t4_ParamLimits

0x21e3,	// (0x00038721) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00046421) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00046421) cell_ituss_key_t

0xeb92,	// (0x000450d0) cell_vkbss_key_3p_pane_g1

0xeb9a,	// (0x000450d8) cell_vkbss_key_3p_pane_g2

0xeba2,	// (0x000450e0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0004642c) cell_vkbss_key_3p_pane_g

0x25b0,	// (0x00038aee) bg_popup_fep_char_preview_window_cp02

0x87c4,	// (0x0003ed02) popup_fep_char_pre_window_t1

0xe62d,	// (0x00044b6b) main_ai5_sk_pane

0x81f7,	// (0x0003e735) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe9dc,	// (0x00044f1a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8218,	// (0x0003e756) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8224,	// (0x0003e762) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x000463f8) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8230,	// (0x0003e76e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbe32,	// (0x00042370) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebaa,	// (0x000450e8) main_ai5_sk_pane_g1

0x32ad,	// (0x000397eb) popup_query_code_window_g1

0xeaac,	// (0x00044fea) popup_fep_vkb_icf_pane

0x8671,	// (0x0003ebaf) popup_fep_vtchi_icf_pane

0x87db,	// (0x0003ed19) bg_icf_pane

0x87db,	// (0x0003ed19) list_vkb_icf_pane

0x87e7,	// (0x0003ed25) bg_icf_pane_cp01

0x87fa,	// (0x0003ed38) vtchi_icf_list_pane

0xebff,	// (0x0004513d) list_vkb_icf_pane_t1_ParamLimits

0xebff,	// (0x0004513d) list_vkb_icf_pane_t1

0x8873,	// (0x0003edb1) vtchi_icf_list_pane_t1_ParamLimits

0x8873,	// (0x0003edb1) vtchi_icf_list_pane_t1

0x862c,	// (0x0003eb6a) popup_fep_ituss_window_ParamLimits

0x8671,	// (0x0003ebaf) popup_fep_vtchi_icf_pane_ParamLimits

0x869a,	// (0x0003ebd8) ituss_keypad_pane_ParamLimits

0x2039,	// (0x00038577) ituss_sks_pane

0x87db,	// (0x0003ed19) bg_icf_pane_ParamLimits

0xea91,	// (0x00044fcf) icf_edit_indi_pane_ParamLimits

0xea91,	// (0x00044fcf) icf_edit_indi_pane

0x87db,	// (0x0003ed19) list_vkb_icf_pane_ParamLimits

0x87e7,	// (0x0003ed25) bg_icf_pane_cp01_ParamLimits

0x8617,	// (0x0003eb55) icf_edit_indi_pane_cp01_ParamLimits

0x8617,	// (0x0003eb55) icf_edit_indi_pane_cp01

0x87fa,	// (0x0003ed38) vtchi_query_pane

0x797b,	// (0x0003deb9) icf_edit_indi_pane_g1_ParamLimits

0x797b,	// (0x0003deb9) icf_edit_indi_pane_g1

0xec16,	// (0x00045154) icf_edit_indi_pane_g2_ParamLimits

0xec16,	// (0x00045154) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00046457) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00046457) icf_edit_indi_pane_g

0xec2a,	// (0x00045168) icf_edit_indi_pane_t1

0x888c,	// (0x0003edca) bg_input_focus_pane_cp042

0xbd6b,	// (0x000422a9) vtchi_button_pane

0x8895,	// (0x0003edd3) vtchi_query_pane_t1

0x88a3,	// (0x0003ede1) vtchi_query_pane_t2

0x88b1,	// (0x0003edef) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00046446) vtchi_query_pane_t

0xecf7,	// (0x00045235) bg_button_pane_cp13

0x88bf,	// (0x0003edfd) vtchi_button_pane_g1

0x2226,	// (0x00038764) ituss_sks_pane_g1

0x2231,	// (0x0003876f) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0004644d) ituss_sks_pane_g

0x88c7,	// (0x0003ee05) ituss_sks_pane_t1

0x88d5,	// (0x0003ee13) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00046452) ituss_sks_pane_t

0x4f2e,	// (0x0003b46c) indicator_nsta_pane_cp_g1

0x4f37,	// (0x0003b475) indicator_nsta_pane_cp_g2

0x4f3f,	// (0x0003b47d) indicator_nsta_pane_cp_g3

0x4f47,	// (0x0003b485) indicator_nsta_pane_cp_g4

0x4f37,	// (0x0003b475) indicator_nsta_pane_cp_g5

0x4f3f,	// (0x0003b47d) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x00045fca) indicator_nsta_pane_cp_g

0xe435,	// (0x00044973) cell_graphic2_pane_t2_ParamLimits

0xe435,	// (0x00044973) cell_graphic2_pane_t2

0x0001,

0xfda5,	// (0x000462e3) cell_graphic2_pane_t_ParamLimits

0xfda5,	// (0x000462e3) cell_graphic2_pane_t

0xe46d,	// (0x000449ab) cell_graphic2_control_pane_t1

0xa1af,	// (0x000406ed) signal_pane_g3_ParamLimits

0xa1af,	// (0x000406ed) signal_pane_g3

0xa1c3,	// (0x00040701) signal_pane_g4_ParamLimits

0xa1c3,	// (0x00040701) signal_pane_g4

0xea7b,	// (0x00044fb9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xea7b,	// (0x00044fb9) cell_ai5_widget_list_row_pane_t3

0x879a,	// (0x0003ecd8) cell_ituss_key_pane_t1_ParamLimits

0x879a,	// (0x0003ecd8) cell_ituss_key_pane_t1

0x2f14,	// (0x00039452) form_field_data_wide_pane_vc_t2_ParamLimits

0x2f14,	// (0x00039452) form_field_data_wide_pane_vc_t2

0x2f28,	// (0x00039466) form_field_data_wide_pane_vc_t3_ParamLimits

0x2f28,	// (0x00039466) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00045d1d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00045d1d) form_field_data_wide_pane_vc_t

0x4bcb,	// (0x0003b109) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4bcb,	// (0x0003b109) form_field_slider_wide_pane_vc_t3

0x4ca1,	// (0x0003b1df) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4ca1,	// (0x0003b1df) form_field_popup_wide_pane_vc_t2

0x4cb8,	// (0x0003b1f6) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4cb8,	// (0x0003b1f6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x00045fb9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00045fb9) form_field_popup_wide_pane_vc_t

0xb584,	// (0x00041ac2) aid_fshwr2_btn_pane_ParamLimits

0xb598,	// (0x00041ad6) aid_fshwr2_syb_pane_ParamLimits

0xb5ac,	// (0x00041aea) aid_fshwr2_txt_pane_ParamLimits

0x1611,	// (0x00037b4f) fshwr2_bg_pane_ParamLimits

0xb5bc,	// (0x00041afa) fshwr2_func_candi_pane_ParamLimits

0xb5de,	// (0x00041b1c) fshwr2_hwr_syb_pane_ParamLimits

0xb602,	// (0x00041b40) fshwr2_icf_pane_ParamLimits

0xd7bb,	// (0x00043cf9) list_double_graphic_pane_vc_g4_ParamLimits

0xd7bb,	// (0x00043cf9) list_double_graphic_pane_vc_g4

0x20e2,	// (0x00038620) cell_ituss_key_pane_g3_ParamLimits

0x20e2,	// (0x00038620) cell_ituss_key_pane_g3

0x2214,	// (0x00038752) cell_ituss_key_t5_ParamLimits

0x2214,	// (0x00038752) cell_ituss_key_t5

0xeabb,	// (0x00044ff9) popup_fep_vkbss_window_ParamLimits

0xe637,	// (0x00044b75) aid_cell_ai5_quarter

0xec2a,	// (0x00045168) icf_edit_indi_pane_t1_ParamLimits

0xb9cb,	// (0x00041f09) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xb9cb,	// (0x00041f09) aid_tch_indicator_popup_pane_cp2

0xb9de,	// (0x00041f1c) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xb9de,	// (0x00041f1c) aid_tch_query_popup_data_pane_cp2

0x3255,	// (0x00039793) aid_tch_query_popup_pane_ParamLimits

0x3255,	// (0x00039793) aid_tch_query_popup_pane

0x3255,	// (0x00039793) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3255,	// (0x00039793) aid_tch_query_popup_data_pane_cp1

0x28d7,	// (0x00038e15) cell_fshwr2_syb_bg_pane_ParamLimits

0xb6f7,	// (0x00041c35) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb70b,	// (0x00041c49) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeaac,	// (0x00044fea) popup_fep_vkb_icf_pane_ParamLimits

0xb518,	// (0x00041a56) bg_popup_fep_char_preview_window_g10

0xe716,	// (0x00044c54) cell_ai5_widget_pane_g11_ParamLimits

0xe716,	// (0x00044c54) cell_ai5_widget_pane_g11

0xe722,	// (0x00044c60) cell_ai5_widget_pane_g12_ParamLimits

0xe722,	// (0x00044c60) cell_ai5_widget_pane_g12

0xe72e,	// (0x00044c6c) cell_ai5_widget_pane_g13_ParamLimits

0xe72e,	// (0x00044c6c) cell_ai5_widget_pane_g13

0xe82d,	// (0x00044d6b) cell_ai5_widget_pane_t11_ParamLimits

0xe82d,	// (0x00044d6b) cell_ai5_widget_pane_t11

0xe83f,	// (0x00044d7d) cell_ai5_widget_pane_t12_ParamLimits

0xe83f,	// (0x00044d7d) cell_ai5_widget_pane_t12

0x20ee,	// (0x0003862c) cell_ituss_key_pane_g4_ParamLimits

0x20ee,	// (0x0003862c) cell_ituss_key_pane_g4

0x210a,	// (0x00038648) cell_ituss_key_pane_g5_ParamLimits

0x210a,	// (0x00038648) cell_ituss_key_pane_g5

0x2126,	// (0x00038664) cell_ituss_key_pane_g6_ParamLimits

0x2126,	// (0x00038664) cell_ituss_key_pane_g6

0x2e0f,	// (0x0003934d) bg_icf_pane_g1

0xebb3,	// (0x000450f1) bg_icf_pane_g2

0xebbd,	// (0x000450fb) bg_icf_pane_g3

0xebc5,	// (0x00045103) bg_icf_pane_g4

0xebcf,	// (0x0004510d) bg_icf_pane_g5

0xebd9,	// (0x00045117) bg_icf_pane_g6

0xebe3,	// (0x00045121) bg_icf_pane_g7

0xebeb,	// (0x00045129) bg_icf_pane_g8

0xebf5,	// (0x00045133) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x00046433) bg_icf_pane_g

0x8687,	// (0x0003ebc5) popup_hyb_candi_window_ParamLimits

0x8687,	// (0x0003ebc5) popup_hyb_candi_window

0x2e83,	// (0x000393c1) bg_popup_sub_pane_cp01_ParamLimits

0x2e83,	// (0x000393c1) bg_popup_sub_pane_cp01

0x8910,	// (0x0003ee4e) entry_hyb_candi_pane_ParamLimits

0x8910,	// (0x0003ee4e) entry_hyb_candi_pane

0x891f,	// (0x0003ee5d) grid_hyb_candi_pane_ParamLimits

0x891f,	// (0x0003ee5d) grid_hyb_candi_pane

0x8934,	// (0x0003ee72) grid_hyb_phrase_pane_ParamLimits

0x8934,	// (0x0003ee72) grid_hyb_phrase_pane

0x8943,	// (0x0003ee81) cell_hyb_candi_pane_ParamLimits

0x8943,	// (0x0003ee81) cell_hyb_candi_pane

0xbd74,	// (0x000422b2) cell_hyb_candi_scroll_pane

0xf28c,	// (0x000457ca) cell_hyb_candi_pane_g1

0x895f,	// (0x0003ee9d) cell_hyb_candi_pane_t1

0x896d,	// (0x0003eeab) cell_hyb_phrase_pane

0xf28c,	// (0x000457ca) cell_hyb_phrase_pane_g1

0x8976,	// (0x0003eeb4) cell_hyb_phrase_pane_t1

0x8984,	// (0x0003eec2) entry_hyb_candi_pane_t1

0x25b0,	// (0x00038aee) input_focus_pane_cp06

0x8992,	// (0x0003eed0) cell_hyb_candi_scroll_pane_g1

0x899a,	// (0x0003eed8) cell_hyb_candi_scroll_pane_g1_aid

0x89a2,	// (0x0003eee0) cell_hyb_candi_scroll_pane_g2

0x89aa,	// (0x0003eee8) cell_hyb_candi_scroll_pane_g2_aid

0x89b2,	// (0x0003eef0) cell_hyb_candi_scroll_pane_g3

0x89ba,	// (0x0003eef8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
