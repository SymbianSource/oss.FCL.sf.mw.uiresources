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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003ed27 };

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
0xcfe5,	// (0x0004bd0c) Screen

0xcff1,	// (0x0004bd18) application_window_ParamLimits

0xcff1,	// (0x0004bd18) application_window

0x379b,	// (0x000424c2) screen_g1

0xbdba,	// (0x0004aae1) area_bottom_pane_ParamLimits

0xbdba,	// (0x0004aae1) area_bottom_pane

0x118e,	// (0x0003feb5) area_top_pane_ParamLimits

0x118e,	// (0x0003feb5) area_top_pane

0x1222,	// (0x0003ff49) main_pane_ParamLimits

0x1222,	// (0x0003ff49) main_pane

0x37a5,	// (0x000424cc) misc_graphics

0xd79d,	// (0x0004c4c4) battery_pane_ParamLimits

0xd79d,	// (0x0004c4c4) battery_pane

0x5dfe,	// (0x00044b25) bg_status_flat_pane_g8

0x5e06,	// (0x00044b2d) bg_status_flat_pane_g9

0x51e1,	// (0x00043f08) context_pane_ParamLimits

0x51e1,	// (0x00043f08) context_pane

0xd908,	// (0x0004c62f) navi_pane_ParamLimits

0xd908,	// (0x0004c62f) navi_pane

0xd986,	// (0x0004c6ad) signal_pane_ParamLimits

0xd986,	// (0x0004c6ad) signal_pane

0x0008,

0xf874,	// (0x0004e59b) bg_status_flat_pane_g

0xda16,	// (0x0004c73d) status_pane_g1_ParamLimits

0xda16,	// (0x0004c73d) status_pane_g1

0xda2c,	// (0x0004c753) status_pane_g2_ParamLimits

0xda2c,	// (0x0004c753) status_pane_g2

0x540c,	// (0x00044133) status_pane_g3_ParamLimits

0x540c,	// (0x00044133) status_pane_g3

0x0004,

0xf7a0,	// (0x0004e4c7) status_pane_g_ParamLimits

0xf7a0,	// (0x0004e4c7) status_pane_g

0xda38,	// (0x0004c75f) title_pane_ParamLimits

0xda38,	// (0x0004c75f) title_pane

0xda9b,	// (0x0004c7c2) uni_indicator_pane_ParamLimits

0xda9b,	// (0x0004c7c2) uni_indicator_pane

0x5047,	// (0x00043d6e) bg_list_pane_ParamLimits

0x5047,	// (0x00043d6e) bg_list_pane

0xd710,	// (0x0004c437) find_pane

0xc115,	// (0x0004ae3c) listscroll_app_pane_ParamLimits

0xc115,	// (0x0004ae3c) listscroll_app_pane

0x5073,	// (0x00043d9a) listscroll_form_pane

0x1b96,	// (0x000408bd) listscroll_gen_pane_ParamLimits

0x1b96,	// (0x000408bd) listscroll_gen_pane

0x1baa,	// (0x000408d1) listscroll_set_pane

0x697a,	// (0x000456a1) main_idle_act_pane

0x4d53,	// (0x00043a7a) main_idle_trad_pane

0x4d53,	// (0x00043a7a) main_list_empty_pane

0x508d,	// (0x00043db4) main_midp_pane

0x5099,	// (0x00043dc0) main_pane_g1_ParamLimits

0x5099,	// (0x00043dc0) main_pane_g1

0xc125,	// (0x0004ae4c) popup_ai_message_window_ParamLimits

0xc125,	// (0x0004ae4c) popup_ai_message_window

0xc1b6,	// (0x0004aedd) popup_fep_china_uni_window_ParamLimits

0xc1b6,	// (0x0004aedd) popup_fep_china_uni_window

0x1cb0,	// (0x000409d7) popup_fep_japan_candidate_window_ParamLimits

0x1cb0,	// (0x000409d7) popup_fep_japan_candidate_window

0x1cce,	// (0x000409f5) popup_fep_japan_predictive_window_ParamLimits

0x1cce,	// (0x000409f5) popup_fep_japan_predictive_window

0xc210,	// (0x0004af37) popup_find_window

0xc22d,	// (0x0004af54) popup_grid_graphic_window_ParamLimits

0xc22d,	// (0x0004af54) popup_grid_graphic_window

0x1d33,	// (0x00040a5a) popup_large_graphic_colour_window

0xc2c5,	// (0x0004afec) popup_menu_window_ParamLimits

0xc2c5,	// (0x0004afec) popup_menu_window

0xc491,	// (0x0004b1b8) popup_note_image_window

0xc457,	// (0x0004b17e) popup_note_wait_window_ParamLimits

0xc457,	// (0x0004b17e) popup_note_wait_window

0xc4a9,	// (0x0004b1d0) popup_note_window_ParamLimits

0xc4a9,	// (0x0004b1d0) popup_note_window

0xc54f,	// (0x0004b276) popup_query_code_window_ParamLimits

0xc54f,	// (0x0004b276) popup_query_code_window

0x1f7d,	// (0x00040ca4) popup_query_data_code_window_ParamLimits

0x1f7d,	// (0x00040ca4) popup_query_data_code_window

0xc589,	// (0x0004b2b0) popup_query_data_window_ParamLimits

0xc589,	// (0x0004b2b0) popup_query_data_window

0xc605,	// (0x0004b32c) popup_query_sat_info_window_ParamLimits

0xc605,	// (0x0004b32c) popup_query_sat_info_window

0xc69c,	// (0x0004b3c3) popup_snote_single_graphic_window_ParamLimits

0xc69c,	// (0x0004b3c3) popup_snote_single_graphic_window

0xc69c,	// (0x0004b3c3) popup_snote_single_text_window_ParamLimits

0xc69c,	// (0x0004b3c3) popup_snote_single_text_window

0x2000,	// (0x00040d27) popup_sub_window_general

0x212e,	// (0x00040e55) popup_window_general_ParamLimits

0x212e,	// (0x00040e55) popup_window_general

0x50a7,	// (0x00043dce) power_save_pane

0xbfa4,	// (0x0004accb) control_pane_g1_ParamLimits

0xbfa4,	// (0x0004accb) control_pane_g1

0xbfcd,	// (0x0004acf4) control_pane_g2_ParamLimits

0xbfcd,	// (0x0004acf4) control_pane_g2

0x500a,	// (0x00043d31) control_pane_g3_ParamLimits

0x500a,	// (0x00043d31) control_pane_g3

0x0007,

0xf788,	// (0x0004e4af) control_pane_g_ParamLimits

0xf788,	// (0x0004e4af) control_pane_g

0xc00e,	// (0x0004ad35) control_pane_t1_ParamLimits

0xc00e,	// (0x0004ad35) control_pane_t1

0xc06c,	// (0x0004ad93) control_pane_t2_ParamLimits

0xc06c,	// (0x0004ad93) control_pane_t2

0x0002,

0xf799,	// (0x0004e4c0) control_pane_t_ParamLimits

0xf799,	// (0x0004e4c0) control_pane_t

0xd642,	// (0x0004c369) navi_navi_volume_pane_cp1

0xd64a,	// (0x0004c371) status_small_icon_pane

0x4f3f,	// (0x00043c66) status_small_pane_g1_ParamLimits

0x4f3f,	// (0x00043c66) status_small_pane_g1

0xd652,	// (0x0004c379) status_small_pane_g2_ParamLimits

0xd652,	// (0x0004c379) status_small_pane_g2

0xd65e,	// (0x0004c385) status_small_pane_g3_ParamLimits

0xd65e,	// (0x0004c385) status_small_pane_g3

0xd66a,	// (0x0004c391) status_small_pane_g4_ParamLimits

0xd66a,	// (0x0004c391) status_small_pane_g4

0xd676,	// (0x0004c39d) status_small_pane_g5_ParamLimits

0xd676,	// (0x0004c39d) status_small_pane_g5

0xd684,	// (0x0004c3ab) status_small_pane_g6_ParamLimits

0xd684,	// (0x0004c3ab) status_small_pane_g6

0x0007,

0xf777,	// (0x0004e49e) status_small_pane_g_ParamLimits

0xf777,	// (0x0004e49e) status_small_pane_g

0xd6b3,	// (0x0004c3da) status_small_pane_t1

0xd6d5,	// (0x0004c3fc) status_small_wait_pane_ParamLimits

0xd6d5,	// (0x0004c3fc) status_small_wait_pane

0xd4ad,	// (0x0004c1d4) aid_levels_signal_ParamLimits

0xd4ad,	// (0x0004c1d4) aid_levels_signal

0xd4c5,	// (0x0004c1ec) signal_pane_g1_ParamLimits

0xd4c5,	// (0x0004c1ec) signal_pane_g1

0xd4e0,	// (0x0004c207) signal_pane_g2_ParamLimits

0xd4e0,	// (0x0004c207) signal_pane_g2

0x0003,

0xf708,	// (0x0004e42f) signal_pane_g_ParamLimits

0xf708,	// (0x0004e42f) signal_pane_g

0x482a,	// (0x00043551) context_pane_g1

0xd001,	// (0x0004bd28) title_pane_g1

0xd038,	// (0x0004bd5f) title_pane_t1

0x384d,	// (0x00042574) title_pane_t2

0x3873,	// (0x0004259a) title_pane_t3

0x0002,

0xf557,	// (0x0004e27e) title_pane_t

0xdac3,	// (0x0004c7ea) aid_levels_battery_ParamLimits

0xdac3,	// (0x0004c7ea) aid_levels_battery

0xdadf,	// (0x0004c806) battery_pane_g1_ParamLimits

0xdadf,	// (0x0004c806) battery_pane_g1

0xdafc,	// (0x0004c823) battery_pane_g2_ParamLimits

0xdafc,	// (0x0004c823) battery_pane_g2

0x0001,

0xf7ab,	// (0x0004e4d2) battery_pane_g_ParamLimits

0xf7ab,	// (0x0004e4d2) battery_pane_g

0xdce1,	// (0x0004ca08) uni_indicator_pane_g1

0xdcf7,	// (0x0004ca1e) uni_indicator_pane_g2

0xdd0d,	// (0x0004ca34) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0004e643) uni_indicator_pane_g

0x4bc5,	// (0x000438ec) navi_icon_pane_ParamLimits

0x4bc5,	// (0x000438ec) navi_icon_pane

0x4b03,	// (0x0004382a) navi_midp_pane

0x4be1,	// (0x00043908) navi_navi_pane

0x4beb,	// (0x00043912) navi_text_pane_ParamLimits

0x4beb,	// (0x00043912) navi_text_pane

0x379b,	// (0x000424c2) status_small_wait_pane_g1

0x3c96,	// (0x000429bd) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0004e63e) status_small_wait_pane_g

0x6459,	// (0x00045180) navi_navi_icon_text_pane

0x6461,	// (0x00045188) navi_navi_pane_g1_ParamLimits

0x6461,	// (0x00045188) navi_navi_pane_g1

0x6473,	// (0x0004519a) navi_navi_pane_g2_ParamLimits

0x6473,	// (0x0004519a) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0004e60c) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0004e60c) navi_navi_pane_g

0x6485,	// (0x000451ac) navi_navi_tabs_pane

0x648e,	// (0x000451b5) navi_navi_text_pane

0x6459,	// (0x00045180) navi_navi_volume_pane

0x6435,	// (0x0004515c) navi_text_pane_t1

0x6429,	// (0x00045150) navi_icon_pane_g1

0x637c,	// (0x000450a3) navi_navi_text_pane_t1

0x23be,	// (0x000410e5) navi_navi_volume_pane_g1

0xc913,	// (0x0004b63a) volume_small_pane

0xdc1e,	// (0x0004c945) navi_navi_icon_text_pane_g1

0x62ea,	// (0x00045011) navi_navi_icon_text_pane_t1

0x4be1,	// (0x00043908) navi_tabs_2_long_pane

0x4be1,	// (0x00043908) navi_tabs_2_pane

0x4be1,	// (0x00043908) navi_tabs_3_long_pane

0x4be1,	// (0x00043908) navi_tabs_3_pane

0x4be1,	// (0x00043908) navi_tabs_4_pane

0xc8f3,	// (0x0004b61a) tabs_2_active_pane_ParamLimits

0xc8f3,	// (0x0004b61a) tabs_2_active_pane

0xc903,	// (0x0004b62a) tabs_2_passive_pane_ParamLimits

0xc903,	// (0x0004b62a) tabs_2_passive_pane

0xc8c1,	// (0x0004b5e8) tabs_3_active_pane_ParamLimits

0xc8c1,	// (0x0004b5e8) tabs_3_active_pane

0xc8d1,	// (0x0004b5f8) tabs_3_passive_pane_ParamLimits

0xc8d1,	// (0x0004b5f8) tabs_3_passive_pane

0xc8e2,	// (0x0004b609) tabs_3_passive_pane_cp_ParamLimits

0xc8e2,	// (0x0004b609) tabs_3_passive_pane_cp

0xc88e,	// (0x0004b5b5) tabs_4_active_pane_ParamLimits

0xc88e,	// (0x0004b5b5) tabs_4_active_pane

0xc89f,	// (0x0004b5c6) tabs_4_passive_pane_ParamLimits

0xc89f,	// (0x0004b5c6) tabs_4_passive_pane

0x234a,	// (0x00041071) tabs_4_passive_pane_cp_ParamLimits

0x234a,	// (0x00041071) tabs_4_passive_pane_cp

0xc8b0,	// (0x0004b5d7) tabs_4_passive_pane_cp2_ParamLimits

0xc8b0,	// (0x0004b5d7) tabs_4_passive_pane_cp2

0xc86a,	// (0x0004b591) tabs_2_long_active_pane_ParamLimits

0xc86a,	// (0x0004b591) tabs_2_long_active_pane

0xc87c,	// (0x0004b5a3) tabs_2_long_passive_pane_ParamLimits

0xc87c,	// (0x0004b5a3) tabs_2_long_passive_pane

0xc82b,	// (0x0004b552) tabs_3_long_active_pane_ParamLimits

0xc82b,	// (0x0004b552) tabs_3_long_active_pane

0xc83e,	// (0x0004b565) tabs_3_long_passive_pane_ParamLimits

0xc83e,	// (0x0004b565) tabs_3_long_passive_pane

0xc857,	// (0x0004b57e) tabs_3_long_passive_pane_cp_ParamLimits

0xc857,	// (0x0004b57e) tabs_3_long_passive_pane_cp

0x2271,	// (0x00040f98) volume_small_pane_g1

0x227a,	// (0x00040fa1) volume_small_pane_g2

0x2283,	// (0x00040faa) volume_small_pane_g3

0x228c,	// (0x00040fb3) volume_small_pane_g4

0x2295,	// (0x00040fbc) volume_small_pane_g5

0x229e,	// (0x00040fc5) volume_small_pane_g6

0x22a7,	// (0x00040fce) volume_small_pane_g7

0x22b0,	// (0x00040fd7) volume_small_pane_g8

0x22b9,	// (0x00040fe0) volume_small_pane_g9

0x22c2,	// (0x00040fe9) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0004e5d8) volume_small_pane_g

0x3b00,	// (0x00042827) bg_active_tab_pane_cp2_ParamLimits

0x3b00,	// (0x00042827) bg_active_tab_pane_cp2

0x3893,	// (0x000425ba) tabs_3_active_pane_g1

0xd0c4,	// (0x0004bdeb) tabs_3_active_pane_t1

0x3b00,	// (0x00042827) bg_passive_tab_pane_cp2_ParamLimits

0x3b00,	// (0x00042827) bg_passive_tab_pane_cp2

0x3893,	// (0x000425ba) tabs_3_passive_pane_g1

0xd0c4,	// (0x0004bdeb) tabs_3_passive_pane_t1

0x3b00,	// (0x00042827) bg_active_tab_pane_cp3_ParamLimits

0x3b00,	// (0x00042827) bg_active_tab_pane_cp3

0x38ad,	// (0x000425d4) tabs_4_active_pane_g1

0xd0d6,	// (0x0004bdfd) tabs_4_active_pane_t1

0x3b00,	// (0x00042827) bg_passive_tab_pane_cp3_ParamLimits

0x3b00,	// (0x00042827) bg_passive_tab_pane_cp3

0x38ad,	// (0x000425d4) tabs_4_1_passive_pane_g1

0xd0d6,	// (0x0004bdfd) tabs_4_1_passive_pane_t1

0x508d,	// (0x00043db4) list_highlight_pane_cp2

0xdd96,	// (0x0004cabd) list_set_pane_ParamLimits

0xdd96,	// (0x0004cabd) list_set_pane

0xde30,	// (0x0004cb57) main_pane_set_t1_ParamLimits

0xde30,	// (0x0004cb57) main_pane_set_t1

0xde50,	// (0x0004cb77) main_pane_set_t2_ParamLimits

0xde50,	// (0x0004cb77) main_pane_set_t2

0xde64,	// (0x0004cb8b) main_pane_set_t3_ParamLimits

0xde64,	// (0x0004cb8b) main_pane_set_t3

0xde76,	// (0x0004cb9d) main_pane_set_t4_ParamLimits

0xde76,	// (0x0004cb9d) main_pane_set_t4

0x0003,

0xf981,	// (0x0004e6a8) main_pane_set_t_ParamLimits

0xf981,	// (0x0004e6a8) main_pane_set_t

0xde88,	// (0x0004cbaf) setting_code_pane

0xde90,	// (0x0004cbb7) setting_slider_graphic_pane

0xde90,	// (0x0004cbb7) setting_slider_pane

0xde90,	// (0x0004cbb7) setting_text_pane

0xde90,	// (0x0004cbb7) setting_volume_pane

0x1463,	// (0x0004018a) volume_set_pane

0x3885,	// (0x000425ac) bg_set_opt_pane_cp

0x146b,	// (0x00040192) setting_slider_pane_t1

0x1484,	// (0x000401ab) setting_slider_pane_t2

0x149e,	// (0x000401c5) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004e285) setting_slider_pane_t

0x14b6,	// (0x000401dd) slider_set_pane

0x37a5,	// (0x000424cc) bg_set_opt_pane_cp2

0x38c7,	// (0x000425ee) setting_slider_graphic_pane_g1

0x14cc,	// (0x000401f3) setting_slider_graphic_pane_t1

0x14dc,	// (0x00040203) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004e28c) setting_slider_graphic_pane_t

0x14ec,	// (0x00040213) slider_set_pane_cp

0x37a5,	// (0x000424cc) input_focus_pane_cp1

0x6961,	// (0x00045688) list_set_text_pane

0x379b,	// (0x000424c2) setting_text_pane_g1

0x37a5,	// (0x000424cc) input_focus_pane_cp2

0x379b,	// (0x000424c2) setting_code_pane_g1

0x38d0,	// (0x000425f7) setting_code_pane_t1

0x01e6,	// (0x0003ef0d) set_text_pane_t1_ParamLimits

0x01e6,	// (0x0003ef0d) set_text_pane_t1

0x4152,	// (0x00042e79) set_opt_bg_pane_g1

0x415a,	// (0x00042e81) set_opt_bg_pane_g2

0x6941,	// (0x00045668) set_opt_bg_pane_g3

0x416a,	// (0x00042e91) set_opt_bg_pane_g4

0x4172,	// (0x00042e99) set_opt_bg_pane_g5

0x417a,	// (0x00042ea1) set_opt_bg_pane_g6

0x6949,	// (0x00045670) set_opt_bg_pane_g7

0x6951,	// (0x00045678) set_opt_bg_pane_g8

0x6959,	// (0x00045680) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0004e695) set_opt_bg_pane_g

0x6934,	// (0x0004565b) slider_set_pane_g1

0x2433,	// (0x0004115a) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0004e686) slider_set_pane_g

0x23cf,	// (0x000410f6) volume_set_pane_g1

0x23d7,	// (0x000410fe) volume_set_pane_g2

0x23df,	// (0x00041106) volume_set_pane_g3

0x23e7,	// (0x0004110e) volume_set_pane_g4

0x23ef,	// (0x00041116) volume_set_pane_g5

0x23f7,	// (0x0004111e) volume_set_pane_g6

0x23ff,	// (0x00041126) volume_set_pane_g7

0x2407,	// (0x0004112e) volume_set_pane_g8

0x240f,	// (0x00041136) volume_set_pane_g9

0x2417,	// (0x0004113e) volume_set_pane_g10

0x0009,

0xf937,	// (0x0004e65e) volume_set_pane_g

0xd0e8,	// (0x0004be0f) indicator_pane_ParamLimits

0xd0e8,	// (0x0004be0f) indicator_pane

0xd110,	// (0x0004be37) main_idle_pane_g2_ParamLimits

0xd110,	// (0x0004be37) main_idle_pane_g2

0xd148,	// (0x0004be6f) main_pane_idle_g1_ParamLimits

0xd148,	// (0x0004be6f) main_pane_idle_g1

0x391f,	// (0x00042646) popup_clock_digital_analogue_window_ParamLimits

0x391f,	// (0x00042646) popup_clock_digital_analogue_window

0xd16f,	// (0x0004be96) soft_indicator_pane_ParamLimits

0xd16f,	// (0x0004be96) soft_indicator_pane

0xd189,	// (0x0004beb0) wallpaper_pane_ParamLimits

0xd189,	// (0x0004beb0) wallpaper_pane

0x379b,	// (0x000424c2) wallpaper_pane_g1

0xd19b,	// (0x0004bec2) indicator_pane_g1_ParamLimits

0xd19b,	// (0x0004bec2) indicator_pane_g1

0x6cfd,	// (0x00045a24) navi_navi_icon_text_pane_srt_g1

0x3971,	// (0x00042698) soft_indicator_pane_t1

0x398b,	// (0x000426b2) aid_ps_area_pane

0xd1b1,	// (0x0004bed8) aid_ps_clock_pane

0x39aa,	// (0x000426d1) aid_ps_indicator_pane

0x39b6,	// (0x000426dd) indicator_ps_pane_ParamLimits

0x39b6,	// (0x000426dd) indicator_ps_pane

0x39c5,	// (0x000426ec) power_save_pane_g1_ParamLimits

0x39c5,	// (0x000426ec) power_save_pane_g1

0x39d1,	// (0x000426f8) power_save_pane_g2_ParamLimits

0x39d1,	// (0x000426f8) power_save_pane_g2

0x1082,	// (0x0003fda9) aid_navinavi_width_pane

0x398b,	// (0x000426b2) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004e291) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004e291) power_save_pane_g

0x39df,	// (0x00042706) power_save_pane_t1_ParamLimits

0x39df,	// (0x00042706) power_save_pane_t1

0xd1b1,	// (0x0004bed8) aid_ps_clock_pane_ParamLimits

0x39aa,	// (0x000426d1) aid_ps_indicator_pane_ParamLimits

0x39f1,	// (0x00042718) power_save_pane_t4_ParamLimits

0x39f1,	// (0x00042718) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004e296) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004e296) power_save_pane_t

0x3a1b,	// (0x00042742) power_save_t3_ParamLimits

0x3a1b,	// (0x00042742) power_save_t3

0x3a06,	// (0x0004272d) power_save_t2_ParamLimits

0x3a06,	// (0x0004272d) power_save_t2

0x3a30,	// (0x00042757) indicator_ps_pane_g1

0xd1bf,	// (0x0004bee6) ai_gene_pane_ParamLimits

0xd1bf,	// (0x0004bee6) ai_gene_pane

0xd1d6,	// (0x0004befd) ai_links_pane_ParamLimits

0xd1d6,	// (0x0004befd) ai_links_pane

0xd1ee,	// (0x0004bf15) indicator_pane_cp1_ParamLimits

0xd1ee,	// (0x0004bf15) indicator_pane_cp1

0xd1fd,	// (0x0004bf24) main_pane_idle_g1_cp_ParamLimits

0xd1fd,	// (0x0004bf24) main_pane_idle_g1_cp

0x3a69,	// (0x00042790) popup_ai_links_title_window

0xd215,	// (0x0004bf3c) soft_indicator_pane_cp1_ParamLimits

0xd215,	// (0x0004bf3c) soft_indicator_pane_cp1

0x6720,	// (0x00045447) ai_links_pane_g1

0x6729,	// (0x00045450) grid_ai_links_pane

0xdcd8,	// (0x0004c9ff) ai_gene_pane_1

0x670e,	// (0x00045435) ai_gene_pane_2

0x6717,	// (0x0004543e) list_highlight_pane_cp4

0xdcb4,	// (0x0004c9db) cell_ai_link_pane_ParamLimits

0xdcb4,	// (0x0004c9db) cell_ai_link_pane

0x66df,	// (0x00045406) cell_ai_link_pane_g1

0x3c96,	// (0x000429bd) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0004e639) cell_ai_link_pane_g

0x37a5,	// (0x000424cc) grid_highlight_cp2

0x37a5,	// (0x000424cc) bg_popup_sub_pane_cp1

0x3a8c,	// (0x000427b3) popup_ai_links_title_window_t1

0x662f,	// (0x00045356) ai_gene_pane_1_g1_ParamLimits

0x662f,	// (0x00045356) ai_gene_pane_1_g1

0x663b,	// (0x00045362) ai_gene_pane_1_g2_ParamLimits

0x663b,	// (0x00045362) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0004e62f) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0004e62f) ai_gene_pane_1_g

0x6648,	// (0x0004536f) ai_gene_pane_1_t1_ParamLimits

0x6648,	// (0x0004536f) ai_gene_pane_1_t1

0x667c,	// (0x000453a3) grid_ai_soft_ind_pane

0x661a,	// (0x00045341) ai_gene_pane_2_t1_ParamLimits

0x661a,	// (0x00045341) ai_gene_pane_2_t1

0xd229,	// (0x0004bf50) main_pane_empty_t1_ParamLimits

0xd229,	// (0x0004bf50) main_pane_empty_t1

0xd241,	// (0x0004bf68) main_pane_empty_t2_ParamLimits

0xd241,	// (0x0004bf68) main_pane_empty_t2

0xd256,	// (0x0004bf7d) main_pane_empty_t3_ParamLimits

0xd256,	// (0x0004bf7d) main_pane_empty_t3

0xd268,	// (0x0004bf8f) main_pane_empty_t4_ParamLimits

0xd268,	// (0x0004bf8f) main_pane_empty_t4

0xd27a,	// (0x0004bfa1) main_pane_empty_t5_ParamLimits

0xd27a,	// (0x0004bfa1) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004e29b) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004e29b) main_pane_empty_t

0x41a3,	// (0x00042eca) bg_popup_window_pane_ParamLimits

0x41a3,	// (0x00042eca) bg_popup_window_pane

0x638a,	// (0x000450b1) find_popup_pane_cp2_ParamLimits

0x638a,	// (0x000450b1) find_popup_pane_cp2

0x6396,	// (0x000450bd) heading_pane_ParamLimits

0x6396,	// (0x000450bd) heading_pane

0x37a5,	// (0x000424cc) bg_popup_sub_pane

0xdc35,	// (0x0004c95c) bg_popup_window_pane_g1_ParamLimits

0xdc35,	// (0x0004c95c) bg_popup_window_pane_g1

0xdc44,	// (0x0004c96b) bg_popup_window_pane_g2_ParamLimits

0xdc44,	// (0x0004c96b) bg_popup_window_pane_g2

0xdc50,	// (0x0004c977) bg_popup_window_pane_g3_ParamLimits

0xdc50,	// (0x0004c977) bg_popup_window_pane_g3

0xdc5c,	// (0x0004c983) bg_popup_window_pane_g4_ParamLimits

0xdc5c,	// (0x0004c983) bg_popup_window_pane_g4

0xdc6b,	// (0x0004c992) bg_popup_window_pane_g5_ParamLimits

0xdc6b,	// (0x0004c992) bg_popup_window_pane_g5

0xdc7b,	// (0x0004c9a2) bg_popup_window_pane_g6_ParamLimits

0xdc7b,	// (0x0004c9a2) bg_popup_window_pane_g6

0xdc87,	// (0x0004c9ae) bg_popup_window_pane_g7_ParamLimits

0xdc87,	// (0x0004c9ae) bg_popup_window_pane_g7

0xdc96,	// (0x0004c9bd) bg_popup_window_pane_g8_ParamLimits

0xdc96,	// (0x0004c9bd) bg_popup_window_pane_g8

0xdca5,	// (0x0004c9cc) bg_popup_window_pane_g9_ParamLimits

0xdca5,	// (0x0004c9cc) bg_popup_window_pane_g9

0x6370,	// (0x00045097) bg_popup_window_pane_g10_ParamLimits

0x6370,	// (0x00045097) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0004e5f7) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0004e5f7) bg_popup_window_pane_g

0x6299,	// (0x00044fc0) bg_popup_heading_pane_ParamLimits

0x6299,	// (0x00044fc0) bg_popup_heading_pane

0x25cd,	// (0x000412f4) tabs_4_passive_pane_cp_srt_ParamLimits

0x25cd,	// (0x000412f4) tabs_4_passive_pane_cp_srt

0x25df,	// (0x00041306) tabs_4_passive_pane_srt_ParamLimits

0x62ad,	// (0x00044fd4) heading_pane_g2

0x25df,	// (0x00041306) tabs_4_passive_pane_srt

0x560b,	// (0x00044332) bg_passive_tab_pane_cp3_srt_ParamLimits

0x560b,	// (0x00044332) bg_passive_tab_pane_cp3_srt

0x62b5,	// (0x00044fdc) heading_pane_t1_ParamLimits

0x62b5,	// (0x00044fdc) heading_pane_t1

0x62cc,	// (0x00044ff3) heading_pane_t2_ParamLimits

0x62cc,	// (0x00044ff3) heading_pane_t2

0x0001,

0xf8cb,	// (0x0004e5f2) heading_pane_t_ParamLimits

0xf8cb,	// (0x0004e5f2) heading_pane_t

0x5dc6,	// (0x00044aed) bg_popup_heading_pane_g1

0x5e75,	// (0x00044b9c) bg_popup_heading_pane_g2

0x5e7f,	// (0x00044ba6) bg_popup_heading_pane_g3

0x5e89,	// (0x00044bb0) bg_popup_heading_pane_g4

0x5e93,	// (0x00044bba) bg_popup_heading_pane_g5

0x5e9d,	// (0x00044bc4) bg_popup_heading_pane_g6

0x5ea5,	// (0x00044bcc) bg_popup_heading_pane_g7

0x5ead,	// (0x00044bd4) bg_popup_heading_pane_g8

0x5eb7,	// (0x00044bde) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0004e5ae) bg_popup_heading_pane_g

0x5597,	// (0x000442be) bg_popup_sub_pane_g1

0x559f,	// (0x000442c6) bg_popup_sub_pane_g2

0x55a7,	// (0x000442ce) bg_popup_sub_pane_g3

0x55af,	// (0x000442d6) bg_popup_sub_pane_g4

0x55b7,	// (0x000442de) bg_popup_sub_pane_g5

0x55bf,	// (0x000442e6) bg_popup_sub_pane_g6

0x55c7,	// (0x000442ee) bg_popup_sub_pane_g7

0x55cf,	// (0x000442f6) bg_popup_sub_pane_g8

0x55d7,	// (0x000442fe) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0004e588) bg_popup_sub_pane_g

0x3b00,	// (0x00042827) bg_popup_window_pane_cp5_ParamLimits

0x3b00,	// (0x00042827) bg_popup_window_pane_cp5

0x3b1c,	// (0x00042843) popup_note_window_g1_ParamLimits

0x3b1c,	// (0x00042843) popup_note_window_g1

0x3b28,	// (0x0004284f) popup_note_window_t1_ParamLimits

0x3b28,	// (0x0004284f) popup_note_window_t1

0x3b3a,	// (0x00042861) popup_note_window_t2_ParamLimits

0x3b3a,	// (0x00042861) popup_note_window_t2

0x3b4c,	// (0x00042873) popup_note_window_t3_ParamLimits

0x3b4c,	// (0x00042873) popup_note_window_t3

0x3b5e,	// (0x00042885) popup_note_window_t4_ParamLimits

0x3b5e,	// (0x00042885) popup_note_window_t4

0x3b86,	// (0x000428ad) popup_note_window_t5_ParamLimits

0x3b86,	// (0x000428ad) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004e2a6) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004e2a6) popup_note_window_t

0x3baa,	// (0x000428d1) bg_popup_window_pane_cp6_ParamLimits

0x3baa,	// (0x000428d1) bg_popup_window_pane_cp6

0x5d3a,	// (0x00044a61) popup_note_image_window_g1_ParamLimits

0x5d3a,	// (0x00044a61) popup_note_image_window_g1

0x5d46,	// (0x00044a6d) popup_note_image_window_g2_ParamLimits

0x5d46,	// (0x00044a6d) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0004e57c) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0004e57c) popup_note_image_window_g

0x5d5f,	// (0x00044a86) popup_note_image_window_t1_ParamLimits

0x5d5f,	// (0x00044a86) popup_note_image_window_t1

0x5d78,	// (0x00044a9f) popup_note_image_window_t2_ParamLimits

0x5d78,	// (0x00044a9f) popup_note_image_window_t2

0x5d91,	// (0x00044ab8) popup_note_image_window_t3_ParamLimits

0x5d91,	// (0x00044ab8) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0004e581) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0004e581) popup_note_image_window_t

0x5bfb,	// (0x00044922) bg_popup_window_pane_cp7_ParamLimits

0x5bfb,	// (0x00044922) bg_popup_window_pane_cp7

0x5c2b,	// (0x00044952) popup_note_wait_window_g1_ParamLimits

0x5c2b,	// (0x00044952) popup_note_wait_window_g1

0x5c37,	// (0x0004495e) popup_note_wait_window_g2_ParamLimits

0x5c37,	// (0x0004495e) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0004e56a) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0004e56a) popup_note_wait_window_g

0x5c4f,	// (0x00044976) popup_note_wait_window_t1_ParamLimits

0x5c4f,	// (0x00044976) popup_note_wait_window_t1

0x5c76,	// (0x0004499d) popup_note_wait_window_t2_ParamLimits

0x5c76,	// (0x0004499d) popup_note_wait_window_t2

0x5c93,	// (0x000449ba) popup_note_wait_window_t3_ParamLimits

0x5c93,	// (0x000449ba) popup_note_wait_window_t3

0x5ca6,	// (0x000449cd) popup_note_wait_window_t4_ParamLimits

0x5ca6,	// (0x000449cd) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0004e571) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0004e571) popup_note_wait_window_t

0x5ccb,	// (0x000449f2) wait_bar_pane_ParamLimits

0x5ccb,	// (0x000449f2) wait_bar_pane

0x37a5,	// (0x000424cc) wait_anim_pane

0x37a5,	// (0x000424cc) wait_border_pane

0x379b,	// (0x000424c2) wait_anim_pane_g1

0x379b,	// (0x000424c2) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0004e42a) wait_anim_pane_g

0x5b9f,	// (0x000448c6) wait_border_pane_g1

0x5baa,	// (0x000448d1) wait_border_pane_g2

0x5bb3,	// (0x000448da) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0004e563) wait_border_pane_g

0x5a0f,	// (0x00044736) bg_popup_window_pane_cp16_ParamLimits

0x5a0f,	// (0x00044736) bg_popup_window_pane_cp16

0x5b0f,	// (0x00044836) indicator_popup_pane_cp4_ParamLimits

0x5b0f,	// (0x00044836) indicator_popup_pane_cp4

0x5b23,	// (0x0004484a) popup_query_data_window_t1_ParamLimits

0x5b23,	// (0x0004484a) popup_query_data_window_t1

0x5b35,	// (0x0004485c) popup_query_data_window_t2_ParamLimits

0x5b35,	// (0x0004485c) popup_query_data_window_t2

0x5b4e,	// (0x00044875) popup_query_data_window_t3_ParamLimits

0x5b4e,	// (0x00044875) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0004e55c) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0004e55c) popup_query_data_window_t

0x5b68,	// (0x0004488f) query_popup_data_pane_ParamLimits

0x5b68,	// (0x0004488f) query_popup_data_pane

0x5b7c,	// (0x000448a3) query_popup_data_pane_cp1_ParamLimits

0x5b7c,	// (0x000448a3) query_popup_data_pane_cp1

0x5a0f,	// (0x00044736) bg_popup_window_pane_cp10_ParamLimits

0x5a0f,	// (0x00044736) bg_popup_window_pane_cp10

0x5a41,	// (0x00044768) indicator_popup_pane_ParamLimits

0x5a41,	// (0x00044768) indicator_popup_pane

0x5a63,	// (0x0004478a) popup_query_code_window_t1_ParamLimits

0x5a63,	// (0x0004478a) popup_query_code_window_t1

0x5a7d,	// (0x000447a4) popup_query_code_window_t2_ParamLimits

0x5a7d,	// (0x000447a4) popup_query_code_window_t2

0x5ac6,	// (0x000447ed) popup_query_code_window_t3_ParamLimits

0x5ac6,	// (0x000447ed) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0004e555) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0004e555) popup_query_code_window_t

0x5af5,	// (0x0004481c) query_popup_pane_ParamLimits

0x5af5,	// (0x0004481c) query_popup_pane

0x3baa,	// (0x000428d1) bg_popup_window_pane_cp15_ParamLimits

0x3baa,	// (0x000428d1) bg_popup_window_pane_cp15

0x3bc8,	// (0x000428ef) indicator_popup_pane_cp1_ParamLimits

0x3bc8,	// (0x000428ef) indicator_popup_pane_cp1

0x3bdb,	// (0x00042902) indicator_popup_pane_cp2_ParamLimits

0x3bdb,	// (0x00042902) indicator_popup_pane_cp2

0x3bee,	// (0x00042915) popup_query_data_code_window_g1_ParamLimits

0x3bee,	// (0x00042915) popup_query_data_code_window_g1

0x3c01,	// (0x00042928) popup_query_data_code_window_t1_ParamLimits

0x3c01,	// (0x00042928) popup_query_data_code_window_t1

0x3c13,	// (0x0004293a) popup_query_data_code_window_t2_ParamLimits

0x3c13,	// (0x0004293a) popup_query_data_code_window_t2

0x3c25,	// (0x0004294c) popup_query_data_code_window_t3_ParamLimits

0x3c25,	// (0x0004294c) popup_query_data_code_window_t3

0x3c3b,	// (0x00042962) popup_query_data_code_window_t4_ParamLimits

0x3c3b,	// (0x00042962) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004e2b1) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004e2b1) popup_query_data_code_window_t

0x4b83,	// (0x000438aa) list_single_midp_graphic_pane_g3

0x3c53,	// (0x0004297a) query_popup_data_pane_cp2_ParamLimits

0x3c66,	// (0x0004298d) query_popup_pane_cp2_ParamLimits

0x3c66,	// (0x0004298d) query_popup_pane_cp2

0x37a5,	// (0x000424cc) bg_popup_window_pane_cp11

0x5a07,	// (0x0004472e) heading_pane_cp5

0x3d51,	// (0x00042a78) listscroll_popup_info_pane

0x37a5,	// (0x000424cc) input_focus_pane_cp3

0x3c79,	// (0x000429a0) query_popup_pane_t1

0x3c87,	// (0x000429ae) list_popup_info_pane_ParamLimits

0x3c87,	// (0x000429ae) list_popup_info_pane

0x3c96,	// (0x000429bd) listscroll_popup_info_pane_g1

0x3c9e,	// (0x000429c5) scroll_pane_cp7

0x3ca8,	// (0x000429cf) popup_info_list_pane_t1_ParamLimits

0x3ca8,	// (0x000429cf) popup_info_list_pane_t1

0x3cc2,	// (0x000429e9) popup_info_list_pane_t2_ParamLimits

0x3cc2,	// (0x000429e9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004e2ba) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004e2ba) popup_info_list_pane_t

0x37a5,	// (0x000424cc) bg_popup_window_pane_cp12

0x6d17,	// (0x00045a3e) find_popup_pane

0x3885,	// (0x000425ac) bg_popup_window_pane_cp3

0x3cdc,	// (0x00042a03) heading_pane_cp3

0x3ce8,	// (0x00042a0f) listscroll_popup_graphic_pane

0x37a5,	// (0x000424cc) bg_popup_window_pane_cp4

0xd2dc,	// (0x0004c003) heading_pane_cp4

0x3d51,	// (0x00042a78) listscroll_popup_colour_pane

0x3d59,	// (0x00042a80) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3d59,	// (0x00042a80) cell_large_graphic_colour_none_popup_pane

0xd2e4,	// (0x0004c00b) grid_large_graphic_colour_popup_pane_ParamLimits

0xd2e4,	// (0x0004c00b) grid_large_graphic_colour_popup_pane

0x3d95,	// (0x00042abc) listscroll_popup_colour_pane_g1_ParamLimits

0x3d95,	// (0x00042abc) listscroll_popup_colour_pane_g1

0x3dac,	// (0x00042ad3) listscroll_popup_colour_pane_g2_ParamLimits

0x3dac,	// (0x00042ad3) listscroll_popup_colour_pane_g2

0x3dc3,	// (0x00042aea) listscroll_popup_colour_pane_g3_ParamLimits

0x3dc3,	// (0x00042aea) listscroll_popup_colour_pane_g3

0xd308,	// (0x0004c02f) listscroll_popup_colour_pane_g4_ParamLimits

0xd308,	// (0x0004c02f) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004e2bf) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004e2bf) listscroll_popup_colour_pane_g

0x3de2,	// (0x00042b09) scroll_pane_cp6_ParamLimits

0x3de2,	// (0x00042b09) scroll_pane_cp6

0xd317,	// (0x0004c03e) cell_large_graphic_colour_popup_pane_ParamLimits

0xd317,	// (0x0004c03e) cell_large_graphic_colour_popup_pane

0x3e13,	// (0x00042b3a) cell_large_graphic_colour_none_popup_pane_t1

0x37a5,	// (0x000424cc) grid_highlight_pane_cp5

0x3e22,	// (0x00042b49) cell_large_graphic_colour_popup_pane_g1

0x3e2a,	// (0x00042b51) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004e2c8) cell_large_graphic_colour_popup_pane_g

0x3e32,	// (0x00042b59) cell_large_graphic_colour_popup_pane_g2_copy1

0x3e3b,	// (0x00042b62) grid_highlight_pane_cp4

0x3e43,	// (0x00042b6a) bg_popup_window_pane_cp8_ParamLimits

0x3e43,	// (0x00042b6a) bg_popup_window_pane_cp8

0x3e5e,	// (0x00042b85) popup_snote_single_text_window_g1_ParamLimits

0x3e5e,	// (0x00042b85) popup_snote_single_text_window_g1

0x3e70,	// (0x00042b97) popup_snote_single_text_window_t1_ParamLimits

0x3e70,	// (0x00042b97) popup_snote_single_text_window_t1

0x3e83,	// (0x00042baa) popup_snote_single_text_window_t2_ParamLimits

0x3e83,	// (0x00042baa) popup_snote_single_text_window_t2

0x3e96,	// (0x00042bbd) popup_snote_single_text_window_t3_ParamLimits

0x3e96,	// (0x00042bbd) popup_snote_single_text_window_t3

0x3ecf,	// (0x00042bf6) popup_snote_single_text_window_t4_ParamLimits

0x3ecf,	// (0x00042bf6) popup_snote_single_text_window_t4

0x3f03,	// (0x00042c2a) popup_snote_single_text_window_t5_ParamLimits

0x3f03,	// (0x00042c2a) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004e2cd) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004e2cd) popup_snote_single_text_window_t

0x3f32,	// (0x00042c59) bg_popup_window_pane_cp9_ParamLimits

0x3f32,	// (0x00042c59) bg_popup_window_pane_cp9

0x3e5e,	// (0x00042b85) popup_snote_single_graphic_window_g1_ParamLimits

0x3e5e,	// (0x00042b85) popup_snote_single_graphic_window_g1

0x3f40,	// (0x00042c67) popup_snote_single_graphic_window_g2_ParamLimits

0x3f40,	// (0x00042c67) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004e2d8) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004e2d8) popup_snote_single_graphic_window_g

0x3f4c,	// (0x00042c73) popup_snote_single_graphic_window_t1_ParamLimits

0x3f4c,	// (0x00042c73) popup_snote_single_graphic_window_t1

0x3f5f,	// (0x00042c86) popup_snote_single_graphic_window_t2_ParamLimits

0x3f5f,	// (0x00042c86) popup_snote_single_graphic_window_t2

0x3f72,	// (0x00042c99) popup_snote_single_graphic_window_t3_ParamLimits

0x3f72,	// (0x00042c99) popup_snote_single_graphic_window_t3

0x3fab,	// (0x00042cd2) popup_snote_single_graphic_window_t4_ParamLimits

0x3fab,	// (0x00042cd2) popup_snote_single_graphic_window_t4

0x3fdf,	// (0x00042d06) popup_snote_single_graphic_window_t5_ParamLimits

0x3fdf,	// (0x00042d06) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004e2dd) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004e2dd) popup_snote_single_graphic_window_t

0xdf88,	// (0x0004ccaf) grid_graphic_popup_pane_ParamLimits

0xdf88,	// (0x0004ccaf) grid_graphic_popup_pane

0x6c83,	// (0x000459aa) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c83,	// (0x000459aa) listscroll_popup_graphic_pane_g1

0xdfa7,	// (0x0004ccce) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfa7,	// (0x0004ccce) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0004e6d2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0004e6d2) listscroll_popup_graphic_pane_g

0x6cab,	// (0x000459d2) scroll_pane_cp5

0xdf43,	// (0x0004cc6a) cell_graphic_popup_pane_ParamLimits

0xdf43,	// (0x0004cc6a) cell_graphic_popup_pane

0x6bdb,	// (0x00045902) cell_graphic_popup_pane_g1

0x6be3,	// (0x0004590a) cell_graphic_popup_pane_g2

0x3e32,	// (0x00042b59) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0004e6cb) cell_graphic_popup_pane_g

0x6bec,	// (0x00045913) cell_graphic_popup_pane_t2

0x3e3b,	// (0x00042b62) grid_highlight_pane_cp3

0x4020,	// (0x00042d47) list_gen_pane_ParamLimits

0x4020,	// (0x00042d47) list_gen_pane

0x4052,	// (0x00042d79) scroll_pane

0xdefe,	// (0x0004cc25) bg_list_pane_g1_ParamLimits

0xdefe,	// (0x0004cc25) bg_list_pane_g1

0x6b58,	// (0x0004587f) bg_list_pane_g2_ParamLimits

0x6b58,	// (0x0004587f) bg_list_pane_g2

0x6b6b,	// (0x00045892) bg_list_pane_g3_ParamLimits

0x6b6b,	// (0x00045892) bg_list_pane_g3

0x6b7d,	// (0x000458a4) bg_list_pane_g4_ParamLimits

0x6b7d,	// (0x000458a4) bg_list_pane_g4

0xdf19,	// (0x0004cc40) bg_list_pane_g5_ParamLimits

0xdf19,	// (0x0004cc40) bg_list_pane_g5

0x0004,

0xf999,	// (0x0004e6c0) bg_list_pane_g_ParamLimits

0xf999,	// (0x0004e6c0) bg_list_pane_g

0xc91c,	// (0x0004b643) list_double2_graphic_large_graphic_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double2_graphic_large_graphic_pane

0xc91c,	// (0x0004b643) list_double2_graphic_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double2_graphic_pane

0xc91c,	// (0x0004b643) list_double2_large_graphic_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double2_large_graphic_pane

0xc91c,	// (0x0004b643) list_double2_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double2_pane

0xc91c,	// (0x0004b643) list_double_graphic_heading_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double_graphic_heading_pane

0xc91c,	// (0x0004b643) list_double_graphic_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double_graphic_pane

0xc91c,	// (0x0004b643) list_double_heading_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double_heading_pane

0xc91c,	// (0x0004b643) list_double_large_graphic_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double_large_graphic_pane

0xc91c,	// (0x0004b643) list_double_number_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double_number_pane

0xc91c,	// (0x0004b643) list_double_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double_pane

0xc91c,	// (0x0004b643) list_double_time_pane_ParamLimits

0xc91c,	// (0x0004b643) list_double_time_pane

0xc91c,	// (0x0004b643) list_setting_number_pane_ParamLimits

0xc91c,	// (0x0004b643) list_setting_number_pane

0xc91c,	// (0x0004b643) list_setting_pane_ParamLimits

0xc91c,	// (0x0004b643) list_setting_pane

0xdec3,	// (0x0004cbea) list_single_2graphic_pane_ParamLimits

0xdec3,	// (0x0004cbea) list_single_2graphic_pane

0xdec3,	// (0x0004cbea) list_single_graphic_heading_pane_ParamLimits

0xdec3,	// (0x0004cbea) list_single_graphic_heading_pane

0xdec3,	// (0x0004cbea) list_single_graphic_pane_ParamLimits

0xdec3,	// (0x0004cbea) list_single_graphic_pane

0xdec3,	// (0x0004cbea) list_single_heading_pane_ParamLimits

0xdec3,	// (0x0004cbea) list_single_heading_pane

0xdeeb,	// (0x0004cc12) list_single_large_graphic_pane_ParamLimits

0xdeeb,	// (0x0004cc12) list_single_large_graphic_pane

0xdec3,	// (0x0004cbea) list_single_number_heading_pane_ParamLimits

0xdec3,	// (0x0004cbea) list_single_number_heading_pane

0xdec3,	// (0x0004cbea) list_single_number_pane_ParamLimits

0xdec3,	// (0x0004cbea) list_single_number_pane

0xdec3,	// (0x0004cbea) list_single_pane_ParamLimits

0xdec3,	// (0x0004cbea) list_single_pane

0x37a5,	// (0x000424cc) list_highlight_pane_cp1

0x14f4,	// (0x0004021b) list_single_pane_g1_ParamLimits

0x14f4,	// (0x0004021b) list_single_pane_g1

0x1500,	// (0x00040227) list_single_pane_g2_ParamLimits

0x1500,	// (0x00040227) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004e2f9) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004e2f9) list_single_pane_g

0x0af2,	// (0x0003f819) list_single_pane_t1_ParamLimits

0x0af2,	// (0x0003f819) list_single_pane_t1

0x14f4,	// (0x0004021b) list_single_number_pane_g1_ParamLimits

0x14f4,	// (0x0004021b) list_single_number_pane_g1

0x1500,	// (0x00040227) list_single_number_pane_g2_ParamLimits

0x1500,	// (0x00040227) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004e2f9) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004e2f9) list_single_number_pane_g

0x09c1,	// (0x0003f6e8) list_single_number_pane_t1_ParamLimits

0x09c1,	// (0x0003f6e8) list_single_number_pane_t1

0x0ab0,	// (0x0003f7d7) list_single_number_pane_t2_ParamLimits

0x0ab0,	// (0x0003f7d7) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0004e681) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0004e681) list_single_number_pane_t

0x01ff,	// (0x0003ef26) list_single_graphic_pane_g1_ParamLimits

0x01ff,	// (0x0003ef26) list_single_graphic_pane_g1

0x14f4,	// (0x0004021b) list_single_graphic_pane_g2_ParamLimits

0x14f4,	// (0x0004021b) list_single_graphic_pane_g2

0x1500,	// (0x00040227) list_single_graphic_pane_g3_ParamLimits

0x1500,	// (0x00040227) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004e2e8) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004e2e8) list_single_graphic_pane_g

0x020b,	// (0x0003ef32) list_single_graphic_pane_t1_ParamLimits

0x020b,	// (0x0003ef32) list_single_graphic_pane_t1

0x0221,	// (0x0003ef48) list_single_heading_pane_g1_ParamLimits

0x0221,	// (0x0003ef48) list_single_heading_pane_g1

0x1500,	// (0x00040227) list_single_heading_pane_g2_ParamLimits

0x1500,	// (0x00040227) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004e2ef) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004e2ef) list_single_heading_pane_g

0x0234,	// (0x0003ef5b) list_single_heading_pane_t1_ParamLimits

0x0234,	// (0x0003ef5b) list_single_heading_pane_t1

0x150c,	// (0x00040233) list_single_heading_pane_t2_ParamLimits

0x150c,	// (0x00040233) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004e2f4) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004e2f4) list_single_heading_pane_t

0x14f4,	// (0x0004021b) list_single_number_heading_pane_g1_ParamLimits

0x14f4,	// (0x0004021b) list_single_number_heading_pane_g1

0x1500,	// (0x00040227) list_single_number_heading_pane_g2_ParamLimits

0x1500,	// (0x00040227) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004e2f9) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004e2f9) list_single_number_heading_pane_g

0x024a,	// (0x0003ef71) list_single_number_heading_pane_t1_ParamLimits

0x024a,	// (0x0003ef71) list_single_number_heading_pane_t1

0x0260,	// (0x0003ef87) list_single_number_heading_pane_t2_ParamLimits

0x0260,	// (0x0003ef87) list_single_number_heading_pane_t2

0x0272,	// (0x0003ef99) list_single_number_heading_pane_t3_ParamLimits

0x0272,	// (0x0003ef99) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004e2fe) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004e2fe) list_single_number_heading_pane_t

0x0284,	// (0x0003efab) list_single_graphic_heading_pane_g1_ParamLimits

0x0284,	// (0x0003efab) list_single_graphic_heading_pane_g1

0xb6c0,	// (0x0004a3e7) list_single_graphic_heading_pane_g4_ParamLimits

0xb6c0,	// (0x0004a3e7) list_single_graphic_heading_pane_g4

0x1500,	// (0x00040227) list_single_graphic_heading_pane_g5_ParamLimits

0x1500,	// (0x00040227) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004e305) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004e305) list_single_graphic_heading_pane_g

0x024a,	// (0x0003ef71) list_single_graphic_heading_pane_t1_ParamLimits

0x024a,	// (0x0003ef71) list_single_graphic_heading_pane_t1

0x02ab,	// (0x0003efd2) list_single_graphic_heading_pane_t2_ParamLimits

0x02ab,	// (0x0003efd2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004e30c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004e30c) list_single_graphic_heading_pane_t

0x26ba,	// (0x000413e1) list_single_large_graphic_pane_g1_ParamLimits

0x26ba,	// (0x000413e1) list_single_large_graphic_pane_g1

0x26c6,	// (0x000413ed) list_single_large_graphic_pane_g2_ParamLimits

0x26c6,	// (0x000413ed) list_single_large_graphic_pane_g2

0x26d2,	// (0x000413f9) list_single_large_graphic_pane_g3_ParamLimits

0x26d2,	// (0x000413f9) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004e311) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004e311) list_single_large_graphic_pane_g

0x5baa,	// (0x000448d1) wait_border_pane_g2_copy1

0x1542,	// (0x00040269) list_single_large_graphic_pane_g4_cp2

0x0b96,	// (0x0003f8bd) list_single_large_graphic_pane_t1_ParamLimits

0x0b96,	// (0x0003f8bd) list_single_large_graphic_pane_t1

0xb6d1,	// (0x0004a3f8) list_double_pane_g1_ParamLimits

0xb6d1,	// (0x0004a3f8) list_double_pane_g1

0xb6dd,	// (0x0004a404) list_double_pane_g2_ParamLimits

0xb6dd,	// (0x0004a404) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004e318) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004e318) list_double_pane_g

0xb6e9,	// (0x0004a410) list_double_pane_t1_ParamLimits

0xb6e9,	// (0x0004a410) list_double_pane_t1

0xb6ff,	// (0x0004a426) list_double_pane_t2_ParamLimits

0xb6ff,	// (0x0004a426) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004e31d) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004e31d) list_double_pane_t

0xb711,	// (0x0004a438) list_double2_pane_g1_ParamLimits

0xb711,	// (0x0004a438) list_double2_pane_g1

0xb722,	// (0x0004a449) list_double2_pane_g2_ParamLimits

0xb722,	// (0x0004a449) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004e322) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004e322) list_double2_pane_g

0xb72e,	// (0x0004a455) list_double2_pane_t1_ParamLimits

0xb72e,	// (0x0004a455) list_double2_pane_t1

0xb744,	// (0x0004a46b) list_double2_pane_t2_ParamLimits

0xb744,	// (0x0004a46b) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004e327) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004e327) list_double2_pane_t

0xb6d1,	// (0x0004a3f8) list_double_number_pane_g1_ParamLimits

0xb6d1,	// (0x0004a3f8) list_double_number_pane_g1

0xb6dd,	// (0x0004a404) list_double_number_pane_g2_ParamLimits

0xb6dd,	// (0x0004a404) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004e318) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004e318) list_double_number_pane_g

0xb756,	// (0x0004a47d) list_double_number_pane_t1_ParamLimits

0xb756,	// (0x0004a47d) list_double_number_pane_t1

0xb768,	// (0x0004a48f) list_double_number_pane_t2_ParamLimits

0xb768,	// (0x0004a48f) list_double_number_pane_t2

0xb77e,	// (0x0004a4a5) list_double_number_pane_t3_ParamLimits

0xb77e,	// (0x0004a4a5) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004e32c) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004e32c) list_double_number_pane_t

0xb790,	// (0x0004a4b7) list_double_graphic_pane_g1_ParamLimits

0xb790,	// (0x0004a4b7) list_double_graphic_pane_g1

0xb79c,	// (0x0004a4c3) list_double_graphic_pane_g2_ParamLimits

0xb79c,	// (0x0004a4c3) list_double_graphic_pane_g2

0xb7ab,	// (0x0004a4d2) list_double_graphic_pane_g3_ParamLimits

0xb7ab,	// (0x0004a4d2) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004e333) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004e333) list_double_graphic_pane_g

0xb7c3,	// (0x0004a4ea) list_double_graphic_pane_t1_ParamLimits

0xb7c3,	// (0x0004a4ea) list_double_graphic_pane_t1

0xb7d9,	// (0x0004a500) list_double_graphic_pane_t2_ParamLimits

0xb7d9,	// (0x0004a500) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004e33c) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004e33c) list_double_graphic_pane_t

0xb790,	// (0x0004a4b7) list_double2_graphic_pane_g1_ParamLimits

0xb790,	// (0x0004a4b7) list_double2_graphic_pane_g1

0xb6d1,	// (0x0004a3f8) list_double2_graphic_pane_g2_ParamLimits

0xb6d1,	// (0x0004a3f8) list_double2_graphic_pane_g2

0xb6dd,	// (0x0004a404) list_double2_graphic_pane_g3_ParamLimits

0xb6dd,	// (0x0004a404) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004e341) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004e341) list_double2_graphic_pane_g

0xb768,	// (0x0004a48f) list_double2_graphic_pane_t1_ParamLimits

0xb768,	// (0x0004a48f) list_double2_graphic_pane_t1

0xb7eb,	// (0x0004a512) list_double2_graphic_pane_t2_ParamLimits

0xb7eb,	// (0x0004a512) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004e348) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004e348) list_double2_graphic_pane_t

0xb7fd,	// (0x0004a524) list_double_large_graphic_pane_g1_ParamLimits

0xb7fd,	// (0x0004a524) list_double_large_graphic_pane_g1

0xb81c,	// (0x0004a543) list_double_large_graphic_pane_g2_ParamLimits

0xb81c,	// (0x0004a543) list_double_large_graphic_pane_g2

0xb6dd,	// (0x0004a404) list_double_large_graphic_pane_g3_ParamLimits

0xb6dd,	// (0x0004a404) list_double_large_graphic_pane_g3

0xb832,	// (0x0004a559) list_double_large_graphic_pane_g4_ParamLimits

0xb832,	// (0x0004a559) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004e34d) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004e34d) list_double_large_graphic_pane_g

0xb845,	// (0x0004a56c) list_double_large_graphic_pane_t1_ParamLimits

0xb845,	// (0x0004a56c) list_double_large_graphic_pane_t1

0xb85e,	// (0x0004a585) list_double_large_graphic_pane_t2_ParamLimits

0xb85e,	// (0x0004a585) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004e358) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004e358) list_double_large_graphic_pane_t

0xb870,	// (0x0004a597) list_double2_large_graphic_pane_g1_ParamLimits

0xb870,	// (0x0004a597) list_double2_large_graphic_pane_g1

0xb87c,	// (0x0004a5a3) list_double2_large_graphic_pane_g2_ParamLimits

0xb87c,	// (0x0004a5a3) list_double2_large_graphic_pane_g2

0xb6dd,	// (0x0004a404) list_double2_large_graphic_pane_g3_ParamLimits

0xb6dd,	// (0x0004a404) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004e35d) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004e35d) list_double2_large_graphic_pane_g

0xb88d,	// (0x0004a5b4) list_double2_large_graphic_pane_t1_ParamLimits

0xb88d,	// (0x0004a5b4) list_double2_large_graphic_pane_t1

0xb8a3,	// (0x0004a5ca) list_double2_large_graphic_pane_t2_ParamLimits

0xb8a3,	// (0x0004a5ca) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004e364) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004e364) list_double2_large_graphic_pane_t

0xb8b5,	// (0x0004a5dc) list_double_heading_pane_g1_ParamLimits

0xb8b5,	// (0x0004a5dc) list_double_heading_pane_g1

0xbf98,	// (0x0004acbf) list_double_heading_pane_g2_ParamLimits

0xbf98,	// (0x0004acbf) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004e369) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004e369) list_double_heading_pane_g

0xb8c6,	// (0x0004a5ed) list_double_heading_pane_t1_ParamLimits

0xb8c6,	// (0x0004a5ed) list_double_heading_pane_t1

0xb8dc,	// (0x0004a603) list_double_heading_pane_t2_ParamLimits

0xb8dc,	// (0x0004a603) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004e36e) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004e36e) list_double_heading_pane_t

0xb790,	// (0x0004a4b7) list_double_graphic_heading_pane_g1_ParamLimits

0xb790,	// (0x0004a4b7) list_double_graphic_heading_pane_g1

0xb8b5,	// (0x0004a5dc) list_double_graphic_heading_pane_g2_ParamLimits

0xb8b5,	// (0x0004a5dc) list_double_graphic_heading_pane_g2

0xbf98,	// (0x0004acbf) list_double_graphic_heading_pane_g3_ParamLimits

0xbf98,	// (0x0004acbf) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004e373) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004e373) list_double_graphic_heading_pane_g

0xb8ee,	// (0x0004a615) list_double_graphic_heading_pane_t1_ParamLimits

0xb8ee,	// (0x0004a615) list_double_graphic_heading_pane_t1

0xb904,	// (0x0004a62b) list_double_graphic_heading_pane_t2_ParamLimits

0xb904,	// (0x0004a62b) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004e37a) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004e37a) list_double_graphic_heading_pane_t

0xb711,	// (0x0004a438) list_double_time_pane_g1_ParamLimits

0xb711,	// (0x0004a438) list_double_time_pane_g1

0xb722,	// (0x0004a449) list_double_time_pane_g2_ParamLimits

0xb722,	// (0x0004a449) list_double_time_pane_g2

0x0001,

0xf5fb,	// (0x0004e322) list_double_time_pane_g_ParamLimits

0xf5fb,	// (0x0004e322) list_double_time_pane_g

0xb916,	// (0x0004a63d) list_double_time_pane_t1_ParamLimits

0xb916,	// (0x0004a63d) list_double_time_pane_t1

0xb92c,	// (0x0004a653) list_double_time_pane_t2_ParamLimits

0xb92c,	// (0x0004a653) list_double_time_pane_t2

0xb93e,	// (0x0004a665) list_double_time_pane_t3_ParamLimits

0xb93e,	// (0x0004a665) list_double_time_pane_t3

0xb950,	// (0x0004a677) list_double_time_pane_t4_ParamLimits

0xb950,	// (0x0004a677) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0004e37f) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0004e37f) list_double_time_pane_t

0xb962,	// (0x0004a689) list_setting_pane_g1_ParamLimits

0xb962,	// (0x0004a689) list_setting_pane_g1

0xb96e,	// (0x0004a695) list_setting_pane_g2_ParamLimits

0xb96e,	// (0x0004a695) list_setting_pane_g2

0x0001,

0xf661,	// (0x0004e388) list_setting_pane_g_ParamLimits

0xf661,	// (0x0004e388) list_setting_pane_g

0xb97a,	// (0x0004a6a1) list_setting_pane_t1_ParamLimits

0xb97a,	// (0x0004a6a1) list_setting_pane_t1

0xb994,	// (0x0004a6bb) list_setting_pane_t2_ParamLimits

0xb994,	// (0x0004a6bb) list_setting_pane_t2

0x0002,

0xf666,	// (0x0004e38d) list_setting_pane_t_ParamLimits

0xf666,	// (0x0004e38d) list_setting_pane_t

0xb9d1,	// (0x0004a6f8) set_value_pane_cp_ParamLimits

0xb9d1,	// (0x0004a6f8) set_value_pane_cp

0xb9dd,	// (0x0004a704) list_setting_number_pane_g1_ParamLimits

0xb9dd,	// (0x0004a704) list_setting_number_pane_g1

0xb9e9,	// (0x0004a710) list_setting_number_pane_g2_ParamLimits

0xb9e9,	// (0x0004a710) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0004e394) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0004e394) list_setting_number_pane_g

0xb9f5,	// (0x0004a71c) list_setting_number_pane_t1_ParamLimits

0xb9f5,	// (0x0004a71c) list_setting_number_pane_t1

0xba0e,	// (0x0004a735) list_setting_number_pane_t2_ParamLimits

0xba0e,	// (0x0004a735) list_setting_number_pane_t2

0xba28,	// (0x0004a74f) list_setting_number_pane_t3_ParamLimits

0xba28,	// (0x0004a74f) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0004e399) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0004e399) list_setting_number_pane_t

0xb9d1,	// (0x0004a6f8) set_value_pane_ParamLimits

0xb9d1,	// (0x0004a6f8) set_value_pane

0x40aa,	// (0x00042dd1) bg_set_opt_pane_ParamLimits

0x40aa,	// (0x00042dd1) bg_set_opt_pane

0x0665,	// (0x0003f38c) set_value_pane_t1

0x40cb,	// (0x00042df2) slider_set_pane_cp3

0x40d4,	// (0x00042dfb) volume_small_pane_cp

0x40dd,	// (0x00042e04) list_form_gen_pane

0x40e6,	// (0x00042e0d) scroll_pane_cp8

0xba6b,	// (0x0004a792) form_field_data_pane_ParamLimits

0xba6b,	// (0x0004a792) form_field_data_pane

0xba82,	// (0x0004a7a9) form_field_data_wide_pane_ParamLimits

0xba82,	// (0x0004a7a9) form_field_data_wide_pane

0xbaa2,	// (0x0004a7c9) form_field_popup_pane_ParamLimits

0xbaa2,	// (0x0004a7c9) form_field_popup_pane

0xbac2,	// (0x0004a7e9) form_field_popup_wide_pane_ParamLimits

0xbac2,	// (0x0004a7e9) form_field_popup_wide_pane

0x06fb,	// (0x0003f422) form_field_slider_pane_ParamLimits

0x06fb,	// (0x0003f422) form_field_slider_pane

0x070e,	// (0x0003f435) form_field_slider_wide_pane_ParamLimits

0x070e,	// (0x0003f435) form_field_slider_wide_pane

0x40f7,	// (0x00042e1e) data_form_pane

0xbae3,	// (0x0004a80a) form_field_data_pane_t1

0x4103,	// (0x00042e2a) input_focus_pane

0x0745,	// (0x0003f46c) data_form_wide_pane

0x0762,	// (0x0003f489) form_field_data_wide_pane_t1

0x3e50,	// (0x00042b77) input_focus_pane_cp6

0xbafd,	// (0x0004a824) form_field_popup_pane_t1

0x4103,	// (0x00042e2a) input_focus_pane_cp7

0x4125,	// (0x00042e4c) list_form_pane

0x07a6,	// (0x0003f4cd) form_field_popup_wide_pane_t1

0x4103,	// (0x00042e2a) input_focus_pane_cp8

0x4131,	// (0x00042e58) list_form_wide_pane

0xbb1f,	// (0x0004a846) form_field_slider_pane_t1_ParamLimits

0xbb1f,	// (0x0004a846) form_field_slider_pane_t1

0xbb37,	// (0x0004a85e) form_field_slider_pane_t2_ParamLimits

0xbb37,	// (0x0004a85e) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0004e3a9) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0004e3a9) form_field_slider_pane_t

0x3b00,	// (0x00042827) input_focus_pane_cp9_ParamLimits

0x3b00,	// (0x00042827) input_focus_pane_cp9

0xbb4c,	// (0x0004a873) slider_cont_pane_ParamLimits

0xbb4c,	// (0x0004a873) slider_cont_pane

0x4140,	// (0x00042e67) form_field_slider_wide_pane_t1_ParamLimits

0x4140,	// (0x00042e67) form_field_slider_wide_pane_t1

0x0804,	// (0x0003f52b) form_field_slider_wide_pane_t2_ParamLimits

0x0804,	// (0x0003f52b) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0004e3ae) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0004e3ae) form_field_slider_wide_pane_t

0x3b00,	// (0x00042827) input_focus_pane_cp10_ParamLimits

0x3b00,	// (0x00042827) input_focus_pane_cp10

0xbb60,	// (0x0004a887) slider_cont_pane_cp1_ParamLimits

0xbb60,	// (0x0004a887) slider_cont_pane_cp1

0xbb74,	// (0x0004a89b) slider_form_pane_cp

0x4152,	// (0x00042e79) input_focus_pane_g1

0x415a,	// (0x00042e81) input_focus_pane_g2

0x4162,	// (0x00042e89) input_focus_pane_g3

0x416a,	// (0x00042e91) input_focus_pane_g4

0x4172,	// (0x00042e99) input_focus_pane_g5

0x417a,	// (0x00042ea1) input_focus_pane_g6

0x4182,	// (0x00042ea9) input_focus_pane_g7

0x418a,	// (0x00042eb1) input_focus_pane_g8

0x4192,	// (0x00042eb9) input_focus_pane_g9

0x379b,	// (0x000424c2) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0004e3b3) input_focus_pane_g

0x5bb3,	// (0x000448da) wait_border_pane_g3_copy1

0xbb7c,	// (0x0004a8a3) data_form_pane_t1

0x379b,	// (0x000424c2) wait_anim_pane_g1_copy1

0xbc07,	// (0x0004a92e) data_form_wide_pane_t1

0xbb96,	// (0x0004a8bd) list_form_graphic_pane_cp_ParamLimits

0xbb96,	// (0x0004a8bd) list_form_graphic_pane_cp

0x6ace,	// (0x000457f5) slider_form_pane_g1

0x6ad7,	// (0x000457fe) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0004e6b1) slider_form_pane_g

0xbb96,	// (0x0004a8bd) list_form_graphic_pane_ParamLimits

0xbb96,	// (0x0004a8bd) list_form_graphic_pane

0x0864,	// (0x0003f58b) list_form_graphic_pane_g1

0x086c,	// (0x0003f593) list_form_graphic_pane_t1_ParamLimits

0x086c,	// (0x0003f593) list_form_graphic_pane_t1

0x3885,	// (0x000425ac) list_highlight_pane_cp5_ParamLimits

0x3885,	// (0x000425ac) list_highlight_pane_cp5

0x0881,	// (0x0003f5a8) find_pane_g1

0x419a,	// (0x00042ec1) input_find_pane

0x088a,	// (0x0003f5b1) input_find_pane_g1_ParamLimits

0x088a,	// (0x0003f5b1) input_find_pane_g1

0x0896,	// (0x0003f5bd) input_find_pane_t1_ParamLimits

0x0896,	// (0x0003f5bd) input_find_pane_t1

0x08ab,	// (0x0003f5d2) input_find_pane_t2_ParamLimits

0x08ab,	// (0x0003f5d2) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0004e3c8) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0004e3c8) input_find_pane_t

0x41a3,	// (0x00042eca) input_focus_pane_cp5_ParamLimits

0x41a3,	// (0x00042eca) input_focus_pane_cp5

0x41bd,	// (0x00042ee4) bg_popup_window_pane_cp2_ParamLimits

0x41bd,	// (0x00042ee4) bg_popup_window_pane_cp2

0x41ca,	// (0x00042ef1) listscroll_menu_pane_ParamLimits

0x41ca,	// (0x00042ef1) listscroll_menu_pane

0xd34c,	// (0x0004c073) popup_submenu_window_ParamLimits

0xd34c,	// (0x0004c073) popup_submenu_window

0x41fe,	// (0x00042f25) find_popup_pane_g1

0x4206,	// (0x00042f2d) input_popup_find_pane_cp

0x41a3,	// (0x00042eca) input_focus_pane_cp4_ParamLimits

0x41a3,	// (0x00042eca) input_focus_pane_cp4

0x421e,	// (0x00042f45) input_popup_find_pane_t1_ParamLimits

0x421e,	// (0x00042f45) input_popup_find_pane_t1

0x37a5,	// (0x000424cc) bg_popup_sub_pane_cp

0x424c,	// (0x00042f73) listscroll_popup_sub_pane

0x4254,	// (0x00042f7b) list_submenu_pane_ParamLimits

0x4254,	// (0x00042f7b) list_submenu_pane

0x4265,	// (0x00042f8c) scroll_pane_cp4

0x426d,	// (0x00042f94) list_single_popup_submenu_pane_ParamLimits

0x426d,	// (0x00042f94) list_single_popup_submenu_pane

0x4281,	// (0x00042fa8) list_single_popup_submenu_pane_g1

0x4289,	// (0x00042fb0) list_single_popup_submenu_pane_t1_ParamLimits

0x4289,	// (0x00042fb0) list_single_popup_submenu_pane_t1

0x3b00,	// (0x00042827) bg_active_tab_pane_cp1_ParamLimits

0x3b00,	// (0x00042827) bg_active_tab_pane_cp1

0xd382,	// (0x0004c0a9) tabs_2_active_pane_g1

0xd38a,	// (0x0004c0b1) tabs_2_active_pane_t1

0x3b00,	// (0x00042827) bg_passive_tab_pane_cp1_ParamLimits

0x3b00,	// (0x00042827) bg_passive_tab_pane_cp1

0xd382,	// (0x0004c0a9) tabs_2_passive_pane_g1

0xd38a,	// (0x0004c0b1) tabs_2_passive_pane_t1

0x3885,	// (0x000425ac) bg_active_tab_pane_cp4

0xd39c,	// (0x0004c0c3) tabs_2_long_active_pane_t1

0x508d,	// (0x00043db4) bg_passive_tab_pane_cp4

0x2198,	// (0x00040ebf) list_single_midp_graphic_pane_g4_ParamLimits

0x3885,	// (0x000425ac) bg_active_tab_pane_cp5

0xd3af,	// (0x0004c0d6) tabs_3_long_active_pane_t1

0x508d,	// (0x00043db4) bg_passive_tab_pane_cp5

0x2198,	// (0x00040ebf) list_single_midp_graphic_pane_g4

0x3885,	// (0x000425ac) bg_popup_window_pane_cp13_ParamLimits

0x3885,	// (0x000425ac) bg_popup_window_pane_cp13

0x4300,	// (0x00043027) listscroll_popup_fast_pane_ParamLimits

0x4300,	// (0x00043027) listscroll_popup_fast_pane

0x430c,	// (0x00043033) grid_popup_fast_pane_ParamLimits

0x430c,	// (0x00043033) grid_popup_fast_pane

0x431e,	// (0x00043045) scroll_pane_cp9_ParamLimits

0x431e,	// (0x00043045) scroll_pane_cp9

0x8375,	// (0x0004709c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8375,	// (0x0004709c) list_single_graphic_hl_pane_t1_cp2

0x4342,	// (0x00043069) input_focus_pane_cp20_ParamLimits

0x4342,	// (0x00043069) input_focus_pane_cp20

0x4350,	// (0x00043077) query_popup_data_pane_t1_ParamLimits

0x4350,	// (0x00043077) query_popup_data_pane_t1

0x4363,	// (0x0004308a) query_popup_data_pane_t2_ParamLimits

0x4363,	// (0x0004308a) query_popup_data_pane_t2

0x43a9,	// (0x000430d0) query_popup_data_pane_t3_ParamLimits

0x43a9,	// (0x000430d0) query_popup_data_pane_t3

0x43ea,	// (0x00043111) query_popup_data_pane_t4_ParamLimits

0x43ea,	// (0x00043111) query_popup_data_pane_t4

0x4426,	// (0x0004314d) query_popup_data_pane_t5_ParamLimits

0x4426,	// (0x0004314d) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0004e3cd) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0004e3cd) query_popup_data_pane_t

0x4152,	// (0x00042e79) bg_set_opt_pane_g1

0x415a,	// (0x00042e81) bg_set_opt_pane_g2

0x4162,	// (0x00042e89) bg_set_opt_pane_g3

0x416a,	// (0x00042e91) bg_set_opt_pane_g4

0x4172,	// (0x00042e99) bg_set_opt_pane_g5

0x417a,	// (0x00042ea1) bg_set_opt_pane_g6

0x4182,	// (0x00042ea9) bg_set_opt_pane_g7

0x418a,	// (0x00042eb1) bg_set_opt_pane_g8

0x4192,	// (0x00042eb9) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0004e3d8) bg_set_opt_pane_g

0x1852,	// (0x00040579) control_top_pane_stacon_ParamLimits

0x1852,	// (0x00040579) control_top_pane_stacon

0x18a5,	// (0x000405cc) signal_pane_stacon_ParamLimits

0x18a5,	// (0x000405cc) signal_pane_stacon

0x49e4,	// (0x0004370b) stacon_top_pane_g1_ParamLimits

0x49e4,	// (0x0004370b) stacon_top_pane_g1

0x18ca,	// (0x000405f1) title_pane_stacon_ParamLimits

0x18ca,	// (0x000405f1) title_pane_stacon

0x18f4,	// (0x0004061b) uni_indicator_pane_stacon_ParamLimits

0x18f4,	// (0x0004061b) uni_indicator_pane_stacon

0x1909,	// (0x00040630) battery_pane_stacon_ParamLimits

0x1909,	// (0x00040630) battery_pane_stacon

0x194d,	// (0x00040674) control_bottom_pane_stacon_ParamLimits

0x194d,	// (0x00040674) control_bottom_pane_stacon

0x1970,	// (0x00040697) navi_pane_stacon_ParamLimits

0x1970,	// (0x00040697) navi_pane_stacon

0x4a06,	// (0x0004372d) stacon_bottom_pane_g1_ParamLimits

0x4a06,	// (0x0004372d) stacon_bottom_pane_g1

0x15a0,	// (0x000402c7) aid_levels_signal_lsc_ParamLimits

0x15a0,	// (0x000402c7) aid_levels_signal_lsc

0x15b7,	// (0x000402de) signal_pane_stacon_g1_ParamLimits

0x15b7,	// (0x000402de) signal_pane_stacon_g1

0x15cb,	// (0x000402f2) signal_pane_stacon_g2_ParamLimits

0x15cb,	// (0x000402f2) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0004e3eb) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0004e3eb) signal_pane_stacon_g

0x1600,	// (0x00040327) title_pane_stacon_t1_ParamLimits

0x1600,	// (0x00040327) title_pane_stacon_t1

0x446a,	// (0x00043191) uni_indicator_pane_stacon_g1

0x4474,	// (0x0004319b) uni_indicator_pane_stacon_g2

0x447e,	// (0x000431a5) uni_indicator_pane_stacon_g3

0x4488,	// (0x000431af) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0004e3f7) uni_indicator_pane_stacon_g

0x1625,	// (0x0004034c) control_top_pane_stacon_g1

0x162d,	// (0x00040354) control_top_pane_stacon_t1_ParamLimits

0x162d,	// (0x00040354) control_top_pane_stacon_t1

0x1664,	// (0x0004038b) aid_levels_battery_lsc_ParamLimits

0x1664,	// (0x0004038b) aid_levels_battery_lsc

0x167c,	// (0x000403a3) battery_pane_stacon_g1_ParamLimits

0x167c,	// (0x000403a3) battery_pane_stacon_g1

0x168f,	// (0x000403b6) battery_pane_stacon_g2_ParamLimits

0x168f,	// (0x000403b6) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0004e400) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0004e400) battery_pane_stacon_g

0x16cd,	// (0x000403f4) navi_icon_pane_stacon

0x16e1,	// (0x00040408) navi_navi_pane_stacon

0x16cd,	// (0x000403f4) navi_text_pane_stacon

0x1625,	// (0x0004034c) control_bottom_pane_stacon_g1

0x16f5,	// (0x0004041c) control_bottom_pane_stacon_t1_ParamLimits

0x16f5,	// (0x0004041c) control_bottom_pane_stacon_t1

0xd3c1,	// (0x0004c0e8) grid_app_pane_ParamLimits

0xd3c1,	// (0x0004c0e8) grid_app_pane

0xd3f7,	// (0x0004c11e) scroll_pane_cp15_ParamLimits

0xd3f7,	// (0x0004c11e) scroll_pane_cp15

0xd40c,	// (0x0004c133) cell_app_pane_ParamLimits

0xd40c,	// (0x0004c133) cell_app_pane

0xd453,	// (0x0004c17a) cell_app_pane_g1_ParamLimits

0xd453,	// (0x0004c17a) cell_app_pane_g1

0x4527,	// (0x0004324e) cell_app_pane_g2_ParamLimits

0x4527,	// (0x0004324e) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0004e405) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0004e405) cell_app_pane_g

0xd473,	// (0x0004c19a) cell_app_pane_t1_ParamLimits

0xd473,	// (0x0004c19a) cell_app_pane_t1

0x454a,	// (0x00043271) grid_highlight_pane_ParamLimits

0x454a,	// (0x00043271) grid_highlight_pane

0x4152,	// (0x00042e79) cell_highlight_pane_g1

0x415a,	// (0x00042e81) cell_highlight_pane_g2

0x4162,	// (0x00042e89) cell_highlight_pane_g3

0x416a,	// (0x00042e91) cell_highlight_pane_g4

0x4172,	// (0x00042e99) cell_highlight_pane_g5

0x417a,	// (0x00042ea1) cell_highlight_pane_g6

0x4182,	// (0x00042ea9) cell_highlight_pane_g7

0x418a,	// (0x00042eb1) cell_highlight_pane_g8

0x4192,	// (0x00042eb9) cell_highlight_pane_g9

0x379b,	// (0x000424c2) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0004e3b3) cell_highlight_pane_g

0x455b,	// (0x00043282) bg_scroll_pane

0x173f,	// (0x00040466) scroll_handle_pane

0x45a2,	// (0x000432c9) scroll_bg_pane_g1

0x45b7,	// (0x000432de) scroll_bg_pane_g2

0x45cf,	// (0x000432f6) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0004e40a) scroll_bg_pane_g

0x45e4,	// (0x0004330b) scroll_handle_focus_pane_ParamLimits

0x45e4,	// (0x0004330b) scroll_handle_focus_pane

0x45a2,	// (0x000432c9) scroll_handle_pane_g1

0x45f1,	// (0x00043318) scroll_handle_pane_g2

0x45cf,	// (0x000432f6) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0004e411) scroll_handle_pane_g

0x41a3,	// (0x00042eca) bg_popup_sub_pane_cp21_ParamLimits

0x41a3,	// (0x00042eca) bg_popup_sub_pane_cp21

0x4605,	// (0x0004332c) popup_fep_japan_predictive_window_t1_ParamLimits

0x4605,	// (0x0004332c) popup_fep_japan_predictive_window_t1

0x461f,	// (0x00043346) popup_fep_japan_predictive_window_t2_ParamLimits

0x461f,	// (0x00043346) popup_fep_japan_predictive_window_t2

0x4652,	// (0x00043379) popup_fep_japan_predictive_window_t3_ParamLimits

0x4652,	// (0x00043379) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0004e418) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0004e418) popup_fep_japan_predictive_window_t

0x37a5,	// (0x000424cc) bg_popup_sub_pane_cp23

0x4689,	// (0x000433b0) listscroll_japin_cand_pane

0x4691,	// (0x000433b8) popup_fep_japan_candidate_window_t1

0x469f,	// (0x000433c6) candidate_pane_ParamLimits

0x469f,	// (0x000433c6) candidate_pane

0x46b1,	// (0x000433d8) scroll_pane_cp30

0x46b9,	// (0x000433e0) list_single_popup_jap_candidate_pane_ParamLimits

0x46b9,	// (0x000433e0) list_single_popup_jap_candidate_pane

0x37a5,	// (0x000424cc) list_highlight_pane_cp30

0x46cd,	// (0x000433f4) list_single_popup_jap_candidate_pane_t1

0x46dc,	// (0x00043403) level_1_signal

0x46e9,	// (0x00043410) level_2_signal

0x46f6,	// (0x0004341d) level_3_signal

0x4703,	// (0x0004342a) level_4_signal

0x4710,	// (0x00043437) level_5_signal

0x471d,	// (0x00043444) level_6_signal

0x472a,	// (0x00043451) level_7_signal

0x46dc,	// (0x00043403) level_1_battery

0x46e9,	// (0x00043410) level_2_battery

0x46f6,	// (0x0004341d) level_3_battery

0x4703,	// (0x0004342a) level_4_battery

0x4710,	// (0x00043437) level_5_battery

0x471d,	// (0x00043444) level_6_battery

0x472a,	// (0x00043451) level_7_battery

0x474f,	// (0x00043476) list_menu_pane_ParamLimits

0x474f,	// (0x00043476) list_menu_pane

0x4765,	// (0x0004348c) scroll_pane_cp25_ParamLimits

0x4765,	// (0x0004348c) scroll_pane_cp25

0x477e,	// (0x000434a5) list_double2_graphic_pane_cp2_ParamLimits

0x477e,	// (0x000434a5) list_double2_graphic_pane_cp2

0x477e,	// (0x000434a5) list_double2_large_graphic_pane_cp2_ParamLimits

0x477e,	// (0x000434a5) list_double2_large_graphic_pane_cp2

0x477e,	// (0x000434a5) list_double2_pane_cp2_ParamLimits

0x477e,	// (0x000434a5) list_double2_pane_cp2

0x477e,	// (0x000434a5) list_double_graphic_pane_cp2_ParamLimits

0x477e,	// (0x000434a5) list_double_graphic_pane_cp2

0x477e,	// (0x000434a5) list_double_large_graphic_pane_cp2_ParamLimits

0x477e,	// (0x000434a5) list_double_large_graphic_pane_cp2

0x477e,	// (0x000434a5) list_double_number_pane_cp2_ParamLimits

0x477e,	// (0x000434a5) list_double_number_pane_cp2

0x477e,	// (0x000434a5) list_double_pane_cp2_ParamLimits

0x477e,	// (0x000434a5) list_double_pane_cp2

0xd49b,	// (0x0004c1c2) list_single_2graphic_pane_cp2_ParamLimits

0xd49b,	// (0x0004c1c2) list_single_2graphic_pane_cp2

0xd49b,	// (0x0004c1c2) list_single_graphic_heading_pane_cp2_ParamLimits

0xd49b,	// (0x0004c1c2) list_single_graphic_heading_pane_cp2

0xd49b,	// (0x0004c1c2) list_single_graphic_pane_cp2_ParamLimits

0xd49b,	// (0x0004c1c2) list_single_graphic_pane_cp2

0xd49b,	// (0x0004c1c2) list_single_heading_pane_cp2_ParamLimits

0xd49b,	// (0x0004c1c2) list_single_heading_pane_cp2

0x47b8,	// (0x000434df) list_single_large_graphic_pane_cp2_ParamLimits

0x47b8,	// (0x000434df) list_single_large_graphic_pane_cp2

0xd49b,	// (0x0004c1c2) list_single_number_heading_pane_cp2_ParamLimits

0xd49b,	// (0x0004c1c2) list_single_number_heading_pane_cp2

0xd49b,	// (0x0004c1c2) list_single_number_pane_cp2_ParamLimits

0xd49b,	// (0x0004c1c2) list_single_number_pane_cp2

0xd49b,	// (0x0004c1c2) list_single_pane_cp2_ParamLimits

0xd49b,	// (0x0004c1c2) list_single_pane_cp2

0x4833,	// (0x0004355a) bg_popup_sub_pane_cp22

0x17ee,	// (0x00040515) popup_side_volume_key_window_g1

0x1812,	// (0x00040539) popup_side_volume_key_window_t1

0x182e,	// (0x00040555) volume_small_pane_cp1

0x3b00,	// (0x00042827) bg_popup_sub_pane_cp24_ParamLimits

0x3b00,	// (0x00042827) bg_popup_sub_pane_cp24

0x4849,	// (0x00043570) fep_china_uni_candidate_pane_ParamLimits

0x4849,	// (0x00043570) fep_china_uni_candidate_pane

0x485d,	// (0x00043584) fep_china_uni_entry_pane

0x486d,	// (0x00043594) popup_fep_china_uni_window_g1

0x4889,	// (0x000435b0) fep_china_uni_entry_pane_g1

0x4891,	// (0x000435b8) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0004e449) fep_china_uni_entry_pane_g

0x4899,	// (0x000435c0) fep_entry_item_pane

0x48a3,	// (0x000435ca) fep_candidate_item_pane

0x48ab,	// (0x000435d2) fep_china_uni_candidate_pane_g1

0x48b3,	// (0x000435da) fep_china_uni_candidate_pane_g2

0x48bb,	// (0x000435e2) fep_china_uni_candidate_pane_g3

0x48c3,	// (0x000435ea) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0004e44e) fep_china_uni_candidate_pane_g

0x379b,	// (0x000424c2) fep_entry_item_pane_g1

0x48cb,	// (0x000435f2) fep_entry_item_pane_t1_ParamLimits

0x48cb,	// (0x000435f2) fep_entry_item_pane_t1

0x48e1,	// (0x00043608) fep_candidate_item_pane_t1_ParamLimits

0x48e1,	// (0x00043608) fep_candidate_item_pane_t1

0x48f6,	// (0x0004361d) fep_candidate_item_pane_t2_ParamLimits

0x48f6,	// (0x0004361d) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0004e457) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0004e457) fep_candidate_item_pane_t

0x3885,	// (0x000425ac) list_highlight_pane_cp31_ParamLimits

0x3885,	// (0x000425ac) list_highlight_pane_cp31

0x4908,	// (0x0004362f) level_1_signal_lsc

0x4911,	// (0x00043638) level_2_signal_lsc

0x491a,	// (0x00043641) level_3_signal_lsc

0x4923,	// (0x0004364a) level_4_signal_lsc

0x492c,	// (0x00043653) level_5_signal_lsc

0x4935,	// (0x0004365c) level_6_signal_lsc

0x493e,	// (0x00043665) level_7_signal_lsc

0x493e,	// (0x00043665) level_1_battery_lsc

0x4947,	// (0x0004366e) level_2_battery_lsc

0x4950,	// (0x00043677) level_3_battery_lsc

0x4959,	// (0x00043680) level_4_battery_lsc

0x4962,	// (0x00043689) level_5_battery_lsc

0x496b,	// (0x00043692) level_6_battery_lsc

0x4908,	// (0x0004362f) level_7_battery_lsc

0x4974,	// (0x0004369b) scroll_handle_focus_pane_g1

0x497d,	// (0x000436a4) scroll_handle_focus_pane_g2

0x4986,	// (0x000436ad) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0004e45c) scroll_handle_focus_pane_g

0x08c0,	// (0x0003f5e7) list_single_2graphic_pane_g1_ParamLimits

0x08c0,	// (0x0003f5e7) list_single_2graphic_pane_g1

0xb6c0,	// (0x0004a3e7) list_single_2graphic_pane_g2_ParamLimits

0xb6c0,	// (0x0004a3e7) list_single_2graphic_pane_g2

0x1500,	// (0x00040227) list_single_2graphic_pane_g3_ParamLimits

0x1500,	// (0x00040227) list_single_2graphic_pane_g3

0x08cc,	// (0x0003f5f3) list_single_2graphic_pane_g4_ParamLimits

0x08cc,	// (0x0003f5f3) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0004e463) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0004e463) list_single_2graphic_pane_g

0x08dd,	// (0x0003f604) list_single_2graphic_pane_t1_ParamLimits

0x08dd,	// (0x0003f604) list_single_2graphic_pane_t1

0xbba8,	// (0x0004a8cf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbba8,	// (0x0004a8cf) list_double2_graphic_large_graphic_pane_g1

0xb87c,	// (0x0004a5a3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb87c,	// (0x0004a5a3) list_double2_graphic_large_graphic_pane_g2

0xb6dd,	// (0x0004a404) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb6dd,	// (0x0004a404) list_double2_graphic_large_graphic_pane_g3

0xbbba,	// (0x0004a8e1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbbba,	// (0x0004a8e1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0004e46c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0004e46c) list_double2_graphic_large_graphic_pane_g

0xbbc6,	// (0x0004a8ed) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbbc6,	// (0x0004a8ed) list_double2_graphic_large_graphic_pane_t1

0xbbdc,	// (0x0004a903) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbdc,	// (0x0004a903) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0004e475) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0004e475) list_double2_graphic_large_graphic_pane_t

0x4acd,	// (0x000437f4) popup_fast_swap_window_ParamLimits

0x4acd,	// (0x000437f4) popup_fast_swap_window

0x4ae9,	// (0x00043810) popup_side_volume_key_window

0x4b03,	// (0x0004382a) stacon_top_pane

0x4b0d,	// (0x00043834) status_pane_ParamLimits

0x4b0d,	// (0x00043834) status_pane

0xd590,	// (0x0004c2b7) status_small_pane

0x37a5,	// (0x000424cc) control_pane

0x37a5,	// (0x000424cc) stacon_bottom_pane

0x40e6,	// (0x00042e0d) scroll_pane_cp121

0x40dd,	// (0x00042e04) set_content_pane

0xd528,	// (0x0004c24f) bg_active_tab_pane_g1_cp1

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp1

0xd531,	// (0x0004c258) bg_active_tab_pane_g3_cp1

0xd528,	// (0x0004c24f) bg_passive_tab_pane_g1_cp1

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp1

0xd531,	// (0x0004c258) bg_passive_tab_pane_g3_cp1

0xd53a,	// (0x0004c261) bg_active_tab_pane_g1_cp2

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp2

0xd543,	// (0x0004c26a) bg_active_tab_pane_g3_cp2

0xd53a,	// (0x0004c261) bg_passive_tab_pane_g1_cp2

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp2

0xd543,	// (0x0004c26a) bg_passive_tab_pane_g3_cp2

0x49bc,	// (0x000436e3) bg_active_tab_pane_g1_cp3

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp3

0x49c5,	// (0x000436ec) bg_active_tab_pane_g3_cp3

0x49bc,	// (0x000436e3) bg_passive_tab_pane_g1_cp3

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp3

0x49c5,	// (0x000436ec) bg_passive_tab_pane_g3_cp3

0xd54c,	// (0x0004c273) bg_active_tab_pane_g1_cp4

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp4

0xd557,	// (0x0004c27e) bg_active_tab_pane_g3_cp4

0xd54c,	// (0x0004c273) bg_passive_tab_pane_g1_cp4

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp4

0xd557,	// (0x0004c27e) bg_passive_tab_pane_g3_cp4

0x4a22,	// (0x00043749) bg_active_tab_pane_g1_cp5

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp5

0x4a2b,	// (0x00043752) bg_active_tab_pane_g3_cp5

0x4a22,	// (0x00043749) bg_passive_tab_pane_g1_cp5

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp5

0x4a2b,	// (0x00043752) bg_passive_tab_pane_g3_cp5

0x705d,	// (0x00045d84) list_set_graphic_pane_ParamLimits

0x705d,	// (0x00045d84) list_set_graphic_pane

0x37a5,	// (0x000424cc) bg_set_opt_pane_cp4

0xd562,	// (0x0004c289) list_set_graphic_pane_g1_ParamLimits

0xd562,	// (0x0004c289) list_set_graphic_pane_g1

0xd56e,	// (0x0004c295) list_set_graphic_pane_g2_ParamLimits

0xd56e,	// (0x0004c295) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0004e47a) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0004e47a) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0004e7f8) volume_small_pane_cp_g

0x4a80,	// (0x000437a7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4a80,	// (0x000437a7) list_double2_large_graphic_pane_g1_cp2

0x4a8c,	// (0x000437b3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a8c,	// (0x000437b3) list_double2_large_graphic_pane_g2_cp2

0x4a9d,	// (0x000437c4) list_double2_large_graphic_pane_g3_cp2

0x4aa5,	// (0x000437cc) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4aa5,	// (0x000437cc) list_double2_large_graphic_pane_t1_cp2

0x4abb,	// (0x000437e2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4abb,	// (0x000437e2) list_double2_large_graphic_pane_t2_cp2

0x668c,	// (0x000453b3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x668c,	// (0x000453b3) list_double_large_graphic_pane_g1_cp2

0x669d,	// (0x000453c4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x669d,	// (0x000453c4) list_double_large_graphic_pane_g2_cp2

0x4c34,	// (0x0004395b) list_double_large_graphic_pane_g3_cp2

0x66ae,	// (0x000453d5) list_double_large_graphic_pane_g4_cp

0x66b6,	// (0x000453dd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x66b6,	// (0x000453dd) list_double_large_graphic_pane_t1_cp2

0x66cd,	// (0x000453f4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x66cd,	// (0x000453f4) list_double_large_graphic_pane_t2_cp2

0x4b26,	// (0x0004384d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4b26,	// (0x0004384d) list_double2_graphic_pane_g1_cp2

0x4b34,	// (0x0004385b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4b34,	// (0x0004385b) list_double2_graphic_pane_g2_cp2

0x4b45,	// (0x0004386c) list_double2_graphic_pane_g3_cp2

0x4b4f,	// (0x00043876) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4b4f,	// (0x00043876) list_double2_graphic_pane_t1_cp2

0x4b65,	// (0x0004388c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4b65,	// (0x0004388c) list_double2_graphic_pane_t2_cp2

0x4b77,	// (0x0004389e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b77,	// (0x0004389e) list_single_number_heading_pane_g1_cp2

0x4b83,	// (0x000438aa) list_single_number_heading_pane_g2_cp2

0x4b8b,	// (0x000438b2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b8b,	// (0x000438b2) list_single_number_heading_pane_t1_cp2

0x4ba1,	// (0x000438c8) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4ba1,	// (0x000438c8) list_single_number_heading_pane_t2_cp2

0x4bb3,	// (0x000438da) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4bb3,	// (0x000438da) list_single_number_heading_pane_t3_cp2

0x4b77,	// (0x0004389e) list_single_heading_pane_g1_cp2_ParamLimits

0x4b77,	// (0x0004389e) list_single_heading_pane_g1_cp2

0x4b83,	// (0x000438aa) list_single_heading_pane_g2_cp2

0x4b8b,	// (0x000438b2) list_single_heading_pane_t1_cp2_ParamLimits

0x4b8b,	// (0x000438b2) list_single_heading_pane_t1_cp2

0x6496,	// (0x000451bd) list_single_heading_pane_t2_cp2_ParamLimits

0x6496,	// (0x000451bd) list_single_heading_pane_t2_cp2

0x63de,	// (0x00045105) list_double_graphic_pane_g1_cp2_ParamLimits

0x63de,	// (0x00045105) list_double_graphic_pane_g1_cp2

0x63ea,	// (0x00045111) list_double_graphic_pane_g2_cp2_ParamLimits

0x63ea,	// (0x00045111) list_double_graphic_pane_g2_cp2

0x63f9,	// (0x00045120) list_double_graphic_pane_g3_cp2

0x6401,	// (0x00045128) list_double_graphic_pane_t1_cp2_ParamLimits

0x6401,	// (0x00045128) list_double_graphic_pane_t1_cp2

0x6417,	// (0x0004513e) list_double_graphic_pane_t2_cp2_ParamLimits

0x6417,	// (0x0004513e) list_double_graphic_pane_t2_cp2

0x4c28,	// (0x0004394f) list_double_number_pane_g1_cp2_ParamLimits

0x4c28,	// (0x0004394f) list_double_number_pane_g1_cp2

0x4c34,	// (0x0004395b) list_double_number_pane_g2_cp2

0x63a2,	// (0x000450c9) list_double_number_pane_t1_cp2_ParamLimits

0x63a2,	// (0x000450c9) list_double_number_pane_t1_cp2

0x63b6,	// (0x000450dd) list_double_number_pane_t2_cp2_ParamLimits

0x63b6,	// (0x000450dd) list_double_number_pane_t2_cp2

0x63cc,	// (0x000450f3) list_double_number_pane_t3_cp2_ParamLimits

0x63cc,	// (0x000450f3) list_double_number_pane_t3_cp2

0x628b,	// (0x00044fb2) list_single_graphic_pane_g1_cp2_ParamLimits

0x628b,	// (0x00044fb2) list_single_graphic_pane_g1_cp2

0x4c8c,	// (0x000439b3) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c8c,	// (0x000439b3) list_single_graphic_pane_g2_cp2

0x4c98,	// (0x000439bf) list_single_graphic_pane_g3_cp2

0x6261,	// (0x00044f88) list_single_graphic_pane_t1_cp2_ParamLimits

0x6261,	// (0x00044f88) list_single_graphic_pane_t1_cp2

0x4c8c,	// (0x000439b3) list_single_number_pane_g1_cp2_ParamLimits

0x4c8c,	// (0x000439b3) list_single_number_pane_g1_cp2

0x4c98,	// (0x000439bf) list_single_number_pane_g2_cp2

0x6261,	// (0x00044f88) list_single_number_pane_t1_cp2_ParamLimits

0x6261,	// (0x00044f88) list_single_number_pane_t1_cp2

0x6277,	// (0x00044f9e) list_single_number_pane_t2_cp2_ParamLimits

0x6277,	// (0x00044f9e) list_single_number_pane_t2_cp2

0x4a8c,	// (0x000437b3) list_double2_pane_g1_cp2_ParamLimits

0x4a8c,	// (0x000437b3) list_double2_pane_g1_cp2

0x4a9d,	// (0x000437c4) list_double2_pane_g2_cp2

0x4c00,	// (0x00043927) list_double2_pane_t1_cp2_ParamLimits

0x4c00,	// (0x00043927) list_double2_pane_t1_cp2

0x4c16,	// (0x0004393d) list_double2_pane_t2_cp2_ParamLimits

0x4c16,	// (0x0004393d) list_double2_pane_t2_cp2

0x4c28,	// (0x0004394f) list_double_pane_g1_cp2_ParamLimits

0x4c28,	// (0x0004394f) list_double_pane_g1_cp2

0x4c34,	// (0x0004395b) list_double_pane_g2_cp2

0x4c3c,	// (0x00043963) list_double_pane_t1_cp2_ParamLimits

0x4c3c,	// (0x00043963) list_double_pane_t1_cp2

0x4c52,	// (0x00043979) list_double_pane_t2_cp2_ParamLimits

0x4c52,	// (0x00043979) list_double_pane_t2_cp2

0x4c7c,	// (0x000439a3) list_single_pane_cp2_g3

0x4c8c,	// (0x000439b3) list_single_pane_g1_cp2_ParamLimits

0x4c8c,	// (0x000439b3) list_single_pane_g1_cp2

0x4c98,	// (0x000439bf) list_single_pane_g2_cp2

0x4ca0,	// (0x000439c7) list_single_pane_t1_cp2_ParamLimits

0x4ca0,	// (0x000439c7) list_single_pane_t1_cp2

0x4cb8,	// (0x000439df) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4cb8,	// (0x000439df) list_single_large_graphic_pane_g1_cp2

0x4cc4,	// (0x000439eb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4cc4,	// (0x000439eb) list_single_large_graphic_pane_g2_cp2

0x4cd0,	// (0x000439f7) list_single_large_graphic_pane_g3_cp2

0x4cd8,	// (0x000439ff) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4cd8,	// (0x000439ff) list_single_large_graphic_pane_g4_cp1

0x4cf2,	// (0x00043a19) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4cf2,	// (0x00043a19) list_single_large_graphic_pane_t1_cp2

0x622d,	// (0x00044f54) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x622d,	// (0x00044f54) list_single_graphic_heading_pane_g1_cp2

0x61fa,	// (0x00044f21) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x61fa,	// (0x00044f21) list_single_graphic_heading_pane_g4_cp2

0x4c98,	// (0x000439bf) list_single_graphic_heading_pane_g5_cp2

0x6239,	// (0x00044f60) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6239,	// (0x00044f60) list_single_graphic_heading_pane_t1_cp2

0x624f,	// (0x00044f76) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x624f,	// (0x00044f76) list_single_graphic_heading_pane_t2_cp2

0x61ee,	// (0x00044f15) list_single_2graphic_pane_g1_cp2_ParamLimits

0x61ee,	// (0x00044f15) list_single_2graphic_pane_g1_cp2

0x61fa,	// (0x00044f21) list_single_2graphic_pane_g2_cp2_ParamLimits

0x61fa,	// (0x00044f21) list_single_2graphic_pane_g2_cp2

0x4c98,	// (0x000439bf) list_single_2graphic_pane_g3_cp2

0x620b,	// (0x00044f32) list_single_2graphic_pane_g4_cp2_ParamLimits

0x620b,	// (0x00044f32) list_single_2graphic_pane_g4_cp2

0x6217,	// (0x00044f3e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6217,	// (0x00044f3e) list_single_2graphic_pane_t1_cp2

0x379b,	// (0x000424c2) list_highlight_pane_g10_cp1

0x5dc6,	// (0x00044aed) list_highlight_pane_g1_cp1

0x5dce,	// (0x00044af5) list_highlight_pane_g2_cp1

0x5dd6,	// (0x00044afd) list_highlight_pane_g3_cp1

0x5dde,	// (0x00044b05) list_highlight_pane_g4_cp1

0x5de6,	// (0x00044b0d) list_highlight_pane_g5_cp1

0x5dee,	// (0x00044b15) list_highlight_pane_g6_cp1

0x5df6,	// (0x00044b1d) list_highlight_pane_g7_cp1

0x5dfe,	// (0x00044b25) list_highlight_pane_g8_cp1

0x5e06,	// (0x00044b2d) list_highlight_pane_g9_cp1

0xdbe0,	// (0x0004c907) form_field_slider_pane_t3

0xdbf0,	// (0x0004c917) form_field_slider_pane_t4

0x5cfa,	// (0x00044a21) slider_form_pane_ParamLimits

0x5cfa,	// (0x00044a21) slider_form_pane

0x37a5,	// (0x000424cc) control_abbreviations

0x37a5,	// (0x000424cc) control_conventions

0x37a5,	// (0x000424cc) control_definitions

0x37a5,	// (0x000424cc) format_table_attribute

0x64e0,	// (0x00045207) bg_popup_preview_window_pane_g9

0x37a5,	// (0x000424cc) format_table_data2

0x37a5,	// (0x000424cc) format_table_data3

0x37a5,	// (0x000424cc) format_table_data_example

0x0008,

0x37a5,	// (0x000424cc) intro_purpose

0xf8ea,	// (0x0004e611) bg_popup_preview_window_pane_g

0x37a5,	// (0x000424cc) texts_category

0x37a5,	// (0x000424cc) texts_graphics

0x4d08,	// (0x00043a2f) text_digital

0x4d17,	// (0x00043a3e) text_primary

0x4d26,	// (0x00043a4d) text_primary_small

0x4d35,	// (0x00043a5c) text_secondary

0x4d44,	// (0x00043a6b) text_title

0x6baf,	// (0x000458d6) bg_passive_tab_pane_g1_cp3_srt

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp3_srt

0x6bb8,	// (0x000458df) bg_passive_tab_pane_g3_cp3_srt

0x3b00,	// (0x00042827) bg_active_tab_pane_cp3_srt_ParamLimits

0x3b00,	// (0x00042827) bg_active_tab_pane_cp3_srt

0x6bc1,	// (0x000458e8) tabs_4_active_pane_srt_g1

0xdf2d,	// (0x0004cc54) tabs_4_active_pane_srt_t1_ParamLimits

0xdf2d,	// (0x0004cc54) tabs_4_active_pane_srt_t1

0x6baf,	// (0x000458d6) bg_active_tab_pane_g1_cp3_copy1

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp3_copy1

0x6bb8,	// (0x000458df) bg_active_tab_pane_g3_cp3_copy1

0x3885,	// (0x000425ac) tabs_2_long_active_pane_srt_ParamLimits

0x3885,	// (0x000425ac) tabs_2_long_active_pane_srt

0x3885,	// (0x000425ac) tabs_2_long_passive_pane_srt_ParamLimits

0x3885,	// (0x000425ac) tabs_2_long_passive_pane_srt

0x508d,	// (0x00043db4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x508d,	// (0x00043db4) bg_passive_tab_pane_cp4_srt

0x690f,	// (0x00045636) bg_passive_tab_pane_g1_cp4_srt

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp4_srt

0x6918,	// (0x0004563f) bg_passive_tab_pane_g3_cp4_srt

0x3885,	// (0x000425ac) bg_active_tab_pane_cp4_srt_ParamLimits

0x3885,	// (0x000425ac) bg_active_tab_pane_cp4_srt

0xdd5a,	// (0x0004ca81) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd5a,	// (0x0004ca81) tabs_2_long_active_pane_srt_t1

0x690f,	// (0x00045636) bg_active_tab_pane_g1_cp4_srt

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp4_srt

0x6918,	// (0x0004563f) bg_active_tab_pane_g3_cp4_srt

0x3b00,	// (0x00042827) tabs_3_long_active_pane_srt_ParamLimits

0x3b00,	// (0x00042827) tabs_3_long_active_pane_srt

0x3b00,	// (0x00042827) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3b00,	// (0x00042827) tabs_3_long_passive_pane_cp_srt

0x3b00,	// (0x00042827) tabs_3_long_passive_pane_srt_ParamLimits

0x3b00,	// (0x00042827) tabs_3_long_passive_pane_srt

0x508d,	// (0x00043db4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x508d,	// (0x00043db4) bg_passive_tab_pane_cp5_srt

0x4a22,	// (0x00043749) bg_passive_tab_pane_g1_cp5_srt

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp5_srt

0x4a2b,	// (0x00043752) bg_passive_tab_pane_g3_cp5_srt

0x3885,	// (0x000425ac) bg_active_tab_pane_cp5_srt_ParamLimits

0x3885,	// (0x000425ac) bg_active_tab_pane_cp5_srt

0xdd44,	// (0x0004ca6b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd44,	// (0x0004ca6b) tabs_3_long_active_pane_srt_t1

0x4a22,	// (0x00043749) bg_active_tab_pane_g1_cp5_srt

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp5_srt

0x4a2b,	// (0x00043752) bg_active_tab_pane_g3_cp5_srt

0x68ef,	// (0x00045616) navi_text_pane_srt_t1

0x68e7,	// (0x0004560e) navi_icon_pane_srt_g1

0x4f09,	// (0x00043c30) midp_editing_number_pane_srt

0x4d53,	// (0x00043a7a) midp_ticker_pane_srt

0x4f11,	// (0x00043c38) midp_ticker_pane_srt_g1

0x4f19,	// (0x00043c40) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0004e499) midp_ticker_pane_srt_g

0x4f21,	// (0x00043c48) midp_ticker_pane_srt_t1

0x68d8,	// (0x000455ff) midp_editing_number_pane_t1_copy1

0x508d,	// (0x00043db4) listscroll_midp_pane

0x508d,	// (0x00043db4) midp_form_pane

0x4dc1,	// (0x00043ae8) midp_info_popup_window_ParamLimits

0x4dc1,	// (0x00043ae8) midp_info_popup_window

0x41a3,	// (0x00042eca) bg_popup_sub_pane_cp50_ParamLimits

0x41a3,	// (0x00042eca) bg_popup_sub_pane_cp50

0x59fb,	// (0x00044722) listscroll_midp_info_pane_ParamLimits

0x59fb,	// (0x00044722) listscroll_midp_info_pane

0x59e3,	// (0x0004470a) listscroll_form_midp_pane_ParamLimits

0x59e3,	// (0x0004470a) listscroll_form_midp_pane

0x59ef,	// (0x00044716) scroll_bar_cp050

0xdbd4,	// (0x0004c8fb) list_midp_pane

0x75e4,	// (0x0004630b) signal_pane_g2_cp

0x58fd,	// (0x00044624) listscroll_midp_info_pane_t1_ParamLimits

0x58fd,	// (0x00044624) listscroll_midp_info_pane_t1

0x5915,	// (0x0004463c) listscroll_midp_info_pane_t2_ParamLimits

0x5915,	// (0x0004463c) listscroll_midp_info_pane_t2

0x5953,	// (0x0004467a) listscroll_midp_info_pane_t3_ParamLimits

0x5953,	// (0x0004467a) listscroll_midp_info_pane_t3

0x598d,	// (0x000446b4) listscroll_midp_info_pane_t4_ParamLimits

0x598d,	// (0x000446b4) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0004e54c) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0004e54c) listscroll_midp_info_pane_t

0x4265,	// (0x00042f8c) scroll_pane_cp21

0x589f,	// (0x000445c6) form_midp_field_choice_group_pane

0x58a8,	// (0x000445cf) form_midp_field_text_pane

0x58e3,	// (0x0004460a) form_midp_field_time_pane

0x58eb,	// (0x00044612) form_midp_gauge_slider_pane

0x58f4,	// (0x0004461b) form_midp_gauge_wait_pane

0x37a5,	// (0x000424cc) form_midp_image_pane

0xbbee,	// (0x0004a915) list_single_midp_pane_ParamLimits

0xbbee,	// (0x0004a915) list_single_midp_pane

0xdbb1,	// (0x0004c8d8) form_midp_field_text_pane_t1

0x560b,	// (0x00044332) input_focus_pane_cp050

0x588e,	// (0x000445b5) list_midp_form_text_pane

0x5822,	// (0x00044549) form_midp_field_choice_group_pane_t1

0x5830,	// (0x00044557) input_focus_pane_cp051

0x5844,	// (0x0004456b) list_midp_choice_pane

0x37a5,	// (0x000424cc) status_idle_pane

0x5806,	// (0x0004452d) form_midp_field_time_pane_t1

0x379b,	// (0x000424c2) wait_anim_pane_g2_copy1

0x5814,	// (0x0004453b) form_midp_field_time_pane_t2

0x0001,

0x4e71,	// (0x00043b98) aid_navinavi_width_2_pane

0xf820,	// (0x0004e547) form_midp_field_time_pane_t

0x37a5,	// (0x000424cc) input_focus_pane_cp052

0x37a5,	// (0x000424cc) bg_input_focus_pane_cp040

0x57c6,	// (0x000444ed) form_midp_gauge_slider_pane_t1

0x57d4,	// (0x000444fb) form_midp_gauge_slider_pane_t2

0xdb91,	// (0x0004c8b8) form_midp_gauge_slider_pane_t3

0xdba1,	// (0x0004c8c8) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0004e53e) form_midp_gauge_slider_pane_t

0x57fe,	// (0x00044525) form_midp_slider_pane

0x3885,	// (0x000425ac) bg_input_focus_pane_cp041_ParamLimits

0x3885,	// (0x000425ac) bg_input_focus_pane_cp041

0x5793,	// (0x000444ba) form_midp_gauge_wait_pane_t1_ParamLimits

0x5793,	// (0x000444ba) form_midp_gauge_wait_pane_t1

0x57a5,	// (0x000444cc) form_midp_gauge_wait_pane_t2_ParamLimits

0x57a5,	// (0x000444cc) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0004e539) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0004e539) form_midp_gauge_wait_pane_t

0x57b7,	// (0x000444de) form_midp_wait_pane_ParamLimits

0x57b7,	// (0x000444de) form_midp_wait_pane

0x575d,	// (0x00044484) form_midp_image_pane_g1

0x5766,	// (0x0004448d) form_midp_image_pane_t1

0x5775,	// (0x0004449c) form_midp_image_pane_t2

0x5784,	// (0x000444ab) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0004e532) form_midp_image_pane_t

0x5754,	// (0x0004447b) list_single_midp_pane_g1

0x0a6f,	// (0x0003f796) list_single_midp_pane_t1

0xdb7b,	// (0x0004c8a2) list_midp_form_item_pane_ParamLimits

0xdb7b,	// (0x0004c8a2) list_midp_form_item_pane

0x4e19,	// (0x00043b40) list_midp_form_item_pane_t1

0x4e28,	// (0x00043b4f) midp_ticker_pane_g1

0x4e34,	// (0x00043b5b) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0004e47f) midp_ticker_pane_g

0x4e40,	// (0x00043b67) midp_ticker_pane_t1

0x6b1b,	// (0x00045842) midp_editing_number_pane_t1

0x6af9,	// (0x00045820) midp_editing_number_pane

0x6b08,	// (0x0004582f) midp_ticker_pane

0x68c8,	// (0x000455ef) ai_message_heading_pane

0x37a5,	// (0x000424cc) bg_popup_window_pane_cp14

0x68d0,	// (0x000455f7) listscroll_ai_message_pane

0x6852,	// (0x00045579) ai_message_heading_pane_g1_ParamLimits

0x6852,	// (0x00045579) ai_message_heading_pane_g1

0x685e,	// (0x00045585) ai_message_heading_pane_g2_ParamLimits

0x685e,	// (0x00045585) ai_message_heading_pane_g2

0x686a,	// (0x00045591) ai_message_heading_pane_g3_ParamLimits

0x686a,	// (0x00045591) ai_message_heading_pane_g3

0x6876,	// (0x0004559d) ai_message_heading_pane_g4_ParamLimits

0x6876,	// (0x0004559d) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0004e673) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0004e673) ai_message_heading_pane_g

0x6882,	// (0x000455a9) ai_message_heading_pane_t1_ParamLimits

0x6882,	// (0x000455a9) ai_message_heading_pane_t1

0x689c,	// (0x000455c3) ai_message_heading_pane_t2_ParamLimits

0x689c,	// (0x000455c3) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0004e67c) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0004e67c) ai_message_heading_pane_t

0x68ae,	// (0x000455d5) bg_popup_heading_pane_cp1_ParamLimits

0x68ae,	// (0x000455d5) bg_popup_heading_pane_cp1

0x6840,	// (0x00045567) list_ai_message_pane_ParamLimits

0x6840,	// (0x00045567) list_ai_message_pane

0x4265,	// (0x00042f8c) scroll_pane_cp10

0x67dc,	// (0x00045503) list_ai_message_pane_g1

0x67e4,	// (0x0004550b) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0004e650) list_ai_message_pane_g

0x67ec,	// (0x00045513) list_ai_message_pane_t1_ParamLimits

0x67ec,	// (0x00045513) list_ai_message_pane_t1

0x6801,	// (0x00045528) list_ai_message_pane_t2_ParamLimits

0x6801,	// (0x00045528) list_ai_message_pane_t2

0x6816,	// (0x0004553d) list_ai_message_pane_t3_ParamLimits

0x6816,	// (0x0004553d) list_ai_message_pane_t3

0x682b,	// (0x00045552) list_ai_message_pane_t4_ParamLimits

0x682b,	// (0x00045552) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0004e655) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0004e655) list_ai_message_pane_t

0xdd22,	// (0x0004ca49) cell_ai_soft_ind_pane_ParamLimits

0xdd22,	// (0x0004ca49) cell_ai_soft_ind_pane

0x4e52,	// (0x00043b79) cell_ai_soft_ind_pane_g1_ParamLimits

0x4e52,	// (0x00043b79) cell_ai_soft_ind_pane_g1

0x37a5,	// (0x000424cc) grid_highlight_cp1

0x4e5f,	// (0x00043b86) text_secondary_cp56_ParamLimits

0x4e5f,	// (0x00043b86) text_secondary_cp56

0x679b,	// (0x000454c2) example_general_pane_ParamLimits

0x679b,	// (0x000454c2) example_general_pane

0x67a7,	// (0x000454ce) example_parent_pane_g1_ParamLimits

0x67a7,	// (0x000454ce) example_parent_pane_g1

0x67b3,	// (0x000454da) example_parent_pane_t1_ParamLimits

0x67b3,	// (0x000454da) example_parent_pane_t1

0xc4db,	// (0x0004b202) popup_preview_text_window_ParamLimits

0xc4db,	// (0x0004b202) popup_preview_text_window

0x4c84,	// (0x000439ab) list_single_pane_cp2_g4

0x3baa,	// (0x000428d1) bg_popup_preview_window_pane_ParamLimits

0x3baa,	// (0x000428d1) bg_popup_preview_window_pane

0x64e8,	// (0x0004520f) popup_preview_text_window_t1_ParamLimits

0x64e8,	// (0x0004520f) popup_preview_text_window_t1

0x6506,	// (0x0004522d) popup_preview_text_window_t2_ParamLimits

0x6506,	// (0x0004522d) popup_preview_text_window_t2

0x654f,	// (0x00045276) popup_preview_text_window_t3_ParamLimits

0x654f,	// (0x00045276) popup_preview_text_window_t3

0x6594,	// (0x000452bb) popup_preview_text_window_t4_ParamLimits

0x6594,	// (0x000452bb) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0004e624) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0004e624) popup_preview_text_window_t

0x6612,	// (0x00045339) scroll_pane_cp11

0x5597,	// (0x000442be) bg_popup_preview_window_pane_g1

0x64a8,	// (0x000451cf) bg_popup_preview_window_pane_g2

0x64b0,	// (0x000451d7) bg_popup_preview_window_pane_g3

0x64b8,	// (0x000451df) bg_popup_preview_window_pane_g4

0x64c0,	// (0x000451e7) bg_popup_preview_window_pane_g5

0x64c8,	// (0x000451ef) bg_popup_preview_window_pane_g6

0x64d0,	// (0x000451f7) bg_popup_preview_window_pane_g7

0x64d8,	// (0x000451ff) bg_popup_preview_window_pane_g8

0x108e,	// (0x0003fdb5) aid_popup_width_pane

0xc457,	// (0x0004b17e) popup_midp_note_alarm_window_ParamLimits

0xc457,	// (0x0004b17e) popup_midp_note_alarm_window

0x40f7,	// (0x00042e1e) data_form_pane_ParamLimits

0xbad9,	// (0x0004a800) form_field_data_pane_g1

0xbae3,	// (0x0004a80a) form_field_data_pane_t1_ParamLimits

0x4103,	// (0x00042e2a) input_focus_pane_ParamLimits

0x0745,	// (0x0003f46c) data_form_wide_pane_ParamLimits

0x0756,	// (0x0003f47d) form_field_data_wide_pane_g1

0x0762,	// (0x0003f489) form_field_data_wide_pane_t1_ParamLimits

0x3e50,	// (0x00042b77) input_focus_pane_cp6_ParamLimits

0xd374,	// (0x0004c09b) input_popup_find_pane_g1_ParamLimits

0xd374,	// (0x0004c09b) input_popup_find_pane_g1

0x16a0,	// (0x000403c7) aid_navi_side_left_pane

0x16b5,	// (0x000403dc) aid_navi_side_right_pane

0x5ec1,	// (0x00044be8) bg_popup_window_pane_cp30_ParamLimits

0x5ec1,	// (0x00044be8) bg_popup_window_pane_cp30

0x5f3b,	// (0x00044c62) popup_midp_note_alarm_window_g1_ParamLimits

0x5f3b,	// (0x00044c62) popup_midp_note_alarm_window_g1

0x5f6b,	// (0x00044c92) popup_midp_note_alarm_window_t1_ParamLimits

0x5f6b,	// (0x00044c92) popup_midp_note_alarm_window_t1

0x600c,	// (0x00044d33) popup_midp_note_alarm_window_t2_ParamLimits

0x600c,	// (0x00044d33) popup_midp_note_alarm_window_t2

0x60ba,	// (0x00044de1) popup_midp_note_alarm_window_t3_ParamLimits

0x60ba,	// (0x00044de1) popup_midp_note_alarm_window_t3

0x60ec,	// (0x00044e13) popup_midp_note_alarm_window_t4_ParamLimits

0x60ec,	// (0x00044e13) popup_midp_note_alarm_window_t4

0x6112,	// (0x00044e39) popup_midp_note_alarm_window_t5_ParamLimits

0x6112,	// (0x00044e39) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0004e5c1) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0004e5c1) popup_midp_note_alarm_window_t

0x61be,	// (0x00044ee5) wait_bar_pane_cp1_ParamLimits

0x61be,	// (0x00044ee5) wait_bar_pane_cp1

0x37a5,	// (0x000424cc) wait_anim_pane_copy1

0x37a5,	// (0x000424cc) wait_border_pane_copy1

0x5b9f,	// (0x000448c6) wait_border_pane_g1_copy1

0x077c,	// (0x0003f4a3) form_field_popup_pane_g1

0xbafd,	// (0x0004a824) form_field_popup_pane_t1_ParamLimits

0x4103,	// (0x00042e2a) input_focus_pane_cp7_ParamLimits

0x4125,	// (0x00042e4c) list_form_pane_ParamLimits

0x079e,	// (0x0003f4c5) form_field_popup_wide_pane_g1

0x07a6,	// (0x0003f4cd) form_field_popup_wide_pane_t1_ParamLimits

0x4103,	// (0x00042e2a) input_focus_pane_cp8_ParamLimits

0x4131,	// (0x00042e58) list_form_wide_pane_ParamLimits

0x6c44,	// (0x0004596b) aid_size_cell_graphic_pane

0xbb7c,	// (0x0004a8a3) data_form_pane_t1_ParamLimits

0xbc07,	// (0x0004a92e) data_form_wide_pane_t1_ParamLimits

0xd7fc,	// (0x0004c523) bg_status_flat_pane

0xd038,	// (0x0004bd5f) title_pane_t1_ParamLimits

0x384d,	// (0x00042574) title_pane_t2_ParamLimits

0x3873,	// (0x0004259a) title_pane_t3_ParamLimits

0xf557,	// (0x0004e27e) title_pane_t_ParamLimits

0x46dc,	// (0x00043403) level_1_signal_ParamLimits

0x46e9,	// (0x00043410) level_2_signal_ParamLimits

0x46f6,	// (0x0004341d) level_3_signal_ParamLimits

0x4703,	// (0x0004342a) level_4_signal_ParamLimits

0x4710,	// (0x00043437) level_5_signal_ParamLimits

0x471d,	// (0x00043444) level_6_signal_ParamLimits

0x472a,	// (0x00043451) level_7_signal_ParamLimits

0x46dc,	// (0x00043403) level_1_battery_ParamLimits

0x46e9,	// (0x00043410) level_2_battery_ParamLimits

0x46f6,	// (0x0004341d) level_3_battery_ParamLimits

0x4703,	// (0x0004342a) level_4_battery_ParamLimits

0x4710,	// (0x00043437) level_5_battery_ParamLimits

0x471d,	// (0x00043444) level_6_battery_ParamLimits

0x472a,	// (0x00043451) level_7_battery_ParamLimits

0x5dc6,	// (0x00044aed) bg_status_flat_pane_g1

0x5dce,	// (0x00044af5) bg_status_flat_pane_g2

0x5dd6,	// (0x00044afd) bg_status_flat_pane_g3

0x5dde,	// (0x00044b05) bg_status_flat_pane_g4

0x5de6,	// (0x00044b0d) bg_status_flat_pane_g5

0x5dee,	// (0x00044b15) bg_status_flat_pane_g6

0x5df6,	// (0x00044b1d) bg_status_flat_pane_g7

0xd0c4,	// (0x0004bdeb) tabs_3_active_pane_t1_ParamLimits

0xd0c4,	// (0x0004bdeb) tabs_3_passive_pane_t1_ParamLimits

0xd0d6,	// (0x0004bdfd) tabs_4_active_pane_t1_ParamLimits

0xd0d6,	// (0x0004bdfd) tabs_4_1_passive_pane_t1_ParamLimits

0xd38a,	// (0x0004c0b1) tabs_2_active_pane_t1_ParamLimits

0xd38a,	// (0x0004c0b1) tabs_2_passive_pane_t1_ParamLimits

0x3885,	// (0x000425ac) bg_active_tab_pane_cp4_ParamLimits

0xd39c,	// (0x0004c0c3) tabs_2_long_active_pane_t1_ParamLimits

0x508d,	// (0x00043db4) bg_passive_tab_pane_cp4_ParamLimits

0x21be,	// (0x00040ee5) list_single_midp_graphic_pane_t1_ParamLimits

0x3885,	// (0x000425ac) bg_active_tab_pane_cp5_ParamLimits

0xd3af,	// (0x0004c0d6) tabs_3_long_active_pane_t1_ParamLimits

0x508d,	// (0x00043db4) bg_passive_tab_pane_cp5_ParamLimits

0x21be,	// (0x00040ee5) list_single_midp_graphic_pane_t1

0xd7fc,	// (0x0004c523) bg_status_flat_pane_ParamLimits

0x5223,	// (0x00043f4a) indicator_pane_cp2_ParamLimits

0x5223,	// (0x00043f4a) indicator_pane_cp2

0xd97a,	// (0x0004c6a1) navi_pane_srt_ParamLimits

0xd97a,	// (0x0004c6a1) navi_pane_srt

0x537e,	// (0x000440a5) popup_clock_digital_analogue_window_cp1

0x3962,	// (0x00042689) indicator_pane_t1

0x4d53,	// (0x00043a7a) copy_highlight_pane

0x4d53,	// (0x00043a7a) cursor_graphics_pane

0x4d53,	// (0x00043a7a) graphic_within_text_pane

0x4d53,	// (0x00043a7a) link_highlight_pane

0x65d5,	// (0x000452fc) popup_preview_text_window_t5_ParamLimits

0x65d5,	// (0x000452fc) popup_preview_text_window_t5

0x4e79,	// (0x00043ba0) cursor_digital_pane

0x4e79,	// (0x00043ba0) cursor_primary_pane

0x4e8a,	// (0x00043bb1) cursor_primary_small_pane

0x4e92,	// (0x00043bb9) cursor_secondary_pane

0x4e9a,	// (0x00043bc1) cursor_title_pane

0x4e79,	// (0x00043ba0) link_highlight_digital_pane

0x4e81,	// (0x00043ba8) link_highlight_primary_pane

0x4e8a,	// (0x00043bb1) link_highlight_primary_small_pane

0x4e92,	// (0x00043bb9) link_highlight_secondary_pane

0x4e9a,	// (0x00043bc1) link_highlight_title_pane

0x4e79,	// (0x00043ba0) copy_highlight_digital_pane

0x4e79,	// (0x00043ba0) copy_highlight_primary_pane

0x4e8a,	// (0x00043bb1) copy_highlight_primary_small_pane

0x4e92,	// (0x00043bb9) copy_highlight_secondary_pane

0x4e9a,	// (0x00043bc1) copy_highlight_title_pane

0x4e92,	// (0x00043bb9) graphic_text_digital_pane

0x5e64,	// (0x00044b8b) graphic_text_primary_pane

0x5e6d,	// (0x00044b94) graphic_text_primary_small_pane

0x4e8a,	// (0x00043bb1) graphic_text_secondary_pane

0x4e79,	// (0x00043ba0) graphic_text_title_pane

0xd638,	// (0x0004c35f) cursor_primary_pane_g1

0x5e56,	// (0x00044b7d) cursor_text_primary_t1

0xdc14,	// (0x0004c93b) cursor_primary_small_pane_g1

0x5e48,	// (0x00044b6f) cursor_text_primary_small_t1

0xdc0a,	// (0x0004c931) cursor_primary_small_pane_g1_copy1

0x5e30,	// (0x00044b57) cursor_text_primary_small_t1_copy1

0x5e0e,	// (0x00044b35) cursor_text_title_t1

0xdc00,	// (0x0004c927) cursor_title_pane_g1

0xd638,	// (0x0004c35f) cursor_digital_pane_g1

0x4eac,	// (0x00043bd3) cursor_text_digital_t1

0x5daf,	// (0x00044ad6) link_highlight_primary_pane_g1

0x5db7,	// (0x00044ade) link_highlight_primary_pane_t1

0x4eba,	// (0x00043be1) link_highlight_primary_small_pane_g1

0x4ec2,	// (0x00043be9) link_highlight_primary_small_pane_t1

0x4eba,	// (0x00043be1) link_highlight_secondary_pane_g1

0x4ed1,	// (0x00043bf8) link_highlight_secondary_pane_t1

0x5d23,	// (0x00044a4a) link_highlight_title_pane_g1

0x5d2b,	// (0x00044a52) link_highlight_title_pane_t1

0x5d0c,	// (0x00044a33) link_highlight_digital_pane_g1

0x5d14,	// (0x00044a3b) link_highlight_digital_pane_t1

0x5be4,	// (0x0004490b) copy_highlight_primary_pane_g1

0x5bec,	// (0x00044913) copy_highlight_primary_pane_t1

0x5bbe,	// (0x000448e5) copy_highlight_primary_small_pane_g1

0x5bd5,	// (0x000448fc) copy_highlight_primary_small_pane_t1

0x4ee0,	// (0x00043c07) copy_highlight_secondary_pane_g1

0x4ee8,	// (0x00043c0f) copy_highlight_secondary_pane_t1

0x5bbe,	// (0x000448e5) copy_highlight_title_pane_g1

0x5bc6,	// (0x000448ed) copy_highlight_title_pane_t1

0x5be4,	// (0x0004490b) copy_highlight_digital_pane_g1

0x6e0f,	// (0x00045b36) copy_highlight_digital_pane_t1

0x6d63,	// (0x00045a8a) graphic_text_primary_pane_g1

0x6df3,	// (0x00045b1a) graphic_text_primary_pane_t1

0x6e01,	// (0x00045b28) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0004e6f0) graphic_text_primary_pane_t

0x6dcf,	// (0x00045af6) graphic_text_primary_small_pane_g1

0x6dd7,	// (0x00045afe) graphic_text_primary_small_pane_t1

0x6de5,	// (0x00045b0c) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0004e6eb) graphic_text_primary_small_pane_t

0x6dab,	// (0x00045ad2) graphic_text_secondary_pane_g1

0x6db3,	// (0x00045ada) graphic_text_secondary_pane_t1

0x6dc1,	// (0x00045ae8) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0004e6e6) graphic_text_secondary_pane_t

0x6d87,	// (0x00045aae) graphic_text_title_pane_g1

0x6d8f,	// (0x00045ab6) graphic_text_title_pane_t1

0x6d9d,	// (0x00045ac4) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0004e6e1) graphic_text_title_pane_t

0x6d63,	// (0x00045a8a) graphic_text_digital_pane_g1

0x6d6b,	// (0x00045a92) graphic_text_digital_pane_t1

0x6d79,	// (0x00045aa0) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0004e6dc) graphic_text_digital_pane_t

0x3885,	// (0x000425ac) navi_icon_pane_srt_ParamLimits

0x3885,	// (0x000425ac) navi_icon_pane_srt

0x37a5,	// (0x000424cc) navi_midp_pane_srt

0x37a5,	// (0x000424cc) navi_navi_pane_srt

0x3885,	// (0x000425ac) navi_text_pane_srt_ParamLimits

0x3885,	// (0x000425ac) navi_text_pane_srt

0x6d2e,	// (0x00045a55) navi_navi_icon_text_pane_srt

0x6d36,	// (0x00045a5d) navi_navi_pane_srt_g1_ParamLimits

0x6d36,	// (0x00045a5d) navi_navi_pane_srt_g1

0x6d48,	// (0x00045a6f) navi_navi_pane_srt_g2_ParamLimits

0x6d48,	// (0x00045a6f) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0004e6d7) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0004e6d7) navi_navi_pane_srt_g

0x6d5a,	// (0x00045a81) navi_navi_tabs_pane_srt

0x6d2e,	// (0x00045a55) navi_navi_text_pane_srt

0x6d2e,	// (0x00045a55) navi_navi_volume_pane_srt

0x6d1f,	// (0x00045a46) navi_navi_text_pane_srt_t1

0x2644,	// (0x0004136b) navi_navi_volume_pane_srt_g1

0x264c,	// (0x00041373) volume_small_pane_srt_ParamLimits

0x264c,	// (0x00041373) volume_small_pane_srt

0x1993,	// (0x000406ba) volume_small_pane_srt_g1_ParamLimits

0x1993,	// (0x000406ba) volume_small_pane_srt_g1

0x19a3,	// (0x000406ca) volume_small_pane_srt_g2_ParamLimits

0x19a3,	// (0x000406ca) volume_small_pane_srt_g2

0x19b4,	// (0x000406db) volume_small_pane_srt_g3_ParamLimits

0x19b4,	// (0x000406db) volume_small_pane_srt_g3

0x19c5,	// (0x000406ec) volume_small_pane_srt_g4_ParamLimits

0x19c5,	// (0x000406ec) volume_small_pane_srt_g4

0x19d6,	// (0x000406fd) volume_small_pane_srt_g5_ParamLimits

0x19d6,	// (0x000406fd) volume_small_pane_srt_g5

0x19e7,	// (0x0004070e) volume_small_pane_srt_g6_ParamLimits

0x19e7,	// (0x0004070e) volume_small_pane_srt_g6

0x19f8,	// (0x0004071f) volume_small_pane_srt_g7_ParamLimits

0x19f8,	// (0x0004071f) volume_small_pane_srt_g7

0x1a09,	// (0x00040730) volume_small_pane_srt_g8_ParamLimits

0x1a09,	// (0x00040730) volume_small_pane_srt_g8

0x1a1a,	// (0x00040741) volume_small_pane_srt_g9_ParamLimits

0x1a1a,	// (0x00040741) volume_small_pane_srt_g9

0x1a2b,	// (0x00040752) volume_small_pane_srt_g10_ParamLimits

0x1a2b,	// (0x00040752) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0004e484) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0004e484) volume_small_pane_srt_g

0x3c53,	// (0x0004297a) query_popup_data_pane_cp2

0x6d05,	// (0x00045a2c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6d05,	// (0x00045a2c) navi_navi_icon_text_pane_srt_t1

0x5e64,	// (0x00044b8b) navi_tabs_2_long_pane_srt

0x5e64,	// (0x00044b8b) navi_tabs_2_pane_srt

0x5e64,	// (0x00044b8b) navi_tabs_3_long_pane_srt

0x5e64,	// (0x00044b8b) navi_tabs_3_pane_srt

0x5e64,	// (0x00044b8b) navi_tabs_4_pane_srt

0x2624,	// (0x0004134b) tabs_2_active_pane_srt_ParamLimits

0x2624,	// (0x0004134b) tabs_2_active_pane_srt

0x2634,	// (0x0004135b) tabs_2_passive_pane_srt_ParamLimits

0x2634,	// (0x0004135b) tabs_2_passive_pane_srt

0x560b,	// (0x00044332) bg_passive_tab_pane_cp1_srt_ParamLimits

0x560b,	// (0x00044332) bg_passive_tab_pane_cp1_srt

0x6cd1,	// (0x000459f8) bg_passive_tab_pane_g1_cp1_srt

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp1_srt

0x6cda,	// (0x00045a01) bg_passive_tab_pane_g3_cp1_srt

0x3b00,	// (0x00042827) bg_active_tab_pane_cp1_srt_ParamLimits

0x3b00,	// (0x00042827) bg_active_tab_pane_cp1_srt

0x6ce3,	// (0x00045a0a) tabs_2_active_pane_srt_g1

0xdfd1,	// (0x0004ccf8) tabs_2_active_pane_srt_t1_ParamLimits

0xdfd1,	// (0x0004ccf8) tabs_2_active_pane_srt_t1

0x6cd1,	// (0x000459f8) bg_active_tab_pane_g1_cp1_srt

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp1_srt

0x6cda,	// (0x00045a01) bg_active_tab_pane_g3_cp1_srt

0x25f1,	// (0x00041318) tabs_3_active_pane_srt_ParamLimits

0x25f1,	// (0x00041318) tabs_3_active_pane_srt

0x2602,	// (0x00041329) tabs_3_passive_pane_cp_srt_ParamLimits

0x2602,	// (0x00041329) tabs_3_passive_pane_cp_srt

0x2613,	// (0x0004133a) tabs_3_passive_pane_srt_ParamLimits

0x2613,	// (0x0004133a) tabs_3_passive_pane_srt

0x560b,	// (0x00044332) bg_passive_tab_pane_cp2_srt_ParamLimits

0x560b,	// (0x00044332) bg_passive_tab_pane_cp2_srt

0x4ef7,	// (0x00043c1e) bg_passive_tab_pane_g1_cp2_srt

0x498f,	// (0x000436b6) bg_passive_tab_pane_g2_cp2_srt

0x4f00,	// (0x00043c27) bg_passive_tab_pane_g3_cp2_srt

0x3b00,	// (0x00042827) bg_active_tab_pane_cp2_srt_ParamLimits

0x3b00,	// (0x00042827) bg_active_tab_pane_cp2_srt

0x6cb7,	// (0x000459de) tabs_3_active_pane_srt_g1

0xdfbb,	// (0x0004cce2) tabs_3_active_pane_srt_t1_ParamLimits

0xdfbb,	// (0x0004cce2) tabs_3_active_pane_srt_t1

0x4ef7,	// (0x00043c1e) bg_active_tab_pane_g1_cp2_srt

0x498f,	// (0x000436b6) bg_active_tab_pane_g2_cp2_srt

0x4f00,	// (0x00043c27) bg_active_tab_pane_g3_cp2_srt

0x25a9,	// (0x000412d0) tabs_4_active_pane_srt_ParamLimits

0x25a9,	// (0x000412d0) tabs_4_active_pane_srt

0x25bb,	// (0x000412e2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x25bb,	// (0x000412e2) tabs_4_passive_pane_cp2_srt

0x1b8e,	// (0x000408b5) aid_size_cell_toolbar

0x697a,	// (0x000456a1) main_idle_act_pane_ParamLimits

0x1d33,	// (0x00040a5a) popup_large_graphic_colour_window_ParamLimits

0xc761,	// (0x0004b488) popup_toolbar_window_ParamLimits

0xc761,	// (0x0004b488) popup_toolbar_window

0x6b2a,	// (0x00045851) list_single_graphic_2heading_pane_ParamLimits

0x6b2a,	// (0x00045851) list_single_graphic_2heading_pane

0x4492,	// (0x000431b9) aid_size_cell_apps_grid_lsc_pane

0x44a4,	// (0x000431cb) aid_size_cell_apps_grid_prt_pane

0x508d,	// (0x00043db4) bg_wml_button_pane_cp1_ParamLimits

0x508d,	// (0x00043db4) bg_wml_button_pane_cp1

0xdbb1,	// (0x0004c8d8) form_midp_field_text_pane_t1_ParamLimits

0x560b,	// (0x00044332) input_focus_pane_cp050_ParamLimits

0x588e,	// (0x000445b5) list_midp_form_text_pane_ParamLimits

0x5830,	// (0x00044557) input_focus_pane_cp051_ParamLimits

0x5844,	// (0x0004456b) list_midp_choice_pane_ParamLimits

0xdb45,	// (0x0004c86c) list_single_2graphic_pane_cp3_ParamLimits

0xdb45,	// (0x0004c86c) list_single_2graphic_pane_cp3

0xdb5a,	// (0x0004c881) list_single_midp_graphic_pane_ParamLimits

0xdb5a,	// (0x0004c881) list_single_midp_graphic_pane

0x094b,	// (0x0003f672) list_single_graphic_2heading_pane_g1_ParamLimits

0x094b,	// (0x0003f672) list_single_graphic_2heading_pane_g1

0x0957,	// (0x0003f67e) list_single_graphic_2heading_pane_g4_ParamLimits

0x0957,	// (0x0003f67e) list_single_graphic_2heading_pane_g4

0x0963,	// (0x0003f68a) list_single_graphic_2heading_pane_g5_ParamLimits

0x0963,	// (0x0003f68a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0004e4d7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0004e4d7) list_single_graphic_2heading_pane_g

0x096f,	// (0x0003f696) list_single_graphic_2heading_pane_t1_ParamLimits

0x096f,	// (0x0003f696) list_single_graphic_2heading_pane_t1

0x0983,	// (0x0003f6aa) list_single_graphic_2heading_pane_t2_ParamLimits

0x0983,	// (0x0003f6aa) list_single_graphic_2heading_pane_t2

0x099d,	// (0x0003f6c4) list_single_graphic_2heading_pane_t3_ParamLimits

0x099d,	// (0x0003f6c4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0004e4de) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0004e4de) list_single_graphic_2heading_pane_t

0x54d5,	// (0x000441fc) bg_popup_sub_pane_cp2

0x54ff,	// (0x00044226) grid_toobar_pane

0x2143,	// (0x00040e6a) cell_toolbar_pane_ParamLimits

0x2143,	// (0x00040e6a) cell_toolbar_pane

0x553b,	// (0x00044262) cell_toolbar_pane_g1_ParamLimits

0x553b,	// (0x00044262) cell_toolbar_pane_g1

0x554f,	// (0x00044276) cell_toolbar_pane_g2_ParamLimits

0x554f,	// (0x00044276) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0004e4ec) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0004e4ec) cell_toolbar_pane_g

0x5571,	// (0x00044298) grid_highlight_pane_cp2_ParamLimits

0x5571,	// (0x00044298) grid_highlight_pane_cp2

0x558b,	// (0x000442b2) toolbar_button_pane

0x5597,	// (0x000442be) toolbar_button_pane_g1

0x559f,	// (0x000442c6) toolbar_button_pane_g2

0x55a7,	// (0x000442ce) toolbar_button_pane_g3

0x55af,	// (0x000442d6) toolbar_button_pane_g4

0x55b7,	// (0x000442de) toolbar_button_pane_g5

0x55bf,	// (0x000442e6) toolbar_button_pane_g6

0x55c7,	// (0x000442ee) toolbar_button_pane_g7

0x55cf,	// (0x000442f6) toolbar_button_pane_g8

0x55d7,	// (0x000442fe) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0004e4f1) toolbar_button_pane_g

0x217b,	// (0x00040ea2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x217b,	// (0x00040ea2) list_single_2graphic_pane_g1_cp3

0xc7b9,	// (0x0004b4e0) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc7b9,	// (0x0004b4e0) list_single_2graphic_pane_g2_cp3

0x4b83,	// (0x000438aa) list_single_2graphic_pane_g3_cp3

0x2198,	// (0x00040ebf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2198,	// (0x00040ebf) list_single_2graphic_pane_g4_cp3

0x21a4,	// (0x00040ecb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x21a4,	// (0x00040ecb) list_single_2graphic_pane_t1_cp3

0x4b77,	// (0x0004389e) list_single_midp_graphic_pane_g2_ParamLimits

0x4b77,	// (0x0004389e) list_single_midp_graphic_pane_g2

0x0933,	// (0x0003f65a) aid_zoom_text_primary

0x093b,	// (0x0003f662) aid_zoom_text_secondary

0xd690,	// (0x0004c3b7) status_small_pane_g7_ParamLimits

0xd690,	// (0x0004c3b7) status_small_pane_g7

0xd6b3,	// (0x0004c3da) status_small_pane_t1_ParamLimits

0xd014,	// (0x0004bd3b) title_pane_g2

0x0003,

0xf54e,	// (0x0004e275) title_pane_g

0xd28c,	// (0x0004bfb3) aid_size_cell_colour_1_pane_ParamLimits

0xd28c,	// (0x0004bfb3) aid_size_cell_colour_1_pane

0xd2a0,	// (0x0004bfc7) aid_size_cell_colour_2_pane_ParamLimits

0xd2a0,	// (0x0004bfc7) aid_size_cell_colour_2_pane

0xd2b4,	// (0x0004bfdb) aid_size_cell_colour_3_pane_ParamLimits

0xd2b4,	// (0x0004bfdb) aid_size_cell_colour_3_pane

0xd2c8,	// (0x0004bfef) aid_size_cell_colour_4_pane_ParamLimits

0xd2c8,	// (0x0004bfef) aid_size_cell_colour_4_pane

0x15dc,	// (0x00040303) title_pane_stacon_g1_ParamLimits

0x15dc,	// (0x00040303) title_pane_stacon_g1

0x5c43,	// (0x0004496a) popup_note_wait_window_g3_ParamLimits

0x5c43,	// (0x0004496a) popup_note_wait_window_g3

0x5cb9,	// (0x000449e0) popup_note_wait_window_t5_ParamLimits

0x5cb9,	// (0x000449e0) popup_note_wait_window_t5

0x37a5,	// (0x000424cc) main_feb_china_hwr_fs_writing_pane

0xc17d,	// (0x0004aea4) popup_feb_china_hwr_fs_window_ParamLimits

0xc17d,	// (0x0004aea4) popup_feb_china_hwr_fs_window

0xc7ca,	// (0x0004b4f1) aid_size_cell_hwr_fs_ParamLimits

0xc7ca,	// (0x0004b4f1) aid_size_cell_hwr_fs

0x560b,	// (0x00044332) bg_popup_sub_pane_cp3_ParamLimits

0x560b,	// (0x00044332) bg_popup_sub_pane_cp3

0xc7df,	// (0x0004b506) grid_hwr_fs_pane_ParamLimits

0xc7df,	// (0x0004b506) grid_hwr_fs_pane

0x2201,	// (0x00040f28) linegrid_hwr_fs_pane_ParamLimits

0x2201,	// (0x00040f28) linegrid_hwr_fs_pane

0xc7f7,	// (0x0004b51e) cell_hwr_fs_pane_ParamLimits

0xc7f7,	// (0x0004b51e) cell_hwr_fs_pane

0x5617,	// (0x0004433e) linegrid_hwr_fs_pane_g1_ParamLimits

0x5617,	// (0x0004433e) linegrid_hwr_fs_pane_g1

0xdb19,	// (0x0004c840) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb19,	// (0x0004c840) linegrid_hwr_fs_pane_g2

0x5635,	// (0x0004435c) linegrid_hwr_fs_pane_g3_ParamLimits

0x5635,	// (0x0004435c) linegrid_hwr_fs_pane_g3

0x2233,	// (0x00040f5a) linegrid_hwr_fs_pane_g4_ParamLimits

0x2233,	// (0x00040f5a) linegrid_hwr_fs_pane_g4

0x224d,	// (0x00040f74) linegrid_hwr_fs_pane_g5_ParamLimits

0x224d,	// (0x00040f74) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0004e517) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0004e517) linegrid_hwr_fs_pane_g

0x5641,	// (0x00044368) cell_hwr_fs_pane_g1_ParamLimits

0x5641,	// (0x00044368) cell_hwr_fs_pane_g1

0x540c,	// (0x00044133) cell_hwr_fs_pane_g2_ParamLimits

0x540c,	// (0x00044133) cell_hwr_fs_pane_g2

0xdb2b,	// (0x0004c852) cell_hwr_fs_pane_g3_ParamLimits

0xdb2b,	// (0x0004c852) cell_hwr_fs_pane_g3

0xdb38,	// (0x0004c85f) cell_hwr_fs_pane_g4_ParamLimits

0xdb38,	// (0x0004c85f) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0004e522) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0004e522) cell_hwr_fs_pane_g

0xc81d,	// (0x0004b544) cell_hwr_fs_pane_t1

0x37a5,	// (0x000424cc) grid_highlight_pane_cp6

0x37a5,	// (0x000424cc) main_idle_act2_pane

0x424c,	// (0x00042f73) aid_inside_area_popup_secondary

0xdc26,	// (0x0004c94d) aid_inside_area_window_primary_ParamLimits

0xdc26,	// (0x0004c94d) aid_inside_area_window_primary

0x6e1e,	// (0x00045b45) ai2_news_ticker_pane

0x6e26,	// (0x00045b4d) aid_size_cell_ai1_link_ParamLimits

0x6e26,	// (0x00045b4d) aid_size_cell_ai1_link

0x6e40,	// (0x00045b67) popup_ai2_data_window_ParamLimits

0x6e40,	// (0x00045b67) popup_ai2_data_window

0x6e54,	// (0x00045b7b) popup_ai2_link_window_ParamLimits

0x6e54,	// (0x00045b7b) popup_ai2_link_window

0x560b,	// (0x00044332) bg_popup_sub_pane_cp4_ParamLimits

0x560b,	// (0x00044332) bg_popup_sub_pane_cp4

0x6e68,	// (0x00045b8f) grid_ai2_link_pane_ParamLimits

0x6e68,	// (0x00045b8f) grid_ai2_link_pane

0x6e7f,	// (0x00045ba6) popup_ai2_link_window_g1_ParamLimits

0x6e7f,	// (0x00045ba6) popup_ai2_link_window_g1

0x6e8b,	// (0x00045bb2) popup_ai2_link_window_g2_ParamLimits

0x6e8b,	// (0x00045bb2) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0004e6f5) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0004e6f5) popup_ai2_link_window_g

0x6e9a,	// (0x00045bc1) ai2_mp_button_pane

0x6ea2,	// (0x00045bc9) ai2_mp_volume_pane

0x5830,	// (0x00044557) bg_popup_sub_pane_cp5_ParamLimits

0x5830,	// (0x00044557) bg_popup_sub_pane_cp5

0x6eaa,	// (0x00045bd1) heading_ai2_gene_pane_ParamLimits

0x6eaa,	// (0x00045bd1) heading_ai2_gene_pane

0x6eb6,	// (0x00045bdd) list_ai2_gene_pane_ParamLimits

0x6eb6,	// (0x00045bdd) list_ai2_gene_pane

0x6efe,	// (0x00045c25) cell_ai2_link_pane_ParamLimits

0x6efe,	// (0x00045c25) cell_ai2_link_pane

0x6f14,	// (0x00045c3b) cell_ai2_link_pane_g1

0x37a5,	// (0x000424cc) grid_highlight_pane_cp7

0x2661,	// (0x00041388) ai2_mp_volume_pane_g1

0x6fe5,	// (0x00045d0c) ai2_mp_volume_pane_g2

0x6f5a,	// (0x00045c81) list_ai2_gene_pane_t1

0x6fed,	// (0x00045d14) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0004e70e) ai2_mp_volume_pane_g

0x2669,	// (0x00041390) volume_small_pane_cp3

0x6ff5,	// (0x00045d1c) aid_size_cell_ai2_button

0x6ffd,	// (0x00045d24) grid_ai2_button_pane

0x7006,	// (0x00045d2d) cell_ai2_button_pane_ParamLimits

0x7006,	// (0x00045d2d) cell_ai2_button_pane

0x379b,	// (0x000424c2) cell_ai2_button_pane_g1

0x37a5,	// (0x000424cc) grid_highlight_pane_cp8

0x6fa5,	// (0x00045ccc) ai2_gene_pane_t1_ParamLimits

0x6fa5,	// (0x00045ccc) ai2_gene_pane_t1

0xc10b,	// (0x0004ae32) aid_height_parent_landscape

0xdd71,	// (0x0004ca98) aid_height_set_list

0x697a,	// (0x000456a1) aid_size_parent

0x6c44,	// (0x0004596b) aid_size_cell_graphic_pane_ParamLimits

0x6ec6,	// (0x00045bed) popup_ai2_data_window_g1_ParamLimits

0x6ec6,	// (0x00045bed) popup_ai2_data_window_g1

0x6ed2,	// (0x00045bf9) ai2_news_ticker_pane_g1

0x6eda,	// (0x00045c01) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0004e6fa) ai2_news_ticker_pane_g

0x6ee2,	// (0x00045c09) ai2_news_ticker_pane_t1

0x6ef0,	// (0x00045c17) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0004e6ff) ai2_news_ticker_pane_t

0x6f1d,	// (0x00045c44) heading_ai2_gene_pane_g1

0x6f25,	// (0x00045c4c) heading_ai2_gene_pane_t1_ParamLimits

0x6f25,	// (0x00045c4c) heading_ai2_gene_pane_t1

0x6f3a,	// (0x00045c61) list_highlight_pane_cp6

0x6f42,	// (0x00045c69) ai2_gene_pane_ParamLimits

0x6f42,	// (0x00045c69) ai2_gene_pane

0x6f68,	// (0x00045c8f) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0004e704) list_ai2_gene_pane_t

0x6f76,	// (0x00045c9d) list_highlight_pane_cp8_ParamLimits

0x6f76,	// (0x00045c9d) list_highlight_pane_cp8

0x6f87,	// (0x00045cae) ai2_gene_pane_g1_ParamLimits

0x6f87,	// (0x00045cae) ai2_gene_pane_g1

0x6f99,	// (0x00045cc0) ai2_gene_pane_g2_ParamLimits

0x6f99,	// (0x00045cc0) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0004e709) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0004e709) ai2_gene_pane_g

0x408d,	// (0x00042db4) scroll_pane_cp12

0xc0ca,	// (0x0004adf1) control_pane_t3_ParamLimits

0xc0ca,	// (0x0004adf1) control_pane_t3

0xd6a4,	// (0x0004c3cb) status_small_pane_g8_ParamLimits

0xd6a4,	// (0x0004c3cb) status_small_pane_g8

0xc210,	// (0x0004af37) popup_find_window_ParamLimits

0xc491,	// (0x0004b1b8) popup_note_image_window_ParamLimits

0x09b5,	// (0x0003f6dc) list_double2_graphic_pane_vc_g1_ParamLimits

0x09b5,	// (0x0003f6dc) list_double2_graphic_pane_vc_g1

0x14f4,	// (0x0004021b) list_double2_graphic_pane_vc_g2_ParamLimits

0x14f4,	// (0x0004021b) list_double2_graphic_pane_vc_g2

0x1500,	// (0x00040227) list_double2_graphic_pane_vc_g3_ParamLimits

0x1500,	// (0x00040227) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0004e4e5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0004e4e5) list_double2_graphic_pane_vc_g

0x09c1,	// (0x0003f6e8) list_double2_graphic_pane_vc_t1_ParamLimits

0x09c1,	// (0x0003f6e8) list_double2_graphic_pane_vc_t1

0x14f4,	// (0x0004021b) list_single_heading_pane_vc_g1_ParamLimits

0x14f4,	// (0x0004021b) list_single_heading_pane_vc_g1

0x1500,	// (0x00040227) list_single_heading_pane_vc_g2_ParamLimits

0x1500,	// (0x00040227) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2f9) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2f9) list_single_heading_pane_vc_g

0x09d7,	// (0x0003f6fe) list_single_heading_pane_vc_t1_ParamLimits

0x09d7,	// (0x0003f6fe) list_single_heading_pane_vc_t1

0x09ed,	// (0x0003f714) list_single_heading_pane_vc_t2_ParamLimits

0x09ed,	// (0x0003f714) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0004e506) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0004e506) list_single_heading_pane_vc_t

0x4075,	// (0x00042d9c) list_setting_number_pane_vc_g1_ParamLimits

0x4075,	// (0x00042d9c) list_setting_number_pane_vc_g1

0x4081,	// (0x00042da8) list_setting_number_pane_vc_g2_ParamLimits

0x4081,	// (0x00042da8) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004e50b) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004e50b) list_setting_number_pane_vc_g

0x0a09,	// (0x0003f730) list_setting_number_pane_vc_t1_ParamLimits

0x0a09,	// (0x0003f730) list_setting_number_pane_vc_t1

0x0a1d,	// (0x0003f744) list_setting_number_pane_vc_t2_ParamLimits

0x0a1d,	// (0x0003f744) list_setting_number_pane_vc_t2

0x0a37,	// (0x0003f75e) list_setting_number_pane_vc_t3_ParamLimits

0x0a37,	// (0x0003f75e) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0004e510) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0004e510) list_setting_number_pane_vc_t

0x0a5f,	// (0x0003f786) set_value_pane_vc_ParamLimits

0x0a5f,	// (0x0003f786) set_value_pane_vc

0x6b2a,	// (0x00045851) list_double2_graphic_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_double2_graphic_pane_vc

0x24b3,	// (0x000411da) list_double2_large_graphic_pane_vc_ParamLimits

0x24b3,	// (0x000411da) list_double2_large_graphic_pane_vc

0x6b2a,	// (0x00045851) list_double2_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_double2_pane_vc

0x6b2a,	// (0x00045851) list_double_graphic_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_double_graphic_heading_pane_vc

0x6b2a,	// (0x00045851) list_double_graphic_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_double_graphic_pane_vc

0x6b2a,	// (0x00045851) list_double_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_double_heading_pane_vc

0x24c5,	// (0x000411ec) list_double_large_graphic_pane_vc_ParamLimits

0x24c5,	// (0x000411ec) list_double_large_graphic_pane_vc

0x6b2a,	// (0x00045851) list_double_number_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_double_number_pane_vc

0x6b2a,	// (0x00045851) list_double_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_double_pane_vc

0x6b2a,	// (0x00045851) list_double_time_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_double_time_pane_vc

0x6b2a,	// (0x00045851) list_setting_number_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_setting_number_pane_vc

0x6b2a,	// (0x00045851) list_setting_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_setting_pane_vc

0x6b2a,	// (0x00045851) list_single_graphic_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_single_graphic_heading_pane_vc

0x6b2a,	// (0x00045851) list_single_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_single_heading_pane_vc

0x6b2a,	// (0x00045851) list_single_number_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00045851) list_single_number_heading_pane_vc

0x09b5,	// (0x0003f6dc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x09b5,	// (0x0003f6dc) list_double_graphic_heading_pane_vc_g1

0x14f4,	// (0x0004021b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x14f4,	// (0x0004021b) list_double_graphic_heading_pane_vc_g2

0x1500,	// (0x00040227) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1500,	// (0x00040227) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0004e4e5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0004e4e5) list_double_graphic_heading_pane_vc_g

0x0b08,	// (0x0003f82f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0b08,	// (0x0003f82f) list_double_graphic_heading_pane_vc_t1

0x0b24,	// (0x0003f84b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b24,	// (0x0003f84b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0004e715) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0004e715) list_double_graphic_heading_pane_vc_t

0x4075,	// (0x00042d9c) list_setting_pane_vc_g1_ParamLimits

0x4075,	// (0x00042d9c) list_setting_pane_vc_g1

0x4081,	// (0x00042da8) list_setting_pane_vc_g2_ParamLimits

0x4081,	// (0x00042da8) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004e50b) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004e50b) list_setting_pane_vc_g

0x0b3c,	// (0x0003f863) list_setting_pane_vc_t1_ParamLimits

0x0b3c,	// (0x0003f863) list_setting_pane_vc_t1

0x0b56,	// (0x0003f87d) list_setting_pane_vc_t2_ParamLimits

0x0b56,	// (0x0003f87d) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0004e758) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0004e758) list_setting_pane_vc_t

0x0a5f,	// (0x0003f786) set_value_pane_cp_vc_ParamLimits

0x0a5f,	// (0x0003f786) set_value_pane_cp_vc

0x14f4,	// (0x0004021b) list_single_number_heading_pane_vc_g1_ParamLimits

0x14f4,	// (0x0004021b) list_single_number_heading_pane_vc_g1

0x1500,	// (0x00040227) list_single_number_heading_pane_vc_g2_ParamLimits

0x1500,	// (0x00040227) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2f9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2f9) list_single_number_heading_pane_vc_g

0x09d7,	// (0x0003f6fe) list_single_number_heading_pane_vc_t1_ParamLimits

0x09d7,	// (0x0003f6fe) list_single_number_heading_pane_vc_t1

0x0b6e,	// (0x0003f895) list_single_number_heading_pane_vc_t2_ParamLimits

0x0b6e,	// (0x0003f895) list_single_number_heading_pane_vc_t2

0x0272,	// (0x0003ef99) list_single_number_heading_pane_vc_t3_ParamLimits

0x0272,	// (0x0003ef99) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0004e75d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0004e75d) list_single_number_heading_pane_vc_t

0x09b5,	// (0x0003f6dc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x09b5,	// (0x0003f6dc) list_single_graphic_heading_pane_vc_g1

0x14f4,	// (0x0004021b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x14f4,	// (0x0004021b) list_single_graphic_heading_pane_vc_g4

0x1500,	// (0x00040227) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1500,	// (0x00040227) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0004e4e5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0004e4e5) list_single_graphic_heading_pane_vc_g

0x09d7,	// (0x0003f6fe) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x09d7,	// (0x0003f6fe) list_single_graphic_heading_pane_vc_t1

0x0b82,	// (0x0003f8a9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0b82,	// (0x0003f8a9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0004e764) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0004e764) list_single_graphic_heading_pane_vc_t

0x14f4,	// (0x0004021b) list_double2_pane_vc_g1_ParamLimits

0x14f4,	// (0x0004021b) list_double2_pane_vc_g1

0x1500,	// (0x00040227) list_double2_pane_vc_g2_ParamLimits

0x1500,	// (0x00040227) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2f9) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2f9) list_double2_pane_vc_g

0x0af2,	// (0x0003f819) list_double2_pane_vc_t1_ParamLimits

0x0af2,	// (0x0003f819) list_double2_pane_vc_t1

0x26ba,	// (0x000413e1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x26ba,	// (0x000413e1) list_double2_large_graphic_pane_vc_g1

0x26c6,	// (0x000413ed) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x26c6,	// (0x000413ed) list_double2_large_graphic_pane_vc_g2

0x26d2,	// (0x000413f9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x26d2,	// (0x000413f9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004e311) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004e311) list_double2_large_graphic_pane_vc_g

0x0b96,	// (0x0003f8bd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0b96,	// (0x0003f8bd) list_double2_large_graphic_pane_vc_t1

0x0bac,	// (0x0003f8d3) list_double_time_pane_vc_g1_ParamLimits

0x0bac,	// (0x0003f8d3) list_double_time_pane_vc_g1

0x0bb8,	// (0x0003f8df) list_double_time_pane_vc_g2_ParamLimits

0x0bb8,	// (0x0003f8df) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x0004e769) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x0004e769) list_double_time_pane_vc_g

0x0bc4,	// (0x0003f8eb) list_double_time_pane_vc_t1_ParamLimits

0x0bc4,	// (0x0003f8eb) list_double_time_pane_vc_t1

0x0be2,	// (0x0003f909) list_double_time_pane_vc_t2_ParamLimits

0x0be2,	// (0x0003f909) list_double_time_pane_vc_t2

0x0c2c,	// (0x0003f953) list_double_time_pane_vc_t3_ParamLimits

0x0c2c,	// (0x0003f953) list_double_time_pane_vc_t3

0x0c3e,	// (0x0003f965) list_double_time_pane_vc_t4_ParamLimits

0x0c3e,	// (0x0003f965) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x0004e76e) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x0004e76e) list_double_time_pane_vc_t

0x14f4,	// (0x0004021b) list_double_pane_vc_g1_ParamLimits

0x14f4,	// (0x0004021b) list_double_pane_vc_g1

0x1500,	// (0x00040227) list_double_pane_vc_g2_ParamLimits

0x1500,	// (0x00040227) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2f9) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2f9) list_double_pane_vc_g

0x0c52,	// (0x0003f979) list_double_pane_vc_t1_ParamLimits

0x0c52,	// (0x0003f979) list_double_pane_vc_t1

0x0c64,	// (0x0003f98b) list_double_pane_vc_t2_ParamLimits

0x0c64,	// (0x0003f98b) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x0004e777) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x0004e777) list_double_pane_vc_t

0x14f4,	// (0x0004021b) list_double_number_pane_vc_g1_ParamLimits

0x14f4,	// (0x0004021b) list_double_number_pane_vc_g1

0x1500,	// (0x00040227) list_double_number_pane_vc_g2_ParamLimits

0x1500,	// (0x00040227) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2f9) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2f9) list_double_number_pane_vc_g

0x0c7c,	// (0x0003f9a3) list_double_number_pane_vc_t1_ParamLimits

0x0c7c,	// (0x0003f9a3) list_double_number_pane_vc_t1

0x0c8e,	// (0x0003f9b5) list_double_number_pane_vc_t2_ParamLimits

0x0c8e,	// (0x0003f9b5) list_double_number_pane_vc_t2

0x0ca0,	// (0x0003f9c7) list_double_number_pane_vc_t3_ParamLimits

0x0ca0,	// (0x0003f9c7) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x0004e77c) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x0004e77c) list_double_number_pane_vc_t

0x26de,	// (0x00041405) list_double_large_graphic_pane_vc_g1_ParamLimits

0x26de,	// (0x00041405) list_double_large_graphic_pane_vc_g1

0x0cb8,	// (0x0003f9df) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0cb8,	// (0x0003f9df) list_double_large_graphic_pane_vc_g2

0x0ccc,	// (0x0003f9f3) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0ccc,	// (0x0003f9f3) list_double_large_graphic_pane_vc_g3

0x0cdb,	// (0x0003fa02) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0cdb,	// (0x0003fa02) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x0004e783) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x0004e783) list_double_large_graphic_pane_vc_g

0x0cea,	// (0x0003fa11) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0cea,	// (0x0003fa11) list_double_large_graphic_pane_vc_t1

0x0d04,	// (0x0003fa2b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0d04,	// (0x0003fa2b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x0004e78c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x0004e78c) list_double_large_graphic_pane_vc_t

0x14f4,	// (0x0004021b) list_double_heading_pane_vc_g1_ParamLimits

0x14f4,	// (0x0004021b) list_double_heading_pane_vc_g1

0x1500,	// (0x00040227) list_double_heading_pane_vc_g2_ParamLimits

0x1500,	// (0x00040227) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2f9) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2f9) list_double_heading_pane_vc_g

0x0d26,	// (0x0003fa4d) list_double_heading_pane_vc_t1_ParamLimits

0x0d26,	// (0x0003fa4d) list_double_heading_pane_vc_t1

0x09d7,	// (0x0003f6fe) list_double_heading_pane_vc_t2_ParamLimits

0x09d7,	// (0x0003f6fe) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0004e791) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0004e791) list_double_heading_pane_vc_t

0x0d3a,	// (0x0003fa61) list_double_graphic_pane_vc_g1_ParamLimits

0x0d3a,	// (0x0003fa61) list_double_graphic_pane_vc_g1

0x0d46,	// (0x0003fa6d) list_double_graphic_pane_vc_g2_ParamLimits

0x0d46,	// (0x0003fa6d) list_double_graphic_pane_vc_g2

0x14f4,	// (0x0004021b) list_double_graphic_pane_vc_g3_ParamLimits

0x14f4,	// (0x0004021b) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x0004e796) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0004e796) list_double_graphic_pane_vc_g

0x0d57,	// (0x0003fa7e) list_double_graphic_pane_vc_t1_ParamLimits

0x0d57,	// (0x0003fa7e) list_double_graphic_pane_vc_t1

0x0d75,	// (0x0003fa9c) list_double_graphic_pane_vc_t2_ParamLimits

0x0d75,	// (0x0003fa9c) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0004e79f) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0004e79f) list_double_graphic_pane_vc_t

0x109a,	// (0x0003fdc1) aid_size_cell_fastswap

0xbd92,	// (0x0004aab9) aid_size_cell_touch_ParamLimits

0xbd92,	// (0x0004aab9) aid_size_cell_touch

0x12fd,	// (0x00040024) popup_fast_swap_wide_window_ParamLimits

0x12fd,	// (0x00040024) popup_fast_swap_wide_window

0xbf42,	// (0x0004ac69) touch_pane_ParamLimits

0xbf42,	// (0x0004ac69) touch_pane

0x40ef,	// (0x00042e16) button_value_adjust_pane_cp2

0x0673,	// (0x0003f39a) button_value_adjust_pane_cp4

0x0695,	// (0x0003f3bc) form_field_data_pane_cp2

0xba98,	// (0x0004a7bf) form_field_data_wide_pane_cp2

0x455b,	// (0x00043282) bg_scroll_pane_ParamLimits

0x173f,	// (0x00040466) scroll_handle_pane_ParamLimits

0x1753,	// (0x0004047a) scroll_sc2_down_pane_ParamLimits

0x1753,	// (0x0004047a) scroll_sc2_down_pane

0x458c,	// (0x000432b3) scroll_sc2_up_pane_ParamLimits

0x458c,	// (0x000432b3) scroll_sc2_up_pane

0xe0f9,	// (0x0004ce20) grid_wheel_folder_pane_g1_ParamLimits

0xe0f9,	// (0x0004ce20) grid_wheel_folder_pane_g1

0x192b,	// (0x00040652) clock_nsta_pane_cp2_ParamLimits

0x192b,	// (0x00040652) clock_nsta_pane_cp2

0x508d,	// (0x00043db4) listscroll_midp_pane_ParamLimits

0xd59b,	// (0x0004c2c2) midp_canvas_pane

0x503f,	// (0x00043d66) nsta_clock_indic_pane

0x5073,	// (0x00043d9a) listscroll_form_pane_vc

0x507b,	// (0x00043da2) listscroll_set_pane_vc_ParamLimits

0x507b,	// (0x00043da2) listscroll_set_pane_vc

0xd824,	// (0x0004c54b) clock_nsta_pane

0xd84e,	// (0x0004c575) indicator_nsta_pane

0x54d5,	// (0x000441fc) bg_popup_sub_pane_cp2_ParamLimits

0x54e9,	// (0x00044210) find_pane_cp2_ParamLimits

0x54e9,	// (0x00044210) find_pane_cp2

0x54ff,	// (0x00044226) grid_toobar_pane_ParamLimits

0x55df,	// (0x00044306) list_form_gen_pane_vc_ParamLimits

0x55df,	// (0x00044306) list_form_gen_pane_vc

0x55f5,	// (0x0004431c) scroll_pane_cp8_vc_ParamLimits

0x55f5,	// (0x0004431c) scroll_pane_cp8_vc

0x5671,	// (0x00044398) data_form_wide_pane_vc_ParamLimits

0x5671,	// (0x00044398) data_form_wide_pane_vc

0x567d,	// (0x000443a4) form_field_data_wide_pane_vc_g1

0x5685,	// (0x000443ac) form_field_data_wide_pane_vc_t1_ParamLimits

0x5685,	// (0x000443ac) form_field_data_wide_pane_vc_t1

0x4103,	// (0x00042e2a) input_focus_pane_cp6_vc_ParamLimits

0x4103,	// (0x00042e2a) input_focus_pane_cp6_vc

0xdbd4,	// (0x0004c8fb) list_midp_pane_ParamLimits

0x6cab,	// (0x000459d2) scroll_pane_cp16_ParamLimits

0x6cab,	// (0x000459d2) scroll_pane_cp16

0x5a1d,	// (0x00044744) button_value_adjust_pane_ParamLimits

0x5a1d,	// (0x00044744) button_value_adjust_pane

0xdd82,	// (0x0004caa9) button_value_adjust_pane_cp6_ParamLimits

0xdd82,	// (0x0004caa9) button_value_adjust_pane_cp6

0xde98,	// (0x0004cbbf) settings_code_pane_cp_ParamLimits

0xde98,	// (0x0004cbbf) settings_code_pane_cp

0x379b,	// (0x000424c2) cell_touch_pane_g1

0x379b,	// (0x000424c2) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0004e42a) cell_touch_pane_g

0xdfe7,	// (0x0004cd0e) cell_touch_pane_cp_ParamLimits

0xdfe7,	// (0x0004cd0e) cell_touch_pane_cp

0xe003,	// (0x0004cd2a) cell_touch_pane_ParamLimits

0xe003,	// (0x0004cd2a) cell_touch_pane

0x379b,	// (0x000424c2) scroll_sc2_down_pane_g1

0x379b,	// (0x000424c2) scroll_sc2_up_pane_g1

0x37a5,	// (0x000424cc) bg_set_opt_pane_cp4_vc

0x7039,	// (0x00045d60) list_set_graphic_pane_vc_g1_ParamLimits

0x7039,	// (0x00045d60) list_set_graphic_pane_vc_g1

0x52b9,	// (0x00043fe0) list_set_graphic_pane_vc_g2_ParamLimits

0x52b9,	// (0x00043fe0) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0004e71a) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0004e71a) list_set_graphic_pane_vc_g

0x7045,	// (0x00045d6c) text_primary_small_cp13_vc_ParamLimits

0x7045,	// (0x00045d6c) text_primary_small_cp13_vc

0x705d,	// (0x00045d84) list_set_graphic_pane_vc_ParamLimits

0x705d,	// (0x00045d84) list_set_graphic_pane_vc

0x37a5,	// (0x000424cc) input_focus_pane_cp2_vc

0x379b,	// (0x000424c2) setting_code_pane_vc_g1

0x38d0,	// (0x000425f7) setting_code_pane_vc_t1

0x7071,	// (0x00045d98) set_text_pane_vc_t1_ParamLimits

0x7071,	// (0x00045d98) set_text_pane_vc_t1

0x37a5,	// (0x000424cc) input_focus_pane_cp1_vc

0x708e,	// (0x00045db5) list_set_text_pane_vc

0x379b,	// (0x000424c2) setting_text_pane_vc_g1

0x37a5,	// (0x000424cc) bg_set_opt_pane_cp2_vc

0x38c7,	// (0x000425ee) setting_slider_graphic_pane_vc_g1

0x7098,	// (0x00045dbf) setting_slider_graphic_pane_vc_t1

0x70a8,	// (0x00045dcf) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0004e71f) setting_slider_graphic_pane_vc_t

0x70b8,	// (0x00045ddf) slider_set_pane_cp_vc

0x70c0,	// (0x00045de7) slider_set_pane_vc_g1

0x70c9,	// (0x00045df0) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0004e724) slider_set_pane_vc_g

0x4152,	// (0x00042e79) set_opt_bg_pane_g1_copy1

0x415a,	// (0x00042e81) set_opt_bg_pane_g2_copy1

0x70f5,	// (0x00045e1c) set_opt_bg_pane_g3_copy1

0x416a,	// (0x00042e91) set_opt_bg_pane_g4_copy1

0x4172,	// (0x00042e99) set_opt_bg_pane_g5_copy1

0x417a,	// (0x00042ea1) set_opt_bg_pane_g6_copy1

0x70fd,	// (0x00045e24) set_opt_bg_pane_g7_copy1

0x7107,	// (0x00045e2e) set_opt_bg_pane_g8_copy1

0x710f,	// (0x00045e36) set_opt_bg_pane_g9_copy1

0x37a5,	// (0x000424cc) bg_set_opt_pane_cp_vc

0x7117,	// (0x00045e3e) setting_slider_pane_vc_t1

0x7126,	// (0x00045e4d) setting_slider_pane_vc_t2

0x7136,	// (0x00045e5d) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0004e733) setting_slider_pane_vc_t

0x7146,	// (0x00045e6d) slider_set_pane_vc

0x2271,	// (0x00040f98) volume_set_pane_vc_g1

0x2672,	// (0x00041399) volume_set_pane_vc_g2

0x267b,	// (0x000413a2) volume_set_pane_vc_g3

0x2684,	// (0x000413ab) volume_set_pane_vc_g4

0x268d,	// (0x000413b4) volume_set_pane_vc_g5

0x2696,	// (0x000413bd) volume_set_pane_vc_g6

0x229e,	// (0x00040fc5) volume_set_pane_vc_g7

0x269f,	// (0x000413c6) volume_set_pane_vc_g8

0x26a8,	// (0x000413cf) volume_set_pane_vc_g9

0x26b1,	// (0x000413d8) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0004e73a) volume_set_pane_vc_g

0x714e,	// (0x00045e75) volume_set_pane_vc

0x7156,	// (0x00045e7d) button_value_adjust_pane_cp1_vc

0x7160,	// (0x00045e87) list_highlight_pane_cp2_vc

0x7169,	// (0x00045e90) list_set_pane_vc_ParamLimits

0x7169,	// (0x00045e90) list_set_pane_vc

0x71c7,	// (0x00045eee) main_pane_set_vc_t1_ParamLimits

0x71c7,	// (0x00045eee) main_pane_set_vc_t1

0x71dc,	// (0x00045f03) main_pane_set_vc_t2_ParamLimits

0x71dc,	// (0x00045f03) main_pane_set_vc_t2

0x71ee,	// (0x00045f15) main_pane_set_vc_t3_ParamLimits

0x71ee,	// (0x00045f15) main_pane_set_vc_t3

0x7200,	// (0x00045f27) main_pane_set_vc_t4_ParamLimits

0x7200,	// (0x00045f27) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0004e74f) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0004e74f) main_pane_set_vc_t

0x7212,	// (0x00045f39) setting_code_pane_vc_ParamLimits

0x7212,	// (0x00045f39) setting_code_pane_vc

0x7221,	// (0x00045f48) setting_slider_graphic_pane_vc

0x7221,	// (0x00045f48) setting_slider_pane_vc

0x7221,	// (0x00045f48) setting_text_pane_vc

0x7221,	// (0x00045f48) setting_volume_pane_vc

0x7229,	// (0x00045f50) scroll_pane_cp121_vc

0x40dd,	// (0x00042e04) set_content_pane_vc

0x7231,	// (0x00045f58) button_value_adjust_pane_g1

0x723a,	// (0x00045f61) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0004e7a4) button_value_adjust_pane_g

0x7243,	// (0x00045f6a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7243,	// (0x00045f6a) form_field_slider_wide_pane_vc_t1

0x7257,	// (0x00045f7e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7257,	// (0x00045f7e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0004e7a9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0004e7a9) form_field_slider_wide_pane_vc_t

0x3b00,	// (0x00042827) input_focus_pane_cp10_vc_ParamLimits

0x3b00,	// (0x00042827) input_focus_pane_cp10_vc

0x7283,	// (0x00045faa) slider_cont_pane_cp1_vc_ParamLimits

0x7283,	// (0x00045faa) slider_cont_pane_cp1_vc

0x7293,	// (0x00045fba) slider_form_pane_g1_cp2

0x70c9,	// (0x00045df0) slider_form_pane_g2_cp2

0x72c0,	// (0x00045fe7) form_field_slider_pane_vc_t3

0x72ce,	// (0x00045ff5) form_field_slider_pane_vc_t4

0x72dc,	// (0x00046003) slider_form_pane_vc_ParamLimits

0x72dc,	// (0x00046003) slider_form_pane_vc

0x72e9,	// (0x00046010) form_field_slider_pane_vc_t1_ParamLimits

0x72e9,	// (0x00046010) form_field_slider_pane_vc_t1

0x7257,	// (0x00045f7e) form_field_slider_pane_vc_t2_ParamLimits

0x7257,	// (0x00045f7e) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0004e7bb) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0004e7bb) form_field_slider_pane_vc_t

0x3b00,	// (0x00042827) input_focus_pane_cp9_vc_ParamLimits

0x3b00,	// (0x00042827) input_focus_pane_cp9_vc

0x7305,	// (0x0004602c) slider_cont_pane_vc_ParamLimits

0x7305,	// (0x0004602c) slider_cont_pane_vc

0x7317,	// (0x0004603e) list_form_graphic_pane_cp_vc_ParamLimits

0x7317,	// (0x0004603e) list_form_graphic_pane_cp_vc

0x567d,	// (0x000443a4) form_field_popup_wide_pane_vc_g1

0x732c,	// (0x00046053) form_field_popup_wide_pane_vc_t1_ParamLimits

0x732c,	// (0x00046053) form_field_popup_wide_pane_vc_t1

0x4103,	// (0x00042e2a) input_focus_pane_cp8_vc_ParamLimits

0x4103,	// (0x00042e2a) input_focus_pane_cp8_vc

0x7371,	// (0x00046098) list_form_wide_pane_vc_ParamLimits

0x7371,	// (0x00046098) list_form_wide_pane_vc

0x737d,	// (0x000460a4) list_form_graphic_pane_vc_g1

0x7385,	// (0x000460ac) list_form_graphic_pane_vc_t1_ParamLimits

0x7385,	// (0x000460ac) list_form_graphic_pane_vc_t1

0x3885,	// (0x000425ac) list_highlight_pane_cp5_vc_ParamLimits

0x3885,	// (0x000425ac) list_highlight_pane_cp5_vc

0x73a1,	// (0x000460c8) list_form_graphic_pane_vc_ParamLimits

0x73a1,	// (0x000460c8) list_form_graphic_pane_vc

0x567d,	// (0x000443a4) form_field_popup_pane_vc_g1

0x73b7,	// (0x000460de) form_field_popup_pane_vc_t1_ParamLimits

0x73b7,	// (0x000460de) form_field_popup_pane_vc_t1

0x4103,	// (0x00042e2a) input_focus_pane_cp7_vc_ParamLimits

0x4103,	// (0x00042e2a) input_focus_pane_cp7_vc

0x73ce,	// (0x000460f5) list_form_pane_vc_ParamLimits

0x73ce,	// (0x000460f5) list_form_pane_vc

0x73da,	// (0x00046101) data_form_pane_vc_t1_ParamLimits

0x73da,	// (0x00046101) data_form_pane_vc_t1

0x4152,	// (0x00042e79) input_focus_pane_vc_g1

0x415a,	// (0x00042e81) input_focus_pane_vc_g2

0x4162,	// (0x00042e89) input_focus_pane_vc_g3

0x416a,	// (0x00042e91) input_focus_pane_vc_g4

0x4172,	// (0x00042e99) input_focus_pane_vc_g5

0x417a,	// (0x00042ea1) input_focus_pane_vc_g6

0x4182,	// (0x00042ea9) input_focus_pane_vc_g7

0x418a,	// (0x00042eb1) input_focus_pane_vc_g8

0x4192,	// (0x00042eb9) input_focus_pane_vc_g9

0x379b,	// (0x000424c2) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0004e3b3) input_focus_pane_vc_g

0x5671,	// (0x00044398) data_form_pane_vc_ParamLimits

0x5671,	// (0x00044398) data_form_pane_vc

0x567d,	// (0x000443a4) form_field_data_pane_vc_g1

0x73f5,	// (0x0004611c) form_field_data_pane_vc_t1_ParamLimits

0x73f5,	// (0x0004611c) form_field_data_pane_vc_t1

0x4103,	// (0x00042e2a) input_focus_pane_vc_ParamLimits

0x4103,	// (0x00042e2a) input_focus_pane_vc

0x740f,	// (0x00046136) button_value_adjust_pane_cp3_vc

0x7417,	// (0x0004613e) button_value_adjust_pane_cp5_vc

0x741f,	// (0x00046146) form_field_data_pane_vc_ParamLimits

0x741f,	// (0x00046146) form_field_data_pane_vc

0x7436,	// (0x0004615d) form_field_data_pane_vc_cp2

0x743e,	// (0x00046165) form_field_data_wide_pane_vc_ParamLimits

0x743e,	// (0x00046165) form_field_data_wide_pane_vc

0x7454,	// (0x0004617b) form_field_data_wide_pane_vc_cp2

0x745c,	// (0x00046183) form_field_popup_pane_vc_ParamLimits

0x745c,	// (0x00046183) form_field_popup_pane_vc

0x7473,	// (0x0004619a) form_field_popup_wide_pane_vc_ParamLimits

0x7473,	// (0x0004619a) form_field_popup_wide_pane_vc

0x7489,	// (0x000461b0) form_field_slider_pane_vc_ParamLimits

0x7489,	// (0x000461b0) form_field_slider_pane_vc

0x749c,	// (0x000461c3) form_field_slider_wide_pane_vc_ParamLimits

0x749c,	// (0x000461c3) form_field_slider_wide_pane_vc

0xe021,	// (0x0004cd48) grid_touch_1_pane_ParamLimits

0xe021,	// (0x0004cd48) grid_touch_1_pane

0xe035,	// (0x0004cd5c) grid_touch_2_pane_ParamLimits

0xe035,	// (0x0004cd5c) grid_touch_2_pane

0x756a,	// (0x00046291) touch_pane_g1_ParamLimits

0x756a,	// (0x00046291) touch_pane_g1

0x74d3,	// (0x000461fa) cell_app_pane_cp_wide_ParamLimits

0x74d3,	// (0x000461fa) cell_app_pane_cp_wide

0x74e4,	// (0x0004620b) grid_popup_fast_wide_pane_ParamLimits

0x74e4,	// (0x0004620b) grid_popup_fast_wide_pane

0x74f8,	// (0x0004621f) scroll_pane_cp19_ParamLimits

0x74f8,	// (0x0004621f) scroll_pane_cp19

0x37a5,	// (0x000424cc) bg_popup_window_pane_cp20

0x750c,	// (0x00046233) listscroll_popup_fast_wide_pane

0x42b8,	// (0x00042fdf) grid_indicator_nsta_pane

0x7514,	// (0x0004623b) clock_nsta_pane_g1

0x751d,	// (0x00046244) clock_nsta_pane_t1

0xe05f,	// (0x0004cd86) cell_indicator_nsta_pane_ParamLimits

0xe05f,	// (0x0004cd86) cell_indicator_nsta_pane

0x756a,	// (0x00046291) cell_indicator_nsta_pane_g1

0xe076,	// (0x0004cd9d) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0004e7cc) cell_indicator_nsta_pane_g

0x7585,	// (0x000462ac) clock_nsta_pane_cp

0x758d,	// (0x000462b4) indicator_nsta_pane_cp

0x7595,	// (0x000462bc) nsta_clock_indic_pane_g1

0x394e,	// (0x00042675) grid_indicator_pane

0x4681,	// (0x000433a8) scroll_pane_cp29

0x187a,	// (0x000405a1) indicator_nsta_pane_cp2_ParamLimits

0x187a,	// (0x000405a1) indicator_nsta_pane_cp2

0x3885,	// (0x000425ac) main_apps_wheel_pane

0x58a8,	// (0x000445cf) form_midp_field_text_pane_ParamLimits

0x59ef,	// (0x00044716) scroll_bar_cp050_ParamLimits

0x75f6,	// (0x0004631d) cell_indicator_pane_ParamLimits

0x75f6,	// (0x0004631d) cell_indicator_pane

0x7611,	// (0x00046338) cell_indicator_pane_g1

0xe083,	// (0x0004cdaa) grid_wheel_folder_pane_ParamLimits

0xe083,	// (0x0004cdaa) grid_wheel_folder_pane

0xe091,	// (0x0004cdb8) list_wheel_apps_pane_ParamLimits

0xe091,	// (0x0004cdb8) list_wheel_apps_pane

0xe09f,	// (0x0004cdc6) main_apps_wheel_pane_g1_ParamLimits

0xe09f,	// (0x0004cdc6) main_apps_wheel_pane_g1

0xe0ab,	// (0x0004cdd2) main_apps_wheel_pane_g2_ParamLimits

0xe0ab,	// (0x0004cdd2) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0004e7e8) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0004e7e8) main_apps_wheel_pane_g

0xe0b9,	// (0x0004cde0) main_apps_wheel_pane_t1_ParamLimits

0xe0b9,	// (0x0004cde0) main_apps_wheel_pane_t1

0xe0cd,	// (0x0004cdf4) list_wheel_apps_pane_g1

0xe0d5,	// (0x0004cdfc) list_wheel_apps_pane_g2

0xe0dd,	// (0x0004ce04) list_wheel_apps_pane_g3

0xe0e5,	// (0x0004ce0c) list_wheel_apps_pane_g4

0xe0ef,	// (0x0004ce16) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0004e7ed) list_wheel_apps_pane_g

0x4bd3,	// (0x000438fa) navi_icon_text_pane

0xd718,	// (0x0004c43f) aid_fill_nsta

0x76d8,	// (0x000463ff) navi_icon_text_pane_g1

0x76e4,	// (0x0004640b) navi_icon_text_pane_t1

0xd57a,	// (0x0004c2a1) list_set_graphic_pane_t1_ParamLimits

0xd57a,	// (0x0004c2a1) list_set_graphic_pane_t1

0x6141,	// (0x00044e68) popup_midp_note_alarm_window_t6_ParamLimits

0x6141,	// (0x00044e68) popup_midp_note_alarm_window_t6

0x6153,	// (0x00044e7a) popup_midp_note_alarm_window_t7_ParamLimits

0x6153,	// (0x00044e7a) popup_midp_note_alarm_window_t7

0x6165,	// (0x00044e8c) popup_midp_note_alarm_window_t8_ParamLimits

0x6165,	// (0x00044e8c) popup_midp_note_alarm_window_t8

0x6177,	// (0x00044e9e) popup_midp_note_alarm_window_t9_ParamLimits

0x6177,	// (0x00044e9e) popup_midp_note_alarm_window_t9

0x6189,	// (0x00044eb0) popup_midp_note_alarm_window_t10_ParamLimits

0x6189,	// (0x00044eb0) popup_midp_note_alarm_window_t10

0x619b,	// (0x00044ec2) popup_midp_note_alarm_window_t11_ParamLimits

0x619b,	// (0x00044ec2) popup_midp_note_alarm_window_t11

0x61ad,	// (0x00044ed4) scroll_pane_cp17_ParamLimits

0x61ad,	// (0x00044ed4) scroll_pane_cp17

0x2271,	// (0x00040f98) volume_small_pane_cp_g1

0x2706,	// (0x0004142d) volume_small_pane_cp_g2

0x270f,	// (0x00041436) volume_small_pane_cp_g3

0x2283,	// (0x00040faa) volume_small_pane_cp_g4

0x2718,	// (0x0004143f) volume_small_pane_cp_g5

0x268d,	// (0x000413b4) volume_small_pane_cp_g6

0x2295,	// (0x00040fbc) volume_small_pane_cp_g7

0x2721,	// (0x00041448) volume_small_pane_cp_g8

0x272a,	// (0x00041451) volume_small_pane_cp_g9

0x22a7,	// (0x00040fce) volume_small_pane_cp_g10

0x4e28,	// (0x00043b4f) midp_ticker_pane_g1_ParamLimits

0x4e34,	// (0x00043b5b) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0004e47f) midp_ticker_pane_g_ParamLimits

0x4e40,	// (0x00043b67) midp_ticker_pane_t1_ParamLimits

0xd73c,	// (0x0004c463) aid_fill_nsta_2

0x59db,	// (0x00044702) list_form2_midp_pane

0x6af9,	// (0x00045820) midp_editing_number_pane_ParamLimits

0x6b08,	// (0x0004582f) midp_ticker_pane_ParamLimits

0x76f6,	// (0x0004641d) form2_midp_field_pane

0x771a,	// (0x00046441) scroll_pane_cp51

0x773a,	// (0x00046461) form2_midp_button_pane_ParamLimits

0x773a,	// (0x00046461) form2_midp_button_pane

0x774c,	// (0x00046473) form2_midp_content_pane_ParamLimits

0x774c,	// (0x00046473) form2_midp_content_pane

0x7766,	// (0x0004648d) form2_midp_field_choice_group_pane

0x776e,	// (0x00046495) form2_midp_field_pane_g1

0x7776,	// (0x0004649d) form2_midp_field_pane_g2

0x777e,	// (0x000464a5) form2_midp_field_pane_g3

0x7786,	// (0x000464ad) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0004e812) form2_midp_field_pane_g

0x778e,	// (0x000464b5) form2_midp_gauge_slider_pane

0x7796,	// (0x000464bd) form2_midp_gauge_wait_pane

0x779e,	// (0x000464c5) form2_midp_image_pane_ParamLimits

0x779e,	// (0x000464c5) form2_midp_image_pane

0x77b9,	// (0x000464e0) form2_midp_label_pane_ParamLimits

0x77b9,	// (0x000464e0) form2_midp_label_pane

0xe122,	// (0x0004ce49) form2_midp_label_pane_cp_ParamLimits

0xe122,	// (0x0004ce49) form2_midp_label_pane_cp

0x77f3,	// (0x0004651a) form2_midp_string_pane_ParamLimits

0x77f3,	// (0x0004651a) form2_midp_string_pane

0xbc35,	// (0x0004a95c) form2_midp_text_pane_ParamLimits

0xbc35,	// (0x0004a95c) form2_midp_text_pane

0x7805,	// (0x0004652c) form2_midp_time_pane

0x7815,	// (0x0004653c) input_focus_pane_cp51_ParamLimits

0x7815,	// (0x0004653c) input_focus_pane_cp51

0x782d,	// (0x00046554) form2_midp_label_pane_t1_ParamLimits

0x782d,	// (0x00046554) form2_midp_label_pane_t1

0xbc4e,	// (0x0004a975) form2_mdip_text_pane_t1_ParamLimits

0xbc4e,	// (0x0004a975) form2_mdip_text_pane_t1

0x0dd6,	// (0x0003fafd) form2_midp_time_pane_t1

0x7875,	// (0x0004659c) form2_midp_gauge_slider_pane_t1

0xe143,	// (0x0004ce6a) form2_midp_gauge_slider_pane_t2

0xe157,	// (0x0004ce7e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0004e81b) form2_midp_gauge_slider_pane_t

0x78ab,	// (0x000465d2) form2_midp_slider_pane

0x78b7,	// (0x000465de) form2_midp_gauge_wait_pane_t1

0x78c5,	// (0x000465ec) form2_midp_wait_pane_ParamLimits

0x78c5,	// (0x000465ec) form2_midp_wait_pane

0xe16b,	// (0x0004ce92) list_single_2graphic_pane_cp4_ParamLimits

0xe16b,	// (0x0004ce92) list_single_2graphic_pane_cp4

0xdb5a,	// (0x0004c881) list_single_midp_graphic_pane_cp_ParamLimits

0xdb5a,	// (0x0004c881) list_single_midp_graphic_pane_cp

0x37a5,	// (0x000424cc) list_highlight_pane_cp20

0x791f,	// (0x00046646) list_single_2graphic_pane_g1_cp4

0x6f1d,	// (0x00045c44) list_single_2graphic_pane_g2_cp4

0x7927,	// (0x0004664e) list_single_2graphic_pane_t1_cp4

0x3885,	// (0x000425ac) list_highlight_pane_cp21

0x7936,	// (0x0004665d) list_single_midp_graphic_pane_g4_cp

0x7945,	// (0x0004666c) list_single_midp_graphic_pane_t1_cp

0xe181,	// (0x0004cea8) form2_mdip_string_pane_t1_ParamLimits

0xe181,	// (0x0004cea8) form2_mdip_string_pane_t1

0x37a5,	// (0x000424cc) bg_wml_button_pane_cp2

0x379b,	// (0x000424c2) form2_midp_image_pane_g1

0x1562,	// (0x00040289) list_double_large_graphic_pane_g5_ParamLimits

0x1562,	// (0x00040289) list_double_large_graphic_pane_g5

0x508d,	// (0x00043db4) midp_form_pane_ParamLimits

0x3885,	// (0x000425ac) main_apps_wheel_pane_ParamLimits

0xc50f,	// (0x0004b236) popup_preview_window_ParamLimits

0xc50f,	// (0x0004b236) popup_preview_window

0x20f0,	// (0x00040e17) popup_touch_info_window_ParamLimits

0x20f0,	// (0x00040e17) popup_touch_info_window

0x210e,	// (0x00040e35) popup_touch_menu_window_ParamLimits

0x210e,	// (0x00040e35) popup_touch_menu_window

0x3791,	// (0x000424b8) bg_popup_sub_pane_cp6

0x7a7d,	// (0x000467a4) list_touch_menu_pane

0x7a85,	// (0x000467ac) list_single_touch_menu_pane_ParamLimits

0x7a85,	// (0x000467ac) list_single_touch_menu_pane

0x7a99,	// (0x000467c0) list_single_touch_menu_pane_t1

0x3885,	// (0x000425ac) bg_popup_sub_pane_cp7_ParamLimits

0x3885,	// (0x000425ac) bg_popup_sub_pane_cp7

0x7aa7,	// (0x000467ce) heading_sub_pane

0x7aaf,	// (0x000467d6) list_touch_info_pane_ParamLimits

0x7aaf,	// (0x000467d6) list_touch_info_pane

0x7abe,	// (0x000467e5) list_single_touch_info_pane_ParamLimits

0x7abe,	// (0x000467e5) list_single_touch_info_pane

0x7ad0,	// (0x000467f7) list_single_touch_info_pane_t1

0x7ade,	// (0x00046805) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0004e829) list_single_touch_info_pane_t

0x4d53,	// (0x00043a7a) bg_popup_heading_pane_cp

0x7aec,	// (0x00046813) heading_sub_pane_t1

0x560b,	// (0x00044332) bg_popup_preview_window_pane_cp_ParamLimits

0x560b,	// (0x00044332) bg_popup_preview_window_pane_cp

0x7aa7,	// (0x000467ce) heading_preview_pane

0x7aaf,	// (0x000467d6) list_preview_pane_ParamLimits

0x7aaf,	// (0x000467d6) list_preview_pane

0x7afa,	// (0x00046821) popup_preview_window_g1

0x7abe,	// (0x000467e5) list_single_preview_pane_ParamLimits

0x7abe,	// (0x000467e5) list_single_preview_pane

0x7b02,	// (0x00046829) list_single_preview_pane_g1

0x7b0a,	// (0x00046831) list_single_preview_pane_t1

0x7ad0,	// (0x000467f7) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0004e82e) list_single_preview_pane_t

0x7b18,	// (0x0004683f) bg_popup_heading_pane_cp2_ParamLimits

0x7b18,	// (0x0004683f) bg_popup_heading_pane_cp2

0x7b2e,	// (0x00046855) heading_preview_pane_g1

0x7b36,	// (0x0004685d) heading_preview_pane_t1_ParamLimits

0x7b36,	// (0x0004685d) heading_preview_pane_t1

0x3971,	// (0x00042698) soft_indicator_pane_t1_ParamLimits

0x4052,	// (0x00042d79) scroll_pane_ParamLimits

0x457a,	// (0x000432a1) scroll_sc2_left_pane

0x4583,	// (0x000432aa) scroll_sc2_right_pane

0x45a2,	// (0x000432c9) scroll_bg_pane_g1_ParamLimits

0x45b7,	// (0x000432de) scroll_bg_pane_g2_ParamLimits

0x45cf,	// (0x000432f6) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0004e40a) scroll_bg_pane_g_ParamLimits

0x45a2,	// (0x000432c9) scroll_handle_pane_g1_ParamLimits

0x45f1,	// (0x00043318) scroll_handle_pane_g2_ParamLimits

0x45cf,	// (0x000432f6) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0004e411) scroll_handle_pane_g_ParamLimits

0x1bc0,	// (0x000408e7) popup_choice_list_window_ParamLimits

0x1bc0,	// (0x000408e7) popup_choice_list_window

0x54e1,	// (0x00044208) choice_list_pane

0x5563,	// (0x0004428a) cell_toolbar_pane_t1

0x558b,	// (0x000442b2) toolbar_button_pane_ParamLimits

0x6667,	// (0x0004538e) ai_gene_pane_1_t2_ParamLimits

0x6667,	// (0x0004538e) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0004e634) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0004e634) ai_gene_pane_1_t

0x7b53,	// (0x0004687a) scroll_sc2_left_pane_g1

0x7b53,	// (0x0004687a) scroll_sc2_right_pane_g1

0x508d,	// (0x00043db4) bg_popup_sub_pane_cp10

0x7b5d,	// (0x00046884) list_choice_list_pane

0x7b76,	// (0x0004689d) list_single_choice_list_pane_ParamLimits

0x7b76,	// (0x0004689d) list_single_choice_list_pane

0x7b89,	// (0x000468b0) list_single_choice_list_pane_g1

0x4289,	// (0x00042fb0) list_single_choice_list_pane_t1_ParamLimits

0x4289,	// (0x00042fb0) list_single_choice_list_pane_t1

0x7b91,	// (0x000468b8) choice_list_pane_g1

0x7b99,	// (0x000468c0) choice_list_pane_t1

0x3791,	// (0x000424b8) input_focus_pane_cp11

0x445d,	// (0x00043184) title_pane_stacon_g2_ParamLimits

0x445d,	// (0x00043184) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0004e3f0) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004e3f0) title_pane_stacon_g

0x4d53,	// (0x00043a7a) cursor_press_pane

0xc1c8,	// (0x0004aeef) popup_fep_hwr_window_ParamLimits

0xc1c8,	// (0x0004aeef) popup_fep_hwr_window

0x1ce0,	// (0x00040a07) popup_fep_vkb_window_ParamLimits

0x1ce0,	// (0x00040a07) popup_fep_vkb_window

0x7ba7,	// (0x000468ce) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0004e857) fep_vkb_side_pane_g_ParamLimits

0x276c,	// (0x00041493) fep_hwr_candidate_pane_ParamLimits

0x276c,	// (0x00041493) fep_hwr_candidate_pane

0x2796,	// (0x000414bd) fep_hwr_side_pane_ParamLimits

0x2796,	// (0x000414bd) fep_hwr_side_pane

0x27b6,	// (0x000414dd) fep_hwr_top_pane_ParamLimits

0x27b6,	// (0x000414dd) fep_hwr_top_pane

0x27ce,	// (0x000414f5) fep_hwr_write_pane_ParamLimits

0x27ce,	// (0x000414f5) fep_hwr_write_pane

0xfb30,	// (0x0004e857) fep_vkb_side_pane_g

0x7baf,	// (0x000468d6) fep_hwr_top_pane_g1

0x7bc1,	// (0x000468e8) fep_hwr_top_pane_g2

0x27fa,	// (0x00041521) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0004e833) fep_hwr_top_pane_g

0x280f,	// (0x00041536) fep_hwr_top_text_pane

0x4747,	// (0x0004346e) fep_hwr_top_text_pane_g1

0x7bf7,	// (0x0004691e) fep_hwr_top_text_pane_t1

0x2905,	// (0x0004162c) fep_hwr_candidate_pane_g1

0x7e3a,	// (0x00046b61) fep_vkb_keypad_pane_g3_ParamLimits

0x7e3a,	// (0x00046b61) fep_vkb_keypad_pane_g3

0x7e62,	// (0x00046b89) fep_vkb_keypad_pane_g4_ParamLimits

0x7e62,	// (0x00046b89) fep_vkb_keypad_pane_g4

0x7ed1,	// (0x00046bf8) fep_vkb_bottom_pane_g2_ParamLimits

0x7ed1,	// (0x00046bf8) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0004e85e) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0004e85e) fep_vkb_bottom_pane_g

0x7b53,	// (0x0004687a) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0004e868) cell_vkb_side_pane_g

0x7f5c,	// (0x00046c83) cell_vkb_side_pane_t1

0x7f6a,	// (0x00046c91) cell_vkb_side_pane_t1_copy1

0x7b53,	// (0x0004687a) bg_fep_vkb_candidate_pane_g2

0x8096,	// (0x00046dbd) cell_vkb_candidate_pane_ParamLimits

0x7c05,	// (0x0004692c) aid_size_cell_vkb_ParamLimits

0x7c05,	// (0x0004692c) aid_size_cell_vkb

0x8096,	// (0x00046dbd) cell_vkb_candidate_pane

0x291f,	// (0x00041646) bg_popup_fep_shadow_pane_g1

0xe239,	// (0x0004cf60) fep_vkb_bottom_pane_ParamLimits

0xe239,	// (0x0004cf60) fep_vkb_bottom_pane

0x7cc7,	// (0x000469ee) fep_vkb_candidate_pane_ParamLimits

0x7cc7,	// (0x000469ee) fep_vkb_candidate_pane

0xe25e,	// (0x0004cf85) fep_vkb_keypad_pane_ParamLimits

0xe25e,	// (0x0004cf85) fep_vkb_keypad_pane

0xe293,	// (0x0004cfba) fep_vkb_side_pane_ParamLimits

0xe293,	// (0x0004cfba) fep_vkb_side_pane

0xe2cf,	// (0x0004cff6) fep_vkb_top_pane_ParamLimits

0xe2cf,	// (0x0004cff6) fep_vkb_top_pane

0x7d93,	// (0x00046aba) fep_vkb_top_pane_g1_ParamLimits

0x7d93,	// (0x00046aba) fep_vkb_top_pane_g1

0x7da2,	// (0x00046ac9) fep_vkb_top_pane_g2_ParamLimits

0x7da2,	// (0x00046ac9) fep_vkb_top_pane_g2

0x7db1,	// (0x00046ad8) fep_vkb_top_pane_g3_ParamLimits

0x7db1,	// (0x00046ad8) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0004e84e) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0004e84e) fep_vkb_top_pane_g

0x7dcf,	// (0x00046af6) fep_vkb_top_text_pane_ParamLimits

0x7dcf,	// (0x00046af6) fep_vkb_top_text_pane

0xe304,	// (0x0004d02b) fep_vkb_side_pane_g1_ParamLimits

0xe304,	// (0x0004d02b) fep_vkb_side_pane_g1

0x7e29,	// (0x00046b50) grid_vkb_side_pane_ParamLimits

0x7e29,	// (0x00046b50) grid_vkb_side_pane

0x2927,	// (0x0004164e) bg_popup_fep_shadow_pane_g2

0x2930,	// (0x00041657) bg_popup_fep_shadow_pane_g3

0x2938,	// (0x0004165f) bg_popup_fep_shadow_pane_g4

0x2941,	// (0x00041668) bg_popup_fep_shadow_pane_g5

0x294b,	// (0x00041672) bg_popup_fep_shadow_pane_g6

0x2953,	// (0x0004167a) bg_popup_fep_shadow_pane_g7

0x4172,	// (0x00042e99) bg_popup_fep_shadow_pane_g8

0x7e80,	// (0x00046ba7) grid_vkb_keypad_number_pane_ParamLimits

0x7e80,	// (0x00046ba7) grid_vkb_keypad_number_pane

0x7e90,	// (0x00046bb7) grid_vkb_keypad_pane_ParamLimits

0x7e90,	// (0x00046bb7) grid_vkb_keypad_pane

0x7eb6,	// (0x00046bdd) fep_vkb_bottom_pane_g1_ParamLimits

0x7eb6,	// (0x00046bdd) fep_vkb_bottom_pane_g1

0x7edf,	// (0x00046c06) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7edf,	// (0x00046c06) grid_vkb_keypad_bottom_left_pane

0x7ef4,	// (0x00046c1b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ef4,	// (0x00046c1b) grid_vkb_keypad_bottom_right_pane

0x7f09,	// (0x00046c30) fep_vkb_top_text_pane_g1

0xe34b,	// (0x0004d072) fep_vkb_top_text_pane_t1

0xe35d,	// (0x0004d084) cell_vkb_side_pane_ParamLimits

0xe35d,	// (0x0004d084) cell_vkb_side_pane

0x7b53,	// (0x0004687a) cell_vkb_side_pane_g1

0x7f78,	// (0x00046c9f) cell_vkb_keypad_pane_ParamLimits

0x7f78,	// (0x00046c9f) cell_vkb_keypad_pane

0x7fed,	// (0x00046d14) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0004e87b) bg_popup_fep_shadow_pane_g

0x7b53,	// (0x0004687a) cell_hwr_side_pane_g1

0x7b53,	// (0x0004687a) cell_hwr_side_pane_g2

0x7ff7,	// (0x00046d1e) cell_vkb_keypad_pane_t1

0xe373,	// (0x0004d09a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe373,	// (0x0004d09a) cell_vkb_keypad_bottom_left_pane

0xe388,	// (0x0004d0af) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe388,	// (0x0004d0af) cell_vkb_keypad_bottom_right_pane

0x7b53,	// (0x0004687a) cell_vkb_keypad_bottom_left_pane_g1

0x7b53,	// (0x0004687a) cell_vkb_keypad_bottom_right_pane_g1

0x805b,	// (0x00046d82) cell_vkb_keypad_number_pane_ParamLimits

0x805b,	// (0x00046d82) cell_vkb_keypad_number_pane

0x807a,	// (0x00046da1) cell_vkb_keypad_number_pane_g1

0x8084,	// (0x00046dab) cell_vkb_keypad_number_pane_g2

0x808d,	// (0x00046db4) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0004e86d) cell_vkb_keypad_number_pane_g

0x7ff7,	// (0x00046d1e) cell_vkb_keypad_number_pane_t1

0x80b1,	// (0x00046dd8) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x0004e868) cell_hwr_side_pane_g

0x80ca,	// (0x00046df1) cell_hwr_side_pane_t1

0x2965,	// (0x0004168c) cell_hwr_side_pane_t1_copy1

0x7dc1,	// (0x00046ae8) cell_hwr_candidate_pane_g1

0x2973,	// (0x0004169a) cell_hwr_candidate_pane_t1

0x7b53,	// (0x0004687a) cell_vkb_candidate_pane_g2

0x8150,	// (0x00046e77) cell_vkb_candidate_pane_t1

0x2733,	// (0x0004145a) bg_popup_fep_shadow_pane_ParamLimits

0x2733,	// (0x0004145a) bg_popup_fep_shadow_pane

0xe1ff,	// (0x0004cf26) bg_fep_hwr_top_pane_g4

0x7bd3,	// (0x000468fa) bg_hwr_side_pane_g1_ParamLimits

0x7bd3,	// (0x000468fa) bg_hwr_side_pane_g1

0xc96a,	// (0x0004b691) cell_hwr_side_pane_ParamLimits

0xc96a,	// (0x0004b691) cell_hwr_side_pane

0x2886,	// (0x000415ad) fep_hwr_write_pane_g1_ParamLimits

0x2886,	// (0x000415ad) fep_hwr_write_pane_g1

0x2893,	// (0x000415ba) fep_hwr_write_pane_g2_ParamLimits

0x2893,	// (0x000415ba) fep_hwr_write_pane_g2

0x28a0,	// (0x000415c7) fep_hwr_write_pane_g3_ParamLimits

0x28a0,	// (0x000415c7) fep_hwr_write_pane_g3

0xc98a,	// (0x0004b6b1) fep_hwr_write_pane_g4_ParamLimits

0xc98a,	// (0x0004b6b1) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0004e83a) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0004e83a) fep_hwr_write_pane_g

0xe1ff,	// (0x0004cf26) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe1ff,	// (0x0004cf26) bg_fep_hwr_candidate_pane_g2

0x28c3,	// (0x000415ea) cell_hwr_candidate_pane_ParamLimits

0x28c3,	// (0x000415ea) cell_hwr_candidate_pane

0x2905,	// (0x0004162c) fep_hwr_candidate_pane_g1_ParamLimits

0x7c33,	// (0x0004695a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7c33,	// (0x0004695a) bg_popup_fep_shadow_pane_cp2

0x7dc1,	// (0x00046ae8) fep_vkb_top_pane_g4_ParamLimits

0x7dc1,	// (0x00046ae8) fep_vkb_top_pane_g4

0x7e07,	// (0x00046b2e) fep_vkb_side_pane_g2_ParamLimits

0x7e07,	// (0x00046b2e) fep_vkb_side_pane_g2

0xb9a6,	// (0x0004a6cd) list_setting_pane_t4_ParamLimits

0xb9a6,	// (0x0004a6cd) list_setting_pane_t4

0xba40,	// (0x0004a767) list_setting_number_pane_t5_ParamLimits

0xba40,	// (0x0004a767) list_setting_number_pane_t5

0xd48a,	// (0x0004c1b1) list_double_heading_pane_cp2_ParamLimits

0xd48a,	// (0x0004c1b1) list_double_heading_pane_cp2

0x409e,	// (0x00042dc5) list_double_heading_pane_g1_cp2_ParamLimits

0x409e,	// (0x00042dc5) list_double_heading_pane_g1_cp2

0x4111,	// (0x00042e38) list_double_heading_pane_g2_cp2_ParamLimits

0x4111,	// (0x00042e38) list_double_heading_pane_g2_cp2

0x815e,	// (0x00046e85) list_double_heading_pane_t1_cp2_ParamLimits

0x815e,	// (0x00046e85) list_double_heading_pane_t1_cp2

0x8174,	// (0x00046e9b) list_double_heading_pane_t2_cp2_ParamLimits

0x8174,	// (0x00046e9b) list_double_heading_pane_t2_cp2

0x3779,	// (0x000424a0) aid_value_unit2

0x1349,	// (0x00040070) popup_preview_fixed_window

0x3b0e,	// (0x00042835) bg_popup_preview_window_pane_cp02

0x8186,	// (0x00046ead) list_preview_fixed_pane

0x81cc,	// (0x00046ef3) list_empty_pane_fp_ParamLimits

0x81cc,	// (0x00046ef3) list_empty_pane_fp

0x81cc,	// (0x00046ef3) list_single_cale_day_pane_fp_ParamLimits

0x81cc,	// (0x00046ef3) list_single_cale_day_pane_fp

0x81cc,	// (0x00046ef3) list_single_graphic_heading_pane_fp_ParamLimits

0x81cc,	// (0x00046ef3) list_single_graphic_heading_pane_fp

0x81cc,	// (0x00046ef3) list_single_graphic_pane_fp_ParamLimits

0x81cc,	// (0x00046ef3) list_single_graphic_pane_fp

0x81cc,	// (0x00046ef3) list_single_heading_pane_fp_ParamLimits

0x81cc,	// (0x00046ef3) list_single_heading_pane_fp

0x81cc,	// (0x00046ef3) list_single_pane_fp_ParamLimits

0x81cc,	// (0x00046ef3) list_single_pane_fp

0x81e2,	// (0x00046f09) list_single_pane_fp_g1_ParamLimits

0x81e2,	// (0x00046f09) list_single_pane_fp_g1

0x409e,	// (0x00042dc5) list_single_pane_fp_g2_ParamLimits

0x409e,	// (0x00042dc5) list_single_pane_fp_g2

0x4111,	// (0x00042e38) list_single_pane_fp_g3_ParamLimits

0x4111,	// (0x00042e38) list_single_pane_fp_g3

0x81ee,	// (0x00046f15) list_single_pane_fp_g4_ParamLimits

0x81ee,	// (0x00046f15) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0004e89c) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0004e89c) list_single_pane_fp_g

0x0de9,	// (0x0003fb10) list_single_pane_fp_t1_ParamLimits

0x0de9,	// (0x0003fb10) list_single_pane_fp_t1

0x0e00,	// (0x0003fb27) list_single_graphic_pane_fp_g1_ParamLimits

0x0e00,	// (0x0003fb27) list_single_graphic_pane_fp_g1

0x81e2,	// (0x00046f09) list_single_graphic_pane_fp_g2_ParamLimits

0x81e2,	// (0x00046f09) list_single_graphic_pane_fp_g2

0x409e,	// (0x00042dc5) list_single_graphic_pane_fp_g3_ParamLimits

0x409e,	// (0x00042dc5) list_single_graphic_pane_fp_g3

0x4111,	// (0x00042e38) list_single_graphic_pane_fp_g4_ParamLimits

0x4111,	// (0x00042e38) list_single_graphic_pane_fp_g4

0x81ee,	// (0x00046f15) list_single_graphic_pane_fp_g5_ParamLimits

0x81ee,	// (0x00046f15) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e8a5) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e8a5) list_single_graphic_pane_fp_g

0x0e0c,	// (0x0003fb33) list_single_graphic_pane_fp_t1_ParamLimits

0x0e0c,	// (0x0003fb33) list_single_graphic_pane_fp_t1

0x0e00,	// (0x0003fb27) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0e00,	// (0x0003fb27) list_single_graphic_heading_pane_fp_g1

0x81e2,	// (0x00046f09) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x81e2,	// (0x00046f09) list_single_graphic_heading_pane_fp_g2

0x409e,	// (0x00042dc5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x409e,	// (0x00042dc5) list_single_graphic_heading_pane_fp_g3

0x4111,	// (0x00042e38) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4111,	// (0x00042e38) list_single_graphic_heading_pane_fp_g4

0x81ee,	// (0x00046f15) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x81ee,	// (0x00046f15) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e8a5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e8a5) list_single_graphic_heading_pane_fp_g

0x0e22,	// (0x0003fb49) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0e22,	// (0x0003fb49) list_single_graphic_heading_pane_fp_t1

0x0e38,	// (0x0003fb5f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0e38,	// (0x0003fb5f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0004e8b0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0004e8b0) list_single_graphic_heading_pane_fp_t

0x0e4a,	// (0x0003fb71) list_single_cale_day_pane_fp_g1_ParamLimits

0x0e4a,	// (0x0003fb71) list_single_cale_day_pane_fp_g1

0x81fa,	// (0x00046f21) list_single_cale_day_pane_fp_g2_ParamLimits

0x81fa,	// (0x00046f21) list_single_cale_day_pane_fp_g2

0x2991,	// (0x000416b8) list_single_cale_day_pane_fp_g3_ParamLimits

0x2991,	// (0x000416b8) list_single_cale_day_pane_fp_g3

0x29b9,	// (0x000416e0) list_single_cale_day_pane_fp_g4_ParamLimits

0x29b9,	// (0x000416e0) list_single_cale_day_pane_fp_g4

0x29dd,	// (0x00041704) list_single_cale_day_pane_fp_g5_ParamLimits

0x29dd,	// (0x00041704) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0004e8b5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0004e8b5) list_single_cale_day_pane_fp_g

0x0e82,	// (0x0003fba9) list_single_cale_day_pane_fp_t1_ParamLimits

0x0e82,	// (0x0003fba9) list_single_cale_day_pane_fp_t1

0x0ea8,	// (0x0003fbcf) list_single_cale_day_pane_fp_t2_ParamLimits

0x0ea8,	// (0x0003fbcf) list_single_cale_day_pane_fp_t2

0x0ec1,	// (0x0003fbe8) list_single_cale_day_pane_fp_t3_ParamLimits

0x0ec1,	// (0x0003fbe8) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0004e8c0) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0004e8c0) list_single_cale_day_pane_fp_t

0x81e2,	// (0x00046f09) list_empty_pane_fp_g1_ParamLimits

0x81e2,	// (0x00046f09) list_empty_pane_fp_g1

0x0eda,	// (0x0003fc01) list_empty_pane_fp_t1

0x0ee8,	// (0x0003fc0f) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0004e8c7) list_empty_pane_fp_t

0x81e2,	// (0x00046f09) list_single_heading_pane_fp_g1_ParamLimits

0x81e2,	// (0x00046f09) list_single_heading_pane_fp_g1

0x409e,	// (0x00042dc5) list_single_heading_pane_fp_g2_ParamLimits

0x409e,	// (0x00042dc5) list_single_heading_pane_fp_g2

0x4111,	// (0x00042e38) list_single_heading_pane_fp_g3_ParamLimits

0x4111,	// (0x00042e38) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0004e8cc) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0004e8cc) list_single_heading_pane_fp_g

0x0ef6,	// (0x0003fc1d) list_single_heading_pane_fp_t1_ParamLimits

0x0ef6,	// (0x0003fc1d) list_single_heading_pane_fp_t1

0x0f08,	// (0x0003fc2f) list_single_heading_pane_fp_t2_ParamLimits

0x0f08,	// (0x0003fc2f) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0004e8d3) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0004e8d3) list_single_heading_pane_fp_t

0x42f7,	// (0x0004301e) aid_size_cell_fast

0x3a7e,	// (0x000427a5) soft_indicator_pane_cp1_t1

0x4331,	// (0x00043058) cell_app_pane_cp2_ParamLimits

0x4331,	// (0x00043058) cell_app_pane_cp2

0x2755,	// (0x0004147c) fep_hwr_candidate_drop_down_list_pane

0xe20d,	// (0x0004cf34) fep_hwr_candidate_pane_g3_ParamLimits

0xe20d,	// (0x0004cf34) fep_hwr_candidate_pane_g3

0xe21a,	// (0x0004cf41) fep_hwr_candidate_pane_g4_ParamLimits

0xe21a,	// (0x0004cf41) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0004e847) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0004e847) fep_hwr_candidate_pane_g

0x7cb6,	// (0x000469dd) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7cb6,	// (0x000469dd) fep_vkb_candidate_drop_down_list_pane

0x80b9,	// (0x00046de0) fep_vkb_candidate_pane_g3

0x80c1,	// (0x00046de8) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0004e874) fep_vkb_candidate_pane_g

0x7dc1,	// (0x00046ae8) cell_hwr_candidate_pane_g1_ParamLimits

0x80d8,	// (0x00046dff) cell_hwr_candidate_pane_g3_ParamLimits

0x80d8,	// (0x00046dff) cell_hwr_candidate_pane_g3

0x80f9,	// (0x00046e20) cell_hwr_candidate_pane_g4_ParamLimits

0x80f9,	// (0x00046e20) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0004e88e) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0004e88e) cell_hwr_candidate_pane_g

0x811a,	// (0x00046e41) cell_vkb_candidate_pane_g3_ParamLimits

0x811a,	// (0x00046e41) cell_vkb_candidate_pane_g3

0x8135,	// (0x00046e5c) cell_vkb_candidate_pane_g4_ParamLimits

0x8135,	// (0x00046e5c) cell_vkb_candidate_pane_g4

0x8206,	// (0x00046f2d) cell_app_pane_cp2_g1_ParamLimits

0x8206,	// (0x00046f2d) cell_app_pane_cp2_g1

0x8224,	// (0x00046f4b) cell_app_pane_cp2_g2_ParamLimits

0x8224,	// (0x00046f4b) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0004e8d8) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0004e8d8) cell_app_pane_cp2_g

0x8230,	// (0x00046f57) cell_app_pane_cp2_t1_ParamLimits

0x8230,	// (0x00046f57) cell_app_pane_cp2_t1

0x4103,	// (0x00042e2a) grid_highlight_pane_cp1_ParamLimits

0x4103,	// (0x00042e2a) grid_highlight_pane_cp1

0x2a01,	// (0x00041728) cell_hwr_candidate_pane_cp1_ParamLimits

0x2a01,	// (0x00041728) cell_hwr_candidate_pane_cp1

0x7dc1,	// (0x00046ae8) fep_hwr_candidate_drop_down_list_pane_g1

0x8242,	// (0x00046f69) fep_hwr_candidate_drop_down_list_pane_g2

0x824f,	// (0x00046f76) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0004e8dd) fep_hwr_candidate_drop_down_list_pane_g

0x2a20,	// (0x00041747) fep_hwr_candidate_drop_down_list_scroll_pane

0x2a29,	// (0x00041750) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2a29,	// (0x00041750) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2a36,	// (0x0004175d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2a36,	// (0x0004175d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2a43,	// (0x0004176a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2a43,	// (0x0004176a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x811a,	// (0x00046e41) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x811a,	// (0x00046e41) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8135,	// (0x00046e5c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8135,	// (0x00046e5c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2a50,	// (0x00041777) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2a50,	// (0x00041777) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2a6b,	// (0x00041792) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2a6b,	// (0x00041792) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2a86,	// (0x000417ad) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2a86,	// (0x000417ad) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0004e8e4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0004e8e4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x825c,	// (0x00046f83) cell_vkb_candidate_pane_cp1_ParamLimits

0x825c,	// (0x00046f83) cell_vkb_candidate_pane_cp1

0x7dc1,	// (0x00046ae8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7dc1,	// (0x00046ae8) fep_vkb_candidate_drop_down_list_pane_g1

0x8242,	// (0x00046f69) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8242,	// (0x00046f69) fep_vkb_candidate_drop_down_list_pane_g2

0x824f,	// (0x00046f76) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x824f,	// (0x00046f76) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0004e8dd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x0004e8dd) fep_vkb_candidate_drop_down_list_pane_g

0x827c,	// (0x00046fa3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x827c,	// (0x00046fa3) fep_vkb_candidate_drop_down_list_scroll_pane

0x8289,	// (0x00046fb0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8289,	// (0x00046fb0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8296,	// (0x00046fbd) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8296,	// (0x00046fbd) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x82a2,	// (0x00046fc9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x82a2,	// (0x00046fc9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x80d8,	// (0x00046dff) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x80d8,	// (0x00046dff) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x80f9,	// (0x00046e20) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x80f9,	// (0x00046e20) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x82ae,	// (0x00046fd5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x82ae,	// (0x00046fd5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x82cf,	// (0x00046ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x82cf,	// (0x00046ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x82f0,	// (0x00047017) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x82f0,	// (0x00047017) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0004e8f5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0004e8f5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd001,	// (0x0004bd28) title_pane_g1_ParamLimits

0xd014,	// (0x0004bd3b) title_pane_g2_ParamLimits

0xf54e,	// (0x0004e275) title_pane_g_ParamLimits

0x4737,	// (0x0004345e) aid_call2_pane

0x473f,	// (0x00043466) aid_call_pane

0x4747,	// (0x0004346e) popup_clock_analogue_window_g1

0x4747,	// (0x0004346e) popup_clock_analogue_window_g2

0x1768,	// (0x0004048f) popup_clock_analogue_window_g3

0x1771,	// (0x00040498) popup_clock_analogue_window_g4

0x379b,	// (0x000424c2) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0004e41f) popup_clock_analogue_window_g

0x1779,	// (0x000404a0) popup_clock_analogue_window_t1

0x1787,	// (0x000404ae) clock_digital_number_pane_ParamLimits

0x1787,	// (0x000404ae) clock_digital_number_pane

0x1793,	// (0x000404ba) clock_digital_number_pane_cp02_ParamLimits

0x1793,	// (0x000404ba) clock_digital_number_pane_cp02

0x179f,	// (0x000404c6) clock_digital_number_pane_cp03_ParamLimits

0x179f,	// (0x000404c6) clock_digital_number_pane_cp03

0x17ab,	// (0x000404d2) clock_digital_number_pane_cp04_ParamLimits

0x17ab,	// (0x000404d2) clock_digital_number_pane_cp04

0x17b7,	// (0x000404de) clock_digital_separator_pane_ParamLimits

0x17b7,	// (0x000404de) clock_digital_separator_pane

0x17c3,	// (0x000404ea) popup_clock_digital_window_t1_ParamLimits

0x17c3,	// (0x000404ea) popup_clock_digital_window_t1

0x379b,	// (0x000424c2) clock_digital_number_pane_g1

0x379b,	// (0x000424c2) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0004e42a) clock_digital_number_pane_g

0x379b,	// (0x000424c2) clock_digital_separator_pane_g1

0x379b,	// (0x000424c2) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0004e42a) clock_digital_separator_pane_g

0xd718,	// (0x0004c43f) aid_fill_nsta_ParamLimits

0xd84e,	// (0x0004c575) indicator_nsta_pane_ParamLimits

0x5376,	// (0x0004409d) popup_clock_analogue_window

0x5376,	// (0x0004409d) popup_clock_digital_window

0x42b8,	// (0x00042fdf) grid_indicator_nsta_pane_ParamLimits

0x752b,	// (0x00046252) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0004e7c7) clock_nsta_pane_t

0x172c,	// (0x00040453) aid_size_max_handle

0x1736,	// (0x0004045d) aid_size_min_handle

0x4d53,	// (0x00043a7a) editor_scroll_pane

0x830b,	// (0x00047032) ex_editor_pane

0x4265,	// (0x00042f8c) scroll_pane_cp13

0x4096,	// (0x00042dbd) scroll_pane_cp14

0x4776,	// (0x0004349d) scroll_pane_cp36

0xd49b,	// (0x0004c1c2) list_single_graphic_hl_pane_cp2_ParamLimits

0xd49b,	// (0x0004c1c2) list_single_graphic_hl_pane_cp2

0xc92e,	// (0x0004b655) list_single_graphic_hl_pane_ParamLimits

0xc92e,	// (0x0004b655) list_single_graphic_hl_pane

0x0f1e,	// (0x0003fc45) aid_size_min_hl_cp1

0x8313,	// (0x0004703a) list_highlight_pane_cp34_ParamLimits

0x8313,	// (0x0004703a) list_highlight_pane_cp34

0x8324,	// (0x0004704b) list_single_graphic_hl_pane_g1_ParamLimits

0x8324,	// (0x0004704b) list_single_graphic_hl_pane_g1

0xbc69,	// (0x0004a990) list_single_graphic_hl_pane_g2_ParamLimits

0xbc69,	// (0x0004a990) list_single_graphic_hl_pane_g2

0xbc69,	// (0x0004a990) list_single_graphic_hl_pane_g3_ParamLimits

0xbc69,	// (0x0004a990) list_single_graphic_hl_pane_g3

0x4cc4,	// (0x000439eb) list_single_graphic_hl_pane_g4_ParamLimits

0x4cc4,	// (0x000439eb) list_single_graphic_hl_pane_g4

0xc99f,	// (0x0004b6c6) list_single_graphic_hl_pane_g5_ParamLimits

0xc99f,	// (0x0004b6c6) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0004e906) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0004e906) list_single_graphic_hl_pane_g

0xbc75,	// (0x0004a99c) list_single_graphic_hl_pane_t1_ParamLimits

0xbc75,	// (0x0004a99c) list_single_graphic_hl_pane_t1

0x8331,	// (0x00047058) aid_size_min_hl_cp2

0x833a,	// (0x00047061) list_highlight_pane_cp34_cp2_ParamLimits

0x833a,	// (0x00047061) list_highlight_pane_cp34_cp2

0x8324,	// (0x0004704b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8324,	// (0x0004704b) list_single_graphic_hl_pane_g1_cp2

0x8347,	// (0x0004706e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8347,	// (0x0004706e) list_single_graphic_hl_pane_g2_cp2

0x8353,	// (0x0004707a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8353,	// (0x0004707a) list_single_graphic_hl_pane_g3_cp2

0x4c8c,	// (0x000439b3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4c8c,	// (0x000439b3) list_single_graphic_hl_pane_g4_cp2

0x8361,	// (0x00047088) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8361,	// (0x00047088) list_single_graphic_hl_pane_g5_cp2

0xbff6,	// (0x0004ad1d) control_pane_g4_ParamLimits

0xbff6,	// (0x0004ad1d) control_pane_g4

0x508d,	// (0x00043db4) bg_popup_sub_pane_cp10_ParamLimits

0x7b5d,	// (0x00046884) list_choice_list_pane_ParamLimits

0x7b6c,	// (0x00046893) scroll_pane_cp23

0x3b0e,	// (0x00042835) bg_popup_preview_window_pane_cp02_ParamLimits

0x8186,	// (0x00046ead) list_preview_fixed_pane_ParamLimits

0x819c,	// (0x00046ec3) list_preview_fixed_pane_cp_ParamLimits

0x819c,	// (0x00046ec3) list_preview_fixed_pane_cp

0x81a8,	// (0x00046ecf) popup_preview_fixed_window_g1_ParamLimits

0x81a8,	// (0x00046ecf) popup_preview_fixed_window_g1

0x81b4,	// (0x00046edb) popup_preview_fixed_window_g2_ParamLimits

0x81b4,	// (0x00046edb) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0004e895) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0004e895) popup_preview_fixed_window_g

0x16a0,	// (0x000403c7) aid_navi_side_left_pane_ParamLimits

0x16b5,	// (0x000403dc) aid_navi_side_right_pane_ParamLimits

0x16cd,	// (0x000403f4) navi_icon_pane_stacon_ParamLimits

0x16e1,	// (0x00040408) navi_navi_pane_stacon_ParamLimits

0x16cd,	// (0x000403f4) navi_text_pane_stacon_ParamLimits

0x3791,	// (0x000424b8) main_text_info_pane

0x838b,	// (0x000470b2) listscroll_text_info_pane

0x8393,	// (0x000470ba) list_text_info_pane_ParamLimits

0x8393,	// (0x000470ba) list_text_info_pane

0x83a2,	// (0x000470c9) scroll_pane_cp24_ParamLimits

0x83a2,	// (0x000470c9) scroll_pane_cp24

0xe3a3,	// (0x0004d0ca) list_text_info_pane_t1_ParamLimits

0xe3a3,	// (0x0004d0ca) list_text_info_pane_t1

0xc13d,	// (0x0004ae64) popup_fast_swap2_window_ParamLimits

0xc13d,	// (0x0004ae64) popup_fast_swap2_window

0x83f5,	// (0x0004711c) aid_size_cell_fast2

0x3791,	// (0x000424b8) bg_popup_window_pane_cp17

0x5a07,	// (0x0004472e) heading_pane_cp2

0x3d51,	// (0x00042a78) listscroll_fast2_pane

0x83ff,	// (0x00047126) grid_fast2_pane

0x8409,	// (0x00047130) listscroll_fast2_pane_g1

0x8411,	// (0x00047138) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0004e911) listscroll_fast2_pane_g

0x4265,	// (0x00042f8c) scroll_pane_cp26

0x841b,	// (0x00047142) cell_fast2_pane_ParamLimits

0x841b,	// (0x00047142) cell_fast2_pane

0x8430,	// (0x00047157) cell_fast2_pane_g1

0x8439,	// (0x00047160) cell_fast2_pane_g2

0x8442,	// (0x00047169) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0004e916) cell_fast2_pane_g

0x3e3b,	// (0x00042b62) grid_highlight_pane_cp9

0x3e50,	// (0x00042b77) main_eswt_pane_ParamLimits

0x3e50,	// (0x00042b77) main_eswt_pane

0x83b7,	// (0x000470de) list_single_text_info_pane

0x844a,	// (0x00047171) eswt_ctrl_button_pane

0x844a,	// (0x00047171) eswt_ctrl_canvas_pane

0x8452,	// (0x00047179) eswt_ctrl_combo_pane

0x844a,	// (0x00047171) eswt_ctrl_default_pane

0x844a,	// (0x00047171) eswt_ctrl_label_pane

0x845a,	// (0x00047181) eswt_ctrl_wait_pane

0x8462,	// (0x00047189) eswt_shell_pane

0x3791,	// (0x000424b8) listscroll_eswt_app_pane

0x8482,	// (0x000471a9) popup_eswt_tasktip_window_ParamLimits

0x8482,	// (0x000471a9) popup_eswt_tasktip_window

0x560b,	// (0x00044332) bg_popup_window_pane_cp18

0x8493,	// (0x000471ba) eswt_control_pane_g1_ParamLimits

0x8493,	// (0x000471ba) eswt_control_pane_g1

0x84a0,	// (0x000471c7) eswt_control_pane_g2_ParamLimits

0x84a0,	// (0x000471c7) eswt_control_pane_g2

0x84ad,	// (0x000471d4) eswt_control_pane_g3_ParamLimits

0x84ad,	// (0x000471d4) eswt_control_pane_g3

0x84ba,	// (0x000471e1) eswt_control_pane_g4_ParamLimits

0x84ba,	// (0x000471e1) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0004e91d) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0004e91d) eswt_control_pane_g

0x4103,	// (0x00042e2a) bg_button_pane_ParamLimits

0x4103,	// (0x00042e2a) bg_button_pane

0x3e50,	// (0x00042b77) common_borders_pane_copy2_ParamLimits

0x3e50,	// (0x00042b77) common_borders_pane_copy2

0x84c7,	// (0x000471ee) control_button_pane_g1_ParamLimits

0x84c7,	// (0x000471ee) control_button_pane_g1

0x84d3,	// (0x000471fa) control_button_pane_g2_ParamLimits

0x84d3,	// (0x000471fa) control_button_pane_g2

0x84df,	// (0x00047206) control_button_pane_g3_ParamLimits

0x84df,	// (0x00047206) control_button_pane_g3

0x0002,

0xfbff,	// (0x0004e926) control_button_pane_g_ParamLimits

0xfbff,	// (0x0004e926) control_button_pane_g

0x84f3,	// (0x0004721a) control_button_pane_t1

0x8501,	// (0x00047228) control_button_pane_t2

0x0001,

0xfc06,	// (0x0004e92d) control_button_pane_t

0x5597,	// (0x000442be) bg_button_pane_g1

0x559f,	// (0x000442c6) bg_button_pane_g2

0x55a7,	// (0x000442ce) bg_button_pane_g3

0x55af,	// (0x000442d6) bg_button_pane_g4

0x55b7,	// (0x000442de) bg_button_pane_g5

0x55bf,	// (0x000442e6) bg_button_pane_g6

0x55c7,	// (0x000442ee) bg_button_pane_g7

0x55cf,	// (0x000442f6) bg_button_pane_g8

0x55d7,	// (0x000442fe) bg_button_pane_g9

0x0008,

0xf861,	// (0x0004e588) bg_button_pane_g

0x7b18,	// (0x0004683f) common_borders_pane_ParamLimits

0x7b18,	// (0x0004683f) common_borders_pane

0x8493,	// (0x000471ba) eswt_control_pane_g1_copy1_ParamLimits

0x8493,	// (0x000471ba) eswt_control_pane_g1_copy1

0x84a0,	// (0x000471c7) eswt_control_pane_g2_copy1_ParamLimits

0x84a0,	// (0x000471c7) eswt_control_pane_g2_copy1

0x84ad,	// (0x000471d4) eswt_control_pane_g3_copy1_ParamLimits

0x84ad,	// (0x000471d4) eswt_control_pane_g3_copy1

0x84ba,	// (0x000471e1) eswt_control_pane_g4_copy1_ParamLimits

0x84ba,	// (0x000471e1) eswt_control_pane_g4_copy1

0x7b53,	// (0x0004687a) bg_eswt_ctrl_canvas_pane_g1

0x7b18,	// (0x0004683f) common_borders_pane_cp2_ParamLimits

0x7b18,	// (0x0004683f) common_borders_pane_cp2

0x7b18,	// (0x0004683f) common_borders_pane_cp3_ParamLimits

0x7b18,	// (0x0004683f) common_borders_pane_cp3

0x850f,	// (0x00047236) separator_horizontal_pane

0x8517,	// (0x0004723e) separator_vertical_pane

0x8493,	// (0x000471ba) eswt_control_pane_g1_copy2_ParamLimits

0x8493,	// (0x000471ba) eswt_control_pane_g1_copy2

0x84a0,	// (0x000471c7) eswt_control_pane_g2_copy2_ParamLimits

0x84a0,	// (0x000471c7) eswt_control_pane_g2_copy2

0x84ad,	// (0x000471d4) eswt_control_pane_g3_copy2_ParamLimits

0x84ad,	// (0x000471d4) eswt_control_pane_g3_copy2

0x84ba,	// (0x000471e1) eswt_control_pane_g4_copy2_ParamLimits

0x84ba,	// (0x000471e1) eswt_control_pane_g4_copy2

0x3791,	// (0x000424b8) common_borders_pane_cp4

0x8520,	// (0x00047247) separator_horizontal_pane_g1

0x8529,	// (0x00047250) separator_horizontal_pane_g2

0x8532,	// (0x00047259) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0004e932) separator_horizontal_pane_g

0x8493,	// (0x000471ba) eswt_control_pane_g1_copy3_ParamLimits

0x8493,	// (0x000471ba) eswt_control_pane_g1_copy3

0x84a0,	// (0x000471c7) eswt_control_pane_g2_copy3_ParamLimits

0x84a0,	// (0x000471c7) eswt_control_pane_g2_copy3

0x84ad,	// (0x000471d4) eswt_control_pane_g3_copy3_ParamLimits

0x84ad,	// (0x000471d4) eswt_control_pane_g3_copy3

0x84ba,	// (0x000471e1) eswt_control_pane_g4_copy3_ParamLimits

0x84ba,	// (0x000471e1) eswt_control_pane_g4_copy3

0x3791,	// (0x000424b8) common_borders_pane_cp5

0x853b,	// (0x00047262) separator_vertical_pane_g1

0x8544,	// (0x0004726b) separator_vertical_pane_g2

0x854d,	// (0x00047274) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0004e939) separator_vertical_pane_g

0x8493,	// (0x000471ba) eswt_control_pane_g1_copy4_ParamLimits

0x8493,	// (0x000471ba) eswt_control_pane_g1_copy4

0x84a0,	// (0x000471c7) eswt_control_pane_g2_copy4_ParamLimits

0x84a0,	// (0x000471c7) eswt_control_pane_g2_copy4

0x84ad,	// (0x000471d4) eswt_control_pane_g3_copy4_ParamLimits

0x84ad,	// (0x000471d4) eswt_control_pane_g3_copy4

0x84ba,	// (0x000471e1) eswt_control_pane_g4_copy4_ParamLimits

0x84ba,	// (0x000471e1) eswt_control_pane_g4_copy4

0x8556,	// (0x0004727d) eswt_ctrl_combo_button_pane

0x855e,	// (0x00047285) eswt_ctrl_input_pane

0x8566,	// (0x0004728d) popup_choice_list_window_cp70

0x856e,	// (0x00047295) eswt_ctrl_input_pane_t1

0x3791,	// (0x000424b8) input_focus_pane_cp70

0x7b18,	// (0x0004683f) bg_button_pane_cp70_ParamLimits

0x7b18,	// (0x0004683f) bg_button_pane_cp70

0x857c,	// (0x000472a3) eswt_ctrl_combo_button_pane_g1

0x8584,	// (0x000472ab) wait_bar_pane_cp70

0x560b,	// (0x00044332) bg_popup_window_pane_cp70_ParamLimits

0x560b,	// (0x00044332) bg_popup_window_pane_cp70

0x858c,	// (0x000472b3) popup_eswt_tasktip_window_t1

0x85a2,	// (0x000472c9) wait_bar_pane_cp71_ParamLimits

0x85a2,	// (0x000472c9) wait_bar_pane_cp71

0x85ae,	// (0x000472d5) grid_eswt_app_pane

0x4583,	// (0x000432aa) scroll_pane_cp70

0xe3c0,	// (0x0004d0e7) cell_eswt_app_pane_ParamLimits

0xe3c0,	// (0x0004d0e7) cell_eswt_app_pane

0xe3ea,	// (0x0004d111) cell_eswt_app_pane_g1_ParamLimits

0xe3ea,	// (0x0004d111) cell_eswt_app_pane_g1

0xe419,	// (0x0004d140) cell_eswt_app_pane_g2_ParamLimits

0xe419,	// (0x0004d140) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0004e940) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0004e940) cell_eswt_app_pane_g

0xe43d,	// (0x0004d164) cell_eswt_app_pane_t1_ParamLimits

0xe43d,	// (0x0004d164) cell_eswt_app_pane_t1

0x8670,	// (0x00047397) grid_highlight_pane_cp70_ParamLimits

0x8670,	// (0x00047397) grid_highlight_pane_cp70

0x4c28,	// (0x0004394f) set_content_pane_g1

0xd6cd,	// (0x0004c3f4) status_small_volume_pane

0x2ab5,	// (0x000417dc) status_small_volume_pane_g1

0x2abd,	// (0x000417e4) volume_small2_pane

0x2ac6,	// (0x000417ed) volume_small2_pane_g1

0x2acf,	// (0x000417f6) volume_small2_pane_g2

0x2ad8,	// (0x000417ff) volume_small2_pane_g3

0x2ae1,	// (0x00041808) volume_small2_pane_g4

0x2aea,	// (0x00041811) volume_small2_pane_g5

0x2af3,	// (0x0004181a) volume_small2_pane_g6

0x2afc,	// (0x00041823) volume_small2_pane_g7

0x2b05,	// (0x0004182c) volume_small2_pane_g8

0x2b0e,	// (0x00041835) volume_small2_pane_g9

0x2b17,	// (0x0004183e) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0004e945) volume_small2_pane_g

0x7f09,	// (0x00046c30) fep_vkb_top_text_pane_g1_ParamLimits

0xe34b,	// (0x0004d072) fep_vkb_top_text_pane_t1_ParamLimits

0x81c0,	// (0x00046ee7) popup_preview_fixed_window_g3_ParamLimits

0x81c0,	// (0x00046ee7) popup_preview_fixed_window_g3

0xc74c,	// (0x0004b473) popup_toolbar_trans_pane

0xdd71,	// (0x0004ca98) aid_height_set_list_ParamLimits

0x697a,	// (0x000456a1) aid_size_parent_ParamLimits

0x508d,	// (0x00043db4) list_highlight_pane_cp2_ParamLimits

0x4c28,	// (0x0004394f) set_content_pane_g1_ParamLimits

0xc940,	// (0x0004b667) list_single_image_pane_ParamLimits

0xc940,	// (0x0004b667) list_single_image_pane

0xe46f,	// (0x0004d196) aid_size_cell_image_ParamLimits

0xe46f,	// (0x0004d196) aid_size_cell_image

0xe47c,	// (0x0004d1a3) grid_single_image_pane_ParamLimits

0xe47c,	// (0x0004d1a3) grid_single_image_pane

0x8695,	// (0x000473bc) list_single_image_pane_g1_ParamLimits

0x8695,	// (0x000473bc) list_single_image_pane_g1

0x86a1,	// (0x000473c8) list_single_image_pane_g2_ParamLimits

0x86a1,	// (0x000473c8) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0004e95a) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0004e95a) list_single_image_pane_g

0x86b5,	// (0x000473dc) list_single_image_pane_t1_ParamLimits

0x86b5,	// (0x000473dc) list_single_image_pane_t1

0xe488,	// (0x0004d1af) cell_image_list_pane_ParamLimits

0xe488,	// (0x0004d1af) cell_image_list_pane

0xe49c,	// (0x0004d1c3) cell_image_list_pane_g1

0xe4a5,	// (0x0004d1cc) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0004e95f) cell_image_list_pane_g

0x86f1,	// (0x00047418) aid_size_cell_tb_trans_pane

0x4103,	// (0x00042e2a) bg_tb_trans_pane

0x8703,	// (0x0004742a) grid_tb_trans_pane

0x5597,	// (0x000442be) bg_tb_trans_pane_g1

0x559f,	// (0x000442c6) bg_tb_trans_pane_g2

0x55a7,	// (0x000442ce) bg_tb_trans_pane_g3

0x55af,	// (0x000442d6) bg_tb_trans_pane_g4

0x55b7,	// (0x000442de) bg_tb_trans_pane_g5

0x55cf,	// (0x000442f6) bg_tb_trans_pane_g6

0x55d7,	// (0x000442fe) bg_tb_trans_pane_g7

0x55bf,	// (0x000442e6) bg_tb_trans_pane_g8

0x55c7,	// (0x000442ee) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0004e964) bg_tb_trans_pane_g

0x8717,	// (0x0004743e) cell_toolbar_trans_pane_ParamLimits

0x8717,	// (0x0004743e) cell_toolbar_trans_pane

0x7b53,	// (0x0004687a) cell_toolbar_trans_pane_g1

0xe106,	// (0x0004ce2d) list_form2_midp_pane_t1

0xe114,	// (0x0004ce3b) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0004e80d) list_form2_midp_pane_t

0x771a,	// (0x00046441) scroll_pane_cp51_ParamLimits

0x78d6,	// (0x000465fd) form2_midp_wait_pane_g1

0x78df,	// (0x00046606) form2_midp_wait_pane_g2

0x78e8,	// (0x0004660f) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0004e822) form2_midp_wait_pane_g

0x3885,	// (0x000425ac) list_highlight_pane_cp21_ParamLimits

0x7936,	// (0x0004665d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7945,	// (0x0004666c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6b2a,	// (0x00045851) list_single_2graphic_im_pane_ParamLimits

0x6b2a,	// (0x00045851) list_single_2graphic_im_pane

0x873d,	// (0x00047464) list_single_2graphic_im_pane_g1_ParamLimits

0x873d,	// (0x00047464) list_single_2graphic_im_pane_g1

0x874e,	// (0x00047475) list_single_2graphic_im_pane_g2_ParamLimits

0x874e,	// (0x00047475) list_single_2graphic_im_pane_g2

0x875a,	// (0x00047481) list_single_2graphic_im_pane_g3_ParamLimits

0x875a,	// (0x00047481) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0004e977) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0004e977) list_single_2graphic_im_pane_g

0x877a,	// (0x000474a1) list_single_2graphic_im_pane_t1_ParamLimits

0x877a,	// (0x000474a1) list_single_2graphic_im_pane_t1

0x81cc,	// (0x00046ef3) list_single_graphic_2heading_pane_fp_ParamLimits

0x81cc,	// (0x00046ef3) list_single_graphic_2heading_pane_fp

0x0e00,	// (0x0003fb27) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0e00,	// (0x0003fb27) list_single_graphic_2heading_pane_fp_g1

0x81e2,	// (0x00046f09) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x81e2,	// (0x00046f09) list_single_graphic_2heading_pane_fp_g2

0x409e,	// (0x00042dc5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x409e,	// (0x00042dc5) list_single_graphic_2heading_pane_fp_g3

0x4111,	// (0x00042e38) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4111,	// (0x00042e38) list_single_graphic_2heading_pane_fp_g4

0x81ee,	// (0x00046f15) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x81ee,	// (0x00046f15) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e8a5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e8a5) list_single_graphic_2heading_pane_fp_g

0x0f49,	// (0x0003fc70) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0f49,	// (0x0003fc70) list_single_graphic_2heading_pane_fp_t1

0x0e38,	// (0x0003fb5f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0e38,	// (0x0003fb5f) list_single_graphic_2heading_pane_fp_t2

0x0f5f,	// (0x0003fc86) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0f5f,	// (0x0003fc86) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0004e980) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0004e980) list_single_graphic_2heading_pane_fp_t

0x7bdf,	// (0x00046906) fep_hwr_write_pane_g5_ParamLimits

0x7bdf,	// (0x00046906) fep_hwr_write_pane_g5

0x7beb,	// (0x00046912) fep_hwr_write_pane_g6_ParamLimits

0x7beb,	// (0x00046912) fep_hwr_write_pane_g6

0x8462,	// (0x00047189) eswt_shell_pane_ParamLimits

0x560b,	// (0x00044332) bg_popup_window_pane_cp18_ParamLimits

0x68c8,	// (0x000455ef) heading_pane_cp70

0x858c,	// (0x000472b3) popup_eswt_tasktip_window_t1_ParamLimits

0xd773,	// (0x0004c49a) aid_touch_tab_arrow_left

0xd789,	// (0x0004c4b0) aid_touch_tab_arrow_right

0xd02c,	// (0x0004bd53) title_pane_g3_ParamLimits

0xd02c,	// (0x0004bd53) title_pane_g3

0x40c2,	// (0x00042de9) set_value_pane_g1

0xc74c,	// (0x0004b473) popup_toolbar_trans_pane_ParamLimits

0x86f1,	// (0x00047418) aid_size_cell_tb_trans_pane_ParamLimits

0x4103,	// (0x00042e2a) bg_tb_trans_pane_ParamLimits

0x8703,	// (0x0004742a) grid_tb_trans_pane_ParamLimits

0x3b0e,	// (0x00042835) cont_note_pane_ParamLimits

0x3b0e,	// (0x00042835) cont_note_pane

0x3e50,	// (0x00042b77) cont_snote2_single_text_pane_ParamLimits

0x3e50,	// (0x00042b77) cont_snote2_single_text_pane

0x3e50,	// (0x00042b77) cont_snote2_single_graphic_pane_ParamLimits

0x3e50,	// (0x00042b77) cont_snote2_single_graphic_pane

0x5c1d,	// (0x00044944) cont_note_wait_pane_ParamLimits

0x5c1d,	// (0x00044944) cont_note_wait_pane

0x5c1d,	// (0x00044944) cont_note_image_pane_ParamLimits

0x5c1d,	// (0x00044944) cont_note_image_pane

0x87ab,	// (0x000474d2) popup_note2_window_g1_ParamLimits

0x87ab,	// (0x000474d2) popup_note2_window_g1

0x87dc,	// (0x00047503) popup_note2_window_t1_ParamLimits

0x87dc,	// (0x00047503) popup_note2_window_t1

0x8821,	// (0x00047548) popup_note2_window_t2_ParamLimits

0x8821,	// (0x00047548) popup_note2_window_t2

0x8866,	// (0x0004758d) popup_note2_window_t3_ParamLimits

0x8866,	// (0x0004758d) popup_note2_window_t3

0x88ab,	// (0x000475d2) popup_note2_window_t4_ParamLimits

0x88ab,	// (0x000475d2) popup_note2_window_t4

0x3b86,	// (0x000428ad) popup_note2_window_t5_ParamLimits

0x3b86,	// (0x000428ad) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0004e98c) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0004e98c) popup_note2_window_t

0x88da,	// (0x00047601) popup_note2_image_window_g1_ParamLimits

0x88da,	// (0x00047601) popup_note2_image_window_g1

0x88e6,	// (0x0004760d) popup_note2_image_window_g2_ParamLimits

0x88e6,	// (0x0004760d) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0004e997) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0004e997) popup_note2_image_window_g

0x88f8,	// (0x0004761f) popup_note2_image_window_t1_ParamLimits

0x88f8,	// (0x0004761f) popup_note2_image_window_t1

0x8910,	// (0x00047637) popup_note2_image_window_t2_ParamLimits

0x8910,	// (0x00047637) popup_note2_image_window_t2

0x8928,	// (0x0004764f) popup_note2_image_window_t3_ParamLimits

0x8928,	// (0x0004764f) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0004e99c) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0004e99c) popup_note2_image_window_t

0x5c2b,	// (0x00044952) popup_note2_wait_window_g1_ParamLimits

0x5c2b,	// (0x00044952) popup_note2_wait_window_g1

0x8944,	// (0x0004766b) popup_note2_wait_window_g2_ParamLimits

0x8944,	// (0x0004766b) popup_note2_wait_window_g2

0x5c43,	// (0x0004496a) popup_note2_wait_window_g3_ParamLimits

0x5c43,	// (0x0004496a) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x0004e9a3) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x0004e9a3) popup_note2_wait_window_g

0x8950,	// (0x00047677) popup_note2_wait_window_t1_ParamLimits

0x8950,	// (0x00047677) popup_note2_wait_window_t1

0x896e,	// (0x00047695) popup_note2_wait_window_t2_ParamLimits

0x896e,	// (0x00047695) popup_note2_wait_window_t2

0x898c,	// (0x000476b3) popup_note2_wait_window_t3_ParamLimits

0x898c,	// (0x000476b3) popup_note2_wait_window_t3

0x899e,	// (0x000476c5) popup_note2_wait_window_t4_ParamLimits

0x899e,	// (0x000476c5) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0004e9aa) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0004e9aa) popup_note2_wait_window_t

0x89b0,	// (0x000476d7) wait_bar2_pane_ParamLimits

0x89b0,	// (0x000476d7) wait_bar2_pane

0x89c8,	// (0x000476ef) popup_snote2_single_text_window_g1_ParamLimits

0x89c8,	// (0x000476ef) popup_snote2_single_text_window_g1

0x89f0,	// (0x00047717) popup_snote2_single_text_window_t1_ParamLimits

0x89f0,	// (0x00047717) popup_snote2_single_text_window_t1

0x8a3c,	// (0x00047763) popup_snote2_single_text_window_t2_ParamLimits

0x8a3c,	// (0x00047763) popup_snote2_single_text_window_t2

0x8a88,	// (0x000477af) popup_snote2_single_text_window_t3_ParamLimits

0x8a88,	// (0x000477af) popup_snote2_single_text_window_t3

0x8ac9,	// (0x000477f0) popup_snote2_single_text_window_t4_ParamLimits

0x8ac9,	// (0x000477f0) popup_snote2_single_text_window_t4

0x8aff,	// (0x00047826) popup_snote2_single_text_window_t5_ParamLimits

0x8aff,	// (0x00047826) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x0004e9b3) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x0004e9b3) popup_snote2_single_text_window_t

0x8b2a,	// (0x00047851) popup_snote2_single_graphic_window_g1_ParamLimits

0x8b2a,	// (0x00047851) popup_snote2_single_graphic_window_g1

0x8b52,	// (0x00047879) popup_snote2_single_graphic_window_g2_ParamLimits

0x8b52,	// (0x00047879) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x0004e9be) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x0004e9be) popup_snote2_single_graphic_window_g

0x8b7a,	// (0x000478a1) popup_snote2_single_graphic_window_t1_ParamLimits

0x8b7a,	// (0x000478a1) popup_snote2_single_graphic_window_t1

0x8bc6,	// (0x000478ed) popup_snote2_single_graphic_window_t2_ParamLimits

0x8bc6,	// (0x000478ed) popup_snote2_single_graphic_window_t2

0x8a88,	// (0x000477af) popup_snote2_single_graphic_window_t3_ParamLimits

0x8a88,	// (0x000477af) popup_snote2_single_graphic_window_t3

0x8ac9,	// (0x000477f0) popup_snote2_single_graphic_window_t4_ParamLimits

0x8ac9,	// (0x000477f0) popup_snote2_single_graphic_window_t4

0x8aff,	// (0x00047826) popup_snote2_single_graphic_window_t5_ParamLimits

0x8aff,	// (0x00047826) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0004e9c3) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0004e9c3) popup_snote2_single_graphic_window_t

0x75d5,	// (0x000462fc) clock_nsta_pane_cp2_t1

0x75d5,	// (0x000462fc) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0004e7e3) clock_nsta_pane_cp2_t

0x0756,	// (0x0003f47d) form_field_data_wide_pane_g1_ParamLimits

0x409e,	// (0x00042dc5) form_field_data_wide_pane_g2_ParamLimits

0x409e,	// (0x00042dc5) form_field_data_wide_pane_g2

0x4111,	// (0x00042e38) form_field_data_wide_pane_g3_ParamLimits

0x4111,	// (0x00042e38) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0004e3a2) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0004e3a2) form_field_data_wide_pane_g

0xe049,	// (0x0004cd70) grid_touch_3_pane_ParamLimits

0xe049,	// (0x0004cd70) grid_touch_3_pane

0xe4ae,	// (0x0004d1d5) cell_touch_3_pane_ParamLimits

0xe4ae,	// (0x0004d1d5) cell_touch_3_pane

0x7b53,	// (0x0004687a) cell_touch_3_pane_g1

0x7b53,	// (0x0004687a) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0004e868) cell_touch_3_pane_g

0x3bb8,	// (0x000428df) cont_query_data_pane

0x3bc0,	// (0x000428e7) cont_query_data_pane_cp1

0x8c43,	// (0x0004796a) button_value_adjust_pane_cp7

0x8c4b,	// (0x00047972) query_popup_pane_cp3

0x4833,	// (0x0004355a) bg_popup_sub_pane_cp22_ParamLimits

0x17e2,	// (0x00040509) navi_navi_volume_pane_cp2

0x17fa,	// (0x00040521) popup_side_volume_key_window_g2

0x1806,	// (0x0004052d) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0004e438) popup_side_volume_key_window_g

0x1820,	// (0x00040547) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0004e43f) popup_side_volume_key_window_t

0x4ae9,	// (0x00043810) popup_side_volume_key_window_ParamLimits

0xb7b7,	// (0x0004a4de) list_double_graphic_pane_g4_ParamLimits

0xb7b7,	// (0x0004a4de) list_double_graphic_pane_g4

0xded7,	// (0x0004cbfe) list_single_2heading_msg_pane_ParamLimits

0xded7,	// (0x0004cbfe) list_single_2heading_msg_pane

0xc9b3,	// (0x0004b6da) list_single_2heading_msg_pane_g1_ParamLimits

0xc9b3,	// (0x0004b6da) list_single_2heading_msg_pane_g1

0xc9bf,	// (0x0004b6e6) list_single_2heading_msg_pane_g2_ParamLimits

0xc9bf,	// (0x0004b6e6) list_single_2heading_msg_pane_g2

0xc9d2,	// (0x0004b6f9) list_single_2heading_msg_pane_g3_ParamLimits

0xc9d2,	// (0x0004b6f9) list_single_2heading_msg_pane_g3

0x2b38,	// (0x0004185f) list_single_2heading_msg_pane_g4_ParamLimits

0x2b38,	// (0x0004185f) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x0004e9ce) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x0004e9ce) list_single_2heading_msg_pane_g

0x0f7f,	// (0x0003fca6) list_single_2heading_msg_pane_t1_ParamLimits

0x0f7f,	// (0x0003fca6) list_single_2heading_msg_pane_t1

0xbc8b,	// (0x0004a9b2) list_single_2heading_msg_pane_t2_ParamLimits

0xbc8b,	// (0x0004a9b2) list_single_2heading_msg_pane_t2

0xbcf6,	// (0x0004aa1d) list_single_2heading_msg_pane_t3_ParamLimits

0xbcf6,	// (0x0004aa1d) list_single_2heading_msg_pane_t3

0x1014,	// (0x0003fd3b) list_single_2heading_msg_pane_t4_ParamLimits

0x1014,	// (0x0003fd3b) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0004e9d7) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0004e9d7) list_single_2heading_msg_pane_t

0x37d9,	// (0x00042500) title_pane_g4_ParamLimits

0x37d9,	// (0x00042500) title_pane_g4

0x15f0,	// (0x00040317) title_pane_stacon_g3_ParamLimits

0x15f0,	// (0x00040317) title_pane_stacon_g3

0x876e,	// (0x00047495) list_single_2graphic_im_pane_g4_ParamLimits

0x876e,	// (0x00047495) list_single_2graphic_im_pane_g4

0x6684,	// (0x000453ab) popup_side_volume_key_window_cp

0x6e32,	// (0x00045b59) main_idle_act2_pane_t1

0x2173,	// (0x00040e9a) toolbar_button_pane_g10

0xd336,	// (0x0004c05d) popup_toolbar_window_cp1

0x75c6,	// (0x000462ed) clock_nsta_pane_cp_t1

0x75c6,	// (0x000462ed) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0004e7de) clock_nsta_pane_cp_t

0x17e2,	// (0x00040509) navi_navi_volume_pane_cp2_ParamLimits

0x17ee,	// (0x00040515) popup_side_volume_key_window_g1_ParamLimits

0x17fa,	// (0x00040521) popup_side_volume_key_window_g2_ParamLimits

0x1806,	// (0x0004052d) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0004e438) popup_side_volume_key_window_g_ParamLimits

0x2741,	// (0x00041468) fep_hwr_aid_pane

0xe1ff,	// (0x0004cf26) bg_fep_hwr_top_pane_g4_ParamLimits

0x7baf,	// (0x000468d6) fep_hwr_top_pane_g1_ParamLimits

0x7bc1,	// (0x000468e8) fep_hwr_top_pane_g2_ParamLimits

0x27fa,	// (0x00041521) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0004e833) fep_hwr_top_pane_g_ParamLimits

0x280f,	// (0x00041536) fep_hwr_top_text_pane_ParamLimits

0x6447,	// (0x0004516e) aid_touch_tab_arrow_arrow_2

0x6450,	// (0x00045177) aid_touch_tab_arrow_left_2

0x2755,	// (0x0004147c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x278c,	// (0x000414b3) fep_hwr_prediction_pane

0x7d18,	// (0x00046a3f) fep_vkb_prediction_pane

0xe32b,	// (0x0004d052) fep_vkb_side_pane_g3_ParamLimits

0xe32b,	// (0x0004d052) fep_vkb_side_pane_g3

0x7dc1,	// (0x00046ae8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8242,	// (0x00046f69) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x824f,	// (0x00046f76) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0004e8dd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8c70,	// (0x00047997) fep_hwr_prediction_pane_g1

0x2b50,	// (0x00041877) fep_hwr_prediction_pane_g2

0x2b58,	// (0x0004187f) fep_hwr_prediction_pane_g3

0x2b60,	// (0x00041887) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0004e9e0) fep_hwr_prediction_pane_g

0x8c70,	// (0x00047997) fep_vkb_prediction_pane_g1

0x8c7a,	// (0x000479a1) fep_vkb_prediction_pane_g2

0x8c82,	// (0x000479a9) fep_vkb_prediction_pane_g3

0x8c8a,	// (0x000479b1) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0004e9e9) fep_vkb_prediction_pane_g

0x243f,	// (0x00041166) slider_set_pane_g3

0x2453,	// (0x0004117a) slider_set_pane_g4

0x246b,	// (0x00041192) slider_set_pane_g5

0x243f,	// (0x00041166) slider_set_pane_g6

0x2481,	// (0x000411a8) slider_set_pane_g7

0x6ad7,	// (0x000457fe) slider_form_pane_g3

0x6ae0,	// (0x00045807) slider_form_pane_g4

0x6ae8,	// (0x0004580f) slider_form_pane_g5

0x6ad7,	// (0x000457fe) slider_form_pane_g6

0xdeb8,	// (0x0004cbdf) slider_form_pane_g7

0x70d1,	// (0x00045df8) slider_set_pane_vc_g3

0x70da,	// (0x00045e01) slider_set_pane_vc_g4

0x70e3,	// (0x00045e0a) slider_set_pane_vc_g5

0x70d1,	// (0x00045df8) slider_set_pane_vc_g6

0x70ec,	// (0x00045e13) slider_set_pane_vc_g7

0x729c,	// (0x00045fc3) slider_form_pane_vc_g1

0x72a5,	// (0x00045fcc) slider_form_pane_vc_g2

0x72ae,	// (0x00045fd5) slider_form_pane_vc_g3

0x729c,	// (0x00045fc3) slider_form_pane_vc_g4

0x72b7,	// (0x00045fde) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0004e7b0) slider_form_pane_vc_g

0x3791,	// (0x000424b8) main_idle_act3_pane

0x8c92,	// (0x000479b9) ai3_links_pane

0xe4f7,	// (0x0004d21e) popup_ai3_data_window_ParamLimits

0xe4f7,	// (0x0004d21e) popup_ai3_data_window

0x3791,	// (0x000424b8) grid_ai3_links_pane

0xe50f,	// (0x0004d236) cell_ai3_links_pane_ParamLimits

0xe50f,	// (0x0004d236) cell_ai3_links_pane

0x8ccb,	// (0x000479f2) bg_popup_sub_pane_cp11

0x8cd8,	// (0x000479ff) cell_ai3_links_pane_g1

0x3791,	// (0x000424b8) bg_popup_sub_pane_cp12

0x8cfd,	// (0x00047a24) heading_ai3_data_pane

0x8d05,	// (0x00047a2c) list_ai3_gene_pane

0x8d11,	// (0x00047a38) popup_ai3_data_window_g1

0x8d19,	// (0x00047a40) heading_ai3_data_pane_g1

0x8d21,	// (0x00047a48) heading_ai3_data_pane_t1

0x8d2f,	// (0x00047a56) list_double_ai3_gene_pane_ParamLimits

0x8d2f,	// (0x00047a56) list_double_ai3_gene_pane

0x8d3c,	// (0x00047a63) list_single_ai3_gene_pane_ParamLimits

0x8d3c,	// (0x00047a63) list_single_ai3_gene_pane

0x7b18,	// (0x0004683f) list_highlight_pane_cp7_ParamLimits

0x7b18,	// (0x0004683f) list_highlight_pane_cp7

0x8d49,	// (0x00047a70) list_single_a13_gene_pane_t1_ParamLimits

0x8d49,	// (0x00047a70) list_single_a13_gene_pane_t1

0x8d60,	// (0x00047a87) list_single_ai3_gene_pane_g1

0x8d69,	// (0x00047a90) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0004e9f2) list_single_ai3_gene_pane_g

0x8d71,	// (0x00047a98) list_double_ai3_gene_pane_g1_ParamLimits

0x8d71,	// (0x00047a98) list_double_ai3_gene_pane_g1

0x8d7d,	// (0x00047aa4) list_double_ai3_gene_pane_t1_ParamLimits

0x8d7d,	// (0x00047aa4) list_double_ai3_gene_pane_t1

0x8d99,	// (0x00047ac0) list_double_ai3_gene_pane_t2_ParamLimits

0x8d99,	// (0x00047ac0) list_double_ai3_gene_pane_t2

0x8dae,	// (0x00047ad5) list_double_ai3_gene_pane_t3_ParamLimits

0x8dae,	// (0x00047ad5) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0004e9f7) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0004e9f7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f75,	// (0x0003fc9c) aid_size_min_col_2

0xe4e1,	// (0x0004d208) aid_size_min_msg_ParamLimits

0xe4e1,	// (0x0004d208) aid_size_min_msg

0xe33f,	// (0x0004d066) fep_vkb_top_text_pane_g2_ParamLimits

0xe33f,	// (0x0004d066) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0004e863) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0004e863) fep_vkb_top_text_pane_g

0x3791,	// (0x000424b8) main_hc_apps_shell_pane

0x8dcb,	// (0x00047af2) grid_hc_apps_pane_ParamLimits

0x8dcb,	// (0x00047af2) grid_hc_apps_pane

0x8dda,	// (0x00047b01) list_hc_apps_pane

0x8de2,	// (0x00047b09) scroll_pane_cp37_ParamLimits

0x8de2,	// (0x00047b09) scroll_pane_cp37

0xe529,	// (0x0004d250) cell_hc_apps_pane_ParamLimits

0xe529,	// (0x0004d250) cell_hc_apps_pane

0xe5e7,	// (0x0004d30e) cell_hc_apps_pane_g1_ParamLimits

0xe5e7,	// (0x0004d30e) cell_hc_apps_pane_g1

0x8ecd,	// (0x00047bf4) cell_hc_apps_pane_g2_ParamLimits

0x8ecd,	// (0x00047bf4) cell_hc_apps_pane_g2

0x8ee9,	// (0x00047c10) cell_hc_apps_pane_g3_ParamLimits

0x8ee9,	// (0x00047c10) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x0004e9fe) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x0004e9fe) cell_hc_apps_pane_g

0xe614,	// (0x0004d33b) cell_hc_apps_pane_t1_ParamLimits

0xe614,	// (0x0004d33b) cell_hc_apps_pane_t1

0x3b0e,	// (0x00042835) grid_highlight_pane_cp10_ParamLimits

0x3b0e,	// (0x00042835) grid_highlight_pane_cp10

0xe652,	// (0x0004d379) list_single_hc_apps_pane_ParamLimits

0xe652,	// (0x0004d379) list_single_hc_apps_pane

0xe683,	// (0x0004d3aa) list_single_hc_apps_pane_g1

0xc9de,	// (0x0004b705) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0004ea05) list_single_hc_apps_pane_g

0xc9f7,	// (0x0004b71e) list_single_hc_apps_pane_g2_copy1

0xbd64,	// (0x0004aa8b) list_single_hc_apps_pane_t1

0x3885,	// (0x000425ac) bg_set_opt_pane_cp_ParamLimits

0x146b,	// (0x00040192) setting_slider_pane_t1_ParamLimits

0x1484,	// (0x000401ab) setting_slider_pane_t2_ParamLimits

0x149e,	// (0x000401c5) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004e285) setting_slider_pane_t_ParamLimits

0x14b6,	// (0x000401dd) slider_set_pane_ParamLimits

0x1a9e,	// (0x000407c5) control_pane_g5_ParamLimits

0x1a9e,	// (0x000407c5) control_pane_g5

0x6934,	// (0x0004565b) slider_set_pane_g1_ParamLimits

0x2433,	// (0x0004115a) slider_set_pane_g2_ParamLimits

0x243f,	// (0x00041166) slider_set_pane_g3_ParamLimits

0x2453,	// (0x0004117a) slider_set_pane_g4_ParamLimits

0x246b,	// (0x00041192) slider_set_pane_g5_ParamLimits

0x243f,	// (0x00041166) slider_set_pane_g6_ParamLimits

0x2481,	// (0x000411a8) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0004e686) slider_set_pane_g_ParamLimits

0x4bd3,	// (0x000438fa) navi_icon_text_pane_ParamLimits

0xd73c,	// (0x0004c463) aid_fill_nsta_2_ParamLimits

0xd773,	// (0x0004c49a) aid_touch_tab_arrow_left_ParamLimits

0xd789,	// (0x0004c4b0) aid_touch_tab_arrow_right_ParamLimits

0xd824,	// (0x0004c54b) clock_nsta_pane_ParamLimits

0x6429,	// (0x00045150) navi_icon_pane_g1_ParamLimits

0x6435,	// (0x0004515c) navi_text_pane_t1_ParamLimits

0x76d8,	// (0x000463ff) navi_icon_text_pane_g1_ParamLimits

0x76e4,	// (0x0004640b) navi_icon_text_pane_t1_ParamLimits

0xe683,	// (0x0004d3aa) list_single_hc_apps_pane_g1_ParamLimits

0xc9de,	// (0x0004b705) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0004ea05) list_single_hc_apps_pane_g_ParamLimits

0xc9f7,	// (0x0004b71e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbd64,	// (0x0004aa8b) list_single_hc_apps_pane_t1_ParamLimits

0xbec8,	// (0x0004abef) popup_toolbar2_fixed_window_ParamLimits

0xbec8,	// (0x0004abef) popup_toolbar2_fixed_window

0xc742,	// (0x0004b469) popup_toolbar2_float_window

0x3791,	// (0x000424b8) bg_popup_sub_pane_cp27

0x8fcc,	// (0x00047cf3) grid_toolbar2_float_pane

0x3791,	// (0x000424b8) bg_popup_sub_pane_cp26

0x8fcc,	// (0x00047cf3) grid_toolbar2_fixed_pane

0xe69c,	// (0x0004d3c3) cell_toolbar2_fixed_pane_ParamLimits

0xe69c,	// (0x0004d3c3) cell_toolbar2_fixed_pane

0xe6b7,	// (0x0004d3de) cell_toolbar2_fixed_pane_g1

0x5517,	// (0x0004423e) toolbar2_fixed_button_pane

0x5597,	// (0x000442be) toolbar2_fixed_button_pane_g1

0x559f,	// (0x000442c6) toolbar2_fixed_button_pane_g2

0x55a7,	// (0x000442ce) toolbar2_fixed_button_pane_g3

0x55af,	// (0x000442d6) toolbar2_fixed_button_pane_g4

0x55b7,	// (0x000442de) toolbar2_fixed_button_pane_g5

0x55bf,	// (0x000442e6) toolbar2_fixed_button_pane_g6

0x55c7,	// (0x000442ee) toolbar2_fixed_button_pane_g7

0x55cf,	// (0x000442f6) toolbar2_fixed_button_pane_g8

0x55d7,	// (0x000442fe) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0004e588) toolbar2_fixed_button_pane_g

0x8fee,	// (0x00047d15) cell_toolbar2_float_pane_ParamLimits

0x8fee,	// (0x00047d15) cell_toolbar2_float_pane

0x9002,	// (0x00047d29) cell_toolbar2_float_pane_g1

0x5517,	// (0x0004423e) toolbar2_fixed_button_pane_cp

0xe227,	// (0x0004cf4e) fep_vkb_accented_list_pane_ParamLimits

0xe227,	// (0x0004cf4e) fep_vkb_accented_list_pane

0x295d,	// (0x00041684) bg_popup_fep_shadow_pane_g9

0x4d53,	// (0x00043a7a) bg_popup_fep_shadow_pane_cp3

0x424c,	// (0x00042f73) list_accented_list_pane

0x900b,	// (0x00047d32) list_single_accented_list_pane_ParamLimits

0x900b,	// (0x00047d32) list_single_accented_list_pane

0x4d53,	// (0x00043a7a) list_highlight_pane_cp10

0x901c,	// (0x00047d43) list_single_accented_list_pane_t1

0xc66c,	// (0x0004b393) popup_slider_window_ParamLimits

0xc66c,	// (0x0004b393) popup_slider_window

0x8c53,	// (0x0004797a) aid_indentation_list_msg

0xe7b0,	// (0x0004d4d7) bg_popup_window_pane_cp19

0x9140,	// (0x00047e67) popup_slider_window_g1

0x915c,	// (0x00047e83) popup_slider_window_g2

0x9178,	// (0x00047e9f) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0004ea0a) popup_slider_window_g

0x91d4,	// (0x00047efb) popup_slider_window_t1

0x9248,	// (0x00047f6f) small_volume_slider_vertical_pane

0x7b53,	// (0x0004687a) small_volume_slider_vertical_pane_g1

0x7b53,	// (0x0004687a) small_volume_slider_vertical_pane_g2

0x9264,	// (0x00047f8b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0004ea1c) small_volume_slider_vertical_pane_g

0xbe36,	// (0x0004ab5d) area_side_right_pane_ParamLimits

0xbe36,	// (0x0004ab5d) area_side_right_pane

0xca13,	// (0x0004b73a) aid_size_side_button_ParamLimits

0xca13,	// (0x0004b73a) aid_size_side_button

0xca2c,	// (0x0004b753) grid_sctrl_middle_pane_ParamLimits

0xca2c,	// (0x0004b753) grid_sctrl_middle_pane

0x2bd0,	// (0x000418f7) sctrl_sk_bottom_pane

0x2be1,	// (0x00041908) sctrl_sk_top_pane

0x2bf3,	// (0x0004191a) aid_touch_sctrl_top

0x3b0e,	// (0x00042835) bg_sctrl_sk_pane_ParamLimits

0x3b0e,	// (0x00042835) bg_sctrl_sk_pane

0x2c00,	// (0x00041927) sctrl_sk_top_pane_g1

0x2c0d,	// (0x00041934) sctrl_sk_top_pane_t1

0x2bf3,	// (0x0004191a) aid_touch_sctrl_bottom

0x3b0e,	// (0x00042835) bg_sctrl_sk_pane_cp_ParamLimits

0x3b0e,	// (0x00042835) bg_sctrl_sk_pane_cp

0x2c28,	// (0x0004194f) sctrl_sk_bottom_pane_g1

0x2c0d,	// (0x00041934) sctrl_sk_bottom_pane_t1

0xca46,	// (0x0004b76d) cell_sctrl_middle_pane_ParamLimits

0xca46,	// (0x0004b76d) cell_sctrl_middle_pane

0xca57,	// (0x0004b77e) aid_touch_sctrl_middle_ParamLimits

0xca57,	// (0x0004b77e) aid_touch_sctrl_middle

0xca64,	// (0x0004b78b) bg_sctrl_middle_pane_ParamLimits

0xca64,	// (0x0004b78b) bg_sctrl_middle_pane

0x92ec,	// (0x00048013) cell_sctrl_middle_pane_g1_ParamLimits

0x92ec,	// (0x00048013) cell_sctrl_middle_pane_g1

0xca72,	// (0x0004b799) cell_sctrl_middle_pane_g2_ParamLimits

0xca72,	// (0x0004b799) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0004ea28) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0004ea28) cell_sctrl_middle_pane_g

0x5597,	// (0x000442be) bg_sctrl_middle_pane_g1

0x559f,	// (0x000442c6) bg_sctrl_middle_pane_g2

0x55a7,	// (0x000442ce) bg_sctrl_middle_pane_g3

0x55af,	// (0x000442d6) bg_sctrl_middle_pane_g4

0x55b7,	// (0x000442de) bg_sctrl_middle_pane_g5

0x55bf,	// (0x000442e6) bg_sctrl_middle_pane_g6

0x55c7,	// (0x000442ee) bg_sctrl_middle_pane_g7

0x55cf,	// (0x000442f6) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0004ea2d) bg_sctrl_middle_pane_g

0x55d7,	// (0x000442fe) bg_sctrl_middle_pane_g8_copy1

0x5597,	// (0x000442be) bg_sctrl_sk_pane_g1

0x559f,	// (0x000442c6) bg_sctrl_sk_pane_g2

0x55a7,	// (0x000442ce) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0004e588) bg_sctrl_sk_pane_g

0x400e,	// (0x00042d35) aid_size_touch_scroll_bar

0x55af,	// (0x000442d6) bg_sctrl_sk_pane_g4

0x55b7,	// (0x000442de) bg_sctrl_sk_pane_g5

0x55bf,	// (0x000442e6) bg_sctrl_sk_pane_g6

0x55c7,	// (0x000442ee) bg_sctrl_sk_pane_g7

0x55cf,	// (0x000442f6) bg_sctrl_sk_pane_g8

0x55d7,	// (0x000442fe) bg_sctrl_sk_pane_g9

0x1c3a,	// (0x00040961) popup_fep_china_hwr2_fs_candidate_window

0xc19a,	// (0x0004aec1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc19a,	// (0x0004aec1) popup_fep_china_hwr2_fs_control_window

0x7dc1,	// (0x00046ae8) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0004ea23) sctrl_sk_top_pane_g

0xe868,	// (0x0004d58f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe868,	// (0x0004d58f) aid_fep_china_hwr2_fs_cell

0xe87c,	// (0x0004d5a3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe87c,	// (0x0004d5a3) bg_popup_fep_shadow_pane_cp4

0xe893,	// (0x0004d5ba) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe893,	// (0x0004d5ba) bg_popup_fep_shadow_pane_cp5

0xe8a5,	// (0x0004d5cc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8a5,	// (0x0004d5cc) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b9,	// (0x0004d5e0) popup_fep_china_hwr2_fs_control_funtion_grid

0x92c0,	// (0x00047fe7) aid_fep_china_hwr2_fs_candi_cell

0x3791,	// (0x000424b8) bg_popup_fep_shadow_pane_cp6

0x92ca,	// (0x00047ff1) popup_fep_china_hwr2_fs_candidate_grid

0xe8c1,	// (0x0004d5e8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe8c1,	// (0x0004d5e8) cell_fep_china_hwr2_fs_funtion_grid

0x7b53,	// (0x0004687a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x92ec,	// (0x00048013) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x92ec,	// (0x00048013) cell_fep_china_hwr2_fs_funtion_grid_g1

0x92fa,	// (0x00048021) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x92fa,	// (0x00048021) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0004ea3e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0004ea3e) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8d9,	// (0x0004d600) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8d9,	// (0x0004d600) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8ee,	// (0x0004d615) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8ee,	// (0x0004d615) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0004ea43) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0004ea43) cell_fep_china_hwr2_fs_funtion_grid_t

0x9341,	// (0x00048068) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9349,	// (0x00048070) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9351,	// (0x00048078) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0004ea48) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9359,	// (0x00048080) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9359,	// (0x00048080) cell_fep_china_hwr2_fs_candidate_grid

0x9372,	// (0x00048099) popup_fep_china_hwr2_fs_candidate_grid_g20

0x937a,	// (0x000480a1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7b53,	// (0x0004687a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7b53,	// (0x0004687a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0004e868) cell_fep_china_hwr2_fs_candidate_grid_g

0x9382,	// (0x000480a9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5189,	// (0x00043eb0) clock_nsta_pane_cp_24_ParamLimits

0x5189,	// (0x00043eb0) clock_nsta_pane_cp_24

0x5207,	// (0x00043f2e) indicator_nsta_pane_cp_24_ParamLimits

0x5207,	// (0x00043f2e) indicator_nsta_pane_cp_24

0x62a5,	// (0x00044fcc) heading_pane_g1

0x0001,

0xf8c6,	// (0x0004e5ed) heading_pane_g

0x6c7b,	// (0x000459a2) grid_sct_catagory_button_pane

0x6cab,	// (0x000459d2) scroll_pane_cp5_ParamLimits

0x7726,	// (0x0004644d) button_value_adjust_pane_cp5_ParamLimits

0x7726,	// (0x0004644d) button_value_adjust_pane_cp5

0x7805,	// (0x0004652c) form2_midp_time_pane_ParamLimits

0x9390,	// (0x000480b7) cell_sct_catagory_button_pane_ParamLimits

0x9390,	// (0x000480b7) cell_sct_catagory_button_pane

0x7b18,	// (0x0004683f) bg_button_pane_cp01_ParamLimits

0x7b18,	// (0x0004683f) bg_button_pane_cp01

0x7b53,	// (0x0004687a) cell_sct_catagory_button_pane_g1

0xc6e5,	// (0x0004b40c) popup_tb_extension_window

0xe90a,	// (0x0004d631) aid_size_cell_ext_ParamLimits

0xe90a,	// (0x0004d631) aid_size_cell_ext

0x3e50,	// (0x00042b77) bg_tb_trans_pane_cp1_ParamLimits

0x3e50,	// (0x00042b77) bg_tb_trans_pane_cp1

0xe930,	// (0x0004d657) grid_tb_ext_pane_ParamLimits

0xe930,	// (0x0004d657) grid_tb_ext_pane

0xe972,	// (0x0004d699) cell_tb_ext_pane_ParamLimits

0xe972,	// (0x0004d699) cell_tb_ext_pane

0xe99a,	// (0x0004d6c1) cell_tb_ext_pane_g1_ParamLimits

0xe99a,	// (0x0004d6c1) cell_tb_ext_pane_g1

0x9428,	// (0x0004814f) cell_tb_ext_pane_t1

0x3b0e,	// (0x00042835) list_highlight_pane_cp11_ParamLimits

0x3b0e,	// (0x00042835) list_highlight_pane_cp11

0xbedd,	// (0x0004ac04) popup_uni_indicator_window_ParamLimits

0xbedd,	// (0x0004ac04) popup_uni_indicator_window

0x4103,	// (0x00042e2a) bg_popup_sub_pane_cp14

0x9443,	// (0x0004816a) list_uniindi_pane

0x944f,	// (0x00048176) uniindi_top_pane

0x3b0e,	// (0x00042835) bg_uniindi_top_pane

0x946e,	// (0x00048195) uniindi_top_pane_g1

0x9484,	// (0x000481ab) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x0004ea4f) uniindi_top_pane_g

0x94ae,	// (0x000481d5) uniindi_top_pane_t1

0x94d8,	// (0x000481ff) list_single_uniindi_pane_ParamLimits

0x94d8,	// (0x000481ff) list_single_uniindi_pane

0x7b53,	// (0x0004687a) bg_uniindi_top_pane_g1

0x94eb,	// (0x00048212) list_single_uniindi_pane_g1

0x94fe,	// (0x00048225) list_single_uniindi_pane_t1

0x3791,	// (0x000424b8) control_bg_pane

0x9523,	// (0x0004824a) bg_sctrl_sk_pane_cp1

0x952c,	// (0x00048253) bg_sctrl_sk_pane_cp2

0x9535,	// (0x0004825c) control_bg_pane_g1

0x953e,	// (0x00048265) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0004ea58) control_bg_pane_g

0x756a,	// (0x00046291) cell_indicator_nsta_pane_g1_ParamLimits

0xe076,	// (0x0004cd9d) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0004e7cc) cell_indicator_nsta_pane_g_ParamLimits

0x0dd6,	// (0x0003fafd) form2_midp_time_pane_t1_ParamLimits

0x2733,	// (0x0004145a) main_idle_act4_pane_ParamLimits

0x2733,	// (0x0004145a) main_idle_act4_pane

0xc6e5,	// (0x0004b40c) popup_tb_extension_window_ParamLimits

0xe958,	// (0x0004d67f) tb_ext_find_pane_ParamLimits

0xe958,	// (0x0004d67f) tb_ext_find_pane

0x9547,	// (0x0004826e) ai_gene_pane_1_cp1

0x4e92,	// (0x00043bb9) ai_gene_pane_2_cp1

0x954f,	// (0x00048276) list_single_idle_plugin_calendar_pane

0x9558,	// (0x0004827f) list_single_idle_plugin_notification_pane

0x9561,	// (0x00048288) list_single_idle_plugin_player_pane

0xe9b7,	// (0x0004d6de) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9b7,	// (0x0004d6de) list_single_idle_plugin_shortcut_pane

0xe9df,	// (0x0004d706) main_idle_act4_pane_t1

0xe9f5,	// (0x0004d71c) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0004ea5d) main_idle_act4_pane_t

0xea0d,	// (0x0004d734) middle_sk_idle_act4_pane_ParamLimits

0xea0d,	// (0x0004d734) middle_sk_idle_act4_pane

0xea29,	// (0x0004d750) popup_clock_digital_analogue_window_cp2

0xea50,	// (0x0004d777) shortcut_wheel_idle_act4_pane_ParamLimits

0xea50,	// (0x0004d777) shortcut_wheel_idle_act4_pane

0x7b53,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g1

0x7b53,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g2

0x7b53,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g3

0x7b53,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g4

0x7b53,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g5

0x95f4,	// (0x0004831b) shortcut_wheel_idle_act4_pane_g6

0x95fc,	// (0x00048323) shortcut_wheel_idle_act4_pane_g7

0x9604,	// (0x0004832b) shortcut_wheel_idle_act4_pane_g8

0x960c,	// (0x00048333) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x0004ea62) shortcut_wheel_idle_act4_pane_g

0xe1ff,	// (0x0004cf26) middle_sk_idle_act4_pane_g1_ParamLimits

0xe1ff,	// (0x0004cf26) middle_sk_idle_act4_pane_g1

0xeacd,	// (0x0004d7f4) middle_sk_idle_act4_pane_g2_ParamLimits

0xeacd,	// (0x0004d7f4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x0004ea85) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x0004ea85) middle_sk_idle_act4_pane_g

0xeae5,	// (0x0004d80c) middle_sk_idle_act4_pane_t1_ParamLimits

0xeae5,	// (0x0004d80c) middle_sk_idle_act4_pane_t1

0xeb14,	// (0x0004d83b) grid_ai_shortcut_pane_ParamLimits

0xeb14,	// (0x0004d83b) grid_ai_shortcut_pane

0xeb31,	// (0x0004d858) list_highlight_pane_cp16_ParamLimits

0xeb31,	// (0x0004d858) list_highlight_pane_cp16

0xeb3e,	// (0x0004d865) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb3e,	// (0x0004d865) list_single_idle_plugin_shortcut_pane_g1

0xeb4a,	// (0x0004d871) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb4a,	// (0x0004d871) list_single_idle_plugin_shortcut_pane_g2

0xeb66,	// (0x0004d88d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb66,	// (0x0004d88d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0004ea8a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0004ea8a) list_single_idle_plugin_shortcut_pane_g

0xeb7b,	// (0x0004d8a2) cell_ai_shortcut_pane_ParamLimits

0xeb7b,	// (0x0004d8a2) cell_ai_shortcut_pane

0xeb91,	// (0x0004d8b8) cell_ai_shortcut_pane_g1_ParamLimits

0xeb91,	// (0x0004d8b8) cell_ai_shortcut_pane_g1

0x9547,	// (0x0004826e) ai_gene_pane_1_cp2

0x9739,	// (0x00048460) ai_gene_pane_2_cp2

0x9741,	// (0x00048468) list_highlight_pane_cp15

0x974a,	// (0x00048471) list_single_idle_plugin_calendar_pane_g1

0x9741,	// (0x00048468) list_highlight_pane_cp17

0x9752,	// (0x00048479) list_single_idle_plugin_calendar_pane_g1_copy1

0x975a,	// (0x00048481) list_single_idle_plugin_player_pane_g1

0x6ed2,	// (0x00045bf9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x0004ea91) list_single_idle_plugin_player_pane_g

0x9762,	// (0x00048489) list_single_idle_plugin_player_pane_t1

0x9770,	// (0x00048497) list_single_idle_plugin_player_pane_t2

0x977e,	// (0x000484a5) list_single_idle_plugin_player_pane_t3

0x978c,	// (0x000484b3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x0004ea96) list_single_idle_plugin_player_pane_t

0x979a,	// (0x000484c1) wait_bar_pane_cp15

0x97a2,	// (0x000484c9) grid_ai_notification_pane

0x6ed2,	// (0x00045bf9) list_single_idle_plugin_notification_pane_g1

0xebb3,	// (0x0004d8da) cell_ai_notification_pane_ParamLimits

0xebb3,	// (0x0004d8da) cell_ai_notification_pane

0x97b8,	// (0x000484df) cell_ai_notification_pane_g1

0x97c0,	// (0x000484e7) cell_ai_notification_pane_t1

0xebc0,	// (0x0004d8e7) tb_ext_find_button_pane

0xebc8,	// (0x0004d8ef) tb_ext_find_pane_g1

0xebd0,	// (0x0004d8f7) tb_ext_find_pane_t1

0x4747,	// (0x0004346e) tb_ext_find_button_pane_g1

0x97ec,	// (0x00048513) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x0004ea9f) tb_ext_find_button_pane_g

0xe9df,	// (0x0004d706) main_idle_act4_pane_t1_ParamLimits

0xe9f5,	// (0x0004d71c) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0004ea5d) main_idle_act4_pane_t_ParamLimits

0xea29,	// (0x0004d750) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea40,	// (0x0004d767) sat_plugin_idle_act4_pane_ParamLimits

0xea40,	// (0x0004d767) sat_plugin_idle_act4_pane

0xebde,	// (0x0004d905) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebde,	// (0x0004d905) sat_plugin_idle_act4_pane_t1

0xebf6,	// (0x0004d91d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xebf6,	// (0x0004d91d) sat_plugin_idle_act4_pane_t2

0xec0e,	// (0x0004d935) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec0e,	// (0x0004d935) sat_plugin_idle_act4_pane_t3

0xec26,	// (0x0004d94d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec26,	// (0x0004d94d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x0004eaa4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x0004eaa4) sat_plugin_idle_act4_pane_t

0x12dd,	// (0x00040004) popup_battery_window_ParamLimits

0x12dd,	// (0x00040004) popup_battery_window

0x3b0e,	// (0x00042835) bg_popup_sub_pane_cp25_ParamLimits

0x3b0e,	// (0x00042835) bg_popup_sub_pane_cp25

0x9841,	// (0x00048568) popup_battery_window_g1_ParamLimits

0x9841,	// (0x00048568) popup_battery_window_g1

0x984d,	// (0x00048574) popup_battery_window_t1_ParamLimits

0x984d,	// (0x00048574) popup_battery_window_t1

0x985f,	// (0x00048586) popup_battery_window_t2_ParamLimits

0x985f,	// (0x00048586) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0004eaad) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0004eaad) popup_battery_window_t

0xd59b,	// (0x0004c2c2) midp_canvas_pane_ParamLimits

0xd5fa,	// (0x0004c321) midp_keypad_pane_ParamLimits

0xd5fa,	// (0x0004c321) midp_keypad_pane

0x508d,	// (0x00043db4) main_midp_pane_ParamLimits

0x75e4,	// (0x0004630b) signal_pane_g2_cp_ParamLimits

0xec3e,	// (0x0004d965) aid_size_cell_midp_keypad_ParamLimits

0xec3e,	// (0x0004d965) aid_size_cell_midp_keypad

0xec5c,	// (0x0004d983) midp_keyp_game_grid_pane_ParamLimits

0xec5c,	// (0x0004d983) midp_keyp_game_grid_pane

0xec83,	// (0x0004d9aa) midp_keyp_rocker_pane_ParamLimits

0xec83,	// (0x0004d9aa) midp_keyp_rocker_pane

0xecd4,	// (0x0004d9fb) midp_keyp_sk_left_pane_ParamLimits

0xecd4,	// (0x0004d9fb) midp_keyp_sk_left_pane

0xed28,	// (0x0004da4f) midp_keyp_sk_right_pane_ParamLimits

0xed28,	// (0x0004da4f) midp_keyp_sk_right_pane

0x3791,	// (0x000424b8) bg_button_pane_cp03

0xed7c,	// (0x0004daa3) midp_keyp_sk_left_pane_g1

0x3791,	// (0x000424b8) bg_button_pane_cp04

0xed7c,	// (0x0004daa3) midp_keyp_sk_right_pane_g1

0x7b53,	// (0x0004687a) midp_keyp_rocker_pane_g1

0xed85,	// (0x0004daac) keyp_game_cell_pane_ParamLimits

0xed85,	// (0x0004daac) keyp_game_cell_pane

0x3791,	// (0x000424b8) bg_button_pane_cp02

0xeda9,	// (0x0004dad0) keyp_game_cell_pane_g1

0xbe78,	// (0x0004ab9f) popup_fep_vkb2_window_ParamLimits

0xbe78,	// (0x0004ab9f) popup_fep_vkb2_window

0xca7e,	// (0x0004b7a5) aid_size_cell_vkb2_ParamLimits

0xca7e,	// (0x0004b7a5) aid_size_cell_vkb2

0xcab4,	// (0x0004b7db) popup_fep_vkb2_window_g1_ParamLimits

0xcab4,	// (0x0004b7db) popup_fep_vkb2_window_g1

0xcb04,	// (0x0004b82b) vkb2_area_bottom_pane_ParamLimits

0xcb04,	// (0x0004b82b) vkb2_area_bottom_pane

0xcb58,	// (0x0004b87f) vkb2_area_keypad_pane_ParamLimits

0xcb58,	// (0x0004b87f) vkb2_area_keypad_pane

0xcba0,	// (0x0004b8c7) vkb2_area_top_pane_ParamLimits

0xcba0,	// (0x0004b8c7) vkb2_area_top_pane

0xcc26,	// (0x0004b94d) vkb2_top_entry_pane_ParamLimits

0xcc26,	// (0x0004b94d) vkb2_top_entry_pane

0xcc53,	// (0x0004b97a) vkb2_top_grid_left_pane_ParamLimits

0xcc53,	// (0x0004b97a) vkb2_top_grid_left_pane

0xcc73,	// (0x0004b99a) vkb2_top_grid_right_pane_ParamLimits

0xcc73,	// (0x0004b99a) vkb2_top_grid_right_pane

0x2e86,	// (0x00041bad) vkb2_cell_keypad_pane_ParamLimits

0x2e86,	// (0x00041bad) vkb2_cell_keypad_pane

0xccb9,	// (0x0004b9e0) vkb2_area_bottom_grid_pane_ParamLimits

0xccb9,	// (0x0004b9e0) vkb2_area_bottom_grid_pane

0xcce3,	// (0x0004ba0a) vkb2_area_bottom_pane_g1_ParamLimits

0xcce3,	// (0x0004ba0a) vkb2_area_bottom_pane_g1

0xcd09,	// (0x0004ba30) vkb2_area_bottom_pane_g2_ParamLimits

0xcd09,	// (0x0004ba30) vkb2_area_bottom_pane_g2

0xcd3a,	// (0x0004ba61) vkb2_area_bottom_pane_g3_ParamLimits

0xcd3a,	// (0x0004ba61) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x0004eab2) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x0004eab2) vkb2_area_bottom_pane_g

0x3030,	// (0x00041d57) vkb2_top_cell_left_pane_ParamLimits

0x3030,	// (0x00041d57) vkb2_top_cell_left_pane

0xedb2,	// (0x0004dad9) vkb2_top_entry_pane_g1_ParamLimits

0xedb2,	// (0x0004dad9) vkb2_top_entry_pane_g1

0xedc0,	// (0x0004dae7) vkb2_top_entry_pane_t1_ParamLimits

0xedc0,	// (0x0004dae7) vkb2_top_entry_pane_t1

0x9a10,	// (0x00048737) vkb2_top_entry_pane_t2_ParamLimits

0x9a10,	// (0x00048737) vkb2_top_entry_pane_t2

0x9a42,	// (0x00048769) vkb2_top_entry_pane_t3_ParamLimits

0x9a42,	// (0x00048769) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0004eab9) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0004eab9) vkb2_top_entry_pane_t

0xcda4,	// (0x0004bacb) vkb2_top_grid_right_pane_g1_ParamLimits

0xcda4,	// (0x0004bacb) vkb2_top_grid_right_pane_g1

0x3093,	// (0x00041dba) vkb2_top_grid_right_pane_g2_ParamLimits

0x3093,	// (0x00041dba) vkb2_top_grid_right_pane_g2

0x30ab,	// (0x00041dd2) vkb2_top_grid_right_pane_g3_ParamLimits

0x30ab,	// (0x00041dd2) vkb2_top_grid_right_pane_g3

0xcdba,	// (0x0004bae1) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdba,	// (0x0004bae1) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x0004eac0) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x0004eac0) vkb2_top_grid_right_pane_g

0x30d9,	// (0x00041e00) vkb2_top_cell_left_pane_g1

0x30f0,	// (0x00041e17) vkb2_cell_keypad_pane_g1_ParamLimits

0x30f0,	// (0x00041e17) vkb2_cell_keypad_pane_g1

0x9a66,	// (0x0004878d) vkb2_cell_keypad_pane_t1_ParamLimits

0x9a66,	// (0x0004878d) vkb2_cell_keypad_pane_t1

0x30fe,	// (0x00041e25) vkb2_cell_bottom_grid_pane_ParamLimits

0x30fe,	// (0x00041e25) vkb2_cell_bottom_grid_pane

0x3137,	// (0x00041e5e) vkb2_cell_bottom_grid_pane_g1

0xea71,	// (0x0004d798) aid_call2_pane_cp02

0xea79,	// (0x0004d7a0) aid_call_pane_cp02

0xea81,	// (0x0004d7a8) clock_digital_number_pane_cp10

0xea89,	// (0x0004d7b0) clock_digital_number_pane_cp11

0xea91,	// (0x0004d7b8) clock_digital_number_pane_cp12

0xea99,	// (0x0004d7c0) clock_digital_number_pane_cp13

0xeaa1,	// (0x0004d7c8) clock_digital_separator_pane_cp10

0x4747,	// (0x0004346e) popup_clock_digital_analogue_window_cp2_g1

0x4747,	// (0x0004346e) popup_clock_digital_analogue_window_cp2_g2

0xeaa9,	// (0x0004d7d0) popup_clock_digital_analogue_window_cp2_g3

0x4747,	// (0x0004346e) popup_clock_digital_analogue_window_cp2_g4

0xeaa9,	// (0x0004d7d0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x0004ea75) popup_clock_digital_analogue_window_cp2_g

0xeab1,	// (0x0004d7d8) popup_clock_digital_analogue_window_cp2_t1

0xeabf,	// (0x0004d7e6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x0004ea80) popup_clock_digital_analogue_window_cp2_t

0x7b53,	// (0x0004687a) clock_digital_number_pane_cp10_g1

0x7b53,	// (0x0004687a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0004e868) clock_digital_number_pane_cp10_g

0x7b53,	// (0x0004687a) clock_digital_separator_pane_cp10_g1

0x7b53,	// (0x0004687a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0004e868) clock_digital_separator_pane_cp10_g

0x9490,	// (0x000481b7) uniindi_top_pane_g3

0x94a1,	// (0x000481c8) uniindi_top_pane_g4

0x2f11,	// (0x00041c38) vkb2_row_keypad_pane_ParamLimits

0x2f11,	// (0x00041c38) vkb2_row_keypad_pane

0x3157,	// (0x00041e7e) vkb2_cell_t_keypad_pane_ParamLimits

0x3157,	// (0x00041e7e) vkb2_cell_t_keypad_pane

0x3167,	// (0x00041e8e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3167,	// (0x00041e8e) vkb2_cell_t_keypad_pane_cp08

0x317a,	// (0x00041ea1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x317a,	// (0x00041ea1) vkb2_cell_t_keypad_pane_cp09

0x318e,	// (0x00041eb5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x318e,	// (0x00041eb5) vkb2_cell_t_keypad_pane_cp01

0x319f,	// (0x00041ec6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x319f,	// (0x00041ec6) vkb2_cell_t_keypad_pane_cp02

0x31b0,	// (0x00041ed7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x31b0,	// (0x00041ed7) vkb2_cell_t_keypad_pane_cp03

0x31c1,	// (0x00041ee8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x31c1,	// (0x00041ee8) vkb2_cell_t_keypad_pane_cp04

0x31d2,	// (0x00041ef9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x31d2,	// (0x00041ef9) vkb2_cell_t_keypad_pane_cp05

0x31e3,	// (0x00041f0a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x31e3,	// (0x00041f0a) vkb2_cell_t_keypad_pane_cp06

0x31f4,	// (0x00041f1b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x31f4,	// (0x00041f1b) vkb2_cell_t_keypad_pane_cp07

0x3205,	// (0x00041f2c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3205,	// (0x00041f2c) vkb2_cell_t_keypad_pane_cp10

0x7dc1,	// (0x00046ae8) vkb2_cell_t_keypad_pane_g1

0x9a7d,	// (0x000487a4) vkb2_cell_t_keypad_pane_t1

0x3791,	// (0x000424b8) popup_grid_graphic2_window

0xedf9,	// (0x0004db20) aid_size_cell_graphic2_ParamLimits

0xedf9,	// (0x0004db20) aid_size_cell_graphic2

0xee37,	// (0x0004db5e) bg_popup_window_pane_cp21_ParamLimits

0xee37,	// (0x0004db5e) bg_popup_window_pane_cp21

0xee45,	// (0x0004db6c) graphic2_pages_pane_ParamLimits

0xee45,	// (0x0004db6c) graphic2_pages_pane

0xee9b,	// (0x0004dbc2) grid_graphic2_control_pane_ParamLimits

0xee9b,	// (0x0004dbc2) grid_graphic2_control_pane

0xeee3,	// (0x0004dc0a) grid_graphic2_pane_ParamLimits

0xeee3,	// (0x0004dc0a) grid_graphic2_pane

0xef6a,	// (0x0004dc91) cell_graphic2_pane

0x3791,	// (0x000424b8) main_comp_mode_pane

0x8d05,	// (0x00047a2c) list_ai3_gene_pane_ParamLimits

0xe7b0,	// (0x0004d4d7) bg_popup_window_pane_cp19_ParamLimits

0x90e2,	// (0x00047e09) bg_touch_area_indi_pane_ParamLimits

0x90e2,	// (0x00047e09) bg_touch_area_indi_pane

0x90f8,	// (0x00047e1f) bg_touch_area_indi_pane_cp01_ParamLimits

0x90f8,	// (0x00047e1f) bg_touch_area_indi_pane_cp01

0x910e,	// (0x00047e35) bg_touch_area_indi_pane_cp02_ParamLimits

0x910e,	// (0x00047e35) bg_touch_area_indi_pane_cp02

0x9126,	// (0x00047e4d) bg_touch_area_indi_pane_cp03_ParamLimits

0x9126,	// (0x00047e4d) bg_touch_area_indi_pane_cp03

0x9140,	// (0x00047e67) popup_slider_window_g1_ParamLimits

0x915c,	// (0x00047e83) popup_slider_window_g2_ParamLimits

0x9178,	// (0x00047e9f) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0004ea0a) popup_slider_window_g_ParamLimits

0x91d4,	// (0x00047efb) popup_slider_window_t1_ParamLimits

0x9248,	// (0x00047f6f) small_volume_slider_vertical_pane_ParamLimits

0xef6a,	// (0x0004dc91) cell_graphic2_pane_ParamLimits

0xefc7,	// (0x0004dcee) bg_button_pane_cp10_ParamLimits

0xefc7,	// (0x0004dcee) bg_button_pane_cp10

0xefda,	// (0x0004dd01) bg_button_pane_cp11_ParamLimits

0xefda,	// (0x0004dd01) bg_button_pane_cp11

0xefed,	// (0x0004dd14) graphic2_pages_pane_g1_ParamLimits

0xefed,	// (0x0004dd14) graphic2_pages_pane_g1

0xf015,	// (0x0004dd3c) graphic2_pages_pane_g2_ParamLimits

0xf015,	// (0x0004dd3c) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x0004eace) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x0004eace) graphic2_pages_pane_g

0xf02d,	// (0x0004dd54) graphic2_pages_pane_t1_ParamLimits

0xf02d,	// (0x0004dd54) graphic2_pages_pane_t1

0xf045,	// (0x0004dd6c) cell_graphic2_control_pane_ParamLimits

0xf045,	// (0x0004dd6c) cell_graphic2_control_pane

0xf077,	// (0x0004dd9e) cell_graphic2_pane_g1_ParamLimits

0xf077,	// (0x0004dd9e) cell_graphic2_pane_g1

0xe20d,	// (0x0004cf34) cell_graphic2_pane_g2_ParamLimits

0xe20d,	// (0x0004cf34) cell_graphic2_pane_g2

0xf008,	// (0x0004dd2f) cell_graphic2_pane_g3_ParamLimits

0xf008,	// (0x0004dd2f) cell_graphic2_pane_g3

0xe21a,	// (0x0004cf41) cell_graphic2_pane_g4_ParamLimits

0xe21a,	// (0x0004cf41) cell_graphic2_pane_g4

0xf084,	// (0x0004ddab) cell_graphic2_pane_g5_ParamLimits

0xf084,	// (0x0004ddab) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0004ead3) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0004ead3) cell_graphic2_pane_g

0xf0a4,	// (0x0004ddcb) cell_graphic2_pane_t1_ParamLimits

0xf0a4,	// (0x0004ddcb) cell_graphic2_pane_t1

0x6299,	// (0x00044fc0) grid_highlight_pane_cp11_ParamLimits

0x6299,	// (0x00044fc0) grid_highlight_pane_cp11

0x3b0e,	// (0x00042835) bg_button_pane_cp05

0xf0d8,	// (0x0004ddff) cell_graphic2_control_pane_g1

0x7b53,	// (0x0004687a) bg_touch_area_indi_pane_g1

0x9d6c,	// (0x00048a93) aid_cmod_rocker_key_size

0x9d76,	// (0x00048a9d) aid_cmode_itu_key_size

0x9d80,	// (0x00048aa7) main_cmode_video_pane

0x9d8a,	// (0x00048ab1) main_comp_mode_itu_pane

0x9d96,	// (0x00048abd) main_comp_mode_rocker_pane

0x9da2,	// (0x00048ac9) cell_cmode_rocker_pane_ParamLimits

0x9da2,	// (0x00048ac9) cell_cmode_rocker_pane

0x9db4,	// (0x00048adb) cell_cmode_itu_pane_ParamLimits

0x9db4,	// (0x00048adb) cell_cmode_itu_pane

0x4103,	// (0x00042e2a) bg_button_pane_cp06_ParamLimits

0x4103,	// (0x00042e2a) bg_button_pane_cp06

0x7dc1,	// (0x00046ae8) cell_cmode_rocker_pane_g1_ParamLimits

0x7dc1,	// (0x00046ae8) cell_cmode_rocker_pane_g1

0x92ec,	// (0x00048013) cell_cmode_rocker_pane_g2_ParamLimits

0x92ec,	// (0x00048013) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x0004eae3) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x0004eae3) cell_cmode_rocker_pane_g

0x3791,	// (0x000424b8) bg_button_pane_cp07

0x9dc9,	// (0x00048af0) cell_cmode_itu_pane_g1

0x9dd2,	// (0x00048af9) cell_cmode_itu_pane_t1

0x9de0,	// (0x00048b07) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0004eae8) cell_cmode_itu_pane_t

0x9513,	// (0x0004823a) aid_touch_ctrl_left

0x951b,	// (0x00048242) aid_touch_ctrl_right

0x3791,	// (0x000424b8) compa_mode_pane

0xf0fc,	// (0x0004de23) aid_cmod_rocker_key_size_cp

0xf106,	// (0x0004de2d) aid_cmode_itu_key_size_cp

0x9e02,	// (0x00048b29) compa_mode_pane_g1

0x9e0a,	// (0x00048b31) compa_mode_pane_g2

0x9e12,	// (0x00048b39) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x0004eaed) compa_mode_pane_g

0xf110,	// (0x0004de37) main_comp_mode_itu_pane_cp

0xf118,	// (0x0004de3f) main_comp_mode_rocker_pane_cp

0xf120,	// (0x0004de47) cell_cmode_itu_pane_cp_ParamLimits

0xf120,	// (0x0004de47) cell_cmode_itu_pane_cp

0xf135,	// (0x0004de5c) cell_cmode_rocker_pane_cp_ParamLimits

0xf135,	// (0x0004de5c) cell_cmode_rocker_pane_cp

0x4103,	// (0x00042e2a) bg_button_pane_cp06_cp_ParamLimits

0x4103,	// (0x00042e2a) bg_button_pane_cp06_cp

0x7dc1,	// (0x00046ae8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7dc1,	// (0x00046ae8) cell_cmode_rocker_pane_g1_cp

0x7b53,	// (0x0004687a) cell_cmode_rocker_pane_g2_cp

0x3791,	// (0x000424b8) bg_button_pane_cp07_cp

0xf147,	// (0x0004de6e) cell_cmode_itu_pane_g1_cp

0xf150,	// (0x0004de77) cell_cmode_itu_pane_t1_cp

0xf150,	// (0x0004de77) cell_cmode_itu_pane_t2_cp

0xdeae,	// (0x0004cbd5) settings_code_pane_cp2

0x3885,	// (0x000425ac) bg_popup_window_pane_cp3_ParamLimits

0x3cdc,	// (0x00042a03) heading_pane_cp3_ParamLimits

0x3ce8,	// (0x00042a0f) listscroll_popup_graphic_pane_ParamLimits

0x2741,	// (0x00041468) fep_hwr_aid_pane_ParamLimits

0x2bf3,	// (0x0004191a) aid_touch_sctrl_top_ParamLimits

0x2c00,	// (0x00041927) sctrl_sk_top_pane_g1_ParamLimits

0x7dc1,	// (0x00046ae8) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0004ea23) sctrl_sk_top_pane_g_ParamLimits

0x2c0d,	// (0x00041934) sctrl_sk_top_pane_t1_ParamLimits

0x2bf3,	// (0x0004191a) aid_touch_sctrl_bottom_ParamLimits

0x2c0d,	// (0x00041934) sctrl_sk_bottom_pane_t1_ParamLimits

0x945c,	// (0x00048183) aid_area_touch_clock

0xcbe8,	// (0x0004b90f) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbe8,	// (0x0004b90f) aid_vkb2_area_top_pane_cell

0xcc93,	// (0x0004b9ba) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc93,	// (0x0004b9ba) aid_vkb2_area_bottom_pane_cell

0x99c8,	// (0x000486ef) popup_char_count_window

0x9e68,	// (0x00048b8f) popup_char_count_window_g1

0x9e71,	// (0x00048b98) popup_char_count_window_g2

0x9e7a,	// (0x00048ba1) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x0004eaf4) popup_char_count_window_g

0x9e83,	// (0x00048baa) popup_char_count_window_t1

0x2cae,	// (0x000419d5) popup_fep_char_preview_window_ParamLimits

0x2cae,	// (0x000419d5) popup_fep_char_preview_window

0xcc08,	// (0x0004b92f) vkb2_top_candi_pane_ParamLimits

0xcc08,	// (0x0004b92f) vkb2_top_candi_pane

0xf15e,	// (0x0004de85) cell_vkb2_top_candi_pane_ParamLimits

0xf15e,	// (0x0004de85) cell_vkb2_top_candi_pane

0x5c1d,	// (0x00044944) bg_popup_fep_char_preview_window_ParamLimits

0x5c1d,	// (0x00044944) bg_popup_fep_char_preview_window

0x321a,	// (0x00041f41) popup_fep_char_preview_window_t1_ParamLimits

0x321a,	// (0x00041f41) popup_fep_char_preview_window_t1

0x9ede,	// (0x00048c05) bg_popup_fep_char_preview_window_g1

0x9ee6,	// (0x00048c0d) bg_popup_fep_char_preview_window_g2

0x9eee,	// (0x00048c15) bg_popup_fep_char_preview_window_g3

0x9ef6,	// (0x00048c1d) bg_popup_fep_char_preview_window_g4

0x9efe,	// (0x00048c25) bg_popup_fep_char_preview_window_g5

0x3254,	// (0x00041f7b) bg_popup_fep_char_preview_window_g6

0x9f06,	// (0x00048c2d) bg_popup_fep_char_preview_window_g7

0x9f0e,	// (0x00048c35) bg_popup_fep_char_preview_window_g8

0x9f16,	// (0x00048c3d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x0004eafb) bg_popup_fep_char_preview_window_g

0x7dc1,	// (0x00046ae8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7dc1,	// (0x00046ae8) cell_vkb2_top_candi_pane_g1

0x80d8,	// (0x00046dff) cell_vkb2_top_candi_pane_g2_ParamLimits

0x80d8,	// (0x00046dff) cell_vkb2_top_candi_pane_g2

0x80f9,	// (0x00046e20) cell_vkb2_top_candi_pane_g3_ParamLimits

0x80f9,	// (0x00046e20) cell_vkb2_top_candi_pane_g3

0x325c,	// (0x00041f83) cell_vkb2_top_candi_pane_g4_ParamLimits

0x325c,	// (0x00041f83) cell_vkb2_top_candi_pane_g4

0x9ba9,	// (0x000488d0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9ba9,	// (0x000488d0) cell_vkb2_top_candi_pane_g5

0x92ec,	// (0x00048013) cell_vkb2_top_candi_pane_g6_ParamLimits

0x92ec,	// (0x00048013) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x0004eb0e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x0004eb0e) cell_vkb2_top_candi_pane_g

0x327d,	// (0x00041fa4) cell_vkb2_top_candi_pane_t1

0x241f,	// (0x00041146) aid_size_touch_slider_mark_ParamLimits

0x241f,	// (0x00041146) aid_size_touch_slider_mark

0xee81,	// (0x0004dba8) grid_graphic2_catg_pane_ParamLimits

0xee81,	// (0x0004dba8) grid_graphic2_catg_pane

0xef3d,	// (0x0004dc64) popup_grid_graphic2_window_t1_ParamLimits

0xef3d,	// (0x0004dc64) popup_grid_graphic2_window_t1

0xef53,	// (0x0004dc7a) popup_grid_graphic2_window_t2_ParamLimits

0xef53,	// (0x0004dc7a) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0004eac9) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0004eac9) popup_grid_graphic2_window_t

0x3b0e,	// (0x00042835) bg_button_pane_cp05_ParamLimits

0xf0d8,	// (0x0004ddff) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0004deeb) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0004deeb) cell_graphic2_catg_pane

0x3791,	// (0x000424b8) bg_button_pane_cp12

0xf1d6,	// (0x0004defd) cell_graphic2_catg_pane_g1

0x9428,	// (0x0004814f) cell_tb_ext_pane_t1_ParamLimits

0x3050,	// (0x00041d77) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3050,	// (0x00041d77) vkb2_top_cell_right_narrow_pane

0x3068,	// (0x00041d8f) vkb2_top_cell_right_wide_pane_ParamLimits

0x3068,	// (0x00041d8f) vkb2_top_cell_right_wide_pane

0x2733,	// (0x0004145a) bg_vkb2_func_pane_ParamLimits

0x2733,	// (0x0004145a) bg_vkb2_func_pane

0x30d9,	// (0x00041e00) vkb2_top_cell_left_pane_g1_ParamLimits

0x2733,	// (0x0004145a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2733,	// (0x0004145a) bg_vkb2_fuc_pane_cp03

0x3137,	// (0x00041e5e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x559f,	// (0x000442c6) bg_vkb2_func_pane_g1

0x55a7,	// (0x000442ce) bg_vkb2_func_pane_g2

0x55b7,	// (0x000442de) bg_vkb2_func_pane_g3

0x55af,	// (0x000442d6) bg_vkb2_func_pane_g4

0x55bf,	// (0x000442e6) bg_vkb2_func_pane_g5

0x55c7,	// (0x000442ee) bg_vkb2_func_pane_g6

0x55cf,	// (0x000442f6) bg_vkb2_func_pane_g7

0x55d7,	// (0x000442fe) bg_vkb2_func_pane_g8

0x5597,	// (0x000442be) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0004eb1b) bg_vkb2_func_pane_g

0x2733,	// (0x0004145a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2733,	// (0x0004145a) bg_vkb2_fuc_pane_cp01

0x30d9,	// (0x00041e00) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x30d9,	// (0x00041e00) vkb2_top_cell_right_wide_pane_g1

0x2733,	// (0x0004145a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2733,	// (0x0004145a) bg_vkb2_fuc_pane_cp02

0x3137,	// (0x00041e5e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3137,	// (0x00041e5e) vkb2_top_cell_right_narrow_pane_g1

0xe6ea,	// (0x0004d411) aid_touch_area_decrease_ParamLimits

0xe6ea,	// (0x0004d411) aid_touch_area_decrease

0xe724,	// (0x0004d44b) aid_touch_area_increase_ParamLimits

0xe724,	// (0x0004d44b) aid_touch_area_increase

0xe74c,	// (0x0004d473) aid_touch_area_mute_ParamLimits

0xe74c,	// (0x0004d473) aid_touch_area_mute

0xe77c,	// (0x0004d4a3) aid_touch_area_slider_ParamLimits

0xe77c,	// (0x0004d4a3) aid_touch_area_slider

0xe7bc,	// (0x0004d4e3) popup_slider_window_g4_ParamLimits

0xe7bc,	// (0x0004d4e3) popup_slider_window_g4

0xe7e4,	// (0x0004d50b) popup_slider_window_g5_ParamLimits

0xe7e4,	// (0x0004d50b) popup_slider_window_g5

0xe818,	// (0x0004d53f) popup_slider_window_g6_ParamLimits

0xe818,	// (0x0004d53f) popup_slider_window_g6

0x9202,	// (0x00047f29) popup_slider_window_t2_ParamLimits

0x9202,	// (0x00047f29) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0004ea17) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0004ea17) popup_slider_window_t

0xe834,	// (0x0004d55b) slider_pane_ParamLimits

0xe834,	// (0x0004d55b) slider_pane

0x9f39,	// (0x00048c60) slider_pane_g1_ParamLimits

0x9f39,	// (0x00048c60) slider_pane_g1

0x9f4d,	// (0x00048c74) slider_pane_g2_ParamLimits

0x9f4d,	// (0x00048c74) slider_pane_g2

0x9f63,	// (0x00048c8a) slider_pane_g3_ParamLimits

0x9f63,	// (0x00048c8a) slider_pane_g3

0x0003,

0xfe07,	// (0x0004eb2e) slider_pane_g_ParamLimits

0xfe07,	// (0x0004eb2e) slider_pane_g

0xc72d,	// (0x0004b454) popup_tb_float_extension_window_ParamLimits

0xc72d,	// (0x0004b454) popup_tb_float_extension_window

0x9f8f,	// (0x00048cb6) aid_size_cell_tb_float_ext

0x3791,	// (0x000424b8) bg_popup_sub_window_cp28

0x9f9b,	// (0x00048cc2) grid_tb_float_ext_pane

0x9fa5,	// (0x00048ccc) cell_tb_float_ext_pane_ParamLimits

0x9fa5,	// (0x00048ccc) cell_tb_float_ext_pane

0x9fbf,	// (0x00048ce6) cell_tb_float_ext_pane_g1

0x9fc8,	// (0x00048cef) grid_highlight_pane_cp12

0xc97d,	// (0x0004b6a4) cell_last_hwr_side_pane_ParamLimits

0xc97d,	// (0x0004b6a4) cell_last_hwr_side_pane

0x7b53,	// (0x0004687a) cell_last_hwr_side_pane_g1

0x9fd1,	// (0x00048cf8) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x0004eb37) cell_last_hwr_side_pane_g

0xcd6f,	// (0x0004ba96) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd6f,	// (0x0004ba96) vkb2_area_bottom_space_btn_pane

0x7dc1,	// (0x00046ae8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9a7d,	// (0x000487a4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x327d,	// (0x00041fa4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x329c,	// (0x00041fc3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x329c,	// (0x00041fc3) vkb2_area_bottom_space_btn_pane_g1

0x32d6,	// (0x00041ffd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x32d6,	// (0x00041ffd) vkb2_area_bottom_space_btn_pane_g2

0x330c,	// (0x00042033) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x330c,	// (0x00042033) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x0004eb3c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x0004eb3c) vkb2_area_bottom_space_btn_pane_g

0x27e8,	// (0x0004150f) cel_fep_hwr_func_pane_ParamLimits

0x27e8,	// (0x0004150f) cel_fep_hwr_func_pane

0xc952,	// (0x0004b679) cell_hwr_side_button_pane_ParamLimits

0xc952,	// (0x0004b679) cell_hwr_side_button_pane

0x945c,	// (0x00048183) aid_area_touch_clock_ParamLimits

0x3b0e,	// (0x00042835) bg_uniindi_top_pane_ParamLimits

0x946e,	// (0x00048195) uniindi_top_pane_g1_ParamLimits

0x9484,	// (0x000481ab) uniindi_top_pane_g2_ParamLimits

0x9490,	// (0x000481b7) uniindi_top_pane_g3_ParamLimits

0x94a1,	// (0x000481c8) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x0004ea4f) uniindi_top_pane_g_ParamLimits

0x94ae,	// (0x000481d5) uniindi_top_pane_t1_ParamLimits

0x3b0e,	// (0x00042835) bg_vkb2_func_pane_cp01_ParamLimits

0x3b0e,	// (0x00042835) bg_vkb2_func_pane_cp01

0x9fda,	// (0x00048d01) cel_fep_hwr_func_pane_g1_ParamLimits

0x9fda,	// (0x00048d01) cel_fep_hwr_func_pane_g1

0x3b0e,	// (0x00042835) bg_vkb2_func_pane_cp02_ParamLimits

0x3b0e,	// (0x00042835) bg_vkb2_func_pane_cp02

0x9fda,	// (0x00048d01) cell_hwr_side_button_pane_g1_ParamLimits

0x9fda,	// (0x00048d01) cell_hwr_side_button_pane_g1

0x5418,	// (0x0004413f) status_pane_g4_ParamLimits

0x5418,	// (0x0004413f) status_pane_g4

0x5432,	// (0x00044159) status_pane_t1

0x786d,	// (0x00046594) form2_midp_gauge_slider_cont_pane

0x7875,	// (0x0004659c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe143,	// (0x0004ce6a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe157,	// (0x0004ce7e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0004e81b) form2_midp_gauge_slider_pane_t_ParamLimits

0x78ab,	// (0x000465d2) form2_midp_slider_pane_ParamLimits

0x2c6e,	// (0x00041995) aid_size_cell_func_vkb2_ParamLimits

0x2c6e,	// (0x00041995) aid_size_cell_func_vkb2

0x9f7b,	// (0x00048ca2) slider_pane_g4_ParamLimits

0x9f7b,	// (0x00048ca2) slider_pane_g4

0xcdd0,	// (0x0004baf7) form2_midp_gauge_slider_pane_t2_cp01

0xcde0,	// (0x0004bb07) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcde0,	// (0x0004bb07) form2_midp_gauge_slider_pane_t3_cp01

0x3381,	// (0x000420a8) form2_midp_slider_pane_cp01

0x3791,	// (0x000424b8) navi_smil_pane

0xa013,	// (0x00048d3a) navi_smil_pane_g1

0xa01b,	// (0x00048d42) navi_smil_pane_t1

0x9fe8,	// (0x00048d0f) form2_midp_slider_pane_g1

0x9ff1,	// (0x00048d18) form2_midp_slider_pane_g2

0x9ff9,	// (0x00048d20) form2_midp_slider_pane_g3

0x9fe8,	// (0x00048d0f) form2_midp_slider_pane_g4

0xf1df,	// (0x0004df06) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x0004eb45) form2_midp_slider_pane_g

0x3346,	// (0x0004206d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3346,	// (0x0004206d) vkb2_area_bottom_space_btn_pane_g4

0xd86f,	// (0x0004c596) lc0_navi_pane_ParamLimits

0xd86f,	// (0x0004c596) lc0_navi_pane

0xd8d9,	// (0x0004c600) lc0_stat_indi_pane_ParamLimits

0xd8d9,	// (0x0004c600) lc0_stat_indi_pane

0xd8ee,	// (0x0004c615) ls0_title_pane_ParamLimits

0xd8ee,	// (0x0004c615) ls0_title_pane

0x4103,	// (0x00042e2a) bg_popup_sub_pane_cp14_ParamLimits

0x9443,	// (0x0004816a) list_uniindi_pane_ParamLimits

0x944f,	// (0x00048176) uniindi_top_pane_ParamLimits

0x94eb,	// (0x00048212) list_single_uniindi_pane_g1_ParamLimits

0x94fe,	// (0x00048225) list_single_uniindi_pane_t1_ParamLimits

0xcdff,	// (0x0004bb26) lc0_stat_clock_pane_ParamLimits

0xcdff,	// (0x0004bb26) lc0_stat_clock_pane

0xf1ea,	// (0x0004df11) lc0_stat_indi_pane_g1_ParamLimits

0xf1ea,	// (0x0004df11) lc0_stat_indi_pane_g1

0xf1f7,	// (0x0004df1e) lc0_stat_indi_pane_g2_ParamLimits

0xf1f7,	// (0x0004df1e) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x0004eb50) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x0004eb50) lc0_stat_indi_pane_g

0xce0c,	// (0x0004bb33) lc0_uni_indicator_pane_ParamLimits

0xce0c,	// (0x0004bb33) lc0_uni_indicator_pane

0xf204,	// (0x0004df2b) ls0_title_pane_g1_ParamLimits

0xf204,	// (0x0004df2b) ls0_title_pane_g1

0xf218,	// (0x0004df3f) ls0_title_pane_t1_ParamLimits

0xf218,	// (0x0004df3f) ls0_title_pane_t1

0xce19,	// (0x0004bb40) lc0_uni_indicator_pane_g1_ParamLimits

0xce19,	// (0x0004bb40) lc0_uni_indicator_pane_g1

0xa08d,	// (0x00048db4) lc0_stat_clock_pane_t1

0x3791,	// (0x000424b8) main_ai5_pane

0xa09b,	// (0x00048dc2) ai5_sk_pane_ParamLimits

0xa09b,	// (0x00048dc2) ai5_sk_pane

0xf246,	// (0x0004df6d) cell_ai5_widget_pane_ParamLimits

0xf246,	// (0x0004df6d) cell_ai5_widget_pane

0xa172,	// (0x00048e99) aid_size_cell_widget_grid

0xa188,	// (0x00048eaf) bg_ai5_widget_pane_ParamLimits

0xa188,	// (0x00048eaf) bg_ai5_widget_pane

0xa1fc,	// (0x00048f23) cell_ai5_widget_pane_g2

0xa20c,	// (0x00048f33) cell_ai5_widget_pane_g3

0xa223,	// (0x00048f4a) cell_ai5_widget_pane_g4

0xa22f,	// (0x00048f56) cell_ai5_widget_pane_g5

0xa23b,	// (0x00048f62) cell_ai5_widget_pane_g6

0xa247,	// (0x00048f6e) cell_ai5_widget_pane_g7

0xa28f,	// (0x00048fb6) cell_ai5_widget_pane_t1_ParamLimits

0xa28f,	// (0x00048fb6) cell_ai5_widget_pane_t1

0xa2ac,	// (0x00048fd3) cell_ai5_widget_pane_t2_ParamLimits

0xa2ac,	// (0x00048fd3) cell_ai5_widget_pane_t2

0xa2c4,	// (0x00048feb) cell_ai5_widget_pane_t3_ParamLimits

0xa2c4,	// (0x00048feb) cell_ai5_widget_pane_t3

0xa2dc,	// (0x00049003) cell_ai5_widget_pane_t4_ParamLimits

0xa2dc,	// (0x00049003) cell_ai5_widget_pane_t4

0xa2f9,	// (0x00049020) cell_ai5_widget_pane_t5_ParamLimits

0xa2f9,	// (0x00049020) cell_ai5_widget_pane_t5

0xa318,	// (0x0004903f) cell_ai5_widget_pane_t6_ParamLimits

0xa318,	// (0x0004903f) cell_ai5_widget_pane_t6

0xa32a,	// (0x00049051) cell_ai5_widget_pane_t7_ParamLimits

0xa32a,	// (0x00049051) cell_ai5_widget_pane_t7

0xa343,	// (0x0004906a) cell_ai5_widget_pane_t8_ParamLimits

0xa343,	// (0x0004906a) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x0004eb6a) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x0004eb6a) cell_ai5_widget_pane_t

0xa397,	// (0x000490be) grid_ai5_widget_pane

0x4103,	// (0x00042e2a) highlight_cell_ai5_widget_pane_ParamLimits

0x4103,	// (0x00042e2a) highlight_cell_ai5_widget_pane

0xf2b0,	// (0x0004dfd7) ai5_sk_left_pane

0xf2ba,	// (0x0004dfe1) ai5_sk_middle_pane

0xf2c4,	// (0x0004dfeb) ai5_sk_right_pane

0xa3cd,	// (0x000490f4) bg_ai5_widget_pane_g1_ParamLimits

0xa3cd,	// (0x000490f4) bg_ai5_widget_pane_g1

0xa3d9,	// (0x00049100) bg_ai5_widget_pane_g2_ParamLimits

0xa3d9,	// (0x00049100) bg_ai5_widget_pane_g2

0xa3e5,	// (0x0004910c) bg_ai5_widget_pane_g3_ParamLimits

0xa3e5,	// (0x0004910c) bg_ai5_widget_pane_g3

0xa3f1,	// (0x00049118) bg_ai5_widget_pane_g4_ParamLimits

0xa3f1,	// (0x00049118) bg_ai5_widget_pane_g4

0xa3fd,	// (0x00049124) bg_ai5_widget_pane_g5_ParamLimits

0xa3fd,	// (0x00049124) bg_ai5_widget_pane_g5

0xa409,	// (0x00049130) bg_ai5_widget_pane_g6_ParamLimits

0xa409,	// (0x00049130) bg_ai5_widget_pane_g6

0xa415,	// (0x0004913c) bg_ai5_widget_pane_g7_ParamLimits

0xa415,	// (0x0004913c) bg_ai5_widget_pane_g7

0xa421,	// (0x00049148) bg_ai5_widget_pane_g8_ParamLimits

0xa421,	// (0x00049148) bg_ai5_widget_pane_g8

0xa42d,	// (0x00049154) bg_ai5_widget_pane_g9_ParamLimits

0xa42d,	// (0x00049154) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x0004eb7f) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0004eb7f) bg_ai5_widget_pane_g

0xa45f,	// (0x00049186) cell_shortcut_ai5_widget_pane_ParamLimits

0xa45f,	// (0x00049186) cell_shortcut_ai5_widget_pane

0x4d53,	// (0x00043a7a) bg_cell_shortcut_ai5_widget_pane

0xa470,	// (0x00049197) cell_grid_ai5_widget_pane_g1

0x4d53,	// (0x00043a7a) highlight_cell_shortcut_ai5_widget_pane

0x55a7,	// (0x000442ce) ai5_sk_left_pane_g1

0xa479,	// (0x000491a0) ai5_sk_left_pane_g2

0xa481,	// (0x000491a8) ai5_sk_left_pane_g3

0xa489,	// (0x000491b0) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x0004eb92) ai5_sk_left_pane_g

0xa491,	// (0x000491b8) ai5_sk_left_pane_t1

0x559f,	// (0x000442c6) ai5_sk_right_pane_g1

0xa49f,	// (0x000491c6) ai5_sk_right_pane_g2

0xa4a7,	// (0x000491ce) ai5_sk_right_pane_g3

0xa4af,	// (0x000491d6) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x0004eb9b) ai5_sk_right_pane_g

0xa4b7,	// (0x000491de) ai5_sk_right_pane_t1

0x559f,	// (0x000442c6) ai5_sk_middle_pane_g1

0x55a7,	// (0x000442ce) ai5_sk_middle_pane_g2

0x55bf,	// (0x000442e6) ai5_sk_middle_pane_g3

0xa4a7,	// (0x000491ce) ai5_sk_middle_pane_g4

0xa481,	// (0x000491a8) ai5_sk_middle_pane_g5

0xa4c5,	// (0x000491ec) ai5_sk_middle_pane_g6

0xf2ce,	// (0x0004dff5) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x0004eba4) ai5_sk_middle_pane_g

0xd75b,	// (0x0004c482) aid_touch_area_size_lc0_ParamLimits

0xd75b,	// (0x0004c482) aid_touch_area_size_lc0

0x2973,	// (0x0004169a) cell_hwr_candidate_pane_t1_ParamLimits

0x50ef,	// (0x00043e16) aid_touch_navi_pane

0xd9e7,	// (0x0004c70e) status_dt_navi_pane_ParamLimits

0xd9e7,	// (0x0004c70e) status_dt_navi_pane

0xd9ff,	// (0x0004c726) status_dt_sta_pane_ParamLimits

0xd9ff,	// (0x0004c726) status_dt_sta_pane

0xf2d6,	// (0x0004dffd) dt_sta_controll_pane

0xf2e3,	// (0x0004e00a) dt_sta_indi_pane

0xf2f0,	// (0x0004e017) dt_sta_title_pane

0x3b0e,	// (0x00042835) bg_dt_sta_indi_pane_ParamLimits

0x3b0e,	// (0x00042835) bg_dt_sta_indi_pane

0xa506,	// (0x0004922d) dt_sta_battery_pane

0xf302,	// (0x0004e029) dt_sta_indi_pane_g1

0xf30b,	// (0x0004e032) dt_sta_indi_pane_g2

0xf314,	// (0x0004e03b) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x0004ebb3) dt_sta_indi_pane_g

0xf31d,	// (0x0004e044) dt_sta_signal_pane

0x4103,	// (0x00042e2a) bg_dt_sta_title_pane_ParamLimits

0x4103,	// (0x00042e2a) bg_dt_sta_title_pane

0xa532,	// (0x00049259) dt_sta_title_pane_g1

0xf326,	// (0x0004e04d) dt_sta_title_pane_t1_ParamLimits

0xf326,	// (0x0004e04d) dt_sta_title_pane_t1

0x3791,	// (0x000424b8) bg_dt_sta_control_pane

0xf33b,	// (0x0004e062) dt_sta_controll_pane_g1

0xa558,	// (0x0004927f) bg_dt_sta_title_pane_g1

0xa561,	// (0x00049288) bg_dt_sta_title_pane_g2

0xa56a,	// (0x00049291) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x0004ebba) bg_dt_sta_title_pane_g

0x7b53,	// (0x0004687a) bg_dt_sta_indi_pane_g1

0xa573,	// (0x0004929a) dt_sta_signal_pane_g1

0xa57b,	// (0x000492a2) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x0004ebc1) dt_sta_signal_pane_g

0xa583,	// (0x000492aa) dt_sta_battery_pane_g1

0xa58c,	// (0x000492b3) dt_sta_battery_pane_t1

0x7b53,	// (0x0004687a) bg_dt_sta_control_pane_g1

0x4855,	// (0x0004357c) fep_china_uni_eep_pane

0x485d,	// (0x00043584) fep_china_uni_entry_pane_ParamLimits

0x486d,	// (0x00043594) popup_fep_china_uni_window_g1_ParamLimits

0x487d,	// (0x000435a4) popup_fep_china_uni_window_g2_ParamLimits

0x487d,	// (0x000435a4) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0004e444) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0004e444) popup_fep_china_uni_window_g

0xa59b,	// (0x000492c2) fep_china_uni_eep_pane_g1

0xa5a3,	// (0x000492ca) fep_china_uni_eep_pane_t1

0xa00a,	// (0x00048d31) aid_touch_area_size_smil_player

0x523b,	// (0x00043f62) lc0_clock_pane

0x5426,	// (0x0004414d) status_pane_g5_ParamLimits

0x5426,	// (0x0004414d) status_pane_g5

0xc2bb,	// (0x0004afe2) popup_keymap_window

0x53ec,	// (0x00044113) status_icon_pane

0xa20c,	// (0x00048f33) cell_ai5_widget_pane_g3_ParamLimits

0xa223,	// (0x00048f4a) cell_ai5_widget_pane_g4_ParamLimits

0xa22f,	// (0x00048f56) cell_ai5_widget_pane_g5_ParamLimits

0xa253,	// (0x00048f7a) cell_ai5_widget_pane_g8_ParamLimits

0xa253,	// (0x00048f7a) cell_ai5_widget_pane_g8

0xa267,	// (0x00048f8e) cell_ai5_widget_pane_g9_ParamLimits

0xa267,	// (0x00048f8e) cell_ai5_widget_pane_g9

0xa27b,	// (0x00048fa2) cell_ai5_widget_pane_g10_ParamLimits

0xa27b,	// (0x00048fa2) cell_ai5_widget_pane_g10

0xa5b2,	// (0x000492d9) status_icon_pane_g1

0x3791,	// (0x000424b8) bg_popup_sub_pane_cp13

0xa5ba,	// (0x000492e1) popup_keymap_window_t1

0xd6e9,	// (0x0004c410) control_pane_g6_ParamLimits

0xd6e9,	// (0x0004c410) control_pane_g6

0xd6f6,	// (0x0004c41d) control_pane_g7_ParamLimits

0xd6f6,	// (0x0004c41d) control_pane_g7

0xd703,	// (0x0004c42a) control_pane_g8_ParamLimits

0xd703,	// (0x0004c42a) control_pane_g8

0xf2d6,	// (0x0004dffd) dt_sta_controll_pane_ParamLimits

0xf2e3,	// (0x0004e00a) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0004e017) dt_sta_title_pane_ParamLimits

0x4017,	// (0x00042d3e) aid_size_touch_scroll_bar_cale

0x12f1,	// (0x00040018) popup_discreet_window_ParamLimits

0x12f1,	// (0x00040018) popup_discreet_window

0xbebe,	// (0x0004abe5) popup_sk_window

0x5c1d,	// (0x00044944) bg_popup_sub_pane_cp28_ParamLimits

0x5c1d,	// (0x00044944) bg_popup_sub_pane_cp28

0xa5c8,	// (0x000492ef) popup_discreet_window_g1_ParamLimits

0xa5c8,	// (0x000492ef) popup_discreet_window_g1

0xa5e8,	// (0x0004930f) popup_discreet_window_t1_ParamLimits

0xa5e8,	// (0x0004930f) popup_discreet_window_t1

0xa606,	// (0x0004932d) popup_discreet_window_t2_ParamLimits

0xa606,	// (0x0004932d) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x0004ebc6) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x0004ebc6) popup_discreet_window_t

0x33b9,	// (0x000420e0) popup_sk_window_g1

0x33c3,	// (0x000420ea) popup_sk_window_g2

0x0001,

0xfea6,	// (0x0004ebcd) popup_sk_window_g

0x33cd,	// (0x000420f4) popup_sk_window_t1

0x33db,	// (0x00042102) popup_sk_window_t1_copy1

0xa1fc,	// (0x00048f23) cell_ai5_widget_pane_g2_ParamLimits

0xa355,	// (0x0004907c) cell_ai5_widget_pane_t9_ParamLimits

0xa355,	// (0x0004907c) cell_ai5_widget_pane_t9

0x3791,	// (0x000424b8) main_fep_fshwr2_pane

0xce47,	// (0x0004bb6e) aid_fshwr2_btn_pane

0xce58,	// (0x0004bb7f) aid_fshwr2_syb_pane

0xce69,	// (0x0004bb90) aid_fshwr2_txt_pane

0xce75,	// (0x0004bb9c) fshwr2_func_candi_pane

0xce94,	// (0x0004bbbb) fshwr2_hwr_syb_pane

0xceaf,	// (0x0004bbd6) fshwr2_icf_pane

0x3791,	// (0x000424b8) fshwr2_icf_bg_pane

0xced8,	// (0x0004bbff) fshwr2_icf_pane_t1_ParamLimits

0xced8,	// (0x0004bbff) fshwr2_icf_pane_t1

0x4747,	// (0x0004346e) fshwr2_func_candi_pane_g1

0xf344,	// (0x0004e06b) fshwr2_func_candi_row_pane_ParamLimits

0xf344,	// (0x0004e06b) fshwr2_func_candi_row_pane

0xcef1,	// (0x0004bc18) cell_fshwr2_syb_pane_ParamLimits

0xcef1,	// (0x0004bc18) cell_fshwr2_syb_pane

0x7dc1,	// (0x00046ae8) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7dc1,	// (0x00046ae8) fshwr2_hwr_syb_pane_g1

0x3791,	// (0x000424b8) bg_popup_call_pane_cp01

0xcf07,	// (0x0004bc2e) fshwr2_func_candi_cell_pane_ParamLimits

0xcf07,	// (0x0004bc2e) fshwr2_func_candi_cell_pane

0xf354,	// (0x0004e07b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf354,	// (0x0004e07b) fshwr2_func_candi_cell_bg_pane

0xcf3c,	// (0x0004bc63) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf3c,	// (0x0004bc63) fshwr2_func_candi_cell_pane_g1

0xcf6b,	// (0x0004bc92) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf6b,	// (0x0004bc92) fshwr2_func_candi_cell_pane_t1

0x3791,	// (0x000424b8) bg_button_pane_cp08

0x6f3a,	// (0x00045c61) cell_fshwr2_syb_bg_pane

0xcf7e,	// (0x0004bca5) cell_fshwr2_syb_bg_pane_g1

0xcf86,	// (0x0004bcad) cell_fshwr2_syb_bg_pane_t1

0x4103,	// (0x00042e2a) main_tmo_pane

0xdce1,	// (0x0004ca08) uni_indicator_pane_g1_ParamLimits

0xdcf7,	// (0x0004ca1e) uni_indicator_pane_g2_ParamLimits

0xdd0d,	// (0x0004ca34) uni_indicator_pane_g3_ParamLimits

0x6773,	// (0x0004549a) uni_indicator_pane_g4_ParamLimits

0x6773,	// (0x0004549a) uni_indicator_pane_g4

0x6787,	// (0x000454ae) uni_indicator_pane_g5_ParamLimits

0x6787,	// (0x000454ae) uni_indicator_pane_g5

0x6787,	// (0x000454ae) uni_indicator_pane_g6_ParamLimits

0x6787,	// (0x000454ae) uni_indicator_pane_g6

0xf91c,	// (0x0004e643) uni_indicator_pane_g_ParamLimits

0xe6cc,	// (0x0004d3f3) popup_tmo_note_window_ParamLimits

0xe6cc,	// (0x0004d3f3) popup_tmo_note_window

0x4103,	// (0x00042e2a) fshwr2_bg_pane

0xcf5c,	// (0x0004bc83) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf5c,	// (0x0004bc83) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x0004ebd2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x0004ebd2) fshwr2_func_candi_cell_pane_g

0x7b53,	// (0x0004687a) bg_popup_window_pane_cp01

0x3508,	// (0x0004222f) bg_popup_window_pane_g1_cp01

0xa668,	// (0x0004938f) bg_popup_window_pane_cp22_ParamLimits

0xa668,	// (0x0004938f) bg_popup_window_pane_cp22

0xa676,	// (0x0004939d) listscroll_tmo_link_pane_ParamLimits

0xa676,	// (0x0004939d) listscroll_tmo_link_pane

0xa6b6,	// (0x000493dd) popup_tmo_note_window_g1_ParamLimits

0xa6b6,	// (0x000493dd) popup_tmo_note_window_g1

0xa6c3,	// (0x000493ea) tmo_note_info_pane_ParamLimits

0xa6c3,	// (0x000493ea) tmo_note_info_pane

0xf360,	// (0x0004e087) list_tmo_note_info_pane_g1_ParamLimits

0xf360,	// (0x0004e087) list_tmo_note_info_pane_g1

0xa6f4,	// (0x0004941b) list_tmo_note_info_pane_g2_ParamLimits

0xa6f4,	// (0x0004941b) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x0004ebd7) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x0004ebd7) list_tmo_note_info_pane_g

0xa710,	// (0x00049437) list_tmo_note_info_text_pane_ParamLimits

0xa710,	// (0x00049437) list_tmo_note_info_text_pane

0xa793,	// (0x000494ba) list_tmo_link_pane

0xa7a0,	// (0x000494c7) scroll_pane_cp20

0xa7ad,	// (0x000494d4) list_single_tmo_link_pane_ParamLimits

0xa7ad,	// (0x000494d4) list_single_tmo_link_pane

0xa7bd,	// (0x000494e4) list_single_tmo_link_pane_t1

0xa7cb,	// (0x000494f2) list_tmo_note_info_text_pane_t1_ParamLimits

0xa7cb,	// (0x000494f2) list_tmo_note_info_text_pane_t1

0xd340,	// (0x0004c067) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd340,	// (0x0004c067) aid_size_touch_scroll_bar_cp01

0xbb17,	// (0x0004a83e) aid_size_touch_slider_marker

0xbeae,	// (0x0004abd5) popup_settings_window_ParamLimits

0xbeae,	// (0x0004abd5) popup_settings_window

0x0943,	// (0x0003f66a) popup_candi_list_indi_window

0x50ef,	// (0x00043e16) aid_touch_navi_pane_ParamLimits

0x2bc7,	// (0x000418ee) rs_clock_indi_pane

0x2bd0,	// (0x000418f7) sctrl_sk_bottom_pane_ParamLimits

0x2be1,	// (0x00041908) sctrl_sk_top_pane_ParamLimits

0x2cc8,	// (0x000419ef) popup_fep_tooltip_window

0xa172,	// (0x00048e99) aid_size_cell_widget_grid_ParamLimits

0xa1e7,	// (0x00048f0e) cell_ai5_widget_pane_g1_ParamLimits

0xa1e7,	// (0x00048f0e) cell_ai5_widget_pane_g1

0xa23b,	// (0x00048f62) cell_ai5_widget_pane_g6_ParamLimits

0xa247,	// (0x00048f6e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x0004eb55) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0004eb55) cell_ai5_widget_pane_g

0xa379,	// (0x000490a0) cell_ai5_widget_pane_t10_ParamLimits

0xa379,	// (0x000490a0) cell_ai5_widget_pane_t10

0xa397,	// (0x000490be) grid_ai5_widget_pane_ParamLimits

0xa439,	// (0x00049160) cell_contacts_ai5_widget_pane_ParamLimits

0xa439,	// (0x00049160) cell_contacts_ai5_widget_pane

0xa61b,	// (0x00049342) popup_discreet_window_t3_ParamLimits

0xa61b,	// (0x00049342) popup_discreet_window_t3

0xcec4,	// (0x0004bbeb) popup_fshwr2_char_preview_window_ParamLimits

0xcec4,	// (0x0004bbeb) popup_fshwr2_char_preview_window

0xf377,	// (0x0004e09e) tmo_note_info_pane_t1

0xf38c,	// (0x0004e0b3) tmo_note_info_pane_t2

0xf3a5,	// (0x0004e0cc) tmo_note_info_pane_t3

0xa76f,	// (0x00049496) tmo_note_info_pane_t4

0xa781,	// (0x000494a8) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x0004ebdc) tmo_note_info_pane_t

0xa793,	// (0x000494ba) list_tmo_link_pane_ParamLimits

0xa7a0,	// (0x000494c7) scroll_pane_cp20_ParamLimits

0x3791,	// (0x000424b8) bg_popup_fep_char_preview_window_cp01

0xa7e4,	// (0x0004950b) popup_fshwr2_char_preview_window_t1

0xa7f2,	// (0x00049519) popup_candi_list_indi_window_g1

0xa7fb,	// (0x00049522) bg_cell_contacts_ai5_widget_pane

0xa807,	// (0x0004952e) cell_contacts_ai5_widget_pane_g1

0xa81c,	// (0x00049543) cell_contacts_ai5_widget_pane_g2

0xa828,	// (0x0004954f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x0004ebe7) cell_contacts_ai5_widget_pane_g

0xa834,	// (0x0004955b) cell_contacts_ai5_widget_pane_t1

0x4103,	// (0x00042e2a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3ba,	// (0x0004e0e1) settings_container_pane

0x4d53,	// (0x00043a7a) listscroll_set_pane_copy1

0x7229,	// (0x00045f50) scroll_pane_cp121_copy1

0xa8b7,	// (0x000495de) set_content_pane_copy1

0xf3c6,	// (0x0004e0ed) aid_height_set_list_copy1_ParamLimits

0xf3c6,	// (0x0004e0ed) aid_height_set_list_copy1

0x697a,	// (0x000456a1) aid_size_parent_copy1_ParamLimits

0x697a,	// (0x000456a1) aid_size_parent_copy1

0xf3d2,	// (0x0004e0f9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3d2,	// (0x0004e0f9) button_value_adjust_pane_cp6_copy1

0x508d,	// (0x00043db4) list_highlight_pane_cp2_copy1_ParamLimits

0x508d,	// (0x00043db4) list_highlight_pane_cp2_copy1

0xf3e6,	// (0x0004e10d) list_set_pane_copy1_ParamLimits

0xf3e6,	// (0x0004e10d) list_set_pane_copy1

0xa846,	// (0x0004956d) main_pane_set_t1_copy1_ParamLimits

0xa846,	// (0x0004956d) main_pane_set_t1_copy1

0xa880,	// (0x000495a7) main_pane_set_t2_copy1_ParamLimits

0xa880,	// (0x000495a7) main_pane_set_t2_copy1

0xa98c,	// (0x000496b3) main_pane_set_t3_copy1

0xa99a,	// (0x000496c1) main_pane_set_t4_copy1

0xa89f,	// (0x000495c6) set_content_pane_g1_copy1_ParamLimits

0xa89f,	// (0x000495c6) set_content_pane_g1_copy1

0xf493,	// (0x0004e1ba) setting_code_pane_copy1

0xa9b0,	// (0x000496d7) setting_slider_graphic_pane_copy1

0xa9b0,	// (0x000496d7) setting_slider_pane_copy1

0xa9b0,	// (0x000496d7) setting_text_pane_copy1

0xa9b0,	// (0x000496d7) setting_volume_pane_copy1

0xf493,	// (0x0004e1ba) settings_code_pane_cp2_copy1

0xf49b,	// (0x0004e1c2) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0004e1c2) settings_code_pane_cp_copy1

0xcf95,	// (0x0004bcbc) volume_set_pane_copy1

0xf4af,	// (0x0004e1d6) volume_set_pane_g10_copy1

0xf4b7,	// (0x0004e1de) volume_set_pane_g1_copy1

0xf4bf,	// (0x0004e1e6) volume_set_pane_g2_copy1

0xf4c7,	// (0x0004e1ee) volume_set_pane_g3_copy1

0xf4cf,	// (0x0004e1f6) volume_set_pane_g4_copy1

0xf4d7,	// (0x0004e1fe) volume_set_pane_g5_copy1

0xf4df,	// (0x0004e206) volume_set_pane_g6_copy1

0xf4e7,	// (0x0004e20e) volume_set_pane_g7_copy1

0xf4ef,	// (0x0004e216) volume_set_pane_g8_copy1

0xf4f7,	// (0x0004e21e) volume_set_pane_g9_copy1

0x3885,	// (0x000425ac) bg_set_opt_pane_cp_copy1_ParamLimits

0x3885,	// (0x000425ac) bg_set_opt_pane_cp_copy1

0x3519,	// (0x00042240) setting_slider_pane_t1_copy1_ParamLimits

0x3519,	// (0x00042240) setting_slider_pane_t1_copy1

0xcf9d,	// (0x0004bcc4) setting_slider_pane_t2_copy1_ParamLimits

0xcf9d,	// (0x0004bcc4) setting_slider_pane_t2_copy1

0xcfb7,	// (0x0004bcde) setting_slider_pane_t3_copy1_ParamLimits

0xcfb7,	// (0x0004bcde) setting_slider_pane_t3_copy1

0xcfcf,	// (0x0004bcf6) slider_set_pane_copy1_ParamLimits

0xcfcf,	// (0x0004bcf6) slider_set_pane_copy1

0x4152,	// (0x00042e79) set_opt_bg_pane_g1_copy2

0x415a,	// (0x00042e81) set_opt_bg_pane_g2_copy2

0xaa1c,	// (0x00049743) set_opt_bg_pane_g3_copy2

0x416a,	// (0x00042e91) set_opt_bg_pane_g4_copy2

0x4172,	// (0x00042e99) set_opt_bg_pane_g5_copy2

0x417a,	// (0x00042ea1) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0004e226) set_opt_bg_pane_g7_copy2

0xaa2e,	// (0x00049755) set_opt_bg_pane_g8_copy2

0xaa38,	// (0x0004975f) set_opt_bg_pane_g9_copy2

0x357f,	// (0x000422a6) aid_size_touch_slider_mark_copy1_ParamLimits

0x357f,	// (0x000422a6) aid_size_touch_slider_mark_copy1

0xaa42,	// (0x00049769) slider_set_pane_g1_copy1

0x3593,	// (0x000422ba) slider_set_pane_g2_copy1

0x243f,	// (0x00041166) slider_set_pane_g3_copy1_ParamLimits

0x243f,	// (0x00041166) slider_set_pane_g3_copy1

0x2453,	// (0x0004117a) slider_set_pane_g4_copy1_ParamLimits

0x2453,	// (0x0004117a) slider_set_pane_g4_copy1

0x246b,	// (0x00041192) slider_set_pane_g5_copy1_ParamLimits

0x246b,	// (0x00041192) slider_set_pane_g5_copy1

0x243f,	// (0x00041166) slider_set_pane_g6_copy1_ParamLimits

0x243f,	// (0x00041166) slider_set_pane_g6_copy1

0x359b,	// (0x000422c2) slider_set_pane_g7_copy1_ParamLimits

0x359b,	// (0x000422c2) slider_set_pane_g7_copy1

0x37a5,	// (0x000424cc) bg_set_opt_pane_cp2_copy1

0xaa4b,	// (0x00049772) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0004e22e) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0004e23e) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0004e24e) slider_set_pane_cp_copy1

0xaa84,	// (0x000497ab) input_focus_pane_cp1_copy1

0xaa8d,	// (0x000497b4) list_set_text_pane_copy1

0xaa95,	// (0x000497bc) setting_text_pane_g1_copy1

0x1067,	// (0x0003fd8e) set_text_pane_t1_copy1

0xaa84,	// (0x000497ab) input_focus_pane_cp2_copy1

0xaa95,	// (0x000497bc) setting_code_pane_g1_copy1

0xf52f,	// (0x0004e256) setting_code_pane_t1_copy1

0x705d,	// (0x00045d84) list_set_graphic_pane_copy1

0x37a5,	// (0x000424cc) bg_set_opt_pane_cp4_copy1

0xd562,	// (0x0004c289) list_set_graphic_pane_g1_copy1_ParamLimits

0xd562,	// (0x0004c289) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0004e264) list_set_graphic_pane_g2_copy1

0xd57a,	// (0x0004c2a1) list_set_graphic_pane_t1_copy1_ParamLimits

0xd57a,	// (0x0004c2a1) list_set_graphic_pane_t1_copy1

0x7b53,	// (0x0004687a) rs_clock_indi_pane_g1

0xaac8,	// (0x000497ef) rs_clock_indi_pane_t1

0xaad6,	// (0x000497fd) rs_indi_pane

0xaade,	// (0x00049805) rs_indi_pane_g1

0xaae7,	// (0x0004980e) rs_indi_pane_g2

0xaaf0,	// (0x00049817) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x0004ebee) rs_indi_pane_g

0x4d53,	// (0x00043a7a) bg_popup_preview_window_pane_cp03

0xaaf9,	// (0x00049820) popup_fep_tooltip_window_t1

0x87cf,	// (0x000474f6) popup_note2_window_g2_ParamLimits

0x87cf,	// (0x000474f6) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0004e987) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0004e987) popup_note2_window_g

0x8ccb,	// (0x000479f2) bg_popup_sub_pane_cp11_ParamLimits

0x8cd8,	// (0x000479ff) cell_ai3_links_pane_g1_ParamLimits

0x8cef,	// (0x00047a16) cell_ai3_links_pane_t1

0x1067,	// (0x0003fd8e) set_text_pane_t1_copy1_ParamLimits

0x4c64,	// (0x0004398b) cell_graphic_popup_pane_cp2_ParamLimits

0x4c64,	// (0x0004398b) cell_graphic_popup_pane_cp2

0xab07,	// (0x0004982e) cell_graphic_popup_pane_g1_cp2

0x3e2a,	// (0x00042b51) cell_graphic_popup_pane_g2_cp2

0xab0f,	// (0x00049836) cell_graphic_popup_pane_g3_cp2

0xab17,	// (0x0004983e) cell_graphic_popup_pane_t2_cp2

0x3e3b,	// (0x00042b62) grid_highlight_pane_cp3_cp2

0x4492,	// (0x000431b9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4103,	// (0x00042e2a) main_tmo_pane_ParamLimits

0xe6c0,	// (0x0004d3e7) popup_tmo_big_image_note_window

0xa1d6,	// (0x00048efd) cell_ai5_widget_list_pane

0xa1de,	// (0x00048f05) cell_ai5_widget_lrg_icon_pane

0xf377,	// (0x0004e09e) tmo_note_info_pane_t1_ParamLimits

0xf38c,	// (0x0004e0b3) tmo_note_info_pane_t2_ParamLimits

0xf3a5,	// (0x0004e0cc) tmo_note_info_pane_t3_ParamLimits

0xa76f,	// (0x00049496) tmo_note_info_pane_t4_ParamLimits

0xa781,	// (0x000494a8) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x0004ebdc) tmo_note_info_pane_t_ParamLimits

0xf3ba,	// (0x0004e0e1) settings_container_pane_ParamLimits

0xaa7c,	// (0x000497a3) indicator_popup_pane_cp5

0xaa7c,	// (0x000497a3) indicator_popup_pane_cp6

0x705d,	// (0x00045d84) list_set_graphic_pane_copy1_ParamLimits

0x3791,	// (0x000424b8) bg_popup_window_pane_cp23

0xab25,	// (0x0004984c) popup_tmo_big_image_note_window_g1

0xab2e,	// (0x00049855) popup_tmo_big_image_note_window_t1

0xab3e,	// (0x00049865) popup_tmo_big_image_note_window_t2

0xab4e,	// (0x00049875) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x0004ebf5) popup_tmo_big_image_note_window_t

0x7b53,	// (0x0004687a) cell_ai5_widget_lrg_icon_pane_g1

0xab5e,	// (0x00049885) cell_ai5_widget_lrg_icon_pane_t1

0xab6c,	// (0x00049893) cell_ai5_widget_list_row_pane_ParamLimits

0xab6c,	// (0x00049893) cell_ai5_widget_list_row_pane

0xab83,	// (0x000498aa) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab83,	// (0x000498aa) cell_ai5_widget_list_row_pane_g1

0xab90,	// (0x000498b7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab90,	// (0x000498b7) cell_ai5_widget_list_row_pane_t1

0xabbe,	// (0x000498e5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xabbe,	// (0x000498e5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x0004ebfc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x0004ebfc) cell_ai5_widget_list_row_pane_t

0x3791,	// (0x000424b8) main_fep_vtchi_ss_pane

0x35cd,	// (0x000422f4) popup_fep_char_pre_window

0x35d5,	// (0x000422fc) popup_fep_ituss_window

0x35f6,	// (0x0004231d) popup_fep_vkbss_window

0xabe6,	// (0x0004990d) grid_vkbss_keypad_pane_ParamLimits

0xabe6,	// (0x0004990d) grid_vkbss_keypad_pane

0xabf6,	// (0x0004991d) ituss_keypad_pane

0x3621,	// (0x00042348) aid_vkbss_key_offset_ParamLimits

0x3621,	// (0x00042348) aid_vkbss_key_offset

0x362d,	// (0x00042354) cell_vkbss_key_pane_ParamLimits

0x362d,	// (0x00042354) cell_vkbss_key_pane

0x5400,	// (0x00044127) bg_cell_vkbss_key_g1_ParamLimits

0x5400,	// (0x00044127) bg_cell_vkbss_key_g1

0xac05,	// (0x0004992c) cell_vkbss_key_3p_pane_ParamLimits

0xac05,	// (0x0004992c) cell_vkbss_key_3p_pane

0xac1f,	// (0x00049946) cell_vkbss_key_g1_ParamLimits

0xac1f,	// (0x00049946) cell_vkbss_key_g1

0xac39,	// (0x00049960) cell_vkbss_key_t1_ParamLimits

0xac39,	// (0x00049960) cell_vkbss_key_t1

0x3643,	// (0x0004236a) cell_ituss_key_pane_ParamLimits

0x3643,	// (0x0004236a) cell_ituss_key_pane

0xac64,	// (0x0004998b) bg_cell_ituss_key_g1_ParamLimits

0xac64,	// (0x0004998b) bg_cell_ituss_key_g1

0xac70,	// (0x00049997) cell_ituss_key_pane_g1_ParamLimits

0xac70,	// (0x00049997) cell_ituss_key_pane_g1

0x3654,	// (0x0004237b) cell_ituss_key_pane_g2_ParamLimits

0x3654,	// (0x0004237b) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x0004ec03) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x0004ec03) cell_ituss_key_pane_g

0x3680,	// (0x000423a7) cell_ituss_key_t1_ParamLimits

0x3680,	// (0x000423a7) cell_ituss_key_t1

0x36ba,	// (0x000423e1) cell_ituss_key_t2_ParamLimits

0x36ba,	// (0x000423e1) cell_ituss_key_t2

0x36eb,	// (0x00042412) cell_ituss_key_t3_ParamLimits

0x36eb,	// (0x00042412) cell_ituss_key_t3

0x36ba,	// (0x000423e1) cell_ituss_key_t4_ParamLimits

0x36ba,	// (0x000423e1) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x0004ec0a) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0004ec0a) cell_ituss_key_t

0xac96,	// (0x000499bd) cell_vkbss_key_3p_pane_g1

0xac9e,	// (0x000499c5) cell_vkbss_key_3p_pane_g2

0xaca6,	// (0x000499cd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0004ec15) cell_vkbss_key_3p_pane_g

0x3791,	// (0x000424b8) bg_popup_fep_char_preview_window_cp02

0x372e,	// (0x00042455) popup_fep_char_pre_window_t1

0xf2a6,	// (0x0004dfcd) main_ai5_sk_pane

0xa7fb,	// (0x00049522) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa807,	// (0x0004952e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa81c,	// (0x00049543) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa828,	// (0x0004954f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x0004ebe7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa834,	// (0x0004955b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4103,	// (0x00042e2a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0004e26c) main_ai5_sk_pane_g1

0x5a5b,	// (0x00044782) popup_query_code_window_g1

0x35eb,	// (0x00042312) popup_fep_vkb_icf_pane

0x35ff,	// (0x00042326) popup_fep_vtchi_icf_pane

0xacb7,	// (0x000499de) bg_icf_pane

0xacc3,	// (0x000499ea) list_vkb_icf_pane

0x508d,	// (0x00043db4) bg_icf_pane_cp01

0xaccf,	// (0x000499f6) vtchi_icf_list_pane

0xace0,	// (0x00049a07) list_vkb_icf_pane_t1_ParamLimits

0xace0,	// (0x00049a07) list_vkb_icf_pane_t1

0xacf8,	// (0x00049a1f) vtchi_icf_list_pane_t1_ParamLimits

0xacf8,	// (0x00049a1f) vtchi_icf_list_pane_t1

0x35d5,	// (0x000422fc) popup_fep_ituss_window_ParamLimits

0x35ff,	// (0x00042326) popup_fep_vtchi_icf_pane_ParamLimits

0xabf6,	// (0x0004991d) ituss_keypad_pane_ParamLimits

0x3615,	// (0x0004233c) ituss_sks_pane

0xacb7,	// (0x000499de) bg_icf_pane_ParamLimits

0x35b1,	// (0x000422d8) icf_edit_indi_pane_ParamLimits

0x35b1,	// (0x000422d8) icf_edit_indi_pane

0xacc3,	// (0x000499ea) list_vkb_icf_pane_ParamLimits

0x508d,	// (0x00043db4) bg_icf_pane_cp01_ParamLimits

0x35c0,	// (0x000422e7) icf_edit_indi_pane_cp01_ParamLimits

0x35c0,	// (0x000422e7) icf_edit_indi_pane_cp01

0xacd7,	// (0x000499fe) vtchi_query_pane

0x7dc1,	// (0x00046ae8) icf_edit_indi_pane_g1_ParamLimits

0x7dc1,	// (0x00046ae8) icf_edit_indi_pane_g1

0x3750,	// (0x00042477) icf_edit_indi_pane_g2_ParamLimits

0x3750,	// (0x00042477) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x0004ec2d) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x0004ec2d) icf_edit_indi_pane_g

0x375f,	// (0x00042486) icf_edit_indi_pane_t1

0xad1a,	// (0x00049a41) bg_input_focus_pane_cp042

0x400e,	// (0x00042d35) vtchi_button_pane

0xad23,	// (0x00049a4a) vtchi_query_pane_t1

0xad31,	// (0x00049a58) vtchi_query_pane_t2

0xad3f,	// (0x00049a66) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x0004ec1c) vtchi_query_pane_t

0x3791,	// (0x000424b8) bg_button_pane_cp13

0xad4d,	// (0x00049a74) vtchi_button_pane_g1

0x373d,	// (0x00042464) ituss_sks_pane_g1

0x3748,	// (0x0004246f) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x0004ec23) ituss_sks_pane_g

0xad55,	// (0x00049a7c) ituss_sks_pane_t1

0xad63,	// (0x00049a8a) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0004ec28) ituss_sks_pane_t

0x759d,	// (0x000462c4) indicator_nsta_pane_cp_g1

0x75a6,	// (0x000462cd) indicator_nsta_pane_cp_g2

0x75ae,	// (0x000462d5) indicator_nsta_pane_cp_g3

0x75b6,	// (0x000462dd) indicator_nsta_pane_cp_g4

0x75be,	// (0x000462e5) indicator_nsta_pane_cp_g5

0x75be,	// (0x000462e5) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0004e7d1) indicator_nsta_pane_cp_g

0xf0bb,	// (0x0004dde2) cell_graphic2_pane_t2_ParamLimits

0xf0bb,	// (0x0004dde2) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x0004eade) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x0004eade) cell_graphic2_pane_t

0xf0ee,	// (0x0004de15) cell_graphic2_control_pane_t1

0xd4fc,	// (0x0004c223) signal_pane_g3_ParamLimits

0xd4fc,	// (0x0004c223) signal_pane_g3

0xd510,	// (0x0004c237) signal_pane_g4_ParamLimits

0xd510,	// (0x0004c237) signal_pane_g4

0xabd0,	// (0x000498f7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xabd0,	// (0x000498f7) cell_ai5_widget_list_row_pane_t3

0xac84,	// (0x000499ab) cell_ituss_key_pane_t1_ParamLimits

0xac84,	// (0x000499ab) cell_ituss_key_pane_t1

0x5699,	// (0x000443c0) form_field_data_wide_pane_vc_t2_ParamLimits

0x5699,	// (0x000443c0) form_field_data_wide_pane_vc_t2

0x56ad,	// (0x000443d4) form_field_data_wide_pane_vc_t3_ParamLimits

0x56ad,	// (0x000443d4) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0004e52b) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0004e52b) form_field_data_wide_pane_vc_t

0x7269,	// (0x00045f90) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7269,	// (0x00045f90) form_field_slider_wide_pane_vc_t3

0x7343,	// (0x0004606a) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7343,	// (0x0004606a) form_field_popup_wide_pane_vc_t2

0x735a,	// (0x00046081) form_field_popup_wide_pane_vc_t3_ParamLimits

0x735a,	// (0x00046081) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0004e7c0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0004e7c0) form_field_popup_wide_pane_vc_t

0xce47,	// (0x0004bb6e) aid_fshwr2_btn_pane_ParamLimits

0xce58,	// (0x0004bb7f) aid_fshwr2_syb_pane_ParamLimits

0xce69,	// (0x0004bb90) aid_fshwr2_txt_pane_ParamLimits

0x4103,	// (0x00042e2a) fshwr2_bg_pane_ParamLimits

0xce75,	// (0x0004bb9c) fshwr2_func_candi_pane_ParamLimits

0xce94,	// (0x0004bbbb) fshwr2_hwr_syb_pane_ParamLimits

0xceaf,	// (0x0004bbd6) fshwr2_icf_pane_ParamLimits

0x26fa,	// (0x00041421) list_double_graphic_pane_vc_g4_ParamLimits

0x26fa,	// (0x00041421) list_double_graphic_pane_vc_g4

0x3674,	// (0x0004239b) cell_ituss_key_pane_g3_ParamLimits

0x3674,	// (0x0004239b) cell_ituss_key_pane_g3

0x371c,	// (0x00042443) cell_ituss_key_t5_ParamLimits

0x371c,	// (0x00042443) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
