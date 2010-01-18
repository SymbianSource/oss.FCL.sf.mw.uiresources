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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000454ac };

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
0x8fbe,	// (0x0004e46a) Screen

0x8fca,	// (0x0004e476) application_window_ParamLimits

0x8fca,	// (0x0004e476) application_window

0xb735,	// (0x00050be1) screen_g1

0x7ead,	// (0x0004d359) area_bottom_pane_ParamLimits

0x7ead,	// (0x0004d359) area_bottom_pane

0x0738,	// (0x00045be4) area_top_pane_ParamLimits

0x0738,	// (0x00045be4) area_top_pane

0x07d6,	// (0x00045c82) main_pane_ParamLimits

0x07d6,	// (0x00045c82) main_pane

0xb73f,	// (0x00050beb) misc_graphics

0x9d68,	// (0x0004f214) battery_pane_ParamLimits

0x9d68,	// (0x0004f214) battery_pane

0xd939,	// (0x00052de5) bg_status_flat_pane_g8

0xd941,	// (0x00052ded) bg_status_flat_pane_g9

0xd04e,	// (0x000524fa) context_pane_ParamLimits

0xd04e,	// (0x000524fa) context_pane

0x9ed3,	// (0x0004f37f) navi_pane_ParamLimits

0x9ed3,	// (0x0004f37f) navi_pane

0x9f4a,	// (0x0004f3f6) signal_pane_ParamLimits

0x9f4a,	// (0x0004f3f6) signal_pane

0x0008,

0xf88a,	// (0x00054d36) bg_status_flat_pane_g

0x9fda,	// (0x0004f486) status_pane_g1_ParamLimits

0x9fda,	// (0x0004f486) status_pane_g1

0x9ff0,	// (0x0004f49c) status_pane_g2_ParamLimits

0x9ff0,	// (0x0004f49c) status_pane_g2

0xd0b3,	// (0x0005255f) status_pane_g3_ParamLimits

0xd0b3,	// (0x0005255f) status_pane_g3

0x0004,

0xf7bd,	// (0x00054c69) status_pane_g_ParamLimits

0xf7bd,	// (0x00054c69) status_pane_g

0x9ffc,	// (0x0004f4a8) title_pane_ParamLimits

0x9ffc,	// (0x0004f4a8) title_pane

0xa05d,	// (0x0004f509) uni_indicator_pane_ParamLimits

0xa05d,	// (0x0004f509) uni_indicator_pane

0xce87,	// (0x00052333) bg_list_pane_ParamLimits

0xce87,	// (0x00052333) bg_list_pane

0x8da9,	// (0x0004e255) find_pane

0x962e,	// (0x0004eada) listscroll_app_pane_ParamLimits

0x962e,	// (0x0004eada) listscroll_app_pane

0xcea7,	// (0x00052353) listscroll_form_pane

0x8db1,	// (0x0004e25d) listscroll_gen_pane_ParamLimits

0x8db1,	// (0x0004e25d) listscroll_gen_pane

0xcea7,	// (0x00052353) listscroll_set_pane

0xd6e4,	// (0x00052b90) main_idle_act_pane

0xcc75,	// (0x00052121) main_idle_trad_pane

0xcc75,	// (0x00052121) main_list_empty_pane

0xc385,	// (0x00051831) main_midp_pane

0xcec1,	// (0x0005236d) main_pane_g1_ParamLimits

0xcec1,	// (0x0005236d) main_pane_g1

0x963a,	// (0x0004eae6) popup_ai_message_window_ParamLimits

0x963a,	// (0x0004eae6) popup_ai_message_window

0x96f3,	// (0x0004eb9f) popup_fep_china_uni_window_ParamLimits

0x96f3,	// (0x0004eb9f) popup_fep_china_uni_window

0xcef3,	// (0x0005239f) popup_fep_japan_candidate_window_ParamLimits

0xcef3,	// (0x0005239f) popup_fep_japan_candidate_window

0xcf11,	// (0x000523bd) popup_fep_japan_predictive_window_ParamLimits

0xcf11,	// (0x000523bd) popup_fep_japan_predictive_window

0x974d,	// (0x0004ebf9) popup_find_window

0x976a,	// (0x0004ec16) popup_grid_graphic_window_ParamLimits

0x976a,	// (0x0004ec16) popup_grid_graphic_window

0xcf41,	// (0x000523ed) popup_large_graphic_colour_window

0x97fc,	// (0x0004eca8) popup_menu_window_ParamLimits

0x97fc,	// (0x0004eca8) popup_menu_window

0x99c8,	// (0x0004ee74) popup_note_image_window

0x998e,	// (0x0004ee3a) popup_note_wait_window_ParamLimits

0x998e,	// (0x0004ee3a) popup_note_wait_window

0x99e0,	// (0x0004ee8c) popup_note_window_ParamLimits

0x99e0,	// (0x0004ee8c) popup_note_window

0x9a86,	// (0x0004ef32) popup_query_code_window_ParamLimits

0x9a86,	// (0x0004ef32) popup_query_code_window

0xcf67,	// (0x00052413) popup_query_data_code_window_ParamLimits

0xcf67,	// (0x00052413) popup_query_data_code_window

0x9ac0,	// (0x0004ef6c) popup_query_data_window_ParamLimits

0x9ac0,	// (0x0004ef6c) popup_query_data_window

0x9b36,	// (0x0004efe2) popup_query_sat_info_window_ParamLimits

0x9b36,	// (0x0004efe2) popup_query_sat_info_window

0x9bcd,	// (0x0004f079) popup_snote_single_graphic_window_ParamLimits

0x9bcd,	// (0x0004f079) popup_snote_single_graphic_window

0x9bcd,	// (0x0004f079) popup_snote_single_text_window_ParamLimits

0x9bcd,	// (0x0004f079) popup_snote_single_text_window

0xcf7e,	// (0x0005242a) popup_sub_window_general

0xcfc4,	// (0x00052470) popup_window_general_ParamLimits

0xcfc4,	// (0x00052470) popup_window_general

0xcfd9,	// (0x00052485) power_save_pane

0x83c5,	// (0x0004d871) control_pane_g1_ParamLimits

0x83c5,	// (0x0004d871) control_pane_g1

0x137f,	// (0x0004682b) control_pane_g2_ParamLimits

0x137f,	// (0x0004682b) control_pane_g2

0xce69,	// (0x00052315) control_pane_g3_ParamLimits

0xce69,	// (0x00052315) control_pane_g3

0x0007,

0xf7a5,	// (0x00054c51) control_pane_g_ParamLimits

0xf7a5,	// (0x00054c51) control_pane_g

0x8406,	// (0x0004d8b2) control_pane_t1_ParamLimits

0x8406,	// (0x0004d8b2) control_pane_t1

0x8464,	// (0x0004d910) control_pane_t2_ParamLimits

0x8464,	// (0x0004d910) control_pane_t2

0x0002,

0xf7b6,	// (0x00054c62) control_pane_t_ParamLimits

0xf7b6,	// (0x00054c62) control_pane_t

0xcd8a,	// (0x00052236) navi_navi_volume_pane_cp1

0xcd93,	// (0x0005223f) status_small_icon_pane

0xcd9b,	// (0x00052247) status_small_pane_g1_ParamLimits

0xcd9b,	// (0x00052247) status_small_pane_g1

0xcdcf,	// (0x0005227b) status_small_pane_g2_ParamLimits

0xcdcf,	// (0x0005227b) status_small_pane_g2

0xcddb,	// (0x00052287) status_small_pane_g3_ParamLimits

0xcddb,	// (0x00052287) status_small_pane_g3

0xcde7,	// (0x00052293) status_small_pane_g4_ParamLimits

0xcde7,	// (0x00052293) status_small_pane_g4

0xcdf3,	// (0x0005229f) status_small_pane_g5_ParamLimits

0xcdf3,	// (0x0005229f) status_small_pane_g5

0xce02,	// (0x000522ae) status_small_pane_g6_ParamLimits

0xce02,	// (0x000522ae) status_small_pane_g6

0x0007,

0xf794,	// (0x00054c40) status_small_pane_g_ParamLimits

0xf794,	// (0x00054c40) status_small_pane_g

0xce32,	// (0x000522de) status_small_pane_t1

0xce55,	// (0x00052301) status_small_wait_pane_ParamLimits

0xce55,	// (0x00052301) status_small_wait_pane

0x949e,	// (0x0004e94a) aid_levels_signal_ParamLimits

0x949e,	// (0x0004e94a) aid_levels_signal

0x94b6,	// (0x0004e962) signal_pane_g1_ParamLimits

0x94b6,	// (0x0004e962) signal_pane_g1

0x94d1,	// (0x0004e97d) signal_pane_g2_ParamLimits

0x94d1,	// (0x0004e97d) signal_pane_g2

0x0001,

0xf729,	// (0x00054bd5) signal_pane_g_ParamLimits

0xf729,	// (0x00054bd5) signal_pane_g

0xc7b9,	// (0x00051c65) context_pane_g1

0x8fda,	// (0x0004e486) title_pane_g1

0x900f,	// (0x0004e4bb) title_pane_t1

0xb755,	// (0x00050c01) title_pane_t2

0xb77b,	// (0x00050c27) title_pane_t3

0x0002,

0xf573,	// (0x00054a1f) title_pane_t

0xa085,	// (0x0004f531) aid_levels_battery_ParamLimits

0xa085,	// (0x0004f531) aid_levels_battery

0xa0a1,	// (0x0004f54d) battery_pane_g1_ParamLimits

0xa0a1,	// (0x0004f54d) battery_pane_g1

0xa0be,	// (0x0004f56a) battery_pane_g2_ParamLimits

0xa0be,	// (0x0004f56a) battery_pane_g2

0x0001,

0xf7c8,	// (0x00054c74) battery_pane_g_ParamLimits

0xf7c8,	// (0x00054c74) battery_pane_g

0xa303,	// (0x0004f7af) uni_indicator_pane_g1

0xa318,	// (0x0004f7c4) uni_indicator_pane_g2

0xa32d,	// (0x0004f7d9) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x00054dde) uni_indicator_pane_g

0xcae5,	// (0x00051f91) navi_icon_pane_ParamLimits

0xcae5,	// (0x00051f91) navi_icon_pane

0xca2c,	// (0x00051ed8) navi_midp_pane

0xcb01,	// (0x00051fad) navi_navi_pane

0xcb0b,	// (0x00051fb7) navi_text_pane_ParamLimits

0xcb0b,	// (0x00051fb7) navi_text_pane

0xb735,	// (0x00050be1) status_small_wait_pane_g1

0xbd22,	// (0x000511ce) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x00054dd9) status_small_wait_pane_g

0xa2a2,	// (0x0004f74e) navi_navi_icon_text_pane

0xa2aa,	// (0x0004f756) navi_navi_pane_g1_ParamLimits

0xa2aa,	// (0x0004f756) navi_navi_pane_g1

0xa2bc,	// (0x0004f768) navi_navi_pane_g2_ParamLimits

0xa2bc,	// (0x0004f768) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00054da7) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00054da7) navi_navi_pane_g

0xdec8,	// (0x00053374) navi_navi_tabs_pane

0xa2ce,	// (0x0004f77a) navi_navi_text_pane

0xa2a2,	// (0x0004f74e) navi_navi_volume_pane

0xa290,	// (0x0004f73c) navi_text_pane_t1

0xa284,	// (0x0004f730) navi_icon_pane_g1

0xddfd,	// (0x000532a9) navi_navi_text_pane_t1

0x86b3,	// (0x0004db5f) navi_navi_volume_pane_g1

0x86bb,	// (0x0004db67) volume_small_pane

0xa1e0,	// (0x0004f68c) navi_navi_icon_text_pane_g1

0xa1e8,	// (0x0004f694) navi_navi_icon_text_pane_t1

0xcb01,	// (0x00051fad) navi_tabs_2_long_pane

0xcb01,	// (0x00051fad) navi_tabs_2_pane

0xcb01,	// (0x00051fad) navi_tabs_3_long_pane

0xcb01,	// (0x00051fad) navi_tabs_3_pane

0xcb01,	// (0x00051fad) navi_tabs_4_pane

0x8693,	// (0x0004db3f) tabs_2_active_pane_ParamLimits

0x8693,	// (0x0004db3f) tabs_2_active_pane

0x86a3,	// (0x0004db4f) tabs_2_passive_pane_ParamLimits

0x86a3,	// (0x0004db4f) tabs_2_passive_pane

0x8661,	// (0x0004db0d) tabs_3_active_pane_ParamLimits

0x8661,	// (0x0004db0d) tabs_3_active_pane

0x8671,	// (0x0004db1d) tabs_3_passive_pane_ParamLimits

0x8671,	// (0x0004db1d) tabs_3_passive_pane

0x8682,	// (0x0004db2e) tabs_3_passive_pane_cp_ParamLimits

0x8682,	// (0x0004db2e) tabs_3_passive_pane_cp

0x861d,	// (0x0004dac9) tabs_4_active_pane_ParamLimits

0x861d,	// (0x0004dac9) tabs_4_active_pane

0x862e,	// (0x0004dada) tabs_4_passive_pane_ParamLimits

0x862e,	// (0x0004dada) tabs_4_passive_pane

0x863f,	// (0x0004daeb) tabs_4_passive_pane_cp_ParamLimits

0x863f,	// (0x0004daeb) tabs_4_passive_pane_cp

0x8650,	// (0x0004dafc) tabs_4_passive_pane_cp2_ParamLimits

0x8650,	// (0x0004dafc) tabs_4_passive_pane_cp2

0x85fd,	// (0x0004daa9) tabs_2_long_active_pane_ParamLimits

0x85fd,	// (0x0004daa9) tabs_2_long_active_pane

0x860d,	// (0x0004dab9) tabs_2_long_passive_pane_ParamLimits

0x860d,	// (0x0004dab9) tabs_2_long_passive_pane

0x85c8,	// (0x0004da74) tabs_3_long_active_pane_ParamLimits

0x85c8,	// (0x0004da74) tabs_3_long_active_pane

0x85d9,	// (0x0004da85) tabs_3_long_passive_pane_ParamLimits

0x85d9,	// (0x0004da85) tabs_3_long_passive_pane

0x85ec,	// (0x0004da98) tabs_3_long_passive_pane_cp_ParamLimits

0x85ec,	// (0x0004da98) tabs_3_long_passive_pane_cp

0x15eb,	// (0x00046a97) volume_small_pane_g1

0x8577,	// (0x0004da23) volume_small_pane_g2

0x8580,	// (0x0004da2c) volume_small_pane_g3

0x8589,	// (0x0004da35) volume_small_pane_g4

0x8592,	// (0x0004da3e) volume_small_pane_g5

0x859b,	// (0x0004da47) volume_small_pane_g6

0x85a4,	// (0x0004da50) volume_small_pane_g7

0x85ad,	// (0x0004da59) volume_small_pane_g8

0x85b6,	// (0x0004da62) volume_small_pane_g9

0x85bf,	// (0x0004da6b) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x00054d73) volume_small_pane_g

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp2_ParamLimits

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp2

0x909b,	// (0x0004e547) tabs_3_active_pane_g1

0x90a3,	// (0x0004e54f) tabs_3_active_pane_t1

0xb78d,	// (0x00050c39) bg_passive_tab_pane_cp2_ParamLimits

0xb78d,	// (0x00050c39) bg_passive_tab_pane_cp2

0x909b,	// (0x0004e547) tabs_3_passive_pane_g1

0x90a3,	// (0x0004e54f) tabs_3_passive_pane_t1

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp3_ParamLimits

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp3

0x90b5,	// (0x0004e561) tabs_4_active_pane_g1

0x90bd,	// (0x0004e569) tabs_4_active_pane_t1

0xb78d,	// (0x00050c39) bg_passive_tab_pane_cp3_ParamLimits

0xb78d,	// (0x00050c39) bg_passive_tab_pane_cp3

0x90b5,	// (0x0004e561) tabs_4_1_passive_pane_g1

0x90bd,	// (0x0004e569) tabs_4_1_passive_pane_t1

0xc385,	// (0x00051831) list_highlight_pane_cp2

0xa3ba,	// (0x0004f866) list_set_pane_ParamLimits

0xa3ba,	// (0x0004f866) list_set_pane

0xa454,	// (0x0004f900) main_pane_set_t1_ParamLimits

0xa454,	// (0x0004f900) main_pane_set_t1

0xa474,	// (0x0004f920) main_pane_set_t2_ParamLimits

0xa474,	// (0x0004f920) main_pane_set_t2

0xa488,	// (0x0004f934) main_pane_set_t3_ParamLimits

0xa488,	// (0x0004f934) main_pane_set_t3

0xa49a,	// (0x0004f946) main_pane_set_t4_ParamLimits

0xa49a,	// (0x0004f946) main_pane_set_t4

0x0003,

0x0053,	// (0x000454ff) main_pane_set_t_ParamLimits

0x0053,	// (0x000454ff) main_pane_set_t

0xa4ac,	// (0x0004f958) setting_code_pane

0xa4b4,	// (0x0004f960) setting_slider_graphic_pane

0xa4b4,	// (0x0004f960) setting_slider_pane

0xa4b4,	// (0x0004f960) setting_text_pane

0xa4b4,	// (0x0004f960) setting_volume_pane

0x0a07,	// (0x00045eb3) volume_set_pane

0xb79b,	// (0x00050c47) bg_set_opt_pane_cp

0x0a0f,	// (0x00045ebb) setting_slider_pane_t1

0x0a28,	// (0x00045ed4) setting_slider_pane_t2

0x0a41,	// (0x00045eed) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00054a26) setting_slider_pane_t

0x0a58,	// (0x00045f04) slider_set_pane

0xb73f,	// (0x00050beb) bg_set_opt_pane_cp2

0xb7a9,	// (0x00050c55) setting_slider_graphic_pane_g1

0x0a6e,	// (0x00045f1a) setting_slider_graphic_pane_t1

0x0a7d,	// (0x00045f29) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00054a2d) setting_slider_graphic_pane_t

0x0a8c,	// (0x00045f38) slider_set_pane_cp

0xb73f,	// (0x00050beb) input_focus_pane_cp1

0xe311,	// (0x000537bd) list_set_text_pane

0xb735,	// (0x00050be1) setting_text_pane_g1

0xb73f,	// (0x00050beb) input_focus_pane_cp2

0xb735,	// (0x00050be1) setting_code_pane_g1

0xb7b2,	// (0x00050c5e) setting_code_pane_t1

0x0a94,	// (0x00045f40) set_text_pane_t1_ParamLimits

0x0a94,	// (0x00045f40) set_text_pane_t1

0xc295,	// (0x00051741) set_opt_bg_pane_g1

0xc29d,	// (0x00051749) set_opt_bg_pane_g2

0xe2f1,	// (0x0005379d) set_opt_bg_pane_g3

0xc2ad,	// (0x00051759) set_opt_bg_pane_g4

0xc2b5,	// (0x00051761) set_opt_bg_pane_g5

0xc2bd,	// (0x00051769) set_opt_bg_pane_g6

0xe2f9,	// (0x000537a5) set_opt_bg_pane_g7

0xe301,	// (0x000537ad) set_opt_bg_pane_g8

0xe309,	// (0x000537b5) set_opt_bg_pane_g9

0x0008,

0x0040,	// (0x000454ec) set_opt_bg_pane_g

0xe2e4,	// (0x00053790) slider_set_pane_g1

0x17b9,	// (0x00046c65) slider_set_pane_g2

0x0006,

0xf95e,	// (0x00054e0a) slider_set_pane_g

0x1755,	// (0x00046c01) volume_set_pane_g1

0x175d,	// (0x00046c09) volume_set_pane_g2

0x1765,	// (0x00046c11) volume_set_pane_g3

0x176d,	// (0x00046c19) volume_set_pane_g4

0x1775,	// (0x00046c21) volume_set_pane_g5

0x177d,	// (0x00046c29) volume_set_pane_g6

0x1785,	// (0x00046c31) volume_set_pane_g7

0x178d,	// (0x00046c39) volume_set_pane_g8

0x1795,	// (0x00046c41) volume_set_pane_g9

0x179d,	// (0x00046c49) volume_set_pane_g10

0x0009,

0xf944,	// (0x00054df0) volume_set_pane_g

0x90cf,	// (0x0004e57b) indicator_pane_ParamLimits

0x90cf,	// (0x0004e57b) indicator_pane

0x90f7,	// (0x0004e5a3) main_idle_pane_g2_ParamLimits

0x90f7,	// (0x0004e5a3) main_idle_pane_g2

0x912f,	// (0x0004e5db) main_pane_idle_g1_ParamLimits

0x912f,	// (0x0004e5db) main_pane_idle_g1

0xb7c0,	// (0x00050c6c) popup_clock_digital_analogue_window_ParamLimits

0xb7c0,	// (0x00050c6c) popup_clock_digital_analogue_window

0x9156,	// (0x0004e602) soft_indicator_pane_ParamLimits

0x9156,	// (0x0004e602) soft_indicator_pane

0x9170,	// (0x0004e61c) wallpaper_pane_ParamLimits

0x9170,	// (0x0004e61c) wallpaper_pane

0xb735,	// (0x00050be1) wallpaper_pane_g1

0x9182,	// (0x0004e62e) indicator_pane_g1_ParamLimits

0x9182,	// (0x0004e62e) indicator_pane_g1

0xe458,	// (0x00053904) navi_navi_icon_text_pane_srt_g1

0xbaba,	// (0x00050f66) soft_indicator_pane_t1

0xbad4,	// (0x00050f80) aid_ps_area_pane

0x919b,	// (0x0004e647) aid_ps_clock_pane

0xbae5,	// (0x00050f91) aid_ps_indicator_pane

0xbaf1,	// (0x00050f9d) indicator_ps_pane_ParamLimits

0xbaf1,	// (0x00050f9d) indicator_ps_pane

0xbb00,	// (0x00050fac) power_save_pane_g1_ParamLimits

0xbb00,	// (0x00050fac) power_save_pane_g1

0xbb0c,	// (0x00050fb8) power_save_pane_g2_ParamLimits

0xbb0c,	// (0x00050fb8) power_save_pane_g2

0x062c,	// (0x00045ad8) aid_navinavi_width_pane

0xbad4,	// (0x00050f80) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00054a32) power_save_pane_g_ParamLimits

0xf586,	// (0x00054a32) power_save_pane_g

0xbb1a,	// (0x00050fc6) power_save_pane_t1_ParamLimits

0xbb1a,	// (0x00050fc6) power_save_pane_t1

0x919b,	// (0x0004e647) aid_ps_clock_pane_ParamLimits

0xbae5,	// (0x00050f91) aid_ps_indicator_pane_ParamLimits

0xbb2c,	// (0x00050fd8) power_save_pane_t4_ParamLimits

0xbb2c,	// (0x00050fd8) power_save_pane_t4

0x0001,

0xf58b,	// (0x00054a37) power_save_pane_t_ParamLimits

0xf58b,	// (0x00054a37) power_save_pane_t

0xbb56,	// (0x00051002) power_save_t3_ParamLimits

0xbb56,	// (0x00051002) power_save_t3

0xbb41,	// (0x00050fed) power_save_t2_ParamLimits

0xbb41,	// (0x00050fed) power_save_t2

0xbb6b,	// (0x00051017) indicator_ps_pane_g1

0x91a9,	// (0x0004e655) ai_gene_pane_ParamLimits

0x91a9,	// (0x0004e655) ai_gene_pane

0x91c0,	// (0x0004e66c) ai_links_pane_ParamLimits

0x91c0,	// (0x0004e66c) ai_links_pane

0x91d8,	// (0x0004e684) indicator_pane_cp1_ParamLimits

0x91d8,	// (0x0004e684) indicator_pane_cp1

0x91e7,	// (0x0004e693) main_pane_idle_g1_cp_ParamLimits

0x91e7,	// (0x0004e693) main_pane_idle_g1_cp

0xbb74,	// (0x00051020) popup_ai_links_title_window

0x91ff,	// (0x0004e6ab) soft_indicator_pane_cp1_ParamLimits

0x91ff,	// (0x0004e6ab) soft_indicator_pane_cp1

0xe138,	// (0x000535e4) ai_links_pane_g1

0xe141,	// (0x000535ed) grid_ai_links_pane

0xa2fa,	// (0x0004f7a6) ai_gene_pane_1

0xe126,	// (0x000535d2) ai_gene_pane_2

0xe12f,	// (0x000535db) list_highlight_pane_cp4

0xa2d6,	// (0x0004f782) cell_ai_link_pane_ParamLimits

0xa2d6,	// (0x0004f782) cell_ai_link_pane

0xe11e,	// (0x000535ca) cell_ai_link_pane_g1

0xbd22,	// (0x000511ce) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x00054dd4) cell_ai_link_pane_g

0xb73f,	// (0x00050beb) grid_highlight_cp2

0xb73f,	// (0x00050beb) bg_popup_sub_pane_cp1

0xbb8b,	// (0x00051037) popup_ai_links_title_window_t1

0xe06c,	// (0x00053518) ai_gene_pane_1_g1_ParamLimits

0xe06c,	// (0x00053518) ai_gene_pane_1_g1

0xe078,	// (0x00053524) ai_gene_pane_1_g2_ParamLimits

0xe078,	// (0x00053524) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x00054dca) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x00054dca) ai_gene_pane_1_g

0xe085,	// (0x00053531) ai_gene_pane_1_t1_ParamLimits

0xe085,	// (0x00053531) ai_gene_pane_1_t1

0xe0b9,	// (0x00053565) grid_ai_soft_ind_pane

0xe057,	// (0x00053503) ai_gene_pane_2_t1_ParamLimits

0xe057,	// (0x00053503) ai_gene_pane_2_t1

0x9213,	// (0x0004e6bf) main_pane_empty_t1_ParamLimits

0x9213,	// (0x0004e6bf) main_pane_empty_t1

0x922b,	// (0x0004e6d7) main_pane_empty_t2_ParamLimits

0x922b,	// (0x0004e6d7) main_pane_empty_t2

0x9240,	// (0x0004e6ec) main_pane_empty_t3_ParamLimits

0x9240,	// (0x0004e6ec) main_pane_empty_t3

0x9252,	// (0x0004e6fe) main_pane_empty_t4_ParamLimits

0x9252,	// (0x0004e6fe) main_pane_empty_t4

0x9264,	// (0x0004e710) main_pane_empty_t5_ParamLimits

0x9264,	// (0x0004e710) main_pane_empty_t5

0x0004,

0xf590,	// (0x00054a3c) main_pane_empty_t_ParamLimits

0xf590,	// (0x00054a3c) main_pane_empty_t

0xc2e6,	// (0x00051792) bg_popup_window_pane_ParamLimits

0xc2e6,	// (0x00051792) bg_popup_window_pane

0xde17,	// (0x000532c3) find_popup_pane_cp2_ParamLimits

0xde17,	// (0x000532c3) find_popup_pane_cp2

0xde23,	// (0x000532cf) heading_pane_ParamLimits

0xde23,	// (0x000532cf) heading_pane

0xb73f,	// (0x00050beb) bg_popup_sub_pane

0xa205,	// (0x0004f6b1) bg_popup_window_pane_g1_ParamLimits

0xa205,	// (0x0004f6b1) bg_popup_window_pane_g1

0xa214,	// (0x0004f6c0) bg_popup_window_pane_g2_ParamLimits

0xa214,	// (0x0004f6c0) bg_popup_window_pane_g2

0xa220,	// (0x0004f6cc) bg_popup_window_pane_g3_ParamLimits

0xa220,	// (0x0004f6cc) bg_popup_window_pane_g3

0xa22c,	// (0x0004f6d8) bg_popup_window_pane_g4_ParamLimits

0xa22c,	// (0x0004f6d8) bg_popup_window_pane_g4

0xa23b,	// (0x0004f6e7) bg_popup_window_pane_g5_ParamLimits

0xa23b,	// (0x0004f6e7) bg_popup_window_pane_g5

0xa24b,	// (0x0004f6f7) bg_popup_window_pane_g6_ParamLimits

0xa24b,	// (0x0004f6f7) bg_popup_window_pane_g6

0xa257,	// (0x0004f703) bg_popup_window_pane_g7_ParamLimits

0xa257,	// (0x0004f703) bg_popup_window_pane_g7

0xa266,	// (0x0004f712) bg_popup_window_pane_g8_ParamLimits

0xa266,	// (0x0004f712) bg_popup_window_pane_g8

0xa275,	// (0x0004f721) bg_popup_window_pane_g9_ParamLimits

0xa275,	// (0x0004f721) bg_popup_window_pane_g9

0xddf1,	// (0x0005329d) bg_popup_window_pane_g10_ParamLimits

0xddf1,	// (0x0005329d) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00054d92) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00054d92) bg_popup_window_pane_g

0xdda8,	// (0x00053254) bg_popup_heading_pane_ParamLimits

0xdda8,	// (0x00053254) bg_popup_heading_pane

0x1841,	// (0x00046ced) tabs_4_passive_pane_cp_srt_ParamLimits

0x1841,	// (0x00046ced) tabs_4_passive_pane_cp_srt

0x1853,	// (0x00046cff) tabs_4_passive_pane_srt_ParamLimits

0xddbc,	// (0x00053268) heading_pane_g2

0x1853,	// (0x00046cff) tabs_4_passive_pane_srt

0xd297,	// (0x00052743) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd297,	// (0x00052743) bg_passive_tab_pane_cp3_srt

0xddc4,	// (0x00053270) heading_pane_t1_ParamLimits

0xddc4,	// (0x00053270) heading_pane_t1

0xdddb,	// (0x00053287) heading_pane_t2_ParamLimits

0xdddb,	// (0x00053287) heading_pane_t2

0x0001,

0xf8e1,	// (0x00054d8d) heading_pane_t_ParamLimits

0xf8e1,	// (0x00054d8d) heading_pane_t

0xd901,	// (0x00052dad) bg_popup_heading_pane_g1

0xd992,	// (0x00052e3e) bg_popup_heading_pane_g2

0xd99c,	// (0x00052e48) bg_popup_heading_pane_g3

0xd9a6,	// (0x00052e52) bg_popup_heading_pane_g4

0xd9b0,	// (0x00052e5c) bg_popup_heading_pane_g5

0xd9ba,	// (0x00052e66) bg_popup_heading_pane_g6

0xd9c2,	// (0x00052e6e) bg_popup_heading_pane_g7

0xd9ca,	// (0x00052e76) bg_popup_heading_pane_g8

0xd9d4,	// (0x00052e80) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x00054d49) bg_popup_heading_pane_g

0xd1a7,	// (0x00052653) bg_popup_sub_pane_g1

0xd1b7,	// (0x00052663) bg_popup_sub_pane_g2

0xd1af,	// (0x0005265b) bg_popup_sub_pane_g3

0xd1c7,	// (0x00052673) bg_popup_sub_pane_g4

0xd1bf,	// (0x0005266b) bg_popup_sub_pane_g5

0xd1cf,	// (0x0005267b) bg_popup_sub_pane_g6

0xd1d7,	// (0x00052683) bg_popup_sub_pane_g7

0xd1e7,	// (0x00052693) bg_popup_sub_pane_g8

0xd1df,	// (0x0005268b) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x00054d23) bg_popup_sub_pane_g

0xb78d,	// (0x00050c39) bg_popup_window_pane_cp5_ParamLimits

0xb78d,	// (0x00050c39) bg_popup_window_pane_cp5

0xbba8,	// (0x00051054) popup_note_window_g1_ParamLimits

0xbba8,	// (0x00051054) popup_note_window_g1

0xbbb4,	// (0x00051060) popup_note_window_t1_ParamLimits

0xbbb4,	// (0x00051060) popup_note_window_t1

0xbbc6,	// (0x00051072) popup_note_window_t2_ParamLimits

0xbbc6,	// (0x00051072) popup_note_window_t2

0xbbd8,	// (0x00051084) popup_note_window_t3_ParamLimits

0xbbd8,	// (0x00051084) popup_note_window_t3

0xbbea,	// (0x00051096) popup_note_window_t4_ParamLimits

0xbbea,	// (0x00051096) popup_note_window_t4

0xbc12,	// (0x000510be) popup_note_window_t5_ParamLimits

0xbc12,	// (0x000510be) popup_note_window_t5

0x0004,

0xf59b,	// (0x00054a47) popup_note_window_t_ParamLimits

0xf59b,	// (0x00054a47) popup_note_window_t

0xbc36,	// (0x000510e2) bg_popup_window_pane_cp6_ParamLimits

0xbc36,	// (0x000510e2) bg_popup_window_pane_cp6

0xd875,	// (0x00052d21) popup_note_image_window_g1_ParamLimits

0xd875,	// (0x00052d21) popup_note_image_window_g1

0xd881,	// (0x00052d2d) popup_note_image_window_g2_ParamLimits

0xd881,	// (0x00052d2d) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00054d17) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00054d17) popup_note_image_window_g

0xd89a,	// (0x00052d46) popup_note_image_window_t1_ParamLimits

0xd89a,	// (0x00052d46) popup_note_image_window_t1

0xd8b3,	// (0x00052d5f) popup_note_image_window_t2_ParamLimits

0xd8b3,	// (0x00052d5f) popup_note_image_window_t2

0xd8cc,	// (0x00052d78) popup_note_image_window_t3_ParamLimits

0xd8cc,	// (0x00052d78) popup_note_image_window_t3

0x0002,

0xf870,	// (0x00054d1c) popup_note_image_window_t_ParamLimits

0xf870,	// (0x00054d1c) popup_note_image_window_t

0xd752,	// (0x00052bfe) bg_popup_window_pane_cp7_ParamLimits

0xd752,	// (0x00052bfe) bg_popup_window_pane_cp7

0xd782,	// (0x00052c2e) popup_note_wait_window_g1_ParamLimits

0xd782,	// (0x00052c2e) popup_note_wait_window_g1

0xd78e,	// (0x00052c3a) popup_note_wait_window_g2_ParamLimits

0xd78e,	// (0x00052c3a) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x00054d05) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x00054d05) popup_note_wait_window_g

0xd7a6,	// (0x00052c52) popup_note_wait_window_t1_ParamLimits

0xd7a6,	// (0x00052c52) popup_note_wait_window_t1

0xd7cd,	// (0x00052c79) popup_note_wait_window_t2_ParamLimits

0xd7cd,	// (0x00052c79) popup_note_wait_window_t2

0xd7ea,	// (0x00052c96) popup_note_wait_window_t3_ParamLimits

0xd7ea,	// (0x00052c96) popup_note_wait_window_t3

0xd7fd,	// (0x00052ca9) popup_note_wait_window_t4_ParamLimits

0xd7fd,	// (0x00052ca9) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x00054d0c) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x00054d0c) popup_note_wait_window_t

0xd822,	// (0x00052cce) wait_bar_pane_ParamLimits

0xd822,	// (0x00052cce) wait_bar_pane

0xb73f,	// (0x00050beb) wait_anim_pane

0xb73f,	// (0x00050beb) wait_border_pane

0xb735,	// (0x00050be1) wait_anim_pane_g1

0xb735,	// (0x00050be1) wait_anim_pane_g2

0x0001,

0xf724,	// (0x00054bd0) wait_anim_pane_g

0xd6f6,	// (0x00052ba2) wait_border_pane_g1

0xd701,	// (0x00052bad) wait_border_pane_g2

0xd70a,	// (0x00052bb6) wait_border_pane_g3

0x0002,

0xf852,	// (0x00054cfe) wait_border_pane_g

0xd554,	// (0x00052a00) bg_popup_window_pane_cp16_ParamLimits

0xd554,	// (0x00052a00) bg_popup_window_pane_cp16

0xd654,	// (0x00052b00) indicator_popup_pane_cp4_ParamLimits

0xd654,	// (0x00052b00) indicator_popup_pane_cp4

0xd668,	// (0x00052b14) popup_query_data_window_t1_ParamLimits

0xd668,	// (0x00052b14) popup_query_data_window_t1

0xd67a,	// (0x00052b26) popup_query_data_window_t2_ParamLimits

0xd67a,	// (0x00052b26) popup_query_data_window_t2

0xd693,	// (0x00052b3f) popup_query_data_window_t3_ParamLimits

0xd693,	// (0x00052b3f) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00054cf7) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00054cf7) popup_query_data_window_t

0xd6ad,	// (0x00052b59) query_popup_data_pane_ParamLimits

0xd6ad,	// (0x00052b59) query_popup_data_pane

0xd6c1,	// (0x00052b6d) query_popup_data_pane_cp1_ParamLimits

0xd6c1,	// (0x00052b6d) query_popup_data_pane_cp1

0xd554,	// (0x00052a00) bg_popup_window_pane_cp10_ParamLimits

0xd554,	// (0x00052a00) bg_popup_window_pane_cp10

0xd586,	// (0x00052a32) indicator_popup_pane_ParamLimits

0xd586,	// (0x00052a32) indicator_popup_pane

0xd5a8,	// (0x00052a54) popup_query_code_window_t1_ParamLimits

0xd5a8,	// (0x00052a54) popup_query_code_window_t1

0xd5c2,	// (0x00052a6e) popup_query_code_window_t2_ParamLimits

0xd5c2,	// (0x00052a6e) popup_query_code_window_t2

0xd60b,	// (0x00052ab7) popup_query_code_window_t3_ParamLimits

0xd60b,	// (0x00052ab7) popup_query_code_window_t3

0x0002,

0xf844,	// (0x00054cf0) popup_query_code_window_t_ParamLimits

0xf844,	// (0x00054cf0) popup_query_code_window_t

0xd63a,	// (0x00052ae6) query_popup_pane_ParamLimits

0xd63a,	// (0x00052ae6) query_popup_pane

0xbc36,	// (0x000510e2) bg_popup_window_pane_cp15_ParamLimits

0xbc36,	// (0x000510e2) bg_popup_window_pane_cp15

0xbc54,	// (0x00051100) indicator_popup_pane_cp1_ParamLimits

0xbc54,	// (0x00051100) indicator_popup_pane_cp1

0xbc67,	// (0x00051113) indicator_popup_pane_cp2_ParamLimits

0xbc67,	// (0x00051113) indicator_popup_pane_cp2

0xbc7a,	// (0x00051126) popup_query_data_code_window_g1_ParamLimits

0xbc7a,	// (0x00051126) popup_query_data_code_window_g1

0xbc8d,	// (0x00051139) popup_query_data_code_window_t1_ParamLimits

0xbc8d,	// (0x00051139) popup_query_data_code_window_t1

0xbc9f,	// (0x0005114b) popup_query_data_code_window_t2_ParamLimits

0xbc9f,	// (0x0005114b) popup_query_data_code_window_t2

0xbcb1,	// (0x0005115d) popup_query_data_code_window_t3_ParamLimits

0xbcb1,	// (0x0005115d) popup_query_data_code_window_t3

0xbcc7,	// (0x00051173) popup_query_data_code_window_t4_ParamLimits

0xbcc7,	// (0x00051173) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00054a52) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00054a52) popup_query_data_code_window_t

0x14fe,	// (0x000469aa) list_single_midp_graphic_pane_g3

0xbcdf,	// (0x0005118b) query_popup_data_pane_cp2_ParamLimits

0xbcf2,	// (0x0005119e) query_popup_pane_cp2_ParamLimits

0xbcf2,	// (0x0005119e) query_popup_pane_cp2

0xb73f,	// (0x00050beb) bg_popup_window_pane_cp11

0xd54c,	// (0x000529f8) heading_pane_cp5

0xbe63,	// (0x0005130f) listscroll_popup_info_pane

0xb73f,	// (0x00050beb) input_focus_pane_cp3

0xbd05,	// (0x000511b1) query_popup_pane_t1

0xbd13,	// (0x000511bf) list_popup_info_pane_ParamLimits

0xbd13,	// (0x000511bf) list_popup_info_pane

0xbd22,	// (0x000511ce) listscroll_popup_info_pane_g1

0xbd2a,	// (0x000511d6) scroll_pane_cp7

0xbd34,	// (0x000511e0) popup_info_list_pane_t1_ParamLimits

0xbd34,	// (0x000511e0) popup_info_list_pane_t1

0xbe31,	// (0x000512dd) popup_info_list_pane_t2_ParamLimits

0xbe31,	// (0x000512dd) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00054a5b) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00054a5b) popup_info_list_pane_t

0xb73f,	// (0x00050beb) bg_popup_window_pane_cp12

0xe472,	// (0x0005391e) find_popup_pane

0xb79b,	// (0x00050c47) bg_popup_window_pane_cp3

0xbe4b,	// (0x000512f7) heading_pane_cp3

0xbe57,	// (0x00051303) listscroll_popup_graphic_pane

0xb73f,	// (0x00050beb) bg_popup_window_pane_cp4

0x92c6,	// (0x0004e772) heading_pane_cp4

0xbe63,	// (0x0005130f) listscroll_popup_colour_pane

0xbe6b,	// (0x00051317) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbe6b,	// (0x00051317) cell_large_graphic_colour_none_popup_pane

0x92ce,	// (0x0004e77a) grid_large_graphic_colour_popup_pane_ParamLimits

0x92ce,	// (0x0004e77a) grid_large_graphic_colour_popup_pane

0xbe7f,	// (0x0005132b) listscroll_popup_colour_pane_g1_ParamLimits

0xbe7f,	// (0x0005132b) listscroll_popup_colour_pane_g1

0xbe96,	// (0x00051342) listscroll_popup_colour_pane_g2_ParamLimits

0xbe96,	// (0x00051342) listscroll_popup_colour_pane_g2

0xbead,	// (0x00051359) listscroll_popup_colour_pane_g3_ParamLimits

0xbead,	// (0x00051359) listscroll_popup_colour_pane_g3

0x92f2,	// (0x0004e79e) listscroll_popup_colour_pane_g4_ParamLimits

0x92f2,	// (0x0004e79e) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00054a60) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00054a60) listscroll_popup_colour_pane_g

0xbebd,	// (0x00051369) scroll_pane_cp6_ParamLimits

0xbebd,	// (0x00051369) scroll_pane_cp6

0x9301,	// (0x0004e7ad) cell_large_graphic_colour_popup_pane_ParamLimits

0x9301,	// (0x0004e7ad) cell_large_graphic_colour_popup_pane

0xbecf,	// (0x0005137b) cell_large_graphic_colour_none_popup_pane_t1

0xb73f,	// (0x00050beb) grid_highlight_pane_cp5

0xbede,	// (0x0005138a) cell_large_graphic_colour_popup_pane_g1

0xbee6,	// (0x00051392) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00054a69) cell_large_graphic_colour_popup_pane_g

0xbeee,	// (0x0005139a) cell_large_graphic_colour_popup_pane_g2_copy1

0xbef7,	// (0x000513a3) grid_highlight_pane_cp4

0xbeff,	// (0x000513ab) bg_popup_window_pane_cp8_ParamLimits

0xbeff,	// (0x000513ab) bg_popup_window_pane_cp8

0xbf1a,	// (0x000513c6) popup_snote_single_text_window_g1_ParamLimits

0xbf1a,	// (0x000513c6) popup_snote_single_text_window_g1

0xbf2c,	// (0x000513d8) popup_snote_single_text_window_t1_ParamLimits

0xbf2c,	// (0x000513d8) popup_snote_single_text_window_t1

0xbf3f,	// (0x000513eb) popup_snote_single_text_window_t2_ParamLimits

0xbf3f,	// (0x000513eb) popup_snote_single_text_window_t2

0xbf52,	// (0x000513fe) popup_snote_single_text_window_t3_ParamLimits

0xbf52,	// (0x000513fe) popup_snote_single_text_window_t3

0xbf8b,	// (0x00051437) popup_snote_single_text_window_t4_ParamLimits

0xbf8b,	// (0x00051437) popup_snote_single_text_window_t4

0xbfbf,	// (0x0005146b) popup_snote_single_text_window_t5_ParamLimits

0xbfbf,	// (0x0005146b) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00054a6e) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00054a6e) popup_snote_single_text_window_t

0xbfee,	// (0x0005149a) bg_popup_window_pane_cp9_ParamLimits

0xbfee,	// (0x0005149a) bg_popup_window_pane_cp9

0xbf1a,	// (0x000513c6) popup_snote_single_graphic_window_g1_ParamLimits

0xbf1a,	// (0x000513c6) popup_snote_single_graphic_window_g1

0xbffc,	// (0x000514a8) popup_snote_single_graphic_window_g2_ParamLimits

0xbffc,	// (0x000514a8) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00054a79) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00054a79) popup_snote_single_graphic_window_g

0xc008,	// (0x000514b4) popup_snote_single_graphic_window_t1_ParamLimits

0xc008,	// (0x000514b4) popup_snote_single_graphic_window_t1

0xc01b,	// (0x000514c7) popup_snote_single_graphic_window_t2_ParamLimits

0xc01b,	// (0x000514c7) popup_snote_single_graphic_window_t2

0xc02e,	// (0x000514da) popup_snote_single_graphic_window_t3_ParamLimits

0xc02e,	// (0x000514da) popup_snote_single_graphic_window_t3

0xc067,	// (0x00051513) popup_snote_single_graphic_window_t4_ParamLimits

0xc067,	// (0x00051513) popup_snote_single_graphic_window_t4

0xc09b,	// (0x00051547) popup_snote_single_graphic_window_t5_ParamLimits

0xc09b,	// (0x00051547) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00054a7e) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00054a7e) popup_snote_single_graphic_window_t

0xe3f6,	// (0x000538a2) grid_graphic_popup_pane_ParamLimits

0xe3f6,	// (0x000538a2) grid_graphic_popup_pane

0xe422,	// (0x000538ce) listscroll_popup_graphic_pane_g1_ParamLimits

0xe422,	// (0x000538ce) listscroll_popup_graphic_pane_g1

0xa5b2,	// (0x0004fa5e) listscroll_popup_graphic_pane_g2_ParamLimits

0xa5b2,	// (0x0004fa5e) listscroll_popup_graphic_pane_g2

0x0001,

0x007d,	// (0x00045529) listscroll_popup_graphic_pane_g_ParamLimits

0x007d,	// (0x00045529) listscroll_popup_graphic_pane_g

0xde0b,	// (0x000532b7) scroll_pane_cp5

0xa575,	// (0x0004fa21) cell_graphic_popup_pane_ParamLimits

0xa575,	// (0x0004fa21) cell_graphic_popup_pane

0xe3c1,	// (0x0005386d) cell_graphic_popup_pane_g1

0xe3c9,	// (0x00053875) cell_graphic_popup_pane_g2

0xbeee,	// (0x0005139a) cell_graphic_popup_pane_g3

0x0002,

0xf96d,	// (0x00054e19) cell_graphic_popup_pane_g

0xe3d2,	// (0x0005387e) cell_graphic_popup_pane_t2

0xbef7,	// (0x000513a3) grid_highlight_pane_cp3

0xc0dc,	// (0x00051588) list_gen_pane_ParamLimits

0xc0dc,	// (0x00051588) list_gen_pane

0xc104,	// (0x000515b0) scroll_pane

0xa530,	// (0x0004f9dc) bg_list_pane_g1_ParamLimits

0xa530,	// (0x0004f9dc) bg_list_pane_g1

0xe370,	// (0x0005381c) bg_list_pane_g2_ParamLimits

0xe370,	// (0x0005381c) bg_list_pane_g2

0xe383,	// (0x0005382f) bg_list_pane_g3_ParamLimits

0xe383,	// (0x0005382f) bg_list_pane_g3

0xe395,	// (0x00053841) bg_list_pane_g4_ParamLimits

0xe395,	// (0x00053841) bg_list_pane_g4

0xa54b,	// (0x0004f9f7) bg_list_pane_g5_ParamLimits

0xa54b,	// (0x0004f9f7) bg_list_pane_g5

0x0004,

0x006b,	// (0x00045517) bg_list_pane_g_ParamLimits

0x006b,	// (0x00045517) bg_list_pane_g

0xa4f6,	// (0x0004f9a2) list_double2_graphic_large_graphic_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double2_graphic_large_graphic_pane

0xa4f6,	// (0x0004f9a2) list_double2_graphic_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double2_graphic_pane

0xa4f6,	// (0x0004f9a2) list_double2_large_graphic_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double2_large_graphic_pane

0xa4f6,	// (0x0004f9a2) list_double2_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double2_pane

0xa4f6,	// (0x0004f9a2) list_double_graphic_heading_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double_graphic_heading_pane

0xa4f6,	// (0x0004f9a2) list_double_graphic_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double_graphic_pane

0xa4f6,	// (0x0004f9a2) list_double_heading_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double_heading_pane

0xa4f6,	// (0x0004f9a2) list_double_large_graphic_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double_large_graphic_pane

0xa4f6,	// (0x0004f9a2) list_double_number_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double_number_pane

0xa4f6,	// (0x0004f9a2) list_double_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double_pane

0xa4f6,	// (0x0004f9a2) list_double_time_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_double_time_pane

0xa4f6,	// (0x0004f9a2) list_setting_number_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_setting_number_pane

0xa4f6,	// (0x0004f9a2) list_setting_pane_ParamLimits

0xa4f6,	// (0x0004f9a2) list_setting_pane

0xa509,	// (0x0004f9b5) list_single_2graphic_pane_ParamLimits

0xa509,	// (0x0004f9b5) list_single_2graphic_pane

0xa509,	// (0x0004f9b5) list_single_graphic_heading_pane_ParamLimits

0xa509,	// (0x0004f9b5) list_single_graphic_heading_pane

0xa509,	// (0x0004f9b5) list_single_graphic_pane_ParamLimits

0xa509,	// (0x0004f9b5) list_single_graphic_pane

0xa509,	// (0x0004f9b5) list_single_heading_pane_ParamLimits

0xa509,	// (0x0004f9b5) list_single_heading_pane

0xa509,	// (0x0004f9b5) list_single_large_graphic_pane_ParamLimits

0xa509,	// (0x0004f9b5) list_single_large_graphic_pane

0xa509,	// (0x0004f9b5) list_single_number_heading_pane_ParamLimits

0xa509,	// (0x0004f9b5) list_single_number_heading_pane

0xa509,	// (0x0004f9b5) list_single_number_pane_ParamLimits

0xa509,	// (0x0004f9b5) list_single_number_pane

0xa509,	// (0x0004f9b5) list_single_pane_ParamLimits

0xa509,	// (0x0004f9b5) list_single_pane

0xb73f,	// (0x00050beb) list_highlight_pane_cp1

0x2911,	// (0x00047dbd) list_single_pane_g1_ParamLimits

0x2911,	// (0x00047dbd) list_single_pane_g1

0x291d,	// (0x00047dc9) list_single_pane_g2_ParamLimits

0x291d,	// (0x00047dc9) list_single_pane_g2

0x0001,

0xf5ee,	// (0x00054a9a) list_single_pane_g_ParamLimits

0xf5ee,	// (0x00054a9a) list_single_pane_g

0x3251,	// (0x000486fd) list_single_pane_t1_ParamLimits

0x3251,	// (0x000486fd) list_single_pane_t1

0x2911,	// (0x00047dbd) list_single_number_pane_g1_ParamLimits

0x2911,	// (0x00047dbd) list_single_number_pane_g1

0x291d,	// (0x00047dc9) list_single_number_pane_g2_ParamLimits

0x291d,	// (0x00047dc9) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x00054a9a) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x00054a9a) list_single_number_pane_g

0x301a,	// (0x000484c6) list_single_number_pane_t1_ParamLimits

0x301a,	// (0x000484c6) list_single_number_pane_t1

0x8de0,	// (0x0004e28c) list_single_number_pane_t2_ParamLimits

0x8de0,	// (0x0004e28c) list_single_number_pane_t2

0x0001,

0xf959,	// (0x00054e05) list_single_number_pane_t_ParamLimits

0xf959,	// (0x00054e05) list_single_number_pane_t

0x8026,	// (0x0004d4d2) list_single_graphic_pane_g1_ParamLimits

0x8026,	// (0x0004d4d2) list_single_graphic_pane_g1

0x2911,	// (0x00047dbd) list_single_graphic_pane_g2_ParamLimits

0x2911,	// (0x00047dbd) list_single_graphic_pane_g2

0x291d,	// (0x00047dc9) list_single_graphic_pane_g3_ParamLimits

0x291d,	// (0x00047dc9) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00054a89) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00054a89) list_single_graphic_pane_g

0x8032,	// (0x0004d4de) list_single_graphic_pane_t1_ParamLimits

0x8032,	// (0x0004d4de) list_single_graphic_pane_t1

0x8048,	// (0x0004d4f4) list_single_heading_pane_g1_ParamLimits

0x8048,	// (0x0004d4f4) list_single_heading_pane_g1

0x291d,	// (0x00047dc9) list_single_heading_pane_g2_ParamLimits

0x291d,	// (0x00047dc9) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00054a90) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00054a90) list_single_heading_pane_g

0x805b,	// (0x0004d507) list_single_heading_pane_t1_ParamLimits

0x805b,	// (0x0004d507) list_single_heading_pane_t1

0x8071,	// (0x0004d51d) list_single_heading_pane_t2_ParamLimits

0x8071,	// (0x0004d51d) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00054a95) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00054a95) list_single_heading_pane_t

0x2911,	// (0x00047dbd) list_single_number_heading_pane_g1_ParamLimits

0x2911,	// (0x00047dbd) list_single_number_heading_pane_g1

0x291d,	// (0x00047dc9) list_single_number_heading_pane_g2_ParamLimits

0x291d,	// (0x00047dc9) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x00054a9a) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x00054a9a) list_single_number_heading_pane_g

0x3273,	// (0x0004871f) list_single_number_heading_pane_t1_ParamLimits

0x3273,	// (0x0004871f) list_single_number_heading_pane_t1

0x8083,	// (0x0004d52f) list_single_number_heading_pane_t2_ParamLimits

0x8083,	// (0x0004d52f) list_single_number_heading_pane_t2

0x322b,	// (0x000486d7) list_single_number_heading_pane_t3_ParamLimits

0x322b,	// (0x000486d7) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x00054a9f) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x00054a9f) list_single_number_heading_pane_t

0x8095,	// (0x0004d541) list_single_graphic_heading_pane_g1_ParamLimits

0x8095,	// (0x0004d541) list_single_graphic_heading_pane_g1

0x8b39,	// (0x0004dfe5) list_single_graphic_heading_pane_g4_ParamLimits

0x8b39,	// (0x0004dfe5) list_single_graphic_heading_pane_g4

0x291d,	// (0x00047dc9) list_single_graphic_heading_pane_g5_ParamLimits

0x291d,	// (0x00047dc9) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x00054aa6) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x00054aa6) list_single_graphic_heading_pane_g

0x3273,	// (0x0004871f) list_single_graphic_heading_pane_t1_ParamLimits

0x3273,	// (0x0004871f) list_single_graphic_heading_pane_t1

0x80a9,	// (0x0004d555) list_single_graphic_heading_pane_t2_ParamLimits

0x80a9,	// (0x0004d555) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x00054aad) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x00054aad) list_single_graphic_heading_pane_t

0x3267,	// (0x00048713) list_single_large_graphic_pane_g1_ParamLimits

0x3267,	// (0x00048713) list_single_large_graphic_pane_g1

0x2911,	// (0x00047dbd) list_single_large_graphic_pane_g2_ParamLimits

0x2911,	// (0x00047dbd) list_single_large_graphic_pane_g2

0x291d,	// (0x00047dc9) list_single_large_graphic_pane_g3_ParamLimits

0x291d,	// (0x00047dc9) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x00054ab2) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x00054ab2) list_single_large_graphic_pane_g

0xd701,	// (0x00052bad) wait_border_pane_g2_copy1

0x8b4a,	// (0x0004dff6) list_single_large_graphic_pane_g4_cp2

0x3273,	// (0x0004871f) list_single_large_graphic_pane_t1_ParamLimits

0x3273,	// (0x0004871f) list_single_large_graphic_pane_t1

0x2964,	// (0x00047e10) list_double_pane_g1_ParamLimits

0x2964,	// (0x00047e10) list_double_pane_g1

0x2970,	// (0x00047e1c) list_double_pane_g2_ParamLimits

0x2970,	// (0x00047e1c) list_double_pane_g2

0x0001,

0xf60d,	// (0x00054ab9) list_double_pane_g_ParamLimits

0xf60d,	// (0x00054ab9) list_double_pane_g

0x80c1,	// (0x0004d56d) list_double_pane_t1_ParamLimits

0x80c1,	// (0x0004d56d) list_double_pane_t1

0x80d7,	// (0x0004d583) list_double_pane_t2_ParamLimits

0x80d7,	// (0x0004d583) list_double_pane_t2

0x0001,

0xf612,	// (0x00054abe) list_double_pane_t_ParamLimits

0xf612,	// (0x00054abe) list_double_pane_t

0x80e9,	// (0x0004d595) list_double2_pane_g1_ParamLimits

0x80e9,	// (0x0004d595) list_double2_pane_g1

0x0e13,	// (0x000462bf) list_double2_pane_g2_ParamLimits

0x0e13,	// (0x000462bf) list_double2_pane_g2

0x0001,

0xf617,	// (0x00054ac3) list_double2_pane_g_ParamLimits

0xf617,	// (0x00054ac3) list_double2_pane_g

0x80fa,	// (0x0004d5a6) list_double2_pane_t1_ParamLimits

0x80fa,	// (0x0004d5a6) list_double2_pane_t1

0x8110,	// (0x0004d5bc) list_double2_pane_t2_ParamLimits

0x8110,	// (0x0004d5bc) list_double2_pane_t2

0x0001,

0xf61c,	// (0x00054ac8) list_double2_pane_t_ParamLimits

0xf61c,	// (0x00054ac8) list_double2_pane_t

0x2964,	// (0x00047e10) list_double_number_pane_g1_ParamLimits

0x2964,	// (0x00047e10) list_double_number_pane_g1

0x2970,	// (0x00047e1c) list_double_number_pane_g2_ParamLimits

0x2970,	// (0x00047e1c) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x00054ab9) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x00054ab9) list_double_number_pane_g

0x8122,	// (0x0004d5ce) list_double_number_pane_t1_ParamLimits

0x8122,	// (0x0004d5ce) list_double_number_pane_t1

0x0c86,	// (0x00046132) list_double_number_pane_t2_ParamLimits

0x0c86,	// (0x00046132) list_double_number_pane_t2

0x8134,	// (0x0004d5e0) list_double_number_pane_t3_ParamLimits

0x8134,	// (0x0004d5e0) list_double_number_pane_t3

0x0002,

0xf621,	// (0x00054acd) list_double_number_pane_t_ParamLimits

0xf621,	// (0x00054acd) list_double_number_pane_t

0x0c7a,	// (0x00046126) list_double_graphic_pane_g1_ParamLimits

0x0c7a,	// (0x00046126) list_double_graphic_pane_g1

0x8b52,	// (0x0004dffe) list_double_graphic_pane_g2_ParamLimits

0x8b52,	// (0x0004dffe) list_double_graphic_pane_g2

0x8b61,	// (0x0004e00d) list_double_graphic_pane_g3_ParamLimits

0x8b61,	// (0x0004e00d) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x00054ad4) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x00054ad4) list_double_graphic_pane_g

0x8146,	// (0x0004d5f2) list_double_graphic_pane_t1_ParamLimits

0x8146,	// (0x0004d5f2) list_double_graphic_pane_t1

0x815c,	// (0x0004d608) list_double_graphic_pane_t2_ParamLimits

0x815c,	// (0x0004d608) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x00054add) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x00054add) list_double_graphic_pane_t

0x816e,	// (0x0004d61a) list_double2_graphic_pane_g1_ParamLimits

0x816e,	// (0x0004d61a) list_double2_graphic_pane_g1

0xc1d5,	// (0x00051681) list_double2_graphic_pane_g2_ParamLimits

0xc1d5,	// (0x00051681) list_double2_graphic_pane_g2

0x8b79,	// (0x0004e025) list_double2_graphic_pane_g3_ParamLimits

0x8b79,	// (0x0004e025) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x00054ae2) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x00054ae2) list_double2_graphic_pane_g

0x817a,	// (0x0004d626) list_double2_graphic_pane_t1_ParamLimits

0x817a,	// (0x0004d626) list_double2_graphic_pane_t1

0x8190,	// (0x0004d63c) list_double2_graphic_pane_t2_ParamLimits

0x8190,	// (0x0004d63c) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00054ae9) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00054ae9) list_double2_graphic_pane_t

0x81a2,	// (0x0004d64e) list_double_large_graphic_pane_g1_ParamLimits

0x81a2,	// (0x0004d64e) list_double_large_graphic_pane_g1

0x81c1,	// (0x0004d66d) list_double_large_graphic_pane_g2_ParamLimits

0x81c1,	// (0x0004d66d) list_double_large_graphic_pane_g2

0x2970,	// (0x00047e1c) list_double_large_graphic_pane_g3_ParamLimits

0x2970,	// (0x00047e1c) list_double_large_graphic_pane_g3

0x81d7,	// (0x0004d683) list_double_large_graphic_pane_g4_ParamLimits

0x81d7,	// (0x0004d683) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x00054aee) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x00054aee) list_double_large_graphic_pane_g

0x81ea,	// (0x0004d696) list_double_large_graphic_pane_t1_ParamLimits

0x81ea,	// (0x0004d696) list_double_large_graphic_pane_t1

0x8203,	// (0x0004d6af) list_double_large_graphic_pane_t2_ParamLimits

0x8203,	// (0x0004d6af) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00054af9) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00054af9) list_double_large_graphic_pane_t

0x8b85,	// (0x0004e031) list_double2_large_graphic_pane_g1_ParamLimits

0x8b85,	// (0x0004e031) list_double2_large_graphic_pane_g1

0x8b91,	// (0x0004e03d) list_double2_large_graphic_pane_g2_ParamLimits

0x8b91,	// (0x0004e03d) list_double2_large_graphic_pane_g2

0x8b79,	// (0x0004e025) list_double2_large_graphic_pane_g3_ParamLimits

0x8b79,	// (0x0004e025) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x00054afe) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x00054afe) list_double2_large_graphic_pane_g

0x8215,	// (0x0004d6c1) list_double2_large_graphic_pane_t1_ParamLimits

0x8215,	// (0x0004d6c1) list_double2_large_graphic_pane_t1

0x822b,	// (0x0004d6d7) list_double2_large_graphic_pane_t2_ParamLimits

0x822b,	// (0x0004d6d7) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00054b05) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00054b05) list_double2_large_graphic_pane_t

0x823d,	// (0x0004d6e9) list_double_heading_pane_g1_ParamLimits

0x823d,	// (0x0004d6e9) list_double_heading_pane_g1

0x824e,	// (0x0004d6fa) list_double_heading_pane_g2_ParamLimits

0x824e,	// (0x0004d6fa) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00054b0a) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00054b0a) list_double_heading_pane_g

0x825a,	// (0x0004d706) list_double_heading_pane_t1_ParamLimits

0x825a,	// (0x0004d706) list_double_heading_pane_t1

0x8110,	// (0x0004d5bc) list_double_heading_pane_t2_ParamLimits

0x8110,	// (0x0004d5bc) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x00054b0f) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x00054b0f) list_double_heading_pane_t

0x0c3a,	// (0x000460e6) list_double_graphic_heading_pane_g1_ParamLimits

0x0c3a,	// (0x000460e6) list_double_graphic_heading_pane_g1

0x823d,	// (0x0004d6e9) list_double_graphic_heading_pane_g2_ParamLimits

0x823d,	// (0x0004d6e9) list_double_graphic_heading_pane_g2

0x824e,	// (0x0004d6fa) list_double_graphic_heading_pane_g3_ParamLimits

0x824e,	// (0x0004d6fa) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00054b14) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00054b14) list_double_graphic_heading_pane_g

0x8270,	// (0x0004d71c) list_double_graphic_heading_pane_t1_ParamLimits

0x8270,	// (0x0004d71c) list_double_graphic_heading_pane_t1

0x8190,	// (0x0004d63c) list_double_graphic_heading_pane_t2_ParamLimits

0x8190,	// (0x0004d63c) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x00054b1b) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x00054b1b) list_double_graphic_heading_pane_t

0x8286,	// (0x0004d732) list_double_time_pane_g1_ParamLimits

0x8286,	// (0x0004d732) list_double_time_pane_g1

0x0bcc,	// (0x00046078) list_double_time_pane_g2_ParamLimits

0x0bcc,	// (0x00046078) list_double_time_pane_g2

0x0001,

0xf674,	// (0x00054b20) list_double_time_pane_g_ParamLimits

0xf674,	// (0x00054b20) list_double_time_pane_g

0x8297,	// (0x0004d743) list_double_time_pane_t1_ParamLimits

0x8297,	// (0x0004d743) list_double_time_pane_t1

0x82ad,	// (0x0004d759) list_double_time_pane_t2_ParamLimits

0x82ad,	// (0x0004d759) list_double_time_pane_t2

0x82bf,	// (0x0004d76b) list_double_time_pane_t3_ParamLimits

0x82bf,	// (0x0004d76b) list_double_time_pane_t3

0x82d1,	// (0x0004d77d) list_double_time_pane_t4_ParamLimits

0x82d1,	// (0x0004d77d) list_double_time_pane_t4

0x0003,

0xf679,	// (0x00054b25) list_double_time_pane_t_ParamLimits

0xf679,	// (0x00054b25) list_double_time_pane_t

0x0e07,	// (0x000462b3) list_setting_pane_g1_ParamLimits

0x0e07,	// (0x000462b3) list_setting_pane_g1

0x0e13,	// (0x000462bf) list_setting_pane_g2_ParamLimits

0x0e13,	// (0x000462bf) list_setting_pane_g2

0x0001,

0xf682,	// (0x00054b2e) list_setting_pane_g_ParamLimits

0xf682,	// (0x00054b2e) list_setting_pane_g

0x82e3,	// (0x0004d78f) list_setting_pane_t1_ParamLimits

0x82e3,	// (0x0004d78f) list_setting_pane_t1

0x82fd,	// (0x0004d7a9) list_setting_pane_t2_ParamLimits

0x82fd,	// (0x0004d7a9) list_setting_pane_t2

0x0002,

0xf687,	// (0x00054b33) list_setting_pane_t_ParamLimits

0xf687,	// (0x00054b33) list_setting_pane_t

0x833a,	// (0x0004d7e6) set_value_pane_cp_ParamLimits

0x833a,	// (0x0004d7e6) set_value_pane_cp

0x0e82,	// (0x0004632e) list_setting_number_pane_g1_ParamLimits

0x0e82,	// (0x0004632e) list_setting_number_pane_g1

0x0e8e,	// (0x0004633a) list_setting_number_pane_g2_ParamLimits

0x0e8e,	// (0x0004633a) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x00054b3a) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x00054b3a) list_setting_number_pane_g

0x8346,	// (0x0004d7f2) list_setting_number_pane_t1_ParamLimits

0x8346,	// (0x0004d7f2) list_setting_number_pane_t1

0x835f,	// (0x0004d80b) list_setting_number_pane_t2_ParamLimits

0x835f,	// (0x0004d80b) list_setting_number_pane_t2

0x8379,	// (0x0004d825) list_setting_number_pane_t3_ParamLimits

0x8379,	// (0x0004d825) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x00054b3f) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x00054b3f) list_setting_number_pane_t

0x833a,	// (0x0004d7e6) set_value_pane_ParamLimits

0x833a,	// (0x0004d7e6) set_value_pane

0xc1e1,	// (0x0005168d) bg_set_opt_pane_ParamLimits

0xc1e1,	// (0x0005168d) bg_set_opt_pane

0x29fd,	// (0x00047ea9) set_value_pane_t1

0xc202,	// (0x000516ae) slider_set_pane_cp3

0xc20b,	// (0x000516b7) volume_small_pane_cp

0xc214,	// (0x000516c0) list_form_gen_pane

0xc21d,	// (0x000516c9) scroll_pane_cp8

0x8ba2,	// (0x0004e04e) form_field_data_pane_ParamLimits

0x8ba2,	// (0x0004e04e) form_field_data_pane

0x8bb9,	// (0x0004e065) form_field_data_wide_pane_ParamLimits

0x8bb9,	// (0x0004e065) form_field_data_wide_pane

0x8bd9,	// (0x0004e085) form_field_popup_pane_ParamLimits

0x8bd9,	// (0x0004e085) form_field_popup_pane

0x8bf1,	// (0x0004e09d) form_field_popup_wide_pane_ParamLimits

0x8bf1,	// (0x0004e09d) form_field_popup_wide_pane

0x2a8f,	// (0x00047f3b) form_field_slider_pane_ParamLimits

0x2a8f,	// (0x00047f3b) form_field_slider_pane

0x2aa2,	// (0x00047f4e) form_field_slider_wide_pane_ParamLimits

0x2aa2,	// (0x00047f4e) form_field_slider_wide_pane

0xc22e,	// (0x000516da) data_form_pane

0x8c18,	// (0x0004e0c4) form_field_data_pane_t1

0xc23a,	// (0x000516e6) input_focus_pane

0xc248,	// (0x000516f4) data_form_wide_pane

0x2ae5,	// (0x00047f91) form_field_data_wide_pane_t1

0xbf0c,	// (0x000513b8) input_focus_pane_cp6

0x8c32,	// (0x0004e0de) form_field_popup_pane_t1

0xc23a,	// (0x000516e6) input_focus_pane_cp7

0xc268,	// (0x00051714) list_form_pane

0x2b29,	// (0x00047fd5) form_field_popup_wide_pane_t1

0xc23a,	// (0x000516e6) input_focus_pane_cp8

0xc274,	// (0x00051720) list_form_wide_pane

0x8c54,	// (0x0004e100) form_field_slider_pane_t1_ParamLimits

0x8c54,	// (0x0004e100) form_field_slider_pane_t1

0x8c6c,	// (0x0004e118) form_field_slider_pane_t2_ParamLimits

0x8c6c,	// (0x0004e118) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x00054b4f) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x00054b4f) form_field_slider_pane_t

0xb78d,	// (0x00050c39) input_focus_pane_cp9_ParamLimits

0xb78d,	// (0x00050c39) input_focus_pane_cp9

0x8c81,	// (0x0004e12d) slider_cont_pane_ParamLimits

0x8c81,	// (0x0004e12d) slider_cont_pane

0xc283,	// (0x0005172f) form_field_slider_wide_pane_t1_ParamLimits

0xc283,	// (0x0005172f) form_field_slider_wide_pane_t1

0x2b87,	// (0x00048033) form_field_slider_wide_pane_t2_ParamLimits

0x2b87,	// (0x00048033) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00054b54) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00054b54) form_field_slider_wide_pane_t

0xb78d,	// (0x00050c39) input_focus_pane_cp10_ParamLimits

0xb78d,	// (0x00050c39) input_focus_pane_cp10

0x8c95,	// (0x0004e141) slider_cont_pane_cp1_ParamLimits

0x8c95,	// (0x0004e141) slider_cont_pane_cp1

0x8ca9,	// (0x0004e155) slider_form_pane_cp

0xc295,	// (0x00051741) input_focus_pane_g1

0xc29d,	// (0x00051749) input_focus_pane_g2

0xc2a5,	// (0x00051751) input_focus_pane_g3

0xc2ad,	// (0x00051759) input_focus_pane_g4

0xc2b5,	// (0x00051761) input_focus_pane_g5

0xc2bd,	// (0x00051769) input_focus_pane_g6

0xc2c5,	// (0x00051771) input_focus_pane_g7

0xc2cd,	// (0x00051779) input_focus_pane_g8

0xc2d5,	// (0x00051781) input_focus_pane_g9

0xb735,	// (0x00050be1) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x00054b59) input_focus_pane_g

0xd70a,	// (0x00052bb6) wait_border_pane_g3_copy1

0x8cb1,	// (0x0004e15d) data_form_pane_t1

0xb735,	// (0x00050be1) wait_anim_pane_g1_copy1

0x8df2,	// (0x0004e29e) data_form_wide_pane_t1

0x8ccb,	// (0x0004e177) list_form_graphic_pane_cp_ParamLimits

0x8ccb,	// (0x0004e177) list_form_graphic_pane_cp

0xe319,	// (0x000537c5) slider_form_pane_g1

0xe322,	// (0x000537ce) slider_form_pane_g2

0x0006,

0x005c,	// (0x00045508) slider_form_pane_g

0x8ccb,	// (0x0004e177) list_form_graphic_pane_ParamLimits

0x8ccb,	// (0x0004e177) list_form_graphic_pane

0x2c01,	// (0x000480ad) list_form_graphic_pane_g1

0x2c09,	// (0x000480b5) list_form_graphic_pane_t1_ParamLimits

0x2c09,	// (0x000480b5) list_form_graphic_pane_t1

0xb79b,	// (0x00050c47) list_highlight_pane_cp5_ParamLimits

0xb79b,	// (0x00050c47) list_highlight_pane_cp5

0x8cde,	// (0x0004e18a) find_pane_g1

0xc2dd,	// (0x00051789) input_find_pane

0x8ce7,	// (0x0004e193) input_find_pane_g1_ParamLimits

0x8ce7,	// (0x0004e193) input_find_pane_g1

0x8cf3,	// (0x0004e19f) input_find_pane_t1_ParamLimits

0x8cf3,	// (0x0004e19f) input_find_pane_t1

0x8d08,	// (0x0004e1b4) input_find_pane_t2_ParamLimits

0x8d08,	// (0x0004e1b4) input_find_pane_t2

0x0001,

0xf6c2,	// (0x00054b6e) input_find_pane_t_ParamLimits

0xf6c2,	// (0x00054b6e) input_find_pane_t

0xc2e6,	// (0x00051792) input_focus_pane_cp5_ParamLimits

0xc2e6,	// (0x00051792) input_focus_pane_cp5

0x9336,	// (0x0004e7e2) bg_popup_window_pane_cp2_ParamLimits

0x9336,	// (0x0004e7e2) bg_popup_window_pane_cp2

0x9343,	// (0x0004e7ef) listscroll_menu_pane_ParamLimits

0x9343,	// (0x0004e7ef) listscroll_menu_pane

0x934f,	// (0x0004e7fb) popup_submenu_window_ParamLimits

0x934f,	// (0x0004e7fb) popup_submenu_window

0xc2f4,	// (0x000517a0) find_popup_pane_g1

0xc2fc,	// (0x000517a8) input_popup_find_pane_cp

0xc2e6,	// (0x00051792) input_focus_pane_cp4_ParamLimits

0xc2e6,	// (0x00051792) input_focus_pane_cp4

0xc306,	// (0x000517b2) input_popup_find_pane_t1_ParamLimits

0xc306,	// (0x000517b2) input_popup_find_pane_t1

0xb73f,	// (0x00050beb) bg_popup_sub_pane_cp

0xc334,	// (0x000517e0) listscroll_popup_sub_pane

0xc33c,	// (0x000517e8) list_submenu_pane_ParamLimits

0xc33c,	// (0x000517e8) list_submenu_pane

0xc34d,	// (0x000517f9) scroll_pane_cp4

0xc355,	// (0x00051801) list_single_popup_submenu_pane_ParamLimits

0xc355,	// (0x00051801) list_single_popup_submenu_pane

0xc368,	// (0x00051814) list_single_popup_submenu_pane_g1

0xc370,	// (0x0005181c) list_single_popup_submenu_pane_t1_ParamLimits

0xc370,	// (0x0005181c) list_single_popup_submenu_pane_t1

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp1_ParamLimits

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp1

0x9381,	// (0x0004e82d) tabs_2_active_pane_g1

0x9389,	// (0x0004e835) tabs_2_active_pane_t1

0xb78d,	// (0x00050c39) bg_passive_tab_pane_cp1_ParamLimits

0xb78d,	// (0x00050c39) bg_passive_tab_pane_cp1

0x9381,	// (0x0004e82d) tabs_2_passive_pane_g1

0x9389,	// (0x0004e835) tabs_2_passive_pane_t1

0xb79b,	// (0x00050c47) bg_active_tab_pane_cp4

0x939b,	// (0x0004e847) tabs_2_long_active_pane_t1

0xc385,	// (0x00051831) bg_passive_tab_pane_cp4

0x1506,	// (0x000469b2) list_single_midp_graphic_pane_g4_ParamLimits

0xb79b,	// (0x00050c47) bg_active_tab_pane_cp5

0x93ae,	// (0x0004e85a) tabs_3_long_active_pane_t1

0xc385,	// (0x00051831) bg_passive_tab_pane_cp5

0x1506,	// (0x000469b2) list_single_midp_graphic_pane_g4

0xb79b,	// (0x00050c47) bg_popup_window_pane_cp13_ParamLimits

0xb79b,	// (0x00050c47) bg_popup_window_pane_cp13

0xc39a,	// (0x00051846) listscroll_popup_fast_pane_ParamLimits

0xc39a,	// (0x00051846) listscroll_popup_fast_pane

0xc3a9,	// (0x00051855) grid_popup_fast_pane_ParamLimits

0xc3a9,	// (0x00051855) grid_popup_fast_pane

0xc3bb,	// (0x00051867) scroll_pane_cp9_ParamLimits

0xc3bb,	// (0x00051867) scroll_pane_cp9

0x4a49,	// (0x00049ef5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4a49,	// (0x00049ef5) list_single_graphic_hl_pane_t1_cp2

0xc3df,	// (0x0005188b) input_focus_pane_cp20_ParamLimits

0xc3df,	// (0x0005188b) input_focus_pane_cp20

0xc3ed,	// (0x00051899) query_popup_data_pane_t1_ParamLimits

0xc3ed,	// (0x00051899) query_popup_data_pane_t1

0xc400,	// (0x000518ac) query_popup_data_pane_t2_ParamLimits

0xc400,	// (0x000518ac) query_popup_data_pane_t2

0xc446,	// (0x000518f2) query_popup_data_pane_t3_ParamLimits

0xc446,	// (0x000518f2) query_popup_data_pane_t3

0xc487,	// (0x00051933) query_popup_data_pane_t4_ParamLimits

0xc487,	// (0x00051933) query_popup_data_pane_t4

0xc4c3,	// (0x0005196f) query_popup_data_pane_t5_ParamLimits

0xc4c3,	// (0x0005196f) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x00054b73) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x00054b73) query_popup_data_pane_t

0xc295,	// (0x00051741) bg_set_opt_pane_g1

0xc29d,	// (0x00051749) bg_set_opt_pane_g2

0xc2a5,	// (0x00051751) bg_set_opt_pane_g3

0xc2ad,	// (0x00051759) bg_set_opt_pane_g4

0xc2b5,	// (0x00051761) bg_set_opt_pane_g5

0xc2bd,	// (0x00051769) bg_set_opt_pane_g6

0xc2c5,	// (0x00051771) bg_set_opt_pane_g7

0xc2cd,	// (0x00051779) bg_set_opt_pane_g8

0xc2d5,	// (0x00051781) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x00054b7e) bg_set_opt_pane_g

0x116c,	// (0x00046618) control_top_pane_stacon_ParamLimits

0x116c,	// (0x00046618) control_top_pane_stacon

0x11bf,	// (0x0004666b) signal_pane_stacon_ParamLimits

0x11bf,	// (0x0004666b) signal_pane_stacon

0xc927,	// (0x00051dd3) stacon_top_pane_g1_ParamLimits

0xc927,	// (0x00051dd3) stacon_top_pane_g1

0x11e4,	// (0x00046690) title_pane_stacon_ParamLimits

0x11e4,	// (0x00046690) title_pane_stacon

0x120e,	// (0x000466ba) uni_indicator_pane_stacon_ParamLimits

0x120e,	// (0x000466ba) uni_indicator_pane_stacon

0x1223,	// (0x000466cf) battery_pane_stacon_ParamLimits

0x1223,	// (0x000466cf) battery_pane_stacon

0x1267,	// (0x00046713) control_bottom_pane_stacon_ParamLimits

0x1267,	// (0x00046713) control_bottom_pane_stacon

0x128a,	// (0x00046736) navi_pane_stacon_ParamLimits

0x128a,	// (0x00046736) navi_pane_stacon

0xc949,	// (0x00051df5) stacon_bottom_pane_g1_ParamLimits

0xc949,	// (0x00051df5) stacon_bottom_pane_g1

0x0ecd,	// (0x00046379) aid_levels_signal_lsc_ParamLimits

0x0ecd,	// (0x00046379) aid_levels_signal_lsc

0x0ee4,	// (0x00046390) signal_pane_stacon_g1_ParamLimits

0x0ee4,	// (0x00046390) signal_pane_stacon_g1

0x0ef8,	// (0x000463a4) signal_pane_stacon_g2_ParamLimits

0x0ef8,	// (0x000463a4) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x00054b91) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00054b91) signal_pane_stacon_g

0x0f2d,	// (0x000463d9) title_pane_stacon_t1_ParamLimits

0x0f2d,	// (0x000463d9) title_pane_stacon_t1

0xc507,	// (0x000519b3) uni_indicator_pane_stacon_g1

0xc511,	// (0x000519bd) uni_indicator_pane_stacon_g2

0xc51b,	// (0x000519c7) uni_indicator_pane_stacon_g3

0xc525,	// (0x000519d1) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x00054b9d) uni_indicator_pane_stacon_g

0x0f52,	// (0x000463fe) control_top_pane_stacon_g1

0x0f5a,	// (0x00046406) control_top_pane_stacon_t1_ParamLimits

0x0f5a,	// (0x00046406) control_top_pane_stacon_t1

0x0f91,	// (0x0004643d) aid_levels_battery_lsc_ParamLimits

0x0f91,	// (0x0004643d) aid_levels_battery_lsc

0x0fa9,	// (0x00046455) battery_pane_stacon_g1_ParamLimits

0x0fa9,	// (0x00046455) battery_pane_stacon_g1

0x0fbc,	// (0x00046468) battery_pane_stacon_g2_ParamLimits

0x0fbc,	// (0x00046468) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00054ba6) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00054ba6) battery_pane_stacon_g

0x0ffa,	// (0x000464a6) navi_icon_pane_stacon

0x100e,	// (0x000464ba) navi_navi_pane_stacon

0x0ffa,	// (0x000464a6) navi_text_pane_stacon

0x0f52,	// (0x000463fe) control_bottom_pane_stacon_g1

0x1022,	// (0x000464ce) control_bottom_pane_stacon_t1_ParamLimits

0x1022,	// (0x000464ce) control_bottom_pane_stacon_t1

0x93c0,	// (0x0004e86c) grid_app_pane_ParamLimits

0x93c0,	// (0x0004e86c) grid_app_pane

0x93f6,	// (0x0004e8a2) scroll_pane_cp15_ParamLimits

0x93f6,	// (0x0004e8a2) scroll_pane_cp15

0x940f,	// (0x0004e8bb) cell_app_pane_ParamLimits

0x940f,	// (0x0004e8bb) cell_app_pane

0x9456,	// (0x0004e902) cell_app_pane_g1_ParamLimits

0x9456,	// (0x0004e902) cell_app_pane_g1

0xc549,	// (0x000519f5) cell_app_pane_g2_ParamLimits

0xc549,	// (0x000519f5) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x00054bab) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x00054bab) cell_app_pane_g

0xc555,	// (0x00051a01) cell_app_pane_t1_ParamLimits

0xc555,	// (0x00051a01) cell_app_pane_t1

0xc56c,	// (0x00051a18) grid_highlight_pane_ParamLimits

0xc56c,	// (0x00051a18) grid_highlight_pane

0xc295,	// (0x00051741) cell_highlight_pane_g1

0xc29d,	// (0x00051749) cell_highlight_pane_g2

0xc2a5,	// (0x00051751) cell_highlight_pane_g3

0xc2ad,	// (0x00051759) cell_highlight_pane_g4

0xc2b5,	// (0x00051761) cell_highlight_pane_g5

0xc2bd,	// (0x00051769) cell_highlight_pane_g6

0xc2c5,	// (0x00051771) cell_highlight_pane_g7

0xc2cd,	// (0x00051779) cell_highlight_pane_g8

0xc2d5,	// (0x00051781) cell_highlight_pane_g9

0xb735,	// (0x00050be1) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x00054b59) cell_highlight_pane_g

0xc57d,	// (0x00051a29) bg_scroll_pane

0x106c,	// (0x00046518) scroll_handle_pane

0xc5c4,	// (0x00051a70) scroll_bg_pane_g1

0xc5d9,	// (0x00051a85) scroll_bg_pane_g2

0xc5f1,	// (0x00051a9d) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x00054bb0) scroll_bg_pane_g

0xc606,	// (0x00051ab2) scroll_handle_focus_pane_ParamLimits

0xc606,	// (0x00051ab2) scroll_handle_focus_pane

0xc5c4,	// (0x00051a70) scroll_handle_pane_g1

0xc613,	// (0x00051abf) scroll_handle_pane_g2

0xc5f1,	// (0x00051a9d) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00054bb7) scroll_handle_pane_g

0xc2e6,	// (0x00051792) bg_popup_sub_pane_cp21_ParamLimits

0xc2e6,	// (0x00051792) bg_popup_sub_pane_cp21

0xc627,	// (0x00051ad3) popup_fep_japan_predictive_window_t1_ParamLimits

0xc627,	// (0x00051ad3) popup_fep_japan_predictive_window_t1

0xc63e,	// (0x00051aea) popup_fep_japan_predictive_window_t2_ParamLimits

0xc63e,	// (0x00051aea) popup_fep_japan_predictive_window_t2

0xc671,	// (0x00051b1d) popup_fep_japan_predictive_window_t3_ParamLimits

0xc671,	// (0x00051b1d) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x00054bbe) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x00054bbe) popup_fep_japan_predictive_window_t

0xb73f,	// (0x00050beb) bg_popup_sub_pane_cp23

0xc6a8,	// (0x00051b54) listscroll_japin_cand_pane

0xc6b0,	// (0x00051b5c) popup_fep_japan_candidate_window_t1

0xc6be,	// (0x00051b6a) candidate_pane_ParamLimits

0xc6be,	// (0x00051b6a) candidate_pane

0xc6d0,	// (0x00051b7c) scroll_pane_cp30

0xc6d8,	// (0x00051b84) list_single_popup_jap_candidate_pane_ParamLimits

0xc6d8,	// (0x00051b84) list_single_popup_jap_candidate_pane

0xb73f,	// (0x00050beb) list_highlight_pane_cp30

0xc6ec,	// (0x00051b98) list_single_popup_jap_candidate_pane_t1

0xc6fb,	// (0x00051ba7) level_1_signal

0xc708,	// (0x00051bb4) level_2_signal

0xc715,	// (0x00051bc1) level_3_signal

0xc722,	// (0x00051bce) level_4_signal

0xc72f,	// (0x00051bdb) level_5_signal

0xc73c,	// (0x00051be8) level_6_signal

0xc749,	// (0x00051bf5) level_7_signal

0xc6fb,	// (0x00051ba7) level_1_battery

0xc708,	// (0x00051bb4) level_2_battery

0xc715,	// (0x00051bc1) level_3_battery

0xc722,	// (0x00051bce) level_4_battery

0xc72f,	// (0x00051bdb) level_5_battery

0xc73c,	// (0x00051be8) level_6_battery

0xc749,	// (0x00051bf5) level_7_battery

0xc76e,	// (0x00051c1a) list_menu_pane_ParamLimits

0xc76e,	// (0x00051c1a) list_menu_pane

0xc77f,	// (0x00051c2b) scroll_pane_cp25_ParamLimits

0xc77f,	// (0x00051c2b) scroll_pane_cp25

0xc798,	// (0x00051c44) list_double2_graphic_pane_cp2_ParamLimits

0xc798,	// (0x00051c44) list_double2_graphic_pane_cp2

0xc798,	// (0x00051c44) list_double2_large_graphic_pane_cp2_ParamLimits

0xc798,	// (0x00051c44) list_double2_large_graphic_pane_cp2

0xc798,	// (0x00051c44) list_double2_pane_cp2_ParamLimits

0xc798,	// (0x00051c44) list_double2_pane_cp2

0xc798,	// (0x00051c44) list_double_graphic_pane_cp2_ParamLimits

0xc798,	// (0x00051c44) list_double_graphic_pane_cp2

0xc798,	// (0x00051c44) list_double_large_graphic_pane_cp2_ParamLimits

0xc798,	// (0x00051c44) list_double_large_graphic_pane_cp2

0xc798,	// (0x00051c44) list_double_number_pane_cp2_ParamLimits

0xc798,	// (0x00051c44) list_double_number_pane_cp2

0xc798,	// (0x00051c44) list_double_pane_cp2_ParamLimits

0xc798,	// (0x00051c44) list_double_pane_cp2

0x948b,	// (0x0004e937) list_single_2graphic_pane_cp2_ParamLimits

0x948b,	// (0x0004e937) list_single_2graphic_pane_cp2

0x948b,	// (0x0004e937) list_single_graphic_heading_pane_cp2_ParamLimits

0x948b,	// (0x0004e937) list_single_graphic_heading_pane_cp2

0x948b,	// (0x0004e937) list_single_graphic_pane_cp2_ParamLimits

0x948b,	// (0x0004e937) list_single_graphic_pane_cp2

0x948b,	// (0x0004e937) list_single_heading_pane_cp2_ParamLimits

0x948b,	// (0x0004e937) list_single_heading_pane_cp2

0xc7a8,	// (0x00051c54) list_single_large_graphic_pane_cp2_ParamLimits

0xc7a8,	// (0x00051c54) list_single_large_graphic_pane_cp2

0x948b,	// (0x0004e937) list_single_number_heading_pane_cp2_ParamLimits

0x948b,	// (0x0004e937) list_single_number_heading_pane_cp2

0x948b,	// (0x0004e937) list_single_number_pane_cp2_ParamLimits

0x948b,	// (0x0004e937) list_single_number_pane_cp2

0x948b,	// (0x0004e937) list_single_pane_cp2_ParamLimits

0x948b,	// (0x0004e937) list_single_pane_cp2

0xc7c2,	// (0x00051c6e) bg_popup_sub_pane_cp22

0x111e,	// (0x000465ca) popup_side_volume_key_window_g1

0x1148,	// (0x000465f4) popup_side_volume_key_window_t1

0x1164,	// (0x00046610) volume_small_pane_cp1

0xb78d,	// (0x00050c39) bg_popup_sub_pane_cp24_ParamLimits

0xb78d,	// (0x00050c39) bg_popup_sub_pane_cp24

0xc7d8,	// (0x00051c84) fep_china_uni_candidate_pane_ParamLimits

0xc7d8,	// (0x00051c84) fep_china_uni_candidate_pane

0xc7ec,	// (0x00051c98) fep_china_uni_entry_pane

0xc7fc,	// (0x00051ca8) popup_fep_china_uni_window_g1

0xc818,	// (0x00051cc4) fep_china_uni_entry_pane_g1

0xc820,	// (0x00051ccc) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00054beb) fep_china_uni_entry_pane_g

0xc828,	// (0x00051cd4) fep_entry_item_pane

0xc832,	// (0x00051cde) fep_candidate_item_pane

0xc83a,	// (0x00051ce6) fep_china_uni_candidate_pane_g1

0xc842,	// (0x00051cee) fep_china_uni_candidate_pane_g2

0xc84a,	// (0x00051cf6) fep_china_uni_candidate_pane_g3

0xc852,	// (0x00051cfe) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00054bf0) fep_china_uni_candidate_pane_g

0xb735,	// (0x00050be1) fep_entry_item_pane_g1

0xc85a,	// (0x00051d06) fep_entry_item_pane_t1_ParamLimits

0xc85a,	// (0x00051d06) fep_entry_item_pane_t1

0xc870,	// (0x00051d1c) fep_candidate_item_pane_t1_ParamLimits

0xc870,	// (0x00051d1c) fep_candidate_item_pane_t1

0xc885,	// (0x00051d31) fep_candidate_item_pane_t2_ParamLimits

0xc885,	// (0x00051d31) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00054bf9) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00054bf9) fep_candidate_item_pane_t

0xb79b,	// (0x00050c47) list_highlight_pane_cp31_ParamLimits

0xb79b,	// (0x00050c47) list_highlight_pane_cp31

0xc897,	// (0x00051d43) level_1_signal_lsc

0xc8a0,	// (0x00051d4c) level_2_signal_lsc

0xc8a9,	// (0x00051d55) level_3_signal_lsc

0xc8b2,	// (0x00051d5e) level_4_signal_lsc

0xc8bb,	// (0x00051d67) level_5_signal_lsc

0xc8c4,	// (0x00051d70) level_6_signal_lsc

0xc8cd,	// (0x00051d79) level_7_signal_lsc

0xc8cd,	// (0x00051d79) level_1_battery_lsc

0xc8d6,	// (0x00051d82) level_2_battery_lsc

0xc8df,	// (0x00051d8b) level_3_battery_lsc

0xc8e8,	// (0x00051d94) level_4_battery_lsc

0xc8f1,	// (0x00051d9d) level_5_battery_lsc

0xc8fa,	// (0x00051da6) level_6_battery_lsc

0xc897,	// (0x00051d43) level_7_battery_lsc

0xc903,	// (0x00051daf) scroll_handle_focus_pane_g1

0xc90c,	// (0x00051db8) scroll_handle_focus_pane_g2

0xc915,	// (0x00051dc1) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00054bfe) scroll_handle_focus_pane_g

0x8d1d,	// (0x0004e1c9) list_single_2graphic_pane_g1_ParamLimits

0x8d1d,	// (0x0004e1c9) list_single_2graphic_pane_g1

0x8b39,	// (0x0004dfe5) list_single_2graphic_pane_g2_ParamLimits

0x8b39,	// (0x0004dfe5) list_single_2graphic_pane_g2

0x291d,	// (0x00047dc9) list_single_2graphic_pane_g3_ParamLimits

0x291d,	// (0x00047dc9) list_single_2graphic_pane_g3

0x8d29,	// (0x0004e1d5) list_single_2graphic_pane_g4_ParamLimits

0x8d29,	// (0x0004e1d5) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00054c05) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00054c05) list_single_2graphic_pane_g

0x8d35,	// (0x0004e1e1) list_single_2graphic_pane_t1_ParamLimits

0x8d35,	// (0x0004e1e1) list_single_2graphic_pane_t1

0x8d63,	// (0x0004e20f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8d63,	// (0x0004e20f) list_double2_graphic_large_graphic_pane_g1

0x8b91,	// (0x0004e03d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8b91,	// (0x0004e03d) list_double2_graphic_large_graphic_pane_g2

0x8b79,	// (0x0004e025) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8b79,	// (0x0004e025) list_double2_graphic_large_graphic_pane_g3

0x8d75,	// (0x0004e221) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8d75,	// (0x0004e221) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00054c0e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00054c0e) list_double2_graphic_large_graphic_pane_g

0x8d81,	// (0x0004e22d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8d81,	// (0x0004e22d) list_double2_graphic_large_graphic_pane_t1

0x8d97,	// (0x0004e243) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8d97,	// (0x0004e243) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00054c17) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00054c17) list_double2_graphic_large_graphic_pane_t

0xc9f6,	// (0x00051ea2) popup_fast_swap_window_ParamLimits

0xc9f6,	// (0x00051ea2) popup_fast_swap_window

0xca12,	// (0x00051ebe) popup_side_volume_key_window

0xca2c,	// (0x00051ed8) stacon_top_pane

0xca36,	// (0x00051ee2) status_pane_ParamLimits

0xca36,	// (0x00051ee2) status_pane

0xca2c,	// (0x00051ed8) status_small_pane

0xb73f,	// (0x00050beb) control_pane

0xb73f,	// (0x00050beb) stacon_bottom_pane

0xc21d,	// (0x000516c9) scroll_pane_cp121

0xc214,	// (0x000516c0) set_content_pane

0x94ed,	// (0x0004e999) bg_active_tab_pane_g1_cp1

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp1

0x94f6,	// (0x0004e9a2) bg_active_tab_pane_g3_cp1

0x94ed,	// (0x0004e999) bg_passive_tab_pane_g1_cp1

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp1

0x94f6,	// (0x0004e9a2) bg_passive_tab_pane_g3_cp1

0x94ff,	// (0x0004e9ab) bg_active_tab_pane_g1_cp2

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp2

0x9508,	// (0x0004e9b4) bg_active_tab_pane_g3_cp2

0x94ff,	// (0x0004e9ab) bg_passive_tab_pane_g1_cp2

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp2

0x9508,	// (0x0004e9b4) bg_passive_tab_pane_g3_cp2

0x9511,	// (0x0004e9bd) bg_active_tab_pane_g1_cp3

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp3

0x951a,	// (0x0004e9c6) bg_active_tab_pane_g3_cp3

0x9511,	// (0x0004e9bd) bg_passive_tab_pane_g1_cp3

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp3

0x951a,	// (0x0004e9c6) bg_passive_tab_pane_g3_cp3

0x9523,	// (0x0004e9cf) bg_active_tab_pane_g1_cp4

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp4

0x952c,	// (0x0004e9d8) bg_active_tab_pane_g3_cp4

0x9523,	// (0x0004e9cf) bg_passive_tab_pane_g1_cp4

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp4

0x952c,	// (0x0004e9d8) bg_passive_tab_pane_g3_cp4

0xc965,	// (0x00051e11) bg_active_tab_pane_g1_cp5

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp5

0xc96e,	// (0x00051e1a) bg_active_tab_pane_g3_cp5

0xc965,	// (0x00051e11) bg_passive_tab_pane_g1_cp5

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp5

0xc96e,	// (0x00051e1a) bg_passive_tab_pane_g3_cp5

0x6b36,	// (0x0004bfe2) list_set_graphic_pane_ParamLimits

0x6b36,	// (0x0004bfe2) list_set_graphic_pane

0xb73f,	// (0x00050beb) bg_set_opt_pane_cp4

0xc977,	// (0x00051e23) list_set_graphic_pane_g1_ParamLimits

0xc977,	// (0x00051e23) list_set_graphic_pane_g1

0xc983,	// (0x00051e2f) list_set_graphic_pane_g2_ParamLimits

0xc983,	// (0x00051e2f) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00054c1c) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00054c1c) list_set_graphic_pane_g

0x0009,

0xf9da,	// (0x00054e86) volume_small_pane_cp_g

0xc9a7,	// (0x00051e53) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc9a7,	// (0x00051e53) list_double2_large_graphic_pane_g1_cp2

0xc9b5,	// (0x00051e61) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc9b5,	// (0x00051e61) list_double2_large_graphic_pane_g2_cp2

0xc9c6,	// (0x00051e72) list_double2_large_graphic_pane_g3_cp2

0xc9ce,	// (0x00051e7a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc9ce,	// (0x00051e7a) list_double2_large_graphic_pane_t1_cp2

0xc9e4,	// (0x00051e90) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc9e4,	// (0x00051e90) list_double2_large_graphic_pane_t2_cp2

0xe0c9,	// (0x00053575) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe0c9,	// (0x00053575) list_double_large_graphic_pane_g1_cp2

0xe0dc,	// (0x00053588) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe0dc,	// (0x00053588) list_double_large_graphic_pane_g2_cp2

0xcb54,	// (0x00052000) list_double_large_graphic_pane_g3_cp2

0xe0ed,	// (0x00053599) list_double_large_graphic_pane_g4_cp

0xe0f5,	// (0x000535a1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe0f5,	// (0x000535a1) list_double_large_graphic_pane_t1_cp2

0xe10c,	// (0x000535b8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe10c,	// (0x000535b8) list_double_large_graphic_pane_t2_cp2

0xca44,	// (0x00051ef0) list_double2_graphic_pane_g1_cp2_ParamLimits

0xca44,	// (0x00051ef0) list_double2_graphic_pane_g1_cp2

0xca52,	// (0x00051efe) list_double2_graphic_pane_g2_cp2_ParamLimits

0xca52,	// (0x00051efe) list_double2_graphic_pane_g2_cp2

0xca63,	// (0x00051f0f) list_double2_graphic_pane_g3_cp2

0xca6d,	// (0x00051f19) list_double2_graphic_pane_t1_cp2_ParamLimits

0xca6d,	// (0x00051f19) list_double2_graphic_pane_t1_cp2

0xca83,	// (0x00051f2f) list_double2_graphic_pane_t2_cp2_ParamLimits

0xca83,	// (0x00051f2f) list_double2_graphic_pane_t2_cp2

0xca95,	// (0x00051f41) list_single_number_heading_pane_g1_cp2_ParamLimits

0xca95,	// (0x00051f41) list_single_number_heading_pane_g1_cp2

0xcaa1,	// (0x00051f4d) list_single_number_heading_pane_g2_cp2

0xcaa9,	// (0x00051f55) list_single_number_heading_pane_t1_cp2_ParamLimits

0xcaa9,	// (0x00051f55) list_single_number_heading_pane_t1_cp2

0xcabf,	// (0x00051f6b) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcabf,	// (0x00051f6b) list_single_number_heading_pane_t2_cp2

0xcad3,	// (0x00051f7f) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcad3,	// (0x00051f7f) list_single_number_heading_pane_t3_cp2

0xca95,	// (0x00051f41) list_single_heading_pane_g1_cp2_ParamLimits

0xca95,	// (0x00051f41) list_single_heading_pane_g1_cp2

0xcaa1,	// (0x00051f4d) list_single_heading_pane_g2_cp2

0xcaa9,	// (0x00051f55) list_single_heading_pane_t1_cp2_ParamLimits

0xcaa9,	// (0x00051f55) list_single_heading_pane_t1_cp2

0xded1,	// (0x0005337d) list_single_heading_pane_t2_cp2_ParamLimits

0xded1,	// (0x0005337d) list_single_heading_pane_t2_cp2

0xde6b,	// (0x00053317) list_double_graphic_pane_g1_cp2_ParamLimits

0xde6b,	// (0x00053317) list_double_graphic_pane_g1_cp2

0xde77,	// (0x00053323) list_double_graphic_pane_g2_cp2_ParamLimits

0xde77,	// (0x00053323) list_double_graphic_pane_g2_cp2

0xde86,	// (0x00053332) list_double_graphic_pane_g3_cp2

0xde8e,	// (0x0005333a) list_double_graphic_pane_t1_cp2_ParamLimits

0xde8e,	// (0x0005333a) list_double_graphic_pane_t1_cp2

0xdea4,	// (0x00053350) list_double_graphic_pane_t2_cp2_ParamLimits

0xdea4,	// (0x00053350) list_double_graphic_pane_t2_cp2

0xcb48,	// (0x00051ff4) list_double_number_pane_g1_cp2_ParamLimits

0xcb48,	// (0x00051ff4) list_double_number_pane_g1_cp2

0xcb54,	// (0x00052000) list_double_number_pane_g2_cp2

0xde2f,	// (0x000532db) list_double_number_pane_t1_cp2_ParamLimits

0xde2f,	// (0x000532db) list_double_number_pane_t1_cp2

0xde43,	// (0x000532ef) list_double_number_pane_t2_cp2_ParamLimits

0xde43,	// (0x000532ef) list_double_number_pane_t2_cp2

0xde59,	// (0x00053305) list_double_number_pane_t3_cp2_ParamLimits

0xde59,	// (0x00053305) list_double_number_pane_t3_cp2

0xdd9a,	// (0x00053246) list_single_graphic_pane_g1_cp2_ParamLimits

0xdd9a,	// (0x00053246) list_single_graphic_pane_g1_cp2

0xcbac,	// (0x00052058) list_single_graphic_pane_g2_cp2_ParamLimits

0xcbac,	// (0x00052058) list_single_graphic_pane_g2_cp2

0xcbb8,	// (0x00052064) list_single_graphic_pane_g3_cp2

0xdd70,	// (0x0005321c) list_single_graphic_pane_t1_cp2_ParamLimits

0xdd70,	// (0x0005321c) list_single_graphic_pane_t1_cp2

0xcbac,	// (0x00052058) list_single_number_pane_g1_cp2_ParamLimits

0xcbac,	// (0x00052058) list_single_number_pane_g1_cp2

0xcbb8,	// (0x00052064) list_single_number_pane_g2_cp2

0xdd70,	// (0x0005321c) list_single_number_pane_t1_cp2_ParamLimits

0xdd70,	// (0x0005321c) list_single_number_pane_t1_cp2

0xdd86,	// (0x00053232) list_single_number_pane_t2_cp2_ParamLimits

0xdd86,	// (0x00053232) list_single_number_pane_t2_cp2

0xc9b5,	// (0x00051e61) list_double2_pane_g1_cp2_ParamLimits

0xc9b5,	// (0x00051e61) list_double2_pane_g1_cp2

0xc9c6,	// (0x00051e72) list_double2_pane_g2_cp2

0xcb20,	// (0x00051fcc) list_double2_pane_t1_cp2_ParamLimits

0xcb20,	// (0x00051fcc) list_double2_pane_t1_cp2

0xcb36,	// (0x00051fe2) list_double2_pane_t2_cp2_ParamLimits

0xcb36,	// (0x00051fe2) list_double2_pane_t2_cp2

0xcb48,	// (0x00051ff4) list_double_pane_g1_cp2_ParamLimits

0xcb48,	// (0x00051ff4) list_double_pane_g1_cp2

0xcb54,	// (0x00052000) list_double_pane_g2_cp2

0xcb5c,	// (0x00052008) list_double_pane_t1_cp2_ParamLimits

0xcb5c,	// (0x00052008) list_double_pane_t1_cp2

0xcb72,	// (0x0005201e) list_double_pane_t2_cp2_ParamLimits

0xcb72,	// (0x0005201e) list_double_pane_t2_cp2

0xcb9c,	// (0x00052048) list_single_pane_cp2_g3

0xcbac,	// (0x00052058) list_single_pane_g1_cp2_ParamLimits

0xcbac,	// (0x00052058) list_single_pane_g1_cp2

0xcbb8,	// (0x00052064) list_single_pane_g2_cp2

0xcbc0,	// (0x0005206c) list_single_pane_t1_cp2_ParamLimits

0xcbc0,	// (0x0005206c) list_single_pane_t1_cp2

0xcbd8,	// (0x00052084) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcbd8,	// (0x00052084) list_single_large_graphic_pane_g1_cp2

0xcbe6,	// (0x00052092) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcbe6,	// (0x00052092) list_single_large_graphic_pane_g2_cp2

0xcbf2,	// (0x0005209e) list_single_large_graphic_pane_g3_cp2

0xcbfa,	// (0x000520a6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcbfa,	// (0x000520a6) list_single_large_graphic_pane_g4_cp1

0xcc14,	// (0x000520c0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcc14,	// (0x000520c0) list_single_large_graphic_pane_t1_cp2

0xdd3a,	// (0x000531e6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdd3a,	// (0x000531e6) list_single_graphic_heading_pane_g1_cp2

0xdd07,	// (0x000531b3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdd07,	// (0x000531b3) list_single_graphic_heading_pane_g4_cp2

0xcbb8,	// (0x00052064) list_single_graphic_heading_pane_g5_cp2

0xdd46,	// (0x000531f2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xdd46,	// (0x000531f2) list_single_graphic_heading_pane_t1_cp2

0xdd5c,	// (0x00053208) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdd5c,	// (0x00053208) list_single_graphic_heading_pane_t2_cp2

0xdcfb,	// (0x000531a7) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdcfb,	// (0x000531a7) list_single_2graphic_pane_g1_cp2

0xdd07,	// (0x000531b3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdd07,	// (0x000531b3) list_single_2graphic_pane_g2_cp2

0xcbb8,	// (0x00052064) list_single_2graphic_pane_g3_cp2

0xdd18,	// (0x000531c4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdd18,	// (0x000531c4) list_single_2graphic_pane_g4_cp2

0xdd24,	// (0x000531d0) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdd24,	// (0x000531d0) list_single_2graphic_pane_t1_cp2

0xb735,	// (0x00050be1) list_highlight_pane_g10_cp1

0xd901,	// (0x00052dad) list_highlight_pane_g1_cp1

0xd909,	// (0x00052db5) list_highlight_pane_g2_cp1

0xd911,	// (0x00052dbd) list_highlight_pane_g3_cp1

0xd919,	// (0x00052dc5) list_highlight_pane_g4_cp1

0xd921,	// (0x00052dcd) list_highlight_pane_g5_cp1

0xd929,	// (0x00052dd5) list_highlight_pane_g6_cp1

0xd931,	// (0x00052ddd) list_highlight_pane_g7_cp1

0xd939,	// (0x00052de5) list_highlight_pane_g8_cp1

0xd941,	// (0x00052ded) list_highlight_pane_g9_cp1

0xa1a2,	// (0x0004f64e) form_field_slider_pane_t3

0xa1b2,	// (0x0004f65e) form_field_slider_pane_t4

0xd835,	// (0x00052ce1) slider_form_pane_ParamLimits

0xd835,	// (0x00052ce1) slider_form_pane

0xb73f,	// (0x00050beb) control_abbreviations

0xb73f,	// (0x00050beb) control_conventions

0xb73f,	// (0x00050beb) control_definitions

0xb73f,	// (0x00050beb) format_table_attribute

0xdf1d,	// (0x000533c9) bg_popup_preview_window_pane_g9

0xb73f,	// (0x00050beb) format_table_data2

0xb73f,	// (0x00050beb) format_table_data3

0xb73f,	// (0x00050beb) format_table_data_example

0x0008,

0xb73f,	// (0x00050beb) intro_purpose

0xf900,	// (0x00054dac) bg_popup_preview_window_pane_g

0xb73f,	// (0x00050beb) texts_category

0xb73f,	// (0x00050beb) texts_graphics

0xcc2a,	// (0x000520d6) text_digital

0xcc39,	// (0x000520e5) text_primary

0xcc48,	// (0x000520f4) text_primary_small

0xcc57,	// (0x00052103) text_secondary

0xcc66,	// (0x00052112) text_title

0xe3a7,	// (0x00053853) bg_passive_tab_pane_g1_cp3_srt

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp3_srt

0xe3b0,	// (0x0005385c) bg_passive_tab_pane_g3_cp3_srt

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp3_srt_ParamLimits

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp3_srt

0xe3b9,	// (0x00053865) tabs_4_active_pane_srt_g1

0xa55f,	// (0x0004fa0b) tabs_4_active_pane_srt_t1_ParamLimits

0xa55f,	// (0x0004fa0b) tabs_4_active_pane_srt_t1

0xe3a7,	// (0x00053853) bg_active_tab_pane_g1_cp3_copy1

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp3_copy1

0xe3b0,	// (0x0005385c) bg_active_tab_pane_g3_cp3_copy1

0xb79b,	// (0x00050c47) tabs_2_long_active_pane_srt_ParamLimits

0xb79b,	// (0x00050c47) tabs_2_long_active_pane_srt

0xb79b,	// (0x00050c47) tabs_2_long_passive_pane_srt_ParamLimits

0xb79b,	// (0x00050c47) tabs_2_long_passive_pane_srt

0xc385,	// (0x00051831) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc385,	// (0x00051831) bg_passive_tab_pane_cp4_srt

0xe2d2,	// (0x0005377e) bg_passive_tab_pane_g1_cp4_srt

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp4_srt

0xe2db,	// (0x00053787) bg_passive_tab_pane_g3_cp4_srt

0xb79b,	// (0x00050c47) bg_active_tab_pane_cp4_srt_ParamLimits

0xb79b,	// (0x00050c47) bg_active_tab_pane_cp4_srt

0xa37e,	// (0x0004f82a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa37e,	// (0x0004f82a) tabs_2_long_active_pane_srt_t1

0xe2d2,	// (0x0005377e) bg_active_tab_pane_g1_cp4_srt

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp4_srt

0xe2db,	// (0x00053787) bg_active_tab_pane_g3_cp4_srt

0xb78d,	// (0x00050c39) tabs_3_long_active_pane_srt_ParamLimits

0xb78d,	// (0x00050c39) tabs_3_long_active_pane_srt

0xb78d,	// (0x00050c39) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb78d,	// (0x00050c39) tabs_3_long_passive_pane_cp_srt

0xb78d,	// (0x00050c39) tabs_3_long_passive_pane_srt_ParamLimits

0xb78d,	// (0x00050c39) tabs_3_long_passive_pane_srt

0xc385,	// (0x00051831) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc385,	// (0x00051831) bg_passive_tab_pane_cp5_srt

0xc965,	// (0x00051e11) bg_passive_tab_pane_g1_cp5_srt

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp5_srt

0xc96e,	// (0x00051e1a) bg_passive_tab_pane_g3_cp5_srt

0xb79b,	// (0x00050c47) bg_active_tab_pane_cp5_srt_ParamLimits

0xb79b,	// (0x00050c47) bg_active_tab_pane_cp5_srt

0xa368,	// (0x0004f814) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa368,	// (0x0004f814) tabs_3_long_active_pane_srt_t1

0xc965,	// (0x00051e11) bg_active_tab_pane_g1_cp5_srt

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp5_srt

0xc96e,	// (0x00051e1a) bg_active_tab_pane_g3_cp5_srt

0xe2c4,	// (0x00053770) navi_text_pane_srt_t1

0xe2bc,	// (0x00053768) navi_icon_pane_srt_g1

0xcd64,	// (0x00052210) midp_editing_number_pane_srt

0xcc75,	// (0x00052121) midp_ticker_pane_srt

0xcd6c,	// (0x00052218) midp_ticker_pane_srt_g1

0xcd74,	// (0x00052220) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x00054c3b) midp_ticker_pane_srt_g

0xcd7c,	// (0x00052228) midp_ticker_pane_srt_t1

0xe2ad,	// (0x00053759) midp_editing_number_pane_t1_copy1

0x9535,	// (0x0004e9e1) listscroll_midp_pane

0x9535,	// (0x0004e9e1) midp_form_pane

0xcc7d,	// (0x00052129) midp_info_popup_window_ParamLimits

0xcc7d,	// (0x00052129) midp_info_popup_window

0xc2e6,	// (0x00051792) bg_popup_sub_pane_cp50_ParamLimits

0xc2e6,	// (0x00051792) bg_popup_sub_pane_cp50

0xd540,	// (0x000529ec) listscroll_midp_info_pane_ParamLimits

0xd540,	// (0x000529ec) listscroll_midp_info_pane

0xd528,	// (0x000529d4) listscroll_form_midp_pane_ParamLimits

0xd528,	// (0x000529d4) listscroll_form_midp_pane

0xd534,	// (0x000529e0) scroll_bar_cp050

0xa196,	// (0x0004f642) list_midp_pane

0xec7b,	// (0x00054127) signal_pane_g2_cp

0xd45a,	// (0x00052906) listscroll_midp_info_pane_t1_ParamLimits

0xd45a,	// (0x00052906) listscroll_midp_info_pane_t1

0xd472,	// (0x0005291e) listscroll_midp_info_pane_t2_ParamLimits

0xd472,	// (0x0005291e) listscroll_midp_info_pane_t2

0xd4b0,	// (0x0005295c) listscroll_midp_info_pane_t3_ParamLimits

0xd4b0,	// (0x0005295c) listscroll_midp_info_pane_t3

0xd4ea,	// (0x00052996) listscroll_midp_info_pane_t4_ParamLimits

0xd4ea,	// (0x00052996) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00054ce7) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00054ce7) listscroll_midp_info_pane_t

0xc34d,	// (0x000517f9) scroll_pane_cp21

0xd3fe,	// (0x000528aa) form_midp_field_choice_group_pane

0xd407,	// (0x000528b3) form_midp_field_text_pane

0xd440,	// (0x000528ec) form_midp_field_time_pane

0xd448,	// (0x000528f4) form_midp_gauge_slider_pane

0xd451,	// (0x000528fd) form_midp_gauge_wait_pane

0xb73f,	// (0x00050beb) form_midp_image_pane

0x8dc5,	// (0x0004e271) list_single_midp_pane_ParamLimits

0x8dc5,	// (0x0004e271) list_single_midp_pane

0xa172,	// (0x0004f61e) form_midp_field_text_pane_t1

0xd297,	// (0x00052743) input_focus_pane_cp050

0xd3ed,	// (0x00052899) list_midp_form_text_pane

0xd3bc,	// (0x00052868) form_midp_field_choice_group_pane_t1

0xd3ca,	// (0x00052876) input_focus_pane_cp051

0xd3de,	// (0x0005288a) list_midp_choice_pane

0xb73f,	// (0x00050beb) status_idle_pane

0xd3a0,	// (0x0005284c) form_midp_field_time_pane_t1

0xb735,	// (0x00050be1) wait_anim_pane_g2_copy1

0xd3ae,	// (0x0005285a) form_midp_field_time_pane_t2

0x0001,

0xccd6,	// (0x00052182) aid_navinavi_width_2_pane

0xf836,	// (0x00054ce2) form_midp_field_time_pane_t

0xb73f,	// (0x00050beb) input_focus_pane_cp052

0xb73f,	// (0x00050beb) bg_input_focus_pane_cp040

0xd37c,	// (0x00052828) form_midp_gauge_slider_pane_t1

0xd38a,	// (0x00052836) form_midp_gauge_slider_pane_t2

0xa156,	// (0x0004f602) form_midp_gauge_slider_pane_t3

0xa164,	// (0x0004f610) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00054cd9) form_midp_gauge_slider_pane_t

0xd398,	// (0x00052844) form_midp_slider_pane

0xb79b,	// (0x00050c47) bg_input_focus_pane_cp041_ParamLimits

0xb79b,	// (0x00050c47) bg_input_focus_pane_cp041

0xd33b,	// (0x000527e7) form_midp_gauge_wait_pane_t1_ParamLimits

0xd33b,	// (0x000527e7) form_midp_gauge_wait_pane_t1

0xd35b,	// (0x00052807) form_midp_gauge_wait_pane_t2_ParamLimits

0xd35b,	// (0x00052807) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00054cd4) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00054cd4) form_midp_gauge_wait_pane_t

0xd36d,	// (0x00052819) form_midp_wait_pane_ParamLimits

0xd36d,	// (0x00052819) form_midp_wait_pane

0xd305,	// (0x000527b1) form_midp_image_pane_g1

0xd30e,	// (0x000527ba) form_midp_image_pane_t1

0xd31d,	// (0x000527c9) form_midp_image_pane_t2

0xd32c,	// (0x000527d8) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x00054ccd) form_midp_image_pane_t

0xd2fc,	// (0x000527a8) list_single_midp_pane_g1

0x305a,	// (0x00048506) list_single_midp_pane_t1

0xa13f,	// (0x0004f5eb) list_midp_form_item_pane_ParamLimits

0xa13f,	// (0x0004f5eb) list_midp_form_item_pane

0xcc90,	// (0x0005213c) list_midp_form_item_pane_t1

0xcc9f,	// (0x0005214b) midp_ticker_pane_g1

0xccab,	// (0x00052157) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00054c21) midp_ticker_pane_g

0x95e1,	// (0x0004ea8d) midp_ticker_pane_t1

0xa4e7,	// (0x0004f993) midp_editing_number_pane_t1

0xe33b,	// (0x000537e7) midp_editing_number_pane

0xe34a,	// (0x000537f6) midp_ticker_pane

0xe29d,	// (0x00053749) ai_message_heading_pane

0xb73f,	// (0x00050beb) bg_popup_window_pane_cp14

0xe2a5,	// (0x00053751) listscroll_ai_message_pane

0xe227,	// (0x000536d3) ai_message_heading_pane_g1_ParamLimits

0xe227,	// (0x000536d3) ai_message_heading_pane_g1

0xe233,	// (0x000536df) ai_message_heading_pane_g2_ParamLimits

0xe233,	// (0x000536df) ai_message_heading_pane_g2

0xe23f,	// (0x000536eb) ai_message_heading_pane_g3_ParamLimits

0xe23f,	// (0x000536eb) ai_message_heading_pane_g3

0xe24b,	// (0x000536f7) ai_message_heading_pane_g4_ParamLimits

0xe24b,	// (0x000536f7) ai_message_heading_pane_g4

0x0003,

0x001e,	// (0x000454ca) ai_message_heading_pane_g_ParamLimits

0x001e,	// (0x000454ca) ai_message_heading_pane_g

0xe257,	// (0x00053703) ai_message_heading_pane_t1_ParamLimits

0xe257,	// (0x00053703) ai_message_heading_pane_t1

0xe271,	// (0x0005371d) ai_message_heading_pane_t2_ParamLimits

0xe271,	// (0x0005371d) ai_message_heading_pane_t2

0x0001,

0x0027,	// (0x000454d3) ai_message_heading_pane_t_ParamLimits

0x0027,	// (0x000454d3) ai_message_heading_pane_t

0xe283,	// (0x0005372f) bg_popup_heading_pane_cp1_ParamLimits

0xe283,	// (0x0005372f) bg_popup_heading_pane_cp1

0xe215,	// (0x000536c1) list_ai_message_pane_ParamLimits

0xe215,	// (0x000536c1) list_ai_message_pane

0xc34d,	// (0x000517f9) scroll_pane_cp10

0xe1b1,	// (0x0005365d) list_ai_message_pane_g1

0xe1b9,	// (0x00053665) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x00054deb) list_ai_message_pane_g

0xe1c1,	// (0x0005366d) list_ai_message_pane_t1_ParamLimits

0xe1c1,	// (0x0005366d) list_ai_message_pane_t1

0xe1d6,	// (0x00053682) list_ai_message_pane_t2_ParamLimits

0xe1d6,	// (0x00053682) list_ai_message_pane_t2

0xe1eb,	// (0x00053697) list_ai_message_pane_t3_ParamLimits

0xe1eb,	// (0x00053697) list_ai_message_pane_t3

0xe200,	// (0x000536ac) list_ai_message_pane_t4_ParamLimits

0xe200,	// (0x000536ac) list_ai_message_pane_t4

0x0003,

0x0000,	// (0x000454ac) list_ai_message_pane_t_ParamLimits

0x0000,	// (0x000454ac) list_ai_message_pane_t

0xa343,	// (0x0004f7ef) cell_ai_soft_ind_pane_ParamLimits

0xa343,	// (0x0004f7ef) cell_ai_soft_ind_pane

0xccb7,	// (0x00052163) cell_ai_soft_ind_pane_g1_ParamLimits

0xccb7,	// (0x00052163) cell_ai_soft_ind_pane_g1

0xb73f,	// (0x00050beb) grid_highlight_cp1

0xccc4,	// (0x00052170) text_secondary_cp56_ParamLimits

0xccc4,	// (0x00052170) text_secondary_cp56

0xe186,	// (0x00053632) example_general_pane_ParamLimits

0xe186,	// (0x00053632) example_general_pane

0xe192,	// (0x0005363e) example_parent_pane_g1_ParamLimits

0xe192,	// (0x0005363e) example_parent_pane_g1

0xe19e,	// (0x0005364a) example_parent_pane_t1_ParamLimits

0xe19e,	// (0x0005364a) example_parent_pane_t1

0x9a12,	// (0x0004eebe) popup_preview_text_window_ParamLimits

0x9a12,	// (0x0004eebe) popup_preview_text_window

0xcba4,	// (0x00052050) list_single_pane_cp2_g4

0xbc36,	// (0x000510e2) bg_popup_preview_window_pane_ParamLimits

0xbc36,	// (0x000510e2) bg_popup_preview_window_pane

0xdf25,	// (0x000533d1) popup_preview_text_window_t1_ParamLimits

0xdf25,	// (0x000533d1) popup_preview_text_window_t1

0xdf43,	// (0x000533ef) popup_preview_text_window_t2_ParamLimits

0xdf43,	// (0x000533ef) popup_preview_text_window_t2

0xdf8c,	// (0x00053438) popup_preview_text_window_t3_ParamLimits

0xdf8c,	// (0x00053438) popup_preview_text_window_t3

0xdfd1,	// (0x0005347d) popup_preview_text_window_t4_ParamLimits

0xdfd1,	// (0x0005347d) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x00054dbf) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x00054dbf) popup_preview_text_window_t

0xe04f,	// (0x000534fb) scroll_pane_cp11

0xd1a7,	// (0x00052653) bg_popup_preview_window_pane_g1

0xdee5,	// (0x00053391) bg_popup_preview_window_pane_g2

0xdeed,	// (0x00053399) bg_popup_preview_window_pane_g3

0xdef5,	// (0x000533a1) bg_popup_preview_window_pane_g4

0xdefd,	// (0x000533a9) bg_popup_preview_window_pane_g5

0xdf05,	// (0x000533b1) bg_popup_preview_window_pane_g6

0xdf0d,	// (0x000533b9) bg_popup_preview_window_pane_g7

0xdf15,	// (0x000533c1) bg_popup_preview_window_pane_g8

0x0638,	// (0x00045ae4) aid_popup_width_pane

0x998e,	// (0x0004ee3a) popup_midp_note_alarm_window_ParamLimits

0x998e,	// (0x0004ee3a) popup_midp_note_alarm_window

0xc22e,	// (0x000516da) data_form_pane_ParamLimits

0x8c0e,	// (0x0004e0ba) form_field_data_pane_g1

0x8c18,	// (0x0004e0c4) form_field_data_pane_t1_ParamLimits

0xc23a,	// (0x000516e6) input_focus_pane_ParamLimits

0xc248,	// (0x000516f4) data_form_wide_pane_ParamLimits

0x2ad9,	// (0x00047f85) form_field_data_wide_pane_g1

0x2ae5,	// (0x00047f91) form_field_data_wide_pane_t1_ParamLimits

0xbf0c,	// (0x000513b8) input_focus_pane_cp6_ParamLimits

0x9373,	// (0x0004e81f) input_popup_find_pane_g1_ParamLimits

0x9373,	// (0x0004e81f) input_popup_find_pane_g1

0x0fcd,	// (0x00046479) aid_navi_side_left_pane

0x0fe2,	// (0x0004648e) aid_navi_side_right_pane

0xd9de,	// (0x00052e8a) bg_popup_window_pane_cp30_ParamLimits

0xd9de,	// (0x00052e8a) bg_popup_window_pane_cp30

0xda58,	// (0x00052f04) popup_midp_note_alarm_window_g1_ParamLimits

0xda58,	// (0x00052f04) popup_midp_note_alarm_window_g1

0xda88,	// (0x00052f34) popup_midp_note_alarm_window_t1_ParamLimits

0xda88,	// (0x00052f34) popup_midp_note_alarm_window_t1

0xdb29,	// (0x00052fd5) popup_midp_note_alarm_window_t2_ParamLimits

0xdb29,	// (0x00052fd5) popup_midp_note_alarm_window_t2

0xdbd7,	// (0x00053083) popup_midp_note_alarm_window_t3_ParamLimits

0xdbd7,	// (0x00053083) popup_midp_note_alarm_window_t3

0xdbff,	// (0x000530ab) popup_midp_note_alarm_window_t4_ParamLimits

0xdbff,	// (0x000530ab) popup_midp_note_alarm_window_t4

0xdc1f,	// (0x000530cb) popup_midp_note_alarm_window_t5_ParamLimits

0xdc1f,	// (0x000530cb) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x00054d5c) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x00054d5c) popup_midp_note_alarm_window_t

0xdccb,	// (0x00053177) wait_bar_pane_cp1_ParamLimits

0xdccb,	// (0x00053177) wait_bar_pane_cp1

0xb73f,	// (0x00050beb) wait_anim_pane_copy1

0xb73f,	// (0x00050beb) wait_border_pane_copy1

0xd6f6,	// (0x00052ba2) wait_border_pane_g1_copy1

0x2aff,	// (0x00047fab) form_field_popup_pane_g1

0x8c32,	// (0x0004e0de) form_field_popup_pane_t1_ParamLimits

0xc23a,	// (0x000516e6) input_focus_pane_cp7_ParamLimits

0xc268,	// (0x00051714) list_form_pane_ParamLimits

0x2b21,	// (0x00047fcd) form_field_popup_wide_pane_g1

0x2b29,	// (0x00047fd5) form_field_popup_wide_pane_t1_ParamLimits

0xc23a,	// (0x000516e6) input_focus_pane_cp8_ParamLimits

0xc274,	// (0x00051720) list_form_wide_pane_ParamLimits

0xe3e0,	// (0x0005388c) aid_size_cell_graphic_pane

0x8cb1,	// (0x0004e15d) data_form_pane_t1_ParamLimits

0x8df2,	// (0x0004e29e) data_form_wide_pane_t1_ParamLimits

0x9dc7,	// (0x0004f273) bg_status_flat_pane

0x900f,	// (0x0004e4bb) title_pane_t1_ParamLimits

0xb755,	// (0x00050c01) title_pane_t2_ParamLimits

0xb77b,	// (0x00050c27) title_pane_t3_ParamLimits

0xf573,	// (0x00054a1f) title_pane_t_ParamLimits

0xc6fb,	// (0x00051ba7) level_1_signal_ParamLimits

0xc708,	// (0x00051bb4) level_2_signal_ParamLimits

0xc715,	// (0x00051bc1) level_3_signal_ParamLimits

0xc722,	// (0x00051bce) level_4_signal_ParamLimits

0xc72f,	// (0x00051bdb) level_5_signal_ParamLimits

0xc73c,	// (0x00051be8) level_6_signal_ParamLimits

0xc749,	// (0x00051bf5) level_7_signal_ParamLimits

0xc6fb,	// (0x00051ba7) level_1_battery_ParamLimits

0xc708,	// (0x00051bb4) level_2_battery_ParamLimits

0xc715,	// (0x00051bc1) level_3_battery_ParamLimits

0xc722,	// (0x00051bce) level_4_battery_ParamLimits

0xc72f,	// (0x00051bdb) level_5_battery_ParamLimits

0xc73c,	// (0x00051be8) level_6_battery_ParamLimits

0xc749,	// (0x00051bf5) level_7_battery_ParamLimits

0xd901,	// (0x00052dad) bg_status_flat_pane_g1

0xd909,	// (0x00052db5) bg_status_flat_pane_g2

0xd911,	// (0x00052dbd) bg_status_flat_pane_g3

0xd919,	// (0x00052dc5) bg_status_flat_pane_g4

0xd921,	// (0x00052dcd) bg_status_flat_pane_g5

0xd929,	// (0x00052dd5) bg_status_flat_pane_g6

0xd931,	// (0x00052ddd) bg_status_flat_pane_g7

0x90a3,	// (0x0004e54f) tabs_3_active_pane_t1_ParamLimits

0x90a3,	// (0x0004e54f) tabs_3_passive_pane_t1_ParamLimits

0x90bd,	// (0x0004e569) tabs_4_active_pane_t1_ParamLimits

0x90bd,	// (0x0004e569) tabs_4_1_passive_pane_t1_ParamLimits

0x9389,	// (0x0004e835) tabs_2_active_pane_t1_ParamLimits

0x9389,	// (0x0004e835) tabs_2_passive_pane_t1_ParamLimits

0xb79b,	// (0x00050c47) bg_active_tab_pane_cp4_ParamLimits

0x939b,	// (0x0004e847) tabs_2_long_active_pane_t1_ParamLimits

0xc385,	// (0x00051831) bg_passive_tab_pane_cp4_ParamLimits

0x1538,	// (0x000469e4) list_single_midp_graphic_pane_t1_ParamLimits

0xb79b,	// (0x00050c47) bg_active_tab_pane_cp5_ParamLimits

0x93ae,	// (0x0004e85a) tabs_3_long_active_pane_t1_ParamLimits

0xc385,	// (0x00051831) bg_passive_tab_pane_cp5_ParamLimits

0x1538,	// (0x000469e4) list_single_midp_graphic_pane_t1

0x9dc7,	// (0x0004f273) bg_status_flat_pane_ParamLimits

0xd07a,	// (0x00052526) indicator_pane_cp2_ParamLimits

0xd07a,	// (0x00052526) indicator_pane_cp2

0x9f3e,	// (0x0004f3ea) navi_pane_srt_ParamLimits

0x9f3e,	// (0x0004f3ea) navi_pane_srt

0xd0a2,	// (0x0005254e) popup_clock_digital_analogue_window_cp1

0xbaab,	// (0x00050f57) indicator_pane_t1

0xcc75,	// (0x00052121) copy_highlight_pane

0xcc75,	// (0x00052121) cursor_graphics_pane

0xcc75,	// (0x00052121) graphic_within_text_pane

0xcc75,	// (0x00052121) link_highlight_pane

0xe012,	// (0x000534be) popup_preview_text_window_t5_ParamLimits

0xe012,	// (0x000534be) popup_preview_text_window_t5

0xccde,	// (0x0005218a) cursor_digital_pane

0xccde,	// (0x0005218a) cursor_primary_pane

0xccef,	// (0x0005219b) cursor_primary_small_pane

0xccf7,	// (0x000521a3) cursor_secondary_pane

0xccff,	// (0x000521ab) cursor_title_pane

0xccde,	// (0x0005218a) link_highlight_digital_pane

0xcce6,	// (0x00052192) link_highlight_primary_pane

0xccef,	// (0x0005219b) link_highlight_primary_small_pane

0xccf7,	// (0x000521a3) link_highlight_secondary_pane

0xccff,	// (0x000521ab) link_highlight_title_pane

0xccde,	// (0x0005218a) copy_highlight_digital_pane

0xccde,	// (0x0005218a) copy_highlight_primary_pane

0xccef,	// (0x0005219b) copy_highlight_primary_small_pane

0xccf7,	// (0x000521a3) copy_highlight_secondary_pane

0xccff,	// (0x000521ab) copy_highlight_title_pane

0xccf7,	// (0x000521a3) graphic_text_digital_pane

0xd981,	// (0x00052e2d) graphic_text_primary_pane

0xd98a,	// (0x00052e36) graphic_text_primary_small_pane

0xccef,	// (0x0005219b) graphic_text_secondary_pane

0xccde,	// (0x0005218a) graphic_text_title_pane

0x95f3,	// (0x0004ea9f) cursor_primary_pane_g1

0xd973,	// (0x00052e1f) cursor_text_primary_t1

0xa1d6,	// (0x0004f682) cursor_primary_small_pane_g1

0xd965,	// (0x00052e11) cursor_text_primary_small_t1

0xa1cc,	// (0x0004f678) cursor_primary_small_pane_g1_copy1

0xd957,	// (0x00052e03) cursor_text_primary_small_t1_copy1

0xd949,	// (0x00052df5) cursor_text_title_t1

0xa1c2,	// (0x0004f66e) cursor_title_pane_g1

0x95f3,	// (0x0004ea9f) cursor_digital_pane_g1

0xcd07,	// (0x000521b3) cursor_text_digital_t1

0xd8ea,	// (0x00052d96) link_highlight_primary_pane_g1

0xd8f2,	// (0x00052d9e) link_highlight_primary_pane_t1

0xcd15,	// (0x000521c1) link_highlight_primary_small_pane_g1

0xcd1d,	// (0x000521c9) link_highlight_primary_small_pane_t1

0xcd15,	// (0x000521c1) link_highlight_secondary_pane_g1

0xcd2c,	// (0x000521d8) link_highlight_secondary_pane_t1

0xd85e,	// (0x00052d0a) link_highlight_title_pane_g1

0xd866,	// (0x00052d12) link_highlight_title_pane_t1

0xd847,	// (0x00052cf3) link_highlight_digital_pane_g1

0xd84f,	// (0x00052cfb) link_highlight_digital_pane_t1

0xd73b,	// (0x00052be7) copy_highlight_primary_pane_g1

0xd743,	// (0x00052bef) copy_highlight_primary_pane_t1

0xd715,	// (0x00052bc1) copy_highlight_primary_small_pane_g1

0xd72c,	// (0x00052bd8) copy_highlight_primary_small_pane_t1

0xcd3b,	// (0x000521e7) copy_highlight_secondary_pane_g1

0xcd43,	// (0x000521ef) copy_highlight_secondary_pane_t1

0xd715,	// (0x00052bc1) copy_highlight_title_pane_g1

0xd71d,	// (0x00052bc9) copy_highlight_title_pane_t1

0xd73b,	// (0x00052be7) copy_highlight_digital_pane_g1

0xe56a,	// (0x00053a16) copy_highlight_digital_pane_t1

0xe4be,	// (0x0005396a) graphic_text_primary_pane_g1

0xe54e,	// (0x000539fa) graphic_text_primary_pane_t1

0xe55c,	// (0x00053a08) graphic_text_primary_pane_t2

0x0001,

0x009b,	// (0x00045547) graphic_text_primary_pane_t

0xe52a,	// (0x000539d6) graphic_text_primary_small_pane_g1

0xe532,	// (0x000539de) graphic_text_primary_small_pane_t1

0xe540,	// (0x000539ec) graphic_text_primary_small_pane_t2

0x0001,

0x0096,	// (0x00045542) graphic_text_primary_small_pane_t

0xe506,	// (0x000539b2) graphic_text_secondary_pane_g1

0xe50e,	// (0x000539ba) graphic_text_secondary_pane_t1

0xe51c,	// (0x000539c8) graphic_text_secondary_pane_t2

0x0001,

0x0091,	// (0x0004553d) graphic_text_secondary_pane_t

0xe4e2,	// (0x0005398e) graphic_text_title_pane_g1

0xe4ea,	// (0x00053996) graphic_text_title_pane_t1

0xe4f8,	// (0x000539a4) graphic_text_title_pane_t2

0x0001,

0x008c,	// (0x00045538) graphic_text_title_pane_t

0xe4be,	// (0x0005396a) graphic_text_digital_pane_g1

0xe4c6,	// (0x00053972) graphic_text_digital_pane_t1

0xe4d4,	// (0x00053980) graphic_text_digital_pane_t2

0x0001,

0x0087,	// (0x00045533) graphic_text_digital_pane_t

0xb79b,	// (0x00050c47) navi_icon_pane_srt_ParamLimits

0xb79b,	// (0x00050c47) navi_icon_pane_srt

0xb73f,	// (0x00050beb) navi_midp_pane_srt

0xb73f,	// (0x00050beb) navi_navi_pane_srt

0xb79b,	// (0x00050c47) navi_text_pane_srt_ParamLimits

0xb79b,	// (0x00050c47) navi_text_pane_srt

0xe489,	// (0x00053935) navi_navi_icon_text_pane_srt

0xe491,	// (0x0005393d) navi_navi_pane_srt_g1_ParamLimits

0xe491,	// (0x0005393d) navi_navi_pane_srt_g1

0xe4a3,	// (0x0005394f) navi_navi_pane_srt_g2_ParamLimits

0xe4a3,	// (0x0005394f) navi_navi_pane_srt_g2

0x0001,

0x0082,	// (0x0004552e) navi_navi_pane_srt_g_ParamLimits

0x0082,	// (0x0004552e) navi_navi_pane_srt_g

0xe4b5,	// (0x00053961) navi_navi_tabs_pane_srt

0xe489,	// (0x00053935) navi_navi_text_pane_srt

0xe489,	// (0x00053935) navi_navi_volume_pane_srt

0xe47a,	// (0x00053926) navi_navi_text_pane_srt_t1

0x18b8,	// (0x00046d64) navi_navi_volume_pane_srt_g1

0x18c0,	// (0x00046d6c) volume_small_pane_srt_ParamLimits

0x18c0,	// (0x00046d6c) volume_small_pane_srt

0x12ad,	// (0x00046759) volume_small_pane_srt_g1_ParamLimits

0x12ad,	// (0x00046759) volume_small_pane_srt_g1

0x12bd,	// (0x00046769) volume_small_pane_srt_g2_ParamLimits

0x12bd,	// (0x00046769) volume_small_pane_srt_g2

0x12ce,	// (0x0004677a) volume_small_pane_srt_g3_ParamLimits

0x12ce,	// (0x0004677a) volume_small_pane_srt_g3

0x12df,	// (0x0004678b) volume_small_pane_srt_g4_ParamLimits

0x12df,	// (0x0004678b) volume_small_pane_srt_g4

0x12f0,	// (0x0004679c) volume_small_pane_srt_g5_ParamLimits

0x12f0,	// (0x0004679c) volume_small_pane_srt_g5

0x1301,	// (0x000467ad) volume_small_pane_srt_g6_ParamLimits

0x1301,	// (0x000467ad) volume_small_pane_srt_g6

0x1312,	// (0x000467be) volume_small_pane_srt_g7_ParamLimits

0x1312,	// (0x000467be) volume_small_pane_srt_g7

0x1323,	// (0x000467cf) volume_small_pane_srt_g8_ParamLimits

0x1323,	// (0x000467cf) volume_small_pane_srt_g8

0x1334,	// (0x000467e0) volume_small_pane_srt_g9_ParamLimits

0x1334,	// (0x000467e0) volume_small_pane_srt_g9

0x1345,	// (0x000467f1) volume_small_pane_srt_g10_ParamLimits

0x1345,	// (0x000467f1) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00054c26) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00054c26) volume_small_pane_srt_g

0xbcdf,	// (0x0005118b) query_popup_data_pane_cp2

0xe460,	// (0x0005390c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe460,	// (0x0005390c) navi_navi_icon_text_pane_srt_t1

0xd981,	// (0x00052e2d) navi_tabs_2_long_pane_srt

0xd981,	// (0x00052e2d) navi_tabs_2_pane_srt

0xd981,	// (0x00052e2d) navi_tabs_3_long_pane_srt

0xd981,	// (0x00052e2d) navi_tabs_3_pane_srt

0xd981,	// (0x00052e2d) navi_tabs_4_pane_srt

0x1898,	// (0x00046d44) tabs_2_active_pane_srt_ParamLimits

0x1898,	// (0x00046d44) tabs_2_active_pane_srt

0x18a8,	// (0x00046d54) tabs_2_passive_pane_srt_ParamLimits

0x18a8,	// (0x00046d54) tabs_2_passive_pane_srt

0xd297,	// (0x00052743) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd297,	// (0x00052743) bg_passive_tab_pane_cp1_srt

0xe43e,	// (0x000538ea) bg_passive_tab_pane_g1_cp1_srt

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp1_srt

0xe447,	// (0x000538f3) bg_passive_tab_pane_g3_cp1_srt

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp1_srt_ParamLimits

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp1_srt

0xe450,	// (0x000538fc) tabs_2_active_pane_srt_g1

0xa5dc,	// (0x0004fa88) tabs_2_active_pane_srt_t1_ParamLimits

0xa5dc,	// (0x0004fa88) tabs_2_active_pane_srt_t1

0xe43e,	// (0x000538ea) bg_active_tab_pane_g1_cp1_srt

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp1_srt

0xe447,	// (0x000538f3) bg_active_tab_pane_g3_cp1_srt

0x1865,	// (0x00046d11) tabs_3_active_pane_srt_ParamLimits

0x1865,	// (0x00046d11) tabs_3_active_pane_srt

0x1876,	// (0x00046d22) tabs_3_passive_pane_cp_srt_ParamLimits

0x1876,	// (0x00046d22) tabs_3_passive_pane_cp_srt

0x1887,	// (0x00046d33) tabs_3_passive_pane_srt_ParamLimits

0x1887,	// (0x00046d33) tabs_3_passive_pane_srt

0xd297,	// (0x00052743) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd297,	// (0x00052743) bg_passive_tab_pane_cp2_srt

0xcd52,	// (0x000521fe) bg_passive_tab_pane_g1_cp2_srt

0xc91e,	// (0x00051dca) bg_passive_tab_pane_g2_cp2_srt

0xcd5b,	// (0x00052207) bg_passive_tab_pane_g3_cp2_srt

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp2_srt_ParamLimits

0xb78d,	// (0x00050c39) bg_active_tab_pane_cp2_srt

0xe436,	// (0x000538e2) tabs_3_active_pane_srt_g1

0xa5c6,	// (0x0004fa72) tabs_3_active_pane_srt_t1_ParamLimits

0xa5c6,	// (0x0004fa72) tabs_3_active_pane_srt_t1

0xcd52,	// (0x000521fe) bg_active_tab_pane_g1_cp2_srt

0xc91e,	// (0x00051dca) bg_active_tab_pane_g2_cp2_srt

0xcd5b,	// (0x00052207) bg_active_tab_pane_g3_cp2_srt

0x181d,	// (0x00046cc9) tabs_4_active_pane_srt_ParamLimits

0x181d,	// (0x00046cc9) tabs_4_active_pane_srt

0x182f,	// (0x00046cdb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x182f,	// (0x00046cdb) tabs_4_passive_pane_cp2_srt

0xce7f,	// (0x0005232b) aid_size_cell_toolbar

0xd6e4,	// (0x00052b90) main_idle_act_pane_ParamLimits

0xcf41,	// (0x000523ed) popup_large_graphic_colour_window_ParamLimits

0x9c92,	// (0x0004f13e) popup_toolbar_window_ParamLimits

0x9c92,	// (0x0004f13e) popup_toolbar_window

0xe35d,	// (0x00053809) list_single_graphic_2heading_pane_ParamLimits

0xe35d,	// (0x00053809) list_single_graphic_2heading_pane

0xc52f,	// (0x000519db) aid_size_cell_apps_grid_lsc_pane

0xc541,	// (0x000519ed) aid_size_cell_apps_grid_prt_pane

0xc385,	// (0x00051831) bg_wml_button_pane_cp1_ParamLimits

0xc385,	// (0x00051831) bg_wml_button_pane_cp1

0xa172,	// (0x0004f61e) form_midp_field_text_pane_t1_ParamLimits

0xd297,	// (0x00052743) input_focus_pane_cp050_ParamLimits

0xd3ed,	// (0x00052899) list_midp_form_text_pane_ParamLimits

0xd3ca,	// (0x00052876) input_focus_pane_cp051_ParamLimits

0xd3de,	// (0x0005288a) list_midp_choice_pane_ParamLimits

0xa107,	// (0x0004f5b3) list_single_2graphic_pane_cp3_ParamLimits

0xa107,	// (0x0004f5b3) list_single_2graphic_pane_cp3

0xa11d,	// (0x0004f5c9) list_single_midp_graphic_pane_ParamLimits

0xa11d,	// (0x0004f5c9) list_single_midp_graphic_pane

0x05c0,	// (0x00045a6c) list_single_graphic_2heading_pane_g1_ParamLimits

0x05c0,	// (0x00045a6c) list_single_graphic_2heading_pane_g1

0x05cc,	// (0x00045a78) list_single_graphic_2heading_pane_g4_ParamLimits

0x05cc,	// (0x00045a78) list_single_graphic_2heading_pane_g4

0x05d8,	// (0x00045a84) list_single_graphic_2heading_pane_g5_ParamLimits

0x05d8,	// (0x00045a84) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00054c79) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00054c79) list_single_graphic_2heading_pane_g

0x05e4,	// (0x00045a90) list_single_graphic_2heading_pane_t1_ParamLimits

0x05e4,	// (0x00045a90) list_single_graphic_2heading_pane_t1

0x05f8,	// (0x00045aa4) list_single_graphic_2heading_pane_t2_ParamLimits

0x05f8,	// (0x00045aa4) list_single_graphic_2heading_pane_t2

0x0614,	// (0x00045ac0) list_single_graphic_2heading_pane_t3_ParamLimits

0x0614,	// (0x00045ac0) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00054c80) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00054c80) list_single_graphic_2heading_pane_t

0xd0e5,	// (0x00052591) bg_popup_sub_pane_cp2

0xd10f,	// (0x000525bb) grid_toobar_pane

0x14a9,	// (0x00046955) cell_toolbar_pane_ParamLimits

0x14a9,	// (0x00046955) cell_toolbar_pane

0xd14b,	// (0x000525f7) cell_toolbar_pane_g1_ParamLimits

0xd14b,	// (0x000525f7) cell_toolbar_pane_g1

0xd15f,	// (0x0005260b) cell_toolbar_pane_g2_ParamLimits

0xd15f,	// (0x0005260b) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x00054c8e) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x00054c8e) cell_toolbar_pane_g

0xd181,	// (0x0005262d) grid_highlight_pane_cp2_ParamLimits

0xd181,	// (0x0005262d) grid_highlight_pane_cp2

0xd19b,	// (0x00052647) toolbar_button_pane

0xd1a7,	// (0x00052653) toolbar_button_pane_g1

0xd1af,	// (0x0005265b) toolbar_button_pane_g2

0xd1b7,	// (0x00052663) toolbar_button_pane_g3

0xd1bf,	// (0x0005266b) toolbar_button_pane_g4

0xd1c7,	// (0x00052673) toolbar_button_pane_g5

0xd1cf,	// (0x0005267b) toolbar_button_pane_g6

0xd1d7,	// (0x00052683) toolbar_button_pane_g7

0xd1df,	// (0x0005268b) toolbar_button_pane_g8

0xd1e7,	// (0x00052693) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00054c93) toolbar_button_pane_g

0x14e1,	// (0x0004698d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x14e1,	// (0x0004698d) list_single_2graphic_pane_g1_cp3

0x8505,	// (0x0004d9b1) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8505,	// (0x0004d9b1) list_single_2graphic_pane_g2_cp3

0x14fe,	// (0x000469aa) list_single_2graphic_pane_g3_cp3

0x1506,	// (0x000469b2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1506,	// (0x000469b2) list_single_2graphic_pane_g4_cp3

0x1512,	// (0x000469be) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1512,	// (0x000469be) list_single_2graphic_pane_t1_cp3

0x152c,	// (0x000469d8) list_single_midp_graphic_pane_g2_ParamLimits

0x152c,	// (0x000469d8) list_single_midp_graphic_pane_g2

0x2fda,	// (0x00048486) aid_zoom_text_primary

0x2fe2,	// (0x0004848e) aid_zoom_text_secondary

0xce0f,	// (0x000522bb) status_small_pane_g7_ParamLimits

0xce0f,	// (0x000522bb) status_small_pane_g7

0xce32,	// (0x000522de) status_small_pane_t1_ParamLimits

0x8feb,	// (0x0004e497) title_pane_g2

0x0003,

0xf56a,	// (0x00054a16) title_pane_g

0x9276,	// (0x0004e722) aid_size_cell_colour_1_pane_ParamLimits

0x9276,	// (0x0004e722) aid_size_cell_colour_1_pane

0x928a,	// (0x0004e736) aid_size_cell_colour_2_pane_ParamLimits

0x928a,	// (0x0004e736) aid_size_cell_colour_2_pane

0x929e,	// (0x0004e74a) aid_size_cell_colour_3_pane_ParamLimits

0x929e,	// (0x0004e74a) aid_size_cell_colour_3_pane

0x92b2,	// (0x0004e75e) aid_size_cell_colour_4_pane_ParamLimits

0x92b2,	// (0x0004e75e) aid_size_cell_colour_4_pane

0x0f09,	// (0x000463b5) title_pane_stacon_g1_ParamLimits

0x0f09,	// (0x000463b5) title_pane_stacon_g1

0xd79a,	// (0x00052c46) popup_note_wait_window_g3_ParamLimits

0xd79a,	// (0x00052c46) popup_note_wait_window_g3

0xd810,	// (0x00052cbc) popup_note_wait_window_t5_ParamLimits

0xd810,	// (0x00052cbc) popup_note_wait_window_t5

0xb73f,	// (0x00050beb) main_feb_china_hwr_fs_writing_pane

0x9692,	// (0x0004eb3e) popup_feb_china_hwr_fs_window_ParamLimits

0x9692,	// (0x0004eb3e) popup_feb_china_hwr_fs_window

0x8516,	// (0x0004d9c2) aid_size_cell_hwr_fs_ParamLimits

0x8516,	// (0x0004d9c2) aid_size_cell_hwr_fs

0xd297,	// (0x00052743) bg_popup_sub_pane_cp3_ParamLimits

0xd297,	// (0x00052743) bg_popup_sub_pane_cp3

0x852b,	// (0x0004d9d7) grid_hwr_fs_pane_ParamLimits

0x852b,	// (0x0004d9d7) grid_hwr_fs_pane

0x157b,	// (0x00046a27) linegrid_hwr_fs_pane_ParamLimits

0x157b,	// (0x00046a27) linegrid_hwr_fs_pane

0x8543,	// (0x0004d9ef) cell_hwr_fs_pane_ParamLimits

0x8543,	// (0x0004d9ef) cell_hwr_fs_pane

0xd2a3,	// (0x0005274f) linegrid_hwr_fs_pane_g1_ParamLimits

0xd2a3,	// (0x0005274f) linegrid_hwr_fs_pane_g1

0xa0db,	// (0x0004f587) linegrid_hwr_fs_pane_g2_ParamLimits

0xa0db,	// (0x0004f587) linegrid_hwr_fs_pane_g2

0xd2af,	// (0x0005275b) linegrid_hwr_fs_pane_g3_ParamLimits

0xd2af,	// (0x0005275b) linegrid_hwr_fs_pane_g3

0x15ad,	// (0x00046a59) linegrid_hwr_fs_pane_g4_ParamLimits

0x15ad,	// (0x00046a59) linegrid_hwr_fs_pane_g4

0x15c7,	// (0x00046a73) linegrid_hwr_fs_pane_g5_ParamLimits

0x15c7,	// (0x00046a73) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00054cb9) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00054cb9) linegrid_hwr_fs_pane_g

0xd2bb,	// (0x00052767) cell_hwr_fs_pane_g1_ParamLimits

0xd2bb,	// (0x00052767) cell_hwr_fs_pane_g1

0xd0b3,	// (0x0005255f) cell_hwr_fs_pane_g2_ParamLimits

0xd0b3,	// (0x0005255f) cell_hwr_fs_pane_g2

0xa0ed,	// (0x0004f599) cell_hwr_fs_pane_g3_ParamLimits

0xa0ed,	// (0x0004f599) cell_hwr_fs_pane_g3

0xa0fa,	// (0x0004f5a6) cell_hwr_fs_pane_g4_ParamLimits

0xa0fa,	// (0x0004f5a6) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00054cc4) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00054cc4) cell_hwr_fs_pane_g

0x8569,	// (0x0004da15) cell_hwr_fs_pane_t1

0xb73f,	// (0x00050beb) grid_highlight_pane_cp6

0xb73f,	// (0x00050beb) main_idle_act2_pane

0xc334,	// (0x000517e0) aid_inside_area_popup_secondary

0xa1f6,	// (0x0004f6a2) aid_inside_area_window_primary_ParamLimits

0xa1f6,	// (0x0004f6a2) aid_inside_area_window_primary

0xe579,	// (0x00053a25) ai2_news_ticker_pane

0xe581,	// (0x00053a2d) aid_size_cell_ai1_link_ParamLimits

0xe581,	// (0x00053a2d) aid_size_cell_ai1_link

0xe59b,	// (0x00053a47) popup_ai2_data_window_ParamLimits

0xe59b,	// (0x00053a47) popup_ai2_data_window

0xe5af,	// (0x00053a5b) popup_ai2_link_window_ParamLimits

0xe5af,	// (0x00053a5b) popup_ai2_link_window

0xd297,	// (0x00052743) bg_popup_sub_pane_cp4_ParamLimits

0xd297,	// (0x00052743) bg_popup_sub_pane_cp4

0xe5c3,	// (0x00053a6f) grid_ai2_link_pane_ParamLimits

0xe5c3,	// (0x00053a6f) grid_ai2_link_pane

0xe5da,	// (0x00053a86) popup_ai2_link_window_g1_ParamLimits

0xe5da,	// (0x00053a86) popup_ai2_link_window_g1

0xe5e6,	// (0x00053a92) popup_ai2_link_window_g2_ParamLimits

0xe5e6,	// (0x00053a92) popup_ai2_link_window_g2

0x0001,

0x00a0,	// (0x0004554c) popup_ai2_link_window_g_ParamLimits

0x00a0,	// (0x0004554c) popup_ai2_link_window_g

0xe5f5,	// (0x00053aa1) ai2_mp_button_pane

0xe5fd,	// (0x00053aa9) ai2_mp_volume_pane

0xd3ca,	// (0x00052876) bg_popup_sub_pane_cp5_ParamLimits

0xd3ca,	// (0x00052876) bg_popup_sub_pane_cp5

0xe605,	// (0x00053ab1) heading_ai2_gene_pane_ParamLimits

0xe605,	// (0x00053ab1) heading_ai2_gene_pane

0xe611,	// (0x00053abd) list_ai2_gene_pane_ParamLimits

0xe611,	// (0x00053abd) list_ai2_gene_pane

0xe659,	// (0x00053b05) cell_ai2_link_pane_ParamLimits

0xe659,	// (0x00053b05) cell_ai2_link_pane

0xe66f,	// (0x00053b1b) cell_ai2_link_pane_g1

0xb73f,	// (0x00050beb) grid_highlight_pane_cp7

0x18d5,	// (0x00046d81) ai2_mp_volume_pane_g1

0xe740,	// (0x00053bec) ai2_mp_volume_pane_g2

0xe6b5,	// (0x00053b61) list_ai2_gene_pane_t1

0xe748,	// (0x00053bf4) ai2_mp_volume_pane_g3

0x0002,

0xf974,	// (0x00054e20) ai2_mp_volume_pane_g

0x18dd,	// (0x00046d89) volume_small_pane_cp3

0xe750,	// (0x00053bfc) aid_size_cell_ai2_button

0xe758,	// (0x00053c04) grid_ai2_button_pane

0xe761,	// (0x00053c0d) cell_ai2_button_pane_ParamLimits

0xe761,	// (0x00053c0d) cell_ai2_button_pane

0xb735,	// (0x00050be1) cell_ai2_button_pane_g1

0xb73f,	// (0x00050beb) grid_highlight_pane_cp8

0xe700,	// (0x00053bac) ai2_gene_pane_t1_ParamLimits

0xe700,	// (0x00053bac) ai2_gene_pane_t1

0x9624,	// (0x0004ead0) aid_height_parent_landscape

0xa395,	// (0x0004f841) aid_height_set_list

0xd6e4,	// (0x00052b90) aid_size_parent

0xe3e0,	// (0x0005388c) aid_size_cell_graphic_pane_ParamLimits

0xe621,	// (0x00053acd) popup_ai2_data_window_g1_ParamLimits

0xe621,	// (0x00053acd) popup_ai2_data_window_g1

0xe62d,	// (0x00053ad9) ai2_news_ticker_pane_g1

0xe635,	// (0x00053ae1) ai2_news_ticker_pane_g2

0x0001,

0x00a5,	// (0x00045551) ai2_news_ticker_pane_g

0xe63d,	// (0x00053ae9) ai2_news_ticker_pane_t1

0xe64b,	// (0x00053af7) ai2_news_ticker_pane_t2

0x0001,

0x00aa,	// (0x00045556) ai2_news_ticker_pane_t

0xe678,	// (0x00053b24) heading_ai2_gene_pane_g1

0xe680,	// (0x00053b2c) heading_ai2_gene_pane_t1_ParamLimits

0xe680,	// (0x00053b2c) heading_ai2_gene_pane_t1

0xe695,	// (0x00053b41) list_highlight_pane_cp6

0xe69d,	// (0x00053b49) ai2_gene_pane_ParamLimits

0xe69d,	// (0x00053b49) ai2_gene_pane

0xe6c3,	// (0x00053b6f) list_ai2_gene_pane_t2

0x0001,

0x00af,	// (0x0004555b) list_ai2_gene_pane_t

0xe6d1,	// (0x00053b7d) list_highlight_pane_cp8_ParamLimits

0xe6d1,	// (0x00053b7d) list_highlight_pane_cp8

0xe6e2,	// (0x00053b8e) ai2_gene_pane_g1_ParamLimits

0xe6e2,	// (0x00053b8e) ai2_gene_pane_g1

0xe6f4,	// (0x00053ba0) ai2_gene_pane_g2_ParamLimits

0xe6f4,	// (0x00053ba0) ai2_gene_pane_g2

0x0001,

0x00b4,	// (0x00045560) ai2_gene_pane_g_ParamLimits

0x00b4,	// (0x00045560) ai2_gene_pane_g

0xc1c4,	// (0x00051670) scroll_pane_cp12

0x84c2,	// (0x0004d96e) control_pane_t3_ParamLimits

0x84c2,	// (0x0004d96e) control_pane_t3

0xce23,	// (0x000522cf) status_small_pane_g8_ParamLimits

0xce23,	// (0x000522cf) status_small_pane_g8

0x974d,	// (0x0004ebf9) popup_find_window_ParamLimits

0x99c8,	// (0x0004ee74) popup_note_image_window_ParamLimits

0x300e,	// (0x000484ba) list_double2_graphic_pane_vc_g1_ParamLimits

0x300e,	// (0x000484ba) list_double2_graphic_pane_vc_g1

0x2911,	// (0x00047dbd) list_double2_graphic_pane_vc_g2_ParamLimits

0x2911,	// (0x00047dbd) list_double2_graphic_pane_vc_g2

0x291d,	// (0x00047dc9) list_double2_graphic_pane_vc_g3_ParamLimits

0x291d,	// (0x00047dc9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00054c87) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00054c87) list_double2_graphic_pane_vc_g

0x301a,	// (0x000484c6) list_double2_graphic_pane_vc_t1_ParamLimits

0x301a,	// (0x000484c6) list_double2_graphic_pane_vc_t1

0x2911,	// (0x00047dbd) list_single_heading_pane_vc_g1_ParamLimits

0x2911,	// (0x00047dbd) list_single_heading_pane_vc_g1

0x291d,	// (0x00047dc9) list_single_heading_pane_vc_g2_ParamLimits

0x291d,	// (0x00047dc9) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00054a9a) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00054a9a) list_single_heading_pane_vc_g

0x3030,	// (0x000484dc) list_single_heading_pane_vc_t1_ParamLimits

0x3030,	// (0x000484dc) list_single_heading_pane_vc_t1

0x3046,	// (0x000484f2) list_single_heading_pane_vc_t2_ParamLimits

0x3046,	// (0x000484f2) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00054ca8) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00054ca8) list_single_heading_pane_vc_t

0xd1ef,	// (0x0005269b) list_setting_number_pane_vc_g1_ParamLimits

0xd1ef,	// (0x0005269b) list_setting_number_pane_vc_g1

0xd1fb,	// (0x000526a7) list_setting_number_pane_vc_g2_ParamLimits

0xd1fb,	// (0x000526a7) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x00054cad) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x00054cad) list_setting_number_pane_vc_g

0xd207,	// (0x000526b3) list_setting_number_pane_vc_t1_ParamLimits

0xd207,	// (0x000526b3) list_setting_number_pane_vc_t1

0xd21b,	// (0x000526c7) list_setting_number_pane_vc_t2_ParamLimits

0xd21b,	// (0x000526c7) list_setting_number_pane_vc_t2

0xd237,	// (0x000526e3) list_setting_number_pane_vc_t3_ParamLimits

0xd237,	// (0x000526e3) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x00054cb2) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x00054cb2) list_setting_number_pane_vc_t

0xd25f,	// (0x0005270b) set_value_pane_vc_ParamLimits

0xd25f,	// (0x0005270b) set_value_pane_vc

0xe35d,	// (0x00053809) list_double2_graphic_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double2_graphic_pane_vc

0xe35d,	// (0x00053809) list_double2_large_graphic_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double2_large_graphic_pane_vc

0xe35d,	// (0x00053809) list_double2_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double2_pane_vc

0xe35d,	// (0x00053809) list_double_graphic_heading_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double_graphic_heading_pane_vc

0xe35d,	// (0x00053809) list_double_graphic_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double_graphic_pane_vc

0xe35d,	// (0x00053809) list_double_heading_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double_heading_pane_vc

0xe35d,	// (0x00053809) list_double_large_graphic_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double_large_graphic_pane_vc

0xe35d,	// (0x00053809) list_double_number_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double_number_pane_vc

0xe35d,	// (0x00053809) list_double_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double_pane_vc

0xe35d,	// (0x00053809) list_double_time_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_double_time_pane_vc

0xe35d,	// (0x00053809) list_setting_number_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_setting_number_pane_vc

0xe35d,	// (0x00053809) list_setting_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_setting_pane_vc

0xe35d,	// (0x00053809) list_single_graphic_heading_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_single_graphic_heading_pane_vc

0xe35d,	// (0x00053809) list_single_heading_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_single_heading_pane_vc

0xe35d,	// (0x00053809) list_single_number_heading_pane_vc_ParamLimits

0xe35d,	// (0x00053809) list_single_number_heading_pane_vc

0x300e,	// (0x000484ba) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x300e,	// (0x000484ba) list_double_graphic_heading_pane_vc_g1

0x2911,	// (0x00047dbd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2911,	// (0x00047dbd) list_double_graphic_heading_pane_vc_g2

0x291d,	// (0x00047dc9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x291d,	// (0x00047dc9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x00054c87) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00054c87) list_double_graphic_heading_pane_vc_g

0x3203,	// (0x000486af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3203,	// (0x000486af) list_double_graphic_heading_pane_vc_t1

0x3030,	// (0x000484dc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3030,	// (0x000484dc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf97b,	// (0x00054e27) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf97b,	// (0x00054e27) list_double_graphic_heading_pane_vc_t

0xd1ef,	// (0x0005269b) list_setting_pane_vc_g1_ParamLimits

0xd1ef,	// (0x0005269b) list_setting_pane_vc_g1

0xd1fb,	// (0x000526a7) list_setting_pane_vc_g2_ParamLimits

0xd1fb,	// (0x000526a7) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x00054cad) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x00054cad) list_setting_pane_vc_g

0xe957,	// (0x00053e03) list_setting_pane_vc_t1_ParamLimits

0xe957,	// (0x00053e03) list_setting_pane_vc_t1

0xe96b,	// (0x00053e17) list_setting_pane_vc_t2_ParamLimits

0xe96b,	// (0x00053e17) list_setting_pane_vc_t2

0x0001,

0x0103,	// (0x000455af) list_setting_pane_vc_t_ParamLimits

0x0103,	// (0x000455af) list_setting_pane_vc_t

0xd25f,	// (0x0005270b) set_value_pane_cp_vc_ParamLimits

0xd25f,	// (0x0005270b) set_value_pane_cp_vc

0x2911,	// (0x00047dbd) list_single_number_heading_pane_vc_g1_ParamLimits

0x2911,	// (0x00047dbd) list_single_number_heading_pane_vc_g1

0x291d,	// (0x00047dc9) list_single_number_heading_pane_vc_g2_ParamLimits

0x291d,	// (0x00047dc9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00054a9a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00054a9a) list_single_number_heading_pane_vc_g

0x3030,	// (0x000484dc) list_single_number_heading_pane_vc_t1_ParamLimits

0x3030,	// (0x000484dc) list_single_number_heading_pane_vc_t1

0x3217,	// (0x000486c3) list_single_number_heading_pane_vc_t2_ParamLimits

0x3217,	// (0x000486c3) list_single_number_heading_pane_vc_t2

0x322b,	// (0x000486d7) list_single_number_heading_pane_vc_t3_ParamLimits

0x322b,	// (0x000486d7) list_single_number_heading_pane_vc_t3

0x0002,

0xf995,	// (0x00054e41) list_single_number_heading_pane_vc_t_ParamLimits

0xf995,	// (0x00054e41) list_single_number_heading_pane_vc_t

0x300e,	// (0x000484ba) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x300e,	// (0x000484ba) list_single_graphic_heading_pane_vc_g1

0x2911,	// (0x00047dbd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2911,	// (0x00047dbd) list_single_graphic_heading_pane_vc_g4

0x291d,	// (0x00047dc9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x291d,	// (0x00047dc9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00054c87) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00054c87) list_single_graphic_heading_pane_vc_g

0x3030,	// (0x000484dc) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3030,	// (0x000484dc) list_single_graphic_heading_pane_vc_t1

0x323d,	// (0x000486e9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x323d,	// (0x000486e9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf99c,	// (0x00054e48) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf99c,	// (0x00054e48) list_single_graphic_heading_pane_vc_t

0x2911,	// (0x00047dbd) list_double2_pane_vc_g1_ParamLimits

0x2911,	// (0x00047dbd) list_double2_pane_vc_g1

0x291d,	// (0x00047dc9) list_double2_pane_vc_g2_ParamLimits

0x291d,	// (0x00047dc9) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x00054a9a) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x00054a9a) list_double2_pane_vc_g

0x3251,	// (0x000486fd) list_double2_pane_vc_t1_ParamLimits

0x3251,	// (0x000486fd) list_double2_pane_vc_t1

0x3267,	// (0x00048713) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3267,	// (0x00048713) list_double2_large_graphic_pane_vc_g1

0x2911,	// (0x00047dbd) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2911,	// (0x00047dbd) list_double2_large_graphic_pane_vc_g2

0x291d,	// (0x00047dc9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x291d,	// (0x00047dc9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x00054ab2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x00054ab2) list_double2_large_graphic_pane_vc_g

0x3273,	// (0x0004871f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3273,	// (0x0004871f) list_double2_large_graphic_pane_vc_t1

0x3289,	// (0x00048735) list_double_time_pane_vc_g1_ParamLimits

0x3289,	// (0x00048735) list_double_time_pane_vc_g1

0x3295,	// (0x00048741) list_double_time_pane_vc_g2_ParamLimits

0x3295,	// (0x00048741) list_double_time_pane_vc_g2

0x0001,

0xf9a1,	// (0x00054e4d) list_double_time_pane_vc_g_ParamLimits

0xf9a1,	// (0x00054e4d) list_double_time_pane_vc_g

0x32a1,	// (0x0004874d) list_double_time_pane_vc_t1_ParamLimits

0x32a1,	// (0x0004874d) list_double_time_pane_vc_t1

0x32ba,	// (0x00048766) list_double_time_pane_vc_t2_ParamLimits

0x32ba,	// (0x00048766) list_double_time_pane_vc_t2

0x32fa,	// (0x000487a6) list_double_time_pane_vc_t3_ParamLimits

0x32fa,	// (0x000487a6) list_double_time_pane_vc_t3

0x3312,	// (0x000487be) list_double_time_pane_vc_t4_ParamLimits

0x3312,	// (0x000487be) list_double_time_pane_vc_t4

0x0003,

0xf9a6,	// (0x00054e52) list_double_time_pane_vc_t_ParamLimits

0xf9a6,	// (0x00054e52) list_double_time_pane_vc_t

0x2911,	// (0x00047dbd) list_double_pane_vc_g1_ParamLimits

0x2911,	// (0x00047dbd) list_double_pane_vc_g1

0x291d,	// (0x00047dc9) list_double_pane_vc_g2_ParamLimits

0x291d,	// (0x00047dc9) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x00054a9a) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x00054a9a) list_double_pane_vc_g

0x3326,	// (0x000487d2) list_double_pane_vc_t1_ParamLimits

0x3326,	// (0x000487d2) list_double_pane_vc_t1

0x3338,	// (0x000487e4) list_double_pane_vc_t2_ParamLimits

0x3338,	// (0x000487e4) list_double_pane_vc_t2

0x0001,

0xf9af,	// (0x00054e5b) list_double_pane_vc_t_ParamLimits

0xf9af,	// (0x00054e5b) list_double_pane_vc_t

0x2911,	// (0x00047dbd) list_double_number_pane_vc_g1_ParamLimits

0x2911,	// (0x00047dbd) list_double_number_pane_vc_g1

0x291d,	// (0x00047dc9) list_double_number_pane_vc_g2_ParamLimits

0x291d,	// (0x00047dc9) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x00054a9a) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x00054a9a) list_double_number_pane_vc_g

0x3350,	// (0x000487fc) list_double_number_pane_vc_t1_ParamLimits

0x3350,	// (0x000487fc) list_double_number_pane_vc_t1

0x3364,	// (0x00048810) list_double_number_pane_vc_t2_ParamLimits

0x3364,	// (0x00048810) list_double_number_pane_vc_t2

0x3338,	// (0x000487e4) list_double_number_pane_vc_t3_ParamLimits

0x3338,	// (0x000487e4) list_double_number_pane_vc_t3

0x0002,

0xf9b4,	// (0x00054e60) list_double_number_pane_vc_t_ParamLimits

0xf9b4,	// (0x00054e60) list_double_number_pane_vc_t

0x3376,	// (0x00048822) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3376,	// (0x00048822) list_double_large_graphic_pane_vc_g1

0x3bd8,	// (0x00049084) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3bd8,	// (0x00049084) list_double_large_graphic_pane_vc_g2

0x291d,	// (0x00047dc9) list_double_large_graphic_pane_vc_g3_ParamLimits

0x291d,	// (0x00047dc9) list_double_large_graphic_pane_vc_g3

0x3382,	// (0x0004882e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3382,	// (0x0004882e) list_double_large_graphic_pane_vc_g4

0x0003,

0xf9bb,	// (0x00054e67) list_double_large_graphic_pane_vc_g_ParamLimits

0xf9bb,	// (0x00054e67) list_double_large_graphic_pane_vc_g

0x338e,	// (0x0004883a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x338e,	// (0x0004883a) list_double_large_graphic_pane_vc_t1

0x33a0,	// (0x0004884c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x33a0,	// (0x0004884c) list_double_large_graphic_pane_vc_t2

0x0001,

0xf9c4,	// (0x00054e70) list_double_large_graphic_pane_vc_t_ParamLimits

0xf9c4,	// (0x00054e70) list_double_large_graphic_pane_vc_t

0x2911,	// (0x00047dbd) list_double_heading_pane_vc_g1_ParamLimits

0x2911,	// (0x00047dbd) list_double_heading_pane_vc_g1

0x291d,	// (0x00047dc9) list_double_heading_pane_vc_g2_ParamLimits

0x291d,	// (0x00047dc9) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00054a9a) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00054a9a) list_double_heading_pane_vc_g

0x33b9,	// (0x00048865) list_double_heading_pane_vc_t1_ParamLimits

0x33b9,	// (0x00048865) list_double_heading_pane_vc_t1

0x3030,	// (0x000484dc) list_double_heading_pane_vc_t2_ParamLimits

0x3030,	// (0x000484dc) list_double_heading_pane_vc_t2

0x0001,

0xf9c9,	// (0x00054e75) list_double_heading_pane_vc_t_ParamLimits

0xf9c9,	// (0x00054e75) list_double_heading_pane_vc_t

0x300e,	// (0x000484ba) list_double_graphic_pane_vc_g1_ParamLimits

0x300e,	// (0x000484ba) list_double_graphic_pane_vc_g1

0x3be7,	// (0x00049093) list_double_graphic_pane_vc_g2_ParamLimits

0x3be7,	// (0x00049093) list_double_graphic_pane_vc_g2

0x3bf6,	// (0x000490a2) list_double_graphic_pane_vc_g3_ParamLimits

0x3bf6,	// (0x000490a2) list_double_graphic_pane_vc_g3

0x0002,

0xf9ce,	// (0x00054e7a) list_double_graphic_pane_vc_g_ParamLimits

0xf9ce,	// (0x00054e7a) list_double_graphic_pane_vc_g

0x33cd,	// (0x00048879) list_double_graphic_pane_vc_t1_ParamLimits

0x33cd,	// (0x00048879) list_double_graphic_pane_vc_t1

0x3338,	// (0x000487e4) list_double_graphic_pane_vc_t2_ParamLimits

0x3338,	// (0x000487e4) list_double_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x00054e81) list_double_graphic_pane_vc_t_ParamLimits

0xf9d5,	// (0x00054e81) list_double_graphic_pane_vc_t

0x0644,	// (0x00045af0) aid_size_cell_fastswap

0x7e85,	// (0x0004d331) aid_size_cell_touch_ParamLimits

0x7e85,	// (0x0004d331) aid_size_cell_touch

0x08b1,	// (0x00045d5d) popup_fast_swap_wide_window_ParamLimits

0x08b1,	// (0x00045d5d) popup_fast_swap_wide_window

0x7fd0,	// (0x0004d47c) touch_pane_ParamLimits

0x7fd0,	// (0x0004d47c) touch_pane

0xc226,	// (0x000516d2) button_value_adjust_pane_cp2

0x2a0b,	// (0x00047eb7) button_value_adjust_pane_cp4

0x2a2b,	// (0x00047ed7) form_field_data_pane_cp2

0x8bcf,	// (0x0004e07b) form_field_data_wide_pane_cp2

0xc57d,	// (0x00051a29) bg_scroll_pane_ParamLimits

0x106c,	// (0x00046518) scroll_handle_pane_ParamLimits

0x1080,	// (0x0004652c) scroll_sc2_down_pane_ParamLimits

0x1080,	// (0x0004652c) scroll_sc2_down_pane

0xc5ae,	// (0x00051a5a) scroll_sc2_up_pane_ParamLimits

0xc5ae,	// (0x00051a5a) scroll_sc2_up_pane

0xa713,	// (0x0004fbbf) grid_wheel_folder_pane_g1_ParamLimits

0xa713,	// (0x0004fbbf) grid_wheel_folder_pane_g1

0x1245,	// (0x000466f1) clock_nsta_pane_cp2_ParamLimits

0x1245,	// (0x000466f1) clock_nsta_pane_cp2

0x9535,	// (0x0004e9e1) listscroll_midp_pane_ParamLimits

0x9546,	// (0x0004e9f2) midp_canvas_pane

0xce77,	// (0x00052323) nsta_clock_indic_pane

0xcea7,	// (0x00052353) listscroll_form_pane_vc

0xceaf,	// (0x0005235b) listscroll_set_pane_vc_ParamLimits

0xceaf,	// (0x0005235b) listscroll_set_pane_vc

0x9def,	// (0x0004f29b) clock_nsta_pane

0x9e19,	// (0x0004f2c5) indicator_nsta_pane

0xd0e5,	// (0x00052591) bg_popup_sub_pane_cp2_ParamLimits

0xd0f9,	// (0x000525a5) find_pane_cp2_ParamLimits

0xd0f9,	// (0x000525a5) find_pane_cp2

0xd10f,	// (0x000525bb) grid_toobar_pane_ParamLimits

0xd26b,	// (0x00052717) list_form_gen_pane_vc_ParamLimits

0xd26b,	// (0x00052717) list_form_gen_pane_vc

0xd281,	// (0x0005272d) scroll_pane_cp8_vc_ParamLimits

0xd281,	// (0x0005272d) scroll_pane_cp8_vc

0xd2d1,	// (0x0005277d) data_form_wide_pane_vc_ParamLimits

0xd2d1,	// (0x0005277d) data_form_wide_pane_vc

0xd2dd,	// (0x00052789) form_field_data_wide_pane_vc_g1

0xd2e5,	// (0x00052791) form_field_data_wide_pane_vc_t1_ParamLimits

0xd2e5,	// (0x00052791) form_field_data_wide_pane_vc_t1

0xc23a,	// (0x000516e6) input_focus_pane_cp6_vc_ParamLimits

0xc23a,	// (0x000516e6) input_focus_pane_cp6_vc

0xa196,	// (0x0004f642) list_midp_pane_ParamLimits

0xde0b,	// (0x000532b7) scroll_pane_cp16_ParamLimits

0xde0b,	// (0x000532b7) scroll_pane_cp16

0xd562,	// (0x00052a0e) button_value_adjust_pane_ParamLimits

0xd562,	// (0x00052a0e) button_value_adjust_pane

0xa3a6,	// (0x0004f852) button_value_adjust_pane_cp6_ParamLimits

0xa3a6,	// (0x0004f852) button_value_adjust_pane_cp6

0xa4bc,	// (0x0004f968) settings_code_pane_cp_ParamLimits

0xa4bc,	// (0x0004f968) settings_code_pane_cp

0xb735,	// (0x00050be1) cell_touch_pane_g1

0xb735,	// (0x00050be1) cell_touch_pane_g2

0x0001,

0xf724,	// (0x00054bd0) cell_touch_pane_g

0xa5f2,	// (0x0004fa9e) cell_touch_pane_cp_ParamLimits

0xa5f2,	// (0x0004fa9e) cell_touch_pane_cp

0xa60e,	// (0x0004faba) cell_touch_pane_ParamLimits

0xa60e,	// (0x0004faba) cell_touch_pane

0xb735,	// (0x00050be1) scroll_sc2_down_pane_g1

0xb735,	// (0x00050be1) scroll_sc2_up_pane_g1

0xb73f,	// (0x00050beb) bg_set_opt_pane_cp4_vc

0xe773,	// (0x00053c1f) list_set_graphic_pane_vc_g1_ParamLimits

0xe773,	// (0x00053c1f) list_set_graphic_pane_vc_g1

0xe77f,	// (0x00053c2b) list_set_graphic_pane_vc_g2_ParamLimits

0xe77f,	// (0x00053c2b) list_set_graphic_pane_vc_g2

0x0001,

0x00c5,	// (0x00045571) list_set_graphic_pane_vc_g_ParamLimits

0x00c5,	// (0x00045571) list_set_graphic_pane_vc_g

0xe78b,	// (0x00053c37) text_primary_small_cp13_vc_ParamLimits

0xe78b,	// (0x00053c37) text_primary_small_cp13_vc

0xe7a3,	// (0x00053c4f) list_set_graphic_pane_vc_ParamLimits

0xe7a3,	// (0x00053c4f) list_set_graphic_pane_vc

0xb73f,	// (0x00050beb) input_focus_pane_cp2_vc

0xb735,	// (0x00050be1) setting_code_pane_vc_g1

0xe7b7,	// (0x00053c63) setting_code_pane_vc_t1

0xe7c5,	// (0x00053c71) set_text_pane_vc_t1_ParamLimits

0xe7c5,	// (0x00053c71) set_text_pane_vc_t1

0xb73f,	// (0x00050beb) input_focus_pane_cp1_vc

0xe7e4,	// (0x00053c90) list_set_text_pane_vc

0xb735,	// (0x00050be1) setting_text_pane_vc_g1

0xb73f,	// (0x00050beb) bg_set_opt_pane_cp2_vc

0xe7ee,	// (0x00053c9a) setting_slider_graphic_pane_vc_g1

0xe7f6,	// (0x00053ca2) setting_slider_graphic_pane_vc_t1

0xe804,	// (0x00053cb0) setting_slider_graphic_pane_vc_t2

0x0001,

0x00ca,	// (0x00045576) setting_slider_graphic_pane_vc_t

0xe812,	// (0x00053cbe) slider_set_pane_cp_vc

0xe81a,	// (0x00053cc6) slider_set_pane_vc_g1

0xe823,	// (0x00053ccf) slider_set_pane_vc_g2

0x0006,

0x00cf,	// (0x0004557b) slider_set_pane_vc_g

0xc295,	// (0x00051741) set_opt_bg_pane_g1_copy1

0xc29d,	// (0x00051749) set_opt_bg_pane_g2_copy1

0xe84f,	// (0x00053cfb) set_opt_bg_pane_g3_copy1

0xc2ad,	// (0x00051759) set_opt_bg_pane_g4_copy1

0xc2b5,	// (0x00051761) set_opt_bg_pane_g5_copy1

0xc2bd,	// (0x00051769) set_opt_bg_pane_g6_copy1

0xe857,	// (0x00053d03) set_opt_bg_pane_g7_copy1

0xe861,	// (0x00053d0d) set_opt_bg_pane_g8_copy1

0xe869,	// (0x00053d15) set_opt_bg_pane_g9_copy1

0xb73f,	// (0x00050beb) bg_set_opt_pane_cp_vc

0xe871,	// (0x00053d1d) setting_slider_pane_vc_t1

0xe7f6,	// (0x00053ca2) setting_slider_pane_vc_t2

0xe804,	// (0x00053cb0) setting_slider_pane_vc_t3

0x0002,

0x00de,	// (0x0004558a) setting_slider_pane_vc_t

0xe812,	// (0x00053cbe) slider_set_pane_vc

0x15eb,	// (0x00046a97) volume_set_pane_vc_g1

0x18e6,	// (0x00046d92) volume_set_pane_vc_g2

0x18ef,	// (0x00046d9b) volume_set_pane_vc_g3

0x18f8,	// (0x00046da4) volume_set_pane_vc_g4

0x1901,	// (0x00046dad) volume_set_pane_vc_g5

0x190a,	// (0x00046db6) volume_set_pane_vc_g6

0x1913,	// (0x00046dbf) volume_set_pane_vc_g7

0x191c,	// (0x00046dc8) volume_set_pane_vc_g8

0x1925,	// (0x00046dd1) volume_set_pane_vc_g9

0x192e,	// (0x00046dda) volume_set_pane_vc_g10

0x0009,

0xf980,	// (0x00054e2c) volume_set_pane_vc_g

0xe880,	// (0x00053d2c) volume_set_pane_vc

0xe888,	// (0x00053d34) button_value_adjust_pane_cp1_vc

0xe892,	// (0x00053d3e) list_highlight_pane_cp2_vc

0xe89b,	// (0x00053d47) list_set_pane_vc_ParamLimits

0xe89b,	// (0x00053d47) list_set_pane_vc

0xe8ed,	// (0x00053d99) main_pane_set_vc_t1_ParamLimits

0xe8ed,	// (0x00053d99) main_pane_set_vc_t1

0xe902,	// (0x00053dae) main_pane_set_vc_t2_ParamLimits

0xe902,	// (0x00053dae) main_pane_set_vc_t2

0xe914,	// (0x00053dc0) main_pane_set_vc_t3_ParamLimits

0xe914,	// (0x00053dc0) main_pane_set_vc_t3

0xe926,	// (0x00053dd2) main_pane_set_vc_t4_ParamLimits

0xe926,	// (0x00053dd2) main_pane_set_vc_t4

0x0003,

0x00fa,	// (0x000455a6) main_pane_set_vc_t_ParamLimits

0x00fa,	// (0x000455a6) main_pane_set_vc_t

0xe938,	// (0x00053de4) setting_code_pane_vc_ParamLimits

0xe938,	// (0x00053de4) setting_code_pane_vc

0xe947,	// (0x00053df3) setting_slider_graphic_pane_vc

0xe947,	// (0x00053df3) setting_slider_pane_vc

0xe947,	// (0x00053df3) setting_text_pane_vc

0xe947,	// (0x00053df3) setting_volume_pane_vc

0xe94f,	// (0x00053dfb) scroll_pane_cp121_vc

0xc214,	// (0x000516c0) set_content_pane_vc

0xe98d,	// (0x00053e39) button_value_adjust_pane_g1

0xe996,	// (0x00053e42) button_value_adjust_pane_g2

0x0001,

0x014d,	// (0x000455f9) button_value_adjust_pane_g

0xe99f,	// (0x00053e4b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe99f,	// (0x00053e4b) form_field_slider_wide_pane_vc_t1

0xe9b3,	// (0x00053e5f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe9b3,	// (0x00053e5f) form_field_slider_wide_pane_vc_t2

0x0001,

0x0152,	// (0x000455fe) form_field_slider_wide_pane_vc_t_ParamLimits

0x0152,	// (0x000455fe) form_field_slider_wide_pane_vc_t

0xb78d,	// (0x00050c39) input_focus_pane_cp10_vc_ParamLimits

0xb78d,	// (0x00050c39) input_focus_pane_cp10_vc

0xe9c5,	// (0x00053e71) slider_cont_pane_cp1_vc_ParamLimits

0xe9c5,	// (0x00053e71) slider_cont_pane_cp1_vc

0xe81a,	// (0x00053cc6) slider_form_pane_g1_cp2

0xe823,	// (0x00053ccf) slider_form_pane_g2_cp2

0xe9de,	// (0x00053e8a) form_field_slider_pane_vc_t3

0xe9ec,	// (0x00053e98) form_field_slider_pane_vc_t4

0xe9fa,	// (0x00053ea6) slider_form_pane_vc_ParamLimits

0xe9fa,	// (0x00053ea6) slider_form_pane_vc

0xea07,	// (0x00053eb3) form_field_slider_pane_vc_t1_ParamLimits

0xea07,	// (0x00053eb3) form_field_slider_pane_vc_t1

0xe9b3,	// (0x00053e5f) form_field_slider_pane_vc_t2_ParamLimits

0xe9b3,	// (0x00053e5f) form_field_slider_pane_vc_t2

0x0001,

0x0162,	// (0x0004560e) form_field_slider_pane_vc_t_ParamLimits

0x0162,	// (0x0004560e) form_field_slider_pane_vc_t

0xb78d,	// (0x00050c39) input_focus_pane_cp9_vc_ParamLimits

0xb78d,	// (0x00050c39) input_focus_pane_cp9_vc

0xea23,	// (0x00053ecf) slider_cont_pane_vc_ParamLimits

0xea23,	// (0x00053ecf) slider_cont_pane_vc

0xea35,	// (0x00053ee1) list_form_graphic_pane_cp_vc_ParamLimits

0xea35,	// (0x00053ee1) list_form_graphic_pane_cp_vc

0xd2dd,	// (0x00052789) form_field_popup_wide_pane_vc_g1

0xea4a,	// (0x00053ef6) form_field_popup_wide_pane_vc_t1_ParamLimits

0xea4a,	// (0x00053ef6) form_field_popup_wide_pane_vc_t1

0xc23a,	// (0x000516e6) input_focus_pane_cp8_vc_ParamLimits

0xc23a,	// (0x000516e6) input_focus_pane_cp8_vc

0xea61,	// (0x00053f0d) list_form_wide_pane_vc_ParamLimits

0xea61,	// (0x00053f0d) list_form_wide_pane_vc

0xea6d,	// (0x00053f19) list_form_graphic_pane_vc_g1

0xea75,	// (0x00053f21) list_form_graphic_pane_vc_t1_ParamLimits

0xea75,	// (0x00053f21) list_form_graphic_pane_vc_t1

0xb79b,	// (0x00050c47) list_highlight_pane_cp5_vc_ParamLimits

0xb79b,	// (0x00050c47) list_highlight_pane_cp5_vc

0xea91,	// (0x00053f3d) list_form_graphic_pane_vc_ParamLimits

0xea91,	// (0x00053f3d) list_form_graphic_pane_vc

0xd2dd,	// (0x00052789) form_field_popup_pane_vc_g1

0xeaa7,	// (0x00053f53) form_field_popup_pane_vc_t1_ParamLimits

0xeaa7,	// (0x00053f53) form_field_popup_pane_vc_t1

0xc23a,	// (0x000516e6) input_focus_pane_cp7_vc_ParamLimits

0xc23a,	// (0x000516e6) input_focus_pane_cp7_vc

0xeabe,	// (0x00053f6a) list_form_pane_vc_ParamLimits

0xeabe,	// (0x00053f6a) list_form_pane_vc

0xeaca,	// (0x00053f76) data_form_pane_vc_t1_ParamLimits

0xeaca,	// (0x00053f76) data_form_pane_vc_t1

0xc295,	// (0x00051741) input_focus_pane_vc_g1

0xc29d,	// (0x00051749) input_focus_pane_vc_g2

0xc2a5,	// (0x00051751) input_focus_pane_vc_g3

0xc2ad,	// (0x00051759) input_focus_pane_vc_g4

0xc2b5,	// (0x00051761) input_focus_pane_vc_g5

0xc2bd,	// (0x00051769) input_focus_pane_vc_g6

0xc2c5,	// (0x00051771) input_focus_pane_vc_g7

0xc2cd,	// (0x00051779) input_focus_pane_vc_g8

0xc2d5,	// (0x00051781) input_focus_pane_vc_g9

0xb735,	// (0x00050be1) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x00054b59) input_focus_pane_vc_g

0xd2d1,	// (0x0005277d) data_form_pane_vc_ParamLimits

0xd2d1,	// (0x0005277d) data_form_pane_vc

0xd2dd,	// (0x00052789) form_field_data_pane_vc_g1

0xeae5,	// (0x00053f91) form_field_data_pane_vc_t1_ParamLimits

0xeae5,	// (0x00053f91) form_field_data_pane_vc_t1

0xc23a,	// (0x000516e6) input_focus_pane_vc_ParamLimits

0xc23a,	// (0x000516e6) input_focus_pane_vc

0xeaff,	// (0x00053fab) button_value_adjust_pane_cp3_vc

0xeb07,	// (0x00053fb3) button_value_adjust_pane_cp5_vc

0xeb0f,	// (0x00053fbb) form_field_data_pane_vc_ParamLimits

0xeb0f,	// (0x00053fbb) form_field_data_pane_vc

0xeb26,	// (0x00053fd2) form_field_data_pane_vc_cp2

0xeb2e,	// (0x00053fda) form_field_data_wide_pane_vc_ParamLimits

0xeb2e,	// (0x00053fda) form_field_data_wide_pane_vc

0xeb44,	// (0x00053ff0) form_field_data_wide_pane_vc_cp2

0xeb4c,	// (0x00053ff8) form_field_popup_pane_vc_ParamLimits

0xeb4c,	// (0x00053ff8) form_field_popup_pane_vc

0xeb63,	// (0x0005400f) form_field_popup_wide_pane_vc_ParamLimits

0xeb63,	// (0x0005400f) form_field_popup_wide_pane_vc

0xeb79,	// (0x00054025) form_field_slider_pane_vc_ParamLimits

0xeb79,	// (0x00054025) form_field_slider_pane_vc

0xeb8c,	// (0x00054038) form_field_slider_wide_pane_vc_ParamLimits

0xeb8c,	// (0x00054038) form_field_slider_wide_pane_vc

0xa62c,	// (0x0004fad8) grid_touch_1_pane_ParamLimits

0xa62c,	// (0x0004fad8) grid_touch_1_pane

0xa640,	// (0x0004faec) grid_touch_2_pane_ParamLimits

0xa640,	// (0x0004faec) grid_touch_2_pane

0xeb9f,	// (0x0005404b) touch_pane_g1_ParamLimits

0xeb9f,	// (0x0005404b) touch_pane_g1

0xebad,	// (0x00054059) cell_app_pane_cp_wide_ParamLimits

0xebad,	// (0x00054059) cell_app_pane_cp_wide

0xebbe,	// (0x0005406a) grid_popup_fast_wide_pane_ParamLimits

0xebbe,	// (0x0005406a) grid_popup_fast_wide_pane

0xebd2,	// (0x0005407e) scroll_pane_cp19_ParamLimits

0xebd2,	// (0x0005407e) scroll_pane_cp19

0xb73f,	// (0x00050beb) bg_popup_window_pane_cp20

0xebe6,	// (0x00054092) listscroll_popup_fast_wide_pane

0xd34d,	// (0x000527f9) grid_indicator_nsta_pane

0xebee,	// (0x0005409a) clock_nsta_pane_g1

0xebf7,	// (0x000540a3) clock_nsta_pane_t1

0xa66a,	// (0x0004fb16) cell_indicator_nsta_pane_ParamLimits

0xa66a,	// (0x0004fb16) cell_indicator_nsta_pane

0xeb9f,	// (0x0005404b) cell_indicator_nsta_pane_g1

0xa687,	// (0x0004fb33) cell_indicator_nsta_pane_g2

0x0001,

0x016c,	// (0x00045618) cell_indicator_nsta_pane_g

0xec13,	// (0x000540bf) clock_nsta_pane_cp

0xec1b,	// (0x000540c7) indicator_nsta_pane_cp

0xec24,	// (0x000540d0) nsta_clock_indic_pane_g1

0xb7d7,	// (0x00050c83) grid_indicator_pane

0xc6a0,	// (0x00051b4c) scroll_pane_cp29

0x1194,	// (0x00046640) indicator_nsta_pane_cp2_ParamLimits

0x1194,	// (0x00046640) indicator_nsta_pane_cp2

0xb79b,	// (0x00050c47) main_apps_wheel_pane

0xd407,	// (0x000528b3) form_midp_field_text_pane_ParamLimits

0xd534,	// (0x000529e0) scroll_bar_cp050_ParamLimits

0xec8d,	// (0x00054139) cell_indicator_pane_ParamLimits

0xec8d,	// (0x00054139) cell_indicator_pane

0xecaa,	// (0x00054156) cell_indicator_pane_g1

0xa69d,	// (0x0004fb49) grid_wheel_folder_pane_ParamLimits

0xa69d,	// (0x0004fb49) grid_wheel_folder_pane

0xa6ab,	// (0x0004fb57) list_wheel_apps_pane_ParamLimits

0xa6ab,	// (0x0004fb57) list_wheel_apps_pane

0xa6b9,	// (0x0004fb65) main_apps_wheel_pane_g1_ParamLimits

0xa6b9,	// (0x0004fb65) main_apps_wheel_pane_g1

0xa6c5,	// (0x0004fb71) main_apps_wheel_pane_g2_ParamLimits

0xa6c5,	// (0x0004fb71) main_apps_wheel_pane_g2

0x0001,

0x0188,	// (0x00045634) main_apps_wheel_pane_g_ParamLimits

0x0188,	// (0x00045634) main_apps_wheel_pane_g

0xa6d3,	// (0x0004fb7f) main_apps_wheel_pane_t1_ParamLimits

0xa6d3,	// (0x0004fb7f) main_apps_wheel_pane_t1

0xa6e7,	// (0x0004fb93) list_wheel_apps_pane_g1

0xa6ef,	// (0x0004fb9b) list_wheel_apps_pane_g2

0xa6f7,	// (0x0004fba3) list_wheel_apps_pane_g3

0xa6ff,	// (0x0004fbab) list_wheel_apps_pane_g4

0xa709,	// (0x0004fbb5) list_wheel_apps_pane_g5

0x0004,

0x018d,	// (0x00045639) list_wheel_apps_pane_g

0xcaf3,	// (0x00051f9f) navi_icon_text_pane

0x9cea,	// (0x0004f196) aid_fill_nsta

0xa720,	// (0x0004fbcc) navi_icon_text_pane_g1

0xa72c,	// (0x0004fbd8) navi_icon_text_pane_t1

0xc98f,	// (0x00051e3b) list_set_graphic_pane_t1_ParamLimits

0xc98f,	// (0x00051e3b) list_set_graphic_pane_t1

0xdc4e,	// (0x000530fa) popup_midp_note_alarm_window_t6_ParamLimits

0xdc4e,	// (0x000530fa) popup_midp_note_alarm_window_t6

0xdc60,	// (0x0005310c) popup_midp_note_alarm_window_t7_ParamLimits

0xdc60,	// (0x0005310c) popup_midp_note_alarm_window_t7

0xdc72,	// (0x0005311e) popup_midp_note_alarm_window_t8_ParamLimits

0xdc72,	// (0x0005311e) popup_midp_note_alarm_window_t8

0xdc84,	// (0x00053130) popup_midp_note_alarm_window_t9_ParamLimits

0xdc84,	// (0x00053130) popup_midp_note_alarm_window_t9

0xdc96,	// (0x00053142) popup_midp_note_alarm_window_t10_ParamLimits

0xdc96,	// (0x00053142) popup_midp_note_alarm_window_t10

0xdca8,	// (0x00053154) popup_midp_note_alarm_window_t11_ParamLimits

0xdca8,	// (0x00053154) popup_midp_note_alarm_window_t11

0xdcba,	// (0x00053166) scroll_pane_cp17_ParamLimits

0xdcba,	// (0x00053166) scroll_pane_cp17

0x15eb,	// (0x00046a97) volume_small_pane_cp_g1

0x1937,	// (0x00046de3) volume_small_pane_cp_g2

0x1940,	// (0x00046dec) volume_small_pane_cp_g3

0x1949,	// (0x00046df5) volume_small_pane_cp_g4

0x1952,	// (0x00046dfe) volume_small_pane_cp_g5

0x195b,	// (0x00046e07) volume_small_pane_cp_g6

0x1964,	// (0x00046e10) volume_small_pane_cp_g7

0x196d,	// (0x00046e19) volume_small_pane_cp_g8

0x1976,	// (0x00046e22) volume_small_pane_cp_g9

0x197f,	// (0x00046e2b) volume_small_pane_cp_g10

0xcc9f,	// (0x0005214b) midp_ticker_pane_g1_ParamLimits

0xccab,	// (0x00052157) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00054c21) midp_ticker_pane_g_ParamLimits

0x95e1,	// (0x0004ea8d) midp_ticker_pane_t1_ParamLimits

0x9d0a,	// (0x0004f1b6) aid_fill_nsta_2

0xd520,	// (0x000529cc) list_form2_midp_pane

0xe33b,	// (0x000537e7) midp_editing_number_pane_ParamLimits

0xe34a,	// (0x000537f6) midp_ticker_pane_ParamLimits

0xecb4,	// (0x00054160) form2_midp_field_pane

0xecbc,	// (0x00054168) scroll_pane_cp51

0xecdc,	// (0x00054188) form2_midp_button_pane_ParamLimits

0xecdc,	// (0x00054188) form2_midp_button_pane

0xecee,	// (0x0005419a) form2_midp_content_pane_ParamLimits

0xecee,	// (0x0005419a) form2_midp_content_pane

0xed08,	// (0x000541b4) form2_midp_field_choice_group_pane

0xed10,	// (0x000541bc) form2_midp_field_pane_g1

0xed18,	// (0x000541c4) form2_midp_field_pane_g2

0xed20,	// (0x000541cc) form2_midp_field_pane_g3

0xed28,	// (0x000541d4) form2_midp_field_pane_g4

0x0003,

0x01b2,	// (0x0004565e) form2_midp_field_pane_g

0xed30,	// (0x000541dc) form2_midp_gauge_slider_pane

0xed38,	// (0x000541e4) form2_midp_gauge_wait_pane

0xed40,	// (0x000541ec) form2_midp_image_pane_ParamLimits

0xed40,	// (0x000541ec) form2_midp_image_pane

0xed5b,	// (0x00054207) form2_midp_label_pane_ParamLimits

0xed5b,	// (0x00054207) form2_midp_label_pane

0xa75a,	// (0x0004fc06) form2_midp_label_pane_cp_ParamLimits

0xa75a,	// (0x0004fc06) form2_midp_label_pane_cp

0xed74,	// (0x00054220) form2_midp_string_pane_ParamLimits

0xed74,	// (0x00054220) form2_midp_string_pane

0x33df,	// (0x0004888b) form2_midp_text_pane_ParamLimits

0x33df,	// (0x0004888b) form2_midp_text_pane

0xed86,	// (0x00054232) form2_midp_time_pane

0xed96,	// (0x00054242) input_focus_pane_cp51_ParamLimits

0xed96,	// (0x00054242) input_focus_pane_cp51

0xedae,	// (0x0005425a) form2_midp_label_pane_t1_ParamLimits

0xedae,	// (0x0005425a) form2_midp_label_pane_t1

0x33fa,	// (0x000488a6) form2_mdip_text_pane_t1_ParamLimits

0x33fa,	// (0x000488a6) form2_mdip_text_pane_t1

0x3416,	// (0x000488c2) form2_midp_time_pane_t1

0xedf6,	// (0x000542a2) form2_midp_gauge_slider_pane_t1

0xa77b,	// (0x0004fc27) form2_midp_gauge_slider_pane_t2

0xa78d,	// (0x0004fc39) form2_midp_gauge_slider_pane_t3

0x0002,

0x01bb,	// (0x00045667) form2_midp_gauge_slider_pane_t

0xee08,	// (0x000542b4) form2_midp_slider_pane

0xee14,	// (0x000542c0) form2_midp_gauge_wait_pane_t1

0xee22,	// (0x000542ce) form2_midp_wait_pane_ParamLimits

0xee22,	// (0x000542ce) form2_midp_wait_pane

0xa79f,	// (0x0004fc4b) list_single_2graphic_pane_cp4_ParamLimits

0xa79f,	// (0x0004fc4b) list_single_2graphic_pane_cp4

0xa11d,	// (0x0004f5c9) list_single_midp_graphic_pane_cp_ParamLimits

0xa11d,	// (0x0004f5c9) list_single_midp_graphic_pane_cp

0xb73f,	// (0x00050beb) list_highlight_pane_cp20

0xee4d,	// (0x000542f9) list_single_2graphic_pane_g1_cp4

0xe678,	// (0x00053b24) list_single_2graphic_pane_g2_cp4

0xee55,	// (0x00054301) list_single_2graphic_pane_t1_cp4

0xb79b,	// (0x00050c47) list_highlight_pane_cp21

0xee64,	// (0x00054310) list_single_midp_graphic_pane_g4_cp

0xee73,	// (0x0005431f) list_single_midp_graphic_pane_t1_cp

0xa7b6,	// (0x0004fc62) form2_mdip_string_pane_t1_ParamLimits

0xa7b6,	// (0x0004fc62) form2_mdip_string_pane_t1

0xb73f,	// (0x00050beb) bg_wml_button_pane_cp2

0xb735,	// (0x00050be1) form2_midp_image_pane_g1

0x297c,	// (0x00047e28) list_double_large_graphic_pane_g5_ParamLimits

0x297c,	// (0x00047e28) list_double_large_graphic_pane_g5

0x9535,	// (0x0004e9e1) midp_form_pane_ParamLimits

0xb79b,	// (0x00050c47) main_apps_wheel_pane_ParamLimits

0x9a46,	// (0x0004eef2) popup_preview_window_ParamLimits

0x9a46,	// (0x0004eef2) popup_preview_window

0xcf86,	// (0x00052432) popup_touch_info_window_ParamLimits

0xcf86,	// (0x00052432) popup_touch_info_window

0xcfa4,	// (0x00052450) popup_touch_menu_window_ParamLimits

0xcfa4,	// (0x00052450) popup_touch_menu_window

0xb72b,	// (0x00050bd7) bg_popup_sub_pane_cp6

0xee88,	// (0x00054334) list_touch_menu_pane

0xee90,	// (0x0005433c) list_single_touch_menu_pane_ParamLimits

0xee90,	// (0x0005433c) list_single_touch_menu_pane

0xeea5,	// (0x00054351) list_single_touch_menu_pane_t1

0xb79b,	// (0x00050c47) bg_popup_sub_pane_cp7_ParamLimits

0xb79b,	// (0x00050c47) bg_popup_sub_pane_cp7

0xeeb3,	// (0x0005435f) heading_sub_pane

0xeebb,	// (0x00054367) list_touch_info_pane_ParamLimits

0xeebb,	// (0x00054367) list_touch_info_pane

0xeeca,	// (0x00054376) list_single_touch_info_pane_ParamLimits

0xeeca,	// (0x00054376) list_single_touch_info_pane

0xeedc,	// (0x00054388) list_single_touch_info_pane_t1

0xeeea,	// (0x00054396) list_single_touch_info_pane_t2

0x0001,

0x01c9,	// (0x00045675) list_single_touch_info_pane_t

0xcc75,	// (0x00052121) bg_popup_heading_pane_cp

0xeef8,	// (0x000543a4) heading_sub_pane_t1

0xd297,	// (0x00052743) bg_popup_preview_window_pane_cp_ParamLimits

0xd297,	// (0x00052743) bg_popup_preview_window_pane_cp

0xeeb3,	// (0x0005435f) heading_preview_pane

0xeebb,	// (0x00054367) list_preview_pane_ParamLimits

0xeebb,	// (0x00054367) list_preview_pane

0xef06,	// (0x000543b2) popup_preview_window_g1

0xeeca,	// (0x00054376) list_single_preview_pane_ParamLimits

0xeeca,	// (0x00054376) list_single_preview_pane

0xef0e,	// (0x000543ba) list_single_preview_pane_g1

0xef16,	// (0x000543c2) list_single_preview_pane_t1

0xeedc,	// (0x00054388) list_single_preview_pane_t2

0x0001,

0x01ce,	// (0x0004567a) list_single_preview_pane_t

0xef24,	// (0x000543d0) bg_popup_heading_pane_cp2_ParamLimits

0xef24,	// (0x000543d0) bg_popup_heading_pane_cp2

0xef3a,	// (0x000543e6) heading_preview_pane_g1

0xef42,	// (0x000543ee) heading_preview_pane_t1_ParamLimits

0xef42,	// (0x000543ee) heading_preview_pane_t1

0xbaba,	// (0x00050f66) soft_indicator_pane_t1_ParamLimits

0xc104,	// (0x000515b0) scroll_pane_ParamLimits

0xc59c,	// (0x00051a48) scroll_sc2_left_pane

0xc5a5,	// (0x00051a51) scroll_sc2_right_pane

0xc5c4,	// (0x00051a70) scroll_bg_pane_g1_ParamLimits

0xc5d9,	// (0x00051a85) scroll_bg_pane_g2_ParamLimits

0xc5f1,	// (0x00051a9d) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x00054bb0) scroll_bg_pane_g_ParamLimits

0xc5c4,	// (0x00051a70) scroll_handle_pane_g1_ParamLimits

0xc613,	// (0x00051abf) scroll_handle_pane_g2_ParamLimits

0xc5f1,	// (0x00051a9d) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00054bb7) scroll_handle_pane_g_ParamLimits

0xcecf,	// (0x0005237b) popup_choice_list_window_ParamLimits

0xcecf,	// (0x0005237b) popup_choice_list_window

0xd0f1,	// (0x0005259d) choice_list_pane

0xd173,	// (0x0005261f) cell_toolbar_pane_t1

0xd19b,	// (0x00052647) toolbar_button_pane_ParamLimits

0xe0a4,	// (0x00053550) ai_gene_pane_1_t2_ParamLimits

0xe0a4,	// (0x00053550) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x00054dcf) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x00054dcf) ai_gene_pane_1_t

0xef5f,	// (0x0005440b) scroll_sc2_left_pane_g1

0xef5f,	// (0x0005440b) scroll_sc2_right_pane_g1

0xc385,	// (0x00051831) bg_popup_sub_pane_cp10

0xef69,	// (0x00054415) list_choice_list_pane

0xef80,	// (0x0005442c) list_single_choice_list_pane_ParamLimits

0xef80,	// (0x0005442c) list_single_choice_list_pane

0xef94,	// (0x00054440) list_single_choice_list_pane_g1

0xef9c,	// (0x00054448) list_single_choice_list_pane_t1_ParamLimits

0xef9c,	// (0x00054448) list_single_choice_list_pane_t1

0xefb1,	// (0x0005445d) choice_list_pane_g1

0xefb9,	// (0x00054465) choice_list_pane_t1

0xb72b,	// (0x00050bd7) input_focus_pane_cp11

0xc4fa,	// (0x000519a6) title_pane_stacon_g2_ParamLimits

0xc4fa,	// (0x000519a6) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00054b96) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00054b96) title_pane_stacon_g

0xcc75,	// (0x00052121) cursor_press_pane

0x9705,	// (0x0004ebb1) popup_fep_hwr_window_ParamLimits

0x9705,	// (0x0004ebb1) popup_fep_hwr_window

0xcf23,	// (0x000523cf) popup_fep_vkb_window_ParamLimits

0xcf23,	// (0x000523cf) popup_fep_vkb_window

0xefc7,	// (0x00054473) cursor_press_pane_g1

0x0002,

0x01f7,	// (0x000456a3) fep_vkb_side_pane_g_ParamLimits

0x19c1,	// (0x00046e6d) fep_hwr_candidate_pane_ParamLimits

0x19c1,	// (0x00046e6d) fep_hwr_candidate_pane

0x19eb,	// (0x00046e97) fep_hwr_side_pane_ParamLimits

0x19eb,	// (0x00046e97) fep_hwr_side_pane

0x1a0b,	// (0x00046eb7) fep_hwr_top_pane_ParamLimits

0x1a0b,	// (0x00046eb7) fep_hwr_top_pane

0x1a23,	// (0x00046ecf) fep_hwr_write_pane_ParamLimits

0x1a23,	// (0x00046ecf) fep_hwr_write_pane

0x01f7,	// (0x000456a3) fep_vkb_side_pane_g

0xefcf,	// (0x0005447b) fep_hwr_top_pane_g1

0xefe1,	// (0x0005448d) fep_hwr_top_pane_g2

0x1a5d,	// (0x00046f09) fep_hwr_top_pane_g3

0x0002,

0xf9ef,	// (0x00054e9b) fep_hwr_top_pane_g

0x1a72,	// (0x00046f1e) fep_hwr_top_text_pane

0xc766,	// (0x00051c12) fep_hwr_top_text_pane_g1

0xf025,	// (0x000544d1) fep_hwr_top_text_pane_t1

0x1b68,	// (0x00047014) fep_hwr_candidate_pane_g1

0xf232,	// (0x000546de) fep_vkb_keypad_pane_g3_ParamLimits

0xf232,	// (0x000546de) fep_vkb_keypad_pane_g3

0xf25a,	// (0x00054706) fep_vkb_keypad_pane_g4_ParamLimits

0xf25a,	// (0x00054706) fep_vkb_keypad_pane_g4

0xf2c9,	// (0x00054775) fep_vkb_bottom_pane_g2_ParamLimits

0xf2c9,	// (0x00054775) fep_vkb_bottom_pane_g2

0x0001,

0xfa13,	// (0x00054ebf) fep_vkb_bottom_pane_g_ParamLimits

0xfa13,	// (0x00054ebf) fep_vkb_bottom_pane_g

0xef5f,	// (0x0005440b) cell_vkb_side_pane_g2

0x0001,

0x0203,	// (0x000456af) cell_vkb_side_pane_g

0xf30d,	// (0x000547b9) cell_vkb_side_pane_t1

0xf31b,	// (0x000547c7) cell_vkb_side_pane_t1_copy1

0xef5f,	// (0x0005440b) bg_fep_vkb_candidate_pane_g2

0xf3f7,	// (0x000548a3) cell_vkb_candidate_pane_ParamLimits

0xf033,	// (0x000544df) aid_size_cell_vkb_ParamLimits

0xf033,	// (0x000544df) aid_size_cell_vkb

0xf3f7,	// (0x000548a3) cell_vkb_candidate_pane

0x1b8f,	// (0x0004703b) bg_popup_fep_shadow_pane_g1

0xf0af,	// (0x0005455b) fep_vkb_bottom_pane_ParamLimits

0xf0af,	// (0x0005455b) fep_vkb_bottom_pane

0xf0ec,	// (0x00054598) fep_vkb_candidate_pane_ParamLimits

0xf0ec,	// (0x00054598) fep_vkb_candidate_pane

0xf108,	// (0x000545b4) fep_vkb_keypad_pane_ParamLimits

0xf108,	// (0x000545b4) fep_vkb_keypad_pane

0xf14e,	// (0x000545fa) fep_vkb_side_pane_ParamLimits

0xf14e,	// (0x000545fa) fep_vkb_side_pane

0xf18a,	// (0x00054636) fep_vkb_top_pane_ParamLimits

0xf18a,	// (0x00054636) fep_vkb_top_pane

0xf1c6,	// (0x00054672) fep_vkb_top_pane_g1_ParamLimits

0xf1c6,	// (0x00054672) fep_vkb_top_pane_g1

0xf1d5,	// (0x00054681) fep_vkb_top_pane_g2_ParamLimits

0xf1d5,	// (0x00054681) fep_vkb_top_pane_g2

0xf1e4,	// (0x00054690) fep_vkb_top_pane_g3_ParamLimits

0xf1e4,	// (0x00054690) fep_vkb_top_pane_g3

0x0003,

0xfa0a,	// (0x00054eb6) fep_vkb_top_pane_g_ParamLimits

0xfa0a,	// (0x00054eb6) fep_vkb_top_pane_g

0xf202,	// (0x000546ae) fep_vkb_top_text_pane_ParamLimits

0xf202,	// (0x000546ae) fep_vkb_top_text_pane

0xa84e,	// (0x0004fcfa) fep_vkb_side_pane_g1_ParamLimits

0xa84e,	// (0x0004fcfa) fep_vkb_side_pane_g1

0xf221,	// (0x000546cd) grid_vkb_side_pane_ParamLimits

0xf221,	// (0x000546cd) grid_vkb_side_pane

0x1b97,	// (0x00047043) bg_popup_fep_shadow_pane_g2

0x1ba0,	// (0x0004704c) bg_popup_fep_shadow_pane_g3

0x1ba8,	// (0x00047054) bg_popup_fep_shadow_pane_g4

0x1bb1,	// (0x0004705d) bg_popup_fep_shadow_pane_g5

0x1bbb,	// (0x00047067) bg_popup_fep_shadow_pane_g6

0x1bc3,	// (0x0004706f) bg_popup_fep_shadow_pane_g7

0xc2ad,	// (0x00051759) bg_popup_fep_shadow_pane_g8

0xf278,	// (0x00054724) grid_vkb_keypad_number_pane_ParamLimits

0xf278,	// (0x00054724) grid_vkb_keypad_number_pane

0xf288,	// (0x00054734) grid_vkb_keypad_pane_ParamLimits

0xf288,	// (0x00054734) grid_vkb_keypad_pane

0xf2ae,	// (0x0005475a) fep_vkb_bottom_pane_g1_ParamLimits

0xf2ae,	// (0x0005475a) fep_vkb_bottom_pane_g1

0xf2d7,	// (0x00054783) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xf2d7,	// (0x00054783) grid_vkb_keypad_bottom_left_pane

0xf2ec,	// (0x00054798) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xf2ec,	// (0x00054798) grid_vkb_keypad_bottom_right_pane

0xf301,	// (0x000547ad) fep_vkb_top_text_pane_g1

0xa895,	// (0x0004fd41) fep_vkb_top_text_pane_t1

0xa8a7,	// (0x0004fd53) cell_vkb_side_pane_ParamLimits

0xa8a7,	// (0x0004fd53) cell_vkb_side_pane

0xef5f,	// (0x0005440b) cell_vkb_side_pane_g1

0xf329,	// (0x000547d5) cell_vkb_keypad_pane_ParamLimits

0xf329,	// (0x000547d5) cell_vkb_keypad_pane

0xf3a4,	// (0x00054850) cell_vkb_keypad_pane_g1

0x0008,

0xfa18,	// (0x00054ec4) bg_popup_fep_shadow_pane_g

0x1bd5,	// (0x00047081) cell_hwr_side_pane_g1

0x1bd5,	// (0x00047081) cell_hwr_side_pane_g2

0xf3ae,	// (0x0005485a) cell_vkb_keypad_pane_t1

0xa8bd,	// (0x0004fd69) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa8bd,	// (0x0004fd69) cell_vkb_keypad_bottom_left_pane

0xa8d2,	// (0x0004fd7e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa8d2,	// (0x0004fd7e) cell_vkb_keypad_bottom_right_pane

0xef5f,	// (0x0005440b) cell_vkb_keypad_bottom_left_pane_g1

0xef5f,	// (0x0005440b) cell_vkb_keypad_bottom_right_pane_g1

0xf3bc,	// (0x00054868) cell_vkb_keypad_number_pane_ParamLimits

0xf3bc,	// (0x00054868) cell_vkb_keypad_number_pane

0xf3db,	// (0x00054887) cell_vkb_keypad_number_pane_g1

0xf3e5,	// (0x00054891) cell_vkb_keypad_number_pane_g2

0xf3ee,	// (0x0005489a) cell_vkb_keypad_number_pane_g3

0x0002,

0x0208,	// (0x000456b4) cell_vkb_keypad_number_pane_g

0xf3ae,	// (0x0005485a) cell_vkb_keypad_number_pane_t1

0xf414,	// (0x000548c0) fep_vkb_candidate_pane_g1

0x0001,

0xfa2b,	// (0x00054ed7) cell_hwr_side_pane_g

0xf42d,	// (0x000548d9) cell_hwr_side_pane_t1

0x1bdf,	// (0x0004708b) cell_hwr_side_pane_t1_copy1

0x1bed,	// (0x00047099) cell_hwr_candidate_pane_g1

0x1c1c,	// (0x000470c8) cell_hwr_candidate_pane_t1

0xef5f,	// (0x0005440b) cell_vkb_candidate_pane_g2

0xf471,	// (0x0005491d) cell_vkb_candidate_pane_t1

0x1988,	// (0x00046e34) bg_popup_fep_shadow_pane_ParamLimits

0x1988,	// (0x00046e34) bg_popup_fep_shadow_pane

0x1a3d,	// (0x00046ee9) bg_fep_hwr_top_pane_g4

0xeff3,	// (0x0005449f) bg_hwr_side_pane_g1_ParamLimits

0xeff3,	// (0x0005449f) bg_hwr_side_pane_g1

0x86dc,	// (0x0004db88) cell_hwr_side_pane_ParamLimits

0x86dc,	// (0x0004db88) cell_hwr_side_pane

0x1ae9,	// (0x00046f95) fep_hwr_write_pane_g1_ParamLimits

0x1ae9,	// (0x00046f95) fep_hwr_write_pane_g1

0x1af6,	// (0x00046fa2) fep_hwr_write_pane_g2_ParamLimits

0x1af6,	// (0x00046fa2) fep_hwr_write_pane_g2

0x1b03,	// (0x00046faf) fep_hwr_write_pane_g3_ParamLimits

0x1b03,	// (0x00046faf) fep_hwr_write_pane_g3

0x86fc,	// (0x0004dba8) fep_hwr_write_pane_g4_ParamLimits

0x86fc,	// (0x0004dba8) fep_hwr_write_pane_g4

0x0005,

0xf9f6,	// (0x00054ea2) fep_hwr_write_pane_g_ParamLimits

0xf9f6,	// (0x00054ea2) fep_hwr_write_pane_g

0x1a3d,	// (0x00046ee9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1a3d,	// (0x00046ee9) bg_fep_hwr_candidate_pane_g2

0x1b26,	// (0x00046fd2) cell_hwr_candidate_pane_ParamLimits

0x1b26,	// (0x00046fd2) cell_hwr_candidate_pane

0x1b68,	// (0x00047014) fep_hwr_candidate_pane_g1_ParamLimits

0xf061,	// (0x0005450d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xf061,	// (0x0005450d) bg_popup_fep_shadow_pane_cp2

0xf1f4,	// (0x000546a0) fep_vkb_top_pane_g4_ParamLimits

0xf1f4,	// (0x000546a0) fep_vkb_top_pane_g4

0xf213,	// (0x000546bf) fep_vkb_side_pane_g2_ParamLimits

0xf213,	// (0x000546bf) fep_vkb_side_pane_g2

0x830f,	// (0x0004d7bb) list_setting_pane_t4_ParamLimits

0x830f,	// (0x0004d7bb) list_setting_pane_t4

0x8391,	// (0x0004d83d) list_setting_number_pane_t5_ParamLimits

0x8391,	// (0x0004d83d) list_setting_number_pane_t5

0x947a,	// (0x0004e926) list_double_heading_pane_cp2_ParamLimits

0x947a,	// (0x0004e926) list_double_heading_pane_cp2

0xc1d5,	// (0x00051681) list_double_heading_pane_g1_cp2_ParamLimits

0xc1d5,	// (0x00051681) list_double_heading_pane_g1_cp2

0xc254,	// (0x00051700) list_double_heading_pane_g2_cp2_ParamLimits

0xc254,	// (0x00051700) list_double_heading_pane_g2_cp2

0xf47f,	// (0x0005492b) list_double_heading_pane_t1_cp2_ParamLimits

0xf47f,	// (0x0005492b) list_double_heading_pane_t1_cp2

0xf495,	// (0x00054941) list_double_heading_pane_t2_cp2_ParamLimits

0xf495,	// (0x00054941) list_double_heading_pane_t2_cp2

0xb723,	// (0x00050bcf) aid_value_unit2

0x08fd,	// (0x00045da9) popup_preview_fixed_window

0xbb9a,	// (0x00051046) bg_popup_preview_window_pane_cp02

0xf4a7,	// (0x00054953) list_preview_fixed_pane

0xf4ed,	// (0x00054999) list_empty_pane_fp_ParamLimits

0xf4ed,	// (0x00054999) list_empty_pane_fp

0xf4ed,	// (0x00054999) list_single_cale_day_pane_fp_ParamLimits

0xf4ed,	// (0x00054999) list_single_cale_day_pane_fp

0xf4ed,	// (0x00054999) list_single_graphic_heading_pane_fp_ParamLimits

0xf4ed,	// (0x00054999) list_single_graphic_heading_pane_fp

0xf4ed,	// (0x00054999) list_single_graphic_pane_fp_ParamLimits

0xf4ed,	// (0x00054999) list_single_graphic_pane_fp

0xf4ed,	// (0x00054999) list_single_heading_pane_fp_ParamLimits

0xf4ed,	// (0x00054999) list_single_heading_pane_fp

0xf4ed,	// (0x00054999) list_single_pane_fp_ParamLimits

0xf4ed,	// (0x00054999) list_single_pane_fp

0xf504,	// (0x000549b0) list_single_pane_fp_g1_ParamLimits

0xf504,	// (0x000549b0) list_single_pane_fp_g1

0x2964,	// (0x00047e10) list_single_pane_fp_g2_ParamLimits

0x2964,	// (0x00047e10) list_single_pane_fp_g2

0x3429,	// (0x000488d5) list_single_pane_fp_g3_ParamLimits

0x3429,	// (0x000488d5) list_single_pane_fp_g3

0xf510,	// (0x000549bc) list_single_pane_fp_g4_ParamLimits

0xf510,	// (0x000549bc) list_single_pane_fp_g4

0x0003,

0xfa3e,	// (0x00054eea) list_single_pane_fp_g_ParamLimits

0xfa3e,	// (0x00054eea) list_single_pane_fp_g

0x343d,	// (0x000488e9) list_single_pane_fp_t1_ParamLimits

0x343d,	// (0x000488e9) list_single_pane_fp_t1

0x3454,	// (0x00048900) list_single_graphic_pane_fp_g1_ParamLimits

0x3454,	// (0x00048900) list_single_graphic_pane_fp_g1

0xf504,	// (0x000549b0) list_single_graphic_pane_fp_g2_ParamLimits

0xf504,	// (0x000549b0) list_single_graphic_pane_fp_g2

0x2964,	// (0x00047e10) list_single_graphic_pane_fp_g3_ParamLimits

0x2964,	// (0x00047e10) list_single_graphic_pane_fp_g3

0x3429,	// (0x000488d5) list_single_graphic_pane_fp_g4_ParamLimits

0x3429,	// (0x000488d5) list_single_graphic_pane_fp_g4

0xf510,	// (0x000549bc) list_single_graphic_pane_fp_g5_ParamLimits

0xf510,	// (0x000549bc) list_single_graphic_pane_fp_g5

0x0004,

0xfa47,	// (0x00054ef3) list_single_graphic_pane_fp_g_ParamLimits

0xfa47,	// (0x00054ef3) list_single_graphic_pane_fp_g

0x3460,	// (0x0004890c) list_single_graphic_pane_fp_t1_ParamLimits

0x3460,	// (0x0004890c) list_single_graphic_pane_fp_t1

0x3454,	// (0x00048900) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3454,	// (0x00048900) list_single_graphic_heading_pane_fp_g1

0xf504,	// (0x000549b0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf504,	// (0x000549b0) list_single_graphic_heading_pane_fp_g2

0x2964,	// (0x00047e10) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2964,	// (0x00047e10) list_single_graphic_heading_pane_fp_g3

0x3429,	// (0x000488d5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3429,	// (0x000488d5) list_single_graphic_heading_pane_fp_g4

0xf510,	// (0x000549bc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf510,	// (0x000549bc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfa47,	// (0x00054ef3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfa47,	// (0x00054ef3) list_single_graphic_heading_pane_fp_g

0x3476,	// (0x00048922) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3476,	// (0x00048922) list_single_graphic_heading_pane_fp_t1

0x348c,	// (0x00048938) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x348c,	// (0x00048938) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfa52,	// (0x00054efe) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfa52,	// (0x00054efe) list_single_graphic_heading_pane_fp_t

0x349e,	// (0x0004894a) list_single_cale_day_pane_fp_g1_ParamLimits

0x349e,	// (0x0004894a) list_single_cale_day_pane_fp_g1

0xf51c,	// (0x000549c8) list_single_cale_day_pane_fp_g2_ParamLimits

0xf51c,	// (0x000549c8) list_single_cale_day_pane_fp_g2

0x34d6,	// (0x00048982) list_single_cale_day_pane_fp_g3_ParamLimits

0x34d6,	// (0x00048982) list_single_cale_day_pane_fp_g3

0x34fe,	// (0x000489aa) list_single_cale_day_pane_fp_g4_ParamLimits

0x34fe,	// (0x000489aa) list_single_cale_day_pane_fp_g4

0x3522,	// (0x000489ce) list_single_cale_day_pane_fp_g5_ParamLimits

0x3522,	// (0x000489ce) list_single_cale_day_pane_fp_g5

0x0004,

0xfa57,	// (0x00054f03) list_single_cale_day_pane_fp_g_ParamLimits

0xfa57,	// (0x00054f03) list_single_cale_day_pane_fp_g

0x3546,	// (0x000489f2) list_single_cale_day_pane_fp_t1_ParamLimits

0x3546,	// (0x000489f2) list_single_cale_day_pane_fp_t1

0x356c,	// (0x00048a18) list_single_cale_day_pane_fp_t2_ParamLimits

0x356c,	// (0x00048a18) list_single_cale_day_pane_fp_t2

0x3585,	// (0x00048a31) list_single_cale_day_pane_fp_t3_ParamLimits

0x3585,	// (0x00048a31) list_single_cale_day_pane_fp_t3

0x0002,

0xfa62,	// (0x00054f0e) list_single_cale_day_pane_fp_t_ParamLimits

0xfa62,	// (0x00054f0e) list_single_cale_day_pane_fp_t

0xf504,	// (0x000549b0) list_empty_pane_fp_g1_ParamLimits

0xf504,	// (0x000549b0) list_empty_pane_fp_g1

0x359e,	// (0x00048a4a) list_empty_pane_fp_t1

0x35ac,	// (0x00048a58) list_empty_pane_fp_t2

0x0001,

0xfa69,	// (0x00054f15) list_empty_pane_fp_t

0xf504,	// (0x000549b0) list_single_heading_pane_fp_g1_ParamLimits

0xf504,	// (0x000549b0) list_single_heading_pane_fp_g1

0x2964,	// (0x00047e10) list_single_heading_pane_fp_g2_ParamLimits

0x2964,	// (0x00047e10) list_single_heading_pane_fp_g2

0x3429,	// (0x000488d5) list_single_heading_pane_fp_g3_ParamLimits

0x3429,	// (0x000488d5) list_single_heading_pane_fp_g3

0x0002,

0xfa6e,	// (0x00054f1a) list_single_heading_pane_fp_g_ParamLimits

0xfa6e,	// (0x00054f1a) list_single_heading_pane_fp_g

0x35ba,	// (0x00048a66) list_single_heading_pane_fp_t1_ParamLimits

0x35ba,	// (0x00048a66) list_single_heading_pane_fp_t1

0x35cc,	// (0x00048a78) list_single_heading_pane_fp_t2_ParamLimits

0x35cc,	// (0x00048a78) list_single_heading_pane_fp_t2

0x0001,

0xfa75,	// (0x00054f21) list_single_heading_pane_fp_t_ParamLimits

0xfa75,	// (0x00054f21) list_single_heading_pane_fp_t

0xc391,	// (0x0005183d) aid_size_cell_fast

0xbb7d,	// (0x00051029) soft_indicator_pane_cp1_t1

0xc3ce,	// (0x0005187a) cell_app_pane_cp2_ParamLimits

0xc3ce,	// (0x0005187a) cell_app_pane_cp2

0x19aa,	// (0x00046e56) fep_hwr_candidate_drop_down_list_pane

0x1b82,	// (0x0004702e) fep_hwr_candidate_pane_g3_ParamLimits

0x1b82,	// (0x0004702e) fep_hwr_candidate_pane_g3

0xb37a,	// (0x00050826) fep_hwr_candidate_pane_g4_ParamLimits

0xb37a,	// (0x00050826) fep_hwr_candidate_pane_g4

0x0002,

0xfa03,	// (0x00054eaf) fep_hwr_candidate_pane_g_ParamLimits

0xfa03,	// (0x00054eaf) fep_hwr_candidate_pane_g

0xf0db,	// (0x00054587) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xf0db,	// (0x00054587) fep_vkb_candidate_drop_down_list_pane

0xf41c,	// (0x000548c8) fep_vkb_candidate_pane_g3

0xf424,	// (0x000548d0) fep_vkb_candidate_pane_g4

0x0002,

0x020f,	// (0x000456bb) fep_vkb_candidate_pane_g

0x1bed,	// (0x00047099) cell_hwr_candidate_pane_g1_ParamLimits

0x1bfb,	// (0x000470a7) cell_hwr_candidate_pane_g3_ParamLimits

0x1bfb,	// (0x000470a7) cell_hwr_candidate_pane_g3

0x5f3c,	// (0x0004b3e8) cell_hwr_candidate_pane_g4_ParamLimits

0x5f3c,	// (0x0004b3e8) cell_hwr_candidate_pane_g4

0x0002,

0xfa30,	// (0x00054edc) cell_hwr_candidate_pane_g_ParamLimits

0xfa30,	// (0x00054edc) cell_hwr_candidate_pane_g

0xf43b,	// (0x000548e7) cell_vkb_candidate_pane_g3_ParamLimits

0xf43b,	// (0x000548e7) cell_vkb_candidate_pane_g3

0xf456,	// (0x00054902) cell_vkb_candidate_pane_g4_ParamLimits

0xf456,	// (0x00054902) cell_vkb_candidate_pane_g4

0x48da,	// (0x00049d86) cell_app_pane_cp2_g1_ParamLimits

0x48da,	// (0x00049d86) cell_app_pane_cp2_g1

0x48f8,	// (0x00049da4) cell_app_pane_cp2_g2_ParamLimits

0x48f8,	// (0x00049da4) cell_app_pane_cp2_g2

0x0001,

0xfa7a,	// (0x00054f26) cell_app_pane_cp2_g_ParamLimits

0xfa7a,	// (0x00054f26) cell_app_pane_cp2_g

0x4904,	// (0x00049db0) cell_app_pane_cp2_t1_ParamLimits

0x4904,	// (0x00049db0) cell_app_pane_cp2_t1

0xc23a,	// (0x000516e6) grid_highlight_pane_cp1_ParamLimits

0xc23a,	// (0x000516e6) grid_highlight_pane_cp1

0x1c3a,	// (0x000470e6) cell_hwr_candidate_pane_cp1_ParamLimits

0x1c3a,	// (0x000470e6) cell_hwr_candidate_pane_cp1

0x1bed,	// (0x00047099) fep_hwr_candidate_drop_down_list_pane_g1

0x1c59,	// (0x00047105) fep_hwr_candidate_drop_down_list_pane_g2

0x1c66,	// (0x00047112) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfa7f,	// (0x00054f2b) fep_hwr_candidate_drop_down_list_pane_g

0x1c73,	// (0x0004711f) fep_hwr_candidate_drop_down_list_scroll_pane

0x1c7c,	// (0x00047128) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1c7c,	// (0x00047128) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1c89,	// (0x00047135) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1c89,	// (0x00047135) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1c96,	// (0x00047142) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1c96,	// (0x00047142) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1ca3,	// (0x0004714f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1ca3,	// (0x0004714f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1cbe,	// (0x0004716a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1cbe,	// (0x0004716a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1cd9,	// (0x00047185) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1cd9,	// (0x00047185) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1cf4,	// (0x000471a0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1cf4,	// (0x000471a0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1d0f,	// (0x000471bb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1d0f,	// (0x000471bb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfa86,	// (0x00054f32) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfa86,	// (0x00054f32) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4916,	// (0x00049dc2) cell_vkb_candidate_pane_cp1_ParamLimits

0x4916,	// (0x00049dc2) cell_vkb_candidate_pane_cp1

0xf1f4,	// (0x000546a0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xf1f4,	// (0x000546a0) fep_vkb_candidate_drop_down_list_pane_g1

0x4936,	// (0x00049de2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4936,	// (0x00049de2) fep_vkb_candidate_drop_down_list_pane_g2

0x4943,	// (0x00049def) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4943,	// (0x00049def) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfa97,	// (0x00054f43) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfa97,	// (0x00054f43) fep_vkb_candidate_drop_down_list_pane_g

0x4950,	// (0x00049dfc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4950,	// (0x00049dfc) fep_vkb_candidate_drop_down_list_scroll_pane

0x495d,	// (0x00049e09) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x495d,	// (0x00049e09) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x496a,	// (0x00049e16) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x496a,	// (0x00049e16) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4976,	// (0x00049e22) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4976,	// (0x00049e22) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf528,	// (0x000549d4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf528,	// (0x000549d4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf549,	// (0x000549f5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf549,	// (0x000549f5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4982,	// (0x00049e2e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4982,	// (0x00049e2e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x49a3,	// (0x00049e4f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x49a3,	// (0x00049e4f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x49c4,	// (0x00049e70) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x49c4,	// (0x00049e70) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfa9e,	// (0x00054f4a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfa9e,	// (0x00054f4a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8fda,	// (0x0004e486) title_pane_g1_ParamLimits

0x8feb,	// (0x0004e497) title_pane_g2_ParamLimits

0xf56a,	// (0x00054a16) title_pane_g_ParamLimits

0xc756,	// (0x00051c02) aid_call2_pane

0xc75e,	// (0x00051c0a) aid_call_pane

0xc766,	// (0x00051c12) popup_clock_analogue_window_g1

0xc766,	// (0x00051c12) popup_clock_analogue_window_g2

0x1095,	// (0x00046541) popup_clock_analogue_window_g3

0x109e,	// (0x0004654a) popup_clock_analogue_window_g4

0xb735,	// (0x00050be1) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00054bc5) popup_clock_analogue_window_g

0x10a6,	// (0x00046552) popup_clock_analogue_window_t1

0x10b4,	// (0x00046560) clock_digital_number_pane_ParamLimits

0x10b4,	// (0x00046560) clock_digital_number_pane

0x10c0,	// (0x0004656c) clock_digital_number_pane_cp02_ParamLimits

0x10c0,	// (0x0004656c) clock_digital_number_pane_cp02

0x10cc,	// (0x00046578) clock_digital_number_pane_cp03_ParamLimits

0x10cc,	// (0x00046578) clock_digital_number_pane_cp03

0x10d8,	// (0x00046584) clock_digital_number_pane_cp04_ParamLimits

0x10d8,	// (0x00046584) clock_digital_number_pane_cp04

0x10e4,	// (0x00046590) clock_digital_separator_pane_ParamLimits

0x10e4,	// (0x00046590) clock_digital_separator_pane

0x10f0,	// (0x0004659c) popup_clock_digital_window_t1_ParamLimits

0x10f0,	// (0x0004659c) popup_clock_digital_window_t1

0xb735,	// (0x00050be1) clock_digital_number_pane_g1

0xb735,	// (0x00050be1) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x00054bd0) clock_digital_number_pane_g

0xb735,	// (0x00050be1) clock_digital_separator_pane_g1

0xb735,	// (0x00050be1) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x00054bd0) clock_digital_separator_pane_g

0x9cea,	// (0x0004f196) aid_fill_nsta_ParamLimits

0x9e19,	// (0x0004f2c5) indicator_nsta_pane_ParamLimits

0xd09a,	// (0x00052546) popup_clock_analogue_window

0xd09a,	// (0x00052546) popup_clock_digital_window

0xd34d,	// (0x000527f9) grid_indicator_nsta_pane_ParamLimits

0xec05,	// (0x000540b1) clock_nsta_pane_t2

0x0001,

0x0167,	// (0x00045613) clock_nsta_pane_t

0x1059,	// (0x00046505) aid_size_max_handle

0x83bc,	// (0x0004d868) aid_size_min_handle

0xcc75,	// (0x00052121) editor_scroll_pane

0x49df,	// (0x00049e8b) ex_editor_pane

0xc34d,	// (0x000517f9) scroll_pane_cp13

0xc1cd,	// (0x00051679) scroll_pane_cp14

0xc790,	// (0x00051c3c) scroll_pane_cp36

0x948b,	// (0x0004e937) list_single_graphic_hl_pane_cp2_ParamLimits

0x948b,	// (0x0004e937) list_single_graphic_hl_pane_cp2

0xa51d,	// (0x0004f9c9) list_single_graphic_hl_pane_ParamLimits

0xa51d,	// (0x0004f9c9) list_single_graphic_hl_pane

0x35e2,	// (0x00048a8e) aid_size_min_hl_cp1

0x49e7,	// (0x00049e93) list_highlight_pane_cp34_ParamLimits

0x49e7,	// (0x00049e93) list_highlight_pane_cp34

0x49f8,	// (0x00049ea4) list_single_graphic_hl_pane_g1_ParamLimits

0x49f8,	// (0x00049ea4) list_single_graphic_hl_pane_g1

0x8e44,	// (0x0004e2f0) list_single_graphic_hl_pane_g2_ParamLimits

0x8e44,	// (0x0004e2f0) list_single_graphic_hl_pane_g2

0x8e44,	// (0x0004e2f0) list_single_graphic_hl_pane_g3_ParamLimits

0x8e44,	// (0x0004e2f0) list_single_graphic_hl_pane_g3

0x3c0e,	// (0x000490ba) list_single_graphic_hl_pane_g4_ParamLimits

0x3c0e,	// (0x000490ba) list_single_graphic_hl_pane_g4

0x8e50,	// (0x0004e2fc) list_single_graphic_hl_pane_g5_ParamLimits

0x8e50,	// (0x0004e2fc) list_single_graphic_hl_pane_g5

0x0004,

0xfaaf,	// (0x00054f5b) list_single_graphic_hl_pane_g_ParamLimits

0xfaaf,	// (0x00054f5b) list_single_graphic_hl_pane_g

0x8e64,	// (0x0004e310) list_single_graphic_hl_pane_t1_ParamLimits

0x8e64,	// (0x0004e310) list_single_graphic_hl_pane_t1

0x4a05,	// (0x00049eb1) aid_size_min_hl_cp2

0x4a0e,	// (0x00049eba) list_highlight_pane_cp34_cp2_ParamLimits

0x4a0e,	// (0x00049eba) list_highlight_pane_cp34_cp2

0x49f8,	// (0x00049ea4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x49f8,	// (0x00049ea4) list_single_graphic_hl_pane_g1_cp2

0x4a1b,	// (0x00049ec7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4a1b,	// (0x00049ec7) list_single_graphic_hl_pane_g2_cp2

0x4a27,	// (0x00049ed3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x4a27,	// (0x00049ed3) list_single_graphic_hl_pane_g3_cp2

0xcbac,	// (0x00052058) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcbac,	// (0x00052058) list_single_graphic_hl_pane_g4_cp2

0x4a35,	// (0x00049ee1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4a35,	// (0x00049ee1) list_single_graphic_hl_pane_g5_cp2

0x83ee,	// (0x0004d89a) control_pane_g4_ParamLimits

0x83ee,	// (0x0004d89a) control_pane_g4

0xc385,	// (0x00051831) bg_popup_sub_pane_cp10_ParamLimits

0xef69,	// (0x00054415) list_choice_list_pane_ParamLimits

0xef78,	// (0x00054424) scroll_pane_cp23

0xbb9a,	// (0x00051046) bg_popup_preview_window_pane_cp02_ParamLimits

0xf4a7,	// (0x00054953) list_preview_fixed_pane_ParamLimits

0xf4bd,	// (0x00054969) list_preview_fixed_pane_cp_ParamLimits

0xf4bd,	// (0x00054969) list_preview_fixed_pane_cp

0xf4c9,	// (0x00054975) popup_preview_fixed_window_g1_ParamLimits

0xf4c9,	// (0x00054975) popup_preview_fixed_window_g1

0xf4d5,	// (0x00054981) popup_preview_fixed_window_g2_ParamLimits

0xf4d5,	// (0x00054981) popup_preview_fixed_window_g2

0x0002,

0xfa37,	// (0x00054ee3) popup_preview_fixed_window_g_ParamLimits

0xfa37,	// (0x00054ee3) popup_preview_fixed_window_g

0x0fcd,	// (0x00046479) aid_navi_side_left_pane_ParamLimits

0x0fe2,	// (0x0004648e) aid_navi_side_right_pane_ParamLimits

0x0ffa,	// (0x000464a6) navi_icon_pane_stacon_ParamLimits

0x100e,	// (0x000464ba) navi_navi_pane_stacon_ParamLimits

0x0ffa,	// (0x000464a6) navi_text_pane_stacon_ParamLimits

0xb72b,	// (0x00050bd7) main_text_info_pane

0x4a5f,	// (0x00049f0b) listscroll_text_info_pane

0x4a67,	// (0x00049f13) list_text_info_pane_ParamLimits

0x4a67,	// (0x00049f13) list_text_info_pane

0x4a76,	// (0x00049f22) scroll_pane_cp24_ParamLimits

0x4a76,	// (0x00049f22) scroll_pane_cp24

0xa8ed,	// (0x0004fd99) list_text_info_pane_t1_ParamLimits

0xa8ed,	// (0x0004fd99) list_text_info_pane_t1

0x9652,	// (0x0004eafe) popup_fast_swap2_window_ParamLimits

0x9652,	// (0x0004eafe) popup_fast_swap2_window

0x4acd,	// (0x00049f79) aid_size_cell_fast2

0xb72b,	// (0x00050bd7) bg_popup_window_pane_cp17

0xd54c,	// (0x000529f8) heading_pane_cp2

0xbe63,	// (0x0005130f) listscroll_fast2_pane

0x4ad7,	// (0x00049f83) grid_fast2_pane

0x4ae1,	// (0x00049f8d) listscroll_fast2_pane_g1

0x4ae9,	// (0x00049f95) listscroll_fast2_pane_g2

0x0001,

0xfaba,	// (0x00054f66) listscroll_fast2_pane_g

0xc34d,	// (0x000517f9) scroll_pane_cp26

0x4af3,	// (0x00049f9f) cell_fast2_pane_ParamLimits

0x4af3,	// (0x00049f9f) cell_fast2_pane

0x4b08,	// (0x00049fb4) cell_fast2_pane_g1

0x4b11,	// (0x00049fbd) cell_fast2_pane_g2

0x4b1a,	// (0x00049fc6) cell_fast2_pane_g3

0x0002,

0xfabf,	// (0x00054f6b) cell_fast2_pane_g

0xbef7,	// (0x000513a3) grid_highlight_pane_cp9

0xbf0c,	// (0x000513b8) main_eswt_pane_ParamLimits

0xbf0c,	// (0x000513b8) main_eswt_pane

0x4a8b,	// (0x00049f37) list_single_text_info_pane

0x4b22,	// (0x00049fce) eswt_ctrl_button_pane

0x4b22,	// (0x00049fce) eswt_ctrl_canvas_pane

0x4b2a,	// (0x00049fd6) eswt_ctrl_combo_pane

0x4b22,	// (0x00049fce) eswt_ctrl_default_pane

0x4b22,	// (0x00049fce) eswt_ctrl_label_pane

0x4b32,	// (0x00049fde) eswt_ctrl_wait_pane

0x4b3a,	// (0x00049fe6) eswt_shell_pane

0xb72b,	// (0x00050bd7) listscroll_eswt_app_pane

0x4b5a,	// (0x0004a006) popup_eswt_tasktip_window_ParamLimits

0x4b5a,	// (0x0004a006) popup_eswt_tasktip_window

0xd297,	// (0x00052743) bg_popup_window_pane_cp18

0x4b6b,	// (0x0004a017) eswt_control_pane_g1_ParamLimits

0x4b6b,	// (0x0004a017) eswt_control_pane_g1

0x4b78,	// (0x0004a024) eswt_control_pane_g2_ParamLimits

0x4b78,	// (0x0004a024) eswt_control_pane_g2

0x4b85,	// (0x0004a031) eswt_control_pane_g3_ParamLimits

0x4b85,	// (0x0004a031) eswt_control_pane_g3

0x4b92,	// (0x0004a03e) eswt_control_pane_g4_ParamLimits

0x4b92,	// (0x0004a03e) eswt_control_pane_g4

0x0003,

0xfac6,	// (0x00054f72) eswt_control_pane_g_ParamLimits

0xfac6,	// (0x00054f72) eswt_control_pane_g

0xc23a,	// (0x000516e6) bg_button_pane_ParamLimits

0xc23a,	// (0x000516e6) bg_button_pane

0xbf0c,	// (0x000513b8) common_borders_pane_copy2_ParamLimits

0xbf0c,	// (0x000513b8) common_borders_pane_copy2

0x4b9f,	// (0x0004a04b) control_button_pane_g1_ParamLimits

0x4b9f,	// (0x0004a04b) control_button_pane_g1

0x4bab,	// (0x0004a057) control_button_pane_g2_ParamLimits

0x4bab,	// (0x0004a057) control_button_pane_g2

0x4bb7,	// (0x0004a063) control_button_pane_g3_ParamLimits

0x4bb7,	// (0x0004a063) control_button_pane_g3

0x0002,

0xfacf,	// (0x00054f7b) control_button_pane_g_ParamLimits

0xfacf,	// (0x00054f7b) control_button_pane_g

0x4bcb,	// (0x0004a077) control_button_pane_t1

0x4bd9,	// (0x0004a085) control_button_pane_t2

0x0001,

0xfad6,	// (0x00054f82) control_button_pane_t

0xd1a7,	// (0x00052653) bg_button_pane_g1

0xd1b7,	// (0x00052663) bg_button_pane_g2

0xd1af,	// (0x0005265b) bg_button_pane_g3

0xd1c7,	// (0x00052673) bg_button_pane_g4

0xd1bf,	// (0x0005266b) bg_button_pane_g5

0xd1cf,	// (0x0005267b) bg_button_pane_g6

0xd1d7,	// (0x00052683) bg_button_pane_g7

0xd1e7,	// (0x00052693) bg_button_pane_g8

0xd1df,	// (0x0005268b) bg_button_pane_g9

0x0008,

0xf877,	// (0x00054d23) bg_button_pane_g

0xef24,	// (0x000543d0) common_borders_pane_ParamLimits

0xef24,	// (0x000543d0) common_borders_pane

0x4b6b,	// (0x0004a017) eswt_control_pane_g1_copy1_ParamLimits

0x4b6b,	// (0x0004a017) eswt_control_pane_g1_copy1

0x4b78,	// (0x0004a024) eswt_control_pane_g2_copy1_ParamLimits

0x4b78,	// (0x0004a024) eswt_control_pane_g2_copy1

0x4b85,	// (0x0004a031) eswt_control_pane_g3_copy1_ParamLimits

0x4b85,	// (0x0004a031) eswt_control_pane_g3_copy1

0x4b92,	// (0x0004a03e) eswt_control_pane_g4_copy1_ParamLimits

0x4b92,	// (0x0004a03e) eswt_control_pane_g4_copy1

0xef5f,	// (0x0005440b) bg_eswt_ctrl_canvas_pane_g1

0xef24,	// (0x000543d0) common_borders_pane_cp2_ParamLimits

0xef24,	// (0x000543d0) common_borders_pane_cp2

0xef24,	// (0x000543d0) common_borders_pane_cp3_ParamLimits

0xef24,	// (0x000543d0) common_borders_pane_cp3

0x4be7,	// (0x0004a093) separator_horizontal_pane

0x4bef,	// (0x0004a09b) separator_vertical_pane

0x4b6b,	// (0x0004a017) eswt_control_pane_g1_copy2_ParamLimits

0x4b6b,	// (0x0004a017) eswt_control_pane_g1_copy2

0x4b78,	// (0x0004a024) eswt_control_pane_g2_copy2_ParamLimits

0x4b78,	// (0x0004a024) eswt_control_pane_g2_copy2

0x4b85,	// (0x0004a031) eswt_control_pane_g3_copy2_ParamLimits

0x4b85,	// (0x0004a031) eswt_control_pane_g3_copy2

0x4b92,	// (0x0004a03e) eswt_control_pane_g4_copy2_ParamLimits

0x4b92,	// (0x0004a03e) eswt_control_pane_g4_copy2

0xb72b,	// (0x00050bd7) common_borders_pane_cp4

0x4bf8,	// (0x0004a0a4) separator_horizontal_pane_g1

0x4c01,	// (0x0004a0ad) separator_horizontal_pane_g2

0x4c0a,	// (0x0004a0b6) separator_horizontal_pane_g3

0x0002,

0xfadb,	// (0x00054f87) separator_horizontal_pane_g

0x4b6b,	// (0x0004a017) eswt_control_pane_g1_copy3_ParamLimits

0x4b6b,	// (0x0004a017) eswt_control_pane_g1_copy3

0x4b78,	// (0x0004a024) eswt_control_pane_g2_copy3_ParamLimits

0x4b78,	// (0x0004a024) eswt_control_pane_g2_copy3

0x4b85,	// (0x0004a031) eswt_control_pane_g3_copy3_ParamLimits

0x4b85,	// (0x0004a031) eswt_control_pane_g3_copy3

0x4b92,	// (0x0004a03e) eswt_control_pane_g4_copy3_ParamLimits

0x4b92,	// (0x0004a03e) eswt_control_pane_g4_copy3

0xb72b,	// (0x00050bd7) common_borders_pane_cp5

0x4c13,	// (0x0004a0bf) separator_vertical_pane_g1

0x4c1c,	// (0x0004a0c8) separator_vertical_pane_g2

0x4c25,	// (0x0004a0d1) separator_vertical_pane_g3

0x0002,

0xfae2,	// (0x00054f8e) separator_vertical_pane_g

0x4b6b,	// (0x0004a017) eswt_control_pane_g1_copy4_ParamLimits

0x4b6b,	// (0x0004a017) eswt_control_pane_g1_copy4

0x4b78,	// (0x0004a024) eswt_control_pane_g2_copy4_ParamLimits

0x4b78,	// (0x0004a024) eswt_control_pane_g2_copy4

0x4b85,	// (0x0004a031) eswt_control_pane_g3_copy4_ParamLimits

0x4b85,	// (0x0004a031) eswt_control_pane_g3_copy4

0x4b92,	// (0x0004a03e) eswt_control_pane_g4_copy4_ParamLimits

0x4b92,	// (0x0004a03e) eswt_control_pane_g4_copy4

0xa90b,	// (0x0004fdb7) eswt_ctrl_combo_button_pane

0xa913,	// (0x0004fdbf) eswt_ctrl_input_pane

0xa91b,	// (0x0004fdc7) popup_choice_list_window_cp70

0xa923,	// (0x0004fdcf) eswt_ctrl_input_pane_t1

0xb72b,	// (0x00050bd7) input_focus_pane_cp70

0xef24,	// (0x000543d0) bg_button_pane_cp70_ParamLimits

0xef24,	// (0x000543d0) bg_button_pane_cp70

0xa931,	// (0x0004fddd) eswt_ctrl_combo_button_pane_g1

0x4c5c,	// (0x0004a108) wait_bar_pane_cp70

0xd297,	// (0x00052743) bg_popup_window_pane_cp70_ParamLimits

0xd297,	// (0x00052743) bg_popup_window_pane_cp70

0x4c64,	// (0x0004a110) popup_eswt_tasktip_window_t1

0x4c7a,	// (0x0004a126) wait_bar_pane_cp71_ParamLimits

0x4c7a,	// (0x0004a126) wait_bar_pane_cp71

0x4c86,	// (0x0004a132) grid_eswt_app_pane

0xc59c,	// (0x00051a48) scroll_pane_cp70

0xa939,	// (0x0004fde5) cell_eswt_app_pane_ParamLimits

0xa939,	// (0x0004fde5) cell_eswt_app_pane

0xa963,	// (0x0004fe0f) cell_eswt_app_pane_g1_ParamLimits

0xa963,	// (0x0004fe0f) cell_eswt_app_pane_g1

0xa992,	// (0x0004fe3e) cell_eswt_app_pane_g2_ParamLimits

0xa992,	// (0x0004fe3e) cell_eswt_app_pane_g2

0x0001,

0x02db,	// (0x00045787) cell_eswt_app_pane_g_ParamLimits

0x02db,	// (0x00045787) cell_eswt_app_pane_g

0xa9bb,	// (0x0004fe67) cell_eswt_app_pane_t1_ParamLimits

0xa9bb,	// (0x0004fe67) cell_eswt_app_pane_t1

0x4d4d,	// (0x0004a1f9) grid_highlight_pane_cp70_ParamLimits

0x4d4d,	// (0x0004a1f9) grid_highlight_pane_cp70

0xcb48,	// (0x00051ff4) set_content_pane_g1

0xce4c,	// (0x000522f8) status_small_volume_pane

0x1d2a,	// (0x000471d6) status_small_volume_pane_g1

0x1d32,	// (0x000471de) volume_small2_pane

0x1d3b,	// (0x000471e7) volume_small2_pane_g1

0x1d44,	// (0x000471f0) volume_small2_pane_g2

0x1d4d,	// (0x000471f9) volume_small2_pane_g3

0x1d56,	// (0x00047202) volume_small2_pane_g4

0x1d5f,	// (0x0004720b) volume_small2_pane_g5

0x1d68,	// (0x00047214) volume_small2_pane_g6

0x1d71,	// (0x0004721d) volume_small2_pane_g7

0x1d7a,	// (0x00047226) volume_small2_pane_g8

0x1d83,	// (0x0004722f) volume_small2_pane_g9

0x1d8c,	// (0x00047238) volume_small2_pane_g10

0x0009,

0xfae9,	// (0x00054f95) volume_small2_pane_g

0xf301,	// (0x000547ad) fep_vkb_top_text_pane_g1_ParamLimits

0xa895,	// (0x0004fd41) fep_vkb_top_text_pane_t1_ParamLimits

0xf4e1,	// (0x0005498d) popup_preview_fixed_window_g3_ParamLimits

0xf4e1,	// (0x0005498d) popup_preview_fixed_window_g3

0x9c7d,	// (0x0004f129) popup_toolbar_trans_pane

0xa395,	// (0x0004f841) aid_height_set_list_ParamLimits

0xd6e4,	// (0x00052b90) aid_size_parent_ParamLimits

0xc385,	// (0x00051831) list_highlight_pane_cp2_ParamLimits

0xcb48,	// (0x00051ff4) set_content_pane_g1_ParamLimits

0x8e32,	// (0x0004e2de) list_single_image_pane_ParamLimits

0x8e32,	// (0x0004e2de) list_single_image_pane

0xa9ed,	// (0x0004fe99) aid_size_cell_image_ParamLimits

0xa9ed,	// (0x0004fe99) aid_size_cell_image

0xa9fa,	// (0x0004fea6) grid_single_image_pane_ParamLimits

0xa9fa,	// (0x0004fea6) grid_single_image_pane

0xc1d5,	// (0x00051681) list_single_image_pane_g1_ParamLimits

0xc1d5,	// (0x00051681) list_single_image_pane_g1

0xc254,	// (0x00051700) list_single_image_pane_g2_ParamLimits

0xc254,	// (0x00051700) list_single_image_pane_g2

0x0001,

0xfafe,	// (0x00054faa) list_single_image_pane_g_ParamLimits

0xfafe,	// (0x00054faa) list_single_image_pane_g

0x4d72,	// (0x0004a21e) list_single_image_pane_t1_ParamLimits

0x4d72,	// (0x0004a21e) list_single_image_pane_t1

0xaa06,	// (0x0004feb2) cell_image_list_pane_ParamLimits

0xaa06,	// (0x0004feb2) cell_image_list_pane

0xaa1a,	// (0x0004fec6) cell_image_list_pane_g1

0xaa23,	// (0x0004fecf) cell_image_list_pane_g2

0x0001,

0x02fa,	// (0x000457a6) cell_image_list_pane_g

0x4dae,	// (0x0004a25a) aid_size_cell_tb_trans_pane

0xc23a,	// (0x000516e6) bg_tb_trans_pane

0x4dc0,	// (0x0004a26c) grid_tb_trans_pane

0xd1a7,	// (0x00052653) bg_tb_trans_pane_g1

0xd1b7,	// (0x00052663) bg_tb_trans_pane_g2

0xd1af,	// (0x0005265b) bg_tb_trans_pane_g3

0xd1c7,	// (0x00052673) bg_tb_trans_pane_g4

0xd1bf,	// (0x0005266b) bg_tb_trans_pane_g5

0xd1e7,	// (0x00052693) bg_tb_trans_pane_g6

0xd1df,	// (0x0005268b) bg_tb_trans_pane_g7

0xd1cf,	// (0x0005267b) bg_tb_trans_pane_g8

0xd1d7,	// (0x00052683) bg_tb_trans_pane_g9

0x0008,

0xfb03,	// (0x00054faf) bg_tb_trans_pane_g

0x4dd4,	// (0x0004a280) cell_toolbar_trans_pane_ParamLimits

0x4dd4,	// (0x0004a280) cell_toolbar_trans_pane

0xef5f,	// (0x0005440b) cell_toolbar_trans_pane_g1

0xa73e,	// (0x0004fbea) list_form2_midp_pane_t1

0xa74c,	// (0x0004fbf8) list_form2_midp_pane_t2

0x0001,

0x01ad,	// (0x00045659) list_form2_midp_pane_t

0xecbc,	// (0x00054168) scroll_pane_cp51_ParamLimits

0xee32,	// (0x000542de) form2_midp_wait_pane_g1

0xee3b,	// (0x000542e7) form2_midp_wait_pane_g2

0xee44,	// (0x000542f0) form2_midp_wait_pane_g3

0x0002,

0x01c2,	// (0x0004566e) form2_midp_wait_pane_g

0xb79b,	// (0x00050c47) list_highlight_pane_cp21_ParamLimits

0xee64,	// (0x00054310) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xee73,	// (0x0005431f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe35d,	// (0x00053809) list_single_2graphic_im_pane_ParamLimits

0xe35d,	// (0x00053809) list_single_2graphic_im_pane

0xaa2c,	// (0x0004fed8) list_single_2graphic_im_pane_g1_ParamLimits

0xaa2c,	// (0x0004fed8) list_single_2graphic_im_pane_g1

0xaa3d,	// (0x0004fee9) list_single_2graphic_im_pane_g2_ParamLimits

0xaa3d,	// (0x0004fee9) list_single_2graphic_im_pane_g2

0xaa49,	// (0x0004fef5) list_single_2graphic_im_pane_g3_ParamLimits

0xaa49,	// (0x0004fef5) list_single_2graphic_im_pane_g3

0x0003,

0xfb16,	// (0x00054fc2) list_single_2graphic_im_pane_g_ParamLimits

0xfb16,	// (0x00054fc2) list_single_2graphic_im_pane_g

0xaa5d,	// (0x0004ff09) list_single_2graphic_im_pane_t1_ParamLimits

0xaa5d,	// (0x0004ff09) list_single_2graphic_im_pane_t1

0xf4ed,	// (0x00054999) list_single_graphic_2heading_pane_fp_ParamLimits

0xf4ed,	// (0x00054999) list_single_graphic_2heading_pane_fp

0x3454,	// (0x00048900) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3454,	// (0x00048900) list_single_graphic_2heading_pane_fp_g1

0xf504,	// (0x000549b0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf504,	// (0x000549b0) list_single_graphic_2heading_pane_fp_g2

0x2964,	// (0x00047e10) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2964,	// (0x00047e10) list_single_graphic_2heading_pane_fp_g3

0x3429,	// (0x000488d5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3429,	// (0x000488d5) list_single_graphic_2heading_pane_fp_g4

0xf510,	// (0x000549bc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf510,	// (0x000549bc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfa47,	// (0x00054ef3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfa47,	// (0x00054ef3) list_single_graphic_2heading_pane_fp_g

0x360b,	// (0x00048ab7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x360b,	// (0x00048ab7) list_single_graphic_2heading_pane_fp_t1

0x348c,	// (0x00048938) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x348c,	// (0x00048938) list_single_graphic_2heading_pane_fp_t2

0x3621,	// (0x00048acd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3621,	// (0x00048acd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfb1f,	// (0x00054fcb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfb1f,	// (0x00054fcb) list_single_graphic_2heading_pane_fp_t

0xf00d,	// (0x000544b9) fep_hwr_write_pane_g5_ParamLimits

0xf00d,	// (0x000544b9) fep_hwr_write_pane_g5

0xf019,	// (0x000544c5) fep_hwr_write_pane_g6_ParamLimits

0xf019,	// (0x000544c5) fep_hwr_write_pane_g6

0x4b3a,	// (0x00049fe6) eswt_shell_pane_ParamLimits

0xd297,	// (0x00052743) bg_popup_window_pane_cp18_ParamLimits

0xe29d,	// (0x00053749) heading_pane_cp70

0x4c64,	// (0x0004a110) popup_eswt_tasktip_window_t1_ParamLimits

0x9d3e,	// (0x0004f1ea) aid_touch_tab_arrow_left

0x9d54,	// (0x0004f200) aid_touch_tab_arrow_right

0x9003,	// (0x0004e4af) title_pane_g3_ParamLimits

0x9003,	// (0x0004e4af) title_pane_g3

0xc1f9,	// (0x000516a5) set_value_pane_g1

0x9c7d,	// (0x0004f129) popup_toolbar_trans_pane_ParamLimits

0x4dae,	// (0x0004a25a) aid_size_cell_tb_trans_pane_ParamLimits

0xc23a,	// (0x000516e6) bg_tb_trans_pane_ParamLimits

0x4dc0,	// (0x0004a26c) grid_tb_trans_pane_ParamLimits

0xbb9a,	// (0x00051046) cont_note_pane_ParamLimits

0xbb9a,	// (0x00051046) cont_note_pane

0xbf0c,	// (0x000513b8) cont_snote2_single_text_pane_ParamLimits

0xbf0c,	// (0x000513b8) cont_snote2_single_text_pane

0xbf0c,	// (0x000513b8) cont_snote2_single_graphic_pane_ParamLimits

0xbf0c,	// (0x000513b8) cont_snote2_single_graphic_pane

0xd774,	// (0x00052c20) cont_note_wait_pane_ParamLimits

0xd774,	// (0x00052c20) cont_note_wait_pane

0xd774,	// (0x00052c20) cont_note_image_pane_ParamLimits

0xd774,	// (0x00052c20) cont_note_image_pane

0x4e68,	// (0x0004a314) popup_note2_window_g1_ParamLimits

0x4e68,	// (0x0004a314) popup_note2_window_g1

0x4e99,	// (0x0004a345) popup_note2_window_t1_ParamLimits

0x4e99,	// (0x0004a345) popup_note2_window_t1

0x4ede,	// (0x0004a38a) popup_note2_window_t2_ParamLimits

0x4ede,	// (0x0004a38a) popup_note2_window_t2

0x4f23,	// (0x0004a3cf) popup_note2_window_t3_ParamLimits

0x4f23,	// (0x0004a3cf) popup_note2_window_t3

0x4f68,	// (0x0004a414) popup_note2_window_t4_ParamLimits

0x4f68,	// (0x0004a414) popup_note2_window_t4

0xbc12,	// (0x000510be) popup_note2_window_t5_ParamLimits

0xbc12,	// (0x000510be) popup_note2_window_t5

0x0004,

0xfb2b,	// (0x00054fd7) popup_note2_window_t_ParamLimits

0xfb2b,	// (0x00054fd7) popup_note2_window_t

0x4f97,	// (0x0004a443) popup_note2_image_window_g1_ParamLimits

0x4f97,	// (0x0004a443) popup_note2_image_window_g1

0x4fa3,	// (0x0004a44f) popup_note2_image_window_g2_ParamLimits

0x4fa3,	// (0x0004a44f) popup_note2_image_window_g2

0x0001,

0xfb36,	// (0x00054fe2) popup_note2_image_window_g_ParamLimits

0xfb36,	// (0x00054fe2) popup_note2_image_window_g

0x4fb5,	// (0x0004a461) popup_note2_image_window_t1_ParamLimits

0x4fb5,	// (0x0004a461) popup_note2_image_window_t1

0x4fcd,	// (0x0004a479) popup_note2_image_window_t2_ParamLimits

0x4fcd,	// (0x0004a479) popup_note2_image_window_t2

0x4fe5,	// (0x0004a491) popup_note2_image_window_t3_ParamLimits

0x4fe5,	// (0x0004a491) popup_note2_image_window_t3

0x0002,

0xfb3b,	// (0x00054fe7) popup_note2_image_window_t_ParamLimits

0xfb3b,	// (0x00054fe7) popup_note2_image_window_t

0xd782,	// (0x00052c2e) popup_note2_wait_window_g1_ParamLimits

0xd782,	// (0x00052c2e) popup_note2_wait_window_g1

0xd78e,	// (0x00052c3a) popup_note2_wait_window_g2_ParamLimits

0xd78e,	// (0x00052c3a) popup_note2_wait_window_g2

0xd79a,	// (0x00052c46) popup_note2_wait_window_g3_ParamLimits

0xd79a,	// (0x00052c46) popup_note2_wait_window_g3

0x0002,

0xf859,	// (0x00054d05) popup_note2_wait_window_g_ParamLimits

0xf859,	// (0x00054d05) popup_note2_wait_window_g

0x5001,	// (0x0004a4ad) popup_note2_wait_window_t1_ParamLimits

0x5001,	// (0x0004a4ad) popup_note2_wait_window_t1

0x501f,	// (0x0004a4cb) popup_note2_wait_window_t2_ParamLimits

0x501f,	// (0x0004a4cb) popup_note2_wait_window_t2

0x503d,	// (0x0004a4e9) popup_note2_wait_window_t3_ParamLimits

0x503d,	// (0x0004a4e9) popup_note2_wait_window_t3

0x504f,	// (0x0004a4fb) popup_note2_wait_window_t4_ParamLimits

0x504f,	// (0x0004a4fb) popup_note2_wait_window_t4

0x0003,

0xfb42,	// (0x00054fee) popup_note2_wait_window_t_ParamLimits

0xfb42,	// (0x00054fee) popup_note2_wait_window_t

0x5061,	// (0x0004a50d) wait_bar2_pane_ParamLimits

0x5061,	// (0x0004a50d) wait_bar2_pane

0x5079,	// (0x0004a525) popup_snote2_single_text_window_g1_ParamLimits

0x5079,	// (0x0004a525) popup_snote2_single_text_window_g1

0x50a1,	// (0x0004a54d) popup_snote2_single_text_window_t1_ParamLimits

0x50a1,	// (0x0004a54d) popup_snote2_single_text_window_t1

0x50ed,	// (0x0004a599) popup_snote2_single_text_window_t2_ParamLimits

0x50ed,	// (0x0004a599) popup_snote2_single_text_window_t2

0x5139,	// (0x0004a5e5) popup_snote2_single_text_window_t3_ParamLimits

0x5139,	// (0x0004a5e5) popup_snote2_single_text_window_t3

0x517a,	// (0x0004a626) popup_snote2_single_text_window_t4_ParamLimits

0x517a,	// (0x0004a626) popup_snote2_single_text_window_t4

0x51b0,	// (0x0004a65c) popup_snote2_single_text_window_t5_ParamLimits

0x51b0,	// (0x0004a65c) popup_snote2_single_text_window_t5

0x0004,

0xfb4b,	// (0x00054ff7) popup_snote2_single_text_window_t_ParamLimits

0xfb4b,	// (0x00054ff7) popup_snote2_single_text_window_t

0x51db,	// (0x0004a687) popup_snote2_single_graphic_window_g1_ParamLimits

0x51db,	// (0x0004a687) popup_snote2_single_graphic_window_g1

0x5203,	// (0x0004a6af) popup_snote2_single_graphic_window_g2_ParamLimits

0x5203,	// (0x0004a6af) popup_snote2_single_graphic_window_g2

0x0001,

0xfb56,	// (0x00055002) popup_snote2_single_graphic_window_g_ParamLimits

0xfb56,	// (0x00055002) popup_snote2_single_graphic_window_g

0x522b,	// (0x0004a6d7) popup_snote2_single_graphic_window_t1_ParamLimits

0x522b,	// (0x0004a6d7) popup_snote2_single_graphic_window_t1

0x5277,	// (0x0004a723) popup_snote2_single_graphic_window_t2_ParamLimits

0x5277,	// (0x0004a723) popup_snote2_single_graphic_window_t2

0x5139,	// (0x0004a5e5) popup_snote2_single_graphic_window_t3_ParamLimits

0x5139,	// (0x0004a5e5) popup_snote2_single_graphic_window_t3

0x517a,	// (0x0004a626) popup_snote2_single_graphic_window_t4_ParamLimits

0x517a,	// (0x0004a626) popup_snote2_single_graphic_window_t4

0x51b0,	// (0x0004a65c) popup_snote2_single_graphic_window_t5_ParamLimits

0x51b0,	// (0x0004a65c) popup_snote2_single_graphic_window_t5

0x0004,

0xfb5b,	// (0x00055007) popup_snote2_single_graphic_window_t_ParamLimits

0xfb5b,	// (0x00055007) popup_snote2_single_graphic_window_t

0xec6c,	// (0x00054118) clock_nsta_pane_cp2_t1

0xec6c,	// (0x00054118) clock_nsta_pane_cp2_t2

0x0001,

0x0183,	// (0x0004562f) clock_nsta_pane_cp2_t

0x2ad9,	// (0x00047f85) form_field_data_wide_pane_g1_ParamLimits

0xc1d5,	// (0x00051681) form_field_data_wide_pane_g2_ParamLimits

0xc1d5,	// (0x00051681) form_field_data_wide_pane_g2

0xc254,	// (0x00051700) form_field_data_wide_pane_g3_ParamLimits

0xc254,	// (0x00051700) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x00054b48) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x00054b48) form_field_data_wide_pane_g

0xa654,	// (0x0004fb00) grid_touch_3_pane_ParamLimits

0xa654,	// (0x0004fb00) grid_touch_3_pane

0xaa8e,	// (0x0004ff3a) cell_touch_3_pane_ParamLimits

0xaa8e,	// (0x0004ff3a) cell_touch_3_pane

0xef5f,	// (0x0005440b) cell_touch_3_pane_g1

0xef5f,	// (0x0005440b) cell_touch_3_pane_g2

0x0001,

0x0203,	// (0x000456af) cell_touch_3_pane_g

0xbc44,	// (0x000510f0) cont_query_data_pane

0xbc4c,	// (0x000510f8) cont_query_data_pane_cp1

0x52f2,	// (0x0004a79e) button_value_adjust_pane_cp7

0x52fa,	// (0x0004a7a6) query_popup_pane_cp3

0xc7c2,	// (0x00051c6e) bg_popup_sub_pane_cp22_ParamLimits

0x110f,	// (0x000465bb) navi_navi_volume_pane_cp2

0x112a,	// (0x000465d6) popup_side_volume_key_window_g2

0x1139,	// (0x000465e5) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00054bda) popup_side_volume_key_window_g

0x1156,	// (0x00046602) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00054be1) popup_side_volume_key_window_t

0xca12,	// (0x00051ebe) popup_side_volume_key_window_ParamLimits

0x8b6d,	// (0x0004e019) list_double_graphic_pane_g4_ParamLimits

0x8b6d,	// (0x0004e019) list_double_graphic_pane_g4

0x8e1e,	// (0x0004e2ca) list_single_2heading_msg_pane_ParamLimits

0x8e1e,	// (0x0004e2ca) list_single_2heading_msg_pane

0x8e7a,	// (0x0004e326) list_single_2heading_msg_pane_g1_ParamLimits

0x8e7a,	// (0x0004e326) list_single_2heading_msg_pane_g1

0x8e86,	// (0x0004e332) list_single_2heading_msg_pane_g2_ParamLimits

0x8e86,	// (0x0004e332) list_single_2heading_msg_pane_g2

0x8e99,	// (0x0004e345) list_single_2heading_msg_pane_g3_ParamLimits

0x8e99,	// (0x0004e345) list_single_2heading_msg_pane_g3

0x8ea5,	// (0x0004e351) list_single_2heading_msg_pane_g4_ParamLimits

0x8ea5,	// (0x0004e351) list_single_2heading_msg_pane_g4

0x0003,

0xfb66,	// (0x00055012) list_single_2heading_msg_pane_g_ParamLimits

0xfb66,	// (0x00055012) list_single_2heading_msg_pane_g

0x8ebd,	// (0x0004e369) list_single_2heading_msg_pane_t1_ParamLimits

0x8ebd,	// (0x0004e369) list_single_2heading_msg_pane_t1

0x8ee5,	// (0x0004e391) list_single_2heading_msg_pane_t2_ParamLimits

0x8ee5,	// (0x0004e391) list_single_2heading_msg_pane_t2

0x8f50,	// (0x0004e3fc) list_single_2heading_msg_pane_t3_ParamLimits

0x8f50,	// (0x0004e3fc) list_single_2heading_msg_pane_t3

0x36d6,	// (0x00048b82) list_single_2heading_msg_pane_t4_ParamLimits

0x36d6,	// (0x00048b82) list_single_2heading_msg_pane_t4

0x0003,

0xfb6f,	// (0x0005501b) list_single_2heading_msg_pane_t_ParamLimits

0xfb6f,	// (0x0005501b) list_single_2heading_msg_pane_t

0xb749,	// (0x00050bf5) title_pane_g4_ParamLimits

0xb749,	// (0x00050bf5) title_pane_g4

0x0f1d,	// (0x000463c9) title_pane_stacon_g3_ParamLimits

0x0f1d,	// (0x000463c9) title_pane_stacon_g3

0x4e2b,	// (0x0004a2d7) list_single_2graphic_im_pane_g4_ParamLimits

0x4e2b,	// (0x0004a2d7) list_single_2graphic_im_pane_g4

0xe0c1,	// (0x0005356d) popup_side_volume_key_window_cp

0xe58d,	// (0x00053a39) main_idle_act2_pane_t1

0x14d9,	// (0x00046985) toolbar_button_pane_g10

0x9320,	// (0x0004e7cc) popup_toolbar_window_cp1

0xec5d,	// (0x00054109) clock_nsta_pane_cp_t1

0xec5d,	// (0x00054109) clock_nsta_pane_cp_t2

0x0001,

0x017e,	// (0x0004562a) clock_nsta_pane_cp_t

0x110f,	// (0x000465bb) navi_navi_volume_pane_cp2_ParamLimits

0x111e,	// (0x000465ca) popup_side_volume_key_window_g1_ParamLimits

0x112a,	// (0x000465d6) popup_side_volume_key_window_g2_ParamLimits

0x1139,	// (0x000465e5) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00054bda) popup_side_volume_key_window_g_ParamLimits

0x1996,	// (0x00046e42) fep_hwr_aid_pane

0x1a3d,	// (0x00046ee9) bg_fep_hwr_top_pane_g4_ParamLimits

0xefcf,	// (0x0005447b) fep_hwr_top_pane_g1_ParamLimits

0xefe1,	// (0x0005448d) fep_hwr_top_pane_g2_ParamLimits

0x1a5d,	// (0x00046f09) fep_hwr_top_pane_g3_ParamLimits

0xf9ef,	// (0x00054e9b) fep_hwr_top_pane_g_ParamLimits

0x1a72,	// (0x00046f1e) fep_hwr_top_text_pane_ParamLimits

0xdeb6,	// (0x00053362) aid_touch_tab_arrow_arrow_2

0xdebf,	// (0x0005336b) aid_touch_tab_arrow_left_2

0x19aa,	// (0x00046e56) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x19e1,	// (0x00046e8d) fep_hwr_prediction_pane

0xf144,	// (0x000545f0) fep_vkb_prediction_pane

0xa875,	// (0x0004fd21) fep_vkb_side_pane_g3_ParamLimits

0xa875,	// (0x0004fd21) fep_vkb_side_pane_g3

0x1bed,	// (0x00047099) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1c59,	// (0x00047105) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1c66,	// (0x00047112) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfa7f,	// (0x00054f2b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1d95,	// (0x00047241) fep_hwr_prediction_pane_g1

0x1d9f,	// (0x0004724b) fep_hwr_prediction_pane_g2

0xefc7,	// (0x00054473) fep_hwr_prediction_pane_g3

0x1da7,	// (0x00047253) fep_hwr_prediction_pane_g4

0x0003,

0xfb78,	// (0x00055024) fep_hwr_prediction_pane_g

0x531f,	// (0x0004a7cb) fep_vkb_prediction_pane_g1

0x5329,	// (0x0004a7d5) fep_vkb_prediction_pane_g2

0x5331,	// (0x0004a7dd) fep_vkb_prediction_pane_g3

0x5339,	// (0x0004a7e5) fep_vkb_prediction_pane_g4

0x0003,

0xfb81,	// (0x0005502d) fep_vkb_prediction_pane_g

0x17c5,	// (0x00046c71) slider_set_pane_g3

0x17d9,	// (0x00046c85) slider_set_pane_g4

0x17f1,	// (0x00046c9d) slider_set_pane_g5

0x17c5,	// (0x00046c71) slider_set_pane_g6

0x1807,	// (0x00046cb3) slider_set_pane_g7

0xe322,	// (0x000537ce) slider_form_pane_g3

0xe32b,	// (0x000537d7) slider_form_pane_g4

0xe333,	// (0x000537df) slider_form_pane_g5

0xe322,	// (0x000537ce) slider_form_pane_g6

0xa4dc,	// (0x0004f988) slider_form_pane_g7

0xe82b,	// (0x00053cd7) slider_set_pane_vc_g3

0xe834,	// (0x00053ce0) slider_set_pane_vc_g4

0xe83d,	// (0x00053ce9) slider_set_pane_vc_g5

0xe82b,	// (0x00053cd7) slider_set_pane_vc_g6

0xe846,	// (0x00053cf2) slider_set_pane_vc_g7

0xe82b,	// (0x00053cd7) slider_form_pane_vc_g1

0xe834,	// (0x00053ce0) slider_form_pane_vc_g2

0xe83d,	// (0x00053ce9) slider_form_pane_vc_g3

0xe82b,	// (0x00053cd7) slider_form_pane_vc_g4

0xe9d5,	// (0x00053e81) slider_form_pane_vc_g5

0x0004,

0x0157,	// (0x00045603) slider_form_pane_vc_g

0xb72b,	// (0x00050bd7) main_idle_act3_pane

0x5341,	// (0x0004a7ed) ai3_links_pane

0xaad7,	// (0x0004ff83) popup_ai3_data_window_ParamLimits

0xaad7,	// (0x0004ff83) popup_ai3_data_window

0xb72b,	// (0x00050bd7) grid_ai3_links_pane

0xaaef,	// (0x0004ff9b) cell_ai3_links_pane_ParamLimits

0xaaef,	// (0x0004ff9b) cell_ai3_links_pane

0x537a,	// (0x0004a826) bg_popup_sub_pane_cp11

0x5387,	// (0x0004a833) cell_ai3_links_pane_g1

0xb72b,	// (0x00050bd7) bg_popup_sub_pane_cp12

0x53ac,	// (0x0004a858) heading_ai3_data_pane

0x53b4,	// (0x0004a860) list_ai3_gene_pane

0x53c0,	// (0x0004a86c) popup_ai3_data_window_g1

0x53c8,	// (0x0004a874) heading_ai3_data_pane_g1

0x53d0,	// (0x0004a87c) heading_ai3_data_pane_t1

0x53de,	// (0x0004a88a) list_double_ai3_gene_pane_ParamLimits

0x53de,	// (0x0004a88a) list_double_ai3_gene_pane

0x53eb,	// (0x0004a897) list_single_ai3_gene_pane_ParamLimits

0x53eb,	// (0x0004a897) list_single_ai3_gene_pane

0xef24,	// (0x000543d0) list_highlight_pane_cp7_ParamLimits

0xef24,	// (0x000543d0) list_highlight_pane_cp7

0x53f8,	// (0x0004a8a4) list_single_a13_gene_pane_t1_ParamLimits

0x53f8,	// (0x0004a8a4) list_single_a13_gene_pane_t1

0x540f,	// (0x0004a8bb) list_single_ai3_gene_pane_g1

0x5418,	// (0x0004a8c4) list_single_ai3_gene_pane_g2

0x0001,

0xfb8a,	// (0x00055036) list_single_ai3_gene_pane_g

0x5420,	// (0x0004a8cc) list_double_ai3_gene_pane_g1_ParamLimits

0x5420,	// (0x0004a8cc) list_double_ai3_gene_pane_g1

0x542c,	// (0x0004a8d8) list_double_ai3_gene_pane_t1_ParamLimits

0x542c,	// (0x0004a8d8) list_double_ai3_gene_pane_t1

0x5448,	// (0x0004a8f4) list_double_ai3_gene_pane_t2_ParamLimits

0x5448,	// (0x0004a8f4) list_double_ai3_gene_pane_t2

0x545d,	// (0x0004a909) list_double_ai3_gene_pane_t3_ParamLimits

0x545d,	// (0x0004a909) list_double_ai3_gene_pane_t3

0x0002,

0xfb8f,	// (0x0005503b) list_double_ai3_gene_pane_t_ParamLimits

0xfb8f,	// (0x0005503b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3637,	// (0x00048ae3) aid_size_min_col_2

0xaac1,	// (0x0004ff6d) aid_size_min_msg_ParamLimits

0xaac1,	// (0x0004ff6d) aid_size_min_msg

0xa889,	// (0x0004fd35) fep_vkb_top_text_pane_g2_ParamLimits

0xa889,	// (0x0004fd35) fep_vkb_top_text_pane_g2

0x0001,

0x01fe,	// (0x000456aa) fep_vkb_top_text_pane_g_ParamLimits

0x01fe,	// (0x000456aa) fep_vkb_top_text_pane_g

0xb72b,	// (0x00050bd7) main_hc_apps_shell_pane

0x547a,	// (0x0004a926) grid_hc_apps_pane_ParamLimits

0x547a,	// (0x0004a926) grid_hc_apps_pane

0x5489,	// (0x0004a935) list_hc_apps_pane

0x5491,	// (0x0004a93d) scroll_pane_cp37_ParamLimits

0x5491,	// (0x0004a93d) scroll_pane_cp37

0xab09,	// (0x0004ffb5) cell_hc_apps_pane_ParamLimits

0xab09,	// (0x0004ffb5) cell_hc_apps_pane

0xabc9,	// (0x00050075) cell_hc_apps_pane_g1_ParamLimits

0xabc9,	// (0x00050075) cell_hc_apps_pane_g1

0x557e,	// (0x0004aa2a) cell_hc_apps_pane_g2_ParamLimits

0x557e,	// (0x0004aa2a) cell_hc_apps_pane_g2

0x559a,	// (0x0004aa46) cell_hc_apps_pane_g3_ParamLimits

0x559a,	// (0x0004aa46) cell_hc_apps_pane_g3

0x0002,

0xfb96,	// (0x00055042) cell_hc_apps_pane_g_ParamLimits

0xfb96,	// (0x00055042) cell_hc_apps_pane_g

0xabf6,	// (0x000500a2) cell_hc_apps_pane_t1_ParamLimits

0xabf6,	// (0x000500a2) cell_hc_apps_pane_t1

0xbb9a,	// (0x00051046) grid_highlight_pane_cp10_ParamLimits

0xbb9a,	// (0x00051046) grid_highlight_pane_cp10

0xac34,	// (0x000500e0) list_single_hc_apps_pane_ParamLimits

0xac34,	// (0x000500e0) list_single_hc_apps_pane

0x566f,	// (0x0004ab1b) list_single_hc_apps_pane_g1

0x3c3e,	// (0x000490ea) list_single_hc_apps_pane_g2

0x0001,

0xfb9d,	// (0x00055049) list_single_hc_apps_pane_g

0x3c57,	// (0x00049103) list_single_hc_apps_pane_g2_copy1

0x36fb,	// (0x00048ba7) list_single_hc_apps_pane_t1

0xb79b,	// (0x00050c47) bg_set_opt_pane_cp_ParamLimits

0x0a0f,	// (0x00045ebb) setting_slider_pane_t1_ParamLimits

0x0a28,	// (0x00045ed4) setting_slider_pane_t2_ParamLimits

0x0a41,	// (0x00045eed) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00054a26) setting_slider_pane_t_ParamLimits

0x0a58,	// (0x00045f04) slider_set_pane_ParamLimits

0x13b7,	// (0x00046863) control_pane_g5_ParamLimits

0x13b7,	// (0x00046863) control_pane_g5

0xe2e4,	// (0x00053790) slider_set_pane_g1_ParamLimits

0x17b9,	// (0x00046c65) slider_set_pane_g2_ParamLimits

0x17c5,	// (0x00046c71) slider_set_pane_g3_ParamLimits

0x17d9,	// (0x00046c85) slider_set_pane_g4_ParamLimits

0x17f1,	// (0x00046c9d) slider_set_pane_g5_ParamLimits

0x17c5,	// (0x00046c71) slider_set_pane_g6_ParamLimits

0x1807,	// (0x00046cb3) slider_set_pane_g7_ParamLimits

0xf95e,	// (0x00054e0a) slider_set_pane_g_ParamLimits

0xcaf3,	// (0x00051f9f) navi_icon_text_pane_ParamLimits

0x9d0a,	// (0x0004f1b6) aid_fill_nsta_2_ParamLimits

0x9d3e,	// (0x0004f1ea) aid_touch_tab_arrow_left_ParamLimits

0x9d54,	// (0x0004f200) aid_touch_tab_arrow_right_ParamLimits

0x9def,	// (0x0004f29b) clock_nsta_pane_ParamLimits

0xa284,	// (0x0004f730) navi_icon_pane_g1_ParamLimits

0xa290,	// (0x0004f73c) navi_text_pane_t1_ParamLimits

0xa720,	// (0x0004fbcc) navi_icon_text_pane_g1_ParamLimits

0xa72c,	// (0x0004fbd8) navi_icon_text_pane_t1_ParamLimits

0x566f,	// (0x0004ab1b) list_single_hc_apps_pane_g1_ParamLimits

0x3c3e,	// (0x000490ea) list_single_hc_apps_pane_g2_ParamLimits

0xfb9d,	// (0x00055049) list_single_hc_apps_pane_g_ParamLimits

0x3c57,	// (0x00049103) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x36fb,	// (0x00048ba7) list_single_hc_apps_pane_t1_ParamLimits

0x7fbb,	// (0x0004d467) popup_toolbar2_fixed_window_ParamLimits

0x7fbb,	// (0x0004d467) popup_toolbar2_fixed_window

0x9c73,	// (0x0004f11f) popup_toolbar2_float_window

0xb72b,	// (0x00050bd7) bg_popup_sub_pane_cp27

0x5688,	// (0x0004ab34) grid_toolbar2_float_pane

0xb72b,	// (0x00050bd7) bg_popup_sub_pane_cp26

0x5688,	// (0x0004ab34) grid_toolbar2_fixed_pane

0xac67,	// (0x00050113) cell_toolbar2_fixed_pane_ParamLimits

0xac67,	// (0x00050113) cell_toolbar2_fixed_pane

0xac82,	// (0x0005012e) cell_toolbar2_fixed_pane_g1

0x56aa,	// (0x0004ab56) toolbar2_fixed_button_pane

0xd1a7,	// (0x00052653) toolbar2_fixed_button_pane_g1

0xd1b7,	// (0x00052663) toolbar2_fixed_button_pane_g2

0xd1af,	// (0x0005265b) toolbar2_fixed_button_pane_g3

0xd1c7,	// (0x00052673) toolbar2_fixed_button_pane_g4

0xd1bf,	// (0x0005266b) toolbar2_fixed_button_pane_g5

0xd1cf,	// (0x0005267b) toolbar2_fixed_button_pane_g6

0xd1d7,	// (0x00052683) toolbar2_fixed_button_pane_g7

0xd1e7,	// (0x00052693) toolbar2_fixed_button_pane_g8

0xd1df,	// (0x0005268b) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x00054d23) toolbar2_fixed_button_pane_g

0x56b2,	// (0x0004ab5e) cell_toolbar2_float_pane_ParamLimits

0x56b2,	// (0x0004ab5e) cell_toolbar2_float_pane

0x56c3,	// (0x0004ab6f) cell_toolbar2_float_pane_g1

0x56aa,	// (0x0004ab56) toolbar2_fixed_button_pane_cp

0xa83c,	// (0x0004fce8) fep_vkb_accented_list_pane_ParamLimits

0xa83c,	// (0x0004fce8) fep_vkb_accented_list_pane

0x1bcd,	// (0x00047079) bg_popup_fep_shadow_pane_g9

0xcc75,	// (0x00052121) bg_popup_fep_shadow_pane_cp3

0xc334,	// (0x000517e0) list_accented_list_pane

0x56cc,	// (0x0004ab78) list_single_accented_list_pane_ParamLimits

0x56cc,	// (0x0004ab78) list_single_accented_list_pane

0xcc75,	// (0x00052121) list_highlight_pane_cp10

0x56dd,	// (0x0004ab89) list_single_accented_list_pane_t1

0x9b9d,	// (0x0004f049) popup_slider_window_ParamLimits

0x9b9d,	// (0x0004f049) popup_slider_window

0x5302,	// (0x0004a7ae) aid_indentation_list_msg

0xad7b,	// (0x00050227) bg_popup_window_pane_cp19

0x5801,	// (0x0004acad) popup_slider_window_g1

0x581d,	// (0x0004acc9) popup_slider_window_g2

0x5839,	// (0x0004ace5) popup_slider_window_g3

0x0005,

0xfba2,	// (0x0005504e) popup_slider_window_g

0x5895,	// (0x0004ad41) popup_slider_window_t1

0x5909,	// (0x0004adb5) small_volume_slider_vertical_pane

0xef5f,	// (0x0005440b) small_volume_slider_vertical_pane_g1

0xef5f,	// (0x0005440b) small_volume_slider_vertical_pane_g2

0x5925,	// (0x0004add1) small_volume_slider_vertical_pane_g3

0x0002,

0xfbb4,	// (0x00055060) small_volume_slider_vertical_pane_g

0x7f29,	// (0x0004d3d5) area_side_right_pane_ParamLimits

0x7f29,	// (0x0004d3d5) area_side_right_pane

0x8711,	// (0x0004dbbd) aid_size_side_button_ParamLimits

0x8711,	// (0x0004dbbd) aid_size_side_button

0x872a,	// (0x0004dbd6) grid_sctrl_middle_pane_ParamLimits

0x872a,	// (0x0004dbd6) grid_sctrl_middle_pane

0x1de3,	// (0x0004728f) sctrl_sk_bottom_pane

0x1df4,	// (0x000472a0) sctrl_sk_top_pane

0x1e06,	// (0x000472b2) aid_touch_sctrl_top

0x1e13,	// (0x000472bf) bg_sctrl_sk_pane_ParamLimits

0x1e13,	// (0x000472bf) bg_sctrl_sk_pane

0x1e21,	// (0x000472cd) sctrl_sk_top_pane_g1

0x1e2e,	// (0x000472da) sctrl_sk_top_pane_t1

0x1e06,	// (0x000472b2) aid_touch_sctrl_bottom

0x1e13,	// (0x000472bf) bg_sctrl_sk_pane_cp_ParamLimits

0x1e13,	// (0x000472bf) bg_sctrl_sk_pane_cp

0x1e49,	// (0x000472f5) sctrl_sk_bottom_pane_g1

0x1e2e,	// (0x000472da) sctrl_sk_bottom_pane_t1

0x8744,	// (0x0004dbf0) cell_sctrl_middle_pane_ParamLimits

0x8744,	// (0x0004dbf0) cell_sctrl_middle_pane

0x8755,	// (0x0004dc01) aid_touch_sctrl_middle_ParamLimits

0x8755,	// (0x0004dc01) aid_touch_sctrl_middle

0x8762,	// (0x0004dc0e) bg_sctrl_middle_pane_ParamLimits

0x8762,	// (0x0004dc0e) bg_sctrl_middle_pane

0x24b6,	// (0x00047962) cell_sctrl_middle_pane_g1_ParamLimits

0x24b6,	// (0x00047962) cell_sctrl_middle_pane_g1

0x8770,	// (0x0004dc1c) cell_sctrl_middle_pane_g2_ParamLimits

0x8770,	// (0x0004dc1c) cell_sctrl_middle_pane_g2

0x0001,

0xfbc0,	// (0x0005506c) cell_sctrl_middle_pane_g_ParamLimits

0xfbc0,	// (0x0005506c) cell_sctrl_middle_pane_g

0xd1a7,	// (0x00052653) bg_sctrl_middle_pane_g1

0xd1af,	// (0x0005265b) bg_sctrl_middle_pane_g2

0xd1b7,	// (0x00052663) bg_sctrl_middle_pane_g3

0xd1bf,	// (0x0005266b) bg_sctrl_middle_pane_g4

0xd1c7,	// (0x00052673) bg_sctrl_middle_pane_g5

0xd1cf,	// (0x0005267b) bg_sctrl_middle_pane_g6

0xd1d7,	// (0x00052683) bg_sctrl_middle_pane_g7

0xd1df,	// (0x0005268b) bg_sctrl_middle_pane_g8

0x0007,

0xfbc5,	// (0x00055071) bg_sctrl_middle_pane_g

0xd1e7,	// (0x00052693) bg_sctrl_middle_pane_g8_copy1

0xd1a7,	// (0x00052653) bg_sctrl_sk_pane_g1

0xd1b7,	// (0x00052663) bg_sctrl_sk_pane_g2

0xd1af,	// (0x0005265b) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x00054d23) bg_sctrl_sk_pane_g

0xc0ca,	// (0x00051576) aid_size_touch_scroll_bar

0xd1c7,	// (0x00052673) bg_sctrl_sk_pane_g4

0xd1bf,	// (0x0005266b) bg_sctrl_sk_pane_g5

0xd1cf,	// (0x0005267b) bg_sctrl_sk_pane_g6

0xd1d7,	// (0x00052683) bg_sctrl_sk_pane_g7

0xd1e7,	// (0x00052693) bg_sctrl_sk_pane_g8

0xd1df,	// (0x0005268b) bg_sctrl_sk_pane_g9

0xcee9,	// (0x00052395) popup_fep_china_hwr2_fs_candidate_window

0x96d7,	// (0x0004eb83) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x96d7,	// (0x0004eb83) popup_fep_china_hwr2_fs_control_window

0x1bed,	// (0x00047099) sctrl_sk_top_pane_g2

0x0001,

0xfbbb,	// (0x00055067) sctrl_sk_top_pane_g

0xae33,	// (0x000502df) aid_fep_china_hwr2_fs_cell_ParamLimits

0xae33,	// (0x000502df) aid_fep_china_hwr2_fs_cell

0xae47,	// (0x000502f3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xae47,	// (0x000502f3) bg_popup_fep_shadow_pane_cp4

0xae5e,	// (0x0005030a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xae5e,	// (0x0005030a) bg_popup_fep_shadow_pane_cp5

0xae70,	// (0x0005031c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xae70,	// (0x0005031c) popup_fep_china_hwr2_fs_control_bar_grid

0xae84,	// (0x00050330) popup_fep_china_hwr2_fs_control_funtion_grid

0x5981,	// (0x0004ae2d) aid_fep_china_hwr2_fs_candi_cell

0xb72b,	// (0x00050bd7) bg_popup_fep_shadow_pane_cp6

0x598b,	// (0x0004ae37) popup_fep_china_hwr2_fs_candidate_grid

0xae8c,	// (0x00050338) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xae8c,	// (0x00050338) cell_fep_china_hwr2_fs_funtion_grid

0xef5f,	// (0x0005440b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x59ad,	// (0x0004ae59) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x59ad,	// (0x0004ae59) cell_fep_china_hwr2_fs_funtion_grid_g1

0x59bb,	// (0x0004ae67) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x59bb,	// (0x0004ae67) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfbd6,	// (0x00055082) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfbd6,	// (0x00055082) cell_fep_china_hwr2_fs_funtion_grid_g

0xaea4,	// (0x00050350) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaea4,	// (0x00050350) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaeb9,	// (0x00050365) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaeb9,	// (0x00050365) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x03d7,	// (0x00045883) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x03d7,	// (0x00045883) cell_fep_china_hwr2_fs_funtion_grid_t

0x5a02,	// (0x0004aeae) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5a0a,	// (0x0004aeb6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5a12,	// (0x0004aebe) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfbdb,	// (0x00055087) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5a1a,	// (0x0004aec6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5a1a,	// (0x0004aec6) cell_fep_china_hwr2_fs_candidate_grid

0x5a33,	// (0x0004aedf) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5a3b,	// (0x0004aee7) popup_fep_china_hwr2_fs_candidate_grid_g21

0xef5f,	// (0x0005440b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xef5f,	// (0x0005440b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x0203,	// (0x000456af) cell_fep_china_hwr2_fs_candidate_grid_g

0x5a43,	// (0x0004aeef) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcff6,	// (0x000524a2) clock_nsta_pane_cp_24_ParamLimits

0xcff6,	// (0x000524a2) clock_nsta_pane_cp_24

0xd05e,	// (0x0005250a) indicator_nsta_pane_cp_24_ParamLimits

0xd05e,	// (0x0005250a) indicator_nsta_pane_cp_24

0xddb4,	// (0x00053260) heading_pane_g1

0x0001,

0xf8dc,	// (0x00054d88) heading_pane_g

0xe418,	// (0x000538c4) grid_sct_catagory_button_pane

0xde0b,	// (0x000532b7) scroll_pane_cp5_ParamLimits

0xecc8,	// (0x00054174) button_value_adjust_pane_cp5_ParamLimits

0xecc8,	// (0x00054174) button_value_adjust_pane_cp5

0xed86,	// (0x00054232) form2_midp_time_pane_ParamLimits

0x5a51,	// (0x0004aefd) cell_sct_catagory_button_pane_ParamLimits

0x5a51,	// (0x0004aefd) cell_sct_catagory_button_pane

0xef24,	// (0x000543d0) bg_button_pane_cp01_ParamLimits

0xef24,	// (0x000543d0) bg_button_pane_cp01

0xef5f,	// (0x0005440b) cell_sct_catagory_button_pane_g1

0x9c16,	// (0x0004f0c2) popup_tb_extension_window

0xaed5,	// (0x00050381) aid_size_cell_ext_ParamLimits

0xaed5,	// (0x00050381) aid_size_cell_ext

0xbf0c,	// (0x000513b8) bg_tb_trans_pane_cp1_ParamLimits

0xbf0c,	// (0x000513b8) bg_tb_trans_pane_cp1

0xaefb,	// (0x000503a7) grid_tb_ext_pane_ParamLimits

0xaefb,	// (0x000503a7) grid_tb_ext_pane

0xaf3b,	// (0x000503e7) cell_tb_ext_pane_ParamLimits

0xaf3b,	// (0x000503e7) cell_tb_ext_pane

0xaf63,	// (0x0005040f) cell_tb_ext_pane_g1_ParamLimits

0xaf63,	// (0x0005040f) cell_tb_ext_pane_g1

0x5ae9,	// (0x0004af95) cell_tb_ext_pane_t1

0xbb9a,	// (0x00051046) list_highlight_pane_cp11_ParamLimits

0xbb9a,	// (0x00051046) list_highlight_pane_cp11

0x0948,	// (0x00045df4) popup_uni_indicator_window_ParamLimits

0x0948,	// (0x00045df4) popup_uni_indicator_window

0xc23a,	// (0x000516e6) bg_popup_sub_pane_cp14

0x5b04,	// (0x0004afb0) list_uniindi_pane

0x5b10,	// (0x0004afbc) uniindi_top_pane

0xbb9a,	// (0x00051046) bg_uniindi_top_pane

0x5b2f,	// (0x0004afdb) uniindi_top_pane_g1

0x5b45,	// (0x0004aff1) uniindi_top_pane_g2

0x0003,

0xfbe2,	// (0x0005508e) uniindi_top_pane_g

0x5b6f,	// (0x0004b01b) uniindi_top_pane_t1

0x5b99,	// (0x0004b045) list_single_uniindi_pane_ParamLimits

0x5b99,	// (0x0004b045) list_single_uniindi_pane

0xef5f,	// (0x0005440b) bg_uniindi_top_pane_g1

0x5bab,	// (0x0004b057) list_single_uniindi_pane_g1

0x5bbe,	// (0x0004b06a) list_single_uniindi_pane_t1

0x07cc,	// (0x00045c78) control_bg_pane

0x5be3,	// (0x0004b08f) bg_sctrl_sk_pane_cp1

0x5bec,	// (0x0004b098) bg_sctrl_sk_pane_cp2

0x5bf5,	// (0x0004b0a1) control_bg_pane_g1

0x5bfe,	// (0x0004b0aa) control_bg_pane_g2

0x0001,

0xfbeb,	// (0x00055097) control_bg_pane_g

0xeb9f,	// (0x0005404b) cell_indicator_nsta_pane_g1_ParamLimits

0xa687,	// (0x0004fb33) cell_indicator_nsta_pane_g2_ParamLimits

0x016c,	// (0x00045618) cell_indicator_nsta_pane_g_ParamLimits

0x3416,	// (0x000488c2) form2_midp_time_pane_t1_ParamLimits

0xefff,	// (0x000544ab) main_idle_act4_pane_ParamLimits

0xefff,	// (0x000544ab) main_idle_act4_pane

0x9c16,	// (0x0004f0c2) popup_tb_extension_window_ParamLimits

0xaf22,	// (0x000503ce) tb_ext_find_pane_ParamLimits

0xaf22,	// (0x000503ce) tb_ext_find_pane

0x5c07,	// (0x0004b0b3) ai_gene_pane_1_cp1

0xccf7,	// (0x000521a3) ai_gene_pane_2_cp1

0x5c0f,	// (0x0004b0bb) list_single_idle_plugin_calendar_pane

0x5c18,	// (0x0004b0c4) list_single_idle_plugin_notification_pane

0x5c21,	// (0x0004b0cd) list_single_idle_plugin_player_pane

0xaf80,	// (0x0005042c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xaf80,	// (0x0005042c) list_single_idle_plugin_shortcut_pane

0xafa8,	// (0x00050454) main_idle_act4_pane_t1

0xafbe,	// (0x0005046a) main_idle_act4_pane_t2

0x0001,

0x03f1,	// (0x0004589d) main_idle_act4_pane_t

0xafd6,	// (0x00050482) middle_sk_idle_act4_pane_ParamLimits

0xafd6,	// (0x00050482) middle_sk_idle_act4_pane

0xaff2,	// (0x0005049e) popup_clock_digital_analogue_window_cp2

0xb019,	// (0x000504c5) shortcut_wheel_idle_act4_pane_ParamLimits

0xb019,	// (0x000504c5) shortcut_wheel_idle_act4_pane

0xef5f,	// (0x0005440b) shortcut_wheel_idle_act4_pane_g1

0xef5f,	// (0x0005440b) shortcut_wheel_idle_act4_pane_g2

0xef5f,	// (0x0005440b) shortcut_wheel_idle_act4_pane_g3

0xef5f,	// (0x0005440b) shortcut_wheel_idle_act4_pane_g4

0xef5f,	// (0x0005440b) shortcut_wheel_idle_act4_pane_g5

0x5cb4,	// (0x0004b160) shortcut_wheel_idle_act4_pane_g6

0x5cbc,	// (0x0004b168) shortcut_wheel_idle_act4_pane_g7

0x5cc4,	// (0x0004b170) shortcut_wheel_idle_act4_pane_g8

0x5ccc,	// (0x0004b178) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfbf0,	// (0x0005509c) shortcut_wheel_idle_act4_pane_g

0x96af,	// (0x0004eb5b) middle_sk_idle_act4_pane_g1_ParamLimits

0x96af,	// (0x0004eb5b) middle_sk_idle_act4_pane_g1

0xb096,	// (0x00050542) middle_sk_idle_act4_pane_g2_ParamLimits

0xb096,	// (0x00050542) middle_sk_idle_act4_pane_g2

0x0001,

0xfc03,	// (0x000550af) middle_sk_idle_act4_pane_g_ParamLimits

0xfc03,	// (0x000550af) middle_sk_idle_act4_pane_g

0xb0ae,	// (0x0005055a) middle_sk_idle_act4_pane_t1_ParamLimits

0xb0ae,	// (0x0005055a) middle_sk_idle_act4_pane_t1

0xb0dd,	// (0x00050589) grid_ai_shortcut_pane_ParamLimits

0xb0dd,	// (0x00050589) grid_ai_shortcut_pane

0xb0fa,	// (0x000505a6) list_highlight_pane_cp16_ParamLimits

0xb0fa,	// (0x000505a6) list_highlight_pane_cp16

0xb107,	// (0x000505b3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb107,	// (0x000505b3) list_single_idle_plugin_shortcut_pane_g1

0xb113,	// (0x000505bf) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb113,	// (0x000505bf) list_single_idle_plugin_shortcut_pane_g2

0xb12f,	// (0x000505db) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb12f,	// (0x000505db) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x041e,	// (0x000458ca) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x041e,	// (0x000458ca) list_single_idle_plugin_shortcut_pane_g

0xb144,	// (0x000505f0) cell_ai_shortcut_pane_ParamLimits

0xb144,	// (0x000505f0) cell_ai_shortcut_pane

0xb15a,	// (0x00050606) cell_ai_shortcut_pane_g1_ParamLimits

0xb15a,	// (0x00050606) cell_ai_shortcut_pane_g1

0x5c07,	// (0x0004b0b3) ai_gene_pane_1_cp2

0x5df9,	// (0x0004b2a5) ai_gene_pane_2_cp2

0x5e01,	// (0x0004b2ad) list_highlight_pane_cp15

0x5e0a,	// (0x0004b2b6) list_single_idle_plugin_calendar_pane_g1

0x5e01,	// (0x0004b2ad) list_highlight_pane_cp17

0x5e12,	// (0x0004b2be) list_single_idle_plugin_calendar_pane_g1_copy1

0x5e1a,	// (0x0004b2c6) list_single_idle_plugin_player_pane_g1

0xe62d,	// (0x00053ad9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfc08,	// (0x000550b4) list_single_idle_plugin_player_pane_g

0x5e22,	// (0x0004b2ce) list_single_idle_plugin_player_pane_t1

0x5e30,	// (0x0004b2dc) list_single_idle_plugin_player_pane_t2

0x5e3e,	// (0x0004b2ea) list_single_idle_plugin_player_pane_t3

0x5e4c,	// (0x0004b2f8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfc0d,	// (0x000550b9) list_single_idle_plugin_player_pane_t

0x5e5a,	// (0x0004b306) wait_bar_pane_cp15

0x5e62,	// (0x0004b30e) grid_ai_notification_pane

0xe62d,	// (0x00053ad9) list_single_idle_plugin_notification_pane_g1

0xb17c,	// (0x00050628) cell_ai_notification_pane_ParamLimits

0xb17c,	// (0x00050628) cell_ai_notification_pane

0x5e78,	// (0x0004b324) cell_ai_notification_pane_g1

0x5e80,	// (0x0004b32c) cell_ai_notification_pane_t1

0xb189,	// (0x00050635) tb_ext_find_button_pane

0xb191,	// (0x0005063d) tb_ext_find_pane_g1

0xb199,	// (0x00050645) tb_ext_find_pane_t1

0xc766,	// (0x00051c12) tb_ext_find_button_pane_g1

0x5eac,	// (0x0004b358) tb_ext_find_button_pane_g2

0x0001,

0xfc16,	// (0x000550c2) tb_ext_find_button_pane_g

0xafa8,	// (0x00050454) main_idle_act4_pane_t1_ParamLimits

0xafbe,	// (0x0005046a) main_idle_act4_pane_t2_ParamLimits

0x03f1,	// (0x0004589d) main_idle_act4_pane_t_ParamLimits

0xaff2,	// (0x0005049e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb009,	// (0x000504b5) sat_plugin_idle_act4_pane_ParamLimits

0xb009,	// (0x000504b5) sat_plugin_idle_act4_pane

0xb1a7,	// (0x00050653) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb1a7,	// (0x00050653) sat_plugin_idle_act4_pane_t1

0xb1bf,	// (0x0005066b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb1bf,	// (0x0005066b) sat_plugin_idle_act4_pane_t2

0xb1d7,	// (0x00050683) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb1d7,	// (0x00050683) sat_plugin_idle_act4_pane_t3

0xb1ef,	// (0x0005069b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb1ef,	// (0x0005069b) sat_plugin_idle_act4_pane_t4

0x0003,

0x0438,	// (0x000458e4) sat_plugin_idle_act4_pane_t_ParamLimits

0x0438,	// (0x000458e4) sat_plugin_idle_act4_pane_t

0x0891,	// (0x00045d3d) popup_battery_window_ParamLimits

0x0891,	// (0x00045d3d) popup_battery_window

0xbb9a,	// (0x00051046) bg_popup_sub_pane_cp25_ParamLimits

0xbb9a,	// (0x00051046) bg_popup_sub_pane_cp25

0x5f01,	// (0x0004b3ad) popup_battery_window_g1_ParamLimits

0x5f01,	// (0x0004b3ad) popup_battery_window_g1

0x5f0d,	// (0x0004b3b9) popup_battery_window_t1_ParamLimits

0x5f0d,	// (0x0004b3b9) popup_battery_window_t1

0x5f1f,	// (0x0004b3cb) popup_battery_window_t2_ParamLimits

0x5f1f,	// (0x0004b3cb) popup_battery_window_t2

0x0001,

0xfc1b,	// (0x000550c7) popup_battery_window_t_ParamLimits

0xfc1b,	// (0x000550c7) popup_battery_window_t

0x9546,	// (0x0004e9f2) midp_canvas_pane_ParamLimits

0x95a3,	// (0x0004ea4f) midp_keypad_pane_ParamLimits

0x95a3,	// (0x0004ea4f) midp_keypad_pane

0xc385,	// (0x00051831) main_midp_pane_ParamLimits

0xec7b,	// (0x00054127) signal_pane_g2_cp_ParamLimits

0xb207,	// (0x000506b3) aid_size_cell_midp_keypad_ParamLimits

0xb207,	// (0x000506b3) aid_size_cell_midp_keypad

0xb225,	// (0x000506d1) midp_keyp_game_grid_pane_ParamLimits

0xb225,	// (0x000506d1) midp_keyp_game_grid_pane

0xb24c,	// (0x000506f8) midp_keyp_rocker_pane_ParamLimits

0xb24c,	// (0x000506f8) midp_keyp_rocker_pane

0xb2a5,	// (0x00050751) midp_keyp_sk_left_pane_ParamLimits

0xb2a5,	// (0x00050751) midp_keyp_sk_left_pane

0xb2f9,	// (0x000507a5) midp_keyp_sk_right_pane_ParamLimits

0xb2f9,	// (0x000507a5) midp_keyp_sk_right_pane

0xb72b,	// (0x00050bd7) bg_button_pane_cp03

0xb34d,	// (0x000507f9) midp_keyp_sk_left_pane_g1

0xb72b,	// (0x00050bd7) bg_button_pane_cp04

0xb34d,	// (0x000507f9) midp_keyp_sk_right_pane_g1

0xef5f,	// (0x0005440b) midp_keyp_rocker_pane_g1

0xb356,	// (0x00050802) keyp_game_cell_pane_ParamLimits

0xb356,	// (0x00050802) keyp_game_cell_pane

0xb72b,	// (0x00050bd7) bg_button_pane_cp02

0xb387,	// (0x00050833) keyp_game_cell_pane_g1

0x7f6b,	// (0x0004d417) popup_fep_vkb2_window_ParamLimits

0x7f6b,	// (0x0004d417) popup_fep_vkb2_window

0x877c,	// (0x0004dc28) aid_size_cell_vkb2_ParamLimits

0x877c,	// (0x0004dc28) aid_size_cell_vkb2

0x87b2,	// (0x0004dc5e) popup_fep_vkb2_window_g1_ParamLimits

0x87b2,	// (0x0004dc5e) popup_fep_vkb2_window_g1

0x87f9,	// (0x0004dca5) vkb2_area_bottom_pane_ParamLimits

0x87f9,	// (0x0004dca5) vkb2_area_bottom_pane

0x884d,	// (0x0004dcf9) vkb2_area_keypad_pane_ParamLimits

0x884d,	// (0x0004dcf9) vkb2_area_keypad_pane

0x8895,	// (0x0004dd41) vkb2_area_top_pane_ParamLimits

0x8895,	// (0x0004dd41) vkb2_area_top_pane

0x891b,	// (0x0004ddc7) vkb2_top_entry_pane_ParamLimits

0x891b,	// (0x0004ddc7) vkb2_top_entry_pane

0x8948,	// (0x0004ddf4) vkb2_top_grid_left_pane_ParamLimits

0x8948,	// (0x0004ddf4) vkb2_top_grid_left_pane

0x8968,	// (0x0004de14) vkb2_top_grid_right_pane_ParamLimits

0x8968,	// (0x0004de14) vkb2_top_grid_right_pane

0x20b1,	// (0x0004755d) vkb2_cell_keypad_pane_ParamLimits

0x20b1,	// (0x0004755d) vkb2_cell_keypad_pane

0x89ae,	// (0x0004de5a) vkb2_area_bottom_grid_pane_ParamLimits

0x89ae,	// (0x0004de5a) vkb2_area_bottom_grid_pane

0x89d8,	// (0x0004de84) vkb2_area_bottom_pane_g1_ParamLimits

0x89d8,	// (0x0004de84) vkb2_area_bottom_pane_g1

0x89fe,	// (0x0004deaa) vkb2_area_bottom_pane_g2_ParamLimits

0x89fe,	// (0x0004deaa) vkb2_area_bottom_pane_g2

0x8a2f,	// (0x0004dedb) vkb2_area_bottom_pane_g3_ParamLimits

0x8a2f,	// (0x0004dedb) vkb2_area_bottom_pane_g3

0x0002,

0xfc20,	// (0x000550cc) vkb2_area_bottom_pane_g_ParamLimits

0xfc20,	// (0x000550cc) vkb2_area_bottom_pane_g

0x225b,	// (0x00047707) vkb2_top_cell_left_pane_ParamLimits

0x225b,	// (0x00047707) vkb2_top_cell_left_pane

0xb390,	// (0x0005083c) vkb2_top_entry_pane_g1_ParamLimits

0xb390,	// (0x0005083c) vkb2_top_entry_pane_g1

0xb39e,	// (0x0005084a) vkb2_top_entry_pane_t1_ParamLimits

0xb39e,	// (0x0005084a) vkb2_top_entry_pane_t1

0x60f1,	// (0x0004b59d) vkb2_top_entry_pane_t2_ParamLimits

0x60f1,	// (0x0004b59d) vkb2_top_entry_pane_t2

0x6123,	// (0x0004b5cf) vkb2_top_entry_pane_t3_ParamLimits

0x6123,	// (0x0004b5cf) vkb2_top_entry_pane_t3

0x0002,

0xfc27,	// (0x000550d3) vkb2_top_entry_pane_t_ParamLimits

0xfc27,	// (0x000550d3) vkb2_top_entry_pane_t

0x8a99,	// (0x0004df45) vkb2_top_grid_right_pane_g1_ParamLimits

0x8a99,	// (0x0004df45) vkb2_top_grid_right_pane_g1

0x22be,	// (0x0004776a) vkb2_top_grid_right_pane_g2_ParamLimits

0x22be,	// (0x0004776a) vkb2_top_grid_right_pane_g2

0x22d6,	// (0x00047782) vkb2_top_grid_right_pane_g3_ParamLimits

0x22d6,	// (0x00047782) vkb2_top_grid_right_pane_g3

0x8aaf,	// (0x0004df5b) vkb2_top_grid_right_pane_g4_ParamLimits

0x8aaf,	// (0x0004df5b) vkb2_top_grid_right_pane_g4

0x0003,

0xfc2e,	// (0x000550da) vkb2_top_grid_right_pane_g_ParamLimits

0xfc2e,	// (0x000550da) vkb2_top_grid_right_pane_g

0x2304,	// (0x000477b0) vkb2_top_cell_left_pane_g1

0x231b,	// (0x000477c7) vkb2_cell_keypad_pane_g1_ParamLimits

0x231b,	// (0x000477c7) vkb2_cell_keypad_pane_g1

0x6147,	// (0x0004b5f3) vkb2_cell_keypad_pane_t1_ParamLimits

0x6147,	// (0x0004b5f3) vkb2_cell_keypad_pane_t1

0x2329,	// (0x000477d5) vkb2_cell_bottom_grid_pane_ParamLimits

0x2329,	// (0x000477d5) vkb2_cell_bottom_grid_pane

0x2362,	// (0x0004780e) vkb2_cell_bottom_grid_pane_g1

0xb03a,	// (0x000504e6) aid_call2_pane_cp02

0xb042,	// (0x000504ee) aid_call_pane_cp02

0xb04a,	// (0x000504f6) clock_digital_number_pane_cp10

0xb052,	// (0x000504fe) clock_digital_number_pane_cp11

0xb05a,	// (0x00050506) clock_digital_number_pane_cp12

0xb062,	// (0x0005050e) clock_digital_number_pane_cp13

0xb06a,	// (0x00050516) clock_digital_separator_pane_cp10

0xc766,	// (0x00051c12) popup_clock_digital_analogue_window_cp2_g1

0xc766,	// (0x00051c12) popup_clock_digital_analogue_window_cp2_g2

0xb072,	// (0x0005051e) popup_clock_digital_analogue_window_cp2_g3

0xc766,	// (0x00051c12) popup_clock_digital_analogue_window_cp2_g4

0xb072,	// (0x0005051e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0x0409,	// (0x000458b5) popup_clock_digital_analogue_window_cp2_g

0xb07a,	// (0x00050526) popup_clock_digital_analogue_window_cp2_t1

0xb088,	// (0x00050534) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0414,	// (0x000458c0) popup_clock_digital_analogue_window_cp2_t

0xef5f,	// (0x0005440b) clock_digital_number_pane_cp10_g1

0xef5f,	// (0x0005440b) clock_digital_number_pane_cp10_g2

0x0001,

0x0203,	// (0x000456af) clock_digital_number_pane_cp10_g

0xef5f,	// (0x0005440b) clock_digital_separator_pane_cp10_g1

0xef5f,	// (0x0005440b) clock_digital_separator_pane_cp10_g2

0x0001,

0x0203,	// (0x000456af) clock_digital_separator_pane_cp10_g

0x5b51,	// (0x0004affd) uniindi_top_pane_g3

0x5b62,	// (0x0004b00e) uniindi_top_pane_g4

0x213c,	// (0x000475e8) vkb2_row_keypad_pane_ParamLimits

0x213c,	// (0x000475e8) vkb2_row_keypad_pane

0x2382,	// (0x0004782e) vkb2_cell_t_keypad_pane_ParamLimits

0x2382,	// (0x0004782e) vkb2_cell_t_keypad_pane

0x2392,	// (0x0004783e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2392,	// (0x0004783e) vkb2_cell_t_keypad_pane_cp08

0x23a5,	// (0x00047851) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x23a5,	// (0x00047851) vkb2_cell_t_keypad_pane_cp09

0x23b9,	// (0x00047865) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x23b9,	// (0x00047865) vkb2_cell_t_keypad_pane_cp01

0x23ca,	// (0x00047876) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x23ca,	// (0x00047876) vkb2_cell_t_keypad_pane_cp02

0x23db,	// (0x00047887) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x23db,	// (0x00047887) vkb2_cell_t_keypad_pane_cp03

0x23ec,	// (0x00047898) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x23ec,	// (0x00047898) vkb2_cell_t_keypad_pane_cp04

0x23fd,	// (0x000478a9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x23fd,	// (0x000478a9) vkb2_cell_t_keypad_pane_cp05

0x240e,	// (0x000478ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x240e,	// (0x000478ba) vkb2_cell_t_keypad_pane_cp06

0x241f,	// (0x000478cb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x241f,	// (0x000478cb) vkb2_cell_t_keypad_pane_cp07

0x2430,	// (0x000478dc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2430,	// (0x000478dc) vkb2_cell_t_keypad_pane_cp10

0x1bed,	// (0x00047099) vkb2_cell_t_keypad_pane_g1

0x615e,	// (0x0004b60a) vkb2_cell_t_keypad_pane_t1

0x07cc,	// (0x00045c78) popup_grid_graphic2_window

0xb3d7,	// (0x00050883) aid_size_cell_graphic2_ParamLimits

0xb3d7,	// (0x00050883) aid_size_cell_graphic2

0xd774,	// (0x00052c20) bg_popup_window_pane_cp21_ParamLimits

0xd774,	// (0x00052c20) bg_popup_window_pane_cp21

0xb409,	// (0x000508b5) graphic2_pages_pane_ParamLimits

0xb409,	// (0x000508b5) graphic2_pages_pane

0xb45f,	// (0x0005090b) grid_graphic2_control_pane_ParamLimits

0xb45f,	// (0x0005090b) grid_graphic2_control_pane

0xb493,	// (0x0005093f) grid_graphic2_pane_ParamLimits

0xb493,	// (0x0005093f) grid_graphic2_pane

0xb506,	// (0x000509b2) cell_graphic2_pane

0xb72b,	// (0x00050bd7) main_comp_mode_pane

0x53b4,	// (0x0004a860) list_ai3_gene_pane_ParamLimits

0xad7b,	// (0x00050227) bg_popup_window_pane_cp19_ParamLimits

0x57a3,	// (0x0004ac4f) bg_touch_area_indi_pane_ParamLimits

0x57a3,	// (0x0004ac4f) bg_touch_area_indi_pane

0x57b9,	// (0x0004ac65) bg_touch_area_indi_pane_cp01_ParamLimits

0x57b9,	// (0x0004ac65) bg_touch_area_indi_pane_cp01

0x57cf,	// (0x0004ac7b) bg_touch_area_indi_pane_cp02_ParamLimits

0x57cf,	// (0x0004ac7b) bg_touch_area_indi_pane_cp02

0x57e7,	// (0x0004ac93) bg_touch_area_indi_pane_cp03_ParamLimits

0x57e7,	// (0x0004ac93) bg_touch_area_indi_pane_cp03

0x5801,	// (0x0004acad) popup_slider_window_g1_ParamLimits

0x581d,	// (0x0004acc9) popup_slider_window_g2_ParamLimits

0x5839,	// (0x0004ace5) popup_slider_window_g3_ParamLimits

0xfba2,	// (0x0005504e) popup_slider_window_g_ParamLimits

0x5895,	// (0x0004ad41) popup_slider_window_t1_ParamLimits

0x5909,	// (0x0004adb5) small_volume_slider_vertical_pane_ParamLimits

0xb506,	// (0x000509b2) cell_graphic2_pane_ParamLimits

0xb561,	// (0x00050a0d) bg_button_pane_cp10_ParamLimits

0xb561,	// (0x00050a0d) bg_button_pane_cp10

0xb574,	// (0x00050a20) bg_button_pane_cp11_ParamLimits

0xb574,	// (0x00050a20) bg_button_pane_cp11

0xb587,	// (0x00050a33) graphic2_pages_pane_g1_ParamLimits

0xb587,	// (0x00050a33) graphic2_pages_pane_g1

0xb5a2,	// (0x00050a4e) graphic2_pages_pane_g2_ParamLimits

0xb5a2,	// (0x00050a4e) graphic2_pages_pane_g2

0x0001,

0x0462,	// (0x0004590e) graphic2_pages_pane_g_ParamLimits

0x0462,	// (0x0004590e) graphic2_pages_pane_g

0xb5ba,	// (0x00050a66) graphic2_pages_pane_t1_ParamLimits

0xb5ba,	// (0x00050a66) graphic2_pages_pane_t1

0xb5d2,	// (0x00050a7e) cell_graphic2_control_pane_ParamLimits

0xb5d2,	// (0x00050a7e) cell_graphic2_control_pane

0xb5ec,	// (0x00050a98) cell_graphic2_pane_g1_ParamLimits

0xb5ec,	// (0x00050a98) cell_graphic2_pane_g1

0x96bd,	// (0x0004eb69) cell_graphic2_pane_g2_ParamLimits

0x96bd,	// (0x0004eb69) cell_graphic2_pane_g2

0xb37a,	// (0x00050826) cell_graphic2_pane_g3_ParamLimits

0xb37a,	// (0x00050826) cell_graphic2_pane_g3

0x96ca,	// (0x0004eb76) cell_graphic2_pane_g4_ParamLimits

0x96ca,	// (0x0004eb76) cell_graphic2_pane_g4

0xb5f9,	// (0x00050aa5) cell_graphic2_pane_g5_ParamLimits

0xb5f9,	// (0x00050aa5) cell_graphic2_pane_g5

0x0004,

0xfc37,	// (0x000550e3) cell_graphic2_pane_g_ParamLimits

0xfc37,	// (0x000550e3) cell_graphic2_pane_g

0xb619,	// (0x00050ac5) cell_graphic2_pane_t1_ParamLimits

0xb619,	// (0x00050ac5) cell_graphic2_pane_t1

0xdda8,	// (0x00053254) grid_highlight_pane_cp11_ParamLimits

0xdda8,	// (0x00053254) grid_highlight_pane_cp11

0xc23a,	// (0x000516e6) bg_button_pane_cp05

0xb64e,	// (0x00050afa) cell_graphic2_control_pane_g1

0xef5f,	// (0x0005440b) bg_touch_area_indi_pane_g1

0x6170,	// (0x0004b61c) aid_cmod_rocker_key_size

0x617a,	// (0x0004b626) aid_cmode_itu_key_size

0x6184,	// (0x0004b630) main_cmode_video_pane

0x618e,	// (0x0004b63a) main_comp_mode_itu_pane

0x619a,	// (0x0004b646) main_comp_mode_rocker_pane

0x61a6,	// (0x0004b652) cell_cmode_rocker_pane_ParamLimits

0x61a6,	// (0x0004b652) cell_cmode_rocker_pane

0x61b8,	// (0x0004b664) cell_cmode_itu_pane_ParamLimits

0x61b8,	// (0x0004b664) cell_cmode_itu_pane

0xc23a,	// (0x000516e6) bg_button_pane_cp06_ParamLimits

0xc23a,	// (0x000516e6) bg_button_pane_cp06

0xf1f4,	// (0x000546a0) cell_cmode_rocker_pane_g1_ParamLimits

0xf1f4,	// (0x000546a0) cell_cmode_rocker_pane_g1

0x59ad,	// (0x0004ae59) cell_cmode_rocker_pane_g2_ParamLimits

0x59ad,	// (0x0004ae59) cell_cmode_rocker_pane_g2

0x0001,

0xfc42,	// (0x000550ee) cell_cmode_rocker_pane_g_ParamLimits

0xfc42,	// (0x000550ee) cell_cmode_rocker_pane_g

0xb72b,	// (0x00050bd7) bg_button_pane_cp07

0x61cd,	// (0x0004b679) cell_cmode_itu_pane_g1

0x61d6,	// (0x0004b682) cell_cmode_itu_pane_t1

0x61e4,	// (0x0004b690) cell_cmode_itu_pane_t2

0x0001,

0xfc47,	// (0x000550f3) cell_cmode_itu_pane_t

0x5bd3,	// (0x0004b07f) aid_touch_ctrl_left

0x5bdb,	// (0x0004b087) aid_touch_ctrl_right

0xb72b,	// (0x00050bd7) compa_mode_pane

0xb65b,	// (0x00050b07) aid_cmod_rocker_key_size_cp

0xb665,	// (0x00050b11) aid_cmode_itu_key_size_cp

0x61f2,	// (0x0004b69e) compa_mode_pane_g1

0x61fa,	// (0x0004b6a6) compa_mode_pane_g2

0x6202,	// (0x0004b6ae) compa_mode_pane_g3

0x0002,

0xfc4c,	// (0x000550f8) compa_mode_pane_g

0xb66f,	// (0x00050b1b) main_comp_mode_itu_pane_cp

0xb677,	// (0x00050b23) main_comp_mode_rocker_pane_cp

0xb67f,	// (0x00050b2b) cell_cmode_itu_pane_cp_ParamLimits

0xb67f,	// (0x00050b2b) cell_cmode_itu_pane_cp

0xb694,	// (0x00050b40) cell_cmode_rocker_pane_cp_ParamLimits

0xb694,	// (0x00050b40) cell_cmode_rocker_pane_cp

0xc23a,	// (0x000516e6) bg_button_pane_cp06_cp_ParamLimits

0xc23a,	// (0x000516e6) bg_button_pane_cp06_cp

0xf1f4,	// (0x000546a0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xf1f4,	// (0x000546a0) cell_cmode_rocker_pane_g1_cp

0xef5f,	// (0x0005440b) cell_cmode_rocker_pane_g2_cp

0xb72b,	// (0x00050bd7) bg_button_pane_cp07_cp

0xb6a6,	// (0x00050b52) cell_cmode_itu_pane_g1_cp

0xb6af,	// (0x00050b5b) cell_cmode_itu_pane_t1_cp

0xb6af,	// (0x00050b5b) cell_cmode_itu_pane_t2_cp

0xa4d2,	// (0x0004f97e) settings_code_pane_cp2

0xb79b,	// (0x00050c47) bg_popup_window_pane_cp3_ParamLimits

0xbe4b,	// (0x000512f7) heading_pane_cp3_ParamLimits

0xbe57,	// (0x00051303) listscroll_popup_graphic_pane_ParamLimits

0x1996,	// (0x00046e42) fep_hwr_aid_pane_ParamLimits

0x1e06,	// (0x000472b2) aid_touch_sctrl_top_ParamLimits

0x1e21,	// (0x000472cd) sctrl_sk_top_pane_g1_ParamLimits

0x1bed,	// (0x00047099) sctrl_sk_top_pane_g2_ParamLimits

0xfbbb,	// (0x00055067) sctrl_sk_top_pane_g_ParamLimits

0x1e2e,	// (0x000472da) sctrl_sk_top_pane_t1_ParamLimits

0x1e06,	// (0x000472b2) aid_touch_sctrl_bottom_ParamLimits

0x1e2e,	// (0x000472da) sctrl_sk_bottom_pane_t1_ParamLimits

0x5b1d,	// (0x0004afc9) aid_area_touch_clock

0x88dd,	// (0x0004dd89) aid_vkb2_area_top_pane_cell_ParamLimits

0x88dd,	// (0x0004dd89) aid_vkb2_area_top_pane_cell

0x8988,	// (0x0004de34) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8988,	// (0x0004de34) aid_vkb2_area_bottom_pane_cell

0x60a9,	// (0x0004b555) popup_char_count_window

0x620a,	// (0x0004b6b6) popup_char_count_window_g1

0x6213,	// (0x0004b6bf) popup_char_count_window_g2

0x621c,	// (0x0004b6c8) popup_char_count_window_g3

0x0002,

0xfc53,	// (0x000550ff) popup_char_count_window_g

0x6225,	// (0x0004b6d1) popup_char_count_window_t1

0x1ee1,	// (0x0004738d) popup_fep_char_preview_window_ParamLimits

0x1ee1,	// (0x0004738d) popup_fep_char_preview_window

0x88fd,	// (0x0004dda9) vkb2_top_candi_pane_ParamLimits

0x88fd,	// (0x0004dda9) vkb2_top_candi_pane

0xb6bd,	// (0x00050b69) cell_vkb2_top_candi_pane_ParamLimits

0xb6bd,	// (0x00050b69) cell_vkb2_top_candi_pane

0x2445,	// (0x000478f1) bg_popup_fep_char_preview_window_ParamLimits

0x2445,	// (0x000478f1) bg_popup_fep_char_preview_window

0x2453,	// (0x000478ff) popup_fep_char_preview_window_t1_ParamLimits

0x2453,	// (0x000478ff) popup_fep_char_preview_window_t1

0x6233,	// (0x0004b6df) bg_popup_fep_char_preview_window_g1

0x623b,	// (0x0004b6e7) bg_popup_fep_char_preview_window_g2

0x6243,	// (0x0004b6ef) bg_popup_fep_char_preview_window_g3

0x624b,	// (0x0004b6f7) bg_popup_fep_char_preview_window_g4

0x6253,	// (0x0004b6ff) bg_popup_fep_char_preview_window_g5

0x248d,	// (0x00047939) bg_popup_fep_char_preview_window_g6

0x625b,	// (0x0004b707) bg_popup_fep_char_preview_window_g7

0x6263,	// (0x0004b70f) bg_popup_fep_char_preview_window_g8

0x626b,	// (0x0004b717) bg_popup_fep_char_preview_window_g9

0x0008,

0xfc5a,	// (0x00055106) bg_popup_fep_char_preview_window_g

0x1bed,	// (0x00047099) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1bed,	// (0x00047099) cell_vkb2_top_candi_pane_g1

0x1bfb,	// (0x000470a7) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1bfb,	// (0x000470a7) cell_vkb2_top_candi_pane_g2

0x5f3c,	// (0x0004b3e8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5f3c,	// (0x0004b3e8) cell_vkb2_top_candi_pane_g3

0x2495,	// (0x00047941) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2495,	// (0x00047941) cell_vkb2_top_candi_pane_g4

0xf549,	// (0x000549f5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf549,	// (0x000549f5) cell_vkb2_top_candi_pane_g5

0x24b6,	// (0x00047962) cell_vkb2_top_candi_pane_g6_ParamLimits

0x24b6,	// (0x00047962) cell_vkb2_top_candi_pane_g6

0x0005,

0xfc6d,	// (0x00055119) cell_vkb2_top_candi_pane_g_ParamLimits

0xfc6d,	// (0x00055119) cell_vkb2_top_candi_pane_g

0x24c4,	// (0x00047970) cell_vkb2_top_candi_pane_t1

0x17a5,	// (0x00046c51) aid_size_touch_slider_mark_ParamLimits

0x17a5,	// (0x00046c51) aid_size_touch_slider_mark

0xb445,	// (0x000508f1) grid_graphic2_catg_pane_ParamLimits

0xb445,	// (0x000508f1) grid_graphic2_catg_pane

0xb4d9,	// (0x00050985) popup_grid_graphic2_window_t1_ParamLimits

0xb4d9,	// (0x00050985) popup_grid_graphic2_window_t1

0xb4ef,	// (0x0005099b) popup_grid_graphic2_window_t2_ParamLimits

0xb4ef,	// (0x0005099b) popup_grid_graphic2_window_t2

0x0001,

0x045d,	// (0x00045909) popup_grid_graphic2_window_t_ParamLimits

0x045d,	// (0x00045909) popup_grid_graphic2_window_t

0xc23a,	// (0x000516e6) bg_button_pane_cp05_ParamLimits

0xb64e,	// (0x00050afa) cell_graphic2_control_pane_g1_ParamLimits

0xb7df,	// (0x00050c8b) cell_graphic2_catg_pane_ParamLimits

0xb7df,	// (0x00050c8b) cell_graphic2_catg_pane

0xb72b,	// (0x00050bd7) bg_button_pane_cp12

0xb7f1,	// (0x00050c9d) cell_graphic2_catg_pane_g1

0x5ae9,	// (0x0004af95) cell_tb_ext_pane_t1_ParamLimits

0x227b,	// (0x00047727) vkb2_top_cell_right_narrow_pane_ParamLimits

0x227b,	// (0x00047727) vkb2_top_cell_right_narrow_pane

0x2293,	// (0x0004773f) vkb2_top_cell_right_wide_pane_ParamLimits

0x2293,	// (0x0004773f) vkb2_top_cell_right_wide_pane

0x1988,	// (0x00046e34) bg_vkb2_func_pane_ParamLimits

0x1988,	// (0x00046e34) bg_vkb2_func_pane

0x2304,	// (0x000477b0) vkb2_top_cell_left_pane_g1_ParamLimits

0x1988,	// (0x00046e34) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1988,	// (0x00046e34) bg_vkb2_fuc_pane_cp03

0x2362,	// (0x0004780e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd1af,	// (0x0005265b) bg_vkb2_func_pane_g1

0xd1b7,	// (0x00052663) bg_vkb2_func_pane_g2

0xd1c7,	// (0x00052673) bg_vkb2_func_pane_g3

0xd1bf,	// (0x0005266b) bg_vkb2_func_pane_g4

0xd1cf,	// (0x0005267b) bg_vkb2_func_pane_g5

0xd1d7,	// (0x00052683) bg_vkb2_func_pane_g6

0xd1df,	// (0x0005268b) bg_vkb2_func_pane_g7

0xd1e7,	// (0x00052693) bg_vkb2_func_pane_g8

0xd1a7,	// (0x00052653) bg_vkb2_func_pane_g9

0x0008,

0xfc7a,	// (0x00055126) bg_vkb2_func_pane_g

0x1988,	// (0x00046e34) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1988,	// (0x00046e34) bg_vkb2_fuc_pane_cp01

0x2304,	// (0x000477b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2304,	// (0x000477b0) vkb2_top_cell_right_wide_pane_g1

0x1988,	// (0x00046e34) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1988,	// (0x00046e34) bg_vkb2_fuc_pane_cp02

0x2362,	// (0x0004780e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2362,	// (0x0004780e) vkb2_top_cell_right_narrow_pane_g1

0xacb5,	// (0x00050161) aid_touch_area_decrease_ParamLimits

0xacb5,	// (0x00050161) aid_touch_area_decrease

0xacef,	// (0x0005019b) aid_touch_area_increase_ParamLimits

0xacef,	// (0x0005019b) aid_touch_area_increase

0xad17,	// (0x000501c3) aid_touch_area_mute_ParamLimits

0xad17,	// (0x000501c3) aid_touch_area_mute

0xad47,	// (0x000501f3) aid_touch_area_slider_ParamLimits

0xad47,	// (0x000501f3) aid_touch_area_slider

0xad87,	// (0x00050233) popup_slider_window_g4_ParamLimits

0xad87,	// (0x00050233) popup_slider_window_g4

0xadaf,	// (0x0005025b) popup_slider_window_g5_ParamLimits

0xadaf,	// (0x0005025b) popup_slider_window_g5

0xade3,	// (0x0005028f) popup_slider_window_g6_ParamLimits

0xade3,	// (0x0005028f) popup_slider_window_g6

0x58c3,	// (0x0004ad6f) popup_slider_window_t2_ParamLimits

0x58c3,	// (0x0004ad6f) popup_slider_window_t2

0x0001,

0xfbaf,	// (0x0005505b) popup_slider_window_t_ParamLimits

0xfbaf,	// (0x0005505b) popup_slider_window_t

0xadff,	// (0x000502ab) slider_pane_ParamLimits

0xadff,	// (0x000502ab) slider_pane

0x6273,	// (0x0004b71f) slider_pane_g1_ParamLimits

0x6273,	// (0x0004b71f) slider_pane_g1

0x6287,	// (0x0004b733) slider_pane_g2_ParamLimits

0x6287,	// (0x0004b733) slider_pane_g2

0x629d,	// (0x0004b749) slider_pane_g3_ParamLimits

0x629d,	// (0x0004b749) slider_pane_g3

0x0003,

0xfc8d,	// (0x00055139) slider_pane_g_ParamLimits

0xfc8d,	// (0x00055139) slider_pane_g

0x9c5e,	// (0x0004f10a) popup_tb_float_extension_window_ParamLimits

0x9c5e,	// (0x0004f10a) popup_tb_float_extension_window

0x62c9,	// (0x0004b775) aid_size_cell_tb_float_ext

0xb72b,	// (0x00050bd7) bg_popup_sub_window_cp28

0x62d5,	// (0x0004b781) grid_tb_float_ext_pane

0x62df,	// (0x0004b78b) cell_tb_float_ext_pane_ParamLimits

0x62df,	// (0x0004b78b) cell_tb_float_ext_pane

0x62f9,	// (0x0004b7a5) cell_tb_float_ext_pane_g1

0x6302,	// (0x0004b7ae) grid_highlight_pane_cp12

0x86ef,	// (0x0004db9b) cell_last_hwr_side_pane_ParamLimits

0x86ef,	// (0x0004db9b) cell_last_hwr_side_pane

0xef5f,	// (0x0005440b) cell_last_hwr_side_pane_g1

0x630b,	// (0x0004b7b7) cell_last_hwr_side_pane_g2

0x0001,

0xfc96,	// (0x00055142) cell_last_hwr_side_pane_g

0x8a64,	// (0x0004df10) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8a64,	// (0x0004df10) vkb2_area_bottom_space_btn_pane

0x1bed,	// (0x00047099) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x615e,	// (0x0004b60a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x24c4,	// (0x00047970) cell_vkb2_top_candi_pane_t1_ParamLimits

0x24e3,	// (0x0004798f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x24e3,	// (0x0004798f) vkb2_area_bottom_space_btn_pane_g1

0x251d,	// (0x000479c9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x251d,	// (0x000479c9) vkb2_area_bottom_space_btn_pane_g2

0x2553,	// (0x000479ff) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2553,	// (0x000479ff) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfc9b,	// (0x00055147) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfc9b,	// (0x00055147) vkb2_area_bottom_space_btn_pane_g

0x1a4b,	// (0x00046ef7) cel_fep_hwr_func_pane_ParamLimits

0x1a4b,	// (0x00046ef7) cel_fep_hwr_func_pane

0x86c4,	// (0x0004db70) cell_hwr_side_button_pane_ParamLimits

0x86c4,	// (0x0004db70) cell_hwr_side_button_pane

0x5b1d,	// (0x0004afc9) aid_area_touch_clock_ParamLimits

0xbb9a,	// (0x00051046) bg_uniindi_top_pane_ParamLimits

0x5b2f,	// (0x0004afdb) uniindi_top_pane_g1_ParamLimits

0x5b45,	// (0x0004aff1) uniindi_top_pane_g2_ParamLimits

0x5b51,	// (0x0004affd) uniindi_top_pane_g3_ParamLimits

0x5b62,	// (0x0004b00e) uniindi_top_pane_g4_ParamLimits

0xfbe2,	// (0x0005508e) uniindi_top_pane_g_ParamLimits

0x5b6f,	// (0x0004b01b) uniindi_top_pane_t1_ParamLimits

0xbb9a,	// (0x00051046) bg_vkb2_func_pane_cp01_ParamLimits

0xbb9a,	// (0x00051046) bg_vkb2_func_pane_cp01

0x6314,	// (0x0004b7c0) cel_fep_hwr_func_pane_g1_ParamLimits

0x6314,	// (0x0004b7c0) cel_fep_hwr_func_pane_g1

0xbb9a,	// (0x00051046) bg_vkb2_func_pane_cp02_ParamLimits

0xbb9a,	// (0x00051046) bg_vkb2_func_pane_cp02

0x6314,	// (0x0004b7c0) cell_hwr_side_button_pane_g1_ParamLimits

0x6314,	// (0x0004b7c0) cell_hwr_side_button_pane_g1

0xd0bf,	// (0x0005256b) status_pane_g4_ParamLimits

0xd0bf,	// (0x0005256b) status_pane_g4

0xd0d7,	// (0x00052583) status_pane_t1

0xedee,	// (0x0005429a) form2_midp_gauge_slider_cont_pane

0xedf6,	// (0x000542a2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa77b,	// (0x0004fc27) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa78d,	// (0x0004fc39) form2_midp_gauge_slider_pane_t3_ParamLimits

0x01bb,	// (0x00045667) form2_midp_gauge_slider_pane_t_ParamLimits

0xee08,	// (0x000542b4) form2_midp_slider_pane_ParamLimits

0x1ea1,	// (0x0004734d) aid_size_cell_func_vkb2_ParamLimits

0x1ea1,	// (0x0004734d) aid_size_cell_func_vkb2

0x62b5,	// (0x0004b761) slider_pane_g4_ParamLimits

0x62b5,	// (0x0004b761) slider_pane_g4

0x8ac5,	// (0x0004df71) form2_midp_gauge_slider_pane_t2_cp01

0x8ad3,	// (0x0004df7f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8ad3,	// (0x0004df7f) form2_midp_gauge_slider_pane_t3_cp01

0x25c8,	// (0x00047a74) form2_midp_slider_pane_cp01

0xb72b,	// (0x00050bd7) navi_smil_pane

0x6344,	// (0x0004b7f0) navi_smil_pane_g1

0x634c,	// (0x0004b7f8) navi_smil_pane_t1

0x6322,	// (0x0004b7ce) form2_midp_slider_pane_g1

0x632b,	// (0x0004b7d7) form2_midp_slider_pane_g2

0x6333,	// (0x0004b7df) form2_midp_slider_pane_g3

0x6322,	// (0x0004b7ce) form2_midp_slider_pane_g4

0xb7fa,	// (0x00050ca6) form2_midp_slider_pane_g5

0x0004,

0xfca4,	// (0x00055150) form2_midp_slider_pane_g

0x258d,	// (0x00047a39) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x258d,	// (0x00047a39) vkb2_area_bottom_space_btn_pane_g4

0x9e3a,	// (0x0004f2e6) lc0_navi_pane_ParamLimits

0x9e3a,	// (0x0004f2e6) lc0_navi_pane

0x9ea4,	// (0x0004f350) lc0_stat_indi_pane_ParamLimits

0x9ea4,	// (0x0004f350) lc0_stat_indi_pane

0x9eb9,	// (0x0004f365) ls0_title_pane_ParamLimits

0x9eb9,	// (0x0004f365) ls0_title_pane

0xc23a,	// (0x000516e6) bg_popup_sub_pane_cp14_ParamLimits

0x5b04,	// (0x0004afb0) list_uniindi_pane_ParamLimits

0x5b10,	// (0x0004afbc) uniindi_top_pane_ParamLimits

0x5bab,	// (0x0004b057) list_single_uniindi_pane_g1_ParamLimits

0x5bbe,	// (0x0004b06a) list_single_uniindi_pane_t1_ParamLimits

0x8af0,	// (0x0004df9c) lc0_stat_clock_pane_ParamLimits

0x8af0,	// (0x0004df9c) lc0_stat_clock_pane

0xb803,	// (0x00050caf) lc0_stat_indi_pane_g1_ParamLimits

0xb803,	// (0x00050caf) lc0_stat_indi_pane_g1

0xb810,	// (0x00050cbc) lc0_stat_indi_pane_g2_ParamLimits

0xb810,	// (0x00050cbc) lc0_stat_indi_pane_g2

0x0001,

0xfcaf,	// (0x0005515b) lc0_stat_indi_pane_g_ParamLimits

0xfcaf,	// (0x0005515b) lc0_stat_indi_pane_g

0x8afd,	// (0x0004dfa9) lc0_uni_indicator_pane_ParamLimits

0x8afd,	// (0x0004dfa9) lc0_uni_indicator_pane

0xb81d,	// (0x00050cc9) ls0_title_pane_g1_ParamLimits

0xb81d,	// (0x00050cc9) ls0_title_pane_g1

0xb831,	// (0x00050cdd) ls0_title_pane_t1_ParamLimits

0xb831,	// (0x00050cdd) ls0_title_pane_t1

0x8b0a,	// (0x0004dfb6) lc0_uni_indicator_pane_g1_ParamLimits

0x8b0a,	// (0x0004dfb6) lc0_uni_indicator_pane_g1

0x635a,	// (0x0004b806) lc0_stat_clock_pane_t1

0xb72b,	// (0x00050bd7) main_ai5_pane

0x6368,	// (0x0004b814) ai5_sk_pane_ParamLimits

0x6368,	// (0x0004b814) ai5_sk_pane

0xb85f,	// (0x00050d0b) cell_ai5_widget_pane_ParamLimits

0xb85f,	// (0x00050d0b) cell_ai5_widget_pane

0x6375,	// (0x0004b821) aid_size_cell_widget_grid

0x6389,	// (0x0004b835) bg_ai5_widget_pane_ParamLimits

0x6389,	// (0x0004b835) bg_ai5_widget_pane

0xb8e8,	// (0x00050d94) cell_ai5_widget_pane_g2

0xb8f8,	// (0x00050da4) cell_ai5_widget_pane_g3

0xb917,	// (0x00050dc3) cell_ai5_widget_pane_g4

0xb923,	// (0x00050dcf) cell_ai5_widget_pane_g5

0xb92f,	// (0x00050ddb) cell_ai5_widget_pane_g6

0xb93b,	// (0x00050de7) cell_ai5_widget_pane_g7

0xb983,	// (0x00050e2f) cell_ai5_widget_pane_t1_ParamLimits

0xb983,	// (0x00050e2f) cell_ai5_widget_pane_t1

0xb9a0,	// (0x00050e4c) cell_ai5_widget_pane_t2_ParamLimits

0xb9a0,	// (0x00050e4c) cell_ai5_widget_pane_t2

0xb9b8,	// (0x00050e64) cell_ai5_widget_pane_t3_ParamLimits

0xb9b8,	// (0x00050e64) cell_ai5_widget_pane_t3

0xb9d0,	// (0x00050e7c) cell_ai5_widget_pane_t4_ParamLimits

0xb9d0,	// (0x00050e7c) cell_ai5_widget_pane_t4

0xb9ea,	// (0x00050e96) cell_ai5_widget_pane_t5_ParamLimits

0xb9ea,	// (0x00050e96) cell_ai5_widget_pane_t5

0x6395,	// (0x0004b841) cell_ai5_widget_pane_t6_ParamLimits

0x6395,	// (0x0004b841) cell_ai5_widget_pane_t6

0x63a7,	// (0x0004b853) cell_ai5_widget_pane_t7_ParamLimits

0x63a7,	// (0x0004b853) cell_ai5_widget_pane_t7

0xba09,	// (0x00050eb5) cell_ai5_widget_pane_t8_ParamLimits

0xba09,	// (0x00050eb5) cell_ai5_widget_pane_t8

0x0009,

0xfcc9,	// (0x00055175) cell_ai5_widget_pane_t_ParamLimits

0xfcc9,	// (0x00055175) cell_ai5_widget_pane_t

0xba55,	// (0x00050f01) grid_ai5_widget_pane

0xc23a,	// (0x000516e6) highlight_cell_ai5_widget_pane_ParamLimits

0xc23a,	// (0x000516e6) highlight_cell_ai5_widget_pane

0xba6b,	// (0x00050f17) ai5_sk_left_pane

0xba75,	// (0x00050f21) ai5_sk_middle_pane

0xba7f,	// (0x00050f2b) ai5_sk_right_pane

0x63c0,	// (0x0004b86c) bg_ai5_widget_pane_g1_ParamLimits

0x63c0,	// (0x0004b86c) bg_ai5_widget_pane_g1

0x63cc,	// (0x0004b878) bg_ai5_widget_pane_g2_ParamLimits

0x63cc,	// (0x0004b878) bg_ai5_widget_pane_g2

0x63d8,	// (0x0004b884) bg_ai5_widget_pane_g3_ParamLimits

0x63d8,	// (0x0004b884) bg_ai5_widget_pane_g3

0x63e4,	// (0x0004b890) bg_ai5_widget_pane_g4_ParamLimits

0x63e4,	// (0x0004b890) bg_ai5_widget_pane_g4

0x63f0,	// (0x0004b89c) bg_ai5_widget_pane_g5_ParamLimits

0x63f0,	// (0x0004b89c) bg_ai5_widget_pane_g5

0x63fc,	// (0x0004b8a8) bg_ai5_widget_pane_g6_ParamLimits

0x63fc,	// (0x0004b8a8) bg_ai5_widget_pane_g6

0x6408,	// (0x0004b8b4) bg_ai5_widget_pane_g7_ParamLimits

0x6408,	// (0x0004b8b4) bg_ai5_widget_pane_g7

0x6414,	// (0x0004b8c0) bg_ai5_widget_pane_g8_ParamLimits

0x6414,	// (0x0004b8c0) bg_ai5_widget_pane_g8

0x6420,	// (0x0004b8cc) bg_ai5_widget_pane_g9_ParamLimits

0x6420,	// (0x0004b8cc) bg_ai5_widget_pane_g9

0x0008,

0xfcde,	// (0x0005518a) bg_ai5_widget_pane_g_ParamLimits

0xfcde,	// (0x0005518a) bg_ai5_widget_pane_g

0x6453,	// (0x0004b8ff) cell_shortcut_ai5_widget_pane_ParamLimits

0x6453,	// (0x0004b8ff) cell_shortcut_ai5_widget_pane

0xb7d7,	// (0x00050c83) bg_cell_shortcut_ai5_widget_pane

0x6464,	// (0x0004b910) cell_grid_ai5_widget_pane_g1

0x646d,	// (0x0004b919) highlight_cell_shortcut_ai5_widget_pane

0xd1af,	// (0x0005265b) ai5_sk_left_pane_g1

0x6475,	// (0x0004b921) ai5_sk_left_pane_g2

0x647d,	// (0x0004b929) ai5_sk_left_pane_g3

0x6485,	// (0x0004b931) ai5_sk_left_pane_g4

0x0003,

0xfcf1,	// (0x0005519d) ai5_sk_left_pane_g

0x648d,	// (0x0004b939) ai5_sk_left_pane_t1

0xd1b7,	// (0x00052663) ai5_sk_right_pane_g1

0x649b,	// (0x0004b947) ai5_sk_right_pane_g2

0x64a3,	// (0x0004b94f) ai5_sk_right_pane_g3

0x64ab,	// (0x0004b957) ai5_sk_right_pane_g4

0x0003,

0xfcfa,	// (0x000551a6) ai5_sk_right_pane_g

0x64b3,	// (0x0004b95f) ai5_sk_right_pane_t1

0xd1b7,	// (0x00052663) ai5_sk_middle_pane_g1

0xd1af,	// (0x0005265b) ai5_sk_middle_pane_g2

0xd1cf,	// (0x0005267b) ai5_sk_middle_pane_g3

0x64a3,	// (0x0004b94f) ai5_sk_middle_pane_g4

0x647d,	// (0x0004b929) ai5_sk_middle_pane_g5

0x64c1,	// (0x0004b96d) ai5_sk_middle_pane_g6

0xba89,	// (0x00050f35) ai5_sk_middle_pane_g7

0x0006,

0xfd03,	// (0x000551af) ai5_sk_middle_pane_g

0x9d26,	// (0x0004f1d2) aid_touch_area_size_lc0_ParamLimits

0x9d26,	// (0x0004f1d2) aid_touch_area_size_lc0

0x1c1c,	// (0x000470c8) cell_hwr_candidate_pane_t1_ParamLimits

0xcfe1,	// (0x0005248d) aid_touch_navi_pane

0x9fab,	// (0x0004f457) status_dt_navi_pane_ParamLimits

0x9fab,	// (0x0004f457) status_dt_navi_pane

0x9fc3,	// (0x0004f46f) status_dt_sta_pane_ParamLimits

0x9fc3,	// (0x0004f46f) status_dt_sta_pane

0xba91,	// (0x00050f3d) dt_sta_controll_pane

0xba9e,	// (0x00050f4a) dt_sta_indi_pane

0xbd4e,	// (0x000511fa) dt_sta_title_pane

0xbb9a,	// (0x00051046) bg_dt_sta_indi_pane_ParamLimits

0xbb9a,	// (0x00051046) bg_dt_sta_indi_pane

0xbd60,	// (0x0005120c) dt_sta_battery_pane

0xbd68,	// (0x00051214) dt_sta_indi_pane_g1

0x64c9,	// (0x0004b975) dt_sta_indi_pane_g2

0x64d2,	// (0x0004b97e) dt_sta_indi_pane_g3

0x0002,

0xfd12,	// (0x000551be) dt_sta_indi_pane_g

0x64db,	// (0x0004b987) dt_sta_signal_pane

0xc23a,	// (0x000516e6) bg_dt_sta_title_pane_ParamLimits

0xc23a,	// (0x000516e6) bg_dt_sta_title_pane

0xde86,	// (0x00053332) dt_sta_title_pane_g1

0xbd71,	// (0x0005121d) dt_sta_title_pane_t1_ParamLimits

0xbd71,	// (0x0005121d) dt_sta_title_pane_t1

0xb72b,	// (0x00050bd7) bg_dt_sta_control_pane

0xbd86,	// (0x00051232) dt_sta_controll_pane_g1

0x64e4,	// (0x0004b990) bg_dt_sta_title_pane_g1

0x64ed,	// (0x0004b999) bg_dt_sta_title_pane_g2

0x64f6,	// (0x0004b9a2) bg_dt_sta_title_pane_g3

0x0002,

0xfd19,	// (0x000551c5) bg_dt_sta_title_pane_g

0xef5f,	// (0x0005440b) bg_dt_sta_indi_pane_g1

0x64ff,	// (0x0004b9ab) dt_sta_signal_pane_g1

0x6507,	// (0x0004b9b3) dt_sta_signal_pane_g2

0x0001,

0xfd20,	// (0x000551cc) dt_sta_signal_pane_g

0x650f,	// (0x0004b9bb) dt_sta_battery_pane_g1

0x6518,	// (0x0004b9c4) dt_sta_battery_pane_t1

0xef5f,	// (0x0005440b) bg_dt_sta_control_pane_g1

0xc7e4,	// (0x00051c90) fep_china_uni_eep_pane

0xc7ec,	// (0x00051c98) fep_china_uni_entry_pane_ParamLimits

0xc7fc,	// (0x00051ca8) popup_fep_china_uni_window_g1_ParamLimits

0xc80c,	// (0x00051cb8) popup_fep_china_uni_window_g2_ParamLimits

0xc80c,	// (0x00051cb8) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00054be6) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00054be6) popup_fep_china_uni_window_g

0x6527,	// (0x0004b9d3) fep_china_uni_eep_pane_g1

0x652f,	// (0x0004b9db) fep_china_uni_eep_pane_t1

0x633b,	// (0x0004b7e7) aid_touch_area_size_smil_player

0xd092,	// (0x0005253e) lc0_clock_pane

0xd0cb,	// (0x00052577) status_pane_g5_ParamLimits

0xd0cb,	// (0x00052577) status_pane_g5

0x97f2,	// (0x0004ec9e) popup_keymap_window

0xd0ab,	// (0x00052557) status_icon_pane

0xb8f8,	// (0x00050da4) cell_ai5_widget_pane_g3_ParamLimits

0xb917,	// (0x00050dc3) cell_ai5_widget_pane_g4_ParamLimits

0xb923,	// (0x00050dcf) cell_ai5_widget_pane_g5_ParamLimits

0xb947,	// (0x00050df3) cell_ai5_widget_pane_g8_ParamLimits

0xb947,	// (0x00050df3) cell_ai5_widget_pane_g8

0xb95b,	// (0x00050e07) cell_ai5_widget_pane_g9_ParamLimits

0xb95b,	// (0x00050e07) cell_ai5_widget_pane_g9

0xb96f,	// (0x00050e1b) cell_ai5_widget_pane_g10_ParamLimits

0xb96f,	// (0x00050e1b) cell_ai5_widget_pane_g10

0x653e,	// (0x0004b9ea) status_icon_pane_g1

0xb72b,	// (0x00050bd7) bg_popup_sub_pane_cp13

0x6546,	// (0x0004b9f2) popup_keymap_window_t1

0x95fd,	// (0x0004eaa9) control_pane_g6_ParamLimits

0x95fd,	// (0x0004eaa9) control_pane_g6

0x960a,	// (0x0004eab6) control_pane_g7_ParamLimits

0x960a,	// (0x0004eab6) control_pane_g7

0x9617,	// (0x0004eac3) control_pane_g8_ParamLimits

0x9617,	// (0x0004eac3) control_pane_g8

0xba91,	// (0x00050f3d) dt_sta_controll_pane_ParamLimits

0xba9e,	// (0x00050f4a) dt_sta_indi_pane_ParamLimits

0xbd4e,	// (0x000511fa) dt_sta_title_pane_ParamLimits

0xc0d3,	// (0x0005157f) aid_size_touch_scroll_bar_cale

0x08a5,	// (0x00045d51) popup_discreet_window_ParamLimits

0x08a5,	// (0x00045d51) popup_discreet_window

0x7fb1,	// (0x0004d45d) popup_sk_window

0xd774,	// (0x00052c20) bg_popup_sub_pane_cp28_ParamLimits

0xd774,	// (0x00052c20) bg_popup_sub_pane_cp28

0x6554,	// (0x0004ba00) popup_discreet_window_g1_ParamLimits

0x6554,	// (0x0004ba00) popup_discreet_window_g1

0x6574,	// (0x0004ba20) popup_discreet_window_t1_ParamLimits

0x6574,	// (0x0004ba20) popup_discreet_window_t1

0x6592,	// (0x0004ba3e) popup_discreet_window_t2_ParamLimits

0x6592,	// (0x0004ba3e) popup_discreet_window_t2

0x0002,

0xfd25,	// (0x000551d1) popup_discreet_window_t_ParamLimits

0xfd25,	// (0x000551d1) popup_discreet_window_t

0x2601,	// (0x00047aad) popup_sk_window_g1

0x260b,	// (0x00047ab7) popup_sk_window_g2

0x0001,

0xfd2c,	// (0x000551d8) popup_sk_window_g

0x65e4,	// (0x0004ba90) popup_sk_window_t1

0x65f2,	// (0x0004ba9e) popup_sk_window_t1_copy1

0xb8e8,	// (0x00050d94) cell_ai5_widget_pane_g2_ParamLimits

0xba1b,	// (0x00050ec7) cell_ai5_widget_pane_t9_ParamLimits

0xba1b,	// (0x00050ec7) cell_ai5_widget_pane_t9

0xb72b,	// (0x00050bd7) main_fep_fshwr2_pane

0xbd8f,	// (0x0005123b) aid_fshwr2_btn_pane

0xbd97,	// (0x00051243) aid_fshwr2_syb_pane

0xbd9f,	// (0x0005124b) aid_fshwr2_txt_pane

0xbda7,	// (0x00051253) fshwr2_func_candi_pane

0xbdb1,	// (0x0005125d) fshwr2_hwr_syb_pane

0xbdbf,	// (0x0005126b) fshwr2_icf_pane

0xb72b,	// (0x00050bd7) fshwr2_icf_bg_pane

0xbdc9,	// (0x00051275) fshwr2_icf_pane_t1_ParamLimits

0xbdc9,	// (0x00051275) fshwr2_icf_pane_t1

0xef5f,	// (0x0005440b) fshwr2_func_candi_pane_g1

0x6614,	// (0x0004bac0) fshwr2_func_candi_row_pane_ParamLimits

0x6614,	// (0x0004bac0) fshwr2_func_candi_row_pane

0xbde3,	// (0x0005128f) cell_fshwr2_syb_pane_ParamLimits

0xbde3,	// (0x0005128f) cell_fshwr2_syb_pane

0xf1f4,	// (0x000546a0) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf1f4,	// (0x000546a0) fshwr2_hwr_syb_pane_g1

0xb72b,	// (0x00050bd7) bg_popup_call_pane_cp01

0x6625,	// (0x0004bad1) fshwr2_func_candi_cell_pane_ParamLimits

0x6625,	// (0x0004bad1) fshwr2_func_candi_cell_pane

0x6656,	// (0x0004bb02) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6656,	// (0x0004bb02) fshwr2_func_candi_cell_bg_pane

0x6670,	// (0x0004bb1c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6670,	// (0x0004bb1c) fshwr2_func_candi_cell_pane_g1

0x6690,	// (0x0004bb3c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6690,	// (0x0004bb3c) fshwr2_func_candi_cell_pane_t1

0xb72b,	// (0x00050bd7) bg_button_pane_cp08

0xcc75,	// (0x00052121) cell_fshwr2_syb_bg_pane

0xbdfd,	// (0x000512a9) cell_fshwr2_syb_bg_pane_g1

0x66a3,	// (0x0004bb4f) cell_fshwr2_syb_bg_pane_t1

0xc23a,	// (0x000516e6) main_tmo_pane

0xa303,	// (0x0004f7af) uni_indicator_pane_g1_ParamLimits

0xa318,	// (0x0004f7c4) uni_indicator_pane_g2_ParamLimits

0xa32d,	// (0x0004f7d9) uni_indicator_pane_g3_ParamLimits

0xe14a,	// (0x000535f6) uni_indicator_pane_g4_ParamLimits

0xe14a,	// (0x000535f6) uni_indicator_pane_g4

0xe15e,	// (0x0005360a) uni_indicator_pane_g5_ParamLimits

0xe15e,	// (0x0005360a) uni_indicator_pane_g5

0xe172,	// (0x0005361e) uni_indicator_pane_g6_ParamLimits

0xe172,	// (0x0005361e) uni_indicator_pane_g6

0xf932,	// (0x00054dde) uni_indicator_pane_g_ParamLimits

0xac97,	// (0x00050143) popup_tmo_note_window_ParamLimits

0xac97,	// (0x00050143) popup_tmo_note_window

0xb72b,	// (0x00050bd7) fshwr2_bg_pane

0x6681,	// (0x0004bb2d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6681,	// (0x0004bb2d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfd31,	// (0x000551dd) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfd31,	// (0x000551dd) fshwr2_func_candi_cell_pane_g

0xef5f,	// (0x0005440b) bg_popup_window_pane_cp01

0x66b2,	// (0x0004bb5e) bg_popup_window_pane_g1_cp01

0x66bb,	// (0x0004bb67) bg_popup_window_pane_cp22_ParamLimits

0x66bb,	// (0x0004bb67) bg_popup_window_pane_cp22

0x66c9,	// (0x0004bb75) listscroll_tmo_link_pane_ParamLimits

0x66c9,	// (0x0004bb75) listscroll_tmo_link_pane

0x6709,	// (0x0004bbb5) popup_tmo_note_window_g1_ParamLimits

0x6709,	// (0x0004bbb5) popup_tmo_note_window_g1

0x6716,	// (0x0004bbc2) tmo_note_info_pane_ParamLimits

0x6716,	// (0x0004bbc2) tmo_note_info_pane

0xbe05,	// (0x000512b1) list_tmo_note_info_pane_g1_ParamLimits

0xbe05,	// (0x000512b1) list_tmo_note_info_pane_g1

0x6730,	// (0x0004bbdc) list_tmo_note_info_pane_g2_ParamLimits

0x6730,	// (0x0004bbdc) list_tmo_note_info_pane_g2

0x0001,

0xfd36,	// (0x000551e2) list_tmo_note_info_pane_g_ParamLimits

0xfd36,	// (0x000551e2) list_tmo_note_info_pane_g

0x674c,	// (0x0004bbf8) list_tmo_note_info_text_pane_ParamLimits

0x674c,	// (0x0004bbf8) list_tmo_note_info_text_pane

0x678e,	// (0x0004bc3a) list_tmo_link_pane

0x679b,	// (0x0004bc47) scroll_pane_cp20

0x67a8,	// (0x0004bc54) list_single_tmo_link_pane_ParamLimits

0x67a8,	// (0x0004bc54) list_single_tmo_link_pane

0x67b8,	// (0x0004bc64) list_single_tmo_link_pane_t1

0x67c6,	// (0x0004bc72) list_tmo_note_info_text_pane_t1_ParamLimits

0x67c6,	// (0x0004bc72) list_tmo_note_info_text_pane_t1

0x932a,	// (0x0004e7d6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x932a,	// (0x0004e7d6) aid_size_touch_scroll_bar_cp01

0x8c4c,	// (0x0004e0f8) aid_size_touch_slider_marker

0x7fa1,	// (0x0004d44d) popup_settings_window_ParamLimits

0x7fa1,	// (0x0004d44d) popup_settings_window

0x3006,	// (0x000484b2) popup_candi_list_indi_window

0xcfe1,	// (0x0005248d) aid_touch_navi_pane_ParamLimits

0x1dda,	// (0x00047286) rs_clock_indi_pane

0x1de3,	// (0x0004728f) sctrl_sk_bottom_pane_ParamLimits

0x1df4,	// (0x000472a0) sctrl_sk_top_pane_ParamLimits

0x1efb,	// (0x000473a7) popup_fep_tooltip_window

0x6375,	// (0x0004b821) aid_size_cell_widget_grid_ParamLimits

0xb8dc,	// (0x00050d88) cell_ai5_widget_pane_g1_ParamLimits

0xb8dc,	// (0x00050d88) cell_ai5_widget_pane_g1

0xb92f,	// (0x00050ddb) cell_ai5_widget_pane_g6_ParamLimits

0xb93b,	// (0x00050de7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfcb4,	// (0x00055160) cell_ai5_widget_pane_g_ParamLimits

0xfcb4,	// (0x00055160) cell_ai5_widget_pane_g

0xba3f,	// (0x00050eeb) cell_ai5_widget_pane_t10_ParamLimits

0xba3f,	// (0x00050eeb) cell_ai5_widget_pane_t10

0xba55,	// (0x00050f01) grid_ai5_widget_pane_ParamLimits

0x642c,	// (0x0004b8d8) cell_contacts_ai5_widget_pane_ParamLimits

0x642c,	// (0x0004b8d8) cell_contacts_ai5_widget_pane

0x65a7,	// (0x0004ba53) popup_discreet_window_t3_ParamLimits

0x65a7,	// (0x0004ba53) popup_discreet_window_t3

0x6600,	// (0x0004baac) popup_fshwr2_char_preview_window_ParamLimits

0x6600,	// (0x0004baac) popup_fshwr2_char_preview_window

0xbe1c,	// (0x000512c8) tmo_note_info_pane_t1

0xc127,	// (0x000515d3) tmo_note_info_pane_t2

0xc140,	// (0x000515ec) tmo_note_info_pane_t3

0x676a,	// (0x0004bc16) tmo_note_info_pane_t4

0x677c,	// (0x0004bc28) tmo_note_info_pane_t5

0x0004,

0xfd3b,	// (0x000551e7) tmo_note_info_pane_t

0x678e,	// (0x0004bc3a) list_tmo_link_pane_ParamLimits

0x679b,	// (0x0004bc47) scroll_pane_cp20_ParamLimits

0xb72b,	// (0x00050bd7) bg_popup_fep_char_preview_window_cp01

0x67df,	// (0x0004bc8b) popup_fshwr2_char_preview_window_t1

0x67ed,	// (0x0004bc99) popup_candi_list_indi_window_g1

0x67f6,	// (0x0004bca2) bg_cell_contacts_ai5_widget_pane

0x6802,	// (0x0004bcae) cell_contacts_ai5_widget_pane_g1

0x6816,	// (0x0004bcc2) cell_contacts_ai5_widget_pane_g2

0x6825,	// (0x0004bcd1) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfd46,	// (0x000551f2) cell_contacts_ai5_widget_pane_g

0x6838,	// (0x0004bce4) cell_contacts_ai5_widget_pane_t1

0xc23a,	// (0x000516e6) highlight_cell_shortcut_ai5_widget_pane_cp01

0x68b2,	// (0x0004bd5e) settings_container_pane

0xcc75,	// (0x00052121) listscroll_set_pane_copy1

0xe94f,	// (0x00053dfb) scroll_pane_cp121_copy1

0x68be,	// (0x0004bd6a) set_content_pane_copy1

0x68c6,	// (0x0004bd72) aid_height_set_list_copy1_ParamLimits

0x68c6,	// (0x0004bd72) aid_height_set_list_copy1

0xd6e4,	// (0x00052b90) aid_size_parent_copy1_ParamLimits

0xd6e4,	// (0x00052b90) aid_size_parent_copy1

0x68d2,	// (0x0004bd7e) button_value_adjust_pane_cp6_copy1_ParamLimits

0x68d2,	// (0x0004bd7e) button_value_adjust_pane_cp6_copy1

0xc385,	// (0x00051831) list_highlight_pane_cp2_copy1_ParamLimits

0xc385,	// (0x00051831) list_highlight_pane_cp2_copy1

0x68e6,	// (0x0004bd92) list_set_pane_copy1_ParamLimits

0x68e6,	// (0x0004bd92) list_set_pane_copy1

0x684d,	// (0x0004bcf9) main_pane_set_t1_copy1_ParamLimits

0x684d,	// (0x0004bcf9) main_pane_set_t1_copy1

0x6887,	// (0x0004bd33) main_pane_set_t2_copy1_ParamLimits

0x6887,	// (0x0004bd33) main_pane_set_t2_copy1

0x6993,	// (0x0004be3f) main_pane_set_t3_copy1

0x69a1,	// (0x0004be4d) main_pane_set_t4_copy1

0x68a6,	// (0x0004bd52) set_content_pane_g1_copy1_ParamLimits

0x68a6,	// (0x0004bd52) set_content_pane_g1_copy1

0x69af,	// (0x0004be5b) setting_code_pane_copy1

0x69b9,	// (0x0004be65) setting_slider_graphic_pane_copy1

0x69b9,	// (0x0004be65) setting_slider_pane_copy1

0x69b9,	// (0x0004be65) setting_text_pane_copy1

0x69c3,	// (0x0004be6f) setting_volume_pane_copy1

0x69cc,	// (0x0004be78) settings_code_pane_cp2_copy1

0x69d4,	// (0x0004be80) settings_code_pane_cp_copy1_ParamLimits

0x69d4,	// (0x0004be80) settings_code_pane_cp_copy1

0x69e8,	// (0x0004be94) volume_set_pane_copy1

0x69f0,	// (0x0004be9c) volume_set_pane_g10_copy1

0x69f8,	// (0x0004bea4) volume_set_pane_g1_copy1

0x6a00,	// (0x0004beac) volume_set_pane_g2_copy1

0x6a08,	// (0x0004beb4) volume_set_pane_g3_copy1

0x6a10,	// (0x0004bebc) volume_set_pane_g4_copy1

0x6a18,	// (0x0004bec4) volume_set_pane_g5_copy1

0x6a20,	// (0x0004becc) volume_set_pane_g6_copy1

0x6a28,	// (0x0004bed4) volume_set_pane_g7_copy1

0x6a30,	// (0x0004bedc) volume_set_pane_g8_copy1

0x6a38,	// (0x0004bee4) volume_set_pane_g9_copy1

0xb79b,	// (0x00050c47) bg_set_opt_pane_cp_copy1_ParamLimits

0xb79b,	// (0x00050c47) bg_set_opt_pane_cp_copy1

0x6a40,	// (0x0004beec) setting_slider_pane_t1_copy1_ParamLimits

0x6a40,	// (0x0004beec) setting_slider_pane_t1_copy1

0x6a5e,	// (0x0004bf0a) setting_slider_pane_t2_copy1_ParamLimits

0x6a5e,	// (0x0004bf0a) setting_slider_pane_t2_copy1

0x6a78,	// (0x0004bf24) setting_slider_pane_t3_copy1_ParamLimits

0x6a78,	// (0x0004bf24) setting_slider_pane_t3_copy1

0x6a90,	// (0x0004bf3c) slider_set_pane_copy1_ParamLimits

0x6a90,	// (0x0004bf3c) slider_set_pane_copy1

0xc295,	// (0x00051741) set_opt_bg_pane_g1_copy2

0xc29d,	// (0x00051749) set_opt_bg_pane_g2_copy2

0x6aa6,	// (0x0004bf52) set_opt_bg_pane_g3_copy2

0xc2ad,	// (0x00051759) set_opt_bg_pane_g4_copy2

0xc2b5,	// (0x00051761) set_opt_bg_pane_g5_copy2

0xc2bd,	// (0x00051769) set_opt_bg_pane_g6_copy2

0x6ab0,	// (0x0004bf5c) set_opt_bg_pane_g7_copy2

0x6ab8,	// (0x0004bf64) set_opt_bg_pane_g8_copy2

0x6ac2,	// (0x0004bf6e) set_opt_bg_pane_g9_copy2

0x2615,	// (0x00047ac1) aid_size_touch_slider_mark_copy1_ParamLimits

0x2615,	// (0x00047ac1) aid_size_touch_slider_mark_copy1

0x6acc,	// (0x0004bf78) slider_set_pane_g1_copy1

0x2629,	// (0x00047ad5) slider_set_pane_g2_copy1

0x17c5,	// (0x00046c71) slider_set_pane_g3_copy1_ParamLimits

0x17c5,	// (0x00046c71) slider_set_pane_g3_copy1

0x17d9,	// (0x00046c85) slider_set_pane_g4_copy1_ParamLimits

0x17d9,	// (0x00046c85) slider_set_pane_g4_copy1

0x17f1,	// (0x00046c9d) slider_set_pane_g5_copy1_ParamLimits

0x17f1,	// (0x00046c9d) slider_set_pane_g5_copy1

0x17c5,	// (0x00046c71) slider_set_pane_g6_copy1_ParamLimits

0x17c5,	// (0x00046c71) slider_set_pane_g6_copy1

0x2631,	// (0x00047add) slider_set_pane_g7_copy1_ParamLimits

0x2631,	// (0x00047add) slider_set_pane_g7_copy1

0xb73f,	// (0x00050beb) bg_set_opt_pane_cp2_copy1

0x6ad5,	// (0x0004bf81) setting_slider_graphic_pane_g1_copy1

0x6ade,	// (0x0004bf8a) setting_slider_graphic_pane_t1_copy1

0x6aee,	// (0x0004bf9a) setting_slider_graphic_pane_t2_copy1

0x6afe,	// (0x0004bfaa) slider_set_pane_cp_copy1

0x6b0e,	// (0x0004bfba) input_focus_pane_cp1_copy1

0x6b17,	// (0x0004bfc3) list_set_text_pane_copy1

0x6b1f,	// (0x0004bfcb) setting_text_pane_g1_copy1

0x3729,	// (0x00048bd5) set_text_pane_t1_copy1

0x6b0e,	// (0x0004bfba) input_focus_pane_cp2_copy1

0x6b1f,	// (0x0004bfcb) setting_code_pane_g1_copy1

0x6b28,	// (0x0004bfd4) setting_code_pane_t1_copy1

0x6b36,	// (0x0004bfe2) list_set_graphic_pane_copy1

0xb73f,	// (0x00050beb) bg_set_opt_pane_cp4_copy1

0xc977,	// (0x00051e23) list_set_graphic_pane_g1_copy1_ParamLimits

0xc977,	// (0x00051e23) list_set_graphic_pane_g1_copy1

0x6b4a,	// (0x0004bff6) list_set_graphic_pane_g2_copy1

0xc98f,	// (0x00051e3b) list_set_graphic_pane_t1_copy1_ParamLimits

0xc98f,	// (0x00051e3b) list_set_graphic_pane_t1_copy1

0xef5f,	// (0x0005440b) rs_clock_indi_pane_g1

0x6b52,	// (0x0004bffe) rs_clock_indi_pane_t1

0x6b60,	// (0x0004c00c) rs_indi_pane

0x6b68,	// (0x0004c014) rs_indi_pane_g1

0x6b71,	// (0x0004c01d) rs_indi_pane_g2

0x6b7a,	// (0x0004c026) rs_indi_pane_g3

0x0002,

0xfd4d,	// (0x000551f9) rs_indi_pane_g

0xcc75,	// (0x00052121) bg_popup_preview_window_pane_cp03

0x6b83,	// (0x0004c02f) popup_fep_tooltip_window_t1

0x4e8c,	// (0x0004a338) popup_note2_window_g2_ParamLimits

0x4e8c,	// (0x0004a338) popup_note2_window_g2

0x0001,

0xfb26,	// (0x00054fd2) popup_note2_window_g_ParamLimits

0xfb26,	// (0x00054fd2) popup_note2_window_g

0x537a,	// (0x0004a826) bg_popup_sub_pane_cp11_ParamLimits

0x5387,	// (0x0004a833) cell_ai3_links_pane_g1_ParamLimits

0x539e,	// (0x0004a84a) cell_ai3_links_pane_t1

0x3729,	// (0x00048bd5) set_text_pane_t1_copy1_ParamLimits

0xcb84,	// (0x00052030) cell_graphic_popup_pane_cp2_ParamLimits

0xcb84,	// (0x00052030) cell_graphic_popup_pane_cp2

0x6b91,	// (0x0004c03d) cell_graphic_popup_pane_g1_cp2

0xbee6,	// (0x00051392) cell_graphic_popup_pane_g2_cp2

0x6b99,	// (0x0004c045) cell_graphic_popup_pane_g3_cp2

0x6ba1,	// (0x0004c04d) cell_graphic_popup_pane_t2_cp2

0xbef7,	// (0x000513a3) grid_highlight_pane_cp3_cp2

0xc52f,	// (0x000519db) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc23a,	// (0x000516e6) main_tmo_pane_ParamLimits

0xac8b,	// (0x00050137) popup_tmo_big_image_note_window

0xb8cc,	// (0x00050d78) cell_ai5_widget_list_pane

0xb8d4,	// (0x00050d80) cell_ai5_widget_lrg_icon_pane

0xbe1c,	// (0x000512c8) tmo_note_info_pane_t1_ParamLimits

0xc127,	// (0x000515d3) tmo_note_info_pane_t2_ParamLimits

0xc140,	// (0x000515ec) tmo_note_info_pane_t3_ParamLimits

0x676a,	// (0x0004bc16) tmo_note_info_pane_t4_ParamLimits

0x677c,	// (0x0004bc28) tmo_note_info_pane_t5_ParamLimits

0xfd3b,	// (0x000551e7) tmo_note_info_pane_t_ParamLimits

0x68b2,	// (0x0004bd5e) settings_container_pane_ParamLimits

0x6b06,	// (0x0004bfb2) indicator_popup_pane_cp5

0x6b06,	// (0x0004bfb2) indicator_popup_pane_cp6

0x6b36,	// (0x0004bfe2) list_set_graphic_pane_copy1_ParamLimits

0xb72b,	// (0x00050bd7) bg_popup_window_pane_cp23

0x6baf,	// (0x0004c05b) popup_tmo_big_image_note_window_g1

0x6bba,	// (0x0004c066) popup_tmo_big_image_note_window_t1

0x6bca,	// (0x0004c076) popup_tmo_big_image_note_window_t2

0x6bda,	// (0x0004c086) popup_tmo_big_image_note_window_t3

0x0002,

0xfd54,	// (0x00055200) popup_tmo_big_image_note_window_t

0xc155,	// (0x00051601) cell_ai5_widget_lrg_icon_pane_g1

0xc15d,	// (0x00051609) cell_ai5_widget_lrg_icon_pane_t1

0xc16b,	// (0x00051617) cell_ai5_widget_list_row_pane_ParamLimits

0xc16b,	// (0x00051617) cell_ai5_widget_list_row_pane

0xc184,	// (0x00051630) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xc184,	// (0x00051630) cell_ai5_widget_list_row_pane_g1

0xc191,	// (0x0005163d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xc191,	// (0x0005163d) cell_ai5_widget_list_row_pane_t1

0xc1a9,	// (0x00051655) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xc1a9,	// (0x00051655) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfd5b,	// (0x00055207) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfd5b,	// (0x00055207) cell_ai5_widget_list_row_pane_t

0x07cc,	// (0x00045c78) main_fep_vtchi_ss_pane

0x6bea,	// (0x0004c096) popup_fep_char_pre_window

0x6bf2,	// (0x0004c09e) popup_fep_ituss_window

0x6c13,	// (0x0004c0bf) popup_fep_vkbss_window

0x6c32,	// (0x0004c0de) grid_vkbss_keypad_pane_ParamLimits

0x6c32,	// (0x0004c0de) grid_vkbss_keypad_pane

0x6c42,	// (0x0004c0ee) ituss_keypad_pane

0x6c5a,	// (0x0004c106) aid_vkbss_key_offset_ParamLimits

0x6c5a,	// (0x0004c106) aid_vkbss_key_offset

0x6c66,	// (0x0004c112) cell_vkbss_key_pane_ParamLimits

0x6c66,	// (0x0004c112) cell_vkbss_key_pane

0x6c7c,	// (0x0004c128) bg_cell_vkbss_key_g1_ParamLimits

0x6c7c,	// (0x0004c128) bg_cell_vkbss_key_g1

0x6c88,	// (0x0004c134) cell_vkbss_key_3p_pane_ParamLimits

0x6c88,	// (0x0004c134) cell_vkbss_key_3p_pane

0x6ca2,	// (0x0004c14e) cell_vkbss_key_g1_ParamLimits

0x6ca2,	// (0x0004c14e) cell_vkbss_key_g1

0x6cbc,	// (0x0004c168) cell_vkbss_key_t1_ParamLimits

0x6cbc,	// (0x0004c168) cell_vkbss_key_t1

0x6ce7,	// (0x0004c193) cell_ituss_key_pane_ParamLimits

0x6ce7,	// (0x0004c193) cell_ituss_key_pane

0x6cf7,	// (0x0004c1a3) bg_cell_ituss_key_g1_ParamLimits

0x6cf7,	// (0x0004c1a3) bg_cell_ituss_key_g1

0x6d03,	// (0x0004c1af) cell_ituss_key_pane_g1_ParamLimits

0x6d03,	// (0x0004c1af) cell_ituss_key_pane_g1

0x6d0f,	// (0x0004c1bb) cell_ituss_key_pane_g2_ParamLimits

0x6d0f,	// (0x0004c1bb) cell_ituss_key_pane_g2

0x0001,

0xfd60,	// (0x0005520c) cell_ituss_key_pane_g_ParamLimits

0xfd60,	// (0x0005520c) cell_ituss_key_pane_g

0x6d28,	// (0x0004c1d4) cell_ituss_key_t1_ParamLimits

0x6d28,	// (0x0004c1d4) cell_ituss_key_t1

0x6d56,	// (0x0004c202) cell_ituss_key_t2_ParamLimits

0x6d56,	// (0x0004c202) cell_ituss_key_t2

0x6d87,	// (0x0004c233) cell_ituss_key_t3_ParamLimits

0x6d87,	// (0x0004c233) cell_ituss_key_t3

0x6db8,	// (0x0004c264) cell_ituss_key_t4_ParamLimits

0x6db8,	// (0x0004c264) cell_ituss_key_t4

0x0003,

0xfd65,	// (0x00055211) cell_ituss_key_t_ParamLimits

0xfd65,	// (0x00055211) cell_ituss_key_t

0x6de9,	// (0x0004c295) cell_vkbss_key_3p_pane_g1

0x6df1,	// (0x0004c29d) cell_vkbss_key_3p_pane_g2

0x6df9,	// (0x0004c2a5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfd6e,	// (0x0005521a) cell_vkbss_key_3p_pane_g

0xb72b,	// (0x00050bd7) bg_popup_fep_char_preview_window_cp02

0x6e01,	// (0x0004c2ad) popup_fep_char_pre_window_t1

0xb8c2,	// (0x00050d6e) main_ai5_sk_pane

0x67f6,	// (0x0004bca2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6802,	// (0x0004bcae) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6816,	// (0x0004bcc2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6825,	// (0x0004bcd1) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfd46,	// (0x000551f2) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6838,	// (0x0004bce4) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc23a,	// (0x000516e6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xc1bb,	// (0x00051667) main_ai5_sk_pane_g1

0xd5a0,	// (0x00052a4c) popup_query_code_window_g1

0x6c08,	// (0x0004c0b4) popup_fep_vkb_icf_pane

0x6c1c,	// (0x0004c0c8) popup_fep_vtchi_icf_pane

0xc23a,	// (0x000516e6) bg_icf_pane

0x6e1f,	// (0x0004c2cb) list_vkb_icf_pane

0xc23a,	// (0x000516e6) bg_icf_pane_cp01

0x56aa,	// (0x0004ab56) vtchi_icf_list_pane

0x6e3f,	// (0x0004c2eb) list_vkb_icf_pane_t1_ParamLimits

0x6e3f,	// (0x0004c2eb) list_vkb_icf_pane_t1

0x6e59,	// (0x0004c305) vtchi_icf_list_pane_t1_ParamLimits

0x6e59,	// (0x0004c305) vtchi_icf_list_pane_t1

0x6bf2,	// (0x0004c09e) popup_fep_ituss_window_ParamLimits

0x6c1c,	// (0x0004c0c8) popup_fep_vtchi_icf_pane_ParamLimits

0x6c42,	// (0x0004c0ee) ituss_keypad_pane_ParamLimits

0x6c51,	// (0x0004c0fd) ituss_sks_pane

0xc23a,	// (0x000516e6) bg_icf_pane_ParamLimits

0x6e10,	// (0x0004c2bc) icf_edit_indi_pane_ParamLimits

0x6e10,	// (0x0004c2bc) icf_edit_indi_pane

0x6e1f,	// (0x0004c2cb) list_vkb_icf_pane_ParamLimits

0xc23a,	// (0x000516e6) bg_icf_pane_cp01_ParamLimits

0x6e2b,	// (0x0004c2d7) icf_edit_indi_pane_cp01_ParamLimits

0x6e2b,	// (0x0004c2d7) icf_edit_indi_pane_cp01

0x6e37,	// (0x0004c2e3) vtchi_query_pane

0xf1f4,	// (0x000546a0) icf_edit_indi_pane_g1_ParamLimits

0xf1f4,	// (0x000546a0) icf_edit_indi_pane_g1

0x6e7e,	// (0x0004c32a) icf_edit_indi_pane_g2_ParamLimits

0x6e7e,	// (0x0004c32a) icf_edit_indi_pane_g2

0x0001,

0xfd75,	// (0x00055221) icf_edit_indi_pane_g_ParamLimits

0xfd75,	// (0x00055221) icf_edit_indi_pane_g

0x730f,	// (0x0004c7bb) icf_edit_indi_pane_t1

0x731d,	// (0x0004c7c9) bg_input_focus_pane_cp042

0xc0ca,	// (0x00051576) vtchi_button_pane

0x7326,	// (0x0004c7d2) vtchi_query_pane_t1

0x7334,	// (0x0004c7e0) vtchi_query_pane_t2

0x7342,	// (0x0004c7ee) vtchi_query_pane_t3

0x0002,

0xfd7a,	// (0x00055226) vtchi_query_pane_t

0xb72b,	// (0x00050bd7) bg_button_pane_cp13

0x7350,	// (0x0004c7fc) vtchi_button_pane_g1

0x5bf5,	// (0x0004b0a1) ituss_sks_pane_g1

0x7358,	// (0x0004c804) ituss_sks_pane_g2

0x0001,

0xfd81,	// (0x0005522d) ituss_sks_pane_g

0x7361,	// (0x0004c80d) ituss_sks_pane_t1

0x736f,	// (0x0004c81b) ituss_sks_pane_t2

0x0001,

0xfd86,	// (0x00055232) ituss_sks_pane_t

0xec2c,	// (0x000540d8) indicator_nsta_pane_cp_g1

0xec35,	// (0x000540e1) indicator_nsta_pane_cp_g2

0xec3d,	// (0x000540e9) indicator_nsta_pane_cp_g3

0xec45,	// (0x000540f1) indicator_nsta_pane_cp_g4

0xec4d,	// (0x000540f9) indicator_nsta_pane_cp_g5

0xec55,	// (0x00054101) indicator_nsta_pane_cp_g6

0x0005,

0x0171,	// (0x0004561d) indicator_nsta_pane_cp_g

0xb630,	// (0x00050adc) cell_graphic2_pane_t2_ParamLimits

0xb630,	// (0x00050adc) cell_graphic2_pane_t2

0x0001,

0x0472,	// (0x0004591e) cell_graphic2_pane_t_ParamLimits

0x0472,	// (0x0004591e) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
