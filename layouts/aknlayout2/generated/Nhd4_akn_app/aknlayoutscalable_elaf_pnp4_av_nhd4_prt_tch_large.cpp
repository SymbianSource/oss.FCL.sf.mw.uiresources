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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000440c3 };

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
0x6275,	// (0x0004a338) Screen

0x6281,	// (0x0004a344) application_window_ParamLimits

0x6281,	// (0x0004a344) application_window

0x0a04,	// (0x00044ac7) screen_g1

0x62dd,	// (0x0004a3a0) area_bottom_pane_ParamLimits

0x62dd,	// (0x0004a3a0) area_bottom_pane

0x63a3,	// (0x0004a466) area_top_pane_ParamLimits

0x63a3,	// (0x0004a466) area_top_pane

0x6437,	// (0x0004a4fa) main_pane_ParamLimits

0x6437,	// (0x0004a4fa) main_pane

0x0a0e,	// (0x00044ad1) misc_graphics

0x7e9d,	// (0x0004bf60) battery_pane_ParamLimits

0x7e9d,	// (0x0004bf60) battery_pane

0xa2c9,	// (0x0004e38c) bg_status_flat_pane_g8

0xa2d1,	// (0x0004e394) bg_status_flat_pane_g9

0x7f65,	// (0x0004c028) context_pane_ParamLimits

0x7f65,	// (0x0004c028) context_pane

0x807b,	// (0x0004c13e) navi_pane_ParamLimits

0x807b,	// (0x0004c13e) navi_pane

0x80ff,	// (0x0004c1c2) signal_pane_ParamLimits

0x80ff,	// (0x0004c1c2) signal_pane

0x0008,

0xf84d,	// (0x00053910) bg_status_flat_pane_g

0x98aa,	// (0x0004d96d) status_pane_g1_ParamLimits

0x98aa,	// (0x0004d96d) status_pane_g1

0x98be,	// (0x0004d981) status_pane_g2_ParamLimits

0x98be,	// (0x0004d981) status_pane_g2

0x98ca,	// (0x0004d98d) status_pane_g3_ParamLimits

0x98ca,	// (0x0004d98d) status_pane_g3

0x0004,

0xf774,	// (0x00053837) status_pane_g_ParamLimits

0xf774,	// (0x00053837) status_pane_g

0x98fe,	// (0x0004d9c1) title_pane_ParamLimits

0x98fe,	// (0x0004d9c1) title_pane

0x993b,	// (0x0004d9fe) uni_indicator_pane_ParamLimits

0x993b,	// (0x0004d9fe) uni_indicator_pane

0x184c,	// (0x0004590f) bg_list_pane_ParamLimits

0x184c,	// (0x0004590f) bg_list_pane

0x7862,	// (0x0004b925) find_pane

0x0f62,	// (0x00045025) listscroll_app_pane_ParamLimits

0x0f62,	// (0x00045025) listscroll_app_pane

0x186c,	// (0x0004592f) listscroll_form_pane

0x786a,	// (0x0004b92d) listscroll_gen_pane_ParamLimits

0x786a,	// (0x0004b92d) listscroll_gen_pane

0x787e,	// (0x0004b941) listscroll_set_pane

0x6da9,	// (0x0004ae6c) main_idle_act_pane

0x16e0,	// (0x000457a3) main_idle_trad_pane

0x16e0,	// (0x000457a3) main_list_empty_pane

0x0f62,	// (0x00045025) main_midp_pane

0x1886,	// (0x00045949) main_pane_g1_ParamLimits

0x1886,	// (0x00045949) main_pane_g1

0x7886,	// (0x0004b949) popup_ai_message_window_ParamLimits

0x7886,	// (0x0004b949) popup_ai_message_window

0x792a,	// (0x0004b9ed) popup_fep_china_uni_window_ParamLimits

0x792a,	// (0x0004b9ed) popup_fep_china_uni_window

0x7984,	// (0x0004ba47) popup_fep_japan_candidate_window_ParamLimits

0x7984,	// (0x0004ba47) popup_fep_japan_candidate_window

0x79a2,	// (0x0004ba65) popup_fep_japan_predictive_window_ParamLimits

0x79a2,	// (0x0004ba65) popup_fep_japan_predictive_window

0x79d2,	// (0x0004ba95) popup_find_window

0x79df,	// (0x0004baa2) popup_grid_graphic_window_ParamLimits

0x79df,	// (0x0004baa2) popup_grid_graphic_window

0x7a09,	// (0x0004bacc) popup_large_graphic_colour_window

0x7a2f,	// (0x0004baf2) popup_menu_window_ParamLimits

0x7a2f,	// (0x0004baf2) popup_menu_window

0x7beb,	// (0x0004bcae) popup_note_image_window

0x7bd7,	// (0x0004bc9a) popup_note_wait_window_ParamLimits

0x7bd7,	// (0x0004bc9a) popup_note_wait_window

0x7bd7,	// (0x0004bc9a) popup_note_window_ParamLimits

0x7bd7,	// (0x0004bc9a) popup_note_window

0x7c41,	// (0x0004bd04) popup_query_code_window_ParamLimits

0x7c41,	// (0x0004bd04) popup_query_code_window

0x7c55,	// (0x0004bd18) popup_query_data_code_window_ParamLimits

0x7c55,	// (0x0004bd18) popup_query_data_code_window

0x7c72,	// (0x0004bd35) popup_query_data_window_ParamLimits

0x7c72,	// (0x0004bd35) popup_query_data_window

0x7c8e,	// (0x0004bd51) popup_query_sat_info_window_ParamLimits

0x7c8e,	// (0x0004bd51) popup_query_sat_info_window

0x7cc7,	// (0x0004bd8a) popup_snote_single_graphic_window_ParamLimits

0x7cc7,	// (0x0004bd8a) popup_snote_single_graphic_window

0x7cc7,	// (0x0004bd8a) popup_snote_single_text_window_ParamLimits

0x7cc7,	// (0x0004bd8a) popup_snote_single_text_window

0x7cdc,	// (0x0004bd9f) popup_sub_window_general

0x7e0c,	// (0x0004becf) popup_window_general_ParamLimits

0x7e0c,	// (0x0004becf) popup_window_general

0x7e21,	// (0x0004bee4) power_save_pane

0x76c9,	// (0x0004b78c) control_pane_g1_ParamLimits

0x76c9,	// (0x0004b78c) control_pane_g1

0x76f0,	// (0x0004b7b3) control_pane_g2_ParamLimits

0x76f0,	// (0x0004b7b3) control_pane_g2

0x1836,	// (0x000458f9) control_pane_g3_ParamLimits

0x1836,	// (0x000458f9) control_pane_g3

0x0007,

0xf75c,	// (0x0005381f) control_pane_g_ParamLimits

0xf75c,	// (0x0005381f) control_pane_g

0x7761,	// (0x0004b824) control_pane_t1_ParamLimits

0x7761,	// (0x0004b824) control_pane_t1

0x77b7,	// (0x0004b87a) control_pane_t2_ParamLimits

0x77b7,	// (0x0004b87a) control_pane_t2

0x0002,

0xf76d,	// (0x00053830) control_pane_t_ParamLimits

0xf76d,	// (0x00053830) control_pane_t

0x7642,	// (0x0004b705) navi_navi_volume_pane_cp1

0x764a,	// (0x0004b70d) status_small_icon_pane

0x17e2,	// (0x000458a5) status_small_pane_g1_ParamLimits

0x17e2,	// (0x000458a5) status_small_pane_g1

0x7652,	// (0x0004b715) status_small_pane_g2_ParamLimits

0x7652,	// (0x0004b715) status_small_pane_g2

0x1816,	// (0x000458d9) status_small_pane_g3_ParamLimits

0x1816,	// (0x000458d9) status_small_pane_g3

0x765e,	// (0x0004b721) status_small_pane_g4_ParamLimits

0x765e,	// (0x0004b721) status_small_pane_g4

0x766a,	// (0x0004b72d) status_small_pane_g5_ParamLimits

0x766a,	// (0x0004b72d) status_small_pane_g5

0x7678,	// (0x0004b73b) status_small_pane_g6_ParamLimits

0x7678,	// (0x0004b73b) status_small_pane_g6

0x0007,

0xf74b,	// (0x0005380e) status_small_pane_g_ParamLimits

0xf74b,	// (0x0005380e) status_small_pane_g

0x7693,	// (0x0004b756) status_small_pane_t1

0x76b5,	// (0x0004b778) status_small_wait_pane_ParamLimits

0x76b5,	// (0x0004b778) status_small_wait_pane

0x7192,	// (0x0004b255) aid_levels_signal_ParamLimits

0x7192,	// (0x0004b255) aid_levels_signal

0x71a4,	// (0x0004b267) signal_pane_g1_ParamLimits

0x71a4,	// (0x0004b267) signal_pane_g1

0x71b9,	// (0x0004b27c) signal_pane_g2_ParamLimits

0x71b9,	// (0x0004b27c) signal_pane_g2

0x0003,

0xf6dc,	// (0x0005379f) signal_pane_g_ParamLimits

0xf6dc,	// (0x0005379f) signal_pane_g

0x12ca,	// (0x0004538d) context_pane_g1

0x6678,	// (0x0004a73b) title_pane_g1

0x66a2,	// (0x0004a765) title_pane_t1

0x0a24,	// (0x00044ae7) title_pane_t2

0x0a4a,	// (0x00044b0d) title_pane_t3

0x0002,

0xf530,	// (0x000535f3) title_pane_t

0x9953,	// (0x0004da16) aid_levels_battery_ParamLimits

0x9953,	// (0x0004da16) aid_levels_battery

0x9967,	// (0x0004da2a) battery_pane_g1_ParamLimits

0x9967,	// (0x0004da2a) battery_pane_g1

0x997d,	// (0x0004da40) battery_pane_g2_ParamLimits

0x997d,	// (0x0004da40) battery_pane_g2

0x0001,

0xf77f,	// (0x00053842) battery_pane_g_ParamLimits

0xf77f,	// (0x00053842) battery_pane_g

0xabed,	// (0x0004ecb0) uni_indicator_pane_g1

0xac00,	// (0x0004ecc3) uni_indicator_pane_g2

0xac12,	// (0x0004ecd5) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x000539b8) uni_indicator_pane_g

0x1573,	// (0x00045636) navi_icon_pane_ParamLimits

0x1573,	// (0x00045636) navi_icon_pane

0x14bc,	// (0x0004557f) navi_midp_pane

0x158f,	// (0x00045652) navi_navi_pane

0x1599,	// (0x0004565c) navi_text_pane_ParamLimits

0x1599,	// (0x0004565c) navi_text_pane

0x0a04,	// (0x00044ac7) status_small_wait_pane_g1

0x0c9b,	// (0x00044d5e) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x000539b3) status_small_wait_pane_g

0xa914,	// (0x0004e9d7) navi_navi_icon_text_pane

0xa91c,	// (0x0004e9df) navi_navi_pane_g1_ParamLimits

0xa91c,	// (0x0004e9df) navi_navi_pane_g1

0xa92e,	// (0x0004e9f1) navi_navi_pane_g2_ParamLimits

0xa92e,	// (0x0004e9f1) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x00053981) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x00053981) navi_navi_pane_g

0xa940,	// (0x0004ea03) navi_navi_tabs_pane

0xa949,	// (0x0004ea0c) navi_navi_text_pane

0xa914,	// (0x0004e9d7) navi_navi_volume_pane

0xa8f0,	// (0x0004e9b3) navi_text_pane_t1

0xa8e4,	// (0x0004e9a7) navi_icon_pane_g1

0xa837,	// (0x0004e8fa) navi_navi_text_pane_t1

0x83d7,	// (0x0004c49a) navi_navi_volume_pane_g1

0x83df,	// (0x0004c4a2) volume_small_pane

0xa79d,	// (0x0004e860) navi_navi_icon_text_pane_g1

0xa7a5,	// (0x0004e868) navi_navi_icon_text_pane_t1

0x158f,	// (0x00045652) navi_tabs_2_long_pane

0x158f,	// (0x00045652) navi_tabs_2_pane

0x158f,	// (0x00045652) navi_tabs_3_long_pane

0x158f,	// (0x00045652) navi_tabs_3_pane

0x158f,	// (0x00045652) navi_tabs_4_pane

0x83b7,	// (0x0004c47a) tabs_2_active_pane_ParamLimits

0x83b7,	// (0x0004c47a) tabs_2_active_pane

0x83c7,	// (0x0004c48a) tabs_2_passive_pane_ParamLimits

0x83c7,	// (0x0004c48a) tabs_2_passive_pane

0x8385,	// (0x0004c448) tabs_3_active_pane_ParamLimits

0x8385,	// (0x0004c448) tabs_3_active_pane

0x8395,	// (0x0004c458) tabs_3_passive_pane_ParamLimits

0x8395,	// (0x0004c458) tabs_3_passive_pane

0x83a6,	// (0x0004c469) tabs_3_passive_pane_cp_ParamLimits

0x83a6,	// (0x0004c469) tabs_3_passive_pane_cp

0x8341,	// (0x0004c404) tabs_4_active_pane_ParamLimits

0x8341,	// (0x0004c404) tabs_4_active_pane

0x8352,	// (0x0004c415) tabs_4_passive_pane_ParamLimits

0x8352,	// (0x0004c415) tabs_4_passive_pane

0x8363,	// (0x0004c426) tabs_4_passive_pane_cp_ParamLimits

0x8363,	// (0x0004c426) tabs_4_passive_pane_cp

0x8374,	// (0x0004c437) tabs_4_passive_pane_cp2_ParamLimits

0x8374,	// (0x0004c437) tabs_4_passive_pane_cp2

0x831d,	// (0x0004c3e0) tabs_2_long_active_pane_ParamLimits

0x831d,	// (0x0004c3e0) tabs_2_long_active_pane

0x832f,	// (0x0004c3f2) tabs_2_long_passive_pane_ParamLimits

0x832f,	// (0x0004c3f2) tabs_2_long_passive_pane

0x82d8,	// (0x0004c39b) tabs_3_long_active_pane_ParamLimits

0x82d8,	// (0x0004c39b) tabs_3_long_active_pane

0x82f1,	// (0x0004c3b4) tabs_3_long_passive_pane_ParamLimits

0x82f1,	// (0x0004c3b4) tabs_3_long_passive_pane

0x8304,	// (0x0004c3c7) tabs_3_long_passive_pane_cp_ParamLimits

0x8304,	// (0x0004c3c7) tabs_3_long_passive_pane_cp

0x827e,	// (0x0004c341) volume_small_pane_g1

0x8287,	// (0x0004c34a) volume_small_pane_g2

0x8290,	// (0x0004c353) volume_small_pane_g3

0x8299,	// (0x0004c35c) volume_small_pane_g4

0x82a2,	// (0x0004c365) volume_small_pane_g5

0x82ab,	// (0x0004c36e) volume_small_pane_g6

0x82b4,	// (0x0004c377) volume_small_pane_g7

0x82bd,	// (0x0004c380) volume_small_pane_g8

0x82c6,	// (0x0004c389) volume_small_pane_g9

0x82cf,	// (0x0004c392) volume_small_pane_g10

0x0009,

0xf88a,	// (0x0005394d) volume_small_pane_g

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp2_ParamLimits

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp2

0x670a,	// (0x0004a7cd) tabs_3_active_pane_g1

0x6712,	// (0x0004a7d5) tabs_3_active_pane_t1

0x0a6a,	// (0x00044b2d) bg_passive_tab_pane_cp2_ParamLimits

0x0a6a,	// (0x00044b2d) bg_passive_tab_pane_cp2

0x670a,	// (0x0004a7cd) tabs_3_passive_pane_g1

0x6712,	// (0x0004a7d5) tabs_3_passive_pane_t1

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp3_ParamLimits

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp3

0x6724,	// (0x0004a7e7) tabs_4_active_pane_g1

0x672c,	// (0x0004a7ef) tabs_4_active_pane_t1

0x0a6a,	// (0x00044b2d) bg_passive_tab_pane_cp3_ParamLimits

0x0a6a,	// (0x00044b2d) bg_passive_tab_pane_cp3

0x6724,	// (0x0004a7e7) tabs_4_1_passive_pane_g1

0x672c,	// (0x0004a7ef) tabs_4_1_passive_pane_t1

0x0f62,	// (0x00045025) list_highlight_pane_cp2

0xae45,	// (0x0004ef08) list_set_pane_ParamLimits

0xae45,	// (0x0004ef08) list_set_pane

0xaee7,	// (0x0004efaa) main_pane_set_t1_ParamLimits

0xaee7,	// (0x0004efaa) main_pane_set_t1

0xaf07,	// (0x0004efca) main_pane_set_t2_ParamLimits

0xaf07,	// (0x0004efca) main_pane_set_t2

0xaf1b,	// (0x0004efde) main_pane_set_t3_ParamLimits

0xaf1b,	// (0x0004efde) main_pane_set_t3

0xaf2d,	// (0x0004eff0) main_pane_set_t4_ParamLimits

0xaf2d,	// (0x0004eff0) main_pane_set_t4

0x0003,

0xf95a,	// (0x00053a1d) main_pane_set_t_ParamLimits

0xf95a,	// (0x00053a1d) main_pane_set_t

0xaf3f,	// (0x0004f002) setting_code_pane

0xaf4b,	// (0x0004f00e) setting_slider_graphic_pane

0xaf4b,	// (0x0004f00e) setting_slider_pane

0xaf4b,	// (0x0004f00e) setting_text_pane

0xaf4b,	// (0x0004f00e) setting_volume_pane

0x673e,	// (0x0004a801) volume_set_pane

0x0a6a,	// (0x00044b2d) bg_set_opt_pane_cp

0x6746,	// (0x0004a809) setting_slider_pane_t1

0x675f,	// (0x0004a822) setting_slider_pane_t2

0x6779,	// (0x0004a83c) setting_slider_pane_t3

0x0002,

0xf537,	// (0x000535fa) setting_slider_pane_t

0x6791,	// (0x0004a854) slider_set_pane

0x0a0e,	// (0x00044ad1) bg_set_opt_pane_cp2

0x0a78,	// (0x00044b3b) setting_slider_graphic_pane_g1

0x67a7,	// (0x0004a86a) setting_slider_graphic_pane_t1

0x67b7,	// (0x0004a87a) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00053601) setting_slider_graphic_pane_t

0x67c7,	// (0x0004a88a) slider_set_pane_cp

0x0a0e,	// (0x00044ad1) input_focus_pane_cp1

0xae04,	// (0x0004eec7) list_set_text_pane

0x0a04,	// (0x00044ac7) setting_text_pane_g1

0x0a0e,	// (0x00044ad1) input_focus_pane_cp2

0x0a04,	// (0x00044ac7) setting_code_pane_g1

0x0a81,	// (0x00044b44) setting_code_pane_t1

0x53d4,	// (0x00049497) set_text_pane_t1_ParamLimits

0x53d4,	// (0x00049497) set_text_pane_t1

0x0e78,	// (0x00044f3b) set_opt_bg_pane_g1

0x0e80,	// (0x00044f43) set_opt_bg_pane_g2

0xadde,	// (0x0004eea1) set_opt_bg_pane_g3

0x0e90,	// (0x00044f53) set_opt_bg_pane_g4

0x0e98,	// (0x00044f5b) set_opt_bg_pane_g5

0x0ea0,	// (0x00044f63) set_opt_bg_pane_g6

0xade8,	// (0x0004eeab) set_opt_bg_pane_g7

0xadf0,	// (0x0004eeb3) set_opt_bg_pane_g8

0xadfa,	// (0x0004eebd) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x00053a0a) set_opt_bg_pane_g

0xadd1,	// (0x0004ee94) slider_set_pane_g1

0x844c,	// (0x0004c50f) slider_set_pane_g2

0x0006,

0xf938,	// (0x000539fb) slider_set_pane_g

0x83e8,	// (0x0004c4ab) volume_set_pane_g1

0x83f0,	// (0x0004c4b3) volume_set_pane_g2

0x83f8,	// (0x0004c4bb) volume_set_pane_g3

0x8400,	// (0x0004c4c3) volume_set_pane_g4

0x8408,	// (0x0004c4cb) volume_set_pane_g5

0x8410,	// (0x0004c4d3) volume_set_pane_g6

0x8418,	// (0x0004c4db) volume_set_pane_g7

0x8420,	// (0x0004c4e3) volume_set_pane_g8

0x8428,	// (0x0004c4eb) volume_set_pane_g9

0x8430,	// (0x0004c4f3) volume_set_pane_g10

0x0009,

0xf910,	// (0x000539d3) volume_set_pane_g

0x67cf,	// (0x0004a892) indicator_pane_ParamLimits

0x67cf,	// (0x0004a892) indicator_pane

0x67db,	// (0x0004a89e) main_idle_pane_g2_ParamLimits

0x67db,	// (0x0004a89e) main_idle_pane_g2

0x6803,	// (0x0004a8c6) main_pane_idle_g1_ParamLimits

0x6803,	// (0x0004a8c6) main_pane_idle_g1

0x0a8f,	// (0x00044b52) popup_clock_digital_analogue_window_ParamLimits

0x0a8f,	// (0x00044b52) popup_clock_digital_analogue_window

0x6810,	// (0x0004a8d3) soft_indicator_pane_ParamLimits

0x6810,	// (0x0004a8d3) soft_indicator_pane

0x681c,	// (0x0004a8df) wallpaper_pane_ParamLimits

0x681c,	// (0x0004a8df) wallpaper_pane

0x0a04,	// (0x00044ac7) wallpaper_pane_g1

0x6828,	// (0x0004a8eb) indicator_pane_g1_ParamLimits

0x6828,	// (0x0004a8eb) indicator_pane_g1

0xb1c0,	// (0x0004f283) navi_navi_icon_text_pane_srt_g1

0x0abd,	// (0x00044b80) soft_indicator_pane_t1

0x0ad7,	// (0x00044b9a) aid_ps_area_pane

0x6834,	// (0x0004a8f7) aid_ps_clock_pane

0x0ae8,	// (0x00044bab) aid_ps_indicator_pane

0x0af4,	// (0x00044bb7) indicator_ps_pane_ParamLimits

0x0af4,	// (0x00044bb7) indicator_ps_pane

0x0b03,	// (0x00044bc6) power_save_pane_g1_ParamLimits

0x0b03,	// (0x00044bc6) power_save_pane_g1

0x0b0f,	// (0x00044bd2) power_save_pane_g2_ParamLimits

0x0b0f,	// (0x00044bd2) power_save_pane_g2

0x6291,	// (0x0004a354) aid_navinavi_width_pane

0x0ad7,	// (0x00044b9a) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00053606) power_save_pane_g_ParamLimits

0xf543,	// (0x00053606) power_save_pane_g

0x0b1d,	// (0x00044be0) power_save_pane_t1_ParamLimits

0x0b1d,	// (0x00044be0) power_save_pane_t1

0x6834,	// (0x0004a8f7) aid_ps_clock_pane_ParamLimits

0x0ae8,	// (0x00044bab) aid_ps_indicator_pane_ParamLimits

0x0b2f,	// (0x00044bf2) power_save_pane_t4_ParamLimits

0x0b2f,	// (0x00044bf2) power_save_pane_t4

0x0001,

0xf548,	// (0x0005360b) power_save_pane_t_ParamLimits

0xf548,	// (0x0005360b) power_save_pane_t

0x0b59,	// (0x00044c1c) power_save_t3_ParamLimits

0x0b59,	// (0x00044c1c) power_save_t3

0x0b44,	// (0x00044c07) power_save_t2_ParamLimits

0x0b44,	// (0x00044c07) power_save_t2

0x0b6e,	// (0x00044c31) indicator_ps_pane_g1

0x6842,	// (0x0004a905) ai_gene_pane_ParamLimits

0x6842,	// (0x0004a905) ai_gene_pane

0x684e,	// (0x0004a911) ai_links_pane_ParamLimits

0x684e,	// (0x0004a911) ai_links_pane

0x685a,	// (0x0004a91d) indicator_pane_cp1_ParamLimits

0x685a,	// (0x0004a91d) indicator_pane_cp1

0x6866,	// (0x0004a929) main_pane_idle_g1_cp_ParamLimits

0x6866,	// (0x0004a929) main_pane_idle_g1_cp

0x6872,	// (0x0004a935) popup_ai_links_title_window

0x687b,	// (0x0004a93e) soft_indicator_pane_cp1_ParamLimits

0x687b,	// (0x0004a93e) soft_indicator_pane_cp1

0xabdb,	// (0x0004ec9e) ai_links_pane_g1

0xabe4,	// (0x0004eca7) grid_ai_links_pane

0xabbe,	// (0x0004ec81) ai_gene_pane_1

0xabc9,	// (0x0004ec8c) ai_gene_pane_2

0xabd2,	// (0x0004ec95) list_highlight_pane_cp4

0xaba2,	// (0x0004ec65) cell_ai_link_pane_ParamLimits

0xaba2,	// (0x0004ec65) cell_ai_link_pane

0xab9a,	// (0x0004ec5d) cell_ai_link_pane_g1

0x0c9b,	// (0x00044d5e) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x000539ae) cell_ai_link_pane_g

0x0a0e,	// (0x00044ad1) grid_highlight_cp2

0x0a0e,	// (0x00044ad1) bg_popup_sub_pane_cp1

0x0b85,	// (0x00044c48) popup_ai_links_title_window_t1

0xaaea,	// (0x0004ebad) ai_gene_pane_1_g1_ParamLimits

0xaaea,	// (0x0004ebad) ai_gene_pane_1_g1

0xaaf6,	// (0x0004ebb9) ai_gene_pane_1_g2_ParamLimits

0xaaf6,	// (0x0004ebb9) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x000539a4) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x000539a4) ai_gene_pane_1_g

0xab03,	// (0x0004ebc6) ai_gene_pane_1_t1_ParamLimits

0xab03,	// (0x0004ebc6) ai_gene_pane_1_t1

0xab37,	// (0x0004ebfa) grid_ai_soft_ind_pane

0xaad5,	// (0x0004eb98) ai_gene_pane_2_t1_ParamLimits

0xaad5,	// (0x0004eb98) ai_gene_pane_2_t1

0x6887,	// (0x0004a94a) main_pane_empty_t1_ParamLimits

0x6887,	// (0x0004a94a) main_pane_empty_t1

0x689f,	// (0x0004a962) main_pane_empty_t2_ParamLimits

0x689f,	// (0x0004a962) main_pane_empty_t2

0x68b4,	// (0x0004a977) main_pane_empty_t3_ParamLimits

0x68b4,	// (0x0004a977) main_pane_empty_t3

0x68c6,	// (0x0004a989) main_pane_empty_t4_ParamLimits

0x68c6,	// (0x0004a989) main_pane_empty_t4

0x68d8,	// (0x0004a99b) main_pane_empty_t5_ParamLimits

0x68d8,	// (0x0004a99b) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00053610) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00053610) main_pane_empty_t

0x0efd,	// (0x00044fc0) bg_popup_window_pane_ParamLimits

0x0efd,	// (0x00044fc0) bg_popup_window_pane

0xa845,	// (0x0004e908) find_popup_pane_cp2_ParamLimits

0xa845,	// (0x0004e908) find_popup_pane_cp2

0xa851,	// (0x0004e914) heading_pane_ParamLimits

0xa851,	// (0x0004e914) heading_pane

0x0a0e,	// (0x00044ad1) bg_popup_sub_pane

0xa7bf,	// (0x0004e882) bg_popup_window_pane_g1_ParamLimits

0xa7bf,	// (0x0004e882) bg_popup_window_pane_g1

0xa7cb,	// (0x0004e88e) bg_popup_window_pane_g2_ParamLimits

0xa7cb,	// (0x0004e88e) bg_popup_window_pane_g2

0xa7d7,	// (0x0004e89a) bg_popup_window_pane_g3_ParamLimits

0xa7d7,	// (0x0004e89a) bg_popup_window_pane_g3

0xa7e3,	// (0x0004e8a6) bg_popup_window_pane_g4_ParamLimits

0xa7e3,	// (0x0004e8a6) bg_popup_window_pane_g4

0xa7ef,	// (0x0004e8b2) bg_popup_window_pane_g5_ParamLimits

0xa7ef,	// (0x0004e8b2) bg_popup_window_pane_g5

0xa7fb,	// (0x0004e8be) bg_popup_window_pane_g6_ParamLimits

0xa7fb,	// (0x0004e8be) bg_popup_window_pane_g6

0xa807,	// (0x0004e8ca) bg_popup_window_pane_g7_ParamLimits

0xa807,	// (0x0004e8ca) bg_popup_window_pane_g7

0xa813,	// (0x0004e8d6) bg_popup_window_pane_g8_ParamLimits

0xa813,	// (0x0004e8d6) bg_popup_window_pane_g8

0xa81f,	// (0x0004e8e2) bg_popup_window_pane_g9_ParamLimits

0xa81f,	// (0x0004e8e2) bg_popup_window_pane_g9

0xa82b,	// (0x0004e8ee) bg_popup_window_pane_g10_ParamLimits

0xa82b,	// (0x0004e8ee) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x0005396c) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x0005396c) bg_popup_window_pane_g

0xa754,	// (0x0004e817) bg_popup_heading_pane_ParamLimits

0xa754,	// (0x0004e817) bg_popup_heading_pane

0x857f,	// (0x0004c642) tabs_4_passive_pane_cp_srt_ParamLimits

0x857f,	// (0x0004c642) tabs_4_passive_pane_cp_srt

0x8591,	// (0x0004c654) tabs_4_passive_pane_srt_ParamLimits

0xa768,	// (0x0004e82b) heading_pane_g2

0x8591,	// (0x0004c654) tabs_4_passive_pane_srt

0x0f62,	// (0x00045025) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0f62,	// (0x00045025) bg_passive_tab_pane_cp3_srt

0xa770,	// (0x0004e833) heading_pane_t1_ParamLimits

0xa770,	// (0x0004e833) heading_pane_t1

0xa787,	// (0x0004e84a) heading_pane_t2_ParamLimits

0xa787,	// (0x0004e84a) heading_pane_t2

0x0001,

0xf8a4,	// (0x00053967) heading_pane_t_ParamLimits

0xf8a4,	// (0x00053967) heading_pane_t

0xa291,	// (0x0004e354) bg_popup_heading_pane_g1

0xa340,	// (0x0004e403) bg_popup_heading_pane_g2

0xa34a,	// (0x0004e40d) bg_popup_heading_pane_g3

0xa354,	// (0x0004e417) bg_popup_heading_pane_g4

0xa35e,	// (0x0004e421) bg_popup_heading_pane_g5

0xa368,	// (0x0004e42b) bg_popup_heading_pane_g6

0xa370,	// (0x0004e433) bg_popup_heading_pane_g7

0xa378,	// (0x0004e43b) bg_popup_heading_pane_g8

0xa382,	// (0x0004e445) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x00053923) bg_popup_heading_pane_g

0x9a52,	// (0x0004db15) bg_popup_sub_pane_g1

0x9a5a,	// (0x0004db1d) bg_popup_sub_pane_g2

0x9a62,	// (0x0004db25) bg_popup_sub_pane_g3

0x9a6a,	// (0x0004db2d) bg_popup_sub_pane_g4

0x9a72,	// (0x0004db35) bg_popup_sub_pane_g5

0x9a7a,	// (0x0004db3d) bg_popup_sub_pane_g6

0x9a82,	// (0x0004db45) bg_popup_sub_pane_g7

0x9a8a,	// (0x0004db4d) bg_popup_sub_pane_g8

0x9a92,	// (0x0004db55) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x000538fd) bg_popup_sub_pane_g

0x0a5c,	// (0x00044b1f) bg_popup_window_pane_cp5_ParamLimits

0x0a5c,	// (0x00044b1f) bg_popup_window_pane_cp5

0x0ba2,	// (0x00044c65) popup_note_window_g1_ParamLimits

0x0ba2,	// (0x00044c65) popup_note_window_g1

0x0bae,	// (0x00044c71) popup_note_window_t1_ParamLimits

0x0bae,	// (0x00044c71) popup_note_window_t1

0x0bc4,	// (0x00044c87) popup_note_window_t2_ParamLimits

0x0bc4,	// (0x00044c87) popup_note_window_t2

0x0bda,	// (0x00044c9d) popup_note_window_t3_ParamLimits

0x0bda,	// (0x00044c9d) popup_note_window_t3

0x0bf0,	// (0x00044cb3) popup_note_window_t4_ParamLimits

0x0bf0,	// (0x00044cb3) popup_note_window_t4

0x0c18,	// (0x00044cdb) popup_note_window_t5_ParamLimits

0x0c18,	// (0x00044cdb) popup_note_window_t5

0x0004,

0xf558,	// (0x0005361b) popup_note_window_t_ParamLimits

0xf558,	// (0x0005361b) popup_note_window_t

0x0c3c,	// (0x00044cff) bg_popup_window_pane_cp6_ParamLimits

0x0c3c,	// (0x00044cff) bg_popup_window_pane_cp6

0xa20d,	// (0x0004e2d0) popup_note_image_window_g1_ParamLimits

0xa20d,	// (0x0004e2d0) popup_note_image_window_g1

0xa219,	// (0x0004e2dc) popup_note_image_window_g2_ParamLimits

0xa219,	// (0x0004e2dc) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x000538f1) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x000538f1) popup_note_image_window_g

0xa232,	// (0x0004e2f5) popup_note_image_window_t1_ParamLimits

0xa232,	// (0x0004e2f5) popup_note_image_window_t1

0xa24b,	// (0x0004e30e) popup_note_image_window_t2_ParamLimits

0xa24b,	// (0x0004e30e) popup_note_image_window_t2

0xa264,	// (0x0004e327) popup_note_image_window_t3_ParamLimits

0xa264,	// (0x0004e327) popup_note_image_window_t3

0x0002,

0xf833,	// (0x000538f6) popup_note_image_window_t_ParamLimits

0xf833,	// (0x000538f6) popup_note_image_window_t

0xa0d6,	// (0x0004e199) bg_popup_window_pane_cp7_ParamLimits

0xa0d6,	// (0x0004e199) bg_popup_window_pane_cp7

0xa106,	// (0x0004e1c9) popup_note_wait_window_g1_ParamLimits

0xa106,	// (0x0004e1c9) popup_note_wait_window_g1

0xa112,	// (0x0004e1d5) popup_note_wait_window_g2_ParamLimits

0xa112,	// (0x0004e1d5) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x000538df) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x000538df) popup_note_wait_window_g

0xa12a,	// (0x0004e1ed) popup_note_wait_window_t1_ParamLimits

0xa12a,	// (0x0004e1ed) popup_note_wait_window_t1

0xa151,	// (0x0004e214) popup_note_wait_window_t2_ParamLimits

0xa151,	// (0x0004e214) popup_note_wait_window_t2

0xa16e,	// (0x0004e231) popup_note_wait_window_t3_ParamLimits

0xa16e,	// (0x0004e231) popup_note_wait_window_t3

0xa181,	// (0x0004e244) popup_note_wait_window_t4_ParamLimits

0xa181,	// (0x0004e244) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x000538e6) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x000538e6) popup_note_wait_window_t

0xa1a6,	// (0x0004e269) wait_bar_pane_ParamLimits

0xa1a6,	// (0x0004e269) wait_bar_pane

0x0a0e,	// (0x00044ad1) wait_anim_pane

0x0a0e,	// (0x00044ad1) wait_border_pane

0x0a04,	// (0x00044ac7) wait_anim_pane_g1

0x0a04,	// (0x00044ac7) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x0005379a) wait_anim_pane_g

0xa082,	// (0x0004e145) wait_border_pane_g1

0xa08d,	// (0x0004e150) wait_border_pane_g2

0xa096,	// (0x0004e159) wait_border_pane_g3

0x0002,

0xf815,	// (0x000538d8) wait_border_pane_g

0x9eed,	// (0x0004dfb0) bg_popup_window_pane_cp16_ParamLimits

0x9eed,	// (0x0004dfb0) bg_popup_window_pane_cp16

0x9fed,	// (0x0004e0b0) indicator_popup_pane_cp4_ParamLimits

0x9fed,	// (0x0004e0b0) indicator_popup_pane_cp4

0xa001,	// (0x0004e0c4) popup_query_data_window_t1_ParamLimits

0xa001,	// (0x0004e0c4) popup_query_data_window_t1

0xa013,	// (0x0004e0d6) popup_query_data_window_t2_ParamLimits

0xa013,	// (0x0004e0d6) popup_query_data_window_t2

0xa02c,	// (0x0004e0ef) popup_query_data_window_t3_ParamLimits

0xa02c,	// (0x0004e0ef) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x000538d1) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x000538d1) popup_query_data_window_t

0xa046,	// (0x0004e109) query_popup_data_pane_ParamLimits

0xa046,	// (0x0004e109) query_popup_data_pane

0xa05a,	// (0x0004e11d) query_popup_data_pane_cp1_ParamLimits

0xa05a,	// (0x0004e11d) query_popup_data_pane_cp1

0x9eed,	// (0x0004dfb0) bg_popup_window_pane_cp10_ParamLimits

0x9eed,	// (0x0004dfb0) bg_popup_window_pane_cp10

0x9f1f,	// (0x0004dfe2) indicator_popup_pane_ParamLimits

0x9f1f,	// (0x0004dfe2) indicator_popup_pane

0x9f41,	// (0x0004e004) popup_query_code_window_t1_ParamLimits

0x9f41,	// (0x0004e004) popup_query_code_window_t1

0x9f5b,	// (0x0004e01e) popup_query_code_window_t2_ParamLimits

0x9f5b,	// (0x0004e01e) popup_query_code_window_t2

0x9fa4,	// (0x0004e067) popup_query_code_window_t3_ParamLimits

0x9fa4,	// (0x0004e067) popup_query_code_window_t3

0x0002,

0xf807,	// (0x000538ca) popup_query_code_window_t_ParamLimits

0xf807,	// (0x000538ca) popup_query_code_window_t

0x9fd3,	// (0x0004e096) query_popup_pane_ParamLimits

0x9fd3,	// (0x0004e096) query_popup_pane

0x0c3c,	// (0x00044cff) bg_popup_window_pane_cp15_ParamLimits

0x0c3c,	// (0x00044cff) bg_popup_window_pane_cp15

0x6912,	// (0x0004a9d5) indicator_popup_pane_cp1_ParamLimits

0x6912,	// (0x0004a9d5) indicator_popup_pane_cp1

0x6925,	// (0x0004a9e8) indicator_popup_pane_cp2_ParamLimits

0x6925,	// (0x0004a9e8) indicator_popup_pane_cp2

0x6938,	// (0x0004a9fb) popup_query_data_code_window_g1_ParamLimits

0x6938,	// (0x0004a9fb) popup_query_data_code_window_g1

0x0c5a,	// (0x00044d1d) popup_query_data_code_window_t1_ParamLimits

0x0c5a,	// (0x00044d1d) popup_query_data_code_window_t1

0x0c6c,	// (0x00044d2f) popup_query_data_code_window_t2_ParamLimits

0x0c6c,	// (0x00044d2f) popup_query_data_code_window_t2

0x694b,	// (0x0004aa0e) popup_query_data_code_window_t3_ParamLimits

0x694b,	// (0x0004aa0e) popup_query_data_code_window_t3

0x6961,	// (0x0004aa24) popup_query_data_code_window_t4_ParamLimits

0x6961,	// (0x0004aa24) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00053626) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00053626) popup_query_data_code_window_t

0x1531,	// (0x000455f4) list_single_midp_graphic_pane_g3

0x6979,	// (0x0004aa3c) query_popup_data_pane_cp2_ParamLimits

0x698c,	// (0x0004aa4f) query_popup_pane_cp2_ParamLimits

0x698c,	// (0x0004aa4f) query_popup_pane_cp2

0x0a0e,	// (0x00044ad1) bg_popup_window_pane_cp11

0x9ed1,	// (0x0004df94) heading_pane_cp5

0x9ed9,	// (0x0004df9c) listscroll_popup_info_pane

0x0a0e,	// (0x00044ad1) input_focus_pane_cp3

0x0c7e,	// (0x00044d41) query_popup_pane_t1

0x0c8c,	// (0x00044d4f) list_popup_info_pane_ParamLimits

0x0c8c,	// (0x00044d4f) list_popup_info_pane

0x0c9b,	// (0x00044d5e) listscroll_popup_info_pane_g1

0x0ca3,	// (0x00044d66) scroll_pane_cp7

0x699f,	// (0x0004aa62) popup_info_list_pane_t1_ParamLimits

0x699f,	// (0x0004aa62) popup_info_list_pane_t1

0x69b9,	// (0x0004aa7c) popup_info_list_pane_t2_ParamLimits

0x69b9,	// (0x0004aa7c) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0005362f) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0005362f) popup_info_list_pane_t

0x0a0e,	// (0x00044ad1) bg_popup_window_pane_cp12

0xb1da,	// (0x0004f29d) find_popup_pane

0x0a6a,	// (0x00044b2d) bg_popup_window_pane_cp3

0x0cad,	// (0x00044d70) heading_pane_cp3

0x0cbc,	// (0x00044d7f) listscroll_popup_graphic_pane

0x0a0e,	// (0x00044ad1) bg_popup_window_pane_cp4

0x6a23,	// (0x0004aae6) heading_pane_cp4

0x0ccc,	// (0x00044d8f) listscroll_popup_colour_pane

0x6a2d,	// (0x0004aaf0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6a2d,	// (0x0004aaf0) cell_large_graphic_colour_none_popup_pane

0x6a41,	// (0x0004ab04) grid_large_graphic_colour_popup_pane_ParamLimits

0x6a41,	// (0x0004ab04) grid_large_graphic_colour_popup_pane

0x6a65,	// (0x0004ab28) listscroll_popup_colour_pane_g1_ParamLimits

0x6a65,	// (0x0004ab28) listscroll_popup_colour_pane_g1

0x6a7c,	// (0x0004ab3f) listscroll_popup_colour_pane_g2_ParamLimits

0x6a7c,	// (0x0004ab3f) listscroll_popup_colour_pane_g2

0x6a93,	// (0x0004ab56) listscroll_popup_colour_pane_g3_ParamLimits

0x6a93,	// (0x0004ab56) listscroll_popup_colour_pane_g3

0x6aa3,	// (0x0004ab66) listscroll_popup_colour_pane_g4_ParamLimits

0x6aa3,	// (0x0004ab66) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00053634) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00053634) listscroll_popup_colour_pane_g

0x0cd4,	// (0x00044d97) scroll_pane_cp6_ParamLimits

0x0cd4,	// (0x00044d97) scroll_pane_cp6

0x6ab3,	// (0x0004ab76) cell_large_graphic_colour_popup_pane_ParamLimits

0x6ab3,	// (0x0004ab76) cell_large_graphic_colour_popup_pane

0x6ad2,	// (0x0004ab95) cell_large_graphic_colour_none_popup_pane_t1

0x0a0e,	// (0x00044ad1) grid_highlight_pane_cp5

0x0ce6,	// (0x00044da9) cell_large_graphic_colour_popup_pane_g1

0x0cee,	// (0x00044db1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0005363d) cell_large_graphic_colour_popup_pane_g

0x0cf6,	// (0x00044db9) cell_large_graphic_colour_popup_pane_g2_copy1

0x0cff,	// (0x00044dc2) grid_highlight_pane_cp4

0x0d07,	// (0x00044dca) bg_popup_window_pane_cp8_ParamLimits

0x0d07,	// (0x00044dca) bg_popup_window_pane_cp8

0x6ae1,	// (0x0004aba4) popup_snote_single_text_window_g1_ParamLimits

0x6ae1,	// (0x0004aba4) popup_snote_single_text_window_g1

0x6af3,	// (0x0004abb6) popup_snote_single_text_window_t1_ParamLimits

0x6af3,	// (0x0004abb6) popup_snote_single_text_window_t1

0x6b06,	// (0x0004abc9) popup_snote_single_text_window_t2_ParamLimits

0x6b06,	// (0x0004abc9) popup_snote_single_text_window_t2

0x6b19,	// (0x0004abdc) popup_snote_single_text_window_t3_ParamLimits

0x6b19,	// (0x0004abdc) popup_snote_single_text_window_t3

0x6b52,	// (0x0004ac15) popup_snote_single_text_window_t4_ParamLimits

0x6b52,	// (0x0004ac15) popup_snote_single_text_window_t4

0x6b86,	// (0x0004ac49) popup_snote_single_text_window_t5_ParamLimits

0x6b86,	// (0x0004ac49) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00053642) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00053642) popup_snote_single_text_window_t

0x0d22,	// (0x00044de5) bg_popup_window_pane_cp9_ParamLimits

0x0d22,	// (0x00044de5) bg_popup_window_pane_cp9

0x6ae1,	// (0x0004aba4) popup_snote_single_graphic_window_g1_ParamLimits

0x6ae1,	// (0x0004aba4) popup_snote_single_graphic_window_g1

0x0d30,	// (0x00044df3) popup_snote_single_graphic_window_g2_ParamLimits

0x0d30,	// (0x00044df3) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0005364d) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0005364d) popup_snote_single_graphic_window_g

0x0d3c,	// (0x00044dff) popup_snote_single_graphic_window_t1_ParamLimits

0x0d3c,	// (0x00044dff) popup_snote_single_graphic_window_t1

0x0d4f,	// (0x00044e12) popup_snote_single_graphic_window_t2_ParamLimits

0x0d4f,	// (0x00044e12) popup_snote_single_graphic_window_t2

0x6bb5,	// (0x0004ac78) popup_snote_single_graphic_window_t3_ParamLimits

0x6bb5,	// (0x0004ac78) popup_snote_single_graphic_window_t3

0x6bee,	// (0x0004acb1) popup_snote_single_graphic_window_t4_ParamLimits

0x6bee,	// (0x0004acb1) popup_snote_single_graphic_window_t4

0x6c22,	// (0x0004ace5) popup_snote_single_graphic_window_t5_ParamLimits

0x6c22,	// (0x0004ace5) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00053652) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00053652) popup_snote_single_graphic_window_t

0xb11c,	// (0x0004f1df) grid_graphic_popup_pane_ParamLimits

0xb11c,	// (0x0004f1df) grid_graphic_popup_pane

0xb146,	// (0x0004f209) listscroll_popup_graphic_pane_g1_ParamLimits

0xb146,	// (0x0004f209) listscroll_popup_graphic_pane_g1

0xb15a,	// (0x0004f21d) listscroll_popup_graphic_pane_g2_ParamLimits

0xb15a,	// (0x0004f21d) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x00053a47) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x00053a47) listscroll_popup_graphic_pane_g

0xb16e,	// (0x0004f231) scroll_pane_cp5

0xb0ab,	// (0x0004f16e) cell_graphic_popup_pane_ParamLimits

0xb0ab,	// (0x0004f16e) cell_graphic_popup_pane

0xb08c,	// (0x0004f14f) cell_graphic_popup_pane_g1

0xb094,	// (0x0004f157) cell_graphic_popup_pane_g2

0x0cf6,	// (0x00044db9) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x00053a40) cell_graphic_popup_pane_g

0xb09d,	// (0x0004f160) cell_graphic_popup_pane_t2

0x0cff,	// (0x00044dc2) grid_highlight_pane_cp3

0x0d74,	// (0x00044e37) list_gen_pane_ParamLimits

0x0d74,	// (0x00044e37) list_gen_pane

0x0d9c,	// (0x00044e5f) scroll_pane

0xafe4,	// (0x0004f0a7) bg_list_pane_g1_ParamLimits

0xafe4,	// (0x0004f0a7) bg_list_pane_g1

0xb001,	// (0x0004f0c4) bg_list_pane_g2_ParamLimits

0xb001,	// (0x0004f0c4) bg_list_pane_g2

0xb016,	// (0x0004f0d9) bg_list_pane_g3_ParamLimits

0xb016,	// (0x0004f0d9) bg_list_pane_g3

0xb02a,	// (0x0004f0ed) bg_list_pane_g4_ParamLimits

0xb02a,	// (0x0004f0ed) bg_list_pane_g4

0xb03e,	// (0x0004f101) bg_list_pane_g5_ParamLimits

0xb03e,	// (0x0004f101) bg_list_pane_g5

0x0004,

0xf972,	// (0x00053a35) bg_list_pane_g_ParamLimits

0xf972,	// (0x00053a35) bg_list_pane_g

0x84b0,	// (0x0004c573) list_double2_graphic_large_graphic_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double2_graphic_large_graphic_pane

0x84b0,	// (0x0004c573) list_double2_graphic_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double2_graphic_pane

0x84b0,	// (0x0004c573) list_double2_large_graphic_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double2_large_graphic_pane

0x5c3b,	// (0x00049cfe) list_double2_pane_ParamLimits

0x5c3b,	// (0x00049cfe) list_double2_pane

0x84b0,	// (0x0004c573) list_double_graphic_heading_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double_graphic_heading_pane

0x84b0,	// (0x0004c573) list_double_graphic_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double_graphic_pane

0x84b0,	// (0x0004c573) list_double_heading_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double_heading_pane

0x84b0,	// (0x0004c573) list_double_large_graphic_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double_large_graphic_pane

0x84b0,	// (0x0004c573) list_double_number_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double_number_pane

0x84b0,	// (0x0004c573) list_double_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double_pane

0x84b0,	// (0x0004c573) list_double_time_pane_ParamLimits

0x84b0,	// (0x0004c573) list_double_time_pane

0x84b0,	// (0x0004c573) list_setting_number_pane_ParamLimits

0x84b0,	// (0x0004c573) list_setting_number_pane

0x84b0,	// (0x0004c573) list_setting_pane_ParamLimits

0x84b0,	// (0x0004c573) list_setting_pane

0x851b,	// (0x0004c5de) list_single_2graphic_pane_ParamLimits

0x851b,	// (0x0004c5de) list_single_2graphic_pane

0x851b,	// (0x0004c5de) list_single_graphic_heading_pane_ParamLimits

0x851b,	// (0x0004c5de) list_single_graphic_heading_pane

0x851b,	// (0x0004c5de) list_single_graphic_pane_ParamLimits

0x851b,	// (0x0004c5de) list_single_graphic_pane

0x851b,	// (0x0004c5de) list_single_heading_pane_ParamLimits

0x851b,	// (0x0004c5de) list_single_heading_pane

0x5c8f,	// (0x00049d52) list_single_large_graphic_pane_ParamLimits

0x5c8f,	// (0x00049d52) list_single_large_graphic_pane

0x851b,	// (0x0004c5de) list_single_number_heading_pane_ParamLimits

0x851b,	// (0x0004c5de) list_single_number_heading_pane

0x851b,	// (0x0004c5de) list_single_number_pane_ParamLimits

0x851b,	// (0x0004c5de) list_single_number_pane

0x851b,	// (0x0004c5de) list_single_pane_ParamLimits

0x851b,	// (0x0004c5de) list_single_pane

0x0a0e,	// (0x00044ad1) list_highlight_pane_cp1

0x6c5b,	// (0x0004ad1e) list_single_pane_g1_ParamLimits

0x6c5b,	// (0x0004ad1e) list_single_pane_g1

0x6c67,	// (0x0004ad2a) list_single_pane_g2_ParamLimits

0x6c67,	// (0x0004ad2a) list_single_pane_g2

0x0001,

0xf5ab,	// (0x0005366e) list_single_pane_g_ParamLimits

0xf5ab,	// (0x0005366e) list_single_pane_g

0x53f9,	// (0x000494bc) list_single_pane_t1_ParamLimits

0x53f9,	// (0x000494bc) list_single_pane_t1

0x6c5b,	// (0x0004ad1e) list_single_number_pane_g1_ParamLimits

0x6c5b,	// (0x0004ad1e) list_single_number_pane_g1

0x6c67,	// (0x0004ad2a) list_single_number_pane_g2_ParamLimits

0x6c67,	// (0x0004ad2a) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x0005366e) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x0005366e) list_single_number_pane_g

0x53f9,	// (0x000494bc) list_single_number_pane_t1_ParamLimits

0x53f9,	// (0x000494bc) list_single_number_pane_t1

0x5bf9,	// (0x00049cbc) list_single_number_pane_t2_ParamLimits

0x5bf9,	// (0x00049cbc) list_single_number_pane_t2

0x0001,

0xf933,	// (0x000539f6) list_single_number_pane_t_ParamLimits

0xf933,	// (0x000539f6) list_single_number_pane_t

0x53ed,	// (0x000494b0) list_single_graphic_pane_g1_ParamLimits

0x53ed,	// (0x000494b0) list_single_graphic_pane_g1

0x6c5b,	// (0x0004ad1e) list_single_graphic_pane_g2_ParamLimits

0x6c5b,	// (0x0004ad1e) list_single_graphic_pane_g2

0x6c67,	// (0x0004ad2a) list_single_graphic_pane_g3_ParamLimits

0x6c67,	// (0x0004ad2a) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0005365d) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0005365d) list_single_graphic_pane_g

0x53f9,	// (0x000494bc) list_single_graphic_pane_t1_ParamLimits

0x53f9,	// (0x000494bc) list_single_graphic_pane_t1

0x540f,	// (0x000494d2) list_single_heading_pane_g1_ParamLimits

0x540f,	// (0x000494d2) list_single_heading_pane_g1

0x6c67,	// (0x0004ad2a) list_single_heading_pane_g2_ParamLimits

0x6c67,	// (0x0004ad2a) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00053664) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00053664) list_single_heading_pane_g

0x5422,	// (0x000494e5) list_single_heading_pane_t1_ParamLimits

0x5422,	// (0x000494e5) list_single_heading_pane_t1

0x6c73,	// (0x0004ad36) list_single_heading_pane_t2_ParamLimits

0x6c73,	// (0x0004ad36) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00053669) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00053669) list_single_heading_pane_t

0x6c5b,	// (0x0004ad1e) list_single_number_heading_pane_g1_ParamLimits

0x6c5b,	// (0x0004ad1e) list_single_number_heading_pane_g1

0x6c67,	// (0x0004ad2a) list_single_number_heading_pane_g2_ParamLimits

0x6c67,	// (0x0004ad2a) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x0005366e) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x0005366e) list_single_number_heading_pane_g

0x5438,	// (0x000494fb) list_single_number_heading_pane_t1_ParamLimits

0x5438,	// (0x000494fb) list_single_number_heading_pane_t1

0x544e,	// (0x00049511) list_single_number_heading_pane_t2_ParamLimits

0x544e,	// (0x00049511) list_single_number_heading_pane_t2

0x5460,	// (0x00049523) list_single_number_heading_pane_t3_ParamLimits

0x5460,	// (0x00049523) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x00053673) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x00053673) list_single_number_heading_pane_t

0x53ed,	// (0x000494b0) list_single_graphic_heading_pane_g1_ParamLimits

0x53ed,	// (0x000494b0) list_single_graphic_heading_pane_g1

0x6c85,	// (0x0004ad48) list_single_graphic_heading_pane_g4_ParamLimits

0x6c85,	// (0x0004ad48) list_single_graphic_heading_pane_g4

0x6c67,	// (0x0004ad2a) list_single_graphic_heading_pane_g5_ParamLimits

0x6c67,	// (0x0004ad2a) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x0005367a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x0005367a) list_single_graphic_heading_pane_g

0x5438,	// (0x000494fb) list_single_graphic_heading_pane_t1_ParamLimits

0x5438,	// (0x000494fb) list_single_graphic_heading_pane_t1

0x5472,	// (0x00049535) list_single_graphic_heading_pane_t2_ParamLimits

0x5472,	// (0x00049535) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x00053681) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x00053681) list_single_graphic_heading_pane_t

0x5484,	// (0x00049547) list_single_large_graphic_pane_g1_ParamLimits

0x5484,	// (0x00049547) list_single_large_graphic_pane_g1

0x6c96,	// (0x0004ad59) list_single_large_graphic_pane_g2_ParamLimits

0x6c96,	// (0x0004ad59) list_single_large_graphic_pane_g2

0x6ca2,	// (0x0004ad65) list_single_large_graphic_pane_g3_ParamLimits

0x6ca2,	// (0x0004ad65) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x00053686) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x00053686) list_single_large_graphic_pane_g

0xa08d,	// (0x0004e150) wait_border_pane_g2_copy1

0x5490,	// (0x00049553) list_single_large_graphic_pane_g4_cp2

0x5498,	// (0x0004955b) list_single_large_graphic_pane_t1_ParamLimits

0x5498,	// (0x0004955b) list_single_large_graphic_pane_t1

0x25e3,	// (0x000466a6) list_double_pane_g1_ParamLimits

0x25e3,	// (0x000466a6) list_double_pane_g1

0x6cae,	// (0x0004ad71) list_double_pane_g2_ParamLimits

0x6cae,	// (0x0004ad71) list_double_pane_g2

0x0001,

0xf5ca,	// (0x0005368d) list_double_pane_g_ParamLimits

0xf5ca,	// (0x0005368d) list_double_pane_g

0x54ae,	// (0x00049571) list_double_pane_t1_ParamLimits

0x54ae,	// (0x00049571) list_double_pane_t1

0x54c4,	// (0x00049587) list_double_pane_t2_ParamLimits

0x54c4,	// (0x00049587) list_double_pane_t2

0x0001,

0xf5cf,	// (0x00053692) list_double_pane_t_ParamLimits

0xf5cf,	// (0x00053692) list_double_pane_t

0x54d6,	// (0x00049599) list_double2_pane_g1_ParamLimits

0x54d6,	// (0x00049599) list_double2_pane_g1

0x54e7,	// (0x000495aa) list_double2_pane_g2_ParamLimits

0x54e7,	// (0x000495aa) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x00053697) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x00053697) list_double2_pane_g

0x54f3,	// (0x000495b6) list_double2_pane_t1_ParamLimits

0x54f3,	// (0x000495b6) list_double2_pane_t1

0x5509,	// (0x000495cc) list_double2_pane_t2_ParamLimits

0x5509,	// (0x000495cc) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x0005369c) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x0005369c) list_double2_pane_t

0x25e3,	// (0x000466a6) list_double_number_pane_g1_ParamLimits

0x25e3,	// (0x000466a6) list_double_number_pane_g1

0x6cae,	// (0x0004ad71) list_double_number_pane_g2_ParamLimits

0x6cae,	// (0x0004ad71) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x0005368d) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x0005368d) list_double_number_pane_g

0x551b,	// (0x000495de) list_double_number_pane_t1_ParamLimits

0x551b,	// (0x000495de) list_double_number_pane_t1

0x54ae,	// (0x00049571) list_double_number_pane_t2_ParamLimits

0x54ae,	// (0x00049571) list_double_number_pane_t2

0x54c4,	// (0x00049587) list_double_number_pane_t3_ParamLimits

0x54c4,	// (0x00049587) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x000536a1) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x000536a1) list_double_number_pane_t

0x552d,	// (0x000495f0) list_double_graphic_pane_g1_ParamLimits

0x552d,	// (0x000495f0) list_double_graphic_pane_g1

0x5539,	// (0x000495fc) list_double_graphic_pane_g2_ParamLimits

0x5539,	// (0x000495fc) list_double_graphic_pane_g2

0x5548,	// (0x0004960b) list_double_graphic_pane_g3_ParamLimits

0x5548,	// (0x0004960b) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x000536a8) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000536a8) list_double_graphic_pane_g

0x54ae,	// (0x00049571) list_double_graphic_pane_t1_ParamLimits

0x54ae,	// (0x00049571) list_double_graphic_pane_t1

0x54c4,	// (0x00049587) list_double_graphic_pane_t2_ParamLimits

0x54c4,	// (0x00049587) list_double_graphic_pane_t2

0x0001,

0xf5cf,	// (0x00053692) list_double_graphic_pane_t_ParamLimits

0xf5cf,	// (0x00053692) list_double_graphic_pane_t

0x552d,	// (0x000495f0) list_double2_graphic_pane_g1_ParamLimits

0x552d,	// (0x000495f0) list_double2_graphic_pane_g1

0x25e3,	// (0x000466a6) list_double2_graphic_pane_g2_ParamLimits

0x25e3,	// (0x000466a6) list_double2_graphic_pane_g2

0x6cae,	// (0x0004ad71) list_double2_graphic_pane_g3_ParamLimits

0x6cae,	// (0x0004ad71) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x000536b1) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x000536b1) list_double2_graphic_pane_g

0x54ae,	// (0x00049571) list_double2_graphic_pane_t1_ParamLimits

0x54ae,	// (0x00049571) list_double2_graphic_pane_t1

0x5554,	// (0x00049617) list_double2_graphic_pane_t2_ParamLimits

0x5554,	// (0x00049617) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x000536b8) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x000536b8) list_double2_graphic_pane_t

0x5566,	// (0x00049629) list_double_large_graphic_pane_g1_ParamLimits

0x5566,	// (0x00049629) list_double_large_graphic_pane_g1

0x5585,	// (0x00049648) list_double_large_graphic_pane_g2_ParamLimits

0x5585,	// (0x00049648) list_double_large_graphic_pane_g2

0x6cae,	// (0x0004ad71) list_double_large_graphic_pane_g3_ParamLimits

0x6cae,	// (0x0004ad71) list_double_large_graphic_pane_g3

0x559b,	// (0x0004965e) list_double_large_graphic_pane_g4_ParamLimits

0x559b,	// (0x0004965e) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x000536bd) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x000536bd) list_double_large_graphic_pane_g

0x55ad,	// (0x00049670) list_double_large_graphic_pane_t1_ParamLimits

0x55ad,	// (0x00049670) list_double_large_graphic_pane_t1

0x55c6,	// (0x00049689) list_double_large_graphic_pane_t2_ParamLimits

0x55c6,	// (0x00049689) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x000536c8) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x000536c8) list_double_large_graphic_pane_t

0x55d8,	// (0x0004969b) list_double2_large_graphic_pane_g1_ParamLimits

0x55d8,	// (0x0004969b) list_double2_large_graphic_pane_g1

0x6cdb,	// (0x0004ad9e) list_double2_large_graphic_pane_g2_ParamLimits

0x6cdb,	// (0x0004ad9e) list_double2_large_graphic_pane_g2

0x6cae,	// (0x0004ad71) list_double2_large_graphic_pane_g3_ParamLimits

0x6cae,	// (0x0004ad71) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x000536cd) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x000536cd) list_double2_large_graphic_pane_g

0x55e4,	// (0x000496a7) list_double2_large_graphic_pane_t1_ParamLimits

0x55e4,	// (0x000496a7) list_double2_large_graphic_pane_t1

0x55fa,	// (0x000496bd) list_double2_large_graphic_pane_t2_ParamLimits

0x55fa,	// (0x000496bd) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x000536d4) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x000536d4) list_double2_large_graphic_pane_t

0x560c,	// (0x000496cf) list_double_heading_pane_g1_ParamLimits

0x560c,	// (0x000496cf) list_double_heading_pane_g1

0x6cec,	// (0x0004adaf) list_double_heading_pane_g2_ParamLimits

0x6cec,	// (0x0004adaf) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x000536d9) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x000536d9) list_double_heading_pane_g

0x561d,	// (0x000496e0) list_double_heading_pane_t1_ParamLimits

0x561d,	// (0x000496e0) list_double_heading_pane_t1

0x5633,	// (0x000496f6) list_double_heading_pane_t2_ParamLimits

0x5633,	// (0x000496f6) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x000536de) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x000536de) list_double_heading_pane_t

0x5645,	// (0x00049708) list_double_graphic_heading_pane_g1_ParamLimits

0x5645,	// (0x00049708) list_double_graphic_heading_pane_g1

0x560c,	// (0x000496cf) list_double_graphic_heading_pane_g2_ParamLimits

0x560c,	// (0x000496cf) list_double_graphic_heading_pane_g2

0x6cec,	// (0x0004adaf) list_double_graphic_heading_pane_g3_ParamLimits

0x6cec,	// (0x0004adaf) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x000536e3) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x000536e3) list_double_graphic_heading_pane_g

0x561d,	// (0x000496e0) list_double_graphic_heading_pane_t1_ParamLimits

0x561d,	// (0x000496e0) list_double_graphic_heading_pane_t1

0x5633,	// (0x000496f6) list_double_graphic_heading_pane_t2_ParamLimits

0x5633,	// (0x000496f6) list_double_graphic_heading_pane_t2

0x0001,

0xf61b,	// (0x000536de) list_double_graphic_heading_pane_t_ParamLimits

0xf61b,	// (0x000536de) list_double_graphic_heading_pane_t

0x5651,	// (0x00049714) list_double_time_pane_g1_ParamLimits

0x5651,	// (0x00049714) list_double_time_pane_g1

0x5662,	// (0x00049725) list_double_time_pane_g2_ParamLimits

0x5662,	// (0x00049725) list_double_time_pane_g2

0x0001,

0xf627,	// (0x000536ea) list_double_time_pane_g_ParamLimits

0xf627,	// (0x000536ea) list_double_time_pane_g

0x566e,	// (0x00049731) list_double_time_pane_t1_ParamLimits

0x566e,	// (0x00049731) list_double_time_pane_t1

0x5684,	// (0x00049747) list_double_time_pane_t2_ParamLimits

0x5684,	// (0x00049747) list_double_time_pane_t2

0x5696,	// (0x00049759) list_double_time_pane_t3_ParamLimits

0x5696,	// (0x00049759) list_double_time_pane_t3

0x56a8,	// (0x0004976b) list_double_time_pane_t4_ParamLimits

0x56a8,	// (0x0004976b) list_double_time_pane_t4

0x0003,

0xf62c,	// (0x000536ef) list_double_time_pane_t_ParamLimits

0xf62c,	// (0x000536ef) list_double_time_pane_t

0x56ba,	// (0x0004977d) list_setting_pane_g1_ParamLimits

0x56ba,	// (0x0004977d) list_setting_pane_g1

0x56c6,	// (0x00049789) list_setting_pane_g2_ParamLimits

0x56c6,	// (0x00049789) list_setting_pane_g2

0x0001,

0xf635,	// (0x000536f8) list_setting_pane_g_ParamLimits

0xf635,	// (0x000536f8) list_setting_pane_g

0x56d2,	// (0x00049795) list_setting_pane_t1_ParamLimits

0x56d2,	// (0x00049795) list_setting_pane_t1

0x56ec,	// (0x000497af) list_setting_pane_t2_ParamLimits

0x56ec,	// (0x000497af) list_setting_pane_t2

0x0002,

0xf63a,	// (0x000536fd) list_setting_pane_t_ParamLimits

0xf63a,	// (0x000536fd) list_setting_pane_t

0x5729,	// (0x000497ec) set_value_pane_cp_ParamLimits

0x5729,	// (0x000497ec) set_value_pane_cp

0x5735,	// (0x000497f8) list_setting_number_pane_g1_ParamLimits

0x5735,	// (0x000497f8) list_setting_number_pane_g1

0x5741,	// (0x00049804) list_setting_number_pane_g2_ParamLimits

0x5741,	// (0x00049804) list_setting_number_pane_g2

0x0001,

0xf641,	// (0x00053704) list_setting_number_pane_g_ParamLimits

0xf641,	// (0x00053704) list_setting_number_pane_g

0x574d,	// (0x00049810) list_setting_number_pane_t1_ParamLimits

0x574d,	// (0x00049810) list_setting_number_pane_t1

0x5766,	// (0x00049829) list_setting_number_pane_t2_ParamLimits

0x5766,	// (0x00049829) list_setting_number_pane_t2

0x5780,	// (0x00049843) list_setting_number_pane_t3_ParamLimits

0x5780,	// (0x00049843) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x00053709) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x00053709) list_setting_number_pane_t

0x5729,	// (0x000497ec) set_value_pane_ParamLimits

0x5729,	// (0x000497ec) set_value_pane

0x0dd0,	// (0x00044e93) bg_set_opt_pane_ParamLimits

0x0dd0,	// (0x00044e93) bg_set_opt_pane

0x57c3,	// (0x00049886) set_value_pane_t1

0x0df1,	// (0x00044eb4) slider_set_pane_cp3

0x6cf8,	// (0x0004adbb) volume_small_pane_cp

0x0dfa,	// (0x00044ebd) list_form_gen_pane

0x0e03,	// (0x00044ec6) scroll_pane_cp8

0x57d9,	// (0x0004989c) form_field_data_pane_ParamLimits

0x57d9,	// (0x0004989c) form_field_data_pane

0x57fb,	// (0x000498be) form_field_data_wide_pane_ParamLimits

0x57fb,	// (0x000498be) form_field_data_wide_pane

0x581e,	// (0x000498e1) form_field_popup_pane_ParamLimits

0x581e,	// (0x000498e1) form_field_popup_pane

0x583e,	// (0x00049901) form_field_popup_wide_pane_ParamLimits

0x583e,	// (0x00049901) form_field_popup_wide_pane

0x585b,	// (0x0004991e) form_field_slider_pane_ParamLimits

0x585b,	// (0x0004991e) form_field_slider_pane

0x586e,	// (0x00049931) form_field_slider_wide_pane_ParamLimits

0x586e,	// (0x00049931) form_field_slider_wide_pane

0x0e14,	// (0x00044ed7) data_form_pane

0x588b,	// (0x0004994e) form_field_data_pane_t1

0x0e20,	// (0x00044ee3) input_focus_pane

0x58a3,	// (0x00049966) data_form_wide_pane

0x58c0,	// (0x00049983) form_field_data_wide_pane_t1

0x0d14,	// (0x00044dd7) input_focus_pane_cp6

0x58e2,	// (0x000499a5) form_field_popup_pane_t1

0x0e20,	// (0x00044ee3) input_focus_pane_cp7

0x0e4e,	// (0x00044f11) list_form_pane

0x5902,	// (0x000499c5) form_field_popup_wide_pane_t1

0x0e20,	// (0x00044ee3) input_focus_pane_cp8

0x0e5a,	// (0x00044f1d) list_form_wide_pane

0x591f,	// (0x000499e2) form_field_slider_pane_t1_ParamLimits

0x591f,	// (0x000499e2) form_field_slider_pane_t1

0x5935,	// (0x000499f8) form_field_slider_pane_t2_ParamLimits

0x5935,	// (0x000499f8) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x00053719) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x00053719) form_field_slider_pane_t

0x0a5c,	// (0x00044b1f) input_focus_pane_cp9_ParamLimits

0x0a5c,	// (0x00044b1f) input_focus_pane_cp9

0x594a,	// (0x00049a0d) slider_cont_pane_ParamLimits

0x594a,	// (0x00049a0d) slider_cont_pane

0x0e66,	// (0x00044f29) form_field_slider_wide_pane_t1_ParamLimits

0x0e66,	// (0x00044f29) form_field_slider_wide_pane_t1

0x595e,	// (0x00049a21) form_field_slider_wide_pane_t2_ParamLimits

0x595e,	// (0x00049a21) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x0005371e) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x0005371e) form_field_slider_wide_pane_t

0x0a5c,	// (0x00044b1f) input_focus_pane_cp10_ParamLimits

0x0a5c,	// (0x00044b1f) input_focus_pane_cp10

0x5970,	// (0x00049a33) slider_cont_pane_cp1_ParamLimits

0x5970,	// (0x00049a33) slider_cont_pane_cp1

0x5984,	// (0x00049a47) slider_form_pane_cp

0x0e78,	// (0x00044f3b) input_focus_pane_g1

0x0e80,	// (0x00044f43) input_focus_pane_g2

0x0e88,	// (0x00044f4b) input_focus_pane_g3

0x0e90,	// (0x00044f53) input_focus_pane_g4

0x0e98,	// (0x00044f5b) input_focus_pane_g5

0x0ea0,	// (0x00044f63) input_focus_pane_g6

0x0ea8,	// (0x00044f6b) input_focus_pane_g7

0x0eb0,	// (0x00044f73) input_focus_pane_g8

0x0eb8,	// (0x00044f7b) input_focus_pane_g9

0x0a04,	// (0x00044ac7) input_focus_pane_g10

0x0009,

0xf660,	// (0x00053723) input_focus_pane_g

0xa096,	// (0x0004e159) wait_border_pane_g3_copy1

0x598c,	// (0x00049a4f) data_form_pane_t1

0x0a04,	// (0x00044ac7) wait_anim_pane_g1_copy1

0x5c0b,	// (0x00049cce) data_form_wide_pane_t1

0x59a7,	// (0x00049a6a) list_form_graphic_pane_cp_ParamLimits

0x59a7,	// (0x00049a6a) list_form_graphic_pane_cp

0xaf75,	// (0x0004f038) slider_form_pane_g1

0xaf7e,	// (0x0004f041) slider_form_pane_g2

0x0006,

0xf963,	// (0x00053a26) slider_form_pane_g

0x59a7,	// (0x00049a6a) list_form_graphic_pane_ParamLimits

0x59a7,	// (0x00049a6a) list_form_graphic_pane

0x59c0,	// (0x00049a83) list_form_graphic_pane_g1

0x59c8,	// (0x00049a8b) list_form_graphic_pane_t1_ParamLimits

0x59c8,	// (0x00049a8b) list_form_graphic_pane_t1

0x0a6a,	// (0x00044b2d) list_highlight_pane_cp5_ParamLimits

0x0a6a,	// (0x00044b2d) list_highlight_pane_cp5

0x59dd,	// (0x00049aa0) find_pane_g1

0x0ec0,	// (0x00044f83) input_find_pane

0x59e6,	// (0x00049aa9) input_find_pane_g1_ParamLimits

0x59e6,	// (0x00049aa9) input_find_pane_g1

0x59f2,	// (0x00049ab5) input_find_pane_t1_ParamLimits

0x59f2,	// (0x00049ab5) input_find_pane_t1

0x5a07,	// (0x00049aca) input_find_pane_t2_ParamLimits

0x5a07,	// (0x00049aca) input_find_pane_t2

0x0001,

0xf675,	// (0x00053738) input_find_pane_t_ParamLimits

0xf675,	// (0x00053738) input_find_pane_t

0x0ec9,	// (0x00044f8c) input_focus_pane_cp5_ParamLimits

0x0ec9,	// (0x00044f8c) input_focus_pane_cp5

0x0edc,	// (0x00044f9f) bg_popup_window_pane_cp2_ParamLimits

0x0edc,	// (0x00044f9f) bg_popup_window_pane_cp2

0x0ee9,	// (0x00044fac) listscroll_menu_pane_ParamLimits

0x0ee9,	// (0x00044fac) listscroll_menu_pane

0x6d0d,	// (0x0004add0) popup_submenu_window_ParamLimits

0x6d0d,	// (0x0004add0) popup_submenu_window

0x0ef5,	// (0x00044fb8) find_popup_pane_g1

0x6d35,	// (0x0004adf8) input_popup_find_pane_cp

0x0efd,	// (0x00044fc0) input_focus_pane_cp4_ParamLimits

0x0efd,	// (0x00044fc0) input_focus_pane_cp4

0x0f0b,	// (0x00044fce) input_popup_find_pane_t1_ParamLimits

0x0f0b,	// (0x00044fce) input_popup_find_pane_t1

0x0a0e,	// (0x00044ad1) bg_popup_sub_pane_cp

0x0f39,	// (0x00044ffc) listscroll_popup_sub_pane

0x0f41,	// (0x00045004) list_submenu_pane_ParamLimits

0x0f41,	// (0x00045004) list_submenu_pane

0x0f52,	// (0x00045015) scroll_pane_cp4

0x6d4d,	// (0x0004ae10) list_single_popup_submenu_pane_ParamLimits

0x6d4d,	// (0x0004ae10) list_single_popup_submenu_pane

0x22bb,	// (0x0004637e) list_single_popup_submenu_pane_g1

0x6d61,	// (0x0004ae24) list_single_popup_submenu_pane_t1_ParamLimits

0x6d61,	// (0x0004ae24) list_single_popup_submenu_pane_t1

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp1_ParamLimits

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp1

0x0f5a,	// (0x0004501d) tabs_2_active_pane_g1

0x6d76,	// (0x0004ae39) tabs_2_active_pane_t1

0x0a6a,	// (0x00044b2d) bg_passive_tab_pane_cp1_ParamLimits

0x0a6a,	// (0x00044b2d) bg_passive_tab_pane_cp1

0x0f5a,	// (0x0004501d) tabs_2_passive_pane_g1

0x6d76,	// (0x0004ae39) tabs_2_passive_pane_t1

0x6d88,	// (0x0004ae4b) bg_active_tab_pane_cp4

0x6d96,	// (0x0004ae59) tabs_2_long_active_pane_t1

0x6da9,	// (0x0004ae6c) bg_passive_tab_pane_cp4

0x81a3,	// (0x0004c266) list_single_midp_graphic_pane_g4_ParamLimits

0x6d88,	// (0x0004ae4b) bg_active_tab_pane_cp5

0x6db5,	// (0x0004ae78) tabs_3_long_active_pane_t1

0x6da9,	// (0x0004ae6c) bg_passive_tab_pane_cp5

0x81a3,	// (0x0004c266) list_single_midp_graphic_pane_g4

0x0a6a,	// (0x00044b2d) bg_popup_window_pane_cp13_ParamLimits

0x0a6a,	// (0x00044b2d) bg_popup_window_pane_cp13

0x0f6e,	// (0x00045031) listscroll_popup_fast_pane_ParamLimits

0x0f6e,	// (0x00045031) listscroll_popup_fast_pane

0x0f7a,	// (0x0004503d) grid_popup_fast_pane_ParamLimits

0x0f7a,	// (0x0004503d) grid_popup_fast_pane

0x0f8c,	// (0x0004504f) scroll_pane_cp9_ParamLimits

0x0f8c,	// (0x0004504f) scroll_pane_cp9

0xc885,	// (0x00050948) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc885,	// (0x00050948) list_single_graphic_hl_pane_t1_cp2

0x0f9f,	// (0x00045062) input_focus_pane_cp20_ParamLimits

0x0f9f,	// (0x00045062) input_focus_pane_cp20

0x0fad,	// (0x00045070) query_popup_data_pane_t1_ParamLimits

0x0fad,	// (0x00045070) query_popup_data_pane_t1

0x0fc0,	// (0x00045083) query_popup_data_pane_t2_ParamLimits

0x0fc0,	// (0x00045083) query_popup_data_pane_t2

0x1006,	// (0x000450c9) query_popup_data_pane_t3_ParamLimits

0x1006,	// (0x000450c9) query_popup_data_pane_t3

0x1047,	// (0x0004510a) query_popup_data_pane_t4_ParamLimits

0x1047,	// (0x0004510a) query_popup_data_pane_t4

0x1083,	// (0x00045146) query_popup_data_pane_t5_ParamLimits

0x1083,	// (0x00045146) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x0005373d) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x0005373d) query_popup_data_pane_t

0x0e78,	// (0x00044f3b) bg_set_opt_pane_g1

0x0e80,	// (0x00044f43) bg_set_opt_pane_g2

0x0e88,	// (0x00044f4b) bg_set_opt_pane_g3

0x0e90,	// (0x00044f53) bg_set_opt_pane_g4

0x0e98,	// (0x00044f5b) bg_set_opt_pane_g5

0x0ea0,	// (0x00044f63) bg_set_opt_pane_g6

0x0ea8,	// (0x00044f6b) bg_set_opt_pane_g7

0x0eb0,	// (0x00044f73) bg_set_opt_pane_g8

0x0eb8,	// (0x00044f7b) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x00053748) bg_set_opt_pane_g

0x72d2,	// (0x0004b395) control_top_pane_stacon_ParamLimits

0x72d2,	// (0x0004b395) control_top_pane_stacon

0x7325,	// (0x0004b3e8) signal_pane_stacon_ParamLimits

0x7325,	// (0x0004b3e8) signal_pane_stacon

0x140f,	// (0x000454d2) stacon_top_pane_g1_ParamLimits

0x140f,	// (0x000454d2) stacon_top_pane_g1

0x734a,	// (0x0004b40d) title_pane_stacon_ParamLimits

0x734a,	// (0x0004b40d) title_pane_stacon

0x7374,	// (0x0004b437) uni_indicator_pane_stacon_ParamLimits

0x7374,	// (0x0004b437) uni_indicator_pane_stacon

0x7389,	// (0x0004b44c) battery_pane_stacon_ParamLimits

0x7389,	// (0x0004b44c) battery_pane_stacon

0x73cd,	// (0x0004b490) control_bottom_pane_stacon_ParamLimits

0x73cd,	// (0x0004b490) control_bottom_pane_stacon

0x73f0,	// (0x0004b4b3) navi_pane_stacon_ParamLimits

0x73f0,	// (0x0004b4b3) navi_pane_stacon

0x1431,	// (0x000454f4) stacon_bottom_pane_g1_ParamLimits

0x1431,	// (0x000454f4) stacon_bottom_pane_g1

0x6de1,	// (0x0004aea4) aid_levels_signal_lsc_ParamLimits

0x6de1,	// (0x0004aea4) aid_levels_signal_lsc

0x6df7,	// (0x0004aeba) signal_pane_stacon_g1_ParamLimits

0x6df7,	// (0x0004aeba) signal_pane_stacon_g1

0x6e0b,	// (0x0004aece) signal_pane_stacon_g2_ParamLimits

0x6e0b,	// (0x0004aece) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x0005375b) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x0005375b) signal_pane_stacon_g

0x6e40,	// (0x0004af03) title_pane_stacon_t1_ParamLimits

0x6e40,	// (0x0004af03) title_pane_stacon_t1

0x10db,	// (0x0004519e) uni_indicator_pane_stacon_g1

0x10e5,	// (0x000451a8) uni_indicator_pane_stacon_g2

0x10c7,	// (0x0004518a) uni_indicator_pane_stacon_g3

0x10d1,	// (0x00045194) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x00053767) uni_indicator_pane_stacon_g

0x6e65,	// (0x0004af28) control_top_pane_stacon_g1

0x6e6d,	// (0x0004af30) control_top_pane_stacon_t1_ParamLimits

0x6e6d,	// (0x0004af30) control_top_pane_stacon_t1

0x6ea4,	// (0x0004af67) aid_levels_battery_lsc_ParamLimits

0x6ea4,	// (0x0004af67) aid_levels_battery_lsc

0x6ebb,	// (0x0004af7e) battery_pane_stacon_g1_ParamLimits

0x6ebb,	// (0x0004af7e) battery_pane_stacon_g1

0x6ece,	// (0x0004af91) battery_pane_stacon_g2_ParamLimits

0x6ece,	// (0x0004af91) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x00053770) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x00053770) battery_pane_stacon_g

0x6f0c,	// (0x0004afcf) navi_icon_pane_stacon

0x6f20,	// (0x0004afe3) navi_navi_pane_stacon

0x6f0c,	// (0x0004afcf) navi_text_pane_stacon

0x6e65,	// (0x0004af28) control_bottom_pane_stacon_g1

0x6f34,	// (0x0004aff7) control_bottom_pane_stacon_t1_ParamLimits

0x6f34,	// (0x0004aff7) control_bottom_pane_stacon_t1

0x6f6b,	// (0x0004b02e) grid_app_pane_ParamLimits

0x6f6b,	// (0x0004b02e) grid_app_pane

0x6f8d,	// (0x0004b050) scroll_pane_cp15_ParamLimits

0x6f8d,	// (0x0004b050) scroll_pane_cp15

0x6fa0,	// (0x0004b063) cell_app_pane_ParamLimits

0x6fa0,	// (0x0004b063) cell_app_pane

0x6fc8,	// (0x0004b08b) cell_app_pane_g1_ParamLimits

0x6fc8,	// (0x0004b08b) cell_app_pane_g1

0x1109,	// (0x000451cc) cell_app_pane_g2_ParamLimits

0x1109,	// (0x000451cc) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x00053775) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x00053775) cell_app_pane_g

0x6fec,	// (0x0004b0af) cell_app_pane_t1_ParamLimits

0x6fec,	// (0x0004b0af) cell_app_pane_t1

0x1115,	// (0x000451d8) grid_highlight_pane_ParamLimits

0x1115,	// (0x000451d8) grid_highlight_pane

0x0e78,	// (0x00044f3b) cell_highlight_pane_g1

0x0e80,	// (0x00044f43) cell_highlight_pane_g2

0x0e88,	// (0x00044f4b) cell_highlight_pane_g3

0x0e90,	// (0x00044f53) cell_highlight_pane_g4

0x0e98,	// (0x00044f5b) cell_highlight_pane_g5

0x0ea0,	// (0x00044f63) cell_highlight_pane_g6

0x0ea8,	// (0x00044f6b) cell_highlight_pane_g7

0x0eb0,	// (0x00044f73) cell_highlight_pane_g8

0x0eb8,	// (0x00044f7b) cell_highlight_pane_g9

0x0a04,	// (0x00044ac7) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x00053723) cell_highlight_pane_g

0x1126,	// (0x000451e9) bg_scroll_pane

0x7016,	// (0x0004b0d9) scroll_handle_pane

0x116d,	// (0x00045230) scroll_bg_pane_g1

0x1182,	// (0x00045245) scroll_bg_pane_g2

0x119a,	// (0x0004525d) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x0005377a) scroll_bg_pane_g

0x703f,	// (0x0004b102) scroll_handle_focus_pane_ParamLimits

0x703f,	// (0x0004b102) scroll_handle_focus_pane

0x116d,	// (0x00045230) scroll_handle_pane_g1

0x11af,	// (0x00045272) scroll_handle_pane_g2

0x119a,	// (0x0004525d) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x00053781) scroll_handle_pane_g

0x0efd,	// (0x00044fc0) bg_popup_sub_pane_cp21_ParamLimits

0x0efd,	// (0x00044fc0) bg_popup_sub_pane_cp21

0x704c,	// (0x0004b10f) popup_fep_japan_predictive_window_t1_ParamLimits

0x704c,	// (0x0004b10f) popup_fep_japan_predictive_window_t1

0x7066,	// (0x0004b129) popup_fep_japan_predictive_window_t2_ParamLimits

0x7066,	// (0x0004b129) popup_fep_japan_predictive_window_t2

0x7099,	// (0x0004b15c) popup_fep_japan_predictive_window_t3_ParamLimits

0x7099,	// (0x0004b15c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x00053788) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x00053788) popup_fep_japan_predictive_window_t

0x0a0e,	// (0x00044ad1) bg_popup_sub_pane_cp23

0x2be0,	// (0x00046ca3) listscroll_japin_cand_pane

0x11c3,	// (0x00045286) popup_fep_japan_candidate_window_t1

0x11d1,	// (0x00045294) candidate_pane_ParamLimits

0x11d1,	// (0x00045294) candidate_pane

0x70d0,	// (0x0004b193) scroll_pane_cp30

0x11e3,	// (0x000452a6) list_single_popup_jap_candidate_pane_ParamLimits

0x11e3,	// (0x000452a6) list_single_popup_jap_candidate_pane

0x0a0e,	// (0x00044ad1) list_highlight_pane_cp30

0x11f8,	// (0x000452bb) list_single_popup_jap_candidate_pane_t1

0x1207,	// (0x000452ca) level_1_signal

0x1214,	// (0x000452d7) level_2_signal

0x1221,	// (0x000452e4) level_3_signal

0x122e,	// (0x000452f1) level_4_signal

0x123b,	// (0x000452fe) level_5_signal

0x1248,	// (0x0004530b) level_6_signal

0x1255,	// (0x00045318) level_7_signal

0x1207,	// (0x000452ca) level_1_battery

0x1214,	// (0x000452d7) level_2_battery

0x1221,	// (0x000452e4) level_3_battery

0x122e,	// (0x000452f1) level_4_battery

0x123b,	// (0x000452fe) level_5_battery

0x1248,	// (0x0004530b) level_6_battery

0x1255,	// (0x00045318) level_7_battery

0x127a,	// (0x0004533d) list_menu_pane_ParamLimits

0x127a,	// (0x0004533d) list_menu_pane

0x1290,	// (0x00045353) scroll_pane_cp25_ParamLimits

0x1290,	// (0x00045353) scroll_pane_cp25

0x12a9,	// (0x0004536c) list_double2_graphic_pane_cp2_ParamLimits

0x12a9,	// (0x0004536c) list_double2_graphic_pane_cp2

0x12a9,	// (0x0004536c) list_double2_large_graphic_pane_cp2_ParamLimits

0x12a9,	// (0x0004536c) list_double2_large_graphic_pane_cp2

0x12a9,	// (0x0004536c) list_double2_pane_cp2_ParamLimits

0x12a9,	// (0x0004536c) list_double2_pane_cp2

0x12a9,	// (0x0004536c) list_double_graphic_pane_cp2_ParamLimits

0x12a9,	// (0x0004536c) list_double_graphic_pane_cp2

0x12a9,	// (0x0004536c) list_double_large_graphic_pane_cp2_ParamLimits

0x12a9,	// (0x0004536c) list_double_large_graphic_pane_cp2

0x12a9,	// (0x0004536c) list_double_number_pane_cp2_ParamLimits

0x12a9,	// (0x0004536c) list_double_number_pane_cp2

0x12a9,	// (0x0004536c) list_double_pane_cp2_ParamLimits

0x12a9,	// (0x0004536c) list_double_pane_cp2

0x710b,	// (0x0004b1ce) list_single_2graphic_pane_cp2_ParamLimits

0x710b,	// (0x0004b1ce) list_single_2graphic_pane_cp2

0x710b,	// (0x0004b1ce) list_single_graphic_heading_pane_cp2_ParamLimits

0x710b,	// (0x0004b1ce) list_single_graphic_heading_pane_cp2

0x710b,	// (0x0004b1ce) list_single_graphic_pane_cp2_ParamLimits

0x710b,	// (0x0004b1ce) list_single_graphic_pane_cp2

0x710b,	// (0x0004b1ce) list_single_heading_pane_cp2_ParamLimits

0x710b,	// (0x0004b1ce) list_single_heading_pane_cp2

0x12b9,	// (0x0004537c) list_single_large_graphic_pane_cp2_ParamLimits

0x12b9,	// (0x0004537c) list_single_large_graphic_pane_cp2

0x710b,	// (0x0004b1ce) list_single_number_heading_pane_cp2_ParamLimits

0x710b,	// (0x0004b1ce) list_single_number_heading_pane_cp2

0x710b,	// (0x0004b1ce) list_single_number_pane_cp2_ParamLimits

0x710b,	// (0x0004b1ce) list_single_number_pane_cp2

0x7121,	// (0x0004b1e4) list_single_pane_cp2_ParamLimits

0x7121,	// (0x0004b1e4) list_single_pane_cp2

0x12d3,	// (0x00045396) bg_popup_sub_pane_cp22

0x71f9,	// (0x0004b2bc) popup_side_volume_key_window_g1

0x721d,	// (0x0004b2e0) popup_side_volume_key_window_t1

0x7239,	// (0x0004b2fc) volume_small_pane_cp1

0x0a5c,	// (0x00044b1f) bg_popup_sub_pane_cp24_ParamLimits

0x0a5c,	// (0x00044b1f) bg_popup_sub_pane_cp24

0x12e9,	// (0x000453ac) fep_china_uni_candidate_pane_ParamLimits

0x12e9,	// (0x000453ac) fep_china_uni_candidate_pane

0x12fd,	// (0x000453c0) fep_china_uni_entry_pane

0x130d,	// (0x000453d0) popup_fep_china_uni_window_g1

0x7241,	// (0x0004b304) fep_china_uni_entry_pane_g1

0x7249,	// (0x0004b30c) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x000537b9) fep_china_uni_entry_pane_g

0x1329,	// (0x000453ec) fep_entry_item_pane

0x1333,	// (0x000453f6) fep_candidate_item_pane

0x7251,	// (0x0004b314) fep_china_uni_candidate_pane_g1

0x133b,	// (0x000453fe) fep_china_uni_candidate_pane_g2

0x1343,	// (0x00045406) fep_china_uni_candidate_pane_g3

0x7259,	// (0x0004b31c) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x000537be) fep_china_uni_candidate_pane_g

0x0a04,	// (0x00044ac7) fep_entry_item_pane_g1

0x134b,	// (0x0004540e) fep_entry_item_pane_t1_ParamLimits

0x134b,	// (0x0004540e) fep_entry_item_pane_t1

0x1361,	// (0x00045424) fep_candidate_item_pane_t1_ParamLimits

0x1361,	// (0x00045424) fep_candidate_item_pane_t1

0x1376,	// (0x00045439) fep_candidate_item_pane_t2_ParamLimits

0x1376,	// (0x00045439) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x000537c7) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x000537c7) fep_candidate_item_pane_t

0x0a6a,	// (0x00044b2d) list_highlight_pane_cp31_ParamLimits

0x0a6a,	// (0x00044b2d) list_highlight_pane_cp31

0x1388,	// (0x0004544b) level_1_signal_lsc

0x1391,	// (0x00045454) level_2_signal_lsc

0x139a,	// (0x0004545d) level_3_signal_lsc

0x13a3,	// (0x00045466) level_4_signal_lsc

0x13ac,	// (0x0004546f) level_5_signal_lsc

0x13b5,	// (0x00045478) level_6_signal_lsc

0x13be,	// (0x00045481) level_7_signal_lsc

0x13be,	// (0x00045481) level_1_battery_lsc

0x13c7,	// (0x0004548a) level_2_battery_lsc

0x13d0,	// (0x00045493) level_3_battery_lsc

0x13d9,	// (0x0004549c) level_4_battery_lsc

0x13e2,	// (0x000454a5) level_5_battery_lsc

0x13eb,	// (0x000454ae) level_6_battery_lsc

0x1388,	// (0x0004544b) level_7_battery_lsc

0x13f4,	// (0x000454b7) scroll_handle_focus_pane_g1

0x13fd,	// (0x000454c0) scroll_handle_focus_pane_g2

0x1406,	// (0x000454c9) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x000537cc) scroll_handle_focus_pane_g

0x5a1c,	// (0x00049adf) list_single_2graphic_pane_g1_ParamLimits

0x5a1c,	// (0x00049adf) list_single_2graphic_pane_g1

0x6c85,	// (0x0004ad48) list_single_2graphic_pane_g2_ParamLimits

0x6c85,	// (0x0004ad48) list_single_2graphic_pane_g2

0x6c67,	// (0x0004ad2a) list_single_2graphic_pane_g3_ParamLimits

0x6c67,	// (0x0004ad2a) list_single_2graphic_pane_g3

0x5a28,	// (0x00049aeb) list_single_2graphic_pane_g4_ParamLimits

0x5a28,	// (0x00049aeb) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x000537d3) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x000537d3) list_single_2graphic_pane_g

0x5a34,	// (0x00049af7) list_single_2graphic_pane_t1_ParamLimits

0x5a34,	// (0x00049af7) list_single_2graphic_pane_t1

0x7261,	// (0x0004b324) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7261,	// (0x0004b324) list_double2_graphic_large_graphic_pane_g1

0x6cdb,	// (0x0004ad9e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6cdb,	// (0x0004ad9e) list_double2_graphic_large_graphic_pane_g2

0x6cae,	// (0x0004ad71) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6cae,	// (0x0004ad71) list_double2_graphic_large_graphic_pane_g3

0x7271,	// (0x0004b334) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7271,	// (0x0004b334) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x000537dc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x000537dc) list_double2_graphic_large_graphic_pane_g

0x5a62,	// (0x00049b25) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5a62,	// (0x00049b25) list_double2_graphic_large_graphic_pane_t1

0x5a78,	// (0x00049b3b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5a78,	// (0x00049b3b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x000537e5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x000537e5) list_double2_graphic_large_graphic_pane_t

0x744f,	// (0x0004b512) popup_fast_swap_window_ParamLimits

0x744f,	// (0x0004b512) popup_fast_swap_window

0x746b,	// (0x0004b52e) popup_side_volume_key_window

0x14bc,	// (0x0004557f) stacon_top_pane

0x14c6,	// (0x00045589) status_pane_ParamLimits

0x14c6,	// (0x00045589) status_pane

0x09fa,	// (0x00044abd) status_small_pane

0x0a0e,	// (0x00044ad1) control_pane

0x0a0e,	// (0x00044ad1) stacon_bottom_pane

0x0e03,	// (0x00044ec6) scroll_pane_cp121

0x0dfa,	// (0x00044ebd) set_content_pane

0x727d,	// (0x0004b340) bg_active_tab_pane_g1_cp1

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp1

0x728f,	// (0x0004b352) bg_active_tab_pane_g3_cp1

0x727d,	// (0x0004b340) bg_passive_tab_pane_g1_cp1

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp1

0x728f,	// (0x0004b352) bg_passive_tab_pane_g3_cp1

0x7298,	// (0x0004b35b) bg_active_tab_pane_g1_cp2

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp2

0x72a1,	// (0x0004b364) bg_active_tab_pane_g3_cp2

0x7298,	// (0x0004b35b) bg_passive_tab_pane_g1_cp2

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp2

0x72a1,	// (0x0004b364) bg_passive_tab_pane_g3_cp2

0x72aa,	// (0x0004b36d) bg_active_tab_pane_g1_cp3

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp3

0x72b3,	// (0x0004b376) bg_active_tab_pane_g3_cp3

0x72aa,	// (0x0004b36d) bg_passive_tab_pane_g1_cp3

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp3

0x72b3,	// (0x0004b376) bg_passive_tab_pane_g3_cp3

0x72bc,	// (0x0004b37f) bg_active_tab_pane_g1_cp4

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp4

0x72c7,	// (0x0004b38a) bg_active_tab_pane_g3_cp4

0x72bc,	// (0x0004b37f) bg_passive_tab_pane_g1_cp4

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp4

0x72c7,	// (0x0004b38a) bg_passive_tab_pane_g3_cp4

0x7413,	// (0x0004b4d6) bg_active_tab_pane_g1_cp5

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp5

0x741c,	// (0x0004b4df) bg_active_tab_pane_g3_cp5

0x7413,	// (0x0004b4d6) bg_passive_tab_pane_g1_cp5

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp5

0x741c,	// (0x0004b4df) bg_passive_tab_pane_g3_cp5

0x7425,	// (0x0004b4e8) list_set_graphic_pane_ParamLimits

0x7425,	// (0x0004b4e8) list_set_graphic_pane

0x0a0e,	// (0x00044ad1) bg_set_opt_pane_cp4

0x144d,	// (0x00045510) list_set_graphic_pane_g1_ParamLimits

0x144d,	// (0x00045510) list_set_graphic_pane_g1

0x1459,	// (0x0004551c) list_set_graphic_pane_g2_ParamLimits

0x1459,	// (0x0004551c) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x000537ea) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x000537ea) list_set_graphic_pane_g

0x0009,

0xfabf,	// (0x00053b82) volume_small_pane_cp_g

0x7443,	// (0x0004b506) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7443,	// (0x0004b506) list_double2_large_graphic_pane_g1_cp2

0x147b,	// (0x0004553e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x147b,	// (0x0004553e) list_double2_large_graphic_pane_g2_cp2

0x148c,	// (0x0004554f) list_double2_large_graphic_pane_g3_cp2

0x1494,	// (0x00045557) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1494,	// (0x00045557) list_double2_large_graphic_pane_t1_cp2

0x14aa,	// (0x0004556d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x14aa,	// (0x0004556d) list_double2_large_graphic_pane_t2_cp2

0xab47,	// (0x0004ec0a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab47,	// (0x0004ec0a) list_double_large_graphic_pane_g1_cp2

0xab58,	// (0x0004ec1b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab58,	// (0x0004ec1b) list_double_large_graphic_pane_g2_cp2

0x15e2,	// (0x000456a5) list_double_large_graphic_pane_g3_cp2

0xab69,	// (0x0004ec2c) list_double_large_graphic_pane_g4_cp

0xab71,	// (0x0004ec34) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab71,	// (0x0004ec34) list_double_large_graphic_pane_t1_cp2

0xab88,	// (0x0004ec4b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab88,	// (0x0004ec4b) list_double_large_graphic_pane_t2_cp2

0x14d4,	// (0x00045597) list_double2_graphic_pane_g1_cp2_ParamLimits

0x14d4,	// (0x00045597) list_double2_graphic_pane_g1_cp2

0x14e2,	// (0x000455a5) list_double2_graphic_pane_g2_cp2_ParamLimits

0x14e2,	// (0x000455a5) list_double2_graphic_pane_g2_cp2

0x14f3,	// (0x000455b6) list_double2_graphic_pane_g3_cp2

0x14fd,	// (0x000455c0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x14fd,	// (0x000455c0) list_double2_graphic_pane_t1_cp2

0x1513,	// (0x000455d6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1513,	// (0x000455d6) list_double2_graphic_pane_t2_cp2

0x1525,	// (0x000455e8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1525,	// (0x000455e8) list_single_number_heading_pane_g1_cp2

0x1531,	// (0x000455f4) list_single_number_heading_pane_g2_cp2

0x1539,	// (0x000455fc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1539,	// (0x000455fc) list_single_number_heading_pane_t1_cp2

0x154f,	// (0x00045612) list_single_number_heading_pane_t2_cp2_ParamLimits

0x154f,	// (0x00045612) list_single_number_heading_pane_t2_cp2

0x1561,	// (0x00045624) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1561,	// (0x00045624) list_single_number_heading_pane_t3_cp2

0x1525,	// (0x000455e8) list_single_heading_pane_g1_cp2_ParamLimits

0x1525,	// (0x000455e8) list_single_heading_pane_g1_cp2

0x1531,	// (0x000455f4) list_single_heading_pane_g2_cp2

0x1539,	// (0x000455fc) list_single_heading_pane_t1_cp2_ParamLimits

0x1539,	// (0x000455fc) list_single_heading_pane_t1_cp2

0xa951,	// (0x0004ea14) list_single_heading_pane_t2_cp2_ParamLimits

0xa951,	// (0x0004ea14) list_single_heading_pane_t2_cp2

0xa899,	// (0x0004e95c) list_double_graphic_pane_g1_cp2_ParamLimits

0xa899,	// (0x0004e95c) list_double_graphic_pane_g1_cp2

0xa8a5,	// (0x0004e968) list_double_graphic_pane_g2_cp2_ParamLimits

0xa8a5,	// (0x0004e968) list_double_graphic_pane_g2_cp2

0xa8b4,	// (0x0004e977) list_double_graphic_pane_g3_cp2

0xa8bc,	// (0x0004e97f) list_double_graphic_pane_t1_cp2_ParamLimits

0xa8bc,	// (0x0004e97f) list_double_graphic_pane_t1_cp2

0xa8d2,	// (0x0004e995) list_double_graphic_pane_t2_cp2_ParamLimits

0xa8d2,	// (0x0004e995) list_double_graphic_pane_t2_cp2

0x15d6,	// (0x00045699) list_double_number_pane_g1_cp2_ParamLimits

0x15d6,	// (0x00045699) list_double_number_pane_g1_cp2

0x15e2,	// (0x000456a5) list_double_number_pane_g2_cp2

0xa85d,	// (0x0004e920) list_double_number_pane_t1_cp2_ParamLimits

0xa85d,	// (0x0004e920) list_double_number_pane_t1_cp2

0xa871,	// (0x0004e934) list_double_number_pane_t2_cp2_ParamLimits

0xa871,	// (0x0004e934) list_double_number_pane_t2_cp2

0xa887,	// (0x0004e94a) list_double_number_pane_t3_cp2_ParamLimits

0xa887,	// (0x0004e94a) list_double_number_pane_t3_cp2

0xa746,	// (0x0004e809) list_single_graphic_pane_g1_cp2_ParamLimits

0xa746,	// (0x0004e809) list_single_graphic_pane_g1_cp2

0x163f,	// (0x00045702) list_single_graphic_pane_g2_cp2_ParamLimits

0x163f,	// (0x00045702) list_single_graphic_pane_g2_cp2

0x164b,	// (0x0004570e) list_single_graphic_pane_g3_cp2

0xa71c,	// (0x0004e7df) list_single_graphic_pane_t1_cp2_ParamLimits

0xa71c,	// (0x0004e7df) list_single_graphic_pane_t1_cp2

0x163f,	// (0x00045702) list_single_number_pane_g1_cp2_ParamLimits

0x163f,	// (0x00045702) list_single_number_pane_g1_cp2

0x164b,	// (0x0004570e) list_single_number_pane_g2_cp2

0xa71c,	// (0x0004e7df) list_single_number_pane_t1_cp2_ParamLimits

0xa71c,	// (0x0004e7df) list_single_number_pane_t1_cp2

0xa732,	// (0x0004e7f5) list_single_number_pane_t2_cp2_ParamLimits

0xa732,	// (0x0004e7f5) list_single_number_pane_t2_cp2

0x147b,	// (0x0004553e) list_double2_pane_g1_cp2_ParamLimits

0x147b,	// (0x0004553e) list_double2_pane_g1_cp2

0x148c,	// (0x0004554f) list_double2_pane_g2_cp2

0x15ae,	// (0x00045671) list_double2_pane_t1_cp2_ParamLimits

0x15ae,	// (0x00045671) list_double2_pane_t1_cp2

0x15c4,	// (0x00045687) list_double2_pane_t2_cp2_ParamLimits

0x15c4,	// (0x00045687) list_double2_pane_t2_cp2

0x15d6,	// (0x00045699) list_double_pane_g1_cp2_ParamLimits

0x15d6,	// (0x00045699) list_double_pane_g1_cp2

0x15e2,	// (0x000456a5) list_double_pane_g2_cp2

0x15ea,	// (0x000456ad) list_double_pane_t1_cp2_ParamLimits

0x15ea,	// (0x000456ad) list_double_pane_t1_cp2

0x1600,	// (0x000456c3) list_double_pane_t2_cp2_ParamLimits

0x1600,	// (0x000456c3) list_double_pane_t2_cp2

0x7485,	// (0x0004b548) list_single_pane_cp2_g3

0x163f,	// (0x00045702) list_single_pane_g1_cp2_ParamLimits

0x163f,	// (0x00045702) list_single_pane_g1_cp2

0x164b,	// (0x0004570e) list_single_pane_g2_cp2

0x1653,	// (0x00045716) list_single_pane_t1_cp2_ParamLimits

0x1653,	// (0x00045716) list_single_pane_t1_cp2

0x748d,	// (0x0004b550) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x748d,	// (0x0004b550) list_single_large_graphic_pane_g1_cp2

0x166b,	// (0x0004572e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x166b,	// (0x0004572e) list_single_large_graphic_pane_g2_cp2

0x1677,	// (0x0004573a) list_single_large_graphic_pane_g3_cp2

0x7499,	// (0x0004b55c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7499,	// (0x0004b55c) list_single_large_graphic_pane_g4_cp1

0x167f,	// (0x00045742) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x167f,	// (0x00045742) list_single_large_graphic_pane_t1_cp2

0xa6e8,	// (0x0004e7ab) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6e8,	// (0x0004e7ab) list_single_graphic_heading_pane_g1_cp2

0xa6b5,	// (0x0004e778) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa6b5,	// (0x0004e778) list_single_graphic_heading_pane_g4_cp2

0x164b,	// (0x0004570e) list_single_graphic_heading_pane_g5_cp2

0xa6f4,	// (0x0004e7b7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6f4,	// (0x0004e7b7) list_single_graphic_heading_pane_t1_cp2

0xa70a,	// (0x0004e7cd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa70a,	// (0x0004e7cd) list_single_graphic_heading_pane_t2_cp2

0xa6a9,	// (0x0004e76c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa6a9,	// (0x0004e76c) list_single_2graphic_pane_g1_cp2

0xa6b5,	// (0x0004e778) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa6b5,	// (0x0004e778) list_single_2graphic_pane_g2_cp2

0x164b,	// (0x0004570e) list_single_2graphic_pane_g3_cp2

0xa6c6,	// (0x0004e789) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa6c6,	// (0x0004e789) list_single_2graphic_pane_g4_cp2

0xa6d2,	// (0x0004e795) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa6d2,	// (0x0004e795) list_single_2graphic_pane_t1_cp2

0x0a04,	// (0x00044ac7) list_highlight_pane_g10_cp1

0xa291,	// (0x0004e354) list_highlight_pane_g1_cp1

0xa299,	// (0x0004e35c) list_highlight_pane_g2_cp1

0xa2a1,	// (0x0004e364) list_highlight_pane_g3_cp1

0xa2a9,	// (0x0004e36c) list_highlight_pane_g4_cp1

0xa2b1,	// (0x0004e374) list_highlight_pane_g5_cp1

0xa2b9,	// (0x0004e37c) list_highlight_pane_g6_cp1

0xa2c1,	// (0x0004e384) list_highlight_pane_g7_cp1

0xa2c9,	// (0x0004e38c) list_highlight_pane_g8_cp1

0xa2d1,	// (0x0004e394) list_highlight_pane_g9_cp1

0xa1b9,	// (0x0004e27c) form_field_slider_pane_t3

0xa1c7,	// (0x0004e28a) form_field_slider_pane_t4

0xa1d5,	// (0x0004e298) slider_form_pane_ParamLimits

0xa1d5,	// (0x0004e298) slider_form_pane

0x0a0e,	// (0x00044ad1) control_abbreviations

0x0a0e,	// (0x00044ad1) control_conventions

0x0a0e,	// (0x00044ad1) control_definitions

0x0a0e,	// (0x00044ad1) format_table_attribute

0xa99b,	// (0x0004ea5e) bg_popup_preview_window_pane_g9

0x0a0e,	// (0x00044ad1) format_table_data2

0x0a0e,	// (0x00044ad1) format_table_data3

0x0a0e,	// (0x00044ad1) format_table_data_example

0x0008,

0x0a0e,	// (0x00044ad1) intro_purpose

0xf8c3,	// (0x00053986) bg_popup_preview_window_pane_g

0x0a0e,	// (0x00044ad1) texts_category

0x0a0e,	// (0x00044ad1) texts_graphics

0x1695,	// (0x00045758) text_digital

0x16a4,	// (0x00045767) text_primary

0x16b3,	// (0x00045776) text_primary_small

0x16c2,	// (0x00045785) text_secondary

0x16d1,	// (0x00045794) text_title

0xb060,	// (0x0004f123) bg_passive_tab_pane_g1_cp3_srt

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp3_srt

0xb069,	// (0x0004f12c) bg_passive_tab_pane_g3_cp3_srt

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp3_srt_ParamLimits

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp3_srt

0xb072,	// (0x0004f135) tabs_4_active_pane_srt_g1

0xb07a,	// (0x0004f13d) tabs_4_active_pane_srt_t1_ParamLimits

0xb07a,	// (0x0004f13d) tabs_4_active_pane_srt_t1

0xb060,	// (0x0004f123) bg_active_tab_pane_g1_cp3_copy1

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp3_copy1

0xb069,	// (0x0004f12c) bg_active_tab_pane_g3_cp3_copy1

0x0a6a,	// (0x00044b2d) tabs_2_long_active_pane_srt_ParamLimits

0x0a6a,	// (0x00044b2d) tabs_2_long_active_pane_srt

0x0a6a,	// (0x00044b2d) tabs_2_long_passive_pane_srt_ParamLimits

0x0a6a,	// (0x00044b2d) tabs_2_long_passive_pane_srt

0x6da9,	// (0x0004ae6c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6da9,	// (0x0004ae6c) bg_passive_tab_pane_cp4_srt

0xadac,	// (0x0004ee6f) bg_passive_tab_pane_g1_cp4_srt

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp4_srt

0xadb5,	// (0x0004ee78) bg_passive_tab_pane_g3_cp4_srt

0x6d88,	// (0x0004ae4b) bg_active_tab_pane_cp4_srt_ParamLimits

0x6d88,	// (0x0004ae4b) bg_active_tab_pane_cp4_srt

0xadbe,	// (0x0004ee81) tabs_2_long_active_pane_srt_t1_ParamLimits

0xadbe,	// (0x0004ee81) tabs_2_long_active_pane_srt_t1

0xadac,	// (0x0004ee6f) bg_active_tab_pane_g1_cp4_srt

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp4_srt

0xadb5,	// (0x0004ee78) bg_active_tab_pane_g3_cp4_srt

0x0a5c,	// (0x00044b1f) tabs_3_long_active_pane_srt_ParamLimits

0x0a5c,	// (0x00044b1f) tabs_3_long_active_pane_srt

0x0a5c,	// (0x00044b1f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0a5c,	// (0x00044b1f) tabs_3_long_passive_pane_cp_srt

0x0a5c,	// (0x00044b1f) tabs_3_long_passive_pane_srt_ParamLimits

0x0a5c,	// (0x00044b1f) tabs_3_long_passive_pane_srt

0x6da9,	// (0x0004ae6c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6da9,	// (0x0004ae6c) bg_passive_tab_pane_cp5_srt

0x7413,	// (0x0004b4d6) bg_passive_tab_pane_g1_cp5_srt

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp5_srt

0x741c,	// (0x0004b4df) bg_passive_tab_pane_g3_cp5_srt

0x6d88,	// (0x0004ae4b) bg_active_tab_pane_cp5_srt_ParamLimits

0x6d88,	// (0x0004ae4b) bg_active_tab_pane_cp5_srt

0xad9a,	// (0x0004ee5d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad9a,	// (0x0004ee5d) tabs_3_long_active_pane_srt_t1

0x7413,	// (0x0004b4d6) bg_active_tab_pane_g1_cp5_srt

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp5_srt

0x741c,	// (0x0004b4df) bg_active_tab_pane_g3_cp5_srt

0xad8c,	// (0x0004ee4f) navi_text_pane_srt_t1

0xad84,	// (0x0004ee47) navi_icon_pane_srt_g1

0x17bc,	// (0x0004587f) midp_editing_number_pane_srt

0x16e0,	// (0x000457a3) midp_ticker_pane_srt

0x17c4,	// (0x00045887) midp_ticker_pane_srt_g1

0x17cc,	// (0x0004588f) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x00053809) midp_ticker_pane_srt_g

0x17d4,	// (0x00045897) midp_ticker_pane_srt_t1

0xad75,	// (0x0004ee38) midp_editing_number_pane_t1_copy1

0x74b3,	// (0x0004b576) listscroll_midp_pane

0x74b3,	// (0x0004b576) midp_form_pane

0x7525,	// (0x0004b5e8) midp_info_popup_window_ParamLimits

0x7525,	// (0x0004b5e8) midp_info_popup_window

0x0efd,	// (0x00044fc0) bg_popup_sub_pane_cp50_ParamLimits

0x0efd,	// (0x00044fc0) bg_popup_sub_pane_cp50

0x9ec5,	// (0x0004df88) listscroll_midp_info_pane_ParamLimits

0x9ec5,	// (0x0004df88) listscroll_midp_info_pane

0x9ea5,	// (0x0004df68) listscroll_form_midp_pane_ParamLimits

0x9ea5,	// (0x0004df68) listscroll_form_midp_pane

0x9eb1,	// (0x0004df74) scroll_bar_cp050

0x9e85,	// (0x0004df48) list_midp_pane

0xbad2,	// (0x0004fb95) signal_pane_g2_cp

0x9dbf,	// (0x0004de82) listscroll_midp_info_pane_t1_ParamLimits

0x9dbf,	// (0x0004de82) listscroll_midp_info_pane_t1

0x9dd7,	// (0x0004de9a) listscroll_midp_info_pane_t2_ParamLimits

0x9dd7,	// (0x0004de9a) listscroll_midp_info_pane_t2

0x9e15,	// (0x0004ded8) listscroll_midp_info_pane_t3_ParamLimits

0x9e15,	// (0x0004ded8) listscroll_midp_info_pane_t3

0x9e4f,	// (0x0004df12) listscroll_midp_info_pane_t4_ParamLimits

0x9e4f,	// (0x0004df12) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x000538c1) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x000538c1) listscroll_midp_info_pane_t

0x0f52,	// (0x00045015) scroll_pane_cp21

0x9d5f,	// (0x0004de22) form_midp_field_choice_group_pane

0x9d68,	// (0x0004de2b) form_midp_field_text_pane

0x9da5,	// (0x0004de68) form_midp_field_time_pane

0x9dad,	// (0x0004de70) form_midp_gauge_slider_pane

0x9db6,	// (0x0004de79) form_midp_gauge_wait_pane

0x0a0e,	// (0x00044ad1) form_midp_image_pane

0x5bcb,	// (0x00049c8e) list_single_midp_pane_ParamLimits

0x5bcb,	// (0x00049c8e) list_single_midp_pane

0x9d14,	// (0x0004ddd7) form_midp_field_text_pane_t1

0x9ade,	// (0x0004dba1) input_focus_pane_cp050

0x9d4e,	// (0x0004de11) list_midp_form_text_pane

0x9ce3,	// (0x0004dda6) form_midp_field_choice_group_pane_t1

0x9cf1,	// (0x0004ddb4) input_focus_pane_cp051

0x9d05,	// (0x0004ddc8) list_midp_choice_pane

0x0a0e,	// (0x00044ad1) status_idle_pane

0x9cc7,	// (0x0004dd8a) form_midp_field_time_pane_t1

0x0a04,	// (0x00044ac7) wait_anim_pane_g2_copy1

0x9cd5,	// (0x0004dd98) form_midp_field_time_pane_t2

0x0001,

0x1740,	// (0x00045803) aid_navinavi_width_2_pane

0xf7f9,	// (0x000538bc) form_midp_field_time_pane_t

0x0a0e,	// (0x00044ad1) input_focus_pane_cp052

0x0a0e,	// (0x00044ad1) bg_input_focus_pane_cp040

0x9c87,	// (0x0004dd4a) form_midp_gauge_slider_pane_t1

0x9c95,	// (0x0004dd58) form_midp_gauge_slider_pane_t2

0x9ca3,	// (0x0004dd66) form_midp_gauge_slider_pane_t3

0x9cb1,	// (0x0004dd74) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x000538b3) form_midp_gauge_slider_pane_t

0x9cbf,	// (0x0004dd82) form_midp_slider_pane

0x0a6a,	// (0x00044b2d) bg_input_focus_pane_cp041_ParamLimits

0x0a6a,	// (0x00044b2d) bg_input_focus_pane_cp041

0x9c54,	// (0x0004dd17) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c54,	// (0x0004dd17) form_midp_gauge_wait_pane_t1

0x9c66,	// (0x0004dd29) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c66,	// (0x0004dd29) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x000538ae) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x000538ae) form_midp_gauge_wait_pane_t

0x9c78,	// (0x0004dd3b) form_midp_wait_pane_ParamLimits

0x9c78,	// (0x0004dd3b) form_midp_wait_pane

0x9c1e,	// (0x0004dce1) form_midp_image_pane_g1

0x9c27,	// (0x0004dcea) form_midp_image_pane_t1

0x9c36,	// (0x0004dcf9) form_midp_image_pane_t2

0x9c45,	// (0x0004dd08) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x000538a7) form_midp_image_pane_t

0x9c15,	// (0x0004dcd8) list_single_midp_pane_g1

0x5bbc,	// (0x00049c7f) list_single_midp_pane_t1

0x9bec,	// (0x0004dcaf) list_midp_form_item_pane_ParamLimits

0x9bec,	// (0x0004dcaf) list_midp_form_item_pane

0x16e8,	// (0x000457ab) list_midp_form_item_pane_t1

0x16f7,	// (0x000457ba) midp_ticker_pane_g1

0x1703,	// (0x000457c6) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x000537ef) midp_ticker_pane_g

0x170f,	// (0x000457d2) midp_ticker_pane_t1

0xafc2,	// (0x0004f085) midp_editing_number_pane_t1

0xafa0,	// (0x0004f063) midp_editing_number_pane

0xafaf,	// (0x0004f072) midp_ticker_pane

0x9ed1,	// (0x0004df94) ai_message_heading_pane

0x0a0e,	// (0x00044ad1) bg_popup_window_pane_cp14

0x9ed9,	// (0x0004df9c) listscroll_ai_message_pane

0xacff,	// (0x0004edc2) ai_message_heading_pane_g1_ParamLimits

0xacff,	// (0x0004edc2) ai_message_heading_pane_g1

0xad0b,	// (0x0004edce) ai_message_heading_pane_g2_ParamLimits

0xad0b,	// (0x0004edce) ai_message_heading_pane_g2

0xad17,	// (0x0004edda) ai_message_heading_pane_g3_ParamLimits

0xad17,	// (0x0004edda) ai_message_heading_pane_g3

0xad23,	// (0x0004ede6) ai_message_heading_pane_g4_ParamLimits

0xad23,	// (0x0004ede6) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x000539e8) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x000539e8) ai_message_heading_pane_g

0xad2f,	// (0x0004edf2) ai_message_heading_pane_t1_ParamLimits

0xad2f,	// (0x0004edf2) ai_message_heading_pane_t1

0xad49,	// (0x0004ee0c) ai_message_heading_pane_t2_ParamLimits

0xad49,	// (0x0004ee0c) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x000539f1) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x000539f1) ai_message_heading_pane_t

0xad5b,	// (0x0004ee1e) bg_popup_heading_pane_cp1_ParamLimits

0xad5b,	// (0x0004ee1e) bg_popup_heading_pane_cp1

0xaced,	// (0x0004edb0) list_ai_message_pane_ParamLimits

0xaced,	// (0x0004edb0) list_ai_message_pane

0x0f52,	// (0x00045015) scroll_pane_cp10

0xac89,	// (0x0004ed4c) list_ai_message_pane_g1

0xac91,	// (0x0004ed54) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x000539c5) list_ai_message_pane_g

0xac99,	// (0x0004ed5c) list_ai_message_pane_t1_ParamLimits

0xac99,	// (0x0004ed5c) list_ai_message_pane_t1

0xacae,	// (0x0004ed71) list_ai_message_pane_t2_ParamLimits

0xacae,	// (0x0004ed71) list_ai_message_pane_t2

0xacc3,	// (0x0004ed86) list_ai_message_pane_t3_ParamLimits

0xacc3,	// (0x0004ed86) list_ai_message_pane_t3

0xacd8,	// (0x0004ed9b) list_ai_message_pane_t4_ParamLimits

0xacd8,	// (0x0004ed9b) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x000539ca) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x000539ca) list_ai_message_pane_t

0xac74,	// (0x0004ed37) cell_ai_soft_ind_pane_ParamLimits

0xac74,	// (0x0004ed37) cell_ai_soft_ind_pane

0x1721,	// (0x000457e4) cell_ai_soft_ind_pane_g1_ParamLimits

0x1721,	// (0x000457e4) cell_ai_soft_ind_pane_g1

0x0a0e,	// (0x00044ad1) grid_highlight_cp1

0x172e,	// (0x000457f1) text_secondary_cp56_ParamLimits

0x172e,	// (0x000457f1) text_secondary_cp56

0xac49,	// (0x0004ed0c) example_general_pane_ParamLimits

0xac49,	// (0x0004ed0c) example_general_pane

0xac55,	// (0x0004ed18) example_parent_pane_g1_ParamLimits

0xac55,	// (0x0004ed18) example_parent_pane_g1

0xac61,	// (0x0004ed24) example_parent_pane_t1_ParamLimits

0xac61,	// (0x0004ed24) example_parent_pane_t1

0x7bf9,	// (0x0004bcbc) popup_preview_text_window_ParamLimits

0x7bf9,	// (0x0004bcbc) popup_preview_text_window

0x1637,	// (0x000456fa) list_single_pane_cp2_g4

0x0c3c,	// (0x00044cff) bg_popup_preview_window_pane_ParamLimits

0x0c3c,	// (0x00044cff) bg_popup_preview_window_pane

0xa9a3,	// (0x0004ea66) popup_preview_text_window_t1_ParamLimits

0xa9a3,	// (0x0004ea66) popup_preview_text_window_t1

0xa9c1,	// (0x0004ea84) popup_preview_text_window_t2_ParamLimits

0xa9c1,	// (0x0004ea84) popup_preview_text_window_t2

0xaa0a,	// (0x0004eacd) popup_preview_text_window_t3_ParamLimits

0xaa0a,	// (0x0004eacd) popup_preview_text_window_t3

0xaa4f,	// (0x0004eb12) popup_preview_text_window_t4_ParamLimits

0xaa4f,	// (0x0004eb12) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x00053999) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x00053999) popup_preview_text_window_t

0xaacd,	// (0x0004eb90) scroll_pane_cp11

0x9a52,	// (0x0004db15) bg_popup_preview_window_pane_g1

0xa963,	// (0x0004ea26) bg_popup_preview_window_pane_g2

0xa96b,	// (0x0004ea2e) bg_popup_preview_window_pane_g3

0xa973,	// (0x0004ea36) bg_popup_preview_window_pane_g4

0xa97b,	// (0x0004ea3e) bg_popup_preview_window_pane_g5

0xa983,	// (0x0004ea46) bg_popup_preview_window_pane_g6

0xa98b,	// (0x0004ea4e) bg_popup_preview_window_pane_g7

0xa993,	// (0x0004ea56) bg_popup_preview_window_pane_g8

0x629d,	// (0x0004a360) aid_popup_width_pane

0x7bd7,	// (0x0004bc9a) popup_midp_note_alarm_window_ParamLimits

0x7bd7,	// (0x0004bc9a) popup_midp_note_alarm_window

0x0e14,	// (0x00044ed7) data_form_pane_ParamLimits

0x5881,	// (0x00049944) form_field_data_pane_g1

0x588b,	// (0x0004994e) form_field_data_pane_t1_ParamLimits

0x0e20,	// (0x00044ee3) input_focus_pane_ParamLimits

0x58a3,	// (0x00049966) data_form_wide_pane_ParamLimits

0x58b4,	// (0x00049977) form_field_data_wide_pane_g1

0x58c0,	// (0x00049983) form_field_data_wide_pane_t1_ParamLimits

0x0d14,	// (0x00044dd7) input_focus_pane_cp6_ParamLimits

0x6d3f,	// (0x0004ae02) input_popup_find_pane_g1_ParamLimits

0x6d3f,	// (0x0004ae02) input_popup_find_pane_g1

0x6edf,	// (0x0004afa2) aid_navi_side_left_pane

0x6ef4,	// (0x0004afb7) aid_navi_side_right_pane

0xa38c,	// (0x0004e44f) bg_popup_window_pane_cp30_ParamLimits

0xa38c,	// (0x0004e44f) bg_popup_window_pane_cp30

0xa406,	// (0x0004e4c9) popup_midp_note_alarm_window_g1_ParamLimits

0xa406,	// (0x0004e4c9) popup_midp_note_alarm_window_g1

0xa436,	// (0x0004e4f9) popup_midp_note_alarm_window_t1_ParamLimits

0xa436,	// (0x0004e4f9) popup_midp_note_alarm_window_t1

0xa4d7,	// (0x0004e59a) popup_midp_note_alarm_window_t2_ParamLimits

0xa4d7,	// (0x0004e59a) popup_midp_note_alarm_window_t2

0xa585,	// (0x0004e648) popup_midp_note_alarm_window_t3_ParamLimits

0xa585,	// (0x0004e648) popup_midp_note_alarm_window_t3

0xa5ad,	// (0x0004e670) popup_midp_note_alarm_window_t4_ParamLimits

0xa5ad,	// (0x0004e670) popup_midp_note_alarm_window_t4

0xa5cd,	// (0x0004e690) popup_midp_note_alarm_window_t5_ParamLimits

0xa5cd,	// (0x0004e690) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x00053936) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x00053936) popup_midp_note_alarm_window_t

0xa679,	// (0x0004e73c) wait_bar_pane_cp1_ParamLimits

0xa679,	// (0x0004e73c) wait_bar_pane_cp1

0x0a0e,	// (0x00044ad1) wait_anim_pane_copy1

0x0a0e,	// (0x00044ad1) wait_border_pane_copy1

0xa082,	// (0x0004e145) wait_border_pane_g1_copy1

0x58da,	// (0x0004999d) form_field_popup_pane_g1

0x58e2,	// (0x000499a5) form_field_popup_pane_t1_ParamLimits

0x0e20,	// (0x00044ee3) input_focus_pane_cp7_ParamLimits

0x0e4e,	// (0x00044f11) list_form_pane_ParamLimits

0x58fa,	// (0x000499bd) form_field_popup_wide_pane_g1

0x5902,	// (0x000499c5) form_field_popup_wide_pane_t1_ParamLimits

0x0e20,	// (0x00044ee3) input_focus_pane_cp8_ParamLimits

0x0e5a,	// (0x00044f1d) list_form_wide_pane_ParamLimits

0xb104,	// (0x0004f1c7) aid_size_cell_graphic_pane

0x598c,	// (0x00049a4f) data_form_pane_t1_ParamLimits

0x5c0b,	// (0x00049cce) data_form_wide_pane_t1_ParamLimits

0x7ede,	// (0x0004bfa1) bg_status_flat_pane

0x66a2,	// (0x0004a765) title_pane_t1_ParamLimits

0x0a24,	// (0x00044ae7) title_pane_t2_ParamLimits

0x0a4a,	// (0x00044b0d) title_pane_t3_ParamLimits

0xf530,	// (0x000535f3) title_pane_t_ParamLimits

0x1207,	// (0x000452ca) level_1_signal_ParamLimits

0x1214,	// (0x000452d7) level_2_signal_ParamLimits

0x1221,	// (0x000452e4) level_3_signal_ParamLimits

0x122e,	// (0x000452f1) level_4_signal_ParamLimits

0x123b,	// (0x000452fe) level_5_signal_ParamLimits

0x1248,	// (0x0004530b) level_6_signal_ParamLimits

0x1255,	// (0x00045318) level_7_signal_ParamLimits

0x1207,	// (0x000452ca) level_1_battery_ParamLimits

0x1214,	// (0x000452d7) level_2_battery_ParamLimits

0x1221,	// (0x000452e4) level_3_battery_ParamLimits

0x122e,	// (0x000452f1) level_4_battery_ParamLimits

0x123b,	// (0x000452fe) level_5_battery_ParamLimits

0x1248,	// (0x0004530b) level_6_battery_ParamLimits

0x1255,	// (0x00045318) level_7_battery_ParamLimits

0xa291,	// (0x0004e354) bg_status_flat_pane_g1

0xa299,	// (0x0004e35c) bg_status_flat_pane_g2

0xa2a1,	// (0x0004e364) bg_status_flat_pane_g3

0xa2a9,	// (0x0004e36c) bg_status_flat_pane_g4

0xa2b1,	// (0x0004e374) bg_status_flat_pane_g5

0xa2b9,	// (0x0004e37c) bg_status_flat_pane_g6

0xa2c1,	// (0x0004e384) bg_status_flat_pane_g7

0x6712,	// (0x0004a7d5) tabs_3_active_pane_t1_ParamLimits

0x6712,	// (0x0004a7d5) tabs_3_passive_pane_t1_ParamLimits

0x672c,	// (0x0004a7ef) tabs_4_active_pane_t1_ParamLimits

0x672c,	// (0x0004a7ef) tabs_4_1_passive_pane_t1_ParamLimits

0x6d76,	// (0x0004ae39) tabs_2_active_pane_t1_ParamLimits

0x6d76,	// (0x0004ae39) tabs_2_passive_pane_t1_ParamLimits

0x6d88,	// (0x0004ae4b) bg_active_tab_pane_cp4_ParamLimits

0x6d96,	// (0x0004ae59) tabs_2_long_active_pane_t1_ParamLimits

0x6da9,	// (0x0004ae6c) bg_passive_tab_pane_cp4_ParamLimits

0x81cb,	// (0x0004c28e) list_single_midp_graphic_pane_t1_ParamLimits

0x6d88,	// (0x0004ae4b) bg_active_tab_pane_cp5_ParamLimits

0x6db5,	// (0x0004ae78) tabs_3_long_active_pane_t1_ParamLimits

0x6da9,	// (0x0004ae6c) bg_passive_tab_pane_cp5_ParamLimits

0x81cb,	// (0x0004c28e) list_single_midp_graphic_pane_t1

0x7ede,	// (0x0004bfa1) bg_status_flat_pane_ParamLimits

0x7fa7,	// (0x0004c06a) indicator_pane_cp2_ParamLimits

0x7fa7,	// (0x0004c06a) indicator_pane_cp2

0x80d2,	// (0x0004c195) navi_pane_srt_ParamLimits

0x80d2,	// (0x0004c195) navi_pane_srt

0x80f6,	// (0x0004c1b9) popup_clock_digital_analogue_window_cp1

0x0aae,	// (0x00044b71) indicator_pane_t1

0x16e0,	// (0x000457a3) copy_highlight_pane

0x16e0,	// (0x000457a3) cursor_graphics_pane

0x16e0,	// (0x000457a3) graphic_within_text_pane

0x16e0,	// (0x000457a3) link_highlight_pane

0xaa90,	// (0x0004eb53) popup_preview_text_window_t5_ParamLimits

0xaa90,	// (0x0004eb53) popup_preview_text_window_t5

0x1748,	// (0x0004580b) cursor_digital_pane

0x1748,	// (0x0004580b) cursor_primary_pane

0x1759,	// (0x0004581c) cursor_primary_small_pane

0x1761,	// (0x00045824) cursor_secondary_pane

0x1769,	// (0x0004582c) cursor_title_pane

0x1748,	// (0x0004580b) link_highlight_digital_pane

0x1750,	// (0x00045813) link_highlight_primary_pane

0x1759,	// (0x0004581c) link_highlight_primary_small_pane

0x1761,	// (0x00045824) link_highlight_secondary_pane

0x1769,	// (0x0004582c) link_highlight_title_pane

0x1748,	// (0x0004580b) copy_highlight_digital_pane

0x1748,	// (0x0004580b) copy_highlight_primary_pane

0x1759,	// (0x0004581c) copy_highlight_primary_small_pane

0x1761,	// (0x00045824) copy_highlight_secondary_pane

0x1769,	// (0x0004582c) copy_highlight_title_pane

0x1761,	// (0x00045824) graphic_text_digital_pane

0xa32f,	// (0x0004e3f2) graphic_text_primary_pane

0xa338,	// (0x0004e3fb) graphic_text_primary_small_pane

0x1759,	// (0x0004581c) graphic_text_secondary_pane

0x1748,	// (0x0004580b) graphic_text_title_pane

0x757d,	// (0x0004b640) cursor_primary_pane_g1

0xa321,	// (0x0004e3e4) cursor_text_primary_t1

0xa309,	// (0x0004e3cc) cursor_primary_small_pane_g1

0xa313,	// (0x0004e3d6) cursor_text_primary_small_t1

0xa2f1,	// (0x0004e3b4) cursor_primary_small_pane_g1_copy1

0xa2fb,	// (0x0004e3be) cursor_text_primary_small_t1_copy1

0xa2d9,	// (0x0004e39c) cursor_text_title_t1

0xa2e7,	// (0x0004e3aa) cursor_title_pane_g1

0x757d,	// (0x0004b640) cursor_digital_pane_g1

0x1771,	// (0x00045834) cursor_text_digital_t1

0x177f,	// (0x00045842) link_highlight_primary_pane_g1

0xa282,	// (0x0004e345) link_highlight_primary_pane_t1

0x177f,	// (0x00045842) link_highlight_primary_small_pane_g1

0x1787,	// (0x0004584a) link_highlight_primary_small_pane_t1

0x177f,	// (0x00045842) link_highlight_secondary_pane_g1

0x1796,	// (0x00045859) link_highlight_secondary_pane_t1

0xa1e7,	// (0x0004e2aa) link_highlight_title_pane_g1

0xa1fe,	// (0x0004e2c1) link_highlight_title_pane_t1

0xa1e7,	// (0x0004e2aa) link_highlight_digital_pane_g1

0xa1ef,	// (0x0004e2b2) link_highlight_digital_pane_t1

0xa0a1,	// (0x0004e164) copy_highlight_primary_pane_g1

0xa0c7,	// (0x0004e18a) copy_highlight_primary_pane_t1

0xa0a1,	// (0x0004e164) copy_highlight_primary_small_pane_g1

0xa0b8,	// (0x0004e17b) copy_highlight_primary_small_pane_t1

0x17a5,	// (0x00045868) copy_highlight_secondary_pane_g1

0x17ad,	// (0x00045870) copy_highlight_secondary_pane_t1

0xa0a1,	// (0x0004e164) copy_highlight_title_pane_g1

0xa0a9,	// (0x0004e16c) copy_highlight_title_pane_t1

0xa0a1,	// (0x0004e164) copy_highlight_digital_pane_g1

0xb2d2,	// (0x0004f395) copy_highlight_digital_pane_t1

0xb226,	// (0x0004f2e9) graphic_text_primary_pane_g1

0xb2b6,	// (0x0004f379) graphic_text_primary_pane_t1

0xb2c4,	// (0x0004f387) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x00053a65) graphic_text_primary_pane_t

0xb292,	// (0x0004f355) graphic_text_primary_small_pane_g1

0xb29a,	// (0x0004f35d) graphic_text_primary_small_pane_t1

0xb2a8,	// (0x0004f36b) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x00053a60) graphic_text_primary_small_pane_t

0xb26e,	// (0x0004f331) graphic_text_secondary_pane_g1

0xb276,	// (0x0004f339) graphic_text_secondary_pane_t1

0xb284,	// (0x0004f347) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x00053a5b) graphic_text_secondary_pane_t

0xb24a,	// (0x0004f30d) graphic_text_title_pane_g1

0xb252,	// (0x0004f315) graphic_text_title_pane_t1

0xb260,	// (0x0004f323) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x00053a56) graphic_text_title_pane_t

0xb226,	// (0x0004f2e9) graphic_text_digital_pane_g1

0xb22e,	// (0x0004f2f1) graphic_text_digital_pane_t1

0xb23c,	// (0x0004f2ff) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x00053a51) graphic_text_digital_pane_t

0x0a6a,	// (0x00044b2d) navi_icon_pane_srt_ParamLimits

0x0a6a,	// (0x00044b2d) navi_icon_pane_srt

0x0a0e,	// (0x00044ad1) navi_midp_pane_srt

0x0a0e,	// (0x00044ad1) navi_navi_pane_srt

0x0a6a,	// (0x00044b2d) navi_text_pane_srt_ParamLimits

0x0a6a,	// (0x00044b2d) navi_text_pane_srt

0xb1f1,	// (0x0004f2b4) navi_navi_icon_text_pane_srt

0xb1f9,	// (0x0004f2bc) navi_navi_pane_srt_g1_ParamLimits

0xb1f9,	// (0x0004f2bc) navi_navi_pane_srt_g1

0xb20b,	// (0x0004f2ce) navi_navi_pane_srt_g2_ParamLimits

0xb20b,	// (0x0004f2ce) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x00053a4c) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x00053a4c) navi_navi_pane_srt_g

0xb21d,	// (0x0004f2e0) navi_navi_tabs_pane_srt

0xb1f1,	// (0x0004f2b4) navi_navi_text_pane_srt

0xb1f1,	// (0x0004f2b4) navi_navi_volume_pane_srt

0xb1e2,	// (0x0004f2a5) navi_navi_text_pane_srt_t1

0x85f6,	// (0x0004c6b9) navi_navi_volume_pane_srt_g1

0x85fe,	// (0x0004c6c1) volume_small_pane_srt_ParamLimits

0x85fe,	// (0x0004c6c1) volume_small_pane_srt

0x7587,	// (0x0004b64a) volume_small_pane_srt_g1_ParamLimits

0x7587,	// (0x0004b64a) volume_small_pane_srt_g1

0x7597,	// (0x0004b65a) volume_small_pane_srt_g2_ParamLimits

0x7597,	// (0x0004b65a) volume_small_pane_srt_g2

0x75a8,	// (0x0004b66b) volume_small_pane_srt_g3_ParamLimits

0x75a8,	// (0x0004b66b) volume_small_pane_srt_g3

0x75b9,	// (0x0004b67c) volume_small_pane_srt_g4_ParamLimits

0x75b9,	// (0x0004b67c) volume_small_pane_srt_g4

0x75ca,	// (0x0004b68d) volume_small_pane_srt_g5_ParamLimits

0x75ca,	// (0x0004b68d) volume_small_pane_srt_g5

0x75db,	// (0x0004b69e) volume_small_pane_srt_g6_ParamLimits

0x75db,	// (0x0004b69e) volume_small_pane_srt_g6

0x75ec,	// (0x0004b6af) volume_small_pane_srt_g7_ParamLimits

0x75ec,	// (0x0004b6af) volume_small_pane_srt_g7

0x75fd,	// (0x0004b6c0) volume_small_pane_srt_g8_ParamLimits

0x75fd,	// (0x0004b6c0) volume_small_pane_srt_g8

0x760e,	// (0x0004b6d1) volume_small_pane_srt_g9_ParamLimits

0x760e,	// (0x0004b6d1) volume_small_pane_srt_g9

0x761f,	// (0x0004b6e2) volume_small_pane_srt_g10_ParamLimits

0x761f,	// (0x0004b6e2) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x000537f4) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x000537f4) volume_small_pane_srt_g

0x6979,	// (0x0004aa3c) query_popup_data_pane_cp2

0xb1c8,	// (0x0004f28b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1c8,	// (0x0004f28b) navi_navi_icon_text_pane_srt_t1

0xa32f,	// (0x0004e3f2) navi_tabs_2_long_pane_srt

0xa32f,	// (0x0004e3f2) navi_tabs_2_pane_srt

0xa32f,	// (0x0004e3f2) navi_tabs_3_long_pane_srt

0xa32f,	// (0x0004e3f2) navi_tabs_3_pane_srt

0xa32f,	// (0x0004e3f2) navi_tabs_4_pane_srt

0x85d6,	// (0x0004c699) tabs_2_active_pane_srt_ParamLimits

0x85d6,	// (0x0004c699) tabs_2_active_pane_srt

0x85e6,	// (0x0004c6a9) tabs_2_passive_pane_srt_ParamLimits

0x85e6,	// (0x0004c6a9) tabs_2_passive_pane_srt

0x0f62,	// (0x00045025) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0f62,	// (0x00045025) bg_passive_tab_pane_cp1_srt

0xb194,	// (0x0004f257) bg_passive_tab_pane_g1_cp1_srt

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp1_srt

0xb19d,	// (0x0004f260) bg_passive_tab_pane_g3_cp1_srt

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp1_srt_ParamLimits

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp1_srt

0xb1a6,	// (0x0004f269) tabs_2_active_pane_srt_g1

0xb1ae,	// (0x0004f271) tabs_2_active_pane_srt_t1_ParamLimits

0xb1ae,	// (0x0004f271) tabs_2_active_pane_srt_t1

0xb194,	// (0x0004f257) bg_active_tab_pane_g1_cp1_srt

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp1_srt

0xb19d,	// (0x0004f260) bg_active_tab_pane_g3_cp1_srt

0x85a3,	// (0x0004c666) tabs_3_active_pane_srt_ParamLimits

0x85a3,	// (0x0004c666) tabs_3_active_pane_srt

0x85b4,	// (0x0004c677) tabs_3_passive_pane_cp_srt_ParamLimits

0x85b4,	// (0x0004c677) tabs_3_passive_pane_cp_srt

0x85c5,	// (0x0004c688) tabs_3_passive_pane_srt_ParamLimits

0x85c5,	// (0x0004c688) tabs_3_passive_pane_srt

0x0f62,	// (0x00045025) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0f62,	// (0x00045025) bg_passive_tab_pane_cp2_srt

0x7630,	// (0x0004b6f3) bg_passive_tab_pane_g1_cp2_srt

0x7286,	// (0x0004b349) bg_passive_tab_pane_g2_cp2_srt

0x7639,	// (0x0004b6fc) bg_passive_tab_pane_g3_cp2_srt

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp2_srt_ParamLimits

0x0a6a,	// (0x00044b2d) bg_active_tab_pane_cp2_srt

0xb17a,	// (0x0004f23d) tabs_3_active_pane_srt_g1

0xb182,	// (0x0004f245) tabs_3_active_pane_srt_t1_ParamLimits

0xb182,	// (0x0004f245) tabs_3_active_pane_srt_t1

0x7630,	// (0x0004b6f3) bg_active_tab_pane_g1_cp2_srt

0x7286,	// (0x0004b349) bg_active_tab_pane_g2_cp2_srt

0x7639,	// (0x0004b6fc) bg_active_tab_pane_g3_cp2_srt

0x855b,	// (0x0004c61e) tabs_4_active_pane_srt_ParamLimits

0x855b,	// (0x0004c61e) tabs_4_active_pane_srt

0x856d,	// (0x0004c630) tabs_4_passive_pane_cp2_srt_ParamLimits

0x856d,	// (0x0004c630) tabs_4_passive_pane_cp2_srt

0x7852,	// (0x0004b915) aid_size_cell_toolbar

0x6da9,	// (0x0004ae6c) main_idle_act_pane_ParamLimits

0x7a09,	// (0x0004bacc) popup_large_graphic_colour_window_ParamLimits

0x7d74,	// (0x0004be37) popup_toolbar_window_ParamLimits

0x7d74,	// (0x0004be37) popup_toolbar_window

0xafd1,	// (0x0004f094) list_single_graphic_2heading_pane_ParamLimits

0xafd1,	// (0x0004f094) list_single_graphic_2heading_pane

0x10ef,	// (0x000451b2) aid_size_cell_apps_grid_lsc_pane

0x1101,	// (0x000451c4) aid_size_cell_apps_grid_prt_pane

0x0f62,	// (0x00045025) bg_wml_button_pane_cp1_ParamLimits

0x0f62,	// (0x00045025) bg_wml_button_pane_cp1

0x9d14,	// (0x0004ddd7) form_midp_field_text_pane_t1_ParamLimits

0x9ade,	// (0x0004dba1) input_focus_pane_cp050_ParamLimits

0x9d4e,	// (0x0004de11) list_midp_form_text_pane_ParamLimits

0x9cf1,	// (0x0004ddb4) input_focus_pane_cp051_ParamLimits

0x9d05,	// (0x0004ddc8) list_midp_choice_pane_ParamLimits

0x9b94,	// (0x0004dc57) list_single_2graphic_pane_cp3_ParamLimits

0x9b94,	// (0x0004dc57) list_single_2graphic_pane_cp3

0x9bb9,	// (0x0004dc7c) list_single_midp_graphic_pane_ParamLimits

0x9bb9,	// (0x0004dc7c) list_single_midp_graphic_pane

0x5a9a,	// (0x00049b5d) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a9a,	// (0x00049b5d) list_single_graphic_2heading_pane_g1

0x5aa6,	// (0x00049b69) list_single_graphic_2heading_pane_g4_ParamLimits

0x5aa6,	// (0x00049b69) list_single_graphic_2heading_pane_g4

0x5ab2,	// (0x00049b75) list_single_graphic_2heading_pane_g5_ParamLimits

0x5ab2,	// (0x00049b75) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x00053847) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x00053847) list_single_graphic_2heading_pane_g

0x5abe,	// (0x00049b81) list_single_graphic_2heading_pane_t1_ParamLimits

0x5abe,	// (0x00049b81) list_single_graphic_2heading_pane_t1

0x5ad2,	// (0x00049b95) list_single_graphic_2heading_pane_t2_ParamLimits

0x5ad2,	// (0x00049b95) list_single_graphic_2heading_pane_t2

0x5aec,	// (0x00049baf) list_single_graphic_2heading_pane_t3_ParamLimits

0x5aec,	// (0x00049baf) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x0005384e) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x0005384e) list_single_graphic_2heading_pane_t

0x9990,	// (0x0004da53) bg_popup_sub_pane_cp2

0x99ba,	// (0x0004da7d) grid_toobar_pane

0x8142,	// (0x0004c205) cell_toolbar_pane_ParamLimits

0x8142,	// (0x0004c205) cell_toolbar_pane

0x99f6,	// (0x0004dab9) cell_toolbar_pane_g1_ParamLimits

0x99f6,	// (0x0004dab9) cell_toolbar_pane_g1

0x9a0a,	// (0x0004dacd) cell_toolbar_pane_g2_ParamLimits

0x9a0a,	// (0x0004dacd) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x0005385c) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x0005385c) cell_toolbar_pane_g

0x9a2c,	// (0x0004daef) grid_highlight_pane_cp2_ParamLimits

0x9a2c,	// (0x0004daef) grid_highlight_pane_cp2

0x9a46,	// (0x0004db09) toolbar_button_pane

0x9a52,	// (0x0004db15) toolbar_button_pane_g1

0x9a5a,	// (0x0004db1d) toolbar_button_pane_g2

0x9a62,	// (0x0004db25) toolbar_button_pane_g3

0x9a6a,	// (0x0004db2d) toolbar_button_pane_g4

0x9a72,	// (0x0004db35) toolbar_button_pane_g5

0x9a7a,	// (0x0004db3d) toolbar_button_pane_g6

0x9a82,	// (0x0004db45) toolbar_button_pane_g7

0x9a8a,	// (0x0004db4d) toolbar_button_pane_g8

0x9a92,	// (0x0004db55) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x00053861) toolbar_button_pane_g

0x8186,	// (0x0004c249) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8186,	// (0x0004c249) list_single_2graphic_pane_g1_cp3

0x8192,	// (0x0004c255) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8192,	// (0x0004c255) list_single_2graphic_pane_g2_cp3

0x1531,	// (0x000455f4) list_single_2graphic_pane_g3_cp3

0x81a3,	// (0x0004c266) list_single_2graphic_pane_g4_cp3_ParamLimits

0x81a3,	// (0x0004c266) list_single_2graphic_pane_g4_cp3

0x81af,	// (0x0004c272) list_single_2graphic_pane_t1_cp3_ParamLimits

0x81af,	// (0x0004c272) list_single_2graphic_pane_t1_cp3

0x1525,	// (0x000455e8) list_single_midp_graphic_pane_g2_ParamLimits

0x1525,	// (0x000455e8) list_single_midp_graphic_pane_g2

0x5a8a,	// (0x00049b4d) aid_zoom_text_primary

0x785a,	// (0x0004b91d) aid_zoom_text_secondary

0x1822,	// (0x000458e5) status_small_pane_g7_ParamLimits

0x1822,	// (0x000458e5) status_small_pane_g7

0x7693,	// (0x0004b756) status_small_pane_t1_ParamLimits

0x6685,	// (0x0004a748) title_pane_g2

0x0003,

0xf527,	// (0x000535ea) title_pane_g

0x69d3,	// (0x0004aa96) aid_size_cell_colour_1_pane_ParamLimits

0x69d3,	// (0x0004aa96) aid_size_cell_colour_1_pane

0x69e7,	// (0x0004aaaa) aid_size_cell_colour_2_pane_ParamLimits

0x69e7,	// (0x0004aaaa) aid_size_cell_colour_2_pane

0x69fb,	// (0x0004aabe) aid_size_cell_colour_3_pane_ParamLimits

0x69fb,	// (0x0004aabe) aid_size_cell_colour_3_pane

0x6a0f,	// (0x0004aad2) aid_size_cell_colour_4_pane_ParamLimits

0x6a0f,	// (0x0004aad2) aid_size_cell_colour_4_pane

0x6e1c,	// (0x0004aedf) title_pane_stacon_g1_ParamLimits

0x6e1c,	// (0x0004aedf) title_pane_stacon_g1

0xa11e,	// (0x0004e1e1) popup_note_wait_window_g3_ParamLimits

0xa11e,	// (0x0004e1e1) popup_note_wait_window_g3

0xa194,	// (0x0004e257) popup_note_wait_window_t5_ParamLimits

0xa194,	// (0x0004e257) popup_note_wait_window_t5

0x0a0e,	// (0x00044ad1) main_feb_china_hwr_fs_writing_pane

0x78f0,	// (0x0004b9b3) popup_feb_china_hwr_fs_window_ParamLimits

0x78f0,	// (0x0004b9b3) popup_feb_china_hwr_fs_window

0x81e1,	// (0x0004c2a4) aid_size_cell_hwr_fs_ParamLimits

0x81e1,	// (0x0004c2a4) aid_size_cell_hwr_fs

0x9ade,	// (0x0004dba1) bg_popup_sub_pane_cp3_ParamLimits

0x9ade,	// (0x0004dba1) bg_popup_sub_pane_cp3

0x81f6,	// (0x0004c2b9) grid_hwr_fs_pane_ParamLimits

0x81f6,	// (0x0004c2b9) grid_hwr_fs_pane

0x820e,	// (0x0004c2d1) linegrid_hwr_fs_pane_ParamLimits

0x820e,	// (0x0004c2d1) linegrid_hwr_fs_pane

0x821e,	// (0x0004c2e1) cell_hwr_fs_pane_ParamLimits

0x821e,	// (0x0004c2e1) cell_hwr_fs_pane

0x9aea,	// (0x0004dbad) linegrid_hwr_fs_pane_g1_ParamLimits

0x9aea,	// (0x0004dbad) linegrid_hwr_fs_pane_g1

0x9af6,	// (0x0004dbb9) linegrid_hwr_fs_pane_g2_ParamLimits

0x9af6,	// (0x0004dbb9) linegrid_hwr_fs_pane_g2

0x9b08,	// (0x0004dbcb) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b08,	// (0x0004dbcb) linegrid_hwr_fs_pane_g3

0x8240,	// (0x0004c303) linegrid_hwr_fs_pane_g4_ParamLimits

0x8240,	// (0x0004c303) linegrid_hwr_fs_pane_g4

0x825a,	// (0x0004c31d) linegrid_hwr_fs_pane_g5_ParamLimits

0x825a,	// (0x0004c31d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x0005388c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x0005388c) linegrid_hwr_fs_pane_g

0x9b14,	// (0x0004dbd7) cell_hwr_fs_pane_g1_ParamLimits

0x9b14,	// (0x0004dbd7) cell_hwr_fs_pane_g1

0x98ca,	// (0x0004d98d) cell_hwr_fs_pane_g2_ParamLimits

0x98ca,	// (0x0004d98d) cell_hwr_fs_pane_g2

0x9b2a,	// (0x0004dbed) cell_hwr_fs_pane_g3_ParamLimits

0x9b2a,	// (0x0004dbed) cell_hwr_fs_pane_g3

0x9b37,	// (0x0004dbfa) cell_hwr_fs_pane_g4_ParamLimits

0x9b37,	// (0x0004dbfa) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x00053897) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x00053897) cell_hwr_fs_pane_g

0x8270,	// (0x0004c333) cell_hwr_fs_pane_t1

0x0a0e,	// (0x00044ad1) grid_highlight_pane_cp6

0x0a0e,	// (0x00044ad1) main_idle_act2_pane

0x0f39,	// (0x00044ffc) aid_inside_area_popup_secondary

0xa7b3,	// (0x0004e876) aid_inside_area_window_primary_ParamLimits

0xa7b3,	// (0x0004e876) aid_inside_area_window_primary

0xb2e1,	// (0x0004f3a4) ai2_news_ticker_pane

0xb2e9,	// (0x0004f3ac) aid_size_cell_ai1_link_ParamLimits

0xb2e9,	// (0x0004f3ac) aid_size_cell_ai1_link

0xb303,	// (0x0004f3c6) popup_ai2_data_window_ParamLimits

0xb303,	// (0x0004f3c6) popup_ai2_data_window

0xb319,	// (0x0004f3dc) popup_ai2_link_window_ParamLimits

0xb319,	// (0x0004f3dc) popup_ai2_link_window

0x9ade,	// (0x0004dba1) bg_popup_sub_pane_cp4_ParamLimits

0x9ade,	// (0x0004dba1) bg_popup_sub_pane_cp4

0xb32d,	// (0x0004f3f0) grid_ai2_link_pane_ParamLimits

0xb32d,	// (0x0004f3f0) grid_ai2_link_pane

0xb344,	// (0x0004f407) popup_ai2_link_window_g1_ParamLimits

0xb344,	// (0x0004f407) popup_ai2_link_window_g1

0xb350,	// (0x0004f413) popup_ai2_link_window_g2_ParamLimits

0xb350,	// (0x0004f413) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x00053a6a) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x00053a6a) popup_ai2_link_window_g

0xb35f,	// (0x0004f422) ai2_mp_button_pane

0xb367,	// (0x0004f42a) ai2_mp_volume_pane

0x9cf1,	// (0x0004ddb4) bg_popup_sub_pane_cp5_ParamLimits

0x9cf1,	// (0x0004ddb4) bg_popup_sub_pane_cp5

0xb36f,	// (0x0004f432) heading_ai2_gene_pane_ParamLimits

0xb36f,	// (0x0004f432) heading_ai2_gene_pane

0xb37b,	// (0x0004f43e) list_ai2_gene_pane_ParamLimits

0xb37b,	// (0x0004f43e) list_ai2_gene_pane

0xb3c3,	// (0x0004f486) cell_ai2_link_pane_ParamLimits

0xb3c3,	// (0x0004f486) cell_ai2_link_pane

0xb3d9,	// (0x0004f49c) cell_ai2_link_pane_g1

0x0a0e,	// (0x00044ad1) grid_highlight_pane_cp7

0x8613,	// (0x0004c6d6) ai2_mp_volume_pane_g1

0xb4a9,	// (0x0004f56c) ai2_mp_volume_pane_g2

0xb41e,	// (0x0004f4e1) list_ai2_gene_pane_t1

0xb4b1,	// (0x0004f574) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x00053a83) ai2_mp_volume_pane_g

0x861b,	// (0x0004c6de) volume_small_pane_cp3

0xb4b9,	// (0x0004f57c) aid_size_cell_ai2_button

0xb4c1,	// (0x0004f584) grid_ai2_button_pane

0xb4ca,	// (0x0004f58d) cell_ai2_button_pane_ParamLimits

0xb4ca,	// (0x0004f58d) cell_ai2_button_pane

0x0a04,	// (0x00044ac7) cell_ai2_button_pane_g1

0x0a0e,	// (0x00044ad1) grid_highlight_pane_cp8

0xb469,	// (0x0004f52c) ai2_gene_pane_t1_ParamLimits

0xb469,	// (0x0004f52c) ai2_gene_pane_t1

0x7848,	// (0x0004b90b) aid_height_parent_landscape

0xae0c,	// (0x0004eecf) aid_height_set_list

0xae1d,	// (0x0004eee0) aid_size_parent

0xb104,	// (0x0004f1c7) aid_size_cell_graphic_pane_ParamLimits

0xb38b,	// (0x0004f44e) popup_ai2_data_window_g1_ParamLimits

0xb38b,	// (0x0004f44e) popup_ai2_data_window_g1

0xb397,	// (0x0004f45a) ai2_news_ticker_pane_g1

0xb39f,	// (0x0004f462) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x00053a6f) ai2_news_ticker_pane_g

0xb3a7,	// (0x0004f46a) ai2_news_ticker_pane_t1

0xb3b5,	// (0x0004f478) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x00053a74) ai2_news_ticker_pane_t

0xb3e2,	// (0x0004f4a5) heading_ai2_gene_pane_g1

0xb3ea,	// (0x0004f4ad) heading_ai2_gene_pane_t1_ParamLimits

0xb3ea,	// (0x0004f4ad) heading_ai2_gene_pane_t1

0xb3ff,	// (0x0004f4c2) list_highlight_pane_cp6

0xb407,	// (0x0004f4ca) ai2_gene_pane_ParamLimits

0xb407,	// (0x0004f4ca) ai2_gene_pane

0xb42c,	// (0x0004f4ef) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x00053a79) list_ai2_gene_pane_t

0xb43a,	// (0x0004f4fd) list_highlight_pane_cp8_ParamLimits

0xb43a,	// (0x0004f4fd) list_highlight_pane_cp8

0xb44b,	// (0x0004f50e) ai2_gene_pane_g1_ParamLimits

0xb44b,	// (0x0004f50e) ai2_gene_pane_g1

0xb45d,	// (0x0004f520) ai2_gene_pane_g2_ParamLimits

0xb45d,	// (0x0004f520) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x00053a7e) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x00053a7e) ai2_gene_pane_g

0x0dbf,	// (0x00044e82) scroll_pane_cp12

0x7805,	// (0x0004b8c8) control_pane_t3_ParamLimits

0x7805,	// (0x0004b8c8) control_pane_t3

0x7684,	// (0x0004b747) status_small_pane_g8_ParamLimits

0x7684,	// (0x0004b747) status_small_pane_g8

0x79d2,	// (0x0004ba95) popup_find_window_ParamLimits

0x7beb,	// (0x0004bcae) popup_note_image_window_ParamLimits

0x5b04,	// (0x00049bc7) list_double2_graphic_pane_vc_g1_ParamLimits

0x5b04,	// (0x00049bc7) list_double2_graphic_pane_vc_g1

0x163f,	// (0x00045702) list_double2_graphic_pane_vc_g2_ParamLimits

0x163f,	// (0x00045702) list_double2_graphic_pane_vc_g2

0x8172,	// (0x0004c235) list_double2_graphic_pane_vc_g3_ParamLimits

0x8172,	// (0x0004c235) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x00053855) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x00053855) list_double2_graphic_pane_vc_g

0x5b10,	// (0x00049bd3) list_double2_graphic_pane_vc_t1_ParamLimits

0x5b10,	// (0x00049bd3) list_double2_graphic_pane_vc_t1

0x163f,	// (0x00045702) list_single_heading_pane_vc_g1_ParamLimits

0x163f,	// (0x00045702) list_single_heading_pane_vc_g1

0x8172,	// (0x0004c235) list_single_heading_pane_vc_g2_ParamLimits

0x8172,	// (0x0004c235) list_single_heading_pane_vc_g2

0x0001,

0xf7b3,	// (0x00053876) list_single_heading_pane_vc_g_ParamLimits

0xf7b3,	// (0x00053876) list_single_heading_pane_vc_g

0x5b26,	// (0x00049be9) list_single_heading_pane_vc_t1_ParamLimits

0x5b26,	// (0x00049be9) list_single_heading_pane_vc_t1

0x5b3c,	// (0x00049bff) list_single_heading_pane_vc_t2_ParamLimits

0x5b3c,	// (0x00049bff) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x0005387b) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x0005387b) list_single_heading_pane_vc_t

0x9a9a,	// (0x0004db5d) list_setting_number_pane_vc_g1_ParamLimits

0x9a9a,	// (0x0004db5d) list_setting_number_pane_vc_g1

0x9aa6,	// (0x0004db69) list_setting_number_pane_vc_g2_ParamLimits

0x9aa6,	// (0x0004db69) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x00053880) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x00053880) list_setting_number_pane_vc_g

0x5b52,	// (0x00049c15) list_setting_number_pane_vc_t1_ParamLimits

0x5b52,	// (0x00049c15) list_setting_number_pane_vc_t1

0x5b66,	// (0x00049c29) list_setting_number_pane_vc_t2_ParamLimits

0x5b66,	// (0x00049c29) list_setting_number_pane_vc_t2

0x5b82,	// (0x00049c45) list_setting_number_pane_vc_t3_ParamLimits

0x5b82,	// (0x00049c45) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x00053885) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x00053885) list_setting_number_pane_vc_t

0x5bac,	// (0x00049c6f) set_value_pane_vc_ParamLimits

0x5bac,	// (0x00049c6f) set_value_pane_vc

0xafd1,	// (0x0004f094) list_double2_graphic_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_double2_graphic_pane_vc

0x84cc,	// (0x0004c58f) list_double2_large_graphic_pane_vc_ParamLimits

0x84cc,	// (0x0004c58f) list_double2_large_graphic_pane_vc

0xafd1,	// (0x0004f094) list_double2_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_double2_pane_vc

0xafd1,	// (0x0004f094) list_double_graphic_heading_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_double_graphic_heading_pane_vc

0xafd1,	// (0x0004f094) list_double_graphic_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_double_graphic_pane_vc

0xafd1,	// (0x0004f094) list_double_heading_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_double_heading_pane_vc

0x84de,	// (0x0004c5a1) list_double_large_graphic_pane_vc_ParamLimits

0x84de,	// (0x0004c5a1) list_double_large_graphic_pane_vc

0xafd1,	// (0x0004f094) list_double_number_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_double_number_pane_vc

0xafd1,	// (0x0004f094) list_double_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_double_pane_vc

0xafd1,	// (0x0004f094) list_double_time_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_double_time_pane_vc

0xafd1,	// (0x0004f094) list_setting_number_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_setting_number_pane_vc

0xafd1,	// (0x0004f094) list_setting_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_setting_pane_vc

0xafd1,	// (0x0004f094) list_single_graphic_heading_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_single_graphic_heading_pane_vc

0xafd1,	// (0x0004f094) list_single_heading_pane_vc_ParamLimits

0xafd1,	// (0x0004f094) list_single_heading_pane_vc

0x84fc,	// (0x0004c5bf) list_single_number_heading_pane_vc_ParamLimits

0x84fc,	// (0x0004c5bf) list_single_number_heading_pane_vc

0x5cb1,	// (0x00049d74) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5cb1,	// (0x00049d74) list_double_graphic_heading_pane_vc_g1

0x6c5b,	// (0x0004ad1e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6c5b,	// (0x0004ad1e) list_double_graphic_heading_pane_vc_g2

0x6c67,	// (0x0004ad2a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6c67,	// (0x0004ad2a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c7,	// (0x00053a8a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c7,	// (0x00053a8a) list_double_graphic_heading_pane_vc_g

0x5cbd,	// (0x00049d80) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5cbd,	// (0x00049d80) list_double_graphic_heading_pane_vc_t1

0x5cd1,	// (0x00049d94) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5cd1,	// (0x00049d94) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x00053a91) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x00053a91) list_double_graphic_heading_pane_vc_t

0x9a9a,	// (0x0004db5d) list_setting_pane_vc_g1_ParamLimits

0x9a9a,	// (0x0004db5d) list_setting_pane_vc_g1

0x9aa6,	// (0x0004db69) list_setting_pane_vc_g2_ParamLimits

0x9aa6,	// (0x0004db69) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x00053880) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x00053880) list_setting_pane_vc_g

0x5ce9,	// (0x00049dac) list_setting_pane_vc_t1_ParamLimits

0x5ce9,	// (0x00049dac) list_setting_pane_vc_t1

0x5d05,	// (0x00049dc8) list_setting_pane_vc_t2_ParamLimits

0x5d05,	// (0x00049dc8) list_setting_pane_vc_t2

0x0001,

0xfa11,	// (0x00053ad4) list_setting_pane_vc_t_ParamLimits

0xfa11,	// (0x00053ad4) list_setting_pane_vc_t

0x5bac,	// (0x00049c6f) set_value_pane_cp_vc_ParamLimits

0x5bac,	// (0x00049c6f) set_value_pane_cp_vc

0x163f,	// (0x00045702) list_single_number_heading_pane_vc_g1_ParamLimits

0x163f,	// (0x00045702) list_single_number_heading_pane_vc_g1

0x8172,	// (0x0004c235) list_single_number_heading_pane_vc_g2_ParamLimits

0x8172,	// (0x0004c235) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b3,	// (0x00053876) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b3,	// (0x00053876) list_single_number_heading_pane_vc_g

0x5d1f,	// (0x00049de2) list_single_number_heading_pane_vc_t1_ParamLimits

0x5d1f,	// (0x00049de2) list_single_number_heading_pane_vc_t1

0x5d35,	// (0x00049df8) list_single_number_heading_pane_vc_t2_ParamLimits

0x5d35,	// (0x00049df8) list_single_number_heading_pane_vc_t2

0x5d4b,	// (0x00049e0e) list_single_number_heading_pane_vc_t3_ParamLimits

0x5d4b,	// (0x00049e0e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa16,	// (0x00053ad9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x00053ad9) list_single_number_heading_pane_vc_t

0x5d5d,	// (0x00049e20) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5d5d,	// (0x00049e20) list_single_graphic_heading_pane_vc_g1

0x163f,	// (0x00045702) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x163f,	// (0x00045702) list_single_graphic_heading_pane_vc_g4

0x8172,	// (0x0004c235) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8172,	// (0x0004c235) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1d,	// (0x00053ae0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1d,	// (0x00053ae0) list_single_graphic_heading_pane_vc_g

0x5d1f,	// (0x00049de2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5d1f,	// (0x00049de2) list_single_graphic_heading_pane_vc_t1

0x5d69,	// (0x00049e2c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5d69,	// (0x00049e2c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x00053ae7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x00053ae7) list_single_graphic_heading_pane_vc_t

0x163f,	// (0x00045702) list_double2_pane_vc_g1_ParamLimits

0x163f,	// (0x00045702) list_double2_pane_vc_g1

0x8172,	// (0x0004c235) list_double2_pane_vc_g2_ParamLimits

0x8172,	// (0x0004c235) list_double2_pane_vc_g2

0x0001,

0xf7b3,	// (0x00053876) list_double2_pane_vc_g_ParamLimits

0xf7b3,	// (0x00053876) list_double2_pane_vc_g

0x5d7b,	// (0x00049e3e) list_double2_pane_vc_t1_ParamLimits

0x5d7b,	// (0x00049e3e) list_double2_pane_vc_t1

0x8675,	// (0x0004c738) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x8675,	// (0x0004c738) list_double2_large_graphic_pane_vc_g1

0x6c96,	// (0x0004ad59) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6c96,	// (0x0004ad59) list_double2_large_graphic_pane_vc_g2

0x6ca2,	// (0x0004ad65) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6ca2,	// (0x0004ad65) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa29,	// (0x00053aec) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa29,	// (0x00053aec) list_double2_large_graphic_pane_vc_g

0x5d93,	// (0x00049e56) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5d93,	// (0x00049e56) list_double2_large_graphic_pane_vc_t1

0x8681,	// (0x0004c744) list_double_time_pane_vc_g1_ParamLimits

0x8681,	// (0x0004c744) list_double_time_pane_vc_g1

0x868d,	// (0x0004c750) list_double_time_pane_vc_g2_ParamLimits

0x868d,	// (0x0004c750) list_double_time_pane_vc_g2

0x0001,

0xfa30,	// (0x00053af3) list_double_time_pane_vc_g_ParamLimits

0xfa30,	// (0x00053af3) list_double_time_pane_vc_g

0x5da9,	// (0x00049e6c) list_double_time_pane_vc_t1_ParamLimits

0x5da9,	// (0x00049e6c) list_double_time_pane_vc_t1

0x5dcd,	// (0x00049e90) list_double_time_pane_vc_t2_ParamLimits

0x5dcd,	// (0x00049e90) list_double_time_pane_vc_t2

0x5e1c,	// (0x00049edf) list_double_time_pane_vc_t3_ParamLimits

0x5e1c,	// (0x00049edf) list_double_time_pane_vc_t3

0x5e2e,	// (0x00049ef1) list_double_time_pane_vc_t4_ParamLimits

0x5e2e,	// (0x00049ef1) list_double_time_pane_vc_t4

0x0003,

0xfa35,	// (0x00053af8) list_double_time_pane_vc_t_ParamLimits

0xfa35,	// (0x00053af8) list_double_time_pane_vc_t

0x163f,	// (0x00045702) list_double_pane_vc_g1_ParamLimits

0x163f,	// (0x00045702) list_double_pane_vc_g1

0x8172,	// (0x0004c235) list_double_pane_vc_g2_ParamLimits

0x8172,	// (0x0004c235) list_double_pane_vc_g2

0x0001,

0xf7b3,	// (0x00053876) list_double_pane_vc_g_ParamLimits

0xf7b3,	// (0x00053876) list_double_pane_vc_g

0x5e42,	// (0x00049f05) list_double_pane_vc_t1_ParamLimits

0x5e42,	// (0x00049f05) list_double_pane_vc_t1

0x5e56,	// (0x00049f19) list_double_pane_vc_t2_ParamLimits

0x5e56,	// (0x00049f19) list_double_pane_vc_t2

0x0001,

0xfa3e,	// (0x00053b01) list_double_pane_vc_t_ParamLimits

0xfa3e,	// (0x00053b01) list_double_pane_vc_t

0x163f,	// (0x00045702) list_double_number_pane_vc_g1_ParamLimits

0x163f,	// (0x00045702) list_double_number_pane_vc_g1

0x8172,	// (0x0004c235) list_double_number_pane_vc_g2_ParamLimits

0x8172,	// (0x0004c235) list_double_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x00053876) list_double_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x00053876) list_double_number_pane_vc_g

0x5e6e,	// (0x00049f31) list_double_number_pane_vc_t1_ParamLimits

0x5e6e,	// (0x00049f31) list_double_number_pane_vc_t1

0x5e42,	// (0x00049f05) list_double_number_pane_vc_t2_ParamLimits

0x5e42,	// (0x00049f05) list_double_number_pane_vc_t2

0x5e80,	// (0x00049f43) list_double_number_pane_vc_t3_ParamLimits

0x5e80,	// (0x00049f43) list_double_number_pane_vc_t3

0x0002,

0xfa43,	// (0x00053b06) list_double_number_pane_vc_t_ParamLimits

0xfa43,	// (0x00053b06) list_double_number_pane_vc_t

0x8699,	// (0x0004c75c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x8699,	// (0x0004c75c) list_double_large_graphic_pane_vc_g1

0x86b5,	// (0x0004c778) list_double_large_graphic_pane_vc_g2_ParamLimits

0x86b5,	// (0x0004c778) list_double_large_graphic_pane_vc_g2

0x86c9,	// (0x0004c78c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x86c9,	// (0x0004c78c) list_double_large_graphic_pane_vc_g3

0x5e9a,	// (0x00049f5d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5e9a,	// (0x00049f5d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4a,	// (0x00053b0d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x00053b0d) list_double_large_graphic_pane_vc_g

0x5ea9,	// (0x00049f6c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5ea9,	// (0x00049f6c) list_double_large_graphic_pane_vc_t1

0x5ec5,	// (0x00049f88) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5ec5,	// (0x00049f88) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa53,	// (0x00053b16) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa53,	// (0x00053b16) list_double_large_graphic_pane_vc_t

0x6c5b,	// (0x0004ad1e) list_double_heading_pane_vc_g1_ParamLimits

0x6c5b,	// (0x0004ad1e) list_double_heading_pane_vc_g1

0x6c67,	// (0x0004ad2a) list_double_heading_pane_vc_g2_ParamLimits

0x6c67,	// (0x0004ad2a) list_double_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005366e) list_double_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005366e) list_double_heading_pane_vc_g

0x5ee7,	// (0x00049faa) list_double_heading_pane_vc_t1_ParamLimits

0x5ee7,	// (0x00049faa) list_double_heading_pane_vc_t1

0x5efb,	// (0x00049fbe) list_double_heading_pane_vc_t2_ParamLimits

0x5efb,	// (0x00049fbe) list_double_heading_pane_vc_t2

0x0001,

0xfa58,	// (0x00053b1b) list_double_heading_pane_vc_t_ParamLimits

0xfa58,	// (0x00053b1b) list_double_heading_pane_vc_t

0x5f13,	// (0x00049fd6) list_double_graphic_pane_vc_g1_ParamLimits

0x5f13,	// (0x00049fd6) list_double_graphic_pane_vc_g1

0x86d8,	// (0x0004c79b) list_double_graphic_pane_vc_g2_ParamLimits

0x86d8,	// (0x0004c79b) list_double_graphic_pane_vc_g2

0x163f,	// (0x00045702) list_double_graphic_pane_vc_g3_ParamLimits

0x163f,	// (0x00045702) list_double_graphic_pane_vc_g3

0x0003,

0xfa5d,	// (0x00053b20) list_double_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x00053b20) list_double_graphic_pane_vc_g

0x5f26,	// (0x00049fe9) list_double_graphic_pane_vc_t1_ParamLimits

0x5f26,	// (0x00049fe9) list_double_graphic_pane_vc_t1

0x5f45,	// (0x0004a008) list_double_graphic_pane_vc_t2_ParamLimits

0x5f45,	// (0x0004a008) list_double_graphic_pane_vc_t2

0x0001,

0xfa66,	// (0x00053b29) list_double_graphic_pane_vc_t_ParamLimits

0xfa66,	// (0x00053b29) list_double_graphic_pane_vc_t

0x62a9,	// (0x0004a36c) aid_size_cell_fastswap

0x62b1,	// (0x0004a374) aid_size_cell_touch_ParamLimits

0x62b1,	// (0x0004a374) aid_size_cell_touch

0x6512,	// (0x0004a5d5) popup_fast_swap_wide_window_ParamLimits

0x6512,	// (0x0004a5d5) popup_fast_swap_wide_window

0x6618,	// (0x0004a6db) touch_pane_ParamLimits

0x6618,	// (0x0004a6db) touch_pane

0x0e0c,	// (0x00044ecf) button_value_adjust_pane_cp2

0x57d1,	// (0x00049894) button_value_adjust_pane_cp4

0x57f3,	// (0x000498b6) form_field_data_pane_cp2

0x5814,	// (0x000498d7) form_field_data_wide_pane_cp2

0x1126,	// (0x000451e9) bg_scroll_pane_ParamLimits

0x7016,	// (0x0004b0d9) scroll_handle_pane_ParamLimits

0x702a,	// (0x0004b0ed) scroll_sc2_down_pane_ParamLimits

0x702a,	// (0x0004b0ed) scroll_sc2_down_pane

0x1157,	// (0x0004521a) scroll_sc2_up_pane_ParamLimits

0x1157,	// (0x0004521a) scroll_sc2_up_pane

0xbbab,	// (0x0004fc6e) grid_wheel_folder_pane_g1_ParamLimits

0xbbab,	// (0x0004fc6e) grid_wheel_folder_pane_g1

0x73ab,	// (0x0004b46e) clock_nsta_pane_cp2_ParamLimits

0x73ab,	// (0x0004b46e) clock_nsta_pane_cp2

0x74b3,	// (0x0004b576) listscroll_midp_pane_ParamLimits

0x74bf,	// (0x0004b582) midp_canvas_pane

0x1844,	// (0x00045907) nsta_clock_indic_pane

0x186c,	// (0x0004592f) listscroll_form_pane_vc

0x1874,	// (0x00045937) listscroll_set_pane_vc_ParamLimits

0x1874,	// (0x00045937) listscroll_set_pane_vc

0x7efa,	// (0x0004bfbd) clock_nsta_pane

0x7f75,	// (0x0004c038) indicator_nsta_pane

0x9990,	// (0x0004da53) bg_popup_sub_pane_cp2_ParamLimits

0x99a4,	// (0x0004da67) find_pane_cp2_ParamLimits

0x99a4,	// (0x0004da67) find_pane_cp2

0x99ba,	// (0x0004da7d) grid_toobar_pane_ParamLimits

0x9ab2,	// (0x0004db75) list_form_gen_pane_vc_ParamLimits

0x9ab2,	// (0x0004db75) list_form_gen_pane_vc

0x9ac8,	// (0x0004db8b) scroll_pane_cp8_vc_ParamLimits

0x9ac8,	// (0x0004db8b) scroll_pane_cp8_vc

0x9b44,	// (0x0004dc07) data_form_wide_pane_vc_ParamLimits

0x9b44,	// (0x0004dc07) data_form_wide_pane_vc

0x9b50,	// (0x0004dc13) form_field_data_wide_pane_vc_g1

0x9b58,	// (0x0004dc1b) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b58,	// (0x0004dc1b) form_field_data_wide_pane_vc_t1

0x0e20,	// (0x00044ee3) input_focus_pane_cp6_vc_ParamLimits

0x0e20,	// (0x00044ee3) input_focus_pane_cp6_vc

0x9e85,	// (0x0004df48) list_midp_pane_ParamLimits

0x9e91,	// (0x0004df54) scroll_pane_cp16_ParamLimits

0x9e91,	// (0x0004df54) scroll_pane_cp16

0x9efb,	// (0x0004dfbe) button_value_adjust_pane_ParamLimits

0x9efb,	// (0x0004dfbe) button_value_adjust_pane

0xae2f,	// (0x0004eef2) button_value_adjust_pane_cp6_ParamLimits

0xae2f,	// (0x0004eef2) button_value_adjust_pane_cp6

0xaf55,	// (0x0004f018) settings_code_pane_cp_ParamLimits

0xaf55,	// (0x0004f018) settings_code_pane_cp

0x0a04,	// (0x00044ac7) cell_touch_pane_g1

0x0a04,	// (0x00044ac7) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x0005379a) cell_touch_pane_g

0xb4dc,	// (0x0004f59f) cell_touch_pane_cp_ParamLimits

0xb4dc,	// (0x0004f59f) cell_touch_pane_cp

0xb4ec,	// (0x0004f5af) cell_touch_pane_ParamLimits

0xb4ec,	// (0x0004f5af) cell_touch_pane

0x0a04,	// (0x00044ac7) scroll_sc2_down_pane_g1

0x0a04,	// (0x00044ac7) scroll_sc2_up_pane_g1

0x0a0e,	// (0x00044ad1) bg_set_opt_pane_cp4_vc

0xb4fe,	// (0x0004f5c1) list_set_graphic_pane_vc_g1_ParamLimits

0xb4fe,	// (0x0004f5c1) list_set_graphic_pane_vc_g1

0xb50a,	// (0x0004f5cd) list_set_graphic_pane_vc_g2_ParamLimits

0xb50a,	// (0x0004f5cd) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x00053a96) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x00053a96) list_set_graphic_pane_vc_g

0xb516,	// (0x0004f5d9) text_primary_small_cp13_vc_ParamLimits

0xb516,	// (0x0004f5d9) text_primary_small_cp13_vc

0xb52e,	// (0x0004f5f1) list_set_graphic_pane_vc_ParamLimits

0xb52e,	// (0x0004f5f1) list_set_graphic_pane_vc

0x0a0e,	// (0x00044ad1) input_focus_pane_cp2_vc

0x0a04,	// (0x00044ac7) setting_code_pane_vc_g1

0x0a81,	// (0x00044b44) setting_code_pane_vc_t1

0xb541,	// (0x0004f604) set_text_pane_vc_t1_ParamLimits

0xb541,	// (0x0004f604) set_text_pane_vc_t1

0x0a0e,	// (0x00044ad1) input_focus_pane_cp1_vc

0xb55e,	// (0x0004f621) list_set_text_pane_vc

0x0a04,	// (0x00044ac7) setting_text_pane_vc_g1

0x0a0e,	// (0x00044ad1) bg_set_opt_pane_cp2_vc

0x0a78,	// (0x00044b3b) setting_slider_graphic_pane_vc_g1

0xb568,	// (0x0004f62b) setting_slider_graphic_pane_vc_t1

0xb578,	// (0x0004f63b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x00053a9b) setting_slider_graphic_pane_vc_t

0xb588,	// (0x0004f64b) slider_set_pane_cp_vc

0xb590,	// (0x0004f653) slider_set_pane_vc_g1

0xb599,	// (0x0004f65c) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x00053aa0) slider_set_pane_vc_g

0x0e78,	// (0x00044f3b) set_opt_bg_pane_g1_copy1

0x0e80,	// (0x00044f43) set_opt_bg_pane_g2_copy1

0xb5c5,	// (0x0004f688) set_opt_bg_pane_g3_copy1

0x0e90,	// (0x00044f53) set_opt_bg_pane_g4_copy1

0x0e98,	// (0x00044f5b) set_opt_bg_pane_g5_copy1

0x0ea0,	// (0x00044f63) set_opt_bg_pane_g6_copy1

0xb5cd,	// (0x0004f690) set_opt_bg_pane_g7_copy1

0xb5d7,	// (0x0004f69a) set_opt_bg_pane_g8_copy1

0xb5df,	// (0x0004f6a2) set_opt_bg_pane_g9_copy1

0x0a0e,	// (0x00044ad1) bg_set_opt_pane_cp_vc

0xb5e7,	// (0x0004f6aa) setting_slider_pane_vc_t1

0xb5f6,	// (0x0004f6b9) setting_slider_pane_vc_t2

0xb606,	// (0x0004f6c9) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x00053aaf) setting_slider_pane_vc_t

0xb616,	// (0x0004f6d9) slider_set_pane_vc

0x827e,	// (0x0004c341) volume_set_pane_vc_g1

0x8624,	// (0x0004c6e7) volume_set_pane_vc_g2

0x862d,	// (0x0004c6f0) volume_set_pane_vc_g3

0x8636,	// (0x0004c6f9) volume_set_pane_vc_g4

0x863f,	// (0x0004c702) volume_set_pane_vc_g5

0x8648,	// (0x0004c70b) volume_set_pane_vc_g6

0x8651,	// (0x0004c714) volume_set_pane_vc_g7

0x865a,	// (0x0004c71d) volume_set_pane_vc_g8

0x8663,	// (0x0004c726) volume_set_pane_vc_g9

0x866c,	// (0x0004c72f) volume_set_pane_vc_g10

0x0009,

0xf9f3,	// (0x00053ab6) volume_set_pane_vc_g

0xb61e,	// (0x0004f6e1) volume_set_pane_vc

0xb628,	// (0x0004f6eb) button_value_adjust_pane_cp1_vc

0xb632,	// (0x0004f6f5) list_highlight_pane_cp2_vc

0xb63b,	// (0x0004f6fe) list_set_pane_vc_ParamLimits

0xb63b,	// (0x0004f6fe) list_set_pane_vc

0xb699,	// (0x0004f75c) main_pane_set_vc_t1_ParamLimits

0xb699,	// (0x0004f75c) main_pane_set_vc_t1

0xb6ae,	// (0x0004f771) main_pane_set_vc_t2_ParamLimits

0xb6ae,	// (0x0004f771) main_pane_set_vc_t2

0xb6c0,	// (0x0004f783) main_pane_set_vc_t3_ParamLimits

0xb6c0,	// (0x0004f783) main_pane_set_vc_t3

0xb6d2,	// (0x0004f795) main_pane_set_vc_t4_ParamLimits

0xb6d2,	// (0x0004f795) main_pane_set_vc_t4

0x0003,

0xfa08,	// (0x00053acb) main_pane_set_vc_t_ParamLimits

0xfa08,	// (0x00053acb) main_pane_set_vc_t

0xb6e4,	// (0x0004f7a7) setting_code_pane_vc_ParamLimits

0xb6e4,	// (0x0004f7a7) setting_code_pane_vc

0xb6f3,	// (0x0004f7b6) setting_slider_graphic_pane_vc

0xb6f3,	// (0x0004f7b6) setting_slider_pane_vc

0xb6f3,	// (0x0004f7b6) setting_text_pane_vc

0xb6f3,	// (0x0004f7b6) setting_volume_pane_vc

0xb6fb,	// (0x0004f7be) scroll_pane_cp121_vc

0x0dfa,	// (0x00044ebd) set_content_pane_vc

0xb703,	// (0x0004f7c6) button_value_adjust_pane_g1

0xb70c,	// (0x0004f7cf) button_value_adjust_pane_g2

0x0001,

0xfa6b,	// (0x00053b2e) button_value_adjust_pane_g

0xb715,	// (0x0004f7d8) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb715,	// (0x0004f7d8) form_field_slider_wide_pane_vc_t1

0xb729,	// (0x0004f7ec) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb729,	// (0x0004f7ec) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa70,	// (0x00053b33) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa70,	// (0x00053b33) form_field_slider_wide_pane_vc_t

0x0a5c,	// (0x00044b1f) input_focus_pane_cp10_vc_ParamLimits

0x0a5c,	// (0x00044b1f) input_focus_pane_cp10_vc

0xb757,	// (0x0004f81a) slider_cont_pane_cp1_vc_ParamLimits

0xb757,	// (0x0004f81a) slider_cont_pane_cp1_vc

0xb769,	// (0x0004f82c) slider_form_pane_g1_cp2

0xb599,	// (0x0004f65c) slider_form_pane_g2_cp2

0xb796,	// (0x0004f859) form_field_slider_pane_vc_t3

0xb7a4,	// (0x0004f867) form_field_slider_pane_vc_t4

0xb7b2,	// (0x0004f875) slider_form_pane_vc_ParamLimits

0xb7b2,	// (0x0004f875) slider_form_pane_vc

0xb7bf,	// (0x0004f882) form_field_slider_pane_vc_t1_ParamLimits

0xb7bf,	// (0x0004f882) form_field_slider_pane_vc_t1

0xb729,	// (0x0004f7ec) form_field_slider_pane_vc_t2_ParamLimits

0xb729,	// (0x0004f7ec) form_field_slider_pane_vc_t2

0x0001,

0xfa82,	// (0x00053b45) form_field_slider_pane_vc_t_ParamLimits

0xfa82,	// (0x00053b45) form_field_slider_pane_vc_t

0x0a5c,	// (0x00044b1f) input_focus_pane_cp9_vc_ParamLimits

0x0a5c,	// (0x00044b1f) input_focus_pane_cp9_vc

0xb7db,	// (0x0004f89e) slider_cont_pane_vc_ParamLimits

0xb7db,	// (0x0004f89e) slider_cont_pane_vc

0xb7ef,	// (0x0004f8b2) list_form_graphic_pane_cp_vc_ParamLimits

0xb7ef,	// (0x0004f8b2) list_form_graphic_pane_cp_vc

0x9b50,	// (0x0004dc13) form_field_popup_wide_pane_vc_g1

0xb804,	// (0x0004f8c7) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb804,	// (0x0004f8c7) form_field_popup_wide_pane_vc_t1

0x0e20,	// (0x00044ee3) input_focus_pane_cp8_vc_ParamLimits

0x0e20,	// (0x00044ee3) input_focus_pane_cp8_vc

0xb849,	// (0x0004f90c) list_form_wide_pane_vc_ParamLimits

0xb849,	// (0x0004f90c) list_form_wide_pane_vc

0xb855,	// (0x0004f918) list_form_graphic_pane_vc_g1

0xb85d,	// (0x0004f920) list_form_graphic_pane_vc_t1_ParamLimits

0xb85d,	// (0x0004f920) list_form_graphic_pane_vc_t1

0x0a6a,	// (0x00044b2d) list_highlight_pane_cp5_vc_ParamLimits

0x0a6a,	// (0x00044b2d) list_highlight_pane_cp5_vc

0xb879,	// (0x0004f93c) list_form_graphic_pane_vc_ParamLimits

0xb879,	// (0x0004f93c) list_form_graphic_pane_vc

0x9b50,	// (0x0004dc13) form_field_popup_pane_vc_g1

0xb88f,	// (0x0004f952) form_field_popup_pane_vc_t1_ParamLimits

0xb88f,	// (0x0004f952) form_field_popup_pane_vc_t1

0x0e20,	// (0x00044ee3) input_focus_pane_cp7_vc_ParamLimits

0x0e20,	// (0x00044ee3) input_focus_pane_cp7_vc

0xb8a6,	// (0x0004f969) list_form_pane_vc_ParamLimits

0xb8a6,	// (0x0004f969) list_form_pane_vc

0xb8b2,	// (0x0004f975) data_form_pane_vc_t1_ParamLimits

0xb8b2,	// (0x0004f975) data_form_pane_vc_t1

0x0e78,	// (0x00044f3b) input_focus_pane_vc_g1

0x0e80,	// (0x00044f43) input_focus_pane_vc_g2

0x0e88,	// (0x00044f4b) input_focus_pane_vc_g3

0x0e90,	// (0x00044f53) input_focus_pane_vc_g4

0x0e98,	// (0x00044f5b) input_focus_pane_vc_g5

0x0ea0,	// (0x00044f63) input_focus_pane_vc_g6

0x0ea8,	// (0x00044f6b) input_focus_pane_vc_g7

0x0eb0,	// (0x00044f73) input_focus_pane_vc_g8

0x0eb8,	// (0x00044f7b) input_focus_pane_vc_g9

0x0a04,	// (0x00044ac7) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x00053723) input_focus_pane_vc_g

0x9b44,	// (0x0004dc07) data_form_pane_vc_ParamLimits

0x9b44,	// (0x0004dc07) data_form_pane_vc

0x9b50,	// (0x0004dc13) form_field_data_pane_vc_g1

0xb8cd,	// (0x0004f990) form_field_data_pane_vc_t1_ParamLimits

0xb8cd,	// (0x0004f990) form_field_data_pane_vc_t1

0x0e20,	// (0x00044ee3) input_focus_pane_vc_ParamLimits

0x0e20,	// (0x00044ee3) input_focus_pane_vc

0xb8e7,	// (0x0004f9aa) button_value_adjust_pane_cp3_vc

0xb8ef,	// (0x0004f9b2) button_value_adjust_pane_cp5_vc

0xb8f7,	// (0x0004f9ba) form_field_data_pane_vc_ParamLimits

0xb8f7,	// (0x0004f9ba) form_field_data_pane_vc

0xb90e,	// (0x0004f9d1) form_field_data_pane_vc_cp2

0xb916,	// (0x0004f9d9) form_field_data_wide_pane_vc_ParamLimits

0xb916,	// (0x0004f9d9) form_field_data_wide_pane_vc

0xb92c,	// (0x0004f9ef) form_field_data_wide_pane_vc_cp2

0xb934,	// (0x0004f9f7) form_field_popup_pane_vc_ParamLimits

0xb934,	// (0x0004f9f7) form_field_popup_pane_vc

0xb94b,	// (0x0004fa0e) form_field_popup_wide_pane_vc_ParamLimits

0xb94b,	// (0x0004fa0e) form_field_popup_wide_pane_vc

0xb961,	// (0x0004fa24) form_field_slider_pane_vc_ParamLimits

0xb961,	// (0x0004fa24) form_field_slider_pane_vc

0xb974,	// (0x0004fa37) form_field_slider_wide_pane_vc_ParamLimits

0xb974,	// (0x0004fa37) form_field_slider_wide_pane_vc

0xb987,	// (0x0004fa4a) grid_touch_1_pane_ParamLimits

0xb987,	// (0x0004fa4a) grid_touch_1_pane

0xb993,	// (0x0004fa56) grid_touch_2_pane_ParamLimits

0xb993,	// (0x0004fa56) grid_touch_2_pane

0x1836,	// (0x000458f9) touch_pane_g1_ParamLimits

0x1836,	// (0x000458f9) touch_pane_g1

0xb9ab,	// (0x0004fa6e) cell_app_pane_cp_wide_ParamLimits

0xb9ab,	// (0x0004fa6e) cell_app_pane_cp_wide

0xb9bc,	// (0x0004fa7f) grid_popup_fast_wide_pane_ParamLimits

0xb9bc,	// (0x0004fa7f) grid_popup_fast_wide_pane

0xb9d0,	// (0x0004fa93) scroll_pane_cp19_ParamLimits

0xb9d0,	// (0x0004fa93) scroll_pane_cp19

0x0a0e,	// (0x00044ad1) bg_popup_window_pane_cp20

0xb9e4,	// (0x0004faa7) listscroll_popup_fast_wide_pane

0xb9ec,	// (0x0004faaf) grid_indicator_nsta_pane

0xb9fe,	// (0x0004fac1) clock_nsta_pane_g1

0xba07,	// (0x0004faca) clock_nsta_pane_t1

0xba23,	// (0x0004fae6) cell_indicator_nsta_pane_ParamLimits

0xba23,	// (0x0004fae6) cell_indicator_nsta_pane

0xba58,	// (0x0004fb1b) cell_indicator_nsta_pane_g1

0xba66,	// (0x0004fb29) cell_indicator_nsta_pane_g2

0x0001,

0xfa93,	// (0x00053b56) cell_indicator_nsta_pane_g

0xba78,	// (0x0004fb3b) clock_nsta_pane_cp

0xba81,	// (0x0004fb44) indicator_nsta_pane_cp

0xba8b,	// (0x0004fb4e) nsta_clock_indic_pane_g1

0x0aa6,	// (0x00044b69) grid_indicator_pane

0x70c8,	// (0x0004b18b) scroll_pane_cp29

0x72fa,	// (0x0004b3bd) indicator_nsta_pane_cp2_ParamLimits

0x72fa,	// (0x0004b3bd) indicator_nsta_pane_cp2

0x0a6a,	// (0x00044b2d) main_apps_wheel_pane

0x9d68,	// (0x0004de2b) form_midp_field_text_pane_ParamLimits

0x9eb1,	// (0x0004df74) scroll_bar_cp050_ParamLimits

0xbae4,	// (0x0004fba7) cell_indicator_pane_ParamLimits

0xbae4,	// (0x0004fba7) cell_indicator_pane

0xbafd,	// (0x0004fbc0) cell_indicator_pane_g1

0xbb07,	// (0x0004fbca) grid_wheel_folder_pane_ParamLimits

0xbb07,	// (0x0004fbca) grid_wheel_folder_pane

0xbb1d,	// (0x0004fbe0) list_wheel_apps_pane_ParamLimits

0xbb1d,	// (0x0004fbe0) list_wheel_apps_pane

0xbb2e,	// (0x0004fbf1) main_apps_wheel_pane_g1_ParamLimits

0xbb2e,	// (0x0004fbf1) main_apps_wheel_pane_g1

0xbb42,	// (0x0004fc05) main_apps_wheel_pane_g2_ParamLimits

0xbb42,	// (0x0004fc05) main_apps_wheel_pane_g2

0x0001,

0xfaaf,	// (0x00053b72) main_apps_wheel_pane_g_ParamLimits

0xfaaf,	// (0x00053b72) main_apps_wheel_pane_g

0xbb5a,	// (0x0004fc1d) main_apps_wheel_pane_t1_ParamLimits

0xbb5a,	// (0x0004fc1d) main_apps_wheel_pane_t1

0xbb7d,	// (0x0004fc40) list_wheel_apps_pane_g1

0xbb85,	// (0x0004fc48) list_wheel_apps_pane_g2

0xbb8d,	// (0x0004fc50) list_wheel_apps_pane_g3

0xbb97,	// (0x0004fc5a) list_wheel_apps_pane_g4

0xbba1,	// (0x0004fc64) list_wheel_apps_pane_g5

0x0004,

0xfab4,	// (0x00053b77) list_wheel_apps_pane_g

0x1581,	// (0x00045644) navi_icon_text_pane

0x7e29,	// (0x0004beec) aid_fill_nsta

0xbbc4,	// (0x0004fc87) navi_icon_text_pane_g1

0xbbd0,	// (0x0004fc93) navi_icon_text_pane_t1

0x1465,	// (0x00045528) list_set_graphic_pane_t1_ParamLimits

0x1465,	// (0x00045528) list_set_graphic_pane_t1

0xa5fc,	// (0x0004e6bf) popup_midp_note_alarm_window_t6_ParamLimits

0xa5fc,	// (0x0004e6bf) popup_midp_note_alarm_window_t6

0xa60e,	// (0x0004e6d1) popup_midp_note_alarm_window_t7_ParamLimits

0xa60e,	// (0x0004e6d1) popup_midp_note_alarm_window_t7

0xa620,	// (0x0004e6e3) popup_midp_note_alarm_window_t8_ParamLimits

0xa620,	// (0x0004e6e3) popup_midp_note_alarm_window_t8

0xa632,	// (0x0004e6f5) popup_midp_note_alarm_window_t9_ParamLimits

0xa632,	// (0x0004e6f5) popup_midp_note_alarm_window_t9

0xa644,	// (0x0004e707) popup_midp_note_alarm_window_t10_ParamLimits

0xa644,	// (0x0004e707) popup_midp_note_alarm_window_t10

0xa656,	// (0x0004e719) popup_midp_note_alarm_window_t11_ParamLimits

0xa656,	// (0x0004e719) popup_midp_note_alarm_window_t11

0xa668,	// (0x0004e72b) scroll_pane_cp17_ParamLimits

0xa668,	// (0x0004e72b) scroll_pane_cp17

0x827e,	// (0x0004c341) volume_small_pane_cp_g1

0x86f5,	// (0x0004c7b8) volume_small_pane_cp_g2

0x86fe,	// (0x0004c7c1) volume_small_pane_cp_g3

0x8707,	// (0x0004c7ca) volume_small_pane_cp_g4

0x8710,	// (0x0004c7d3) volume_small_pane_cp_g5

0x863f,	// (0x0004c702) volume_small_pane_cp_g6

0x8719,	// (0x0004c7dc) volume_small_pane_cp_g7

0x8722,	// (0x0004c7e5) volume_small_pane_cp_g8

0x872b,	// (0x0004c7ee) volume_small_pane_cp_g9

0x8734,	// (0x0004c7f7) volume_small_pane_cp_g10

0x16f7,	// (0x000457ba) midp_ticker_pane_g1_ParamLimits

0x1703,	// (0x000457c6) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x000537ef) midp_ticker_pane_g_ParamLimits

0x170f,	// (0x000457d2) midp_ticker_pane_t1_ParamLimits

0x7e3f,	// (0x0004bf02) aid_fill_nsta_2

0x9e9d,	// (0x0004df60) list_form2_midp_pane

0xafa0,	// (0x0004f063) midp_editing_number_pane_ParamLimits

0xafaf,	// (0x0004f072) midp_ticker_pane_ParamLimits

0xbbe2,	// (0x0004fca5) form2_midp_field_pane

0xbc06,	// (0x0004fcc9) scroll_pane_cp51

0xbc26,	// (0x0004fce9) form2_midp_button_pane_ParamLimits

0xbc26,	// (0x0004fce9) form2_midp_button_pane

0xbc38,	// (0x0004fcfb) form2_midp_content_pane_ParamLimits

0xbc38,	// (0x0004fcfb) form2_midp_content_pane

0xbc52,	// (0x0004fd15) form2_midp_field_choice_group_pane

0xbc5a,	// (0x0004fd1d) form2_midp_field_pane_g1

0xbc62,	// (0x0004fd25) form2_midp_field_pane_g2

0xbc6a,	// (0x0004fd2d) form2_midp_field_pane_g3

0xbc72,	// (0x0004fd35) form2_midp_field_pane_g4

0x0003,

0xfad9,	// (0x00053b9c) form2_midp_field_pane_g

0xbc7a,	// (0x0004fd3d) form2_midp_gauge_slider_pane

0xbc82,	// (0x0004fd45) form2_midp_gauge_wait_pane

0xbc8a,	// (0x0004fd4d) form2_midp_image_pane_ParamLimits

0xbc8a,	// (0x0004fd4d) form2_midp_image_pane

0xbca5,	// (0x0004fd68) form2_midp_label_pane_ParamLimits

0xbca5,	// (0x0004fd68) form2_midp_label_pane

0xbcbe,	// (0x0004fd81) form2_midp_label_pane_cp_ParamLimits

0xbcbe,	// (0x0004fd81) form2_midp_label_pane_cp

0xbcdf,	// (0x0004fda2) form2_midp_string_pane_ParamLimits

0xbcdf,	// (0x0004fda2) form2_midp_string_pane

0x5f74,	// (0x0004a037) form2_midp_text_pane_ParamLimits

0x5f74,	// (0x0004a037) form2_midp_text_pane

0xbcf1,	// (0x0004fdb4) form2_midp_time_pane

0xbd01,	// (0x0004fdc4) input_focus_pane_cp51_ParamLimits

0xbd01,	// (0x0004fdc4) input_focus_pane_cp51

0xbd19,	// (0x0004fddc) form2_midp_label_pane_t1_ParamLimits

0xbd19,	// (0x0004fddc) form2_midp_label_pane_t1

0x5f91,	// (0x0004a054) form2_mdip_text_pane_t1_ParamLimits

0x5f91,	// (0x0004a054) form2_mdip_text_pane_t1

0x5faf,	// (0x0004a072) form2_midp_time_pane_t1

0xbd62,	// (0x0004fe25) form2_midp_gauge_slider_pane_t1

0xbd74,	// (0x0004fe37) form2_midp_gauge_slider_pane_t2

0xbd86,	// (0x0004fe49) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae2,	// (0x00053ba5) form2_midp_gauge_slider_pane_t

0xbd98,	// (0x0004fe5b) form2_midp_slider_pane

0xbda4,	// (0x0004fe67) form2_midp_gauge_wait_pane_t1

0xbdb2,	// (0x0004fe75) form2_midp_wait_pane_ParamLimits

0xbdb2,	// (0x0004fe75) form2_midp_wait_pane

0xbddd,	// (0x0004fea0) list_single_2graphic_pane_cp4_ParamLimits

0xbddd,	// (0x0004fea0) list_single_2graphic_pane_cp4

0x9bb9,	// (0x0004dc7c) list_single_midp_graphic_pane_cp_ParamLimits

0x9bb9,	// (0x0004dc7c) list_single_midp_graphic_pane_cp

0x0a0e,	// (0x00044ad1) list_highlight_pane_cp20

0xbe05,	// (0x0004fec8) list_single_2graphic_pane_g1_cp4

0xb3e2,	// (0x0004f4a5) list_single_2graphic_pane_g2_cp4

0xbe0d,	// (0x0004fed0) list_single_2graphic_pane_t1_cp4

0x0a6a,	// (0x00044b2d) list_highlight_pane_cp21

0xbe1c,	// (0x0004fedf) list_single_midp_graphic_pane_g4_cp

0xbe2b,	// (0x0004feee) list_single_midp_graphic_pane_t1_cp

0xbe40,	// (0x0004ff03) form2_mdip_string_pane_t1_ParamLimits

0xbe40,	// (0x0004ff03) form2_mdip_string_pane_t1

0x0a0e,	// (0x00044ad1) bg_wml_button_pane_cp2

0x0a04,	// (0x00044ac7) form2_midp_image_pane_g1

0x6cc6,	// (0x0004ad89) list_double_large_graphic_pane_g5_ParamLimits

0x6cc6,	// (0x0004ad89) list_double_large_graphic_pane_g5

0x74b3,	// (0x0004b576) midp_form_pane_ParamLimits

0x0a6a,	// (0x00044b2d) main_apps_wheel_pane_ParamLimits

0x7c11,	// (0x0004bcd4) popup_preview_window_ParamLimits

0x7c11,	// (0x0004bcd4) popup_preview_window

0x7dcc,	// (0x0004be8f) popup_touch_info_window_ParamLimits

0x7dcc,	// (0x0004be8f) popup_touch_info_window

0x7dea,	// (0x0004bead) popup_touch_menu_window_ParamLimits

0x7dea,	// (0x0004bead) popup_touch_menu_window

0x09fa,	// (0x00044abd) bg_popup_sub_pane_cp6

0xbf47,	// (0x0005000a) list_touch_menu_pane

0xbf4f,	// (0x00050012) list_single_touch_menu_pane_ParamLimits

0xbf4f,	// (0x00050012) list_single_touch_menu_pane

0xbf65,	// (0x00050028) list_single_touch_menu_pane_t1

0x0a6a,	// (0x00044b2d) bg_popup_sub_pane_cp7_ParamLimits

0x0a6a,	// (0x00044b2d) bg_popup_sub_pane_cp7

0x9ed1,	// (0x0004df94) heading_sub_pane

0xbf73,	// (0x00050036) list_touch_info_pane_ParamLimits

0xbf73,	// (0x00050036) list_touch_info_pane

0xbf83,	// (0x00050046) list_single_touch_info_pane_ParamLimits

0xbf83,	// (0x00050046) list_single_touch_info_pane

0xbf95,	// (0x00050058) list_single_touch_info_pane_t1

0xbfa3,	// (0x00050066) list_single_touch_info_pane_t2

0x0001,

0xfaf0,	// (0x00053bb3) list_single_touch_info_pane_t

0x16e0,	// (0x000457a3) bg_popup_heading_pane_cp

0xbfb1,	// (0x00050074) heading_sub_pane_t1

0x9ade,	// (0x0004dba1) bg_popup_preview_window_pane_cp_ParamLimits

0x9ade,	// (0x0004dba1) bg_popup_preview_window_pane_cp

0x9ed1,	// (0x0004df94) heading_preview_pane

0xbf73,	// (0x00050036) list_preview_pane_ParamLimits

0xbf73,	// (0x00050036) list_preview_pane

0xbfbf,	// (0x00050082) popup_preview_window_g1

0xbf83,	// (0x00050046) list_single_preview_pane_ParamLimits

0xbf83,	// (0x00050046) list_single_preview_pane

0xbfc7,	// (0x0005008a) list_single_preview_pane_g1

0xbfcf,	// (0x00050092) list_single_preview_pane_t1

0xbf95,	// (0x00050058) list_single_preview_pane_t2

0x0001,

0xfaf5,	// (0x00053bb8) list_single_preview_pane_t

0xbfdd,	// (0x000500a0) bg_popup_heading_pane_cp2_ParamLimits

0xbfdd,	// (0x000500a0) bg_popup_heading_pane_cp2

0xbff3,	// (0x000500b6) heading_preview_pane_g1

0xbffb,	// (0x000500be) heading_preview_pane_t1_ParamLimits

0xbffb,	// (0x000500be) heading_preview_pane_t1

0x0abd,	// (0x00044b80) soft_indicator_pane_t1_ParamLimits

0x0d9c,	// (0x00044e5f) scroll_pane_ParamLimits

0x114e,	// (0x00045211) scroll_sc2_left_pane

0x1145,	// (0x00045208) scroll_sc2_right_pane

0x116d,	// (0x00045230) scroll_bg_pane_g1_ParamLimits

0x1182,	// (0x00045245) scroll_bg_pane_g2_ParamLimits

0x119a,	// (0x0004525d) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x0005377a) scroll_bg_pane_g_ParamLimits

0x116d,	// (0x00045230) scroll_handle_pane_g1_ParamLimits

0x11af,	// (0x00045272) scroll_handle_pane_g2_ParamLimits

0x119a,	// (0x0004525d) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x00053781) scroll_handle_pane_g_ParamLimits

0x7894,	// (0x0004b957) popup_choice_list_window_ParamLimits

0x7894,	// (0x0004b957) popup_choice_list_window

0x999c,	// (0x0004da5f) choice_list_pane

0x9a1e,	// (0x0004dae1) cell_toolbar_pane_t1

0x9a46,	// (0x0004db09) toolbar_button_pane_ParamLimits

0xab22,	// (0x0004ebe5) ai_gene_pane_1_t2_ParamLimits

0xab22,	// (0x0004ebe5) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x000539a9) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x000539a9) ai_gene_pane_1_t

0xc018,	// (0x000500db) scroll_sc2_left_pane_g1

0xc018,	// (0x000500db) scroll_sc2_right_pane_g1

0x0f62,	// (0x00045025) bg_popup_sub_pane_cp10

0xc022,	// (0x000500e5) list_choice_list_pane

0xc03b,	// (0x000500fe) list_single_choice_list_pane_ParamLimits

0xc03b,	// (0x000500fe) list_single_choice_list_pane

0xc04e,	// (0x00050111) list_single_choice_list_pane_g1

0x6d61,	// (0x0004ae24) list_single_choice_list_pane_t1_ParamLimits

0x6d61,	// (0x0004ae24) list_single_choice_list_pane_t1

0xc056,	// (0x00050119) choice_list_pane_g1

0xc05e,	// (0x00050121) choice_list_pane_t1

0x09fa,	// (0x00044abd) input_focus_pane_cp11

0x10ba,	// (0x0004517d) title_pane_stacon_g2_ParamLimits

0x10ba,	// (0x0004517d) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x00053760) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x00053760) title_pane_stacon_g

0x16e0,	// (0x000457a3) cursor_press_pane

0x793c,	// (0x0004b9ff) popup_fep_hwr_window_ParamLimits

0x793c,	// (0x0004b9ff) popup_fep_hwr_window

0x79b4,	// (0x0004ba77) popup_fep_vkb_window_ParamLimits

0x79b4,	// (0x0004ba77) popup_fep_vkb_window

0xc06c,	// (0x0005012f) cursor_press_pane_g1

0x0002,

0xfb1e,	// (0x00053be1) fep_vkb_side_pane_g_ParamLimits

0x8776,	// (0x0004c839) fep_hwr_candidate_pane_ParamLimits

0x8776,	// (0x0004c839) fep_hwr_candidate_pane

0x87a0,	// (0x0004c863) fep_hwr_side_pane_ParamLimits

0x87a0,	// (0x0004c863) fep_hwr_side_pane

0x87c0,	// (0x0004c883) fep_hwr_top_pane_ParamLimits

0x87c0,	// (0x0004c883) fep_hwr_top_pane

0x87d8,	// (0x0004c89b) fep_hwr_write_pane_ParamLimits

0x87d8,	// (0x0004c89b) fep_hwr_write_pane

0xfb1e,	// (0x00053be1) fep_vkb_side_pane_g

0xc074,	// (0x00050137) fep_hwr_top_pane_g1

0xc086,	// (0x00050149) fep_hwr_top_pane_g2

0x8804,	// (0x0004c8c7) fep_hwr_top_pane_g3

0x0002,

0xfafa,	// (0x00053bbd) fep_hwr_top_pane_g

0x8819,	// (0x0004c8dc) fep_hwr_top_text_pane

0x1272,	// (0x00045335) fep_hwr_top_text_pane_g1

0xc0bc,	// (0x0005017f) fep_hwr_top_text_pane_t1

0x890f,	// (0x0004c9d2) fep_hwr_candidate_pane_g1

0xc301,	// (0x000503c4) fep_vkb_keypad_pane_g3_ParamLimits

0xc301,	// (0x000503c4) fep_vkb_keypad_pane_g3

0xc329,	// (0x000503ec) fep_vkb_keypad_pane_g4_ParamLimits

0xc329,	// (0x000503ec) fep_vkb_keypad_pane_g4

0xc398,	// (0x0005045b) fep_vkb_bottom_pane_g2_ParamLimits

0xc398,	// (0x0005045b) fep_vkb_bottom_pane_g2

0x0001,

0xfb25,	// (0x00053be8) fep_vkb_bottom_pane_g_ParamLimits

0xfb25,	// (0x00053be8) fep_vkb_bottom_pane_g

0xc018,	// (0x000500db) cell_vkb_side_pane_g2

0x0001,

0xfb2f,	// (0x00053bf2) cell_vkb_side_pane_g

0xc423,	// (0x000504e6) cell_vkb_side_pane_t1

0xc431,	// (0x000504f4) cell_vkb_side_pane_t1_copy1

0xc018,	// (0x000500db) bg_fep_vkb_candidate_pane_g2

0xc55d,	// (0x00050620) cell_vkb_candidate_pane_ParamLimits

0xc0ca,	// (0x0005018d) aid_size_cell_vkb_ParamLimits

0xc0ca,	// (0x0005018d) aid_size_cell_vkb

0xc55d,	// (0x00050620) cell_vkb_candidate_pane

0x8929,	// (0x0004c9ec) bg_popup_fep_shadow_pane_g1

0xc158,	// (0x0005021b) fep_vkb_bottom_pane_ParamLimits

0xc158,	// (0x0005021b) fep_vkb_bottom_pane

0xc18e,	// (0x00050251) fep_vkb_candidate_pane_ParamLimits

0xc18e,	// (0x00050251) fep_vkb_candidate_pane

0xc1aa,	// (0x0005026d) fep_vkb_keypad_pane_ParamLimits

0xc1aa,	// (0x0005026d) fep_vkb_keypad_pane

0xc1e9,	// (0x000502ac) fep_vkb_side_pane_ParamLimits

0xc1e9,	// (0x000502ac) fep_vkb_side_pane

0xc225,	// (0x000502e8) fep_vkb_top_pane_ParamLimits

0xc225,	// (0x000502e8) fep_vkb_top_pane

0xc25a,	// (0x0005031d) fep_vkb_top_pane_g1_ParamLimits

0xc25a,	// (0x0005031d) fep_vkb_top_pane_g1

0xc269,	// (0x0005032c) fep_vkb_top_pane_g2_ParamLimits

0xc269,	// (0x0005032c) fep_vkb_top_pane_g2

0xc278,	// (0x0005033b) fep_vkb_top_pane_g3_ParamLimits

0xc278,	// (0x0005033b) fep_vkb_top_pane_g3

0x0003,

0xfb15,	// (0x00053bd8) fep_vkb_top_pane_g_ParamLimits

0xfb15,	// (0x00053bd8) fep_vkb_top_pane_g

0xc296,	// (0x00050359) fep_vkb_top_text_pane_ParamLimits

0xc296,	// (0x00050359) fep_vkb_top_text_pane

0xc2a7,	// (0x0005036a) fep_vkb_side_pane_g1_ParamLimits

0xc2a7,	// (0x0005036a) fep_vkb_side_pane_g1

0xc2f0,	// (0x000503b3) grid_vkb_side_pane_ParamLimits

0xc2f0,	// (0x000503b3) grid_vkb_side_pane

0x8931,	// (0x0004c9f4) bg_popup_fep_shadow_pane_g2

0x893a,	// (0x0004c9fd) bg_popup_fep_shadow_pane_g3

0x8942,	// (0x0004ca05) bg_popup_fep_shadow_pane_g4

0x894b,	// (0x0004ca0e) bg_popup_fep_shadow_pane_g5

0x8955,	// (0x0004ca18) bg_popup_fep_shadow_pane_g6

0x895d,	// (0x0004ca20) bg_popup_fep_shadow_pane_g7

0x0e98,	// (0x00044f5b) bg_popup_fep_shadow_pane_g8

0xc347,	// (0x0005040a) grid_vkb_keypad_number_pane_ParamLimits

0xc347,	// (0x0005040a) grid_vkb_keypad_number_pane

0xc357,	// (0x0005041a) grid_vkb_keypad_pane_ParamLimits

0xc357,	// (0x0005041a) grid_vkb_keypad_pane

0xc37d,	// (0x00050440) fep_vkb_bottom_pane_g1_ParamLimits

0xc37d,	// (0x00050440) fep_vkb_bottom_pane_g1

0xc3a6,	// (0x00050469) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3a6,	// (0x00050469) grid_vkb_keypad_bottom_left_pane

0xc3bb,	// (0x0005047e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3bb,	// (0x0005047e) grid_vkb_keypad_bottom_right_pane

0xc3d0,	// (0x00050493) fep_vkb_top_text_pane_g1

0xc3eb,	// (0x000504ae) fep_vkb_top_text_pane_t1

0xc400,	// (0x000504c3) cell_vkb_side_pane_ParamLimits

0xc400,	// (0x000504c3) cell_vkb_side_pane

0xc018,	// (0x000500db) cell_vkb_side_pane_g1

0xc43f,	// (0x00050502) cell_vkb_keypad_pane_ParamLimits

0xc43f,	// (0x00050502) cell_vkb_keypad_pane

0xc4b4,	// (0x00050577) cell_vkb_keypad_pane_g1

0x0008,

0xfb42,	// (0x00053c05) bg_popup_fep_shadow_pane_g

0xc018,	// (0x000500db) cell_hwr_side_pane_g1

0xc018,	// (0x000500db) cell_hwr_side_pane_g2

0xc4be,	// (0x00050581) cell_vkb_keypad_pane_t1

0xc4cc,	// (0x0005058f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4cc,	// (0x0005058f) cell_vkb_keypad_bottom_left_pane

0xc4e9,	// (0x000505ac) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4e9,	// (0x000505ac) cell_vkb_keypad_bottom_right_pane

0xc018,	// (0x000500db) cell_vkb_keypad_bottom_left_pane_g1

0xc018,	// (0x000500db) cell_vkb_keypad_bottom_right_pane_g1

0xc522,	// (0x000505e5) cell_vkb_keypad_number_pane_ParamLimits

0xc522,	// (0x000505e5) cell_vkb_keypad_number_pane

0xc541,	// (0x00050604) cell_vkb_keypad_number_pane_g1

0xc54b,	// (0x0005060e) cell_vkb_keypad_number_pane_g2

0xc554,	// (0x00050617) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb34,	// (0x00053bf7) cell_vkb_keypad_number_pane_g

0xc4be,	// (0x00050581) cell_vkb_keypad_number_pane_t1

0xc578,	// (0x0005063b) fep_vkb_candidate_pane_g1

0x0001,

0xfb2f,	// (0x00053bf2) cell_hwr_side_pane_g

0xc591,	// (0x00050654) cell_hwr_side_pane_t1

0x896f,	// (0x0004ca32) cell_hwr_side_pane_t1_copy1

0xc288,	// (0x0005034b) cell_hwr_candidate_pane_g1

0x897d,	// (0x0004ca40) cell_hwr_candidate_pane_t1

0xc018,	// (0x000500db) cell_vkb_candidate_pane_g2

0xc617,	// (0x000506da) cell_vkb_candidate_pane_t1

0x873d,	// (0x0004c800) bg_popup_fep_shadow_pane_ParamLimits

0x873d,	// (0x0004c800) bg_popup_fep_shadow_pane

0x2e87,	// (0x00046f4a) bg_fep_hwr_top_pane_g4

0xc098,	// (0x0005015b) bg_hwr_side_pane_g1_ParamLimits

0xc098,	// (0x0005015b) bg_hwr_side_pane_g1

0x8855,	// (0x0004c918) cell_hwr_side_pane_ParamLimits

0x8855,	// (0x0004c918) cell_hwr_side_pane

0x8890,	// (0x0004c953) fep_hwr_write_pane_g1_ParamLimits

0x8890,	// (0x0004c953) fep_hwr_write_pane_g1

0x889d,	// (0x0004c960) fep_hwr_write_pane_g2_ParamLimits

0x889d,	// (0x0004c960) fep_hwr_write_pane_g2

0x88aa,	// (0x0004c96d) fep_hwr_write_pane_g3_ParamLimits

0x88aa,	// (0x0004c96d) fep_hwr_write_pane_g3

0x88b8,	// (0x0004c97b) fep_hwr_write_pane_g4_ParamLimits

0x88b8,	// (0x0004c97b) fep_hwr_write_pane_g4

0x0005,

0xfb01,	// (0x00053bc4) fep_hwr_write_pane_g_ParamLimits

0xfb01,	// (0x00053bc4) fep_hwr_write_pane_g

0x2e87,	// (0x00046f4a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2e87,	// (0x00046f4a) bg_fep_hwr_candidate_pane_g2

0x88cd,	// (0x0004c990) cell_hwr_candidate_pane_ParamLimits

0x88cd,	// (0x0004c990) cell_hwr_candidate_pane

0x890f,	// (0x0004c9d2) fep_hwr_candidate_pane_g1_ParamLimits

0xc0f8,	// (0x000501bb) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0f8,	// (0x000501bb) bg_popup_fep_shadow_pane_cp2

0xc288,	// (0x0005034b) fep_vkb_top_pane_g4_ParamLimits

0xc288,	// (0x0005034b) fep_vkb_top_pane_g4

0xc2ce,	// (0x00050391) fep_vkb_side_pane_g2_ParamLimits

0xc2ce,	// (0x00050391) fep_vkb_side_pane_g2

0x56fe,	// (0x000497c1) list_setting_pane_t4_ParamLimits

0x56fe,	// (0x000497c1) list_setting_pane_t4

0x5798,	// (0x0004985b) list_setting_number_pane_t5_ParamLimits

0x5798,	// (0x0004985b) list_setting_number_pane_t5

0x70f7,	// (0x0004b1ba) list_double_heading_pane_cp2_ParamLimits

0x70f7,	// (0x0004b1ba) list_double_heading_pane_cp2

0x2455,	// (0x00046518) list_double_heading_pane_g1_cp2_ParamLimits

0x2455,	// (0x00046518) list_double_heading_pane_g1_cp2

0xc625,	// (0x000506e8) list_double_heading_pane_g2_cp2_ParamLimits

0xc625,	// (0x000506e8) list_double_heading_pane_g2_cp2

0xc639,	// (0x000506fc) list_double_heading_pane_t1_cp2_ParamLimits

0xc639,	// (0x000506fc) list_double_heading_pane_t1_cp2

0xc64f,	// (0x00050712) list_double_heading_pane_t2_cp2_ParamLimits

0xc64f,	// (0x00050712) list_double_heading_pane_t2_cp2

0x09f2,	// (0x00044ab5) aid_value_unit2

0x655e,	// (0x0004a621) popup_preview_fixed_window

0x0b94,	// (0x00044c57) bg_popup_preview_window_pane_cp02

0xc661,	// (0x00050724) list_preview_fixed_pane

0xc6a7,	// (0x0005076a) list_empty_pane_fp_ParamLimits

0xc6a7,	// (0x0005076a) list_empty_pane_fp

0xc6a7,	// (0x0005076a) list_single_cale_day_pane_fp_ParamLimits

0xc6a7,	// (0x0005076a) list_single_cale_day_pane_fp

0xc6a7,	// (0x0005076a) list_single_graphic_heading_pane_fp_ParamLimits

0xc6a7,	// (0x0005076a) list_single_graphic_heading_pane_fp

0xc6a7,	// (0x0005076a) list_single_graphic_pane_fp_ParamLimits

0xc6a7,	// (0x0005076a) list_single_graphic_pane_fp

0xc6a7,	// (0x0005076a) list_single_heading_pane_fp_ParamLimits

0xc6a7,	// (0x0005076a) list_single_heading_pane_fp

0xc6a7,	// (0x0005076a) list_single_pane_fp_ParamLimits

0xc6a7,	// (0x0005076a) list_single_pane_fp

0xc6bd,	// (0x00050780) list_single_pane_fp_g1_ParamLimits

0xc6bd,	// (0x00050780) list_single_pane_fp_g1

0x25e3,	// (0x000466a6) list_single_pane_fp_g2_ParamLimits

0x25e3,	// (0x000466a6) list_single_pane_fp_g2

0xc7cb,	// (0x0005088e) list_single_pane_fp_g3_ParamLimits

0xc7cb,	// (0x0005088e) list_single_pane_fp_g3

0xc6c9,	// (0x0005078c) list_single_pane_fp_g4_ParamLimits

0xc6c9,	// (0x0005078c) list_single_pane_fp_g4

0x0003,

0xfb63,	// (0x00053c26) list_single_pane_fp_g_ParamLimits

0xfb63,	// (0x00053c26) list_single_pane_fp_g

0x5fc2,	// (0x0004a085) list_single_pane_fp_t1_ParamLimits

0x5fc2,	// (0x0004a085) list_single_pane_fp_t1

0x5fd9,	// (0x0004a09c) list_single_graphic_pane_fp_g1_ParamLimits

0x5fd9,	// (0x0004a09c) list_single_graphic_pane_fp_g1

0xc6bd,	// (0x00050780) list_single_graphic_pane_fp_g2_ParamLimits

0xc6bd,	// (0x00050780) list_single_graphic_pane_fp_g2

0x25e3,	// (0x000466a6) list_single_graphic_pane_fp_g3_ParamLimits

0x25e3,	// (0x000466a6) list_single_graphic_pane_fp_g3

0xc7cb,	// (0x0005088e) list_single_graphic_pane_fp_g4_ParamLimits

0xc7cb,	// (0x0005088e) list_single_graphic_pane_fp_g4

0xc6c9,	// (0x0005078c) list_single_graphic_pane_fp_g5_ParamLimits

0xc6c9,	// (0x0005078c) list_single_graphic_pane_fp_g5

0x0004,

0xfb6c,	// (0x00053c2f) list_single_graphic_pane_fp_g_ParamLimits

0xfb6c,	// (0x00053c2f) list_single_graphic_pane_fp_g

0x5fe5,	// (0x0004a0a8) list_single_graphic_pane_fp_t1_ParamLimits

0x5fe5,	// (0x0004a0a8) list_single_graphic_pane_fp_t1

0x5fd9,	// (0x0004a09c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5fd9,	// (0x0004a09c) list_single_graphic_heading_pane_fp_g1

0xc6bd,	// (0x00050780) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6bd,	// (0x00050780) list_single_graphic_heading_pane_fp_g2

0x25e3,	// (0x000466a6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x25e3,	// (0x000466a6) list_single_graphic_heading_pane_fp_g3

0xc7cb,	// (0x0005088e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc7cb,	// (0x0005088e) list_single_graphic_heading_pane_fp_g4

0xc6c9,	// (0x0005078c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6c9,	// (0x0005078c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6c,	// (0x00053c2f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6c,	// (0x00053c2f) list_single_graphic_heading_pane_fp_g

0x5ffb,	// (0x0004a0be) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5ffb,	// (0x0004a0be) list_single_graphic_heading_pane_fp_t1

0x6011,	// (0x0004a0d4) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6011,	// (0x0004a0d4) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb77,	// (0x00053c3a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb77,	// (0x00053c3a) list_single_graphic_heading_pane_fp_t

0x6023,	// (0x0004a0e6) list_single_cale_day_pane_fp_g1_ParamLimits

0x6023,	// (0x0004a0e6) list_single_cale_day_pane_fp_g1

0xc6d5,	// (0x00050798) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6d5,	// (0x00050798) list_single_cale_day_pane_fp_g2

0x899b,	// (0x0004ca5e) list_single_cale_day_pane_fp_g3_ParamLimits

0x899b,	// (0x0004ca5e) list_single_cale_day_pane_fp_g3

0x89c3,	// (0x0004ca86) list_single_cale_day_pane_fp_g4_ParamLimits

0x89c3,	// (0x0004ca86) list_single_cale_day_pane_fp_g4

0x89e7,	// (0x0004caaa) list_single_cale_day_pane_fp_g5_ParamLimits

0x89e7,	// (0x0004caaa) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7c,	// (0x00053c3f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7c,	// (0x00053c3f) list_single_cale_day_pane_fp_g

0x605b,	// (0x0004a11e) list_single_cale_day_pane_fp_t1_ParamLimits

0x605b,	// (0x0004a11e) list_single_cale_day_pane_fp_t1

0x6081,	// (0x0004a144) list_single_cale_day_pane_fp_t2_ParamLimits

0x6081,	// (0x0004a144) list_single_cale_day_pane_fp_t2

0x609a,	// (0x0004a15d) list_single_cale_day_pane_fp_t3_ParamLimits

0x609a,	// (0x0004a15d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb87,	// (0x00053c4a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb87,	// (0x00053c4a) list_single_cale_day_pane_fp_t

0xc6bd,	// (0x00050780) list_empty_pane_fp_g1_ParamLimits

0xc6bd,	// (0x00050780) list_empty_pane_fp_g1

0x60b3,	// (0x0004a176) list_empty_pane_fp_t1

0x60c1,	// (0x0004a184) list_empty_pane_fp_t2

0x0001,

0xfb8e,	// (0x00053c51) list_empty_pane_fp_t

0xc6bd,	// (0x00050780) list_single_heading_pane_fp_g1_ParamLimits

0xc6bd,	// (0x00050780) list_single_heading_pane_fp_g1

0x25e3,	// (0x000466a6) list_single_heading_pane_fp_g2_ParamLimits

0x25e3,	// (0x000466a6) list_single_heading_pane_fp_g2

0xc7cb,	// (0x0005088e) list_single_heading_pane_fp_g3_ParamLimits

0xc7cb,	// (0x0005088e) list_single_heading_pane_fp_g3

0x0002,

0xfb93,	// (0x00053c56) list_single_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00053c56) list_single_heading_pane_fp_g

0x60cf,	// (0x0004a192) list_single_heading_pane_fp_t1_ParamLimits

0x60cf,	// (0x0004a192) list_single_heading_pane_fp_t1

0x60e1,	// (0x0004a1a4) list_single_heading_pane_fp_t2_ParamLimits

0x60e1,	// (0x0004a1a4) list_single_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x00053c5d) list_single_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x00053c5d) list_single_heading_pane_fp_t

0x6dc7,	// (0x0004ae8a) aid_size_cell_fast

0x0b77,	// (0x00044c3a) soft_indicator_pane_cp1_t1

0x6dd0,	// (0x0004ae93) cell_app_pane_cp2_ParamLimits

0x6dd0,	// (0x0004ae93) cell_app_pane_cp2

0x875f,	// (0x0004c822) fep_hwr_candidate_drop_down_list_pane

0x3017,	// (0x000470da) fep_hwr_candidate_pane_g3_ParamLimits

0x3017,	// (0x000470da) fep_hwr_candidate_pane_g3

0x3024,	// (0x000470e7) fep_hwr_candidate_pane_g4_ParamLimits

0x3024,	// (0x000470e7) fep_hwr_candidate_pane_g4

0x0002,

0xfb0e,	// (0x00053bd1) fep_hwr_candidate_pane_g_ParamLimits

0xfb0e,	// (0x00053bd1) fep_hwr_candidate_pane_g

0xc17d,	// (0x00050240) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc17d,	// (0x00050240) fep_vkb_candidate_drop_down_list_pane

0xc580,	// (0x00050643) fep_vkb_candidate_pane_g3

0xc588,	// (0x0005064b) fep_vkb_candidate_pane_g4

0x0002,

0xfb3b,	// (0x00053bfe) fep_vkb_candidate_pane_g

0xc288,	// (0x0005034b) cell_hwr_candidate_pane_g1_ParamLimits

0xc59f,	// (0x00050662) cell_hwr_candidate_pane_g3_ParamLimits

0xc59f,	// (0x00050662) cell_hwr_candidate_pane_g3

0xc5c0,	// (0x00050683) cell_hwr_candidate_pane_g4_ParamLimits

0xc5c0,	// (0x00050683) cell_hwr_candidate_pane_g4

0x0002,

0xfb55,	// (0x00053c18) cell_hwr_candidate_pane_g_ParamLimits

0xfb55,	// (0x00053c18) cell_hwr_candidate_pane_g

0xc5e1,	// (0x000506a4) cell_vkb_candidate_pane_g3_ParamLimits

0xc5e1,	// (0x000506a4) cell_vkb_candidate_pane_g3

0xc5fc,	// (0x000506bf) cell_vkb_candidate_pane_g4_ParamLimits

0xc5fc,	// (0x000506bf) cell_vkb_candidate_pane_g4

0xc6e1,	// (0x000507a4) cell_app_pane_cp2_g1_ParamLimits

0xc6e1,	// (0x000507a4) cell_app_pane_cp2_g1

0xc6ff,	// (0x000507c2) cell_app_pane_cp2_g2_ParamLimits

0xc6ff,	// (0x000507c2) cell_app_pane_cp2_g2

0x0001,

0xfb9f,	// (0x00053c62) cell_app_pane_cp2_g_ParamLimits

0xfb9f,	// (0x00053c62) cell_app_pane_cp2_g

0xc70b,	// (0x000507ce) cell_app_pane_cp2_t1_ParamLimits

0xc70b,	// (0x000507ce) cell_app_pane_cp2_t1

0x0e20,	// (0x00044ee3) grid_highlight_pane_cp1_ParamLimits

0x0e20,	// (0x00044ee3) grid_highlight_pane_cp1

0x8a0b,	// (0x0004cace) cell_hwr_candidate_pane_cp1_ParamLimits

0x8a0b,	// (0x0004cace) cell_hwr_candidate_pane_cp1

0xc288,	// (0x0005034b) fep_hwr_candidate_drop_down_list_pane_g1

0xc71d,	// (0x000507e0) fep_hwr_candidate_drop_down_list_pane_g2

0xc72a,	// (0x000507ed) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba4,	// (0x00053c67) fep_hwr_candidate_drop_down_list_pane_g

0x8a2a,	// (0x0004caed) fep_hwr_candidate_drop_down_list_scroll_pane

0x8a33,	// (0x0004caf6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8a33,	// (0x0004caf6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8a40,	// (0x0004cb03) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8a40,	// (0x0004cb03) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8a4d,	// (0x0004cb10) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8a4d,	// (0x0004cb10) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5e1,	// (0x000506a4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5e1,	// (0x000506a4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5fc,	// (0x000506bf) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5fc,	// (0x000506bf) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8a5a,	// (0x0004cb1d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8a5a,	// (0x0004cb1d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8a75,	// (0x0004cb38) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8a75,	// (0x0004cb38) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8a90,	// (0x0004cb53) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8a90,	// (0x0004cb53) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbab,	// (0x00053c6e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbab,	// (0x00053c6e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc737,	// (0x000507fa) cell_vkb_candidate_pane_cp1_ParamLimits

0xc737,	// (0x000507fa) cell_vkb_candidate_pane_cp1

0xc288,	// (0x0005034b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc288,	// (0x0005034b) fep_vkb_candidate_drop_down_list_pane_g1

0xc71d,	// (0x000507e0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc71d,	// (0x000507e0) fep_vkb_candidate_drop_down_list_pane_g2

0xc72a,	// (0x000507ed) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc72a,	// (0x000507ed) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba4,	// (0x00053c67) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba4,	// (0x00053c67) fep_vkb_candidate_drop_down_list_pane_g

0xc757,	// (0x0005081a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc757,	// (0x0005081a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc764,	// (0x00050827) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc764,	// (0x00050827) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc771,	// (0x00050834) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc771,	// (0x00050834) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc77d,	// (0x00050840) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc77d,	// (0x00050840) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc59f,	// (0x00050662) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc59f,	// (0x00050662) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5c0,	// (0x00050683) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5c0,	// (0x00050683) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc789,	// (0x0005084c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc789,	// (0x0005084c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7df,	// (0x000508a2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7df,	// (0x000508a2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc800,	// (0x000508c3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc800,	// (0x000508c3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x00053c7f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x00053c7f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6678,	// (0x0004a73b) title_pane_g1_ParamLimits

0x6685,	// (0x0004a748) title_pane_g2_ParamLimits

0xf527,	// (0x000535ea) title_pane_g_ParamLimits

0x126a,	// (0x0004532d) aid_call2_pane

0x1262,	// (0x00045325) aid_call_pane

0x1272,	// (0x00045335) popup_clock_analogue_window_g1

0x1272,	// (0x00045335) popup_clock_analogue_window_g2

0x70d8,	// (0x0004b19b) popup_clock_analogue_window_g3

0x70e1,	// (0x0004b1a4) popup_clock_analogue_window_g4

0x0a04,	// (0x00044ac7) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x0005378f) popup_clock_analogue_window_g

0x70e9,	// (0x0004b1ac) popup_clock_analogue_window_t1

0x7137,	// (0x0004b1fa) clock_digital_number_pane_ParamLimits

0x7137,	// (0x0004b1fa) clock_digital_number_pane

0x7143,	// (0x0004b206) clock_digital_number_pane_cp02_ParamLimits

0x7143,	// (0x0004b206) clock_digital_number_pane_cp02

0x714f,	// (0x0004b212) clock_digital_number_pane_cp03_ParamLimits

0x714f,	// (0x0004b212) clock_digital_number_pane_cp03

0x715b,	// (0x0004b21e) clock_digital_number_pane_cp04_ParamLimits

0x715b,	// (0x0004b21e) clock_digital_number_pane_cp04

0x7167,	// (0x0004b22a) clock_digital_separator_pane_ParamLimits

0x7167,	// (0x0004b22a) clock_digital_separator_pane

0x7173,	// (0x0004b236) popup_clock_digital_window_t1_ParamLimits

0x7173,	// (0x0004b236) popup_clock_digital_window_t1

0x0a04,	// (0x00044ac7) clock_digital_number_pane_g1

0x0a04,	// (0x00044ac7) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x0005379a) clock_digital_number_pane_g

0x0a04,	// (0x00044ac7) clock_digital_separator_pane_g1

0x0a04,	// (0x00044ac7) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x0005379a) clock_digital_separator_pane_g

0x7e29,	// (0x0004beec) aid_fill_nsta_ParamLimits

0x7f75,	// (0x0004c038) indicator_nsta_pane_ParamLimits

0x80ee,	// (0x0004c1b1) popup_clock_analogue_window

0x80ee,	// (0x0004c1b1) popup_clock_digital_window

0xb9ec,	// (0x0004faaf) grid_indicator_nsta_pane_ParamLimits

0xba15,	// (0x0004fad8) clock_nsta_pane_t2

0x0001,

0xfa8e,	// (0x00053b51) clock_nsta_pane_t

0x7003,	// (0x0004b0c6) aid_size_max_handle

0x700d,	// (0x0004b0d0) aid_size_min_handle

0x16e0,	// (0x000457a3) editor_scroll_pane

0xc81b,	// (0x000508de) ex_editor_pane

0x0f52,	// (0x00045015) scroll_pane_cp13

0x0dc8,	// (0x00044e8b) scroll_pane_cp14

0x12a1,	// (0x00045364) scroll_pane_cp36

0x710b,	// (0x0004b1ce) list_single_graphic_hl_pane_cp2_ParamLimits

0x710b,	// (0x0004b1ce) list_single_graphic_hl_pane_cp2

0x5c56,	// (0x00049d19) list_single_graphic_hl_pane_ParamLimits

0x5c56,	// (0x00049d19) list_single_graphic_hl_pane

0x60f7,	// (0x0004a1ba) aid_size_min_hl_cp1

0xc823,	// (0x000508e6) list_highlight_pane_cp34_ParamLimits

0xc823,	// (0x000508e6) list_highlight_pane_cp34

0xc834,	// (0x000508f7) list_single_graphic_hl_pane_g1_ParamLimits

0xc834,	// (0x000508f7) list_single_graphic_hl_pane_g1

0x6100,	// (0x0004a1c3) list_single_graphic_hl_pane_g2_ParamLimits

0x6100,	// (0x0004a1c3) list_single_graphic_hl_pane_g2

0x6100,	// (0x0004a1c3) list_single_graphic_hl_pane_g3_ParamLimits

0x6100,	// (0x0004a1c3) list_single_graphic_hl_pane_g3

0x610c,	// (0x0004a1cf) list_single_graphic_hl_pane_g4_ParamLimits

0x610c,	// (0x0004a1cf) list_single_graphic_hl_pane_g4

0x6118,	// (0x0004a1db) list_single_graphic_hl_pane_g5_ParamLimits

0x6118,	// (0x0004a1db) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x00053c90) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x00053c90) list_single_graphic_hl_pane_g

0x612c,	// (0x0004a1ef) list_single_graphic_hl_pane_t1_ParamLimits

0x612c,	// (0x0004a1ef) list_single_graphic_hl_pane_t1

0xc841,	// (0x00050904) aid_size_min_hl_cp2

0xc84a,	// (0x0005090d) list_highlight_pane_cp34_cp2_ParamLimits

0xc84a,	// (0x0005090d) list_highlight_pane_cp34_cp2

0xc834,	// (0x000508f7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc834,	// (0x000508f7) list_single_graphic_hl_pane_g1_cp2

0xc857,	// (0x0005091a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc857,	// (0x0005091a) list_single_graphic_hl_pane_g2_cp2

0xc863,	// (0x00050926) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc863,	// (0x00050926) list_single_graphic_hl_pane_g3_cp2

0x163f,	// (0x00045702) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x163f,	// (0x00045702) list_single_graphic_hl_pane_g4_cp2

0xc871,	// (0x00050934) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc871,	// (0x00050934) list_single_graphic_hl_pane_g5_cp2

0x7717,	// (0x0004b7da) control_pane_g4_ParamLimits

0x7717,	// (0x0004b7da) control_pane_g4

0x0f62,	// (0x00045025) bg_popup_sub_pane_cp10_ParamLimits

0xc022,	// (0x000500e5) list_choice_list_pane_ParamLimits

0xc031,	// (0x000500f4) scroll_pane_cp23

0x0b94,	// (0x00044c57) bg_popup_preview_window_pane_cp02_ParamLimits

0xc661,	// (0x00050724) list_preview_fixed_pane_ParamLimits

0xc677,	// (0x0005073a) list_preview_fixed_pane_cp_ParamLimits

0xc677,	// (0x0005073a) list_preview_fixed_pane_cp

0xc683,	// (0x00050746) popup_preview_fixed_window_g1_ParamLimits

0xc683,	// (0x00050746) popup_preview_fixed_window_g1

0xc68f,	// (0x00050752) popup_preview_fixed_window_g2_ParamLimits

0xc68f,	// (0x00050752) popup_preview_fixed_window_g2

0x0002,

0xfb5c,	// (0x00053c1f) popup_preview_fixed_window_g_ParamLimits

0xfb5c,	// (0x00053c1f) popup_preview_fixed_window_g

0x6edf,	// (0x0004afa2) aid_navi_side_left_pane_ParamLimits

0x6ef4,	// (0x0004afb7) aid_navi_side_right_pane_ParamLimits

0x6f0c,	// (0x0004afcf) navi_icon_pane_stacon_ParamLimits

0x6f20,	// (0x0004afe3) navi_navi_pane_stacon_ParamLimits

0x6f0c,	// (0x0004afcf) navi_text_pane_stacon_ParamLimits

0x09fa,	// (0x00044abd) main_text_info_pane

0xc89b,	// (0x0005095e) listscroll_text_info_pane

0xc8a3,	// (0x00050966) list_text_info_pane_ParamLimits

0xc8a3,	// (0x00050966) list_text_info_pane

0xc8b2,	// (0x00050975) scroll_pane_cp24_ParamLimits

0xc8b2,	// (0x00050975) scroll_pane_cp24

0xc8d0,	// (0x00050993) list_text_info_pane_t1_ParamLimits

0xc8d0,	// (0x00050993) list_text_info_pane_t1

0x78b0,	// (0x0004b973) popup_fast_swap2_window_ParamLimits

0x78b0,	// (0x0004b973) popup_fast_swap2_window

0xc904,	// (0x000509c7) aid_size_cell_fast2

0x09fa,	// (0x00044abd) bg_popup_window_pane_cp17

0x9ed1,	// (0x0004df94) heading_pane_cp2

0xc90e,	// (0x000509d1) listscroll_fast2_pane

0xc916,	// (0x000509d9) grid_fast2_pane

0xc920,	// (0x000509e3) listscroll_fast2_pane_g1

0xc928,	// (0x000509eb) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x00053c9b) listscroll_fast2_pane_g

0x0f52,	// (0x00045015) scroll_pane_cp26

0xc932,	// (0x000509f5) cell_fast2_pane_ParamLimits

0xc932,	// (0x000509f5) cell_fast2_pane

0xc947,	// (0x00050a0a) cell_fast2_pane_g1

0xc950,	// (0x00050a13) cell_fast2_pane_g2

0xc959,	// (0x00050a1c) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x00053ca0) cell_fast2_pane_g

0x0cff,	// (0x00044dc2) grid_highlight_pane_cp9

0x0d14,	// (0x00044dd7) main_eswt_pane_ParamLimits

0x0d14,	// (0x00044dd7) main_eswt_pane

0xc8c7,	// (0x0005098a) list_single_text_info_pane

0xc961,	// (0x00050a24) eswt_ctrl_button_pane

0xc961,	// (0x00050a24) eswt_ctrl_canvas_pane

0xc969,	// (0x00050a2c) eswt_ctrl_combo_pane

0xc961,	// (0x00050a24) eswt_ctrl_default_pane

0xc961,	// (0x00050a24) eswt_ctrl_label_pane

0xc971,	// (0x00050a34) eswt_ctrl_wait_pane

0xc979,	// (0x00050a3c) eswt_shell_pane

0x09fa,	// (0x00044abd) listscroll_eswt_app_pane

0xc999,	// (0x00050a5c) popup_eswt_tasktip_window_ParamLimits

0xc999,	// (0x00050a5c) popup_eswt_tasktip_window

0x9ade,	// (0x0004dba1) bg_popup_window_pane_cp18

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1_ParamLimits

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2_ParamLimits

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2

0xc9c4,	// (0x00050a87) eswt_control_pane_g3_ParamLimits

0xc9c4,	// (0x00050a87) eswt_control_pane_g3

0xc9d1,	// (0x00050a94) eswt_control_pane_g4_ParamLimits

0xc9d1,	// (0x00050a94) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x00053ca7) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x00053ca7) eswt_control_pane_g

0x0e20,	// (0x00044ee3) bg_button_pane_ParamLimits

0x0e20,	// (0x00044ee3) bg_button_pane

0x0d14,	// (0x00044dd7) common_borders_pane_copy2_ParamLimits

0x0d14,	// (0x00044dd7) common_borders_pane_copy2

0xc9de,	// (0x00050aa1) control_button_pane_g1_ParamLimits

0xc9de,	// (0x00050aa1) control_button_pane_g1

0xc9ea,	// (0x00050aad) control_button_pane_g2_ParamLimits

0xc9ea,	// (0x00050aad) control_button_pane_g2

0xc9f6,	// (0x00050ab9) control_button_pane_g3_ParamLimits

0xc9f6,	// (0x00050ab9) control_button_pane_g3

0x0002,

0xfbed,	// (0x00053cb0) control_button_pane_g_ParamLimits

0xfbed,	// (0x00053cb0) control_button_pane_g

0xca0a,	// (0x00050acd) control_button_pane_t1

0xca18,	// (0x00050adb) control_button_pane_t2

0x0001,

0xfbf4,	// (0x00053cb7) control_button_pane_t

0x9a52,	// (0x0004db15) bg_button_pane_g1

0x9a5a,	// (0x0004db1d) bg_button_pane_g2

0x9a62,	// (0x0004db25) bg_button_pane_g3

0x9a6a,	// (0x0004db2d) bg_button_pane_g4

0x9a72,	// (0x0004db35) bg_button_pane_g5

0x9a7a,	// (0x0004db3d) bg_button_pane_g6

0x9a82,	// (0x0004db45) bg_button_pane_g7

0x9a8a,	// (0x0004db4d) bg_button_pane_g8

0x9a92,	// (0x0004db55) bg_button_pane_g9

0x0008,

0xf83a,	// (0x000538fd) bg_button_pane_g

0xbfdd,	// (0x000500a0) common_borders_pane_ParamLimits

0xbfdd,	// (0x000500a0) common_borders_pane

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1_copy1_ParamLimits

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1_copy1

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2_copy1_ParamLimits

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2_copy1

0xc9c4,	// (0x00050a87) eswt_control_pane_g3_copy1_ParamLimits

0xc9c4,	// (0x00050a87) eswt_control_pane_g3_copy1

0xc9d1,	// (0x00050a94) eswt_control_pane_g4_copy1_ParamLimits

0xc9d1,	// (0x00050a94) eswt_control_pane_g4_copy1

0xc018,	// (0x000500db) bg_eswt_ctrl_canvas_pane_g1

0xbfdd,	// (0x000500a0) common_borders_pane_cp2_ParamLimits

0xbfdd,	// (0x000500a0) common_borders_pane_cp2

0xbfdd,	// (0x000500a0) common_borders_pane_cp3_ParamLimits

0xbfdd,	// (0x000500a0) common_borders_pane_cp3

0xca26,	// (0x00050ae9) separator_horizontal_pane

0xca2e,	// (0x00050af1) separator_vertical_pane

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1_copy2_ParamLimits

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1_copy2

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2_copy2_ParamLimits

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2_copy2

0xc9c4,	// (0x00050a87) eswt_control_pane_g3_copy2_ParamLimits

0xc9c4,	// (0x00050a87) eswt_control_pane_g3_copy2

0xc9d1,	// (0x00050a94) eswt_control_pane_g4_copy2_ParamLimits

0xc9d1,	// (0x00050a94) eswt_control_pane_g4_copy2

0x09fa,	// (0x00044abd) common_borders_pane_cp4

0xca37,	// (0x00050afa) separator_horizontal_pane_g1

0xca40,	// (0x00050b03) separator_horizontal_pane_g2

0xca49,	// (0x00050b0c) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x00053cbc) separator_horizontal_pane_g

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1_copy3_ParamLimits

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1_copy3

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2_copy3_ParamLimits

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2_copy3

0xc9c4,	// (0x00050a87) eswt_control_pane_g3_copy3_ParamLimits

0xc9c4,	// (0x00050a87) eswt_control_pane_g3_copy3

0xc9d1,	// (0x00050a94) eswt_control_pane_g4_copy3_ParamLimits

0xc9d1,	// (0x00050a94) eswt_control_pane_g4_copy3

0x09fa,	// (0x00044abd) common_borders_pane_cp5

0xca52,	// (0x00050b15) separator_vertical_pane_g1

0xca5b,	// (0x00050b1e) separator_vertical_pane_g2

0xca64,	// (0x00050b27) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x00053cc3) separator_vertical_pane_g

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1_copy4_ParamLimits

0xc9aa,	// (0x00050a6d) eswt_control_pane_g1_copy4

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2_copy4_ParamLimits

0xc9b7,	// (0x00050a7a) eswt_control_pane_g2_copy4

0xc9c4,	// (0x00050a87) eswt_control_pane_g3_copy4_ParamLimits

0xc9c4,	// (0x00050a87) eswt_control_pane_g3_copy4

0xc9d1,	// (0x00050a94) eswt_control_pane_g4_copy4_ParamLimits

0xc9d1,	// (0x00050a94) eswt_control_pane_g4_copy4

0xca6d,	// (0x00050b30) eswt_ctrl_combo_button_pane

0xca75,	// (0x00050b38) eswt_ctrl_input_pane

0xca7d,	// (0x00050b40) popup_choice_list_window_cp70

0xca85,	// (0x00050b48) eswt_ctrl_input_pane_t1

0x09fa,	// (0x00044abd) input_focus_pane_cp70

0xbfdd,	// (0x000500a0) bg_button_pane_cp70_ParamLimits

0xbfdd,	// (0x000500a0) bg_button_pane_cp70

0xca93,	// (0x00050b56) eswt_ctrl_combo_button_pane_g1

0xca9b,	// (0x00050b5e) wait_bar_pane_cp70

0x9ade,	// (0x0004dba1) bg_popup_window_pane_cp70_ParamLimits

0x9ade,	// (0x0004dba1) bg_popup_window_pane_cp70

0xcaa3,	// (0x00050b66) popup_eswt_tasktip_window_t1

0xcab9,	// (0x00050b7c) wait_bar_pane_cp71_ParamLimits

0xcab9,	// (0x00050b7c) wait_bar_pane_cp71

0xcac5,	// (0x00050b88) grid_eswt_app_pane

0x1145,	// (0x00045208) scroll_pane_cp70

0xcace,	// (0x00050b91) cell_eswt_app_pane_ParamLimits

0xcace,	// (0x00050b91) cell_eswt_app_pane

0xcafe,	// (0x00050bc1) cell_eswt_app_pane_g1_ParamLimits

0xcafe,	// (0x00050bc1) cell_eswt_app_pane_g1

0xcb2d,	// (0x00050bf0) cell_eswt_app_pane_g2_ParamLimits

0xcb2d,	// (0x00050bf0) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x00053cca) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x00053cca) cell_eswt_app_pane_g

0xcb51,	// (0x00050c14) cell_eswt_app_pane_t1_ParamLimits

0xcb51,	// (0x00050c14) cell_eswt_app_pane_t1

0xcb83,	// (0x00050c46) grid_highlight_pane_cp70_ParamLimits

0xcb83,	// (0x00050c46) grid_highlight_pane_cp70

0x15d6,	// (0x00045699) set_content_pane_g1

0x76ad,	// (0x0004b770) status_small_volume_pane

0x8aab,	// (0x0004cb6e) status_small_volume_pane_g1

0x8ab3,	// (0x0004cb76) volume_small2_pane

0x8abc,	// (0x0004cb7f) volume_small2_pane_g1

0x8ac5,	// (0x0004cb88) volume_small2_pane_g2

0x8ace,	// (0x0004cb91) volume_small2_pane_g3

0x8ad7,	// (0x0004cb9a) volume_small2_pane_g4

0x8ae0,	// (0x0004cba3) volume_small2_pane_g5

0x8ae9,	// (0x0004cbac) volume_small2_pane_g6

0x8af2,	// (0x0004cbb5) volume_small2_pane_g7

0x8afb,	// (0x0004cbbe) volume_small2_pane_g8

0x8b04,	// (0x0004cbc7) volume_small2_pane_g9

0x8b0d,	// (0x0004cbd0) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x00053ccf) volume_small2_pane_g

0xc3d0,	// (0x00050493) fep_vkb_top_text_pane_g1_ParamLimits

0xc3eb,	// (0x000504ae) fep_vkb_top_text_pane_t1_ParamLimits

0xc69b,	// (0x0005075e) popup_preview_fixed_window_g3_ParamLimits

0xc69b,	// (0x0005075e) popup_preview_fixed_window_g3

0x7d5f,	// (0x0004be22) popup_toolbar_trans_pane

0xae0c,	// (0x0004eecf) aid_height_set_list_ParamLimits

0xae1d,	// (0x0004eee0) aid_size_parent_ParamLimits

0x0f62,	// (0x00045025) list_highlight_pane_cp2_ParamLimits

0x15d6,	// (0x00045699) set_content_pane_g1_ParamLimits

0x5c74,	// (0x00049d37) list_single_image_pane_ParamLimits

0x5c74,	// (0x00049d37) list_single_image_pane

0xcb8f,	// (0x00050c52) aid_size_cell_image_ParamLimits

0xcb8f,	// (0x00050c52) aid_size_cell_image

0xcb9c,	// (0x00050c5f) grid_single_image_pane_ParamLimits

0xcb9c,	// (0x00050c5f) grid_single_image_pane

0x25e3,	// (0x000466a6) list_single_image_pane_g1_ParamLimits

0x25e3,	// (0x000466a6) list_single_image_pane_g1

0xc7cb,	// (0x0005088e) list_single_image_pane_g2_ParamLimits

0xc7cb,	// (0x0005088e) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x00053ce4) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x00053ce4) list_single_image_pane_g

0xcba8,	// (0x00050c6b) list_single_image_pane_t1_ParamLimits

0xcba8,	// (0x00050c6b) list_single_image_pane_t1

0xcbbe,	// (0x00050c81) cell_image_list_pane_ParamLimits

0xcbbe,	// (0x00050c81) cell_image_list_pane

0xcbd2,	// (0x00050c95) cell_image_list_pane_g1

0xcbdb,	// (0x00050c9e) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x00053ce9) cell_image_list_pane_g

0xcbe4,	// (0x00050ca7) aid_size_cell_tb_trans_pane

0x0e20,	// (0x00044ee3) bg_tb_trans_pane

0xcbf6,	// (0x00050cb9) grid_tb_trans_pane

0x9a52,	// (0x0004db15) bg_tb_trans_pane_g1

0x9a5a,	// (0x0004db1d) bg_tb_trans_pane_g2

0x9a62,	// (0x0004db25) bg_tb_trans_pane_g3

0x9a6a,	// (0x0004db2d) bg_tb_trans_pane_g4

0x9a72,	// (0x0004db35) bg_tb_trans_pane_g5

0x9a8a,	// (0x0004db4d) bg_tb_trans_pane_g6

0x9a92,	// (0x0004db55) bg_tb_trans_pane_g7

0x9a7a,	// (0x0004db3d) bg_tb_trans_pane_g8

0x9a82,	// (0x0004db45) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x00053cee) bg_tb_trans_pane_g

0xcc0a,	// (0x00050ccd) cell_toolbar_trans_pane_ParamLimits

0xcc0a,	// (0x00050ccd) cell_toolbar_trans_pane

0xc018,	// (0x000500db) cell_toolbar_trans_pane_g1

0xbbea,	// (0x0004fcad) list_form2_midp_pane_t1

0xbbf8,	// (0x0004fcbb) list_form2_midp_pane_t2

0x0001,

0xfad4,	// (0x00053b97) list_form2_midp_pane_t

0xbc06,	// (0x0004fcc9) scroll_pane_cp51_ParamLimits

0xbdc2,	// (0x0004fe85) form2_midp_wait_pane_g1

0xbdcb,	// (0x0004fe8e) form2_midp_wait_pane_g2

0xbdd4,	// (0x0004fe97) form2_midp_wait_pane_g3

0x0002,

0xfae9,	// (0x00053bac) form2_midp_wait_pane_g

0x0a6a,	// (0x00044b2d) list_highlight_pane_cp21_ParamLimits

0xbe1c,	// (0x0004fedf) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe2b,	// (0x0004feee) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x84fc,	// (0x0004c5bf) list_single_2graphic_im_pane_ParamLimits

0x84fc,	// (0x0004c5bf) list_single_2graphic_im_pane

0xcc30,	// (0x00050cf3) list_single_2graphic_im_pane_g1_ParamLimits

0xcc30,	// (0x00050cf3) list_single_2graphic_im_pane_g1

0xcc41,	// (0x00050d04) list_single_2graphic_im_pane_g2_ParamLimits

0xcc41,	// (0x00050d04) list_single_2graphic_im_pane_g2

0xcc4d,	// (0x00050d10) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4d,	// (0x00050d10) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x00053d01) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x00053d01) list_single_2graphic_im_pane_g

0xcc6d,	// (0x00050d30) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6d,	// (0x00050d30) list_single_2graphic_im_pane_t1

0xc6a7,	// (0x0005076a) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6a7,	// (0x0005076a) list_single_graphic_2heading_pane_fp

0x5fd9,	// (0x0004a09c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5fd9,	// (0x0004a09c) list_single_graphic_2heading_pane_fp_g1

0xc6bd,	// (0x00050780) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6bd,	// (0x00050780) list_single_graphic_2heading_pane_fp_g2

0x25e3,	// (0x000466a6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x25e3,	// (0x000466a6) list_single_graphic_2heading_pane_fp_g3

0xc7cb,	// (0x0005088e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc7cb,	// (0x0005088e) list_single_graphic_2heading_pane_fp_g4

0xc6c9,	// (0x0005078c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6c9,	// (0x0005078c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6c,	// (0x00053c2f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6c,	// (0x00053c2f) list_single_graphic_2heading_pane_fp_g

0x6142,	// (0x0004a205) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6142,	// (0x0004a205) list_single_graphic_2heading_pane_fp_t1

0x6011,	// (0x0004a0d4) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6011,	// (0x0004a0d4) list_single_graphic_2heading_pane_fp_t2

0x6158,	// (0x0004a21b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6158,	// (0x0004a21b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x00053d0a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x00053d0a) list_single_graphic_2heading_pane_fp_t

0xc0a4,	// (0x00050167) fep_hwr_write_pane_g5_ParamLimits

0xc0a4,	// (0x00050167) fep_hwr_write_pane_g5

0xc0b0,	// (0x00050173) fep_hwr_write_pane_g6_ParamLimits

0xc0b0,	// (0x00050173) fep_hwr_write_pane_g6

0xc979,	// (0x00050a3c) eswt_shell_pane_ParamLimits

0x9ade,	// (0x0004dba1) bg_popup_window_pane_cp18_ParamLimits

0x9ed1,	// (0x0004df94) heading_pane_cp70

0xcaa3,	// (0x00050b66) popup_eswt_tasktip_window_t1_ParamLimits

0x7e7e,	// (0x0004bf41) aid_touch_tab_arrow_left

0x7e8d,	// (0x0004bf50) aid_touch_tab_arrow_right

0x6696,	// (0x0004a759) title_pane_g3_ParamLimits

0x6696,	// (0x0004a759) title_pane_g3

0x0de8,	// (0x00044eab) set_value_pane_g1

0x7d5f,	// (0x0004be22) popup_toolbar_trans_pane_ParamLimits

0xcbe4,	// (0x00050ca7) aid_size_cell_tb_trans_pane_ParamLimits

0x0e20,	// (0x00044ee3) bg_tb_trans_pane_ParamLimits

0xcbf6,	// (0x00050cb9) grid_tb_trans_pane_ParamLimits

0x0b94,	// (0x00044c57) cont_note_pane_ParamLimits

0x0b94,	// (0x00044c57) cont_note_pane

0x0d14,	// (0x00044dd7) cont_snote2_single_text_pane_ParamLimits

0x0d14,	// (0x00044dd7) cont_snote2_single_text_pane

0x0d14,	// (0x00044dd7) cont_snote2_single_graphic_pane_ParamLimits

0x0d14,	// (0x00044dd7) cont_snote2_single_graphic_pane

0xa0f8,	// (0x0004e1bb) cont_note_wait_pane_ParamLimits

0xa0f8,	// (0x0004e1bb) cont_note_wait_pane

0xa0f8,	// (0x0004e1bb) cont_note_image_pane_ParamLimits

0xa0f8,	// (0x0004e1bb) cont_note_image_pane

0xcc9e,	// (0x00050d61) popup_note2_window_g1_ParamLimits

0xcc9e,	// (0x00050d61) popup_note2_window_g1

0xcccf,	// (0x00050d92) popup_note2_window_t1_ParamLimits

0xcccf,	// (0x00050d92) popup_note2_window_t1

0xcd14,	// (0x00050dd7) popup_note2_window_t2_ParamLimits

0xcd14,	// (0x00050dd7) popup_note2_window_t2

0xcd59,	// (0x00050e1c) popup_note2_window_t3_ParamLimits

0xcd59,	// (0x00050e1c) popup_note2_window_t3

0xcd9e,	// (0x00050e61) popup_note2_window_t4_ParamLimits

0xcd9e,	// (0x00050e61) popup_note2_window_t4

0x0c18,	// (0x00044cdb) popup_note2_window_t5_ParamLimits

0x0c18,	// (0x00044cdb) popup_note2_window_t5

0x0004,

0xfc53,	// (0x00053d16) popup_note2_window_t_ParamLimits

0xfc53,	// (0x00053d16) popup_note2_window_t

0xcdcd,	// (0x00050e90) popup_note2_image_window_g1_ParamLimits

0xcdcd,	// (0x00050e90) popup_note2_image_window_g1

0xcdd9,	// (0x00050e9c) popup_note2_image_window_g2_ParamLimits

0xcdd9,	// (0x00050e9c) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x00053d21) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x00053d21) popup_note2_image_window_g

0xcdeb,	// (0x00050eae) popup_note2_image_window_t1_ParamLimits

0xcdeb,	// (0x00050eae) popup_note2_image_window_t1

0xce03,	// (0x00050ec6) popup_note2_image_window_t2_ParamLimits

0xce03,	// (0x00050ec6) popup_note2_image_window_t2

0xce1b,	// (0x00050ede) popup_note2_image_window_t3_ParamLimits

0xce1b,	// (0x00050ede) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x00053d26) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x00053d26) popup_note2_image_window_t

0xa106,	// (0x0004e1c9) popup_note2_wait_window_g1_ParamLimits

0xa106,	// (0x0004e1c9) popup_note2_wait_window_g1

0xa112,	// (0x0004e1d5) popup_note2_wait_window_g2_ParamLimits

0xa112,	// (0x0004e1d5) popup_note2_wait_window_g2

0xa11e,	// (0x0004e1e1) popup_note2_wait_window_g3_ParamLimits

0xa11e,	// (0x0004e1e1) popup_note2_wait_window_g3

0x0002,

0xf81c,	// (0x000538df) popup_note2_wait_window_g_ParamLimits

0xf81c,	// (0x000538df) popup_note2_wait_window_g

0xce37,	// (0x00050efa) popup_note2_wait_window_t1_ParamLimits

0xce37,	// (0x00050efa) popup_note2_wait_window_t1

0xce55,	// (0x00050f18) popup_note2_wait_window_t2_ParamLimits

0xce55,	// (0x00050f18) popup_note2_wait_window_t2

0xce73,	// (0x00050f36) popup_note2_wait_window_t3_ParamLimits

0xce73,	// (0x00050f36) popup_note2_wait_window_t3

0xce85,	// (0x00050f48) popup_note2_wait_window_t4_ParamLimits

0xce85,	// (0x00050f48) popup_note2_wait_window_t4

0x0003,

0xfc6a,	// (0x00053d2d) popup_note2_wait_window_t_ParamLimits

0xfc6a,	// (0x00053d2d) popup_note2_wait_window_t

0xce97,	// (0x00050f5a) wait_bar2_pane_ParamLimits

0xce97,	// (0x00050f5a) wait_bar2_pane

0xceaf,	// (0x00050f72) popup_snote2_single_text_window_g1_ParamLimits

0xceaf,	// (0x00050f72) popup_snote2_single_text_window_g1

0xced7,	// (0x00050f9a) popup_snote2_single_text_window_t1_ParamLimits

0xced7,	// (0x00050f9a) popup_snote2_single_text_window_t1

0xcf23,	// (0x00050fe6) popup_snote2_single_text_window_t2_ParamLimits

0xcf23,	// (0x00050fe6) popup_snote2_single_text_window_t2

0xcf6f,	// (0x00051032) popup_snote2_single_text_window_t3_ParamLimits

0xcf6f,	// (0x00051032) popup_snote2_single_text_window_t3

0xcfb0,	// (0x00051073) popup_snote2_single_text_window_t4_ParamLimits

0xcfb0,	// (0x00051073) popup_snote2_single_text_window_t4

0xcfe6,	// (0x000510a9) popup_snote2_single_text_window_t5_ParamLimits

0xcfe6,	// (0x000510a9) popup_snote2_single_text_window_t5

0x0004,

0xfc73,	// (0x00053d36) popup_snote2_single_text_window_t_ParamLimits

0xfc73,	// (0x00053d36) popup_snote2_single_text_window_t

0xd011,	// (0x000510d4) popup_snote2_single_graphic_window_g1_ParamLimits

0xd011,	// (0x000510d4) popup_snote2_single_graphic_window_g1

0xd039,	// (0x000510fc) popup_snote2_single_graphic_window_g2_ParamLimits

0xd039,	// (0x000510fc) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7e,	// (0x00053d41) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7e,	// (0x00053d41) popup_snote2_single_graphic_window_g

0xd061,	// (0x00051124) popup_snote2_single_graphic_window_t1_ParamLimits

0xd061,	// (0x00051124) popup_snote2_single_graphic_window_t1

0xd0ad,	// (0x00051170) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0ad,	// (0x00051170) popup_snote2_single_graphic_window_t2

0xcf6f,	// (0x00051032) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf6f,	// (0x00051032) popup_snote2_single_graphic_window_t3

0xcfb0,	// (0x00051073) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfb0,	// (0x00051073) popup_snote2_single_graphic_window_t4

0xcfe6,	// (0x000510a9) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfe6,	// (0x000510a9) popup_snote2_single_graphic_window_t5

0x0004,

0xfc83,	// (0x00053d46) popup_snote2_single_graphic_window_t_ParamLimits

0xfc83,	// (0x00053d46) popup_snote2_single_graphic_window_t

0xbac3,	// (0x0004fb86) clock_nsta_pane_cp2_t1

0xbac3,	// (0x0004fb86) clock_nsta_pane_cp2_t2

0x0001,

0xfaaa,	// (0x00053b6d) clock_nsta_pane_cp2_t

0x58b4,	// (0x00049977) form_field_data_wide_pane_g1_ParamLimits

0x0e2e,	// (0x00044ef1) form_field_data_wide_pane_g2_ParamLimits

0x0e2e,	// (0x00044ef1) form_field_data_wide_pane_g2

0x0e3a,	// (0x00044efd) form_field_data_wide_pane_g3_ParamLimits

0x0e3a,	// (0x00044efd) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x00053712) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x00053712) form_field_data_wide_pane_g

0xb99f,	// (0x0004fa62) grid_touch_3_pane_ParamLimits

0xb99f,	// (0x0004fa62) grid_touch_3_pane

0xd0f9,	// (0x000511bc) cell_touch_3_pane_ParamLimits

0xd0f9,	// (0x000511bc) cell_touch_3_pane

0xc018,	// (0x000500db) cell_touch_3_pane_g1

0xc018,	// (0x000500db) cell_touch_3_pane_g2

0x0001,

0xfb2f,	// (0x00053bf2) cell_touch_3_pane_g

0x0c4a,	// (0x00044d0d) cont_query_data_pane

0x0c52,	// (0x00044d15) cont_query_data_pane_cp1

0xd127,	// (0x000511ea) button_value_adjust_pane_cp7

0xd12f,	// (0x000511f2) query_popup_pane_cp3

0x12d3,	// (0x00045396) bg_popup_sub_pane_cp22_ParamLimits

0x71ed,	// (0x0004b2b0) navi_navi_volume_pane_cp2

0x7205,	// (0x0004b2c8) popup_side_volume_key_window_g2

0x7211,	// (0x0004b2d4) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x000537a8) popup_side_volume_key_window_g

0x722b,	// (0x0004b2ee) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x000537af) popup_side_volume_key_window_t

0x746b,	// (0x0004b52e) popup_side_volume_key_window_ParamLimits

0x6cba,	// (0x0004ad7d) list_double_graphic_pane_g4_ParamLimits

0x6cba,	// (0x0004ad7d) list_double_graphic_pane_g4

0x853b,	// (0x0004c5fe) list_single_2heading_msg_pane_ParamLimits

0x853b,	// (0x0004c5fe) list_single_2heading_msg_pane

0x8b16,	// (0x0004cbd9) list_single_2heading_msg_pane_g1_ParamLimits

0x8b16,	// (0x0004cbd9) list_single_2heading_msg_pane_g1

0x6c5b,	// (0x0004ad1e) list_single_2heading_msg_pane_g2_ParamLimits

0x6c5b,	// (0x0004ad1e) list_single_2heading_msg_pane_g2

0x8b22,	// (0x0004cbe5) list_single_2heading_msg_pane_g3_ParamLimits

0x8b22,	// (0x0004cbe5) list_single_2heading_msg_pane_g3

0x8b2e,	// (0x0004cbf1) list_single_2heading_msg_pane_g4_ParamLimits

0x8b2e,	// (0x0004cbf1) list_single_2heading_msg_pane_g4

0x0003,

0xfc8e,	// (0x00053d51) list_single_2heading_msg_pane_g_ParamLimits

0xfc8e,	// (0x00053d51) list_single_2heading_msg_pane_g

0x6178,	// (0x0004a23b) list_single_2heading_msg_pane_t1_ParamLimits

0x6178,	// (0x0004a23b) list_single_2heading_msg_pane_t1

0x61a0,	// (0x0004a263) list_single_2heading_msg_pane_t2_ParamLimits

0x61a0,	// (0x0004a263) list_single_2heading_msg_pane_t2

0x61cf,	// (0x0004a292) list_single_2heading_msg_pane_t3_ParamLimits

0x61cf,	// (0x0004a292) list_single_2heading_msg_pane_t3

0x6208,	// (0x0004a2cb) list_single_2heading_msg_pane_t4_ParamLimits

0x6208,	// (0x0004a2cb) list_single_2heading_msg_pane_t4

0x0003,

0xfc97,	// (0x00053d5a) list_single_2heading_msg_pane_t_ParamLimits

0xfc97,	// (0x00053d5a) list_single_2heading_msg_pane_t

0x0a18,	// (0x00044adb) title_pane_g4_ParamLimits

0x0a18,	// (0x00044adb) title_pane_g4

0x6e30,	// (0x0004aef3) title_pane_stacon_g3_ParamLimits

0x6e30,	// (0x0004aef3) title_pane_stacon_g3

0xcc61,	// (0x00050d24) list_single_2graphic_im_pane_g4_ParamLimits

0xcc61,	// (0x00050d24) list_single_2graphic_im_pane_g4

0xab3f,	// (0x0004ec02) popup_side_volume_key_window_cp

0xb2f5,	// (0x0004f3b8) main_idle_act2_pane_t1

0x817e,	// (0x0004c241) toolbar_button_pane_g10

0x6c51,	// (0x0004ad14) popup_toolbar_window_cp1

0xbab4,	// (0x0004fb77) clock_nsta_pane_cp_t1

0xbab4,	// (0x0004fb77) clock_nsta_pane_cp_t2

0x0001,

0xfaa5,	// (0x00053b68) clock_nsta_pane_cp_t

0x71ed,	// (0x0004b2b0) navi_navi_volume_pane_cp2_ParamLimits

0x71f9,	// (0x0004b2bc) popup_side_volume_key_window_g1_ParamLimits

0x7205,	// (0x0004b2c8) popup_side_volume_key_window_g2_ParamLimits

0x7211,	// (0x0004b2d4) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x000537a8) popup_side_volume_key_window_g_ParamLimits

0x874b,	// (0x0004c80e) fep_hwr_aid_pane

0x2e87,	// (0x00046f4a) bg_fep_hwr_top_pane_g4_ParamLimits

0xc074,	// (0x00050137) fep_hwr_top_pane_g1_ParamLimits

0xc086,	// (0x00050149) fep_hwr_top_pane_g2_ParamLimits

0x8804,	// (0x0004c8c7) fep_hwr_top_pane_g3_ParamLimits

0xfafa,	// (0x00053bbd) fep_hwr_top_pane_g_ParamLimits

0x8819,	// (0x0004c8dc) fep_hwr_top_text_pane_ParamLimits

0xa902,	// (0x0004e9c5) aid_touch_tab_arrow_arrow_2

0xa90b,	// (0x0004e9ce) aid_touch_tab_arrow_left_2

0x875f,	// (0x0004c822) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8796,	// (0x0004c859) fep_hwr_prediction_pane

0xc1df,	// (0x000502a2) fep_vkb_prediction_pane

0xc2dc,	// (0x0005039f) fep_vkb_side_pane_g3_ParamLimits

0xc2dc,	// (0x0005039f) fep_vkb_side_pane_g3

0xc288,	// (0x0005034b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc71d,	// (0x000507e0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc72a,	// (0x000507ed) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba4,	// (0x00053c67) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd154,	// (0x00051217) fep_hwr_prediction_pane_g1

0x8b46,	// (0x0004cc09) fep_hwr_prediction_pane_g2

0x8b4e,	// (0x0004cc11) fep_hwr_prediction_pane_g3

0x8b56,	// (0x0004cc19) fep_hwr_prediction_pane_g4

0x0003,

0xfca0,	// (0x00053d63) fep_hwr_prediction_pane_g

0xd154,	// (0x00051217) fep_vkb_prediction_pane_g1

0xd15e,	// (0x00051221) fep_vkb_prediction_pane_g2

0xd166,	// (0x00051229) fep_vkb_prediction_pane_g3

0xd16e,	// (0x00051231) fep_vkb_prediction_pane_g4

0x0003,

0xfca9,	// (0x00053d6c) fep_vkb_prediction_pane_g

0x8458,	// (0x0004c51b) slider_set_pane_g3

0x846c,	// (0x0004c52f) slider_set_pane_g4

0x8484,	// (0x0004c547) slider_set_pane_g5

0x8458,	// (0x0004c51b) slider_set_pane_g6

0x849a,	// (0x0004c55d) slider_set_pane_g7

0xaf7e,	// (0x0004f041) slider_form_pane_g3

0xaf87,	// (0x0004f04a) slider_form_pane_g4

0xaf8f,	// (0x0004f052) slider_form_pane_g5

0xaf7e,	// (0x0004f041) slider_form_pane_g6

0xaf97,	// (0x0004f05a) slider_form_pane_g7

0xb5a1,	// (0x0004f664) slider_set_pane_vc_g3

0xb5aa,	// (0x0004f66d) slider_set_pane_vc_g4

0xb5b3,	// (0x0004f676) slider_set_pane_vc_g5

0xb5a1,	// (0x0004f664) slider_set_pane_vc_g6

0xb5bc,	// (0x0004f67f) slider_set_pane_vc_g7

0xb772,	// (0x0004f835) slider_form_pane_vc_g1

0xb77b,	// (0x0004f83e) slider_form_pane_vc_g2

0xb784,	// (0x0004f847) slider_form_pane_vc_g3

0xb772,	// (0x0004f835) slider_form_pane_vc_g4

0xb78d,	// (0x0004f850) slider_form_pane_vc_g5

0x0004,

0xfa77,	// (0x00053b3a) slider_form_pane_vc_g

0x09fa,	// (0x00044abd) main_idle_act3_pane

0xd176,	// (0x00051239) ai3_links_pane

0xd17f,	// (0x00051242) popup_ai3_data_window_ParamLimits

0xd17f,	// (0x00051242) popup_ai3_data_window

0x09fa,	// (0x00044abd) grid_ai3_links_pane

0xd197,	// (0x0005125a) cell_ai3_links_pane_ParamLimits

0xd197,	// (0x0005125a) cell_ai3_links_pane

0xd1af,	// (0x00051272) bg_popup_sub_pane_cp11

0xd1bc,	// (0x0005127f) cell_ai3_links_pane_g1

0x09fa,	// (0x00044abd) bg_popup_sub_pane_cp12

0xd1e1,	// (0x000512a4) heading_ai3_data_pane

0xd1e9,	// (0x000512ac) list_ai3_gene_pane

0xd1f5,	// (0x000512b8) popup_ai3_data_window_g1

0xd1fd,	// (0x000512c0) heading_ai3_data_pane_g1

0xd205,	// (0x000512c8) heading_ai3_data_pane_t1

0xd213,	// (0x000512d6) list_double_ai3_gene_pane_ParamLimits

0xd213,	// (0x000512d6) list_double_ai3_gene_pane

0xd220,	// (0x000512e3) list_single_ai3_gene_pane_ParamLimits

0xd220,	// (0x000512e3) list_single_ai3_gene_pane

0xbfdd,	// (0x000500a0) list_highlight_pane_cp7_ParamLimits

0xbfdd,	// (0x000500a0) list_highlight_pane_cp7

0xd22d,	// (0x000512f0) list_single_a13_gene_pane_t1_ParamLimits

0xd22d,	// (0x000512f0) list_single_a13_gene_pane_t1

0xd244,	// (0x00051307) list_single_ai3_gene_pane_g1

0xd24d,	// (0x00051310) list_single_ai3_gene_pane_g2

0x0001,

0xfcb2,	// (0x00053d75) list_single_ai3_gene_pane_g

0xd255,	// (0x00051318) list_double_ai3_gene_pane_g1_ParamLimits

0xd255,	// (0x00051318) list_double_ai3_gene_pane_g1

0xd261,	// (0x00051324) list_double_ai3_gene_pane_t1_ParamLimits

0xd261,	// (0x00051324) list_double_ai3_gene_pane_t1

0xd27d,	// (0x00051340) list_double_ai3_gene_pane_t2_ParamLimits

0xd27d,	// (0x00051340) list_double_ai3_gene_pane_t2

0xd292,	// (0x00051355) list_double_ai3_gene_pane_t3_ParamLimits

0xd292,	// (0x00051355) list_double_ai3_gene_pane_t3

0x0002,

0xfcb7,	// (0x00053d7a) list_double_ai3_gene_pane_t_ParamLimits

0xfcb7,	// (0x00053d7a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x616e,	// (0x0004a231) aid_size_min_col_2

0xd140,	// (0x00051203) aid_size_min_msg_ParamLimits

0xd140,	// (0x00051203) aid_size_min_msg

0xc3dc,	// (0x0005049f) fep_vkb_top_text_pane_g2_ParamLimits

0xc3dc,	// (0x0005049f) fep_vkb_top_text_pane_g2

0x0001,

0xfb2a,	// (0x00053bed) fep_vkb_top_text_pane_g_ParamLimits

0xfb2a,	// (0x00053bed) fep_vkb_top_text_pane_g

0x09fa,	// (0x00044abd) main_hc_apps_shell_pane

0xd2af,	// (0x00051372) grid_hc_apps_pane_ParamLimits

0xd2af,	// (0x00051372) grid_hc_apps_pane

0xd2c1,	// (0x00051384) list_hc_apps_pane

0xd2c9,	// (0x0005138c) scroll_pane_cp37_ParamLimits

0xd2c9,	// (0x0005138c) scroll_pane_cp37

0xd2d5,	// (0x00051398) cell_hc_apps_pane_ParamLimits

0xd2d5,	// (0x00051398) cell_hc_apps_pane

0xd383,	// (0x00051446) cell_hc_apps_pane_g1_ParamLimits

0xd383,	// (0x00051446) cell_hc_apps_pane_g1

0xd3b3,	// (0x00051476) cell_hc_apps_pane_g2_ParamLimits

0xd3b3,	// (0x00051476) cell_hc_apps_pane_g2

0xd3cf,	// (0x00051492) cell_hc_apps_pane_g3_ParamLimits

0xd3cf,	// (0x00051492) cell_hc_apps_pane_g3

0x0002,

0xfcbe,	// (0x00053d81) cell_hc_apps_pane_g_ParamLimits

0xfcbe,	// (0x00053d81) cell_hc_apps_pane_g

0xd3f1,	// (0x000514b4) cell_hc_apps_pane_t1_ParamLimits

0xd3f1,	// (0x000514b4) cell_hc_apps_pane_t1

0x0b94,	// (0x00044c57) grid_highlight_pane_cp10_ParamLimits

0x0b94,	// (0x00044c57) grid_highlight_pane_cp10

0xd431,	// (0x000514f4) list_single_hc_apps_pane_ParamLimits

0xd431,	// (0x000514f4) list_single_hc_apps_pane

0xd494,	// (0x00051557) list_single_hc_apps_pane_g1

0x8b5e,	// (0x0004cc21) list_single_hc_apps_pane_g2

0x0001,

0xfcc5,	// (0x00053d88) list_single_hc_apps_pane_g

0x8b77,	// (0x0004cc3a) list_single_hc_apps_pane_g2_copy1

0x622d,	// (0x0004a2f0) list_single_hc_apps_pane_t1

0x0a6a,	// (0x00044b2d) bg_set_opt_pane_cp_ParamLimits

0x6746,	// (0x0004a809) setting_slider_pane_t1_ParamLimits

0x675f,	// (0x0004a822) setting_slider_pane_t2_ParamLimits

0x6779,	// (0x0004a83c) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x000535fa) setting_slider_pane_t_ParamLimits

0x6791,	// (0x0004a854) slider_set_pane_ParamLimits

0x772b,	// (0x0004b7ee) control_pane_g5_ParamLimits

0x772b,	// (0x0004b7ee) control_pane_g5

0xadd1,	// (0x0004ee94) slider_set_pane_g1_ParamLimits

0x844c,	// (0x0004c50f) slider_set_pane_g2_ParamLimits

0x8458,	// (0x0004c51b) slider_set_pane_g3_ParamLimits

0x846c,	// (0x0004c52f) slider_set_pane_g4_ParamLimits

0x8484,	// (0x0004c547) slider_set_pane_g5_ParamLimits

0x8458,	// (0x0004c51b) slider_set_pane_g6_ParamLimits

0x849a,	// (0x0004c55d) slider_set_pane_g7_ParamLimits

0xf938,	// (0x000539fb) slider_set_pane_g_ParamLimits

0x1581,	// (0x00045644) navi_icon_text_pane_ParamLimits

0x7e3f,	// (0x0004bf02) aid_fill_nsta_2_ParamLimits

0x7e7e,	// (0x0004bf41) aid_touch_tab_arrow_left_ParamLimits

0x7e8d,	// (0x0004bf50) aid_touch_tab_arrow_right_ParamLimits

0x7efa,	// (0x0004bfbd) clock_nsta_pane_ParamLimits

0xa8e4,	// (0x0004e9a7) navi_icon_pane_g1_ParamLimits

0xa8f0,	// (0x0004e9b3) navi_text_pane_t1_ParamLimits

0xbbc4,	// (0x0004fc87) navi_icon_text_pane_g1_ParamLimits

0xbbd0,	// (0x0004fc93) navi_icon_text_pane_t1_ParamLimits

0xd494,	// (0x00051557) list_single_hc_apps_pane_g1_ParamLimits

0x8b5e,	// (0x0004cc21) list_single_hc_apps_pane_g2_ParamLimits

0xfcc5,	// (0x00053d88) list_single_hc_apps_pane_g_ParamLimits

0x8b77,	// (0x0004cc3a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x622d,	// (0x0004a2f0) list_single_hc_apps_pane_t1_ParamLimits

0x658a,	// (0x0004a64d) popup_toolbar2_fixed_window_ParamLimits

0x658a,	// (0x0004a64d) popup_toolbar2_fixed_window

0x7d55,	// (0x0004be18) popup_toolbar2_float_window

0x09fa,	// (0x00044abd) bg_popup_sub_pane_cp27

0xd4ad,	// (0x00051570) grid_toolbar2_float_pane

0x09fa,	// (0x00044abd) bg_popup_sub_pane_cp26

0xd4ad,	// (0x00051570) grid_toolbar2_fixed_pane

0xd4b5,	// (0x00051578) cell_toolbar2_fixed_pane_ParamLimits

0xd4b5,	// (0x00051578) cell_toolbar2_fixed_pane

0xd4c5,	// (0x00051588) cell_toolbar2_fixed_pane_g1

0x99d2,	// (0x0004da95) toolbar2_fixed_button_pane

0x9a52,	// (0x0004db15) toolbar2_fixed_button_pane_g1

0x9a5a,	// (0x0004db1d) toolbar2_fixed_button_pane_g2

0x9a62,	// (0x0004db25) toolbar2_fixed_button_pane_g3

0x9a6a,	// (0x0004db2d) toolbar2_fixed_button_pane_g4

0x9a72,	// (0x0004db35) toolbar2_fixed_button_pane_g5

0x9a7a,	// (0x0004db3d) toolbar2_fixed_button_pane_g6

0x9a82,	// (0x0004db45) toolbar2_fixed_button_pane_g7

0x9a8a,	// (0x0004db4d) toolbar2_fixed_button_pane_g8

0x9a92,	// (0x0004db55) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x000538fd) toolbar2_fixed_button_pane_g

0xd4ce,	// (0x00051591) cell_toolbar2_float_pane_ParamLimits

0xd4ce,	// (0x00051591) cell_toolbar2_float_pane

0xd4df,	// (0x000515a2) cell_toolbar2_float_pane_g1

0x99d2,	// (0x0004da95) toolbar2_fixed_button_pane_cp

0xc146,	// (0x00050209) fep_vkb_accented_list_pane_ParamLimits

0xc146,	// (0x00050209) fep_vkb_accented_list_pane

0x8967,	// (0x0004ca2a) bg_popup_fep_shadow_pane_g9

0x16e0,	// (0x000457a3) bg_popup_fep_shadow_pane_cp3

0x0f39,	// (0x00044ffc) list_accented_list_pane

0xd4e8,	// (0x000515ab) list_single_accented_list_pane_ParamLimits

0xd4e8,	// (0x000515ab) list_single_accented_list_pane

0x16e0,	// (0x000457a3) list_highlight_pane_cp10

0xd4f9,	// (0x000515bc) list_single_accented_list_pane_t1

0x7ca5,	// (0x0004bd68) popup_slider_window_ParamLimits

0x7ca5,	// (0x0004bd68) popup_slider_window

0xd137,	// (0x000511fa) aid_indentation_list_msg

0xd5b7,	// (0x0005167a) bg_popup_window_pane_cp19

0xd61f,	// (0x000516e2) popup_slider_window_g1

0xd63b,	// (0x000516fe) popup_slider_window_g2

0xd657,	// (0x0005171a) popup_slider_window_g3

0x0005,

0xfcca,	// (0x00053d8d) popup_slider_window_g

0xd6bd,	// (0x00051780) popup_slider_window_t1

0xd731,	// (0x000517f4) small_volume_slider_vertical_pane

0xc018,	// (0x000500db) small_volume_slider_vertical_pane_g1

0xc018,	// (0x000500db) small_volume_slider_vertical_pane_g2

0xd74d,	// (0x00051810) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdc,	// (0x00053d9f) small_volume_slider_vertical_pane_g

0x6354,	// (0x0004a417) area_side_right_pane_ParamLimits

0x6354,	// (0x0004a417) area_side_right_pane

0x8b93,	// (0x0004cc56) aid_size_side_button_ParamLimits

0x8b93,	// (0x0004cc56) aid_size_side_button

0x8ba7,	// (0x0004cc6a) grid_sctrl_middle_pane_ParamLimits

0x8ba7,	// (0x0004cc6a) grid_sctrl_middle_pane

0x8bc6,	// (0x0004cc89) sctrl_sk_bottom_pane

0x8bd7,	// (0x0004cc9a) sctrl_sk_top_pane

0x8be9,	// (0x0004ccac) aid_touch_sctrl_top

0x0b94,	// (0x00044c57) bg_sctrl_sk_pane_ParamLimits

0x0b94,	// (0x00044c57) bg_sctrl_sk_pane

0x8bf6,	// (0x0004ccb9) sctrl_sk_top_pane_g1

0x8c03,	// (0x0004ccc6) sctrl_sk_top_pane_t1

0x8be9,	// (0x0004ccac) aid_touch_sctrl_bottom

0x0b94,	// (0x00044c57) bg_sctrl_sk_pane_cp_ParamLimits

0x0b94,	// (0x00044c57) bg_sctrl_sk_pane_cp

0x8c1e,	// (0x0004cce1) sctrl_sk_bottom_pane_g1

0x8c03,	// (0x0004ccc6) sctrl_sk_bottom_pane_t1

0x8c27,	// (0x0004ccea) cell_sctrl_middle_pane_ParamLimits

0x8c27,	// (0x0004ccea) cell_sctrl_middle_pane

0x8c42,	// (0x0004cd05) aid_touch_sctrl_middle_ParamLimits

0x8c42,	// (0x0004cd05) aid_touch_sctrl_middle

0x0e20,	// (0x00044ee3) bg_sctrl_middle_pane_ParamLimits

0x0e20,	// (0x00044ee3) bg_sctrl_middle_pane

0xc288,	// (0x0005034b) cell_sctrl_middle_pane_g1_ParamLimits

0xc288,	// (0x0005034b) cell_sctrl_middle_pane_g1

0x8c54,	// (0x0004cd17) cell_sctrl_middle_pane_g2_ParamLimits

0x8c54,	// (0x0004cd17) cell_sctrl_middle_pane_g2

0x0001,

0xfce8,	// (0x00053dab) cell_sctrl_middle_pane_g_ParamLimits

0xfce8,	// (0x00053dab) cell_sctrl_middle_pane_g

0x9a52,	// (0x0004db15) bg_sctrl_middle_pane_g1

0x9a5a,	// (0x0004db1d) bg_sctrl_middle_pane_g2

0x9a62,	// (0x0004db25) bg_sctrl_middle_pane_g3

0x9a6a,	// (0x0004db2d) bg_sctrl_middle_pane_g4

0x9a72,	// (0x0004db35) bg_sctrl_middle_pane_g5

0x9a7a,	// (0x0004db3d) bg_sctrl_middle_pane_g6

0x9a82,	// (0x0004db45) bg_sctrl_middle_pane_g7

0x9a8a,	// (0x0004db4d) bg_sctrl_middle_pane_g8

0x0007,

0xfced,	// (0x00053db0) bg_sctrl_middle_pane_g

0x9a92,	// (0x0004db55) bg_sctrl_middle_pane_g8_copy1

0x9a52,	// (0x0004db15) bg_sctrl_sk_pane_g1

0x9a5a,	// (0x0004db1d) bg_sctrl_sk_pane_g2

0x9a62,	// (0x0004db25) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x000538fd) bg_sctrl_sk_pane_g

0x0d62,	// (0x00044e25) aid_size_touch_scroll_bar

0x9a6a,	// (0x0004db2d) bg_sctrl_sk_pane_g4

0x9a72,	// (0x0004db35) bg_sctrl_sk_pane_g5

0x9a7a,	// (0x0004db3d) bg_sctrl_sk_pane_g6

0x9a82,	// (0x0004db45) bg_sctrl_sk_pane_g7

0x9a8a,	// (0x0004db4d) bg_sctrl_sk_pane_g8

0x9a92,	// (0x0004db55) bg_sctrl_sk_pane_g9

0x790e,	// (0x0004b9d1) popup_fep_china_hwr2_fs_candidate_window

0x7918,	// (0x0004b9db) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7918,	// (0x0004b9db) popup_fep_china_hwr2_fs_control_window

0xc288,	// (0x0005034b) sctrl_sk_top_pane_g2

0x0001,

0xfce3,	// (0x00053da6) sctrl_sk_top_pane_g

0xd756,	// (0x00051819) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd756,	// (0x00051819) aid_fep_china_hwr2_fs_cell

0xd768,	// (0x0005182b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd768,	// (0x0005182b) bg_popup_fep_shadow_pane_cp4

0xd77f,	// (0x00051842) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd77f,	// (0x00051842) bg_popup_fep_shadow_pane_cp5

0xd791,	// (0x00051854) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd791,	// (0x00051854) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a1,	// (0x00051864) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7a9,	// (0x0005186c) aid_fep_china_hwr2_fs_candi_cell

0x09fa,	// (0x00044abd) bg_popup_fep_shadow_pane_cp6

0xd7b3,	// (0x00051876) popup_fep_china_hwr2_fs_candidate_grid

0xd7bd,	// (0x00051880) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7bd,	// (0x00051880) cell_fep_china_hwr2_fs_funtion_grid

0xc018,	// (0x000500db) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7d5,	// (0x00051898) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7d5,	// (0x00051898) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e3,	// (0x000518a6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e3,	// (0x000518a6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfe,	// (0x00053dc1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfe,	// (0x00053dc1) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7f9,	// (0x000518bc) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7f9,	// (0x000518bc) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd80e,	// (0x000518d1) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd80e,	// (0x000518d1) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd03,	// (0x00053dc6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd03,	// (0x00053dc6) cell_fep_china_hwr2_fs_funtion_grid_t

0xd82a,	// (0x000518ed) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd832,	// (0x000518f5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd83a,	// (0x000518fd) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd08,	// (0x00053dcb) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd842,	// (0x00051905) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd842,	// (0x00051905) cell_fep_china_hwr2_fs_candidate_grid

0xd85b,	// (0x0005191e) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd863,	// (0x00051926) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc018,	// (0x000500db) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc018,	// (0x000500db) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2f,	// (0x00053bf2) cell_fep_china_hwr2_fs_candidate_grid_g

0xd86b,	// (0x0005192e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f0d,	// (0x0004bfd0) clock_nsta_pane_cp_24_ParamLimits

0x7f0d,	// (0x0004bfd0) clock_nsta_pane_cp_24

0x7f8b,	// (0x0004c04e) indicator_nsta_pane_cp_24_ParamLimits

0x7f8b,	// (0x0004c04e) indicator_nsta_pane_cp_24

0xa760,	// (0x0004e823) heading_pane_g1

0x0001,

0xf89f,	// (0x00053962) heading_pane_g

0xb13e,	// (0x0004f201) grid_sct_catagory_button_pane

0xb16e,	// (0x0004f231) scroll_pane_cp5_ParamLimits

0xbc12,	// (0x0004fcd5) button_value_adjust_pane_cp5_ParamLimits

0xbc12,	// (0x0004fcd5) button_value_adjust_pane_cp5

0xbcf1,	// (0x0004fdb4) form2_midp_time_pane_ParamLimits

0xd879,	// (0x0005193c) cell_sct_catagory_button_pane_ParamLimits

0xd879,	// (0x0005193c) cell_sct_catagory_button_pane

0xbfdd,	// (0x000500a0) bg_button_pane_cp01_ParamLimits

0xbfdd,	// (0x000500a0) bg_button_pane_cp01

0xc018,	// (0x000500db) cell_sct_catagory_button_pane_g1

0x7ce4,	// (0x0004bda7) popup_tb_extension_window

0xd88b,	// (0x0005194e) aid_size_cell_ext_ParamLimits

0xd88b,	// (0x0005194e) aid_size_cell_ext

0x0b94,	// (0x00044c57) bg_tb_trans_pane_cp1_ParamLimits

0x0b94,	// (0x00044c57) bg_tb_trans_pane_cp1

0xd8ab,	// (0x0005196e) grid_tb_ext_pane_ParamLimits

0xd8ab,	// (0x0005196e) grid_tb_ext_pane

0xd8db,	// (0x0005199e) cell_tb_ext_pane_ParamLimits

0xd8db,	// (0x0005199e) cell_tb_ext_pane

0xd8f2,	// (0x000519b5) cell_tb_ext_pane_g1_ParamLimits

0xd8f2,	// (0x000519b5) cell_tb_ext_pane_g1

0xd90f,	// (0x000519d2) cell_tb_ext_pane_t1

0x0b94,	// (0x00044c57) list_highlight_pane_cp11_ParamLimits

0x0b94,	// (0x00044c57) list_highlight_pane_cp11

0x65a9,	// (0x0004a66c) popup_uni_indicator_window_ParamLimits

0x65a9,	// (0x0004a66c) popup_uni_indicator_window

0x0e20,	// (0x00044ee3) bg_popup_sub_pane_cp14

0xd92b,	// (0x000519ee) list_uniindi_pane

0xd937,	// (0x000519fa) uniindi_top_pane

0x0b94,	// (0x00044c57) bg_uniindi_top_pane

0xd956,	// (0x00051a19) uniindi_top_pane_g1

0xd96c,	// (0x00051a2f) uniindi_top_pane_g2

0x0003,

0xfd0f,	// (0x00053dd2) uniindi_top_pane_g

0xd996,	// (0x00051a59) uniindi_top_pane_t1

0xd9c0,	// (0x00051a83) list_single_uniindi_pane_ParamLimits

0xd9c0,	// (0x00051a83) list_single_uniindi_pane

0xc018,	// (0x000500db) bg_uniindi_top_pane_g1

0xd9d3,	// (0x00051a96) list_single_uniindi_pane_g1

0xd9e6,	// (0x00051aa9) list_single_uniindi_pane_t1

0x09fa,	// (0x00044abd) control_bg_pane

0xda0b,	// (0x00051ace) bg_sctrl_sk_pane_cp1

0xda14,	// (0x00051ad7) bg_sctrl_sk_pane_cp2

0xda1d,	// (0x00051ae0) control_bg_pane_g1

0xda26,	// (0x00051ae9) control_bg_pane_g2

0x0001,

0xfd18,	// (0x00053ddb) control_bg_pane_g

0xba58,	// (0x0004fb1b) cell_indicator_nsta_pane_g1_ParamLimits

0xba66,	// (0x0004fb29) cell_indicator_nsta_pane_g2_ParamLimits

0xfa93,	// (0x00053b56) cell_indicator_nsta_pane_g_ParamLimits

0x5faf,	// (0x0004a072) form2_midp_time_pane_t1_ParamLimits

0x0d14,	// (0x00044dd7) main_idle_act4_pane_ParamLimits

0x0d14,	// (0x00044dd7) main_idle_act4_pane

0x7ce4,	// (0x0004bda7) popup_tb_extension_window_ParamLimits

0xd8cb,	// (0x0005198e) tb_ext_find_pane_ParamLimits

0xd8cb,	// (0x0005198e) tb_ext_find_pane

0xda2f,	// (0x00051af2) ai_gene_pane_1_cp1

0x1761,	// (0x00045824) ai_gene_pane_2_cp1

0xda37,	// (0x00051afa) list_single_idle_plugin_calendar_pane

0xda40,	// (0x00051b03) list_single_idle_plugin_notification_pane

0xda49,	// (0x00051b0c) list_single_idle_plugin_player_pane

0xda52,	// (0x00051b15) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda52,	// (0x00051b15) list_single_idle_plugin_shortcut_pane

0xda74,	// (0x00051b37) main_idle_act4_pane_t1

0xda86,	// (0x00051b49) main_idle_act4_pane_t2

0x0001,

0xfd1d,	// (0x00053de0) main_idle_act4_pane_t

0xda98,	// (0x00051b5b) middle_sk_idle_act4_pane_ParamLimits

0xda98,	// (0x00051b5b) middle_sk_idle_act4_pane

0xdaae,	// (0x00051b71) popup_clock_digital_analogue_window_cp2

0xdac8,	// (0x00051b8b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac8,	// (0x00051b8b) shortcut_wheel_idle_act4_pane

0xc018,	// (0x000500db) shortcut_wheel_idle_act4_pane_g1

0xc018,	// (0x000500db) shortcut_wheel_idle_act4_pane_g2

0xc018,	// (0x000500db) shortcut_wheel_idle_act4_pane_g3

0xc018,	// (0x000500db) shortcut_wheel_idle_act4_pane_g4

0xc018,	// (0x000500db) shortcut_wheel_idle_act4_pane_g5

0xdadc,	// (0x00051b9f) shortcut_wheel_idle_act4_pane_g6

0xdae4,	// (0x00051ba7) shortcut_wheel_idle_act4_pane_g7

0xdaec,	// (0x00051baf) shortcut_wheel_idle_act4_pane_g8

0xdaf4,	// (0x00051bb7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd22,	// (0x00053de5) shortcut_wheel_idle_act4_pane_g

0xc288,	// (0x0005034b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc288,	// (0x0005034b) middle_sk_idle_act4_pane_g1

0xdb58,	// (0x00051c1b) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb58,	// (0x00051c1b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd45,	// (0x00053e08) middle_sk_idle_act4_pane_g_ParamLimits

0xfd45,	// (0x00053e08) middle_sk_idle_act4_pane_g

0xdb64,	// (0x00051c27) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb64,	// (0x00051c27) middle_sk_idle_act4_pane_t1

0xdb81,	// (0x00051c44) grid_ai_shortcut_pane_ParamLimits

0xdb81,	// (0x00051c44) grid_ai_shortcut_pane

0xdb9a,	// (0x00051c5d) list_highlight_pane_cp16_ParamLimits

0xdb9a,	// (0x00051c5d) list_highlight_pane_cp16

0xdba7,	// (0x00051c6a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba7,	// (0x00051c6a) list_single_idle_plugin_shortcut_pane_g1

0xdbb3,	// (0x00051c76) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb3,	// (0x00051c76) list_single_idle_plugin_shortcut_pane_g2

0xdbcb,	// (0x00051c8e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbcb,	// (0x00051c8e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4a,	// (0x00053e0d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4a,	// (0x00053e0d) list_single_idle_plugin_shortcut_pane_g

0xdbde,	// (0x00051ca1) cell_ai_shortcut_pane_ParamLimits

0xdbde,	// (0x00051ca1) cell_ai_shortcut_pane

0xdc02,	// (0x00051cc5) cell_ai_shortcut_pane_g1_ParamLimits

0xdc02,	// (0x00051cc5) cell_ai_shortcut_pane_g1

0xda2f,	// (0x00051af2) ai_gene_pane_1_cp2

0xdc24,	// (0x00051ce7) ai_gene_pane_2_cp2

0xdc2c,	// (0x00051cef) list_highlight_pane_cp15

0xdc35,	// (0x00051cf8) list_single_idle_plugin_calendar_pane_g1

0xdc2c,	// (0x00051cef) list_highlight_pane_cp17

0xdc3d,	// (0x00051d00) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc45,	// (0x00051d08) list_single_idle_plugin_player_pane_g1

0xb397,	// (0x0004f45a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd51,	// (0x00053e14) list_single_idle_plugin_player_pane_g

0xdc4d,	// (0x00051d10) list_single_idle_plugin_player_pane_t1

0xdc5b,	// (0x00051d1e) list_single_idle_plugin_player_pane_t2

0xdc69,	// (0x00051d2c) list_single_idle_plugin_player_pane_t3

0xdc77,	// (0x00051d3a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd56,	// (0x00053e19) list_single_idle_plugin_player_pane_t

0xdc85,	// (0x00051d48) wait_bar_pane_cp15

0xdc8d,	// (0x00051d50) grid_ai_notification_pane

0xb397,	// (0x0004f45a) list_single_idle_plugin_notification_pane_g1

0xdc96,	// (0x00051d59) cell_ai_notification_pane_ParamLimits

0xdc96,	// (0x00051d59) cell_ai_notification_pane

0xdca3,	// (0x00051d66) cell_ai_notification_pane_g1

0xdcab,	// (0x00051d6e) cell_ai_notification_pane_t1

0xdcb9,	// (0x00051d7c) tb_ext_find_button_pane

0xdcc1,	// (0x00051d84) tb_ext_find_pane_g1

0xdcc9,	// (0x00051d8c) tb_ext_find_pane_t1

0x1272,	// (0x00045335) tb_ext_find_button_pane_g1

0xdcd7,	// (0x00051d9a) tb_ext_find_button_pane_g2

0x0001,

0xfd5f,	// (0x00053e22) tb_ext_find_button_pane_g

0xda74,	// (0x00051b37) main_idle_act4_pane_t1_ParamLimits

0xda86,	// (0x00051b49) main_idle_act4_pane_t2_ParamLimits

0xfd1d,	// (0x00053de0) main_idle_act4_pane_t_ParamLimits

0xdaae,	// (0x00051b71) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdabc,	// (0x00051b7f) sat_plugin_idle_act4_pane_ParamLimits

0xdabc,	// (0x00051b7f) sat_plugin_idle_act4_pane

0xdce0,	// (0x00051da3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdce0,	// (0x00051da3) sat_plugin_idle_act4_pane_t1

0xdcf3,	// (0x00051db6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf3,	// (0x00051db6) sat_plugin_idle_act4_pane_t2

0xdd06,	// (0x00051dc9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd06,	// (0x00051dc9) sat_plugin_idle_act4_pane_t3

0xdd19,	// (0x00051ddc) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd19,	// (0x00051ddc) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd64,	// (0x00053e27) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd64,	// (0x00053e27) sat_plugin_idle_act4_pane_t

0x64f2,	// (0x0004a5b5) popup_battery_window_ParamLimits

0x64f2,	// (0x0004a5b5) popup_battery_window

0x0b94,	// (0x00044c57) bg_popup_sub_pane_cp25_ParamLimits

0x0b94,	// (0x00044c57) bg_popup_sub_pane_cp25

0xdd2c,	// (0x00051def) popup_battery_window_g1_ParamLimits

0xdd2c,	// (0x00051def) popup_battery_window_g1

0xdd38,	// (0x00051dfb) popup_battery_window_t1_ParamLimits

0xdd38,	// (0x00051dfb) popup_battery_window_t1

0xdd4a,	// (0x00051e0d) popup_battery_window_t2_ParamLimits

0xdd4a,	// (0x00051e0d) popup_battery_window_t2

0x0001,

0xfd6d,	// (0x00053e30) popup_battery_window_t_ParamLimits

0xfd6d,	// (0x00053e30) popup_battery_window_t

0x74bf,	// (0x0004b582) midp_canvas_pane_ParamLimits

0x7538,	// (0x0004b5fb) midp_keypad_pane_ParamLimits

0x7538,	// (0x0004b5fb) midp_keypad_pane

0x0f62,	// (0x00045025) main_midp_pane_ParamLimits

0xbad2,	// (0x0004fb95) signal_pane_g2_cp_ParamLimits

0xdd67,	// (0x00051e2a) aid_size_cell_midp_keypad_ParamLimits

0xdd67,	// (0x00051e2a) aid_size_cell_midp_keypad

0xdd81,	// (0x00051e44) midp_keyp_game_grid_pane_ParamLimits

0xdd81,	// (0x00051e44) midp_keyp_game_grid_pane

0xdda1,	// (0x00051e64) midp_keyp_rocker_pane_ParamLimits

0xdda1,	// (0x00051e64) midp_keyp_rocker_pane

0xddda,	// (0x00051e9d) midp_keyp_sk_left_pane_ParamLimits

0xddda,	// (0x00051e9d) midp_keyp_sk_left_pane

0xde34,	// (0x00051ef7) midp_keyp_sk_right_pane_ParamLimits

0xde34,	// (0x00051ef7) midp_keyp_sk_right_pane

0x09fa,	// (0x00044abd) bg_button_pane_cp03

0xde8e,	// (0x00051f51) midp_keyp_sk_left_pane_g1

0x09fa,	// (0x00044abd) bg_button_pane_cp04

0xde8e,	// (0x00051f51) midp_keyp_sk_right_pane_g1

0xc018,	// (0x000500db) midp_keyp_rocker_pane_g1

0xde97,	// (0x00051f5a) keyp_game_cell_pane_ParamLimits

0xde97,	// (0x00051f5a) keyp_game_cell_pane

0x09fa,	// (0x00044abd) bg_button_pane_cp02

0xdeaa,	// (0x00051f6d) keyp_game_cell_pane_g1

0x6528,	// (0x0004a5eb) popup_fep_vkb2_window_ParamLimits

0x6528,	// (0x0004a5eb) popup_fep_vkb2_window

0x8c72,	// (0x0004cd35) aid_size_cell_vkb2_ParamLimits

0x8c72,	// (0x0004cd35) aid_size_cell_vkb2

0x8cbe,	// (0x0004cd81) popup_fep_vkb2_window_g1_ParamLimits

0x8cbe,	// (0x0004cd81) popup_fep_vkb2_window_g1

0x8d06,	// (0x0004cdc9) vkb2_area_bottom_pane_ParamLimits

0x8d06,	// (0x0004cdc9) vkb2_area_bottom_pane

0x8d52,	// (0x0004ce15) vkb2_area_keypad_pane_ParamLimits

0x8d52,	// (0x0004ce15) vkb2_area_keypad_pane

0x8d94,	// (0x0004ce57) vkb2_area_top_pane_ParamLimits

0x8d94,	// (0x0004ce57) vkb2_area_top_pane

0x8e13,	// (0x0004ced6) vkb2_top_entry_pane_ParamLimits

0x8e13,	// (0x0004ced6) vkb2_top_entry_pane

0x8e3d,	// (0x0004cf00) vkb2_top_grid_left_pane_ParamLimits

0x8e3d,	// (0x0004cf00) vkb2_top_grid_left_pane

0x8e5c,	// (0x0004cf1f) vkb2_top_grid_right_pane_ParamLimits

0x8e5c,	// (0x0004cf1f) vkb2_top_grid_right_pane

0x8e7b,	// (0x0004cf3e) vkb2_cell_keypad_pane_ParamLimits

0x8e7b,	// (0x0004cf3e) vkb2_cell_keypad_pane

0x8f4c,	// (0x0004d00f) vkb2_area_bottom_grid_pane_ParamLimits

0x8f4c,	// (0x0004d00f) vkb2_area_bottom_grid_pane

0x8f72,	// (0x0004d035) vkb2_area_bottom_pane_g1_ParamLimits

0x8f72,	// (0x0004d035) vkb2_area_bottom_pane_g1

0x8f96,	// (0x0004d059) vkb2_area_bottom_pane_g2_ParamLimits

0x8f96,	// (0x0004d059) vkb2_area_bottom_pane_g2

0x8fc4,	// (0x0004d087) vkb2_area_bottom_pane_g3_ParamLimits

0x8fc4,	// (0x0004d087) vkb2_area_bottom_pane_g3

0x0002,

0xfd72,	// (0x00053e35) vkb2_area_bottom_pane_g_ParamLimits

0xfd72,	// (0x00053e35) vkb2_area_bottom_pane_g

0x9025,	// (0x0004d0e8) vkb2_top_cell_left_pane_ParamLimits

0x9025,	// (0x0004d0e8) vkb2_top_cell_left_pane

0xdebb,	// (0x00051f7e) vkb2_top_entry_pane_g1_ParamLimits

0xdebb,	// (0x00051f7e) vkb2_top_entry_pane_g1

0xdec9,	// (0x00051f8c) vkb2_top_entry_pane_t1_ParamLimits

0xdec9,	// (0x00051f8c) vkb2_top_entry_pane_t1

0xdefb,	// (0x00051fbe) vkb2_top_entry_pane_t2_ParamLimits

0xdefb,	// (0x00051fbe) vkb2_top_entry_pane_t2

0xdf2d,	// (0x00051ff0) vkb2_top_entry_pane_t3_ParamLimits

0xdf2d,	// (0x00051ff0) vkb2_top_entry_pane_t3

0x0002,

0xfd79,	// (0x00053e3c) vkb2_top_entry_pane_t_ParamLimits

0xfd79,	// (0x00053e3c) vkb2_top_entry_pane_t

0x9072,	// (0x0004d135) vkb2_top_grid_right_pane_g1_ParamLimits

0x9072,	// (0x0004d135) vkb2_top_grid_right_pane_g1

0x9088,	// (0x0004d14b) vkb2_top_grid_right_pane_g2_ParamLimits

0x9088,	// (0x0004d14b) vkb2_top_grid_right_pane_g2

0x90a0,	// (0x0004d163) vkb2_top_grid_right_pane_g3_ParamLimits

0x90a0,	// (0x0004d163) vkb2_top_grid_right_pane_g3

0x90b8,	// (0x0004d17b) vkb2_top_grid_right_pane_g4_ParamLimits

0x90b8,	// (0x0004d17b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd80,	// (0x00053e43) vkb2_top_grid_right_pane_g_ParamLimits

0xfd80,	// (0x00053e43) vkb2_top_grid_right_pane_g

0x90ce,	// (0x0004d191) vkb2_top_cell_left_pane_g1

0x90f0,	// (0x0004d1b3) vkb2_cell_keypad_pane_g1_ParamLimits

0x90f0,	// (0x0004d1b3) vkb2_cell_keypad_pane_g1

0xdf51,	// (0x00052014) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf51,	// (0x00052014) vkb2_cell_keypad_pane_t1

0x90fe,	// (0x0004d1c1) vkb2_cell_bottom_grid_pane_ParamLimits

0x90fe,	// (0x0004d1c1) vkb2_cell_bottom_grid_pane

0x9137,	// (0x0004d1fa) vkb2_cell_bottom_grid_pane_g1

0xdafc,	// (0x00051bbf) aid_call2_pane_cp02

0xdb04,	// (0x00051bc7) aid_call_pane_cp02

0xdb0c,	// (0x00051bcf) clock_digital_number_pane_cp10

0xdb14,	// (0x00051bd7) clock_digital_number_pane_cp11

0xdb1c,	// (0x00051bdf) clock_digital_number_pane_cp12

0xdb24,	// (0x00051be7) clock_digital_number_pane_cp13

0xdb2c,	// (0x00051bef) clock_digital_separator_pane_cp10

0x1272,	// (0x00045335) popup_clock_digital_analogue_window_cp2_g1

0x1272,	// (0x00045335) popup_clock_digital_analogue_window_cp2_g2

0xdb34,	// (0x00051bf7) popup_clock_digital_analogue_window_cp2_g3

0x1272,	// (0x00045335) popup_clock_digital_analogue_window_cp2_g4

0xdb34,	// (0x00051bf7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd35,	// (0x00053df8) popup_clock_digital_analogue_window_cp2_g

0xdb3c,	// (0x00051bff) popup_clock_digital_analogue_window_cp2_t1

0xdb4a,	// (0x00051c0d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd40,	// (0x00053e03) popup_clock_digital_analogue_window_cp2_t

0xc018,	// (0x000500db) clock_digital_number_pane_cp10_g1

0xc018,	// (0x000500db) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2f,	// (0x00053bf2) clock_digital_number_pane_cp10_g

0xc018,	// (0x000500db) clock_digital_separator_pane_cp10_g1

0xc018,	// (0x000500db) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2f,	// (0x00053bf2) clock_digital_separator_pane_cp10_g

0xd978,	// (0x00051a3b) uniindi_top_pane_g3

0xd989,	// (0x00051a4c) uniindi_top_pane_g4

0x8f06,	// (0x0004cfc9) vkb2_row_keypad_pane_ParamLimits

0x8f06,	// (0x0004cfc9) vkb2_row_keypad_pane

0x9157,	// (0x0004d21a) vkb2_cell_t_keypad_pane_ParamLimits

0x9157,	// (0x0004d21a) vkb2_cell_t_keypad_pane

0x9167,	// (0x0004d22a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9167,	// (0x0004d22a) vkb2_cell_t_keypad_pane_cp08

0x917a,	// (0x0004d23d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x917a,	// (0x0004d23d) vkb2_cell_t_keypad_pane_cp09

0x918e,	// (0x0004d251) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x918e,	// (0x0004d251) vkb2_cell_t_keypad_pane_cp01

0x919f,	// (0x0004d262) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x919f,	// (0x0004d262) vkb2_cell_t_keypad_pane_cp02

0x91b0,	// (0x0004d273) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91b0,	// (0x0004d273) vkb2_cell_t_keypad_pane_cp03

0x91c1,	// (0x0004d284) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91c1,	// (0x0004d284) vkb2_cell_t_keypad_pane_cp04

0x91d2,	// (0x0004d295) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91d2,	// (0x0004d295) vkb2_cell_t_keypad_pane_cp05

0x91e3,	// (0x0004d2a6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91e3,	// (0x0004d2a6) vkb2_cell_t_keypad_pane_cp06

0x91f4,	// (0x0004d2b7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91f4,	// (0x0004d2b7) vkb2_cell_t_keypad_pane_cp07

0x9205,	// (0x0004d2c8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9205,	// (0x0004d2c8) vkb2_cell_t_keypad_pane_cp10

0xc288,	// (0x0005034b) vkb2_cell_t_keypad_pane_g1

0xdf68,	// (0x0005202b) vkb2_cell_t_keypad_pane_t1

0x09fa,	// (0x00044abd) popup_grid_graphic2_window

0xdf7a,	// (0x0005203d) aid_size_cell_graphic2_ParamLimits

0xdf7a,	// (0x0005203d) aid_size_cell_graphic2

0xdfb2,	// (0x00052075) bg_popup_window_pane_cp21_ParamLimits

0xdfb2,	// (0x00052075) bg_popup_window_pane_cp21

0xdfc0,	// (0x00052083) graphic2_pages_pane_ParamLimits

0xdfc0,	// (0x00052083) graphic2_pages_pane

0xe006,	// (0x000520c9) grid_graphic2_control_pane_ParamLimits

0xe006,	// (0x000520c9) grid_graphic2_control_pane

0xe044,	// (0x00052107) grid_graphic2_pane_ParamLimits

0xe044,	// (0x00052107) grid_graphic2_pane

0xe0b8,	// (0x0005217b) cell_graphic2_pane

0x09fa,	// (0x00044abd) main_comp_mode_pane

0xd1e9,	// (0x000512ac) list_ai3_gene_pane_ParamLimits

0xd5b7,	// (0x0005167a) bg_popup_window_pane_cp19_ParamLimits

0xd5c3,	// (0x00051686) bg_touch_area_indi_pane_ParamLimits

0xd5c3,	// (0x00051686) bg_touch_area_indi_pane

0xd5d9,	// (0x0005169c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5d9,	// (0x0005169c) bg_touch_area_indi_pane_cp01

0xd5ef,	// (0x000516b2) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ef,	// (0x000516b2) bg_touch_area_indi_pane_cp02

0xd605,	// (0x000516c8) bg_touch_area_indi_pane_cp03_ParamLimits

0xd605,	// (0x000516c8) bg_touch_area_indi_pane_cp03

0xd61f,	// (0x000516e2) popup_slider_window_g1_ParamLimits

0xd63b,	// (0x000516fe) popup_slider_window_g2_ParamLimits

0xd657,	// (0x0005171a) popup_slider_window_g3_ParamLimits

0xfcca,	// (0x00053d8d) popup_slider_window_g_ParamLimits

0xd6bd,	// (0x00051780) popup_slider_window_t1_ParamLimits

0xd731,	// (0x000517f4) small_volume_slider_vertical_pane_ParamLimits

0xe0b8,	// (0x0005217b) cell_graphic2_pane_ParamLimits

0xe107,	// (0x000521ca) bg_button_pane_cp10_ParamLimits

0xe107,	// (0x000521ca) bg_button_pane_cp10

0xe11a,	// (0x000521dd) bg_button_pane_cp11_ParamLimits

0xe11a,	// (0x000521dd) bg_button_pane_cp11

0xe12d,	// (0x000521f0) graphic2_pages_pane_g1_ParamLimits

0xe12d,	// (0x000521f0) graphic2_pages_pane_g1

0xe148,	// (0x0005220b) graphic2_pages_pane_g2_ParamLimits

0xe148,	// (0x0005220b) graphic2_pages_pane_g2

0x0001,

0xfd8e,	// (0x00053e51) graphic2_pages_pane_g_ParamLimits

0xfd8e,	// (0x00053e51) graphic2_pages_pane_g

0xe160,	// (0x00052223) graphic2_pages_pane_t1_ParamLimits

0xe160,	// (0x00052223) graphic2_pages_pane_t1

0xe178,	// (0x0005223b) cell_graphic2_control_pane_ParamLimits

0xe178,	// (0x0005223b) cell_graphic2_control_pane

0xe196,	// (0x00052259) cell_graphic2_pane_g1_ParamLimits

0xe196,	// (0x00052259) cell_graphic2_pane_g1

0xe1a3,	// (0x00052266) cell_graphic2_pane_g2_ParamLimits

0xe1a3,	// (0x00052266) cell_graphic2_pane_g2

0xe1b0,	// (0x00052273) cell_graphic2_pane_g3_ParamLimits

0xe1b0,	// (0x00052273) cell_graphic2_pane_g3

0xe1bd,	// (0x00052280) cell_graphic2_pane_g4_ParamLimits

0xe1bd,	// (0x00052280) cell_graphic2_pane_g4

0xe1ca,	// (0x0005228d) cell_graphic2_pane_g5_ParamLimits

0xe1ca,	// (0x0005228d) cell_graphic2_pane_g5

0x0004,

0xfd93,	// (0x00053e56) cell_graphic2_pane_g_ParamLimits

0xfd93,	// (0x00053e56) cell_graphic2_pane_g

0xe1e3,	// (0x000522a6) cell_graphic2_pane_t1_ParamLimits

0xe1e3,	// (0x000522a6) cell_graphic2_pane_t1

0x9ade,	// (0x0004dba1) grid_highlight_pane_cp11_ParamLimits

0x9ade,	// (0x0004dba1) grid_highlight_pane_cp11

0x0b94,	// (0x00044c57) bg_button_pane_cp05

0xe219,	// (0x000522dc) cell_graphic2_control_pane_g1

0xc018,	// (0x000500db) bg_touch_area_indi_pane_g1

0xe241,	// (0x00052304) aid_cmod_rocker_key_size

0xe24b,	// (0x0005230e) aid_cmode_itu_key_size

0xe255,	// (0x00052318) main_cmode_video_pane

0xe25f,	// (0x00052322) main_comp_mode_itu_pane

0xe26b,	// (0x0005232e) main_comp_mode_rocker_pane

0xe277,	// (0x0005233a) cell_cmode_rocker_pane_ParamLimits

0xe277,	// (0x0005233a) cell_cmode_rocker_pane

0xe289,	// (0x0005234c) cell_cmode_itu_pane_ParamLimits

0xe289,	// (0x0005234c) cell_cmode_itu_pane

0x0e20,	// (0x00044ee3) bg_button_pane_cp06_ParamLimits

0x0e20,	// (0x00044ee3) bg_button_pane_cp06

0xc288,	// (0x0005034b) cell_cmode_rocker_pane_g1_ParamLimits

0xc288,	// (0x0005034b) cell_cmode_rocker_pane_g1

0xd7d5,	// (0x00051898) cell_cmode_rocker_pane_g2_ParamLimits

0xd7d5,	// (0x00051898) cell_cmode_rocker_pane_g2

0x0001,

0xfda3,	// (0x00053e66) cell_cmode_rocker_pane_g_ParamLimits

0xfda3,	// (0x00053e66) cell_cmode_rocker_pane_g

0x09fa,	// (0x00044abd) bg_button_pane_cp07

0xe29e,	// (0x00052361) cell_cmode_itu_pane_g1

0xe2a7,	// (0x0005236a) cell_cmode_itu_pane_t1

0xe2b5,	// (0x00052378) cell_cmode_itu_pane_t2

0x0001,

0xfda8,	// (0x00053e6b) cell_cmode_itu_pane_t

0xd9fb,	// (0x00051abe) aid_touch_ctrl_left

0xda03,	// (0x00051ac6) aid_touch_ctrl_right

0x09fa,	// (0x00044abd) compa_mode_pane

0xe2c3,	// (0x00052386) aid_cmod_rocker_key_size_cp

0xe2cd,	// (0x00052390) aid_cmode_itu_key_size_cp

0xe2d7,	// (0x0005239a) compa_mode_pane_g1

0xe2df,	// (0x000523a2) compa_mode_pane_g2

0xe2e7,	// (0x000523aa) compa_mode_pane_g3

0x0002,

0xfdad,	// (0x00053e70) compa_mode_pane_g

0xe2ef,	// (0x000523b2) main_comp_mode_itu_pane_cp

0xe2f7,	// (0x000523ba) main_comp_mode_rocker_pane_cp

0xe2ff,	// (0x000523c2) cell_cmode_itu_pane_cp_ParamLimits

0xe2ff,	// (0x000523c2) cell_cmode_itu_pane_cp

0xe314,	// (0x000523d7) cell_cmode_rocker_pane_cp_ParamLimits

0xe314,	// (0x000523d7) cell_cmode_rocker_pane_cp

0x0e20,	// (0x00044ee3) bg_button_pane_cp06_cp_ParamLimits

0x0e20,	// (0x00044ee3) bg_button_pane_cp06_cp

0xc288,	// (0x0005034b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc288,	// (0x0005034b) cell_cmode_rocker_pane_g1_cp

0xc018,	// (0x000500db) cell_cmode_rocker_pane_g2_cp

0x09fa,	// (0x00044abd) bg_button_pane_cp07_cp

0xe326,	// (0x000523e9) cell_cmode_itu_pane_g1_cp

0xe32f,	// (0x000523f2) cell_cmode_itu_pane_t1_cp

0xe32f,	// (0x000523f2) cell_cmode_itu_pane_t2_cp

0xaf6b,	// (0x0004f02e) settings_code_pane_cp2

0x0a6a,	// (0x00044b2d) bg_popup_window_pane_cp3_ParamLimits

0x0cad,	// (0x00044d70) heading_pane_cp3_ParamLimits

0x0cbc,	// (0x00044d7f) listscroll_popup_graphic_pane_ParamLimits

0x874b,	// (0x0004c80e) fep_hwr_aid_pane_ParamLimits

0x8be9,	// (0x0004ccac) aid_touch_sctrl_top_ParamLimits

0x8bf6,	// (0x0004ccb9) sctrl_sk_top_pane_g1_ParamLimits

0xc288,	// (0x0005034b) sctrl_sk_top_pane_g2_ParamLimits

0xfce3,	// (0x00053da6) sctrl_sk_top_pane_g_ParamLimits

0x8c03,	// (0x0004ccc6) sctrl_sk_top_pane_t1_ParamLimits

0x8be9,	// (0x0004ccac) aid_touch_sctrl_bottom_ParamLimits

0x8c03,	// (0x0004ccc6) sctrl_sk_bottom_pane_t1_ParamLimits

0xd944,	// (0x00051a07) aid_area_touch_clock

0x8dda,	// (0x0004ce9d) aid_vkb2_area_top_pane_cell_ParamLimits

0x8dda,	// (0x0004ce9d) aid_vkb2_area_top_pane_cell

0x8f28,	// (0x0004cfeb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f28,	// (0x0004cfeb) aid_vkb2_area_bottom_pane_cell

0xdeb3,	// (0x00051f76) popup_char_count_window

0xe33d,	// (0x00052400) popup_char_count_window_g1

0xe346,	// (0x00052409) popup_char_count_window_g2

0xe34f,	// (0x00052412) popup_char_count_window_g3

0x0002,

0xfdb4,	// (0x00053e77) popup_char_count_window_g

0xe358,	// (0x0005241b) popup_char_count_window_t1

0x8c9c,	// (0x0004cd5f) popup_fep_char_preview_window_ParamLimits

0x8c9c,	// (0x0004cd5f) popup_fep_char_preview_window

0x8df8,	// (0x0004cebb) vkb2_top_candi_pane_ParamLimits

0x8df8,	// (0x0004cebb) vkb2_top_candi_pane

0xe366,	// (0x00052429) cell_vkb2_top_candi_pane_ParamLimits

0xe366,	// (0x00052429) cell_vkb2_top_candi_pane

0xa0f8,	// (0x0004e1bb) bg_popup_fep_char_preview_window_ParamLimits

0xa0f8,	// (0x0004e1bb) bg_popup_fep_char_preview_window

0x921a,	// (0x0004d2dd) popup_fep_char_preview_window_t1_ParamLimits

0x921a,	// (0x0004d2dd) popup_fep_char_preview_window_t1

0xe3b0,	// (0x00052473) bg_popup_fep_char_preview_window_g1

0xe3b8,	// (0x0005247b) bg_popup_fep_char_preview_window_g2

0xe3c0,	// (0x00052483) bg_popup_fep_char_preview_window_g3

0xe3c8,	// (0x0005248b) bg_popup_fep_char_preview_window_g4

0xe3d0,	// (0x00052493) bg_popup_fep_char_preview_window_g5

0xe3d8,	// (0x0005249b) bg_popup_fep_char_preview_window_g6

0xe3e0,	// (0x000524a3) bg_popup_fep_char_preview_window_g7

0xe3e8,	// (0x000524ab) bg_popup_fep_char_preview_window_g8

0xe3f0,	// (0x000524b3) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbb,	// (0x00053e7e) bg_popup_fep_char_preview_window_g

0xc288,	// (0x0005034b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc288,	// (0x0005034b) cell_vkb2_top_candi_pane_g1

0xc59f,	// (0x00050662) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc59f,	// (0x00050662) cell_vkb2_top_candi_pane_g2

0xc5c0,	// (0x00050683) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5c0,	// (0x00050683) cell_vkb2_top_candi_pane_g3

0x925c,	// (0x0004d31f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x925c,	// (0x0004d31f) cell_vkb2_top_candi_pane_g4

0xc7aa,	// (0x0005086d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7aa,	// (0x0005086d) cell_vkb2_top_candi_pane_g5

0xd7d5,	// (0x00051898) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7d5,	// (0x00051898) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd0,	// (0x00053e93) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd0,	// (0x00053e93) cell_vkb2_top_candi_pane_g

0x927d,	// (0x0004d340) cell_vkb2_top_candi_pane_t1

0x8438,	// (0x0004c4fb) aid_size_touch_slider_mark_ParamLimits

0x8438,	// (0x0004c4fb) aid_size_touch_slider_mark

0xdff6,	// (0x000520b9) grid_graphic2_catg_pane_ParamLimits

0xdff6,	// (0x000520b9) grid_graphic2_catg_pane

0xe094,	// (0x00052157) popup_grid_graphic2_window_t1_ParamLimits

0xe094,	// (0x00052157) popup_grid_graphic2_window_t1

0xe0a6,	// (0x00052169) popup_grid_graphic2_window_t2_ParamLimits

0xe0a6,	// (0x00052169) popup_grid_graphic2_window_t2

0x0001,

0xfd89,	// (0x00053e4c) popup_grid_graphic2_window_t_ParamLimits

0xfd89,	// (0x00053e4c) popup_grid_graphic2_window_t

0x0b94,	// (0x00044c57) bg_button_pane_cp05_ParamLimits

0xe219,	// (0x000522dc) cell_graphic2_control_pane_g1_ParamLimits

0xe3f8,	// (0x000524bb) cell_graphic2_catg_pane_ParamLimits

0xe3f8,	// (0x000524bb) cell_graphic2_catg_pane

0x09fa,	// (0x00044abd) bg_button_pane_cp12

0xe40a,	// (0x000524cd) cell_graphic2_catg_pane_g1

0xd90f,	// (0x000519d2) cell_tb_ext_pane_t1_ParamLimits

0x9045,	// (0x0004d108) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9045,	// (0x0004d108) vkb2_top_cell_right_narrow_pane

0x905d,	// (0x0004d120) vkb2_top_cell_right_wide_pane_ParamLimits

0x905d,	// (0x0004d120) vkb2_top_cell_right_wide_pane

0x873d,	// (0x0004c800) bg_vkb2_func_pane_ParamLimits

0x873d,	// (0x0004c800) bg_vkb2_func_pane

0x90ce,	// (0x0004d191) vkb2_top_cell_left_pane_g1_ParamLimits

0x873d,	// (0x0004c800) bg_vkb2_fuc_pane_cp03_ParamLimits

0x873d,	// (0x0004c800) bg_vkb2_fuc_pane_cp03

0x9137,	// (0x0004d1fa) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a5a,	// (0x0004db1d) bg_vkb2_func_pane_g1

0x9a62,	// (0x0004db25) bg_vkb2_func_pane_g2

0x9a72,	// (0x0004db35) bg_vkb2_func_pane_g3

0x9a6a,	// (0x0004db2d) bg_vkb2_func_pane_g4

0x9a7a,	// (0x0004db3d) bg_vkb2_func_pane_g5

0x9a82,	// (0x0004db45) bg_vkb2_func_pane_g6

0x9a8a,	// (0x0004db4d) bg_vkb2_func_pane_g7

0x9a92,	// (0x0004db55) bg_vkb2_func_pane_g8

0x9a52,	// (0x0004db15) bg_vkb2_func_pane_g9

0x0008,

0xfddd,	// (0x00053ea0) bg_vkb2_func_pane_g

0x873d,	// (0x0004c800) bg_vkb2_fuc_pane_cp01_ParamLimits

0x873d,	// (0x0004c800) bg_vkb2_fuc_pane_cp01

0x90ce,	// (0x0004d191) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90ce,	// (0x0004d191) vkb2_top_cell_right_wide_pane_g1

0x873d,	// (0x0004c800) bg_vkb2_fuc_pane_cp02_ParamLimits

0x873d,	// (0x0004c800) bg_vkb2_fuc_pane_cp02

0x929c,	// (0x0004d35f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x929c,	// (0x0004d35f) vkb2_top_cell_right_narrow_pane_g1

0xd531,	// (0x000515f4) aid_touch_area_decrease_ParamLimits

0xd531,	// (0x000515f4) aid_touch_area_decrease

0xd555,	// (0x00051618) aid_touch_area_increase_ParamLimits

0xd555,	// (0x00051618) aid_touch_area_increase

0xd56d,	// (0x00051630) aid_touch_area_mute_ParamLimits

0xd56d,	// (0x00051630) aid_touch_area_mute

0xd589,	// (0x0005164c) aid_touch_area_slider_ParamLimits

0xd589,	// (0x0005164c) aid_touch_area_slider

0xd673,	// (0x00051736) popup_slider_window_g4_ParamLimits

0xd673,	// (0x00051736) popup_slider_window_g4

0xd68b,	// (0x0005174e) popup_slider_window_g5_ParamLimits

0xd68b,	// (0x0005174e) popup_slider_window_g5

0xd6ad,	// (0x00051770) popup_slider_window_g6_ParamLimits

0xd6ad,	// (0x00051770) popup_slider_window_g6

0xd6eb,	// (0x000517ae) popup_slider_window_t2_ParamLimits

0xd6eb,	// (0x000517ae) popup_slider_window_t2

0x0001,

0xfcd7,	// (0x00053d9a) popup_slider_window_t_ParamLimits

0xfcd7,	// (0x00053d9a) popup_slider_window_t

0xd703,	// (0x000517c6) slider_pane_ParamLimits

0xd703,	// (0x000517c6) slider_pane

0xe413,	// (0x000524d6) slider_pane_g1_ParamLimits

0xe413,	// (0x000524d6) slider_pane_g1

0xe427,	// (0x000524ea) slider_pane_g2_ParamLimits

0xe427,	// (0x000524ea) slider_pane_g2

0xe43d,	// (0x00052500) slider_pane_g3_ParamLimits

0xe43d,	// (0x00052500) slider_pane_g3

0x0003,

0xfdf0,	// (0x00053eb3) slider_pane_g_ParamLimits

0xfdf0,	// (0x00053eb3) slider_pane_g

0x7d40,	// (0x0004be03) popup_tb_float_extension_window_ParamLimits

0x7d40,	// (0x0004be03) popup_tb_float_extension_window

0xe469,	// (0x0005252c) aid_size_cell_tb_float_ext

0x09fa,	// (0x00044abd) bg_popup_sub_window_cp28

0xe475,	// (0x00052538) grid_tb_float_ext_pane

0xe47f,	// (0x00052542) cell_tb_float_ext_pane_ParamLimits

0xe47f,	// (0x00052542) cell_tb_float_ext_pane

0xe499,	// (0x0005255c) cell_tb_float_ext_pane_g1

0xe4a2,	// (0x00052565) grid_highlight_pane_cp12

0x887e,	// (0x0004c941) cell_last_hwr_side_pane_ParamLimits

0x887e,	// (0x0004c941) cell_last_hwr_side_pane

0xc018,	// (0x000500db) cell_last_hwr_side_pane_g1

0xe4ab,	// (0x0005256e) cell_last_hwr_side_pane_g2

0x0001,

0xfdf9,	// (0x00053ebc) cell_last_hwr_side_pane_g

0x8ff4,	// (0x0004d0b7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8ff4,	// (0x0004d0b7) vkb2_area_bottom_space_btn_pane

0xc288,	// (0x0005034b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf68,	// (0x0005202b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x927d,	// (0x0004d340) cell_vkb2_top_candi_pane_t1_ParamLimits

0x92bc,	// (0x0004d37f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x92bc,	// (0x0004d37f) vkb2_area_bottom_space_btn_pane_g1

0x92f6,	// (0x0004d3b9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x92f6,	// (0x0004d3b9) vkb2_area_bottom_space_btn_pane_g2

0x932c,	// (0x0004d3ef) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x932c,	// (0x0004d3ef) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfe,	// (0x00053ec1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfe,	// (0x00053ec1) vkb2_area_bottom_space_btn_pane_g

0x87f2,	// (0x0004c8b5) cel_fep_hwr_func_pane_ParamLimits

0x87f2,	// (0x0004c8b5) cel_fep_hwr_func_pane

0x882e,	// (0x0004c8f1) cell_hwr_side_button_pane_ParamLimits

0x882e,	// (0x0004c8f1) cell_hwr_side_button_pane

0xd944,	// (0x00051a07) aid_area_touch_clock_ParamLimits

0x0b94,	// (0x00044c57) bg_uniindi_top_pane_ParamLimits

0xd956,	// (0x00051a19) uniindi_top_pane_g1_ParamLimits

0xd96c,	// (0x00051a2f) uniindi_top_pane_g2_ParamLimits

0xd978,	// (0x00051a3b) uniindi_top_pane_g3_ParamLimits

0xd989,	// (0x00051a4c) uniindi_top_pane_g4_ParamLimits

0xfd0f,	// (0x00053dd2) uniindi_top_pane_g_ParamLimits

0xd996,	// (0x00051a59) uniindi_top_pane_t1_ParamLimits

0x0b94,	// (0x00044c57) bg_vkb2_func_pane_cp01_ParamLimits

0x0b94,	// (0x00044c57) bg_vkb2_func_pane_cp01

0xe4b4,	// (0x00052577) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4b4,	// (0x00052577) cel_fep_hwr_func_pane_g1

0x0b94,	// (0x00044c57) bg_vkb2_func_pane_cp02_ParamLimits

0x0b94,	// (0x00044c57) bg_vkb2_func_pane_cp02

0xe4b4,	// (0x00052577) cell_hwr_side_button_pane_g1_ParamLimits

0xe4b4,	// (0x00052577) cell_hwr_side_button_pane_g1

0x98d6,	// (0x0004d999) status_pane_g4_ParamLimits

0x98d6,	// (0x0004d999) status_pane_g4

0x98f0,	// (0x0004d9b3) status_pane_t1

0xbd5a,	// (0x0004fe1d) form2_midp_gauge_slider_cont_pane

0xbd62,	// (0x0004fe25) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd74,	// (0x0004fe37) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd86,	// (0x0004fe49) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae2,	// (0x00053ba5) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd98,	// (0x0004fe5b) form2_midp_slider_pane_ParamLimits

0x8c64,	// (0x0004cd27) aid_size_cell_func_vkb2_ParamLimits

0x8c64,	// (0x0004cd27) aid_size_cell_func_vkb2

0xe455,	// (0x00052518) slider_pane_g4_ParamLimits

0xe455,	// (0x00052518) slider_pane_g4

0x9376,	// (0x0004d439) form2_midp_gauge_slider_pane_t2_cp01

0x9384,	// (0x0004d447) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9384,	// (0x0004d447) form2_midp_gauge_slider_pane_t3_cp01

0x93a1,	// (0x0004d464) form2_midp_slider_pane_cp01

0x09fa,	// (0x00044abd) navi_smil_pane

0xe4ed,	// (0x000525b0) navi_smil_pane_g1

0xe4f5,	// (0x000525b8) navi_smil_pane_t1

0xe4c2,	// (0x00052585) form2_midp_slider_pane_g1

0xe4cb,	// (0x0005258e) form2_midp_slider_pane_g2

0xe4d3,	// (0x00052596) form2_midp_slider_pane_g3

0xe4c2,	// (0x00052585) form2_midp_slider_pane_g4

0xe4db,	// (0x0005259e) form2_midp_slider_pane_g5

0x0004,

0xfe07,	// (0x00053eca) form2_midp_slider_pane_g

0x9366,	// (0x0004d429) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9366,	// (0x0004d429) vkb2_area_bottom_space_btn_pane_g4

0x7fc7,	// (0x0004c08a) lc0_navi_pane_ParamLimits

0x7fc7,	// (0x0004c08a) lc0_navi_pane

0x803d,	// (0x0004c100) lc0_stat_indi_pane_ParamLimits

0x803d,	// (0x0004c100) lc0_stat_indi_pane

0x8054,	// (0x0004c117) ls0_title_pane_ParamLimits

0x8054,	// (0x0004c117) ls0_title_pane

0x0e20,	// (0x00044ee3) bg_popup_sub_pane_cp14_ParamLimits

0xd92b,	// (0x000519ee) list_uniindi_pane_ParamLimits

0xd937,	// (0x000519fa) uniindi_top_pane_ParamLimits

0xd9d3,	// (0x00051a96) list_single_uniindi_pane_g1_ParamLimits

0xd9e6,	// (0x00051aa9) list_single_uniindi_pane_t1_ParamLimits

0x93aa,	// (0x0004d46d) lc0_stat_clock_pane_ParamLimits

0x93aa,	// (0x0004d46d) lc0_stat_clock_pane

0xe503,	// (0x000525c6) lc0_stat_indi_pane_g1_ParamLimits

0xe503,	// (0x000525c6) lc0_stat_indi_pane_g1

0xe510,	// (0x000525d3) lc0_stat_indi_pane_g2_ParamLimits

0xe510,	// (0x000525d3) lc0_stat_indi_pane_g2

0x0001,

0xfe12,	// (0x00053ed5) lc0_stat_indi_pane_g_ParamLimits

0xfe12,	// (0x00053ed5) lc0_stat_indi_pane_g

0x93b7,	// (0x0004d47a) lc0_uni_indicator_pane_ParamLimits

0x93b7,	// (0x0004d47a) lc0_uni_indicator_pane

0xe51d,	// (0x000525e0) ls0_title_pane_g1_ParamLimits

0xe51d,	// (0x000525e0) ls0_title_pane_g1

0xe531,	// (0x000525f4) ls0_title_pane_t1_ParamLimits

0xe531,	// (0x000525f4) ls0_title_pane_t1

0x93c4,	// (0x0004d487) lc0_uni_indicator_pane_g1_ParamLimits

0x93c4,	// (0x0004d487) lc0_uni_indicator_pane_g1

0xe567,	// (0x0005262a) lc0_stat_clock_pane_t1

0x09fa,	// (0x00044abd) main_ai5_pane

0xe57d,	// (0x00052640) ai5_sk_pane_ParamLimits

0xe57d,	// (0x00052640) ai5_sk_pane

0xe58a,	// (0x0005264d) cell_ai5_widget_pane_ParamLimits

0xe58a,	// (0x0005264d) cell_ai5_widget_pane

0xe653,	// (0x00052716) aid_size_cell_widget_grid

0xe661,	// (0x00052724) bg_ai5_widget_pane_ParamLimits

0xe661,	// (0x00052724) bg_ai5_widget_pane

0xe6df,	// (0x000527a2) cell_ai5_widget_pane_g2

0xe6f3,	// (0x000527b6) cell_ai5_widget_pane_g3

0xe70d,	// (0x000527d0) cell_ai5_widget_pane_g4

0xe71d,	// (0x000527e0) cell_ai5_widget_pane_g5

0xe72d,	// (0x000527f0) cell_ai5_widget_pane_g6

0xe739,	// (0x000527fc) cell_ai5_widget_pane_g7

0xe7a5,	// (0x00052868) cell_ai5_widget_pane_t1_ParamLimits

0xe7a5,	// (0x00052868) cell_ai5_widget_pane_t1

0xe7c2,	// (0x00052885) cell_ai5_widget_pane_t2_ParamLimits

0xe7c2,	// (0x00052885) cell_ai5_widget_pane_t2

0xe7da,	// (0x0005289d) cell_ai5_widget_pane_t3_ParamLimits

0xe7da,	// (0x0005289d) cell_ai5_widget_pane_t3

0xe7f2,	// (0x000528b5) cell_ai5_widget_pane_t4_ParamLimits

0xe7f2,	// (0x000528b5) cell_ai5_widget_pane_t4

0xe818,	// (0x000528db) cell_ai5_widget_pane_t5_ParamLimits

0xe818,	// (0x000528db) cell_ai5_widget_pane_t5

0xe837,	// (0x000528fa) cell_ai5_widget_pane_t6_ParamLimits

0xe837,	// (0x000528fa) cell_ai5_widget_pane_t6

0xe849,	// (0x0005290c) cell_ai5_widget_pane_t7_ParamLimits

0xe849,	// (0x0005290c) cell_ai5_widget_pane_t7

0xe868,	// (0x0005292b) cell_ai5_widget_pane_t8_ParamLimits

0xe868,	// (0x0005292b) cell_ai5_widget_pane_t8

0x000b,

0xfe32,	// (0x00053ef5) cell_ai5_widget_pane_t_ParamLimits

0xfe32,	// (0x00053ef5) cell_ai5_widget_pane_t

0xe8ec,	// (0x000529af) grid_ai5_widget_pane

0x0e20,	// (0x00044ee3) highlight_cell_ai5_widget_pane_ParamLimits

0x0e20,	// (0x00044ee3) highlight_cell_ai5_widget_pane

0xe900,	// (0x000529c3) ai5_sk_left_pane

0xe90a,	// (0x000529cd) ai5_sk_middle_pane

0xe914,	// (0x000529d7) ai5_sk_right_pane

0xe91e,	// (0x000529e1) bg_ai5_widget_pane_g1_ParamLimits

0xe91e,	// (0x000529e1) bg_ai5_widget_pane_g1

0xe92a,	// (0x000529ed) bg_ai5_widget_pane_g2_ParamLimits

0xe92a,	// (0x000529ed) bg_ai5_widget_pane_g2

0xe936,	// (0x000529f9) bg_ai5_widget_pane_g3_ParamLimits

0xe936,	// (0x000529f9) bg_ai5_widget_pane_g3

0xe942,	// (0x00052a05) bg_ai5_widget_pane_g4_ParamLimits

0xe942,	// (0x00052a05) bg_ai5_widget_pane_g4

0xe94e,	// (0x00052a11) bg_ai5_widget_pane_g5_ParamLimits

0xe94e,	// (0x00052a11) bg_ai5_widget_pane_g5

0xe95a,	// (0x00052a1d) bg_ai5_widget_pane_g6_ParamLimits

0xe95a,	// (0x00052a1d) bg_ai5_widget_pane_g6

0xe966,	// (0x00052a29) bg_ai5_widget_pane_g7_ParamLimits

0xe966,	// (0x00052a29) bg_ai5_widget_pane_g7

0xe972,	// (0x00052a35) bg_ai5_widget_pane_g8_ParamLimits

0xe972,	// (0x00052a35) bg_ai5_widget_pane_g8

0xe97e,	// (0x00052a41) bg_ai5_widget_pane_g9_ParamLimits

0xe97e,	// (0x00052a41) bg_ai5_widget_pane_g9

0x0008,

0xfe4b,	// (0x00053f0e) bg_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x00053f0e) bg_ai5_widget_pane_g

0xe9b0,	// (0x00052a73) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9b0,	// (0x00052a73) cell_shortcut_ai5_widget_pane

0x16e0,	// (0x000457a3) bg_cell_shortcut_ai5_widget_pane

0xe9c1,	// (0x00052a84) cell_grid_ai5_widget_pane_g1

0x16e0,	// (0x000457a3) highlight_cell_shortcut_ai5_widget_pane

0x9a62,	// (0x0004db25) ai5_sk_left_pane_g1

0xe9ca,	// (0x00052a8d) ai5_sk_left_pane_g2

0xe9d2,	// (0x00052a95) ai5_sk_left_pane_g3

0xe9da,	// (0x00052a9d) ai5_sk_left_pane_g4

0x0003,

0xfe5e,	// (0x00053f21) ai5_sk_left_pane_g

0xe9e2,	// (0x00052aa5) ai5_sk_left_pane_t1

0x9a5a,	// (0x0004db1d) ai5_sk_right_pane_g1

0xe9f0,	// (0x00052ab3) ai5_sk_right_pane_g2

0xe9f8,	// (0x00052abb) ai5_sk_right_pane_g3

0xea00,	// (0x00052ac3) ai5_sk_right_pane_g4

0x0003,

0xfe67,	// (0x00053f2a) ai5_sk_right_pane_g

0xea08,	// (0x00052acb) ai5_sk_right_pane_t1

0x9a5a,	// (0x0004db1d) ai5_sk_middle_pane_g1

0x9a62,	// (0x0004db25) ai5_sk_middle_pane_g2

0x9a7a,	// (0x0004db3d) ai5_sk_middle_pane_g3

0xe9f8,	// (0x00052abb) ai5_sk_middle_pane_g4

0xe9d2,	// (0x00052a95) ai5_sk_middle_pane_g5

0xea16,	// (0x00052ad9) ai5_sk_middle_pane_g6

0xea1e,	// (0x00052ae1) ai5_sk_middle_pane_g7

0x0006,

0xfe70,	// (0x00053f33) ai5_sk_middle_pane_g

0x7e4d,	// (0x0004bf10) aid_touch_area_size_lc0_ParamLimits

0x7e4d,	// (0x0004bf10) aid_touch_area_size_lc0

0x897d,	// (0x0004ca40) cell_hwr_candidate_pane_t1_ParamLimits

0x7e69,	// (0x0004bf2c) aid_touch_navi_pane

0x9880,	// (0x0004d943) status_dt_navi_pane_ParamLimits

0x9880,	// (0x0004d943) status_dt_navi_pane

0x988d,	// (0x0004d950) status_dt_sta_pane_ParamLimits

0x988d,	// (0x0004d950) status_dt_sta_pane

0xea26,	// (0x00052ae9) dt_sta_controll_pane

0xea33,	// (0x00052af6) dt_sta_indi_pane

0xea44,	// (0x00052b07) dt_sta_title_pane

0x0b94,	// (0x00044c57) bg_dt_sta_indi_pane_ParamLimits

0x0b94,	// (0x00044c57) bg_dt_sta_indi_pane

0xea57,	// (0x00052b1a) dt_sta_battery_pane

0xea5f,	// (0x00052b22) dt_sta_indi_pane_g1

0xea68,	// (0x00052b2b) dt_sta_indi_pane_g2

0xea71,	// (0x00052b34) dt_sta_indi_pane_g3

0x0002,

0xfe7f,	// (0x00053f42) dt_sta_indi_pane_g

0xea7a,	// (0x00052b3d) dt_sta_signal_pane

0x0e20,	// (0x00044ee3) bg_dt_sta_title_pane_ParamLimits

0x0e20,	// (0x00044ee3) bg_dt_sta_title_pane

0xa8b4,	// (0x0004e977) dt_sta_title_pane_g1

0xea83,	// (0x00052b46) dt_sta_title_pane_t1_ParamLimits

0xea83,	// (0x00052b46) dt_sta_title_pane_t1

0x09fa,	// (0x00044abd) bg_dt_sta_control_pane

0xea98,	// (0x00052b5b) dt_sta_controll_pane_g1

0xeaa1,	// (0x00052b64) bg_dt_sta_title_pane_g1

0xeaaa,	// (0x00052b6d) bg_dt_sta_title_pane_g2

0xeab3,	// (0x00052b76) bg_dt_sta_title_pane_g3

0x0002,

0xfe86,	// (0x00053f49) bg_dt_sta_title_pane_g

0xc018,	// (0x000500db) bg_dt_sta_indi_pane_g1

0xeabc,	// (0x00052b7f) dt_sta_signal_pane_g1

0xeac4,	// (0x00052b87) dt_sta_signal_pane_g2

0x0001,

0xfe8d,	// (0x00053f50) dt_sta_signal_pane_g

0xeacc,	// (0x00052b8f) dt_sta_battery_pane_g1

0xead5,	// (0x00052b98) dt_sta_battery_pane_t1

0xc018,	// (0x000500db) bg_dt_sta_control_pane_g1

0x12f5,	// (0x000453b8) fep_china_uni_eep_pane

0x12fd,	// (0x000453c0) fep_china_uni_entry_pane_ParamLimits

0x130d,	// (0x000453d0) popup_fep_china_uni_window_g1_ParamLimits

0x131d,	// (0x000453e0) popup_fep_china_uni_window_g2_ParamLimits

0x131d,	// (0x000453e0) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x000537b4) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x000537b4) popup_fep_china_uni_window_g

0xeae4,	// (0x00052ba7) fep_china_uni_eep_pane_g1

0xeaec,	// (0x00052baf) fep_china_uni_eep_pane_t1

0xe4e4,	// (0x000525a7) aid_touch_area_size_smil_player

0x7fbf,	// (0x0004c082) lc0_clock_pane

0x98e4,	// (0x0004d9a7) status_pane_g5_ParamLimits

0x98e4,	// (0x0004d9a7) status_pane_g5

0x7a01,	// (0x0004bac4) popup_keymap_window

0x98a2,	// (0x0004d965) status_icon_pane

0xe6f3,	// (0x000527b6) cell_ai5_widget_pane_g3_ParamLimits

0xe70d,	// (0x000527d0) cell_ai5_widget_pane_g4_ParamLimits

0xe71d,	// (0x000527e0) cell_ai5_widget_pane_g5_ParamLimits

0xe745,	// (0x00052808) cell_ai5_widget_pane_g8_ParamLimits

0xe745,	// (0x00052808) cell_ai5_widget_pane_g8

0xe759,	// (0x0005281c) cell_ai5_widget_pane_g9_ParamLimits

0xe759,	// (0x0005281c) cell_ai5_widget_pane_g9

0xe76d,	// (0x00052830) cell_ai5_widget_pane_g10_ParamLimits

0xe76d,	// (0x00052830) cell_ai5_widget_pane_g10

0xeafb,	// (0x00052bbe) status_icon_pane_g1

0x09fa,	// (0x00044abd) bg_popup_sub_pane_cp13

0xeb03,	// (0x00052bc6) popup_keymap_window_t1

0x773a,	// (0x0004b7fd) control_pane_g6_ParamLimits

0x773a,	// (0x0004b7fd) control_pane_g6

0x7747,	// (0x0004b80a) control_pane_g7_ParamLimits

0x7747,	// (0x0004b80a) control_pane_g7

0x7754,	// (0x0004b817) control_pane_g8_ParamLimits

0x7754,	// (0x0004b817) control_pane_g8

0xea26,	// (0x00052ae9) dt_sta_controll_pane_ParamLimits

0xea33,	// (0x00052af6) dt_sta_indi_pane_ParamLimits

0xea44,	// (0x00052b07) dt_sta_title_pane_ParamLimits

0x0d6b,	// (0x00044e2e) aid_size_touch_scroll_bar_cale

0x6506,	// (0x0004a5c9) popup_discreet_window_ParamLimits

0x6506,	// (0x0004a5c9) popup_discreet_window

0x6580,	// (0x0004a643) popup_sk_window

0xa0f8,	// (0x0004e1bb) bg_popup_sub_pane_cp28_ParamLimits

0xa0f8,	// (0x0004e1bb) bg_popup_sub_pane_cp28

0xeb11,	// (0x00052bd4) popup_discreet_window_g1_ParamLimits

0xeb11,	// (0x00052bd4) popup_discreet_window_g1

0xeb31,	// (0x00052bf4) popup_discreet_window_t1_ParamLimits

0xeb31,	// (0x00052bf4) popup_discreet_window_t1

0xeb4f,	// (0x00052c12) popup_discreet_window_t2_ParamLimits

0xeb4f,	// (0x00052c12) popup_discreet_window_t2

0x0002,

0xfe92,	// (0x00053f55) popup_discreet_window_t_ParamLimits

0xfe92,	// (0x00053f55) popup_discreet_window_t

0x93d8,	// (0x0004d49b) popup_sk_window_g1

0x93e2,	// (0x0004d4a5) popup_sk_window_g2

0x0001,

0xfe99,	// (0x00053f5c) popup_sk_window_g

0x93ea,	// (0x0004d4ad) popup_sk_window_t1

0x93f8,	// (0x0004d4bb) popup_sk_window_t1_copy1

0xe6df,	// (0x000527a2) cell_ai5_widget_pane_g2_ParamLimits

0xe87a,	// (0x0005293d) cell_ai5_widget_pane_t9_ParamLimits

0xe87a,	// (0x0005293d) cell_ai5_widget_pane_t9

0x09fa,	// (0x00044abd) main_fep_fshwr2_pane

0x9406,	// (0x0004d4c9) aid_fshwr2_btn_pane

0x941a,	// (0x0004d4dd) aid_fshwr2_syb_pane

0x942e,	// (0x0004d4f1) aid_fshwr2_txt_pane

0x943e,	// (0x0004d501) fshwr2_func_candi_pane

0x9462,	// (0x0004d525) fshwr2_hwr_syb_pane

0x947c,	// (0x0004d53f) fshwr2_icf_pane

0x09fa,	// (0x00044abd) fshwr2_icf_bg_pane

0x94aa,	// (0x0004d56d) fshwr2_icf_pane_t1_ParamLimits

0x94aa,	// (0x0004d56d) fshwr2_icf_pane_t1

0x1272,	// (0x00045335) fshwr2_func_candi_pane_g1

0xeba1,	// (0x00052c64) fshwr2_func_candi_row_pane_ParamLimits

0xeba1,	// (0x00052c64) fshwr2_func_candi_row_pane

0x94c3,	// (0x0004d586) cell_fshwr2_syb_pane_ParamLimits

0x94c3,	// (0x0004d586) cell_fshwr2_syb_pane

0xe4b4,	// (0x00052577) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4b4,	// (0x00052577) fshwr2_hwr_syb_pane_g1

0x09fa,	// (0x00044abd) bg_popup_call_pane_cp01

0x94e6,	// (0x0004d5a9) fshwr2_func_candi_cell_pane_ParamLimits

0x94e6,	// (0x0004d5a9) fshwr2_func_candi_cell_pane

0xa754,	// (0x0004e817) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa754,	// (0x0004e817) fshwr2_func_candi_cell_bg_pane

0x9531,	// (0x0004d5f4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9531,	// (0x0004d5f4) fshwr2_func_candi_cell_pane_g1

0x9551,	// (0x0004d614) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9551,	// (0x0004d614) fshwr2_func_candi_cell_pane_t1

0x09fa,	// (0x00044abd) bg_button_pane_cp08

0x0f62,	// (0x00045025) cell_fshwr2_syb_bg_pane

0x9564,	// (0x0004d627) cell_fshwr2_syb_bg_pane_g1

0x9578,	// (0x0004d63b) cell_fshwr2_syb_bg_pane_t1

0x0e20,	// (0x00044ee3) main_tmo_pane

0xabed,	// (0x0004ecb0) uni_indicator_pane_g1_ParamLimits

0xac00,	// (0x0004ecc3) uni_indicator_pane_g2_ParamLimits

0xac12,	// (0x0004ecd5) uni_indicator_pane_g3_ParamLimits

0xac21,	// (0x0004ece4) uni_indicator_pane_g4_ParamLimits

0xac21,	// (0x0004ece4) uni_indicator_pane_g4

0xac35,	// (0x0004ecf8) uni_indicator_pane_g5_ParamLimits

0xac35,	// (0x0004ecf8) uni_indicator_pane_g5

0xac35,	// (0x0004ecf8) uni_indicator_pane_g6_ParamLimits

0xac35,	// (0x0004ecf8) uni_indicator_pane_g6

0xf8f5,	// (0x000539b8) uni_indicator_pane_g_ParamLimits

0xd513,	// (0x000515d6) popup_tmo_note_window_ParamLimits

0xd513,	// (0x000515d6) popup_tmo_note_window

0x0e20,	// (0x00044ee3) fshwr2_bg_pane

0x9542,	// (0x0004d605) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9542,	// (0x0004d605) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9e,	// (0x00053f61) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9e,	// (0x00053f61) fshwr2_func_candi_cell_pane_g

0xc018,	// (0x000500db) bg_popup_window_pane_cp01

0x958e,	// (0x0004d651) bg_popup_window_pane_g1_cp01

0xebc8,	// (0x00052c8b) bg_popup_window_pane_cp22_ParamLimits

0xebc8,	// (0x00052c8b) bg_popup_window_pane_cp22

0xebd6,	// (0x00052c99) listscroll_tmo_link_pane_ParamLimits

0xebd6,	// (0x00052c99) listscroll_tmo_link_pane

0xec16,	// (0x00052cd9) popup_tmo_note_window_g1_ParamLimits

0xec16,	// (0x00052cd9) popup_tmo_note_window_g1

0xec23,	// (0x00052ce6) tmo_note_info_pane_ParamLimits

0xec23,	// (0x00052ce6) tmo_note_info_pane

0xec3d,	// (0x00052d00) list_tmo_note_info_pane_g1_ParamLimits

0xec3d,	// (0x00052d00) list_tmo_note_info_pane_g1

0xec54,	// (0x00052d17) list_tmo_note_info_pane_g2_ParamLimits

0xec54,	// (0x00052d17) list_tmo_note_info_pane_g2

0x0001,

0xfea3,	// (0x00053f66) list_tmo_note_info_pane_g_ParamLimits

0xfea3,	// (0x00053f66) list_tmo_note_info_pane_g

0xec70,	// (0x00052d33) list_tmo_note_info_text_pane_ParamLimits

0xec70,	// (0x00052d33) list_tmo_note_info_text_pane

0xecf1,	// (0x00052db4) list_tmo_link_pane

0xecfe,	// (0x00052dc1) scroll_pane_cp20

0xed0b,	// (0x00052dce) list_single_tmo_link_pane_ParamLimits

0xed0b,	// (0x00052dce) list_single_tmo_link_pane

0xed1b,	// (0x00052dde) list_single_tmo_link_pane_t1

0xed29,	// (0x00052dec) list_tmo_note_info_text_pane_t1_ParamLimits

0xed29,	// (0x00052dec) list_tmo_note_info_text_pane_t1

0x6d01,	// (0x0004adc4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6d01,	// (0x0004adc4) aid_size_touch_scroll_bar_cp01

0x5917,	// (0x000499da) aid_size_touch_slider_marker

0x6568,	// (0x0004a62b) popup_settings_window_ParamLimits

0x6568,	// (0x0004a62b) popup_settings_window

0x5a92,	// (0x00049b55) popup_candi_list_indi_window

0x7e69,	// (0x0004bf2c) aid_touch_navi_pane_ParamLimits

0x8bbd,	// (0x0004cc80) rs_clock_indi_pane

0x8bc6,	// (0x0004cc89) sctrl_sk_bottom_pane_ParamLimits

0x8bd7,	// (0x0004cc9a) sctrl_sk_top_pane_ParamLimits

0x8cb6,	// (0x0004cd79) popup_fep_tooltip_window

0xe653,	// (0x00052716) aid_size_cell_widget_grid_ParamLimits

0xe6c8,	// (0x0005278b) cell_ai5_widget_pane_g1_ParamLimits

0xe6c8,	// (0x0005278b) cell_ai5_widget_pane_g1

0xe72d,	// (0x000527f0) cell_ai5_widget_pane_g6_ParamLimits

0xe739,	// (0x000527fc) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe17,	// (0x00053eda) cell_ai5_widget_pane_g_ParamLimits

0xfe17,	// (0x00053eda) cell_ai5_widget_pane_g

0xe8a9,	// (0x0005296c) cell_ai5_widget_pane_t10_ParamLimits

0xe8a9,	// (0x0005296c) cell_ai5_widget_pane_t10

0xe8ec,	// (0x000529af) grid_ai5_widget_pane_ParamLimits

0xe98a,	// (0x00052a4d) cell_contacts_ai5_widget_pane_ParamLimits

0xe98a,	// (0x00052a4d) cell_contacts_ai5_widget_pane

0xeb64,	// (0x00052c27) popup_discreet_window_t3_ParamLimits

0xeb64,	// (0x00052c27) popup_discreet_window_t3

0x9494,	// (0x0004d557) popup_fshwr2_char_preview_window_ParamLimits

0x9494,	// (0x0004d557) popup_fshwr2_char_preview_window

0xec8e,	// (0x00052d51) tmo_note_info_pane_t1

0xeca3,	// (0x00052d66) tmo_note_info_pane_t2

0xecb8,	// (0x00052d7b) tmo_note_info_pane_t3

0xeccd,	// (0x00052d90) tmo_note_info_pane_t4

0xecdf,	// (0x00052da2) tmo_note_info_pane_t5

0x0004,

0xfea8,	// (0x00053f6b) tmo_note_info_pane_t

0xecf1,	// (0x00052db4) list_tmo_link_pane_ParamLimits

0xecfe,	// (0x00052dc1) scroll_pane_cp20_ParamLimits

0x09fa,	// (0x00044abd) bg_popup_fep_char_preview_window_cp01

0xed42,	// (0x00052e05) popup_fshwr2_char_preview_window_t1

0xed50,	// (0x00052e13) popup_candi_list_indi_window_g1

0xed59,	// (0x00052e1c) bg_cell_contacts_ai5_widget_pane

0xed65,	// (0x00052e28) cell_contacts_ai5_widget_pane_g1

0xc6ff,	// (0x000507c2) cell_contacts_ai5_widget_pane_g2

0xed7a,	// (0x00052e3d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb3,	// (0x00053f76) cell_contacts_ai5_widget_pane_g

0xed86,	// (0x00052e49) cell_contacts_ai5_widget_pane_t1

0x0e20,	// (0x00044ee3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xedfd,	// (0x00052ec0) settings_container_pane

0x16e0,	// (0x000457a3) listscroll_set_pane_copy1

0xb6fb,	// (0x0004f7be) scroll_pane_cp121_copy1

0x9e9d,	// (0x0004df60) set_content_pane_copy1

0xee09,	// (0x00052ecc) aid_height_set_list_copy1_ParamLimits

0xee09,	// (0x00052ecc) aid_height_set_list_copy1

0xae1d,	// (0x0004eee0) aid_size_parent_copy1_ParamLimits

0xae1d,	// (0x0004eee0) aid_size_parent_copy1

0xee15,	// (0x00052ed8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee15,	// (0x00052ed8) button_value_adjust_pane_cp6_copy1

0x0f62,	// (0x00045025) list_highlight_pane_cp2_copy1_ParamLimits

0x0f62,	// (0x00045025) list_highlight_pane_cp2_copy1

0xee29,	// (0x00052eec) list_set_pane_copy1_ParamLimits

0xee29,	// (0x00052eec) list_set_pane_copy1

0xed98,	// (0x00052e5b) main_pane_set_t1_copy1_ParamLimits

0xed98,	// (0x00052e5b) main_pane_set_t1_copy1

0xedd2,	// (0x00052e95) main_pane_set_t2_copy1_ParamLimits

0xedd2,	// (0x00052e95) main_pane_set_t2_copy1

0xeed6,	// (0x00052f99) main_pane_set_t3_copy1

0xeee4,	// (0x00052fa7) main_pane_set_t4_copy1

0xedf1,	// (0x00052eb4) set_content_pane_g1_copy1_ParamLimits

0xedf1,	// (0x00052eb4) set_content_pane_g1_copy1

0xeef2,	// (0x00052fb5) setting_code_pane_copy1

0xeefa,	// (0x00052fbd) setting_slider_graphic_pane_copy1

0xeefa,	// (0x00052fbd) setting_slider_pane_copy1

0xef02,	// (0x00052fc5) setting_text_pane_copy1

0xef02,	// (0x00052fc5) setting_volume_pane_copy1

0xeef2,	// (0x00052fb5) settings_code_pane_cp2_copy1

0xef0a,	// (0x00052fcd) settings_code_pane_cp_copy1_ParamLimits

0xef0a,	// (0x00052fcd) settings_code_pane_cp_copy1

0x9597,	// (0x0004d65a) volume_set_pane_copy1

0xef1e,	// (0x00052fe1) volume_set_pane_g10_copy1

0xef26,	// (0x00052fe9) volume_set_pane_g1_copy1

0xef2e,	// (0x00052ff1) volume_set_pane_g2_copy1

0xef36,	// (0x00052ff9) volume_set_pane_g3_copy1

0xef3e,	// (0x00053001) volume_set_pane_g4_copy1

0xef46,	// (0x00053009) volume_set_pane_g5_copy1

0xef4e,	// (0x00053011) volume_set_pane_g6_copy1

0xef56,	// (0x00053019) volume_set_pane_g7_copy1

0xef5e,	// (0x00053021) volume_set_pane_g8_copy1

0xef66,	// (0x00053029) volume_set_pane_g9_copy1

0x0a6a,	// (0x00044b2d) bg_set_opt_pane_cp_copy1_ParamLimits

0x0a6a,	// (0x00044b2d) bg_set_opt_pane_cp_copy1

0x959f,	// (0x0004d662) setting_slider_pane_t1_copy1_ParamLimits

0x959f,	// (0x0004d662) setting_slider_pane_t1_copy1

0x95be,	// (0x0004d681) setting_slider_pane_t2_copy1_ParamLimits

0x95be,	// (0x0004d681) setting_slider_pane_t2_copy1

0x95d8,	// (0x0004d69b) setting_slider_pane_t3_copy1_ParamLimits

0x95d8,	// (0x0004d69b) setting_slider_pane_t3_copy1

0x95f0,	// (0x0004d6b3) slider_set_pane_copy1_ParamLimits

0x95f0,	// (0x0004d6b3) slider_set_pane_copy1

0x0e78,	// (0x00044f3b) set_opt_bg_pane_g1_copy2

0x0e80,	// (0x00044f43) set_opt_bg_pane_g2_copy2

0xef6e,	// (0x00053031) set_opt_bg_pane_g3_copy2

0x0e90,	// (0x00044f53) set_opt_bg_pane_g4_copy2

0x0e98,	// (0x00044f5b) set_opt_bg_pane_g5_copy2

0x0ea0,	// (0x00044f63) set_opt_bg_pane_g6_copy2

0xef78,	// (0x0005303b) set_opt_bg_pane_g7_copy2

0xef80,	// (0x00053043) set_opt_bg_pane_g8_copy2

0xef8a,	// (0x0005304d) set_opt_bg_pane_g9_copy2

0x9606,	// (0x0004d6c9) aid_size_touch_slider_mark_copy1_ParamLimits

0x9606,	// (0x0004d6c9) aid_size_touch_slider_mark_copy1

0xef94,	// (0x00053057) slider_set_pane_g1_copy1

0x961a,	// (0x0004d6dd) slider_set_pane_g2_copy1

0x8458,	// (0x0004c51b) slider_set_pane_g3_copy1_ParamLimits

0x8458,	// (0x0004c51b) slider_set_pane_g3_copy1

0x846c,	// (0x0004c52f) slider_set_pane_g4_copy1_ParamLimits

0x846c,	// (0x0004c52f) slider_set_pane_g4_copy1

0x8484,	// (0x0004c547) slider_set_pane_g5_copy1_ParamLimits

0x8484,	// (0x0004c547) slider_set_pane_g5_copy1

0x8458,	// (0x0004c51b) slider_set_pane_g6_copy1_ParamLimits

0x8458,	// (0x0004c51b) slider_set_pane_g6_copy1

0x9622,	// (0x0004d6e5) slider_set_pane_g7_copy1_ParamLimits

0x9622,	// (0x0004d6e5) slider_set_pane_g7_copy1

0x0a0e,	// (0x00044ad1) bg_set_opt_pane_cp2_copy1

0xef9d,	// (0x00053060) setting_slider_graphic_pane_g1_copy1

0xefa6,	// (0x00053069) setting_slider_graphic_pane_t1_copy1

0xefb6,	// (0x00053079) setting_slider_graphic_pane_t2_copy1

0xefc6,	// (0x00053089) slider_set_pane_cp_copy1

0xefd6,	// (0x00053099) input_focus_pane_cp1_copy1

0xefdf,	// (0x000530a2) list_set_text_pane_copy1

0xefe7,	// (0x000530aa) setting_text_pane_g1_copy1

0x625b,	// (0x0004a31e) set_text_pane_t1_copy1

0xefd6,	// (0x00053099) input_focus_pane_cp2_copy1

0xefe7,	// (0x000530aa) setting_code_pane_g1_copy1

0xeff0,	// (0x000530b3) setting_code_pane_t1_copy1

0xeffe,	// (0x000530c1) list_set_graphic_pane_copy1

0x0a0e,	// (0x00044ad1) bg_set_opt_pane_cp4_copy1

0x144d,	// (0x00045510) list_set_graphic_pane_g1_copy1_ParamLimits

0x144d,	// (0x00045510) list_set_graphic_pane_g1_copy1

0xf012,	// (0x000530d5) list_set_graphic_pane_g2_copy1

0x1465,	// (0x00045528) list_set_graphic_pane_t1_copy1_ParamLimits

0x1465,	// (0x00045528) list_set_graphic_pane_t1_copy1

0xc018,	// (0x000500db) rs_clock_indi_pane_g1

0xf01a,	// (0x000530dd) rs_clock_indi_pane_t1

0xf028,	// (0x000530eb) rs_indi_pane

0xf030,	// (0x000530f3) rs_indi_pane_g1

0xf039,	// (0x000530fc) rs_indi_pane_g2

0xed50,	// (0x00052e13) rs_indi_pane_g3

0x0002,

0xfeba,	// (0x00053f7d) rs_indi_pane_g

0x16e0,	// (0x000457a3) bg_popup_preview_window_pane_cp03

0xf042,	// (0x00053105) popup_fep_tooltip_window_t1

0xccc2,	// (0x00050d85) popup_note2_window_g2_ParamLimits

0xccc2,	// (0x00050d85) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x00053d11) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x00053d11) popup_note2_window_g

0xd1af,	// (0x00051272) bg_popup_sub_pane_cp11_ParamLimits

0xd1bc,	// (0x0005127f) cell_ai3_links_pane_g1_ParamLimits

0xd1d3,	// (0x00051296) cell_ai3_links_pane_t1

0x625b,	// (0x0004a31e) set_text_pane_t1_copy1_ParamLimits

0x1612,	// (0x000456d5) cell_graphic_popup_pane_cp2_ParamLimits

0x1612,	// (0x000456d5) cell_graphic_popup_pane_cp2

0xf050,	// (0x00053113) cell_graphic_popup_pane_g1_cp2

0x0cee,	// (0x00044db1) cell_graphic_popup_pane_g2_cp2

0xf058,	// (0x0005311b) cell_graphic_popup_pane_g3_cp2

0xf060,	// (0x00053123) cell_graphic_popup_pane_t2_cp2

0x0cff,	// (0x00044dc2) grid_highlight_pane_cp3_cp2

0x10ef,	// (0x000451b2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0e20,	// (0x00044ee3) main_tmo_pane_ParamLimits

0xd507,	// (0x000515ca) popup_tmo_big_image_note_window

0xe6b7,	// (0x0005277a) cell_ai5_widget_list_pane

0xe6bf,	// (0x00052782) cell_ai5_widget_lrg_icon_pane

0xec8e,	// (0x00052d51) tmo_note_info_pane_t1_ParamLimits

0xeca3,	// (0x00052d66) tmo_note_info_pane_t2_ParamLimits

0xecb8,	// (0x00052d7b) tmo_note_info_pane_t3_ParamLimits

0xeccd,	// (0x00052d90) tmo_note_info_pane_t4_ParamLimits

0xecdf,	// (0x00052da2) tmo_note_info_pane_t5_ParamLimits

0xfea8,	// (0x00053f6b) tmo_note_info_pane_t_ParamLimits

0xedfd,	// (0x00052ec0) settings_container_pane_ParamLimits

0xefce,	// (0x00053091) indicator_popup_pane_cp5

0xefce,	// (0x00053091) indicator_popup_pane_cp6

0xeffe,	// (0x000530c1) list_set_graphic_pane_copy1_ParamLimits

0x09fa,	// (0x00044abd) bg_popup_window_pane_cp23

0xf06e,	// (0x00053131) popup_tmo_big_image_note_window_g1

0xf077,	// (0x0005313a) popup_tmo_big_image_note_window_t1

0xf087,	// (0x0005314a) popup_tmo_big_image_note_window_t2

0xf097,	// (0x0005315a) popup_tmo_big_image_note_window_t3

0x0002,

0xfec1,	// (0x00053f84) popup_tmo_big_image_note_window_t

0xc018,	// (0x000500db) cell_ai5_widget_lrg_icon_pane_g1

0xf0a7,	// (0x0005316a) cell_ai5_widget_lrg_icon_pane_t1

0xf0b5,	// (0x00053178) cell_ai5_widget_list_row_pane_ParamLimits

0xf0b5,	// (0x00053178) cell_ai5_widget_list_row_pane

0xf0cc,	// (0x0005318f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0cc,	// (0x0005318f) cell_ai5_widget_list_row_pane_g1

0xf0d9,	// (0x0005319c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0d9,	// (0x0005319c) cell_ai5_widget_list_row_pane_t1

0xf104,	// (0x000531c7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf104,	// (0x000531c7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec8,	// (0x00053f8b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec8,	// (0x00053f8b) cell_ai5_widget_list_row_pane_t

0x09fa,	// (0x00044abd) main_fep_vtchi_ss_pane

0xf154,	// (0x00053217) popup_fep_char_pre_window

0xf15c,	// (0x0005321f) popup_fep_ituss_window

0xf18e,	// (0x00053251) popup_fep_vkbss_window

0x0f62,	// (0x00045025) grid_vkbss_keypad_pane_ParamLimits

0x0f62,	// (0x00045025) grid_vkbss_keypad_pane

0xf1d4,	// (0x00053297) ituss_keypad_pane

0x9663,	// (0x0004d726) aid_vkbss_key_offset_ParamLimits

0x9663,	// (0x0004d726) aid_vkbss_key_offset

0x966f,	// (0x0004d732) cell_vkbss_key_pane_ParamLimits

0x966f,	// (0x0004d732) cell_vkbss_key_pane

0xf1e4,	// (0x000532a7) bg_cell_vkbss_key_g1_ParamLimits

0xf1e4,	// (0x000532a7) bg_cell_vkbss_key_g1

0xf1f0,	// (0x000532b3) cell_vkbss_key_3p_pane_ParamLimits

0xf1f0,	// (0x000532b3) cell_vkbss_key_3p_pane

0xf226,	// (0x000532e9) cell_vkbss_key_g1_ParamLimits

0xf226,	// (0x000532e9) cell_vkbss_key_g1

0xf25c,	// (0x0005331f) cell_vkbss_key_t1_ParamLimits

0xf25c,	// (0x0005331f) cell_vkbss_key_t1

0x96ba,	// (0x0004d77d) cell_ituss_key_pane_ParamLimits

0x96ba,	// (0x0004d77d) cell_ituss_key_pane

0xf2b8,	// (0x0005337b) bg_cell_ituss_key_g1_ParamLimits

0xf2b8,	// (0x0005337b) bg_cell_ituss_key_g1

0xf2c4,	// (0x00053387) cell_ituss_key_pane_g1_ParamLimits

0xf2c4,	// (0x00053387) cell_ituss_key_pane_g1

0x96cb,	// (0x0004d78e) cell_ituss_key_pane_g2_ParamLimits

0x96cb,	// (0x0004d78e) cell_ituss_key_pane_g2

0x0005,

0xfecf,	// (0x00053f92) cell_ituss_key_pane_g_ParamLimits

0xfecf,	// (0x00053f92) cell_ituss_key_pane_g

0x974f,	// (0x0004d812) cell_ituss_key_t1_ParamLimits

0x974f,	// (0x0004d812) cell_ituss_key_t1

0x9789,	// (0x0004d84c) cell_ituss_key_t2_ParamLimits

0x9789,	// (0x0004d84c) cell_ituss_key_t2

0x97bb,	// (0x0004d87e) cell_ituss_key_t3_ParamLimits

0x97bb,	// (0x0004d87e) cell_ituss_key_t3

0x97ec,	// (0x0004d8af) cell_ituss_key_t4_ParamLimits

0x97ec,	// (0x0004d8af) cell_ituss_key_t4

0x0005,

0xfedc,	// (0x00053f9f) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x00053f9f) cell_ituss_key_t

0xf2ea,	// (0x000533ad) cell_vkbss_key_3p_pane_g1

0xf2f2,	// (0x000533b5) cell_vkbss_key_3p_pane_g2

0xf2fa,	// (0x000533bd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x00053fac) cell_vkbss_key_3p_pane_g

0x16e0,	// (0x000457a3) bg_popup_fep_char_preview_window_cp02

0xf302,	// (0x000533c5) popup_fep_char_pre_window_t1

0xe640,	// (0x00052703) main_ai5_sk_pane

0xed59,	// (0x00052e1c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed65,	// (0x00052e28) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6ff,	// (0x000507c2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7a,	// (0x00052e3d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb3,	// (0x00053f76) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed86,	// (0x00052e49) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0e20,	// (0x00044ee3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf310,	// (0x000533d3) main_ai5_sk_pane_g1

0x9f39,	// (0x0004dffc) popup_query_code_window_g1

0xf175,	// (0x00053238) popup_fep_vkb_icf_pane

0xf1a8,	// (0x0005326b) popup_fep_vtchi_icf_pane

0xf319,	// (0x000533dc) bg_icf_pane

0xf319,	// (0x000533dc) list_vkb_icf_pane

0xf325,	// (0x000533e8) bg_icf_pane_cp01

0xf338,	// (0x000533fb) vtchi_icf_list_pane

0xf398,	// (0x0005345b) list_vkb_icf_pane_t1_ParamLimits

0xf398,	// (0x0005345b) list_vkb_icf_pane_t1

0xf3bd,	// (0x00053480) vtchi_icf_list_pane_t1_ParamLimits

0xf3bd,	// (0x00053480) vtchi_icf_list_pane_t1

0xf15c,	// (0x0005321f) popup_fep_ituss_window_ParamLimits

0xf1a8,	// (0x0005326b) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d4,	// (0x00053297) ituss_keypad_pane_ParamLimits

0x9659,	// (0x0004d71c) ituss_sks_pane

0xf319,	// (0x000533dc) bg_icf_pane_ParamLimits

0xf12c,	// (0x000531ef) icf_edit_indi_pane_ParamLimits

0xf12c,	// (0x000531ef) icf_edit_indi_pane

0xf319,	// (0x000533dc) list_vkb_icf_pane_ParamLimits

0xf325,	// (0x000533e8) bg_icf_pane_cp01_ParamLimits

0xf147,	// (0x0005320a) icf_edit_indi_pane_cp01_ParamLimits

0xf147,	// (0x0005320a) icf_edit_indi_pane_cp01

0xf338,	// (0x000533fb) vtchi_query_pane

0xe4b4,	// (0x00052577) icf_edit_indi_pane_g1_ParamLimits

0xe4b4,	// (0x00052577) icf_edit_indi_pane_g1

0xf438,	// (0x000534fb) icf_edit_indi_pane_g2_ParamLimits

0xf438,	// (0x000534fb) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x00053fd7) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x00053fd7) icf_edit_indi_pane_g

0xf44c,	// (0x0005350f) icf_edit_indi_pane_t1

0xf3e1,	// (0x000534a4) bg_input_focus_pane_cp042

0x0d62,	// (0x00044e25) vtchi_button_pane

0xf3ea,	// (0x000534ad) vtchi_query_pane_t1

0xf3f8,	// (0x000534bb) vtchi_query_pane_t2

0xf406,	// (0x000534c9) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x00053fc6) vtchi_query_pane_t

0x09fa,	// (0x00044abd) bg_button_pane_cp13

0xf414,	// (0x000534d7) vtchi_button_pane_g1

0x986d,	// (0x0004d930) ituss_sks_pane_g1

0x9878,	// (0x0004d93b) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x00053fcd) ituss_sks_pane_g

0xf41c,	// (0x000534df) ituss_sks_pane_t1

0xf42a,	// (0x000534ed) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x00053fd2) ituss_sks_pane_t

0xba93,	// (0x0004fb56) indicator_nsta_pane_cp_g1

0xba9c,	// (0x0004fb5f) indicator_nsta_pane_cp_g2

0xbaa4,	// (0x0004fb67) indicator_nsta_pane_cp_g3

0xbaac,	// (0x0004fb6f) indicator_nsta_pane_cp_g4

0xba9c,	// (0x0004fb5f) indicator_nsta_pane_cp_g5

0xbaa4,	// (0x0004fb67) indicator_nsta_pane_cp_g6

0x0005,

0xfa98,	// (0x00053b5b) indicator_nsta_pane_cp_g

0xe207,	// (0x000522ca) cell_graphic2_pane_t2_ParamLimits

0xe207,	// (0x000522ca) cell_graphic2_pane_t2

0x0001,

0xfd9e,	// (0x00053e61) cell_graphic2_pane_t_ParamLimits

0xfd9e,	// (0x00053e61) cell_graphic2_pane_t

0xe233,	// (0x000522f6) cell_graphic2_control_pane_t1

0x71cb,	// (0x0004b28e) signal_pane_g3_ParamLimits

0x71cb,	// (0x0004b28e) signal_pane_g3

0x71dd,	// (0x0004b2a0) signal_pane_g4_ParamLimits

0x71dd,	// (0x0004b2a0) signal_pane_g4

0xf116,	// (0x000531d9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf116,	// (0x000531d9) cell_ai5_widget_list_row_pane_t3

0xf2d8,	// (0x0005339b) cell_ituss_key_pane_t1_ParamLimits

0xf2d8,	// (0x0005339b) cell_ituss_key_pane_t1

0x9b6c,	// (0x0004dc2f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b6c,	// (0x0004dc2f) form_field_data_wide_pane_vc_t2

0x9b80,	// (0x0004dc43) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b80,	// (0x0004dc43) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x000538a0) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x000538a0) form_field_data_wide_pane_vc_t

0xb73d,	// (0x0004f800) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb73d,	// (0x0004f800) form_field_slider_wide_pane_vc_t3

0xb81b,	// (0x0004f8de) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb81b,	// (0x0004f8de) form_field_popup_wide_pane_vc_t2

0xb832,	// (0x0004f8f5) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb832,	// (0x0004f8f5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa87,	// (0x00053b4a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa87,	// (0x00053b4a) form_field_popup_wide_pane_vc_t

0x9406,	// (0x0004d4c9) aid_fshwr2_btn_pane_ParamLimits

0x941a,	// (0x0004d4dd) aid_fshwr2_syb_pane_ParamLimits

0x942e,	// (0x0004d4f1) aid_fshwr2_txt_pane_ParamLimits

0x0e20,	// (0x00044ee3) fshwr2_bg_pane_ParamLimits

0x943e,	// (0x0004d501) fshwr2_func_candi_pane_ParamLimits

0x9462,	// (0x0004d525) fshwr2_hwr_syb_pane_ParamLimits

0x947c,	// (0x0004d53f) fshwr2_icf_pane_ParamLimits

0x86e9,	// (0x0004c7ac) list_double_graphic_pane_vc_g4_ParamLimits

0x86e9,	// (0x0004c7ac) list_double_graphic_pane_vc_g4

0x96eb,	// (0x0004d7ae) cell_ituss_key_pane_g3_ParamLimits

0x96eb,	// (0x0004d7ae) cell_ituss_key_pane_g3

0x981d,	// (0x0004d8e0) cell_ituss_key_t5_ParamLimits

0x981d,	// (0x0004d8e0) cell_ituss_key_t5

0xf18e,	// (0x00053251) popup_fep_vkbss_window_ParamLimits

0xe64a,	// (0x0005270d) aid_cell_ai5_quarter

0xf44c,	// (0x0005350f) icf_edit_indi_pane_t1_ParamLimits

0x68ec,	// (0x0004a9af) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x68ec,	// (0x0004a9af) aid_tch_indicator_popup_pane_cp2

0x68ff,	// (0x0004a9c2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x68ff,	// (0x0004a9c2) aid_tch_query_popup_data_pane_cp2

0x9ee1,	// (0x0004dfa4) aid_tch_query_popup_pane_ParamLimits

0x9ee1,	// (0x0004dfa4) aid_tch_query_popup_pane

0x9ee1,	// (0x0004dfa4) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9ee1,	// (0x0004dfa4) aid_tch_query_popup_data_pane_cp1

0x0f62,	// (0x00045025) cell_fshwr2_syb_bg_pane_ParamLimits

0x9564,	// (0x0004d627) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9578,	// (0x0004d63b) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf175,	// (0x00053238) popup_fep_vkb_icf_pane_ParamLimits

0x9254,	// (0x0004d317) bg_popup_fep_char_preview_window_g10

0xe781,	// (0x00052844) cell_ai5_widget_pane_g11_ParamLimits

0xe781,	// (0x00052844) cell_ai5_widget_pane_g11

0xe78d,	// (0x00052850) cell_ai5_widget_pane_g12_ParamLimits

0xe78d,	// (0x00052850) cell_ai5_widget_pane_g12

0xe799,	// (0x0005285c) cell_ai5_widget_pane_g13_ParamLimits

0xe799,	// (0x0005285c) cell_ai5_widget_pane_g13

0xe8c8,	// (0x0005298b) cell_ai5_widget_pane_t11_ParamLimits

0xe8c8,	// (0x0005298b) cell_ai5_widget_pane_t11

0xe8da,	// (0x0005299d) cell_ai5_widget_pane_t12_ParamLimits

0xe8da,	// (0x0005299d) cell_ai5_widget_pane_t12

0x96f7,	// (0x0004d7ba) cell_ituss_key_pane_g4_ParamLimits

0x96f7,	// (0x0004d7ba) cell_ituss_key_pane_g4

0x9713,	// (0x0004d7d6) cell_ituss_key_pane_g5_ParamLimits

0x9713,	// (0x0004d7d6) cell_ituss_key_pane_g5

0x972f,	// (0x0004d7f2) cell_ituss_key_pane_g6_ParamLimits

0x972f,	// (0x0004d7f2) cell_ituss_key_pane_g6

0x9a52,	// (0x0004db15) bg_icf_pane_g1

0xf340,	// (0x00053403) bg_icf_pane_g2

0xf34c,	// (0x0005340f) bg_icf_pane_g3

0xf356,	// (0x00053419) bg_icf_pane_g4

0xf362,	// (0x00053425) bg_icf_pane_g5

0xf36c,	// (0x0005342f) bg_icf_pane_g6

0xf378,	// (0x0005343b) bg_icf_pane_g7

0xf382,	// (0x00053445) bg_icf_pane_g8

0xf38e,	// (0x00053451) bg_icf_pane_g9

0x0008,

0xfef0,	// (0x00053fb3) bg_icf_pane_g

0xf1c1,	// (0x00053284) popup_hyb_candi_window_ParamLimits

0xf1c1,	// (0x00053284) popup_hyb_candi_window

0x9ade,	// (0x0004dba1) bg_popup_sub_pane_cp01_ParamLimits

0x9ade,	// (0x0004dba1) bg_popup_sub_pane_cp01

0xf465,	// (0x00053528) entry_hyb_candi_pane_ParamLimits

0xf465,	// (0x00053528) entry_hyb_candi_pane

0xf474,	// (0x00053537) grid_hyb_candi_pane_ParamLimits

0xf474,	// (0x00053537) grid_hyb_candi_pane

0xf489,	// (0x0005354c) grid_hyb_phrase_pane_ParamLimits

0xf489,	// (0x0005354c) grid_hyb_phrase_pane

0xf498,	// (0x0005355b) cell_hyb_candi_pane_ParamLimits

0xf498,	// (0x0005355b) cell_hyb_candi_pane

0xf4bb,	// (0x0005357e) cell_hyb_candi_scroll_pane

0x1272,	// (0x00045335) cell_hyb_candi_pane_g1

0xf4c4,	// (0x00053587) cell_hyb_candi_pane_t1

0xf4d2,	// (0x00053595) cell_hyb_phrase_pane

0x1272,	// (0x00045335) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0005359e) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x000535ac) entry_hyb_candi_pane_t1

0x16e0,	// (0x000457a3) input_focus_pane_cp06

0xf4f7,	// (0x000535ba) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x000535c2) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x000535ca) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x000535d2) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x000535da) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x000535e2) cell_hyb_candi_scroll_pane_g4

0xe575,	// (0x00052638) ai5_page_g1

0x982f,	// (0x0004d8f2) cell_ituss_key_t6_ParamLimits

0x982f,	// (0x0004d8f2) cell_ituss_key_t6

0x9638,	// (0x0004d6fb) icf_edit_indi_pane_cp02_ParamLimits

0x9638,	// (0x0004d6fb) icf_edit_indi_pane_cp02

0x964c,	// (0x0004d70f) icf_edit_indi_pane_cp03_ParamLimits

0x964c,	// (0x0004d70f) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
