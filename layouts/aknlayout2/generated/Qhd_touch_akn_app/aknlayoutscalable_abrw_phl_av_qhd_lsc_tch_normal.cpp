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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f785 };

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
0xc6e1,	// (0x0001be66) Screen

0xc6ed,	// (0x0001be72) application_window_ParamLimits

0xc6ed,	// (0x0001be72) application_window

0x24c5,	// (0x00011c4a) screen_g1

0xb611,	// (0x0001ad96) area_bottom_pane_ParamLimits

0xb611,	// (0x0001ad96) area_bottom_pane

0x009c,	// (0x0000f821) area_top_pane_ParamLimits

0x009c,	// (0x0000f821) area_top_pane

0x013a,	// (0x0000f8bf) main_pane_ParamLimits

0x013a,	// (0x0000f8bf) main_pane

0x24cf,	// (0x00011c54) misc_graphics

0xd457,	// (0x0001cbdc) battery_pane_ParamLimits

0xd457,	// (0x0001cbdc) battery_pane

0x5422,	// (0x00014ba7) bg_status_flat_pane_g8

0x542a,	// (0x00014baf) bg_status_flat_pane_g9

0x46f8,	// (0x00013e7d) context_pane_ParamLimits

0x46f8,	// (0x00013e7d) context_pane

0xd5c2,	// (0x0001cd47) navi_pane_ParamLimits

0xd5c2,	// (0x0001cd47) navi_pane

0xd640,	// (0x0001cdc5) signal_pane_ParamLimits

0xd640,	// (0x0001cdc5) signal_pane

0x0008,

0xf86f,	// (0x0001eff4) bg_status_flat_pane_g

0xd6d0,	// (0x0001ce55) status_pane_g1_ParamLimits

0xd6d0,	// (0x0001ce55) status_pane_g1

0xd6e6,	// (0x0001ce6b) status_pane_g2_ParamLimits

0xd6e6,	// (0x0001ce6b) status_pane_g2

0x491f,	// (0x000140a4) status_pane_g3_ParamLimits

0x491f,	// (0x000140a4) status_pane_g3

0x0004,

0xf79b,	// (0x0001ef20) status_pane_g_ParamLimits

0xf79b,	// (0x0001ef20) status_pane_g

0xd6f2,	// (0x0001ce77) title_pane_ParamLimits

0xd6f2,	// (0x0001ce77) title_pane

0xd755,	// (0x0001ceda) uni_indicator_pane_ParamLimits

0xd755,	// (0x0001ceda) uni_indicator_pane

0x454a,	// (0x00013ccf) bg_list_pane_ParamLimits

0x454a,	// (0x00013ccf) bg_list_pane

0xd3a2,	// (0x0001cb27) find_pane

0xb969,	// (0x0001b0ee) listscroll_app_pane_ParamLimits

0xb969,	// (0x0001b0ee) listscroll_app_pane

0x457e,	// (0x00013d03) listscroll_form_pane

0xb979,	// (0x0001b0fe) listscroll_gen_pane_ParamLimits

0xb979,	// (0x0001b0fe) listscroll_gen_pane

0x0a21,	// (0x000101a6) listscroll_set_pane

0x5fd8,	// (0x0001575d) main_idle_act_pane

0x4252,	// (0x000139d7) main_idle_trad_pane

0x4252,	// (0x000139d7) main_list_empty_pane

0x4598,	// (0x00013d1d) main_midp_pane

0x45a4,	// (0x00013d29) main_pane_g1_ParamLimits

0x45a4,	// (0x00013d29) main_pane_g1

0xb98d,	// (0x0001b112) popup_ai_message_window_ParamLimits

0xb98d,	// (0x0001b112) popup_ai_message_window

0xba1e,	// (0x0001b1a3) popup_fep_china_uni_window_ParamLimits

0xba1e,	// (0x0001b1a3) popup_fep_china_uni_window

0x0b39,	// (0x000102be) popup_fep_japan_candidate_window_ParamLimits

0x0b39,	// (0x000102be) popup_fep_japan_candidate_window

0x0b59,	// (0x000102de) popup_fep_japan_predictive_window_ParamLimits

0x0b59,	// (0x000102de) popup_fep_japan_predictive_window

0xba7a,	// (0x0001b1ff) popup_find_window

0xba97,	// (0x0001b21c) popup_grid_graphic_window_ParamLimits

0xba97,	// (0x0001b21c) popup_grid_graphic_window

0x0bc0,	// (0x00010345) popup_large_graphic_colour_window

0xbb35,	// (0x0001b2ba) popup_menu_window_ParamLimits

0xbb35,	// (0x0001b2ba) popup_menu_window

0xbd07,	// (0x0001b48c) popup_note_image_window

0xbccd,	// (0x0001b452) popup_note_wait_window_ParamLimits

0xbccd,	// (0x0001b452) popup_note_wait_window

0xbd1f,	// (0x0001b4a4) popup_note_window_ParamLimits

0xbd1f,	// (0x0001b4a4) popup_note_window

0xbdc5,	// (0x0001b54a) popup_query_code_window_ParamLimits

0xbdc5,	// (0x0001b54a) popup_query_code_window

0x0e08,	// (0x0001058d) popup_query_data_code_window_ParamLimits

0x0e08,	// (0x0001058d) popup_query_data_code_window

0xbdff,	// (0x0001b584) popup_query_data_window_ParamLimits

0xbdff,	// (0x0001b584) popup_query_data_window

0xbe81,	// (0x0001b606) popup_query_sat_info_window_ParamLimits

0xbe81,	// (0x0001b606) popup_query_sat_info_window

0xbf18,	// (0x0001b69d) popup_snote_single_graphic_window_ParamLimits

0xbf18,	// (0x0001b69d) popup_snote_single_graphic_window

0xbf18,	// (0x0001b69d) popup_snote_single_text_window_ParamLimits

0xbf18,	// (0x0001b69d) popup_snote_single_text_window

0x0e8f,	// (0x00010614) popup_sub_window_general

0x0fbf,	// (0x00010744) popup_window_general_ParamLimits

0x0fbf,	// (0x00010744) popup_window_general

0x45ba,	// (0x00013d3f) power_save_pane

0xb7f8,	// (0x0001af7d) control_pane_g1_ParamLimits

0xb7f8,	// (0x0001af7d) control_pane_g1

0xb821,	// (0x0001afa6) control_pane_g2_ParamLimits

0xb821,	// (0x0001afa6) control_pane_g2

0x450d,	// (0x00013c92) control_pane_g3_ParamLimits

0x450d,	// (0x00013c92) control_pane_g3

0x0007,

0xf783,	// (0x0001ef08) control_pane_g_ParamLimits

0xf783,	// (0x0001ef08) control_pane_g

0xb862,	// (0x0001afe7) control_pane_t1_ParamLimits

0xb862,	// (0x0001afe7) control_pane_t1

0xb8c0,	// (0x0001b045) control_pane_t2_ParamLimits

0xb8c0,	// (0x0001b045) control_pane_t2

0x0002,

0xf794,	// (0x0001ef19) control_pane_t_ParamLimits

0xf794,	// (0x0001ef19) control_pane_t

0xd2d4,	// (0x0001ca59) navi_navi_volume_pane_cp1

0xd2dc,	// (0x0001ca61) status_small_icon_pane

0x4442,	// (0x00013bc7) status_small_pane_g1_ParamLimits

0x4442,	// (0x00013bc7) status_small_pane_g1

0xd2e4,	// (0x0001ca69) status_small_pane_g2_ParamLimits

0xd2e4,	// (0x0001ca69) status_small_pane_g2

0xd2f0,	// (0x0001ca75) status_small_pane_g3_ParamLimits

0xd2f0,	// (0x0001ca75) status_small_pane_g3

0xd2fc,	// (0x0001ca81) status_small_pane_g4_ParamLimits

0xd2fc,	// (0x0001ca81) status_small_pane_g4

0xd308,	// (0x0001ca8d) status_small_pane_g5_ParamLimits

0xd308,	// (0x0001ca8d) status_small_pane_g5

0xd316,	// (0x0001ca9b) status_small_pane_g6_ParamLimits

0xd316,	// (0x0001ca9b) status_small_pane_g6

0x0007,

0xf772,	// (0x0001eef7) status_small_pane_g_ParamLimits

0xf772,	// (0x0001eef7) status_small_pane_g

0xd345,	// (0x0001caca) status_small_pane_t1

0xd367,	// (0x0001caec) status_small_wait_pane_ParamLimits

0xd367,	// (0x0001caec) status_small_wait_pane

0xd0ea,	// (0x0001c86f) aid_levels_signal_ParamLimits

0xd0ea,	// (0x0001c86f) aid_levels_signal

0xd102,	// (0x0001c887) signal_pane_g1_ParamLimits

0xd102,	// (0x0001c887) signal_pane_g1

0xd11d,	// (0x0001c8a2) signal_pane_g2_ParamLimits

0xd11d,	// (0x0001c8a2) signal_pane_g2

0x0003,

0xf703,	// (0x0001ee88) signal_pane_g_ParamLimits

0xf703,	// (0x0001ee88) signal_pane_g

0x3c97,	// (0x0001341c) context_pane_g1

0xc6fd,	// (0x0001be82) title_pane_g1

0xc734,	// (0x0001beb9) title_pane_t1

0x2577,	// (0x00011cfc) title_pane_t2

0x259d,	// (0x00011d22) title_pane_t3

0x0002,

0xf557,	// (0x0001ecdc) title_pane_t

0xd77d,	// (0x0001cf02) aid_levels_battery_ParamLimits

0xd77d,	// (0x0001cf02) aid_levels_battery

0xd799,	// (0x0001cf1e) battery_pane_g1_ParamLimits

0xd799,	// (0x0001cf1e) battery_pane_g1

0xd7b6,	// (0x0001cf3b) battery_pane_g2_ParamLimits

0xd7b6,	// (0x0001cf3b) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001ef2b) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001ef2b) battery_pane_g

0xd99c,	// (0x0001d121) uni_indicator_pane_g1

0xd9b2,	// (0x0001d137) uni_indicator_pane_g2

0xd9c8,	// (0x0001d14d) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001f09c) uni_indicator_pane_g

0x40c4,	// (0x00013849) navi_icon_pane_ParamLimits

0x40c4,	// (0x00013849) navi_icon_pane

0x4002,	// (0x00013787) navi_midp_pane

0x40e0,	// (0x00013865) navi_navi_pane

0x40ea,	// (0x0001386f) navi_text_pane_ParamLimits

0x40ea,	// (0x0001386f) navi_text_pane

0x24c5,	// (0x00011c4a) status_small_wait_pane_g1

0x29e6,	// (0x0001216b) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001f097) status_small_wait_pane_g

0x5a89,	// (0x0001520e) navi_navi_icon_text_pane

0x5a91,	// (0x00015216) navi_navi_pane_g1_ParamLimits

0x5a91,	// (0x00015216) navi_navi_pane_g1

0x5aa3,	// (0x00015228) navi_navi_pane_g2_ParamLimits

0x5aa3,	// (0x00015228) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001f065) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001f065) navi_navi_pane_g

0x5ab5,	// (0x0001523a) navi_navi_tabs_pane

0x5abe,	// (0x00015243) navi_navi_text_pane

0x5a89,	// (0x0001520e) navi_navi_volume_pane

0x5a65,	// (0x000151ea) navi_text_pane_t1

0x5a59,	// (0x000151de) navi_icon_pane_g1

0x59ac,	// (0x00015131) navi_navi_text_pane_t1

0x12d7,	// (0x00010a5c) navi_navi_volume_pane_g1

0x12df,	// (0x00010a64) volume_small_pane

0x5912,	// (0x00015097) navi_navi_icon_text_pane_g1

0x591a,	// (0x0001509f) navi_navi_icon_text_pane_t1

0x40e0,	// (0x00013865) navi_tabs_2_long_pane

0x40e0,	// (0x00013865) navi_tabs_2_pane

0x40e0,	// (0x00013865) navi_tabs_3_long_pane

0x40e0,	// (0x00013865) navi_tabs_3_pane

0x40e0,	// (0x00013865) navi_tabs_4_pane

0x12b7,	// (0x00010a3c) tabs_2_active_pane_ParamLimits

0x12b7,	// (0x00010a3c) tabs_2_active_pane

0x12c7,	// (0x00010a4c) tabs_2_passive_pane_ParamLimits

0x12c7,	// (0x00010a4c) tabs_2_passive_pane

0x1285,	// (0x00010a0a) tabs_3_active_pane_ParamLimits

0x1285,	// (0x00010a0a) tabs_3_active_pane

0x1295,	// (0x00010a1a) tabs_3_passive_pane_ParamLimits

0x1295,	// (0x00010a1a) tabs_3_passive_pane

0x12a6,	// (0x00010a2b) tabs_3_passive_pane_cp_ParamLimits

0x12a6,	// (0x00010a2b) tabs_3_passive_pane_cp

0x1241,	// (0x000109c6) tabs_4_active_pane_ParamLimits

0x1241,	// (0x000109c6) tabs_4_active_pane

0x1252,	// (0x000109d7) tabs_4_passive_pane_ParamLimits

0x1252,	// (0x000109d7) tabs_4_passive_pane

0x1263,	// (0x000109e8) tabs_4_passive_pane_cp_ParamLimits

0x1263,	// (0x000109e8) tabs_4_passive_pane_cp

0x1274,	// (0x000109f9) tabs_4_passive_pane_cp2_ParamLimits

0x1274,	// (0x000109f9) tabs_4_passive_pane_cp2

0x121d,	// (0x000109a2) tabs_2_long_active_pane_ParamLimits

0x121d,	// (0x000109a2) tabs_2_long_active_pane

0x122f,	// (0x000109b4) tabs_2_long_passive_pane_ParamLimits

0x122f,	// (0x000109b4) tabs_2_long_passive_pane

0x11de,	// (0x00010963) tabs_3_long_active_pane_ParamLimits

0x11de,	// (0x00010963) tabs_3_long_active_pane

0x11f1,	// (0x00010976) tabs_3_long_passive_pane_ParamLimits

0x11f1,	// (0x00010976) tabs_3_long_passive_pane

0x120a,	// (0x0001098f) tabs_3_long_passive_pane_cp_ParamLimits

0x120a,	// (0x0001098f) tabs_3_long_passive_pane_cp

0x1184,	// (0x00010909) volume_small_pane_g1

0x118d,	// (0x00010912) volume_small_pane_g2

0x1196,	// (0x0001091b) volume_small_pane_g3

0x119f,	// (0x00010924) volume_small_pane_g4

0x11a8,	// (0x0001092d) volume_small_pane_g5

0x11b1,	// (0x00010936) volume_small_pane_g6

0x11ba,	// (0x0001093f) volume_small_pane_g7

0x11c3,	// (0x00010948) volume_small_pane_g8

0x11cc,	// (0x00010951) volume_small_pane_g9

0x11d5,	// (0x0001095a) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001f031) volume_small_pane_g

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp2_ParamLimits

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp2

0x25bd,	// (0x00011d42) tabs_3_active_pane_g1

0xc7c0,	// (0x0001bf45) tabs_3_active_pane_t1

0x2844,	// (0x00011fc9) bg_passive_tab_pane_cp2_ParamLimits

0x2844,	// (0x00011fc9) bg_passive_tab_pane_cp2

0x25bd,	// (0x00011d42) tabs_3_passive_pane_g1

0xc7c0,	// (0x0001bf45) tabs_3_passive_pane_t1

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp3_ParamLimits

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp3

0x25d7,	// (0x00011d5c) tabs_4_active_pane_g1

0xc7d2,	// (0x0001bf57) tabs_4_active_pane_t1

0x2844,	// (0x00011fc9) bg_passive_tab_pane_cp3_ParamLimits

0x2844,	// (0x00011fc9) bg_passive_tab_pane_cp3

0x25d7,	// (0x00011d5c) tabs_4_1_passive_pane_g1

0xc7d2,	// (0x0001bf57) tabs_4_1_passive_pane_t1

0x4598,	// (0x00013d1d) list_highlight_pane_cp2

0xda62,	// (0x0001d1e7) list_set_pane_ParamLimits

0xda62,	// (0x0001d1e7) list_set_pane

0xdafc,	// (0x0001d281) main_pane_set_t1_ParamLimits

0xdafc,	// (0x0001d281) main_pane_set_t1

0xdb1c,	// (0x0001d2a1) main_pane_set_t2_ParamLimits

0xdb1c,	// (0x0001d2a1) main_pane_set_t2

0xdb30,	// (0x0001d2b5) main_pane_set_t3_ParamLimits

0xdb30,	// (0x0001d2b5) main_pane_set_t3

0xdb42,	// (0x0001d2c7) main_pane_set_t4_ParamLimits

0xdb42,	// (0x0001d2c7) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001f101) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001f101) main_pane_set_t

0xdb54,	// (0x0001d2d9) setting_code_pane

0xdb5e,	// (0x0001d2e3) setting_slider_graphic_pane

0xdb5e,	// (0x0001d2e3) setting_slider_pane

0xdb5e,	// (0x0001d2e3) setting_text_pane

0xdb5e,	// (0x0001d2e3) setting_volume_pane

0x0389,	// (0x0000fb0e) volume_set_pane

0x25af,	// (0x00011d34) bg_set_opt_pane_cp

0x0391,	// (0x0000fb16) setting_slider_pane_t1

0x03aa,	// (0x0000fb2f) setting_slider_pane_t2

0x03c4,	// (0x0000fb49) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001ece3) setting_slider_pane_t

0x03dc,	// (0x0000fb61) slider_set_pane

0x24cf,	// (0x00011c54) bg_set_opt_pane_cp2

0x25f1,	// (0x00011d76) setting_slider_graphic_pane_g1

0x03f2,	// (0x0000fb77) setting_slider_graphic_pane_t1

0x0402,	// (0x0000fb87) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001ecea) setting_slider_graphic_pane_t

0x0412,	// (0x0000fb97) slider_set_pane_cp

0x24cf,	// (0x00011c54) input_focus_pane_cp1

0x5fbf,	// (0x00015744) list_set_text_pane

0x24c5,	// (0x00011c4a) setting_text_pane_g1

0x24cf,	// (0x00011c54) input_focus_pane_cp2

0x24c5,	// (0x00011c4a) setting_code_pane_g1

0x25fa,	// (0x00011d7f) setting_code_pane_t1

0x2608,	// (0x00011d8d) set_text_pane_t1_ParamLimits

0x2608,	// (0x00011d8d) set_text_pane_t1

0x34dc,	// (0x00012c61) set_opt_bg_pane_g1

0x34e4,	// (0x00012c69) set_opt_bg_pane_g2

0x5f99,	// (0x0001571e) set_opt_bg_pane_g3

0x34f4,	// (0x00012c79) set_opt_bg_pane_g4

0x34fc,	// (0x00012c81) set_opt_bg_pane_g5

0x3504,	// (0x00012c89) set_opt_bg_pane_g6

0x5fa3,	// (0x00015728) set_opt_bg_pane_g7

0x5fab,	// (0x00015730) set_opt_bg_pane_g8

0x5fb5,	// (0x0001573a) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001f0ee) set_opt_bg_pane_g

0x5f8c,	// (0x00015711) slider_set_pane_g1

0x134c,	// (0x00010ad1) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001f0df) slider_set_pane_g

0x12e8,	// (0x00010a6d) volume_set_pane_g1

0x12f0,	// (0x00010a75) volume_set_pane_g2

0x12f8,	// (0x00010a7d) volume_set_pane_g3

0x1300,	// (0x00010a85) volume_set_pane_g4

0x1308,	// (0x00010a8d) volume_set_pane_g5

0x1310,	// (0x00010a95) volume_set_pane_g6

0x1318,	// (0x00010a9d) volume_set_pane_g7

0x1320,	// (0x00010aa5) volume_set_pane_g8

0x1328,	// (0x00010aad) volume_set_pane_g9

0x1330,	// (0x00010ab5) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001f0b7) volume_set_pane_g

0xc7e4,	// (0x0001bf69) indicator_pane_ParamLimits

0xc7e4,	// (0x0001bf69) indicator_pane

0xc80c,	// (0x0001bf91) main_idle_pane_g2_ParamLimits

0xc80c,	// (0x0001bf91) main_idle_pane_g2

0xc844,	// (0x0001bfc9) main_pane_idle_g1_ParamLimits

0xc844,	// (0x0001bfc9) main_pane_idle_g1

0x2663,	// (0x00011de8) popup_clock_digital_analogue_window_ParamLimits

0x2663,	// (0x00011de8) popup_clock_digital_analogue_window

0xc86b,	// (0x0001bff0) soft_indicator_pane_ParamLimits

0xc86b,	// (0x0001bff0) soft_indicator_pane

0xc885,	// (0x0001c00a) wallpaper_pane_ParamLimits

0xc885,	// (0x0001c00a) wallpaper_pane

0x24c5,	// (0x00011c4a) wallpaper_pane_g1

0xc897,	// (0x0001c01c) indicator_pane_g1_ParamLimits

0xc897,	// (0x0001c01c) indicator_pane_g1

0x648c,	// (0x00015c11) navi_navi_icon_text_pane_srt_g1

0x26b5,	// (0x00011e3a) soft_indicator_pane_t1

0x26cf,	// (0x00011e54) aid_ps_area_pane

0xc8ad,	// (0x0001c032) aid_ps_clock_pane

0x26ee,	// (0x00011e73) aid_ps_indicator_pane

0x26fa,	// (0x00011e7f) indicator_ps_pane_ParamLimits

0x26fa,	// (0x00011e7f) indicator_ps_pane

0x2709,	// (0x00011e8e) power_save_pane_g1_ParamLimits

0x2709,	// (0x00011e8e) power_save_pane_g1

0x2715,	// (0x00011e9a) power_save_pane_g2_ParamLimits

0x2715,	// (0x00011e9a) power_save_pane_g2

0xf52e,	// (0x0001ecb3) aid_navinavi_width_pane

0x26cf,	// (0x00011e54) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001ecef) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001ecef) power_save_pane_g

0x2723,	// (0x00011ea8) power_save_pane_t1_ParamLimits

0x2723,	// (0x00011ea8) power_save_pane_t1

0xc8ad,	// (0x0001c032) aid_ps_clock_pane_ParamLimits

0x26ee,	// (0x00011e73) aid_ps_indicator_pane_ParamLimits

0x2735,	// (0x00011eba) power_save_pane_t4_ParamLimits

0x2735,	// (0x00011eba) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001ecf4) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001ecf4) power_save_pane_t

0x275f,	// (0x00011ee4) power_save_t3_ParamLimits

0x275f,	// (0x00011ee4) power_save_t3

0x274a,	// (0x00011ecf) power_save_t2_ParamLimits

0x274a,	// (0x00011ecf) power_save_t2

0x2774,	// (0x00011ef9) indicator_ps_pane_g1

0xc8bb,	// (0x0001c040) ai_gene_pane_ParamLimits

0xc8bb,	// (0x0001c040) ai_gene_pane

0xc8d2,	// (0x0001c057) ai_links_pane_ParamLimits

0xc8d2,	// (0x0001c057) ai_links_pane

0xc8ea,	// (0x0001c06f) indicator_pane_cp1_ParamLimits

0xc8ea,	// (0x0001c06f) indicator_pane_cp1

0xc8f9,	// (0x0001c07e) main_pane_idle_g1_cp_ParamLimits

0xc8f9,	// (0x0001c07e) main_pane_idle_g1_cp

0x27ad,	// (0x00011f32) popup_ai_links_title_window

0xc911,	// (0x0001c096) soft_indicator_pane_cp1_ParamLimits

0xc911,	// (0x0001c096) soft_indicator_pane_cp1

0x5d52,	// (0x000154d7) ai_links_pane_g1

0x5d5b,	// (0x000154e0) grid_ai_links_pane

0xd993,	// (0x0001d118) ai_gene_pane_1

0x5d40,	// (0x000154c5) ai_gene_pane_2

0x5d49,	// (0x000154ce) list_highlight_pane_cp4

0xd96f,	// (0x0001d0f4) cell_ai_link_pane_ParamLimits

0xd96f,	// (0x0001d0f4) cell_ai_link_pane

0x5d11,	// (0x00015496) cell_ai_link_pane_g1

0x29e6,	// (0x0001216b) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001f092) cell_ai_link_pane_g

0x24cf,	// (0x00011c54) grid_highlight_cp2

0x24cf,	// (0x00011c54) bg_popup_sub_pane_cp1

0x27d0,	// (0x00011f55) popup_ai_links_title_window_t1

0x5c5f,	// (0x000153e4) ai_gene_pane_1_g1_ParamLimits

0x5c5f,	// (0x000153e4) ai_gene_pane_1_g1

0x5c6b,	// (0x000153f0) ai_gene_pane_1_g2_ParamLimits

0x5c6b,	// (0x000153f0) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001f088) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001f088) ai_gene_pane_1_g

0x5c78,	// (0x000153fd) ai_gene_pane_1_t1_ParamLimits

0x5c78,	// (0x000153fd) ai_gene_pane_1_t1

0x5cac,	// (0x00015431) grid_ai_soft_ind_pane

0x5c4a,	// (0x000153cf) ai_gene_pane_2_t1_ParamLimits

0x5c4a,	// (0x000153cf) ai_gene_pane_2_t1

0xc925,	// (0x0001c0aa) main_pane_empty_t1_ParamLimits

0xc925,	// (0x0001c0aa) main_pane_empty_t1

0xc93d,	// (0x0001c0c2) main_pane_empty_t2_ParamLimits

0xc93d,	// (0x0001c0c2) main_pane_empty_t2

0xc952,	// (0x0001c0d7) main_pane_empty_t3_ParamLimits

0xc952,	// (0x0001c0d7) main_pane_empty_t3

0xc964,	// (0x0001c0e9) main_pane_empty_t4_ParamLimits

0xc964,	// (0x0001c0e9) main_pane_empty_t4

0xc976,	// (0x0001c0fb) main_pane_empty_t5_ParamLimits

0xc976,	// (0x0001c0fb) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001ecf9) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001ecf9) main_pane_empty_t

0x35d9,	// (0x00012d5e) bg_popup_window_pane_ParamLimits

0x35d9,	// (0x00012d5e) bg_popup_window_pane

0x59ba,	// (0x0001513f) find_popup_pane_cp2_ParamLimits

0x59ba,	// (0x0001513f) find_popup_pane_cp2

0x59c6,	// (0x0001514b) heading_pane_ParamLimits

0x59c6,	// (0x0001514b) heading_pane

0x24cf,	// (0x00011c54) bg_popup_sub_pane

0xd8f0,	// (0x0001d075) bg_popup_window_pane_g1_ParamLimits

0xd8f0,	// (0x0001d075) bg_popup_window_pane_g1

0xd8ff,	// (0x0001d084) bg_popup_window_pane_g2_ParamLimits

0xd8ff,	// (0x0001d084) bg_popup_window_pane_g2

0xd90b,	// (0x0001d090) bg_popup_window_pane_g3_ParamLimits

0xd90b,	// (0x0001d090) bg_popup_window_pane_g3

0xd917,	// (0x0001d09c) bg_popup_window_pane_g4_ParamLimits

0xd917,	// (0x0001d09c) bg_popup_window_pane_g4

0xd926,	// (0x0001d0ab) bg_popup_window_pane_g5_ParamLimits

0xd926,	// (0x0001d0ab) bg_popup_window_pane_g5

0xd936,	// (0x0001d0bb) bg_popup_window_pane_g6_ParamLimits

0xd936,	// (0x0001d0bb) bg_popup_window_pane_g6

0xd942,	// (0x0001d0c7) bg_popup_window_pane_g7_ParamLimits

0xd942,	// (0x0001d0c7) bg_popup_window_pane_g7

0xd951,	// (0x0001d0d6) bg_popup_window_pane_g8_ParamLimits

0xd951,	// (0x0001d0d6) bg_popup_window_pane_g8

0xd960,	// (0x0001d0e5) bg_popup_window_pane_g9_ParamLimits

0xd960,	// (0x0001d0e5) bg_popup_window_pane_g9

0x59a0,	// (0x00015125) bg_popup_window_pane_g10_ParamLimits

0x59a0,	// (0x00015125) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001f050) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001f050) bg_popup_window_pane_g

0x58c9,	// (0x0001504e) bg_popup_heading_pane_ParamLimits

0x58c9,	// (0x0001504e) bg_popup_heading_pane

0x13d4,	// (0x00010b59) tabs_4_passive_pane_cp_srt_ParamLimits

0x13d4,	// (0x00010b59) tabs_4_passive_pane_cp_srt

0x13e6,	// (0x00010b6b) tabs_4_passive_pane_srt_ParamLimits

0x58dd,	// (0x00015062) heading_pane_g2

0x13e6,	// (0x00010b6b) tabs_4_passive_pane_srt

0x4c06,	// (0x0001438b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4c06,	// (0x0001438b) bg_passive_tab_pane_cp3_srt

0x58e5,	// (0x0001506a) heading_pane_t1_ParamLimits

0x58e5,	// (0x0001506a) heading_pane_t1

0x58fc,	// (0x00015081) heading_pane_t2_ParamLimits

0x58fc,	// (0x00015081) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001f04b) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001f04b) heading_pane_t

0x53ea,	// (0x00014b6f) bg_popup_heading_pane_g1

0x5499,	// (0x00014c1e) bg_popup_heading_pane_g2

0x54a3,	// (0x00014c28) bg_popup_heading_pane_g3

0x54ad,	// (0x00014c32) bg_popup_heading_pane_g4

0x54b7,	// (0x00014c3c) bg_popup_heading_pane_g5

0x54c1,	// (0x00014c46) bg_popup_heading_pane_g6

0x54c9,	// (0x00014c4e) bg_popup_heading_pane_g7

0x54d1,	// (0x00014c56) bg_popup_heading_pane_g8

0x54db,	// (0x00014c60) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001f007) bg_popup_heading_pane_g

0x4ad8,	// (0x0001425d) bg_popup_sub_pane_g1

0x4ae8,	// (0x0001426d) bg_popup_sub_pane_g2

0x4ae0,	// (0x00014265) bg_popup_sub_pane_g3

0x4af8,	// (0x0001427d) bg_popup_sub_pane_g4

0x4af0,	// (0x00014275) bg_popup_sub_pane_g5

0x4b00,	// (0x00014285) bg_popup_sub_pane_g6

0x4b08,	// (0x0001428d) bg_popup_sub_pane_g7

0x4b18,	// (0x0001429d) bg_popup_sub_pane_g8

0x4b10,	// (0x00014295) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001efe1) bg_popup_sub_pane_g

0x2844,	// (0x00011fc9) bg_popup_window_pane_cp5_ParamLimits

0x2844,	// (0x00011fc9) bg_popup_window_pane_cp5

0x2860,	// (0x00011fe5) popup_note_window_g1_ParamLimits

0x2860,	// (0x00011fe5) popup_note_window_g1

0x286c,	// (0x00011ff1) popup_note_window_t1_ParamLimits

0x286c,	// (0x00011ff1) popup_note_window_t1

0x2882,	// (0x00012007) popup_note_window_t2_ParamLimits

0x2882,	// (0x00012007) popup_note_window_t2

0x2898,	// (0x0001201d) popup_note_window_t3_ParamLimits

0x2898,	// (0x0001201d) popup_note_window_t3

0x28ae,	// (0x00012033) popup_note_window_t4_ParamLimits

0x28ae,	// (0x00012033) popup_note_window_t4

0x28d6,	// (0x0001205b) popup_note_window_t5_ParamLimits

0x28d6,	// (0x0001205b) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001ed04) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001ed04) popup_note_window_t

0x28fa,	// (0x0001207f) bg_popup_window_pane_cp6_ParamLimits

0x28fa,	// (0x0001207f) bg_popup_window_pane_cp6

0x5366,	// (0x00014aeb) popup_note_image_window_g1_ParamLimits

0x5366,	// (0x00014aeb) popup_note_image_window_g1

0x5372,	// (0x00014af7) popup_note_image_window_g2_ParamLimits

0x5372,	// (0x00014af7) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001efd5) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001efd5) popup_note_image_window_g

0x538b,	// (0x00014b10) popup_note_image_window_t1_ParamLimits

0x538b,	// (0x00014b10) popup_note_image_window_t1

0x53a4,	// (0x00014b29) popup_note_image_window_t2_ParamLimits

0x53a4,	// (0x00014b29) popup_note_image_window_t2

0x53bd,	// (0x00014b42) popup_note_image_window_t3_ParamLimits

0x53bd,	// (0x00014b42) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001efda) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001efda) popup_note_image_window_t

0x5227,	// (0x000149ac) bg_popup_window_pane_cp7_ParamLimits

0x5227,	// (0x000149ac) bg_popup_window_pane_cp7

0x5257,	// (0x000149dc) popup_note_wait_window_g1_ParamLimits

0x5257,	// (0x000149dc) popup_note_wait_window_g1

0x5263,	// (0x000149e8) popup_note_wait_window_g2_ParamLimits

0x5263,	// (0x000149e8) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001efc3) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001efc3) popup_note_wait_window_g

0x527b,	// (0x00014a00) popup_note_wait_window_t1_ParamLimits

0x527b,	// (0x00014a00) popup_note_wait_window_t1

0x52a2,	// (0x00014a27) popup_note_wait_window_t2_ParamLimits

0x52a2,	// (0x00014a27) popup_note_wait_window_t2

0x52bf,	// (0x00014a44) popup_note_wait_window_t3_ParamLimits

0x52bf,	// (0x00014a44) popup_note_wait_window_t3

0x52d2,	// (0x00014a57) popup_note_wait_window_t4_ParamLimits

0x52d2,	// (0x00014a57) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001efca) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001efca) popup_note_wait_window_t

0x52f7,	// (0x00014a7c) wait_bar_pane_ParamLimits

0x52f7,	// (0x00014a7c) wait_bar_pane

0x24cf,	// (0x00011c54) wait_anim_pane

0x24cf,	// (0x00011c54) wait_border_pane

0x24c5,	// (0x00011c4a) wait_anim_pane_g1

0x24c5,	// (0x00011c4a) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001ee83) wait_anim_pane_g

0x51cb,	// (0x00014950) wait_border_pane_g1

0x51d6,	// (0x0001495b) wait_border_pane_g2

0x51df,	// (0x00014964) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001efbc) wait_border_pane_g

0x5036,	// (0x000147bb) bg_popup_window_pane_cp16_ParamLimits

0x5036,	// (0x000147bb) bg_popup_window_pane_cp16

0x5136,	// (0x000148bb) indicator_popup_pane_cp4_ParamLimits

0x5136,	// (0x000148bb) indicator_popup_pane_cp4

0x514a,	// (0x000148cf) popup_query_data_window_t1_ParamLimits

0x514a,	// (0x000148cf) popup_query_data_window_t1

0x515c,	// (0x000148e1) popup_query_data_window_t2_ParamLimits

0x515c,	// (0x000148e1) popup_query_data_window_t2

0x5175,	// (0x000148fa) popup_query_data_window_t3_ParamLimits

0x5175,	// (0x000148fa) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001efb5) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001efb5) popup_query_data_window_t

0x518f,	// (0x00014914) query_popup_data_pane_ParamLimits

0x518f,	// (0x00014914) query_popup_data_pane

0x51a3,	// (0x00014928) query_popup_data_pane_cp1_ParamLimits

0x51a3,	// (0x00014928) query_popup_data_pane_cp1

0x5036,	// (0x000147bb) bg_popup_window_pane_cp10_ParamLimits

0x5036,	// (0x000147bb) bg_popup_window_pane_cp10

0x5068,	// (0x000147ed) indicator_popup_pane_ParamLimits

0x5068,	// (0x000147ed) indicator_popup_pane

0x508a,	// (0x0001480f) popup_query_code_window_t1_ParamLimits

0x508a,	// (0x0001480f) popup_query_code_window_t1

0x50a4,	// (0x00014829) popup_query_code_window_t2_ParamLimits

0x50a4,	// (0x00014829) popup_query_code_window_t2

0x50ed,	// (0x00014872) popup_query_code_window_t3_ParamLimits

0x50ed,	// (0x00014872) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001efae) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001efae) popup_query_code_window_t

0x511c,	// (0x000148a1) query_popup_pane_ParamLimits

0x511c,	// (0x000148a1) query_popup_pane

0x28fa,	// (0x0001207f) bg_popup_window_pane_cp15_ParamLimits

0x28fa,	// (0x0001207f) bg_popup_window_pane_cp15

0x2918,	// (0x0001209d) indicator_popup_pane_cp1_ParamLimits

0x2918,	// (0x0001209d) indicator_popup_pane_cp1

0x292b,	// (0x000120b0) indicator_popup_pane_cp2_ParamLimits

0x292b,	// (0x000120b0) indicator_popup_pane_cp2

0x293e,	// (0x000120c3) popup_query_data_code_window_g1_ParamLimits

0x293e,	// (0x000120c3) popup_query_data_code_window_g1

0x2951,	// (0x000120d6) popup_query_data_code_window_t1_ParamLimits

0x2951,	// (0x000120d6) popup_query_data_code_window_t1

0x2963,	// (0x000120e8) popup_query_data_code_window_t2_ParamLimits

0x2963,	// (0x000120e8) popup_query_data_code_window_t2

0x2975,	// (0x000120fa) popup_query_data_code_window_t3_ParamLimits

0x2975,	// (0x000120fa) popup_query_data_code_window_t3

0x298b,	// (0x00012110) popup_query_data_code_window_t4_ParamLimits

0x298b,	// (0x00012110) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001ed0f) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001ed0f) popup_query_data_code_window_t

0x1095,	// (0x0001081a) list_single_midp_graphic_pane_g3

0x29a3,	// (0x00012128) query_popup_data_pane_cp2_ParamLimits

0x29b6,	// (0x0001213b) query_popup_pane_cp2_ParamLimits

0x29b6,	// (0x0001213b) query_popup_pane_cp2

0x24cf,	// (0x00011c54) bg_popup_window_pane_cp11

0x502e,	// (0x000147b3) heading_pane_cp5

0x2aa1,	// (0x00012226) listscroll_popup_info_pane

0x24cf,	// (0x00011c54) input_focus_pane_cp3

0x29c9,	// (0x0001214e) query_popup_pane_t1

0x29d7,	// (0x0001215c) list_popup_info_pane_ParamLimits

0x29d7,	// (0x0001215c) list_popup_info_pane

0x29e6,	// (0x0001216b) listscroll_popup_info_pane_g1

0x29ee,	// (0x00012173) scroll_pane_cp7

0x29f8,	// (0x0001217d) popup_info_list_pane_t1_ParamLimits

0x29f8,	// (0x0001217d) popup_info_list_pane_t1

0x2a12,	// (0x00012197) popup_info_list_pane_t2_ParamLimits

0x2a12,	// (0x00012197) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001ed18) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001ed18) popup_info_list_pane_t

0x24cf,	// (0x00011c54) bg_popup_window_pane_cp12

0x64a6,	// (0x00015c2b) find_popup_pane

0x25af,	// (0x00011d34) bg_popup_window_pane_cp3

0x2a2c,	// (0x000121b1) heading_pane_cp3

0x2a38,	// (0x000121bd) listscroll_popup_graphic_pane

0x24cf,	// (0x00011c54) bg_popup_window_pane_cp4

0xc9d8,	// (0x0001c15d) heading_pane_cp4

0x2aa1,	// (0x00012226) listscroll_popup_colour_pane

0x2aa9,	// (0x0001222e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2aa9,	// (0x0001222e) cell_large_graphic_colour_none_popup_pane

0xc9e0,	// (0x0001c165) grid_large_graphic_colour_popup_pane_ParamLimits

0xc9e0,	// (0x0001c165) grid_large_graphic_colour_popup_pane

0x2ae9,	// (0x0001226e) listscroll_popup_colour_pane_g1_ParamLimits

0x2ae9,	// (0x0001226e) listscroll_popup_colour_pane_g1

0x2b00,	// (0x00012285) listscroll_popup_colour_pane_g2_ParamLimits

0x2b00,	// (0x00012285) listscroll_popup_colour_pane_g2

0x2b17,	// (0x0001229c) listscroll_popup_colour_pane_g3_ParamLimits

0x2b17,	// (0x0001229c) listscroll_popup_colour_pane_g3

0xca04,	// (0x0001c189) listscroll_popup_colour_pane_g4_ParamLimits

0xca04,	// (0x0001c189) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001ed1d) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001ed1d) listscroll_popup_colour_pane_g

0x2b3b,	// (0x000122c0) scroll_pane_cp6_ParamLimits

0x2b3b,	// (0x000122c0) scroll_pane_cp6

0xca14,	// (0x0001c199) cell_large_graphic_colour_popup_pane_ParamLimits

0xca14,	// (0x0001c199) cell_large_graphic_colour_popup_pane

0x2b6c,	// (0x000122f1) cell_large_graphic_colour_none_popup_pane_t1

0x24cf,	// (0x00011c54) grid_highlight_pane_cp5

0x2b7b,	// (0x00012300) cell_large_graphic_colour_popup_pane_g1

0x2b83,	// (0x00012308) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001ed26) cell_large_graphic_colour_popup_pane_g

0x2b8b,	// (0x00012310) cell_large_graphic_colour_popup_pane_g2_copy1

0x2b94,	// (0x00012319) grid_highlight_pane_cp4

0x2b9c,	// (0x00012321) bg_popup_window_pane_cp8_ParamLimits

0x2b9c,	// (0x00012321) bg_popup_window_pane_cp8

0x2bb7,	// (0x0001233c) popup_snote_single_text_window_g1_ParamLimits

0x2bb7,	// (0x0001233c) popup_snote_single_text_window_g1

0x2bc9,	// (0x0001234e) popup_snote_single_text_window_t1_ParamLimits

0x2bc9,	// (0x0001234e) popup_snote_single_text_window_t1

0x2bdc,	// (0x00012361) popup_snote_single_text_window_t2_ParamLimits

0x2bdc,	// (0x00012361) popup_snote_single_text_window_t2

0x2bef,	// (0x00012374) popup_snote_single_text_window_t3_ParamLimits

0x2bef,	// (0x00012374) popup_snote_single_text_window_t3

0x2c28,	// (0x000123ad) popup_snote_single_text_window_t4_ParamLimits

0x2c28,	// (0x000123ad) popup_snote_single_text_window_t4

0x2c5c,	// (0x000123e1) popup_snote_single_text_window_t5_ParamLimits

0x2c5c,	// (0x000123e1) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001ed2b) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001ed2b) popup_snote_single_text_window_t

0x2c8b,	// (0x00012410) bg_popup_window_pane_cp9_ParamLimits

0x2c8b,	// (0x00012410) bg_popup_window_pane_cp9

0x2bb7,	// (0x0001233c) popup_snote_single_graphic_window_g1_ParamLimits

0x2bb7,	// (0x0001233c) popup_snote_single_graphic_window_g1

0x2c99,	// (0x0001241e) popup_snote_single_graphic_window_g2_ParamLimits

0x2c99,	// (0x0001241e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001ed36) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001ed36) popup_snote_single_graphic_window_g

0x2ca5,	// (0x0001242a) popup_snote_single_graphic_window_t1_ParamLimits

0x2ca5,	// (0x0001242a) popup_snote_single_graphic_window_t1

0x2cb8,	// (0x0001243d) popup_snote_single_graphic_window_t2_ParamLimits

0x2cb8,	// (0x0001243d) popup_snote_single_graphic_window_t2

0x2ccb,	// (0x00012450) popup_snote_single_graphic_window_t3_ParamLimits

0x2ccb,	// (0x00012450) popup_snote_single_graphic_window_t3

0x2d04,	// (0x00012489) popup_snote_single_graphic_window_t4_ParamLimits

0x2d04,	// (0x00012489) popup_snote_single_graphic_window_t4

0x2d38,	// (0x000124bd) popup_snote_single_graphic_window_t5_ParamLimits

0x2d38,	// (0x000124bd) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001ed3b) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001ed3b) popup_snote_single_graphic_window_t

0x63ea,	// (0x00015b6f) grid_graphic_popup_pane_ParamLimits

0x63ea,	// (0x00015b6f) grid_graphic_popup_pane

0x6412,	// (0x00015b97) listscroll_popup_graphic_pane_g1_ParamLimits

0x6412,	// (0x00015b97) listscroll_popup_graphic_pane_g1

0xdc94,	// (0x0001d419) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc94,	// (0x0001d419) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001f12b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001f12b) listscroll_popup_graphic_pane_g

0x643a,	// (0x00015bbf) scroll_pane_cp5

0xdc50,	// (0x0001d3d5) cell_graphic_popup_pane_ParamLimits

0xdc50,	// (0x0001d3d5) cell_graphic_popup_pane

0x6368,	// (0x00015aed) cell_graphic_popup_pane_g1

0x6370,	// (0x00015af5) cell_graphic_popup_pane_g2

0x2b8b,	// (0x00012310) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001f124) cell_graphic_popup_pane_g

0x6379,	// (0x00015afe) cell_graphic_popup_pane_t2

0x2b94,	// (0x00012319) grid_highlight_pane_cp3

0x2d79,	// (0x000124fe) list_gen_pane_ParamLimits

0x2d79,	// (0x000124fe) list_gen_pane

0x2dab,	// (0x00012530) scroll_pane

0xdc07,	// (0x0001d38c) bg_list_pane_g1_ParamLimits

0xdc07,	// (0x0001d38c) bg_list_pane_g1

0x62dd,	// (0x00015a62) bg_list_pane_g2_ParamLimits

0x62dd,	// (0x00015a62) bg_list_pane_g2

0x62f2,	// (0x00015a77) bg_list_pane_g3_ParamLimits

0x62f2,	// (0x00015a77) bg_list_pane_g3

0x6306,	// (0x00015a8b) bg_list_pane_g4_ParamLimits

0x6306,	// (0x00015a8b) bg_list_pane_g4

0xdc24,	// (0x0001d3a9) bg_list_pane_g5_ParamLimits

0xdc24,	// (0x0001d3a9) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001f119) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001f119) bg_list_pane_g

0xdbad,	// (0x0001d332) list_double2_graphic_large_graphic_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double2_graphic_large_graphic_pane

0xdbad,	// (0x0001d332) list_double2_graphic_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double2_graphic_pane

0xdbad,	// (0x0001d332) list_double2_large_graphic_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double2_large_graphic_pane

0xdbad,	// (0x0001d332) list_double2_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double2_pane

0xdbad,	// (0x0001d332) list_double_graphic_heading_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double_graphic_heading_pane

0xdbad,	// (0x0001d332) list_double_graphic_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double_graphic_pane

0xdbad,	// (0x0001d332) list_double_heading_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double_heading_pane

0xdbad,	// (0x0001d332) list_double_large_graphic_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double_large_graphic_pane

0xdbad,	// (0x0001d332) list_double_number_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double_number_pane

0xdbad,	// (0x0001d332) list_double_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double_pane

0xdbad,	// (0x0001d332) list_double_time_pane_ParamLimits

0xdbad,	// (0x0001d332) list_double_time_pane

0xdbad,	// (0x0001d332) list_setting_number_pane_ParamLimits

0xdbad,	// (0x0001d332) list_setting_number_pane

0xdbad,	// (0x0001d332) list_setting_pane_ParamLimits

0xdbad,	// (0x0001d332) list_setting_pane

0xdbbf,	// (0x0001d344) list_single_2graphic_pane_ParamLimits

0xdbbf,	// (0x0001d344) list_single_2graphic_pane

0xdbbf,	// (0x0001d344) list_single_graphic_heading_pane_ParamLimits

0xdbbf,	// (0x0001d344) list_single_graphic_heading_pane

0xdbbf,	// (0x0001d344) list_single_graphic_pane_ParamLimits

0xdbbf,	// (0x0001d344) list_single_graphic_pane

0xdbbf,	// (0x0001d344) list_single_heading_pane_ParamLimits

0xdbbf,	// (0x0001d344) list_single_heading_pane

0xdbbf,	// (0x0001d344) list_single_large_graphic_pane_ParamLimits

0xdbbf,	// (0x0001d344) list_single_large_graphic_pane

0xdbbf,	// (0x0001d344) list_single_number_heading_pane_ParamLimits

0xdbbf,	// (0x0001d344) list_single_number_heading_pane

0xdbbf,	// (0x0001d344) list_single_number_pane_ParamLimits

0xdbbf,	// (0x0001d344) list_single_number_pane

0xdbbf,	// (0x0001d344) list_single_pane_ParamLimits

0xdbbf,	// (0x0001d344) list_single_pane

0x24cf,	// (0x00011c54) list_highlight_pane_cp1

0x418b,	// (0x00013910) list_single_pane_g1_ParamLimits

0x418b,	// (0x00013910) list_single_pane_g1

0x4a5a,	// (0x000141df) list_single_pane_g2_ParamLimits

0x4a5a,	// (0x000141df) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001ed4d) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001ed4d) list_single_pane_g

0x6a9c,	// (0x00016221) list_single_pane_t1_ParamLimits

0x6a9c,	// (0x00016221) list_single_pane_t1

0x418b,	// (0x00013910) list_single_number_pane_g1_ParamLimits

0x418b,	// (0x00013910) list_single_number_pane_g1

0x4a5a,	// (0x000141df) list_single_number_pane_g2_ParamLimits

0x4a5a,	// (0x000141df) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001ed4d) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001ed4d) list_single_number_pane_g

0x4a66,	// (0x000141eb) list_single_number_pane_t1_ParamLimits

0x4a66,	// (0x000141eb) list_single_number_pane_t1

0xd9fe,	// (0x0001d183) list_single_number_pane_t2_ParamLimits

0xd9fe,	// (0x0001d183) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001f0da) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001f0da) list_single_number_pane_t

0xca3d,	// (0x0001c1c2) list_single_graphic_pane_g1_ParamLimits

0xca3d,	// (0x0001c1c2) list_single_graphic_pane_g1

0x418b,	// (0x00013910) list_single_graphic_pane_g2_ParamLimits

0x418b,	// (0x00013910) list_single_graphic_pane_g2

0x4a5a,	// (0x000141df) list_single_graphic_pane_g3_ParamLimits

0x4a5a,	// (0x000141df) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001ed46) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001ed46) list_single_graphic_pane_g

0xca49,	// (0x0001c1ce) list_single_graphic_pane_t1_ParamLimits

0xca49,	// (0x0001c1ce) list_single_graphic_pane_t1

0x418b,	// (0x00013910) list_single_heading_pane_g1_ParamLimits

0x418b,	// (0x00013910) list_single_heading_pane_g1

0x4a5a,	// (0x000141df) list_single_heading_pane_g2_ParamLimits

0x4a5a,	// (0x000141df) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ed4d) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ed4d) list_single_heading_pane_g

0xca5f,	// (0x0001c1e4) list_single_heading_pane_t1_ParamLimits

0xca5f,	// (0x0001c1e4) list_single_heading_pane_t1

0xca75,	// (0x0001c1fa) list_single_heading_pane_t2_ParamLimits

0xca75,	// (0x0001c1fa) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001ed52) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001ed52) list_single_heading_pane_t

0x418b,	// (0x00013910) list_single_number_heading_pane_g1_ParamLimits

0x418b,	// (0x00013910) list_single_number_heading_pane_g1

0x4a5a,	// (0x000141df) list_single_number_heading_pane_g2_ParamLimits

0x4a5a,	// (0x000141df) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ed4d) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ed4d) list_single_number_heading_pane_g

0xca5f,	// (0x0001c1e4) list_single_number_heading_pane_t1_ParamLimits

0xca5f,	// (0x0001c1e4) list_single_number_heading_pane_t1

0xca87,	// (0x0001c20c) list_single_number_heading_pane_t2_ParamLimits

0xca87,	// (0x0001c20c) list_single_number_heading_pane_t2

0x6a76,	// (0x000161fb) list_single_number_heading_pane_t3_ParamLimits

0x6a76,	// (0x000161fb) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001ed57) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001ed57) list_single_number_heading_pane_t

0x4a4e,	// (0x000141d3) list_single_graphic_heading_pane_g1_ParamLimits

0x4a4e,	// (0x000141d3) list_single_graphic_heading_pane_g1

0xca99,	// (0x0001c21e) list_single_graphic_heading_pane_g4_ParamLimits

0xca99,	// (0x0001c21e) list_single_graphic_heading_pane_g4

0x4a5a,	// (0x000141df) list_single_graphic_heading_pane_g5_ParamLimits

0x4a5a,	// (0x000141df) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001ed5e) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001ed5e) list_single_graphic_heading_pane_g

0xca5f,	// (0x0001c1e4) list_single_graphic_heading_pane_t1_ParamLimits

0xca5f,	// (0x0001c1e4) list_single_graphic_heading_pane_t1

0xcaaa,	// (0x0001c22f) list_single_graphic_heading_pane_t2_ParamLimits

0xcaaa,	// (0x0001c22f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001ed65) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001ed65) list_single_graphic_heading_pane_t

0x6ab2,	// (0x00016237) list_single_large_graphic_pane_g1_ParamLimits

0x6ab2,	// (0x00016237) list_single_large_graphic_pane_g1

0x418b,	// (0x00013910) list_single_large_graphic_pane_g2_ParamLimits

0x418b,	// (0x00013910) list_single_large_graphic_pane_g2

0x4a5a,	// (0x000141df) list_single_large_graphic_pane_g3_ParamLimits

0x4a5a,	// (0x000141df) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001ed6a) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001ed6a) list_single_large_graphic_pane_g

0x51d6,	// (0x0001495b) wait_border_pane_g2_copy1

0xcabc,	// (0x0001c241) list_single_large_graphic_pane_g4_cp2

0x6abe,	// (0x00016243) list_single_large_graphic_pane_t1_ParamLimits

0x6abe,	// (0x00016243) list_single_large_graphic_pane_t1

0x582f,	// (0x00014fb4) list_double_pane_g1_ParamLimits

0x582f,	// (0x00014fb4) list_double_pane_g1

0xcac4,	// (0x0001c249) list_double_pane_g2_ParamLimits

0xcac4,	// (0x0001c249) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001ed71) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001ed71) list_double_pane_g

0x8373,	// (0x00017af8) list_double_pane_t1_ParamLimits

0x8373,	// (0x00017af8) list_double_pane_t1

0xcad0,	// (0x0001c255) list_double_pane_t2_ParamLimits

0xcad0,	// (0x0001c255) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001ed76) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001ed76) list_double_pane_t

0xcae2,	// (0x0001c267) list_double2_pane_g1_ParamLimits

0xcae2,	// (0x0001c267) list_double2_pane_g1

0xcaf3,	// (0x0001c278) list_double2_pane_g2_ParamLimits

0xcaf3,	// (0x0001c278) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001ed7b) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001ed7b) list_double2_pane_g

0xcaff,	// (0x0001c284) list_double2_pane_t1_ParamLimits

0xcaff,	// (0x0001c284) list_double2_pane_t1

0xcb15,	// (0x0001c29a) list_double2_pane_t2_ParamLimits

0xcb15,	// (0x0001c29a) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001ed80) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001ed80) list_double2_pane_t

0x582f,	// (0x00014fb4) list_double_number_pane_g1_ParamLimits

0x582f,	// (0x00014fb4) list_double_number_pane_g1

0xcac4,	// (0x0001c249) list_double_number_pane_g2_ParamLimits

0xcac4,	// (0x0001c249) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001ed71) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001ed71) list_double_number_pane_g

0xcb27,	// (0x0001c2ac) list_double_number_pane_t1_ParamLimits

0xcb27,	// (0x0001c2ac) list_double_number_pane_t1

0xcb39,	// (0x0001c2be) list_double_number_pane_t2_ParamLimits

0xcb39,	// (0x0001c2be) list_double_number_pane_t2

0xcb4f,	// (0x0001c2d4) list_double_number_pane_t3_ParamLimits

0xcb4f,	// (0x0001c2d4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001ed85) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001ed85) list_double_number_pane_t

0xcb61,	// (0x0001c2e6) list_double_graphic_pane_g1_ParamLimits

0xcb61,	// (0x0001c2e6) list_double_graphic_pane_g1

0xcb6d,	// (0x0001c2f2) list_double_graphic_pane_g2_ParamLimits

0xcb6d,	// (0x0001c2f2) list_double_graphic_pane_g2

0xcb7c,	// (0x0001c301) list_double_graphic_pane_g3_ParamLimits

0xcb7c,	// (0x0001c301) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001ed8c) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001ed8c) list_double_graphic_pane_g

0xcb94,	// (0x0001c319) list_double_graphic_pane_t1_ParamLimits

0xcb94,	// (0x0001c319) list_double_graphic_pane_t1

0xcbaa,	// (0x0001c32f) list_double_graphic_pane_t2_ParamLimits

0xcbaa,	// (0x0001c32f) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001ed95) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001ed95) list_double_graphic_pane_t

0xcbbc,	// (0x0001c341) list_double2_graphic_pane_g1_ParamLimits

0xcbbc,	// (0x0001c341) list_double2_graphic_pane_g1

0x4076,	// (0x000137fb) list_double2_graphic_pane_g2_ParamLimits

0x4076,	// (0x000137fb) list_double2_graphic_pane_g2

0xcaf3,	// (0x0001c278) list_double2_graphic_pane_g3_ParamLimits

0xcaf3,	// (0x0001c278) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001ed9a) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001ed9a) list_double2_graphic_pane_g

0xcbc8,	// (0x0001c34d) list_double2_graphic_pane_t1_ParamLimits

0xcbc8,	// (0x0001c34d) list_double2_graphic_pane_t1

0xcbde,	// (0x0001c363) list_double2_graphic_pane_t2_ParamLimits

0xcbde,	// (0x0001c363) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001eda1) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001eda1) list_double2_graphic_pane_t

0xcbf0,	// (0x0001c375) list_double_large_graphic_pane_g1_ParamLimits

0xcbf0,	// (0x0001c375) list_double_large_graphic_pane_g1

0xcc0f,	// (0x0001c394) list_double_large_graphic_pane_g2_ParamLimits

0xcc0f,	// (0x0001c394) list_double_large_graphic_pane_g2

0xcac4,	// (0x0001c249) list_double_large_graphic_pane_g3_ParamLimits

0xcac4,	// (0x0001c249) list_double_large_graphic_pane_g3

0xcc20,	// (0x0001c3a5) list_double_large_graphic_pane_g4_ParamLimits

0xcc20,	// (0x0001c3a5) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001eda6) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001eda6) list_double_large_graphic_pane_g

0xcc32,	// (0x0001c3b7) list_double_large_graphic_pane_t1_ParamLimits

0xcc32,	// (0x0001c3b7) list_double_large_graphic_pane_t1

0xcc4b,	// (0x0001c3d0) list_double_large_graphic_pane_t2_ParamLimits

0xcc4b,	// (0x0001c3d0) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001edb1) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001edb1) list_double_large_graphic_pane_t

0xcc5d,	// (0x0001c3e2) list_double2_large_graphic_pane_g1_ParamLimits

0xcc5d,	// (0x0001c3e2) list_double2_large_graphic_pane_g1

0xcae2,	// (0x0001c267) list_double2_large_graphic_pane_g2_ParamLimits

0xcae2,	// (0x0001c267) list_double2_large_graphic_pane_g2

0xcaf3,	// (0x0001c278) list_double2_large_graphic_pane_g3_ParamLimits

0xcaf3,	// (0x0001c278) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001edb6) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001edb6) list_double2_large_graphic_pane_g

0xcc69,	// (0x0001c3ee) list_double2_large_graphic_pane_t1_ParamLimits

0xcc69,	// (0x0001c3ee) list_double2_large_graphic_pane_t1

0xcc7f,	// (0x0001c404) list_double2_large_graphic_pane_t2_ParamLimits

0xcc7f,	// (0x0001c404) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001edbd) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001edbd) list_double2_large_graphic_pane_t

0xcc91,	// (0x0001c416) list_double_heading_pane_g1_ParamLimits

0xcc91,	// (0x0001c416) list_double_heading_pane_g1

0xcca2,	// (0x0001c427) list_double_heading_pane_g2_ParamLimits

0xcca2,	// (0x0001c427) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001edc2) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001edc2) list_double_heading_pane_g

0xccae,	// (0x0001c433) list_double_heading_pane_t1_ParamLimits

0xccae,	// (0x0001c433) list_double_heading_pane_t1

0xccc4,	// (0x0001c449) list_double_heading_pane_t2_ParamLimits

0xccc4,	// (0x0001c449) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001edc7) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001edc7) list_double_heading_pane_t

0x2f95,	// (0x0001271a) list_double_graphic_heading_pane_g1_ParamLimits

0x2f95,	// (0x0001271a) list_double_graphic_heading_pane_g1

0xcc91,	// (0x0001c416) list_double_graphic_heading_pane_g2_ParamLimits

0xcc91,	// (0x0001c416) list_double_graphic_heading_pane_g2

0xcca2,	// (0x0001c427) list_double_graphic_heading_pane_g3_ParamLimits

0xcca2,	// (0x0001c427) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001edcc) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001edcc) list_double_graphic_heading_pane_g

0xccd6,	// (0x0001c45b) list_double_graphic_heading_pane_t1_ParamLimits

0xccd6,	// (0x0001c45b) list_double_graphic_heading_pane_t1

0xccec,	// (0x0001c471) list_double_graphic_heading_pane_t2_ParamLimits

0xccec,	// (0x0001c471) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001edd3) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001edd3) list_double_graphic_heading_pane_t

0xcc0f,	// (0x0001c394) list_double_time_pane_g1_ParamLimits

0xcc0f,	// (0x0001c394) list_double_time_pane_g1

0xcac4,	// (0x0001c249) list_double_time_pane_g2_ParamLimits

0xcac4,	// (0x0001c249) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001edd8) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001edd8) list_double_time_pane_g

0xccfe,	// (0x0001c483) list_double_time_pane_t1_ParamLimits

0xccfe,	// (0x0001c483) list_double_time_pane_t1

0xcd14,	// (0x0001c499) list_double_time_pane_t2_ParamLimits

0xcd14,	// (0x0001c499) list_double_time_pane_t2

0xcd26,	// (0x0001c4ab) list_double_time_pane_t3_ParamLimits

0xcd26,	// (0x0001c4ab) list_double_time_pane_t3

0xcd38,	// (0x0001c4bd) list_double_time_pane_t4_ParamLimits

0xcd38,	// (0x0001c4bd) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001eddd) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001eddd) list_double_time_pane_t

0x4076,	// (0x000137fb) list_setting_pane_g1_ParamLimits

0x4076,	// (0x000137fb) list_setting_pane_g1

0xcaf3,	// (0x0001c278) list_setting_pane_g2_ParamLimits

0xcaf3,	// (0x0001c278) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001ede6) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001ede6) list_setting_pane_g

0xcd4a,	// (0x0001c4cf) list_setting_pane_t1_ParamLimits

0xcd4a,	// (0x0001c4cf) list_setting_pane_t1

0xcd61,	// (0x0001c4e6) list_setting_pane_t2_ParamLimits

0xcd61,	// (0x0001c4e6) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001edeb) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001edeb) list_setting_pane_t

0xcda0,	// (0x0001c525) set_value_pane_cp_ParamLimits

0xcda0,	// (0x0001c525) set_value_pane_cp

0x4076,	// (0x000137fb) list_setting_number_pane_g1_ParamLimits

0x4076,	// (0x000137fb) list_setting_number_pane_g1

0xcaf3,	// (0x0001c278) list_setting_number_pane_g2_ParamLimits

0xcaf3,	// (0x0001c278) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001ede6) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001ede6) list_setting_number_pane_g

0xcdac,	// (0x0001c531) list_setting_number_pane_t1_ParamLimits

0xcdac,	// (0x0001c531) list_setting_number_pane_t1

0xcdc0,	// (0x0001c545) list_setting_number_pane_t2_ParamLimits

0xcdc0,	// (0x0001c545) list_setting_number_pane_t2

0xcdd7,	// (0x0001c55c) list_setting_number_pane_t3_ParamLimits

0xcdd7,	// (0x0001c55c) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001edf2) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001edf2) list_setting_number_pane_t

0xcda0,	// (0x0001c525) set_value_pane_ParamLimits

0xcda0,	// (0x0001c525) set_value_pane

0x327a,	// (0x000129ff) bg_set_opt_pane_ParamLimits

0x327a,	// (0x000129ff) bg_set_opt_pane

0x329b,	// (0x00012a20) set_value_pane_t1

0x32a9,	// (0x00012a2e) slider_set_pane_cp3

0x32b2,	// (0x00012a37) volume_small_pane_cp

0x32bb,	// (0x00012a40) list_form_gen_pane

0x32c4,	// (0x00012a49) scroll_pane_cp8

0xce1a,	// (0x0001c59f) form_field_data_pane_ParamLimits

0xce1a,	// (0x0001c59f) form_field_data_pane

0xce31,	// (0x0001c5b6) form_field_data_wide_pane_ParamLimits

0xce31,	// (0x0001c5b6) form_field_data_wide_pane

0xce51,	// (0x0001c5d6) form_field_popup_pane_ParamLimits

0xce51,	// (0x0001c5d6) form_field_popup_pane

0xce69,	// (0x0001c5ee) form_field_popup_wide_pane_ParamLimits

0xce69,	// (0x0001c5ee) form_field_popup_wide_pane

0x335f,	// (0x00012ae4) form_field_slider_pane_ParamLimits

0x335f,	// (0x00012ae4) form_field_slider_pane

0x3372,	// (0x00012af7) form_field_slider_wide_pane_ParamLimits

0x3372,	// (0x00012af7) form_field_slider_wide_pane

0x3385,	// (0x00012b0a) data_form_pane

0xce8a,	// (0x0001c60f) form_field_data_pane_t1

0x33b3,	// (0x00012b38) input_focus_pane

0x33c1,	// (0x00012b46) data_form_wide_pane

0x33ed,	// (0x00012b72) form_field_data_wide_pane_t1

0x2ba9,	// (0x0001232e) input_focus_pane_cp6

0xcea4,	// (0x0001c629) form_field_popup_pane_t1

0x33b3,	// (0x00012b38) input_focus_pane_cp7

0x3424,	// (0x00012ba9) list_form_pane

0x3438,	// (0x00012bbd) form_field_popup_wide_pane_t1

0x33b3,	// (0x00012b38) input_focus_pane_cp8

0x344d,	// (0x00012bd2) list_form_wide_pane

0xcec6,	// (0x0001c64b) form_field_slider_pane_t1_ParamLimits

0xcec6,	// (0x0001c64b) form_field_slider_pane_t1

0xcede,	// (0x0001c663) form_field_slider_pane_t2_ParamLimits

0xcede,	// (0x0001c663) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001ee02) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001ee02) form_field_slider_pane_t

0x2844,	// (0x00011fc9) input_focus_pane_cp9_ParamLimits

0x2844,	// (0x00011fc9) input_focus_pane_cp9

0xcef3,	// (0x0001c678) slider_cont_pane_ParamLimits

0xcef3,	// (0x0001c678) slider_cont_pane

0x349c,	// (0x00012c21) form_field_slider_wide_pane_t1_ParamLimits

0x349c,	// (0x00012c21) form_field_slider_wide_pane_t1

0x34ae,	// (0x00012c33) form_field_slider_wide_pane_t2_ParamLimits

0x34ae,	// (0x00012c33) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001ee07) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001ee07) form_field_slider_wide_pane_t

0x2844,	// (0x00011fc9) input_focus_pane_cp10_ParamLimits

0x2844,	// (0x00011fc9) input_focus_pane_cp10

0xcf07,	// (0x0001c68c) slider_cont_pane_cp1_ParamLimits

0xcf07,	// (0x0001c68c) slider_cont_pane_cp1

0xcf1b,	// (0x0001c6a0) slider_form_pane_cp

0x34dc,	// (0x00012c61) input_focus_pane_g1

0x34e4,	// (0x00012c69) input_focus_pane_g2

0x34ec,	// (0x00012c71) input_focus_pane_g3

0x34f4,	// (0x00012c79) input_focus_pane_g4

0x34fc,	// (0x00012c81) input_focus_pane_g5

0x3504,	// (0x00012c89) input_focus_pane_g6

0x350c,	// (0x00012c91) input_focus_pane_g7

0x3514,	// (0x00012c99) input_focus_pane_g8

0x351c,	// (0x00012ca1) input_focus_pane_g9

0x24c5,	// (0x00011c4a) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001ee0c) input_focus_pane_g

0x51df,	// (0x00014964) wait_border_pane_g3_copy1

0xcf23,	// (0x0001c6a8) data_form_pane_t1

0x24c5,	// (0x00011c4a) wait_anim_pane_g1_copy1

0xdb91,	// (0x0001d316) data_form_wide_pane_t1

0xcf3d,	// (0x0001c6c2) list_form_graphic_pane_cp_ParamLimits

0xcf3d,	// (0x0001c6c2) list_form_graphic_pane_cp

0x6134,	// (0x000158b9) slider_form_pane_g1

0x613d,	// (0x000158c2) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001f10a) slider_form_pane_g

0xcf3d,	// (0x0001c6c2) list_form_graphic_pane_ParamLimits

0xcf3d,	// (0x0001c6c2) list_form_graphic_pane

0x3574,	// (0x00012cf9) list_form_graphic_pane_g1

0x357c,	// (0x00012d01) list_form_graphic_pane_t1_ParamLimits

0x357c,	// (0x00012d01) list_form_graphic_pane_t1

0x25af,	// (0x00011d34) list_highlight_pane_cp5_ParamLimits

0x25af,	// (0x00011d34) list_highlight_pane_cp5

0xcf4f,	// (0x0001c6d4) find_pane_g1

0x359a,	// (0x00012d1f) input_find_pane

0xcf58,	// (0x0001c6dd) input_find_pane_g1_ParamLimits

0xcf58,	// (0x0001c6dd) input_find_pane_g1

0xcf64,	// (0x0001c6e9) input_find_pane_t1_ParamLimits

0xcf64,	// (0x0001c6e9) input_find_pane_t1

0xcf79,	// (0x0001c6fe) input_find_pane_t2_ParamLimits

0xcf79,	// (0x0001c6fe) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001ee21) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001ee21) input_find_pane_t

0x35d9,	// (0x00012d5e) input_focus_pane_cp5_ParamLimits

0x35d9,	// (0x00012d5e) input_focus_pane_cp5

0x35f3,	// (0x00012d78) bg_popup_window_pane_cp2_ParamLimits

0x35f3,	// (0x00012d78) bg_popup_window_pane_cp2

0x3600,	// (0x00012d85) listscroll_menu_pane_ParamLimits

0x3600,	// (0x00012d85) listscroll_menu_pane

0xcf9a,	// (0x0001c71f) popup_submenu_window_ParamLimits

0xcf9a,	// (0x0001c71f) popup_submenu_window

0x3638,	// (0x00012dbd) find_popup_pane_g1

0x3640,	// (0x00012dc5) input_popup_find_pane_cp

0x35d9,	// (0x00012d5e) input_focus_pane_cp4_ParamLimits

0x35d9,	// (0x00012d5e) input_focus_pane_cp4

0x3656,	// (0x00012ddb) input_popup_find_pane_t1_ParamLimits

0x3656,	// (0x00012ddb) input_popup_find_pane_t1

0x24cf,	// (0x00011c54) bg_popup_sub_pane_cp

0x3684,	// (0x00012e09) listscroll_popup_sub_pane

0x368c,	// (0x00012e11) list_submenu_pane_ParamLimits

0x368c,	// (0x00012e11) list_submenu_pane

0x369d,	// (0x00012e22) scroll_pane_cp4

0x36a5,	// (0x00012e2a) list_single_popup_submenu_pane_ParamLimits

0x36a5,	// (0x00012e2a) list_single_popup_submenu_pane

0x36b9,	// (0x00012e3e) list_single_popup_submenu_pane_g1

0x36c1,	// (0x00012e46) list_single_popup_submenu_pane_t1_ParamLimits

0x36c1,	// (0x00012e46) list_single_popup_submenu_pane_t1

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp1_ParamLimits

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp1

0x36d6,	// (0x00012e5b) tabs_2_active_pane_g1

0xcfd4,	// (0x0001c759) tabs_2_active_pane_t1

0x2844,	// (0x00011fc9) bg_passive_tab_pane_cp1_ParamLimits

0x2844,	// (0x00011fc9) bg_passive_tab_pane_cp1

0x36d6,	// (0x00012e5b) tabs_2_passive_pane_g1

0xcfd4,	// (0x0001c759) tabs_2_passive_pane_t1

0x25af,	// (0x00011d34) bg_active_tab_pane_cp4

0xcfe6,	// (0x0001c76b) tabs_2_long_active_pane_t1

0x4598,	// (0x00013d1d) bg_passive_tab_pane_cp4

0x109d,	// (0x00010822) list_single_midp_graphic_pane_g4_ParamLimits

0x25af,	// (0x00011d34) bg_active_tab_pane_cp5

0xcff9,	// (0x0001c77e) tabs_3_long_active_pane_t1

0x4598,	// (0x00013d1d) bg_passive_tab_pane_cp5

0x109d,	// (0x00010822) list_single_midp_graphic_pane_g4

0x25af,	// (0x00011d34) bg_popup_window_pane_cp13_ParamLimits

0x25af,	// (0x00011d34) bg_popup_window_pane_cp13

0x3738,	// (0x00012ebd) listscroll_popup_fast_pane_ParamLimits

0x3738,	// (0x00012ebd) listscroll_popup_fast_pane

0x3747,	// (0x00012ecc) grid_popup_fast_pane_ParamLimits

0x3747,	// (0x00012ecc) grid_popup_fast_pane

0x3759,	// (0x00012ede) scroll_pane_cp9_ParamLimits

0x3759,	// (0x00012ede) scroll_pane_cp9

0x8042,	// (0x000177c7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8042,	// (0x000177c7) list_single_graphic_hl_pane_t1_cp2

0x377d,	// (0x00012f02) input_focus_pane_cp20_ParamLimits

0x377d,	// (0x00012f02) input_focus_pane_cp20

0x378b,	// (0x00012f10) query_popup_data_pane_t1_ParamLimits

0x378b,	// (0x00012f10) query_popup_data_pane_t1

0x379e,	// (0x00012f23) query_popup_data_pane_t2_ParamLimits

0x379e,	// (0x00012f23) query_popup_data_pane_t2

0x37e4,	// (0x00012f69) query_popup_data_pane_t3_ParamLimits

0x37e4,	// (0x00012f69) query_popup_data_pane_t3

0x3825,	// (0x00012faa) query_popup_data_pane_t4_ParamLimits

0x3825,	// (0x00012faa) query_popup_data_pane_t4

0x3861,	// (0x00012fe6) query_popup_data_pane_t5_ParamLimits

0x3861,	// (0x00012fe6) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001ee26) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001ee26) query_popup_data_pane_t

0x34dc,	// (0x00012c61) bg_set_opt_pane_g1

0x34e4,	// (0x00012c69) bg_set_opt_pane_g2

0x34ec,	// (0x00012c71) bg_set_opt_pane_g3

0x34f4,	// (0x00012c79) bg_set_opt_pane_g4

0x34fc,	// (0x00012c81) bg_set_opt_pane_g5

0x3504,	// (0x00012c89) bg_set_opt_pane_g6

0x350c,	// (0x00012c91) bg_set_opt_pane_g7

0x3514,	// (0x00012c99) bg_set_opt_pane_g8

0x351c,	// (0x00012ca1) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001ee31) bg_set_opt_pane_g

0x06b7,	// (0x0000fe3c) control_top_pane_stacon_ParamLimits

0x06b7,	// (0x0000fe3c) control_top_pane_stacon

0x070a,	// (0x0000fe8f) signal_pane_stacon_ParamLimits

0x070a,	// (0x0000fe8f) signal_pane_stacon

0x3ee0,	// (0x00013665) stacon_top_pane_g1_ParamLimits

0x3ee0,	// (0x00013665) stacon_top_pane_g1

0x072f,	// (0x0000feb4) title_pane_stacon_ParamLimits

0x072f,	// (0x0000feb4) title_pane_stacon

0x0759,	// (0x0000fede) uni_indicator_pane_stacon_ParamLimits

0x0759,	// (0x0000fede) uni_indicator_pane_stacon

0x076e,	// (0x0000fef3) battery_pane_stacon_ParamLimits

0x076e,	// (0x0000fef3) battery_pane_stacon

0x07b2,	// (0x0000ff37) control_bottom_pane_stacon_ParamLimits

0x07b2,	// (0x0000ff37) control_bottom_pane_stacon

0x07d5,	// (0x0000ff5a) navi_pane_stacon_ParamLimits

0x07d5,	// (0x0000ff5a) navi_pane_stacon

0x3f02,	// (0x00013687) stacon_bottom_pane_g1_ParamLimits

0x3f02,	// (0x00013687) stacon_bottom_pane_g1

0x041a,	// (0x0000fb9f) aid_levels_signal_lsc_ParamLimits

0x041a,	// (0x0000fb9f) aid_levels_signal_lsc

0x0430,	// (0x0000fbb5) signal_pane_stacon_g1_ParamLimits

0x0430,	// (0x0000fbb5) signal_pane_stacon_g1

0x0444,	// (0x0000fbc9) signal_pane_stacon_g2_ParamLimits

0x0444,	// (0x0000fbc9) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001ee44) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001ee44) signal_pane_stacon_g

0x0479,	// (0x0000fbfe) title_pane_stacon_t1_ParamLimits

0x0479,	// (0x0000fbfe) title_pane_stacon_t1

0x38a5,	// (0x0001302a) uni_indicator_pane_stacon_g1

0x38af,	// (0x00013034) uni_indicator_pane_stacon_g2

0x38b9,	// (0x0001303e) uni_indicator_pane_stacon_g3

0x38c3,	// (0x00013048) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001ee50) uni_indicator_pane_stacon_g

0x049e,	// (0x0000fc23) control_top_pane_stacon_g1

0x04a6,	// (0x0000fc2b) control_top_pane_stacon_t1_ParamLimits

0x04a6,	// (0x0000fc2b) control_top_pane_stacon_t1

0x04dd,	// (0x0000fc62) aid_levels_battery_lsc_ParamLimits

0x04dd,	// (0x0000fc62) aid_levels_battery_lsc

0x04f4,	// (0x0000fc79) battery_pane_stacon_g1_ParamLimits

0x04f4,	// (0x0000fc79) battery_pane_stacon_g1

0x0507,	// (0x0000fc8c) battery_pane_stacon_g2_ParamLimits

0x0507,	// (0x0000fc8c) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001ee59) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001ee59) battery_pane_stacon_g

0x0545,	// (0x0000fcca) navi_icon_pane_stacon

0x0559,	// (0x0000fcde) navi_navi_pane_stacon

0x0545,	// (0x0000fcca) navi_text_pane_stacon

0x049e,	// (0x0000fc23) control_bottom_pane_stacon_g1

0x056d,	// (0x0000fcf2) control_bottom_pane_stacon_t1_ParamLimits

0x056d,	// (0x0000fcf2) control_bottom_pane_stacon_t1

0xd00b,	// (0x0001c790) grid_app_pane_ParamLimits

0xd00b,	// (0x0001c790) grid_app_pane

0xd043,	// (0x0001c7c8) scroll_pane_cp15_ParamLimits

0xd043,	// (0x0001c7c8) scroll_pane_cp15

0xd058,	// (0x0001c7dd) cell_app_pane_ParamLimits

0xd058,	// (0x0001c7dd) cell_app_pane

0xd09d,	// (0x0001c822) cell_app_pane_g1_ParamLimits

0xd09d,	// (0x0001c822) cell_app_pane_g1

0x3966,	// (0x000130eb) cell_app_pane_g2_ParamLimits

0x3966,	// (0x000130eb) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001ee5e) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001ee5e) cell_app_pane_g

0xd0c1,	// (0x0001c846) cell_app_pane_t1_ParamLimits

0xd0c1,	// (0x0001c846) cell_app_pane_t1

0x3989,	// (0x0001310e) grid_highlight_pane_ParamLimits

0x3989,	// (0x0001310e) grid_highlight_pane

0x34dc,	// (0x00012c61) cell_highlight_pane_g1

0x34e4,	// (0x00012c69) cell_highlight_pane_g2

0x34ec,	// (0x00012c71) cell_highlight_pane_g3

0x34f4,	// (0x00012c79) cell_highlight_pane_g4

0x34fc,	// (0x00012c81) cell_highlight_pane_g5

0x3504,	// (0x00012c89) cell_highlight_pane_g6

0x350c,	// (0x00012c91) cell_highlight_pane_g7

0x3514,	// (0x00012c99) cell_highlight_pane_g8

0x351c,	// (0x00012ca1) cell_highlight_pane_g9

0x24c5,	// (0x00011c4a) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001ee0c) cell_highlight_pane_g

0x399a,	// (0x0001311f) bg_scroll_pane

0x05b7,	// (0x0000fd3c) scroll_handle_pane

0x39e1,	// (0x00013166) scroll_bg_pane_g1

0x39f6,	// (0x0001317b) scroll_bg_pane_g2

0x3a0e,	// (0x00013193) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001ee63) scroll_bg_pane_g

0x3a23,	// (0x000131a8) scroll_handle_focus_pane_ParamLimits

0x3a23,	// (0x000131a8) scroll_handle_focus_pane

0x39e1,	// (0x00013166) scroll_handle_pane_g1

0x3a30,	// (0x000131b5) scroll_handle_pane_g2

0x3a0e,	// (0x00013193) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001ee6a) scroll_handle_pane_g

0x35d9,	// (0x00012d5e) bg_popup_sub_pane_cp21_ParamLimits

0x35d9,	// (0x00012d5e) bg_popup_sub_pane_cp21

0x3a44,	// (0x000131c9) popup_fep_japan_predictive_window_t1_ParamLimits

0x3a44,	// (0x000131c9) popup_fep_japan_predictive_window_t1

0x3a5e,	// (0x000131e3) popup_fep_japan_predictive_window_t2_ParamLimits

0x3a5e,	// (0x000131e3) popup_fep_japan_predictive_window_t2

0x3a91,	// (0x00013216) popup_fep_japan_predictive_window_t3_ParamLimits

0x3a91,	// (0x00013216) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001ee71) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001ee71) popup_fep_japan_predictive_window_t

0x24cf,	// (0x00011c54) bg_popup_sub_pane_cp23

0x3ac8,	// (0x0001324d) listscroll_japin_cand_pane

0x3ad0,	// (0x00013255) popup_fep_japan_candidate_window_t1

0x3ade,	// (0x00013263) candidate_pane_ParamLimits

0x3ade,	// (0x00013263) candidate_pane

0x3af0,	// (0x00013275) scroll_pane_cp30

0x3af8,	// (0x0001327d) list_single_popup_jap_candidate_pane_ParamLimits

0x3af8,	// (0x0001327d) list_single_popup_jap_candidate_pane

0x24cf,	// (0x00011c54) list_highlight_pane_cp30

0x3b0d,	// (0x00013292) list_single_popup_jap_candidate_pane_t1

0x3b1c,	// (0x000132a1) level_1_signal

0x3b2e,	// (0x000132b3) level_2_signal

0x3b41,	// (0x000132c6) level_3_signal

0x3b54,	// (0x000132d9) level_4_signal

0x3b67,	// (0x000132ec) level_5_signal

0x3b7a,	// (0x000132ff) level_6_signal

0x3b8d,	// (0x00013312) level_7_signal

0x3b1c,	// (0x000132a1) level_1_battery

0x3b2e,	// (0x000132b3) level_2_battery

0x3b41,	// (0x000132c6) level_3_battery

0x3b54,	// (0x000132d9) level_4_battery

0x3b67,	// (0x000132ec) level_5_battery

0x3b7a,	// (0x000132ff) level_6_battery

0x3b8d,	// (0x00013312) level_7_battery

0x3bb8,	// (0x0001333d) list_menu_pane_ParamLimits

0x3bb8,	// (0x0001333d) list_menu_pane

0x3bce,	// (0x00013353) scroll_pane_cp25_ParamLimits

0x3bce,	// (0x00013353) scroll_pane_cp25

0x3be7,	// (0x0001336c) list_double2_graphic_pane_cp2_ParamLimits

0x3be7,	// (0x0001336c) list_double2_graphic_pane_cp2

0x3be7,	// (0x0001336c) list_double2_large_graphic_pane_cp2_ParamLimits

0x3be7,	// (0x0001336c) list_double2_large_graphic_pane_cp2

0x3be7,	// (0x0001336c) list_double2_pane_cp2_ParamLimits

0x3be7,	// (0x0001336c) list_double2_pane_cp2

0x3be7,	// (0x0001336c) list_double_graphic_pane_cp2_ParamLimits

0x3be7,	// (0x0001336c) list_double_graphic_pane_cp2

0x3be7,	// (0x0001336c) list_double_large_graphic_pane_cp2_ParamLimits

0x3be7,	// (0x0001336c) list_double_large_graphic_pane_cp2

0x3be7,	// (0x0001336c) list_double_number_pane_cp2_ParamLimits

0x3be7,	// (0x0001336c) list_double_number_pane_cp2

0x3be7,	// (0x0001336c) list_double_pane_cp2_ParamLimits

0x3be7,	// (0x0001336c) list_double_pane_cp2

0xd0d8,	// (0x0001c85d) list_single_2graphic_pane_cp2_ParamLimits

0xd0d8,	// (0x0001c85d) list_single_2graphic_pane_cp2

0xd0d8,	// (0x0001c85d) list_single_graphic_heading_pane_cp2_ParamLimits

0xd0d8,	// (0x0001c85d) list_single_graphic_heading_pane_cp2

0xd0d8,	// (0x0001c85d) list_single_graphic_pane_cp2_ParamLimits

0xd0d8,	// (0x0001c85d) list_single_graphic_pane_cp2

0xd0d8,	// (0x0001c85d) list_single_heading_pane_cp2_ParamLimits

0xd0d8,	// (0x0001c85d) list_single_heading_pane_cp2

0x3c24,	// (0x000133a9) list_single_large_graphic_pane_cp2_ParamLimits

0x3c24,	// (0x000133a9) list_single_large_graphic_pane_cp2

0xd0d8,	// (0x0001c85d) list_single_number_heading_pane_cp2_ParamLimits

0xd0d8,	// (0x0001c85d) list_single_number_heading_pane_cp2

0xd0d8,	// (0x0001c85d) list_single_number_pane_cp2_ParamLimits

0xd0d8,	// (0x0001c85d) list_single_number_pane_cp2

0xd0d8,	// (0x0001c85d) list_single_pane_cp2_ParamLimits

0xd0d8,	// (0x0001c85d) list_single_pane_cp2

0x3ca0,	// (0x00013425) bg_popup_sub_pane_cp22

0x0669,	// (0x0000fdee) popup_side_volume_key_window_g1

0x0693,	// (0x0000fe18) popup_side_volume_key_window_t1

0x06af,	// (0x0000fe34) volume_small_pane_cp1

0x2844,	// (0x00011fc9) bg_popup_sub_pane_cp24_ParamLimits

0x2844,	// (0x00011fc9) bg_popup_sub_pane_cp24

0x3cb6,	// (0x0001343b) fep_china_uni_candidate_pane_ParamLimits

0x3cb6,	// (0x0001343b) fep_china_uni_candidate_pane

0x3cca,	// (0x0001344f) fep_china_uni_entry_pane

0x3cda,	// (0x0001345f) popup_fep_china_uni_window_g1

0x3cf6,	// (0x0001347b) fep_china_uni_entry_pane_g1

0x3cfe,	// (0x00013483) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001eea2) fep_china_uni_entry_pane_g

0x3d06,	// (0x0001348b) fep_entry_item_pane

0x3d10,	// (0x00013495) fep_candidate_item_pane

0x3d18,	// (0x0001349d) fep_china_uni_candidate_pane_g1

0x3d20,	// (0x000134a5) fep_china_uni_candidate_pane_g2

0x3d28,	// (0x000134ad) fep_china_uni_candidate_pane_g3

0x3d30,	// (0x000134b5) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001eea7) fep_china_uni_candidate_pane_g

0x24c5,	// (0x00011c4a) fep_entry_item_pane_g1

0x3d38,	// (0x000134bd) fep_entry_item_pane_t1_ParamLimits

0x3d38,	// (0x000134bd) fep_entry_item_pane_t1

0x3d4e,	// (0x000134d3) fep_candidate_item_pane_t1_ParamLimits

0x3d4e,	// (0x000134d3) fep_candidate_item_pane_t1

0x3d63,	// (0x000134e8) fep_candidate_item_pane_t2_ParamLimits

0x3d63,	// (0x000134e8) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001eeb0) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001eeb0) fep_candidate_item_pane_t

0x25af,	// (0x00011d34) list_highlight_pane_cp31_ParamLimits

0x25af,	// (0x00011d34) list_highlight_pane_cp31

0x3d75,	// (0x000134fa) level_1_signal_lsc

0x3d7e,	// (0x00013503) level_2_signal_lsc

0x3d87,	// (0x0001350c) level_3_signal_lsc

0x3d90,	// (0x00013515) level_4_signal_lsc

0x3d99,	// (0x0001351e) level_5_signal_lsc

0x3da2,	// (0x00013527) level_6_signal_lsc

0x3dab,	// (0x00013530) level_7_signal_lsc

0x3dab,	// (0x00013530) level_1_battery_lsc

0x3db4,	// (0x00013539) level_2_battery_lsc

0x3dbd,	// (0x00013542) level_3_battery_lsc

0x3dc6,	// (0x0001354b) level_4_battery_lsc

0x3dcf,	// (0x00013554) level_5_battery_lsc

0x3dd8,	// (0x0001355d) level_6_battery_lsc

0x3d75,	// (0x000134fa) level_7_battery_lsc

0x3de1,	// (0x00013566) scroll_handle_focus_pane_g1

0x3dea,	// (0x0001356f) scroll_handle_focus_pane_g2

0x3df3,	// (0x00013578) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001eeb5) scroll_handle_focus_pane_g

0xd165,	// (0x0001c8ea) list_single_2graphic_pane_g1_ParamLimits

0xd165,	// (0x0001c8ea) list_single_2graphic_pane_g1

0xca99,	// (0x0001c21e) list_single_2graphic_pane_g2_ParamLimits

0xca99,	// (0x0001c21e) list_single_2graphic_pane_g2

0x4a5a,	// (0x000141df) list_single_2graphic_pane_g3_ParamLimits

0x4a5a,	// (0x000141df) list_single_2graphic_pane_g3

0xd171,	// (0x0001c8f6) list_single_2graphic_pane_g4_ParamLimits

0xd171,	// (0x0001c8f6) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001eebc) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001eebc) list_single_2graphic_pane_g

0xd182,	// (0x0001c907) list_single_2graphic_pane_t1_ParamLimits

0xd182,	// (0x0001c907) list_single_2graphic_pane_t1

0xd1b0,	// (0x0001c935) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd1b0,	// (0x0001c935) list_double2_graphic_large_graphic_pane_g1

0xcae2,	// (0x0001c267) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcae2,	// (0x0001c267) list_double2_graphic_large_graphic_pane_g2

0xcaf3,	// (0x0001c278) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcaf3,	// (0x0001c278) list_double2_graphic_large_graphic_pane_g3

0xd1c2,	// (0x0001c947) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd1c2,	// (0x0001c947) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001eec5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001eec5) list_double2_graphic_large_graphic_pane_g

0xd1ce,	// (0x0001c953) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd1ce,	// (0x0001c953) list_double2_graphic_large_graphic_pane_t1

0xd1e4,	// (0x0001c969) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd1e4,	// (0x0001c969) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001eece) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001eece) list_double2_graphic_large_graphic_pane_t

0x3fca,	// (0x0001374f) popup_fast_swap_window_ParamLimits

0x3fca,	// (0x0001374f) popup_fast_swap_window

0x3fe6,	// (0x0001376b) popup_side_volume_key_window

0x4002,	// (0x00013787) stacon_top_pane

0x400c,	// (0x00013791) status_pane_ParamLimits

0x400c,	// (0x00013791) status_pane

0xd226,	// (0x0001c9ab) status_small_pane

0x24cf,	// (0x00011c54) control_pane

0x24cf,	// (0x00011c54) stacon_bottom_pane

0x32c4,	// (0x00012a49) scroll_pane_cp121

0x32bb,	// (0x00012a40) set_content_pane

0x3e8b,	// (0x00013610) bg_active_tab_pane_g1_cp1

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp1

0x3e9d,	// (0x00013622) bg_active_tab_pane_g3_cp1

0x3e8b,	// (0x00013610) bg_passive_tab_pane_g1_cp1

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp1

0x3e9d,	// (0x00013622) bg_passive_tab_pane_g3_cp1

0x3ea6,	// (0x0001362b) bg_active_tab_pane_g1_cp2

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp2

0x3eaf,	// (0x00013634) bg_active_tab_pane_g3_cp2

0x3ea6,	// (0x0001362b) bg_passive_tab_pane_g1_cp2

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp2

0x3eaf,	// (0x00013634) bg_passive_tab_pane_g3_cp2

0x3eb8,	// (0x0001363d) bg_active_tab_pane_g1_cp3

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp3

0x3ec1,	// (0x00013646) bg_active_tab_pane_g3_cp3

0x3eb8,	// (0x0001363d) bg_passive_tab_pane_g1_cp3

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp3

0x3ec1,	// (0x00013646) bg_passive_tab_pane_g3_cp3

0x3eca,	// (0x0001364f) bg_active_tab_pane_g1_cp4

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp4

0x3ed5,	// (0x0001365a) bg_active_tab_pane_g3_cp4

0x3eca,	// (0x0001364f) bg_passive_tab_pane_g1_cp4

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp4

0x3ed5,	// (0x0001365a) bg_passive_tab_pane_g3_cp4

0x3f1e,	// (0x000136a3) bg_active_tab_pane_g1_cp5

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp5

0x3f27,	// (0x000136ac) bg_active_tab_pane_g3_cp5

0x3f1e,	// (0x000136a3) bg_passive_tab_pane_g1_cp5

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp5

0x3f27,	// (0x000136ac) bg_passive_tab_pane_g3_cp5

0x684c,	// (0x00015fd1) list_set_graphic_pane_ParamLimits

0x684c,	// (0x00015fd1) list_set_graphic_pane

0x24cf,	// (0x00011c54) bg_set_opt_pane_cp4

0xd1f6,	// (0x0001c97b) list_set_graphic_pane_g1_ParamLimits

0xd1f6,	// (0x0001c97b) list_set_graphic_pane_g1

0xd202,	// (0x0001c987) list_set_graphic_pane_g2_ParamLimits

0xd202,	// (0x0001c987) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001eed3) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001eed3) list_set_graphic_pane_g

0x0009,

0xfac3,	// (0x0001f248) volume_small_pane_cp_g

0x3f7d,	// (0x00013702) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3f7d,	// (0x00013702) list_double2_large_graphic_pane_g1_cp2

0x3f89,	// (0x0001370e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3f89,	// (0x0001370e) list_double2_large_graphic_pane_g2_cp2

0x3f9a,	// (0x0001371f) list_double2_large_graphic_pane_g3_cp2

0x3fa2,	// (0x00013727) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3fa2,	// (0x00013727) list_double2_large_graphic_pane_t1_cp2

0x3fb8,	// (0x0001373d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3fb8,	// (0x0001373d) list_double2_large_graphic_pane_t2_cp2

0x5cbe,	// (0x00015443) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5cbe,	// (0x00015443) list_double_large_graphic_pane_g1_cp2

0x5ccf,	// (0x00015454) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5ccf,	// (0x00015454) list_double_large_graphic_pane_g2_cp2

0x4133,	// (0x000138b8) list_double_large_graphic_pane_g3_cp2

0x5ce0,	// (0x00015465) list_double_large_graphic_pane_g4_cp

0x5ce8,	// (0x0001546d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5ce8,	// (0x0001546d) list_double_large_graphic_pane_t1_cp2

0x5cff,	// (0x00015484) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5cff,	// (0x00015484) list_double_large_graphic_pane_t2_cp2

0x4025,	// (0x000137aa) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4025,	// (0x000137aa) list_double2_graphic_pane_g1_cp2

0x4033,	// (0x000137b8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4033,	// (0x000137b8) list_double2_graphic_pane_g2_cp2

0x4044,	// (0x000137c9) list_double2_graphic_pane_g3_cp2

0x404e,	// (0x000137d3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x404e,	// (0x000137d3) list_double2_graphic_pane_t1_cp2

0x4064,	// (0x000137e9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4064,	// (0x000137e9) list_double2_graphic_pane_t2_cp2

0x4076,	// (0x000137fb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4076,	// (0x000137fb) list_single_number_heading_pane_g1_cp2

0x4082,	// (0x00013807) list_single_number_heading_pane_g2_cp2

0x408a,	// (0x0001380f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x408a,	// (0x0001380f) list_single_number_heading_pane_t1_cp2

0x40a0,	// (0x00013825) list_single_number_heading_pane_t2_cp2_ParamLimits

0x40a0,	// (0x00013825) list_single_number_heading_pane_t2_cp2

0x40b2,	// (0x00013837) list_single_number_heading_pane_t3_cp2_ParamLimits

0x40b2,	// (0x00013837) list_single_number_heading_pane_t3_cp2

0x4076,	// (0x000137fb) list_single_heading_pane_g1_cp2_ParamLimits

0x4076,	// (0x000137fb) list_single_heading_pane_g1_cp2

0x4082,	// (0x00013807) list_single_heading_pane_g2_cp2

0x408a,	// (0x0001380f) list_single_heading_pane_t1_cp2_ParamLimits

0x408a,	// (0x0001380f) list_single_heading_pane_t1_cp2

0x5ac6,	// (0x0001524b) list_single_heading_pane_t2_cp2_ParamLimits

0x5ac6,	// (0x0001524b) list_single_heading_pane_t2_cp2

0x5a0e,	// (0x00015193) list_double_graphic_pane_g1_cp2_ParamLimits

0x5a0e,	// (0x00015193) list_double_graphic_pane_g1_cp2

0x5a1a,	// (0x0001519f) list_double_graphic_pane_g2_cp2_ParamLimits

0x5a1a,	// (0x0001519f) list_double_graphic_pane_g2_cp2

0x5a29,	// (0x000151ae) list_double_graphic_pane_g3_cp2

0x5a31,	// (0x000151b6) list_double_graphic_pane_t1_cp2_ParamLimits

0x5a31,	// (0x000151b6) list_double_graphic_pane_t1_cp2

0x5a47,	// (0x000151cc) list_double_graphic_pane_t2_cp2_ParamLimits

0x5a47,	// (0x000151cc) list_double_graphic_pane_t2_cp2

0x4127,	// (0x000138ac) list_double_number_pane_g1_cp2_ParamLimits

0x4127,	// (0x000138ac) list_double_number_pane_g1_cp2

0x4133,	// (0x000138b8) list_double_number_pane_g2_cp2

0x59d2,	// (0x00015157) list_double_number_pane_t1_cp2_ParamLimits

0x59d2,	// (0x00015157) list_double_number_pane_t1_cp2

0x59e6,	// (0x0001516b) list_double_number_pane_t2_cp2_ParamLimits

0x59e6,	// (0x0001516b) list_double_number_pane_t2_cp2

0x59fc,	// (0x00015181) list_double_number_pane_t3_cp2_ParamLimits

0x59fc,	// (0x00015181) list_double_number_pane_t3_cp2

0x58bb,	// (0x00015040) list_single_graphic_pane_g1_cp2_ParamLimits

0x58bb,	// (0x00015040) list_single_graphic_pane_g1_cp2

0x418b,	// (0x00013910) list_single_graphic_pane_g2_cp2_ParamLimits

0x418b,	// (0x00013910) list_single_graphic_pane_g2_cp2

0x4197,	// (0x0001391c) list_single_graphic_pane_g3_cp2

0x5891,	// (0x00015016) list_single_graphic_pane_t1_cp2_ParamLimits

0x5891,	// (0x00015016) list_single_graphic_pane_t1_cp2

0x418b,	// (0x00013910) list_single_number_pane_g1_cp2_ParamLimits

0x418b,	// (0x00013910) list_single_number_pane_g1_cp2

0x4197,	// (0x0001391c) list_single_number_pane_g2_cp2

0x5891,	// (0x00015016) list_single_number_pane_t1_cp2_ParamLimits

0x5891,	// (0x00015016) list_single_number_pane_t1_cp2

0x58a7,	// (0x0001502c) list_single_number_pane_t2_cp2_ParamLimits

0x58a7,	// (0x0001502c) list_single_number_pane_t2_cp2

0x3f89,	// (0x0001370e) list_double2_pane_g1_cp2_ParamLimits

0x3f89,	// (0x0001370e) list_double2_pane_g1_cp2

0x3f9a,	// (0x0001371f) list_double2_pane_g2_cp2

0x40ff,	// (0x00013884) list_double2_pane_t1_cp2_ParamLimits

0x40ff,	// (0x00013884) list_double2_pane_t1_cp2

0x4115,	// (0x0001389a) list_double2_pane_t2_cp2_ParamLimits

0x4115,	// (0x0001389a) list_double2_pane_t2_cp2

0x4127,	// (0x000138ac) list_double_pane_g1_cp2_ParamLimits

0x4127,	// (0x000138ac) list_double_pane_g1_cp2

0x4133,	// (0x000138b8) list_double_pane_g2_cp2

0x413b,	// (0x000138c0) list_double_pane_t1_cp2_ParamLimits

0x413b,	// (0x000138c0) list_double_pane_t1_cp2

0x4151,	// (0x000138d6) list_double_pane_t2_cp2_ParamLimits

0x4151,	// (0x000138d6) list_double_pane_t2_cp2

0x417b,	// (0x00013900) list_single_pane_cp2_g3

0x418b,	// (0x00013910) list_single_pane_g1_cp2_ParamLimits

0x418b,	// (0x00013910) list_single_pane_g1_cp2

0x4197,	// (0x0001391c) list_single_pane_g2_cp2

0x419f,	// (0x00013924) list_single_pane_t1_cp2_ParamLimits

0x419f,	// (0x00013924) list_single_pane_t1_cp2

0x41b7,	// (0x0001393c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x41b7,	// (0x0001393c) list_single_large_graphic_pane_g1_cp2

0x41c3,	// (0x00013948) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x41c3,	// (0x00013948) list_single_large_graphic_pane_g2_cp2

0x41cf,	// (0x00013954) list_single_large_graphic_pane_g3_cp2

0x41d7,	// (0x0001395c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x41d7,	// (0x0001395c) list_single_large_graphic_pane_g4_cp1

0x41f1,	// (0x00013976) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x41f1,	// (0x00013976) list_single_large_graphic_pane_t1_cp2

0x585d,	// (0x00014fe2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x585d,	// (0x00014fe2) list_single_graphic_heading_pane_g1_cp2

0x581e,	// (0x00014fa3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x581e,	// (0x00014fa3) list_single_graphic_heading_pane_g4_cp2

0x4197,	// (0x0001391c) list_single_graphic_heading_pane_g5_cp2

0x5869,	// (0x00014fee) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5869,	// (0x00014fee) list_single_graphic_heading_pane_t1_cp2

0x587f,	// (0x00015004) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x587f,	// (0x00015004) list_single_graphic_heading_pane_t2_cp2

0x5812,	// (0x00014f97) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5812,	// (0x00014f97) list_single_2graphic_pane_g1_cp2

0x581e,	// (0x00014fa3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x581e,	// (0x00014fa3) list_single_2graphic_pane_g2_cp2

0x4197,	// (0x0001391c) list_single_2graphic_pane_g3_cp2

0x583b,	// (0x00014fc0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x583b,	// (0x00014fc0) list_single_2graphic_pane_g4_cp2

0x5847,	// (0x00014fcc) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5847,	// (0x00014fcc) list_single_2graphic_pane_t1_cp2

0x24c5,	// (0x00011c4a) list_highlight_pane_g10_cp1

0x53ea,	// (0x00014b6f) list_highlight_pane_g1_cp1

0x53f2,	// (0x00014b77) list_highlight_pane_g2_cp1

0x53fa,	// (0x00014b7f) list_highlight_pane_g3_cp1

0x5402,	// (0x00014b87) list_highlight_pane_g4_cp1

0x540a,	// (0x00014b8f) list_highlight_pane_g5_cp1

0x5412,	// (0x00014b97) list_highlight_pane_g6_cp1

0x541a,	// (0x00014b9f) list_highlight_pane_g7_cp1

0x5422,	// (0x00014ba7) list_highlight_pane_g8_cp1

0x542a,	// (0x00014baf) list_highlight_pane_g9_cp1

0xd8a7,	// (0x0001d02c) form_field_slider_pane_t3

0xd8b5,	// (0x0001d03a) form_field_slider_pane_t4

0x5326,	// (0x00014aab) slider_form_pane_ParamLimits

0x5326,	// (0x00014aab) slider_form_pane

0x24cf,	// (0x00011c54) control_abbreviations

0x24cf,	// (0x00011c54) control_conventions

0x24cf,	// (0x00011c54) control_definitions

0x24cf,	// (0x00011c54) format_table_attribute

0x5b10,	// (0x00015295) bg_popup_preview_window_pane_g9

0x24cf,	// (0x00011c54) format_table_data2

0x24cf,	// (0x00011c54) format_table_data3

0x24cf,	// (0x00011c54) format_table_data_example

0x0008,

0x24cf,	// (0x00011c54) intro_purpose

0xf8e5,	// (0x0001f06a) bg_popup_preview_window_pane_g

0x24cf,	// (0x00011c54) texts_category

0x24cf,	// (0x00011c54) texts_graphics

0x4207,	// (0x0001398c) text_digital

0x4216,	// (0x0001399b) text_primary

0x4225,	// (0x000139aa) text_primary_small

0x4234,	// (0x000139b9) text_secondary

0x4243,	// (0x000139c8) text_title

0x633c,	// (0x00015ac1) bg_passive_tab_pane_g1_cp3_srt

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp3_srt

0x6345,	// (0x00015aca) bg_passive_tab_pane_g3_cp3_srt

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp3_srt_ParamLimits

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp3_srt

0x634e,	// (0x00015ad3) tabs_4_active_pane_srt_g1

0xdc3a,	// (0x0001d3bf) tabs_4_active_pane_srt_t1_ParamLimits

0xdc3a,	// (0x0001d3bf) tabs_4_active_pane_srt_t1

0x633c,	// (0x00015ac1) bg_active_tab_pane_g1_cp3_copy1

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp3_copy1

0x6345,	// (0x00015aca) bg_active_tab_pane_g3_cp3_copy1

0x25af,	// (0x00011d34) tabs_2_long_active_pane_srt_ParamLimits

0x25af,	// (0x00011d34) tabs_2_long_active_pane_srt

0x25af,	// (0x00011d34) tabs_2_long_passive_pane_srt_ParamLimits

0x25af,	// (0x00011d34) tabs_2_long_passive_pane_srt

0x4598,	// (0x00013d1d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4598,	// (0x00013d1d) bg_passive_tab_pane_cp4_srt

0x5f67,	// (0x000156ec) bg_passive_tab_pane_g1_cp4_srt

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp4_srt

0x5f70,	// (0x000156f5) bg_passive_tab_pane_g3_cp4_srt

0x25af,	// (0x00011d34) bg_active_tab_pane_cp4_srt_ParamLimits

0x25af,	// (0x00011d34) bg_active_tab_pane_cp4_srt

0xda26,	// (0x0001d1ab) tabs_2_long_active_pane_srt_t1_ParamLimits

0xda26,	// (0x0001d1ab) tabs_2_long_active_pane_srt_t1

0x5f67,	// (0x000156ec) bg_active_tab_pane_g1_cp4_srt

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp4_srt

0x5f70,	// (0x000156f5) bg_active_tab_pane_g3_cp4_srt

0x2844,	// (0x00011fc9) tabs_3_long_active_pane_srt_ParamLimits

0x2844,	// (0x00011fc9) tabs_3_long_active_pane_srt

0x2844,	// (0x00011fc9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2844,	// (0x00011fc9) tabs_3_long_passive_pane_cp_srt

0x2844,	// (0x00011fc9) tabs_3_long_passive_pane_srt_ParamLimits

0x2844,	// (0x00011fc9) tabs_3_long_passive_pane_srt

0x4598,	// (0x00013d1d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4598,	// (0x00013d1d) bg_passive_tab_pane_cp5_srt

0x3f1e,	// (0x000136a3) bg_passive_tab_pane_g1_cp5_srt

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp5_srt

0x3f27,	// (0x000136ac) bg_passive_tab_pane_g3_cp5_srt

0x25af,	// (0x00011d34) bg_active_tab_pane_cp5_srt_ParamLimits

0x25af,	// (0x00011d34) bg_active_tab_pane_cp5_srt

0xda10,	// (0x0001d195) tabs_3_long_active_pane_srt_t1_ParamLimits

0xda10,	// (0x0001d195) tabs_3_long_active_pane_srt_t1

0x3f1e,	// (0x000136a3) bg_active_tab_pane_g1_cp5_srt

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp5_srt

0x3f27,	// (0x000136ac) bg_active_tab_pane_g3_cp5_srt

0x5f47,	// (0x000156cc) navi_text_pane_srt_t1

0x5f3f,	// (0x000156c4) navi_icon_pane_srt_g1

0x440c,	// (0x00013b91) midp_editing_number_pane_srt

0x4252,	// (0x000139d7) midp_ticker_pane_srt

0x4414,	// (0x00013b99) midp_ticker_pane_srt_g1

0x441c,	// (0x00013ba1) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001eef2) midp_ticker_pane_srt_g

0x4424,	// (0x00013ba9) midp_ticker_pane_srt_t1

0x5f30,	// (0x000156b5) midp_editing_number_pane_t1_copy1

0x4598,	// (0x00013d1d) listscroll_midp_pane

0x4598,	// (0x00013d1d) midp_form_pane

0x42be,	// (0x00013a43) midp_info_popup_window_ParamLimits

0x42be,	// (0x00013a43) midp_info_popup_window

0x35d9,	// (0x00012d5e) bg_popup_sub_pane_cp50_ParamLimits

0x35d9,	// (0x00012d5e) bg_popup_sub_pane_cp50

0x5022,	// (0x000147a7) listscroll_midp_info_pane_ParamLimits

0x5022,	// (0x000147a7) listscroll_midp_info_pane

0x500a,	// (0x0001478f) listscroll_form_midp_pane_ParamLimits

0x500a,	// (0x0001478f) listscroll_form_midp_pane

0x5016,	// (0x0001479b) scroll_bar_cp050

0xd89b,	// (0x0001d020) list_midp_pane

0x70a8,	// (0x0001682d) signal_pane_g2_cp

0x4f24,	// (0x000146a9) listscroll_midp_info_pane_t1_ParamLimits

0x4f24,	// (0x000146a9) listscroll_midp_info_pane_t1

0x4f3c,	// (0x000146c1) listscroll_midp_info_pane_t2_ParamLimits

0x4f3c,	// (0x000146c1) listscroll_midp_info_pane_t2

0x4f7a,	// (0x000146ff) listscroll_midp_info_pane_t3_ParamLimits

0x4f7a,	// (0x000146ff) listscroll_midp_info_pane_t3

0x4fb4,	// (0x00014739) listscroll_midp_info_pane_t4_ParamLimits

0x4fb4,	// (0x00014739) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001efa5) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001efa5) listscroll_midp_info_pane_t

0x369d,	// (0x00012e22) scroll_pane_cp21

0x4ec2,	// (0x00014647) form_midp_field_choice_group_pane

0x4ecb,	// (0x00014650) form_midp_field_text_pane

0x4f0a,	// (0x0001468f) form_midp_field_time_pane

0x4f12,	// (0x00014697) form_midp_gauge_slider_pane

0x4f1b,	// (0x000146a0) form_midp_gauge_wait_pane

0x24cf,	// (0x00011c54) form_midp_image_pane

0xd884,	// (0x0001d009) list_single_midp_pane_ParamLimits

0xd884,	// (0x0001d009) list_single_midp_pane

0xd862,	// (0x0001cfe7) form_midp_field_text_pane_t1

0x4c06,	// (0x0001438b) input_focus_pane_cp050

0x4e82,	// (0x00014607) list_midp_form_text_pane

0x4e1a,	// (0x0001459f) form_midp_field_choice_group_pane_t1

0x4e28,	// (0x000145ad) input_focus_pane_cp051

0x4e3c,	// (0x000145c1) list_midp_choice_pane

0x24cf,	// (0x00011c54) status_idle_pane

0x4dfe,	// (0x00014583) form_midp_field_time_pane_t1

0x24c5,	// (0x00011c4a) wait_anim_pane_g2_copy1

0x4e0c,	// (0x00014591) form_midp_field_time_pane_t2

0x0001,

0x436c,	// (0x00013af1) aid_navinavi_width_2_pane

0xf81b,	// (0x0001efa0) form_midp_field_time_pane_t

0x24cf,	// (0x00011c54) input_focus_pane_cp052

0x24cf,	// (0x00011c54) bg_input_focus_pane_cp040

0x4dbe,	// (0x00014543) form_midp_gauge_slider_pane_t1

0x4dcc,	// (0x00014551) form_midp_gauge_slider_pane_t2

0xd846,	// (0x0001cfcb) form_midp_gauge_slider_pane_t3

0xd854,	// (0x0001cfd9) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001ef97) form_midp_gauge_slider_pane_t

0x4df6,	// (0x0001457b) form_midp_slider_pane

0x25af,	// (0x00011d34) bg_input_focus_pane_cp041_ParamLimits

0x25af,	// (0x00011d34) bg_input_focus_pane_cp041

0x4d8b,	// (0x00014510) form_midp_gauge_wait_pane_t1_ParamLimits

0x4d8b,	// (0x00014510) form_midp_gauge_wait_pane_t1

0x4d9d,	// (0x00014522) form_midp_gauge_wait_pane_t2_ParamLimits

0x4d9d,	// (0x00014522) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001ef92) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001ef92) form_midp_gauge_wait_pane_t

0x4daf,	// (0x00014534) form_midp_wait_pane_ParamLimits

0x4daf,	// (0x00014534) form_midp_wait_pane

0x4d55,	// (0x000144da) form_midp_image_pane_g1

0x4d5e,	// (0x000144e3) form_midp_image_pane_t1

0x4d6d,	// (0x000144f2) form_midp_image_pane_t2

0x4d7c,	// (0x00014501) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001ef8b) form_midp_image_pane_t

0x4d3d,	// (0x000144c2) list_single_midp_pane_g1

0x4d46,	// (0x000144cb) list_single_midp_pane_t1

0xd831,	// (0x0001cfb6) list_midp_form_item_pane_ParamLimits

0xd831,	// (0x0001cfb6) list_midp_form_item_pane

0x4314,	// (0x00013a99) list_midp_form_item_pane_t1

0x4323,	// (0x00013aa8) midp_ticker_pane_g1

0x432f,	// (0x00013ab4) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001eed8) midp_ticker_pane_g

0x433b,	// (0x00013ac0) midp_ticker_pane_t1

0x61b4,	// (0x00015939) midp_editing_number_pane_t1

0x6192,	// (0x00015917) midp_editing_number_pane

0x61a1,	// (0x00015926) midp_ticker_pane

0x5ef8,	// (0x0001567d) ai_message_heading_pane

0x24cf,	// (0x00011c54) bg_popup_window_pane_cp14

0x5f00,	// (0x00015685) listscroll_ai_message_pane

0x5e82,	// (0x00015607) ai_message_heading_pane_g1_ParamLimits

0x5e82,	// (0x00015607) ai_message_heading_pane_g1

0x5e8e,	// (0x00015613) ai_message_heading_pane_g2_ParamLimits

0x5e8e,	// (0x00015613) ai_message_heading_pane_g2

0x5e9a,	// (0x0001561f) ai_message_heading_pane_g3_ParamLimits

0x5e9a,	// (0x0001561f) ai_message_heading_pane_g3

0x5ea6,	// (0x0001562b) ai_message_heading_pane_g4_ParamLimits

0x5ea6,	// (0x0001562b) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001f0cc) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001f0cc) ai_message_heading_pane_g

0x5eb2,	// (0x00015637) ai_message_heading_pane_t1_ParamLimits

0x5eb2,	// (0x00015637) ai_message_heading_pane_t1

0x5ecc,	// (0x00015651) ai_message_heading_pane_t2_ParamLimits

0x5ecc,	// (0x00015651) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001f0d5) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001f0d5) ai_message_heading_pane_t

0x5ede,	// (0x00015663) bg_popup_heading_pane_cp1_ParamLimits

0x5ede,	// (0x00015663) bg_popup_heading_pane_cp1

0x5e70,	// (0x000155f5) list_ai_message_pane_ParamLimits

0x5e70,	// (0x000155f5) list_ai_message_pane

0x369d,	// (0x00012e22) scroll_pane_cp10

0x5e0c,	// (0x00015591) list_ai_message_pane_g1

0x5e14,	// (0x00015599) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001f0a9) list_ai_message_pane_g

0x5e1c,	// (0x000155a1) list_ai_message_pane_t1_ParamLimits

0x5e1c,	// (0x000155a1) list_ai_message_pane_t1

0x5e31,	// (0x000155b6) list_ai_message_pane_t2_ParamLimits

0x5e31,	// (0x000155b6) list_ai_message_pane_t2

0x5e46,	// (0x000155cb) list_ai_message_pane_t3_ParamLimits

0x5e46,	// (0x000155cb) list_ai_message_pane_t3

0x5e5b,	// (0x000155e0) list_ai_message_pane_t4_ParamLimits

0x5e5b,	// (0x000155e0) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001f0ae) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001f0ae) list_ai_message_pane_t

0xd9dd,	// (0x0001d162) cell_ai_soft_ind_pane_ParamLimits

0xd9dd,	// (0x0001d162) cell_ai_soft_ind_pane

0x434d,	// (0x00013ad2) cell_ai_soft_ind_pane_g1_ParamLimits

0x434d,	// (0x00013ad2) cell_ai_soft_ind_pane_g1

0x24cf,	// (0x00011c54) grid_highlight_cp1

0x435a,	// (0x00013adf) text_secondary_cp56_ParamLimits

0x435a,	// (0x00013adf) text_secondary_cp56

0x5dcc,	// (0x00015551) example_general_pane_ParamLimits

0x5dcc,	// (0x00015551) example_general_pane

0x5dd8,	// (0x0001555d) example_parent_pane_g1_ParamLimits

0x5dd8,	// (0x0001555d) example_parent_pane_g1

0x5de4,	// (0x00015569) example_parent_pane_t1_ParamLimits

0x5de4,	// (0x00015569) example_parent_pane_t1

0xbd51,	// (0x0001b4d6) popup_preview_text_window_ParamLimits

0xbd51,	// (0x0001b4d6) popup_preview_text_window

0x4183,	// (0x00013908) list_single_pane_cp2_g4

0x28fa,	// (0x0001207f) bg_popup_preview_window_pane_ParamLimits

0x28fa,	// (0x0001207f) bg_popup_preview_window_pane

0x5b18,	// (0x0001529d) popup_preview_text_window_t1_ParamLimits

0x5b18,	// (0x0001529d) popup_preview_text_window_t1

0x5b36,	// (0x000152bb) popup_preview_text_window_t2_ParamLimits

0x5b36,	// (0x000152bb) popup_preview_text_window_t2

0x5b7f,	// (0x00015304) popup_preview_text_window_t3_ParamLimits

0x5b7f,	// (0x00015304) popup_preview_text_window_t3

0x5bc4,	// (0x00015349) popup_preview_text_window_t4_ParamLimits

0x5bc4,	// (0x00015349) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001f07d) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001f07d) popup_preview_text_window_t

0x5c42,	// (0x000153c7) scroll_pane_cp11

0x4ad8,	// (0x0001425d) bg_popup_preview_window_pane_g1

0x5ad8,	// (0x0001525d) bg_popup_preview_window_pane_g2

0x5ae0,	// (0x00015265) bg_popup_preview_window_pane_g3

0x5ae8,	// (0x0001526d) bg_popup_preview_window_pane_g4

0x5af0,	// (0x00015275) bg_popup_preview_window_pane_g5

0x5af8,	// (0x0001527d) bg_popup_preview_window_pane_g6

0x5b00,	// (0x00015285) bg_popup_preview_window_pane_g7

0x5b08,	// (0x0001528d) bg_popup_preview_window_pane_g8

0xf53a,	// (0x0001ecbf) aid_popup_width_pane

0xbccd,	// (0x0001b452) popup_midp_note_alarm_window_ParamLimits

0xbccd,	// (0x0001b452) popup_midp_note_alarm_window

0x3385,	// (0x00012b0a) data_form_pane_ParamLimits

0xce80,	// (0x0001c605) form_field_data_pane_g1

0xce8a,	// (0x0001c60f) form_field_data_pane_t1_ParamLimits

0x33b3,	// (0x00012b38) input_focus_pane_ParamLimits

0x33c1,	// (0x00012b46) data_form_wide_pane_ParamLimits

0x33cd,	// (0x00012b52) form_field_data_wide_pane_g1

0x33ed,	// (0x00012b72) form_field_data_wide_pane_t1_ParamLimits

0x2ba9,	// (0x0001232e) input_focus_pane_cp6_ParamLimits

0xcfc6,	// (0x0001c74b) input_popup_find_pane_g1_ParamLimits

0xcfc6,	// (0x0001c74b) input_popup_find_pane_g1

0x0518,	// (0x0000fc9d) aid_navi_side_left_pane

0x052d,	// (0x0000fcb2) aid_navi_side_right_pane

0x54e5,	// (0x00014c6a) bg_popup_window_pane_cp30_ParamLimits

0x54e5,	// (0x00014c6a) bg_popup_window_pane_cp30

0x555f,	// (0x00014ce4) popup_midp_note_alarm_window_g1_ParamLimits

0x555f,	// (0x00014ce4) popup_midp_note_alarm_window_g1

0x558f,	// (0x00014d14) popup_midp_note_alarm_window_t1_ParamLimits

0x558f,	// (0x00014d14) popup_midp_note_alarm_window_t1

0x5630,	// (0x00014db5) popup_midp_note_alarm_window_t2_ParamLimits

0x5630,	// (0x00014db5) popup_midp_note_alarm_window_t2

0x56de,	// (0x00014e63) popup_midp_note_alarm_window_t3_ParamLimits

0x56de,	// (0x00014e63) popup_midp_note_alarm_window_t3

0x5710,	// (0x00014e95) popup_midp_note_alarm_window_t4_ParamLimits

0x5710,	// (0x00014e95) popup_midp_note_alarm_window_t4

0x5736,	// (0x00014ebb) popup_midp_note_alarm_window_t5_ParamLimits

0x5736,	// (0x00014ebb) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001f01a) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001f01a) popup_midp_note_alarm_window_t

0x57e2,	// (0x00014f67) wait_bar_pane_cp1_ParamLimits

0x57e2,	// (0x00014f67) wait_bar_pane_cp1

0x24cf,	// (0x00011c54) wait_anim_pane_copy1

0x24cf,	// (0x00011c54) wait_border_pane_copy1

0x51cb,	// (0x00014950) wait_border_pane_g1_copy1

0x3404,	// (0x00012b89) form_field_popup_pane_g1

0xcea4,	// (0x0001c629) form_field_popup_pane_t1_ParamLimits

0x33b3,	// (0x00012b38) input_focus_pane_cp7_ParamLimits

0x3424,	// (0x00012ba9) list_form_pane_ParamLimits

0x3430,	// (0x00012bb5) form_field_popup_wide_pane_g1

0x3438,	// (0x00012bbd) form_field_popup_wide_pane_t1_ParamLimits

0x33b3,	// (0x00012b38) input_focus_pane_cp8_ParamLimits

0x344d,	// (0x00012bd2) list_form_wide_pane_ParamLimits

0x63d4,	// (0x00015b59) aid_size_cell_graphic_pane

0xcf23,	// (0x0001c6a8) data_form_pane_t1_ParamLimits

0xdb91,	// (0x0001d316) data_form_wide_pane_t1_ParamLimits

0xd4b6,	// (0x0001cc3b) bg_status_flat_pane

0xc734,	// (0x0001beb9) title_pane_t1_ParamLimits

0x2577,	// (0x00011cfc) title_pane_t2_ParamLimits

0x259d,	// (0x00011d22) title_pane_t3_ParamLimits

0xf557,	// (0x0001ecdc) title_pane_t_ParamLimits

0x3b1c,	// (0x000132a1) level_1_signal_ParamLimits

0x3b2e,	// (0x000132b3) level_2_signal_ParamLimits

0x3b41,	// (0x000132c6) level_3_signal_ParamLimits

0x3b54,	// (0x000132d9) level_4_signal_ParamLimits

0x3b67,	// (0x000132ec) level_5_signal_ParamLimits

0x3b7a,	// (0x000132ff) level_6_signal_ParamLimits

0x3b8d,	// (0x00013312) level_7_signal_ParamLimits

0x3b1c,	// (0x000132a1) level_1_battery_ParamLimits

0x3b2e,	// (0x000132b3) level_2_battery_ParamLimits

0x3b41,	// (0x000132c6) level_3_battery_ParamLimits

0x3b54,	// (0x000132d9) level_4_battery_ParamLimits

0x3b67,	// (0x000132ec) level_5_battery_ParamLimits

0x3b7a,	// (0x000132ff) level_6_battery_ParamLimits

0x3b8d,	// (0x00013312) level_7_battery_ParamLimits

0x53ea,	// (0x00014b6f) bg_status_flat_pane_g1

0x53f2,	// (0x00014b77) bg_status_flat_pane_g2

0x53fa,	// (0x00014b7f) bg_status_flat_pane_g3

0x5402,	// (0x00014b87) bg_status_flat_pane_g4

0x540a,	// (0x00014b8f) bg_status_flat_pane_g5

0x5412,	// (0x00014b97) bg_status_flat_pane_g6

0x541a,	// (0x00014b9f) bg_status_flat_pane_g7

0xc7c0,	// (0x0001bf45) tabs_3_active_pane_t1_ParamLimits

0xc7c0,	// (0x0001bf45) tabs_3_passive_pane_t1_ParamLimits

0xc7d2,	// (0x0001bf57) tabs_4_active_pane_t1_ParamLimits

0xc7d2,	// (0x0001bf57) tabs_4_1_passive_pane_t1_ParamLimits

0xcfd4,	// (0x0001c759) tabs_2_active_pane_t1_ParamLimits

0xcfd4,	// (0x0001c759) tabs_2_passive_pane_t1_ParamLimits

0x25af,	// (0x00011d34) bg_active_tab_pane_cp4_ParamLimits

0xcfe6,	// (0x0001c76b) tabs_2_long_active_pane_t1_ParamLimits

0x4598,	// (0x00013d1d) bg_passive_tab_pane_cp4_ParamLimits

0x10d1,	// (0x00010856) list_single_midp_graphic_pane_t1_ParamLimits

0x25af,	// (0x00011d34) bg_active_tab_pane_cp5_ParamLimits

0xcff9,	// (0x0001c77e) tabs_3_long_active_pane_t1_ParamLimits

0x4598,	// (0x00013d1d) bg_passive_tab_pane_cp5_ParamLimits

0x10d1,	// (0x00010856) list_single_midp_graphic_pane_t1

0xd4b6,	// (0x0001cc3b) bg_status_flat_pane_ParamLimits

0x473a,	// (0x00013ebf) indicator_pane_cp2_ParamLimits

0x473a,	// (0x00013ebf) indicator_pane_cp2

0xd634,	// (0x0001cdb9) navi_pane_srt_ParamLimits

0xd634,	// (0x0001cdb9) navi_pane_srt

0x4889,	// (0x0001400e) popup_clock_digital_analogue_window_cp1

0x26a6,	// (0x00011e2b) indicator_pane_t1

0x4252,	// (0x000139d7) copy_highlight_pane

0x4252,	// (0x000139d7) cursor_graphics_pane

0x4252,	// (0x000139d7) graphic_within_text_pane

0x4252,	// (0x000139d7) link_highlight_pane

0x5c05,	// (0x0001538a) popup_preview_text_window_t5_ParamLimits

0x5c05,	// (0x0001538a) popup_preview_text_window_t5

0x4374,	// (0x00013af9) cursor_digital_pane

0x4374,	// (0x00013af9) cursor_primary_pane

0x4385,	// (0x00013b0a) cursor_primary_small_pane

0x438d,	// (0x00013b12) cursor_secondary_pane

0x4395,	// (0x00013b1a) cursor_title_pane

0x4374,	// (0x00013af9) link_highlight_digital_pane

0x437c,	// (0x00013b01) link_highlight_primary_pane

0x4385,	// (0x00013b0a) link_highlight_primary_small_pane

0x438d,	// (0x00013b12) link_highlight_secondary_pane

0x4395,	// (0x00013b1a) link_highlight_title_pane

0x4374,	// (0x00013af9) copy_highlight_digital_pane

0x4374,	// (0x00013af9) copy_highlight_primary_pane

0x4385,	// (0x00013b0a) copy_highlight_primary_small_pane

0x438d,	// (0x00013b12) copy_highlight_secondary_pane

0x4395,	// (0x00013b1a) copy_highlight_title_pane

0x438d,	// (0x00013b12) graphic_text_digital_pane

0x5488,	// (0x00014c0d) graphic_text_primary_pane

0x5491,	// (0x00014c16) graphic_text_primary_small_pane

0x4385,	// (0x00013b0a) graphic_text_secondary_pane

0x4374,	// (0x00013af9) graphic_text_title_pane

0xd2ca,	// (0x0001ca4f) cursor_primary_pane_g1

0x547a,	// (0x00014bff) cursor_text_primary_t1

0xd8d7,	// (0x0001d05c) cursor_primary_small_pane_g1

0x546c,	// (0x00014bf1) cursor_text_primary_small_t1

0xd8cd,	// (0x0001d052) cursor_primary_small_pane_g1_copy1

0x5454,	// (0x00014bd9) cursor_text_primary_small_t1_copy1

0x5432,	// (0x00014bb7) cursor_text_title_t1

0xd8c3,	// (0x0001d048) cursor_title_pane_g1

0xd2ca,	// (0x0001ca4f) cursor_digital_pane_g1

0x43a7,	// (0x00013b2c) cursor_text_digital_t1

0x43cc,	// (0x00013b51) link_highlight_primary_pane_g1

0x53db,	// (0x00014b60) link_highlight_primary_pane_t1

0x43b5,	// (0x00013b3a) link_highlight_primary_small_pane_g1

0x43bd,	// (0x00013b42) link_highlight_primary_small_pane_t1

0x43cc,	// (0x00013b51) link_highlight_secondary_pane_g1

0x43d4,	// (0x00013b59) link_highlight_secondary_pane_t1

0x534f,	// (0x00014ad4) link_highlight_title_pane_g1

0x5357,	// (0x00014adc) link_highlight_title_pane_t1

0x5338,	// (0x00014abd) link_highlight_digital_pane_g1

0x5340,	// (0x00014ac5) link_highlight_digital_pane_t1

0x5210,	// (0x00014995) copy_highlight_primary_pane_g1

0x5218,	// (0x0001499d) copy_highlight_primary_pane_t1

0x51ea,	// (0x0001496f) copy_highlight_primary_small_pane_g1

0x5201,	// (0x00014986) copy_highlight_primary_small_pane_t1

0x43e3,	// (0x00013b68) copy_highlight_secondary_pane_g1

0x43eb,	// (0x00013b70) copy_highlight_secondary_pane_t1

0x51ea,	// (0x0001496f) copy_highlight_title_pane_g1

0x51f2,	// (0x00014977) copy_highlight_title_pane_t1

0x5210,	// (0x00014995) copy_highlight_digital_pane_g1

0x659e,	// (0x00015d23) copy_highlight_digital_pane_t1

0x64f2,	// (0x00015c77) graphic_text_primary_pane_g1

0x6582,	// (0x00015d07) graphic_text_primary_pane_t1

0x6590,	// (0x00015d15) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001f149) graphic_text_primary_pane_t

0x655e,	// (0x00015ce3) graphic_text_primary_small_pane_g1

0x6566,	// (0x00015ceb) graphic_text_primary_small_pane_t1

0x6574,	// (0x00015cf9) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001f144) graphic_text_primary_small_pane_t

0x653a,	// (0x00015cbf) graphic_text_secondary_pane_g1

0x6542,	// (0x00015cc7) graphic_text_secondary_pane_t1

0x6550,	// (0x00015cd5) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001f13f) graphic_text_secondary_pane_t

0x6516,	// (0x00015c9b) graphic_text_title_pane_g1

0x651e,	// (0x00015ca3) graphic_text_title_pane_t1

0x652c,	// (0x00015cb1) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001f13a) graphic_text_title_pane_t

0x64f2,	// (0x00015c77) graphic_text_digital_pane_g1

0x64fa,	// (0x00015c7f) graphic_text_digital_pane_t1

0x6508,	// (0x00015c8d) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001f135) graphic_text_digital_pane_t

0x25af,	// (0x00011d34) navi_icon_pane_srt_ParamLimits

0x25af,	// (0x00011d34) navi_icon_pane_srt

0x24cf,	// (0x00011c54) navi_midp_pane_srt

0x24cf,	// (0x00011c54) navi_navi_pane_srt

0x25af,	// (0x00011d34) navi_text_pane_srt_ParamLimits

0x25af,	// (0x00011d34) navi_text_pane_srt

0x64bd,	// (0x00015c42) navi_navi_icon_text_pane_srt

0x64c5,	// (0x00015c4a) navi_navi_pane_srt_g1_ParamLimits

0x64c5,	// (0x00015c4a) navi_navi_pane_srt_g1

0x64d7,	// (0x00015c5c) navi_navi_pane_srt_g2_ParamLimits

0x64d7,	// (0x00015c5c) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001f130) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001f130) navi_navi_pane_srt_g

0x64e9,	// (0x00015c6e) navi_navi_tabs_pane_srt

0x64bd,	// (0x00015c42) navi_navi_text_pane_srt

0x64bd,	// (0x00015c42) navi_navi_volume_pane_srt

0x64ae,	// (0x00015c33) navi_navi_text_pane_srt_t1

0x144b,	// (0x00010bd0) navi_navi_volume_pane_srt_g1

0x1453,	// (0x00010bd8) volume_small_pane_srt_ParamLimits

0x1453,	// (0x00010bd8) volume_small_pane_srt

0x07f8,	// (0x0000ff7d) volume_small_pane_srt_g1_ParamLimits

0x07f8,	// (0x0000ff7d) volume_small_pane_srt_g1

0x0808,	// (0x0000ff8d) volume_small_pane_srt_g2_ParamLimits

0x0808,	// (0x0000ff8d) volume_small_pane_srt_g2

0x0819,	// (0x0000ff9e) volume_small_pane_srt_g3_ParamLimits

0x0819,	// (0x0000ff9e) volume_small_pane_srt_g3

0x082a,	// (0x0000ffaf) volume_small_pane_srt_g4_ParamLimits

0x082a,	// (0x0000ffaf) volume_small_pane_srt_g4

0x083b,	// (0x0000ffc0) volume_small_pane_srt_g5_ParamLimits

0x083b,	// (0x0000ffc0) volume_small_pane_srt_g5

0x084c,	// (0x0000ffd1) volume_small_pane_srt_g6_ParamLimits

0x084c,	// (0x0000ffd1) volume_small_pane_srt_g6

0x085d,	// (0x0000ffe2) volume_small_pane_srt_g7_ParamLimits

0x085d,	// (0x0000ffe2) volume_small_pane_srt_g7

0x086e,	// (0x0000fff3) volume_small_pane_srt_g8_ParamLimits

0x086e,	// (0x0000fff3) volume_small_pane_srt_g8

0x087f,	// (0x00010004) volume_small_pane_srt_g9_ParamLimits

0x087f,	// (0x00010004) volume_small_pane_srt_g9

0x0890,	// (0x00010015) volume_small_pane_srt_g10_ParamLimits

0x0890,	// (0x00010015) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001eedd) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001eedd) volume_small_pane_srt_g

0x29a3,	// (0x00012128) query_popup_data_pane_cp2

0x6494,	// (0x00015c19) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6494,	// (0x00015c19) navi_navi_icon_text_pane_srt_t1

0x5488,	// (0x00014c0d) navi_tabs_2_long_pane_srt

0x5488,	// (0x00014c0d) navi_tabs_2_pane_srt

0x5488,	// (0x00014c0d) navi_tabs_3_long_pane_srt

0x5488,	// (0x00014c0d) navi_tabs_3_pane_srt

0x5488,	// (0x00014c0d) navi_tabs_4_pane_srt

0x142b,	// (0x00010bb0) tabs_2_active_pane_srt_ParamLimits

0x142b,	// (0x00010bb0) tabs_2_active_pane_srt

0x143b,	// (0x00010bc0) tabs_2_passive_pane_srt_ParamLimits

0x143b,	// (0x00010bc0) tabs_2_passive_pane_srt

0x4c06,	// (0x0001438b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4c06,	// (0x0001438b) bg_passive_tab_pane_cp1_srt

0x6460,	// (0x00015be5) bg_passive_tab_pane_g1_cp1_srt

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp1_srt

0x6469,	// (0x00015bee) bg_passive_tab_pane_g3_cp1_srt

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp1_srt_ParamLimits

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp1_srt

0x6472,	// (0x00015bf7) tabs_2_active_pane_srt_g1

0xdcbe,	// (0x0001d443) tabs_2_active_pane_srt_t1_ParamLimits

0xdcbe,	// (0x0001d443) tabs_2_active_pane_srt_t1

0x6460,	// (0x00015be5) bg_active_tab_pane_g1_cp1_srt

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp1_srt

0x6469,	// (0x00015bee) bg_active_tab_pane_g3_cp1_srt

0x13f8,	// (0x00010b7d) tabs_3_active_pane_srt_ParamLimits

0x13f8,	// (0x00010b7d) tabs_3_active_pane_srt

0x1409,	// (0x00010b8e) tabs_3_passive_pane_cp_srt_ParamLimits

0x1409,	// (0x00010b8e) tabs_3_passive_pane_cp_srt

0x141a,	// (0x00010b9f) tabs_3_passive_pane_srt_ParamLimits

0x141a,	// (0x00010b9f) tabs_3_passive_pane_srt

0x4c06,	// (0x0001438b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4c06,	// (0x0001438b) bg_passive_tab_pane_cp2_srt

0x43fa,	// (0x00013b7f) bg_passive_tab_pane_g1_cp2_srt

0x3e94,	// (0x00013619) bg_passive_tab_pane_g2_cp2_srt

0x4403,	// (0x00013b88) bg_passive_tab_pane_g3_cp2_srt

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp2_srt_ParamLimits

0x2844,	// (0x00011fc9) bg_active_tab_pane_cp2_srt

0x6446,	// (0x00015bcb) tabs_3_active_pane_srt_g1

0xdca8,	// (0x0001d42d) tabs_3_active_pane_srt_t1_ParamLimits

0xdca8,	// (0x0001d42d) tabs_3_active_pane_srt_t1

0x43fa,	// (0x00013b7f) bg_active_tab_pane_g1_cp2_srt

0x3e94,	// (0x00013619) bg_active_tab_pane_g2_cp2_srt

0x4403,	// (0x00013b88) bg_active_tab_pane_g3_cp2_srt

0x13b0,	// (0x00010b35) tabs_4_active_pane_srt_ParamLimits

0x13b0,	// (0x00010b35) tabs_4_active_pane_srt

0x13c2,	// (0x00010b47) tabs_4_passive_pane_cp2_srt_ParamLimits

0x13c2,	// (0x00010b47) tabs_4_passive_pane_cp2_srt

0x09f5,	// (0x0001017a) aid_size_cell_toolbar

0x5fd8,	// (0x0001575d) main_idle_act_pane_ParamLimits

0x0bc0,	// (0x00010345) popup_large_graphic_colour_window_ParamLimits

0xbfdd,	// (0x0001b762) popup_toolbar_window_ParamLimits

0xbfdd,	// (0x0001b762) popup_toolbar_window

0x61de,	// (0x00015963) list_single_graphic_2heading_pane_ParamLimits

0x61de,	// (0x00015963) list_single_graphic_2heading_pane

0x38cd,	// (0x00013052) aid_size_cell_apps_grid_lsc_pane

0x38df,	// (0x00013064) aid_size_cell_apps_grid_prt_pane

0x4598,	// (0x00013d1d) bg_wml_button_pane_cp1_ParamLimits

0x4598,	// (0x00013d1d) bg_wml_button_pane_cp1

0xd862,	// (0x0001cfe7) form_midp_field_text_pane_t1_ParamLimits

0x4c06,	// (0x0001438b) input_focus_pane_cp050_ParamLimits

0x4e82,	// (0x00014607) list_midp_form_text_pane_ParamLimits

0x4e28,	// (0x000145ad) input_focus_pane_cp051_ParamLimits

0x4e3c,	// (0x000145c1) list_midp_choice_pane_ParamLimits

0xd7ff,	// (0x0001cf84) list_single_2graphic_pane_cp3_ParamLimits

0xd7ff,	// (0x0001cf84) list_single_2graphic_pane_cp3

0xd812,	// (0x0001cf97) list_single_midp_graphic_pane_ParamLimits

0xd812,	// (0x0001cf97) list_single_midp_graphic_pane

0x0fd4,	// (0x00010759) list_single_graphic_2heading_pane_g1_ParamLimits

0x0fd4,	// (0x00010759) list_single_graphic_2heading_pane_g1

0x0fe0,	// (0x00010765) list_single_graphic_2heading_pane_g4_ParamLimits

0x0fe0,	// (0x00010765) list_single_graphic_2heading_pane_g4

0x0fec,	// (0x00010771) list_single_graphic_2heading_pane_g5_ParamLimits

0x0fec,	// (0x00010771) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001ef30) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001ef30) list_single_graphic_2heading_pane_g

0x0ff8,	// (0x0001077d) list_single_graphic_2heading_pane_t1_ParamLimits

0x0ff8,	// (0x0001077d) list_single_graphic_2heading_pane_t1

0x100c,	// (0x00010791) list_single_graphic_2heading_pane_t2_ParamLimits

0x100c,	// (0x00010791) list_single_graphic_2heading_pane_t2

0x1028,	// (0x000107ad) list_single_graphic_2heading_pane_t3_ParamLimits

0x1028,	// (0x000107ad) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001ef37) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001ef37) list_single_graphic_2heading_pane_t

0x49e8,	// (0x0001416d) bg_popup_sub_pane_cp2

0x4a12,	// (0x00014197) grid_toobar_pane

0x1040,	// (0x000107c5) cell_toolbar_pane_ParamLimits

0x1040,	// (0x000107c5) cell_toolbar_pane

0x4a7c,	// (0x00014201) cell_toolbar_pane_g1_ParamLimits

0x4a7c,	// (0x00014201) cell_toolbar_pane_g1

0x4a90,	// (0x00014215) cell_toolbar_pane_g2_ParamLimits

0x4a90,	// (0x00014215) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001ef45) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001ef45) cell_toolbar_pane_g

0x4ab2,	// (0x00014237) grid_highlight_pane_cp2_ParamLimits

0x4ab2,	// (0x00014237) grid_highlight_pane_cp2

0x4acc,	// (0x00014251) toolbar_button_pane

0x4ad8,	// (0x0001425d) toolbar_button_pane_g1

0x4ae0,	// (0x00014265) toolbar_button_pane_g2

0x4ae8,	// (0x0001426d) toolbar_button_pane_g3

0x4af0,	// (0x00014275) toolbar_button_pane_g4

0x4af8,	// (0x0001427d) toolbar_button_pane_g5

0x4b00,	// (0x00014285) toolbar_button_pane_g6

0x4b08,	// (0x0001428d) toolbar_button_pane_g7

0x4b10,	// (0x00014295) toolbar_button_pane_g8

0x4b18,	// (0x0001429d) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001ef4a) toolbar_button_pane_g

0x1078,	// (0x000107fd) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1078,	// (0x000107fd) list_single_2graphic_pane_g1_cp3

0xc035,	// (0x0001b7ba) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc035,	// (0x0001b7ba) list_single_2graphic_pane_g2_cp3

0x1095,	// (0x0001081a) list_single_2graphic_pane_g3_cp3

0x109d,	// (0x00010822) list_single_2graphic_pane_g4_cp3_ParamLimits

0x109d,	// (0x00010822) list_single_2graphic_pane_g4_cp3

0x10a9,	// (0x0001082e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x10a9,	// (0x0001082e) list_single_2graphic_pane_t1_cp3

0x10c5,	// (0x0001084a) list_single_midp_graphic_pane_g2_ParamLimits

0x10c5,	// (0x0001084a) list_single_midp_graphic_pane_g2

0x09fd,	// (0x00010182) aid_zoom_text_primary

0x0a05,	// (0x0001018a) aid_zoom_text_secondary

0xd322,	// (0x0001caa7) status_small_pane_g7_ParamLimits

0xd322,	// (0x0001caa7) status_small_pane_g7

0xd345,	// (0x0001caca) status_small_pane_t1_ParamLimits

0xc710,	// (0x0001be95) title_pane_g2

0x0003,

0xf54e,	// (0x0001ecd3) title_pane_g

0xc988,	// (0x0001c10d) aid_size_cell_colour_1_pane_ParamLimits

0xc988,	// (0x0001c10d) aid_size_cell_colour_1_pane

0xc99c,	// (0x0001c121) aid_size_cell_colour_2_pane_ParamLimits

0xc99c,	// (0x0001c121) aid_size_cell_colour_2_pane

0xc9b0,	// (0x0001c135) aid_size_cell_colour_3_pane_ParamLimits

0xc9b0,	// (0x0001c135) aid_size_cell_colour_3_pane

0xc9c4,	// (0x0001c149) aid_size_cell_colour_4_pane_ParamLimits

0xc9c4,	// (0x0001c149) aid_size_cell_colour_4_pane

0x0455,	// (0x0000fbda) title_pane_stacon_g1_ParamLimits

0x0455,	// (0x0000fbda) title_pane_stacon_g1

0x526f,	// (0x000149f4) popup_note_wait_window_g3_ParamLimits

0x526f,	// (0x000149f4) popup_note_wait_window_g3

0x52e5,	// (0x00014a6a) popup_note_wait_window_t5_ParamLimits

0x52e5,	// (0x00014a6a) popup_note_wait_window_t5

0x24cf,	// (0x00011c54) main_feb_china_hwr_fs_writing_pane

0xb9e5,	// (0x0001b16a) popup_feb_china_hwr_fs_window_ParamLimits

0xb9e5,	// (0x0001b16a) popup_feb_china_hwr_fs_window

0xc046,	// (0x0001b7cb) aid_size_cell_hwr_fs_ParamLimits

0xc046,	// (0x0001b7cb) aid_size_cell_hwr_fs

0x4c06,	// (0x0001438b) bg_popup_sub_pane_cp3_ParamLimits

0x4c06,	// (0x0001438b) bg_popup_sub_pane_cp3

0xc05b,	// (0x0001b7e0) grid_hwr_fs_pane_ParamLimits

0xc05b,	// (0x0001b7e0) grid_hwr_fs_pane

0x1114,	// (0x00010899) linegrid_hwr_fs_pane_ParamLimits

0x1114,	// (0x00010899) linegrid_hwr_fs_pane

0xc073,	// (0x0001b7f8) cell_hwr_fs_pane_ParamLimits

0xc073,	// (0x0001b7f8) cell_hwr_fs_pane

0x4c12,	// (0x00014397) linegrid_hwr_fs_pane_g1_ParamLimits

0x4c12,	// (0x00014397) linegrid_hwr_fs_pane_g1

0xd7d3,	// (0x0001cf58) linegrid_hwr_fs_pane_g2_ParamLimits

0xd7d3,	// (0x0001cf58) linegrid_hwr_fs_pane_g2

0x4c30,	// (0x000143b5) linegrid_hwr_fs_pane_g3_ParamLimits

0x4c30,	// (0x000143b5) linegrid_hwr_fs_pane_g3

0x1146,	// (0x000108cb) linegrid_hwr_fs_pane_g4_ParamLimits

0x1146,	// (0x000108cb) linegrid_hwr_fs_pane_g4

0x1160,	// (0x000108e5) linegrid_hwr_fs_pane_g5_ParamLimits

0x1160,	// (0x000108e5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001ef70) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001ef70) linegrid_hwr_fs_pane_g

0x4c3c,	// (0x000143c1) cell_hwr_fs_pane_g1_ParamLimits

0x4c3c,	// (0x000143c1) cell_hwr_fs_pane_g1

0x491f,	// (0x000140a4) cell_hwr_fs_pane_g2_ParamLimits

0x491f,	// (0x000140a4) cell_hwr_fs_pane_g2

0xd7e5,	// (0x0001cf6a) cell_hwr_fs_pane_g3_ParamLimits

0xd7e5,	// (0x0001cf6a) cell_hwr_fs_pane_g3

0xd7f2,	// (0x0001cf77) cell_hwr_fs_pane_g4_ParamLimits

0xd7f2,	// (0x0001cf77) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001ef7b) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001ef7b) cell_hwr_fs_pane_g

0xc099,	// (0x0001b81e) cell_hwr_fs_pane_t1

0x24cf,	// (0x00011c54) grid_highlight_pane_cp6

0x24cf,	// (0x00011c54) main_idle_act2_pane

0x3684,	// (0x00012e09) aid_inside_area_popup_secondary

0xd8e1,	// (0x0001d066) aid_inside_area_window_primary_ParamLimits

0xd8e1,	// (0x0001d066) aid_inside_area_window_primary

0x65ad,	// (0x00015d32) ai2_news_ticker_pane

0x65b5,	// (0x00015d3a) aid_size_cell_ai1_link_ParamLimits

0x65b5,	// (0x00015d3a) aid_size_cell_ai1_link

0xdcd4,	// (0x0001d459) popup_ai2_data_window_ParamLimits

0xdcd4,	// (0x0001d459) popup_ai2_data_window

0x65e5,	// (0x00015d6a) popup_ai2_link_window_ParamLimits

0x65e5,	// (0x00015d6a) popup_ai2_link_window

0x4c06,	// (0x0001438b) bg_popup_sub_pane_cp4_ParamLimits

0x4c06,	// (0x0001438b) bg_popup_sub_pane_cp4

0x65f9,	// (0x00015d7e) grid_ai2_link_pane_ParamLimits

0x65f9,	// (0x00015d7e) grid_ai2_link_pane

0x6610,	// (0x00015d95) popup_ai2_link_window_g1_ParamLimits

0x6610,	// (0x00015d95) popup_ai2_link_window_g1

0x661c,	// (0x00015da1) popup_ai2_link_window_g2_ParamLimits

0x661c,	// (0x00015da1) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001f14e) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001f14e) popup_ai2_link_window_g

0x662b,	// (0x00015db0) ai2_mp_button_pane

0x6633,	// (0x00015db8) ai2_mp_volume_pane

0x4e28,	// (0x000145ad) bg_popup_sub_pane_cp5_ParamLimits

0x4e28,	// (0x000145ad) bg_popup_sub_pane_cp5

0x663b,	// (0x00015dc0) heading_ai2_gene_pane_ParamLimits

0x663b,	// (0x00015dc0) heading_ai2_gene_pane

0x6647,	// (0x00015dcc) list_ai2_gene_pane_ParamLimits

0x6647,	// (0x00015dcc) list_ai2_gene_pane

0x668f,	// (0x00015e14) cell_ai2_link_pane_ParamLimits

0x668f,	// (0x00015e14) cell_ai2_link_pane

0x66a5,	// (0x00015e2a) cell_ai2_link_pane_g1

0x24cf,	// (0x00011c54) grid_highlight_pane_cp7

0x1468,	// (0x00010bed) ai2_mp_volume_pane_g1

0x6775,	// (0x00015efa) ai2_mp_volume_pane_g2

0xdcfe,	// (0x0001d483) list_ai2_gene_pane_t1

0x677d,	// (0x00015f02) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001f167) ai2_mp_volume_pane_g

0x1470,	// (0x00010bf5) volume_small_pane_cp3

0x6785,	// (0x00015f0a) aid_size_cell_ai2_button

0x678d,	// (0x00015f12) grid_ai2_button_pane

0x6796,	// (0x00015f1b) cell_ai2_button_pane_ParamLimits

0x6796,	// (0x00015f1b) cell_ai2_button_pane

0x24c5,	// (0x00011c4a) cell_ai2_button_pane_g1

0x24cf,	// (0x00011c54) grid_highlight_pane_cp8

0x6735,	// (0x00015eba) ai2_gene_pane_t1_ParamLimits

0x6735,	// (0x00015eba) ai2_gene_pane_t1

0xb95f,	// (0x0001b0e4) aid_height_parent_landscape

0xda3d,	// (0x0001d1c2) aid_height_set_list

0x5fd8,	// (0x0001575d) aid_size_parent

0x63d4,	// (0x00015b59) aid_size_cell_graphic_pane_ParamLimits

0x6657,	// (0x00015ddc) popup_ai2_data_window_g1_ParamLimits

0x6657,	// (0x00015ddc) popup_ai2_data_window_g1

0x6663,	// (0x00015de8) ai2_news_ticker_pane_g1

0x666b,	// (0x00015df0) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001f153) ai2_news_ticker_pane_g

0x6673,	// (0x00015df8) ai2_news_ticker_pane_t1

0x6681,	// (0x00015e06) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001f158) ai2_news_ticker_pane_t

0x66ae,	// (0x00015e33) heading_ai2_gene_pane_g1

0x66b6,	// (0x00015e3b) heading_ai2_gene_pane_t1_ParamLimits

0x66b6,	// (0x00015e3b) heading_ai2_gene_pane_t1

0x66cb,	// (0x00015e50) list_highlight_pane_cp6

0xdce8,	// (0x0001d46d) ai2_gene_pane_ParamLimits

0xdce8,	// (0x0001d46d) ai2_gene_pane

0xdd0c,	// (0x0001d491) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001f15d) list_ai2_gene_pane_t

0x6706,	// (0x00015e8b) list_highlight_pane_cp8_ParamLimits

0x6706,	// (0x00015e8b) list_highlight_pane_cp8

0x6717,	// (0x00015e9c) ai2_gene_pane_g1_ParamLimits

0x6717,	// (0x00015e9c) ai2_gene_pane_g1

0x6729,	// (0x00015eae) ai2_gene_pane_g2_ParamLimits

0x6729,	// (0x00015eae) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001f162) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001f162) ai2_gene_pane_g

0x2dce,	// (0x00012553) scroll_pane_cp12

0xb91e,	// (0x0001b0a3) control_pane_t3_ParamLimits

0xb91e,	// (0x0001b0a3) control_pane_t3

0xd336,	// (0x0001cabb) status_small_pane_g8_ParamLimits

0xd336,	// (0x0001cabb) status_small_pane_g8

0xba7a,	// (0x0001b1ff) popup_find_window_ParamLimits

0xbd07,	// (0x0001b48c) popup_note_image_window_ParamLimits

0x4a4e,	// (0x000141d3) list_double2_graphic_pane_vc_g1_ParamLimits

0x4a4e,	// (0x000141d3) list_double2_graphic_pane_vc_g1

0x418b,	// (0x00013910) list_double2_graphic_pane_vc_g2_ParamLimits

0x418b,	// (0x00013910) list_double2_graphic_pane_vc_g2

0x4a5a,	// (0x000141df) list_double2_graphic_pane_vc_g3_ParamLimits

0x4a5a,	// (0x000141df) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001ef3e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001ef3e) list_double2_graphic_pane_vc_g

0x4a66,	// (0x000141eb) list_double2_graphic_pane_vc_t1_ParamLimits

0x4a66,	// (0x000141eb) list_double2_graphic_pane_vc_t1

0x418b,	// (0x00013910) list_single_heading_pane_vc_g1_ParamLimits

0x418b,	// (0x00013910) list_single_heading_pane_vc_g1

0x4a5a,	// (0x000141df) list_single_heading_pane_vc_g2_ParamLimits

0x4a5a,	// (0x000141df) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ed4d) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ed4d) list_single_heading_pane_vc_g

0x4b20,	// (0x000142a5) list_single_heading_pane_vc_t1_ParamLimits

0x4b20,	// (0x000142a5) list_single_heading_pane_vc_t1

0x4b38,	// (0x000142bd) list_single_heading_pane_vc_t2_ParamLimits

0x4b38,	// (0x000142bd) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001ef5f) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001ef5f) list_single_heading_pane_vc_t

0x4b54,	// (0x000142d9) list_setting_number_pane_vc_g1_ParamLimits

0x4b54,	// (0x000142d9) list_setting_number_pane_vc_g1

0x4b60,	// (0x000142e5) list_setting_number_pane_vc_g2_ParamLimits

0x4b60,	// (0x000142e5) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001ef64) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001ef64) list_setting_number_pane_vc_g

0x4b6c,	// (0x000142f1) list_setting_number_pane_vc_t1_ParamLimits

0x4b6c,	// (0x000142f1) list_setting_number_pane_vc_t1

0x4b80,	// (0x00014305) list_setting_number_pane_vc_t2_ParamLimits

0x4b80,	// (0x00014305) list_setting_number_pane_vc_t2

0x4b9c,	// (0x00014321) list_setting_number_pane_vc_t3_ParamLimits

0x4b9c,	// (0x00014321) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001ef69) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001ef69) list_setting_number_pane_vc_t

0x4bca,	// (0x0001434f) set_value_pane_vc_ParamLimits

0x4bca,	// (0x0001434f) set_value_pane_vc

0x61de,	// (0x00015963) list_double2_graphic_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_double2_graphic_pane_vc

0x61de,	// (0x00015963) list_double2_large_graphic_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_double2_large_graphic_pane_vc

0x61de,	// (0x00015963) list_double2_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_double2_pane_vc

0x61de,	// (0x00015963) list_double_graphic_heading_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_double_graphic_heading_pane_vc

0x61de,	// (0x00015963) list_double_graphic_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_double_graphic_pane_vc

0x61de,	// (0x00015963) list_double_heading_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_double_heading_pane_vc

0x61f0,	// (0x00015975) list_double_large_graphic_pane_vc_ParamLimits

0x61f0,	// (0x00015975) list_double_large_graphic_pane_vc

0x61de,	// (0x00015963) list_double_number_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_double_number_pane_vc

0x61de,	// (0x00015963) list_double_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_double_pane_vc

0x61de,	// (0x00015963) list_double_time_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_double_time_pane_vc

0x61de,	// (0x00015963) list_setting_number_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_setting_number_pane_vc

0x61de,	// (0x00015963) list_setting_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_setting_pane_vc

0x61de,	// (0x00015963) list_single_graphic_heading_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_single_graphic_heading_pane_vc

0x61de,	// (0x00015963) list_single_heading_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_single_heading_pane_vc

0x61de,	// (0x00015963) list_single_number_heading_pane_vc_ParamLimits

0x61de,	// (0x00015963) list_single_number_heading_pane_vc

0x4a4e,	// (0x000141d3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4a4e,	// (0x000141d3) list_double_graphic_heading_pane_vc_g1

0x67ca,	// (0x00015f4f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x67ca,	// (0x00015f4f) list_double_graphic_heading_pane_vc_g2

0x67d6,	// (0x00015f5b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x67d6,	// (0x00015f5b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001f16e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001f16e) list_double_graphic_heading_pane_vc_g

0x67e2,	// (0x00015f67) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x67e2,	// (0x00015f67) list_double_graphic_heading_pane_vc_t1

0x67fe,	// (0x00015f83) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x67fe,	// (0x00015f83) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001f175) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001f175) list_double_graphic_heading_pane_vc_t

0x4b54,	// (0x000142d9) list_setting_pane_vc_g1_ParamLimits

0x4b54,	// (0x000142d9) list_setting_pane_vc_g1

0x4b60,	// (0x000142e5) list_setting_pane_vc_g2_ParamLimits

0x4b60,	// (0x000142e5) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001ef64) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001ef64) list_setting_pane_vc_g

0x6a2a,	// (0x000161af) list_setting_pane_vc_t1_ParamLimits

0x6a2a,	// (0x000161af) list_setting_pane_vc_t1

0x6a46,	// (0x000161cb) list_setting_pane_vc_t2_ParamLimits

0x6a46,	// (0x000161cb) list_setting_pane_vc_t2

0x0001,

0xfa1e,	// (0x0001f1a3) list_setting_pane_vc_t_ParamLimits

0xfa1e,	// (0x0001f1a3) list_setting_pane_vc_t

0x4bca,	// (0x0001434f) set_value_pane_cp_vc_ParamLimits

0x4bca,	// (0x0001434f) set_value_pane_cp_vc

0x418b,	// (0x00013910) list_single_number_heading_pane_vc_g1_ParamLimits

0x418b,	// (0x00013910) list_single_number_heading_pane_vc_g1

0x4a5a,	// (0x000141df) list_single_number_heading_pane_vc_g2_ParamLimits

0x4a5a,	// (0x000141df) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ed4d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ed4d) list_single_number_heading_pane_vc_g

0x4b20,	// (0x000142a5) list_single_number_heading_pane_vc_t1_ParamLimits

0x4b20,	// (0x000142a5) list_single_number_heading_pane_vc_t1

0x6a62,	// (0x000161e7) list_single_number_heading_pane_vc_t2_ParamLimits

0x6a62,	// (0x000161e7) list_single_number_heading_pane_vc_t2

0x6a76,	// (0x000161fb) list_single_number_heading_pane_vc_t3_ParamLimits

0x6a76,	// (0x000161fb) list_single_number_heading_pane_vc_t3

0x0002,

0xfa23,	// (0x0001f1a8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa23,	// (0x0001f1a8) list_single_number_heading_pane_vc_t

0x4a4e,	// (0x000141d3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4a4e,	// (0x000141d3) list_single_graphic_heading_pane_vc_g1

0x418b,	// (0x00013910) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x418b,	// (0x00013910) list_single_graphic_heading_pane_vc_g4

0x4a5a,	// (0x000141df) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4a5a,	// (0x000141df) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001ef3e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001ef3e) list_single_graphic_heading_pane_vc_g

0x4b20,	// (0x000142a5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4b20,	// (0x000142a5) list_single_graphic_heading_pane_vc_t1

0x6a88,	// (0x0001620d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6a88,	// (0x0001620d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2a,	// (0x0001f1af) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2a,	// (0x0001f1af) list_single_graphic_heading_pane_vc_t

0x418b,	// (0x00013910) list_double2_pane_vc_g1_ParamLimits

0x418b,	// (0x00013910) list_double2_pane_vc_g1

0x4a5a,	// (0x000141df) list_double2_pane_vc_g2_ParamLimits

0x4a5a,	// (0x000141df) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ed4d) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ed4d) list_double2_pane_vc_g

0x6a9c,	// (0x00016221) list_double2_pane_vc_t1_ParamLimits

0x6a9c,	// (0x00016221) list_double2_pane_vc_t1

0x6ab2,	// (0x00016237) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6ab2,	// (0x00016237) list_double2_large_graphic_pane_vc_g1

0x418b,	// (0x00013910) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x418b,	// (0x00013910) list_double2_large_graphic_pane_vc_g2

0x4a5a,	// (0x000141df) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4a5a,	// (0x000141df) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001ed6a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001ed6a) list_double2_large_graphic_pane_vc_g

0x6abe,	// (0x00016243) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6abe,	// (0x00016243) list_double2_large_graphic_pane_vc_t1

0x6ad4,	// (0x00016259) list_double_time_pane_vc_g1_ParamLimits

0x6ad4,	// (0x00016259) list_double_time_pane_vc_g1

0x6ae0,	// (0x00016265) list_double_time_pane_vc_g2_ParamLimits

0x6ae0,	// (0x00016265) list_double_time_pane_vc_g2

0x0001,

0xfa2f,	// (0x0001f1b4) list_double_time_pane_vc_g_ParamLimits

0xfa2f,	// (0x0001f1b4) list_double_time_pane_vc_g

0x6aec,	// (0x00016271) list_double_time_pane_vc_t1_ParamLimits

0x6aec,	// (0x00016271) list_double_time_pane_vc_t1

0x6b10,	// (0x00016295) list_double_time_pane_vc_t2_ParamLimits

0x6b10,	// (0x00016295) list_double_time_pane_vc_t2

0x6b3f,	// (0x000162c4) list_double_time_pane_vc_t3_ParamLimits

0x6b3f,	// (0x000162c4) list_double_time_pane_vc_t3

0x6b51,	// (0x000162d6) list_double_time_pane_vc_t4_ParamLimits

0x6b51,	// (0x000162d6) list_double_time_pane_vc_t4

0x0003,

0xfa34,	// (0x0001f1b9) list_double_time_pane_vc_t_ParamLimits

0xfa34,	// (0x0001f1b9) list_double_time_pane_vc_t

0x418b,	// (0x00013910) list_double_pane_vc_g1_ParamLimits

0x418b,	// (0x00013910) list_double_pane_vc_g1

0x4a5a,	// (0x000141df) list_double_pane_vc_g2_ParamLimits

0x4a5a,	// (0x000141df) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ed4d) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ed4d) list_double_pane_vc_g

0x6b65,	// (0x000162ea) list_double_pane_vc_t1_ParamLimits

0x6b65,	// (0x000162ea) list_double_pane_vc_t1

0x6b79,	// (0x000162fe) list_double_pane_vc_t2_ParamLimits

0x6b79,	// (0x000162fe) list_double_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001f1c2) list_double_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001f1c2) list_double_pane_vc_t

0x418b,	// (0x00013910) list_double_number_pane_vc_g1_ParamLimits

0x418b,	// (0x00013910) list_double_number_pane_vc_g1

0x4a5a,	// (0x000141df) list_double_number_pane_vc_g2_ParamLimits

0x4a5a,	// (0x000141df) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ed4d) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ed4d) list_double_number_pane_vc_g

0x6b91,	// (0x00016316) list_double_number_pane_vc_t1_ParamLimits

0x6b91,	// (0x00016316) list_double_number_pane_vc_t1

0x6ba3,	// (0x00016328) list_double_number_pane_vc_t2_ParamLimits

0x6ba3,	// (0x00016328) list_double_number_pane_vc_t2

0x6bb7,	// (0x0001633c) list_double_number_pane_vc_t3_ParamLimits

0x6bb7,	// (0x0001633c) list_double_number_pane_vc_t3

0x0002,

0xfa42,	// (0x0001f1c7) list_double_number_pane_vc_t_ParamLimits

0xfa42,	// (0x0001f1c7) list_double_number_pane_vc_t

0x6bcf,	// (0x00016354) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6bcf,	// (0x00016354) list_double_large_graphic_pane_vc_g1

0x6bf1,	// (0x00016376) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6bf1,	// (0x00016376) list_double_large_graphic_pane_vc_g2

0x6c05,	// (0x0001638a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6c05,	// (0x0001638a) list_double_large_graphic_pane_vc_g3

0x6c14,	// (0x00016399) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6c14,	// (0x00016399) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa49,	// (0x0001f1ce) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa49,	// (0x0001f1ce) list_double_large_graphic_pane_vc_g

0x6c20,	// (0x000163a5) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6c20,	// (0x000163a5) list_double_large_graphic_pane_vc_t1

0x6c3c,	// (0x000163c1) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6c3c,	// (0x000163c1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa52,	// (0x0001f1d7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa52,	// (0x0001f1d7) list_double_large_graphic_pane_vc_t

0x67ca,	// (0x00015f4f) list_double_heading_pane_vc_g1_ParamLimits

0x67ca,	// (0x00015f4f) list_double_heading_pane_vc_g1

0x67d6,	// (0x00015f5b) list_double_heading_pane_vc_g2_ParamLimits

0x67d6,	// (0x00015f5b) list_double_heading_pane_vc_g2

0x0001,

0xfa57,	// (0x0001f1dc) list_double_heading_pane_vc_g_ParamLimits

0xfa57,	// (0x0001f1dc) list_double_heading_pane_vc_g

0x6c5e,	// (0x000163e3) list_double_heading_pane_vc_t1_ParamLimits

0x6c5e,	// (0x000163e3) list_double_heading_pane_vc_t1

0x4b20,	// (0x000142a5) list_double_heading_pane_vc_t2_ParamLimits

0x4b20,	// (0x000142a5) list_double_heading_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001f1e1) list_double_heading_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001f1e1) list_double_heading_pane_vc_t

0x6c72,	// (0x000163f7) list_double_graphic_pane_vc_g1_ParamLimits

0x6c72,	// (0x000163f7) list_double_graphic_pane_vc_g1

0x6c7e,	// (0x00016403) list_double_graphic_pane_vc_g2_ParamLimits

0x6c7e,	// (0x00016403) list_double_graphic_pane_vc_g2

0x418b,	// (0x00013910) list_double_graphic_pane_vc_g3_ParamLimits

0x418b,	// (0x00013910) list_double_graphic_pane_vc_g3

0x0003,

0xfa61,	// (0x0001f1e6) list_double_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0001f1e6) list_double_graphic_pane_vc_g

0x6c9b,	// (0x00016420) list_double_graphic_pane_vc_t1_ParamLimits

0x6c9b,	// (0x00016420) list_double_graphic_pane_vc_t1

0x6cc5,	// (0x0001644a) list_double_graphic_pane_vc_t2_ParamLimits

0x6cc5,	// (0x0001644a) list_double_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001f1ef) list_double_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001f1ef) list_double_graphic_pane_vc_t

0xf546,	// (0x0001eccb) aid_size_cell_fastswap

0xb5e9,	// (0x0001ad6e) aid_size_cell_touch_ParamLimits

0xb5e9,	// (0x0001ad6e) aid_size_cell_touch

0x0215,	// (0x0000f99a) popup_fast_swap_wide_window_ParamLimits

0x0215,	// (0x0000f99a) popup_fast_swap_wide_window

0xb799,	// (0x0001af1e) touch_pane_ParamLimits

0xb799,	// (0x0001af1e) touch_pane

0x32cd,	// (0x00012a52) button_value_adjust_pane_cp2

0x32d5,	// (0x00012a5a) button_value_adjust_pane_cp4

0x32f7,	// (0x00012a7c) form_field_data_pane_cp2

0xce47,	// (0x0001c5cc) form_field_data_wide_pane_cp2

0x399a,	// (0x0001311f) bg_scroll_pane_ParamLimits

0x05b7,	// (0x0000fd3c) scroll_handle_pane_ParamLimits

0x05cb,	// (0x0000fd50) scroll_sc2_down_pane_ParamLimits

0x05cb,	// (0x0000fd50) scroll_sc2_down_pane

0x39cb,	// (0x00013150) scroll_sc2_up_pane_ParamLimits

0x39cb,	// (0x00013150) scroll_sc2_up_pane

0xde2c,	// (0x0001d5b1) grid_wheel_folder_pane_g1_ParamLimits

0xde2c,	// (0x0001d5b1) grid_wheel_folder_pane_g1

0x0790,	// (0x0000ff15) clock_nsta_pane_cp2_ParamLimits

0x0790,	// (0x0000ff15) clock_nsta_pane_cp2

0x4598,	// (0x00013d1d) listscroll_midp_pane_ParamLimits

0xd231,	// (0x0001c9b6) midp_canvas_pane

0x4542,	// (0x00013cc7) nsta_clock_indic_pane

0x457e,	// (0x00013d03) listscroll_form_pane_vc

0x4586,	// (0x00013d0b) listscroll_set_pane_vc_ParamLimits

0x4586,	// (0x00013d0b) listscroll_set_pane_vc

0xd4de,	// (0x0001cc63) clock_nsta_pane

0xd508,	// (0x0001cc8d) indicator_nsta_pane

0x49e8,	// (0x0001416d) bg_popup_sub_pane_cp2_ParamLimits

0x49fc,	// (0x00014181) find_pane_cp2_ParamLimits

0x49fc,	// (0x00014181) find_pane_cp2

0x4a12,	// (0x00014197) grid_toobar_pane_ParamLimits

0x4bda,	// (0x0001435f) list_form_gen_pane_vc_ParamLimits

0x4bda,	// (0x0001435f) list_form_gen_pane_vc

0x4bf0,	// (0x00014375) scroll_pane_cp8_vc_ParamLimits

0x4bf0,	// (0x00014375) scroll_pane_cp8_vc

0x4c6c,	// (0x000143f1) data_form_wide_pane_vc_ParamLimits

0x4c6c,	// (0x000143f1) data_form_wide_pane_vc

0x4c78,	// (0x000143fd) form_field_data_wide_pane_vc_g1

0x4c80,	// (0x00014405) form_field_data_wide_pane_vc_t1_ParamLimits

0x4c80,	// (0x00014405) form_field_data_wide_pane_vc_t1

0x33b3,	// (0x00012b38) input_focus_pane_cp6_vc_ParamLimits

0x33b3,	// (0x00012b38) input_focus_pane_cp6_vc

0xd89b,	// (0x0001d020) list_midp_pane_ParamLimits

0x643a,	// (0x00015bbf) scroll_pane_cp16_ParamLimits

0x643a,	// (0x00015bbf) scroll_pane_cp16

0x5044,	// (0x000147c9) button_value_adjust_pane_ParamLimits

0x5044,	// (0x000147c9) button_value_adjust_pane

0xda4e,	// (0x0001d1d3) button_value_adjust_pane_cp6_ParamLimits

0xda4e,	// (0x0001d1d3) button_value_adjust_pane_cp6

0xdb68,	// (0x0001d2ed) settings_code_pane_cp_ParamLimits

0xdb68,	// (0x0001d2ed) settings_code_pane_cp

0x24c5,	// (0x00011c4a) cell_touch_pane_g1

0x24c5,	// (0x00011c4a) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001ee83) cell_touch_pane_g

0xdd1a,	// (0x0001d49f) cell_touch_pane_cp_ParamLimits

0xdd1a,	// (0x0001d49f) cell_touch_pane_cp

0xdd36,	// (0x0001d4bb) cell_touch_pane_ParamLimits

0xdd36,	// (0x0001d4bb) cell_touch_pane

0x24c5,	// (0x00011c4a) scroll_sc2_down_pane_g1

0x24c5,	// (0x00011c4a) scroll_sc2_up_pane_g1

0x24cf,	// (0x00011c54) bg_set_opt_pane_cp4_vc

0x681c,	// (0x00015fa1) list_set_graphic_pane_vc_g1_ParamLimits

0x681c,	// (0x00015fa1) list_set_graphic_pane_vc_g1

0x6828,	// (0x00015fad) list_set_graphic_pane_vc_g2_ParamLimits

0x6828,	// (0x00015fad) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001f17a) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001f17a) list_set_graphic_pane_vc_g

0x6834,	// (0x00015fb9) text_primary_small_cp13_vc_ParamLimits

0x6834,	// (0x00015fb9) text_primary_small_cp13_vc

0x684c,	// (0x00015fd1) list_set_graphic_pane_vc_ParamLimits

0x684c,	// (0x00015fd1) list_set_graphic_pane_vc

0x24cf,	// (0x00011c54) input_focus_pane_cp2_vc

0x24c5,	// (0x00011c4a) setting_code_pane_vc_g1

0x25fa,	// (0x00011d7f) setting_code_pane_vc_t1

0x685f,	// (0x00015fe4) set_text_pane_vc_t1_ParamLimits

0x685f,	// (0x00015fe4) set_text_pane_vc_t1

0x24cf,	// (0x00011c54) input_focus_pane_cp1_vc

0x687b,	// (0x00016000) list_set_text_pane_vc

0x24c5,	// (0x00011c4a) setting_text_pane_vc_g1

0x24cf,	// (0x00011c54) bg_set_opt_pane_cp2_vc

0x25f1,	// (0x00011d76) setting_slider_graphic_pane_vc_g1

0x6885,	// (0x0001600a) setting_slider_graphic_pane_vc_t1

0x6895,	// (0x0001601a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001f17f) setting_slider_graphic_pane_vc_t

0x68a5,	// (0x0001602a) slider_set_pane_cp_vc

0x68ad,	// (0x00016032) slider_set_pane_vc_g1

0x68b6,	// (0x0001603b) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001f184) slider_set_pane_vc_g

0x34dc,	// (0x00012c61) set_opt_bg_pane_g1_copy1

0x34e4,	// (0x00012c69) set_opt_bg_pane_g2_copy1

0x68e2,	// (0x00016067) set_opt_bg_pane_g3_copy1

0x34f4,	// (0x00012c79) set_opt_bg_pane_g4_copy1

0x34fc,	// (0x00012c81) set_opt_bg_pane_g5_copy1

0x3504,	// (0x00012c89) set_opt_bg_pane_g6_copy1

0x68ec,	// (0x00016071) set_opt_bg_pane_g7_copy1

0x68f4,	// (0x00016079) set_opt_bg_pane_g8_copy1

0x68fe,	// (0x00016083) set_opt_bg_pane_g9_copy1

0x24cf,	// (0x00011c54) bg_set_opt_pane_cp_vc

0x6908,	// (0x0001608d) setting_slider_pane_vc_t1

0x6917,	// (0x0001609c) setting_slider_pane_vc_t2

0x6927,	// (0x000160ac) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001f193) setting_slider_pane_vc_t

0x6937,	// (0x000160bc) slider_set_pane_vc

0x1184,	// (0x00010909) volume_set_pane_vc_g1

0x118d,	// (0x00010912) volume_set_pane_vc_g2

0x1196,	// (0x0001091b) volume_set_pane_vc_g3

0x119f,	// (0x00010924) volume_set_pane_vc_g4

0x11a8,	// (0x0001092d) volume_set_pane_vc_g5

0x11b1,	// (0x00010936) volume_set_pane_vc_g6

0x11ba,	// (0x0001093f) volume_set_pane_vc_g7

0x11c3,	// (0x00010948) volume_set_pane_vc_g8

0x11cc,	// (0x00010951) volume_set_pane_vc_g9

0x11d5,	// (0x0001095a) volume_set_pane_vc_g10

0x0009,

0xf8ac,	// (0x0001f031) volume_set_pane_vc_g

0x693f,	// (0x000160c4) volume_set_pane_vc

0x6947,	// (0x000160cc) button_value_adjust_pane_cp1_vc

0x6951,	// (0x000160d6) list_highlight_pane_cp2_vc

0x695a,	// (0x000160df) list_set_pane_vc_ParamLimits

0x695a,	// (0x000160df) list_set_pane_vc

0x69b8,	// (0x0001613d) main_pane_set_vc_t1_ParamLimits

0x69b8,	// (0x0001613d) main_pane_set_vc_t1

0x69cd,	// (0x00016152) main_pane_set_vc_t2_ParamLimits

0x69cd,	// (0x00016152) main_pane_set_vc_t2

0x69df,	// (0x00016164) main_pane_set_vc_t3_ParamLimits

0x69df,	// (0x00016164) main_pane_set_vc_t3

0x69f3,	// (0x00016178) main_pane_set_vc_t4_ParamLimits

0x69f3,	// (0x00016178) main_pane_set_vc_t4

0x0003,

0xfa15,	// (0x0001f19a) main_pane_set_vc_t_ParamLimits

0xfa15,	// (0x0001f19a) main_pane_set_vc_t

0x6a07,	// (0x0001618c) setting_code_pane_vc_ParamLimits

0x6a07,	// (0x0001618c) setting_code_pane_vc

0x6a18,	// (0x0001619d) setting_slider_graphic_pane_vc

0x6a18,	// (0x0001619d) setting_slider_pane_vc

0x6a18,	// (0x0001619d) setting_text_pane_vc

0x6a18,	// (0x0001619d) setting_volume_pane_vc

0x6a22,	// (0x000161a7) scroll_pane_cp121_vc

0x32bb,	// (0x00012a40) set_content_pane_vc

0x6cef,	// (0x00016474) button_value_adjust_pane_g1

0x6cf8,	// (0x0001647d) button_value_adjust_pane_g2

0x0001,

0xfa6f,	// (0x0001f1f4) button_value_adjust_pane_g

0x6d01,	// (0x00016486) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d01,	// (0x00016486) form_field_slider_wide_pane_vc_t1

0x6d15,	// (0x0001649a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d15,	// (0x0001649a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa74,	// (0x0001f1f9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x0001f1f9) form_field_slider_wide_pane_vc_t

0x2844,	// (0x00011fc9) input_focus_pane_cp10_vc_ParamLimits

0x2844,	// (0x00011fc9) input_focus_pane_cp10_vc

0x6d43,	// (0x000164c8) slider_cont_pane_cp1_vc_ParamLimits

0x6d43,	// (0x000164c8) slider_cont_pane_cp1_vc

0x6d55,	// (0x000164da) slider_form_pane_g1_cp2

0x68b6,	// (0x0001603b) slider_form_pane_g2_cp2

0x6d82,	// (0x00016507) form_field_slider_pane_vc_t3

0x6d90,	// (0x00016515) form_field_slider_pane_vc_t4

0x6d9e,	// (0x00016523) slider_form_pane_vc_ParamLimits

0x6d9e,	// (0x00016523) slider_form_pane_vc

0x6dab,	// (0x00016530) form_field_slider_pane_vc_t1_ParamLimits

0x6dab,	// (0x00016530) form_field_slider_pane_vc_t1

0x6d15,	// (0x0001649a) form_field_slider_pane_vc_t2_ParamLimits

0x6d15,	// (0x0001649a) form_field_slider_pane_vc_t2

0x0001,

0xfa86,	// (0x0001f20b) form_field_slider_pane_vc_t_ParamLimits

0xfa86,	// (0x0001f20b) form_field_slider_pane_vc_t

0x2844,	// (0x00011fc9) input_focus_pane_cp9_vc_ParamLimits

0x2844,	// (0x00011fc9) input_focus_pane_cp9_vc

0x6dc7,	// (0x0001654c) slider_cont_pane_vc_ParamLimits

0x6dc7,	// (0x0001654c) slider_cont_pane_vc

0x6ddb,	// (0x00016560) list_form_graphic_pane_cp_vc_ParamLimits

0x6ddb,	// (0x00016560) list_form_graphic_pane_cp_vc

0x4c78,	// (0x000143fd) form_field_popup_wide_pane_vc_g1

0x6df0,	// (0x00016575) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6df0,	// (0x00016575) form_field_popup_wide_pane_vc_t1

0x33b3,	// (0x00012b38) input_focus_pane_cp8_vc_ParamLimits

0x33b3,	// (0x00012b38) input_focus_pane_cp8_vc

0x6e35,	// (0x000165ba) list_form_wide_pane_vc_ParamLimits

0x6e35,	// (0x000165ba) list_form_wide_pane_vc

0x6e41,	// (0x000165c6) list_form_graphic_pane_vc_g1

0x6e49,	// (0x000165ce) list_form_graphic_pane_vc_t1_ParamLimits

0x6e49,	// (0x000165ce) list_form_graphic_pane_vc_t1

0x25af,	// (0x00011d34) list_highlight_pane_cp5_vc_ParamLimits

0x25af,	// (0x00011d34) list_highlight_pane_cp5_vc

0x6e65,	// (0x000165ea) list_form_graphic_pane_vc_ParamLimits

0x6e65,	// (0x000165ea) list_form_graphic_pane_vc

0x4c78,	// (0x000143fd) form_field_popup_pane_vc_g1

0x6e7b,	// (0x00016600) form_field_popup_pane_vc_t1_ParamLimits

0x6e7b,	// (0x00016600) form_field_popup_pane_vc_t1

0x33b3,	// (0x00012b38) input_focus_pane_cp7_vc_ParamLimits

0x33b3,	// (0x00012b38) input_focus_pane_cp7_vc

0x6e92,	// (0x00016617) list_form_pane_vc_ParamLimits

0x6e92,	// (0x00016617) list_form_pane_vc

0x6e9e,	// (0x00016623) data_form_pane_vc_t1_ParamLimits

0x6e9e,	// (0x00016623) data_form_pane_vc_t1

0x34dc,	// (0x00012c61) input_focus_pane_vc_g1

0x34e4,	// (0x00012c69) input_focus_pane_vc_g2

0x34ec,	// (0x00012c71) input_focus_pane_vc_g3

0x34f4,	// (0x00012c79) input_focus_pane_vc_g4

0x34fc,	// (0x00012c81) input_focus_pane_vc_g5

0x3504,	// (0x00012c89) input_focus_pane_vc_g6

0x350c,	// (0x00012c91) input_focus_pane_vc_g7

0x3514,	// (0x00012c99) input_focus_pane_vc_g8

0x351c,	// (0x00012ca1) input_focus_pane_vc_g9

0x24c5,	// (0x00011c4a) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001ee0c) input_focus_pane_vc_g

0x4c6c,	// (0x000143f1) data_form_pane_vc_ParamLimits

0x4c6c,	// (0x000143f1) data_form_pane_vc

0x4c78,	// (0x000143fd) form_field_data_pane_vc_g1

0x6eb9,	// (0x0001663e) form_field_data_pane_vc_t1_ParamLimits

0x6eb9,	// (0x0001663e) form_field_data_pane_vc_t1

0x33b3,	// (0x00012b38) input_focus_pane_vc_ParamLimits

0x33b3,	// (0x00012b38) input_focus_pane_vc

0x6ed3,	// (0x00016658) button_value_adjust_pane_cp3_vc

0x6edb,	// (0x00016660) button_value_adjust_pane_cp5_vc

0x6ee3,	// (0x00016668) form_field_data_pane_vc_ParamLimits

0x6ee3,	// (0x00016668) form_field_data_pane_vc

0x6efa,	// (0x0001667f) form_field_data_pane_vc_cp2

0x6f02,	// (0x00016687) form_field_data_wide_pane_vc_ParamLimits

0x6f02,	// (0x00016687) form_field_data_wide_pane_vc

0x6f18,	// (0x0001669d) form_field_data_wide_pane_vc_cp2

0x6f20,	// (0x000166a5) form_field_popup_pane_vc_ParamLimits

0x6f20,	// (0x000166a5) form_field_popup_pane_vc

0x6f37,	// (0x000166bc) form_field_popup_wide_pane_vc_ParamLimits

0x6f37,	// (0x000166bc) form_field_popup_wide_pane_vc

0x6f4d,	// (0x000166d2) form_field_slider_pane_vc_ParamLimits

0x6f4d,	// (0x000166d2) form_field_slider_pane_vc

0x6f60,	// (0x000166e5) form_field_slider_wide_pane_vc_ParamLimits

0x6f60,	// (0x000166e5) form_field_slider_wide_pane_vc

0xdd54,	// (0x0001d4d9) grid_touch_1_pane_ParamLimits

0xdd54,	// (0x0001d4d9) grid_touch_1_pane

0xdd68,	// (0x0001d4ed) grid_touch_2_pane_ParamLimits

0xdd68,	// (0x0001d4ed) grid_touch_2_pane

0x702e,	// (0x000167b3) touch_pane_g1_ParamLimits

0x702e,	// (0x000167b3) touch_pane_g1

0x6f97,	// (0x0001671c) cell_app_pane_cp_wide_ParamLimits

0x6f97,	// (0x0001671c) cell_app_pane_cp_wide

0x6fa8,	// (0x0001672d) grid_popup_fast_wide_pane_ParamLimits

0x6fa8,	// (0x0001672d) grid_popup_fast_wide_pane

0x6fbc,	// (0x00016741) scroll_pane_cp19_ParamLimits

0x6fbc,	// (0x00016741) scroll_pane_cp19

0x24cf,	// (0x00011c54) bg_popup_window_pane_cp20

0x6fd0,	// (0x00016755) listscroll_popup_fast_wide_pane

0x36f0,	// (0x00012e75) grid_indicator_nsta_pane

0x6fd8,	// (0x0001675d) clock_nsta_pane_g1

0x6fe1,	// (0x00016766) clock_nsta_pane_t1

0xdd92,	// (0x0001d517) cell_indicator_nsta_pane_ParamLimits

0xdd92,	// (0x0001d517) cell_indicator_nsta_pane

0x702e,	// (0x000167b3) cell_indicator_nsta_pane_g1

0xdda9,	// (0x0001d52e) cell_indicator_nsta_pane_g2

0x0001,

0xfa97,	// (0x0001f21c) cell_indicator_nsta_pane_g

0x7049,	// (0x000167ce) clock_nsta_pane_cp

0x7051,	// (0x000167d6) indicator_nsta_pane_cp

0x7059,	// (0x000167de) nsta_clock_indic_pane_g1

0x2692,	// (0x00011e17) grid_indicator_pane

0x3ac0,	// (0x00013245) scroll_pane_cp29

0x06df,	// (0x0000fe64) indicator_nsta_pane_cp2_ParamLimits

0x06df,	// (0x0000fe64) indicator_nsta_pane_cp2

0x25af,	// (0x00011d34) main_apps_wheel_pane

0x4ecb,	// (0x00014650) form_midp_field_text_pane_ParamLimits

0x5016,	// (0x0001479b) scroll_bar_cp050_ParamLimits

0x70ba,	// (0x0001683f) cell_indicator_pane_ParamLimits

0x70ba,	// (0x0001683f) cell_indicator_pane

0x70d1,	// (0x00016856) cell_indicator_pane_g1

0xddb6,	// (0x0001d53b) grid_wheel_folder_pane_ParamLimits

0xddb6,	// (0x0001d53b) grid_wheel_folder_pane

0xddc4,	// (0x0001d549) list_wheel_apps_pane_ParamLimits

0xddc4,	// (0x0001d549) list_wheel_apps_pane

0xddd2,	// (0x0001d557) main_apps_wheel_pane_g1_ParamLimits

0xddd2,	// (0x0001d557) main_apps_wheel_pane_g1

0xddde,	// (0x0001d563) main_apps_wheel_pane_g2_ParamLimits

0xddde,	// (0x0001d563) main_apps_wheel_pane_g2

0x0001,

0xfab3,	// (0x0001f238) main_apps_wheel_pane_g_ParamLimits

0xfab3,	// (0x0001f238) main_apps_wheel_pane_g

0xddec,	// (0x0001d571) main_apps_wheel_pane_t1_ParamLimits

0xddec,	// (0x0001d571) main_apps_wheel_pane_t1

0xde00,	// (0x0001d585) list_wheel_apps_pane_g1

0xde08,	// (0x0001d58d) list_wheel_apps_pane_g2

0xde10,	// (0x0001d595) list_wheel_apps_pane_g3

0xde18,	// (0x0001d59d) list_wheel_apps_pane_g4

0xde22,	// (0x0001d5a7) list_wheel_apps_pane_g5

0x0004,

0xfab8,	// (0x0001f23d) list_wheel_apps_pane_g

0x40d2,	// (0x00013857) navi_icon_text_pane

0xd3d2,	// (0x0001cb57) aid_fill_nsta

0x7196,	// (0x0001691b) navi_icon_text_pane_g1

0x71a2,	// (0x00016927) navi_icon_text_pane_t1

0xd20e,	// (0x0001c993) list_set_graphic_pane_t1_ParamLimits

0xd20e,	// (0x0001c993) list_set_graphic_pane_t1

0x5765,	// (0x00014eea) popup_midp_note_alarm_window_t6_ParamLimits

0x5765,	// (0x00014eea) popup_midp_note_alarm_window_t6

0x5777,	// (0x00014efc) popup_midp_note_alarm_window_t7_ParamLimits

0x5777,	// (0x00014efc) popup_midp_note_alarm_window_t7

0x5789,	// (0x00014f0e) popup_midp_note_alarm_window_t8_ParamLimits

0x5789,	// (0x00014f0e) popup_midp_note_alarm_window_t8

0x579b,	// (0x00014f20) popup_midp_note_alarm_window_t9_ParamLimits

0x579b,	// (0x00014f20) popup_midp_note_alarm_window_t9

0x57ad,	// (0x00014f32) popup_midp_note_alarm_window_t10_ParamLimits

0x57ad,	// (0x00014f32) popup_midp_note_alarm_window_t10

0x57bf,	// (0x00014f44) popup_midp_note_alarm_window_t11_ParamLimits

0x57bf,	// (0x00014f44) popup_midp_note_alarm_window_t11

0x57d1,	// (0x00014f56) scroll_pane_cp17_ParamLimits

0x57d1,	// (0x00014f56) scroll_pane_cp17

0x1184,	// (0x00010909) volume_small_pane_cp_g1

0x1479,	// (0x00010bfe) volume_small_pane_cp_g2

0x1482,	// (0x00010c07) volume_small_pane_cp_g3

0x148b,	// (0x00010c10) volume_small_pane_cp_g4

0x1494,	// (0x00010c19) volume_small_pane_cp_g5

0x149d,	// (0x00010c22) volume_small_pane_cp_g6

0x14a6,	// (0x00010c2b) volume_small_pane_cp_g7

0x14af,	// (0x00010c34) volume_small_pane_cp_g8

0x14b8,	// (0x00010c3d) volume_small_pane_cp_g9

0x14c1,	// (0x00010c46) volume_small_pane_cp_g10

0x4323,	// (0x00013aa8) midp_ticker_pane_g1_ParamLimits

0x432f,	// (0x00013ab4) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001eed8) midp_ticker_pane_g_ParamLimits

0x433b,	// (0x00013ac0) midp_ticker_pane_t1_ParamLimits

0xd3f6,	// (0x0001cb7b) aid_fill_nsta_2

0x5002,	// (0x00014787) list_form2_midp_pane

0x6192,	// (0x00015917) midp_editing_number_pane_ParamLimits

0x61a1,	// (0x00015926) midp_ticker_pane_ParamLimits

0x71b4,	// (0x00016939) form2_midp_field_pane

0x71d8,	// (0x0001695d) scroll_pane_cp51

0x71f8,	// (0x0001697d) form2_midp_button_pane_ParamLimits

0x71f8,	// (0x0001697d) form2_midp_button_pane

0x720a,	// (0x0001698f) form2_midp_content_pane_ParamLimits

0x720a,	// (0x0001698f) form2_midp_content_pane

0x7224,	// (0x000169a9) form2_midp_field_choice_group_pane

0x722c,	// (0x000169b1) form2_midp_field_pane_g1

0x7234,	// (0x000169b9) form2_midp_field_pane_g2

0x723c,	// (0x000169c1) form2_midp_field_pane_g3

0x7244,	// (0x000169c9) form2_midp_field_pane_g4

0x0003,

0xfadd,	// (0x0001f262) form2_midp_field_pane_g

0x724c,	// (0x000169d1) form2_midp_gauge_slider_pane

0x7254,	// (0x000169d9) form2_midp_gauge_wait_pane

0x725c,	// (0x000169e1) form2_midp_image_pane_ParamLimits

0x725c,	// (0x000169e1) form2_midp_image_pane

0x7277,	// (0x000169fc) form2_midp_label_pane_ParamLimits

0x7277,	// (0x000169fc) form2_midp_label_pane

0xde55,	// (0x0001d5da) form2_midp_label_pane_cp_ParamLimits

0xde55,	// (0x0001d5da) form2_midp_label_pane_cp

0x72b1,	// (0x00016a36) form2_midp_string_pane_ParamLimits

0x72b1,	// (0x00016a36) form2_midp_string_pane

0xde74,	// (0x0001d5f9) form2_midp_text_pane_ParamLimits

0xde74,	// (0x0001d5f9) form2_midp_text_pane

0x72e0,	// (0x00016a65) form2_midp_time_pane

0x72f0,	// (0x00016a75) input_focus_pane_cp51_ParamLimits

0x72f0,	// (0x00016a75) input_focus_pane_cp51

0x7308,	// (0x00016a8d) form2_midp_label_pane_t1_ParamLimits

0x7308,	// (0x00016a8d) form2_midp_label_pane_t1

0xde8d,	// (0x0001d612) form2_mdip_text_pane_t1_ParamLimits

0xde8d,	// (0x0001d612) form2_mdip_text_pane_t1

0x7368,	// (0x00016aed) form2_midp_time_pane_t1

0x7383,	// (0x00016b08) form2_midp_gauge_slider_pane_t1

0xdea8,	// (0x0001d62d) form2_midp_gauge_slider_pane_t2

0xdeba,	// (0x0001d63f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae6,	// (0x0001f26b) form2_midp_gauge_slider_pane_t

0x73b9,	// (0x00016b3e) form2_midp_slider_pane

0x73c5,	// (0x00016b4a) form2_midp_gauge_wait_pane_t1

0x73d3,	// (0x00016b58) form2_midp_wait_pane_ParamLimits

0x73d3,	// (0x00016b58) form2_midp_wait_pane

0xdecc,	// (0x0001d651) list_single_2graphic_pane_cp4_ParamLimits

0xdecc,	// (0x0001d651) list_single_2graphic_pane_cp4

0xd812,	// (0x0001cf97) list_single_midp_graphic_pane_cp_ParamLimits

0xd812,	// (0x0001cf97) list_single_midp_graphic_pane_cp

0x24cf,	// (0x00011c54) list_highlight_pane_cp20

0x742d,	// (0x00016bb2) list_single_2graphic_pane_g1_cp4

0x7435,	// (0x00016bba) list_single_2graphic_pane_g2_cp4

0x743d,	// (0x00016bc2) list_single_2graphic_pane_t1_cp4

0x25af,	// (0x00011d34) list_highlight_pane_cp21

0x744c,	// (0x00016bd1) list_single_midp_graphic_pane_g4_cp

0x745b,	// (0x00016be0) list_single_midp_graphic_pane_t1_cp

0xdee0,	// (0x0001d665) form2_mdip_string_pane_t1_ParamLimits

0xdee0,	// (0x0001d665) form2_mdip_string_pane_t1

0x24cf,	// (0x00011c54) bg_wml_button_pane_cp2

0x24c5,	// (0x00011c4a) form2_midp_image_pane_g1

0x3071,	// (0x000127f6) list_double_large_graphic_pane_g5_ParamLimits

0x3071,	// (0x000127f6) list_double_large_graphic_pane_g5

0x4598,	// (0x00013d1d) midp_form_pane_ParamLimits

0x25af,	// (0x00011d34) main_apps_wheel_pane_ParamLimits

0xbd85,	// (0x0001b50a) popup_preview_window_ParamLimits

0xbd85,	// (0x0001b50a) popup_preview_window

0x0f7f,	// (0x00010704) popup_touch_info_window_ParamLimits

0x0f7f,	// (0x00010704) popup_touch_info_window

0x0f9d,	// (0x00010722) popup_touch_menu_window_ParamLimits

0x0f9d,	// (0x00010722) popup_touch_menu_window

0x24bb,	// (0x00011c40) bg_popup_sub_pane_cp6

0x7569,	// (0x00016cee) list_touch_menu_pane

0x7571,	// (0x00016cf6) list_single_touch_menu_pane_ParamLimits

0x7571,	// (0x00016cf6) list_single_touch_menu_pane

0x7587,	// (0x00016d0c) list_single_touch_menu_pane_t1

0x25af,	// (0x00011d34) bg_popup_sub_pane_cp7_ParamLimits

0x25af,	// (0x00011d34) bg_popup_sub_pane_cp7

0x7595,	// (0x00016d1a) heading_sub_pane

0x759d,	// (0x00016d22) list_touch_info_pane_ParamLimits

0x759d,	// (0x00016d22) list_touch_info_pane

0x75ac,	// (0x00016d31) list_single_touch_info_pane_ParamLimits

0x75ac,	// (0x00016d31) list_single_touch_info_pane

0x75be,	// (0x00016d43) list_single_touch_info_pane_t1

0x75cc,	// (0x00016d51) list_single_touch_info_pane_t2

0x0001,

0xfaf4,	// (0x0001f279) list_single_touch_info_pane_t

0x4252,	// (0x000139d7) bg_popup_heading_pane_cp

0x75da,	// (0x00016d5f) heading_sub_pane_t1

0x4c06,	// (0x0001438b) bg_popup_preview_window_pane_cp_ParamLimits

0x4c06,	// (0x0001438b) bg_popup_preview_window_pane_cp

0x7595,	// (0x00016d1a) heading_preview_pane

0x759d,	// (0x00016d22) list_preview_pane_ParamLimits

0x759d,	// (0x00016d22) list_preview_pane

0x75e8,	// (0x00016d6d) popup_preview_window_g1

0x75ac,	// (0x00016d31) list_single_preview_pane_ParamLimits

0x75ac,	// (0x00016d31) list_single_preview_pane

0x75f0,	// (0x00016d75) list_single_preview_pane_g1

0x75f8,	// (0x00016d7d) list_single_preview_pane_t1

0x75be,	// (0x00016d43) list_single_preview_pane_t2

0x0001,

0xfaf9,	// (0x0001f27e) list_single_preview_pane_t

0x7606,	// (0x00016d8b) bg_popup_heading_pane_cp2_ParamLimits

0x7606,	// (0x00016d8b) bg_popup_heading_pane_cp2

0x761c,	// (0x00016da1) heading_preview_pane_g1

0x7624,	// (0x00016da9) heading_preview_pane_t1_ParamLimits

0x7624,	// (0x00016da9) heading_preview_pane_t1

0x26b5,	// (0x00011e3a) soft_indicator_pane_t1_ParamLimits

0x2dab,	// (0x00012530) scroll_pane_ParamLimits

0x39b9,	// (0x0001313e) scroll_sc2_left_pane

0x39c2,	// (0x00013147) scroll_sc2_right_pane

0x39e1,	// (0x00013166) scroll_bg_pane_g1_ParamLimits

0x39f6,	// (0x0001317b) scroll_bg_pane_g2_ParamLimits

0x3a0e,	// (0x00013193) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001ee63) scroll_bg_pane_g_ParamLimits

0x39e1,	// (0x00013166) scroll_handle_pane_g1_ParamLimits

0x3a30,	// (0x000131b5) scroll_handle_pane_g2_ParamLimits

0x3a0e,	// (0x00013193) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001ee6a) scroll_handle_pane_g_ParamLimits

0x0a45,	// (0x000101ca) popup_choice_list_window_ParamLimits

0x0a45,	// (0x000101ca) popup_choice_list_window

0x49f4,	// (0x00014179) choice_list_pane

0x4aa4,	// (0x00014229) cell_toolbar_pane_t1

0x4acc,	// (0x00014251) toolbar_button_pane_ParamLimits

0x5c97,	// (0x0001541c) ai_gene_pane_1_t2_ParamLimits

0x5c97,	// (0x0001541c) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001f08d) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001f08d) ai_gene_pane_1_t

0x7641,	// (0x00016dc6) scroll_sc2_left_pane_g1

0x7641,	// (0x00016dc6) scroll_sc2_right_pane_g1

0x4598,	// (0x00013d1d) bg_popup_sub_pane_cp10

0x764b,	// (0x00016dd0) list_choice_list_pane

0x7664,	// (0x00016de9) list_single_choice_list_pane_ParamLimits

0x7664,	// (0x00016de9) list_single_choice_list_pane

0x7677,	// (0x00016dfc) list_single_choice_list_pane_g1

0x36c1,	// (0x00012e46) list_single_choice_list_pane_t1_ParamLimits

0x36c1,	// (0x00012e46) list_single_choice_list_pane_t1

0x767f,	// (0x00016e04) choice_list_pane_g1

0x7687,	// (0x00016e0c) choice_list_pane_t1

0x24bb,	// (0x00011c40) input_focus_pane_cp11

0x3898,	// (0x0001301d) title_pane_stacon_g2_ParamLimits

0x3898,	// (0x0001301d) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001ee49) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001ee49) title_pane_stacon_g

0x4252,	// (0x000139d7) cursor_press_pane

0xba32,	// (0x0001b1b7) popup_fep_hwr_window_ParamLimits

0xba32,	// (0x0001b1b7) popup_fep_hwr_window

0x0b6b,	// (0x000102f0) popup_fep_vkb_window_ParamLimits

0x0b6b,	// (0x000102f0) popup_fep_vkb_window

0x7695,	// (0x00016e1a) cursor_press_pane_g1

0x0002,

0xfb22,	// (0x0001f2a7) fep_vkb_side_pane_g_ParamLimits

0x1503,	// (0x00010c88) fep_hwr_candidate_pane_ParamLimits

0x1503,	// (0x00010c88) fep_hwr_candidate_pane

0x152d,	// (0x00010cb2) fep_hwr_side_pane_ParamLimits

0x152d,	// (0x00010cb2) fep_hwr_side_pane

0x154d,	// (0x00010cd2) fep_hwr_top_pane_ParamLimits

0x154d,	// (0x00010cd2) fep_hwr_top_pane

0x1565,	// (0x00010cea) fep_hwr_write_pane_ParamLimits

0x1565,	// (0x00010cea) fep_hwr_write_pane

0xfb22,	// (0x0001f2a7) fep_vkb_side_pane_g

0x769d,	// (0x00016e22) fep_hwr_top_pane_g1

0x76af,	// (0x00016e34) fep_hwr_top_pane_g2

0x159f,	// (0x00010d24) fep_hwr_top_pane_g3

0x0002,

0xfafe,	// (0x0001f283) fep_hwr_top_pane_g

0x15b4,	// (0x00010d39) fep_hwr_top_text_pane

0x3bb0,	// (0x00013335) fep_hwr_top_text_pane_g1

0x76e5,	// (0x00016e6a) fep_hwr_top_text_pane_t1

0x16aa,	// (0x00010e2f) fep_hwr_candidate_pane_g1

0x7938,	// (0x000170bd) fep_vkb_keypad_pane_g3_ParamLimits

0x7938,	// (0x000170bd) fep_vkb_keypad_pane_g3

0x7960,	// (0x000170e5) fep_vkb_keypad_pane_g4_ParamLimits

0x7960,	// (0x000170e5) fep_vkb_keypad_pane_g4

0x79cf,	// (0x00017154) fep_vkb_bottom_pane_g2_ParamLimits

0x79cf,	// (0x00017154) fep_vkb_bottom_pane_g2

0x0001,

0xfb29,	// (0x0001f2ae) fep_vkb_bottom_pane_g_ParamLimits

0xfb29,	// (0x0001f2ae) fep_vkb_bottom_pane_g

0x7641,	// (0x00016dc6) cell_vkb_side_pane_g2

0x0001,

0xfb33,	// (0x0001f2b8) cell_vkb_side_pane_g

0x7a5a,	// (0x000171df) cell_vkb_side_pane_t1

0x7a68,	// (0x000171ed) cell_vkb_side_pane_t1_copy1

0x7641,	// (0x00016dc6) bg_fep_vkb_candidate_pane_g2

0x7b94,	// (0x00017319) cell_vkb_candidate_pane_ParamLimits

0x76f3,	// (0x00016e78) aid_size_cell_vkb_ParamLimits

0x76f3,	// (0x00016e78) aid_size_cell_vkb

0x7b94,	// (0x00017319) cell_vkb_candidate_pane

0x16d1,	// (0x00010e56) bg_popup_fep_shadow_pane_g1

0xdf64,	// (0x0001d6e9) fep_vkb_bottom_pane_ParamLimits

0xdf64,	// (0x0001d6e9) fep_vkb_bottom_pane

0x77b7,	// (0x00016f3c) fep_vkb_candidate_pane_ParamLimits

0x77b7,	// (0x00016f3c) fep_vkb_candidate_pane

0xdf89,	// (0x0001d70e) fep_vkb_keypad_pane_ParamLimits

0xdf89,	// (0x0001d70e) fep_vkb_keypad_pane

0xdfc5,	// (0x0001d74a) fep_vkb_side_pane_ParamLimits

0xdfc5,	// (0x0001d74a) fep_vkb_side_pane

0xe001,	// (0x0001d786) fep_vkb_top_pane_ParamLimits

0xe001,	// (0x0001d786) fep_vkb_top_pane

0x7891,	// (0x00017016) fep_vkb_top_pane_g1_ParamLimits

0x7891,	// (0x00017016) fep_vkb_top_pane_g1

0x78a0,	// (0x00017025) fep_vkb_top_pane_g2_ParamLimits

0x78a0,	// (0x00017025) fep_vkb_top_pane_g2

0x78af,	// (0x00017034) fep_vkb_top_pane_g3_ParamLimits

0x78af,	// (0x00017034) fep_vkb_top_pane_g3

0x0003,

0xfb19,	// (0x0001f29e) fep_vkb_top_pane_g_ParamLimits

0xfb19,	// (0x0001f29e) fep_vkb_top_pane_g

0x78cd,	// (0x00017052) fep_vkb_top_text_pane_ParamLimits

0x78cd,	// (0x00017052) fep_vkb_top_text_pane

0xe03d,	// (0x0001d7c2) fep_vkb_side_pane_g1_ParamLimits

0xe03d,	// (0x0001d7c2) fep_vkb_side_pane_g1

0x7927,	// (0x000170ac) grid_vkb_side_pane_ParamLimits

0x7927,	// (0x000170ac) grid_vkb_side_pane

0x16d9,	// (0x00010e5e) bg_popup_fep_shadow_pane_g2

0x16e2,	// (0x00010e67) bg_popup_fep_shadow_pane_g3

0x16ea,	// (0x00010e6f) bg_popup_fep_shadow_pane_g4

0x16f3,	// (0x00010e78) bg_popup_fep_shadow_pane_g5

0x16fd,	// (0x00010e82) bg_popup_fep_shadow_pane_g6

0x1705,	// (0x00010e8a) bg_popup_fep_shadow_pane_g7

0x34f4,	// (0x00012c79) bg_popup_fep_shadow_pane_g8

0x797e,	// (0x00017103) grid_vkb_keypad_number_pane_ParamLimits

0x797e,	// (0x00017103) grid_vkb_keypad_number_pane

0x798e,	// (0x00017113) grid_vkb_keypad_pane_ParamLimits

0x798e,	// (0x00017113) grid_vkb_keypad_pane

0x79b4,	// (0x00017139) fep_vkb_bottom_pane_g1_ParamLimits

0x79b4,	// (0x00017139) fep_vkb_bottom_pane_g1

0x79dd,	// (0x00017162) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79dd,	// (0x00017162) grid_vkb_keypad_bottom_left_pane

0x79f2,	// (0x00017177) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x79f2,	// (0x00017177) grid_vkb_keypad_bottom_right_pane

0x7a07,	// (0x0001718c) fep_vkb_top_text_pane_g1

0xe084,	// (0x0001d809) fep_vkb_top_text_pane_t1

0xe096,	// (0x0001d81b) cell_vkb_side_pane_ParamLimits

0xe096,	// (0x0001d81b) cell_vkb_side_pane

0x7641,	// (0x00016dc6) cell_vkb_side_pane_g1

0x7a76,	// (0x000171fb) cell_vkb_keypad_pane_ParamLimits

0x7a76,	// (0x000171fb) cell_vkb_keypad_pane

0x7aeb,	// (0x00017270) cell_vkb_keypad_pane_g1

0x0008,

0xfb46,	// (0x0001f2cb) bg_popup_fep_shadow_pane_g

0x1717,	// (0x00010e9c) cell_hwr_side_pane_g1

0x1717,	// (0x00010e9c) cell_hwr_side_pane_g2

0x7af5,	// (0x0001727a) cell_vkb_keypad_pane_t1

0xe0ac,	// (0x0001d831) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe0ac,	// (0x0001d831) cell_vkb_keypad_bottom_left_pane

0xe0c1,	// (0x0001d846) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe0c1,	// (0x0001d846) cell_vkb_keypad_bottom_right_pane

0x7641,	// (0x00016dc6) cell_vkb_keypad_bottom_left_pane_g1

0x7641,	// (0x00016dc6) cell_vkb_keypad_bottom_right_pane_g1

0x7b59,	// (0x000172de) cell_vkb_keypad_number_pane_ParamLimits

0x7b59,	// (0x000172de) cell_vkb_keypad_number_pane

0x7b78,	// (0x000172fd) cell_vkb_keypad_number_pane_g1

0x7b82,	// (0x00017307) cell_vkb_keypad_number_pane_g2

0x7b8b,	// (0x00017310) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb38,	// (0x0001f2bd) cell_vkb_keypad_number_pane_g

0x7af5,	// (0x0001727a) cell_vkb_keypad_number_pane_t1

0x7baf,	// (0x00017334) fep_vkb_candidate_pane_g1

0x0001,

0xfb59,	// (0x0001f2de) cell_hwr_side_pane_g

0x7bc8,	// (0x0001734d) cell_hwr_side_pane_t1

0x1721,	// (0x00010ea6) cell_hwr_side_pane_t1_copy1

0x172f,	// (0x00010eb4) cell_hwr_candidate_pane_g1

0x175e,	// (0x00010ee3) cell_hwr_candidate_pane_t1

0x7641,	// (0x00016dc6) cell_vkb_candidate_pane_g2

0x7c0c,	// (0x00017391) cell_vkb_candidate_pane_t1

0x14ca,	// (0x00010c4f) bg_popup_fep_shadow_pane_ParamLimits

0x14ca,	// (0x00010c4f) bg_popup_fep_shadow_pane

0x157f,	// (0x00010d04) bg_fep_hwr_top_pane_g4

0x76c1,	// (0x00016e46) bg_hwr_side_pane_g1_ParamLimits

0x76c1,	// (0x00016e46) bg_hwr_side_pane_g1

0xc0bf,	// (0x0001b844) cell_hwr_side_pane_ParamLimits

0xc0bf,	// (0x0001b844) cell_hwr_side_pane

0x162b,	// (0x00010db0) fep_hwr_write_pane_g1_ParamLimits

0x162b,	// (0x00010db0) fep_hwr_write_pane_g1

0x1638,	// (0x00010dbd) fep_hwr_write_pane_g2_ParamLimits

0x1638,	// (0x00010dbd) fep_hwr_write_pane_g2

0x1645,	// (0x00010dca) fep_hwr_write_pane_g3_ParamLimits

0x1645,	// (0x00010dca) fep_hwr_write_pane_g3

0xc0df,	// (0x0001b864) fep_hwr_write_pane_g4_ParamLimits

0xc0df,	// (0x0001b864) fep_hwr_write_pane_g4

0x0005,

0xfb05,	// (0x0001f28a) fep_hwr_write_pane_g_ParamLimits

0xfb05,	// (0x0001f28a) fep_hwr_write_pane_g

0x157f,	// (0x00010d04) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x157f,	// (0x00010d04) bg_fep_hwr_candidate_pane_g2

0x1668,	// (0x00010ded) cell_hwr_candidate_pane_ParamLimits

0x1668,	// (0x00010ded) cell_hwr_candidate_pane

0x16aa,	// (0x00010e2f) fep_hwr_candidate_pane_g1_ParamLimits

0x7721,	// (0x00016ea6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7721,	// (0x00016ea6) bg_popup_fep_shadow_pane_cp2

0x78bf,	// (0x00017044) fep_vkb_top_pane_g4_ParamLimits

0x78bf,	// (0x00017044) fep_vkb_top_pane_g4

0x7905,	// (0x0001708a) fep_vkb_side_pane_g2_ParamLimits

0x7905,	// (0x0001708a) fep_vkb_side_pane_g2

0xcd75,	// (0x0001c4fa) list_setting_pane_t4_ParamLimits

0xcd75,	// (0x0001c4fa) list_setting_pane_t4

0xcdef,	// (0x0001c574) list_setting_number_pane_t5_ParamLimits

0xcdef,	// (0x0001c574) list_setting_number_pane_t5

0x3be7,	// (0x0001336c) list_double_heading_pane_cp2_ParamLimits

0x3be7,	// (0x0001336c) list_double_heading_pane_cp2

0x2ffc,	// (0x00012781) list_double_heading_pane_g1_cp2_ParamLimits

0x2ffc,	// (0x00012781) list_double_heading_pane_g1_cp2

0x33d9,	// (0x00012b5e) list_double_heading_pane_g2_cp2_ParamLimits

0x33d9,	// (0x00012b5e) list_double_heading_pane_g2_cp2

0x7c1a,	// (0x0001739f) list_double_heading_pane_t1_cp2_ParamLimits

0x7c1a,	// (0x0001739f) list_double_heading_pane_t1_cp2

0x7c30,	// (0x000173b5) list_double_heading_pane_t2_cp2_ParamLimits

0x7c30,	// (0x000173b5) list_double_heading_pane_t2_cp2

0x24a3,	// (0x00011c28) aid_value_unit2

0x026f,	// (0x0000f9f4) popup_preview_fixed_window

0x2852,	// (0x00011fd7) bg_popup_preview_window_pane_cp02

0x7c42,	// (0x000173c7) list_preview_fixed_pane

0x7c88,	// (0x0001740d) list_empty_pane_fp_ParamLimits

0x7c88,	// (0x0001740d) list_empty_pane_fp

0x7c88,	// (0x0001740d) list_single_cale_day_pane_fp_ParamLimits

0x7c88,	// (0x0001740d) list_single_cale_day_pane_fp

0x7c88,	// (0x0001740d) list_single_graphic_heading_pane_fp_ParamLimits

0x7c88,	// (0x0001740d) list_single_graphic_heading_pane_fp

0x7c88,	// (0x0001740d) list_single_graphic_pane_fp_ParamLimits

0x7c88,	// (0x0001740d) list_single_graphic_pane_fp

0x7c88,	// (0x0001740d) list_single_heading_pane_fp_ParamLimits

0x7c88,	// (0x0001740d) list_single_heading_pane_fp

0x7c88,	// (0x0001740d) list_single_pane_fp_ParamLimits

0x7c88,	// (0x0001740d) list_single_pane_fp

0x7c9d,	// (0x00017422) list_single_pane_fp_g1_ParamLimits

0x7c9d,	// (0x00017422) list_single_pane_fp_g1

0x2ffc,	// (0x00012781) list_single_pane_fp_g2_ParamLimits

0x2ffc,	// (0x00012781) list_single_pane_fp_g2

0x33d9,	// (0x00012b5e) list_single_pane_fp_g3_ParamLimits

0x33d9,	// (0x00012b5e) list_single_pane_fp_g3

0x7ca9,	// (0x0001742e) list_single_pane_fp_g4_ParamLimits

0x7ca9,	// (0x0001742e) list_single_pane_fp_g4

0x0003,

0xfb6c,	// (0x0001f2f1) list_single_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001f2f1) list_single_pane_fp_g

0x7cb5,	// (0x0001743a) list_single_pane_fp_t1_ParamLimits

0x7cb5,	// (0x0001743a) list_single_pane_fp_t1

0x7ccc,	// (0x00017451) list_single_graphic_pane_fp_g1_ParamLimits

0x7ccc,	// (0x00017451) list_single_graphic_pane_fp_g1

0x7c9d,	// (0x00017422) list_single_graphic_pane_fp_g2_ParamLimits

0x7c9d,	// (0x00017422) list_single_graphic_pane_fp_g2

0x2ffc,	// (0x00012781) list_single_graphic_pane_fp_g3_ParamLimits

0x2ffc,	// (0x00012781) list_single_graphic_pane_fp_g3

0x33d9,	// (0x00012b5e) list_single_graphic_pane_fp_g4_ParamLimits

0x33d9,	// (0x00012b5e) list_single_graphic_pane_fp_g4

0x7ca9,	// (0x0001742e) list_single_graphic_pane_fp_g5_ParamLimits

0x7ca9,	// (0x0001742e) list_single_graphic_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f2fa) list_single_graphic_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f2fa) list_single_graphic_pane_fp_g

0x7cd8,	// (0x0001745d) list_single_graphic_pane_fp_t1_ParamLimits

0x7cd8,	// (0x0001745d) list_single_graphic_pane_fp_t1

0x7ccc,	// (0x00017451) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7ccc,	// (0x00017451) list_single_graphic_heading_pane_fp_g1

0x7c9d,	// (0x00017422) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c9d,	// (0x00017422) list_single_graphic_heading_pane_fp_g2

0x2ffc,	// (0x00012781) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2ffc,	// (0x00012781) list_single_graphic_heading_pane_fp_g3

0x33d9,	// (0x00012b5e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x33d9,	// (0x00012b5e) list_single_graphic_heading_pane_fp_g4

0x7ca9,	// (0x0001742e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7ca9,	// (0x0001742e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f2fa) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f2fa) list_single_graphic_heading_pane_fp_g

0x7cee,	// (0x00017473) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7cee,	// (0x00017473) list_single_graphic_heading_pane_fp_t1

0x7d04,	// (0x00017489) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7d04,	// (0x00017489) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x0001f305) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x0001f305) list_single_graphic_heading_pane_fp_t

0x7d16,	// (0x0001749b) list_single_cale_day_pane_fp_g1_ParamLimits

0x7d16,	// (0x0001749b) list_single_cale_day_pane_fp_g1

0x7d4e,	// (0x000174d3) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d4e,	// (0x000174d3) list_single_cale_day_pane_fp_g2

0x7d5a,	// (0x000174df) list_single_cale_day_pane_fp_g3_ParamLimits

0x7d5a,	// (0x000174df) list_single_cale_day_pane_fp_g3

0x7d82,	// (0x00017507) list_single_cale_day_pane_fp_g4_ParamLimits

0x7d82,	// (0x00017507) list_single_cale_day_pane_fp_g4

0x7da6,	// (0x0001752b) list_single_cale_day_pane_fp_g5_ParamLimits

0x7da6,	// (0x0001752b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb85,	// (0x0001f30a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb85,	// (0x0001f30a) list_single_cale_day_pane_fp_g

0x7dca,	// (0x0001754f) list_single_cale_day_pane_fp_t1_ParamLimits

0x7dca,	// (0x0001754f) list_single_cale_day_pane_fp_t1

0x7df0,	// (0x00017575) list_single_cale_day_pane_fp_t2_ParamLimits

0x7df0,	// (0x00017575) list_single_cale_day_pane_fp_t2

0x7e09,	// (0x0001758e) list_single_cale_day_pane_fp_t3_ParamLimits

0x7e09,	// (0x0001758e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb90,	// (0x0001f315) list_single_cale_day_pane_fp_t_ParamLimits

0xfb90,	// (0x0001f315) list_single_cale_day_pane_fp_t

0x7c9d,	// (0x00017422) list_empty_pane_fp_g1_ParamLimits

0x7c9d,	// (0x00017422) list_empty_pane_fp_g1

0x7e22,	// (0x000175a7) list_empty_pane_fp_t1

0x7e30,	// (0x000175b5) list_empty_pane_fp_t2

0x0001,

0xfb97,	// (0x0001f31c) list_empty_pane_fp_t

0x7c9d,	// (0x00017422) list_single_heading_pane_fp_g1_ParamLimits

0x7c9d,	// (0x00017422) list_single_heading_pane_fp_g1

0x2ffc,	// (0x00012781) list_single_heading_pane_fp_g2_ParamLimits

0x2ffc,	// (0x00012781) list_single_heading_pane_fp_g2

0x33d9,	// (0x00012b5e) list_single_heading_pane_fp_g3_ParamLimits

0x33d9,	// (0x00012b5e) list_single_heading_pane_fp_g3

0x0002,

0xfb9c,	// (0x0001f321) list_single_heading_pane_fp_g_ParamLimits

0xfb9c,	// (0x0001f321) list_single_heading_pane_fp_g

0x7e3e,	// (0x000175c3) list_single_heading_pane_fp_t1_ParamLimits

0x7e3e,	// (0x000175c3) list_single_heading_pane_fp_t1

0x7e50,	// (0x000175d5) list_single_heading_pane_fp_t2_ParamLimits

0x7e50,	// (0x000175d5) list_single_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x0001f328) list_single_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x0001f328) list_single_heading_pane_fp_t

0x372f,	// (0x00012eb4) aid_size_cell_fast

0x27c2,	// (0x00011f47) soft_indicator_pane_cp1_t1

0x376c,	// (0x00012ef1) cell_app_pane_cp2_ParamLimits

0x376c,	// (0x00012ef1) cell_app_pane_cp2

0x14ec,	// (0x00010c71) fep_hwr_candidate_drop_down_list_pane

0x16c4,	// (0x00010e49) fep_hwr_candidate_pane_g3_ParamLimits

0x16c4,	// (0x00010e49) fep_hwr_candidate_pane_g3

0xed25,	// (0x0001e4aa) fep_hwr_candidate_pane_g4_ParamLimits

0xed25,	// (0x0001e4aa) fep_hwr_candidate_pane_g4

0x0002,

0xfb12,	// (0x0001f297) fep_hwr_candidate_pane_g_ParamLimits

0xfb12,	// (0x0001f297) fep_hwr_candidate_pane_g

0x77a6,	// (0x00016f2b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77a6,	// (0x00016f2b) fep_vkb_candidate_drop_down_list_pane

0x7bb7,	// (0x0001733c) fep_vkb_candidate_pane_g3

0x7bbf,	// (0x00017344) fep_vkb_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001f2c4) fep_vkb_candidate_pane_g

0x172f,	// (0x00010eb4) cell_hwr_candidate_pane_g1_ParamLimits

0x173d,	// (0x00010ec2) cell_hwr_candidate_pane_g3_ParamLimits

0x173d,	// (0x00010ec2) cell_hwr_candidate_pane_g3

0x9613,	// (0x00018d98) cell_hwr_candidate_pane_g4_ParamLimits

0x9613,	// (0x00018d98) cell_hwr_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0001f2e3) cell_hwr_candidate_pane_g_ParamLimits

0xfb5e,	// (0x0001f2e3) cell_hwr_candidate_pane_g

0x7bd6,	// (0x0001735b) cell_vkb_candidate_pane_g3_ParamLimits

0x7bd6,	// (0x0001735b) cell_vkb_candidate_pane_g3

0x7bf1,	// (0x00017376) cell_vkb_candidate_pane_g4_ParamLimits

0x7bf1,	// (0x00017376) cell_vkb_candidate_pane_g4

0x7e66,	// (0x000175eb) cell_app_pane_cp2_g1_ParamLimits

0x7e66,	// (0x000175eb) cell_app_pane_cp2_g1

0x7e84,	// (0x00017609) cell_app_pane_cp2_g2_ParamLimits

0x7e84,	// (0x00017609) cell_app_pane_cp2_g2

0x0001,

0xfba8,	// (0x0001f32d) cell_app_pane_cp2_g_ParamLimits

0xfba8,	// (0x0001f32d) cell_app_pane_cp2_g

0x7e90,	// (0x00017615) cell_app_pane_cp2_t1_ParamLimits

0x7e90,	// (0x00017615) cell_app_pane_cp2_t1

0x33b3,	// (0x00012b38) grid_highlight_pane_cp1_ParamLimits

0x33b3,	// (0x00012b38) grid_highlight_pane_cp1

0x177c,	// (0x00010f01) cell_hwr_candidate_pane_cp1_ParamLimits

0x177c,	// (0x00010f01) cell_hwr_candidate_pane_cp1

0x172f,	// (0x00010eb4) fep_hwr_candidate_drop_down_list_pane_g1

0x179b,	// (0x00010f20) fep_hwr_candidate_drop_down_list_pane_g2

0x17a8,	// (0x00010f2d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbad,	// (0x0001f332) fep_hwr_candidate_drop_down_list_pane_g

0x17b5,	// (0x00010f3a) fep_hwr_candidate_drop_down_list_scroll_pane

0x17be,	// (0x00010f43) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x17be,	// (0x00010f43) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x17cb,	// (0x00010f50) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x17cb,	// (0x00010f50) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x17d8,	// (0x00010f5d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x17d8,	// (0x00010f5d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x17e5,	// (0x00010f6a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x17e5,	// (0x00010f6a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1800,	// (0x00010f85) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1800,	// (0x00010f85) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x181b,	// (0x00010fa0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x181b,	// (0x00010fa0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1836,	// (0x00010fbb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1836,	// (0x00010fbb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1851,	// (0x00010fd6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1851,	// (0x00010fd6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0001f339) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0001f339) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ea2,	// (0x00017627) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ea2,	// (0x00017627) cell_vkb_candidate_pane_cp1

0x78bf,	// (0x00017044) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78bf,	// (0x00017044) fep_vkb_candidate_drop_down_list_pane_g1

0x7ec2,	// (0x00017647) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ec2,	// (0x00017647) fep_vkb_candidate_drop_down_list_pane_g2

0x7ecf,	// (0x00017654) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ecf,	// (0x00017654) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc5,	// (0x0001f34a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc5,	// (0x0001f34a) fep_vkb_candidate_drop_down_list_pane_g

0x7edc,	// (0x00017661) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7edc,	// (0x00017661) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ee9,	// (0x0001766e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ee9,	// (0x0001766e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7ef6,	// (0x0001767b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ef6,	// (0x0001767b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f02,	// (0x00017687) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f02,	// (0x00017687) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7f0e,	// (0x00017693) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f0e,	// (0x00017693) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7f2f,	// (0x000176b4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f2f,	// (0x000176b4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f50,	// (0x000176d5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f50,	// (0x000176d5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f71,	// (0x000176f6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f71,	// (0x000176f6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f92,	// (0x00017717) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f92,	// (0x00017717) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcc,	// (0x0001f351) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcc,	// (0x0001f351) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc6fd,	// (0x0001be82) title_pane_g1_ParamLimits

0xc710,	// (0x0001be95) title_pane_g2_ParamLimits

0xf54e,	// (0x0001ecd3) title_pane_g_ParamLimits

0x3ba0,	// (0x00013325) aid_call2_pane

0x3ba8,	// (0x0001332d) aid_call_pane

0x3bb0,	// (0x00013335) popup_clock_analogue_window_g1

0x3bb0,	// (0x00013335) popup_clock_analogue_window_g2

0x05e0,	// (0x0000fd65) popup_clock_analogue_window_g3

0x05e9,	// (0x0000fd6e) popup_clock_analogue_window_g4

0x24c5,	// (0x00011c4a) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001ee78) popup_clock_analogue_window_g

0x05f1,	// (0x0000fd76) popup_clock_analogue_window_t1

0x05ff,	// (0x0000fd84) clock_digital_number_pane_ParamLimits

0x05ff,	// (0x0000fd84) clock_digital_number_pane

0x060b,	// (0x0000fd90) clock_digital_number_pane_cp02_ParamLimits

0x060b,	// (0x0000fd90) clock_digital_number_pane_cp02

0x0617,	// (0x0000fd9c) clock_digital_number_pane_cp03_ParamLimits

0x0617,	// (0x0000fd9c) clock_digital_number_pane_cp03

0x0623,	// (0x0000fda8) clock_digital_number_pane_cp04_ParamLimits

0x0623,	// (0x0000fda8) clock_digital_number_pane_cp04

0x062f,	// (0x0000fdb4) clock_digital_separator_pane_ParamLimits

0x062f,	// (0x0000fdb4) clock_digital_separator_pane

0x063b,	// (0x0000fdc0) popup_clock_digital_window_t1_ParamLimits

0x063b,	// (0x0000fdc0) popup_clock_digital_window_t1

0x24c5,	// (0x00011c4a) clock_digital_number_pane_g1

0x24c5,	// (0x00011c4a) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001ee83) clock_digital_number_pane_g

0x24c5,	// (0x00011c4a) clock_digital_separator_pane_g1

0x24c5,	// (0x00011c4a) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001ee83) clock_digital_separator_pane_g

0xd3d2,	// (0x0001cb57) aid_fill_nsta_ParamLimits

0xd508,	// (0x0001cc8d) indicator_nsta_pane_ParamLimits

0x4881,	// (0x00014006) popup_clock_analogue_window

0x4881,	// (0x00014006) popup_clock_digital_window

0x36f0,	// (0x00012e75) grid_indicator_nsta_pane_ParamLimits

0x6fef,	// (0x00016774) clock_nsta_pane_t2

0x0001,

0xfa92,	// (0x0001f217) clock_nsta_pane_t

0x05a4,	// (0x0000fd29) aid_size_max_handle

0xb7ef,	// (0x0001af74) aid_size_min_handle

0x4252,	// (0x000139d7) editor_scroll_pane

0x7fad,	// (0x00017732) ex_editor_pane

0x369d,	// (0x00012e22) scroll_pane_cp13

0x2dd7,	// (0x0001255c) scroll_pane_cp14

0x3bdf,	// (0x00013364) scroll_pane_cp36

0xd0d8,	// (0x0001c85d) list_single_graphic_hl_pane_cp2_ParamLimits

0xd0d8,	// (0x0001c85d) list_single_graphic_hl_pane_cp2

0xdbe5,	// (0x0001d36a) list_single_graphic_hl_pane_ParamLimits

0xdbe5,	// (0x0001d36a) list_single_graphic_hl_pane

0x7fb5,	// (0x0001773a) aid_size_min_hl_cp1

0x7fbe,	// (0x00017743) list_highlight_pane_cp34_ParamLimits

0x7fbe,	// (0x00017743) list_highlight_pane_cp34

0x7fcf,	// (0x00017754) list_single_graphic_hl_pane_g1_ParamLimits

0x7fcf,	// (0x00017754) list_single_graphic_hl_pane_g1

0xe0dc,	// (0x0001d861) list_single_graphic_hl_pane_g2_ParamLimits

0xe0dc,	// (0x0001d861) list_single_graphic_hl_pane_g2

0xe0dc,	// (0x0001d861) list_single_graphic_hl_pane_g3_ParamLimits

0xe0dc,	// (0x0001d861) list_single_graphic_hl_pane_g3

0x41c3,	// (0x00013948) list_single_graphic_hl_pane_g4_ParamLimits

0x41c3,	// (0x00013948) list_single_graphic_hl_pane_g4

0xe0e8,	// (0x0001d86d) list_single_graphic_hl_pane_g5_ParamLimits

0xe0e8,	// (0x0001d86d) list_single_graphic_hl_pane_g5

0x0004,

0xfbdd,	// (0x0001f362) list_single_graphic_hl_pane_g_ParamLimits

0xfbdd,	// (0x0001f362) list_single_graphic_hl_pane_g

0xe0fc,	// (0x0001d881) list_single_graphic_hl_pane_t1_ParamLimits

0xe0fc,	// (0x0001d881) list_single_graphic_hl_pane_t1

0x8012,	// (0x00017797) aid_size_min_hl_cp2

0x801b,	// (0x000177a0) list_highlight_pane_cp34_cp2_ParamLimits

0x801b,	// (0x000177a0) list_highlight_pane_cp34_cp2

0x7fcf,	// (0x00017754) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7fcf,	// (0x00017754) list_single_graphic_hl_pane_g1_cp2

0x8028,	// (0x000177ad) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8028,	// (0x000177ad) list_single_graphic_hl_pane_g2_cp2

0x8034,	// (0x000177b9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8034,	// (0x000177b9) list_single_graphic_hl_pane_g3_cp2

0x67ca,	// (0x00015f4f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x67ca,	// (0x00015f4f) list_single_graphic_hl_pane_g4_cp2

0x7fe8,	// (0x0001776d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7fe8,	// (0x0001776d) list_single_graphic_hl_pane_g5_cp2

0xb84a,	// (0x0001afcf) control_pane_g4_ParamLimits

0xb84a,	// (0x0001afcf) control_pane_g4

0x4598,	// (0x00013d1d) bg_popup_sub_pane_cp10_ParamLimits

0x764b,	// (0x00016dd0) list_choice_list_pane_ParamLimits

0x765a,	// (0x00016ddf) scroll_pane_cp23

0x2852,	// (0x00011fd7) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c42,	// (0x000173c7) list_preview_fixed_pane_ParamLimits

0x7c58,	// (0x000173dd) list_preview_fixed_pane_cp_ParamLimits

0x7c58,	// (0x000173dd) list_preview_fixed_pane_cp

0x7c64,	// (0x000173e9) popup_preview_fixed_window_g1_ParamLimits

0x7c64,	// (0x000173e9) popup_preview_fixed_window_g1

0x7c70,	// (0x000173f5) popup_preview_fixed_window_g2_ParamLimits

0x7c70,	// (0x000173f5) popup_preview_fixed_window_g2

0x0002,

0xfb65,	// (0x0001f2ea) popup_preview_fixed_window_g_ParamLimits

0xfb65,	// (0x0001f2ea) popup_preview_fixed_window_g

0x0518,	// (0x0000fc9d) aid_navi_side_left_pane_ParamLimits

0x052d,	// (0x0000fcb2) aid_navi_side_right_pane_ParamLimits

0x0545,	// (0x0000fcca) navi_icon_pane_stacon_ParamLimits

0x0559,	// (0x0000fcde) navi_navi_pane_stacon_ParamLimits

0x0545,	// (0x0000fcca) navi_text_pane_stacon_ParamLimits

0x0130,	// (0x0000f8b5) main_text_info_pane

0x8058,	// (0x000177dd) listscroll_text_info_pane

0x8060,	// (0x000177e5) list_text_info_pane_ParamLimits

0x8060,	// (0x000177e5) list_text_info_pane

0x806f,	// (0x000177f4) scroll_pane_cp24_ParamLimits

0x806f,	// (0x000177f4) scroll_pane_cp24

0xe112,	// (0x0001d897) list_text_info_pane_t1_ParamLimits

0xe112,	// (0x0001d897) list_text_info_pane_t1

0xb9a5,	// (0x0001b12a) popup_fast_swap2_window_ParamLimits

0xb9a5,	// (0x0001b12a) popup_fast_swap2_window

0x80be,	// (0x00017843) aid_size_cell_fast2

0x24bb,	// (0x00011c40) bg_popup_window_pane_cp17

0x502e,	// (0x000147b3) heading_pane_cp2

0x2aa1,	// (0x00012226) listscroll_fast2_pane

0x80c8,	// (0x0001784d) grid_fast2_pane

0x80d2,	// (0x00017857) listscroll_fast2_pane_g1

0x80da,	// (0x0001785f) listscroll_fast2_pane_g2

0x0001,

0xfbe8,	// (0x0001f36d) listscroll_fast2_pane_g

0x369d,	// (0x00012e22) scroll_pane_cp26

0x80e4,	// (0x00017869) cell_fast2_pane_ParamLimits

0x80e4,	// (0x00017869) cell_fast2_pane

0x80f9,	// (0x0001787e) cell_fast2_pane_g1

0x8102,	// (0x00017887) cell_fast2_pane_g2

0x810b,	// (0x00017890) cell_fast2_pane_g3

0x0002,

0xfbed,	// (0x0001f372) cell_fast2_pane_g

0x2b94,	// (0x00012319) grid_highlight_pane_cp9

0x0a29,	// (0x000101ae) main_eswt_pane_ParamLimits

0x0a29,	// (0x000101ae) main_eswt_pane

0x8084,	// (0x00017809) list_single_text_info_pane

0x8113,	// (0x00017898) eswt_ctrl_button_pane

0x8113,	// (0x00017898) eswt_ctrl_canvas_pane

0x811b,	// (0x000178a0) eswt_ctrl_combo_pane

0x8113,	// (0x00017898) eswt_ctrl_default_pane

0x8113,	// (0x00017898) eswt_ctrl_label_pane

0x8123,	// (0x000178a8) eswt_ctrl_wait_pane

0x812b,	// (0x000178b0) eswt_shell_pane

0x24bb,	// (0x00011c40) listscroll_eswt_app_pane

0x814b,	// (0x000178d0) popup_eswt_tasktip_window_ParamLimits

0x814b,	// (0x000178d0) popup_eswt_tasktip_window

0x4c06,	// (0x0001438b) bg_popup_window_pane_cp18

0x815c,	// (0x000178e1) eswt_control_pane_g1_ParamLimits

0x815c,	// (0x000178e1) eswt_control_pane_g1

0x8169,	// (0x000178ee) eswt_control_pane_g2_ParamLimits

0x8169,	// (0x000178ee) eswt_control_pane_g2

0x8176,	// (0x000178fb) eswt_control_pane_g3_ParamLimits

0x8176,	// (0x000178fb) eswt_control_pane_g3

0x8183,	// (0x00017908) eswt_control_pane_g4_ParamLimits

0x8183,	// (0x00017908) eswt_control_pane_g4

0x0003,

0xfbf4,	// (0x0001f379) eswt_control_pane_g_ParamLimits

0xfbf4,	// (0x0001f379) eswt_control_pane_g

0x33b3,	// (0x00012b38) bg_button_pane_ParamLimits

0x33b3,	// (0x00012b38) bg_button_pane

0x2ba9,	// (0x0001232e) common_borders_pane_copy2_ParamLimits

0x2ba9,	// (0x0001232e) common_borders_pane_copy2

0x8190,	// (0x00017915) control_button_pane_g1_ParamLimits

0x8190,	// (0x00017915) control_button_pane_g1

0x819c,	// (0x00017921) control_button_pane_g2_ParamLimits

0x819c,	// (0x00017921) control_button_pane_g2

0x81a8,	// (0x0001792d) control_button_pane_g3_ParamLimits

0x81a8,	// (0x0001792d) control_button_pane_g3

0x0002,

0xfbfd,	// (0x0001f382) control_button_pane_g_ParamLimits

0xfbfd,	// (0x0001f382) control_button_pane_g

0x81bc,	// (0x00017941) control_button_pane_t1

0x81ca,	// (0x0001794f) control_button_pane_t2

0x0001,

0xfc04,	// (0x0001f389) control_button_pane_t

0x4ad8,	// (0x0001425d) bg_button_pane_g1

0x4ae8,	// (0x0001426d) bg_button_pane_g2

0x4ae0,	// (0x00014265) bg_button_pane_g3

0x4af8,	// (0x0001427d) bg_button_pane_g4

0x4af0,	// (0x00014275) bg_button_pane_g5

0x4b00,	// (0x00014285) bg_button_pane_g6

0x4b08,	// (0x0001428d) bg_button_pane_g7

0x4b18,	// (0x0001429d) bg_button_pane_g8

0x4b10,	// (0x00014295) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001efe1) bg_button_pane_g

0x7606,	// (0x00016d8b) common_borders_pane_ParamLimits

0x7606,	// (0x00016d8b) common_borders_pane

0x815c,	// (0x000178e1) eswt_control_pane_g1_copy1_ParamLimits

0x815c,	// (0x000178e1) eswt_control_pane_g1_copy1

0x8169,	// (0x000178ee) eswt_control_pane_g2_copy1_ParamLimits

0x8169,	// (0x000178ee) eswt_control_pane_g2_copy1

0x8176,	// (0x000178fb) eswt_control_pane_g3_copy1_ParamLimits

0x8176,	// (0x000178fb) eswt_control_pane_g3_copy1

0x8183,	// (0x00017908) eswt_control_pane_g4_copy1_ParamLimits

0x8183,	// (0x00017908) eswt_control_pane_g4_copy1

0x7641,	// (0x00016dc6) bg_eswt_ctrl_canvas_pane_g1

0x7606,	// (0x00016d8b) common_borders_pane_cp2_ParamLimits

0x7606,	// (0x00016d8b) common_borders_pane_cp2

0x7606,	// (0x00016d8b) common_borders_pane_cp3_ParamLimits

0x7606,	// (0x00016d8b) common_borders_pane_cp3

0x81d8,	// (0x0001795d) separator_horizontal_pane

0x81e0,	// (0x00017965) separator_vertical_pane

0x815c,	// (0x000178e1) eswt_control_pane_g1_copy2_ParamLimits

0x815c,	// (0x000178e1) eswt_control_pane_g1_copy2

0x8169,	// (0x000178ee) eswt_control_pane_g2_copy2_ParamLimits

0x8169,	// (0x000178ee) eswt_control_pane_g2_copy2

0x8176,	// (0x000178fb) eswt_control_pane_g3_copy2_ParamLimits

0x8176,	// (0x000178fb) eswt_control_pane_g3_copy2

0x8183,	// (0x00017908) eswt_control_pane_g4_copy2_ParamLimits

0x8183,	// (0x00017908) eswt_control_pane_g4_copy2

0x24bb,	// (0x00011c40) common_borders_pane_cp4

0x81e9,	// (0x0001796e) separator_horizontal_pane_g1

0x81f2,	// (0x00017977) separator_horizontal_pane_g2

0x81fb,	// (0x00017980) separator_horizontal_pane_g3

0x0002,

0xfc09,	// (0x0001f38e) separator_horizontal_pane_g

0x815c,	// (0x000178e1) eswt_control_pane_g1_copy3_ParamLimits

0x815c,	// (0x000178e1) eswt_control_pane_g1_copy3

0x8169,	// (0x000178ee) eswt_control_pane_g2_copy3_ParamLimits

0x8169,	// (0x000178ee) eswt_control_pane_g2_copy3

0x8176,	// (0x000178fb) eswt_control_pane_g3_copy3_ParamLimits

0x8176,	// (0x000178fb) eswt_control_pane_g3_copy3

0x8183,	// (0x00017908) eswt_control_pane_g4_copy3_ParamLimits

0x8183,	// (0x00017908) eswt_control_pane_g4_copy3

0x24bb,	// (0x00011c40) common_borders_pane_cp5

0x8204,	// (0x00017989) separator_vertical_pane_g1

0x820d,	// (0x00017992) separator_vertical_pane_g2

0x8216,	// (0x0001799b) separator_vertical_pane_g3

0x0002,

0xfc10,	// (0x0001f395) separator_vertical_pane_g

0x815c,	// (0x000178e1) eswt_control_pane_g1_copy4_ParamLimits

0x815c,	// (0x000178e1) eswt_control_pane_g1_copy4

0x8169,	// (0x000178ee) eswt_control_pane_g2_copy4_ParamLimits

0x8169,	// (0x000178ee) eswt_control_pane_g2_copy4

0x8176,	// (0x000178fb) eswt_control_pane_g3_copy4_ParamLimits

0x8176,	// (0x000178fb) eswt_control_pane_g3_copy4

0x8183,	// (0x00017908) eswt_control_pane_g4_copy4_ParamLimits

0x8183,	// (0x00017908) eswt_control_pane_g4_copy4

0xe12d,	// (0x0001d8b2) eswt_ctrl_combo_button_pane

0xe135,	// (0x0001d8ba) eswt_ctrl_input_pane

0xe13d,	// (0x0001d8c2) popup_choice_list_window_cp70

0xe145,	// (0x0001d8ca) eswt_ctrl_input_pane_t1

0x24bb,	// (0x00011c40) input_focus_pane_cp70

0x7606,	// (0x00016d8b) bg_button_pane_cp70_ParamLimits

0x7606,	// (0x00016d8b) bg_button_pane_cp70

0xe153,	// (0x0001d8d8) eswt_ctrl_combo_button_pane_g1

0x824d,	// (0x000179d2) wait_bar_pane_cp70

0x4c06,	// (0x0001438b) bg_popup_window_pane_cp70_ParamLimits

0x4c06,	// (0x0001438b) bg_popup_window_pane_cp70

0x8255,	// (0x000179da) popup_eswt_tasktip_window_t1

0x826b,	// (0x000179f0) wait_bar_pane_cp71_ParamLimits

0x826b,	// (0x000179f0) wait_bar_pane_cp71

0x8277,	// (0x000179fc) grid_eswt_app_pane

0x39b9,	// (0x0001313e) scroll_pane_cp70

0xe15b,	// (0x0001d8e0) cell_eswt_app_pane_ParamLimits

0xe15b,	// (0x0001d8e0) cell_eswt_app_pane

0xe185,	// (0x0001d90a) cell_eswt_app_pane_g1_ParamLimits

0xe185,	// (0x0001d90a) cell_eswt_app_pane_g1

0xe1b4,	// (0x0001d939) cell_eswt_app_pane_g2_ParamLimits

0xe1b4,	// (0x0001d939) cell_eswt_app_pane_g2

0x0001,

0xfc17,	// (0x0001f39c) cell_eswt_app_pane_g_ParamLimits

0xfc17,	// (0x0001f39c) cell_eswt_app_pane_g

0xe1dd,	// (0x0001d962) cell_eswt_app_pane_t1_ParamLimits

0xe1dd,	// (0x0001d962) cell_eswt_app_pane_t1

0x833a,	// (0x00017abf) grid_highlight_pane_cp70_ParamLimits

0x833a,	// (0x00017abf) grid_highlight_pane_cp70

0x4127,	// (0x000138ac) set_content_pane_g1

0xd35f,	// (0x0001cae4) status_small_volume_pane

0x186c,	// (0x00010ff1) status_small_volume_pane_g1

0x1874,	// (0x00010ff9) volume_small2_pane

0x187d,	// (0x00011002) volume_small2_pane_g1

0x1886,	// (0x0001100b) volume_small2_pane_g2

0x188f,	// (0x00011014) volume_small2_pane_g3

0x1898,	// (0x0001101d) volume_small2_pane_g4

0x18a1,	// (0x00011026) volume_small2_pane_g5

0x18aa,	// (0x0001102f) volume_small2_pane_g6

0x18b3,	// (0x00011038) volume_small2_pane_g7

0x18bc,	// (0x00011041) volume_small2_pane_g8

0x18c5,	// (0x0001104a) volume_small2_pane_g9

0x18ce,	// (0x00011053) volume_small2_pane_g10

0x0009,

0xfc1c,	// (0x0001f3a1) volume_small2_pane_g

0x7a07,	// (0x0001718c) fep_vkb_top_text_pane_g1_ParamLimits

0xe084,	// (0x0001d809) fep_vkb_top_text_pane_t1_ParamLimits

0x7c7c,	// (0x00017401) popup_preview_fixed_window_g3_ParamLimits

0x7c7c,	// (0x00017401) popup_preview_fixed_window_g3

0xbfc8,	// (0x0001b74d) popup_toolbar_trans_pane

0xda3d,	// (0x0001d1c2) aid_height_set_list_ParamLimits

0x5fd8,	// (0x0001575d) aid_size_parent_ParamLimits

0x4598,	// (0x00013d1d) list_highlight_pane_cp2_ParamLimits

0x4127,	// (0x000138ac) set_content_pane_g1_ParamLimits

0xdbf6,	// (0x0001d37b) list_single_image_pane_ParamLimits

0xdbf6,	// (0x0001d37b) list_single_image_pane

0xe20f,	// (0x0001d994) aid_size_cell_image_ParamLimits

0xe20f,	// (0x0001d994) aid_size_cell_image

0xe21c,	// (0x0001d9a1) grid_single_image_pane_ParamLimits

0xe21c,	// (0x0001d9a1) grid_single_image_pane

0x582f,	// (0x00014fb4) list_single_image_pane_g1_ParamLimits

0x582f,	// (0x00014fb4) list_single_image_pane_g1

0x835f,	// (0x00017ae4) list_single_image_pane_g2_ParamLimits

0x835f,	// (0x00017ae4) list_single_image_pane_g2

0x0001,

0xfc31,	// (0x0001f3b6) list_single_image_pane_g_ParamLimits

0xfc31,	// (0x0001f3b6) list_single_image_pane_g

0x8373,	// (0x00017af8) list_single_image_pane_t1_ParamLimits

0x8373,	// (0x00017af8) list_single_image_pane_t1

0xe22a,	// (0x0001d9af) cell_image_list_pane_ParamLimits

0xe22a,	// (0x0001d9af) cell_image_list_pane

0xe240,	// (0x0001d9c5) cell_image_list_pane_g1

0xe249,	// (0x0001d9ce) cell_image_list_pane_g2

0x0001,

0xfc36,	// (0x0001f3bb) cell_image_list_pane_g

0x83af,	// (0x00017b34) aid_size_cell_tb_trans_pane

0x33b3,	// (0x00012b38) bg_tb_trans_pane

0x83c1,	// (0x00017b46) grid_tb_trans_pane

0x4ad8,	// (0x0001425d) bg_tb_trans_pane_g1

0x4ae8,	// (0x0001426d) bg_tb_trans_pane_g2

0x4ae0,	// (0x00014265) bg_tb_trans_pane_g3

0x4af8,	// (0x0001427d) bg_tb_trans_pane_g4

0x4af0,	// (0x00014275) bg_tb_trans_pane_g5

0x4b18,	// (0x0001429d) bg_tb_trans_pane_g6

0x4b10,	// (0x00014295) bg_tb_trans_pane_g7

0x4b00,	// (0x00014285) bg_tb_trans_pane_g8

0x4b08,	// (0x0001428d) bg_tb_trans_pane_g9

0x0008,

0xfc3b,	// (0x0001f3c0) bg_tb_trans_pane_g

0x83d5,	// (0x00017b5a) cell_toolbar_trans_pane_ParamLimits

0x83d5,	// (0x00017b5a) cell_toolbar_trans_pane

0x7641,	// (0x00016dc6) cell_toolbar_trans_pane_g1

0xde39,	// (0x0001d5be) list_form2_midp_pane_t1

0xde47,	// (0x0001d5cc) list_form2_midp_pane_t2

0x0001,

0xfad8,	// (0x0001f25d) list_form2_midp_pane_t

0x71d8,	// (0x0001695d) scroll_pane_cp51_ParamLimits

0x73e3,	// (0x00016b68) form2_midp_wait_pane_g1

0x73ec,	// (0x00016b71) form2_midp_wait_pane_g2

0x73f5,	// (0x00016b7a) form2_midp_wait_pane_g3

0x0002,

0xfaed,	// (0x0001f272) form2_midp_wait_pane_g

0x25af,	// (0x00011d34) list_highlight_pane_cp21_ParamLimits

0x744c,	// (0x00016bd1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x745b,	// (0x00016be0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x61de,	// (0x00015963) list_single_2graphic_im_pane_ParamLimits

0x61de,	// (0x00015963) list_single_2graphic_im_pane

0xe252,	// (0x0001d9d7) list_single_2graphic_im_pane_g1_ParamLimits

0xe252,	// (0x0001d9d7) list_single_2graphic_im_pane_g1

0xe263,	// (0x0001d9e8) list_single_2graphic_im_pane_g2_ParamLimits

0xe263,	// (0x0001d9e8) list_single_2graphic_im_pane_g2

0xe26f,	// (0x0001d9f4) list_single_2graphic_im_pane_g3_ParamLimits

0xe26f,	// (0x0001d9f4) list_single_2graphic_im_pane_g3

0x0003,

0xfc4e,	// (0x0001f3d3) list_single_2graphic_im_pane_g_ParamLimits

0xfc4e,	// (0x0001f3d3) list_single_2graphic_im_pane_g

0xe283,	// (0x0001da08) list_single_2graphic_im_pane_t1_ParamLimits

0xe283,	// (0x0001da08) list_single_2graphic_im_pane_t1

0x7c88,	// (0x0001740d) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c88,	// (0x0001740d) list_single_graphic_2heading_pane_fp

0x7ccc,	// (0x00017451) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7ccc,	// (0x00017451) list_single_graphic_2heading_pane_fp_g1

0x7c9d,	// (0x00017422) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c9d,	// (0x00017422) list_single_graphic_2heading_pane_fp_g2

0x2ffc,	// (0x00012781) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2ffc,	// (0x00012781) list_single_graphic_2heading_pane_fp_g3

0x33d9,	// (0x00012b5e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x33d9,	// (0x00012b5e) list_single_graphic_2heading_pane_fp_g4

0x7ca9,	// (0x0001742e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7ca9,	// (0x0001742e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f2fa) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f2fa) list_single_graphic_2heading_pane_fp_g

0x8469,	// (0x00017bee) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8469,	// (0x00017bee) list_single_graphic_2heading_pane_fp_t1

0x7d04,	// (0x00017489) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7d04,	// (0x00017489) list_single_graphic_2heading_pane_fp_t2

0x847f,	// (0x00017c04) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x847f,	// (0x00017c04) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc57,	// (0x0001f3dc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc57,	// (0x0001f3dc) list_single_graphic_2heading_pane_fp_t

0x76cd,	// (0x00016e52) fep_hwr_write_pane_g5_ParamLimits

0x76cd,	// (0x00016e52) fep_hwr_write_pane_g5

0x76d9,	// (0x00016e5e) fep_hwr_write_pane_g6_ParamLimits

0x76d9,	// (0x00016e5e) fep_hwr_write_pane_g6

0x812b,	// (0x000178b0) eswt_shell_pane_ParamLimits

0x4c06,	// (0x0001438b) bg_popup_window_pane_cp18_ParamLimits

0x5ef8,	// (0x0001567d) heading_pane_cp70

0x8255,	// (0x000179da) popup_eswt_tasktip_window_t1_ParamLimits

0xd42d,	// (0x0001cbb2) aid_touch_tab_arrow_left

0xd443,	// (0x0001cbc8) aid_touch_tab_arrow_right

0xc728,	// (0x0001bead) title_pane_g3_ParamLimits

0xc728,	// (0x0001bead) title_pane_g3

0x3292,	// (0x00012a17) set_value_pane_g1

0xbfc8,	// (0x0001b74d) popup_toolbar_trans_pane_ParamLimits

0x83af,	// (0x00017b34) aid_size_cell_tb_trans_pane_ParamLimits

0x33b3,	// (0x00012b38) bg_tb_trans_pane_ParamLimits

0x83c1,	// (0x00017b46) grid_tb_trans_pane_ParamLimits

0x2852,	// (0x00011fd7) cont_note_pane_ParamLimits

0x2852,	// (0x00011fd7) cont_note_pane

0x2ba9,	// (0x0001232e) cont_snote2_single_text_pane_ParamLimits

0x2ba9,	// (0x0001232e) cont_snote2_single_text_pane

0x2ba9,	// (0x0001232e) cont_snote2_single_graphic_pane_ParamLimits

0x2ba9,	// (0x0001232e) cont_snote2_single_graphic_pane

0x5249,	// (0x000149ce) cont_note_wait_pane_ParamLimits

0x5249,	// (0x000149ce) cont_note_wait_pane

0x5249,	// (0x000149ce) cont_note_image_pane_ParamLimits

0x5249,	// (0x000149ce) cont_note_image_pane

0x8495,	// (0x00017c1a) popup_note2_window_g1_ParamLimits

0x8495,	// (0x00017c1a) popup_note2_window_g1

0x84c6,	// (0x00017c4b) popup_note2_window_t1_ParamLimits

0x84c6,	// (0x00017c4b) popup_note2_window_t1

0x850b,	// (0x00017c90) popup_note2_window_t2_ParamLimits

0x850b,	// (0x00017c90) popup_note2_window_t2

0x8550,	// (0x00017cd5) popup_note2_window_t3_ParamLimits

0x8550,	// (0x00017cd5) popup_note2_window_t3

0x8595,	// (0x00017d1a) popup_note2_window_t4_ParamLimits

0x8595,	// (0x00017d1a) popup_note2_window_t4

0x28d6,	// (0x0001205b) popup_note2_window_t5_ParamLimits

0x28d6,	// (0x0001205b) popup_note2_window_t5

0x0004,

0xfc63,	// (0x0001f3e8) popup_note2_window_t_ParamLimits

0xfc63,	// (0x0001f3e8) popup_note2_window_t

0x85c4,	// (0x00017d49) popup_note2_image_window_g1_ParamLimits

0x85c4,	// (0x00017d49) popup_note2_image_window_g1

0x85d0,	// (0x00017d55) popup_note2_image_window_g2_ParamLimits

0x85d0,	// (0x00017d55) popup_note2_image_window_g2

0x0001,

0xfc6e,	// (0x0001f3f3) popup_note2_image_window_g_ParamLimits

0xfc6e,	// (0x0001f3f3) popup_note2_image_window_g

0x85e2,	// (0x00017d67) popup_note2_image_window_t1_ParamLimits

0x85e2,	// (0x00017d67) popup_note2_image_window_t1

0x85fa,	// (0x00017d7f) popup_note2_image_window_t2_ParamLimits

0x85fa,	// (0x00017d7f) popup_note2_image_window_t2

0x8612,	// (0x00017d97) popup_note2_image_window_t3_ParamLimits

0x8612,	// (0x00017d97) popup_note2_image_window_t3

0x0002,

0xfc73,	// (0x0001f3f8) popup_note2_image_window_t_ParamLimits

0xfc73,	// (0x0001f3f8) popup_note2_image_window_t

0x5257,	// (0x000149dc) popup_note2_wait_window_g1_ParamLimits

0x5257,	// (0x000149dc) popup_note2_wait_window_g1

0x862e,	// (0x00017db3) popup_note2_wait_window_g2_ParamLimits

0x862e,	// (0x00017db3) popup_note2_wait_window_g2

0x526f,	// (0x000149f4) popup_note2_wait_window_g3_ParamLimits

0x526f,	// (0x000149f4) popup_note2_wait_window_g3

0x0002,

0xfc7a,	// (0x0001f3ff) popup_note2_wait_window_g_ParamLimits

0xfc7a,	// (0x0001f3ff) popup_note2_wait_window_g

0x863a,	// (0x00017dbf) popup_note2_wait_window_t1_ParamLimits

0x863a,	// (0x00017dbf) popup_note2_wait_window_t1

0x8658,	// (0x00017ddd) popup_note2_wait_window_t2_ParamLimits

0x8658,	// (0x00017ddd) popup_note2_wait_window_t2

0x8676,	// (0x00017dfb) popup_note2_wait_window_t3_ParamLimits

0x8676,	// (0x00017dfb) popup_note2_wait_window_t3

0x8688,	// (0x00017e0d) popup_note2_wait_window_t4_ParamLimits

0x8688,	// (0x00017e0d) popup_note2_wait_window_t4

0x0003,

0xfc81,	// (0x0001f406) popup_note2_wait_window_t_ParamLimits

0xfc81,	// (0x0001f406) popup_note2_wait_window_t

0x869a,	// (0x00017e1f) wait_bar2_pane_ParamLimits

0x869a,	// (0x00017e1f) wait_bar2_pane

0x86b2,	// (0x00017e37) popup_snote2_single_text_window_g1_ParamLimits

0x86b2,	// (0x00017e37) popup_snote2_single_text_window_g1

0x86da,	// (0x00017e5f) popup_snote2_single_text_window_t1_ParamLimits

0x86da,	// (0x00017e5f) popup_snote2_single_text_window_t1

0x8726,	// (0x00017eab) popup_snote2_single_text_window_t2_ParamLimits

0x8726,	// (0x00017eab) popup_snote2_single_text_window_t2

0x8772,	// (0x00017ef7) popup_snote2_single_text_window_t3_ParamLimits

0x8772,	// (0x00017ef7) popup_snote2_single_text_window_t3

0x87b3,	// (0x00017f38) popup_snote2_single_text_window_t4_ParamLimits

0x87b3,	// (0x00017f38) popup_snote2_single_text_window_t4

0x87e9,	// (0x00017f6e) popup_snote2_single_text_window_t5_ParamLimits

0x87e9,	// (0x00017f6e) popup_snote2_single_text_window_t5

0x0004,

0xfc8a,	// (0x0001f40f) popup_snote2_single_text_window_t_ParamLimits

0xfc8a,	// (0x0001f40f) popup_snote2_single_text_window_t

0x8814,	// (0x00017f99) popup_snote2_single_graphic_window_g1_ParamLimits

0x8814,	// (0x00017f99) popup_snote2_single_graphic_window_g1

0x883c,	// (0x00017fc1) popup_snote2_single_graphic_window_g2_ParamLimits

0x883c,	// (0x00017fc1) popup_snote2_single_graphic_window_g2

0x0001,

0xfc95,	// (0x0001f41a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc95,	// (0x0001f41a) popup_snote2_single_graphic_window_g

0x8864,	// (0x00017fe9) popup_snote2_single_graphic_window_t1_ParamLimits

0x8864,	// (0x00017fe9) popup_snote2_single_graphic_window_t1

0x88b0,	// (0x00018035) popup_snote2_single_graphic_window_t2_ParamLimits

0x88b0,	// (0x00018035) popup_snote2_single_graphic_window_t2

0x8772,	// (0x00017ef7) popup_snote2_single_graphic_window_t3_ParamLimits

0x8772,	// (0x00017ef7) popup_snote2_single_graphic_window_t3

0x87b3,	// (0x00017f38) popup_snote2_single_graphic_window_t4_ParamLimits

0x87b3,	// (0x00017f38) popup_snote2_single_graphic_window_t4

0x87e9,	// (0x00017f6e) popup_snote2_single_graphic_window_t5_ParamLimits

0x87e9,	// (0x00017f6e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9a,	// (0x0001f41f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9a,	// (0x0001f41f) popup_snote2_single_graphic_window_t

0x7099,	// (0x0001681e) clock_nsta_pane_cp2_t1

0x7099,	// (0x0001681e) clock_nsta_pane_cp2_t2

0x0001,

0xfaae,	// (0x0001f233) clock_nsta_pane_cp2_t

0x33cd,	// (0x00012b52) form_field_data_wide_pane_g1_ParamLimits

0x2ffc,	// (0x00012781) form_field_data_wide_pane_g2_ParamLimits

0x2ffc,	// (0x00012781) form_field_data_wide_pane_g2

0x33d9,	// (0x00012b5e) form_field_data_wide_pane_g3_ParamLimits

0x33d9,	// (0x00012b5e) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001edfb) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001edfb) form_field_data_wide_pane_g

0xdd7c,	// (0x0001d501) grid_touch_3_pane_ParamLimits

0xdd7c,	// (0x0001d501) grid_touch_3_pane

0xe2b4,	// (0x0001da39) cell_touch_3_pane_ParamLimits

0xe2b4,	// (0x0001da39) cell_touch_3_pane

0x7641,	// (0x00016dc6) cell_touch_3_pane_g1

0x7641,	// (0x00016dc6) cell_touch_3_pane_g2

0x0001,

0xfb33,	// (0x0001f2b8) cell_touch_3_pane_g

0x2908,	// (0x0001208d) cont_query_data_pane

0x2910,	// (0x00012095) cont_query_data_pane_cp1

0x892a,	// (0x000180af) button_value_adjust_pane_cp7

0x8932,	// (0x000180b7) query_popup_pane_cp3

0x3ca0,	// (0x00013425) bg_popup_sub_pane_cp22_ParamLimits

0x065a,	// (0x0000fddf) navi_navi_volume_pane_cp2

0x0675,	// (0x0000fdfa) popup_side_volume_key_window_g2

0x0684,	// (0x0000fe09) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001ee91) popup_side_volume_key_window_g

0x06a1,	// (0x0000fe26) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001ee98) popup_side_volume_key_window_t

0x3fe6,	// (0x0001376b) popup_side_volume_key_window_ParamLimits

0xcb88,	// (0x0001c30d) list_double_graphic_pane_g4_ParamLimits

0xcb88,	// (0x0001c30d) list_double_graphic_pane_g4

0xdbd2,	// (0x0001d357) list_single_2heading_msg_pane_ParamLimits

0xdbd2,	// (0x0001d357) list_single_2heading_msg_pane

0xe2fc,	// (0x0001da81) list_single_2heading_msg_pane_g1_ParamLimits

0xe2fc,	// (0x0001da81) list_single_2heading_msg_pane_g1

0xe308,	// (0x0001da8d) list_single_2heading_msg_pane_g2_ParamLimits

0xe308,	// (0x0001da8d) list_single_2heading_msg_pane_g2

0xe31b,	// (0x0001daa0) list_single_2heading_msg_pane_g3_ParamLimits

0xe31b,	// (0x0001daa0) list_single_2heading_msg_pane_g3

0xe327,	// (0x0001daac) list_single_2heading_msg_pane_g4_ParamLimits

0xe327,	// (0x0001daac) list_single_2heading_msg_pane_g4

0x0003,

0xfca5,	// (0x0001f42a) list_single_2heading_msg_pane_g_ParamLimits

0xfca5,	// (0x0001f42a) list_single_2heading_msg_pane_g

0xe33f,	// (0x0001dac4) list_single_2heading_msg_pane_t1_ParamLimits

0xe33f,	// (0x0001dac4) list_single_2heading_msg_pane_t1

0xe367,	// (0x0001daec) list_single_2heading_msg_pane_t2_ParamLimits

0xe367,	// (0x0001daec) list_single_2heading_msg_pane_t2

0xe3d2,	// (0x0001db57) list_single_2heading_msg_pane_t3_ParamLimits

0xe3d2,	// (0x0001db57) list_single_2heading_msg_pane_t3

0x8a15,	// (0x0001819a) list_single_2heading_msg_pane_t4_ParamLimits

0x8a15,	// (0x0001819a) list_single_2heading_msg_pane_t4

0x0003,

0xfcae,	// (0x0001f433) list_single_2heading_msg_pane_t_ParamLimits

0xfcae,	// (0x0001f433) list_single_2heading_msg_pane_t

0x2503,	// (0x00011c88) title_pane_g4_ParamLimits

0x2503,	// (0x00011c88) title_pane_g4

0x0469,	// (0x0000fbee) title_pane_stacon_g3_ParamLimits

0x0469,	// (0x0000fbee) title_pane_stacon_g3

0x842c,	// (0x00017bb1) list_single_2graphic_im_pane_g4_ParamLimits

0x842c,	// (0x00017bb1) list_single_2graphic_im_pane_g4

0x5cb4,	// (0x00015439) popup_side_volume_key_window_cp

0x65c1,	// (0x00015d46) main_idle_act2_pane_t1

0x1070,	// (0x000107f5) toolbar_button_pane_g10

0xca33,	// (0x0001c1b8) popup_toolbar_window_cp1

0x708a,	// (0x0001680f) clock_nsta_pane_cp_t1

0x708a,	// (0x0001680f) clock_nsta_pane_cp_t2

0x0001,

0xfaa9,	// (0x0001f22e) clock_nsta_pane_cp_t

0x065a,	// (0x0000fddf) navi_navi_volume_pane_cp2_ParamLimits

0x0669,	// (0x0000fdee) popup_side_volume_key_window_g1_ParamLimits

0x0675,	// (0x0000fdfa) popup_side_volume_key_window_g2_ParamLimits

0x0684,	// (0x0000fe09) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001ee91) popup_side_volume_key_window_g_ParamLimits

0x14d8,	// (0x00010c5d) fep_hwr_aid_pane

0x157f,	// (0x00010d04) bg_fep_hwr_top_pane_g4_ParamLimits

0x769d,	// (0x00016e22) fep_hwr_top_pane_g1_ParamLimits

0x76af,	// (0x00016e34) fep_hwr_top_pane_g2_ParamLimits

0x159f,	// (0x00010d24) fep_hwr_top_pane_g3_ParamLimits

0xfafe,	// (0x0001f283) fep_hwr_top_pane_g_ParamLimits

0x15b4,	// (0x00010d39) fep_hwr_top_text_pane_ParamLimits

0x5a77,	// (0x000151fc) aid_touch_tab_arrow_arrow_2

0x5a80,	// (0x00015205) aid_touch_tab_arrow_left_2

0x14ec,	// (0x00010c71) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1523,	// (0x00010ca8) fep_hwr_prediction_pane

0x780f,	// (0x00016f94) fep_vkb_prediction_pane

0xe064,	// (0x0001d7e9) fep_vkb_side_pane_g3_ParamLimits

0xe064,	// (0x0001d7e9) fep_vkb_side_pane_g3

0x172f,	// (0x00010eb4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x179b,	// (0x00010f20) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x17a8,	// (0x00010f2d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbad,	// (0x0001f332) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x18d7,	// (0x0001105c) fep_hwr_prediction_pane_g1

0x18e1,	// (0x00011066) fep_hwr_prediction_pane_g2

0x18e9,	// (0x0001106e) fep_hwr_prediction_pane_g3

0x18f1,	// (0x00011076) fep_hwr_prediction_pane_g4

0x0003,

0xfcb7,	// (0x0001f43c) fep_hwr_prediction_pane_g

0x8a3a,	// (0x000181bf) fep_vkb_prediction_pane_g1

0x8a44,	// (0x000181c9) fep_vkb_prediction_pane_g2

0x8a4c,	// (0x000181d1) fep_vkb_prediction_pane_g3

0x8a54,	// (0x000181d9) fep_vkb_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0001f445) fep_vkb_prediction_pane_g

0x1358,	// (0x00010add) slider_set_pane_g3

0x136c,	// (0x00010af1) slider_set_pane_g4

0x1384,	// (0x00010b09) slider_set_pane_g5

0x1358,	// (0x00010add) slider_set_pane_g6

0x139a,	// (0x00010b1f) slider_set_pane_g7

0x613d,	// (0x000158c2) slider_form_pane_g3

0x6146,	// (0x000158cb) slider_form_pane_g4

0x614e,	// (0x000158d3) slider_form_pane_g5

0x613d,	// (0x000158c2) slider_form_pane_g6

0xdb88,	// (0x0001d30d) slider_form_pane_g7

0x68be,	// (0x00016043) slider_set_pane_vc_g3

0x68c7,	// (0x0001604c) slider_set_pane_vc_g4

0x68d0,	// (0x00016055) slider_set_pane_vc_g5

0x68be,	// (0x00016043) slider_set_pane_vc_g6

0x68d9,	// (0x0001605e) slider_set_pane_vc_g7

0x6d5e,	// (0x000164e3) slider_form_pane_vc_g1

0x6d67,	// (0x000164ec) slider_form_pane_vc_g2

0x6d70,	// (0x000164f5) slider_form_pane_vc_g3

0x6d5e,	// (0x000164e3) slider_form_pane_vc_g4

0x6d79,	// (0x000164fe) slider_form_pane_vc_g5

0x0004,

0xfa7b,	// (0x0001f200) slider_form_pane_vc_g

0x0130,	// (0x0000f8b5) main_idle_act3_pane

0x8a5c,	// (0x000181e1) ai3_links_pane

0xe440,	// (0x0001dbc5) popup_ai3_data_window_ParamLimits

0xe440,	// (0x0001dbc5) popup_ai3_data_window

0x24bb,	// (0x00011c40) grid_ai3_links_pane

0xe45a,	// (0x0001dbdf) cell_ai3_links_pane_ParamLimits

0xe45a,	// (0x0001dbdf) cell_ai3_links_pane

0x8a97,	// (0x0001821c) bg_popup_sub_pane_cp11

0x8aa4,	// (0x00018229) cell_ai3_links_pane_g1

0x24bb,	// (0x00011c40) bg_popup_sub_pane_cp12

0x8ac9,	// (0x0001824e) heading_ai3_data_pane

0x8ad1,	// (0x00018256) list_ai3_gene_pane

0x8add,	// (0x00018262) popup_ai3_data_window_g1

0x8ae5,	// (0x0001826a) heading_ai3_data_pane_g1

0x8aed,	// (0x00018272) heading_ai3_data_pane_t1

0x8afb,	// (0x00018280) list_double_ai3_gene_pane_ParamLimits

0x8afb,	// (0x00018280) list_double_ai3_gene_pane

0x8b08,	// (0x0001828d) list_single_ai3_gene_pane_ParamLimits

0x8b08,	// (0x0001828d) list_single_ai3_gene_pane

0x7606,	// (0x00016d8b) list_highlight_pane_cp7_ParamLimits

0x7606,	// (0x00016d8b) list_highlight_pane_cp7

0x8b15,	// (0x0001829a) list_single_a13_gene_pane_t1_ParamLimits

0x8b15,	// (0x0001829a) list_single_a13_gene_pane_t1

0x8b2c,	// (0x000182b1) list_single_ai3_gene_pane_g1

0x8b35,	// (0x000182ba) list_single_ai3_gene_pane_g2

0x0001,

0xfcc9,	// (0x0001f44e) list_single_ai3_gene_pane_g

0x8b3d,	// (0x000182c2) list_double_ai3_gene_pane_g1_ParamLimits

0x8b3d,	// (0x000182c2) list_double_ai3_gene_pane_g1

0x8b49,	// (0x000182ce) list_double_ai3_gene_pane_t1_ParamLimits

0x8b49,	// (0x000182ce) list_double_ai3_gene_pane_t1

0x8b65,	// (0x000182ea) list_double_ai3_gene_pane_t2_ParamLimits

0x8b65,	// (0x000182ea) list_double_ai3_gene_pane_t2

0x8b7b,	// (0x00018300) list_double_ai3_gene_pane_t3_ParamLimits

0x8b7b,	// (0x00018300) list_double_ai3_gene_pane_t3

0x0002,

0xfcce,	// (0x0001f453) list_double_ai3_gene_pane_t_ParamLimits

0xfcce,	// (0x0001f453) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8943,	// (0x000180c8) aid_size_min_col_2

0xe2e6,	// (0x0001da6b) aid_size_min_msg_ParamLimits

0xe2e6,	// (0x0001da6b) aid_size_min_msg

0xe078,	// (0x0001d7fd) fep_vkb_top_text_pane_g2_ParamLimits

0xe078,	// (0x0001d7fd) fep_vkb_top_text_pane_g2

0x0001,

0xfb2e,	// (0x0001f2b3) fep_vkb_top_text_pane_g_ParamLimits

0xfb2e,	// (0x0001f2b3) fep_vkb_top_text_pane_g

0x0130,	// (0x0000f8b5) main_hc_apps_shell_pane

0x8b98,	// (0x0001831d) grid_hc_apps_pane_ParamLimits

0x8b98,	// (0x0001831d) grid_hc_apps_pane

0x8ba7,	// (0x0001832c) list_hc_apps_pane

0x8baf,	// (0x00018334) scroll_pane_cp37_ParamLimits

0x8baf,	// (0x00018334) scroll_pane_cp37

0xe474,	// (0x0001dbf9) cell_hc_apps_pane_ParamLimits

0xe474,	// (0x0001dbf9) cell_hc_apps_pane

0xe532,	// (0x0001dcb7) cell_hc_apps_pane_g1_ParamLimits

0xe532,	// (0x0001dcb7) cell_hc_apps_pane_g1

0x8c9a,	// (0x0001841f) cell_hc_apps_pane_g2_ParamLimits

0x8c9a,	// (0x0001841f) cell_hc_apps_pane_g2

0x8cb6,	// (0x0001843b) cell_hc_apps_pane_g3_ParamLimits

0x8cb6,	// (0x0001843b) cell_hc_apps_pane_g3

0x0002,

0xfcd5,	// (0x0001f45a) cell_hc_apps_pane_g_ParamLimits

0xfcd5,	// (0x0001f45a) cell_hc_apps_pane_g

0xe55f,	// (0x0001dce4) cell_hc_apps_pane_t1_ParamLimits

0xe55f,	// (0x0001dce4) cell_hc_apps_pane_t1

0x2852,	// (0x00011fd7) grid_highlight_pane_cp10_ParamLimits

0x2852,	// (0x00011fd7) grid_highlight_pane_cp10

0xe59d,	// (0x0001dd22) list_single_hc_apps_pane_ParamLimits

0xe59d,	// (0x0001dd22) list_single_hc_apps_pane

0xe5ca,	// (0x0001dd4f) list_single_hc_apps_pane_g1

0xe5e3,	// (0x0001dd68) list_single_hc_apps_pane_g2

0x0001,

0xfcdc,	// (0x0001f461) list_single_hc_apps_pane_g

0xe5fc,	// (0x0001dd81) list_single_hc_apps_pane_g2_copy1

0x8dc2,	// (0x00018547) list_single_hc_apps_pane_t1

0x25af,	// (0x00011d34) bg_set_opt_pane_cp_ParamLimits

0x0391,	// (0x0000fb16) setting_slider_pane_t1_ParamLimits

0x03aa,	// (0x0000fb2f) setting_slider_pane_t2_ParamLimits

0x03c4,	// (0x0000fb49) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001ece3) setting_slider_pane_t_ParamLimits

0x03dc,	// (0x0000fb61) slider_set_pane_ParamLimits

0x0903,	// (0x00010088) control_pane_g5_ParamLimits

0x0903,	// (0x00010088) control_pane_g5

0x5f8c,	// (0x00015711) slider_set_pane_g1_ParamLimits

0x134c,	// (0x00010ad1) slider_set_pane_g2_ParamLimits

0x1358,	// (0x00010add) slider_set_pane_g3_ParamLimits

0x136c,	// (0x00010af1) slider_set_pane_g4_ParamLimits

0x1384,	// (0x00010b09) slider_set_pane_g5_ParamLimits

0x1358,	// (0x00010add) slider_set_pane_g6_ParamLimits

0x139a,	// (0x00010b1f) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001f0df) slider_set_pane_g_ParamLimits

0x40d2,	// (0x00013857) navi_icon_text_pane_ParamLimits

0xd3f6,	// (0x0001cb7b) aid_fill_nsta_2_ParamLimits

0xd42d,	// (0x0001cbb2) aid_touch_tab_arrow_left_ParamLimits

0xd443,	// (0x0001cbc8) aid_touch_tab_arrow_right_ParamLimits

0xd4de,	// (0x0001cc63) clock_nsta_pane_ParamLimits

0x5a59,	// (0x000151de) navi_icon_pane_g1_ParamLimits

0x5a65,	// (0x000151ea) navi_text_pane_t1_ParamLimits

0x7196,	// (0x0001691b) navi_icon_text_pane_g1_ParamLimits

0x71a2,	// (0x00016927) navi_icon_text_pane_t1_ParamLimits

0xe5ca,	// (0x0001dd4f) list_single_hc_apps_pane_g1_ParamLimits

0xe5e3,	// (0x0001dd68) list_single_hc_apps_pane_g2_ParamLimits

0xfcdc,	// (0x0001f461) list_single_hc_apps_pane_g_ParamLimits

0xe5fc,	// (0x0001dd81) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8dc2,	// (0x00018547) list_single_hc_apps_pane_t1_ParamLimits

0xb71f,	// (0x0001aea4) popup_toolbar2_fixed_window_ParamLimits

0xb71f,	// (0x0001aea4) popup_toolbar2_fixed_window

0xbfbe,	// (0x0001b743) popup_toolbar2_float_window

0x24bb,	// (0x00011c40) bg_popup_sub_pane_cp27

0x8df0,	// (0x00018575) grid_toolbar2_float_pane

0x24bb,	// (0x00011c40) bg_popup_sub_pane_cp26

0x8df0,	// (0x00018575) grid_toolbar2_fixed_pane

0xe618,	// (0x0001dd9d) cell_toolbar2_fixed_pane_ParamLimits

0xe618,	// (0x0001dd9d) cell_toolbar2_fixed_pane

0xe632,	// (0x0001ddb7) cell_toolbar2_fixed_pane_g1

0x8e11,	// (0x00018596) toolbar2_fixed_button_pane

0x4ad8,	// (0x0001425d) toolbar2_fixed_button_pane_g1

0x4ae8,	// (0x0001426d) toolbar2_fixed_button_pane_g2

0x4ae0,	// (0x00014265) toolbar2_fixed_button_pane_g3

0x4af8,	// (0x0001427d) toolbar2_fixed_button_pane_g4

0x4af0,	// (0x00014275) toolbar2_fixed_button_pane_g5

0x4b00,	// (0x00014285) toolbar2_fixed_button_pane_g6

0x4b08,	// (0x0001428d) toolbar2_fixed_button_pane_g7

0x4b18,	// (0x0001429d) toolbar2_fixed_button_pane_g8

0x4b10,	// (0x00014295) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001efe1) toolbar2_fixed_button_pane_g

0x8e19,	// (0x0001859e) cell_toolbar2_float_pane_ParamLimits

0x8e19,	// (0x0001859e) cell_toolbar2_float_pane

0x8e2a,	// (0x000185af) cell_toolbar2_float_pane_g1

0x8e11,	// (0x00018596) toolbar2_fixed_button_pane_cp

0xdf52,	// (0x0001d6d7) fep_vkb_accented_list_pane_ParamLimits

0xdf52,	// (0x0001d6d7) fep_vkb_accented_list_pane

0x170f,	// (0x00010e94) bg_popup_fep_shadow_pane_g9

0x4252,	// (0x000139d7) bg_popup_fep_shadow_pane_cp3

0x3684,	// (0x00012e09) list_accented_list_pane

0x8e33,	// (0x000185b8) list_single_accented_list_pane_ParamLimits

0x8e33,	// (0x000185b8) list_single_accented_list_pane

0x4252,	// (0x000139d7) list_highlight_pane_cp10

0x8e44,	// (0x000185c9) list_single_accented_list_pane_t1

0xbee8,	// (0x0001b66d) popup_slider_window_ParamLimits

0xbee8,	// (0x0001b66d) popup_slider_window

0x893a,	// (0x000180bf) aid_indentation_list_msg

0xe72b,	// (0x0001deb0) bg_popup_window_pane_cp19

0x8f68,	// (0x000186ed) popup_slider_window_g1

0x8f84,	// (0x00018709) popup_slider_window_g2

0x8fa0,	// (0x00018725) popup_slider_window_g3

0x0005,

0xfce1,	// (0x0001f466) popup_slider_window_g

0x8ffc,	// (0x00018781) popup_slider_window_t1

0x9070,	// (0x000187f5) small_volume_slider_vertical_pane

0x7641,	// (0x00016dc6) small_volume_slider_vertical_pane_g1

0x7641,	// (0x00016dc6) small_volume_slider_vertical_pane_g2

0x908c,	// (0x00018811) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf3,	// (0x0001f478) small_volume_slider_vertical_pane_g

0xb68d,	// (0x0001ae12) area_side_right_pane_ParamLimits

0xb68d,	// (0x0001ae12) area_side_right_pane

0xc0f4,	// (0x0001b879) aid_size_side_button_ParamLimits

0xc0f4,	// (0x0001b879) aid_size_side_button

0xc10d,	// (0x0001b892) grid_sctrl_middle_pane_ParamLimits

0xc10d,	// (0x0001b892) grid_sctrl_middle_pane

0x192c,	// (0x000110b1) sctrl_sk_bottom_pane

0x193d,	// (0x000110c2) sctrl_sk_top_pane

0x194f,	// (0x000110d4) aid_touch_sctrl_top

0x195c,	// (0x000110e1) bg_sctrl_sk_pane_ParamLimits

0x195c,	// (0x000110e1) bg_sctrl_sk_pane

0x196a,	// (0x000110ef) sctrl_sk_top_pane_g1

0x1977,	// (0x000110fc) sctrl_sk_top_pane_t1

0x194f,	// (0x000110d4) aid_touch_sctrl_bottom

0x195c,	// (0x000110e1) bg_sctrl_sk_pane_cp_ParamLimits

0x195c,	// (0x000110e1) bg_sctrl_sk_pane_cp

0x1992,	// (0x00011117) sctrl_sk_bottom_pane_g1

0x1977,	// (0x000110fc) sctrl_sk_bottom_pane_t1

0xc127,	// (0x0001b8ac) cell_sctrl_middle_pane_ParamLimits

0xc127,	// (0x0001b8ac) cell_sctrl_middle_pane

0xc138,	// (0x0001b8bd) aid_touch_sctrl_middle_ParamLimits

0xc138,	// (0x0001b8bd) aid_touch_sctrl_middle

0xc145,	// (0x0001b8ca) bg_sctrl_middle_pane_ParamLimits

0xc145,	// (0x0001b8ca) bg_sctrl_middle_pane

0x1fff,	// (0x00011784) cell_sctrl_middle_pane_g1_ParamLimits

0x1fff,	// (0x00011784) cell_sctrl_middle_pane_g1

0xc153,	// (0x0001b8d8) cell_sctrl_middle_pane_g2_ParamLimits

0xc153,	// (0x0001b8d8) cell_sctrl_middle_pane_g2

0x0001,

0xfcff,	// (0x0001f484) cell_sctrl_middle_pane_g_ParamLimits

0xfcff,	// (0x0001f484) cell_sctrl_middle_pane_g

0x4ad8,	// (0x0001425d) bg_sctrl_middle_pane_g1

0x4ae0,	// (0x00014265) bg_sctrl_middle_pane_g2

0x4ae8,	// (0x0001426d) bg_sctrl_middle_pane_g3

0x4af0,	// (0x00014275) bg_sctrl_middle_pane_g4

0x4af8,	// (0x0001427d) bg_sctrl_middle_pane_g5

0x4b00,	// (0x00014285) bg_sctrl_middle_pane_g6

0x4b08,	// (0x0001428d) bg_sctrl_middle_pane_g7

0x4b10,	// (0x00014295) bg_sctrl_middle_pane_g8

0x0007,

0xfd04,	// (0x0001f489) bg_sctrl_middle_pane_g

0x4b18,	// (0x0001429d) bg_sctrl_middle_pane_g8_copy1

0x4ad8,	// (0x0001425d) bg_sctrl_sk_pane_g1

0x4ae8,	// (0x0001426d) bg_sctrl_sk_pane_g2

0x4ae0,	// (0x00014265) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001efe1) bg_sctrl_sk_pane_g

0x2d67,	// (0x000124ec) aid_size_touch_scroll_bar

0x4af8,	// (0x0001427d) bg_sctrl_sk_pane_g4

0x4af0,	// (0x00014275) bg_sctrl_sk_pane_g5

0x4b00,	// (0x00014285) bg_sctrl_sk_pane_g6

0x4b08,	// (0x0001428d) bg_sctrl_sk_pane_g7

0x4b18,	// (0x0001429d) bg_sctrl_sk_pane_g8

0x4b10,	// (0x00014295) bg_sctrl_sk_pane_g9

0x0ac1,	// (0x00010246) popup_fep_china_hwr2_fs_candidate_window

0xba02,	// (0x0001b187) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xba02,	// (0x0001b187) popup_fep_china_hwr2_fs_control_window

0x172f,	// (0x00010eb4) sctrl_sk_top_pane_g2

0x0001,

0xfcfa,	// (0x0001f47f) sctrl_sk_top_pane_g

0xe7e3,	// (0x0001df68) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7e3,	// (0x0001df68) aid_fep_china_hwr2_fs_cell

0xe7f7,	// (0x0001df7c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7f7,	// (0x0001df7c) bg_popup_fep_shadow_pane_cp4

0xe80e,	// (0x0001df93) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe80e,	// (0x0001df93) bg_popup_fep_shadow_pane_cp5

0xe820,	// (0x0001dfa5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe820,	// (0x0001dfa5) popup_fep_china_hwr2_fs_control_bar_grid

0xe834,	// (0x0001dfb9) popup_fep_china_hwr2_fs_control_funtion_grid

0x90e8,	// (0x0001886d) aid_fep_china_hwr2_fs_candi_cell

0x24bb,	// (0x00011c40) bg_popup_fep_shadow_pane_cp6

0x90f2,	// (0x00018877) popup_fep_china_hwr2_fs_candidate_grid

0xe83c,	// (0x0001dfc1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe83c,	// (0x0001dfc1) cell_fep_china_hwr2_fs_funtion_grid

0x7641,	// (0x00016dc6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9114,	// (0x00018899) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9114,	// (0x00018899) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9122,	// (0x000188a7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9122,	// (0x000188a7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd15,	// (0x0001f49a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd15,	// (0x0001f49a) cell_fep_china_hwr2_fs_funtion_grid_g

0xe854,	// (0x0001dfd9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe854,	// (0x0001dfd9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe869,	// (0x0001dfee) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe869,	// (0x0001dfee) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1a,	// (0x0001f49f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1a,	// (0x0001f49f) cell_fep_china_hwr2_fs_funtion_grid_t

0x9169,	// (0x000188ee) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9171,	// (0x000188f6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9179,	// (0x000188fe) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1f,	// (0x0001f4a4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9181,	// (0x00018906) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9181,	// (0x00018906) cell_fep_china_hwr2_fs_candidate_grid

0x919a,	// (0x0001891f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x91a2,	// (0x00018927) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7641,	// (0x00016dc6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7641,	// (0x00016dc6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb33,	// (0x0001f2b8) cell_fep_china_hwr2_fs_candidate_grid_g

0x91aa,	// (0x0001892f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x46a0,	// (0x00013e25) clock_nsta_pane_cp_24_ParamLimits

0x46a0,	// (0x00013e25) clock_nsta_pane_cp_24

0x471e,	// (0x00013ea3) indicator_nsta_pane_cp_24_ParamLimits

0x471e,	// (0x00013ea3) indicator_nsta_pane_cp_24

0x58d5,	// (0x0001505a) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001f046) heading_pane_g

0x640a,	// (0x00015b8f) grid_sct_catagory_button_pane

0x643a,	// (0x00015bbf) scroll_pane_cp5_ParamLimits

0x71e4,	// (0x00016969) button_value_adjust_pane_cp5_ParamLimits

0x71e4,	// (0x00016969) button_value_adjust_pane_cp5

0x72e0,	// (0x00016a65) form2_midp_time_pane_ParamLimits

0x91b8,	// (0x0001893d) cell_sct_catagory_button_pane_ParamLimits

0x91b8,	// (0x0001893d) cell_sct_catagory_button_pane

0x7606,	// (0x00016d8b) bg_button_pane_cp01_ParamLimits

0x7606,	// (0x00016d8b) bg_button_pane_cp01

0x7641,	// (0x00016dc6) cell_sct_catagory_button_pane_g1

0xbf61,	// (0x0001b6e6) popup_tb_extension_window

0xe885,	// (0x0001e00a) aid_size_cell_ext_ParamLimits

0xe885,	// (0x0001e00a) aid_size_cell_ext

0x2ba9,	// (0x0001232e) bg_tb_trans_pane_cp1_ParamLimits

0x2ba9,	// (0x0001232e) bg_tb_trans_pane_cp1

0xe8ab,	// (0x0001e030) grid_tb_ext_pane_ParamLimits

0xe8ab,	// (0x0001e030) grid_tb_ext_pane

0xe8e6,	// (0x0001e06b) cell_tb_ext_pane_ParamLimits

0xe8e6,	// (0x0001e06b) cell_tb_ext_pane

0xe90e,	// (0x0001e093) cell_tb_ext_pane_g1_ParamLimits

0xe90e,	// (0x0001e093) cell_tb_ext_pane_g1

0x924c,	// (0x000189d1) cell_tb_ext_pane_t1

0x2852,	// (0x00011fd7) list_highlight_pane_cp11_ParamLimits

0x2852,	// (0x00011fd7) list_highlight_pane_cp11

0xb734,	// (0x0001aeb9) popup_uni_indicator_window_ParamLimits

0xb734,	// (0x0001aeb9) popup_uni_indicator_window

0x33b3,	// (0x00012b38) bg_popup_sub_pane_cp14

0x9267,	// (0x000189ec) list_uniindi_pane

0x9273,	// (0x000189f8) uniindi_top_pane

0x2852,	// (0x00011fd7) bg_uniindi_top_pane

0x9292,	// (0x00018a17) uniindi_top_pane_g1

0x92a8,	// (0x00018a2d) uniindi_top_pane_g2

0x0003,

0xfd26,	// (0x0001f4ab) uniindi_top_pane_g

0x92d2,	// (0x00018a57) uniindi_top_pane_t1

0x92fc,	// (0x00018a81) list_single_uniindi_pane_ParamLimits

0x92fc,	// (0x00018a81) list_single_uniindi_pane

0x7641,	// (0x00016dc6) bg_uniindi_top_pane_g1

0x930f,	// (0x00018a94) list_single_uniindi_pane_g1

0x9322,	// (0x00018aa7) list_single_uniindi_pane_t1

0x0130,	// (0x0000f8b5) control_bg_pane

0x9347,	// (0x00018acc) bg_sctrl_sk_pane_cp1

0x9350,	// (0x00018ad5) bg_sctrl_sk_pane_cp2

0x9359,	// (0x00018ade) control_bg_pane_g1

0x9362,	// (0x00018ae7) control_bg_pane_g2

0x0001,

0xfd2f,	// (0x0001f4b4) control_bg_pane_g

0x702e,	// (0x000167b3) cell_indicator_nsta_pane_g1_ParamLimits

0xdda9,	// (0x0001d52e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa97,	// (0x0001f21c) cell_indicator_nsta_pane_g_ParamLimits

0x7368,	// (0x00016aed) form2_midp_time_pane_t1_ParamLimits

0x14ca,	// (0x00010c4f) main_idle_act4_pane_ParamLimits

0x14ca,	// (0x00010c4f) main_idle_act4_pane

0xbf61,	// (0x0001b6e6) popup_tb_extension_window_ParamLimits

0xe8cd,	// (0x0001e052) tb_ext_find_pane_ParamLimits

0xe8cd,	// (0x0001e052) tb_ext_find_pane

0x936b,	// (0x00018af0) ai_gene_pane_1_cp1

0x438d,	// (0x00013b12) ai_gene_pane_2_cp1

0x9373,	// (0x00018af8) list_single_idle_plugin_calendar_pane

0x937c,	// (0x00018b01) list_single_idle_plugin_notification_pane

0x9385,	// (0x00018b0a) list_single_idle_plugin_player_pane

0xe92b,	// (0x0001e0b0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe92b,	// (0x0001e0b0) list_single_idle_plugin_shortcut_pane

0xe953,	// (0x0001e0d8) main_idle_act4_pane_t1

0xe969,	// (0x0001e0ee) main_idle_act4_pane_t2

0x0001,

0xfd34,	// (0x0001f4b9) main_idle_act4_pane_t

0xe97f,	// (0x0001e104) middle_sk_idle_act4_pane_ParamLimits

0xe97f,	// (0x0001e104) middle_sk_idle_act4_pane

0xe99b,	// (0x0001e120) popup_clock_digital_analogue_window_cp2

0xe9c3,	// (0x0001e148) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9c3,	// (0x0001e148) shortcut_wheel_idle_act4_pane

0x7641,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g1

0x7641,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g2

0x7641,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g3

0x7641,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g4

0x7641,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g5

0x9418,	// (0x00018b9d) shortcut_wheel_idle_act4_pane_g6

0x9420,	// (0x00018ba5) shortcut_wheel_idle_act4_pane_g7

0x9428,	// (0x00018bad) shortcut_wheel_idle_act4_pane_g8

0x9430,	// (0x00018bb5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd39,	// (0x0001f4be) shortcut_wheel_idle_act4_pane_g

0xd3aa,	// (0x0001cb2f) middle_sk_idle_act4_pane_g1_ParamLimits

0xd3aa,	// (0x0001cb2f) middle_sk_idle_act4_pane_g1

0xea40,	// (0x0001e1c5) middle_sk_idle_act4_pane_g2_ParamLimits

0xea40,	// (0x0001e1c5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x0001f4e1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x0001f4e1) middle_sk_idle_act4_pane_g

0xea58,	// (0x0001e1dd) middle_sk_idle_act4_pane_t1_ParamLimits

0xea58,	// (0x0001e1dd) middle_sk_idle_act4_pane_t1

0xea87,	// (0x0001e20c) grid_ai_shortcut_pane_ParamLimits

0xea87,	// (0x0001e20c) grid_ai_shortcut_pane

0xeaa4,	// (0x0001e229) list_highlight_pane_cp16_ParamLimits

0xeaa4,	// (0x0001e229) list_highlight_pane_cp16

0xeab1,	// (0x0001e236) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeab1,	// (0x0001e236) list_single_idle_plugin_shortcut_pane_g1

0xeabd,	// (0x0001e242) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeabd,	// (0x0001e242) list_single_idle_plugin_shortcut_pane_g2

0xead9,	// (0x0001e25e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xead9,	// (0x0001e25e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd61,	// (0x0001f4e6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd61,	// (0x0001f4e6) list_single_idle_plugin_shortcut_pane_g

0xeaee,	// (0x0001e273) cell_ai_shortcut_pane_ParamLimits

0xeaee,	// (0x0001e273) cell_ai_shortcut_pane

0xeb04,	// (0x0001e289) cell_ai_shortcut_pane_g1_ParamLimits

0xeb04,	// (0x0001e289) cell_ai_shortcut_pane_g1

0x936b,	// (0x00018af0) ai_gene_pane_1_cp2

0x9560,	// (0x00018ce5) ai_gene_pane_2_cp2

0x9568,	// (0x00018ced) list_highlight_pane_cp15

0x9571,	// (0x00018cf6) list_single_idle_plugin_calendar_pane_g1

0x9568,	// (0x00018ced) list_highlight_pane_cp17

0x9579,	// (0x00018cfe) list_single_idle_plugin_calendar_pane_g1_copy1

0x9581,	// (0x00018d06) list_single_idle_plugin_player_pane_g1

0x6663,	// (0x00015de8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd68,	// (0x0001f4ed) list_single_idle_plugin_player_pane_g

0x9589,	// (0x00018d0e) list_single_idle_plugin_player_pane_t1

0x9597,	// (0x00018d1c) list_single_idle_plugin_player_pane_t2

0x95a5,	// (0x00018d2a) list_single_idle_plugin_player_pane_t3

0x95b3,	// (0x00018d38) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6d,	// (0x0001f4f2) list_single_idle_plugin_player_pane_t

0x95c1,	// (0x00018d46) wait_bar_pane_cp15

0x95c9,	// (0x00018d4e) grid_ai_notification_pane

0x6663,	// (0x00015de8) list_single_idle_plugin_notification_pane_g1

0xeb26,	// (0x0001e2ab) cell_ai_notification_pane_ParamLimits

0xeb26,	// (0x0001e2ab) cell_ai_notification_pane

0x95df,	// (0x00018d64) cell_ai_notification_pane_g1

0x95e7,	// (0x00018d6c) cell_ai_notification_pane_t1

0xeb33,	// (0x0001e2b8) tb_ext_find_button_pane

0xeb3b,	// (0x0001e2c0) tb_ext_find_pane_g1

0xeb43,	// (0x0001e2c8) tb_ext_find_pane_t1

0x3bb0,	// (0x00013335) tb_ext_find_button_pane_g1

0x9634,	// (0x00018db9) tb_ext_find_button_pane_g2

0x0001,

0xfd76,	// (0x0001f4fb) tb_ext_find_button_pane_g

0xe953,	// (0x0001e0d8) main_idle_act4_pane_t1_ParamLimits

0xe969,	// (0x0001e0ee) main_idle_act4_pane_t2_ParamLimits

0xfd34,	// (0x0001f4b9) main_idle_act4_pane_t_ParamLimits

0xe99b,	// (0x0001e120) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9b3,	// (0x0001e138) sat_plugin_idle_act4_pane_ParamLimits

0xe9b3,	// (0x0001e138) sat_plugin_idle_act4_pane

0xeb51,	// (0x0001e2d6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb51,	// (0x0001e2d6) sat_plugin_idle_act4_pane_t1

0xeb69,	// (0x0001e2ee) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb69,	// (0x0001e2ee) sat_plugin_idle_act4_pane_t2

0xeb81,	// (0x0001e306) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb81,	// (0x0001e306) sat_plugin_idle_act4_pane_t3

0xeb99,	// (0x0001e31e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb99,	// (0x0001e31e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x0001f500) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x0001f500) sat_plugin_idle_act4_pane_t

0x01f5,	// (0x0000f97a) popup_battery_window_ParamLimits

0x01f5,	// (0x0000f97a) popup_battery_window

0x2852,	// (0x00011fd7) bg_popup_sub_pane_cp25_ParamLimits

0x2852,	// (0x00011fd7) bg_popup_sub_pane_cp25

0x9689,	// (0x00018e0e) popup_battery_window_g1_ParamLimits

0x9689,	// (0x00018e0e) popup_battery_window_g1

0x9695,	// (0x00018e1a) popup_battery_window_t1_ParamLimits

0x9695,	// (0x00018e1a) popup_battery_window_t1

0x96a7,	// (0x00018e2c) popup_battery_window_t2_ParamLimits

0x96a7,	// (0x00018e2c) popup_battery_window_t2

0x0001,

0xfd84,	// (0x0001f509) popup_battery_window_t_ParamLimits

0xfd84,	// (0x0001f509) popup_battery_window_t

0xd231,	// (0x0001c9b6) midp_canvas_pane_ParamLimits

0xd28e,	// (0x0001ca13) midp_keypad_pane_ParamLimits

0xd28e,	// (0x0001ca13) midp_keypad_pane

0x4598,	// (0x00013d1d) main_midp_pane_ParamLimits

0x70a8,	// (0x0001682d) signal_pane_g2_cp_ParamLimits

0xebb1,	// (0x0001e336) aid_size_cell_midp_keypad_ParamLimits

0xebb1,	// (0x0001e336) aid_size_cell_midp_keypad

0xebcf,	// (0x0001e354) midp_keyp_game_grid_pane_ParamLimits

0xebcf,	// (0x0001e354) midp_keyp_game_grid_pane

0xebf6,	// (0x0001e37b) midp_keyp_rocker_pane_ParamLimits

0xebf6,	// (0x0001e37b) midp_keyp_rocker_pane

0xec47,	// (0x0001e3cc) midp_keyp_sk_left_pane_ParamLimits

0xec47,	// (0x0001e3cc) midp_keyp_sk_left_pane

0xec9b,	// (0x0001e420) midp_keyp_sk_right_pane_ParamLimits

0xec9b,	// (0x0001e420) midp_keyp_sk_right_pane

0x24bb,	// (0x00011c40) bg_button_pane_cp03

0xecef,	// (0x0001e474) midp_keyp_sk_left_pane_g1

0x24bb,	// (0x00011c40) bg_button_pane_cp04

0xecef,	// (0x0001e474) midp_keyp_sk_right_pane_g1

0x7641,	// (0x00016dc6) midp_keyp_rocker_pane_g1

0xecf8,	// (0x0001e47d) keyp_game_cell_pane_ParamLimits

0xecf8,	// (0x0001e47d) keyp_game_cell_pane

0x24bb,	// (0x00011c40) bg_button_pane_cp02

0xed1c,	// (0x0001e4a1) keyp_game_cell_pane_g1

0xb6cf,	// (0x0001ae54) popup_fep_vkb2_window_ParamLimits

0xb6cf,	// (0x0001ae54) popup_fep_vkb2_window

0xc15f,	// (0x0001b8e4) aid_size_cell_vkb2_ParamLimits

0xc15f,	// (0x0001b8e4) aid_size_cell_vkb2

0xc195,	// (0x0001b91a) popup_fep_vkb2_window_g1_ParamLimits

0xc195,	// (0x0001b91a) popup_fep_vkb2_window_g1

0xc1e5,	// (0x0001b96a) vkb2_area_bottom_pane_ParamLimits

0xc1e5,	// (0x0001b96a) vkb2_area_bottom_pane

0xc239,	// (0x0001b9be) vkb2_area_keypad_pane_ParamLimits

0xc239,	// (0x0001b9be) vkb2_area_keypad_pane

0xc281,	// (0x0001ba06) vkb2_area_top_pane_ParamLimits

0xc281,	// (0x0001ba06) vkb2_area_top_pane

0xc307,	// (0x0001ba8c) vkb2_top_entry_pane_ParamLimits

0xc307,	// (0x0001ba8c) vkb2_top_entry_pane

0xc334,	// (0x0001bab9) vkb2_top_grid_left_pane_ParamLimits

0xc334,	// (0x0001bab9) vkb2_top_grid_left_pane

0xc354,	// (0x0001bad9) vkb2_top_grid_right_pane_ParamLimits

0xc354,	// (0x0001bad9) vkb2_top_grid_right_pane

0x1bfe,	// (0x00011383) vkb2_cell_keypad_pane_ParamLimits

0x1bfe,	// (0x00011383) vkb2_cell_keypad_pane

0xc39a,	// (0x0001bb1f) vkb2_area_bottom_grid_pane_ParamLimits

0xc39a,	// (0x0001bb1f) vkb2_area_bottom_grid_pane

0xc3c4,	// (0x0001bb49) vkb2_area_bottom_pane_g1_ParamLimits

0xc3c4,	// (0x0001bb49) vkb2_area_bottom_pane_g1

0xc3ea,	// (0x0001bb6f) vkb2_area_bottom_pane_g2_ParamLimits

0xc3ea,	// (0x0001bb6f) vkb2_area_bottom_pane_g2

0xc41b,	// (0x0001bba0) vkb2_area_bottom_pane_g3_ParamLimits

0xc41b,	// (0x0001bba0) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x0001f50e) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x0001f50e) vkb2_area_bottom_pane_g

0x1da8,	// (0x0001152d) vkb2_top_cell_left_pane_ParamLimits

0x1da8,	// (0x0001152d) vkb2_top_cell_left_pane

0xed32,	// (0x0001e4b7) vkb2_top_entry_pane_g1_ParamLimits

0xed32,	// (0x0001e4b7) vkb2_top_entry_pane_g1

0xed40,	// (0x0001e4c5) vkb2_top_entry_pane_t1_ParamLimits

0xed40,	// (0x0001e4c5) vkb2_top_entry_pane_t1

0x9858,	// (0x00018fdd) vkb2_top_entry_pane_t2_ParamLimits

0x9858,	// (0x00018fdd) vkb2_top_entry_pane_t2

0x988a,	// (0x0001900f) vkb2_top_entry_pane_t3_ParamLimits

0x988a,	// (0x0001900f) vkb2_top_entry_pane_t3

0x0002,

0xfd90,	// (0x0001f515) vkb2_top_entry_pane_t_ParamLimits

0xfd90,	// (0x0001f515) vkb2_top_entry_pane_t

0xc485,	// (0x0001bc0a) vkb2_top_grid_right_pane_g1_ParamLimits

0xc485,	// (0x0001bc0a) vkb2_top_grid_right_pane_g1

0x1e0b,	// (0x00011590) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e0b,	// (0x00011590) vkb2_top_grid_right_pane_g2

0x1e23,	// (0x000115a8) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e23,	// (0x000115a8) vkb2_top_grid_right_pane_g3

0xc49b,	// (0x0001bc20) vkb2_top_grid_right_pane_g4_ParamLimits

0xc49b,	// (0x0001bc20) vkb2_top_grid_right_pane_g4

0x0003,

0xfd97,	// (0x0001f51c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd97,	// (0x0001f51c) vkb2_top_grid_right_pane_g

0x1e51,	// (0x000115d6) vkb2_top_cell_left_pane_g1

0x1e68,	// (0x000115ed) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e68,	// (0x000115ed) vkb2_cell_keypad_pane_g1

0x98ae,	// (0x00019033) vkb2_cell_keypad_pane_t1_ParamLimits

0x98ae,	// (0x00019033) vkb2_cell_keypad_pane_t1

0x1e76,	// (0x000115fb) vkb2_cell_bottom_grid_pane_ParamLimits

0x1e76,	// (0x000115fb) vkb2_cell_bottom_grid_pane

0x1eaf,	// (0x00011634) vkb2_cell_bottom_grid_pane_g1

0xe9e4,	// (0x0001e169) aid_call2_pane_cp02

0xe9ec,	// (0x0001e171) aid_call_pane_cp02

0xe9f4,	// (0x0001e179) clock_digital_number_pane_cp10

0xe9fc,	// (0x0001e181) clock_digital_number_pane_cp11

0xea04,	// (0x0001e189) clock_digital_number_pane_cp12

0xea0c,	// (0x0001e191) clock_digital_number_pane_cp13

0xea14,	// (0x0001e199) clock_digital_separator_pane_cp10

0x3bb0,	// (0x00013335) popup_clock_digital_analogue_window_cp2_g1

0x3bb0,	// (0x00013335) popup_clock_digital_analogue_window_cp2_g2

0xea1c,	// (0x0001e1a1) popup_clock_digital_analogue_window_cp2_g3

0x3bb0,	// (0x00013335) popup_clock_digital_analogue_window_cp2_g4

0xea1c,	// (0x0001e1a1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4c,	// (0x0001f4d1) popup_clock_digital_analogue_window_cp2_g

0xea24,	// (0x0001e1a9) popup_clock_digital_analogue_window_cp2_t1

0xea32,	// (0x0001e1b7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd57,	// (0x0001f4dc) popup_clock_digital_analogue_window_cp2_t

0x7641,	// (0x00016dc6) clock_digital_number_pane_cp10_g1

0x7641,	// (0x00016dc6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001f2b8) clock_digital_number_pane_cp10_g

0x7641,	// (0x00016dc6) clock_digital_separator_pane_cp10_g1

0x7641,	// (0x00016dc6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001f2b8) clock_digital_separator_pane_cp10_g

0x92b4,	// (0x00018a39) uniindi_top_pane_g3

0x92c5,	// (0x00018a4a) uniindi_top_pane_g4

0x1c89,	// (0x0001140e) vkb2_row_keypad_pane_ParamLimits

0x1c89,	// (0x0001140e) vkb2_row_keypad_pane

0x1ecb,	// (0x00011650) vkb2_cell_t_keypad_pane_ParamLimits

0x1ecb,	// (0x00011650) vkb2_cell_t_keypad_pane

0x1edb,	// (0x00011660) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1edb,	// (0x00011660) vkb2_cell_t_keypad_pane_cp08

0x1eee,	// (0x00011673) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1eee,	// (0x00011673) vkb2_cell_t_keypad_pane_cp09

0x1f02,	// (0x00011687) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f02,	// (0x00011687) vkb2_cell_t_keypad_pane_cp01

0x1f13,	// (0x00011698) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f13,	// (0x00011698) vkb2_cell_t_keypad_pane_cp02

0x1f24,	// (0x000116a9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f24,	// (0x000116a9) vkb2_cell_t_keypad_pane_cp03

0x1f35,	// (0x000116ba) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f35,	// (0x000116ba) vkb2_cell_t_keypad_pane_cp04

0x1f46,	// (0x000116cb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f46,	// (0x000116cb) vkb2_cell_t_keypad_pane_cp05

0x1f57,	// (0x000116dc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f57,	// (0x000116dc) vkb2_cell_t_keypad_pane_cp06

0x1f68,	// (0x000116ed) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1f68,	// (0x000116ed) vkb2_cell_t_keypad_pane_cp07

0x1f79,	// (0x000116fe) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1f79,	// (0x000116fe) vkb2_cell_t_keypad_pane_cp10

0x172f,	// (0x00010eb4) vkb2_cell_t_keypad_pane_g1

0x98c5,	// (0x0001904a) vkb2_cell_t_keypad_pane_t1

0x0130,	// (0x0000f8b5) popup_grid_graphic2_window

0xed79,	// (0x0001e4fe) aid_size_cell_graphic2_ParamLimits

0xed79,	// (0x0001e4fe) aid_size_cell_graphic2

0xedb7,	// (0x0001e53c) bg_popup_window_pane_cp21_ParamLimits

0xedb7,	// (0x0001e53c) bg_popup_window_pane_cp21

0xedc5,	// (0x0001e54a) graphic2_pages_pane_ParamLimits

0xedc5,	// (0x0001e54a) graphic2_pages_pane

0xee1b,	// (0x0001e5a0) grid_graphic2_control_pane_ParamLimits

0xee1b,	// (0x0001e5a0) grid_graphic2_control_pane

0xee63,	// (0x0001e5e8) grid_graphic2_pane_ParamLimits

0xee63,	// (0x0001e5e8) grid_graphic2_pane

0xeeea,	// (0x0001e66f) cell_graphic2_pane

0x0130,	// (0x0000f8b5) main_comp_mode_pane

0x8ad1,	// (0x00018256) list_ai3_gene_pane_ParamLimits

0xe72b,	// (0x0001deb0) bg_popup_window_pane_cp19_ParamLimits

0x8f0a,	// (0x0001868f) bg_touch_area_indi_pane_ParamLimits

0x8f0a,	// (0x0001868f) bg_touch_area_indi_pane

0x8f20,	// (0x000186a5) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f20,	// (0x000186a5) bg_touch_area_indi_pane_cp01

0x8f36,	// (0x000186bb) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f36,	// (0x000186bb) bg_touch_area_indi_pane_cp02

0x8f4e,	// (0x000186d3) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f4e,	// (0x000186d3) bg_touch_area_indi_pane_cp03

0x8f68,	// (0x000186ed) popup_slider_window_g1_ParamLimits

0x8f84,	// (0x00018709) popup_slider_window_g2_ParamLimits

0x8fa0,	// (0x00018725) popup_slider_window_g3_ParamLimits

0xfce1,	// (0x0001f466) popup_slider_window_g_ParamLimits

0x8ffc,	// (0x00018781) popup_slider_window_t1_ParamLimits

0x9070,	// (0x000187f5) small_volume_slider_vertical_pane_ParamLimits

0xeeea,	// (0x0001e66f) cell_graphic2_pane_ParamLimits

0xef47,	// (0x0001e6cc) bg_button_pane_cp10_ParamLimits

0xef47,	// (0x0001e6cc) bg_button_pane_cp10

0xef5a,	// (0x0001e6df) bg_button_pane_cp11_ParamLimits

0xef5a,	// (0x0001e6df) bg_button_pane_cp11

0xef6d,	// (0x0001e6f2) graphic2_pages_pane_g1_ParamLimits

0xef6d,	// (0x0001e6f2) graphic2_pages_pane_g1

0xef88,	// (0x0001e70d) graphic2_pages_pane_g2_ParamLimits

0xef88,	// (0x0001e70d) graphic2_pages_pane_g2

0x0001,

0xfda5,	// (0x0001f52a) graphic2_pages_pane_g_ParamLimits

0xfda5,	// (0x0001f52a) graphic2_pages_pane_g

0xefa0,	// (0x0001e725) graphic2_pages_pane_t1_ParamLimits

0xefa0,	// (0x0001e725) graphic2_pages_pane_t1

0xefb8,	// (0x0001e73d) cell_graphic2_control_pane_ParamLimits

0xefb8,	// (0x0001e73d) cell_graphic2_control_pane

0xefea,	// (0x0001e76f) cell_graphic2_pane_g1_ParamLimits

0xefea,	// (0x0001e76f) cell_graphic2_pane_g1

0xd3b8,	// (0x0001cb3d) cell_graphic2_pane_g2_ParamLimits

0xd3b8,	// (0x0001cb3d) cell_graphic2_pane_g2

0xed25,	// (0x0001e4aa) cell_graphic2_pane_g3_ParamLimits

0xed25,	// (0x0001e4aa) cell_graphic2_pane_g3

0xd3c5,	// (0x0001cb4a) cell_graphic2_pane_g4_ParamLimits

0xd3c5,	// (0x0001cb4a) cell_graphic2_pane_g4

0xeff7,	// (0x0001e77c) cell_graphic2_pane_g5_ParamLimits

0xeff7,	// (0x0001e77c) cell_graphic2_pane_g5

0x0004,

0xfdaa,	// (0x0001f52f) cell_graphic2_pane_g_ParamLimits

0xfdaa,	// (0x0001f52f) cell_graphic2_pane_g

0xf017,	// (0x0001e79c) cell_graphic2_pane_t1_ParamLimits

0xf017,	// (0x0001e79c) cell_graphic2_pane_t1

0x58c9,	// (0x0001504e) grid_highlight_pane_cp11_ParamLimits

0x58c9,	// (0x0001504e) grid_highlight_pane_cp11

0x2852,	// (0x00011fd7) bg_button_pane_cp05

0xf04c,	// (0x0001e7d1) cell_graphic2_control_pane_g1

0x7641,	// (0x00016dc6) bg_touch_area_indi_pane_g1

0x9b95,	// (0x0001931a) aid_cmod_rocker_key_size

0x9b9f,	// (0x00019324) aid_cmode_itu_key_size

0x9ba9,	// (0x0001932e) main_cmode_video_pane

0x9bb3,	// (0x00019338) main_comp_mode_itu_pane

0x9bbf,	// (0x00019344) main_comp_mode_rocker_pane

0x9bcb,	// (0x00019350) cell_cmode_rocker_pane_ParamLimits

0x9bcb,	// (0x00019350) cell_cmode_rocker_pane

0x9bdd,	// (0x00019362) cell_cmode_itu_pane_ParamLimits

0x9bdd,	// (0x00019362) cell_cmode_itu_pane

0x33b3,	// (0x00012b38) bg_button_pane_cp06_ParamLimits

0x33b3,	// (0x00012b38) bg_button_pane_cp06

0x78bf,	// (0x00017044) cell_cmode_rocker_pane_g1_ParamLimits

0x78bf,	// (0x00017044) cell_cmode_rocker_pane_g1

0x9114,	// (0x00018899) cell_cmode_rocker_pane_g2_ParamLimits

0x9114,	// (0x00018899) cell_cmode_rocker_pane_g2

0x0001,

0xfdba,	// (0x0001f53f) cell_cmode_rocker_pane_g_ParamLimits

0xfdba,	// (0x0001f53f) cell_cmode_rocker_pane_g

0x24bb,	// (0x00011c40) bg_button_pane_cp07

0x9bf2,	// (0x00019377) cell_cmode_itu_pane_g1

0x9bfb,	// (0x00019380) cell_cmode_itu_pane_t1

0x9c09,	// (0x0001938e) cell_cmode_itu_pane_t2

0x0001,

0xfdbf,	// (0x0001f544) cell_cmode_itu_pane_t

0x9337,	// (0x00018abc) aid_touch_ctrl_left

0x933f,	// (0x00018ac4) aid_touch_ctrl_right

0x24bb,	// (0x00011c40) compa_mode_pane

0xf072,	// (0x0001e7f7) aid_cmod_rocker_key_size_cp

0xf07c,	// (0x0001e801) aid_cmode_itu_key_size_cp

0x9c2b,	// (0x000193b0) compa_mode_pane_g1

0x9c33,	// (0x000193b8) compa_mode_pane_g2

0x9c3b,	// (0x000193c0) compa_mode_pane_g3

0x0002,

0xfdc4,	// (0x0001f549) compa_mode_pane_g

0xf086,	// (0x0001e80b) main_comp_mode_itu_pane_cp

0xf08e,	// (0x0001e813) main_comp_mode_rocker_pane_cp

0xf096,	// (0x0001e81b) cell_cmode_itu_pane_cp_ParamLimits

0xf096,	// (0x0001e81b) cell_cmode_itu_pane_cp

0xf0ab,	// (0x0001e830) cell_cmode_rocker_pane_cp_ParamLimits

0xf0ab,	// (0x0001e830) cell_cmode_rocker_pane_cp

0x33b3,	// (0x00012b38) bg_button_pane_cp06_cp_ParamLimits

0x33b3,	// (0x00012b38) bg_button_pane_cp06_cp

0x78bf,	// (0x00017044) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78bf,	// (0x00017044) cell_cmode_rocker_pane_g1_cp

0x7641,	// (0x00016dc6) cell_cmode_rocker_pane_g2_cp

0x24bb,	// (0x00011c40) bg_button_pane_cp07_cp

0xf0bd,	// (0x0001e842) cell_cmode_itu_pane_g1_cp

0xf0c6,	// (0x0001e84b) cell_cmode_itu_pane_t1_cp

0xf0c6,	// (0x0001e84b) cell_cmode_itu_pane_t2_cp

0xdb7e,	// (0x0001d303) settings_code_pane_cp2

0x25af,	// (0x00011d34) bg_popup_window_pane_cp3_ParamLimits

0x2a2c,	// (0x000121b1) heading_pane_cp3_ParamLimits

0x2a38,	// (0x000121bd) listscroll_popup_graphic_pane_ParamLimits

0x14d8,	// (0x00010c5d) fep_hwr_aid_pane_ParamLimits

0x194f,	// (0x000110d4) aid_touch_sctrl_top_ParamLimits

0x196a,	// (0x000110ef) sctrl_sk_top_pane_g1_ParamLimits

0x172f,	// (0x00010eb4) sctrl_sk_top_pane_g2_ParamLimits

0xfcfa,	// (0x0001f47f) sctrl_sk_top_pane_g_ParamLimits

0x1977,	// (0x000110fc) sctrl_sk_top_pane_t1_ParamLimits

0x194f,	// (0x000110d4) aid_touch_sctrl_bottom_ParamLimits

0x1977,	// (0x000110fc) sctrl_sk_bottom_pane_t1_ParamLimits

0x9280,	// (0x00018a05) aid_area_touch_clock

0xc2c9,	// (0x0001ba4e) aid_vkb2_area_top_pane_cell_ParamLimits

0xc2c9,	// (0x0001ba4e) aid_vkb2_area_top_pane_cell

0xc374,	// (0x0001baf9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc374,	// (0x0001baf9) aid_vkb2_area_bottom_pane_cell

0x9810,	// (0x00018f95) popup_char_count_window

0x9c88,	// (0x0001940d) popup_char_count_window_g1

0x9c91,	// (0x00019416) popup_char_count_window_g2

0x9c9a,	// (0x0001941f) popup_char_count_window_g3

0x0002,

0xfdcb,	// (0x0001f550) popup_char_count_window_g

0x9ca3,	// (0x00019428) popup_char_count_window_t1

0x1a26,	// (0x000111ab) popup_fep_char_preview_window_ParamLimits

0x1a26,	// (0x000111ab) popup_fep_char_preview_window

0xc2e9,	// (0x0001ba6e) vkb2_top_candi_pane_ParamLimits

0xc2e9,	// (0x0001ba6e) vkb2_top_candi_pane

0xf0d4,	// (0x0001e859) cell_vkb2_top_candi_pane_ParamLimits

0xf0d4,	// (0x0001e859) cell_vkb2_top_candi_pane

0x1f8e,	// (0x00011713) bg_popup_fep_char_preview_window_ParamLimits

0x1f8e,	// (0x00011713) bg_popup_fep_char_preview_window

0x1f9c,	// (0x00011721) popup_fep_char_preview_window_t1_ParamLimits

0x1f9c,	// (0x00011721) popup_fep_char_preview_window_t1

0x9cfe,	// (0x00019483) bg_popup_fep_char_preview_window_g1

0x9d06,	// (0x0001948b) bg_popup_fep_char_preview_window_g2

0x9d0e,	// (0x00019493) bg_popup_fep_char_preview_window_g3

0x9d16,	// (0x0001949b) bg_popup_fep_char_preview_window_g4

0x9d1e,	// (0x000194a3) bg_popup_fep_char_preview_window_g5

0x1fd6,	// (0x0001175b) bg_popup_fep_char_preview_window_g6

0x9d26,	// (0x000194ab) bg_popup_fep_char_preview_window_g7

0x9d2e,	// (0x000194b3) bg_popup_fep_char_preview_window_g8

0x9d36,	// (0x000194bb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd2,	// (0x0001f557) bg_popup_fep_char_preview_window_g

0x172f,	// (0x00010eb4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x172f,	// (0x00010eb4) cell_vkb2_top_candi_pane_g1

0x173d,	// (0x00010ec2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x173d,	// (0x00010ec2) cell_vkb2_top_candi_pane_g2

0x9613,	// (0x00018d98) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9613,	// (0x00018d98) cell_vkb2_top_candi_pane_g3

0x1fde,	// (0x00011763) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1fde,	// (0x00011763) cell_vkb2_top_candi_pane_g4

0x7f2f,	// (0x000176b4) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7f2f,	// (0x000176b4) cell_vkb2_top_candi_pane_g5

0x1fff,	// (0x00011784) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1fff,	// (0x00011784) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde5,	// (0x0001f56a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde5,	// (0x0001f56a) cell_vkb2_top_candi_pane_g

0x200d,	// (0x00011792) cell_vkb2_top_candi_pane_t1

0x1338,	// (0x00010abd) aid_size_touch_slider_mark_ParamLimits

0x1338,	// (0x00010abd) aid_size_touch_slider_mark

0xee01,	// (0x0001e586) grid_graphic2_catg_pane_ParamLimits

0xee01,	// (0x0001e586) grid_graphic2_catg_pane

0xeebd,	// (0x0001e642) popup_grid_graphic2_window_t1_ParamLimits

0xeebd,	// (0x0001e642) popup_grid_graphic2_window_t1

0xeed3,	// (0x0001e658) popup_grid_graphic2_window_t2_ParamLimits

0xeed3,	// (0x0001e658) popup_grid_graphic2_window_t2

0x0001,

0xfda0,	// (0x0001f525) popup_grid_graphic2_window_t_ParamLimits

0xfda0,	// (0x0001f525) popup_grid_graphic2_window_t

0x2852,	// (0x00011fd7) bg_button_pane_cp05_ParamLimits

0xf04c,	// (0x0001e7d1) cell_graphic2_control_pane_g1_ParamLimits

0xf13a,	// (0x0001e8bf) cell_graphic2_catg_pane_ParamLimits

0xf13a,	// (0x0001e8bf) cell_graphic2_catg_pane

0x24bb,	// (0x00011c40) bg_button_pane_cp12

0xf14c,	// (0x0001e8d1) cell_graphic2_catg_pane_g1

0x924c,	// (0x000189d1) cell_tb_ext_pane_t1_ParamLimits

0x1dc8,	// (0x0001154d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1dc8,	// (0x0001154d) vkb2_top_cell_right_narrow_pane

0x1de0,	// (0x00011565) vkb2_top_cell_right_wide_pane_ParamLimits

0x1de0,	// (0x00011565) vkb2_top_cell_right_wide_pane

0x14ca,	// (0x00010c4f) bg_vkb2_func_pane_ParamLimits

0x14ca,	// (0x00010c4f) bg_vkb2_func_pane

0x1e51,	// (0x000115d6) vkb2_top_cell_left_pane_g1_ParamLimits

0x14ca,	// (0x00010c4f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x14ca,	// (0x00010c4f) bg_vkb2_fuc_pane_cp03

0x1eaf,	// (0x00011634) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4ae0,	// (0x00014265) bg_vkb2_func_pane_g1

0x4ae8,	// (0x0001426d) bg_vkb2_func_pane_g2

0x4af8,	// (0x0001427d) bg_vkb2_func_pane_g3

0x4af0,	// (0x00014275) bg_vkb2_func_pane_g4

0x4b00,	// (0x00014285) bg_vkb2_func_pane_g5

0x4b08,	// (0x0001428d) bg_vkb2_func_pane_g6

0x4b10,	// (0x00014295) bg_vkb2_func_pane_g7

0x4b18,	// (0x0001429d) bg_vkb2_func_pane_g8

0x4ad8,	// (0x0001425d) bg_vkb2_func_pane_g9

0x0008,

0xfdf2,	// (0x0001f577) bg_vkb2_func_pane_g

0x14ca,	// (0x00010c4f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x14ca,	// (0x00010c4f) bg_vkb2_fuc_pane_cp01

0x1e51,	// (0x000115d6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e51,	// (0x000115d6) vkb2_top_cell_right_wide_pane_g1

0x14ca,	// (0x00010c4f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x14ca,	// (0x00010c4f) bg_vkb2_fuc_pane_cp02

0x1eaf,	// (0x00011634) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1eaf,	// (0x00011634) vkb2_top_cell_right_narrow_pane_g1

0xe66b,	// (0x0001ddf0) aid_touch_area_decrease_ParamLimits

0xe66b,	// (0x0001ddf0) aid_touch_area_decrease

0xe69f,	// (0x0001de24) aid_touch_area_increase_ParamLimits

0xe69f,	// (0x0001de24) aid_touch_area_increase

0xe6c7,	// (0x0001de4c) aid_touch_area_mute_ParamLimits

0xe6c7,	// (0x0001de4c) aid_touch_area_mute

0xe6f7,	// (0x0001de7c) aid_touch_area_slider_ParamLimits

0xe6f7,	// (0x0001de7c) aid_touch_area_slider

0xe737,	// (0x0001debc) popup_slider_window_g4_ParamLimits

0xe737,	// (0x0001debc) popup_slider_window_g4

0xe75f,	// (0x0001dee4) popup_slider_window_g5_ParamLimits

0xe75f,	// (0x0001dee4) popup_slider_window_g5

0xe793,	// (0x0001df18) popup_slider_window_g6_ParamLimits

0xe793,	// (0x0001df18) popup_slider_window_g6

0x902a,	// (0x000187af) popup_slider_window_t2_ParamLimits

0x902a,	// (0x000187af) popup_slider_window_t2

0x0001,

0xfcee,	// (0x0001f473) popup_slider_window_t_ParamLimits

0xfcee,	// (0x0001f473) popup_slider_window_t

0xe7af,	// (0x0001df34) slider_pane_ParamLimits

0xe7af,	// (0x0001df34) slider_pane

0x9d59,	// (0x000194de) slider_pane_g1_ParamLimits

0x9d59,	// (0x000194de) slider_pane_g1

0x9d6d,	// (0x000194f2) slider_pane_g2_ParamLimits

0x9d6d,	// (0x000194f2) slider_pane_g2

0x9d83,	// (0x00019508) slider_pane_g3_ParamLimits

0x9d83,	// (0x00019508) slider_pane_g3

0x0003,

0xfe05,	// (0x0001f58a) slider_pane_g_ParamLimits

0xfe05,	// (0x0001f58a) slider_pane_g

0xbfa9,	// (0x0001b72e) popup_tb_float_extension_window_ParamLimits

0xbfa9,	// (0x0001b72e) popup_tb_float_extension_window

0x9daf,	// (0x00019534) aid_size_cell_tb_float_ext

0x24bb,	// (0x00011c40) bg_popup_sub_window_cp28

0x9dbb,	// (0x00019540) grid_tb_float_ext_pane

0x9dc5,	// (0x0001954a) cell_tb_float_ext_pane_ParamLimits

0x9dc5,	// (0x0001954a) cell_tb_float_ext_pane

0x9ddf,	// (0x00019564) cell_tb_float_ext_pane_g1

0x9de8,	// (0x0001956d) grid_highlight_pane_cp12

0xc0d2,	// (0x0001b857) cell_last_hwr_side_pane_ParamLimits

0xc0d2,	// (0x0001b857) cell_last_hwr_side_pane

0x7641,	// (0x00016dc6) cell_last_hwr_side_pane_g1

0x9df1,	// (0x00019576) cell_last_hwr_side_pane_g2

0x0001,

0xfe0e,	// (0x0001f593) cell_last_hwr_side_pane_g

0xc450,	// (0x0001bbd5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc450,	// (0x0001bbd5) vkb2_area_bottom_space_btn_pane

0x172f,	// (0x00010eb4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x98c5,	// (0x0001904a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x200d,	// (0x00011792) cell_vkb2_top_candi_pane_t1_ParamLimits

0x202c,	// (0x000117b1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x202c,	// (0x000117b1) vkb2_area_bottom_space_btn_pane_g1

0x2066,	// (0x000117eb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2066,	// (0x000117eb) vkb2_area_bottom_space_btn_pane_g2

0x209c,	// (0x00011821) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x209c,	// (0x00011821) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe13,	// (0x0001f598) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe13,	// (0x0001f598) vkb2_area_bottom_space_btn_pane_g

0x158d,	// (0x00010d12) cel_fep_hwr_func_pane_ParamLimits

0x158d,	// (0x00010d12) cel_fep_hwr_func_pane

0xc0a7,	// (0x0001b82c) cell_hwr_side_button_pane_ParamLimits

0xc0a7,	// (0x0001b82c) cell_hwr_side_button_pane

0x9280,	// (0x00018a05) aid_area_touch_clock_ParamLimits

0x2852,	// (0x00011fd7) bg_uniindi_top_pane_ParamLimits

0x9292,	// (0x00018a17) uniindi_top_pane_g1_ParamLimits

0x92a8,	// (0x00018a2d) uniindi_top_pane_g2_ParamLimits

0x92b4,	// (0x00018a39) uniindi_top_pane_g3_ParamLimits

0x92c5,	// (0x00018a4a) uniindi_top_pane_g4_ParamLimits

0xfd26,	// (0x0001f4ab) uniindi_top_pane_g_ParamLimits

0x92d2,	// (0x00018a57) uniindi_top_pane_t1_ParamLimits

0x2852,	// (0x00011fd7) bg_vkb2_func_pane_cp01_ParamLimits

0x2852,	// (0x00011fd7) bg_vkb2_func_pane_cp01

0x9dfa,	// (0x0001957f) cel_fep_hwr_func_pane_g1_ParamLimits

0x9dfa,	// (0x0001957f) cel_fep_hwr_func_pane_g1

0x2852,	// (0x00011fd7) bg_vkb2_func_pane_cp02_ParamLimits

0x2852,	// (0x00011fd7) bg_vkb2_func_pane_cp02

0x9dfa,	// (0x0001957f) cell_hwr_side_button_pane_g1_ParamLimits

0x9dfa,	// (0x0001957f) cell_hwr_side_button_pane_g1

0x492b,	// (0x000140b0) status_pane_g4_ParamLimits

0x492b,	// (0x000140b0) status_pane_g4

0x4945,	// (0x000140ca) status_pane_t1

0x737b,	// (0x00016b00) form2_midp_gauge_slider_cont_pane

0x7383,	// (0x00016b08) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdea8,	// (0x0001d62d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdeba,	// (0x0001d63f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae6,	// (0x0001f26b) form2_midp_gauge_slider_pane_t_ParamLimits

0x73b9,	// (0x00016b3e) form2_midp_slider_pane_ParamLimits

0x19e6,	// (0x0001116b) aid_size_cell_func_vkb2_ParamLimits

0x19e6,	// (0x0001116b) aid_size_cell_func_vkb2

0x9d9b,	// (0x00019520) slider_pane_g4_ParamLimits

0x9d9b,	// (0x00019520) slider_pane_g4

0xc4b1,	// (0x0001bc36) form2_midp_gauge_slider_pane_t2_cp01

0xc4bf,	// (0x0001bc44) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc4bf,	// (0x0001bc44) form2_midp_gauge_slider_pane_t3_cp01

0x2111,	// (0x00011896) form2_midp_slider_pane_cp01

0x24bb,	// (0x00011c40) navi_smil_pane

0x9e33,	// (0x000195b8) navi_smil_pane_g1

0x9e3b,	// (0x000195c0) navi_smil_pane_t1

0x9e08,	// (0x0001958d) form2_midp_slider_pane_g1

0x9e11,	// (0x00019596) form2_midp_slider_pane_g2

0x9e19,	// (0x0001959e) form2_midp_slider_pane_g3

0x9e08,	// (0x0001958d) form2_midp_slider_pane_g4

0xf155,	// (0x0001e8da) form2_midp_slider_pane_g5

0x0004,

0xfe1c,	// (0x0001f5a1) form2_midp_slider_pane_g

0x20d6,	// (0x0001185b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x20d6,	// (0x0001185b) vkb2_area_bottom_space_btn_pane_g4

0xd529,	// (0x0001ccae) lc0_navi_pane_ParamLimits

0xd529,	// (0x0001ccae) lc0_navi_pane

0xd593,	// (0x0001cd18) lc0_stat_indi_pane_ParamLimits

0xd593,	// (0x0001cd18) lc0_stat_indi_pane

0xd5a8,	// (0x0001cd2d) ls0_title_pane_ParamLimits

0xd5a8,	// (0x0001cd2d) ls0_title_pane

0x33b3,	// (0x00012b38) bg_popup_sub_pane_cp14_ParamLimits

0x9267,	// (0x000189ec) list_uniindi_pane_ParamLimits

0x9273,	// (0x000189f8) uniindi_top_pane_ParamLimits

0x930f,	// (0x00018a94) list_single_uniindi_pane_g1_ParamLimits

0x9322,	// (0x00018aa7) list_single_uniindi_pane_t1_ParamLimits

0xc4dc,	// (0x0001bc61) lc0_stat_clock_pane_ParamLimits

0xc4dc,	// (0x0001bc61) lc0_stat_clock_pane

0xf160,	// (0x0001e8e5) lc0_stat_indi_pane_g1_ParamLimits

0xf160,	// (0x0001e8e5) lc0_stat_indi_pane_g1

0xf16d,	// (0x0001e8f2) lc0_stat_indi_pane_g2_ParamLimits

0xf16d,	// (0x0001e8f2) lc0_stat_indi_pane_g2

0x0001,

0xfe27,	// (0x0001f5ac) lc0_stat_indi_pane_g_ParamLimits

0xfe27,	// (0x0001f5ac) lc0_stat_indi_pane_g

0xc4e9,	// (0x0001bc6e) lc0_uni_indicator_pane_ParamLimits

0xc4e9,	// (0x0001bc6e) lc0_uni_indicator_pane

0xf17a,	// (0x0001e8ff) ls0_title_pane_g1_ParamLimits

0xf17a,	// (0x0001e8ff) ls0_title_pane_g1

0xf18e,	// (0x0001e913) ls0_title_pane_t1_ParamLimits

0xf18e,	// (0x0001e913) ls0_title_pane_t1

0xc4f6,	// (0x0001bc7b) lc0_uni_indicator_pane_g1_ParamLimits

0xc4f6,	// (0x0001bc7b) lc0_uni_indicator_pane_g1

0x9ead,	// (0x00019632) lc0_stat_clock_pane_t1

0x0130,	// (0x0000f8b5) main_ai5_pane

0x9ebb,	// (0x00019640) ai5_sk_pane_ParamLimits

0x9ebb,	// (0x00019640) ai5_sk_pane

0xf1bc,	// (0x0001e941) cell_ai5_widget_pane_ParamLimits

0xf1bc,	// (0x0001e941) cell_ai5_widget_pane

0x9f7e,	// (0x00019703) aid_size_cell_widget_grid

0x9f94,	// (0x00019719) bg_ai5_widget_pane_ParamLimits

0x9f94,	// (0x00019719) bg_ai5_widget_pane

0xa008,	// (0x0001978d) cell_ai5_widget_pane_g2

0xa018,	// (0x0001979d) cell_ai5_widget_pane_g3

0xa02f,	// (0x000197b4) cell_ai5_widget_pane_g4

0xa03b,	// (0x000197c0) cell_ai5_widget_pane_g5

0xa047,	// (0x000197cc) cell_ai5_widget_pane_g6

0xa053,	// (0x000197d8) cell_ai5_widget_pane_g7

0xa09b,	// (0x00019820) cell_ai5_widget_pane_t1_ParamLimits

0xa09b,	// (0x00019820) cell_ai5_widget_pane_t1

0xa0b8,	// (0x0001983d) cell_ai5_widget_pane_t2_ParamLimits

0xa0b8,	// (0x0001983d) cell_ai5_widget_pane_t2

0xa0d0,	// (0x00019855) cell_ai5_widget_pane_t3_ParamLimits

0xa0d0,	// (0x00019855) cell_ai5_widget_pane_t3

0xa0e8,	// (0x0001986d) cell_ai5_widget_pane_t4_ParamLimits

0xa0e8,	// (0x0001986d) cell_ai5_widget_pane_t4

0xa105,	// (0x0001988a) cell_ai5_widget_pane_t5_ParamLimits

0xa105,	// (0x0001988a) cell_ai5_widget_pane_t5

0xa124,	// (0x000198a9) cell_ai5_widget_pane_t6_ParamLimits

0xa124,	// (0x000198a9) cell_ai5_widget_pane_t6

0xa136,	// (0x000198bb) cell_ai5_widget_pane_t7_ParamLimits

0xa136,	// (0x000198bb) cell_ai5_widget_pane_t7

0xa14f,	// (0x000198d4) cell_ai5_widget_pane_t8_ParamLimits

0xa14f,	// (0x000198d4) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0001f5c6) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0001f5c6) cell_ai5_widget_pane_t

0xa1a3,	// (0x00019928) grid_ai5_widget_pane

0x33b3,	// (0x00012b38) highlight_cell_ai5_widget_pane_ParamLimits

0x33b3,	// (0x00012b38) highlight_cell_ai5_widget_pane

0xf226,	// (0x0001e9ab) ai5_sk_left_pane

0xf230,	// (0x0001e9b5) ai5_sk_middle_pane

0xf23a,	// (0x0001e9bf) ai5_sk_right_pane

0xa1d8,	// (0x0001995d) bg_ai5_widget_pane_g1_ParamLimits

0xa1d8,	// (0x0001995d) bg_ai5_widget_pane_g1

0xa1e4,	// (0x00019969) bg_ai5_widget_pane_g2_ParamLimits

0xa1e4,	// (0x00019969) bg_ai5_widget_pane_g2

0xa1f0,	// (0x00019975) bg_ai5_widget_pane_g3_ParamLimits

0xa1f0,	// (0x00019975) bg_ai5_widget_pane_g3

0xa1fc,	// (0x00019981) bg_ai5_widget_pane_g4_ParamLimits

0xa1fc,	// (0x00019981) bg_ai5_widget_pane_g4

0xa208,	// (0x0001998d) bg_ai5_widget_pane_g5_ParamLimits

0xa208,	// (0x0001998d) bg_ai5_widget_pane_g5

0xa214,	// (0x00019999) bg_ai5_widget_pane_g6_ParamLimits

0xa214,	// (0x00019999) bg_ai5_widget_pane_g6

0xa220,	// (0x000199a5) bg_ai5_widget_pane_g7_ParamLimits

0xa220,	// (0x000199a5) bg_ai5_widget_pane_g7

0xa22c,	// (0x000199b1) bg_ai5_widget_pane_g8_ParamLimits

0xa22c,	// (0x000199b1) bg_ai5_widget_pane_g8

0xa238,	// (0x000199bd) bg_ai5_widget_pane_g9_ParamLimits

0xa238,	// (0x000199bd) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x0001f5db) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x0001f5db) bg_ai5_widget_pane_g

0xa26a,	// (0x000199ef) cell_shortcut_ai5_widget_pane_ParamLimits

0xa26a,	// (0x000199ef) cell_shortcut_ai5_widget_pane

0x4252,	// (0x000139d7) bg_cell_shortcut_ai5_widget_pane

0xa27b,	// (0x00019a00) cell_grid_ai5_widget_pane_g1

0x4252,	// (0x000139d7) highlight_cell_shortcut_ai5_widget_pane

0x4ae0,	// (0x00014265) ai5_sk_left_pane_g1

0xa284,	// (0x00019a09) ai5_sk_left_pane_g2

0xa28c,	// (0x00019a11) ai5_sk_left_pane_g3

0xa294,	// (0x00019a19) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x0001f5ee) ai5_sk_left_pane_g

0xa29c,	// (0x00019a21) ai5_sk_left_pane_t1

0x4ae8,	// (0x0001426d) ai5_sk_right_pane_g1

0xa2aa,	// (0x00019a2f) ai5_sk_right_pane_g2

0xa2b2,	// (0x00019a37) ai5_sk_right_pane_g3

0xa2ba,	// (0x00019a3f) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0001f5f7) ai5_sk_right_pane_g

0xa2c2,	// (0x00019a47) ai5_sk_right_pane_t1

0x4ae8,	// (0x0001426d) ai5_sk_middle_pane_g1

0x4ae0,	// (0x00014265) ai5_sk_middle_pane_g2

0x4b00,	// (0x00014285) ai5_sk_middle_pane_g3

0xa2b2,	// (0x00019a37) ai5_sk_middle_pane_g4

0xa28c,	// (0x00019a11) ai5_sk_middle_pane_g5

0xa2d0,	// (0x00019a55) ai5_sk_middle_pane_g6

0xf244,	// (0x0001e9c9) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x0001f600) ai5_sk_middle_pane_g

0xd415,	// (0x0001cb9a) aid_touch_area_size_lc0_ParamLimits

0xd415,	// (0x0001cb9a) aid_touch_area_size_lc0

0x175e,	// (0x00010ee3) cell_hwr_candidate_pane_t1_ParamLimits

0x4602,	// (0x00013d87) aid_touch_navi_pane

0xd6a1,	// (0x0001ce26) status_dt_navi_pane_ParamLimits

0xd6a1,	// (0x0001ce26) status_dt_navi_pane

0xd6b9,	// (0x0001ce3e) status_dt_sta_pane_ParamLimits

0xd6b9,	// (0x0001ce3e) status_dt_sta_pane

0xf24c,	// (0x0001e9d1) dt_sta_controll_pane

0xf259,	// (0x0001e9de) dt_sta_indi_pane

0xf266,	// (0x0001e9eb) dt_sta_title_pane

0x2852,	// (0x00011fd7) bg_dt_sta_indi_pane_ParamLimits

0x2852,	// (0x00011fd7) bg_dt_sta_indi_pane

0xf278,	// (0x0001e9fd) dt_sta_battery_pane

0xf280,	// (0x0001ea05) dt_sta_indi_pane_g1

0xa322,	// (0x00019aa7) dt_sta_indi_pane_g2

0xa32b,	// (0x00019ab0) dt_sta_indi_pane_g3

0x0002,

0xfe8a,	// (0x0001f60f) dt_sta_indi_pane_g

0xa334,	// (0x00019ab9) dt_sta_signal_pane

0x33b3,	// (0x00012b38) bg_dt_sta_title_pane_ParamLimits

0x33b3,	// (0x00012b38) bg_dt_sta_title_pane

0xa33d,	// (0x00019ac2) dt_sta_title_pane_g1

0xa345,	// (0x00019aca) dt_sta_title_pane_t1_ParamLimits

0xa345,	// (0x00019aca) dt_sta_title_pane_t1

0x24bb,	// (0x00011c40) bg_dt_sta_control_pane

0xf289,	// (0x0001ea0e) dt_sta_controll_pane_g1

0xa363,	// (0x00019ae8) bg_dt_sta_title_pane_g1

0xa36c,	// (0x00019af1) bg_dt_sta_title_pane_g2

0xa375,	// (0x00019afa) bg_dt_sta_title_pane_g3

0x0002,

0xfe91,	// (0x0001f616) bg_dt_sta_title_pane_g

0x7641,	// (0x00016dc6) bg_dt_sta_indi_pane_g1

0xa37e,	// (0x00019b03) dt_sta_signal_pane_g1

0xa386,	// (0x00019b0b) dt_sta_signal_pane_g2

0x0001,

0xfe98,	// (0x0001f61d) dt_sta_signal_pane_g

0xa38e,	// (0x00019b13) dt_sta_battery_pane_g1

0xa397,	// (0x00019b1c) dt_sta_battery_pane_t1

0x7641,	// (0x00016dc6) bg_dt_sta_control_pane_g1

0x3cc2,	// (0x00013447) fep_china_uni_eep_pane

0x3cca,	// (0x0001344f) fep_china_uni_entry_pane_ParamLimits

0x3cda,	// (0x0001345f) popup_fep_china_uni_window_g1_ParamLimits

0x3cea,	// (0x0001346f) popup_fep_china_uni_window_g2_ParamLimits

0x3cea,	// (0x0001346f) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001ee9d) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001ee9d) popup_fep_china_uni_window_g

0xa3a6,	// (0x00019b2b) fep_china_uni_eep_pane_g1

0xa3ae,	// (0x00019b33) fep_china_uni_eep_pane_t1

0x9e2a,	// (0x000195af) aid_touch_area_size_smil_player

0x4752,	// (0x00013ed7) lc0_clock_pane

0x4939,	// (0x000140be) status_pane_g5_ParamLimits

0x4939,	// (0x000140be) status_pane_g5

0xbb2b,	// (0x0001b2b0) popup_keymap_window

0x48f7,	// (0x0001407c) status_icon_pane

0xa018,	// (0x0001979d) cell_ai5_widget_pane_g3_ParamLimits

0xa02f,	// (0x000197b4) cell_ai5_widget_pane_g4_ParamLimits

0xa03b,	// (0x000197c0) cell_ai5_widget_pane_g5_ParamLimits

0xa05f,	// (0x000197e4) cell_ai5_widget_pane_g8_ParamLimits

0xa05f,	// (0x000197e4) cell_ai5_widget_pane_g8

0xa073,	// (0x000197f8) cell_ai5_widget_pane_g9_ParamLimits

0xa073,	// (0x000197f8) cell_ai5_widget_pane_g9

0xa087,	// (0x0001980c) cell_ai5_widget_pane_g10_ParamLimits

0xa087,	// (0x0001980c) cell_ai5_widget_pane_g10

0xa3bd,	// (0x00019b42) status_icon_pane_g1

0x24bb,	// (0x00011c40) bg_popup_sub_pane_cp13

0xa3c5,	// (0x00019b4a) popup_keymap_window_t1

0xd37b,	// (0x0001cb00) control_pane_g6_ParamLimits

0xd37b,	// (0x0001cb00) control_pane_g6

0xd388,	// (0x0001cb0d) control_pane_g7_ParamLimits

0xd388,	// (0x0001cb0d) control_pane_g7

0xd395,	// (0x0001cb1a) control_pane_g8_ParamLimits

0xd395,	// (0x0001cb1a) control_pane_g8

0xf24c,	// (0x0001e9d1) dt_sta_controll_pane_ParamLimits

0xf259,	// (0x0001e9de) dt_sta_indi_pane_ParamLimits

0xf266,	// (0x0001e9eb) dt_sta_title_pane_ParamLimits

0x2d70,	// (0x000124f5) aid_size_touch_scroll_bar_cale

0x0209,	// (0x0000f98e) popup_discreet_window_ParamLimits

0x0209,	// (0x0000f98e) popup_discreet_window

0xb715,	// (0x0001ae9a) popup_sk_window

0x5249,	// (0x000149ce) bg_popup_sub_pane_cp28_ParamLimits

0x5249,	// (0x000149ce) bg_popup_sub_pane_cp28

0xa3d3,	// (0x00019b58) popup_discreet_window_g1_ParamLimits

0xa3d3,	// (0x00019b58) popup_discreet_window_g1

0xa3f3,	// (0x00019b78) popup_discreet_window_t1_ParamLimits

0xa3f3,	// (0x00019b78) popup_discreet_window_t1

0xa411,	// (0x00019b96) popup_discreet_window_t2_ParamLimits

0xa411,	// (0x00019b96) popup_discreet_window_t2

0x0002,

0xfe9d,	// (0x0001f622) popup_discreet_window_t_ParamLimits

0xfe9d,	// (0x0001f622) popup_discreet_window_t

0x2148,	// (0x000118cd) popup_sk_window_g1

0x2152,	// (0x000118d7) popup_sk_window_g2

0x0001,

0xfea4,	// (0x0001f629) popup_sk_window_g

0x215c,	// (0x000118e1) popup_sk_window_t1

0x216a,	// (0x000118ef) popup_sk_window_t1_copy1

0xa008,	// (0x0001978d) cell_ai5_widget_pane_g2_ParamLimits

0xa161,	// (0x000198e6) cell_ai5_widget_pane_t9_ParamLimits

0xa161,	// (0x000198e6) cell_ai5_widget_pane_t9

0x24bb,	// (0x00011c40) main_fep_fshwr2_pane

0xc51d,	// (0x0001bca2) aid_fshwr2_btn_pane

0xc52e,	// (0x0001bcb3) aid_fshwr2_syb_pane

0xc53f,	// (0x0001bcc4) aid_fshwr2_txt_pane

0xc54b,	// (0x0001bcd0) fshwr2_func_candi_pane

0xc56a,	// (0x0001bcef) fshwr2_hwr_syb_pane

0xc585,	// (0x0001bd0a) fshwr2_icf_pane

0x0130,	// (0x0000f8b5) fshwr2_icf_bg_pane

0x21ea,	// (0x0001196f) fshwr2_icf_pane_t1_ParamLimits

0x21ea,	// (0x0001196f) fshwr2_icf_pane_t1

0x3bb0,	// (0x00013335) fshwr2_func_candi_pane_g1

0xf292,	// (0x0001ea17) fshwr2_func_candi_row_pane_ParamLimits

0xf292,	// (0x0001ea17) fshwr2_func_candi_row_pane

0xc5b1,	// (0x0001bd36) cell_fshwr2_syb_pane_ParamLimits

0xc5b1,	// (0x0001bd36) cell_fshwr2_syb_pane

0x172f,	// (0x00010eb4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x172f,	// (0x00010eb4) fshwr2_hwr_syb_pane_g1

0x0130,	// (0x0000f8b5) bg_popup_call_pane_cp01

0xc5c7,	// (0x0001bd4c) fshwr2_func_candi_cell_pane_ParamLimits

0xc5c7,	// (0x0001bd4c) fshwr2_func_candi_cell_pane

0xf2b5,	// (0x0001ea3a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf2b5,	// (0x0001ea3a) fshwr2_func_candi_cell_bg_pane

0xc612,	// (0x0001bd97) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc612,	// (0x0001bd97) fshwr2_func_candi_cell_pane_g1

0xc649,	// (0x0001bdce) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc649,	// (0x0001bdce) fshwr2_func_candi_cell_pane_t1

0x0130,	// (0x0000f8b5) bg_button_pane_cp08

0xa47f,	// (0x00019c04) cell_fshwr2_syb_bg_pane

0xc664,	// (0x0001bde9) cell_fshwr2_syb_bg_pane_g1

0xc66c,	// (0x0001bdf1) cell_fshwr2_syb_bg_pane_t1

0x33b3,	// (0x00012b38) main_tmo_pane

0xd99c,	// (0x0001d121) uni_indicator_pane_g1_ParamLimits

0xd9b2,	// (0x0001d137) uni_indicator_pane_g2_ParamLimits

0xd9c8,	// (0x0001d14d) uni_indicator_pane_g3_ParamLimits

0x5da4,	// (0x00015529) uni_indicator_pane_g4_ParamLimits

0x5da4,	// (0x00015529) uni_indicator_pane_g4

0x5db8,	// (0x0001553d) uni_indicator_pane_g5_ParamLimits

0x5db8,	// (0x0001553d) uni_indicator_pane_g5

0x5db8,	// (0x0001553d) uni_indicator_pane_g6_ParamLimits

0x5db8,	// (0x0001553d) uni_indicator_pane_g6

0xf917,	// (0x0001f09c) uni_indicator_pane_g_ParamLimits

0xe647,	// (0x0001ddcc) popup_tmo_note_window_ParamLimits

0xe647,	// (0x0001ddcc) popup_tmo_note_window

0x19c8,	// (0x0001114d) fshwr2_bg_pane

0xc63a,	// (0x0001bdbf) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc63a,	// (0x0001bdbf) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea9,	// (0x0001f62e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea9,	// (0x0001f62e) fshwr2_func_candi_cell_pane_g

0x1717,	// (0x00010e9c) bg_popup_window_pane_cp01

0x22b3,	// (0x00011a38) bg_popup_window_pane_g1_cp01

0xa487,	// (0x00019c0c) bg_popup_window_pane_cp22_ParamLimits

0xa487,	// (0x00019c0c) bg_popup_window_pane_cp22

0xa495,	// (0x00019c1a) listscroll_tmo_link_pane_ParamLimits

0xa495,	// (0x00019c1a) listscroll_tmo_link_pane

0xa4d5,	// (0x00019c5a) popup_tmo_note_window_g1_ParamLimits

0xa4d5,	// (0x00019c5a) popup_tmo_note_window_g1

0xa4e2,	// (0x00019c67) tmo_note_info_pane_ParamLimits

0xa4e2,	// (0x00019c67) tmo_note_info_pane

0xf2c1,	// (0x0001ea46) list_tmo_note_info_pane_g1_ParamLimits

0xf2c1,	// (0x0001ea46) list_tmo_note_info_pane_g1

0xa513,	// (0x00019c98) list_tmo_note_info_pane_g2_ParamLimits

0xa513,	// (0x00019c98) list_tmo_note_info_pane_g2

0x0001,

0xfeae,	// (0x0001f633) list_tmo_note_info_pane_g_ParamLimits

0xfeae,	// (0x0001f633) list_tmo_note_info_pane_g

0xa52f,	// (0x00019cb4) list_tmo_note_info_text_pane_ParamLimits

0xa52f,	// (0x00019cb4) list_tmo_note_info_text_pane

0xa5b0,	// (0x00019d35) list_tmo_link_pane

0xa5bd,	// (0x00019d42) scroll_pane_cp20

0xa5ca,	// (0x00019d4f) list_single_tmo_link_pane_ParamLimits

0xa5ca,	// (0x00019d4f) list_single_tmo_link_pane

0xa5da,	// (0x00019d5f) list_single_tmo_link_pane_t1

0xa5e8,	// (0x00019d6d) list_tmo_note_info_text_pane_t1_ParamLimits

0xa5e8,	// (0x00019d6d) list_tmo_note_info_text_pane_t1

0xcf8e,	// (0x0001c713) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcf8e,	// (0x0001c713) aid_size_touch_scroll_bar_cp01

0xcebe,	// (0x0001c643) aid_size_touch_slider_marker

0xb705,	// (0x0001ae8a) popup_settings_window_ParamLimits

0xb705,	// (0x0001ae8a) popup_settings_window

0x45b2,	// (0x00013d37) popup_candi_list_indi_window

0x4602,	// (0x00013d87) aid_touch_navi_pane_ParamLimits

0x1923,	// (0x000110a8) rs_clock_indi_pane

0x192c,	// (0x000110b1) sctrl_sk_bottom_pane_ParamLimits

0x193d,	// (0x000110c2) sctrl_sk_top_pane_ParamLimits

0x1a40,	// (0x000111c5) popup_fep_tooltip_window

0x9f7e,	// (0x00019703) aid_size_cell_widget_grid_ParamLimits

0x9ff3,	// (0x00019778) cell_ai5_widget_pane_g1_ParamLimits

0x9ff3,	// (0x00019778) cell_ai5_widget_pane_g1

0xa047,	// (0x000197cc) cell_ai5_widget_pane_g6_ParamLimits

0xa053,	// (0x000197d8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2c,	// (0x0001f5b1) cell_ai5_widget_pane_g_ParamLimits

0xfe2c,	// (0x0001f5b1) cell_ai5_widget_pane_g

0xa185,	// (0x0001990a) cell_ai5_widget_pane_t10_ParamLimits

0xa185,	// (0x0001990a) cell_ai5_widget_pane_t10

0xa1a3,	// (0x00019928) grid_ai5_widget_pane_ParamLimits

0xa244,	// (0x000199c9) cell_contacts_ai5_widget_pane_ParamLimits

0xa244,	// (0x000199c9) cell_contacts_ai5_widget_pane

0xa426,	// (0x00019bab) popup_discreet_window_t3_ParamLimits

0xa426,	// (0x00019bab) popup_discreet_window_t3

0xc59d,	// (0x0001bd22) popup_fshwr2_char_preview_window_ParamLimits

0xc59d,	// (0x0001bd22) popup_fshwr2_char_preview_window

0xf2d8,	// (0x0001ea5d) tmo_note_info_pane_t1

0xf2ed,	// (0x0001ea72) tmo_note_info_pane_t2

0xf304,	// (0x0001ea89) tmo_note_info_pane_t3

0xa58c,	// (0x00019d11) tmo_note_info_pane_t4

0xa59e,	// (0x00019d23) tmo_note_info_pane_t5

0x0004,

0xfeb3,	// (0x0001f638) tmo_note_info_pane_t

0xa5b0,	// (0x00019d35) list_tmo_link_pane_ParamLimits

0xa5bd,	// (0x00019d42) scroll_pane_cp20_ParamLimits

0x0130,	// (0x0000f8b5) bg_popup_fep_char_preview_window_cp01

0xa601,	// (0x00019d86) popup_fshwr2_char_preview_window_t1

0xa60f,	// (0x00019d94) popup_candi_list_indi_window_g1

0xa618,	// (0x00019d9d) bg_cell_contacts_ai5_widget_pane

0xa624,	// (0x00019da9) cell_contacts_ai5_widget_pane_g1

0x7e84,	// (0x00017609) cell_contacts_ai5_widget_pane_g2

0xa639,	// (0x00019dbe) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebe,	// (0x0001f643) cell_contacts_ai5_widget_pane_g

0xa645,	// (0x00019dca) cell_contacts_ai5_widget_pane_t1

0x33b3,	// (0x00012b38) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf37e,	// (0x0001eb03) settings_container_pane

0x4252,	// (0x000139d7) listscroll_set_pane_copy1

0x6a22,	// (0x000161a7) scroll_pane_cp121_copy1

0xa6c8,	// (0x00019e4d) set_content_pane_copy1

0xf38a,	// (0x0001eb0f) aid_height_set_list_copy1_ParamLimits

0xf38a,	// (0x0001eb0f) aid_height_set_list_copy1

0x5fd8,	// (0x0001575d) aid_size_parent_copy1_ParamLimits

0x5fd8,	// (0x0001575d) aid_size_parent_copy1

0xf396,	// (0x0001eb1b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf396,	// (0x0001eb1b) button_value_adjust_pane_cp6_copy1

0x4598,	// (0x00013d1d) list_highlight_pane_cp2_copy1_ParamLimits

0x4598,	// (0x00013d1d) list_highlight_pane_cp2_copy1

0xf3aa,	// (0x0001eb2f) list_set_pane_copy1_ParamLimits

0xf3aa,	// (0x0001eb2f) list_set_pane_copy1

0xf319,	// (0x0001ea9e) main_pane_set_t1_copy1_ParamLimits

0xf319,	// (0x0001ea9e) main_pane_set_t1_copy1

0xf353,	// (0x0001ead8) main_pane_set_t2_copy1_ParamLimits

0xf353,	// (0x0001ead8) main_pane_set_t2_copy1

0xf457,	// (0x0001ebdc) main_pane_set_t3_copy1

0xf465,	// (0x0001ebea) main_pane_set_t4_copy1

0xf372,	// (0x0001eaf7) set_content_pane_g1_copy1_ParamLimits

0xf372,	// (0x0001eaf7) set_content_pane_g1_copy1

0xf473,	// (0x0001ebf8) setting_code_pane_copy1

0xa7c1,	// (0x00019f46) setting_slider_graphic_pane_copy1

0xa7c1,	// (0x00019f46) setting_slider_pane_copy1

0xa7c1,	// (0x00019f46) setting_text_pane_copy1

0xa7c1,	// (0x00019f46) setting_volume_pane_copy1

0xf473,	// (0x0001ebf8) settings_code_pane_cp2_copy1

0xf47b,	// (0x0001ec00) settings_code_pane_cp_copy1_ParamLimits

0xf47b,	// (0x0001ec00) settings_code_pane_cp_copy1

0xc67b,	// (0x0001be00) volume_set_pane_copy1

0xf48f,	// (0x0001ec14) volume_set_pane_g10_copy1

0xf497,	// (0x0001ec1c) volume_set_pane_g1_copy1

0xf49f,	// (0x0001ec24) volume_set_pane_g2_copy1

0xf4a7,	// (0x0001ec2c) volume_set_pane_g3_copy1

0xf4af,	// (0x0001ec34) volume_set_pane_g4_copy1

0xf4b7,	// (0x0001ec3c) volume_set_pane_g5_copy1

0xf4bf,	// (0x0001ec44) volume_set_pane_g6_copy1

0xf4c7,	// (0x0001ec4c) volume_set_pane_g7_copy1

0xf4cf,	// (0x0001ec54) volume_set_pane_g8_copy1

0xf4d7,	// (0x0001ec5c) volume_set_pane_g9_copy1

0x25af,	// (0x00011d34) bg_set_opt_pane_cp_copy1_ParamLimits

0x25af,	// (0x00011d34) bg_set_opt_pane_cp_copy1

0x22c4,	// (0x00011a49) setting_slider_pane_t1_copy1_ParamLimits

0x22c4,	// (0x00011a49) setting_slider_pane_t1_copy1

0xc683,	// (0x0001be08) setting_slider_pane_t2_copy1_ParamLimits

0xc683,	// (0x0001be08) setting_slider_pane_t2_copy1

0xc69d,	// (0x0001be22) setting_slider_pane_t3_copy1_ParamLimits

0xc69d,	// (0x0001be22) setting_slider_pane_t3_copy1

0xc6b5,	// (0x0001be3a) slider_set_pane_copy1_ParamLimits

0xc6b5,	// (0x0001be3a) slider_set_pane_copy1

0x34dc,	// (0x00012c61) set_opt_bg_pane_g1_copy2

0x34e4,	// (0x00012c69) set_opt_bg_pane_g2_copy2

0xa82d,	// (0x00019fb2) set_opt_bg_pane_g3_copy2

0x34f4,	// (0x00012c79) set_opt_bg_pane_g4_copy2

0x34fc,	// (0x00012c81) set_opt_bg_pane_g5_copy2

0x3504,	// (0x00012c89) set_opt_bg_pane_g6_copy2

0xf4df,	// (0x0001ec64) set_opt_bg_pane_g7_copy2

0xa83f,	// (0x00019fc4) set_opt_bg_pane_g8_copy2

0xa849,	// (0x00019fce) set_opt_bg_pane_g9_copy2

0x232a,	// (0x00011aaf) aid_size_touch_slider_mark_copy1_ParamLimits

0x232a,	// (0x00011aaf) aid_size_touch_slider_mark_copy1

0xa853,	// (0x00019fd8) slider_set_pane_g1_copy1

0x233e,	// (0x00011ac3) slider_set_pane_g2_copy1

0x1358,	// (0x00010add) slider_set_pane_g3_copy1_ParamLimits

0x1358,	// (0x00010add) slider_set_pane_g3_copy1

0x136c,	// (0x00010af1) slider_set_pane_g4_copy1_ParamLimits

0x136c,	// (0x00010af1) slider_set_pane_g4_copy1

0x1384,	// (0x00010b09) slider_set_pane_g5_copy1_ParamLimits

0x1384,	// (0x00010b09) slider_set_pane_g5_copy1

0x1358,	// (0x00010add) slider_set_pane_g6_copy1_ParamLimits

0x1358,	// (0x00010add) slider_set_pane_g6_copy1

0xc6cb,	// (0x0001be50) slider_set_pane_g7_copy1_ParamLimits

0xc6cb,	// (0x0001be50) slider_set_pane_g7_copy1

0x24cf,	// (0x00011c54) bg_set_opt_pane_cp2_copy1

0xa85c,	// (0x00019fe1) setting_slider_graphic_pane_g1_copy1

0xf4e7,	// (0x0001ec6c) setting_slider_graphic_pane_t1_copy1

0xf4f7,	// (0x0001ec7c) setting_slider_graphic_pane_t2_copy1

0xf507,	// (0x0001ec8c) slider_set_pane_cp_copy1

0xa895,	// (0x0001a01a) input_focus_pane_cp1_copy1

0xa89e,	// (0x0001a023) list_set_text_pane_copy1

0xa8a6,	// (0x0001a02b) setting_text_pane_g1_copy1

0x2608,	// (0x00011d8d) set_text_pane_t1_copy1

0xa895,	// (0x0001a01a) input_focus_pane_cp2_copy1

0xa8a6,	// (0x0001a02b) setting_code_pane_g1_copy1

0xf50f,	// (0x0001ec94) setting_code_pane_t1_copy1

0x684c,	// (0x00015fd1) list_set_graphic_pane_copy1

0x24cf,	// (0x00011c54) bg_set_opt_pane_cp4_copy1

0xd1f6,	// (0x0001c97b) list_set_graphic_pane_g1_copy1_ParamLimits

0xd1f6,	// (0x0001c97b) list_set_graphic_pane_g1_copy1

0xf51d,	// (0x0001eca2) list_set_graphic_pane_g2_copy1

0xd20e,	// (0x0001c993) list_set_graphic_pane_t1_copy1_ParamLimits

0xd20e,	// (0x0001c993) list_set_graphic_pane_t1_copy1

0x7641,	// (0x00016dc6) rs_clock_indi_pane_g1

0xa8d7,	// (0x0001a05c) rs_clock_indi_pane_t1

0xa8e5,	// (0x0001a06a) rs_indi_pane

0xa8ed,	// (0x0001a072) rs_indi_pane_g1

0xa8f6,	// (0x0001a07b) rs_indi_pane_g2

0xa8ff,	// (0x0001a084) rs_indi_pane_g3

0x0002,

0xfec5,	// (0x0001f64a) rs_indi_pane_g

0x4252,	// (0x000139d7) bg_popup_preview_window_pane_cp03

0xa908,	// (0x0001a08d) popup_fep_tooltip_window_t1

0x84b9,	// (0x00017c3e) popup_note2_window_g2_ParamLimits

0x84b9,	// (0x00017c3e) popup_note2_window_g2

0x0001,

0xfc5e,	// (0x0001f3e3) popup_note2_window_g_ParamLimits

0xfc5e,	// (0x0001f3e3) popup_note2_window_g

0x8a97,	// (0x0001821c) bg_popup_sub_pane_cp11_ParamLimits

0x8aa4,	// (0x00018229) cell_ai3_links_pane_g1_ParamLimits

0x8abb,	// (0x00018240) cell_ai3_links_pane_t1

0x2608,	// (0x00011d8d) set_text_pane_t1_copy1_ParamLimits

0x4163,	// (0x000138e8) cell_graphic_popup_pane_cp2_ParamLimits

0x4163,	// (0x000138e8) cell_graphic_popup_pane_cp2

0xa916,	// (0x0001a09b) cell_graphic_popup_pane_g1_cp2

0x2b83,	// (0x00012308) cell_graphic_popup_pane_g2_cp2

0xa91e,	// (0x0001a0a3) cell_graphic_popup_pane_g3_cp2

0xa926,	// (0x0001a0ab) cell_graphic_popup_pane_t2_cp2

0x2b94,	// (0x00012319) grid_highlight_pane_cp3_cp2

0x38cd,	// (0x00013052) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x33b3,	// (0x00012b38) main_tmo_pane_ParamLimits

0xe63b,	// (0x0001ddc0) popup_tmo_big_image_note_window

0x9fe2,	// (0x00019767) cell_ai5_widget_list_pane

0x9fea,	// (0x0001976f) cell_ai5_widget_lrg_icon_pane

0xf2d8,	// (0x0001ea5d) tmo_note_info_pane_t1_ParamLimits

0xf2ed,	// (0x0001ea72) tmo_note_info_pane_t2_ParamLimits

0xf304,	// (0x0001ea89) tmo_note_info_pane_t3_ParamLimits

0xa58c,	// (0x00019d11) tmo_note_info_pane_t4_ParamLimits

0xa59e,	// (0x00019d23) tmo_note_info_pane_t5_ParamLimits

0xfeb3,	// (0x0001f638) tmo_note_info_pane_t_ParamLimits

0xf37e,	// (0x0001eb03) settings_container_pane_ParamLimits

0xa88d,	// (0x0001a012) indicator_popup_pane_cp5

0xa88d,	// (0x0001a012) indicator_popup_pane_cp6

0x684c,	// (0x00015fd1) list_set_graphic_pane_copy1_ParamLimits

0x24bb,	// (0x00011c40) bg_popup_window_pane_cp23

0xa934,	// (0x0001a0b9) popup_tmo_big_image_note_window_g1

0xa93e,	// (0x0001a0c3) popup_tmo_big_image_note_window_t1

0xa94e,	// (0x0001a0d3) popup_tmo_big_image_note_window_t2

0xa95e,	// (0x0001a0e3) popup_tmo_big_image_note_window_t3

0x0002,

0xfecc,	// (0x0001f651) popup_tmo_big_image_note_window_t

0x7641,	// (0x00016dc6) cell_ai5_widget_lrg_icon_pane_g1

0xa96e,	// (0x0001a0f3) cell_ai5_widget_lrg_icon_pane_t1

0xa97c,	// (0x0001a101) cell_ai5_widget_list_row_pane_ParamLimits

0xa97c,	// (0x0001a101) cell_ai5_widget_list_row_pane

0xa993,	// (0x0001a118) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa993,	// (0x0001a118) cell_ai5_widget_list_row_pane_g1

0xa9a0,	// (0x0001a125) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa9a0,	// (0x0001a125) cell_ai5_widget_list_row_pane_t1

0xa9d1,	// (0x0001a156) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa9d1,	// (0x0001a156) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed3,	// (0x0001f658) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed3,	// (0x0001f658) cell_ai5_widget_list_row_pane_t

0x0130,	// (0x0000f8b5) main_fep_vtchi_ss_pane

0xaa15,	// (0x0001a19a) popup_fep_char_pre_window

0xaa1d,	// (0x0001a1a2) popup_fep_ituss_window

0xaa3e,	// (0x0001a1c3) popup_fep_vkbss_window

0xaa5d,	// (0x0001a1e2) grid_vkbss_keypad_pane_ParamLimits

0xaa5d,	// (0x0001a1e2) grid_vkbss_keypad_pane

0xaa6d,	// (0x0001a1f2) ituss_keypad_pane

0x2368,	// (0x00011aed) aid_vkbss_key_offset_ParamLimits

0x2368,	// (0x00011aed) aid_vkbss_key_offset

0x2374,	// (0x00011af9) cell_vkbss_key_pane_ParamLimits

0x2374,	// (0x00011af9) cell_vkbss_key_pane

0xaa7c,	// (0x0001a201) bg_cell_vkbss_key_g1_ParamLimits

0xaa7c,	// (0x0001a201) bg_cell_vkbss_key_g1

0xaa88,	// (0x0001a20d) cell_vkbss_key_3p_pane_ParamLimits

0xaa88,	// (0x0001a20d) cell_vkbss_key_3p_pane

0xaaa2,	// (0x0001a227) cell_vkbss_key_g1_ParamLimits

0xaaa2,	// (0x0001a227) cell_vkbss_key_g1

0xaabc,	// (0x0001a241) cell_vkbss_key_t1_ParamLimits

0xaabc,	// (0x0001a241) cell_vkbss_key_t1

0x238a,	// (0x00011b0f) cell_ituss_key_pane_ParamLimits

0x238a,	// (0x00011b0f) cell_ituss_key_pane

0xaae7,	// (0x0001a26c) bg_cell_ituss_key_g1_ParamLimits

0xaae7,	// (0x0001a26c) bg_cell_ituss_key_g1

0xaaf3,	// (0x0001a278) cell_ituss_key_pane_g1_ParamLimits

0xaaf3,	// (0x0001a278) cell_ituss_key_pane_g1

0x239b,	// (0x00011b20) cell_ituss_key_pane_g2_ParamLimits

0x239b,	// (0x00011b20) cell_ituss_key_pane_g2

0x0002,

0xfeda,	// (0x0001f65f) cell_ituss_key_pane_g_ParamLimits

0xfeda,	// (0x0001f65f) cell_ituss_key_pane_g

0x23c7,	// (0x00011b4c) cell_ituss_key_t1_ParamLimits

0x23c7,	// (0x00011b4c) cell_ituss_key_t1

0x2401,	// (0x00011b86) cell_ituss_key_t2_ParamLimits

0x2401,	// (0x00011b86) cell_ituss_key_t2

0x2432,	// (0x00011bb7) cell_ituss_key_t3_ParamLimits

0x2432,	// (0x00011bb7) cell_ituss_key_t3

0x2401,	// (0x00011b86) cell_ituss_key_t4_ParamLimits

0x2401,	// (0x00011b86) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0001f666) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0001f666) cell_ituss_key_t

0xab1f,	// (0x0001a2a4) cell_vkbss_key_3p_pane_g1

0xab27,	// (0x0001a2ac) cell_vkbss_key_3p_pane_g2

0xab2f,	// (0x0001a2b4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0001f671) cell_vkbss_key_3p_pane_g

0x0130,	// (0x0000f8b5) bg_popup_fep_char_preview_window_cp02

0x2475,	// (0x00011bfa) popup_fep_char_pre_window_t1

0xf21c,	// (0x0001e9a1) main_ai5_sk_pane

0xa618,	// (0x00019d9d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa624,	// (0x00019da9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7e84,	// (0x00017609) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa639,	// (0x00019dbe) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebe,	// (0x0001f643) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa645,	// (0x00019dca) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x33b3,	// (0x00012b38) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf525,	// (0x0001ecaa) main_ai5_sk_pane_g1

0x5082,	// (0x00014807) popup_query_code_window_g1

0xaa33,	// (0x0001a1b8) popup_fep_vkb_icf_pane

0xaa47,	// (0x0001a1cc) popup_fep_vtchi_icf_pane

0xab40,	// (0x0001a2c5) bg_icf_pane

0xab4c,	// (0x0001a2d1) list_vkb_icf_pane

0xab5b,	// (0x0001a2e0) bg_icf_pane_cp01

0xab6e,	// (0x0001a2f3) vtchi_icf_list_pane

0xab7e,	// (0x0001a303) list_vkb_icf_pane_t1_ParamLimits

0xab7e,	// (0x0001a303) list_vkb_icf_pane_t1

0xab94,	// (0x0001a319) vtchi_icf_list_pane_t1_ParamLimits

0xab94,	// (0x0001a319) vtchi_icf_list_pane_t1

0xaa1d,	// (0x0001a1a2) popup_fep_ituss_window_ParamLimits

0xaa47,	// (0x0001a1cc) popup_fep_vtchi_icf_pane_ParamLimits

0xaa6d,	// (0x0001a1f2) ituss_keypad_pane_ParamLimits

0x235c,	// (0x00011ae1) ituss_sks_pane

0xab40,	// (0x0001a2c5) bg_icf_pane_ParamLimits

0xa9f9,	// (0x0001a17e) icf_edit_indi_pane_ParamLimits

0xa9f9,	// (0x0001a17e) icf_edit_indi_pane

0xab4c,	// (0x0001a2d1) list_vkb_icf_pane_ParamLimits

0xab5b,	// (0x0001a2e0) bg_icf_pane_cp01_ParamLimits

0xaa08,	// (0x0001a18d) icf_edit_indi_pane_cp01_ParamLimits

0xaa08,	// (0x0001a18d) icf_edit_indi_pane_cp01

0xab76,	// (0x0001a2fb) vtchi_query_pane

0x78bf,	// (0x00017044) icf_edit_indi_pane_g1_ParamLimits

0x78bf,	// (0x00017044) icf_edit_indi_pane_g1

0xac05,	// (0x0001a38a) icf_edit_indi_pane_g2_ParamLimits

0xac05,	// (0x0001a38a) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0001f689) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0001f689) icf_edit_indi_pane_g

0xac14,	// (0x0001a399) icf_edit_indi_pane_t1

0xabae,	// (0x0001a333) bg_input_focus_pane_cp042

0x2d67,	// (0x000124ec) vtchi_button_pane

0xabb7,	// (0x0001a33c) vtchi_query_pane_t1

0xabc5,	// (0x0001a34a) vtchi_query_pane_t2

0xabd3,	// (0x0001a358) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0001f678) vtchi_query_pane_t

0x0130,	// (0x0000f8b5) bg_button_pane_cp13

0xabe1,	// (0x0001a366) vtchi_button_pane_g1

0x2484,	// (0x00011c09) ituss_sks_pane_g1

0x248f,	// (0x00011c14) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0001f67f) ituss_sks_pane_g

0xabe9,	// (0x0001a36e) ituss_sks_pane_t1

0xabf7,	// (0x0001a37c) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0001f684) ituss_sks_pane_t

0x7061,	// (0x000167e6) indicator_nsta_pane_cp_g1

0x706a,	// (0x000167ef) indicator_nsta_pane_cp_g2

0x7072,	// (0x000167f7) indicator_nsta_pane_cp_g3

0x707a,	// (0x000167ff) indicator_nsta_pane_cp_g4

0x7082,	// (0x00016807) indicator_nsta_pane_cp_g5

0x7082,	// (0x00016807) indicator_nsta_pane_cp_g6

0x0005,

0xfa9c,	// (0x0001f221) indicator_nsta_pane_cp_g

0xf02e,	// (0x0001e7b3) cell_graphic2_pane_t2_ParamLimits

0xf02e,	// (0x0001e7b3) cell_graphic2_pane_t2

0x0001,

0xfdb5,	// (0x0001f53a) cell_graphic2_pane_t_ParamLimits

0xfdb5,	// (0x0001f53a) cell_graphic2_pane_t

0xf064,	// (0x0001e7e9) cell_graphic2_control_pane_t1

0xd139,	// (0x0001c8be) signal_pane_g3_ParamLimits

0xd139,	// (0x0001c8be) signal_pane_g3

0xd14d,	// (0x0001c8d2) signal_pane_g4_ParamLimits

0xd14d,	// (0x0001c8d2) signal_pane_g4

0xa9e3,	// (0x0001a168) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa9e3,	// (0x0001a168) cell_ai5_widget_list_row_pane_t3

0xab0d,	// (0x0001a292) cell_ituss_key_pane_t1_ParamLimits

0xab0d,	// (0x0001a292) cell_ituss_key_pane_t1

0x4c97,	// (0x0001441c) form_field_data_wide_pane_vc_t2_ParamLimits

0x4c97,	// (0x0001441c) form_field_data_wide_pane_vc_t2

0x4cab,	// (0x00014430) form_field_data_wide_pane_vc_t3_ParamLimits

0x4cab,	// (0x00014430) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001ef84) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001ef84) form_field_data_wide_pane_vc_t

0x6d29,	// (0x000164ae) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6d29,	// (0x000164ae) form_field_slider_wide_pane_vc_t3

0x6e07,	// (0x0001658c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e07,	// (0x0001658c) form_field_popup_wide_pane_vc_t2

0x6e1e,	// (0x000165a3) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e1e,	// (0x000165a3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8b,	// (0x0001f210) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001f210) form_field_popup_wide_pane_vc_t

0xc51d,	// (0x0001bca2) aid_fshwr2_btn_pane_ParamLimits

0xc52e,	// (0x0001bcb3) aid_fshwr2_syb_pane_ParamLimits

0xc53f,	// (0x0001bcc4) aid_fshwr2_txt_pane_ParamLimits

0x19c8,	// (0x0001114d) fshwr2_bg_pane_ParamLimits

0xc54b,	// (0x0001bcd0) fshwr2_func_candi_pane_ParamLimits

0xc56a,	// (0x0001bcef) fshwr2_hwr_syb_pane_ParamLimits

0xc585,	// (0x0001bd0a) fshwr2_icf_pane_ParamLimits

0x6c8f,	// (0x00016414) list_double_graphic_pane_vc_g4_ParamLimits

0x6c8f,	// (0x00016414) list_double_graphic_pane_vc_g4

0x23bb,	// (0x00011b40) cell_ituss_key_pane_g3_ParamLimits

0x23bb,	// (0x00011b40) cell_ituss_key_pane_g3

0x2463,	// (0x00011be8) cell_ituss_key_t5_ParamLimits

0x2463,	// (0x00011be8) cell_ituss_key_t5
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
