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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003ece7 };

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
0xd000,	// (0x0004bce7) Screen

0xd00c,	// (0x0004bcf3) application_window_ParamLimits

0xd00c,	// (0x0004bcf3) application_window

0x3735,	// (0x0004241c) screen_g1

0xbdd5,	// (0x0004aabc) area_bottom_pane_ParamLimits

0xbdd5,	// (0x0004aabc) area_bottom_pane

0x11a9,	// (0x0003fe90) area_top_pane_ParamLimits

0x11a9,	// (0x0003fe90) area_top_pane

0x123d,	// (0x0003ff24) main_pane_ParamLimits

0x123d,	// (0x0003ff24) main_pane

0x373f,	// (0x00042426) misc_graphics

0xd7bc,	// (0x0004c4a3) battery_pane_ParamLimits

0xd7bc,	// (0x0004c4a3) battery_pane

0x5d9c,	// (0x00044a83) bg_status_flat_pane_g8

0x5da4,	// (0x00044a8b) bg_status_flat_pane_g9

0x517f,	// (0x00043e66) context_pane_ParamLimits

0x517f,	// (0x00043e66) context_pane

0xd927,	// (0x0004c60e) navi_pane_ParamLimits

0xd927,	// (0x0004c60e) navi_pane

0xd9a5,	// (0x0004c68c) signal_pane_ParamLimits

0xd9a5,	// (0x0004c68c) signal_pane

0x0008,

0xf874,	// (0x0004e55b) bg_status_flat_pane_g

0xda35,	// (0x0004c71c) status_pane_g1_ParamLimits

0xda35,	// (0x0004c71c) status_pane_g1

0xda4b,	// (0x0004c732) status_pane_g2_ParamLimits

0xda4b,	// (0x0004c732) status_pane_g2

0x53aa,	// (0x00044091) status_pane_g3_ParamLimits

0x53aa,	// (0x00044091) status_pane_g3

0x0004,

0xf7a0,	// (0x0004e487) status_pane_g_ParamLimits

0xf7a0,	// (0x0004e487) status_pane_g

0xda57,	// (0x0004c73e) title_pane_ParamLimits

0xda57,	// (0x0004c73e) title_pane

0xdaba,	// (0x0004c7a1) uni_indicator_pane_ParamLimits

0xdaba,	// (0x0004c7a1) uni_indicator_pane

0x4fe5,	// (0x00043ccc) bg_list_pane_ParamLimits

0x4fe5,	// (0x00043ccc) bg_list_pane

0xd72f,	// (0x0004c416) find_pane

0xc130,	// (0x0004ae17) listscroll_app_pane_ParamLimits

0xc130,	// (0x0004ae17) listscroll_app_pane

0x5011,	// (0x00043cf8) listscroll_form_pane

0x1bb1,	// (0x00040898) listscroll_gen_pane_ParamLimits

0x1bb1,	// (0x00040898) listscroll_gen_pane

0x1bc5,	// (0x000408ac) listscroll_set_pane

0x6918,	// (0x000455ff) main_idle_act_pane

0x4cf1,	// (0x000439d8) main_idle_trad_pane

0x4cf1,	// (0x000439d8) main_list_empty_pane

0x502b,	// (0x00043d12) main_midp_pane

0x5037,	// (0x00043d1e) main_pane_g1_ParamLimits

0x5037,	// (0x00043d1e) main_pane_g1

0xc140,	// (0x0004ae27) popup_ai_message_window_ParamLimits

0xc140,	// (0x0004ae27) popup_ai_message_window

0xc1d1,	// (0x0004aeb8) popup_fep_china_uni_window_ParamLimits

0xc1d1,	// (0x0004aeb8) popup_fep_china_uni_window

0x1ccb,	// (0x000409b2) popup_fep_japan_candidate_window_ParamLimits

0x1ccb,	// (0x000409b2) popup_fep_japan_candidate_window

0x1ce9,	// (0x000409d0) popup_fep_japan_predictive_window_ParamLimits

0x1ce9,	// (0x000409d0) popup_fep_japan_predictive_window

0xc22b,	// (0x0004af12) popup_find_window

0xc248,	// (0x0004af2f) popup_grid_graphic_window_ParamLimits

0xc248,	// (0x0004af2f) popup_grid_graphic_window

0x1d4e,	// (0x00040a35) popup_large_graphic_colour_window

0xc2e0,	// (0x0004afc7) popup_menu_window_ParamLimits

0xc2e0,	// (0x0004afc7) popup_menu_window

0xc4ac,	// (0x0004b193) popup_note_image_window

0xc472,	// (0x0004b159) popup_note_wait_window_ParamLimits

0xc472,	// (0x0004b159) popup_note_wait_window

0xc4c4,	// (0x0004b1ab) popup_note_window_ParamLimits

0xc4c4,	// (0x0004b1ab) popup_note_window

0xc56a,	// (0x0004b251) popup_query_code_window_ParamLimits

0xc56a,	// (0x0004b251) popup_query_code_window

0x1f98,	// (0x00040c7f) popup_query_data_code_window_ParamLimits

0x1f98,	// (0x00040c7f) popup_query_data_code_window

0xc5a4,	// (0x0004b28b) popup_query_data_window_ParamLimits

0xc5a4,	// (0x0004b28b) popup_query_data_window

0xc620,	// (0x0004b307) popup_query_sat_info_window_ParamLimits

0xc620,	// (0x0004b307) popup_query_sat_info_window

0xc6b7,	// (0x0004b39e) popup_snote_single_graphic_window_ParamLimits

0xc6b7,	// (0x0004b39e) popup_snote_single_graphic_window

0xc6b7,	// (0x0004b39e) popup_snote_single_text_window_ParamLimits

0xc6b7,	// (0x0004b39e) popup_snote_single_text_window

0x201b,	// (0x00040d02) popup_sub_window_general

0x2149,	// (0x00040e30) popup_window_general_ParamLimits

0x2149,	// (0x00040e30) popup_window_general

0x5045,	// (0x00043d2c) power_save_pane

0xbfbf,	// (0x0004aca6) control_pane_g1_ParamLimits

0xbfbf,	// (0x0004aca6) control_pane_g1

0xbfe8,	// (0x0004accf) control_pane_g2_ParamLimits

0xbfe8,	// (0x0004accf) control_pane_g2

0x4fa8,	// (0x00043c8f) control_pane_g3_ParamLimits

0x4fa8,	// (0x00043c8f) control_pane_g3

0x0007,

0xf788,	// (0x0004e46f) control_pane_g_ParamLimits

0xf788,	// (0x0004e46f) control_pane_g

0xc029,	// (0x0004ad10) control_pane_t1_ParamLimits

0xc029,	// (0x0004ad10) control_pane_t1

0xc087,	// (0x0004ad6e) control_pane_t2_ParamLimits

0xc087,	// (0x0004ad6e) control_pane_t2

0x0002,

0xf799,	// (0x0004e480) control_pane_t_ParamLimits

0xf799,	// (0x0004e480) control_pane_t

0xd661,	// (0x0004c348) navi_navi_volume_pane_cp1

0xd669,	// (0x0004c350) status_small_icon_pane

0x4edd,	// (0x00043bc4) status_small_pane_g1_ParamLimits

0x4edd,	// (0x00043bc4) status_small_pane_g1

0xd671,	// (0x0004c358) status_small_pane_g2_ParamLimits

0xd671,	// (0x0004c358) status_small_pane_g2

0xd67d,	// (0x0004c364) status_small_pane_g3_ParamLimits

0xd67d,	// (0x0004c364) status_small_pane_g3

0xd689,	// (0x0004c370) status_small_pane_g4_ParamLimits

0xd689,	// (0x0004c370) status_small_pane_g4

0xd695,	// (0x0004c37c) status_small_pane_g5_ParamLimits

0xd695,	// (0x0004c37c) status_small_pane_g5

0xd6a3,	// (0x0004c38a) status_small_pane_g6_ParamLimits

0xd6a3,	// (0x0004c38a) status_small_pane_g6

0x0007,

0xf777,	// (0x0004e45e) status_small_pane_g_ParamLimits

0xf777,	// (0x0004e45e) status_small_pane_g

0xd6d2,	// (0x0004c3b9) status_small_pane_t1

0xd6f4,	// (0x0004c3db) status_small_wait_pane_ParamLimits

0xd6f4,	// (0x0004c3db) status_small_wait_pane

0xd4cc,	// (0x0004c1b3) aid_levels_signal_ParamLimits

0xd4cc,	// (0x0004c1b3) aid_levels_signal

0xd4e4,	// (0x0004c1cb) signal_pane_g1_ParamLimits

0xd4e4,	// (0x0004c1cb) signal_pane_g1

0xd4ff,	// (0x0004c1e6) signal_pane_g2_ParamLimits

0xd4ff,	// (0x0004c1e6) signal_pane_g2

0x0003,

0xf708,	// (0x0004e3ef) signal_pane_g_ParamLimits

0xf708,	// (0x0004e3ef) signal_pane_g

0x47c8,	// (0x000434af) context_pane_g1

0xd01c,	// (0x0004bd03) title_pane_g1

0xd053,	// (0x0004bd3a) title_pane_t1

0x37e7,	// (0x000424ce) title_pane_t2

0x380d,	// (0x000424f4) title_pane_t3

0x0002,

0xf557,	// (0x0004e23e) title_pane_t

0xdae2,	// (0x0004c7c9) aid_levels_battery_ParamLimits

0xdae2,	// (0x0004c7c9) aid_levels_battery

0xdafe,	// (0x0004c7e5) battery_pane_g1_ParamLimits

0xdafe,	// (0x0004c7e5) battery_pane_g1

0xdb1b,	// (0x0004c802) battery_pane_g2_ParamLimits

0xdb1b,	// (0x0004c802) battery_pane_g2

0x0001,

0xf7ab,	// (0x0004e492) battery_pane_g_ParamLimits

0xf7ab,	// (0x0004e492) battery_pane_g

0xdd00,	// (0x0004c9e7) uni_indicator_pane_g1

0xdd16,	// (0x0004c9fd) uni_indicator_pane_g2

0xdd2c,	// (0x0004ca13) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0004e603) uni_indicator_pane_g

0x4b63,	// (0x0004384a) navi_icon_pane_ParamLimits

0x4b63,	// (0x0004384a) navi_icon_pane

0x4aa1,	// (0x00043788) navi_midp_pane

0x4b7f,	// (0x00043866) navi_navi_pane

0x4b89,	// (0x00043870) navi_text_pane_ParamLimits

0x4b89,	// (0x00043870) navi_text_pane

0x3735,	// (0x0004241c) status_small_wait_pane_g1

0x3c30,	// (0x00042917) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0004e5fe) status_small_wait_pane_g

0x63f7,	// (0x000450de) navi_navi_icon_text_pane

0x63ff,	// (0x000450e6) navi_navi_pane_g1_ParamLimits

0x63ff,	// (0x000450e6) navi_navi_pane_g1

0x6411,	// (0x000450f8) navi_navi_pane_g2_ParamLimits

0x6411,	// (0x000450f8) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0004e5cc) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0004e5cc) navi_navi_pane_g

0x6423,	// (0x0004510a) navi_navi_tabs_pane

0x642c,	// (0x00045113) navi_navi_text_pane

0x63f7,	// (0x000450de) navi_navi_volume_pane

0x63d3,	// (0x000450ba) navi_text_pane_t1

0x63c7,	// (0x000450ae) navi_icon_pane_g1

0x631a,	// (0x00045001) navi_navi_text_pane_t1

0x23d9,	// (0x000410c0) navi_navi_volume_pane_g1

0xc92e,	// (0x0004b615) volume_small_pane

0xdc3d,	// (0x0004c924) navi_navi_icon_text_pane_g1

0x6288,	// (0x00044f6f) navi_navi_icon_text_pane_t1

0x4b7f,	// (0x00043866) navi_tabs_2_long_pane

0x4b7f,	// (0x00043866) navi_tabs_2_pane

0x4b7f,	// (0x00043866) navi_tabs_3_long_pane

0x4b7f,	// (0x00043866) navi_tabs_3_pane

0x4b7f,	// (0x00043866) navi_tabs_4_pane

0xc90e,	// (0x0004b5f5) tabs_2_active_pane_ParamLimits

0xc90e,	// (0x0004b5f5) tabs_2_active_pane

0xc91e,	// (0x0004b605) tabs_2_passive_pane_ParamLimits

0xc91e,	// (0x0004b605) tabs_2_passive_pane

0xc8dc,	// (0x0004b5c3) tabs_3_active_pane_ParamLimits

0xc8dc,	// (0x0004b5c3) tabs_3_active_pane

0xc8ec,	// (0x0004b5d3) tabs_3_passive_pane_ParamLimits

0xc8ec,	// (0x0004b5d3) tabs_3_passive_pane

0xc8fd,	// (0x0004b5e4) tabs_3_passive_pane_cp_ParamLimits

0xc8fd,	// (0x0004b5e4) tabs_3_passive_pane_cp

0xc8a9,	// (0x0004b590) tabs_4_active_pane_ParamLimits

0xc8a9,	// (0x0004b590) tabs_4_active_pane

0xc8ba,	// (0x0004b5a1) tabs_4_passive_pane_ParamLimits

0xc8ba,	// (0x0004b5a1) tabs_4_passive_pane

0x2365,	// (0x0004104c) tabs_4_passive_pane_cp_ParamLimits

0x2365,	// (0x0004104c) tabs_4_passive_pane_cp

0xc8cb,	// (0x0004b5b2) tabs_4_passive_pane_cp2_ParamLimits

0xc8cb,	// (0x0004b5b2) tabs_4_passive_pane_cp2

0xc885,	// (0x0004b56c) tabs_2_long_active_pane_ParamLimits

0xc885,	// (0x0004b56c) tabs_2_long_active_pane

0xc897,	// (0x0004b57e) tabs_2_long_passive_pane_ParamLimits

0xc897,	// (0x0004b57e) tabs_2_long_passive_pane

0xc846,	// (0x0004b52d) tabs_3_long_active_pane_ParamLimits

0xc846,	// (0x0004b52d) tabs_3_long_active_pane

0xc859,	// (0x0004b540) tabs_3_long_passive_pane_ParamLimits

0xc859,	// (0x0004b540) tabs_3_long_passive_pane

0xc872,	// (0x0004b559) tabs_3_long_passive_pane_cp_ParamLimits

0xc872,	// (0x0004b559) tabs_3_long_passive_pane_cp

0x228c,	// (0x00040f73) volume_small_pane_g1

0x2295,	// (0x00040f7c) volume_small_pane_g2

0x229e,	// (0x00040f85) volume_small_pane_g3

0x22a7,	// (0x00040f8e) volume_small_pane_g4

0x22b0,	// (0x00040f97) volume_small_pane_g5

0x22b9,	// (0x00040fa0) volume_small_pane_g6

0x22c2,	// (0x00040fa9) volume_small_pane_g7

0x22cb,	// (0x00040fb2) volume_small_pane_g8

0x22d4,	// (0x00040fbb) volume_small_pane_g9

0x22dd,	// (0x00040fc4) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0004e598) volume_small_pane_g

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp2_ParamLimits

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp2

0x382d,	// (0x00042514) tabs_3_active_pane_g1

0xd0df,	// (0x0004bdc6) tabs_3_active_pane_t1

0x3a9a,	// (0x00042781) bg_passive_tab_pane_cp2_ParamLimits

0x3a9a,	// (0x00042781) bg_passive_tab_pane_cp2

0x382d,	// (0x00042514) tabs_3_passive_pane_g1

0xd0df,	// (0x0004bdc6) tabs_3_passive_pane_t1

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp3_ParamLimits

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp3

0x3847,	// (0x0004252e) tabs_4_active_pane_g1

0xd0f1,	// (0x0004bdd8) tabs_4_active_pane_t1

0x3a9a,	// (0x00042781) bg_passive_tab_pane_cp3_ParamLimits

0x3a9a,	// (0x00042781) bg_passive_tab_pane_cp3

0x3847,	// (0x0004252e) tabs_4_1_passive_pane_g1

0xd0f1,	// (0x0004bdd8) tabs_4_1_passive_pane_t1

0x502b,	// (0x00043d12) list_highlight_pane_cp2

0xddb5,	// (0x0004ca9c) list_set_pane_ParamLimits

0xddb5,	// (0x0004ca9c) list_set_pane

0xde4f,	// (0x0004cb36) main_pane_set_t1_ParamLimits

0xde4f,	// (0x0004cb36) main_pane_set_t1

0xde6f,	// (0x0004cb56) main_pane_set_t2_ParamLimits

0xde6f,	// (0x0004cb56) main_pane_set_t2

0xde83,	// (0x0004cb6a) main_pane_set_t3_ParamLimits

0xde83,	// (0x0004cb6a) main_pane_set_t3

0xde95,	// (0x0004cb7c) main_pane_set_t4_ParamLimits

0xde95,	// (0x0004cb7c) main_pane_set_t4

0x0003,

0xf981,	// (0x0004e668) main_pane_set_t_ParamLimits

0xf981,	// (0x0004e668) main_pane_set_t

0xdea7,	// (0x0004cb8e) setting_code_pane

0xdeaf,	// (0x0004cb96) setting_slider_graphic_pane

0xdeaf,	// (0x0004cb96) setting_slider_pane

0xdeaf,	// (0x0004cb96) setting_text_pane

0xdeaf,	// (0x0004cb96) setting_volume_pane

0x147e,	// (0x00040165) volume_set_pane

0x381f,	// (0x00042506) bg_set_opt_pane_cp

0x1486,	// (0x0004016d) setting_slider_pane_t1

0x149f,	// (0x00040186) setting_slider_pane_t2

0x14b9,	// (0x000401a0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004e245) setting_slider_pane_t

0x14d1,	// (0x000401b8) slider_set_pane

0x373f,	// (0x00042426) bg_set_opt_pane_cp2

0x3861,	// (0x00042548) setting_slider_graphic_pane_g1

0x14e7,	// (0x000401ce) setting_slider_graphic_pane_t1

0x14f7,	// (0x000401de) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004e24c) setting_slider_graphic_pane_t

0x1507,	// (0x000401ee) slider_set_pane_cp

0x373f,	// (0x00042426) input_focus_pane_cp1

0x68ff,	// (0x000455e6) list_set_text_pane

0x3735,	// (0x0004241c) setting_text_pane_g1

0x373f,	// (0x00042426) input_focus_pane_cp2

0x3735,	// (0x0004241c) setting_code_pane_g1

0x386a,	// (0x00042551) setting_code_pane_t1

0x0201,	// (0x0003eee8) set_text_pane_t1_ParamLimits

0x0201,	// (0x0003eee8) set_text_pane_t1

0x40ec,	// (0x00042dd3) set_opt_bg_pane_g1

0x40f4,	// (0x00042ddb) set_opt_bg_pane_g2

0x68df,	// (0x000455c6) set_opt_bg_pane_g3

0x4104,	// (0x00042deb) set_opt_bg_pane_g4

0x410c,	// (0x00042df3) set_opt_bg_pane_g5

0x4114,	// (0x00042dfb) set_opt_bg_pane_g6

0x68e7,	// (0x000455ce) set_opt_bg_pane_g7

0x68ef,	// (0x000455d6) set_opt_bg_pane_g8

0x68f7,	// (0x000455de) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0004e655) set_opt_bg_pane_g

0x68d2,	// (0x000455b9) slider_set_pane_g1

0x244e,	// (0x00041135) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0004e646) slider_set_pane_g

0x23ea,	// (0x000410d1) volume_set_pane_g1

0x23f2,	// (0x000410d9) volume_set_pane_g2

0x23fa,	// (0x000410e1) volume_set_pane_g3

0x2402,	// (0x000410e9) volume_set_pane_g4

0x240a,	// (0x000410f1) volume_set_pane_g5

0x2412,	// (0x000410f9) volume_set_pane_g6

0x241a,	// (0x00041101) volume_set_pane_g7

0x2422,	// (0x00041109) volume_set_pane_g8

0x242a,	// (0x00041111) volume_set_pane_g9

0x2432,	// (0x00041119) volume_set_pane_g10

0x0009,

0xf937,	// (0x0004e61e) volume_set_pane_g

0xd103,	// (0x0004bdea) indicator_pane_ParamLimits

0xd103,	// (0x0004bdea) indicator_pane

0xd12b,	// (0x0004be12) main_idle_pane_g2_ParamLimits

0xd12b,	// (0x0004be12) main_idle_pane_g2

0xd163,	// (0x0004be4a) main_pane_idle_g1_ParamLimits

0xd163,	// (0x0004be4a) main_pane_idle_g1

0x38b9,	// (0x000425a0) popup_clock_digital_analogue_window_ParamLimits

0x38b9,	// (0x000425a0) popup_clock_digital_analogue_window

0xd18a,	// (0x0004be71) soft_indicator_pane_ParamLimits

0xd18a,	// (0x0004be71) soft_indicator_pane

0xd1a4,	// (0x0004be8b) wallpaper_pane_ParamLimits

0xd1a4,	// (0x0004be8b) wallpaper_pane

0x3735,	// (0x0004241c) wallpaper_pane_g1

0xd1b6,	// (0x0004be9d) indicator_pane_g1_ParamLimits

0xd1b6,	// (0x0004be9d) indicator_pane_g1

0x6c9a,	// (0x00045981) navi_navi_icon_text_pane_srt_g1

0x390b,	// (0x000425f2) soft_indicator_pane_t1

0x3925,	// (0x0004260c) aid_ps_area_pane

0xd1cc,	// (0x0004beb3) aid_ps_clock_pane

0x3944,	// (0x0004262b) aid_ps_indicator_pane

0x3950,	// (0x00042637) indicator_ps_pane_ParamLimits

0x3950,	// (0x00042637) indicator_ps_pane

0x395f,	// (0x00042646) power_save_pane_g1_ParamLimits

0x395f,	// (0x00042646) power_save_pane_g1

0x396b,	// (0x00042652) power_save_pane_g2_ParamLimits

0x396b,	// (0x00042652) power_save_pane_g2

0x109d,	// (0x0003fd84) aid_navinavi_width_pane

0x3925,	// (0x0004260c) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004e251) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004e251) power_save_pane_g

0x3979,	// (0x00042660) power_save_pane_t1_ParamLimits

0x3979,	// (0x00042660) power_save_pane_t1

0xd1cc,	// (0x0004beb3) aid_ps_clock_pane_ParamLimits

0x3944,	// (0x0004262b) aid_ps_indicator_pane_ParamLimits

0x398b,	// (0x00042672) power_save_pane_t4_ParamLimits

0x398b,	// (0x00042672) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004e256) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004e256) power_save_pane_t

0x39b5,	// (0x0004269c) power_save_t3_ParamLimits

0x39b5,	// (0x0004269c) power_save_t3

0x39a0,	// (0x00042687) power_save_t2_ParamLimits

0x39a0,	// (0x00042687) power_save_t2

0x39ca,	// (0x000426b1) indicator_ps_pane_g1

0xd1da,	// (0x0004bec1) ai_gene_pane_ParamLimits

0xd1da,	// (0x0004bec1) ai_gene_pane

0xd1f1,	// (0x0004bed8) ai_links_pane_ParamLimits

0xd1f1,	// (0x0004bed8) ai_links_pane

0xd209,	// (0x0004bef0) indicator_pane_cp1_ParamLimits

0xd209,	// (0x0004bef0) indicator_pane_cp1

0xd218,	// (0x0004beff) main_pane_idle_g1_cp_ParamLimits

0xd218,	// (0x0004beff) main_pane_idle_g1_cp

0x3a03,	// (0x000426ea) popup_ai_links_title_window

0xd230,	// (0x0004bf17) soft_indicator_pane_cp1_ParamLimits

0xd230,	// (0x0004bf17) soft_indicator_pane_cp1

0x66be,	// (0x000453a5) ai_links_pane_g1

0x66c7,	// (0x000453ae) grid_ai_links_pane

0xdcf7,	// (0x0004c9de) ai_gene_pane_1

0x66ac,	// (0x00045393) ai_gene_pane_2

0x66b5,	// (0x0004539c) list_highlight_pane_cp4

0xdcd3,	// (0x0004c9ba) cell_ai_link_pane_ParamLimits

0xdcd3,	// (0x0004c9ba) cell_ai_link_pane

0x667d,	// (0x00045364) cell_ai_link_pane_g1

0x3c30,	// (0x00042917) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0004e5f9) cell_ai_link_pane_g

0x373f,	// (0x00042426) grid_highlight_cp2

0x373f,	// (0x00042426) bg_popup_sub_pane_cp1

0x3a26,	// (0x0004270d) popup_ai_links_title_window_t1

0x65cd,	// (0x000452b4) ai_gene_pane_1_g1_ParamLimits

0x65cd,	// (0x000452b4) ai_gene_pane_1_g1

0x65d9,	// (0x000452c0) ai_gene_pane_1_g2_ParamLimits

0x65d9,	// (0x000452c0) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0004e5ef) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0004e5ef) ai_gene_pane_1_g

0x65e6,	// (0x000452cd) ai_gene_pane_1_t1_ParamLimits

0x65e6,	// (0x000452cd) ai_gene_pane_1_t1

0x661a,	// (0x00045301) grid_ai_soft_ind_pane

0x65b8,	// (0x0004529f) ai_gene_pane_2_t1_ParamLimits

0x65b8,	// (0x0004529f) ai_gene_pane_2_t1

0xd244,	// (0x0004bf2b) main_pane_empty_t1_ParamLimits

0xd244,	// (0x0004bf2b) main_pane_empty_t1

0xd25c,	// (0x0004bf43) main_pane_empty_t2_ParamLimits

0xd25c,	// (0x0004bf43) main_pane_empty_t2

0xd271,	// (0x0004bf58) main_pane_empty_t3_ParamLimits

0xd271,	// (0x0004bf58) main_pane_empty_t3

0xd283,	// (0x0004bf6a) main_pane_empty_t4_ParamLimits

0xd283,	// (0x0004bf6a) main_pane_empty_t4

0xd295,	// (0x0004bf7c) main_pane_empty_t5_ParamLimits

0xd295,	// (0x0004bf7c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004e25b) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004e25b) main_pane_empty_t

0x413d,	// (0x00042e24) bg_popup_window_pane_ParamLimits

0x413d,	// (0x00042e24) bg_popup_window_pane

0x6328,	// (0x0004500f) find_popup_pane_cp2_ParamLimits

0x6328,	// (0x0004500f) find_popup_pane_cp2

0x6334,	// (0x0004501b) heading_pane_ParamLimits

0x6334,	// (0x0004501b) heading_pane

0x373f,	// (0x00042426) bg_popup_sub_pane

0xdc54,	// (0x0004c93b) bg_popup_window_pane_g1_ParamLimits

0xdc54,	// (0x0004c93b) bg_popup_window_pane_g1

0xdc63,	// (0x0004c94a) bg_popup_window_pane_g2_ParamLimits

0xdc63,	// (0x0004c94a) bg_popup_window_pane_g2

0xdc6f,	// (0x0004c956) bg_popup_window_pane_g3_ParamLimits

0xdc6f,	// (0x0004c956) bg_popup_window_pane_g3

0xdc7b,	// (0x0004c962) bg_popup_window_pane_g4_ParamLimits

0xdc7b,	// (0x0004c962) bg_popup_window_pane_g4

0xdc8a,	// (0x0004c971) bg_popup_window_pane_g5_ParamLimits

0xdc8a,	// (0x0004c971) bg_popup_window_pane_g5

0xdc9a,	// (0x0004c981) bg_popup_window_pane_g6_ParamLimits

0xdc9a,	// (0x0004c981) bg_popup_window_pane_g6

0xdca6,	// (0x0004c98d) bg_popup_window_pane_g7_ParamLimits

0xdca6,	// (0x0004c98d) bg_popup_window_pane_g7

0xdcb5,	// (0x0004c99c) bg_popup_window_pane_g8_ParamLimits

0xdcb5,	// (0x0004c99c) bg_popup_window_pane_g8

0xdcc4,	// (0x0004c9ab) bg_popup_window_pane_g9_ParamLimits

0xdcc4,	// (0x0004c9ab) bg_popup_window_pane_g9

0x630e,	// (0x00044ff5) bg_popup_window_pane_g10_ParamLimits

0x630e,	// (0x00044ff5) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0004e5b7) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0004e5b7) bg_popup_window_pane_g

0x6237,	// (0x00044f1e) bg_popup_heading_pane_ParamLimits

0x6237,	// (0x00044f1e) bg_popup_heading_pane

0x25e8,	// (0x000412cf) tabs_4_passive_pane_cp_srt_ParamLimits

0x25e8,	// (0x000412cf) tabs_4_passive_pane_cp_srt

0x25fa,	// (0x000412e1) tabs_4_passive_pane_srt_ParamLimits

0x624b,	// (0x00044f32) heading_pane_g2

0x25fa,	// (0x000412e1) tabs_4_passive_pane_srt

0x55a9,	// (0x00044290) bg_passive_tab_pane_cp3_srt_ParamLimits

0x55a9,	// (0x00044290) bg_passive_tab_pane_cp3_srt

0x6253,	// (0x00044f3a) heading_pane_t1_ParamLimits

0x6253,	// (0x00044f3a) heading_pane_t1

0x626a,	// (0x00044f51) heading_pane_t2_ParamLimits

0x626a,	// (0x00044f51) heading_pane_t2

0x0001,

0xf8cb,	// (0x0004e5b2) heading_pane_t_ParamLimits

0xf8cb,	// (0x0004e5b2) heading_pane_t

0x5d64,	// (0x00044a4b) bg_popup_heading_pane_g1

0x5e13,	// (0x00044afa) bg_popup_heading_pane_g2

0x5e1d,	// (0x00044b04) bg_popup_heading_pane_g3

0x5e27,	// (0x00044b0e) bg_popup_heading_pane_g4

0x5e31,	// (0x00044b18) bg_popup_heading_pane_g5

0x5e3b,	// (0x00044b22) bg_popup_heading_pane_g6

0x5e43,	// (0x00044b2a) bg_popup_heading_pane_g7

0x5e4b,	// (0x00044b32) bg_popup_heading_pane_g8

0x5e55,	// (0x00044b3c) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0004e56e) bg_popup_heading_pane_g

0x5535,	// (0x0004421c) bg_popup_sub_pane_g1

0x553d,	// (0x00044224) bg_popup_sub_pane_g2

0x5545,	// (0x0004422c) bg_popup_sub_pane_g3

0x554d,	// (0x00044234) bg_popup_sub_pane_g4

0x5555,	// (0x0004423c) bg_popup_sub_pane_g5

0x555d,	// (0x00044244) bg_popup_sub_pane_g6

0x5565,	// (0x0004424c) bg_popup_sub_pane_g7

0x556d,	// (0x00044254) bg_popup_sub_pane_g8

0x5575,	// (0x0004425c) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0004e548) bg_popup_sub_pane_g

0x3a9a,	// (0x00042781) bg_popup_window_pane_cp5_ParamLimits

0x3a9a,	// (0x00042781) bg_popup_window_pane_cp5

0x3ab6,	// (0x0004279d) popup_note_window_g1_ParamLimits

0x3ab6,	// (0x0004279d) popup_note_window_g1

0x3ac2,	// (0x000427a9) popup_note_window_t1_ParamLimits

0x3ac2,	// (0x000427a9) popup_note_window_t1

0x3ad4,	// (0x000427bb) popup_note_window_t2_ParamLimits

0x3ad4,	// (0x000427bb) popup_note_window_t2

0x3ae6,	// (0x000427cd) popup_note_window_t3_ParamLimits

0x3ae6,	// (0x000427cd) popup_note_window_t3

0x3af8,	// (0x000427df) popup_note_window_t4_ParamLimits

0x3af8,	// (0x000427df) popup_note_window_t4

0x3b20,	// (0x00042807) popup_note_window_t5_ParamLimits

0x3b20,	// (0x00042807) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004e266) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004e266) popup_note_window_t

0x3b44,	// (0x0004282b) bg_popup_window_pane_cp6_ParamLimits

0x3b44,	// (0x0004282b) bg_popup_window_pane_cp6

0x5cd8,	// (0x000449bf) popup_note_image_window_g1_ParamLimits

0x5cd8,	// (0x000449bf) popup_note_image_window_g1

0x5ce4,	// (0x000449cb) popup_note_image_window_g2_ParamLimits

0x5ce4,	// (0x000449cb) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0004e53c) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0004e53c) popup_note_image_window_g

0x5cfd,	// (0x000449e4) popup_note_image_window_t1_ParamLimits

0x5cfd,	// (0x000449e4) popup_note_image_window_t1

0x5d16,	// (0x000449fd) popup_note_image_window_t2_ParamLimits

0x5d16,	// (0x000449fd) popup_note_image_window_t2

0x5d2f,	// (0x00044a16) popup_note_image_window_t3_ParamLimits

0x5d2f,	// (0x00044a16) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0004e541) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0004e541) popup_note_image_window_t

0x5b99,	// (0x00044880) bg_popup_window_pane_cp7_ParamLimits

0x5b99,	// (0x00044880) bg_popup_window_pane_cp7

0x5bc9,	// (0x000448b0) popup_note_wait_window_g1_ParamLimits

0x5bc9,	// (0x000448b0) popup_note_wait_window_g1

0x5bd5,	// (0x000448bc) popup_note_wait_window_g2_ParamLimits

0x5bd5,	// (0x000448bc) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0004e52a) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0004e52a) popup_note_wait_window_g

0x5bed,	// (0x000448d4) popup_note_wait_window_t1_ParamLimits

0x5bed,	// (0x000448d4) popup_note_wait_window_t1

0x5c14,	// (0x000448fb) popup_note_wait_window_t2_ParamLimits

0x5c14,	// (0x000448fb) popup_note_wait_window_t2

0x5c31,	// (0x00044918) popup_note_wait_window_t3_ParamLimits

0x5c31,	// (0x00044918) popup_note_wait_window_t3

0x5c44,	// (0x0004492b) popup_note_wait_window_t4_ParamLimits

0x5c44,	// (0x0004492b) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0004e531) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0004e531) popup_note_wait_window_t

0x5c69,	// (0x00044950) wait_bar_pane_ParamLimits

0x5c69,	// (0x00044950) wait_bar_pane

0x373f,	// (0x00042426) wait_anim_pane

0x373f,	// (0x00042426) wait_border_pane

0x3735,	// (0x0004241c) wait_anim_pane_g1

0x3735,	// (0x0004241c) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0004e3ea) wait_anim_pane_g

0x5b3d,	// (0x00044824) wait_border_pane_g1

0x5b48,	// (0x0004482f) wait_border_pane_g2

0x5b51,	// (0x00044838) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0004e523) wait_border_pane_g

0x59ad,	// (0x00044694) bg_popup_window_pane_cp16_ParamLimits

0x59ad,	// (0x00044694) bg_popup_window_pane_cp16

0x5aad,	// (0x00044794) indicator_popup_pane_cp4_ParamLimits

0x5aad,	// (0x00044794) indicator_popup_pane_cp4

0x5ac1,	// (0x000447a8) popup_query_data_window_t1_ParamLimits

0x5ac1,	// (0x000447a8) popup_query_data_window_t1

0x5ad3,	// (0x000447ba) popup_query_data_window_t2_ParamLimits

0x5ad3,	// (0x000447ba) popup_query_data_window_t2

0x5aec,	// (0x000447d3) popup_query_data_window_t3_ParamLimits

0x5aec,	// (0x000447d3) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0004e51c) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0004e51c) popup_query_data_window_t

0x5b06,	// (0x000447ed) query_popup_data_pane_ParamLimits

0x5b06,	// (0x000447ed) query_popup_data_pane

0x5b1a,	// (0x00044801) query_popup_data_pane_cp1_ParamLimits

0x5b1a,	// (0x00044801) query_popup_data_pane_cp1

0x59ad,	// (0x00044694) bg_popup_window_pane_cp10_ParamLimits

0x59ad,	// (0x00044694) bg_popup_window_pane_cp10

0x59df,	// (0x000446c6) indicator_popup_pane_ParamLimits

0x59df,	// (0x000446c6) indicator_popup_pane

0x5a01,	// (0x000446e8) popup_query_code_window_t1_ParamLimits

0x5a01,	// (0x000446e8) popup_query_code_window_t1

0x5a1b,	// (0x00044702) popup_query_code_window_t2_ParamLimits

0x5a1b,	// (0x00044702) popup_query_code_window_t2

0x5a64,	// (0x0004474b) popup_query_code_window_t3_ParamLimits

0x5a64,	// (0x0004474b) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0004e515) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0004e515) popup_query_code_window_t

0x5a93,	// (0x0004477a) query_popup_pane_ParamLimits

0x5a93,	// (0x0004477a) query_popup_pane

0x3b44,	// (0x0004282b) bg_popup_window_pane_cp15_ParamLimits

0x3b44,	// (0x0004282b) bg_popup_window_pane_cp15

0x3b62,	// (0x00042849) indicator_popup_pane_cp1_ParamLimits

0x3b62,	// (0x00042849) indicator_popup_pane_cp1

0x3b75,	// (0x0004285c) indicator_popup_pane_cp2_ParamLimits

0x3b75,	// (0x0004285c) indicator_popup_pane_cp2

0x3b88,	// (0x0004286f) popup_query_data_code_window_g1_ParamLimits

0x3b88,	// (0x0004286f) popup_query_data_code_window_g1

0x3b9b,	// (0x00042882) popup_query_data_code_window_t1_ParamLimits

0x3b9b,	// (0x00042882) popup_query_data_code_window_t1

0x3bad,	// (0x00042894) popup_query_data_code_window_t2_ParamLimits

0x3bad,	// (0x00042894) popup_query_data_code_window_t2

0x3bbf,	// (0x000428a6) popup_query_data_code_window_t3_ParamLimits

0x3bbf,	// (0x000428a6) popup_query_data_code_window_t3

0x3bd5,	// (0x000428bc) popup_query_data_code_window_t4_ParamLimits

0x3bd5,	// (0x000428bc) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004e271) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004e271) popup_query_data_code_window_t

0x4b21,	// (0x00043808) list_single_midp_graphic_pane_g3

0x3bed,	// (0x000428d4) query_popup_data_pane_cp2_ParamLimits

0x3c00,	// (0x000428e7) query_popup_pane_cp2_ParamLimits

0x3c00,	// (0x000428e7) query_popup_pane_cp2

0x373f,	// (0x00042426) bg_popup_window_pane_cp11

0x59a5,	// (0x0004468c) heading_pane_cp5

0x3ceb,	// (0x000429d2) listscroll_popup_info_pane

0x373f,	// (0x00042426) input_focus_pane_cp3

0x3c13,	// (0x000428fa) query_popup_pane_t1

0x3c21,	// (0x00042908) list_popup_info_pane_ParamLimits

0x3c21,	// (0x00042908) list_popup_info_pane

0x3c30,	// (0x00042917) listscroll_popup_info_pane_g1

0x3c38,	// (0x0004291f) scroll_pane_cp7

0x3c42,	// (0x00042929) popup_info_list_pane_t1_ParamLimits

0x3c42,	// (0x00042929) popup_info_list_pane_t1

0x3c5c,	// (0x00042943) popup_info_list_pane_t2_ParamLimits

0x3c5c,	// (0x00042943) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004e27a) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004e27a) popup_info_list_pane_t

0x373f,	// (0x00042426) bg_popup_window_pane_cp12

0x6cb4,	// (0x0004599b) find_popup_pane

0x381f,	// (0x00042506) bg_popup_window_pane_cp3

0x3c76,	// (0x0004295d) heading_pane_cp3

0x3c82,	// (0x00042969) listscroll_popup_graphic_pane

0x373f,	// (0x00042426) bg_popup_window_pane_cp4

0xd2f7,	// (0x0004bfde) heading_pane_cp4

0x3ceb,	// (0x000429d2) listscroll_popup_colour_pane

0x3cf3,	// (0x000429da) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3cf3,	// (0x000429da) cell_large_graphic_colour_none_popup_pane

0xd2ff,	// (0x0004bfe6) grid_large_graphic_colour_popup_pane_ParamLimits

0xd2ff,	// (0x0004bfe6) grid_large_graphic_colour_popup_pane

0x3d2f,	// (0x00042a16) listscroll_popup_colour_pane_g1_ParamLimits

0x3d2f,	// (0x00042a16) listscroll_popup_colour_pane_g1

0x3d46,	// (0x00042a2d) listscroll_popup_colour_pane_g2_ParamLimits

0x3d46,	// (0x00042a2d) listscroll_popup_colour_pane_g2

0x3d5d,	// (0x00042a44) listscroll_popup_colour_pane_g3_ParamLimits

0x3d5d,	// (0x00042a44) listscroll_popup_colour_pane_g3

0xd323,	// (0x0004c00a) listscroll_popup_colour_pane_g4_ParamLimits

0xd323,	// (0x0004c00a) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004e27f) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004e27f) listscroll_popup_colour_pane_g

0x3d7c,	// (0x00042a63) scroll_pane_cp6_ParamLimits

0x3d7c,	// (0x00042a63) scroll_pane_cp6

0xd332,	// (0x0004c019) cell_large_graphic_colour_popup_pane_ParamLimits

0xd332,	// (0x0004c019) cell_large_graphic_colour_popup_pane

0x3dad,	// (0x00042a94) cell_large_graphic_colour_none_popup_pane_t1

0x373f,	// (0x00042426) grid_highlight_pane_cp5

0x3dbc,	// (0x00042aa3) cell_large_graphic_colour_popup_pane_g1

0x3dc4,	// (0x00042aab) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004e288) cell_large_graphic_colour_popup_pane_g

0x3dcc,	// (0x00042ab3) cell_large_graphic_colour_popup_pane_g2_copy1

0x3dd5,	// (0x00042abc) grid_highlight_pane_cp4

0x3ddd,	// (0x00042ac4) bg_popup_window_pane_cp8_ParamLimits

0x3ddd,	// (0x00042ac4) bg_popup_window_pane_cp8

0x3df8,	// (0x00042adf) popup_snote_single_text_window_g1_ParamLimits

0x3df8,	// (0x00042adf) popup_snote_single_text_window_g1

0x3e0a,	// (0x00042af1) popup_snote_single_text_window_t1_ParamLimits

0x3e0a,	// (0x00042af1) popup_snote_single_text_window_t1

0x3e1d,	// (0x00042b04) popup_snote_single_text_window_t2_ParamLimits

0x3e1d,	// (0x00042b04) popup_snote_single_text_window_t2

0x3e30,	// (0x00042b17) popup_snote_single_text_window_t3_ParamLimits

0x3e30,	// (0x00042b17) popup_snote_single_text_window_t3

0x3e69,	// (0x00042b50) popup_snote_single_text_window_t4_ParamLimits

0x3e69,	// (0x00042b50) popup_snote_single_text_window_t4

0x3e9d,	// (0x00042b84) popup_snote_single_text_window_t5_ParamLimits

0x3e9d,	// (0x00042b84) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004e28d) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004e28d) popup_snote_single_text_window_t

0x3ecc,	// (0x00042bb3) bg_popup_window_pane_cp9_ParamLimits

0x3ecc,	// (0x00042bb3) bg_popup_window_pane_cp9

0x3df8,	// (0x00042adf) popup_snote_single_graphic_window_g1_ParamLimits

0x3df8,	// (0x00042adf) popup_snote_single_graphic_window_g1

0x3eda,	// (0x00042bc1) popup_snote_single_graphic_window_g2_ParamLimits

0x3eda,	// (0x00042bc1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004e298) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004e298) popup_snote_single_graphic_window_g

0x3ee6,	// (0x00042bcd) popup_snote_single_graphic_window_t1_ParamLimits

0x3ee6,	// (0x00042bcd) popup_snote_single_graphic_window_t1

0x3ef9,	// (0x00042be0) popup_snote_single_graphic_window_t2_ParamLimits

0x3ef9,	// (0x00042be0) popup_snote_single_graphic_window_t2

0x3f0c,	// (0x00042bf3) popup_snote_single_graphic_window_t3_ParamLimits

0x3f0c,	// (0x00042bf3) popup_snote_single_graphic_window_t3

0x3f45,	// (0x00042c2c) popup_snote_single_graphic_window_t4_ParamLimits

0x3f45,	// (0x00042c2c) popup_snote_single_graphic_window_t4

0x3f79,	// (0x00042c60) popup_snote_single_graphic_window_t5_ParamLimits

0x3f79,	// (0x00042c60) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004e29d) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004e29d) popup_snote_single_graphic_window_t

0x6bf8,	// (0x000458df) grid_graphic_popup_pane_ParamLimits

0x6bf8,	// (0x000458df) grid_graphic_popup_pane

0x6c20,	// (0x00045907) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c20,	// (0x00045907) listscroll_popup_graphic_pane_g1

0xdfa7,	// (0x0004cc8e) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfa7,	// (0x0004cc8e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0004e692) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0004e692) listscroll_popup_graphic_pane_g

0x6c48,	// (0x0004592f) scroll_pane_cp5

0xdf62,	// (0x0004cc49) cell_graphic_popup_pane_ParamLimits

0xdf62,	// (0x0004cc49) cell_graphic_popup_pane

0x6b79,	// (0x00045860) cell_graphic_popup_pane_g1

0x6b81,	// (0x00045868) cell_graphic_popup_pane_g2

0x3dcc,	// (0x00042ab3) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0004e68b) cell_graphic_popup_pane_g

0x6b8a,	// (0x00045871) cell_graphic_popup_pane_t2

0x3dd5,	// (0x00042abc) grid_highlight_pane_cp3

0x3fba,	// (0x00042ca1) list_gen_pane_ParamLimits

0x3fba,	// (0x00042ca1) list_gen_pane

0x4004,	// (0x00042ceb) scroll_pane

0xdf1d,	// (0x0004cc04) bg_list_pane_g1_ParamLimits

0xdf1d,	// (0x0004cc04) bg_list_pane_g1

0x6af6,	// (0x000457dd) bg_list_pane_g2_ParamLimits

0x6af6,	// (0x000457dd) bg_list_pane_g2

0x6b09,	// (0x000457f0) bg_list_pane_g3_ParamLimits

0x6b09,	// (0x000457f0) bg_list_pane_g3

0x6b1b,	// (0x00045802) bg_list_pane_g4_ParamLimits

0x6b1b,	// (0x00045802) bg_list_pane_g4

0xdf38,	// (0x0004cc1f) bg_list_pane_g5_ParamLimits

0xdf38,	// (0x0004cc1f) bg_list_pane_g5

0x0004,

0xf999,	// (0x0004e680) bg_list_pane_g_ParamLimits

0xf999,	// (0x0004e680) bg_list_pane_g

0xc937,	// (0x0004b61e) list_double2_graphic_large_graphic_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double2_graphic_large_graphic_pane

0xc937,	// (0x0004b61e) list_double2_graphic_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double2_graphic_pane

0xc937,	// (0x0004b61e) list_double2_large_graphic_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double2_large_graphic_pane

0xc937,	// (0x0004b61e) list_double2_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double2_pane

0xc937,	// (0x0004b61e) list_double_graphic_heading_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double_graphic_heading_pane

0xc937,	// (0x0004b61e) list_double_graphic_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double_graphic_pane

0xc937,	// (0x0004b61e) list_double_heading_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double_heading_pane

0xc937,	// (0x0004b61e) list_double_large_graphic_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double_large_graphic_pane

0xc937,	// (0x0004b61e) list_double_number_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double_number_pane

0xc937,	// (0x0004b61e) list_double_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double_pane

0xc937,	// (0x0004b61e) list_double_time_pane_ParamLimits

0xc937,	// (0x0004b61e) list_double_time_pane

0xc937,	// (0x0004b61e) list_setting_number_pane_ParamLimits

0xc937,	// (0x0004b61e) list_setting_number_pane

0xc937,	// (0x0004b61e) list_setting_pane_ParamLimits

0xc937,	// (0x0004b61e) list_setting_pane

0xdee2,	// (0x0004cbc9) list_single_2graphic_pane_ParamLimits

0xdee2,	// (0x0004cbc9) list_single_2graphic_pane

0xdee2,	// (0x0004cbc9) list_single_graphic_heading_pane_ParamLimits

0xdee2,	// (0x0004cbc9) list_single_graphic_heading_pane

0xdee2,	// (0x0004cbc9) list_single_graphic_pane_ParamLimits

0xdee2,	// (0x0004cbc9) list_single_graphic_pane

0xdee2,	// (0x0004cbc9) list_single_heading_pane_ParamLimits

0xdee2,	// (0x0004cbc9) list_single_heading_pane

0xdf0a,	// (0x0004cbf1) list_single_large_graphic_pane_ParamLimits

0xdf0a,	// (0x0004cbf1) list_single_large_graphic_pane

0xdee2,	// (0x0004cbc9) list_single_number_heading_pane_ParamLimits

0xdee2,	// (0x0004cbc9) list_single_number_heading_pane

0xdee2,	// (0x0004cbc9) list_single_number_pane_ParamLimits

0xdee2,	// (0x0004cbc9) list_single_number_pane

0xdee2,	// (0x0004cbc9) list_single_pane_ParamLimits

0xdee2,	// (0x0004cbc9) list_single_pane

0x373f,	// (0x00042426) list_highlight_pane_cp1

0x150f,	// (0x000401f6) list_single_pane_g1_ParamLimits

0x150f,	// (0x000401f6) list_single_pane_g1

0x151b,	// (0x00040202) list_single_pane_g2_ParamLimits

0x151b,	// (0x00040202) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004e2b9) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004e2b9) list_single_pane_g

0x0b0d,	// (0x0003f7f4) list_single_pane_t1_ParamLimits

0x0b0d,	// (0x0003f7f4) list_single_pane_t1

0x150f,	// (0x000401f6) list_single_number_pane_g1_ParamLimits

0x150f,	// (0x000401f6) list_single_number_pane_g1

0x151b,	// (0x00040202) list_single_number_pane_g2_ParamLimits

0x151b,	// (0x00040202) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004e2b9) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004e2b9) list_single_number_pane_g

0x09dc,	// (0x0003f6c3) list_single_number_pane_t1_ParamLimits

0x09dc,	// (0x0003f6c3) list_single_number_pane_t1

0x0acb,	// (0x0003f7b2) list_single_number_pane_t2_ParamLimits

0x0acb,	// (0x0003f7b2) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0004e641) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0004e641) list_single_number_pane_t

0x021a,	// (0x0003ef01) list_single_graphic_pane_g1_ParamLimits

0x021a,	// (0x0003ef01) list_single_graphic_pane_g1

0x150f,	// (0x000401f6) list_single_graphic_pane_g2_ParamLimits

0x150f,	// (0x000401f6) list_single_graphic_pane_g2

0x151b,	// (0x00040202) list_single_graphic_pane_g3_ParamLimits

0x151b,	// (0x00040202) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004e2a8) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004e2a8) list_single_graphic_pane_g

0x0226,	// (0x0003ef0d) list_single_graphic_pane_t1_ParamLimits

0x0226,	// (0x0003ef0d) list_single_graphic_pane_t1

0x023c,	// (0x0003ef23) list_single_heading_pane_g1_ParamLimits

0x023c,	// (0x0003ef23) list_single_heading_pane_g1

0x151b,	// (0x00040202) list_single_heading_pane_g2_ParamLimits

0x151b,	// (0x00040202) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004e2af) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004e2af) list_single_heading_pane_g

0x024f,	// (0x0003ef36) list_single_heading_pane_t1_ParamLimits

0x024f,	// (0x0003ef36) list_single_heading_pane_t1

0x1527,	// (0x0004020e) list_single_heading_pane_t2_ParamLimits

0x1527,	// (0x0004020e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004e2b4) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004e2b4) list_single_heading_pane_t

0x150f,	// (0x000401f6) list_single_number_heading_pane_g1_ParamLimits

0x150f,	// (0x000401f6) list_single_number_heading_pane_g1

0x151b,	// (0x00040202) list_single_number_heading_pane_g2_ParamLimits

0x151b,	// (0x00040202) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004e2b9) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004e2b9) list_single_number_heading_pane_g

0x0265,	// (0x0003ef4c) list_single_number_heading_pane_t1_ParamLimits

0x0265,	// (0x0003ef4c) list_single_number_heading_pane_t1

0x027b,	// (0x0003ef62) list_single_number_heading_pane_t2_ParamLimits

0x027b,	// (0x0003ef62) list_single_number_heading_pane_t2

0x028d,	// (0x0003ef74) list_single_number_heading_pane_t3_ParamLimits

0x028d,	// (0x0003ef74) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004e2be) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004e2be) list_single_number_heading_pane_t

0x029f,	// (0x0003ef86) list_single_graphic_heading_pane_g1_ParamLimits

0x029f,	// (0x0003ef86) list_single_graphic_heading_pane_g1

0xb6db,	// (0x0004a3c2) list_single_graphic_heading_pane_g4_ParamLimits

0xb6db,	// (0x0004a3c2) list_single_graphic_heading_pane_g4

0x151b,	// (0x00040202) list_single_graphic_heading_pane_g5_ParamLimits

0x151b,	// (0x00040202) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004e2c5) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004e2c5) list_single_graphic_heading_pane_g

0x0265,	// (0x0003ef4c) list_single_graphic_heading_pane_t1_ParamLimits

0x0265,	// (0x0003ef4c) list_single_graphic_heading_pane_t1

0x02c6,	// (0x0003efad) list_single_graphic_heading_pane_t2_ParamLimits

0x02c6,	// (0x0003efad) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004e2cc) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004e2cc) list_single_graphic_heading_pane_t

0x26d5,	// (0x000413bc) list_single_large_graphic_pane_g1_ParamLimits

0x26d5,	// (0x000413bc) list_single_large_graphic_pane_g1

0x26e1,	// (0x000413c8) list_single_large_graphic_pane_g2_ParamLimits

0x26e1,	// (0x000413c8) list_single_large_graphic_pane_g2

0x26ed,	// (0x000413d4) list_single_large_graphic_pane_g3_ParamLimits

0x26ed,	// (0x000413d4) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004e2d1) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004e2d1) list_single_large_graphic_pane_g

0x5b48,	// (0x0004482f) wait_border_pane_g2_copy1

0x155d,	// (0x00040244) list_single_large_graphic_pane_g4_cp2

0x0bb1,	// (0x0003f898) list_single_large_graphic_pane_t1_ParamLimits

0x0bb1,	// (0x0003f898) list_single_large_graphic_pane_t1

0xb6ec,	// (0x0004a3d3) list_double_pane_g1_ParamLimits

0xb6ec,	// (0x0004a3d3) list_double_pane_g1

0xb6f8,	// (0x0004a3df) list_double_pane_g2_ParamLimits

0xb6f8,	// (0x0004a3df) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004e2d8) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004e2d8) list_double_pane_g

0xb704,	// (0x0004a3eb) list_double_pane_t1_ParamLimits

0xb704,	// (0x0004a3eb) list_double_pane_t1

0xb71a,	// (0x0004a401) list_double_pane_t2_ParamLimits

0xb71a,	// (0x0004a401) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004e2dd) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004e2dd) list_double_pane_t

0xb72c,	// (0x0004a413) list_double2_pane_g1_ParamLimits

0xb72c,	// (0x0004a413) list_double2_pane_g1

0xb73d,	// (0x0004a424) list_double2_pane_g2_ParamLimits

0xb73d,	// (0x0004a424) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004e2e2) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004e2e2) list_double2_pane_g

0xb749,	// (0x0004a430) list_double2_pane_t1_ParamLimits

0xb749,	// (0x0004a430) list_double2_pane_t1

0xb75f,	// (0x0004a446) list_double2_pane_t2_ParamLimits

0xb75f,	// (0x0004a446) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004e2e7) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004e2e7) list_double2_pane_t

0xb6ec,	// (0x0004a3d3) list_double_number_pane_g1_ParamLimits

0xb6ec,	// (0x0004a3d3) list_double_number_pane_g1

0xb6f8,	// (0x0004a3df) list_double_number_pane_g2_ParamLimits

0xb6f8,	// (0x0004a3df) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004e2d8) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004e2d8) list_double_number_pane_g

0xb771,	// (0x0004a458) list_double_number_pane_t1_ParamLimits

0xb771,	// (0x0004a458) list_double_number_pane_t1

0xb783,	// (0x0004a46a) list_double_number_pane_t2_ParamLimits

0xb783,	// (0x0004a46a) list_double_number_pane_t2

0xb799,	// (0x0004a480) list_double_number_pane_t3_ParamLimits

0xb799,	// (0x0004a480) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004e2ec) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004e2ec) list_double_number_pane_t

0xb7ab,	// (0x0004a492) list_double_graphic_pane_g1_ParamLimits

0xb7ab,	// (0x0004a492) list_double_graphic_pane_g1

0xb7b7,	// (0x0004a49e) list_double_graphic_pane_g2_ParamLimits

0xb7b7,	// (0x0004a49e) list_double_graphic_pane_g2

0xb7c6,	// (0x0004a4ad) list_double_graphic_pane_g3_ParamLimits

0xb7c6,	// (0x0004a4ad) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004e2f3) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004e2f3) list_double_graphic_pane_g

0xb7de,	// (0x0004a4c5) list_double_graphic_pane_t1_ParamLimits

0xb7de,	// (0x0004a4c5) list_double_graphic_pane_t1

0xb7f4,	// (0x0004a4db) list_double_graphic_pane_t2_ParamLimits

0xb7f4,	// (0x0004a4db) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004e2fc) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004e2fc) list_double_graphic_pane_t

0xb7ab,	// (0x0004a492) list_double2_graphic_pane_g1_ParamLimits

0xb7ab,	// (0x0004a492) list_double2_graphic_pane_g1

0xb6ec,	// (0x0004a3d3) list_double2_graphic_pane_g2_ParamLimits

0xb6ec,	// (0x0004a3d3) list_double2_graphic_pane_g2

0xb6f8,	// (0x0004a3df) list_double2_graphic_pane_g3_ParamLimits

0xb6f8,	// (0x0004a3df) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004e301) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004e301) list_double2_graphic_pane_g

0xb783,	// (0x0004a46a) list_double2_graphic_pane_t1_ParamLimits

0xb783,	// (0x0004a46a) list_double2_graphic_pane_t1

0xb806,	// (0x0004a4ed) list_double2_graphic_pane_t2_ParamLimits

0xb806,	// (0x0004a4ed) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004e308) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004e308) list_double2_graphic_pane_t

0xb818,	// (0x0004a4ff) list_double_large_graphic_pane_g1_ParamLimits

0xb818,	// (0x0004a4ff) list_double_large_graphic_pane_g1

0xb837,	// (0x0004a51e) list_double_large_graphic_pane_g2_ParamLimits

0xb837,	// (0x0004a51e) list_double_large_graphic_pane_g2

0xb6f8,	// (0x0004a3df) list_double_large_graphic_pane_g3_ParamLimits

0xb6f8,	// (0x0004a3df) list_double_large_graphic_pane_g3

0xb84d,	// (0x0004a534) list_double_large_graphic_pane_g4_ParamLimits

0xb84d,	// (0x0004a534) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004e30d) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004e30d) list_double_large_graphic_pane_g

0xb860,	// (0x0004a547) list_double_large_graphic_pane_t1_ParamLimits

0xb860,	// (0x0004a547) list_double_large_graphic_pane_t1

0xb879,	// (0x0004a560) list_double_large_graphic_pane_t2_ParamLimits

0xb879,	// (0x0004a560) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004e318) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004e318) list_double_large_graphic_pane_t

0xb88b,	// (0x0004a572) list_double2_large_graphic_pane_g1_ParamLimits

0xb88b,	// (0x0004a572) list_double2_large_graphic_pane_g1

0xb897,	// (0x0004a57e) list_double2_large_graphic_pane_g2_ParamLimits

0xb897,	// (0x0004a57e) list_double2_large_graphic_pane_g2

0xb6f8,	// (0x0004a3df) list_double2_large_graphic_pane_g3_ParamLimits

0xb6f8,	// (0x0004a3df) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004e31d) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004e31d) list_double2_large_graphic_pane_g

0xb8a8,	// (0x0004a58f) list_double2_large_graphic_pane_t1_ParamLimits

0xb8a8,	// (0x0004a58f) list_double2_large_graphic_pane_t1

0xb8be,	// (0x0004a5a5) list_double2_large_graphic_pane_t2_ParamLimits

0xb8be,	// (0x0004a5a5) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004e324) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004e324) list_double2_large_graphic_pane_t

0xb8d0,	// (0x0004a5b7) list_double_heading_pane_g1_ParamLimits

0xb8d0,	// (0x0004a5b7) list_double_heading_pane_g1

0xbfb3,	// (0x0004ac9a) list_double_heading_pane_g2_ParamLimits

0xbfb3,	// (0x0004ac9a) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004e329) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004e329) list_double_heading_pane_g

0xb8e1,	// (0x0004a5c8) list_double_heading_pane_t1_ParamLimits

0xb8e1,	// (0x0004a5c8) list_double_heading_pane_t1

0xb8f7,	// (0x0004a5de) list_double_heading_pane_t2_ParamLimits

0xb8f7,	// (0x0004a5de) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004e32e) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004e32e) list_double_heading_pane_t

0xb7ab,	// (0x0004a492) list_double_graphic_heading_pane_g1_ParamLimits

0xb7ab,	// (0x0004a492) list_double_graphic_heading_pane_g1

0xb8d0,	// (0x0004a5b7) list_double_graphic_heading_pane_g2_ParamLimits

0xb8d0,	// (0x0004a5b7) list_double_graphic_heading_pane_g2

0xbfb3,	// (0x0004ac9a) list_double_graphic_heading_pane_g3_ParamLimits

0xbfb3,	// (0x0004ac9a) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004e333) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004e333) list_double_graphic_heading_pane_g

0xb909,	// (0x0004a5f0) list_double_graphic_heading_pane_t1_ParamLimits

0xb909,	// (0x0004a5f0) list_double_graphic_heading_pane_t1

0xb91f,	// (0x0004a606) list_double_graphic_heading_pane_t2_ParamLimits

0xb91f,	// (0x0004a606) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004e33a) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004e33a) list_double_graphic_heading_pane_t

0xb72c,	// (0x0004a413) list_double_time_pane_g1_ParamLimits

0xb72c,	// (0x0004a413) list_double_time_pane_g1

0xb73d,	// (0x0004a424) list_double_time_pane_g2_ParamLimits

0xb73d,	// (0x0004a424) list_double_time_pane_g2

0x0001,

0xf5fb,	// (0x0004e2e2) list_double_time_pane_g_ParamLimits

0xf5fb,	// (0x0004e2e2) list_double_time_pane_g

0xb931,	// (0x0004a618) list_double_time_pane_t1_ParamLimits

0xb931,	// (0x0004a618) list_double_time_pane_t1

0xb947,	// (0x0004a62e) list_double_time_pane_t2_ParamLimits

0xb947,	// (0x0004a62e) list_double_time_pane_t2

0xb959,	// (0x0004a640) list_double_time_pane_t3_ParamLimits

0xb959,	// (0x0004a640) list_double_time_pane_t3

0xb96b,	// (0x0004a652) list_double_time_pane_t4_ParamLimits

0xb96b,	// (0x0004a652) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0004e33f) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0004e33f) list_double_time_pane_t

0xb97d,	// (0x0004a664) list_setting_pane_g1_ParamLimits

0xb97d,	// (0x0004a664) list_setting_pane_g1

0xb989,	// (0x0004a670) list_setting_pane_g2_ParamLimits

0xb989,	// (0x0004a670) list_setting_pane_g2

0x0001,

0xf661,	// (0x0004e348) list_setting_pane_g_ParamLimits

0xf661,	// (0x0004e348) list_setting_pane_g

0xb995,	// (0x0004a67c) list_setting_pane_t1_ParamLimits

0xb995,	// (0x0004a67c) list_setting_pane_t1

0xb9af,	// (0x0004a696) list_setting_pane_t2_ParamLimits

0xb9af,	// (0x0004a696) list_setting_pane_t2

0x0002,

0xf666,	// (0x0004e34d) list_setting_pane_t_ParamLimits

0xf666,	// (0x0004e34d) list_setting_pane_t

0xb9ec,	// (0x0004a6d3) set_value_pane_cp_ParamLimits

0xb9ec,	// (0x0004a6d3) set_value_pane_cp

0xb9f8,	// (0x0004a6df) list_setting_number_pane_g1_ParamLimits

0xb9f8,	// (0x0004a6df) list_setting_number_pane_g1

0xba04,	// (0x0004a6eb) list_setting_number_pane_g2_ParamLimits

0xba04,	// (0x0004a6eb) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0004e354) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0004e354) list_setting_number_pane_g

0xba10,	// (0x0004a6f7) list_setting_number_pane_t1_ParamLimits

0xba10,	// (0x0004a6f7) list_setting_number_pane_t1

0xba29,	// (0x0004a710) list_setting_number_pane_t2_ParamLimits

0xba29,	// (0x0004a710) list_setting_number_pane_t2

0xba43,	// (0x0004a72a) list_setting_number_pane_t3_ParamLimits

0xba43,	// (0x0004a72a) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0004e359) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0004e359) list_setting_number_pane_t

0xb9ec,	// (0x0004a6d3) set_value_pane_ParamLimits

0xb9ec,	// (0x0004a6d3) set_value_pane

0x4044,	// (0x00042d2b) bg_set_opt_pane_ParamLimits

0x4044,	// (0x00042d2b) bg_set_opt_pane

0x0680,	// (0x0003f367) set_value_pane_t1

0x4065,	// (0x00042d4c) slider_set_pane_cp3

0x406e,	// (0x00042d55) volume_small_pane_cp

0x4077,	// (0x00042d5e) list_form_gen_pane

0x4080,	// (0x00042d67) scroll_pane_cp8

0xba86,	// (0x0004a76d) form_field_data_pane_ParamLimits

0xba86,	// (0x0004a76d) form_field_data_pane

0xba9d,	// (0x0004a784) form_field_data_wide_pane_ParamLimits

0xba9d,	// (0x0004a784) form_field_data_wide_pane

0xbabd,	// (0x0004a7a4) form_field_popup_pane_ParamLimits

0xbabd,	// (0x0004a7a4) form_field_popup_pane

0xbadd,	// (0x0004a7c4) form_field_popup_wide_pane_ParamLimits

0xbadd,	// (0x0004a7c4) form_field_popup_wide_pane

0x0716,	// (0x0003f3fd) form_field_slider_pane_ParamLimits

0x0716,	// (0x0003f3fd) form_field_slider_pane

0x0729,	// (0x0003f410) form_field_slider_wide_pane_ParamLimits

0x0729,	// (0x0003f410) form_field_slider_wide_pane

0x4091,	// (0x00042d78) data_form_pane

0xbafe,	// (0x0004a7e5) form_field_data_pane_t1

0x409d,	// (0x00042d84) input_focus_pane

0x0760,	// (0x0003f447) data_form_wide_pane

0x077d,	// (0x0003f464) form_field_data_wide_pane_t1

0x3dea,	// (0x00042ad1) input_focus_pane_cp6

0xbb18,	// (0x0004a7ff) form_field_popup_pane_t1

0x409d,	// (0x00042d84) input_focus_pane_cp7

0x40bf,	// (0x00042da6) list_form_pane

0x07c1,	// (0x0003f4a8) form_field_popup_wide_pane_t1

0x409d,	// (0x00042d84) input_focus_pane_cp8

0x40cb,	// (0x00042db2) list_form_wide_pane

0xbb3a,	// (0x0004a821) form_field_slider_pane_t1_ParamLimits

0xbb3a,	// (0x0004a821) form_field_slider_pane_t1

0xbb52,	// (0x0004a839) form_field_slider_pane_t2_ParamLimits

0xbb52,	// (0x0004a839) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0004e369) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0004e369) form_field_slider_pane_t

0x3a9a,	// (0x00042781) input_focus_pane_cp9_ParamLimits

0x3a9a,	// (0x00042781) input_focus_pane_cp9

0xbb67,	// (0x0004a84e) slider_cont_pane_ParamLimits

0xbb67,	// (0x0004a84e) slider_cont_pane

0x40da,	// (0x00042dc1) form_field_slider_wide_pane_t1_ParamLimits

0x40da,	// (0x00042dc1) form_field_slider_wide_pane_t1

0x081f,	// (0x0003f506) form_field_slider_wide_pane_t2_ParamLimits

0x081f,	// (0x0003f506) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0004e36e) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0004e36e) form_field_slider_wide_pane_t

0x3a9a,	// (0x00042781) input_focus_pane_cp10_ParamLimits

0x3a9a,	// (0x00042781) input_focus_pane_cp10

0xbb7b,	// (0x0004a862) slider_cont_pane_cp1_ParamLimits

0xbb7b,	// (0x0004a862) slider_cont_pane_cp1

0xbb8f,	// (0x0004a876) slider_form_pane_cp

0x40ec,	// (0x00042dd3) input_focus_pane_g1

0x40f4,	// (0x00042ddb) input_focus_pane_g2

0x40fc,	// (0x00042de3) input_focus_pane_g3

0x4104,	// (0x00042deb) input_focus_pane_g4

0x410c,	// (0x00042df3) input_focus_pane_g5

0x4114,	// (0x00042dfb) input_focus_pane_g6

0x411c,	// (0x00042e03) input_focus_pane_g7

0x4124,	// (0x00042e0b) input_focus_pane_g8

0x412c,	// (0x00042e13) input_focus_pane_g9

0x3735,	// (0x0004241c) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0004e373) input_focus_pane_g

0x5b51,	// (0x00044838) wait_border_pane_g3_copy1

0xbb97,	// (0x0004a87e) data_form_pane_t1

0x3735,	// (0x0004241c) wait_anim_pane_g1_copy1

0xbc22,	// (0x0004a909) data_form_wide_pane_t1

0xbbb1,	// (0x0004a898) list_form_graphic_pane_cp_ParamLimits

0xbbb1,	// (0x0004a898) list_form_graphic_pane_cp

0x6a6c,	// (0x00045753) slider_form_pane_g1

0x6a75,	// (0x0004575c) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0004e671) slider_form_pane_g

0xbbb1,	// (0x0004a898) list_form_graphic_pane_ParamLimits

0xbbb1,	// (0x0004a898) list_form_graphic_pane

0x087f,	// (0x0003f566) list_form_graphic_pane_g1

0x0887,	// (0x0003f56e) list_form_graphic_pane_t1_ParamLimits

0x0887,	// (0x0003f56e) list_form_graphic_pane_t1

0x381f,	// (0x00042506) list_highlight_pane_cp5_ParamLimits

0x381f,	// (0x00042506) list_highlight_pane_cp5

0x089c,	// (0x0003f583) find_pane_g1

0x4134,	// (0x00042e1b) input_find_pane

0x08a5,	// (0x0003f58c) input_find_pane_g1_ParamLimits

0x08a5,	// (0x0003f58c) input_find_pane_g1

0x08b1,	// (0x0003f598) input_find_pane_t1_ParamLimits

0x08b1,	// (0x0003f598) input_find_pane_t1

0x08c6,	// (0x0003f5ad) input_find_pane_t2_ParamLimits

0x08c6,	// (0x0003f5ad) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0004e388) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0004e388) input_find_pane_t

0x413d,	// (0x00042e24) input_focus_pane_cp5_ParamLimits

0x413d,	// (0x00042e24) input_focus_pane_cp5

0x4157,	// (0x00042e3e) bg_popup_window_pane_cp2_ParamLimits

0x4157,	// (0x00042e3e) bg_popup_window_pane_cp2

0x4164,	// (0x00042e4b) listscroll_menu_pane_ParamLimits

0x4164,	// (0x00042e4b) listscroll_menu_pane

0xd367,	// (0x0004c04e) popup_submenu_window_ParamLimits

0xd367,	// (0x0004c04e) popup_submenu_window

0x4198,	// (0x00042e7f) find_popup_pane_g1

0x41a0,	// (0x00042e87) input_popup_find_pane_cp

0x413d,	// (0x00042e24) input_focus_pane_cp4_ParamLimits

0x413d,	// (0x00042e24) input_focus_pane_cp4

0x41b8,	// (0x00042e9f) input_popup_find_pane_t1_ParamLimits

0x41b8,	// (0x00042e9f) input_popup_find_pane_t1

0x373f,	// (0x00042426) bg_popup_sub_pane_cp

0x41e6,	// (0x00042ecd) listscroll_popup_sub_pane

0x41ee,	// (0x00042ed5) list_submenu_pane_ParamLimits

0x41ee,	// (0x00042ed5) list_submenu_pane

0x41ff,	// (0x00042ee6) scroll_pane_cp4

0x4207,	// (0x00042eee) list_single_popup_submenu_pane_ParamLimits

0x4207,	// (0x00042eee) list_single_popup_submenu_pane

0x421b,	// (0x00042f02) list_single_popup_submenu_pane_g1

0x4223,	// (0x00042f0a) list_single_popup_submenu_pane_t1_ParamLimits

0x4223,	// (0x00042f0a) list_single_popup_submenu_pane_t1

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp1_ParamLimits

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp1

0xd39d,	// (0x0004c084) tabs_2_active_pane_g1

0xd3a5,	// (0x0004c08c) tabs_2_active_pane_t1

0x3a9a,	// (0x00042781) bg_passive_tab_pane_cp1_ParamLimits

0x3a9a,	// (0x00042781) bg_passive_tab_pane_cp1

0xd39d,	// (0x0004c084) tabs_2_passive_pane_g1

0xd3a5,	// (0x0004c08c) tabs_2_passive_pane_t1

0x381f,	// (0x00042506) bg_active_tab_pane_cp4

0xd3b7,	// (0x0004c09e) tabs_2_long_active_pane_t1

0x502b,	// (0x00043d12) bg_passive_tab_pane_cp4

0x21b3,	// (0x00040e9a) list_single_midp_graphic_pane_g4_ParamLimits

0x381f,	// (0x00042506) bg_active_tab_pane_cp5

0xd3ca,	// (0x0004c0b1) tabs_3_long_active_pane_t1

0x502b,	// (0x00043d12) bg_passive_tab_pane_cp5

0x21b3,	// (0x00040e9a) list_single_midp_graphic_pane_g4

0x381f,	// (0x00042506) bg_popup_window_pane_cp13_ParamLimits

0x381f,	// (0x00042506) bg_popup_window_pane_cp13

0x429a,	// (0x00042f81) listscroll_popup_fast_pane_ParamLimits

0x429a,	// (0x00042f81) listscroll_popup_fast_pane

0x42a6,	// (0x00042f8d) grid_popup_fast_pane_ParamLimits

0x42a6,	// (0x00042f8d) grid_popup_fast_pane

0x42b8,	// (0x00042f9f) scroll_pane_cp9_ParamLimits

0x42b8,	// (0x00042f9f) scroll_pane_cp9

0x8312,	// (0x00046ff9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8312,	// (0x00046ff9) list_single_graphic_hl_pane_t1_cp2

0x42dc,	// (0x00042fc3) input_focus_pane_cp20_ParamLimits

0x42dc,	// (0x00042fc3) input_focus_pane_cp20

0x42ea,	// (0x00042fd1) query_popup_data_pane_t1_ParamLimits

0x42ea,	// (0x00042fd1) query_popup_data_pane_t1

0x42fd,	// (0x00042fe4) query_popup_data_pane_t2_ParamLimits

0x42fd,	// (0x00042fe4) query_popup_data_pane_t2

0x4343,	// (0x0004302a) query_popup_data_pane_t3_ParamLimits

0x4343,	// (0x0004302a) query_popup_data_pane_t3

0x4384,	// (0x0004306b) query_popup_data_pane_t4_ParamLimits

0x4384,	// (0x0004306b) query_popup_data_pane_t4

0x43c0,	// (0x000430a7) query_popup_data_pane_t5_ParamLimits

0x43c0,	// (0x000430a7) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0004e38d) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0004e38d) query_popup_data_pane_t

0x40ec,	// (0x00042dd3) bg_set_opt_pane_g1

0x40f4,	// (0x00042ddb) bg_set_opt_pane_g2

0x40fc,	// (0x00042de3) bg_set_opt_pane_g3

0x4104,	// (0x00042deb) bg_set_opt_pane_g4

0x410c,	// (0x00042df3) bg_set_opt_pane_g5

0x4114,	// (0x00042dfb) bg_set_opt_pane_g6

0x411c,	// (0x00042e03) bg_set_opt_pane_g7

0x4124,	// (0x00042e0b) bg_set_opt_pane_g8

0x412c,	// (0x00042e13) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0004e398) bg_set_opt_pane_g

0x186d,	// (0x00040554) control_top_pane_stacon_ParamLimits

0x186d,	// (0x00040554) control_top_pane_stacon

0x18c0,	// (0x000405a7) signal_pane_stacon_ParamLimits

0x18c0,	// (0x000405a7) signal_pane_stacon

0x4982,	// (0x00043669) stacon_top_pane_g1_ParamLimits

0x4982,	// (0x00043669) stacon_top_pane_g1

0x18e5,	// (0x000405cc) title_pane_stacon_ParamLimits

0x18e5,	// (0x000405cc) title_pane_stacon

0x190f,	// (0x000405f6) uni_indicator_pane_stacon_ParamLimits

0x190f,	// (0x000405f6) uni_indicator_pane_stacon

0x1924,	// (0x0004060b) battery_pane_stacon_ParamLimits

0x1924,	// (0x0004060b) battery_pane_stacon

0x1968,	// (0x0004064f) control_bottom_pane_stacon_ParamLimits

0x1968,	// (0x0004064f) control_bottom_pane_stacon

0x198b,	// (0x00040672) navi_pane_stacon_ParamLimits

0x198b,	// (0x00040672) navi_pane_stacon

0x49a4,	// (0x0004368b) stacon_bottom_pane_g1_ParamLimits

0x49a4,	// (0x0004368b) stacon_bottom_pane_g1

0x15bb,	// (0x000402a2) aid_levels_signal_lsc_ParamLimits

0x15bb,	// (0x000402a2) aid_levels_signal_lsc

0x15d2,	// (0x000402b9) signal_pane_stacon_g1_ParamLimits

0x15d2,	// (0x000402b9) signal_pane_stacon_g1

0x15e6,	// (0x000402cd) signal_pane_stacon_g2_ParamLimits

0x15e6,	// (0x000402cd) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0004e3ab) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0004e3ab) signal_pane_stacon_g

0x161b,	// (0x00040302) title_pane_stacon_t1_ParamLimits

0x161b,	// (0x00040302) title_pane_stacon_t1

0x4404,	// (0x000430eb) uni_indicator_pane_stacon_g1

0x440e,	// (0x000430f5) uni_indicator_pane_stacon_g2

0x4418,	// (0x000430ff) uni_indicator_pane_stacon_g3

0x4422,	// (0x00043109) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0004e3b7) uni_indicator_pane_stacon_g

0x1640,	// (0x00040327) control_top_pane_stacon_g1

0x1648,	// (0x0004032f) control_top_pane_stacon_t1_ParamLimits

0x1648,	// (0x0004032f) control_top_pane_stacon_t1

0x167f,	// (0x00040366) aid_levels_battery_lsc_ParamLimits

0x167f,	// (0x00040366) aid_levels_battery_lsc

0x1697,	// (0x0004037e) battery_pane_stacon_g1_ParamLimits

0x1697,	// (0x0004037e) battery_pane_stacon_g1

0x16aa,	// (0x00040391) battery_pane_stacon_g2_ParamLimits

0x16aa,	// (0x00040391) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0004e3c0) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0004e3c0) battery_pane_stacon_g

0x16e8,	// (0x000403cf) navi_icon_pane_stacon

0x16fc,	// (0x000403e3) navi_navi_pane_stacon

0x16e8,	// (0x000403cf) navi_text_pane_stacon

0x1640,	// (0x00040327) control_bottom_pane_stacon_g1

0x1710,	// (0x000403f7) control_bottom_pane_stacon_t1_ParamLimits

0x1710,	// (0x000403f7) control_bottom_pane_stacon_t1

0xd3dc,	// (0x0004c0c3) grid_app_pane_ParamLimits

0xd3dc,	// (0x0004c0c3) grid_app_pane

0xd412,	// (0x0004c0f9) scroll_pane_cp15_ParamLimits

0xd412,	// (0x0004c0f9) scroll_pane_cp15

0xd427,	// (0x0004c10e) cell_app_pane_ParamLimits

0xd427,	// (0x0004c10e) cell_app_pane

0xd46e,	// (0x0004c155) cell_app_pane_g1_ParamLimits

0xd46e,	// (0x0004c155) cell_app_pane_g1

0x44c5,	// (0x000431ac) cell_app_pane_g2_ParamLimits

0x44c5,	// (0x000431ac) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0004e3c5) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0004e3c5) cell_app_pane_g

0xd492,	// (0x0004c179) cell_app_pane_t1_ParamLimits

0xd492,	// (0x0004c179) cell_app_pane_t1

0x44e8,	// (0x000431cf) grid_highlight_pane_ParamLimits

0x44e8,	// (0x000431cf) grid_highlight_pane

0x40ec,	// (0x00042dd3) cell_highlight_pane_g1

0x40f4,	// (0x00042ddb) cell_highlight_pane_g2

0x40fc,	// (0x00042de3) cell_highlight_pane_g3

0x4104,	// (0x00042deb) cell_highlight_pane_g4

0x410c,	// (0x00042df3) cell_highlight_pane_g5

0x4114,	// (0x00042dfb) cell_highlight_pane_g6

0x411c,	// (0x00042e03) cell_highlight_pane_g7

0x4124,	// (0x00042e0b) cell_highlight_pane_g8

0x412c,	// (0x00042e13) cell_highlight_pane_g9

0x3735,	// (0x0004241c) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0004e373) cell_highlight_pane_g

0x44f9,	// (0x000431e0) bg_scroll_pane

0x175a,	// (0x00040441) scroll_handle_pane

0x4540,	// (0x00043227) scroll_bg_pane_g1

0x4555,	// (0x0004323c) scroll_bg_pane_g2

0x456d,	// (0x00043254) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0004e3ca) scroll_bg_pane_g

0x4582,	// (0x00043269) scroll_handle_focus_pane_ParamLimits

0x4582,	// (0x00043269) scroll_handle_focus_pane

0x4540,	// (0x00043227) scroll_handle_pane_g1

0x458f,	// (0x00043276) scroll_handle_pane_g2

0x456d,	// (0x00043254) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0004e3d1) scroll_handle_pane_g

0x413d,	// (0x00042e24) bg_popup_sub_pane_cp21_ParamLimits

0x413d,	// (0x00042e24) bg_popup_sub_pane_cp21

0x45a3,	// (0x0004328a) popup_fep_japan_predictive_window_t1_ParamLimits

0x45a3,	// (0x0004328a) popup_fep_japan_predictive_window_t1

0x45bd,	// (0x000432a4) popup_fep_japan_predictive_window_t2_ParamLimits

0x45bd,	// (0x000432a4) popup_fep_japan_predictive_window_t2

0x45f0,	// (0x000432d7) popup_fep_japan_predictive_window_t3_ParamLimits

0x45f0,	// (0x000432d7) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0004e3d8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0004e3d8) popup_fep_japan_predictive_window_t

0x373f,	// (0x00042426) bg_popup_sub_pane_cp23

0x4627,	// (0x0004330e) listscroll_japin_cand_pane

0x462f,	// (0x00043316) popup_fep_japan_candidate_window_t1

0x463d,	// (0x00043324) candidate_pane_ParamLimits

0x463d,	// (0x00043324) candidate_pane

0x464f,	// (0x00043336) scroll_pane_cp30

0x4657,	// (0x0004333e) list_single_popup_jap_candidate_pane_ParamLimits

0x4657,	// (0x0004333e) list_single_popup_jap_candidate_pane

0x373f,	// (0x00042426) list_highlight_pane_cp30

0x466b,	// (0x00043352) list_single_popup_jap_candidate_pane_t1

0x467a,	// (0x00043361) level_1_signal

0x4687,	// (0x0004336e) level_2_signal

0x4694,	// (0x0004337b) level_3_signal

0x46a1,	// (0x00043388) level_4_signal

0x46ae,	// (0x00043395) level_5_signal

0x46bb,	// (0x000433a2) level_6_signal

0x46c8,	// (0x000433af) level_7_signal

0x467a,	// (0x00043361) level_1_battery

0x4687,	// (0x0004336e) level_2_battery

0x4694,	// (0x0004337b) level_3_battery

0x46a1,	// (0x00043388) level_4_battery

0x46ae,	// (0x00043395) level_5_battery

0x46bb,	// (0x000433a2) level_6_battery

0x46c8,	// (0x000433af) level_7_battery

0x46ed,	// (0x000433d4) list_menu_pane_ParamLimits

0x46ed,	// (0x000433d4) list_menu_pane

0x4703,	// (0x000433ea) scroll_pane_cp25_ParamLimits

0x4703,	// (0x000433ea) scroll_pane_cp25

0x471c,	// (0x00043403) list_double2_graphic_pane_cp2_ParamLimits

0x471c,	// (0x00043403) list_double2_graphic_pane_cp2

0x471c,	// (0x00043403) list_double2_large_graphic_pane_cp2_ParamLimits

0x471c,	// (0x00043403) list_double2_large_graphic_pane_cp2

0x471c,	// (0x00043403) list_double2_pane_cp2_ParamLimits

0x471c,	// (0x00043403) list_double2_pane_cp2

0x471c,	// (0x00043403) list_double_graphic_pane_cp2_ParamLimits

0x471c,	// (0x00043403) list_double_graphic_pane_cp2

0x471c,	// (0x00043403) list_double_large_graphic_pane_cp2_ParamLimits

0x471c,	// (0x00043403) list_double_large_graphic_pane_cp2

0x471c,	// (0x00043403) list_double_number_pane_cp2_ParamLimits

0x471c,	// (0x00043403) list_double_number_pane_cp2

0x471c,	// (0x00043403) list_double_pane_cp2_ParamLimits

0x471c,	// (0x00043403) list_double_pane_cp2

0xd4ba,	// (0x0004c1a1) list_single_2graphic_pane_cp2_ParamLimits

0xd4ba,	// (0x0004c1a1) list_single_2graphic_pane_cp2

0xd4ba,	// (0x0004c1a1) list_single_graphic_heading_pane_cp2_ParamLimits

0xd4ba,	// (0x0004c1a1) list_single_graphic_heading_pane_cp2

0xd4ba,	// (0x0004c1a1) list_single_graphic_pane_cp2_ParamLimits

0xd4ba,	// (0x0004c1a1) list_single_graphic_pane_cp2

0xd4ba,	// (0x0004c1a1) list_single_heading_pane_cp2_ParamLimits

0xd4ba,	// (0x0004c1a1) list_single_heading_pane_cp2

0x4756,	// (0x0004343d) list_single_large_graphic_pane_cp2_ParamLimits

0x4756,	// (0x0004343d) list_single_large_graphic_pane_cp2

0xd4ba,	// (0x0004c1a1) list_single_number_heading_pane_cp2_ParamLimits

0xd4ba,	// (0x0004c1a1) list_single_number_heading_pane_cp2

0xd4ba,	// (0x0004c1a1) list_single_number_pane_cp2_ParamLimits

0xd4ba,	// (0x0004c1a1) list_single_number_pane_cp2

0xd4ba,	// (0x0004c1a1) list_single_pane_cp2_ParamLimits

0xd4ba,	// (0x0004c1a1) list_single_pane_cp2

0x47d1,	// (0x000434b8) bg_popup_sub_pane_cp22

0x1809,	// (0x000404f0) popup_side_volume_key_window_g1

0x182d,	// (0x00040514) popup_side_volume_key_window_t1

0x1849,	// (0x00040530) volume_small_pane_cp1

0x3a9a,	// (0x00042781) bg_popup_sub_pane_cp24_ParamLimits

0x3a9a,	// (0x00042781) bg_popup_sub_pane_cp24

0x47e7,	// (0x000434ce) fep_china_uni_candidate_pane_ParamLimits

0x47e7,	// (0x000434ce) fep_china_uni_candidate_pane

0x47fb,	// (0x000434e2) fep_china_uni_entry_pane

0x480b,	// (0x000434f2) popup_fep_china_uni_window_g1

0x4827,	// (0x0004350e) fep_china_uni_entry_pane_g1

0x482f,	// (0x00043516) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0004e409) fep_china_uni_entry_pane_g

0x4837,	// (0x0004351e) fep_entry_item_pane

0x4841,	// (0x00043528) fep_candidate_item_pane

0x4849,	// (0x00043530) fep_china_uni_candidate_pane_g1

0x4851,	// (0x00043538) fep_china_uni_candidate_pane_g2

0x4859,	// (0x00043540) fep_china_uni_candidate_pane_g3

0x4861,	// (0x00043548) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0004e40e) fep_china_uni_candidate_pane_g

0x3735,	// (0x0004241c) fep_entry_item_pane_g1

0x4869,	// (0x00043550) fep_entry_item_pane_t1_ParamLimits

0x4869,	// (0x00043550) fep_entry_item_pane_t1

0x487f,	// (0x00043566) fep_candidate_item_pane_t1_ParamLimits

0x487f,	// (0x00043566) fep_candidate_item_pane_t1

0x4894,	// (0x0004357b) fep_candidate_item_pane_t2_ParamLimits

0x4894,	// (0x0004357b) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0004e417) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0004e417) fep_candidate_item_pane_t

0x381f,	// (0x00042506) list_highlight_pane_cp31_ParamLimits

0x381f,	// (0x00042506) list_highlight_pane_cp31

0x48a6,	// (0x0004358d) level_1_signal_lsc

0x48af,	// (0x00043596) level_2_signal_lsc

0x48b8,	// (0x0004359f) level_3_signal_lsc

0x48c1,	// (0x000435a8) level_4_signal_lsc

0x48ca,	// (0x000435b1) level_5_signal_lsc

0x48d3,	// (0x000435ba) level_6_signal_lsc

0x48dc,	// (0x000435c3) level_7_signal_lsc

0x48dc,	// (0x000435c3) level_1_battery_lsc

0x48e5,	// (0x000435cc) level_2_battery_lsc

0x48ee,	// (0x000435d5) level_3_battery_lsc

0x48f7,	// (0x000435de) level_4_battery_lsc

0x4900,	// (0x000435e7) level_5_battery_lsc

0x4909,	// (0x000435f0) level_6_battery_lsc

0x48a6,	// (0x0004358d) level_7_battery_lsc

0x4912,	// (0x000435f9) scroll_handle_focus_pane_g1

0x491b,	// (0x00043602) scroll_handle_focus_pane_g2

0x4924,	// (0x0004360b) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0004e41c) scroll_handle_focus_pane_g

0x08db,	// (0x0003f5c2) list_single_2graphic_pane_g1_ParamLimits

0x08db,	// (0x0003f5c2) list_single_2graphic_pane_g1

0xb6db,	// (0x0004a3c2) list_single_2graphic_pane_g2_ParamLimits

0xb6db,	// (0x0004a3c2) list_single_2graphic_pane_g2

0x151b,	// (0x00040202) list_single_2graphic_pane_g3_ParamLimits

0x151b,	// (0x00040202) list_single_2graphic_pane_g3

0x08e7,	// (0x0003f5ce) list_single_2graphic_pane_g4_ParamLimits

0x08e7,	// (0x0003f5ce) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0004e423) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0004e423) list_single_2graphic_pane_g

0x08f8,	// (0x0003f5df) list_single_2graphic_pane_t1_ParamLimits

0x08f8,	// (0x0003f5df) list_single_2graphic_pane_t1

0xbbc3,	// (0x0004a8aa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbbc3,	// (0x0004a8aa) list_double2_graphic_large_graphic_pane_g1

0xb897,	// (0x0004a57e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb897,	// (0x0004a57e) list_double2_graphic_large_graphic_pane_g2

0xb6f8,	// (0x0004a3df) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb6f8,	// (0x0004a3df) list_double2_graphic_large_graphic_pane_g3

0xbbd5,	// (0x0004a8bc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbbd5,	// (0x0004a8bc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0004e42c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0004e42c) list_double2_graphic_large_graphic_pane_g

0xbbe1,	// (0x0004a8c8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbbe1,	// (0x0004a8c8) list_double2_graphic_large_graphic_pane_t1

0xbbf7,	// (0x0004a8de) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbf7,	// (0x0004a8de) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0004e435) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0004e435) list_double2_graphic_large_graphic_pane_t

0x4a6b,	// (0x00043752) popup_fast_swap_window_ParamLimits

0x4a6b,	// (0x00043752) popup_fast_swap_window

0x4a87,	// (0x0004376e) popup_side_volume_key_window

0x4aa1,	// (0x00043788) stacon_top_pane

0x4aab,	// (0x00043792) status_pane_ParamLimits

0x4aab,	// (0x00043792) status_pane

0xd5af,	// (0x0004c296) status_small_pane

0x373f,	// (0x00042426) control_pane

0x373f,	// (0x00042426) stacon_bottom_pane

0x4080,	// (0x00042d67) scroll_pane_cp121

0x4077,	// (0x00042d5e) set_content_pane

0xd547,	// (0x0004c22e) bg_active_tab_pane_g1_cp1

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp1

0xd550,	// (0x0004c237) bg_active_tab_pane_g3_cp1

0xd547,	// (0x0004c22e) bg_passive_tab_pane_g1_cp1

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp1

0xd550,	// (0x0004c237) bg_passive_tab_pane_g3_cp1

0xd559,	// (0x0004c240) bg_active_tab_pane_g1_cp2

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp2

0xd562,	// (0x0004c249) bg_active_tab_pane_g3_cp2

0xd559,	// (0x0004c240) bg_passive_tab_pane_g1_cp2

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp2

0xd562,	// (0x0004c249) bg_passive_tab_pane_g3_cp2

0x495a,	// (0x00043641) bg_active_tab_pane_g1_cp3

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp3

0x4963,	// (0x0004364a) bg_active_tab_pane_g3_cp3

0x495a,	// (0x00043641) bg_passive_tab_pane_g1_cp3

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp3

0x4963,	// (0x0004364a) bg_passive_tab_pane_g3_cp3

0xd56b,	// (0x0004c252) bg_active_tab_pane_g1_cp4

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp4

0xd576,	// (0x0004c25d) bg_active_tab_pane_g3_cp4

0xd56b,	// (0x0004c252) bg_passive_tab_pane_g1_cp4

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp4

0xd576,	// (0x0004c25d) bg_passive_tab_pane_g3_cp4

0x49c0,	// (0x000436a7) bg_active_tab_pane_g1_cp5

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp5

0x49c9,	// (0x000436b0) bg_active_tab_pane_g3_cp5

0x49c0,	// (0x000436a7) bg_passive_tab_pane_g1_cp5

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp5

0x49c9,	// (0x000436b0) bg_passive_tab_pane_g3_cp5

0x6ffa,	// (0x00045ce1) list_set_graphic_pane_ParamLimits

0x6ffa,	// (0x00045ce1) list_set_graphic_pane

0x373f,	// (0x00042426) bg_set_opt_pane_cp4

0xd581,	// (0x0004c268) list_set_graphic_pane_g1_ParamLimits

0xd581,	// (0x0004c268) list_set_graphic_pane_g1

0xd58d,	// (0x0004c274) list_set_graphic_pane_g2_ParamLimits

0xd58d,	// (0x0004c274) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0004e43a) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0004e43a) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0004e7b8) volume_small_pane_cp_g

0x4a1e,	// (0x00043705) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4a1e,	// (0x00043705) list_double2_large_graphic_pane_g1_cp2

0x4a2a,	// (0x00043711) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a2a,	// (0x00043711) list_double2_large_graphic_pane_g2_cp2

0x4a3b,	// (0x00043722) list_double2_large_graphic_pane_g3_cp2

0x4a43,	// (0x0004372a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4a43,	// (0x0004372a) list_double2_large_graphic_pane_t1_cp2

0x4a59,	// (0x00043740) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4a59,	// (0x00043740) list_double2_large_graphic_pane_t2_cp2

0x662a,	// (0x00045311) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x662a,	// (0x00045311) list_double_large_graphic_pane_g1_cp2

0x663b,	// (0x00045322) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x663b,	// (0x00045322) list_double_large_graphic_pane_g2_cp2

0x4bd2,	// (0x000438b9) list_double_large_graphic_pane_g3_cp2

0x664c,	// (0x00045333) list_double_large_graphic_pane_g4_cp

0x6654,	// (0x0004533b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6654,	// (0x0004533b) list_double_large_graphic_pane_t1_cp2

0x666b,	// (0x00045352) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x666b,	// (0x00045352) list_double_large_graphic_pane_t2_cp2

0x4ac4,	// (0x000437ab) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4ac4,	// (0x000437ab) list_double2_graphic_pane_g1_cp2

0x4ad2,	// (0x000437b9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4ad2,	// (0x000437b9) list_double2_graphic_pane_g2_cp2

0x4ae3,	// (0x000437ca) list_double2_graphic_pane_g3_cp2

0x4aed,	// (0x000437d4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4aed,	// (0x000437d4) list_double2_graphic_pane_t1_cp2

0x4b03,	// (0x000437ea) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4b03,	// (0x000437ea) list_double2_graphic_pane_t2_cp2

0x4b15,	// (0x000437fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b15,	// (0x000437fc) list_single_number_heading_pane_g1_cp2

0x4b21,	// (0x00043808) list_single_number_heading_pane_g2_cp2

0x4b29,	// (0x00043810) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b29,	// (0x00043810) list_single_number_heading_pane_t1_cp2

0x4b3f,	// (0x00043826) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4b3f,	// (0x00043826) list_single_number_heading_pane_t2_cp2

0x4b51,	// (0x00043838) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4b51,	// (0x00043838) list_single_number_heading_pane_t3_cp2

0x4b15,	// (0x000437fc) list_single_heading_pane_g1_cp2_ParamLimits

0x4b15,	// (0x000437fc) list_single_heading_pane_g1_cp2

0x4b21,	// (0x00043808) list_single_heading_pane_g2_cp2

0x4b29,	// (0x00043810) list_single_heading_pane_t1_cp2_ParamLimits

0x4b29,	// (0x00043810) list_single_heading_pane_t1_cp2

0x6434,	// (0x0004511b) list_single_heading_pane_t2_cp2_ParamLimits

0x6434,	// (0x0004511b) list_single_heading_pane_t2_cp2

0x637c,	// (0x00045063) list_double_graphic_pane_g1_cp2_ParamLimits

0x637c,	// (0x00045063) list_double_graphic_pane_g1_cp2

0x6388,	// (0x0004506f) list_double_graphic_pane_g2_cp2_ParamLimits

0x6388,	// (0x0004506f) list_double_graphic_pane_g2_cp2

0x6397,	// (0x0004507e) list_double_graphic_pane_g3_cp2

0x639f,	// (0x00045086) list_double_graphic_pane_t1_cp2_ParamLimits

0x639f,	// (0x00045086) list_double_graphic_pane_t1_cp2

0x63b5,	// (0x0004509c) list_double_graphic_pane_t2_cp2_ParamLimits

0x63b5,	// (0x0004509c) list_double_graphic_pane_t2_cp2

0x4bc6,	// (0x000438ad) list_double_number_pane_g1_cp2_ParamLimits

0x4bc6,	// (0x000438ad) list_double_number_pane_g1_cp2

0x4bd2,	// (0x000438b9) list_double_number_pane_g2_cp2

0x6340,	// (0x00045027) list_double_number_pane_t1_cp2_ParamLimits

0x6340,	// (0x00045027) list_double_number_pane_t1_cp2

0x6354,	// (0x0004503b) list_double_number_pane_t2_cp2_ParamLimits

0x6354,	// (0x0004503b) list_double_number_pane_t2_cp2

0x636a,	// (0x00045051) list_double_number_pane_t3_cp2_ParamLimits

0x636a,	// (0x00045051) list_double_number_pane_t3_cp2

0x6229,	// (0x00044f10) list_single_graphic_pane_g1_cp2_ParamLimits

0x6229,	// (0x00044f10) list_single_graphic_pane_g1_cp2

0x4c2a,	// (0x00043911) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c2a,	// (0x00043911) list_single_graphic_pane_g2_cp2

0x4c36,	// (0x0004391d) list_single_graphic_pane_g3_cp2

0x61ff,	// (0x00044ee6) list_single_graphic_pane_t1_cp2_ParamLimits

0x61ff,	// (0x00044ee6) list_single_graphic_pane_t1_cp2

0x4c2a,	// (0x00043911) list_single_number_pane_g1_cp2_ParamLimits

0x4c2a,	// (0x00043911) list_single_number_pane_g1_cp2

0x4c36,	// (0x0004391d) list_single_number_pane_g2_cp2

0x61ff,	// (0x00044ee6) list_single_number_pane_t1_cp2_ParamLimits

0x61ff,	// (0x00044ee6) list_single_number_pane_t1_cp2

0x6215,	// (0x00044efc) list_single_number_pane_t2_cp2_ParamLimits

0x6215,	// (0x00044efc) list_single_number_pane_t2_cp2

0x4a2a,	// (0x00043711) list_double2_pane_g1_cp2_ParamLimits

0x4a2a,	// (0x00043711) list_double2_pane_g1_cp2

0x4a3b,	// (0x00043722) list_double2_pane_g2_cp2

0x4b9e,	// (0x00043885) list_double2_pane_t1_cp2_ParamLimits

0x4b9e,	// (0x00043885) list_double2_pane_t1_cp2

0x4bb4,	// (0x0004389b) list_double2_pane_t2_cp2_ParamLimits

0x4bb4,	// (0x0004389b) list_double2_pane_t2_cp2

0x4bc6,	// (0x000438ad) list_double_pane_g1_cp2_ParamLimits

0x4bc6,	// (0x000438ad) list_double_pane_g1_cp2

0x4bd2,	// (0x000438b9) list_double_pane_g2_cp2

0x4bda,	// (0x000438c1) list_double_pane_t1_cp2_ParamLimits

0x4bda,	// (0x000438c1) list_double_pane_t1_cp2

0x4bf0,	// (0x000438d7) list_double_pane_t2_cp2_ParamLimits

0x4bf0,	// (0x000438d7) list_double_pane_t2_cp2

0x4c1a,	// (0x00043901) list_single_pane_cp2_g3

0x4c2a,	// (0x00043911) list_single_pane_g1_cp2_ParamLimits

0x4c2a,	// (0x00043911) list_single_pane_g1_cp2

0x4c36,	// (0x0004391d) list_single_pane_g2_cp2

0x4c3e,	// (0x00043925) list_single_pane_t1_cp2_ParamLimits

0x4c3e,	// (0x00043925) list_single_pane_t1_cp2

0x4c56,	// (0x0004393d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4c56,	// (0x0004393d) list_single_large_graphic_pane_g1_cp2

0x4c62,	// (0x00043949) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4c62,	// (0x00043949) list_single_large_graphic_pane_g2_cp2

0x4c6e,	// (0x00043955) list_single_large_graphic_pane_g3_cp2

0x4c76,	// (0x0004395d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4c76,	// (0x0004395d) list_single_large_graphic_pane_g4_cp1

0x4c90,	// (0x00043977) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c90,	// (0x00043977) list_single_large_graphic_pane_t1_cp2

0x61cb,	// (0x00044eb2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x61cb,	// (0x00044eb2) list_single_graphic_heading_pane_g1_cp2

0x6198,	// (0x00044e7f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6198,	// (0x00044e7f) list_single_graphic_heading_pane_g4_cp2

0x4c36,	// (0x0004391d) list_single_graphic_heading_pane_g5_cp2

0x61d7,	// (0x00044ebe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x61d7,	// (0x00044ebe) list_single_graphic_heading_pane_t1_cp2

0x61ed,	// (0x00044ed4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x61ed,	// (0x00044ed4) list_single_graphic_heading_pane_t2_cp2

0x618c,	// (0x00044e73) list_single_2graphic_pane_g1_cp2_ParamLimits

0x618c,	// (0x00044e73) list_single_2graphic_pane_g1_cp2

0x6198,	// (0x00044e7f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6198,	// (0x00044e7f) list_single_2graphic_pane_g2_cp2

0x4c36,	// (0x0004391d) list_single_2graphic_pane_g3_cp2

0x61a9,	// (0x00044e90) list_single_2graphic_pane_g4_cp2_ParamLimits

0x61a9,	// (0x00044e90) list_single_2graphic_pane_g4_cp2

0x61b5,	// (0x00044e9c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x61b5,	// (0x00044e9c) list_single_2graphic_pane_t1_cp2

0x3735,	// (0x0004241c) list_highlight_pane_g10_cp1

0x5d64,	// (0x00044a4b) list_highlight_pane_g1_cp1

0x5d6c,	// (0x00044a53) list_highlight_pane_g2_cp1

0x5d74,	// (0x00044a5b) list_highlight_pane_g3_cp1

0x5d7c,	// (0x00044a63) list_highlight_pane_g4_cp1

0x5d84,	// (0x00044a6b) list_highlight_pane_g5_cp1

0x5d8c,	// (0x00044a73) list_highlight_pane_g6_cp1

0x5d94,	// (0x00044a7b) list_highlight_pane_g7_cp1

0x5d9c,	// (0x00044a83) list_highlight_pane_g8_cp1

0x5da4,	// (0x00044a8b) list_highlight_pane_g9_cp1

0xdbff,	// (0x0004c8e6) form_field_slider_pane_t3

0xdc0f,	// (0x0004c8f6) form_field_slider_pane_t4

0x5c98,	// (0x0004497f) slider_form_pane_ParamLimits

0x5c98,	// (0x0004497f) slider_form_pane

0x373f,	// (0x00042426) control_abbreviations

0x373f,	// (0x00042426) control_conventions

0x373f,	// (0x00042426) control_definitions

0x373f,	// (0x00042426) format_table_attribute

0x647e,	// (0x00045165) bg_popup_preview_window_pane_g9

0x373f,	// (0x00042426) format_table_data2

0x373f,	// (0x00042426) format_table_data3

0x373f,	// (0x00042426) format_table_data_example

0x0008,

0x373f,	// (0x00042426) intro_purpose

0xf8ea,	// (0x0004e5d1) bg_popup_preview_window_pane_g

0x373f,	// (0x00042426) texts_category

0x373f,	// (0x00042426) texts_graphics

0x4ca6,	// (0x0004398d) text_digital

0x4cb5,	// (0x0004399c) text_primary

0x4cc4,	// (0x000439ab) text_primary_small

0x4cd3,	// (0x000439ba) text_secondary

0x4ce2,	// (0x000439c9) text_title

0x6b4d,	// (0x00045834) bg_passive_tab_pane_g1_cp3_srt

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp3_srt

0x6b56,	// (0x0004583d) bg_passive_tab_pane_g3_cp3_srt

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp3_srt_ParamLimits

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp3_srt

0x6b5f,	// (0x00045846) tabs_4_active_pane_srt_g1

0xdf4c,	// (0x0004cc33) tabs_4_active_pane_srt_t1_ParamLimits

0xdf4c,	// (0x0004cc33) tabs_4_active_pane_srt_t1

0x6b4d,	// (0x00045834) bg_active_tab_pane_g1_cp3_copy1

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp3_copy1

0x6b56,	// (0x0004583d) bg_active_tab_pane_g3_cp3_copy1

0x381f,	// (0x00042506) tabs_2_long_active_pane_srt_ParamLimits

0x381f,	// (0x00042506) tabs_2_long_active_pane_srt

0x381f,	// (0x00042506) tabs_2_long_passive_pane_srt_ParamLimits

0x381f,	// (0x00042506) tabs_2_long_passive_pane_srt

0x502b,	// (0x00043d12) bg_passive_tab_pane_cp4_srt_ParamLimits

0x502b,	// (0x00043d12) bg_passive_tab_pane_cp4_srt

0x68ad,	// (0x00045594) bg_passive_tab_pane_g1_cp4_srt

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp4_srt

0x68b6,	// (0x0004559d) bg_passive_tab_pane_g3_cp4_srt

0x381f,	// (0x00042506) bg_active_tab_pane_cp4_srt_ParamLimits

0x381f,	// (0x00042506) bg_active_tab_pane_cp4_srt

0xdd79,	// (0x0004ca60) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd79,	// (0x0004ca60) tabs_2_long_active_pane_srt_t1

0x68ad,	// (0x00045594) bg_active_tab_pane_g1_cp4_srt

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp4_srt

0x68b6,	// (0x0004559d) bg_active_tab_pane_g3_cp4_srt

0x3a9a,	// (0x00042781) tabs_3_long_active_pane_srt_ParamLimits

0x3a9a,	// (0x00042781) tabs_3_long_active_pane_srt

0x3a9a,	// (0x00042781) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3a9a,	// (0x00042781) tabs_3_long_passive_pane_cp_srt

0x3a9a,	// (0x00042781) tabs_3_long_passive_pane_srt_ParamLimits

0x3a9a,	// (0x00042781) tabs_3_long_passive_pane_srt

0x502b,	// (0x00043d12) bg_passive_tab_pane_cp5_srt_ParamLimits

0x502b,	// (0x00043d12) bg_passive_tab_pane_cp5_srt

0x49c0,	// (0x000436a7) bg_passive_tab_pane_g1_cp5_srt

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp5_srt

0x49c9,	// (0x000436b0) bg_passive_tab_pane_g3_cp5_srt

0x381f,	// (0x00042506) bg_active_tab_pane_cp5_srt_ParamLimits

0x381f,	// (0x00042506) bg_active_tab_pane_cp5_srt

0xdd63,	// (0x0004ca4a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd63,	// (0x0004ca4a) tabs_3_long_active_pane_srt_t1

0x49c0,	// (0x000436a7) bg_active_tab_pane_g1_cp5_srt

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp5_srt

0x49c9,	// (0x000436b0) bg_active_tab_pane_g3_cp5_srt

0x688d,	// (0x00045574) navi_text_pane_srt_t1

0x6885,	// (0x0004556c) navi_icon_pane_srt_g1

0x4ea7,	// (0x00043b8e) midp_editing_number_pane_srt

0x4cf1,	// (0x000439d8) midp_ticker_pane_srt

0x4eaf,	// (0x00043b96) midp_ticker_pane_srt_g1

0x4eb7,	// (0x00043b9e) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0004e459) midp_ticker_pane_srt_g

0x4ebf,	// (0x00043ba6) midp_ticker_pane_srt_t1

0x6876,	// (0x0004555d) midp_editing_number_pane_t1_copy1

0x502b,	// (0x00043d12) listscroll_midp_pane

0x502b,	// (0x00043d12) midp_form_pane

0x4d5f,	// (0x00043a46) midp_info_popup_window_ParamLimits

0x4d5f,	// (0x00043a46) midp_info_popup_window

0x413d,	// (0x00042e24) bg_popup_sub_pane_cp50_ParamLimits

0x413d,	// (0x00042e24) bg_popup_sub_pane_cp50

0x5999,	// (0x00044680) listscroll_midp_info_pane_ParamLimits

0x5999,	// (0x00044680) listscroll_midp_info_pane

0x5981,	// (0x00044668) listscroll_form_midp_pane_ParamLimits

0x5981,	// (0x00044668) listscroll_form_midp_pane

0x598d,	// (0x00044674) scroll_bar_cp050

0xdbf3,	// (0x0004c8da) list_midp_pane

0x7581,	// (0x00046268) signal_pane_g2_cp

0x589b,	// (0x00044582) listscroll_midp_info_pane_t1_ParamLimits

0x589b,	// (0x00044582) listscroll_midp_info_pane_t1

0x58b3,	// (0x0004459a) listscroll_midp_info_pane_t2_ParamLimits

0x58b3,	// (0x0004459a) listscroll_midp_info_pane_t2

0x58f1,	// (0x000445d8) listscroll_midp_info_pane_t3_ParamLimits

0x58f1,	// (0x000445d8) listscroll_midp_info_pane_t3

0x592b,	// (0x00044612) listscroll_midp_info_pane_t4_ParamLimits

0x592b,	// (0x00044612) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0004e50c) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0004e50c) listscroll_midp_info_pane_t

0x41ff,	// (0x00042ee6) scroll_pane_cp21

0x583d,	// (0x00044524) form_midp_field_choice_group_pane

0x5846,	// (0x0004452d) form_midp_field_text_pane

0x5881,	// (0x00044568) form_midp_field_time_pane

0x5889,	// (0x00044570) form_midp_gauge_slider_pane

0x5892,	// (0x00044579) form_midp_gauge_wait_pane

0x373f,	// (0x00042426) form_midp_image_pane

0xbc09,	// (0x0004a8f0) list_single_midp_pane_ParamLimits

0xbc09,	// (0x0004a8f0) list_single_midp_pane

0xdbd0,	// (0x0004c8b7) form_midp_field_text_pane_t1

0x55a9,	// (0x00044290) input_focus_pane_cp050

0x582c,	// (0x00044513) list_midp_form_text_pane

0x57c0,	// (0x000444a7) form_midp_field_choice_group_pane_t1

0x57ce,	// (0x000444b5) input_focus_pane_cp051

0x57e2,	// (0x000444c9) list_midp_choice_pane

0x373f,	// (0x00042426) status_idle_pane

0x57a4,	// (0x0004448b) form_midp_field_time_pane_t1

0x3735,	// (0x0004241c) wait_anim_pane_g2_copy1

0x57b2,	// (0x00044499) form_midp_field_time_pane_t2

0x0001,

0x4e0f,	// (0x00043af6) aid_navinavi_width_2_pane

0xf820,	// (0x0004e507) form_midp_field_time_pane_t

0x373f,	// (0x00042426) input_focus_pane_cp052

0x373f,	// (0x00042426) bg_input_focus_pane_cp040

0x5764,	// (0x0004444b) form_midp_gauge_slider_pane_t1

0x5772,	// (0x00044459) form_midp_gauge_slider_pane_t2

0xdbb0,	// (0x0004c897) form_midp_gauge_slider_pane_t3

0xdbc0,	// (0x0004c8a7) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0004e4fe) form_midp_gauge_slider_pane_t

0x579c,	// (0x00044483) form_midp_slider_pane

0x381f,	// (0x00042506) bg_input_focus_pane_cp041_ParamLimits

0x381f,	// (0x00042506) bg_input_focus_pane_cp041

0x5731,	// (0x00044418) form_midp_gauge_wait_pane_t1_ParamLimits

0x5731,	// (0x00044418) form_midp_gauge_wait_pane_t1

0x5743,	// (0x0004442a) form_midp_gauge_wait_pane_t2_ParamLimits

0x5743,	// (0x0004442a) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0004e4f9) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0004e4f9) form_midp_gauge_wait_pane_t

0x5755,	// (0x0004443c) form_midp_wait_pane_ParamLimits

0x5755,	// (0x0004443c) form_midp_wait_pane

0x56fb,	// (0x000443e2) form_midp_image_pane_g1

0x5704,	// (0x000443eb) form_midp_image_pane_t1

0x5713,	// (0x000443fa) form_midp_image_pane_t2

0x5722,	// (0x00044409) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0004e4f2) form_midp_image_pane_t

0x56f2,	// (0x000443d9) list_single_midp_pane_g1

0x0a8a,	// (0x0003f771) list_single_midp_pane_t1

0xdb9a,	// (0x0004c881) list_midp_form_item_pane_ParamLimits

0xdb9a,	// (0x0004c881) list_midp_form_item_pane

0x4db7,	// (0x00043a9e) list_midp_form_item_pane_t1

0x4dc6,	// (0x00043aad) midp_ticker_pane_g1

0x4dd2,	// (0x00043ab9) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0004e43f) midp_ticker_pane_g

0x4dde,	// (0x00043ac5) midp_ticker_pane_t1

0x6ab9,	// (0x000457a0) midp_editing_number_pane_t1

0x6a97,	// (0x0004577e) midp_editing_number_pane

0x6aa6,	// (0x0004578d) midp_ticker_pane

0x6866,	// (0x0004554d) ai_message_heading_pane

0x373f,	// (0x00042426) bg_popup_window_pane_cp14

0x686e,	// (0x00045555) listscroll_ai_message_pane

0x67f0,	// (0x000454d7) ai_message_heading_pane_g1_ParamLimits

0x67f0,	// (0x000454d7) ai_message_heading_pane_g1

0x67fc,	// (0x000454e3) ai_message_heading_pane_g2_ParamLimits

0x67fc,	// (0x000454e3) ai_message_heading_pane_g2

0x6808,	// (0x000454ef) ai_message_heading_pane_g3_ParamLimits

0x6808,	// (0x000454ef) ai_message_heading_pane_g3

0x6814,	// (0x000454fb) ai_message_heading_pane_g4_ParamLimits

0x6814,	// (0x000454fb) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0004e633) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0004e633) ai_message_heading_pane_g

0x6820,	// (0x00045507) ai_message_heading_pane_t1_ParamLimits

0x6820,	// (0x00045507) ai_message_heading_pane_t1

0x683a,	// (0x00045521) ai_message_heading_pane_t2_ParamLimits

0x683a,	// (0x00045521) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0004e63c) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0004e63c) ai_message_heading_pane_t

0x684c,	// (0x00045533) bg_popup_heading_pane_cp1_ParamLimits

0x684c,	// (0x00045533) bg_popup_heading_pane_cp1

0x67de,	// (0x000454c5) list_ai_message_pane_ParamLimits

0x67de,	// (0x000454c5) list_ai_message_pane

0x41ff,	// (0x00042ee6) scroll_pane_cp10

0x677a,	// (0x00045461) list_ai_message_pane_g1

0x6782,	// (0x00045469) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0004e610) list_ai_message_pane_g

0x678a,	// (0x00045471) list_ai_message_pane_t1_ParamLimits

0x678a,	// (0x00045471) list_ai_message_pane_t1

0x679f,	// (0x00045486) list_ai_message_pane_t2_ParamLimits

0x679f,	// (0x00045486) list_ai_message_pane_t2

0x67b4,	// (0x0004549b) list_ai_message_pane_t3_ParamLimits

0x67b4,	// (0x0004549b) list_ai_message_pane_t3

0x67c9,	// (0x000454b0) list_ai_message_pane_t4_ParamLimits

0x67c9,	// (0x000454b0) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0004e615) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0004e615) list_ai_message_pane_t

0xdd41,	// (0x0004ca28) cell_ai_soft_ind_pane_ParamLimits

0xdd41,	// (0x0004ca28) cell_ai_soft_ind_pane

0x4df0,	// (0x00043ad7) cell_ai_soft_ind_pane_g1_ParamLimits

0x4df0,	// (0x00043ad7) cell_ai_soft_ind_pane_g1

0x373f,	// (0x00042426) grid_highlight_cp1

0x4dfd,	// (0x00043ae4) text_secondary_cp56_ParamLimits

0x4dfd,	// (0x00043ae4) text_secondary_cp56

0x6739,	// (0x00045420) example_general_pane_ParamLimits

0x6739,	// (0x00045420) example_general_pane

0x6745,	// (0x0004542c) example_parent_pane_g1_ParamLimits

0x6745,	// (0x0004542c) example_parent_pane_g1

0x6751,	// (0x00045438) example_parent_pane_t1_ParamLimits

0x6751,	// (0x00045438) example_parent_pane_t1

0xc4f6,	// (0x0004b1dd) popup_preview_text_window_ParamLimits

0xc4f6,	// (0x0004b1dd) popup_preview_text_window

0x4c22,	// (0x00043909) list_single_pane_cp2_g4

0x3b44,	// (0x0004282b) bg_popup_preview_window_pane_ParamLimits

0x3b44,	// (0x0004282b) bg_popup_preview_window_pane

0x6486,	// (0x0004516d) popup_preview_text_window_t1_ParamLimits

0x6486,	// (0x0004516d) popup_preview_text_window_t1

0x64a4,	// (0x0004518b) popup_preview_text_window_t2_ParamLimits

0x64a4,	// (0x0004518b) popup_preview_text_window_t2

0x64ed,	// (0x000451d4) popup_preview_text_window_t3_ParamLimits

0x64ed,	// (0x000451d4) popup_preview_text_window_t3

0x6532,	// (0x00045219) popup_preview_text_window_t4_ParamLimits

0x6532,	// (0x00045219) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0004e5e4) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0004e5e4) popup_preview_text_window_t

0x65b0,	// (0x00045297) scroll_pane_cp11

0x5535,	// (0x0004421c) bg_popup_preview_window_pane_g1

0x6446,	// (0x0004512d) bg_popup_preview_window_pane_g2

0x644e,	// (0x00045135) bg_popup_preview_window_pane_g3

0x6456,	// (0x0004513d) bg_popup_preview_window_pane_g4

0x645e,	// (0x00045145) bg_popup_preview_window_pane_g5

0x6466,	// (0x0004514d) bg_popup_preview_window_pane_g6

0x646e,	// (0x00045155) bg_popup_preview_window_pane_g7

0x6476,	// (0x0004515d) bg_popup_preview_window_pane_g8

0x10a9,	// (0x0003fd90) aid_popup_width_pane

0xc472,	// (0x0004b159) popup_midp_note_alarm_window_ParamLimits

0xc472,	// (0x0004b159) popup_midp_note_alarm_window

0x4091,	// (0x00042d78) data_form_pane_ParamLimits

0xbaf4,	// (0x0004a7db) form_field_data_pane_g1

0xbafe,	// (0x0004a7e5) form_field_data_pane_t1_ParamLimits

0x409d,	// (0x00042d84) input_focus_pane_ParamLimits

0x0760,	// (0x0003f447) data_form_wide_pane_ParamLimits

0x0771,	// (0x0003f458) form_field_data_wide_pane_g1

0x077d,	// (0x0003f464) form_field_data_wide_pane_t1_ParamLimits

0x3dea,	// (0x00042ad1) input_focus_pane_cp6_ParamLimits

0xd38f,	// (0x0004c076) input_popup_find_pane_g1_ParamLimits

0xd38f,	// (0x0004c076) input_popup_find_pane_g1

0x16bb,	// (0x000403a2) aid_navi_side_left_pane

0x16d0,	// (0x000403b7) aid_navi_side_right_pane

0x5e5f,	// (0x00044b46) bg_popup_window_pane_cp30_ParamLimits

0x5e5f,	// (0x00044b46) bg_popup_window_pane_cp30

0x5ed9,	// (0x00044bc0) popup_midp_note_alarm_window_g1_ParamLimits

0x5ed9,	// (0x00044bc0) popup_midp_note_alarm_window_g1

0x5f09,	// (0x00044bf0) popup_midp_note_alarm_window_t1_ParamLimits

0x5f09,	// (0x00044bf0) popup_midp_note_alarm_window_t1

0x5faa,	// (0x00044c91) popup_midp_note_alarm_window_t2_ParamLimits

0x5faa,	// (0x00044c91) popup_midp_note_alarm_window_t2

0x6058,	// (0x00044d3f) popup_midp_note_alarm_window_t3_ParamLimits

0x6058,	// (0x00044d3f) popup_midp_note_alarm_window_t3

0x608a,	// (0x00044d71) popup_midp_note_alarm_window_t4_ParamLimits

0x608a,	// (0x00044d71) popup_midp_note_alarm_window_t4

0x60b0,	// (0x00044d97) popup_midp_note_alarm_window_t5_ParamLimits

0x60b0,	// (0x00044d97) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0004e581) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0004e581) popup_midp_note_alarm_window_t

0x615c,	// (0x00044e43) wait_bar_pane_cp1_ParamLimits

0x615c,	// (0x00044e43) wait_bar_pane_cp1

0x373f,	// (0x00042426) wait_anim_pane_copy1

0x373f,	// (0x00042426) wait_border_pane_copy1

0x5b3d,	// (0x00044824) wait_border_pane_g1_copy1

0x0797,	// (0x0003f47e) form_field_popup_pane_g1

0xbb18,	// (0x0004a7ff) form_field_popup_pane_t1_ParamLimits

0x409d,	// (0x00042d84) input_focus_pane_cp7_ParamLimits

0x40bf,	// (0x00042da6) list_form_pane_ParamLimits

0x07b9,	// (0x0003f4a0) form_field_popup_wide_pane_g1

0x07c1,	// (0x0003f4a8) form_field_popup_wide_pane_t1_ParamLimits

0x409d,	// (0x00042d84) input_focus_pane_cp8_ParamLimits

0x40cb,	// (0x00042db2) list_form_wide_pane_ParamLimits

0x6be2,	// (0x000458c9) aid_size_cell_graphic_pane

0xbb97,	// (0x0004a87e) data_form_pane_t1_ParamLimits

0xbc22,	// (0x0004a909) data_form_wide_pane_t1_ParamLimits

0xd81b,	// (0x0004c502) bg_status_flat_pane

0xd053,	// (0x0004bd3a) title_pane_t1_ParamLimits

0x37e7,	// (0x000424ce) title_pane_t2_ParamLimits

0x380d,	// (0x000424f4) title_pane_t3_ParamLimits

0xf557,	// (0x0004e23e) title_pane_t_ParamLimits

0x467a,	// (0x00043361) level_1_signal_ParamLimits

0x4687,	// (0x0004336e) level_2_signal_ParamLimits

0x4694,	// (0x0004337b) level_3_signal_ParamLimits

0x46a1,	// (0x00043388) level_4_signal_ParamLimits

0x46ae,	// (0x00043395) level_5_signal_ParamLimits

0x46bb,	// (0x000433a2) level_6_signal_ParamLimits

0x46c8,	// (0x000433af) level_7_signal_ParamLimits

0x467a,	// (0x00043361) level_1_battery_ParamLimits

0x4687,	// (0x0004336e) level_2_battery_ParamLimits

0x4694,	// (0x0004337b) level_3_battery_ParamLimits

0x46a1,	// (0x00043388) level_4_battery_ParamLimits

0x46ae,	// (0x00043395) level_5_battery_ParamLimits

0x46bb,	// (0x000433a2) level_6_battery_ParamLimits

0x46c8,	// (0x000433af) level_7_battery_ParamLimits

0x5d64,	// (0x00044a4b) bg_status_flat_pane_g1

0x5d6c,	// (0x00044a53) bg_status_flat_pane_g2

0x5d74,	// (0x00044a5b) bg_status_flat_pane_g3

0x5d7c,	// (0x00044a63) bg_status_flat_pane_g4

0x5d84,	// (0x00044a6b) bg_status_flat_pane_g5

0x5d8c,	// (0x00044a73) bg_status_flat_pane_g6

0x5d94,	// (0x00044a7b) bg_status_flat_pane_g7

0xd0df,	// (0x0004bdc6) tabs_3_active_pane_t1_ParamLimits

0xd0df,	// (0x0004bdc6) tabs_3_passive_pane_t1_ParamLimits

0xd0f1,	// (0x0004bdd8) tabs_4_active_pane_t1_ParamLimits

0xd0f1,	// (0x0004bdd8) tabs_4_1_passive_pane_t1_ParamLimits

0xd3a5,	// (0x0004c08c) tabs_2_active_pane_t1_ParamLimits

0xd3a5,	// (0x0004c08c) tabs_2_passive_pane_t1_ParamLimits

0x381f,	// (0x00042506) bg_active_tab_pane_cp4_ParamLimits

0xd3b7,	// (0x0004c09e) tabs_2_long_active_pane_t1_ParamLimits

0x502b,	// (0x00043d12) bg_passive_tab_pane_cp4_ParamLimits

0x21d9,	// (0x00040ec0) list_single_midp_graphic_pane_t1_ParamLimits

0x381f,	// (0x00042506) bg_active_tab_pane_cp5_ParamLimits

0xd3ca,	// (0x0004c0b1) tabs_3_long_active_pane_t1_ParamLimits

0x502b,	// (0x00043d12) bg_passive_tab_pane_cp5_ParamLimits

0x21d9,	// (0x00040ec0) list_single_midp_graphic_pane_t1

0xd81b,	// (0x0004c502) bg_status_flat_pane_ParamLimits

0x51c1,	// (0x00043ea8) indicator_pane_cp2_ParamLimits

0x51c1,	// (0x00043ea8) indicator_pane_cp2

0xd999,	// (0x0004c680) navi_pane_srt_ParamLimits

0xd999,	// (0x0004c680) navi_pane_srt

0x531c,	// (0x00044003) popup_clock_digital_analogue_window_cp1

0x38fc,	// (0x000425e3) indicator_pane_t1

0x4cf1,	// (0x000439d8) copy_highlight_pane

0x4cf1,	// (0x000439d8) cursor_graphics_pane

0x4cf1,	// (0x000439d8) graphic_within_text_pane

0x4cf1,	// (0x000439d8) link_highlight_pane

0x6573,	// (0x0004525a) popup_preview_text_window_t5_ParamLimits

0x6573,	// (0x0004525a) popup_preview_text_window_t5

0x4e17,	// (0x00043afe) cursor_digital_pane

0x4e17,	// (0x00043afe) cursor_primary_pane

0x4e28,	// (0x00043b0f) cursor_primary_small_pane

0x4e30,	// (0x00043b17) cursor_secondary_pane

0x4e38,	// (0x00043b1f) cursor_title_pane

0x4e17,	// (0x00043afe) link_highlight_digital_pane

0x4e1f,	// (0x00043b06) link_highlight_primary_pane

0x4e28,	// (0x00043b0f) link_highlight_primary_small_pane

0x4e30,	// (0x00043b17) link_highlight_secondary_pane

0x4e38,	// (0x00043b1f) link_highlight_title_pane

0x4e17,	// (0x00043afe) copy_highlight_digital_pane

0x4e17,	// (0x00043afe) copy_highlight_primary_pane

0x4e28,	// (0x00043b0f) copy_highlight_primary_small_pane

0x4e30,	// (0x00043b17) copy_highlight_secondary_pane

0x4e38,	// (0x00043b1f) copy_highlight_title_pane

0x4e30,	// (0x00043b17) graphic_text_digital_pane

0x5e02,	// (0x00044ae9) graphic_text_primary_pane

0x5e0b,	// (0x00044af2) graphic_text_primary_small_pane

0x4e28,	// (0x00043b0f) graphic_text_secondary_pane

0x4e17,	// (0x00043afe) graphic_text_title_pane

0xd657,	// (0x0004c33e) cursor_primary_pane_g1

0x5df4,	// (0x00044adb) cursor_text_primary_t1

0xdc33,	// (0x0004c91a) cursor_primary_small_pane_g1

0x5de6,	// (0x00044acd) cursor_text_primary_small_t1

0xdc29,	// (0x0004c910) cursor_primary_small_pane_g1_copy1

0x5dce,	// (0x00044ab5) cursor_text_primary_small_t1_copy1

0x5dac,	// (0x00044a93) cursor_text_title_t1

0xdc1f,	// (0x0004c906) cursor_title_pane_g1

0xd657,	// (0x0004c33e) cursor_digital_pane_g1

0x4e4a,	// (0x00043b31) cursor_text_digital_t1

0x5d4d,	// (0x00044a34) link_highlight_primary_pane_g1

0x5d55,	// (0x00044a3c) link_highlight_primary_pane_t1

0x4e58,	// (0x00043b3f) link_highlight_primary_small_pane_g1

0x4e60,	// (0x00043b47) link_highlight_primary_small_pane_t1

0x4e58,	// (0x00043b3f) link_highlight_secondary_pane_g1

0x4e6f,	// (0x00043b56) link_highlight_secondary_pane_t1

0x5cc1,	// (0x000449a8) link_highlight_title_pane_g1

0x5cc9,	// (0x000449b0) link_highlight_title_pane_t1

0x5caa,	// (0x00044991) link_highlight_digital_pane_g1

0x5cb2,	// (0x00044999) link_highlight_digital_pane_t1

0x5b82,	// (0x00044869) copy_highlight_primary_pane_g1

0x5b8a,	// (0x00044871) copy_highlight_primary_pane_t1

0x5b5c,	// (0x00044843) copy_highlight_primary_small_pane_g1

0x5b73,	// (0x0004485a) copy_highlight_primary_small_pane_t1

0x4e7e,	// (0x00043b65) copy_highlight_secondary_pane_g1

0x4e86,	// (0x00043b6d) copy_highlight_secondary_pane_t1

0x5b5c,	// (0x00044843) copy_highlight_title_pane_g1

0x5b64,	// (0x0004484b) copy_highlight_title_pane_t1

0x5b82,	// (0x00044869) copy_highlight_digital_pane_g1

0x6dac,	// (0x00045a93) copy_highlight_digital_pane_t1

0x6d00,	// (0x000459e7) graphic_text_primary_pane_g1

0x6d90,	// (0x00045a77) graphic_text_primary_pane_t1

0x6d9e,	// (0x00045a85) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0004e6b0) graphic_text_primary_pane_t

0x6d6c,	// (0x00045a53) graphic_text_primary_small_pane_g1

0x6d74,	// (0x00045a5b) graphic_text_primary_small_pane_t1

0x6d82,	// (0x00045a69) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0004e6ab) graphic_text_primary_small_pane_t

0x6d48,	// (0x00045a2f) graphic_text_secondary_pane_g1

0x6d50,	// (0x00045a37) graphic_text_secondary_pane_t1

0x6d5e,	// (0x00045a45) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0004e6a6) graphic_text_secondary_pane_t

0x6d24,	// (0x00045a0b) graphic_text_title_pane_g1

0x6d2c,	// (0x00045a13) graphic_text_title_pane_t1

0x6d3a,	// (0x00045a21) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0004e6a1) graphic_text_title_pane_t

0x6d00,	// (0x000459e7) graphic_text_digital_pane_g1

0x6d08,	// (0x000459ef) graphic_text_digital_pane_t1

0x6d16,	// (0x000459fd) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0004e69c) graphic_text_digital_pane_t

0x381f,	// (0x00042506) navi_icon_pane_srt_ParamLimits

0x381f,	// (0x00042506) navi_icon_pane_srt

0x373f,	// (0x00042426) navi_midp_pane_srt

0x373f,	// (0x00042426) navi_navi_pane_srt

0x381f,	// (0x00042506) navi_text_pane_srt_ParamLimits

0x381f,	// (0x00042506) navi_text_pane_srt

0x6ccb,	// (0x000459b2) navi_navi_icon_text_pane_srt

0x6cd3,	// (0x000459ba) navi_navi_pane_srt_g1_ParamLimits

0x6cd3,	// (0x000459ba) navi_navi_pane_srt_g1

0x6ce5,	// (0x000459cc) navi_navi_pane_srt_g2_ParamLimits

0x6ce5,	// (0x000459cc) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0004e697) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0004e697) navi_navi_pane_srt_g

0x6cf7,	// (0x000459de) navi_navi_tabs_pane_srt

0x6ccb,	// (0x000459b2) navi_navi_text_pane_srt

0x6ccb,	// (0x000459b2) navi_navi_volume_pane_srt

0x6cbc,	// (0x000459a3) navi_navi_text_pane_srt_t1

0x265f,	// (0x00041346) navi_navi_volume_pane_srt_g1

0x2667,	// (0x0004134e) volume_small_pane_srt_ParamLimits

0x2667,	// (0x0004134e) volume_small_pane_srt

0x19ae,	// (0x00040695) volume_small_pane_srt_g1_ParamLimits

0x19ae,	// (0x00040695) volume_small_pane_srt_g1

0x19be,	// (0x000406a5) volume_small_pane_srt_g2_ParamLimits

0x19be,	// (0x000406a5) volume_small_pane_srt_g2

0x19cf,	// (0x000406b6) volume_small_pane_srt_g3_ParamLimits

0x19cf,	// (0x000406b6) volume_small_pane_srt_g3

0x19e0,	// (0x000406c7) volume_small_pane_srt_g4_ParamLimits

0x19e0,	// (0x000406c7) volume_small_pane_srt_g4

0x19f1,	// (0x000406d8) volume_small_pane_srt_g5_ParamLimits

0x19f1,	// (0x000406d8) volume_small_pane_srt_g5

0x1a02,	// (0x000406e9) volume_small_pane_srt_g6_ParamLimits

0x1a02,	// (0x000406e9) volume_small_pane_srt_g6

0x1a13,	// (0x000406fa) volume_small_pane_srt_g7_ParamLimits

0x1a13,	// (0x000406fa) volume_small_pane_srt_g7

0x1a24,	// (0x0004070b) volume_small_pane_srt_g8_ParamLimits

0x1a24,	// (0x0004070b) volume_small_pane_srt_g8

0x1a35,	// (0x0004071c) volume_small_pane_srt_g9_ParamLimits

0x1a35,	// (0x0004071c) volume_small_pane_srt_g9

0x1a46,	// (0x0004072d) volume_small_pane_srt_g10_ParamLimits

0x1a46,	// (0x0004072d) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0004e444) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0004e444) volume_small_pane_srt_g

0x3bed,	// (0x000428d4) query_popup_data_pane_cp2

0x6ca2,	// (0x00045989) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6ca2,	// (0x00045989) navi_navi_icon_text_pane_srt_t1

0x5e02,	// (0x00044ae9) navi_tabs_2_long_pane_srt

0x5e02,	// (0x00044ae9) navi_tabs_2_pane_srt

0x5e02,	// (0x00044ae9) navi_tabs_3_long_pane_srt

0x5e02,	// (0x00044ae9) navi_tabs_3_pane_srt

0x5e02,	// (0x00044ae9) navi_tabs_4_pane_srt

0x263f,	// (0x00041326) tabs_2_active_pane_srt_ParamLimits

0x263f,	// (0x00041326) tabs_2_active_pane_srt

0x264f,	// (0x00041336) tabs_2_passive_pane_srt_ParamLimits

0x264f,	// (0x00041336) tabs_2_passive_pane_srt

0x55a9,	// (0x00044290) bg_passive_tab_pane_cp1_srt_ParamLimits

0x55a9,	// (0x00044290) bg_passive_tab_pane_cp1_srt

0x6c6e,	// (0x00045955) bg_passive_tab_pane_g1_cp1_srt

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp1_srt

0x6c77,	// (0x0004595e) bg_passive_tab_pane_g3_cp1_srt

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp1_srt_ParamLimits

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp1_srt

0x6c80,	// (0x00045967) tabs_2_active_pane_srt_g1

0xdfd1,	// (0x0004ccb8) tabs_2_active_pane_srt_t1_ParamLimits

0xdfd1,	// (0x0004ccb8) tabs_2_active_pane_srt_t1

0x6c6e,	// (0x00045955) bg_active_tab_pane_g1_cp1_srt

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp1_srt

0x6c77,	// (0x0004595e) bg_active_tab_pane_g3_cp1_srt

0x260c,	// (0x000412f3) tabs_3_active_pane_srt_ParamLimits

0x260c,	// (0x000412f3) tabs_3_active_pane_srt

0x261d,	// (0x00041304) tabs_3_passive_pane_cp_srt_ParamLimits

0x261d,	// (0x00041304) tabs_3_passive_pane_cp_srt

0x262e,	// (0x00041315) tabs_3_passive_pane_srt_ParamLimits

0x262e,	// (0x00041315) tabs_3_passive_pane_srt

0x55a9,	// (0x00044290) bg_passive_tab_pane_cp2_srt_ParamLimits

0x55a9,	// (0x00044290) bg_passive_tab_pane_cp2_srt

0x4e95,	// (0x00043b7c) bg_passive_tab_pane_g1_cp2_srt

0x4936,	// (0x0004361d) bg_passive_tab_pane_g2_cp2_srt

0x4e9e,	// (0x00043b85) bg_passive_tab_pane_g3_cp2_srt

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp2_srt_ParamLimits

0x3a9a,	// (0x00042781) bg_active_tab_pane_cp2_srt

0x6c54,	// (0x0004593b) tabs_3_active_pane_srt_g1

0xdfbb,	// (0x0004cca2) tabs_3_active_pane_srt_t1_ParamLimits

0xdfbb,	// (0x0004cca2) tabs_3_active_pane_srt_t1

0x4e95,	// (0x00043b7c) bg_active_tab_pane_g1_cp2_srt

0x4936,	// (0x0004361d) bg_active_tab_pane_g2_cp2_srt

0x4e9e,	// (0x00043b85) bg_active_tab_pane_g3_cp2_srt

0x25c4,	// (0x000412ab) tabs_4_active_pane_srt_ParamLimits

0x25c4,	// (0x000412ab) tabs_4_active_pane_srt

0x25d6,	// (0x000412bd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x25d6,	// (0x000412bd) tabs_4_passive_pane_cp2_srt

0x1ba9,	// (0x00040890) aid_size_cell_toolbar

0x6918,	// (0x000455ff) main_idle_act_pane_ParamLimits

0x1d4e,	// (0x00040a35) popup_large_graphic_colour_window_ParamLimits

0xc77c,	// (0x0004b463) popup_toolbar_window_ParamLimits

0xc77c,	// (0x0004b463) popup_toolbar_window

0x6ac8,	// (0x000457af) list_single_graphic_2heading_pane_ParamLimits

0x6ac8,	// (0x000457af) list_single_graphic_2heading_pane

0x442c,	// (0x00043113) aid_size_cell_apps_grid_lsc_pane

0x443e,	// (0x00043125) aid_size_cell_apps_grid_prt_pane

0x502b,	// (0x00043d12) bg_wml_button_pane_cp1_ParamLimits

0x502b,	// (0x00043d12) bg_wml_button_pane_cp1

0xdbd0,	// (0x0004c8b7) form_midp_field_text_pane_t1_ParamLimits

0x55a9,	// (0x00044290) input_focus_pane_cp050_ParamLimits

0x582c,	// (0x00044513) list_midp_form_text_pane_ParamLimits

0x57ce,	// (0x000444b5) input_focus_pane_cp051_ParamLimits

0x57e2,	// (0x000444c9) list_midp_choice_pane_ParamLimits

0xdb64,	// (0x0004c84b) list_single_2graphic_pane_cp3_ParamLimits

0xdb64,	// (0x0004c84b) list_single_2graphic_pane_cp3

0xdb79,	// (0x0004c860) list_single_midp_graphic_pane_ParamLimits

0xdb79,	// (0x0004c860) list_single_midp_graphic_pane

0x0966,	// (0x0003f64d) list_single_graphic_2heading_pane_g1_ParamLimits

0x0966,	// (0x0003f64d) list_single_graphic_2heading_pane_g1

0x0972,	// (0x0003f659) list_single_graphic_2heading_pane_g4_ParamLimits

0x0972,	// (0x0003f659) list_single_graphic_2heading_pane_g4

0x097e,	// (0x0003f665) list_single_graphic_2heading_pane_g5_ParamLimits

0x097e,	// (0x0003f665) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0004e497) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0004e497) list_single_graphic_2heading_pane_g

0x098a,	// (0x0003f671) list_single_graphic_2heading_pane_t1_ParamLimits

0x098a,	// (0x0003f671) list_single_graphic_2heading_pane_t1

0x099e,	// (0x0003f685) list_single_graphic_2heading_pane_t2_ParamLimits

0x099e,	// (0x0003f685) list_single_graphic_2heading_pane_t2

0x09b8,	// (0x0003f69f) list_single_graphic_2heading_pane_t3_ParamLimits

0x09b8,	// (0x0003f69f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0004e49e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0004e49e) list_single_graphic_2heading_pane_t

0x5473,	// (0x0004415a) bg_popup_sub_pane_cp2

0x549d,	// (0x00044184) grid_toobar_pane

0x215e,	// (0x00040e45) cell_toolbar_pane_ParamLimits

0x215e,	// (0x00040e45) cell_toolbar_pane

0x54d9,	// (0x000441c0) cell_toolbar_pane_g1_ParamLimits

0x54d9,	// (0x000441c0) cell_toolbar_pane_g1

0x54ed,	// (0x000441d4) cell_toolbar_pane_g2_ParamLimits

0x54ed,	// (0x000441d4) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0004e4ac) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0004e4ac) cell_toolbar_pane_g

0x550f,	// (0x000441f6) grid_highlight_pane_cp2_ParamLimits

0x550f,	// (0x000441f6) grid_highlight_pane_cp2

0x5529,	// (0x00044210) toolbar_button_pane

0x5535,	// (0x0004421c) toolbar_button_pane_g1

0x553d,	// (0x00044224) toolbar_button_pane_g2

0x5545,	// (0x0004422c) toolbar_button_pane_g3

0x554d,	// (0x00044234) toolbar_button_pane_g4

0x5555,	// (0x0004423c) toolbar_button_pane_g5

0x555d,	// (0x00044244) toolbar_button_pane_g6

0x5565,	// (0x0004424c) toolbar_button_pane_g7

0x556d,	// (0x00044254) toolbar_button_pane_g8

0x5575,	// (0x0004425c) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0004e4b1) toolbar_button_pane_g

0x2196,	// (0x00040e7d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2196,	// (0x00040e7d) list_single_2graphic_pane_g1_cp3

0xc7d4,	// (0x0004b4bb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc7d4,	// (0x0004b4bb) list_single_2graphic_pane_g2_cp3

0x4b21,	// (0x00043808) list_single_2graphic_pane_g3_cp3

0x21b3,	// (0x00040e9a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x21b3,	// (0x00040e9a) list_single_2graphic_pane_g4_cp3

0x21bf,	// (0x00040ea6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x21bf,	// (0x00040ea6) list_single_2graphic_pane_t1_cp3

0x4b15,	// (0x000437fc) list_single_midp_graphic_pane_g2_ParamLimits

0x4b15,	// (0x000437fc) list_single_midp_graphic_pane_g2

0x094e,	// (0x0003f635) aid_zoom_text_primary

0x0956,	// (0x0003f63d) aid_zoom_text_secondary

0xd6af,	// (0x0004c396) status_small_pane_g7_ParamLimits

0xd6af,	// (0x0004c396) status_small_pane_g7

0xd6d2,	// (0x0004c3b9) status_small_pane_t1_ParamLimits

0xd02f,	// (0x0004bd16) title_pane_g2

0x0003,

0xf54e,	// (0x0004e235) title_pane_g

0xd2a7,	// (0x0004bf8e) aid_size_cell_colour_1_pane_ParamLimits

0xd2a7,	// (0x0004bf8e) aid_size_cell_colour_1_pane

0xd2bb,	// (0x0004bfa2) aid_size_cell_colour_2_pane_ParamLimits

0xd2bb,	// (0x0004bfa2) aid_size_cell_colour_2_pane

0xd2cf,	// (0x0004bfb6) aid_size_cell_colour_3_pane_ParamLimits

0xd2cf,	// (0x0004bfb6) aid_size_cell_colour_3_pane

0xd2e3,	// (0x0004bfca) aid_size_cell_colour_4_pane_ParamLimits

0xd2e3,	// (0x0004bfca) aid_size_cell_colour_4_pane

0x15f7,	// (0x000402de) title_pane_stacon_g1_ParamLimits

0x15f7,	// (0x000402de) title_pane_stacon_g1

0x5be1,	// (0x000448c8) popup_note_wait_window_g3_ParamLimits

0x5be1,	// (0x000448c8) popup_note_wait_window_g3

0x5c57,	// (0x0004493e) popup_note_wait_window_t5_ParamLimits

0x5c57,	// (0x0004493e) popup_note_wait_window_t5

0x373f,	// (0x00042426) main_feb_china_hwr_fs_writing_pane

0xc198,	// (0x0004ae7f) popup_feb_china_hwr_fs_window_ParamLimits

0xc198,	// (0x0004ae7f) popup_feb_china_hwr_fs_window

0xc7e5,	// (0x0004b4cc) aid_size_cell_hwr_fs_ParamLimits

0xc7e5,	// (0x0004b4cc) aid_size_cell_hwr_fs

0x55a9,	// (0x00044290) bg_popup_sub_pane_cp3_ParamLimits

0x55a9,	// (0x00044290) bg_popup_sub_pane_cp3

0xc7fa,	// (0x0004b4e1) grid_hwr_fs_pane_ParamLimits

0xc7fa,	// (0x0004b4e1) grid_hwr_fs_pane

0x221c,	// (0x00040f03) linegrid_hwr_fs_pane_ParamLimits

0x221c,	// (0x00040f03) linegrid_hwr_fs_pane

0xc812,	// (0x0004b4f9) cell_hwr_fs_pane_ParamLimits

0xc812,	// (0x0004b4f9) cell_hwr_fs_pane

0x55b5,	// (0x0004429c) linegrid_hwr_fs_pane_g1_ParamLimits

0x55b5,	// (0x0004429c) linegrid_hwr_fs_pane_g1

0xdb38,	// (0x0004c81f) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb38,	// (0x0004c81f) linegrid_hwr_fs_pane_g2

0x55d3,	// (0x000442ba) linegrid_hwr_fs_pane_g3_ParamLimits

0x55d3,	// (0x000442ba) linegrid_hwr_fs_pane_g3

0x224e,	// (0x00040f35) linegrid_hwr_fs_pane_g4_ParamLimits

0x224e,	// (0x00040f35) linegrid_hwr_fs_pane_g4

0x2268,	// (0x00040f4f) linegrid_hwr_fs_pane_g5_ParamLimits

0x2268,	// (0x00040f4f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0004e4d7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0004e4d7) linegrid_hwr_fs_pane_g

0x55df,	// (0x000442c6) cell_hwr_fs_pane_g1_ParamLimits

0x55df,	// (0x000442c6) cell_hwr_fs_pane_g1

0x53aa,	// (0x00044091) cell_hwr_fs_pane_g2_ParamLimits

0x53aa,	// (0x00044091) cell_hwr_fs_pane_g2

0xdb4a,	// (0x0004c831) cell_hwr_fs_pane_g3_ParamLimits

0xdb4a,	// (0x0004c831) cell_hwr_fs_pane_g3

0xdb57,	// (0x0004c83e) cell_hwr_fs_pane_g4_ParamLimits

0xdb57,	// (0x0004c83e) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0004e4e2) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0004e4e2) cell_hwr_fs_pane_g

0xc838,	// (0x0004b51f) cell_hwr_fs_pane_t1

0x373f,	// (0x00042426) grid_highlight_pane_cp6

0x373f,	// (0x00042426) main_idle_act2_pane

0x41e6,	// (0x00042ecd) aid_inside_area_popup_secondary

0xdc45,	// (0x0004c92c) aid_inside_area_window_primary_ParamLimits

0xdc45,	// (0x0004c92c) aid_inside_area_window_primary

0x6dbb,	// (0x00045aa2) ai2_news_ticker_pane

0x6dc3,	// (0x00045aaa) aid_size_cell_ai1_link_ParamLimits

0x6dc3,	// (0x00045aaa) aid_size_cell_ai1_link

0x6ddd,	// (0x00045ac4) popup_ai2_data_window_ParamLimits

0x6ddd,	// (0x00045ac4) popup_ai2_data_window

0x6df1,	// (0x00045ad8) popup_ai2_link_window_ParamLimits

0x6df1,	// (0x00045ad8) popup_ai2_link_window

0x55a9,	// (0x00044290) bg_popup_sub_pane_cp4_ParamLimits

0x55a9,	// (0x00044290) bg_popup_sub_pane_cp4

0x6e05,	// (0x00045aec) grid_ai2_link_pane_ParamLimits

0x6e05,	// (0x00045aec) grid_ai2_link_pane

0x6e1c,	// (0x00045b03) popup_ai2_link_window_g1_ParamLimits

0x6e1c,	// (0x00045b03) popup_ai2_link_window_g1

0x6e28,	// (0x00045b0f) popup_ai2_link_window_g2_ParamLimits

0x6e28,	// (0x00045b0f) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0004e6b5) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0004e6b5) popup_ai2_link_window_g

0x6e37,	// (0x00045b1e) ai2_mp_button_pane

0x6e3f,	// (0x00045b26) ai2_mp_volume_pane

0x57ce,	// (0x000444b5) bg_popup_sub_pane_cp5_ParamLimits

0x57ce,	// (0x000444b5) bg_popup_sub_pane_cp5

0x6e47,	// (0x00045b2e) heading_ai2_gene_pane_ParamLimits

0x6e47,	// (0x00045b2e) heading_ai2_gene_pane

0x6e53,	// (0x00045b3a) list_ai2_gene_pane_ParamLimits

0x6e53,	// (0x00045b3a) list_ai2_gene_pane

0x6e9b,	// (0x00045b82) cell_ai2_link_pane_ParamLimits

0x6e9b,	// (0x00045b82) cell_ai2_link_pane

0x6eb1,	// (0x00045b98) cell_ai2_link_pane_g1

0x373f,	// (0x00042426) grid_highlight_pane_cp7

0x267c,	// (0x00041363) ai2_mp_volume_pane_g1

0x6f82,	// (0x00045c69) ai2_mp_volume_pane_g2

0x6ef7,	// (0x00045bde) list_ai2_gene_pane_t1

0x6f8a,	// (0x00045c71) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0004e6ce) ai2_mp_volume_pane_g

0x2684,	// (0x0004136b) volume_small_pane_cp3

0x6f92,	// (0x00045c79) aid_size_cell_ai2_button

0x6f9a,	// (0x00045c81) grid_ai2_button_pane

0x6fa3,	// (0x00045c8a) cell_ai2_button_pane_ParamLimits

0x6fa3,	// (0x00045c8a) cell_ai2_button_pane

0x3735,	// (0x0004241c) cell_ai2_button_pane_g1

0x373f,	// (0x00042426) grid_highlight_pane_cp8

0x6f42,	// (0x00045c29) ai2_gene_pane_t1_ParamLimits

0x6f42,	// (0x00045c29) ai2_gene_pane_t1

0xc126,	// (0x0004ae0d) aid_height_parent_landscape

0xdd90,	// (0x0004ca77) aid_height_set_list

0x6918,	// (0x000455ff) aid_size_parent

0x6be2,	// (0x000458c9) aid_size_cell_graphic_pane_ParamLimits

0x6e63,	// (0x00045b4a) popup_ai2_data_window_g1_ParamLimits

0x6e63,	// (0x00045b4a) popup_ai2_data_window_g1

0x6e6f,	// (0x00045b56) ai2_news_ticker_pane_g1

0x6e77,	// (0x00045b5e) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0004e6ba) ai2_news_ticker_pane_g

0x6e7f,	// (0x00045b66) ai2_news_ticker_pane_t1

0x6e8d,	// (0x00045b74) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0004e6bf) ai2_news_ticker_pane_t

0x6eba,	// (0x00045ba1) heading_ai2_gene_pane_g1

0x6ec2,	// (0x00045ba9) heading_ai2_gene_pane_t1_ParamLimits

0x6ec2,	// (0x00045ba9) heading_ai2_gene_pane_t1

0x6ed7,	// (0x00045bbe) list_highlight_pane_cp6

0x6edf,	// (0x00045bc6) ai2_gene_pane_ParamLimits

0x6edf,	// (0x00045bc6) ai2_gene_pane

0x6f05,	// (0x00045bec) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0004e6c4) list_ai2_gene_pane_t

0x6f13,	// (0x00045bfa) list_highlight_pane_cp8_ParamLimits

0x6f13,	// (0x00045bfa) list_highlight_pane_cp8

0x6f24,	// (0x00045c0b) ai2_gene_pane_g1_ParamLimits

0x6f24,	// (0x00045c0b) ai2_gene_pane_g1

0x6f36,	// (0x00045c1d) ai2_gene_pane_g2_ParamLimits

0x6f36,	// (0x00045c1d) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0004e6c9) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0004e6c9) ai2_gene_pane_g

0x4027,	// (0x00042d0e) scroll_pane_cp12

0xc0e5,	// (0x0004adcc) control_pane_t3_ParamLimits

0xc0e5,	// (0x0004adcc) control_pane_t3

0xd6c3,	// (0x0004c3aa) status_small_pane_g8_ParamLimits

0xd6c3,	// (0x0004c3aa) status_small_pane_g8

0xc22b,	// (0x0004af12) popup_find_window_ParamLimits

0xc4ac,	// (0x0004b193) popup_note_image_window_ParamLimits

0x09d0,	// (0x0003f6b7) list_double2_graphic_pane_vc_g1_ParamLimits

0x09d0,	// (0x0003f6b7) list_double2_graphic_pane_vc_g1

0x150f,	// (0x000401f6) list_double2_graphic_pane_vc_g2_ParamLimits

0x150f,	// (0x000401f6) list_double2_graphic_pane_vc_g2

0x151b,	// (0x00040202) list_double2_graphic_pane_vc_g3_ParamLimits

0x151b,	// (0x00040202) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0004e4a5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0004e4a5) list_double2_graphic_pane_vc_g

0x09dc,	// (0x0003f6c3) list_double2_graphic_pane_vc_t1_ParamLimits

0x09dc,	// (0x0003f6c3) list_double2_graphic_pane_vc_t1

0x150f,	// (0x000401f6) list_single_heading_pane_vc_g1_ParamLimits

0x150f,	// (0x000401f6) list_single_heading_pane_vc_g1

0x151b,	// (0x00040202) list_single_heading_pane_vc_g2_ParamLimits

0x151b,	// (0x00040202) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2b9) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2b9) list_single_heading_pane_vc_g

0x09f2,	// (0x0003f6d9) list_single_heading_pane_vc_t1_ParamLimits

0x09f2,	// (0x0003f6d9) list_single_heading_pane_vc_t1

0x0a08,	// (0x0003f6ef) list_single_heading_pane_vc_t2_ParamLimits

0x0a08,	// (0x0003f6ef) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0004e4c6) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0004e4c6) list_single_heading_pane_vc_t

0x3fec,	// (0x00042cd3) list_setting_number_pane_vc_g1_ParamLimits

0x3fec,	// (0x00042cd3) list_setting_number_pane_vc_g1

0x3ff8,	// (0x00042cdf) list_setting_number_pane_vc_g2_ParamLimits

0x3ff8,	// (0x00042cdf) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004e4cb) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004e4cb) list_setting_number_pane_vc_g

0x0a24,	// (0x0003f70b) list_setting_number_pane_vc_t1_ParamLimits

0x0a24,	// (0x0003f70b) list_setting_number_pane_vc_t1

0x0a38,	// (0x0003f71f) list_setting_number_pane_vc_t2_ParamLimits

0x0a38,	// (0x0003f71f) list_setting_number_pane_vc_t2

0x0a52,	// (0x0003f739) list_setting_number_pane_vc_t3_ParamLimits

0x0a52,	// (0x0003f739) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0004e4d0) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0004e4d0) list_setting_number_pane_vc_t

0x0a7a,	// (0x0003f761) set_value_pane_vc_ParamLimits

0x0a7a,	// (0x0003f761) set_value_pane_vc

0x6ac8,	// (0x000457af) list_double2_graphic_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_double2_graphic_pane_vc

0x24ce,	// (0x000411b5) list_double2_large_graphic_pane_vc_ParamLimits

0x24ce,	// (0x000411b5) list_double2_large_graphic_pane_vc

0x6ac8,	// (0x000457af) list_double2_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_double2_pane_vc

0x6ac8,	// (0x000457af) list_double_graphic_heading_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_double_graphic_heading_pane_vc

0x6ac8,	// (0x000457af) list_double_graphic_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_double_graphic_pane_vc

0x6ac8,	// (0x000457af) list_double_heading_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_double_heading_pane_vc

0x24e0,	// (0x000411c7) list_double_large_graphic_pane_vc_ParamLimits

0x24e0,	// (0x000411c7) list_double_large_graphic_pane_vc

0x6ac8,	// (0x000457af) list_double_number_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_double_number_pane_vc

0x6ac8,	// (0x000457af) list_double_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_double_pane_vc

0x6ac8,	// (0x000457af) list_double_time_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_double_time_pane_vc

0x6ac8,	// (0x000457af) list_setting_number_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_setting_number_pane_vc

0x6ac8,	// (0x000457af) list_setting_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_setting_pane_vc

0x6ac8,	// (0x000457af) list_single_graphic_heading_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_single_graphic_heading_pane_vc

0x6ac8,	// (0x000457af) list_single_heading_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_single_heading_pane_vc

0x6ac8,	// (0x000457af) list_single_number_heading_pane_vc_ParamLimits

0x6ac8,	// (0x000457af) list_single_number_heading_pane_vc

0x09d0,	// (0x0003f6b7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x09d0,	// (0x0003f6b7) list_double_graphic_heading_pane_vc_g1

0x150f,	// (0x000401f6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x150f,	// (0x000401f6) list_double_graphic_heading_pane_vc_g2

0x151b,	// (0x00040202) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x151b,	// (0x00040202) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0004e4a5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0004e4a5) list_double_graphic_heading_pane_vc_g

0x0b23,	// (0x0003f80a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0b23,	// (0x0003f80a) list_double_graphic_heading_pane_vc_t1

0x0b3f,	// (0x0003f826) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b3f,	// (0x0003f826) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0004e6d5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0004e6d5) list_double_graphic_heading_pane_vc_t

0x3fec,	// (0x00042cd3) list_setting_pane_vc_g1_ParamLimits

0x3fec,	// (0x00042cd3) list_setting_pane_vc_g1

0x3ff8,	// (0x00042cdf) list_setting_pane_vc_g2_ParamLimits

0x3ff8,	// (0x00042cdf) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004e4cb) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004e4cb) list_setting_pane_vc_g

0x0b57,	// (0x0003f83e) list_setting_pane_vc_t1_ParamLimits

0x0b57,	// (0x0003f83e) list_setting_pane_vc_t1

0x0b71,	// (0x0003f858) list_setting_pane_vc_t2_ParamLimits

0x0b71,	// (0x0003f858) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0004e718) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0004e718) list_setting_pane_vc_t

0x0a7a,	// (0x0003f761) set_value_pane_cp_vc_ParamLimits

0x0a7a,	// (0x0003f761) set_value_pane_cp_vc

0x150f,	// (0x000401f6) list_single_number_heading_pane_vc_g1_ParamLimits

0x150f,	// (0x000401f6) list_single_number_heading_pane_vc_g1

0x151b,	// (0x00040202) list_single_number_heading_pane_vc_g2_ParamLimits

0x151b,	// (0x00040202) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2b9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2b9) list_single_number_heading_pane_vc_g

0x09f2,	// (0x0003f6d9) list_single_number_heading_pane_vc_t1_ParamLimits

0x09f2,	// (0x0003f6d9) list_single_number_heading_pane_vc_t1

0x0b89,	// (0x0003f870) list_single_number_heading_pane_vc_t2_ParamLimits

0x0b89,	// (0x0003f870) list_single_number_heading_pane_vc_t2

0x028d,	// (0x0003ef74) list_single_number_heading_pane_vc_t3_ParamLimits

0x028d,	// (0x0003ef74) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0004e71d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0004e71d) list_single_number_heading_pane_vc_t

0x09d0,	// (0x0003f6b7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x09d0,	// (0x0003f6b7) list_single_graphic_heading_pane_vc_g1

0x150f,	// (0x000401f6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x150f,	// (0x000401f6) list_single_graphic_heading_pane_vc_g4

0x151b,	// (0x00040202) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x151b,	// (0x00040202) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0004e4a5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0004e4a5) list_single_graphic_heading_pane_vc_g

0x09f2,	// (0x0003f6d9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x09f2,	// (0x0003f6d9) list_single_graphic_heading_pane_vc_t1

0x0b9d,	// (0x0003f884) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0b9d,	// (0x0003f884) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0004e724) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0004e724) list_single_graphic_heading_pane_vc_t

0x150f,	// (0x000401f6) list_double2_pane_vc_g1_ParamLimits

0x150f,	// (0x000401f6) list_double2_pane_vc_g1

0x151b,	// (0x00040202) list_double2_pane_vc_g2_ParamLimits

0x151b,	// (0x00040202) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2b9) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2b9) list_double2_pane_vc_g

0x0b0d,	// (0x0003f7f4) list_double2_pane_vc_t1_ParamLimits

0x0b0d,	// (0x0003f7f4) list_double2_pane_vc_t1

0x26d5,	// (0x000413bc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x26d5,	// (0x000413bc) list_double2_large_graphic_pane_vc_g1

0x26e1,	// (0x000413c8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x26e1,	// (0x000413c8) list_double2_large_graphic_pane_vc_g2

0x26ed,	// (0x000413d4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x26ed,	// (0x000413d4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004e2d1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004e2d1) list_double2_large_graphic_pane_vc_g

0x0bb1,	// (0x0003f898) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0bb1,	// (0x0003f898) list_double2_large_graphic_pane_vc_t1

0x0bc7,	// (0x0003f8ae) list_double_time_pane_vc_g1_ParamLimits

0x0bc7,	// (0x0003f8ae) list_double_time_pane_vc_g1

0x0bd3,	// (0x0003f8ba) list_double_time_pane_vc_g2_ParamLimits

0x0bd3,	// (0x0003f8ba) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x0004e729) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x0004e729) list_double_time_pane_vc_g

0x0bdf,	// (0x0003f8c6) list_double_time_pane_vc_t1_ParamLimits

0x0bdf,	// (0x0003f8c6) list_double_time_pane_vc_t1

0x0bfd,	// (0x0003f8e4) list_double_time_pane_vc_t2_ParamLimits

0x0bfd,	// (0x0003f8e4) list_double_time_pane_vc_t2

0x0c47,	// (0x0003f92e) list_double_time_pane_vc_t3_ParamLimits

0x0c47,	// (0x0003f92e) list_double_time_pane_vc_t3

0x0c59,	// (0x0003f940) list_double_time_pane_vc_t4_ParamLimits

0x0c59,	// (0x0003f940) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x0004e72e) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x0004e72e) list_double_time_pane_vc_t

0x150f,	// (0x000401f6) list_double_pane_vc_g1_ParamLimits

0x150f,	// (0x000401f6) list_double_pane_vc_g1

0x151b,	// (0x00040202) list_double_pane_vc_g2_ParamLimits

0x151b,	// (0x00040202) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2b9) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2b9) list_double_pane_vc_g

0x0c6d,	// (0x0003f954) list_double_pane_vc_t1_ParamLimits

0x0c6d,	// (0x0003f954) list_double_pane_vc_t1

0x0c7f,	// (0x0003f966) list_double_pane_vc_t2_ParamLimits

0x0c7f,	// (0x0003f966) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x0004e737) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x0004e737) list_double_pane_vc_t

0x150f,	// (0x000401f6) list_double_number_pane_vc_g1_ParamLimits

0x150f,	// (0x000401f6) list_double_number_pane_vc_g1

0x151b,	// (0x00040202) list_double_number_pane_vc_g2_ParamLimits

0x151b,	// (0x00040202) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2b9) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2b9) list_double_number_pane_vc_g

0x0c97,	// (0x0003f97e) list_double_number_pane_vc_t1_ParamLimits

0x0c97,	// (0x0003f97e) list_double_number_pane_vc_t1

0x0ca9,	// (0x0003f990) list_double_number_pane_vc_t2_ParamLimits

0x0ca9,	// (0x0003f990) list_double_number_pane_vc_t2

0x0cbb,	// (0x0003f9a2) list_double_number_pane_vc_t3_ParamLimits

0x0cbb,	// (0x0003f9a2) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x0004e73c) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x0004e73c) list_double_number_pane_vc_t

0x26f9,	// (0x000413e0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x26f9,	// (0x000413e0) list_double_large_graphic_pane_vc_g1

0x0cd3,	// (0x0003f9ba) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0cd3,	// (0x0003f9ba) list_double_large_graphic_pane_vc_g2

0x0ce7,	// (0x0003f9ce) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0ce7,	// (0x0003f9ce) list_double_large_graphic_pane_vc_g3

0x0cf6,	// (0x0003f9dd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0cf6,	// (0x0003f9dd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x0004e743) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x0004e743) list_double_large_graphic_pane_vc_g

0x0d05,	// (0x0003f9ec) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0d05,	// (0x0003f9ec) list_double_large_graphic_pane_vc_t1

0x0d1f,	// (0x0003fa06) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0d1f,	// (0x0003fa06) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x0004e74c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x0004e74c) list_double_large_graphic_pane_vc_t

0x150f,	// (0x000401f6) list_double_heading_pane_vc_g1_ParamLimits

0x150f,	// (0x000401f6) list_double_heading_pane_vc_g1

0x151b,	// (0x00040202) list_double_heading_pane_vc_g2_ParamLimits

0x151b,	// (0x00040202) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e2b9) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e2b9) list_double_heading_pane_vc_g

0x0d41,	// (0x0003fa28) list_double_heading_pane_vc_t1_ParamLimits

0x0d41,	// (0x0003fa28) list_double_heading_pane_vc_t1

0x09f2,	// (0x0003f6d9) list_double_heading_pane_vc_t2_ParamLimits

0x09f2,	// (0x0003f6d9) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0004e751) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0004e751) list_double_heading_pane_vc_t

0x0d55,	// (0x0003fa3c) list_double_graphic_pane_vc_g1_ParamLimits

0x0d55,	// (0x0003fa3c) list_double_graphic_pane_vc_g1

0x0d61,	// (0x0003fa48) list_double_graphic_pane_vc_g2_ParamLimits

0x0d61,	// (0x0003fa48) list_double_graphic_pane_vc_g2

0x150f,	// (0x000401f6) list_double_graphic_pane_vc_g3_ParamLimits

0x150f,	// (0x000401f6) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x0004e756) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0004e756) list_double_graphic_pane_vc_g

0x0d72,	// (0x0003fa59) list_double_graphic_pane_vc_t1_ParamLimits

0x0d72,	// (0x0003fa59) list_double_graphic_pane_vc_t1

0x0d90,	// (0x0003fa77) list_double_graphic_pane_vc_t2_ParamLimits

0x0d90,	// (0x0003fa77) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0004e75f) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0004e75f) list_double_graphic_pane_vc_t

0x10b5,	// (0x0003fd9c) aid_size_cell_fastswap

0xbdad,	// (0x0004aa94) aid_size_cell_touch_ParamLimits

0xbdad,	// (0x0004aa94) aid_size_cell_touch

0x1318,	// (0x0003ffff) popup_fast_swap_wide_window_ParamLimits

0x1318,	// (0x0003ffff) popup_fast_swap_wide_window

0xbf5d,	// (0x0004ac44) touch_pane_ParamLimits

0xbf5d,	// (0x0004ac44) touch_pane

0x4089,	// (0x00042d70) button_value_adjust_pane_cp2

0x068e,	// (0x0003f375) button_value_adjust_pane_cp4

0x06b0,	// (0x0003f397) form_field_data_pane_cp2

0xbab3,	// (0x0004a79a) form_field_data_wide_pane_cp2

0x44f9,	// (0x000431e0) bg_scroll_pane_ParamLimits

0x175a,	// (0x00040441) scroll_handle_pane_ParamLimits

0x176e,	// (0x00040455) scroll_sc2_down_pane_ParamLimits

0x176e,	// (0x00040455) scroll_sc2_down_pane

0x452a,	// (0x00043211) scroll_sc2_up_pane_ParamLimits

0x452a,	// (0x00043211) scroll_sc2_up_pane

0xe0f9,	// (0x0004cde0) grid_wheel_folder_pane_g1_ParamLimits

0xe0f9,	// (0x0004cde0) grid_wheel_folder_pane_g1

0x1946,	// (0x0004062d) clock_nsta_pane_cp2_ParamLimits

0x1946,	// (0x0004062d) clock_nsta_pane_cp2

0x502b,	// (0x00043d12) listscroll_midp_pane_ParamLimits

0xd5ba,	// (0x0004c2a1) midp_canvas_pane

0x4fdd,	// (0x00043cc4) nsta_clock_indic_pane

0x5011,	// (0x00043cf8) listscroll_form_pane_vc

0x5019,	// (0x00043d00) listscroll_set_pane_vc_ParamLimits

0x5019,	// (0x00043d00) listscroll_set_pane_vc

0xd843,	// (0x0004c52a) clock_nsta_pane

0xd86d,	// (0x0004c554) indicator_nsta_pane

0x5473,	// (0x0004415a) bg_popup_sub_pane_cp2_ParamLimits

0x5487,	// (0x0004416e) find_pane_cp2_ParamLimits

0x5487,	// (0x0004416e) find_pane_cp2

0x549d,	// (0x00044184) grid_toobar_pane_ParamLimits

0x557d,	// (0x00044264) list_form_gen_pane_vc_ParamLimits

0x557d,	// (0x00044264) list_form_gen_pane_vc

0x5593,	// (0x0004427a) scroll_pane_cp8_vc_ParamLimits

0x5593,	// (0x0004427a) scroll_pane_cp8_vc

0x560f,	// (0x000442f6) data_form_wide_pane_vc_ParamLimits

0x560f,	// (0x000442f6) data_form_wide_pane_vc

0x561b,	// (0x00044302) form_field_data_wide_pane_vc_g1

0x5623,	// (0x0004430a) form_field_data_wide_pane_vc_t1_ParamLimits

0x5623,	// (0x0004430a) form_field_data_wide_pane_vc_t1

0x409d,	// (0x00042d84) input_focus_pane_cp6_vc_ParamLimits

0x409d,	// (0x00042d84) input_focus_pane_cp6_vc

0xdbf3,	// (0x0004c8da) list_midp_pane_ParamLimits

0x6c48,	// (0x0004592f) scroll_pane_cp16_ParamLimits

0x6c48,	// (0x0004592f) scroll_pane_cp16

0x59bb,	// (0x000446a2) button_value_adjust_pane_ParamLimits

0x59bb,	// (0x000446a2) button_value_adjust_pane

0xdda1,	// (0x0004ca88) button_value_adjust_pane_cp6_ParamLimits

0xdda1,	// (0x0004ca88) button_value_adjust_pane_cp6

0xdeb7,	// (0x0004cb9e) settings_code_pane_cp_ParamLimits

0xdeb7,	// (0x0004cb9e) settings_code_pane_cp

0x3735,	// (0x0004241c) cell_touch_pane_g1

0x3735,	// (0x0004241c) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0004e3ea) cell_touch_pane_g

0xdfe7,	// (0x0004ccce) cell_touch_pane_cp_ParamLimits

0xdfe7,	// (0x0004ccce) cell_touch_pane_cp

0xe003,	// (0x0004ccea) cell_touch_pane_ParamLimits

0xe003,	// (0x0004ccea) cell_touch_pane

0x3735,	// (0x0004241c) scroll_sc2_down_pane_g1

0x3735,	// (0x0004241c) scroll_sc2_up_pane_g1

0x373f,	// (0x00042426) bg_set_opt_pane_cp4_vc

0x6fd6,	// (0x00045cbd) list_set_graphic_pane_vc_g1_ParamLimits

0x6fd6,	// (0x00045cbd) list_set_graphic_pane_vc_g1

0x5257,	// (0x00043f3e) list_set_graphic_pane_vc_g2_ParamLimits

0x5257,	// (0x00043f3e) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0004e6da) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0004e6da) list_set_graphic_pane_vc_g

0x6fe2,	// (0x00045cc9) text_primary_small_cp13_vc_ParamLimits

0x6fe2,	// (0x00045cc9) text_primary_small_cp13_vc

0x6ffa,	// (0x00045ce1) list_set_graphic_pane_vc_ParamLimits

0x6ffa,	// (0x00045ce1) list_set_graphic_pane_vc

0x373f,	// (0x00042426) input_focus_pane_cp2_vc

0x3735,	// (0x0004241c) setting_code_pane_vc_g1

0x386a,	// (0x00042551) setting_code_pane_vc_t1

0x700e,	// (0x00045cf5) set_text_pane_vc_t1_ParamLimits

0x700e,	// (0x00045cf5) set_text_pane_vc_t1

0x373f,	// (0x00042426) input_focus_pane_cp1_vc

0x702b,	// (0x00045d12) list_set_text_pane_vc

0x3735,	// (0x0004241c) setting_text_pane_vc_g1

0x373f,	// (0x00042426) bg_set_opt_pane_cp2_vc

0x3861,	// (0x00042548) setting_slider_graphic_pane_vc_g1

0x7035,	// (0x00045d1c) setting_slider_graphic_pane_vc_t1

0x7045,	// (0x00045d2c) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0004e6df) setting_slider_graphic_pane_vc_t

0x7055,	// (0x00045d3c) slider_set_pane_cp_vc

0x705d,	// (0x00045d44) slider_set_pane_vc_g1

0x7066,	// (0x00045d4d) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0004e6e4) slider_set_pane_vc_g

0x40ec,	// (0x00042dd3) set_opt_bg_pane_g1_copy1

0x40f4,	// (0x00042ddb) set_opt_bg_pane_g2_copy1

0x7092,	// (0x00045d79) set_opt_bg_pane_g3_copy1

0x4104,	// (0x00042deb) set_opt_bg_pane_g4_copy1

0x410c,	// (0x00042df3) set_opt_bg_pane_g5_copy1

0x4114,	// (0x00042dfb) set_opt_bg_pane_g6_copy1

0x709a,	// (0x00045d81) set_opt_bg_pane_g7_copy1

0x70a4,	// (0x00045d8b) set_opt_bg_pane_g8_copy1

0x70ac,	// (0x00045d93) set_opt_bg_pane_g9_copy1

0x373f,	// (0x00042426) bg_set_opt_pane_cp_vc

0x70b4,	// (0x00045d9b) setting_slider_pane_vc_t1

0x70c3,	// (0x00045daa) setting_slider_pane_vc_t2

0x70d3,	// (0x00045dba) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0004e6f3) setting_slider_pane_vc_t

0x70e3,	// (0x00045dca) slider_set_pane_vc

0x228c,	// (0x00040f73) volume_set_pane_vc_g1

0x268d,	// (0x00041374) volume_set_pane_vc_g2

0x2696,	// (0x0004137d) volume_set_pane_vc_g3

0x269f,	// (0x00041386) volume_set_pane_vc_g4

0x26a8,	// (0x0004138f) volume_set_pane_vc_g5

0x26b1,	// (0x00041398) volume_set_pane_vc_g6

0x22b9,	// (0x00040fa0) volume_set_pane_vc_g7

0x26ba,	// (0x000413a1) volume_set_pane_vc_g8

0x26c3,	// (0x000413aa) volume_set_pane_vc_g9

0x26cc,	// (0x000413b3) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0004e6fa) volume_set_pane_vc_g

0x70eb,	// (0x00045dd2) volume_set_pane_vc

0x70f3,	// (0x00045dda) button_value_adjust_pane_cp1_vc

0x70fd,	// (0x00045de4) list_highlight_pane_cp2_vc

0x7106,	// (0x00045ded) list_set_pane_vc_ParamLimits

0x7106,	// (0x00045ded) list_set_pane_vc

0x7164,	// (0x00045e4b) main_pane_set_vc_t1_ParamLimits

0x7164,	// (0x00045e4b) main_pane_set_vc_t1

0x7179,	// (0x00045e60) main_pane_set_vc_t2_ParamLimits

0x7179,	// (0x00045e60) main_pane_set_vc_t2

0x718b,	// (0x00045e72) main_pane_set_vc_t3_ParamLimits

0x718b,	// (0x00045e72) main_pane_set_vc_t3

0x719d,	// (0x00045e84) main_pane_set_vc_t4_ParamLimits

0x719d,	// (0x00045e84) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0004e70f) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0004e70f) main_pane_set_vc_t

0x71af,	// (0x00045e96) setting_code_pane_vc_ParamLimits

0x71af,	// (0x00045e96) setting_code_pane_vc

0x71be,	// (0x00045ea5) setting_slider_graphic_pane_vc

0x71be,	// (0x00045ea5) setting_slider_pane_vc

0x71be,	// (0x00045ea5) setting_text_pane_vc

0x71be,	// (0x00045ea5) setting_volume_pane_vc

0x71c6,	// (0x00045ead) scroll_pane_cp121_vc

0x4077,	// (0x00042d5e) set_content_pane_vc

0x71ce,	// (0x00045eb5) button_value_adjust_pane_g1

0x71d7,	// (0x00045ebe) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0004e764) button_value_adjust_pane_g

0x71e0,	// (0x00045ec7) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71e0,	// (0x00045ec7) form_field_slider_wide_pane_vc_t1

0x71f4,	// (0x00045edb) form_field_slider_wide_pane_vc_t2_ParamLimits

0x71f4,	// (0x00045edb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0004e769) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0004e769) form_field_slider_wide_pane_vc_t

0x3a9a,	// (0x00042781) input_focus_pane_cp10_vc_ParamLimits

0x3a9a,	// (0x00042781) input_focus_pane_cp10_vc

0x7220,	// (0x00045f07) slider_cont_pane_cp1_vc_ParamLimits

0x7220,	// (0x00045f07) slider_cont_pane_cp1_vc

0x7230,	// (0x00045f17) slider_form_pane_g1_cp2

0x7066,	// (0x00045d4d) slider_form_pane_g2_cp2

0x725d,	// (0x00045f44) form_field_slider_pane_vc_t3

0x726b,	// (0x00045f52) form_field_slider_pane_vc_t4

0x7279,	// (0x00045f60) slider_form_pane_vc_ParamLimits

0x7279,	// (0x00045f60) slider_form_pane_vc

0x7286,	// (0x00045f6d) form_field_slider_pane_vc_t1_ParamLimits

0x7286,	// (0x00045f6d) form_field_slider_pane_vc_t1

0x71f4,	// (0x00045edb) form_field_slider_pane_vc_t2_ParamLimits

0x71f4,	// (0x00045edb) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0004e77b) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0004e77b) form_field_slider_pane_vc_t

0x3a9a,	// (0x00042781) input_focus_pane_cp9_vc_ParamLimits

0x3a9a,	// (0x00042781) input_focus_pane_cp9_vc

0x72a2,	// (0x00045f89) slider_cont_pane_vc_ParamLimits

0x72a2,	// (0x00045f89) slider_cont_pane_vc

0x72b4,	// (0x00045f9b) list_form_graphic_pane_cp_vc_ParamLimits

0x72b4,	// (0x00045f9b) list_form_graphic_pane_cp_vc

0x561b,	// (0x00044302) form_field_popup_wide_pane_vc_g1

0x72c9,	// (0x00045fb0) form_field_popup_wide_pane_vc_t1_ParamLimits

0x72c9,	// (0x00045fb0) form_field_popup_wide_pane_vc_t1

0x409d,	// (0x00042d84) input_focus_pane_cp8_vc_ParamLimits

0x409d,	// (0x00042d84) input_focus_pane_cp8_vc

0x730e,	// (0x00045ff5) list_form_wide_pane_vc_ParamLimits

0x730e,	// (0x00045ff5) list_form_wide_pane_vc

0x731a,	// (0x00046001) list_form_graphic_pane_vc_g1

0x7322,	// (0x00046009) list_form_graphic_pane_vc_t1_ParamLimits

0x7322,	// (0x00046009) list_form_graphic_pane_vc_t1

0x381f,	// (0x00042506) list_highlight_pane_cp5_vc_ParamLimits

0x381f,	// (0x00042506) list_highlight_pane_cp5_vc

0x733e,	// (0x00046025) list_form_graphic_pane_vc_ParamLimits

0x733e,	// (0x00046025) list_form_graphic_pane_vc

0x561b,	// (0x00044302) form_field_popup_pane_vc_g1

0x7354,	// (0x0004603b) form_field_popup_pane_vc_t1_ParamLimits

0x7354,	// (0x0004603b) form_field_popup_pane_vc_t1

0x409d,	// (0x00042d84) input_focus_pane_cp7_vc_ParamLimits

0x409d,	// (0x00042d84) input_focus_pane_cp7_vc

0x736b,	// (0x00046052) list_form_pane_vc_ParamLimits

0x736b,	// (0x00046052) list_form_pane_vc

0x7377,	// (0x0004605e) data_form_pane_vc_t1_ParamLimits

0x7377,	// (0x0004605e) data_form_pane_vc_t1

0x40ec,	// (0x00042dd3) input_focus_pane_vc_g1

0x40f4,	// (0x00042ddb) input_focus_pane_vc_g2

0x40fc,	// (0x00042de3) input_focus_pane_vc_g3

0x4104,	// (0x00042deb) input_focus_pane_vc_g4

0x410c,	// (0x00042df3) input_focus_pane_vc_g5

0x4114,	// (0x00042dfb) input_focus_pane_vc_g6

0x411c,	// (0x00042e03) input_focus_pane_vc_g7

0x4124,	// (0x00042e0b) input_focus_pane_vc_g8

0x412c,	// (0x00042e13) input_focus_pane_vc_g9

0x3735,	// (0x0004241c) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0004e373) input_focus_pane_vc_g

0x560f,	// (0x000442f6) data_form_pane_vc_ParamLimits

0x560f,	// (0x000442f6) data_form_pane_vc

0x561b,	// (0x00044302) form_field_data_pane_vc_g1

0x7392,	// (0x00046079) form_field_data_pane_vc_t1_ParamLimits

0x7392,	// (0x00046079) form_field_data_pane_vc_t1

0x409d,	// (0x00042d84) input_focus_pane_vc_ParamLimits

0x409d,	// (0x00042d84) input_focus_pane_vc

0x73ac,	// (0x00046093) button_value_adjust_pane_cp3_vc

0x73b4,	// (0x0004609b) button_value_adjust_pane_cp5_vc

0x73bc,	// (0x000460a3) form_field_data_pane_vc_ParamLimits

0x73bc,	// (0x000460a3) form_field_data_pane_vc

0x73d3,	// (0x000460ba) form_field_data_pane_vc_cp2

0x73db,	// (0x000460c2) form_field_data_wide_pane_vc_ParamLimits

0x73db,	// (0x000460c2) form_field_data_wide_pane_vc

0x73f1,	// (0x000460d8) form_field_data_wide_pane_vc_cp2

0x73f9,	// (0x000460e0) form_field_popup_pane_vc_ParamLimits

0x73f9,	// (0x000460e0) form_field_popup_pane_vc

0x7410,	// (0x000460f7) form_field_popup_wide_pane_vc_ParamLimits

0x7410,	// (0x000460f7) form_field_popup_wide_pane_vc

0x7426,	// (0x0004610d) form_field_slider_pane_vc_ParamLimits

0x7426,	// (0x0004610d) form_field_slider_pane_vc

0x7439,	// (0x00046120) form_field_slider_wide_pane_vc_ParamLimits

0x7439,	// (0x00046120) form_field_slider_wide_pane_vc

0xe021,	// (0x0004cd08) grid_touch_1_pane_ParamLimits

0xe021,	// (0x0004cd08) grid_touch_1_pane

0xe035,	// (0x0004cd1c) grid_touch_2_pane_ParamLimits

0xe035,	// (0x0004cd1c) grid_touch_2_pane

0x7507,	// (0x000461ee) touch_pane_g1_ParamLimits

0x7507,	// (0x000461ee) touch_pane_g1

0x7470,	// (0x00046157) cell_app_pane_cp_wide_ParamLimits

0x7470,	// (0x00046157) cell_app_pane_cp_wide

0x7481,	// (0x00046168) grid_popup_fast_wide_pane_ParamLimits

0x7481,	// (0x00046168) grid_popup_fast_wide_pane

0x7495,	// (0x0004617c) scroll_pane_cp19_ParamLimits

0x7495,	// (0x0004617c) scroll_pane_cp19

0x373f,	// (0x00042426) bg_popup_window_pane_cp20

0x74a9,	// (0x00046190) listscroll_popup_fast_wide_pane

0x4252,	// (0x00042f39) grid_indicator_nsta_pane

0x74b1,	// (0x00046198) clock_nsta_pane_g1

0x74ba,	// (0x000461a1) clock_nsta_pane_t1

0xe05f,	// (0x0004cd46) cell_indicator_nsta_pane_ParamLimits

0xe05f,	// (0x0004cd46) cell_indicator_nsta_pane

0x7507,	// (0x000461ee) cell_indicator_nsta_pane_g1

0xe076,	// (0x0004cd5d) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0004e78c) cell_indicator_nsta_pane_g

0x7522,	// (0x00046209) clock_nsta_pane_cp

0x752a,	// (0x00046211) indicator_nsta_pane_cp

0x7532,	// (0x00046219) nsta_clock_indic_pane_g1

0x38e8,	// (0x000425cf) grid_indicator_pane

0x461f,	// (0x00043306) scroll_pane_cp29

0x1895,	// (0x0004057c) indicator_nsta_pane_cp2_ParamLimits

0x1895,	// (0x0004057c) indicator_nsta_pane_cp2

0x381f,	// (0x00042506) main_apps_wheel_pane

0x5846,	// (0x0004452d) form_midp_field_text_pane_ParamLimits

0x598d,	// (0x00044674) scroll_bar_cp050_ParamLimits

0x7593,	// (0x0004627a) cell_indicator_pane_ParamLimits

0x7593,	// (0x0004627a) cell_indicator_pane

0x75ae,	// (0x00046295) cell_indicator_pane_g1

0xe083,	// (0x0004cd6a) grid_wheel_folder_pane_ParamLimits

0xe083,	// (0x0004cd6a) grid_wheel_folder_pane

0xe091,	// (0x0004cd78) list_wheel_apps_pane_ParamLimits

0xe091,	// (0x0004cd78) list_wheel_apps_pane

0xe09f,	// (0x0004cd86) main_apps_wheel_pane_g1_ParamLimits

0xe09f,	// (0x0004cd86) main_apps_wheel_pane_g1

0xe0ab,	// (0x0004cd92) main_apps_wheel_pane_g2_ParamLimits

0xe0ab,	// (0x0004cd92) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0004e7a8) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0004e7a8) main_apps_wheel_pane_g

0xe0b9,	// (0x0004cda0) main_apps_wheel_pane_t1_ParamLimits

0xe0b9,	// (0x0004cda0) main_apps_wheel_pane_t1

0xe0cd,	// (0x0004cdb4) list_wheel_apps_pane_g1

0xe0d5,	// (0x0004cdbc) list_wheel_apps_pane_g2

0xe0dd,	// (0x0004cdc4) list_wheel_apps_pane_g3

0xe0e5,	// (0x0004cdcc) list_wheel_apps_pane_g4

0xe0ef,	// (0x0004cdd6) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0004e7ad) list_wheel_apps_pane_g

0x4b71,	// (0x00043858) navi_icon_text_pane

0xd737,	// (0x0004c41e) aid_fill_nsta

0x7675,	// (0x0004635c) navi_icon_text_pane_g1

0x7681,	// (0x00046368) navi_icon_text_pane_t1

0xd599,	// (0x0004c280) list_set_graphic_pane_t1_ParamLimits

0xd599,	// (0x0004c280) list_set_graphic_pane_t1

0x60df,	// (0x00044dc6) popup_midp_note_alarm_window_t6_ParamLimits

0x60df,	// (0x00044dc6) popup_midp_note_alarm_window_t6

0x60f1,	// (0x00044dd8) popup_midp_note_alarm_window_t7_ParamLimits

0x60f1,	// (0x00044dd8) popup_midp_note_alarm_window_t7

0x6103,	// (0x00044dea) popup_midp_note_alarm_window_t8_ParamLimits

0x6103,	// (0x00044dea) popup_midp_note_alarm_window_t8

0x6115,	// (0x00044dfc) popup_midp_note_alarm_window_t9_ParamLimits

0x6115,	// (0x00044dfc) popup_midp_note_alarm_window_t9

0x6127,	// (0x00044e0e) popup_midp_note_alarm_window_t10_ParamLimits

0x6127,	// (0x00044e0e) popup_midp_note_alarm_window_t10

0x6139,	// (0x00044e20) popup_midp_note_alarm_window_t11_ParamLimits

0x6139,	// (0x00044e20) popup_midp_note_alarm_window_t11

0x614b,	// (0x00044e32) scroll_pane_cp17_ParamLimits

0x614b,	// (0x00044e32) scroll_pane_cp17

0x228c,	// (0x00040f73) volume_small_pane_cp_g1

0x2721,	// (0x00041408) volume_small_pane_cp_g2

0x272a,	// (0x00041411) volume_small_pane_cp_g3

0x229e,	// (0x00040f85) volume_small_pane_cp_g4

0x2733,	// (0x0004141a) volume_small_pane_cp_g5

0x26a8,	// (0x0004138f) volume_small_pane_cp_g6

0x22b0,	// (0x00040f97) volume_small_pane_cp_g7

0x273c,	// (0x00041423) volume_small_pane_cp_g8

0x2745,	// (0x0004142c) volume_small_pane_cp_g9

0x22c2,	// (0x00040fa9) volume_small_pane_cp_g10

0x4dc6,	// (0x00043aad) midp_ticker_pane_g1_ParamLimits

0x4dd2,	// (0x00043ab9) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0004e43f) midp_ticker_pane_g_ParamLimits

0x4dde,	// (0x00043ac5) midp_ticker_pane_t1_ParamLimits

0xd75b,	// (0x0004c442) aid_fill_nsta_2

0x5979,	// (0x00044660) list_form2_midp_pane

0x6a97,	// (0x0004577e) midp_editing_number_pane_ParamLimits

0x6aa6,	// (0x0004578d) midp_ticker_pane_ParamLimits

0x7693,	// (0x0004637a) form2_midp_field_pane

0x76b7,	// (0x0004639e) scroll_pane_cp51

0x76d7,	// (0x000463be) form2_midp_button_pane_ParamLimits

0x76d7,	// (0x000463be) form2_midp_button_pane

0x76e9,	// (0x000463d0) form2_midp_content_pane_ParamLimits

0x76e9,	// (0x000463d0) form2_midp_content_pane

0x7703,	// (0x000463ea) form2_midp_field_choice_group_pane

0x770b,	// (0x000463f2) form2_midp_field_pane_g1

0x7713,	// (0x000463fa) form2_midp_field_pane_g2

0x771b,	// (0x00046402) form2_midp_field_pane_g3

0x7723,	// (0x0004640a) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0004e7d2) form2_midp_field_pane_g

0x772b,	// (0x00046412) form2_midp_gauge_slider_pane

0x7733,	// (0x0004641a) form2_midp_gauge_wait_pane

0x773b,	// (0x00046422) form2_midp_image_pane_ParamLimits

0x773b,	// (0x00046422) form2_midp_image_pane

0x7756,	// (0x0004643d) form2_midp_label_pane_ParamLimits

0x7756,	// (0x0004643d) form2_midp_label_pane

0xe122,	// (0x0004ce09) form2_midp_label_pane_cp_ParamLimits

0xe122,	// (0x0004ce09) form2_midp_label_pane_cp

0x7790,	// (0x00046477) form2_midp_string_pane_ParamLimits

0x7790,	// (0x00046477) form2_midp_string_pane

0xbc50,	// (0x0004a937) form2_midp_text_pane_ParamLimits

0xbc50,	// (0x0004a937) form2_midp_text_pane

0x77a2,	// (0x00046489) form2_midp_time_pane

0x77b2,	// (0x00046499) input_focus_pane_cp51_ParamLimits

0x77b2,	// (0x00046499) input_focus_pane_cp51

0x77ca,	// (0x000464b1) form2_midp_label_pane_t1_ParamLimits

0x77ca,	// (0x000464b1) form2_midp_label_pane_t1

0xbc69,	// (0x0004a950) form2_mdip_text_pane_t1_ParamLimits

0xbc69,	// (0x0004a950) form2_mdip_text_pane_t1

0x0df1,	// (0x0003fad8) form2_midp_time_pane_t1

0x7812,	// (0x000464f9) form2_midp_gauge_slider_pane_t1

0xe143,	// (0x0004ce2a) form2_midp_gauge_slider_pane_t2

0xe157,	// (0x0004ce3e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0004e7db) form2_midp_gauge_slider_pane_t

0x7848,	// (0x0004652f) form2_midp_slider_pane

0x7854,	// (0x0004653b) form2_midp_gauge_wait_pane_t1

0x7862,	// (0x00046549) form2_midp_wait_pane_ParamLimits

0x7862,	// (0x00046549) form2_midp_wait_pane

0xe16b,	// (0x0004ce52) list_single_2graphic_pane_cp4_ParamLimits

0xe16b,	// (0x0004ce52) list_single_2graphic_pane_cp4

0xdb79,	// (0x0004c860) list_single_midp_graphic_pane_cp_ParamLimits

0xdb79,	// (0x0004c860) list_single_midp_graphic_pane_cp

0x373f,	// (0x00042426) list_highlight_pane_cp20

0x78bc,	// (0x000465a3) list_single_2graphic_pane_g1_cp4

0x6eba,	// (0x00045ba1) list_single_2graphic_pane_g2_cp4

0x78c4,	// (0x000465ab) list_single_2graphic_pane_t1_cp4

0x381f,	// (0x00042506) list_highlight_pane_cp21

0x78d3,	// (0x000465ba) list_single_midp_graphic_pane_g4_cp

0x78e2,	// (0x000465c9) list_single_midp_graphic_pane_t1_cp

0xe181,	// (0x0004ce68) form2_mdip_string_pane_t1_ParamLimits

0xe181,	// (0x0004ce68) form2_mdip_string_pane_t1

0x373f,	// (0x00042426) bg_wml_button_pane_cp2

0x3735,	// (0x0004241c) form2_midp_image_pane_g1

0x157d,	// (0x00040264) list_double_large_graphic_pane_g5_ParamLimits

0x157d,	// (0x00040264) list_double_large_graphic_pane_g5

0x502b,	// (0x00043d12) midp_form_pane_ParamLimits

0x381f,	// (0x00042506) main_apps_wheel_pane_ParamLimits

0xc52a,	// (0x0004b211) popup_preview_window_ParamLimits

0xc52a,	// (0x0004b211) popup_preview_window

0x210b,	// (0x00040df2) popup_touch_info_window_ParamLimits

0x210b,	// (0x00040df2) popup_touch_info_window

0x2129,	// (0x00040e10) popup_touch_menu_window_ParamLimits

0x2129,	// (0x00040e10) popup_touch_menu_window

0x372b,	// (0x00042412) bg_popup_sub_pane_cp6

0x7a1a,	// (0x00046701) list_touch_menu_pane

0x7a22,	// (0x00046709) list_single_touch_menu_pane_ParamLimits

0x7a22,	// (0x00046709) list_single_touch_menu_pane

0x7a36,	// (0x0004671d) list_single_touch_menu_pane_t1

0x381f,	// (0x00042506) bg_popup_sub_pane_cp7_ParamLimits

0x381f,	// (0x00042506) bg_popup_sub_pane_cp7

0x7a44,	// (0x0004672b) heading_sub_pane

0x7a4c,	// (0x00046733) list_touch_info_pane_ParamLimits

0x7a4c,	// (0x00046733) list_touch_info_pane

0x7a5b,	// (0x00046742) list_single_touch_info_pane_ParamLimits

0x7a5b,	// (0x00046742) list_single_touch_info_pane

0x7a6d,	// (0x00046754) list_single_touch_info_pane_t1

0x7a7b,	// (0x00046762) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0004e7e9) list_single_touch_info_pane_t

0x4cf1,	// (0x000439d8) bg_popup_heading_pane_cp

0x7a89,	// (0x00046770) heading_sub_pane_t1

0x55a9,	// (0x00044290) bg_popup_preview_window_pane_cp_ParamLimits

0x55a9,	// (0x00044290) bg_popup_preview_window_pane_cp

0x7a44,	// (0x0004672b) heading_preview_pane

0x7a4c,	// (0x00046733) list_preview_pane_ParamLimits

0x7a4c,	// (0x00046733) list_preview_pane

0x7a97,	// (0x0004677e) popup_preview_window_g1

0x7a5b,	// (0x00046742) list_single_preview_pane_ParamLimits

0x7a5b,	// (0x00046742) list_single_preview_pane

0x7a9f,	// (0x00046786) list_single_preview_pane_g1

0x7aa7,	// (0x0004678e) list_single_preview_pane_t1

0x7a6d,	// (0x00046754) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0004e7ee) list_single_preview_pane_t

0x7ab5,	// (0x0004679c) bg_popup_heading_pane_cp2_ParamLimits

0x7ab5,	// (0x0004679c) bg_popup_heading_pane_cp2

0x7acb,	// (0x000467b2) heading_preview_pane_g1

0x7ad3,	// (0x000467ba) heading_preview_pane_t1_ParamLimits

0x7ad3,	// (0x000467ba) heading_preview_pane_t1

0x390b,	// (0x000425f2) soft_indicator_pane_t1_ParamLimits

0x4004,	// (0x00042ceb) scroll_pane_ParamLimits

0x4518,	// (0x000431ff) scroll_sc2_left_pane

0x4521,	// (0x00043208) scroll_sc2_right_pane

0x4540,	// (0x00043227) scroll_bg_pane_g1_ParamLimits

0x4555,	// (0x0004323c) scroll_bg_pane_g2_ParamLimits

0x456d,	// (0x00043254) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0004e3ca) scroll_bg_pane_g_ParamLimits

0x4540,	// (0x00043227) scroll_handle_pane_g1_ParamLimits

0x458f,	// (0x00043276) scroll_handle_pane_g2_ParamLimits

0x456d,	// (0x00043254) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0004e3d1) scroll_handle_pane_g_ParamLimits

0x1bdb,	// (0x000408c2) popup_choice_list_window_ParamLimits

0x1bdb,	// (0x000408c2) popup_choice_list_window

0x547f,	// (0x00044166) choice_list_pane

0x5501,	// (0x000441e8) cell_toolbar_pane_t1

0x5529,	// (0x00044210) toolbar_button_pane_ParamLimits

0x6605,	// (0x000452ec) ai_gene_pane_1_t2_ParamLimits

0x6605,	// (0x000452ec) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0004e5f4) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0004e5f4) ai_gene_pane_1_t

0x7af0,	// (0x000467d7) scroll_sc2_left_pane_g1

0x7af0,	// (0x000467d7) scroll_sc2_right_pane_g1

0x502b,	// (0x00043d12) bg_popup_sub_pane_cp10

0x7afa,	// (0x000467e1) list_choice_list_pane

0x7b13,	// (0x000467fa) list_single_choice_list_pane_ParamLimits

0x7b13,	// (0x000467fa) list_single_choice_list_pane

0x7b26,	// (0x0004680d) list_single_choice_list_pane_g1

0x4223,	// (0x00042f0a) list_single_choice_list_pane_t1_ParamLimits

0x4223,	// (0x00042f0a) list_single_choice_list_pane_t1

0x7b2e,	// (0x00046815) choice_list_pane_g1

0x7b36,	// (0x0004681d) choice_list_pane_t1

0x372b,	// (0x00042412) input_focus_pane_cp11

0x43f7,	// (0x000430de) title_pane_stacon_g2_ParamLimits

0x43f7,	// (0x000430de) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0004e3b0) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004e3b0) title_pane_stacon_g

0x4cf1,	// (0x000439d8) cursor_press_pane

0xc1e3,	// (0x0004aeca) popup_fep_hwr_window_ParamLimits

0xc1e3,	// (0x0004aeca) popup_fep_hwr_window

0x1cfb,	// (0x000409e2) popup_fep_vkb_window_ParamLimits

0x1cfb,	// (0x000409e2) popup_fep_vkb_window

0x7b44,	// (0x0004682b) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0004e817) fep_vkb_side_pane_g_ParamLimits

0x2787,	// (0x0004146e) fep_hwr_candidate_pane_ParamLimits

0x2787,	// (0x0004146e) fep_hwr_candidate_pane

0x27b1,	// (0x00041498) fep_hwr_side_pane_ParamLimits

0x27b1,	// (0x00041498) fep_hwr_side_pane

0x27d1,	// (0x000414b8) fep_hwr_top_pane_ParamLimits

0x27d1,	// (0x000414b8) fep_hwr_top_pane

0x27e9,	// (0x000414d0) fep_hwr_write_pane_ParamLimits

0x27e9,	// (0x000414d0) fep_hwr_write_pane

0xfb30,	// (0x0004e817) fep_vkb_side_pane_g

0x7b4c,	// (0x00046833) fep_hwr_top_pane_g1

0x7b5e,	// (0x00046845) fep_hwr_top_pane_g2

0x2815,	// (0x000414fc) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0004e7f3) fep_hwr_top_pane_g

0x282a,	// (0x00041511) fep_hwr_top_text_pane

0x46e5,	// (0x000433cc) fep_hwr_top_text_pane_g1

0x7b94,	// (0x0004687b) fep_hwr_top_text_pane_t1

0x2920,	// (0x00041607) fep_hwr_candidate_pane_g1

0x7dd7,	// (0x00046abe) fep_vkb_keypad_pane_g3_ParamLimits

0x7dd7,	// (0x00046abe) fep_vkb_keypad_pane_g3

0x7dff,	// (0x00046ae6) fep_vkb_keypad_pane_g4_ParamLimits

0x7dff,	// (0x00046ae6) fep_vkb_keypad_pane_g4

0x7e6e,	// (0x00046b55) fep_vkb_bottom_pane_g2_ParamLimits

0x7e6e,	// (0x00046b55) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0004e81e) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0004e81e) fep_vkb_bottom_pane_g

0x7af0,	// (0x000467d7) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0004e828) cell_vkb_side_pane_g

0x7ef9,	// (0x00046be0) cell_vkb_side_pane_t1

0x7f07,	// (0x00046bee) cell_vkb_side_pane_t1_copy1

0x7af0,	// (0x000467d7) bg_fep_vkb_candidate_pane_g2

0x8033,	// (0x00046d1a) cell_vkb_candidate_pane_ParamLimits

0x7ba2,	// (0x00046889) aid_size_cell_vkb_ParamLimits

0x7ba2,	// (0x00046889) aid_size_cell_vkb

0x8033,	// (0x00046d1a) cell_vkb_candidate_pane

0x293a,	// (0x00041621) bg_popup_fep_shadow_pane_g1

0xe239,	// (0x0004cf20) fep_vkb_bottom_pane_ParamLimits

0xe239,	// (0x0004cf20) fep_vkb_bottom_pane

0x7c64,	// (0x0004694b) fep_vkb_candidate_pane_ParamLimits

0x7c64,	// (0x0004694b) fep_vkb_candidate_pane

0xe25e,	// (0x0004cf45) fep_vkb_keypad_pane_ParamLimits

0xe25e,	// (0x0004cf45) fep_vkb_keypad_pane

0xe293,	// (0x0004cf7a) fep_vkb_side_pane_ParamLimits

0xe293,	// (0x0004cf7a) fep_vkb_side_pane

0xe2cf,	// (0x0004cfb6) fep_vkb_top_pane_ParamLimits

0xe2cf,	// (0x0004cfb6) fep_vkb_top_pane

0x7d30,	// (0x00046a17) fep_vkb_top_pane_g1_ParamLimits

0x7d30,	// (0x00046a17) fep_vkb_top_pane_g1

0x7d3f,	// (0x00046a26) fep_vkb_top_pane_g2_ParamLimits

0x7d3f,	// (0x00046a26) fep_vkb_top_pane_g2

0x7d4e,	// (0x00046a35) fep_vkb_top_pane_g3_ParamLimits

0x7d4e,	// (0x00046a35) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0004e80e) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0004e80e) fep_vkb_top_pane_g

0x7d6c,	// (0x00046a53) fep_vkb_top_text_pane_ParamLimits

0x7d6c,	// (0x00046a53) fep_vkb_top_text_pane

0xe304,	// (0x0004cfeb) fep_vkb_side_pane_g1_ParamLimits

0xe304,	// (0x0004cfeb) fep_vkb_side_pane_g1

0x7dc6,	// (0x00046aad) grid_vkb_side_pane_ParamLimits

0x7dc6,	// (0x00046aad) grid_vkb_side_pane

0x2942,	// (0x00041629) bg_popup_fep_shadow_pane_g2

0x294b,	// (0x00041632) bg_popup_fep_shadow_pane_g3

0x2953,	// (0x0004163a) bg_popup_fep_shadow_pane_g4

0x295c,	// (0x00041643) bg_popup_fep_shadow_pane_g5

0x2966,	// (0x0004164d) bg_popup_fep_shadow_pane_g6

0x296e,	// (0x00041655) bg_popup_fep_shadow_pane_g7

0x410c,	// (0x00042df3) bg_popup_fep_shadow_pane_g8

0x7e1d,	// (0x00046b04) grid_vkb_keypad_number_pane_ParamLimits

0x7e1d,	// (0x00046b04) grid_vkb_keypad_number_pane

0x7e2d,	// (0x00046b14) grid_vkb_keypad_pane_ParamLimits

0x7e2d,	// (0x00046b14) grid_vkb_keypad_pane

0x7e53,	// (0x00046b3a) fep_vkb_bottom_pane_g1_ParamLimits

0x7e53,	// (0x00046b3a) fep_vkb_bottom_pane_g1

0x7e7c,	// (0x00046b63) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7e7c,	// (0x00046b63) grid_vkb_keypad_bottom_left_pane

0x7e91,	// (0x00046b78) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7e91,	// (0x00046b78) grid_vkb_keypad_bottom_right_pane

0x7ea6,	// (0x00046b8d) fep_vkb_top_text_pane_g1

0xe34b,	// (0x0004d032) fep_vkb_top_text_pane_t1

0xe35d,	// (0x0004d044) cell_vkb_side_pane_ParamLimits

0xe35d,	// (0x0004d044) cell_vkb_side_pane

0x7af0,	// (0x000467d7) cell_vkb_side_pane_g1

0x7f15,	// (0x00046bfc) cell_vkb_keypad_pane_ParamLimits

0x7f15,	// (0x00046bfc) cell_vkb_keypad_pane

0x7f8a,	// (0x00046c71) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0004e83b) bg_popup_fep_shadow_pane_g

0x7af0,	// (0x000467d7) cell_hwr_side_pane_g1

0x7af0,	// (0x000467d7) cell_hwr_side_pane_g2

0x7f94,	// (0x00046c7b) cell_vkb_keypad_pane_t1

0xe373,	// (0x0004d05a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe373,	// (0x0004d05a) cell_vkb_keypad_bottom_left_pane

0xe388,	// (0x0004d06f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe388,	// (0x0004d06f) cell_vkb_keypad_bottom_right_pane

0x7af0,	// (0x000467d7) cell_vkb_keypad_bottom_left_pane_g1

0x7af0,	// (0x000467d7) cell_vkb_keypad_bottom_right_pane_g1

0x7ff8,	// (0x00046cdf) cell_vkb_keypad_number_pane_ParamLimits

0x7ff8,	// (0x00046cdf) cell_vkb_keypad_number_pane

0x8017,	// (0x00046cfe) cell_vkb_keypad_number_pane_g1

0x8021,	// (0x00046d08) cell_vkb_keypad_number_pane_g2

0x802a,	// (0x00046d11) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0004e82d) cell_vkb_keypad_number_pane_g

0x7f94,	// (0x00046c7b) cell_vkb_keypad_number_pane_t1

0x804e,	// (0x00046d35) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x0004e828) cell_hwr_side_pane_g

0x8067,	// (0x00046d4e) cell_hwr_side_pane_t1

0x2980,	// (0x00041667) cell_hwr_side_pane_t1_copy1

0x7d5e,	// (0x00046a45) cell_hwr_candidate_pane_g1

0x298e,	// (0x00041675) cell_hwr_candidate_pane_t1

0x7af0,	// (0x000467d7) cell_vkb_candidate_pane_g2

0x80ed,	// (0x00046dd4) cell_vkb_candidate_pane_t1

0x274e,	// (0x00041435) bg_popup_fep_shadow_pane_ParamLimits

0x274e,	// (0x00041435) bg_popup_fep_shadow_pane

0xe1ff,	// (0x0004cee6) bg_fep_hwr_top_pane_g4

0x7b70,	// (0x00046857) bg_hwr_side_pane_g1_ParamLimits

0x7b70,	// (0x00046857) bg_hwr_side_pane_g1

0xc985,	// (0x0004b66c) cell_hwr_side_pane_ParamLimits

0xc985,	// (0x0004b66c) cell_hwr_side_pane

0x28a1,	// (0x00041588) fep_hwr_write_pane_g1_ParamLimits

0x28a1,	// (0x00041588) fep_hwr_write_pane_g1

0x28ae,	// (0x00041595) fep_hwr_write_pane_g2_ParamLimits

0x28ae,	// (0x00041595) fep_hwr_write_pane_g2

0x28bb,	// (0x000415a2) fep_hwr_write_pane_g3_ParamLimits

0x28bb,	// (0x000415a2) fep_hwr_write_pane_g3

0xc9a5,	// (0x0004b68c) fep_hwr_write_pane_g4_ParamLimits

0xc9a5,	// (0x0004b68c) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0004e7fa) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0004e7fa) fep_hwr_write_pane_g

0xe1ff,	// (0x0004cee6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe1ff,	// (0x0004cee6) bg_fep_hwr_candidate_pane_g2

0x28de,	// (0x000415c5) cell_hwr_candidate_pane_ParamLimits

0x28de,	// (0x000415c5) cell_hwr_candidate_pane

0x2920,	// (0x00041607) fep_hwr_candidate_pane_g1_ParamLimits

0x7bd0,	// (0x000468b7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7bd0,	// (0x000468b7) bg_popup_fep_shadow_pane_cp2

0x7d5e,	// (0x00046a45) fep_vkb_top_pane_g4_ParamLimits

0x7d5e,	// (0x00046a45) fep_vkb_top_pane_g4

0x7da4,	// (0x00046a8b) fep_vkb_side_pane_g2_ParamLimits

0x7da4,	// (0x00046a8b) fep_vkb_side_pane_g2

0xb9c1,	// (0x0004a6a8) list_setting_pane_t4_ParamLimits

0xb9c1,	// (0x0004a6a8) list_setting_pane_t4

0xba5b,	// (0x0004a742) list_setting_number_pane_t5_ParamLimits

0xba5b,	// (0x0004a742) list_setting_number_pane_t5

0xd4a9,	// (0x0004c190) list_double_heading_pane_cp2_ParamLimits

0xd4a9,	// (0x0004c190) list_double_heading_pane_cp2

0x4038,	// (0x00042d1f) list_double_heading_pane_g1_cp2_ParamLimits

0x4038,	// (0x00042d1f) list_double_heading_pane_g1_cp2

0x40ab,	// (0x00042d92) list_double_heading_pane_g2_cp2_ParamLimits

0x40ab,	// (0x00042d92) list_double_heading_pane_g2_cp2

0x80fb,	// (0x00046de2) list_double_heading_pane_t1_cp2_ParamLimits

0x80fb,	// (0x00046de2) list_double_heading_pane_t1_cp2

0x8111,	// (0x00046df8) list_double_heading_pane_t2_cp2_ParamLimits

0x8111,	// (0x00046df8) list_double_heading_pane_t2_cp2

0x3713,	// (0x000423fa) aid_value_unit2

0x1364,	// (0x0004004b) popup_preview_fixed_window

0x3aa8,	// (0x0004278f) bg_popup_preview_window_pane_cp02

0x8123,	// (0x00046e0a) list_preview_fixed_pane

0x8169,	// (0x00046e50) list_empty_pane_fp_ParamLimits

0x8169,	// (0x00046e50) list_empty_pane_fp

0x8169,	// (0x00046e50) list_single_cale_day_pane_fp_ParamLimits

0x8169,	// (0x00046e50) list_single_cale_day_pane_fp

0x8169,	// (0x00046e50) list_single_graphic_heading_pane_fp_ParamLimits

0x8169,	// (0x00046e50) list_single_graphic_heading_pane_fp

0x8169,	// (0x00046e50) list_single_graphic_pane_fp_ParamLimits

0x8169,	// (0x00046e50) list_single_graphic_pane_fp

0x8169,	// (0x00046e50) list_single_heading_pane_fp_ParamLimits

0x8169,	// (0x00046e50) list_single_heading_pane_fp

0x8169,	// (0x00046e50) list_single_pane_fp_ParamLimits

0x8169,	// (0x00046e50) list_single_pane_fp

0x817f,	// (0x00046e66) list_single_pane_fp_g1_ParamLimits

0x817f,	// (0x00046e66) list_single_pane_fp_g1

0x4038,	// (0x00042d1f) list_single_pane_fp_g2_ParamLimits

0x4038,	// (0x00042d1f) list_single_pane_fp_g2

0x40ab,	// (0x00042d92) list_single_pane_fp_g3_ParamLimits

0x40ab,	// (0x00042d92) list_single_pane_fp_g3

0x818b,	// (0x00046e72) list_single_pane_fp_g4_ParamLimits

0x818b,	// (0x00046e72) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0004e85c) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0004e85c) list_single_pane_fp_g

0x0e04,	// (0x0003faeb) list_single_pane_fp_t1_ParamLimits

0x0e04,	// (0x0003faeb) list_single_pane_fp_t1

0x0e1b,	// (0x0003fb02) list_single_graphic_pane_fp_g1_ParamLimits

0x0e1b,	// (0x0003fb02) list_single_graphic_pane_fp_g1

0x817f,	// (0x00046e66) list_single_graphic_pane_fp_g2_ParamLimits

0x817f,	// (0x00046e66) list_single_graphic_pane_fp_g2

0x4038,	// (0x00042d1f) list_single_graphic_pane_fp_g3_ParamLimits

0x4038,	// (0x00042d1f) list_single_graphic_pane_fp_g3

0x40ab,	// (0x00042d92) list_single_graphic_pane_fp_g4_ParamLimits

0x40ab,	// (0x00042d92) list_single_graphic_pane_fp_g4

0x818b,	// (0x00046e72) list_single_graphic_pane_fp_g5_ParamLimits

0x818b,	// (0x00046e72) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e865) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e865) list_single_graphic_pane_fp_g

0x0e27,	// (0x0003fb0e) list_single_graphic_pane_fp_t1_ParamLimits

0x0e27,	// (0x0003fb0e) list_single_graphic_pane_fp_t1

0x0e1b,	// (0x0003fb02) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0e1b,	// (0x0003fb02) list_single_graphic_heading_pane_fp_g1

0x817f,	// (0x00046e66) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x817f,	// (0x00046e66) list_single_graphic_heading_pane_fp_g2

0x4038,	// (0x00042d1f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4038,	// (0x00042d1f) list_single_graphic_heading_pane_fp_g3

0x40ab,	// (0x00042d92) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x40ab,	// (0x00042d92) list_single_graphic_heading_pane_fp_g4

0x818b,	// (0x00046e72) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x818b,	// (0x00046e72) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e865) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e865) list_single_graphic_heading_pane_fp_g

0x0e3d,	// (0x0003fb24) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0e3d,	// (0x0003fb24) list_single_graphic_heading_pane_fp_t1

0x0e53,	// (0x0003fb3a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0e53,	// (0x0003fb3a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0004e870) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0004e870) list_single_graphic_heading_pane_fp_t

0x0e65,	// (0x0003fb4c) list_single_cale_day_pane_fp_g1_ParamLimits

0x0e65,	// (0x0003fb4c) list_single_cale_day_pane_fp_g1

0x8197,	// (0x00046e7e) list_single_cale_day_pane_fp_g2_ParamLimits

0x8197,	// (0x00046e7e) list_single_cale_day_pane_fp_g2

0x29ac,	// (0x00041693) list_single_cale_day_pane_fp_g3_ParamLimits

0x29ac,	// (0x00041693) list_single_cale_day_pane_fp_g3

0x29d4,	// (0x000416bb) list_single_cale_day_pane_fp_g4_ParamLimits

0x29d4,	// (0x000416bb) list_single_cale_day_pane_fp_g4

0x29f8,	// (0x000416df) list_single_cale_day_pane_fp_g5_ParamLimits

0x29f8,	// (0x000416df) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0004e875) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0004e875) list_single_cale_day_pane_fp_g

0x0e9d,	// (0x0003fb84) list_single_cale_day_pane_fp_t1_ParamLimits

0x0e9d,	// (0x0003fb84) list_single_cale_day_pane_fp_t1

0x0ec3,	// (0x0003fbaa) list_single_cale_day_pane_fp_t2_ParamLimits

0x0ec3,	// (0x0003fbaa) list_single_cale_day_pane_fp_t2

0x0edc,	// (0x0003fbc3) list_single_cale_day_pane_fp_t3_ParamLimits

0x0edc,	// (0x0003fbc3) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0004e880) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0004e880) list_single_cale_day_pane_fp_t

0x817f,	// (0x00046e66) list_empty_pane_fp_g1_ParamLimits

0x817f,	// (0x00046e66) list_empty_pane_fp_g1

0x0ef5,	// (0x0003fbdc) list_empty_pane_fp_t1

0x0f03,	// (0x0003fbea) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0004e887) list_empty_pane_fp_t

0x817f,	// (0x00046e66) list_single_heading_pane_fp_g1_ParamLimits

0x817f,	// (0x00046e66) list_single_heading_pane_fp_g1

0x4038,	// (0x00042d1f) list_single_heading_pane_fp_g2_ParamLimits

0x4038,	// (0x00042d1f) list_single_heading_pane_fp_g2

0x40ab,	// (0x00042d92) list_single_heading_pane_fp_g3_ParamLimits

0x40ab,	// (0x00042d92) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0004e88c) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0004e88c) list_single_heading_pane_fp_g

0x0f11,	// (0x0003fbf8) list_single_heading_pane_fp_t1_ParamLimits

0x0f11,	// (0x0003fbf8) list_single_heading_pane_fp_t1

0x0f23,	// (0x0003fc0a) list_single_heading_pane_fp_t2_ParamLimits

0x0f23,	// (0x0003fc0a) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0004e893) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0004e893) list_single_heading_pane_fp_t

0x4291,	// (0x00042f78) aid_size_cell_fast

0x3a18,	// (0x000426ff) soft_indicator_pane_cp1_t1

0x42cb,	// (0x00042fb2) cell_app_pane_cp2_ParamLimits

0x42cb,	// (0x00042fb2) cell_app_pane_cp2

0x2770,	// (0x00041457) fep_hwr_candidate_drop_down_list_pane

0xe20d,	// (0x0004cef4) fep_hwr_candidate_pane_g3_ParamLimits

0xe20d,	// (0x0004cef4) fep_hwr_candidate_pane_g3

0xe21a,	// (0x0004cf01) fep_hwr_candidate_pane_g4_ParamLimits

0xe21a,	// (0x0004cf01) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0004e807) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0004e807) fep_hwr_candidate_pane_g

0x7c53,	// (0x0004693a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7c53,	// (0x0004693a) fep_vkb_candidate_drop_down_list_pane

0x8056,	// (0x00046d3d) fep_vkb_candidate_pane_g3

0x805e,	// (0x00046d45) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0004e834) fep_vkb_candidate_pane_g

0x7d5e,	// (0x00046a45) cell_hwr_candidate_pane_g1_ParamLimits

0x8075,	// (0x00046d5c) cell_hwr_candidate_pane_g3_ParamLimits

0x8075,	// (0x00046d5c) cell_hwr_candidate_pane_g3

0x8096,	// (0x00046d7d) cell_hwr_candidate_pane_g4_ParamLimits

0x8096,	// (0x00046d7d) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0004e84e) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0004e84e) cell_hwr_candidate_pane_g

0x80b7,	// (0x00046d9e) cell_vkb_candidate_pane_g3_ParamLimits

0x80b7,	// (0x00046d9e) cell_vkb_candidate_pane_g3

0x80d2,	// (0x00046db9) cell_vkb_candidate_pane_g4_ParamLimits

0x80d2,	// (0x00046db9) cell_vkb_candidate_pane_g4

0x81a3,	// (0x00046e8a) cell_app_pane_cp2_g1_ParamLimits

0x81a3,	// (0x00046e8a) cell_app_pane_cp2_g1

0x81c1,	// (0x00046ea8) cell_app_pane_cp2_g2_ParamLimits

0x81c1,	// (0x00046ea8) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0004e898) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0004e898) cell_app_pane_cp2_g

0x81cd,	// (0x00046eb4) cell_app_pane_cp2_t1_ParamLimits

0x81cd,	// (0x00046eb4) cell_app_pane_cp2_t1

0x409d,	// (0x00042d84) grid_highlight_pane_cp1_ParamLimits

0x409d,	// (0x00042d84) grid_highlight_pane_cp1

0x2a1c,	// (0x00041703) cell_hwr_candidate_pane_cp1_ParamLimits

0x2a1c,	// (0x00041703) cell_hwr_candidate_pane_cp1

0x7d5e,	// (0x00046a45) fep_hwr_candidate_drop_down_list_pane_g1

0x81df,	// (0x00046ec6) fep_hwr_candidate_drop_down_list_pane_g2

0x81ec,	// (0x00046ed3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0004e89d) fep_hwr_candidate_drop_down_list_pane_g

0x2a3b,	// (0x00041722) fep_hwr_candidate_drop_down_list_scroll_pane

0x2a44,	// (0x0004172b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2a44,	// (0x0004172b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2a51,	// (0x00041738) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2a51,	// (0x00041738) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2a5e,	// (0x00041745) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2a5e,	// (0x00041745) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x80b7,	// (0x00046d9e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x80b7,	// (0x00046d9e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x80d2,	// (0x00046db9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x80d2,	// (0x00046db9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2a6b,	// (0x00041752) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2a6b,	// (0x00041752) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2a86,	// (0x0004176d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2a86,	// (0x0004176d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2aa1,	// (0x00041788) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2aa1,	// (0x00041788) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0004e8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0004e8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x81f9,	// (0x00046ee0) cell_vkb_candidate_pane_cp1_ParamLimits

0x81f9,	// (0x00046ee0) cell_vkb_candidate_pane_cp1

0x7d5e,	// (0x00046a45) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7d5e,	// (0x00046a45) fep_vkb_candidate_drop_down_list_pane_g1

0x81df,	// (0x00046ec6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x81df,	// (0x00046ec6) fep_vkb_candidate_drop_down_list_pane_g2

0x81ec,	// (0x00046ed3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x81ec,	// (0x00046ed3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0004e89d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x0004e89d) fep_vkb_candidate_drop_down_list_pane_g

0x8219,	// (0x00046f00) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8219,	// (0x00046f00) fep_vkb_candidate_drop_down_list_scroll_pane

0x8226,	// (0x00046f0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8226,	// (0x00046f0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8233,	// (0x00046f1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8233,	// (0x00046f1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x823f,	// (0x00046f26) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x823f,	// (0x00046f26) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8075,	// (0x00046d5c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8075,	// (0x00046d5c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8096,	// (0x00046d7d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8096,	// (0x00046d7d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x824b,	// (0x00046f32) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x824b,	// (0x00046f32) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x826c,	// (0x00046f53) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x826c,	// (0x00046f53) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x828d,	// (0x00046f74) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x828d,	// (0x00046f74) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0004e8b5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0004e8b5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd01c,	// (0x0004bd03) title_pane_g1_ParamLimits

0xd02f,	// (0x0004bd16) title_pane_g2_ParamLimits

0xf54e,	// (0x0004e235) title_pane_g_ParamLimits

0x46d5,	// (0x000433bc) aid_call2_pane

0x46dd,	// (0x000433c4) aid_call_pane

0x46e5,	// (0x000433cc) popup_clock_analogue_window_g1

0x46e5,	// (0x000433cc) popup_clock_analogue_window_g2

0x1783,	// (0x0004046a) popup_clock_analogue_window_g3

0x178c,	// (0x00040473) popup_clock_analogue_window_g4

0x3735,	// (0x0004241c) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0004e3df) popup_clock_analogue_window_g

0x1794,	// (0x0004047b) popup_clock_analogue_window_t1

0x17a2,	// (0x00040489) clock_digital_number_pane_ParamLimits

0x17a2,	// (0x00040489) clock_digital_number_pane

0x17ae,	// (0x00040495) clock_digital_number_pane_cp02_ParamLimits

0x17ae,	// (0x00040495) clock_digital_number_pane_cp02

0x17ba,	// (0x000404a1) clock_digital_number_pane_cp03_ParamLimits

0x17ba,	// (0x000404a1) clock_digital_number_pane_cp03

0x17c6,	// (0x000404ad) clock_digital_number_pane_cp04_ParamLimits

0x17c6,	// (0x000404ad) clock_digital_number_pane_cp04

0x17d2,	// (0x000404b9) clock_digital_separator_pane_ParamLimits

0x17d2,	// (0x000404b9) clock_digital_separator_pane

0x17de,	// (0x000404c5) popup_clock_digital_window_t1_ParamLimits

0x17de,	// (0x000404c5) popup_clock_digital_window_t1

0x3735,	// (0x0004241c) clock_digital_number_pane_g1

0x3735,	// (0x0004241c) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0004e3ea) clock_digital_number_pane_g

0x3735,	// (0x0004241c) clock_digital_separator_pane_g1

0x3735,	// (0x0004241c) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0004e3ea) clock_digital_separator_pane_g

0xd737,	// (0x0004c41e) aid_fill_nsta_ParamLimits

0xd86d,	// (0x0004c554) indicator_nsta_pane_ParamLimits

0x5314,	// (0x00043ffb) popup_clock_analogue_window

0x5314,	// (0x00043ffb) popup_clock_digital_window

0x4252,	// (0x00042f39) grid_indicator_nsta_pane_ParamLimits

0x74c8,	// (0x000461af) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0004e787) clock_nsta_pane_t

0x1747,	// (0x0004042e) aid_size_max_handle

0x1751,	// (0x00040438) aid_size_min_handle

0x4cf1,	// (0x000439d8) editor_scroll_pane

0x82a8,	// (0x00046f8f) ex_editor_pane

0x41ff,	// (0x00042ee6) scroll_pane_cp13

0x4030,	// (0x00042d17) scroll_pane_cp14

0x4714,	// (0x000433fb) scroll_pane_cp36

0xd4ba,	// (0x0004c1a1) list_single_graphic_hl_pane_cp2_ParamLimits

0xd4ba,	// (0x0004c1a1) list_single_graphic_hl_pane_cp2

0xc949,	// (0x0004b630) list_single_graphic_hl_pane_ParamLimits

0xc949,	// (0x0004b630) list_single_graphic_hl_pane

0x0f39,	// (0x0003fc20) aid_size_min_hl_cp1

0x82b0,	// (0x00046f97) list_highlight_pane_cp34_ParamLimits

0x82b0,	// (0x00046f97) list_highlight_pane_cp34

0x82c1,	// (0x00046fa8) list_single_graphic_hl_pane_g1_ParamLimits

0x82c1,	// (0x00046fa8) list_single_graphic_hl_pane_g1

0xbc84,	// (0x0004a96b) list_single_graphic_hl_pane_g2_ParamLimits

0xbc84,	// (0x0004a96b) list_single_graphic_hl_pane_g2

0xbc84,	// (0x0004a96b) list_single_graphic_hl_pane_g3_ParamLimits

0xbc84,	// (0x0004a96b) list_single_graphic_hl_pane_g3

0x4c62,	// (0x00043949) list_single_graphic_hl_pane_g4_ParamLimits

0x4c62,	// (0x00043949) list_single_graphic_hl_pane_g4

0xc9ba,	// (0x0004b6a1) list_single_graphic_hl_pane_g5_ParamLimits

0xc9ba,	// (0x0004b6a1) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0004e8c6) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0004e8c6) list_single_graphic_hl_pane_g

0xbc90,	// (0x0004a977) list_single_graphic_hl_pane_t1_ParamLimits

0xbc90,	// (0x0004a977) list_single_graphic_hl_pane_t1

0x82ce,	// (0x00046fb5) aid_size_min_hl_cp2

0x82d7,	// (0x00046fbe) list_highlight_pane_cp34_cp2_ParamLimits

0x82d7,	// (0x00046fbe) list_highlight_pane_cp34_cp2

0x82c1,	// (0x00046fa8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x82c1,	// (0x00046fa8) list_single_graphic_hl_pane_g1_cp2

0x82e4,	// (0x00046fcb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x82e4,	// (0x00046fcb) list_single_graphic_hl_pane_g2_cp2

0x82f0,	// (0x00046fd7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x82f0,	// (0x00046fd7) list_single_graphic_hl_pane_g3_cp2

0x4c2a,	// (0x00043911) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4c2a,	// (0x00043911) list_single_graphic_hl_pane_g4_cp2

0x82fe,	// (0x00046fe5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x82fe,	// (0x00046fe5) list_single_graphic_hl_pane_g5_cp2

0xc011,	// (0x0004acf8) control_pane_g4_ParamLimits

0xc011,	// (0x0004acf8) control_pane_g4

0x502b,	// (0x00043d12) bg_popup_sub_pane_cp10_ParamLimits

0x7afa,	// (0x000467e1) list_choice_list_pane_ParamLimits

0x7b09,	// (0x000467f0) scroll_pane_cp23

0x3aa8,	// (0x0004278f) bg_popup_preview_window_pane_cp02_ParamLimits

0x8123,	// (0x00046e0a) list_preview_fixed_pane_ParamLimits

0x8139,	// (0x00046e20) list_preview_fixed_pane_cp_ParamLimits

0x8139,	// (0x00046e20) list_preview_fixed_pane_cp

0x8145,	// (0x00046e2c) popup_preview_fixed_window_g1_ParamLimits

0x8145,	// (0x00046e2c) popup_preview_fixed_window_g1

0x8151,	// (0x00046e38) popup_preview_fixed_window_g2_ParamLimits

0x8151,	// (0x00046e38) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0004e855) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0004e855) popup_preview_fixed_window_g

0x16bb,	// (0x000403a2) aid_navi_side_left_pane_ParamLimits

0x16d0,	// (0x000403b7) aid_navi_side_right_pane_ParamLimits

0x16e8,	// (0x000403cf) navi_icon_pane_stacon_ParamLimits

0x16fc,	// (0x000403e3) navi_navi_pane_stacon_ParamLimits

0x16e8,	// (0x000403cf) navi_text_pane_stacon_ParamLimits

0x372b,	// (0x00042412) main_text_info_pane

0x8328,	// (0x0004700f) listscroll_text_info_pane

0x8330,	// (0x00047017) list_text_info_pane_ParamLimits

0x8330,	// (0x00047017) list_text_info_pane

0x833f,	// (0x00047026) scroll_pane_cp24_ParamLimits

0x833f,	// (0x00047026) scroll_pane_cp24

0xe3a3,	// (0x0004d08a) list_text_info_pane_t1_ParamLimits

0xe3a3,	// (0x0004d08a) list_text_info_pane_t1

0xc158,	// (0x0004ae3f) popup_fast_swap2_window_ParamLimits

0xc158,	// (0x0004ae3f) popup_fast_swap2_window

0x8392,	// (0x00047079) aid_size_cell_fast2

0x372b,	// (0x00042412) bg_popup_window_pane_cp17

0x59a5,	// (0x0004468c) heading_pane_cp2

0x3ceb,	// (0x000429d2) listscroll_fast2_pane

0x839c,	// (0x00047083) grid_fast2_pane

0x83a6,	// (0x0004708d) listscroll_fast2_pane_g1

0x83ae,	// (0x00047095) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0004e8d1) listscroll_fast2_pane_g

0x41ff,	// (0x00042ee6) scroll_pane_cp26

0x83b8,	// (0x0004709f) cell_fast2_pane_ParamLimits

0x83b8,	// (0x0004709f) cell_fast2_pane

0x83cd,	// (0x000470b4) cell_fast2_pane_g1

0x83d6,	// (0x000470bd) cell_fast2_pane_g2

0x83df,	// (0x000470c6) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0004e8d6) cell_fast2_pane_g

0x3dd5,	// (0x00042abc) grid_highlight_pane_cp9

0x3dea,	// (0x00042ad1) main_eswt_pane_ParamLimits

0x3dea,	// (0x00042ad1) main_eswt_pane

0x8354,	// (0x0004703b) list_single_text_info_pane

0x83e7,	// (0x000470ce) eswt_ctrl_button_pane

0x83e7,	// (0x000470ce) eswt_ctrl_canvas_pane

0x83ef,	// (0x000470d6) eswt_ctrl_combo_pane

0x83e7,	// (0x000470ce) eswt_ctrl_default_pane

0x83e7,	// (0x000470ce) eswt_ctrl_label_pane

0x83f7,	// (0x000470de) eswt_ctrl_wait_pane

0x83ff,	// (0x000470e6) eswt_shell_pane

0x372b,	// (0x00042412) listscroll_eswt_app_pane

0x841f,	// (0x00047106) popup_eswt_tasktip_window_ParamLimits

0x841f,	// (0x00047106) popup_eswt_tasktip_window

0x55a9,	// (0x00044290) bg_popup_window_pane_cp18

0x8430,	// (0x00047117) eswt_control_pane_g1_ParamLimits

0x8430,	// (0x00047117) eswt_control_pane_g1

0x843d,	// (0x00047124) eswt_control_pane_g2_ParamLimits

0x843d,	// (0x00047124) eswt_control_pane_g2

0x844a,	// (0x00047131) eswt_control_pane_g3_ParamLimits

0x844a,	// (0x00047131) eswt_control_pane_g3

0x8457,	// (0x0004713e) eswt_control_pane_g4_ParamLimits

0x8457,	// (0x0004713e) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0004e8dd) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0004e8dd) eswt_control_pane_g

0x409d,	// (0x00042d84) bg_button_pane_ParamLimits

0x409d,	// (0x00042d84) bg_button_pane

0x3dea,	// (0x00042ad1) common_borders_pane_copy2_ParamLimits

0x3dea,	// (0x00042ad1) common_borders_pane_copy2

0x8464,	// (0x0004714b) control_button_pane_g1_ParamLimits

0x8464,	// (0x0004714b) control_button_pane_g1

0x8470,	// (0x00047157) control_button_pane_g2_ParamLimits

0x8470,	// (0x00047157) control_button_pane_g2

0x847c,	// (0x00047163) control_button_pane_g3_ParamLimits

0x847c,	// (0x00047163) control_button_pane_g3

0x0002,

0xfbff,	// (0x0004e8e6) control_button_pane_g_ParamLimits

0xfbff,	// (0x0004e8e6) control_button_pane_g

0x8490,	// (0x00047177) control_button_pane_t1

0x849e,	// (0x00047185) control_button_pane_t2

0x0001,

0xfc06,	// (0x0004e8ed) control_button_pane_t

0x5535,	// (0x0004421c) bg_button_pane_g1

0x553d,	// (0x00044224) bg_button_pane_g2

0x5545,	// (0x0004422c) bg_button_pane_g3

0x554d,	// (0x00044234) bg_button_pane_g4

0x5555,	// (0x0004423c) bg_button_pane_g5

0x555d,	// (0x00044244) bg_button_pane_g6

0x5565,	// (0x0004424c) bg_button_pane_g7

0x556d,	// (0x00044254) bg_button_pane_g8

0x5575,	// (0x0004425c) bg_button_pane_g9

0x0008,

0xf861,	// (0x0004e548) bg_button_pane_g

0x7ab5,	// (0x0004679c) common_borders_pane_ParamLimits

0x7ab5,	// (0x0004679c) common_borders_pane

0x8430,	// (0x00047117) eswt_control_pane_g1_copy1_ParamLimits

0x8430,	// (0x00047117) eswt_control_pane_g1_copy1

0x843d,	// (0x00047124) eswt_control_pane_g2_copy1_ParamLimits

0x843d,	// (0x00047124) eswt_control_pane_g2_copy1

0x844a,	// (0x00047131) eswt_control_pane_g3_copy1_ParamLimits

0x844a,	// (0x00047131) eswt_control_pane_g3_copy1

0x8457,	// (0x0004713e) eswt_control_pane_g4_copy1_ParamLimits

0x8457,	// (0x0004713e) eswt_control_pane_g4_copy1

0x7af0,	// (0x000467d7) bg_eswt_ctrl_canvas_pane_g1

0x7ab5,	// (0x0004679c) common_borders_pane_cp2_ParamLimits

0x7ab5,	// (0x0004679c) common_borders_pane_cp2

0x7ab5,	// (0x0004679c) common_borders_pane_cp3_ParamLimits

0x7ab5,	// (0x0004679c) common_borders_pane_cp3

0x84ac,	// (0x00047193) separator_horizontal_pane

0x84b4,	// (0x0004719b) separator_vertical_pane

0x8430,	// (0x00047117) eswt_control_pane_g1_copy2_ParamLimits

0x8430,	// (0x00047117) eswt_control_pane_g1_copy2

0x843d,	// (0x00047124) eswt_control_pane_g2_copy2_ParamLimits

0x843d,	// (0x00047124) eswt_control_pane_g2_copy2

0x844a,	// (0x00047131) eswt_control_pane_g3_copy2_ParamLimits

0x844a,	// (0x00047131) eswt_control_pane_g3_copy2

0x8457,	// (0x0004713e) eswt_control_pane_g4_copy2_ParamLimits

0x8457,	// (0x0004713e) eswt_control_pane_g4_copy2

0x372b,	// (0x00042412) common_borders_pane_cp4

0x84bd,	// (0x000471a4) separator_horizontal_pane_g1

0x84c6,	// (0x000471ad) separator_horizontal_pane_g2

0x84cf,	// (0x000471b6) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0004e8f2) separator_horizontal_pane_g

0x8430,	// (0x00047117) eswt_control_pane_g1_copy3_ParamLimits

0x8430,	// (0x00047117) eswt_control_pane_g1_copy3

0x843d,	// (0x00047124) eswt_control_pane_g2_copy3_ParamLimits

0x843d,	// (0x00047124) eswt_control_pane_g2_copy3

0x844a,	// (0x00047131) eswt_control_pane_g3_copy3_ParamLimits

0x844a,	// (0x00047131) eswt_control_pane_g3_copy3

0x8457,	// (0x0004713e) eswt_control_pane_g4_copy3_ParamLimits

0x8457,	// (0x0004713e) eswt_control_pane_g4_copy3

0x372b,	// (0x00042412) common_borders_pane_cp5

0x84d8,	// (0x000471bf) separator_vertical_pane_g1

0x84e1,	// (0x000471c8) separator_vertical_pane_g2

0x84ea,	// (0x000471d1) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0004e8f9) separator_vertical_pane_g

0x8430,	// (0x00047117) eswt_control_pane_g1_copy4_ParamLimits

0x8430,	// (0x00047117) eswt_control_pane_g1_copy4

0x843d,	// (0x00047124) eswt_control_pane_g2_copy4_ParamLimits

0x843d,	// (0x00047124) eswt_control_pane_g2_copy4

0x844a,	// (0x00047131) eswt_control_pane_g3_copy4_ParamLimits

0x844a,	// (0x00047131) eswt_control_pane_g3_copy4

0x8457,	// (0x0004713e) eswt_control_pane_g4_copy4_ParamLimits

0x8457,	// (0x0004713e) eswt_control_pane_g4_copy4

0x84f3,	// (0x000471da) eswt_ctrl_combo_button_pane

0x84fb,	// (0x000471e2) eswt_ctrl_input_pane

0x8503,	// (0x000471ea) popup_choice_list_window_cp70

0x850b,	// (0x000471f2) eswt_ctrl_input_pane_t1

0x372b,	// (0x00042412) input_focus_pane_cp70

0x7ab5,	// (0x0004679c) bg_button_pane_cp70_ParamLimits

0x7ab5,	// (0x0004679c) bg_button_pane_cp70

0x8519,	// (0x00047200) eswt_ctrl_combo_button_pane_g1

0x8521,	// (0x00047208) wait_bar_pane_cp70

0x55a9,	// (0x00044290) bg_popup_window_pane_cp70_ParamLimits

0x55a9,	// (0x00044290) bg_popup_window_pane_cp70

0x8529,	// (0x00047210) popup_eswt_tasktip_window_t1

0x853f,	// (0x00047226) wait_bar_pane_cp71_ParamLimits

0x853f,	// (0x00047226) wait_bar_pane_cp71

0x854b,	// (0x00047232) grid_eswt_app_pane

0x4521,	// (0x00043208) scroll_pane_cp70

0xe3c0,	// (0x0004d0a7) cell_eswt_app_pane_ParamLimits

0xe3c0,	// (0x0004d0a7) cell_eswt_app_pane

0xe3ea,	// (0x0004d0d1) cell_eswt_app_pane_g1_ParamLimits

0xe3ea,	// (0x0004d0d1) cell_eswt_app_pane_g1

0xe419,	// (0x0004d100) cell_eswt_app_pane_g2_ParamLimits

0xe419,	// (0x0004d100) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0004e900) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0004e900) cell_eswt_app_pane_g

0xe43d,	// (0x0004d124) cell_eswt_app_pane_t1_ParamLimits

0xe43d,	// (0x0004d124) cell_eswt_app_pane_t1

0x860d,	// (0x000472f4) grid_highlight_pane_cp70_ParamLimits

0x860d,	// (0x000472f4) grid_highlight_pane_cp70

0x4bc6,	// (0x000438ad) set_content_pane_g1

0xd6ec,	// (0x0004c3d3) status_small_volume_pane

0x2ad0,	// (0x000417b7) status_small_volume_pane_g1

0x2ad8,	// (0x000417bf) volume_small2_pane

0x2ae1,	// (0x000417c8) volume_small2_pane_g1

0x2aea,	// (0x000417d1) volume_small2_pane_g2

0x2af3,	// (0x000417da) volume_small2_pane_g3

0x2afc,	// (0x000417e3) volume_small2_pane_g4

0x2b05,	// (0x000417ec) volume_small2_pane_g5

0x2b0e,	// (0x000417f5) volume_small2_pane_g6

0x2b17,	// (0x000417fe) volume_small2_pane_g7

0x2b20,	// (0x00041807) volume_small2_pane_g8

0x2b29,	// (0x00041810) volume_small2_pane_g9

0x2b32,	// (0x00041819) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0004e905) volume_small2_pane_g

0x7ea6,	// (0x00046b8d) fep_vkb_top_text_pane_g1_ParamLimits

0xe34b,	// (0x0004d032) fep_vkb_top_text_pane_t1_ParamLimits

0x815d,	// (0x00046e44) popup_preview_fixed_window_g3_ParamLimits

0x815d,	// (0x00046e44) popup_preview_fixed_window_g3

0xc767,	// (0x0004b44e) popup_toolbar_trans_pane

0xdd90,	// (0x0004ca77) aid_height_set_list_ParamLimits

0x6918,	// (0x000455ff) aid_size_parent_ParamLimits

0x502b,	// (0x00043d12) list_highlight_pane_cp2_ParamLimits

0x4bc6,	// (0x000438ad) set_content_pane_g1_ParamLimits

0xc95b,	// (0x0004b642) list_single_image_pane_ParamLimits

0xc95b,	// (0x0004b642) list_single_image_pane

0xe46f,	// (0x0004d156) aid_size_cell_image_ParamLimits

0xe46f,	// (0x0004d156) aid_size_cell_image

0xe47c,	// (0x0004d163) grid_single_image_pane_ParamLimits

0xe47c,	// (0x0004d163) grid_single_image_pane

0x8632,	// (0x00047319) list_single_image_pane_g1_ParamLimits

0x8632,	// (0x00047319) list_single_image_pane_g1

0x863e,	// (0x00047325) list_single_image_pane_g2_ParamLimits

0x863e,	// (0x00047325) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0004e91a) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0004e91a) list_single_image_pane_g

0x8652,	// (0x00047339) list_single_image_pane_t1_ParamLimits

0x8652,	// (0x00047339) list_single_image_pane_t1

0xe488,	// (0x0004d16f) cell_image_list_pane_ParamLimits

0xe488,	// (0x0004d16f) cell_image_list_pane

0xe49c,	// (0x0004d183) cell_image_list_pane_g1

0xe4a5,	// (0x0004d18c) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0004e91f) cell_image_list_pane_g

0x868e,	// (0x00047375) aid_size_cell_tb_trans_pane

0x409d,	// (0x00042d84) bg_tb_trans_pane

0x86a0,	// (0x00047387) grid_tb_trans_pane

0x5535,	// (0x0004421c) bg_tb_trans_pane_g1

0x553d,	// (0x00044224) bg_tb_trans_pane_g2

0x5545,	// (0x0004422c) bg_tb_trans_pane_g3

0x554d,	// (0x00044234) bg_tb_trans_pane_g4

0x5555,	// (0x0004423c) bg_tb_trans_pane_g5

0x556d,	// (0x00044254) bg_tb_trans_pane_g6

0x5575,	// (0x0004425c) bg_tb_trans_pane_g7

0x555d,	// (0x00044244) bg_tb_trans_pane_g8

0x5565,	// (0x0004424c) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0004e924) bg_tb_trans_pane_g

0x86b4,	// (0x0004739b) cell_toolbar_trans_pane_ParamLimits

0x86b4,	// (0x0004739b) cell_toolbar_trans_pane

0x7af0,	// (0x000467d7) cell_toolbar_trans_pane_g1

0xe106,	// (0x0004cded) list_form2_midp_pane_t1

0xe114,	// (0x0004cdfb) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0004e7cd) list_form2_midp_pane_t

0x76b7,	// (0x0004639e) scroll_pane_cp51_ParamLimits

0x7873,	// (0x0004655a) form2_midp_wait_pane_g1

0x787c,	// (0x00046563) form2_midp_wait_pane_g2

0x7885,	// (0x0004656c) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0004e7e2) form2_midp_wait_pane_g

0x381f,	// (0x00042506) list_highlight_pane_cp21_ParamLimits

0x78d3,	// (0x000465ba) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x78e2,	// (0x000465c9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6ac8,	// (0x000457af) list_single_2graphic_im_pane_ParamLimits

0x6ac8,	// (0x000457af) list_single_2graphic_im_pane

0x86da,	// (0x000473c1) list_single_2graphic_im_pane_g1_ParamLimits

0x86da,	// (0x000473c1) list_single_2graphic_im_pane_g1

0x86eb,	// (0x000473d2) list_single_2graphic_im_pane_g2_ParamLimits

0x86eb,	// (0x000473d2) list_single_2graphic_im_pane_g2

0x86f7,	// (0x000473de) list_single_2graphic_im_pane_g3_ParamLimits

0x86f7,	// (0x000473de) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0004e937) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0004e937) list_single_2graphic_im_pane_g

0x8717,	// (0x000473fe) list_single_2graphic_im_pane_t1_ParamLimits

0x8717,	// (0x000473fe) list_single_2graphic_im_pane_t1

0x8169,	// (0x00046e50) list_single_graphic_2heading_pane_fp_ParamLimits

0x8169,	// (0x00046e50) list_single_graphic_2heading_pane_fp

0x0e1b,	// (0x0003fb02) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0e1b,	// (0x0003fb02) list_single_graphic_2heading_pane_fp_g1

0x817f,	// (0x00046e66) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x817f,	// (0x00046e66) list_single_graphic_2heading_pane_fp_g2

0x4038,	// (0x00042d1f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4038,	// (0x00042d1f) list_single_graphic_2heading_pane_fp_g3

0x40ab,	// (0x00042d92) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x40ab,	// (0x00042d92) list_single_graphic_2heading_pane_fp_g4

0x818b,	// (0x00046e72) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x818b,	// (0x00046e72) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e865) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e865) list_single_graphic_2heading_pane_fp_g

0x0f64,	// (0x0003fc4b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0f64,	// (0x0003fc4b) list_single_graphic_2heading_pane_fp_t1

0x0e53,	// (0x0003fb3a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0e53,	// (0x0003fb3a) list_single_graphic_2heading_pane_fp_t2

0x0f7a,	// (0x0003fc61) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0f7a,	// (0x0003fc61) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0004e940) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0004e940) list_single_graphic_2heading_pane_fp_t

0x7b7c,	// (0x00046863) fep_hwr_write_pane_g5_ParamLimits

0x7b7c,	// (0x00046863) fep_hwr_write_pane_g5

0x7b88,	// (0x0004686f) fep_hwr_write_pane_g6_ParamLimits

0x7b88,	// (0x0004686f) fep_hwr_write_pane_g6

0x83ff,	// (0x000470e6) eswt_shell_pane_ParamLimits

0x55a9,	// (0x00044290) bg_popup_window_pane_cp18_ParamLimits

0x6866,	// (0x0004554d) heading_pane_cp70

0x8529,	// (0x00047210) popup_eswt_tasktip_window_t1_ParamLimits

0xd792,	// (0x0004c479) aid_touch_tab_arrow_left

0xd7a8,	// (0x0004c48f) aid_touch_tab_arrow_right

0xd047,	// (0x0004bd2e) title_pane_g3_ParamLimits

0xd047,	// (0x0004bd2e) title_pane_g3

0x405c,	// (0x00042d43) set_value_pane_g1

0xc767,	// (0x0004b44e) popup_toolbar_trans_pane_ParamLimits

0x868e,	// (0x00047375) aid_size_cell_tb_trans_pane_ParamLimits

0x409d,	// (0x00042d84) bg_tb_trans_pane_ParamLimits

0x86a0,	// (0x00047387) grid_tb_trans_pane_ParamLimits

0x3aa8,	// (0x0004278f) cont_note_pane_ParamLimits

0x3aa8,	// (0x0004278f) cont_note_pane

0x3dea,	// (0x00042ad1) cont_snote2_single_text_pane_ParamLimits

0x3dea,	// (0x00042ad1) cont_snote2_single_text_pane

0x3dea,	// (0x00042ad1) cont_snote2_single_graphic_pane_ParamLimits

0x3dea,	// (0x00042ad1) cont_snote2_single_graphic_pane

0x5bbb,	// (0x000448a2) cont_note_wait_pane_ParamLimits

0x5bbb,	// (0x000448a2) cont_note_wait_pane

0x5bbb,	// (0x000448a2) cont_note_image_pane_ParamLimits

0x5bbb,	// (0x000448a2) cont_note_image_pane

0x8748,	// (0x0004742f) popup_note2_window_g1_ParamLimits

0x8748,	// (0x0004742f) popup_note2_window_g1

0x8779,	// (0x00047460) popup_note2_window_t1_ParamLimits

0x8779,	// (0x00047460) popup_note2_window_t1

0x87be,	// (0x000474a5) popup_note2_window_t2_ParamLimits

0x87be,	// (0x000474a5) popup_note2_window_t2

0x8803,	// (0x000474ea) popup_note2_window_t3_ParamLimits

0x8803,	// (0x000474ea) popup_note2_window_t3

0x8848,	// (0x0004752f) popup_note2_window_t4_ParamLimits

0x8848,	// (0x0004752f) popup_note2_window_t4

0x3b20,	// (0x00042807) popup_note2_window_t5_ParamLimits

0x3b20,	// (0x00042807) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0004e94c) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0004e94c) popup_note2_window_t

0x8877,	// (0x0004755e) popup_note2_image_window_g1_ParamLimits

0x8877,	// (0x0004755e) popup_note2_image_window_g1

0x8883,	// (0x0004756a) popup_note2_image_window_g2_ParamLimits

0x8883,	// (0x0004756a) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0004e957) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0004e957) popup_note2_image_window_g

0x8895,	// (0x0004757c) popup_note2_image_window_t1_ParamLimits

0x8895,	// (0x0004757c) popup_note2_image_window_t1

0x88ad,	// (0x00047594) popup_note2_image_window_t2_ParamLimits

0x88ad,	// (0x00047594) popup_note2_image_window_t2

0x88c5,	// (0x000475ac) popup_note2_image_window_t3_ParamLimits

0x88c5,	// (0x000475ac) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0004e95c) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0004e95c) popup_note2_image_window_t

0x5bc9,	// (0x000448b0) popup_note2_wait_window_g1_ParamLimits

0x5bc9,	// (0x000448b0) popup_note2_wait_window_g1

0x88e1,	// (0x000475c8) popup_note2_wait_window_g2_ParamLimits

0x88e1,	// (0x000475c8) popup_note2_wait_window_g2

0x5be1,	// (0x000448c8) popup_note2_wait_window_g3_ParamLimits

0x5be1,	// (0x000448c8) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x0004e963) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x0004e963) popup_note2_wait_window_g

0x88ed,	// (0x000475d4) popup_note2_wait_window_t1_ParamLimits

0x88ed,	// (0x000475d4) popup_note2_wait_window_t1

0x890b,	// (0x000475f2) popup_note2_wait_window_t2_ParamLimits

0x890b,	// (0x000475f2) popup_note2_wait_window_t2

0x8929,	// (0x00047610) popup_note2_wait_window_t3_ParamLimits

0x8929,	// (0x00047610) popup_note2_wait_window_t3

0x893b,	// (0x00047622) popup_note2_wait_window_t4_ParamLimits

0x893b,	// (0x00047622) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0004e96a) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0004e96a) popup_note2_wait_window_t

0x894d,	// (0x00047634) wait_bar2_pane_ParamLimits

0x894d,	// (0x00047634) wait_bar2_pane

0x8965,	// (0x0004764c) popup_snote2_single_text_window_g1_ParamLimits

0x8965,	// (0x0004764c) popup_snote2_single_text_window_g1

0x898d,	// (0x00047674) popup_snote2_single_text_window_t1_ParamLimits

0x898d,	// (0x00047674) popup_snote2_single_text_window_t1

0x89d9,	// (0x000476c0) popup_snote2_single_text_window_t2_ParamLimits

0x89d9,	// (0x000476c0) popup_snote2_single_text_window_t2

0x8a25,	// (0x0004770c) popup_snote2_single_text_window_t3_ParamLimits

0x8a25,	// (0x0004770c) popup_snote2_single_text_window_t3

0x8a66,	// (0x0004774d) popup_snote2_single_text_window_t4_ParamLimits

0x8a66,	// (0x0004774d) popup_snote2_single_text_window_t4

0x8a9c,	// (0x00047783) popup_snote2_single_text_window_t5_ParamLimits

0x8a9c,	// (0x00047783) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x0004e973) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x0004e973) popup_snote2_single_text_window_t

0x8ac7,	// (0x000477ae) popup_snote2_single_graphic_window_g1_ParamLimits

0x8ac7,	// (0x000477ae) popup_snote2_single_graphic_window_g1

0x8aef,	// (0x000477d6) popup_snote2_single_graphic_window_g2_ParamLimits

0x8aef,	// (0x000477d6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x0004e97e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x0004e97e) popup_snote2_single_graphic_window_g

0x8b17,	// (0x000477fe) popup_snote2_single_graphic_window_t1_ParamLimits

0x8b17,	// (0x000477fe) popup_snote2_single_graphic_window_t1

0x8b63,	// (0x0004784a) popup_snote2_single_graphic_window_t2_ParamLimits

0x8b63,	// (0x0004784a) popup_snote2_single_graphic_window_t2

0x8a25,	// (0x0004770c) popup_snote2_single_graphic_window_t3_ParamLimits

0x8a25,	// (0x0004770c) popup_snote2_single_graphic_window_t3

0x8a66,	// (0x0004774d) popup_snote2_single_graphic_window_t4_ParamLimits

0x8a66,	// (0x0004774d) popup_snote2_single_graphic_window_t4

0x8a9c,	// (0x00047783) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a9c,	// (0x00047783) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0004e983) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0004e983) popup_snote2_single_graphic_window_t

0x7572,	// (0x00046259) clock_nsta_pane_cp2_t1

0x7572,	// (0x00046259) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0004e7a3) clock_nsta_pane_cp2_t

0x0771,	// (0x0003f458) form_field_data_wide_pane_g1_ParamLimits

0x4038,	// (0x00042d1f) form_field_data_wide_pane_g2_ParamLimits

0x4038,	// (0x00042d1f) form_field_data_wide_pane_g2

0x40ab,	// (0x00042d92) form_field_data_wide_pane_g3_ParamLimits

0x40ab,	// (0x00042d92) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0004e362) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0004e362) form_field_data_wide_pane_g

0xe049,	// (0x0004cd30) grid_touch_3_pane_ParamLimits

0xe049,	// (0x0004cd30) grid_touch_3_pane

0xe4ae,	// (0x0004d195) cell_touch_3_pane_ParamLimits

0xe4ae,	// (0x0004d195) cell_touch_3_pane

0x7af0,	// (0x000467d7) cell_touch_3_pane_g1

0x7af0,	// (0x000467d7) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0004e828) cell_touch_3_pane_g

0x3b52,	// (0x00042839) cont_query_data_pane

0x3b5a,	// (0x00042841) cont_query_data_pane_cp1

0x8be0,	// (0x000478c7) button_value_adjust_pane_cp7

0x8be8,	// (0x000478cf) query_popup_pane_cp3

0x47d1,	// (0x000434b8) bg_popup_sub_pane_cp22_ParamLimits

0x17fd,	// (0x000404e4) navi_navi_volume_pane_cp2

0x1815,	// (0x000404fc) popup_side_volume_key_window_g2

0x1821,	// (0x00040508) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0004e3f8) popup_side_volume_key_window_g

0x183b,	// (0x00040522) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0004e3ff) popup_side_volume_key_window_t

0x4a87,	// (0x0004376e) popup_side_volume_key_window_ParamLimits

0xb7d2,	// (0x0004a4b9) list_double_graphic_pane_g4_ParamLimits

0xb7d2,	// (0x0004a4b9) list_double_graphic_pane_g4

0xdef6,	// (0x0004cbdd) list_single_2heading_msg_pane_ParamLimits

0xdef6,	// (0x0004cbdd) list_single_2heading_msg_pane

0xc9ce,	// (0x0004b6b5) list_single_2heading_msg_pane_g1_ParamLimits

0xc9ce,	// (0x0004b6b5) list_single_2heading_msg_pane_g1

0xc9da,	// (0x0004b6c1) list_single_2heading_msg_pane_g2_ParamLimits

0xc9da,	// (0x0004b6c1) list_single_2heading_msg_pane_g2

0xc9ed,	// (0x0004b6d4) list_single_2heading_msg_pane_g3_ParamLimits

0xc9ed,	// (0x0004b6d4) list_single_2heading_msg_pane_g3

0x2b53,	// (0x0004183a) list_single_2heading_msg_pane_g4_ParamLimits

0x2b53,	// (0x0004183a) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x0004e98e) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x0004e98e) list_single_2heading_msg_pane_g

0x0f9a,	// (0x0003fc81) list_single_2heading_msg_pane_t1_ParamLimits

0x0f9a,	// (0x0003fc81) list_single_2heading_msg_pane_t1

0xbca6,	// (0x0004a98d) list_single_2heading_msg_pane_t2_ParamLimits

0xbca6,	// (0x0004a98d) list_single_2heading_msg_pane_t2

0xbd11,	// (0x0004a9f8) list_single_2heading_msg_pane_t3_ParamLimits

0xbd11,	// (0x0004a9f8) list_single_2heading_msg_pane_t3

0x102f,	// (0x0003fd16) list_single_2heading_msg_pane_t4_ParamLimits

0x102f,	// (0x0003fd16) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0004e997) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0004e997) list_single_2heading_msg_pane_t

0x3773,	// (0x0004245a) title_pane_g4_ParamLimits

0x3773,	// (0x0004245a) title_pane_g4

0x160b,	// (0x000402f2) title_pane_stacon_g3_ParamLimits

0x160b,	// (0x000402f2) title_pane_stacon_g3

0x870b,	// (0x000473f2) list_single_2graphic_im_pane_g4_ParamLimits

0x870b,	// (0x000473f2) list_single_2graphic_im_pane_g4

0x6622,	// (0x00045309) popup_side_volume_key_window_cp

0x6dcf,	// (0x00045ab6) main_idle_act2_pane_t1

0x218e,	// (0x00040e75) toolbar_button_pane_g10

0xd351,	// (0x0004c038) popup_toolbar_window_cp1

0x7563,	// (0x0004624a) clock_nsta_pane_cp_t1

0x7563,	// (0x0004624a) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0004e79e) clock_nsta_pane_cp_t

0x17fd,	// (0x000404e4) navi_navi_volume_pane_cp2_ParamLimits

0x1809,	// (0x000404f0) popup_side_volume_key_window_g1_ParamLimits

0x1815,	// (0x000404fc) popup_side_volume_key_window_g2_ParamLimits

0x1821,	// (0x00040508) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0004e3f8) popup_side_volume_key_window_g_ParamLimits

0x275c,	// (0x00041443) fep_hwr_aid_pane

0xe1ff,	// (0x0004cee6) bg_fep_hwr_top_pane_g4_ParamLimits

0x7b4c,	// (0x00046833) fep_hwr_top_pane_g1_ParamLimits

0x7b5e,	// (0x00046845) fep_hwr_top_pane_g2_ParamLimits

0x2815,	// (0x000414fc) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0004e7f3) fep_hwr_top_pane_g_ParamLimits

0x282a,	// (0x00041511) fep_hwr_top_text_pane_ParamLimits

0x63e5,	// (0x000450cc) aid_touch_tab_arrow_arrow_2

0x63ee,	// (0x000450d5) aid_touch_tab_arrow_left_2

0x2770,	// (0x00041457) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x27a7,	// (0x0004148e) fep_hwr_prediction_pane

0x7cb5,	// (0x0004699c) fep_vkb_prediction_pane

0xe32b,	// (0x0004d012) fep_vkb_side_pane_g3_ParamLimits

0xe32b,	// (0x0004d012) fep_vkb_side_pane_g3

0x7d5e,	// (0x00046a45) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x81df,	// (0x00046ec6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x81ec,	// (0x00046ed3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0004e89d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8c0d,	// (0x000478f4) fep_hwr_prediction_pane_g1

0x2b6b,	// (0x00041852) fep_hwr_prediction_pane_g2

0x2b73,	// (0x0004185a) fep_hwr_prediction_pane_g3

0x2b7b,	// (0x00041862) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0004e9a0) fep_hwr_prediction_pane_g

0x8c0d,	// (0x000478f4) fep_vkb_prediction_pane_g1

0x8c17,	// (0x000478fe) fep_vkb_prediction_pane_g2

0x8c1f,	// (0x00047906) fep_vkb_prediction_pane_g3

0x8c27,	// (0x0004790e) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0004e9a9) fep_vkb_prediction_pane_g

0x245a,	// (0x00041141) slider_set_pane_g3

0x246e,	// (0x00041155) slider_set_pane_g4

0x2486,	// (0x0004116d) slider_set_pane_g5

0x245a,	// (0x00041141) slider_set_pane_g6

0x249c,	// (0x00041183) slider_set_pane_g7

0x6a75,	// (0x0004575c) slider_form_pane_g3

0x6a7e,	// (0x00045765) slider_form_pane_g4

0x6a86,	// (0x0004576d) slider_form_pane_g5

0x6a75,	// (0x0004575c) slider_form_pane_g6

0xded7,	// (0x0004cbbe) slider_form_pane_g7

0x706e,	// (0x00045d55) slider_set_pane_vc_g3

0x7077,	// (0x00045d5e) slider_set_pane_vc_g4

0x7080,	// (0x00045d67) slider_set_pane_vc_g5

0x706e,	// (0x00045d55) slider_set_pane_vc_g6

0x7089,	// (0x00045d70) slider_set_pane_vc_g7

0x7239,	// (0x00045f20) slider_form_pane_vc_g1

0x7242,	// (0x00045f29) slider_form_pane_vc_g2

0x724b,	// (0x00045f32) slider_form_pane_vc_g3

0x7239,	// (0x00045f20) slider_form_pane_vc_g4

0x7254,	// (0x00045f3b) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0004e770) slider_form_pane_vc_g

0x372b,	// (0x00042412) main_idle_act3_pane

0x8c2f,	// (0x00047916) ai3_links_pane

0xe4f7,	// (0x0004d1de) popup_ai3_data_window_ParamLimits

0xe4f7,	// (0x0004d1de) popup_ai3_data_window

0x372b,	// (0x00042412) grid_ai3_links_pane

0xe50f,	// (0x0004d1f6) cell_ai3_links_pane_ParamLimits

0xe50f,	// (0x0004d1f6) cell_ai3_links_pane

0x8c68,	// (0x0004794f) bg_popup_sub_pane_cp11

0x8c75,	// (0x0004795c) cell_ai3_links_pane_g1

0x372b,	// (0x00042412) bg_popup_sub_pane_cp12

0x8c9a,	// (0x00047981) heading_ai3_data_pane

0x8ca2,	// (0x00047989) list_ai3_gene_pane

0x8cae,	// (0x00047995) popup_ai3_data_window_g1

0x8cb6,	// (0x0004799d) heading_ai3_data_pane_g1

0x8cbe,	// (0x000479a5) heading_ai3_data_pane_t1

0x8ccc,	// (0x000479b3) list_double_ai3_gene_pane_ParamLimits

0x8ccc,	// (0x000479b3) list_double_ai3_gene_pane

0x8cd9,	// (0x000479c0) list_single_ai3_gene_pane_ParamLimits

0x8cd9,	// (0x000479c0) list_single_ai3_gene_pane

0x7ab5,	// (0x0004679c) list_highlight_pane_cp7_ParamLimits

0x7ab5,	// (0x0004679c) list_highlight_pane_cp7

0x8ce6,	// (0x000479cd) list_single_a13_gene_pane_t1_ParamLimits

0x8ce6,	// (0x000479cd) list_single_a13_gene_pane_t1

0x8cfd,	// (0x000479e4) list_single_ai3_gene_pane_g1

0x8d06,	// (0x000479ed) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0004e9b2) list_single_ai3_gene_pane_g

0x8d0e,	// (0x000479f5) list_double_ai3_gene_pane_g1_ParamLimits

0x8d0e,	// (0x000479f5) list_double_ai3_gene_pane_g1

0x8d1a,	// (0x00047a01) list_double_ai3_gene_pane_t1_ParamLimits

0x8d1a,	// (0x00047a01) list_double_ai3_gene_pane_t1

0x8d36,	// (0x00047a1d) list_double_ai3_gene_pane_t2_ParamLimits

0x8d36,	// (0x00047a1d) list_double_ai3_gene_pane_t2

0x8d4b,	// (0x00047a32) list_double_ai3_gene_pane_t3_ParamLimits

0x8d4b,	// (0x00047a32) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0004e9b7) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0004e9b7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f90,	// (0x0003fc77) aid_size_min_col_2

0xe4e1,	// (0x0004d1c8) aid_size_min_msg_ParamLimits

0xe4e1,	// (0x0004d1c8) aid_size_min_msg

0xe33f,	// (0x0004d026) fep_vkb_top_text_pane_g2_ParamLimits

0xe33f,	// (0x0004d026) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0004e823) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0004e823) fep_vkb_top_text_pane_g

0x372b,	// (0x00042412) main_hc_apps_shell_pane

0x8d68,	// (0x00047a4f) grid_hc_apps_pane_ParamLimits

0x8d68,	// (0x00047a4f) grid_hc_apps_pane

0x8d77,	// (0x00047a5e) list_hc_apps_pane

0x8d7f,	// (0x00047a66) scroll_pane_cp37_ParamLimits

0x8d7f,	// (0x00047a66) scroll_pane_cp37

0xe529,	// (0x0004d210) cell_hc_apps_pane_ParamLimits

0xe529,	// (0x0004d210) cell_hc_apps_pane

0xe5e7,	// (0x0004d2ce) cell_hc_apps_pane_g1_ParamLimits

0xe5e7,	// (0x0004d2ce) cell_hc_apps_pane_g1

0x8e6a,	// (0x00047b51) cell_hc_apps_pane_g2_ParamLimits

0x8e6a,	// (0x00047b51) cell_hc_apps_pane_g2

0x8e86,	// (0x00047b6d) cell_hc_apps_pane_g3_ParamLimits

0x8e86,	// (0x00047b6d) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x0004e9be) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x0004e9be) cell_hc_apps_pane_g

0xe614,	// (0x0004d2fb) cell_hc_apps_pane_t1_ParamLimits

0xe614,	// (0x0004d2fb) cell_hc_apps_pane_t1

0x3aa8,	// (0x0004278f) grid_highlight_pane_cp10_ParamLimits

0x3aa8,	// (0x0004278f) grid_highlight_pane_cp10

0xe652,	// (0x0004d339) list_single_hc_apps_pane_ParamLimits

0xe652,	// (0x0004d339) list_single_hc_apps_pane

0xe683,	// (0x0004d36a) list_single_hc_apps_pane_g1

0xc9f9,	// (0x0004b6e0) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0004e9c5) list_single_hc_apps_pane_g

0xca12,	// (0x0004b6f9) list_single_hc_apps_pane_g2_copy1

0xbd7f,	// (0x0004aa66) list_single_hc_apps_pane_t1

0x381f,	// (0x00042506) bg_set_opt_pane_cp_ParamLimits

0x1486,	// (0x0004016d) setting_slider_pane_t1_ParamLimits

0x149f,	// (0x00040186) setting_slider_pane_t2_ParamLimits

0x14b9,	// (0x000401a0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004e245) setting_slider_pane_t_ParamLimits

0x14d1,	// (0x000401b8) slider_set_pane_ParamLimits

0x1ab9,	// (0x000407a0) control_pane_g5_ParamLimits

0x1ab9,	// (0x000407a0) control_pane_g5

0x68d2,	// (0x000455b9) slider_set_pane_g1_ParamLimits

0x244e,	// (0x00041135) slider_set_pane_g2_ParamLimits

0x245a,	// (0x00041141) slider_set_pane_g3_ParamLimits

0x246e,	// (0x00041155) slider_set_pane_g4_ParamLimits

0x2486,	// (0x0004116d) slider_set_pane_g5_ParamLimits

0x245a,	// (0x00041141) slider_set_pane_g6_ParamLimits

0x249c,	// (0x00041183) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0004e646) slider_set_pane_g_ParamLimits

0x4b71,	// (0x00043858) navi_icon_text_pane_ParamLimits

0xd75b,	// (0x0004c442) aid_fill_nsta_2_ParamLimits

0xd792,	// (0x0004c479) aid_touch_tab_arrow_left_ParamLimits

0xd7a8,	// (0x0004c48f) aid_touch_tab_arrow_right_ParamLimits

0xd843,	// (0x0004c52a) clock_nsta_pane_ParamLimits

0x63c7,	// (0x000450ae) navi_icon_pane_g1_ParamLimits

0x63d3,	// (0x000450ba) navi_text_pane_t1_ParamLimits

0x7675,	// (0x0004635c) navi_icon_text_pane_g1_ParamLimits

0x7681,	// (0x00046368) navi_icon_text_pane_t1_ParamLimits

0xe683,	// (0x0004d36a) list_single_hc_apps_pane_g1_ParamLimits

0xc9f9,	// (0x0004b6e0) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0004e9c5) list_single_hc_apps_pane_g_ParamLimits

0xca12,	// (0x0004b6f9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbd7f,	// (0x0004aa66) list_single_hc_apps_pane_t1_ParamLimits

0xbee3,	// (0x0004abca) popup_toolbar2_fixed_window_ParamLimits

0xbee3,	// (0x0004abca) popup_toolbar2_fixed_window

0xc75d,	// (0x0004b444) popup_toolbar2_float_window

0x372b,	// (0x00042412) bg_popup_sub_pane_cp27

0x8f69,	// (0x00047c50) grid_toolbar2_float_pane

0x372b,	// (0x00042412) bg_popup_sub_pane_cp26

0x8f69,	// (0x00047c50) grid_toolbar2_fixed_pane

0xe69c,	// (0x0004d383) cell_toolbar2_fixed_pane_ParamLimits

0xe69c,	// (0x0004d383) cell_toolbar2_fixed_pane

0xe6b7,	// (0x0004d39e) cell_toolbar2_fixed_pane_g1

0x54b5,	// (0x0004419c) toolbar2_fixed_button_pane

0x5535,	// (0x0004421c) toolbar2_fixed_button_pane_g1

0x553d,	// (0x00044224) toolbar2_fixed_button_pane_g2

0x5545,	// (0x0004422c) toolbar2_fixed_button_pane_g3

0x554d,	// (0x00044234) toolbar2_fixed_button_pane_g4

0x5555,	// (0x0004423c) toolbar2_fixed_button_pane_g5

0x555d,	// (0x00044244) toolbar2_fixed_button_pane_g6

0x5565,	// (0x0004424c) toolbar2_fixed_button_pane_g7

0x556d,	// (0x00044254) toolbar2_fixed_button_pane_g8

0x5575,	// (0x0004425c) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0004e548) toolbar2_fixed_button_pane_g

0x8f8b,	// (0x00047c72) cell_toolbar2_float_pane_ParamLimits

0x8f8b,	// (0x00047c72) cell_toolbar2_float_pane

0x8f9f,	// (0x00047c86) cell_toolbar2_float_pane_g1

0x54b5,	// (0x0004419c) toolbar2_fixed_button_pane_cp

0xe227,	// (0x0004cf0e) fep_vkb_accented_list_pane_ParamLimits

0xe227,	// (0x0004cf0e) fep_vkb_accented_list_pane

0x2978,	// (0x0004165f) bg_popup_fep_shadow_pane_g9

0x4cf1,	// (0x000439d8) bg_popup_fep_shadow_pane_cp3

0x41e6,	// (0x00042ecd) list_accented_list_pane

0x8fa8,	// (0x00047c8f) list_single_accented_list_pane_ParamLimits

0x8fa8,	// (0x00047c8f) list_single_accented_list_pane

0x4cf1,	// (0x000439d8) list_highlight_pane_cp10

0x8fb9,	// (0x00047ca0) list_single_accented_list_pane_t1

0xc687,	// (0x0004b36e) popup_slider_window_ParamLimits

0xc687,	// (0x0004b36e) popup_slider_window

0x8bf0,	// (0x000478d7) aid_indentation_list_msg

0xe7b0,	// (0x0004d497) bg_popup_window_pane_cp19

0x90dd,	// (0x00047dc4) popup_slider_window_g1

0x90f9,	// (0x00047de0) popup_slider_window_g2

0x9115,	// (0x00047dfc) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0004e9ca) popup_slider_window_g

0x9171,	// (0x00047e58) popup_slider_window_t1

0x91e5,	// (0x00047ecc) small_volume_slider_vertical_pane

0x7af0,	// (0x000467d7) small_volume_slider_vertical_pane_g1

0x7af0,	// (0x000467d7) small_volume_slider_vertical_pane_g2

0x9201,	// (0x00047ee8) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0004e9dc) small_volume_slider_vertical_pane_g

0xbe51,	// (0x0004ab38) area_side_right_pane_ParamLimits

0xbe51,	// (0x0004ab38) area_side_right_pane

0xca2e,	// (0x0004b715) aid_size_side_button_ParamLimits

0xca2e,	// (0x0004b715) aid_size_side_button

0xca47,	// (0x0004b72e) grid_sctrl_middle_pane_ParamLimits

0xca47,	// (0x0004b72e) grid_sctrl_middle_pane

0x2beb,	// (0x000418d2) sctrl_sk_bottom_pane

0x2bfc,	// (0x000418e3) sctrl_sk_top_pane

0x2c0e,	// (0x000418f5) aid_touch_sctrl_top

0x3aa8,	// (0x0004278f) bg_sctrl_sk_pane_ParamLimits

0x3aa8,	// (0x0004278f) bg_sctrl_sk_pane

0x2c1b,	// (0x00041902) sctrl_sk_top_pane_g1

0x2c28,	// (0x0004190f) sctrl_sk_top_pane_t1

0x2c0e,	// (0x000418f5) aid_touch_sctrl_bottom

0x3aa8,	// (0x0004278f) bg_sctrl_sk_pane_cp_ParamLimits

0x3aa8,	// (0x0004278f) bg_sctrl_sk_pane_cp

0x2c43,	// (0x0004192a) sctrl_sk_bottom_pane_g1

0x2c28,	// (0x0004190f) sctrl_sk_bottom_pane_t1

0xca61,	// (0x0004b748) cell_sctrl_middle_pane_ParamLimits

0xca61,	// (0x0004b748) cell_sctrl_middle_pane

0xca72,	// (0x0004b759) aid_touch_sctrl_middle_ParamLimits

0xca72,	// (0x0004b759) aid_touch_sctrl_middle

0xca7f,	// (0x0004b766) bg_sctrl_middle_pane_ParamLimits

0xca7f,	// (0x0004b766) bg_sctrl_middle_pane

0x9289,	// (0x00047f70) cell_sctrl_middle_pane_g1_ParamLimits

0x9289,	// (0x00047f70) cell_sctrl_middle_pane_g1

0xca8d,	// (0x0004b774) cell_sctrl_middle_pane_g2_ParamLimits

0xca8d,	// (0x0004b774) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0004e9e8) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0004e9e8) cell_sctrl_middle_pane_g

0x5535,	// (0x0004421c) bg_sctrl_middle_pane_g1

0x553d,	// (0x00044224) bg_sctrl_middle_pane_g2

0x5545,	// (0x0004422c) bg_sctrl_middle_pane_g3

0x554d,	// (0x00044234) bg_sctrl_middle_pane_g4

0x5555,	// (0x0004423c) bg_sctrl_middle_pane_g5

0x555d,	// (0x00044244) bg_sctrl_middle_pane_g6

0x5565,	// (0x0004424c) bg_sctrl_middle_pane_g7

0x556d,	// (0x00044254) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0004e9ed) bg_sctrl_middle_pane_g

0x5575,	// (0x0004425c) bg_sctrl_middle_pane_g8_copy1

0x5535,	// (0x0004421c) bg_sctrl_sk_pane_g1

0x553d,	// (0x00044224) bg_sctrl_sk_pane_g2

0x5545,	// (0x0004422c) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0004e548) bg_sctrl_sk_pane_g

0x3fa8,	// (0x00042c8f) aid_size_touch_scroll_bar

0x554d,	// (0x00044234) bg_sctrl_sk_pane_g4

0x5555,	// (0x0004423c) bg_sctrl_sk_pane_g5

0x555d,	// (0x00044244) bg_sctrl_sk_pane_g6

0x5565,	// (0x0004424c) bg_sctrl_sk_pane_g7

0x556d,	// (0x00044254) bg_sctrl_sk_pane_g8

0x5575,	// (0x0004425c) bg_sctrl_sk_pane_g9

0x1c55,	// (0x0004093c) popup_fep_china_hwr2_fs_candidate_window

0xc1b5,	// (0x0004ae9c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1b5,	// (0x0004ae9c) popup_fep_china_hwr2_fs_control_window

0x7d5e,	// (0x00046a45) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0004e9e3) sctrl_sk_top_pane_g

0xe868,	// (0x0004d54f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe868,	// (0x0004d54f) aid_fep_china_hwr2_fs_cell

0xe87c,	// (0x0004d563) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe87c,	// (0x0004d563) bg_popup_fep_shadow_pane_cp4

0xe893,	// (0x0004d57a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe893,	// (0x0004d57a) bg_popup_fep_shadow_pane_cp5

0xe8a5,	// (0x0004d58c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8a5,	// (0x0004d58c) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b9,	// (0x0004d5a0) popup_fep_china_hwr2_fs_control_funtion_grid

0x925d,	// (0x00047f44) aid_fep_china_hwr2_fs_candi_cell

0x372b,	// (0x00042412) bg_popup_fep_shadow_pane_cp6

0x9267,	// (0x00047f4e) popup_fep_china_hwr2_fs_candidate_grid

0xe8c1,	// (0x0004d5a8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe8c1,	// (0x0004d5a8) cell_fep_china_hwr2_fs_funtion_grid

0x7af0,	// (0x000467d7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9289,	// (0x00047f70) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9289,	// (0x00047f70) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9297,	// (0x00047f7e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9297,	// (0x00047f7e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0004e9fe) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0004e9fe) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8d9,	// (0x0004d5c0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8d9,	// (0x0004d5c0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8ee,	// (0x0004d5d5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8ee,	// (0x0004d5d5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0012,	// (0x0003ecf9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0012,	// (0x0003ecf9) cell_fep_china_hwr2_fs_funtion_grid_t

0x92de,	// (0x00047fc5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x92e6,	// (0x00047fcd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x92ee,	// (0x00047fd5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1c,	// (0x0004ea03) popup_fep_china_hwr2_fs_control_bar_grid_g

0x92f6,	// (0x00047fdd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x92f6,	// (0x00047fdd) cell_fep_china_hwr2_fs_candidate_grid

0x930f,	// (0x00047ff6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9317,	// (0x00047ffe) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7af0,	// (0x000467d7) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7af0,	// (0x000467d7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0004e828) cell_fep_china_hwr2_fs_candidate_grid_g

0x931f,	// (0x00048006) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5127,	// (0x00043e0e) clock_nsta_pane_cp_24_ParamLimits

0x5127,	// (0x00043e0e) clock_nsta_pane_cp_24

0x51a5,	// (0x00043e8c) indicator_nsta_pane_cp_24_ParamLimits

0x51a5,	// (0x00043e8c) indicator_nsta_pane_cp_24

0x6243,	// (0x00044f2a) heading_pane_g1

0x0001,

0xf8c6,	// (0x0004e5ad) heading_pane_g

0x6c18,	// (0x000458ff) grid_sct_catagory_button_pane

0x6c48,	// (0x0004592f) scroll_pane_cp5_ParamLimits

0x76c3,	// (0x000463aa) button_value_adjust_pane_cp5_ParamLimits

0x76c3,	// (0x000463aa) button_value_adjust_pane_cp5

0x77a2,	// (0x00046489) form2_midp_time_pane_ParamLimits

0x932d,	// (0x00048014) cell_sct_catagory_button_pane_ParamLimits

0x932d,	// (0x00048014) cell_sct_catagory_button_pane

0x7ab5,	// (0x0004679c) bg_button_pane_cp01_ParamLimits

0x7ab5,	// (0x0004679c) bg_button_pane_cp01

0x7af0,	// (0x000467d7) cell_sct_catagory_button_pane_g1

0xc700,	// (0x0004b3e7) popup_tb_extension_window

0xe90a,	// (0x0004d5f1) aid_size_cell_ext_ParamLimits

0xe90a,	// (0x0004d5f1) aid_size_cell_ext

0x3dea,	// (0x00042ad1) bg_tb_trans_pane_cp1_ParamLimits

0x3dea,	// (0x00042ad1) bg_tb_trans_pane_cp1

0xe930,	// (0x0004d617) grid_tb_ext_pane_ParamLimits

0xe930,	// (0x0004d617) grid_tb_ext_pane

0xe972,	// (0x0004d659) cell_tb_ext_pane_ParamLimits

0xe972,	// (0x0004d659) cell_tb_ext_pane

0xe99a,	// (0x0004d681) cell_tb_ext_pane_g1_ParamLimits

0xe99a,	// (0x0004d681) cell_tb_ext_pane_g1

0x93c5,	// (0x000480ac) cell_tb_ext_pane_t1

0x3aa8,	// (0x0004278f) list_highlight_pane_cp11_ParamLimits

0x3aa8,	// (0x0004278f) list_highlight_pane_cp11

0xbef8,	// (0x0004abdf) popup_uni_indicator_window_ParamLimits

0xbef8,	// (0x0004abdf) popup_uni_indicator_window

0x409d,	// (0x00042d84) bg_popup_sub_pane_cp14

0x93e0,	// (0x000480c7) list_uniindi_pane

0x93ec,	// (0x000480d3) uniindi_top_pane

0x3aa8,	// (0x0004278f) bg_uniindi_top_pane

0x940b,	// (0x000480f2) uniindi_top_pane_g1

0x9421,	// (0x00048108) uniindi_top_pane_g2

0x0003,

0xfd23,	// (0x0004ea0a) uniindi_top_pane_g

0x944b,	// (0x00048132) uniindi_top_pane_t1

0x9475,	// (0x0004815c) list_single_uniindi_pane_ParamLimits

0x9475,	// (0x0004815c) list_single_uniindi_pane

0x7af0,	// (0x000467d7) bg_uniindi_top_pane_g1

0x9488,	// (0x0004816f) list_single_uniindi_pane_g1

0x949b,	// (0x00048182) list_single_uniindi_pane_t1

0x372b,	// (0x00042412) control_bg_pane

0x94c0,	// (0x000481a7) bg_sctrl_sk_pane_cp1

0x94c9,	// (0x000481b0) bg_sctrl_sk_pane_cp2

0x94d2,	// (0x000481b9) control_bg_pane_g1

0x94db,	// (0x000481c2) control_bg_pane_g2

0x0001,

0xfd2c,	// (0x0004ea13) control_bg_pane_g

0x7507,	// (0x000461ee) cell_indicator_nsta_pane_g1_ParamLimits

0xe076,	// (0x0004cd5d) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0004e78c) cell_indicator_nsta_pane_g_ParamLimits

0x0df1,	// (0x0003fad8) form2_midp_time_pane_t1_ParamLimits

0x274e,	// (0x00041435) main_idle_act4_pane_ParamLimits

0x274e,	// (0x00041435) main_idle_act4_pane

0xc700,	// (0x0004b3e7) popup_tb_extension_window_ParamLimits

0xe958,	// (0x0004d63f) tb_ext_find_pane_ParamLimits

0xe958,	// (0x0004d63f) tb_ext_find_pane

0x94e4,	// (0x000481cb) ai_gene_pane_1_cp1

0x4e30,	// (0x00043b17) ai_gene_pane_2_cp1

0x94ec,	// (0x000481d3) list_single_idle_plugin_calendar_pane

0x94f5,	// (0x000481dc) list_single_idle_plugin_notification_pane

0x94fe,	// (0x000481e5) list_single_idle_plugin_player_pane

0xe9b7,	// (0x0004d69e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9b7,	// (0x0004d69e) list_single_idle_plugin_shortcut_pane

0xe9df,	// (0x0004d6c6) main_idle_act4_pane_t1

0xe9f5,	// (0x0004d6dc) main_idle_act4_pane_t2

0x0001,

0x002c,	// (0x0003ed13) main_idle_act4_pane_t

0xea0d,	// (0x0004d6f4) middle_sk_idle_act4_pane_ParamLimits

0xea0d,	// (0x0004d6f4) middle_sk_idle_act4_pane

0xea29,	// (0x0004d710) popup_clock_digital_analogue_window_cp2

0xea50,	// (0x0004d737) shortcut_wheel_idle_act4_pane_ParamLimits

0xea50,	// (0x0004d737) shortcut_wheel_idle_act4_pane

0x7af0,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g1

0x7af0,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g2

0x7af0,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g3

0x7af0,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g4

0x7af0,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g5

0x9591,	// (0x00048278) shortcut_wheel_idle_act4_pane_g6

0x9599,	// (0x00048280) shortcut_wheel_idle_act4_pane_g7

0x95a1,	// (0x00048288) shortcut_wheel_idle_act4_pane_g8

0x95a9,	// (0x00048290) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd31,	// (0x0004ea18) shortcut_wheel_idle_act4_pane_g

0xe1ff,	// (0x0004cee6) middle_sk_idle_act4_pane_g1_ParamLimits

0xe1ff,	// (0x0004cee6) middle_sk_idle_act4_pane_g1

0xeacd,	// (0x0004d7b4) middle_sk_idle_act4_pane_g2_ParamLimits

0xeacd,	// (0x0004d7b4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4f,	// (0x0004ea36) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4f,	// (0x0004ea36) middle_sk_idle_act4_pane_g

0xeae5,	// (0x0004d7cc) middle_sk_idle_act4_pane_t1_ParamLimits

0xeae5,	// (0x0004d7cc) middle_sk_idle_act4_pane_t1

0xeb14,	// (0x0004d7fb) grid_ai_shortcut_pane_ParamLimits

0xeb14,	// (0x0004d7fb) grid_ai_shortcut_pane

0xeb31,	// (0x0004d818) list_highlight_pane_cp16_ParamLimits

0xeb31,	// (0x0004d818) list_highlight_pane_cp16

0xeb3e,	// (0x0004d825) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb3e,	// (0x0004d825) list_single_idle_plugin_shortcut_pane_g1

0xeb4a,	// (0x0004d831) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb4a,	// (0x0004d831) list_single_idle_plugin_shortcut_pane_g2

0xeb66,	// (0x0004d84d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb66,	// (0x0004d84d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x0059,	// (0x0003ed40) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x0059,	// (0x0003ed40) list_single_idle_plugin_shortcut_pane_g

0xeb7b,	// (0x0004d862) cell_ai_shortcut_pane_ParamLimits

0xeb7b,	// (0x0004d862) cell_ai_shortcut_pane

0xeb91,	// (0x0004d878) cell_ai_shortcut_pane_g1_ParamLimits

0xeb91,	// (0x0004d878) cell_ai_shortcut_pane_g1

0x94e4,	// (0x000481cb) ai_gene_pane_1_cp2

0x96d6,	// (0x000483bd) ai_gene_pane_2_cp2

0x96de,	// (0x000483c5) list_highlight_pane_cp15

0x96e7,	// (0x000483ce) list_single_idle_plugin_calendar_pane_g1

0x96de,	// (0x000483c5) list_highlight_pane_cp17

0x96ef,	// (0x000483d6) list_single_idle_plugin_calendar_pane_g1_copy1

0x96f7,	// (0x000483de) list_single_idle_plugin_player_pane_g1

0x6e6f,	// (0x00045b56) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd54,	// (0x0004ea3b) list_single_idle_plugin_player_pane_g

0x96ff,	// (0x000483e6) list_single_idle_plugin_player_pane_t1

0x970d,	// (0x000483f4) list_single_idle_plugin_player_pane_t2

0x971b,	// (0x00048402) list_single_idle_plugin_player_pane_t3

0x9729,	// (0x00048410) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd59,	// (0x0004ea40) list_single_idle_plugin_player_pane_t

0x9737,	// (0x0004841e) wait_bar_pane_cp15

0x973f,	// (0x00048426) grid_ai_notification_pane

0x6e6f,	// (0x00045b56) list_single_idle_plugin_notification_pane_g1

0xebb3,	// (0x0004d89a) cell_ai_notification_pane_ParamLimits

0xebb3,	// (0x0004d89a) cell_ai_notification_pane

0x9755,	// (0x0004843c) cell_ai_notification_pane_g1

0x975d,	// (0x00048444) cell_ai_notification_pane_t1

0xebc0,	// (0x0004d8a7) tb_ext_find_button_pane

0xebc8,	// (0x0004d8af) tb_ext_find_pane_g1

0xebd0,	// (0x0004d8b7) tb_ext_find_pane_t1

0x46e5,	// (0x000433cc) tb_ext_find_button_pane_g1

0x9789,	// (0x00048470) tb_ext_find_button_pane_g2

0x0001,

0xfd62,	// (0x0004ea49) tb_ext_find_button_pane_g

0xe9df,	// (0x0004d6c6) main_idle_act4_pane_t1_ParamLimits

0xe9f5,	// (0x0004d6dc) main_idle_act4_pane_t2_ParamLimits

0x002c,	// (0x0003ed13) main_idle_act4_pane_t_ParamLimits

0xea29,	// (0x0004d710) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea40,	// (0x0004d727) sat_plugin_idle_act4_pane_ParamLimits

0xea40,	// (0x0004d727) sat_plugin_idle_act4_pane

0xebde,	// (0x0004d8c5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebde,	// (0x0004d8c5) sat_plugin_idle_act4_pane_t1

0xebf6,	// (0x0004d8dd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xebf6,	// (0x0004d8dd) sat_plugin_idle_act4_pane_t2

0xec0e,	// (0x0004d8f5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec0e,	// (0x0004d8f5) sat_plugin_idle_act4_pane_t3

0xec26,	// (0x0004d90d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec26,	// (0x0004d90d) sat_plugin_idle_act4_pane_t4

0x0003,

0x0073,	// (0x0003ed5a) sat_plugin_idle_act4_pane_t_ParamLimits

0x0073,	// (0x0003ed5a) sat_plugin_idle_act4_pane_t

0x12f8,	// (0x0003ffdf) popup_battery_window_ParamLimits

0x12f8,	// (0x0003ffdf) popup_battery_window

0x3aa8,	// (0x0004278f) bg_popup_sub_pane_cp25_ParamLimits

0x3aa8,	// (0x0004278f) bg_popup_sub_pane_cp25

0x97de,	// (0x000484c5) popup_battery_window_g1_ParamLimits

0x97de,	// (0x000484c5) popup_battery_window_g1

0x97ea,	// (0x000484d1) popup_battery_window_t1_ParamLimits

0x97ea,	// (0x000484d1) popup_battery_window_t1

0x97fc,	// (0x000484e3) popup_battery_window_t2_ParamLimits

0x97fc,	// (0x000484e3) popup_battery_window_t2

0x0001,

0xfd67,	// (0x0004ea4e) popup_battery_window_t_ParamLimits

0xfd67,	// (0x0004ea4e) popup_battery_window_t

0xd5ba,	// (0x0004c2a1) midp_canvas_pane_ParamLimits

0xd619,	// (0x0004c300) midp_keypad_pane_ParamLimits

0xd619,	// (0x0004c300) midp_keypad_pane

0x502b,	// (0x00043d12) main_midp_pane_ParamLimits

0x7581,	// (0x00046268) signal_pane_g2_cp_ParamLimits

0xec3e,	// (0x0004d925) aid_size_cell_midp_keypad_ParamLimits

0xec3e,	// (0x0004d925) aid_size_cell_midp_keypad

0xec5c,	// (0x0004d943) midp_keyp_game_grid_pane_ParamLimits

0xec5c,	// (0x0004d943) midp_keyp_game_grid_pane

0xec83,	// (0x0004d96a) midp_keyp_rocker_pane_ParamLimits

0xec83,	// (0x0004d96a) midp_keyp_rocker_pane

0xecd4,	// (0x0004d9bb) midp_keyp_sk_left_pane_ParamLimits

0xecd4,	// (0x0004d9bb) midp_keyp_sk_left_pane

0xed28,	// (0x0004da0f) midp_keyp_sk_right_pane_ParamLimits

0xed28,	// (0x0004da0f) midp_keyp_sk_right_pane

0x372b,	// (0x00042412) bg_button_pane_cp03

0xed7c,	// (0x0004da63) midp_keyp_sk_left_pane_g1

0x372b,	// (0x00042412) bg_button_pane_cp04

0xed7c,	// (0x0004da63) midp_keyp_sk_right_pane_g1

0x7af0,	// (0x000467d7) midp_keyp_rocker_pane_g1

0xed85,	// (0x0004da6c) keyp_game_cell_pane_ParamLimits

0xed85,	// (0x0004da6c) keyp_game_cell_pane

0x372b,	// (0x00042412) bg_button_pane_cp02

0xeda9,	// (0x0004da90) keyp_game_cell_pane_g1

0xbe93,	// (0x0004ab7a) popup_fep_vkb2_window_ParamLimits

0xbe93,	// (0x0004ab7a) popup_fep_vkb2_window

0xca99,	// (0x0004b780) aid_size_cell_vkb2_ParamLimits

0xca99,	// (0x0004b780) aid_size_cell_vkb2

0xcacf,	// (0x0004b7b6) popup_fep_vkb2_window_g1_ParamLimits

0xcacf,	// (0x0004b7b6) popup_fep_vkb2_window_g1

0xcb1f,	// (0x0004b806) vkb2_area_bottom_pane_ParamLimits

0xcb1f,	// (0x0004b806) vkb2_area_bottom_pane

0xcb73,	// (0x0004b85a) vkb2_area_keypad_pane_ParamLimits

0xcb73,	// (0x0004b85a) vkb2_area_keypad_pane

0xcbbb,	// (0x0004b8a2) vkb2_area_top_pane_ParamLimits

0xcbbb,	// (0x0004b8a2) vkb2_area_top_pane

0xcc41,	// (0x0004b928) vkb2_top_entry_pane_ParamLimits

0xcc41,	// (0x0004b928) vkb2_top_entry_pane

0xcc6e,	// (0x0004b955) vkb2_top_grid_left_pane_ParamLimits

0xcc6e,	// (0x0004b955) vkb2_top_grid_left_pane

0xcc8e,	// (0x0004b975) vkb2_top_grid_right_pane_ParamLimits

0xcc8e,	// (0x0004b975) vkb2_top_grid_right_pane

0x2ea1,	// (0x00041b88) vkb2_cell_keypad_pane_ParamLimits

0x2ea1,	// (0x00041b88) vkb2_cell_keypad_pane

0xccd4,	// (0x0004b9bb) vkb2_area_bottom_grid_pane_ParamLimits

0xccd4,	// (0x0004b9bb) vkb2_area_bottom_grid_pane

0xccfe,	// (0x0004b9e5) vkb2_area_bottom_pane_g1_ParamLimits

0xccfe,	// (0x0004b9e5) vkb2_area_bottom_pane_g1

0xcd24,	// (0x0004ba0b) vkb2_area_bottom_pane_g2_ParamLimits

0xcd24,	// (0x0004ba0b) vkb2_area_bottom_pane_g2

0xcd55,	// (0x0004ba3c) vkb2_area_bottom_pane_g3_ParamLimits

0xcd55,	// (0x0004ba3c) vkb2_area_bottom_pane_g3

0x0002,

0x0081,	// (0x0003ed68) vkb2_area_bottom_pane_g_ParamLimits

0x0081,	// (0x0003ed68) vkb2_area_bottom_pane_g

0x304b,	// (0x00041d32) vkb2_top_cell_left_pane_ParamLimits

0x304b,	// (0x00041d32) vkb2_top_cell_left_pane

0xedb2,	// (0x0004da99) vkb2_top_entry_pane_g1_ParamLimits

0xedb2,	// (0x0004da99) vkb2_top_entry_pane_g1

0xedc0,	// (0x0004daa7) vkb2_top_entry_pane_t1_ParamLimits

0xedc0,	// (0x0004daa7) vkb2_top_entry_pane_t1

0x99ad,	// (0x00048694) vkb2_top_entry_pane_t2_ParamLimits

0x99ad,	// (0x00048694) vkb2_top_entry_pane_t2

0x99df,	// (0x000486c6) vkb2_top_entry_pane_t3_ParamLimits

0x99df,	// (0x000486c6) vkb2_top_entry_pane_t3

0x0002,

0xfd6c,	// (0x0004ea53) vkb2_top_entry_pane_t_ParamLimits

0xfd6c,	// (0x0004ea53) vkb2_top_entry_pane_t

0xcdbf,	// (0x0004baa6) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdbf,	// (0x0004baa6) vkb2_top_grid_right_pane_g1

0x30ae,	// (0x00041d95) vkb2_top_grid_right_pane_g2_ParamLimits

0x30ae,	// (0x00041d95) vkb2_top_grid_right_pane_g2

0x30c6,	// (0x00041dad) vkb2_top_grid_right_pane_g3_ParamLimits

0x30c6,	// (0x00041dad) vkb2_top_grid_right_pane_g3

0xcdd5,	// (0x0004babc) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdd5,	// (0x0004babc) vkb2_top_grid_right_pane_g4

0x0003,

0xfd73,	// (0x0004ea5a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd73,	// (0x0004ea5a) vkb2_top_grid_right_pane_g

0x30f4,	// (0x00041ddb) vkb2_top_cell_left_pane_g1

0x310b,	// (0x00041df2) vkb2_cell_keypad_pane_g1_ParamLimits

0x310b,	// (0x00041df2) vkb2_cell_keypad_pane_g1

0x9a03,	// (0x000486ea) vkb2_cell_keypad_pane_t1_ParamLimits

0x9a03,	// (0x000486ea) vkb2_cell_keypad_pane_t1

0x3119,	// (0x00041e00) vkb2_cell_bottom_grid_pane_ParamLimits

0x3119,	// (0x00041e00) vkb2_cell_bottom_grid_pane

0x3152,	// (0x00041e39) vkb2_cell_bottom_grid_pane_g1

0xea71,	// (0x0004d758) aid_call2_pane_cp02

0xea79,	// (0x0004d760) aid_call_pane_cp02

0xea81,	// (0x0004d768) clock_digital_number_pane_cp10

0xea89,	// (0x0004d770) clock_digital_number_pane_cp11

0xea91,	// (0x0004d778) clock_digital_number_pane_cp12

0xea99,	// (0x0004d780) clock_digital_number_pane_cp13

0xeaa1,	// (0x0004d788) clock_digital_separator_pane_cp10

0x46e5,	// (0x000433cc) popup_clock_digital_analogue_window_cp2_g1

0x46e5,	// (0x000433cc) popup_clock_digital_analogue_window_cp2_g2

0xeaa9,	// (0x0004d790) popup_clock_digital_analogue_window_cp2_g3

0x46e5,	// (0x000433cc) popup_clock_digital_analogue_window_cp2_g4

0xeaa9,	// (0x0004d790) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd44,	// (0x0004ea2b) popup_clock_digital_analogue_window_cp2_g

0xeab1,	// (0x0004d798) popup_clock_digital_analogue_window_cp2_t1

0xeabf,	// (0x0004d7a6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x004f,	// (0x0003ed36) popup_clock_digital_analogue_window_cp2_t

0x7af0,	// (0x000467d7) clock_digital_number_pane_cp10_g1

0x7af0,	// (0x000467d7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0004e828) clock_digital_number_pane_cp10_g

0x7af0,	// (0x000467d7) clock_digital_separator_pane_cp10_g1

0x7af0,	// (0x000467d7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0004e828) clock_digital_separator_pane_cp10_g

0x942d,	// (0x00048114) uniindi_top_pane_g3

0x943e,	// (0x00048125) uniindi_top_pane_g4

0x2f2c,	// (0x00041c13) vkb2_row_keypad_pane_ParamLimits

0x2f2c,	// (0x00041c13) vkb2_row_keypad_pane

0x3172,	// (0x00041e59) vkb2_cell_t_keypad_pane_ParamLimits

0x3172,	// (0x00041e59) vkb2_cell_t_keypad_pane

0x3182,	// (0x00041e69) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3182,	// (0x00041e69) vkb2_cell_t_keypad_pane_cp08

0x3195,	// (0x00041e7c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3195,	// (0x00041e7c) vkb2_cell_t_keypad_pane_cp09

0x31a9,	// (0x00041e90) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x31a9,	// (0x00041e90) vkb2_cell_t_keypad_pane_cp01

0x31ba,	// (0x00041ea1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x31ba,	// (0x00041ea1) vkb2_cell_t_keypad_pane_cp02

0x31cb,	// (0x00041eb2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x31cb,	// (0x00041eb2) vkb2_cell_t_keypad_pane_cp03

0x31dc,	// (0x00041ec3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x31dc,	// (0x00041ec3) vkb2_cell_t_keypad_pane_cp04

0x31ed,	// (0x00041ed4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x31ed,	// (0x00041ed4) vkb2_cell_t_keypad_pane_cp05

0x31fe,	// (0x00041ee5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x31fe,	// (0x00041ee5) vkb2_cell_t_keypad_pane_cp06

0x320f,	// (0x00041ef6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x320f,	// (0x00041ef6) vkb2_cell_t_keypad_pane_cp07

0x3220,	// (0x00041f07) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3220,	// (0x00041f07) vkb2_cell_t_keypad_pane_cp10

0x7d5e,	// (0x00046a45) vkb2_cell_t_keypad_pane_g1

0x9a1a,	// (0x00048701) vkb2_cell_t_keypad_pane_t1

0x372b,	// (0x00042412) popup_grid_graphic2_window

0xedf9,	// (0x0004dae0) aid_size_cell_graphic2_ParamLimits

0xedf9,	// (0x0004dae0) aid_size_cell_graphic2

0xee37,	// (0x0004db1e) bg_popup_window_pane_cp21_ParamLimits

0xee37,	// (0x0004db1e) bg_popup_window_pane_cp21

0xee45,	// (0x0004db2c) graphic2_pages_pane_ParamLimits

0xee45,	// (0x0004db2c) graphic2_pages_pane

0xee9b,	// (0x0004db82) grid_graphic2_control_pane_ParamLimits

0xee9b,	// (0x0004db82) grid_graphic2_control_pane

0xeee3,	// (0x0004dbca) grid_graphic2_pane_ParamLimits

0xeee3,	// (0x0004dbca) grid_graphic2_pane

0xef6a,	// (0x0004dc51) cell_graphic2_pane

0x372b,	// (0x00042412) main_comp_mode_pane

0x8ca2,	// (0x00047989) list_ai3_gene_pane_ParamLimits

0xe7b0,	// (0x0004d497) bg_popup_window_pane_cp19_ParamLimits

0x907f,	// (0x00047d66) bg_touch_area_indi_pane_ParamLimits

0x907f,	// (0x00047d66) bg_touch_area_indi_pane

0x9095,	// (0x00047d7c) bg_touch_area_indi_pane_cp01_ParamLimits

0x9095,	// (0x00047d7c) bg_touch_area_indi_pane_cp01

0x90ab,	// (0x00047d92) bg_touch_area_indi_pane_cp02_ParamLimits

0x90ab,	// (0x00047d92) bg_touch_area_indi_pane_cp02

0x90c3,	// (0x00047daa) bg_touch_area_indi_pane_cp03_ParamLimits

0x90c3,	// (0x00047daa) bg_touch_area_indi_pane_cp03

0x90dd,	// (0x00047dc4) popup_slider_window_g1_ParamLimits

0x90f9,	// (0x00047de0) popup_slider_window_g2_ParamLimits

0x9115,	// (0x00047dfc) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0004e9ca) popup_slider_window_g_ParamLimits

0x9171,	// (0x00047e58) popup_slider_window_t1_ParamLimits

0x91e5,	// (0x00047ecc) small_volume_slider_vertical_pane_ParamLimits

0xef6a,	// (0x0004dc51) cell_graphic2_pane_ParamLimits

0xefd4,	// (0x0004dcbb) bg_button_pane_cp10_ParamLimits

0xefd4,	// (0x0004dcbb) bg_button_pane_cp10

0xefe7,	// (0x0004dcce) bg_button_pane_cp11_ParamLimits

0xefe7,	// (0x0004dcce) bg_button_pane_cp11

0xeffa,	// (0x0004dce1) graphic2_pages_pane_g1_ParamLimits

0xeffa,	// (0x0004dce1) graphic2_pages_pane_g1

0xf015,	// (0x0004dcfc) graphic2_pages_pane_g2_ParamLimits

0xf015,	// (0x0004dcfc) graphic2_pages_pane_g2

0x0001,

0x009d,	// (0x0003ed84) graphic2_pages_pane_g_ParamLimits

0x009d,	// (0x0003ed84) graphic2_pages_pane_g

0xf02d,	// (0x0004dd14) graphic2_pages_pane_t1_ParamLimits

0xf02d,	// (0x0004dd14) graphic2_pages_pane_t1

0xf045,	// (0x0004dd2c) cell_graphic2_control_pane_ParamLimits

0xf045,	// (0x0004dd2c) cell_graphic2_control_pane

0xf077,	// (0x0004dd5e) cell_graphic2_pane_g1_ParamLimits

0xf077,	// (0x0004dd5e) cell_graphic2_pane_g1

0xe20d,	// (0x0004cef4) cell_graphic2_pane_g2_ParamLimits

0xe20d,	// (0x0004cef4) cell_graphic2_pane_g2

0xefc7,	// (0x0004dcae) cell_graphic2_pane_g3_ParamLimits

0xefc7,	// (0x0004dcae) cell_graphic2_pane_g3

0xe21a,	// (0x0004cf01) cell_graphic2_pane_g4_ParamLimits

0xe21a,	// (0x0004cf01) cell_graphic2_pane_g4

0xf084,	// (0x0004dd6b) cell_graphic2_pane_g5_ParamLimits

0xf084,	// (0x0004dd6b) cell_graphic2_pane_g5

0x0004,

0xfd81,	// (0x0004ea68) cell_graphic2_pane_g_ParamLimits

0xfd81,	// (0x0004ea68) cell_graphic2_pane_g

0xf0a4,	// (0x0004dd8b) cell_graphic2_pane_t1_ParamLimits

0xf0a4,	// (0x0004dd8b) cell_graphic2_pane_t1

0x6237,	// (0x00044f1e) grid_highlight_pane_cp11_ParamLimits

0x6237,	// (0x00044f1e) grid_highlight_pane_cp11

0x3aa8,	// (0x0004278f) bg_button_pane_cp05

0xf0d8,	// (0x0004ddbf) cell_graphic2_control_pane_g1

0x7af0,	// (0x000467d7) bg_touch_area_indi_pane_g1

0x9d09,	// (0x000489f0) aid_cmod_rocker_key_size

0x9d13,	// (0x000489fa) aid_cmode_itu_key_size

0x9d1d,	// (0x00048a04) main_cmode_video_pane

0x9d27,	// (0x00048a0e) main_comp_mode_itu_pane

0x9d33,	// (0x00048a1a) main_comp_mode_rocker_pane

0x9d3f,	// (0x00048a26) cell_cmode_rocker_pane_ParamLimits

0x9d3f,	// (0x00048a26) cell_cmode_rocker_pane

0x9d51,	// (0x00048a38) cell_cmode_itu_pane_ParamLimits

0x9d51,	// (0x00048a38) cell_cmode_itu_pane

0x409d,	// (0x00042d84) bg_button_pane_cp06_ParamLimits

0x409d,	// (0x00042d84) bg_button_pane_cp06

0x7d5e,	// (0x00046a45) cell_cmode_rocker_pane_g1_ParamLimits

0x7d5e,	// (0x00046a45) cell_cmode_rocker_pane_g1

0x9289,	// (0x00047f70) cell_cmode_rocker_pane_g2_ParamLimits

0x9289,	// (0x00047f70) cell_cmode_rocker_pane_g2

0x0001,

0xfd8c,	// (0x0004ea73) cell_cmode_rocker_pane_g_ParamLimits

0xfd8c,	// (0x0004ea73) cell_cmode_rocker_pane_g

0x372b,	// (0x00042412) bg_button_pane_cp07

0x9d66,	// (0x00048a4d) cell_cmode_itu_pane_g1

0x9d6f,	// (0x00048a56) cell_cmode_itu_pane_t1

0x9d7d,	// (0x00048a64) cell_cmode_itu_pane_t2

0x0001,

0xfd91,	// (0x0004ea78) cell_cmode_itu_pane_t

0x94b0,	// (0x00048197) aid_touch_ctrl_left

0x94b8,	// (0x0004819f) aid_touch_ctrl_right

0x372b,	// (0x00042412) compa_mode_pane

0xf0fc,	// (0x0004dde3) aid_cmod_rocker_key_size_cp

0xf106,	// (0x0004dded) aid_cmode_itu_key_size_cp

0x9d9f,	// (0x00048a86) compa_mode_pane_g1

0x9da7,	// (0x00048a8e) compa_mode_pane_g2

0x9daf,	// (0x00048a96) compa_mode_pane_g3

0x0002,

0xfd96,	// (0x0004ea7d) compa_mode_pane_g

0xf110,	// (0x0004ddf7) main_comp_mode_itu_pane_cp

0xf118,	// (0x0004ddff) main_comp_mode_rocker_pane_cp

0xf120,	// (0x0004de07) cell_cmode_itu_pane_cp_ParamLimits

0xf120,	// (0x0004de07) cell_cmode_itu_pane_cp

0xf135,	// (0x0004de1c) cell_cmode_rocker_pane_cp_ParamLimits

0xf135,	// (0x0004de1c) cell_cmode_rocker_pane_cp

0x409d,	// (0x00042d84) bg_button_pane_cp06_cp_ParamLimits

0x409d,	// (0x00042d84) bg_button_pane_cp06_cp

0x7d5e,	// (0x00046a45) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7d5e,	// (0x00046a45) cell_cmode_rocker_pane_g1_cp

0x7af0,	// (0x000467d7) cell_cmode_rocker_pane_g2_cp

0x372b,	// (0x00042412) bg_button_pane_cp07_cp

0xf147,	// (0x0004de2e) cell_cmode_itu_pane_g1_cp

0xf150,	// (0x0004de37) cell_cmode_itu_pane_t1_cp

0xf150,	// (0x0004de37) cell_cmode_itu_pane_t2_cp

0xdecd,	// (0x0004cbb4) settings_code_pane_cp2

0x381f,	// (0x00042506) bg_popup_window_pane_cp3_ParamLimits

0x3c76,	// (0x0004295d) heading_pane_cp3_ParamLimits

0x3c82,	// (0x00042969) listscroll_popup_graphic_pane_ParamLimits

0x275c,	// (0x00041443) fep_hwr_aid_pane_ParamLimits

0x2c0e,	// (0x000418f5) aid_touch_sctrl_top_ParamLimits

0x2c1b,	// (0x00041902) sctrl_sk_top_pane_g1_ParamLimits

0x7d5e,	// (0x00046a45) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0004e9e3) sctrl_sk_top_pane_g_ParamLimits

0x2c28,	// (0x0004190f) sctrl_sk_top_pane_t1_ParamLimits

0x2c0e,	// (0x000418f5) aid_touch_sctrl_bottom_ParamLimits

0x2c28,	// (0x0004190f) sctrl_sk_bottom_pane_t1_ParamLimits

0x93f9,	// (0x000480e0) aid_area_touch_clock

0xcc03,	// (0x0004b8ea) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc03,	// (0x0004b8ea) aid_vkb2_area_top_pane_cell

0xccae,	// (0x0004b995) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccae,	// (0x0004b995) aid_vkb2_area_bottom_pane_cell

0x9965,	// (0x0004864c) popup_char_count_window

0x9e05,	// (0x00048aec) popup_char_count_window_g1

0x9e0e,	// (0x00048af5) popup_char_count_window_g2

0x9e17,	// (0x00048afe) popup_char_count_window_g3

0x0002,

0xfd9d,	// (0x0004ea84) popup_char_count_window_g

0x9e20,	// (0x00048b07) popup_char_count_window_t1

0x2cc9,	// (0x000419b0) popup_fep_char_preview_window_ParamLimits

0x2cc9,	// (0x000419b0) popup_fep_char_preview_window

0xcc23,	// (0x0004b90a) vkb2_top_candi_pane_ParamLimits

0xcc23,	// (0x0004b90a) vkb2_top_candi_pane

0xf15e,	// (0x0004de45) cell_vkb2_top_candi_pane_ParamLimits

0xf15e,	// (0x0004de45) cell_vkb2_top_candi_pane

0x5bbb,	// (0x000448a2) bg_popup_fep_char_preview_window_ParamLimits

0x5bbb,	// (0x000448a2) bg_popup_fep_char_preview_window

0x3235,	// (0x00041f1c) popup_fep_char_preview_window_t1_ParamLimits

0x3235,	// (0x00041f1c) popup_fep_char_preview_window_t1

0x9e7b,	// (0x00048b62) bg_popup_fep_char_preview_window_g1

0x9e83,	// (0x00048b6a) bg_popup_fep_char_preview_window_g2

0x9e8b,	// (0x00048b72) bg_popup_fep_char_preview_window_g3

0x9e93,	// (0x00048b7a) bg_popup_fep_char_preview_window_g4

0x9e9b,	// (0x00048b82) bg_popup_fep_char_preview_window_g5

0x326f,	// (0x00041f56) bg_popup_fep_char_preview_window_g6

0x9ea3,	// (0x00048b8a) bg_popup_fep_char_preview_window_g7

0x9eab,	// (0x00048b92) bg_popup_fep_char_preview_window_g8

0x9eb3,	// (0x00048b9a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfda4,	// (0x0004ea8b) bg_popup_fep_char_preview_window_g

0x7d5e,	// (0x00046a45) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7d5e,	// (0x00046a45) cell_vkb2_top_candi_pane_g1

0x8075,	// (0x00046d5c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8075,	// (0x00046d5c) cell_vkb2_top_candi_pane_g2

0x8096,	// (0x00046d7d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8096,	// (0x00046d7d) cell_vkb2_top_candi_pane_g3

0x3277,	// (0x00041f5e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3277,	// (0x00041f5e) cell_vkb2_top_candi_pane_g4

0x9aa8,	// (0x0004878f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9aa8,	// (0x0004878f) cell_vkb2_top_candi_pane_g5

0x9289,	// (0x00047f70) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9289,	// (0x00047f70) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb7,	// (0x0004ea9e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb7,	// (0x0004ea9e) cell_vkb2_top_candi_pane_g

0x3298,	// (0x00041f7f) cell_vkb2_top_candi_pane_t1

0x243a,	// (0x00041121) aid_size_touch_slider_mark_ParamLimits

0x243a,	// (0x00041121) aid_size_touch_slider_mark

0xee81,	// (0x0004db68) grid_graphic2_catg_pane_ParamLimits

0xee81,	// (0x0004db68) grid_graphic2_catg_pane

0xef3d,	// (0x0004dc24) popup_grid_graphic2_window_t1_ParamLimits

0xef3d,	// (0x0004dc24) popup_grid_graphic2_window_t1

0xef53,	// (0x0004dc3a) popup_grid_graphic2_window_t2_ParamLimits

0xef53,	// (0x0004dc3a) popup_grid_graphic2_window_t2

0x0001,

0xfd7c,	// (0x0004ea63) popup_grid_graphic2_window_t_ParamLimits

0xfd7c,	// (0x0004ea63) popup_grid_graphic2_window_t

0x3aa8,	// (0x0004278f) bg_button_pane_cp05_ParamLimits

0xf0d8,	// (0x0004ddbf) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0004deab) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0004deab) cell_graphic2_catg_pane

0x372b,	// (0x00042412) bg_button_pane_cp12

0xf1d6,	// (0x0004debd) cell_graphic2_catg_pane_g1

0x93c5,	// (0x000480ac) cell_tb_ext_pane_t1_ParamLimits

0x306b,	// (0x00041d52) vkb2_top_cell_right_narrow_pane_ParamLimits

0x306b,	// (0x00041d52) vkb2_top_cell_right_narrow_pane

0x3083,	// (0x00041d6a) vkb2_top_cell_right_wide_pane_ParamLimits

0x3083,	// (0x00041d6a) vkb2_top_cell_right_wide_pane

0x274e,	// (0x00041435) bg_vkb2_func_pane_ParamLimits

0x274e,	// (0x00041435) bg_vkb2_func_pane

0x30f4,	// (0x00041ddb) vkb2_top_cell_left_pane_g1_ParamLimits

0x274e,	// (0x00041435) bg_vkb2_fuc_pane_cp03_ParamLimits

0x274e,	// (0x00041435) bg_vkb2_fuc_pane_cp03

0x3152,	// (0x00041e39) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x553d,	// (0x00044224) bg_vkb2_func_pane_g1

0x5545,	// (0x0004422c) bg_vkb2_func_pane_g2

0x5555,	// (0x0004423c) bg_vkb2_func_pane_g3

0x554d,	// (0x00044234) bg_vkb2_func_pane_g4

0x555d,	// (0x00044244) bg_vkb2_func_pane_g5

0x5565,	// (0x0004424c) bg_vkb2_func_pane_g6

0x556d,	// (0x00044254) bg_vkb2_func_pane_g7

0x5575,	// (0x0004425c) bg_vkb2_func_pane_g8

0x5535,	// (0x0004421c) bg_vkb2_func_pane_g9

0x0008,

0xfdc4,	// (0x0004eaab) bg_vkb2_func_pane_g

0x274e,	// (0x00041435) bg_vkb2_fuc_pane_cp01_ParamLimits

0x274e,	// (0x00041435) bg_vkb2_fuc_pane_cp01

0x30f4,	// (0x00041ddb) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x30f4,	// (0x00041ddb) vkb2_top_cell_right_wide_pane_g1

0x274e,	// (0x00041435) bg_vkb2_fuc_pane_cp02_ParamLimits

0x274e,	// (0x00041435) bg_vkb2_fuc_pane_cp02

0x3152,	// (0x00041e39) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3152,	// (0x00041e39) vkb2_top_cell_right_narrow_pane_g1

0xe6ea,	// (0x0004d3d1) aid_touch_area_decrease_ParamLimits

0xe6ea,	// (0x0004d3d1) aid_touch_area_decrease

0xe724,	// (0x0004d40b) aid_touch_area_increase_ParamLimits

0xe724,	// (0x0004d40b) aid_touch_area_increase

0xe74c,	// (0x0004d433) aid_touch_area_mute_ParamLimits

0xe74c,	// (0x0004d433) aid_touch_area_mute

0xe77c,	// (0x0004d463) aid_touch_area_slider_ParamLimits

0xe77c,	// (0x0004d463) aid_touch_area_slider

0xe7bc,	// (0x0004d4a3) popup_slider_window_g4_ParamLimits

0xe7bc,	// (0x0004d4a3) popup_slider_window_g4

0xe7e4,	// (0x0004d4cb) popup_slider_window_g5_ParamLimits

0xe7e4,	// (0x0004d4cb) popup_slider_window_g5

0xe818,	// (0x0004d4ff) popup_slider_window_g6_ParamLimits

0xe818,	// (0x0004d4ff) popup_slider_window_g6

0x919f,	// (0x00047e86) popup_slider_window_t2_ParamLimits

0x919f,	// (0x00047e86) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0004e9d7) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0004e9d7) popup_slider_window_t

0xe834,	// (0x0004d51b) slider_pane_ParamLimits

0xe834,	// (0x0004d51b) slider_pane

0x9ed6,	// (0x00048bbd) slider_pane_g1_ParamLimits

0x9ed6,	// (0x00048bbd) slider_pane_g1

0x9eea,	// (0x00048bd1) slider_pane_g2_ParamLimits

0x9eea,	// (0x00048bd1) slider_pane_g2

0x9f00,	// (0x00048be7) slider_pane_g3_ParamLimits

0x9f00,	// (0x00048be7) slider_pane_g3

0x0003,

0xfdd7,	// (0x0004eabe) slider_pane_g_ParamLimits

0xfdd7,	// (0x0004eabe) slider_pane_g

0xc748,	// (0x0004b42f) popup_tb_float_extension_window_ParamLimits

0xc748,	// (0x0004b42f) popup_tb_float_extension_window

0x9f2c,	// (0x00048c13) aid_size_cell_tb_float_ext

0x372b,	// (0x00042412) bg_popup_sub_window_cp28

0x9f38,	// (0x00048c1f) grid_tb_float_ext_pane

0x9f42,	// (0x00048c29) cell_tb_float_ext_pane_ParamLimits

0x9f42,	// (0x00048c29) cell_tb_float_ext_pane

0x9f5c,	// (0x00048c43) cell_tb_float_ext_pane_g1

0x9f65,	// (0x00048c4c) grid_highlight_pane_cp12

0xc998,	// (0x0004b67f) cell_last_hwr_side_pane_ParamLimits

0xc998,	// (0x0004b67f) cell_last_hwr_side_pane

0x7af0,	// (0x000467d7) cell_last_hwr_side_pane_g1

0x9f6e,	// (0x00048c55) cell_last_hwr_side_pane_g2

0x0001,

0xfde0,	// (0x0004eac7) cell_last_hwr_side_pane_g

0xcd8a,	// (0x0004ba71) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd8a,	// (0x0004ba71) vkb2_area_bottom_space_btn_pane

0x7d5e,	// (0x00046a45) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9a1a,	// (0x00048701) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3298,	// (0x00041f7f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x32b7,	// (0x00041f9e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x32b7,	// (0x00041f9e) vkb2_area_bottom_space_btn_pane_g1

0x32f1,	// (0x00041fd8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x32f1,	// (0x00041fd8) vkb2_area_bottom_space_btn_pane_g2

0x3327,	// (0x0004200e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3327,	// (0x0004200e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde5,	// (0x0004eacc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde5,	// (0x0004eacc) vkb2_area_bottom_space_btn_pane_g

0x2803,	// (0x000414ea) cel_fep_hwr_func_pane_ParamLimits

0x2803,	// (0x000414ea) cel_fep_hwr_func_pane

0xc96d,	// (0x0004b654) cell_hwr_side_button_pane_ParamLimits

0xc96d,	// (0x0004b654) cell_hwr_side_button_pane

0x93f9,	// (0x000480e0) aid_area_touch_clock_ParamLimits

0x3aa8,	// (0x0004278f) bg_uniindi_top_pane_ParamLimits

0x940b,	// (0x000480f2) uniindi_top_pane_g1_ParamLimits

0x9421,	// (0x00048108) uniindi_top_pane_g2_ParamLimits

0x942d,	// (0x00048114) uniindi_top_pane_g3_ParamLimits

0x943e,	// (0x00048125) uniindi_top_pane_g4_ParamLimits

0xfd23,	// (0x0004ea0a) uniindi_top_pane_g_ParamLimits

0x944b,	// (0x00048132) uniindi_top_pane_t1_ParamLimits

0x3aa8,	// (0x0004278f) bg_vkb2_func_pane_cp01_ParamLimits

0x3aa8,	// (0x0004278f) bg_vkb2_func_pane_cp01

0x9f77,	// (0x00048c5e) cel_fep_hwr_func_pane_g1_ParamLimits

0x9f77,	// (0x00048c5e) cel_fep_hwr_func_pane_g1

0x3aa8,	// (0x0004278f) bg_vkb2_func_pane_cp02_ParamLimits

0x3aa8,	// (0x0004278f) bg_vkb2_func_pane_cp02

0x9f77,	// (0x00048c5e) cell_hwr_side_button_pane_g1_ParamLimits

0x9f77,	// (0x00048c5e) cell_hwr_side_button_pane_g1

0x53b6,	// (0x0004409d) status_pane_g4_ParamLimits

0x53b6,	// (0x0004409d) status_pane_g4

0x53d0,	// (0x000440b7) status_pane_t1

0x780a,	// (0x000464f1) form2_midp_gauge_slider_cont_pane

0x7812,	// (0x000464f9) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe143,	// (0x0004ce2a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe157,	// (0x0004ce3e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0004e7db) form2_midp_gauge_slider_pane_t_ParamLimits

0x7848,	// (0x0004652f) form2_midp_slider_pane_ParamLimits

0x2c89,	// (0x00041970) aid_size_cell_func_vkb2_ParamLimits

0x2c89,	// (0x00041970) aid_size_cell_func_vkb2

0x9f18,	// (0x00048bff) slider_pane_g4_ParamLimits

0x9f18,	// (0x00048bff) slider_pane_g4

0xcdeb,	// (0x0004bad2) form2_midp_gauge_slider_pane_t2_cp01

0xcdfb,	// (0x0004bae2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcdfb,	// (0x0004bae2) form2_midp_gauge_slider_pane_t3_cp01

0x339c,	// (0x00042083) form2_midp_slider_pane_cp01

0x372b,	// (0x00042412) navi_smil_pane

0x9fb0,	// (0x00048c97) navi_smil_pane_g1

0x9fb8,	// (0x00048c9f) navi_smil_pane_t1

0x9f85,	// (0x00048c6c) form2_midp_slider_pane_g1

0x9f8e,	// (0x00048c75) form2_midp_slider_pane_g2

0x9f96,	// (0x00048c7d) form2_midp_slider_pane_g3

0x9f85,	// (0x00048c6c) form2_midp_slider_pane_g4

0xf1df,	// (0x0004dec6) form2_midp_slider_pane_g5

0x0004,

0xfdee,	// (0x0004ead5) form2_midp_slider_pane_g

0x3361,	// (0x00042048) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3361,	// (0x00042048) vkb2_area_bottom_space_btn_pane_g4

0xd88e,	// (0x0004c575) lc0_navi_pane_ParamLimits

0xd88e,	// (0x0004c575) lc0_navi_pane

0xd8f8,	// (0x0004c5df) lc0_stat_indi_pane_ParamLimits

0xd8f8,	// (0x0004c5df) lc0_stat_indi_pane

0xd90d,	// (0x0004c5f4) ls0_title_pane_ParamLimits

0xd90d,	// (0x0004c5f4) ls0_title_pane

0x409d,	// (0x00042d84) bg_popup_sub_pane_cp14_ParamLimits

0x93e0,	// (0x000480c7) list_uniindi_pane_ParamLimits

0x93ec,	// (0x000480d3) uniindi_top_pane_ParamLimits

0x9488,	// (0x0004816f) list_single_uniindi_pane_g1_ParamLimits

0x949b,	// (0x00048182) list_single_uniindi_pane_t1_ParamLimits

0xce1a,	// (0x0004bb01) lc0_stat_clock_pane_ParamLimits

0xce1a,	// (0x0004bb01) lc0_stat_clock_pane

0xf1ea,	// (0x0004ded1) lc0_stat_indi_pane_g1_ParamLimits

0xf1ea,	// (0x0004ded1) lc0_stat_indi_pane_g1

0xf1f7,	// (0x0004dede) lc0_stat_indi_pane_g2_ParamLimits

0xf1f7,	// (0x0004dede) lc0_stat_indi_pane_g2

0x0001,

0x011f,	// (0x0003ee06) lc0_stat_indi_pane_g_ParamLimits

0x011f,	// (0x0003ee06) lc0_stat_indi_pane_g

0xce27,	// (0x0004bb0e) lc0_uni_indicator_pane_ParamLimits

0xce27,	// (0x0004bb0e) lc0_uni_indicator_pane

0xf204,	// (0x0004deeb) ls0_title_pane_g1_ParamLimits

0xf204,	// (0x0004deeb) ls0_title_pane_g1

0xf218,	// (0x0004deff) ls0_title_pane_t1_ParamLimits

0xf218,	// (0x0004deff) ls0_title_pane_t1

0xce34,	// (0x0004bb1b) lc0_uni_indicator_pane_g1_ParamLimits

0xce34,	// (0x0004bb1b) lc0_uni_indicator_pane_g1

0xa02a,	// (0x00048d11) lc0_stat_clock_pane_t1

0x372b,	// (0x00042412) main_ai5_pane

0xa038,	// (0x00048d1f) ai5_sk_pane_ParamLimits

0xa038,	// (0x00048d1f) ai5_sk_pane

0xf246,	// (0x0004df2d) cell_ai5_widget_pane_ParamLimits

0xf246,	// (0x0004df2d) cell_ai5_widget_pane

0xa10f,	// (0x00048df6) aid_size_cell_widget_grid

0xa125,	// (0x00048e0c) bg_ai5_widget_pane_ParamLimits

0xa125,	// (0x00048e0c) bg_ai5_widget_pane

0xa199,	// (0x00048e80) cell_ai5_widget_pane_g2

0xa1a9,	// (0x00048e90) cell_ai5_widget_pane_g3

0xa1c0,	// (0x00048ea7) cell_ai5_widget_pane_g4

0xa1cc,	// (0x00048eb3) cell_ai5_widget_pane_g5

0xa1d8,	// (0x00048ebf) cell_ai5_widget_pane_g6

0xa1e4,	// (0x00048ecb) cell_ai5_widget_pane_g7

0xa22c,	// (0x00048f13) cell_ai5_widget_pane_t1_ParamLimits

0xa22c,	// (0x00048f13) cell_ai5_widget_pane_t1

0xa249,	// (0x00048f30) cell_ai5_widget_pane_t2_ParamLimits

0xa249,	// (0x00048f30) cell_ai5_widget_pane_t2

0xa261,	// (0x00048f48) cell_ai5_widget_pane_t3_ParamLimits

0xa261,	// (0x00048f48) cell_ai5_widget_pane_t3

0xa279,	// (0x00048f60) cell_ai5_widget_pane_t4_ParamLimits

0xa279,	// (0x00048f60) cell_ai5_widget_pane_t4

0xa296,	// (0x00048f7d) cell_ai5_widget_pane_t5_ParamLimits

0xa296,	// (0x00048f7d) cell_ai5_widget_pane_t5

0xa2b5,	// (0x00048f9c) cell_ai5_widget_pane_t6_ParamLimits

0xa2b5,	// (0x00048f9c) cell_ai5_widget_pane_t6

0xa2c7,	// (0x00048fae) cell_ai5_widget_pane_t7_ParamLimits

0xa2c7,	// (0x00048fae) cell_ai5_widget_pane_t7

0xa2e0,	// (0x00048fc7) cell_ai5_widget_pane_t8_ParamLimits

0xa2e0,	// (0x00048fc7) cell_ai5_widget_pane_t8

0x0009,

0xfe0e,	// (0x0004eaf5) cell_ai5_widget_pane_t_ParamLimits

0xfe0e,	// (0x0004eaf5) cell_ai5_widget_pane_t

0xa334,	// (0x0004901b) grid_ai5_widget_pane

0x409d,	// (0x00042d84) highlight_cell_ai5_widget_pane_ParamLimits

0x409d,	// (0x00042d84) highlight_cell_ai5_widget_pane

0xf2b0,	// (0x0004df97) ai5_sk_left_pane

0xf2ba,	// (0x0004dfa1) ai5_sk_middle_pane

0xf2c4,	// (0x0004dfab) ai5_sk_right_pane

0xa36a,	// (0x00049051) bg_ai5_widget_pane_g1_ParamLimits

0xa36a,	// (0x00049051) bg_ai5_widget_pane_g1

0xa376,	// (0x0004905d) bg_ai5_widget_pane_g2_ParamLimits

0xa376,	// (0x0004905d) bg_ai5_widget_pane_g2

0xa382,	// (0x00049069) bg_ai5_widget_pane_g3_ParamLimits

0xa382,	// (0x00049069) bg_ai5_widget_pane_g3

0xa38e,	// (0x00049075) bg_ai5_widget_pane_g4_ParamLimits

0xa38e,	// (0x00049075) bg_ai5_widget_pane_g4

0xa39a,	// (0x00049081) bg_ai5_widget_pane_g5_ParamLimits

0xa39a,	// (0x00049081) bg_ai5_widget_pane_g5

0xa3a6,	// (0x0004908d) bg_ai5_widget_pane_g6_ParamLimits

0xa3a6,	// (0x0004908d) bg_ai5_widget_pane_g6

0xa3b2,	// (0x00049099) bg_ai5_widget_pane_g7_ParamLimits

0xa3b2,	// (0x00049099) bg_ai5_widget_pane_g7

0xa3be,	// (0x000490a5) bg_ai5_widget_pane_g8_ParamLimits

0xa3be,	// (0x000490a5) bg_ai5_widget_pane_g8

0xa3ca,	// (0x000490b1) bg_ai5_widget_pane_g9_ParamLimits

0xa3ca,	// (0x000490b1) bg_ai5_widget_pane_g9

0x0008,

0xfe23,	// (0x0004eb0a) bg_ai5_widget_pane_g_ParamLimits

0xfe23,	// (0x0004eb0a) bg_ai5_widget_pane_g

0xa3fc,	// (0x000490e3) cell_shortcut_ai5_widget_pane_ParamLimits

0xa3fc,	// (0x000490e3) cell_shortcut_ai5_widget_pane

0x4cf1,	// (0x000439d8) bg_cell_shortcut_ai5_widget_pane

0xa40d,	// (0x000490f4) cell_grid_ai5_widget_pane_g1

0x4cf1,	// (0x000439d8) highlight_cell_shortcut_ai5_widget_pane

0x5545,	// (0x0004422c) ai5_sk_left_pane_g1

0xa416,	// (0x000490fd) ai5_sk_left_pane_g2

0xa41e,	// (0x00049105) ai5_sk_left_pane_g3

0xa426,	// (0x0004910d) ai5_sk_left_pane_g4

0x0003,

0xfe36,	// (0x0004eb1d) ai5_sk_left_pane_g

0xa42e,	// (0x00049115) ai5_sk_left_pane_t1

0x553d,	// (0x00044224) ai5_sk_right_pane_g1

0xa43c,	// (0x00049123) ai5_sk_right_pane_g2

0xa444,	// (0x0004912b) ai5_sk_right_pane_g3

0xa44c,	// (0x00049133) ai5_sk_right_pane_g4

0x0003,

0xfe3f,	// (0x0004eb26) ai5_sk_right_pane_g

0xa454,	// (0x0004913b) ai5_sk_right_pane_t1

0x553d,	// (0x00044224) ai5_sk_middle_pane_g1

0x5545,	// (0x0004422c) ai5_sk_middle_pane_g2

0x555d,	// (0x00044244) ai5_sk_middle_pane_g3

0xa444,	// (0x0004912b) ai5_sk_middle_pane_g4

0xa41e,	// (0x00049105) ai5_sk_middle_pane_g5

0xa462,	// (0x00049149) ai5_sk_middle_pane_g6

0xf2ce,	// (0x0004dfb5) ai5_sk_middle_pane_g7

0x0006,

0xfe48,	// (0x0004eb2f) ai5_sk_middle_pane_g

0xd77a,	// (0x0004c461) aid_touch_area_size_lc0_ParamLimits

0xd77a,	// (0x0004c461) aid_touch_area_size_lc0

0x298e,	// (0x00041675) cell_hwr_candidate_pane_t1_ParamLimits

0x508d,	// (0x00043d74) aid_touch_navi_pane

0xda06,	// (0x0004c6ed) status_dt_navi_pane_ParamLimits

0xda06,	// (0x0004c6ed) status_dt_navi_pane

0xda1e,	// (0x0004c705) status_dt_sta_pane_ParamLimits

0xda1e,	// (0x0004c705) status_dt_sta_pane

0xf2d6,	// (0x0004dfbd) dt_sta_controll_pane

0xf2e3,	// (0x0004dfca) dt_sta_indi_pane

0xf2f0,	// (0x0004dfd7) dt_sta_title_pane

0x3aa8,	// (0x0004278f) bg_dt_sta_indi_pane_ParamLimits

0x3aa8,	// (0x0004278f) bg_dt_sta_indi_pane

0xa4a3,	// (0x0004918a) dt_sta_battery_pane

0xf302,	// (0x0004dfe9) dt_sta_indi_pane_g1

0xf30b,	// (0x0004dff2) dt_sta_indi_pane_g2

0xf314,	// (0x0004dffb) dt_sta_indi_pane_g3

0x0002,

0x0182,	// (0x0003ee69) dt_sta_indi_pane_g

0xf31d,	// (0x0004e004) dt_sta_signal_pane

0x409d,	// (0x00042d84) bg_dt_sta_title_pane_ParamLimits

0x409d,	// (0x00042d84) bg_dt_sta_title_pane

0xa4cf,	// (0x000491b6) dt_sta_title_pane_g1

0xf326,	// (0x0004e00d) dt_sta_title_pane_t1_ParamLimits

0xf326,	// (0x0004e00d) dt_sta_title_pane_t1

0x372b,	// (0x00042412) bg_dt_sta_control_pane

0xf33b,	// (0x0004e022) dt_sta_controll_pane_g1

0xa4f5,	// (0x000491dc) bg_dt_sta_title_pane_g1

0xa4fe,	// (0x000491e5) bg_dt_sta_title_pane_g2

0xa507,	// (0x000491ee) bg_dt_sta_title_pane_g3

0x0002,

0xfe57,	// (0x0004eb3e) bg_dt_sta_title_pane_g

0x7af0,	// (0x000467d7) bg_dt_sta_indi_pane_g1

0xa510,	// (0x000491f7) dt_sta_signal_pane_g1

0xa518,	// (0x000491ff) dt_sta_signal_pane_g2

0x0001,

0xfe5e,	// (0x0004eb45) dt_sta_signal_pane_g

0xa520,	// (0x00049207) dt_sta_battery_pane_g1

0xa529,	// (0x00049210) dt_sta_battery_pane_t1

0x7af0,	// (0x000467d7) bg_dt_sta_control_pane_g1

0x47f3,	// (0x000434da) fep_china_uni_eep_pane

0x47fb,	// (0x000434e2) fep_china_uni_entry_pane_ParamLimits

0x480b,	// (0x000434f2) popup_fep_china_uni_window_g1_ParamLimits

0x481b,	// (0x00043502) popup_fep_china_uni_window_g2_ParamLimits

0x481b,	// (0x00043502) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0004e404) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0004e404) popup_fep_china_uni_window_g

0xa538,	// (0x0004921f) fep_china_uni_eep_pane_g1

0xa540,	// (0x00049227) fep_china_uni_eep_pane_t1

0x9fa7,	// (0x00048c8e) aid_touch_area_size_smil_player

0x51d9,	// (0x00043ec0) lc0_clock_pane

0x53c4,	// (0x000440ab) status_pane_g5_ParamLimits

0x53c4,	// (0x000440ab) status_pane_g5

0xc2d6,	// (0x0004afbd) popup_keymap_window

0x538a,	// (0x00044071) status_icon_pane

0xa1a9,	// (0x00048e90) cell_ai5_widget_pane_g3_ParamLimits

0xa1c0,	// (0x00048ea7) cell_ai5_widget_pane_g4_ParamLimits

0xa1cc,	// (0x00048eb3) cell_ai5_widget_pane_g5_ParamLimits

0xa1f0,	// (0x00048ed7) cell_ai5_widget_pane_g8_ParamLimits

0xa1f0,	// (0x00048ed7) cell_ai5_widget_pane_g8

0xa204,	// (0x00048eeb) cell_ai5_widget_pane_g9_ParamLimits

0xa204,	// (0x00048eeb) cell_ai5_widget_pane_g9

0xa218,	// (0x00048eff) cell_ai5_widget_pane_g10_ParamLimits

0xa218,	// (0x00048eff) cell_ai5_widget_pane_g10

0xa54f,	// (0x00049236) status_icon_pane_g1

0x372b,	// (0x00042412) bg_popup_sub_pane_cp13

0xa557,	// (0x0004923e) popup_keymap_window_t1

0xd708,	// (0x0004c3ef) control_pane_g6_ParamLimits

0xd708,	// (0x0004c3ef) control_pane_g6

0xd715,	// (0x0004c3fc) control_pane_g7_ParamLimits

0xd715,	// (0x0004c3fc) control_pane_g7

0xd722,	// (0x0004c409) control_pane_g8_ParamLimits

0xd722,	// (0x0004c409) control_pane_g8

0xf2d6,	// (0x0004dfbd) dt_sta_controll_pane_ParamLimits

0xf2e3,	// (0x0004dfca) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0004dfd7) dt_sta_title_pane_ParamLimits

0x3fb1,	// (0x00042c98) aid_size_touch_scroll_bar_cale

0x130c,	// (0x0003fff3) popup_discreet_window_ParamLimits

0x130c,	// (0x0003fff3) popup_discreet_window

0xbed9,	// (0x0004abc0) popup_sk_window

0x5bbb,	// (0x000448a2) bg_popup_sub_pane_cp28_ParamLimits

0x5bbb,	// (0x000448a2) bg_popup_sub_pane_cp28

0xa565,	// (0x0004924c) popup_discreet_window_g1_ParamLimits

0xa565,	// (0x0004924c) popup_discreet_window_g1

0xa585,	// (0x0004926c) popup_discreet_window_t1_ParamLimits

0xa585,	// (0x0004926c) popup_discreet_window_t1

0xa5a3,	// (0x0004928a) popup_discreet_window_t2_ParamLimits

0xa5a3,	// (0x0004928a) popup_discreet_window_t2

0x0002,

0xfe63,	// (0x0004eb4a) popup_discreet_window_t_ParamLimits

0xfe63,	// (0x0004eb4a) popup_discreet_window_t

0x33d4,	// (0x000420bb) popup_sk_window_g1

0x33de,	// (0x000420c5) popup_sk_window_g2

0x0001,

0xfe6a,	// (0x0004eb51) popup_sk_window_g

0x33e8,	// (0x000420cf) popup_sk_window_t1

0x33f6,	// (0x000420dd) popup_sk_window_t1_copy1

0xa199,	// (0x00048e80) cell_ai5_widget_pane_g2_ParamLimits

0xa2f2,	// (0x00048fd9) cell_ai5_widget_pane_t9_ParamLimits

0xa2f2,	// (0x00048fd9) cell_ai5_widget_pane_t9

0x372b,	// (0x00042412) main_fep_fshwr2_pane

0xce62,	// (0x0004bb49) aid_fshwr2_btn_pane

0xce73,	// (0x0004bb5a) aid_fshwr2_syb_pane

0xce84,	// (0x0004bb6b) aid_fshwr2_txt_pane

0xce90,	// (0x0004bb77) fshwr2_func_candi_pane

0xceaf,	// (0x0004bb96) fshwr2_hwr_syb_pane

0xceca,	// (0x0004bbb1) fshwr2_icf_pane

0x372b,	// (0x00042412) fshwr2_icf_bg_pane

0xcef3,	// (0x0004bbda) fshwr2_icf_pane_t1_ParamLimits

0xcef3,	// (0x0004bbda) fshwr2_icf_pane_t1

0x46e5,	// (0x000433cc) fshwr2_func_candi_pane_g1

0xf344,	// (0x0004e02b) fshwr2_func_candi_row_pane_ParamLimits

0xf344,	// (0x0004e02b) fshwr2_func_candi_row_pane

0xcf0c,	// (0x0004bbf3) cell_fshwr2_syb_pane_ParamLimits

0xcf0c,	// (0x0004bbf3) cell_fshwr2_syb_pane

0x7d5e,	// (0x00046a45) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7d5e,	// (0x00046a45) fshwr2_hwr_syb_pane_g1

0x372b,	// (0x00042412) bg_popup_call_pane_cp01

0xcf22,	// (0x0004bc09) fshwr2_func_candi_cell_pane_ParamLimits

0xcf22,	// (0x0004bc09) fshwr2_func_candi_cell_pane

0xf354,	// (0x0004e03b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf354,	// (0x0004e03b) fshwr2_func_candi_cell_bg_pane

0xcf57,	// (0x0004bc3e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf57,	// (0x0004bc3e) fshwr2_func_candi_cell_pane_g1

0xcf86,	// (0x0004bc6d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf86,	// (0x0004bc6d) fshwr2_func_candi_cell_pane_t1

0x372b,	// (0x00042412) bg_button_pane_cp08

0x6ed7,	// (0x00045bbe) cell_fshwr2_syb_bg_pane

0xcf99,	// (0x0004bc80) cell_fshwr2_syb_bg_pane_g1

0xcfa1,	// (0x0004bc88) cell_fshwr2_syb_bg_pane_t1

0x409d,	// (0x00042d84) main_tmo_pane

0xdd00,	// (0x0004c9e7) uni_indicator_pane_g1_ParamLimits

0xdd16,	// (0x0004c9fd) uni_indicator_pane_g2_ParamLimits

0xdd2c,	// (0x0004ca13) uni_indicator_pane_g3_ParamLimits

0x6711,	// (0x000453f8) uni_indicator_pane_g4_ParamLimits

0x6711,	// (0x000453f8) uni_indicator_pane_g4

0x6725,	// (0x0004540c) uni_indicator_pane_g5_ParamLimits

0x6725,	// (0x0004540c) uni_indicator_pane_g5

0x6725,	// (0x0004540c) uni_indicator_pane_g6_ParamLimits

0x6725,	// (0x0004540c) uni_indicator_pane_g6

0xf91c,	// (0x0004e603) uni_indicator_pane_g_ParamLimits

0xe6cc,	// (0x0004d3b3) popup_tmo_note_window_ParamLimits

0xe6cc,	// (0x0004d3b3) popup_tmo_note_window

0x409d,	// (0x00042d84) fshwr2_bg_pane

0xcf77,	// (0x0004bc5e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf77,	// (0x0004bc5e) fshwr2_func_candi_cell_pane_g2

0x0001,

0x01a1,	// (0x0003ee88) fshwr2_func_candi_cell_pane_g_ParamLimits

0x01a1,	// (0x0003ee88) fshwr2_func_candi_cell_pane_g

0x7af0,	// (0x000467d7) bg_popup_window_pane_cp01

0x3523,	// (0x0004220a) bg_popup_window_pane_g1_cp01

0xa605,	// (0x000492ec) bg_popup_window_pane_cp22_ParamLimits

0xa605,	// (0x000492ec) bg_popup_window_pane_cp22

0xa613,	// (0x000492fa) listscroll_tmo_link_pane_ParamLimits

0xa613,	// (0x000492fa) listscroll_tmo_link_pane

0xa653,	// (0x0004933a) popup_tmo_note_window_g1_ParamLimits

0xa653,	// (0x0004933a) popup_tmo_note_window_g1

0xa660,	// (0x00049347) tmo_note_info_pane_ParamLimits

0xa660,	// (0x00049347) tmo_note_info_pane

0xf360,	// (0x0004e047) list_tmo_note_info_pane_g1_ParamLimits

0xf360,	// (0x0004e047) list_tmo_note_info_pane_g1

0xa691,	// (0x00049378) list_tmo_note_info_pane_g2_ParamLimits

0xa691,	// (0x00049378) list_tmo_note_info_pane_g2

0x0001,

0xfe6f,	// (0x0004eb56) list_tmo_note_info_pane_g_ParamLimits

0xfe6f,	// (0x0004eb56) list_tmo_note_info_pane_g

0xa6ad,	// (0x00049394) list_tmo_note_info_text_pane_ParamLimits

0xa6ad,	// (0x00049394) list_tmo_note_info_text_pane

0xa730,	// (0x00049417) list_tmo_link_pane

0xa73d,	// (0x00049424) scroll_pane_cp20

0xa74a,	// (0x00049431) list_single_tmo_link_pane_ParamLimits

0xa74a,	// (0x00049431) list_single_tmo_link_pane

0xa75a,	// (0x00049441) list_single_tmo_link_pane_t1

0xa768,	// (0x0004944f) list_tmo_note_info_text_pane_t1_ParamLimits

0xa768,	// (0x0004944f) list_tmo_note_info_text_pane_t1

0xd35b,	// (0x0004c042) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd35b,	// (0x0004c042) aid_size_touch_scroll_bar_cp01

0xbb32,	// (0x0004a819) aid_size_touch_slider_marker

0xbec9,	// (0x0004abb0) popup_settings_window_ParamLimits

0xbec9,	// (0x0004abb0) popup_settings_window

0x095e,	// (0x0003f645) popup_candi_list_indi_window

0x508d,	// (0x00043d74) aid_touch_navi_pane_ParamLimits

0x2be2,	// (0x000418c9) rs_clock_indi_pane

0x2beb,	// (0x000418d2) sctrl_sk_bottom_pane_ParamLimits

0x2bfc,	// (0x000418e3) sctrl_sk_top_pane_ParamLimits

0x2ce3,	// (0x000419ca) popup_fep_tooltip_window

0xa10f,	// (0x00048df6) aid_size_cell_widget_grid_ParamLimits

0xa184,	// (0x00048e6b) cell_ai5_widget_pane_g1_ParamLimits

0xa184,	// (0x00048e6b) cell_ai5_widget_pane_g1

0xa1d8,	// (0x00048ebf) cell_ai5_widget_pane_g6_ParamLimits

0xa1e4,	// (0x00048ecb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdf9,	// (0x0004eae0) cell_ai5_widget_pane_g_ParamLimits

0xfdf9,	// (0x0004eae0) cell_ai5_widget_pane_g

0xa316,	// (0x00048ffd) cell_ai5_widget_pane_t10_ParamLimits

0xa316,	// (0x00048ffd) cell_ai5_widget_pane_t10

0xa334,	// (0x0004901b) grid_ai5_widget_pane_ParamLimits

0xa3d6,	// (0x000490bd) cell_contacts_ai5_widget_pane_ParamLimits

0xa3d6,	// (0x000490bd) cell_contacts_ai5_widget_pane

0xa5b8,	// (0x0004929f) popup_discreet_window_t3_ParamLimits

0xa5b8,	// (0x0004929f) popup_discreet_window_t3

0xcedf,	// (0x0004bbc6) popup_fshwr2_char_preview_window_ParamLimits

0xcedf,	// (0x0004bbc6) popup_fshwr2_char_preview_window

0xf377,	// (0x0004e05e) tmo_note_info_pane_t1

0xf38c,	// (0x0004e073) tmo_note_info_pane_t2

0xf3a5,	// (0x0004e08c) tmo_note_info_pane_t3

0xa70c,	// (0x000493f3) tmo_note_info_pane_t4

0xa71e,	// (0x00049405) tmo_note_info_pane_t5

0x0004,

0xfe74,	// (0x0004eb5b) tmo_note_info_pane_t

0xa730,	// (0x00049417) list_tmo_link_pane_ParamLimits

0xa73d,	// (0x00049424) scroll_pane_cp20_ParamLimits

0x372b,	// (0x00042412) bg_popup_fep_char_preview_window_cp01

0xa781,	// (0x00049468) popup_fshwr2_char_preview_window_t1

0xa78f,	// (0x00049476) popup_candi_list_indi_window_g1

0xa798,	// (0x0004947f) bg_cell_contacts_ai5_widget_pane

0xa7a4,	// (0x0004948b) cell_contacts_ai5_widget_pane_g1

0xa7b9,	// (0x000494a0) cell_contacts_ai5_widget_pane_g2

0xa7c5,	// (0x000494ac) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe7f,	// (0x0004eb66) cell_contacts_ai5_widget_pane_g

0xa7d1,	// (0x000494b8) cell_contacts_ai5_widget_pane_t1

0x409d,	// (0x00042d84) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3ba,	// (0x0004e0a1) settings_container_pane

0x4cf1,	// (0x000439d8) listscroll_set_pane_copy1

0x71c6,	// (0x00045ead) scroll_pane_cp121_copy1

0xa854,	// (0x0004953b) set_content_pane_copy1

0xf3c6,	// (0x0004e0ad) aid_height_set_list_copy1_ParamLimits

0xf3c6,	// (0x0004e0ad) aid_height_set_list_copy1

0x6918,	// (0x000455ff) aid_size_parent_copy1_ParamLimits

0x6918,	// (0x000455ff) aid_size_parent_copy1

0xf3d2,	// (0x0004e0b9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3d2,	// (0x0004e0b9) button_value_adjust_pane_cp6_copy1

0x502b,	// (0x00043d12) list_highlight_pane_cp2_copy1_ParamLimits

0x502b,	// (0x00043d12) list_highlight_pane_cp2_copy1

0xf3e6,	// (0x0004e0cd) list_set_pane_copy1_ParamLimits

0xf3e6,	// (0x0004e0cd) list_set_pane_copy1

0xa7e3,	// (0x000494ca) main_pane_set_t1_copy1_ParamLimits

0xa7e3,	// (0x000494ca) main_pane_set_t1_copy1

0xa81d,	// (0x00049504) main_pane_set_t2_copy1_ParamLimits

0xa81d,	// (0x00049504) main_pane_set_t2_copy1

0xa929,	// (0x00049610) main_pane_set_t3_copy1

0xa937,	// (0x0004961e) main_pane_set_t4_copy1

0xa83c,	// (0x00049523) set_content_pane_g1_copy1_ParamLimits

0xa83c,	// (0x00049523) set_content_pane_g1_copy1

0xf493,	// (0x0004e17a) setting_code_pane_copy1

0xa94d,	// (0x00049634) setting_slider_graphic_pane_copy1

0xa94d,	// (0x00049634) setting_slider_pane_copy1

0xa94d,	// (0x00049634) setting_text_pane_copy1

0xa94d,	// (0x00049634) setting_volume_pane_copy1

0xf493,	// (0x0004e17a) settings_code_pane_cp2_copy1

0xf49b,	// (0x0004e182) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0004e182) settings_code_pane_cp_copy1

0xcfb0,	// (0x0004bc97) volume_set_pane_copy1

0xf4af,	// (0x0004e196) volume_set_pane_g10_copy1

0xf4b7,	// (0x0004e19e) volume_set_pane_g1_copy1

0xf4bf,	// (0x0004e1a6) volume_set_pane_g2_copy1

0xf4c7,	// (0x0004e1ae) volume_set_pane_g3_copy1

0xf4cf,	// (0x0004e1b6) volume_set_pane_g4_copy1

0xf4d7,	// (0x0004e1be) volume_set_pane_g5_copy1

0xf4df,	// (0x0004e1c6) volume_set_pane_g6_copy1

0xf4e7,	// (0x0004e1ce) volume_set_pane_g7_copy1

0xf4ef,	// (0x0004e1d6) volume_set_pane_g8_copy1

0xf4f7,	// (0x0004e1de) volume_set_pane_g9_copy1

0x381f,	// (0x00042506) bg_set_opt_pane_cp_copy1_ParamLimits

0x381f,	// (0x00042506) bg_set_opt_pane_cp_copy1

0x3534,	// (0x0004221b) setting_slider_pane_t1_copy1_ParamLimits

0x3534,	// (0x0004221b) setting_slider_pane_t1_copy1

0xcfb8,	// (0x0004bc9f) setting_slider_pane_t2_copy1_ParamLimits

0xcfb8,	// (0x0004bc9f) setting_slider_pane_t2_copy1

0xcfd2,	// (0x0004bcb9) setting_slider_pane_t3_copy1_ParamLimits

0xcfd2,	// (0x0004bcb9) setting_slider_pane_t3_copy1

0xcfea,	// (0x0004bcd1) slider_set_pane_copy1_ParamLimits

0xcfea,	// (0x0004bcd1) slider_set_pane_copy1

0x40ec,	// (0x00042dd3) set_opt_bg_pane_g1_copy2

0x40f4,	// (0x00042ddb) set_opt_bg_pane_g2_copy2

0xa9b9,	// (0x000496a0) set_opt_bg_pane_g3_copy2

0x4104,	// (0x00042deb) set_opt_bg_pane_g4_copy2

0x410c,	// (0x00042df3) set_opt_bg_pane_g5_copy2

0x4114,	// (0x00042dfb) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0004e1e6) set_opt_bg_pane_g7_copy2

0xa9cb,	// (0x000496b2) set_opt_bg_pane_g8_copy2

0xa9d5,	// (0x000496bc) set_opt_bg_pane_g9_copy2

0x359a,	// (0x00042281) aid_size_touch_slider_mark_copy1_ParamLimits

0x359a,	// (0x00042281) aid_size_touch_slider_mark_copy1

0xa9df,	// (0x000496c6) slider_set_pane_g1_copy1

0x35ae,	// (0x00042295) slider_set_pane_g2_copy1

0x245a,	// (0x00041141) slider_set_pane_g3_copy1_ParamLimits

0x245a,	// (0x00041141) slider_set_pane_g3_copy1

0x246e,	// (0x00041155) slider_set_pane_g4_copy1_ParamLimits

0x246e,	// (0x00041155) slider_set_pane_g4_copy1

0x2486,	// (0x0004116d) slider_set_pane_g5_copy1_ParamLimits

0x2486,	// (0x0004116d) slider_set_pane_g5_copy1

0x245a,	// (0x00041141) slider_set_pane_g6_copy1_ParamLimits

0x245a,	// (0x00041141) slider_set_pane_g6_copy1

0x35b6,	// (0x0004229d) slider_set_pane_g7_copy1_ParamLimits

0x35b6,	// (0x0004229d) slider_set_pane_g7_copy1

0x373f,	// (0x00042426) bg_set_opt_pane_cp2_copy1

0xa9e8,	// (0x000496cf) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0004e1ee) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0004e1fe) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0004e20e) slider_set_pane_cp_copy1

0xaa21,	// (0x00049708) input_focus_pane_cp1_copy1

0xaa2a,	// (0x00049711) list_set_text_pane_copy1

0xaa32,	// (0x00049719) setting_text_pane_g1_copy1

0x1082,	// (0x0003fd69) set_text_pane_t1_copy1

0xaa21,	// (0x00049708) input_focus_pane_cp2_copy1

0xaa32,	// (0x00049719) setting_code_pane_g1_copy1

0xf52f,	// (0x0004e216) setting_code_pane_t1_copy1

0x6ffa,	// (0x00045ce1) list_set_graphic_pane_copy1

0x373f,	// (0x00042426) bg_set_opt_pane_cp4_copy1

0xd581,	// (0x0004c268) list_set_graphic_pane_g1_copy1_ParamLimits

0xd581,	// (0x0004c268) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0004e224) list_set_graphic_pane_g2_copy1

0xd599,	// (0x0004c280) list_set_graphic_pane_t1_copy1_ParamLimits

0xd599,	// (0x0004c280) list_set_graphic_pane_t1_copy1

0x7af0,	// (0x000467d7) rs_clock_indi_pane_g1

0xaa65,	// (0x0004974c) rs_clock_indi_pane_t1

0xaa73,	// (0x0004975a) rs_indi_pane

0xaa7b,	// (0x00049762) rs_indi_pane_g1

0xaa84,	// (0x0004976b) rs_indi_pane_g2

0xaa8d,	// (0x00049774) rs_indi_pane_g3

0x0002,

0xfe86,	// (0x0004eb6d) rs_indi_pane_g

0x4cf1,	// (0x000439d8) bg_popup_preview_window_pane_cp03

0xaa96,	// (0x0004977d) popup_fep_tooltip_window_t1

0x876c,	// (0x00047453) popup_note2_window_g2_ParamLimits

0x876c,	// (0x00047453) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0004e947) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0004e947) popup_note2_window_g

0x8c68,	// (0x0004794f) bg_popup_sub_pane_cp11_ParamLimits

0x8c75,	// (0x0004795c) cell_ai3_links_pane_g1_ParamLimits

0x8c8c,	// (0x00047973) cell_ai3_links_pane_t1

0x1082,	// (0x0003fd69) set_text_pane_t1_copy1_ParamLimits

0x4c02,	// (0x000438e9) cell_graphic_popup_pane_cp2_ParamLimits

0x4c02,	// (0x000438e9) cell_graphic_popup_pane_cp2

0xaaa4,	// (0x0004978b) cell_graphic_popup_pane_g1_cp2

0x3dc4,	// (0x00042aab) cell_graphic_popup_pane_g2_cp2

0xaaac,	// (0x00049793) cell_graphic_popup_pane_g3_cp2

0xaab4,	// (0x0004979b) cell_graphic_popup_pane_t2_cp2

0x3dd5,	// (0x00042abc) grid_highlight_pane_cp3_cp2

0x442c,	// (0x00043113) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x409d,	// (0x00042d84) main_tmo_pane_ParamLimits

0xe6c0,	// (0x0004d3a7) popup_tmo_big_image_note_window

0xa173,	// (0x00048e5a) cell_ai5_widget_list_pane

0xa17b,	// (0x00048e62) cell_ai5_widget_lrg_icon_pane

0xf377,	// (0x0004e05e) tmo_note_info_pane_t1_ParamLimits

0xf38c,	// (0x0004e073) tmo_note_info_pane_t2_ParamLimits

0xf3a5,	// (0x0004e08c) tmo_note_info_pane_t3_ParamLimits

0xa70c,	// (0x000493f3) tmo_note_info_pane_t4_ParamLimits

0xa71e,	// (0x00049405) tmo_note_info_pane_t5_ParamLimits

0xfe74,	// (0x0004eb5b) tmo_note_info_pane_t_ParamLimits

0xf3ba,	// (0x0004e0a1) settings_container_pane_ParamLimits

0xaa19,	// (0x00049700) indicator_popup_pane_cp5

0xaa19,	// (0x00049700) indicator_popup_pane_cp6

0x6ffa,	// (0x00045ce1) list_set_graphic_pane_copy1_ParamLimits

0x372b,	// (0x00042412) bg_popup_window_pane_cp23

0xaac2,	// (0x000497a9) popup_tmo_big_image_note_window_g1

0xaacb,	// (0x000497b2) popup_tmo_big_image_note_window_t1

0xaadb,	// (0x000497c2) popup_tmo_big_image_note_window_t2

0xaaeb,	// (0x000497d2) popup_tmo_big_image_note_window_t3

0x0002,

0xfe8d,	// (0x0004eb74) popup_tmo_big_image_note_window_t

0x7af0,	// (0x000467d7) cell_ai5_widget_lrg_icon_pane_g1

0xaafb,	// (0x000497e2) cell_ai5_widget_lrg_icon_pane_t1

0xab09,	// (0x000497f0) cell_ai5_widget_list_row_pane_ParamLimits

0xab09,	// (0x000497f0) cell_ai5_widget_list_row_pane

0xab20,	// (0x00049807) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab20,	// (0x00049807) cell_ai5_widget_list_row_pane_g1

0xab2d,	// (0x00049814) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab2d,	// (0x00049814) cell_ai5_widget_list_row_pane_t1

0xab5b,	// (0x00049842) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xab5b,	// (0x00049842) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfe94,	// (0x0004eb7b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe94,	// (0x0004eb7b) cell_ai5_widget_list_row_pane_t

0x372b,	// (0x00042412) main_fep_vtchi_ss_pane

0xab9f,	// (0x00049886) popup_fep_char_pre_window

0xaba7,	// (0x0004988e) popup_fep_ituss_window

0xabc8,	// (0x000498af) popup_fep_vkbss_window

0xabe7,	// (0x000498ce) grid_vkbss_keypad_pane_ParamLimits

0xabe7,	// (0x000498ce) grid_vkbss_keypad_pane

0xabf7,	// (0x000498de) ituss_keypad_pane

0x35d8,	// (0x000422bf) aid_vkbss_key_offset_ParamLimits

0x35d8,	// (0x000422bf) aid_vkbss_key_offset

0x35e4,	// (0x000422cb) cell_vkbss_key_pane_ParamLimits

0x35e4,	// (0x000422cb) cell_vkbss_key_pane

0x539e,	// (0x00044085) bg_cell_vkbss_key_g1_ParamLimits

0x539e,	// (0x00044085) bg_cell_vkbss_key_g1

0xac06,	// (0x000498ed) cell_vkbss_key_3p_pane_ParamLimits

0xac06,	// (0x000498ed) cell_vkbss_key_3p_pane

0xac20,	// (0x00049907) cell_vkbss_key_g1_ParamLimits

0xac20,	// (0x00049907) cell_vkbss_key_g1

0xac3a,	// (0x00049921) cell_vkbss_key_t1_ParamLimits

0xac3a,	// (0x00049921) cell_vkbss_key_t1

0x35fa,	// (0x000422e1) cell_ituss_key_pane_ParamLimits

0x35fa,	// (0x000422e1) cell_ituss_key_pane

0xac65,	// (0x0004994c) bg_cell_ituss_key_g1_ParamLimits

0xac65,	// (0x0004994c) bg_cell_ituss_key_g1

0xac71,	// (0x00049958) cell_ituss_key_pane_g1_ParamLimits

0xac71,	// (0x00049958) cell_ituss_key_pane_g1

0x360b,	// (0x000422f2) cell_ituss_key_pane_g2_ParamLimits

0x360b,	// (0x000422f2) cell_ituss_key_pane_g2

0x0002,

0xfe9b,	// (0x0004eb82) cell_ituss_key_pane_g_ParamLimits

0xfe9b,	// (0x0004eb82) cell_ituss_key_pane_g

0x3637,	// (0x0004231e) cell_ituss_key_t1_ParamLimits

0x3637,	// (0x0004231e) cell_ituss_key_t1

0x3671,	// (0x00042358) cell_ituss_key_t2_ParamLimits

0x3671,	// (0x00042358) cell_ituss_key_t2

0x36a2,	// (0x00042389) cell_ituss_key_t3_ParamLimits

0x36a2,	// (0x00042389) cell_ituss_key_t3

0x3671,	// (0x00042358) cell_ituss_key_t4_ParamLimits

0x3671,	// (0x00042358) cell_ituss_key_t4

0x0004,

0xfea2,	// (0x0004eb89) cell_ituss_key_t_ParamLimits

0xfea2,	// (0x0004eb89) cell_ituss_key_t

0xac97,	// (0x0004997e) cell_vkbss_key_3p_pane_g1

0xac9f,	// (0x00049986) cell_vkbss_key_3p_pane_g2

0xaca7,	// (0x0004998e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfead,	// (0x0004eb94) cell_vkbss_key_3p_pane_g

0x372b,	// (0x00042412) bg_popup_fep_char_preview_window_cp02

0x36e5,	// (0x000423cc) popup_fep_char_pre_window_t1

0xf2a6,	// (0x0004df8d) main_ai5_sk_pane

0xa798,	// (0x0004947f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa7a4,	// (0x0004948b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa7b9,	// (0x000494a0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa7c5,	// (0x000494ac) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe7f,	// (0x0004eb66) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa7d1,	// (0x000494b8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x409d,	// (0x00042d84) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0004e22c) main_ai5_sk_pane_g1

0x59f9,	// (0x000446e0) popup_query_code_window_g1

0xabbd,	// (0x000498a4) popup_fep_vkb_icf_pane

0xabd1,	// (0x000498b8) popup_fep_vtchi_icf_pane

0xacb8,	// (0x0004999f) bg_icf_pane

0xacc4,	// (0x000499ab) list_vkb_icf_pane

0xacd0,	// (0x000499b7) bg_icf_pane_cp01

0xace3,	// (0x000499ca) vtchi_icf_list_pane

0xacf3,	// (0x000499da) list_vkb_icf_pane_t1_ParamLimits

0xacf3,	// (0x000499da) list_vkb_icf_pane_t1

0xad0b,	// (0x000499f2) vtchi_icf_list_pane_t1_ParamLimits

0xad0b,	// (0x000499f2) vtchi_icf_list_pane_t1

0xaba7,	// (0x0004988e) popup_fep_ituss_window_ParamLimits

0xabd1,	// (0x000498b8) popup_fep_vtchi_icf_pane_ParamLimits

0xabf7,	// (0x000498de) ituss_keypad_pane_ParamLimits

0x35cc,	// (0x000422b3) ituss_sks_pane

0xacb8,	// (0x0004999f) bg_icf_pane_ParamLimits

0xab83,	// (0x0004986a) icf_edit_indi_pane_ParamLimits

0xab83,	// (0x0004986a) icf_edit_indi_pane

0xacc4,	// (0x000499ab) list_vkb_icf_pane_ParamLimits

0xacd0,	// (0x000499b7) bg_icf_pane_cp01_ParamLimits

0xab92,	// (0x00049879) icf_edit_indi_pane_cp01_ParamLimits

0xab92,	// (0x00049879) icf_edit_indi_pane_cp01

0xaceb,	// (0x000499d2) vtchi_query_pane

0x7d5e,	// (0x00046a45) icf_edit_indi_pane_g1_ParamLimits

0x7d5e,	// (0x00046a45) icf_edit_indi_pane_g1

0xad84,	// (0x00049a6b) icf_edit_indi_pane_g2_ParamLimits

0xad84,	// (0x00049a6b) icf_edit_indi_pane_g2

0x0001,

0xfec5,	// (0x0004ebac) icf_edit_indi_pane_g_ParamLimits

0xfec5,	// (0x0004ebac) icf_edit_indi_pane_g

0xad93,	// (0x00049a7a) icf_edit_indi_pane_t1

0xad2d,	// (0x00049a14) bg_input_focus_pane_cp042

0x3fa8,	// (0x00042c8f) vtchi_button_pane

0xad36,	// (0x00049a1d) vtchi_query_pane_t1

0xad44,	// (0x00049a2b) vtchi_query_pane_t2

0xad52,	// (0x00049a39) vtchi_query_pane_t3

0x0002,

0xfeb4,	// (0x0004eb9b) vtchi_query_pane_t

0x372b,	// (0x00042412) bg_button_pane_cp13

0xad60,	// (0x00049a47) vtchi_button_pane_g1

0x36f4,	// (0x000423db) ituss_sks_pane_g1

0x36ff,	// (0x000423e6) ituss_sks_pane_g2

0x0001,

0xfebb,	// (0x0004eba2) ituss_sks_pane_g

0xad68,	// (0x00049a4f) ituss_sks_pane_t1

0xad76,	// (0x00049a5d) ituss_sks_pane_t2

0x0001,

0xfec0,	// (0x0004eba7) ituss_sks_pane_t

0x753a,	// (0x00046221) indicator_nsta_pane_cp_g1

0x7543,	// (0x0004622a) indicator_nsta_pane_cp_g2

0x754b,	// (0x00046232) indicator_nsta_pane_cp_g3

0x7553,	// (0x0004623a) indicator_nsta_pane_cp_g4

0x755b,	// (0x00046242) indicator_nsta_pane_cp_g5

0x755b,	// (0x00046242) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0004e791) indicator_nsta_pane_cp_g

0xf0bb,	// (0x0004dda2) cell_graphic2_pane_t2_ParamLimits

0xf0bb,	// (0x0004dda2) cell_graphic2_pane_t2

0x0001,

0x00ad,	// (0x0003ed94) cell_graphic2_pane_t_ParamLimits

0x00ad,	// (0x0003ed94) cell_graphic2_pane_t

0xf0ee,	// (0x0004ddd5) cell_graphic2_control_pane_t1

0xd51b,	// (0x0004c202) signal_pane_g3_ParamLimits

0xd51b,	// (0x0004c202) signal_pane_g3

0xd52f,	// (0x0004c216) signal_pane_g4_ParamLimits

0xd52f,	// (0x0004c216) signal_pane_g4

0xab6d,	// (0x00049854) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xab6d,	// (0x00049854) cell_ai5_widget_list_row_pane_t3

0xac85,	// (0x0004996c) cell_ituss_key_pane_t1_ParamLimits

0xac85,	// (0x0004996c) cell_ituss_key_pane_t1

0x5637,	// (0x0004431e) form_field_data_wide_pane_vc_t2_ParamLimits

0x5637,	// (0x0004431e) form_field_data_wide_pane_vc_t2

0x564b,	// (0x00044332) form_field_data_wide_pane_vc_t3_ParamLimits

0x564b,	// (0x00044332) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0004e4eb) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0004e4eb) form_field_data_wide_pane_vc_t

0x7206,	// (0x00045eed) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7206,	// (0x00045eed) form_field_slider_wide_pane_vc_t3

0x72e0,	// (0x00045fc7) form_field_popup_wide_pane_vc_t2_ParamLimits

0x72e0,	// (0x00045fc7) form_field_popup_wide_pane_vc_t2

0x72f7,	// (0x00045fde) form_field_popup_wide_pane_vc_t3_ParamLimits

0x72f7,	// (0x00045fde) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0004e780) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0004e780) form_field_popup_wide_pane_vc_t

0xce62,	// (0x0004bb49) aid_fshwr2_btn_pane_ParamLimits

0xce73,	// (0x0004bb5a) aid_fshwr2_syb_pane_ParamLimits

0xce84,	// (0x0004bb6b) aid_fshwr2_txt_pane_ParamLimits

0x409d,	// (0x00042d84) fshwr2_bg_pane_ParamLimits

0xce90,	// (0x0004bb77) fshwr2_func_candi_pane_ParamLimits

0xceaf,	// (0x0004bb96) fshwr2_hwr_syb_pane_ParamLimits

0xceca,	// (0x0004bbb1) fshwr2_icf_pane_ParamLimits

0x2715,	// (0x000413fc) list_double_graphic_pane_vc_g4_ParamLimits

0x2715,	// (0x000413fc) list_double_graphic_pane_vc_g4

0x362b,	// (0x00042312) cell_ituss_key_pane_g3_ParamLimits

0x362b,	// (0x00042312) cell_ituss_key_pane_g3

0x36d3,	// (0x000423ba) cell_ituss_key_t5_ParamLimits

0x36d3,	// (0x000423ba) cell_ituss_key_t5
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
