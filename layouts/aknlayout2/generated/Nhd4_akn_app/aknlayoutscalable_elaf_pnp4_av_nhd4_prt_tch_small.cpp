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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001794d };

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
0x9f15,	// (0x00021862) Screen

0x9f29,	// (0x00021876) application_window_ParamLimits

0x9f29,	// (0x00021876) application_window

0x9f43,	// (0x00021890) screen_g1

0x7cae,	// (0x0001f5fb) area_bottom_pane_ParamLimits

0x7cae,	// (0x0001f5fb) area_bottom_pane

0x7d6e,	// (0x0001f6bb) area_top_pane_ParamLimits

0x7d6e,	// (0x0001f6bb) area_top_pane

0x7e02,	// (0x0001f74f) main_pane_ParamLimits

0x7e02,	// (0x0001f74f) main_pane

0x9f4d,	// (0x0002189a) misc_graphics

0xb8bc,	// (0x00023209) battery_pane_ParamLimits

0xb8bc,	// (0x00023209) battery_pane

0xc61f,	// (0x00023f6c) bg_status_flat_pane_g8

0xc627,	// (0x00023f74) bg_status_flat_pane_g9

0xb97e,	// (0x000232cb) context_pane_ParamLimits

0xb97e,	// (0x000232cb) context_pane

0xba94,	// (0x000233e1) navi_pane_ParamLimits

0xba94,	// (0x000233e1) navi_pane

0xbb12,	// (0x0002345f) signal_pane_ParamLimits

0xbb12,	// (0x0002345f) signal_pane

0x0008,

0xf86e,	// (0x000271bb) bg_status_flat_pane_g

0xbb7f,	// (0x000234cc) status_pane_g1_ParamLimits

0xbb7f,	// (0x000234cc) status_pane_g1

0xbb93,	// (0x000234e0) status_pane_g2_ParamLimits

0xbb93,	// (0x000234e0) status_pane_g2

0xbb9f,	// (0x000234ec) status_pane_g3_ParamLimits

0xbb9f,	// (0x000234ec) status_pane_g3

0x0004,

0xf7a1,	// (0x000270ee) status_pane_g_ParamLimits

0xf7a1,	// (0x000270ee) status_pane_g

0xbbd1,	// (0x0002351e) title_pane_ParamLimits

0xbbd1,	// (0x0002351e) title_pane

0xbc0e,	// (0x0002355b) uni_indicator_pane_ParamLimits

0xbc0e,	// (0x0002355b) uni_indicator_pane

0xb7e0,	// (0x0002312d) bg_list_pane_ParamLimits

0xb7e0,	// (0x0002312d) bg_list_pane

0x4a22,	// (0x0001c36f) find_pane

0xb800,	// (0x0002314d) listscroll_app_pane_ParamLimits

0xb800,	// (0x0002314d) listscroll_app_pane

0xb80c,	// (0x00023159) listscroll_form_pane

0x86a7,	// (0x0001fff4) listscroll_gen_pane_ParamLimits

0x86a7,	// (0x0001fff4) listscroll_gen_pane

0xb80c,	// (0x00023159) listscroll_set_pane

0xaa6d,	// (0x000223ba) main_idle_act_pane

0xb4ea,	// (0x00022e37) main_idle_trad_pane

0xb4ea,	// (0x00022e37) main_list_empty_pane

0xb826,	// (0x00023173) main_midp_pane

0xb832,	// (0x0002317f) main_pane_g1_ParamLimits

0xb832,	// (0x0002317f) main_pane_g1

0x86bb,	// (0x00020008) popup_ai_message_window_ParamLimits

0x86bb,	// (0x00020008) popup_ai_message_window

0x875d,	// (0x000200aa) popup_fep_china_uni_window_ParamLimits

0x875d,	// (0x000200aa) popup_fep_china_uni_window

0x87b7,	// (0x00020104) popup_fep_japan_candidate_window_ParamLimits

0x87b7,	// (0x00020104) popup_fep_japan_candidate_window

0x87d5,	// (0x00020122) popup_fep_japan_predictive_window_ParamLimits

0x87d5,	// (0x00020122) popup_fep_japan_predictive_window

0x8805,	// (0x00020152) popup_find_window

0x8812,	// (0x0002015f) popup_grid_graphic_window_ParamLimits

0x8812,	// (0x0002015f) popup_grid_graphic_window

0x8838,	// (0x00020185) popup_large_graphic_colour_window

0x885e,	// (0x000201ab) popup_menu_window_ParamLimits

0x885e,	// (0x000201ab) popup_menu_window

0x8a18,	// (0x00020365) popup_note_image_window

0x8a04,	// (0x00020351) popup_note_wait_window_ParamLimits

0x8a04,	// (0x00020351) popup_note_wait_window

0x8a04,	// (0x00020351) popup_note_window_ParamLimits

0x8a04,	// (0x00020351) popup_note_window

0x8a6e,	// (0x000203bb) popup_query_code_window_ParamLimits

0x8a6e,	// (0x000203bb) popup_query_code_window

0x8a82,	// (0x000203cf) popup_query_data_code_window_ParamLimits

0x8a82,	// (0x000203cf) popup_query_data_code_window

0x8a99,	// (0x000203e6) popup_query_data_window_ParamLimits

0x8a99,	// (0x000203e6) popup_query_data_window

0x8ab1,	// (0x000203fe) popup_query_sat_info_window_ParamLimits

0x8ab1,	// (0x000203fe) popup_query_sat_info_window

0x8aea,	// (0x00020437) popup_snote_single_graphic_window_ParamLimits

0x8aea,	// (0x00020437) popup_snote_single_graphic_window

0x8aea,	// (0x00020437) popup_snote_single_text_window_ParamLimits

0x8aea,	// (0x00020437) popup_snote_single_text_window

0x8aff,	// (0x0002044c) popup_sub_window_general

0x8c2d,	// (0x0002057a) popup_window_general_ParamLimits

0x8c2d,	// (0x0002057a) popup_window_general

0xb840,	// (0x0002318d) power_save_pane

0x8549,	// (0x0001fe96) control_pane_g1_ParamLimits

0x8549,	// (0x0001fe96) control_pane_g1

0x8570,	// (0x0001febd) control_pane_g2_ParamLimits

0x8570,	// (0x0001febd) control_pane_g2

0xb7a3,	// (0x000230f0) control_pane_g3_ParamLimits

0xb7a3,	// (0x000230f0) control_pane_g3

0x0007,

0xf789,	// (0x000270d6) control_pane_g_ParamLimits

0xf789,	// (0x000270d6) control_pane_g

0x85b4,	// (0x0001ff01) control_pane_t1_ParamLimits

0x85b4,	// (0x0001ff01) control_pane_t1

0x8600,	// (0x0001ff4d) control_pane_t2_ParamLimits

0x8600,	// (0x0001ff4d) control_pane_t2

0x0002,

0xf79a,	// (0x000270e7) control_pane_t_ParamLimits

0xf79a,	// (0x000270e7) control_pane_t

0xb6c4,	// (0x00023011) navi_navi_volume_pane_cp1

0xb6cd,	// (0x0002301a) status_small_icon_pane

0xb6d5,	// (0x00023022) status_small_pane_g1_ParamLimits

0xb6d5,	// (0x00023022) status_small_pane_g1

0xb709,	// (0x00023056) status_small_pane_g2_ParamLimits

0xb709,	// (0x00023056) status_small_pane_g2

0xb715,	// (0x00023062) status_small_pane_g3_ParamLimits

0xb715,	// (0x00023062) status_small_pane_g3

0xb721,	// (0x0002306e) status_small_pane_g4_ParamLimits

0xb721,	// (0x0002306e) status_small_pane_g4

0xb72d,	// (0x0002307a) status_small_pane_g5_ParamLimits

0xb72d,	// (0x0002307a) status_small_pane_g5

0xb73c,	// (0x00023089) status_small_pane_g6_ParamLimits

0xb73c,	// (0x00023089) status_small_pane_g6

0x0007,

0xf778,	// (0x000270c5) status_small_pane_g_ParamLimits

0xf778,	// (0x000270c5) status_small_pane_g

0xb76c,	// (0x000230b9) status_small_pane_t1

0xb78f,	// (0x000230dc) status_small_wait_pane_ParamLimits

0xb78f,	// (0x000230dc) status_small_wait_pane

0xaf62,	// (0x000228af) aid_levels_signal_ParamLimits

0xaf62,	// (0x000228af) aid_levels_signal

0xaf74,	// (0x000228c1) signal_pane_g1_ParamLimits

0xaf74,	// (0x000228c1) signal_pane_g1

0xaf89,	// (0x000228d6) signal_pane_g2_ParamLimits

0xaf89,	// (0x000228d6) signal_pane_g2

0x0003,

0xf709,	// (0x00027056) signal_pane_g_ParamLimits

0xf709,	// (0x00027056) signal_pane_g

0xafc4,	// (0x00022911) context_pane_g1

0x9f57,	// (0x000218a4) title_pane_g1

0x9f8d,	// (0x000218da) title_pane_t1

0x9ff5,	// (0x00021942) title_pane_t2

0xa01b,	// (0x00021968) title_pane_t3

0x0002,

0xf55d,	// (0x00026eaa) title_pane_t

0xbc26,	// (0x00023573) aid_levels_battery_ParamLimits

0xbc26,	// (0x00023573) aid_levels_battery

0xbc3a,	// (0x00023587) battery_pane_g1_ParamLimits

0xbc3a,	// (0x00023587) battery_pane_g1

0xbc50,	// (0x0002359d) battery_pane_g2_ParamLimits

0xbc50,	// (0x0002359d) battery_pane_g2

0x0001,

0xf7ac,	// (0x000270f9) battery_pane_g_ParamLimits

0xf7ac,	// (0x000270f9) battery_pane_g

0xcf3d,	// (0x0002488a) uni_indicator_pane_g1

0xcf52,	// (0x0002489f) uni_indicator_pane_g2

0xcf68,	// (0x000248b5) uni_indicator_pane_g3

0x0005,

0xf916,	// (0x00027263) uni_indicator_pane_g

0xb35a,	// (0x00022ca7) navi_icon_pane_ParamLimits

0xb35a,	// (0x00022ca7) navi_icon_pane

0xb2a1,	// (0x00022bee) navi_midp_pane

0xb376,	// (0x00022cc3) navi_navi_pane

0xb380,	// (0x00022ccd) navi_text_pane_ParamLimits

0xb380,	// (0x00022ccd) navi_text_pane

0x9f43,	// (0x00021890) status_small_wait_pane_g1

0xa43e,	// (0x00021d8b) status_small_wait_pane_g2

0x0001,

0xf911,	// (0x0002725e) status_small_wait_pane_g

0xcc60,	// (0x000245ad) navi_navi_icon_text_pane

0xcc68,	// (0x000245b5) navi_navi_pane_g1_ParamLimits

0xcc68,	// (0x000245b5) navi_navi_pane_g1

0xcc7a,	// (0x000245c7) navi_navi_pane_g2_ParamLimits

0xcc7a,	// (0x000245c7) navi_navi_pane_g2

0x0001,

0xf8df,	// (0x0002722c) navi_navi_pane_g_ParamLimits

0xf8df,	// (0x0002722c) navi_navi_pane_g

0xcc8c,	// (0x000245d9) navi_navi_tabs_pane

0xcc95,	// (0x000245e2) navi_navi_text_pane

0xcc60,	// (0x000245ad) navi_navi_volume_pane

0xcc3c,	// (0x00024589) navi_text_pane_t1

0xcc30,	// (0x0002457d) navi_icon_pane_g1

0xcb8f,	// (0x000244dc) navi_navi_text_pane_t1

0x8ec9,	// (0x00020816) navi_navi_volume_pane_g1

0x8ed1,	// (0x0002081e) volume_small_pane

0xcaf5,	// (0x00024442) navi_navi_icon_text_pane_g1

0xcafd,	// (0x0002444a) navi_navi_icon_text_pane_t1

0xb376,	// (0x00022cc3) navi_tabs_2_long_pane

0xb376,	// (0x00022cc3) navi_tabs_2_pane

0xb376,	// (0x00022cc3) navi_tabs_3_long_pane

0xb376,	// (0x00022cc3) navi_tabs_3_pane

0xb376,	// (0x00022cc3) navi_tabs_4_pane

0x8ea9,	// (0x000207f6) tabs_2_active_pane_ParamLimits

0x8ea9,	// (0x000207f6) tabs_2_active_pane

0x8eb9,	// (0x00020806) tabs_2_passive_pane_ParamLimits

0x8eb9,	// (0x00020806) tabs_2_passive_pane

0x8e77,	// (0x000207c4) tabs_3_active_pane_ParamLimits

0x8e77,	// (0x000207c4) tabs_3_active_pane

0x8e87,	// (0x000207d4) tabs_3_passive_pane_ParamLimits

0x8e87,	// (0x000207d4) tabs_3_passive_pane

0x8e98,	// (0x000207e5) tabs_3_passive_pane_cp_ParamLimits

0x8e98,	// (0x000207e5) tabs_3_passive_pane_cp

0x8e33,	// (0x00020780) tabs_4_active_pane_ParamLimits

0x8e33,	// (0x00020780) tabs_4_active_pane

0x8e44,	// (0x00020791) tabs_4_passive_pane_ParamLimits

0x8e44,	// (0x00020791) tabs_4_passive_pane

0x8e55,	// (0x000207a2) tabs_4_passive_pane_cp_ParamLimits

0x8e55,	// (0x000207a2) tabs_4_passive_pane_cp

0x8e66,	// (0x000207b3) tabs_4_passive_pane_cp2_ParamLimits

0x8e66,	// (0x000207b3) tabs_4_passive_pane_cp2

0x8e0f,	// (0x0002075c) tabs_2_long_active_pane_ParamLimits

0x8e0f,	// (0x0002075c) tabs_2_long_active_pane

0x8e21,	// (0x0002076e) tabs_2_long_passive_pane_ParamLimits

0x8e21,	// (0x0002076e) tabs_2_long_passive_pane

0x8dca,	// (0x00020717) tabs_3_long_active_pane_ParamLimits

0x8dca,	// (0x00020717) tabs_3_long_active_pane

0x8de3,	// (0x00020730) tabs_3_long_passive_pane_ParamLimits

0x8de3,	// (0x00020730) tabs_3_long_passive_pane

0x8df6,	// (0x00020743) tabs_3_long_passive_pane_cp_ParamLimits

0x8df6,	// (0x00020743) tabs_3_long_passive_pane_cp

0x8d70,	// (0x000206bd) volume_small_pane_g1

0x8d79,	// (0x000206c6) volume_small_pane_g2

0x8d82,	// (0x000206cf) volume_small_pane_g3

0x8d8b,	// (0x000206d8) volume_small_pane_g4

0x8d94,	// (0x000206e1) volume_small_pane_g5

0x8d9d,	// (0x000206ea) volume_small_pane_g6

0x8da6,	// (0x000206f3) volume_small_pane_g7

0x8daf,	// (0x000206fc) volume_small_pane_g8

0x8db8,	// (0x00020705) volume_small_pane_g9

0x8dc1,	// (0x0002070e) volume_small_pane_g10

0x0009,

0xf8ab,	// (0x000271f8) volume_small_pane_g

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp2_ParamLimits

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp2

0xa03b,	// (0x00021988) tabs_3_active_pane_g1

0xa043,	// (0x00021990) tabs_3_active_pane_t1

0xa02d,	// (0x0002197a) bg_passive_tab_pane_cp2_ParamLimits

0xa02d,	// (0x0002197a) bg_passive_tab_pane_cp2

0xa03b,	// (0x00021988) tabs_3_passive_pane_g1

0xa043,	// (0x00021990) tabs_3_passive_pane_t1

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp3_ParamLimits

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp3

0xa055,	// (0x000219a2) tabs_4_active_pane_g1

0xa05d,	// (0x000219aa) tabs_4_active_pane_t1

0xa02d,	// (0x0002197a) bg_passive_tab_pane_cp3_ParamLimits

0xa02d,	// (0x0002197a) bg_passive_tab_pane_cp3

0xa055,	// (0x000219a2) tabs_4_1_passive_pane_g1

0xa05d,	// (0x000219aa) tabs_4_1_passive_pane_t1

0xb826,	// (0x00023173) list_highlight_pane_cp2

0xd1c1,	// (0x00024b0e) list_set_pane_ParamLimits

0xd1c1,	// (0x00024b0e) list_set_pane

0xd263,	// (0x00024bb0) main_pane_set_t1_ParamLimits

0xd263,	// (0x00024bb0) main_pane_set_t1

0xd283,	// (0x00024bd0) main_pane_set_t2_ParamLimits

0xd283,	// (0x00024bd0) main_pane_set_t2

0xd297,	// (0x00024be4) main_pane_set_t3_ParamLimits

0xd297,	// (0x00024be4) main_pane_set_t3

0xd2a9,	// (0x00024bf6) main_pane_set_t4_ParamLimits

0xd2a9,	// (0x00024bf6) main_pane_set_t4

0x0003,

0xf97b,	// (0x000272c8) main_pane_set_t_ParamLimits

0xf97b,	// (0x000272c8) main_pane_set_t

0xd2bb,	// (0x00024c08) setting_code_pane

0xd2c5,	// (0x00024c12) setting_slider_graphic_pane

0xd2c5,	// (0x00024c12) setting_slider_pane

0xd2c5,	// (0x00024c12) setting_text_pane

0xd2c5,	// (0x00024c12) setting_volume_pane

0x8033,	// (0x0001f980) volume_set_pane

0xa02d,	// (0x0002197a) bg_set_opt_pane_cp

0x803b,	// (0x0001f988) setting_slider_pane_t1

0x8054,	// (0x0001f9a1) setting_slider_pane_t2

0x806d,	// (0x0001f9ba) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00026eb1) setting_slider_pane_t

0x8084,	// (0x0001f9d1) slider_set_pane

0x9f4d,	// (0x0002189a) bg_set_opt_pane_cp2

0xa06f,	// (0x000219bc) setting_slider_graphic_pane_g1

0x809a,	// (0x0001f9e7) setting_slider_graphic_pane_t1

0x80a9,	// (0x0001f9f6) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00026eb8) setting_slider_graphic_pane_t

0x80b8,	// (0x0001fa05) slider_set_pane_cp

0x9f4d,	// (0x0002189a) input_focus_pane_cp1

0xd180,	// (0x00024acd) list_set_text_pane

0x9f43,	// (0x00021890) setting_text_pane_g1

0x9f4d,	// (0x0002189a) input_focus_pane_cp2

0x9f43,	// (0x00021890) setting_code_pane_g1

0xa078,	// (0x000219c5) setting_code_pane_t1

0x6d06,	// (0x0001e653) set_text_pane_t1_ParamLimits

0x6d06,	// (0x0001e653) set_text_pane_t1

0xa8e7,	// (0x00022234) set_opt_bg_pane_g1

0xa8ef,	// (0x0002223c) set_opt_bg_pane_g2

0xd160,	// (0x00024aad) set_opt_bg_pane_g3

0xa8ff,	// (0x0002224c) set_opt_bg_pane_g4

0xa907,	// (0x00022254) set_opt_bg_pane_g5

0xa90f,	// (0x0002225c) set_opt_bg_pane_g6

0xd168,	// (0x00024ab5) set_opt_bg_pane_g7

0xd170,	// (0x00024abd) set_opt_bg_pane_g8

0xd178,	// (0x00024ac5) set_opt_bg_pane_g9

0x0008,

0xf968,	// (0x000272b5) set_opt_bg_pane_g

0xd153,	// (0x00024aa0) slider_set_pane_g1

0x8f3e,	// (0x0002088b) slider_set_pane_g2

0x0006,

0xf959,	// (0x000272a6) slider_set_pane_g

0x8eda,	// (0x00020827) volume_set_pane_g1

0x8ee2,	// (0x0002082f) volume_set_pane_g2

0x8eea,	// (0x00020837) volume_set_pane_g3

0x8ef2,	// (0x0002083f) volume_set_pane_g4

0x8efa,	// (0x00020847) volume_set_pane_g5

0x8f02,	// (0x0002084f) volume_set_pane_g6

0x8f0a,	// (0x00020857) volume_set_pane_g7

0x8f12,	// (0x0002085f) volume_set_pane_g8

0x8f1a,	// (0x00020867) volume_set_pane_g9

0x8f22,	// (0x0002086f) volume_set_pane_g10

0x0009,

0xf931,	// (0x0002727e) volume_set_pane_g

0xa086,	// (0x000219d3) indicator_pane_ParamLimits

0xa086,	// (0x000219d3) indicator_pane

0xa092,	// (0x000219df) main_idle_pane_g2_ParamLimits

0xa092,	// (0x000219df) main_idle_pane_g2

0xa0ba,	// (0x00021a07) main_pane_idle_g1_ParamLimits

0xa0ba,	// (0x00021a07) main_pane_idle_g1

0xa0c7,	// (0x00021a14) popup_clock_digital_analogue_window_ParamLimits

0xa0c7,	// (0x00021a14) popup_clock_digital_analogue_window

0xa0de,	// (0x00021a2b) soft_indicator_pane_ParamLimits

0xa0de,	// (0x00021a2b) soft_indicator_pane

0xa0ea,	// (0x00021a37) wallpaper_pane_ParamLimits

0xa0ea,	// (0x00021a37) wallpaper_pane

0x9f43,	// (0x00021890) wallpaper_pane_g1

0xa0fe,	// (0x00021a4b) indicator_pane_g1_ParamLimits

0xa0fe,	// (0x00021a4b) indicator_pane_g1

0xd54b,	// (0x00024e98) navi_navi_icon_text_pane_srt_g1

0xa119,	// (0x00021a66) soft_indicator_pane_t1

0xa133,	// (0x00021a80) aid_ps_area_pane

0xa144,	// (0x00021a91) aid_ps_clock_pane

0xa152,	// (0x00021a9f) aid_ps_indicator_pane

0xa15e,	// (0x00021aab) indicator_ps_pane_ParamLimits

0xa15e,	// (0x00021aab) indicator_ps_pane

0xa16d,	// (0x00021aba) power_save_pane_g1_ParamLimits

0xa16d,	// (0x00021aba) power_save_pane_g1

0xa179,	// (0x00021ac6) power_save_pane_g2_ParamLimits

0xa179,	// (0x00021ac6) power_save_pane_g2

0x7c62,	// (0x0001f5af) aid_navinavi_width_pane

0xa133,	// (0x00021a80) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00026ebd) power_save_pane_g_ParamLimits

0xf570,	// (0x00026ebd) power_save_pane_g

0xa187,	// (0x00021ad4) power_save_pane_t1_ParamLimits

0xa187,	// (0x00021ad4) power_save_pane_t1

0xa144,	// (0x00021a91) aid_ps_clock_pane_ParamLimits

0xa152,	// (0x00021a9f) aid_ps_indicator_pane_ParamLimits

0xa199,	// (0x00021ae6) power_save_pane_t4_ParamLimits

0xa199,	// (0x00021ae6) power_save_pane_t4

0x0001,

0xf575,	// (0x00026ec2) power_save_pane_t_ParamLimits

0xf575,	// (0x00026ec2) power_save_pane_t

0xa1c3,	// (0x00021b10) power_save_t3_ParamLimits

0xa1c3,	// (0x00021b10) power_save_t3

0xa1ae,	// (0x00021afb) power_save_t2_ParamLimits

0xa1ae,	// (0x00021afb) power_save_t2

0xa1d8,	// (0x00021b25) indicator_ps_pane_g1

0xa1e1,	// (0x00021b2e) ai_gene_pane_ParamLimits

0xa1e1,	// (0x00021b2e) ai_gene_pane

0xa1ed,	// (0x00021b3a) ai_links_pane_ParamLimits

0xa1ed,	// (0x00021b3a) ai_links_pane

0xa1f9,	// (0x00021b46) indicator_pane_cp1_ParamLimits

0xa1f9,	// (0x00021b46) indicator_pane_cp1

0xa205,	// (0x00021b52) main_pane_idle_g1_cp_ParamLimits

0xa205,	// (0x00021b52) main_pane_idle_g1_cp

0xa211,	// (0x00021b5e) popup_ai_links_title_window

0xa21a,	// (0x00021b67) soft_indicator_pane_cp1_ParamLimits

0xa21a,	// (0x00021b67) soft_indicator_pane_cp1

0xcf2b,	// (0x00024878) ai_links_pane_g1

0xcf34,	// (0x00024881) grid_ai_links_pane

0xcf0e,	// (0x0002485b) ai_gene_pane_1

0xcf19,	// (0x00024866) ai_gene_pane_2

0xcf22,	// (0x0002486f) list_highlight_pane_cp4

0xcef2,	// (0x0002483f) cell_ai_link_pane_ParamLimits

0xcef2,	// (0x0002483f) cell_ai_link_pane

0xceea,	// (0x00024837) cell_ai_link_pane_g1

0xa43e,	// (0x00021d8b) cell_ai_link_pane_g2

0x0001,

0xf90c,	// (0x00027259) cell_ai_link_pane_g

0x9f4d,	// (0x0002189a) grid_highlight_cp2

0x9f4d,	// (0x0002189a) bg_popup_sub_pane_cp1

0xa234,	// (0x00021b81) popup_ai_links_title_window_t1

0xce38,	// (0x00024785) ai_gene_pane_1_g1_ParamLimits

0xce38,	// (0x00024785) ai_gene_pane_1_g1

0xce44,	// (0x00024791) ai_gene_pane_1_g2_ParamLimits

0xce44,	// (0x00024791) ai_gene_pane_1_g2

0x0001,

0xf902,	// (0x0002724f) ai_gene_pane_1_g_ParamLimits

0xf902,	// (0x0002724f) ai_gene_pane_1_g

0xce51,	// (0x0002479e) ai_gene_pane_1_t1_ParamLimits

0xce51,	// (0x0002479e) ai_gene_pane_1_t1

0xce85,	// (0x000247d2) grid_ai_soft_ind_pane

0xce23,	// (0x00024770) ai_gene_pane_2_t1_ParamLimits

0xce23,	// (0x00024770) ai_gene_pane_2_t1

0xa243,	// (0x00021b90) main_pane_empty_t1_ParamLimits

0xa243,	// (0x00021b90) main_pane_empty_t1

0xa25b,	// (0x00021ba8) main_pane_empty_t2_ParamLimits

0xa25b,	// (0x00021ba8) main_pane_empty_t2

0xa270,	// (0x00021bbd) main_pane_empty_t3_ParamLimits

0xa270,	// (0x00021bbd) main_pane_empty_t3

0xa282,	// (0x00021bcf) main_pane_empty_t4_ParamLimits

0xa282,	// (0x00021bcf) main_pane_empty_t4

0xa294,	// (0x00021be1) main_pane_empty_t5_ParamLimits

0xa294,	// (0x00021be1) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00026ec7) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00026ec7) main_pane_empty_t

0xa938,	// (0x00022285) bg_popup_window_pane_ParamLimits

0xa938,	// (0x00022285) bg_popup_window_pane

0xcb9d,	// (0x000244ea) find_popup_pane_cp2_ParamLimits

0xcb9d,	// (0x000244ea) find_popup_pane_cp2

0xcba9,	// (0x000244f6) heading_pane_ParamLimits

0xcba9,	// (0x000244f6) heading_pane

0x9f4d,	// (0x0002189a) bg_popup_sub_pane

0xcb17,	// (0x00024464) bg_popup_window_pane_g1_ParamLimits

0xcb17,	// (0x00024464) bg_popup_window_pane_g1

0xcb23,	// (0x00024470) bg_popup_window_pane_g2_ParamLimits

0xcb23,	// (0x00024470) bg_popup_window_pane_g2

0xcb2f,	// (0x0002447c) bg_popup_window_pane_g3_ParamLimits

0xcb2f,	// (0x0002447c) bg_popup_window_pane_g3

0xcb3b,	// (0x00024488) bg_popup_window_pane_g4_ParamLimits

0xcb3b,	// (0x00024488) bg_popup_window_pane_g4

0xcb47,	// (0x00024494) bg_popup_window_pane_g5_ParamLimits

0xcb47,	// (0x00024494) bg_popup_window_pane_g5

0xcb53,	// (0x000244a0) bg_popup_window_pane_g6_ParamLimits

0xcb53,	// (0x000244a0) bg_popup_window_pane_g6

0xcb5f,	// (0x000244ac) bg_popup_window_pane_g7_ParamLimits

0xcb5f,	// (0x000244ac) bg_popup_window_pane_g7

0xcb6b,	// (0x000244b8) bg_popup_window_pane_g8_ParamLimits

0xcb6b,	// (0x000244b8) bg_popup_window_pane_g8

0xcb77,	// (0x000244c4) bg_popup_window_pane_g9_ParamLimits

0xcb77,	// (0x000244c4) bg_popup_window_pane_g9

0xcb83,	// (0x000244d0) bg_popup_window_pane_g10_ParamLimits

0xcb83,	// (0x000244d0) bg_popup_window_pane_g10

0x0009,

0xf8ca,	// (0x00027217) bg_popup_window_pane_g_ParamLimits

0xf8ca,	// (0x00027217) bg_popup_window_pane_g

0xcaac,	// (0x000243f9) bg_popup_heading_pane_ParamLimits

0xcaac,	// (0x000243f9) bg_popup_heading_pane

0x8f84,	// (0x000208d1) tabs_4_passive_pane_cp_srt_ParamLimits

0x8f84,	// (0x000208d1) tabs_4_passive_pane_cp_srt

0x8f96,	// (0x000208e3) tabs_4_passive_pane_srt_ParamLimits

0xcac0,	// (0x0002440d) heading_pane_g2

0x8f96,	// (0x000208e3) tabs_4_passive_pane_srt

0xb826,	// (0x00023173) bg_passive_tab_pane_cp3_srt_ParamLimits

0xb826,	// (0x00023173) bg_passive_tab_pane_cp3_srt

0xcac8,	// (0x00024415) heading_pane_t1_ParamLimits

0xcac8,	// (0x00024415) heading_pane_t1

0xcadf,	// (0x0002442c) heading_pane_t2_ParamLimits

0xcadf,	// (0x0002442c) heading_pane_t2

0x0001,

0xf8c5,	// (0x00027212) heading_pane_t_ParamLimits

0xf8c5,	// (0x00027212) heading_pane_t

0xc5e7,	// (0x00023f34) bg_popup_heading_pane_g1

0xc696,	// (0x00023fe3) bg_popup_heading_pane_g2

0xc6a0,	// (0x00023fed) bg_popup_heading_pane_g3

0xc6aa,	// (0x00023ff7) bg_popup_heading_pane_g4

0xc6b4,	// (0x00024001) bg_popup_heading_pane_g5

0xc6be,	// (0x0002400b) bg_popup_heading_pane_g6

0xc6c6,	// (0x00024013) bg_popup_heading_pane_g7

0xc6ce,	// (0x0002401b) bg_popup_heading_pane_g8

0xc6d8,	// (0x00024025) bg_popup_heading_pane_g9

0x0008,

0xf881,	// (0x000271ce) bg_popup_heading_pane_g

0xbd28,	// (0x00023675) bg_popup_sub_pane_g1

0xbd30,	// (0x0002367d) bg_popup_sub_pane_g2

0xbd38,	// (0x00023685) bg_popup_sub_pane_g3

0xbd40,	// (0x0002368d) bg_popup_sub_pane_g4

0xbd48,	// (0x00023695) bg_popup_sub_pane_g5

0xbd50,	// (0x0002369d) bg_popup_sub_pane_g6

0xbd58,	// (0x000236a5) bg_popup_sub_pane_g7

0xbd60,	// (0x000236ad) bg_popup_sub_pane_g8

0xbd68,	// (0x000236b5) bg_popup_sub_pane_g9

0x0008,

0xf85b,	// (0x000271a8) bg_popup_sub_pane_g

0xa2a8,	// (0x00021bf5) bg_popup_window_pane_cp5_ParamLimits

0xa2a8,	// (0x00021bf5) bg_popup_window_pane_cp5

0xa2c4,	// (0x00021c11) popup_note_window_g1_ParamLimits

0xa2c4,	// (0x00021c11) popup_note_window_g1

0xa2d0,	// (0x00021c1d) popup_note_window_t1_ParamLimits

0xa2d0,	// (0x00021c1d) popup_note_window_t1

0xa2e2,	// (0x00021c2f) popup_note_window_t2_ParamLimits

0xa2e2,	// (0x00021c2f) popup_note_window_t2

0xa2f4,	// (0x00021c41) popup_note_window_t3_ParamLimits

0xa2f4,	// (0x00021c41) popup_note_window_t3

0xa306,	// (0x00021c53) popup_note_window_t4_ParamLimits

0xa306,	// (0x00021c53) popup_note_window_t4

0xa32e,	// (0x00021c7b) popup_note_window_t5_ParamLimits

0xa32e,	// (0x00021c7b) popup_note_window_t5

0x0004,

0xf585,	// (0x00026ed2) popup_note_window_t_ParamLimits

0xf585,	// (0x00026ed2) popup_note_window_t

0xa352,	// (0x00021c9f) bg_popup_window_pane_cp6_ParamLimits

0xa352,	// (0x00021c9f) bg_popup_window_pane_cp6

0xc55b,	// (0x00023ea8) popup_note_image_window_g1_ParamLimits

0xc55b,	// (0x00023ea8) popup_note_image_window_g1

0xc567,	// (0x00023eb4) popup_note_image_window_g2_ParamLimits

0xc567,	// (0x00023eb4) popup_note_image_window_g2

0x0001,

0xf84f,	// (0x0002719c) popup_note_image_window_g_ParamLimits

0xf84f,	// (0x0002719c) popup_note_image_window_g

0xc580,	// (0x00023ecd) popup_note_image_window_t1_ParamLimits

0xc580,	// (0x00023ecd) popup_note_image_window_t1

0xc599,	// (0x00023ee6) popup_note_image_window_t2_ParamLimits

0xc599,	// (0x00023ee6) popup_note_image_window_t2

0xc5b2,	// (0x00023eff) popup_note_image_window_t3_ParamLimits

0xc5b2,	// (0x00023eff) popup_note_image_window_t3

0x0002,

0xf854,	// (0x000271a1) popup_note_image_window_t_ParamLimits

0xf854,	// (0x000271a1) popup_note_image_window_t

0xc41c,	// (0x00023d69) bg_popup_window_pane_cp7_ParamLimits

0xc41c,	// (0x00023d69) bg_popup_window_pane_cp7

0xc44c,	// (0x00023d99) popup_note_wait_window_g1_ParamLimits

0xc44c,	// (0x00023d99) popup_note_wait_window_g1

0xc458,	// (0x00023da5) popup_note_wait_window_g2_ParamLimits

0xc458,	// (0x00023da5) popup_note_wait_window_g2

0x0002,

0xf83d,	// (0x0002718a) popup_note_wait_window_g_ParamLimits

0xf83d,	// (0x0002718a) popup_note_wait_window_g

0xc470,	// (0x00023dbd) popup_note_wait_window_t1_ParamLimits

0xc470,	// (0x00023dbd) popup_note_wait_window_t1

0xc497,	// (0x00023de4) popup_note_wait_window_t2_ParamLimits

0xc497,	// (0x00023de4) popup_note_wait_window_t2

0xc4b4,	// (0x00023e01) popup_note_wait_window_t3_ParamLimits

0xc4b4,	// (0x00023e01) popup_note_wait_window_t3

0xc4c7,	// (0x00023e14) popup_note_wait_window_t4_ParamLimits

0xc4c7,	// (0x00023e14) popup_note_wait_window_t4

0x0004,

0xf844,	// (0x00027191) popup_note_wait_window_t_ParamLimits

0xf844,	// (0x00027191) popup_note_wait_window_t

0xc4ec,	// (0x00023e39) wait_bar_pane_ParamLimits

0xc4ec,	// (0x00023e39) wait_bar_pane

0x9f4d,	// (0x0002189a) wait_anim_pane

0x9f4d,	// (0x0002189a) wait_border_pane

0x9f43,	// (0x00021890) wait_anim_pane_g1

0x9f43,	// (0x00021890) wait_anim_pane_g2

0x0001,

0xf704,	// (0x00027051) wait_anim_pane_g

0xc3c0,	// (0x00023d0d) wait_border_pane_g1

0xc3cb,	// (0x00023d18) wait_border_pane_g2

0xc3d4,	// (0x00023d21) wait_border_pane_g3

0x0002,

0xf836,	// (0x00027183) wait_border_pane_g

0xc230,	// (0x00023b7d) bg_popup_window_pane_cp16_ParamLimits

0xc230,	// (0x00023b7d) bg_popup_window_pane_cp16

0xc330,	// (0x00023c7d) indicator_popup_pane_cp4_ParamLimits

0xc330,	// (0x00023c7d) indicator_popup_pane_cp4

0xc344,	// (0x00023c91) popup_query_data_window_t1_ParamLimits

0xc344,	// (0x00023c91) popup_query_data_window_t1

0xc356,	// (0x00023ca3) popup_query_data_window_t2_ParamLimits

0xc356,	// (0x00023ca3) popup_query_data_window_t2

0xc36f,	// (0x00023cbc) popup_query_data_window_t3_ParamLimits

0xc36f,	// (0x00023cbc) popup_query_data_window_t3

0x0002,

0xf82f,	// (0x0002717c) popup_query_data_window_t_ParamLimits

0xf82f,	// (0x0002717c) popup_query_data_window_t

0xc389,	// (0x00023cd6) query_popup_data_pane_ParamLimits

0xc389,	// (0x00023cd6) query_popup_data_pane

0xc39d,	// (0x00023cea) query_popup_data_pane_cp1_ParamLimits

0xc39d,	// (0x00023cea) query_popup_data_pane_cp1

0xc230,	// (0x00023b7d) bg_popup_window_pane_cp10_ParamLimits

0xc230,	// (0x00023b7d) bg_popup_window_pane_cp10

0xc262,	// (0x00023baf) indicator_popup_pane_ParamLimits

0xc262,	// (0x00023baf) indicator_popup_pane

0xc284,	// (0x00023bd1) popup_query_code_window_t1_ParamLimits

0xc284,	// (0x00023bd1) popup_query_code_window_t1

0xc29e,	// (0x00023beb) popup_query_code_window_t2_ParamLimits

0xc29e,	// (0x00023beb) popup_query_code_window_t2

0xc2e7,	// (0x00023c34) popup_query_code_window_t3_ParamLimits

0xc2e7,	// (0x00023c34) popup_query_code_window_t3

0x0002,

0xf828,	// (0x00027175) popup_query_code_window_t_ParamLimits

0xf828,	// (0x00027175) popup_query_code_window_t

0xc316,	// (0x00023c63) query_popup_pane_ParamLimits

0xc316,	// (0x00023c63) query_popup_pane

0xa352,	// (0x00021c9f) bg_popup_window_pane_cp15_ParamLimits

0xa352,	// (0x00021c9f) bg_popup_window_pane_cp15

0xa370,	// (0x00021cbd) indicator_popup_pane_cp1_ParamLimits

0xa370,	// (0x00021cbd) indicator_popup_pane_cp1

0xa383,	// (0x00021cd0) indicator_popup_pane_cp2_ParamLimits

0xa383,	// (0x00021cd0) indicator_popup_pane_cp2

0xa396,	// (0x00021ce3) popup_query_data_code_window_g1_ParamLimits

0xa396,	// (0x00021ce3) popup_query_data_code_window_g1

0xa3a9,	// (0x00021cf6) popup_query_data_code_window_t1_ParamLimits

0xa3a9,	// (0x00021cf6) popup_query_data_code_window_t1

0xa3bb,	// (0x00021d08) popup_query_data_code_window_t2_ParamLimits

0xa3bb,	// (0x00021d08) popup_query_data_code_window_t2

0xa3cd,	// (0x00021d1a) popup_query_data_code_window_t3_ParamLimits

0xa3cd,	// (0x00021d1a) popup_query_data_code_window_t3

0xa3e3,	// (0x00021d30) popup_query_data_code_window_t4_ParamLimits

0xa3e3,	// (0x00021d30) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00026edd) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00026edd) popup_query_data_code_window_t

0xb316,	// (0x00022c63) list_single_midp_graphic_pane_g3

0xa3fb,	// (0x00021d48) query_popup_data_pane_cp2_ParamLimits

0xa40e,	// (0x00021d5b) query_popup_pane_cp2_ParamLimits

0xa40e,	// (0x00021d5b) query_popup_pane_cp2

0x9f4d,	// (0x0002189a) bg_popup_window_pane_cp11

0xc228,	// (0x00023b75) heading_pane_cp5

0xa4f6,	// (0x00021e43) listscroll_popup_info_pane

0x9f4d,	// (0x0002189a) input_focus_pane_cp3

0xa421,	// (0x00021d6e) query_popup_pane_t1

0xa42f,	// (0x00021d7c) list_popup_info_pane_ParamLimits

0xa42f,	// (0x00021d7c) list_popup_info_pane

0xa43e,	// (0x00021d8b) listscroll_popup_info_pane_g1

0xa446,	// (0x00021d93) scroll_pane_cp7

0xa450,	// (0x00021d9d) popup_info_list_pane_t1_ParamLimits

0xa450,	// (0x00021d9d) popup_info_list_pane_t1

0xa46a,	// (0x00021db7) popup_info_list_pane_t2_ParamLimits

0xa46a,	// (0x00021db7) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00026ee6) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00026ee6) popup_info_list_pane_t

0x9f4d,	// (0x0002189a) bg_popup_window_pane_cp12

0xd565,	// (0x00024eb2) find_popup_pane

0xa02d,	// (0x0002197a) bg_popup_window_pane_cp3

0xa484,	// (0x00021dd1) heading_pane_cp3

0xa490,	// (0x00021ddd) listscroll_popup_graphic_pane

0x9f4d,	// (0x0002189a) bg_popup_window_pane_cp4

0xa4ec,	// (0x00021e39) heading_pane_cp4

0xa4f6,	// (0x00021e43) listscroll_popup_colour_pane

0xa4fe,	// (0x00021e4b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa4fe,	// (0x00021e4b) cell_large_graphic_colour_none_popup_pane

0xa512,	// (0x00021e5f) grid_large_graphic_colour_popup_pane_ParamLimits

0xa512,	// (0x00021e5f) grid_large_graphic_colour_popup_pane

0xa536,	// (0x00021e83) listscroll_popup_colour_pane_g1_ParamLimits

0xa536,	// (0x00021e83) listscroll_popup_colour_pane_g1

0xa54d,	// (0x00021e9a) listscroll_popup_colour_pane_g2_ParamLimits

0xa54d,	// (0x00021e9a) listscroll_popup_colour_pane_g2

0xa564,	// (0x00021eb1) listscroll_popup_colour_pane_g3_ParamLimits

0xa564,	// (0x00021eb1) listscroll_popup_colour_pane_g3

0xa574,	// (0x00021ec1) listscroll_popup_colour_pane_g4_ParamLimits

0xa574,	// (0x00021ec1) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00026eeb) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00026eeb) listscroll_popup_colour_pane_g

0xa583,	// (0x00021ed0) scroll_pane_cp6_ParamLimits

0xa583,	// (0x00021ed0) scroll_pane_cp6

0xa595,	// (0x00021ee2) cell_large_graphic_colour_popup_pane_ParamLimits

0xa595,	// (0x00021ee2) cell_large_graphic_colour_popup_pane

0xa5b4,	// (0x00021f01) cell_large_graphic_colour_none_popup_pane_t1

0x9f4d,	// (0x0002189a) grid_highlight_pane_cp5

0xa5c3,	// (0x00021f10) cell_large_graphic_colour_popup_pane_g1

0xa5cb,	// (0x00021f18) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00026ef4) cell_large_graphic_colour_popup_pane_g

0xa5d3,	// (0x00021f20) cell_large_graphic_colour_popup_pane_g2_copy1

0xa5dc,	// (0x00021f29) grid_highlight_pane_cp4

0xa5e4,	// (0x00021f31) bg_popup_window_pane_cp8_ParamLimits

0xa5e4,	// (0x00021f31) bg_popup_window_pane_cp8

0xa5ff,	// (0x00021f4c) popup_snote_single_text_window_g1_ParamLimits

0xa5ff,	// (0x00021f4c) popup_snote_single_text_window_g1

0xa611,	// (0x00021f5e) popup_snote_single_text_window_t1_ParamLimits

0xa611,	// (0x00021f5e) popup_snote_single_text_window_t1

0xa624,	// (0x00021f71) popup_snote_single_text_window_t2_ParamLimits

0xa624,	// (0x00021f71) popup_snote_single_text_window_t2

0xa637,	// (0x00021f84) popup_snote_single_text_window_t3_ParamLimits

0xa637,	// (0x00021f84) popup_snote_single_text_window_t3

0xa670,	// (0x00021fbd) popup_snote_single_text_window_t4_ParamLimits

0xa670,	// (0x00021fbd) popup_snote_single_text_window_t4

0xa6a4,	// (0x00021ff1) popup_snote_single_text_window_t5_ParamLimits

0xa6a4,	// (0x00021ff1) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00026ef9) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00026ef9) popup_snote_single_text_window_t

0xa6d3,	// (0x00022020) bg_popup_window_pane_cp9_ParamLimits

0xa6d3,	// (0x00022020) bg_popup_window_pane_cp9

0xa5ff,	// (0x00021f4c) popup_snote_single_graphic_window_g1_ParamLimits

0xa5ff,	// (0x00021f4c) popup_snote_single_graphic_window_g1

0xa6e1,	// (0x0002202e) popup_snote_single_graphic_window_g2_ParamLimits

0xa6e1,	// (0x0002202e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00026f04) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00026f04) popup_snote_single_graphic_window_g

0xa6ed,	// (0x0002203a) popup_snote_single_graphic_window_t1_ParamLimits

0xa6ed,	// (0x0002203a) popup_snote_single_graphic_window_t1

0xa700,	// (0x0002204d) popup_snote_single_graphic_window_t2_ParamLimits

0xa700,	// (0x0002204d) popup_snote_single_graphic_window_t2

0xa713,	// (0x00022060) popup_snote_single_graphic_window_t3_ParamLimits

0xa713,	// (0x00022060) popup_snote_single_graphic_window_t3

0xa74c,	// (0x00022099) popup_snote_single_graphic_window_t4_ParamLimits

0xa74c,	// (0x00022099) popup_snote_single_graphic_window_t4

0xa780,	// (0x000220cd) popup_snote_single_graphic_window_t5_ParamLimits

0xa780,	// (0x000220cd) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00026f09) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00026f09) popup_snote_single_graphic_window_t

0xd4a5,	// (0x00024df2) grid_graphic_popup_pane_ParamLimits

0xd4a5,	// (0x00024df2) grid_graphic_popup_pane

0xd4d1,	// (0x00024e1e) listscroll_popup_graphic_pane_g1_ParamLimits

0xd4d1,	// (0x00024e1e) listscroll_popup_graphic_pane_g1

0xd4e5,	// (0x00024e32) listscroll_popup_graphic_pane_g2_ParamLimits

0xd4e5,	// (0x00024e32) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a5,	// (0x000272f2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a5,	// (0x000272f2) listscroll_popup_graphic_pane_g

0xd4f9,	// (0x00024e46) scroll_pane_cp5

0xd450,	// (0x00024d9d) cell_graphic_popup_pane_ParamLimits

0xd450,	// (0x00024d9d) cell_graphic_popup_pane

0xd431,	// (0x00024d7e) cell_graphic_popup_pane_g1

0xd439,	// (0x00024d86) cell_graphic_popup_pane_g2

0xa5d3,	// (0x00021f20) cell_graphic_popup_pane_g3

0x0002,

0xf99e,	// (0x000272eb) cell_graphic_popup_pane_g

0xd442,	// (0x00024d8f) cell_graphic_popup_pane_t2

0xa5dc,	// (0x00021f29) grid_highlight_pane_cp3

0xa7c1,	// (0x0002210e) list_gen_pane_ParamLimits

0xa7c1,	// (0x0002210e) list_gen_pane

0xa7f3,	// (0x00022140) scroll_pane

0xd393,	// (0x00024ce0) bg_list_pane_g1_ParamLimits

0xd393,	// (0x00024ce0) bg_list_pane_g1

0xd3ae,	// (0x00024cfb) bg_list_pane_g2_ParamLimits

0xd3ae,	// (0x00024cfb) bg_list_pane_g2

0xd3c1,	// (0x00024d0e) bg_list_pane_g3_ParamLimits

0xd3c1,	// (0x00024d0e) bg_list_pane_g3

0xd3d3,	// (0x00024d20) bg_list_pane_g4_ParamLimits

0xd3d3,	// (0x00024d20) bg_list_pane_g4

0xd3e5,	// (0x00024d32) bg_list_pane_g5_ParamLimits

0xd3e5,	// (0x00024d32) bg_list_pane_g5

0x0004,

0xf993,	// (0x000272e0) bg_list_pane_g_ParamLimits

0xf993,	// (0x000272e0) bg_list_pane_g

0x7583,	// (0x0001eed0) list_double2_graphic_large_graphic_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double2_graphic_large_graphic_pane

0x7583,	// (0x0001eed0) list_double2_graphic_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double2_graphic_pane

0x7583,	// (0x0001eed0) list_double2_large_graphic_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double2_large_graphic_pane

0x7583,	// (0x0001eed0) list_double2_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double2_pane

0x7583,	// (0x0001eed0) list_double_graphic_heading_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double_graphic_heading_pane

0x7583,	// (0x0001eed0) list_double_graphic_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double_graphic_pane

0x7583,	// (0x0001eed0) list_double_heading_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double_heading_pane

0x7583,	// (0x0001eed0) list_double_large_graphic_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double_large_graphic_pane

0x7583,	// (0x0001eed0) list_double_number_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double_number_pane

0x7583,	// (0x0001eed0) list_double_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double_pane

0x7583,	// (0x0001eed0) list_double_time_pane_ParamLimits

0x7583,	// (0x0001eed0) list_double_time_pane

0x7583,	// (0x0001eed0) list_setting_number_pane_ParamLimits

0x7583,	// (0x0001eed0) list_setting_number_pane

0x7583,	// (0x0001eed0) list_setting_pane_ParamLimits

0x7583,	// (0x0001eed0) list_setting_pane

0x75cb,	// (0x0001ef18) list_single_2graphic_pane_ParamLimits

0x75cb,	// (0x0001ef18) list_single_2graphic_pane

0x75cb,	// (0x0001ef18) list_single_graphic_heading_pane_ParamLimits

0x75cb,	// (0x0001ef18) list_single_graphic_heading_pane

0x75cb,	// (0x0001ef18) list_single_graphic_pane_ParamLimits

0x75cb,	// (0x0001ef18) list_single_graphic_pane

0x75cb,	// (0x0001ef18) list_single_heading_pane_ParamLimits

0x75cb,	// (0x0001ef18) list_single_heading_pane

0x7639,	// (0x0001ef86) list_single_large_graphic_pane_ParamLimits

0x7639,	// (0x0001ef86) list_single_large_graphic_pane

0x75cb,	// (0x0001ef18) list_single_number_heading_pane_ParamLimits

0x75cb,	// (0x0001ef18) list_single_number_heading_pane

0x75cb,	// (0x0001ef18) list_single_number_pane_ParamLimits

0x75cb,	// (0x0001ef18) list_single_number_pane

0x75cb,	// (0x0001ef18) list_single_pane_ParamLimits

0x75cb,	// (0x0001ef18) list_single_pane

0x9f4d,	// (0x0002189a) list_highlight_pane_cp1

0x6d2c,	// (0x0001e679) list_single_pane_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_single_pane_g1

0x6d38,	// (0x0001e685) list_single_pane_g2_ParamLimits

0x6d38,	// (0x0001e685) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_single_pane_g

0x756d,	// (0x0001eeba) list_single_pane_t1_ParamLimits

0x756d,	// (0x0001eeba) list_single_pane_t1

0x6d2c,	// (0x0001e679) list_single_number_pane_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_single_number_pane_g1

0x6d38,	// (0x0001e685) list_single_number_pane_g2_ParamLimits

0x6d38,	// (0x0001e685) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_single_number_pane_g

0x74a1,	// (0x0001edee) list_single_number_pane_t1_ParamLimits

0x74a1,	// (0x0001edee) list_single_number_pane_t1

0x752d,	// (0x0001ee7a) list_single_number_pane_t2_ParamLimits

0x752d,	// (0x0001ee7a) list_single_number_pane_t2

0x0001,

0xf954,	// (0x000272a1) list_single_number_pane_t_ParamLimits

0xf954,	// (0x000272a1) list_single_number_pane_t

0x6d20,	// (0x0001e66d) list_single_graphic_pane_g1_ParamLimits

0x6d20,	// (0x0001e66d) list_single_graphic_pane_g1

0x6d2c,	// (0x0001e679) list_single_graphic_pane_g2_ParamLimits

0x6d2c,	// (0x0001e679) list_single_graphic_pane_g2

0x6d38,	// (0x0001e685) list_single_graphic_pane_g3_ParamLimits

0x6d38,	// (0x0001e685) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00026f14) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00026f14) list_single_graphic_pane_g

0x6d44,	// (0x0001e691) list_single_graphic_pane_t1_ParamLimits

0x6d44,	// (0x0001e691) list_single_graphic_pane_t1

0x6d2c,	// (0x0001e679) list_single_heading_pane_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_single_heading_pane_g1

0x6d38,	// (0x0001e685) list_single_heading_pane_g2_ParamLimits

0x6d38,	// (0x0001e685) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_single_heading_pane_g

0x6d5a,	// (0x0001e6a7) list_single_heading_pane_t1_ParamLimits

0x6d5a,	// (0x0001e6a7) list_single_heading_pane_t1

0x6d70,	// (0x0001e6bd) list_single_heading_pane_t2_ParamLimits

0x6d70,	// (0x0001e6bd) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00026f20) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00026f20) list_single_heading_pane_t

0x6d2c,	// (0x0001e679) list_single_number_heading_pane_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_single_number_heading_pane_g1

0x6d38,	// (0x0001e685) list_single_number_heading_pane_g2_ParamLimits

0x6d38,	// (0x0001e685) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_single_number_heading_pane_g

0x6d5a,	// (0x0001e6a7) list_single_number_heading_pane_t1_ParamLimits

0x6d5a,	// (0x0001e6a7) list_single_number_heading_pane_t1

0x6d82,	// (0x0001e6cf) list_single_number_heading_pane_t2_ParamLimits

0x6d82,	// (0x0001e6cf) list_single_number_heading_pane_t2

0x6d94,	// (0x0001e6e1) list_single_number_heading_pane_t3_ParamLimits

0x6d94,	// (0x0001e6e1) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00026f25) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00026f25) list_single_number_heading_pane_t

0x6da6,	// (0x0001e6f3) list_single_graphic_heading_pane_g1_ParamLimits

0x6da6,	// (0x0001e6f3) list_single_graphic_heading_pane_g1

0x6db2,	// (0x0001e6ff) list_single_graphic_heading_pane_g4_ParamLimits

0x6db2,	// (0x0001e6ff) list_single_graphic_heading_pane_g4

0x6d38,	// (0x0001e685) list_single_graphic_heading_pane_g5_ParamLimits

0x6d38,	// (0x0001e685) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00026f2c) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00026f2c) list_single_graphic_heading_pane_g

0x6d5a,	// (0x0001e6a7) list_single_graphic_heading_pane_t1_ParamLimits

0x6d5a,	// (0x0001e6a7) list_single_graphic_heading_pane_t1

0x6dc3,	// (0x0001e710) list_single_graphic_heading_pane_t2_ParamLimits

0x6dc3,	// (0x0001e710) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00026f33) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00026f33) list_single_graphic_heading_pane_t

0x6dd5,	// (0x0001e722) list_single_large_graphic_pane_g1_ParamLimits

0x6dd5,	// (0x0001e722) list_single_large_graphic_pane_g1

0x6de1,	// (0x0001e72e) list_single_large_graphic_pane_g2_ParamLimits

0x6de1,	// (0x0001e72e) list_single_large_graphic_pane_g2

0x6ded,	// (0x0001e73a) list_single_large_graphic_pane_g3_ParamLimits

0x6ded,	// (0x0001e73a) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00026f38) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00026f38) list_single_large_graphic_pane_g

0xc3cb,	// (0x00023d18) wait_border_pane_g2_copy1

0x6df9,	// (0x0001e746) list_single_large_graphic_pane_g4_cp2

0x6e01,	// (0x0001e74e) list_single_large_graphic_pane_t1_ParamLimits

0x6e01,	// (0x0001e74e) list_single_large_graphic_pane_t1

0x6e17,	// (0x0001e764) list_double_pane_g1_ParamLimits

0x6e17,	// (0x0001e764) list_double_pane_g1

0x6e23,	// (0x0001e770) list_double_pane_g2_ParamLimits

0x6e23,	// (0x0001e770) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00026f3f) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00026f3f) list_double_pane_g

0x6e2f,	// (0x0001e77c) list_double_pane_t1_ParamLimits

0x6e2f,	// (0x0001e77c) list_double_pane_t1

0x6e45,	// (0x0001e792) list_double_pane_t2_ParamLimits

0x6e45,	// (0x0001e792) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00026f44) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00026f44) list_double_pane_t

0x6e57,	// (0x0001e7a4) list_double2_pane_g1_ParamLimits

0x6e57,	// (0x0001e7a4) list_double2_pane_g1

0x6e23,	// (0x0001e770) list_double2_pane_g2_ParamLimits

0x6e23,	// (0x0001e770) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00026f49) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00026f49) list_double2_pane_g

0x6e2f,	// (0x0001e77c) list_double2_pane_t1_ParamLimits

0x6e2f,	// (0x0001e77c) list_double2_pane_t1

0x6e68,	// (0x0001e7b5) list_double2_pane_t2_ParamLimits

0x6e68,	// (0x0001e7b5) list_double2_pane_t2

0x0001,

0xf601,	// (0x00026f4e) list_double2_pane_t_ParamLimits

0xf601,	// (0x00026f4e) list_double2_pane_t

0x6e17,	// (0x0001e764) list_double_number_pane_g1_ParamLimits

0x6e17,	// (0x0001e764) list_double_number_pane_g1

0x6e23,	// (0x0001e770) list_double_number_pane_g2_ParamLimits

0x6e23,	// (0x0001e770) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00026f3f) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00026f3f) list_double_number_pane_g

0x6e7a,	// (0x0001e7c7) list_double_number_pane_t1_ParamLimits

0x6e7a,	// (0x0001e7c7) list_double_number_pane_t1

0x6e8c,	// (0x0001e7d9) list_double_number_pane_t2_ParamLimits

0x6e8c,	// (0x0001e7d9) list_double_number_pane_t2

0x6ea2,	// (0x0001e7ef) list_double_number_pane_t3_ParamLimits

0x6ea2,	// (0x0001e7ef) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00026f53) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00026f53) list_double_number_pane_t

0x6eb4,	// (0x0001e801) list_double_graphic_pane_g1_ParamLimits

0x6eb4,	// (0x0001e801) list_double_graphic_pane_g1

0x6ec0,	// (0x0001e80d) list_double_graphic_pane_g2_ParamLimits

0x6ec0,	// (0x0001e80d) list_double_graphic_pane_g2

0x6ecf,	// (0x0001e81c) list_double_graphic_pane_g3_ParamLimits

0x6ecf,	// (0x0001e81c) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00026f5a) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00026f5a) list_double_graphic_pane_g

0x6ee7,	// (0x0001e834) list_double_graphic_pane_t1_ParamLimits

0x6ee7,	// (0x0001e834) list_double_graphic_pane_t1

0x6efd,	// (0x0001e84a) list_double_graphic_pane_t2_ParamLimits

0x6efd,	// (0x0001e84a) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00026f63) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00026f63) list_double_graphic_pane_t

0x6eb4,	// (0x0001e801) list_double2_graphic_pane_g1_ParamLimits

0x6eb4,	// (0x0001e801) list_double2_graphic_pane_g1

0x6f0f,	// (0x0001e85c) list_double2_graphic_pane_g2_ParamLimits

0x6f0f,	// (0x0001e85c) list_double2_graphic_pane_g2

0x6f1b,	// (0x0001e868) list_double2_graphic_pane_g3_ParamLimits

0x6f1b,	// (0x0001e868) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00026f68) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00026f68) list_double2_graphic_pane_g

0x6e8c,	// (0x0001e7d9) list_double2_graphic_pane_t1_ParamLimits

0x6e8c,	// (0x0001e7d9) list_double2_graphic_pane_t1

0x6f27,	// (0x0001e874) list_double2_graphic_pane_t2_ParamLimits

0x6f27,	// (0x0001e874) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00026f6f) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00026f6f) list_double2_graphic_pane_t

0x6f39,	// (0x0001e886) list_double_large_graphic_pane_g1_ParamLimits

0x6f39,	// (0x0001e886) list_double_large_graphic_pane_g1

0x6e57,	// (0x0001e7a4) list_double_large_graphic_pane_g2_ParamLimits

0x6e57,	// (0x0001e7a4) list_double_large_graphic_pane_g2

0x6e23,	// (0x0001e770) list_double_large_graphic_pane_g3_ParamLimits

0x6e23,	// (0x0001e770) list_double_large_graphic_pane_g3

0x6f64,	// (0x0001e8b1) list_double_large_graphic_pane_g4_ParamLimits

0x6f64,	// (0x0001e8b1) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00026f74) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00026f74) list_double_large_graphic_pane_g

0x6f8c,	// (0x0001e8d9) list_double_large_graphic_pane_t1_ParamLimits

0x6f8c,	// (0x0001e8d9) list_double_large_graphic_pane_t1

0x6fa5,	// (0x0001e8f2) list_double_large_graphic_pane_t2_ParamLimits

0x6fa5,	// (0x0001e8f2) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00026f7f) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00026f7f) list_double_large_graphic_pane_t

0x6fb7,	// (0x0001e904) list_double2_large_graphic_pane_g1_ParamLimits

0x6fb7,	// (0x0001e904) list_double2_large_graphic_pane_g1

0x6e57,	// (0x0001e7a4) list_double2_large_graphic_pane_g2_ParamLimits

0x6e57,	// (0x0001e7a4) list_double2_large_graphic_pane_g2

0x6e23,	// (0x0001e770) list_double2_large_graphic_pane_g3_ParamLimits

0x6e23,	// (0x0001e770) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00026f84) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00026f84) list_double2_large_graphic_pane_g

0x6fc3,	// (0x0001e910) list_double2_large_graphic_pane_t1_ParamLimits

0x6fc3,	// (0x0001e910) list_double2_large_graphic_pane_t1

0x6fd9,	// (0x0001e926) list_double2_large_graphic_pane_t2_ParamLimits

0x6fd9,	// (0x0001e926) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00026f8b) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00026f8b) list_double2_large_graphic_pane_t

0x6feb,	// (0x0001e938) list_double_heading_pane_g1_ParamLimits

0x6feb,	// (0x0001e938) list_double_heading_pane_g1

0x6ffc,	// (0x0001e949) list_double_heading_pane_g2_ParamLimits

0x6ffc,	// (0x0001e949) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00026f90) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00026f90) list_double_heading_pane_g

0x7008,	// (0x0001e955) list_double_heading_pane_t1_ParamLimits

0x7008,	// (0x0001e955) list_double_heading_pane_t1

0x6e68,	// (0x0001e7b5) list_double_heading_pane_t2_ParamLimits

0x6e68,	// (0x0001e7b5) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00026f95) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00026f95) list_double_heading_pane_t

0x6eb4,	// (0x0001e801) list_double_graphic_heading_pane_g1_ParamLimits

0x6eb4,	// (0x0001e801) list_double_graphic_heading_pane_g1

0x6feb,	// (0x0001e938) list_double_graphic_heading_pane_g2_ParamLimits

0x6feb,	// (0x0001e938) list_double_graphic_heading_pane_g2

0x6ffc,	// (0x0001e949) list_double_graphic_heading_pane_g3_ParamLimits

0x6ffc,	// (0x0001e949) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00026f9a) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00026f9a) list_double_graphic_heading_pane_g

0x701e,	// (0x0001e96b) list_double_graphic_heading_pane_t1_ParamLimits

0x701e,	// (0x0001e96b) list_double_graphic_heading_pane_t1

0x6f27,	// (0x0001e874) list_double_graphic_heading_pane_t2_ParamLimits

0x6f27,	// (0x0001e874) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00026fa1) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00026fa1) list_double_graphic_heading_pane_t

0x6e57,	// (0x0001e7a4) list_double_time_pane_g1_ParamLimits

0x6e57,	// (0x0001e7a4) list_double_time_pane_g1

0x6e23,	// (0x0001e770) list_double_time_pane_g2_ParamLimits

0x6e23,	// (0x0001e770) list_double_time_pane_g2

0x0001,

0xf5fc,	// (0x00026f49) list_double_time_pane_g_ParamLimits

0xf5fc,	// (0x00026f49) list_double_time_pane_g

0x6fc3,	// (0x0001e910) list_double_time_pane_t1_ParamLimits

0x6fc3,	// (0x0001e910) list_double_time_pane_t1

0x7034,	// (0x0001e981) list_double_time_pane_t2_ParamLimits

0x7034,	// (0x0001e981) list_double_time_pane_t2

0x7046,	// (0x0001e993) list_double_time_pane_t3_ParamLimits

0x7046,	// (0x0001e993) list_double_time_pane_t3

0x7058,	// (0x0001e9a5) list_double_time_pane_t4_ParamLimits

0x7058,	// (0x0001e9a5) list_double_time_pane_t4

0x0003,

0xf659,	// (0x00026fa6) list_double_time_pane_t_ParamLimits

0xf659,	// (0x00026fa6) list_double_time_pane_t

0x706a,	// (0x0001e9b7) list_setting_pane_g1_ParamLimits

0x706a,	// (0x0001e9b7) list_setting_pane_g1

0x7076,	// (0x0001e9c3) list_setting_pane_g2_ParamLimits

0x7076,	// (0x0001e9c3) list_setting_pane_g2

0x0001,

0xf662,	// (0x00026faf) list_setting_pane_g_ParamLimits

0xf662,	// (0x00026faf) list_setting_pane_g

0x7082,	// (0x0001e9cf) list_setting_pane_t1_ParamLimits

0x7082,	// (0x0001e9cf) list_setting_pane_t1

0x7099,	// (0x0001e9e6) list_setting_pane_t2_ParamLimits

0x7099,	// (0x0001e9e6) list_setting_pane_t2

0x0002,

0xf667,	// (0x00026fb4) list_setting_pane_t_ParamLimits

0xf667,	// (0x00026fb4) list_setting_pane_t

0x70d6,	// (0x0001ea23) set_value_pane_cp_ParamLimits

0x70d6,	// (0x0001ea23) set_value_pane_cp

0x70e2,	// (0x0001ea2f) list_setting_number_pane_g1_ParamLimits

0x70e2,	// (0x0001ea2f) list_setting_number_pane_g1

0x70ee,	// (0x0001ea3b) list_setting_number_pane_g2_ParamLimits

0x70ee,	// (0x0001ea3b) list_setting_number_pane_g2

0x0001,

0xf66e,	// (0x00026fbb) list_setting_number_pane_g_ParamLimits

0xf66e,	// (0x00026fbb) list_setting_number_pane_g

0x70fa,	// (0x0001ea47) list_setting_number_pane_t1_ParamLimits

0x70fa,	// (0x0001ea47) list_setting_number_pane_t1

0x710e,	// (0x0001ea5b) list_setting_number_pane_t2_ParamLimits

0x710e,	// (0x0001ea5b) list_setting_number_pane_t2

0x7125,	// (0x0001ea72) list_setting_number_pane_t3_ParamLimits

0x7125,	// (0x0001ea72) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x00026fc0) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x00026fc0) list_setting_number_pane_t

0x70d6,	// (0x0001ea23) set_value_pane_ParamLimits

0x70d6,	// (0x0001ea23) set_value_pane

0xa827,	// (0x00022174) bg_set_opt_pane_ParamLimits

0xa827,	// (0x00022174) bg_set_opt_pane

0x7168,	// (0x0001eab5) set_value_pane_t1

0xa848,	// (0x00022195) slider_set_pane_cp3

0xa851,	// (0x0002219e) volume_small_pane_cp

0xa85a,	// (0x000221a7) list_form_gen_pane

0xa863,	// (0x000221b0) scroll_pane_cp8

0x717e,	// (0x0001eacb) form_field_data_pane_ParamLimits

0x717e,	// (0x0001eacb) form_field_data_pane

0x719e,	// (0x0001eaeb) form_field_data_wide_pane_ParamLimits

0x719e,	// (0x0001eaeb) form_field_data_wide_pane

0x71bf,	// (0x0001eb0c) form_field_popup_pane_ParamLimits

0x71bf,	// (0x0001eb0c) form_field_popup_pane

0x71dd,	// (0x0001eb2a) form_field_popup_wide_pane_ParamLimits

0x71dd,	// (0x0001eb2a) form_field_popup_wide_pane

0x71f8,	// (0x0001eb45) form_field_slider_pane_ParamLimits

0x71f8,	// (0x0001eb45) form_field_slider_pane

0x720b,	// (0x0001eb58) form_field_slider_wide_pane_ParamLimits

0x720b,	// (0x0001eb58) form_field_slider_wide_pane

0xa874,	// (0x000221c1) data_form_pane

0x7228,	// (0x0001eb75) form_field_data_pane_t1

0xa880,	// (0x000221cd) input_focus_pane

0xa88e,	// (0x000221db) data_form_wide_pane

0x724e,	// (0x0001eb9b) form_field_data_wide_pane_t1

0xa5f1,	// (0x00021f3e) input_focus_pane_cp6

0x7270,	// (0x0001ebbd) form_field_popup_pane_t1

0xa880,	// (0x000221cd) input_focus_pane_cp7

0xa8ba,	// (0x00022207) list_form_pane

0x7292,	// (0x0001ebdf) form_field_popup_wide_pane_t1

0xa880,	// (0x000221cd) input_focus_pane_cp8

0xa8c6,	// (0x00022213) list_form_wide_pane

0x72af,	// (0x0001ebfc) form_field_slider_pane_t1_ParamLimits

0x72af,	// (0x0001ebfc) form_field_slider_pane_t1

0x72c3,	// (0x0001ec10) form_field_slider_pane_t2_ParamLimits

0x72c3,	// (0x0001ec10) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x00026fd0) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x00026fd0) form_field_slider_pane_t

0xa2a8,	// (0x00021bf5) input_focus_pane_cp9_ParamLimits

0xa2a8,	// (0x00021bf5) input_focus_pane_cp9

0x72d5,	// (0x0001ec22) slider_cont_pane_ParamLimits

0x72d5,	// (0x0001ec22) slider_cont_pane

0xa8d5,	// (0x00022222) form_field_slider_wide_pane_t1_ParamLimits

0xa8d5,	// (0x00022222) form_field_slider_wide_pane_t1

0x72e9,	// (0x0001ec36) form_field_slider_wide_pane_t2_ParamLimits

0x72e9,	// (0x0001ec36) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x00026fd5) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x00026fd5) form_field_slider_wide_pane_t

0xa2a8,	// (0x00021bf5) input_focus_pane_cp10_ParamLimits

0xa2a8,	// (0x00021bf5) input_focus_pane_cp10

0x72fb,	// (0x0001ec48) slider_cont_pane_cp1_ParamLimits

0x72fb,	// (0x0001ec48) slider_cont_pane_cp1

0x730f,	// (0x0001ec5c) slider_form_pane_cp

0xa8e7,	// (0x00022234) input_focus_pane_g1

0xa8ef,	// (0x0002223c) input_focus_pane_g2

0xa8f7,	// (0x00022244) input_focus_pane_g3

0xa8ff,	// (0x0002224c) input_focus_pane_g4

0xa907,	// (0x00022254) input_focus_pane_g5

0xa90f,	// (0x0002225c) input_focus_pane_g6

0xa917,	// (0x00022264) input_focus_pane_g7

0xa91f,	// (0x0002226c) input_focus_pane_g8

0xa927,	// (0x00022274) input_focus_pane_g9

0x9f43,	// (0x00021890) input_focus_pane_g10

0x0009,

0xf68d,	// (0x00026fda) input_focus_pane_g

0xc3d4,	// (0x00023d21) wait_border_pane_g3_copy1

0x7317,	// (0x0001ec64) data_form_pane_t1

0x9f43,	// (0x00021890) wait_anim_pane_g1_copy1

0x753f,	// (0x0001ee8c) data_form_wide_pane_t1

0x7332,	// (0x0001ec7f) list_form_graphic_pane_cp_ParamLimits

0x7332,	// (0x0001ec7f) list_form_graphic_pane_cp

0xd2ed,	// (0x00024c3a) slider_form_pane_g1

0xd2f6,	// (0x00024c43) slider_form_pane_g2

0x0006,

0xf984,	// (0x000272d1) slider_form_pane_g

0x7349,	// (0x0001ec96) list_form_graphic_pane_ParamLimits

0x7349,	// (0x0001ec96) list_form_graphic_pane

0x7363,	// (0x0001ecb0) list_form_graphic_pane_g1

0x736b,	// (0x0001ecb8) list_form_graphic_pane_t1_ParamLimits

0x736b,	// (0x0001ecb8) list_form_graphic_pane_t1

0xa02d,	// (0x0002197a) list_highlight_pane_cp5_ParamLimits

0xa02d,	// (0x0002197a) list_highlight_pane_cp5

0x7380,	// (0x0001eccd) find_pane_g1

0xa92f,	// (0x0002227c) input_find_pane

0x7389,	// (0x0001ecd6) input_find_pane_g1_ParamLimits

0x7389,	// (0x0001ecd6) input_find_pane_g1

0x7395,	// (0x0001ece2) input_find_pane_t1_ParamLimits

0x7395,	// (0x0001ece2) input_find_pane_t1

0x73aa,	// (0x0001ecf7) input_find_pane_t2_ParamLimits

0x73aa,	// (0x0001ecf7) input_find_pane_t2

0x0001,

0xf6a2,	// (0x00026fef) input_find_pane_t_ParamLimits

0xf6a2,	// (0x00026fef) input_find_pane_t

0xa938,	// (0x00022285) input_focus_pane_cp5_ParamLimits

0xa938,	// (0x00022285) input_focus_pane_cp5

0xa952,	// (0x0002229f) bg_popup_window_pane_cp2_ParamLimits

0xa952,	// (0x0002229f) bg_popup_window_pane_cp2

0xa95f,	// (0x000222ac) listscroll_menu_pane_ParamLimits

0xa95f,	// (0x000222ac) listscroll_menu_pane

0xa96b,	// (0x000222b8) popup_submenu_window_ParamLimits

0xa96b,	// (0x000222b8) popup_submenu_window

0xa993,	// (0x000222e0) find_popup_pane_g1

0xa99b,	// (0x000222e8) input_popup_find_pane_cp

0xa938,	// (0x00022285) input_focus_pane_cp4_ParamLimits

0xa938,	// (0x00022285) input_focus_pane_cp4

0xa9b3,	// (0x00022300) input_popup_find_pane_t1_ParamLimits

0xa9b3,	// (0x00022300) input_popup_find_pane_t1

0x9f4d,	// (0x0002189a) bg_popup_sub_pane_cp

0xa9e1,	// (0x0002232e) listscroll_popup_sub_pane

0xa9e9,	// (0x00022336) list_submenu_pane_ParamLimits

0xa9e9,	// (0x00022336) list_submenu_pane

0xa9fa,	// (0x00022347) scroll_pane_cp4

0xaa02,	// (0x0002234f) list_single_popup_submenu_pane_ParamLimits

0xaa02,	// (0x0002234f) list_single_popup_submenu_pane

0xaa15,	// (0x00022362) list_single_popup_submenu_pane_g1

0xaa1d,	// (0x0002236a) list_single_popup_submenu_pane_t1_ParamLimits

0xaa1d,	// (0x0002236a) list_single_popup_submenu_pane_t1

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp1_ParamLimits

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp1

0xaa32,	// (0x0002237f) tabs_2_active_pane_g1

0xaa3a,	// (0x00022387) tabs_2_active_pane_t1

0xa02d,	// (0x0002197a) bg_passive_tab_pane_cp1_ParamLimits

0xa02d,	// (0x0002197a) bg_passive_tab_pane_cp1

0xaa32,	// (0x0002237f) tabs_2_passive_pane_g1

0xaa3a,	// (0x00022387) tabs_2_passive_pane_t1

0xaa4c,	// (0x00022399) bg_active_tab_pane_cp4

0xaa5a,	// (0x000223a7) tabs_2_long_active_pane_t1

0xaa6d,	// (0x000223ba) bg_passive_tab_pane_cp4

0x8c97,	// (0x000205e4) list_single_midp_graphic_pane_g4_ParamLimits

0xaa4c,	// (0x00022399) bg_active_tab_pane_cp5

0xaa79,	// (0x000223c6) tabs_3_long_active_pane_t1

0xaa6d,	// (0x000223ba) bg_passive_tab_pane_cp5

0x8c97,	// (0x000205e4) list_single_midp_graphic_pane_g4

0xa02d,	// (0x0002197a) bg_popup_window_pane_cp13_ParamLimits

0xa02d,	// (0x0002197a) bg_popup_window_pane_cp13

0xaa94,	// (0x000223e1) listscroll_popup_fast_pane_ParamLimits

0xaa94,	// (0x000223e1) listscroll_popup_fast_pane

0xaaa3,	// (0x000223f0) grid_popup_fast_pane_ParamLimits

0xaaa3,	// (0x000223f0) grid_popup_fast_pane

0xaab5,	// (0x00022402) scroll_pane_cp9_ParamLimits

0xaab5,	// (0x00022402) scroll_pane_cp9

0xec7e,	// (0x000265cb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xec7e,	// (0x000265cb) list_single_graphic_hl_pane_t1_cp2

0xaad9,	// (0x00022426) input_focus_pane_cp20_ParamLimits

0xaad9,	// (0x00022426) input_focus_pane_cp20

0xaae7,	// (0x00022434) query_popup_data_pane_t1_ParamLimits

0xaae7,	// (0x00022434) query_popup_data_pane_t1

0xaafa,	// (0x00022447) query_popup_data_pane_t2_ParamLimits

0xaafa,	// (0x00022447) query_popup_data_pane_t2

0xab40,	// (0x0002248d) query_popup_data_pane_t3_ParamLimits

0xab40,	// (0x0002248d) query_popup_data_pane_t3

0xab81,	// (0x000224ce) query_popup_data_pane_t4_ParamLimits

0xab81,	// (0x000224ce) query_popup_data_pane_t4

0xabbd,	// (0x0002250a) query_popup_data_pane_t5_ParamLimits

0xabbd,	// (0x0002250a) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x00026ff4) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x00026ff4) query_popup_data_pane_t

0xa8e7,	// (0x00022234) bg_set_opt_pane_g1

0xa8ef,	// (0x0002223c) bg_set_opt_pane_g2

0xa8f7,	// (0x00022244) bg_set_opt_pane_g3

0xa8ff,	// (0x0002224c) bg_set_opt_pane_g4

0xa907,	// (0x00022254) bg_set_opt_pane_g5

0xa90f,	// (0x0002225c) bg_set_opt_pane_g6

0xa917,	// (0x00022264) bg_set_opt_pane_g7

0xa91f,	// (0x0002226c) bg_set_opt_pane_g8

0xa927,	// (0x00022274) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x00026fff) bg_set_opt_pane_g

0x835f,	// (0x0001fcac) control_top_pane_stacon_ParamLimits

0x835f,	// (0x0001fcac) control_top_pane_stacon

0x83b2,	// (0x0001fcff) signal_pane_stacon_ParamLimits

0x83b2,	// (0x0001fcff) signal_pane_stacon

0xb17e,	// (0x00022acb) stacon_top_pane_g1_ParamLimits

0xb17e,	// (0x00022acb) stacon_top_pane_g1

0x83d7,	// (0x0001fd24) title_pane_stacon_ParamLimits

0x83d7,	// (0x0001fd24) title_pane_stacon

0x8401,	// (0x0001fd4e) uni_indicator_pane_stacon_ParamLimits

0x8401,	// (0x0001fd4e) uni_indicator_pane_stacon

0x8416,	// (0x0001fd63) battery_pane_stacon_ParamLimits

0x8416,	// (0x0001fd63) battery_pane_stacon

0x845a,	// (0x0001fda7) control_bottom_pane_stacon_ParamLimits

0x845a,	// (0x0001fda7) control_bottom_pane_stacon

0x847d,	// (0x0001fdca) navi_pane_stacon_ParamLimits

0x847d,	// (0x0001fdca) navi_pane_stacon

0xb1a0,	// (0x00022aed) stacon_bottom_pane_g1_ParamLimits

0xb1a0,	// (0x00022aed) stacon_bottom_pane_g1

0x80c0,	// (0x0001fa0d) aid_levels_signal_lsc_ParamLimits

0x80c0,	// (0x0001fa0d) aid_levels_signal_lsc

0x80d7,	// (0x0001fa24) signal_pane_stacon_g1_ParamLimits

0x80d7,	// (0x0001fa24) signal_pane_stacon_g1

0x80eb,	// (0x0001fa38) signal_pane_stacon_g2_ParamLimits

0x80eb,	// (0x0001fa38) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00027012) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00027012) signal_pane_stacon_g

0x8120,	// (0x0001fa6d) title_pane_stacon_t1_ParamLimits

0x8120,	// (0x0001fa6d) title_pane_stacon_t1

0xac01,	// (0x0002254e) uni_indicator_pane_stacon_g1

0xac0b,	// (0x00022558) uni_indicator_pane_stacon_g2

0xac15,	// (0x00022562) uni_indicator_pane_stacon_g3

0xac1f,	// (0x0002256c) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0002701e) uni_indicator_pane_stacon_g

0x8145,	// (0x0001fa92) control_top_pane_stacon_g1

0x814d,	// (0x0001fa9a) control_top_pane_stacon_t1_ParamLimits

0x814d,	// (0x0001fa9a) control_top_pane_stacon_t1

0x8184,	// (0x0001fad1) aid_levels_battery_lsc_ParamLimits

0x8184,	// (0x0001fad1) aid_levels_battery_lsc

0x819c,	// (0x0001fae9) battery_pane_stacon_g1_ParamLimits

0x819c,	// (0x0001fae9) battery_pane_stacon_g1

0x81af,	// (0x0001fafc) battery_pane_stacon_g2_ParamLimits

0x81af,	// (0x0001fafc) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x00027027) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x00027027) battery_pane_stacon_g

0x81ed,	// (0x0001fb3a) navi_icon_pane_stacon

0x8201,	// (0x0001fb4e) navi_navi_pane_stacon

0x81ed,	// (0x0001fb3a) navi_text_pane_stacon

0x8145,	// (0x0001fa92) control_bottom_pane_stacon_g1

0x8215,	// (0x0001fb62) control_bottom_pane_stacon_t1_ParamLimits

0x8215,	// (0x0001fb62) control_bottom_pane_stacon_t1

0xac43,	// (0x00022590) grid_app_pane_ParamLimits

0xac43,	// (0x00022590) grid_app_pane

0xac65,	// (0x000225b2) scroll_pane_cp15_ParamLimits

0xac65,	// (0x000225b2) scroll_pane_cp15

0xac7a,	// (0x000225c7) cell_app_pane_ParamLimits

0xac7a,	// (0x000225c7) cell_app_pane

0xaca4,	// (0x000225f1) cell_app_pane_g1_ParamLimits

0xaca4,	// (0x000225f1) cell_app_pane_g1

0xacc4,	// (0x00022611) cell_app_pane_g2_ParamLimits

0xacc4,	// (0x00022611) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0002702c) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0002702c) cell_app_pane_g

0xacd0,	// (0x0002261d) cell_app_pane_t1_ParamLimits

0xacd0,	// (0x0002261d) cell_app_pane_t1

0xace7,	// (0x00022634) grid_highlight_pane_ParamLimits

0xace7,	// (0x00022634) grid_highlight_pane

0xa8e7,	// (0x00022234) cell_highlight_pane_g1

0xa8ef,	// (0x0002223c) cell_highlight_pane_g2

0xa8f7,	// (0x00022244) cell_highlight_pane_g3

0xa8ff,	// (0x0002224c) cell_highlight_pane_g4

0xa907,	// (0x00022254) cell_highlight_pane_g5

0xa90f,	// (0x0002225c) cell_highlight_pane_g6

0xa917,	// (0x00022264) cell_highlight_pane_g7

0xa91f,	// (0x0002226c) cell_highlight_pane_g8

0xa927,	// (0x00022274) cell_highlight_pane_g9

0x9f43,	// (0x00021890) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x00026fda) cell_highlight_pane_g

0xacf8,	// (0x00022645) bg_scroll_pane

0x825f,	// (0x0001fbac) scroll_handle_pane

0xad3f,	// (0x0002268c) scroll_bg_pane_g1

0xad54,	// (0x000226a1) scroll_bg_pane_g2

0xad6c,	// (0x000226b9) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x00027031) scroll_bg_pane_g

0xad81,	// (0x000226ce) scroll_handle_focus_pane_ParamLimits

0xad81,	// (0x000226ce) scroll_handle_focus_pane

0xad3f,	// (0x0002268c) scroll_handle_pane_g1

0xad8e,	// (0x000226db) scroll_handle_pane_g2

0xad6c,	// (0x000226b9) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x00027038) scroll_handle_pane_g

0xa938,	// (0x00022285) bg_popup_sub_pane_cp21_ParamLimits

0xa938,	// (0x00022285) bg_popup_sub_pane_cp21

0xada2,	// (0x000226ef) popup_fep_japan_predictive_window_t1_ParamLimits

0xada2,	// (0x000226ef) popup_fep_japan_predictive_window_t1

0xadb9,	// (0x00022706) popup_fep_japan_predictive_window_t2_ParamLimits

0xadb9,	// (0x00022706) popup_fep_japan_predictive_window_t2

0xadec,	// (0x00022739) popup_fep_japan_predictive_window_t3_ParamLimits

0xadec,	// (0x00022739) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0002703f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0002703f) popup_fep_japan_predictive_window_t

0x9f4d,	// (0x0002189a) bg_popup_sub_pane_cp23

0xae23,	// (0x00022770) listscroll_japin_cand_pane

0xae2b,	// (0x00022778) popup_fep_japan_candidate_window_t1

0xae39,	// (0x00022786) candidate_pane_ParamLimits

0xae39,	// (0x00022786) candidate_pane

0xae4b,	// (0x00022798) scroll_pane_cp30

0xae53,	// (0x000227a0) list_single_popup_jap_candidate_pane_ParamLimits

0xae53,	// (0x000227a0) list_single_popup_jap_candidate_pane

0x9f4d,	// (0x0002189a) list_highlight_pane_cp30

0xae67,	// (0x000227b4) list_single_popup_jap_candidate_pane_t1

0xae76,	// (0x000227c3) level_1_signal

0xae83,	// (0x000227d0) level_2_signal

0xae90,	// (0x000227dd) level_3_signal

0xae9d,	// (0x000227ea) level_4_signal

0xaeaa,	// (0x000227f7) level_5_signal

0xaeb7,	// (0x00022804) level_6_signal

0xaec4,	// (0x00022811) level_7_signal

0xae76,	// (0x000227c3) level_1_battery

0xae83,	// (0x000227d0) level_2_battery

0xae90,	// (0x000227dd) level_3_battery

0xae9d,	// (0x000227ea) level_4_battery

0xaeaa,	// (0x000227f7) level_5_battery

0xaeb7,	// (0x00022804) level_6_battery

0xaec4,	// (0x00022811) level_7_battery

0xaee9,	// (0x00022836) list_menu_pane_ParamLimits

0xaee9,	// (0x00022836) list_menu_pane

0xaeff,	// (0x0002284c) scroll_pane_cp25_ParamLimits

0xaeff,	// (0x0002284c) scroll_pane_cp25

0xaf18,	// (0x00022865) list_double2_graphic_pane_cp2_ParamLimits

0xaf18,	// (0x00022865) list_double2_graphic_pane_cp2

0xaf18,	// (0x00022865) list_double2_large_graphic_pane_cp2_ParamLimits

0xaf18,	// (0x00022865) list_double2_large_graphic_pane_cp2

0xaf18,	// (0x00022865) list_double2_pane_cp2_ParamLimits

0xaf18,	// (0x00022865) list_double2_pane_cp2

0xaf18,	// (0x00022865) list_double_graphic_pane_cp2_ParamLimits

0xaf18,	// (0x00022865) list_double_graphic_pane_cp2

0xaf18,	// (0x00022865) list_double_large_graphic_pane_cp2_ParamLimits

0xaf18,	// (0x00022865) list_double_large_graphic_pane_cp2

0xaf18,	// (0x00022865) list_double_number_pane_cp2_ParamLimits

0xaf18,	// (0x00022865) list_double_number_pane_cp2

0xaf18,	// (0x00022865) list_double_pane_cp2_ParamLimits

0xaf18,	// (0x00022865) list_double_pane_cp2

0xaf3a,	// (0x00022887) list_single_2graphic_pane_cp2_ParamLimits

0xaf3a,	// (0x00022887) list_single_2graphic_pane_cp2

0xaf3a,	// (0x00022887) list_single_graphic_heading_pane_cp2_ParamLimits

0xaf3a,	// (0x00022887) list_single_graphic_heading_pane_cp2

0xaf3a,	// (0x00022887) list_single_graphic_pane_cp2_ParamLimits

0xaf3a,	// (0x00022887) list_single_graphic_pane_cp2

0xaf3a,	// (0x00022887) list_single_heading_pane_cp2_ParamLimits

0xaf3a,	// (0x00022887) list_single_heading_pane_cp2

0xaf51,	// (0x0002289e) list_single_large_graphic_pane_cp2_ParamLimits

0xaf51,	// (0x0002289e) list_single_large_graphic_pane_cp2

0xaf3a,	// (0x00022887) list_single_number_heading_pane_cp2_ParamLimits

0xaf3a,	// (0x00022887) list_single_number_heading_pane_cp2

0xaf3a,	// (0x00022887) list_single_number_pane_cp2_ParamLimits

0xaf3a,	// (0x00022887) list_single_number_pane_cp2

0xaf3a,	// (0x00022887) list_single_pane_cp2_ParamLimits

0xaf3a,	// (0x00022887) list_single_pane_cp2

0xafcd,	// (0x0002291a) bg_popup_sub_pane_cp22

0x8311,	// (0x0001fc5e) popup_side_volume_key_window_g1

0x833b,	// (0x0001fc88) popup_side_volume_key_window_t1

0x8357,	// (0x0001fca4) volume_small_pane_cp1

0xa2a8,	// (0x00021bf5) bg_popup_sub_pane_cp24_ParamLimits

0xa2a8,	// (0x00021bf5) bg_popup_sub_pane_cp24

0xafe3,	// (0x00022930) fep_china_uni_candidate_pane_ParamLimits

0xafe3,	// (0x00022930) fep_china_uni_candidate_pane

0xaff7,	// (0x00022944) fep_china_uni_entry_pane

0xb007,	// (0x00022954) popup_fep_china_uni_window_g1

0xb023,	// (0x00022970) fep_china_uni_entry_pane_g1

0xb02b,	// (0x00022978) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x00027070) fep_china_uni_entry_pane_g

0xb033,	// (0x00022980) fep_entry_item_pane

0xb03d,	// (0x0002298a) fep_candidate_item_pane

0xb045,	// (0x00022992) fep_china_uni_candidate_pane_g1

0xb04d,	// (0x0002299a) fep_china_uni_candidate_pane_g2

0xb055,	// (0x000229a2) fep_china_uni_candidate_pane_g3

0xb05d,	// (0x000229aa) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x00027075) fep_china_uni_candidate_pane_g

0x9f43,	// (0x00021890) fep_entry_item_pane_g1

0xb065,	// (0x000229b2) fep_entry_item_pane_t1_ParamLimits

0xb065,	// (0x000229b2) fep_entry_item_pane_t1

0xb07b,	// (0x000229c8) fep_candidate_item_pane_t1_ParamLimits

0xb07b,	// (0x000229c8) fep_candidate_item_pane_t1

0xb090,	// (0x000229dd) fep_candidate_item_pane_t2_ParamLimits

0xb090,	// (0x000229dd) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0002707e) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0002707e) fep_candidate_item_pane_t

0xa02d,	// (0x0002197a) list_highlight_pane_cp31_ParamLimits

0xa02d,	// (0x0002197a) list_highlight_pane_cp31

0xb0a2,	// (0x000229ef) level_1_signal_lsc

0xb0ab,	// (0x000229f8) level_2_signal_lsc

0xb0b4,	// (0x00022a01) level_3_signal_lsc

0xb0bd,	// (0x00022a0a) level_4_signal_lsc

0xb0c6,	// (0x00022a13) level_5_signal_lsc

0xb0cf,	// (0x00022a1c) level_6_signal_lsc

0xb0d8,	// (0x00022a25) level_7_signal_lsc

0xb0d8,	// (0x00022a25) level_1_battery_lsc

0xb0e1,	// (0x00022a2e) level_2_battery_lsc

0xb0ea,	// (0x00022a37) level_3_battery_lsc

0xb0f3,	// (0x00022a40) level_4_battery_lsc

0xb0fc,	// (0x00022a49) level_5_battery_lsc

0xb105,	// (0x00022a52) level_6_battery_lsc

0xb0a2,	// (0x000229ef) level_7_battery_lsc

0xb10e,	// (0x00022a5b) scroll_handle_focus_pane_g1

0xb117,	// (0x00022a64) scroll_handle_focus_pane_g2

0xb120,	// (0x00022a6d) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x00027083) scroll_handle_focus_pane_g

0x73bf,	// (0x0001ed0c) list_single_2graphic_pane_g1_ParamLimits

0x73bf,	// (0x0001ed0c) list_single_2graphic_pane_g1

0x6db2,	// (0x0001e6ff) list_single_2graphic_pane_g2_ParamLimits

0x6db2,	// (0x0001e6ff) list_single_2graphic_pane_g2

0x6d38,	// (0x0001e685) list_single_2graphic_pane_g3_ParamLimits

0x6d38,	// (0x0001e685) list_single_2graphic_pane_g3

0x73cb,	// (0x0001ed18) list_single_2graphic_pane_g4_ParamLimits

0x73cb,	// (0x0001ed18) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0002708a) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0002708a) list_single_2graphic_pane_g

0x73d7,	// (0x0001ed24) list_single_2graphic_pane_t1_ParamLimits

0x73d7,	// (0x0001ed24) list_single_2graphic_pane_t1

0x7405,	// (0x0001ed52) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7405,	// (0x0001ed52) list_double2_graphic_large_graphic_pane_g1

0x6e57,	// (0x0001e7a4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6e57,	// (0x0001e7a4) list_double2_graphic_large_graphic_pane_g2

0x6e23,	// (0x0001e770) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6e23,	// (0x0001e770) list_double2_graphic_large_graphic_pane_g3

0x7417,	// (0x0001ed64) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7417,	// (0x0001ed64) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x00027093) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x00027093) list_double2_graphic_large_graphic_pane_g

0x7423,	// (0x0001ed70) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7423,	// (0x0001ed70) list_double2_graphic_large_graphic_pane_t1

0x7439,	// (0x0001ed86) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7439,	// (0x0001ed86) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0002709c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0002709c) list_double2_graphic_large_graphic_pane_t

0xb26b,	// (0x00022bb8) popup_fast_swap_window_ParamLimits

0xb26b,	// (0x00022bb8) popup_fast_swap_window

0xb287,	// (0x00022bd4) popup_side_volume_key_window

0xb2a1,	// (0x00022bee) stacon_top_pane

0xb2ab,	// (0x00022bf8) status_pane_ParamLimits

0xb2ab,	// (0x00022bf8) status_pane

0xb2a1,	// (0x00022bee) status_small_pane

0x9f4d,	// (0x0002189a) control_pane

0x9f4d,	// (0x0002189a) stacon_bottom_pane

0xa863,	// (0x000221b0) scroll_pane_cp121

0xa85a,	// (0x000221a7) set_content_pane

0xb129,	// (0x00022a76) bg_active_tab_pane_g1_cp1

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp1

0xb13b,	// (0x00022a88) bg_active_tab_pane_g3_cp1

0xb129,	// (0x00022a76) bg_passive_tab_pane_g1_cp1

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp1

0xb13b,	// (0x00022a88) bg_passive_tab_pane_g3_cp1

0xb144,	// (0x00022a91) bg_active_tab_pane_g1_cp2

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp2

0xb14d,	// (0x00022a9a) bg_active_tab_pane_g3_cp2

0xb144,	// (0x00022a91) bg_passive_tab_pane_g1_cp2

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp2

0xb14d,	// (0x00022a9a) bg_passive_tab_pane_g3_cp2

0xb156,	// (0x00022aa3) bg_active_tab_pane_g1_cp3

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp3

0xb15f,	// (0x00022aac) bg_active_tab_pane_g3_cp3

0xb156,	// (0x00022aa3) bg_passive_tab_pane_g1_cp3

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp3

0xb15f,	// (0x00022aac) bg_passive_tab_pane_g3_cp3

0xb168,	// (0x00022ab5) bg_active_tab_pane_g1_cp4

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp4

0xb173,	// (0x00022ac0) bg_active_tab_pane_g3_cp4

0xb168,	// (0x00022ab5) bg_passive_tab_pane_g1_cp4

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp4

0xb173,	// (0x00022ac0) bg_passive_tab_pane_g3_cp4

0xb1bc,	// (0x00022b09) bg_active_tab_pane_g1_cp5

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp5

0xb1c5,	// (0x00022b12) bg_active_tab_pane_g3_cp5

0xb1bc,	// (0x00022b09) bg_passive_tab_pane_g1_cp5

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp5

0xb1c5,	// (0x00022b12) bg_passive_tab_pane_g3_cp5

0xb1ce,	// (0x00022b1b) list_set_graphic_pane_ParamLimits

0xb1ce,	// (0x00022b1b) list_set_graphic_pane

0x9f4d,	// (0x0002189a) bg_set_opt_pane_cp4

0xb1ec,	// (0x00022b39) list_set_graphic_pane_g1_ParamLimits

0xb1ec,	// (0x00022b39) list_set_graphic_pane_g1

0xb1f8,	// (0x00022b45) list_set_graphic_pane_g2_ParamLimits

0xb1f8,	// (0x00022b45) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x000270a1) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x000270a1) list_set_graphic_pane_g

0x0009,

0xfad0,	// (0x0002741d) volume_small_pane_cp_g

0xb21c,	// (0x00022b69) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xb21c,	// (0x00022b69) list_double2_large_graphic_pane_g1_cp2

0xb22a,	// (0x00022b77) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xb22a,	// (0x00022b77) list_double2_large_graphic_pane_g2_cp2

0xb23b,	// (0x00022b88) list_double2_large_graphic_pane_g3_cp2

0xb243,	// (0x00022b90) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xb243,	// (0x00022b90) list_double2_large_graphic_pane_t1_cp2

0xb259,	// (0x00022ba6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xb259,	// (0x00022ba6) list_double2_large_graphic_pane_t2_cp2

0xce95,	// (0x000247e2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xce95,	// (0x000247e2) list_double_large_graphic_pane_g1_cp2

0xcea8,	// (0x000247f5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xcea8,	// (0x000247f5) list_double_large_graphic_pane_g2_cp2

0xb3c9,	// (0x00022d16) list_double_large_graphic_pane_g3_cp2

0xceb9,	// (0x00024806) list_double_large_graphic_pane_g4_cp

0xcec1,	// (0x0002480e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xcec1,	// (0x0002480e) list_double_large_graphic_pane_t1_cp2

0xced8,	// (0x00024825) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xced8,	// (0x00024825) list_double_large_graphic_pane_t2_cp2

0xb2b9,	// (0x00022c06) list_double2_graphic_pane_g1_cp2_ParamLimits

0xb2b9,	// (0x00022c06) list_double2_graphic_pane_g1_cp2

0xb2c7,	// (0x00022c14) list_double2_graphic_pane_g2_cp2_ParamLimits

0xb2c7,	// (0x00022c14) list_double2_graphic_pane_g2_cp2

0xb2d8,	// (0x00022c25) list_double2_graphic_pane_g3_cp2

0xb2e2,	// (0x00022c2f) list_double2_graphic_pane_t1_cp2_ParamLimits

0xb2e2,	// (0x00022c2f) list_double2_graphic_pane_t1_cp2

0xb2f8,	// (0x00022c45) list_double2_graphic_pane_t2_cp2_ParamLimits

0xb2f8,	// (0x00022c45) list_double2_graphic_pane_t2_cp2

0xb30a,	// (0x00022c57) list_single_number_heading_pane_g1_cp2_ParamLimits

0xb30a,	// (0x00022c57) list_single_number_heading_pane_g1_cp2

0xb316,	// (0x00022c63) list_single_number_heading_pane_g2_cp2

0xb31e,	// (0x00022c6b) list_single_number_heading_pane_t1_cp2_ParamLimits

0xb31e,	// (0x00022c6b) list_single_number_heading_pane_t1_cp2

0xb334,	// (0x00022c81) list_single_number_heading_pane_t2_cp2_ParamLimits

0xb334,	// (0x00022c81) list_single_number_heading_pane_t2_cp2

0xb348,	// (0x00022c95) list_single_number_heading_pane_t3_cp2_ParamLimits

0xb348,	// (0x00022c95) list_single_number_heading_pane_t3_cp2

0xb30a,	// (0x00022c57) list_single_heading_pane_g1_cp2_ParamLimits

0xb30a,	// (0x00022c57) list_single_heading_pane_g1_cp2

0xb316,	// (0x00022c63) list_single_heading_pane_g2_cp2

0xb31e,	// (0x00022c6b) list_single_heading_pane_t1_cp2_ParamLimits

0xb31e,	// (0x00022c6b) list_single_heading_pane_t1_cp2

0xcc9d,	// (0x000245ea) list_single_heading_pane_t2_cp2_ParamLimits

0xcc9d,	// (0x000245ea) list_single_heading_pane_t2_cp2

0xc100,	// (0x00023a4d) list_double_graphic_pane_g1_cp2_ParamLimits

0xc100,	// (0x00023a4d) list_double_graphic_pane_g1_cp2

0xcbf1,	// (0x0002453e) list_double_graphic_pane_g2_cp2_ParamLimits

0xcbf1,	// (0x0002453e) list_double_graphic_pane_g2_cp2

0xcc00,	// (0x0002454d) list_double_graphic_pane_g3_cp2

0xcc08,	// (0x00024555) list_double_graphic_pane_t1_cp2_ParamLimits

0xcc08,	// (0x00024555) list_double_graphic_pane_t1_cp2

0xcc1e,	// (0x0002456b) list_double_graphic_pane_t2_cp2_ParamLimits

0xcc1e,	// (0x0002456b) list_double_graphic_pane_t2_cp2

0xb3bd,	// (0x00022d0a) list_double_number_pane_g1_cp2_ParamLimits

0xb3bd,	// (0x00022d0a) list_double_number_pane_g1_cp2

0xb3c9,	// (0x00022d16) list_double_number_pane_g2_cp2

0xcbb5,	// (0x00024502) list_double_number_pane_t1_cp2_ParamLimits

0xcbb5,	// (0x00024502) list_double_number_pane_t1_cp2

0xcbc9,	// (0x00024516) list_double_number_pane_t2_cp2_ParamLimits

0xcbc9,	// (0x00024516) list_double_number_pane_t2_cp2

0xcbdf,	// (0x0002452c) list_double_number_pane_t3_cp2_ParamLimits

0xcbdf,	// (0x0002452c) list_double_number_pane_t3_cp2

0xca9e,	// (0x000243eb) list_single_graphic_pane_g1_cp2_ParamLimits

0xca9e,	// (0x000243eb) list_single_graphic_pane_g1_cp2

0xb421,	// (0x00022d6e) list_single_graphic_pane_g2_cp2_ParamLimits

0xb421,	// (0x00022d6e) list_single_graphic_pane_g2_cp2

0xb42d,	// (0x00022d7a) list_single_graphic_pane_g3_cp2

0xca74,	// (0x000243c1) list_single_graphic_pane_t1_cp2_ParamLimits

0xca74,	// (0x000243c1) list_single_graphic_pane_t1_cp2

0xb421,	// (0x00022d6e) list_single_number_pane_g1_cp2_ParamLimits

0xb421,	// (0x00022d6e) list_single_number_pane_g1_cp2

0xb42d,	// (0x00022d7a) list_single_number_pane_g2_cp2

0xca74,	// (0x000243c1) list_single_number_pane_t1_cp2_ParamLimits

0xca74,	// (0x000243c1) list_single_number_pane_t1_cp2

0xca8a,	// (0x000243d7) list_single_number_pane_t2_cp2_ParamLimits

0xca8a,	// (0x000243d7) list_single_number_pane_t2_cp2

0xb22a,	// (0x00022b77) list_double2_pane_g1_cp2_ParamLimits

0xb22a,	// (0x00022b77) list_double2_pane_g1_cp2

0xb23b,	// (0x00022b88) list_double2_pane_g2_cp2

0xb395,	// (0x00022ce2) list_double2_pane_t1_cp2_ParamLimits

0xb395,	// (0x00022ce2) list_double2_pane_t1_cp2

0xb3ab,	// (0x00022cf8) list_double2_pane_t2_cp2_ParamLimits

0xb3ab,	// (0x00022cf8) list_double2_pane_t2_cp2

0xb3bd,	// (0x00022d0a) list_double_pane_g1_cp2_ParamLimits

0xb3bd,	// (0x00022d0a) list_double_pane_g1_cp2

0xb3c9,	// (0x00022d16) list_double_pane_g2_cp2

0xb3d1,	// (0x00022d1e) list_double_pane_t1_cp2_ParamLimits

0xb3d1,	// (0x00022d1e) list_double_pane_t1_cp2

0xb3e7,	// (0x00022d34) list_double_pane_t2_cp2_ParamLimits

0xb3e7,	// (0x00022d34) list_double_pane_t2_cp2

0xb411,	// (0x00022d5e) list_single_pane_cp2_g3

0xb421,	// (0x00022d6e) list_single_pane_g1_cp2_ParamLimits

0xb421,	// (0x00022d6e) list_single_pane_g1_cp2

0xb42d,	// (0x00022d7a) list_single_pane_g2_cp2

0xb435,	// (0x00022d82) list_single_pane_t1_cp2_ParamLimits

0xb435,	// (0x00022d82) list_single_pane_t1_cp2

0xb44d,	// (0x00022d9a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xb44d,	// (0x00022d9a) list_single_large_graphic_pane_g1_cp2

0xb45b,	// (0x00022da8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xb45b,	// (0x00022da8) list_single_large_graphic_pane_g2_cp2

0xb467,	// (0x00022db4) list_single_large_graphic_pane_g3_cp2

0xb46f,	// (0x00022dbc) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xb46f,	// (0x00022dbc) list_single_large_graphic_pane_g4_cp1

0xb489,	// (0x00022dd6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xb489,	// (0x00022dd6) list_single_large_graphic_pane_t1_cp2

0xca3e,	// (0x0002438b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xca3e,	// (0x0002438b) list_single_graphic_heading_pane_g1_cp2

0xca0b,	// (0x00024358) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xca0b,	// (0x00024358) list_single_graphic_heading_pane_g4_cp2

0xb42d,	// (0x00022d7a) list_single_graphic_heading_pane_g5_cp2

0xca4a,	// (0x00024397) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xca4a,	// (0x00024397) list_single_graphic_heading_pane_t1_cp2

0xca60,	// (0x000243ad) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xca60,	// (0x000243ad) list_single_graphic_heading_pane_t2_cp2

0xc9ff,	// (0x0002434c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xc9ff,	// (0x0002434c) list_single_2graphic_pane_g1_cp2

0xca0b,	// (0x00024358) list_single_2graphic_pane_g2_cp2_ParamLimits

0xca0b,	// (0x00024358) list_single_2graphic_pane_g2_cp2

0xb42d,	// (0x00022d7a) list_single_2graphic_pane_g3_cp2

0xca1c,	// (0x00024369) list_single_2graphic_pane_g4_cp2_ParamLimits

0xca1c,	// (0x00024369) list_single_2graphic_pane_g4_cp2

0xca28,	// (0x00024375) list_single_2graphic_pane_t1_cp2_ParamLimits

0xca28,	// (0x00024375) list_single_2graphic_pane_t1_cp2

0x9f43,	// (0x00021890) list_highlight_pane_g10_cp1

0xc5e7,	// (0x00023f34) list_highlight_pane_g1_cp1

0xc5ef,	// (0x00023f3c) list_highlight_pane_g2_cp1

0xc5f7,	// (0x00023f44) list_highlight_pane_g3_cp1

0xc5ff,	// (0x00023f4c) list_highlight_pane_g4_cp1

0xc607,	// (0x00023f54) list_highlight_pane_g5_cp1

0xc60f,	// (0x00023f5c) list_highlight_pane_g6_cp1

0xc617,	// (0x00023f64) list_highlight_pane_g7_cp1

0xc61f,	// (0x00023f6c) list_highlight_pane_g8_cp1

0xc627,	// (0x00023f74) list_highlight_pane_g9_cp1

0xc4ff,	// (0x00023e4c) form_field_slider_pane_t3

0xc50d,	// (0x00023e5a) form_field_slider_pane_t4

0xc51b,	// (0x00023e68) slider_form_pane_ParamLimits

0xc51b,	// (0x00023e68) slider_form_pane

0x9f4d,	// (0x0002189a) control_abbreviations

0x9f4d,	// (0x0002189a) control_conventions

0x9f4d,	// (0x0002189a) control_definitions

0x9f4d,	// (0x0002189a) format_table_attribute

0xcce9,	// (0x00024636) bg_popup_preview_window_pane_g9

0x9f4d,	// (0x0002189a) format_table_data2

0x9f4d,	// (0x0002189a) format_table_data3

0x9f4d,	// (0x0002189a) format_table_data_example

0x0008,

0x9f4d,	// (0x0002189a) intro_purpose

0xf8e4,	// (0x00027231) bg_popup_preview_window_pane_g

0x9f4d,	// (0x0002189a) texts_category

0x9f4d,	// (0x0002189a) texts_graphics

0xb49f,	// (0x00022dec) text_digital

0xb4ae,	// (0x00022dfb) text_primary

0xb4bd,	// (0x00022e0a) text_primary_small

0xb4cc,	// (0x00022e19) text_secondary

0xb4db,	// (0x00022e28) text_title

0xd405,	// (0x00024d52) bg_passive_tab_pane_g1_cp3_srt

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp3_srt

0xd40e,	// (0x00024d5b) bg_passive_tab_pane_g3_cp3_srt

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp3_srt_ParamLimits

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp3_srt

0xd417,	// (0x00024d64) tabs_4_active_pane_srt_g1

0xd41f,	// (0x00024d6c) tabs_4_active_pane_srt_t1_ParamLimits

0xd41f,	// (0x00024d6c) tabs_4_active_pane_srt_t1

0xd405,	// (0x00024d52) bg_active_tab_pane_g1_cp3_copy1

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp3_copy1

0xd40e,	// (0x00024d5b) bg_active_tab_pane_g3_cp3_copy1

0xa02d,	// (0x0002197a) tabs_2_long_active_pane_srt_ParamLimits

0xa02d,	// (0x0002197a) tabs_2_long_active_pane_srt

0xa02d,	// (0x0002197a) tabs_2_long_passive_pane_srt_ParamLimits

0xa02d,	// (0x0002197a) tabs_2_long_passive_pane_srt

0xaa6d,	// (0x000223ba) bg_passive_tab_pane_cp4_srt_ParamLimits

0xaa6d,	// (0x000223ba) bg_passive_tab_pane_cp4_srt

0xd12e,	// (0x00024a7b) bg_passive_tab_pane_g1_cp4_srt

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp4_srt

0xd137,	// (0x00024a84) bg_passive_tab_pane_g3_cp4_srt

0xaa4c,	// (0x00022399) bg_active_tab_pane_cp4_srt_ParamLimits

0xaa4c,	// (0x00022399) bg_active_tab_pane_cp4_srt

0xd140,	// (0x00024a8d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd140,	// (0x00024a8d) tabs_2_long_active_pane_srt_t1

0xd12e,	// (0x00024a7b) bg_active_tab_pane_g1_cp4_srt

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp4_srt

0xd137,	// (0x00024a84) bg_active_tab_pane_g3_cp4_srt

0xa2a8,	// (0x00021bf5) tabs_3_long_active_pane_srt_ParamLimits

0xa2a8,	// (0x00021bf5) tabs_3_long_active_pane_srt

0xa2a8,	// (0x00021bf5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa2a8,	// (0x00021bf5) tabs_3_long_passive_pane_cp_srt

0xa2a8,	// (0x00021bf5) tabs_3_long_passive_pane_srt_ParamLimits

0xa2a8,	// (0x00021bf5) tabs_3_long_passive_pane_srt

0xaa6d,	// (0x000223ba) bg_passive_tab_pane_cp5_srt_ParamLimits

0xaa6d,	// (0x000223ba) bg_passive_tab_pane_cp5_srt

0xb1bc,	// (0x00022b09) bg_passive_tab_pane_g1_cp5_srt

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp5_srt

0xb1c5,	// (0x00022b12) bg_passive_tab_pane_g3_cp5_srt

0xaa4c,	// (0x00022399) bg_active_tab_pane_cp5_srt_ParamLimits

0xaa4c,	// (0x00022399) bg_active_tab_pane_cp5_srt

0xd11c,	// (0x00024a69) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd11c,	// (0x00024a69) tabs_3_long_active_pane_srt_t1

0xb1bc,	// (0x00022b09) bg_active_tab_pane_g1_cp5_srt

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp5_srt

0xb1c5,	// (0x00022b12) bg_active_tab_pane_g3_cp5_srt

0xd10e,	// (0x00024a5b) navi_text_pane_srt_t1

0xd106,	// (0x00024a53) navi_icon_pane_srt_g1

0xb69e,	// (0x00022feb) midp_editing_number_pane_srt

0xb4ea,	// (0x00022e37) midp_ticker_pane_srt

0xb6a6,	// (0x00022ff3) midp_ticker_pane_srt_g1

0xb6ae,	// (0x00022ffb) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x000270c0) midp_ticker_pane_srt_g

0xb6b6,	// (0x00023003) midp_ticker_pane_srt_t1

0xd0f7,	// (0x00024a44) midp_editing_number_pane_t1_copy1

0xaa6d,	// (0x000223ba) listscroll_midp_pane

0xaa6d,	// (0x000223ba) midp_form_pane

0xb556,	// (0x00022ea3) midp_info_popup_window_ParamLimits

0xb556,	// (0x00022ea3) midp_info_popup_window

0xa938,	// (0x00022285) bg_popup_sub_pane_cp50_ParamLimits

0xa938,	// (0x00022285) bg_popup_sub_pane_cp50

0xc21c,	// (0x00023b69) listscroll_midp_info_pane_ParamLimits

0xc21c,	// (0x00023b69) listscroll_midp_info_pane

0xc204,	// (0x00023b51) listscroll_form_midp_pane_ParamLimits

0xc204,	// (0x00023b51) listscroll_form_midp_pane

0xc210,	// (0x00023b5d) scroll_bar_cp050

0xc1e4,	// (0x00023b31) list_midp_pane

0xdebe,	// (0x0002580b) signal_pane_g2_cp

0xc11e,	// (0x00023a6b) listscroll_midp_info_pane_t1_ParamLimits

0xc11e,	// (0x00023a6b) listscroll_midp_info_pane_t1

0xc136,	// (0x00023a83) listscroll_midp_info_pane_t2_ParamLimits

0xc136,	// (0x00023a83) listscroll_midp_info_pane_t2

0xc174,	// (0x00023ac1) listscroll_midp_info_pane_t3_ParamLimits

0xc174,	// (0x00023ac1) listscroll_midp_info_pane_t3

0xc1ae,	// (0x00023afb) listscroll_midp_info_pane_t4_ParamLimits

0xc1ae,	// (0x00023afb) listscroll_midp_info_pane_t4

0x0003,

0xf81f,	// (0x0002716c) listscroll_midp_info_pane_t_ParamLimits

0xf81f,	// (0x0002716c) listscroll_midp_info_pane_t

0xa9fa,	// (0x00022347) scroll_pane_cp21

0xc0b6,	// (0x00023a03) form_midp_field_choice_group_pane

0xc0bf,	// (0x00023a0c) form_midp_field_text_pane

0xc0f8,	// (0x00023a45) form_midp_field_time_pane

0xc10c,	// (0x00023a59) form_midp_gauge_slider_pane

0xc115,	// (0x00023a62) form_midp_gauge_wait_pane

0x9f4d,	// (0x0002189a) form_midp_image_pane

0x74f0,	// (0x0001ee3d) list_single_midp_pane_ParamLimits

0x74f0,	// (0x0001ee3d) list_single_midp_pane

0xc066,	// (0x000239b3) form_midp_field_text_pane_t1

0xbe18,	// (0x00023765) input_focus_pane_cp050

0xc0a5,	// (0x000239f2) list_midp_form_text_pane

0xc035,	// (0x00023982) form_midp_field_choice_group_pane_t1

0xc043,	// (0x00023990) input_focus_pane_cp051

0xc057,	// (0x000239a4) list_midp_choice_pane

0x9f4d,	// (0x0002189a) status_idle_pane

0xc019,	// (0x00023966) form_midp_field_time_pane_t1

0x9f43,	// (0x00021890) wait_anim_pane_g2_copy1

0xc027,	// (0x00023974) form_midp_field_time_pane_t2

0x0001,

0xb606,	// (0x00022f53) aid_navinavi_width_2_pane

0xf81a,	// (0x00027167) form_midp_field_time_pane_t

0x9f4d,	// (0x0002189a) input_focus_pane_cp052

0x9f4d,	// (0x0002189a) bg_input_focus_pane_cp040

0xbfd9,	// (0x00023926) form_midp_gauge_slider_pane_t1

0xbfe7,	// (0x00023934) form_midp_gauge_slider_pane_t2

0xbff5,	// (0x00023942) form_midp_gauge_slider_pane_t3

0xc003,	// (0x00023950) form_midp_gauge_slider_pane_t4

0x0003,

0xf811,	// (0x0002715e) form_midp_gauge_slider_pane_t

0xc011,	// (0x0002395e) form_midp_slider_pane

0xa02d,	// (0x0002197a) bg_input_focus_pane_cp041_ParamLimits

0xa02d,	// (0x0002197a) bg_input_focus_pane_cp041

0xbfa6,	// (0x000238f3) form_midp_gauge_wait_pane_t1_ParamLimits

0xbfa6,	// (0x000238f3) form_midp_gauge_wait_pane_t1

0xbfb8,	// (0x00023905) form_midp_gauge_wait_pane_t2_ParamLimits

0xbfb8,	// (0x00023905) form_midp_gauge_wait_pane_t2

0x0001,

0xf80c,	// (0x00027159) form_midp_gauge_wait_pane_t_ParamLimits

0xf80c,	// (0x00027159) form_midp_gauge_wait_pane_t

0xbfca,	// (0x00023917) form_midp_wait_pane_ParamLimits

0xbfca,	// (0x00023917) form_midp_wait_pane

0xbf70,	// (0x000238bd) form_midp_image_pane_g1

0xbf79,	// (0x000238c6) form_midp_image_pane_t1

0xbf88,	// (0x000238d5) form_midp_image_pane_t2

0xbf97,	// (0x000238e4) form_midp_image_pane_t3

0x0002,

0xf805,	// (0x00027152) form_midp_image_pane_t

0xbf67,	// (0x000238b4) list_single_midp_pane_g1

0x74e1,	// (0x0001ee2e) list_single_midp_pane_t1

0xbf37,	// (0x00023884) list_midp_form_item_pane_ParamLimits

0xbf37,	// (0x00023884) list_midp_form_item_pane

0xb5ae,	// (0x00022efb) list_midp_form_item_pane_t1

0xb5bd,	// (0x00022f0a) midp_ticker_pane_g1

0xb5c9,	// (0x00022f16) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x000270a6) midp_ticker_pane_g

0xb5d5,	// (0x00022f22) midp_ticker_pane_t1

0xd33a,	// (0x00024c87) midp_editing_number_pane_t1

0xd318,	// (0x00024c65) midp_editing_number_pane

0xd327,	// (0x00024c74) midp_ticker_pane

0xd0e7,	// (0x00024a34) ai_message_heading_pane

0x9f4d,	// (0x0002189a) bg_popup_window_pane_cp14

0xd0ef,	// (0x00024a3c) listscroll_ai_message_pane

0xd071,	// (0x000249be) ai_message_heading_pane_g1_ParamLimits

0xd071,	// (0x000249be) ai_message_heading_pane_g1

0xd07d,	// (0x000249ca) ai_message_heading_pane_g2_ParamLimits

0xd07d,	// (0x000249ca) ai_message_heading_pane_g2

0xd089,	// (0x000249d6) ai_message_heading_pane_g3_ParamLimits

0xd089,	// (0x000249d6) ai_message_heading_pane_g3

0xd095,	// (0x000249e2) ai_message_heading_pane_g4_ParamLimits

0xd095,	// (0x000249e2) ai_message_heading_pane_g4

0x0003,

0xf946,	// (0x00027293) ai_message_heading_pane_g_ParamLimits

0xf946,	// (0x00027293) ai_message_heading_pane_g

0xd0a1,	// (0x000249ee) ai_message_heading_pane_t1_ParamLimits

0xd0a1,	// (0x000249ee) ai_message_heading_pane_t1

0xd0bb,	// (0x00024a08) ai_message_heading_pane_t2_ParamLimits

0xd0bb,	// (0x00024a08) ai_message_heading_pane_t2

0x0001,

0xf94f,	// (0x0002729c) ai_message_heading_pane_t_ParamLimits

0xf94f,	// (0x0002729c) ai_message_heading_pane_t

0xd0cd,	// (0x00024a1a) bg_popup_heading_pane_cp1_ParamLimits

0xd0cd,	// (0x00024a1a) bg_popup_heading_pane_cp1

0xd05f,	// (0x000249ac) list_ai_message_pane_ParamLimits

0xd05f,	// (0x000249ac) list_ai_message_pane

0xa9fa,	// (0x00022347) scroll_pane_cp10

0xcffb,	// (0x00024948) list_ai_message_pane_g1

0xd003,	// (0x00024950) list_ai_message_pane_g2

0x0001,

0xf923,	// (0x00027270) list_ai_message_pane_g

0xd00b,	// (0x00024958) list_ai_message_pane_t1_ParamLimits

0xd00b,	// (0x00024958) list_ai_message_pane_t1

0xd020,	// (0x0002496d) list_ai_message_pane_t2_ParamLimits

0xd020,	// (0x0002496d) list_ai_message_pane_t2

0xd035,	// (0x00024982) list_ai_message_pane_t3_ParamLimits

0xd035,	// (0x00024982) list_ai_message_pane_t3

0xd04a,	// (0x00024997) list_ai_message_pane_t4_ParamLimits

0xd04a,	// (0x00024997) list_ai_message_pane_t4

0x0003,

0xf928,	// (0x00027275) list_ai_message_pane_t_ParamLimits

0xf928,	// (0x00027275) list_ai_message_pane_t

0xcfe5,	// (0x00024932) cell_ai_soft_ind_pane_ParamLimits

0xcfe5,	// (0x00024932) cell_ai_soft_ind_pane

0xb5e7,	// (0x00022f34) cell_ai_soft_ind_pane_g1_ParamLimits

0xb5e7,	// (0x00022f34) cell_ai_soft_ind_pane_g1

0x9f4d,	// (0x0002189a) grid_highlight_cp1

0xb5f4,	// (0x00022f41) text_secondary_cp56_ParamLimits

0xb5f4,	// (0x00022f41) text_secondary_cp56

0xcfba,	// (0x00024907) example_general_pane_ParamLimits

0xcfba,	// (0x00024907) example_general_pane

0xcfc6,	// (0x00024913) example_parent_pane_g1_ParamLimits

0xcfc6,	// (0x00024913) example_parent_pane_g1

0xcfd2,	// (0x0002491f) example_parent_pane_t1_ParamLimits

0xcfd2,	// (0x0002491f) example_parent_pane_t1

0x8a26,	// (0x00020373) popup_preview_text_window_ParamLimits

0x8a26,	// (0x00020373) popup_preview_text_window

0xb419,	// (0x00022d66) list_single_pane_cp2_g4

0xa352,	// (0x00021c9f) bg_popup_preview_window_pane_ParamLimits

0xa352,	// (0x00021c9f) bg_popup_preview_window_pane

0xccf1,	// (0x0002463e) popup_preview_text_window_t1_ParamLimits

0xccf1,	// (0x0002463e) popup_preview_text_window_t1

0xcd0f,	// (0x0002465c) popup_preview_text_window_t2_ParamLimits

0xcd0f,	// (0x0002465c) popup_preview_text_window_t2

0xcd58,	// (0x000246a5) popup_preview_text_window_t3_ParamLimits

0xcd58,	// (0x000246a5) popup_preview_text_window_t3

0xcd9d,	// (0x000246ea) popup_preview_text_window_t4_ParamLimits

0xcd9d,	// (0x000246ea) popup_preview_text_window_t4

0x0004,

0xf8f7,	// (0x00027244) popup_preview_text_window_t_ParamLimits

0xf8f7,	// (0x00027244) popup_preview_text_window_t

0xce1b,	// (0x00024768) scroll_pane_cp11

0xbd28,	// (0x00023675) bg_popup_preview_window_pane_g1

0xccb1,	// (0x000245fe) bg_popup_preview_window_pane_g2

0xccb9,	// (0x00024606) bg_popup_preview_window_pane_g3

0xccc1,	// (0x0002460e) bg_popup_preview_window_pane_g4

0xccc9,	// (0x00024616) bg_popup_preview_window_pane_g5

0xccd1,	// (0x0002461e) bg_popup_preview_window_pane_g6

0xccd9,	// (0x00024626) bg_popup_preview_window_pane_g7

0xcce1,	// (0x0002462e) bg_popup_preview_window_pane_g8

0x7c6e,	// (0x0001f5bb) aid_popup_width_pane

0x8a04,	// (0x00020351) popup_midp_note_alarm_window_ParamLimits

0x8a04,	// (0x00020351) popup_midp_note_alarm_window

0xa874,	// (0x000221c1) data_form_pane_ParamLimits

0x721e,	// (0x0001eb6b) form_field_data_pane_g1

0x7228,	// (0x0001eb75) form_field_data_pane_t1_ParamLimits

0xa880,	// (0x000221cd) input_focus_pane_ParamLimits

0xa88e,	// (0x000221db) data_form_wide_pane_ParamLimits

0x7242,	// (0x0001eb8f) form_field_data_wide_pane_g1

0x724e,	// (0x0001eb9b) form_field_data_wide_pane_t1_ParamLimits

0xa5f1,	// (0x00021f3e) input_focus_pane_cp6_ParamLimits

0xa9a5,	// (0x000222f2) input_popup_find_pane_g1_ParamLimits

0xa9a5,	// (0x000222f2) input_popup_find_pane_g1

0x81c0,	// (0x0001fb0d) aid_navi_side_left_pane

0x81d5,	// (0x0001fb22) aid_navi_side_right_pane

0xc6e2,	// (0x0002402f) bg_popup_window_pane_cp30_ParamLimits

0xc6e2,	// (0x0002402f) bg_popup_window_pane_cp30

0xc75c,	// (0x000240a9) popup_midp_note_alarm_window_g1_ParamLimits

0xc75c,	// (0x000240a9) popup_midp_note_alarm_window_g1

0xc78c,	// (0x000240d9) popup_midp_note_alarm_window_t1_ParamLimits

0xc78c,	// (0x000240d9) popup_midp_note_alarm_window_t1

0xc82d,	// (0x0002417a) popup_midp_note_alarm_window_t2_ParamLimits

0xc82d,	// (0x0002417a) popup_midp_note_alarm_window_t2

0xc8db,	// (0x00024228) popup_midp_note_alarm_window_t3_ParamLimits

0xc8db,	// (0x00024228) popup_midp_note_alarm_window_t3

0xc903,	// (0x00024250) popup_midp_note_alarm_window_t4_ParamLimits

0xc903,	// (0x00024250) popup_midp_note_alarm_window_t4

0xc923,	// (0x00024270) popup_midp_note_alarm_window_t5_ParamLimits

0xc923,	// (0x00024270) popup_midp_note_alarm_window_t5

0x000a,

0xf894,	// (0x000271e1) popup_midp_note_alarm_window_t_ParamLimits

0xf894,	// (0x000271e1) popup_midp_note_alarm_window_t

0xc9cf,	// (0x0002431c) wait_bar_pane_cp1_ParamLimits

0xc9cf,	// (0x0002431c) wait_bar_pane_cp1

0x9f4d,	// (0x0002189a) wait_anim_pane_copy1

0x9f4d,	// (0x0002189a) wait_border_pane_copy1

0xc3c0,	// (0x00023d0d) wait_border_pane_g1_copy1

0x7268,	// (0x0001ebb5) form_field_popup_pane_g1

0x7270,	// (0x0001ebbd) form_field_popup_pane_t1_ParamLimits

0xa880,	// (0x000221cd) input_focus_pane_cp7_ParamLimits

0xa8ba,	// (0x00022207) list_form_pane_ParamLimits

0x728a,	// (0x0001ebd7) form_field_popup_wide_pane_g1

0x7292,	// (0x0001ebdf) form_field_popup_wide_pane_t1_ParamLimits

0xa880,	// (0x000221cd) input_focus_pane_cp8_ParamLimits

0xa8c6,	// (0x00022213) list_form_wide_pane_ParamLimits

0xd48f,	// (0x00024ddc) aid_size_cell_graphic_pane

0x7317,	// (0x0001ec64) data_form_pane_t1_ParamLimits

0x753f,	// (0x0001ee8c) data_form_wide_pane_t1_ParamLimits

0xb8fd,	// (0x0002324a) bg_status_flat_pane

0x9f8d,	// (0x000218da) title_pane_t1_ParamLimits

0x9ff5,	// (0x00021942) title_pane_t2_ParamLimits

0xa01b,	// (0x00021968) title_pane_t3_ParamLimits

0xf55d,	// (0x00026eaa) title_pane_t_ParamLimits

0xae76,	// (0x000227c3) level_1_signal_ParamLimits

0xae83,	// (0x000227d0) level_2_signal_ParamLimits

0xae90,	// (0x000227dd) level_3_signal_ParamLimits

0xae9d,	// (0x000227ea) level_4_signal_ParamLimits

0xaeaa,	// (0x000227f7) level_5_signal_ParamLimits

0xaeb7,	// (0x00022804) level_6_signal_ParamLimits

0xaec4,	// (0x00022811) level_7_signal_ParamLimits

0xae76,	// (0x000227c3) level_1_battery_ParamLimits

0xae83,	// (0x000227d0) level_2_battery_ParamLimits

0xae90,	// (0x000227dd) level_3_battery_ParamLimits

0xae9d,	// (0x000227ea) level_4_battery_ParamLimits

0xaeaa,	// (0x000227f7) level_5_battery_ParamLimits

0xaeb7,	// (0x00022804) level_6_battery_ParamLimits

0xaec4,	// (0x00022811) level_7_battery_ParamLimits

0xc5e7,	// (0x00023f34) bg_status_flat_pane_g1

0xc5ef,	// (0x00023f3c) bg_status_flat_pane_g2

0xc5f7,	// (0x00023f44) bg_status_flat_pane_g3

0xc5ff,	// (0x00023f4c) bg_status_flat_pane_g4

0xc607,	// (0x00023f54) bg_status_flat_pane_g5

0xc60f,	// (0x00023f5c) bg_status_flat_pane_g6

0xc617,	// (0x00023f64) bg_status_flat_pane_g7

0xa043,	// (0x00021990) tabs_3_active_pane_t1_ParamLimits

0xa043,	// (0x00021990) tabs_3_passive_pane_t1_ParamLimits

0xa05d,	// (0x000219aa) tabs_4_active_pane_t1_ParamLimits

0xa05d,	// (0x000219aa) tabs_4_1_passive_pane_t1_ParamLimits

0xaa3a,	// (0x00022387) tabs_2_active_pane_t1_ParamLimits

0xaa3a,	// (0x00022387) tabs_2_passive_pane_t1_ParamLimits

0xaa4c,	// (0x00022399) bg_active_tab_pane_cp4_ParamLimits

0xaa5a,	// (0x000223a7) tabs_2_long_active_pane_t1_ParamLimits

0xaa6d,	// (0x000223ba) bg_passive_tab_pane_cp4_ParamLimits

0x8cbd,	// (0x0002060a) list_single_midp_graphic_pane_t1_ParamLimits

0xaa4c,	// (0x00022399) bg_active_tab_pane_cp5_ParamLimits

0xaa79,	// (0x000223c6) tabs_3_long_active_pane_t1_ParamLimits

0xaa6d,	// (0x000223ba) bg_passive_tab_pane_cp5_ParamLimits

0x8cbd,	// (0x0002060a) list_single_midp_graphic_pane_t1

0xb8fd,	// (0x0002324a) bg_status_flat_pane_ParamLimits

0xb9c0,	// (0x0002330d) indicator_pane_cp2_ParamLimits

0xb9c0,	// (0x0002330d) indicator_pane_cp2

0xbae5,	// (0x00023432) navi_pane_srt_ParamLimits

0xbae5,	// (0x00023432) navi_pane_srt

0xbb09,	// (0x00023456) popup_clock_digital_analogue_window_cp1

0xa10a,	// (0x00021a57) indicator_pane_t1

0xb4ea,	// (0x00022e37) copy_highlight_pane

0xb4ea,	// (0x00022e37) cursor_graphics_pane

0xb4ea,	// (0x00022e37) graphic_within_text_pane

0xb4ea,	// (0x00022e37) link_highlight_pane

0xcdde,	// (0x0002472b) popup_preview_text_window_t5_ParamLimits

0xcdde,	// (0x0002472b) popup_preview_text_window_t5

0xb60e,	// (0x00022f5b) cursor_digital_pane

0xb60e,	// (0x00022f5b) cursor_primary_pane

0xb61f,	// (0x00022f6c) cursor_primary_small_pane

0xb627,	// (0x00022f74) cursor_secondary_pane

0xb62f,	// (0x00022f7c) cursor_title_pane

0xb60e,	// (0x00022f5b) link_highlight_digital_pane

0xb616,	// (0x00022f63) link_highlight_primary_pane

0xb61f,	// (0x00022f6c) link_highlight_primary_small_pane

0xb627,	// (0x00022f74) link_highlight_secondary_pane

0xb62f,	// (0x00022f7c) link_highlight_title_pane

0xb60e,	// (0x00022f5b) copy_highlight_digital_pane

0xb60e,	// (0x00022f5b) copy_highlight_primary_pane

0xb61f,	// (0x00022f6c) copy_highlight_primary_small_pane

0xb627,	// (0x00022f74) copy_highlight_secondary_pane

0xb62f,	// (0x00022f7c) copy_highlight_title_pane

0xb627,	// (0x00022f74) graphic_text_digital_pane

0xc685,	// (0x00023fd2) graphic_text_primary_pane

0xc68e,	// (0x00023fdb) graphic_text_primary_small_pane

0xb61f,	// (0x00022f6c) graphic_text_secondary_pane

0xb60e,	// (0x00022f5b) graphic_text_title_pane

0xb637,	// (0x00022f84) cursor_primary_pane_g1

0xc677,	// (0x00023fc4) cursor_text_primary_t1

0xc65f,	// (0x00023fac) cursor_primary_small_pane_g1

0xc669,	// (0x00023fb6) cursor_text_primary_small_t1

0xc647,	// (0x00023f94) cursor_primary_small_pane_g1_copy1

0xc651,	// (0x00023f9e) cursor_text_primary_small_t1_copy1

0xc62f,	// (0x00023f7c) cursor_text_title_t1

0xc63d,	// (0x00023f8a) cursor_title_pane_g1

0xb637,	// (0x00022f84) cursor_digital_pane_g1

0xb641,	// (0x00022f8e) cursor_text_digital_t1

0xc5d0,	// (0x00023f1d) link_highlight_primary_pane_g1

0xc5d8,	// (0x00023f25) link_highlight_primary_pane_t1

0xb64f,	// (0x00022f9c) link_highlight_primary_small_pane_g1

0xb657,	// (0x00022fa4) link_highlight_primary_small_pane_t1

0xb64f,	// (0x00022f9c) link_highlight_secondary_pane_g1

0xb666,	// (0x00022fb3) link_highlight_secondary_pane_t1

0xc544,	// (0x00023e91) link_highlight_title_pane_g1

0xc54c,	// (0x00023e99) link_highlight_title_pane_t1

0xc52d,	// (0x00023e7a) link_highlight_digital_pane_g1

0xc535,	// (0x00023e82) link_highlight_digital_pane_t1

0xc405,	// (0x00023d52) copy_highlight_primary_pane_g1

0xc40d,	// (0x00023d5a) copy_highlight_primary_pane_t1

0xc3df,	// (0x00023d2c) copy_highlight_primary_small_pane_g1

0xc3f6,	// (0x00023d43) copy_highlight_primary_small_pane_t1

0xb675,	// (0x00022fc2) copy_highlight_secondary_pane_g1

0xb67d,	// (0x00022fca) copy_highlight_secondary_pane_t1

0xc3df,	// (0x00023d2c) copy_highlight_title_pane_g1

0xc3e7,	// (0x00023d34) copy_highlight_title_pane_t1

0xc405,	// (0x00023d52) copy_highlight_digital_pane_g1

0xd69f,	// (0x00024fec) copy_highlight_digital_pane_t1

0xd5b1,	// (0x00024efe) graphic_text_primary_pane_g1

0xd683,	// (0x00024fd0) graphic_text_primary_pane_t1

0xd691,	// (0x00024fde) graphic_text_primary_pane_t2

0x0001,

0xf9c3,	// (0x00027310) graphic_text_primary_pane_t

0xd65f,	// (0x00024fac) graphic_text_primary_small_pane_g1

0xd667,	// (0x00024fb4) graphic_text_primary_small_pane_t1

0xd675,	// (0x00024fc2) graphic_text_primary_small_pane_t2

0x0001,

0xf9be,	// (0x0002730b) graphic_text_primary_small_pane_t

0xd63b,	// (0x00024f88) graphic_text_secondary_pane_g1

0xd643,	// (0x00024f90) graphic_text_secondary_pane_t1

0xd651,	// (0x00024f9e) graphic_text_secondary_pane_t2

0x0001,

0xf9b9,	// (0x00027306) graphic_text_secondary_pane_t

0xd5d5,	// (0x00024f22) graphic_text_title_pane_g1

0xd5dd,	// (0x00024f2a) graphic_text_title_pane_t1

0xd5eb,	// (0x00024f38) graphic_text_title_pane_t2

0x0001,

0xf9b4,	// (0x00027301) graphic_text_title_pane_t

0xd5b1,	// (0x00024efe) graphic_text_digital_pane_g1

0xd5b9,	// (0x00024f06) graphic_text_digital_pane_t1

0xd5c7,	// (0x00024f14) graphic_text_digital_pane_t2

0x0001,

0xf9af,	// (0x000272fc) graphic_text_digital_pane_t

0xa02d,	// (0x0002197a) navi_icon_pane_srt_ParamLimits

0xa02d,	// (0x0002197a) navi_icon_pane_srt

0x9f4d,	// (0x0002189a) navi_midp_pane_srt

0x9f4d,	// (0x0002189a) navi_navi_pane_srt

0xa02d,	// (0x0002197a) navi_text_pane_srt_ParamLimits

0xa02d,	// (0x0002197a) navi_text_pane_srt

0xd57c,	// (0x00024ec9) navi_navi_icon_text_pane_srt

0xd584,	// (0x00024ed1) navi_navi_pane_srt_g1_ParamLimits

0xd584,	// (0x00024ed1) navi_navi_pane_srt_g1

0xd596,	// (0x00024ee3) navi_navi_pane_srt_g2_ParamLimits

0xd596,	// (0x00024ee3) navi_navi_pane_srt_g2

0x0001,

0xf9aa,	// (0x000272f7) navi_navi_pane_srt_g_ParamLimits

0xf9aa,	// (0x000272f7) navi_navi_pane_srt_g

0xd5a8,	// (0x00024ef5) navi_navi_tabs_pane_srt

0xd57c,	// (0x00024ec9) navi_navi_text_pane_srt

0xd57c,	// (0x00024ec9) navi_navi_volume_pane_srt

0xd56d,	// (0x00024eba) navi_navi_text_pane_srt_t1

0x8ffb,	// (0x00020948) navi_navi_volume_pane_srt_g1

0x9003,	// (0x00020950) volume_small_pane_srt_ParamLimits

0x9003,	// (0x00020950) volume_small_pane_srt

0x84a0,	// (0x0001fded) volume_small_pane_srt_g1_ParamLimits

0x84a0,	// (0x0001fded) volume_small_pane_srt_g1

0x84b0,	// (0x0001fdfd) volume_small_pane_srt_g2_ParamLimits

0x84b0,	// (0x0001fdfd) volume_small_pane_srt_g2

0x84c1,	// (0x0001fe0e) volume_small_pane_srt_g3_ParamLimits

0x84c1,	// (0x0001fe0e) volume_small_pane_srt_g3

0x84d2,	// (0x0001fe1f) volume_small_pane_srt_g4_ParamLimits

0x84d2,	// (0x0001fe1f) volume_small_pane_srt_g4

0x84e3,	// (0x0001fe30) volume_small_pane_srt_g5_ParamLimits

0x84e3,	// (0x0001fe30) volume_small_pane_srt_g5

0x84f4,	// (0x0001fe41) volume_small_pane_srt_g6_ParamLimits

0x84f4,	// (0x0001fe41) volume_small_pane_srt_g6

0x8505,	// (0x0001fe52) volume_small_pane_srt_g7_ParamLimits

0x8505,	// (0x0001fe52) volume_small_pane_srt_g7

0x8516,	// (0x0001fe63) volume_small_pane_srt_g8_ParamLimits

0x8516,	// (0x0001fe63) volume_small_pane_srt_g8

0x8527,	// (0x0001fe74) volume_small_pane_srt_g9_ParamLimits

0x8527,	// (0x0001fe74) volume_small_pane_srt_g9

0x8538,	// (0x0001fe85) volume_small_pane_srt_g10_ParamLimits

0x8538,	// (0x0001fe85) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x000270ab) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x000270ab) volume_small_pane_srt_g

0xa3fb,	// (0x00021d48) query_popup_data_pane_cp2

0xd553,	// (0x00024ea0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd553,	// (0x00024ea0) navi_navi_icon_text_pane_srt_t1

0xc685,	// (0x00023fd2) navi_tabs_2_long_pane_srt

0xc685,	// (0x00023fd2) navi_tabs_2_pane_srt

0xc685,	// (0x00023fd2) navi_tabs_3_long_pane_srt

0xc685,	// (0x00023fd2) navi_tabs_3_pane_srt

0xc685,	// (0x00023fd2) navi_tabs_4_pane_srt

0x8fdb,	// (0x00020928) tabs_2_active_pane_srt_ParamLimits

0x8fdb,	// (0x00020928) tabs_2_active_pane_srt

0x8feb,	// (0x00020938) tabs_2_passive_pane_srt_ParamLimits

0x8feb,	// (0x00020938) tabs_2_passive_pane_srt

0xb826,	// (0x00023173) bg_passive_tab_pane_cp1_srt_ParamLimits

0xb826,	// (0x00023173) bg_passive_tab_pane_cp1_srt

0xd51f,	// (0x00024e6c) bg_passive_tab_pane_g1_cp1_srt

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp1_srt

0xd528,	// (0x00024e75) bg_passive_tab_pane_g3_cp1_srt

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp1_srt_ParamLimits

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp1_srt

0xd531,	// (0x00024e7e) tabs_2_active_pane_srt_g1

0xd539,	// (0x00024e86) tabs_2_active_pane_srt_t1_ParamLimits

0xd539,	// (0x00024e86) tabs_2_active_pane_srt_t1

0xd51f,	// (0x00024e6c) bg_active_tab_pane_g1_cp1_srt

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp1_srt

0xd528,	// (0x00024e75) bg_active_tab_pane_g3_cp1_srt

0x8fa8,	// (0x000208f5) tabs_3_active_pane_srt_ParamLimits

0x8fa8,	// (0x000208f5) tabs_3_active_pane_srt

0x8fb9,	// (0x00020906) tabs_3_passive_pane_cp_srt_ParamLimits

0x8fb9,	// (0x00020906) tabs_3_passive_pane_cp_srt

0x8fca,	// (0x00020917) tabs_3_passive_pane_srt_ParamLimits

0x8fca,	// (0x00020917) tabs_3_passive_pane_srt

0xb826,	// (0x00023173) bg_passive_tab_pane_cp2_srt_ParamLimits

0xb826,	// (0x00023173) bg_passive_tab_pane_cp2_srt

0xb68c,	// (0x00022fd9) bg_passive_tab_pane_g1_cp2_srt

0xb132,	// (0x00022a7f) bg_passive_tab_pane_g2_cp2_srt

0xb695,	// (0x00022fe2) bg_passive_tab_pane_g3_cp2_srt

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp2_srt_ParamLimits

0xa02d,	// (0x0002197a) bg_active_tab_pane_cp2_srt

0xd505,	// (0x00024e52) tabs_3_active_pane_srt_g1

0xd50d,	// (0x00024e5a) tabs_3_active_pane_srt_t1_ParamLimits

0xd50d,	// (0x00024e5a) tabs_3_active_pane_srt_t1

0xb68c,	// (0x00022fd9) bg_active_tab_pane_g1_cp2_srt

0xb132,	// (0x00022a7f) bg_active_tab_pane_g2_cp2_srt

0xb695,	// (0x00022fe2) bg_active_tab_pane_g3_cp2_srt

0x8f60,	// (0x000208ad) tabs_4_active_pane_srt_ParamLimits

0x8f60,	// (0x000208ad) tabs_4_active_pane_srt

0x8f72,	// (0x000208bf) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8f72,	// (0x000208bf) tabs_4_passive_pane_cp2_srt

0x8697,	// (0x0001ffe4) aid_size_cell_toolbar

0xaa6d,	// (0x000223ba) main_idle_act_pane_ParamLimits

0x8838,	// (0x00020185) popup_large_graphic_colour_window_ParamLimits

0x8b97,	// (0x000204e4) popup_toolbar_window_ParamLimits

0x8b97,	// (0x000204e4) popup_toolbar_window

0xd349,	// (0x00024c96) list_single_graphic_2heading_pane_ParamLimits

0xd349,	// (0x00024c96) list_single_graphic_2heading_pane

0xac29,	// (0x00022576) aid_size_cell_apps_grid_lsc_pane

0xac3b,	// (0x00022588) aid_size_cell_apps_grid_prt_pane

0xb826,	// (0x00023173) bg_wml_button_pane_cp1_ParamLimits

0xb826,	// (0x00023173) bg_wml_button_pane_cp1

0xc066,	// (0x000239b3) form_midp_field_text_pane_t1_ParamLimits

0xbe18,	// (0x00023765) input_focus_pane_cp050_ParamLimits

0xc0a5,	// (0x000239f2) list_midp_form_text_pane_ParamLimits

0xc043,	// (0x00023990) input_focus_pane_cp051_ParamLimits

0xc057,	// (0x000239a4) list_midp_choice_pane_ParamLimits

0xbed1,	// (0x0002381e) list_single_2graphic_pane_cp3_ParamLimits

0xbed1,	// (0x0002381e) list_single_2graphic_pane_cp3

0xbefd,	// (0x0002384a) list_single_midp_graphic_pane_ParamLimits

0xbefd,	// (0x0002384a) list_single_midp_graphic_pane

0x6da6,	// (0x0001e6f3) list_single_graphic_2heading_pane_g1_ParamLimits

0x6da6,	// (0x0001e6f3) list_single_graphic_2heading_pane_g1

0x6d2c,	// (0x0001e679) list_single_graphic_2heading_pane_g4_ParamLimits

0x6d2c,	// (0x0001e679) list_single_graphic_2heading_pane_g4

0x6d38,	// (0x0001e685) list_single_graphic_2heading_pane_g5_ParamLimits

0x6d38,	// (0x0001e685) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x000270fe) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x000270fe) list_single_graphic_2heading_pane_g

0x745b,	// (0x0001eda8) list_single_graphic_2heading_pane_t1_ParamLimits

0x745b,	// (0x0001eda8) list_single_graphic_2heading_pane_t1

0x746f,	// (0x0001edbc) list_single_graphic_2heading_pane_t2_ParamLimits

0x746f,	// (0x0001edbc) list_single_graphic_2heading_pane_t2

0x7489,	// (0x0001edd6) list_single_graphic_2heading_pane_t3_ParamLimits

0x7489,	// (0x0001edd6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x00027105) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x00027105) list_single_graphic_2heading_pane_t

0xbc66,	// (0x000235b3) bg_popup_sub_pane_cp2

0xbc90,	// (0x000235dd) grid_toobar_pane

0x8c42,	// (0x0002058f) cell_toolbar_pane_ParamLimits

0x8c42,	// (0x0002058f) cell_toolbar_pane

0xbccc,	// (0x00023619) cell_toolbar_pane_g1_ParamLimits

0xbccc,	// (0x00023619) cell_toolbar_pane_g1

0xbce0,	// (0x0002362d) cell_toolbar_pane_g2_ParamLimits

0xbce0,	// (0x0002362d) cell_toolbar_pane_g2

0x0001,

0xf7bf,	// (0x0002710c) cell_toolbar_pane_g_ParamLimits

0xf7bf,	// (0x0002710c) cell_toolbar_pane_g

0xbd02,	// (0x0002364f) grid_highlight_pane_cp2_ParamLimits

0xbd02,	// (0x0002364f) grid_highlight_pane_cp2

0xbd1c,	// (0x00023669) toolbar_button_pane

0xbd28,	// (0x00023675) toolbar_button_pane_g1

0xbd30,	// (0x0002367d) toolbar_button_pane_g2

0xbd38,	// (0x00023685) toolbar_button_pane_g3

0xbd40,	// (0x0002368d) toolbar_button_pane_g4

0xbd48,	// (0x00023695) toolbar_button_pane_g5

0xbd50,	// (0x0002369d) toolbar_button_pane_g6

0xbd58,	// (0x000236a5) toolbar_button_pane_g7

0xbd60,	// (0x000236ad) toolbar_button_pane_g8

0xbd68,	// (0x000236b5) toolbar_button_pane_g9

0x0009,

0xf7c4,	// (0x00027111) toolbar_button_pane_g

0x8c7a,	// (0x000205c7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8c7a,	// (0x000205c7) list_single_2graphic_pane_g1_cp3

0x8c86,	// (0x000205d3) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8c86,	// (0x000205d3) list_single_2graphic_pane_g2_cp3

0xb316,	// (0x00022c63) list_single_2graphic_pane_g3_cp3

0x8c97,	// (0x000205e4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8c97,	// (0x000205e4) list_single_2graphic_pane_g4_cp3

0x8ca3,	// (0x000205f0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8ca3,	// (0x000205f0) list_single_2graphic_pane_t1_cp3

0xb30a,	// (0x00022c57) list_single_midp_graphic_pane_g2_ParamLimits

0xb30a,	// (0x00022c57) list_single_midp_graphic_pane_g2

0x869f,	// (0x0001ffec) aid_zoom_text_primary

0x744b,	// (0x0001ed98) aid_zoom_text_secondary

0xb749,	// (0x00023096) status_small_pane_g7_ParamLimits

0xb749,	// (0x00023096) status_small_pane_g7

0xb76c,	// (0x000230b9) status_small_pane_t1_ParamLimits

0x9f64,	// (0x000218b1) title_pane_g2

0x0003,

0xf554,	// (0x00026ea1) title_pane_g

0xa49c,	// (0x00021de9) aid_size_cell_colour_1_pane_ParamLimits

0xa49c,	// (0x00021de9) aid_size_cell_colour_1_pane

0xa4b0,	// (0x00021dfd) aid_size_cell_colour_2_pane_ParamLimits

0xa4b0,	// (0x00021dfd) aid_size_cell_colour_2_pane

0xa4c4,	// (0x00021e11) aid_size_cell_colour_3_pane_ParamLimits

0xa4c4,	// (0x00021e11) aid_size_cell_colour_3_pane

0xa4d8,	// (0x00021e25) aid_size_cell_colour_4_pane_ParamLimits

0xa4d8,	// (0x00021e25) aid_size_cell_colour_4_pane

0x80fc,	// (0x0001fa49) title_pane_stacon_g1_ParamLimits

0x80fc,	// (0x0001fa49) title_pane_stacon_g1

0xc464,	// (0x00023db1) popup_note_wait_window_g3_ParamLimits

0xc464,	// (0x00023db1) popup_note_wait_window_g3

0xc4da,	// (0x00023e27) popup_note_wait_window_t5_ParamLimits

0xc4da,	// (0x00023e27) popup_note_wait_window_t5

0x9f4d,	// (0x0002189a) main_feb_china_hwr_fs_writing_pane

0x8723,	// (0x00020070) popup_feb_china_hwr_fs_window_ParamLimits

0x8723,	// (0x00020070) popup_feb_china_hwr_fs_window

0x8cd3,	// (0x00020620) aid_size_cell_hwr_fs_ParamLimits

0x8cd3,	// (0x00020620) aid_size_cell_hwr_fs

0xbe18,	// (0x00023765) bg_popup_sub_pane_cp3_ParamLimits

0xbe18,	// (0x00023765) bg_popup_sub_pane_cp3

0x8ce8,	// (0x00020635) grid_hwr_fs_pane_ParamLimits

0x8ce8,	// (0x00020635) grid_hwr_fs_pane

0x8d00,	// (0x0002064d) linegrid_hwr_fs_pane_ParamLimits

0x8d00,	// (0x0002064d) linegrid_hwr_fs_pane

0x8d10,	// (0x0002065d) cell_hwr_fs_pane_ParamLimits

0x8d10,	// (0x0002065d) cell_hwr_fs_pane

0xbe24,	// (0x00023771) linegrid_hwr_fs_pane_g1_ParamLimits

0xbe24,	// (0x00023771) linegrid_hwr_fs_pane_g1

0xbe30,	// (0x0002377d) linegrid_hwr_fs_pane_g2_ParamLimits

0xbe30,	// (0x0002377d) linegrid_hwr_fs_pane_g2

0xbe42,	// (0x0002378f) linegrid_hwr_fs_pane_g3_ParamLimits

0xbe42,	// (0x0002378f) linegrid_hwr_fs_pane_g3

0x8d32,	// (0x0002067f) linegrid_hwr_fs_pane_g4_ParamLimits

0x8d32,	// (0x0002067f) linegrid_hwr_fs_pane_g4

0x8d4c,	// (0x00020699) linegrid_hwr_fs_pane_g5_ParamLimits

0x8d4c,	// (0x00020699) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ea,	// (0x00027137) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ea,	// (0x00027137) linegrid_hwr_fs_pane_g

0xbe4e,	// (0x0002379b) cell_hwr_fs_pane_g1_ParamLimits

0xbe4e,	// (0x0002379b) cell_hwr_fs_pane_g1

0xbb9f,	// (0x000234ec) cell_hwr_fs_pane_g2_ParamLimits

0xbb9f,	// (0x000234ec) cell_hwr_fs_pane_g2

0xbe64,	// (0x000237b1) cell_hwr_fs_pane_g3_ParamLimits

0xbe64,	// (0x000237b1) cell_hwr_fs_pane_g3

0xbe71,	// (0x000237be) cell_hwr_fs_pane_g4_ParamLimits

0xbe71,	// (0x000237be) cell_hwr_fs_pane_g4

0x0003,

0xf7f5,	// (0x00027142) cell_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00027142) cell_hwr_fs_pane_g

0x8d62,	// (0x000206af) cell_hwr_fs_pane_t1

0x9f4d,	// (0x0002189a) grid_highlight_pane_cp6

0x9f4d,	// (0x0002189a) main_idle_act2_pane

0xa9e1,	// (0x0002232e) aid_inside_area_popup_secondary

0xcb0b,	// (0x00024458) aid_inside_area_window_primary_ParamLimits

0xcb0b,	// (0x00024458) aid_inside_area_window_primary

0xd6ae,	// (0x00024ffb) ai2_news_ticker_pane

0xd6b6,	// (0x00025003) aid_size_cell_ai1_link_ParamLimits

0xd6b6,	// (0x00025003) aid_size_cell_ai1_link

0xd6d0,	// (0x0002501d) popup_ai2_data_window_ParamLimits

0xd6d0,	// (0x0002501d) popup_ai2_data_window

0xd6e4,	// (0x00025031) popup_ai2_link_window_ParamLimits

0xd6e4,	// (0x00025031) popup_ai2_link_window

0xbe18,	// (0x00023765) bg_popup_sub_pane_cp4_ParamLimits

0xbe18,	// (0x00023765) bg_popup_sub_pane_cp4

0xd6f8,	// (0x00025045) grid_ai2_link_pane_ParamLimits

0xd6f8,	// (0x00025045) grid_ai2_link_pane

0xd70f,	// (0x0002505c) popup_ai2_link_window_g1_ParamLimits

0xd70f,	// (0x0002505c) popup_ai2_link_window_g1

0xd71b,	// (0x00025068) popup_ai2_link_window_g2_ParamLimits

0xd71b,	// (0x00025068) popup_ai2_link_window_g2

0x0001,

0xf9c8,	// (0x00027315) popup_ai2_link_window_g_ParamLimits

0xf9c8,	// (0x00027315) popup_ai2_link_window_g

0xd72a,	// (0x00025077) ai2_mp_button_pane

0xd732,	// (0x0002507f) ai2_mp_volume_pane

0xc043,	// (0x00023990) bg_popup_sub_pane_cp5_ParamLimits

0xc043,	// (0x00023990) bg_popup_sub_pane_cp5

0xd73a,	// (0x00025087) heading_ai2_gene_pane_ParamLimits

0xd73a,	// (0x00025087) heading_ai2_gene_pane

0xd746,	// (0x00025093) list_ai2_gene_pane_ParamLimits

0xd746,	// (0x00025093) list_ai2_gene_pane

0xd78e,	// (0x000250db) cell_ai2_link_pane_ParamLimits

0xd78e,	// (0x000250db) cell_ai2_link_pane

0xd7a4,	// (0x000250f1) cell_ai2_link_pane_g1

0x9f4d,	// (0x0002189a) grid_highlight_pane_cp7

0x9018,	// (0x00020965) ai2_mp_volume_pane_g1

0xd875,	// (0x000251c2) ai2_mp_volume_pane_g2

0xd7ea,	// (0x00025137) list_ai2_gene_pane_t1

0xd87d,	// (0x000251ca) ai2_mp_volume_pane_g3

0x0002,

0xf9e1,	// (0x0002732e) ai2_mp_volume_pane_g

0x9020,	// (0x0002096d) volume_small_pane_cp3

0xd885,	// (0x000251d2) aid_size_cell_ai2_button

0xd88d,	// (0x000251da) grid_ai2_button_pane

0xd896,	// (0x000251e3) cell_ai2_button_pane_ParamLimits

0xd896,	// (0x000251e3) cell_ai2_button_pane

0x9f43,	// (0x00021890) cell_ai2_button_pane_g1

0x9f4d,	// (0x0002189a) grid_highlight_pane_cp8

0xd835,	// (0x00025182) ai2_gene_pane_t1_ParamLimits

0xd835,	// (0x00025182) ai2_gene_pane_t1

0x868d,	// (0x0001ffda) aid_height_parent_landscape

0xd188,	// (0x00024ad5) aid_height_set_list

0xd199,	// (0x00024ae6) aid_size_parent

0xd48f,	// (0x00024ddc) aid_size_cell_graphic_pane_ParamLimits

0xd756,	// (0x000250a3) popup_ai2_data_window_g1_ParamLimits

0xd756,	// (0x000250a3) popup_ai2_data_window_g1

0xd762,	// (0x000250af) ai2_news_ticker_pane_g1

0xd76a,	// (0x000250b7) ai2_news_ticker_pane_g2

0x0001,

0xf9cd,	// (0x0002731a) ai2_news_ticker_pane_g

0xd772,	// (0x000250bf) ai2_news_ticker_pane_t1

0xd780,	// (0x000250cd) ai2_news_ticker_pane_t2

0x0001,

0xf9d2,	// (0x0002731f) ai2_news_ticker_pane_t

0xd7ad,	// (0x000250fa) heading_ai2_gene_pane_g1

0xd7b5,	// (0x00025102) heading_ai2_gene_pane_t1_ParamLimits

0xd7b5,	// (0x00025102) heading_ai2_gene_pane_t1

0xd7ca,	// (0x00025117) list_highlight_pane_cp6

0xd7d2,	// (0x0002511f) ai2_gene_pane_ParamLimits

0xd7d2,	// (0x0002511f) ai2_gene_pane

0xd7f8,	// (0x00025145) list_ai2_gene_pane_t2

0x0001,

0xf9d7,	// (0x00027324) list_ai2_gene_pane_t

0xd806,	// (0x00025153) list_highlight_pane_cp8_ParamLimits

0xd806,	// (0x00025153) list_highlight_pane_cp8

0xd817,	// (0x00025164) ai2_gene_pane_g1_ParamLimits

0xd817,	// (0x00025164) ai2_gene_pane_g1

0xd829,	// (0x00025176) ai2_gene_pane_g2_ParamLimits

0xd829,	// (0x00025176) ai2_gene_pane_g2

0x0001,

0xf9dc,	// (0x00027329) ai2_gene_pane_g_ParamLimits

0xf9dc,	// (0x00027329) ai2_gene_pane_g

0xa816,	// (0x00022163) scroll_pane_cp12

0x864c,	// (0x0001ff99) control_pane_t3_ParamLimits

0x864c,	// (0x0001ff99) control_pane_t3

0xb75d,	// (0x000230aa) status_small_pane_g8_ParamLimits

0xb75d,	// (0x000230aa) status_small_pane_g8

0x8805,	// (0x00020152) popup_find_window_ParamLimits

0x8a18,	// (0x00020365) popup_note_image_window_ParamLimits

0x6da6,	// (0x0001e6f3) list_double2_graphic_pane_vc_g1_ParamLimits

0x6da6,	// (0x0001e6f3) list_double2_graphic_pane_vc_g1

0x6d2c,	// (0x0001e679) list_double2_graphic_pane_vc_g2_ParamLimits

0x6d2c,	// (0x0001e679) list_double2_graphic_pane_vc_g2

0x6d38,	// (0x0001e685) list_double2_graphic_pane_vc_g3_ParamLimits

0x6d38,	// (0x0001e685) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b1,	// (0x000270fe) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b1,	// (0x000270fe) list_double2_graphic_pane_vc_g

0x74a1,	// (0x0001edee) list_double2_graphic_pane_vc_t1_ParamLimits

0x74a1,	// (0x0001edee) list_double2_graphic_pane_vc_t1

0x6d2c,	// (0x0001e679) list_single_heading_pane_vc_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_single_heading_pane_vc_g1

0x6d38,	// (0x0001e685) list_single_heading_pane_vc_g2_ParamLimits

0x6d38,	// (0x0001e685) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_single_heading_pane_vc_g

0x74b7,	// (0x0001ee04) list_single_heading_pane_vc_t1_ParamLimits

0x74b7,	// (0x0001ee04) list_single_heading_pane_vc_t1

0x74cd,	// (0x0001ee1a) list_single_heading_pane_vc_t2_ParamLimits

0x74cd,	// (0x0001ee1a) list_single_heading_pane_vc_t2

0x0001,

0xf7d9,	// (0x00027126) list_single_heading_pane_vc_t_ParamLimits

0xf7d9,	// (0x00027126) list_single_heading_pane_vc_t

0xbd70,	// (0x000236bd) list_setting_number_pane_vc_g1_ParamLimits

0xbd70,	// (0x000236bd) list_setting_number_pane_vc_g1

0xbd7c,	// (0x000236c9) list_setting_number_pane_vc_g2_ParamLimits

0xbd7c,	// (0x000236c9) list_setting_number_pane_vc_g2

0x0001,

0xf7de,	// (0x0002712b) list_setting_number_pane_vc_g_ParamLimits

0xf7de,	// (0x0002712b) list_setting_number_pane_vc_g

0xbd88,	// (0x000236d5) list_setting_number_pane_vc_t1_ParamLimits

0xbd88,	// (0x000236d5) list_setting_number_pane_vc_t1

0xbd9c,	// (0x000236e9) list_setting_number_pane_vc_t2_ParamLimits

0xbd9c,	// (0x000236e9) list_setting_number_pane_vc_t2

0xbdb6,	// (0x00023703) list_setting_number_pane_vc_t3_ParamLimits

0xbdb6,	// (0x00023703) list_setting_number_pane_vc_t3

0x0002,

0xf7e3,	// (0x00027130) list_setting_number_pane_vc_t_ParamLimits

0xf7e3,	// (0x00027130) list_setting_number_pane_vc_t

0xbddc,	// (0x00023729) set_value_pane_vc_ParamLimits

0xbddc,	// (0x00023729) set_value_pane_vc

0xd349,	// (0x00024c96) list_double2_graphic_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_double2_graphic_pane_vc

0xd35d,	// (0x00024caa) list_double2_large_graphic_pane_vc_ParamLimits

0xd35d,	// (0x00024caa) list_double2_large_graphic_pane_vc

0xd349,	// (0x00024c96) list_double2_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_double2_pane_vc

0xd349,	// (0x00024c96) list_double_graphic_heading_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_double_graphic_heading_pane_vc

0xd349,	// (0x00024c96) list_double_graphic_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_double_graphic_pane_vc

0xd349,	// (0x00024c96) list_double_heading_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_double_heading_pane_vc

0xd35d,	// (0x00024caa) list_double_large_graphic_pane_vc_ParamLimits

0xd35d,	// (0x00024caa) list_double_large_graphic_pane_vc

0xd349,	// (0x00024c96) list_double_number_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_double_number_pane_vc

0xd349,	// (0x00024c96) list_double_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_double_pane_vc

0xd349,	// (0x00024c96) list_double_time_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_double_time_pane_vc

0xd349,	// (0x00024c96) list_setting_number_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_setting_number_pane_vc

0xd349,	// (0x00024c96) list_setting_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_setting_pane_vc

0xd349,	// (0x00024c96) list_single_graphic_heading_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_single_graphic_heading_pane_vc

0xd349,	// (0x00024c96) list_single_heading_pane_vc_ParamLimits

0xd349,	// (0x00024c96) list_single_heading_pane_vc

0x75a5,	// (0x0001eef2) list_single_number_heading_pane_vc_ParamLimits

0x75a5,	// (0x0001eef2) list_single_number_heading_pane_vc

0x6da6,	// (0x0001e6f3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6da6,	// (0x0001e6f3) list_double_graphic_heading_pane_vc_g1

0x6d2c,	// (0x0001e679) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6d2c,	// (0x0001e679) list_double_graphic_heading_pane_vc_g2

0x6d38,	// (0x0001e685) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6d38,	// (0x0001e685) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b1,	// (0x000270fe) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b1,	// (0x000270fe) list_double_graphic_heading_pane_vc_g

0x7662,	// (0x0001efaf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7662,	// (0x0001efaf) list_double_graphic_heading_pane_vc_t1

0x74b7,	// (0x0001ee04) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x74b7,	// (0x0001ee04) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e8,	// (0x00027335) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e8,	// (0x00027335) list_double_graphic_heading_pane_vc_t

0xbd70,	// (0x000236bd) list_setting_pane_vc_g1_ParamLimits

0xbd70,	// (0x000236bd) list_setting_pane_vc_g1

0xbd7c,	// (0x000236c9) list_setting_pane_vc_g2_ParamLimits

0xbd7c,	// (0x000236c9) list_setting_pane_vc_g2

0x0001,

0xf7de,	// (0x0002712b) list_setting_pane_vc_g_ParamLimits

0xf7de,	// (0x0002712b) list_setting_pane_vc_g

0xdac2,	// (0x0002540f) list_setting_pane_vc_t1_ParamLimits

0xdac2,	// (0x0002540f) list_setting_pane_vc_t1

0xdadc,	// (0x00025429) list_setting_pane_vc_t2_ParamLimits

0xdadc,	// (0x00025429) list_setting_pane_vc_t2

0x0001,

0xfa2b,	// (0x00027378) list_setting_pane_vc_t_ParamLimits

0xfa2b,	// (0x00027378) list_setting_pane_vc_t

0xbddc,	// (0x00023729) set_value_pane_cp_vc_ParamLimits

0xbddc,	// (0x00023729) set_value_pane_cp_vc

0x6d2c,	// (0x0001e679) list_single_number_heading_pane_vc_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_single_number_heading_pane_vc_g1

0x6d38,	// (0x0001e685) list_single_number_heading_pane_vc_g2_ParamLimits

0x6d38,	// (0x0001e685) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_single_number_heading_pane_vc_g

0x74b7,	// (0x0001ee04) list_single_number_heading_pane_vc_t1_ParamLimits

0x74b7,	// (0x0001ee04) list_single_number_heading_pane_vc_t1

0x7676,	// (0x0001efc3) list_single_number_heading_pane_vc_t2_ParamLimits

0x7676,	// (0x0001efc3) list_single_number_heading_pane_vc_t2

0x6d94,	// (0x0001e6e1) list_single_number_heading_pane_vc_t3_ParamLimits

0x6d94,	// (0x0001e6e1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa30,	// (0x0002737d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x0002737d) list_single_number_heading_pane_vc_t

0x6da6,	// (0x0001e6f3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6da6,	// (0x0001e6f3) list_single_graphic_heading_pane_vc_g1

0x6d2c,	// (0x0001e679) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6d2c,	// (0x0001e679) list_single_graphic_heading_pane_vc_g4

0x6d38,	// (0x0001e685) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6d38,	// (0x0001e685) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b1,	// (0x000270fe) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b1,	// (0x000270fe) list_single_graphic_heading_pane_vc_g

0x74b7,	// (0x0001ee04) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x74b7,	// (0x0001ee04) list_single_graphic_heading_pane_vc_t1

0x768a,	// (0x0001efd7) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x768a,	// (0x0001efd7) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa37,	// (0x00027384) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x00027384) list_single_graphic_heading_pane_vc_t

0x6d2c,	// (0x0001e679) list_double2_pane_vc_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_double2_pane_vc_g1

0x6d38,	// (0x0001e685) list_double2_pane_vc_g2_ParamLimits

0x6d38,	// (0x0001e685) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_double2_pane_vc_g

0x756d,	// (0x0001eeba) list_double2_pane_vc_t1_ParamLimits

0x756d,	// (0x0001eeba) list_double2_pane_vc_t1

0x769e,	// (0x0001efeb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x769e,	// (0x0001efeb) list_double2_large_graphic_pane_vc_g1

0x76aa,	// (0x0001eff7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x76aa,	// (0x0001eff7) list_double2_large_graphic_pane_vc_g2

0x76b6,	// (0x0001f003) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x76b6,	// (0x0001f003) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3c,	// (0x00027389) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x00027389) list_double2_large_graphic_pane_vc_g

0x76c2,	// (0x0001f00f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x76c2,	// (0x0001f00f) list_double2_large_graphic_pane_vc_t1

0x76d8,	// (0x0001f025) list_double_time_pane_vc_g1_ParamLimits

0x76d8,	// (0x0001f025) list_double_time_pane_vc_g1

0x76e4,	// (0x0001f031) list_double_time_pane_vc_g2_ParamLimits

0x76e4,	// (0x0001f031) list_double_time_pane_vc_g2

0x0001,

0xfa43,	// (0x00027390) list_double_time_pane_vc_g_ParamLimits

0xfa43,	// (0x00027390) list_double_time_pane_vc_g

0x76f0,	// (0x0001f03d) list_double_time_pane_vc_t1_ParamLimits

0x76f0,	// (0x0001f03d) list_double_time_pane_vc_t1

0x770e,	// (0x0001f05b) list_double_time_pane_vc_t2_ParamLimits

0x770e,	// (0x0001f05b) list_double_time_pane_vc_t2

0x775d,	// (0x0001f0aa) list_double_time_pane_vc_t3_ParamLimits

0x775d,	// (0x0001f0aa) list_double_time_pane_vc_t3

0x776f,	// (0x0001f0bc) list_double_time_pane_vc_t4_ParamLimits

0x776f,	// (0x0001f0bc) list_double_time_pane_vc_t4

0x0003,

0xfa48,	// (0x00027395) list_double_time_pane_vc_t_ParamLimits

0xfa48,	// (0x00027395) list_double_time_pane_vc_t

0x6d2c,	// (0x0001e679) list_double_pane_vc_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_double_pane_vc_g1

0x6d38,	// (0x0001e685) list_double_pane_vc_g2_ParamLimits

0x6d38,	// (0x0001e685) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_double_pane_vc_g

0x7783,	// (0x0001f0d0) list_double_pane_vc_t1_ParamLimits

0x7783,	// (0x0001f0d0) list_double_pane_vc_t1

0x7795,	// (0x0001f0e2) list_double_pane_vc_t2_ParamLimits

0x7795,	// (0x0001f0e2) list_double_pane_vc_t2

0x0001,

0xfa51,	// (0x0002739e) list_double_pane_vc_t_ParamLimits

0xfa51,	// (0x0002739e) list_double_pane_vc_t

0x6d2c,	// (0x0001e679) list_double_number_pane_vc_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_double_number_pane_vc_g1

0x6d38,	// (0x0001e685) list_double_number_pane_vc_g2_ParamLimits

0x6d38,	// (0x0001e685) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_double_number_pane_vc_g

0x77ad,	// (0x0001f0fa) list_double_number_pane_vc_t1_ParamLimits

0x77ad,	// (0x0001f0fa) list_double_number_pane_vc_t1

0x77c1,	// (0x0001f10e) list_double_number_pane_vc_t2_ParamLimits

0x77c1,	// (0x0001f10e) list_double_number_pane_vc_t2

0x7795,	// (0x0001f0e2) list_double_number_pane_vc_t3_ParamLimits

0x7795,	// (0x0001f0e2) list_double_number_pane_vc_t3

0x0002,

0xfa56,	// (0x000273a3) list_double_number_pane_vc_t_ParamLimits

0xfa56,	// (0x000273a3) list_double_number_pane_vc_t

0x77d3,	// (0x0001f120) list_double_large_graphic_pane_vc_g1_ParamLimits

0x77d3,	// (0x0001f120) list_double_large_graphic_pane_vc_g1

0x77e4,	// (0x0001f131) list_double_large_graphic_pane_vc_g2_ParamLimits

0x77e4,	// (0x0001f131) list_double_large_graphic_pane_vc_g2

0x76b6,	// (0x0001f003) list_double_large_graphic_pane_vc_g3_ParamLimits

0x76b6,	// (0x0001f003) list_double_large_graphic_pane_vc_g3

0x77f3,	// (0x0001f140) list_double_large_graphic_pane_vc_g4_ParamLimits

0x77f3,	// (0x0001f140) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5d,	// (0x000273aa) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x000273aa) list_double_large_graphic_pane_vc_g

0x77ff,	// (0x0001f14c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x77ff,	// (0x0001f14c) list_double_large_graphic_pane_vc_t1

0x7816,	// (0x0001f163) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7816,	// (0x0001f163) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa66,	// (0x000273b3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa66,	// (0x000273b3) list_double_large_graphic_pane_vc_t

0x6d2c,	// (0x0001e679) list_double_heading_pane_vc_g1_ParamLimits

0x6d2c,	// (0x0001e679) list_double_heading_pane_vc_g1

0x6d38,	// (0x0001e685) list_double_heading_pane_vc_g2_ParamLimits

0x6d38,	// (0x0001e685) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00026f1b) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00026f1b) list_double_heading_pane_vc_g

0x782f,	// (0x0001f17c) list_double_heading_pane_vc_t1_ParamLimits

0x782f,	// (0x0001f17c) list_double_heading_pane_vc_t1

0x74b7,	// (0x0001ee04) list_double_heading_pane_vc_t2_ParamLimits

0x74b7,	// (0x0001ee04) list_double_heading_pane_vc_t2

0x0001,

0xfa6b,	// (0x000273b8) list_double_heading_pane_vc_t_ParamLimits

0xfa6b,	// (0x000273b8) list_double_heading_pane_vc_t

0x7843,	// (0x0001f190) list_double_graphic_pane_vc_g1_ParamLimits

0x7843,	// (0x0001f190) list_double_graphic_pane_vc_g1

0x7853,	// (0x0001f1a0) list_double_graphic_pane_vc_g2_ParamLimits

0x7853,	// (0x0001f1a0) list_double_graphic_pane_vc_g2

0x7862,	// (0x0001f1af) list_double_graphic_pane_vc_g3_ParamLimits

0x7862,	// (0x0001f1af) list_double_graphic_pane_vc_g3

0x0002,

0xfa70,	// (0x000273bd) list_double_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x000273bd) list_double_graphic_pane_vc_g

0x786e,	// (0x0001f1bb) list_double_graphic_pane_vc_t1_ParamLimits

0x786e,	// (0x0001f1bb) list_double_graphic_pane_vc_t1

0x7795,	// (0x0001f0e2) list_double_graphic_pane_vc_t2_ParamLimits

0x7795,	// (0x0001f0e2) list_double_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x000273c4) list_double_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x000273c4) list_double_graphic_pane_vc_t

0x7c7a,	// (0x0001f5c7) aid_size_cell_fastswap

0x7c82,	// (0x0001f5cf) aid_size_cell_touch_ParamLimits

0x7c82,	// (0x0001f5cf) aid_size_cell_touch

0x7edd,	// (0x0001f82a) popup_fast_swap_wide_window_ParamLimits

0x7edd,	// (0x0001f82a) popup_fast_swap_wide_window

0x7fd3,	// (0x0001f920) touch_pane_ParamLimits

0x7fd3,	// (0x0001f920) touch_pane

0xa86c,	// (0x000221b9) button_value_adjust_pane_cp2

0x7176,	// (0x0001eac3) button_value_adjust_pane_cp4

0x7196,	// (0x0001eae3) form_field_data_pane_cp2

0x71b5,	// (0x0001eb02) form_field_data_wide_pane_cp2

0xacf8,	// (0x00022645) bg_scroll_pane_ParamLimits

0x825f,	// (0x0001fbac) scroll_handle_pane_ParamLimits

0x8273,	// (0x0001fbc0) scroll_sc2_down_pane_ParamLimits

0x8273,	// (0x0001fbc0) scroll_sc2_down_pane

0xad29,	// (0x00022676) scroll_sc2_up_pane_ParamLimits

0xad29,	// (0x00022676) scroll_sc2_up_pane

0xdf9b,	// (0x000258e8) grid_wheel_folder_pane_g1_ParamLimits

0xdf9b,	// (0x000258e8) grid_wheel_folder_pane_g1

0x8438,	// (0x0001fd85) clock_nsta_pane_cp2_ParamLimits

0x8438,	// (0x0001fd85) clock_nsta_pane_cp2

0xaa6d,	// (0x000223ba) listscroll_midp_pane_ParamLimits

0xb4f2,	// (0x00022e3f) midp_canvas_pane

0xb7d8,	// (0x00023125) nsta_clock_indic_pane

0xb80c,	// (0x00023159) listscroll_form_pane_vc

0xb814,	// (0x00023161) listscroll_set_pane_vc_ParamLimits

0xb814,	// (0x00023161) listscroll_set_pane_vc

0xb919,	// (0x00023266) clock_nsta_pane

0xb98e,	// (0x000232db) indicator_nsta_pane

0xbc66,	// (0x000235b3) bg_popup_sub_pane_cp2_ParamLimits

0xbc7a,	// (0x000235c7) find_pane_cp2_ParamLimits

0xbc7a,	// (0x000235c7) find_pane_cp2

0xbc90,	// (0x000235dd) grid_toobar_pane_ParamLimits

0xbdec,	// (0x00023739) list_form_gen_pane_vc_ParamLimits

0xbdec,	// (0x00023739) list_form_gen_pane_vc

0xbe02,	// (0x0002374f) scroll_pane_cp8_vc_ParamLimits

0xbe02,	// (0x0002374f) scroll_pane_cp8_vc

0xbe7e,	// (0x000237cb) data_form_wide_pane_vc_ParamLimits

0xbe7e,	// (0x000237cb) data_form_wide_pane_vc

0xbe8a,	// (0x000237d7) form_field_data_wide_pane_vc_g1

0xbe92,	// (0x000237df) form_field_data_wide_pane_vc_t1_ParamLimits

0xbe92,	// (0x000237df) form_field_data_wide_pane_vc_t1

0xa880,	// (0x000221cd) input_focus_pane_cp6_vc_ParamLimits

0xa880,	// (0x000221cd) input_focus_pane_cp6_vc

0xc1e4,	// (0x00023b31) list_midp_pane_ParamLimits

0xc1f0,	// (0x00023b3d) scroll_pane_cp16_ParamLimits

0xc1f0,	// (0x00023b3d) scroll_pane_cp16

0xc23e,	// (0x00023b8b) button_value_adjust_pane_ParamLimits

0xc23e,	// (0x00023b8b) button_value_adjust_pane

0xd1ab,	// (0x00024af8) button_value_adjust_pane_cp6_ParamLimits

0xd1ab,	// (0x00024af8) button_value_adjust_pane_cp6

0xd2cd,	// (0x00024c1a) settings_code_pane_cp_ParamLimits

0xd2cd,	// (0x00024c1a) settings_code_pane_cp

0x9f43,	// (0x00021890) cell_touch_pane_g1

0x9f43,	// (0x00021890) cell_touch_pane_g2

0x0001,

0xf704,	// (0x00027051) cell_touch_pane_g

0xd8a8,	// (0x000251f5) cell_touch_pane_cp_ParamLimits

0xd8a8,	// (0x000251f5) cell_touch_pane_cp

0xd8b8,	// (0x00025205) cell_touch_pane_ParamLimits

0xd8b8,	// (0x00025205) cell_touch_pane

0x9f43,	// (0x00021890) scroll_sc2_down_pane_g1

0x9f43,	// (0x00021890) scroll_sc2_up_pane_g1

0x9f4d,	// (0x0002189a) bg_set_opt_pane_cp4_vc

0xd8ca,	// (0x00025217) list_set_graphic_pane_vc_g1_ParamLimits

0xd8ca,	// (0x00025217) list_set_graphic_pane_vc_g1

0xd8d6,	// (0x00025223) list_set_graphic_pane_vc_g2_ParamLimits

0xd8d6,	// (0x00025223) list_set_graphic_pane_vc_g2

0x0001,

0xf9ed,	// (0x0002733a) list_set_graphic_pane_vc_g_ParamLimits

0xf9ed,	// (0x0002733a) list_set_graphic_pane_vc_g

0xd8e2,	// (0x0002522f) text_primary_small_cp13_vc_ParamLimits

0xd8e2,	// (0x0002522f) text_primary_small_cp13_vc

0xd8fa,	// (0x00025247) list_set_graphic_pane_vc_ParamLimits

0xd8fa,	// (0x00025247) list_set_graphic_pane_vc

0x9f4d,	// (0x0002189a) input_focus_pane_cp2_vc

0x9f43,	// (0x00021890) setting_code_pane_vc_g1

0xa078,	// (0x000219c5) setting_code_pane_vc_t1

0xd90e,	// (0x0002525b) set_text_pane_vc_t1_ParamLimits

0xd90e,	// (0x0002525b) set_text_pane_vc_t1

0x9f4d,	// (0x0002189a) input_focus_pane_cp1_vc

0xd92d,	// (0x0002527a) list_set_text_pane_vc

0x9f43,	// (0x00021890) setting_text_pane_vc_g1

0x9f4d,	// (0x0002189a) bg_set_opt_pane_cp2_vc

0xa06f,	// (0x000219bc) setting_slider_graphic_pane_vc_g1

0xd937,	// (0x00025284) setting_slider_graphic_pane_vc_t1

0xd946,	// (0x00025293) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f2,	// (0x0002733f) setting_slider_graphic_pane_vc_t

0xd955,	// (0x000252a2) slider_set_pane_cp_vc

0xd95d,	// (0x000252aa) slider_set_pane_vc_g1

0xd966,	// (0x000252b3) slider_set_pane_vc_g2

0x0006,

0xf9f7,	// (0x00027344) slider_set_pane_vc_g

0xa8e7,	// (0x00022234) set_opt_bg_pane_g1_copy1

0xa8ef,	// (0x0002223c) set_opt_bg_pane_g2_copy1

0xd992,	// (0x000252df) set_opt_bg_pane_g3_copy1

0xa8ff,	// (0x0002224c) set_opt_bg_pane_g4_copy1

0xa907,	// (0x00022254) set_opt_bg_pane_g5_copy1

0xa90f,	// (0x0002225c) set_opt_bg_pane_g6_copy1

0xd99a,	// (0x000252e7) set_opt_bg_pane_g7_copy1

0xd9a4,	// (0x000252f1) set_opt_bg_pane_g8_copy1

0xd9ac,	// (0x000252f9) set_opt_bg_pane_g9_copy1

0x9f4d,	// (0x0002189a) bg_set_opt_pane_cp_vc

0xd9b4,	// (0x00025301) setting_slider_pane_vc_t1

0xd9c3,	// (0x00025310) setting_slider_pane_vc_t2

0xd9d2,	// (0x0002531f) setting_slider_pane_vc_t3

0x0002,

0xfa06,	// (0x00027353) setting_slider_pane_vc_t

0xd9e1,	// (0x0002532e) slider_set_pane_vc

0x8d70,	// (0x000206bd) volume_set_pane_vc_g1

0x9029,	// (0x00020976) volume_set_pane_vc_g2

0x9032,	// (0x0002097f) volume_set_pane_vc_g3

0x903b,	// (0x00020988) volume_set_pane_vc_g4

0x9044,	// (0x00020991) volume_set_pane_vc_g5

0x904d,	// (0x0002099a) volume_set_pane_vc_g6

0x9056,	// (0x000209a3) volume_set_pane_vc_g7

0x905f,	// (0x000209ac) volume_set_pane_vc_g8

0x9068,	// (0x000209b5) volume_set_pane_vc_g9

0x9071,	// (0x000209be) volume_set_pane_vc_g10

0x0009,

0xfa0d,	// (0x0002735a) volume_set_pane_vc_g

0xd9e9,	// (0x00025336) volume_set_pane_vc

0xd9f3,	// (0x00025340) button_value_adjust_pane_cp1_vc

0xd9fd,	// (0x0002534a) list_highlight_pane_cp2_vc

0xda06,	// (0x00025353) list_set_pane_vc_ParamLimits

0xda06,	// (0x00025353) list_set_pane_vc

0xda58,	// (0x000253a5) main_pane_set_vc_t1_ParamLimits

0xda58,	// (0x000253a5) main_pane_set_vc_t1

0xda6d,	// (0x000253ba) main_pane_set_vc_t2_ParamLimits

0xda6d,	// (0x000253ba) main_pane_set_vc_t2

0xda7f,	// (0x000253cc) main_pane_set_vc_t3_ParamLimits

0xda7f,	// (0x000253cc) main_pane_set_vc_t3

0xda91,	// (0x000253de) main_pane_set_vc_t4_ParamLimits

0xda91,	// (0x000253de) main_pane_set_vc_t4

0x0003,

0xfa22,	// (0x0002736f) main_pane_set_vc_t_ParamLimits

0xfa22,	// (0x0002736f) main_pane_set_vc_t

0xdaa3,	// (0x000253f0) setting_code_pane_vc_ParamLimits

0xdaa3,	// (0x000253f0) setting_code_pane_vc

0xdab2,	// (0x000253ff) setting_slider_graphic_pane_vc

0xdab2,	// (0x000253ff) setting_slider_pane_vc

0xdab2,	// (0x000253ff) setting_text_pane_vc

0xdab2,	// (0x000253ff) setting_volume_pane_vc

0xdaba,	// (0x00025407) scroll_pane_cp121_vc

0xa85a,	// (0x000221a7) set_content_pane_vc

0xdaf2,	// (0x0002543f) button_value_adjust_pane_g1

0xdafb,	// (0x00025448) button_value_adjust_pane_g2

0x0001,

0xfa7c,	// (0x000273c9) button_value_adjust_pane_g

0xdb04,	// (0x00025451) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdb04,	// (0x00025451) form_field_slider_wide_pane_vc_t1

0xdb18,	// (0x00025465) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdb18,	// (0x00025465) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa81,	// (0x000273ce) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa81,	// (0x000273ce) form_field_slider_wide_pane_vc_t

0xa2a8,	// (0x00021bf5) input_focus_pane_cp10_vc_ParamLimits

0xa2a8,	// (0x00021bf5) input_focus_pane_cp10_vc

0xdb44,	// (0x00025491) slider_cont_pane_cp1_vc_ParamLimits

0xdb44,	// (0x00025491) slider_cont_pane_cp1_vc

0xdb54,	// (0x000254a1) slider_form_pane_g1_cp2

0xd966,	// (0x000252b3) slider_form_pane_g2_cp2

0xdb81,	// (0x000254ce) form_field_slider_pane_vc_t3

0xdb8f,	// (0x000254dc) form_field_slider_pane_vc_t4

0xdb9d,	// (0x000254ea) slider_form_pane_vc_ParamLimits

0xdb9d,	// (0x000254ea) slider_form_pane_vc

0xdbaa,	// (0x000254f7) form_field_slider_pane_vc_t1_ParamLimits

0xdbaa,	// (0x000254f7) form_field_slider_pane_vc_t1

0xdb18,	// (0x00025465) form_field_slider_pane_vc_t2_ParamLimits

0xdb18,	// (0x00025465) form_field_slider_pane_vc_t2

0x0001,

0xfa93,	// (0x000273e0) form_field_slider_pane_vc_t_ParamLimits

0xfa93,	// (0x000273e0) form_field_slider_pane_vc_t

0xa2a8,	// (0x00021bf5) input_focus_pane_cp9_vc_ParamLimits

0xa2a8,	// (0x00021bf5) input_focus_pane_cp9_vc

0xdbc6,	// (0x00025513) slider_cont_pane_vc_ParamLimits

0xdbc6,	// (0x00025513) slider_cont_pane_vc

0xdbd8,	// (0x00025525) list_form_graphic_pane_cp_vc_ParamLimits

0xdbd8,	// (0x00025525) list_form_graphic_pane_cp_vc

0xbe8a,	// (0x000237d7) form_field_popup_wide_pane_vc_g1

0xdbed,	// (0x0002553a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdbed,	// (0x0002553a) form_field_popup_wide_pane_vc_t1

0xa880,	// (0x000221cd) input_focus_pane_cp8_vc_ParamLimits

0xa880,	// (0x000221cd) input_focus_pane_cp8_vc

0xdc32,	// (0x0002557f) list_form_wide_pane_vc_ParamLimits

0xdc32,	// (0x0002557f) list_form_wide_pane_vc

0xdc3e,	// (0x0002558b) list_form_graphic_pane_vc_g1

0xdc46,	// (0x00025593) list_form_graphic_pane_vc_t1_ParamLimits

0xdc46,	// (0x00025593) list_form_graphic_pane_vc_t1

0xa02d,	// (0x0002197a) list_highlight_pane_cp5_vc_ParamLimits

0xa02d,	// (0x0002197a) list_highlight_pane_cp5_vc

0xdc62,	// (0x000255af) list_form_graphic_pane_vc_ParamLimits

0xdc62,	// (0x000255af) list_form_graphic_pane_vc

0xbe8a,	// (0x000237d7) form_field_popup_pane_vc_g1

0xdc78,	// (0x000255c5) form_field_popup_pane_vc_t1_ParamLimits

0xdc78,	// (0x000255c5) form_field_popup_pane_vc_t1

0xa880,	// (0x000221cd) input_focus_pane_cp7_vc_ParamLimits

0xa880,	// (0x000221cd) input_focus_pane_cp7_vc

0xdc8f,	// (0x000255dc) list_form_pane_vc_ParamLimits

0xdc8f,	// (0x000255dc) list_form_pane_vc

0xdc9b,	// (0x000255e8) data_form_pane_vc_t1_ParamLimits

0xdc9b,	// (0x000255e8) data_form_pane_vc_t1

0xa8e7,	// (0x00022234) input_focus_pane_vc_g1

0xa8ef,	// (0x0002223c) input_focus_pane_vc_g2

0xa8f7,	// (0x00022244) input_focus_pane_vc_g3

0xa8ff,	// (0x0002224c) input_focus_pane_vc_g4

0xa907,	// (0x00022254) input_focus_pane_vc_g5

0xa90f,	// (0x0002225c) input_focus_pane_vc_g6

0xa917,	// (0x00022264) input_focus_pane_vc_g7

0xa91f,	// (0x0002226c) input_focus_pane_vc_g8

0xa927,	// (0x00022274) input_focus_pane_vc_g9

0x9f43,	// (0x00021890) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x00026fda) input_focus_pane_vc_g

0xbe7e,	// (0x000237cb) data_form_pane_vc_ParamLimits

0xbe7e,	// (0x000237cb) data_form_pane_vc

0xbe8a,	// (0x000237d7) form_field_data_pane_vc_g1

0xdcb6,	// (0x00025603) form_field_data_pane_vc_t1_ParamLimits

0xdcb6,	// (0x00025603) form_field_data_pane_vc_t1

0xa880,	// (0x000221cd) input_focus_pane_vc_ParamLimits

0xa880,	// (0x000221cd) input_focus_pane_vc

0xdcd0,	// (0x0002561d) button_value_adjust_pane_cp3_vc

0xdcd8,	// (0x00025625) button_value_adjust_pane_cp5_vc

0xdce0,	// (0x0002562d) form_field_data_pane_vc_ParamLimits

0xdce0,	// (0x0002562d) form_field_data_pane_vc

0xdcf7,	// (0x00025644) form_field_data_pane_vc_cp2

0xdcff,	// (0x0002564c) form_field_data_wide_pane_vc_ParamLimits

0xdcff,	// (0x0002564c) form_field_data_wide_pane_vc

0xdd15,	// (0x00025662) form_field_data_wide_pane_vc_cp2

0xdd1d,	// (0x0002566a) form_field_popup_pane_vc_ParamLimits

0xdd1d,	// (0x0002566a) form_field_popup_pane_vc

0xdd34,	// (0x00025681) form_field_popup_wide_pane_vc_ParamLimits

0xdd34,	// (0x00025681) form_field_popup_wide_pane_vc

0xdd4a,	// (0x00025697) form_field_slider_pane_vc_ParamLimits

0xdd4a,	// (0x00025697) form_field_slider_pane_vc

0xdd5d,	// (0x000256aa) form_field_slider_wide_pane_vc_ParamLimits

0xdd5d,	// (0x000256aa) form_field_slider_wide_pane_vc

0xdd70,	// (0x000256bd) grid_touch_1_pane_ParamLimits

0xdd70,	// (0x000256bd) grid_touch_1_pane

0xdd7c,	// (0x000256c9) grid_touch_2_pane_ParamLimits

0xdd7c,	// (0x000256c9) grid_touch_2_pane

0xb7a3,	// (0x000230f0) touch_pane_g1_ParamLimits

0xb7a3,	// (0x000230f0) touch_pane_g1

0xdd94,	// (0x000256e1) cell_app_pane_cp_wide_ParamLimits

0xdd94,	// (0x000256e1) cell_app_pane_cp_wide

0xdda5,	// (0x000256f2) grid_popup_fast_wide_pane_ParamLimits

0xdda5,	// (0x000256f2) grid_popup_fast_wide_pane

0xddb9,	// (0x00025706) scroll_pane_cp19_ParamLimits

0xddb9,	// (0x00025706) scroll_pane_cp19

0x9f4d,	// (0x0002189a) bg_popup_window_pane_cp20

0xddcd,	// (0x0002571a) listscroll_popup_fast_wide_pane

0xa02d,	// (0x0002197a) grid_indicator_nsta_pane

0xddd5,	// (0x00025722) clock_nsta_pane_g1

0xddde,	// (0x0002572b) clock_nsta_pane_t1

0xddfa,	// (0x00025747) cell_indicator_nsta_pane_ParamLimits

0xddfa,	// (0x00025747) cell_indicator_nsta_pane

0xde32,	// (0x0002577f) cell_indicator_nsta_pane_g1

0xde40,	// (0x0002578d) cell_indicator_nsta_pane_g2

0x0001,

0xfaa4,	// (0x000273f1) cell_indicator_nsta_pane_g

0xde56,	// (0x000257a3) clock_nsta_pane_cp

0xde5e,	// (0x000257ab) indicator_nsta_pane_cp

0xde67,	// (0x000257b4) nsta_clock_indic_pane_g1

0xa0f6,	// (0x00021a43) grid_indicator_pane

0xae1b,	// (0x00022768) scroll_pane_cp29

0x8387,	// (0x0001fcd4) indicator_nsta_pane_cp2_ParamLimits

0x8387,	// (0x0001fcd4) indicator_nsta_pane_cp2

0xa02d,	// (0x0002197a) main_apps_wheel_pane

0xc0bf,	// (0x00023a0c) form_midp_field_text_pane_ParamLimits

0xc210,	// (0x00023b5d) scroll_bar_cp050_ParamLimits

0xded0,	// (0x0002581d) cell_indicator_pane_ParamLimits

0xded0,	// (0x0002581d) cell_indicator_pane

0xdeed,	// (0x0002583a) cell_indicator_pane_g1

0xdef7,	// (0x00025844) grid_wheel_folder_pane_ParamLimits

0xdef7,	// (0x00025844) grid_wheel_folder_pane

0xdf0d,	// (0x0002585a) list_wheel_apps_pane_ParamLimits

0xdf0d,	// (0x0002585a) list_wheel_apps_pane

0xdf1e,	// (0x0002586b) main_apps_wheel_pane_g1_ParamLimits

0xdf1e,	// (0x0002586b) main_apps_wheel_pane_g1

0xdf32,	// (0x0002587f) main_apps_wheel_pane_g2_ParamLimits

0xdf32,	// (0x0002587f) main_apps_wheel_pane_g2

0x0001,

0xfac0,	// (0x0002740d) main_apps_wheel_pane_g_ParamLimits

0xfac0,	// (0x0002740d) main_apps_wheel_pane_g

0xdf4a,	// (0x00025897) main_apps_wheel_pane_t1_ParamLimits

0xdf4a,	// (0x00025897) main_apps_wheel_pane_t1

0xdf6d,	// (0x000258ba) list_wheel_apps_pane_g1

0xdf75,	// (0x000258c2) list_wheel_apps_pane_g2

0xdf7d,	// (0x000258ca) list_wheel_apps_pane_g3

0xdf87,	// (0x000258d4) list_wheel_apps_pane_g4

0xdf91,	// (0x000258de) list_wheel_apps_pane_g5

0x0004,

0xfac5,	// (0x00027412) list_wheel_apps_pane_g

0xb368,	// (0x00022cb5) navi_icon_text_pane

0xb848,	// (0x00023195) aid_fill_nsta

0xdfb4,	// (0x00025901) navi_icon_text_pane_g1

0xdfc0,	// (0x0002590d) navi_icon_text_pane_t1

0xb204,	// (0x00022b51) list_set_graphic_pane_t1_ParamLimits

0xb204,	// (0x00022b51) list_set_graphic_pane_t1

0xc952,	// (0x0002429f) popup_midp_note_alarm_window_t6_ParamLimits

0xc952,	// (0x0002429f) popup_midp_note_alarm_window_t6

0xc964,	// (0x000242b1) popup_midp_note_alarm_window_t7_ParamLimits

0xc964,	// (0x000242b1) popup_midp_note_alarm_window_t7

0xc976,	// (0x000242c3) popup_midp_note_alarm_window_t8_ParamLimits

0xc976,	// (0x000242c3) popup_midp_note_alarm_window_t8

0xc988,	// (0x000242d5) popup_midp_note_alarm_window_t9_ParamLimits

0xc988,	// (0x000242d5) popup_midp_note_alarm_window_t9

0xc99a,	// (0x000242e7) popup_midp_note_alarm_window_t10_ParamLimits

0xc99a,	// (0x000242e7) popup_midp_note_alarm_window_t10

0xc9ac,	// (0x000242f9) popup_midp_note_alarm_window_t11_ParamLimits

0xc9ac,	// (0x000242f9) popup_midp_note_alarm_window_t11

0xc9be,	// (0x0002430b) scroll_pane_cp17_ParamLimits

0xc9be,	// (0x0002430b) scroll_pane_cp17

0x8d70,	// (0x000206bd) volume_small_pane_cp_g1

0x907a,	// (0x000209c7) volume_small_pane_cp_g2

0x9083,	// (0x000209d0) volume_small_pane_cp_g3

0x908c,	// (0x000209d9) volume_small_pane_cp_g4

0x9095,	// (0x000209e2) volume_small_pane_cp_g5

0x909e,	// (0x000209eb) volume_small_pane_cp_g6

0x90a7,	// (0x000209f4) volume_small_pane_cp_g7

0x90b0,	// (0x000209fd) volume_small_pane_cp_g8

0x90b9,	// (0x00020a06) volume_small_pane_cp_g9

0x90c2,	// (0x00020a0f) volume_small_pane_cp_g10

0xb5bd,	// (0x00022f0a) midp_ticker_pane_g1_ParamLimits

0xb5c9,	// (0x00022f16) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x000270a6) midp_ticker_pane_g_ParamLimits

0xb5d5,	// (0x00022f22) midp_ticker_pane_t1_ParamLimits

0xb85e,	// (0x000231ab) aid_fill_nsta_2

0xc1fc,	// (0x00023b49) list_form2_midp_pane

0xd318,	// (0x00024c65) midp_editing_number_pane_ParamLimits

0xd327,	// (0x00024c74) midp_ticker_pane_ParamLimits

0xdfd2,	// (0x0002591f) form2_midp_field_pane

0xdff6,	// (0x00025943) scroll_pane_cp51

0xe016,	// (0x00025963) form2_midp_button_pane_ParamLimits

0xe016,	// (0x00025963) form2_midp_button_pane

0xe028,	// (0x00025975) form2_midp_content_pane_ParamLimits

0xe028,	// (0x00025975) form2_midp_content_pane

0xe042,	// (0x0002598f) form2_midp_field_choice_group_pane

0xe04a,	// (0x00025997) form2_midp_field_pane_g1

0xe052,	// (0x0002599f) form2_midp_field_pane_g2

0xe05a,	// (0x000259a7) form2_midp_field_pane_g3

0xe062,	// (0x000259af) form2_midp_field_pane_g4

0x0003,

0xfaea,	// (0x00027437) form2_midp_field_pane_g

0xe06a,	// (0x000259b7) form2_midp_gauge_slider_pane

0xe072,	// (0x000259bf) form2_midp_gauge_wait_pane

0xe07a,	// (0x000259c7) form2_midp_image_pane_ParamLimits

0xe07a,	// (0x000259c7) form2_midp_image_pane

0xe095,	// (0x000259e2) form2_midp_label_pane_ParamLimits

0xe095,	// (0x000259e2) form2_midp_label_pane

0xe0ae,	// (0x000259fb) form2_midp_label_pane_cp_ParamLimits

0xe0ae,	// (0x000259fb) form2_midp_label_pane_cp

0xe0cf,	// (0x00025a1c) form2_midp_string_pane_ParamLimits

0xe0cf,	// (0x00025a1c) form2_midp_string_pane

0x7880,	// (0x0001f1cd) form2_midp_text_pane_ParamLimits

0x7880,	// (0x0001f1cd) form2_midp_text_pane

0xe0e1,	// (0x00025a2e) form2_midp_time_pane

0xe0f1,	// (0x00025a3e) input_focus_pane_cp51_ParamLimits

0xe0f1,	// (0x00025a3e) input_focus_pane_cp51

0xe109,	// (0x00025a56) form2_midp_label_pane_t1_ParamLimits

0xe109,	// (0x00025a56) form2_midp_label_pane_t1

0x7899,	// (0x0001f1e6) form2_mdip_text_pane_t1_ParamLimits

0x7899,	// (0x0001f1e6) form2_mdip_text_pane_t1

0x78b6,	// (0x0001f203) form2_midp_time_pane_t1

0xe151,	// (0x00025a9e) form2_midp_gauge_slider_pane_t1

0xe163,	// (0x00025ab0) form2_midp_gauge_slider_pane_t2

0xe175,	// (0x00025ac2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf3,	// (0x00027440) form2_midp_gauge_slider_pane_t

0xe187,	// (0x00025ad4) form2_midp_slider_pane

0xe193,	// (0x00025ae0) form2_midp_gauge_wait_pane_t1

0xe1a1,	// (0x00025aee) form2_midp_wait_pane_ParamLimits

0xe1a1,	// (0x00025aee) form2_midp_wait_pane

0xe1cc,	// (0x00025b19) list_single_2graphic_pane_cp4_ParamLimits

0xe1cc,	// (0x00025b19) list_single_2graphic_pane_cp4

0xbefd,	// (0x0002384a) list_single_midp_graphic_pane_cp_ParamLimits

0xbefd,	// (0x0002384a) list_single_midp_graphic_pane_cp

0x9f4d,	// (0x0002189a) list_highlight_pane_cp20

0xe1fb,	// (0x00025b48) list_single_2graphic_pane_g1_cp4

0xd7ad,	// (0x000250fa) list_single_2graphic_pane_g2_cp4

0xe203,	// (0x00025b50) list_single_2graphic_pane_t1_cp4

0xa02d,	// (0x0002197a) list_highlight_pane_cp21

0xe212,	// (0x00025b5f) list_single_midp_graphic_pane_g4_cp

0xe221,	// (0x00025b6e) list_single_midp_graphic_pane_t1_cp

0xe236,	// (0x00025b83) form2_mdip_string_pane_t1_ParamLimits

0xe236,	// (0x00025b83) form2_mdip_string_pane_t1

0x9f4d,	// (0x0002189a) bg_wml_button_pane_cp2

0x9f43,	// (0x00021890) form2_midp_image_pane_g1

0x6f77,	// (0x0001e8c4) list_double_large_graphic_pane_g5_ParamLimits

0x6f77,	// (0x0001e8c4) list_double_large_graphic_pane_g5

0xaa6d,	// (0x000223ba) midp_form_pane_ParamLimits

0xa02d,	// (0x0002197a) main_apps_wheel_pane_ParamLimits

0x8a3e,	// (0x0002038b) popup_preview_window_ParamLimits

0x8a3e,	// (0x0002038b) popup_preview_window

0x8bef,	// (0x0002053c) popup_touch_info_window_ParamLimits

0x8bef,	// (0x0002053c) popup_touch_info_window

0x8c0d,	// (0x0002055a) popup_touch_menu_window_ParamLimits

0x8c0d,	// (0x0002055a) popup_touch_menu_window

0x9f39,	// (0x00021886) bg_popup_sub_pane_cp6

0xe370,	// (0x00025cbd) list_touch_menu_pane

0xe378,	// (0x00025cc5) list_single_touch_menu_pane_ParamLimits

0xe378,	// (0x00025cc5) list_single_touch_menu_pane

0xe38c,	// (0x00025cd9) list_single_touch_menu_pane_t1

0xa02d,	// (0x0002197a) bg_popup_sub_pane_cp7_ParamLimits

0xa02d,	// (0x0002197a) bg_popup_sub_pane_cp7

0xe39a,	// (0x00025ce7) heading_sub_pane

0xe3a2,	// (0x00025cef) list_touch_info_pane_ParamLimits

0xe3a2,	// (0x00025cef) list_touch_info_pane

0xe3b1,	// (0x00025cfe) list_single_touch_info_pane_ParamLimits

0xe3b1,	// (0x00025cfe) list_single_touch_info_pane

0xe3c3,	// (0x00025d10) list_single_touch_info_pane_t1

0xe3d1,	// (0x00025d1e) list_single_touch_info_pane_t2

0x0001,

0xfb01,	// (0x0002744e) list_single_touch_info_pane_t

0xb4ea,	// (0x00022e37) bg_popup_heading_pane_cp

0xe3df,	// (0x00025d2c) heading_sub_pane_t1

0xbe18,	// (0x00023765) bg_popup_preview_window_pane_cp_ParamLimits

0xbe18,	// (0x00023765) bg_popup_preview_window_pane_cp

0xe39a,	// (0x00025ce7) heading_preview_pane

0xe3a2,	// (0x00025cef) list_preview_pane_ParamLimits

0xe3a2,	// (0x00025cef) list_preview_pane

0xe3ed,	// (0x00025d3a) popup_preview_window_g1

0xe3b1,	// (0x00025cfe) list_single_preview_pane_ParamLimits

0xe3b1,	// (0x00025cfe) list_single_preview_pane

0xe3f5,	// (0x00025d42) list_single_preview_pane_g1

0xe3fd,	// (0x00025d4a) list_single_preview_pane_t1

0xe3c3,	// (0x00025d10) list_single_preview_pane_t2

0x0001,

0xfb06,	// (0x00027453) list_single_preview_pane_t

0xe40b,	// (0x00025d58) bg_popup_heading_pane_cp2_ParamLimits

0xe40b,	// (0x00025d58) bg_popup_heading_pane_cp2

0xe421,	// (0x00025d6e) heading_preview_pane_g1

0xe429,	// (0x00025d76) heading_preview_pane_t1_ParamLimits

0xe429,	// (0x00025d76) heading_preview_pane_t1

0xa119,	// (0x00021a66) soft_indicator_pane_t1_ParamLimits

0xa7f3,	// (0x00022140) scroll_pane_ParamLimits

0xad17,	// (0x00022664) scroll_sc2_left_pane

0xad20,	// (0x0002266d) scroll_sc2_right_pane

0xad3f,	// (0x0002268c) scroll_bg_pane_g1_ParamLimits

0xad54,	// (0x000226a1) scroll_bg_pane_g2_ParamLimits

0xad6c,	// (0x000226b9) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x00027031) scroll_bg_pane_g_ParamLimits

0xad3f,	// (0x0002268c) scroll_handle_pane_g1_ParamLimits

0xad8e,	// (0x000226db) scroll_handle_pane_g2_ParamLimits

0xad6c,	// (0x000226b9) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x00027038) scroll_handle_pane_g_ParamLimits

0x86c9,	// (0x00020016) popup_choice_list_window_ParamLimits

0x86c9,	// (0x00020016) popup_choice_list_window

0xbc72,	// (0x000235bf) choice_list_pane

0xbcf4,	// (0x00023641) cell_toolbar_pane_t1

0xbd1c,	// (0x00023669) toolbar_button_pane_ParamLimits

0xce70,	// (0x000247bd) ai_gene_pane_1_t2_ParamLimits

0xce70,	// (0x000247bd) ai_gene_pane_1_t2

0x0001,

0xf907,	// (0x00027254) ai_gene_pane_1_t_ParamLimits

0xf907,	// (0x00027254) ai_gene_pane_1_t

0xe446,	// (0x00025d93) scroll_sc2_left_pane_g1

0xe446,	// (0x00025d93) scroll_sc2_right_pane_g1

0xb826,	// (0x00023173) bg_popup_sub_pane_cp10

0xe450,	// (0x00025d9d) list_choice_list_pane

0xe467,	// (0x00025db4) list_single_choice_list_pane_ParamLimits

0xe467,	// (0x00025db4) list_single_choice_list_pane

0xaa15,	// (0x00022362) list_single_choice_list_pane_g1

0xaa1d,	// (0x0002236a) list_single_choice_list_pane_t1_ParamLimits

0xaa1d,	// (0x0002236a) list_single_choice_list_pane_t1

0xe47a,	// (0x00025dc7) choice_list_pane_g1

0xe482,	// (0x00025dcf) choice_list_pane_t1

0x9f39,	// (0x00021886) input_focus_pane_cp11

0xabf4,	// (0x00022541) title_pane_stacon_g2_ParamLimits

0xabf4,	// (0x00022541) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x00027017) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00027017) title_pane_stacon_g

0xb4ea,	// (0x00022e37) cursor_press_pane

0x876f,	// (0x000200bc) popup_fep_hwr_window_ParamLimits

0x876f,	// (0x000200bc) popup_fep_hwr_window

0x87e7,	// (0x00020134) popup_fep_vkb_window_ParamLimits

0x87e7,	// (0x00020134) popup_fep_vkb_window

0xe490,	// (0x00025ddd) cursor_press_pane_g1

0x0002,

0xfb2f,	// (0x0002747c) fep_vkb_side_pane_g_ParamLimits

0x9104,	// (0x00020a51) fep_hwr_candidate_pane_ParamLimits

0x9104,	// (0x00020a51) fep_hwr_candidate_pane

0x912e,	// (0x00020a7b) fep_hwr_side_pane_ParamLimits

0x912e,	// (0x00020a7b) fep_hwr_side_pane

0x914e,	// (0x00020a9b) fep_hwr_top_pane_ParamLimits

0x914e,	// (0x00020a9b) fep_hwr_top_pane

0x9166,	// (0x00020ab3) fep_hwr_write_pane_ParamLimits

0x9166,	// (0x00020ab3) fep_hwr_write_pane

0xfb2f,	// (0x0002747c) fep_vkb_side_pane_g

0xe498,	// (0x00025de5) fep_hwr_top_pane_g1

0xe4aa,	// (0x00025df7) fep_hwr_top_pane_g2

0x9192,	// (0x00020adf) fep_hwr_top_pane_g3

0x0002,

0xfb0b,	// (0x00027458) fep_hwr_top_pane_g

0x91a7,	// (0x00020af4) fep_hwr_top_text_pane

0xaee1,	// (0x0002282e) fep_hwr_top_text_pane_g1

0xe4e0,	// (0x00025e2d) fep_hwr_top_text_pane_t1

0x929d,	// (0x00020bea) fep_hwr_candidate_pane_g1

0xe73a,	// (0x00026087) fep_vkb_keypad_pane_g3_ParamLimits

0xe73a,	// (0x00026087) fep_vkb_keypad_pane_g3

0xe762,	// (0x000260af) fep_vkb_keypad_pane_g4_ParamLimits

0xe762,	// (0x000260af) fep_vkb_keypad_pane_g4

0xe7d1,	// (0x0002611e) fep_vkb_bottom_pane_g2_ParamLimits

0xe7d1,	// (0x0002611e) fep_vkb_bottom_pane_g2

0x0001,

0xfb36,	// (0x00027483) fep_vkb_bottom_pane_g_ParamLimits

0xfb36,	// (0x00027483) fep_vkb_bottom_pane_g

0xe446,	// (0x00025d93) cell_vkb_side_pane_g2

0x0001,

0xfb40,	// (0x0002748d) cell_vkb_side_pane_g

0xe85c,	// (0x000261a9) cell_vkb_side_pane_t1

0xe86a,	// (0x000261b7) cell_vkb_side_pane_t1_copy1

0xe446,	// (0x00025d93) bg_fep_vkb_candidate_pane_g2

0xe99c,	// (0x000262e9) cell_vkb_candidate_pane_ParamLimits

0xe4ee,	// (0x00025e3b) aid_size_cell_vkb_ParamLimits

0xe4ee,	// (0x00025e3b) aid_size_cell_vkb

0xe99c,	// (0x000262e9) cell_vkb_candidate_pane

0x92b7,	// (0x00020c04) bg_popup_fep_shadow_pane_g1

0xe57c,	// (0x00025ec9) fep_vkb_bottom_pane_ParamLimits

0xe57c,	// (0x00025ec9) fep_vkb_bottom_pane

0xe5b9,	// (0x00025f06) fep_vkb_candidate_pane_ParamLimits

0xe5b9,	// (0x00025f06) fep_vkb_candidate_pane

0xe5d5,	// (0x00025f22) fep_vkb_keypad_pane_ParamLimits

0xe5d5,	// (0x00025f22) fep_vkb_keypad_pane

0xe61b,	// (0x00025f68) fep_vkb_side_pane_ParamLimits

0xe61b,	// (0x00025f68) fep_vkb_side_pane

0xe657,	// (0x00025fa4) fep_vkb_top_pane_ParamLimits

0xe657,	// (0x00025fa4) fep_vkb_top_pane

0xe693,	// (0x00025fe0) fep_vkb_top_pane_g1_ParamLimits

0xe693,	// (0x00025fe0) fep_vkb_top_pane_g1

0xe6a2,	// (0x00025fef) fep_vkb_top_pane_g2_ParamLimits

0xe6a2,	// (0x00025fef) fep_vkb_top_pane_g2

0xe6b1,	// (0x00025ffe) fep_vkb_top_pane_g3_ParamLimits

0xe6b1,	// (0x00025ffe) fep_vkb_top_pane_g3

0x0003,

0xfb26,	// (0x00027473) fep_vkb_top_pane_g_ParamLimits

0xfb26,	// (0x00027473) fep_vkb_top_pane_g

0xe6cf,	// (0x0002601c) fep_vkb_top_text_pane_ParamLimits

0xe6cf,	// (0x0002601c) fep_vkb_top_text_pane

0xe6e0,	// (0x0002602d) fep_vkb_side_pane_g1_ParamLimits

0xe6e0,	// (0x0002602d) fep_vkb_side_pane_g1

0xe729,	// (0x00026076) grid_vkb_side_pane_ParamLimits

0xe729,	// (0x00026076) grid_vkb_side_pane

0x92bf,	// (0x00020c0c) bg_popup_fep_shadow_pane_g2

0x92c8,	// (0x00020c15) bg_popup_fep_shadow_pane_g3

0x92d0,	// (0x00020c1d) bg_popup_fep_shadow_pane_g4

0x92d9,	// (0x00020c26) bg_popup_fep_shadow_pane_g5

0x92e3,	// (0x00020c30) bg_popup_fep_shadow_pane_g6

0x92eb,	// (0x00020c38) bg_popup_fep_shadow_pane_g7

0xa907,	// (0x00022254) bg_popup_fep_shadow_pane_g8

0xe780,	// (0x000260cd) grid_vkb_keypad_number_pane_ParamLimits

0xe780,	// (0x000260cd) grid_vkb_keypad_number_pane

0xe790,	// (0x000260dd) grid_vkb_keypad_pane_ParamLimits

0xe790,	// (0x000260dd) grid_vkb_keypad_pane

0xe7b6,	// (0x00026103) fep_vkb_bottom_pane_g1_ParamLimits

0xe7b6,	// (0x00026103) fep_vkb_bottom_pane_g1

0xe7df,	// (0x0002612c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe7df,	// (0x0002612c) grid_vkb_keypad_bottom_left_pane

0xe7f4,	// (0x00026141) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe7f4,	// (0x00026141) grid_vkb_keypad_bottom_right_pane

0xe809,	// (0x00026156) fep_vkb_top_text_pane_g1

0xe824,	// (0x00026171) fep_vkb_top_text_pane_t1

0xe839,	// (0x00026186) cell_vkb_side_pane_ParamLimits

0xe839,	// (0x00026186) cell_vkb_side_pane

0xe446,	// (0x00025d93) cell_vkb_side_pane_g1

0xe878,	// (0x000261c5) cell_vkb_keypad_pane_ParamLimits

0xe878,	// (0x000261c5) cell_vkb_keypad_pane

0xe8f3,	// (0x00026240) cell_vkb_keypad_pane_g1

0x0008,

0xfb53,	// (0x000274a0) bg_popup_fep_shadow_pane_g

0xe446,	// (0x00025d93) cell_hwr_side_pane_g1

0xe446,	// (0x00025d93) cell_hwr_side_pane_g2

0xe8fd,	// (0x0002624a) cell_vkb_keypad_pane_t1

0xe90b,	// (0x00026258) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe90b,	// (0x00026258) cell_vkb_keypad_bottom_left_pane

0xe928,	// (0x00026275) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe928,	// (0x00026275) cell_vkb_keypad_bottom_right_pane

0xe446,	// (0x00025d93) cell_vkb_keypad_bottom_left_pane_g1

0xe446,	// (0x00025d93) cell_vkb_keypad_bottom_right_pane_g1

0xe961,	// (0x000262ae) cell_vkb_keypad_number_pane_ParamLimits

0xe961,	// (0x000262ae) cell_vkb_keypad_number_pane

0xe980,	// (0x000262cd) cell_vkb_keypad_number_pane_g1

0xe98a,	// (0x000262d7) cell_vkb_keypad_number_pane_g2

0xe993,	// (0x000262e0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb45,	// (0x00027492) cell_vkb_keypad_number_pane_g

0xe8fd,	// (0x0002624a) cell_vkb_keypad_number_pane_t1

0xe9b9,	// (0x00026306) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0002748d) cell_hwr_side_pane_g

0xe9d2,	// (0x0002631f) cell_hwr_side_pane_t1

0x92fd,	// (0x00020c4a) cell_hwr_side_pane_t1_copy1

0xe6c1,	// (0x0002600e) cell_hwr_candidate_pane_g1

0x930b,	// (0x00020c58) cell_hwr_candidate_pane_t1

0xe446,	// (0x00025d93) cell_vkb_candidate_pane_g2

0xea16,	// (0x00026363) cell_vkb_candidate_pane_t1

0x90cb,	// (0x00020a18) bg_popup_fep_shadow_pane_ParamLimits

0x90cb,	// (0x00020a18) bg_popup_fep_shadow_pane

0x2ec5,	// (0x0001a812) bg_fep_hwr_top_pane_g4

0xe4bc,	// (0x00025e09) bg_hwr_side_pane_g1_ParamLimits

0xe4bc,	// (0x00025e09) bg_hwr_side_pane_g1

0x91e3,	// (0x00020b30) cell_hwr_side_pane_ParamLimits

0x91e3,	// (0x00020b30) cell_hwr_side_pane

0x921e,	// (0x00020b6b) fep_hwr_write_pane_g1_ParamLimits

0x921e,	// (0x00020b6b) fep_hwr_write_pane_g1

0x922b,	// (0x00020b78) fep_hwr_write_pane_g2_ParamLimits

0x922b,	// (0x00020b78) fep_hwr_write_pane_g2

0x9238,	// (0x00020b85) fep_hwr_write_pane_g3_ParamLimits

0x9238,	// (0x00020b85) fep_hwr_write_pane_g3

0x9246,	// (0x00020b93) fep_hwr_write_pane_g4_ParamLimits

0x9246,	// (0x00020b93) fep_hwr_write_pane_g4

0x0005,

0xfb12,	// (0x0002745f) fep_hwr_write_pane_g_ParamLimits

0xfb12,	// (0x0002745f) fep_hwr_write_pane_g

0x2ec5,	// (0x0001a812) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2ec5,	// (0x0001a812) bg_fep_hwr_candidate_pane_g2

0x925b,	// (0x00020ba8) cell_hwr_candidate_pane_ParamLimits

0x925b,	// (0x00020ba8) cell_hwr_candidate_pane

0x929d,	// (0x00020bea) fep_hwr_candidate_pane_g1_ParamLimits

0xe51c,	// (0x00025e69) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe51c,	// (0x00025e69) bg_popup_fep_shadow_pane_cp2

0xe6c1,	// (0x0002600e) fep_vkb_top_pane_g4_ParamLimits

0xe6c1,	// (0x0002600e) fep_vkb_top_pane_g4

0xe707,	// (0x00026054) fep_vkb_side_pane_g2_ParamLimits

0xe707,	// (0x00026054) fep_vkb_side_pane_g2

0x70ab,	// (0x0001e9f8) list_setting_pane_t4_ParamLimits

0x70ab,	// (0x0001e9f8) list_setting_pane_t4

0x713d,	// (0x0001ea8a) list_setting_number_pane_t5_ParamLimits

0x713d,	// (0x0001ea8a) list_setting_number_pane_t5

0xaf28,	// (0x00022875) list_double_heading_pane_cp2_ParamLimits

0xaf28,	// (0x00022875) list_double_heading_pane_cp2

0xa89a,	// (0x000221e7) list_double_heading_pane_g1_cp2_ParamLimits

0xa89a,	// (0x000221e7) list_double_heading_pane_g1_cp2

0xa8a6,	// (0x000221f3) list_double_heading_pane_g2_cp2_ParamLimits

0xa8a6,	// (0x000221f3) list_double_heading_pane_g2_cp2

0xea24,	// (0x00026371) list_double_heading_pane_t1_cp2_ParamLimits

0xea24,	// (0x00026371) list_double_heading_pane_t1_cp2

0xea3a,	// (0x00026387) list_double_heading_pane_t2_cp2_ParamLimits

0xea3a,	// (0x00026387) list_double_heading_pane_t2_cp2

0x9f21,	// (0x0002186e) aid_value_unit2

0x7f29,	// (0x0001f876) popup_preview_fixed_window

0xa2b6,	// (0x00021c03) bg_popup_preview_window_pane_cp02

0xea4c,	// (0x00026399) list_preview_fixed_pane

0xea92,	// (0x000263df) list_empty_pane_fp_ParamLimits

0xea92,	// (0x000263df) list_empty_pane_fp

0xea92,	// (0x000263df) list_single_cale_day_pane_fp_ParamLimits

0xea92,	// (0x000263df) list_single_cale_day_pane_fp

0xea92,	// (0x000263df) list_single_graphic_heading_pane_fp_ParamLimits

0xea92,	// (0x000263df) list_single_graphic_heading_pane_fp

0xea92,	// (0x000263df) list_single_graphic_pane_fp_ParamLimits

0xea92,	// (0x000263df) list_single_graphic_pane_fp

0xea92,	// (0x000263df) list_single_heading_pane_fp_ParamLimits

0xea92,	// (0x000263df) list_single_heading_pane_fp

0xea92,	// (0x000263df) list_single_pane_fp_ParamLimits

0xea92,	// (0x000263df) list_single_pane_fp

0xeaa9,	// (0x000263f6) list_single_pane_fp_g1_ParamLimits

0xeaa9,	// (0x000263f6) list_single_pane_fp_g1

0x6f0f,	// (0x0001e85c) list_single_pane_fp_g2_ParamLimits

0x6f0f,	// (0x0001e85c) list_single_pane_fp_g2

0x78c9,	// (0x0001f216) list_single_pane_fp_g3_ParamLimits

0x78c9,	// (0x0001f216) list_single_pane_fp_g3

0xeab5,	// (0x00026402) list_single_pane_fp_g4_ParamLimits

0xeab5,	// (0x00026402) list_single_pane_fp_g4

0x0003,

0xfb74,	// (0x000274c1) list_single_pane_fp_g_ParamLimits

0xfb74,	// (0x000274c1) list_single_pane_fp_g

0x78dd,	// (0x0001f22a) list_single_pane_fp_t1_ParamLimits

0x78dd,	// (0x0001f22a) list_single_pane_fp_t1

0x78f4,	// (0x0001f241) list_single_graphic_pane_fp_g1_ParamLimits

0x78f4,	// (0x0001f241) list_single_graphic_pane_fp_g1

0xeaa9,	// (0x000263f6) list_single_graphic_pane_fp_g2_ParamLimits

0xeaa9,	// (0x000263f6) list_single_graphic_pane_fp_g2

0x6f0f,	// (0x0001e85c) list_single_graphic_pane_fp_g3_ParamLimits

0x6f0f,	// (0x0001e85c) list_single_graphic_pane_fp_g3

0x78c9,	// (0x0001f216) list_single_graphic_pane_fp_g4_ParamLimits

0x78c9,	// (0x0001f216) list_single_graphic_pane_fp_g4

0xeab5,	// (0x00026402) list_single_graphic_pane_fp_g5_ParamLimits

0xeab5,	// (0x00026402) list_single_graphic_pane_fp_g5

0x0004,

0xfb7d,	// (0x000274ca) list_single_graphic_pane_fp_g_ParamLimits

0xfb7d,	// (0x000274ca) list_single_graphic_pane_fp_g

0x7900,	// (0x0001f24d) list_single_graphic_pane_fp_t1_ParamLimits

0x7900,	// (0x0001f24d) list_single_graphic_pane_fp_t1

0x78f4,	// (0x0001f241) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x78f4,	// (0x0001f241) list_single_graphic_heading_pane_fp_g1

0xeaa9,	// (0x000263f6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xeaa9,	// (0x000263f6) list_single_graphic_heading_pane_fp_g2

0x6f0f,	// (0x0001e85c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6f0f,	// (0x0001e85c) list_single_graphic_heading_pane_fp_g3

0x78c9,	// (0x0001f216) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x78c9,	// (0x0001f216) list_single_graphic_heading_pane_fp_g4

0xeab5,	// (0x00026402) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xeab5,	// (0x00026402) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x000274ca) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x000274ca) list_single_graphic_heading_pane_fp_g

0x7916,	// (0x0001f263) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7916,	// (0x0001f263) list_single_graphic_heading_pane_fp_t1

0x792c,	// (0x0001f279) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x792c,	// (0x0001f279) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x000274d5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x000274d5) list_single_graphic_heading_pane_fp_t

0x793e,	// (0x0001f28b) list_single_cale_day_pane_fp_g1_ParamLimits

0x793e,	// (0x0001f28b) list_single_cale_day_pane_fp_g1

0xeac1,	// (0x0002640e) list_single_cale_day_pane_fp_g2_ParamLimits

0xeac1,	// (0x0002640e) list_single_cale_day_pane_fp_g2

0x7976,	// (0x0001f2c3) list_single_cale_day_pane_fp_g3_ParamLimits

0x7976,	// (0x0001f2c3) list_single_cale_day_pane_fp_g3

0x799e,	// (0x0001f2eb) list_single_cale_day_pane_fp_g4_ParamLimits

0x799e,	// (0x0001f2eb) list_single_cale_day_pane_fp_g4

0x79c2,	// (0x0001f30f) list_single_cale_day_pane_fp_g5_ParamLimits

0x79c2,	// (0x0001f30f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8d,	// (0x000274da) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8d,	// (0x000274da) list_single_cale_day_pane_fp_g

0x79e6,	// (0x0001f333) list_single_cale_day_pane_fp_t1_ParamLimits

0x79e6,	// (0x0001f333) list_single_cale_day_pane_fp_t1

0x7a0c,	// (0x0001f359) list_single_cale_day_pane_fp_t2_ParamLimits

0x7a0c,	// (0x0001f359) list_single_cale_day_pane_fp_t2

0x7a25,	// (0x0001f372) list_single_cale_day_pane_fp_t3_ParamLimits

0x7a25,	// (0x0001f372) list_single_cale_day_pane_fp_t3

0x0002,

0xfb98,	// (0x000274e5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb98,	// (0x000274e5) list_single_cale_day_pane_fp_t

0xeaa9,	// (0x000263f6) list_empty_pane_fp_g1_ParamLimits

0xeaa9,	// (0x000263f6) list_empty_pane_fp_g1

0x7a3e,	// (0x0001f38b) list_empty_pane_fp_t1

0x7a4c,	// (0x0001f399) list_empty_pane_fp_t2

0x0001,

0xfb9f,	// (0x000274ec) list_empty_pane_fp_t

0xeaa9,	// (0x000263f6) list_single_heading_pane_fp_g1_ParamLimits

0xeaa9,	// (0x000263f6) list_single_heading_pane_fp_g1

0x6f0f,	// (0x0001e85c) list_single_heading_pane_fp_g2_ParamLimits

0x6f0f,	// (0x0001e85c) list_single_heading_pane_fp_g2

0x78c9,	// (0x0001f216) list_single_heading_pane_fp_g3_ParamLimits

0x78c9,	// (0x0001f216) list_single_heading_pane_fp_g3

0x0002,

0xfba4,	// (0x000274f1) list_single_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x000274f1) list_single_heading_pane_fp_g

0x7a5a,	// (0x0001f3a7) list_single_heading_pane_fp_t1_ParamLimits

0x7a5a,	// (0x0001f3a7) list_single_heading_pane_fp_t1

0x7a6c,	// (0x0001f3b9) list_single_heading_pane_fp_t2_ParamLimits

0x7a6c,	// (0x0001f3b9) list_single_heading_pane_fp_t2

0x0001,

0xfbab,	// (0x000274f8) list_single_heading_pane_fp_t_ParamLimits

0xfbab,	// (0x000274f8) list_single_heading_pane_fp_t

0xaa8b,	// (0x000223d8) aid_size_cell_fast

0xa226,	// (0x00021b73) soft_indicator_pane_cp1_t1

0xaac8,	// (0x00022415) cell_app_pane_cp2_ParamLimits

0xaac8,	// (0x00022415) cell_app_pane_cp2

0x90ed,	// (0x00020a3a) fep_hwr_candidate_drop_down_list_pane

0x2ed3,	// (0x0001a820) fep_hwr_candidate_pane_g3_ParamLimits

0x2ed3,	// (0x0001a820) fep_hwr_candidate_pane_g3

0x2ee0,	// (0x0001a82d) fep_hwr_candidate_pane_g4_ParamLimits

0x2ee0,	// (0x0001a82d) fep_hwr_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0002746c) fep_hwr_candidate_pane_g_ParamLimits

0xfb1f,	// (0x0002746c) fep_hwr_candidate_pane_g

0xe5a8,	// (0x00025ef5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe5a8,	// (0x00025ef5) fep_vkb_candidate_drop_down_list_pane

0xe9c1,	// (0x0002630e) fep_vkb_candidate_pane_g3

0xe9c9,	// (0x00026316) fep_vkb_candidate_pane_g4

0x0002,

0xfb4c,	// (0x00027499) fep_vkb_candidate_pane_g

0xe6c1,	// (0x0002600e) cell_hwr_candidate_pane_g1_ParamLimits

0xeb43,	// (0x00026490) cell_hwr_candidate_pane_g3_ParamLimits

0xeb43,	// (0x00026490) cell_hwr_candidate_pane_g3

0xeb64,	// (0x000264b1) cell_hwr_candidate_pane_g4_ParamLimits

0xeb64,	// (0x000264b1) cell_hwr_candidate_pane_g4

0x0002,

0xfb66,	// (0x000274b3) cell_hwr_candidate_pane_g_ParamLimits

0xfb66,	// (0x000274b3) cell_hwr_candidate_pane_g

0xe9e0,	// (0x0002632d) cell_vkb_candidate_pane_g3_ParamLimits

0xe9e0,	// (0x0002632d) cell_vkb_candidate_pane_g3

0xe9fb,	// (0x00026348) cell_vkb_candidate_pane_g4_ParamLimits

0xe9fb,	// (0x00026348) cell_vkb_candidate_pane_g4

0xeacd,	// (0x0002641a) cell_app_pane_cp2_g1_ParamLimits

0xeacd,	// (0x0002641a) cell_app_pane_cp2_g1

0xeaeb,	// (0x00026438) cell_app_pane_cp2_g2_ParamLimits

0xeaeb,	// (0x00026438) cell_app_pane_cp2_g2

0x0001,

0xfbb0,	// (0x000274fd) cell_app_pane_cp2_g_ParamLimits

0xfbb0,	// (0x000274fd) cell_app_pane_cp2_g

0xeaf7,	// (0x00026444) cell_app_pane_cp2_t1_ParamLimits

0xeaf7,	// (0x00026444) cell_app_pane_cp2_t1

0xa880,	// (0x000221cd) grid_highlight_pane_cp1_ParamLimits

0xa880,	// (0x000221cd) grid_highlight_pane_cp1

0x9329,	// (0x00020c76) cell_hwr_candidate_pane_cp1_ParamLimits

0x9329,	// (0x00020c76) cell_hwr_candidate_pane_cp1

0xe6c1,	// (0x0002600e) fep_hwr_candidate_drop_down_list_pane_g1

0xeb09,	// (0x00026456) fep_hwr_candidate_drop_down_list_pane_g2

0xeb16,	// (0x00026463) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x00027502) fep_hwr_candidate_drop_down_list_pane_g

0x9348,	// (0x00020c95) fep_hwr_candidate_drop_down_list_scroll_pane

0x9351,	// (0x00020c9e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9351,	// (0x00020c9e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x935e,	// (0x00020cab) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x935e,	// (0x00020cab) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x936b,	// (0x00020cb8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x936b,	// (0x00020cb8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe9e0,	// (0x0002632d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe9e0,	// (0x0002632d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe9fb,	// (0x00026348) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe9fb,	// (0x00026348) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9378,	// (0x00020cc5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9378,	// (0x00020cc5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9393,	// (0x00020ce0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9393,	// (0x00020ce0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xebb7,	// (0x00026504) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xebb7,	// (0x00026504) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x00027509) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x00027509) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xeb23,	// (0x00026470) cell_vkb_candidate_pane_cp1_ParamLimits

0xeb23,	// (0x00026470) cell_vkb_candidate_pane_cp1

0xe6c1,	// (0x0002600e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe6c1,	// (0x0002600e) fep_vkb_candidate_drop_down_list_pane_g1

0xeb09,	// (0x00026456) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xeb09,	// (0x00026456) fep_vkb_candidate_drop_down_list_pane_g2

0xeb16,	// (0x00026463) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xeb16,	// (0x00026463) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x00027502) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x00027502) fep_vkb_candidate_drop_down_list_pane_g

0xeb85,	// (0x000264d2) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xeb85,	// (0x000264d2) fep_vkb_candidate_drop_down_list_scroll_pane

0xeb92,	// (0x000264df) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xeb92,	// (0x000264df) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xeb9f,	// (0x000264ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xeb9f,	// (0x000264ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xebab,	// (0x000264f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xebab,	// (0x000264f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xeb43,	// (0x00026490) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeb43,	// (0x00026490) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xeb64,	// (0x000264b1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xeb64,	// (0x000264b1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xebd2,	// (0x0002651f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xebd2,	// (0x0002651f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xebf3,	// (0x00026540) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xebf3,	// (0x00026540) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xebb7,	// (0x00026504) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xebb7,	// (0x00026504) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0002751a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0002751a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9f57,	// (0x000218a4) title_pane_g1_ParamLimits

0x9f64,	// (0x000218b1) title_pane_g2_ParamLimits

0xf554,	// (0x00026ea1) title_pane_g_ParamLimits

0xaed1,	// (0x0002281e) aid_call2_pane

0xaed9,	// (0x00022826) aid_call_pane

0xaee1,	// (0x0002282e) popup_clock_analogue_window_g1

0xaee1,	// (0x0002282e) popup_clock_analogue_window_g2

0x8288,	// (0x0001fbd5) popup_clock_analogue_window_g3

0x8291,	// (0x0001fbde) popup_clock_analogue_window_g4

0x9f43,	// (0x00021890) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x00027046) popup_clock_analogue_window_g

0x8299,	// (0x0001fbe6) popup_clock_analogue_window_t1

0x82a7,	// (0x0001fbf4) clock_digital_number_pane_ParamLimits

0x82a7,	// (0x0001fbf4) clock_digital_number_pane

0x82b3,	// (0x0001fc00) clock_digital_number_pane_cp02_ParamLimits

0x82b3,	// (0x0001fc00) clock_digital_number_pane_cp02

0x82bf,	// (0x0001fc0c) clock_digital_number_pane_cp03_ParamLimits

0x82bf,	// (0x0001fc0c) clock_digital_number_pane_cp03

0x82cb,	// (0x0001fc18) clock_digital_number_pane_cp04_ParamLimits

0x82cb,	// (0x0001fc18) clock_digital_number_pane_cp04

0x82d7,	// (0x0001fc24) clock_digital_separator_pane_ParamLimits

0x82d7,	// (0x0001fc24) clock_digital_separator_pane

0x82e3,	// (0x0001fc30) popup_clock_digital_window_t1_ParamLimits

0x82e3,	// (0x0001fc30) popup_clock_digital_window_t1

0x9f43,	// (0x00021890) clock_digital_number_pane_g1

0x9f43,	// (0x00021890) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x00027051) clock_digital_number_pane_g

0x9f43,	// (0x00021890) clock_digital_separator_pane_g1

0x9f43,	// (0x00021890) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x00027051) clock_digital_separator_pane_g

0xb848,	// (0x00023195) aid_fill_nsta_ParamLimits

0xb98e,	// (0x000232db) indicator_nsta_pane_ParamLimits

0xbb01,	// (0x0002344e) popup_clock_analogue_window

0xbb01,	// (0x0002344e) popup_clock_digital_window

0xa02d,	// (0x0002197a) grid_indicator_nsta_pane_ParamLimits

0xddec,	// (0x00025739) clock_nsta_pane_t2

0x0001,

0xfa9f,	// (0x000273ec) clock_nsta_pane_t

0x824c,	// (0x0001fb99) aid_size_max_handle

0x8256,	// (0x0001fba3) aid_size_min_handle

0xb4ea,	// (0x00022e37) editor_scroll_pane

0xec14,	// (0x00026561) ex_editor_pane

0xa9fa,	// (0x00022347) scroll_pane_cp13

0xa81f,	// (0x0002216c) scroll_pane_cp14

0xaf10,	// (0x0002285d) scroll_pane_cp36

0xaf3a,	// (0x00022887) list_single_graphic_hl_pane_cp2_ParamLimits

0xaf3a,	// (0x00022887) list_single_graphic_hl_pane_cp2

0xd370,	// (0x00024cbd) list_single_graphic_hl_pane_ParamLimits

0xd370,	// (0x00024cbd) list_single_graphic_hl_pane

0x7a82,	// (0x0001f3cf) aid_size_min_hl_cp1

0xec1c,	// (0x00026569) list_highlight_pane_cp34_ParamLimits

0xec1c,	// (0x00026569) list_highlight_pane_cp34

0xec2d,	// (0x0002657a) list_single_graphic_hl_pane_g1_ParamLimits

0xec2d,	// (0x0002657a) list_single_graphic_hl_pane_g1

0x7a8b,	// (0x0001f3d8) list_single_graphic_hl_pane_g2_ParamLimits

0x7a8b,	// (0x0001f3d8) list_single_graphic_hl_pane_g2

0x7a8b,	// (0x0001f3d8) list_single_graphic_hl_pane_g3_ParamLimits

0x7a8b,	// (0x0001f3d8) list_single_graphic_hl_pane_g3

0x7a97,	// (0x0001f3e4) list_single_graphic_hl_pane_g4_ParamLimits

0x7a97,	// (0x0001f3e4) list_single_graphic_hl_pane_g4

0x7aa3,	// (0x0001f3f0) list_single_graphic_hl_pane_g5_ParamLimits

0x7aa3,	// (0x0001f3f0) list_single_graphic_hl_pane_g5

0x0004,

0xfbde,	// (0x0002752b) list_single_graphic_hl_pane_g_ParamLimits

0xfbde,	// (0x0002752b) list_single_graphic_hl_pane_g

0x7ab7,	// (0x0001f404) list_single_graphic_hl_pane_t1_ParamLimits

0x7ab7,	// (0x0001f404) list_single_graphic_hl_pane_t1

0xec3a,	// (0x00026587) aid_size_min_hl_cp2

0xec43,	// (0x00026590) list_highlight_pane_cp34_cp2_ParamLimits

0xec43,	// (0x00026590) list_highlight_pane_cp34_cp2

0xec2d,	// (0x0002657a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xec2d,	// (0x0002657a) list_single_graphic_hl_pane_g1_cp2

0xec50,	// (0x0002659d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xec50,	// (0x0002659d) list_single_graphic_hl_pane_g2_cp2

0xec5c,	// (0x000265a9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xec5c,	// (0x000265a9) list_single_graphic_hl_pane_g3_cp2

0xb421,	// (0x00022d6e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb421,	// (0x00022d6e) list_single_graphic_hl_pane_g4_cp2

0xec6a,	// (0x000265b7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xec6a,	// (0x000265b7) list_single_graphic_hl_pane_g5_cp2

0x8593,	// (0x0001fee0) control_pane_g4_ParamLimits

0x8593,	// (0x0001fee0) control_pane_g4

0xb826,	// (0x00023173) bg_popup_sub_pane_cp10_ParamLimits

0xe450,	// (0x00025d9d) list_choice_list_pane_ParamLimits

0xe45f,	// (0x00025dac) scroll_pane_cp23

0xa2b6,	// (0x00021c03) bg_popup_preview_window_pane_cp02_ParamLimits

0xea4c,	// (0x00026399) list_preview_fixed_pane_ParamLimits

0xea62,	// (0x000263af) list_preview_fixed_pane_cp_ParamLimits

0xea62,	// (0x000263af) list_preview_fixed_pane_cp

0xea6e,	// (0x000263bb) popup_preview_fixed_window_g1_ParamLimits

0xea6e,	// (0x000263bb) popup_preview_fixed_window_g1

0xea7a,	// (0x000263c7) popup_preview_fixed_window_g2_ParamLimits

0xea7a,	// (0x000263c7) popup_preview_fixed_window_g2

0x0002,

0xfb6d,	// (0x000274ba) popup_preview_fixed_window_g_ParamLimits

0xfb6d,	// (0x000274ba) popup_preview_fixed_window_g

0x81c0,	// (0x0001fb0d) aid_navi_side_left_pane_ParamLimits

0x81d5,	// (0x0001fb22) aid_navi_side_right_pane_ParamLimits

0x81ed,	// (0x0001fb3a) navi_icon_pane_stacon_ParamLimits

0x8201,	// (0x0001fb4e) navi_navi_pane_stacon_ParamLimits

0x81ed,	// (0x0001fb3a) navi_text_pane_stacon_ParamLimits

0x9f39,	// (0x00021886) main_text_info_pane

0xec94,	// (0x000265e1) listscroll_text_info_pane

0xec9c,	// (0x000265e9) list_text_info_pane_ParamLimits

0xec9c,	// (0x000265e9) list_text_info_pane

0xecab,	// (0x000265f8) scroll_pane_cp24_ParamLimits

0xecab,	// (0x000265f8) scroll_pane_cp24

0xecc9,	// (0x00026616) list_text_info_pane_t1_ParamLimits

0xecc9,	// (0x00026616) list_text_info_pane_t1

0x86e3,	// (0x00020030) popup_fast_swap2_window_ParamLimits

0x86e3,	// (0x00020030) popup_fast_swap2_window

0xed02,	// (0x0002664f) aid_size_cell_fast2

0x9f39,	// (0x00021886) bg_popup_window_pane_cp17

0xc228,	// (0x00023b75) heading_pane_cp2

0xa4f6,	// (0x00021e43) listscroll_fast2_pane

0xed0c,	// (0x00026659) grid_fast2_pane

0xed16,	// (0x00026663) listscroll_fast2_pane_g1

0xed1e,	// (0x0002666b) listscroll_fast2_pane_g2

0x0001,

0xfbe9,	// (0x00027536) listscroll_fast2_pane_g

0xa9fa,	// (0x00022347) scroll_pane_cp26

0xed28,	// (0x00026675) cell_fast2_pane_ParamLimits

0xed28,	// (0x00026675) cell_fast2_pane

0xed3d,	// (0x0002668a) cell_fast2_pane_g1

0xed46,	// (0x00026693) cell_fast2_pane_g2

0xed4f,	// (0x0002669c) cell_fast2_pane_g3

0x0002,

0xfbee,	// (0x0002753b) cell_fast2_pane_g

0xa5dc,	// (0x00021f29) grid_highlight_pane_cp9

0xa5f1,	// (0x00021f3e) main_eswt_pane_ParamLimits

0xa5f1,	// (0x00021f3e) main_eswt_pane

0xecc0,	// (0x0002660d) list_single_text_info_pane

0xed57,	// (0x000266a4) eswt_ctrl_button_pane

0xed57,	// (0x000266a4) eswt_ctrl_canvas_pane

0xed5f,	// (0x000266ac) eswt_ctrl_combo_pane

0xed57,	// (0x000266a4) eswt_ctrl_default_pane

0xed57,	// (0x000266a4) eswt_ctrl_label_pane

0xed67,	// (0x000266b4) eswt_ctrl_wait_pane

0xed6f,	// (0x000266bc) eswt_shell_pane

0x9f39,	// (0x00021886) listscroll_eswt_app_pane

0xed8f,	// (0x000266dc) popup_eswt_tasktip_window_ParamLimits

0xed8f,	// (0x000266dc) popup_eswt_tasktip_window

0xbe18,	// (0x00023765) bg_popup_window_pane_cp18

0xeda0,	// (0x000266ed) eswt_control_pane_g1_ParamLimits

0xeda0,	// (0x000266ed) eswt_control_pane_g1

0xedad,	// (0x000266fa) eswt_control_pane_g2_ParamLimits

0xedad,	// (0x000266fa) eswt_control_pane_g2

0xedba,	// (0x00026707) eswt_control_pane_g3_ParamLimits

0xedba,	// (0x00026707) eswt_control_pane_g3

0xedc7,	// (0x00026714) eswt_control_pane_g4_ParamLimits

0xedc7,	// (0x00026714) eswt_control_pane_g4

0x0003,

0xfbf5,	// (0x00027542) eswt_control_pane_g_ParamLimits

0xfbf5,	// (0x00027542) eswt_control_pane_g

0xa880,	// (0x000221cd) bg_button_pane_ParamLimits

0xa880,	// (0x000221cd) bg_button_pane

0xa5f1,	// (0x00021f3e) common_borders_pane_copy2_ParamLimits

0xa5f1,	// (0x00021f3e) common_borders_pane_copy2

0xedd4,	// (0x00026721) control_button_pane_g1_ParamLimits

0xedd4,	// (0x00026721) control_button_pane_g1

0xede0,	// (0x0002672d) control_button_pane_g2_ParamLimits

0xede0,	// (0x0002672d) control_button_pane_g2

0xedec,	// (0x00026739) control_button_pane_g3_ParamLimits

0xedec,	// (0x00026739) control_button_pane_g3

0x0002,

0xfbfe,	// (0x0002754b) control_button_pane_g_ParamLimits

0xfbfe,	// (0x0002754b) control_button_pane_g

0xee00,	// (0x0002674d) control_button_pane_t1

0xee0e,	// (0x0002675b) control_button_pane_t2

0x0001,

0xfc05,	// (0x00027552) control_button_pane_t

0xbd28,	// (0x00023675) bg_button_pane_g1

0xbd30,	// (0x0002367d) bg_button_pane_g2

0xbd38,	// (0x00023685) bg_button_pane_g3

0xbd40,	// (0x0002368d) bg_button_pane_g4

0xbd48,	// (0x00023695) bg_button_pane_g5

0xbd50,	// (0x0002369d) bg_button_pane_g6

0xbd58,	// (0x000236a5) bg_button_pane_g7

0xbd60,	// (0x000236ad) bg_button_pane_g8

0xbd68,	// (0x000236b5) bg_button_pane_g9

0x0008,

0xf85b,	// (0x000271a8) bg_button_pane_g

0xe40b,	// (0x00025d58) common_borders_pane_ParamLimits

0xe40b,	// (0x00025d58) common_borders_pane

0xeda0,	// (0x000266ed) eswt_control_pane_g1_copy1_ParamLimits

0xeda0,	// (0x000266ed) eswt_control_pane_g1_copy1

0xedad,	// (0x000266fa) eswt_control_pane_g2_copy1_ParamLimits

0xedad,	// (0x000266fa) eswt_control_pane_g2_copy1

0xedba,	// (0x00026707) eswt_control_pane_g3_copy1_ParamLimits

0xedba,	// (0x00026707) eswt_control_pane_g3_copy1

0xedc7,	// (0x00026714) eswt_control_pane_g4_copy1_ParamLimits

0xedc7,	// (0x00026714) eswt_control_pane_g4_copy1

0xe446,	// (0x00025d93) bg_eswt_ctrl_canvas_pane_g1

0xe40b,	// (0x00025d58) common_borders_pane_cp2_ParamLimits

0xe40b,	// (0x00025d58) common_borders_pane_cp2

0xe40b,	// (0x00025d58) common_borders_pane_cp3_ParamLimits

0xe40b,	// (0x00025d58) common_borders_pane_cp3

0xee1c,	// (0x00026769) separator_horizontal_pane

0xee24,	// (0x00026771) separator_vertical_pane

0xeda0,	// (0x000266ed) eswt_control_pane_g1_copy2_ParamLimits

0xeda0,	// (0x000266ed) eswt_control_pane_g1_copy2

0xedad,	// (0x000266fa) eswt_control_pane_g2_copy2_ParamLimits

0xedad,	// (0x000266fa) eswt_control_pane_g2_copy2

0xedba,	// (0x00026707) eswt_control_pane_g3_copy2_ParamLimits

0xedba,	// (0x00026707) eswt_control_pane_g3_copy2

0xedc7,	// (0x00026714) eswt_control_pane_g4_copy2_ParamLimits

0xedc7,	// (0x00026714) eswt_control_pane_g4_copy2

0x9f39,	// (0x00021886) common_borders_pane_cp4

0xee2d,	// (0x0002677a) separator_horizontal_pane_g1

0xee36,	// (0x00026783) separator_horizontal_pane_g2

0xee3f,	// (0x0002678c) separator_horizontal_pane_g3

0x0002,

0xfc0a,	// (0x00027557) separator_horizontal_pane_g

0xeda0,	// (0x000266ed) eswt_control_pane_g1_copy3_ParamLimits

0xeda0,	// (0x000266ed) eswt_control_pane_g1_copy3

0xedad,	// (0x000266fa) eswt_control_pane_g2_copy3_ParamLimits

0xedad,	// (0x000266fa) eswt_control_pane_g2_copy3

0xedba,	// (0x00026707) eswt_control_pane_g3_copy3_ParamLimits

0xedba,	// (0x00026707) eswt_control_pane_g3_copy3

0xedc7,	// (0x00026714) eswt_control_pane_g4_copy3_ParamLimits

0xedc7,	// (0x00026714) eswt_control_pane_g4_copy3

0x9f39,	// (0x00021886) common_borders_pane_cp5

0xee48,	// (0x00026795) separator_vertical_pane_g1

0xee51,	// (0x0002679e) separator_vertical_pane_g2

0xee5a,	// (0x000267a7) separator_vertical_pane_g3

0x0002,

0xfc11,	// (0x0002755e) separator_vertical_pane_g

0xeda0,	// (0x000266ed) eswt_control_pane_g1_copy4_ParamLimits

0xeda0,	// (0x000266ed) eswt_control_pane_g1_copy4

0xedad,	// (0x000266fa) eswt_control_pane_g2_copy4_ParamLimits

0xedad,	// (0x000266fa) eswt_control_pane_g2_copy4

0xedba,	// (0x00026707) eswt_control_pane_g3_copy4_ParamLimits

0xedba,	// (0x00026707) eswt_control_pane_g3_copy4

0xedc7,	// (0x00026714) eswt_control_pane_g4_copy4_ParamLimits

0xedc7,	// (0x00026714) eswt_control_pane_g4_copy4

0xee63,	// (0x000267b0) eswt_ctrl_combo_button_pane

0xee6b,	// (0x000267b8) eswt_ctrl_input_pane

0xee73,	// (0x000267c0) popup_choice_list_window_cp70

0xee7b,	// (0x000267c8) eswt_ctrl_input_pane_t1

0x9f39,	// (0x00021886) input_focus_pane_cp70

0xe40b,	// (0x00025d58) bg_button_pane_cp70_ParamLimits

0xe40b,	// (0x00025d58) bg_button_pane_cp70

0xee89,	// (0x000267d6) eswt_ctrl_combo_button_pane_g1

0xee91,	// (0x000267de) wait_bar_pane_cp70

0xbe18,	// (0x00023765) bg_popup_window_pane_cp70_ParamLimits

0xbe18,	// (0x00023765) bg_popup_window_pane_cp70

0xee99,	// (0x000267e6) popup_eswt_tasktip_window_t1

0xeeaf,	// (0x000267fc) wait_bar_pane_cp71_ParamLimits

0xeeaf,	// (0x000267fc) wait_bar_pane_cp71

0xeebb,	// (0x00026808) grid_eswt_app_pane

0xad20,	// (0x0002266d) scroll_pane_cp70

0xeec4,	// (0x00026811) cell_eswt_app_pane_ParamLimits

0xeec4,	// (0x00026811) cell_eswt_app_pane

0xeef8,	// (0x00026845) cell_eswt_app_pane_g1_ParamLimits

0xeef8,	// (0x00026845) cell_eswt_app_pane_g1

0xef27,	// (0x00026874) cell_eswt_app_pane_g2_ParamLimits

0xef27,	// (0x00026874) cell_eswt_app_pane_g2

0x0001,

0xfc18,	// (0x00027565) cell_eswt_app_pane_g_ParamLimits

0xfc18,	// (0x00027565) cell_eswt_app_pane_g

0xef50,	// (0x0002689d) cell_eswt_app_pane_t1_ParamLimits

0xef50,	// (0x0002689d) cell_eswt_app_pane_t1

0xef82,	// (0x000268cf) grid_highlight_pane_cp70_ParamLimits

0xef82,	// (0x000268cf) grid_highlight_pane_cp70

0xb3bd,	// (0x00022d0a) set_content_pane_g1

0xb786,	// (0x000230d3) status_small_volume_pane

0x93ae,	// (0x00020cfb) status_small_volume_pane_g1

0x93b6,	// (0x00020d03) volume_small2_pane

0x93bf,	// (0x00020d0c) volume_small2_pane_g1

0x93c8,	// (0x00020d15) volume_small2_pane_g2

0x93d1,	// (0x00020d1e) volume_small2_pane_g3

0x93da,	// (0x00020d27) volume_small2_pane_g4

0x93e3,	// (0x00020d30) volume_small2_pane_g5

0x93ec,	// (0x00020d39) volume_small2_pane_g6

0x93f5,	// (0x00020d42) volume_small2_pane_g7

0x93fe,	// (0x00020d4b) volume_small2_pane_g8

0x9407,	// (0x00020d54) volume_small2_pane_g9

0x9410,	// (0x00020d5d) volume_small2_pane_g10

0x0009,

0xfc1d,	// (0x0002756a) volume_small2_pane_g

0xe809,	// (0x00026156) fep_vkb_top_text_pane_g1_ParamLimits

0xe824,	// (0x00026171) fep_vkb_top_text_pane_t1_ParamLimits

0xea86,	// (0x000263d3) popup_preview_fixed_window_g3_ParamLimits

0xea86,	// (0x000263d3) popup_preview_fixed_window_g3

0x8b82,	// (0x000204cf) popup_toolbar_trans_pane

0xd188,	// (0x00024ad5) aid_height_set_list_ParamLimits

0xd199,	// (0x00024ae6) aid_size_parent_ParamLimits

0xb826,	// (0x00023173) list_highlight_pane_cp2_ParamLimits

0xb3bd,	// (0x00022d0a) set_content_pane_g1_ParamLimits

0x7619,	// (0x0001ef66) list_single_image_pane_ParamLimits

0x7619,	// (0x0001ef66) list_single_image_pane

0xef8e,	// (0x000268db) aid_size_cell_image_ParamLimits

0xef8e,	// (0x000268db) aid_size_cell_image

0xef9b,	// (0x000268e8) grid_single_image_pane_ParamLimits

0xef9b,	// (0x000268e8) grid_single_image_pane

0xa89a,	// (0x000221e7) list_single_image_pane_g1_ParamLimits

0xa89a,	// (0x000221e7) list_single_image_pane_g1

0xa8a6,	// (0x000221f3) list_single_image_pane_g2_ParamLimits

0xa8a6,	// (0x000221f3) list_single_image_pane_g2

0x0001,

0xfc32,	// (0x0002757f) list_single_image_pane_g_ParamLimits

0xfc32,	// (0x0002757f) list_single_image_pane_g

0xefa7,	// (0x000268f4) list_single_image_pane_t1_ParamLimits

0xefa7,	// (0x000268f4) list_single_image_pane_t1

0xefbd,	// (0x0002690a) cell_image_list_pane_ParamLimits

0xefbd,	// (0x0002690a) cell_image_list_pane

0xefd1,	// (0x0002691e) cell_image_list_pane_g1

0xefda,	// (0x00026927) cell_image_list_pane_g2

0x0001,

0xfc37,	// (0x00027584) cell_image_list_pane_g

0xefe3,	// (0x00026930) aid_size_cell_tb_trans_pane

0xa880,	// (0x000221cd) bg_tb_trans_pane

0xeff5,	// (0x00026942) grid_tb_trans_pane

0xbd28,	// (0x00023675) bg_tb_trans_pane_g1

0xbd30,	// (0x0002367d) bg_tb_trans_pane_g2

0xbd38,	// (0x00023685) bg_tb_trans_pane_g3

0xbd40,	// (0x0002368d) bg_tb_trans_pane_g4

0xbd48,	// (0x00023695) bg_tb_trans_pane_g5

0xbd60,	// (0x000236ad) bg_tb_trans_pane_g6

0xbd68,	// (0x000236b5) bg_tb_trans_pane_g7

0xbd50,	// (0x0002369d) bg_tb_trans_pane_g8

0xbd58,	// (0x000236a5) bg_tb_trans_pane_g9

0x0008,

0xfc3c,	// (0x00027589) bg_tb_trans_pane_g

0xf009,	// (0x00026956) cell_toolbar_trans_pane_ParamLimits

0xf009,	// (0x00026956) cell_toolbar_trans_pane

0xe446,	// (0x00025d93) cell_toolbar_trans_pane_g1

0xdfda,	// (0x00025927) list_form2_midp_pane_t1

0xdfe8,	// (0x00025935) list_form2_midp_pane_t2

0x0001,

0xfae5,	// (0x00027432) list_form2_midp_pane_t

0xdff6,	// (0x00025943) scroll_pane_cp51_ParamLimits

0xe1b1,	// (0x00025afe) form2_midp_wait_pane_g1

0xe1ba,	// (0x00025b07) form2_midp_wait_pane_g2

0xe1c3,	// (0x00025b10) form2_midp_wait_pane_g3

0x0002,

0xfafa,	// (0x00027447) form2_midp_wait_pane_g

0xa02d,	// (0x0002197a) list_highlight_pane_cp21_ParamLimits

0xe212,	// (0x00025b5f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe221,	// (0x00025b6e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x75a5,	// (0x0001eef2) list_single_2graphic_im_pane_ParamLimits

0x75a5,	// (0x0001eef2) list_single_2graphic_im_pane

0xf02f,	// (0x0002697c) list_single_2graphic_im_pane_g1_ParamLimits

0xf02f,	// (0x0002697c) list_single_2graphic_im_pane_g1

0xf040,	// (0x0002698d) list_single_2graphic_im_pane_g2_ParamLimits

0xf040,	// (0x0002698d) list_single_2graphic_im_pane_g2

0xf04c,	// (0x00026999) list_single_2graphic_im_pane_g3_ParamLimits

0xf04c,	// (0x00026999) list_single_2graphic_im_pane_g3

0x0003,

0xfc4f,	// (0x0002759c) list_single_2graphic_im_pane_g_ParamLimits

0xfc4f,	// (0x0002759c) list_single_2graphic_im_pane_g

0xf06c,	// (0x000269b9) list_single_2graphic_im_pane_t1_ParamLimits

0xf06c,	// (0x000269b9) list_single_2graphic_im_pane_t1

0xea92,	// (0x000263df) list_single_graphic_2heading_pane_fp_ParamLimits

0xea92,	// (0x000263df) list_single_graphic_2heading_pane_fp

0x78f4,	// (0x0001f241) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x78f4,	// (0x0001f241) list_single_graphic_2heading_pane_fp_g1

0xeaa9,	// (0x000263f6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xeaa9,	// (0x000263f6) list_single_graphic_2heading_pane_fp_g2

0x6f0f,	// (0x0001e85c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6f0f,	// (0x0001e85c) list_single_graphic_2heading_pane_fp_g3

0x78c9,	// (0x0001f216) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x78c9,	// (0x0001f216) list_single_graphic_2heading_pane_fp_g4

0xeab5,	// (0x00026402) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xeab5,	// (0x00026402) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x000274ca) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x000274ca) list_single_graphic_2heading_pane_fp_g

0x7acd,	// (0x0001f41a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7acd,	// (0x0001f41a) list_single_graphic_2heading_pane_fp_t1

0x792c,	// (0x0001f279) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x792c,	// (0x0001f279) list_single_graphic_2heading_pane_fp_t2

0x7ae3,	// (0x0001f430) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7ae3,	// (0x0001f430) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc58,	// (0x000275a5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc58,	// (0x000275a5) list_single_graphic_2heading_pane_fp_t

0xe4c8,	// (0x00025e15) fep_hwr_write_pane_g5_ParamLimits

0xe4c8,	// (0x00025e15) fep_hwr_write_pane_g5

0xe4d4,	// (0x00025e21) fep_hwr_write_pane_g6_ParamLimits

0xe4d4,	// (0x00025e21) fep_hwr_write_pane_g6

0xed6f,	// (0x000266bc) eswt_shell_pane_ParamLimits

0xbe18,	// (0x00023765) bg_popup_window_pane_cp18_ParamLimits

0xd0e7,	// (0x00024a34) heading_pane_cp70

0xee99,	// (0x000267e6) popup_eswt_tasktip_window_t1_ParamLimits

0xb89d,	// (0x000231ea) aid_touch_tab_arrow_left

0xb8ac,	// (0x000231f9) aid_touch_tab_arrow_right

0x9f75,	// (0x000218c2) title_pane_g3_ParamLimits

0x9f75,	// (0x000218c2) title_pane_g3

0xa83f,	// (0x0002218c) set_value_pane_g1

0x8b82,	// (0x000204cf) popup_toolbar_trans_pane_ParamLimits

0xefe3,	// (0x00026930) aid_size_cell_tb_trans_pane_ParamLimits

0xa880,	// (0x000221cd) bg_tb_trans_pane_ParamLimits

0xeff5,	// (0x00026942) grid_tb_trans_pane_ParamLimits

0xa2b6,	// (0x00021c03) cont_note_pane_ParamLimits

0xa2b6,	// (0x00021c03) cont_note_pane

0xa5f1,	// (0x00021f3e) cont_snote2_single_text_pane_ParamLimits

0xa5f1,	// (0x00021f3e) cont_snote2_single_text_pane

0xa5f1,	// (0x00021f3e) cont_snote2_single_graphic_pane_ParamLimits

0xa5f1,	// (0x00021f3e) cont_snote2_single_graphic_pane

0xc43e,	// (0x00023d8b) cont_note_wait_pane_ParamLimits

0xc43e,	// (0x00023d8b) cont_note_wait_pane

0xc43e,	// (0x00023d8b) cont_note_image_pane_ParamLimits

0xc43e,	// (0x00023d8b) cont_note_image_pane

0xf09d,	// (0x000269ea) popup_note2_window_g1_ParamLimits

0xf09d,	// (0x000269ea) popup_note2_window_g1

0xf0ce,	// (0x00026a1b) popup_note2_window_t1_ParamLimits

0xf0ce,	// (0x00026a1b) popup_note2_window_t1

0xf113,	// (0x00026a60) popup_note2_window_t2_ParamLimits

0xf113,	// (0x00026a60) popup_note2_window_t2

0xf158,	// (0x00026aa5) popup_note2_window_t3_ParamLimits

0xf158,	// (0x00026aa5) popup_note2_window_t3

0xf19d,	// (0x00026aea) popup_note2_window_t4_ParamLimits

0xf19d,	// (0x00026aea) popup_note2_window_t4

0xa32e,	// (0x00021c7b) popup_note2_window_t5_ParamLimits

0xa32e,	// (0x00021c7b) popup_note2_window_t5

0x0004,

0xfc64,	// (0x000275b1) popup_note2_window_t_ParamLimits

0xfc64,	// (0x000275b1) popup_note2_window_t

0xf1cc,	// (0x00026b19) popup_note2_image_window_g1_ParamLimits

0xf1cc,	// (0x00026b19) popup_note2_image_window_g1

0xf1d8,	// (0x00026b25) popup_note2_image_window_g2_ParamLimits

0xf1d8,	// (0x00026b25) popup_note2_image_window_g2

0x0001,

0xfc6f,	// (0x000275bc) popup_note2_image_window_g_ParamLimits

0xfc6f,	// (0x000275bc) popup_note2_image_window_g

0xf1ea,	// (0x00026b37) popup_note2_image_window_t1_ParamLimits

0xf1ea,	// (0x00026b37) popup_note2_image_window_t1

0xf202,	// (0x00026b4f) popup_note2_image_window_t2_ParamLimits

0xf202,	// (0x00026b4f) popup_note2_image_window_t2

0xf21a,	// (0x00026b67) popup_note2_image_window_t3_ParamLimits

0xf21a,	// (0x00026b67) popup_note2_image_window_t3

0x0002,

0xfc74,	// (0x000275c1) popup_note2_image_window_t_ParamLimits

0xfc74,	// (0x000275c1) popup_note2_image_window_t

0xc44c,	// (0x00023d99) popup_note2_wait_window_g1_ParamLimits

0xc44c,	// (0x00023d99) popup_note2_wait_window_g1

0xc458,	// (0x00023da5) popup_note2_wait_window_g2_ParamLimits

0xc458,	// (0x00023da5) popup_note2_wait_window_g2

0xc464,	// (0x00023db1) popup_note2_wait_window_g3_ParamLimits

0xc464,	// (0x00023db1) popup_note2_wait_window_g3

0x0002,

0xf83d,	// (0x0002718a) popup_note2_wait_window_g_ParamLimits

0xf83d,	// (0x0002718a) popup_note2_wait_window_g

0xf236,	// (0x00026b83) popup_note2_wait_window_t1_ParamLimits

0xf236,	// (0x00026b83) popup_note2_wait_window_t1

0xf254,	// (0x00026ba1) popup_note2_wait_window_t2_ParamLimits

0xf254,	// (0x00026ba1) popup_note2_wait_window_t2

0xf272,	// (0x00026bbf) popup_note2_wait_window_t3_ParamLimits

0xf272,	// (0x00026bbf) popup_note2_wait_window_t3

0xf284,	// (0x00026bd1) popup_note2_wait_window_t4_ParamLimits

0xf284,	// (0x00026bd1) popup_note2_wait_window_t4

0x0003,

0xfc7b,	// (0x000275c8) popup_note2_wait_window_t_ParamLimits

0xfc7b,	// (0x000275c8) popup_note2_wait_window_t

0xf296,	// (0x00026be3) wait_bar2_pane_ParamLimits

0xf296,	// (0x00026be3) wait_bar2_pane

0xf2ae,	// (0x00026bfb) popup_snote2_single_text_window_g1_ParamLimits

0xf2ae,	// (0x00026bfb) popup_snote2_single_text_window_g1

0xf2d6,	// (0x00026c23) popup_snote2_single_text_window_t1_ParamLimits

0xf2d6,	// (0x00026c23) popup_snote2_single_text_window_t1

0xf322,	// (0x00026c6f) popup_snote2_single_text_window_t2_ParamLimits

0xf322,	// (0x00026c6f) popup_snote2_single_text_window_t2

0xf36e,	// (0x00026cbb) popup_snote2_single_text_window_t3_ParamLimits

0xf36e,	// (0x00026cbb) popup_snote2_single_text_window_t3

0xf3af,	// (0x00026cfc) popup_snote2_single_text_window_t4_ParamLimits

0xf3af,	// (0x00026cfc) popup_snote2_single_text_window_t4

0xf3e5,	// (0x00026d32) popup_snote2_single_text_window_t5_ParamLimits

0xf3e5,	// (0x00026d32) popup_snote2_single_text_window_t5

0x0004,

0xfc84,	// (0x000275d1) popup_snote2_single_text_window_t_ParamLimits

0xfc84,	// (0x000275d1) popup_snote2_single_text_window_t

0xf410,	// (0x00026d5d) popup_snote2_single_graphic_window_g1_ParamLimits

0xf410,	// (0x00026d5d) popup_snote2_single_graphic_window_g1

0xf438,	// (0x00026d85) popup_snote2_single_graphic_window_g2_ParamLimits

0xf438,	// (0x00026d85) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8f,	// (0x000275dc) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8f,	// (0x000275dc) popup_snote2_single_graphic_window_g

0xf460,	// (0x00026dad) popup_snote2_single_graphic_window_t1_ParamLimits

0xf460,	// (0x00026dad) popup_snote2_single_graphic_window_t1

0xf4ac,	// (0x00026df9) popup_snote2_single_graphic_window_t2_ParamLimits

0xf4ac,	// (0x00026df9) popup_snote2_single_graphic_window_t2

0xf36e,	// (0x00026cbb) popup_snote2_single_graphic_window_t3_ParamLimits

0xf36e,	// (0x00026cbb) popup_snote2_single_graphic_window_t3

0xf3af,	// (0x00026cfc) popup_snote2_single_graphic_window_t4_ParamLimits

0xf3af,	// (0x00026cfc) popup_snote2_single_graphic_window_t4

0xf3e5,	// (0x00026d32) popup_snote2_single_graphic_window_t5_ParamLimits

0xf3e5,	// (0x00026d32) popup_snote2_single_graphic_window_t5

0x0004,

0xfc94,	// (0x000275e1) popup_snote2_single_graphic_window_t_ParamLimits

0xfc94,	// (0x000275e1) popup_snote2_single_graphic_window_t

0xdeaf,	// (0x000257fc) clock_nsta_pane_cp2_t1

0xdeaf,	// (0x000257fc) clock_nsta_pane_cp2_t2

0x0001,

0xfabb,	// (0x00027408) clock_nsta_pane_cp2_t

0x7242,	// (0x0001eb8f) form_field_data_wide_pane_g1_ParamLimits

0xa89a,	// (0x000221e7) form_field_data_wide_pane_g2_ParamLimits

0xa89a,	// (0x000221e7) form_field_data_wide_pane_g2

0xa8a6,	// (0x000221f3) form_field_data_wide_pane_g3_ParamLimits

0xa8a6,	// (0x000221f3) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x00026fc9) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x00026fc9) form_field_data_wide_pane_g

0xdd88,	// (0x000256d5) grid_touch_3_pane_ParamLimits

0xdd88,	// (0x000256d5) grid_touch_3_pane

0xf4f8,	// (0x00026e45) cell_touch_3_pane_ParamLimits

0xf4f8,	// (0x00026e45) cell_touch_3_pane

0xe446,	// (0x00025d93) cell_touch_3_pane_g1

0xe446,	// (0x00025d93) cell_touch_3_pane_g2

0x0001,

0xfb40,	// (0x0002748d) cell_touch_3_pane_g

0xa360,	// (0x00021cad) cont_query_data_pane

0xa368,	// (0x00021cb5) cont_query_data_pane_cp1

0xf527,	// (0x00026e74) button_value_adjust_pane_cp7

0xf52f,	// (0x00026e7c) query_popup_pane_cp3

0xafcd,	// (0x0002291a) bg_popup_sub_pane_cp22_ParamLimits

0x8302,	// (0x0001fc4f) navi_navi_volume_pane_cp2

0x831d,	// (0x0001fc6a) popup_side_volume_key_window_g2

0x832c,	// (0x0001fc79) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0002705f) popup_side_volume_key_window_g

0x8349,	// (0x0001fc96) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x00027066) popup_side_volume_key_window_t

0xb287,	// (0x00022bd4) popup_side_volume_key_window_ParamLimits

0x6edb,	// (0x0001e828) list_double_graphic_pane_g4_ParamLimits

0x6edb,	// (0x0001e828) list_double_graphic_pane_g4

0x75f2,	// (0x0001ef3f) list_single_2heading_msg_pane_ParamLimits

0x75f2,	// (0x0001ef3f) list_single_2heading_msg_pane

0x7b03,	// (0x0001f450) list_single_2heading_msg_pane_g1_ParamLimits

0x7b03,	// (0x0001f450) list_single_2heading_msg_pane_g1

0x6d2c,	// (0x0001e679) list_single_2heading_msg_pane_g2_ParamLimits

0x6d2c,	// (0x0001e679) list_single_2heading_msg_pane_g2

0x76d8,	// (0x0001f025) list_single_2heading_msg_pane_g3_ParamLimits

0x76d8,	// (0x0001f025) list_single_2heading_msg_pane_g3

0x7b0f,	// (0x0001f45c) list_single_2heading_msg_pane_g4_ParamLimits

0x7b0f,	// (0x0001f45c) list_single_2heading_msg_pane_g4

0x0003,

0xfc9f,	// (0x000275ec) list_single_2heading_msg_pane_g_ParamLimits

0xfc9f,	// (0x000275ec) list_single_2heading_msg_pane_g

0x7b27,	// (0x0001f474) list_single_2heading_msg_pane_t1_ParamLimits

0x7b27,	// (0x0001f474) list_single_2heading_msg_pane_t1

0x7b4f,	// (0x0001f49c) list_single_2heading_msg_pane_t2_ParamLimits

0x7b4f,	// (0x0001f49c) list_single_2heading_msg_pane_t2

0x7b83,	// (0x0001f4d0) list_single_2heading_msg_pane_t3_ParamLimits

0x7b83,	// (0x0001f4d0) list_single_2heading_msg_pane_t3

0x7bbc,	// (0x0001f509) list_single_2heading_msg_pane_t4_ParamLimits

0x7bbc,	// (0x0001f509) list_single_2heading_msg_pane_t4

0x0003,

0xfca8,	// (0x000275f5) list_single_2heading_msg_pane_t_ParamLimits

0xfca8,	// (0x000275f5) list_single_2heading_msg_pane_t

0x9f81,	// (0x000218ce) title_pane_g4_ParamLimits

0x9f81,	// (0x000218ce) title_pane_g4

0x8110,	// (0x0001fa5d) title_pane_stacon_g3_ParamLimits

0x8110,	// (0x0001fa5d) title_pane_stacon_g3

0xf060,	// (0x000269ad) list_single_2graphic_im_pane_g4_ParamLimits

0xf060,	// (0x000269ad) list_single_2graphic_im_pane_g4

0xce8d,	// (0x000247da) popup_side_volume_key_window_cp

0xd6c2,	// (0x0002500f) main_idle_act2_pane_t1

0x8c72,	// (0x000205bf) toolbar_button_pane_g10

0xa7e9,	// (0x00022136) popup_toolbar_window_cp1

0xdea0,	// (0x000257ed) clock_nsta_pane_cp_t1

0xdea0,	// (0x000257ed) clock_nsta_pane_cp_t2

0x0001,

0xfab6,	// (0x00027403) clock_nsta_pane_cp_t

0x8302,	// (0x0001fc4f) navi_navi_volume_pane_cp2_ParamLimits

0x8311,	// (0x0001fc5e) popup_side_volume_key_window_g1_ParamLimits

0x831d,	// (0x0001fc6a) popup_side_volume_key_window_g2_ParamLimits

0x832c,	// (0x0001fc79) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0002705f) popup_side_volume_key_window_g_ParamLimits

0x90d9,	// (0x00020a26) fep_hwr_aid_pane

0x2ec5,	// (0x0001a812) bg_fep_hwr_top_pane_g4_ParamLimits

0xe498,	// (0x00025de5) fep_hwr_top_pane_g1_ParamLimits

0xe4aa,	// (0x00025df7) fep_hwr_top_pane_g2_ParamLimits

0x9192,	// (0x00020adf) fep_hwr_top_pane_g3_ParamLimits

0xfb0b,	// (0x00027458) fep_hwr_top_pane_g_ParamLimits

0x91a7,	// (0x00020af4) fep_hwr_top_text_pane_ParamLimits

0xcc4e,	// (0x0002459b) aid_touch_tab_arrow_arrow_2

0xcc57,	// (0x000245a4) aid_touch_tab_arrow_left_2

0x90ed,	// (0x00020a3a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x9124,	// (0x00020a71) fep_hwr_prediction_pane

0xe611,	// (0x00025f5e) fep_vkb_prediction_pane

0xe715,	// (0x00026062) fep_vkb_side_pane_g3_ParamLimits

0xe715,	// (0x00026062) fep_vkb_side_pane_g3

0xe6c1,	// (0x0002600e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xeb09,	// (0x00026456) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xeb16,	// (0x00026463) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb5,	// (0x00027502) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x00c9,	// (0x00017a16) fep_hwr_prediction_pane_g1

0x9419,	// (0x00020d66) fep_hwr_prediction_pane_g2

0x9421,	// (0x00020d6e) fep_hwr_prediction_pane_g3

0x9429,	// (0x00020d76) fep_hwr_prediction_pane_g4

0x0003,

0xfcb1,	// (0x000275fe) fep_hwr_prediction_pane_g

0x00c9,	// (0x00017a16) fep_vkb_prediction_pane_g1

0x00d3,	// (0x00017a20) fep_vkb_prediction_pane_g2

0x00db,	// (0x00017a28) fep_vkb_prediction_pane_g3

0x00e3,	// (0x00017a30) fep_vkb_prediction_pane_g4

0x0003,

0xfcba,	// (0x00027607) fep_vkb_prediction_pane_g

0xd5f9,	// (0x00024f46) slider_set_pane_g3

0xd60d,	// (0x00024f5a) slider_set_pane_g4

0xd625,	// (0x00024f72) slider_set_pane_g5

0xd5f9,	// (0x00024f46) slider_set_pane_g6

0x8f4a,	// (0x00020897) slider_set_pane_g7

0xd2f6,	// (0x00024c43) slider_form_pane_g3

0xd2ff,	// (0x00024c4c) slider_form_pane_g4

0xd307,	// (0x00024c54) slider_form_pane_g5

0xd2f6,	// (0x00024c43) slider_form_pane_g6

0xd30f,	// (0x00024c5c) slider_form_pane_g7

0xd96e,	// (0x000252bb) slider_set_pane_vc_g3

0xd977,	// (0x000252c4) slider_set_pane_vc_g4

0xd980,	// (0x000252cd) slider_set_pane_vc_g5

0xd96e,	// (0x000252bb) slider_set_pane_vc_g6

0xd989,	// (0x000252d6) slider_set_pane_vc_g7

0xdb5d,	// (0x000254aa) slider_form_pane_vc_g1

0xdb66,	// (0x000254b3) slider_form_pane_vc_g2

0xdb6f,	// (0x000254bc) slider_form_pane_vc_g3

0xdb5d,	// (0x000254aa) slider_form_pane_vc_g4

0xdb78,	// (0x000254c5) slider_form_pane_vc_g5

0x0004,

0xfa88,	// (0x000273d5) slider_form_pane_vc_g

0x9f39,	// (0x00021886) main_idle_act3_pane

0x00eb,	// (0x00017a38) ai3_links_pane

0x00f4,	// (0x00017a41) popup_ai3_data_window_ParamLimits

0x00f4,	// (0x00017a41) popup_ai3_data_window

0x9f39,	// (0x00021886) grid_ai3_links_pane

0x010c,	// (0x00017a59) cell_ai3_links_pane_ParamLimits

0x010c,	// (0x00017a59) cell_ai3_links_pane

0x0124,	// (0x00017a71) bg_popup_sub_pane_cp11

0x0131,	// (0x00017a7e) cell_ai3_links_pane_g1

0x9f39,	// (0x00021886) bg_popup_sub_pane_cp12

0x0156,	// (0x00017aa3) heading_ai3_data_pane

0x015e,	// (0x00017aab) list_ai3_gene_pane

0x016a,	// (0x00017ab7) popup_ai3_data_window_g1

0x0172,	// (0x00017abf) heading_ai3_data_pane_g1

0x017a,	// (0x00017ac7) heading_ai3_data_pane_t1

0x0188,	// (0x00017ad5) list_double_ai3_gene_pane_ParamLimits

0x0188,	// (0x00017ad5) list_double_ai3_gene_pane

0x0195,	// (0x00017ae2) list_single_ai3_gene_pane_ParamLimits

0x0195,	// (0x00017ae2) list_single_ai3_gene_pane

0xe40b,	// (0x00025d58) list_highlight_pane_cp7_ParamLimits

0xe40b,	// (0x00025d58) list_highlight_pane_cp7

0x01a2,	// (0x00017aef) list_single_a13_gene_pane_t1_ParamLimits

0x01a2,	// (0x00017aef) list_single_a13_gene_pane_t1

0x01b9,	// (0x00017b06) list_single_ai3_gene_pane_g1

0x01c2,	// (0x00017b0f) list_single_ai3_gene_pane_g2

0x0001,

0xfcc3,	// (0x00027610) list_single_ai3_gene_pane_g

0x01ca,	// (0x00017b17) list_double_ai3_gene_pane_g1_ParamLimits

0x01ca,	// (0x00017b17) list_double_ai3_gene_pane_g1

0x01d6,	// (0x00017b23) list_double_ai3_gene_pane_t1_ParamLimits

0x01d6,	// (0x00017b23) list_double_ai3_gene_pane_t1

0x01f2,	// (0x00017b3f) list_double_ai3_gene_pane_t2_ParamLimits

0x01f2,	// (0x00017b3f) list_double_ai3_gene_pane_t2

0x0207,	// (0x00017b54) list_double_ai3_gene_pane_t3_ParamLimits

0x0207,	// (0x00017b54) list_double_ai3_gene_pane_t3

0x0002,

0xfcc8,	// (0x00027615) list_double_ai3_gene_pane_t_ParamLimits

0xfcc8,	// (0x00027615) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7af9,	// (0x0001f446) aid_size_min_col_2

0xf540,	// (0x00026e8d) aid_size_min_msg_ParamLimits

0xf540,	// (0x00026e8d) aid_size_min_msg

0xe815,	// (0x00026162) fep_vkb_top_text_pane_g2_ParamLimits

0xe815,	// (0x00026162) fep_vkb_top_text_pane_g2

0x0001,

0xfb3b,	// (0x00027488) fep_vkb_top_text_pane_g_ParamLimits

0xfb3b,	// (0x00027488) fep_vkb_top_text_pane_g

0x9f39,	// (0x00021886) main_hc_apps_shell_pane

0x0224,	// (0x00017b71) grid_hc_apps_pane_ParamLimits

0x0224,	// (0x00017b71) grid_hc_apps_pane

0x0233,	// (0x00017b80) list_hc_apps_pane

0x023b,	// (0x00017b88) scroll_pane_cp37_ParamLimits

0x023b,	// (0x00017b88) scroll_pane_cp37

0x0247,	// (0x00017b94) cell_hc_apps_pane_ParamLimits

0x0247,	// (0x00017b94) cell_hc_apps_pane

0x02f7,	// (0x00017c44) cell_hc_apps_pane_g1_ParamLimits

0x02f7,	// (0x00017c44) cell_hc_apps_pane_g1

0x0328,	// (0x00017c75) cell_hc_apps_pane_g2_ParamLimits

0x0328,	// (0x00017c75) cell_hc_apps_pane_g2

0x0344,	// (0x00017c91) cell_hc_apps_pane_g3_ParamLimits

0x0344,	// (0x00017c91) cell_hc_apps_pane_g3

0x0002,

0xfccf,	// (0x0002761c) cell_hc_apps_pane_g_ParamLimits

0xfccf,	// (0x0002761c) cell_hc_apps_pane_g

0x0366,	// (0x00017cb3) cell_hc_apps_pane_t1_ParamLimits

0x0366,	// (0x00017cb3) cell_hc_apps_pane_t1

0xa2b6,	// (0x00021c03) grid_highlight_pane_cp10_ParamLimits

0xa2b6,	// (0x00021c03) grid_highlight_pane_cp10

0x03a6,	// (0x00017cf3) list_single_hc_apps_pane_ParamLimits

0x03a6,	// (0x00017cf3) list_single_hc_apps_pane

0x0419,	// (0x00017d66) list_single_hc_apps_pane_g1

0x7be1,	// (0x0001f52e) list_single_hc_apps_pane_g2

0x0001,

0xfcd6,	// (0x00027623) list_single_hc_apps_pane_g

0x7bfa,	// (0x0001f547) list_single_hc_apps_pane_g2_copy1

0x7c16,	// (0x0001f563) list_single_hc_apps_pane_t1

0xa02d,	// (0x0002197a) bg_set_opt_pane_cp_ParamLimits

0x803b,	// (0x0001f988) setting_slider_pane_t1_ParamLimits

0x8054,	// (0x0001f9a1) setting_slider_pane_t2_ParamLimits

0x806d,	// (0x0001f9ba) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00026eb1) setting_slider_pane_t_ParamLimits

0x8084,	// (0x0001f9d1) slider_set_pane_ParamLimits

0x85a7,	// (0x0001fef4) control_pane_g5_ParamLimits

0x85a7,	// (0x0001fef4) control_pane_g5

0xd153,	// (0x00024aa0) slider_set_pane_g1_ParamLimits

0x8f3e,	// (0x0002088b) slider_set_pane_g2_ParamLimits

0xd5f9,	// (0x00024f46) slider_set_pane_g3_ParamLimits

0xd60d,	// (0x00024f5a) slider_set_pane_g4_ParamLimits

0xd625,	// (0x00024f72) slider_set_pane_g5_ParamLimits

0xd5f9,	// (0x00024f46) slider_set_pane_g6_ParamLimits

0x8f4a,	// (0x00020897) slider_set_pane_g7_ParamLimits

0xf959,	// (0x000272a6) slider_set_pane_g_ParamLimits

0xb368,	// (0x00022cb5) navi_icon_text_pane_ParamLimits

0xb85e,	// (0x000231ab) aid_fill_nsta_2_ParamLimits

0xb89d,	// (0x000231ea) aid_touch_tab_arrow_left_ParamLimits

0xb8ac,	// (0x000231f9) aid_touch_tab_arrow_right_ParamLimits

0xb919,	// (0x00023266) clock_nsta_pane_ParamLimits

0xcc30,	// (0x0002457d) navi_icon_pane_g1_ParamLimits

0xcc3c,	// (0x00024589) navi_text_pane_t1_ParamLimits

0xdfb4,	// (0x00025901) navi_icon_text_pane_g1_ParamLimits

0xdfc0,	// (0x0002590d) navi_icon_text_pane_t1_ParamLimits

0x0419,	// (0x00017d66) list_single_hc_apps_pane_g1_ParamLimits

0x7be1,	// (0x0001f52e) list_single_hc_apps_pane_g2_ParamLimits

0xfcd6,	// (0x00027623) list_single_hc_apps_pane_g_ParamLimits

0x7bfa,	// (0x0001f547) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7c16,	// (0x0001f563) list_single_hc_apps_pane_t1_ParamLimits

0x7f55,	// (0x0001f8a2) popup_toolbar2_fixed_window_ParamLimits

0x7f55,	// (0x0001f8a2) popup_toolbar2_fixed_window

0x8b78,	// (0x000204c5) popup_toolbar2_float_window

0x9f39,	// (0x00021886) bg_popup_sub_pane_cp27

0x0495,	// (0x00017de2) grid_toolbar2_float_pane

0x9f39,	// (0x00021886) bg_popup_sub_pane_cp26

0x0495,	// (0x00017de2) grid_toolbar2_fixed_pane

0x049d,	// (0x00017dea) cell_toolbar2_fixed_pane_ParamLimits

0x049d,	// (0x00017dea) cell_toolbar2_fixed_pane

0x04ae,	// (0x00017dfb) cell_toolbar2_fixed_pane_g1

0x04b7,	// (0x00017e04) toolbar2_fixed_button_pane

0xbd28,	// (0x00023675) toolbar2_fixed_button_pane_g1

0xbd30,	// (0x0002367d) toolbar2_fixed_button_pane_g2

0xbd38,	// (0x00023685) toolbar2_fixed_button_pane_g3

0xbd40,	// (0x0002368d) toolbar2_fixed_button_pane_g4

0xbd48,	// (0x00023695) toolbar2_fixed_button_pane_g5

0xbd50,	// (0x0002369d) toolbar2_fixed_button_pane_g6

0xbd58,	// (0x000236a5) toolbar2_fixed_button_pane_g7

0xbd60,	// (0x000236ad) toolbar2_fixed_button_pane_g8

0xbd68,	// (0x000236b5) toolbar2_fixed_button_pane_g9

0x0008,

0xf85b,	// (0x000271a8) toolbar2_fixed_button_pane_g

0x04bf,	// (0x00017e0c) cell_toolbar2_float_pane_ParamLimits

0x04bf,	// (0x00017e0c) cell_toolbar2_float_pane

0x04d0,	// (0x00017e1d) cell_toolbar2_float_pane_g1

0x04b7,	// (0x00017e04) toolbar2_fixed_button_pane_cp

0xe56a,	// (0x00025eb7) fep_vkb_accented_list_pane_ParamLimits

0xe56a,	// (0x00025eb7) fep_vkb_accented_list_pane

0x92f5,	// (0x00020c42) bg_popup_fep_shadow_pane_g9

0xb4ea,	// (0x00022e37) bg_popup_fep_shadow_pane_cp3

0xa9e1,	// (0x0002232e) list_accented_list_pane

0x04d9,	// (0x00017e26) list_single_accented_list_pane_ParamLimits

0x04d9,	// (0x00017e26) list_single_accented_list_pane

0xb4ea,	// (0x00022e37) list_highlight_pane_cp10

0x04ea,	// (0x00017e37) list_single_accented_list_pane_t1

0x8ac8,	// (0x00020415) popup_slider_window_ParamLimits

0x8ac8,	// (0x00020415) popup_slider_window

0xf537,	// (0x00026e84) aid_indentation_list_msg

0x05a4,	// (0x00017ef1) bg_popup_window_pane_cp19

0x060e,	// (0x00017f5b) popup_slider_window_g1

0x062a,	// (0x00017f77) popup_slider_window_g2

0x0646,	// (0x00017f93) popup_slider_window_g3

0x0005,

0xfcdb,	// (0x00027628) popup_slider_window_g

0x06a2,	// (0x00017fef) popup_slider_window_t1

0x0716,	// (0x00018063) small_volume_slider_vertical_pane

0xe446,	// (0x00025d93) small_volume_slider_vertical_pane_g1

0xe446,	// (0x00025d93) small_volume_slider_vertical_pane_g2

0x0732,	// (0x0001807f) small_volume_slider_vertical_pane_g3

0x0002,

0xfced,	// (0x0002763a) small_volume_slider_vertical_pane_g

0x7d25,	// (0x0001f672) area_side_right_pane_ParamLimits

0x7d25,	// (0x0001f672) area_side_right_pane

0x9431,	// (0x00020d7e) aid_size_side_button_ParamLimits

0x9431,	// (0x00020d7e) aid_size_side_button

0x9445,	// (0x00020d92) grid_sctrl_middle_pane_ParamLimits

0x9445,	// (0x00020d92) grid_sctrl_middle_pane

0x9465,	// (0x00020db2) sctrl_sk_bottom_pane

0x9476,	// (0x00020dc3) sctrl_sk_top_pane

0x9488,	// (0x00020dd5) aid_touch_sctrl_top

0xa2b6,	// (0x00021c03) bg_sctrl_sk_pane_ParamLimits

0xa2b6,	// (0x00021c03) bg_sctrl_sk_pane

0x9495,	// (0x00020de2) sctrl_sk_top_pane_g1

0x94a2,	// (0x00020def) sctrl_sk_top_pane_t1

0x9488,	// (0x00020dd5) aid_touch_sctrl_bottom

0xa2b6,	// (0x00021c03) bg_sctrl_sk_pane_cp_ParamLimits

0xa2b6,	// (0x00021c03) bg_sctrl_sk_pane_cp

0x94bd,	// (0x00020e0a) sctrl_sk_bottom_pane_g1

0x94a2,	// (0x00020def) sctrl_sk_bottom_pane_t1

0x94c6,	// (0x00020e13) cell_sctrl_middle_pane_ParamLimits

0x94c6,	// (0x00020e13) cell_sctrl_middle_pane

0x94e1,	// (0x00020e2e) aid_touch_sctrl_middle_ParamLimits

0x94e1,	// (0x00020e2e) aid_touch_sctrl_middle

0xa880,	// (0x000221cd) bg_sctrl_middle_pane_ParamLimits

0xa880,	// (0x000221cd) bg_sctrl_middle_pane

0xe6c1,	// (0x0002600e) cell_sctrl_middle_pane_g1_ParamLimits

0xe6c1,	// (0x0002600e) cell_sctrl_middle_pane_g1

0x94f3,	// (0x00020e40) cell_sctrl_middle_pane_g2_ParamLimits

0x94f3,	// (0x00020e40) cell_sctrl_middle_pane_g2

0x0001,

0xfcf9,	// (0x00027646) cell_sctrl_middle_pane_g_ParamLimits

0xfcf9,	// (0x00027646) cell_sctrl_middle_pane_g

0xbd28,	// (0x00023675) bg_sctrl_middle_pane_g1

0xbd30,	// (0x0002367d) bg_sctrl_middle_pane_g2

0xbd38,	// (0x00023685) bg_sctrl_middle_pane_g3

0xbd40,	// (0x0002368d) bg_sctrl_middle_pane_g4

0xbd48,	// (0x00023695) bg_sctrl_middle_pane_g5

0xbd50,	// (0x0002369d) bg_sctrl_middle_pane_g6

0xbd58,	// (0x000236a5) bg_sctrl_middle_pane_g7

0xbd60,	// (0x000236ad) bg_sctrl_middle_pane_g8

0x0007,

0xfcfe,	// (0x0002764b) bg_sctrl_middle_pane_g

0xbd68,	// (0x000236b5) bg_sctrl_middle_pane_g8_copy1

0xbd28,	// (0x00023675) bg_sctrl_sk_pane_g1

0xbd30,	// (0x0002367d) bg_sctrl_sk_pane_g2

0xbd38,	// (0x00023685) bg_sctrl_sk_pane_g3

0x0008,

0xf85b,	// (0x000271a8) bg_sctrl_sk_pane_g

0xa7af,	// (0x000220fc) aid_size_touch_scroll_bar

0xbd40,	// (0x0002368d) bg_sctrl_sk_pane_g4

0xbd48,	// (0x00023695) bg_sctrl_sk_pane_g5

0xbd50,	// (0x0002369d) bg_sctrl_sk_pane_g6

0xbd58,	// (0x000236a5) bg_sctrl_sk_pane_g7

0xbd60,	// (0x000236ad) bg_sctrl_sk_pane_g8

0xbd68,	// (0x000236b5) bg_sctrl_sk_pane_g9

0x8741,	// (0x0002008e) popup_fep_china_hwr2_fs_candidate_window

0x874b,	// (0x00020098) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x874b,	// (0x00020098) popup_fep_china_hwr2_fs_control_window

0xe6c1,	// (0x0002600e) sctrl_sk_top_pane_g2

0x0001,

0xfcf4,	// (0x00027641) sctrl_sk_top_pane_g

0x073b,	// (0x00018088) aid_fep_china_hwr2_fs_cell_ParamLimits

0x073b,	// (0x00018088) aid_fep_china_hwr2_fs_cell

0x074d,	// (0x0001809a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x074d,	// (0x0001809a) bg_popup_fep_shadow_pane_cp4

0x0764,	// (0x000180b1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x0764,	// (0x000180b1) bg_popup_fep_shadow_pane_cp5

0x0776,	// (0x000180c3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x0776,	// (0x000180c3) popup_fep_china_hwr2_fs_control_bar_grid

0x0786,	// (0x000180d3) popup_fep_china_hwr2_fs_control_funtion_grid

0x078e,	// (0x000180db) aid_fep_china_hwr2_fs_candi_cell

0x9f39,	// (0x00021886) bg_popup_fep_shadow_pane_cp6

0x0798,	// (0x000180e5) popup_fep_china_hwr2_fs_candidate_grid

0x07a2,	// (0x000180ef) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x07a2,	// (0x000180ef) cell_fep_china_hwr2_fs_funtion_grid

0xe446,	// (0x00025d93) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x07ba,	// (0x00018107) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x07ba,	// (0x00018107) cell_fep_china_hwr2_fs_funtion_grid_g1

0x07c8,	// (0x00018115) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x07c8,	// (0x00018115) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0f,	// (0x0002765c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0f,	// (0x0002765c) cell_fep_china_hwr2_fs_funtion_grid_g

0x07de,	// (0x0001812b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x07de,	// (0x0001812b) cell_fep_china_hwr2_fs_funtion_grid_t1

0x07f3,	// (0x00018140) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x07f3,	// (0x00018140) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd14,	// (0x00027661) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd14,	// (0x00027661) cell_fep_china_hwr2_fs_funtion_grid_t

0x080f,	// (0x0001815c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0817,	// (0x00018164) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x081f,	// (0x0001816c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x00027666) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0827,	// (0x00018174) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0827,	// (0x00018174) cell_fep_china_hwr2_fs_candidate_grid

0x0840,	// (0x0001818d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x0848,	// (0x00018195) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe446,	// (0x00025d93) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe446,	// (0x00025d93) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb40,	// (0x0002748d) cell_fep_china_hwr2_fs_candidate_grid_g

0x0850,	// (0x0001819d) cell_fep_china_hwr2_fs_candidate_grid_t1

0xb926,	// (0x00023273) clock_nsta_pane_cp_24_ParamLimits

0xb926,	// (0x00023273) clock_nsta_pane_cp_24

0xb9a4,	// (0x000232f1) indicator_nsta_pane_cp_24_ParamLimits

0xb9a4,	// (0x000232f1) indicator_nsta_pane_cp_24

0xcab8,	// (0x00024405) heading_pane_g1

0x0001,

0xf8c0,	// (0x0002720d) heading_pane_g

0xd4c7,	// (0x00024e14) grid_sct_catagory_button_pane

0xd4f9,	// (0x00024e46) scroll_pane_cp5_ParamLimits

0xe002,	// (0x0002594f) button_value_adjust_pane_cp5_ParamLimits

0xe002,	// (0x0002594f) button_value_adjust_pane_cp5

0xe0e1,	// (0x00025a2e) form2_midp_time_pane_ParamLimits

0x085e,	// (0x000181ab) cell_sct_catagory_button_pane_ParamLimits

0x085e,	// (0x000181ab) cell_sct_catagory_button_pane

0xe40b,	// (0x00025d58) bg_button_pane_cp01_ParamLimits

0xe40b,	// (0x00025d58) bg_button_pane_cp01

0xe446,	// (0x00025d93) cell_sct_catagory_button_pane_g1

0x8b07,	// (0x00020454) popup_tb_extension_window

0x0870,	// (0x000181bd) aid_size_cell_ext_ParamLimits

0x0870,	// (0x000181bd) aid_size_cell_ext

0xa2b6,	// (0x00021c03) bg_tb_trans_pane_cp1_ParamLimits

0xa2b6,	// (0x00021c03) bg_tb_trans_pane_cp1

0x0890,	// (0x000181dd) grid_tb_ext_pane_ParamLimits

0x0890,	// (0x000181dd) grid_tb_ext_pane

0x08c0,	// (0x0001820d) cell_tb_ext_pane_ParamLimits

0x08c0,	// (0x0001820d) cell_tb_ext_pane

0x08d7,	// (0x00018224) cell_tb_ext_pane_g1_ParamLimits

0x08d7,	// (0x00018224) cell_tb_ext_pane_g1

0x08f4,	// (0x00018241) cell_tb_ext_pane_t1

0xa2b6,	// (0x00021c03) list_highlight_pane_cp11_ParamLimits

0xa2b6,	// (0x00021c03) list_highlight_pane_cp11

0x7f74,	// (0x0001f8c1) popup_uni_indicator_window_ParamLimits

0x7f74,	// (0x0001f8c1) popup_uni_indicator_window

0xa880,	// (0x000221cd) bg_popup_sub_pane_cp14

0x090f,	// (0x0001825c) list_uniindi_pane

0x091b,	// (0x00018268) uniindi_top_pane

0xa2b6,	// (0x00021c03) bg_uniindi_top_pane

0x093a,	// (0x00018287) uniindi_top_pane_g1

0x0950,	// (0x0001829d) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x0002766d) uniindi_top_pane_g

0x097a,	// (0x000182c7) uniindi_top_pane_t1

0x09a4,	// (0x000182f1) list_single_uniindi_pane_ParamLimits

0x09a4,	// (0x000182f1) list_single_uniindi_pane

0xe446,	// (0x00025d93) bg_uniindi_top_pane_g1

0x09b6,	// (0x00018303) list_single_uniindi_pane_g1

0x09c9,	// (0x00018316) list_single_uniindi_pane_t1

0x9f39,	// (0x00021886) control_bg_pane

0x09ee,	// (0x0001833b) bg_sctrl_sk_pane_cp1

0x09f7,	// (0x00018344) bg_sctrl_sk_pane_cp2

0x0a00,	// (0x0001834d) control_bg_pane_g1

0x0a09,	// (0x00018356) control_bg_pane_g2

0x0001,

0xfd29,	// (0x00027676) control_bg_pane_g

0xde32,	// (0x0002577f) cell_indicator_nsta_pane_g1_ParamLimits

0xde40,	// (0x0002578d) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa4,	// (0x000273f1) cell_indicator_nsta_pane_g_ParamLimits

0x78b6,	// (0x0001f203) form2_midp_time_pane_t1_ParamLimits

0xa5f1,	// (0x00021f3e) main_idle_act4_pane_ParamLimits

0xa5f1,	// (0x00021f3e) main_idle_act4_pane

0x8b07,	// (0x00020454) popup_tb_extension_window_ParamLimits

0x08b0,	// (0x000181fd) tb_ext_find_pane_ParamLimits

0x08b0,	// (0x000181fd) tb_ext_find_pane

0x0a12,	// (0x0001835f) ai_gene_pane_1_cp1

0xb627,	// (0x00022f74) ai_gene_pane_2_cp1

0x0a1a,	// (0x00018367) list_single_idle_plugin_calendar_pane

0x0a23,	// (0x00018370) list_single_idle_plugin_notification_pane

0x0a2c,	// (0x00018379) list_single_idle_plugin_player_pane

0x0a35,	// (0x00018382) list_single_idle_plugin_shortcut_pane_ParamLimits

0x0a35,	// (0x00018382) list_single_idle_plugin_shortcut_pane

0x0a57,	// (0x000183a4) main_idle_act4_pane_t1

0x0a69,	// (0x000183b6) main_idle_act4_pane_t2

0x0001,

0xfd2e,	// (0x0002767b) main_idle_act4_pane_t

0x0a7b,	// (0x000183c8) middle_sk_idle_act4_pane_ParamLimits

0x0a7b,	// (0x000183c8) middle_sk_idle_act4_pane

0x0a91,	// (0x000183de) popup_clock_digital_analogue_window_cp2

0x0aab,	// (0x000183f8) shortcut_wheel_idle_act4_pane_ParamLimits

0x0aab,	// (0x000183f8) shortcut_wheel_idle_act4_pane

0xe446,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g1

0xe446,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g2

0xe446,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g3

0xe446,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g4

0xe446,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g5

0x0abf,	// (0x0001840c) shortcut_wheel_idle_act4_pane_g6

0x0ac7,	// (0x00018414) shortcut_wheel_idle_act4_pane_g7

0x0acf,	// (0x0001841c) shortcut_wheel_idle_act4_pane_g8

0x0ad7,	// (0x00018424) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd33,	// (0x00027680) shortcut_wheel_idle_act4_pane_g

0xe6c1,	// (0x0002600e) middle_sk_idle_act4_pane_g1_ParamLimits

0xe6c1,	// (0x0002600e) middle_sk_idle_act4_pane_g1

0x0b3b,	// (0x00018488) middle_sk_idle_act4_pane_g2_ParamLimits

0x0b3b,	// (0x00018488) middle_sk_idle_act4_pane_g2

0x0001,

0xfd56,	// (0x000276a3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd56,	// (0x000276a3) middle_sk_idle_act4_pane_g

0x0b47,	// (0x00018494) middle_sk_idle_act4_pane_t1_ParamLimits

0x0b47,	// (0x00018494) middle_sk_idle_act4_pane_t1

0x0b64,	// (0x000184b1) grid_ai_shortcut_pane_ParamLimits

0x0b64,	// (0x000184b1) grid_ai_shortcut_pane

0x0b7d,	// (0x000184ca) list_highlight_pane_cp16_ParamLimits

0x0b7d,	// (0x000184ca) list_highlight_pane_cp16

0x0b8a,	// (0x000184d7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x0b8a,	// (0x000184d7) list_single_idle_plugin_shortcut_pane_g1

0x0b96,	// (0x000184e3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x0b96,	// (0x000184e3) list_single_idle_plugin_shortcut_pane_g2

0x0bae,	// (0x000184fb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x0bae,	// (0x000184fb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5b,	// (0x000276a8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5b,	// (0x000276a8) list_single_idle_plugin_shortcut_pane_g

0x0bc1,	// (0x0001850e) cell_ai_shortcut_pane_ParamLimits

0x0bc1,	// (0x0001850e) cell_ai_shortcut_pane

0x0be2,	// (0x0001852f) cell_ai_shortcut_pane_g1_ParamLimits

0x0be2,	// (0x0001852f) cell_ai_shortcut_pane_g1

0x0a12,	// (0x0001835f) ai_gene_pane_1_cp2

0x0c04,	// (0x00018551) ai_gene_pane_2_cp2

0x0c0c,	// (0x00018559) list_highlight_pane_cp15

0x0c15,	// (0x00018562) list_single_idle_plugin_calendar_pane_g1

0x0c0c,	// (0x00018559) list_highlight_pane_cp17

0x0c1d,	// (0x0001856a) list_single_idle_plugin_calendar_pane_g1_copy1

0x0c25,	// (0x00018572) list_single_idle_plugin_player_pane_g1

0xd762,	// (0x000250af) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd62,	// (0x000276af) list_single_idle_plugin_player_pane_g

0x0c2d,	// (0x0001857a) list_single_idle_plugin_player_pane_t1

0x0c3b,	// (0x00018588) list_single_idle_plugin_player_pane_t2

0x0c49,	// (0x00018596) list_single_idle_plugin_player_pane_t3

0x0c57,	// (0x000185a4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd67,	// (0x000276b4) list_single_idle_plugin_player_pane_t

0x0c65,	// (0x000185b2) wait_bar_pane_cp15

0x0c6d,	// (0x000185ba) grid_ai_notification_pane

0xd762,	// (0x000250af) list_single_idle_plugin_notification_pane_g1

0x0c76,	// (0x000185c3) cell_ai_notification_pane_ParamLimits

0x0c76,	// (0x000185c3) cell_ai_notification_pane

0x0c83,	// (0x000185d0) cell_ai_notification_pane_g1

0x0c8b,	// (0x000185d8) cell_ai_notification_pane_t1

0x0c99,	// (0x000185e6) tb_ext_find_button_pane

0x0ca1,	// (0x000185ee) tb_ext_find_pane_g1

0x0ca9,	// (0x000185f6) tb_ext_find_pane_t1

0xaee1,	// (0x0002282e) tb_ext_find_button_pane_g1

0x0cb7,	// (0x00018604) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x000276bd) tb_ext_find_button_pane_g

0x0a57,	// (0x000183a4) main_idle_act4_pane_t1_ParamLimits

0x0a69,	// (0x000183b6) main_idle_act4_pane_t2_ParamLimits

0xfd2e,	// (0x0002767b) main_idle_act4_pane_t_ParamLimits

0x0a91,	// (0x000183de) popup_clock_digital_analogue_window_cp2_ParamLimits

0x0a9f,	// (0x000183ec) sat_plugin_idle_act4_pane_ParamLimits

0x0a9f,	// (0x000183ec) sat_plugin_idle_act4_pane

0x0cc0,	// (0x0001860d) sat_plugin_idle_act4_pane_t1_ParamLimits

0x0cc0,	// (0x0001860d) sat_plugin_idle_act4_pane_t1

0x0cd3,	// (0x00018620) sat_plugin_idle_act4_pane_t2_ParamLimits

0x0cd3,	// (0x00018620) sat_plugin_idle_act4_pane_t2

0x0ce6,	// (0x00018633) sat_plugin_idle_act4_pane_t3_ParamLimits

0x0ce6,	// (0x00018633) sat_plugin_idle_act4_pane_t3

0x0cf9,	// (0x00018646) sat_plugin_idle_act4_pane_t4_ParamLimits

0x0cf9,	// (0x00018646) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x000276c2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x000276c2) sat_plugin_idle_act4_pane_t

0x7ebd,	// (0x0001f80a) popup_battery_window_ParamLimits

0x7ebd,	// (0x0001f80a) popup_battery_window

0xa2b6,	// (0x00021c03) bg_popup_sub_pane_cp25_ParamLimits

0xa2b6,	// (0x00021c03) bg_popup_sub_pane_cp25

0x0d0c,	// (0x00018659) popup_battery_window_g1_ParamLimits

0x0d0c,	// (0x00018659) popup_battery_window_g1

0x0d18,	// (0x00018665) popup_battery_window_t1_ParamLimits

0x0d18,	// (0x00018665) popup_battery_window_t1

0x0d2a,	// (0x00018677) popup_battery_window_t2_ParamLimits

0x0d2a,	// (0x00018677) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x000276cb) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x000276cb) popup_battery_window_t

0xb4f2,	// (0x00022e3f) midp_canvas_pane_ParamLimits

0xb569,	// (0x00022eb6) midp_keypad_pane_ParamLimits

0xb569,	// (0x00022eb6) midp_keypad_pane

0xb826,	// (0x00023173) main_midp_pane_ParamLimits

0xdebe,	// (0x0002580b) signal_pane_g2_cp_ParamLimits

0x0d47,	// (0x00018694) aid_size_cell_midp_keypad_ParamLimits

0x0d47,	// (0x00018694) aid_size_cell_midp_keypad

0x0d61,	// (0x000186ae) midp_keyp_game_grid_pane_ParamLimits

0x0d61,	// (0x000186ae) midp_keyp_game_grid_pane

0x0d81,	// (0x000186ce) midp_keyp_rocker_pane_ParamLimits

0x0d81,	// (0x000186ce) midp_keyp_rocker_pane

0x0dac,	// (0x000186f9) midp_keyp_sk_left_pane_ParamLimits

0x0dac,	// (0x000186f9) midp_keyp_sk_left_pane

0x0e06,	// (0x00018753) midp_keyp_sk_right_pane_ParamLimits

0x0e06,	// (0x00018753) midp_keyp_sk_right_pane

0x9f39,	// (0x00021886) bg_button_pane_cp03

0x0e60,	// (0x000187ad) midp_keyp_sk_left_pane_g1

0x9f39,	// (0x00021886) bg_button_pane_cp04

0x0e60,	// (0x000187ad) midp_keyp_sk_right_pane_g1

0xe446,	// (0x00025d93) midp_keyp_rocker_pane_g1

0x0e69,	// (0x000187b6) keyp_game_cell_pane_ParamLimits

0x0e69,	// (0x000187b6) keyp_game_cell_pane

0x9f39,	// (0x00021886) bg_button_pane_cp02

0x0e7c,	// (0x000187c9) keyp_game_cell_pane_g1

0x7ef3,	// (0x0001f840) popup_fep_vkb2_window_ParamLimits

0x7ef3,	// (0x0001f840) popup_fep_vkb2_window

0x9511,	// (0x00020e5e) aid_size_cell_vkb2_ParamLimits

0x9511,	// (0x00020e5e) aid_size_cell_vkb2

0x9565,	// (0x00020eb2) popup_fep_vkb2_window_g1_ParamLimits

0x9565,	// (0x00020eb2) popup_fep_vkb2_window_g1

0x95a5,	// (0x00020ef2) vkb2_area_bottom_pane_ParamLimits

0x95a5,	// (0x00020ef2) vkb2_area_bottom_pane

0x95f1,	// (0x00020f3e) vkb2_area_keypad_pane_ParamLimits

0x95f1,	// (0x00020f3e) vkb2_area_keypad_pane

0x9633,	// (0x00020f80) vkb2_area_top_pane_ParamLimits

0x9633,	// (0x00020f80) vkb2_area_top_pane

0x96ad,	// (0x00020ffa) vkb2_top_entry_pane_ParamLimits

0x96ad,	// (0x00020ffa) vkb2_top_entry_pane

0x96d7,	// (0x00021024) vkb2_top_grid_left_pane_ParamLimits

0x96d7,	// (0x00021024) vkb2_top_grid_left_pane

0x96f5,	// (0x00021042) vkb2_top_grid_right_pane_ParamLimits

0x96f5,	// (0x00021042) vkb2_top_grid_right_pane

0x9713,	// (0x00021060) vkb2_cell_keypad_pane_ParamLimits

0x9713,	// (0x00021060) vkb2_cell_keypad_pane

0x97e4,	// (0x00021131) vkb2_area_bottom_grid_pane_ParamLimits

0x97e4,	// (0x00021131) vkb2_area_bottom_grid_pane

0x980a,	// (0x00021157) vkb2_area_bottom_pane_g1_ParamLimits

0x980a,	// (0x00021157) vkb2_area_bottom_pane_g1

0x982e,	// (0x0002117b) vkb2_area_bottom_pane_g2_ParamLimits

0x982e,	// (0x0002117b) vkb2_area_bottom_pane_g2

0x985c,	// (0x000211a9) vkb2_area_bottom_pane_g3_ParamLimits

0x985c,	// (0x000211a9) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x000276d0) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x000276d0) vkb2_area_bottom_pane_g

0x98bd,	// (0x0002120a) vkb2_top_cell_left_pane_ParamLimits

0x98bd,	// (0x0002120a) vkb2_top_cell_left_pane

0x0e8d,	// (0x000187da) vkb2_top_entry_pane_g1_ParamLimits

0x0e8d,	// (0x000187da) vkb2_top_entry_pane_g1

0x0e9b,	// (0x000187e8) vkb2_top_entry_pane_t1_ParamLimits

0x0e9b,	// (0x000187e8) vkb2_top_entry_pane_t1

0x0ecd,	// (0x0001881a) vkb2_top_entry_pane_t2_ParamLimits

0x0ecd,	// (0x0001881a) vkb2_top_entry_pane_t2

0x0eff,	// (0x0001884c) vkb2_top_entry_pane_t3_ParamLimits

0x0eff,	// (0x0001884c) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x000276d7) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x000276d7) vkb2_top_entry_pane_t

0x990a,	// (0x00021257) vkb2_top_grid_right_pane_g1_ParamLimits

0x990a,	// (0x00021257) vkb2_top_grid_right_pane_g1

0x9920,	// (0x0002126d) vkb2_top_grid_right_pane_g2_ParamLimits

0x9920,	// (0x0002126d) vkb2_top_grid_right_pane_g2

0x9938,	// (0x00021285) vkb2_top_grid_right_pane_g3_ParamLimits

0x9938,	// (0x00021285) vkb2_top_grid_right_pane_g3

0x9950,	// (0x0002129d) vkb2_top_grid_right_pane_g4_ParamLimits

0x9950,	// (0x0002129d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x000276de) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x000276de) vkb2_top_grid_right_pane_g

0x9966,	// (0x000212b3) vkb2_top_cell_left_pane_g1

0x997d,	// (0x000212ca) vkb2_cell_keypad_pane_g1_ParamLimits

0x997d,	// (0x000212ca) vkb2_cell_keypad_pane_g1

0x0f23,	// (0x00018870) vkb2_cell_keypad_pane_t1_ParamLimits

0x0f23,	// (0x00018870) vkb2_cell_keypad_pane_t1

0x998b,	// (0x000212d8) vkb2_cell_bottom_grid_pane_ParamLimits

0x998b,	// (0x000212d8) vkb2_cell_bottom_grid_pane

0x99c4,	// (0x00021311) vkb2_cell_bottom_grid_pane_g1

0x0adf,	// (0x0001842c) aid_call2_pane_cp02

0x0ae7,	// (0x00018434) aid_call_pane_cp02

0x0aef,	// (0x0001843c) clock_digital_number_pane_cp10

0x0af7,	// (0x00018444) clock_digital_number_pane_cp11

0x0aff,	// (0x0001844c) clock_digital_number_pane_cp12

0x0b07,	// (0x00018454) clock_digital_number_pane_cp13

0x0b0f,	// (0x0001845c) clock_digital_separator_pane_cp10

0xaee1,	// (0x0002282e) popup_clock_digital_analogue_window_cp2_g1

0xaee1,	// (0x0002282e) popup_clock_digital_analogue_window_cp2_g2

0x0b17,	// (0x00018464) popup_clock_digital_analogue_window_cp2_g3

0xaee1,	// (0x0002282e) popup_clock_digital_analogue_window_cp2_g4

0x0b17,	// (0x00018464) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd46,	// (0x00027693) popup_clock_digital_analogue_window_cp2_g

0x0b1f,	// (0x0001846c) popup_clock_digital_analogue_window_cp2_t1

0x0b2d,	// (0x0001847a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd51,	// (0x0002769e) popup_clock_digital_analogue_window_cp2_t

0xe446,	// (0x00025d93) clock_digital_number_pane_cp10_g1

0xe446,	// (0x00025d93) clock_digital_number_pane_cp10_g2

0x0001,

0xfb40,	// (0x0002748d) clock_digital_number_pane_cp10_g

0xe446,	// (0x00025d93) clock_digital_separator_pane_cp10_g1

0xe446,	// (0x00025d93) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb40,	// (0x0002748d) clock_digital_separator_pane_cp10_g

0x095c,	// (0x000182a9) uniindi_top_pane_g3

0x096d,	// (0x000182ba) uniindi_top_pane_g4

0x979e,	// (0x000210eb) vkb2_row_keypad_pane_ParamLimits

0x979e,	// (0x000210eb) vkb2_row_keypad_pane

0x99e4,	// (0x00021331) vkb2_cell_t_keypad_pane_ParamLimits

0x99e4,	// (0x00021331) vkb2_cell_t_keypad_pane

0x99f4,	// (0x00021341) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x99f4,	// (0x00021341) vkb2_cell_t_keypad_pane_cp08

0x9a07,	// (0x00021354) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9a07,	// (0x00021354) vkb2_cell_t_keypad_pane_cp09

0x9a1b,	// (0x00021368) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9a1b,	// (0x00021368) vkb2_cell_t_keypad_pane_cp01

0x9a2c,	// (0x00021379) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9a2c,	// (0x00021379) vkb2_cell_t_keypad_pane_cp02

0x9a3d,	// (0x0002138a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9a3d,	// (0x0002138a) vkb2_cell_t_keypad_pane_cp03

0x9a4e,	// (0x0002139b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9a4e,	// (0x0002139b) vkb2_cell_t_keypad_pane_cp04

0x9a5f,	// (0x000213ac) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9a5f,	// (0x000213ac) vkb2_cell_t_keypad_pane_cp05

0x9a70,	// (0x000213bd) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9a70,	// (0x000213bd) vkb2_cell_t_keypad_pane_cp06

0x9a81,	// (0x000213ce) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9a81,	// (0x000213ce) vkb2_cell_t_keypad_pane_cp07

0x9a92,	// (0x000213df) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9a92,	// (0x000213df) vkb2_cell_t_keypad_pane_cp10

0xe6c1,	// (0x0002600e) vkb2_cell_t_keypad_pane_g1

0x0f3a,	// (0x00018887) vkb2_cell_t_keypad_pane_t1

0x9f39,	// (0x00021886) popup_grid_graphic2_window

0x0f4c,	// (0x00018899) aid_size_cell_graphic2_ParamLimits

0x0f4c,	// (0x00018899) aid_size_cell_graphic2

0x0f84,	// (0x000188d1) bg_popup_window_pane_cp21_ParamLimits

0x0f84,	// (0x000188d1) bg_popup_window_pane_cp21

0x0f92,	// (0x000188df) graphic2_pages_pane_ParamLimits

0x0f92,	// (0x000188df) graphic2_pages_pane

0x0fd8,	// (0x00018925) grid_graphic2_control_pane_ParamLimits

0x0fd8,	// (0x00018925) grid_graphic2_control_pane

0x1016,	// (0x00018963) grid_graphic2_pane_ParamLimits

0x1016,	// (0x00018963) grid_graphic2_pane

0x108a,	// (0x000189d7) cell_graphic2_pane

0x9f39,	// (0x00021886) main_comp_mode_pane

0x015e,	// (0x00017aab) list_ai3_gene_pane_ParamLimits

0x05a4,	// (0x00017ef1) bg_popup_window_pane_cp19_ParamLimits

0x05b0,	// (0x00017efd) bg_touch_area_indi_pane_ParamLimits

0x05b0,	// (0x00017efd) bg_touch_area_indi_pane

0x05c6,	// (0x00017f13) bg_touch_area_indi_pane_cp01_ParamLimits

0x05c6,	// (0x00017f13) bg_touch_area_indi_pane_cp01

0x05dc,	// (0x00017f29) bg_touch_area_indi_pane_cp02_ParamLimits

0x05dc,	// (0x00017f29) bg_touch_area_indi_pane_cp02

0x05f4,	// (0x00017f41) bg_touch_area_indi_pane_cp03_ParamLimits

0x05f4,	// (0x00017f41) bg_touch_area_indi_pane_cp03

0x060e,	// (0x00017f5b) popup_slider_window_g1_ParamLimits

0x062a,	// (0x00017f77) popup_slider_window_g2_ParamLimits

0x0646,	// (0x00017f93) popup_slider_window_g3_ParamLimits

0xfcdb,	// (0x00027628) popup_slider_window_g_ParamLimits

0x06a2,	// (0x00017fef) popup_slider_window_t1_ParamLimits

0x0716,	// (0x00018063) small_volume_slider_vertical_pane_ParamLimits

0x108a,	// (0x000189d7) cell_graphic2_pane_ParamLimits

0x10d8,	// (0x00018a25) bg_button_pane_cp10_ParamLimits

0x10d8,	// (0x00018a25) bg_button_pane_cp10

0x10eb,	// (0x00018a38) bg_button_pane_cp11_ParamLimits

0x10eb,	// (0x00018a38) bg_button_pane_cp11

0x10fe,	// (0x00018a4b) graphic2_pages_pane_g1_ParamLimits

0x10fe,	// (0x00018a4b) graphic2_pages_pane_g1

0x1119,	// (0x00018a66) graphic2_pages_pane_g2_ParamLimits

0x1119,	// (0x00018a66) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x000276ec) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x000276ec) graphic2_pages_pane_g

0x1131,	// (0x00018a7e) graphic2_pages_pane_t1_ParamLimits

0x1131,	// (0x00018a7e) graphic2_pages_pane_t1

0x1147,	// (0x00018a94) cell_graphic2_control_pane_ParamLimits

0x1147,	// (0x00018a94) cell_graphic2_control_pane

0x1168,	// (0x00018ab5) cell_graphic2_pane_g1_ParamLimits

0x1168,	// (0x00018ab5) cell_graphic2_pane_g1

0x1175,	// (0x00018ac2) cell_graphic2_pane_g2_ParamLimits

0x1175,	// (0x00018ac2) cell_graphic2_pane_g2

0x1182,	// (0x00018acf) cell_graphic2_pane_g3_ParamLimits

0x1182,	// (0x00018acf) cell_graphic2_pane_g3

0x118f,	// (0x00018adc) cell_graphic2_pane_g4_ParamLimits

0x118f,	// (0x00018adc) cell_graphic2_pane_g4

0x119c,	// (0x00018ae9) cell_graphic2_pane_g5_ParamLimits

0x119c,	// (0x00018ae9) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x000276f1) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x000276f1) cell_graphic2_pane_g

0x11b7,	// (0x00018b04) cell_graphic2_pane_t1_ParamLimits

0x11b7,	// (0x00018b04) cell_graphic2_pane_t1

0xbe18,	// (0x00023765) grid_highlight_pane_cp11_ParamLimits

0xbe18,	// (0x00023765) grid_highlight_pane_cp11

0xa2b6,	// (0x00021c03) bg_button_pane_cp05

0x11e0,	// (0x00018b2d) cell_graphic2_control_pane_g1

0xe446,	// (0x00025d93) bg_touch_area_indi_pane_g1

0x1208,	// (0x00018b55) aid_cmod_rocker_key_size

0x1212,	// (0x00018b5f) aid_cmode_itu_key_size

0x121c,	// (0x00018b69) main_cmode_video_pane

0x1226,	// (0x00018b73) main_comp_mode_itu_pane

0x1232,	// (0x00018b7f) main_comp_mode_rocker_pane

0x123e,	// (0x00018b8b) cell_cmode_rocker_pane_ParamLimits

0x123e,	// (0x00018b8b) cell_cmode_rocker_pane

0x1250,	// (0x00018b9d) cell_cmode_itu_pane_ParamLimits

0x1250,	// (0x00018b9d) cell_cmode_itu_pane

0xa880,	// (0x000221cd) bg_button_pane_cp06_ParamLimits

0xa880,	// (0x000221cd) bg_button_pane_cp06

0xe6c1,	// (0x0002600e) cell_cmode_rocker_pane_g1_ParamLimits

0xe6c1,	// (0x0002600e) cell_cmode_rocker_pane_g1

0x07ba,	// (0x00018107) cell_cmode_rocker_pane_g2_ParamLimits

0x07ba,	// (0x00018107) cell_cmode_rocker_pane_g2

0x0001,

0xfdb4,	// (0x00027701) cell_cmode_rocker_pane_g_ParamLimits

0xfdb4,	// (0x00027701) cell_cmode_rocker_pane_g

0x9f39,	// (0x00021886) bg_button_pane_cp07

0x1265,	// (0x00018bb2) cell_cmode_itu_pane_g1

0x126e,	// (0x00018bbb) cell_cmode_itu_pane_t1

0x127c,	// (0x00018bc9) cell_cmode_itu_pane_t2

0x0001,

0xfdb9,	// (0x00027706) cell_cmode_itu_pane_t

0x09de,	// (0x0001832b) aid_touch_ctrl_left

0x09e6,	// (0x00018333) aid_touch_ctrl_right

0x9f39,	// (0x00021886) compa_mode_pane

0x128a,	// (0x00018bd7) aid_cmod_rocker_key_size_cp

0x1294,	// (0x00018be1) aid_cmode_itu_key_size_cp

0x129e,	// (0x00018beb) compa_mode_pane_g1

0x12a6,	// (0x00018bf3) compa_mode_pane_g2

0x12ae,	// (0x00018bfb) compa_mode_pane_g3

0x0002,

0xfdbe,	// (0x0002770b) compa_mode_pane_g

0x12b6,	// (0x00018c03) main_comp_mode_itu_pane_cp

0x12be,	// (0x00018c0b) main_comp_mode_rocker_pane_cp

0x12c6,	// (0x00018c13) cell_cmode_itu_pane_cp_ParamLimits

0x12c6,	// (0x00018c13) cell_cmode_itu_pane_cp

0x12db,	// (0x00018c28) cell_cmode_rocker_pane_cp_ParamLimits

0x12db,	// (0x00018c28) cell_cmode_rocker_pane_cp

0xa880,	// (0x000221cd) bg_button_pane_cp06_cp_ParamLimits

0xa880,	// (0x000221cd) bg_button_pane_cp06_cp

0xe6c1,	// (0x0002600e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe6c1,	// (0x0002600e) cell_cmode_rocker_pane_g1_cp

0xe446,	// (0x00025d93) cell_cmode_rocker_pane_g2_cp

0x9f39,	// (0x00021886) bg_button_pane_cp07_cp

0x12ed,	// (0x00018c3a) cell_cmode_itu_pane_g1_cp

0x12f6,	// (0x00018c43) cell_cmode_itu_pane_t1_cp

0x12f6,	// (0x00018c43) cell_cmode_itu_pane_t2_cp

0xd2e3,	// (0x00024c30) settings_code_pane_cp2

0xa02d,	// (0x0002197a) bg_popup_window_pane_cp3_ParamLimits

0xa484,	// (0x00021dd1) heading_pane_cp3_ParamLimits

0xa490,	// (0x00021ddd) listscroll_popup_graphic_pane_ParamLimits

0x90d9,	// (0x00020a26) fep_hwr_aid_pane_ParamLimits

0x9488,	// (0x00020dd5) aid_touch_sctrl_top_ParamLimits

0x9495,	// (0x00020de2) sctrl_sk_top_pane_g1_ParamLimits

0xe6c1,	// (0x0002600e) sctrl_sk_top_pane_g2_ParamLimits

0xfcf4,	// (0x00027641) sctrl_sk_top_pane_g_ParamLimits

0x94a2,	// (0x00020def) sctrl_sk_top_pane_t1_ParamLimits

0x9488,	// (0x00020dd5) aid_touch_sctrl_bottom_ParamLimits

0x94a2,	// (0x00020def) sctrl_sk_bottom_pane_t1_ParamLimits

0x0928,	// (0x00018275) aid_area_touch_clock

0x9675,	// (0x00020fc2) aid_vkb2_area_top_pane_cell_ParamLimits

0x9675,	// (0x00020fc2) aid_vkb2_area_top_pane_cell

0x97c0,	// (0x0002110d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x97c0,	// (0x0002110d) aid_vkb2_area_bottom_pane_cell

0x0e85,	// (0x000187d2) popup_char_count_window

0x1304,	// (0x00018c51) popup_char_count_window_g1

0x130d,	// (0x00018c5a) popup_char_count_window_g2

0x1316,	// (0x00018c63) popup_char_count_window_g3

0x0002,

0xfdc5,	// (0x00027712) popup_char_count_window_g

0x131f,	// (0x00018c6c) popup_char_count_window_t1

0x9543,	// (0x00020e90) popup_fep_char_preview_window_ParamLimits

0x9543,	// (0x00020e90) popup_fep_char_preview_window

0x9693,	// (0x00020fe0) vkb2_top_candi_pane_ParamLimits

0x9693,	// (0x00020fe0) vkb2_top_candi_pane

0x132d,	// (0x00018c7a) cell_vkb2_top_candi_pane_ParamLimits

0x132d,	// (0x00018c7a) cell_vkb2_top_candi_pane

0xc43e,	// (0x00023d8b) bg_popup_fep_char_preview_window_ParamLimits

0xc43e,	// (0x00023d8b) bg_popup_fep_char_preview_window

0x9aa7,	// (0x000213f4) popup_fep_char_preview_window_t1_ParamLimits

0x9aa7,	// (0x000213f4) popup_fep_char_preview_window_t1

0x13ab,	// (0x00018cf8) bg_popup_fep_char_preview_window_g1

0x13a3,	// (0x00018cf0) bg_popup_fep_char_preview_window_g2

0x139b,	// (0x00018ce8) bg_popup_fep_char_preview_window_g3

0x13cb,	// (0x00018d18) bg_popup_fep_char_preview_window_g4

0x13c3,	// (0x00018d10) bg_popup_fep_char_preview_window_g5

0x9ae1,	// (0x0002142e) bg_popup_fep_char_preview_window_g6

0x13bb,	// (0x00018d08) bg_popup_fep_char_preview_window_g7

0x13b3,	// (0x00018d00) bg_popup_fep_char_preview_window_g8

0x13d3,	// (0x00018d20) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcc,	// (0x00027719) bg_popup_fep_char_preview_window_g

0xe6c1,	// (0x0002600e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe6c1,	// (0x0002600e) cell_vkb2_top_candi_pane_g1

0xeb43,	// (0x00026490) cell_vkb2_top_candi_pane_g2_ParamLimits

0xeb43,	// (0x00026490) cell_vkb2_top_candi_pane_g2

0xeb64,	// (0x000264b1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xeb64,	// (0x000264b1) cell_vkb2_top_candi_pane_g3

0x9ae9,	// (0x00021436) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9ae9,	// (0x00021436) cell_vkb2_top_candi_pane_g4

0x137a,	// (0x00018cc7) cell_vkb2_top_candi_pane_g5_ParamLimits

0x137a,	// (0x00018cc7) cell_vkb2_top_candi_pane_g5

0x07ba,	// (0x00018107) cell_vkb2_top_candi_pane_g6_ParamLimits

0x07ba,	// (0x00018107) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddf,	// (0x0002772c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddf,	// (0x0002772c) cell_vkb2_top_candi_pane_g

0x9b0a,	// (0x00021457) cell_vkb2_top_candi_pane_t1

0x8f2a,	// (0x00020877) aid_size_touch_slider_mark_ParamLimits

0x8f2a,	// (0x00020877) aid_size_touch_slider_mark

0x0fc8,	// (0x00018915) grid_graphic2_catg_pane_ParamLimits

0x0fc8,	// (0x00018915) grid_graphic2_catg_pane

0x1066,	// (0x000189b3) popup_grid_graphic2_window_t1_ParamLimits

0x1066,	// (0x000189b3) popup_grid_graphic2_window_t1

0x1078,	// (0x000189c5) popup_grid_graphic2_window_t2_ParamLimits

0x1078,	// (0x000189c5) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x000276e7) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x000276e7) popup_grid_graphic2_window_t

0xa2b6,	// (0x00021c03) bg_button_pane_cp05_ParamLimits

0x11e0,	// (0x00018b2d) cell_graphic2_control_pane_g1_ParamLimits

0x13db,	// (0x00018d28) cell_graphic2_catg_pane_ParamLimits

0x13db,	// (0x00018d28) cell_graphic2_catg_pane

0x9f39,	// (0x00021886) bg_button_pane_cp12

0x13ed,	// (0x00018d3a) cell_graphic2_catg_pane_g1

0x08f4,	// (0x00018241) cell_tb_ext_pane_t1_ParamLimits

0x98dd,	// (0x0002122a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x98dd,	// (0x0002122a) vkb2_top_cell_right_narrow_pane

0x98f5,	// (0x00021242) vkb2_top_cell_right_wide_pane_ParamLimits

0x98f5,	// (0x00021242) vkb2_top_cell_right_wide_pane

0x90cb,	// (0x00020a18) bg_vkb2_func_pane_ParamLimits

0x90cb,	// (0x00020a18) bg_vkb2_func_pane

0x9966,	// (0x000212b3) vkb2_top_cell_left_pane_g1_ParamLimits

0x90cb,	// (0x00020a18) bg_vkb2_fuc_pane_cp03_ParamLimits

0x90cb,	// (0x00020a18) bg_vkb2_fuc_pane_cp03

0x99c4,	// (0x00021311) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xbd30,	// (0x0002367d) bg_vkb2_func_pane_g1

0xbd38,	// (0x00023685) bg_vkb2_func_pane_g2

0xbd48,	// (0x00023695) bg_vkb2_func_pane_g3

0xbd40,	// (0x0002368d) bg_vkb2_func_pane_g4

0xbd50,	// (0x0002369d) bg_vkb2_func_pane_g5

0xbd58,	// (0x000236a5) bg_vkb2_func_pane_g6

0xbd60,	// (0x000236ad) bg_vkb2_func_pane_g7

0xbd68,	// (0x000236b5) bg_vkb2_func_pane_g8

0xbd28,	// (0x00023675) bg_vkb2_func_pane_g9

0x0008,

0xfdec,	// (0x00027739) bg_vkb2_func_pane_g

0x90cb,	// (0x00020a18) bg_vkb2_fuc_pane_cp01_ParamLimits

0x90cb,	// (0x00020a18) bg_vkb2_fuc_pane_cp01

0x9966,	// (0x000212b3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9966,	// (0x000212b3) vkb2_top_cell_right_wide_pane_g1

0x90cb,	// (0x00020a18) bg_vkb2_fuc_pane_cp02_ParamLimits

0x90cb,	// (0x00020a18) bg_vkb2_fuc_pane_cp02

0x99c4,	// (0x00021311) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x99c4,	// (0x00021311) vkb2_top_cell_right_narrow_pane_g1

0x0522,	// (0x00017e6f) aid_touch_area_decrease_ParamLimits

0x0522,	// (0x00017e6f) aid_touch_area_decrease

0x0546,	// (0x00017e93) aid_touch_area_increase_ParamLimits

0x0546,	// (0x00017e93) aid_touch_area_increase

0x0552,	// (0x00017e9f) aid_touch_area_mute_ParamLimits

0x0552,	// (0x00017e9f) aid_touch_area_mute

0x0576,	// (0x00017ec3) aid_touch_area_slider_ParamLimits

0x0576,	// (0x00017ec3) aid_touch_area_slider

0x0662,	// (0x00017faf) popup_slider_window_g4_ParamLimits

0x0662,	// (0x00017faf) popup_slider_window_g4

0x066e,	// (0x00017fbb) popup_slider_window_g5_ParamLimits

0x066e,	// (0x00017fbb) popup_slider_window_g5

0x0690,	// (0x00017fdd) popup_slider_window_g6_ParamLimits

0x0690,	// (0x00017fdd) popup_slider_window_g6

0x06d0,	// (0x0001801d) popup_slider_window_t2_ParamLimits

0x06d0,	// (0x0001801d) popup_slider_window_t2

0x0001,

0xfce8,	// (0x00027635) popup_slider_window_t_ParamLimits

0xfce8,	// (0x00027635) popup_slider_window_t

0x06e8,	// (0x00018035) slider_pane_ParamLimits

0x06e8,	// (0x00018035) slider_pane

0x13f6,	// (0x00018d43) slider_pane_g1_ParamLimits

0x13f6,	// (0x00018d43) slider_pane_g1

0x140a,	// (0x00018d57) slider_pane_g2_ParamLimits

0x140a,	// (0x00018d57) slider_pane_g2

0x1420,	// (0x00018d6d) slider_pane_g3_ParamLimits

0x1420,	// (0x00018d6d) slider_pane_g3

0x0003,

0xfdff,	// (0x0002774c) slider_pane_g_ParamLimits

0xfdff,	// (0x0002774c) slider_pane_g

0x8b63,	// (0x000204b0) popup_tb_float_extension_window_ParamLimits

0x8b63,	// (0x000204b0) popup_tb_float_extension_window

0x144c,	// (0x00018d99) aid_size_cell_tb_float_ext

0x9f39,	// (0x00021886) bg_popup_sub_window_cp28

0x1458,	// (0x00018da5) grid_tb_float_ext_pane

0x1462,	// (0x00018daf) cell_tb_float_ext_pane_ParamLimits

0x1462,	// (0x00018daf) cell_tb_float_ext_pane

0x147c,	// (0x00018dc9) cell_tb_float_ext_pane_g1

0x1485,	// (0x00018dd2) grid_highlight_pane_cp12

0x920c,	// (0x00020b59) cell_last_hwr_side_pane_ParamLimits

0x920c,	// (0x00020b59) cell_last_hwr_side_pane

0xe446,	// (0x00025d93) cell_last_hwr_side_pane_g1

0x148e,	// (0x00018ddb) cell_last_hwr_side_pane_g2

0x0001,

0xfe08,	// (0x00027755) cell_last_hwr_side_pane_g

0x988c,	// (0x000211d9) vkb2_area_bottom_space_btn_pane_ParamLimits

0x988c,	// (0x000211d9) vkb2_area_bottom_space_btn_pane

0xe6c1,	// (0x0002600e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0f3a,	// (0x00018887) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9b0a,	// (0x00021457) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9b29,	// (0x00021476) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9b29,	// (0x00021476) vkb2_area_bottom_space_btn_pane_g1

0x9b63,	// (0x000214b0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9b63,	// (0x000214b0) vkb2_area_bottom_space_btn_pane_g2

0x9b99,	// (0x000214e6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9b99,	// (0x000214e6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0d,	// (0x0002775a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0d,	// (0x0002775a) vkb2_area_bottom_space_btn_pane_g

0x9180,	// (0x00020acd) cel_fep_hwr_func_pane_ParamLimits

0x9180,	// (0x00020acd) cel_fep_hwr_func_pane

0x91bc,	// (0x00020b09) cell_hwr_side_button_pane_ParamLimits

0x91bc,	// (0x00020b09) cell_hwr_side_button_pane

0x0928,	// (0x00018275) aid_area_touch_clock_ParamLimits

0xa2b6,	// (0x00021c03) bg_uniindi_top_pane_ParamLimits

0x093a,	// (0x00018287) uniindi_top_pane_g1_ParamLimits

0x0950,	// (0x0001829d) uniindi_top_pane_g2_ParamLimits

0x095c,	// (0x000182a9) uniindi_top_pane_g3_ParamLimits

0x096d,	// (0x000182ba) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x0002766d) uniindi_top_pane_g_ParamLimits

0x097a,	// (0x000182c7) uniindi_top_pane_t1_ParamLimits

0xa2b6,	// (0x00021c03) bg_vkb2_func_pane_cp01_ParamLimits

0xa2b6,	// (0x00021c03) bg_vkb2_func_pane_cp01

0x2eed,	// (0x0001a83a) cel_fep_hwr_func_pane_g1_ParamLimits

0x2eed,	// (0x0001a83a) cel_fep_hwr_func_pane_g1

0xa2b6,	// (0x00021c03) bg_vkb2_func_pane_cp02_ParamLimits

0xa2b6,	// (0x00021c03) bg_vkb2_func_pane_cp02

0x2eed,	// (0x0001a83a) cell_hwr_side_button_pane_g1_ParamLimits

0x2eed,	// (0x0001a83a) cell_hwr_side_button_pane_g1

0xbbab,	// (0x000234f8) status_pane_g4_ParamLimits

0xbbab,	// (0x000234f8) status_pane_g4

0xbbc3,	// (0x00023510) status_pane_t1

0xe149,	// (0x00025a96) form2_midp_gauge_slider_cont_pane

0xe151,	// (0x00025a9e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe163,	// (0x00025ab0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe175,	// (0x00025ac2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf3,	// (0x00027440) form2_midp_gauge_slider_pane_t_ParamLimits

0xe187,	// (0x00025ad4) form2_midp_slider_pane_ParamLimits

0x9503,	// (0x00020e50) aid_size_cell_func_vkb2_ParamLimits

0x9503,	// (0x00020e50) aid_size_cell_func_vkb2

0x1438,	// (0x00018d85) slider_pane_g4_ParamLimits

0x1438,	// (0x00018d85) slider_pane_g4

0x9be3,	// (0x00021530) form2_midp_gauge_slider_pane_t2_cp01

0x9bf1,	// (0x0002153e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9bf1,	// (0x0002153e) form2_midp_gauge_slider_pane_t3_cp01

0x9c0e,	// (0x0002155b) form2_midp_slider_pane_cp01

0x9f39,	// (0x00021886) navi_smil_pane

0x2f1d,	// (0x0001a86a) navi_smil_pane_g1

0x2f25,	// (0x0001a872) navi_smil_pane_t1

0x2efb,	// (0x0001a848) form2_midp_slider_pane_g1

0x2f04,	// (0x0001a851) form2_midp_slider_pane_g2

0x2f0c,	// (0x0001a859) form2_midp_slider_pane_g3

0x2efb,	// (0x0001a848) form2_midp_slider_pane_g4

0x9c17,	// (0x00021564) form2_midp_slider_pane_g5

0x0004,

0xfe16,	// (0x00027763) form2_midp_slider_pane_g

0x9bd3,	// (0x00021520) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9bd3,	// (0x00021520) vkb2_area_bottom_space_btn_pane_g4

0xb9e0,	// (0x0002332d) lc0_navi_pane_ParamLimits

0xb9e0,	// (0x0002332d) lc0_navi_pane

0xba56,	// (0x000233a3) lc0_stat_indi_pane_ParamLimits

0xba56,	// (0x000233a3) lc0_stat_indi_pane

0xba6d,	// (0x000233ba) ls0_title_pane_ParamLimits

0xba6d,	// (0x000233ba) ls0_title_pane

0xa880,	// (0x000221cd) bg_popup_sub_pane_cp14_ParamLimits

0x090f,	// (0x0001825c) list_uniindi_pane_ParamLimits

0x091b,	// (0x00018268) uniindi_top_pane_ParamLimits

0x09b6,	// (0x00018303) list_single_uniindi_pane_g1_ParamLimits

0x09c9,	// (0x00018316) list_single_uniindi_pane_t1_ParamLimits

0x9c20,	// (0x0002156d) lc0_stat_clock_pane_ParamLimits

0x9c20,	// (0x0002156d) lc0_stat_clock_pane

0x9c2d,	// (0x0002157a) lc0_stat_indi_pane_g1_ParamLimits

0x9c2d,	// (0x0002157a) lc0_stat_indi_pane_g1

0x9c3a,	// (0x00021587) lc0_stat_indi_pane_g2_ParamLimits

0x9c3a,	// (0x00021587) lc0_stat_indi_pane_g2

0x0001,

0xfe21,	// (0x0002776e) lc0_stat_indi_pane_g_ParamLimits

0xfe21,	// (0x0002776e) lc0_stat_indi_pane_g

0x9c47,	// (0x00021594) lc0_uni_indicator_pane_ParamLimits

0x9c47,	// (0x00021594) lc0_uni_indicator_pane

0x2f33,	// (0x0001a880) ls0_title_pane_g1_ParamLimits

0x2f33,	// (0x0001a880) ls0_title_pane_g1

0x9c54,	// (0x000215a1) ls0_title_pane_t1_ParamLimits

0x9c54,	// (0x000215a1) ls0_title_pane_t1

0x9c8a,	// (0x000215d7) lc0_uni_indicator_pane_g1_ParamLimits

0x9c8a,	// (0x000215d7) lc0_uni_indicator_pane_g1

0x2f47,	// (0x0001a894) lc0_stat_clock_pane_t1

0x9f39,	// (0x00021886) main_ai5_pane

0x2f55,	// (0x0001a8a2) ai5_sk_pane_ParamLimits

0x2f55,	// (0x0001a8a2) ai5_sk_pane

0x9ca0,	// (0x000215ed) cell_ai5_widget_pane_ParamLimits

0x9ca0,	// (0x000215ed) cell_ai5_widget_pane

0x2f62,	// (0x0001a8af) aid_size_cell_widget_grid

0x2f78,	// (0x0001a8c5) bg_ai5_widget_pane_ParamLimits

0x2f78,	// (0x0001a8c5) bg_ai5_widget_pane

0x2fe2,	// (0x0001a92f) cell_ai5_widget_pane_g2

0x2ff2,	// (0x0001a93f) cell_ai5_widget_pane_g3

0x3011,	// (0x0001a95e) cell_ai5_widget_pane_g4

0x301d,	// (0x0001a96a) cell_ai5_widget_pane_g5

0x3029,	// (0x0001a976) cell_ai5_widget_pane_g6

0x3035,	// (0x0001a982) cell_ai5_widget_pane_g7

0x307d,	// (0x0001a9ca) cell_ai5_widget_pane_t1_ParamLimits

0x307d,	// (0x0001a9ca) cell_ai5_widget_pane_t1

0x309a,	// (0x0001a9e7) cell_ai5_widget_pane_t2_ParamLimits

0x309a,	// (0x0001a9e7) cell_ai5_widget_pane_t2

0x30b2,	// (0x0001a9ff) cell_ai5_widget_pane_t3_ParamLimits

0x30b2,	// (0x0001a9ff) cell_ai5_widget_pane_t3

0x30ca,	// (0x0001aa17) cell_ai5_widget_pane_t4_ParamLimits

0x30ca,	// (0x0001aa17) cell_ai5_widget_pane_t4

0x30e4,	// (0x0001aa31) cell_ai5_widget_pane_t5_ParamLimits

0x30e4,	// (0x0001aa31) cell_ai5_widget_pane_t5

0x3103,	// (0x0001aa50) cell_ai5_widget_pane_t6_ParamLimits

0x3103,	// (0x0001aa50) cell_ai5_widget_pane_t6

0x3115,	// (0x0001aa62) cell_ai5_widget_pane_t7_ParamLimits

0x3115,	// (0x0001aa62) cell_ai5_widget_pane_t7

0x312e,	// (0x0001aa7b) cell_ai5_widget_pane_t8_ParamLimits

0x312e,	// (0x0001aa7b) cell_ai5_widget_pane_t8

0x0009,

0xfe3b,	// (0x00027788) cell_ai5_widget_pane_t_ParamLimits

0xfe3b,	// (0x00027788) cell_ai5_widget_pane_t

0x317a,	// (0x0001aac7) grid_ai5_widget_pane

0xa880,	// (0x000221cd) highlight_cell_ai5_widget_pane_ParamLimits

0xa880,	// (0x000221cd) highlight_cell_ai5_widget_pane

0x9d70,	// (0x000216bd) ai5_sk_left_pane

0x9d7a,	// (0x000216c7) ai5_sk_middle_pane

0x9d84,	// (0x000216d1) ai5_sk_right_pane

0x318e,	// (0x0001aadb) bg_ai5_widget_pane_g1_ParamLimits

0x318e,	// (0x0001aadb) bg_ai5_widget_pane_g1

0x319a,	// (0x0001aae7) bg_ai5_widget_pane_g2_ParamLimits

0x319a,	// (0x0001aae7) bg_ai5_widget_pane_g2

0x31a6,	// (0x0001aaf3) bg_ai5_widget_pane_g3_ParamLimits

0x31a6,	// (0x0001aaf3) bg_ai5_widget_pane_g3

0x31b2,	// (0x0001aaff) bg_ai5_widget_pane_g4_ParamLimits

0x31b2,	// (0x0001aaff) bg_ai5_widget_pane_g4

0x31be,	// (0x0001ab0b) bg_ai5_widget_pane_g5_ParamLimits

0x31be,	// (0x0001ab0b) bg_ai5_widget_pane_g5

0x31ca,	// (0x0001ab17) bg_ai5_widget_pane_g6_ParamLimits

0x31ca,	// (0x0001ab17) bg_ai5_widget_pane_g6

0x31d6,	// (0x0001ab23) bg_ai5_widget_pane_g7_ParamLimits

0x31d6,	// (0x0001ab23) bg_ai5_widget_pane_g7

0x31e2,	// (0x0001ab2f) bg_ai5_widget_pane_g8_ParamLimits

0x31e2,	// (0x0001ab2f) bg_ai5_widget_pane_g8

0x31ee,	// (0x0001ab3b) bg_ai5_widget_pane_g9_ParamLimits

0x31ee,	// (0x0001ab3b) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x0002779d) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x0002779d) bg_ai5_widget_pane_g

0x3221,	// (0x0001ab6e) cell_shortcut_ai5_widget_pane_ParamLimits

0x3221,	// (0x0001ab6e) cell_shortcut_ai5_widget_pane

0xb4ea,	// (0x00022e37) bg_cell_shortcut_ai5_widget_pane

0x3232,	// (0x0001ab7f) cell_grid_ai5_widget_pane_g1

0x323b,	// (0x0001ab88) highlight_cell_shortcut_ai5_widget_pane

0xbd38,	// (0x00023685) ai5_sk_left_pane_g1

0x3243,	// (0x0001ab90) ai5_sk_left_pane_g2

0x324b,	// (0x0001ab98) ai5_sk_left_pane_g3

0x3253,	// (0x0001aba0) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x000277b0) ai5_sk_left_pane_g

0x325b,	// (0x0001aba8) ai5_sk_left_pane_t1

0xbd30,	// (0x0002367d) ai5_sk_right_pane_g1

0x3269,	// (0x0001abb6) ai5_sk_right_pane_g2

0x3271,	// (0x0001abbe) ai5_sk_right_pane_g3

0x3279,	// (0x0001abc6) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x000277b9) ai5_sk_right_pane_g

0x3281,	// (0x0001abce) ai5_sk_right_pane_t1

0xbd30,	// (0x0002367d) ai5_sk_middle_pane_g1

0xbd38,	// (0x00023685) ai5_sk_middle_pane_g2

0xbd50,	// (0x0002369d) ai5_sk_middle_pane_g3

0x3271,	// (0x0001abbe) ai5_sk_middle_pane_g4

0x324b,	// (0x0001ab98) ai5_sk_middle_pane_g5

0x328f,	// (0x0001abdc) ai5_sk_middle_pane_g6

0x9d8e,	// (0x000216db) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x000277c2) ai5_sk_middle_pane_g

0xb86c,	// (0x000231b9) aid_touch_area_size_lc0_ParamLimits

0xb86c,	// (0x000231b9) aid_touch_area_size_lc0

0x930b,	// (0x00020c58) cell_hwr_candidate_pane_t1_ParamLimits

0xb888,	// (0x000231d5) aid_touch_navi_pane

0xbb55,	// (0x000234a2) status_dt_navi_pane_ParamLimits

0xbb55,	// (0x000234a2) status_dt_navi_pane

0xbb62,	// (0x000234af) status_dt_sta_pane_ParamLimits

0xbb62,	// (0x000234af) status_dt_sta_pane

0x9d96,	// (0x000216e3) dt_sta_controll_pane

0x9da3,	// (0x000216f0) dt_sta_indi_pane

0x9db0,	// (0x000216fd) dt_sta_title_pane

0xa2b6,	// (0x00021c03) bg_dt_sta_indi_pane_ParamLimits

0xa2b6,	// (0x00021c03) bg_dt_sta_indi_pane

0x3297,	// (0x0001abe4) dt_sta_battery_pane

0x329f,	// (0x0001abec) dt_sta_indi_pane_g1

0x32a8,	// (0x0001abf5) dt_sta_indi_pane_g2

0x32b1,	// (0x0001abfe) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x000277d1) dt_sta_indi_pane_g

0x32ba,	// (0x0001ac07) dt_sta_signal_pane

0xa880,	// (0x000221cd) bg_dt_sta_title_pane_ParamLimits

0xa880,	// (0x000221cd) bg_dt_sta_title_pane

0xcc00,	// (0x0002454d) dt_sta_title_pane_g1

0x32c3,	// (0x0001ac10) dt_sta_title_pane_t1_ParamLimits

0x32c3,	// (0x0001ac10) dt_sta_title_pane_t1

0x9f39,	// (0x00021886) bg_dt_sta_control_pane

0x32d8,	// (0x0001ac25) dt_sta_controll_pane_g1

0x32e1,	// (0x0001ac2e) bg_dt_sta_title_pane_g1

0x32ea,	// (0x0001ac37) bg_dt_sta_title_pane_g2

0x32f3,	// (0x0001ac40) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x000277d8) bg_dt_sta_title_pane_g

0xe446,	// (0x00025d93) bg_dt_sta_indi_pane_g1

0x32fc,	// (0x0001ac49) dt_sta_signal_pane_g1

0x3304,	// (0x0001ac51) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x000277df) dt_sta_signal_pane_g

0x330c,	// (0x0001ac59) dt_sta_battery_pane_g1

0x3315,	// (0x0001ac62) dt_sta_battery_pane_t1

0xe446,	// (0x00025d93) bg_dt_sta_control_pane_g1

0xafef,	// (0x0002293c) fep_china_uni_eep_pane

0xaff7,	// (0x00022944) fep_china_uni_entry_pane_ParamLimits

0xb007,	// (0x00022954) popup_fep_china_uni_window_g1_ParamLimits

0xb017,	// (0x00022964) popup_fep_china_uni_window_g2_ParamLimits

0xb017,	// (0x00022964) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0002706b) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0002706b) popup_fep_china_uni_window_g

0x3324,	// (0x0001ac71) fep_china_uni_eep_pane_g1

0x332c,	// (0x0001ac79) fep_china_uni_eep_pane_t1

0x2f14,	// (0x0001a861) aid_touch_area_size_smil_player

0xb9d8,	// (0x00023325) lc0_clock_pane

0xbbb7,	// (0x00023504) status_pane_g5_ParamLimits

0xbbb7,	// (0x00023504) status_pane_g5

0x8830,	// (0x0002017d) popup_keymap_window

0xbb77,	// (0x000234c4) status_icon_pane

0x2ff2,	// (0x0001a93f) cell_ai5_widget_pane_g3_ParamLimits

0x3011,	// (0x0001a95e) cell_ai5_widget_pane_g4_ParamLimits

0x301d,	// (0x0001a96a) cell_ai5_widget_pane_g5_ParamLimits

0x3041,	// (0x0001a98e) cell_ai5_widget_pane_g8_ParamLimits

0x3041,	// (0x0001a98e) cell_ai5_widget_pane_g8

0x3055,	// (0x0001a9a2) cell_ai5_widget_pane_g9_ParamLimits

0x3055,	// (0x0001a9a2) cell_ai5_widget_pane_g9

0x3069,	// (0x0001a9b6) cell_ai5_widget_pane_g10_ParamLimits

0x3069,	// (0x0001a9b6) cell_ai5_widget_pane_g10

0x333b,	// (0x0001ac88) status_icon_pane_g1

0x9f39,	// (0x00021886) bg_popup_sub_pane_cp13

0x3343,	// (0x0001ac90) popup_keymap_window_t1

0xb7b1,	// (0x000230fe) control_pane_g6_ParamLimits

0xb7b1,	// (0x000230fe) control_pane_g6

0xb7be,	// (0x0002310b) control_pane_g7_ParamLimits

0xb7be,	// (0x0002310b) control_pane_g7

0xb7cb,	// (0x00023118) control_pane_g8_ParamLimits

0xb7cb,	// (0x00023118) control_pane_g8

0x9d96,	// (0x000216e3) dt_sta_controll_pane_ParamLimits

0x9da3,	// (0x000216f0) dt_sta_indi_pane_ParamLimits

0x9db0,	// (0x000216fd) dt_sta_title_pane_ParamLimits

0xa7b8,	// (0x00022105) aid_size_touch_scroll_bar_cale

0x7ed1,	// (0x0001f81e) popup_discreet_window_ParamLimits

0x7ed1,	// (0x0001f81e) popup_discreet_window

0x7f4b,	// (0x0001f898) popup_sk_window

0xc43e,	// (0x00023d8b) bg_popup_sub_pane_cp28_ParamLimits

0xc43e,	// (0x00023d8b) bg_popup_sub_pane_cp28

0x3351,	// (0x0001ac9e) popup_discreet_window_g1_ParamLimits

0x3351,	// (0x0001ac9e) popup_discreet_window_g1

0x3371,	// (0x0001acbe) popup_discreet_window_t1_ParamLimits

0x3371,	// (0x0001acbe) popup_discreet_window_t1

0x338f,	// (0x0001acdc) popup_discreet_window_t2_ParamLimits

0x338f,	// (0x0001acdc) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x000277e4) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x000277e4) popup_discreet_window_t

0x9dc1,	// (0x0002170e) popup_sk_window_g1

0x9dcb,	// (0x00021718) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x000277eb) popup_sk_window_g

0x9dd5,	// (0x00021722) popup_sk_window_t1

0x9de3,	// (0x00021730) popup_sk_window_t1_copy1

0x2fe2,	// (0x0001a92f) cell_ai5_widget_pane_g2_ParamLimits

0x3140,	// (0x0001aa8d) cell_ai5_widget_pane_t9_ParamLimits

0x3140,	// (0x0001aa8d) cell_ai5_widget_pane_t9

0x9f39,	// (0x00021886) main_fep_fshwr2_pane

0x9df1,	// (0x0002173e) aid_fshwr2_btn_pane

0x9dfd,	// (0x0002174a) aid_fshwr2_syb_pane

0x9e0e,	// (0x0002175b) aid_fshwr2_txt_pane

0x9e1a,	// (0x00021767) fshwr2_func_candi_pane

0x9e2f,	// (0x0002177c) fshwr2_hwr_syb_pane

0x9e46,	// (0x00021793) fshwr2_icf_pane

0x9f39,	// (0x00021886) fshwr2_icf_bg_pane

0x9e6f,	// (0x000217bc) fshwr2_icf_pane_t1_ParamLimits

0x9e6f,	// (0x000217bc) fshwr2_icf_pane_t1

0xe446,	// (0x00025d93) fshwr2_func_candi_pane_g1

0x33e1,	// (0x0001ad2e) fshwr2_func_candi_row_pane_ParamLimits

0x33e1,	// (0x0001ad2e) fshwr2_func_candi_row_pane

0x9e86,	// (0x000217d3) cell_fshwr2_syb_pane_ParamLimits

0x9e86,	// (0x000217d3) cell_fshwr2_syb_pane

0xe6c1,	// (0x0002600e) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe6c1,	// (0x0002600e) fshwr2_hwr_syb_pane_g1

0x9f39,	// (0x00021886) bg_popup_call_pane_cp01

0x33f2,	// (0x0001ad3f) fshwr2_func_candi_cell_pane_ParamLimits

0x33f2,	// (0x0001ad3f) fshwr2_func_candi_cell_pane

0x3423,	// (0x0001ad70) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3423,	// (0x0001ad70) fshwr2_func_candi_cell_bg_pane

0x343d,	// (0x0001ad8a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x343d,	// (0x0001ad8a) fshwr2_func_candi_cell_pane_g1

0x345d,	// (0x0001adaa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x345d,	// (0x0001adaa) fshwr2_func_candi_cell_pane_t1

0x9f39,	// (0x00021886) bg_button_pane_cp08

0xb4ea,	// (0x00022e37) cell_fshwr2_syb_bg_pane

0x9ea2,	// (0x000217ef) cell_fshwr2_syb_bg_pane_g1

0x3470,	// (0x0001adbd) cell_fshwr2_syb_bg_pane_t1

0xa880,	// (0x000221cd) main_tmo_pane

0xcf3d,	// (0x0002488a) uni_indicator_pane_g1_ParamLimits

0xcf52,	// (0x0002489f) uni_indicator_pane_g2_ParamLimits

0xcf68,	// (0x000248b5) uni_indicator_pane_g3_ParamLimits

0xcf7e,	// (0x000248cb) uni_indicator_pane_g4_ParamLimits

0xcf7e,	// (0x000248cb) uni_indicator_pane_g4

0xcf92,	// (0x000248df) uni_indicator_pane_g5_ParamLimits

0xcf92,	// (0x000248df) uni_indicator_pane_g5

0xcfa6,	// (0x000248f3) uni_indicator_pane_g6_ParamLimits

0xcfa6,	// (0x000248f3) uni_indicator_pane_g6

0xf916,	// (0x00027263) uni_indicator_pane_g_ParamLimits

0x0504,	// (0x00017e51) popup_tmo_note_window_ParamLimits

0x0504,	// (0x00017e51) popup_tmo_note_window

0xa880,	// (0x000221cd) fshwr2_bg_pane

0x344e,	// (0x0001ad9b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x344e,	// (0x0001ad9b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x000277f0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x000277f0) fshwr2_func_candi_cell_pane_g

0xe446,	// (0x00025d93) bg_popup_window_pane_cp01

0x347f,	// (0x0001adcc) bg_popup_window_pane_g1_cp01

0x3488,	// (0x0001add5) bg_popup_window_pane_cp22_ParamLimits

0x3488,	// (0x0001add5) bg_popup_window_pane_cp22

0x3496,	// (0x0001ade3) listscroll_tmo_link_pane_ParamLimits

0x3496,	// (0x0001ade3) listscroll_tmo_link_pane

0x34d6,	// (0x0001ae23) popup_tmo_note_window_g1_ParamLimits

0x34d6,	// (0x0001ae23) popup_tmo_note_window_g1

0x34e3,	// (0x0001ae30) tmo_note_info_pane_ParamLimits

0x34e3,	// (0x0001ae30) tmo_note_info_pane

0x9eaa,	// (0x000217f7) list_tmo_note_info_pane_g1_ParamLimits

0x9eaa,	// (0x000217f7) list_tmo_note_info_pane_g1

0x34fd,	// (0x0001ae4a) list_tmo_note_info_pane_g2_ParamLimits

0x34fd,	// (0x0001ae4a) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x000277f5) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x000277f5) list_tmo_note_info_pane_g

0x3519,	// (0x0001ae66) list_tmo_note_info_text_pane_ParamLimits

0x3519,	// (0x0001ae66) list_tmo_note_info_text_pane

0x355b,	// (0x0001aea8) list_tmo_link_pane

0x3568,	// (0x0001aeb5) scroll_pane_cp20

0x3575,	// (0x0001aec2) list_single_tmo_link_pane_ParamLimits

0x3575,	// (0x0001aec2) list_single_tmo_link_pane

0x3585,	// (0x0001aed2) list_single_tmo_link_pane_t1

0x3593,	// (0x0001aee0) list_tmo_note_info_text_pane_t1_ParamLimits

0x3593,	// (0x0001aee0) list_tmo_note_info_text_pane_t1

0xa946,	// (0x00022293) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa946,	// (0x00022293) aid_size_touch_scroll_bar_cp01

0x72a7,	// (0x0001ebf4) aid_size_touch_slider_marker

0x7f33,	// (0x0001f880) popup_settings_window_ParamLimits

0x7f33,	// (0x0001f880) popup_settings_window

0x7453,	// (0x0001eda0) popup_candi_list_indi_window

0xb888,	// (0x000231d5) aid_touch_navi_pane_ParamLimits

0x945c,	// (0x00020da9) rs_clock_indi_pane

0x9465,	// (0x00020db2) sctrl_sk_bottom_pane_ParamLimits

0x9476,	// (0x00020dc3) sctrl_sk_top_pane_ParamLimits

0x955d,	// (0x00020eaa) popup_fep_tooltip_window

0x2f62,	// (0x0001a8af) aid_size_cell_widget_grid_ParamLimits

0x2fd6,	// (0x0001a923) cell_ai5_widget_pane_g1_ParamLimits

0x2fd6,	// (0x0001a923) cell_ai5_widget_pane_g1

0x3029,	// (0x0001a976) cell_ai5_widget_pane_g6_ParamLimits

0x3035,	// (0x0001a982) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe26,	// (0x00027773) cell_ai5_widget_pane_g_ParamLimits

0xfe26,	// (0x00027773) cell_ai5_widget_pane_g

0x3164,	// (0x0001aab1) cell_ai5_widget_pane_t10_ParamLimits

0x3164,	// (0x0001aab1) cell_ai5_widget_pane_t10

0x317a,	// (0x0001aac7) grid_ai5_widget_pane_ParamLimits

0x31fa,	// (0x0001ab47) cell_contacts_ai5_widget_pane_ParamLimits

0x31fa,	// (0x0001ab47) cell_contacts_ai5_widget_pane

0x33a4,	// (0x0001acf1) popup_discreet_window_t3_ParamLimits

0x33a4,	// (0x0001acf1) popup_discreet_window_t3

0x9e5b,	// (0x000217a8) popup_fshwr2_char_preview_window_ParamLimits

0x9e5b,	// (0x000217a8) popup_fshwr2_char_preview_window

0x9ec1,	// (0x0002180e) tmo_note_info_pane_t1

0x9ed6,	// (0x00021823) tmo_note_info_pane_t2

0x9eef,	// (0x0002183c) tmo_note_info_pane_t3

0x3537,	// (0x0001ae84) tmo_note_info_pane_t4

0x3549,	// (0x0001ae96) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x000277fa) tmo_note_info_pane_t

0x355b,	// (0x0001aea8) list_tmo_link_pane_ParamLimits

0x3568,	// (0x0001aeb5) scroll_pane_cp20_ParamLimits

0x9f39,	// (0x00021886) bg_popup_fep_char_preview_window_cp01

0x35ac,	// (0x0001aef9) popup_fshwr2_char_preview_window_t1

0x35ba,	// (0x0001af07) popup_candi_list_indi_window_g1

0x35c3,	// (0x0001af10) bg_cell_contacts_ai5_widget_pane

0x35cf,	// (0x0001af1c) cell_contacts_ai5_widget_pane_g1

0x35e2,	// (0x0001af2f) cell_contacts_ai5_widget_pane_g2

0x35ee,	// (0x0001af3b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x00027805) cell_contacts_ai5_widget_pane_g

0x3600,	// (0x0001af4d) cell_contacts_ai5_widget_pane_t1

0xa880,	// (0x000221cd) highlight_cell_shortcut_ai5_widget_pane_cp01

0x367a,	// (0x0001afc7) settings_container_pane

0xb4ea,	// (0x00022e37) listscroll_set_pane_copy1

0xdaba,	// (0x00025407) scroll_pane_cp121_copy1

0x3686,	// (0x0001afd3) set_content_pane_copy1

0x368e,	// (0x0001afdb) aid_height_set_list_copy1_ParamLimits

0x368e,	// (0x0001afdb) aid_height_set_list_copy1

0xd199,	// (0x00024ae6) aid_size_parent_copy1_ParamLimits

0xd199,	// (0x00024ae6) aid_size_parent_copy1

0x369a,	// (0x0001afe7) button_value_adjust_pane_cp6_copy1_ParamLimits

0x369a,	// (0x0001afe7) button_value_adjust_pane_cp6_copy1

0xb826,	// (0x00023173) list_highlight_pane_cp2_copy1_ParamLimits

0xb826,	// (0x00023173) list_highlight_pane_cp2_copy1

0x36ae,	// (0x0001affb) list_set_pane_copy1_ParamLimits

0x36ae,	// (0x0001affb) list_set_pane_copy1

0x3615,	// (0x0001af62) main_pane_set_t1_copy1_ParamLimits

0x3615,	// (0x0001af62) main_pane_set_t1_copy1

0x364f,	// (0x0001af9c) main_pane_set_t2_copy1_ParamLimits

0x364f,	// (0x0001af9c) main_pane_set_t2_copy1

0x375b,	// (0x0001b0a8) main_pane_set_t3_copy1

0x3769,	// (0x0001b0b6) main_pane_set_t4_copy1

0x366e,	// (0x0001afbb) set_content_pane_g1_copy1_ParamLimits

0x366e,	// (0x0001afbb) set_content_pane_g1_copy1

0x3777,	// (0x0001b0c4) setting_code_pane_copy1

0x377f,	// (0x0001b0cc) setting_slider_graphic_pane_copy1

0x377f,	// (0x0001b0cc) setting_slider_pane_copy1

0x377f,	// (0x0001b0cc) setting_text_pane_copy1

0x377f,	// (0x0001b0cc) setting_volume_pane_copy1

0x3777,	// (0x0001b0c4) settings_code_pane_cp2_copy1

0x3787,	// (0x0001b0d4) settings_code_pane_cp_copy1_ParamLimits

0x3787,	// (0x0001b0d4) settings_code_pane_cp_copy1

0x379b,	// (0x0001b0e8) volume_set_pane_copy1

0x37a3,	// (0x0001b0f0) volume_set_pane_g10_copy1

0x37ab,	// (0x0001b0f8) volume_set_pane_g1_copy1

0x37b3,	// (0x0001b100) volume_set_pane_g2_copy1

0x37bb,	// (0x0001b108) volume_set_pane_g3_copy1

0x37c3,	// (0x0001b110) volume_set_pane_g4_copy1

0x37cb,	// (0x0001b118) volume_set_pane_g5_copy1

0x37d3,	// (0x0001b120) volume_set_pane_g6_copy1

0x37db,	// (0x0001b128) volume_set_pane_g7_copy1

0x37e3,	// (0x0001b130) volume_set_pane_g8_copy1

0x37eb,	// (0x0001b138) volume_set_pane_g9_copy1

0xa02d,	// (0x0002197a) bg_set_opt_pane_cp_copy1_ParamLimits

0xa02d,	// (0x0002197a) bg_set_opt_pane_cp_copy1

0x37f3,	// (0x0001b140) setting_slider_pane_t1_copy1_ParamLimits

0x37f3,	// (0x0001b140) setting_slider_pane_t1_copy1

0x3811,	// (0x0001b15e) setting_slider_pane_t2_copy1_ParamLimits

0x3811,	// (0x0001b15e) setting_slider_pane_t2_copy1

0x382b,	// (0x0001b178) setting_slider_pane_t3_copy1_ParamLimits

0x382b,	// (0x0001b178) setting_slider_pane_t3_copy1

0x3843,	// (0x0001b190) slider_set_pane_copy1_ParamLimits

0x3843,	// (0x0001b190) slider_set_pane_copy1

0xa8e7,	// (0x00022234) set_opt_bg_pane_g1_copy2

0xa8ef,	// (0x0002223c) set_opt_bg_pane_g2_copy2

0x3859,	// (0x0001b1a6) set_opt_bg_pane_g3_copy2

0xa8ff,	// (0x0002224c) set_opt_bg_pane_g4_copy2

0xa907,	// (0x00022254) set_opt_bg_pane_g5_copy2

0xa90f,	// (0x0002225c) set_opt_bg_pane_g6_copy2

0x3863,	// (0x0001b1b0) set_opt_bg_pane_g7_copy2

0x386b,	// (0x0001b1b8) set_opt_bg_pane_g8_copy2

0x3875,	// (0x0001b1c2) set_opt_bg_pane_g9_copy2

0x387f,	// (0x0001b1cc) aid_size_touch_slider_mark_copy1_ParamLimits

0x387f,	// (0x0001b1cc) aid_size_touch_slider_mark_copy1

0x3893,	// (0x0001b1e0) slider_set_pane_g1_copy1

0x389c,	// (0x0001b1e9) slider_set_pane_g2_copy1

0xd5f9,	// (0x00024f46) slider_set_pane_g3_copy1_ParamLimits

0xd5f9,	// (0x00024f46) slider_set_pane_g3_copy1

0xd60d,	// (0x00024f5a) slider_set_pane_g4_copy1_ParamLimits

0xd60d,	// (0x00024f5a) slider_set_pane_g4_copy1

0xd625,	// (0x00024f72) slider_set_pane_g5_copy1_ParamLimits

0xd625,	// (0x00024f72) slider_set_pane_g5_copy1

0xd5f9,	// (0x00024f46) slider_set_pane_g6_copy1_ParamLimits

0xd5f9,	// (0x00024f46) slider_set_pane_g6_copy1

0x38a4,	// (0x0001b1f1) slider_set_pane_g7_copy1_ParamLimits

0x38a4,	// (0x0001b1f1) slider_set_pane_g7_copy1

0x9f4d,	// (0x0002189a) bg_set_opt_pane_cp2_copy1

0x38ba,	// (0x0001b207) setting_slider_graphic_pane_g1_copy1

0x38c3,	// (0x0001b210) setting_slider_graphic_pane_t1_copy1

0x38d3,	// (0x0001b220) setting_slider_graphic_pane_t2_copy1

0x38e3,	// (0x0001b230) slider_set_pane_cp_copy1

0x38f3,	// (0x0001b240) input_focus_pane_cp1_copy1

0x38fc,	// (0x0001b249) list_set_text_pane_copy1

0x3904,	// (0x0001b251) setting_text_pane_g1_copy1

0x7c44,	// (0x0001f591) set_text_pane_t1_copy1

0x38f3,	// (0x0001b240) input_focus_pane_cp2_copy1

0x3904,	// (0x0001b251) setting_code_pane_g1_copy1

0x392a,	// (0x0001b277) setting_code_pane_t1_copy1

0xd8fa,	// (0x00025247) list_set_graphic_pane_copy1

0x9f4d,	// (0x0002189a) bg_set_opt_pane_cp4_copy1

0xb1ec,	// (0x00022b39) list_set_graphic_pane_g1_copy1_ParamLimits

0xb1ec,	// (0x00022b39) list_set_graphic_pane_g1_copy1

0x3938,	// (0x0001b285) list_set_graphic_pane_g2_copy1

0xb204,	// (0x00022b51) list_set_graphic_pane_t1_copy1_ParamLimits

0xb204,	// (0x00022b51) list_set_graphic_pane_t1_copy1

0xe446,	// (0x00025d93) rs_clock_indi_pane_g1

0x3940,	// (0x0001b28d) rs_clock_indi_pane_t1

0x394e,	// (0x0001b29b) rs_indi_pane

0x3956,	// (0x0001b2a3) rs_indi_pane_g1

0x395f,	// (0x0001b2ac) rs_indi_pane_g2

0x3968,	// (0x0001b2b5) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x0002780c) rs_indi_pane_g

0xb4ea,	// (0x00022e37) bg_popup_preview_window_pane_cp03

0x3971,	// (0x0001b2be) popup_fep_tooltip_window_t1

0xf0c1,	// (0x00026a0e) popup_note2_window_g2_ParamLimits

0xf0c1,	// (0x00026a0e) popup_note2_window_g2

0x0001,

0xfc5f,	// (0x000275ac) popup_note2_window_g_ParamLimits

0xfc5f,	// (0x000275ac) popup_note2_window_g

0x0124,	// (0x00017a71) bg_popup_sub_pane_cp11_ParamLimits

0x0131,	// (0x00017a7e) cell_ai3_links_pane_g1_ParamLimits

0x0148,	// (0x00017a95) cell_ai3_links_pane_t1

0x7c44,	// (0x0001f591) set_text_pane_t1_copy1_ParamLimits

0xb3f9,	// (0x00022d46) cell_graphic_popup_pane_cp2_ParamLimits

0xb3f9,	// (0x00022d46) cell_graphic_popup_pane_cp2

0x9f04,	// (0x00021851) cell_graphic_popup_pane_g1_cp2

0xa5cb,	// (0x00021f18) cell_graphic_popup_pane_g2_cp2

0x397f,	// (0x0001b2cc) cell_graphic_popup_pane_g3_cp2

0x3987,	// (0x0001b2d4) cell_graphic_popup_pane_t2_cp2

0xa5dc,	// (0x00021f29) grid_highlight_pane_cp3_cp2

0xac29,	// (0x00022576) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa880,	// (0x000221cd) main_tmo_pane_ParamLimits

0x04f8,	// (0x00017e45) popup_tmo_big_image_note_window

0x2fc6,	// (0x0001a913) cell_ai5_widget_list_pane

0x2fce,	// (0x0001a91b) cell_ai5_widget_lrg_icon_pane

0x9ec1,	// (0x0002180e) tmo_note_info_pane_t1_ParamLimits

0x9ed6,	// (0x00021823) tmo_note_info_pane_t2_ParamLimits

0x9eef,	// (0x0002183c) tmo_note_info_pane_t3_ParamLimits

0x3537,	// (0x0001ae84) tmo_note_info_pane_t4_ParamLimits

0x3549,	// (0x0001ae96) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x000277fa) tmo_note_info_pane_t_ParamLimits

0x367a,	// (0x0001afc7) settings_container_pane_ParamLimits

0x38eb,	// (0x0001b238) indicator_popup_pane_cp5

0x38eb,	// (0x0001b238) indicator_popup_pane_cp6

0xd8fa,	// (0x00025247) list_set_graphic_pane_copy1_ParamLimits

0x9f39,	// (0x00021886) bg_popup_window_pane_cp23

0x3995,	// (0x0001b2e2) popup_tmo_big_image_note_window_g1

0x39a0,	// (0x0001b2ed) popup_tmo_big_image_note_window_t1

0x39b0,	// (0x0001b2fd) popup_tmo_big_image_note_window_t2

0x39c0,	// (0x0001b30d) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x00027813) popup_tmo_big_image_note_window_t

0x39d0,	// (0x0001b31d) cell_ai5_widget_lrg_icon_pane_g1

0x39d8,	// (0x0001b325) cell_ai5_widget_lrg_icon_pane_t1

0x39e6,	// (0x0001b333) cell_ai5_widget_list_row_pane_ParamLimits

0x39e6,	// (0x0001b333) cell_ai5_widget_list_row_pane

0x39ff,	// (0x0001b34c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x39ff,	// (0x0001b34c) cell_ai5_widget_list_row_pane_g1

0x3a0c,	// (0x0001b359) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3a0c,	// (0x0001b359) cell_ai5_widget_list_row_pane_t1

0x3a24,	// (0x0001b371) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3a24,	// (0x0001b371) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x0002781a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x0002781a) cell_ai5_widget_list_row_pane_t

0x9f39,	// (0x00021886) main_fep_vtchi_ss_pane

0x3a5b,	// (0x0001b3a8) popup_fep_char_pre_window

0x3a63,	// (0x0001b3b0) popup_fep_ituss_window

0x3a84,	// (0x0001b3d1) popup_fep_vkbss_window

0x3aa3,	// (0x0001b3f0) grid_vkbss_keypad_pane_ParamLimits

0x3aa3,	// (0x0001b3f0) grid_vkbss_keypad_pane

0x3ab3,	// (0x0001b400) ituss_keypad_pane

0x3acf,	// (0x0001b41c) aid_vkbss_key_offset_ParamLimits

0x3acf,	// (0x0001b41c) aid_vkbss_key_offset

0x3adb,	// (0x0001b428) cell_vkbss_key_pane_ParamLimits

0x3adb,	// (0x0001b428) cell_vkbss_key_pane

0xbb93,	// (0x000234e0) bg_cell_vkbss_key_g1_ParamLimits

0xbb93,	// (0x000234e0) bg_cell_vkbss_key_g1

0x3af1,	// (0x0001b43e) cell_vkbss_key_3p_pane_ParamLimits

0x3af1,	// (0x0001b43e) cell_vkbss_key_3p_pane

0x3b0b,	// (0x0001b458) cell_vkbss_key_g1_ParamLimits

0x3b0b,	// (0x0001b458) cell_vkbss_key_g1

0x3b25,	// (0x0001b472) cell_vkbss_key_t1_ParamLimits

0x3b25,	// (0x0001b472) cell_vkbss_key_t1

0x3b50,	// (0x0001b49d) cell_ituss_key_pane_ParamLimits

0x3b50,	// (0x0001b49d) cell_ituss_key_pane

0x3b61,	// (0x0001b4ae) bg_cell_ituss_key_g1_ParamLimits

0x3b61,	// (0x0001b4ae) bg_cell_ituss_key_g1

0x3b6d,	// (0x0001b4ba) cell_ituss_key_pane_g1_ParamLimits

0x3b6d,	// (0x0001b4ba) cell_ituss_key_pane_g1

0x3b81,	// (0x0001b4ce) cell_ituss_key_pane_g2_ParamLimits

0x3b81,	// (0x0001b4ce) cell_ituss_key_pane_g2

0x0001,

0xfed4,	// (0x00027821) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x00027821) cell_ituss_key_pane_g

0x3bac,	// (0x0001b4f9) cell_ituss_key_t1_ParamLimits

0x3bac,	// (0x0001b4f9) cell_ituss_key_t1

0x3bda,	// (0x0001b527) cell_ituss_key_t2_ParamLimits

0x3bda,	// (0x0001b527) cell_ituss_key_t2

0x3c0b,	// (0x0001b558) cell_ituss_key_t3_ParamLimits

0x3c0b,	// (0x0001b558) cell_ituss_key_t3

0x3c3c,	// (0x0001b589) cell_ituss_key_t4_ParamLimits

0x3c3c,	// (0x0001b589) cell_ituss_key_t4

0x0003,

0xfed9,	// (0x00027826) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x00027826) cell_ituss_key_t

0x3c6d,	// (0x0001b5ba) cell_vkbss_key_3p_pane_g1

0x3c75,	// (0x0001b5c2) cell_vkbss_key_3p_pane_g2

0x3c7d,	// (0x0001b5ca) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x0002782f) cell_vkbss_key_3p_pane_g

0x9f39,	// (0x00021886) bg_popup_fep_char_preview_window_cp02

0x3c85,	// (0x0001b5d2) popup_fep_char_pre_window_t1

0x9d66,	// (0x000216b3) main_ai5_sk_pane

0x35c3,	// (0x0001af10) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x35cf,	// (0x0001af1c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x35e2,	// (0x0001af2f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x35ee,	// (0x0001af3b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x00027805) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3600,	// (0x0001af4d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa880,	// (0x000221cd) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x9f0c,	// (0x00021859) main_ai5_sk_pane_g1

0xc27c,	// (0x00023bc9) popup_query_code_window_g1

0x3a79,	// (0x0001b3c6) popup_fep_vkb_icf_pane

0x3a8d,	// (0x0001b3da) popup_fep_vtchi_icf_pane

0xa880,	// (0x000221cd) bg_icf_pane

0x3c94,	// (0x0001b5e1) list_vkb_icf_pane

0xa880,	// (0x000221cd) bg_icf_pane_cp01

0x3ca0,	// (0x0001b5ed) vtchi_icf_list_pane

0x3cb1,	// (0x0001b5fe) list_vkb_icf_pane_t1_ParamLimits

0x3cb1,	// (0x0001b5fe) list_vkb_icf_pane_t1

0x3ccb,	// (0x0001b618) vtchi_icf_list_pane_t1_ParamLimits

0x3ccb,	// (0x0001b618) vtchi_icf_list_pane_t1

0x3a63,	// (0x0001b3b0) popup_fep_ituss_window_ParamLimits

0x3a8d,	// (0x0001b3da) popup_fep_vtchi_icf_pane_ParamLimits

0x3ab3,	// (0x0001b400) ituss_keypad_pane_ParamLimits

0x3ac3,	// (0x0001b410) ituss_sks_pane

0xa880,	// (0x000221cd) bg_icf_pane_ParamLimits

0x3a4c,	// (0x0001b399) icf_edit_indi_pane_ParamLimits

0x3a4c,	// (0x0001b399) icf_edit_indi_pane

0x3c94,	// (0x0001b5e1) list_vkb_icf_pane_ParamLimits

0xa880,	// (0x000221cd) bg_icf_pane_cp01_ParamLimits

0x3a4c,	// (0x0001b399) icf_edit_indi_pane_cp01_ParamLimits

0x3a4c,	// (0x0001b399) icf_edit_indi_pane_cp01

0x3ca8,	// (0x0001b5f5) vtchi_query_pane

0xe6c1,	// (0x0002600e) icf_edit_indi_pane_g1_ParamLimits

0xe6c1,	// (0x0002600e) icf_edit_indi_pane_g1

0x3d5c,	// (0x0001b6a9) icf_edit_indi_pane_g2_ParamLimits

0x3d5c,	// (0x0001b6a9) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x00027847) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x00027847) icf_edit_indi_pane_g

0x3d6b,	// (0x0001b6b8) icf_edit_indi_pane_t1

0x3cf2,	// (0x0001b63f) bg_input_focus_pane_cp042

0xa7af,	// (0x000220fc) vtchi_button_pane

0x3cfb,	// (0x0001b648) vtchi_query_pane_t1

0x3d09,	// (0x0001b656) vtchi_query_pane_t2

0x3d17,	// (0x0001b664) vtchi_query_pane_t3

0x0002,

0xfee9,	// (0x00027836) vtchi_query_pane_t

0x9f39,	// (0x00021886) bg_button_pane_cp13

0x3d25,	// (0x0001b672) vtchi_button_pane_g1

0x3d2d,	// (0x0001b67a) ituss_sks_pane_g1

0x3d38,	// (0x0001b685) ituss_sks_pane_g2

0x0001,

0xfef0,	// (0x0002783d) ituss_sks_pane_g

0x3d40,	// (0x0001b68d) ituss_sks_pane_t1

0x3d4e,	// (0x0001b69b) ituss_sks_pane_t2

0x0001,

0xfef5,	// (0x00027842) ituss_sks_pane_t

0xde6f,	// (0x000257bc) indicator_nsta_pane_cp_g1

0xde78,	// (0x000257c5) indicator_nsta_pane_cp_g2

0xde80,	// (0x000257cd) indicator_nsta_pane_cp_g3

0xde88,	// (0x000257d5) indicator_nsta_pane_cp_g4

0xde90,	// (0x000257dd) indicator_nsta_pane_cp_g5

0xde98,	// (0x000257e5) indicator_nsta_pane_cp_g6

0x0005,

0xfaa9,	// (0x000273f6) indicator_nsta_pane_cp_g

0x11cd,	// (0x00018b1a) cell_graphic2_pane_t2_ParamLimits

0x11cd,	// (0x00018b1a) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x000276fc) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x000276fc) cell_graphic2_pane_t

0x11fa,	// (0x00018b47) cell_graphic2_control_pane_t1

0xaf9e,	// (0x000228eb) signal_pane_g3_ParamLimits

0xaf9e,	// (0x000228eb) signal_pane_g3

0xafb0,	// (0x000228fd) signal_pane_g4_ParamLimits

0xafb0,	// (0x000228fd) signal_pane_g4

0x3a36,	// (0x0001b383) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x3a36,	// (0x0001b383) cell_ai5_widget_list_row_pane_t3

0x3b9a,	// (0x0001b4e7) cell_ituss_key_pane_t1_ParamLimits

0x3b9a,	// (0x0001b4e7) cell_ituss_key_pane_t1

0xbea9,	// (0x000237f6) form_field_data_wide_pane_vc_t2_ParamLimits

0xbea9,	// (0x000237f6) form_field_data_wide_pane_vc_t2

0xbebd,	// (0x0002380a) form_field_data_wide_pane_vc_t3_ParamLimits

0xbebd,	// (0x0002380a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fe,	// (0x0002714b) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fe,	// (0x0002714b) form_field_data_wide_pane_vc_t

0xdb2a,	// (0x00025477) form_field_slider_wide_pane_vc_t3_ParamLimits

0xdb2a,	// (0x00025477) form_field_slider_wide_pane_vc_t3

0xdc04,	// (0x00025551) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdc04,	// (0x00025551) form_field_popup_wide_pane_vc_t2

0xdc1b,	// (0x00025568) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdc1b,	// (0x00025568) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa98,	// (0x000273e5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x000273e5) form_field_popup_wide_pane_vc_t

0x9df1,	// (0x0002173e) aid_fshwr2_btn_pane_ParamLimits

0x9dfd,	// (0x0002174a) aid_fshwr2_syb_pane_ParamLimits

0x9e0e,	// (0x0002175b) aid_fshwr2_txt_pane_ParamLimits

0xa880,	// (0x000221cd) fshwr2_bg_pane_ParamLimits

0x9e1a,	// (0x00021767) fshwr2_func_candi_pane_ParamLimits

0x9e2f,	// (0x0002177c) fshwr2_hwr_syb_pane_ParamLimits

0x9e46,	// (0x00021793) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
