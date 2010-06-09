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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00037444 };

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
0x8b7a,	// (0x0003ffbe) Screen

0x8b86,	// (0x0003ffca) application_window_ParamLimits

0x8b86,	// (0x0003ffca) application_window

0xb3cd,	// (0x00042811) screen_g1

0x8bbe,	// (0x00040002) area_bottom_pane_ParamLimits

0x8bbe,	// (0x00040002) area_bottom_pane

0xee26,	// (0x0004626a) area_top_pane_ParamLimits

0xee26,	// (0x0004626a) area_top_pane

0xeec4,	// (0x00046308) main_pane_ParamLimits

0xeec4,	// (0x00046308) main_pane

0xb3d7,	// (0x0004281b) misc_graphics

0xbd60,	// (0x000431a4) battery_pane_ParamLimits

0xbd60,	// (0x000431a4) battery_pane

0x31b7,	// (0x0003a5fb) bg_status_flat_pane_g8

0x31bf,	// (0x0003a603) bg_status_flat_pane_g9

0x25bd,	// (0x00039a01) context_pane_ParamLimits

0x25bd,	// (0x00039a01) context_pane

0xbecb,	// (0x0004330f) navi_pane_ParamLimits

0xbecb,	// (0x0004330f) navi_pane

0xbf49,	// (0x0004338d) signal_pane_ParamLimits

0xbf49,	// (0x0004338d) signal_pane

0x0008,

0xf85e,	// (0x00046ca2) bg_status_flat_pane_g

0xbfd9,	// (0x0004341d) status_pane_g1_ParamLimits

0xbfd9,	// (0x0004341d) status_pane_g1

0xbfef,	// (0x00043433) status_pane_g2_ParamLimits

0xbfef,	// (0x00043433) status_pane_g2

0x27e4,	// (0x00039c28) status_pane_g3_ParamLimits

0x27e4,	// (0x00039c28) status_pane_g3

0x0004,

0xf791,	// (0x00046bd5) status_pane_g_ParamLimits

0xf791,	// (0x00046bd5) status_pane_g

0xbffb,	// (0x0004343f) title_pane_ParamLimits

0xbffb,	// (0x0004343f) title_pane

0xc05e,	// (0x000434a2) uni_indicator_pane_ParamLimits

0xc05e,	// (0x000434a2) uni_indicator_pane

0x2414,	// (0x00039858) bg_list_pane_ParamLimits

0x2414,	// (0x00039858) bg_list_pane

0xd359,	// (0x0004479d) find_pane

0xa0ee,	// (0x00041532) listscroll_app_pane_ParamLimits

0xa0ee,	// (0x00041532) listscroll_app_pane

0x2445,	// (0x00039889) listscroll_form_pane

0xf131,	// (0x00046575) listscroll_gen_pane_ParamLimits

0xf131,	// (0x00046575) listscroll_gen_pane

0x037f,	// (0x000377c3) listscroll_set_pane

0x3d1b,	// (0x0003b15f) main_idle_act_pane

0x2114,	// (0x00039558) main_idle_trad_pane

0x2114,	// (0x00039558) main_list_empty_pane

0x245f,	// (0x000398a3) main_midp_pane

0x246b,	// (0x000398af) main_pane_g1_ParamLimits

0x246b,	// (0x000398af) main_pane_g1

0xa102,	// (0x00041546) popup_ai_message_window_ParamLimits

0xa102,	// (0x00041546) popup_ai_message_window

0xa1b3,	// (0x000415f7) popup_fep_china_uni_window_ParamLimits

0xa1b3,	// (0x000415f7) popup_fep_china_uni_window

0xa20d,	// (0x00041651) popup_fep_japan_candidate_window_ParamLimits

0xa20d,	// (0x00041651) popup_fep_japan_candidate_window

0xa22b,	// (0x0004166f) popup_fep_japan_predictive_window_ParamLimits

0xa22b,	// (0x0004166f) popup_fep_japan_predictive_window

0xa23d,	// (0x00041681) popup_find_window

0xa25a,	// (0x0004169e) popup_grid_graphic_window_ParamLimits

0xa25a,	// (0x0004169e) popup_grid_graphic_window

0xa2f8,	// (0x0004173c) popup_large_graphic_colour_window

0xa31e,	// (0x00041762) popup_menu_window_ParamLimits

0xa31e,	// (0x00041762) popup_menu_window

0xa4f0,	// (0x00041934) popup_note_image_window

0xa4b6,	// (0x000418fa) popup_note_wait_window_ParamLimits

0xa4b6,	// (0x000418fa) popup_note_wait_window

0xa508,	// (0x0004194c) popup_note_window_ParamLimits

0xa508,	// (0x0004194c) popup_note_window

0xa5b7,	// (0x000419fb) popup_query_code_window_ParamLimits

0xa5b7,	// (0x000419fb) popup_query_code_window

0xa5f1,	// (0x00041a35) popup_query_data_code_window_ParamLimits

0xa5f1,	// (0x00041a35) popup_query_data_code_window

0xa60e,	// (0x00041a52) popup_query_data_window_ParamLimits

0xa60e,	// (0x00041a52) popup_query_data_window

0xa690,	// (0x00041ad4) popup_query_sat_info_window_ParamLimits

0xa690,	// (0x00041ad4) popup_query_sat_info_window

0xa727,	// (0x00041b6b) popup_snote_single_graphic_window_ParamLimits

0xa727,	// (0x00041b6b) popup_snote_single_graphic_window

0xa727,	// (0x00041b6b) popup_snote_single_text_window_ParamLimits

0xa727,	// (0x00041b6b) popup_snote_single_text_window

0x07eb,	// (0x00037c2f) popup_sub_window_general

0xa884,	// (0x00041cc8) popup_window_general_ParamLimits

0xa884,	// (0x00041cc8) popup_window_general

0x2479,	// (0x000398bd) power_save_pane

0x9f4c,	// (0x00041390) control_pane_g1_ParamLimits

0x9f4c,	// (0x00041390) control_pane_g1

0x9f75,	// (0x000413b9) control_pane_g2_ParamLimits

0x9f75,	// (0x000413b9) control_pane_g2

0x23d7,	// (0x0003981b) control_pane_g3_ParamLimits

0x23d7,	// (0x0003981b) control_pane_g3

0x0007,

0xf779,	// (0x00046bbd) control_pane_g_ParamLimits

0xf779,	// (0x00046bbd) control_pane_g

0x9fdd,	// (0x00041421) control_pane_t1_ParamLimits

0x9fdd,	// (0x00041421) control_pane_t1

0xa043,	// (0x00041487) control_pane_t2_ParamLimits

0xa043,	// (0x00041487) control_pane_t2

0x0002,

0xf78a,	// (0x00046bce) control_pane_t_ParamLimits

0xf78a,	// (0x00046bce) control_pane_t

0x9ea5,	// (0x000412e9) navi_navi_volume_pane_cp1

0x9ead,	// (0x000412f1) status_small_icon_pane

0x230c,	// (0x00039750) status_small_pane_g1_ParamLimits

0x230c,	// (0x00039750) status_small_pane_g1

0x9eb5,	// (0x000412f9) status_small_pane_g2_ParamLimits

0x9eb5,	// (0x000412f9) status_small_pane_g2

0x9ec1,	// (0x00041305) status_small_pane_g3_ParamLimits

0x9ec1,	// (0x00041305) status_small_pane_g3

0x9ecd,	// (0x00041311) status_small_pane_g4_ParamLimits

0x9ecd,	// (0x00041311) status_small_pane_g4

0x9ed9,	// (0x0004131d) status_small_pane_g5_ParamLimits

0x9ed9,	// (0x0004131d) status_small_pane_g5

0x9ee7,	// (0x0004132b) status_small_pane_g6_ParamLimits

0x9ee7,	// (0x0004132b) status_small_pane_g6

0x0007,

0xf768,	// (0x00046bac) status_small_pane_g_ParamLimits

0xf768,	// (0x00046bac) status_small_pane_g

0x9f16,	// (0x0004135a) status_small_pane_t1

0x9f38,	// (0x0004137c) status_small_wait_pane_ParamLimits

0x9f38,	// (0x0004137c) status_small_wait_pane

0x9b97,	// (0x00040fdb) aid_levels_signal_ParamLimits

0x9b97,	// (0x00040fdb) aid_levels_signal

0x9baf,	// (0x00040ff3) signal_pane_g1_ParamLimits

0x9baf,	// (0x00040ff3) signal_pane_g1

0x9bca,	// (0x0004100e) signal_pane_g2_ParamLimits

0x9bca,	// (0x0004100e) signal_pane_g2

0x0003,

0xf6f9,	// (0x00046b3d) signal_pane_g_ParamLimits

0xf6f9,	// (0x00046b3d) signal_pane_g

0xbc70,	// (0x000430b4) context_pane_g1

0x8dbc,	// (0x00040200) title_pane_g1

0x8df3,	// (0x00040237) title_pane_t1

0xb3ed,	// (0x00042831) title_pane_t2

0xb413,	// (0x00042857) title_pane_t3

0x0002,

0xf557,	// (0x0004699b) title_pane_t

0xc086,	// (0x000434ca) aid_levels_battery_ParamLimits

0xc086,	// (0x000434ca) aid_levels_battery

0xc0a2,	// (0x000434e6) battery_pane_g1_ParamLimits

0xc0a2,	// (0x000434e6) battery_pane_g1

0xc0bf,	// (0x00043503) battery_pane_g2_ParamLimits

0xc0bf,	// (0x00043503) battery_pane_g2

0x0001,

0xf79c,	// (0x00046be0) battery_pane_g_ParamLimits

0xf79c,	// (0x00046be0) battery_pane_g

0xc685,	// (0x00043ac9) uni_indicator_pane_g1

0xc69b,	// (0x00043adf) uni_indicator_pane_g2

0xc6b1,	// (0x00043af5) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x00046d4a) uni_indicator_pane_g

0x0095,	// (0x000374d9) navi_icon_pane_ParamLimits

0x0095,	// (0x000374d9) navi_icon_pane

0xf536,	// (0x0004697a) navi_midp_pane

0x00b1,	// (0x000374f5) navi_navi_pane

0x00bb,	// (0x000374ff) navi_text_pane_ParamLimits

0x00bb,	// (0x000374ff) navi_text_pane

0xb3cd,	// (0x00042811) status_small_wait_pane_g1

0xb664,	// (0x00042aa8) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00046d45) status_small_wait_pane_g

0xc5de,	// (0x00043a22) navi_navi_icon_text_pane

0x380a,	// (0x0003ac4e) navi_navi_pane_g1_ParamLimits

0x380a,	// (0x0003ac4e) navi_navi_pane_g1

0x381c,	// (0x0003ac60) navi_navi_pane_g2_ParamLimits

0x381c,	// (0x0003ac60) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00046d13) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00046d13) navi_navi_pane_g

0x382e,	// (0x0003ac72) navi_navi_tabs_pane

0x3837,	// (0x0003ac7b) navi_navi_text_pane

0xc5de,	// (0x00043a22) navi_navi_volume_pane

0x37de,	// (0x0003ac22) navi_text_pane_t1

0x37d2,	// (0x0003ac16) navi_icon_pane_g1

0x3725,	// (0x0003ab69) navi_navi_text_pane_t1

0xa959,	// (0x00041d9d) navi_navi_volume_pane_g1

0x0c08,	// (0x0003804c) volume_small_pane

0x368b,	// (0x0003aacf) navi_navi_icon_text_pane_g1

0xc536,	// (0x0004397a) navi_navi_icon_text_pane_t1

0x00b1,	// (0x000374f5) navi_tabs_2_long_pane

0x00b1,	// (0x000374f5) navi_tabs_2_pane

0x00b1,	// (0x000374f5) navi_tabs_3_long_pane

0x00b1,	// (0x000374f5) navi_tabs_3_pane

0x00b1,	// (0x000374f5) navi_tabs_4_pane

0x0be0,	// (0x00038024) tabs_2_active_pane_ParamLimits

0x0be0,	// (0x00038024) tabs_2_active_pane

0x0bf0,	// (0x00038034) tabs_2_passive_pane_ParamLimits

0x0bf0,	// (0x00038034) tabs_2_passive_pane

0x0bae,	// (0x00037ff2) tabs_3_active_pane_ParamLimits

0x0bae,	// (0x00037ff2) tabs_3_active_pane

0x0bbe,	// (0x00038002) tabs_3_passive_pane_ParamLimits

0x0bbe,	// (0x00038002) tabs_3_passive_pane

0x0bcf,	// (0x00038013) tabs_3_passive_pane_cp_ParamLimits

0x0bcf,	// (0x00038013) tabs_3_passive_pane_cp

0x0b6a,	// (0x00037fae) tabs_4_active_pane_ParamLimits

0x0b6a,	// (0x00037fae) tabs_4_active_pane

0x0b7b,	// (0x00037fbf) tabs_4_passive_pane_ParamLimits

0x0b7b,	// (0x00037fbf) tabs_4_passive_pane

0x0b8c,	// (0x00037fd0) tabs_4_passive_pane_cp_ParamLimits

0x0b8c,	// (0x00037fd0) tabs_4_passive_pane_cp

0x0b9d,	// (0x00037fe1) tabs_4_passive_pane_cp2_ParamLimits

0x0b9d,	// (0x00037fe1) tabs_4_passive_pane_cp2

0x0b46,	// (0x00037f8a) tabs_2_long_active_pane_ParamLimits

0x0b46,	// (0x00037f8a) tabs_2_long_active_pane

0x0b58,	// (0x00037f9c) tabs_2_long_passive_pane_ParamLimits

0x0b58,	// (0x00037f9c) tabs_2_long_passive_pane

0x0b01,	// (0x00037f45) tabs_3_long_active_pane_ParamLimits

0x0b01,	// (0x00037f45) tabs_3_long_active_pane

0x0b1a,	// (0x00037f5e) tabs_3_long_passive_pane_ParamLimits

0x0b1a,	// (0x00037f5e) tabs_3_long_passive_pane

0x0b2d,	// (0x00037f71) tabs_3_long_passive_pane_cp_ParamLimits

0x0b2d,	// (0x00037f71) tabs_3_long_passive_pane_cp

0x0aa7,	// (0x00037eeb) volume_small_pane_g1

0x0ab0,	// (0x00037ef4) volume_small_pane_g2

0x0ab9,	// (0x00037efd) volume_small_pane_g3

0x0ac2,	// (0x00037f06) volume_small_pane_g4

0x0acb,	// (0x00037f0f) volume_small_pane_g5

0x0ad4,	// (0x00037f18) volume_small_pane_g6

0x0add,	// (0x00037f21) volume_small_pane_g7

0x0ae6,	// (0x00037f2a) volume_small_pane_g8

0x0aef,	// (0x00037f33) volume_small_pane_g9

0x0af8,	// (0x00037f3c) volume_small_pane_g10

0x0009,

0xf89b,	// (0x00046cdf) volume_small_pane_g

0xb425,	// (0x00042869) bg_active_tab_pane_cp2_ParamLimits

0xb425,	// (0x00042869) bg_active_tab_pane_cp2

0x8e7f,	// (0x000402c3) tabs_3_active_pane_g1

0x8e87,	// (0x000402cb) tabs_3_active_pane_t1

0xb425,	// (0x00042869) bg_passive_tab_pane_cp2_ParamLimits

0xb425,	// (0x00042869) bg_passive_tab_pane_cp2

0x8e7f,	// (0x000402c3) tabs_3_passive_pane_g1

0x8e87,	// (0x000402cb) tabs_3_passive_pane_t1

0xb425,	// (0x00042869) bg_active_tab_pane_cp3_ParamLimits

0xb425,	// (0x00042869) bg_active_tab_pane_cp3

0x8e99,	// (0x000402dd) tabs_4_active_pane_g1

0x8ea1,	// (0x000402e5) tabs_4_active_pane_t1

0xb425,	// (0x00042869) bg_passive_tab_pane_cp3_ParamLimits

0xb425,	// (0x00042869) bg_passive_tab_pane_cp3

0x8e99,	// (0x000402dd) tabs_4_1_passive_pane_g1

0x8ea1,	// (0x000402e5) tabs_4_1_passive_pane_t1

0x245f,	// (0x000398a3) list_highlight_pane_cp2

0xc7b7,	// (0x00043bfb) list_set_pane_ParamLimits

0xc7b7,	// (0x00043bfb) list_set_pane

0xc851,	// (0x00043c95) main_pane_set_t1_ParamLimits

0xc851,	// (0x00043c95) main_pane_set_t1

0xc871,	// (0x00043cb5) main_pane_set_t2_ParamLimits

0xc871,	// (0x00043cb5) main_pane_set_t2

0xc885,	// (0x00043cc9) main_pane_set_t3_ParamLimits

0xc885,	// (0x00043cc9) main_pane_set_t3

0xc897,	// (0x00043cdb) main_pane_set_t4_ParamLimits

0xc897,	// (0x00043cdb) main_pane_set_t4

0x0003,

0xf96b,	// (0x00046daf) main_pane_set_t_ParamLimits

0xf96b,	// (0x00046daf) main_pane_set_t

0xc8a9,	// (0x00043ced) setting_code_pane

0xc8b3,	// (0x00043cf7) setting_slider_graphic_pane

0xc8b3,	// (0x00043cf7) setting_slider_pane

0xc8b3,	// (0x00043cf7) setting_text_pane

0xc8b3,	// (0x00043cf7) setting_volume_pane

0x8eb3,	// (0x000402f7) volume_set_pane

0xb433,	// (0x00042877) bg_set_opt_pane_cp

0x8ebb,	// (0x000402ff) setting_slider_pane_t1

0x8ed4,	// (0x00040318) setting_slider_pane_t2

0x8eee,	// (0x00040332) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000469a2) setting_slider_pane_t

0x8f06,	// (0x0004034a) slider_set_pane

0xb3d7,	// (0x0004281b) bg_set_opt_pane_cp2

0xb441,	// (0x00042885) setting_slider_graphic_pane_g1

0x8f1c,	// (0x00040360) setting_slider_graphic_pane_t1

0x8f2c,	// (0x00040370) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000469a9) setting_slider_graphic_pane_t

0x8f3c,	// (0x00040380) slider_set_pane_cp

0xb3d7,	// (0x0004281b) input_focus_pane_cp1

0x3d02,	// (0x0003b146) list_set_text_pane

0xb3cd,	// (0x00042811) setting_text_pane_g1

0xb3d7,	// (0x0004281b) input_focus_pane_cp2

0xb3cd,	// (0x00042811) setting_code_pane_g1

0xb44a,	// (0x0004288e) setting_code_pane_t1

0xd225,	// (0x00044669) set_text_pane_t1_ParamLimits

0xd225,	// (0x00044669) set_text_pane_t1

0xb83d,	// (0x00042c81) set_opt_bg_pane_g1

0xb845,	// (0x00042c89) set_opt_bg_pane_g2

0xc76c,	// (0x00043bb0) set_opt_bg_pane_g3

0xb855,	// (0x00042c99) set_opt_bg_pane_g4

0xb85d,	// (0x00042ca1) set_opt_bg_pane_g5

0xb865,	// (0x00042ca9) set_opt_bg_pane_g6

0xc776,	// (0x00043bba) set_opt_bg_pane_g7

0xc77e,	// (0x00043bc2) set_opt_bg_pane_g8

0xc788,	// (0x00043bcc) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x00046d9c) set_opt_bg_pane_g

0xc75f,	// (0x00043ba3) slider_set_pane_g1

0x0c87,	// (0x000380cb) slider_set_pane_g2

0x0006,

0xf949,	// (0x00046d8d) slider_set_pane_g

0xa961,	// (0x00041da5) volume_set_pane_g1

0xa969,	// (0x00041dad) volume_set_pane_g2

0xa971,	// (0x00041db5) volume_set_pane_g3

0xa979,	// (0x00041dbd) volume_set_pane_g4

0xa981,	// (0x00041dc5) volume_set_pane_g5

0xa989,	// (0x00041dcd) volume_set_pane_g6

0xa991,	// (0x00041dd5) volume_set_pane_g7

0xa999,	// (0x00041ddd) volume_set_pane_g8

0xa9a1,	// (0x00041de5) volume_set_pane_g9

0xa9a9,	// (0x00041ded) volume_set_pane_g10

0x0009,

0xf921,	// (0x00046d65) volume_set_pane_g

0x8f44,	// (0x00040388) indicator_pane_ParamLimits

0x8f44,	// (0x00040388) indicator_pane

0x8f6c,	// (0x000403b0) main_idle_pane_g2_ParamLimits

0x8f6c,	// (0x000403b0) main_idle_pane_g2

0x8fa4,	// (0x000403e8) main_pane_idle_g1_ParamLimits

0x8fa4,	// (0x000403e8) main_pane_idle_g1

0xb458,	// (0x0004289c) popup_clock_digital_analogue_window_ParamLimits

0xb458,	// (0x0004289c) popup_clock_digital_analogue_window

0x8fcb,	// (0x0004040f) soft_indicator_pane_ParamLimits

0x8fcb,	// (0x0004040f) soft_indicator_pane

0x8fef,	// (0x00040433) wallpaper_pane_ParamLimits

0x8fef,	// (0x00040433) wallpaper_pane

0xb3cd,	// (0x00042811) wallpaper_pane_g1

0x9001,	// (0x00040445) indicator_pane_g1_ParamLimits

0x9001,	// (0x00040445) indicator_pane_g1

0x4106,	// (0x0003b54a) navi_navi_icon_text_pane_srt_g1

0xb486,	// (0x000428ca) soft_indicator_pane_t1

0xb4a0,	// (0x000428e4) aid_ps_area_pane

0x9017,	// (0x0004045b) aid_ps_clock_pane

0xb4b1,	// (0x000428f5) aid_ps_indicator_pane

0xb4bd,	// (0x00042901) indicator_ps_pane_ParamLimits

0xb4bd,	// (0x00042901) indicator_ps_pane

0xb4cc,	// (0x00042910) power_save_pane_g1_ParamLimits

0xb4cc,	// (0x00042910) power_save_pane_g1

0xb4d8,	// (0x0004291c) power_save_pane_g2_ParamLimits

0xb4d8,	// (0x0004291c) power_save_pane_g2

0xee06,	// (0x0004624a) aid_navinavi_width_pane

0xb4a0,	// (0x000428e4) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000469ae) power_save_pane_g_ParamLimits

0xf56a,	// (0x000469ae) power_save_pane_g

0xb4e6,	// (0x0004292a) power_save_pane_t1_ParamLimits

0xb4e6,	// (0x0004292a) power_save_pane_t1

0x9017,	// (0x0004045b) aid_ps_clock_pane_ParamLimits

0xb4b1,	// (0x000428f5) aid_ps_indicator_pane_ParamLimits

0xb4f8,	// (0x0004293c) power_save_pane_t4_ParamLimits

0xb4f8,	// (0x0004293c) power_save_pane_t4

0x0001,

0xf56f,	// (0x000469b3) power_save_pane_t_ParamLimits

0xf56f,	// (0x000469b3) power_save_pane_t

0xb522,	// (0x00042966) power_save_t3_ParamLimits

0xb522,	// (0x00042966) power_save_t3

0xb50d,	// (0x00042951) power_save_t2_ParamLimits

0xb50d,	// (0x00042951) power_save_t2

0xb537,	// (0x0004297b) indicator_ps_pane_g1

0x9025,	// (0x00040469) ai_gene_pane_ParamLimits

0x9025,	// (0x00040469) ai_gene_pane

0x903c,	// (0x00040480) ai_links_pane_ParamLimits

0x903c,	// (0x00040480) ai_links_pane

0x9054,	// (0x00040498) indicator_pane_cp1_ParamLimits

0x9054,	// (0x00040498) indicator_pane_cp1

0x9063,	// (0x000404a7) main_pane_idle_g1_cp_ParamLimits

0x9063,	// (0x000404a7) main_pane_idle_g1_cp

0x907b,	// (0x000404bf) popup_ai_links_title_window

0x9084,	// (0x000404c8) soft_indicator_pane_cp1_ParamLimits

0x9084,	// (0x000404c8) soft_indicator_pane_cp1

0x3ac9,	// (0x0003af0d) ai_links_pane_g1

0x3ad2,	// (0x0003af16) grid_ai_links_pane

0xc67c,	// (0x00043ac0) ai_gene_pane_1

0x3ab7,	// (0x0003aefb) ai_gene_pane_2

0x3ac0,	// (0x0003af04) list_highlight_pane_cp4

0xc658,	// (0x00043a9c) cell_ai_link_pane_ParamLimits

0xc658,	// (0x00043a9c) cell_ai_link_pane

0x3a88,	// (0x0003aecc) cell_ai_link_pane_g1

0xb664,	// (0x00042aa8) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00046d40) cell_ai_link_pane_g

0xb3d7,	// (0x0004281b) grid_highlight_cp2

0xb3d7,	// (0x0004281b) bg_popup_sub_pane_cp1

0xb54e,	// (0x00042992) popup_ai_links_title_window_t1

0x39d8,	// (0x0003ae1c) ai_gene_pane_1_g1_ParamLimits

0x39d8,	// (0x0003ae1c) ai_gene_pane_1_g1

0x39e4,	// (0x0003ae28) ai_gene_pane_1_g2_ParamLimits

0x39e4,	// (0x0003ae28) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00046d36) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00046d36) ai_gene_pane_1_g

0x39f1,	// (0x0003ae35) ai_gene_pane_1_t1_ParamLimits

0x39f1,	// (0x0003ae35) ai_gene_pane_1_t1

0x3a25,	// (0x0003ae69) grid_ai_soft_ind_pane

0x39c3,	// (0x0003ae07) ai_gene_pane_2_t1_ParamLimits

0x39c3,	// (0x0003ae07) ai_gene_pane_2_t1

0x9098,	// (0x000404dc) main_pane_empty_t1_ParamLimits

0x9098,	// (0x000404dc) main_pane_empty_t1

0x90b0,	// (0x000404f4) main_pane_empty_t2_ParamLimits

0x90b0,	// (0x000404f4) main_pane_empty_t2

0x90c5,	// (0x00040509) main_pane_empty_t3_ParamLimits

0x90c5,	// (0x00040509) main_pane_empty_t3

0x90d7,	// (0x0004051b) main_pane_empty_t4_ParamLimits

0x90d7,	// (0x0004051b) main_pane_empty_t4

0x90e9,	// (0x0004052d) main_pane_empty_t5_ParamLimits

0x90e9,	// (0x0004052d) main_pane_empty_t5

0x0004,

0xf574,	// (0x000469b8) main_pane_empty_t_ParamLimits

0xf574,	// (0x000469b8) main_pane_empty_t

0xb88e,	// (0x00042cd2) bg_popup_window_pane_ParamLimits

0xb88e,	// (0x00042cd2) bg_popup_window_pane

0xc5d2,	// (0x00043a16) find_popup_pane_cp2_ParamLimits

0xc5d2,	// (0x00043a16) find_popup_pane_cp2

0x373f,	// (0x0003ab83) heading_pane_ParamLimits

0x373f,	// (0x0003ab83) heading_pane

0xb3d7,	// (0x0004281b) bg_popup_sub_pane

0xc553,	// (0x00043997) bg_popup_window_pane_g1_ParamLimits

0xc553,	// (0x00043997) bg_popup_window_pane_g1

0xc562,	// (0x000439a6) bg_popup_window_pane_g2_ParamLimits

0xc562,	// (0x000439a6) bg_popup_window_pane_g2

0xc56e,	// (0x000439b2) bg_popup_window_pane_g3_ParamLimits

0xc56e,	// (0x000439b2) bg_popup_window_pane_g3

0xc57a,	// (0x000439be) bg_popup_window_pane_g4_ParamLimits

0xc57a,	// (0x000439be) bg_popup_window_pane_g4

0xc589,	// (0x000439cd) bg_popup_window_pane_g5_ParamLimits

0xc589,	// (0x000439cd) bg_popup_window_pane_g5

0xc599,	// (0x000439dd) bg_popup_window_pane_g6_ParamLimits

0xc599,	// (0x000439dd) bg_popup_window_pane_g6

0xc5a5,	// (0x000439e9) bg_popup_window_pane_g7_ParamLimits

0xc5a5,	// (0x000439e9) bg_popup_window_pane_g7

0xc5b4,	// (0x000439f8) bg_popup_window_pane_g8_ParamLimits

0xc5b4,	// (0x000439f8) bg_popup_window_pane_g8

0xc5c3,	// (0x00043a07) bg_popup_window_pane_g9_ParamLimits

0xc5c3,	// (0x00043a07) bg_popup_window_pane_g9

0x3719,	// (0x0003ab5d) bg_popup_window_pane_g10_ParamLimits

0x3719,	// (0x0003ab5d) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x00046cfe) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x00046cfe) bg_popup_window_pane_g

0x3642,	// (0x0003aa86) bg_popup_heading_pane_ParamLimits

0x3642,	// (0x0003aa86) bg_popup_heading_pane

0x0e17,	// (0x0003825b) tabs_4_passive_pane_cp_srt_ParamLimits

0x0e17,	// (0x0003825b) tabs_4_passive_pane_cp_srt

0x0e29,	// (0x0003826d) tabs_4_passive_pane_srt_ParamLimits

0x3656,	// (0x0003aa9a) heading_pane_g2

0x0e29,	// (0x0003826d) tabs_4_passive_pane_srt

0x29e0,	// (0x00039e24) bg_passive_tab_pane_cp3_srt_ParamLimits

0x29e0,	// (0x00039e24) bg_passive_tab_pane_cp3_srt

0x365e,	// (0x0003aaa2) heading_pane_t1_ParamLimits

0x365e,	// (0x0003aaa2) heading_pane_t1

0x3675,	// (0x0003aab9) heading_pane_t2_ParamLimits

0x3675,	// (0x0003aab9) heading_pane_t2

0x0001,

0xf8b5,	// (0x00046cf9) heading_pane_t_ParamLimits

0xf8b5,	// (0x00046cf9) heading_pane_t

0x317f,	// (0x0003a5c3) bg_popup_heading_pane_g1

0x322e,	// (0x0003a672) bg_popup_heading_pane_g2

0x3238,	// (0x0003a67c) bg_popup_heading_pane_g3

0x3242,	// (0x0003a686) bg_popup_heading_pane_g4

0x324c,	// (0x0003a690) bg_popup_heading_pane_g5

0x3256,	// (0x0003a69a) bg_popup_heading_pane_g6

0x325e,	// (0x0003a6a2) bg_popup_heading_pane_g7

0x3266,	// (0x0003a6aa) bg_popup_heading_pane_g8

0x3270,	// (0x0003a6b4) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x00046cb5) bg_popup_heading_pane_g

0x296c,	// (0x00039db0) bg_popup_sub_pane_g1

0x297c,	// (0x00039dc0) bg_popup_sub_pane_g2

0x2974,	// (0x00039db8) bg_popup_sub_pane_g3

0x298c,	// (0x00039dd0) bg_popup_sub_pane_g4

0x2984,	// (0x00039dc8) bg_popup_sub_pane_g5

0x2994,	// (0x00039dd8) bg_popup_sub_pane_g6

0x299c,	// (0x00039de0) bg_popup_sub_pane_g7

0x29ac,	// (0x00039df0) bg_popup_sub_pane_g8

0x29a4,	// (0x00039de8) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x00046c8f) bg_popup_sub_pane_g

0xb425,	// (0x00042869) bg_popup_window_pane_cp5_ParamLimits

0xb425,	// (0x00042869) bg_popup_window_pane_cp5

0xb56b,	// (0x000429af) popup_note_window_g1_ParamLimits

0xb56b,	// (0x000429af) popup_note_window_g1

0xb577,	// (0x000429bb) popup_note_window_t1_ParamLimits

0xb577,	// (0x000429bb) popup_note_window_t1

0xb58d,	// (0x000429d1) popup_note_window_t2_ParamLimits

0xb58d,	// (0x000429d1) popup_note_window_t2

0xb5a3,	// (0x000429e7) popup_note_window_t3_ParamLimits

0xb5a3,	// (0x000429e7) popup_note_window_t3

0xb5b9,	// (0x000429fd) popup_note_window_t4_ParamLimits

0xb5b9,	// (0x000429fd) popup_note_window_t4

0xb5e1,	// (0x00042a25) popup_note_window_t5_ParamLimits

0xb5e1,	// (0x00042a25) popup_note_window_t5

0x0004,

0xf57f,	// (0x000469c3) popup_note_window_t_ParamLimits

0xf57f,	// (0x000469c3) popup_note_window_t

0xb605,	// (0x00042a49) bg_popup_window_pane_cp6_ParamLimits

0xb605,	// (0x00042a49) bg_popup_window_pane_cp6

0x30fb,	// (0x0003a53f) popup_note_image_window_g1_ParamLimits

0x30fb,	// (0x0003a53f) popup_note_image_window_g1

0xc3f8,	// (0x0004383c) popup_note_image_window_g2_ParamLimits

0xc3f8,	// (0x0004383c) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x00046c83) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x00046c83) popup_note_image_window_g

0x3120,	// (0x0003a564) popup_note_image_window_t1_ParamLimits

0x3120,	// (0x0003a564) popup_note_image_window_t1

0x3139,	// (0x0003a57d) popup_note_image_window_t2_ParamLimits

0x3139,	// (0x0003a57d) popup_note_image_window_t2

0x3152,	// (0x0003a596) popup_note_image_window_t3_ParamLimits

0x3152,	// (0x0003a596) popup_note_image_window_t3

0x0002,

0xf844,	// (0x00046c88) popup_note_image_window_t_ParamLimits

0xf844,	// (0x00046c88) popup_note_image_window_t

0x2fc4,	// (0x0003a408) bg_popup_window_pane_cp7_ParamLimits

0x2fc4,	// (0x0003a408) bg_popup_window_pane_cp7

0x2ff4,	// (0x0003a438) popup_note_wait_window_g1_ParamLimits

0x2ff4,	// (0x0003a438) popup_note_wait_window_g1

0x3000,	// (0x0003a444) popup_note_wait_window_g2_ParamLimits

0x3000,	// (0x0003a444) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x00046c71) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x00046c71) popup_note_wait_window_g

0x3018,	// (0x0003a45c) popup_note_wait_window_t1_ParamLimits

0x3018,	// (0x0003a45c) popup_note_wait_window_t1

0xc399,	// (0x000437dd) popup_note_wait_window_t2_ParamLimits

0xc399,	// (0x000437dd) popup_note_wait_window_t2

0xc3b6,	// (0x000437fa) popup_note_wait_window_t3_ParamLimits

0xc3b6,	// (0x000437fa) popup_note_wait_window_t3

0xc3c9,	// (0x0004380d) popup_note_wait_window_t4_ParamLimits

0xc3c9,	// (0x0004380d) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x00046c78) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x00046c78) popup_note_wait_window_t

0x3094,	// (0x0003a4d8) wait_bar_pane_ParamLimits

0x3094,	// (0x0003a4d8) wait_bar_pane

0xb3d7,	// (0x0004281b) wait_anim_pane

0xb3d7,	// (0x0004281b) wait_border_pane

0xb3cd,	// (0x00042811) wait_anim_pane_g1

0xb3cd,	// (0x00042811) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00046b38) wait_anim_pane_g

0x2f70,	// (0x0003a3b4) wait_border_pane_g1

0x2f7b,	// (0x0003a3bf) wait_border_pane_g2

0x2f84,	// (0x0003a3c8) wait_border_pane_g3

0x0002,

0xf826,	// (0x00046c6a) wait_border_pane_g

0x2ddb,	// (0x0003a21f) bg_popup_window_pane_cp16_ParamLimits

0x2ddb,	// (0x0003a21f) bg_popup_window_pane_cp16

0xc349,	// (0x0004378d) indicator_popup_pane_cp4_ParamLimits

0xc349,	// (0x0004378d) indicator_popup_pane_cp4

0x2eef,	// (0x0003a333) popup_query_data_window_t1_ParamLimits

0x2eef,	// (0x0003a333) popup_query_data_window_t1

0x2f01,	// (0x0003a345) popup_query_data_window_t2_ParamLimits

0x2f01,	// (0x0003a345) popup_query_data_window_t2

0x2f1a,	// (0x0003a35e) popup_query_data_window_t3_ParamLimits

0x2f1a,	// (0x0003a35e) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x00046c63) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x00046c63) popup_query_data_window_t

0xc35d,	// (0x000437a1) query_popup_data_pane_ParamLimits

0xc35d,	// (0x000437a1) query_popup_data_pane

0xc371,	// (0x000437b5) query_popup_data_pane_cp1_ParamLimits

0xc371,	// (0x000437b5) query_popup_data_pane_cp1

0x2ddb,	// (0x0003a21f) bg_popup_window_pane_cp10_ParamLimits

0x2ddb,	// (0x0003a21f) bg_popup_window_pane_cp10

0xc2c4,	// (0x00043708) indicator_popup_pane_ParamLimits

0xc2c4,	// (0x00043708) indicator_popup_pane

0xc2e6,	// (0x0004372a) popup_query_code_window_t1_ParamLimits

0xc2e6,	// (0x0004372a) popup_query_code_window_t1

0xc300,	// (0x00043744) popup_query_code_window_t2_ParamLimits

0xc300,	// (0x00043744) popup_query_code_window_t2

0x2e92,	// (0x0003a2d6) popup_query_code_window_t3_ParamLimits

0x2e92,	// (0x0003a2d6) popup_query_code_window_t3

0x0002,

0xf818,	// (0x00046c5c) popup_query_code_window_t_ParamLimits

0xf818,	// (0x00046c5c) popup_query_code_window_t

0x2ec1,	// (0x0003a305) query_popup_pane_ParamLimits

0x2ec1,	// (0x0003a305) query_popup_pane

0xb605,	// (0x00042a49) bg_popup_window_pane_cp15_ParamLimits

0xb605,	// (0x00042a49) bg_popup_window_pane_cp15

0x90fb,	// (0x0004053f) indicator_popup_pane_cp1_ParamLimits

0x90fb,	// (0x0004053f) indicator_popup_pane_cp1

0x910e,	// (0x00040552) indicator_popup_pane_cp2_ParamLimits

0x910e,	// (0x00040552) indicator_popup_pane_cp2

0x9121,	// (0x00040565) popup_query_data_code_window_g1_ParamLimits

0x9121,	// (0x00040565) popup_query_data_code_window_g1

0xb623,	// (0x00042a67) popup_query_data_code_window_t1_ParamLimits

0xb623,	// (0x00042a67) popup_query_data_code_window_t1

0xb635,	// (0x00042a79) popup_query_data_code_window_t2_ParamLimits

0xb635,	// (0x00042a79) popup_query_data_code_window_t2

0x9134,	// (0x00040578) popup_query_data_code_window_t3_ParamLimits

0x9134,	// (0x00040578) popup_query_data_code_window_t3

0x914a,	// (0x0004058e) popup_query_data_code_window_t4_ParamLimits

0x914a,	// (0x0004058e) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000469ce) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000469ce) popup_query_data_code_window_t

0x0985,	// (0x00037dc9) list_single_midp_graphic_pane_g3

0x9162,	// (0x000405a6) query_popup_data_pane_cp2_ParamLimits

0x9175,	// (0x000405b9) query_popup_pane_cp2_ParamLimits

0x9175,	// (0x000405b9) query_popup_pane_cp2

0xb3d7,	// (0x0004281b) bg_popup_window_pane_cp11

0x2dd3,	// (0x0003a217) heading_pane_cp5

0xb691,	// (0x00042ad5) listscroll_popup_info_pane

0xb3d7,	// (0x0004281b) input_focus_pane_cp3

0xb647,	// (0x00042a8b) query_popup_pane_t1

0xb655,	// (0x00042a99) list_popup_info_pane_ParamLimits

0xb655,	// (0x00042a99) list_popup_info_pane

0xb664,	// (0x00042aa8) listscroll_popup_info_pane_g1

0xb66c,	// (0x00042ab0) scroll_pane_cp7

0x9188,	// (0x000405cc) popup_info_list_pane_t1_ParamLimits

0x9188,	// (0x000405cc) popup_info_list_pane_t1

0x91a2,	// (0x000405e6) popup_info_list_pane_t2_ParamLimits

0x91a2,	// (0x000405e6) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000469d7) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000469d7) popup_info_list_pane_t

0xb3d7,	// (0x0004281b) bg_popup_window_pane_cp12

0xca70,	// (0x00043eb4) find_popup_pane

0xb433,	// (0x00042877) bg_popup_window_pane_cp3

0xb676,	// (0x00042aba) heading_pane_cp3

0xb682,	// (0x00042ac6) listscroll_popup_graphic_pane

0xb3d7,	// (0x0004281b) bg_popup_window_pane_cp4

0x920c,	// (0x00040650) heading_pane_cp4

0xb691,	// (0x00042ad5) listscroll_popup_colour_pane

0x9214,	// (0x00040658) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9214,	// (0x00040658) cell_large_graphic_colour_none_popup_pane

0x9228,	// (0x0004066c) grid_large_graphic_colour_popup_pane_ParamLimits

0x9228,	// (0x0004066c) grid_large_graphic_colour_popup_pane

0x924c,	// (0x00040690) listscroll_popup_colour_pane_g1_ParamLimits

0x924c,	// (0x00040690) listscroll_popup_colour_pane_g1

0x9263,	// (0x000406a7) listscroll_popup_colour_pane_g2_ParamLimits

0x9263,	// (0x000406a7) listscroll_popup_colour_pane_g2

0x927a,	// (0x000406be) listscroll_popup_colour_pane_g3_ParamLimits

0x927a,	// (0x000406be) listscroll_popup_colour_pane_g3

0x928a,	// (0x000406ce) listscroll_popup_colour_pane_g4_ParamLimits

0x928a,	// (0x000406ce) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000469dc) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000469dc) listscroll_popup_colour_pane_g

0xb699,	// (0x00042add) scroll_pane_cp6_ParamLimits

0xb699,	// (0x00042add) scroll_pane_cp6

0x929a,	// (0x000406de) cell_large_graphic_colour_popup_pane_ParamLimits

0x929a,	// (0x000406de) cell_large_graphic_colour_popup_pane

0x92b9,	// (0x000406fd) cell_large_graphic_colour_none_popup_pane_t1

0xb3d7,	// (0x0004281b) grid_highlight_pane_cp5

0xb6ab,	// (0x00042aef) cell_large_graphic_colour_popup_pane_g1

0xb6b3,	// (0x00042af7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000469e5) cell_large_graphic_colour_popup_pane_g

0xb6bb,	// (0x00042aff) cell_large_graphic_colour_popup_pane_g2_copy1

0xb6c4,	// (0x00042b08) grid_highlight_pane_cp4

0xb6cc,	// (0x00042b10) bg_popup_window_pane_cp8_ParamLimits

0xb6cc,	// (0x00042b10) bg_popup_window_pane_cp8

0x92c8,	// (0x0004070c) popup_snote_single_text_window_g1_ParamLimits

0x92c8,	// (0x0004070c) popup_snote_single_text_window_g1

0x92da,	// (0x0004071e) popup_snote_single_text_window_t1_ParamLimits

0x92da,	// (0x0004071e) popup_snote_single_text_window_t1

0x92ed,	// (0x00040731) popup_snote_single_text_window_t2_ParamLimits

0x92ed,	// (0x00040731) popup_snote_single_text_window_t2

0x9300,	// (0x00040744) popup_snote_single_text_window_t3_ParamLimits

0x9300,	// (0x00040744) popup_snote_single_text_window_t3

0x9339,	// (0x0004077d) popup_snote_single_text_window_t4_ParamLimits

0x9339,	// (0x0004077d) popup_snote_single_text_window_t4

0x936d,	// (0x000407b1) popup_snote_single_text_window_t5_ParamLimits

0x936d,	// (0x000407b1) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000469ea) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000469ea) popup_snote_single_text_window_t

0xb6e7,	// (0x00042b2b) bg_popup_window_pane_cp9_ParamLimits

0xb6e7,	// (0x00042b2b) bg_popup_window_pane_cp9

0x92c8,	// (0x0004070c) popup_snote_single_graphic_window_g1_ParamLimits

0x92c8,	// (0x0004070c) popup_snote_single_graphic_window_g1

0xb6f5,	// (0x00042b39) popup_snote_single_graphic_window_g2_ParamLimits

0xb6f5,	// (0x00042b39) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000469f5) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000469f5) popup_snote_single_graphic_window_g

0xb701,	// (0x00042b45) popup_snote_single_graphic_window_t1_ParamLimits

0xb701,	// (0x00042b45) popup_snote_single_graphic_window_t1

0xb714,	// (0x00042b58) popup_snote_single_graphic_window_t2_ParamLimits

0xb714,	// (0x00042b58) popup_snote_single_graphic_window_t2

0x9300,	// (0x00040744) popup_snote_single_graphic_window_t3_ParamLimits

0x9300,	// (0x00040744) popup_snote_single_graphic_window_t3

0x9339,	// (0x0004077d) popup_snote_single_graphic_window_t4_ParamLimits

0x9339,	// (0x0004077d) popup_snote_single_graphic_window_t4

0x939c,	// (0x000407e0) popup_snote_single_graphic_window_t5_ParamLimits

0x939c,	// (0x000407e0) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000469fa) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000469fa) popup_snote_single_graphic_window_t

0x4062,	// (0x0003b4a6) grid_graphic_popup_pane_ParamLimits

0x4062,	// (0x0003b4a6) grid_graphic_popup_pane

0x408c,	// (0x0003b4d0) listscroll_popup_graphic_pane_g1_ParamLimits

0x408c,	// (0x0003b4d0) listscroll_popup_graphic_pane_g1

0xca0e,	// (0x00043e52) listscroll_popup_graphic_pane_g2_ParamLimits

0xca0e,	// (0x00043e52) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00046dd9) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00046dd9) listscroll_popup_graphic_pane_g

0x40b4,	// (0x0003b4f8) scroll_pane_cp5

0xc9b3,	// (0x00043df7) cell_graphic_popup_pane_ParamLimits

0xc9b3,	// (0x00043df7) cell_graphic_popup_pane

0x3fe2,	// (0x0003b426) cell_graphic_popup_pane_g1

0x3fea,	// (0x0003b42e) cell_graphic_popup_pane_g2

0xb6bb,	// (0x00042aff) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00046dd2) cell_graphic_popup_pane_g

0x3ff3,	// (0x0003b437) cell_graphic_popup_pane_t2

0xb6c4,	// (0x00042b08) grid_highlight_pane_cp3

0xb739,	// (0x00042b7d) list_gen_pane_ParamLimits

0xb739,	// (0x00042b7d) list_gen_pane

0xb761,	// (0x00042ba5) scroll_pane

0xc91d,	// (0x00043d61) bg_list_pane_g1_ParamLimits

0xc91d,	// (0x00043d61) bg_list_pane_g1

0xc938,	// (0x00043d7c) bg_list_pane_g2_ParamLimits

0xc938,	// (0x00043d7c) bg_list_pane_g2

0xc94b,	// (0x00043d8f) bg_list_pane_g3_ParamLimits

0xc94b,	// (0x00043d8f) bg_list_pane_g3

0xc95d,	// (0x00043da1) bg_list_pane_g4_ParamLimits

0xc95d,	// (0x00043da1) bg_list_pane_g4

0xc96f,	// (0x00043db3) bg_list_pane_g5_ParamLimits

0xc96f,	// (0x00043db3) bg_list_pane_g5

0x0004,

0xf983,	// (0x00046dc7) bg_list_pane_g_ParamLimits

0xf983,	// (0x00046dc7) bg_list_pane_g

0xc8e6,	// (0x00043d2a) list_double2_graphic_large_graphic_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double2_graphic_large_graphic_pane

0xc8e6,	// (0x00043d2a) list_double2_graphic_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double2_graphic_pane

0xc8e6,	// (0x00043d2a) list_double2_large_graphic_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double2_large_graphic_pane

0xc8e6,	// (0x00043d2a) list_double2_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double2_pane

0xc8e6,	// (0x00043d2a) list_double_graphic_heading_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double_graphic_heading_pane

0xc8e6,	// (0x00043d2a) list_double_graphic_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double_graphic_pane

0xc8e6,	// (0x00043d2a) list_double_heading_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double_heading_pane

0xc8e6,	// (0x00043d2a) list_double_large_graphic_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double_large_graphic_pane

0xc8e6,	// (0x00043d2a) list_double_number_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double_number_pane

0xc8e6,	// (0x00043d2a) list_double_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double_pane

0xc8e6,	// (0x00043d2a) list_double_time_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_double_time_pane

0xc8e6,	// (0x00043d2a) list_setting_number_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_setting_number_pane

0xc8e6,	// (0x00043d2a) list_setting_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_setting_pane

0xaa71,	// (0x00041eb5) list_single_2graphic_pane_ParamLimits

0xaa71,	// (0x00041eb5) list_single_2graphic_pane

0xaa71,	// (0x00041eb5) list_single_graphic_heading_pane_ParamLimits

0xaa71,	// (0x00041eb5) list_single_graphic_heading_pane

0xaa71,	// (0x00041eb5) list_single_graphic_pane_ParamLimits

0xaa71,	// (0x00041eb5) list_single_graphic_pane

0xaa71,	// (0x00041eb5) list_single_heading_pane_ParamLimits

0xaa71,	// (0x00041eb5) list_single_heading_pane

0xc8e6,	// (0x00043d2a) list_single_large_graphic_pane_ParamLimits

0xc8e6,	// (0x00043d2a) list_single_large_graphic_pane

0xaa71,	// (0x00041eb5) list_single_number_heading_pane_ParamLimits

0xaa71,	// (0x00041eb5) list_single_number_heading_pane

0xaa71,	// (0x00041eb5) list_single_number_pane_ParamLimits

0xaa71,	// (0x00041eb5) list_single_number_pane

0xaa71,	// (0x00041eb5) list_single_pane_ParamLimits

0xaa71,	// (0x00041eb5) list_single_pane

0xb3d7,	// (0x0004281b) list_highlight_pane_cp1

0xd24c,	// (0x00044690) list_single_pane_g1_ParamLimits

0xd24c,	// (0x00044690) list_single_pane_g1

0xd258,	// (0x0004469c) list_single_pane_g2_ParamLimits

0xd258,	// (0x0004469c) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_single_pane_g

0xaa5b,	// (0x00041e9f) list_single_pane_t1_ParamLimits

0xaa5b,	// (0x00041e9f) list_single_pane_t1

0xd24c,	// (0x00044690) list_single_number_pane_g1_ParamLimits

0xd24c,	// (0x00044690) list_single_number_pane_g1

0xd258,	// (0x0004469c) list_single_number_pane_g2_ParamLimits

0xd258,	// (0x0004469c) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_single_number_pane_g

0xd264,	// (0x000446a8) list_single_number_pane_t1_ParamLimits

0xd264,	// (0x000446a8) list_single_number_pane_t1

0xa9b1,	// (0x00041df5) list_single_number_pane_t2_ParamLimits

0xa9b1,	// (0x00041df5) list_single_number_pane_t2

0x0001,

0xf944,	// (0x00046d88) list_single_number_pane_t_ParamLimits

0xf944,	// (0x00046d88) list_single_number_pane_t

0xd240,	// (0x00044684) list_single_graphic_pane_g1_ParamLimits

0xd240,	// (0x00044684) list_single_graphic_pane_g1

0xd24c,	// (0x00044690) list_single_graphic_pane_g2_ParamLimits

0xd24c,	// (0x00044690) list_single_graphic_pane_g2

0xd258,	// (0x0004469c) list_single_graphic_pane_g3_ParamLimits

0xd258,	// (0x0004469c) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00046a05) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00046a05) list_single_graphic_pane_g

0xd264,	// (0x000446a8) list_single_graphic_pane_t1_ParamLimits

0xd264,	// (0x000446a8) list_single_graphic_pane_t1

0xd24c,	// (0x00044690) list_single_heading_pane_g1_ParamLimits

0xd24c,	// (0x00044690) list_single_heading_pane_g1

0xd258,	// (0x0004469c) list_single_heading_pane_g2_ParamLimits

0xd258,	// (0x0004469c) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_single_heading_pane_g

0xd27a,	// (0x000446be) list_single_heading_pane_t1_ParamLimits

0xd27a,	// (0x000446be) list_single_heading_pane_t1

0xd290,	// (0x000446d4) list_single_heading_pane_t2_ParamLimits

0xd290,	// (0x000446d4) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00046a11) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00046a11) list_single_heading_pane_t

0xd24c,	// (0x00044690) list_single_number_heading_pane_g1_ParamLimits

0xd24c,	// (0x00044690) list_single_number_heading_pane_g1

0xd258,	// (0x0004469c) list_single_number_heading_pane_g2_ParamLimits

0xd258,	// (0x0004469c) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_single_number_heading_pane_g

0xd27a,	// (0x000446be) list_single_number_heading_pane_t1_ParamLimits

0xd27a,	// (0x000446be) list_single_number_heading_pane_t1

0xd2a2,	// (0x000446e6) list_single_number_heading_pane_t2_ParamLimits

0xd2a2,	// (0x000446e6) list_single_number_heading_pane_t2

0xd2b4,	// (0x000446f8) list_single_number_heading_pane_t3_ParamLimits

0xd2b4,	// (0x000446f8) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00046a16) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00046a16) list_single_number_heading_pane_t

0xd2c6,	// (0x0004470a) list_single_graphic_heading_pane_g1_ParamLimits

0xd2c6,	// (0x0004470a) list_single_graphic_heading_pane_g1

0x93d5,	// (0x00040819) list_single_graphic_heading_pane_g4_ParamLimits

0x93d5,	// (0x00040819) list_single_graphic_heading_pane_g4

0xd258,	// (0x0004469c) list_single_graphic_heading_pane_g5_ParamLimits

0xd258,	// (0x0004469c) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00046a1d) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00046a1d) list_single_graphic_heading_pane_g

0xd27a,	// (0x000446be) list_single_graphic_heading_pane_t1_ParamLimits

0xd27a,	// (0x000446be) list_single_graphic_heading_pane_t1

0x93e6,	// (0x0004082a) list_single_graphic_heading_pane_t2_ParamLimits

0x93e6,	// (0x0004082a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00046a24) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00046a24) list_single_graphic_heading_pane_t

0xd2d2,	// (0x00044716) list_single_large_graphic_pane_g1_ParamLimits

0xd2d2,	// (0x00044716) list_single_large_graphic_pane_g1

0xd2de,	// (0x00044722) list_single_large_graphic_pane_g2_ParamLimits

0xd2de,	// (0x00044722) list_single_large_graphic_pane_g2

0xd2ea,	// (0x0004472e) list_single_large_graphic_pane_g3_ParamLimits

0xd2ea,	// (0x0004472e) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00046a29) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00046a29) list_single_large_graphic_pane_g

0x2f7b,	// (0x0003a3bf) wait_border_pane_g2_copy1

0x93f8,	// (0x0004083c) list_single_large_graphic_pane_g4_cp2

0xd2f6,	// (0x0004473a) list_single_large_graphic_pane_t1_ParamLimits

0xd2f6,	// (0x0004473a) list_single_large_graphic_pane_t1

0x9400,	// (0x00040844) list_double_pane_g1_ParamLimits

0x9400,	// (0x00040844) list_double_pane_g1

0xd30c,	// (0x00044750) list_double_pane_g2_ParamLimits

0xd30c,	// (0x00044750) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00046a30) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00046a30) list_double_pane_g

0x940c,	// (0x00040850) list_double_pane_t1_ParamLimits

0x940c,	// (0x00040850) list_double_pane_t1

0x9422,	// (0x00040866) list_double_pane_t2_ParamLimits

0x9422,	// (0x00040866) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00046a35) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00046a35) list_double_pane_t

0x9434,	// (0x00040878) list_double2_pane_g1_ParamLimits

0x9434,	// (0x00040878) list_double2_pane_g1

0xd30c,	// (0x00044750) list_double2_pane_g2_ParamLimits

0xd30c,	// (0x00044750) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00046a3a) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00046a3a) list_double2_pane_g

0x940c,	// (0x00040850) list_double2_pane_t1_ParamLimits

0x940c,	// (0x00040850) list_double2_pane_t1

0x9445,	// (0x00040889) list_double2_pane_t2_ParamLimits

0x9445,	// (0x00040889) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00046a3f) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00046a3f) list_double2_pane_t

0x9400,	// (0x00040844) list_double_number_pane_g1_ParamLimits

0x9400,	// (0x00040844) list_double_number_pane_g1

0xd30c,	// (0x00044750) list_double_number_pane_g2_ParamLimits

0xd30c,	// (0x00044750) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00046a30) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00046a30) list_double_number_pane_g

0x9457,	// (0x0004089b) list_double_number_pane_t1_ParamLimits

0x9457,	// (0x0004089b) list_double_number_pane_t1

0x9469,	// (0x000408ad) list_double_number_pane_t2_ParamLimits

0x9469,	// (0x000408ad) list_double_number_pane_t2

0x947f,	// (0x000408c3) list_double_number_pane_t3_ParamLimits

0x947f,	// (0x000408c3) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00046a44) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00046a44) list_double_number_pane_t

0x9491,	// (0x000408d5) list_double_graphic_pane_g1_ParamLimits

0x9491,	// (0x000408d5) list_double_graphic_pane_g1

0x949d,	// (0x000408e1) list_double_graphic_pane_g2_ParamLimits

0x949d,	// (0x000408e1) list_double_graphic_pane_g2

0x94ac,	// (0x000408f0) list_double_graphic_pane_g3_ParamLimits

0x94ac,	// (0x000408f0) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00046a4b) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00046a4b) list_double_graphic_pane_g

0x9469,	// (0x000408ad) list_double_graphic_pane_t1_ParamLimits

0x9469,	// (0x000408ad) list_double_graphic_pane_t1

0x947f,	// (0x000408c3) list_double_graphic_pane_t2_ParamLimits

0x947f,	// (0x000408c3) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00046a54) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00046a54) list_double_graphic_pane_t

0x9491,	// (0x000408d5) list_double2_graphic_pane_g1_ParamLimits

0x9491,	// (0x000408d5) list_double2_graphic_pane_g1

0x94c4,	// (0x00040908) list_double2_graphic_pane_g2_ParamLimits

0x94c4,	// (0x00040908) list_double2_graphic_pane_g2

0x94d0,	// (0x00040914) list_double2_graphic_pane_g3_ParamLimits

0x94d0,	// (0x00040914) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00046a59) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00046a59) list_double2_graphic_pane_g

0x9469,	// (0x000408ad) list_double2_graphic_pane_t1_ParamLimits

0x9469,	// (0x000408ad) list_double2_graphic_pane_t1

0x94dc,	// (0x00040920) list_double2_graphic_pane_t2_ParamLimits

0x94dc,	// (0x00040920) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00046a60) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00046a60) list_double2_graphic_pane_t

0x94ee,	// (0x00040932) list_double_large_graphic_pane_g1_ParamLimits

0x94ee,	// (0x00040932) list_double_large_graphic_pane_g1

0x9434,	// (0x00040878) list_double_large_graphic_pane_g2_ParamLimits

0x9434,	// (0x00040878) list_double_large_graphic_pane_g2

0xd30c,	// (0x00044750) list_double_large_graphic_pane_g3_ParamLimits

0xd30c,	// (0x00044750) list_double_large_graphic_pane_g3

0x950d,	// (0x00040951) list_double_large_graphic_pane_g4_ParamLimits

0x950d,	// (0x00040951) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00046a65) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00046a65) list_double_large_graphic_pane_g

0x9520,	// (0x00040964) list_double_large_graphic_pane_t1_ParamLimits

0x9520,	// (0x00040964) list_double_large_graphic_pane_t1

0x9539,	// (0x0004097d) list_double_large_graphic_pane_t2_ParamLimits

0x9539,	// (0x0004097d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00046a70) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00046a70) list_double_large_graphic_pane_t

0x954b,	// (0x0004098f) list_double2_large_graphic_pane_g1_ParamLimits

0x954b,	// (0x0004098f) list_double2_large_graphic_pane_g1

0x9434,	// (0x00040878) list_double2_large_graphic_pane_g2_ParamLimits

0x9434,	// (0x00040878) list_double2_large_graphic_pane_g2

0xd30c,	// (0x00044750) list_double2_large_graphic_pane_g3_ParamLimits

0xd30c,	// (0x00044750) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00046a75) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00046a75) list_double2_large_graphic_pane_g

0x9469,	// (0x000408ad) list_double2_large_graphic_pane_t1_ParamLimits

0x9469,	// (0x000408ad) list_double2_large_graphic_pane_t1

0x94dc,	// (0x00040920) list_double2_large_graphic_pane_t2_ParamLimits

0x94dc,	// (0x00040920) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x00046a60) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x00046a60) list_double2_large_graphic_pane_t

0x9557,	// (0x0004099b) list_double_heading_pane_g1_ParamLimits

0x9557,	// (0x0004099b) list_double_heading_pane_g1

0x9568,	// (0x000409ac) list_double_heading_pane_g2_ParamLimits

0x9568,	// (0x000409ac) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x00046a7c) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x00046a7c) list_double_heading_pane_g

0x9574,	// (0x000409b8) list_double_heading_pane_t1_ParamLimits

0x9574,	// (0x000409b8) list_double_heading_pane_t1

0x94dc,	// (0x00040920) list_double_heading_pane_t2_ParamLimits

0x94dc,	// (0x00040920) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x00046a81) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x00046a81) list_double_heading_pane_t

0x958a,	// (0x000409ce) list_double_graphic_heading_pane_g1_ParamLimits

0x958a,	// (0x000409ce) list_double_graphic_heading_pane_g1

0x9557,	// (0x0004099b) list_double_graphic_heading_pane_g2_ParamLimits

0x9557,	// (0x0004099b) list_double_graphic_heading_pane_g2

0x9568,	// (0x000409ac) list_double_graphic_heading_pane_g3_ParamLimits

0x9568,	// (0x000409ac) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x00046a86) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x00046a86) list_double_graphic_heading_pane_g

0x9574,	// (0x000409b8) list_double_graphic_heading_pane_t1_ParamLimits

0x9574,	// (0x000409b8) list_double_graphic_heading_pane_t1

0x94dc,	// (0x00040920) list_double_graphic_heading_pane_t2_ParamLimits

0x94dc,	// (0x00040920) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x00046a81) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x00046a81) list_double_graphic_heading_pane_t

0x9434,	// (0x00040878) list_double_time_pane_g1_ParamLimits

0x9434,	// (0x00040878) list_double_time_pane_g1

0xd30c,	// (0x00044750) list_double_time_pane_g2_ParamLimits

0xd30c,	// (0x00044750) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x00046a3a) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x00046a3a) list_double_time_pane_g

0x9596,	// (0x000409da) list_double_time_pane_t1_ParamLimits

0x9596,	// (0x000409da) list_double_time_pane_t1

0x95ac,	// (0x000409f0) list_double_time_pane_t2_ParamLimits

0x95ac,	// (0x000409f0) list_double_time_pane_t2

0x95be,	// (0x00040a02) list_double_time_pane_t3_ParamLimits

0x95be,	// (0x00040a02) list_double_time_pane_t3

0x95d0,	// (0x00040a14) list_double_time_pane_t4_ParamLimits

0x95d0,	// (0x00040a14) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00046a8d) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00046a8d) list_double_time_pane_t

0x95e2,	// (0x00040a26) list_setting_pane_g1_ParamLimits

0x95e2,	// (0x00040a26) list_setting_pane_g1

0x95ee,	// (0x00040a32) list_setting_pane_g2_ParamLimits

0x95ee,	// (0x00040a32) list_setting_pane_g2

0x0001,

0xf652,	// (0x00046a96) list_setting_pane_g_ParamLimits

0xf652,	// (0x00046a96) list_setting_pane_g

0x95fa,	// (0x00040a3e) list_setting_pane_t1_ParamLimits

0x95fa,	// (0x00040a3e) list_setting_pane_t1

0x9614,	// (0x00040a58) list_setting_pane_t2_ParamLimits

0x9614,	// (0x00040a58) list_setting_pane_t2

0x0002,

0xf657,	// (0x00046a9b) list_setting_pane_t_ParamLimits

0xf657,	// (0x00046a9b) list_setting_pane_t

0x9653,	// (0x00040a97) set_value_pane_cp_ParamLimits

0x9653,	// (0x00040a97) set_value_pane_cp

0x965f,	// (0x00040aa3) list_setting_number_pane_g1_ParamLimits

0x965f,	// (0x00040aa3) list_setting_number_pane_g1

0x966b,	// (0x00040aaf) list_setting_number_pane_g2_ParamLimits

0x966b,	// (0x00040aaf) list_setting_number_pane_g2

0x0001,

0xf65e,	// (0x00046aa2) list_setting_number_pane_g_ParamLimits

0xf65e,	// (0x00046aa2) list_setting_number_pane_g

0x9677,	// (0x00040abb) list_setting_number_pane_t1_ParamLimits

0x9677,	// (0x00040abb) list_setting_number_pane_t1

0x9690,	// (0x00040ad4) list_setting_number_pane_t2_ParamLimits

0x9690,	// (0x00040ad4) list_setting_number_pane_t2

0x96aa,	// (0x00040aee) list_setting_number_pane_t3_ParamLimits

0x96aa,	// (0x00040aee) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x00046aa7) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x00046aa7) list_setting_number_pane_t

0x9653,	// (0x00040a97) set_value_pane_ParamLimits

0x9653,	// (0x00040a97) set_value_pane

0xb795,	// (0x00042bd9) bg_set_opt_pane_ParamLimits

0xb795,	// (0x00042bd9) bg_set_opt_pane

0x96ed,	// (0x00040b31) set_value_pane_t1

0xb7b6,	// (0x00042bfa) slider_set_pane_cp3

0x96fb,	// (0x00040b3f) volume_small_pane_cp

0xb7bf,	// (0x00042c03) list_form_gen_pane

0xb7c8,	// (0x00042c0c) scroll_pane_cp8

0x9704,	// (0x00040b48) form_field_data_pane_ParamLimits

0x9704,	// (0x00040b48) form_field_data_pane

0x971b,	// (0x00040b5f) form_field_data_wide_pane_ParamLimits

0x971b,	// (0x00040b5f) form_field_data_wide_pane

0x973b,	// (0x00040b7f) form_field_popup_pane_ParamLimits

0x973b,	// (0x00040b7f) form_field_popup_pane

0x9753,	// (0x00040b97) form_field_popup_wide_pane_ParamLimits

0x9753,	// (0x00040b97) form_field_popup_wide_pane

0xd33d,	// (0x00044781) form_field_slider_pane_ParamLimits

0xd33d,	// (0x00044781) form_field_slider_pane

0x976a,	// (0x00040bae) form_field_slider_wide_pane_ParamLimits

0x976a,	// (0x00040bae) form_field_slider_wide_pane

0xb7d9,	// (0x00042c1d) data_form_pane

0x9787,	// (0x00040bcb) form_field_data_pane_t1

0xb7e5,	// (0x00042c29) input_focus_pane

0x97a1,	// (0x00040be5) data_form_wide_pane

0x97be,	// (0x00040c02) form_field_data_wide_pane_t1

0xb6d9,	// (0x00042b1d) input_focus_pane_cp6

0x97e0,	// (0x00040c24) form_field_popup_pane_t1

0xb7e5,	// (0x00042c29) input_focus_pane_cp7

0xb813,	// (0x00042c57) list_form_pane

0x9802,	// (0x00040c46) form_field_popup_wide_pane_t1

0xb7e5,	// (0x00042c29) input_focus_pane_cp8

0xb81f,	// (0x00042c63) list_form_wide_pane

0x981f,	// (0x00040c63) form_field_slider_pane_t1_ParamLimits

0x981f,	// (0x00040c63) form_field_slider_pane_t1

0x9837,	// (0x00040c7b) form_field_slider_pane_t2_ParamLimits

0x9837,	// (0x00040c7b) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x00046ab7) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x00046ab7) form_field_slider_pane_t

0xb425,	// (0x00042869) input_focus_pane_cp9_ParamLimits

0xb425,	// (0x00042869) input_focus_pane_cp9

0x984c,	// (0x00040c90) slider_cont_pane_ParamLimits

0x984c,	// (0x00040c90) slider_cont_pane

0xb82b,	// (0x00042c6f) form_field_slider_wide_pane_t1_ParamLimits

0xb82b,	// (0x00042c6f) form_field_slider_wide_pane_t1

0x9860,	// (0x00040ca4) form_field_slider_wide_pane_t2_ParamLimits

0x9860,	// (0x00040ca4) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x00046abc) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x00046abc) form_field_slider_wide_pane_t

0xb425,	// (0x00042869) input_focus_pane_cp10_ParamLimits

0xb425,	// (0x00042869) input_focus_pane_cp10

0x9872,	// (0x00040cb6) slider_cont_pane_cp1_ParamLimits

0x9872,	// (0x00040cb6) slider_cont_pane_cp1

0x9886,	// (0x00040cca) slider_form_pane_cp

0xb83d,	// (0x00042c81) input_focus_pane_g1

0xb845,	// (0x00042c89) input_focus_pane_g2

0xb84d,	// (0x00042c91) input_focus_pane_g3

0xb855,	// (0x00042c99) input_focus_pane_g4

0xb85d,	// (0x00042ca1) input_focus_pane_g5

0xb865,	// (0x00042ca9) input_focus_pane_g6

0xb86d,	// (0x00042cb1) input_focus_pane_g7

0xb875,	// (0x00042cb9) input_focus_pane_g8

0xb87d,	// (0x00042cc1) input_focus_pane_g9

0xb3cd,	// (0x00042811) input_focus_pane_g10

0x0009,

0xf67d,	// (0x00046ac1) input_focus_pane_g

0x2f84,	// (0x0003a3c8) wait_border_pane_g3_copy1

0x988e,	// (0x00040cd2) data_form_pane_t1

0xb3cd,	// (0x00042811) wait_anim_pane_g1_copy1

0xaa2f,	// (0x00041e73) data_form_wide_pane_t1

0x98a8,	// (0x00040cec) list_form_graphic_pane_cp_ParamLimits

0x98a8,	// (0x00040cec) list_form_graphic_pane_cp

0x3e73,	// (0x0003b2b7) slider_form_pane_g1

0x3e7c,	// (0x0003b2c0) slider_form_pane_g2

0x0006,

0xf974,	// (0x00046db8) slider_form_pane_g

0x98ba,	// (0x00040cfe) list_form_graphic_pane_ParamLimits

0x98ba,	// (0x00040cfe) list_form_graphic_pane

0x98cd,	// (0x00040d11) list_form_graphic_pane_g1

0x98d5,	// (0x00040d19) list_form_graphic_pane_t1_ParamLimits

0x98d5,	// (0x00040d19) list_form_graphic_pane_t1

0xb433,	// (0x00042877) list_highlight_pane_cp5_ParamLimits

0xb433,	// (0x00042877) list_highlight_pane_cp5

0xd350,	// (0x00044794) find_pane_g1

0xb885,	// (0x00042cc9) input_find_pane

0x98ea,	// (0x00040d2e) input_find_pane_g1_ParamLimits

0x98ea,	// (0x00040d2e) input_find_pane_g1

0x98f6,	// (0x00040d3a) input_find_pane_t1_ParamLimits

0x98f6,	// (0x00040d3a) input_find_pane_t1

0x990b,	// (0x00040d4f) input_find_pane_t2_ParamLimits

0x990b,	// (0x00040d4f) input_find_pane_t2

0x0001,

0xf692,	// (0x00046ad6) input_find_pane_t_ParamLimits

0xf692,	// (0x00046ad6) input_find_pane_t

0xb88e,	// (0x00042cd2) input_focus_pane_cp5_ParamLimits

0xb88e,	// (0x00042cd2) input_focus_pane_cp5

0xb89c,	// (0x00042ce0) bg_popup_window_pane_cp2_ParamLimits

0xb89c,	// (0x00042ce0) bg_popup_window_pane_cp2

0xb8a9,	// (0x00042ced) listscroll_menu_pane_ParamLimits

0xb8a9,	// (0x00042ced) listscroll_menu_pane

0x992c,	// (0x00040d70) popup_submenu_window_ParamLimits

0x992c,	// (0x00040d70) popup_submenu_window

0xb8b5,	// (0x00042cf9) find_popup_pane_g1

0x9954,	// (0x00040d98) input_popup_find_pane_cp

0xb88e,	// (0x00042cd2) input_focus_pane_cp4_ParamLimits

0xb88e,	// (0x00042cd2) input_focus_pane_cp4

0xb8bd,	// (0x00042d01) input_popup_find_pane_t1_ParamLimits

0xb8bd,	// (0x00042d01) input_popup_find_pane_t1

0xb3d7,	// (0x0004281b) bg_popup_sub_pane_cp

0xb8eb,	// (0x00042d2f) listscroll_popup_sub_pane

0xb8f3,	// (0x00042d37) list_submenu_pane_ParamLimits

0xb8f3,	// (0x00042d37) list_submenu_pane

0xb904,	// (0x00042d48) scroll_pane_cp4

0x996c,	// (0x00040db0) list_single_popup_submenu_pane_ParamLimits

0x996c,	// (0x00040db0) list_single_popup_submenu_pane

0x9980,	// (0x00040dc4) list_single_popup_submenu_pane_g1

0x9988,	// (0x00040dcc) list_single_popup_submenu_pane_t1_ParamLimits

0x9988,	// (0x00040dcc) list_single_popup_submenu_pane_t1

0xb425,	// (0x00042869) bg_active_tab_pane_cp1_ParamLimits

0xb425,	// (0x00042869) bg_active_tab_pane_cp1

0xb90c,	// (0x00042d50) tabs_2_active_pane_g1

0x999d,	// (0x00040de1) tabs_2_active_pane_t1

0xb425,	// (0x00042869) bg_passive_tab_pane_cp1_ParamLimits

0xb425,	// (0x00042869) bg_passive_tab_pane_cp1

0xb90c,	// (0x00042d50) tabs_2_passive_pane_g1

0x999d,	// (0x00040de1) tabs_2_passive_pane_t1

0xb433,	// (0x00042877) bg_active_tab_pane_cp4

0x99af,	// (0x00040df3) tabs_2_long_active_pane_t1

0x245f,	// (0x000398a3) bg_passive_tab_pane_cp4

0x098d,	// (0x00037dd1) list_single_midp_graphic_pane_g4_ParamLimits

0xb433,	// (0x00042877) bg_active_tab_pane_cp5

0x99c2,	// (0x00040e06) tabs_3_long_active_pane_t1

0x245f,	// (0x000398a3) bg_passive_tab_pane_cp5

0x098d,	// (0x00037dd1) list_single_midp_graphic_pane_g4

0xb433,	// (0x00042877) bg_popup_window_pane_cp13_ParamLimits

0xb433,	// (0x00042877) bg_popup_window_pane_cp13

0xb914,	// (0x00042d58) listscroll_popup_fast_pane_ParamLimits

0xb914,	// (0x00042d58) listscroll_popup_fast_pane

0xb920,	// (0x00042d64) grid_popup_fast_pane_ParamLimits

0xb920,	// (0x00042d64) grid_popup_fast_pane

0xb932,	// (0x00042d76) scroll_pane_cp9_ParamLimits

0xb932,	// (0x00042d76) scroll_pane_cp9

0x577d,	// (0x0003cbc1) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x577d,	// (0x0003cbc1) list_single_graphic_hl_pane_t1_cp2

0xb945,	// (0x00042d89) input_focus_pane_cp20_ParamLimits

0xb945,	// (0x00042d89) input_focus_pane_cp20

0xb953,	// (0x00042d97) query_popup_data_pane_t1_ParamLimits

0xb953,	// (0x00042d97) query_popup_data_pane_t1

0xb966,	// (0x00042daa) query_popup_data_pane_t2_ParamLimits

0xb966,	// (0x00042daa) query_popup_data_pane_t2

0xb9ac,	// (0x00042df0) query_popup_data_pane_t3_ParamLimits

0xb9ac,	// (0x00042df0) query_popup_data_pane_t3

0xb9ed,	// (0x00042e31) query_popup_data_pane_t4_ParamLimits

0xb9ed,	// (0x00042e31) query_popup_data_pane_t4

0xba29,	// (0x00042e6d) query_popup_data_pane_t5_ParamLimits

0xba29,	// (0x00042e6d) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x00046adb) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x00046adb) query_popup_data_pane_t

0xb83d,	// (0x00042c81) bg_set_opt_pane_g1

0xb845,	// (0x00042c89) bg_set_opt_pane_g2

0xb84d,	// (0x00042c91) bg_set_opt_pane_g3

0xb855,	// (0x00042c99) bg_set_opt_pane_g4

0xb85d,	// (0x00042ca1) bg_set_opt_pane_g5

0xb865,	// (0x00042ca9) bg_set_opt_pane_g6

0xb86d,	// (0x00042cb1) bg_set_opt_pane_g7

0xb875,	// (0x00042cb9) bg_set_opt_pane_g8

0xb87d,	// (0x00042cc1) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x00046ae6) bg_set_opt_pane_g

0xf348,	// (0x0004678c) control_top_pane_stacon_ParamLimits

0xf348,	// (0x0004678c) control_top_pane_stacon

0xf39b,	// (0x000467df) signal_pane_stacon_ParamLimits

0xf39b,	// (0x000467df) signal_pane_stacon

0xf3c0,	// (0x00046804) stacon_top_pane_g1_ParamLimits

0xf3c0,	// (0x00046804) stacon_top_pane_g1

0xf3e2,	// (0x00046826) title_pane_stacon_ParamLimits

0xf3e2,	// (0x00046826) title_pane_stacon

0xf40c,	// (0x00046850) uni_indicator_pane_stacon_ParamLimits

0xf40c,	// (0x00046850) uni_indicator_pane_stacon

0xf421,	// (0x00046865) battery_pane_stacon_ParamLimits

0xf421,	// (0x00046865) battery_pane_stacon

0xf465,	// (0x000468a9) control_bottom_pane_stacon_ParamLimits

0xf465,	// (0x000468a9) control_bottom_pane_stacon

0xf488,	// (0x000468cc) navi_pane_stacon_ParamLimits

0xf488,	// (0x000468cc) navi_pane_stacon

0xf4ab,	// (0x000468ef) stacon_bottom_pane_g1_ParamLimits

0xf4ab,	// (0x000468ef) stacon_bottom_pane_g1

0xef9f,	// (0x000463e3) aid_levels_signal_lsc_ParamLimits

0xef9f,	// (0x000463e3) aid_levels_signal_lsc

0xefb5,	// (0x000463f9) signal_pane_stacon_g1_ParamLimits

0xefb5,	// (0x000463f9) signal_pane_stacon_g1

0xefc9,	// (0x0004640d) signal_pane_stacon_g2_ParamLimits

0xefc9,	// (0x0004640d) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x00046af9) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00046af9) signal_pane_stacon_g

0xeffe,	// (0x00046442) title_pane_stacon_t1_ParamLimits

0xeffe,	// (0x00046442) title_pane_stacon_t1

0xba6d,	// (0x00042eb1) uni_indicator_pane_stacon_g1

0xba77,	// (0x00042ebb) uni_indicator_pane_stacon_g2

0xba81,	// (0x00042ec5) uni_indicator_pane_stacon_g3

0xba8b,	// (0x00042ecf) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x00046b05) uni_indicator_pane_stacon_g

0xf023,	// (0x00046467) control_top_pane_stacon_g1

0xf02b,	// (0x0004646f) control_top_pane_stacon_t1_ParamLimits

0xf02b,	// (0x0004646f) control_top_pane_stacon_t1

0xf062,	// (0x000464a6) aid_levels_battery_lsc_ParamLimits

0xf062,	// (0x000464a6) aid_levels_battery_lsc

0xf079,	// (0x000464bd) battery_pane_stacon_g1_ParamLimits

0xf079,	// (0x000464bd) battery_pane_stacon_g1

0xf08c,	// (0x000464d0) battery_pane_stacon_g2_ParamLimits

0xf08c,	// (0x000464d0) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00046b0e) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00046b0e) battery_pane_stacon_g

0xf0ca,	// (0x0004650e) navi_icon_pane_stacon

0xf0de,	// (0x00046522) navi_navi_pane_stacon

0xf0ca,	// (0x0004650e) navi_text_pane_stacon

0xf023,	// (0x00046467) control_bottom_pane_stacon_g1

0xf0f2,	// (0x00046536) control_bottom_pane_stacon_t1_ParamLimits

0xf0f2,	// (0x00046536) control_bottom_pane_stacon_t1

0x99ee,	// (0x00040e32) grid_app_pane_ParamLimits

0x99ee,	// (0x00040e32) grid_app_pane

0x9a26,	// (0x00040e6a) scroll_pane_cp15_ParamLimits

0x9a26,	// (0x00040e6a) scroll_pane_cp15

0x9a3b,	// (0x00040e7f) cell_app_pane_ParamLimits

0x9a3b,	// (0x00040e7f) cell_app_pane

0x9a80,	// (0x00040ec4) cell_app_pane_g1_ParamLimits

0x9a80,	// (0x00040ec4) cell_app_pane_g1

0xbaaf,	// (0x00042ef3) cell_app_pane_g2_ParamLimits

0xbaaf,	// (0x00042ef3) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00046b13) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00046b13) cell_app_pane_g

0x9aa4,	// (0x00040ee8) cell_app_pane_t1_ParamLimits

0x9aa4,	// (0x00040ee8) cell_app_pane_t1

0xbabb,	// (0x00042eff) grid_highlight_pane_ParamLimits

0xbabb,	// (0x00042eff) grid_highlight_pane

0xb83d,	// (0x00042c81) cell_highlight_pane_g1

0xb845,	// (0x00042c89) cell_highlight_pane_g2

0xb84d,	// (0x00042c91) cell_highlight_pane_g3

0xb855,	// (0x00042c99) cell_highlight_pane_g4

0xb85d,	// (0x00042ca1) cell_highlight_pane_g5

0xb865,	// (0x00042ca9) cell_highlight_pane_g6

0xb86d,	// (0x00042cb1) cell_highlight_pane_g7

0xb875,	// (0x00042cb9) cell_highlight_pane_g8

0xb87d,	// (0x00042cc1) cell_highlight_pane_g9

0xb3cd,	// (0x00042811) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x00046ac1) cell_highlight_pane_g

0xbacc,	// (0x00042f10) bg_scroll_pane

0x9ac4,	// (0x00040f08) scroll_handle_pane

0xbb13,	// (0x00042f57) scroll_bg_pane_g1

0xbb28,	// (0x00042f6c) scroll_bg_pane_g2

0xbb40,	// (0x00042f84) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x00046b18) scroll_bg_pane_g

0x9ad8,	// (0x00040f1c) scroll_handle_focus_pane_ParamLimits

0x9ad8,	// (0x00040f1c) scroll_handle_focus_pane

0xbb13,	// (0x00042f57) scroll_handle_pane_g1

0xbb55,	// (0x00042f99) scroll_handle_pane_g2

0xbb40,	// (0x00042f84) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x00046b1f) scroll_handle_pane_g

0xb88e,	// (0x00042cd2) bg_popup_sub_pane_cp21_ParamLimits

0xb88e,	// (0x00042cd2) bg_popup_sub_pane_cp21

0x9ae5,	// (0x00040f29) popup_fep_japan_predictive_window_t1_ParamLimits

0x9ae5,	// (0x00040f29) popup_fep_japan_predictive_window_t1

0x9afc,	// (0x00040f40) popup_fep_japan_predictive_window_t2_ParamLimits

0x9afc,	// (0x00040f40) popup_fep_japan_predictive_window_t2

0x9b2f,	// (0x00040f73) popup_fep_japan_predictive_window_t3_ParamLimits

0x9b2f,	// (0x00040f73) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00046b26) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00046b26) popup_fep_japan_predictive_window_t

0xb3d7,	// (0x0004281b) bg_popup_sub_pane_cp23

0x9b66,	// (0x00040faa) listscroll_japin_cand_pane

0xbb69,	// (0x00042fad) popup_fep_japan_candidate_window_t1

0xbb77,	// (0x00042fbb) candidate_pane_ParamLimits

0xbb77,	// (0x00042fbb) candidate_pane

0x9b6e,	// (0x00040fb2) scroll_pane_cp30

0xbb89,	// (0x00042fcd) list_single_popup_jap_candidate_pane_ParamLimits

0xbb89,	// (0x00042fcd) list_single_popup_jap_candidate_pane

0xb3d7,	// (0x0004281b) list_highlight_pane_cp30

0xbb9e,	// (0x00042fe2) list_single_popup_jap_candidate_pane_t1

0xbbad,	// (0x00042ff1) level_1_signal

0xbbba,	// (0x00042ffe) level_2_signal

0xbbc7,	// (0x0004300b) level_3_signal

0xbbd4,	// (0x00043018) level_4_signal

0xbbe1,	// (0x00043025) level_5_signal

0xbbee,	// (0x00043032) level_6_signal

0xbbfb,	// (0x0004303f) level_7_signal

0xbbad,	// (0x00042ff1) level_1_battery

0xbbba,	// (0x00042ffe) level_2_battery

0xbbc7,	// (0x0004300b) level_3_battery

0xbbd4,	// (0x00043018) level_4_battery

0xbbe1,	// (0x00043025) level_5_battery

0xbbee,	// (0x00043032) level_6_battery

0xbbfb,	// (0x0004303f) level_7_battery

0xbc20,	// (0x00043064) list_menu_pane_ParamLimits

0xbc20,	// (0x00043064) list_menu_pane

0xbc36,	// (0x0004307a) scroll_pane_cp25_ParamLimits

0xbc36,	// (0x0004307a) scroll_pane_cp25

0x9b76,	// (0x00040fba) list_double2_graphic_pane_cp2_ParamLimits

0x9b76,	// (0x00040fba) list_double2_graphic_pane_cp2

0x9b76,	// (0x00040fba) list_double2_large_graphic_pane_cp2_ParamLimits

0x9b76,	// (0x00040fba) list_double2_large_graphic_pane_cp2

0x9b76,	// (0x00040fba) list_double2_pane_cp2_ParamLimits

0x9b76,	// (0x00040fba) list_double2_pane_cp2

0x9b76,	// (0x00040fba) list_double_graphic_pane_cp2_ParamLimits

0x9b76,	// (0x00040fba) list_double_graphic_pane_cp2

0x9b76,	// (0x00040fba) list_double_large_graphic_pane_cp2_ParamLimits

0x9b76,	// (0x00040fba) list_double_large_graphic_pane_cp2

0x9b76,	// (0x00040fba) list_double_number_pane_cp2_ParamLimits

0x9b76,	// (0x00040fba) list_double_number_pane_cp2

0x9b76,	// (0x00040fba) list_double_pane_cp2_ParamLimits

0x9b76,	// (0x00040fba) list_double_pane_cp2

0x9b85,	// (0x00040fc9) list_single_2graphic_pane_cp2_ParamLimits

0x9b85,	// (0x00040fc9) list_single_2graphic_pane_cp2

0x9b85,	// (0x00040fc9) list_single_graphic_heading_pane_cp2_ParamLimits

0x9b85,	// (0x00040fc9) list_single_graphic_heading_pane_cp2

0x9b85,	// (0x00040fc9) list_single_graphic_pane_cp2_ParamLimits

0x9b85,	// (0x00040fc9) list_single_graphic_pane_cp2

0x9b85,	// (0x00040fc9) list_single_heading_pane_cp2_ParamLimits

0x9b85,	// (0x00040fc9) list_single_heading_pane_cp2

0xbc5f,	// (0x000430a3) list_single_large_graphic_pane_cp2_ParamLimits

0xbc5f,	// (0x000430a3) list_single_large_graphic_pane_cp2

0x9b85,	// (0x00040fc9) list_single_number_heading_pane_cp2_ParamLimits

0x9b85,	// (0x00040fc9) list_single_number_heading_pane_cp2

0x9b85,	// (0x00040fc9) list_single_number_pane_cp2_ParamLimits

0x9b85,	// (0x00040fc9) list_single_number_pane_cp2

0x9b85,	// (0x00040fc9) list_single_pane_cp2_ParamLimits

0x9b85,	// (0x00040fc9) list_single_pane_cp2

0xbc79,	// (0x000430bd) bg_popup_sub_pane_cp22

0xf248,	// (0x0004668c) popup_side_volume_key_window_g1

0xf254,	// (0x00046698) popup_side_volume_key_window_t1

0x9c4d,	// (0x00041091) volume_small_pane_cp1

0xb425,	// (0x00042869) bg_popup_sub_pane_cp24_ParamLimits

0xb425,	// (0x00042869) bg_popup_sub_pane_cp24

0xbc8f,	// (0x000430d3) fep_china_uni_candidate_pane_ParamLimits

0xbc8f,	// (0x000430d3) fep_china_uni_candidate_pane

0xbca3,	// (0x000430e7) fep_china_uni_entry_pane

0xbcb3,	// (0x000430f7) popup_fep_china_uni_window_g1

0x9c55,	// (0x00041099) fep_china_uni_entry_pane_g1

0x9c5d,	// (0x000410a1) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x00046b57) fep_china_uni_entry_pane_g

0xf262,	// (0x000466a6) fep_entry_item_pane

0xf26c,	// (0x000466b0) fep_candidate_item_pane

0x9c65,	// (0x000410a9) fep_china_uni_candidate_pane_g1

0xf274,	// (0x000466b8) fep_china_uni_candidate_pane_g2

0xf27c,	// (0x000466c0) fep_china_uni_candidate_pane_g3

0x9c6d,	// (0x000410b1) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x00046b5c) fep_china_uni_candidate_pane_g

0xb3cd,	// (0x00042811) fep_entry_item_pane_g1

0xf284,	// (0x000466c8) fep_entry_item_pane_t1_ParamLimits

0xf284,	// (0x000466c8) fep_entry_item_pane_t1

0xf29a,	// (0x000466de) fep_candidate_item_pane_t1_ParamLimits

0xf29a,	// (0x000466de) fep_candidate_item_pane_t1

0xf2af,	// (0x000466f3) fep_candidate_item_pane_t2_ParamLimits

0xf2af,	// (0x000466f3) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00046b65) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00046b65) fep_candidate_item_pane_t

0xb433,	// (0x00042877) list_highlight_pane_cp31_ParamLimits

0xb433,	// (0x00042877) list_highlight_pane_cp31

0xf2c1,	// (0x00046705) level_1_signal_lsc

0xf2ca,	// (0x0004670e) level_2_signal_lsc

0xf2d3,	// (0x00046717) level_3_signal_lsc

0xf2dc,	// (0x00046720) level_4_signal_lsc

0xf2e5,	// (0x00046729) level_5_signal_lsc

0xf2ee,	// (0x00046732) level_6_signal_lsc

0xf2f7,	// (0x0004673b) level_7_signal_lsc

0xf2f7,	// (0x0004673b) level_1_battery_lsc

0xf300,	// (0x00046744) level_2_battery_lsc

0xf309,	// (0x0004674d) level_3_battery_lsc

0xf312,	// (0x00046756) level_4_battery_lsc

0xf31b,	// (0x0004675f) level_5_battery_lsc

0xf324,	// (0x00046768) level_6_battery_lsc

0xf2c1,	// (0x00046705) level_7_battery_lsc

0xf32d,	// (0x00046771) scroll_handle_focus_pane_g1

0xf336,	// (0x0004677a) scroll_handle_focus_pane_g2

0xf33f,	// (0x00046783) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x00046b6a) scroll_handle_focus_pane_g

0x9c75,	// (0x000410b9) list_single_2graphic_pane_g1_ParamLimits

0x9c75,	// (0x000410b9) list_single_2graphic_pane_g1

0x93d5,	// (0x00040819) list_single_2graphic_pane_g2_ParamLimits

0x93d5,	// (0x00040819) list_single_2graphic_pane_g2

0xd258,	// (0x0004469c) list_single_2graphic_pane_g3_ParamLimits

0xd258,	// (0x0004469c) list_single_2graphic_pane_g3

0x9c81,	// (0x000410c5) list_single_2graphic_pane_g4_ParamLimits

0x9c81,	// (0x000410c5) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x00046b71) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x00046b71) list_single_2graphic_pane_g

0x9c8d,	// (0x000410d1) list_single_2graphic_pane_t1_ParamLimits

0x9c8d,	// (0x000410d1) list_single_2graphic_pane_t1

0x9cbb,	// (0x000410ff) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9cbb,	// (0x000410ff) list_double2_graphic_large_graphic_pane_g1

0x9434,	// (0x00040878) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9434,	// (0x00040878) list_double2_graphic_large_graphic_pane_g2

0xd30c,	// (0x00044750) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd30c,	// (0x00044750) list_double2_graphic_large_graphic_pane_g3

0x9ccd,	// (0x00041111) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9ccd,	// (0x00041111) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x00046b7a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x00046b7a) list_double2_graphic_large_graphic_pane_g

0x9596,	// (0x000409da) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9596,	// (0x000409da) list_double2_graphic_large_graphic_pane_t1

0x9cd9,	// (0x0004111d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9cd9,	// (0x0004111d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x00046b83) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x00046b83) list_double2_graphic_large_graphic_pane_t

0x9d5e,	// (0x000411a2) popup_fast_swap_window_ParamLimits

0x9d5e,	// (0x000411a2) popup_fast_swap_window

0x9d7a,	// (0x000411be) popup_side_volume_key_window

0xf536,	// (0x0004697a) stacon_top_pane

0xf540,	// (0x00046984) status_pane_ParamLimits

0xf540,	// (0x00046984) status_pane

0x9d94,	// (0x000411d8) status_small_pane

0xb3d7,	// (0x0004281b) control_pane

0xb3d7,	// (0x0004281b) stacon_bottom_pane

0xb7c8,	// (0x00042c0c) scroll_pane_cp121

0xb7bf,	// (0x00042c03) set_content_pane

0x9ceb,	// (0x0004112f) bg_active_tab_pane_g1_cp1

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp1

0x9cfd,	// (0x00041141) bg_active_tab_pane_g3_cp1

0x9ceb,	// (0x0004112f) bg_passive_tab_pane_g1_cp1

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp1

0x9cfd,	// (0x00041141) bg_passive_tab_pane_g3_cp1

0x9d06,	// (0x0004114a) bg_active_tab_pane_g1_cp2

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp2

0x9d0f,	// (0x00041153) bg_active_tab_pane_g3_cp2

0x9d06,	// (0x0004114a) bg_passive_tab_pane_g1_cp2

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp2

0x9d0f,	// (0x00041153) bg_passive_tab_pane_g3_cp2

0x9d18,	// (0x0004115c) bg_active_tab_pane_g1_cp3

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp3

0x9d21,	// (0x00041165) bg_active_tab_pane_g3_cp3

0x9d18,	// (0x0004115c) bg_passive_tab_pane_g1_cp3

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp3

0x9d21,	// (0x00041165) bg_passive_tab_pane_g3_cp3

0x9d2a,	// (0x0004116e) bg_active_tab_pane_g1_cp4

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp4

0x9d35,	// (0x00041179) bg_active_tab_pane_g3_cp4

0x9d2a,	// (0x0004116e) bg_passive_tab_pane_g1_cp4

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp4

0x9d35,	// (0x00041179) bg_passive_tab_pane_g3_cp4

0x9d40,	// (0x00041184) bg_active_tab_pane_g1_cp5

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp5

0x9d49,	// (0x0004118d) bg_active_tab_pane_g3_cp5

0x9d40,	// (0x00041184) bg_passive_tab_pane_g1_cp5

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp5

0x9d49,	// (0x0004118d) bg_passive_tab_pane_g3_cp5

0x4474,	// (0x0003b8b8) list_set_graphic_pane_ParamLimits

0x4474,	// (0x0003b8b8) list_set_graphic_pane

0xb3d7,	// (0x0004281b) bg_set_opt_pane_cp4

0xf4c7,	// (0x0004690b) list_set_graphic_pane_g1_ParamLimits

0xf4c7,	// (0x0004690b) list_set_graphic_pane_g1

0xf4d3,	// (0x00046917) list_set_graphic_pane_g2_ParamLimits

0xf4d3,	// (0x00046917) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x00046b88) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x00046b88) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x00046f0d) volume_small_pane_cp_g

0x9d52,	// (0x00041196) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9d52,	// (0x00041196) list_double2_large_graphic_pane_g1_cp2

0xf4f5,	// (0x00046939) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf4f5,	// (0x00046939) list_double2_large_graphic_pane_g2_cp2

0xf506,	// (0x0004694a) list_double2_large_graphic_pane_g3_cp2

0xf50e,	// (0x00046952) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf50e,	// (0x00046952) list_double2_large_graphic_pane_t1_cp2

0xf524,	// (0x00046968) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf524,	// (0x00046968) list_double2_large_graphic_pane_t2_cp2

0xc647,	// (0x00043a8b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc647,	// (0x00043a8b) list_double_large_graphic_pane_g1_cp2

0x3a46,	// (0x0003ae8a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3a46,	// (0x0003ae8a) list_double_large_graphic_pane_g2_cp2

0x0104,	// (0x00037548) list_double_large_graphic_pane_g3_cp2

0x3a57,	// (0x0003ae9b) list_double_large_graphic_pane_g4_cp

0x3a5f,	// (0x0003aea3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3a5f,	// (0x0003aea3) list_double_large_graphic_pane_t1_cp2

0x3a76,	// (0x0003aeba) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3a76,	// (0x0003aeba) list_double_large_graphic_pane_t2_cp2

0x0002,	// (0x00037446) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0002,	// (0x00037446) list_double2_graphic_pane_g1_cp2

0x0010,	// (0x00037454) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0010,	// (0x00037454) list_double2_graphic_pane_g2_cp2

0x0021,	// (0x00037465) list_double2_graphic_pane_g3_cp2

0x002b,	// (0x0003746f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x002b,	// (0x0003746f) list_double2_graphic_pane_t1_cp2

0x0041,	// (0x00037485) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0041,	// (0x00037485) list_double2_graphic_pane_t2_cp2

0xbccf,	// (0x00043113) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbccf,	// (0x00043113) list_single_number_heading_pane_g1_cp2

0x0053,	// (0x00037497) list_single_number_heading_pane_g2_cp2

0x005b,	// (0x0003749f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x005b,	// (0x0003749f) list_single_number_heading_pane_t1_cp2

0x0071,	// (0x000374b5) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0071,	// (0x000374b5) list_single_number_heading_pane_t2_cp2

0x0083,	// (0x000374c7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0083,	// (0x000374c7) list_single_number_heading_pane_t3_cp2

0xbccf,	// (0x00043113) list_single_heading_pane_g1_cp2_ParamLimits

0xbccf,	// (0x00043113) list_single_heading_pane_g1_cp2

0x0053,	// (0x00037497) list_single_heading_pane_g2_cp2

0x005b,	// (0x0003749f) list_single_heading_pane_t1_cp2_ParamLimits

0x005b,	// (0x0003749f) list_single_heading_pane_t1_cp2

0x383f,	// (0x0003ac83) list_single_heading_pane_t2_cp2_ParamLimits

0x383f,	// (0x0003ac83) list_single_heading_pane_t2_cp2

0x3787,	// (0x0003abcb) list_double_graphic_pane_g1_cp2_ParamLimits

0x3787,	// (0x0003abcb) list_double_graphic_pane_g1_cp2

0x3793,	// (0x0003abd7) list_double_graphic_pane_g2_cp2_ParamLimits

0x3793,	// (0x0003abd7) list_double_graphic_pane_g2_cp2

0x37a2,	// (0x0003abe6) list_double_graphic_pane_g3_cp2

0x37aa,	// (0x0003abee) list_double_graphic_pane_t1_cp2_ParamLimits

0x37aa,	// (0x0003abee) list_double_graphic_pane_t1_cp2

0x37c0,	// (0x0003ac04) list_double_graphic_pane_t2_cp2_ParamLimits

0x37c0,	// (0x0003ac04) list_double_graphic_pane_t2_cp2

0x00f8,	// (0x0003753c) list_double_number_pane_g1_cp2_ParamLimits

0x00f8,	// (0x0003753c) list_double_number_pane_g1_cp2

0x0104,	// (0x00037548) list_double_number_pane_g2_cp2

0x374b,	// (0x0003ab8f) list_double_number_pane_t1_cp2_ParamLimits

0x374b,	// (0x0003ab8f) list_double_number_pane_t1_cp2

0x375f,	// (0x0003aba3) list_double_number_pane_t2_cp2_ParamLimits

0x375f,	// (0x0003aba3) list_double_number_pane_t2_cp2

0x3775,	// (0x0003abb9) list_double_number_pane_t3_cp2_ParamLimits

0x3775,	// (0x0003abb9) list_double_number_pane_t3_cp2

0x3634,	// (0x0003aa78) list_single_graphic_pane_g1_cp2_ParamLimits

0x3634,	// (0x0003aa78) list_single_graphic_pane_g1_cp2

0x015c,	// (0x000375a0) list_single_graphic_pane_g2_cp2_ParamLimits

0x015c,	// (0x000375a0) list_single_graphic_pane_g2_cp2

0x2059,	// (0x0003949d) list_single_graphic_pane_g3_cp2

0x360a,	// (0x0003aa4e) list_single_graphic_pane_t1_cp2_ParamLimits

0x360a,	// (0x0003aa4e) list_single_graphic_pane_t1_cp2

0x015c,	// (0x000375a0) list_single_number_pane_g1_cp2_ParamLimits

0x015c,	// (0x000375a0) list_single_number_pane_g1_cp2

0x2059,	// (0x0003949d) list_single_number_pane_g2_cp2

0x360a,	// (0x0003aa4e) list_single_number_pane_t1_cp2_ParamLimits

0x360a,	// (0x0003aa4e) list_single_number_pane_t1_cp2

0x3620,	// (0x0003aa64) list_single_number_pane_t2_cp2_ParamLimits

0x3620,	// (0x0003aa64) list_single_number_pane_t2_cp2

0xf4f5,	// (0x00046939) list_double2_pane_g1_cp2_ParamLimits

0xf4f5,	// (0x00046939) list_double2_pane_g1_cp2

0xf506,	// (0x0004694a) list_double2_pane_g2_cp2

0x00d0,	// (0x00037514) list_double2_pane_t1_cp2_ParamLimits

0x00d0,	// (0x00037514) list_double2_pane_t1_cp2

0x00e6,	// (0x0003752a) list_double2_pane_t2_cp2_ParamLimits

0x00e6,	// (0x0003752a) list_double2_pane_t2_cp2

0x00f8,	// (0x0003753c) list_double_pane_g1_cp2_ParamLimits

0x00f8,	// (0x0003753c) list_double_pane_g1_cp2

0x0104,	// (0x00037548) list_double_pane_g2_cp2

0x010c,	// (0x00037550) list_double_pane_t1_cp2_ParamLimits

0x010c,	// (0x00037550) list_double_pane_t1_cp2

0x0122,	// (0x00037566) list_double_pane_t2_cp2_ParamLimits

0x0122,	// (0x00037566) list_double_pane_t2_cp2

0x9d9f,	// (0x000411e3) list_single_pane_cp2_g3

0x015c,	// (0x000375a0) list_single_pane_g1_cp2_ParamLimits

0x015c,	// (0x000375a0) list_single_pane_g1_cp2

0x2059,	// (0x0003949d) list_single_pane_g2_cp2

0x2061,	// (0x000394a5) list_single_pane_t1_cp2_ParamLimits

0x2061,	// (0x000394a5) list_single_pane_t1_cp2

0x9da7,	// (0x000411eb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9da7,	// (0x000411eb) list_single_large_graphic_pane_g1_cp2

0x2085,	// (0x000394c9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2085,	// (0x000394c9) list_single_large_graphic_pane_g2_cp2

0x2091,	// (0x000394d5) list_single_large_graphic_pane_g3_cp2

0x9db3,	// (0x000411f7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9db3,	// (0x000411f7) list_single_large_graphic_pane_g4_cp1

0x20b3,	// (0x000394f7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x20b3,	// (0x000394f7) list_single_large_graphic_pane_t1_cp2

0x35d6,	// (0x0003aa1a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x35d6,	// (0x0003aa1a) list_single_graphic_heading_pane_g1_cp2

0x35a3,	// (0x0003a9e7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x35a3,	// (0x0003a9e7) list_single_graphic_heading_pane_g4_cp2

0x2059,	// (0x0003949d) list_single_graphic_heading_pane_g5_cp2

0x35e2,	// (0x0003aa26) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x35e2,	// (0x0003aa26) list_single_graphic_heading_pane_t1_cp2

0x35f8,	// (0x0003aa3c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x35f8,	// (0x0003aa3c) list_single_graphic_heading_pane_t2_cp2

0x3597,	// (0x0003a9db) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3597,	// (0x0003a9db) list_single_2graphic_pane_g1_cp2

0x35a3,	// (0x0003a9e7) list_single_2graphic_pane_g2_cp2_ParamLimits

0x35a3,	// (0x0003a9e7) list_single_2graphic_pane_g2_cp2

0x2059,	// (0x0003949d) list_single_2graphic_pane_g3_cp2

0x35b4,	// (0x0003a9f8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x35b4,	// (0x0003a9f8) list_single_2graphic_pane_g4_cp2

0x35c0,	// (0x0003aa04) list_single_2graphic_pane_t1_cp2_ParamLimits

0x35c0,	// (0x0003aa04) list_single_2graphic_pane_t1_cp2

0xb3cd,	// (0x00042811) list_highlight_pane_g10_cp1

0x317f,	// (0x0003a5c3) list_highlight_pane_g1_cp1

0x3187,	// (0x0003a5cb) list_highlight_pane_g2_cp1

0x318f,	// (0x0003a5d3) list_highlight_pane_g3_cp1

0x3197,	// (0x0003a5db) list_highlight_pane_g4_cp1

0x319f,	// (0x0003a5e3) list_highlight_pane_g5_cp1

0x31a7,	// (0x0003a5eb) list_highlight_pane_g6_cp1

0x31af,	// (0x0003a5f3) list_highlight_pane_g7_cp1

0x31b7,	// (0x0003a5fb) list_highlight_pane_g8_cp1

0x31bf,	// (0x0003a603) list_highlight_pane_g9_cp1

0xc3dc,	// (0x00043820) form_field_slider_pane_t3

0xc3ea,	// (0x0004382e) form_field_slider_pane_t4

0x30c3,	// (0x0003a507) slider_form_pane_ParamLimits

0x30c3,	// (0x0003a507) slider_form_pane

0xb3d7,	// (0x0004281b) control_abbreviations

0xb3d7,	// (0x0004281b) control_conventions

0xb3d7,	// (0x0004281b) control_definitions

0xb3d7,	// (0x0004281b) format_table_attribute

0xc61e,	// (0x00043a62) bg_popup_preview_window_pane_g9

0xb3d7,	// (0x0004281b) format_table_data2

0xb3d7,	// (0x0004281b) format_table_data3

0xb3d7,	// (0x0004281b) format_table_data_example

0x0008,

0xb3d7,	// (0x0004281b) intro_purpose

0xf8d4,	// (0x00046d18) bg_popup_preview_window_pane_g

0xb3d7,	// (0x0004281b) texts_category

0xb3d7,	// (0x0004281b) texts_graphics

0x20c9,	// (0x0003950d) text_digital

0x20d8,	// (0x0003951c) text_primary

0x20e7,	// (0x0003952b) text_primary_small

0x20f6,	// (0x0003953a) text_secondary

0x2105,	// (0x00039549) text_title

0xc983,	// (0x00043dc7) bg_passive_tab_pane_g1_cp3_srt

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp3_srt

0xc98c,	// (0x00043dd0) bg_passive_tab_pane_g3_cp3_srt

0xb425,	// (0x00042869) bg_active_tab_pane_cp3_srt_ParamLimits

0xb425,	// (0x00042869) bg_active_tab_pane_cp3_srt

0xc995,	// (0x00043dd9) tabs_4_active_pane_srt_g1

0xc99d,	// (0x00043de1) tabs_4_active_pane_srt_t1_ParamLimits

0xc99d,	// (0x00043de1) tabs_4_active_pane_srt_t1

0xc983,	// (0x00043dc7) bg_active_tab_pane_g1_cp3_copy1

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp3_copy1

0xc98c,	// (0x00043dd0) bg_active_tab_pane_g3_cp3_copy1

0xb433,	// (0x00042877) tabs_2_long_active_pane_srt_ParamLimits

0xb433,	// (0x00042877) tabs_2_long_active_pane_srt

0xb433,	// (0x00042877) tabs_2_long_passive_pane_srt_ParamLimits

0xb433,	// (0x00042877) tabs_2_long_passive_pane_srt

0x245f,	// (0x000398a3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x245f,	// (0x000398a3) bg_passive_tab_pane_cp4_srt

0xc736,	// (0x00043b7a) bg_passive_tab_pane_g1_cp4_srt

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp4_srt

0xc73f,	// (0x00043b83) bg_passive_tab_pane_g3_cp4_srt

0xb433,	// (0x00042877) bg_active_tab_pane_cp4_srt_ParamLimits

0xb433,	// (0x00042877) bg_active_tab_pane_cp4_srt

0xc748,	// (0x00043b8c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc748,	// (0x00043b8c) tabs_2_long_active_pane_srt_t1

0xc736,	// (0x00043b7a) bg_active_tab_pane_g1_cp4_srt

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp4_srt

0xc73f,	// (0x00043b83) bg_active_tab_pane_g3_cp4_srt

0xb425,	// (0x00042869) tabs_3_long_active_pane_srt_ParamLimits

0xb425,	// (0x00042869) tabs_3_long_active_pane_srt

0xb425,	// (0x00042869) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb425,	// (0x00042869) tabs_3_long_passive_pane_cp_srt

0xb425,	// (0x00042869) tabs_3_long_passive_pane_srt_ParamLimits

0xb425,	// (0x00042869) tabs_3_long_passive_pane_srt

0x245f,	// (0x000398a3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x245f,	// (0x000398a3) bg_passive_tab_pane_cp5_srt

0x9d40,	// (0x00041184) bg_passive_tab_pane_g1_cp5_srt

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp5_srt

0x9d49,	// (0x0004118d) bg_passive_tab_pane_g3_cp5_srt

0xb433,	// (0x00042877) bg_active_tab_pane_cp5_srt_ParamLimits

0xb433,	// (0x00042877) bg_active_tab_pane_cp5_srt

0xc720,	// (0x00043b64) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc720,	// (0x00043b64) tabs_3_long_active_pane_srt_t1

0x9d40,	// (0x00041184) bg_active_tab_pane_g1_cp5_srt

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp5_srt

0x9d49,	// (0x0004118d) bg_active_tab_pane_g3_cp5_srt

0x3c8a,	// (0x0003b0ce) navi_text_pane_srt_t1

0x3c82,	// (0x0003b0c6) navi_icon_pane_srt_g1

0x22d6,	// (0x0003971a) midp_editing_number_pane_srt

0x2114,	// (0x00039558) midp_ticker_pane_srt

0x22de,	// (0x00039722) midp_ticker_pane_srt_g1

0x22e6,	// (0x0003972a) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x00046ba7) midp_ticker_pane_srt_g

0x22ee,	// (0x00039732) midp_ticker_pane_srt_t1

0x3c73,	// (0x0003b0b7) midp_editing_number_pane_t1_copy1

0x9dcd,	// (0x00041211) listscroll_midp_pane

0x9dcd,	// (0x00041211) midp_form_pane

0x9e38,	// (0x0004127c) midp_info_popup_window_ParamLimits

0x9e38,	// (0x0004127c) midp_info_popup_window

0xb88e,	// (0x00042cd2) bg_popup_sub_pane_cp50_ParamLimits

0xb88e,	// (0x00042cd2) bg_popup_sub_pane_cp50

0x2dc7,	// (0x0003a20b) listscroll_midp_info_pane_ParamLimits

0x2dc7,	// (0x0003a20b) listscroll_midp_info_pane

0x2da7,	// (0x0003a1eb) listscroll_form_midp_pane_ParamLimits

0x2da7,	// (0x0003a1eb) listscroll_form_midp_pane

0x2db3,	// (0x0003a1f7) scroll_bar_cp050

0x2da7,	// (0x0003a1eb) list_midp_pane

0xcb3f,	// (0x00043f83) signal_pane_g2_cp

0x2cc1,	// (0x0003a105) listscroll_midp_info_pane_t1_ParamLimits

0x2cc1,	// (0x0003a105) listscroll_midp_info_pane_t1

0xc216,	// (0x0004365a) listscroll_midp_info_pane_t2_ParamLimits

0xc216,	// (0x0004365a) listscroll_midp_info_pane_t2

0xc254,	// (0x00043698) listscroll_midp_info_pane_t3_ParamLimits

0xc254,	// (0x00043698) listscroll_midp_info_pane_t3

0xc28e,	// (0x000436d2) listscroll_midp_info_pane_t4_ParamLimits

0xc28e,	// (0x000436d2) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00046c53) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00046c53) listscroll_midp_info_pane_t

0xb904,	// (0x00042d48) scroll_pane_cp21

0x2c61,	// (0x0003a0a5) form_midp_field_choice_group_pane

0xc1d9,	// (0x0004361d) form_midp_field_text_pane

0x2ca7,	// (0x0003a0eb) form_midp_field_time_pane

0x2caf,	// (0x0003a0f3) form_midp_gauge_slider_pane

0x2cb8,	// (0x0003a0fc) form_midp_gauge_wait_pane

0xb3d7,	// (0x0004281b) form_midp_image_pane

0xa941,	// (0x00041d85) list_single_midp_pane_ParamLimits

0xa941,	// (0x00041d85) list_single_midp_pane

0xc1b7,	// (0x000435fb) form_midp_field_text_pane_t1

0x29e0,	// (0x00039e24) input_focus_pane_cp050

0x2c50,	// (0x0003a094) list_midp_form_text_pane

0x2be5,	// (0x0003a029) form_midp_field_choice_group_pane_t1

0x2bf3,	// (0x0003a037) input_focus_pane_cp051

0x2c07,	// (0x0003a04b) list_midp_choice_pane

0xb3d7,	// (0x0004281b) status_idle_pane

0x2bc9,	// (0x0003a00d) form_midp_field_time_pane_t1

0xb3cd,	// (0x00042811) wait_anim_pane_g2_copy1

0x2bd7,	// (0x0003a01b) form_midp_field_time_pane_t2

0x0001,

0x223e,	// (0x00039682) aid_navinavi_width_2_pane

0xf80a,	// (0x00046c4e) form_midp_field_time_pane_t

0xb3d7,	// (0x0004281b) input_focus_pane_cp052

0xb3d7,	// (0x0004281b) bg_input_focus_pane_cp040

0x2b89,	// (0x00039fcd) form_midp_gauge_slider_pane_t1

0x2b97,	// (0x00039fdb) form_midp_gauge_slider_pane_t2

0xc19b,	// (0x000435df) form_midp_gauge_slider_pane_t3

0xc1a9,	// (0x000435ed) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00046c45) form_midp_gauge_slider_pane_t

0x2bc1,	// (0x0003a005) form_midp_slider_pane

0xb433,	// (0x00042877) bg_input_focus_pane_cp041_ParamLimits

0xb433,	// (0x00042877) bg_input_focus_pane_cp041

0x2b56,	// (0x00039f9a) form_midp_gauge_wait_pane_t1_ParamLimits

0x2b56,	// (0x00039f9a) form_midp_gauge_wait_pane_t1

0x2b68,	// (0x00039fac) form_midp_gauge_wait_pane_t2_ParamLimits

0x2b68,	// (0x00039fac) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x00046c40) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x00046c40) form_midp_gauge_wait_pane_t

0x2b7a,	// (0x00039fbe) form_midp_wait_pane_ParamLimits

0x2b7a,	// (0x00039fbe) form_midp_wait_pane

0xc165,	// (0x000435a9) form_midp_image_pane_g1

0xc16e,	// (0x000435b2) form_midp_image_pane_t1

0xc17d,	// (0x000435c1) form_midp_image_pane_t2

0xc18c,	// (0x000435d0) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x00046c39) form_midp_image_pane_t

0x2b17,	// (0x00039f5b) list_single_midp_pane_g1

0xd415,	// (0x00044859) list_single_midp_pane_t1

0xc150,	// (0x00043594) list_midp_form_item_pane_ParamLimits

0xc150,	// (0x00043594) list_midp_form_item_pane

0x21e6,	// (0x0003962a) list_midp_form_item_pane_t1

0x21f5,	// (0x00039639) midp_ticker_pane_g1

0x2201,	// (0x00039645) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x00046b8d) midp_ticker_pane_g

0x220d,	// (0x00039651) midp_ticker_pane_t1

0x3ec0,	// (0x0003b304) midp_editing_number_pane_t1

0x3e9e,	// (0x0003b2e2) midp_editing_number_pane

0x3ead,	// (0x0003b2f1) midp_ticker_pane

0x3c63,	// (0x0003b0a7) ai_message_heading_pane

0xb3d7,	// (0x0004281b) bg_popup_window_pane_cp14

0x3c6b,	// (0x0003b0af) listscroll_ai_message_pane

0x3bed,	// (0x0003b031) ai_message_heading_pane_g1_ParamLimits

0x3bed,	// (0x0003b031) ai_message_heading_pane_g1

0xc6e8,	// (0x00043b2c) ai_message_heading_pane_g2_ParamLimits

0xc6e8,	// (0x00043b2c) ai_message_heading_pane_g2

0x3c05,	// (0x0003b049) ai_message_heading_pane_g3_ParamLimits

0x3c05,	// (0x0003b049) ai_message_heading_pane_g3

0x3c11,	// (0x0003b055) ai_message_heading_pane_g4_ParamLimits

0x3c11,	// (0x0003b055) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x00046d7a) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x00046d7a) ai_message_heading_pane_g

0xc6f4,	// (0x00043b38) ai_message_heading_pane_t1_ParamLimits

0xc6f4,	// (0x00043b38) ai_message_heading_pane_t1

0xc70e,	// (0x00043b52) ai_message_heading_pane_t2_ParamLimits

0xc70e,	// (0x00043b52) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x00046d83) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x00046d83) ai_message_heading_pane_t

0x3c49,	// (0x0003b08d) bg_popup_heading_pane_cp1_ParamLimits

0x3c49,	// (0x0003b08d) bg_popup_heading_pane_cp1

0x3bdb,	// (0x0003b01f) list_ai_message_pane_ParamLimits

0x3bdb,	// (0x0003b01f) list_ai_message_pane

0xb904,	// (0x00042d48) scroll_pane_cp10

0x3b77,	// (0x0003afbb) list_ai_message_pane_g1

0x3b7f,	// (0x0003afc3) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00046d57) list_ai_message_pane_g

0x3b87,	// (0x0003afcb) list_ai_message_pane_t1_ParamLimits

0x3b87,	// (0x0003afcb) list_ai_message_pane_t1

0x3b9c,	// (0x0003afe0) list_ai_message_pane_t2_ParamLimits

0x3b9c,	// (0x0003afe0) list_ai_message_pane_t2

0x3bb1,	// (0x0003aff5) list_ai_message_pane_t3_ParamLimits

0x3bb1,	// (0x0003aff5) list_ai_message_pane_t3

0x3bc6,	// (0x0003b00a) list_ai_message_pane_t4_ParamLimits

0x3bc6,	// (0x0003b00a) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x00046d5c) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x00046d5c) list_ai_message_pane_t

0xc6c4,	// (0x00043b08) cell_ai_soft_ind_pane_ParamLimits

0xc6c4,	// (0x00043b08) cell_ai_soft_ind_pane

0x221f,	// (0x00039663) cell_ai_soft_ind_pane_g1_ParamLimits

0x221f,	// (0x00039663) cell_ai_soft_ind_pane_g1

0xb3d7,	// (0x0004281b) grid_highlight_cp1

0x222c,	// (0x00039670) text_secondary_cp56_ParamLimits

0x222c,	// (0x00039670) text_secondary_cp56

0x3b37,	// (0x0003af7b) example_general_pane_ParamLimits

0x3b37,	// (0x0003af7b) example_general_pane

0x3b43,	// (0x0003af87) example_parent_pane_g1_ParamLimits

0x3b43,	// (0x0003af87) example_parent_pane_g1

0x3b4f,	// (0x0003af93) example_parent_pane_t1_ParamLimits

0x3b4f,	// (0x0003af93) example_parent_pane_t1

0xa53a,	// (0x0004197e) popup_preview_text_window_ParamLimits

0xa53a,	// (0x0004197e) popup_preview_text_window

0x0154,	// (0x00037598) list_single_pane_cp2_g4

0xb605,	// (0x00042a49) bg_popup_preview_window_pane_ParamLimits

0xb605,	// (0x00042a49) bg_popup_preview_window_pane

0xc626,	// (0x00043a6a) popup_preview_text_window_t1_ParamLimits

0xc626,	// (0x00043a6a) popup_preview_text_window_t1

0x38af,	// (0x0003acf3) popup_preview_text_window_t2_ParamLimits

0x38af,	// (0x0003acf3) popup_preview_text_window_t2

0x38f8,	// (0x0003ad3c) popup_preview_text_window_t3_ParamLimits

0x38f8,	// (0x0003ad3c) popup_preview_text_window_t3

0x393d,	// (0x0003ad81) popup_preview_text_window_t4_ParamLimits

0x393d,	// (0x0003ad81) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x00046d2b) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x00046d2b) popup_preview_text_window_t

0x39bb,	// (0x0003adff) scroll_pane_cp11

0x296c,	// (0x00039db0) bg_popup_preview_window_pane_g1

0xc5e6,	// (0x00043a2a) bg_popup_preview_window_pane_g2

0xc5ee,	// (0x00043a32) bg_popup_preview_window_pane_g3

0xc5f6,	// (0x00043a3a) bg_popup_preview_window_pane_g4

0xc5fe,	// (0x00043a42) bg_popup_preview_window_pane_g5

0xc606,	// (0x00043a4a) bg_popup_preview_window_pane_g6

0xc60e,	// (0x00043a52) bg_popup_preview_window_pane_g7

0xc616,	// (0x00043a5a) bg_popup_preview_window_pane_g8

0xee12,	// (0x00046256) aid_popup_width_pane

0xa4b6,	// (0x000418fa) popup_midp_note_alarm_window_ParamLimits

0xa4b6,	// (0x000418fa) popup_midp_note_alarm_window

0xb7d9,	// (0x00042c1d) data_form_pane_ParamLimits

0x977d,	// (0x00040bc1) form_field_data_pane_g1

0x9787,	// (0x00040bcb) form_field_data_pane_t1_ParamLimits

0xb7e5,	// (0x00042c29) input_focus_pane_ParamLimits

0x97a1,	// (0x00040be5) data_form_wide_pane_ParamLimits

0x97b2,	// (0x00040bf6) form_field_data_wide_pane_g1

0x97be,	// (0x00040c02) form_field_data_wide_pane_t1_ParamLimits

0xb6d9,	// (0x00042b1d) input_focus_pane_cp6_ParamLimits

0x995e,	// (0x00040da2) input_popup_find_pane_g1_ParamLimits

0x995e,	// (0x00040da2) input_popup_find_pane_g1

0xf09d,	// (0x000464e1) aid_navi_side_left_pane

0xf0b2,	// (0x000464f6) aid_navi_side_right_pane

0x327a,	// (0x0003a6be) bg_popup_window_pane_cp30_ParamLimits

0x327a,	// (0x0003a6be) bg_popup_window_pane_cp30

0x32f4,	// (0x0003a738) popup_midp_note_alarm_window_g1_ParamLimits

0x32f4,	// (0x0003a738) popup_midp_note_alarm_window_g1

0x3324,	// (0x0003a768) popup_midp_note_alarm_window_t1_ParamLimits

0x3324,	// (0x0003a768) popup_midp_note_alarm_window_t1

0xc42f,	// (0x00043873) popup_midp_note_alarm_window_t2_ParamLimits

0xc42f,	// (0x00043873) popup_midp_note_alarm_window_t2

0xc4dd,	// (0x00043921) popup_midp_note_alarm_window_t3_ParamLimits

0xc4dd,	// (0x00043921) popup_midp_note_alarm_window_t3

0xc505,	// (0x00043949) popup_midp_note_alarm_window_t4_ParamLimits

0xc505,	// (0x00043949) popup_midp_note_alarm_window_t4

0x34bb,	// (0x0003a8ff) popup_midp_note_alarm_window_t5_ParamLimits

0x34bb,	// (0x0003a8ff) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x00046cc8) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x00046cc8) popup_midp_note_alarm_window_t

0x3567,	// (0x0003a9ab) wait_bar_pane_cp1_ParamLimits

0x3567,	// (0x0003a9ab) wait_bar_pane_cp1

0xb3d7,	// (0x0004281b) wait_anim_pane_copy1

0xb3d7,	// (0x0004281b) wait_border_pane_copy1

0x2f70,	// (0x0003a3b4) wait_border_pane_g1_copy1

0x97d8,	// (0x00040c1c) form_field_popup_pane_g1

0x97e0,	// (0x00040c24) form_field_popup_pane_t1_ParamLimits

0xb7e5,	// (0x00042c29) input_focus_pane_cp7_ParamLimits

0xb813,	// (0x00042c57) list_form_pane_ParamLimits

0x97fa,	// (0x00040c3e) form_field_popup_wide_pane_g1

0x9802,	// (0x00040c46) form_field_popup_wide_pane_t1_ParamLimits

0xb7e5,	// (0x00042c29) input_focus_pane_cp8_ParamLimits

0xb81f,	// (0x00042c63) list_form_wide_pane_ParamLimits

0xc9f6,	// (0x00043e3a) aid_size_cell_graphic_pane

0x988e,	// (0x00040cd2) data_form_pane_t1_ParamLimits

0xaa2f,	// (0x00041e73) data_form_wide_pane_t1_ParamLimits

0xbdbf,	// (0x00043203) bg_status_flat_pane

0x8df3,	// (0x00040237) title_pane_t1_ParamLimits

0xb3ed,	// (0x00042831) title_pane_t2_ParamLimits

0xb413,	// (0x00042857) title_pane_t3_ParamLimits

0xf557,	// (0x0004699b) title_pane_t_ParamLimits

0xbbad,	// (0x00042ff1) level_1_signal_ParamLimits

0xbbba,	// (0x00042ffe) level_2_signal_ParamLimits

0xbbc7,	// (0x0004300b) level_3_signal_ParamLimits

0xbbd4,	// (0x00043018) level_4_signal_ParamLimits

0xbbe1,	// (0x00043025) level_5_signal_ParamLimits

0xbbee,	// (0x00043032) level_6_signal_ParamLimits

0xbbfb,	// (0x0004303f) level_7_signal_ParamLimits

0xbbad,	// (0x00042ff1) level_1_battery_ParamLimits

0xbbba,	// (0x00042ffe) level_2_battery_ParamLimits

0xbbc7,	// (0x0004300b) level_3_battery_ParamLimits

0xbbd4,	// (0x00043018) level_4_battery_ParamLimits

0xbbe1,	// (0x00043025) level_5_battery_ParamLimits

0xbbee,	// (0x00043032) level_6_battery_ParamLimits

0xbbfb,	// (0x0004303f) level_7_battery_ParamLimits

0x317f,	// (0x0003a5c3) bg_status_flat_pane_g1

0x3187,	// (0x0003a5cb) bg_status_flat_pane_g2

0x318f,	// (0x0003a5d3) bg_status_flat_pane_g3

0x3197,	// (0x0003a5db) bg_status_flat_pane_g4

0x319f,	// (0x0003a5e3) bg_status_flat_pane_g5

0x31a7,	// (0x0003a5eb) bg_status_flat_pane_g6

0x31af,	// (0x0003a5f3) bg_status_flat_pane_g7

0x8e87,	// (0x000402cb) tabs_3_active_pane_t1_ParamLimits

0x8e87,	// (0x000402cb) tabs_3_passive_pane_t1_ParamLimits

0x8ea1,	// (0x000402e5) tabs_4_active_pane_t1_ParamLimits

0x8ea1,	// (0x000402e5) tabs_4_1_passive_pane_t1_ParamLimits

0x999d,	// (0x00040de1) tabs_2_active_pane_t1_ParamLimits

0x999d,	// (0x00040de1) tabs_2_passive_pane_t1_ParamLimits

0xb433,	// (0x00042877) bg_active_tab_pane_cp4_ParamLimits

0x99af,	// (0x00040df3) tabs_2_long_active_pane_t1_ParamLimits

0x245f,	// (0x000398a3) bg_passive_tab_pane_cp4_ParamLimits

0x09c1,	// (0x00037e05) list_single_midp_graphic_pane_t1_ParamLimits

0xb433,	// (0x00042877) bg_active_tab_pane_cp5_ParamLimits

0x99c2,	// (0x00040e06) tabs_3_long_active_pane_t1_ParamLimits

0x245f,	// (0x000398a3) bg_passive_tab_pane_cp5_ParamLimits

0x09c1,	// (0x00037e05) list_single_midp_graphic_pane_t1

0xbdbf,	// (0x00043203) bg_status_flat_pane_ParamLimits

0x25ff,	// (0x00039a43) indicator_pane_cp2_ParamLimits

0x25ff,	// (0x00039a43) indicator_pane_cp2

0xbf3d,	// (0x00043381) navi_pane_srt_ParamLimits

0xbf3d,	// (0x00043381) navi_pane_srt

0x274e,	// (0x00039b92) popup_clock_digital_analogue_window_cp1

0xb477,	// (0x000428bb) indicator_pane_t1

0x2114,	// (0x00039558) copy_highlight_pane

0x2114,	// (0x00039558) cursor_graphics_pane

0x2114,	// (0x00039558) graphic_within_text_pane

0x2114,	// (0x00039558) link_highlight_pane

0x397e,	// (0x0003adc2) popup_preview_text_window_t5_ParamLimits

0x397e,	// (0x0003adc2) popup_preview_text_window_t5

0x2246,	// (0x0003968a) cursor_digital_pane

0x2246,	// (0x0003968a) cursor_primary_pane

0x2257,	// (0x0003969b) cursor_primary_small_pane

0x225f,	// (0x000396a3) cursor_secondary_pane

0x2267,	// (0x000396ab) cursor_title_pane

0x2246,	// (0x0003968a) link_highlight_digital_pane

0x224e,	// (0x00039692) link_highlight_primary_pane

0x2257,	// (0x0003969b) link_highlight_primary_small_pane

0x225f,	// (0x000396a3) link_highlight_secondary_pane

0x2267,	// (0x000396ab) link_highlight_title_pane

0x2246,	// (0x0003968a) copy_highlight_digital_pane

0x2246,	// (0x0003968a) copy_highlight_primary_pane

0x2257,	// (0x0003969b) copy_highlight_primary_small_pane

0x225f,	// (0x000396a3) copy_highlight_secondary_pane

0x2267,	// (0x000396ab) copy_highlight_title_pane

0x225f,	// (0x000396a3) graphic_text_digital_pane

0x321d,	// (0x0003a661) graphic_text_primary_pane

0x3226,	// (0x0003a66a) graphic_text_primary_small_pane

0x2257,	// (0x0003969b) graphic_text_secondary_pane

0x2246,	// (0x0003968a) graphic_text_title_pane

0x9e89,	// (0x000412cd) cursor_primary_pane_g1

0x320f,	// (0x0003a653) cursor_text_primary_t1

0xc425,	// (0x00043869) cursor_primary_small_pane_g1

0x3201,	// (0x0003a645) cursor_text_primary_small_t1

0xc41b,	// (0x0004385f) cursor_primary_small_pane_g1_copy1

0x31e9,	// (0x0003a62d) cursor_text_primary_small_t1_copy1

0x31c7,	// (0x0003a60b) cursor_text_title_t1

0xc411,	// (0x00043855) cursor_title_pane_g1

0x9e89,	// (0x000412cd) cursor_digital_pane_g1

0x2279,	// (0x000396bd) cursor_text_digital_t1

0x2287,	// (0x000396cb) link_highlight_primary_pane_g1

0x3170,	// (0x0003a5b4) link_highlight_primary_pane_t1

0x2287,	// (0x000396cb) link_highlight_primary_small_pane_g1

0x228f,	// (0x000396d3) link_highlight_primary_small_pane_t1

0x2287,	// (0x000396cb) link_highlight_secondary_pane_g1

0x229e,	// (0x000396e2) link_highlight_secondary_pane_t1

0x30d5,	// (0x0003a519) link_highlight_title_pane_g1

0x30ec,	// (0x0003a530) link_highlight_title_pane_t1

0x30d5,	// (0x0003a519) link_highlight_digital_pane_g1

0x30dd,	// (0x0003a521) link_highlight_digital_pane_t1

0x2f8f,	// (0x0003a3d3) copy_highlight_primary_pane_g1

0x2fb5,	// (0x0003a3f9) copy_highlight_primary_pane_t1

0x2f8f,	// (0x0003a3d3) copy_highlight_primary_small_pane_g1

0x2fa6,	// (0x0003a3ea) copy_highlight_primary_small_pane_t1

0x22ad,	// (0x000396f1) copy_highlight_secondary_pane_g1

0x22b5,	// (0x000396f9) copy_highlight_secondary_pane_t1

0x2f8f,	// (0x0003a3d3) copy_highlight_title_pane_g1

0x2f97,	// (0x0003a3db) copy_highlight_title_pane_t1

0x2f8f,	// (0x0003a3d3) copy_highlight_digital_pane_g1

0x4218,	// (0x0003b65c) copy_highlight_digital_pane_t1

0x416c,	// (0x0003b5b0) graphic_text_primary_pane_g1

0x41fc,	// (0x0003b640) graphic_text_primary_pane_t1

0x420a,	// (0x0003b64e) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00046df7) graphic_text_primary_pane_t

0x41d8,	// (0x0003b61c) graphic_text_primary_small_pane_g1

0x41e0,	// (0x0003b624) graphic_text_primary_small_pane_t1

0x41ee,	// (0x0003b632) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00046df2) graphic_text_primary_small_pane_t

0x41b4,	// (0x0003b5f8) graphic_text_secondary_pane_g1

0x41bc,	// (0x0003b600) graphic_text_secondary_pane_t1

0x41ca,	// (0x0003b60e) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00046ded) graphic_text_secondary_pane_t

0x4190,	// (0x0003b5d4) graphic_text_title_pane_g1

0x4198,	// (0x0003b5dc) graphic_text_title_pane_t1

0x41a6,	// (0x0003b5ea) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00046de8) graphic_text_title_pane_t

0x416c,	// (0x0003b5b0) graphic_text_digital_pane_g1

0x4174,	// (0x0003b5b8) graphic_text_digital_pane_t1

0x4182,	// (0x0003b5c6) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00046de3) graphic_text_digital_pane_t

0xb433,	// (0x00042877) navi_icon_pane_srt_ParamLimits

0xb433,	// (0x00042877) navi_icon_pane_srt

0xb3d7,	// (0x0004281b) navi_midp_pane_srt

0xb3d7,	// (0x0004281b) navi_navi_pane_srt

0xb433,	// (0x00042877) navi_text_pane_srt_ParamLimits

0xb433,	// (0x00042877) navi_text_pane_srt

0x4137,	// (0x0003b57b) navi_navi_icon_text_pane_srt

0x413f,	// (0x0003b583) navi_navi_pane_srt_g1_ParamLimits

0x413f,	// (0x0003b583) navi_navi_pane_srt_g1

0x4151,	// (0x0003b595) navi_navi_pane_srt_g2_ParamLimits

0x4151,	// (0x0003b595) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00046dde) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00046dde) navi_navi_pane_srt_g

0x4163,	// (0x0003b5a7) navi_navi_tabs_pane_srt

0x4137,	// (0x0003b57b) navi_navi_text_pane_srt

0x4137,	// (0x0003b57b) navi_navi_volume_pane_srt

0x4128,	// (0x0003b56c) navi_navi_text_pane_srt_t1

0x0e8e,	// (0x000382d2) navi_navi_volume_pane_srt_g1

0x0e96,	// (0x000382da) volume_small_pane_srt_ParamLimits

0x0e96,	// (0x000382da) volume_small_pane_srt

0x0168,	// (0x000375ac) volume_small_pane_srt_g1_ParamLimits

0x0168,	// (0x000375ac) volume_small_pane_srt_g1

0x0178,	// (0x000375bc) volume_small_pane_srt_g2_ParamLimits

0x0178,	// (0x000375bc) volume_small_pane_srt_g2

0x0189,	// (0x000375cd) volume_small_pane_srt_g3_ParamLimits

0x0189,	// (0x000375cd) volume_small_pane_srt_g3

0x019a,	// (0x000375de) volume_small_pane_srt_g4_ParamLimits

0x019a,	// (0x000375de) volume_small_pane_srt_g4

0x01ab,	// (0x000375ef) volume_small_pane_srt_g5_ParamLimits

0x01ab,	// (0x000375ef) volume_small_pane_srt_g5

0x01bc,	// (0x00037600) volume_small_pane_srt_g6_ParamLimits

0x01bc,	// (0x00037600) volume_small_pane_srt_g6

0x01cd,	// (0x00037611) volume_small_pane_srt_g7_ParamLimits

0x01cd,	// (0x00037611) volume_small_pane_srt_g7

0x01de,	// (0x00037622) volume_small_pane_srt_g8_ParamLimits

0x01de,	// (0x00037622) volume_small_pane_srt_g8

0x01ef,	// (0x00037633) volume_small_pane_srt_g9_ParamLimits

0x01ef,	// (0x00037633) volume_small_pane_srt_g9

0x0200,	// (0x00037644) volume_small_pane_srt_g10_ParamLimits

0x0200,	// (0x00037644) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x00046b92) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x00046b92) volume_small_pane_srt_g

0x9162,	// (0x000405a6) query_popup_data_pane_cp2

0x410e,	// (0x0003b552) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x410e,	// (0x0003b552) navi_navi_icon_text_pane_srt_t1

0x321d,	// (0x0003a661) navi_tabs_2_long_pane_srt

0x321d,	// (0x0003a661) navi_tabs_2_pane_srt

0x321d,	// (0x0003a661) navi_tabs_3_long_pane_srt

0x321d,	// (0x0003a661) navi_tabs_3_pane_srt

0x321d,	// (0x0003a661) navi_tabs_4_pane_srt

0xaacc,	// (0x00041f10) tabs_2_active_pane_srt_ParamLimits

0xaacc,	// (0x00041f10) tabs_2_active_pane_srt

0xaadc,	// (0x00041f20) tabs_2_passive_pane_srt_ParamLimits

0xaadc,	// (0x00041f20) tabs_2_passive_pane_srt

0x29e0,	// (0x00039e24) bg_passive_tab_pane_cp1_srt_ParamLimits

0x29e0,	// (0x00039e24) bg_passive_tab_pane_cp1_srt

0xca40,	// (0x00043e84) bg_passive_tab_pane_g1_cp1_srt

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp1_srt

0xca49,	// (0x00043e8d) bg_passive_tab_pane_g3_cp1_srt

0xb425,	// (0x00042869) bg_active_tab_pane_cp1_srt_ParamLimits

0xb425,	// (0x00042869) bg_active_tab_pane_cp1_srt

0xca52,	// (0x00043e96) tabs_2_active_pane_srt_g1

0xca5a,	// (0x00043e9e) tabs_2_active_pane_srt_t1_ParamLimits

0xca5a,	// (0x00043e9e) tabs_2_active_pane_srt_t1

0xca40,	// (0x00043e84) bg_active_tab_pane_g1_cp1_srt

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp1_srt

0xca49,	// (0x00043e8d) bg_active_tab_pane_g3_cp1_srt

0xaa99,	// (0x00041edd) tabs_3_active_pane_srt_ParamLimits

0xaa99,	// (0x00041edd) tabs_3_active_pane_srt

0xaaaa,	// (0x00041eee) tabs_3_passive_pane_cp_srt_ParamLimits

0xaaaa,	// (0x00041eee) tabs_3_passive_pane_cp_srt

0xaabb,	// (0x00041eff) tabs_3_passive_pane_srt_ParamLimits

0xaabb,	// (0x00041eff) tabs_3_passive_pane_srt

0x29e0,	// (0x00039e24) bg_passive_tab_pane_cp2_srt_ParamLimits

0x29e0,	// (0x00039e24) bg_passive_tab_pane_cp2_srt

0x9e93,	// (0x000412d7) bg_passive_tab_pane_g1_cp2_srt

0x9cf4,	// (0x00041138) bg_passive_tab_pane_g2_cp2_srt

0x9e9c,	// (0x000412e0) bg_passive_tab_pane_g3_cp2_srt

0xb425,	// (0x00042869) bg_active_tab_pane_cp2_srt_ParamLimits

0xb425,	// (0x00042869) bg_active_tab_pane_cp2_srt

0xca22,	// (0x00043e66) tabs_3_active_pane_srt_g1

0xca2a,	// (0x00043e6e) tabs_3_active_pane_srt_t1_ParamLimits

0xca2a,	// (0x00043e6e) tabs_3_active_pane_srt_t1

0x9e93,	// (0x000412d7) bg_active_tab_pane_g1_cp2_srt

0x9cf4,	// (0x00041138) bg_active_tab_pane_g2_cp2_srt

0x9e9c,	// (0x000412e0) bg_active_tab_pane_g3_cp2_srt

0x0df3,	// (0x00038237) tabs_4_active_pane_srt_ParamLimits

0x0df3,	// (0x00038237) tabs_4_active_pane_srt

0x0e05,	// (0x00038249) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0e05,	// (0x00038249) tabs_4_passive_pane_cp2_srt

0x036f,	// (0x000377b3) aid_size_cell_toolbar

0x3d1b,	// (0x0003b15f) main_idle_act_pane_ParamLimits

0xa2f8,	// (0x0004173c) popup_large_graphic_colour_window_ParamLimits

0xa7ec,	// (0x00041c30) popup_toolbar_window_ParamLimits

0xa7ec,	// (0x00041c30) popup_toolbar_window

0xd424,	// (0x00044868) list_single_graphic_2heading_pane_ParamLimits

0xd424,	// (0x00044868) list_single_graphic_2heading_pane

0xba95,	// (0x00042ed9) aid_size_cell_apps_grid_lsc_pane

0xbaa7,	// (0x00042eeb) aid_size_cell_apps_grid_prt_pane

0x245f,	// (0x000398a3) bg_wml_button_pane_cp1_ParamLimits

0x245f,	// (0x000398a3) bg_wml_button_pane_cp1

0xc1b7,	// (0x000435fb) form_midp_field_text_pane_t1_ParamLimits

0x29e0,	// (0x00039e24) input_focus_pane_cp050_ParamLimits

0x2c50,	// (0x0003a094) list_midp_form_text_pane_ParamLimits

0x2bf3,	// (0x0003a037) input_focus_pane_cp051_ParamLimits

0x2c07,	// (0x0003a04b) list_midp_choice_pane_ParamLimits

0xc11c,	// (0x00043560) list_single_2graphic_pane_cp3_ParamLimits

0xc11c,	// (0x00043560) list_single_2graphic_pane_cp3

0xc130,	// (0x00043574) list_single_midp_graphic_pane_ParamLimits

0xc130,	// (0x00043574) list_single_midp_graphic_pane

0xf145,	// (0x00046589) list_single_graphic_2heading_pane_g1_ParamLimits

0xf145,	// (0x00046589) list_single_graphic_2heading_pane_g1

0xf151,	// (0x00046595) list_single_graphic_2heading_pane_g4_ParamLimits

0xf151,	// (0x00046595) list_single_graphic_2heading_pane_g4

0xf15d,	// (0x000465a1) list_single_graphic_2heading_pane_g5_ParamLimits

0xf15d,	// (0x000465a1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x00046be5) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x00046be5) list_single_graphic_2heading_pane_g

0xf169,	// (0x000465ad) list_single_graphic_2heading_pane_t1_ParamLimits

0xf169,	// (0x000465ad) list_single_graphic_2heading_pane_t1

0xf17d,	// (0x000465c1) list_single_graphic_2heading_pane_t2_ParamLimits

0xf17d,	// (0x000465c1) list_single_graphic_2heading_pane_t2

0xf197,	// (0x000465db) list_single_graphic_2heading_pane_t3_ParamLimits

0xf197,	// (0x000465db) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x00046bec) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x00046bec) list_single_graphic_2heading_pane_t

0x28aa,	// (0x00039cee) bg_popup_sub_pane_cp2

0x28d4,	// (0x00039d18) grid_toobar_pane

0x0930,	// (0x00037d74) cell_toolbar_pane_ParamLimits

0x0930,	// (0x00037d74) cell_toolbar_pane

0x2910,	// (0x00039d54) cell_toolbar_pane_g1_ParamLimits

0x2910,	// (0x00039d54) cell_toolbar_pane_g1

0xc0dc,	// (0x00043520) cell_toolbar_pane_g2_ParamLimits

0xc0dc,	// (0x00043520) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x00046bf3) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x00046bf3) cell_toolbar_pane_g

0x2946,	// (0x00039d8a) grid_highlight_pane_cp2_ParamLimits

0x2946,	// (0x00039d8a) grid_highlight_pane_cp2

0x2960,	// (0x00039da4) toolbar_button_pane

0x296c,	// (0x00039db0) toolbar_button_pane_g1

0x2974,	// (0x00039db8) toolbar_button_pane_g2

0x297c,	// (0x00039dc0) toolbar_button_pane_g3

0x2984,	// (0x00039dc8) toolbar_button_pane_g4

0x298c,	// (0x00039dd0) toolbar_button_pane_g5

0x2994,	// (0x00039dd8) toolbar_button_pane_g6

0x299c,	// (0x00039de0) toolbar_button_pane_g7

0x29a4,	// (0x00039de8) toolbar_button_pane_g8

0x29ac,	// (0x00039df0) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x00046bf8) toolbar_button_pane_g

0x0968,	// (0x00037dac) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0968,	// (0x00037dac) list_single_2graphic_pane_g1_cp3

0xa899,	// (0x00041cdd) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa899,	// (0x00041cdd) list_single_2graphic_pane_g2_cp3

0x0985,	// (0x00037dc9) list_single_2graphic_pane_g3_cp3

0x098d,	// (0x00037dd1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x098d,	// (0x00037dd1) list_single_2graphic_pane_g4_cp3

0xa8aa,	// (0x00041cee) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa8aa,	// (0x00041cee) list_single_2graphic_pane_t1_cp3

0x09b5,	// (0x00037df9) list_single_midp_graphic_pane_g2_ParamLimits

0x09b5,	// (0x00037df9) list_single_midp_graphic_pane_g2

0x0377,	// (0x000377bb) aid_zoom_text_primary

0xf129,	// (0x0004656d) aid_zoom_text_secondary

0x9ef3,	// (0x00041337) status_small_pane_g7_ParamLimits

0x9ef3,	// (0x00041337) status_small_pane_g7

0x9f16,	// (0x0004135a) status_small_pane_t1_ParamLimits

0x8dcf,	// (0x00040213) title_pane_g2

0x0003,

0xf54e,	// (0x00046992) title_pane_g

0x91bc,	// (0x00040600) aid_size_cell_colour_1_pane_ParamLimits

0x91bc,	// (0x00040600) aid_size_cell_colour_1_pane

0x91d0,	// (0x00040614) aid_size_cell_colour_2_pane_ParamLimits

0x91d0,	// (0x00040614) aid_size_cell_colour_2_pane

0x91e4,	// (0x00040628) aid_size_cell_colour_3_pane_ParamLimits

0x91e4,	// (0x00040628) aid_size_cell_colour_3_pane

0x91f8,	// (0x0004063c) aid_size_cell_colour_4_pane_ParamLimits

0x91f8,	// (0x0004063c) aid_size_cell_colour_4_pane

0xefda,	// (0x0004641e) title_pane_stacon_g1_ParamLimits

0xefda,	// (0x0004641e) title_pane_stacon_g1

0x300c,	// (0x0003a450) popup_note_wait_window_g3_ParamLimits

0x300c,	// (0x0003a450) popup_note_wait_window_g3

0x3082,	// (0x0003a4c6) popup_note_wait_window_t5_ParamLimits

0x3082,	// (0x0003a4c6) popup_note_wait_window_t5

0xb3d7,	// (0x0004281b) main_feb_china_hwr_fs_writing_pane

0xa17a,	// (0x000415be) popup_feb_china_hwr_fs_window_ParamLimits

0xa17a,	// (0x000415be) popup_feb_china_hwr_fs_window

0xa8c6,	// (0x00041d0a) aid_size_cell_hwr_fs_ParamLimits

0xa8c6,	// (0x00041d0a) aid_size_cell_hwr_fs

0x29e0,	// (0x00039e24) bg_popup_sub_pane_cp3_ParamLimits

0x29e0,	// (0x00039e24) bg_popup_sub_pane_cp3

0xa8db,	// (0x00041d1f) grid_hwr_fs_pane_ParamLimits

0xa8db,	// (0x00041d1f) grid_hwr_fs_pane

0x0a04,	// (0x00037e48) linegrid_hwr_fs_pane_ParamLimits

0x0a04,	// (0x00037e48) linegrid_hwr_fs_pane

0xa8f3,	// (0x00041d37) cell_hwr_fs_pane_ParamLimits

0xa8f3,	// (0x00041d37) cell_hwr_fs_pane

0x29ec,	// (0x00039e30) linegrid_hwr_fs_pane_g1_ParamLimits

0x29ec,	// (0x00039e30) linegrid_hwr_fs_pane_g1

0xc0f0,	// (0x00043534) linegrid_hwr_fs_pane_g2_ParamLimits

0xc0f0,	// (0x00043534) linegrid_hwr_fs_pane_g2

0x2a0a,	// (0x00039e4e) linegrid_hwr_fs_pane_g3_ParamLimits

0x2a0a,	// (0x00039e4e) linegrid_hwr_fs_pane_g3

0xa919,	// (0x00041d5d) linegrid_hwr_fs_pane_g4_ParamLimits

0xa919,	// (0x00041d5d) linegrid_hwr_fs_pane_g4

0x0a50,	// (0x00037e94) linegrid_hwr_fs_pane_g5_ParamLimits

0x0a50,	// (0x00037e94) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x00046c1e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x00046c1e) linegrid_hwr_fs_pane_g

0x2a16,	// (0x00039e5a) cell_hwr_fs_pane_g1_ParamLimits

0x2a16,	// (0x00039e5a) cell_hwr_fs_pane_g1

0x27e4,	// (0x00039c28) cell_hwr_fs_pane_g2_ParamLimits

0x27e4,	// (0x00039c28) cell_hwr_fs_pane_g2

0xc102,	// (0x00043546) cell_hwr_fs_pane_g3_ParamLimits

0xc102,	// (0x00043546) cell_hwr_fs_pane_g3

0xc10f,	// (0x00043553) cell_hwr_fs_pane_g4_ParamLimits

0xc10f,	// (0x00043553) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x00046c29) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x00046c29) cell_hwr_fs_pane_g

0xa933,	// (0x00041d77) cell_hwr_fs_pane_t1

0xb3d7,	// (0x0004281b) grid_highlight_pane_cp6

0xb3d7,	// (0x0004281b) main_idle_act2_pane

0xb8eb,	// (0x00042d2f) aid_inside_area_popup_secondary

0xc544,	// (0x00043988) aid_inside_area_window_primary_ParamLimits

0xc544,	// (0x00043988) aid_inside_area_window_primary

0xca78,	// (0x00043ebc) ai2_news_ticker_pane

0x422f,	// (0x0003b673) aid_size_cell_ai1_link_ParamLimits

0x422f,	// (0x0003b673) aid_size_cell_ai1_link

0xca80,	// (0x00043ec4) popup_ai2_data_window_ParamLimits

0xca80,	// (0x00043ec4) popup_ai2_data_window

0x425f,	// (0x0003b6a3) popup_ai2_link_window_ParamLimits

0x425f,	// (0x0003b6a3) popup_ai2_link_window

0x29e0,	// (0x00039e24) bg_popup_sub_pane_cp4_ParamLimits

0x29e0,	// (0x00039e24) bg_popup_sub_pane_cp4

0x4273,	// (0x0003b6b7) grid_ai2_link_pane_ParamLimits

0x4273,	// (0x0003b6b7) grid_ai2_link_pane

0x428a,	// (0x0003b6ce) popup_ai2_link_window_g1_ParamLimits

0x428a,	// (0x0003b6ce) popup_ai2_link_window_g1

0x4296,	// (0x0003b6da) popup_ai2_link_window_g2_ParamLimits

0x4296,	// (0x0003b6da) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00046dfc) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00046dfc) popup_ai2_link_window_g

0x42a5,	// (0x0003b6e9) ai2_mp_button_pane

0x42ad,	// (0x0003b6f1) ai2_mp_volume_pane

0x2bf3,	// (0x0003a037) bg_popup_sub_pane_cp5_ParamLimits

0x2bf3,	// (0x0003a037) bg_popup_sub_pane_cp5

0x42b5,	// (0x0003b6f9) heading_ai2_gene_pane_ParamLimits

0x42b5,	// (0x0003b6f9) heading_ai2_gene_pane

0x42c1,	// (0x0003b705) list_ai2_gene_pane_ParamLimits

0x42c1,	// (0x0003b705) list_ai2_gene_pane

0x4309,	// (0x0003b74d) cell_ai2_link_pane_ParamLimits

0x4309,	// (0x0003b74d) cell_ai2_link_pane

0x431f,	// (0x0003b763) cell_ai2_link_pane_g1

0xb3d7,	// (0x0004281b) grid_highlight_pane_cp7

0x0eab,	// (0x000382ef) ai2_mp_volume_pane_g1

0x43ef,	// (0x0003b833) ai2_mp_volume_pane_g2

0x4364,	// (0x0003b7a8) list_ai2_gene_pane_t1

0x43f7,	// (0x0003b83b) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00046e15) ai2_mp_volume_pane_g

0xaaec,	// (0x00041f30) volume_small_pane_cp3

0x43ff,	// (0x0003b843) aid_size_cell_ai2_button

0x4407,	// (0x0003b84b) grid_ai2_button_pane

0x4410,	// (0x0003b854) cell_ai2_button_pane_ParamLimits

0x4410,	// (0x0003b854) cell_ai2_button_pane

0xb3cd,	// (0x00042811) cell_ai2_button_pane_g1

0xb3d7,	// (0x0004281b) grid_highlight_pane_cp8

0x43af,	// (0x0003b7f3) ai2_gene_pane_t1_ParamLimits

0x43af,	// (0x0003b7f3) ai2_gene_pane_t1

0xa0e4,	// (0x00041528) aid_height_parent_landscape

0xc792,	// (0x00043bd6) aid_height_set_list

0x3d1b,	// (0x0003b15f) aid_size_parent

0xc9f6,	// (0x00043e3a) aid_size_cell_graphic_pane_ParamLimits

0x42d1,	// (0x0003b715) popup_ai2_data_window_g1_ParamLimits

0x42d1,	// (0x0003b715) popup_ai2_data_window_g1

0x42dd,	// (0x0003b721) ai2_news_ticker_pane_g1

0x42e5,	// (0x0003b729) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00046e01) ai2_news_ticker_pane_g

0x42ed,	// (0x0003b731) ai2_news_ticker_pane_t1

0x42fb,	// (0x0003b73f) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00046e06) ai2_news_ticker_pane_t

0x4328,	// (0x0003b76c) heading_ai2_gene_pane_g1

0x4330,	// (0x0003b774) heading_ai2_gene_pane_t1_ParamLimits

0x4330,	// (0x0003b774) heading_ai2_gene_pane_t1

0x4345,	// (0x0003b789) list_highlight_pane_cp6

0x434d,	// (0x0003b791) ai2_gene_pane_ParamLimits

0x434d,	// (0x0003b791) ai2_gene_pane

0x4372,	// (0x0003b7b6) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00046e0b) list_ai2_gene_pane_t

0x4380,	// (0x0003b7c4) list_highlight_pane_cp8_ParamLimits

0x4380,	// (0x0003b7c4) list_highlight_pane_cp8

0x4391,	// (0x0003b7d5) ai2_gene_pane_g1_ParamLimits

0x4391,	// (0x0003b7d5) ai2_gene_pane_g1

0x43a3,	// (0x0003b7e7) ai2_gene_pane_g2_ParamLimits

0x43a3,	// (0x0003b7e7) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00046e10) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00046e10) ai2_gene_pane_g

0xb784,	// (0x00042bc8) scroll_pane_cp12

0xa0a1,	// (0x000414e5) control_pane_t3_ParamLimits

0xa0a1,	// (0x000414e5) control_pane_t3

0x9f07,	// (0x0004134b) status_small_pane_g8_ParamLimits

0x9f07,	// (0x0004134b) status_small_pane_g8

0xa23d,	// (0x00041681) popup_find_window_ParamLimits

0xa4f0,	// (0x00041934) popup_note_image_window_ParamLimits

0xd240,	// (0x00044684) list_double2_graphic_pane_vc_g1_ParamLimits

0xd240,	// (0x00044684) list_double2_graphic_pane_vc_g1

0xd24c,	// (0x00044690) list_double2_graphic_pane_vc_g2_ParamLimits

0xd24c,	// (0x00044690) list_double2_graphic_pane_vc_g2

0xd258,	// (0x0004469c) list_double2_graphic_pane_vc_g3_ParamLimits

0xd258,	// (0x0004469c) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00046a05) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00046a05) list_double2_graphic_pane_vc_g

0xd264,	// (0x000446a8) list_double2_graphic_pane_vc_t1_ParamLimits

0xd264,	// (0x000446a8) list_double2_graphic_pane_vc_t1

0xd24c,	// (0x00044690) list_single_heading_pane_vc_g1_ParamLimits

0xd24c,	// (0x00044690) list_single_heading_pane_vc_g1

0xd258,	// (0x0004469c) list_single_heading_pane_vc_g2_ParamLimits

0xd258,	// (0x0004469c) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_single_heading_pane_vc_g

0xd369,	// (0x000447ad) list_single_heading_pane_vc_t1_ParamLimits

0xd369,	// (0x000447ad) list_single_heading_pane_vc_t1

0xd37f,	// (0x000447c3) list_single_heading_pane_vc_t2_ParamLimits

0xd37f,	// (0x000447c3) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x00046c0d) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x00046c0d) list_single_heading_pane_vc_t

0xd391,	// (0x000447d5) list_setting_number_pane_vc_g1_ParamLimits

0xd391,	// (0x000447d5) list_setting_number_pane_vc_g1

0xd39d,	// (0x000447e1) list_setting_number_pane_vc_g2_ParamLimits

0xd39d,	// (0x000447e1) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00046c12) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00046c12) list_setting_number_pane_vc_g

0xd3a9,	// (0x000447ed) list_setting_number_pane_vc_t1_ParamLimits

0xd3a9,	// (0x000447ed) list_setting_number_pane_vc_t1

0xd3bd,	// (0x00044801) list_setting_number_pane_vc_t2_ParamLimits

0xd3bd,	// (0x00044801) list_setting_number_pane_vc_t2

0xd3d9,	// (0x0004481d) list_setting_number_pane_vc_t3_ParamLimits

0xd3d9,	// (0x0004481d) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x00046c17) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x00046c17) list_setting_number_pane_vc_t

0xd405,	// (0x00044849) set_value_pane_vc_ParamLimits

0xd405,	// (0x00044849) set_value_pane_vc

0xd424,	// (0x00044868) list_double2_graphic_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_double2_graphic_pane_vc

0x3eeb,	// (0x0003b32f) list_double2_large_graphic_pane_vc_ParamLimits

0x3eeb,	// (0x0003b32f) list_double2_large_graphic_pane_vc

0xd424,	// (0x00044868) list_double2_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_double2_pane_vc

0xd424,	// (0x00044868) list_double_graphic_heading_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_double_graphic_heading_pane_vc

0xd424,	// (0x00044868) list_double_graphic_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_double_graphic_pane_vc

0xd424,	// (0x00044868) list_double_heading_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_double_heading_pane_vc

0x3efd,	// (0x0003b341) list_double_large_graphic_pane_vc_ParamLimits

0x3efd,	// (0x0003b341) list_double_large_graphic_pane_vc

0xd424,	// (0x00044868) list_double_number_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_double_number_pane_vc

0xd424,	// (0x00044868) list_double_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_double_pane_vc

0xd424,	// (0x00044868) list_double_time_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_double_time_pane_vc

0xd424,	// (0x00044868) list_setting_number_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_setting_number_pane_vc

0xd424,	// (0x00044868) list_setting_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_setting_pane_vc

0xd424,	// (0x00044868) list_single_graphic_heading_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_single_graphic_heading_pane_vc

0xd424,	// (0x00044868) list_single_heading_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_single_heading_pane_vc

0xd424,	// (0x00044868) list_single_number_heading_pane_vc_ParamLimits

0xd424,	// (0x00044868) list_single_number_heading_pane_vc

0xd2c6,	// (0x0004470a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd2c6,	// (0x0004470a) list_double_graphic_heading_pane_vc_g1

0xd24c,	// (0x00044690) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd24c,	// (0x00044690) list_double_graphic_heading_pane_vc_g2

0xd258,	// (0x0004469c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd258,	// (0x0004469c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x00046e1c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x00046e1c) list_double_graphic_heading_pane_vc_g

0xd437,	// (0x0004487b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd437,	// (0x0004487b) list_double_graphic_heading_pane_vc_t1

0xd44b,	// (0x0004488f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd44b,	// (0x0004488f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00046e23) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00046e23) list_double_graphic_heading_pane_vc_t

0xd391,	// (0x000447d5) list_setting_pane_vc_g1_ParamLimits

0xd391,	// (0x000447d5) list_setting_pane_vc_g1

0xd39d,	// (0x000447e1) list_setting_pane_vc_g2_ParamLimits

0xd39d,	// (0x000447e1) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00046c12) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00046c12) list_setting_pane_vc_g

0xd463,	// (0x000448a7) list_setting_pane_vc_t1_ParamLimits

0xd463,	// (0x000448a7) list_setting_pane_vc_t1

0xd47f,	// (0x000448c3) list_setting_pane_vc_t2_ParamLimits

0xd47f,	// (0x000448c3) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x00046e66) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x00046e66) list_setting_pane_vc_t

0xd405,	// (0x00044849) set_value_pane_cp_vc_ParamLimits

0xd405,	// (0x00044849) set_value_pane_cp_vc

0xd24c,	// (0x00044690) list_single_number_heading_pane_vc_g1_ParamLimits

0xd24c,	// (0x00044690) list_single_number_heading_pane_vc_g1

0xd258,	// (0x0004469c) list_single_number_heading_pane_vc_g2_ParamLimits

0xd258,	// (0x0004469c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_single_number_heading_pane_vc_g

0xd499,	// (0x000448dd) list_single_number_heading_pane_vc_t1_ParamLimits

0xd499,	// (0x000448dd) list_single_number_heading_pane_vc_t1

0xd4af,	// (0x000448f3) list_single_number_heading_pane_vc_t2_ParamLimits

0xd4af,	// (0x000448f3) list_single_number_heading_pane_vc_t2

0xd4c1,	// (0x00044905) list_single_number_heading_pane_vc_t3_ParamLimits

0xd4c1,	// (0x00044905) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x00046e6b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x00046e6b) list_single_number_heading_pane_vc_t

0xd4d3,	// (0x00044917) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd4d3,	// (0x00044917) list_single_graphic_heading_pane_vc_g1

0xd24c,	// (0x00044690) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd24c,	// (0x00044690) list_single_graphic_heading_pane_vc_g4

0xd258,	// (0x0004469c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd258,	// (0x0004469c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x00046e72) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x00046e72) list_single_graphic_heading_pane_vc_g

0xd4df,	// (0x00044923) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd4df,	// (0x00044923) list_single_graphic_heading_pane_vc_t1

0xd4f5,	// (0x00044939) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd4f5,	// (0x00044939) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00046e79) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00046e79) list_single_graphic_heading_pane_vc_t

0xd24c,	// (0x00044690) list_double2_pane_vc_g1_ParamLimits

0xd24c,	// (0x00044690) list_double2_pane_vc_g1

0xd258,	// (0x0004469c) list_double2_pane_vc_g2_ParamLimits

0xd258,	// (0x0004469c) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_double2_pane_vc_g

0xd507,	// (0x0004494b) list_double2_pane_vc_t1_ParamLimits

0xd507,	// (0x0004494b) list_double2_pane_vc_t1

0xd2d2,	// (0x00044716) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd2d2,	// (0x00044716) list_double2_large_graphic_pane_vc_g1

0xd2de,	// (0x00044722) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd2de,	// (0x00044722) list_double2_large_graphic_pane_vc_g2

0xd2ea,	// (0x0004472e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd2ea,	// (0x0004472e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00046a29) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00046a29) list_double2_large_graphic_pane_vc_g

0xd2f6,	// (0x0004473a) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd2f6,	// (0x0004473a) list_double2_large_graphic_pane_vc_t1

0xd51f,	// (0x00044963) list_double_time_pane_vc_g1_ParamLimits

0xd51f,	// (0x00044963) list_double_time_pane_vc_g1

0xd52b,	// (0x0004496f) list_double_time_pane_vc_g2_ParamLimits

0xd52b,	// (0x0004496f) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x00046e7e) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x00046e7e) list_double_time_pane_vc_g

0xd537,	// (0x0004497b) list_double_time_pane_vc_t1_ParamLimits

0xd537,	// (0x0004497b) list_double_time_pane_vc_t1

0xd55b,	// (0x0004499f) list_double_time_pane_vc_t2_ParamLimits

0xd55b,	// (0x0004499f) list_double_time_pane_vc_t2

0xd5aa,	// (0x000449ee) list_double_time_pane_vc_t3_ParamLimits

0xd5aa,	// (0x000449ee) list_double_time_pane_vc_t3

0xd5bc,	// (0x00044a00) list_double_time_pane_vc_t4_ParamLimits

0xd5bc,	// (0x00044a00) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x00046e83) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x00046e83) list_double_time_pane_vc_t

0xd24c,	// (0x00044690) list_double_pane_vc_g1_ParamLimits

0xd24c,	// (0x00044690) list_double_pane_vc_g1

0xd258,	// (0x0004469c) list_double_pane_vc_g2_ParamLimits

0xd258,	// (0x0004469c) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_double_pane_vc_g

0xd5d0,	// (0x00044a14) list_double_pane_vc_t1_ParamLimits

0xd5d0,	// (0x00044a14) list_double_pane_vc_t1

0xd5e4,	// (0x00044a28) list_double_pane_vc_t2_ParamLimits

0xd5e4,	// (0x00044a28) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x00046e8c) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x00046e8c) list_double_pane_vc_t

0xd24c,	// (0x00044690) list_double_number_pane_vc_g1_ParamLimits

0xd24c,	// (0x00044690) list_double_number_pane_vc_g1

0xd258,	// (0x0004469c) list_double_number_pane_vc_g2_ParamLimits

0xd258,	// (0x0004469c) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_double_number_pane_vc_g

0xd5fc,	// (0x00044a40) list_double_number_pane_vc_t1_ParamLimits

0xd5fc,	// (0x00044a40) list_double_number_pane_vc_t1

0xd5d0,	// (0x00044a14) list_double_number_pane_vc_t2_ParamLimits

0xd5d0,	// (0x00044a14) list_double_number_pane_vc_t2

0xd60e,	// (0x00044a52) list_double_number_pane_vc_t3_ParamLimits

0xd60e,	// (0x00044a52) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x00046e91) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x00046e91) list_double_number_pane_vc_t

0xd626,	// (0x00044a6a) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd626,	// (0x00044a6a) list_double_large_graphic_pane_vc_g1

0xd648,	// (0x00044a8c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd648,	// (0x00044a8c) list_double_large_graphic_pane_vc_g2

0xd65c,	// (0x00044aa0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd65c,	// (0x00044aa0) list_double_large_graphic_pane_vc_g3

0xd66b,	// (0x00044aaf) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd66b,	// (0x00044aaf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x00046e98) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00046e98) list_double_large_graphic_pane_vc_g

0xd677,	// (0x00044abb) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd677,	// (0x00044abb) list_double_large_graphic_pane_vc_t1

0xd693,	// (0x00044ad7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd693,	// (0x00044ad7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00046ea1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00046ea1) list_double_large_graphic_pane_vc_t

0xd24c,	// (0x00044690) list_double_heading_pane_vc_g1_ParamLimits

0xd24c,	// (0x00044690) list_double_heading_pane_vc_g1

0xd258,	// (0x0004469c) list_double_heading_pane_vc_g2_ParamLimits

0xd258,	// (0x0004469c) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046a0c) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046a0c) list_double_heading_pane_vc_g

0xd6b5,	// (0x00044af9) list_double_heading_pane_vc_t1_ParamLimits

0xd6b5,	// (0x00044af9) list_double_heading_pane_vc_t1

0xd6c9,	// (0x00044b0d) list_double_heading_pane_vc_t2_ParamLimits

0xd6c9,	// (0x00044b0d) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x00046ea6) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x00046ea6) list_double_heading_pane_vc_t

0xd6e1,	// (0x00044b25) list_double_graphic_pane_vc_g1_ParamLimits

0xd6e1,	// (0x00044b25) list_double_graphic_pane_vc_g1

0xd6f9,	// (0x00044b3d) list_double_graphic_pane_vc_g2_ParamLimits

0xd6f9,	// (0x00044b3d) list_double_graphic_pane_vc_g2

0xd24c,	// (0x00044690) list_double_graphic_pane_vc_g3_ParamLimits

0xd24c,	// (0x00044690) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x00046eab) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00046eab) list_double_graphic_pane_vc_g

0xd716,	// (0x00044b5a) list_double_graphic_pane_vc_t1_ParamLimits

0xd716,	// (0x00044b5a) list_double_graphic_pane_vc_t1

0xd735,	// (0x00044b79) list_double_graphic_pane_vc_t2_ParamLimits

0xd735,	// (0x00044b79) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00046eb4) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00046eb4) list_double_graphic_pane_vc_t

0xee1e,	// (0x00046262) aid_size_cell_fastswap

0x8b96,	// (0x0003ffda) aid_size_cell_touch_ParamLimits

0x8b96,	// (0x0003ffda) aid_size_cell_touch

0xef7f,	// (0x000463c3) popup_fast_swap_wide_window_ParamLimits

0xef7f,	// (0x000463c3) popup_fast_swap_wide_window

0x8d66,	// (0x000401aa) touch_pane_ParamLimits

0x8d66,	// (0x000401aa) touch_pane

0xb7d1,	// (0x00042c15) button_value_adjust_pane_cp2

0xd32d,	// (0x00044771) button_value_adjust_pane_cp4

0xd335,	// (0x00044779) form_field_data_pane_cp2

0x9731,	// (0x00040b75) form_field_data_wide_pane_cp2

0xbacc,	// (0x00042f10) bg_scroll_pane_ParamLimits

0x9ac4,	// (0x00040f08) scroll_handle_pane_ParamLimits

0xf1b9,	// (0x000465fd) scroll_sc2_down_pane_ParamLimits

0xf1b9,	// (0x000465fd) scroll_sc2_down_pane

0xbafd,	// (0x00042f41) scroll_sc2_up_pane_ParamLimits

0xbafd,	// (0x00042f41) scroll_sc2_up_pane

0xcbc7,	// (0x0004400b) grid_wheel_folder_pane_g1_ParamLimits

0xcbc7,	// (0x0004400b) grid_wheel_folder_pane_g1

0xf443,	// (0x00046887) clock_nsta_pane_cp2_ParamLimits

0xf443,	// (0x00046887) clock_nsta_pane_cp2

0x9dcd,	// (0x00041211) listscroll_midp_pane_ParamLimits

0x9dd9,	// (0x0004121d) midp_canvas_pane

0x240c,	// (0x00039850) nsta_clock_indic_pane

0x2445,	// (0x00039889) listscroll_form_pane_vc

0x244d,	// (0x00039891) listscroll_set_pane_vc_ParamLimits

0x244d,	// (0x00039891) listscroll_set_pane_vc

0xbde7,	// (0x0004322b) clock_nsta_pane

0xbe11,	// (0x00043255) indicator_nsta_pane

0x28aa,	// (0x00039cee) bg_popup_sub_pane_cp2_ParamLimits

0x28be,	// (0x00039d02) find_pane_cp2_ParamLimits

0x28be,	// (0x00039d02) find_pane_cp2

0x28d4,	// (0x00039d18) grid_toobar_pane_ParamLimits

0x29b4,	// (0x00039df8) list_form_gen_pane_vc_ParamLimits

0x29b4,	// (0x00039df8) list_form_gen_pane_vc

0x29ca,	// (0x00039e0e) scroll_pane_cp8_vc_ParamLimits

0x29ca,	// (0x00039e0e) scroll_pane_cp8_vc

0x2a46,	// (0x00039e8a) data_form_wide_pane_vc_ParamLimits

0x2a46,	// (0x00039e8a) data_form_wide_pane_vc

0x2a52,	// (0x00039e96) form_field_data_wide_pane_vc_g1

0x2a5a,	// (0x00039e9e) form_field_data_wide_pane_vc_t1_ParamLimits

0x2a5a,	// (0x00039e9e) form_field_data_wide_pane_vc_t1

0xb7e5,	// (0x00042c29) input_focus_pane_cp6_vc_ParamLimits

0xb7e5,	// (0x00042c29) input_focus_pane_cp6_vc

0x2da7,	// (0x0003a1eb) list_midp_pane_ParamLimits

0x40b4,	// (0x0003b4f8) scroll_pane_cp16_ParamLimits

0x40b4,	// (0x0003b4f8) scroll_pane_cp16

0x2de9,	// (0x0003a22d) button_value_adjust_pane_ParamLimits

0x2de9,	// (0x0003a22d) button_value_adjust_pane

0xc7a3,	// (0x00043be7) button_value_adjust_pane_cp6_ParamLimits

0xc7a3,	// (0x00043be7) button_value_adjust_pane_cp6

0xc8bd,	// (0x00043d01) settings_code_pane_cp_ParamLimits

0xc8bd,	// (0x00043d01) settings_code_pane_cp

0xb3cd,	// (0x00042811) cell_touch_pane_g1

0xb3cd,	// (0x00042811) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00046b38) cell_touch_pane_g

0xca96,	// (0x00043eda) cell_touch_pane_cp_ParamLimits

0xca96,	// (0x00043eda) cell_touch_pane_cp

0xcab2,	// (0x00043ef6) cell_touch_pane_ParamLimits

0xcab2,	// (0x00043ef6) cell_touch_pane

0xb3cd,	// (0x00042811) scroll_sc2_down_pane_g1

0xb3cd,	// (0x00042811) scroll_sc2_up_pane_g1

0xb3d7,	// (0x0004281b) bg_set_opt_pane_cp4_vc

0x4444,	// (0x0003b888) list_set_graphic_pane_vc_g1_ParamLimits

0x4444,	// (0x0003b888) list_set_graphic_pane_vc_g1

0x4450,	// (0x0003b894) list_set_graphic_pane_vc_g2_ParamLimits

0x4450,	// (0x0003b894) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00046e28) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00046e28) list_set_graphic_pane_vc_g

0x445c,	// (0x0003b8a0) text_primary_small_cp13_vc_ParamLimits

0x445c,	// (0x0003b8a0) text_primary_small_cp13_vc

0x4474,	// (0x0003b8b8) list_set_graphic_pane_vc_ParamLimits

0x4474,	// (0x0003b8b8) list_set_graphic_pane_vc

0xb3d7,	// (0x0004281b) input_focus_pane_cp2_vc

0xb3cd,	// (0x00042811) setting_code_pane_vc_g1

0xb44a,	// (0x0004288e) setting_code_pane_vc_t1

0x4487,	// (0x0003b8cb) set_text_pane_vc_t1_ParamLimits

0x4487,	// (0x0003b8cb) set_text_pane_vc_t1

0xb3d7,	// (0x0004281b) input_focus_pane_cp1_vc

0x44a3,	// (0x0003b8e7) list_set_text_pane_vc

0xb3cd,	// (0x00042811) setting_text_pane_vc_g1

0xb3d7,	// (0x0004281b) bg_set_opt_pane_cp2_vc

0xb441,	// (0x00042885) setting_slider_graphic_pane_vc_g1

0x44ad,	// (0x0003b8f1) setting_slider_graphic_pane_vc_t1

0x44bd,	// (0x0003b901) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x00046e2d) setting_slider_graphic_pane_vc_t

0x44cd,	// (0x0003b911) slider_set_pane_cp_vc

0x44d5,	// (0x0003b919) slider_set_pane_vc_g1

0x44de,	// (0x0003b922) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00046e32) slider_set_pane_vc_g

0xb83d,	// (0x00042c81) set_opt_bg_pane_g1_copy1

0xb845,	// (0x00042c89) set_opt_bg_pane_g2_copy1

0x450a,	// (0x0003b94e) set_opt_bg_pane_g3_copy1

0xb855,	// (0x00042c99) set_opt_bg_pane_g4_copy1

0xb85d,	// (0x00042ca1) set_opt_bg_pane_g5_copy1

0xb865,	// (0x00042ca9) set_opt_bg_pane_g6_copy1

0x4512,	// (0x0003b956) set_opt_bg_pane_g7_copy1

0x451a,	// (0x0003b95e) set_opt_bg_pane_g8_copy1

0x4522,	// (0x0003b966) set_opt_bg_pane_g9_copy1

0xb3d7,	// (0x0004281b) bg_set_opt_pane_cp_vc

0x452a,	// (0x0003b96e) setting_slider_pane_vc_t1

0x4539,	// (0x0003b97d) setting_slider_pane_vc_t2

0x4549,	// (0x0003b98d) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00046e41) setting_slider_pane_vc_t

0x4559,	// (0x0003b99d) slider_set_pane_vc

0x0aa7,	// (0x00037eeb) volume_set_pane_vc_g1

0x0ebc,	// (0x00038300) volume_set_pane_vc_g2

0x0ec5,	// (0x00038309) volume_set_pane_vc_g3

0x0ece,	// (0x00038312) volume_set_pane_vc_g4

0x0ed7,	// (0x0003831b) volume_set_pane_vc_g5

0x0ee0,	// (0x00038324) volume_set_pane_vc_g6

0x0ee9,	// (0x0003832d) volume_set_pane_vc_g7

0x0ef2,	// (0x00038336) volume_set_pane_vc_g8

0x0efb,	// (0x0003833f) volume_set_pane_vc_g9

0x0f04,	// (0x00038348) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x00046e48) volume_set_pane_vc_g

0x4561,	// (0x0003b9a5) volume_set_pane_vc

0x4569,	// (0x0003b9ad) button_value_adjust_pane_cp1_vc

0x4573,	// (0x0003b9b7) list_highlight_pane_cp2_vc

0x457c,	// (0x0003b9c0) list_set_pane_vc_ParamLimits

0x457c,	// (0x0003b9c0) list_set_pane_vc

0x45da,	// (0x0003ba1e) main_pane_set_vc_t1_ParamLimits

0x45da,	// (0x0003ba1e) main_pane_set_vc_t1

0x45ef,	// (0x0003ba33) main_pane_set_vc_t2_ParamLimits

0x45ef,	// (0x0003ba33) main_pane_set_vc_t2

0x4601,	// (0x0003ba45) main_pane_set_vc_t3_ParamLimits

0x4601,	// (0x0003ba45) main_pane_set_vc_t3

0x4613,	// (0x0003ba57) main_pane_set_vc_t4_ParamLimits

0x4613,	// (0x0003ba57) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x00046e5d) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x00046e5d) main_pane_set_vc_t

0x4625,	// (0x0003ba69) setting_code_pane_vc_ParamLimits

0x4625,	// (0x0003ba69) setting_code_pane_vc

0x4634,	// (0x0003ba78) setting_slider_graphic_pane_vc

0x4634,	// (0x0003ba78) setting_slider_pane_vc

0x4634,	// (0x0003ba78) setting_text_pane_vc

0x4634,	// (0x0003ba78) setting_volume_pane_vc

0x463c,	// (0x0003ba80) scroll_pane_cp121_vc

0xb7bf,	// (0x00042c03) set_content_pane_vc

0x4644,	// (0x0003ba88) button_value_adjust_pane_g1

0x464d,	// (0x0003ba91) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x00046eb9) button_value_adjust_pane_g

0x4656,	// (0x0003ba9a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4656,	// (0x0003ba9a) form_field_slider_wide_pane_vc_t1

0x466a,	// (0x0003baae) form_field_slider_wide_pane_vc_t2_ParamLimits

0x466a,	// (0x0003baae) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x00046ebe) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x00046ebe) form_field_slider_wide_pane_vc_t

0xb425,	// (0x00042869) input_focus_pane_cp10_vc_ParamLimits

0xb425,	// (0x00042869) input_focus_pane_cp10_vc

0x4698,	// (0x0003badc) slider_cont_pane_cp1_vc_ParamLimits

0x4698,	// (0x0003badc) slider_cont_pane_cp1_vc

0x46aa,	// (0x0003baee) slider_form_pane_g1_cp2

0x44de,	// (0x0003b922) slider_form_pane_g2_cp2

0x46d7,	// (0x0003bb1b) form_field_slider_pane_vc_t3

0x46e5,	// (0x0003bb29) form_field_slider_pane_vc_t4

0x46f3,	// (0x0003bb37) slider_form_pane_vc_ParamLimits

0x46f3,	// (0x0003bb37) slider_form_pane_vc

0x4700,	// (0x0003bb44) form_field_slider_pane_vc_t1_ParamLimits

0x4700,	// (0x0003bb44) form_field_slider_pane_vc_t1

0x466a,	// (0x0003baae) form_field_slider_pane_vc_t2_ParamLimits

0x466a,	// (0x0003baae) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00046ed0) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00046ed0) form_field_slider_pane_vc_t

0xb425,	// (0x00042869) input_focus_pane_cp9_vc_ParamLimits

0xb425,	// (0x00042869) input_focus_pane_cp9_vc

0x471c,	// (0x0003bb60) slider_cont_pane_vc_ParamLimits

0x471c,	// (0x0003bb60) slider_cont_pane_vc

0x4730,	// (0x0003bb74) list_form_graphic_pane_cp_vc_ParamLimits

0x4730,	// (0x0003bb74) list_form_graphic_pane_cp_vc

0x2a52,	// (0x00039e96) form_field_popup_wide_pane_vc_g1

0x4745,	// (0x0003bb89) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4745,	// (0x0003bb89) form_field_popup_wide_pane_vc_t1

0xb7e5,	// (0x00042c29) input_focus_pane_cp8_vc_ParamLimits

0xb7e5,	// (0x00042c29) input_focus_pane_cp8_vc

0x478a,	// (0x0003bbce) list_form_wide_pane_vc_ParamLimits

0x478a,	// (0x0003bbce) list_form_wide_pane_vc

0x4796,	// (0x0003bbda) list_form_graphic_pane_vc_g1

0x479e,	// (0x0003bbe2) list_form_graphic_pane_vc_t1_ParamLimits

0x479e,	// (0x0003bbe2) list_form_graphic_pane_vc_t1

0xb433,	// (0x00042877) list_highlight_pane_cp5_vc_ParamLimits

0xb433,	// (0x00042877) list_highlight_pane_cp5_vc

0x47ba,	// (0x0003bbfe) list_form_graphic_pane_vc_ParamLimits

0x47ba,	// (0x0003bbfe) list_form_graphic_pane_vc

0x2a52,	// (0x00039e96) form_field_popup_pane_vc_g1

0x47d0,	// (0x0003bc14) form_field_popup_pane_vc_t1_ParamLimits

0x47d0,	// (0x0003bc14) form_field_popup_pane_vc_t1

0xb7e5,	// (0x00042c29) input_focus_pane_cp7_vc_ParamLimits

0xb7e5,	// (0x00042c29) input_focus_pane_cp7_vc

0x47e7,	// (0x0003bc2b) list_form_pane_vc_ParamLimits

0x47e7,	// (0x0003bc2b) list_form_pane_vc

0x47f3,	// (0x0003bc37) data_form_pane_vc_t1_ParamLimits

0x47f3,	// (0x0003bc37) data_form_pane_vc_t1

0xb83d,	// (0x00042c81) input_focus_pane_vc_g1

0xb845,	// (0x00042c89) input_focus_pane_vc_g2

0xb84d,	// (0x00042c91) input_focus_pane_vc_g3

0xb855,	// (0x00042c99) input_focus_pane_vc_g4

0xb85d,	// (0x00042ca1) input_focus_pane_vc_g5

0xb865,	// (0x00042ca9) input_focus_pane_vc_g6

0xb86d,	// (0x00042cb1) input_focus_pane_vc_g7

0xb875,	// (0x00042cb9) input_focus_pane_vc_g8

0xb87d,	// (0x00042cc1) input_focus_pane_vc_g9

0xb3cd,	// (0x00042811) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x00046ac1) input_focus_pane_vc_g

0x2a46,	// (0x00039e8a) data_form_pane_vc_ParamLimits

0x2a46,	// (0x00039e8a) data_form_pane_vc

0x2a52,	// (0x00039e96) form_field_data_pane_vc_g1

0x480e,	// (0x0003bc52) form_field_data_pane_vc_t1_ParamLimits

0x480e,	// (0x0003bc52) form_field_data_pane_vc_t1

0xb7e5,	// (0x00042c29) input_focus_pane_vc_ParamLimits

0xb7e5,	// (0x00042c29) input_focus_pane_vc

0x4828,	// (0x0003bc6c) button_value_adjust_pane_cp3_vc

0x4830,	// (0x0003bc74) button_value_adjust_pane_cp5_vc

0x4838,	// (0x0003bc7c) form_field_data_pane_vc_ParamLimits

0x4838,	// (0x0003bc7c) form_field_data_pane_vc

0x484f,	// (0x0003bc93) form_field_data_pane_vc_cp2

0x4857,	// (0x0003bc9b) form_field_data_wide_pane_vc_ParamLimits

0x4857,	// (0x0003bc9b) form_field_data_wide_pane_vc

0x486d,	// (0x0003bcb1) form_field_data_wide_pane_vc_cp2

0x4875,	// (0x0003bcb9) form_field_popup_pane_vc_ParamLimits

0x4875,	// (0x0003bcb9) form_field_popup_pane_vc

0x488c,	// (0x0003bcd0) form_field_popup_wide_pane_vc_ParamLimits

0x488c,	// (0x0003bcd0) form_field_popup_wide_pane_vc

0x48a2,	// (0x0003bce6) form_field_slider_pane_vc_ParamLimits

0x48a2,	// (0x0003bce6) form_field_slider_pane_vc

0x48b5,	// (0x0003bcf9) form_field_slider_wide_pane_vc_ParamLimits

0x48b5,	// (0x0003bcf9) form_field_slider_wide_pane_vc

0xcacf,	// (0x00043f13) grid_touch_1_pane_ParamLimits

0xcacf,	// (0x00043f13) grid_touch_1_pane

0xcae3,	// (0x00043f27) grid_touch_2_pane_ParamLimits

0xcae3,	// (0x00043f27) grid_touch_2_pane

0x4983,	// (0x0003bdc7) touch_pane_g1_ParamLimits

0x4983,	// (0x0003bdc7) touch_pane_g1

0x48ec,	// (0x0003bd30) cell_app_pane_cp_wide_ParamLimits

0x48ec,	// (0x0003bd30) cell_app_pane_cp_wide

0x48fd,	// (0x0003bd41) grid_popup_fast_wide_pane_ParamLimits

0x48fd,	// (0x0003bd41) grid_popup_fast_wide_pane

0x4911,	// (0x0003bd55) scroll_pane_cp19_ParamLimits

0x4911,	// (0x0003bd55) scroll_pane_cp19

0xb3d7,	// (0x0004281b) bg_popup_window_pane_cp20

0x4925,	// (0x0003bd69) listscroll_popup_fast_wide_pane

0xcb0d,	// (0x00043f51) grid_indicator_nsta_pane

0x492d,	// (0x0003bd71) clock_nsta_pane_g1

0x4936,	// (0x0003bd7a) clock_nsta_pane_t1

0xcb1b,	// (0x00043f5f) cell_indicator_nsta_pane_ParamLimits

0xcb1b,	// (0x00043f5f) cell_indicator_nsta_pane

0x4983,	// (0x0003bdc7) cell_indicator_nsta_pane_g1

0xcb32,	// (0x00043f76) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00046ee1) cell_indicator_nsta_pane_g

0x499e,	// (0x0003bde2) clock_nsta_pane_cp

0x49a6,	// (0x0003bdea) indicator_nsta_pane_cp

0x49ae,	// (0x0003bdf2) nsta_clock_indic_pane_g1

0xb46f,	// (0x000428b3) grid_indicator_pane

0x9b5e,	// (0x00040fa2) scroll_pane_cp29

0xf370,	// (0x000467b4) indicator_nsta_pane_cp2_ParamLimits

0xf370,	// (0x000467b4) indicator_nsta_pane_cp2

0xb433,	// (0x00042877) main_apps_wheel_pane

0xc1d9,	// (0x0004361d) form_midp_field_text_pane_ParamLimits

0x2db3,	// (0x0003a1f7) scroll_bar_cp050_ParamLimits

0x49fe,	// (0x0003be42) cell_indicator_pane_ParamLimits

0x49fe,	// (0x0003be42) cell_indicator_pane

0x4a17,	// (0x0003be5b) cell_indicator_pane_g1

0xcb51,	// (0x00043f95) grid_wheel_folder_pane_ParamLimits

0xcb51,	// (0x00043f95) grid_wheel_folder_pane

0xcb5f,	// (0x00043fa3) list_wheel_apps_pane_ParamLimits

0xcb5f,	// (0x00043fa3) list_wheel_apps_pane

0xcb6d,	// (0x00043fb1) main_apps_wheel_pane_g1_ParamLimits

0xcb6d,	// (0x00043fb1) main_apps_wheel_pane_g1

0xcb79,	// (0x00043fbd) main_apps_wheel_pane_g2_ParamLimits

0xcb79,	// (0x00043fbd) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x00046efd) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x00046efd) main_apps_wheel_pane_g

0xcb87,	// (0x00043fcb) main_apps_wheel_pane_t1_ParamLimits

0xcb87,	// (0x00043fcb) main_apps_wheel_pane_t1

0xcb9b,	// (0x00043fdf) list_wheel_apps_pane_g1

0xcba3,	// (0x00043fe7) list_wheel_apps_pane_g2

0xcbab,	// (0x00043fef) list_wheel_apps_pane_g3

0xcbb3,	// (0x00043ff7) list_wheel_apps_pane_g4

0xcbbd,	// (0x00044001) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00046f02) list_wheel_apps_pane_g

0x00a3,	// (0x000374e7) navi_icon_text_pane

0xbcdb,	// (0x0004311f) aid_fill_nsta

0x4ade,	// (0x0003bf22) navi_icon_text_pane_g1

0x4aea,	// (0x0003bf2e) navi_icon_text_pane_t1

0xf4df,	// (0x00046923) list_set_graphic_pane_t1_ParamLimits

0xf4df,	// (0x00046923) list_set_graphic_pane_t1

0x34ea,	// (0x0003a92e) popup_midp_note_alarm_window_t6_ParamLimits

0x34ea,	// (0x0003a92e) popup_midp_note_alarm_window_t6

0x34fc,	// (0x0003a940) popup_midp_note_alarm_window_t7_ParamLimits

0x34fc,	// (0x0003a940) popup_midp_note_alarm_window_t7

0x350e,	// (0x0003a952) popup_midp_note_alarm_window_t8_ParamLimits

0x350e,	// (0x0003a952) popup_midp_note_alarm_window_t8

0x3520,	// (0x0003a964) popup_midp_note_alarm_window_t9_ParamLimits

0x3520,	// (0x0003a964) popup_midp_note_alarm_window_t9

0x3532,	// (0x0003a976) popup_midp_note_alarm_window_t10_ParamLimits

0x3532,	// (0x0003a976) popup_midp_note_alarm_window_t10

0x3544,	// (0x0003a988) popup_midp_note_alarm_window_t11_ParamLimits

0x3544,	// (0x0003a988) popup_midp_note_alarm_window_t11

0xc525,	// (0x00043969) scroll_pane_cp17_ParamLimits

0xc525,	// (0x00043969) scroll_pane_cp17

0x0aa7,	// (0x00037eeb) volume_small_pane_cp_g1

0x0f0d,	// (0x00038351) volume_small_pane_cp_g2

0x0f16,	// (0x0003835a) volume_small_pane_cp_g3

0x0f1f,	// (0x00038363) volume_small_pane_cp_g4

0x0f28,	// (0x0003836c) volume_small_pane_cp_g5

0x0ed7,	// (0x0003831b) volume_small_pane_cp_g6

0x0f31,	// (0x00038375) volume_small_pane_cp_g7

0x0f3a,	// (0x0003837e) volume_small_pane_cp_g8

0x0f43,	// (0x00038387) volume_small_pane_cp_g9

0x0f4c,	// (0x00038390) volume_small_pane_cp_g10

0x21f5,	// (0x00039639) midp_ticker_pane_g1_ParamLimits

0x2201,	// (0x00039645) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x00046b8d) midp_ticker_pane_g_ParamLimits

0x220d,	// (0x00039651) midp_ticker_pane_t1_ParamLimits

0xbcff,	// (0x00043143) aid_fill_nsta_2

0x2d9f,	// (0x0003a1e3) list_form2_midp_pane

0x3e9e,	// (0x0003b2e2) midp_editing_number_pane_ParamLimits

0x3ead,	// (0x0003b2f1) midp_ticker_pane_ParamLimits

0x4afc,	// (0x0003bf40) form2_midp_field_pane

0x4b20,	// (0x0003bf64) scroll_pane_cp51

0x4b40,	// (0x0003bf84) form2_midp_button_pane_ParamLimits

0x4b40,	// (0x0003bf84) form2_midp_button_pane

0x4b52,	// (0x0003bf96) form2_midp_content_pane_ParamLimits

0x4b52,	// (0x0003bf96) form2_midp_content_pane

0x4b6c,	// (0x0003bfb0) form2_midp_field_choice_group_pane

0x4b74,	// (0x0003bfb8) form2_midp_field_pane_g1

0x4b7c,	// (0x0003bfc0) form2_midp_field_pane_g2

0x4b84,	// (0x0003bfc8) form2_midp_field_pane_g3

0x4b8c,	// (0x0003bfd0) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x00046f27) form2_midp_field_pane_g

0x4b94,	// (0x0003bfd8) form2_midp_gauge_slider_pane

0x4b9c,	// (0x0003bfe0) form2_midp_gauge_wait_pane

0x4ba4,	// (0x0003bfe8) form2_midp_image_pane_ParamLimits

0x4ba4,	// (0x0003bfe8) form2_midp_image_pane

0xcbf0,	// (0x00044034) form2_midp_label_pane_ParamLimits

0xcbf0,	// (0x00044034) form2_midp_label_pane

0xcc09,	// (0x0004404d) form2_midp_label_pane_cp_ParamLimits

0xcc09,	// (0x0004404d) form2_midp_label_pane_cp

0x4bf9,	// (0x0003c03d) form2_midp_string_pane_ParamLimits

0x4bf9,	// (0x0003c03d) form2_midp_string_pane

0xd75f,	// (0x00044ba3) form2_midp_text_pane_ParamLimits

0xd75f,	// (0x00044ba3) form2_midp_text_pane

0x4c0b,	// (0x0003c04f) form2_midp_time_pane

0x4c1b,	// (0x0003c05f) input_focus_pane_cp51_ParamLimits

0x4c1b,	// (0x0003c05f) input_focus_pane_cp51

0xcc28,	// (0x0004406c) form2_midp_label_pane_t1_ParamLimits

0xcc28,	// (0x0004406c) form2_midp_label_pane_t1

0xd778,	// (0x00044bbc) form2_mdip_text_pane_t1_ParamLimits

0xd778,	// (0x00044bbc) form2_mdip_text_pane_t1

0xd796,	// (0x00044bda) form2_midp_time_pane_t1

0x4c7c,	// (0x0003c0c0) form2_midp_gauge_slider_pane_t1

0xcc68,	// (0x000440ac) form2_midp_gauge_slider_pane_t2

0xcc7a,	// (0x000440be) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00046f30) form2_midp_gauge_slider_pane_t

0x4cb2,	// (0x0003c0f6) form2_midp_slider_pane

0x4cbe,	// (0x0003c102) form2_midp_gauge_wait_pane_t1

0x4ccc,	// (0x0003c110) form2_midp_wait_pane_ParamLimits

0x4ccc,	// (0x0003c110) form2_midp_wait_pane

0xcc8c,	// (0x000440d0) list_single_2graphic_pane_cp4_ParamLimits

0xcc8c,	// (0x000440d0) list_single_2graphic_pane_cp4

0xc130,	// (0x00043574) list_single_midp_graphic_pane_cp_ParamLimits

0xc130,	// (0x00043574) list_single_midp_graphic_pane_cp

0xb3d7,	// (0x0004281b) list_highlight_pane_cp20

0x4d1f,	// (0x0003c163) list_single_2graphic_pane_g1_cp4

0x4328,	// (0x0003b76c) list_single_2graphic_pane_g2_cp4

0x4d27,	// (0x0003c16b) list_single_2graphic_pane_t1_cp4

0xb433,	// (0x00042877) list_highlight_pane_cp21

0x4d36,	// (0x0003c17a) list_single_midp_graphic_pane_g4_cp

0x4d45,	// (0x0003c189) list_single_midp_graphic_pane_t1_cp

0xcca1,	// (0x000440e5) form2_mdip_string_pane_t1_ParamLimits

0xcca1,	// (0x000440e5) form2_mdip_string_pane_t1

0xb3d7,	// (0x0004281b) bg_wml_button_pane_cp2

0xb3cd,	// (0x00042811) form2_midp_image_pane_g1

0xd318,	// (0x0004475c) list_double_large_graphic_pane_g5_ParamLimits

0xd318,	// (0x0004475c) list_double_large_graphic_pane_g5

0x9dcd,	// (0x00041211) midp_form_pane_ParamLimits

0xb433,	// (0x00042877) main_apps_wheel_pane_ParamLimits

0xa577,	// (0x000419bb) popup_preview_window_ParamLimits

0xa577,	// (0x000419bb) popup_preview_window

0xa844,	// (0x00041c88) popup_touch_info_window_ParamLimits

0xa844,	// (0x00041c88) popup_touch_info_window

0xa862,	// (0x00041ca6) popup_touch_menu_window_ParamLimits

0xa862,	// (0x00041ca6) popup_touch_menu_window

0xb3c3,	// (0x00042807) bg_popup_sub_pane_cp6

0x4e61,	// (0x0003c2a5) list_touch_menu_pane

0xcd17,	// (0x0004415b) list_single_touch_menu_pane_ParamLimits

0xcd17,	// (0x0004415b) list_single_touch_menu_pane

0xcd2b,	// (0x0004416f) list_single_touch_menu_pane_t1

0xb433,	// (0x00042877) bg_popup_sub_pane_cp7_ParamLimits

0xb433,	// (0x00042877) bg_popup_sub_pane_cp7

0x4e8d,	// (0x0003c2d1) heading_sub_pane

0x4e95,	// (0x0003c2d9) list_touch_info_pane_ParamLimits

0x4e95,	// (0x0003c2d9) list_touch_info_pane

0x4ea4,	// (0x0003c2e8) list_single_touch_info_pane_ParamLimits

0x4ea4,	// (0x0003c2e8) list_single_touch_info_pane

0x4eb6,	// (0x0003c2fa) list_single_touch_info_pane_t1

0x4ec4,	// (0x0003c308) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x00046f3e) list_single_touch_info_pane_t

0x2114,	// (0x00039558) bg_popup_heading_pane_cp

0x4ed2,	// (0x0003c316) heading_sub_pane_t1

0x29e0,	// (0x00039e24) bg_popup_preview_window_pane_cp_ParamLimits

0x29e0,	// (0x00039e24) bg_popup_preview_window_pane_cp

0x4e8d,	// (0x0003c2d1) heading_preview_pane

0x4e95,	// (0x0003c2d9) list_preview_pane_ParamLimits

0x4e95,	// (0x0003c2d9) list_preview_pane

0x4ee0,	// (0x0003c324) popup_preview_window_g1

0x4ea4,	// (0x0003c2e8) list_single_preview_pane_ParamLimits

0x4ea4,	// (0x0003c2e8) list_single_preview_pane

0x4ee8,	// (0x0003c32c) list_single_preview_pane_g1

0x4ef0,	// (0x0003c334) list_single_preview_pane_t1

0x4eb6,	// (0x0003c2fa) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x00046f43) list_single_preview_pane_t

0x4efe,	// (0x0003c342) bg_popup_heading_pane_cp2_ParamLimits

0x4efe,	// (0x0003c342) bg_popup_heading_pane_cp2

0x4f14,	// (0x0003c358) heading_preview_pane_g1

0x4f1c,	// (0x0003c360) heading_preview_pane_t1_ParamLimits

0x4f1c,	// (0x0003c360) heading_preview_pane_t1

0xb486,	// (0x000428ca) soft_indicator_pane_t1_ParamLimits

0xb761,	// (0x00042ba5) scroll_pane_ParamLimits

0xbaeb,	// (0x00042f2f) scroll_sc2_left_pane

0xbaf4,	// (0x00042f38) scroll_sc2_right_pane

0xbb13,	// (0x00042f57) scroll_bg_pane_g1_ParamLimits

0xbb28,	// (0x00042f6c) scroll_bg_pane_g2_ParamLimits

0xbb40,	// (0x00042f84) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x00046b18) scroll_bg_pane_g_ParamLimits

0xbb13,	// (0x00042f57) scroll_handle_pane_g1_ParamLimits

0xbb55,	// (0x00042f99) scroll_handle_pane_g2_ParamLimits

0xbb40,	// (0x00042f84) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x00046b1f) scroll_handle_pane_g_ParamLimits

0xa11e,	// (0x00041562) popup_choice_list_window_ParamLimits

0xa11e,	// (0x00041562) popup_choice_list_window

0x28b6,	// (0x00039cfa) choice_list_pane

0x2938,	// (0x00039d7c) cell_toolbar_pane_t1

0x2960,	// (0x00039da4) toolbar_button_pane_ParamLimits

0x3a10,	// (0x0003ae54) ai_gene_pane_1_t2_ParamLimits

0x3a10,	// (0x0003ae54) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x00046d3b) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x00046d3b) ai_gene_pane_1_t

0x4f39,	// (0x0003c37d) scroll_sc2_left_pane_g1

0x4f39,	// (0x0003c37d) scroll_sc2_right_pane_g1

0x245f,	// (0x000398a3) bg_popup_sub_pane_cp10

0x4f43,	// (0x0003c387) list_choice_list_pane

0xcd39,	// (0x0004417d) list_single_choice_list_pane_ParamLimits

0xcd39,	// (0x0004417d) list_single_choice_list_pane

0xcd4d,	// (0x00044191) list_single_choice_list_pane_g1

0x9988,	// (0x00040dcc) list_single_choice_list_pane_t1_ParamLimits

0x9988,	// (0x00040dcc) list_single_choice_list_pane_t1

0x4f77,	// (0x0003c3bb) choice_list_pane_g1

0xcd55,	// (0x00044199) choice_list_pane_t1

0xb3c3,	// (0x00042807) input_focus_pane_cp11

0xba60,	// (0x00042ea4) title_pane_stacon_g2_ParamLimits

0xba60,	// (0x00042ea4) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x00046afe) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00046afe) title_pane_stacon_g

0x2114,	// (0x00039558) cursor_press_pane

0xa1c5,	// (0x00041609) popup_fep_hwr_window_ParamLimits

0xa1c5,	// (0x00041609) popup_fep_hwr_window

0x04c3,	// (0x00037907) popup_fep_vkb_window_ParamLimits

0x04c3,	// (0x00037907) popup_fep_vkb_window

0xcd63,	// (0x000441a7) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x00046f6c) fep_vkb_side_pane_g_ParamLimits

0x0f8e,	// (0x000383d2) fep_hwr_candidate_pane_ParamLimits

0x0f8e,	// (0x000383d2) fep_hwr_candidate_pane

0x0fb8,	// (0x000383fc) fep_hwr_side_pane_ParamLimits

0x0fb8,	// (0x000383fc) fep_hwr_side_pane

0x0fd8,	// (0x0003841c) fep_hwr_top_pane_ParamLimits

0x0fd8,	// (0x0003841c) fep_hwr_top_pane

0x0ff0,	// (0x00038434) fep_hwr_write_pane_ParamLimits

0x0ff0,	// (0x00038434) fep_hwr_write_pane

0xfb28,	// (0x00046f6c) fep_vkb_side_pane_g

0x4f95,	// (0x0003c3d9) fep_hwr_top_pane_g1

0x4fa7,	// (0x0003c3eb) fep_hwr_top_pane_g2

0x102a,	// (0x0003846e) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x00046f48) fep_hwr_top_pane_g

0x103f,	// (0x00038483) fep_hwr_top_text_pane

0xbc18,	// (0x0004305c) fep_hwr_top_text_pane_g1

0x4fdd,	// (0x0003c421) fep_hwr_top_text_pane_t1

0x1135,	// (0x00038579) fep_hwr_candidate_pane_g1

0x5222,	// (0x0003c666) fep_vkb_keypad_pane_g3_ParamLimits

0x5222,	// (0x0003c666) fep_vkb_keypad_pane_g3

0x524a,	// (0x0003c68e) fep_vkb_keypad_pane_g4_ParamLimits

0x524a,	// (0x0003c68e) fep_vkb_keypad_pane_g4

0x52b9,	// (0x0003c6fd) fep_vkb_bottom_pane_g2_ParamLimits

0x52b9,	// (0x0003c6fd) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x00046f73) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x00046f73) fep_vkb_bottom_pane_g

0x4f39,	// (0x0003c37d) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x00046f7d) cell_vkb_side_pane_g

0x5344,	// (0x0003c788) cell_vkb_side_pane_t1

0x5352,	// (0x0003c796) cell_vkb_side_pane_t1_copy1

0x4f39,	// (0x0003c37d) bg_fep_vkb_candidate_pane_g2

0x547e,	// (0x0003c8c2) cell_vkb_candidate_pane_ParamLimits

0x4feb,	// (0x0003c42f) aid_size_cell_vkb_ParamLimits

0x4feb,	// (0x0003c42f) aid_size_cell_vkb

0x547e,	// (0x0003c8c2) cell_vkb_candidate_pane

0x115c,	// (0x000385a0) bg_popup_fep_shadow_pane_g1

0xcd7d,	// (0x000441c1) fep_vkb_bottom_pane_ParamLimits

0xcd7d,	// (0x000441c1) fep_vkb_bottom_pane

0x50af,	// (0x0003c4f3) fep_vkb_candidate_pane_ParamLimits

0x50af,	// (0x0003c4f3) fep_vkb_candidate_pane

0xcda2,	// (0x000441e6) fep_vkb_keypad_pane_ParamLimits

0xcda2,	// (0x000441e6) fep_vkb_keypad_pane

0xcdd7,	// (0x0004421b) fep_vkb_side_pane_ParamLimits

0xcdd7,	// (0x0004421b) fep_vkb_side_pane

0xce13,	// (0x00044257) fep_vkb_top_pane_ParamLimits

0xce13,	// (0x00044257) fep_vkb_top_pane

0x517b,	// (0x0003c5bf) fep_vkb_top_pane_g1_ParamLimits

0x517b,	// (0x0003c5bf) fep_vkb_top_pane_g1

0x518a,	// (0x0003c5ce) fep_vkb_top_pane_g2_ParamLimits

0x518a,	// (0x0003c5ce) fep_vkb_top_pane_g2

0x5199,	// (0x0003c5dd) fep_vkb_top_pane_g3_ParamLimits

0x5199,	// (0x0003c5dd) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x00046f63) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x00046f63) fep_vkb_top_pane_g

0x51b7,	// (0x0003c5fb) fep_vkb_top_text_pane_ParamLimits

0x51b7,	// (0x0003c5fb) fep_vkb_top_text_pane

0xce48,	// (0x0004428c) fep_vkb_side_pane_g1_ParamLimits

0xce48,	// (0x0004428c) fep_vkb_side_pane_g1

0x5211,	// (0x0003c655) grid_vkb_side_pane_ParamLimits

0x5211,	// (0x0003c655) grid_vkb_side_pane

0x1164,	// (0x000385a8) bg_popup_fep_shadow_pane_g2

0x116d,	// (0x000385b1) bg_popup_fep_shadow_pane_g3

0x1175,	// (0x000385b9) bg_popup_fep_shadow_pane_g4

0x117e,	// (0x000385c2) bg_popup_fep_shadow_pane_g5

0x1188,	// (0x000385cc) bg_popup_fep_shadow_pane_g6

0x1190,	// (0x000385d4) bg_popup_fep_shadow_pane_g7

0xb855,	// (0x00042c99) bg_popup_fep_shadow_pane_g8

0x5268,	// (0x0003c6ac) grid_vkb_keypad_number_pane_ParamLimits

0x5268,	// (0x0003c6ac) grid_vkb_keypad_number_pane

0x5278,	// (0x0003c6bc) grid_vkb_keypad_pane_ParamLimits

0x5278,	// (0x0003c6bc) grid_vkb_keypad_pane

0x529e,	// (0x0003c6e2) fep_vkb_bottom_pane_g1_ParamLimits

0x529e,	// (0x0003c6e2) fep_vkb_bottom_pane_g1

0x52c7,	// (0x0003c70b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x52c7,	// (0x0003c70b) grid_vkb_keypad_bottom_left_pane

0x52dc,	// (0x0003c720) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x52dc,	// (0x0003c720) grid_vkb_keypad_bottom_right_pane

0x52f1,	// (0x0003c735) fep_vkb_top_text_pane_g1

0xce8f,	// (0x000442d3) fep_vkb_top_text_pane_t1

0xcea1,	// (0x000442e5) cell_vkb_side_pane_ParamLimits

0xcea1,	// (0x000442e5) cell_vkb_side_pane

0x4f39,	// (0x0003c37d) cell_vkb_side_pane_g1

0x5360,	// (0x0003c7a4) cell_vkb_keypad_pane_ParamLimits

0x5360,	// (0x0003c7a4) cell_vkb_keypad_pane

0x53d5,	// (0x0003c819) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x00046f90) bg_popup_fep_shadow_pane_g

0x11a2,	// (0x000385e6) cell_hwr_side_pane_g1

0x11a2,	// (0x000385e6) cell_hwr_side_pane_g2

0x53df,	// (0x0003c823) cell_vkb_keypad_pane_t1

0xceb7,	// (0x000442fb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xceb7,	// (0x000442fb) cell_vkb_keypad_bottom_left_pane

0xcecc,	// (0x00044310) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcecc,	// (0x00044310) cell_vkb_keypad_bottom_right_pane

0x4f39,	// (0x0003c37d) cell_vkb_keypad_bottom_left_pane_g1

0x4f39,	// (0x0003c37d) cell_vkb_keypad_bottom_right_pane_g1

0x5443,	// (0x0003c887) cell_vkb_keypad_number_pane_ParamLimits

0x5443,	// (0x0003c887) cell_vkb_keypad_number_pane

0x5462,	// (0x0003c8a6) cell_vkb_keypad_number_pane_g1

0x546c,	// (0x0003c8b0) cell_vkb_keypad_number_pane_g2

0x5475,	// (0x0003c8b9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x00046f82) cell_vkb_keypad_number_pane_g

0x53df,	// (0x0003c823) cell_vkb_keypad_number_pane_t1

0x5499,	// (0x0003c8dd) fep_vkb_candidate_pane_g1

0x0001,

0xfb5f,	// (0x00046fa3) cell_hwr_side_pane_g

0x54b2,	// (0x0003c8f6) cell_hwr_side_pane_t1

0x11ac,	// (0x000385f0) cell_hwr_side_pane_t1_copy1

0x11ba,	// (0x000385fe) cell_hwr_candidate_pane_g1

0x11e9,	// (0x0003862d) cell_hwr_candidate_pane_t1

0x4f39,	// (0x0003c37d) cell_vkb_candidate_pane_g2

0x54f6,	// (0x0003c93a) cell_vkb_candidate_pane_t1

0x0f55,	// (0x00038399) bg_popup_fep_shadow_pane_ParamLimits

0x0f55,	// (0x00038399) bg_popup_fep_shadow_pane

0x100a,	// (0x0003844e) bg_fep_hwr_top_pane_g4

0x4fb9,	// (0x0003c3fd) bg_hwr_side_pane_g1_ParamLimits

0x4fb9,	// (0x0003c3fd) bg_hwr_side_pane_g1

0xab0d,	// (0x00041f51) cell_hwr_side_pane_ParamLimits

0xab0d,	// (0x00041f51) cell_hwr_side_pane

0x10b6,	// (0x000384fa) fep_hwr_write_pane_g1_ParamLimits

0x10b6,	// (0x000384fa) fep_hwr_write_pane_g1

0x10c3,	// (0x00038507) fep_hwr_write_pane_g2_ParamLimits

0x10c3,	// (0x00038507) fep_hwr_write_pane_g2

0x10d0,	// (0x00038514) fep_hwr_write_pane_g3_ParamLimits

0x10d0,	// (0x00038514) fep_hwr_write_pane_g3

0xab2d,	// (0x00041f71) fep_hwr_write_pane_g4_ParamLimits

0xab2d,	// (0x00041f71) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x00046f4f) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x00046f4f) fep_hwr_write_pane_g

0x100a,	// (0x0003844e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x100a,	// (0x0003844e) bg_fep_hwr_candidate_pane_g2

0x10f3,	// (0x00038537) cell_hwr_candidate_pane_ParamLimits

0x10f3,	// (0x00038537) cell_hwr_candidate_pane

0x1135,	// (0x00038579) fep_hwr_candidate_pane_g1_ParamLimits

0x5019,	// (0x0003c45d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5019,	// (0x0003c45d) bg_popup_fep_shadow_pane_cp2

0x51a9,	// (0x0003c5ed) fep_vkb_top_pane_g4_ParamLimits

0x51a9,	// (0x0003c5ed) fep_vkb_top_pane_g4

0x51ef,	// (0x0003c633) fep_vkb_side_pane_g2_ParamLimits

0x51ef,	// (0x0003c633) fep_vkb_side_pane_g2

0x9628,	// (0x00040a6c) list_setting_pane_t4_ParamLimits

0x9628,	// (0x00040a6c) list_setting_pane_t4

0x96c2,	// (0x00040b06) list_setting_number_pane_t5_ParamLimits

0x96c2,	// (0x00040b06) list_setting_number_pane_t5

0xbc4f,	// (0x00043093) list_double_heading_pane_cp2_ParamLimits

0xbc4f,	// (0x00043093) list_double_heading_pane_cp2

0x5504,	// (0x0003c948) list_double_heading_pane_g1_cp2_ParamLimits

0x5504,	// (0x0003c948) list_double_heading_pane_g1_cp2

0x5510,	// (0x0003c954) list_double_heading_pane_g2_cp2_ParamLimits

0x5510,	// (0x0003c954) list_double_heading_pane_g2_cp2

0x5524,	// (0x0003c968) list_double_heading_pane_t1_cp2_ParamLimits

0x5524,	// (0x0003c968) list_double_heading_pane_t1_cp2

0x553a,	// (0x0003c97e) list_double_heading_pane_t2_cp2_ParamLimits

0x553a,	// (0x0003c97e) list_double_heading_pane_t2_cp2

0xb3bb,	// (0x000427ff) aid_value_unit2

0xef95,	// (0x000463d9) popup_preview_fixed_window

0xb55d,	// (0x000429a1) bg_popup_preview_window_pane_cp02

0x554c,	// (0x0003c990) list_preview_fixed_pane

0x5592,	// (0x0003c9d6) list_empty_pane_fp_ParamLimits

0x5592,	// (0x0003c9d6) list_empty_pane_fp

0x5592,	// (0x0003c9d6) list_single_cale_day_pane_fp_ParamLimits

0x5592,	// (0x0003c9d6) list_single_cale_day_pane_fp

0x5592,	// (0x0003c9d6) list_single_graphic_heading_pane_fp_ParamLimits

0x5592,	// (0x0003c9d6) list_single_graphic_heading_pane_fp

0x5592,	// (0x0003c9d6) list_single_graphic_pane_fp_ParamLimits

0x5592,	// (0x0003c9d6) list_single_graphic_pane_fp

0x5592,	// (0x0003c9d6) list_single_heading_pane_fp_ParamLimits

0x5592,	// (0x0003c9d6) list_single_heading_pane_fp

0x5592,	// (0x0003c9d6) list_single_pane_fp_ParamLimits

0x5592,	// (0x0003c9d6) list_single_pane_fp

0x55a8,	// (0x0003c9ec) list_single_pane_fp_g1_ParamLimits

0x55a8,	// (0x0003c9ec) list_single_pane_fp_g1

0xd7b6,	// (0x00044bfa) list_single_pane_fp_g2_ParamLimits

0xd7b6,	// (0x00044bfa) list_single_pane_fp_g2

0xd7c2,	// (0x00044c06) list_single_pane_fp_g3_ParamLimits

0xd7c2,	// (0x00044c06) list_single_pane_fp_g3

0x55b4,	// (0x0003c9f8) list_single_pane_fp_g4_ParamLimits

0x55b4,	// (0x0003c9f8) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x00046fb6) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x00046fb6) list_single_pane_fp_g

0xd7d6,	// (0x00044c1a) list_single_pane_fp_t1_ParamLimits

0xd7d6,	// (0x00044c1a) list_single_pane_fp_t1

0xd7ed,	// (0x00044c31) list_single_graphic_pane_fp_g1_ParamLimits

0xd7ed,	// (0x00044c31) list_single_graphic_pane_fp_g1

0x55a8,	// (0x0003c9ec) list_single_graphic_pane_fp_g2_ParamLimits

0x55a8,	// (0x0003c9ec) list_single_graphic_pane_fp_g2

0xd7b6,	// (0x00044bfa) list_single_graphic_pane_fp_g3_ParamLimits

0xd7b6,	// (0x00044bfa) list_single_graphic_pane_fp_g3

0xd7c2,	// (0x00044c06) list_single_graphic_pane_fp_g4_ParamLimits

0xd7c2,	// (0x00044c06) list_single_graphic_pane_fp_g4

0x55b4,	// (0x0003c9f8) list_single_graphic_pane_fp_g5_ParamLimits

0x55b4,	// (0x0003c9f8) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x00046fbf) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x00046fbf) list_single_graphic_pane_fp_g

0xd7f9,	// (0x00044c3d) list_single_graphic_pane_fp_t1_ParamLimits

0xd7f9,	// (0x00044c3d) list_single_graphic_pane_fp_t1

0xd7ed,	// (0x00044c31) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd7ed,	// (0x00044c31) list_single_graphic_heading_pane_fp_g1

0x55a8,	// (0x0003c9ec) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x55a8,	// (0x0003c9ec) list_single_graphic_heading_pane_fp_g2

0xd7b6,	// (0x00044bfa) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd7b6,	// (0x00044bfa) list_single_graphic_heading_pane_fp_g3

0xd7c2,	// (0x00044c06) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd7c2,	// (0x00044c06) list_single_graphic_heading_pane_fp_g4

0x55b4,	// (0x0003c9f8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x55b4,	// (0x0003c9f8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00046fbf) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00046fbf) list_single_graphic_heading_pane_fp_g

0xd80f,	// (0x00044c53) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd80f,	// (0x00044c53) list_single_graphic_heading_pane_fp_t1

0xd825,	// (0x00044c69) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd825,	// (0x00044c69) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x00046fca) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x00046fca) list_single_graphic_heading_pane_fp_t

0xd837,	// (0x00044c7b) list_single_cale_day_pane_fp_g1_ParamLimits

0xd837,	// (0x00044c7b) list_single_cale_day_pane_fp_g1

0x55c0,	// (0x0003ca04) list_single_cale_day_pane_fp_g2_ParamLimits

0x55c0,	// (0x0003ca04) list_single_cale_day_pane_fp_g2

0xd86f,	// (0x00044cb3) list_single_cale_day_pane_fp_g3_ParamLimits

0xd86f,	// (0x00044cb3) list_single_cale_day_pane_fp_g3

0xd897,	// (0x00044cdb) list_single_cale_day_pane_fp_g4_ParamLimits

0xd897,	// (0x00044cdb) list_single_cale_day_pane_fp_g4

0xd8bb,	// (0x00044cff) list_single_cale_day_pane_fp_g5_ParamLimits

0xd8bb,	// (0x00044cff) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x00046fcf) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x00046fcf) list_single_cale_day_pane_fp_g

0xd8df,	// (0x00044d23) list_single_cale_day_pane_fp_t1_ParamLimits

0xd8df,	// (0x00044d23) list_single_cale_day_pane_fp_t1

0xd905,	// (0x00044d49) list_single_cale_day_pane_fp_t2_ParamLimits

0xd905,	// (0x00044d49) list_single_cale_day_pane_fp_t2

0xd91e,	// (0x00044d62) list_single_cale_day_pane_fp_t3_ParamLimits

0xd91e,	// (0x00044d62) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x00046fda) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x00046fda) list_single_cale_day_pane_fp_t

0x55a8,	// (0x0003c9ec) list_empty_pane_fp_g1_ParamLimits

0x55a8,	// (0x0003c9ec) list_empty_pane_fp_g1

0xd937,	// (0x00044d7b) list_empty_pane_fp_t1

0xd945,	// (0x00044d89) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x00046fe1) list_empty_pane_fp_t

0x55a8,	// (0x0003c9ec) list_single_heading_pane_fp_g1_ParamLimits

0x55a8,	// (0x0003c9ec) list_single_heading_pane_fp_g1

0xd7b6,	// (0x00044bfa) list_single_heading_pane_fp_g2_ParamLimits

0xd7b6,	// (0x00044bfa) list_single_heading_pane_fp_g2

0xd7c2,	// (0x00044c06) list_single_heading_pane_fp_g3_ParamLimits

0xd7c2,	// (0x00044c06) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x00046fe6) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x00046fe6) list_single_heading_pane_fp_g

0xd953,	// (0x00044d97) list_single_heading_pane_fp_t1_ParamLimits

0xd953,	// (0x00044d97) list_single_heading_pane_fp_t1

0xd965,	// (0x00044da9) list_single_heading_pane_fp_t2_ParamLimits

0xd965,	// (0x00044da9) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x00046fed) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x00046fed) list_single_heading_pane_fp_t

0x99d4,	// (0x00040e18) aid_size_cell_fast

0xb540,	// (0x00042984) soft_indicator_pane_cp1_t1

0x99dd,	// (0x00040e21) cell_app_pane_cp2_ParamLimits

0x99dd,	// (0x00040e21) cell_app_pane_cp2

0x0f77,	// (0x000383bb) fep_hwr_candidate_drop_down_list_pane

0x114f,	// (0x00038593) fep_hwr_candidate_pane_g3_ParamLimits

0x114f,	// (0x00038593) fep_hwr_candidate_pane_g3

0xd7a9,	// (0x00044bed) fep_hwr_candidate_pane_g4_ParamLimits

0xd7a9,	// (0x00044bed) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x00046f5c) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x00046f5c) fep_hwr_candidate_pane_g

0x509e,	// (0x0003c4e2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x509e,	// (0x0003c4e2) fep_vkb_candidate_drop_down_list_pane

0x54a1,	// (0x0003c8e5) fep_vkb_candidate_pane_g3

0x54a9,	// (0x0003c8ed) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x00046f89) fep_vkb_candidate_pane_g

0x11ba,	// (0x000385fe) cell_hwr_candidate_pane_g1_ParamLimits

0x11c8,	// (0x0003860c) cell_hwr_candidate_pane_g3_ParamLimits

0x11c8,	// (0x0003860c) cell_hwr_candidate_pane_g3

0x5cb0,	// (0x0003d0f4) cell_hwr_candidate_pane_g4_ParamLimits

0x5cb0,	// (0x0003d0f4) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x00046fa8) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x00046fa8) cell_hwr_candidate_pane_g

0x54c0,	// (0x0003c904) cell_vkb_candidate_pane_g3_ParamLimits

0x54c0,	// (0x0003c904) cell_vkb_candidate_pane_g3

0x54db,	// (0x0003c91f) cell_vkb_candidate_pane_g4_ParamLimits

0x54db,	// (0x0003c91f) cell_vkb_candidate_pane_g4

0xcee7,	// (0x0004432b) cell_app_pane_cp2_g1_ParamLimits

0xcee7,	// (0x0004432b) cell_app_pane_cp2_g1

0x55ea,	// (0x0003ca2e) cell_app_pane_cp2_g2_ParamLimits

0x55ea,	// (0x0003ca2e) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x00046ff2) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x00046ff2) cell_app_pane_cp2_g

0x55f6,	// (0x0003ca3a) cell_app_pane_cp2_t1_ParamLimits

0x55f6,	// (0x0003ca3a) cell_app_pane_cp2_t1

0xb7e5,	// (0x00042c29) grid_highlight_pane_cp1_ParamLimits

0xb7e5,	// (0x00042c29) grid_highlight_pane_cp1

0x1207,	// (0x0003864b) cell_hwr_candidate_pane_cp1_ParamLimits

0x1207,	// (0x0003864b) cell_hwr_candidate_pane_cp1

0x11ba,	// (0x000385fe) fep_hwr_candidate_drop_down_list_pane_g1

0x1226,	// (0x0003866a) fep_hwr_candidate_drop_down_list_pane_g2

0x1233,	// (0x00038677) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x00046ff7) fep_hwr_candidate_drop_down_list_pane_g

0x1240,	// (0x00038684) fep_hwr_candidate_drop_down_list_scroll_pane

0x1249,	// (0x0003868d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1249,	// (0x0003868d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1256,	// (0x0003869a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1256,	// (0x0003869a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1263,	// (0x000386a7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1263,	// (0x000386a7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1270,	// (0x000386b4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1270,	// (0x000386b4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x128b,	// (0x000386cf) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x128b,	// (0x000386cf) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x12a6,	// (0x000386ea) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x12a6,	// (0x000386ea) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x12c1,	// (0x00038705) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x12c1,	// (0x00038705) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x12dc,	// (0x00038720) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x12dc,	// (0x00038720) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x00046ffe) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x00046ffe) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5608,	// (0x0003ca4c) cell_vkb_candidate_pane_cp1_ParamLimits

0x5608,	// (0x0003ca4c) cell_vkb_candidate_pane_cp1

0x51a9,	// (0x0003c5ed) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x51a9,	// (0x0003c5ed) fep_vkb_candidate_drop_down_list_pane_g1

0x5628,	// (0x0003ca6c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5628,	// (0x0003ca6c) fep_vkb_candidate_drop_down_list_pane_g2

0x5635,	// (0x0003ca79) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5635,	// (0x0003ca79) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x0004700f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x0004700f) fep_vkb_candidate_drop_down_list_pane_g

0x5642,	// (0x0003ca86) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5642,	// (0x0003ca86) fep_vkb_candidate_drop_down_list_scroll_pane

0x564f,	// (0x0003ca93) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x564f,	// (0x0003ca93) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x565c,	// (0x0003caa0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x565c,	// (0x0003caa0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5668,	// (0x0003caac) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5668,	// (0x0003caac) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5674,	// (0x0003cab8) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5674,	// (0x0003cab8) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5695,	// (0x0003cad9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5695,	// (0x0003cad9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x56b6,	// (0x0003cafa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x56b6,	// (0x0003cafa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x56d7,	// (0x0003cb1b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x56d7,	// (0x0003cb1b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x56f8,	// (0x0003cb3c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x56f8,	// (0x0003cb3c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00047016) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00047016) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8dbc,	// (0x00040200) title_pane_g1_ParamLimits

0x8dcf,	// (0x00040213) title_pane_g2_ParamLimits

0xf54e,	// (0x00046992) title_pane_g_ParamLimits

0xbc08,	// (0x0004304c) aid_call2_pane

0xbc10,	// (0x00043054) aid_call_pane

0xbc18,	// (0x0004305c) popup_clock_analogue_window_g1

0xbc18,	// (0x0004305c) popup_clock_analogue_window_g2

0xf1ce,	// (0x00046612) popup_clock_analogue_window_g3

0xf1d7,	// (0x0004661b) popup_clock_analogue_window_g4

0xb3cd,	// (0x00042811) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x00046b2d) popup_clock_analogue_window_g

0xf1df,	// (0x00046623) popup_clock_analogue_window_t1

0xf1ed,	// (0x00046631) clock_digital_number_pane_ParamLimits

0xf1ed,	// (0x00046631) clock_digital_number_pane

0xf1f9,	// (0x0004663d) clock_digital_number_pane_cp02_ParamLimits

0xf1f9,	// (0x0004663d) clock_digital_number_pane_cp02

0xf205,	// (0x00046649) clock_digital_number_pane_cp03_ParamLimits

0xf205,	// (0x00046649) clock_digital_number_pane_cp03

0xf211,	// (0x00046655) clock_digital_number_pane_cp04_ParamLimits

0xf211,	// (0x00046655) clock_digital_number_pane_cp04

0xf21d,	// (0x00046661) clock_digital_separator_pane_ParamLimits

0xf21d,	// (0x00046661) clock_digital_separator_pane

0xf229,	// (0x0004666d) popup_clock_digital_window_t1_ParamLimits

0xf229,	// (0x0004666d) popup_clock_digital_window_t1

0xb3cd,	// (0x00042811) clock_digital_number_pane_g1

0xb3cd,	// (0x00042811) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00046b38) clock_digital_number_pane_g

0xb3cd,	// (0x00042811) clock_digital_separator_pane_g1

0xb3cd,	// (0x00042811) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00046b38) clock_digital_separator_pane_g

0xbcdb,	// (0x0004311f) aid_fill_nsta_ParamLimits

0xbe11,	// (0x00043255) indicator_nsta_pane_ParamLimits

0x2746,	// (0x00039b8a) popup_clock_analogue_window

0x2746,	// (0x00039b8a) popup_clock_digital_window

0xcb0d,	// (0x00043f51) grid_indicator_nsta_pane_ParamLimits

0x4944,	// (0x0003bd88) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x00046edc) clock_nsta_pane_t

0xf1af,	// (0x000465f3) aid_size_max_handle

0x9abb,	// (0x00040eff) aid_size_min_handle

0x2114,	// (0x00039558) editor_scroll_pane

0x5713,	// (0x0003cb57) ex_editor_pane

0xb904,	// (0x00042d48) scroll_pane_cp13

0xb78d,	// (0x00042bd1) scroll_pane_cp14

0xbc47,	// (0x0004308b) scroll_pane_cp36

0x9b85,	// (0x00040fc9) list_single_graphic_hl_pane_cp2_ParamLimits

0x9b85,	// (0x00040fc9) list_single_graphic_hl_pane_cp2

0xc8f9,	// (0x00043d3d) list_single_graphic_hl_pane_ParamLimits

0xc8f9,	// (0x00043d3d) list_single_graphic_hl_pane

0xab42,	// (0x00041f86) aid_size_min_hl_cp1

0x571b,	// (0x0003cb5f) list_highlight_pane_cp34_ParamLimits

0x571b,	// (0x0003cb5f) list_highlight_pane_cp34

0x572c,	// (0x0003cb70) list_single_graphic_hl_pane_g1_ParamLimits

0x572c,	// (0x0003cb70) list_single_graphic_hl_pane_g1

0xab4b,	// (0x00041f8f) list_single_graphic_hl_pane_g2_ParamLimits

0xab4b,	// (0x00041f8f) list_single_graphic_hl_pane_g2

0xab4b,	// (0x00041f8f) list_single_graphic_hl_pane_g3_ParamLimits

0xab4b,	// (0x00041f8f) list_single_graphic_hl_pane_g3

0xd97b,	// (0x00044dbf) list_single_graphic_hl_pane_g4_ParamLimits

0xd97b,	// (0x00044dbf) list_single_graphic_hl_pane_g4

0xab57,	// (0x00041f9b) list_single_graphic_hl_pane_g5_ParamLimits

0xab57,	// (0x00041f9b) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00047027) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00047027) list_single_graphic_hl_pane_g

0xab6b,	// (0x00041faf) list_single_graphic_hl_pane_t1_ParamLimits

0xab6b,	// (0x00041faf) list_single_graphic_hl_pane_t1

0x5739,	// (0x0003cb7d) aid_size_min_hl_cp2

0x5742,	// (0x0003cb86) list_highlight_pane_cp34_cp2_ParamLimits

0x5742,	// (0x0003cb86) list_highlight_pane_cp34_cp2

0x572c,	// (0x0003cb70) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x572c,	// (0x0003cb70) list_single_graphic_hl_pane_g1_cp2

0x574f,	// (0x0003cb93) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x574f,	// (0x0003cb93) list_single_graphic_hl_pane_g2_cp2

0xcf05,	// (0x00044349) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf05,	// (0x00044349) list_single_graphic_hl_pane_g3_cp2

0x015c,	// (0x000375a0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x015c,	// (0x000375a0) list_single_graphic_hl_pane_g4_cp2

0x5769,	// (0x0003cbad) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5769,	// (0x0003cbad) list_single_graphic_hl_pane_g5_cp2

0x9f9e,	// (0x000413e2) control_pane_g4_ParamLimits

0x9f9e,	// (0x000413e2) control_pane_g4

0x245f,	// (0x000398a3) bg_popup_sub_pane_cp10_ParamLimits

0x4f43,	// (0x0003c387) list_choice_list_pane_ParamLimits

0x4f52,	// (0x0003c396) scroll_pane_cp23

0xb55d,	// (0x000429a1) bg_popup_preview_window_pane_cp02_ParamLimits

0x554c,	// (0x0003c990) list_preview_fixed_pane_ParamLimits

0x5562,	// (0x0003c9a6) list_preview_fixed_pane_cp_ParamLimits

0x5562,	// (0x0003c9a6) list_preview_fixed_pane_cp

0x556e,	// (0x0003c9b2) popup_preview_fixed_window_g1_ParamLimits

0x556e,	// (0x0003c9b2) popup_preview_fixed_window_g1

0x557a,	// (0x0003c9be) popup_preview_fixed_window_g2_ParamLimits

0x557a,	// (0x0003c9be) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x00046faf) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x00046faf) popup_preview_fixed_window_g

0xf09d,	// (0x000464e1) aid_navi_side_left_pane_ParamLimits

0xf0b2,	// (0x000464f6) aid_navi_side_right_pane_ParamLimits

0xf0ca,	// (0x0004650e) navi_icon_pane_stacon_ParamLimits

0xf0de,	// (0x00046522) navi_navi_pane_stacon_ParamLimits

0xf0ca,	// (0x0004650e) navi_text_pane_stacon_ParamLimits

0xeeba,	// (0x000462fe) main_text_info_pane

0x5793,	// (0x0003cbd7) listscroll_text_info_pane

0x579b,	// (0x0003cbdf) list_text_info_pane_ParamLimits

0x579b,	// (0x0003cbdf) list_text_info_pane

0x57aa,	// (0x0003cbee) scroll_pane_cp24_ParamLimits

0x57aa,	// (0x0003cbee) scroll_pane_cp24

0xcf13,	// (0x00044357) list_text_info_pane_t1_ParamLimits

0xcf13,	// (0x00044357) list_text_info_pane_t1

0xa13a,	// (0x0004157e) popup_fast_swap2_window_ParamLimits

0xa13a,	// (0x0004157e) popup_fast_swap2_window

0x57fc,	// (0x0003cc40) aid_size_cell_fast2

0xb3c3,	// (0x00042807) bg_popup_window_pane_cp17

0x2dd3,	// (0x0003a217) heading_pane_cp2

0xb691,	// (0x00042ad5) listscroll_fast2_pane

0x5806,	// (0x0003cc4a) grid_fast2_pane

0x5810,	// (0x0003cc54) listscroll_fast2_pane_g1

0x5818,	// (0x0003cc5c) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00047032) listscroll_fast2_pane_g

0xb904,	// (0x00042d48) scroll_pane_cp26

0x5822,	// (0x0003cc66) cell_fast2_pane_ParamLimits

0x5822,	// (0x0003cc66) cell_fast2_pane

0x5837,	// (0x0003cc7b) cell_fast2_pane_g1

0x5840,	// (0x0003cc84) cell_fast2_pane_g2

0x5849,	// (0x0003cc8d) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00047037) cell_fast2_pane_g

0xb6c4,	// (0x00042b08) grid_highlight_pane_cp9

0x0387,	// (0x000377cb) main_eswt_pane_ParamLimits

0x0387,	// (0x000377cb) main_eswt_pane

0x57bf,	// (0x0003cc03) list_single_text_info_pane

0x5851,	// (0x0003cc95) eswt_ctrl_button_pane

0x5851,	// (0x0003cc95) eswt_ctrl_canvas_pane

0xcf2f,	// (0x00044373) eswt_ctrl_combo_pane

0x5851,	// (0x0003cc95) eswt_ctrl_default_pane

0x5851,	// (0x0003cc95) eswt_ctrl_label_pane

0x5861,	// (0x0003cca5) eswt_ctrl_wait_pane

0xcf37,	// (0x0004437b) eswt_shell_pane

0xb3c3,	// (0x00042807) listscroll_eswt_app_pane

0x5889,	// (0x0003cccd) popup_eswt_tasktip_window_ParamLimits

0x5889,	// (0x0003cccd) popup_eswt_tasktip_window

0x29e0,	// (0x00039e24) bg_popup_window_pane_cp18

0x589a,	// (0x0003ccde) eswt_control_pane_g1_ParamLimits

0x589a,	// (0x0003ccde) eswt_control_pane_g1

0x58a7,	// (0x0003cceb) eswt_control_pane_g2_ParamLimits

0x58a7,	// (0x0003cceb) eswt_control_pane_g2

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3_ParamLimits

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3

0x58c1,	// (0x0003cd05) eswt_control_pane_g4_ParamLimits

0x58c1,	// (0x0003cd05) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x0004703e) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x0004703e) eswt_control_pane_g

0xb7e5,	// (0x00042c29) bg_button_pane_ParamLimits

0xb7e5,	// (0x00042c29) bg_button_pane

0xb6d9,	// (0x00042b1d) common_borders_pane_copy2_ParamLimits

0xb6d9,	// (0x00042b1d) common_borders_pane_copy2

0x58ce,	// (0x0003cd12) control_button_pane_g1_ParamLimits

0x58ce,	// (0x0003cd12) control_button_pane_g1

0x58da,	// (0x0003cd1e) control_button_pane_g2_ParamLimits

0x58da,	// (0x0003cd1e) control_button_pane_g2

0x58e6,	// (0x0003cd2a) control_button_pane_g3_ParamLimits

0x58e6,	// (0x0003cd2a) control_button_pane_g3

0x0002,

0xfc03,	// (0x00047047) control_button_pane_g_ParamLimits

0xfc03,	// (0x00047047) control_button_pane_g

0x58fa,	// (0x0003cd3e) control_button_pane_t1

0x5908,	// (0x0003cd4c) control_button_pane_t2

0x0001,

0xfc0a,	// (0x0004704e) control_button_pane_t

0x296c,	// (0x00039db0) bg_button_pane_g1

0x297c,	// (0x00039dc0) bg_button_pane_g2

0x2974,	// (0x00039db8) bg_button_pane_g3

0x298c,	// (0x00039dd0) bg_button_pane_g4

0x2984,	// (0x00039dc8) bg_button_pane_g5

0x2994,	// (0x00039dd8) bg_button_pane_g6

0x299c,	// (0x00039de0) bg_button_pane_g7

0x29ac,	// (0x00039df0) bg_button_pane_g8

0x29a4,	// (0x00039de8) bg_button_pane_g9

0x0008,

0xf84b,	// (0x00046c8f) bg_button_pane_g

0x4efe,	// (0x0003c342) common_borders_pane_ParamLimits

0x4efe,	// (0x0003c342) common_borders_pane

0x589a,	// (0x0003ccde) eswt_control_pane_g1_copy1_ParamLimits

0x589a,	// (0x0003ccde) eswt_control_pane_g1_copy1

0x58a7,	// (0x0003cceb) eswt_control_pane_g2_copy1_ParamLimits

0x58a7,	// (0x0003cceb) eswt_control_pane_g2_copy1

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3_copy1_ParamLimits

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3_copy1

0x58c1,	// (0x0003cd05) eswt_control_pane_g4_copy1_ParamLimits

0x58c1,	// (0x0003cd05) eswt_control_pane_g4_copy1

0x4f39,	// (0x0003c37d) bg_eswt_ctrl_canvas_pane_g1

0x4efe,	// (0x0003c342) common_borders_pane_cp2_ParamLimits

0x4efe,	// (0x0003c342) common_borders_pane_cp2

0x4efe,	// (0x0003c342) common_borders_pane_cp3_ParamLimits

0x4efe,	// (0x0003c342) common_borders_pane_cp3

0x5916,	// (0x0003cd5a) separator_horizontal_pane

0x591e,	// (0x0003cd62) separator_vertical_pane

0x589a,	// (0x0003ccde) eswt_control_pane_g1_copy2_ParamLimits

0x589a,	// (0x0003ccde) eswt_control_pane_g1_copy2

0x58a7,	// (0x0003cceb) eswt_control_pane_g2_copy2_ParamLimits

0x58a7,	// (0x0003cceb) eswt_control_pane_g2_copy2

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3_copy2_ParamLimits

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3_copy2

0x58c1,	// (0x0003cd05) eswt_control_pane_g4_copy2_ParamLimits

0x58c1,	// (0x0003cd05) eswt_control_pane_g4_copy2

0xb3c3,	// (0x00042807) common_borders_pane_cp4

0x5927,	// (0x0003cd6b) separator_horizontal_pane_g1

0x5930,	// (0x0003cd74) separator_horizontal_pane_g2

0x5939,	// (0x0003cd7d) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00047053) separator_horizontal_pane_g

0x589a,	// (0x0003ccde) eswt_control_pane_g1_copy3_ParamLimits

0x589a,	// (0x0003ccde) eswt_control_pane_g1_copy3

0x58a7,	// (0x0003cceb) eswt_control_pane_g2_copy3_ParamLimits

0x58a7,	// (0x0003cceb) eswt_control_pane_g2_copy3

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3_copy3_ParamLimits

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3_copy3

0x58c1,	// (0x0003cd05) eswt_control_pane_g4_copy3_ParamLimits

0x58c1,	// (0x0003cd05) eswt_control_pane_g4_copy3

0xb3c3,	// (0x00042807) common_borders_pane_cp5

0x5942,	// (0x0003cd86) separator_vertical_pane_g1

0x594b,	// (0x0003cd8f) separator_vertical_pane_g2

0x5954,	// (0x0003cd98) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x0004705a) separator_vertical_pane_g

0x589a,	// (0x0003ccde) eswt_control_pane_g1_copy4_ParamLimits

0x589a,	// (0x0003ccde) eswt_control_pane_g1_copy4

0x58a7,	// (0x0003cceb) eswt_control_pane_g2_copy4_ParamLimits

0x58a7,	// (0x0003cceb) eswt_control_pane_g2_copy4

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3_copy4_ParamLimits

0x58b4,	// (0x0003ccf8) eswt_control_pane_g3_copy4

0x58c1,	// (0x0003cd05) eswt_control_pane_g4_copy4_ParamLimits

0x58c1,	// (0x0003cd05) eswt_control_pane_g4_copy4

0xcf57,	// (0x0004439b) eswt_ctrl_combo_button_pane

0xcf5f,	// (0x000443a3) eswt_ctrl_input_pane

0xcf67,	// (0x000443ab) popup_choice_list_window_cp70

0xcf6f,	// (0x000443b3) eswt_ctrl_input_pane_t1

0xb3c3,	// (0x00042807) input_focus_pane_cp70

0x4efe,	// (0x0003c342) bg_button_pane_cp70_ParamLimits

0x4efe,	// (0x0003c342) bg_button_pane_cp70

0xcf7d,	// (0x000443c1) eswt_ctrl_combo_button_pane_g1

0x598b,	// (0x0003cdcf) wait_bar_pane_cp70

0x29e0,	// (0x00039e24) bg_popup_window_pane_cp70_ParamLimits

0x29e0,	// (0x00039e24) bg_popup_window_pane_cp70

0x5993,	// (0x0003cdd7) popup_eswt_tasktip_window_t1

0x59a9,	// (0x0003cded) wait_bar_pane_cp71_ParamLimits

0x59a9,	// (0x0003cded) wait_bar_pane_cp71

0x59b5,	// (0x0003cdf9) grid_eswt_app_pane

0xbaeb,	// (0x00042f2f) scroll_pane_cp70

0xcf85,	// (0x000443c9) cell_eswt_app_pane_ParamLimits

0xcf85,	// (0x000443c9) cell_eswt_app_pane

0xcfaf,	// (0x000443f3) cell_eswt_app_pane_g1_ParamLimits

0xcfaf,	// (0x000443f3) cell_eswt_app_pane_g1

0xcfde,	// (0x00044422) cell_eswt_app_pane_g2_ParamLimits

0xcfde,	// (0x00044422) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00047061) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00047061) cell_eswt_app_pane_g

0xd002,	// (0x00044446) cell_eswt_app_pane_t1_ParamLimits

0xd002,	// (0x00044446) cell_eswt_app_pane_t1

0x5a73,	// (0x0003ceb7) grid_highlight_pane_cp70_ParamLimits

0x5a73,	// (0x0003ceb7) grid_highlight_pane_cp70

0x00f8,	// (0x0003753c) set_content_pane_g1

0x9f30,	// (0x00041374) status_small_volume_pane

0xab81,	// (0x00041fc5) status_small_volume_pane_g1

0xab89,	// (0x00041fcd) volume_small2_pane

0xab92,	// (0x00041fd6) volume_small2_pane_g1

0xab9b,	// (0x00041fdf) volume_small2_pane_g2

0xaba4,	// (0x00041fe8) volume_small2_pane_g3

0xabad,	// (0x00041ff1) volume_small2_pane_g4

0xabb6,	// (0x00041ffa) volume_small2_pane_g5

0xabbf,	// (0x00042003) volume_small2_pane_g6

0xabc8,	// (0x0004200c) volume_small2_pane_g7

0xabd1,	// (0x00042015) volume_small2_pane_g8

0xabda,	// (0x0004201e) volume_small2_pane_g9

0xabe3,	// (0x00042027) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00047066) volume_small2_pane_g

0x52f1,	// (0x0003c735) fep_vkb_top_text_pane_g1_ParamLimits

0xce8f,	// (0x000442d3) fep_vkb_top_text_pane_t1_ParamLimits

0x5586,	// (0x0003c9ca) popup_preview_fixed_window_g3_ParamLimits

0x5586,	// (0x0003c9ca) popup_preview_fixed_window_g3

0xa7d7,	// (0x00041c1b) popup_toolbar_trans_pane

0xc792,	// (0x00043bd6) aid_height_set_list_ParamLimits

0x3d1b,	// (0x0003b15f) aid_size_parent_ParamLimits

0x245f,	// (0x000398a3) list_highlight_pane_cp2_ParamLimits

0x00f8,	// (0x0003753c) set_content_pane_g1_ParamLimits

0xc90b,	// (0x00043d4f) list_single_image_pane_ParamLimits

0xc90b,	// (0x00043d4f) list_single_image_pane

0xd034,	// (0x00044478) aid_size_cell_image_ParamLimits

0xd034,	// (0x00044478) aid_size_cell_image

0xd041,	// (0x00044485) grid_single_image_pane_ParamLimits

0xd041,	// (0x00044485) grid_single_image_pane

0x5a9a,	// (0x0003cede) list_single_image_pane_g1_ParamLimits

0x5a9a,	// (0x0003cede) list_single_image_pane_g1

0x5aa6,	// (0x0003ceea) list_single_image_pane_g2_ParamLimits

0x5aa6,	// (0x0003ceea) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x0004707b) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x0004707b) list_single_image_pane_g

0x5aba,	// (0x0003cefe) list_single_image_pane_t1_ParamLimits

0x5aba,	// (0x0003cefe) list_single_image_pane_t1

0xd04d,	// (0x00044491) cell_image_list_pane_ParamLimits

0xd04d,	// (0x00044491) cell_image_list_pane

0xd061,	// (0x000444a5) cell_image_list_pane_g1

0xd06a,	// (0x000444ae) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00047080) cell_image_list_pane_g

0xd073,	// (0x000444b7) aid_size_cell_tb_trans_pane

0xb7e5,	// (0x00042c29) bg_tb_trans_pane

0xd085,	// (0x000444c9) grid_tb_trans_pane

0x296c,	// (0x00039db0) bg_tb_trans_pane_g1

0x297c,	// (0x00039dc0) bg_tb_trans_pane_g2

0x2974,	// (0x00039db8) bg_tb_trans_pane_g3

0x298c,	// (0x00039dd0) bg_tb_trans_pane_g4

0x2984,	// (0x00039dc8) bg_tb_trans_pane_g5

0x29ac,	// (0x00039df0) bg_tb_trans_pane_g6

0x29a4,	// (0x00039de8) bg_tb_trans_pane_g7

0x2994,	// (0x00039dd8) bg_tb_trans_pane_g8

0x299c,	// (0x00039de0) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00047085) bg_tb_trans_pane_g

0xd099,	// (0x000444dd) cell_toolbar_trans_pane_ParamLimits

0xd099,	// (0x000444dd) cell_toolbar_trans_pane

0x4f39,	// (0x0003c37d) cell_toolbar_trans_pane_g1

0xcbd4,	// (0x00044018) list_form2_midp_pane_t1

0xcbe2,	// (0x00044026) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00046f22) list_form2_midp_pane_t

0x4b20,	// (0x0003bf64) scroll_pane_cp51_ParamLimits

0x4cdc,	// (0x0003c120) form2_midp_wait_pane_g1

0x4ce5,	// (0x0003c129) form2_midp_wait_pane_g2

0x4cee,	// (0x0003c132) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x00046f37) form2_midp_wait_pane_g

0xb433,	// (0x00042877) list_highlight_pane_cp21_ParamLimits

0x4d36,	// (0x0003c17a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4d45,	// (0x0003c189) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd424,	// (0x00044868) list_single_2graphic_im_pane_ParamLimits

0xd424,	// (0x00044868) list_single_2graphic_im_pane

0xd0bf,	// (0x00044503) list_single_2graphic_im_pane_g1_ParamLimits

0xd0bf,	// (0x00044503) list_single_2graphic_im_pane_g1

0xd0d0,	// (0x00044514) list_single_2graphic_im_pane_g2_ParamLimits

0xd0d0,	// (0x00044514) list_single_2graphic_im_pane_g2

0xd0dc,	// (0x00044520) list_single_2graphic_im_pane_g3_ParamLimits

0xd0dc,	// (0x00044520) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00047098) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00047098) list_single_2graphic_im_pane_g

0xd0f0,	// (0x00044534) list_single_2graphic_im_pane_t1_ParamLimits

0xd0f0,	// (0x00044534) list_single_2graphic_im_pane_t1

0x5592,	// (0x0003c9d6) list_single_graphic_2heading_pane_fp_ParamLimits

0x5592,	// (0x0003c9d6) list_single_graphic_2heading_pane_fp

0xd7ed,	// (0x00044c31) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd7ed,	// (0x00044c31) list_single_graphic_2heading_pane_fp_g1

0x55a8,	// (0x0003c9ec) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x55a8,	// (0x0003c9ec) list_single_graphic_2heading_pane_fp_g2

0xd7b6,	// (0x00044bfa) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd7b6,	// (0x00044bfa) list_single_graphic_2heading_pane_fp_g3

0xd7c2,	// (0x00044c06) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd7c2,	// (0x00044c06) list_single_graphic_2heading_pane_fp_g4

0x55b4,	// (0x0003c9f8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x55b4,	// (0x0003c9f8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00046fbf) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00046fbf) list_single_graphic_2heading_pane_fp_g

0xd987,	// (0x00044dcb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd987,	// (0x00044dcb) list_single_graphic_2heading_pane_fp_t1

0xd825,	// (0x00044c69) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd825,	// (0x00044c69) list_single_graphic_2heading_pane_fp_t2

0xd99d,	// (0x00044de1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd99d,	// (0x00044de1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x000470a1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x000470a1) list_single_graphic_2heading_pane_fp_t

0x4fc5,	// (0x0003c409) fep_hwr_write_pane_g5_ParamLimits

0x4fc5,	// (0x0003c409) fep_hwr_write_pane_g5

0x4fd1,	// (0x0003c415) fep_hwr_write_pane_g6_ParamLimits

0x4fd1,	// (0x0003c415) fep_hwr_write_pane_g6

0xcf37,	// (0x0004437b) eswt_shell_pane_ParamLimits

0x29e0,	// (0x00039e24) bg_popup_window_pane_cp18_ParamLimits

0x3c63,	// (0x0003b0a7) heading_pane_cp70

0x5993,	// (0x0003cdd7) popup_eswt_tasktip_window_t1_ParamLimits

0xbd36,	// (0x0004317a) aid_touch_tab_arrow_left

0xbd4c,	// (0x00043190) aid_touch_tab_arrow_right

0x8de7,	// (0x0004022b) title_pane_g3_ParamLimits

0x8de7,	// (0x0004022b) title_pane_g3

0xb7ad,	// (0x00042bf1) set_value_pane_g1

0xa7d7,	// (0x00041c1b) popup_toolbar_trans_pane_ParamLimits

0xd073,	// (0x000444b7) aid_size_cell_tb_trans_pane_ParamLimits

0xb7e5,	// (0x00042c29) bg_tb_trans_pane_ParamLimits

0xd085,	// (0x000444c9) grid_tb_trans_pane_ParamLimits

0xb55d,	// (0x000429a1) cont_note_pane_ParamLimits

0xb55d,	// (0x000429a1) cont_note_pane

0xb6d9,	// (0x00042b1d) cont_snote2_single_text_pane_ParamLimits

0xb6d9,	// (0x00042b1d) cont_snote2_single_text_pane

0xb6d9,	// (0x00042b1d) cont_snote2_single_graphic_pane_ParamLimits

0xb6d9,	// (0x00042b1d) cont_snote2_single_graphic_pane

0x2fe6,	// (0x0003a42a) cont_note_wait_pane_ParamLimits

0x2fe6,	// (0x0003a42a) cont_note_wait_pane

0x2fe6,	// (0x0003a42a) cont_note_image_pane_ParamLimits

0x2fe6,	// (0x0003a42a) cont_note_image_pane

0x5bb0,	// (0x0003cff4) popup_note2_window_g1_ParamLimits

0x5bb0,	// (0x0003cff4) popup_note2_window_g1

0xd12e,	// (0x00044572) popup_note2_window_t1_ParamLimits

0xd12e,	// (0x00044572) popup_note2_window_t1

0xd173,	// (0x000445b7) popup_note2_window_t2_ParamLimits

0xd173,	// (0x000445b7) popup_note2_window_t2

0xd1b8,	// (0x000445fc) popup_note2_window_t3_ParamLimits

0xd1b8,	// (0x000445fc) popup_note2_window_t3

0x5cd1,	// (0x0003d115) popup_note2_window_t4_ParamLimits

0x5cd1,	// (0x0003d115) popup_note2_window_t4

0xb5e1,	// (0x00042a25) popup_note2_window_t5_ParamLimits

0xb5e1,	// (0x00042a25) popup_note2_window_t5

0x0004,

0xfc69,	// (0x000470ad) popup_note2_window_t_ParamLimits

0xfc69,	// (0x000470ad) popup_note2_window_t

0x5d00,	// (0x0003d144) popup_note2_image_window_g1_ParamLimits

0x5d00,	// (0x0003d144) popup_note2_image_window_g1

0xd9b3,	// (0x00044df7) popup_note2_image_window_g2_ParamLimits

0xd9b3,	// (0x00044df7) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x000470b8) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x000470b8) popup_note2_image_window_g

0x5d1e,	// (0x0003d162) popup_note2_image_window_t1_ParamLimits

0x5d1e,	// (0x0003d162) popup_note2_image_window_t1

0x5d36,	// (0x0003d17a) popup_note2_image_window_t2_ParamLimits

0x5d36,	// (0x0003d17a) popup_note2_image_window_t2

0x5d4e,	// (0x0003d192) popup_note2_image_window_t3_ParamLimits

0x5d4e,	// (0x0003d192) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x000470bd) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x000470bd) popup_note2_image_window_t

0x2ff4,	// (0x0003a438) popup_note2_wait_window_g1_ParamLimits

0x2ff4,	// (0x0003a438) popup_note2_wait_window_g1

0x3000,	// (0x0003a444) popup_note2_wait_window_g2_ParamLimits

0x3000,	// (0x0003a444) popup_note2_wait_window_g2

0x300c,	// (0x0003a450) popup_note2_wait_window_g3_ParamLimits

0x300c,	// (0x0003a450) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x00046c71) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x00046c71) popup_note2_wait_window_g

0x5d6a,	// (0x0003d1ae) popup_note2_wait_window_t1_ParamLimits

0x5d6a,	// (0x0003d1ae) popup_note2_wait_window_t1

0x5d88,	// (0x0003d1cc) popup_note2_wait_window_t2_ParamLimits

0x5d88,	// (0x0003d1cc) popup_note2_wait_window_t2

0x5da6,	// (0x0003d1ea) popup_note2_wait_window_t3_ParamLimits

0x5da6,	// (0x0003d1ea) popup_note2_wait_window_t3

0x5db8,	// (0x0003d1fc) popup_note2_wait_window_t4_ParamLimits

0x5db8,	// (0x0003d1fc) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x000470c4) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x000470c4) popup_note2_wait_window_t

0x5dca,	// (0x0003d20e) wait_bar2_pane_ParamLimits

0x5dca,	// (0x0003d20e) wait_bar2_pane

0x5de2,	// (0x0003d226) popup_snote2_single_text_window_g1_ParamLimits

0x5de2,	// (0x0003d226) popup_snote2_single_text_window_g1

0x5e0a,	// (0x0003d24e) popup_snote2_single_text_window_t1_ParamLimits

0x5e0a,	// (0x0003d24e) popup_snote2_single_text_window_t1

0x5e56,	// (0x0003d29a) popup_snote2_single_text_window_t2_ParamLimits

0x5e56,	// (0x0003d29a) popup_snote2_single_text_window_t2

0x5ea2,	// (0x0003d2e6) popup_snote2_single_text_window_t3_ParamLimits

0x5ea2,	// (0x0003d2e6) popup_snote2_single_text_window_t3

0x5ee3,	// (0x0003d327) popup_snote2_single_text_window_t4_ParamLimits

0x5ee3,	// (0x0003d327) popup_snote2_single_text_window_t4

0x5f19,	// (0x0003d35d) popup_snote2_single_text_window_t5_ParamLimits

0x5f19,	// (0x0003d35d) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x000470cd) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x000470cd) popup_snote2_single_text_window_t

0xd9c5,	// (0x00044e09) popup_snote2_single_graphic_window_g1_ParamLimits

0xd9c5,	// (0x00044e09) popup_snote2_single_graphic_window_g1

0x5f6c,	// (0x0003d3b0) popup_snote2_single_graphic_window_g2_ParamLimits

0x5f6c,	// (0x0003d3b0) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x000470d8) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x000470d8) popup_snote2_single_graphic_window_g

0x5f94,	// (0x0003d3d8) popup_snote2_single_graphic_window_t1_ParamLimits

0x5f94,	// (0x0003d3d8) popup_snote2_single_graphic_window_t1

0x5fe0,	// (0x0003d424) popup_snote2_single_graphic_window_t2_ParamLimits

0x5fe0,	// (0x0003d424) popup_snote2_single_graphic_window_t2

0x5ea2,	// (0x0003d2e6) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ea2,	// (0x0003d2e6) popup_snote2_single_graphic_window_t3

0x5ee3,	// (0x0003d327) popup_snote2_single_graphic_window_t4_ParamLimits

0x5ee3,	// (0x0003d327) popup_snote2_single_graphic_window_t4

0x5f19,	// (0x0003d35d) popup_snote2_single_graphic_window_t5_ParamLimits

0x5f19,	// (0x0003d35d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x000470dd) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x000470dd) popup_snote2_single_graphic_window_t

0x49dd,	// (0x0003be21) clock_nsta_pane_cp2_t1

0x49dd,	// (0x0003be21) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00046ef8) clock_nsta_pane_cp2_t

0x97b2,	// (0x00040bf6) form_field_data_wide_pane_g1_ParamLimits

0xb7f3,	// (0x00042c37) form_field_data_wide_pane_g2_ParamLimits

0xb7f3,	// (0x00042c37) form_field_data_wide_pane_g2

0xb7ff,	// (0x00042c43) form_field_data_wide_pane_g3_ParamLimits

0xb7ff,	// (0x00042c43) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x00046ab0) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x00046ab0) form_field_data_wide_pane_g

0xcaf7,	// (0x00043f3b) grid_touch_3_pane_ParamLimits

0xcaf7,	// (0x00043f3b) grid_touch_3_pane

0xd9ed,	// (0x00044e31) cell_touch_3_pane_ParamLimits

0xd9ed,	// (0x00044e31) cell_touch_3_pane

0x4f39,	// (0x0003c37d) cell_touch_3_pane_g1

0x4f39,	// (0x0003c37d) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x00046f7d) cell_touch_3_pane_g

0xb613,	// (0x00042a57) cont_query_data_pane

0xb61b,	// (0x00042a5f) cont_query_data_pane_cp1

0x605a,	// (0x0003d49e) button_value_adjust_pane_cp7

0x6062,	// (0x0003d4a6) query_popup_pane_cp3

0xbc79,	// (0x000430bd) bg_popup_sub_pane_cp22_ParamLimits

0x9c12,	// (0x00041056) navi_navi_volume_pane_cp2

0x9c21,	// (0x00041065) popup_side_volume_key_window_g2

0x9c30,	// (0x00041074) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x00046b46) popup_side_volume_key_window_g

0x9c3f,	// (0x00041083) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x00046b4d) popup_side_volume_key_window_t

0x9d7a,	// (0x000411be) popup_side_volume_key_window_ParamLimits

0x94b8,	// (0x000408fc) list_double_graphic_pane_g4_ParamLimits

0x94b8,	// (0x000408fc) list_double_graphic_pane_g4

0xaa85,	// (0x00041ec9) list_single_2heading_msg_pane_ParamLimits

0xaa85,	// (0x00041ec9) list_single_2heading_msg_pane

0xabec,	// (0x00042030) list_single_2heading_msg_pane_g1_ParamLimits

0xabec,	// (0x00042030) list_single_2heading_msg_pane_g1

0xabf8,	// (0x0004203c) list_single_2heading_msg_pane_g2_ParamLimits

0xabf8,	// (0x0004203c) list_single_2heading_msg_pane_g2

0xac0b,	// (0x0004204f) list_single_2heading_msg_pane_g3_ParamLimits

0xac0b,	// (0x0004204f) list_single_2heading_msg_pane_g3

0xda40,	// (0x00044e84) list_single_2heading_msg_pane_g4_ParamLimits

0xda40,	// (0x00044e84) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x000470e8) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x000470e8) list_single_2heading_msg_pane_g

0xda58,	// (0x00044e9c) list_single_2heading_msg_pane_t1_ParamLimits

0xda58,	// (0x00044e9c) list_single_2heading_msg_pane_t1

0xac17,	// (0x0004205b) list_single_2heading_msg_pane_t2_ParamLimits

0xac17,	// (0x0004205b) list_single_2heading_msg_pane_t2

0xac82,	// (0x000420c6) list_single_2heading_msg_pane_t3_ParamLimits

0xac82,	// (0x000420c6) list_single_2heading_msg_pane_t3

0xda80,	// (0x00044ec4) list_single_2heading_msg_pane_t4_ParamLimits

0xda80,	// (0x00044ec4) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x000470f1) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x000470f1) list_single_2heading_msg_pane_t

0xb3e1,	// (0x00042825) title_pane_g4_ParamLimits

0xb3e1,	// (0x00042825) title_pane_g4

0xefee,	// (0x00046432) title_pane_stacon_g3_ParamLimits

0xefee,	// (0x00046432) title_pane_stacon_g3

0x5b73,	// (0x0003cfb7) list_single_2graphic_im_pane_g4_ParamLimits

0x5b73,	// (0x0003cfb7) list_single_2graphic_im_pane_g4

0xc63f,	// (0x00043a83) popup_side_volume_key_window_cp

0x423b,	// (0x0003b67f) main_idle_act2_pane_t1

0x0960,	// (0x00037da4) toolbar_button_pane_g10

0x93cb,	// (0x0004080f) popup_toolbar_window_cp1

0x49ce,	// (0x0003be12) clock_nsta_pane_cp_t1

0x49ce,	// (0x0003be12) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00046ef3) clock_nsta_pane_cp_t

0x9c12,	// (0x00041056) navi_navi_volume_pane_cp2_ParamLimits

0xf248,	// (0x0004668c) popup_side_volume_key_window_g1_ParamLimits

0x9c21,	// (0x00041065) popup_side_volume_key_window_g2_ParamLimits

0x9c30,	// (0x00041074) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x00046b46) popup_side_volume_key_window_g_ParamLimits

0x0f63,	// (0x000383a7) fep_hwr_aid_pane

0x100a,	// (0x0003844e) bg_fep_hwr_top_pane_g4_ParamLimits

0x4f95,	// (0x0003c3d9) fep_hwr_top_pane_g1_ParamLimits

0x4fa7,	// (0x0003c3eb) fep_hwr_top_pane_g2_ParamLimits

0x102a,	// (0x0003846e) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x00046f48) fep_hwr_top_pane_g_ParamLimits

0x103f,	// (0x00038483) fep_hwr_top_text_pane_ParamLimits

0x37f0,	// (0x0003ac34) aid_touch_tab_arrow_arrow_2

0x37f9,	// (0x0003ac3d) aid_touch_tab_arrow_left_2

0x0f77,	// (0x000383bb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0fae,	// (0x000383f2) fep_hwr_prediction_pane

0x5100,	// (0x0003c544) fep_vkb_prediction_pane

0xce6f,	// (0x000442b3) fep_vkb_side_pane_g3_ParamLimits

0xce6f,	// (0x000442b3) fep_vkb_side_pane_g3

0x11ba,	// (0x000385fe) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1226,	// (0x0003866a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1233,	// (0x00038677) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x00046ff7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1426,	// (0x0003886a) fep_hwr_prediction_pane_g1

0x1430,	// (0x00038874) fep_hwr_prediction_pane_g2

0x1438,	// (0x0003887c) fep_hwr_prediction_pane_g3

0x1440,	// (0x00038884) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x000470fa) fep_hwr_prediction_pane_g

0x6087,	// (0x0003d4cb) fep_vkb_prediction_pane_g1

0x6091,	// (0x0003d4d5) fep_vkb_prediction_pane_g2

0x6099,	// (0x0003d4dd) fep_vkb_prediction_pane_g3

0x60a1,	// (0x0003d4e5) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x00047103) fep_vkb_prediction_pane_g

0xa9d7,	// (0x00041e1b) slider_set_pane_g3

0xa9eb,	// (0x00041e2f) slider_set_pane_g4

0xaa03,	// (0x00041e47) slider_set_pane_g5

0xa9d7,	// (0x00041e1b) slider_set_pane_g6

0xaa19,	// (0x00041e5d) slider_set_pane_g7

0x3e7c,	// (0x0003b2c0) slider_form_pane_g3

0x3e85,	// (0x0003b2c9) slider_form_pane_g4

0x3e8d,	// (0x0003b2d1) slider_form_pane_g5

0x3e7c,	// (0x0003b2c0) slider_form_pane_g6

0xc8dd,	// (0x00043d21) slider_form_pane_g7

0x44e6,	// (0x0003b92a) slider_set_pane_vc_g3

0x44ef,	// (0x0003b933) slider_set_pane_vc_g4

0x44f8,	// (0x0003b93c) slider_set_pane_vc_g5

0x44e6,	// (0x0003b92a) slider_set_pane_vc_g6

0x4501,	// (0x0003b945) slider_set_pane_vc_g7

0x46b3,	// (0x0003baf7) slider_form_pane_vc_g1

0x46bc,	// (0x0003bb00) slider_form_pane_vc_g2

0x46c5,	// (0x0003bb09) slider_form_pane_vc_g3

0x46b3,	// (0x0003baf7) slider_form_pane_vc_g4

0x46ce,	// (0x0003bb12) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x00046ec5) slider_form_pane_vc_g

0xeeba,	// (0x000462fe) main_idle_act3_pane

0x60a9,	// (0x0003d4ed) ai3_links_pane

0xdaa5,	// (0x00044ee9) popup_ai3_data_window_ParamLimits

0xdaa5,	// (0x00044ee9) popup_ai3_data_window

0xb3c3,	// (0x00042807) grid_ai3_links_pane

0xdabd,	// (0x00044f01) cell_ai3_links_pane_ParamLimits

0xdabd,	// (0x00044f01) cell_ai3_links_pane

0x60e2,	// (0x0003d526) bg_popup_sub_pane_cp11

0x60ef,	// (0x0003d533) cell_ai3_links_pane_g1

0xb3c3,	// (0x00042807) bg_popup_sub_pane_cp12

0x6114,	// (0x0003d558) heading_ai3_data_pane

0x611c,	// (0x0003d560) list_ai3_gene_pane

0x6128,	// (0x0003d56c) popup_ai3_data_window_g1

0x6130,	// (0x0003d574) heading_ai3_data_pane_g1

0x6138,	// (0x0003d57c) heading_ai3_data_pane_t1

0xdad7,	// (0x00044f1b) list_double_ai3_gene_pane_ParamLimits

0xdad7,	// (0x00044f1b) list_double_ai3_gene_pane

0x6153,	// (0x0003d597) list_single_ai3_gene_pane_ParamLimits

0x6153,	// (0x0003d597) list_single_ai3_gene_pane

0x4efe,	// (0x0003c342) list_highlight_pane_cp7_ParamLimits

0x4efe,	// (0x0003c342) list_highlight_pane_cp7

0x6160,	// (0x0003d5a4) list_single_a13_gene_pane_t1_ParamLimits

0x6160,	// (0x0003d5a4) list_single_a13_gene_pane_t1

0x6177,	// (0x0003d5bb) list_single_ai3_gene_pane_g1

0x6180,	// (0x0003d5c4) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x0004710c) list_single_ai3_gene_pane_g

0x6188,	// (0x0003d5cc) list_double_ai3_gene_pane_g1_ParamLimits

0x6188,	// (0x0003d5cc) list_double_ai3_gene_pane_g1

0xdae4,	// (0x00044f28) list_double_ai3_gene_pane_t1_ParamLimits

0xdae4,	// (0x00044f28) list_double_ai3_gene_pane_t1

0x61b0,	// (0x0003d5f4) list_double_ai3_gene_pane_t2_ParamLimits

0x61b0,	// (0x0003d5f4) list_double_ai3_gene_pane_t2

0x61c5,	// (0x0003d609) list_double_ai3_gene_pane_t3_ParamLimits

0x61c5,	// (0x0003d609) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x00047111) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x00047111) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xda20,	// (0x00044e64) aid_size_min_col_2

0xda2a,	// (0x00044e6e) aid_size_min_msg_ParamLimits

0xda2a,	// (0x00044e6e) aid_size_min_msg

0xce83,	// (0x000442c7) fep_vkb_top_text_pane_g2_ParamLimits

0xce83,	// (0x000442c7) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x00046f78) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x00046f78) fep_vkb_top_text_pane_g

0xeeba,	// (0x000462fe) main_hc_apps_shell_pane

0x61e2,	// (0x0003d626) grid_hc_apps_pane_ParamLimits

0x61e2,	// (0x0003d626) grid_hc_apps_pane

0x61f1,	// (0x0003d635) list_hc_apps_pane

0x61f9,	// (0x0003d63d) scroll_pane_cp37_ParamLimits

0x61f9,	// (0x0003d63d) scroll_pane_cp37

0xdb00,	// (0x00044f44) cell_hc_apps_pane_ParamLimits

0xdb00,	// (0x00044f44) cell_hc_apps_pane

0xdbbe,	// (0x00045002) cell_hc_apps_pane_g1_ParamLimits

0xdbbe,	// (0x00045002) cell_hc_apps_pane_g1

0x62e4,	// (0x0003d728) cell_hc_apps_pane_g2_ParamLimits

0x62e4,	// (0x0003d728) cell_hc_apps_pane_g2

0x6300,	// (0x0003d744) cell_hc_apps_pane_g3_ParamLimits

0x6300,	// (0x0003d744) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x00047118) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x00047118) cell_hc_apps_pane_g

0xdbeb,	// (0x0004502f) cell_hc_apps_pane_t1_ParamLimits

0xdbeb,	// (0x0004502f) cell_hc_apps_pane_t1

0xb55d,	// (0x000429a1) grid_highlight_pane_cp10_ParamLimits

0xb55d,	// (0x000429a1) grid_highlight_pane_cp10

0xdc29,	// (0x0004506d) list_single_hc_apps_pane_ParamLimits

0xdc29,	// (0x0004506d) list_single_hc_apps_pane

0xdc59,	// (0x0004509d) list_single_hc_apps_pane_g1

0xacf0,	// (0x00042134) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x0004711f) list_single_hc_apps_pane_g

0xad09,	// (0x0004214d) list_single_hc_apps_pane_g2_copy1

0xad25,	// (0x00042169) list_single_hc_apps_pane_t1

0xb433,	// (0x00042877) bg_set_opt_pane_cp_ParamLimits

0x8ebb,	// (0x000402ff) setting_slider_pane_t1_ParamLimits

0x8ed4,	// (0x00040318) setting_slider_pane_t2_ParamLimits

0x8eee,	// (0x00040332) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000469a2) setting_slider_pane_t_ParamLimits

0x8f06,	// (0x0004034a) slider_set_pane_ParamLimits

0x0273,	// (0x000376b7) control_pane_g5_ParamLimits

0x0273,	// (0x000376b7) control_pane_g5

0xc75f,	// (0x00043ba3) slider_set_pane_g1_ParamLimits

0x0c87,	// (0x000380cb) slider_set_pane_g2_ParamLimits

0xa9d7,	// (0x00041e1b) slider_set_pane_g3_ParamLimits

0xa9eb,	// (0x00041e2f) slider_set_pane_g4_ParamLimits

0xaa03,	// (0x00041e47) slider_set_pane_g5_ParamLimits

0xa9d7,	// (0x00041e1b) slider_set_pane_g6_ParamLimits

0xaa19,	// (0x00041e5d) slider_set_pane_g7_ParamLimits

0xf949,	// (0x00046d8d) slider_set_pane_g_ParamLimits

0x00a3,	// (0x000374e7) navi_icon_text_pane_ParamLimits

0xbcff,	// (0x00043143) aid_fill_nsta_2_ParamLimits

0xbd36,	// (0x0004317a) aid_touch_tab_arrow_left_ParamLimits

0xbd4c,	// (0x00043190) aid_touch_tab_arrow_right_ParamLimits

0xbde7,	// (0x0004322b) clock_nsta_pane_ParamLimits

0x37d2,	// (0x0003ac16) navi_icon_pane_g1_ParamLimits

0x37de,	// (0x0003ac22) navi_text_pane_t1_ParamLimits

0x4ade,	// (0x0003bf22) navi_icon_text_pane_g1_ParamLimits

0x4aea,	// (0x0003bf2e) navi_icon_text_pane_t1_ParamLimits

0xdc59,	// (0x0004509d) list_single_hc_apps_pane_g1_ParamLimits

0xacf0,	// (0x00042134) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x0004711f) list_single_hc_apps_pane_g_ParamLimits

0xad09,	// (0x0004214d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xad25,	// (0x00042169) list_single_hc_apps_pane_t1_ParamLimits

0x8cec,	// (0x00040130) popup_toolbar2_fixed_window_ParamLimits

0x8cec,	// (0x00040130) popup_toolbar2_fixed_window

0xa7cd,	// (0x00041c11) popup_toolbar2_float_window

0xb3c3,	// (0x00042807) bg_popup_sub_pane_cp27

0x63de,	// (0x0003d822) grid_toolbar2_float_pane

0xb3c3,	// (0x00042807) bg_popup_sub_pane_cp26

0x63de,	// (0x0003d822) grid_toolbar2_fixed_pane

0xdc72,	// (0x000450b6) cell_toolbar2_fixed_pane_ParamLimits

0xdc72,	// (0x000450b6) cell_toolbar2_fixed_pane

0xdc8c,	// (0x000450d0) cell_toolbar2_fixed_pane_g1

0x0736,	// (0x00037b7a) toolbar2_fixed_button_pane

0x296c,	// (0x00039db0) toolbar2_fixed_button_pane_g1

0x297c,	// (0x00039dc0) toolbar2_fixed_button_pane_g2

0x2974,	// (0x00039db8) toolbar2_fixed_button_pane_g3

0x298c,	// (0x00039dd0) toolbar2_fixed_button_pane_g4

0x2984,	// (0x00039dc8) toolbar2_fixed_button_pane_g5

0x2994,	// (0x00039dd8) toolbar2_fixed_button_pane_g6

0x299c,	// (0x00039de0) toolbar2_fixed_button_pane_g7

0x29ac,	// (0x00039df0) toolbar2_fixed_button_pane_g8

0x29a4,	// (0x00039de8) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x00046c8f) toolbar2_fixed_button_pane_g

0x63ff,	// (0x0003d843) cell_toolbar2_float_pane_ParamLimits

0x63ff,	// (0x0003d843) cell_toolbar2_float_pane

0x6410,	// (0x0003d854) cell_toolbar2_float_pane_g1

0x0736,	// (0x00037b7a) toolbar2_fixed_button_pane_cp

0xcd6b,	// (0x000441af) fep_vkb_accented_list_pane_ParamLimits

0xcd6b,	// (0x000441af) fep_vkb_accented_list_pane

0x119a,	// (0x000385de) bg_popup_fep_shadow_pane_g9

0x2114,	// (0x00039558) bg_popup_fep_shadow_pane_cp3

0xb8eb,	// (0x00042d2f) list_accented_list_pane

0x6419,	// (0x0003d85d) list_single_accented_list_pane_ParamLimits

0x6419,	// (0x0003d85d) list_single_accented_list_pane

0x2114,	// (0x00039558) list_highlight_pane_cp10

0x642a,	// (0x0003d86e) list_single_accented_list_pane_t1

0xa6f7,	// (0x00041b3b) popup_slider_window_ParamLimits

0xa6f7,	// (0x00041b3b) popup_slider_window

0x606a,	// (0x0003d4ae) aid_indentation_list_msg

0xdd81,	// (0x000451c5) bg_popup_window_pane_cp19

0x654a,	// (0x0003d98e) popup_slider_window_g1

0x6566,	// (0x0003d9aa) popup_slider_window_g2

0x6582,	// (0x0003d9c6) popup_slider_window_g3

0x0005,

0xfce0,	// (0x00047124) popup_slider_window_g

0x65de,	// (0x0003da22) popup_slider_window_t1

0x6652,	// (0x0003da96) small_volume_slider_vertical_pane

0x4f39,	// (0x0003c37d) small_volume_slider_vertical_pane_g1

0x4f39,	// (0x0003c37d) small_volume_slider_vertical_pane_g2

0x666e,	// (0x0003dab2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x00047136) small_volume_slider_vertical_pane_g

0x8c3a,	// (0x0004007e) area_side_right_pane_ParamLimits

0x8c3a,	// (0x0004007e) area_side_right_pane

0xad53,	// (0x00042197) aid_size_side_button_ParamLimits

0xad53,	// (0x00042197) aid_size_side_button

0xad6c,	// (0x000421b0) grid_sctrl_middle_pane_ParamLimits

0xad6c,	// (0x000421b0) grid_sctrl_middle_pane

0x14de,	// (0x00038922) sctrl_sk_bottom_pane

0x14ef,	// (0x00038933) sctrl_sk_top_pane

0x1501,	// (0x00038945) aid_touch_sctrl_top

0x150e,	// (0x00038952) bg_sctrl_sk_pane_ParamLimits

0x150e,	// (0x00038952) bg_sctrl_sk_pane

0x151c,	// (0x00038960) sctrl_sk_top_pane_g1

0x1529,	// (0x0003896d) sctrl_sk_top_pane_t1

0x1501,	// (0x00038945) aid_touch_sctrl_bottom

0x150e,	// (0x00038952) bg_sctrl_sk_pane_cp_ParamLimits

0x150e,	// (0x00038952) bg_sctrl_sk_pane_cp

0x1544,	// (0x00038988) sctrl_sk_bottom_pane_g1

0x1529,	// (0x0003896d) sctrl_sk_bottom_pane_t1

0xad86,	// (0x000421ca) cell_sctrl_middle_pane_ParamLimits

0xad86,	// (0x000421ca) cell_sctrl_middle_pane

0xad97,	// (0x000421db) aid_touch_sctrl_middle_ParamLimits

0xad97,	// (0x000421db) aid_touch_sctrl_middle

0xada4,	// (0x000421e8) bg_sctrl_middle_pane_ParamLimits

0xada4,	// (0x000421e8) bg_sctrl_middle_pane

0x1bb1,	// (0x00038ff5) cell_sctrl_middle_pane_g1_ParamLimits

0x1bb1,	// (0x00038ff5) cell_sctrl_middle_pane_g1

0xadb2,	// (0x000421f6) cell_sctrl_middle_pane_g2_ParamLimits

0xadb2,	// (0x000421f6) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x00047142) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x00047142) cell_sctrl_middle_pane_g

0x296c,	// (0x00039db0) bg_sctrl_middle_pane_g1

0x2974,	// (0x00039db8) bg_sctrl_middle_pane_g2

0x297c,	// (0x00039dc0) bg_sctrl_middle_pane_g3

0x2984,	// (0x00039dc8) bg_sctrl_middle_pane_g4

0x298c,	// (0x00039dd0) bg_sctrl_middle_pane_g5

0x2994,	// (0x00039dd8) bg_sctrl_middle_pane_g6

0x299c,	// (0x00039de0) bg_sctrl_middle_pane_g7

0x29a4,	// (0x00039de8) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x00047147) bg_sctrl_middle_pane_g

0x29ac,	// (0x00039df0) bg_sctrl_middle_pane_g8_copy1

0x296c,	// (0x00039db0) bg_sctrl_sk_pane_g1

0x297c,	// (0x00039dc0) bg_sctrl_sk_pane_g2

0x2974,	// (0x00039db8) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x00046c8f) bg_sctrl_sk_pane_g

0xb727,	// (0x00042b6b) aid_size_touch_scroll_bar

0x298c,	// (0x00039dd0) bg_sctrl_sk_pane_g4

0x2984,	// (0x00039dc8) bg_sctrl_sk_pane_g5

0x2994,	// (0x00039dd8) bg_sctrl_sk_pane_g6

0x299c,	// (0x00039de0) bg_sctrl_sk_pane_g7

0x29ac,	// (0x00039df0) bg_sctrl_sk_pane_g8

0x29a4,	// (0x00039de8) bg_sctrl_sk_pane_g9

0x041d,	// (0x00037861) popup_fep_china_hwr2_fs_candidate_window

0xa197,	// (0x000415db) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa197,	// (0x000415db) popup_fep_china_hwr2_fs_control_window

0x11ba,	// (0x000385fe) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x0004713d) sctrl_sk_top_pane_g

0xde39,	// (0x0004527d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xde39,	// (0x0004527d) aid_fep_china_hwr2_fs_cell

0xde4d,	// (0x00045291) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xde4d,	// (0x00045291) bg_popup_fep_shadow_pane_cp4

0xde64,	// (0x000452a8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xde64,	// (0x000452a8) bg_popup_fep_shadow_pane_cp5

0xde76,	// (0x000452ba) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xde76,	// (0x000452ba) popup_fep_china_hwr2_fs_control_bar_grid

0xde8a,	// (0x000452ce) popup_fep_china_hwr2_fs_control_funtion_grid

0x66ca,	// (0x0003db0e) aid_fep_china_hwr2_fs_candi_cell

0xb3c3,	// (0x00042807) bg_popup_fep_shadow_pane_cp6

0x66d4,	// (0x0003db18) popup_fep_china_hwr2_fs_candidate_grid

0xde92,	// (0x000452d6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xde92,	// (0x000452d6) cell_fep_china_hwr2_fs_funtion_grid

0x4f39,	// (0x0003c37d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x66f6,	// (0x0003db3a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x66f6,	// (0x0003db3a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6704,	// (0x0003db48) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6704,	// (0x0003db48) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x00047158) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x00047158) cell_fep_china_hwr2_fs_funtion_grid_g

0xdeaa,	// (0x000452ee) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdeaa,	// (0x000452ee) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdebf,	// (0x00045303) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdebf,	// (0x00045303) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x0004715d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x0004715d) cell_fep_china_hwr2_fs_funtion_grid_t

0x674b,	// (0x0003db8f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6753,	// (0x0003db97) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x675b,	// (0x0003db9f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x00047162) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6763,	// (0x0003dba7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6763,	// (0x0003dba7) cell_fep_china_hwr2_fs_candidate_grid

0x677c,	// (0x0003dbc0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6784,	// (0x0003dbc8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4f39,	// (0x0003c37d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4f39,	// (0x0003c37d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x00046f7d) cell_fep_china_hwr2_fs_candidate_grid_g

0x678c,	// (0x0003dbd0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2565,	// (0x000399a9) clock_nsta_pane_cp_24_ParamLimits

0x2565,	// (0x000399a9) clock_nsta_pane_cp_24

0x25e3,	// (0x00039a27) indicator_nsta_pane_cp_24_ParamLimits

0x25e3,	// (0x00039a27) indicator_nsta_pane_cp_24

0x364e,	// (0x0003aa92) heading_pane_g1

0x0001,

0xf8b0,	// (0x00046cf4) heading_pane_g

0x4084,	// (0x0003b4c8) grid_sct_catagory_button_pane

0x40b4,	// (0x0003b4f8) scroll_pane_cp5_ParamLimits

0x4b2c,	// (0x0003bf70) button_value_adjust_pane_cp5_ParamLimits

0x4b2c,	// (0x0003bf70) button_value_adjust_pane_cp5

0x4c0b,	// (0x0003c04f) form2_midp_time_pane_ParamLimits

0x679a,	// (0x0003dbde) cell_sct_catagory_button_pane_ParamLimits

0x679a,	// (0x0003dbde) cell_sct_catagory_button_pane

0x4efe,	// (0x0003c342) bg_button_pane_cp01_ParamLimits

0x4efe,	// (0x0003c342) bg_button_pane_cp01

0x4f39,	// (0x0003c37d) cell_sct_catagory_button_pane_g1

0xa770,	// (0x00041bb4) popup_tb_extension_window

0xdedb,	// (0x0004531f) aid_size_cell_ext_ParamLimits

0xdedb,	// (0x0004531f) aid_size_cell_ext

0xb6d9,	// (0x00042b1d) bg_tb_trans_pane_cp1_ParamLimits

0xb6d9,	// (0x00042b1d) bg_tb_trans_pane_cp1

0xdf01,	// (0x00045345) grid_tb_ext_pane_ParamLimits

0xdf01,	// (0x00045345) grid_tb_ext_pane

0xdf40,	// (0x00045384) cell_tb_ext_pane_ParamLimits

0xdf40,	// (0x00045384) cell_tb_ext_pane

0xdf68,	// (0x000453ac) cell_tb_ext_pane_g1_ParamLimits

0xdf68,	// (0x000453ac) cell_tb_ext_pane_g1

0x6830,	// (0x0003dc74) cell_tb_ext_pane_t1

0xb55d,	// (0x000429a1) list_highlight_pane_cp11_ParamLimits

0xb55d,	// (0x000429a1) list_highlight_pane_cp11

0x8d01,	// (0x00040145) popup_uni_indicator_window_ParamLimits

0x8d01,	// (0x00040145) popup_uni_indicator_window

0xb7e5,	// (0x00042c29) bg_popup_sub_pane_cp14

0xdf85,	// (0x000453c9) list_uniindi_pane

0xdf91,	// (0x000453d5) uniindi_top_pane

0xb55d,	// (0x000429a1) bg_uniindi_top_pane

0xdfb0,	// (0x000453f4) uniindi_top_pane_g1

0xdfc6,	// (0x0004540a) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x00047169) uniindi_top_pane_g

0xdfe3,	// (0x00045427) uniindi_top_pane_t1

0x68e1,	// (0x0003dd25) list_single_uniindi_pane_ParamLimits

0x68e1,	// (0x0003dd25) list_single_uniindi_pane

0x4f39,	// (0x0003c37d) bg_uniindi_top_pane_g1

0x68f3,	// (0x0003dd37) list_single_uniindi_pane_g1

0x6906,	// (0x0003dd4a) list_single_uniindi_pane_t1

0xeeba,	// (0x000462fe) control_bg_pane

0x692b,	// (0x0003dd6f) bg_sctrl_sk_pane_cp1

0x6934,	// (0x0003dd78) bg_sctrl_sk_pane_cp2

0x693d,	// (0x0003dd81) control_bg_pane_g1

0x6946,	// (0x0003dd8a) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x00047172) control_bg_pane_g

0x4983,	// (0x0003bdc7) cell_indicator_nsta_pane_g1_ParamLimits

0xcb32,	// (0x00043f76) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00046ee1) cell_indicator_nsta_pane_g_ParamLimits

0xd796,	// (0x00044bda) form2_midp_time_pane_t1_ParamLimits

0x0f55,	// (0x00038399) main_idle_act4_pane_ParamLimits

0x0f55,	// (0x00038399) main_idle_act4_pane

0xa770,	// (0x00041bb4) popup_tb_extension_window_ParamLimits

0xdf26,	// (0x0004536a) tb_ext_find_pane_ParamLimits

0xdf26,	// (0x0004536a) tb_ext_find_pane

0x694f,	// (0x0003dd93) ai_gene_pane_1_cp1

0x225f,	// (0x000396a3) ai_gene_pane_2_cp1

0xe00d,	// (0x00045451) list_single_idle_plugin_calendar_pane

0x6960,	// (0x0003dda4) list_single_idle_plugin_notification_pane

0x6969,	// (0x0003ddad) list_single_idle_plugin_player_pane

0xe016,	// (0x0004545a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe016,	// (0x0004545a) list_single_idle_plugin_shortcut_pane

0xe03e,	// (0x00045482) main_idle_act4_pane_t1

0xe055,	// (0x00045499) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x00047177) main_idle_act4_pane_t

0xe06c,	// (0x000454b0) middle_sk_idle_act4_pane_ParamLimits

0xe06c,	// (0x000454b0) middle_sk_idle_act4_pane

0xe088,	// (0x000454cc) popup_clock_digital_analogue_window_cp2

0xe0b4,	// (0x000454f8) shortcut_wheel_idle_act4_pane_ParamLimits

0xe0b4,	// (0x000454f8) shortcut_wheel_idle_act4_pane

0x4f39,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g1

0x4f39,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g2

0x4f39,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g3

0x4f39,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g4

0x4f39,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g5

0x69fc,	// (0x0003de40) shortcut_wheel_idle_act4_pane_g6

0x6a04,	// (0x0003de48) shortcut_wheel_idle_act4_pane_g7

0x6a0c,	// (0x0003de50) shortcut_wheel_idle_act4_pane_g8

0x6a14,	// (0x0003de58) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x0004717c) shortcut_wheel_idle_act4_pane_g

0xd1fd,	// (0x00044641) middle_sk_idle_act4_pane_g1_ParamLimits

0xd1fd,	// (0x00044641) middle_sk_idle_act4_pane_g1

0xe131,	// (0x00045575) middle_sk_idle_act4_pane_g2_ParamLimits

0xe131,	// (0x00045575) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x0004719f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x0004719f) middle_sk_idle_act4_pane_g

0xe149,	// (0x0004558d) middle_sk_idle_act4_pane_t1_ParamLimits

0xe149,	// (0x0004558d) middle_sk_idle_act4_pane_t1

0xe178,	// (0x000455bc) grid_ai_shortcut_pane_ParamLimits

0xe178,	// (0x000455bc) grid_ai_shortcut_pane

0xe195,	// (0x000455d9) list_highlight_pane_cp16_ParamLimits

0xe195,	// (0x000455d9) list_highlight_pane_cp16

0xe1a2,	// (0x000455e6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe1a2,	// (0x000455e6) list_single_idle_plugin_shortcut_pane_g1

0xe1ae,	// (0x000455f2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe1ae,	// (0x000455f2) list_single_idle_plugin_shortcut_pane_g2

0xe1ca,	// (0x0004560e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe1ca,	// (0x0004560e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x000471a4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x000471a4) list_single_idle_plugin_shortcut_pane_g

0xe1df,	// (0x00045623) cell_ai_shortcut_pane_ParamLimits

0xe1df,	// (0x00045623) cell_ai_shortcut_pane

0xe1f5,	// (0x00045639) cell_ai_shortcut_pane_g1_ParamLimits

0xe1f5,	// (0x00045639) cell_ai_shortcut_pane_g1

0x694f,	// (0x0003dd93) ai_gene_pane_1_cp2

0x6b44,	// (0x0003df88) ai_gene_pane_2_cp2

0x6b4c,	// (0x0003df90) list_highlight_pane_cp15

0xe217,	// (0x0004565b) list_single_idle_plugin_calendar_pane_g1

0x6b4c,	// (0x0003df90) list_highlight_pane_cp17

0x6b5d,	// (0x0003dfa1) list_single_idle_plugin_calendar_pane_g1_copy1

0x6b65,	// (0x0003dfa9) list_single_idle_plugin_player_pane_g1

0x42dd,	// (0x0003b721) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x000471ab) list_single_idle_plugin_player_pane_g

0x6b6d,	// (0x0003dfb1) list_single_idle_plugin_player_pane_t1

0x6b7b,	// (0x0003dfbf) list_single_idle_plugin_player_pane_t2

0x6b89,	// (0x0003dfcd) list_single_idle_plugin_player_pane_t3

0x6b97,	// (0x0003dfdb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x000471b0) list_single_idle_plugin_player_pane_t

0x6ba5,	// (0x0003dfe9) wait_bar_pane_cp15

0x6bad,	// (0x0003dff1) grid_ai_notification_pane

0x42dd,	// (0x0003b721) list_single_idle_plugin_notification_pane_g1

0xe21f,	// (0x00045663) cell_ai_notification_pane_ParamLimits

0xe21f,	// (0x00045663) cell_ai_notification_pane

0x6bc3,	// (0x0003e007) cell_ai_notification_pane_g1

0x6bcb,	// (0x0003e00f) cell_ai_notification_pane_t1

0xe22c,	// (0x00045670) tb_ext_find_button_pane

0xe234,	// (0x00045678) tb_ext_find_pane_g1

0xe23c,	// (0x00045680) tb_ext_find_pane_t1

0xbc18,	// (0x0004305c) tb_ext_find_button_pane_g1

0xe24a,	// (0x0004568e) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x000471b9) tb_ext_find_button_pane_g

0xe03e,	// (0x00045482) main_idle_act4_pane_t1_ParamLimits

0xe055,	// (0x00045499) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x00047177) main_idle_act4_pane_t_ParamLimits

0xe088,	// (0x000454cc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe0a0,	// (0x000454e4) sat_plugin_idle_act4_pane_ParamLimits

0xe0a0,	// (0x000454e4) sat_plugin_idle_act4_pane

0xe253,	// (0x00045697) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe253,	// (0x00045697) sat_plugin_idle_act4_pane_t1

0xe26b,	// (0x000456af) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe26b,	// (0x000456af) sat_plugin_idle_act4_pane_t2

0xe283,	// (0x000456c7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe283,	// (0x000456c7) sat_plugin_idle_act4_pane_t3

0xe29b,	// (0x000456df) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe29b,	// (0x000456df) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x000471be) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x000471be) sat_plugin_idle_act4_pane_t

0x8c7c,	// (0x000400c0) popup_battery_window_ParamLimits

0x8c7c,	// (0x000400c0) popup_battery_window

0xb55d,	// (0x000429a1) bg_popup_sub_pane_cp25_ParamLimits

0xb55d,	// (0x000429a1) bg_popup_sub_pane_cp25

0x6c4c,	// (0x0003e090) popup_battery_window_g1_ParamLimits

0x6c4c,	// (0x0003e090) popup_battery_window_g1

0x6c58,	// (0x0003e09c) popup_battery_window_t1_ParamLimits

0x6c58,	// (0x0003e09c) popup_battery_window_t1

0x6c6a,	// (0x0003e0ae) popup_battery_window_t2_ParamLimits

0x6c6a,	// (0x0003e0ae) popup_battery_window_t2

0x0001,

0xfd83,	// (0x000471c7) popup_battery_window_t_ParamLimits

0xfd83,	// (0x000471c7) popup_battery_window_t

0x9dd9,	// (0x0004121d) midp_canvas_pane_ParamLimits

0x9e4b,	// (0x0004128f) midp_keypad_pane_ParamLimits

0x9e4b,	// (0x0004128f) midp_keypad_pane

0x245f,	// (0x000398a3) main_midp_pane_ParamLimits

0xcb3f,	// (0x00043f83) signal_pane_g2_cp_ParamLimits

0xe2b3,	// (0x000456f7) aid_size_cell_midp_keypad_ParamLimits

0xe2b3,	// (0x000456f7) aid_size_cell_midp_keypad

0xe2d1,	// (0x00045715) midp_keyp_game_grid_pane_ParamLimits

0xe2d1,	// (0x00045715) midp_keyp_game_grid_pane

0xe2f8,	// (0x0004573c) midp_keyp_rocker_pane_ParamLimits

0xe2f8,	// (0x0004573c) midp_keyp_rocker_pane

0xe349,	// (0x0004578d) midp_keyp_sk_left_pane_ParamLimits

0xe349,	// (0x0004578d) midp_keyp_sk_left_pane

0xe39d,	// (0x000457e1) midp_keyp_sk_right_pane_ParamLimits

0xe39d,	// (0x000457e1) midp_keyp_sk_right_pane

0xb3c3,	// (0x00042807) bg_button_pane_cp03

0xe3f1,	// (0x00045835) midp_keyp_sk_left_pane_g1

0xb3c3,	// (0x00042807) bg_button_pane_cp04

0xe3f1,	// (0x00045835) midp_keyp_sk_right_pane_g1

0x4f39,	// (0x0003c37d) midp_keyp_rocker_pane_g1

0xe3fa,	// (0x0004583e) keyp_game_cell_pane_ParamLimits

0xe3fa,	// (0x0004583e) keyp_game_cell_pane

0xb3c3,	// (0x00042807) bg_button_pane_cp02

0xe41e,	// (0x00045862) keyp_game_cell_pane_g1

0x8c9c,	// (0x000400e0) popup_fep_vkb2_window_ParamLimits

0x8c9c,	// (0x000400e0) popup_fep_vkb2_window

0xadbe,	// (0x00042202) aid_size_cell_vkb2_ParamLimits

0xadbe,	// (0x00042202) aid_size_cell_vkb2

0xadfc,	// (0x00042240) popup_fep_vkb2_window_g1_ParamLimits

0xadfc,	// (0x00042240) popup_fep_vkb2_window_g1

0xae4c,	// (0x00042290) vkb2_area_bottom_pane_ParamLimits

0xae4c,	// (0x00042290) vkb2_area_bottom_pane

0xaea0,	// (0x000422e4) vkb2_area_keypad_pane_ParamLimits

0xaea0,	// (0x000422e4) vkb2_area_keypad_pane

0xaee8,	// (0x0004232c) vkb2_area_top_pane_ParamLimits

0xaee8,	// (0x0004232c) vkb2_area_top_pane

0xaf6e,	// (0x000423b2) vkb2_top_entry_pane_ParamLimits

0xaf6e,	// (0x000423b2) vkb2_top_entry_pane

0xaf9b,	// (0x000423df) vkb2_top_grid_left_pane_ParamLimits

0xaf9b,	// (0x000423df) vkb2_top_grid_left_pane

0xafbb,	// (0x000423ff) vkb2_top_grid_right_pane_ParamLimits

0xafbb,	// (0x000423ff) vkb2_top_grid_right_pane

0x17b0,	// (0x00038bf4) vkb2_cell_keypad_pane_ParamLimits

0x17b0,	// (0x00038bf4) vkb2_cell_keypad_pane

0xb001,	// (0x00042445) vkb2_area_bottom_grid_pane_ParamLimits

0xb001,	// (0x00042445) vkb2_area_bottom_grid_pane

0xb02b,	// (0x0004246f) vkb2_area_bottom_pane_g1_ParamLimits

0xb02b,	// (0x0004246f) vkb2_area_bottom_pane_g1

0xb051,	// (0x00042495) vkb2_area_bottom_pane_g2_ParamLimits

0xb051,	// (0x00042495) vkb2_area_bottom_pane_g2

0xb082,	// (0x000424c6) vkb2_area_bottom_pane_g3_ParamLimits

0xb082,	// (0x000424c6) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x000471cc) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x000471cc) vkb2_area_bottom_pane_g

0x195a,	// (0x00038d9e) vkb2_top_cell_left_pane_ParamLimits

0x195a,	// (0x00038d9e) vkb2_top_cell_left_pane

0xe427,	// (0x0004586b) vkb2_top_entry_pane_g1_ParamLimits

0xe427,	// (0x0004586b) vkb2_top_entry_pane_g1

0xe435,	// (0x00045879) vkb2_top_entry_pane_t1_ParamLimits

0xe435,	// (0x00045879) vkb2_top_entry_pane_t1

0x6e1b,	// (0x0003e25f) vkb2_top_entry_pane_t2_ParamLimits

0x6e1b,	// (0x0003e25f) vkb2_top_entry_pane_t2

0x6e4d,	// (0x0003e291) vkb2_top_entry_pane_t3_ParamLimits

0x6e4d,	// (0x0003e291) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x000471d3) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x000471d3) vkb2_top_entry_pane_t

0xb0ec,	// (0x00042530) vkb2_top_grid_right_pane_g1_ParamLimits

0xb0ec,	// (0x00042530) vkb2_top_grid_right_pane_g1

0x19bd,	// (0x00038e01) vkb2_top_grid_right_pane_g2_ParamLimits

0x19bd,	// (0x00038e01) vkb2_top_grid_right_pane_g2

0x19d5,	// (0x00038e19) vkb2_top_grid_right_pane_g3_ParamLimits

0x19d5,	// (0x00038e19) vkb2_top_grid_right_pane_g3

0xb102,	// (0x00042546) vkb2_top_grid_right_pane_g4_ParamLimits

0xb102,	// (0x00042546) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x000471da) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x000471da) vkb2_top_grid_right_pane_g

0x1a03,	// (0x00038e47) vkb2_top_cell_left_pane_g1

0x1a1a,	// (0x00038e5e) vkb2_cell_keypad_pane_g1_ParamLimits

0x1a1a,	// (0x00038e5e) vkb2_cell_keypad_pane_g1

0x6e71,	// (0x0003e2b5) vkb2_cell_keypad_pane_t1_ParamLimits

0x6e71,	// (0x0003e2b5) vkb2_cell_keypad_pane_t1

0x1a28,	// (0x00038e6c) vkb2_cell_bottom_grid_pane_ParamLimits

0x1a28,	// (0x00038e6c) vkb2_cell_bottom_grid_pane

0x1a61,	// (0x00038ea5) vkb2_cell_bottom_grid_pane_g1

0xe0d5,	// (0x00045519) aid_call2_pane_cp02

0xe0dd,	// (0x00045521) aid_call_pane_cp02

0xe0e5,	// (0x00045529) clock_digital_number_pane_cp10

0xe0ed,	// (0x00045531) clock_digital_number_pane_cp11

0xe0f5,	// (0x00045539) clock_digital_number_pane_cp12

0xe0fd,	// (0x00045541) clock_digital_number_pane_cp13

0xe105,	// (0x00045549) clock_digital_separator_pane_cp10

0xbc18,	// (0x0004305c) popup_clock_digital_analogue_window_cp2_g1

0xbc18,	// (0x0004305c) popup_clock_digital_analogue_window_cp2_g2

0xe10d,	// (0x00045551) popup_clock_digital_analogue_window_cp2_g3

0xbc18,	// (0x0004305c) popup_clock_digital_analogue_window_cp2_g4

0xe10d,	// (0x00045551) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x0004718f) popup_clock_digital_analogue_window_cp2_g

0xe115,	// (0x00045559) popup_clock_digital_analogue_window_cp2_t1

0xe123,	// (0x00045567) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x0004719a) popup_clock_digital_analogue_window_cp2_t

0x4f39,	// (0x0003c37d) clock_digital_number_pane_cp10_g1

0x4f39,	// (0x0003c37d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x00046f7d) clock_digital_number_pane_cp10_g

0x4f39,	// (0x0003c37d) clock_digital_separator_pane_cp10_g1

0x4f39,	// (0x0003c37d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x00046f7d) clock_digital_separator_pane_cp10_g

0xdfd2,	// (0x00045416) uniindi_top_pane_g3

0x68aa,	// (0x0003dcee) uniindi_top_pane_g4

0x183b,	// (0x00038c7f) vkb2_row_keypad_pane_ParamLimits

0x183b,	// (0x00038c7f) vkb2_row_keypad_pane

0x1a7d,	// (0x00038ec1) vkb2_cell_t_keypad_pane_ParamLimits

0x1a7d,	// (0x00038ec1) vkb2_cell_t_keypad_pane

0x1a8d,	// (0x00038ed1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1a8d,	// (0x00038ed1) vkb2_cell_t_keypad_pane_cp08

0x1aa0,	// (0x00038ee4) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1aa0,	// (0x00038ee4) vkb2_cell_t_keypad_pane_cp09

0x1ab4,	// (0x00038ef8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1ab4,	// (0x00038ef8) vkb2_cell_t_keypad_pane_cp01

0x1ac5,	// (0x00038f09) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1ac5,	// (0x00038f09) vkb2_cell_t_keypad_pane_cp02

0x1ad6,	// (0x00038f1a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1ad6,	// (0x00038f1a) vkb2_cell_t_keypad_pane_cp03

0x1ae7,	// (0x00038f2b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1ae7,	// (0x00038f2b) vkb2_cell_t_keypad_pane_cp04

0x1af8,	// (0x00038f3c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1af8,	// (0x00038f3c) vkb2_cell_t_keypad_pane_cp05

0x1b09,	// (0x00038f4d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1b09,	// (0x00038f4d) vkb2_cell_t_keypad_pane_cp06

0x1b1a,	// (0x00038f5e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1b1a,	// (0x00038f5e) vkb2_cell_t_keypad_pane_cp07

0x1b2b,	// (0x00038f6f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1b2b,	// (0x00038f6f) vkb2_cell_t_keypad_pane_cp10

0x11ba,	// (0x000385fe) vkb2_cell_t_keypad_pane_g1

0x6e88,	// (0x0003e2cc) vkb2_cell_t_keypad_pane_t1

0xeeba,	// (0x000462fe) popup_grid_graphic2_window

0xe46e,	// (0x000458b2) aid_size_cell_graphic2_ParamLimits

0xe46e,	// (0x000458b2) aid_size_cell_graphic2

0xe4ac,	// (0x000458f0) bg_popup_window_pane_cp21_ParamLimits

0xe4ac,	// (0x000458f0) bg_popup_window_pane_cp21

0xe4ba,	// (0x000458fe) graphic2_pages_pane_ParamLimits

0xe4ba,	// (0x000458fe) graphic2_pages_pane

0xe510,	// (0x00045954) grid_graphic2_control_pane_ParamLimits

0xe510,	// (0x00045954) grid_graphic2_control_pane

0xe558,	// (0x0004599c) grid_graphic2_pane_ParamLimits

0xe558,	// (0x0004599c) grid_graphic2_pane

0xe5df,	// (0x00045a23) cell_graphic2_pane

0xeeba,	// (0x000462fe) main_comp_mode_pane

0x611c,	// (0x0003d560) list_ai3_gene_pane_ParamLimits

0xdd81,	// (0x000451c5) bg_popup_window_pane_cp19_ParamLimits

0x64ec,	// (0x0003d930) bg_touch_area_indi_pane_ParamLimits

0x64ec,	// (0x0003d930) bg_touch_area_indi_pane

0x6502,	// (0x0003d946) bg_touch_area_indi_pane_cp01_ParamLimits

0x6502,	// (0x0003d946) bg_touch_area_indi_pane_cp01

0x6518,	// (0x0003d95c) bg_touch_area_indi_pane_cp02_ParamLimits

0x6518,	// (0x0003d95c) bg_touch_area_indi_pane_cp02

0x6530,	// (0x0003d974) bg_touch_area_indi_pane_cp03_ParamLimits

0x6530,	// (0x0003d974) bg_touch_area_indi_pane_cp03

0x654a,	// (0x0003d98e) popup_slider_window_g1_ParamLimits

0x6566,	// (0x0003d9aa) popup_slider_window_g2_ParamLimits

0x6582,	// (0x0003d9c6) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x00047124) popup_slider_window_g_ParamLimits

0x65de,	// (0x0003da22) popup_slider_window_t1_ParamLimits

0x6652,	// (0x0003da96) small_volume_slider_vertical_pane_ParamLimits

0xe5df,	// (0x00045a23) cell_graphic2_pane_ParamLimits

0xe63a,	// (0x00045a7e) bg_button_pane_cp10_ParamLimits

0xe63a,	// (0x00045a7e) bg_button_pane_cp10

0xe64d,	// (0x00045a91) bg_button_pane_cp11_ParamLimits

0xe64d,	// (0x00045a91) bg_button_pane_cp11

0xe660,	// (0x00045aa4) graphic2_pages_pane_g1_ParamLimits

0xe660,	// (0x00045aa4) graphic2_pages_pane_g1

0xe67b,	// (0x00045abf) graphic2_pages_pane_g2_ParamLimits

0xe67b,	// (0x00045abf) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x000471e8) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x000471e8) graphic2_pages_pane_g

0xe693,	// (0x00045ad7) graphic2_pages_pane_t1_ParamLimits

0xe693,	// (0x00045ad7) graphic2_pages_pane_t1

0xe6ab,	// (0x00045aef) cell_graphic2_control_pane_ParamLimits

0xe6ab,	// (0x00045aef) cell_graphic2_control_pane

0xe6dd,	// (0x00045b21) cell_graphic2_pane_g1_ParamLimits

0xe6dd,	// (0x00045b21) cell_graphic2_pane_g1

0xd20b,	// (0x0004464f) cell_graphic2_pane_g2_ParamLimits

0xd20b,	// (0x0004464f) cell_graphic2_pane_g2

0xd7a9,	// (0x00044bed) cell_graphic2_pane_g3_ParamLimits

0xd7a9,	// (0x00044bed) cell_graphic2_pane_g3

0xd218,	// (0x0004465c) cell_graphic2_pane_g4_ParamLimits

0xd218,	// (0x0004465c) cell_graphic2_pane_g4

0xe6ea,	// (0x00045b2e) cell_graphic2_pane_g5_ParamLimits

0xe6ea,	// (0x00045b2e) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x000471ed) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x000471ed) cell_graphic2_pane_g

0xe70a,	// (0x00045b4e) cell_graphic2_pane_t1_ParamLimits

0xe70a,	// (0x00045b4e) cell_graphic2_pane_t1

0x3642,	// (0x0003aa86) grid_highlight_pane_cp11_ParamLimits

0x3642,	// (0x0003aa86) grid_highlight_pane_cp11

0xb55d,	// (0x000429a1) bg_button_pane_cp05

0xe756,	// (0x00045b9a) cell_graphic2_control_pane_g1

0x4f39,	// (0x0003c37d) bg_touch_area_indi_pane_g1

0x7164,	// (0x0003e5a8) aid_cmod_rocker_key_size

0x716e,	// (0x0003e5b2) aid_cmode_itu_key_size

0x7178,	// (0x0003e5bc) main_cmode_video_pane

0x7182,	// (0x0003e5c6) main_comp_mode_itu_pane

0x718e,	// (0x0003e5d2) main_comp_mode_rocker_pane

0x719a,	// (0x0003e5de) cell_cmode_rocker_pane_ParamLimits

0x719a,	// (0x0003e5de) cell_cmode_rocker_pane

0x71ac,	// (0x0003e5f0) cell_cmode_itu_pane_ParamLimits

0x71ac,	// (0x0003e5f0) cell_cmode_itu_pane

0xb7e5,	// (0x00042c29) bg_button_pane_cp06_ParamLimits

0xb7e5,	// (0x00042c29) bg_button_pane_cp06

0x51a9,	// (0x0003c5ed) cell_cmode_rocker_pane_g1_ParamLimits

0x51a9,	// (0x0003c5ed) cell_cmode_rocker_pane_g1

0x66f6,	// (0x0003db3a) cell_cmode_rocker_pane_g2_ParamLimits

0x66f6,	// (0x0003db3a) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x000471fd) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x000471fd) cell_cmode_rocker_pane_g

0xb3c3,	// (0x00042807) bg_button_pane_cp07

0x71c1,	// (0x0003e605) cell_cmode_itu_pane_g1

0x71ca,	// (0x0003e60e) cell_cmode_itu_pane_t1

0x71d8,	// (0x0003e61c) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x00047202) cell_cmode_itu_pane_t

0x691b,	// (0x0003dd5f) aid_touch_ctrl_left

0x6923,	// (0x0003dd67) aid_touch_ctrl_right

0xb3c3,	// (0x00042807) compa_mode_pane

0xe77c,	// (0x00045bc0) aid_cmod_rocker_key_size_cp

0xe786,	// (0x00045bca) aid_cmode_itu_key_size_cp

0x71fa,	// (0x0003e63e) compa_mode_pane_g1

0x7202,	// (0x0003e646) compa_mode_pane_g2

0x720a,	// (0x0003e64e) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x00047207) compa_mode_pane_g

0xe790,	// (0x00045bd4) main_comp_mode_itu_pane_cp

0xe798,	// (0x00045bdc) main_comp_mode_rocker_pane_cp

0xe7a0,	// (0x00045be4) cell_cmode_itu_pane_cp_ParamLimits

0xe7a0,	// (0x00045be4) cell_cmode_itu_pane_cp

0xe7b5,	// (0x00045bf9) cell_cmode_rocker_pane_cp_ParamLimits

0xe7b5,	// (0x00045bf9) cell_cmode_rocker_pane_cp

0xb7e5,	// (0x00042c29) bg_button_pane_cp06_cp_ParamLimits

0xb7e5,	// (0x00042c29) bg_button_pane_cp06_cp

0x51a9,	// (0x0003c5ed) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x51a9,	// (0x0003c5ed) cell_cmode_rocker_pane_g1_cp

0x4f39,	// (0x0003c37d) cell_cmode_rocker_pane_g2_cp

0xb3c3,	// (0x00042807) bg_button_pane_cp07_cp

0xe7c7,	// (0x00045c0b) cell_cmode_itu_pane_g1_cp

0xe7d0,	// (0x00045c14) cell_cmode_itu_pane_t1_cp

0xe7d0,	// (0x00045c14) cell_cmode_itu_pane_t2_cp

0xc8d3,	// (0x00043d17) settings_code_pane_cp2

0xb433,	// (0x00042877) bg_popup_window_pane_cp3_ParamLimits

0xb676,	// (0x00042aba) heading_pane_cp3_ParamLimits

0xb682,	// (0x00042ac6) listscroll_popup_graphic_pane_ParamLimits

0x0f63,	// (0x000383a7) fep_hwr_aid_pane_ParamLimits

0x1501,	// (0x00038945) aid_touch_sctrl_top_ParamLimits

0x151c,	// (0x00038960) sctrl_sk_top_pane_g1_ParamLimits

0x11ba,	// (0x000385fe) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x0004713d) sctrl_sk_top_pane_g_ParamLimits

0x1529,	// (0x0003896d) sctrl_sk_top_pane_t1_ParamLimits

0x1501,	// (0x00038945) aid_touch_sctrl_bottom_ParamLimits

0x1529,	// (0x0003896d) sctrl_sk_bottom_pane_t1_ParamLimits

0xdf9e,	// (0x000453e2) aid_area_touch_clock

0xaf30,	// (0x00042374) aid_vkb2_area_top_pane_cell_ParamLimits

0xaf30,	// (0x00042374) aid_vkb2_area_top_pane_cell

0xafdb,	// (0x0004241f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xafdb,	// (0x0004241f) aid_vkb2_area_bottom_pane_cell

0x6dd3,	// (0x0003e217) popup_char_count_window

0x7260,	// (0x0003e6a4) popup_char_count_window_g1

0x7269,	// (0x0003e6ad) popup_char_count_window_g2

0x7272,	// (0x0003e6b6) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x0004720e) popup_char_count_window_g

0x727b,	// (0x0003e6bf) popup_char_count_window_t1

0x15d8,	// (0x00038a1c) popup_fep_char_preview_window_ParamLimits

0x15d8,	// (0x00038a1c) popup_fep_char_preview_window

0xaf50,	// (0x00042394) vkb2_top_candi_pane_ParamLimits

0xaf50,	// (0x00042394) vkb2_top_candi_pane

0xe7de,	// (0x00045c22) cell_vkb2_top_candi_pane_ParamLimits

0xe7de,	// (0x00045c22) cell_vkb2_top_candi_pane

0x1b40,	// (0x00038f84) bg_popup_fep_char_preview_window_ParamLimits

0x1b40,	// (0x00038f84) bg_popup_fep_char_preview_window

0x1b4e,	// (0x00038f92) popup_fep_char_preview_window_t1_ParamLimits

0x1b4e,	// (0x00038f92) popup_fep_char_preview_window_t1

0x72d6,	// (0x0003e71a) bg_popup_fep_char_preview_window_g1

0x72de,	// (0x0003e722) bg_popup_fep_char_preview_window_g2

0x72e6,	// (0x0003e72a) bg_popup_fep_char_preview_window_g3

0x72ee,	// (0x0003e732) bg_popup_fep_char_preview_window_g4

0x72f6,	// (0x0003e73a) bg_popup_fep_char_preview_window_g5

0x1b88,	// (0x00038fcc) bg_popup_fep_char_preview_window_g6

0x72fe,	// (0x0003e742) bg_popup_fep_char_preview_window_g7

0x7306,	// (0x0003e74a) bg_popup_fep_char_preview_window_g8

0x730e,	// (0x0003e752) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x00047215) bg_popup_fep_char_preview_window_g

0x11ba,	// (0x000385fe) cell_vkb2_top_candi_pane_g1_ParamLimits

0x11ba,	// (0x000385fe) cell_vkb2_top_candi_pane_g1

0x11c8,	// (0x0003860c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x11c8,	// (0x0003860c) cell_vkb2_top_candi_pane_g2

0x5cb0,	// (0x0003d0f4) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5cb0,	// (0x0003d0f4) cell_vkb2_top_candi_pane_g3

0x1b90,	// (0x00038fd4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1b90,	// (0x00038fd4) cell_vkb2_top_candi_pane_g4

0x5695,	// (0x0003cad9) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5695,	// (0x0003cad9) cell_vkb2_top_candi_pane_g5

0x1bb1,	// (0x00038ff5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1bb1,	// (0x00038ff5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x00047228) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x00047228) cell_vkb2_top_candi_pane_g

0x1bbf,	// (0x00039003) cell_vkb2_top_candi_pane_t1

0xa9c3,	// (0x00041e07) aid_size_touch_slider_mark_ParamLimits

0xa9c3,	// (0x00041e07) aid_size_touch_slider_mark

0xe4f6,	// (0x0004593a) grid_graphic2_catg_pane_ParamLimits

0xe4f6,	// (0x0004593a) grid_graphic2_catg_pane

0xe5b2,	// (0x000459f6) popup_grid_graphic2_window_t1_ParamLimits

0xe5b2,	// (0x000459f6) popup_grid_graphic2_window_t1

0xe5c8,	// (0x00045a0c) popup_grid_graphic2_window_t2_ParamLimits

0xe5c8,	// (0x00045a0c) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x000471e3) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x000471e3) popup_grid_graphic2_window_t

0xb55d,	// (0x000429a1) bg_button_pane_cp05_ParamLimits

0xe756,	// (0x00045b9a) cell_graphic2_control_pane_g1_ParamLimits

0xe844,	// (0x00045c88) cell_graphic2_catg_pane_ParamLimits

0xe844,	// (0x00045c88) cell_graphic2_catg_pane

0xb3c3,	// (0x00042807) bg_button_pane_cp12

0xe856,	// (0x00045c9a) cell_graphic2_catg_pane_g1

0x6830,	// (0x0003dc74) cell_tb_ext_pane_t1_ParamLimits

0x197a,	// (0x00038dbe) vkb2_top_cell_right_narrow_pane_ParamLimits

0x197a,	// (0x00038dbe) vkb2_top_cell_right_narrow_pane

0x1992,	// (0x00038dd6) vkb2_top_cell_right_wide_pane_ParamLimits

0x1992,	// (0x00038dd6) vkb2_top_cell_right_wide_pane

0x0f55,	// (0x00038399) bg_vkb2_func_pane_ParamLimits

0x0f55,	// (0x00038399) bg_vkb2_func_pane

0x1a03,	// (0x00038e47) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f55,	// (0x00038399) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f55,	// (0x00038399) bg_vkb2_fuc_pane_cp03

0x1a61,	// (0x00038ea5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2974,	// (0x00039db8) bg_vkb2_func_pane_g1

0x297c,	// (0x00039dc0) bg_vkb2_func_pane_g2

0x298c,	// (0x00039dd0) bg_vkb2_func_pane_g3

0x2984,	// (0x00039dc8) bg_vkb2_func_pane_g4

0x2994,	// (0x00039dd8) bg_vkb2_func_pane_g5

0x299c,	// (0x00039de0) bg_vkb2_func_pane_g6

0x29a4,	// (0x00039de8) bg_vkb2_func_pane_g7

0x29ac,	// (0x00039df0) bg_vkb2_func_pane_g8

0x296c,	// (0x00039db0) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x00047235) bg_vkb2_func_pane_g

0x0f55,	// (0x00038399) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f55,	// (0x00038399) bg_vkb2_fuc_pane_cp01

0x1a03,	// (0x00038e47) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1a03,	// (0x00038e47) vkb2_top_cell_right_wide_pane_g1

0x0f55,	// (0x00038399) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f55,	// (0x00038399) bg_vkb2_fuc_pane_cp02

0x1a61,	// (0x00038ea5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1a61,	// (0x00038ea5) vkb2_top_cell_right_narrow_pane_g1

0xdcbf,	// (0x00045103) aid_touch_area_decrease_ParamLimits

0xdcbf,	// (0x00045103) aid_touch_area_decrease

0xdcf5,	// (0x00045139) aid_touch_area_increase_ParamLimits

0xdcf5,	// (0x00045139) aid_touch_area_increase

0xdd1d,	// (0x00045161) aid_touch_area_mute_ParamLimits

0xdd1d,	// (0x00045161) aid_touch_area_mute

0xdd4d,	// (0x00045191) aid_touch_area_slider_ParamLimits

0xdd4d,	// (0x00045191) aid_touch_area_slider

0xdd8d,	// (0x000451d1) popup_slider_window_g4_ParamLimits

0xdd8d,	// (0x000451d1) popup_slider_window_g4

0xddb5,	// (0x000451f9) popup_slider_window_g5_ParamLimits

0xddb5,	// (0x000451f9) popup_slider_window_g5

0xdde9,	// (0x0004522d) popup_slider_window_g6_ParamLimits

0xdde9,	// (0x0004522d) popup_slider_window_g6

0x660c,	// (0x0003da50) popup_slider_window_t2_ParamLimits

0x660c,	// (0x0003da50) popup_slider_window_t2

0x0001,

0xfced,	// (0x00047131) popup_slider_window_t_ParamLimits

0xfced,	// (0x00047131) popup_slider_window_t

0xde05,	// (0x00045249) slider_pane_ParamLimits

0xde05,	// (0x00045249) slider_pane

0x7331,	// (0x0003e775) slider_pane_g1_ParamLimits

0x7331,	// (0x0003e775) slider_pane_g1

0x7345,	// (0x0003e789) slider_pane_g2_ParamLimits

0x7345,	// (0x0003e789) slider_pane_g2

0x735b,	// (0x0003e79f) slider_pane_g3_ParamLimits

0x735b,	// (0x0003e79f) slider_pane_g3

0x0003,

0xfe04,	// (0x00047248) slider_pane_g_ParamLimits

0xfe04,	// (0x00047248) slider_pane_g

0xa7b8,	// (0x00041bfc) popup_tb_float_extension_window_ParamLimits

0xa7b8,	// (0x00041bfc) popup_tb_float_extension_window

0x7387,	// (0x0003e7cb) aid_size_cell_tb_float_ext

0xb3c3,	// (0x00042807) bg_popup_sub_window_cp28

0xe85f,	// (0x00045ca3) grid_tb_float_ext_pane

0xe869,	// (0x00045cad) cell_tb_float_ext_pane_ParamLimits

0xe869,	// (0x00045cad) cell_tb_float_ext_pane

0xe883,	// (0x00045cc7) cell_tb_float_ext_pane_g1

0xe88c,	// (0x00045cd0) grid_highlight_pane_cp12

0xab20,	// (0x00041f64) cell_last_hwr_side_pane_ParamLimits

0xab20,	// (0x00041f64) cell_last_hwr_side_pane

0x4f39,	// (0x0003c37d) cell_last_hwr_side_pane_g1

0x73c9,	// (0x0003e80d) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x00047251) cell_last_hwr_side_pane_g

0xb0b7,	// (0x000424fb) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb0b7,	// (0x000424fb) vkb2_area_bottom_space_btn_pane

0x11ba,	// (0x000385fe) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6e88,	// (0x0003e2cc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1bbf,	// (0x00039003) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1bde,	// (0x00039022) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1bde,	// (0x00039022) vkb2_area_bottom_space_btn_pane_g1

0x1c18,	// (0x0003905c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1c18,	// (0x0003905c) vkb2_area_bottom_space_btn_pane_g2

0x1c4e,	// (0x00039092) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1c4e,	// (0x00039092) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x00047256) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x00047256) vkb2_area_bottom_space_btn_pane_g

0x1018,	// (0x0003845c) cel_fep_hwr_func_pane_ParamLimits

0x1018,	// (0x0003845c) cel_fep_hwr_func_pane

0xaaf5,	// (0x00041f39) cell_hwr_side_button_pane_ParamLimits

0xaaf5,	// (0x00041f39) cell_hwr_side_button_pane

0xdf9e,	// (0x000453e2) aid_area_touch_clock_ParamLimits

0xb55d,	// (0x000429a1) bg_uniindi_top_pane_ParamLimits

0xdfb0,	// (0x000453f4) uniindi_top_pane_g1_ParamLimits

0xdfc6,	// (0x0004540a) uniindi_top_pane_g2_ParamLimits

0xdfd2,	// (0x00045416) uniindi_top_pane_g3_ParamLimits

0x68aa,	// (0x0003dcee) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x00047169) uniindi_top_pane_g_ParamLimits

0xdfe3,	// (0x00045427) uniindi_top_pane_t1_ParamLimits

0xb55d,	// (0x000429a1) bg_vkb2_func_pane_cp01_ParamLimits

0xb55d,	// (0x000429a1) bg_vkb2_func_pane_cp01

0x73d2,	// (0x0003e816) cel_fep_hwr_func_pane_g1_ParamLimits

0x73d2,	// (0x0003e816) cel_fep_hwr_func_pane_g1

0xb55d,	// (0x000429a1) bg_vkb2_func_pane_cp02_ParamLimits

0xb55d,	// (0x000429a1) bg_vkb2_func_pane_cp02

0x73d2,	// (0x0003e816) cell_hwr_side_button_pane_g1_ParamLimits

0x73d2,	// (0x0003e816) cell_hwr_side_button_pane_g1

0x27f0,	// (0x00039c34) status_pane_g4_ParamLimits

0x27f0,	// (0x00039c34) status_pane_g4

0x280a,	// (0x00039c4e) status_pane_t1

0x4c74,	// (0x0003c0b8) form2_midp_gauge_slider_cont_pane

0x4c7c,	// (0x0003c0c0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcc68,	// (0x000440ac) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcc7a,	// (0x000440be) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00046f30) form2_midp_gauge_slider_pane_t_ParamLimits

0x4cb2,	// (0x0003c0f6) form2_midp_slider_pane_ParamLimits

0x1598,	// (0x000389dc) aid_size_cell_func_vkb2_ParamLimits

0x1598,	// (0x000389dc) aid_size_cell_func_vkb2

0x7373,	// (0x0003e7b7) slider_pane_g4_ParamLimits

0x7373,	// (0x0003e7b7) slider_pane_g4

0xb118,	// (0x0004255c) form2_midp_gauge_slider_pane_t2_cp01

0xb126,	// (0x0004256a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb126,	// (0x0004256a) form2_midp_gauge_slider_pane_t3_cp01

0x1cc3,	// (0x00039107) form2_midp_slider_pane_cp01

0xb3c3,	// (0x00042807) navi_smil_pane

0x740b,	// (0x0003e84f) navi_smil_pane_g1

0x7413,	// (0x0003e857) navi_smil_pane_t1

0x73e0,	// (0x0003e824) form2_midp_slider_pane_g1

0x73e9,	// (0x0003e82d) form2_midp_slider_pane_g2

0x73f1,	// (0x0003e835) form2_midp_slider_pane_g3

0x73e0,	// (0x0003e824) form2_midp_slider_pane_g4

0xe895,	// (0x00045cd9) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x0004725f) form2_midp_slider_pane_g

0x1c88,	// (0x000390cc) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1c88,	// (0x000390cc) vkb2_area_bottom_space_btn_pane_g4

0xbe32,	// (0x00043276) lc0_navi_pane_ParamLimits

0xbe32,	// (0x00043276) lc0_navi_pane

0xbe9c,	// (0x000432e0) lc0_stat_indi_pane_ParamLimits

0xbe9c,	// (0x000432e0) lc0_stat_indi_pane

0xbeb1,	// (0x000432f5) ls0_title_pane_ParamLimits

0xbeb1,	// (0x000432f5) ls0_title_pane

0xb7e5,	// (0x00042c29) bg_popup_sub_pane_cp14_ParamLimits

0xdf85,	// (0x000453c9) list_uniindi_pane_ParamLimits

0xdf91,	// (0x000453d5) uniindi_top_pane_ParamLimits

0x68f3,	// (0x0003dd37) list_single_uniindi_pane_g1_ParamLimits

0x6906,	// (0x0003dd4a) list_single_uniindi_pane_t1_ParamLimits

0xb143,	// (0x00042587) lc0_stat_clock_pane_ParamLimits

0xb143,	// (0x00042587) lc0_stat_clock_pane

0xe8a0,	// (0x00045ce4) lc0_stat_indi_pane_g1_ParamLimits

0xe8a0,	// (0x00045ce4) lc0_stat_indi_pane_g1

0xe8ad,	// (0x00045cf1) lc0_stat_indi_pane_g2_ParamLimits

0xe8ad,	// (0x00045cf1) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x0004726a) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x0004726a) lc0_stat_indi_pane_g

0xb153,	// (0x00042597) lc0_uni_indicator_pane_ParamLimits

0xb153,	// (0x00042597) lc0_uni_indicator_pane

0xe8ba,	// (0x00045cfe) ls0_title_pane_g1_ParamLimits

0xe8ba,	// (0x00045cfe) ls0_title_pane_g1

0xe8ce,	// (0x00045d12) ls0_title_pane_t1_ParamLimits

0xe8ce,	// (0x00045d12) ls0_title_pane_t1

0xb163,	// (0x000425a7) lc0_uni_indicator_pane_g1_ParamLimits

0xb163,	// (0x000425a7) lc0_uni_indicator_pane_g1

0x7485,	// (0x0003e8c9) lc0_stat_clock_pane_t1

0xeeba,	// (0x000462fe) main_ai5_pane

0x7493,	// (0x0003e8d7) ai5_sk_pane_ParamLimits

0x7493,	// (0x0003e8d7) ai5_sk_pane

0xe8fc,	// (0x00045d40) cell_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x00045d40) cell_ai5_widget_pane

0x7552,	// (0x0003e996) aid_size_cell_widget_grid

0x7560,	// (0x0003e9a4) bg_ai5_widget_pane_ParamLimits

0x7560,	// (0x0003e9a4) bg_ai5_widget_pane

0x75d4,	// (0x0003ea18) cell_ai5_widget_pane_g2

0x75e4,	// (0x0003ea28) cell_ai5_widget_pane_g3

0x75fb,	// (0x0003ea3f) cell_ai5_widget_pane_g4

0x7607,	// (0x0003ea4b) cell_ai5_widget_pane_g5

0x7613,	// (0x0003ea57) cell_ai5_widget_pane_g6

0x761f,	// (0x0003ea63) cell_ai5_widget_pane_g7

0x7667,	// (0x0003eaab) cell_ai5_widget_pane_t1_ParamLimits

0x7667,	// (0x0003eaab) cell_ai5_widget_pane_t1

0x7684,	// (0x0003eac8) cell_ai5_widget_pane_t2_ParamLimits

0x7684,	// (0x0003eac8) cell_ai5_widget_pane_t2

0x769c,	// (0x0003eae0) cell_ai5_widget_pane_t3_ParamLimits

0x769c,	// (0x0003eae0) cell_ai5_widget_pane_t3

0x76b4,	// (0x0003eaf8) cell_ai5_widget_pane_t4_ParamLimits

0x76b4,	// (0x0003eaf8) cell_ai5_widget_pane_t4

0x76d1,	// (0x0003eb15) cell_ai5_widget_pane_t5_ParamLimits

0x76d1,	// (0x0003eb15) cell_ai5_widget_pane_t5

0x76f0,	// (0x0003eb34) cell_ai5_widget_pane_t6_ParamLimits

0x76f0,	// (0x0003eb34) cell_ai5_widget_pane_t6

0x7702,	// (0x0003eb46) cell_ai5_widget_pane_t7_ParamLimits

0x7702,	// (0x0003eb46) cell_ai5_widget_pane_t7

0x771b,	// (0x0003eb5f) cell_ai5_widget_pane_t8_ParamLimits

0x771b,	// (0x0003eb5f) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x00047284) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x00047284) cell_ai5_widget_pane_t

0x776f,	// (0x0003ebb3) grid_ai5_widget_pane

0xb7e5,	// (0x00042c29) highlight_cell_ai5_widget_pane_ParamLimits

0xb7e5,	// (0x00042c29) highlight_cell_ai5_widget_pane

0xe962,	// (0x00045da6) ai5_sk_left_pane

0xe96c,	// (0x00045db0) ai5_sk_middle_pane

0xe976,	// (0x00045dba) ai5_sk_right_pane

0x779b,	// (0x0003ebdf) bg_ai5_widget_pane_g1_ParamLimits

0x779b,	// (0x0003ebdf) bg_ai5_widget_pane_g1

0x77a7,	// (0x0003ebeb) bg_ai5_widget_pane_g2_ParamLimits

0x77a7,	// (0x0003ebeb) bg_ai5_widget_pane_g2

0x77b3,	// (0x0003ebf7) bg_ai5_widget_pane_g3_ParamLimits

0x77b3,	// (0x0003ebf7) bg_ai5_widget_pane_g3

0x77bf,	// (0x0003ec03) bg_ai5_widget_pane_g4_ParamLimits

0x77bf,	// (0x0003ec03) bg_ai5_widget_pane_g4

0x77cb,	// (0x0003ec0f) bg_ai5_widget_pane_g5_ParamLimits

0x77cb,	// (0x0003ec0f) bg_ai5_widget_pane_g5

0x77d7,	// (0x0003ec1b) bg_ai5_widget_pane_g6_ParamLimits

0x77d7,	// (0x0003ec1b) bg_ai5_widget_pane_g6

0x77e3,	// (0x0003ec27) bg_ai5_widget_pane_g7_ParamLimits

0x77e3,	// (0x0003ec27) bg_ai5_widget_pane_g7

0x77ef,	// (0x0003ec33) bg_ai5_widget_pane_g8_ParamLimits

0x77ef,	// (0x0003ec33) bg_ai5_widget_pane_g8

0x77fb,	// (0x0003ec3f) bg_ai5_widget_pane_g9_ParamLimits

0x77fb,	// (0x0003ec3f) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x00047299) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x00047299) bg_ai5_widget_pane_g

0x782d,	// (0x0003ec71) cell_shortcut_ai5_widget_pane_ParamLimits

0x782d,	// (0x0003ec71) cell_shortcut_ai5_widget_pane

0x2114,	// (0x00039558) bg_cell_shortcut_ai5_widget_pane

0x783e,	// (0x0003ec82) cell_grid_ai5_widget_pane_g1

0x2114,	// (0x00039558) highlight_cell_shortcut_ai5_widget_pane

0x2974,	// (0x00039db8) ai5_sk_left_pane_g1

0x7847,	// (0x0003ec8b) ai5_sk_left_pane_g2

0x784f,	// (0x0003ec93) ai5_sk_left_pane_g3

0x7857,	// (0x0003ec9b) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x000472ac) ai5_sk_left_pane_g

0x785f,	// (0x0003eca3) ai5_sk_left_pane_t1

0x297c,	// (0x00039dc0) ai5_sk_right_pane_g1

0x786d,	// (0x0003ecb1) ai5_sk_right_pane_g2

0x7875,	// (0x0003ecb9) ai5_sk_right_pane_g3

0x787d,	// (0x0003ecc1) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x000472b5) ai5_sk_right_pane_g

0x7885,	// (0x0003ecc9) ai5_sk_right_pane_t1

0x297c,	// (0x00039dc0) ai5_sk_middle_pane_g1

0x2974,	// (0x00039db8) ai5_sk_middle_pane_g2

0x2994,	// (0x00039dd8) ai5_sk_middle_pane_g3

0x7875,	// (0x0003ecb9) ai5_sk_middle_pane_g4

0x784f,	// (0x0003ec93) ai5_sk_middle_pane_g5

0x7893,	// (0x0003ecd7) ai5_sk_middle_pane_g6

0xe980,	// (0x00045dc4) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x000472be) ai5_sk_middle_pane_g

0xbd1e,	// (0x00043162) aid_touch_area_size_lc0_ParamLimits

0xbd1e,	// (0x00043162) aid_touch_area_size_lc0

0x11e9,	// (0x0003862d) cell_hwr_candidate_pane_t1_ParamLimits

0x24c1,	// (0x00039905) aid_touch_navi_pane

0xbfaa,	// (0x000433ee) status_dt_navi_pane_ParamLimits

0xbfaa,	// (0x000433ee) status_dt_navi_pane

0xbfc2,	// (0x00043406) status_dt_sta_pane_ParamLimits

0xbfc2,	// (0x00043406) status_dt_sta_pane

0xe988,	// (0x00045dcc) dt_sta_controll_pane

0xe995,	// (0x00045dd9) dt_sta_indi_pane

0xe9a2,	// (0x00045de6) dt_sta_title_pane

0xb55d,	// (0x000429a1) bg_dt_sta_indi_pane_ParamLimits

0xb55d,	// (0x000429a1) bg_dt_sta_indi_pane

0xe9b4,	// (0x00045df8) dt_sta_battery_pane

0xe9bc,	// (0x00045e00) dt_sta_indi_pane_g1

0x78e5,	// (0x0003ed29) dt_sta_indi_pane_g2

0x78ee,	// (0x0003ed32) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x000472cd) dt_sta_indi_pane_g

0x78f7,	// (0x0003ed3b) dt_sta_signal_pane

0xb7e5,	// (0x00042c29) bg_dt_sta_title_pane_ParamLimits

0xb7e5,	// (0x00042c29) bg_dt_sta_title_pane

0x37a2,	// (0x0003abe6) dt_sta_title_pane_g1

0xe9c5,	// (0x00045e09) dt_sta_title_pane_t1_ParamLimits

0xe9c5,	// (0x00045e09) dt_sta_title_pane_t1

0xb3c3,	// (0x00042807) bg_dt_sta_control_pane

0xe9da,	// (0x00045e1e) dt_sta_controll_pane_g1

0xe9e3,	// (0x00045e27) bg_dt_sta_title_pane_g1

0xe9ec,	// (0x00045e30) bg_dt_sta_title_pane_g2

0xe9f5,	// (0x00045e39) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x000472d4) bg_dt_sta_title_pane_g

0x4f39,	// (0x0003c37d) bg_dt_sta_indi_pane_g1

0x7939,	// (0x0003ed7d) dt_sta_signal_pane_g1

0x7941,	// (0x0003ed85) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x000472db) dt_sta_signal_pane_g

0x7949,	// (0x0003ed8d) dt_sta_battery_pane_g1

0x7952,	// (0x0003ed96) dt_sta_battery_pane_t1

0x4f39,	// (0x0003c37d) bg_dt_sta_control_pane_g1

0xbc9b,	// (0x000430df) fep_china_uni_eep_pane

0xbca3,	// (0x000430e7) fep_china_uni_entry_pane_ParamLimits

0xbcb3,	// (0x000430f7) popup_fep_china_uni_window_g1_ParamLimits

0xbcc3,	// (0x00043107) popup_fep_china_uni_window_g2_ParamLimits

0xbcc3,	// (0x00043107) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00046b52) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00046b52) popup_fep_china_uni_window_g

0x7961,	// (0x0003eda5) fep_china_uni_eep_pane_g1

0x7969,	// (0x0003edad) fep_china_uni_eep_pane_t1

0x7402,	// (0x0003e846) aid_touch_area_size_smil_player

0x2617,	// (0x00039a5b) lc0_clock_pane

0x27fe,	// (0x00039c42) status_pane_g5_ParamLimits

0x27fe,	// (0x00039c42) status_pane_g5

0xa2ee,	// (0x00041732) popup_keymap_window

0x27bc,	// (0x00039c00) status_icon_pane

0x75e4,	// (0x0003ea28) cell_ai5_widget_pane_g3_ParamLimits

0x75fb,	// (0x0003ea3f) cell_ai5_widget_pane_g4_ParamLimits

0x7607,	// (0x0003ea4b) cell_ai5_widget_pane_g5_ParamLimits

0x762b,	// (0x0003ea6f) cell_ai5_widget_pane_g8_ParamLimits

0x762b,	// (0x0003ea6f) cell_ai5_widget_pane_g8

0x763f,	// (0x0003ea83) cell_ai5_widget_pane_g9_ParamLimits

0x763f,	// (0x0003ea83) cell_ai5_widget_pane_g9

0x7653,	// (0x0003ea97) cell_ai5_widget_pane_g10_ParamLimits

0x7653,	// (0x0003ea97) cell_ai5_widget_pane_g10

0x7978,	// (0x0003edbc) status_icon_pane_g1

0xb3c3,	// (0x00042807) bg_popup_sub_pane_cp13

0x7980,	// (0x0003edc4) popup_keymap_window_t1

0x9fb6,	// (0x000413fa) control_pane_g6_ParamLimits

0x9fb6,	// (0x000413fa) control_pane_g6

0x9fc3,	// (0x00041407) control_pane_g7_ParamLimits

0x9fc3,	// (0x00041407) control_pane_g7

0x9fd0,	// (0x00041414) control_pane_g8_ParamLimits

0x9fd0,	// (0x00041414) control_pane_g8

0xe988,	// (0x00045dcc) dt_sta_controll_pane_ParamLimits

0xe995,	// (0x00045dd9) dt_sta_indi_pane_ParamLimits

0xe9a2,	// (0x00045de6) dt_sta_title_pane_ParamLimits

0xb730,	// (0x00042b74) aid_size_touch_scroll_bar_cale

0x8c90,	// (0x000400d4) popup_discreet_window_ParamLimits

0x8c90,	// (0x000400d4) popup_discreet_window

0x8ce2,	// (0x00040126) popup_sk_window

0x2fe6,	// (0x0003a42a) bg_popup_sub_pane_cp28_ParamLimits

0x2fe6,	// (0x0003a42a) bg_popup_sub_pane_cp28

0x798e,	// (0x0003edd2) popup_discreet_window_g1_ParamLimits

0x798e,	// (0x0003edd2) popup_discreet_window_g1

0xe9fe,	// (0x00045e42) popup_discreet_window_t1_ParamLimits

0xe9fe,	// (0x00045e42) popup_discreet_window_t1

0x79cc,	// (0x0003ee10) popup_discreet_window_t2_ParamLimits

0x79cc,	// (0x0003ee10) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x000472e0) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x000472e0) popup_discreet_window_t

0x1cfa,	// (0x0003913e) popup_sk_window_g1

0x1d04,	// (0x00039148) popup_sk_window_g2

0x0001,

0xfea3,	// (0x000472e7) popup_sk_window_g

0xb18e,	// (0x000425d2) popup_sk_window_t1

0xb19c,	// (0x000425e0) popup_sk_window_t1_copy1

0x75d4,	// (0x0003ea18) cell_ai5_widget_pane_g2_ParamLimits

0x772d,	// (0x0003eb71) cell_ai5_widget_pane_t9_ParamLimits

0x772d,	// (0x0003eb71) cell_ai5_widget_pane_t9

0xb3c3,	// (0x00042807) main_fep_fshwr2_pane

0xb1aa,	// (0x000425ee) aid_fshwr2_btn_pane

0xb1bc,	// (0x00042600) aid_fshwr2_syb_pane

0xb1ce,	// (0x00042612) aid_fshwr2_txt_pane

0xb1dd,	// (0x00042621) fshwr2_func_candi_pane

0xb1fc,	// (0x00042640) fshwr2_hwr_syb_pane

0xb217,	// (0x0004265b) fshwr2_icf_pane

0xeeba,	// (0x000462fe) fshwr2_icf_bg_pane

0x1da9,	// (0x000391ed) fshwr2_icf_pane_t1_ParamLimits

0x1da9,	// (0x000391ed) fshwr2_icf_pane_t1

0xbc18,	// (0x0004305c) fshwr2_func_candi_pane_g1

0xea1c,	// (0x00045e60) fshwr2_func_candi_row_pane_ParamLimits

0xea1c,	// (0x00045e60) fshwr2_func_candi_row_pane

0xb243,	// (0x00042687) cell_fshwr2_syb_pane_ParamLimits

0xb243,	// (0x00042687) cell_fshwr2_syb_pane

0x11ba,	// (0x000385fe) fshwr2_hwr_syb_pane_g1_ParamLimits

0x11ba,	// (0x000385fe) fshwr2_hwr_syb_pane_g1

0xeeba,	// (0x000462fe) bg_popup_call_pane_cp01

0xb259,	// (0x0004269d) fshwr2_func_candi_cell_pane_ParamLimits

0xb259,	// (0x0004269d) fshwr2_func_candi_cell_pane

0xea3f,	// (0x00045e83) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xea3f,	// (0x00045e83) fshwr2_func_candi_cell_bg_pane

0xb2a4,	// (0x000426e8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb2a4,	// (0x000426e8) fshwr2_func_candi_cell_pane_g1

0xb2db,	// (0x0004271f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb2db,	// (0x0004271f) fshwr2_func_candi_cell_pane_t1

0xeeba,	// (0x000462fe) bg_button_pane_cp08

0x7a2e,	// (0x0003ee72) cell_fshwr2_syb_bg_pane

0xb2f6,	// (0x0004273a) cell_fshwr2_syb_bg_pane_g1

0xb2fe,	// (0x00042742) cell_fshwr2_syb_bg_pane_t1

0xb7e5,	// (0x00042c29) main_tmo_pane

0xc685,	// (0x00043ac9) uni_indicator_pane_g1_ParamLimits

0xc69b,	// (0x00043adf) uni_indicator_pane_g2_ParamLimits

0xc6b1,	// (0x00043af5) uni_indicator_pane_g3_ParamLimits

0x3b0f,	// (0x0003af53) uni_indicator_pane_g4_ParamLimits

0x3b0f,	// (0x0003af53) uni_indicator_pane_g4

0x3b23,	// (0x0003af67) uni_indicator_pane_g5_ParamLimits

0x3b23,	// (0x0003af67) uni_indicator_pane_g5

0x3b23,	// (0x0003af67) uni_indicator_pane_g6_ParamLimits

0x3b23,	// (0x0003af67) uni_indicator_pane_g6

0xf906,	// (0x00046d4a) uni_indicator_pane_g_ParamLimits

0xdca1,	// (0x000450e5) popup_tmo_note_window_ParamLimits

0xdca1,	// (0x000450e5) popup_tmo_note_window

0x157a,	// (0x000389be) fshwr2_bg_pane

0xb2cc,	// (0x00042710) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb2cc,	// (0x00042710) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x000472ec) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x000472ec) fshwr2_func_candi_cell_pane_g

0x11a2,	// (0x000385e6) bg_popup_window_pane_cp01

0x1e75,	// (0x000392b9) bg_popup_window_pane_g1_cp01

0x7a36,	// (0x0003ee7a) bg_popup_window_pane_cp22_ParamLimits

0x7a36,	// (0x0003ee7a) bg_popup_window_pane_cp22

0xea4b,	// (0x00045e8f) listscroll_tmo_link_pane_ParamLimits

0xea4b,	// (0x00045e8f) listscroll_tmo_link_pane

0x7a84,	// (0x0003eec8) popup_tmo_note_window_g1_ParamLimits

0x7a84,	// (0x0003eec8) popup_tmo_note_window_g1

0xea8b,	// (0x00045ecf) tmo_note_info_pane_ParamLimits

0xea8b,	// (0x00045ecf) tmo_note_info_pane

0xeaa5,	// (0x00045ee9) list_tmo_note_info_pane_g1_ParamLimits

0xeaa5,	// (0x00045ee9) list_tmo_note_info_pane_g1

0x7ac2,	// (0x0003ef06) list_tmo_note_info_pane_g2_ParamLimits

0x7ac2,	// (0x0003ef06) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x000472f1) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x000472f1) list_tmo_note_info_pane_g

0x7ade,	// (0x0003ef22) list_tmo_note_info_text_pane_ParamLimits

0x7ade,	// (0x0003ef22) list_tmo_note_info_text_pane

0x7b5f,	// (0x0003efa3) list_tmo_link_pane

0x7b6c,	// (0x0003efb0) scroll_pane_cp20

0x7b79,	// (0x0003efbd) list_single_tmo_link_pane_ParamLimits

0x7b79,	// (0x0003efbd) list_single_tmo_link_pane

0x7b89,	// (0x0003efcd) list_single_tmo_link_pane_t1

0x7b97,	// (0x0003efdb) list_tmo_note_info_text_pane_t1_ParamLimits

0x7b97,	// (0x0003efdb) list_tmo_note_info_text_pane_t1

0x9920,	// (0x00040d64) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9920,	// (0x00040d64) aid_size_touch_scroll_bar_cp01

0x9817,	// (0x00040c5b) aid_size_touch_slider_marker

0x8cd2,	// (0x00040116) popup_settings_window_ParamLimits

0x8cd2,	// (0x00040116) popup_settings_window

0xd361,	// (0x000447a5) popup_candi_list_indi_window

0x24c1,	// (0x00039905) aid_touch_navi_pane_ParamLimits

0x14d5,	// (0x00038919) rs_clock_indi_pane

0x14de,	// (0x00038922) sctrl_sk_bottom_pane_ParamLimits

0x14ef,	// (0x00038933) sctrl_sk_top_pane_ParamLimits

0xadf4,	// (0x00042238) popup_fep_tooltip_window

0x7552,	// (0x0003e996) aid_size_cell_widget_grid_ParamLimits

0x75bf,	// (0x0003ea03) cell_ai5_widget_pane_g1_ParamLimits

0x75bf,	// (0x0003ea03) cell_ai5_widget_pane_g1

0x7613,	// (0x0003ea57) cell_ai5_widget_pane_g6_ParamLimits

0x761f,	// (0x0003ea63) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x0004726f) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x0004726f) cell_ai5_widget_pane_g

0x7751,	// (0x0003eb95) cell_ai5_widget_pane_t10_ParamLimits

0x7751,	// (0x0003eb95) cell_ai5_widget_pane_t10

0x776f,	// (0x0003ebb3) grid_ai5_widget_pane_ParamLimits

0x7807,	// (0x0003ec4b) cell_contacts_ai5_widget_pane_ParamLimits

0x7807,	// (0x0003ec4b) cell_contacts_ai5_widget_pane

0x79e1,	// (0x0003ee25) popup_discreet_window_t3_ParamLimits

0x79e1,	// (0x0003ee25) popup_discreet_window_t3

0xb22f,	// (0x00042673) popup_fshwr2_char_preview_window_ParamLimits

0xb22f,	// (0x00042673) popup_fshwr2_char_preview_window

0xeabc,	// (0x00045f00) tmo_note_info_pane_t1

0xead1,	// (0x00045f15) tmo_note_info_pane_t2

0xeae8,	// (0x00045f2c) tmo_note_info_pane_t3

0x7b3b,	// (0x0003ef7f) tmo_note_info_pane_t4

0x7b4d,	// (0x0003ef91) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x000472f6) tmo_note_info_pane_t

0x7b5f,	// (0x0003efa3) list_tmo_link_pane_ParamLimits

0x7b6c,	// (0x0003efb0) scroll_pane_cp20_ParamLimits

0xeeba,	// (0x000462fe) bg_popup_fep_char_preview_window_cp01

0xeafd,	// (0x00045f41) popup_fshwr2_char_preview_window_t1

0x7bbe,	// (0x0003f002) popup_candi_list_indi_window_g1

0x7bc7,	// (0x0003f00b) bg_cell_contacts_ai5_widget_pane

0x7bd3,	// (0x0003f017) cell_contacts_ai5_widget_pane_g1

0x55ea,	// (0x0003ca2e) cell_contacts_ai5_widget_pane_g2

0x7be8,	// (0x0003f02c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x00047301) cell_contacts_ai5_widget_pane_g

0x7bf4,	// (0x0003f038) cell_contacts_ai5_widget_pane_t1

0xb7e5,	// (0x00042c29) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7c6b,	// (0x0003f0af) settings_container_pane

0x2114,	// (0x00039558) listscroll_set_pane_copy1

0x463c,	// (0x0003ba80) scroll_pane_cp121_copy1

0x2d9f,	// (0x0003a1e3) set_content_pane_copy1

0xeb70,	// (0x00045fb4) aid_height_set_list_copy1_ParamLimits

0xeb70,	// (0x00045fb4) aid_height_set_list_copy1

0x3d1b,	// (0x0003b15f) aid_size_parent_copy1_ParamLimits

0x3d1b,	// (0x0003b15f) aid_size_parent_copy1

0xeb7c,	// (0x00045fc0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeb7c,	// (0x00045fc0) button_value_adjust_pane_cp6_copy1

0x245f,	// (0x000398a3) list_highlight_pane_cp2_copy1_ParamLimits

0x245f,	// (0x000398a3) list_highlight_pane_cp2_copy1

0xeb90,	// (0x00045fd4) list_set_pane_copy1_ParamLimits

0xeb90,	// (0x00045fd4) list_set_pane_copy1

0xeb0b,	// (0x00045f4f) main_pane_set_t1_copy1_ParamLimits

0xeb0b,	// (0x00045f4f) main_pane_set_t1_copy1

0xeb45,	// (0x00045f89) main_pane_set_t2_copy1_ParamLimits

0xeb45,	// (0x00045f89) main_pane_set_t2_copy1

0xec3d,	// (0x00046081) main_pane_set_t3_copy1

0xec4b,	// (0x0004608f) main_pane_set_t4_copy1

0xeb64,	// (0x00045fa8) set_content_pane_g1_copy1_ParamLimits

0xeb64,	// (0x00045fa8) set_content_pane_g1_copy1

0xec59,	// (0x0004609d) setting_code_pane_copy1

0x7d68,	// (0x0003f1ac) setting_slider_graphic_pane_copy1

0x7d68,	// (0x0003f1ac) setting_slider_pane_copy1

0x7d68,	// (0x0003f1ac) setting_text_pane_copy1

0x7d68,	// (0x0003f1ac) setting_volume_pane_copy1

0xec59,	// (0x0004609d) settings_code_pane_cp2_copy1

0xec61,	// (0x000460a5) settings_code_pane_cp_copy1_ParamLimits

0xec61,	// (0x000460a5) settings_code_pane_cp_copy1

0xb30d,	// (0x00042751) volume_set_pane_copy1

0xec75,	// (0x000460b9) volume_set_pane_g10_copy1

0xec7d,	// (0x000460c1) volume_set_pane_g1_copy1

0xec85,	// (0x000460c9) volume_set_pane_g2_copy1

0xec8d,	// (0x000460d1) volume_set_pane_g3_copy1

0xec95,	// (0x000460d9) volume_set_pane_g4_copy1

0xec9d,	// (0x000460e1) volume_set_pane_g5_copy1

0xeca5,	// (0x000460e9) volume_set_pane_g6_copy1

0xecad,	// (0x000460f1) volume_set_pane_g7_copy1

0xecb5,	// (0x000460f9) volume_set_pane_g8_copy1

0xecbd,	// (0x00046101) volume_set_pane_g9_copy1

0xb433,	// (0x00042877) bg_set_opt_pane_cp_copy1_ParamLimits

0xb433,	// (0x00042877) bg_set_opt_pane_cp_copy1

0xb315,	// (0x00042759) setting_slider_pane_t1_copy1_ParamLimits

0xb315,	// (0x00042759) setting_slider_pane_t1_copy1

0xb333,	// (0x00042777) setting_slider_pane_t2_copy1_ParamLimits

0xb333,	// (0x00042777) setting_slider_pane_t2_copy1

0xb34d,	// (0x00042791) setting_slider_pane_t3_copy1_ParamLimits

0xb34d,	// (0x00042791) setting_slider_pane_t3_copy1

0xb365,	// (0x000427a9) slider_set_pane_copy1_ParamLimits

0xb365,	// (0x000427a9) slider_set_pane_copy1

0xb83d,	// (0x00042c81) set_opt_bg_pane_g1_copy2

0xb845,	// (0x00042c89) set_opt_bg_pane_g2_copy2

0x7dd4,	// (0x0003f218) set_opt_bg_pane_g3_copy2

0xb855,	// (0x00042c99) set_opt_bg_pane_g4_copy2

0xb85d,	// (0x00042ca1) set_opt_bg_pane_g5_copy2

0xb865,	// (0x00042ca9) set_opt_bg_pane_g6_copy2

0xecc5,	// (0x00046109) set_opt_bg_pane_g7_copy2

0x7de6,	// (0x0003f22a) set_opt_bg_pane_g8_copy2

0x7df0,	// (0x0003f234) set_opt_bg_pane_g9_copy2

0xb37b,	// (0x000427bf) aid_size_touch_slider_mark_copy1_ParamLimits

0xb37b,	// (0x000427bf) aid_size_touch_slider_mark_copy1

0xeccd,	// (0x00046111) slider_set_pane_g1_copy1

0x1f00,	// (0x00039344) slider_set_pane_g2_copy1

0xa9d7,	// (0x00041e1b) slider_set_pane_g3_copy1_ParamLimits

0xa9d7,	// (0x00041e1b) slider_set_pane_g3_copy1

0xa9eb,	// (0x00041e2f) slider_set_pane_g4_copy1_ParamLimits

0xa9eb,	// (0x00041e2f) slider_set_pane_g4_copy1

0xaa03,	// (0x00041e47) slider_set_pane_g5_copy1_ParamLimits

0xaa03,	// (0x00041e47) slider_set_pane_g5_copy1

0xa9d7,	// (0x00041e1b) slider_set_pane_g6_copy1_ParamLimits

0xa9d7,	// (0x00041e1b) slider_set_pane_g6_copy1

0xb38f,	// (0x000427d3) slider_set_pane_g7_copy1_ParamLimits

0xb38f,	// (0x000427d3) slider_set_pane_g7_copy1

0xb3d7,	// (0x0004281b) bg_set_opt_pane_cp2_copy1

0xecd6,	// (0x0004611a) setting_slider_graphic_pane_g1_copy1

0xecdf,	// (0x00046123) setting_slider_graphic_pane_t1_copy1

0xecef,	// (0x00046133) setting_slider_graphic_pane_t2_copy1

0xecff,	// (0x00046143) slider_set_pane_cp_copy1

0x7e3c,	// (0x0003f280) input_focus_pane_cp1_copy1

0x7e45,	// (0x0003f289) list_set_text_pane_copy1

0x7e4d,	// (0x0003f291) setting_text_pane_g1_copy1

0xed0f,	// (0x00046153) set_text_pane_t1_copy1

0x7e3c,	// (0x0003f280) input_focus_pane_cp2_copy1

0x7e4d,	// (0x0003f291) setting_code_pane_g1_copy1

0x7e56,	// (0x0003f29a) setting_code_pane_t1_copy1

0x7e64,	// (0x0003f2a8) list_set_graphic_pane_copy1

0xb3d7,	// (0x0004281b) bg_set_opt_pane_cp4_copy1

0xf4c7,	// (0x0004690b) list_set_graphic_pane_g1_copy1_ParamLimits

0xf4c7,	// (0x0004690b) list_set_graphic_pane_g1_copy1

0x7e78,	// (0x0003f2bc) list_set_graphic_pane_g2_copy1

0xf4df,	// (0x00046923) list_set_graphic_pane_t1_copy1_ParamLimits

0xf4df,	// (0x00046923) list_set_graphic_pane_t1_copy1

0x4f39,	// (0x0003c37d) rs_clock_indi_pane_g1

0x7e80,	// (0x0003f2c4) rs_clock_indi_pane_t1

0x7e8e,	// (0x0003f2d2) rs_indi_pane

0x7e96,	// (0x0003f2da) rs_indi_pane_g1

0x7e9f,	// (0x0003f2e3) rs_indi_pane_g2

0x7bbe,	// (0x0003f002) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x00047308) rs_indi_pane_g

0x2114,	// (0x00039558) bg_popup_preview_window_pane_cp03

0x7ea8,	// (0x0003f2ec) popup_fep_tooltip_window_t1

0xd121,	// (0x00044565) popup_note2_window_g2_ParamLimits

0xd121,	// (0x00044565) popup_note2_window_g2

0x0001,

0xfc64,	// (0x000470a8) popup_note2_window_g_ParamLimits

0xfc64,	// (0x000470a8) popup_note2_window_g

0x60e2,	// (0x0003d526) bg_popup_sub_pane_cp11_ParamLimits

0x60ef,	// (0x0003d533) cell_ai3_links_pane_g1_ParamLimits

0x6106,	// (0x0003d54a) cell_ai3_links_pane_t1

0xed0f,	// (0x00046153) set_text_pane_t1_copy1_ParamLimits

0x0134,	// (0x00037578) cell_graphic_popup_pane_cp2_ParamLimits

0x0134,	// (0x00037578) cell_graphic_popup_pane_cp2

0xed2b,	// (0x0004616f) cell_graphic_popup_pane_g1_cp2

0xb6b3,	// (0x00042af7) cell_graphic_popup_pane_g2_cp2

0x7ebe,	// (0x0003f302) cell_graphic_popup_pane_g3_cp2

0xed33,	// (0x00046177) cell_graphic_popup_pane_t2_cp2

0xb6c4,	// (0x00042b08) grid_highlight_pane_cp3_cp2

0xba95,	// (0x00042ed9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb7e5,	// (0x00042c29) main_tmo_pane_ParamLimits

0xdc95,	// (0x000450d9) popup_tmo_big_image_note_window

0x75ae,	// (0x0003e9f2) cell_ai5_widget_list_pane

0x75b6,	// (0x0003e9fa) cell_ai5_widget_lrg_icon_pane

0xeabc,	// (0x00045f00) tmo_note_info_pane_t1_ParamLimits

0xead1,	// (0x00045f15) tmo_note_info_pane_t2_ParamLimits

0xeae8,	// (0x00045f2c) tmo_note_info_pane_t3_ParamLimits

0x7b3b,	// (0x0003ef7f) tmo_note_info_pane_t4_ParamLimits

0x7b4d,	// (0x0003ef91) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x000472f6) tmo_note_info_pane_t_ParamLimits

0x7c6b,	// (0x0003f0af) settings_container_pane_ParamLimits

0xed07,	// (0x0004614b) indicator_popup_pane_cp5

0xed07,	// (0x0004614b) indicator_popup_pane_cp6

0x7e64,	// (0x0003f2a8) list_set_graphic_pane_copy1_ParamLimits

0xb3c3,	// (0x00042807) bg_popup_window_pane_cp23

0x7ed4,	// (0x0003f318) popup_tmo_big_image_note_window_g1

0x7edd,	// (0x0003f321) popup_tmo_big_image_note_window_t1

0x7eed,	// (0x0003f331) popup_tmo_big_image_note_window_t2

0x7efd,	// (0x0003f341) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x0004730f) popup_tmo_big_image_note_window_t

0x4f39,	// (0x0003c37d) cell_ai5_widget_lrg_icon_pane_g1

0x7f0d,	// (0x0003f351) cell_ai5_widget_lrg_icon_pane_t1

0x7f1b,	// (0x0003f35f) cell_ai5_widget_list_row_pane_ParamLimits

0x7f1b,	// (0x0003f35f) cell_ai5_widget_list_row_pane

0x7f32,	// (0x0003f376) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7f32,	// (0x0003f376) cell_ai5_widget_list_row_pane_g1

0xed41,	// (0x00046185) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed41,	// (0x00046185) cell_ai5_widget_list_row_pane_t1

0x7f6a,	// (0x0003f3ae) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7f6a,	// (0x0003f3ae) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x00047316) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x00047316) cell_ai5_widget_list_row_pane_t

0xeeba,	// (0x000462fe) main_fep_vtchi_ss_pane

0x7fae,	// (0x0003f3f2) popup_fep_char_pre_window

0x7fb6,	// (0x0003f3fa) popup_fep_ituss_window

0xed81,	// (0x000461c5) popup_fep_vkbss_window

0xed8e,	// (0x000461d2) grid_vkbss_keypad_pane_ParamLimits

0xed8e,	// (0x000461d2) grid_vkbss_keypad_pane

0x8011,	// (0x0003f455) ituss_keypad_pane

0x1f2a,	// (0x0003936e) aid_vkbss_key_offset_ParamLimits

0x1f2a,	// (0x0003936e) aid_vkbss_key_offset

0xb3a5,	// (0x000427e9) cell_vkbss_key_pane_ParamLimits

0xb3a5,	// (0x000427e9) cell_vkbss_key_pane

0x27d8,	// (0x00039c1c) bg_cell_vkbss_key_g1_ParamLimits

0x27d8,	// (0x00039c1c) bg_cell_vkbss_key_g1

0xed9e,	// (0x000461e2) cell_vkbss_key_3p_pane_ParamLimits

0xed9e,	// (0x000461e2) cell_vkbss_key_3p_pane

0xedb8,	// (0x000461fc) cell_vkbss_key_g1_ParamLimits

0xedb8,	// (0x000461fc) cell_vkbss_key_g1

0xedd2,	// (0x00046216) cell_vkbss_key_t1_ParamLimits

0xedd2,	// (0x00046216) cell_vkbss_key_t1

0x1f4c,	// (0x00039390) cell_ituss_key_pane_ParamLimits

0x1f4c,	// (0x00039390) cell_ituss_key_pane

0x8073,	// (0x0003f4b7) bg_cell_ituss_key_g1_ParamLimits

0x8073,	// (0x0003f4b7) bg_cell_ituss_key_g1

0x807f,	// (0x0003f4c3) cell_ituss_key_pane_g1_ParamLimits

0x807f,	// (0x0003f4c3) cell_ituss_key_pane_g1

0x1f5d,	// (0x000393a1) cell_ituss_key_pane_g2_ParamLimits

0x1f5d,	// (0x000393a1) cell_ituss_key_pane_g2

0x0002,

0xfed9,	// (0x0004731d) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x0004731d) cell_ituss_key_pane_g

0x1f89,	// (0x000393cd) cell_ituss_key_t1_ParamLimits

0x1f89,	// (0x000393cd) cell_ituss_key_t1

0x1fc3,	// (0x00039407) cell_ituss_key_t2_ParamLimits

0x1fc3,	// (0x00039407) cell_ituss_key_t2

0x1ff4,	// (0x00039438) cell_ituss_key_t3_ParamLimits

0x1ff4,	// (0x00039438) cell_ituss_key_t3

0x1fc3,	// (0x00039407) cell_ituss_key_t4_ParamLimits

0x1fc3,	// (0x00039407) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x00047324) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x00047324) cell_ituss_key_t

0x80a5,	// (0x0003f4e9) cell_vkbss_key_3p_pane_g1

0x80ad,	// (0x0003f4f1) cell_vkbss_key_3p_pane_g2

0x80b5,	// (0x0003f4f9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x0004732f) cell_vkbss_key_3p_pane_g

0xeeba,	// (0x000462fe) bg_popup_fep_char_preview_window_cp02

0x2037,	// (0x0003947b) popup_fep_char_pre_window_t1

0xe958,	// (0x00045d9c) main_ai5_sk_pane

0x7bc7,	// (0x0003f00b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7bd3,	// (0x0003f017) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x55ea,	// (0x0003ca2e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7be8,	// (0x0003f02c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x00047301) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7bf4,	// (0x0003f038) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb7e5,	// (0x00042c29) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xedfd,	// (0x00046241) main_ai5_sk_pane_g1

0xc2de,	// (0x00043722) popup_query_code_window_g1

0x7fcc,	// (0x0003f410) popup_fep_vkb_icf_pane

0x7feb,	// (0x0003f42f) popup_fep_vtchi_icf_pane

0x80c6,	// (0x0003f50a) bg_icf_pane

0x80d2,	// (0x0003f516) list_vkb_icf_pane

0x80e1,	// (0x0003f525) bg_icf_pane_cp01

0x80f4,	// (0x0003f538) vtchi_icf_list_pane

0x8104,	// (0x0003f548) list_vkb_icf_pane_t1_ParamLimits

0x8104,	// (0x0003f548) list_vkb_icf_pane_t1

0x811b,	// (0x0003f55f) vtchi_icf_list_pane_t1_ParamLimits

0x811b,	// (0x0003f55f) vtchi_icf_list_pane_t1

0x7fb6,	// (0x0003f3fa) popup_fep_ituss_window_ParamLimits

0x7feb,	// (0x0003f42f) popup_fep_vtchi_icf_pane_ParamLimits

0x8011,	// (0x0003f455) ituss_keypad_pane_ParamLimits

0x1f1e,	// (0x00039362) ituss_sks_pane

0x80c6,	// (0x0003f50a) bg_icf_pane_ParamLimits

0xed72,	// (0x000461b6) icf_edit_indi_pane_ParamLimits

0xed72,	// (0x000461b6) icf_edit_indi_pane

0x80d2,	// (0x0003f516) list_vkb_icf_pane_ParamLimits

0x80e1,	// (0x0003f525) bg_icf_pane_cp01_ParamLimits

0x7fa1,	// (0x0003f3e5) icf_edit_indi_pane_cp01_ParamLimits

0x7fa1,	// (0x0003f3e5) icf_edit_indi_pane_cp01

0x80fc,	// (0x0003f540) vtchi_query_pane

0x51a9,	// (0x0003c5ed) icf_edit_indi_pane_g1_ParamLimits

0x51a9,	// (0x0003c5ed) icf_edit_indi_pane_g1

0x8190,	// (0x0003f5d4) icf_edit_indi_pane_g2_ParamLimits

0x8190,	// (0x0003f5d4) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x00047347) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x00047347) icf_edit_indi_pane_g

0x819f,	// (0x0003f5e3) icf_edit_indi_pane_t1

0x8139,	// (0x0003f57d) bg_input_focus_pane_cp042

0xb727,	// (0x00042b6b) vtchi_button_pane

0x8142,	// (0x0003f586) vtchi_query_pane_t1

0x8150,	// (0x0003f594) vtchi_query_pane_t2

0x815e,	// (0x0003f5a2) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x00047336) vtchi_query_pane_t

0xeeba,	// (0x000462fe) bg_button_pane_cp13

0x816c,	// (0x0003f5b0) vtchi_button_pane_g1

0x2046,	// (0x0003948a) ituss_sks_pane_g1

0x2051,	// (0x00039495) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x0004733d) ituss_sks_pane_g

0x8174,	// (0x0003f5b8) ituss_sks_pane_t1

0x8182,	// (0x0003f5c6) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x00047342) ituss_sks_pane_t

0x49b6,	// (0x0003bdfa) indicator_nsta_pane_cp_g1

0x49be,	// (0x0003be02) indicator_nsta_pane_cp_g2

0x49c6,	// (0x0003be0a) indicator_nsta_pane_cp_g3

0x49b6,	// (0x0003bdfa) indicator_nsta_pane_cp_g4

0x49be,	// (0x0003be02) indicator_nsta_pane_cp_g5

0x49c6,	// (0x0003be0a) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00046ee6) indicator_nsta_pane_cp_g

0xe735,	// (0x00045b79) cell_graphic2_pane_t2_ParamLimits

0xe735,	// (0x00045b79) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x000471f8) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x000471f8) cell_graphic2_pane_t

0xe76e,	// (0x00045bb2) cell_graphic2_control_pane_t1

0x9be6,	// (0x0004102a) signal_pane_g3_ParamLimits

0x9be6,	// (0x0004102a) signal_pane_g3

0x9bfa,	// (0x0004103e) signal_pane_g4_ParamLimits

0x9bfa,	// (0x0004103e) signal_pane_g4

0x7f7c,	// (0x0003f3c0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7f7c,	// (0x0003f3c0) cell_ai5_widget_list_row_pane_t3

0x8093,	// (0x0003f4d7) cell_ituss_key_pane_t1_ParamLimits

0x8093,	// (0x0003f4d7) cell_ituss_key_pane_t1

0x2a6e,	// (0x00039eb2) form_field_data_wide_pane_vc_t2_ParamLimits

0x2a6e,	// (0x00039eb2) form_field_data_wide_pane_vc_t2

0x2a82,	// (0x00039ec6) form_field_data_wide_pane_vc_t3_ParamLimits

0x2a82,	// (0x00039ec6) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00046c32) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00046c32) form_field_data_wide_pane_vc_t

0x467e,	// (0x0003bac2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x467e,	// (0x0003bac2) form_field_slider_wide_pane_vc_t3

0x475c,	// (0x0003bba0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x475c,	// (0x0003bba0) form_field_popup_wide_pane_vc_t2

0x4773,	// (0x0003bbb7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4773,	// (0x0003bbb7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x00046ed5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x00046ed5) form_field_popup_wide_pane_vc_t

0xb1aa,	// (0x000425ee) aid_fshwr2_btn_pane_ParamLimits

0xb1bc,	// (0x00042600) aid_fshwr2_syb_pane_ParamLimits

0xb1ce,	// (0x00042612) aid_fshwr2_txt_pane_ParamLimits

0x157a,	// (0x000389be) fshwr2_bg_pane_ParamLimits

0xb1dd,	// (0x00042621) fshwr2_func_candi_pane_ParamLimits

0xb1fc,	// (0x00042640) fshwr2_hwr_syb_pane_ParamLimits

0xb217,	// (0x0004265b) fshwr2_icf_pane_ParamLimits

0xd70a,	// (0x00044b4e) list_double_graphic_pane_vc_g4_ParamLimits

0xd70a,	// (0x00044b4e) list_double_graphic_pane_vc_g4

0x1f7d,	// (0x000393c1) cell_ituss_key_pane_g3_ParamLimits

0x1f7d,	// (0x000393c1) cell_ituss_key_pane_g3

0x2025,	// (0x00039469) cell_ituss_key_t5_ParamLimits

0x2025,	// (0x00039469) cell_ituss_key_t5

0xed81,	// (0x000461c5) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
