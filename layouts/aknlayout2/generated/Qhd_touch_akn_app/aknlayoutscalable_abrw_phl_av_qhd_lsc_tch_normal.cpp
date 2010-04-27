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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f6f5 };

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
0xc6ec,	// (0x0001bde1) Screen

0xc6f8,	// (0x0001bded) application_window_ParamLimits

0xc6f8,	// (0x0001bded) application_window

0x24f9,	// (0x00011bee) screen_g1

0xb642,	// (0x0001ad37) area_bottom_pane_ParamLimits

0xb642,	// (0x0001ad37) area_bottom_pane

0x00e4,	// (0x0000f7d9) area_top_pane_ParamLimits

0x00e4,	// (0x0000f7d9) area_top_pane

0x0182,	// (0x0000f877) main_pane_ParamLimits

0x0182,	// (0x0000f877) main_pane

0x2503,	// (0x00011bf8) misc_graphics

0xd462,	// (0x0001cb57) battery_pane_ParamLimits

0xd462,	// (0x0001cb57) battery_pane

0x5456,	// (0x00014b4b) bg_status_flat_pane_g8

0x545e,	// (0x00014b53) bg_status_flat_pane_g9

0x472c,	// (0x00013e21) context_pane_ParamLimits

0x472c,	// (0x00013e21) context_pane

0xd5cd,	// (0x0001ccc2) navi_pane_ParamLimits

0xd5cd,	// (0x0001ccc2) navi_pane

0xd64b,	// (0x0001cd40) signal_pane_ParamLimits

0xd64b,	// (0x0001cd40) signal_pane

0x0008,

0xf86f,	// (0x0001ef64) bg_status_flat_pane_g

0xd6db,	// (0x0001cdd0) status_pane_g1_ParamLimits

0xd6db,	// (0x0001cdd0) status_pane_g1

0xd6f1,	// (0x0001cde6) status_pane_g2_ParamLimits

0xd6f1,	// (0x0001cde6) status_pane_g2

0x4953,	// (0x00014048) status_pane_g3_ParamLimits

0x4953,	// (0x00014048) status_pane_g3

0x0004,

0xf79b,	// (0x0001ee90) status_pane_g_ParamLimits

0xf79b,	// (0x0001ee90) status_pane_g

0xd6fd,	// (0x0001cdf2) title_pane_ParamLimits

0xd6fd,	// (0x0001cdf2) title_pane

0xd760,	// (0x0001ce55) uni_indicator_pane_ParamLimits

0xd760,	// (0x0001ce55) uni_indicator_pane

0x457e,	// (0x00013c73) bg_list_pane_ParamLimits

0x457e,	// (0x00013c73) bg_list_pane

0xd3ad,	// (0x0001caa2) find_pane

0xb99a,	// (0x0001b08f) listscroll_app_pane_ParamLimits

0xb99a,	// (0x0001b08f) listscroll_app_pane

0x45b2,	// (0x00013ca7) listscroll_form_pane

0xb9aa,	// (0x0001b09f) listscroll_gen_pane_ParamLimits

0xb9aa,	// (0x0001b09f) listscroll_gen_pane

0x0a69,	// (0x0001015e) listscroll_set_pane

0x600c,	// (0x00015701) main_idle_act_pane

0x4286,	// (0x0001397b) main_idle_trad_pane

0x4286,	// (0x0001397b) main_list_empty_pane

0x45cc,	// (0x00013cc1) main_midp_pane

0x45d8,	// (0x00013ccd) main_pane_g1_ParamLimits

0x45d8,	// (0x00013ccd) main_pane_g1

0xb9be,	// (0x0001b0b3) popup_ai_message_window_ParamLimits

0xb9be,	// (0x0001b0b3) popup_ai_message_window

0xba4f,	// (0x0001b144) popup_fep_china_uni_window_ParamLimits

0xba4f,	// (0x0001b144) popup_fep_china_uni_window

0x0b81,	// (0x00010276) popup_fep_japan_candidate_window_ParamLimits

0x0b81,	// (0x00010276) popup_fep_japan_candidate_window

0x0ba1,	// (0x00010296) popup_fep_japan_predictive_window_ParamLimits

0x0ba1,	// (0x00010296) popup_fep_japan_predictive_window

0xbaab,	// (0x0001b1a0) popup_find_window

0xbac8,	// (0x0001b1bd) popup_grid_graphic_window_ParamLimits

0xbac8,	// (0x0001b1bd) popup_grid_graphic_window

0x0c08,	// (0x000102fd) popup_large_graphic_colour_window

0xbb66,	// (0x0001b25b) popup_menu_window_ParamLimits

0xbb66,	// (0x0001b25b) popup_menu_window

0xbd38,	// (0x0001b42d) popup_note_image_window

0xbcfe,	// (0x0001b3f3) popup_note_wait_window_ParamLimits

0xbcfe,	// (0x0001b3f3) popup_note_wait_window

0xbd50,	// (0x0001b445) popup_note_window_ParamLimits

0xbd50,	// (0x0001b445) popup_note_window

0xbdf6,	// (0x0001b4eb) popup_query_code_window_ParamLimits

0xbdf6,	// (0x0001b4eb) popup_query_code_window

0x0e50,	// (0x00010545) popup_query_data_code_window_ParamLimits

0x0e50,	// (0x00010545) popup_query_data_code_window

0xbe30,	// (0x0001b525) popup_query_data_window_ParamLimits

0xbe30,	// (0x0001b525) popup_query_data_window

0xbeb2,	// (0x0001b5a7) popup_query_sat_info_window_ParamLimits

0xbeb2,	// (0x0001b5a7) popup_query_sat_info_window

0xbf49,	// (0x0001b63e) popup_snote_single_graphic_window_ParamLimits

0xbf49,	// (0x0001b63e) popup_snote_single_graphic_window

0xbf49,	// (0x0001b63e) popup_snote_single_text_window_ParamLimits

0xbf49,	// (0x0001b63e) popup_snote_single_text_window

0x0ed7,	// (0x000105cc) popup_sub_window_general

0x1007,	// (0x000106fc) popup_window_general_ParamLimits

0x1007,	// (0x000106fc) popup_window_general

0x45ee,	// (0x00013ce3) power_save_pane

0xb829,	// (0x0001af1e) control_pane_g1_ParamLimits

0xb829,	// (0x0001af1e) control_pane_g1

0xb852,	// (0x0001af47) control_pane_g2_ParamLimits

0xb852,	// (0x0001af47) control_pane_g2

0x4541,	// (0x00013c36) control_pane_g3_ParamLimits

0x4541,	// (0x00013c36) control_pane_g3

0x0007,

0xf783,	// (0x0001ee78) control_pane_g_ParamLimits

0xf783,	// (0x0001ee78) control_pane_g

0xb893,	// (0x0001af88) control_pane_t1_ParamLimits

0xb893,	// (0x0001af88) control_pane_t1

0xb8f1,	// (0x0001afe6) control_pane_t2_ParamLimits

0xb8f1,	// (0x0001afe6) control_pane_t2

0x0002,

0xf794,	// (0x0001ee89) control_pane_t_ParamLimits

0xf794,	// (0x0001ee89) control_pane_t

0xd2df,	// (0x0001c9d4) navi_navi_volume_pane_cp1

0xd2e7,	// (0x0001c9dc) status_small_icon_pane

0x4476,	// (0x00013b6b) status_small_pane_g1_ParamLimits

0x4476,	// (0x00013b6b) status_small_pane_g1

0xd2ef,	// (0x0001c9e4) status_small_pane_g2_ParamLimits

0xd2ef,	// (0x0001c9e4) status_small_pane_g2

0xd2fb,	// (0x0001c9f0) status_small_pane_g3_ParamLimits

0xd2fb,	// (0x0001c9f0) status_small_pane_g3

0xd307,	// (0x0001c9fc) status_small_pane_g4_ParamLimits

0xd307,	// (0x0001c9fc) status_small_pane_g4

0xd313,	// (0x0001ca08) status_small_pane_g5_ParamLimits

0xd313,	// (0x0001ca08) status_small_pane_g5

0xd321,	// (0x0001ca16) status_small_pane_g6_ParamLimits

0xd321,	// (0x0001ca16) status_small_pane_g6

0x0007,

0xf772,	// (0x0001ee67) status_small_pane_g_ParamLimits

0xf772,	// (0x0001ee67) status_small_pane_g

0xd350,	// (0x0001ca45) status_small_pane_t1

0xd372,	// (0x0001ca67) status_small_wait_pane_ParamLimits

0xd372,	// (0x0001ca67) status_small_wait_pane

0xd0f5,	// (0x0001c7ea) aid_levels_signal_ParamLimits

0xd0f5,	// (0x0001c7ea) aid_levels_signal

0xd10d,	// (0x0001c802) signal_pane_g1_ParamLimits

0xd10d,	// (0x0001c802) signal_pane_g1

0xd128,	// (0x0001c81d) signal_pane_g2_ParamLimits

0xd128,	// (0x0001c81d) signal_pane_g2

0x0003,

0xf703,	// (0x0001edf8) signal_pane_g_ParamLimits

0xf703,	// (0x0001edf8) signal_pane_g

0x3ccb,	// (0x000133c0) context_pane_g1

0xc708,	// (0x0001bdfd) title_pane_g1

0xc73f,	// (0x0001be34) title_pane_t1

0x25ab,	// (0x00011ca0) title_pane_t2

0x25d1,	// (0x00011cc6) title_pane_t3

0x0002,

0xf557,	// (0x0001ec4c) title_pane_t

0xd788,	// (0x0001ce7d) aid_levels_battery_ParamLimits

0xd788,	// (0x0001ce7d) aid_levels_battery

0xd7a4,	// (0x0001ce99) battery_pane_g1_ParamLimits

0xd7a4,	// (0x0001ce99) battery_pane_g1

0xd7c1,	// (0x0001ceb6) battery_pane_g2_ParamLimits

0xd7c1,	// (0x0001ceb6) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001ee9b) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001ee9b) battery_pane_g

0xd9a7,	// (0x0001d09c) uni_indicator_pane_g1

0xd9bd,	// (0x0001d0b2) uni_indicator_pane_g2

0xd9d3,	// (0x0001d0c8) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001f00c) uni_indicator_pane_g

0x40f8,	// (0x000137ed) navi_icon_pane_ParamLimits

0x40f8,	// (0x000137ed) navi_icon_pane

0x4036,	// (0x0001372b) navi_midp_pane

0x4114,	// (0x00013809) navi_navi_pane

0x411e,	// (0x00013813) navi_text_pane_ParamLimits

0x411e,	// (0x00013813) navi_text_pane

0x24f9,	// (0x00011bee) status_small_wait_pane_g1

0x2a1a,	// (0x0001210f) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001f007) status_small_wait_pane_g

0x5abd,	// (0x000151b2) navi_navi_icon_text_pane

0x5ac5,	// (0x000151ba) navi_navi_pane_g1_ParamLimits

0x5ac5,	// (0x000151ba) navi_navi_pane_g1

0x5ad7,	// (0x000151cc) navi_navi_pane_g2_ParamLimits

0x5ad7,	// (0x000151cc) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001efd5) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001efd5) navi_navi_pane_g

0x5ae9,	// (0x000151de) navi_navi_tabs_pane

0x5af2,	// (0x000151e7) navi_navi_text_pane

0x5abd,	// (0x000151b2) navi_navi_volume_pane

0x5a99,	// (0x0001518e) navi_text_pane_t1

0x5a8d,	// (0x00015182) navi_icon_pane_g1

0x59e0,	// (0x000150d5) navi_navi_text_pane_t1

0x131f,	// (0x00010a14) navi_navi_volume_pane_g1

0x1327,	// (0x00010a1c) volume_small_pane

0x5946,	// (0x0001503b) navi_navi_icon_text_pane_g1

0x594e,	// (0x00015043) navi_navi_icon_text_pane_t1

0x4114,	// (0x00013809) navi_tabs_2_long_pane

0x4114,	// (0x00013809) navi_tabs_2_pane

0x4114,	// (0x00013809) navi_tabs_3_long_pane

0x4114,	// (0x00013809) navi_tabs_3_pane

0x4114,	// (0x00013809) navi_tabs_4_pane

0x12ff,	// (0x000109f4) tabs_2_active_pane_ParamLimits

0x12ff,	// (0x000109f4) tabs_2_active_pane

0x130f,	// (0x00010a04) tabs_2_passive_pane_ParamLimits

0x130f,	// (0x00010a04) tabs_2_passive_pane

0x12cd,	// (0x000109c2) tabs_3_active_pane_ParamLimits

0x12cd,	// (0x000109c2) tabs_3_active_pane

0x12dd,	// (0x000109d2) tabs_3_passive_pane_ParamLimits

0x12dd,	// (0x000109d2) tabs_3_passive_pane

0x12ee,	// (0x000109e3) tabs_3_passive_pane_cp_ParamLimits

0x12ee,	// (0x000109e3) tabs_3_passive_pane_cp

0x1289,	// (0x0001097e) tabs_4_active_pane_ParamLimits

0x1289,	// (0x0001097e) tabs_4_active_pane

0x129a,	// (0x0001098f) tabs_4_passive_pane_ParamLimits

0x129a,	// (0x0001098f) tabs_4_passive_pane

0x12ab,	// (0x000109a0) tabs_4_passive_pane_cp_ParamLimits

0x12ab,	// (0x000109a0) tabs_4_passive_pane_cp

0x12bc,	// (0x000109b1) tabs_4_passive_pane_cp2_ParamLimits

0x12bc,	// (0x000109b1) tabs_4_passive_pane_cp2

0x1265,	// (0x0001095a) tabs_2_long_active_pane_ParamLimits

0x1265,	// (0x0001095a) tabs_2_long_active_pane

0x1277,	// (0x0001096c) tabs_2_long_passive_pane_ParamLimits

0x1277,	// (0x0001096c) tabs_2_long_passive_pane

0x1226,	// (0x0001091b) tabs_3_long_active_pane_ParamLimits

0x1226,	// (0x0001091b) tabs_3_long_active_pane

0x1239,	// (0x0001092e) tabs_3_long_passive_pane_ParamLimits

0x1239,	// (0x0001092e) tabs_3_long_passive_pane

0x1252,	// (0x00010947) tabs_3_long_passive_pane_cp_ParamLimits

0x1252,	// (0x00010947) tabs_3_long_passive_pane_cp

0x11cc,	// (0x000108c1) volume_small_pane_g1

0x11d5,	// (0x000108ca) volume_small_pane_g2

0x11de,	// (0x000108d3) volume_small_pane_g3

0x11e7,	// (0x000108dc) volume_small_pane_g4

0x11f0,	// (0x000108e5) volume_small_pane_g5

0x11f9,	// (0x000108ee) volume_small_pane_g6

0x1202,	// (0x000108f7) volume_small_pane_g7

0x120b,	// (0x00010900) volume_small_pane_g8

0x1214,	// (0x00010909) volume_small_pane_g9

0x121d,	// (0x00010912) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001efa1) volume_small_pane_g

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp2_ParamLimits

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp2

0x25f1,	// (0x00011ce6) tabs_3_active_pane_g1

0xc7cb,	// (0x0001bec0) tabs_3_active_pane_t1

0x2878,	// (0x00011f6d) bg_passive_tab_pane_cp2_ParamLimits

0x2878,	// (0x00011f6d) bg_passive_tab_pane_cp2

0x25f1,	// (0x00011ce6) tabs_3_passive_pane_g1

0xc7cb,	// (0x0001bec0) tabs_3_passive_pane_t1

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp3_ParamLimits

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp3

0x260b,	// (0x00011d00) tabs_4_active_pane_g1

0xc7dd,	// (0x0001bed2) tabs_4_active_pane_t1

0x2878,	// (0x00011f6d) bg_passive_tab_pane_cp3_ParamLimits

0x2878,	// (0x00011f6d) bg_passive_tab_pane_cp3

0x260b,	// (0x00011d00) tabs_4_1_passive_pane_g1

0xc7dd,	// (0x0001bed2) tabs_4_1_passive_pane_t1

0x45cc,	// (0x00013cc1) list_highlight_pane_cp2

0xda6d,	// (0x0001d162) list_set_pane_ParamLimits

0xda6d,	// (0x0001d162) list_set_pane

0xdb07,	// (0x0001d1fc) main_pane_set_t1_ParamLimits

0xdb07,	// (0x0001d1fc) main_pane_set_t1

0xdb27,	// (0x0001d21c) main_pane_set_t2_ParamLimits

0xdb27,	// (0x0001d21c) main_pane_set_t2

0xdb3b,	// (0x0001d230) main_pane_set_t3_ParamLimits

0xdb3b,	// (0x0001d230) main_pane_set_t3

0xdb4d,	// (0x0001d242) main_pane_set_t4_ParamLimits

0xdb4d,	// (0x0001d242) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001f071) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001f071) main_pane_set_t

0xdb5f,	// (0x0001d254) setting_code_pane

0xdb69,	// (0x0001d25e) setting_slider_graphic_pane

0xdb69,	// (0x0001d25e) setting_slider_pane

0xdb69,	// (0x0001d25e) setting_text_pane

0xdb69,	// (0x0001d25e) setting_volume_pane

0x03d1,	// (0x0000fac6) volume_set_pane

0x25e3,	// (0x00011cd8) bg_set_opt_pane_cp

0x03d9,	// (0x0000face) setting_slider_pane_t1

0x03f2,	// (0x0000fae7) setting_slider_pane_t2

0x040c,	// (0x0000fb01) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001ec53) setting_slider_pane_t

0x0424,	// (0x0000fb19) slider_set_pane

0x2503,	// (0x00011bf8) bg_set_opt_pane_cp2

0x2625,	// (0x00011d1a) setting_slider_graphic_pane_g1

0x043a,	// (0x0000fb2f) setting_slider_graphic_pane_t1

0x044a,	// (0x0000fb3f) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001ec5a) setting_slider_graphic_pane_t

0x045a,	// (0x0000fb4f) slider_set_pane_cp

0x2503,	// (0x00011bf8) input_focus_pane_cp1

0x5ff3,	// (0x000156e8) list_set_text_pane

0x24f9,	// (0x00011bee) setting_text_pane_g1

0x2503,	// (0x00011bf8) input_focus_pane_cp2

0x24f9,	// (0x00011bee) setting_code_pane_g1

0x262e,	// (0x00011d23) setting_code_pane_t1

0x263c,	// (0x00011d31) set_text_pane_t1_ParamLimits

0x263c,	// (0x00011d31) set_text_pane_t1

0x3510,	// (0x00012c05) set_opt_bg_pane_g1

0x3518,	// (0x00012c0d) set_opt_bg_pane_g2

0x5fcd,	// (0x000156c2) set_opt_bg_pane_g3

0x3528,	// (0x00012c1d) set_opt_bg_pane_g4

0x3530,	// (0x00012c25) set_opt_bg_pane_g5

0x3538,	// (0x00012c2d) set_opt_bg_pane_g6

0x5fd7,	// (0x000156cc) set_opt_bg_pane_g7

0x5fdf,	// (0x000156d4) set_opt_bg_pane_g8

0x5fe9,	// (0x000156de) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001f05e) set_opt_bg_pane_g

0x5fc0,	// (0x000156b5) slider_set_pane_g1

0x1394,	// (0x00010a89) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001f04f) slider_set_pane_g

0x1330,	// (0x00010a25) volume_set_pane_g1

0x1338,	// (0x00010a2d) volume_set_pane_g2

0x1340,	// (0x00010a35) volume_set_pane_g3

0x1348,	// (0x00010a3d) volume_set_pane_g4

0x1350,	// (0x00010a45) volume_set_pane_g5

0x1358,	// (0x00010a4d) volume_set_pane_g6

0x1360,	// (0x00010a55) volume_set_pane_g7

0x1368,	// (0x00010a5d) volume_set_pane_g8

0x1370,	// (0x00010a65) volume_set_pane_g9

0x1378,	// (0x00010a6d) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001f027) volume_set_pane_g

0xc7ef,	// (0x0001bee4) indicator_pane_ParamLimits

0xc7ef,	// (0x0001bee4) indicator_pane

0xc817,	// (0x0001bf0c) main_idle_pane_g2_ParamLimits

0xc817,	// (0x0001bf0c) main_idle_pane_g2

0xc84f,	// (0x0001bf44) main_pane_idle_g1_ParamLimits

0xc84f,	// (0x0001bf44) main_pane_idle_g1

0x2697,	// (0x00011d8c) popup_clock_digital_analogue_window_ParamLimits

0x2697,	// (0x00011d8c) popup_clock_digital_analogue_window

0xc876,	// (0x0001bf6b) soft_indicator_pane_ParamLimits

0xc876,	// (0x0001bf6b) soft_indicator_pane

0xc890,	// (0x0001bf85) wallpaper_pane_ParamLimits

0xc890,	// (0x0001bf85) wallpaper_pane

0x24f9,	// (0x00011bee) wallpaper_pane_g1

0xc8a2,	// (0x0001bf97) indicator_pane_g1_ParamLimits

0xc8a2,	// (0x0001bf97) indicator_pane_g1

0x64c0,	// (0x00015bb5) navi_navi_icon_text_pane_srt_g1

0x26e9,	// (0x00011dde) soft_indicator_pane_t1

0x2703,	// (0x00011df8) aid_ps_area_pane

0xc8b8,	// (0x0001bfad) aid_ps_clock_pane

0x2722,	// (0x00011e17) aid_ps_indicator_pane

0x272e,	// (0x00011e23) indicator_ps_pane_ParamLimits

0x272e,	// (0x00011e23) indicator_ps_pane

0x273d,	// (0x00011e32) power_save_pane_g1_ParamLimits

0x273d,	// (0x00011e32) power_save_pane_g1

0x2749,	// (0x00011e3e) power_save_pane_g2_ParamLimits

0x2749,	// (0x00011e3e) power_save_pane_g2

0xf52e,	// (0x0001ec23) aid_navinavi_width_pane

0x2703,	// (0x00011df8) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001ec5f) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001ec5f) power_save_pane_g

0x2757,	// (0x00011e4c) power_save_pane_t1_ParamLimits

0x2757,	// (0x00011e4c) power_save_pane_t1

0xc8b8,	// (0x0001bfad) aid_ps_clock_pane_ParamLimits

0x2722,	// (0x00011e17) aid_ps_indicator_pane_ParamLimits

0x2769,	// (0x00011e5e) power_save_pane_t4_ParamLimits

0x2769,	// (0x00011e5e) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001ec64) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001ec64) power_save_pane_t

0x2793,	// (0x00011e88) power_save_t3_ParamLimits

0x2793,	// (0x00011e88) power_save_t3

0x277e,	// (0x00011e73) power_save_t2_ParamLimits

0x277e,	// (0x00011e73) power_save_t2

0x27a8,	// (0x00011e9d) indicator_ps_pane_g1

0xc8c6,	// (0x0001bfbb) ai_gene_pane_ParamLimits

0xc8c6,	// (0x0001bfbb) ai_gene_pane

0xc8dd,	// (0x0001bfd2) ai_links_pane_ParamLimits

0xc8dd,	// (0x0001bfd2) ai_links_pane

0xc8f5,	// (0x0001bfea) indicator_pane_cp1_ParamLimits

0xc8f5,	// (0x0001bfea) indicator_pane_cp1

0xc904,	// (0x0001bff9) main_pane_idle_g1_cp_ParamLimits

0xc904,	// (0x0001bff9) main_pane_idle_g1_cp

0x27e1,	// (0x00011ed6) popup_ai_links_title_window

0xc91c,	// (0x0001c011) soft_indicator_pane_cp1_ParamLimits

0xc91c,	// (0x0001c011) soft_indicator_pane_cp1

0x5d86,	// (0x0001547b) ai_links_pane_g1

0x5d8f,	// (0x00015484) grid_ai_links_pane

0xd99e,	// (0x0001d093) ai_gene_pane_1

0x5d74,	// (0x00015469) ai_gene_pane_2

0x5d7d,	// (0x00015472) list_highlight_pane_cp4

0xd97a,	// (0x0001d06f) cell_ai_link_pane_ParamLimits

0xd97a,	// (0x0001d06f) cell_ai_link_pane

0x5d45,	// (0x0001543a) cell_ai_link_pane_g1

0x2a1a,	// (0x0001210f) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001f002) cell_ai_link_pane_g

0x2503,	// (0x00011bf8) grid_highlight_cp2

0x2503,	// (0x00011bf8) bg_popup_sub_pane_cp1

0x2804,	// (0x00011ef9) popup_ai_links_title_window_t1

0x5c93,	// (0x00015388) ai_gene_pane_1_g1_ParamLimits

0x5c93,	// (0x00015388) ai_gene_pane_1_g1

0x5c9f,	// (0x00015394) ai_gene_pane_1_g2_ParamLimits

0x5c9f,	// (0x00015394) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001eff8) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001eff8) ai_gene_pane_1_g

0x5cac,	// (0x000153a1) ai_gene_pane_1_t1_ParamLimits

0x5cac,	// (0x000153a1) ai_gene_pane_1_t1

0x5ce0,	// (0x000153d5) grid_ai_soft_ind_pane

0x5c7e,	// (0x00015373) ai_gene_pane_2_t1_ParamLimits

0x5c7e,	// (0x00015373) ai_gene_pane_2_t1

0xc930,	// (0x0001c025) main_pane_empty_t1_ParamLimits

0xc930,	// (0x0001c025) main_pane_empty_t1

0xc948,	// (0x0001c03d) main_pane_empty_t2_ParamLimits

0xc948,	// (0x0001c03d) main_pane_empty_t2

0xc95d,	// (0x0001c052) main_pane_empty_t3_ParamLimits

0xc95d,	// (0x0001c052) main_pane_empty_t3

0xc96f,	// (0x0001c064) main_pane_empty_t4_ParamLimits

0xc96f,	// (0x0001c064) main_pane_empty_t4

0xc981,	// (0x0001c076) main_pane_empty_t5_ParamLimits

0xc981,	// (0x0001c076) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001ec69) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001ec69) main_pane_empty_t

0x360d,	// (0x00012d02) bg_popup_window_pane_ParamLimits

0x360d,	// (0x00012d02) bg_popup_window_pane

0x59ee,	// (0x000150e3) find_popup_pane_cp2_ParamLimits

0x59ee,	// (0x000150e3) find_popup_pane_cp2

0x59fa,	// (0x000150ef) heading_pane_ParamLimits

0x59fa,	// (0x000150ef) heading_pane

0x2503,	// (0x00011bf8) bg_popup_sub_pane

0xd8fb,	// (0x0001cff0) bg_popup_window_pane_g1_ParamLimits

0xd8fb,	// (0x0001cff0) bg_popup_window_pane_g1

0xd90a,	// (0x0001cfff) bg_popup_window_pane_g2_ParamLimits

0xd90a,	// (0x0001cfff) bg_popup_window_pane_g2

0xd916,	// (0x0001d00b) bg_popup_window_pane_g3_ParamLimits

0xd916,	// (0x0001d00b) bg_popup_window_pane_g3

0xd922,	// (0x0001d017) bg_popup_window_pane_g4_ParamLimits

0xd922,	// (0x0001d017) bg_popup_window_pane_g4

0xd931,	// (0x0001d026) bg_popup_window_pane_g5_ParamLimits

0xd931,	// (0x0001d026) bg_popup_window_pane_g5

0xd941,	// (0x0001d036) bg_popup_window_pane_g6_ParamLimits

0xd941,	// (0x0001d036) bg_popup_window_pane_g6

0xd94d,	// (0x0001d042) bg_popup_window_pane_g7_ParamLimits

0xd94d,	// (0x0001d042) bg_popup_window_pane_g7

0xd95c,	// (0x0001d051) bg_popup_window_pane_g8_ParamLimits

0xd95c,	// (0x0001d051) bg_popup_window_pane_g8

0xd96b,	// (0x0001d060) bg_popup_window_pane_g9_ParamLimits

0xd96b,	// (0x0001d060) bg_popup_window_pane_g9

0x59d4,	// (0x000150c9) bg_popup_window_pane_g10_ParamLimits

0x59d4,	// (0x000150c9) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001efc0) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001efc0) bg_popup_window_pane_g

0x58fd,	// (0x00014ff2) bg_popup_heading_pane_ParamLimits

0x58fd,	// (0x00014ff2) bg_popup_heading_pane

0x141c,	// (0x00010b11) tabs_4_passive_pane_cp_srt_ParamLimits

0x141c,	// (0x00010b11) tabs_4_passive_pane_cp_srt

0x142e,	// (0x00010b23) tabs_4_passive_pane_srt_ParamLimits

0x5911,	// (0x00015006) heading_pane_g2

0x142e,	// (0x00010b23) tabs_4_passive_pane_srt

0x4c3a,	// (0x0001432f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4c3a,	// (0x0001432f) bg_passive_tab_pane_cp3_srt

0x5919,	// (0x0001500e) heading_pane_t1_ParamLimits

0x5919,	// (0x0001500e) heading_pane_t1

0x5930,	// (0x00015025) heading_pane_t2_ParamLimits

0x5930,	// (0x00015025) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001efbb) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001efbb) heading_pane_t

0x541e,	// (0x00014b13) bg_popup_heading_pane_g1

0x54cd,	// (0x00014bc2) bg_popup_heading_pane_g2

0x54d7,	// (0x00014bcc) bg_popup_heading_pane_g3

0x54e1,	// (0x00014bd6) bg_popup_heading_pane_g4

0x54eb,	// (0x00014be0) bg_popup_heading_pane_g5

0x54f5,	// (0x00014bea) bg_popup_heading_pane_g6

0x54fd,	// (0x00014bf2) bg_popup_heading_pane_g7

0x5505,	// (0x00014bfa) bg_popup_heading_pane_g8

0x550f,	// (0x00014c04) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001ef77) bg_popup_heading_pane_g

0x4b0c,	// (0x00014201) bg_popup_sub_pane_g1

0x4b1c,	// (0x00014211) bg_popup_sub_pane_g2

0x4b14,	// (0x00014209) bg_popup_sub_pane_g3

0x4b2c,	// (0x00014221) bg_popup_sub_pane_g4

0x4b24,	// (0x00014219) bg_popup_sub_pane_g5

0x4b34,	// (0x00014229) bg_popup_sub_pane_g6

0x4b3c,	// (0x00014231) bg_popup_sub_pane_g7

0x4b4c,	// (0x00014241) bg_popup_sub_pane_g8

0x4b44,	// (0x00014239) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001ef51) bg_popup_sub_pane_g

0x2878,	// (0x00011f6d) bg_popup_window_pane_cp5_ParamLimits

0x2878,	// (0x00011f6d) bg_popup_window_pane_cp5

0x2894,	// (0x00011f89) popup_note_window_g1_ParamLimits

0x2894,	// (0x00011f89) popup_note_window_g1

0x28a0,	// (0x00011f95) popup_note_window_t1_ParamLimits

0x28a0,	// (0x00011f95) popup_note_window_t1

0x28b6,	// (0x00011fab) popup_note_window_t2_ParamLimits

0x28b6,	// (0x00011fab) popup_note_window_t2

0x28cc,	// (0x00011fc1) popup_note_window_t3_ParamLimits

0x28cc,	// (0x00011fc1) popup_note_window_t3

0x28e2,	// (0x00011fd7) popup_note_window_t4_ParamLimits

0x28e2,	// (0x00011fd7) popup_note_window_t4

0x290a,	// (0x00011fff) popup_note_window_t5_ParamLimits

0x290a,	// (0x00011fff) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001ec74) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001ec74) popup_note_window_t

0x292e,	// (0x00012023) bg_popup_window_pane_cp6_ParamLimits

0x292e,	// (0x00012023) bg_popup_window_pane_cp6

0x539a,	// (0x00014a8f) popup_note_image_window_g1_ParamLimits

0x539a,	// (0x00014a8f) popup_note_image_window_g1

0x53a6,	// (0x00014a9b) popup_note_image_window_g2_ParamLimits

0x53a6,	// (0x00014a9b) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001ef45) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001ef45) popup_note_image_window_g

0x53bf,	// (0x00014ab4) popup_note_image_window_t1_ParamLimits

0x53bf,	// (0x00014ab4) popup_note_image_window_t1

0x53d8,	// (0x00014acd) popup_note_image_window_t2_ParamLimits

0x53d8,	// (0x00014acd) popup_note_image_window_t2

0x53f1,	// (0x00014ae6) popup_note_image_window_t3_ParamLimits

0x53f1,	// (0x00014ae6) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001ef4a) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001ef4a) popup_note_image_window_t

0x525b,	// (0x00014950) bg_popup_window_pane_cp7_ParamLimits

0x525b,	// (0x00014950) bg_popup_window_pane_cp7

0x528b,	// (0x00014980) popup_note_wait_window_g1_ParamLimits

0x528b,	// (0x00014980) popup_note_wait_window_g1

0x5297,	// (0x0001498c) popup_note_wait_window_g2_ParamLimits

0x5297,	// (0x0001498c) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001ef33) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001ef33) popup_note_wait_window_g

0x52af,	// (0x000149a4) popup_note_wait_window_t1_ParamLimits

0x52af,	// (0x000149a4) popup_note_wait_window_t1

0x52d6,	// (0x000149cb) popup_note_wait_window_t2_ParamLimits

0x52d6,	// (0x000149cb) popup_note_wait_window_t2

0x52f3,	// (0x000149e8) popup_note_wait_window_t3_ParamLimits

0x52f3,	// (0x000149e8) popup_note_wait_window_t3

0x5306,	// (0x000149fb) popup_note_wait_window_t4_ParamLimits

0x5306,	// (0x000149fb) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001ef3a) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001ef3a) popup_note_wait_window_t

0x532b,	// (0x00014a20) wait_bar_pane_ParamLimits

0x532b,	// (0x00014a20) wait_bar_pane

0x2503,	// (0x00011bf8) wait_anim_pane

0x2503,	// (0x00011bf8) wait_border_pane

0x24f9,	// (0x00011bee) wait_anim_pane_g1

0x24f9,	// (0x00011bee) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001edf3) wait_anim_pane_g

0x51ff,	// (0x000148f4) wait_border_pane_g1

0x520a,	// (0x000148ff) wait_border_pane_g2

0x5213,	// (0x00014908) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001ef2c) wait_border_pane_g

0x506a,	// (0x0001475f) bg_popup_window_pane_cp16_ParamLimits

0x506a,	// (0x0001475f) bg_popup_window_pane_cp16

0x516a,	// (0x0001485f) indicator_popup_pane_cp4_ParamLimits

0x516a,	// (0x0001485f) indicator_popup_pane_cp4

0x517e,	// (0x00014873) popup_query_data_window_t1_ParamLimits

0x517e,	// (0x00014873) popup_query_data_window_t1

0x5190,	// (0x00014885) popup_query_data_window_t2_ParamLimits

0x5190,	// (0x00014885) popup_query_data_window_t2

0x51a9,	// (0x0001489e) popup_query_data_window_t3_ParamLimits

0x51a9,	// (0x0001489e) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001ef25) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001ef25) popup_query_data_window_t

0x51c3,	// (0x000148b8) query_popup_data_pane_ParamLimits

0x51c3,	// (0x000148b8) query_popup_data_pane

0x51d7,	// (0x000148cc) query_popup_data_pane_cp1_ParamLimits

0x51d7,	// (0x000148cc) query_popup_data_pane_cp1

0x506a,	// (0x0001475f) bg_popup_window_pane_cp10_ParamLimits

0x506a,	// (0x0001475f) bg_popup_window_pane_cp10

0x509c,	// (0x00014791) indicator_popup_pane_ParamLimits

0x509c,	// (0x00014791) indicator_popup_pane

0x50be,	// (0x000147b3) popup_query_code_window_t1_ParamLimits

0x50be,	// (0x000147b3) popup_query_code_window_t1

0x50d8,	// (0x000147cd) popup_query_code_window_t2_ParamLimits

0x50d8,	// (0x000147cd) popup_query_code_window_t2

0x5121,	// (0x00014816) popup_query_code_window_t3_ParamLimits

0x5121,	// (0x00014816) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001ef1e) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001ef1e) popup_query_code_window_t

0x5150,	// (0x00014845) query_popup_pane_ParamLimits

0x5150,	// (0x00014845) query_popup_pane

0x292e,	// (0x00012023) bg_popup_window_pane_cp15_ParamLimits

0x292e,	// (0x00012023) bg_popup_window_pane_cp15

0x294c,	// (0x00012041) indicator_popup_pane_cp1_ParamLimits

0x294c,	// (0x00012041) indicator_popup_pane_cp1

0x295f,	// (0x00012054) indicator_popup_pane_cp2_ParamLimits

0x295f,	// (0x00012054) indicator_popup_pane_cp2

0x2972,	// (0x00012067) popup_query_data_code_window_g1_ParamLimits

0x2972,	// (0x00012067) popup_query_data_code_window_g1

0x2985,	// (0x0001207a) popup_query_data_code_window_t1_ParamLimits

0x2985,	// (0x0001207a) popup_query_data_code_window_t1

0x2997,	// (0x0001208c) popup_query_data_code_window_t2_ParamLimits

0x2997,	// (0x0001208c) popup_query_data_code_window_t2

0x29a9,	// (0x0001209e) popup_query_data_code_window_t3_ParamLimits

0x29a9,	// (0x0001209e) popup_query_data_code_window_t3

0x29bf,	// (0x000120b4) popup_query_data_code_window_t4_ParamLimits

0x29bf,	// (0x000120b4) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001ec7f) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001ec7f) popup_query_data_code_window_t

0x10dd,	// (0x000107d2) list_single_midp_graphic_pane_g3

0x29d7,	// (0x000120cc) query_popup_data_pane_cp2_ParamLimits

0x29ea,	// (0x000120df) query_popup_pane_cp2_ParamLimits

0x29ea,	// (0x000120df) query_popup_pane_cp2

0x2503,	// (0x00011bf8) bg_popup_window_pane_cp11

0x5062,	// (0x00014757) heading_pane_cp5

0x2ad5,	// (0x000121ca) listscroll_popup_info_pane

0x2503,	// (0x00011bf8) input_focus_pane_cp3

0x29fd,	// (0x000120f2) query_popup_pane_t1

0x2a0b,	// (0x00012100) list_popup_info_pane_ParamLimits

0x2a0b,	// (0x00012100) list_popup_info_pane

0x2a1a,	// (0x0001210f) listscroll_popup_info_pane_g1

0x2a22,	// (0x00012117) scroll_pane_cp7

0x2a2c,	// (0x00012121) popup_info_list_pane_t1_ParamLimits

0x2a2c,	// (0x00012121) popup_info_list_pane_t1

0x2a46,	// (0x0001213b) popup_info_list_pane_t2_ParamLimits

0x2a46,	// (0x0001213b) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001ec88) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001ec88) popup_info_list_pane_t

0x2503,	// (0x00011bf8) bg_popup_window_pane_cp12

0x64da,	// (0x00015bcf) find_popup_pane

0x25e3,	// (0x00011cd8) bg_popup_window_pane_cp3

0x2a60,	// (0x00012155) heading_pane_cp3

0x2a6c,	// (0x00012161) listscroll_popup_graphic_pane

0x2503,	// (0x00011bf8) bg_popup_window_pane_cp4

0xc9e3,	// (0x0001c0d8) heading_pane_cp4

0x2ad5,	// (0x000121ca) listscroll_popup_colour_pane

0x2add,	// (0x000121d2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2add,	// (0x000121d2) cell_large_graphic_colour_none_popup_pane

0xc9eb,	// (0x0001c0e0) grid_large_graphic_colour_popup_pane_ParamLimits

0xc9eb,	// (0x0001c0e0) grid_large_graphic_colour_popup_pane

0x2b1d,	// (0x00012212) listscroll_popup_colour_pane_g1_ParamLimits

0x2b1d,	// (0x00012212) listscroll_popup_colour_pane_g1

0x2b34,	// (0x00012229) listscroll_popup_colour_pane_g2_ParamLimits

0x2b34,	// (0x00012229) listscroll_popup_colour_pane_g2

0x2b4b,	// (0x00012240) listscroll_popup_colour_pane_g3_ParamLimits

0x2b4b,	// (0x00012240) listscroll_popup_colour_pane_g3

0xca0f,	// (0x0001c104) listscroll_popup_colour_pane_g4_ParamLimits

0xca0f,	// (0x0001c104) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001ec8d) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001ec8d) listscroll_popup_colour_pane_g

0x2b6f,	// (0x00012264) scroll_pane_cp6_ParamLimits

0x2b6f,	// (0x00012264) scroll_pane_cp6

0xca1f,	// (0x0001c114) cell_large_graphic_colour_popup_pane_ParamLimits

0xca1f,	// (0x0001c114) cell_large_graphic_colour_popup_pane

0x2ba0,	// (0x00012295) cell_large_graphic_colour_none_popup_pane_t1

0x2503,	// (0x00011bf8) grid_highlight_pane_cp5

0x2baf,	// (0x000122a4) cell_large_graphic_colour_popup_pane_g1

0x2bb7,	// (0x000122ac) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001ec96) cell_large_graphic_colour_popup_pane_g

0x2bbf,	// (0x000122b4) cell_large_graphic_colour_popup_pane_g2_copy1

0x2bc8,	// (0x000122bd) grid_highlight_pane_cp4

0x2bd0,	// (0x000122c5) bg_popup_window_pane_cp8_ParamLimits

0x2bd0,	// (0x000122c5) bg_popup_window_pane_cp8

0x2beb,	// (0x000122e0) popup_snote_single_text_window_g1_ParamLimits

0x2beb,	// (0x000122e0) popup_snote_single_text_window_g1

0x2bfd,	// (0x000122f2) popup_snote_single_text_window_t1_ParamLimits

0x2bfd,	// (0x000122f2) popup_snote_single_text_window_t1

0x2c10,	// (0x00012305) popup_snote_single_text_window_t2_ParamLimits

0x2c10,	// (0x00012305) popup_snote_single_text_window_t2

0x2c23,	// (0x00012318) popup_snote_single_text_window_t3_ParamLimits

0x2c23,	// (0x00012318) popup_snote_single_text_window_t3

0x2c5c,	// (0x00012351) popup_snote_single_text_window_t4_ParamLimits

0x2c5c,	// (0x00012351) popup_snote_single_text_window_t4

0x2c90,	// (0x00012385) popup_snote_single_text_window_t5_ParamLimits

0x2c90,	// (0x00012385) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001ec9b) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001ec9b) popup_snote_single_text_window_t

0x2cbf,	// (0x000123b4) bg_popup_window_pane_cp9_ParamLimits

0x2cbf,	// (0x000123b4) bg_popup_window_pane_cp9

0x2beb,	// (0x000122e0) popup_snote_single_graphic_window_g1_ParamLimits

0x2beb,	// (0x000122e0) popup_snote_single_graphic_window_g1

0x2ccd,	// (0x000123c2) popup_snote_single_graphic_window_g2_ParamLimits

0x2ccd,	// (0x000123c2) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001eca6) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001eca6) popup_snote_single_graphic_window_g

0x2cd9,	// (0x000123ce) popup_snote_single_graphic_window_t1_ParamLimits

0x2cd9,	// (0x000123ce) popup_snote_single_graphic_window_t1

0x2cec,	// (0x000123e1) popup_snote_single_graphic_window_t2_ParamLimits

0x2cec,	// (0x000123e1) popup_snote_single_graphic_window_t2

0x2cff,	// (0x000123f4) popup_snote_single_graphic_window_t3_ParamLimits

0x2cff,	// (0x000123f4) popup_snote_single_graphic_window_t3

0x2d38,	// (0x0001242d) popup_snote_single_graphic_window_t4_ParamLimits

0x2d38,	// (0x0001242d) popup_snote_single_graphic_window_t4

0x2d6c,	// (0x00012461) popup_snote_single_graphic_window_t5_ParamLimits

0x2d6c,	// (0x00012461) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001ecab) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001ecab) popup_snote_single_graphic_window_t

0x641e,	// (0x00015b13) grid_graphic_popup_pane_ParamLimits

0x641e,	// (0x00015b13) grid_graphic_popup_pane

0x6446,	// (0x00015b3b) listscroll_popup_graphic_pane_g1_ParamLimits

0x6446,	// (0x00015b3b) listscroll_popup_graphic_pane_g1

0xdc9f,	// (0x0001d394) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc9f,	// (0x0001d394) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001f09b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001f09b) listscroll_popup_graphic_pane_g

0x646e,	// (0x00015b63) scroll_pane_cp5

0xdc5b,	// (0x0001d350) cell_graphic_popup_pane_ParamLimits

0xdc5b,	// (0x0001d350) cell_graphic_popup_pane

0x639c,	// (0x00015a91) cell_graphic_popup_pane_g1

0x63a4,	// (0x00015a99) cell_graphic_popup_pane_g2

0x2bbf,	// (0x000122b4) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001f094) cell_graphic_popup_pane_g

0x63ad,	// (0x00015aa2) cell_graphic_popup_pane_t2

0x2bc8,	// (0x000122bd) grid_highlight_pane_cp3

0x2dad,	// (0x000124a2) list_gen_pane_ParamLimits

0x2dad,	// (0x000124a2) list_gen_pane

0x2ddf,	// (0x000124d4) scroll_pane

0xdc12,	// (0x0001d307) bg_list_pane_g1_ParamLimits

0xdc12,	// (0x0001d307) bg_list_pane_g1

0x6311,	// (0x00015a06) bg_list_pane_g2_ParamLimits

0x6311,	// (0x00015a06) bg_list_pane_g2

0x6326,	// (0x00015a1b) bg_list_pane_g3_ParamLimits

0x6326,	// (0x00015a1b) bg_list_pane_g3

0x633a,	// (0x00015a2f) bg_list_pane_g4_ParamLimits

0x633a,	// (0x00015a2f) bg_list_pane_g4

0xdc2f,	// (0x0001d324) bg_list_pane_g5_ParamLimits

0xdc2f,	// (0x0001d324) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001f089) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001f089) bg_list_pane_g

0xdbb8,	// (0x0001d2ad) list_double2_graphic_large_graphic_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double2_graphic_large_graphic_pane

0xdbb8,	// (0x0001d2ad) list_double2_graphic_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double2_graphic_pane

0xdbb8,	// (0x0001d2ad) list_double2_large_graphic_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double2_large_graphic_pane

0xdbb8,	// (0x0001d2ad) list_double2_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double2_pane

0xdbb8,	// (0x0001d2ad) list_double_graphic_heading_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double_graphic_heading_pane

0xdbb8,	// (0x0001d2ad) list_double_graphic_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double_graphic_pane

0xdbb8,	// (0x0001d2ad) list_double_heading_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double_heading_pane

0xdbb8,	// (0x0001d2ad) list_double_large_graphic_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double_large_graphic_pane

0xdbb8,	// (0x0001d2ad) list_double_number_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double_number_pane

0xdbb8,	// (0x0001d2ad) list_double_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double_pane

0xdbb8,	// (0x0001d2ad) list_double_time_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_double_time_pane

0xdbb8,	// (0x0001d2ad) list_setting_number_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_setting_number_pane

0xdbb8,	// (0x0001d2ad) list_setting_pane_ParamLimits

0xdbb8,	// (0x0001d2ad) list_setting_pane

0xdbca,	// (0x0001d2bf) list_single_2graphic_pane_ParamLimits

0xdbca,	// (0x0001d2bf) list_single_2graphic_pane

0xdbca,	// (0x0001d2bf) list_single_graphic_heading_pane_ParamLimits

0xdbca,	// (0x0001d2bf) list_single_graphic_heading_pane

0xdbca,	// (0x0001d2bf) list_single_graphic_pane_ParamLimits

0xdbca,	// (0x0001d2bf) list_single_graphic_pane

0xdbca,	// (0x0001d2bf) list_single_heading_pane_ParamLimits

0xdbca,	// (0x0001d2bf) list_single_heading_pane

0xdbca,	// (0x0001d2bf) list_single_large_graphic_pane_ParamLimits

0xdbca,	// (0x0001d2bf) list_single_large_graphic_pane

0xdbca,	// (0x0001d2bf) list_single_number_heading_pane_ParamLimits

0xdbca,	// (0x0001d2bf) list_single_number_heading_pane

0xdbca,	// (0x0001d2bf) list_single_number_pane_ParamLimits

0xdbca,	// (0x0001d2bf) list_single_number_pane

0xdbca,	// (0x0001d2bf) list_single_pane_ParamLimits

0xdbca,	// (0x0001d2bf) list_single_pane

0x2503,	// (0x00011bf8) list_highlight_pane_cp1

0x41bf,	// (0x000138b4) list_single_pane_g1_ParamLimits

0x41bf,	// (0x000138b4) list_single_pane_g1

0x4a8e,	// (0x00014183) list_single_pane_g2_ParamLimits

0x4a8e,	// (0x00014183) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001ecbd) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001ecbd) list_single_pane_g

0x6ad0,	// (0x000161c5) list_single_pane_t1_ParamLimits

0x6ad0,	// (0x000161c5) list_single_pane_t1

0x41bf,	// (0x000138b4) list_single_number_pane_g1_ParamLimits

0x41bf,	// (0x000138b4) list_single_number_pane_g1

0x4a8e,	// (0x00014183) list_single_number_pane_g2_ParamLimits

0x4a8e,	// (0x00014183) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001ecbd) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001ecbd) list_single_number_pane_g

0x4a9a,	// (0x0001418f) list_single_number_pane_t1_ParamLimits

0x4a9a,	// (0x0001418f) list_single_number_pane_t1

0xda09,	// (0x0001d0fe) list_single_number_pane_t2_ParamLimits

0xda09,	// (0x0001d0fe) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001f04a) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001f04a) list_single_number_pane_t

0xca48,	// (0x0001c13d) list_single_graphic_pane_g1_ParamLimits

0xca48,	// (0x0001c13d) list_single_graphic_pane_g1

0x41bf,	// (0x000138b4) list_single_graphic_pane_g2_ParamLimits

0x41bf,	// (0x000138b4) list_single_graphic_pane_g2

0x4a8e,	// (0x00014183) list_single_graphic_pane_g3_ParamLimits

0x4a8e,	// (0x00014183) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001ecb6) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001ecb6) list_single_graphic_pane_g

0xca54,	// (0x0001c149) list_single_graphic_pane_t1_ParamLimits

0xca54,	// (0x0001c149) list_single_graphic_pane_t1

0x41bf,	// (0x000138b4) list_single_heading_pane_g1_ParamLimits

0x41bf,	// (0x000138b4) list_single_heading_pane_g1

0x4a8e,	// (0x00014183) list_single_heading_pane_g2_ParamLimits

0x4a8e,	// (0x00014183) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ecbd) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ecbd) list_single_heading_pane_g

0xca6a,	// (0x0001c15f) list_single_heading_pane_t1_ParamLimits

0xca6a,	// (0x0001c15f) list_single_heading_pane_t1

0xca80,	// (0x0001c175) list_single_heading_pane_t2_ParamLimits

0xca80,	// (0x0001c175) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001ecc2) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001ecc2) list_single_heading_pane_t

0x41bf,	// (0x000138b4) list_single_number_heading_pane_g1_ParamLimits

0x41bf,	// (0x000138b4) list_single_number_heading_pane_g1

0x4a8e,	// (0x00014183) list_single_number_heading_pane_g2_ParamLimits

0x4a8e,	// (0x00014183) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ecbd) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ecbd) list_single_number_heading_pane_g

0xca6a,	// (0x0001c15f) list_single_number_heading_pane_t1_ParamLimits

0xca6a,	// (0x0001c15f) list_single_number_heading_pane_t1

0xca92,	// (0x0001c187) list_single_number_heading_pane_t2_ParamLimits

0xca92,	// (0x0001c187) list_single_number_heading_pane_t2

0x6aaa,	// (0x0001619f) list_single_number_heading_pane_t3_ParamLimits

0x6aaa,	// (0x0001619f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001ecc7) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001ecc7) list_single_number_heading_pane_t

0x4a82,	// (0x00014177) list_single_graphic_heading_pane_g1_ParamLimits

0x4a82,	// (0x00014177) list_single_graphic_heading_pane_g1

0xcaa4,	// (0x0001c199) list_single_graphic_heading_pane_g4_ParamLimits

0xcaa4,	// (0x0001c199) list_single_graphic_heading_pane_g4

0x4a8e,	// (0x00014183) list_single_graphic_heading_pane_g5_ParamLimits

0x4a8e,	// (0x00014183) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001ecce) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001ecce) list_single_graphic_heading_pane_g

0xca6a,	// (0x0001c15f) list_single_graphic_heading_pane_t1_ParamLimits

0xca6a,	// (0x0001c15f) list_single_graphic_heading_pane_t1

0xcab5,	// (0x0001c1aa) list_single_graphic_heading_pane_t2_ParamLimits

0xcab5,	// (0x0001c1aa) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001ecd5) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001ecd5) list_single_graphic_heading_pane_t

0x6ae6,	// (0x000161db) list_single_large_graphic_pane_g1_ParamLimits

0x6ae6,	// (0x000161db) list_single_large_graphic_pane_g1

0x41bf,	// (0x000138b4) list_single_large_graphic_pane_g2_ParamLimits

0x41bf,	// (0x000138b4) list_single_large_graphic_pane_g2

0x4a8e,	// (0x00014183) list_single_large_graphic_pane_g3_ParamLimits

0x4a8e,	// (0x00014183) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001ecda) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001ecda) list_single_large_graphic_pane_g

0x520a,	// (0x000148ff) wait_border_pane_g2_copy1

0xcac7,	// (0x0001c1bc) list_single_large_graphic_pane_g4_cp2

0x6af2,	// (0x000161e7) list_single_large_graphic_pane_t1_ParamLimits

0x6af2,	// (0x000161e7) list_single_large_graphic_pane_t1

0x57bd,	// (0x00014eb2) list_double_pane_g1_ParamLimits

0x57bd,	// (0x00014eb2) list_double_pane_g1

0xcacf,	// (0x0001c1c4) list_double_pane_g2_ParamLimits

0xcacf,	// (0x0001c1c4) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001ece1) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001ece1) list_double_pane_g

0x83a7,	// (0x00017a9c) list_double_pane_t1_ParamLimits

0x83a7,	// (0x00017a9c) list_double_pane_t1

0xcadb,	// (0x0001c1d0) list_double_pane_t2_ParamLimits

0xcadb,	// (0x0001c1d0) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001ece6) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001ece6) list_double_pane_t

0xcaed,	// (0x0001c1e2) list_double2_pane_g1_ParamLimits

0xcaed,	// (0x0001c1e2) list_double2_pane_g1

0xcafe,	// (0x0001c1f3) list_double2_pane_g2_ParamLimits

0xcafe,	// (0x0001c1f3) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001eceb) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001eceb) list_double2_pane_g

0xcb0a,	// (0x0001c1ff) list_double2_pane_t1_ParamLimits

0xcb0a,	// (0x0001c1ff) list_double2_pane_t1

0xcb20,	// (0x0001c215) list_double2_pane_t2_ParamLimits

0xcb20,	// (0x0001c215) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001ecf0) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001ecf0) list_double2_pane_t

0x57bd,	// (0x00014eb2) list_double_number_pane_g1_ParamLimits

0x57bd,	// (0x00014eb2) list_double_number_pane_g1

0xcacf,	// (0x0001c1c4) list_double_number_pane_g2_ParamLimits

0xcacf,	// (0x0001c1c4) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001ece1) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001ece1) list_double_number_pane_g

0xcb32,	// (0x0001c227) list_double_number_pane_t1_ParamLimits

0xcb32,	// (0x0001c227) list_double_number_pane_t1

0xcb44,	// (0x0001c239) list_double_number_pane_t2_ParamLimits

0xcb44,	// (0x0001c239) list_double_number_pane_t2

0xcb5a,	// (0x0001c24f) list_double_number_pane_t3_ParamLimits

0xcb5a,	// (0x0001c24f) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001ecf5) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001ecf5) list_double_number_pane_t

0xcb6c,	// (0x0001c261) list_double_graphic_pane_g1_ParamLimits

0xcb6c,	// (0x0001c261) list_double_graphic_pane_g1

0xcb78,	// (0x0001c26d) list_double_graphic_pane_g2_ParamLimits

0xcb78,	// (0x0001c26d) list_double_graphic_pane_g2

0xcb87,	// (0x0001c27c) list_double_graphic_pane_g3_ParamLimits

0xcb87,	// (0x0001c27c) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001ecfc) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001ecfc) list_double_graphic_pane_g

0xcb9f,	// (0x0001c294) list_double_graphic_pane_t1_ParamLimits

0xcb9f,	// (0x0001c294) list_double_graphic_pane_t1

0xcbb5,	// (0x0001c2aa) list_double_graphic_pane_t2_ParamLimits

0xcbb5,	// (0x0001c2aa) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001ed05) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001ed05) list_double_graphic_pane_t

0xcbc7,	// (0x0001c2bc) list_double2_graphic_pane_g1_ParamLimits

0xcbc7,	// (0x0001c2bc) list_double2_graphic_pane_g1

0x40aa,	// (0x0001379f) list_double2_graphic_pane_g2_ParamLimits

0x40aa,	// (0x0001379f) list_double2_graphic_pane_g2

0xcafe,	// (0x0001c1f3) list_double2_graphic_pane_g3_ParamLimits

0xcafe,	// (0x0001c1f3) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001ed0a) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001ed0a) list_double2_graphic_pane_g

0xcbd3,	// (0x0001c2c8) list_double2_graphic_pane_t1_ParamLimits

0xcbd3,	// (0x0001c2c8) list_double2_graphic_pane_t1

0xcbe9,	// (0x0001c2de) list_double2_graphic_pane_t2_ParamLimits

0xcbe9,	// (0x0001c2de) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001ed11) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001ed11) list_double2_graphic_pane_t

0xcbfb,	// (0x0001c2f0) list_double_large_graphic_pane_g1_ParamLimits

0xcbfb,	// (0x0001c2f0) list_double_large_graphic_pane_g1

0xcc1a,	// (0x0001c30f) list_double_large_graphic_pane_g2_ParamLimits

0xcc1a,	// (0x0001c30f) list_double_large_graphic_pane_g2

0xcacf,	// (0x0001c1c4) list_double_large_graphic_pane_g3_ParamLimits

0xcacf,	// (0x0001c1c4) list_double_large_graphic_pane_g3

0xcc2b,	// (0x0001c320) list_double_large_graphic_pane_g4_ParamLimits

0xcc2b,	// (0x0001c320) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001ed16) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001ed16) list_double_large_graphic_pane_g

0xcc3d,	// (0x0001c332) list_double_large_graphic_pane_t1_ParamLimits

0xcc3d,	// (0x0001c332) list_double_large_graphic_pane_t1

0xcc56,	// (0x0001c34b) list_double_large_graphic_pane_t2_ParamLimits

0xcc56,	// (0x0001c34b) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001ed21) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001ed21) list_double_large_graphic_pane_t

0xcc68,	// (0x0001c35d) list_double2_large_graphic_pane_g1_ParamLimits

0xcc68,	// (0x0001c35d) list_double2_large_graphic_pane_g1

0xcaed,	// (0x0001c1e2) list_double2_large_graphic_pane_g2_ParamLimits

0xcaed,	// (0x0001c1e2) list_double2_large_graphic_pane_g2

0xcafe,	// (0x0001c1f3) list_double2_large_graphic_pane_g3_ParamLimits

0xcafe,	// (0x0001c1f3) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001ed26) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001ed26) list_double2_large_graphic_pane_g

0xcc74,	// (0x0001c369) list_double2_large_graphic_pane_t1_ParamLimits

0xcc74,	// (0x0001c369) list_double2_large_graphic_pane_t1

0xcc8a,	// (0x0001c37f) list_double2_large_graphic_pane_t2_ParamLimits

0xcc8a,	// (0x0001c37f) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001ed2d) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001ed2d) list_double2_large_graphic_pane_t

0xcc9c,	// (0x0001c391) list_double_heading_pane_g1_ParamLimits

0xcc9c,	// (0x0001c391) list_double_heading_pane_g1

0xccad,	// (0x0001c3a2) list_double_heading_pane_g2_ParamLimits

0xccad,	// (0x0001c3a2) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001ed32) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001ed32) list_double_heading_pane_g

0xccb9,	// (0x0001c3ae) list_double_heading_pane_t1_ParamLimits

0xccb9,	// (0x0001c3ae) list_double_heading_pane_t1

0xcccf,	// (0x0001c3c4) list_double_heading_pane_t2_ParamLimits

0xcccf,	// (0x0001c3c4) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001ed37) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001ed37) list_double_heading_pane_t

0x2fc9,	// (0x000126be) list_double_graphic_heading_pane_g1_ParamLimits

0x2fc9,	// (0x000126be) list_double_graphic_heading_pane_g1

0xcc9c,	// (0x0001c391) list_double_graphic_heading_pane_g2_ParamLimits

0xcc9c,	// (0x0001c391) list_double_graphic_heading_pane_g2

0xccad,	// (0x0001c3a2) list_double_graphic_heading_pane_g3_ParamLimits

0xccad,	// (0x0001c3a2) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001ed3c) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001ed3c) list_double_graphic_heading_pane_g

0xcce1,	// (0x0001c3d6) list_double_graphic_heading_pane_t1_ParamLimits

0xcce1,	// (0x0001c3d6) list_double_graphic_heading_pane_t1

0xccf7,	// (0x0001c3ec) list_double_graphic_heading_pane_t2_ParamLimits

0xccf7,	// (0x0001c3ec) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001ed43) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001ed43) list_double_graphic_heading_pane_t

0xcc1a,	// (0x0001c30f) list_double_time_pane_g1_ParamLimits

0xcc1a,	// (0x0001c30f) list_double_time_pane_g1

0xcacf,	// (0x0001c1c4) list_double_time_pane_g2_ParamLimits

0xcacf,	// (0x0001c1c4) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001ed48) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001ed48) list_double_time_pane_g

0xcd09,	// (0x0001c3fe) list_double_time_pane_t1_ParamLimits

0xcd09,	// (0x0001c3fe) list_double_time_pane_t1

0xcd1f,	// (0x0001c414) list_double_time_pane_t2_ParamLimits

0xcd1f,	// (0x0001c414) list_double_time_pane_t2

0xcd31,	// (0x0001c426) list_double_time_pane_t3_ParamLimits

0xcd31,	// (0x0001c426) list_double_time_pane_t3

0xcd43,	// (0x0001c438) list_double_time_pane_t4_ParamLimits

0xcd43,	// (0x0001c438) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001ed4d) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001ed4d) list_double_time_pane_t

0x40aa,	// (0x0001379f) list_setting_pane_g1_ParamLimits

0x40aa,	// (0x0001379f) list_setting_pane_g1

0xcafe,	// (0x0001c1f3) list_setting_pane_g2_ParamLimits

0xcafe,	// (0x0001c1f3) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001ed56) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001ed56) list_setting_pane_g

0xcd55,	// (0x0001c44a) list_setting_pane_t1_ParamLimits

0xcd55,	// (0x0001c44a) list_setting_pane_t1

0xcd6c,	// (0x0001c461) list_setting_pane_t2_ParamLimits

0xcd6c,	// (0x0001c461) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001ed5b) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001ed5b) list_setting_pane_t

0xcdab,	// (0x0001c4a0) set_value_pane_cp_ParamLimits

0xcdab,	// (0x0001c4a0) set_value_pane_cp

0x40aa,	// (0x0001379f) list_setting_number_pane_g1_ParamLimits

0x40aa,	// (0x0001379f) list_setting_number_pane_g1

0xcafe,	// (0x0001c1f3) list_setting_number_pane_g2_ParamLimits

0xcafe,	// (0x0001c1f3) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001ed56) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001ed56) list_setting_number_pane_g

0xcdb7,	// (0x0001c4ac) list_setting_number_pane_t1_ParamLimits

0xcdb7,	// (0x0001c4ac) list_setting_number_pane_t1

0xcdcb,	// (0x0001c4c0) list_setting_number_pane_t2_ParamLimits

0xcdcb,	// (0x0001c4c0) list_setting_number_pane_t2

0xcde2,	// (0x0001c4d7) list_setting_number_pane_t3_ParamLimits

0xcde2,	// (0x0001c4d7) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001ed62) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001ed62) list_setting_number_pane_t

0xcdab,	// (0x0001c4a0) set_value_pane_ParamLimits

0xcdab,	// (0x0001c4a0) set_value_pane

0x32ae,	// (0x000129a3) bg_set_opt_pane_ParamLimits

0x32ae,	// (0x000129a3) bg_set_opt_pane

0x32cf,	// (0x000129c4) set_value_pane_t1

0x32dd,	// (0x000129d2) slider_set_pane_cp3

0x32e6,	// (0x000129db) volume_small_pane_cp

0x32ef,	// (0x000129e4) list_form_gen_pane

0x32f8,	// (0x000129ed) scroll_pane_cp8

0xce25,	// (0x0001c51a) form_field_data_pane_ParamLimits

0xce25,	// (0x0001c51a) form_field_data_pane

0xce3c,	// (0x0001c531) form_field_data_wide_pane_ParamLimits

0xce3c,	// (0x0001c531) form_field_data_wide_pane

0xce5c,	// (0x0001c551) form_field_popup_pane_ParamLimits

0xce5c,	// (0x0001c551) form_field_popup_pane

0xce74,	// (0x0001c569) form_field_popup_wide_pane_ParamLimits

0xce74,	// (0x0001c569) form_field_popup_wide_pane

0x3393,	// (0x00012a88) form_field_slider_pane_ParamLimits

0x3393,	// (0x00012a88) form_field_slider_pane

0x33a6,	// (0x00012a9b) form_field_slider_wide_pane_ParamLimits

0x33a6,	// (0x00012a9b) form_field_slider_wide_pane

0x33b9,	// (0x00012aae) data_form_pane

0xce95,	// (0x0001c58a) form_field_data_pane_t1

0x33e7,	// (0x00012adc) input_focus_pane

0x33f5,	// (0x00012aea) data_form_wide_pane

0x3421,	// (0x00012b16) form_field_data_wide_pane_t1

0x2bdd,	// (0x000122d2) input_focus_pane_cp6

0xceaf,	// (0x0001c5a4) form_field_popup_pane_t1

0x33e7,	// (0x00012adc) input_focus_pane_cp7

0x3458,	// (0x00012b4d) list_form_pane

0x346c,	// (0x00012b61) form_field_popup_wide_pane_t1

0x33e7,	// (0x00012adc) input_focus_pane_cp8

0x3481,	// (0x00012b76) list_form_wide_pane

0xced1,	// (0x0001c5c6) form_field_slider_pane_t1_ParamLimits

0xced1,	// (0x0001c5c6) form_field_slider_pane_t1

0xcee9,	// (0x0001c5de) form_field_slider_pane_t2_ParamLimits

0xcee9,	// (0x0001c5de) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001ed72) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001ed72) form_field_slider_pane_t

0x2878,	// (0x00011f6d) input_focus_pane_cp9_ParamLimits

0x2878,	// (0x00011f6d) input_focus_pane_cp9

0xcefe,	// (0x0001c5f3) slider_cont_pane_ParamLimits

0xcefe,	// (0x0001c5f3) slider_cont_pane

0x34d0,	// (0x00012bc5) form_field_slider_wide_pane_t1_ParamLimits

0x34d0,	// (0x00012bc5) form_field_slider_wide_pane_t1

0x34e2,	// (0x00012bd7) form_field_slider_wide_pane_t2_ParamLimits

0x34e2,	// (0x00012bd7) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001ed77) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001ed77) form_field_slider_wide_pane_t

0x2878,	// (0x00011f6d) input_focus_pane_cp10_ParamLimits

0x2878,	// (0x00011f6d) input_focus_pane_cp10

0xcf12,	// (0x0001c607) slider_cont_pane_cp1_ParamLimits

0xcf12,	// (0x0001c607) slider_cont_pane_cp1

0xcf26,	// (0x0001c61b) slider_form_pane_cp

0x3510,	// (0x00012c05) input_focus_pane_g1

0x3518,	// (0x00012c0d) input_focus_pane_g2

0x3520,	// (0x00012c15) input_focus_pane_g3

0x3528,	// (0x00012c1d) input_focus_pane_g4

0x3530,	// (0x00012c25) input_focus_pane_g5

0x3538,	// (0x00012c2d) input_focus_pane_g6

0x3540,	// (0x00012c35) input_focus_pane_g7

0x3548,	// (0x00012c3d) input_focus_pane_g8

0x3550,	// (0x00012c45) input_focus_pane_g9

0x24f9,	// (0x00011bee) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001ed7c) input_focus_pane_g

0x5213,	// (0x00014908) wait_border_pane_g3_copy1

0xcf2e,	// (0x0001c623) data_form_pane_t1

0x24f9,	// (0x00011bee) wait_anim_pane_g1_copy1

0xdb9c,	// (0x0001d291) data_form_wide_pane_t1

0xcf48,	// (0x0001c63d) list_form_graphic_pane_cp_ParamLimits

0xcf48,	// (0x0001c63d) list_form_graphic_pane_cp

0x6168,	// (0x0001585d) slider_form_pane_g1

0x6171,	// (0x00015866) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001f07a) slider_form_pane_g

0xcf48,	// (0x0001c63d) list_form_graphic_pane_ParamLimits

0xcf48,	// (0x0001c63d) list_form_graphic_pane

0x35a8,	// (0x00012c9d) list_form_graphic_pane_g1

0x35b0,	// (0x00012ca5) list_form_graphic_pane_t1_ParamLimits

0x35b0,	// (0x00012ca5) list_form_graphic_pane_t1

0x25e3,	// (0x00011cd8) list_highlight_pane_cp5_ParamLimits

0x25e3,	// (0x00011cd8) list_highlight_pane_cp5

0xcf5a,	// (0x0001c64f) find_pane_g1

0x35ce,	// (0x00012cc3) input_find_pane

0xcf63,	// (0x0001c658) input_find_pane_g1_ParamLimits

0xcf63,	// (0x0001c658) input_find_pane_g1

0xcf6f,	// (0x0001c664) input_find_pane_t1_ParamLimits

0xcf6f,	// (0x0001c664) input_find_pane_t1

0xcf84,	// (0x0001c679) input_find_pane_t2_ParamLimits

0xcf84,	// (0x0001c679) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001ed91) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001ed91) input_find_pane_t

0x360d,	// (0x00012d02) input_focus_pane_cp5_ParamLimits

0x360d,	// (0x00012d02) input_focus_pane_cp5

0x3627,	// (0x00012d1c) bg_popup_window_pane_cp2_ParamLimits

0x3627,	// (0x00012d1c) bg_popup_window_pane_cp2

0x3634,	// (0x00012d29) listscroll_menu_pane_ParamLimits

0x3634,	// (0x00012d29) listscroll_menu_pane

0xcfa5,	// (0x0001c69a) popup_submenu_window_ParamLimits

0xcfa5,	// (0x0001c69a) popup_submenu_window

0x366c,	// (0x00012d61) find_popup_pane_g1

0x3674,	// (0x00012d69) input_popup_find_pane_cp

0x360d,	// (0x00012d02) input_focus_pane_cp4_ParamLimits

0x360d,	// (0x00012d02) input_focus_pane_cp4

0x368a,	// (0x00012d7f) input_popup_find_pane_t1_ParamLimits

0x368a,	// (0x00012d7f) input_popup_find_pane_t1

0x2503,	// (0x00011bf8) bg_popup_sub_pane_cp

0x36b8,	// (0x00012dad) listscroll_popup_sub_pane

0x36c0,	// (0x00012db5) list_submenu_pane_ParamLimits

0x36c0,	// (0x00012db5) list_submenu_pane

0x36d1,	// (0x00012dc6) scroll_pane_cp4

0x36d9,	// (0x00012dce) list_single_popup_submenu_pane_ParamLimits

0x36d9,	// (0x00012dce) list_single_popup_submenu_pane

0x36ed,	// (0x00012de2) list_single_popup_submenu_pane_g1

0x36f5,	// (0x00012dea) list_single_popup_submenu_pane_t1_ParamLimits

0x36f5,	// (0x00012dea) list_single_popup_submenu_pane_t1

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp1_ParamLimits

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp1

0x370a,	// (0x00012dff) tabs_2_active_pane_g1

0xcfdf,	// (0x0001c6d4) tabs_2_active_pane_t1

0x2878,	// (0x00011f6d) bg_passive_tab_pane_cp1_ParamLimits

0x2878,	// (0x00011f6d) bg_passive_tab_pane_cp1

0x370a,	// (0x00012dff) tabs_2_passive_pane_g1

0xcfdf,	// (0x0001c6d4) tabs_2_passive_pane_t1

0x25e3,	// (0x00011cd8) bg_active_tab_pane_cp4

0xcff1,	// (0x0001c6e6) tabs_2_long_active_pane_t1

0x45cc,	// (0x00013cc1) bg_passive_tab_pane_cp4

0x10e5,	// (0x000107da) list_single_midp_graphic_pane_g4_ParamLimits

0x25e3,	// (0x00011cd8) bg_active_tab_pane_cp5

0xd004,	// (0x0001c6f9) tabs_3_long_active_pane_t1

0x45cc,	// (0x00013cc1) bg_passive_tab_pane_cp5

0x10e5,	// (0x000107da) list_single_midp_graphic_pane_g4

0x25e3,	// (0x00011cd8) bg_popup_window_pane_cp13_ParamLimits

0x25e3,	// (0x00011cd8) bg_popup_window_pane_cp13

0x376c,	// (0x00012e61) listscroll_popup_fast_pane_ParamLimits

0x376c,	// (0x00012e61) listscroll_popup_fast_pane

0x377b,	// (0x00012e70) grid_popup_fast_pane_ParamLimits

0x377b,	// (0x00012e70) grid_popup_fast_pane

0x378d,	// (0x00012e82) scroll_pane_cp9_ParamLimits

0x378d,	// (0x00012e82) scroll_pane_cp9

0x8076,	// (0x0001776b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8076,	// (0x0001776b) list_single_graphic_hl_pane_t1_cp2

0x37b1,	// (0x00012ea6) input_focus_pane_cp20_ParamLimits

0x37b1,	// (0x00012ea6) input_focus_pane_cp20

0x37bf,	// (0x00012eb4) query_popup_data_pane_t1_ParamLimits

0x37bf,	// (0x00012eb4) query_popup_data_pane_t1

0x37d2,	// (0x00012ec7) query_popup_data_pane_t2_ParamLimits

0x37d2,	// (0x00012ec7) query_popup_data_pane_t2

0x3818,	// (0x00012f0d) query_popup_data_pane_t3_ParamLimits

0x3818,	// (0x00012f0d) query_popup_data_pane_t3

0x3859,	// (0x00012f4e) query_popup_data_pane_t4_ParamLimits

0x3859,	// (0x00012f4e) query_popup_data_pane_t4

0x3895,	// (0x00012f8a) query_popup_data_pane_t5_ParamLimits

0x3895,	// (0x00012f8a) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001ed96) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001ed96) query_popup_data_pane_t

0x3510,	// (0x00012c05) bg_set_opt_pane_g1

0x3518,	// (0x00012c0d) bg_set_opt_pane_g2

0x3520,	// (0x00012c15) bg_set_opt_pane_g3

0x3528,	// (0x00012c1d) bg_set_opt_pane_g4

0x3530,	// (0x00012c25) bg_set_opt_pane_g5

0x3538,	// (0x00012c2d) bg_set_opt_pane_g6

0x3540,	// (0x00012c35) bg_set_opt_pane_g7

0x3548,	// (0x00012c3d) bg_set_opt_pane_g8

0x3550,	// (0x00012c45) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001eda1) bg_set_opt_pane_g

0x06ff,	// (0x0000fdf4) control_top_pane_stacon_ParamLimits

0x06ff,	// (0x0000fdf4) control_top_pane_stacon

0x0752,	// (0x0000fe47) signal_pane_stacon_ParamLimits

0x0752,	// (0x0000fe47) signal_pane_stacon

0x3f14,	// (0x00013609) stacon_top_pane_g1_ParamLimits

0x3f14,	// (0x00013609) stacon_top_pane_g1

0x0777,	// (0x0000fe6c) title_pane_stacon_ParamLimits

0x0777,	// (0x0000fe6c) title_pane_stacon

0x07a1,	// (0x0000fe96) uni_indicator_pane_stacon_ParamLimits

0x07a1,	// (0x0000fe96) uni_indicator_pane_stacon

0x07b6,	// (0x0000feab) battery_pane_stacon_ParamLimits

0x07b6,	// (0x0000feab) battery_pane_stacon

0x07fa,	// (0x0000feef) control_bottom_pane_stacon_ParamLimits

0x07fa,	// (0x0000feef) control_bottom_pane_stacon

0x081d,	// (0x0000ff12) navi_pane_stacon_ParamLimits

0x081d,	// (0x0000ff12) navi_pane_stacon

0x3f36,	// (0x0001362b) stacon_bottom_pane_g1_ParamLimits

0x3f36,	// (0x0001362b) stacon_bottom_pane_g1

0x0462,	// (0x0000fb57) aid_levels_signal_lsc_ParamLimits

0x0462,	// (0x0000fb57) aid_levels_signal_lsc

0x0478,	// (0x0000fb6d) signal_pane_stacon_g1_ParamLimits

0x0478,	// (0x0000fb6d) signal_pane_stacon_g1

0x048c,	// (0x0000fb81) signal_pane_stacon_g2_ParamLimits

0x048c,	// (0x0000fb81) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001edb4) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001edb4) signal_pane_stacon_g

0x04c1,	// (0x0000fbb6) title_pane_stacon_t1_ParamLimits

0x04c1,	// (0x0000fbb6) title_pane_stacon_t1

0x38d9,	// (0x00012fce) uni_indicator_pane_stacon_g1

0x38e3,	// (0x00012fd8) uni_indicator_pane_stacon_g2

0x38ed,	// (0x00012fe2) uni_indicator_pane_stacon_g3

0x38f7,	// (0x00012fec) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001edc0) uni_indicator_pane_stacon_g

0x04e6,	// (0x0000fbdb) control_top_pane_stacon_g1

0x04ee,	// (0x0000fbe3) control_top_pane_stacon_t1_ParamLimits

0x04ee,	// (0x0000fbe3) control_top_pane_stacon_t1

0x0525,	// (0x0000fc1a) aid_levels_battery_lsc_ParamLimits

0x0525,	// (0x0000fc1a) aid_levels_battery_lsc

0x053c,	// (0x0000fc31) battery_pane_stacon_g1_ParamLimits

0x053c,	// (0x0000fc31) battery_pane_stacon_g1

0x054f,	// (0x0000fc44) battery_pane_stacon_g2_ParamLimits

0x054f,	// (0x0000fc44) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001edc9) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001edc9) battery_pane_stacon_g

0x058d,	// (0x0000fc82) navi_icon_pane_stacon

0x05a1,	// (0x0000fc96) navi_navi_pane_stacon

0x058d,	// (0x0000fc82) navi_text_pane_stacon

0x04e6,	// (0x0000fbdb) control_bottom_pane_stacon_g1

0x05b5,	// (0x0000fcaa) control_bottom_pane_stacon_t1_ParamLimits

0x05b5,	// (0x0000fcaa) control_bottom_pane_stacon_t1

0xd016,	// (0x0001c70b) grid_app_pane_ParamLimits

0xd016,	// (0x0001c70b) grid_app_pane

0xd04e,	// (0x0001c743) scroll_pane_cp15_ParamLimits

0xd04e,	// (0x0001c743) scroll_pane_cp15

0xd063,	// (0x0001c758) cell_app_pane_ParamLimits

0xd063,	// (0x0001c758) cell_app_pane

0xd0a8,	// (0x0001c79d) cell_app_pane_g1_ParamLimits

0xd0a8,	// (0x0001c79d) cell_app_pane_g1

0x399a,	// (0x0001308f) cell_app_pane_g2_ParamLimits

0x399a,	// (0x0001308f) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001edce) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001edce) cell_app_pane_g

0xd0cc,	// (0x0001c7c1) cell_app_pane_t1_ParamLimits

0xd0cc,	// (0x0001c7c1) cell_app_pane_t1

0x39bd,	// (0x000130b2) grid_highlight_pane_ParamLimits

0x39bd,	// (0x000130b2) grid_highlight_pane

0x3510,	// (0x00012c05) cell_highlight_pane_g1

0x3518,	// (0x00012c0d) cell_highlight_pane_g2

0x3520,	// (0x00012c15) cell_highlight_pane_g3

0x3528,	// (0x00012c1d) cell_highlight_pane_g4

0x3530,	// (0x00012c25) cell_highlight_pane_g5

0x3538,	// (0x00012c2d) cell_highlight_pane_g6

0x3540,	// (0x00012c35) cell_highlight_pane_g7

0x3548,	// (0x00012c3d) cell_highlight_pane_g8

0x3550,	// (0x00012c45) cell_highlight_pane_g9

0x24f9,	// (0x00011bee) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001ed7c) cell_highlight_pane_g

0x39ce,	// (0x000130c3) bg_scroll_pane

0x05ff,	// (0x0000fcf4) scroll_handle_pane

0x3a15,	// (0x0001310a) scroll_bg_pane_g1

0x3a2a,	// (0x0001311f) scroll_bg_pane_g2

0x3a42,	// (0x00013137) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001edd3) scroll_bg_pane_g

0x3a57,	// (0x0001314c) scroll_handle_focus_pane_ParamLimits

0x3a57,	// (0x0001314c) scroll_handle_focus_pane

0x3a15,	// (0x0001310a) scroll_handle_pane_g1

0x3a64,	// (0x00013159) scroll_handle_pane_g2

0x3a42,	// (0x00013137) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001edda) scroll_handle_pane_g

0x360d,	// (0x00012d02) bg_popup_sub_pane_cp21_ParamLimits

0x360d,	// (0x00012d02) bg_popup_sub_pane_cp21

0x3a78,	// (0x0001316d) popup_fep_japan_predictive_window_t1_ParamLimits

0x3a78,	// (0x0001316d) popup_fep_japan_predictive_window_t1

0x3a92,	// (0x00013187) popup_fep_japan_predictive_window_t2_ParamLimits

0x3a92,	// (0x00013187) popup_fep_japan_predictive_window_t2

0x3ac5,	// (0x000131ba) popup_fep_japan_predictive_window_t3_ParamLimits

0x3ac5,	// (0x000131ba) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001ede1) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001ede1) popup_fep_japan_predictive_window_t

0x2503,	// (0x00011bf8) bg_popup_sub_pane_cp23

0x3afc,	// (0x000131f1) listscroll_japin_cand_pane

0x3b04,	// (0x000131f9) popup_fep_japan_candidate_window_t1

0x3b12,	// (0x00013207) candidate_pane_ParamLimits

0x3b12,	// (0x00013207) candidate_pane

0x3b24,	// (0x00013219) scroll_pane_cp30

0x3b2c,	// (0x00013221) list_single_popup_jap_candidate_pane_ParamLimits

0x3b2c,	// (0x00013221) list_single_popup_jap_candidate_pane

0x2503,	// (0x00011bf8) list_highlight_pane_cp30

0x3b41,	// (0x00013236) list_single_popup_jap_candidate_pane_t1

0x3b50,	// (0x00013245) level_1_signal

0x3b62,	// (0x00013257) level_2_signal

0x3b75,	// (0x0001326a) level_3_signal

0x3b88,	// (0x0001327d) level_4_signal

0x3b9b,	// (0x00013290) level_5_signal

0x3bae,	// (0x000132a3) level_6_signal

0x3bc1,	// (0x000132b6) level_7_signal

0x3b50,	// (0x00013245) level_1_battery

0x3b62,	// (0x00013257) level_2_battery

0x3b75,	// (0x0001326a) level_3_battery

0x3b88,	// (0x0001327d) level_4_battery

0x3b9b,	// (0x00013290) level_5_battery

0x3bae,	// (0x000132a3) level_6_battery

0x3bc1,	// (0x000132b6) level_7_battery

0x3bec,	// (0x000132e1) list_menu_pane_ParamLimits

0x3bec,	// (0x000132e1) list_menu_pane

0x3c02,	// (0x000132f7) scroll_pane_cp25_ParamLimits

0x3c02,	// (0x000132f7) scroll_pane_cp25

0x3c1b,	// (0x00013310) list_double2_graphic_pane_cp2_ParamLimits

0x3c1b,	// (0x00013310) list_double2_graphic_pane_cp2

0x3c1b,	// (0x00013310) list_double2_large_graphic_pane_cp2_ParamLimits

0x3c1b,	// (0x00013310) list_double2_large_graphic_pane_cp2

0x3c1b,	// (0x00013310) list_double2_pane_cp2_ParamLimits

0x3c1b,	// (0x00013310) list_double2_pane_cp2

0x3c1b,	// (0x00013310) list_double_graphic_pane_cp2_ParamLimits

0x3c1b,	// (0x00013310) list_double_graphic_pane_cp2

0x3c1b,	// (0x00013310) list_double_large_graphic_pane_cp2_ParamLimits

0x3c1b,	// (0x00013310) list_double_large_graphic_pane_cp2

0x3c1b,	// (0x00013310) list_double_number_pane_cp2_ParamLimits

0x3c1b,	// (0x00013310) list_double_number_pane_cp2

0x3c1b,	// (0x00013310) list_double_pane_cp2_ParamLimits

0x3c1b,	// (0x00013310) list_double_pane_cp2

0xd0e3,	// (0x0001c7d8) list_single_2graphic_pane_cp2_ParamLimits

0xd0e3,	// (0x0001c7d8) list_single_2graphic_pane_cp2

0xd0e3,	// (0x0001c7d8) list_single_graphic_heading_pane_cp2_ParamLimits

0xd0e3,	// (0x0001c7d8) list_single_graphic_heading_pane_cp2

0xd0e3,	// (0x0001c7d8) list_single_graphic_pane_cp2_ParamLimits

0xd0e3,	// (0x0001c7d8) list_single_graphic_pane_cp2

0xd0e3,	// (0x0001c7d8) list_single_heading_pane_cp2_ParamLimits

0xd0e3,	// (0x0001c7d8) list_single_heading_pane_cp2

0x3c58,	// (0x0001334d) list_single_large_graphic_pane_cp2_ParamLimits

0x3c58,	// (0x0001334d) list_single_large_graphic_pane_cp2

0xd0e3,	// (0x0001c7d8) list_single_number_heading_pane_cp2_ParamLimits

0xd0e3,	// (0x0001c7d8) list_single_number_heading_pane_cp2

0xd0e3,	// (0x0001c7d8) list_single_number_pane_cp2_ParamLimits

0xd0e3,	// (0x0001c7d8) list_single_number_pane_cp2

0xd0e3,	// (0x0001c7d8) list_single_pane_cp2_ParamLimits

0xd0e3,	// (0x0001c7d8) list_single_pane_cp2

0x3cd4,	// (0x000133c9) bg_popup_sub_pane_cp22

0x06b1,	// (0x0000fda6) popup_side_volume_key_window_g1

0x06db,	// (0x0000fdd0) popup_side_volume_key_window_t1

0x06f7,	// (0x0000fdec) volume_small_pane_cp1

0x2878,	// (0x00011f6d) bg_popup_sub_pane_cp24_ParamLimits

0x2878,	// (0x00011f6d) bg_popup_sub_pane_cp24

0x3cea,	// (0x000133df) fep_china_uni_candidate_pane_ParamLimits

0x3cea,	// (0x000133df) fep_china_uni_candidate_pane

0x3cfe,	// (0x000133f3) fep_china_uni_entry_pane

0x3d0e,	// (0x00013403) popup_fep_china_uni_window_g1

0x3d2a,	// (0x0001341f) fep_china_uni_entry_pane_g1

0x3d32,	// (0x00013427) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001ee12) fep_china_uni_entry_pane_g

0x3d3a,	// (0x0001342f) fep_entry_item_pane

0x3d44,	// (0x00013439) fep_candidate_item_pane

0x3d4c,	// (0x00013441) fep_china_uni_candidate_pane_g1

0x3d54,	// (0x00013449) fep_china_uni_candidate_pane_g2

0x3d5c,	// (0x00013451) fep_china_uni_candidate_pane_g3

0x3d64,	// (0x00013459) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001ee17) fep_china_uni_candidate_pane_g

0x24f9,	// (0x00011bee) fep_entry_item_pane_g1

0x3d6c,	// (0x00013461) fep_entry_item_pane_t1_ParamLimits

0x3d6c,	// (0x00013461) fep_entry_item_pane_t1

0x3d82,	// (0x00013477) fep_candidate_item_pane_t1_ParamLimits

0x3d82,	// (0x00013477) fep_candidate_item_pane_t1

0x3d97,	// (0x0001348c) fep_candidate_item_pane_t2_ParamLimits

0x3d97,	// (0x0001348c) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001ee20) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001ee20) fep_candidate_item_pane_t

0x25e3,	// (0x00011cd8) list_highlight_pane_cp31_ParamLimits

0x25e3,	// (0x00011cd8) list_highlight_pane_cp31

0x3da9,	// (0x0001349e) level_1_signal_lsc

0x3db2,	// (0x000134a7) level_2_signal_lsc

0x3dbb,	// (0x000134b0) level_3_signal_lsc

0x3dc4,	// (0x000134b9) level_4_signal_lsc

0x3dcd,	// (0x000134c2) level_5_signal_lsc

0x3dd6,	// (0x000134cb) level_6_signal_lsc

0x3ddf,	// (0x000134d4) level_7_signal_lsc

0x3ddf,	// (0x000134d4) level_1_battery_lsc

0x3de8,	// (0x000134dd) level_2_battery_lsc

0x3df1,	// (0x000134e6) level_3_battery_lsc

0x3dfa,	// (0x000134ef) level_4_battery_lsc

0x3e03,	// (0x000134f8) level_5_battery_lsc

0x3e0c,	// (0x00013501) level_6_battery_lsc

0x3da9,	// (0x0001349e) level_7_battery_lsc

0x3e15,	// (0x0001350a) scroll_handle_focus_pane_g1

0x3e1e,	// (0x00013513) scroll_handle_focus_pane_g2

0x3e27,	// (0x0001351c) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001ee25) scroll_handle_focus_pane_g

0xd170,	// (0x0001c865) list_single_2graphic_pane_g1_ParamLimits

0xd170,	// (0x0001c865) list_single_2graphic_pane_g1

0xcaa4,	// (0x0001c199) list_single_2graphic_pane_g2_ParamLimits

0xcaa4,	// (0x0001c199) list_single_2graphic_pane_g2

0x4a8e,	// (0x00014183) list_single_2graphic_pane_g3_ParamLimits

0x4a8e,	// (0x00014183) list_single_2graphic_pane_g3

0xd17c,	// (0x0001c871) list_single_2graphic_pane_g4_ParamLimits

0xd17c,	// (0x0001c871) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001ee2c) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001ee2c) list_single_2graphic_pane_g

0xd18d,	// (0x0001c882) list_single_2graphic_pane_t1_ParamLimits

0xd18d,	// (0x0001c882) list_single_2graphic_pane_t1

0xd1bb,	// (0x0001c8b0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd1bb,	// (0x0001c8b0) list_double2_graphic_large_graphic_pane_g1

0xcaed,	// (0x0001c1e2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcaed,	// (0x0001c1e2) list_double2_graphic_large_graphic_pane_g2

0xcafe,	// (0x0001c1f3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcafe,	// (0x0001c1f3) list_double2_graphic_large_graphic_pane_g3

0xd1cd,	// (0x0001c8c2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd1cd,	// (0x0001c8c2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001ee35) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001ee35) list_double2_graphic_large_graphic_pane_g

0xd1d9,	// (0x0001c8ce) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd1d9,	// (0x0001c8ce) list_double2_graphic_large_graphic_pane_t1

0xd1ef,	// (0x0001c8e4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd1ef,	// (0x0001c8e4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001ee3e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001ee3e) list_double2_graphic_large_graphic_pane_t

0x3ffe,	// (0x000136f3) popup_fast_swap_window_ParamLimits

0x3ffe,	// (0x000136f3) popup_fast_swap_window

0x401a,	// (0x0001370f) popup_side_volume_key_window

0x4036,	// (0x0001372b) stacon_top_pane

0x4040,	// (0x00013735) status_pane_ParamLimits

0x4040,	// (0x00013735) status_pane

0xd231,	// (0x0001c926) status_small_pane

0x2503,	// (0x00011bf8) control_pane

0x2503,	// (0x00011bf8) stacon_bottom_pane

0x32f8,	// (0x000129ed) scroll_pane_cp121

0x32ef,	// (0x000129e4) set_content_pane

0x3ebf,	// (0x000135b4) bg_active_tab_pane_g1_cp1

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp1

0x3ed1,	// (0x000135c6) bg_active_tab_pane_g3_cp1

0x3ebf,	// (0x000135b4) bg_passive_tab_pane_g1_cp1

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp1

0x3ed1,	// (0x000135c6) bg_passive_tab_pane_g3_cp1

0x3eda,	// (0x000135cf) bg_active_tab_pane_g1_cp2

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp2

0x3ee3,	// (0x000135d8) bg_active_tab_pane_g3_cp2

0x3eda,	// (0x000135cf) bg_passive_tab_pane_g1_cp2

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp2

0x3ee3,	// (0x000135d8) bg_passive_tab_pane_g3_cp2

0x3eec,	// (0x000135e1) bg_active_tab_pane_g1_cp3

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp3

0x3ef5,	// (0x000135ea) bg_active_tab_pane_g3_cp3

0x3eec,	// (0x000135e1) bg_passive_tab_pane_g1_cp3

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp3

0x3ef5,	// (0x000135ea) bg_passive_tab_pane_g3_cp3

0x3efe,	// (0x000135f3) bg_active_tab_pane_g1_cp4

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp4

0x3f09,	// (0x000135fe) bg_active_tab_pane_g3_cp4

0x3efe,	// (0x000135f3) bg_passive_tab_pane_g1_cp4

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp4

0x3f09,	// (0x000135fe) bg_passive_tab_pane_g3_cp4

0x3f52,	// (0x00013647) bg_active_tab_pane_g1_cp5

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp5

0x3f5b,	// (0x00013650) bg_active_tab_pane_g3_cp5

0x3f52,	// (0x00013647) bg_passive_tab_pane_g1_cp5

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp5

0x3f5b,	// (0x00013650) bg_passive_tab_pane_g3_cp5

0x6880,	// (0x00015f75) list_set_graphic_pane_ParamLimits

0x6880,	// (0x00015f75) list_set_graphic_pane

0x2503,	// (0x00011bf8) bg_set_opt_pane_cp4

0xd201,	// (0x0001c8f6) list_set_graphic_pane_g1_ParamLimits

0xd201,	// (0x0001c8f6) list_set_graphic_pane_g1

0xd20d,	// (0x0001c902) list_set_graphic_pane_g2_ParamLimits

0xd20d,	// (0x0001c902) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001ee43) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001ee43) list_set_graphic_pane_g

0x0009,

0xfac3,	// (0x0001f1b8) volume_small_pane_cp_g

0x3fb1,	// (0x000136a6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3fb1,	// (0x000136a6) list_double2_large_graphic_pane_g1_cp2

0x3fbd,	// (0x000136b2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3fbd,	// (0x000136b2) list_double2_large_graphic_pane_g2_cp2

0x3fce,	// (0x000136c3) list_double2_large_graphic_pane_g3_cp2

0x3fd6,	// (0x000136cb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3fd6,	// (0x000136cb) list_double2_large_graphic_pane_t1_cp2

0x3fec,	// (0x000136e1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3fec,	// (0x000136e1) list_double2_large_graphic_pane_t2_cp2

0x5cf2,	// (0x000153e7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5cf2,	// (0x000153e7) list_double_large_graphic_pane_g1_cp2

0x5d03,	// (0x000153f8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5d03,	// (0x000153f8) list_double_large_graphic_pane_g2_cp2

0x4167,	// (0x0001385c) list_double_large_graphic_pane_g3_cp2

0x5d14,	// (0x00015409) list_double_large_graphic_pane_g4_cp

0x5d1c,	// (0x00015411) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5d1c,	// (0x00015411) list_double_large_graphic_pane_t1_cp2

0x5d33,	// (0x00015428) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5d33,	// (0x00015428) list_double_large_graphic_pane_t2_cp2

0x4059,	// (0x0001374e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4059,	// (0x0001374e) list_double2_graphic_pane_g1_cp2

0x4067,	// (0x0001375c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4067,	// (0x0001375c) list_double2_graphic_pane_g2_cp2

0x4078,	// (0x0001376d) list_double2_graphic_pane_g3_cp2

0x4082,	// (0x00013777) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4082,	// (0x00013777) list_double2_graphic_pane_t1_cp2

0x4098,	// (0x0001378d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4098,	// (0x0001378d) list_double2_graphic_pane_t2_cp2

0x40aa,	// (0x0001379f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x40aa,	// (0x0001379f) list_single_number_heading_pane_g1_cp2

0x40b6,	// (0x000137ab) list_single_number_heading_pane_g2_cp2

0x40be,	// (0x000137b3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x40be,	// (0x000137b3) list_single_number_heading_pane_t1_cp2

0x40d4,	// (0x000137c9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x40d4,	// (0x000137c9) list_single_number_heading_pane_t2_cp2

0x40e6,	// (0x000137db) list_single_number_heading_pane_t3_cp2_ParamLimits

0x40e6,	// (0x000137db) list_single_number_heading_pane_t3_cp2

0x40aa,	// (0x0001379f) list_single_heading_pane_g1_cp2_ParamLimits

0x40aa,	// (0x0001379f) list_single_heading_pane_g1_cp2

0x40b6,	// (0x000137ab) list_single_heading_pane_g2_cp2

0x40be,	// (0x000137b3) list_single_heading_pane_t1_cp2_ParamLimits

0x40be,	// (0x000137b3) list_single_heading_pane_t1_cp2

0x5afa,	// (0x000151ef) list_single_heading_pane_t2_cp2_ParamLimits

0x5afa,	// (0x000151ef) list_single_heading_pane_t2_cp2

0x5a42,	// (0x00015137) list_double_graphic_pane_g1_cp2_ParamLimits

0x5a42,	// (0x00015137) list_double_graphic_pane_g1_cp2

0x5a4e,	// (0x00015143) list_double_graphic_pane_g2_cp2_ParamLimits

0x5a4e,	// (0x00015143) list_double_graphic_pane_g2_cp2

0x5a5d,	// (0x00015152) list_double_graphic_pane_g3_cp2

0x5a65,	// (0x0001515a) list_double_graphic_pane_t1_cp2_ParamLimits

0x5a65,	// (0x0001515a) list_double_graphic_pane_t1_cp2

0x5a7b,	// (0x00015170) list_double_graphic_pane_t2_cp2_ParamLimits

0x5a7b,	// (0x00015170) list_double_graphic_pane_t2_cp2

0x415b,	// (0x00013850) list_double_number_pane_g1_cp2_ParamLimits

0x415b,	// (0x00013850) list_double_number_pane_g1_cp2

0x4167,	// (0x0001385c) list_double_number_pane_g2_cp2

0x5a06,	// (0x000150fb) list_double_number_pane_t1_cp2_ParamLimits

0x5a06,	// (0x000150fb) list_double_number_pane_t1_cp2

0x5a1a,	// (0x0001510f) list_double_number_pane_t2_cp2_ParamLimits

0x5a1a,	// (0x0001510f) list_double_number_pane_t2_cp2

0x5a30,	// (0x00015125) list_double_number_pane_t3_cp2_ParamLimits

0x5a30,	// (0x00015125) list_double_number_pane_t3_cp2

0x58ef,	// (0x00014fe4) list_single_graphic_pane_g1_cp2_ParamLimits

0x58ef,	// (0x00014fe4) list_single_graphic_pane_g1_cp2

0x41bf,	// (0x000138b4) list_single_graphic_pane_g2_cp2_ParamLimits

0x41bf,	// (0x000138b4) list_single_graphic_pane_g2_cp2

0x41cb,	// (0x000138c0) list_single_graphic_pane_g3_cp2

0x58c5,	// (0x00014fba) list_single_graphic_pane_t1_cp2_ParamLimits

0x58c5,	// (0x00014fba) list_single_graphic_pane_t1_cp2

0x41bf,	// (0x000138b4) list_single_number_pane_g1_cp2_ParamLimits

0x41bf,	// (0x000138b4) list_single_number_pane_g1_cp2

0x41cb,	// (0x000138c0) list_single_number_pane_g2_cp2

0x58c5,	// (0x00014fba) list_single_number_pane_t1_cp2_ParamLimits

0x58c5,	// (0x00014fba) list_single_number_pane_t1_cp2

0x58db,	// (0x00014fd0) list_single_number_pane_t2_cp2_ParamLimits

0x58db,	// (0x00014fd0) list_single_number_pane_t2_cp2

0x3fbd,	// (0x000136b2) list_double2_pane_g1_cp2_ParamLimits

0x3fbd,	// (0x000136b2) list_double2_pane_g1_cp2

0x3fce,	// (0x000136c3) list_double2_pane_g2_cp2

0x4133,	// (0x00013828) list_double2_pane_t1_cp2_ParamLimits

0x4133,	// (0x00013828) list_double2_pane_t1_cp2

0x4149,	// (0x0001383e) list_double2_pane_t2_cp2_ParamLimits

0x4149,	// (0x0001383e) list_double2_pane_t2_cp2

0x415b,	// (0x00013850) list_double_pane_g1_cp2_ParamLimits

0x415b,	// (0x00013850) list_double_pane_g1_cp2

0x4167,	// (0x0001385c) list_double_pane_g2_cp2

0x416f,	// (0x00013864) list_double_pane_t1_cp2_ParamLimits

0x416f,	// (0x00013864) list_double_pane_t1_cp2

0x4185,	// (0x0001387a) list_double_pane_t2_cp2_ParamLimits

0x4185,	// (0x0001387a) list_double_pane_t2_cp2

0x41af,	// (0x000138a4) list_single_pane_cp2_g3

0x41bf,	// (0x000138b4) list_single_pane_g1_cp2_ParamLimits

0x41bf,	// (0x000138b4) list_single_pane_g1_cp2

0x41cb,	// (0x000138c0) list_single_pane_g2_cp2

0x41d3,	// (0x000138c8) list_single_pane_t1_cp2_ParamLimits

0x41d3,	// (0x000138c8) list_single_pane_t1_cp2

0x41eb,	// (0x000138e0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x41eb,	// (0x000138e0) list_single_large_graphic_pane_g1_cp2

0x41f7,	// (0x000138ec) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x41f7,	// (0x000138ec) list_single_large_graphic_pane_g2_cp2

0x4203,	// (0x000138f8) list_single_large_graphic_pane_g3_cp2

0x420b,	// (0x00013900) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x420b,	// (0x00013900) list_single_large_graphic_pane_g4_cp1

0x4225,	// (0x0001391a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4225,	// (0x0001391a) list_single_large_graphic_pane_t1_cp2

0x5891,	// (0x00014f86) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5891,	// (0x00014f86) list_single_graphic_heading_pane_g1_cp2

0x585e,	// (0x00014f53) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x585e,	// (0x00014f53) list_single_graphic_heading_pane_g4_cp2

0x41cb,	// (0x000138c0) list_single_graphic_heading_pane_g5_cp2

0x589d,	// (0x00014f92) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x589d,	// (0x00014f92) list_single_graphic_heading_pane_t1_cp2

0x58b3,	// (0x00014fa8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x58b3,	// (0x00014fa8) list_single_graphic_heading_pane_t2_cp2

0x5852,	// (0x00014f47) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5852,	// (0x00014f47) list_single_2graphic_pane_g1_cp2

0x585e,	// (0x00014f53) list_single_2graphic_pane_g2_cp2_ParamLimits

0x585e,	// (0x00014f53) list_single_2graphic_pane_g2_cp2

0x41cb,	// (0x000138c0) list_single_2graphic_pane_g3_cp2

0x586f,	// (0x00014f64) list_single_2graphic_pane_g4_cp2_ParamLimits

0x586f,	// (0x00014f64) list_single_2graphic_pane_g4_cp2

0x587b,	// (0x00014f70) list_single_2graphic_pane_t1_cp2_ParamLimits

0x587b,	// (0x00014f70) list_single_2graphic_pane_t1_cp2

0x24f9,	// (0x00011bee) list_highlight_pane_g10_cp1

0x541e,	// (0x00014b13) list_highlight_pane_g1_cp1

0x5426,	// (0x00014b1b) list_highlight_pane_g2_cp1

0x542e,	// (0x00014b23) list_highlight_pane_g3_cp1

0x5436,	// (0x00014b2b) list_highlight_pane_g4_cp1

0x543e,	// (0x00014b33) list_highlight_pane_g5_cp1

0x5446,	// (0x00014b3b) list_highlight_pane_g6_cp1

0x544e,	// (0x00014b43) list_highlight_pane_g7_cp1

0x5456,	// (0x00014b4b) list_highlight_pane_g8_cp1

0x545e,	// (0x00014b53) list_highlight_pane_g9_cp1

0xd8b2,	// (0x0001cfa7) form_field_slider_pane_t3

0xd8c0,	// (0x0001cfb5) form_field_slider_pane_t4

0x535a,	// (0x00014a4f) slider_form_pane_ParamLimits

0x535a,	// (0x00014a4f) slider_form_pane

0x2503,	// (0x00011bf8) control_abbreviations

0x2503,	// (0x00011bf8) control_conventions

0x2503,	// (0x00011bf8) control_definitions

0x2503,	// (0x00011bf8) format_table_attribute

0x5b44,	// (0x00015239) bg_popup_preview_window_pane_g9

0x2503,	// (0x00011bf8) format_table_data2

0x2503,	// (0x00011bf8) format_table_data3

0x2503,	// (0x00011bf8) format_table_data_example

0x0008,

0x2503,	// (0x00011bf8) intro_purpose

0xf8e5,	// (0x0001efda) bg_popup_preview_window_pane_g

0x2503,	// (0x00011bf8) texts_category

0x2503,	// (0x00011bf8) texts_graphics

0x423b,	// (0x00013930) text_digital

0x424a,	// (0x0001393f) text_primary

0x4259,	// (0x0001394e) text_primary_small

0x4268,	// (0x0001395d) text_secondary

0x4277,	// (0x0001396c) text_title

0x6370,	// (0x00015a65) bg_passive_tab_pane_g1_cp3_srt

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp3_srt

0x6379,	// (0x00015a6e) bg_passive_tab_pane_g3_cp3_srt

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp3_srt_ParamLimits

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp3_srt

0x6382,	// (0x00015a77) tabs_4_active_pane_srt_g1

0xdc45,	// (0x0001d33a) tabs_4_active_pane_srt_t1_ParamLimits

0xdc45,	// (0x0001d33a) tabs_4_active_pane_srt_t1

0x6370,	// (0x00015a65) bg_active_tab_pane_g1_cp3_copy1

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp3_copy1

0x6379,	// (0x00015a6e) bg_active_tab_pane_g3_cp3_copy1

0x25e3,	// (0x00011cd8) tabs_2_long_active_pane_srt_ParamLimits

0x25e3,	// (0x00011cd8) tabs_2_long_active_pane_srt

0x25e3,	// (0x00011cd8) tabs_2_long_passive_pane_srt_ParamLimits

0x25e3,	// (0x00011cd8) tabs_2_long_passive_pane_srt

0x45cc,	// (0x00013cc1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x45cc,	// (0x00013cc1) bg_passive_tab_pane_cp4_srt

0x5f9b,	// (0x00015690) bg_passive_tab_pane_g1_cp4_srt

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp4_srt

0x5fa4,	// (0x00015699) bg_passive_tab_pane_g3_cp4_srt

0x25e3,	// (0x00011cd8) bg_active_tab_pane_cp4_srt_ParamLimits

0x25e3,	// (0x00011cd8) bg_active_tab_pane_cp4_srt

0xda31,	// (0x0001d126) tabs_2_long_active_pane_srt_t1_ParamLimits

0xda31,	// (0x0001d126) tabs_2_long_active_pane_srt_t1

0x5f9b,	// (0x00015690) bg_active_tab_pane_g1_cp4_srt

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp4_srt

0x5fa4,	// (0x00015699) bg_active_tab_pane_g3_cp4_srt

0x2878,	// (0x00011f6d) tabs_3_long_active_pane_srt_ParamLimits

0x2878,	// (0x00011f6d) tabs_3_long_active_pane_srt

0x2878,	// (0x00011f6d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2878,	// (0x00011f6d) tabs_3_long_passive_pane_cp_srt

0x2878,	// (0x00011f6d) tabs_3_long_passive_pane_srt_ParamLimits

0x2878,	// (0x00011f6d) tabs_3_long_passive_pane_srt

0x45cc,	// (0x00013cc1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x45cc,	// (0x00013cc1) bg_passive_tab_pane_cp5_srt

0x3f52,	// (0x00013647) bg_passive_tab_pane_g1_cp5_srt

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp5_srt

0x3f5b,	// (0x00013650) bg_passive_tab_pane_g3_cp5_srt

0x25e3,	// (0x00011cd8) bg_active_tab_pane_cp5_srt_ParamLimits

0x25e3,	// (0x00011cd8) bg_active_tab_pane_cp5_srt

0xda1b,	// (0x0001d110) tabs_3_long_active_pane_srt_t1_ParamLimits

0xda1b,	// (0x0001d110) tabs_3_long_active_pane_srt_t1

0x3f52,	// (0x00013647) bg_active_tab_pane_g1_cp5_srt

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp5_srt

0x3f5b,	// (0x00013650) bg_active_tab_pane_g3_cp5_srt

0x5f7b,	// (0x00015670) navi_text_pane_srt_t1

0x5f73,	// (0x00015668) navi_icon_pane_srt_g1

0x4440,	// (0x00013b35) midp_editing_number_pane_srt

0x4286,	// (0x0001397b) midp_ticker_pane_srt

0x4448,	// (0x00013b3d) midp_ticker_pane_srt_g1

0x4450,	// (0x00013b45) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001ee62) midp_ticker_pane_srt_g

0x4458,	// (0x00013b4d) midp_ticker_pane_srt_t1

0x5f64,	// (0x00015659) midp_editing_number_pane_t1_copy1

0x45cc,	// (0x00013cc1) listscroll_midp_pane

0x45cc,	// (0x00013cc1) midp_form_pane

0x42f2,	// (0x000139e7) midp_info_popup_window_ParamLimits

0x42f2,	// (0x000139e7) midp_info_popup_window

0x360d,	// (0x00012d02) bg_popup_sub_pane_cp50_ParamLimits

0x360d,	// (0x00012d02) bg_popup_sub_pane_cp50

0x5056,	// (0x0001474b) listscroll_midp_info_pane_ParamLimits

0x5056,	// (0x0001474b) listscroll_midp_info_pane

0x503e,	// (0x00014733) listscroll_form_midp_pane_ParamLimits

0x503e,	// (0x00014733) listscroll_form_midp_pane

0x504a,	// (0x0001473f) scroll_bar_cp050

0xd8a6,	// (0x0001cf9b) list_midp_pane

0x70dc,	// (0x000167d1) signal_pane_g2_cp

0x4f58,	// (0x0001464d) listscroll_midp_info_pane_t1_ParamLimits

0x4f58,	// (0x0001464d) listscroll_midp_info_pane_t1

0x4f70,	// (0x00014665) listscroll_midp_info_pane_t2_ParamLimits

0x4f70,	// (0x00014665) listscroll_midp_info_pane_t2

0x4fae,	// (0x000146a3) listscroll_midp_info_pane_t3_ParamLimits

0x4fae,	// (0x000146a3) listscroll_midp_info_pane_t3

0x4fe8,	// (0x000146dd) listscroll_midp_info_pane_t4_ParamLimits

0x4fe8,	// (0x000146dd) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001ef15) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001ef15) listscroll_midp_info_pane_t

0x36d1,	// (0x00012dc6) scroll_pane_cp21

0x4ef6,	// (0x000145eb) form_midp_field_choice_group_pane

0x4eff,	// (0x000145f4) form_midp_field_text_pane

0x4f3e,	// (0x00014633) form_midp_field_time_pane

0x4f46,	// (0x0001463b) form_midp_gauge_slider_pane

0x4f4f,	// (0x00014644) form_midp_gauge_wait_pane

0x2503,	// (0x00011bf8) form_midp_image_pane

0xd88f,	// (0x0001cf84) list_single_midp_pane_ParamLimits

0xd88f,	// (0x0001cf84) list_single_midp_pane

0xd86d,	// (0x0001cf62) form_midp_field_text_pane_t1

0x4c3a,	// (0x0001432f) input_focus_pane_cp050

0x4eb6,	// (0x000145ab) list_midp_form_text_pane

0x4e4e,	// (0x00014543) form_midp_field_choice_group_pane_t1

0x4e5c,	// (0x00014551) input_focus_pane_cp051

0x4e70,	// (0x00014565) list_midp_choice_pane

0x2503,	// (0x00011bf8) status_idle_pane

0x4e32,	// (0x00014527) form_midp_field_time_pane_t1

0x24f9,	// (0x00011bee) wait_anim_pane_g2_copy1

0x4e40,	// (0x00014535) form_midp_field_time_pane_t2

0x0001,

0x43a0,	// (0x00013a95) aid_navinavi_width_2_pane

0xf81b,	// (0x0001ef10) form_midp_field_time_pane_t

0x2503,	// (0x00011bf8) input_focus_pane_cp052

0x2503,	// (0x00011bf8) bg_input_focus_pane_cp040

0x4df2,	// (0x000144e7) form_midp_gauge_slider_pane_t1

0x4e00,	// (0x000144f5) form_midp_gauge_slider_pane_t2

0xd851,	// (0x0001cf46) form_midp_gauge_slider_pane_t3

0xd85f,	// (0x0001cf54) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001ef07) form_midp_gauge_slider_pane_t

0x4e2a,	// (0x0001451f) form_midp_slider_pane

0x25e3,	// (0x00011cd8) bg_input_focus_pane_cp041_ParamLimits

0x25e3,	// (0x00011cd8) bg_input_focus_pane_cp041

0x4dbf,	// (0x000144b4) form_midp_gauge_wait_pane_t1_ParamLimits

0x4dbf,	// (0x000144b4) form_midp_gauge_wait_pane_t1

0x4dd1,	// (0x000144c6) form_midp_gauge_wait_pane_t2_ParamLimits

0x4dd1,	// (0x000144c6) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001ef02) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001ef02) form_midp_gauge_wait_pane_t

0x4de3,	// (0x000144d8) form_midp_wait_pane_ParamLimits

0x4de3,	// (0x000144d8) form_midp_wait_pane

0x4d89,	// (0x0001447e) form_midp_image_pane_g1

0x4d92,	// (0x00014487) form_midp_image_pane_t1

0x4da1,	// (0x00014496) form_midp_image_pane_t2

0x4db0,	// (0x000144a5) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001eefb) form_midp_image_pane_t

0x4d71,	// (0x00014466) list_single_midp_pane_g1

0x4d7a,	// (0x0001446f) list_single_midp_pane_t1

0xd83c,	// (0x0001cf31) list_midp_form_item_pane_ParamLimits

0xd83c,	// (0x0001cf31) list_midp_form_item_pane

0x4348,	// (0x00013a3d) list_midp_form_item_pane_t1

0x4357,	// (0x00013a4c) midp_ticker_pane_g1

0x4363,	// (0x00013a58) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001ee48) midp_ticker_pane_g

0x436f,	// (0x00013a64) midp_ticker_pane_t1

0x61e8,	// (0x000158dd) midp_editing_number_pane_t1

0x61c6,	// (0x000158bb) midp_editing_number_pane

0x61d5,	// (0x000158ca) midp_ticker_pane

0x5f2c,	// (0x00015621) ai_message_heading_pane

0x2503,	// (0x00011bf8) bg_popup_window_pane_cp14

0x5f34,	// (0x00015629) listscroll_ai_message_pane

0x5eb6,	// (0x000155ab) ai_message_heading_pane_g1_ParamLimits

0x5eb6,	// (0x000155ab) ai_message_heading_pane_g1

0x5ec2,	// (0x000155b7) ai_message_heading_pane_g2_ParamLimits

0x5ec2,	// (0x000155b7) ai_message_heading_pane_g2

0x5ece,	// (0x000155c3) ai_message_heading_pane_g3_ParamLimits

0x5ece,	// (0x000155c3) ai_message_heading_pane_g3

0x5eda,	// (0x000155cf) ai_message_heading_pane_g4_ParamLimits

0x5eda,	// (0x000155cf) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001f03c) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001f03c) ai_message_heading_pane_g

0x5ee6,	// (0x000155db) ai_message_heading_pane_t1_ParamLimits

0x5ee6,	// (0x000155db) ai_message_heading_pane_t1

0x5f00,	// (0x000155f5) ai_message_heading_pane_t2_ParamLimits

0x5f00,	// (0x000155f5) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001f045) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001f045) ai_message_heading_pane_t

0x5f12,	// (0x00015607) bg_popup_heading_pane_cp1_ParamLimits

0x5f12,	// (0x00015607) bg_popup_heading_pane_cp1

0x5ea4,	// (0x00015599) list_ai_message_pane_ParamLimits

0x5ea4,	// (0x00015599) list_ai_message_pane

0x36d1,	// (0x00012dc6) scroll_pane_cp10

0x5e40,	// (0x00015535) list_ai_message_pane_g1

0x5e48,	// (0x0001553d) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001f019) list_ai_message_pane_g

0x5e50,	// (0x00015545) list_ai_message_pane_t1_ParamLimits

0x5e50,	// (0x00015545) list_ai_message_pane_t1

0x5e65,	// (0x0001555a) list_ai_message_pane_t2_ParamLimits

0x5e65,	// (0x0001555a) list_ai_message_pane_t2

0x5e7a,	// (0x0001556f) list_ai_message_pane_t3_ParamLimits

0x5e7a,	// (0x0001556f) list_ai_message_pane_t3

0x5e8f,	// (0x00015584) list_ai_message_pane_t4_ParamLimits

0x5e8f,	// (0x00015584) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001f01e) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001f01e) list_ai_message_pane_t

0xd9e8,	// (0x0001d0dd) cell_ai_soft_ind_pane_ParamLimits

0xd9e8,	// (0x0001d0dd) cell_ai_soft_ind_pane

0x4381,	// (0x00013a76) cell_ai_soft_ind_pane_g1_ParamLimits

0x4381,	// (0x00013a76) cell_ai_soft_ind_pane_g1

0x2503,	// (0x00011bf8) grid_highlight_cp1

0x438e,	// (0x00013a83) text_secondary_cp56_ParamLimits

0x438e,	// (0x00013a83) text_secondary_cp56

0x5e00,	// (0x000154f5) example_general_pane_ParamLimits

0x5e00,	// (0x000154f5) example_general_pane

0x5e0c,	// (0x00015501) example_parent_pane_g1_ParamLimits

0x5e0c,	// (0x00015501) example_parent_pane_g1

0x5e18,	// (0x0001550d) example_parent_pane_t1_ParamLimits

0x5e18,	// (0x0001550d) example_parent_pane_t1

0xbd82,	// (0x0001b477) popup_preview_text_window_ParamLimits

0xbd82,	// (0x0001b477) popup_preview_text_window

0x41b7,	// (0x000138ac) list_single_pane_cp2_g4

0x292e,	// (0x00012023) bg_popup_preview_window_pane_ParamLimits

0x292e,	// (0x00012023) bg_popup_preview_window_pane

0x5b4c,	// (0x00015241) popup_preview_text_window_t1_ParamLimits

0x5b4c,	// (0x00015241) popup_preview_text_window_t1

0x5b6a,	// (0x0001525f) popup_preview_text_window_t2_ParamLimits

0x5b6a,	// (0x0001525f) popup_preview_text_window_t2

0x5bb3,	// (0x000152a8) popup_preview_text_window_t3_ParamLimits

0x5bb3,	// (0x000152a8) popup_preview_text_window_t3

0x5bf8,	// (0x000152ed) popup_preview_text_window_t4_ParamLimits

0x5bf8,	// (0x000152ed) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001efed) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001efed) popup_preview_text_window_t

0x5c76,	// (0x0001536b) scroll_pane_cp11

0x4b0c,	// (0x00014201) bg_popup_preview_window_pane_g1

0x5b0c,	// (0x00015201) bg_popup_preview_window_pane_g2

0x5b14,	// (0x00015209) bg_popup_preview_window_pane_g3

0x5b1c,	// (0x00015211) bg_popup_preview_window_pane_g4

0x5b24,	// (0x00015219) bg_popup_preview_window_pane_g5

0x5b2c,	// (0x00015221) bg_popup_preview_window_pane_g6

0x5b34,	// (0x00015229) bg_popup_preview_window_pane_g7

0x5b3c,	// (0x00015231) bg_popup_preview_window_pane_g8

0xf53a,	// (0x0001ec2f) aid_popup_width_pane

0xbcfe,	// (0x0001b3f3) popup_midp_note_alarm_window_ParamLimits

0xbcfe,	// (0x0001b3f3) popup_midp_note_alarm_window

0x33b9,	// (0x00012aae) data_form_pane_ParamLimits

0xce8b,	// (0x0001c580) form_field_data_pane_g1

0xce95,	// (0x0001c58a) form_field_data_pane_t1_ParamLimits

0x33e7,	// (0x00012adc) input_focus_pane_ParamLimits

0x33f5,	// (0x00012aea) data_form_wide_pane_ParamLimits

0x3401,	// (0x00012af6) form_field_data_wide_pane_g1

0x3421,	// (0x00012b16) form_field_data_wide_pane_t1_ParamLimits

0x2bdd,	// (0x000122d2) input_focus_pane_cp6_ParamLimits

0xcfd1,	// (0x0001c6c6) input_popup_find_pane_g1_ParamLimits

0xcfd1,	// (0x0001c6c6) input_popup_find_pane_g1

0x0560,	// (0x0000fc55) aid_navi_side_left_pane

0x0575,	// (0x0000fc6a) aid_navi_side_right_pane

0x5519,	// (0x00014c0e) bg_popup_window_pane_cp30_ParamLimits

0x5519,	// (0x00014c0e) bg_popup_window_pane_cp30

0x5593,	// (0x00014c88) popup_midp_note_alarm_window_g1_ParamLimits

0x5593,	// (0x00014c88) popup_midp_note_alarm_window_g1

0x55c3,	// (0x00014cb8) popup_midp_note_alarm_window_t1_ParamLimits

0x55c3,	// (0x00014cb8) popup_midp_note_alarm_window_t1

0x5664,	// (0x00014d59) popup_midp_note_alarm_window_t2_ParamLimits

0x5664,	// (0x00014d59) popup_midp_note_alarm_window_t2

0x5712,	// (0x00014e07) popup_midp_note_alarm_window_t3_ParamLimits

0x5712,	// (0x00014e07) popup_midp_note_alarm_window_t3

0x5744,	// (0x00014e39) popup_midp_note_alarm_window_t4_ParamLimits

0x5744,	// (0x00014e39) popup_midp_note_alarm_window_t4

0x576a,	// (0x00014e5f) popup_midp_note_alarm_window_t5_ParamLimits

0x576a,	// (0x00014e5f) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001ef8a) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001ef8a) popup_midp_note_alarm_window_t

0x5822,	// (0x00014f17) wait_bar_pane_cp1_ParamLimits

0x5822,	// (0x00014f17) wait_bar_pane_cp1

0x2503,	// (0x00011bf8) wait_anim_pane_copy1

0x2503,	// (0x00011bf8) wait_border_pane_copy1

0x51ff,	// (0x000148f4) wait_border_pane_g1_copy1

0x3438,	// (0x00012b2d) form_field_popup_pane_g1

0xceaf,	// (0x0001c5a4) form_field_popup_pane_t1_ParamLimits

0x33e7,	// (0x00012adc) input_focus_pane_cp7_ParamLimits

0x3458,	// (0x00012b4d) list_form_pane_ParamLimits

0x3464,	// (0x00012b59) form_field_popup_wide_pane_g1

0x346c,	// (0x00012b61) form_field_popup_wide_pane_t1_ParamLimits

0x33e7,	// (0x00012adc) input_focus_pane_cp8_ParamLimits

0x3481,	// (0x00012b76) list_form_wide_pane_ParamLimits

0x6408,	// (0x00015afd) aid_size_cell_graphic_pane

0xcf2e,	// (0x0001c623) data_form_pane_t1_ParamLimits

0xdb9c,	// (0x0001d291) data_form_wide_pane_t1_ParamLimits

0xd4c1,	// (0x0001cbb6) bg_status_flat_pane

0xc73f,	// (0x0001be34) title_pane_t1_ParamLimits

0x25ab,	// (0x00011ca0) title_pane_t2_ParamLimits

0x25d1,	// (0x00011cc6) title_pane_t3_ParamLimits

0xf557,	// (0x0001ec4c) title_pane_t_ParamLimits

0x3b50,	// (0x00013245) level_1_signal_ParamLimits

0x3b62,	// (0x00013257) level_2_signal_ParamLimits

0x3b75,	// (0x0001326a) level_3_signal_ParamLimits

0x3b88,	// (0x0001327d) level_4_signal_ParamLimits

0x3b9b,	// (0x00013290) level_5_signal_ParamLimits

0x3bae,	// (0x000132a3) level_6_signal_ParamLimits

0x3bc1,	// (0x000132b6) level_7_signal_ParamLimits

0x3b50,	// (0x00013245) level_1_battery_ParamLimits

0x3b62,	// (0x00013257) level_2_battery_ParamLimits

0x3b75,	// (0x0001326a) level_3_battery_ParamLimits

0x3b88,	// (0x0001327d) level_4_battery_ParamLimits

0x3b9b,	// (0x00013290) level_5_battery_ParamLimits

0x3bae,	// (0x000132a3) level_6_battery_ParamLimits

0x3bc1,	// (0x000132b6) level_7_battery_ParamLimits

0x541e,	// (0x00014b13) bg_status_flat_pane_g1

0x5426,	// (0x00014b1b) bg_status_flat_pane_g2

0x542e,	// (0x00014b23) bg_status_flat_pane_g3

0x5436,	// (0x00014b2b) bg_status_flat_pane_g4

0x543e,	// (0x00014b33) bg_status_flat_pane_g5

0x5446,	// (0x00014b3b) bg_status_flat_pane_g6

0x544e,	// (0x00014b43) bg_status_flat_pane_g7

0xc7cb,	// (0x0001bec0) tabs_3_active_pane_t1_ParamLimits

0xc7cb,	// (0x0001bec0) tabs_3_passive_pane_t1_ParamLimits

0xc7dd,	// (0x0001bed2) tabs_4_active_pane_t1_ParamLimits

0xc7dd,	// (0x0001bed2) tabs_4_1_passive_pane_t1_ParamLimits

0xcfdf,	// (0x0001c6d4) tabs_2_active_pane_t1_ParamLimits

0xcfdf,	// (0x0001c6d4) tabs_2_passive_pane_t1_ParamLimits

0x25e3,	// (0x00011cd8) bg_active_tab_pane_cp4_ParamLimits

0xcff1,	// (0x0001c6e6) tabs_2_long_active_pane_t1_ParamLimits

0x45cc,	// (0x00013cc1) bg_passive_tab_pane_cp4_ParamLimits

0x1119,	// (0x0001080e) list_single_midp_graphic_pane_t1_ParamLimits

0x25e3,	// (0x00011cd8) bg_active_tab_pane_cp5_ParamLimits

0xd004,	// (0x0001c6f9) tabs_3_long_active_pane_t1_ParamLimits

0x45cc,	// (0x00013cc1) bg_passive_tab_pane_cp5_ParamLimits

0x1119,	// (0x0001080e) list_single_midp_graphic_pane_t1

0xd4c1,	// (0x0001cbb6) bg_status_flat_pane_ParamLimits

0x476e,	// (0x00013e63) indicator_pane_cp2_ParamLimits

0x476e,	// (0x00013e63) indicator_pane_cp2

0xd63f,	// (0x0001cd34) navi_pane_srt_ParamLimits

0xd63f,	// (0x0001cd34) navi_pane_srt

0x48bd,	// (0x00013fb2) popup_clock_digital_analogue_window_cp1

0x26da,	// (0x00011dcf) indicator_pane_t1

0x4286,	// (0x0001397b) copy_highlight_pane

0x4286,	// (0x0001397b) cursor_graphics_pane

0x4286,	// (0x0001397b) graphic_within_text_pane

0x4286,	// (0x0001397b) link_highlight_pane

0x5c39,	// (0x0001532e) popup_preview_text_window_t5_ParamLimits

0x5c39,	// (0x0001532e) popup_preview_text_window_t5

0x43a8,	// (0x00013a9d) cursor_digital_pane

0x43a8,	// (0x00013a9d) cursor_primary_pane

0x43b9,	// (0x00013aae) cursor_primary_small_pane

0x43c1,	// (0x00013ab6) cursor_secondary_pane

0x43c9,	// (0x00013abe) cursor_title_pane

0x43a8,	// (0x00013a9d) link_highlight_digital_pane

0x43b0,	// (0x00013aa5) link_highlight_primary_pane

0x43b9,	// (0x00013aae) link_highlight_primary_small_pane

0x43c1,	// (0x00013ab6) link_highlight_secondary_pane

0x43c9,	// (0x00013abe) link_highlight_title_pane

0x43a8,	// (0x00013a9d) copy_highlight_digital_pane

0x43a8,	// (0x00013a9d) copy_highlight_primary_pane

0x43b9,	// (0x00013aae) copy_highlight_primary_small_pane

0x43c1,	// (0x00013ab6) copy_highlight_secondary_pane

0x43c9,	// (0x00013abe) copy_highlight_title_pane

0x43c1,	// (0x00013ab6) graphic_text_digital_pane

0x54bc,	// (0x00014bb1) graphic_text_primary_pane

0x54c5,	// (0x00014bba) graphic_text_primary_small_pane

0x43b9,	// (0x00013aae) graphic_text_secondary_pane

0x43a8,	// (0x00013a9d) graphic_text_title_pane

0xd2d5,	// (0x0001c9ca) cursor_primary_pane_g1

0x54ae,	// (0x00014ba3) cursor_text_primary_t1

0xd8e2,	// (0x0001cfd7) cursor_primary_small_pane_g1

0x54a0,	// (0x00014b95) cursor_text_primary_small_t1

0xd8d8,	// (0x0001cfcd) cursor_primary_small_pane_g1_copy1

0x5488,	// (0x00014b7d) cursor_text_primary_small_t1_copy1

0x5466,	// (0x00014b5b) cursor_text_title_t1

0xd8ce,	// (0x0001cfc3) cursor_title_pane_g1

0xd2d5,	// (0x0001c9ca) cursor_digital_pane_g1

0x43db,	// (0x00013ad0) cursor_text_digital_t1

0x4400,	// (0x00013af5) link_highlight_primary_pane_g1

0x540f,	// (0x00014b04) link_highlight_primary_pane_t1

0x43e9,	// (0x00013ade) link_highlight_primary_small_pane_g1

0x43f1,	// (0x00013ae6) link_highlight_primary_small_pane_t1

0x4400,	// (0x00013af5) link_highlight_secondary_pane_g1

0x4408,	// (0x00013afd) link_highlight_secondary_pane_t1

0x5383,	// (0x00014a78) link_highlight_title_pane_g1

0x538b,	// (0x00014a80) link_highlight_title_pane_t1

0x536c,	// (0x00014a61) link_highlight_digital_pane_g1

0x5374,	// (0x00014a69) link_highlight_digital_pane_t1

0x5244,	// (0x00014939) copy_highlight_primary_pane_g1

0x524c,	// (0x00014941) copy_highlight_primary_pane_t1

0x521e,	// (0x00014913) copy_highlight_primary_small_pane_g1

0x5235,	// (0x0001492a) copy_highlight_primary_small_pane_t1

0x4417,	// (0x00013b0c) copy_highlight_secondary_pane_g1

0x441f,	// (0x00013b14) copy_highlight_secondary_pane_t1

0x521e,	// (0x00014913) copy_highlight_title_pane_g1

0x5226,	// (0x0001491b) copy_highlight_title_pane_t1

0x5244,	// (0x00014939) copy_highlight_digital_pane_g1

0x65d2,	// (0x00015cc7) copy_highlight_digital_pane_t1

0x6526,	// (0x00015c1b) graphic_text_primary_pane_g1

0x65b6,	// (0x00015cab) graphic_text_primary_pane_t1

0x65c4,	// (0x00015cb9) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001f0b9) graphic_text_primary_pane_t

0x6592,	// (0x00015c87) graphic_text_primary_small_pane_g1

0x659a,	// (0x00015c8f) graphic_text_primary_small_pane_t1

0x65a8,	// (0x00015c9d) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001f0b4) graphic_text_primary_small_pane_t

0x656e,	// (0x00015c63) graphic_text_secondary_pane_g1

0x6576,	// (0x00015c6b) graphic_text_secondary_pane_t1

0x6584,	// (0x00015c79) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001f0af) graphic_text_secondary_pane_t

0x654a,	// (0x00015c3f) graphic_text_title_pane_g1

0x6552,	// (0x00015c47) graphic_text_title_pane_t1

0x6560,	// (0x00015c55) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001f0aa) graphic_text_title_pane_t

0x6526,	// (0x00015c1b) graphic_text_digital_pane_g1

0x652e,	// (0x00015c23) graphic_text_digital_pane_t1

0x653c,	// (0x00015c31) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001f0a5) graphic_text_digital_pane_t

0x25e3,	// (0x00011cd8) navi_icon_pane_srt_ParamLimits

0x25e3,	// (0x00011cd8) navi_icon_pane_srt

0x2503,	// (0x00011bf8) navi_midp_pane_srt

0x2503,	// (0x00011bf8) navi_navi_pane_srt

0x25e3,	// (0x00011cd8) navi_text_pane_srt_ParamLimits

0x25e3,	// (0x00011cd8) navi_text_pane_srt

0x64f1,	// (0x00015be6) navi_navi_icon_text_pane_srt

0x64f9,	// (0x00015bee) navi_navi_pane_srt_g1_ParamLimits

0x64f9,	// (0x00015bee) navi_navi_pane_srt_g1

0x650b,	// (0x00015c00) navi_navi_pane_srt_g2_ParamLimits

0x650b,	// (0x00015c00) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001f0a0) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001f0a0) navi_navi_pane_srt_g

0x651d,	// (0x00015c12) navi_navi_tabs_pane_srt

0x64f1,	// (0x00015be6) navi_navi_text_pane_srt

0x64f1,	// (0x00015be6) navi_navi_volume_pane_srt

0x64e2,	// (0x00015bd7) navi_navi_text_pane_srt_t1

0x1493,	// (0x00010b88) navi_navi_volume_pane_srt_g1

0x149b,	// (0x00010b90) volume_small_pane_srt_ParamLimits

0x149b,	// (0x00010b90) volume_small_pane_srt

0x0840,	// (0x0000ff35) volume_small_pane_srt_g1_ParamLimits

0x0840,	// (0x0000ff35) volume_small_pane_srt_g1

0x0850,	// (0x0000ff45) volume_small_pane_srt_g2_ParamLimits

0x0850,	// (0x0000ff45) volume_small_pane_srt_g2

0x0861,	// (0x0000ff56) volume_small_pane_srt_g3_ParamLimits

0x0861,	// (0x0000ff56) volume_small_pane_srt_g3

0x0872,	// (0x0000ff67) volume_small_pane_srt_g4_ParamLimits

0x0872,	// (0x0000ff67) volume_small_pane_srt_g4

0x0883,	// (0x0000ff78) volume_small_pane_srt_g5_ParamLimits

0x0883,	// (0x0000ff78) volume_small_pane_srt_g5

0x0894,	// (0x0000ff89) volume_small_pane_srt_g6_ParamLimits

0x0894,	// (0x0000ff89) volume_small_pane_srt_g6

0x08a5,	// (0x0000ff9a) volume_small_pane_srt_g7_ParamLimits

0x08a5,	// (0x0000ff9a) volume_small_pane_srt_g7

0x08b6,	// (0x0000ffab) volume_small_pane_srt_g8_ParamLimits

0x08b6,	// (0x0000ffab) volume_small_pane_srt_g8

0x08c7,	// (0x0000ffbc) volume_small_pane_srt_g9_ParamLimits

0x08c7,	// (0x0000ffbc) volume_small_pane_srt_g9

0x08d8,	// (0x0000ffcd) volume_small_pane_srt_g10_ParamLimits

0x08d8,	// (0x0000ffcd) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001ee4d) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001ee4d) volume_small_pane_srt_g

0x29d7,	// (0x000120cc) query_popup_data_pane_cp2

0x64c8,	// (0x00015bbd) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x64c8,	// (0x00015bbd) navi_navi_icon_text_pane_srt_t1

0x54bc,	// (0x00014bb1) navi_tabs_2_long_pane_srt

0x54bc,	// (0x00014bb1) navi_tabs_2_pane_srt

0x54bc,	// (0x00014bb1) navi_tabs_3_long_pane_srt

0x54bc,	// (0x00014bb1) navi_tabs_3_pane_srt

0x54bc,	// (0x00014bb1) navi_tabs_4_pane_srt

0x1473,	// (0x00010b68) tabs_2_active_pane_srt_ParamLimits

0x1473,	// (0x00010b68) tabs_2_active_pane_srt

0x1483,	// (0x00010b78) tabs_2_passive_pane_srt_ParamLimits

0x1483,	// (0x00010b78) tabs_2_passive_pane_srt

0x4c3a,	// (0x0001432f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4c3a,	// (0x0001432f) bg_passive_tab_pane_cp1_srt

0x6494,	// (0x00015b89) bg_passive_tab_pane_g1_cp1_srt

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp1_srt

0x649d,	// (0x00015b92) bg_passive_tab_pane_g3_cp1_srt

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp1_srt_ParamLimits

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp1_srt

0x64a6,	// (0x00015b9b) tabs_2_active_pane_srt_g1

0xdcc9,	// (0x0001d3be) tabs_2_active_pane_srt_t1_ParamLimits

0xdcc9,	// (0x0001d3be) tabs_2_active_pane_srt_t1

0x6494,	// (0x00015b89) bg_active_tab_pane_g1_cp1_srt

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp1_srt

0x649d,	// (0x00015b92) bg_active_tab_pane_g3_cp1_srt

0x1440,	// (0x00010b35) tabs_3_active_pane_srt_ParamLimits

0x1440,	// (0x00010b35) tabs_3_active_pane_srt

0x1451,	// (0x00010b46) tabs_3_passive_pane_cp_srt_ParamLimits

0x1451,	// (0x00010b46) tabs_3_passive_pane_cp_srt

0x1462,	// (0x00010b57) tabs_3_passive_pane_srt_ParamLimits

0x1462,	// (0x00010b57) tabs_3_passive_pane_srt

0x4c3a,	// (0x0001432f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4c3a,	// (0x0001432f) bg_passive_tab_pane_cp2_srt

0x442e,	// (0x00013b23) bg_passive_tab_pane_g1_cp2_srt

0x3ec8,	// (0x000135bd) bg_passive_tab_pane_g2_cp2_srt

0x4437,	// (0x00013b2c) bg_passive_tab_pane_g3_cp2_srt

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp2_srt_ParamLimits

0x2878,	// (0x00011f6d) bg_active_tab_pane_cp2_srt

0x647a,	// (0x00015b6f) tabs_3_active_pane_srt_g1

0xdcb3,	// (0x0001d3a8) tabs_3_active_pane_srt_t1_ParamLimits

0xdcb3,	// (0x0001d3a8) tabs_3_active_pane_srt_t1

0x442e,	// (0x00013b23) bg_active_tab_pane_g1_cp2_srt

0x3ec8,	// (0x000135bd) bg_active_tab_pane_g2_cp2_srt

0x4437,	// (0x00013b2c) bg_active_tab_pane_g3_cp2_srt

0x13f8,	// (0x00010aed) tabs_4_active_pane_srt_ParamLimits

0x13f8,	// (0x00010aed) tabs_4_active_pane_srt

0x140a,	// (0x00010aff) tabs_4_passive_pane_cp2_srt_ParamLimits

0x140a,	// (0x00010aff) tabs_4_passive_pane_cp2_srt

0x0a3d,	// (0x00010132) aid_size_cell_toolbar

0x600c,	// (0x00015701) main_idle_act_pane_ParamLimits

0x0c08,	// (0x000102fd) popup_large_graphic_colour_window_ParamLimits

0xc00e,	// (0x0001b703) popup_toolbar_window_ParamLimits

0xc00e,	// (0x0001b703) popup_toolbar_window

0x6212,	// (0x00015907) list_single_graphic_2heading_pane_ParamLimits

0x6212,	// (0x00015907) list_single_graphic_2heading_pane

0x3901,	// (0x00012ff6) aid_size_cell_apps_grid_lsc_pane

0x3913,	// (0x00013008) aid_size_cell_apps_grid_prt_pane

0x45cc,	// (0x00013cc1) bg_wml_button_pane_cp1_ParamLimits

0x45cc,	// (0x00013cc1) bg_wml_button_pane_cp1

0xd86d,	// (0x0001cf62) form_midp_field_text_pane_t1_ParamLimits

0x4c3a,	// (0x0001432f) input_focus_pane_cp050_ParamLimits

0x4eb6,	// (0x000145ab) list_midp_form_text_pane_ParamLimits

0x4e5c,	// (0x00014551) input_focus_pane_cp051_ParamLimits

0x4e70,	// (0x00014565) list_midp_choice_pane_ParamLimits

0xd80a,	// (0x0001ceff) list_single_2graphic_pane_cp3_ParamLimits

0xd80a,	// (0x0001ceff) list_single_2graphic_pane_cp3

0xd81d,	// (0x0001cf12) list_single_midp_graphic_pane_ParamLimits

0xd81d,	// (0x0001cf12) list_single_midp_graphic_pane

0x101c,	// (0x00010711) list_single_graphic_2heading_pane_g1_ParamLimits

0x101c,	// (0x00010711) list_single_graphic_2heading_pane_g1

0x1028,	// (0x0001071d) list_single_graphic_2heading_pane_g4_ParamLimits

0x1028,	// (0x0001071d) list_single_graphic_2heading_pane_g4

0x1034,	// (0x00010729) list_single_graphic_2heading_pane_g5_ParamLimits

0x1034,	// (0x00010729) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001eea0) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001eea0) list_single_graphic_2heading_pane_g

0x1040,	// (0x00010735) list_single_graphic_2heading_pane_t1_ParamLimits

0x1040,	// (0x00010735) list_single_graphic_2heading_pane_t1

0x1054,	// (0x00010749) list_single_graphic_2heading_pane_t2_ParamLimits

0x1054,	// (0x00010749) list_single_graphic_2heading_pane_t2

0x1070,	// (0x00010765) list_single_graphic_2heading_pane_t3_ParamLimits

0x1070,	// (0x00010765) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001eea7) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001eea7) list_single_graphic_2heading_pane_t

0x4a1c,	// (0x00014111) bg_popup_sub_pane_cp2

0x4a46,	// (0x0001413b) grid_toobar_pane

0x1088,	// (0x0001077d) cell_toolbar_pane_ParamLimits

0x1088,	// (0x0001077d) cell_toolbar_pane

0x4ab0,	// (0x000141a5) cell_toolbar_pane_g1_ParamLimits

0x4ab0,	// (0x000141a5) cell_toolbar_pane_g1

0x4ac4,	// (0x000141b9) cell_toolbar_pane_g2_ParamLimits

0x4ac4,	// (0x000141b9) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001eeb5) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001eeb5) cell_toolbar_pane_g

0x4ae6,	// (0x000141db) grid_highlight_pane_cp2_ParamLimits

0x4ae6,	// (0x000141db) grid_highlight_pane_cp2

0x4b00,	// (0x000141f5) toolbar_button_pane

0x4b0c,	// (0x00014201) toolbar_button_pane_g1

0x4b14,	// (0x00014209) toolbar_button_pane_g2

0x4b1c,	// (0x00014211) toolbar_button_pane_g3

0x4b24,	// (0x00014219) toolbar_button_pane_g4

0x4b2c,	// (0x00014221) toolbar_button_pane_g5

0x4b34,	// (0x00014229) toolbar_button_pane_g6

0x4b3c,	// (0x00014231) toolbar_button_pane_g7

0x4b44,	// (0x00014239) toolbar_button_pane_g8

0x4b4c,	// (0x00014241) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001eeba) toolbar_button_pane_g

0x10c0,	// (0x000107b5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x10c0,	// (0x000107b5) list_single_2graphic_pane_g1_cp3

0xc066,	// (0x0001b75b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc066,	// (0x0001b75b) list_single_2graphic_pane_g2_cp3

0x10dd,	// (0x000107d2) list_single_2graphic_pane_g3_cp3

0x10e5,	// (0x000107da) list_single_2graphic_pane_g4_cp3_ParamLimits

0x10e5,	// (0x000107da) list_single_2graphic_pane_g4_cp3

0x10f1,	// (0x000107e6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x10f1,	// (0x000107e6) list_single_2graphic_pane_t1_cp3

0x110d,	// (0x00010802) list_single_midp_graphic_pane_g2_ParamLimits

0x110d,	// (0x00010802) list_single_midp_graphic_pane_g2

0x0a45,	// (0x0001013a) aid_zoom_text_primary

0x0a4d,	// (0x00010142) aid_zoom_text_secondary

0xd32d,	// (0x0001ca22) status_small_pane_g7_ParamLimits

0xd32d,	// (0x0001ca22) status_small_pane_g7

0xd350,	// (0x0001ca45) status_small_pane_t1_ParamLimits

0xc71b,	// (0x0001be10) title_pane_g2

0x0003,

0xf54e,	// (0x0001ec43) title_pane_g

0xc993,	// (0x0001c088) aid_size_cell_colour_1_pane_ParamLimits

0xc993,	// (0x0001c088) aid_size_cell_colour_1_pane

0xc9a7,	// (0x0001c09c) aid_size_cell_colour_2_pane_ParamLimits

0xc9a7,	// (0x0001c09c) aid_size_cell_colour_2_pane

0xc9bb,	// (0x0001c0b0) aid_size_cell_colour_3_pane_ParamLimits

0xc9bb,	// (0x0001c0b0) aid_size_cell_colour_3_pane

0xc9cf,	// (0x0001c0c4) aid_size_cell_colour_4_pane_ParamLimits

0xc9cf,	// (0x0001c0c4) aid_size_cell_colour_4_pane

0x049d,	// (0x0000fb92) title_pane_stacon_g1_ParamLimits

0x049d,	// (0x0000fb92) title_pane_stacon_g1

0x52a3,	// (0x00014998) popup_note_wait_window_g3_ParamLimits

0x52a3,	// (0x00014998) popup_note_wait_window_g3

0x5319,	// (0x00014a0e) popup_note_wait_window_t5_ParamLimits

0x5319,	// (0x00014a0e) popup_note_wait_window_t5

0x2503,	// (0x00011bf8) main_feb_china_hwr_fs_writing_pane

0xba16,	// (0x0001b10b) popup_feb_china_hwr_fs_window_ParamLimits

0xba16,	// (0x0001b10b) popup_feb_china_hwr_fs_window

0xc077,	// (0x0001b76c) aid_size_cell_hwr_fs_ParamLimits

0xc077,	// (0x0001b76c) aid_size_cell_hwr_fs

0x4c3a,	// (0x0001432f) bg_popup_sub_pane_cp3_ParamLimits

0x4c3a,	// (0x0001432f) bg_popup_sub_pane_cp3

0xc08c,	// (0x0001b781) grid_hwr_fs_pane_ParamLimits

0xc08c,	// (0x0001b781) grid_hwr_fs_pane

0x115c,	// (0x00010851) linegrid_hwr_fs_pane_ParamLimits

0x115c,	// (0x00010851) linegrid_hwr_fs_pane

0xc0a4,	// (0x0001b799) cell_hwr_fs_pane_ParamLimits

0xc0a4,	// (0x0001b799) cell_hwr_fs_pane

0x4c46,	// (0x0001433b) linegrid_hwr_fs_pane_g1_ParamLimits

0x4c46,	// (0x0001433b) linegrid_hwr_fs_pane_g1

0xd7de,	// (0x0001ced3) linegrid_hwr_fs_pane_g2_ParamLimits

0xd7de,	// (0x0001ced3) linegrid_hwr_fs_pane_g2

0x4c64,	// (0x00014359) linegrid_hwr_fs_pane_g3_ParamLimits

0x4c64,	// (0x00014359) linegrid_hwr_fs_pane_g3

0x118e,	// (0x00010883) linegrid_hwr_fs_pane_g4_ParamLimits

0x118e,	// (0x00010883) linegrid_hwr_fs_pane_g4

0x11a8,	// (0x0001089d) linegrid_hwr_fs_pane_g5_ParamLimits

0x11a8,	// (0x0001089d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001eee0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001eee0) linegrid_hwr_fs_pane_g

0x4c70,	// (0x00014365) cell_hwr_fs_pane_g1_ParamLimits

0x4c70,	// (0x00014365) cell_hwr_fs_pane_g1

0x4953,	// (0x00014048) cell_hwr_fs_pane_g2_ParamLimits

0x4953,	// (0x00014048) cell_hwr_fs_pane_g2

0xd7f0,	// (0x0001cee5) cell_hwr_fs_pane_g3_ParamLimits

0xd7f0,	// (0x0001cee5) cell_hwr_fs_pane_g3

0xd7fd,	// (0x0001cef2) cell_hwr_fs_pane_g4_ParamLimits

0xd7fd,	// (0x0001cef2) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001eeeb) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001eeeb) cell_hwr_fs_pane_g

0xc0ca,	// (0x0001b7bf) cell_hwr_fs_pane_t1

0x2503,	// (0x00011bf8) grid_highlight_pane_cp6

0x2503,	// (0x00011bf8) main_idle_act2_pane

0x36b8,	// (0x00012dad) aid_inside_area_popup_secondary

0xd8ec,	// (0x0001cfe1) aid_inside_area_window_primary_ParamLimits

0xd8ec,	// (0x0001cfe1) aid_inside_area_window_primary

0x65e1,	// (0x00015cd6) ai2_news_ticker_pane

0x65e9,	// (0x00015cde) aid_size_cell_ai1_link_ParamLimits

0x65e9,	// (0x00015cde) aid_size_cell_ai1_link

0xdcdf,	// (0x0001d3d4) popup_ai2_data_window_ParamLimits

0xdcdf,	// (0x0001d3d4) popup_ai2_data_window

0x6619,	// (0x00015d0e) popup_ai2_link_window_ParamLimits

0x6619,	// (0x00015d0e) popup_ai2_link_window

0x4c3a,	// (0x0001432f) bg_popup_sub_pane_cp4_ParamLimits

0x4c3a,	// (0x0001432f) bg_popup_sub_pane_cp4

0x662d,	// (0x00015d22) grid_ai2_link_pane_ParamLimits

0x662d,	// (0x00015d22) grid_ai2_link_pane

0x6644,	// (0x00015d39) popup_ai2_link_window_g1_ParamLimits

0x6644,	// (0x00015d39) popup_ai2_link_window_g1

0x6650,	// (0x00015d45) popup_ai2_link_window_g2_ParamLimits

0x6650,	// (0x00015d45) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001f0be) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001f0be) popup_ai2_link_window_g

0x665f,	// (0x00015d54) ai2_mp_button_pane

0x6667,	// (0x00015d5c) ai2_mp_volume_pane

0x4e5c,	// (0x00014551) bg_popup_sub_pane_cp5_ParamLimits

0x4e5c,	// (0x00014551) bg_popup_sub_pane_cp5

0x666f,	// (0x00015d64) heading_ai2_gene_pane_ParamLimits

0x666f,	// (0x00015d64) heading_ai2_gene_pane

0x667b,	// (0x00015d70) list_ai2_gene_pane_ParamLimits

0x667b,	// (0x00015d70) list_ai2_gene_pane

0x66c3,	// (0x00015db8) cell_ai2_link_pane_ParamLimits

0x66c3,	// (0x00015db8) cell_ai2_link_pane

0x66d9,	// (0x00015dce) cell_ai2_link_pane_g1

0x2503,	// (0x00011bf8) grid_highlight_pane_cp7

0x14b0,	// (0x00010ba5) ai2_mp_volume_pane_g1

0x67a9,	// (0x00015e9e) ai2_mp_volume_pane_g2

0xdd09,	// (0x0001d3fe) list_ai2_gene_pane_t1

0x67b1,	// (0x00015ea6) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001f0d7) ai2_mp_volume_pane_g

0x14b8,	// (0x00010bad) volume_small_pane_cp3

0x67b9,	// (0x00015eae) aid_size_cell_ai2_button

0x67c1,	// (0x00015eb6) grid_ai2_button_pane

0x67ca,	// (0x00015ebf) cell_ai2_button_pane_ParamLimits

0x67ca,	// (0x00015ebf) cell_ai2_button_pane

0x24f9,	// (0x00011bee) cell_ai2_button_pane_g1

0x2503,	// (0x00011bf8) grid_highlight_pane_cp8

0x6769,	// (0x00015e5e) ai2_gene_pane_t1_ParamLimits

0x6769,	// (0x00015e5e) ai2_gene_pane_t1

0xb990,	// (0x0001b085) aid_height_parent_landscape

0xda48,	// (0x0001d13d) aid_height_set_list

0x600c,	// (0x00015701) aid_size_parent

0x6408,	// (0x00015afd) aid_size_cell_graphic_pane_ParamLimits

0x668b,	// (0x00015d80) popup_ai2_data_window_g1_ParamLimits

0x668b,	// (0x00015d80) popup_ai2_data_window_g1

0x6697,	// (0x00015d8c) ai2_news_ticker_pane_g1

0x669f,	// (0x00015d94) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001f0c3) ai2_news_ticker_pane_g

0x66a7,	// (0x00015d9c) ai2_news_ticker_pane_t1

0x66b5,	// (0x00015daa) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001f0c8) ai2_news_ticker_pane_t

0x66e2,	// (0x00015dd7) heading_ai2_gene_pane_g1

0x66ea,	// (0x00015ddf) heading_ai2_gene_pane_t1_ParamLimits

0x66ea,	// (0x00015ddf) heading_ai2_gene_pane_t1

0x66ff,	// (0x00015df4) list_highlight_pane_cp6

0xdcf3,	// (0x0001d3e8) ai2_gene_pane_ParamLimits

0xdcf3,	// (0x0001d3e8) ai2_gene_pane

0xdd17,	// (0x0001d40c) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001f0cd) list_ai2_gene_pane_t

0x673a,	// (0x00015e2f) list_highlight_pane_cp8_ParamLimits

0x673a,	// (0x00015e2f) list_highlight_pane_cp8

0x674b,	// (0x00015e40) ai2_gene_pane_g1_ParamLimits

0x674b,	// (0x00015e40) ai2_gene_pane_g1

0x675d,	// (0x00015e52) ai2_gene_pane_g2_ParamLimits

0x675d,	// (0x00015e52) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001f0d2) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001f0d2) ai2_gene_pane_g

0x2e02,	// (0x000124f7) scroll_pane_cp12

0xb94f,	// (0x0001b044) control_pane_t3_ParamLimits

0xb94f,	// (0x0001b044) control_pane_t3

0xd341,	// (0x0001ca36) status_small_pane_g8_ParamLimits

0xd341,	// (0x0001ca36) status_small_pane_g8

0xbaab,	// (0x0001b1a0) popup_find_window_ParamLimits

0xbd38,	// (0x0001b42d) popup_note_image_window_ParamLimits

0x4a82,	// (0x00014177) list_double2_graphic_pane_vc_g1_ParamLimits

0x4a82,	// (0x00014177) list_double2_graphic_pane_vc_g1

0x41bf,	// (0x000138b4) list_double2_graphic_pane_vc_g2_ParamLimits

0x41bf,	// (0x000138b4) list_double2_graphic_pane_vc_g2

0x4a8e,	// (0x00014183) list_double2_graphic_pane_vc_g3_ParamLimits

0x4a8e,	// (0x00014183) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001eeae) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eeae) list_double2_graphic_pane_vc_g

0x4a9a,	// (0x0001418f) list_double2_graphic_pane_vc_t1_ParamLimits

0x4a9a,	// (0x0001418f) list_double2_graphic_pane_vc_t1

0x41bf,	// (0x000138b4) list_single_heading_pane_vc_g1_ParamLimits

0x41bf,	// (0x000138b4) list_single_heading_pane_vc_g1

0x4a8e,	// (0x00014183) list_single_heading_pane_vc_g2_ParamLimits

0x4a8e,	// (0x00014183) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ecbd) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ecbd) list_single_heading_pane_vc_g

0x4b54,	// (0x00014249) list_single_heading_pane_vc_t1_ParamLimits

0x4b54,	// (0x00014249) list_single_heading_pane_vc_t1

0x4b6c,	// (0x00014261) list_single_heading_pane_vc_t2_ParamLimits

0x4b6c,	// (0x00014261) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001eecf) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001eecf) list_single_heading_pane_vc_t

0x4b88,	// (0x0001427d) list_setting_number_pane_vc_g1_ParamLimits

0x4b88,	// (0x0001427d) list_setting_number_pane_vc_g1

0x4b94,	// (0x00014289) list_setting_number_pane_vc_g2_ParamLimits

0x4b94,	// (0x00014289) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eed4) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eed4) list_setting_number_pane_vc_g

0x4ba0,	// (0x00014295) list_setting_number_pane_vc_t1_ParamLimits

0x4ba0,	// (0x00014295) list_setting_number_pane_vc_t1

0x4bb4,	// (0x000142a9) list_setting_number_pane_vc_t2_ParamLimits

0x4bb4,	// (0x000142a9) list_setting_number_pane_vc_t2

0x4bd0,	// (0x000142c5) list_setting_number_pane_vc_t3_ParamLimits

0x4bd0,	// (0x000142c5) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001eed9) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001eed9) list_setting_number_pane_vc_t

0x4bfe,	// (0x000142f3) set_value_pane_vc_ParamLimits

0x4bfe,	// (0x000142f3) set_value_pane_vc

0x6212,	// (0x00015907) list_double2_graphic_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_double2_graphic_pane_vc

0x6212,	// (0x00015907) list_double2_large_graphic_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_double2_large_graphic_pane_vc

0x6212,	// (0x00015907) list_double2_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_double2_pane_vc

0x6212,	// (0x00015907) list_double_graphic_heading_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_double_graphic_heading_pane_vc

0x6212,	// (0x00015907) list_double_graphic_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_double_graphic_pane_vc

0x6212,	// (0x00015907) list_double_heading_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_double_heading_pane_vc

0x6224,	// (0x00015919) list_double_large_graphic_pane_vc_ParamLimits

0x6224,	// (0x00015919) list_double_large_graphic_pane_vc

0x6212,	// (0x00015907) list_double_number_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_double_number_pane_vc

0x6212,	// (0x00015907) list_double_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_double_pane_vc

0x6212,	// (0x00015907) list_double_time_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_double_time_pane_vc

0x6212,	// (0x00015907) list_setting_number_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_setting_number_pane_vc

0x6212,	// (0x00015907) list_setting_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_setting_pane_vc

0x6212,	// (0x00015907) list_single_graphic_heading_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_single_graphic_heading_pane_vc

0x6212,	// (0x00015907) list_single_heading_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_single_heading_pane_vc

0x6212,	// (0x00015907) list_single_number_heading_pane_vc_ParamLimits

0x6212,	// (0x00015907) list_single_number_heading_pane_vc

0x4a82,	// (0x00014177) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4a82,	// (0x00014177) list_double_graphic_heading_pane_vc_g1

0x67fe,	// (0x00015ef3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x67fe,	// (0x00015ef3) list_double_graphic_heading_pane_vc_g2

0x680a,	// (0x00015eff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x680a,	// (0x00015eff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001f0de) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001f0de) list_double_graphic_heading_pane_vc_g

0x6816,	// (0x00015f0b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6816,	// (0x00015f0b) list_double_graphic_heading_pane_vc_t1

0x6832,	// (0x00015f27) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6832,	// (0x00015f27) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001f0e5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001f0e5) list_double_graphic_heading_pane_vc_t

0x4b88,	// (0x0001427d) list_setting_pane_vc_g1_ParamLimits

0x4b88,	// (0x0001427d) list_setting_pane_vc_g1

0x4b94,	// (0x00014289) list_setting_pane_vc_g2_ParamLimits

0x4b94,	// (0x00014289) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eed4) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eed4) list_setting_pane_vc_g

0x6a5e,	// (0x00016153) list_setting_pane_vc_t1_ParamLimits

0x6a5e,	// (0x00016153) list_setting_pane_vc_t1

0x6a7a,	// (0x0001616f) list_setting_pane_vc_t2_ParamLimits

0x6a7a,	// (0x0001616f) list_setting_pane_vc_t2

0x0001,

0xfa1e,	// (0x0001f113) list_setting_pane_vc_t_ParamLimits

0xfa1e,	// (0x0001f113) list_setting_pane_vc_t

0x4bfe,	// (0x000142f3) set_value_pane_cp_vc_ParamLimits

0x4bfe,	// (0x000142f3) set_value_pane_cp_vc

0x41bf,	// (0x000138b4) list_single_number_heading_pane_vc_g1_ParamLimits

0x41bf,	// (0x000138b4) list_single_number_heading_pane_vc_g1

0x4a8e,	// (0x00014183) list_single_number_heading_pane_vc_g2_ParamLimits

0x4a8e,	// (0x00014183) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ecbd) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ecbd) list_single_number_heading_pane_vc_g

0x4b54,	// (0x00014249) list_single_number_heading_pane_vc_t1_ParamLimits

0x4b54,	// (0x00014249) list_single_number_heading_pane_vc_t1

0x6a96,	// (0x0001618b) list_single_number_heading_pane_vc_t2_ParamLimits

0x6a96,	// (0x0001618b) list_single_number_heading_pane_vc_t2

0x6aaa,	// (0x0001619f) list_single_number_heading_pane_vc_t3_ParamLimits

0x6aaa,	// (0x0001619f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa23,	// (0x0001f118) list_single_number_heading_pane_vc_t_ParamLimits

0xfa23,	// (0x0001f118) list_single_number_heading_pane_vc_t

0x4a82,	// (0x00014177) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4a82,	// (0x00014177) list_single_graphic_heading_pane_vc_g1

0x41bf,	// (0x000138b4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x41bf,	// (0x000138b4) list_single_graphic_heading_pane_vc_g4

0x4a8e,	// (0x00014183) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4a8e,	// (0x00014183) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001eeae) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eeae) list_single_graphic_heading_pane_vc_g

0x4b54,	// (0x00014249) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4b54,	// (0x00014249) list_single_graphic_heading_pane_vc_t1

0x6abc,	// (0x000161b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6abc,	// (0x000161b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2a,	// (0x0001f11f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2a,	// (0x0001f11f) list_single_graphic_heading_pane_vc_t

0x41bf,	// (0x000138b4) list_double2_pane_vc_g1_ParamLimits

0x41bf,	// (0x000138b4) list_double2_pane_vc_g1

0x4a8e,	// (0x00014183) list_double2_pane_vc_g2_ParamLimits

0x4a8e,	// (0x00014183) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ecbd) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ecbd) list_double2_pane_vc_g

0x6ad0,	// (0x000161c5) list_double2_pane_vc_t1_ParamLimits

0x6ad0,	// (0x000161c5) list_double2_pane_vc_t1

0x6ae6,	// (0x000161db) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6ae6,	// (0x000161db) list_double2_large_graphic_pane_vc_g1

0x41bf,	// (0x000138b4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x41bf,	// (0x000138b4) list_double2_large_graphic_pane_vc_g2

0x4a8e,	// (0x00014183) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4a8e,	// (0x00014183) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001ecda) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001ecda) list_double2_large_graphic_pane_vc_g

0x6af2,	// (0x000161e7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6af2,	// (0x000161e7) list_double2_large_graphic_pane_vc_t1

0x6b08,	// (0x000161fd) list_double_time_pane_vc_g1_ParamLimits

0x6b08,	// (0x000161fd) list_double_time_pane_vc_g1

0x6b14,	// (0x00016209) list_double_time_pane_vc_g2_ParamLimits

0x6b14,	// (0x00016209) list_double_time_pane_vc_g2

0x0001,

0xfa2f,	// (0x0001f124) list_double_time_pane_vc_g_ParamLimits

0xfa2f,	// (0x0001f124) list_double_time_pane_vc_g

0x6b20,	// (0x00016215) list_double_time_pane_vc_t1_ParamLimits

0x6b20,	// (0x00016215) list_double_time_pane_vc_t1

0x6b44,	// (0x00016239) list_double_time_pane_vc_t2_ParamLimits

0x6b44,	// (0x00016239) list_double_time_pane_vc_t2

0x6b73,	// (0x00016268) list_double_time_pane_vc_t3_ParamLimits

0x6b73,	// (0x00016268) list_double_time_pane_vc_t3

0x6b85,	// (0x0001627a) list_double_time_pane_vc_t4_ParamLimits

0x6b85,	// (0x0001627a) list_double_time_pane_vc_t4

0x0003,

0xfa34,	// (0x0001f129) list_double_time_pane_vc_t_ParamLimits

0xfa34,	// (0x0001f129) list_double_time_pane_vc_t

0x41bf,	// (0x000138b4) list_double_pane_vc_g1_ParamLimits

0x41bf,	// (0x000138b4) list_double_pane_vc_g1

0x4a8e,	// (0x00014183) list_double_pane_vc_g2_ParamLimits

0x4a8e,	// (0x00014183) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ecbd) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ecbd) list_double_pane_vc_g

0x6b99,	// (0x0001628e) list_double_pane_vc_t1_ParamLimits

0x6b99,	// (0x0001628e) list_double_pane_vc_t1

0x6bad,	// (0x000162a2) list_double_pane_vc_t2_ParamLimits

0x6bad,	// (0x000162a2) list_double_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001f132) list_double_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001f132) list_double_pane_vc_t

0x41bf,	// (0x000138b4) list_double_number_pane_vc_g1_ParamLimits

0x41bf,	// (0x000138b4) list_double_number_pane_vc_g1

0x4a8e,	// (0x00014183) list_double_number_pane_vc_g2_ParamLimits

0x4a8e,	// (0x00014183) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ecbd) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ecbd) list_double_number_pane_vc_g

0x6bc5,	// (0x000162ba) list_double_number_pane_vc_t1_ParamLimits

0x6bc5,	// (0x000162ba) list_double_number_pane_vc_t1

0x6bd7,	// (0x000162cc) list_double_number_pane_vc_t2_ParamLimits

0x6bd7,	// (0x000162cc) list_double_number_pane_vc_t2

0x6beb,	// (0x000162e0) list_double_number_pane_vc_t3_ParamLimits

0x6beb,	// (0x000162e0) list_double_number_pane_vc_t3

0x0002,

0xfa42,	// (0x0001f137) list_double_number_pane_vc_t_ParamLimits

0xfa42,	// (0x0001f137) list_double_number_pane_vc_t

0x6c03,	// (0x000162f8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6c03,	// (0x000162f8) list_double_large_graphic_pane_vc_g1

0x6c25,	// (0x0001631a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6c25,	// (0x0001631a) list_double_large_graphic_pane_vc_g2

0x6c39,	// (0x0001632e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6c39,	// (0x0001632e) list_double_large_graphic_pane_vc_g3

0x6c48,	// (0x0001633d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6c48,	// (0x0001633d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa49,	// (0x0001f13e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa49,	// (0x0001f13e) list_double_large_graphic_pane_vc_g

0x6c54,	// (0x00016349) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6c54,	// (0x00016349) list_double_large_graphic_pane_vc_t1

0x6c70,	// (0x00016365) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6c70,	// (0x00016365) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa52,	// (0x0001f147) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa52,	// (0x0001f147) list_double_large_graphic_pane_vc_t

0x67fe,	// (0x00015ef3) list_double_heading_pane_vc_g1_ParamLimits

0x67fe,	// (0x00015ef3) list_double_heading_pane_vc_g1

0x680a,	// (0x00015eff) list_double_heading_pane_vc_g2_ParamLimits

0x680a,	// (0x00015eff) list_double_heading_pane_vc_g2

0x0001,

0xfa57,	// (0x0001f14c) list_double_heading_pane_vc_g_ParamLimits

0xfa57,	// (0x0001f14c) list_double_heading_pane_vc_g

0x6c92,	// (0x00016387) list_double_heading_pane_vc_t1_ParamLimits

0x6c92,	// (0x00016387) list_double_heading_pane_vc_t1

0x4b54,	// (0x00014249) list_double_heading_pane_vc_t2_ParamLimits

0x4b54,	// (0x00014249) list_double_heading_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001f151) list_double_heading_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001f151) list_double_heading_pane_vc_t

0x6ca6,	// (0x0001639b) list_double_graphic_pane_vc_g1_ParamLimits

0x6ca6,	// (0x0001639b) list_double_graphic_pane_vc_g1

0x6cb2,	// (0x000163a7) list_double_graphic_pane_vc_g2_ParamLimits

0x6cb2,	// (0x000163a7) list_double_graphic_pane_vc_g2

0x41bf,	// (0x000138b4) list_double_graphic_pane_vc_g3_ParamLimits

0x41bf,	// (0x000138b4) list_double_graphic_pane_vc_g3

0x0003,

0xfa61,	// (0x0001f156) list_double_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0001f156) list_double_graphic_pane_vc_g

0x6ccf,	// (0x000163c4) list_double_graphic_pane_vc_t1_ParamLimits

0x6ccf,	// (0x000163c4) list_double_graphic_pane_vc_t1

0x6cf9,	// (0x000163ee) list_double_graphic_pane_vc_t2_ParamLimits

0x6cf9,	// (0x000163ee) list_double_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001f15f) list_double_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001f15f) list_double_graphic_pane_vc_t

0xf546,	// (0x0001ec3b) aid_size_cell_fastswap

0xb61a,	// (0x0001ad0f) aid_size_cell_touch_ParamLimits

0xb61a,	// (0x0001ad0f) aid_size_cell_touch

0x025d,	// (0x0000f952) popup_fast_swap_wide_window_ParamLimits

0x025d,	// (0x0000f952) popup_fast_swap_wide_window

0xb7ca,	// (0x0001aebf) touch_pane_ParamLimits

0xb7ca,	// (0x0001aebf) touch_pane

0x3301,	// (0x000129f6) button_value_adjust_pane_cp2

0x3309,	// (0x000129fe) button_value_adjust_pane_cp4

0x332b,	// (0x00012a20) form_field_data_pane_cp2

0xce52,	// (0x0001c547) form_field_data_wide_pane_cp2

0x39ce,	// (0x000130c3) bg_scroll_pane_ParamLimits

0x05ff,	// (0x0000fcf4) scroll_handle_pane_ParamLimits

0x0613,	// (0x0000fd08) scroll_sc2_down_pane_ParamLimits

0x0613,	// (0x0000fd08) scroll_sc2_down_pane

0x39ff,	// (0x000130f4) scroll_sc2_up_pane_ParamLimits

0x39ff,	// (0x000130f4) scroll_sc2_up_pane

0xde37,	// (0x0001d52c) grid_wheel_folder_pane_g1_ParamLimits

0xde37,	// (0x0001d52c) grid_wheel_folder_pane_g1

0x07d8,	// (0x0000fecd) clock_nsta_pane_cp2_ParamLimits

0x07d8,	// (0x0000fecd) clock_nsta_pane_cp2

0x45cc,	// (0x00013cc1) listscroll_midp_pane_ParamLimits

0xd23c,	// (0x0001c931) midp_canvas_pane

0x4576,	// (0x00013c6b) nsta_clock_indic_pane

0x45b2,	// (0x00013ca7) listscroll_form_pane_vc

0x45ba,	// (0x00013caf) listscroll_set_pane_vc_ParamLimits

0x45ba,	// (0x00013caf) listscroll_set_pane_vc

0xd4e9,	// (0x0001cbde) clock_nsta_pane

0xd513,	// (0x0001cc08) indicator_nsta_pane

0x4a1c,	// (0x00014111) bg_popup_sub_pane_cp2_ParamLimits

0x4a30,	// (0x00014125) find_pane_cp2_ParamLimits

0x4a30,	// (0x00014125) find_pane_cp2

0x4a46,	// (0x0001413b) grid_toobar_pane_ParamLimits

0x4c0e,	// (0x00014303) list_form_gen_pane_vc_ParamLimits

0x4c0e,	// (0x00014303) list_form_gen_pane_vc

0x4c24,	// (0x00014319) scroll_pane_cp8_vc_ParamLimits

0x4c24,	// (0x00014319) scroll_pane_cp8_vc

0x4ca0,	// (0x00014395) data_form_wide_pane_vc_ParamLimits

0x4ca0,	// (0x00014395) data_form_wide_pane_vc

0x4cac,	// (0x000143a1) form_field_data_wide_pane_vc_g1

0x4cb4,	// (0x000143a9) form_field_data_wide_pane_vc_t1_ParamLimits

0x4cb4,	// (0x000143a9) form_field_data_wide_pane_vc_t1

0x33e7,	// (0x00012adc) input_focus_pane_cp6_vc_ParamLimits

0x33e7,	// (0x00012adc) input_focus_pane_cp6_vc

0xd8a6,	// (0x0001cf9b) list_midp_pane_ParamLimits

0x646e,	// (0x00015b63) scroll_pane_cp16_ParamLimits

0x646e,	// (0x00015b63) scroll_pane_cp16

0x5078,	// (0x0001476d) button_value_adjust_pane_ParamLimits

0x5078,	// (0x0001476d) button_value_adjust_pane

0xda59,	// (0x0001d14e) button_value_adjust_pane_cp6_ParamLimits

0xda59,	// (0x0001d14e) button_value_adjust_pane_cp6

0xdb73,	// (0x0001d268) settings_code_pane_cp_ParamLimits

0xdb73,	// (0x0001d268) settings_code_pane_cp

0x24f9,	// (0x00011bee) cell_touch_pane_g1

0x24f9,	// (0x00011bee) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001edf3) cell_touch_pane_g

0xdd25,	// (0x0001d41a) cell_touch_pane_cp_ParamLimits

0xdd25,	// (0x0001d41a) cell_touch_pane_cp

0xdd41,	// (0x0001d436) cell_touch_pane_ParamLimits

0xdd41,	// (0x0001d436) cell_touch_pane

0x24f9,	// (0x00011bee) scroll_sc2_down_pane_g1

0x24f9,	// (0x00011bee) scroll_sc2_up_pane_g1

0x2503,	// (0x00011bf8) bg_set_opt_pane_cp4_vc

0x6850,	// (0x00015f45) list_set_graphic_pane_vc_g1_ParamLimits

0x6850,	// (0x00015f45) list_set_graphic_pane_vc_g1

0x685c,	// (0x00015f51) list_set_graphic_pane_vc_g2_ParamLimits

0x685c,	// (0x00015f51) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001f0ea) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001f0ea) list_set_graphic_pane_vc_g

0x6868,	// (0x00015f5d) text_primary_small_cp13_vc_ParamLimits

0x6868,	// (0x00015f5d) text_primary_small_cp13_vc

0x6880,	// (0x00015f75) list_set_graphic_pane_vc_ParamLimits

0x6880,	// (0x00015f75) list_set_graphic_pane_vc

0x2503,	// (0x00011bf8) input_focus_pane_cp2_vc

0x24f9,	// (0x00011bee) setting_code_pane_vc_g1

0x262e,	// (0x00011d23) setting_code_pane_vc_t1

0x6893,	// (0x00015f88) set_text_pane_vc_t1_ParamLimits

0x6893,	// (0x00015f88) set_text_pane_vc_t1

0x2503,	// (0x00011bf8) input_focus_pane_cp1_vc

0x68af,	// (0x00015fa4) list_set_text_pane_vc

0x24f9,	// (0x00011bee) setting_text_pane_vc_g1

0x2503,	// (0x00011bf8) bg_set_opt_pane_cp2_vc

0x2625,	// (0x00011d1a) setting_slider_graphic_pane_vc_g1

0x68b9,	// (0x00015fae) setting_slider_graphic_pane_vc_t1

0x68c9,	// (0x00015fbe) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001f0ef) setting_slider_graphic_pane_vc_t

0x68d9,	// (0x00015fce) slider_set_pane_cp_vc

0x68e1,	// (0x00015fd6) slider_set_pane_vc_g1

0x68ea,	// (0x00015fdf) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001f0f4) slider_set_pane_vc_g

0x3510,	// (0x00012c05) set_opt_bg_pane_g1_copy1

0x3518,	// (0x00012c0d) set_opt_bg_pane_g2_copy1

0x6916,	// (0x0001600b) set_opt_bg_pane_g3_copy1

0x3528,	// (0x00012c1d) set_opt_bg_pane_g4_copy1

0x3530,	// (0x00012c25) set_opt_bg_pane_g5_copy1

0x3538,	// (0x00012c2d) set_opt_bg_pane_g6_copy1

0x6920,	// (0x00016015) set_opt_bg_pane_g7_copy1

0x6928,	// (0x0001601d) set_opt_bg_pane_g8_copy1

0x6932,	// (0x00016027) set_opt_bg_pane_g9_copy1

0x2503,	// (0x00011bf8) bg_set_opt_pane_cp_vc

0x693c,	// (0x00016031) setting_slider_pane_vc_t1

0x694b,	// (0x00016040) setting_slider_pane_vc_t2

0x695b,	// (0x00016050) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001f103) setting_slider_pane_vc_t

0x696b,	// (0x00016060) slider_set_pane_vc

0x11cc,	// (0x000108c1) volume_set_pane_vc_g1

0x11d5,	// (0x000108ca) volume_set_pane_vc_g2

0x11de,	// (0x000108d3) volume_set_pane_vc_g3

0x11e7,	// (0x000108dc) volume_set_pane_vc_g4

0x11f0,	// (0x000108e5) volume_set_pane_vc_g5

0x11f9,	// (0x000108ee) volume_set_pane_vc_g6

0x1202,	// (0x000108f7) volume_set_pane_vc_g7

0x120b,	// (0x00010900) volume_set_pane_vc_g8

0x1214,	// (0x00010909) volume_set_pane_vc_g9

0x121d,	// (0x00010912) volume_set_pane_vc_g10

0x0009,

0xf8ac,	// (0x0001efa1) volume_set_pane_vc_g

0x6973,	// (0x00016068) volume_set_pane_vc

0x697b,	// (0x00016070) button_value_adjust_pane_cp1_vc

0x6985,	// (0x0001607a) list_highlight_pane_cp2_vc

0x698e,	// (0x00016083) list_set_pane_vc_ParamLimits

0x698e,	// (0x00016083) list_set_pane_vc

0x69ec,	// (0x000160e1) main_pane_set_vc_t1_ParamLimits

0x69ec,	// (0x000160e1) main_pane_set_vc_t1

0x6a01,	// (0x000160f6) main_pane_set_vc_t2_ParamLimits

0x6a01,	// (0x000160f6) main_pane_set_vc_t2

0x6a13,	// (0x00016108) main_pane_set_vc_t3_ParamLimits

0x6a13,	// (0x00016108) main_pane_set_vc_t3

0x6a27,	// (0x0001611c) main_pane_set_vc_t4_ParamLimits

0x6a27,	// (0x0001611c) main_pane_set_vc_t4

0x0003,

0xfa15,	// (0x0001f10a) main_pane_set_vc_t_ParamLimits

0xfa15,	// (0x0001f10a) main_pane_set_vc_t

0x6a3b,	// (0x00016130) setting_code_pane_vc_ParamLimits

0x6a3b,	// (0x00016130) setting_code_pane_vc

0x6a4c,	// (0x00016141) setting_slider_graphic_pane_vc

0x6a4c,	// (0x00016141) setting_slider_pane_vc

0x6a4c,	// (0x00016141) setting_text_pane_vc

0x6a4c,	// (0x00016141) setting_volume_pane_vc

0x6a56,	// (0x0001614b) scroll_pane_cp121_vc

0x32ef,	// (0x000129e4) set_content_pane_vc

0x6d23,	// (0x00016418) button_value_adjust_pane_g1

0x6d2c,	// (0x00016421) button_value_adjust_pane_g2

0x0001,

0xfa6f,	// (0x0001f164) button_value_adjust_pane_g

0x6d35,	// (0x0001642a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d35,	// (0x0001642a) form_field_slider_wide_pane_vc_t1

0x6d49,	// (0x0001643e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d49,	// (0x0001643e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa74,	// (0x0001f169) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x0001f169) form_field_slider_wide_pane_vc_t

0x2878,	// (0x00011f6d) input_focus_pane_cp10_vc_ParamLimits

0x2878,	// (0x00011f6d) input_focus_pane_cp10_vc

0x6d77,	// (0x0001646c) slider_cont_pane_cp1_vc_ParamLimits

0x6d77,	// (0x0001646c) slider_cont_pane_cp1_vc

0x6d89,	// (0x0001647e) slider_form_pane_g1_cp2

0x68ea,	// (0x00015fdf) slider_form_pane_g2_cp2

0x6db6,	// (0x000164ab) form_field_slider_pane_vc_t3

0x6dc4,	// (0x000164b9) form_field_slider_pane_vc_t4

0x6dd2,	// (0x000164c7) slider_form_pane_vc_ParamLimits

0x6dd2,	// (0x000164c7) slider_form_pane_vc

0x6ddf,	// (0x000164d4) form_field_slider_pane_vc_t1_ParamLimits

0x6ddf,	// (0x000164d4) form_field_slider_pane_vc_t1

0x6d49,	// (0x0001643e) form_field_slider_pane_vc_t2_ParamLimits

0x6d49,	// (0x0001643e) form_field_slider_pane_vc_t2

0x0001,

0xfa86,	// (0x0001f17b) form_field_slider_pane_vc_t_ParamLimits

0xfa86,	// (0x0001f17b) form_field_slider_pane_vc_t

0x2878,	// (0x00011f6d) input_focus_pane_cp9_vc_ParamLimits

0x2878,	// (0x00011f6d) input_focus_pane_cp9_vc

0x6dfb,	// (0x000164f0) slider_cont_pane_vc_ParamLimits

0x6dfb,	// (0x000164f0) slider_cont_pane_vc

0x6e0f,	// (0x00016504) list_form_graphic_pane_cp_vc_ParamLimits

0x6e0f,	// (0x00016504) list_form_graphic_pane_cp_vc

0x4cac,	// (0x000143a1) form_field_popup_wide_pane_vc_g1

0x6e24,	// (0x00016519) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e24,	// (0x00016519) form_field_popup_wide_pane_vc_t1

0x33e7,	// (0x00012adc) input_focus_pane_cp8_vc_ParamLimits

0x33e7,	// (0x00012adc) input_focus_pane_cp8_vc

0x6e69,	// (0x0001655e) list_form_wide_pane_vc_ParamLimits

0x6e69,	// (0x0001655e) list_form_wide_pane_vc

0x6e75,	// (0x0001656a) list_form_graphic_pane_vc_g1

0x6e7d,	// (0x00016572) list_form_graphic_pane_vc_t1_ParamLimits

0x6e7d,	// (0x00016572) list_form_graphic_pane_vc_t1

0x25e3,	// (0x00011cd8) list_highlight_pane_cp5_vc_ParamLimits

0x25e3,	// (0x00011cd8) list_highlight_pane_cp5_vc

0x6e99,	// (0x0001658e) list_form_graphic_pane_vc_ParamLimits

0x6e99,	// (0x0001658e) list_form_graphic_pane_vc

0x4cac,	// (0x000143a1) form_field_popup_pane_vc_g1

0x6eaf,	// (0x000165a4) form_field_popup_pane_vc_t1_ParamLimits

0x6eaf,	// (0x000165a4) form_field_popup_pane_vc_t1

0x33e7,	// (0x00012adc) input_focus_pane_cp7_vc_ParamLimits

0x33e7,	// (0x00012adc) input_focus_pane_cp7_vc

0x6ec6,	// (0x000165bb) list_form_pane_vc_ParamLimits

0x6ec6,	// (0x000165bb) list_form_pane_vc

0x6ed2,	// (0x000165c7) data_form_pane_vc_t1_ParamLimits

0x6ed2,	// (0x000165c7) data_form_pane_vc_t1

0x3510,	// (0x00012c05) input_focus_pane_vc_g1

0x3518,	// (0x00012c0d) input_focus_pane_vc_g2

0x3520,	// (0x00012c15) input_focus_pane_vc_g3

0x3528,	// (0x00012c1d) input_focus_pane_vc_g4

0x3530,	// (0x00012c25) input_focus_pane_vc_g5

0x3538,	// (0x00012c2d) input_focus_pane_vc_g6

0x3540,	// (0x00012c35) input_focus_pane_vc_g7

0x3548,	// (0x00012c3d) input_focus_pane_vc_g8

0x3550,	// (0x00012c45) input_focus_pane_vc_g9

0x24f9,	// (0x00011bee) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001ed7c) input_focus_pane_vc_g

0x4ca0,	// (0x00014395) data_form_pane_vc_ParamLimits

0x4ca0,	// (0x00014395) data_form_pane_vc

0x4cac,	// (0x000143a1) form_field_data_pane_vc_g1

0x6eed,	// (0x000165e2) form_field_data_pane_vc_t1_ParamLimits

0x6eed,	// (0x000165e2) form_field_data_pane_vc_t1

0x33e7,	// (0x00012adc) input_focus_pane_vc_ParamLimits

0x33e7,	// (0x00012adc) input_focus_pane_vc

0x6f07,	// (0x000165fc) button_value_adjust_pane_cp3_vc

0x6f0f,	// (0x00016604) button_value_adjust_pane_cp5_vc

0x6f17,	// (0x0001660c) form_field_data_pane_vc_ParamLimits

0x6f17,	// (0x0001660c) form_field_data_pane_vc

0x6f2e,	// (0x00016623) form_field_data_pane_vc_cp2

0x6f36,	// (0x0001662b) form_field_data_wide_pane_vc_ParamLimits

0x6f36,	// (0x0001662b) form_field_data_wide_pane_vc

0x6f4c,	// (0x00016641) form_field_data_wide_pane_vc_cp2

0x6f54,	// (0x00016649) form_field_popup_pane_vc_ParamLimits

0x6f54,	// (0x00016649) form_field_popup_pane_vc

0x6f6b,	// (0x00016660) form_field_popup_wide_pane_vc_ParamLimits

0x6f6b,	// (0x00016660) form_field_popup_wide_pane_vc

0x6f81,	// (0x00016676) form_field_slider_pane_vc_ParamLimits

0x6f81,	// (0x00016676) form_field_slider_pane_vc

0x6f94,	// (0x00016689) form_field_slider_wide_pane_vc_ParamLimits

0x6f94,	// (0x00016689) form_field_slider_wide_pane_vc

0xdd5f,	// (0x0001d454) grid_touch_1_pane_ParamLimits

0xdd5f,	// (0x0001d454) grid_touch_1_pane

0xdd73,	// (0x0001d468) grid_touch_2_pane_ParamLimits

0xdd73,	// (0x0001d468) grid_touch_2_pane

0x7062,	// (0x00016757) touch_pane_g1_ParamLimits

0x7062,	// (0x00016757) touch_pane_g1

0x6fcb,	// (0x000166c0) cell_app_pane_cp_wide_ParamLimits

0x6fcb,	// (0x000166c0) cell_app_pane_cp_wide

0x6fdc,	// (0x000166d1) grid_popup_fast_wide_pane_ParamLimits

0x6fdc,	// (0x000166d1) grid_popup_fast_wide_pane

0x6ff0,	// (0x000166e5) scroll_pane_cp19_ParamLimits

0x6ff0,	// (0x000166e5) scroll_pane_cp19

0x2503,	// (0x00011bf8) bg_popup_window_pane_cp20

0x7004,	// (0x000166f9) listscroll_popup_fast_wide_pane

0x3724,	// (0x00012e19) grid_indicator_nsta_pane

0x700c,	// (0x00016701) clock_nsta_pane_g1

0x7015,	// (0x0001670a) clock_nsta_pane_t1

0xdd9d,	// (0x0001d492) cell_indicator_nsta_pane_ParamLimits

0xdd9d,	// (0x0001d492) cell_indicator_nsta_pane

0x7062,	// (0x00016757) cell_indicator_nsta_pane_g1

0xddb4,	// (0x0001d4a9) cell_indicator_nsta_pane_g2

0x0001,

0xfa97,	// (0x0001f18c) cell_indicator_nsta_pane_g

0x707d,	// (0x00016772) clock_nsta_pane_cp

0x7085,	// (0x0001677a) indicator_nsta_pane_cp

0x708d,	// (0x00016782) nsta_clock_indic_pane_g1

0x26c6,	// (0x00011dbb) grid_indicator_pane

0x3af4,	// (0x000131e9) scroll_pane_cp29

0x0727,	// (0x0000fe1c) indicator_nsta_pane_cp2_ParamLimits

0x0727,	// (0x0000fe1c) indicator_nsta_pane_cp2

0x25e3,	// (0x00011cd8) main_apps_wheel_pane

0x4eff,	// (0x000145f4) form_midp_field_text_pane_ParamLimits

0x504a,	// (0x0001473f) scroll_bar_cp050_ParamLimits

0x70ee,	// (0x000167e3) cell_indicator_pane_ParamLimits

0x70ee,	// (0x000167e3) cell_indicator_pane

0x7105,	// (0x000167fa) cell_indicator_pane_g1

0xddc1,	// (0x0001d4b6) grid_wheel_folder_pane_ParamLimits

0xddc1,	// (0x0001d4b6) grid_wheel_folder_pane

0xddcf,	// (0x0001d4c4) list_wheel_apps_pane_ParamLimits

0xddcf,	// (0x0001d4c4) list_wheel_apps_pane

0xdddd,	// (0x0001d4d2) main_apps_wheel_pane_g1_ParamLimits

0xdddd,	// (0x0001d4d2) main_apps_wheel_pane_g1

0xdde9,	// (0x0001d4de) main_apps_wheel_pane_g2_ParamLimits

0xdde9,	// (0x0001d4de) main_apps_wheel_pane_g2

0x0001,

0xfab3,	// (0x0001f1a8) main_apps_wheel_pane_g_ParamLimits

0xfab3,	// (0x0001f1a8) main_apps_wheel_pane_g

0xddf7,	// (0x0001d4ec) main_apps_wheel_pane_t1_ParamLimits

0xddf7,	// (0x0001d4ec) main_apps_wheel_pane_t1

0xde0b,	// (0x0001d500) list_wheel_apps_pane_g1

0xde13,	// (0x0001d508) list_wheel_apps_pane_g2

0xde1b,	// (0x0001d510) list_wheel_apps_pane_g3

0xde23,	// (0x0001d518) list_wheel_apps_pane_g4

0xde2d,	// (0x0001d522) list_wheel_apps_pane_g5

0x0004,

0xfab8,	// (0x0001f1ad) list_wheel_apps_pane_g

0x4106,	// (0x000137fb) navi_icon_text_pane

0xd3dd,	// (0x0001cad2) aid_fill_nsta

0x71ca,	// (0x000168bf) navi_icon_text_pane_g1

0x71d6,	// (0x000168cb) navi_icon_text_pane_t1

0xd219,	// (0x0001c90e) list_set_graphic_pane_t1_ParamLimits

0xd219,	// (0x0001c90e) list_set_graphic_pane_t1

0x5799,	// (0x00014e8e) popup_midp_note_alarm_window_t6_ParamLimits

0x5799,	// (0x00014e8e) popup_midp_note_alarm_window_t6

0x57ab,	// (0x00014ea0) popup_midp_note_alarm_window_t7_ParamLimits

0x57ab,	// (0x00014ea0) popup_midp_note_alarm_window_t7

0x57c9,	// (0x00014ebe) popup_midp_note_alarm_window_t8_ParamLimits

0x57c9,	// (0x00014ebe) popup_midp_note_alarm_window_t8

0x57db,	// (0x00014ed0) popup_midp_note_alarm_window_t9_ParamLimits

0x57db,	// (0x00014ed0) popup_midp_note_alarm_window_t9

0x57ed,	// (0x00014ee2) popup_midp_note_alarm_window_t10_ParamLimits

0x57ed,	// (0x00014ee2) popup_midp_note_alarm_window_t10

0x57ff,	// (0x00014ef4) popup_midp_note_alarm_window_t11_ParamLimits

0x57ff,	// (0x00014ef4) popup_midp_note_alarm_window_t11

0x5811,	// (0x00014f06) scroll_pane_cp17_ParamLimits

0x5811,	// (0x00014f06) scroll_pane_cp17

0x11cc,	// (0x000108c1) volume_small_pane_cp_g1

0x14c1,	// (0x00010bb6) volume_small_pane_cp_g2

0x14ca,	// (0x00010bbf) volume_small_pane_cp_g3

0x14d3,	// (0x00010bc8) volume_small_pane_cp_g4

0x14dc,	// (0x00010bd1) volume_small_pane_cp_g5

0x14e5,	// (0x00010bda) volume_small_pane_cp_g6

0x14ee,	// (0x00010be3) volume_small_pane_cp_g7

0x14f7,	// (0x00010bec) volume_small_pane_cp_g8

0x1500,	// (0x00010bf5) volume_small_pane_cp_g9

0x1509,	// (0x00010bfe) volume_small_pane_cp_g10

0x4357,	// (0x00013a4c) midp_ticker_pane_g1_ParamLimits

0x4363,	// (0x00013a58) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001ee48) midp_ticker_pane_g_ParamLimits

0x436f,	// (0x00013a64) midp_ticker_pane_t1_ParamLimits

0xd401,	// (0x0001caf6) aid_fill_nsta_2

0x5036,	// (0x0001472b) list_form2_midp_pane

0x61c6,	// (0x000158bb) midp_editing_number_pane_ParamLimits

0x61d5,	// (0x000158ca) midp_ticker_pane_ParamLimits

0x71e8,	// (0x000168dd) form2_midp_field_pane

0x720c,	// (0x00016901) scroll_pane_cp51

0x722c,	// (0x00016921) form2_midp_button_pane_ParamLimits

0x722c,	// (0x00016921) form2_midp_button_pane

0x723e,	// (0x00016933) form2_midp_content_pane_ParamLimits

0x723e,	// (0x00016933) form2_midp_content_pane

0x7258,	// (0x0001694d) form2_midp_field_choice_group_pane

0x7260,	// (0x00016955) form2_midp_field_pane_g1

0x7268,	// (0x0001695d) form2_midp_field_pane_g2

0x7270,	// (0x00016965) form2_midp_field_pane_g3

0x7278,	// (0x0001696d) form2_midp_field_pane_g4

0x0003,

0xfadd,	// (0x0001f1d2) form2_midp_field_pane_g

0x7280,	// (0x00016975) form2_midp_gauge_slider_pane

0x7288,	// (0x0001697d) form2_midp_gauge_wait_pane

0x7290,	// (0x00016985) form2_midp_image_pane_ParamLimits

0x7290,	// (0x00016985) form2_midp_image_pane

0x72ab,	// (0x000169a0) form2_midp_label_pane_ParamLimits

0x72ab,	// (0x000169a0) form2_midp_label_pane

0xde60,	// (0x0001d555) form2_midp_label_pane_cp_ParamLimits

0xde60,	// (0x0001d555) form2_midp_label_pane_cp

0x72e5,	// (0x000169da) form2_midp_string_pane_ParamLimits

0x72e5,	// (0x000169da) form2_midp_string_pane

0xde7f,	// (0x0001d574) form2_midp_text_pane_ParamLimits

0xde7f,	// (0x0001d574) form2_midp_text_pane

0x7314,	// (0x00016a09) form2_midp_time_pane

0x7324,	// (0x00016a19) input_focus_pane_cp51_ParamLimits

0x7324,	// (0x00016a19) input_focus_pane_cp51

0x733c,	// (0x00016a31) form2_midp_label_pane_t1_ParamLimits

0x733c,	// (0x00016a31) form2_midp_label_pane_t1

0xde98,	// (0x0001d58d) form2_mdip_text_pane_t1_ParamLimits

0xde98,	// (0x0001d58d) form2_mdip_text_pane_t1

0x739c,	// (0x00016a91) form2_midp_time_pane_t1

0x73b7,	// (0x00016aac) form2_midp_gauge_slider_pane_t1

0xdeb3,	// (0x0001d5a8) form2_midp_gauge_slider_pane_t2

0xdec5,	// (0x0001d5ba) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae6,	// (0x0001f1db) form2_midp_gauge_slider_pane_t

0x73ed,	// (0x00016ae2) form2_midp_slider_pane

0x73f9,	// (0x00016aee) form2_midp_gauge_wait_pane_t1

0x7407,	// (0x00016afc) form2_midp_wait_pane_ParamLimits

0x7407,	// (0x00016afc) form2_midp_wait_pane

0xded7,	// (0x0001d5cc) list_single_2graphic_pane_cp4_ParamLimits

0xded7,	// (0x0001d5cc) list_single_2graphic_pane_cp4

0xd81d,	// (0x0001cf12) list_single_midp_graphic_pane_cp_ParamLimits

0xd81d,	// (0x0001cf12) list_single_midp_graphic_pane_cp

0x2503,	// (0x00011bf8) list_highlight_pane_cp20

0x7461,	// (0x00016b56) list_single_2graphic_pane_g1_cp4

0x7469,	// (0x00016b5e) list_single_2graphic_pane_g2_cp4

0x7471,	// (0x00016b66) list_single_2graphic_pane_t1_cp4

0x25e3,	// (0x00011cd8) list_highlight_pane_cp21

0x7480,	// (0x00016b75) list_single_midp_graphic_pane_g4_cp

0x748f,	// (0x00016b84) list_single_midp_graphic_pane_t1_cp

0xdeeb,	// (0x0001d5e0) form2_mdip_string_pane_t1_ParamLimits

0xdeeb,	// (0x0001d5e0) form2_mdip_string_pane_t1

0x2503,	// (0x00011bf8) bg_wml_button_pane_cp2

0x24f9,	// (0x00011bee) form2_midp_image_pane_g1

0x30a5,	// (0x0001279a) list_double_large_graphic_pane_g5_ParamLimits

0x30a5,	// (0x0001279a) list_double_large_graphic_pane_g5

0x45cc,	// (0x00013cc1) midp_form_pane_ParamLimits

0x25e3,	// (0x00011cd8) main_apps_wheel_pane_ParamLimits

0xbdb6,	// (0x0001b4ab) popup_preview_window_ParamLimits

0xbdb6,	// (0x0001b4ab) popup_preview_window

0x0fc7,	// (0x000106bc) popup_touch_info_window_ParamLimits

0x0fc7,	// (0x000106bc) popup_touch_info_window

0x0fe5,	// (0x000106da) popup_touch_menu_window_ParamLimits

0x0fe5,	// (0x000106da) popup_touch_menu_window

0x24ef,	// (0x00011be4) bg_popup_sub_pane_cp6

0x759d,	// (0x00016c92) list_touch_menu_pane

0x75a5,	// (0x00016c9a) list_single_touch_menu_pane_ParamLimits

0x75a5,	// (0x00016c9a) list_single_touch_menu_pane

0x75bb,	// (0x00016cb0) list_single_touch_menu_pane_t1

0x25e3,	// (0x00011cd8) bg_popup_sub_pane_cp7_ParamLimits

0x25e3,	// (0x00011cd8) bg_popup_sub_pane_cp7

0x75c9,	// (0x00016cbe) heading_sub_pane

0x75d1,	// (0x00016cc6) list_touch_info_pane_ParamLimits

0x75d1,	// (0x00016cc6) list_touch_info_pane

0x75e0,	// (0x00016cd5) list_single_touch_info_pane_ParamLimits

0x75e0,	// (0x00016cd5) list_single_touch_info_pane

0x75f2,	// (0x00016ce7) list_single_touch_info_pane_t1

0x7600,	// (0x00016cf5) list_single_touch_info_pane_t2

0x0001,

0xfaf4,	// (0x0001f1e9) list_single_touch_info_pane_t

0x4286,	// (0x0001397b) bg_popup_heading_pane_cp

0x760e,	// (0x00016d03) heading_sub_pane_t1

0x4c3a,	// (0x0001432f) bg_popup_preview_window_pane_cp_ParamLimits

0x4c3a,	// (0x0001432f) bg_popup_preview_window_pane_cp

0x75c9,	// (0x00016cbe) heading_preview_pane

0x75d1,	// (0x00016cc6) list_preview_pane_ParamLimits

0x75d1,	// (0x00016cc6) list_preview_pane

0x761c,	// (0x00016d11) popup_preview_window_g1

0x75e0,	// (0x00016cd5) list_single_preview_pane_ParamLimits

0x75e0,	// (0x00016cd5) list_single_preview_pane

0x7624,	// (0x00016d19) list_single_preview_pane_g1

0x762c,	// (0x00016d21) list_single_preview_pane_t1

0x75f2,	// (0x00016ce7) list_single_preview_pane_t2

0x0001,

0xfaf9,	// (0x0001f1ee) list_single_preview_pane_t

0x763a,	// (0x00016d2f) bg_popup_heading_pane_cp2_ParamLimits

0x763a,	// (0x00016d2f) bg_popup_heading_pane_cp2

0x7650,	// (0x00016d45) heading_preview_pane_g1

0x7658,	// (0x00016d4d) heading_preview_pane_t1_ParamLimits

0x7658,	// (0x00016d4d) heading_preview_pane_t1

0x26e9,	// (0x00011dde) soft_indicator_pane_t1_ParamLimits

0x2ddf,	// (0x000124d4) scroll_pane_ParamLimits

0x39ed,	// (0x000130e2) scroll_sc2_left_pane

0x39f6,	// (0x000130eb) scroll_sc2_right_pane

0x3a15,	// (0x0001310a) scroll_bg_pane_g1_ParamLimits

0x3a2a,	// (0x0001311f) scroll_bg_pane_g2_ParamLimits

0x3a42,	// (0x00013137) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001edd3) scroll_bg_pane_g_ParamLimits

0x3a15,	// (0x0001310a) scroll_handle_pane_g1_ParamLimits

0x3a64,	// (0x00013159) scroll_handle_pane_g2_ParamLimits

0x3a42,	// (0x00013137) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001edda) scroll_handle_pane_g_ParamLimits

0x0a8d,	// (0x00010182) popup_choice_list_window_ParamLimits

0x0a8d,	// (0x00010182) popup_choice_list_window

0x4a28,	// (0x0001411d) choice_list_pane

0x4ad8,	// (0x000141cd) cell_toolbar_pane_t1

0x4b00,	// (0x000141f5) toolbar_button_pane_ParamLimits

0x5ccb,	// (0x000153c0) ai_gene_pane_1_t2_ParamLimits

0x5ccb,	// (0x000153c0) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001effd) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001effd) ai_gene_pane_1_t

0x7675,	// (0x00016d6a) scroll_sc2_left_pane_g1

0x7675,	// (0x00016d6a) scroll_sc2_right_pane_g1

0x45cc,	// (0x00013cc1) bg_popup_sub_pane_cp10

0x767f,	// (0x00016d74) list_choice_list_pane

0x7698,	// (0x00016d8d) list_single_choice_list_pane_ParamLimits

0x7698,	// (0x00016d8d) list_single_choice_list_pane

0x76ab,	// (0x00016da0) list_single_choice_list_pane_g1

0x36f5,	// (0x00012dea) list_single_choice_list_pane_t1_ParamLimits

0x36f5,	// (0x00012dea) list_single_choice_list_pane_t1

0x76b3,	// (0x00016da8) choice_list_pane_g1

0x76bb,	// (0x00016db0) choice_list_pane_t1

0x24ef,	// (0x00011be4) input_focus_pane_cp11

0x38cc,	// (0x00012fc1) title_pane_stacon_g2_ParamLimits

0x38cc,	// (0x00012fc1) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001edb9) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001edb9) title_pane_stacon_g

0x4286,	// (0x0001397b) cursor_press_pane

0xba63,	// (0x0001b158) popup_fep_hwr_window_ParamLimits

0xba63,	// (0x0001b158) popup_fep_hwr_window

0x0bb3,	// (0x000102a8) popup_fep_vkb_window_ParamLimits

0x0bb3,	// (0x000102a8) popup_fep_vkb_window

0x76c9,	// (0x00016dbe) cursor_press_pane_g1

0x0002,

0xfb22,	// (0x0001f217) fep_vkb_side_pane_g_ParamLimits

0x154b,	// (0x00010c40) fep_hwr_candidate_pane_ParamLimits

0x154b,	// (0x00010c40) fep_hwr_candidate_pane

0x1575,	// (0x00010c6a) fep_hwr_side_pane_ParamLimits

0x1575,	// (0x00010c6a) fep_hwr_side_pane

0x1595,	// (0x00010c8a) fep_hwr_top_pane_ParamLimits

0x1595,	// (0x00010c8a) fep_hwr_top_pane

0x15ad,	// (0x00010ca2) fep_hwr_write_pane_ParamLimits

0x15ad,	// (0x00010ca2) fep_hwr_write_pane

0xfb22,	// (0x0001f217) fep_vkb_side_pane_g

0x76d1,	// (0x00016dc6) fep_hwr_top_pane_g1

0x76e3,	// (0x00016dd8) fep_hwr_top_pane_g2

0x15e7,	// (0x00010cdc) fep_hwr_top_pane_g3

0x0002,

0xfafe,	// (0x0001f1f3) fep_hwr_top_pane_g

0x15fc,	// (0x00010cf1) fep_hwr_top_text_pane

0x3be4,	// (0x000132d9) fep_hwr_top_text_pane_g1

0x7719,	// (0x00016e0e) fep_hwr_top_text_pane_t1

0x16f2,	// (0x00010de7) fep_hwr_candidate_pane_g1

0x796c,	// (0x00017061) fep_vkb_keypad_pane_g3_ParamLimits

0x796c,	// (0x00017061) fep_vkb_keypad_pane_g3

0x7994,	// (0x00017089) fep_vkb_keypad_pane_g4_ParamLimits

0x7994,	// (0x00017089) fep_vkb_keypad_pane_g4

0x7a03,	// (0x000170f8) fep_vkb_bottom_pane_g2_ParamLimits

0x7a03,	// (0x000170f8) fep_vkb_bottom_pane_g2

0x0001,

0xfb29,	// (0x0001f21e) fep_vkb_bottom_pane_g_ParamLimits

0xfb29,	// (0x0001f21e) fep_vkb_bottom_pane_g

0x7675,	// (0x00016d6a) cell_vkb_side_pane_g2

0x0001,

0xfb33,	// (0x0001f228) cell_vkb_side_pane_g

0x7a8e,	// (0x00017183) cell_vkb_side_pane_t1

0x7a9c,	// (0x00017191) cell_vkb_side_pane_t1_copy1

0x7675,	// (0x00016d6a) bg_fep_vkb_candidate_pane_g2

0x7bc8,	// (0x000172bd) cell_vkb_candidate_pane_ParamLimits

0x7727,	// (0x00016e1c) aid_size_cell_vkb_ParamLimits

0x7727,	// (0x00016e1c) aid_size_cell_vkb

0x7bc8,	// (0x000172bd) cell_vkb_candidate_pane

0x1719,	// (0x00010e0e) bg_popup_fep_shadow_pane_g1

0xdf6f,	// (0x0001d664) fep_vkb_bottom_pane_ParamLimits

0xdf6f,	// (0x0001d664) fep_vkb_bottom_pane

0x77eb,	// (0x00016ee0) fep_vkb_candidate_pane_ParamLimits

0x77eb,	// (0x00016ee0) fep_vkb_candidate_pane

0xdf94,	// (0x0001d689) fep_vkb_keypad_pane_ParamLimits

0xdf94,	// (0x0001d689) fep_vkb_keypad_pane

0xdfd0,	// (0x0001d6c5) fep_vkb_side_pane_ParamLimits

0xdfd0,	// (0x0001d6c5) fep_vkb_side_pane

0xe00c,	// (0x0001d701) fep_vkb_top_pane_ParamLimits

0xe00c,	// (0x0001d701) fep_vkb_top_pane

0x78c5,	// (0x00016fba) fep_vkb_top_pane_g1_ParamLimits

0x78c5,	// (0x00016fba) fep_vkb_top_pane_g1

0x78d4,	// (0x00016fc9) fep_vkb_top_pane_g2_ParamLimits

0x78d4,	// (0x00016fc9) fep_vkb_top_pane_g2

0x78e3,	// (0x00016fd8) fep_vkb_top_pane_g3_ParamLimits

0x78e3,	// (0x00016fd8) fep_vkb_top_pane_g3

0x0003,

0xfb19,	// (0x0001f20e) fep_vkb_top_pane_g_ParamLimits

0xfb19,	// (0x0001f20e) fep_vkb_top_pane_g

0x7901,	// (0x00016ff6) fep_vkb_top_text_pane_ParamLimits

0x7901,	// (0x00016ff6) fep_vkb_top_text_pane

0xe048,	// (0x0001d73d) fep_vkb_side_pane_g1_ParamLimits

0xe048,	// (0x0001d73d) fep_vkb_side_pane_g1

0x795b,	// (0x00017050) grid_vkb_side_pane_ParamLimits

0x795b,	// (0x00017050) grid_vkb_side_pane

0x1721,	// (0x00010e16) bg_popup_fep_shadow_pane_g2

0x172a,	// (0x00010e1f) bg_popup_fep_shadow_pane_g3

0x1732,	// (0x00010e27) bg_popup_fep_shadow_pane_g4

0x173b,	// (0x00010e30) bg_popup_fep_shadow_pane_g5

0x1745,	// (0x00010e3a) bg_popup_fep_shadow_pane_g6

0x174d,	// (0x00010e42) bg_popup_fep_shadow_pane_g7

0x3528,	// (0x00012c1d) bg_popup_fep_shadow_pane_g8

0x79b2,	// (0x000170a7) grid_vkb_keypad_number_pane_ParamLimits

0x79b2,	// (0x000170a7) grid_vkb_keypad_number_pane

0x79c2,	// (0x000170b7) grid_vkb_keypad_pane_ParamLimits

0x79c2,	// (0x000170b7) grid_vkb_keypad_pane

0x79e8,	// (0x000170dd) fep_vkb_bottom_pane_g1_ParamLimits

0x79e8,	// (0x000170dd) fep_vkb_bottom_pane_g1

0x7a11,	// (0x00017106) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a11,	// (0x00017106) grid_vkb_keypad_bottom_left_pane

0x7a26,	// (0x0001711b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a26,	// (0x0001711b) grid_vkb_keypad_bottom_right_pane

0x7a3b,	// (0x00017130) fep_vkb_top_text_pane_g1

0xe08f,	// (0x0001d784) fep_vkb_top_text_pane_t1

0xe0a1,	// (0x0001d796) cell_vkb_side_pane_ParamLimits

0xe0a1,	// (0x0001d796) cell_vkb_side_pane

0x7675,	// (0x00016d6a) cell_vkb_side_pane_g1

0x7aaa,	// (0x0001719f) cell_vkb_keypad_pane_ParamLimits

0x7aaa,	// (0x0001719f) cell_vkb_keypad_pane

0x7b1f,	// (0x00017214) cell_vkb_keypad_pane_g1

0x0008,

0xfb46,	// (0x0001f23b) bg_popup_fep_shadow_pane_g

0x175f,	// (0x00010e54) cell_hwr_side_pane_g1

0x175f,	// (0x00010e54) cell_hwr_side_pane_g2

0x7b29,	// (0x0001721e) cell_vkb_keypad_pane_t1

0xe0b7,	// (0x0001d7ac) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe0b7,	// (0x0001d7ac) cell_vkb_keypad_bottom_left_pane

0xe0cc,	// (0x0001d7c1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe0cc,	// (0x0001d7c1) cell_vkb_keypad_bottom_right_pane

0x7675,	// (0x00016d6a) cell_vkb_keypad_bottom_left_pane_g1

0x7675,	// (0x00016d6a) cell_vkb_keypad_bottom_right_pane_g1

0x7b8d,	// (0x00017282) cell_vkb_keypad_number_pane_ParamLimits

0x7b8d,	// (0x00017282) cell_vkb_keypad_number_pane

0x7bac,	// (0x000172a1) cell_vkb_keypad_number_pane_g1

0x7bb6,	// (0x000172ab) cell_vkb_keypad_number_pane_g2

0x7bbf,	// (0x000172b4) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb38,	// (0x0001f22d) cell_vkb_keypad_number_pane_g

0x7b29,	// (0x0001721e) cell_vkb_keypad_number_pane_t1

0x7be3,	// (0x000172d8) fep_vkb_candidate_pane_g1

0x0001,

0xfb59,	// (0x0001f24e) cell_hwr_side_pane_g

0x7bfc,	// (0x000172f1) cell_hwr_side_pane_t1

0x1769,	// (0x00010e5e) cell_hwr_side_pane_t1_copy1

0x1777,	// (0x00010e6c) cell_hwr_candidate_pane_g1

0x17a6,	// (0x00010e9b) cell_hwr_candidate_pane_t1

0x7675,	// (0x00016d6a) cell_vkb_candidate_pane_g2

0x7c40,	// (0x00017335) cell_vkb_candidate_pane_t1

0x1512,	// (0x00010c07) bg_popup_fep_shadow_pane_ParamLimits

0x1512,	// (0x00010c07) bg_popup_fep_shadow_pane

0x15c7,	// (0x00010cbc) bg_fep_hwr_top_pane_g4

0x76f5,	// (0x00016dea) bg_hwr_side_pane_g1_ParamLimits

0x76f5,	// (0x00016dea) bg_hwr_side_pane_g1

0xc0f0,	// (0x0001b7e5) cell_hwr_side_pane_ParamLimits

0xc0f0,	// (0x0001b7e5) cell_hwr_side_pane

0x1673,	// (0x00010d68) fep_hwr_write_pane_g1_ParamLimits

0x1673,	// (0x00010d68) fep_hwr_write_pane_g1

0x1680,	// (0x00010d75) fep_hwr_write_pane_g2_ParamLimits

0x1680,	// (0x00010d75) fep_hwr_write_pane_g2

0x168d,	// (0x00010d82) fep_hwr_write_pane_g3_ParamLimits

0x168d,	// (0x00010d82) fep_hwr_write_pane_g3

0xc110,	// (0x0001b805) fep_hwr_write_pane_g4_ParamLimits

0xc110,	// (0x0001b805) fep_hwr_write_pane_g4

0x0005,

0xfb05,	// (0x0001f1fa) fep_hwr_write_pane_g_ParamLimits

0xfb05,	// (0x0001f1fa) fep_hwr_write_pane_g

0x15c7,	// (0x00010cbc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x15c7,	// (0x00010cbc) bg_fep_hwr_candidate_pane_g2

0x16b0,	// (0x00010da5) cell_hwr_candidate_pane_ParamLimits

0x16b0,	// (0x00010da5) cell_hwr_candidate_pane

0x16f2,	// (0x00010de7) fep_hwr_candidate_pane_g1_ParamLimits

0x7755,	// (0x00016e4a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7755,	// (0x00016e4a) bg_popup_fep_shadow_pane_cp2

0x78f3,	// (0x00016fe8) fep_vkb_top_pane_g4_ParamLimits

0x78f3,	// (0x00016fe8) fep_vkb_top_pane_g4

0x7939,	// (0x0001702e) fep_vkb_side_pane_g2_ParamLimits

0x7939,	// (0x0001702e) fep_vkb_side_pane_g2

0xcd80,	// (0x0001c475) list_setting_pane_t4_ParamLimits

0xcd80,	// (0x0001c475) list_setting_pane_t4

0xcdfa,	// (0x0001c4ef) list_setting_number_pane_t5_ParamLimits

0xcdfa,	// (0x0001c4ef) list_setting_number_pane_t5

0x3c1b,	// (0x00013310) list_double_heading_pane_cp2_ParamLimits

0x3c1b,	// (0x00013310) list_double_heading_pane_cp2

0x3030,	// (0x00012725) list_double_heading_pane_g1_cp2_ParamLimits

0x3030,	// (0x00012725) list_double_heading_pane_g1_cp2

0x340d,	// (0x00012b02) list_double_heading_pane_g2_cp2_ParamLimits

0x340d,	// (0x00012b02) list_double_heading_pane_g2_cp2

0x7c4e,	// (0x00017343) list_double_heading_pane_t1_cp2_ParamLimits

0x7c4e,	// (0x00017343) list_double_heading_pane_t1_cp2

0x7c64,	// (0x00017359) list_double_heading_pane_t2_cp2_ParamLimits

0x7c64,	// (0x00017359) list_double_heading_pane_t2_cp2

0x24d7,	// (0x00011bcc) aid_value_unit2

0x02b7,	// (0x0000f9ac) popup_preview_fixed_window

0x2886,	// (0x00011f7b) bg_popup_preview_window_pane_cp02

0x7c76,	// (0x0001736b) list_preview_fixed_pane

0x7cbc,	// (0x000173b1) list_empty_pane_fp_ParamLimits

0x7cbc,	// (0x000173b1) list_empty_pane_fp

0x7cbc,	// (0x000173b1) list_single_cale_day_pane_fp_ParamLimits

0x7cbc,	// (0x000173b1) list_single_cale_day_pane_fp

0x7cbc,	// (0x000173b1) list_single_graphic_heading_pane_fp_ParamLimits

0x7cbc,	// (0x000173b1) list_single_graphic_heading_pane_fp

0x7cbc,	// (0x000173b1) list_single_graphic_pane_fp_ParamLimits

0x7cbc,	// (0x000173b1) list_single_graphic_pane_fp

0x7cbc,	// (0x000173b1) list_single_heading_pane_fp_ParamLimits

0x7cbc,	// (0x000173b1) list_single_heading_pane_fp

0x7cbc,	// (0x000173b1) list_single_pane_fp_ParamLimits

0x7cbc,	// (0x000173b1) list_single_pane_fp

0x7cd1,	// (0x000173c6) list_single_pane_fp_g1_ParamLimits

0x7cd1,	// (0x000173c6) list_single_pane_fp_g1

0x3030,	// (0x00012725) list_single_pane_fp_g2_ParamLimits

0x3030,	// (0x00012725) list_single_pane_fp_g2

0x340d,	// (0x00012b02) list_single_pane_fp_g3_ParamLimits

0x340d,	// (0x00012b02) list_single_pane_fp_g3

0x7cdd,	// (0x000173d2) list_single_pane_fp_g4_ParamLimits

0x7cdd,	// (0x000173d2) list_single_pane_fp_g4

0x0003,

0xfb6c,	// (0x0001f261) list_single_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001f261) list_single_pane_fp_g

0x7ce9,	// (0x000173de) list_single_pane_fp_t1_ParamLimits

0x7ce9,	// (0x000173de) list_single_pane_fp_t1

0x7d00,	// (0x000173f5) list_single_graphic_pane_fp_g1_ParamLimits

0x7d00,	// (0x000173f5) list_single_graphic_pane_fp_g1

0x7cd1,	// (0x000173c6) list_single_graphic_pane_fp_g2_ParamLimits

0x7cd1,	// (0x000173c6) list_single_graphic_pane_fp_g2

0x3030,	// (0x00012725) list_single_graphic_pane_fp_g3_ParamLimits

0x3030,	// (0x00012725) list_single_graphic_pane_fp_g3

0x340d,	// (0x00012b02) list_single_graphic_pane_fp_g4_ParamLimits

0x340d,	// (0x00012b02) list_single_graphic_pane_fp_g4

0x7cdd,	// (0x000173d2) list_single_graphic_pane_fp_g5_ParamLimits

0x7cdd,	// (0x000173d2) list_single_graphic_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f26a) list_single_graphic_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f26a) list_single_graphic_pane_fp_g

0x7d0c,	// (0x00017401) list_single_graphic_pane_fp_t1_ParamLimits

0x7d0c,	// (0x00017401) list_single_graphic_pane_fp_t1

0x7d00,	// (0x000173f5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7d00,	// (0x000173f5) list_single_graphic_heading_pane_fp_g1

0x7cd1,	// (0x000173c6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7cd1,	// (0x000173c6) list_single_graphic_heading_pane_fp_g2

0x3030,	// (0x00012725) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3030,	// (0x00012725) list_single_graphic_heading_pane_fp_g3

0x340d,	// (0x00012b02) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x340d,	// (0x00012b02) list_single_graphic_heading_pane_fp_g4

0x7cdd,	// (0x000173d2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7cdd,	// (0x000173d2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f26a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f26a) list_single_graphic_heading_pane_fp_g

0x7d22,	// (0x00017417) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7d22,	// (0x00017417) list_single_graphic_heading_pane_fp_t1

0x7d38,	// (0x0001742d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7d38,	// (0x0001742d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x0001f275) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x0001f275) list_single_graphic_heading_pane_fp_t

0x7d4a,	// (0x0001743f) list_single_cale_day_pane_fp_g1_ParamLimits

0x7d4a,	// (0x0001743f) list_single_cale_day_pane_fp_g1

0x7d82,	// (0x00017477) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d82,	// (0x00017477) list_single_cale_day_pane_fp_g2

0x7d8e,	// (0x00017483) list_single_cale_day_pane_fp_g3_ParamLimits

0x7d8e,	// (0x00017483) list_single_cale_day_pane_fp_g3

0x7db6,	// (0x000174ab) list_single_cale_day_pane_fp_g4_ParamLimits

0x7db6,	// (0x000174ab) list_single_cale_day_pane_fp_g4

0x7dda,	// (0x000174cf) list_single_cale_day_pane_fp_g5_ParamLimits

0x7dda,	// (0x000174cf) list_single_cale_day_pane_fp_g5

0x0004,

0xfb85,	// (0x0001f27a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb85,	// (0x0001f27a) list_single_cale_day_pane_fp_g

0x7dfe,	// (0x000174f3) list_single_cale_day_pane_fp_t1_ParamLimits

0x7dfe,	// (0x000174f3) list_single_cale_day_pane_fp_t1

0x7e24,	// (0x00017519) list_single_cale_day_pane_fp_t2_ParamLimits

0x7e24,	// (0x00017519) list_single_cale_day_pane_fp_t2

0x7e3d,	// (0x00017532) list_single_cale_day_pane_fp_t3_ParamLimits

0x7e3d,	// (0x00017532) list_single_cale_day_pane_fp_t3

0x0002,

0xfb90,	// (0x0001f285) list_single_cale_day_pane_fp_t_ParamLimits

0xfb90,	// (0x0001f285) list_single_cale_day_pane_fp_t

0x7cd1,	// (0x000173c6) list_empty_pane_fp_g1_ParamLimits

0x7cd1,	// (0x000173c6) list_empty_pane_fp_g1

0x7e56,	// (0x0001754b) list_empty_pane_fp_t1

0x7e64,	// (0x00017559) list_empty_pane_fp_t2

0x0001,

0xfb97,	// (0x0001f28c) list_empty_pane_fp_t

0x7cd1,	// (0x000173c6) list_single_heading_pane_fp_g1_ParamLimits

0x7cd1,	// (0x000173c6) list_single_heading_pane_fp_g1

0x3030,	// (0x00012725) list_single_heading_pane_fp_g2_ParamLimits

0x3030,	// (0x00012725) list_single_heading_pane_fp_g2

0x340d,	// (0x00012b02) list_single_heading_pane_fp_g3_ParamLimits

0x340d,	// (0x00012b02) list_single_heading_pane_fp_g3

0x0002,

0xfb9c,	// (0x0001f291) list_single_heading_pane_fp_g_ParamLimits

0xfb9c,	// (0x0001f291) list_single_heading_pane_fp_g

0x7e72,	// (0x00017567) list_single_heading_pane_fp_t1_ParamLimits

0x7e72,	// (0x00017567) list_single_heading_pane_fp_t1

0x7e84,	// (0x00017579) list_single_heading_pane_fp_t2_ParamLimits

0x7e84,	// (0x00017579) list_single_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x0001f298) list_single_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x0001f298) list_single_heading_pane_fp_t

0x3763,	// (0x00012e58) aid_size_cell_fast

0x27f6,	// (0x00011eeb) soft_indicator_pane_cp1_t1

0x37a0,	// (0x00012e95) cell_app_pane_cp2_ParamLimits

0x37a0,	// (0x00012e95) cell_app_pane_cp2

0x1534,	// (0x00010c29) fep_hwr_candidate_drop_down_list_pane

0x170c,	// (0x00010e01) fep_hwr_candidate_pane_g3_ParamLimits

0x170c,	// (0x00010e01) fep_hwr_candidate_pane_g3

0xed30,	// (0x0001e425) fep_hwr_candidate_pane_g4_ParamLimits

0xed30,	// (0x0001e425) fep_hwr_candidate_pane_g4

0x0002,

0xfb12,	// (0x0001f207) fep_hwr_candidate_pane_g_ParamLimits

0xfb12,	// (0x0001f207) fep_hwr_candidate_pane_g

0x77da,	// (0x00016ecf) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77da,	// (0x00016ecf) fep_vkb_candidate_drop_down_list_pane

0x7beb,	// (0x000172e0) fep_vkb_candidate_pane_g3

0x7bf3,	// (0x000172e8) fep_vkb_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001f234) fep_vkb_candidate_pane_g

0x1777,	// (0x00010e6c) cell_hwr_candidate_pane_g1_ParamLimits

0x1785,	// (0x00010e7a) cell_hwr_candidate_pane_g3_ParamLimits

0x1785,	// (0x00010e7a) cell_hwr_candidate_pane_g3

0x9bc6,	// (0x000192bb) cell_hwr_candidate_pane_g4_ParamLimits

0x9bc6,	// (0x000192bb) cell_hwr_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0001f253) cell_hwr_candidate_pane_g_ParamLimits

0xfb5e,	// (0x0001f253) cell_hwr_candidate_pane_g

0x7c0a,	// (0x000172ff) cell_vkb_candidate_pane_g3_ParamLimits

0x7c0a,	// (0x000172ff) cell_vkb_candidate_pane_g3

0x7c25,	// (0x0001731a) cell_vkb_candidate_pane_g4_ParamLimits

0x7c25,	// (0x0001731a) cell_vkb_candidate_pane_g4

0x7e9a,	// (0x0001758f) cell_app_pane_cp2_g1_ParamLimits

0x7e9a,	// (0x0001758f) cell_app_pane_cp2_g1

0x7eb8,	// (0x000175ad) cell_app_pane_cp2_g2_ParamLimits

0x7eb8,	// (0x000175ad) cell_app_pane_cp2_g2

0x0001,

0xfba8,	// (0x0001f29d) cell_app_pane_cp2_g_ParamLimits

0xfba8,	// (0x0001f29d) cell_app_pane_cp2_g

0x7ec4,	// (0x000175b9) cell_app_pane_cp2_t1_ParamLimits

0x7ec4,	// (0x000175b9) cell_app_pane_cp2_t1

0x33e7,	// (0x00012adc) grid_highlight_pane_cp1_ParamLimits

0x33e7,	// (0x00012adc) grid_highlight_pane_cp1

0x17c4,	// (0x00010eb9) cell_hwr_candidate_pane_cp1_ParamLimits

0x17c4,	// (0x00010eb9) cell_hwr_candidate_pane_cp1

0x1777,	// (0x00010e6c) fep_hwr_candidate_drop_down_list_pane_g1

0x17e3,	// (0x00010ed8) fep_hwr_candidate_drop_down_list_pane_g2

0x17f0,	// (0x00010ee5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbad,	// (0x0001f2a2) fep_hwr_candidate_drop_down_list_pane_g

0x17fd,	// (0x00010ef2) fep_hwr_candidate_drop_down_list_scroll_pane

0x1806,	// (0x00010efb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1806,	// (0x00010efb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1813,	// (0x00010f08) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1813,	// (0x00010f08) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1820,	// (0x00010f15) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1820,	// (0x00010f15) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x182d,	// (0x00010f22) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x182d,	// (0x00010f22) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1848,	// (0x00010f3d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1848,	// (0x00010f3d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1863,	// (0x00010f58) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1863,	// (0x00010f58) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x187e,	// (0x00010f73) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x187e,	// (0x00010f73) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1899,	// (0x00010f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1899,	// (0x00010f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0001f2a9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0001f2a9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ed6,	// (0x000175cb) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ed6,	// (0x000175cb) cell_vkb_candidate_pane_cp1

0x78f3,	// (0x00016fe8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78f3,	// (0x00016fe8) fep_vkb_candidate_drop_down_list_pane_g1

0x7ef6,	// (0x000175eb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ef6,	// (0x000175eb) fep_vkb_candidate_drop_down_list_pane_g2

0x7f03,	// (0x000175f8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7f03,	// (0x000175f8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc5,	// (0x0001f2ba) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc5,	// (0x0001f2ba) fep_vkb_candidate_drop_down_list_pane_g

0x7f10,	// (0x00017605) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7f10,	// (0x00017605) fep_vkb_candidate_drop_down_list_scroll_pane

0x7f1d,	// (0x00017612) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f1d,	// (0x00017612) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f2a,	// (0x0001761f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f2a,	// (0x0001761f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f36,	// (0x0001762b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f36,	// (0x0001762b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7f42,	// (0x00017637) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f42,	// (0x00017637) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7f63,	// (0x00017658) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f63,	// (0x00017658) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f84,	// (0x00017679) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f84,	// (0x00017679) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7fa5,	// (0x0001769a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7fa5,	// (0x0001769a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7fc6,	// (0x000176bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7fc6,	// (0x000176bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcc,	// (0x0001f2c1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcc,	// (0x0001f2c1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc708,	// (0x0001bdfd) title_pane_g1_ParamLimits

0xc71b,	// (0x0001be10) title_pane_g2_ParamLimits

0xf54e,	// (0x0001ec43) title_pane_g_ParamLimits

0x3bd4,	// (0x000132c9) aid_call2_pane

0x3bdc,	// (0x000132d1) aid_call_pane

0x3be4,	// (0x000132d9) popup_clock_analogue_window_g1

0x3be4,	// (0x000132d9) popup_clock_analogue_window_g2

0x0628,	// (0x0000fd1d) popup_clock_analogue_window_g3

0x0631,	// (0x0000fd26) popup_clock_analogue_window_g4

0x24f9,	// (0x00011bee) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001ede8) popup_clock_analogue_window_g

0x0639,	// (0x0000fd2e) popup_clock_analogue_window_t1

0x0647,	// (0x0000fd3c) clock_digital_number_pane_ParamLimits

0x0647,	// (0x0000fd3c) clock_digital_number_pane

0x0653,	// (0x0000fd48) clock_digital_number_pane_cp02_ParamLimits

0x0653,	// (0x0000fd48) clock_digital_number_pane_cp02

0x065f,	// (0x0000fd54) clock_digital_number_pane_cp03_ParamLimits

0x065f,	// (0x0000fd54) clock_digital_number_pane_cp03

0x066b,	// (0x0000fd60) clock_digital_number_pane_cp04_ParamLimits

0x066b,	// (0x0000fd60) clock_digital_number_pane_cp04

0x0677,	// (0x0000fd6c) clock_digital_separator_pane_ParamLimits

0x0677,	// (0x0000fd6c) clock_digital_separator_pane

0x0683,	// (0x0000fd78) popup_clock_digital_window_t1_ParamLimits

0x0683,	// (0x0000fd78) popup_clock_digital_window_t1

0x24f9,	// (0x00011bee) clock_digital_number_pane_g1

0x24f9,	// (0x00011bee) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001edf3) clock_digital_number_pane_g

0x24f9,	// (0x00011bee) clock_digital_separator_pane_g1

0x24f9,	// (0x00011bee) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001edf3) clock_digital_separator_pane_g

0xd3dd,	// (0x0001cad2) aid_fill_nsta_ParamLimits

0xd513,	// (0x0001cc08) indicator_nsta_pane_ParamLimits

0x48b5,	// (0x00013faa) popup_clock_analogue_window

0x48b5,	// (0x00013faa) popup_clock_digital_window

0x3724,	// (0x00012e19) grid_indicator_nsta_pane_ParamLimits

0x7023,	// (0x00016718) clock_nsta_pane_t2

0x0001,

0xfa92,	// (0x0001f187) clock_nsta_pane_t

0x05ec,	// (0x0000fce1) aid_size_max_handle

0xb820,	// (0x0001af15) aid_size_min_handle

0x4286,	// (0x0001397b) editor_scroll_pane

0x7fe1,	// (0x000176d6) ex_editor_pane

0x36d1,	// (0x00012dc6) scroll_pane_cp13

0x2e0b,	// (0x00012500) scroll_pane_cp14

0x3c13,	// (0x00013308) scroll_pane_cp36

0xd0e3,	// (0x0001c7d8) list_single_graphic_hl_pane_cp2_ParamLimits

0xd0e3,	// (0x0001c7d8) list_single_graphic_hl_pane_cp2

0xdbf0,	// (0x0001d2e5) list_single_graphic_hl_pane_ParamLimits

0xdbf0,	// (0x0001d2e5) list_single_graphic_hl_pane

0x7fe9,	// (0x000176de) aid_size_min_hl_cp1

0x7ff2,	// (0x000176e7) list_highlight_pane_cp34_ParamLimits

0x7ff2,	// (0x000176e7) list_highlight_pane_cp34

0x8003,	// (0x000176f8) list_single_graphic_hl_pane_g1_ParamLimits

0x8003,	// (0x000176f8) list_single_graphic_hl_pane_g1

0xe0e7,	// (0x0001d7dc) list_single_graphic_hl_pane_g2_ParamLimits

0xe0e7,	// (0x0001d7dc) list_single_graphic_hl_pane_g2

0xe0e7,	// (0x0001d7dc) list_single_graphic_hl_pane_g3_ParamLimits

0xe0e7,	// (0x0001d7dc) list_single_graphic_hl_pane_g3

0x41f7,	// (0x000138ec) list_single_graphic_hl_pane_g4_ParamLimits

0x41f7,	// (0x000138ec) list_single_graphic_hl_pane_g4

0xe0f3,	// (0x0001d7e8) list_single_graphic_hl_pane_g5_ParamLimits

0xe0f3,	// (0x0001d7e8) list_single_graphic_hl_pane_g5

0x0004,

0xfbdd,	// (0x0001f2d2) list_single_graphic_hl_pane_g_ParamLimits

0xfbdd,	// (0x0001f2d2) list_single_graphic_hl_pane_g

0xe107,	// (0x0001d7fc) list_single_graphic_hl_pane_t1_ParamLimits

0xe107,	// (0x0001d7fc) list_single_graphic_hl_pane_t1

0x8046,	// (0x0001773b) aid_size_min_hl_cp2

0x804f,	// (0x00017744) list_highlight_pane_cp34_cp2_ParamLimits

0x804f,	// (0x00017744) list_highlight_pane_cp34_cp2

0x8003,	// (0x000176f8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8003,	// (0x000176f8) list_single_graphic_hl_pane_g1_cp2

0x805c,	// (0x00017751) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x805c,	// (0x00017751) list_single_graphic_hl_pane_g2_cp2

0x8068,	// (0x0001775d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8068,	// (0x0001775d) list_single_graphic_hl_pane_g3_cp2

0x67fe,	// (0x00015ef3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x67fe,	// (0x00015ef3) list_single_graphic_hl_pane_g4_cp2

0x801c,	// (0x00017711) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x801c,	// (0x00017711) list_single_graphic_hl_pane_g5_cp2

0xb87b,	// (0x0001af70) control_pane_g4_ParamLimits

0xb87b,	// (0x0001af70) control_pane_g4

0x45cc,	// (0x00013cc1) bg_popup_sub_pane_cp10_ParamLimits

0x767f,	// (0x00016d74) list_choice_list_pane_ParamLimits

0x768e,	// (0x00016d83) scroll_pane_cp23

0x2886,	// (0x00011f7b) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c76,	// (0x0001736b) list_preview_fixed_pane_ParamLimits

0x7c8c,	// (0x00017381) list_preview_fixed_pane_cp_ParamLimits

0x7c8c,	// (0x00017381) list_preview_fixed_pane_cp

0x7c98,	// (0x0001738d) popup_preview_fixed_window_g1_ParamLimits

0x7c98,	// (0x0001738d) popup_preview_fixed_window_g1

0x7ca4,	// (0x00017399) popup_preview_fixed_window_g2_ParamLimits

0x7ca4,	// (0x00017399) popup_preview_fixed_window_g2

0x0002,

0xfb65,	// (0x0001f25a) popup_preview_fixed_window_g_ParamLimits

0xfb65,	// (0x0001f25a) popup_preview_fixed_window_g

0x0560,	// (0x0000fc55) aid_navi_side_left_pane_ParamLimits

0x0575,	// (0x0000fc6a) aid_navi_side_right_pane_ParamLimits

0x058d,	// (0x0000fc82) navi_icon_pane_stacon_ParamLimits

0x05a1,	// (0x0000fc96) navi_navi_pane_stacon_ParamLimits

0x058d,	// (0x0000fc82) navi_text_pane_stacon_ParamLimits

0x0178,	// (0x0000f86d) main_text_info_pane

0x808c,	// (0x00017781) listscroll_text_info_pane

0x8094,	// (0x00017789) list_text_info_pane_ParamLimits

0x8094,	// (0x00017789) list_text_info_pane

0x80a3,	// (0x00017798) scroll_pane_cp24_ParamLimits

0x80a3,	// (0x00017798) scroll_pane_cp24

0xe11d,	// (0x0001d812) list_text_info_pane_t1_ParamLimits

0xe11d,	// (0x0001d812) list_text_info_pane_t1

0xb9d6,	// (0x0001b0cb) popup_fast_swap2_window_ParamLimits

0xb9d6,	// (0x0001b0cb) popup_fast_swap2_window

0x80f2,	// (0x000177e7) aid_size_cell_fast2

0x24ef,	// (0x00011be4) bg_popup_window_pane_cp17

0x5062,	// (0x00014757) heading_pane_cp2

0x2ad5,	// (0x000121ca) listscroll_fast2_pane

0x80fc,	// (0x000177f1) grid_fast2_pane

0x8106,	// (0x000177fb) listscroll_fast2_pane_g1

0x810e,	// (0x00017803) listscroll_fast2_pane_g2

0x0001,

0xfbe8,	// (0x0001f2dd) listscroll_fast2_pane_g

0x36d1,	// (0x00012dc6) scroll_pane_cp26

0x8118,	// (0x0001780d) cell_fast2_pane_ParamLimits

0x8118,	// (0x0001780d) cell_fast2_pane

0x812d,	// (0x00017822) cell_fast2_pane_g1

0x8136,	// (0x0001782b) cell_fast2_pane_g2

0x813f,	// (0x00017834) cell_fast2_pane_g3

0x0002,

0xfbed,	// (0x0001f2e2) cell_fast2_pane_g

0x2bc8,	// (0x000122bd) grid_highlight_pane_cp9

0x0a71,	// (0x00010166) main_eswt_pane_ParamLimits

0x0a71,	// (0x00010166) main_eswt_pane

0x80b8,	// (0x000177ad) list_single_text_info_pane

0x8147,	// (0x0001783c) eswt_ctrl_button_pane

0x8147,	// (0x0001783c) eswt_ctrl_canvas_pane

0x814f,	// (0x00017844) eswt_ctrl_combo_pane

0x8147,	// (0x0001783c) eswt_ctrl_default_pane

0x8147,	// (0x0001783c) eswt_ctrl_label_pane

0x8157,	// (0x0001784c) eswt_ctrl_wait_pane

0x815f,	// (0x00017854) eswt_shell_pane

0x24ef,	// (0x00011be4) listscroll_eswt_app_pane

0x817f,	// (0x00017874) popup_eswt_tasktip_window_ParamLimits

0x817f,	// (0x00017874) popup_eswt_tasktip_window

0x4c3a,	// (0x0001432f) bg_popup_window_pane_cp18

0x8190,	// (0x00017885) eswt_control_pane_g1_ParamLimits

0x8190,	// (0x00017885) eswt_control_pane_g1

0x819d,	// (0x00017892) eswt_control_pane_g2_ParamLimits

0x819d,	// (0x00017892) eswt_control_pane_g2

0x81aa,	// (0x0001789f) eswt_control_pane_g3_ParamLimits

0x81aa,	// (0x0001789f) eswt_control_pane_g3

0x81b7,	// (0x000178ac) eswt_control_pane_g4_ParamLimits

0x81b7,	// (0x000178ac) eswt_control_pane_g4

0x0003,

0xfbf4,	// (0x0001f2e9) eswt_control_pane_g_ParamLimits

0xfbf4,	// (0x0001f2e9) eswt_control_pane_g

0x33e7,	// (0x00012adc) bg_button_pane_ParamLimits

0x33e7,	// (0x00012adc) bg_button_pane

0x2bdd,	// (0x000122d2) common_borders_pane_copy2_ParamLimits

0x2bdd,	// (0x000122d2) common_borders_pane_copy2

0x81c4,	// (0x000178b9) control_button_pane_g1_ParamLimits

0x81c4,	// (0x000178b9) control_button_pane_g1

0x81d0,	// (0x000178c5) control_button_pane_g2_ParamLimits

0x81d0,	// (0x000178c5) control_button_pane_g2

0x81dc,	// (0x000178d1) control_button_pane_g3_ParamLimits

0x81dc,	// (0x000178d1) control_button_pane_g3

0x0002,

0xfbfd,	// (0x0001f2f2) control_button_pane_g_ParamLimits

0xfbfd,	// (0x0001f2f2) control_button_pane_g

0x81f0,	// (0x000178e5) control_button_pane_t1

0x81fe,	// (0x000178f3) control_button_pane_t2

0x0001,

0xfc04,	// (0x0001f2f9) control_button_pane_t

0x4b0c,	// (0x00014201) bg_button_pane_g1

0x4b1c,	// (0x00014211) bg_button_pane_g2

0x4b14,	// (0x00014209) bg_button_pane_g3

0x4b2c,	// (0x00014221) bg_button_pane_g4

0x4b24,	// (0x00014219) bg_button_pane_g5

0x4b34,	// (0x00014229) bg_button_pane_g6

0x4b3c,	// (0x00014231) bg_button_pane_g7

0x4b4c,	// (0x00014241) bg_button_pane_g8

0x4b44,	// (0x00014239) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001ef51) bg_button_pane_g

0x763a,	// (0x00016d2f) common_borders_pane_ParamLimits

0x763a,	// (0x00016d2f) common_borders_pane

0x8190,	// (0x00017885) eswt_control_pane_g1_copy1_ParamLimits

0x8190,	// (0x00017885) eswt_control_pane_g1_copy1

0x819d,	// (0x00017892) eswt_control_pane_g2_copy1_ParamLimits

0x819d,	// (0x00017892) eswt_control_pane_g2_copy1

0x81aa,	// (0x0001789f) eswt_control_pane_g3_copy1_ParamLimits

0x81aa,	// (0x0001789f) eswt_control_pane_g3_copy1

0x81b7,	// (0x000178ac) eswt_control_pane_g4_copy1_ParamLimits

0x81b7,	// (0x000178ac) eswt_control_pane_g4_copy1

0x7675,	// (0x00016d6a) bg_eswt_ctrl_canvas_pane_g1

0x763a,	// (0x00016d2f) common_borders_pane_cp2_ParamLimits

0x763a,	// (0x00016d2f) common_borders_pane_cp2

0x763a,	// (0x00016d2f) common_borders_pane_cp3_ParamLimits

0x763a,	// (0x00016d2f) common_borders_pane_cp3

0x820c,	// (0x00017901) separator_horizontal_pane

0x8214,	// (0x00017909) separator_vertical_pane

0x8190,	// (0x00017885) eswt_control_pane_g1_copy2_ParamLimits

0x8190,	// (0x00017885) eswt_control_pane_g1_copy2

0x819d,	// (0x00017892) eswt_control_pane_g2_copy2_ParamLimits

0x819d,	// (0x00017892) eswt_control_pane_g2_copy2

0x81aa,	// (0x0001789f) eswt_control_pane_g3_copy2_ParamLimits

0x81aa,	// (0x0001789f) eswt_control_pane_g3_copy2

0x81b7,	// (0x000178ac) eswt_control_pane_g4_copy2_ParamLimits

0x81b7,	// (0x000178ac) eswt_control_pane_g4_copy2

0x24ef,	// (0x00011be4) common_borders_pane_cp4

0x821d,	// (0x00017912) separator_horizontal_pane_g1

0x8226,	// (0x0001791b) separator_horizontal_pane_g2

0x822f,	// (0x00017924) separator_horizontal_pane_g3

0x0002,

0xfc09,	// (0x0001f2fe) separator_horizontal_pane_g

0x8190,	// (0x00017885) eswt_control_pane_g1_copy3_ParamLimits

0x8190,	// (0x00017885) eswt_control_pane_g1_copy3

0x819d,	// (0x00017892) eswt_control_pane_g2_copy3_ParamLimits

0x819d,	// (0x00017892) eswt_control_pane_g2_copy3

0x81aa,	// (0x0001789f) eswt_control_pane_g3_copy3_ParamLimits

0x81aa,	// (0x0001789f) eswt_control_pane_g3_copy3

0x81b7,	// (0x000178ac) eswt_control_pane_g4_copy3_ParamLimits

0x81b7,	// (0x000178ac) eswt_control_pane_g4_copy3

0x24ef,	// (0x00011be4) common_borders_pane_cp5

0x8238,	// (0x0001792d) separator_vertical_pane_g1

0x8241,	// (0x00017936) separator_vertical_pane_g2

0x824a,	// (0x0001793f) separator_vertical_pane_g3

0x0002,

0xfc10,	// (0x0001f305) separator_vertical_pane_g

0x8190,	// (0x00017885) eswt_control_pane_g1_copy4_ParamLimits

0x8190,	// (0x00017885) eswt_control_pane_g1_copy4

0x819d,	// (0x00017892) eswt_control_pane_g2_copy4_ParamLimits

0x819d,	// (0x00017892) eswt_control_pane_g2_copy4

0x81aa,	// (0x0001789f) eswt_control_pane_g3_copy4_ParamLimits

0x81aa,	// (0x0001789f) eswt_control_pane_g3_copy4

0x81b7,	// (0x000178ac) eswt_control_pane_g4_copy4_ParamLimits

0x81b7,	// (0x000178ac) eswt_control_pane_g4_copy4

0xe138,	// (0x0001d82d) eswt_ctrl_combo_button_pane

0xe140,	// (0x0001d835) eswt_ctrl_input_pane

0xe148,	// (0x0001d83d) popup_choice_list_window_cp70

0xe150,	// (0x0001d845) eswt_ctrl_input_pane_t1

0x24ef,	// (0x00011be4) input_focus_pane_cp70

0x763a,	// (0x00016d2f) bg_button_pane_cp70_ParamLimits

0x763a,	// (0x00016d2f) bg_button_pane_cp70

0xe15e,	// (0x0001d853) eswt_ctrl_combo_button_pane_g1

0x8281,	// (0x00017976) wait_bar_pane_cp70

0x4c3a,	// (0x0001432f) bg_popup_window_pane_cp70_ParamLimits

0x4c3a,	// (0x0001432f) bg_popup_window_pane_cp70

0x8289,	// (0x0001797e) popup_eswt_tasktip_window_t1

0x829f,	// (0x00017994) wait_bar_pane_cp71_ParamLimits

0x829f,	// (0x00017994) wait_bar_pane_cp71

0x82ab,	// (0x000179a0) grid_eswt_app_pane

0x39ed,	// (0x000130e2) scroll_pane_cp70

0xe166,	// (0x0001d85b) cell_eswt_app_pane_ParamLimits

0xe166,	// (0x0001d85b) cell_eswt_app_pane

0xe190,	// (0x0001d885) cell_eswt_app_pane_g1_ParamLimits

0xe190,	// (0x0001d885) cell_eswt_app_pane_g1

0xe1bf,	// (0x0001d8b4) cell_eswt_app_pane_g2_ParamLimits

0xe1bf,	// (0x0001d8b4) cell_eswt_app_pane_g2

0x0001,

0xfc17,	// (0x0001f30c) cell_eswt_app_pane_g_ParamLimits

0xfc17,	// (0x0001f30c) cell_eswt_app_pane_g

0xe1e8,	// (0x0001d8dd) cell_eswt_app_pane_t1_ParamLimits

0xe1e8,	// (0x0001d8dd) cell_eswt_app_pane_t1

0x836e,	// (0x00017a63) grid_highlight_pane_cp70_ParamLimits

0x836e,	// (0x00017a63) grid_highlight_pane_cp70

0x415b,	// (0x00013850) set_content_pane_g1

0xd36a,	// (0x0001ca5f) status_small_volume_pane

0x18b4,	// (0x00010fa9) status_small_volume_pane_g1

0x18bc,	// (0x00010fb1) volume_small2_pane

0x18c5,	// (0x00010fba) volume_small2_pane_g1

0x18ce,	// (0x00010fc3) volume_small2_pane_g2

0x18d7,	// (0x00010fcc) volume_small2_pane_g3

0x18e0,	// (0x00010fd5) volume_small2_pane_g4

0x18e9,	// (0x00010fde) volume_small2_pane_g5

0x18f2,	// (0x00010fe7) volume_small2_pane_g6

0x18fb,	// (0x00010ff0) volume_small2_pane_g7

0x1904,	// (0x00010ff9) volume_small2_pane_g8

0x190d,	// (0x00011002) volume_small2_pane_g9

0x1916,	// (0x0001100b) volume_small2_pane_g10

0x0009,

0xfc1c,	// (0x0001f311) volume_small2_pane_g

0x7a3b,	// (0x00017130) fep_vkb_top_text_pane_g1_ParamLimits

0xe08f,	// (0x0001d784) fep_vkb_top_text_pane_t1_ParamLimits

0x7cb0,	// (0x000173a5) popup_preview_fixed_window_g3_ParamLimits

0x7cb0,	// (0x000173a5) popup_preview_fixed_window_g3

0xbff9,	// (0x0001b6ee) popup_toolbar_trans_pane

0xda48,	// (0x0001d13d) aid_height_set_list_ParamLimits

0x600c,	// (0x00015701) aid_size_parent_ParamLimits

0x45cc,	// (0x00013cc1) list_highlight_pane_cp2_ParamLimits

0x415b,	// (0x00013850) set_content_pane_g1_ParamLimits

0xdc01,	// (0x0001d2f6) list_single_image_pane_ParamLimits

0xdc01,	// (0x0001d2f6) list_single_image_pane

0xe21a,	// (0x0001d90f) aid_size_cell_image_ParamLimits

0xe21a,	// (0x0001d90f) aid_size_cell_image

0xe227,	// (0x0001d91c) grid_single_image_pane_ParamLimits

0xe227,	// (0x0001d91c) grid_single_image_pane

0x57bd,	// (0x00014eb2) list_single_image_pane_g1_ParamLimits

0x57bd,	// (0x00014eb2) list_single_image_pane_g1

0x8393,	// (0x00017a88) list_single_image_pane_g2_ParamLimits

0x8393,	// (0x00017a88) list_single_image_pane_g2

0x0001,

0xfc31,	// (0x0001f326) list_single_image_pane_g_ParamLimits

0xfc31,	// (0x0001f326) list_single_image_pane_g

0x83a7,	// (0x00017a9c) list_single_image_pane_t1_ParamLimits

0x83a7,	// (0x00017a9c) list_single_image_pane_t1

0xe235,	// (0x0001d92a) cell_image_list_pane_ParamLimits

0xe235,	// (0x0001d92a) cell_image_list_pane

0xe24b,	// (0x0001d940) cell_image_list_pane_g1

0xe254,	// (0x0001d949) cell_image_list_pane_g2

0x0001,

0xfc36,	// (0x0001f32b) cell_image_list_pane_g

0x83e3,	// (0x00017ad8) aid_size_cell_tb_trans_pane

0x33e7,	// (0x00012adc) bg_tb_trans_pane

0x83f5,	// (0x00017aea) grid_tb_trans_pane

0x4b0c,	// (0x00014201) bg_tb_trans_pane_g1

0x4b1c,	// (0x00014211) bg_tb_trans_pane_g2

0x4b14,	// (0x00014209) bg_tb_trans_pane_g3

0x4b2c,	// (0x00014221) bg_tb_trans_pane_g4

0x4b24,	// (0x00014219) bg_tb_trans_pane_g5

0x4b4c,	// (0x00014241) bg_tb_trans_pane_g6

0x4b44,	// (0x00014239) bg_tb_trans_pane_g7

0x4b34,	// (0x00014229) bg_tb_trans_pane_g8

0x4b3c,	// (0x00014231) bg_tb_trans_pane_g9

0x0008,

0xfc3b,	// (0x0001f330) bg_tb_trans_pane_g

0x8409,	// (0x00017afe) cell_toolbar_trans_pane_ParamLimits

0x8409,	// (0x00017afe) cell_toolbar_trans_pane

0x7675,	// (0x00016d6a) cell_toolbar_trans_pane_g1

0xde44,	// (0x0001d539) list_form2_midp_pane_t1

0xde52,	// (0x0001d547) list_form2_midp_pane_t2

0x0001,

0xfad8,	// (0x0001f1cd) list_form2_midp_pane_t

0x720c,	// (0x00016901) scroll_pane_cp51_ParamLimits

0x7417,	// (0x00016b0c) form2_midp_wait_pane_g1

0x7420,	// (0x00016b15) form2_midp_wait_pane_g2

0x7429,	// (0x00016b1e) form2_midp_wait_pane_g3

0x0002,

0xfaed,	// (0x0001f1e2) form2_midp_wait_pane_g

0x25e3,	// (0x00011cd8) list_highlight_pane_cp21_ParamLimits

0x7480,	// (0x00016b75) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x748f,	// (0x00016b84) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6212,	// (0x00015907) list_single_2graphic_im_pane_ParamLimits

0x6212,	// (0x00015907) list_single_2graphic_im_pane

0xe25d,	// (0x0001d952) list_single_2graphic_im_pane_g1_ParamLimits

0xe25d,	// (0x0001d952) list_single_2graphic_im_pane_g1

0xe26e,	// (0x0001d963) list_single_2graphic_im_pane_g2_ParamLimits

0xe26e,	// (0x0001d963) list_single_2graphic_im_pane_g2

0xe27a,	// (0x0001d96f) list_single_2graphic_im_pane_g3_ParamLimits

0xe27a,	// (0x0001d96f) list_single_2graphic_im_pane_g3

0x0003,

0xfc4e,	// (0x0001f343) list_single_2graphic_im_pane_g_ParamLimits

0xfc4e,	// (0x0001f343) list_single_2graphic_im_pane_g

0xe28e,	// (0x0001d983) list_single_2graphic_im_pane_t1_ParamLimits

0xe28e,	// (0x0001d983) list_single_2graphic_im_pane_t1

0x7cbc,	// (0x000173b1) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cbc,	// (0x000173b1) list_single_graphic_2heading_pane_fp

0x7d00,	// (0x000173f5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7d00,	// (0x000173f5) list_single_graphic_2heading_pane_fp_g1

0x7cd1,	// (0x000173c6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7cd1,	// (0x000173c6) list_single_graphic_2heading_pane_fp_g2

0x3030,	// (0x00012725) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3030,	// (0x00012725) list_single_graphic_2heading_pane_fp_g3

0x340d,	// (0x00012b02) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x340d,	// (0x00012b02) list_single_graphic_2heading_pane_fp_g4

0x7cdd,	// (0x000173d2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7cdd,	// (0x000173d2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f26a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f26a) list_single_graphic_2heading_pane_fp_g

0x849d,	// (0x00017b92) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x849d,	// (0x00017b92) list_single_graphic_2heading_pane_fp_t1

0x7d38,	// (0x0001742d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7d38,	// (0x0001742d) list_single_graphic_2heading_pane_fp_t2

0x84b3,	// (0x00017ba8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x84b3,	// (0x00017ba8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc57,	// (0x0001f34c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc57,	// (0x0001f34c) list_single_graphic_2heading_pane_fp_t

0x7701,	// (0x00016df6) fep_hwr_write_pane_g5_ParamLimits

0x7701,	// (0x00016df6) fep_hwr_write_pane_g5

0x770d,	// (0x00016e02) fep_hwr_write_pane_g6_ParamLimits

0x770d,	// (0x00016e02) fep_hwr_write_pane_g6

0x815f,	// (0x00017854) eswt_shell_pane_ParamLimits

0x4c3a,	// (0x0001432f) bg_popup_window_pane_cp18_ParamLimits

0x5f2c,	// (0x00015621) heading_pane_cp70

0x8289,	// (0x0001797e) popup_eswt_tasktip_window_t1_ParamLimits

0xd438,	// (0x0001cb2d) aid_touch_tab_arrow_left

0xd44e,	// (0x0001cb43) aid_touch_tab_arrow_right

0xc733,	// (0x0001be28) title_pane_g3_ParamLimits

0xc733,	// (0x0001be28) title_pane_g3

0x32c6,	// (0x000129bb) set_value_pane_g1

0xbff9,	// (0x0001b6ee) popup_toolbar_trans_pane_ParamLimits

0x83e3,	// (0x00017ad8) aid_size_cell_tb_trans_pane_ParamLimits

0x33e7,	// (0x00012adc) bg_tb_trans_pane_ParamLimits

0x83f5,	// (0x00017aea) grid_tb_trans_pane_ParamLimits

0x2886,	// (0x00011f7b) cont_note_pane_ParamLimits

0x2886,	// (0x00011f7b) cont_note_pane

0x2bdd,	// (0x000122d2) cont_snote2_single_text_pane_ParamLimits

0x2bdd,	// (0x000122d2) cont_snote2_single_text_pane

0x2bdd,	// (0x000122d2) cont_snote2_single_graphic_pane_ParamLimits

0x2bdd,	// (0x000122d2) cont_snote2_single_graphic_pane

0x527d,	// (0x00014972) cont_note_wait_pane_ParamLimits

0x527d,	// (0x00014972) cont_note_wait_pane

0x527d,	// (0x00014972) cont_note_image_pane_ParamLimits

0x527d,	// (0x00014972) cont_note_image_pane

0x84c9,	// (0x00017bbe) popup_note2_window_g1_ParamLimits

0x84c9,	// (0x00017bbe) popup_note2_window_g1

0x84fa,	// (0x00017bef) popup_note2_window_t1_ParamLimits

0x84fa,	// (0x00017bef) popup_note2_window_t1

0x853f,	// (0x00017c34) popup_note2_window_t2_ParamLimits

0x853f,	// (0x00017c34) popup_note2_window_t2

0x8584,	// (0x00017c79) popup_note2_window_t3_ParamLimits

0x8584,	// (0x00017c79) popup_note2_window_t3

0x85c9,	// (0x00017cbe) popup_note2_window_t4_ParamLimits

0x85c9,	// (0x00017cbe) popup_note2_window_t4

0x290a,	// (0x00011fff) popup_note2_window_t5_ParamLimits

0x290a,	// (0x00011fff) popup_note2_window_t5

0x0004,

0xfc63,	// (0x0001f358) popup_note2_window_t_ParamLimits

0xfc63,	// (0x0001f358) popup_note2_window_t

0x85f8,	// (0x00017ced) popup_note2_image_window_g1_ParamLimits

0x85f8,	// (0x00017ced) popup_note2_image_window_g1

0x8604,	// (0x00017cf9) popup_note2_image_window_g2_ParamLimits

0x8604,	// (0x00017cf9) popup_note2_image_window_g2

0x0001,

0xfc6e,	// (0x0001f363) popup_note2_image_window_g_ParamLimits

0xfc6e,	// (0x0001f363) popup_note2_image_window_g

0x8616,	// (0x00017d0b) popup_note2_image_window_t1_ParamLimits

0x8616,	// (0x00017d0b) popup_note2_image_window_t1

0x862e,	// (0x00017d23) popup_note2_image_window_t2_ParamLimits

0x862e,	// (0x00017d23) popup_note2_image_window_t2

0x8646,	// (0x00017d3b) popup_note2_image_window_t3_ParamLimits

0x8646,	// (0x00017d3b) popup_note2_image_window_t3

0x0002,

0xfc73,	// (0x0001f368) popup_note2_image_window_t_ParamLimits

0xfc73,	// (0x0001f368) popup_note2_image_window_t

0x528b,	// (0x00014980) popup_note2_wait_window_g1_ParamLimits

0x528b,	// (0x00014980) popup_note2_wait_window_g1

0x8662,	// (0x00017d57) popup_note2_wait_window_g2_ParamLimits

0x8662,	// (0x00017d57) popup_note2_wait_window_g2

0x52a3,	// (0x00014998) popup_note2_wait_window_g3_ParamLimits

0x52a3,	// (0x00014998) popup_note2_wait_window_g3

0x0002,

0xfc7a,	// (0x0001f36f) popup_note2_wait_window_g_ParamLimits

0xfc7a,	// (0x0001f36f) popup_note2_wait_window_g

0x866e,	// (0x00017d63) popup_note2_wait_window_t1_ParamLimits

0x866e,	// (0x00017d63) popup_note2_wait_window_t1

0x868c,	// (0x00017d81) popup_note2_wait_window_t2_ParamLimits

0x868c,	// (0x00017d81) popup_note2_wait_window_t2

0x86aa,	// (0x00017d9f) popup_note2_wait_window_t3_ParamLimits

0x86aa,	// (0x00017d9f) popup_note2_wait_window_t3

0x86bc,	// (0x00017db1) popup_note2_wait_window_t4_ParamLimits

0x86bc,	// (0x00017db1) popup_note2_wait_window_t4

0x0003,

0xfc81,	// (0x0001f376) popup_note2_wait_window_t_ParamLimits

0xfc81,	// (0x0001f376) popup_note2_wait_window_t

0x86ce,	// (0x00017dc3) wait_bar2_pane_ParamLimits

0x86ce,	// (0x00017dc3) wait_bar2_pane

0x86e6,	// (0x00017ddb) popup_snote2_single_text_window_g1_ParamLimits

0x86e6,	// (0x00017ddb) popup_snote2_single_text_window_g1

0x870e,	// (0x00017e03) popup_snote2_single_text_window_t1_ParamLimits

0x870e,	// (0x00017e03) popup_snote2_single_text_window_t1

0x875a,	// (0x00017e4f) popup_snote2_single_text_window_t2_ParamLimits

0x875a,	// (0x00017e4f) popup_snote2_single_text_window_t2

0x87a6,	// (0x00017e9b) popup_snote2_single_text_window_t3_ParamLimits

0x87a6,	// (0x00017e9b) popup_snote2_single_text_window_t3

0x87e7,	// (0x00017edc) popup_snote2_single_text_window_t4_ParamLimits

0x87e7,	// (0x00017edc) popup_snote2_single_text_window_t4

0x881d,	// (0x00017f12) popup_snote2_single_text_window_t5_ParamLimits

0x881d,	// (0x00017f12) popup_snote2_single_text_window_t5

0x0004,

0xfc8a,	// (0x0001f37f) popup_snote2_single_text_window_t_ParamLimits

0xfc8a,	// (0x0001f37f) popup_snote2_single_text_window_t

0x8848,	// (0x00017f3d) popup_snote2_single_graphic_window_g1_ParamLimits

0x8848,	// (0x00017f3d) popup_snote2_single_graphic_window_g1

0x8870,	// (0x00017f65) popup_snote2_single_graphic_window_g2_ParamLimits

0x8870,	// (0x00017f65) popup_snote2_single_graphic_window_g2

0x0001,

0xfc95,	// (0x0001f38a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc95,	// (0x0001f38a) popup_snote2_single_graphic_window_g

0x8898,	// (0x00017f8d) popup_snote2_single_graphic_window_t1_ParamLimits

0x8898,	// (0x00017f8d) popup_snote2_single_graphic_window_t1

0x88e4,	// (0x00017fd9) popup_snote2_single_graphic_window_t2_ParamLimits

0x88e4,	// (0x00017fd9) popup_snote2_single_graphic_window_t2

0x87a6,	// (0x00017e9b) popup_snote2_single_graphic_window_t3_ParamLimits

0x87a6,	// (0x00017e9b) popup_snote2_single_graphic_window_t3

0x87e7,	// (0x00017edc) popup_snote2_single_graphic_window_t4_ParamLimits

0x87e7,	// (0x00017edc) popup_snote2_single_graphic_window_t4

0x881d,	// (0x00017f12) popup_snote2_single_graphic_window_t5_ParamLimits

0x881d,	// (0x00017f12) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9a,	// (0x0001f38f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9a,	// (0x0001f38f) popup_snote2_single_graphic_window_t

0x70cd,	// (0x000167c2) clock_nsta_pane_cp2_t1

0x70cd,	// (0x000167c2) clock_nsta_pane_cp2_t2

0x0001,

0xfaae,	// (0x0001f1a3) clock_nsta_pane_cp2_t

0x3401,	// (0x00012af6) form_field_data_wide_pane_g1_ParamLimits

0x3030,	// (0x00012725) form_field_data_wide_pane_g2_ParamLimits

0x3030,	// (0x00012725) form_field_data_wide_pane_g2

0x340d,	// (0x00012b02) form_field_data_wide_pane_g3_ParamLimits

0x340d,	// (0x00012b02) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001ed6b) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001ed6b) form_field_data_wide_pane_g

0xdd87,	// (0x0001d47c) grid_touch_3_pane_ParamLimits

0xdd87,	// (0x0001d47c) grid_touch_3_pane

0xe2bf,	// (0x0001d9b4) cell_touch_3_pane_ParamLimits

0xe2bf,	// (0x0001d9b4) cell_touch_3_pane

0x7675,	// (0x00016d6a) cell_touch_3_pane_g1

0x7675,	// (0x00016d6a) cell_touch_3_pane_g2

0x0001,

0xfb33,	// (0x0001f228) cell_touch_3_pane_g

0x293c,	// (0x00012031) cont_query_data_pane

0x2944,	// (0x00012039) cont_query_data_pane_cp1

0x895e,	// (0x00018053) button_value_adjust_pane_cp7

0x8966,	// (0x0001805b) query_popup_pane_cp3

0x3cd4,	// (0x000133c9) bg_popup_sub_pane_cp22_ParamLimits

0x06a2,	// (0x0000fd97) navi_navi_volume_pane_cp2

0x06bd,	// (0x0000fdb2) popup_side_volume_key_window_g2

0x06cc,	// (0x0000fdc1) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001ee01) popup_side_volume_key_window_g

0x06e9,	// (0x0000fdde) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001ee08) popup_side_volume_key_window_t

0x401a,	// (0x0001370f) popup_side_volume_key_window_ParamLimits

0xcb93,	// (0x0001c288) list_double_graphic_pane_g4_ParamLimits

0xcb93,	// (0x0001c288) list_double_graphic_pane_g4

0xdbdd,	// (0x0001d2d2) list_single_2heading_msg_pane_ParamLimits

0xdbdd,	// (0x0001d2d2) list_single_2heading_msg_pane

0xe307,	// (0x0001d9fc) list_single_2heading_msg_pane_g1_ParamLimits

0xe307,	// (0x0001d9fc) list_single_2heading_msg_pane_g1

0xe313,	// (0x0001da08) list_single_2heading_msg_pane_g2_ParamLimits

0xe313,	// (0x0001da08) list_single_2heading_msg_pane_g2

0xe326,	// (0x0001da1b) list_single_2heading_msg_pane_g3_ParamLimits

0xe326,	// (0x0001da1b) list_single_2heading_msg_pane_g3

0xe332,	// (0x0001da27) list_single_2heading_msg_pane_g4_ParamLimits

0xe332,	// (0x0001da27) list_single_2heading_msg_pane_g4

0x0003,

0xfca5,	// (0x0001f39a) list_single_2heading_msg_pane_g_ParamLimits

0xfca5,	// (0x0001f39a) list_single_2heading_msg_pane_g

0xe34a,	// (0x0001da3f) list_single_2heading_msg_pane_t1_ParamLimits

0xe34a,	// (0x0001da3f) list_single_2heading_msg_pane_t1

0xe372,	// (0x0001da67) list_single_2heading_msg_pane_t2_ParamLimits

0xe372,	// (0x0001da67) list_single_2heading_msg_pane_t2

0xe3dd,	// (0x0001dad2) list_single_2heading_msg_pane_t3_ParamLimits

0xe3dd,	// (0x0001dad2) list_single_2heading_msg_pane_t3

0x8a49,	// (0x0001813e) list_single_2heading_msg_pane_t4_ParamLimits

0x8a49,	// (0x0001813e) list_single_2heading_msg_pane_t4

0x0003,

0xfcae,	// (0x0001f3a3) list_single_2heading_msg_pane_t_ParamLimits

0xfcae,	// (0x0001f3a3) list_single_2heading_msg_pane_t

0x2537,	// (0x00011c2c) title_pane_g4_ParamLimits

0x2537,	// (0x00011c2c) title_pane_g4

0x04b1,	// (0x0000fba6) title_pane_stacon_g3_ParamLimits

0x04b1,	// (0x0000fba6) title_pane_stacon_g3

0x8460,	// (0x00017b55) list_single_2graphic_im_pane_g4_ParamLimits

0x8460,	// (0x00017b55) list_single_2graphic_im_pane_g4

0x5ce8,	// (0x000153dd) popup_side_volume_key_window_cp

0x65f5,	// (0x00015cea) main_idle_act2_pane_t1

0x10b8,	// (0x000107ad) toolbar_button_pane_g10

0xca3e,	// (0x0001c133) popup_toolbar_window_cp1

0x70be,	// (0x000167b3) clock_nsta_pane_cp_t1

0x70be,	// (0x000167b3) clock_nsta_pane_cp_t2

0x0001,

0xfaa9,	// (0x0001f19e) clock_nsta_pane_cp_t

0x06a2,	// (0x0000fd97) navi_navi_volume_pane_cp2_ParamLimits

0x06b1,	// (0x0000fda6) popup_side_volume_key_window_g1_ParamLimits

0x06bd,	// (0x0000fdb2) popup_side_volume_key_window_g2_ParamLimits

0x06cc,	// (0x0000fdc1) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001ee01) popup_side_volume_key_window_g_ParamLimits

0x1520,	// (0x00010c15) fep_hwr_aid_pane

0x15c7,	// (0x00010cbc) bg_fep_hwr_top_pane_g4_ParamLimits

0x76d1,	// (0x00016dc6) fep_hwr_top_pane_g1_ParamLimits

0x76e3,	// (0x00016dd8) fep_hwr_top_pane_g2_ParamLimits

0x15e7,	// (0x00010cdc) fep_hwr_top_pane_g3_ParamLimits

0xfafe,	// (0x0001f1f3) fep_hwr_top_pane_g_ParamLimits

0x15fc,	// (0x00010cf1) fep_hwr_top_text_pane_ParamLimits

0x5aab,	// (0x000151a0) aid_touch_tab_arrow_arrow_2

0x5ab4,	// (0x000151a9) aid_touch_tab_arrow_left_2

0x1534,	// (0x00010c29) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x156b,	// (0x00010c60) fep_hwr_prediction_pane

0x7843,	// (0x00016f38) fep_vkb_prediction_pane

0xe06f,	// (0x0001d764) fep_vkb_side_pane_g3_ParamLimits

0xe06f,	// (0x0001d764) fep_vkb_side_pane_g3

0x1777,	// (0x00010e6c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x17e3,	// (0x00010ed8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x17f0,	// (0x00010ee5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbad,	// (0x0001f2a2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x191f,	// (0x00011014) fep_hwr_prediction_pane_g1

0x1929,	// (0x0001101e) fep_hwr_prediction_pane_g2

0x1931,	// (0x00011026) fep_hwr_prediction_pane_g3

0x1939,	// (0x0001102e) fep_hwr_prediction_pane_g4

0x0003,

0xfcb7,	// (0x0001f3ac) fep_hwr_prediction_pane_g

0x8a6e,	// (0x00018163) fep_vkb_prediction_pane_g1

0x8a78,	// (0x0001816d) fep_vkb_prediction_pane_g2

0x8a80,	// (0x00018175) fep_vkb_prediction_pane_g3

0x8a88,	// (0x0001817d) fep_vkb_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0001f3b5) fep_vkb_prediction_pane_g

0x13a0,	// (0x00010a95) slider_set_pane_g3

0x13b4,	// (0x00010aa9) slider_set_pane_g4

0x13cc,	// (0x00010ac1) slider_set_pane_g5

0x13a0,	// (0x00010a95) slider_set_pane_g6

0x13e2,	// (0x00010ad7) slider_set_pane_g7

0x6171,	// (0x00015866) slider_form_pane_g3

0x617a,	// (0x0001586f) slider_form_pane_g4

0x6182,	// (0x00015877) slider_form_pane_g5

0x6171,	// (0x00015866) slider_form_pane_g6

0xdb93,	// (0x0001d288) slider_form_pane_g7

0x68f2,	// (0x00015fe7) slider_set_pane_vc_g3

0x68fb,	// (0x00015ff0) slider_set_pane_vc_g4

0x6904,	// (0x00015ff9) slider_set_pane_vc_g5

0x68f2,	// (0x00015fe7) slider_set_pane_vc_g6

0x690d,	// (0x00016002) slider_set_pane_vc_g7

0x6d92,	// (0x00016487) slider_form_pane_vc_g1

0x6d9b,	// (0x00016490) slider_form_pane_vc_g2

0x6da4,	// (0x00016499) slider_form_pane_vc_g3

0x6d92,	// (0x00016487) slider_form_pane_vc_g4

0x6dad,	// (0x000164a2) slider_form_pane_vc_g5

0x0004,

0xfa7b,	// (0x0001f170) slider_form_pane_vc_g

0x0178,	// (0x0000f86d) main_idle_act3_pane

0x8a90,	// (0x00018185) ai3_links_pane

0xe44b,	// (0x0001db40) popup_ai3_data_window_ParamLimits

0xe44b,	// (0x0001db40) popup_ai3_data_window

0x24ef,	// (0x00011be4) grid_ai3_links_pane

0xe465,	// (0x0001db5a) cell_ai3_links_pane_ParamLimits

0xe465,	// (0x0001db5a) cell_ai3_links_pane

0x8acb,	// (0x000181c0) bg_popup_sub_pane_cp11

0x8ad8,	// (0x000181cd) cell_ai3_links_pane_g1

0x24ef,	// (0x00011be4) bg_popup_sub_pane_cp12

0x8afd,	// (0x000181f2) heading_ai3_data_pane

0x8b05,	// (0x000181fa) list_ai3_gene_pane

0x8b11,	// (0x00018206) popup_ai3_data_window_g1

0x8b19,	// (0x0001820e) heading_ai3_data_pane_g1

0x8b21,	// (0x00018216) heading_ai3_data_pane_t1

0x8b2f,	// (0x00018224) list_double_ai3_gene_pane_ParamLimits

0x8b2f,	// (0x00018224) list_double_ai3_gene_pane

0x8b3c,	// (0x00018231) list_single_ai3_gene_pane_ParamLimits

0x8b3c,	// (0x00018231) list_single_ai3_gene_pane

0x763a,	// (0x00016d2f) list_highlight_pane_cp7_ParamLimits

0x763a,	// (0x00016d2f) list_highlight_pane_cp7

0x8b49,	// (0x0001823e) list_single_a13_gene_pane_t1_ParamLimits

0x8b49,	// (0x0001823e) list_single_a13_gene_pane_t1

0x8b60,	// (0x00018255) list_single_ai3_gene_pane_g1

0x8b69,	// (0x0001825e) list_single_ai3_gene_pane_g2

0x0001,

0xfcc9,	// (0x0001f3be) list_single_ai3_gene_pane_g

0x8b71,	// (0x00018266) list_double_ai3_gene_pane_g1_ParamLimits

0x8b71,	// (0x00018266) list_double_ai3_gene_pane_g1

0x8b7d,	// (0x00018272) list_double_ai3_gene_pane_t1_ParamLimits

0x8b7d,	// (0x00018272) list_double_ai3_gene_pane_t1

0x8b99,	// (0x0001828e) list_double_ai3_gene_pane_t2_ParamLimits

0x8b99,	// (0x0001828e) list_double_ai3_gene_pane_t2

0x8baf,	// (0x000182a4) list_double_ai3_gene_pane_t3_ParamLimits

0x8baf,	// (0x000182a4) list_double_ai3_gene_pane_t3

0x0002,

0xfcce,	// (0x0001f3c3) list_double_ai3_gene_pane_t_ParamLimits

0xfcce,	// (0x0001f3c3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8977,	// (0x0001806c) aid_size_min_col_2

0xe2f1,	// (0x0001d9e6) aid_size_min_msg_ParamLimits

0xe2f1,	// (0x0001d9e6) aid_size_min_msg

0xe083,	// (0x0001d778) fep_vkb_top_text_pane_g2_ParamLimits

0xe083,	// (0x0001d778) fep_vkb_top_text_pane_g2

0x0001,

0xfb2e,	// (0x0001f223) fep_vkb_top_text_pane_g_ParamLimits

0xfb2e,	// (0x0001f223) fep_vkb_top_text_pane_g

0x0178,	// (0x0000f86d) main_hc_apps_shell_pane

0x8bcc,	// (0x000182c1) grid_hc_apps_pane_ParamLimits

0x8bcc,	// (0x000182c1) grid_hc_apps_pane

0x8bdb,	// (0x000182d0) list_hc_apps_pane

0x8be3,	// (0x000182d8) scroll_pane_cp37_ParamLimits

0x8be3,	// (0x000182d8) scroll_pane_cp37

0xe47f,	// (0x0001db74) cell_hc_apps_pane_ParamLimits

0xe47f,	// (0x0001db74) cell_hc_apps_pane

0xe53d,	// (0x0001dc32) cell_hc_apps_pane_g1_ParamLimits

0xe53d,	// (0x0001dc32) cell_hc_apps_pane_g1

0x8cce,	// (0x000183c3) cell_hc_apps_pane_g2_ParamLimits

0x8cce,	// (0x000183c3) cell_hc_apps_pane_g2

0x8cea,	// (0x000183df) cell_hc_apps_pane_g3_ParamLimits

0x8cea,	// (0x000183df) cell_hc_apps_pane_g3

0x0002,

0xfcd5,	// (0x0001f3ca) cell_hc_apps_pane_g_ParamLimits

0xfcd5,	// (0x0001f3ca) cell_hc_apps_pane_g

0xe56a,	// (0x0001dc5f) cell_hc_apps_pane_t1_ParamLimits

0xe56a,	// (0x0001dc5f) cell_hc_apps_pane_t1

0x2886,	// (0x00011f7b) grid_highlight_pane_cp10_ParamLimits

0x2886,	// (0x00011f7b) grid_highlight_pane_cp10

0xe5a8,	// (0x0001dc9d) list_single_hc_apps_pane_ParamLimits

0xe5a8,	// (0x0001dc9d) list_single_hc_apps_pane

0xe5d5,	// (0x0001dcca) list_single_hc_apps_pane_g1

0xe5ee,	// (0x0001dce3) list_single_hc_apps_pane_g2

0x0001,

0xfcdc,	// (0x0001f3d1) list_single_hc_apps_pane_g

0xe607,	// (0x0001dcfc) list_single_hc_apps_pane_g2_copy1

0x8df6,	// (0x000184eb) list_single_hc_apps_pane_t1

0x25e3,	// (0x00011cd8) bg_set_opt_pane_cp_ParamLimits

0x03d9,	// (0x0000face) setting_slider_pane_t1_ParamLimits

0x03f2,	// (0x0000fae7) setting_slider_pane_t2_ParamLimits

0x040c,	// (0x0000fb01) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001ec53) setting_slider_pane_t_ParamLimits

0x0424,	// (0x0000fb19) slider_set_pane_ParamLimits

0x094b,	// (0x00010040) control_pane_g5_ParamLimits

0x094b,	// (0x00010040) control_pane_g5

0x5fc0,	// (0x000156b5) slider_set_pane_g1_ParamLimits

0x1394,	// (0x00010a89) slider_set_pane_g2_ParamLimits

0x13a0,	// (0x00010a95) slider_set_pane_g3_ParamLimits

0x13b4,	// (0x00010aa9) slider_set_pane_g4_ParamLimits

0x13cc,	// (0x00010ac1) slider_set_pane_g5_ParamLimits

0x13a0,	// (0x00010a95) slider_set_pane_g6_ParamLimits

0x13e2,	// (0x00010ad7) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001f04f) slider_set_pane_g_ParamLimits

0x4106,	// (0x000137fb) navi_icon_text_pane_ParamLimits

0xd401,	// (0x0001caf6) aid_fill_nsta_2_ParamLimits

0xd438,	// (0x0001cb2d) aid_touch_tab_arrow_left_ParamLimits

0xd44e,	// (0x0001cb43) aid_touch_tab_arrow_right_ParamLimits

0xd4e9,	// (0x0001cbde) clock_nsta_pane_ParamLimits

0x5a8d,	// (0x00015182) navi_icon_pane_g1_ParamLimits

0x5a99,	// (0x0001518e) navi_text_pane_t1_ParamLimits

0x71ca,	// (0x000168bf) navi_icon_text_pane_g1_ParamLimits

0x71d6,	// (0x000168cb) navi_icon_text_pane_t1_ParamLimits

0xe5d5,	// (0x0001dcca) list_single_hc_apps_pane_g1_ParamLimits

0xe5ee,	// (0x0001dce3) list_single_hc_apps_pane_g2_ParamLimits

0xfcdc,	// (0x0001f3d1) list_single_hc_apps_pane_g_ParamLimits

0xe607,	// (0x0001dcfc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8df6,	// (0x000184eb) list_single_hc_apps_pane_t1_ParamLimits

0xb750,	// (0x0001ae45) popup_toolbar2_fixed_window_ParamLimits

0xb750,	// (0x0001ae45) popup_toolbar2_fixed_window

0xbfef,	// (0x0001b6e4) popup_toolbar2_float_window

0x24ef,	// (0x00011be4) bg_popup_sub_pane_cp27

0x8e24,	// (0x00018519) grid_toolbar2_float_pane

0x24ef,	// (0x00011be4) bg_popup_sub_pane_cp26

0x8e24,	// (0x00018519) grid_toolbar2_fixed_pane

0xe623,	// (0x0001dd18) cell_toolbar2_fixed_pane_ParamLimits

0xe623,	// (0x0001dd18) cell_toolbar2_fixed_pane

0xe63d,	// (0x0001dd32) cell_toolbar2_fixed_pane_g1

0x8e45,	// (0x0001853a) toolbar2_fixed_button_pane

0x4b0c,	// (0x00014201) toolbar2_fixed_button_pane_g1

0x4b1c,	// (0x00014211) toolbar2_fixed_button_pane_g2

0x4b14,	// (0x00014209) toolbar2_fixed_button_pane_g3

0x4b2c,	// (0x00014221) toolbar2_fixed_button_pane_g4

0x4b24,	// (0x00014219) toolbar2_fixed_button_pane_g5

0x4b34,	// (0x00014229) toolbar2_fixed_button_pane_g6

0x4b3c,	// (0x00014231) toolbar2_fixed_button_pane_g7

0x4b4c,	// (0x00014241) toolbar2_fixed_button_pane_g8

0x4b44,	// (0x00014239) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001ef51) toolbar2_fixed_button_pane_g

0x8e4d,	// (0x00018542) cell_toolbar2_float_pane_ParamLimits

0x8e4d,	// (0x00018542) cell_toolbar2_float_pane

0x8e5e,	// (0x00018553) cell_toolbar2_float_pane_g1

0x8e45,	// (0x0001853a) toolbar2_fixed_button_pane_cp

0xdf5d,	// (0x0001d652) fep_vkb_accented_list_pane_ParamLimits

0xdf5d,	// (0x0001d652) fep_vkb_accented_list_pane

0x1757,	// (0x00010e4c) bg_popup_fep_shadow_pane_g9

0x4286,	// (0x0001397b) bg_popup_fep_shadow_pane_cp3

0x36b8,	// (0x00012dad) list_accented_list_pane

0x8e67,	// (0x0001855c) list_single_accented_list_pane_ParamLimits

0x8e67,	// (0x0001855c) list_single_accented_list_pane

0x4286,	// (0x0001397b) list_highlight_pane_cp10

0x8e78,	// (0x0001856d) list_single_accented_list_pane_t1

0xbf19,	// (0x0001b60e) popup_slider_window_ParamLimits

0xbf19,	// (0x0001b60e) popup_slider_window

0x896e,	// (0x00018063) aid_indentation_list_msg

0xe736,	// (0x0001de2b) bg_popup_window_pane_cp19

0x8f9c,	// (0x00018691) popup_slider_window_g1

0x8fb8,	// (0x000186ad) popup_slider_window_g2

0x8fd4,	// (0x000186c9) popup_slider_window_g3

0x0005,

0xfce1,	// (0x0001f3d6) popup_slider_window_g

0x9030,	// (0x00018725) popup_slider_window_t1

0x90a4,	// (0x00018799) small_volume_slider_vertical_pane

0x7675,	// (0x00016d6a) small_volume_slider_vertical_pane_g1

0x7675,	// (0x00016d6a) small_volume_slider_vertical_pane_g2

0x90c0,	// (0x000187b5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf3,	// (0x0001f3e8) small_volume_slider_vertical_pane_g

0xb6be,	// (0x0001adb3) area_side_right_pane_ParamLimits

0xb6be,	// (0x0001adb3) area_side_right_pane

0xc125,	// (0x0001b81a) aid_size_side_button_ParamLimits

0xc125,	// (0x0001b81a) aid_size_side_button

0xc13e,	// (0x0001b833) grid_sctrl_middle_pane_ParamLimits

0xc13e,	// (0x0001b833) grid_sctrl_middle_pane

0x1974,	// (0x00011069) sctrl_sk_bottom_pane

0x1985,	// (0x0001107a) sctrl_sk_top_pane

0x1997,	// (0x0001108c) aid_touch_sctrl_top

0x19a4,	// (0x00011099) bg_sctrl_sk_pane_ParamLimits

0x19a4,	// (0x00011099) bg_sctrl_sk_pane

0x19b2,	// (0x000110a7) sctrl_sk_top_pane_g1

0x19bf,	// (0x000110b4) sctrl_sk_top_pane_t1

0x1997,	// (0x0001108c) aid_touch_sctrl_bottom

0x19a4,	// (0x00011099) bg_sctrl_sk_pane_cp_ParamLimits

0x19a4,	// (0x00011099) bg_sctrl_sk_pane_cp

0x19da,	// (0x000110cf) sctrl_sk_bottom_pane_g1

0x19bf,	// (0x000110b4) sctrl_sk_bottom_pane_t1

0xc158,	// (0x0001b84d) cell_sctrl_middle_pane_ParamLimits

0xc158,	// (0x0001b84d) cell_sctrl_middle_pane

0xc169,	// (0x0001b85e) aid_touch_sctrl_middle_ParamLimits

0xc169,	// (0x0001b85e) aid_touch_sctrl_middle

0xc176,	// (0x0001b86b) bg_sctrl_middle_pane_ParamLimits

0xc176,	// (0x0001b86b) bg_sctrl_middle_pane

0x2047,	// (0x0001173c) cell_sctrl_middle_pane_g1_ParamLimits

0x2047,	// (0x0001173c) cell_sctrl_middle_pane_g1

0xc184,	// (0x0001b879) cell_sctrl_middle_pane_g2_ParamLimits

0xc184,	// (0x0001b879) cell_sctrl_middle_pane_g2

0x0001,

0xfcff,	// (0x0001f3f4) cell_sctrl_middle_pane_g_ParamLimits

0xfcff,	// (0x0001f3f4) cell_sctrl_middle_pane_g

0x4b0c,	// (0x00014201) bg_sctrl_middle_pane_g1

0x4b14,	// (0x00014209) bg_sctrl_middle_pane_g2

0x4b1c,	// (0x00014211) bg_sctrl_middle_pane_g3

0x4b24,	// (0x00014219) bg_sctrl_middle_pane_g4

0x4b2c,	// (0x00014221) bg_sctrl_middle_pane_g5

0x4b34,	// (0x00014229) bg_sctrl_middle_pane_g6

0x4b3c,	// (0x00014231) bg_sctrl_middle_pane_g7

0x4b44,	// (0x00014239) bg_sctrl_middle_pane_g8

0x0007,

0xfd04,	// (0x0001f3f9) bg_sctrl_middle_pane_g

0x4b4c,	// (0x00014241) bg_sctrl_middle_pane_g8_copy1

0x4b0c,	// (0x00014201) bg_sctrl_sk_pane_g1

0x4b1c,	// (0x00014211) bg_sctrl_sk_pane_g2

0x4b14,	// (0x00014209) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001ef51) bg_sctrl_sk_pane_g

0x2d9b,	// (0x00012490) aid_size_touch_scroll_bar

0x4b2c,	// (0x00014221) bg_sctrl_sk_pane_g4

0x4b24,	// (0x00014219) bg_sctrl_sk_pane_g5

0x4b34,	// (0x00014229) bg_sctrl_sk_pane_g6

0x4b3c,	// (0x00014231) bg_sctrl_sk_pane_g7

0x4b4c,	// (0x00014241) bg_sctrl_sk_pane_g8

0x4b44,	// (0x00014239) bg_sctrl_sk_pane_g9

0x0b09,	// (0x000101fe) popup_fep_china_hwr2_fs_candidate_window

0xba33,	// (0x0001b128) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xba33,	// (0x0001b128) popup_fep_china_hwr2_fs_control_window

0x1777,	// (0x00010e6c) sctrl_sk_top_pane_g2

0x0001,

0xfcfa,	// (0x0001f3ef) sctrl_sk_top_pane_g

0xe7ee,	// (0x0001dee3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7ee,	// (0x0001dee3) aid_fep_china_hwr2_fs_cell

0xe802,	// (0x0001def7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe802,	// (0x0001def7) bg_popup_fep_shadow_pane_cp4

0xe819,	// (0x0001df0e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe819,	// (0x0001df0e) bg_popup_fep_shadow_pane_cp5

0xe82b,	// (0x0001df20) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe82b,	// (0x0001df20) popup_fep_china_hwr2_fs_control_bar_grid

0xe83f,	// (0x0001df34) popup_fep_china_hwr2_fs_control_funtion_grid

0x911c,	// (0x00018811) aid_fep_china_hwr2_fs_candi_cell

0x24ef,	// (0x00011be4) bg_popup_fep_shadow_pane_cp6

0x9126,	// (0x0001881b) popup_fep_china_hwr2_fs_candidate_grid

0xe847,	// (0x0001df3c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe847,	// (0x0001df3c) cell_fep_china_hwr2_fs_funtion_grid

0x7675,	// (0x00016d6a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9148,	// (0x0001883d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9148,	// (0x0001883d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9156,	// (0x0001884b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9156,	// (0x0001884b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd15,	// (0x0001f40a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd15,	// (0x0001f40a) cell_fep_china_hwr2_fs_funtion_grid_g

0xe85f,	// (0x0001df54) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe85f,	// (0x0001df54) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe874,	// (0x0001df69) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe874,	// (0x0001df69) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1a,	// (0x0001f40f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1a,	// (0x0001f40f) cell_fep_china_hwr2_fs_funtion_grid_t

0x919d,	// (0x00018892) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x91a5,	// (0x0001889a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x91ad,	// (0x000188a2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1f,	// (0x0001f414) popup_fep_china_hwr2_fs_control_bar_grid_g

0x91b5,	// (0x000188aa) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x91b5,	// (0x000188aa) cell_fep_china_hwr2_fs_candidate_grid

0x91ce,	// (0x000188c3) popup_fep_china_hwr2_fs_candidate_grid_g20

0x91d6,	// (0x000188cb) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7675,	// (0x00016d6a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7675,	// (0x00016d6a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb33,	// (0x0001f228) cell_fep_china_hwr2_fs_candidate_grid_g

0x91de,	// (0x000188d3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x46d4,	// (0x00013dc9) clock_nsta_pane_cp_24_ParamLimits

0x46d4,	// (0x00013dc9) clock_nsta_pane_cp_24

0x4752,	// (0x00013e47) indicator_nsta_pane_cp_24_ParamLimits

0x4752,	// (0x00013e47) indicator_nsta_pane_cp_24

0x5909,	// (0x00014ffe) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001efb6) heading_pane_g

0x643e,	// (0x00015b33) grid_sct_catagory_button_pane

0x646e,	// (0x00015b63) scroll_pane_cp5_ParamLimits

0x7218,	// (0x0001690d) button_value_adjust_pane_cp5_ParamLimits

0x7218,	// (0x0001690d) button_value_adjust_pane_cp5

0x7314,	// (0x00016a09) form2_midp_time_pane_ParamLimits

0x91ec,	// (0x000188e1) cell_sct_catagory_button_pane_ParamLimits

0x91ec,	// (0x000188e1) cell_sct_catagory_button_pane

0x763a,	// (0x00016d2f) bg_button_pane_cp01_ParamLimits

0x763a,	// (0x00016d2f) bg_button_pane_cp01

0x7675,	// (0x00016d6a) cell_sct_catagory_button_pane_g1

0xbf92,	// (0x0001b687) popup_tb_extension_window

0xe890,	// (0x0001df85) aid_size_cell_ext_ParamLimits

0xe890,	// (0x0001df85) aid_size_cell_ext

0x2bdd,	// (0x000122d2) bg_tb_trans_pane_cp1_ParamLimits

0x2bdd,	// (0x000122d2) bg_tb_trans_pane_cp1

0xe8b6,	// (0x0001dfab) grid_tb_ext_pane_ParamLimits

0xe8b6,	// (0x0001dfab) grid_tb_ext_pane

0xe8f1,	// (0x0001dfe6) cell_tb_ext_pane_ParamLimits

0xe8f1,	// (0x0001dfe6) cell_tb_ext_pane

0xe919,	// (0x0001e00e) cell_tb_ext_pane_g1_ParamLimits

0xe919,	// (0x0001e00e) cell_tb_ext_pane_g1

0x9280,	// (0x00018975) cell_tb_ext_pane_t1

0x2886,	// (0x00011f7b) list_highlight_pane_cp11_ParamLimits

0x2886,	// (0x00011f7b) list_highlight_pane_cp11

0xb765,	// (0x0001ae5a) popup_uni_indicator_window_ParamLimits

0xb765,	// (0x0001ae5a) popup_uni_indicator_window

0x33e7,	// (0x00012adc) bg_popup_sub_pane_cp14

0x929b,	// (0x00018990) list_uniindi_pane

0x92a7,	// (0x0001899c) uniindi_top_pane

0x2886,	// (0x00011f7b) bg_uniindi_top_pane

0x92c6,	// (0x000189bb) uniindi_top_pane_g1

0x92dc,	// (0x000189d1) uniindi_top_pane_g2

0x0003,

0xfd26,	// (0x0001f41b) uniindi_top_pane_g

0x9306,	// (0x000189fb) uniindi_top_pane_t1

0x9330,	// (0x00018a25) list_single_uniindi_pane_ParamLimits

0x9330,	// (0x00018a25) list_single_uniindi_pane

0x7675,	// (0x00016d6a) bg_uniindi_top_pane_g1

0x9343,	// (0x00018a38) list_single_uniindi_pane_g1

0x9356,	// (0x00018a4b) list_single_uniindi_pane_t1

0x0178,	// (0x0000f86d) control_bg_pane

0x937b,	// (0x00018a70) bg_sctrl_sk_pane_cp1

0x9384,	// (0x00018a79) bg_sctrl_sk_pane_cp2

0x938d,	// (0x00018a82) control_bg_pane_g1

0x9396,	// (0x00018a8b) control_bg_pane_g2

0x0001,

0xfd2f,	// (0x0001f424) control_bg_pane_g

0x7062,	// (0x00016757) cell_indicator_nsta_pane_g1_ParamLimits

0xddb4,	// (0x0001d4a9) cell_indicator_nsta_pane_g2_ParamLimits

0xfa97,	// (0x0001f18c) cell_indicator_nsta_pane_g_ParamLimits

0x739c,	// (0x00016a91) form2_midp_time_pane_t1_ParamLimits

0x1512,	// (0x00010c07) main_idle_act4_pane_ParamLimits

0x1512,	// (0x00010c07) main_idle_act4_pane

0xbf92,	// (0x0001b687) popup_tb_extension_window_ParamLimits

0xe8d8,	// (0x0001dfcd) tb_ext_find_pane_ParamLimits

0xe8d8,	// (0x0001dfcd) tb_ext_find_pane

0x939f,	// (0x00018a94) ai_gene_pane_1_cp1

0x43c1,	// (0x00013ab6) ai_gene_pane_2_cp1

0x93a7,	// (0x00018a9c) list_single_idle_plugin_calendar_pane

0x93b0,	// (0x00018aa5) list_single_idle_plugin_notification_pane

0x93b9,	// (0x00018aae) list_single_idle_plugin_player_pane

0xe936,	// (0x0001e02b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe936,	// (0x0001e02b) list_single_idle_plugin_shortcut_pane

0xe95e,	// (0x0001e053) main_idle_act4_pane_t1

0xe974,	// (0x0001e069) main_idle_act4_pane_t2

0x0001,

0xfd34,	// (0x0001f429) main_idle_act4_pane_t

0xe98a,	// (0x0001e07f) middle_sk_idle_act4_pane_ParamLimits

0xe98a,	// (0x0001e07f) middle_sk_idle_act4_pane

0xe9a6,	// (0x0001e09b) popup_clock_digital_analogue_window_cp2

0xe9ce,	// (0x0001e0c3) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9ce,	// (0x0001e0c3) shortcut_wheel_idle_act4_pane

0x7675,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g1

0x7675,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g2

0x7675,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g3

0x7675,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g4

0x7675,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g5

0x944c,	// (0x00018b41) shortcut_wheel_idle_act4_pane_g6

0x9454,	// (0x00018b49) shortcut_wheel_idle_act4_pane_g7

0x945c,	// (0x00018b51) shortcut_wheel_idle_act4_pane_g8

0x9464,	// (0x00018b59) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd39,	// (0x0001f42e) shortcut_wheel_idle_act4_pane_g

0xd3b5,	// (0x0001caaa) middle_sk_idle_act4_pane_g1_ParamLimits

0xd3b5,	// (0x0001caaa) middle_sk_idle_act4_pane_g1

0xea4b,	// (0x0001e140) middle_sk_idle_act4_pane_g2_ParamLimits

0xea4b,	// (0x0001e140) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x0001f451) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x0001f451) middle_sk_idle_act4_pane_g

0xea63,	// (0x0001e158) middle_sk_idle_act4_pane_t1_ParamLimits

0xea63,	// (0x0001e158) middle_sk_idle_act4_pane_t1

0xea92,	// (0x0001e187) grid_ai_shortcut_pane_ParamLimits

0xea92,	// (0x0001e187) grid_ai_shortcut_pane

0xeaaf,	// (0x0001e1a4) list_highlight_pane_cp16_ParamLimits

0xeaaf,	// (0x0001e1a4) list_highlight_pane_cp16

0xeabc,	// (0x0001e1b1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeabc,	// (0x0001e1b1) list_single_idle_plugin_shortcut_pane_g1

0xeac8,	// (0x0001e1bd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeac8,	// (0x0001e1bd) list_single_idle_plugin_shortcut_pane_g2

0xeae4,	// (0x0001e1d9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeae4,	// (0x0001e1d9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd61,	// (0x0001f456) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd61,	// (0x0001f456) list_single_idle_plugin_shortcut_pane_g

0xeaf9,	// (0x0001e1ee) cell_ai_shortcut_pane_ParamLimits

0xeaf9,	// (0x0001e1ee) cell_ai_shortcut_pane

0xeb0f,	// (0x0001e204) cell_ai_shortcut_pane_g1_ParamLimits

0xeb0f,	// (0x0001e204) cell_ai_shortcut_pane_g1

0x939f,	// (0x00018a94) ai_gene_pane_1_cp2

0x9594,	// (0x00018c89) ai_gene_pane_2_cp2

0x959c,	// (0x00018c91) list_highlight_pane_cp15

0x95a5,	// (0x00018c9a) list_single_idle_plugin_calendar_pane_g1

0x959c,	// (0x00018c91) list_highlight_pane_cp17

0x95ad,	// (0x00018ca2) list_single_idle_plugin_calendar_pane_g1_copy1

0x95b5,	// (0x00018caa) list_single_idle_plugin_player_pane_g1

0x6697,	// (0x00015d8c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd68,	// (0x0001f45d) list_single_idle_plugin_player_pane_g

0x95bd,	// (0x00018cb2) list_single_idle_plugin_player_pane_t1

0x95cb,	// (0x00018cc0) list_single_idle_plugin_player_pane_t2

0x95d9,	// (0x00018cce) list_single_idle_plugin_player_pane_t3

0x95e7,	// (0x00018cdc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6d,	// (0x0001f462) list_single_idle_plugin_player_pane_t

0x95f5,	// (0x00018cea) wait_bar_pane_cp15

0x95fd,	// (0x00018cf2) grid_ai_notification_pane

0x6697,	// (0x00015d8c) list_single_idle_plugin_notification_pane_g1

0xeb31,	// (0x0001e226) cell_ai_notification_pane_ParamLimits

0xeb31,	// (0x0001e226) cell_ai_notification_pane

0x9613,	// (0x00018d08) cell_ai_notification_pane_g1

0x961b,	// (0x00018d10) cell_ai_notification_pane_t1

0xeb3e,	// (0x0001e233) tb_ext_find_button_pane

0xeb46,	// (0x0001e23b) tb_ext_find_pane_g1

0xeb4e,	// (0x0001e243) tb_ext_find_pane_t1

0x3be4,	// (0x000132d9) tb_ext_find_button_pane_g1

0x9647,	// (0x00018d3c) tb_ext_find_button_pane_g2

0x0001,

0xfd76,	// (0x0001f46b) tb_ext_find_button_pane_g

0xe95e,	// (0x0001e053) main_idle_act4_pane_t1_ParamLimits

0xe974,	// (0x0001e069) main_idle_act4_pane_t2_ParamLimits

0xfd34,	// (0x0001f429) main_idle_act4_pane_t_ParamLimits

0xe9a6,	// (0x0001e09b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9be,	// (0x0001e0b3) sat_plugin_idle_act4_pane_ParamLimits

0xe9be,	// (0x0001e0b3) sat_plugin_idle_act4_pane

0xeb5c,	// (0x0001e251) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb5c,	// (0x0001e251) sat_plugin_idle_act4_pane_t1

0xeb74,	// (0x0001e269) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb74,	// (0x0001e269) sat_plugin_idle_act4_pane_t2

0xeb8c,	// (0x0001e281) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb8c,	// (0x0001e281) sat_plugin_idle_act4_pane_t3

0xeba4,	// (0x0001e299) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeba4,	// (0x0001e299) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x0001f470) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x0001f470) sat_plugin_idle_act4_pane_t

0x023d,	// (0x0000f932) popup_battery_window_ParamLimits

0x023d,	// (0x0000f932) popup_battery_window

0x2886,	// (0x00011f7b) bg_popup_sub_pane_cp25_ParamLimits

0x2886,	// (0x00011f7b) bg_popup_sub_pane_cp25

0x969c,	// (0x00018d91) popup_battery_window_g1_ParamLimits

0x969c,	// (0x00018d91) popup_battery_window_g1

0x96a8,	// (0x00018d9d) popup_battery_window_t1_ParamLimits

0x96a8,	// (0x00018d9d) popup_battery_window_t1

0x96ba,	// (0x00018daf) popup_battery_window_t2_ParamLimits

0x96ba,	// (0x00018daf) popup_battery_window_t2

0x0001,

0xfd84,	// (0x0001f479) popup_battery_window_t_ParamLimits

0xfd84,	// (0x0001f479) popup_battery_window_t

0xd23c,	// (0x0001c931) midp_canvas_pane_ParamLimits

0xd299,	// (0x0001c98e) midp_keypad_pane_ParamLimits

0xd299,	// (0x0001c98e) midp_keypad_pane

0x45cc,	// (0x00013cc1) main_midp_pane_ParamLimits

0x70dc,	// (0x000167d1) signal_pane_g2_cp_ParamLimits

0xebbc,	// (0x0001e2b1) aid_size_cell_midp_keypad_ParamLimits

0xebbc,	// (0x0001e2b1) aid_size_cell_midp_keypad

0xebda,	// (0x0001e2cf) midp_keyp_game_grid_pane_ParamLimits

0xebda,	// (0x0001e2cf) midp_keyp_game_grid_pane

0xec01,	// (0x0001e2f6) midp_keyp_rocker_pane_ParamLimits

0xec01,	// (0x0001e2f6) midp_keyp_rocker_pane

0xec52,	// (0x0001e347) midp_keyp_sk_left_pane_ParamLimits

0xec52,	// (0x0001e347) midp_keyp_sk_left_pane

0xeca6,	// (0x0001e39b) midp_keyp_sk_right_pane_ParamLimits

0xeca6,	// (0x0001e39b) midp_keyp_sk_right_pane

0x24ef,	// (0x00011be4) bg_button_pane_cp03

0xecfa,	// (0x0001e3ef) midp_keyp_sk_left_pane_g1

0x24ef,	// (0x00011be4) bg_button_pane_cp04

0xecfa,	// (0x0001e3ef) midp_keyp_sk_right_pane_g1

0x7675,	// (0x00016d6a) midp_keyp_rocker_pane_g1

0xed03,	// (0x0001e3f8) keyp_game_cell_pane_ParamLimits

0xed03,	// (0x0001e3f8) keyp_game_cell_pane

0x24ef,	// (0x00011be4) bg_button_pane_cp02

0xed27,	// (0x0001e41c) keyp_game_cell_pane_g1

0xb700,	// (0x0001adf5) popup_fep_vkb2_window_ParamLimits

0xb700,	// (0x0001adf5) popup_fep_vkb2_window

0xc190,	// (0x0001b885) aid_size_cell_vkb2_ParamLimits

0xc190,	// (0x0001b885) aid_size_cell_vkb2

0xc1c6,	// (0x0001b8bb) popup_fep_vkb2_window_g1_ParamLimits

0xc1c6,	// (0x0001b8bb) popup_fep_vkb2_window_g1

0xc216,	// (0x0001b90b) vkb2_area_bottom_pane_ParamLimits

0xc216,	// (0x0001b90b) vkb2_area_bottom_pane

0xc26a,	// (0x0001b95f) vkb2_area_keypad_pane_ParamLimits

0xc26a,	// (0x0001b95f) vkb2_area_keypad_pane

0xc2b2,	// (0x0001b9a7) vkb2_area_top_pane_ParamLimits

0xc2b2,	// (0x0001b9a7) vkb2_area_top_pane

0xc338,	// (0x0001ba2d) vkb2_top_entry_pane_ParamLimits

0xc338,	// (0x0001ba2d) vkb2_top_entry_pane

0xc365,	// (0x0001ba5a) vkb2_top_grid_left_pane_ParamLimits

0xc365,	// (0x0001ba5a) vkb2_top_grid_left_pane

0xc385,	// (0x0001ba7a) vkb2_top_grid_right_pane_ParamLimits

0xc385,	// (0x0001ba7a) vkb2_top_grid_right_pane

0x1c46,	// (0x0001133b) vkb2_cell_keypad_pane_ParamLimits

0x1c46,	// (0x0001133b) vkb2_cell_keypad_pane

0xc3cb,	// (0x0001bac0) vkb2_area_bottom_grid_pane_ParamLimits

0xc3cb,	// (0x0001bac0) vkb2_area_bottom_grid_pane

0xc3f5,	// (0x0001baea) vkb2_area_bottom_pane_g1_ParamLimits

0xc3f5,	// (0x0001baea) vkb2_area_bottom_pane_g1

0xc41b,	// (0x0001bb10) vkb2_area_bottom_pane_g2_ParamLimits

0xc41b,	// (0x0001bb10) vkb2_area_bottom_pane_g2

0xc44c,	// (0x0001bb41) vkb2_area_bottom_pane_g3_ParamLimits

0xc44c,	// (0x0001bb41) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x0001f47e) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x0001f47e) vkb2_area_bottom_pane_g

0x1df0,	// (0x000114e5) vkb2_top_cell_left_pane_ParamLimits

0x1df0,	// (0x000114e5) vkb2_top_cell_left_pane

0xed3d,	// (0x0001e432) vkb2_top_entry_pane_g1_ParamLimits

0xed3d,	// (0x0001e432) vkb2_top_entry_pane_g1

0xed4b,	// (0x0001e440) vkb2_top_entry_pane_t1_ParamLimits

0xed4b,	// (0x0001e440) vkb2_top_entry_pane_t1

0x986b,	// (0x00018f60) vkb2_top_entry_pane_t2_ParamLimits

0x986b,	// (0x00018f60) vkb2_top_entry_pane_t2

0x989d,	// (0x00018f92) vkb2_top_entry_pane_t3_ParamLimits

0x989d,	// (0x00018f92) vkb2_top_entry_pane_t3

0x0002,

0xfd90,	// (0x0001f485) vkb2_top_entry_pane_t_ParamLimits

0xfd90,	// (0x0001f485) vkb2_top_entry_pane_t

0xc4b6,	// (0x0001bbab) vkb2_top_grid_right_pane_g1_ParamLimits

0xc4b6,	// (0x0001bbab) vkb2_top_grid_right_pane_g1

0x1e53,	// (0x00011548) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e53,	// (0x00011548) vkb2_top_grid_right_pane_g2

0x1e6b,	// (0x00011560) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e6b,	// (0x00011560) vkb2_top_grid_right_pane_g3

0xc4cc,	// (0x0001bbc1) vkb2_top_grid_right_pane_g4_ParamLimits

0xc4cc,	// (0x0001bbc1) vkb2_top_grid_right_pane_g4

0x0003,

0xfd97,	// (0x0001f48c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd97,	// (0x0001f48c) vkb2_top_grid_right_pane_g

0x1e99,	// (0x0001158e) vkb2_top_cell_left_pane_g1

0x1eb0,	// (0x000115a5) vkb2_cell_keypad_pane_g1_ParamLimits

0x1eb0,	// (0x000115a5) vkb2_cell_keypad_pane_g1

0x98c1,	// (0x00018fb6) vkb2_cell_keypad_pane_t1_ParamLimits

0x98c1,	// (0x00018fb6) vkb2_cell_keypad_pane_t1

0x1ebe,	// (0x000115b3) vkb2_cell_bottom_grid_pane_ParamLimits

0x1ebe,	// (0x000115b3) vkb2_cell_bottom_grid_pane

0x1ef7,	// (0x000115ec) vkb2_cell_bottom_grid_pane_g1

0xe9ef,	// (0x0001e0e4) aid_call2_pane_cp02

0xe9f7,	// (0x0001e0ec) aid_call_pane_cp02

0xe9ff,	// (0x0001e0f4) clock_digital_number_pane_cp10

0xea07,	// (0x0001e0fc) clock_digital_number_pane_cp11

0xea0f,	// (0x0001e104) clock_digital_number_pane_cp12

0xea17,	// (0x0001e10c) clock_digital_number_pane_cp13

0xea1f,	// (0x0001e114) clock_digital_separator_pane_cp10

0x3be4,	// (0x000132d9) popup_clock_digital_analogue_window_cp2_g1

0x3be4,	// (0x000132d9) popup_clock_digital_analogue_window_cp2_g2

0xea27,	// (0x0001e11c) popup_clock_digital_analogue_window_cp2_g3

0x3be4,	// (0x000132d9) popup_clock_digital_analogue_window_cp2_g4

0xea27,	// (0x0001e11c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4c,	// (0x0001f441) popup_clock_digital_analogue_window_cp2_g

0xea2f,	// (0x0001e124) popup_clock_digital_analogue_window_cp2_t1

0xea3d,	// (0x0001e132) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd57,	// (0x0001f44c) popup_clock_digital_analogue_window_cp2_t

0x7675,	// (0x00016d6a) clock_digital_number_pane_cp10_g1

0x7675,	// (0x00016d6a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001f228) clock_digital_number_pane_cp10_g

0x7675,	// (0x00016d6a) clock_digital_separator_pane_cp10_g1

0x7675,	// (0x00016d6a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001f228) clock_digital_separator_pane_cp10_g

0x92e8,	// (0x000189dd) uniindi_top_pane_g3

0x92f9,	// (0x000189ee) uniindi_top_pane_g4

0x1cd1,	// (0x000113c6) vkb2_row_keypad_pane_ParamLimits

0x1cd1,	// (0x000113c6) vkb2_row_keypad_pane

0x1f13,	// (0x00011608) vkb2_cell_t_keypad_pane_ParamLimits

0x1f13,	// (0x00011608) vkb2_cell_t_keypad_pane

0x1f23,	// (0x00011618) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f23,	// (0x00011618) vkb2_cell_t_keypad_pane_cp08

0x1f36,	// (0x0001162b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f36,	// (0x0001162b) vkb2_cell_t_keypad_pane_cp09

0x1f4a,	// (0x0001163f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f4a,	// (0x0001163f) vkb2_cell_t_keypad_pane_cp01

0x1f5b,	// (0x00011650) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f5b,	// (0x00011650) vkb2_cell_t_keypad_pane_cp02

0x1f6c,	// (0x00011661) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f6c,	// (0x00011661) vkb2_cell_t_keypad_pane_cp03

0x1f7d,	// (0x00011672) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f7d,	// (0x00011672) vkb2_cell_t_keypad_pane_cp04

0x1f8e,	// (0x00011683) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f8e,	// (0x00011683) vkb2_cell_t_keypad_pane_cp05

0x1f9f,	// (0x00011694) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f9f,	// (0x00011694) vkb2_cell_t_keypad_pane_cp06

0x1fb0,	// (0x000116a5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1fb0,	// (0x000116a5) vkb2_cell_t_keypad_pane_cp07

0x1fc1,	// (0x000116b6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1fc1,	// (0x000116b6) vkb2_cell_t_keypad_pane_cp10

0x1777,	// (0x00010e6c) vkb2_cell_t_keypad_pane_g1

0x98d8,	// (0x00018fcd) vkb2_cell_t_keypad_pane_t1

0x0178,	// (0x0000f86d) popup_grid_graphic2_window

0xed84,	// (0x0001e479) aid_size_cell_graphic2_ParamLimits

0xed84,	// (0x0001e479) aid_size_cell_graphic2

0xedc2,	// (0x0001e4b7) bg_popup_window_pane_cp21_ParamLimits

0xedc2,	// (0x0001e4b7) bg_popup_window_pane_cp21

0xedd0,	// (0x0001e4c5) graphic2_pages_pane_ParamLimits

0xedd0,	// (0x0001e4c5) graphic2_pages_pane

0xee26,	// (0x0001e51b) grid_graphic2_control_pane_ParamLimits

0xee26,	// (0x0001e51b) grid_graphic2_control_pane

0xee6e,	// (0x0001e563) grid_graphic2_pane_ParamLimits

0xee6e,	// (0x0001e563) grid_graphic2_pane

0xeef5,	// (0x0001e5ea) cell_graphic2_pane

0x0178,	// (0x0000f86d) main_comp_mode_pane

0x8b05,	// (0x000181fa) list_ai3_gene_pane_ParamLimits

0xe736,	// (0x0001de2b) bg_popup_window_pane_cp19_ParamLimits

0x8f3e,	// (0x00018633) bg_touch_area_indi_pane_ParamLimits

0x8f3e,	// (0x00018633) bg_touch_area_indi_pane

0x8f54,	// (0x00018649) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f54,	// (0x00018649) bg_touch_area_indi_pane_cp01

0x8f6a,	// (0x0001865f) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f6a,	// (0x0001865f) bg_touch_area_indi_pane_cp02

0x8f82,	// (0x00018677) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f82,	// (0x00018677) bg_touch_area_indi_pane_cp03

0x8f9c,	// (0x00018691) popup_slider_window_g1_ParamLimits

0x8fb8,	// (0x000186ad) popup_slider_window_g2_ParamLimits

0x8fd4,	// (0x000186c9) popup_slider_window_g3_ParamLimits

0xfce1,	// (0x0001f3d6) popup_slider_window_g_ParamLimits

0x9030,	// (0x00018725) popup_slider_window_t1_ParamLimits

0x90a4,	// (0x00018799) small_volume_slider_vertical_pane_ParamLimits

0xeef5,	// (0x0001e5ea) cell_graphic2_pane_ParamLimits

0xef52,	// (0x0001e647) bg_button_pane_cp10_ParamLimits

0xef52,	// (0x0001e647) bg_button_pane_cp10

0xef65,	// (0x0001e65a) bg_button_pane_cp11_ParamLimits

0xef65,	// (0x0001e65a) bg_button_pane_cp11

0xef78,	// (0x0001e66d) graphic2_pages_pane_g1_ParamLimits

0xef78,	// (0x0001e66d) graphic2_pages_pane_g1

0xef93,	// (0x0001e688) graphic2_pages_pane_g2_ParamLimits

0xef93,	// (0x0001e688) graphic2_pages_pane_g2

0x0001,

0xfda5,	// (0x0001f49a) graphic2_pages_pane_g_ParamLimits

0xfda5,	// (0x0001f49a) graphic2_pages_pane_g

0xefab,	// (0x0001e6a0) graphic2_pages_pane_t1_ParamLimits

0xefab,	// (0x0001e6a0) graphic2_pages_pane_t1

0xefc3,	// (0x0001e6b8) cell_graphic2_control_pane_ParamLimits

0xefc3,	// (0x0001e6b8) cell_graphic2_control_pane

0xeff5,	// (0x0001e6ea) cell_graphic2_pane_g1_ParamLimits

0xeff5,	// (0x0001e6ea) cell_graphic2_pane_g1

0xd3c3,	// (0x0001cab8) cell_graphic2_pane_g2_ParamLimits

0xd3c3,	// (0x0001cab8) cell_graphic2_pane_g2

0xed30,	// (0x0001e425) cell_graphic2_pane_g3_ParamLimits

0xed30,	// (0x0001e425) cell_graphic2_pane_g3

0xd3d0,	// (0x0001cac5) cell_graphic2_pane_g4_ParamLimits

0xd3d0,	// (0x0001cac5) cell_graphic2_pane_g4

0xf002,	// (0x0001e6f7) cell_graphic2_pane_g5_ParamLimits

0xf002,	// (0x0001e6f7) cell_graphic2_pane_g5

0x0004,

0xfdaa,	// (0x0001f49f) cell_graphic2_pane_g_ParamLimits

0xfdaa,	// (0x0001f49f) cell_graphic2_pane_g

0xf022,	// (0x0001e717) cell_graphic2_pane_t1_ParamLimits

0xf022,	// (0x0001e717) cell_graphic2_pane_t1

0x58fd,	// (0x00014ff2) grid_highlight_pane_cp11_ParamLimits

0x58fd,	// (0x00014ff2) grid_highlight_pane_cp11

0x2886,	// (0x00011f7b) bg_button_pane_cp05

0xf057,	// (0x0001e74c) cell_graphic2_control_pane_g1

0x7675,	// (0x00016d6a) bg_touch_area_indi_pane_g1

0x9ba8,	// (0x0001929d) aid_cmod_rocker_key_size

0x9bb2,	// (0x000192a7) aid_cmode_itu_key_size

0x9bbc,	// (0x000192b1) main_cmode_video_pane

0x9be7,	// (0x000192dc) main_comp_mode_itu_pane

0x9bf3,	// (0x000192e8) main_comp_mode_rocker_pane

0x9bff,	// (0x000192f4) cell_cmode_rocker_pane_ParamLimits

0x9bff,	// (0x000192f4) cell_cmode_rocker_pane

0x9c11,	// (0x00019306) cell_cmode_itu_pane_ParamLimits

0x9c11,	// (0x00019306) cell_cmode_itu_pane

0x33e7,	// (0x00012adc) bg_button_pane_cp06_ParamLimits

0x33e7,	// (0x00012adc) bg_button_pane_cp06

0x78f3,	// (0x00016fe8) cell_cmode_rocker_pane_g1_ParamLimits

0x78f3,	// (0x00016fe8) cell_cmode_rocker_pane_g1

0x9148,	// (0x0001883d) cell_cmode_rocker_pane_g2_ParamLimits

0x9148,	// (0x0001883d) cell_cmode_rocker_pane_g2

0x0001,

0xfdba,	// (0x0001f4af) cell_cmode_rocker_pane_g_ParamLimits

0xfdba,	// (0x0001f4af) cell_cmode_rocker_pane_g

0x24ef,	// (0x00011be4) bg_button_pane_cp07

0x9c26,	// (0x0001931b) cell_cmode_itu_pane_g1

0x9c2f,	// (0x00019324) cell_cmode_itu_pane_t1

0x9c3d,	// (0x00019332) cell_cmode_itu_pane_t2

0x0001,

0xfdbf,	// (0x0001f4b4) cell_cmode_itu_pane_t

0x936b,	// (0x00018a60) aid_touch_ctrl_left

0x9373,	// (0x00018a68) aid_touch_ctrl_right

0x24ef,	// (0x00011be4) compa_mode_pane

0xf07d,	// (0x0001e772) aid_cmod_rocker_key_size_cp

0xf087,	// (0x0001e77c) aid_cmode_itu_key_size_cp

0x9c5f,	// (0x00019354) compa_mode_pane_g1

0x9c67,	// (0x0001935c) compa_mode_pane_g2

0x9c6f,	// (0x00019364) compa_mode_pane_g3

0x0002,

0xfdc4,	// (0x0001f4b9) compa_mode_pane_g

0xf091,	// (0x0001e786) main_comp_mode_itu_pane_cp

0xf099,	// (0x0001e78e) main_comp_mode_rocker_pane_cp

0xf0a1,	// (0x0001e796) cell_cmode_itu_pane_cp_ParamLimits

0xf0a1,	// (0x0001e796) cell_cmode_itu_pane_cp

0xf0b6,	// (0x0001e7ab) cell_cmode_rocker_pane_cp_ParamLimits

0xf0b6,	// (0x0001e7ab) cell_cmode_rocker_pane_cp

0x33e7,	// (0x00012adc) bg_button_pane_cp06_cp_ParamLimits

0x33e7,	// (0x00012adc) bg_button_pane_cp06_cp

0x78f3,	// (0x00016fe8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78f3,	// (0x00016fe8) cell_cmode_rocker_pane_g1_cp

0x7675,	// (0x00016d6a) cell_cmode_rocker_pane_g2_cp

0x24ef,	// (0x00011be4) bg_button_pane_cp07_cp

0xf0c8,	// (0x0001e7bd) cell_cmode_itu_pane_g1_cp

0xf0d1,	// (0x0001e7c6) cell_cmode_itu_pane_t1_cp

0xf0d1,	// (0x0001e7c6) cell_cmode_itu_pane_t2_cp

0xdb89,	// (0x0001d27e) settings_code_pane_cp2

0x25e3,	// (0x00011cd8) bg_popup_window_pane_cp3_ParamLimits

0x2a60,	// (0x00012155) heading_pane_cp3_ParamLimits

0x2a6c,	// (0x00012161) listscroll_popup_graphic_pane_ParamLimits

0x1520,	// (0x00010c15) fep_hwr_aid_pane_ParamLimits

0x1997,	// (0x0001108c) aid_touch_sctrl_top_ParamLimits

0x19b2,	// (0x000110a7) sctrl_sk_top_pane_g1_ParamLimits

0x1777,	// (0x00010e6c) sctrl_sk_top_pane_g2_ParamLimits

0xfcfa,	// (0x0001f3ef) sctrl_sk_top_pane_g_ParamLimits

0x19bf,	// (0x000110b4) sctrl_sk_top_pane_t1_ParamLimits

0x1997,	// (0x0001108c) aid_touch_sctrl_bottom_ParamLimits

0x19bf,	// (0x000110b4) sctrl_sk_bottom_pane_t1_ParamLimits

0x92b4,	// (0x000189a9) aid_area_touch_clock

0xc2fa,	// (0x0001b9ef) aid_vkb2_area_top_pane_cell_ParamLimits

0xc2fa,	// (0x0001b9ef) aid_vkb2_area_top_pane_cell

0xc3a5,	// (0x0001ba9a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc3a5,	// (0x0001ba9a) aid_vkb2_area_bottom_pane_cell

0x9823,	// (0x00018f18) popup_char_count_window

0x9cbc,	// (0x000193b1) popup_char_count_window_g1

0x9cc5,	// (0x000193ba) popup_char_count_window_g2

0x9cce,	// (0x000193c3) popup_char_count_window_g3

0x0002,

0xfdcb,	// (0x0001f4c0) popup_char_count_window_g

0x9cd7,	// (0x000193cc) popup_char_count_window_t1

0x1a6e,	// (0x00011163) popup_fep_char_preview_window_ParamLimits

0x1a6e,	// (0x00011163) popup_fep_char_preview_window

0xc31a,	// (0x0001ba0f) vkb2_top_candi_pane_ParamLimits

0xc31a,	// (0x0001ba0f) vkb2_top_candi_pane

0xf0df,	// (0x0001e7d4) cell_vkb2_top_candi_pane_ParamLimits

0xf0df,	// (0x0001e7d4) cell_vkb2_top_candi_pane

0x1fd6,	// (0x000116cb) bg_popup_fep_char_preview_window_ParamLimits

0x1fd6,	// (0x000116cb) bg_popup_fep_char_preview_window

0x1fe4,	// (0x000116d9) popup_fep_char_preview_window_t1_ParamLimits

0x1fe4,	// (0x000116d9) popup_fep_char_preview_window_t1

0x9d32,	// (0x00019427) bg_popup_fep_char_preview_window_g1

0x9d3a,	// (0x0001942f) bg_popup_fep_char_preview_window_g2

0x9d42,	// (0x00019437) bg_popup_fep_char_preview_window_g3

0x9d4a,	// (0x0001943f) bg_popup_fep_char_preview_window_g4

0x9d52,	// (0x00019447) bg_popup_fep_char_preview_window_g5

0x201e,	// (0x00011713) bg_popup_fep_char_preview_window_g6

0x9d5a,	// (0x0001944f) bg_popup_fep_char_preview_window_g7

0x9d62,	// (0x00019457) bg_popup_fep_char_preview_window_g8

0x9d6a,	// (0x0001945f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd2,	// (0x0001f4c7) bg_popup_fep_char_preview_window_g

0x1777,	// (0x00010e6c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1777,	// (0x00010e6c) cell_vkb2_top_candi_pane_g1

0x1785,	// (0x00010e7a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1785,	// (0x00010e7a) cell_vkb2_top_candi_pane_g2

0x9bc6,	// (0x000192bb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9bc6,	// (0x000192bb) cell_vkb2_top_candi_pane_g3

0x2026,	// (0x0001171b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2026,	// (0x0001171b) cell_vkb2_top_candi_pane_g4

0x7f63,	// (0x00017658) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7f63,	// (0x00017658) cell_vkb2_top_candi_pane_g5

0x2047,	// (0x0001173c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2047,	// (0x0001173c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde5,	// (0x0001f4da) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde5,	// (0x0001f4da) cell_vkb2_top_candi_pane_g

0x2055,	// (0x0001174a) cell_vkb2_top_candi_pane_t1

0x1380,	// (0x00010a75) aid_size_touch_slider_mark_ParamLimits

0x1380,	// (0x00010a75) aid_size_touch_slider_mark

0xee0c,	// (0x0001e501) grid_graphic2_catg_pane_ParamLimits

0xee0c,	// (0x0001e501) grid_graphic2_catg_pane

0xeec8,	// (0x0001e5bd) popup_grid_graphic2_window_t1_ParamLimits

0xeec8,	// (0x0001e5bd) popup_grid_graphic2_window_t1

0xeede,	// (0x0001e5d3) popup_grid_graphic2_window_t2_ParamLimits

0xeede,	// (0x0001e5d3) popup_grid_graphic2_window_t2

0x0001,

0xfda0,	// (0x0001f495) popup_grid_graphic2_window_t_ParamLimits

0xfda0,	// (0x0001f495) popup_grid_graphic2_window_t

0x2886,	// (0x00011f7b) bg_button_pane_cp05_ParamLimits

0xf057,	// (0x0001e74c) cell_graphic2_control_pane_g1_ParamLimits

0xf145,	// (0x0001e83a) cell_graphic2_catg_pane_ParamLimits

0xf145,	// (0x0001e83a) cell_graphic2_catg_pane

0x24ef,	// (0x00011be4) bg_button_pane_cp12

0xf157,	// (0x0001e84c) cell_graphic2_catg_pane_g1

0x9280,	// (0x00018975) cell_tb_ext_pane_t1_ParamLimits

0x1e10,	// (0x00011505) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1e10,	// (0x00011505) vkb2_top_cell_right_narrow_pane

0x1e28,	// (0x0001151d) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e28,	// (0x0001151d) vkb2_top_cell_right_wide_pane

0x1512,	// (0x00010c07) bg_vkb2_func_pane_ParamLimits

0x1512,	// (0x00010c07) bg_vkb2_func_pane

0x1e99,	// (0x0001158e) vkb2_top_cell_left_pane_g1_ParamLimits

0x1512,	// (0x00010c07) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1512,	// (0x00010c07) bg_vkb2_fuc_pane_cp03

0x1ef7,	// (0x000115ec) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4b14,	// (0x00014209) bg_vkb2_func_pane_g1

0x4b1c,	// (0x00014211) bg_vkb2_func_pane_g2

0x4b2c,	// (0x00014221) bg_vkb2_func_pane_g3

0x4b24,	// (0x00014219) bg_vkb2_func_pane_g4

0x4b34,	// (0x00014229) bg_vkb2_func_pane_g5

0x4b3c,	// (0x00014231) bg_vkb2_func_pane_g6

0x4b44,	// (0x00014239) bg_vkb2_func_pane_g7

0x4b4c,	// (0x00014241) bg_vkb2_func_pane_g8

0x4b0c,	// (0x00014201) bg_vkb2_func_pane_g9

0x0008,

0xfdf2,	// (0x0001f4e7) bg_vkb2_func_pane_g

0x1512,	// (0x00010c07) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1512,	// (0x00010c07) bg_vkb2_fuc_pane_cp01

0x1e99,	// (0x0001158e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e99,	// (0x0001158e) vkb2_top_cell_right_wide_pane_g1

0x1512,	// (0x00010c07) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1512,	// (0x00010c07) bg_vkb2_fuc_pane_cp02

0x1ef7,	// (0x000115ec) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1ef7,	// (0x000115ec) vkb2_top_cell_right_narrow_pane_g1

0xe676,	// (0x0001dd6b) aid_touch_area_decrease_ParamLimits

0xe676,	// (0x0001dd6b) aid_touch_area_decrease

0xe6aa,	// (0x0001dd9f) aid_touch_area_increase_ParamLimits

0xe6aa,	// (0x0001dd9f) aid_touch_area_increase

0xe6d2,	// (0x0001ddc7) aid_touch_area_mute_ParamLimits

0xe6d2,	// (0x0001ddc7) aid_touch_area_mute

0xe702,	// (0x0001ddf7) aid_touch_area_slider_ParamLimits

0xe702,	// (0x0001ddf7) aid_touch_area_slider

0xe742,	// (0x0001de37) popup_slider_window_g4_ParamLimits

0xe742,	// (0x0001de37) popup_slider_window_g4

0xe76a,	// (0x0001de5f) popup_slider_window_g5_ParamLimits

0xe76a,	// (0x0001de5f) popup_slider_window_g5

0xe79e,	// (0x0001de93) popup_slider_window_g6_ParamLimits

0xe79e,	// (0x0001de93) popup_slider_window_g6

0x905e,	// (0x00018753) popup_slider_window_t2_ParamLimits

0x905e,	// (0x00018753) popup_slider_window_t2

0x0001,

0xfcee,	// (0x0001f3e3) popup_slider_window_t_ParamLimits

0xfcee,	// (0x0001f3e3) popup_slider_window_t

0xe7ba,	// (0x0001deaf) slider_pane_ParamLimits

0xe7ba,	// (0x0001deaf) slider_pane

0x9d8d,	// (0x00019482) slider_pane_g1_ParamLimits

0x9d8d,	// (0x00019482) slider_pane_g1

0x9da1,	// (0x00019496) slider_pane_g2_ParamLimits

0x9da1,	// (0x00019496) slider_pane_g2

0x9db7,	// (0x000194ac) slider_pane_g3_ParamLimits

0x9db7,	// (0x000194ac) slider_pane_g3

0x0003,

0xfe05,	// (0x0001f4fa) slider_pane_g_ParamLimits

0xfe05,	// (0x0001f4fa) slider_pane_g

0xbfda,	// (0x0001b6cf) popup_tb_float_extension_window_ParamLimits

0xbfda,	// (0x0001b6cf) popup_tb_float_extension_window

0x9de3,	// (0x000194d8) aid_size_cell_tb_float_ext

0x24ef,	// (0x00011be4) bg_popup_sub_window_cp28

0x9def,	// (0x000194e4) grid_tb_float_ext_pane

0x9df9,	// (0x000194ee) cell_tb_float_ext_pane_ParamLimits

0x9df9,	// (0x000194ee) cell_tb_float_ext_pane

0x9e13,	// (0x00019508) cell_tb_float_ext_pane_g1

0x9e1c,	// (0x00019511) grid_highlight_pane_cp12

0xc103,	// (0x0001b7f8) cell_last_hwr_side_pane_ParamLimits

0xc103,	// (0x0001b7f8) cell_last_hwr_side_pane

0x7675,	// (0x00016d6a) cell_last_hwr_side_pane_g1

0x9e25,	// (0x0001951a) cell_last_hwr_side_pane_g2

0x0001,

0xfe0e,	// (0x0001f503) cell_last_hwr_side_pane_g

0xc481,	// (0x0001bb76) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc481,	// (0x0001bb76) vkb2_area_bottom_space_btn_pane

0x1777,	// (0x00010e6c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x98d8,	// (0x00018fcd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2055,	// (0x0001174a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2074,	// (0x00011769) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2074,	// (0x00011769) vkb2_area_bottom_space_btn_pane_g1

0x20ae,	// (0x000117a3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x20ae,	// (0x000117a3) vkb2_area_bottom_space_btn_pane_g2

0x20e4,	// (0x000117d9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x20e4,	// (0x000117d9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe13,	// (0x0001f508) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe13,	// (0x0001f508) vkb2_area_bottom_space_btn_pane_g

0x15d5,	// (0x00010cca) cel_fep_hwr_func_pane_ParamLimits

0x15d5,	// (0x00010cca) cel_fep_hwr_func_pane

0xc0d8,	// (0x0001b7cd) cell_hwr_side_button_pane_ParamLimits

0xc0d8,	// (0x0001b7cd) cell_hwr_side_button_pane

0x92b4,	// (0x000189a9) aid_area_touch_clock_ParamLimits

0x2886,	// (0x00011f7b) bg_uniindi_top_pane_ParamLimits

0x92c6,	// (0x000189bb) uniindi_top_pane_g1_ParamLimits

0x92dc,	// (0x000189d1) uniindi_top_pane_g2_ParamLimits

0x92e8,	// (0x000189dd) uniindi_top_pane_g3_ParamLimits

0x92f9,	// (0x000189ee) uniindi_top_pane_g4_ParamLimits

0xfd26,	// (0x0001f41b) uniindi_top_pane_g_ParamLimits

0x9306,	// (0x000189fb) uniindi_top_pane_t1_ParamLimits

0x2886,	// (0x00011f7b) bg_vkb2_func_pane_cp01_ParamLimits

0x2886,	// (0x00011f7b) bg_vkb2_func_pane_cp01

0x9e2e,	// (0x00019523) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e2e,	// (0x00019523) cel_fep_hwr_func_pane_g1

0x2886,	// (0x00011f7b) bg_vkb2_func_pane_cp02_ParamLimits

0x2886,	// (0x00011f7b) bg_vkb2_func_pane_cp02

0x9e2e,	// (0x00019523) cell_hwr_side_button_pane_g1_ParamLimits

0x9e2e,	// (0x00019523) cell_hwr_side_button_pane_g1

0x495f,	// (0x00014054) status_pane_g4_ParamLimits

0x495f,	// (0x00014054) status_pane_g4

0x4979,	// (0x0001406e) status_pane_t1

0x73af,	// (0x00016aa4) form2_midp_gauge_slider_cont_pane

0x73b7,	// (0x00016aac) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdeb3,	// (0x0001d5a8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdec5,	// (0x0001d5ba) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae6,	// (0x0001f1db) form2_midp_gauge_slider_pane_t_ParamLimits

0x73ed,	// (0x00016ae2) form2_midp_slider_pane_ParamLimits

0x1a2e,	// (0x00011123) aid_size_cell_func_vkb2_ParamLimits

0x1a2e,	// (0x00011123) aid_size_cell_func_vkb2

0x9dcf,	// (0x000194c4) slider_pane_g4_ParamLimits

0x9dcf,	// (0x000194c4) slider_pane_g4

0xc4e2,	// (0x0001bbd7) form2_midp_gauge_slider_pane_t2_cp01

0xc4f0,	// (0x0001bbe5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc4f0,	// (0x0001bbe5) form2_midp_gauge_slider_pane_t3_cp01

0x2159,	// (0x0001184e) form2_midp_slider_pane_cp01

0x24ef,	// (0x00011be4) navi_smil_pane

0x9e67,	// (0x0001955c) navi_smil_pane_g1

0x9e6f,	// (0x00019564) navi_smil_pane_t1

0x9e3c,	// (0x00019531) form2_midp_slider_pane_g1

0x9e45,	// (0x0001953a) form2_midp_slider_pane_g2

0x9e4d,	// (0x00019542) form2_midp_slider_pane_g3

0x9e3c,	// (0x00019531) form2_midp_slider_pane_g4

0xf160,	// (0x0001e855) form2_midp_slider_pane_g5

0x0004,

0xfe1c,	// (0x0001f511) form2_midp_slider_pane_g

0x211e,	// (0x00011813) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x211e,	// (0x00011813) vkb2_area_bottom_space_btn_pane_g4

0xd534,	// (0x0001cc29) lc0_navi_pane_ParamLimits

0xd534,	// (0x0001cc29) lc0_navi_pane

0xd59e,	// (0x0001cc93) lc0_stat_indi_pane_ParamLimits

0xd59e,	// (0x0001cc93) lc0_stat_indi_pane

0xd5b3,	// (0x0001cca8) ls0_title_pane_ParamLimits

0xd5b3,	// (0x0001cca8) ls0_title_pane

0x33e7,	// (0x00012adc) bg_popup_sub_pane_cp14_ParamLimits

0x929b,	// (0x00018990) list_uniindi_pane_ParamLimits

0x92a7,	// (0x0001899c) uniindi_top_pane_ParamLimits

0x9343,	// (0x00018a38) list_single_uniindi_pane_g1_ParamLimits

0x9356,	// (0x00018a4b) list_single_uniindi_pane_t1_ParamLimits

0xc50d,	// (0x0001bc02) lc0_stat_clock_pane_ParamLimits

0xc50d,	// (0x0001bc02) lc0_stat_clock_pane

0xf16b,	// (0x0001e860) lc0_stat_indi_pane_g1_ParamLimits

0xf16b,	// (0x0001e860) lc0_stat_indi_pane_g1

0xf178,	// (0x0001e86d) lc0_stat_indi_pane_g2_ParamLimits

0xf178,	// (0x0001e86d) lc0_stat_indi_pane_g2

0x0001,

0xfe27,	// (0x0001f51c) lc0_stat_indi_pane_g_ParamLimits

0xfe27,	// (0x0001f51c) lc0_stat_indi_pane_g

0xc51a,	// (0x0001bc0f) lc0_uni_indicator_pane_ParamLimits

0xc51a,	// (0x0001bc0f) lc0_uni_indicator_pane

0xf185,	// (0x0001e87a) ls0_title_pane_g1_ParamLimits

0xf185,	// (0x0001e87a) ls0_title_pane_g1

0xf199,	// (0x0001e88e) ls0_title_pane_t1_ParamLimits

0xf199,	// (0x0001e88e) ls0_title_pane_t1

0xc527,	// (0x0001bc1c) lc0_uni_indicator_pane_g1_ParamLimits

0xc527,	// (0x0001bc1c) lc0_uni_indicator_pane_g1

0x9ee1,	// (0x000195d6) lc0_stat_clock_pane_t1

0x0178,	// (0x0000f86d) main_ai5_pane

0x9eef,	// (0x000195e4) ai5_sk_pane_ParamLimits

0x9eef,	// (0x000195e4) ai5_sk_pane

0xf1c7,	// (0x0001e8bc) cell_ai5_widget_pane_ParamLimits

0xf1c7,	// (0x0001e8bc) cell_ai5_widget_pane

0x9fb2,	// (0x000196a7) aid_size_cell_widget_grid

0x9fc8,	// (0x000196bd) bg_ai5_widget_pane_ParamLimits

0x9fc8,	// (0x000196bd) bg_ai5_widget_pane

0xa03c,	// (0x00019731) cell_ai5_widget_pane_g2

0xa04c,	// (0x00019741) cell_ai5_widget_pane_g3

0xa063,	// (0x00019758) cell_ai5_widget_pane_g4

0xa06f,	// (0x00019764) cell_ai5_widget_pane_g5

0xa07b,	// (0x00019770) cell_ai5_widget_pane_g6

0xa087,	// (0x0001977c) cell_ai5_widget_pane_g7

0xa0cf,	// (0x000197c4) cell_ai5_widget_pane_t1_ParamLimits

0xa0cf,	// (0x000197c4) cell_ai5_widget_pane_t1

0xa0ec,	// (0x000197e1) cell_ai5_widget_pane_t2_ParamLimits

0xa0ec,	// (0x000197e1) cell_ai5_widget_pane_t2

0xa104,	// (0x000197f9) cell_ai5_widget_pane_t3_ParamLimits

0xa104,	// (0x000197f9) cell_ai5_widget_pane_t3

0xa11c,	// (0x00019811) cell_ai5_widget_pane_t4_ParamLimits

0xa11c,	// (0x00019811) cell_ai5_widget_pane_t4

0xa139,	// (0x0001982e) cell_ai5_widget_pane_t5_ParamLimits

0xa139,	// (0x0001982e) cell_ai5_widget_pane_t5

0xa158,	// (0x0001984d) cell_ai5_widget_pane_t6_ParamLimits

0xa158,	// (0x0001984d) cell_ai5_widget_pane_t6

0xa16a,	// (0x0001985f) cell_ai5_widget_pane_t7_ParamLimits

0xa16a,	// (0x0001985f) cell_ai5_widget_pane_t7

0xa183,	// (0x00019878) cell_ai5_widget_pane_t8_ParamLimits

0xa183,	// (0x00019878) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0001f536) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0001f536) cell_ai5_widget_pane_t

0xa1d7,	// (0x000198cc) grid_ai5_widget_pane

0x33e7,	// (0x00012adc) highlight_cell_ai5_widget_pane_ParamLimits

0x33e7,	// (0x00012adc) highlight_cell_ai5_widget_pane

0xf231,	// (0x0001e926) ai5_sk_left_pane

0xf23b,	// (0x0001e930) ai5_sk_middle_pane

0xf245,	// (0x0001e93a) ai5_sk_right_pane

0xa20c,	// (0x00019901) bg_ai5_widget_pane_g1_ParamLimits

0xa20c,	// (0x00019901) bg_ai5_widget_pane_g1

0xa218,	// (0x0001990d) bg_ai5_widget_pane_g2_ParamLimits

0xa218,	// (0x0001990d) bg_ai5_widget_pane_g2

0xa224,	// (0x00019919) bg_ai5_widget_pane_g3_ParamLimits

0xa224,	// (0x00019919) bg_ai5_widget_pane_g3

0xa230,	// (0x00019925) bg_ai5_widget_pane_g4_ParamLimits

0xa230,	// (0x00019925) bg_ai5_widget_pane_g4

0xa23c,	// (0x00019931) bg_ai5_widget_pane_g5_ParamLimits

0xa23c,	// (0x00019931) bg_ai5_widget_pane_g5

0xa248,	// (0x0001993d) bg_ai5_widget_pane_g6_ParamLimits

0xa248,	// (0x0001993d) bg_ai5_widget_pane_g6

0xa254,	// (0x00019949) bg_ai5_widget_pane_g7_ParamLimits

0xa254,	// (0x00019949) bg_ai5_widget_pane_g7

0xa260,	// (0x00019955) bg_ai5_widget_pane_g8_ParamLimits

0xa260,	// (0x00019955) bg_ai5_widget_pane_g8

0xa26c,	// (0x00019961) bg_ai5_widget_pane_g9_ParamLimits

0xa26c,	// (0x00019961) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x0001f54b) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x0001f54b) bg_ai5_widget_pane_g

0xa29e,	// (0x00019993) cell_shortcut_ai5_widget_pane_ParamLimits

0xa29e,	// (0x00019993) cell_shortcut_ai5_widget_pane

0x4286,	// (0x0001397b) bg_cell_shortcut_ai5_widget_pane

0xa2af,	// (0x000199a4) cell_grid_ai5_widget_pane_g1

0x4286,	// (0x0001397b) highlight_cell_shortcut_ai5_widget_pane

0x4b14,	// (0x00014209) ai5_sk_left_pane_g1

0xa2b8,	// (0x000199ad) ai5_sk_left_pane_g2

0xa2c0,	// (0x000199b5) ai5_sk_left_pane_g3

0xa2c8,	// (0x000199bd) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x0001f55e) ai5_sk_left_pane_g

0xa2d0,	// (0x000199c5) ai5_sk_left_pane_t1

0x4b1c,	// (0x00014211) ai5_sk_right_pane_g1

0xa2de,	// (0x000199d3) ai5_sk_right_pane_g2

0xa2e6,	// (0x000199db) ai5_sk_right_pane_g3

0xa2ee,	// (0x000199e3) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0001f567) ai5_sk_right_pane_g

0xa2f6,	// (0x000199eb) ai5_sk_right_pane_t1

0x4b1c,	// (0x00014211) ai5_sk_middle_pane_g1

0x4b14,	// (0x00014209) ai5_sk_middle_pane_g2

0x4b34,	// (0x00014229) ai5_sk_middle_pane_g3

0xa2e6,	// (0x000199db) ai5_sk_middle_pane_g4

0xa2c0,	// (0x000199b5) ai5_sk_middle_pane_g5

0xa304,	// (0x000199f9) ai5_sk_middle_pane_g6

0xf24f,	// (0x0001e944) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x0001f570) ai5_sk_middle_pane_g

0xd420,	// (0x0001cb15) aid_touch_area_size_lc0_ParamLimits

0xd420,	// (0x0001cb15) aid_touch_area_size_lc0

0x17a6,	// (0x00010e9b) cell_hwr_candidate_pane_t1_ParamLimits

0x4636,	// (0x00013d2b) aid_touch_navi_pane

0xd6ac,	// (0x0001cda1) status_dt_navi_pane_ParamLimits

0xd6ac,	// (0x0001cda1) status_dt_navi_pane

0xd6c4,	// (0x0001cdb9) status_dt_sta_pane_ParamLimits

0xd6c4,	// (0x0001cdb9) status_dt_sta_pane

0xf257,	// (0x0001e94c) dt_sta_controll_pane

0xf264,	// (0x0001e959) dt_sta_indi_pane

0xf271,	// (0x0001e966) dt_sta_title_pane

0x2886,	// (0x00011f7b) bg_dt_sta_indi_pane_ParamLimits

0x2886,	// (0x00011f7b) bg_dt_sta_indi_pane

0xf283,	// (0x0001e978) dt_sta_battery_pane

0xf28b,	// (0x0001e980) dt_sta_indi_pane_g1

0xa356,	// (0x00019a4b) dt_sta_indi_pane_g2

0xa35f,	// (0x00019a54) dt_sta_indi_pane_g3

0x0002,

0xfe8a,	// (0x0001f57f) dt_sta_indi_pane_g

0xa368,	// (0x00019a5d) dt_sta_signal_pane

0x33e7,	// (0x00012adc) bg_dt_sta_title_pane_ParamLimits

0x33e7,	// (0x00012adc) bg_dt_sta_title_pane

0xa371,	// (0x00019a66) dt_sta_title_pane_g1

0xa379,	// (0x00019a6e) dt_sta_title_pane_t1_ParamLimits

0xa379,	// (0x00019a6e) dt_sta_title_pane_t1

0x24ef,	// (0x00011be4) bg_dt_sta_control_pane

0xf294,	// (0x0001e989) dt_sta_controll_pane_g1

0xa397,	// (0x00019a8c) bg_dt_sta_title_pane_g1

0xa3a0,	// (0x00019a95) bg_dt_sta_title_pane_g2

0xa3a9,	// (0x00019a9e) bg_dt_sta_title_pane_g3

0x0002,

0xfe91,	// (0x0001f586) bg_dt_sta_title_pane_g

0x7675,	// (0x00016d6a) bg_dt_sta_indi_pane_g1

0xa3b2,	// (0x00019aa7) dt_sta_signal_pane_g1

0xa3ba,	// (0x00019aaf) dt_sta_signal_pane_g2

0x0001,

0xfe98,	// (0x0001f58d) dt_sta_signal_pane_g

0xa3c2,	// (0x00019ab7) dt_sta_battery_pane_g1

0xa3cb,	// (0x00019ac0) dt_sta_battery_pane_t1

0x7675,	// (0x00016d6a) bg_dt_sta_control_pane_g1

0x3cf6,	// (0x000133eb) fep_china_uni_eep_pane

0x3cfe,	// (0x000133f3) fep_china_uni_entry_pane_ParamLimits

0x3d0e,	// (0x00013403) popup_fep_china_uni_window_g1_ParamLimits

0x3d1e,	// (0x00013413) popup_fep_china_uni_window_g2_ParamLimits

0x3d1e,	// (0x00013413) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001ee0d) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001ee0d) popup_fep_china_uni_window_g

0xa3da,	// (0x00019acf) fep_china_uni_eep_pane_g1

0xa3e2,	// (0x00019ad7) fep_china_uni_eep_pane_t1

0x9e5e,	// (0x00019553) aid_touch_area_size_smil_player

0x4786,	// (0x00013e7b) lc0_clock_pane

0x496d,	// (0x00014062) status_pane_g5_ParamLimits

0x496d,	// (0x00014062) status_pane_g5

0xbb5c,	// (0x0001b251) popup_keymap_window

0x492b,	// (0x00014020) status_icon_pane

0xa04c,	// (0x00019741) cell_ai5_widget_pane_g3_ParamLimits

0xa063,	// (0x00019758) cell_ai5_widget_pane_g4_ParamLimits

0xa06f,	// (0x00019764) cell_ai5_widget_pane_g5_ParamLimits

0xa093,	// (0x00019788) cell_ai5_widget_pane_g8_ParamLimits

0xa093,	// (0x00019788) cell_ai5_widget_pane_g8

0xa0a7,	// (0x0001979c) cell_ai5_widget_pane_g9_ParamLimits

0xa0a7,	// (0x0001979c) cell_ai5_widget_pane_g9

0xa0bb,	// (0x000197b0) cell_ai5_widget_pane_g10_ParamLimits

0xa0bb,	// (0x000197b0) cell_ai5_widget_pane_g10

0xa3f1,	// (0x00019ae6) status_icon_pane_g1

0x24ef,	// (0x00011be4) bg_popup_sub_pane_cp13

0xa3f9,	// (0x00019aee) popup_keymap_window_t1

0xd386,	// (0x0001ca7b) control_pane_g6_ParamLimits

0xd386,	// (0x0001ca7b) control_pane_g6

0xd393,	// (0x0001ca88) control_pane_g7_ParamLimits

0xd393,	// (0x0001ca88) control_pane_g7

0xd3a0,	// (0x0001ca95) control_pane_g8_ParamLimits

0xd3a0,	// (0x0001ca95) control_pane_g8

0xf257,	// (0x0001e94c) dt_sta_controll_pane_ParamLimits

0xf264,	// (0x0001e959) dt_sta_indi_pane_ParamLimits

0xf271,	// (0x0001e966) dt_sta_title_pane_ParamLimits

0x2da4,	// (0x00012499) aid_size_touch_scroll_bar_cale

0x0251,	// (0x0000f946) popup_discreet_window_ParamLimits

0x0251,	// (0x0000f946) popup_discreet_window

0xb746,	// (0x0001ae3b) popup_sk_window

0x527d,	// (0x00014972) bg_popup_sub_pane_cp28_ParamLimits

0x527d,	// (0x00014972) bg_popup_sub_pane_cp28

0xa407,	// (0x00019afc) popup_discreet_window_g1_ParamLimits

0xa407,	// (0x00019afc) popup_discreet_window_g1

0xa427,	// (0x00019b1c) popup_discreet_window_t1_ParamLimits

0xa427,	// (0x00019b1c) popup_discreet_window_t1

0xa445,	// (0x00019b3a) popup_discreet_window_t2_ParamLimits

0xa445,	// (0x00019b3a) popup_discreet_window_t2

0x0002,

0xfe9d,	// (0x0001f592) popup_discreet_window_t_ParamLimits

0xfe9d,	// (0x0001f592) popup_discreet_window_t

0x2190,	// (0x00011885) popup_sk_window_g1

0x219a,	// (0x0001188f) popup_sk_window_g2

0x0001,

0xfea4,	// (0x0001f599) popup_sk_window_g

0x21a4,	// (0x00011899) popup_sk_window_t1

0x21b2,	// (0x000118a7) popup_sk_window_t1_copy1

0xa03c,	// (0x00019731) cell_ai5_widget_pane_g2_ParamLimits

0xa195,	// (0x0001988a) cell_ai5_widget_pane_t9_ParamLimits

0xa195,	// (0x0001988a) cell_ai5_widget_pane_t9

0x24ef,	// (0x00011be4) main_fep_fshwr2_pane

0xc54e,	// (0x0001bc43) aid_fshwr2_btn_pane

0xc55f,	// (0x0001bc54) aid_fshwr2_syb_pane

0xc570,	// (0x0001bc65) aid_fshwr2_txt_pane

0xc57c,	// (0x0001bc71) fshwr2_func_candi_pane

0xc59b,	// (0x0001bc90) fshwr2_hwr_syb_pane

0xc5b6,	// (0x0001bcab) fshwr2_icf_pane

0x0178,	// (0x0000f86d) fshwr2_icf_bg_pane

0x2232,	// (0x00011927) fshwr2_icf_pane_t1_ParamLimits

0x2232,	// (0x00011927) fshwr2_icf_pane_t1

0x3be4,	// (0x000132d9) fshwr2_func_candi_pane_g1

0xf29d,	// (0x0001e992) fshwr2_func_candi_row_pane_ParamLimits

0xf29d,	// (0x0001e992) fshwr2_func_candi_row_pane

0xc5e2,	// (0x0001bcd7) cell_fshwr2_syb_pane_ParamLimits

0xc5e2,	// (0x0001bcd7) cell_fshwr2_syb_pane

0x1777,	// (0x00010e6c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1777,	// (0x00010e6c) fshwr2_hwr_syb_pane_g1

0x0178,	// (0x0000f86d) bg_popup_call_pane_cp01

0xc5f8,	// (0x0001bced) fshwr2_func_candi_cell_pane_ParamLimits

0xc5f8,	// (0x0001bced) fshwr2_func_candi_cell_pane

0xf2b5,	// (0x0001e9aa) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf2b5,	// (0x0001e9aa) fshwr2_func_candi_cell_bg_pane

0xc62d,	// (0x0001bd22) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc62d,	// (0x0001bd22) fshwr2_func_candi_cell_pane_g1

0xc65c,	// (0x0001bd51) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc65c,	// (0x0001bd51) fshwr2_func_candi_cell_pane_t1

0x0178,	// (0x0000f86d) bg_button_pane_cp08

0xa4b3,	// (0x00019ba8) cell_fshwr2_syb_bg_pane

0xc66f,	// (0x0001bd64) cell_fshwr2_syb_bg_pane_g1

0xc677,	// (0x0001bd6c) cell_fshwr2_syb_bg_pane_t1

0x33e7,	// (0x00012adc) main_tmo_pane

0xd9a7,	// (0x0001d09c) uni_indicator_pane_g1_ParamLimits

0xd9bd,	// (0x0001d0b2) uni_indicator_pane_g2_ParamLimits

0xd9d3,	// (0x0001d0c8) uni_indicator_pane_g3_ParamLimits

0x5dd8,	// (0x000154cd) uni_indicator_pane_g4_ParamLimits

0x5dd8,	// (0x000154cd) uni_indicator_pane_g4

0x5dec,	// (0x000154e1) uni_indicator_pane_g5_ParamLimits

0x5dec,	// (0x000154e1) uni_indicator_pane_g5

0x5dec,	// (0x000154e1) uni_indicator_pane_g6_ParamLimits

0x5dec,	// (0x000154e1) uni_indicator_pane_g6

0xf917,	// (0x0001f00c) uni_indicator_pane_g_ParamLimits

0xe652,	// (0x0001dd47) popup_tmo_note_window_ParamLimits

0xe652,	// (0x0001dd47) popup_tmo_note_window

0x1a10,	// (0x00011105) fshwr2_bg_pane

0xc64d,	// (0x0001bd42) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc64d,	// (0x0001bd42) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea9,	// (0x0001f59e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea9,	// (0x0001f59e) fshwr2_func_candi_cell_pane_g

0x175f,	// (0x00010e54) bg_popup_window_pane_cp01

0x22e7,	// (0x000119dc) bg_popup_window_pane_g1_cp01

0xa4bb,	// (0x00019bb0) bg_popup_window_pane_cp22_ParamLimits

0xa4bb,	// (0x00019bb0) bg_popup_window_pane_cp22

0xa4c9,	// (0x00019bbe) listscroll_tmo_link_pane_ParamLimits

0xa4c9,	// (0x00019bbe) listscroll_tmo_link_pane

0xa509,	// (0x00019bfe) popup_tmo_note_window_g1_ParamLimits

0xa509,	// (0x00019bfe) popup_tmo_note_window_g1

0xa516,	// (0x00019c0b) tmo_note_info_pane_ParamLimits

0xa516,	// (0x00019c0b) tmo_note_info_pane

0xf2c1,	// (0x0001e9b6) list_tmo_note_info_pane_g1_ParamLimits

0xf2c1,	// (0x0001e9b6) list_tmo_note_info_pane_g1

0xa547,	// (0x00019c3c) list_tmo_note_info_pane_g2_ParamLimits

0xa547,	// (0x00019c3c) list_tmo_note_info_pane_g2

0x0001,

0xfeae,	// (0x0001f5a3) list_tmo_note_info_pane_g_ParamLimits

0xfeae,	// (0x0001f5a3) list_tmo_note_info_pane_g

0xa563,	// (0x00019c58) list_tmo_note_info_text_pane_ParamLimits

0xa563,	// (0x00019c58) list_tmo_note_info_text_pane

0xa5e4,	// (0x00019cd9) list_tmo_link_pane

0xa5f1,	// (0x00019ce6) scroll_pane_cp20

0xa5fe,	// (0x00019cf3) list_single_tmo_link_pane_ParamLimits

0xa5fe,	// (0x00019cf3) list_single_tmo_link_pane

0xa60e,	// (0x00019d03) list_single_tmo_link_pane_t1

0xa61c,	// (0x00019d11) list_tmo_note_info_text_pane_t1_ParamLimits

0xa61c,	// (0x00019d11) list_tmo_note_info_text_pane_t1

0xcf99,	// (0x0001c68e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcf99,	// (0x0001c68e) aid_size_touch_scroll_bar_cp01

0xcec9,	// (0x0001c5be) aid_size_touch_slider_marker

0xb736,	// (0x0001ae2b) popup_settings_window_ParamLimits

0xb736,	// (0x0001ae2b) popup_settings_window

0x45e6,	// (0x00013cdb) popup_candi_list_indi_window

0x4636,	// (0x00013d2b) aid_touch_navi_pane_ParamLimits

0x196b,	// (0x00011060) rs_clock_indi_pane

0x1974,	// (0x00011069) sctrl_sk_bottom_pane_ParamLimits

0x1985,	// (0x0001107a) sctrl_sk_top_pane_ParamLimits

0x1a88,	// (0x0001117d) popup_fep_tooltip_window

0x9fb2,	// (0x000196a7) aid_size_cell_widget_grid_ParamLimits

0xa027,	// (0x0001971c) cell_ai5_widget_pane_g1_ParamLimits

0xa027,	// (0x0001971c) cell_ai5_widget_pane_g1

0xa07b,	// (0x00019770) cell_ai5_widget_pane_g6_ParamLimits

0xa087,	// (0x0001977c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2c,	// (0x0001f521) cell_ai5_widget_pane_g_ParamLimits

0xfe2c,	// (0x0001f521) cell_ai5_widget_pane_g

0xa1b9,	// (0x000198ae) cell_ai5_widget_pane_t10_ParamLimits

0xa1b9,	// (0x000198ae) cell_ai5_widget_pane_t10

0xa1d7,	// (0x000198cc) grid_ai5_widget_pane_ParamLimits

0xa278,	// (0x0001996d) cell_contacts_ai5_widget_pane_ParamLimits

0xa278,	// (0x0001996d) cell_contacts_ai5_widget_pane

0xa45a,	// (0x00019b4f) popup_discreet_window_t3_ParamLimits

0xa45a,	// (0x00019b4f) popup_discreet_window_t3

0xc5ce,	// (0x0001bcc3) popup_fshwr2_char_preview_window_ParamLimits

0xc5ce,	// (0x0001bcc3) popup_fshwr2_char_preview_window

0xf2d8,	// (0x0001e9cd) tmo_note_info_pane_t1

0xf2ed,	// (0x0001e9e2) tmo_note_info_pane_t2

0xf304,	// (0x0001e9f9) tmo_note_info_pane_t3

0xa5c0,	// (0x00019cb5) tmo_note_info_pane_t4

0xa5d2,	// (0x00019cc7) tmo_note_info_pane_t5

0x0004,

0xfeb3,	// (0x0001f5a8) tmo_note_info_pane_t

0xa5e4,	// (0x00019cd9) list_tmo_link_pane_ParamLimits

0xa5f1,	// (0x00019ce6) scroll_pane_cp20_ParamLimits

0x0178,	// (0x0000f86d) bg_popup_fep_char_preview_window_cp01

0xa635,	// (0x00019d2a) popup_fshwr2_char_preview_window_t1

0xa643,	// (0x00019d38) popup_candi_list_indi_window_g1

0xa64c,	// (0x00019d41) bg_cell_contacts_ai5_widget_pane

0xa658,	// (0x00019d4d) cell_contacts_ai5_widget_pane_g1

0x7eb8,	// (0x000175ad) cell_contacts_ai5_widget_pane_g2

0xa66d,	// (0x00019d62) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebe,	// (0x0001f5b3) cell_contacts_ai5_widget_pane_g

0xa679,	// (0x00019d6e) cell_contacts_ai5_widget_pane_t1

0x33e7,	// (0x00012adc) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf37e,	// (0x0001ea73) settings_container_pane

0x4286,	// (0x0001397b) listscroll_set_pane_copy1

0x6a56,	// (0x0001614b) scroll_pane_cp121_copy1

0xa6fc,	// (0x00019df1) set_content_pane_copy1

0xf38a,	// (0x0001ea7f) aid_height_set_list_copy1_ParamLimits

0xf38a,	// (0x0001ea7f) aid_height_set_list_copy1

0x600c,	// (0x00015701) aid_size_parent_copy1_ParamLimits

0x600c,	// (0x00015701) aid_size_parent_copy1

0xf396,	// (0x0001ea8b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf396,	// (0x0001ea8b) button_value_adjust_pane_cp6_copy1

0x45cc,	// (0x00013cc1) list_highlight_pane_cp2_copy1_ParamLimits

0x45cc,	// (0x00013cc1) list_highlight_pane_cp2_copy1

0xf3aa,	// (0x0001ea9f) list_set_pane_copy1_ParamLimits

0xf3aa,	// (0x0001ea9f) list_set_pane_copy1

0xf319,	// (0x0001ea0e) main_pane_set_t1_copy1_ParamLimits

0xf319,	// (0x0001ea0e) main_pane_set_t1_copy1

0xf353,	// (0x0001ea48) main_pane_set_t2_copy1_ParamLimits

0xf353,	// (0x0001ea48) main_pane_set_t2_copy1

0xf457,	// (0x0001eb4c) main_pane_set_t3_copy1

0xf465,	// (0x0001eb5a) main_pane_set_t4_copy1

0xf372,	// (0x0001ea67) set_content_pane_g1_copy1_ParamLimits

0xf372,	// (0x0001ea67) set_content_pane_g1_copy1

0xf473,	// (0x0001eb68) setting_code_pane_copy1

0xa7f5,	// (0x00019eea) setting_slider_graphic_pane_copy1

0xa7f5,	// (0x00019eea) setting_slider_pane_copy1

0xa7f5,	// (0x00019eea) setting_text_pane_copy1

0xa7f5,	// (0x00019eea) setting_volume_pane_copy1

0xf473,	// (0x0001eb68) settings_code_pane_cp2_copy1

0xf47b,	// (0x0001eb70) settings_code_pane_cp_copy1_ParamLimits

0xf47b,	// (0x0001eb70) settings_code_pane_cp_copy1

0xc686,	// (0x0001bd7b) volume_set_pane_copy1

0xf48f,	// (0x0001eb84) volume_set_pane_g10_copy1

0xf497,	// (0x0001eb8c) volume_set_pane_g1_copy1

0xf49f,	// (0x0001eb94) volume_set_pane_g2_copy1

0xf4a7,	// (0x0001eb9c) volume_set_pane_g3_copy1

0xf4af,	// (0x0001eba4) volume_set_pane_g4_copy1

0xf4b7,	// (0x0001ebac) volume_set_pane_g5_copy1

0xf4bf,	// (0x0001ebb4) volume_set_pane_g6_copy1

0xf4c7,	// (0x0001ebbc) volume_set_pane_g7_copy1

0xf4cf,	// (0x0001ebc4) volume_set_pane_g8_copy1

0xf4d7,	// (0x0001ebcc) volume_set_pane_g9_copy1

0x25e3,	// (0x00011cd8) bg_set_opt_pane_cp_copy1_ParamLimits

0x25e3,	// (0x00011cd8) bg_set_opt_pane_cp_copy1

0x22f8,	// (0x000119ed) setting_slider_pane_t1_copy1_ParamLimits

0x22f8,	// (0x000119ed) setting_slider_pane_t1_copy1

0xc68e,	// (0x0001bd83) setting_slider_pane_t2_copy1_ParamLimits

0xc68e,	// (0x0001bd83) setting_slider_pane_t2_copy1

0xc6a8,	// (0x0001bd9d) setting_slider_pane_t3_copy1_ParamLimits

0xc6a8,	// (0x0001bd9d) setting_slider_pane_t3_copy1

0xc6c0,	// (0x0001bdb5) slider_set_pane_copy1_ParamLimits

0xc6c0,	// (0x0001bdb5) slider_set_pane_copy1

0x3510,	// (0x00012c05) set_opt_bg_pane_g1_copy2

0x3518,	// (0x00012c0d) set_opt_bg_pane_g2_copy2

0xa861,	// (0x00019f56) set_opt_bg_pane_g3_copy2

0x3528,	// (0x00012c1d) set_opt_bg_pane_g4_copy2

0x3530,	// (0x00012c25) set_opt_bg_pane_g5_copy2

0x3538,	// (0x00012c2d) set_opt_bg_pane_g6_copy2

0xf4df,	// (0x0001ebd4) set_opt_bg_pane_g7_copy2

0xa873,	// (0x00019f68) set_opt_bg_pane_g8_copy2

0xa87d,	// (0x00019f72) set_opt_bg_pane_g9_copy2

0x235e,	// (0x00011a53) aid_size_touch_slider_mark_copy1_ParamLimits

0x235e,	// (0x00011a53) aid_size_touch_slider_mark_copy1

0xa887,	// (0x00019f7c) slider_set_pane_g1_copy1

0x2372,	// (0x00011a67) slider_set_pane_g2_copy1

0x13a0,	// (0x00010a95) slider_set_pane_g3_copy1_ParamLimits

0x13a0,	// (0x00010a95) slider_set_pane_g3_copy1

0x13b4,	// (0x00010aa9) slider_set_pane_g4_copy1_ParamLimits

0x13b4,	// (0x00010aa9) slider_set_pane_g4_copy1

0x13cc,	// (0x00010ac1) slider_set_pane_g5_copy1_ParamLimits

0x13cc,	// (0x00010ac1) slider_set_pane_g5_copy1

0x13a0,	// (0x00010a95) slider_set_pane_g6_copy1_ParamLimits

0x13a0,	// (0x00010a95) slider_set_pane_g6_copy1

0xc6d6,	// (0x0001bdcb) slider_set_pane_g7_copy1_ParamLimits

0xc6d6,	// (0x0001bdcb) slider_set_pane_g7_copy1

0x2503,	// (0x00011bf8) bg_set_opt_pane_cp2_copy1

0xa890,	// (0x00019f85) setting_slider_graphic_pane_g1_copy1

0xf4e7,	// (0x0001ebdc) setting_slider_graphic_pane_t1_copy1

0xf4f7,	// (0x0001ebec) setting_slider_graphic_pane_t2_copy1

0xf507,	// (0x0001ebfc) slider_set_pane_cp_copy1

0xa8c9,	// (0x00019fbe) input_focus_pane_cp1_copy1

0xa8d2,	// (0x00019fc7) list_set_text_pane_copy1

0xa8da,	// (0x00019fcf) setting_text_pane_g1_copy1

0x263c,	// (0x00011d31) set_text_pane_t1_copy1

0xa8c9,	// (0x00019fbe) input_focus_pane_cp2_copy1

0xa8da,	// (0x00019fcf) setting_code_pane_g1_copy1

0xf50f,	// (0x0001ec04) setting_code_pane_t1_copy1

0x6880,	// (0x00015f75) list_set_graphic_pane_copy1

0x2503,	// (0x00011bf8) bg_set_opt_pane_cp4_copy1

0xd201,	// (0x0001c8f6) list_set_graphic_pane_g1_copy1_ParamLimits

0xd201,	// (0x0001c8f6) list_set_graphic_pane_g1_copy1

0xf51d,	// (0x0001ec12) list_set_graphic_pane_g2_copy1

0xd219,	// (0x0001c90e) list_set_graphic_pane_t1_copy1_ParamLimits

0xd219,	// (0x0001c90e) list_set_graphic_pane_t1_copy1

0x7675,	// (0x00016d6a) rs_clock_indi_pane_g1

0xa90b,	// (0x0001a000) rs_clock_indi_pane_t1

0xa919,	// (0x0001a00e) rs_indi_pane

0xa921,	// (0x0001a016) rs_indi_pane_g1

0xa92a,	// (0x0001a01f) rs_indi_pane_g2

0xa933,	// (0x0001a028) rs_indi_pane_g3

0x0002,

0xfec5,	// (0x0001f5ba) rs_indi_pane_g

0x4286,	// (0x0001397b) bg_popup_preview_window_pane_cp03

0xa93c,	// (0x0001a031) popup_fep_tooltip_window_t1

0x84ed,	// (0x00017be2) popup_note2_window_g2_ParamLimits

0x84ed,	// (0x00017be2) popup_note2_window_g2

0x0001,

0xfc5e,	// (0x0001f353) popup_note2_window_g_ParamLimits

0xfc5e,	// (0x0001f353) popup_note2_window_g

0x8acb,	// (0x000181c0) bg_popup_sub_pane_cp11_ParamLimits

0x8ad8,	// (0x000181cd) cell_ai3_links_pane_g1_ParamLimits

0x8aef,	// (0x000181e4) cell_ai3_links_pane_t1

0x263c,	// (0x00011d31) set_text_pane_t1_copy1_ParamLimits

0x4197,	// (0x0001388c) cell_graphic_popup_pane_cp2_ParamLimits

0x4197,	// (0x0001388c) cell_graphic_popup_pane_cp2

0xa94a,	// (0x0001a03f) cell_graphic_popup_pane_g1_cp2

0x2bb7,	// (0x000122ac) cell_graphic_popup_pane_g2_cp2

0xa952,	// (0x0001a047) cell_graphic_popup_pane_g3_cp2

0xa95a,	// (0x0001a04f) cell_graphic_popup_pane_t2_cp2

0x2bc8,	// (0x000122bd) grid_highlight_pane_cp3_cp2

0x3901,	// (0x00012ff6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x33e7,	// (0x00012adc) main_tmo_pane_ParamLimits

0xe646,	// (0x0001dd3b) popup_tmo_big_image_note_window

0xa016,	// (0x0001970b) cell_ai5_widget_list_pane

0xa01e,	// (0x00019713) cell_ai5_widget_lrg_icon_pane

0xf2d8,	// (0x0001e9cd) tmo_note_info_pane_t1_ParamLimits

0xf2ed,	// (0x0001e9e2) tmo_note_info_pane_t2_ParamLimits

0xf304,	// (0x0001e9f9) tmo_note_info_pane_t3_ParamLimits

0xa5c0,	// (0x00019cb5) tmo_note_info_pane_t4_ParamLimits

0xa5d2,	// (0x00019cc7) tmo_note_info_pane_t5_ParamLimits

0xfeb3,	// (0x0001f5a8) tmo_note_info_pane_t_ParamLimits

0xf37e,	// (0x0001ea73) settings_container_pane_ParamLimits

0xa8c1,	// (0x00019fb6) indicator_popup_pane_cp5

0xa8c1,	// (0x00019fb6) indicator_popup_pane_cp6

0x6880,	// (0x00015f75) list_set_graphic_pane_copy1_ParamLimits

0x24ef,	// (0x00011be4) bg_popup_window_pane_cp23

0xa968,	// (0x0001a05d) popup_tmo_big_image_note_window_g1

0xa972,	// (0x0001a067) popup_tmo_big_image_note_window_t1

0xa982,	// (0x0001a077) popup_tmo_big_image_note_window_t2

0xa992,	// (0x0001a087) popup_tmo_big_image_note_window_t3

0x0002,

0xfecc,	// (0x0001f5c1) popup_tmo_big_image_note_window_t

0x7675,	// (0x00016d6a) cell_ai5_widget_lrg_icon_pane_g1

0xa9a2,	// (0x0001a097) cell_ai5_widget_lrg_icon_pane_t1

0xa9b0,	// (0x0001a0a5) cell_ai5_widget_list_row_pane_ParamLimits

0xa9b0,	// (0x0001a0a5) cell_ai5_widget_list_row_pane

0xa9c7,	// (0x0001a0bc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa9c7,	// (0x0001a0bc) cell_ai5_widget_list_row_pane_g1

0xa9d4,	// (0x0001a0c9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa9d4,	// (0x0001a0c9) cell_ai5_widget_list_row_pane_t1

0xaa05,	// (0x0001a0fa) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa05,	// (0x0001a0fa) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed3,	// (0x0001f5c8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed3,	// (0x0001f5c8) cell_ai5_widget_list_row_pane_t

0x0178,	// (0x0000f86d) main_fep_vtchi_ss_pane

0xaa49,	// (0x0001a13e) popup_fep_char_pre_window

0xaa51,	// (0x0001a146) popup_fep_ituss_window

0xaa72,	// (0x0001a167) popup_fep_vkbss_window

0xaa91,	// (0x0001a186) grid_vkbss_keypad_pane_ParamLimits

0xaa91,	// (0x0001a186) grid_vkbss_keypad_pane

0xaaa1,	// (0x0001a196) ituss_keypad_pane

0x239c,	// (0x00011a91) aid_vkbss_key_offset_ParamLimits

0x239c,	// (0x00011a91) aid_vkbss_key_offset

0x23a8,	// (0x00011a9d) cell_vkbss_key_pane_ParamLimits

0x23a8,	// (0x00011a9d) cell_vkbss_key_pane

0xaab0,	// (0x0001a1a5) bg_cell_vkbss_key_g1_ParamLimits

0xaab0,	// (0x0001a1a5) bg_cell_vkbss_key_g1

0xaabc,	// (0x0001a1b1) cell_vkbss_key_3p_pane_ParamLimits

0xaabc,	// (0x0001a1b1) cell_vkbss_key_3p_pane

0xaad6,	// (0x0001a1cb) cell_vkbss_key_g1_ParamLimits

0xaad6,	// (0x0001a1cb) cell_vkbss_key_g1

0xaaf0,	// (0x0001a1e5) cell_vkbss_key_t1_ParamLimits

0xaaf0,	// (0x0001a1e5) cell_vkbss_key_t1

0x23be,	// (0x00011ab3) cell_ituss_key_pane_ParamLimits

0x23be,	// (0x00011ab3) cell_ituss_key_pane

0xab1b,	// (0x0001a210) bg_cell_ituss_key_g1_ParamLimits

0xab1b,	// (0x0001a210) bg_cell_ituss_key_g1

0xab27,	// (0x0001a21c) cell_ituss_key_pane_g1_ParamLimits

0xab27,	// (0x0001a21c) cell_ituss_key_pane_g1

0x23cf,	// (0x00011ac4) cell_ituss_key_pane_g2_ParamLimits

0x23cf,	// (0x00011ac4) cell_ituss_key_pane_g2

0x0002,

0xfeda,	// (0x0001f5cf) cell_ituss_key_pane_g_ParamLimits

0xfeda,	// (0x0001f5cf) cell_ituss_key_pane_g

0x23fb,	// (0x00011af0) cell_ituss_key_t1_ParamLimits

0x23fb,	// (0x00011af0) cell_ituss_key_t1

0x2435,	// (0x00011b2a) cell_ituss_key_t2_ParamLimits

0x2435,	// (0x00011b2a) cell_ituss_key_t2

0x2466,	// (0x00011b5b) cell_ituss_key_t3_ParamLimits

0x2466,	// (0x00011b5b) cell_ituss_key_t3

0x2435,	// (0x00011b2a) cell_ituss_key_t4_ParamLimits

0x2435,	// (0x00011b2a) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0001f5d6) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0001f5d6) cell_ituss_key_t

0xab53,	// (0x0001a248) cell_vkbss_key_3p_pane_g1

0xab5b,	// (0x0001a250) cell_vkbss_key_3p_pane_g2

0xab63,	// (0x0001a258) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0001f5e1) cell_vkbss_key_3p_pane_g

0x0178,	// (0x0000f86d) bg_popup_fep_char_preview_window_cp02

0x24a9,	// (0x00011b9e) popup_fep_char_pre_window_t1

0xf227,	// (0x0001e91c) main_ai5_sk_pane

0xa64c,	// (0x00019d41) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa658,	// (0x00019d4d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7eb8,	// (0x000175ad) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa66d,	// (0x00019d62) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebe,	// (0x0001f5b3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa679,	// (0x00019d6e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x33e7,	// (0x00012adc) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf525,	// (0x0001ec1a) main_ai5_sk_pane_g1

0x50b6,	// (0x000147ab) popup_query_code_window_g1

0xaa67,	// (0x0001a15c) popup_fep_vkb_icf_pane

0xaa7b,	// (0x0001a170) popup_fep_vtchi_icf_pane

0xab74,	// (0x0001a269) bg_icf_pane

0xab80,	// (0x0001a275) list_vkb_icf_pane

0xab8c,	// (0x0001a281) bg_icf_pane_cp01

0xab9f,	// (0x0001a294) vtchi_icf_list_pane

0xabaf,	// (0x0001a2a4) list_vkb_icf_pane_t1_ParamLimits

0xabaf,	// (0x0001a2a4) list_vkb_icf_pane_t1

0xabc5,	// (0x0001a2ba) vtchi_icf_list_pane_t1_ParamLimits

0xabc5,	// (0x0001a2ba) vtchi_icf_list_pane_t1

0xaa51,	// (0x0001a146) popup_fep_ituss_window_ParamLimits

0xaa7b,	// (0x0001a170) popup_fep_vtchi_icf_pane_ParamLimits

0xaaa1,	// (0x0001a196) ituss_keypad_pane_ParamLimits

0x2390,	// (0x00011a85) ituss_sks_pane

0xab74,	// (0x0001a269) bg_icf_pane_ParamLimits

0xaa2d,	// (0x0001a122) icf_edit_indi_pane_ParamLimits

0xaa2d,	// (0x0001a122) icf_edit_indi_pane

0xab80,	// (0x0001a275) list_vkb_icf_pane_ParamLimits

0xab8c,	// (0x0001a281) bg_icf_pane_cp01_ParamLimits

0xaa3c,	// (0x0001a131) icf_edit_indi_pane_cp01_ParamLimits

0xaa3c,	// (0x0001a131) icf_edit_indi_pane_cp01

0xaba7,	// (0x0001a29c) vtchi_query_pane

0x78f3,	// (0x00016fe8) icf_edit_indi_pane_g1_ParamLimits

0x78f3,	// (0x00016fe8) icf_edit_indi_pane_g1

0xac36,	// (0x0001a32b) icf_edit_indi_pane_g2_ParamLimits

0xac36,	// (0x0001a32b) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0001f5f9) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0001f5f9) icf_edit_indi_pane_g

0xac45,	// (0x0001a33a) icf_edit_indi_pane_t1

0xabdf,	// (0x0001a2d4) bg_input_focus_pane_cp042

0x2d9b,	// (0x00012490) vtchi_button_pane

0xabe8,	// (0x0001a2dd) vtchi_query_pane_t1

0xabf6,	// (0x0001a2eb) vtchi_query_pane_t2

0xac04,	// (0x0001a2f9) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0001f5e8) vtchi_query_pane_t

0x0178,	// (0x0000f86d) bg_button_pane_cp13

0xac12,	// (0x0001a307) vtchi_button_pane_g1

0x24b8,	// (0x00011bad) ituss_sks_pane_g1

0x24c3,	// (0x00011bb8) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0001f5ef) ituss_sks_pane_g

0xac1a,	// (0x0001a30f) ituss_sks_pane_t1

0xac28,	// (0x0001a31d) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0001f5f4) ituss_sks_pane_t

0x7095,	// (0x0001678a) indicator_nsta_pane_cp_g1

0x709e,	// (0x00016793) indicator_nsta_pane_cp_g2

0x70a6,	// (0x0001679b) indicator_nsta_pane_cp_g3

0x70ae,	// (0x000167a3) indicator_nsta_pane_cp_g4

0x70b6,	// (0x000167ab) indicator_nsta_pane_cp_g5

0x70b6,	// (0x000167ab) indicator_nsta_pane_cp_g6

0x0005,

0xfa9c,	// (0x0001f191) indicator_nsta_pane_cp_g

0xf039,	// (0x0001e72e) cell_graphic2_pane_t2_ParamLimits

0xf039,	// (0x0001e72e) cell_graphic2_pane_t2

0x0001,

0xfdb5,	// (0x0001f4aa) cell_graphic2_pane_t_ParamLimits

0xfdb5,	// (0x0001f4aa) cell_graphic2_pane_t

0xf06f,	// (0x0001e764) cell_graphic2_control_pane_t1

0xd144,	// (0x0001c839) signal_pane_g3_ParamLimits

0xd144,	// (0x0001c839) signal_pane_g3

0xd158,	// (0x0001c84d) signal_pane_g4_ParamLimits

0xd158,	// (0x0001c84d) signal_pane_g4

0xaa17,	// (0x0001a10c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa17,	// (0x0001a10c) cell_ai5_widget_list_row_pane_t3

0xab41,	// (0x0001a236) cell_ituss_key_pane_t1_ParamLimits

0xab41,	// (0x0001a236) cell_ituss_key_pane_t1

0x4ccb,	// (0x000143c0) form_field_data_wide_pane_vc_t2_ParamLimits

0x4ccb,	// (0x000143c0) form_field_data_wide_pane_vc_t2

0x4cdf,	// (0x000143d4) form_field_data_wide_pane_vc_t3_ParamLimits

0x4cdf,	// (0x000143d4) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001eef4) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001eef4) form_field_data_wide_pane_vc_t

0x6d5d,	// (0x00016452) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6d5d,	// (0x00016452) form_field_slider_wide_pane_vc_t3

0x6e3b,	// (0x00016530) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e3b,	// (0x00016530) form_field_popup_wide_pane_vc_t2

0x6e52,	// (0x00016547) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e52,	// (0x00016547) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8b,	// (0x0001f180) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001f180) form_field_popup_wide_pane_vc_t

0xc54e,	// (0x0001bc43) aid_fshwr2_btn_pane_ParamLimits

0xc55f,	// (0x0001bc54) aid_fshwr2_syb_pane_ParamLimits

0xc570,	// (0x0001bc65) aid_fshwr2_txt_pane_ParamLimits

0x1a10,	// (0x00011105) fshwr2_bg_pane_ParamLimits

0xc57c,	// (0x0001bc71) fshwr2_func_candi_pane_ParamLimits

0xc59b,	// (0x0001bc90) fshwr2_hwr_syb_pane_ParamLimits

0xc5b6,	// (0x0001bcab) fshwr2_icf_pane_ParamLimits

0x6cc3,	// (0x000163b8) list_double_graphic_pane_vc_g4_ParamLimits

0x6cc3,	// (0x000163b8) list_double_graphic_pane_vc_g4

0x23ef,	// (0x00011ae4) cell_ituss_key_pane_g3_ParamLimits

0x23ef,	// (0x00011ae4) cell_ituss_key_pane_g3

0x2497,	// (0x00011b8c) cell_ituss_key_t5_ParamLimits

0x2497,	// (0x00011b8c) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
