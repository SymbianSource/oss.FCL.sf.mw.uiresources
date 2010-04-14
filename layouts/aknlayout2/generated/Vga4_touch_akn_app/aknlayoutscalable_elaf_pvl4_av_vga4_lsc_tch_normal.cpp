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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000256e };

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
0x9662,	// (0x0000bbd0) Screen

0x966e,	// (0x0000bbdc) application_window_ParamLimits

0x966e,	// (0x0000bbdc) application_window

0xde9e,	// (0x0001040c) screen_g1

0x96a6,	// (0x0000bc14) area_bottom_pane_ParamLimits

0x96a6,	// (0x0000bc14) area_bottom_pane

0xdec8,	// (0x00010436) area_top_pane_ParamLimits

0xdec8,	// (0x00010436) area_top_pane

0xdf5c,	// (0x000104ca) main_pane_ParamLimits

0xdf5c,	// (0x000104ca) main_pane

0xe017,	// (0x00010585) misc_graphics

0xb06e,	// (0x0000d5dc) battery_pane_ParamLimits

0xb06e,	// (0x0000d5dc) battery_pane

0x1c5d,	// (0x000041cb) bg_status_flat_pane_g8

0x1c65,	// (0x000041d3) bg_status_flat_pane_g9

0x0ddb,	// (0x00003349) context_pane_ParamLimits

0x0ddb,	// (0x00003349) context_pane

0xb1e5,	// (0x0000d753) navi_pane_ParamLimits

0xb1e5,	// (0x0000d753) navi_pane

0xb26f,	// (0x0000d7dd) signal_pane_ParamLimits

0xb26f,	// (0x0000d7dd) signal_pane

0x0008,

0xf868,	// (0x00011dd6) bg_status_flat_pane_g

0xb2ff,	// (0x0000d86d) status_pane_g1_ParamLimits

0xb2ff,	// (0x0000d86d) status_pane_g1

0xb315,	// (0x0000d883) status_pane_g2_ParamLimits

0xb315,	// (0x0000d883) status_pane_g2

0x101c,	// (0x0000358a) status_pane_g3_ParamLimits

0x101c,	// (0x0000358a) status_pane_g3

0x0004,

0xf79b,	// (0x00011d09) status_pane_g_ParamLimits

0xf79b,	// (0x00011d09) status_pane_g

0xb321,	// (0x0000d88f) title_pane_ParamLimits

0xb321,	// (0x0000d88f) title_pane

0xb384,	// (0x0000d8f2) uni_indicator_pane_ParamLimits

0xb384,	// (0x0000d8f2) uni_indicator_pane

0x05f4,	// (0x00002b62) bg_list_pane_ParamLimits

0x05f4,	// (0x00002b62) bg_list_pane

0xa89c,	// (0x0000ce0a) find_pane

0xa8a4,	// (0x0000ce12) listscroll_app_pane_ParamLimits

0xa8a4,	// (0x0000ce12) listscroll_app_pane

0x0628,	// (0x00002b96) listscroll_form_pane

0xa8b4,	// (0x0000ce22) listscroll_gen_pane_ParamLimits

0xa8b4,	// (0x0000ce22) listscroll_gen_pane

0x0644,	// (0x00002bb2) listscroll_set_pane

0x2a6c,	// (0x00004fda) main_idle_act_pane

0x00e5,	// (0x00002653) main_idle_trad_pane

0x00e5,	// (0x00002653) main_list_empty_pane

0x065e,	// (0x00002bcc) main_midp_pane

0x066a,	// (0x00002bd8) main_pane_g1_ParamLimits

0x066a,	// (0x00002bd8) main_pane_g1

0xa8c8,	// (0x0000ce36) popup_ai_message_window_ParamLimits

0xa8c8,	// (0x0000ce36) popup_ai_message_window

0xa968,	// (0x0000ced6) popup_fep_china_uni_window_ParamLimits

0xa968,	// (0x0000ced6) popup_fep_china_uni_window

0x0794,	// (0x00002d02) popup_fep_japan_candidate_window_ParamLimits

0x0794,	// (0x00002d02) popup_fep_japan_candidate_window

0x07be,	// (0x00002d2c) popup_fep_japan_predictive_window_ParamLimits

0x07be,	// (0x00002d2c) popup_fep_japan_predictive_window

0xa9c8,	// (0x0000cf36) popup_find_window

0xa9e5,	// (0x0000cf53) popup_grid_graphic_window_ParamLimits

0xa9e5,	// (0x0000cf53) popup_grid_graphic_window

0x082f,	// (0x00002d9d) popup_large_graphic_colour_window

0xaa89,	// (0x0000cff7) popup_menu_window_ParamLimits

0xaa89,	// (0x0000cff7) popup_menu_window

0xac79,	// (0x0000d1e7) popup_note_image_window

0xac39,	// (0x0000d1a7) popup_note_wait_window_ParamLimits

0xac39,	// (0x0000d1a7) popup_note_wait_window

0xac91,	// (0x0000d1ff) popup_note_window_ParamLimits

0xac91,	// (0x0000d1ff) popup_note_window

0xad3f,	// (0x0000d2ad) popup_query_code_window_ParamLimits

0xad3f,	// (0x0000d2ad) popup_query_code_window

0x0a9b,	// (0x00003009) popup_query_data_code_window_ParamLimits

0x0a9b,	// (0x00003009) popup_query_data_code_window

0xad7f,	// (0x0000d2ed) popup_query_data_window_ParamLimits

0xad7f,	// (0x0000d2ed) popup_query_data_window

0xae13,	// (0x0000d381) popup_query_sat_info_window_ParamLimits

0xae13,	// (0x0000d381) popup_query_sat_info_window

0xaebe,	// (0x0000d42c) popup_snote_single_graphic_window_ParamLimits

0xaebe,	// (0x0000d42c) popup_snote_single_graphic_window

0xaebe,	// (0x0000d42c) popup_snote_single_text_window_ParamLimits

0xaebe,	// (0x0000d42c) popup_snote_single_text_window

0x0b36,	// (0x000030a4) popup_sub_window_general

0x0c7c,	// (0x000031ea) popup_window_general_ParamLimits

0x0c7c,	// (0x000031ea) popup_window_general

0x0c95,	// (0x00003203) power_save_pane

0xa70a,	// (0x0000cc78) control_pane_g1_ParamLimits

0xa70a,	// (0x0000cc78) control_pane_g1

0xa733,	// (0x0000cca1) control_pane_g2_ParamLimits

0xa733,	// (0x0000cca1) control_pane_g2

0x0499,	// (0x00002a07) control_pane_g3_ParamLimits

0x0499,	// (0x00002a07) control_pane_g3

0x0007,

0xf783,	// (0x00011cf1) control_pane_g_ParamLimits

0xf783,	// (0x00011cf1) control_pane_g

0xa795,	// (0x0000cd03) control_pane_t1_ParamLimits

0xa795,	// (0x0000cd03) control_pane_t1

0xa7f3,	// (0x0000cd61) control_pane_t2_ParamLimits

0xa7f3,	// (0x0000cd61) control_pane_t2

0x0002,

0xf794,	// (0x00011d02) control_pane_t_ParamLimits

0xf794,	// (0x00011d02) control_pane_t

0xa663,	// (0x0000cbd1) navi_navi_volume_pane_cp1

0xa66b,	// (0x0000cbd9) status_small_icon_pane

0x0380,	// (0x000028ee) status_small_pane_g1_ParamLimits

0x0380,	// (0x000028ee) status_small_pane_g1

0xa673,	// (0x0000cbe1) status_small_pane_g2_ParamLimits

0xa673,	// (0x0000cbe1) status_small_pane_g2

0xa67f,	// (0x0000cbed) status_small_pane_g3_ParamLimits

0xa67f,	// (0x0000cbed) status_small_pane_g3

0xa68b,	// (0x0000cbf9) status_small_pane_g4_ParamLimits

0xa68b,	// (0x0000cbf9) status_small_pane_g4

0xa697,	// (0x0000cc05) status_small_pane_g5_ParamLimits

0xa697,	// (0x0000cc05) status_small_pane_g5

0xa6a5,	// (0x0000cc13) status_small_pane_g6_ParamLimits

0xa6a5,	// (0x0000cc13) status_small_pane_g6

0x0007,

0xf772,	// (0x00011ce0) status_small_pane_g_ParamLimits

0xf772,	// (0x00011ce0) status_small_pane_g

0xa6d4,	// (0x0000cc42) status_small_pane_t1

0xa6f6,	// (0x0000cc64) status_small_wait_pane_ParamLimits

0xa6f6,	// (0x0000cc64) status_small_wait_pane

0xa39d,	// (0x0000c90b) aid_levels_signal_ParamLimits

0xa39d,	// (0x0000c90b) aid_levels_signal

0xa3b5,	// (0x0000c923) signal_pane_g1_ParamLimits

0xa3b5,	// (0x0000c923) signal_pane_g1

0xa3d0,	// (0x0000c93e) signal_pane_g2_ParamLimits

0xa3d0,	// (0x0000c93e) signal_pane_g2

0x0003,

0xf703,	// (0x00011c71) signal_pane_g_ParamLimits

0xf703,	// (0x00011c71) signal_pane_g

0xf05e,	// (0x000115cc) context_pane_g1

0x9892,	// (0x0000be00) title_pane_g1

0x98bd,	// (0x0000be2b) title_pane_t1

0xe08d,	// (0x000105fb) title_pane_t2

0xe0b3,	// (0x00010621) title_pane_t3

0x0002,

0xf557,	// (0x00011ac5) title_pane_t

0xb3ac,	// (0x0000d91a) aid_levels_battery_ParamLimits

0xb3ac,	// (0x0000d91a) aid_levels_battery

0xb3c8,	// (0x0000d936) battery_pane_g1_ParamLimits

0xb3c8,	// (0x0000d936) battery_pane_g1

0xb3e5,	// (0x0000d953) battery_pane_g2_ParamLimits

0xb3e5,	// (0x0000d953) battery_pane_g2

0x0001,

0xf7a6,	// (0x00011d14) battery_pane_g_ParamLimits

0xf7a6,	// (0x00011d14) battery_pane_g

0xb891,	// (0x0000ddff) uni_indicator_pane_g1

0xb8a7,	// (0x0000de15) uni_indicator_pane_g2

0xb8bd,	// (0x0000de2b) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x00011e7e) uni_indicator_pane_g

0xf4af,	// (0x00011a1d) navi_icon_pane_ParamLimits

0xf4af,	// (0x00011a1d) navi_icon_pane

0xf433,	// (0x000119a1) navi_midp_pane

0xf4cb,	// (0x00011a39) navi_navi_pane

0xf4d5,	// (0x00011a43) navi_text_pane_ParamLimits

0xf4d5,	// (0x00011a43) navi_text_pane

0xde9e,	// (0x0001040c) status_small_wait_pane_g1

0xe45b,	// (0x000109c9) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x00011e79) status_small_wait_pane_g

0xb7f8,	// (0x0000dd66) navi_navi_icon_text_pane

0xb800,	// (0x0000dd6e) navi_navi_pane_g1_ParamLimits

0xb800,	// (0x0000dd6e) navi_navi_pane_g1

0xb812,	// (0x0000dd80) navi_navi_pane_g2_ParamLimits

0xb812,	// (0x0000dd80) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x00011e47) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x00011e47) navi_navi_pane_g

0x2452,	// (0x000049c0) navi_navi_tabs_pane

0xb824,	// (0x0000dd92) navi_navi_text_pane

0xb7f8,	// (0x0000dd66) navi_navi_volume_pane

0xb7e6,	// (0x0000dd54) navi_text_pane_t1

0xb7da,	// (0x0000dd48) navi_icon_pane_g1

0x2349,	// (0x000048b7) navi_navi_text_pane_t1

0xb7b5,	// (0x0000dd23) navi_navi_volume_pane_g1

0xb7bd,	// (0x0000dd2b) volume_small_pane

0xb711,	// (0x0000dc7f) navi_navi_icon_text_pane_g1

0xb719,	// (0x0000dc87) navi_navi_icon_text_pane_t1

0xf4cb,	// (0x00011a39) navi_tabs_2_long_pane

0xf4cb,	// (0x00011a39) navi_tabs_2_pane

0xf4cb,	// (0x00011a39) navi_tabs_3_long_pane

0xf4cb,	// (0x00011a39) navi_tabs_3_pane

0xf4cb,	// (0x00011a39) navi_tabs_4_pane

0xb6cf,	// (0x0000dc3d) tabs_2_active_pane_ParamLimits

0xb6cf,	// (0x0000dc3d) tabs_2_active_pane

0xb6df,	// (0x0000dc4d) tabs_2_passive_pane_ParamLimits

0xb6df,	// (0x0000dc4d) tabs_2_passive_pane

0xb69d,	// (0x0000dc0b) tabs_3_active_pane_ParamLimits

0xb69d,	// (0x0000dc0b) tabs_3_active_pane

0xb6ad,	// (0x0000dc1b) tabs_3_passive_pane_ParamLimits

0xb6ad,	// (0x0000dc1b) tabs_3_passive_pane

0xb6be,	// (0x0000dc2c) tabs_3_passive_pane_cp_ParamLimits

0xb6be,	// (0x0000dc2c) tabs_3_passive_pane_cp

0xb659,	// (0x0000dbc7) tabs_4_active_pane_ParamLimits

0xb659,	// (0x0000dbc7) tabs_4_active_pane

0xb66a,	// (0x0000dbd8) tabs_4_passive_pane_ParamLimits

0xb66a,	// (0x0000dbd8) tabs_4_passive_pane

0xb67b,	// (0x0000dbe9) tabs_4_passive_pane_cp_ParamLimits

0xb67b,	// (0x0000dbe9) tabs_4_passive_pane_cp

0xb68c,	// (0x0000dbfa) tabs_4_passive_pane_cp2_ParamLimits

0xb68c,	// (0x0000dbfa) tabs_4_passive_pane_cp2

0xb635,	// (0x0000dba3) tabs_2_long_active_pane_ParamLimits

0xb635,	// (0x0000dba3) tabs_2_long_active_pane

0xb647,	// (0x0000dbb5) tabs_2_long_passive_pane_ParamLimits

0xb647,	// (0x0000dbb5) tabs_2_long_passive_pane

0xb5ea,	// (0x0000db58) tabs_3_long_active_pane_ParamLimits

0xb5ea,	// (0x0000db58) tabs_3_long_active_pane

0xb603,	// (0x0000db71) tabs_3_long_passive_pane_ParamLimits

0xb603,	// (0x0000db71) tabs_3_long_passive_pane

0xb61c,	// (0x0000db8a) tabs_3_long_passive_pane_cp_ParamLimits

0xb61c,	// (0x0000db8a) tabs_3_long_passive_pane_cp

0x20c2,	// (0x00004630) volume_small_pane_g1

0xb599,	// (0x0000db07) volume_small_pane_g2

0xb5a2,	// (0x0000db10) volume_small_pane_g3

0xb5ab,	// (0x0000db19) volume_small_pane_g4

0xb5b4,	// (0x0000db22) volume_small_pane_g5

0xb5bd,	// (0x0000db2b) volume_small_pane_g6

0xb5c6,	// (0x0000db34) volume_small_pane_g7

0xb5cf,	// (0x0000db3d) volume_small_pane_g8

0xb5d8,	// (0x0000db46) volume_small_pane_g9

0xb5e1,	// (0x0000db4f) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x00011e13) volume_small_pane_g

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp2_ParamLimits

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp2

0x9949,	// (0x0000beb7) tabs_3_active_pane_g1

0x9951,	// (0x0000bebf) tabs_3_active_pane_t1

0xe0c5,	// (0x00010633) bg_passive_tab_pane_cp2_ParamLimits

0xe0c5,	// (0x00010633) bg_passive_tab_pane_cp2

0x9949,	// (0x0000beb7) tabs_3_passive_pane_g1

0x9951,	// (0x0000bebf) tabs_3_passive_pane_t1

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp3_ParamLimits

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp3

0x9963,	// (0x0000bed1) tabs_4_active_pane_g1

0x996b,	// (0x0000bed9) tabs_4_active_pane_t1

0xe0c5,	// (0x00010633) bg_passive_tab_pane_cp3_ParamLimits

0xe0c5,	// (0x00010633) bg_passive_tab_pane_cp3

0x9963,	// (0x0000bed1) tabs_4_1_passive_pane_g1

0x996b,	// (0x0000bed9) tabs_4_1_passive_pane_t1

0x065e,	// (0x00002bcc) list_highlight_pane_cp2

0xb964,	// (0x0000ded2) list_set_pane_ParamLimits

0xb964,	// (0x0000ded2) list_set_pane

0xba2c,	// (0x0000df9a) main_pane_set_t1_ParamLimits

0xba2c,	// (0x0000df9a) main_pane_set_t1

0xba4c,	// (0x0000dfba) main_pane_set_t2_ParamLimits

0xba4c,	// (0x0000dfba) main_pane_set_t2

0xba60,	// (0x0000dfce) main_pane_set_t3_ParamLimits

0xba60,	// (0x0000dfce) main_pane_set_t3

0xba74,	// (0x0000dfe2) main_pane_set_t4_ParamLimits

0xba74,	// (0x0000dfe2) main_pane_set_t4

0x0003,

0xf975,	// (0x00011ee3) main_pane_set_t_ParamLimits

0xf975,	// (0x00011ee3) main_pane_set_t

0xba88,	// (0x0000dff6) setting_code_pane

0x2bc0,	// (0x0000512e) setting_slider_graphic_pane

0x2bc0,	// (0x0000512e) setting_slider_pane

0x2bc0,	// (0x0000512e) setting_text_pane

0x2bc0,	// (0x0000512e) setting_volume_pane

0xe0d3,	// (0x00010641) volume_set_pane

0xe0dd,	// (0x0001064b) bg_set_opt_pane_cp

0xe0eb,	// (0x00010659) setting_slider_pane_t1

0xe104,	// (0x00010672) setting_slider_pane_t2

0xe11e,	// (0x0001068c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00011acc) setting_slider_pane_t

0xe136,	// (0x000106a4) slider_set_pane

0xe017,	// (0x00010585) bg_set_opt_pane_cp2

0xe14c,	// (0x000106ba) setting_slider_graphic_pane_g1

0xe155,	// (0x000106c3) setting_slider_graphic_pane_t1

0xe165,	// (0x000106d3) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00011ad3) setting_slider_graphic_pane_t

0xe175,	// (0x000106e3) slider_set_pane_cp

0xe017,	// (0x00010585) input_focus_pane_cp1

0x2a53,	// (0x00004fc1) list_set_text_pane

0xde9e,	// (0x0001040c) setting_text_pane_g1

0xe017,	// (0x00010585) input_focus_pane_cp2

0xde9e,	// (0x0001040c) setting_code_pane_g1

0xe17d,	// (0x000106eb) setting_code_pane_t1

0xe18b,	// (0x000106f9) set_text_pane_t1_ParamLimits

0xe18b,	// (0x000106f9) set_text_pane_t1

0xe8fc,	// (0x00010e6a) set_opt_bg_pane_g1

0xe904,	// (0x00010e72) set_opt_bg_pane_g2

0x2a2b,	// (0x00004f99) set_opt_bg_pane_g3

0xe914,	// (0x00010e82) set_opt_bg_pane_g4

0xe91c,	// (0x00010e8a) set_opt_bg_pane_g5

0xe924,	// (0x00010e92) set_opt_bg_pane_g6

0x2a35,	// (0x00004fa3) set_opt_bg_pane_g7

0x2a3f,	// (0x00004fad) set_opt_bg_pane_g8

0x2a49,	// (0x00004fb7) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x00011ed0) set_opt_bg_pane_g

0x29ba,	// (0x00004f28) slider_set_pane_g1

0x29c7,	// (0x00004f35) slider_set_pane_g2

0x0006,

0xf953,	// (0x00011ec1) slider_set_pane_g

0x2822,	// (0x00004d90) volume_set_pane_g1

0x282c,	// (0x00004d9a) volume_set_pane_g2

0x2836,	// (0x00004da4) volume_set_pane_g3

0x2840,	// (0x00004dae) volume_set_pane_g4

0x284a,	// (0x00004db8) volume_set_pane_g5

0x2854,	// (0x00004dc2) volume_set_pane_g6

0x285e,	// (0x00004dcc) volume_set_pane_g7

0x2868,	// (0x00004dd6) volume_set_pane_g8

0x2872,	// (0x00004de0) volume_set_pane_g9

0x287c,	// (0x00004dea) volume_set_pane_g10

0x0009,

0xf92b,	// (0x00011e99) volume_set_pane_g

0x997d,	// (0x0000beeb) indicator_pane_ParamLimits

0x997d,	// (0x0000beeb) indicator_pane

0x99a9,	// (0x0000bf17) main_idle_pane_g2_ParamLimits

0x99a9,	// (0x0000bf17) main_idle_pane_g2

0x99e1,	// (0x0000bf4f) main_pane_idle_g1_ParamLimits

0x99e1,	// (0x0000bf4f) main_pane_idle_g1

0xe1a5,	// (0x00010713) popup_clock_digital_analogue_window_ParamLimits

0xe1a5,	// (0x00010713) popup_clock_digital_analogue_window

0x9a0f,	// (0x0000bf7d) soft_indicator_pane_ParamLimits

0x9a0f,	// (0x0000bf7d) soft_indicator_pane

0x9a2b,	// (0x0000bf99) wallpaper_pane_ParamLimits

0x9a2b,	// (0x0000bf99) wallpaper_pane

0xde9e,	// (0x0001040c) wallpaper_pane_g1

0x9a3d,	// (0x0000bfab) indicator_pane_g1_ParamLimits

0x9a3d,	// (0x0000bfab) indicator_pane_g1

0x2fac,	// (0x0000551a) navi_navi_icon_text_pane_srt_g1

0xe1d3,	// (0x00010741) soft_indicator_pane_t1

0xe1ed,	// (0x0001075b) aid_ps_area_pane

0x9a56,	// (0x0000bfc4) aid_ps_clock_pane

0xe1fe,	// (0x0001076c) aid_ps_indicator_pane

0xe20a,	// (0x00010778) indicator_ps_pane_ParamLimits

0xe20a,	// (0x00010778) indicator_ps_pane

0xe219,	// (0x00010787) power_save_pane_g1_ParamLimits

0xe219,	// (0x00010787) power_save_pane_g1

0xe225,	// (0x00010793) power_save_pane_g2_ParamLimits

0xe225,	// (0x00010793) power_save_pane_g2

0xdea8,	// (0x00010416) aid_navinavi_width_pane

0xe1ed,	// (0x0001075b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00011ad8) power_save_pane_g_ParamLimits

0xf56a,	// (0x00011ad8) power_save_pane_g

0xe233,	// (0x000107a1) power_save_pane_t1_ParamLimits

0xe233,	// (0x000107a1) power_save_pane_t1

0x9a56,	// (0x0000bfc4) aid_ps_clock_pane_ParamLimits

0xe1fe,	// (0x0001076c) aid_ps_indicator_pane_ParamLimits

0xe245,	// (0x000107b3) power_save_pane_t4_ParamLimits

0xe245,	// (0x000107b3) power_save_pane_t4

0x0001,

0xf56f,	// (0x00011add) power_save_pane_t_ParamLimits

0xf56f,	// (0x00011add) power_save_pane_t

0xe26f,	// (0x000107dd) power_save_t3_ParamLimits

0xe26f,	// (0x000107dd) power_save_t3

0xe25a,	// (0x000107c8) power_save_t2_ParamLimits

0xe25a,	// (0x000107c8) power_save_t2

0xe284,	// (0x000107f2) indicator_ps_pane_g1

0x9a64,	// (0x0000bfd2) ai_gene_pane_ParamLimits

0x9a64,	// (0x0000bfd2) ai_gene_pane

0x9a7b,	// (0x0000bfe9) ai_links_pane_ParamLimits

0x9a7b,	// (0x0000bfe9) ai_links_pane

0x9a93,	// (0x0000c001) indicator_pane_cp1_ParamLimits

0x9a93,	// (0x0000c001) indicator_pane_cp1

0x9aa2,	// (0x0000c010) main_pane_idle_g1_cp_ParamLimits

0x9aa2,	// (0x0000c010) main_pane_idle_g1_cp

0xe28d,	// (0x000107fb) popup_ai_links_title_window

0x9aba,	// (0x0000c028) soft_indicator_pane_cp1_ParamLimits

0x9aba,	// (0x0000c028) soft_indicator_pane_cp1

0x2701,	// (0x00004c6f) ai_links_pane_g1

0x270a,	// (0x00004c78) grid_ai_links_pane

0xb888,	// (0x0000ddf6) ai_gene_pane_1

0x26ef,	// (0x00004c5d) ai_gene_pane_2

0x26f8,	// (0x00004c66) list_highlight_pane_cp4

0xb864,	// (0x0000ddd2) cell_ai_link_pane_ParamLimits

0xb864,	// (0x0000ddd2) cell_ai_link_pane

0x26be,	// (0x00004c2c) cell_ai_link_pane_g1

0xe45b,	// (0x000109c9) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x00011e74) cell_ai_link_pane_g

0xe017,	// (0x00010585) grid_highlight_cp2

0xe017,	// (0x00010585) bg_popup_sub_pane_cp1

0xe2a4,	// (0x00010812) popup_ai_links_title_window_t1

0x260a,	// (0x00004b78) ai_gene_pane_1_g1_ParamLimits

0x260a,	// (0x00004b78) ai_gene_pane_1_g1

0x2616,	// (0x00004b84) ai_gene_pane_1_g2_ParamLimits

0x2616,	// (0x00004b84) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x00011e6a) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x00011e6a) ai_gene_pane_1_g

0x2623,	// (0x00004b91) ai_gene_pane_1_t1_ParamLimits

0x2623,	// (0x00004b91) ai_gene_pane_1_t1

0x2657,	// (0x00004bc5) grid_ai_soft_ind_pane

0x25f5,	// (0x00004b63) ai_gene_pane_2_t1_ParamLimits

0x25f5,	// (0x00004b63) ai_gene_pane_2_t1

0x9ace,	// (0x0000c03c) main_pane_empty_t1_ParamLimits

0x9ace,	// (0x0000c03c) main_pane_empty_t1

0x9ae6,	// (0x0000c054) main_pane_empty_t2_ParamLimits

0x9ae6,	// (0x0000c054) main_pane_empty_t2

0x9afb,	// (0x0000c069) main_pane_empty_t3_ParamLimits

0x9afb,	// (0x0000c069) main_pane_empty_t3

0x9b0d,	// (0x0000c07b) main_pane_empty_t4_ParamLimits

0x9b0d,	// (0x0000c07b) main_pane_empty_t4

0x9b1f,	// (0x0000c08d) main_pane_empty_t5_ParamLimits

0x9b1f,	// (0x0000c08d) main_pane_empty_t5

0x0004,

0xf574,	// (0x00011ae2) main_pane_empty_t_ParamLimits

0xf574,	// (0x00011ae2) main_pane_empty_t

0xe97c,	// (0x00010eea) bg_popup_window_pane_ParamLimits

0xe97c,	// (0x00010eea) bg_popup_window_pane

0x2357,	// (0x000048c5) find_popup_pane_cp2_ParamLimits

0x2357,	// (0x000048c5) find_popup_pane_cp2

0x2363,	// (0x000048d1) heading_pane_ParamLimits

0x2363,	// (0x000048d1) heading_pane

0xe017,	// (0x00010585) bg_popup_sub_pane

0xb736,	// (0x0000dca4) bg_popup_window_pane_g1_ParamLimits

0xb736,	// (0x0000dca4) bg_popup_window_pane_g1

0xb745,	// (0x0000dcb3) bg_popup_window_pane_g2_ParamLimits

0xb745,	// (0x0000dcb3) bg_popup_window_pane_g2

0xb751,	// (0x0000dcbf) bg_popup_window_pane_g3_ParamLimits

0xb751,	// (0x0000dcbf) bg_popup_window_pane_g3

0xb75d,	// (0x0000dccb) bg_popup_window_pane_g4_ParamLimits

0xb75d,	// (0x0000dccb) bg_popup_window_pane_g4

0xb76c,	// (0x0000dcda) bg_popup_window_pane_g5_ParamLimits

0xb76c,	// (0x0000dcda) bg_popup_window_pane_g5

0xb77c,	// (0x0000dcea) bg_popup_window_pane_g6_ParamLimits

0xb77c,	// (0x0000dcea) bg_popup_window_pane_g6

0xb788,	// (0x0000dcf6) bg_popup_window_pane_g7_ParamLimits

0xb788,	// (0x0000dcf6) bg_popup_window_pane_g7

0xb797,	// (0x0000dd05) bg_popup_window_pane_g8_ParamLimits

0xb797,	// (0x0000dd05) bg_popup_window_pane_g8

0xb7a6,	// (0x0000dd14) bg_popup_window_pane_g9_ParamLimits

0xb7a6,	// (0x0000dd14) bg_popup_window_pane_g9

0x232c,	// (0x0000489a) bg_popup_window_pane_g10_ParamLimits

0x232c,	// (0x0000489a) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x00011e32) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x00011e32) bg_popup_window_pane_g

0x2255,	// (0x000047c3) bg_popup_heading_pane_ParamLimits

0x2255,	// (0x000047c3) bg_popup_heading_pane

0x2eef,	// (0x0000545d) tabs_4_passive_pane_cp_srt_ParamLimits

0x2eef,	// (0x0000545d) tabs_4_passive_pane_cp_srt

0x2f01,	// (0x0000546f) tabs_4_passive_pane_srt_ParamLimits

0x2269,	// (0x000047d7) heading_pane_g2

0x2f01,	// (0x0000546f) tabs_4_passive_pane_srt

0x13ea,	// (0x00003958) bg_passive_tab_pane_cp3_srt_ParamLimits

0x13ea,	// (0x00003958) bg_passive_tab_pane_cp3_srt

0x2271,	// (0x000047df) heading_pane_t1_ParamLimits

0x2271,	// (0x000047df) heading_pane_t1

0x2288,	// (0x000047f6) heading_pane_t2_ParamLimits

0x2288,	// (0x000047f6) heading_pane_t2

0x0001,

0xf8bf,	// (0x00011e2d) heading_pane_t_ParamLimits

0xf8bf,	// (0x00011e2d) heading_pane_t

0x1c25,	// (0x00004193) bg_popup_heading_pane_g1

0x1cd4,	// (0x00004242) bg_popup_heading_pane_g2

0x1cde,	// (0x0000424c) bg_popup_heading_pane_g3

0x1ce8,	// (0x00004256) bg_popup_heading_pane_g4

0x1cf2,	// (0x00004260) bg_popup_heading_pane_g5

0x1cfc,	// (0x0000426a) bg_popup_heading_pane_g6

0x1d04,	// (0x00004272) bg_popup_heading_pane_g7

0x1d0c,	// (0x0000427a) bg_popup_heading_pane_g8

0x1d16,	// (0x00004284) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x00011de9) bg_popup_heading_pane_g

0x124d,	// (0x000037bb) bg_popup_sub_pane_g1

0x1255,	// (0x000037c3) bg_popup_sub_pane_g2

0x125d,	// (0x000037cb) bg_popup_sub_pane_g3

0x1265,	// (0x000037d3) bg_popup_sub_pane_g4

0x126d,	// (0x000037db) bg_popup_sub_pane_g5

0x1275,	// (0x000037e3) bg_popup_sub_pane_g6

0x127d,	// (0x000037eb) bg_popup_sub_pane_g7

0x1285,	// (0x000037f3) bg_popup_sub_pane_g8

0x128d,	// (0x000037fb) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x00011dc3) bg_popup_sub_pane_g

0xe0c5,	// (0x00010633) bg_popup_window_pane_cp5_ParamLimits

0xe0c5,	// (0x00010633) bg_popup_window_pane_cp5

0xe2c1,	// (0x0001082f) popup_note_window_g1_ParamLimits

0xe2c1,	// (0x0001082f) popup_note_window_g1

0xe2cd,	// (0x0001083b) popup_note_window_t1_ParamLimits

0xe2cd,	// (0x0001083b) popup_note_window_t1

0xe2e3,	// (0x00010851) popup_note_window_t2_ParamLimits

0xe2e3,	// (0x00010851) popup_note_window_t2

0xe2f9,	// (0x00010867) popup_note_window_t3_ParamLimits

0xe2f9,	// (0x00010867) popup_note_window_t3

0xe30f,	// (0x0001087d) popup_note_window_t4_ParamLimits

0xe30f,	// (0x0001087d) popup_note_window_t4

0xe337,	// (0x000108a5) popup_note_window_t5_ParamLimits

0xe337,	// (0x000108a5) popup_note_window_t5

0x0004,

0xf57f,	// (0x00011aed) popup_note_window_t_ParamLimits

0xf57f,	// (0x00011aed) popup_note_window_t

0xe35b,	// (0x000108c9) bg_popup_window_pane_cp6_ParamLimits

0xe35b,	// (0x000108c9) bg_popup_window_pane_cp6

0x1ba1,	// (0x0000410f) popup_note_image_window_g1_ParamLimits

0x1ba1,	// (0x0000410f) popup_note_image_window_g1

0x1bad,	// (0x0000411b) popup_note_image_window_g2_ParamLimits

0x1bad,	// (0x0000411b) popup_note_image_window_g2

0x0001,

0xf849,	// (0x00011db7) popup_note_image_window_g_ParamLimits

0xf849,	// (0x00011db7) popup_note_image_window_g

0x1bc6,	// (0x00004134) popup_note_image_window_t1_ParamLimits

0x1bc6,	// (0x00004134) popup_note_image_window_t1

0x1bdf,	// (0x0000414d) popup_note_image_window_t2_ParamLimits

0x1bdf,	// (0x0000414d) popup_note_image_window_t2

0x1bf8,	// (0x00004166) popup_note_image_window_t3_ParamLimits

0x1bf8,	// (0x00004166) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x00011dbc) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x00011dbc) popup_note_image_window_t

0x1a61,	// (0x00003fcf) bg_popup_window_pane_cp7_ParamLimits

0x1a61,	// (0x00003fcf) bg_popup_window_pane_cp7

0x1a91,	// (0x00003fff) popup_note_wait_window_g1_ParamLimits

0x1a91,	// (0x00003fff) popup_note_wait_window_g1

0x1a9d,	// (0x0000400b) popup_note_wait_window_g2_ParamLimits

0x1a9d,	// (0x0000400b) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x00011da5) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x00011da5) popup_note_wait_window_g

0x1ab5,	// (0x00004023) popup_note_wait_window_t1_ParamLimits

0x1ab5,	// (0x00004023) popup_note_wait_window_t1

0x1adc,	// (0x0000404a) popup_note_wait_window_t2_ParamLimits

0x1adc,	// (0x0000404a) popup_note_wait_window_t2

0x1afa,	// (0x00004068) popup_note_wait_window_t3_ParamLimits

0x1afa,	// (0x00004068) popup_note_wait_window_t3

0x1b0d,	// (0x0000407b) popup_note_wait_window_t4_ParamLimits

0x1b0d,	// (0x0000407b) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x00011dac) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x00011dac) popup_note_wait_window_t

0x1b32,	// (0x000040a0) wait_bar_pane_ParamLimits

0x1b32,	// (0x000040a0) wait_bar_pane

0xe017,	// (0x00010585) wait_anim_pane

0xe017,	// (0x00010585) wait_border_pane

0xde9e,	// (0x0001040c) wait_anim_pane_g1

0xde9e,	// (0x0001040c) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00011c6c) wait_anim_pane_g

0x1a05,	// (0x00003f73) wait_border_pane_g1

0x1a10,	// (0x00003f7e) wait_border_pane_g2

0x1a19,	// (0x00003f87) wait_border_pane_g3

0x0002,

0xf830,	// (0x00011d9e) wait_border_pane_g

0x186f,	// (0x00003ddd) bg_popup_window_pane_cp16_ParamLimits

0x186f,	// (0x00003ddd) bg_popup_window_pane_cp16

0x196f,	// (0x00003edd) indicator_popup_pane_cp4_ParamLimits

0x196f,	// (0x00003edd) indicator_popup_pane_cp4

0x1983,	// (0x00003ef1) popup_query_data_window_t1_ParamLimits

0x1983,	// (0x00003ef1) popup_query_data_window_t1

0x1995,	// (0x00003f03) popup_query_data_window_t2_ParamLimits

0x1995,	// (0x00003f03) popup_query_data_window_t2

0x19ae,	// (0x00003f1c) popup_query_data_window_t3_ParamLimits

0x19ae,	// (0x00003f1c) popup_query_data_window_t3

0x0002,

0xf829,	// (0x00011d97) popup_query_data_window_t_ParamLimits

0xf829,	// (0x00011d97) popup_query_data_window_t

0x19c8,	// (0x00003f36) query_popup_data_pane_ParamLimits

0x19c8,	// (0x00003f36) query_popup_data_pane

0x19dc,	// (0x00003f4a) query_popup_data_pane_cp1_ParamLimits

0x19dc,	// (0x00003f4a) query_popup_data_pane_cp1

0x186f,	// (0x00003ddd) bg_popup_window_pane_cp10_ParamLimits

0x186f,	// (0x00003ddd) bg_popup_window_pane_cp10

0x18a1,	// (0x00003e0f) indicator_popup_pane_ParamLimits

0x18a1,	// (0x00003e0f) indicator_popup_pane

0x18c3,	// (0x00003e31) popup_query_code_window_t1_ParamLimits

0x18c3,	// (0x00003e31) popup_query_code_window_t1

0x18dd,	// (0x00003e4b) popup_query_code_window_t2_ParamLimits

0x18dd,	// (0x00003e4b) popup_query_code_window_t2

0x1926,	// (0x00003e94) popup_query_code_window_t3_ParamLimits

0x1926,	// (0x00003e94) popup_query_code_window_t3

0x0002,

0xf822,	// (0x00011d90) popup_query_code_window_t_ParamLimits

0xf822,	// (0x00011d90) popup_query_code_window_t

0x1955,	// (0x00003ec3) query_popup_pane_ParamLimits

0x1955,	// (0x00003ec3) query_popup_pane

0xe35b,	// (0x000108c9) bg_popup_window_pane_cp15_ParamLimits

0xe35b,	// (0x000108c9) bg_popup_window_pane_cp15

0xe37b,	// (0x000108e9) indicator_popup_pane_cp1_ParamLimits

0xe37b,	// (0x000108e9) indicator_popup_pane_cp1

0xe38e,	// (0x000108fc) indicator_popup_pane_cp2_ParamLimits

0xe38e,	// (0x000108fc) indicator_popup_pane_cp2

0xe3a9,	// (0x00010917) popup_query_data_code_window_g1_ParamLimits

0xe3a9,	// (0x00010917) popup_query_data_code_window_g1

0xe3bc,	// (0x0001092a) popup_query_data_code_window_t1_ParamLimits

0xe3bc,	// (0x0001092a) popup_query_data_code_window_t1

0xe3ce,	// (0x0001093c) popup_query_data_code_window_t2_ParamLimits

0xe3ce,	// (0x0001093c) popup_query_data_code_window_t2

0xe3e0,	// (0x0001094e) popup_query_data_code_window_t3_ParamLimits

0xe3e0,	// (0x0001094e) popup_query_data_code_window_t3

0xe3f6,	// (0x00010964) popup_query_data_code_window_t4_ParamLimits

0xe3f6,	// (0x00010964) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00011af8) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00011af8) popup_query_data_code_window_t

0xf47f,	// (0x000119ed) list_single_midp_graphic_pane_g3

0xe410,	// (0x0001097e) query_popup_data_pane_cp2_ParamLimits

0xe423,	// (0x00010991) query_popup_pane_cp2_ParamLimits

0xe423,	// (0x00010991) query_popup_pane_cp2

0xe017,	// (0x00010585) bg_popup_window_pane_cp11

0x1867,	// (0x00003dd5) heading_pane_cp5

0xe4b9,	// (0x00010a27) listscroll_popup_info_pane

0xe017,	// (0x00010585) input_focus_pane_cp3

0xe43e,	// (0x000109ac) query_popup_pane_t1

0xe44c,	// (0x000109ba) list_popup_info_pane_ParamLimits

0xe44c,	// (0x000109ba) list_popup_info_pane

0xe45b,	// (0x000109c9) listscroll_popup_info_pane_g1

0xe463,	// (0x000109d1) scroll_pane_cp7

0xe46d,	// (0x000109db) popup_info_list_pane_t1_ParamLimits

0xe46d,	// (0x000109db) popup_info_list_pane_t1

0xe487,	// (0x000109f5) popup_info_list_pane_t2_ParamLimits

0xe487,	// (0x000109f5) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00011b01) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00011b01) popup_info_list_pane_t

0xe017,	// (0x00010585) bg_popup_window_pane_cp12

0x2fe3,	// (0x00005551) find_popup_pane

0xe0dd,	// (0x0001064b) bg_popup_window_pane_cp3

0xe4a1,	// (0x00010a0f) heading_pane_cp3

0xe4ad,	// (0x00010a1b) listscroll_popup_graphic_pane

0xe017,	// (0x00010585) bg_popup_window_pane_cp4

0x9b81,	// (0x0000c0ef) heading_pane_cp4

0xe4b9,	// (0x00010a27) listscroll_popup_colour_pane

0x9b8b,	// (0x0000c0f9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9b8b,	// (0x0000c0f9) cell_large_graphic_colour_none_popup_pane

0x9b9f,	// (0x0000c10d) grid_large_graphic_colour_popup_pane_ParamLimits

0x9b9f,	// (0x0000c10d) grid_large_graphic_colour_popup_pane

0x9bc3,	// (0x0000c131) listscroll_popup_colour_pane_g1_ParamLimits

0x9bc3,	// (0x0000c131) listscroll_popup_colour_pane_g1

0x9bda,	// (0x0000c148) listscroll_popup_colour_pane_g2_ParamLimits

0x9bda,	// (0x0000c148) listscroll_popup_colour_pane_g2

0x9bf1,	// (0x0000c15f) listscroll_popup_colour_pane_g3_ParamLimits

0x9bf1,	// (0x0000c15f) listscroll_popup_colour_pane_g3

0x9c01,	// (0x0000c16f) listscroll_popup_colour_pane_g4_ParamLimits

0x9c01,	// (0x0000c16f) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00011b06) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00011b06) listscroll_popup_colour_pane_g

0xe4c1,	// (0x00010a2f) scroll_pane_cp6_ParamLimits

0xe4c1,	// (0x00010a2f) scroll_pane_cp6

0x9c11,	// (0x0000c17f) cell_large_graphic_colour_popup_pane_ParamLimits

0x9c11,	// (0x0000c17f) cell_large_graphic_colour_popup_pane

0xe4d3,	// (0x00010a41) cell_large_graphic_colour_none_popup_pane_t1

0xe017,	// (0x00010585) grid_highlight_pane_cp5

0xe4e2,	// (0x00010a50) cell_large_graphic_colour_popup_pane_g1

0xe4ea,	// (0x00010a58) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00011b0f) cell_large_graphic_colour_popup_pane_g

0xe4f2,	// (0x00010a60) cell_large_graphic_colour_popup_pane_g2_copy1

0xe4fb,	// (0x00010a69) grid_highlight_pane_cp4

0xe503,	// (0x00010a71) bg_popup_window_pane_cp8_ParamLimits

0xe503,	// (0x00010a71) bg_popup_window_pane_cp8

0xe51e,	// (0x00010a8c) popup_snote_single_text_window_g1_ParamLimits

0xe51e,	// (0x00010a8c) popup_snote_single_text_window_g1

0xe530,	// (0x00010a9e) popup_snote_single_text_window_t1_ParamLimits

0xe530,	// (0x00010a9e) popup_snote_single_text_window_t1

0xe543,	// (0x00010ab1) popup_snote_single_text_window_t2_ParamLimits

0xe543,	// (0x00010ab1) popup_snote_single_text_window_t2

0xe556,	// (0x00010ac4) popup_snote_single_text_window_t3_ParamLimits

0xe556,	// (0x00010ac4) popup_snote_single_text_window_t3

0xe58f,	// (0x00010afd) popup_snote_single_text_window_t4_ParamLimits

0xe58f,	// (0x00010afd) popup_snote_single_text_window_t4

0xe5c3,	// (0x00010b31) popup_snote_single_text_window_t5_ParamLimits

0xe5c3,	// (0x00010b31) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00011b14) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00011b14) popup_snote_single_text_window_t

0xe5f2,	// (0x00010b60) bg_popup_window_pane_cp9_ParamLimits

0xe5f2,	// (0x00010b60) bg_popup_window_pane_cp9

0xe51e,	// (0x00010a8c) popup_snote_single_graphic_window_g1_ParamLimits

0xe51e,	// (0x00010a8c) popup_snote_single_graphic_window_g1

0xe600,	// (0x00010b6e) popup_snote_single_graphic_window_g2_ParamLimits

0xe600,	// (0x00010b6e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00011b1f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00011b1f) popup_snote_single_graphic_window_g

0xe60c,	// (0x00010b7a) popup_snote_single_graphic_window_t1_ParamLimits

0xe60c,	// (0x00010b7a) popup_snote_single_graphic_window_t1

0xe61f,	// (0x00010b8d) popup_snote_single_graphic_window_t2_ParamLimits

0xe61f,	// (0x00010b8d) popup_snote_single_graphic_window_t2

0xe632,	// (0x00010ba0) popup_snote_single_graphic_window_t3_ParamLimits

0xe632,	// (0x00010ba0) popup_snote_single_graphic_window_t3

0xe66b,	// (0x00010bd9) popup_snote_single_graphic_window_t4_ParamLimits

0xe66b,	// (0x00010bd9) popup_snote_single_graphic_window_t4

0xe69f,	// (0x00010c0d) popup_snote_single_graphic_window_t5_ParamLimits

0xe69f,	// (0x00010c0d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00011b24) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00011b24) popup_snote_single_graphic_window_t

0x2e69,	// (0x000053d7) grid_graphic_popup_pane_ParamLimits

0x2e69,	// (0x000053d7) grid_graphic_popup_pane

0x2e97,	// (0x00005405) listscroll_popup_graphic_pane_g1_ParamLimits

0x2e97,	// (0x00005405) listscroll_popup_graphic_pane_g1

0xbbd2,	// (0x0000e140) listscroll_popup_graphic_pane_g2_ParamLimits

0xbbd2,	// (0x0000e140) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x00011f0d) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x00011f0d) listscroll_popup_graphic_pane_g

0x2ebf,	// (0x0000542d) scroll_pane_cp5

0xbb91,	// (0x0000e0ff) cell_graphic_popup_pane_ParamLimits

0xbb91,	// (0x0000e0ff) cell_graphic_popup_pane

0x2df2,	// (0x00005360) cell_graphic_popup_pane_g1

0x2dfa,	// (0x00005368) cell_graphic_popup_pane_g2

0xe4f2,	// (0x00010a60) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x00011f06) cell_graphic_popup_pane_g

0x2e03,	// (0x00005371) cell_graphic_popup_pane_t2

0xe4fb,	// (0x00010a69) grid_highlight_pane_cp3

0xe6e0,	// (0x00010c4e) list_gen_pane_ParamLimits

0xe6e0,	// (0x00010c4e) list_gen_pane

0xe708,	// (0x00010c76) scroll_pane

0xbb48,	// (0x0000e0b6) bg_list_pane_g1_ParamLimits

0xbb48,	// (0x0000e0b6) bg_list_pane_g1

0x2d67,	// (0x000052d5) bg_list_pane_g2_ParamLimits

0x2d67,	// (0x000052d5) bg_list_pane_g2

0x2d7c,	// (0x000052ea) bg_list_pane_g3_ParamLimits

0x2d7c,	// (0x000052ea) bg_list_pane_g3

0x2d90,	// (0x000052fe) bg_list_pane_g4_ParamLimits

0x2d90,	// (0x000052fe) bg_list_pane_g4

0xbb65,	// (0x0000e0d3) bg_list_pane_g5_ParamLimits

0xbb65,	// (0x0000e0d3) bg_list_pane_g5

0x0004,

0xf98d,	// (0x00011efb) bg_list_pane_g_ParamLimits

0xf98d,	// (0x00011efb) bg_list_pane_g

0xbae2,	// (0x0000e050) list_double2_graphic_large_graphic_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double2_graphic_large_graphic_pane

0xbae2,	// (0x0000e050) list_double2_graphic_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double2_graphic_pane

0xbae2,	// (0x0000e050) list_double2_large_graphic_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double2_large_graphic_pane

0xbae2,	// (0x0000e050) list_double2_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double2_pane

0xbae2,	// (0x0000e050) list_double_graphic_heading_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double_graphic_heading_pane

0xbae2,	// (0x0000e050) list_double_graphic_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double_graphic_pane

0xbae2,	// (0x0000e050) list_double_heading_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double_heading_pane

0xbae2,	// (0x0000e050) list_double_large_graphic_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double_large_graphic_pane

0xbae2,	// (0x0000e050) list_double_number_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double_number_pane

0xbae2,	// (0x0000e050) list_double_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double_pane

0xbae2,	// (0x0000e050) list_double_time_pane_ParamLimits

0xbae2,	// (0x0000e050) list_double_time_pane

0xbae2,	// (0x0000e050) list_setting_number_pane_ParamLimits

0xbae2,	// (0x0000e050) list_setting_number_pane

0xbae2,	// (0x0000e050) list_setting_pane_ParamLimits

0xbae2,	// (0x0000e050) list_setting_pane

0xbaf6,	// (0x0000e064) list_single_2graphic_pane_ParamLimits

0xbaf6,	// (0x0000e064) list_single_2graphic_pane

0xbaf6,	// (0x0000e064) list_single_graphic_heading_pane_ParamLimits

0xbaf6,	// (0x0000e064) list_single_graphic_heading_pane

0xbaf6,	// (0x0000e064) list_single_graphic_pane_ParamLimits

0xbaf6,	// (0x0000e064) list_single_graphic_pane

0xbaf6,	// (0x0000e064) list_single_heading_pane_ParamLimits

0xbaf6,	// (0x0000e064) list_single_heading_pane

0xbaf6,	// (0x0000e064) list_single_large_graphic_pane_ParamLimits

0xbaf6,	// (0x0000e064) list_single_large_graphic_pane

0xbaf6,	// (0x0000e064) list_single_number_heading_pane_ParamLimits

0xbaf6,	// (0x0000e064) list_single_number_heading_pane

0xbaf6,	// (0x0000e064) list_single_number_pane_ParamLimits

0xbaf6,	// (0x0000e064) list_single_number_pane

0xbaf6,	// (0x0000e064) list_single_pane_ParamLimits

0xbaf6,	// (0x0000e064) list_single_pane

0xe017,	// (0x00010585) list_highlight_pane_cp1

0x0056,	// (0x000025c4) list_single_pane_g1_ParamLimits

0x0056,	// (0x000025c4) list_single_pane_g1

0x10f1,	// (0x0000365f) list_single_pane_g2_ParamLimits

0x10f1,	// (0x0000365f) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00011b36) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00011b36) list_single_pane_g

0x3608,	// (0x00005b76) list_single_pane_t1_ParamLimits

0x3608,	// (0x00005b76) list_single_pane_t1

0x0056,	// (0x000025c4) list_single_number_pane_g1_ParamLimits

0x0056,	// (0x000025c4) list_single_number_pane_g1

0x10f1,	// (0x0000365f) list_single_number_pane_g2_ParamLimits

0x10f1,	// (0x0000365f) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00011b36) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00011b36) list_single_number_pane_g

0x11db,	// (0x00003749) list_single_number_pane_t1_ParamLimits

0x11db,	// (0x00003749) list_single_number_pane_t1

0xb900,	// (0x0000de6e) list_single_number_pane_t2_ParamLimits

0xb900,	// (0x0000de6e) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x00011ebc) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x00011ebc) list_single_number_pane_t

0x4f1b,	// (0x00007489) list_single_graphic_pane_g1_ParamLimits

0x4f1b,	// (0x00007489) list_single_graphic_pane_g1

0x0056,	// (0x000025c4) list_single_graphic_pane_g2_ParamLimits

0x0056,	// (0x000025c4) list_single_graphic_pane_g2

0x10f1,	// (0x0000365f) list_single_graphic_pane_g3_ParamLimits

0x10f1,	// (0x0000365f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00011b2f) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00011b2f) list_single_graphic_pane_g

0x9c3c,	// (0x0000c1aa) list_single_graphic_pane_t1_ParamLimits

0x9c3c,	// (0x0000c1aa) list_single_graphic_pane_t1

0x0056,	// (0x000025c4) list_single_heading_pane_g1_ParamLimits

0x0056,	// (0x000025c4) list_single_heading_pane_g1

0x10f1,	// (0x0000365f) list_single_heading_pane_g2_ParamLimits

0x10f1,	// (0x0000365f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011b36) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011b36) list_single_heading_pane_g

0x362a,	// (0x00005b98) list_single_heading_pane_t1_ParamLimits

0x362a,	// (0x00005b98) list_single_heading_pane_t1

0x9c52,	// (0x0000c1c0) list_single_heading_pane_t2_ParamLimits

0x9c52,	// (0x0000c1c0) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00011b3b) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00011b3b) list_single_heading_pane_t

0x0056,	// (0x000025c4) list_single_number_heading_pane_g1_ParamLimits

0x0056,	// (0x000025c4) list_single_number_heading_pane_g1

0x10f1,	// (0x0000365f) list_single_number_heading_pane_g2_ParamLimits

0x10f1,	// (0x0000365f) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011b36) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011b36) list_single_number_heading_pane_g

0x362a,	// (0x00005b98) list_single_number_heading_pane_t1_ParamLimits

0x362a,	// (0x00005b98) list_single_number_heading_pane_t1

0x9c64,	// (0x0000c1d2) list_single_number_heading_pane_t2_ParamLimits

0x9c64,	// (0x0000c1d2) list_single_number_heading_pane_t2

0x35e4,	// (0x00005b52) list_single_number_heading_pane_t3_ParamLimits

0x35e4,	// (0x00005b52) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00011b40) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00011b40) list_single_number_heading_pane_t

0x10e5,	// (0x00003653) list_single_graphic_heading_pane_g1_ParamLimits

0x10e5,	// (0x00003653) list_single_graphic_heading_pane_g1

0x9c76,	// (0x0000c1e4) list_single_graphic_heading_pane_g4_ParamLimits

0x9c76,	// (0x0000c1e4) list_single_graphic_heading_pane_g4

0x10f1,	// (0x0000365f) list_single_graphic_heading_pane_g5_ParamLimits

0x10f1,	// (0x0000365f) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00011b47) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00011b47) list_single_graphic_heading_pane_g

0x362a,	// (0x00005b98) list_single_graphic_heading_pane_t1_ParamLimits

0x362a,	// (0x00005b98) list_single_graphic_heading_pane_t1

0x9c87,	// (0x0000c1f5) list_single_graphic_heading_pane_t2_ParamLimits

0x9c87,	// (0x0000c1f5) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00011b4e) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00011b4e) list_single_graphic_heading_pane_t

0x361e,	// (0x00005b8c) list_single_large_graphic_pane_g1_ParamLimits

0x361e,	// (0x00005b8c) list_single_large_graphic_pane_g1

0x0056,	// (0x000025c4) list_single_large_graphic_pane_g2_ParamLimits

0x0056,	// (0x000025c4) list_single_large_graphic_pane_g2

0x10f1,	// (0x0000365f) list_single_large_graphic_pane_g3_ParamLimits

0x10f1,	// (0x0000365f) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00011b53) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00011b53) list_single_large_graphic_pane_g

0x1a10,	// (0x00003f7e) wait_border_pane_g2_copy1

0x9c99,	// (0x0000c207) list_single_large_graphic_pane_g4_cp2

0x362a,	// (0x00005b98) list_single_large_graphic_pane_t1_ParamLimits

0x362a,	// (0x00005b98) list_single_large_graphic_pane_t1

0x9ca1,	// (0x0000c20f) list_double_pane_g1_ParamLimits

0x9ca1,	// (0x0000c20f) list_double_pane_g1

0x9cad,	// (0x0000c21b) list_double_pane_g2_ParamLimits

0x9cad,	// (0x0000c21b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00011b5a) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00011b5a) list_double_pane_g

0x9cb9,	// (0x0000c227) list_double_pane_t1_ParamLimits

0x9cb9,	// (0x0000c227) list_double_pane_t1

0x9ccf,	// (0x0000c23d) list_double_pane_t2_ParamLimits

0x9ccf,	// (0x0000c23d) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00011b5f) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00011b5f) list_double_pane_t

0x9ce1,	// (0x0000c24f) list_double2_pane_g1_ParamLimits

0x9ce1,	// (0x0000c24f) list_double2_pane_g1

0x9cf2,	// (0x0000c260) list_double2_pane_g2_ParamLimits

0x9cf2,	// (0x0000c260) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00011b64) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00011b64) list_double2_pane_g

0x9cfe,	// (0x0000c26c) list_double2_pane_t1_ParamLimits

0x9cfe,	// (0x0000c26c) list_double2_pane_t1

0x9d14,	// (0x0000c282) list_double2_pane_t2_ParamLimits

0x9d14,	// (0x0000c282) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00011b69) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00011b69) list_double2_pane_t

0x9ca1,	// (0x0000c20f) list_double_number_pane_g1_ParamLimits

0x9ca1,	// (0x0000c20f) list_double_number_pane_g1

0x9cad,	// (0x0000c21b) list_double_number_pane_g2_ParamLimits

0x9cad,	// (0x0000c21b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00011b5a) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00011b5a) list_double_number_pane_g

0x9d26,	// (0x0000c294) list_double_number_pane_t1_ParamLimits

0x9d26,	// (0x0000c294) list_double_number_pane_t1

0x9d38,	// (0x0000c2a6) list_double_number_pane_t2_ParamLimits

0x9d38,	// (0x0000c2a6) list_double_number_pane_t2

0x9d4e,	// (0x0000c2bc) list_double_number_pane_t3_ParamLimits

0x9d4e,	// (0x0000c2bc) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00011b6e) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00011b6e) list_double_number_pane_t

0xe754,	// (0x00010cc2) list_double_graphic_pane_g1_ParamLimits

0xe754,	// (0x00010cc2) list_double_graphic_pane_g1

0x9d60,	// (0x0000c2ce) list_double_graphic_pane_g2_ParamLimits

0x9d60,	// (0x0000c2ce) list_double_graphic_pane_g2

0x9d6f,	// (0x0000c2dd) list_double_graphic_pane_g3_ParamLimits

0x9d6f,	// (0x0000c2dd) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00011b75) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00011b75) list_double_graphic_pane_g

0x9d87,	// (0x0000c2f5) list_double_graphic_pane_t1_ParamLimits

0x9d87,	// (0x0000c2f5) list_double_graphic_pane_t1

0x9d9d,	// (0x0000c30b) list_double_graphic_pane_t2_ParamLimits

0x9d9d,	// (0x0000c30b) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00011b7e) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00011b7e) list_double_graphic_pane_t

0x9daf,	// (0x0000c31d) list_double2_graphic_pane_g1_ParamLimits

0x9daf,	// (0x0000c31d) list_double2_graphic_pane_g1

0x9dbb,	// (0x0000c329) list_double2_graphic_pane_g2_ParamLimits

0x9dbb,	// (0x0000c329) list_double2_graphic_pane_g2

0x9cf2,	// (0x0000c260) list_double2_graphic_pane_g3_ParamLimits

0x9cf2,	// (0x0000c260) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00011b83) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00011b83) list_double2_graphic_pane_g

0x9dc7,	// (0x0000c335) list_double2_graphic_pane_t1_ParamLimits

0x9dc7,	// (0x0000c335) list_double2_graphic_pane_t1

0x9ddd,	// (0x0000c34b) list_double2_graphic_pane_t2_ParamLimits

0x9ddd,	// (0x0000c34b) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00011b8a) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00011b8a) list_double2_graphic_pane_t

0x9def,	// (0x0000c35d) list_double_large_graphic_pane_g1_ParamLimits

0x9def,	// (0x0000c35d) list_double_large_graphic_pane_g1

0x9e1a,	// (0x0000c388) list_double_large_graphic_pane_g2_ParamLimits

0x9e1a,	// (0x0000c388) list_double_large_graphic_pane_g2

0x9cad,	// (0x0000c21b) list_double_large_graphic_pane_g3_ParamLimits

0x9cad,	// (0x0000c21b) list_double_large_graphic_pane_g3

0x9e2b,	// (0x0000c399) list_double_large_graphic_pane_g4_ParamLimits

0x9e2b,	// (0x0000c399) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00011b8f) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00011b8f) list_double_large_graphic_pane_g

0x9e3d,	// (0x0000c3ab) list_double_large_graphic_pane_t1_ParamLimits

0x9e3d,	// (0x0000c3ab) list_double_large_graphic_pane_t1

0x9e56,	// (0x0000c3c4) list_double_large_graphic_pane_t2_ParamLimits

0x9e56,	// (0x0000c3c4) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00011b9a) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00011b9a) list_double_large_graphic_pane_t

0x9e68,	// (0x0000c3d6) list_double2_large_graphic_pane_g1_ParamLimits

0x9e68,	// (0x0000c3d6) list_double2_large_graphic_pane_g1

0x9ce1,	// (0x0000c24f) list_double2_large_graphic_pane_g2_ParamLimits

0x9ce1,	// (0x0000c24f) list_double2_large_graphic_pane_g2

0x9cf2,	// (0x0000c260) list_double2_large_graphic_pane_g3_ParamLimits

0x9cf2,	// (0x0000c260) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00011b9f) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00011b9f) list_double2_large_graphic_pane_g

0x9e74,	// (0x0000c3e2) list_double2_large_graphic_pane_t1_ParamLimits

0x9e74,	// (0x0000c3e2) list_double2_large_graphic_pane_t1

0x9e8a,	// (0x0000c3f8) list_double2_large_graphic_pane_t2_ParamLimits

0x9e8a,	// (0x0000c3f8) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00011ba6) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00011ba6) list_double2_large_graphic_pane_t

0x9e9c,	// (0x0000c40a) list_double_heading_pane_g1_ParamLimits

0x9e9c,	// (0x0000c40a) list_double_heading_pane_g1

0x9ead,	// (0x0000c41b) list_double_heading_pane_g2_ParamLimits

0x9ead,	// (0x0000c41b) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00011bab) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00011bab) list_double_heading_pane_g

0x9eb9,	// (0x0000c427) list_double_heading_pane_t1_ParamLimits

0x9eb9,	// (0x0000c427) list_double_heading_pane_t1

0x9ecf,	// (0x0000c43d) list_double_heading_pane_t2_ParamLimits

0x9ecf,	// (0x0000c43d) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00011bb0) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00011bb0) list_double_heading_pane_t

0x9ee1,	// (0x0000c44f) list_double_graphic_heading_pane_g1_ParamLimits

0x9ee1,	// (0x0000c44f) list_double_graphic_heading_pane_g1

0x9e9c,	// (0x0000c40a) list_double_graphic_heading_pane_g2_ParamLimits

0x9e9c,	// (0x0000c40a) list_double_graphic_heading_pane_g2

0x9ead,	// (0x0000c41b) list_double_graphic_heading_pane_g3_ParamLimits

0x9ead,	// (0x0000c41b) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00011bb5) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00011bb5) list_double_graphic_heading_pane_g

0x9eed,	// (0x0000c45b) list_double_graphic_heading_pane_t1_ParamLimits

0x9eed,	// (0x0000c45b) list_double_graphic_heading_pane_t1

0x9f03,	// (0x0000c471) list_double_graphic_heading_pane_t2_ParamLimits

0x9f03,	// (0x0000c471) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00011bbc) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00011bbc) list_double_graphic_heading_pane_t

0x9e1a,	// (0x0000c388) list_double_time_pane_g1_ParamLimits

0x9e1a,	// (0x0000c388) list_double_time_pane_g1

0x9cad,	// (0x0000c21b) list_double_time_pane_g2_ParamLimits

0x9cad,	// (0x0000c21b) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00011bc1) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00011bc1) list_double_time_pane_g

0x9f15,	// (0x0000c483) list_double_time_pane_t1_ParamLimits

0x9f15,	// (0x0000c483) list_double_time_pane_t1

0x9f2b,	// (0x0000c499) list_double_time_pane_t2_ParamLimits

0x9f2b,	// (0x0000c499) list_double_time_pane_t2

0x9f3d,	// (0x0000c4ab) list_double_time_pane_t3_ParamLimits

0x9f3d,	// (0x0000c4ab) list_double_time_pane_t3

0x9f4f,	// (0x0000c4bd) list_double_time_pane_t4_ParamLimits

0x9f4f,	// (0x0000c4bd) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00011bc6) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00011bc6) list_double_time_pane_t

0x9dbb,	// (0x0000c329) list_setting_pane_g1_ParamLimits

0x9dbb,	// (0x0000c329) list_setting_pane_g1

0x9cf2,	// (0x0000c260) list_setting_pane_g2_ParamLimits

0x9cf2,	// (0x0000c260) list_setting_pane_g2

0x0001,

0xf661,	// (0x00011bcf) list_setting_pane_g_ParamLimits

0xf661,	// (0x00011bcf) list_setting_pane_g

0x9f61,	// (0x0000c4cf) list_setting_pane_t1_ParamLimits

0x9f61,	// (0x0000c4cf) list_setting_pane_t1

0x9f78,	// (0x0000c4e6) list_setting_pane_t2_ParamLimits

0x9f78,	// (0x0000c4e6) list_setting_pane_t2

0x0002,

0xf666,	// (0x00011bd4) list_setting_pane_t_ParamLimits

0xf666,	// (0x00011bd4) list_setting_pane_t

0x9fb7,	// (0x0000c525) set_value_pane_cp_ParamLimits

0x9fb7,	// (0x0000c525) set_value_pane_cp

0x9dbb,	// (0x0000c329) list_setting_number_pane_g1_ParamLimits

0x9dbb,	// (0x0000c329) list_setting_number_pane_g1

0x9cf2,	// (0x0000c260) list_setting_number_pane_g2_ParamLimits

0x9cf2,	// (0x0000c260) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00011bcf) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00011bcf) list_setting_number_pane_g

0x9fc5,	// (0x0000c533) list_setting_number_pane_t1_ParamLimits

0x9fc5,	// (0x0000c533) list_setting_number_pane_t1

0x9fd9,	// (0x0000c547) list_setting_number_pane_t2_ParamLimits

0x9fd9,	// (0x0000c547) list_setting_number_pane_t2

0x9ff0,	// (0x0000c55e) list_setting_number_pane_t3_ParamLimits

0x9ff0,	// (0x0000c55e) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00011bdb) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00011bdb) list_setting_number_pane_t

0x9fb7,	// (0x0000c525) set_value_pane_ParamLimits

0x9fb7,	// (0x0000c525) set_value_pane

0xe775,	// (0x00010ce3) bg_set_opt_pane_ParamLimits

0xe775,	// (0x00010ce3) bg_set_opt_pane

0xe796,	// (0x00010d04) set_value_pane_t1

0xe7a4,	// (0x00010d12) slider_set_pane_cp3

0xe7ad,	// (0x00010d1b) volume_small_pane_cp

0xe7b6,	// (0x00010d24) list_form_gen_pane

0xe7bf,	// (0x00010d2d) scroll_pane_cp8

0xa033,	// (0x0000c5a1) form_field_data_pane_ParamLimits

0xa033,	// (0x0000c5a1) form_field_data_pane

0xa04e,	// (0x0000c5bc) form_field_data_wide_pane_ParamLimits

0xa04e,	// (0x0000c5bc) form_field_data_wide_pane

0xa072,	// (0x0000c5e0) form_field_popup_pane_ParamLimits

0xa072,	// (0x0000c5e0) form_field_popup_pane

0xe7e0,	// (0x00010d4e) form_field_popup_wide_pane_ParamLimits

0xe7e0,	// (0x00010d4e) form_field_popup_wide_pane

0xe801,	// (0x00010d6f) form_field_slider_pane_ParamLimits

0xe801,	// (0x00010d6f) form_field_slider_pane

0xe814,	// (0x00010d82) form_field_slider_wide_pane_ParamLimits

0xe814,	// (0x00010d82) form_field_slider_wide_pane

0xe827,	// (0x00010d95) data_form_pane

0xa09e,	// (0x0000c60c) form_field_data_pane_t1

0xe833,	// (0x00010da1) input_focus_pane

0xe841,	// (0x00010daf) data_form_wide_pane

0xe87e,	// (0x00010dec) form_field_data_wide_pane_t1

0xe510,	// (0x00010a7e) input_focus_pane_cp6

0xa0b8,	// (0x0000c626) form_field_popup_pane_t1

0xe833,	// (0x00010da1) input_focus_pane_cp7

0xe8a0,	// (0x00010e0e) list_form_pane

0xe8b4,	// (0x00010e22) form_field_popup_wide_pane_t1

0xe833,	// (0x00010da1) input_focus_pane_cp8

0xe8c9,	// (0x00010e37) list_form_wide_pane

0xa0da,	// (0x0000c648) form_field_slider_pane_t1_ParamLimits

0xa0da,	// (0x0000c648) form_field_slider_pane_t1

0xa0f2,	// (0x0000c660) form_field_slider_pane_t2_ParamLimits

0xa0f2,	// (0x0000c660) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00011beb) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00011beb) form_field_slider_pane_t

0xe0c5,	// (0x00010633) input_focus_pane_cp9_ParamLimits

0xe0c5,	// (0x00010633) input_focus_pane_cp9

0xa107,	// (0x0000c675) slider_cont_pane_ParamLimits

0xa107,	// (0x0000c675) slider_cont_pane

0xe8d8,	// (0x00010e46) form_field_slider_wide_pane_t1_ParamLimits

0xe8d8,	// (0x00010e46) form_field_slider_wide_pane_t1

0xe8ea,	// (0x00010e58) form_field_slider_wide_pane_t2_ParamLimits

0xe8ea,	// (0x00010e58) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00011bf0) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00011bf0) form_field_slider_wide_pane_t

0xe0c5,	// (0x00010633) input_focus_pane_cp10_ParamLimits

0xe0c5,	// (0x00010633) input_focus_pane_cp10

0xa11b,	// (0x0000c689) slider_cont_pane_cp1_ParamLimits

0xa11b,	// (0x0000c689) slider_cont_pane_cp1

0xa12f,	// (0x0000c69d) slider_form_pane_cp

0xe8fc,	// (0x00010e6a) input_focus_pane_g1

0xe904,	// (0x00010e72) input_focus_pane_g2

0xe90c,	// (0x00010e7a) input_focus_pane_g3

0xe914,	// (0x00010e82) input_focus_pane_g4

0xe91c,	// (0x00010e8a) input_focus_pane_g5

0xe924,	// (0x00010e92) input_focus_pane_g6

0xe92c,	// (0x00010e9a) input_focus_pane_g7

0xe934,	// (0x00010ea2) input_focus_pane_g8

0xe93c,	// (0x00010eaa) input_focus_pane_g9

0xde9e,	// (0x0001040c) input_focus_pane_g10

0x0009,

0xf687,	// (0x00011bf5) input_focus_pane_g

0x1a19,	// (0x00003f87) wait_border_pane_g3_copy1

0xa137,	// (0x0000c6a5) data_form_pane_t1

0xde9e,	// (0x0001040c) wait_anim_pane_g1_copy1

0xbab7,	// (0x0000e025) data_form_wide_pane_t1

0xe944,	// (0x00010eb2) list_form_graphic_pane_cp_ParamLimits

0xe944,	// (0x00010eb2) list_form_graphic_pane_cp

0x2be8,	// (0x00005156) slider_form_pane_g1

0x2bf1,	// (0x0000515f) slider_form_pane_g2

0x0006,

0xf97e,	// (0x00011eec) slider_form_pane_g

0xa153,	// (0x0000c6c1) list_form_graphic_pane_ParamLimits

0xa153,	// (0x0000c6c1) list_form_graphic_pane

0xe956,	// (0x00010ec4) list_form_graphic_pane_g1

0xe95e,	// (0x00010ecc) list_form_graphic_pane_t1_ParamLimits

0xe95e,	// (0x00010ecc) list_form_graphic_pane_t1

0xe0dd,	// (0x0001064b) list_highlight_pane_cp5_ParamLimits

0xe0dd,	// (0x0001064b) list_highlight_pane_cp5

0xa164,	// (0x0000c6d2) find_pane_g1

0xe973,	// (0x00010ee1) input_find_pane

0xa16d,	// (0x0000c6db) input_find_pane_g1_ParamLimits

0xa16d,	// (0x0000c6db) input_find_pane_g1

0xa179,	// (0x0000c6e7) input_find_pane_t1_ParamLimits

0xa179,	// (0x0000c6e7) input_find_pane_t1

0xa18e,	// (0x0000c6fc) input_find_pane_t2_ParamLimits

0xa18e,	// (0x0000c6fc) input_find_pane_t2

0x0001,

0xf69c,	// (0x00011c0a) input_find_pane_t_ParamLimits

0xf69c,	// (0x00011c0a) input_find_pane_t

0xe97c,	// (0x00010eea) input_focus_pane_cp5_ParamLimits

0xe97c,	// (0x00010eea) input_focus_pane_cp5

0xe98a,	// (0x00010ef8) bg_popup_window_pane_cp2_ParamLimits

0xe98a,	// (0x00010ef8) bg_popup_window_pane_cp2

0xe997,	// (0x00010f05) listscroll_menu_pane_ParamLimits

0xe997,	// (0x00010f05) listscroll_menu_pane

0xa1af,	// (0x0000c71d) popup_submenu_window_ParamLimits

0xa1af,	// (0x0000c71d) popup_submenu_window

0xe9a3,	// (0x00010f11) find_popup_pane_g1

0xe9ab,	// (0x00010f19) input_popup_find_pane_cp

0xe97c,	// (0x00010eea) input_focus_pane_cp4_ParamLimits

0xe97c,	// (0x00010eea) input_focus_pane_cp4

0xe9b5,	// (0x00010f23) input_popup_find_pane_t1_ParamLimits

0xe9b5,	// (0x00010f23) input_popup_find_pane_t1

0xe017,	// (0x00010585) bg_popup_sub_pane_cp

0xe9e3,	// (0x00010f51) listscroll_popup_sub_pane

0xe9eb,	// (0x00010f59) list_submenu_pane_ParamLimits

0xe9eb,	// (0x00010f59) list_submenu_pane

0xe9fc,	// (0x00010f6a) scroll_pane_cp4

0xea04,	// (0x00010f72) list_single_popup_submenu_pane_ParamLimits

0xea04,	// (0x00010f72) list_single_popup_submenu_pane

0xea19,	// (0x00010f87) list_single_popup_submenu_pane_g1

0xea21,	// (0x00010f8f) list_single_popup_submenu_pane_t1_ParamLimits

0xea21,	// (0x00010f8f) list_single_popup_submenu_pane_t1

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp1_ParamLimits

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp1

0xa1ed,	// (0x0000c75b) tabs_2_active_pane_g1

0xa1f5,	// (0x0000c763) tabs_2_active_pane_t1

0xe0c5,	// (0x00010633) bg_passive_tab_pane_cp1_ParamLimits

0xe0c5,	// (0x00010633) bg_passive_tab_pane_cp1

0xa1ed,	// (0x0000c75b) tabs_2_passive_pane_g1

0xa1f5,	// (0x0000c763) tabs_2_passive_pane_t1

0xe0dd,	// (0x0001064b) bg_active_tab_pane_cp4

0xa207,	// (0x0000c775) tabs_2_long_active_pane_t1

0x065e,	// (0x00002bcc) bg_passive_tab_pane_cp4

0x12ba,	// (0x00003828) list_single_midp_graphic_pane_g4_ParamLimits

0xe0dd,	// (0x0001064b) bg_active_tab_pane_cp5

0xa21a,	// (0x0000c788) tabs_3_long_active_pane_t1

0x065e,	// (0x00002bcc) bg_passive_tab_pane_cp5

0x12ba,	// (0x00003828) list_single_midp_graphic_pane_g4

0xe0dd,	// (0x0001064b) bg_popup_window_pane_cp13_ParamLimits

0xe0dd,	// (0x0001064b) bg_popup_window_pane_cp13

0xea3f,	// (0x00010fad) listscroll_popup_fast_pane_ParamLimits

0xea3f,	// (0x00010fad) listscroll_popup_fast_pane

0xea68,	// (0x00010fd6) grid_popup_fast_pane_ParamLimits

0xea68,	// (0x00010fd6) grid_popup_fast_pane

0xea7a,	// (0x00010fe8) scroll_pane_cp9_ParamLimits

0xea7a,	// (0x00010fe8) scroll_pane_cp9

0x4f95,	// (0x00007503) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f95,	// (0x00007503) list_single_graphic_hl_pane_t1_cp2

0xea9e,	// (0x0001100c) input_focus_pane_cp20_ParamLimits

0xea9e,	// (0x0001100c) input_focus_pane_cp20

0xeaac,	// (0x0001101a) query_popup_data_pane_t1_ParamLimits

0xeaac,	// (0x0001101a) query_popup_data_pane_t1

0xeabf,	// (0x0001102d) query_popup_data_pane_t2_ParamLimits

0xeabf,	// (0x0001102d) query_popup_data_pane_t2

0xeb05,	// (0x00011073) query_popup_data_pane_t3_ParamLimits

0xeb05,	// (0x00011073) query_popup_data_pane_t3

0xeb46,	// (0x000110b4) query_popup_data_pane_t4_ParamLimits

0xeb46,	// (0x000110b4) query_popup_data_pane_t4

0xeb82,	// (0x000110f0) query_popup_data_pane_t5_ParamLimits

0xeb82,	// (0x000110f0) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00011c0f) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00011c0f) query_popup_data_pane_t

0xe8fc,	// (0x00010e6a) bg_set_opt_pane_g1

0xe904,	// (0x00010e72) bg_set_opt_pane_g2

0xe90c,	// (0x00010e7a) bg_set_opt_pane_g3

0xe914,	// (0x00010e82) bg_set_opt_pane_g4

0xe91c,	// (0x00010e8a) bg_set_opt_pane_g5

0xe924,	// (0x00010e92) bg_set_opt_pane_g6

0xe92c,	// (0x00010e9a) bg_set_opt_pane_g7

0xe934,	// (0x00010ea2) bg_set_opt_pane_g8

0xe93c,	// (0x00010eaa) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00011c1a) bg_set_opt_pane_g

0xf233,	// (0x000117a1) control_top_pane_stacon_ParamLimits

0xf233,	// (0x000117a1) control_top_pane_stacon

0xf286,	// (0x000117f4) signal_pane_stacon_ParamLimits

0xf286,	// (0x000117f4) signal_pane_stacon

0xf2ab,	// (0x00011819) stacon_top_pane_g1_ParamLimits

0xf2ab,	// (0x00011819) stacon_top_pane_g1

0xf2cd,	// (0x0001183b) title_pane_stacon_ParamLimits

0xf2cd,	// (0x0001183b) title_pane_stacon

0xf2f7,	// (0x00011865) uni_indicator_pane_stacon_ParamLimits

0xf2f7,	// (0x00011865) uni_indicator_pane_stacon

0xf30f,	// (0x0001187d) battery_pane_stacon_ParamLimits

0xf30f,	// (0x0001187d) battery_pane_stacon

0xf353,	// (0x000118c1) control_bottom_pane_stacon_ParamLimits

0xf353,	// (0x000118c1) control_bottom_pane_stacon

0xf376,	// (0x000118e4) navi_pane_stacon_ParamLimits

0xf376,	// (0x000118e4) navi_pane_stacon

0xf399,	// (0x00011907) stacon_bottom_pane_g1_ParamLimits

0xf399,	// (0x00011907) stacon_bottom_pane_g1

0xebb9,	// (0x00011127) aid_levels_signal_lsc_ParamLimits

0xebb9,	// (0x00011127) aid_levels_signal_lsc

0xebd0,	// (0x0001113e) signal_pane_stacon_g1_ParamLimits

0xebd0,	// (0x0001113e) signal_pane_stacon_g1

0xebe4,	// (0x00011152) signal_pane_stacon_g2_ParamLimits

0xebe4,	// (0x00011152) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00011c2d) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00011c2d) signal_pane_stacon_g

0xec26,	// (0x00011194) title_pane_stacon_t1_ParamLimits

0xec26,	// (0x00011194) title_pane_stacon_t1

0xec4b,	// (0x000111b9) uni_indicator_pane_stacon_g1

0xec55,	// (0x000111c3) uni_indicator_pane_stacon_g2

0xec5f,	// (0x000111cd) uni_indicator_pane_stacon_g3

0xec69,	// (0x000111d7) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00011c39) uni_indicator_pane_stacon_g

0xec73,	// (0x000111e1) control_top_pane_stacon_g1

0xec7b,	// (0x000111e9) control_top_pane_stacon_t1_ParamLimits

0xec7b,	// (0x000111e9) control_top_pane_stacon_t1

0xecb2,	// (0x00011220) aid_levels_battery_lsc_ParamLimits

0xecb2,	// (0x00011220) aid_levels_battery_lsc

0xecca,	// (0x00011238) battery_pane_stacon_g1_ParamLimits

0xecca,	// (0x00011238) battery_pane_stacon_g1

0xecdd,	// (0x0001124b) battery_pane_stacon_g2_ParamLimits

0xecdd,	// (0x0001124b) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00011c42) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00011c42) battery_pane_stacon_g

0xed1b,	// (0x00011289) navi_icon_pane_stacon

0xed2f,	// (0x0001129d) navi_navi_pane_stacon

0xed1b,	// (0x00011289) navi_text_pane_stacon

0xec73,	// (0x000111e1) control_bottom_pane_stacon_g1

0xed45,	// (0x000112b3) control_bottom_pane_stacon_t1_ParamLimits

0xed45,	// (0x000112b3) control_bottom_pane_stacon_t1

0xa22c,	// (0x0000c79a) grid_app_pane_ParamLimits

0xa22c,	// (0x0000c79a) grid_app_pane

0xa264,	// (0x0000c7d2) scroll_pane_cp15_ParamLimits

0xa264,	// (0x0000c7d2) scroll_pane_cp15

0xa279,	// (0x0000c7e7) cell_app_pane_ParamLimits

0xa279,	// (0x0000c7e7) cell_app_pane

0xa2c6,	// (0x0000c834) cell_app_pane_g1_ParamLimits

0xa2c6,	// (0x0000c834) cell_app_pane_g1

0xed96,	// (0x00011304) cell_app_pane_g2_ParamLimits

0xed96,	// (0x00011304) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00011c47) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00011c47) cell_app_pane_g

0xeda2,	// (0x00011310) cell_app_pane_t1_ParamLimits

0xeda2,	// (0x00011310) cell_app_pane_t1

0xedb9,	// (0x00011327) grid_highlight_pane_ParamLimits

0xedb9,	// (0x00011327) grid_highlight_pane

0xe8fc,	// (0x00010e6a) cell_highlight_pane_g1

0xe904,	// (0x00010e72) cell_highlight_pane_g2

0xe90c,	// (0x00010e7a) cell_highlight_pane_g3

0xe914,	// (0x00010e82) cell_highlight_pane_g4

0xe91c,	// (0x00010e8a) cell_highlight_pane_g5

0xe924,	// (0x00010e92) cell_highlight_pane_g6

0xe92c,	// (0x00010e9a) cell_highlight_pane_g7

0xe934,	// (0x00010ea2) cell_highlight_pane_g8

0xe93c,	// (0x00010eaa) cell_highlight_pane_g9

0xde9e,	// (0x0001040c) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00011bf5) cell_highlight_pane_g

0xedd4,	// (0x00011342) bg_scroll_pane

0xedf3,	// (0x00011361) scroll_handle_pane

0xee44,	// (0x000113b2) scroll_bg_pane_g1

0xee59,	// (0x000113c7) scroll_bg_pane_g2

0xee71,	// (0x000113df) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00011c4c) scroll_bg_pane_g

0xee86,	// (0x000113f4) scroll_handle_focus_pane_ParamLimits

0xee86,	// (0x000113f4) scroll_handle_focus_pane

0xee44,	// (0x000113b2) scroll_handle_pane_g1

0xee93,	// (0x00011401) scroll_handle_pane_g2

0xee71,	// (0x000113df) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00011c53) scroll_handle_pane_g

0xe97c,	// (0x00010eea) bg_popup_sub_pane_cp21_ParamLimits

0xe97c,	// (0x00010eea) bg_popup_sub_pane_cp21

0xeea7,	// (0x00011415) popup_fep_japan_predictive_window_t1_ParamLimits

0xeea7,	// (0x00011415) popup_fep_japan_predictive_window_t1

0xeebe,	// (0x0001142c) popup_fep_japan_predictive_window_t2_ParamLimits

0xeebe,	// (0x0001142c) popup_fep_japan_predictive_window_t2

0xeef1,	// (0x0001145f) popup_fep_japan_predictive_window_t3_ParamLimits

0xeef1,	// (0x0001145f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00011c5a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00011c5a) popup_fep_japan_predictive_window_t

0xe017,	// (0x00010585) bg_popup_sub_pane_cp23

0xef28,	// (0x00011496) listscroll_japin_cand_pane

0xef30,	// (0x0001149e) popup_fep_japan_candidate_window_t1

0xef3e,	// (0x000114ac) candidate_pane_ParamLimits

0xef3e,	// (0x000114ac) candidate_pane

0xef50,	// (0x000114be) scroll_pane_cp30

0xef5a,	// (0x000114c8) list_single_popup_jap_candidate_pane_ParamLimits

0xef5a,	// (0x000114c8) list_single_popup_jap_candidate_pane

0xe017,	// (0x00010585) list_highlight_pane_cp30

0xef6e,	// (0x000114dc) list_single_popup_jap_candidate_pane_t1

0xa2ef,	// (0x0000c85d) level_1_signal

0xa301,	// (0x0000c86f) level_2_signal

0xa314,	// (0x0000c882) level_3_signal

0xa327,	// (0x0000c895) level_4_signal

0xa33a,	// (0x0000c8a8) level_5_signal

0xa34d,	// (0x0000c8bb) level_6_signal

0xa360,	// (0x0000c8ce) level_7_signal

0xa2ef,	// (0x0000c85d) level_1_battery

0xa301,	// (0x0000c86f) level_2_battery

0xa314,	// (0x0000c882) level_3_battery

0xa327,	// (0x0000c895) level_4_battery

0xa33a,	// (0x0000c8a8) level_5_battery

0xa34d,	// (0x0000c8bb) level_6_battery

0xa360,	// (0x0000c8ce) level_7_battery

0xefb4,	// (0x00011522) list_menu_pane_ParamLimits

0xefb4,	// (0x00011522) list_menu_pane

0xefca,	// (0x00011538) scroll_pane_cp25_ParamLimits

0xefca,	// (0x00011538) scroll_pane_cp25

0xefe3,	// (0x00011551) list_double2_graphic_pane_cp2_ParamLimits

0xefe3,	// (0x00011551) list_double2_graphic_pane_cp2

0xefe3,	// (0x00011551) list_double2_large_graphic_pane_cp2_ParamLimits

0xefe3,	// (0x00011551) list_double2_large_graphic_pane_cp2

0xefe3,	// (0x00011551) list_double2_pane_cp2_ParamLimits

0xefe3,	// (0x00011551) list_double2_pane_cp2

0xefe3,	// (0x00011551) list_double_graphic_pane_cp2_ParamLimits

0xefe3,	// (0x00011551) list_double_graphic_pane_cp2

0xefe3,	// (0x00011551) list_double_large_graphic_pane_cp2_ParamLimits

0xefe3,	// (0x00011551) list_double_large_graphic_pane_cp2

0xefe3,	// (0x00011551) list_double_number_pane_cp2_ParamLimits

0xefe3,	// (0x00011551) list_double_number_pane_cp2

0xefe3,	// (0x00011551) list_double_pane_cp2_ParamLimits

0xefe3,	// (0x00011551) list_double_pane_cp2

0xa386,	// (0x0000c8f4) list_single_2graphic_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f4) list_single_2graphic_pane_cp2

0xa386,	// (0x0000c8f4) list_single_graphic_heading_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f4) list_single_graphic_heading_pane_cp2

0xa386,	// (0x0000c8f4) list_single_graphic_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f4) list_single_graphic_pane_cp2

0xa386,	// (0x0000c8f4) list_single_heading_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f4) list_single_heading_pane_cp2

0xeff3,	// (0x00011561) list_single_large_graphic_pane_cp2_ParamLimits

0xeff3,	// (0x00011561) list_single_large_graphic_pane_cp2

0xa386,	// (0x0000c8f4) list_single_number_heading_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f4) list_single_number_heading_pane_cp2

0xa386,	// (0x0000c8f4) list_single_number_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f4) list_single_number_pane_cp2

0xa386,	// (0x0000c8f4) list_single_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f4) list_single_pane_cp2

0xf067,	// (0x000115d5) bg_popup_sub_pane_cp22

0xf08c,	// (0x000115fa) popup_side_volume_key_window_g1

0xf0b6,	// (0x00011624) popup_side_volume_key_window_t1

0xf0d4,	// (0x00011642) volume_small_pane_cp1

0xe0c5,	// (0x00010633) bg_popup_sub_pane_cp24_ParamLimits

0xe0c5,	// (0x00010633) bg_popup_sub_pane_cp24

0xf0dc,	// (0x0001164a) fep_china_uni_candidate_pane_ParamLimits

0xf0dc,	// (0x0001164a) fep_china_uni_candidate_pane

0xf0f0,	// (0x0001165e) fep_china_uni_entry_pane

0xf100,	// (0x0001166e) popup_fep_china_uni_window_g1

0xf11c,	// (0x0001168a) fep_china_uni_entry_pane_g1

0xf126,	// (0x00011694) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00011c8b) fep_china_uni_entry_pane_g

0xf130,	// (0x0001169e) fep_entry_item_pane

0xf13a,	// (0x000116a8) fep_candidate_item_pane

0xf142,	// (0x000116b0) fep_china_uni_candidate_pane_g1

0xf14c,	// (0x000116ba) fep_china_uni_candidate_pane_g2

0xf154,	// (0x000116c2) fep_china_uni_candidate_pane_g3

0xf15c,	// (0x000116ca) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00011c90) fep_china_uni_candidate_pane_g

0xde9e,	// (0x0001040c) fep_entry_item_pane_g1

0xf166,	// (0x000116d4) fep_entry_item_pane_t1_ParamLimits

0xf166,	// (0x000116d4) fep_entry_item_pane_t1

0xf17c,	// (0x000116ea) fep_candidate_item_pane_t1_ParamLimits

0xf17c,	// (0x000116ea) fep_candidate_item_pane_t1

0xf191,	// (0x000116ff) fep_candidate_item_pane_t2_ParamLimits

0xf191,	// (0x000116ff) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00011c99) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00011c99) fep_candidate_item_pane_t

0xe0dd,	// (0x0001064b) list_highlight_pane_cp31_ParamLimits

0xe0dd,	// (0x0001064b) list_highlight_pane_cp31

0xf1a3,	// (0x00011711) level_1_signal_lsc

0xf1ac,	// (0x0001171a) level_2_signal_lsc

0xf1b5,	// (0x00011723) level_3_signal_lsc

0xf1be,	// (0x0001172c) level_4_signal_lsc

0xf1c7,	// (0x00011735) level_5_signal_lsc

0xf1d0,	// (0x0001173e) level_6_signal_lsc

0xf1d9,	// (0x00011747) level_7_signal_lsc

0xf1d9,	// (0x00011747) level_1_battery_lsc

0xf1e2,	// (0x00011750) level_2_battery_lsc

0xf1eb,	// (0x00011759) level_3_battery_lsc

0xf1f4,	// (0x00011762) level_4_battery_lsc

0xf1fd,	// (0x0001176b) level_5_battery_lsc

0xf206,	// (0x00011774) level_6_battery_lsc

0xf1a3,	// (0x00011711) level_7_battery_lsc

0xf20f,	// (0x0001177d) scroll_handle_focus_pane_g1

0xf218,	// (0x00011786) scroll_handle_focus_pane_g2

0xf221,	// (0x0001178f) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00011c9e) scroll_handle_focus_pane_g

0xa418,	// (0x0000c986) list_single_2graphic_pane_g1_ParamLimits

0xa418,	// (0x0000c986) list_single_2graphic_pane_g1

0x9c76,	// (0x0000c1e4) list_single_2graphic_pane_g2_ParamLimits

0x9c76,	// (0x0000c1e4) list_single_2graphic_pane_g2

0x10f1,	// (0x0000365f) list_single_2graphic_pane_g3_ParamLimits

0x10f1,	// (0x0000365f) list_single_2graphic_pane_g3

0xa424,	// (0x0000c992) list_single_2graphic_pane_g4_ParamLimits

0xa424,	// (0x0000c992) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00011ca5) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00011ca5) list_single_2graphic_pane_g

0xa435,	// (0x0000c9a3) list_single_2graphic_pane_t1_ParamLimits

0xa435,	// (0x0000c9a3) list_single_2graphic_pane_t1

0xa463,	// (0x0000c9d1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa463,	// (0x0000c9d1) list_double2_graphic_large_graphic_pane_g1

0x9ce1,	// (0x0000c24f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9ce1,	// (0x0000c24f) list_double2_graphic_large_graphic_pane_g2

0x9cf2,	// (0x0000c260) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9cf2,	// (0x0000c260) list_double2_graphic_large_graphic_pane_g3

0xa475,	// (0x0000c9e3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa475,	// (0x0000c9e3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00011cae) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00011cae) list_double2_graphic_large_graphic_pane_g

0xa481,	// (0x0000c9ef) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa481,	// (0x0000c9ef) list_double2_graphic_large_graphic_pane_t1

0xa497,	// (0x0000ca05) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa497,	// (0x0000ca05) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00011cb7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00011cb7) list_double2_graphic_large_graphic_pane_t

0xf3f7,	// (0x00011965) popup_fast_swap_window_ParamLimits

0xf3f7,	// (0x00011965) popup_fast_swap_window

0xf415,	// (0x00011983) popup_side_volume_key_window

0xf433,	// (0x000119a1) stacon_top_pane

0xf43d,	// (0x000119ab) status_pane_ParamLimits

0xf43d,	// (0x000119ab) status_pane

0xa540,	// (0x0000caae) status_small_pane

0xe017,	// (0x00010585) control_pane

0xe017,	// (0x00010585) stacon_bottom_pane

0xe7bf,	// (0x00010d2d) scroll_pane_cp121

0xe7b6,	// (0x00010d24) set_content_pane

0xa4a9,	// (0x0000ca17) bg_active_tab_pane_g1_cp1

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp1

0xa4b2,	// (0x0000ca20) bg_active_tab_pane_g3_cp1

0xa4a9,	// (0x0000ca17) bg_passive_tab_pane_g1_cp1

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp1

0xa4b2,	// (0x0000ca20) bg_passive_tab_pane_g3_cp1

0xa4bb,	// (0x0000ca29) bg_active_tab_pane_g1_cp2

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp2

0xa4c4,	// (0x0000ca32) bg_active_tab_pane_g3_cp2

0xa4bb,	// (0x0000ca29) bg_passive_tab_pane_g1_cp2

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp2

0xa4c4,	// (0x0000ca32) bg_passive_tab_pane_g3_cp2

0xa4cd,	// (0x0000ca3b) bg_active_tab_pane_g1_cp3

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp3

0xa4d6,	// (0x0000ca44) bg_active_tab_pane_g3_cp3

0xa4cd,	// (0x0000ca3b) bg_passive_tab_pane_g1_cp3

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp3

0xa4d6,	// (0x0000ca44) bg_passive_tab_pane_g3_cp3

0xa4df,	// (0x0000ca4d) bg_active_tab_pane_g1_cp4

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp4

0xa4e8,	// (0x0000ca56) bg_active_tab_pane_g3_cp4

0xa4df,	// (0x0000ca4d) bg_passive_tab_pane_g1_cp4

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp4

0xa4e8,	// (0x0000ca56) bg_passive_tab_pane_g3_cp4

0xf3b5,	// (0x00011923) bg_active_tab_pane_g1_cp5

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp5

0xf3be,	// (0x0001192c) bg_active_tab_pane_g3_cp5

0xf3b5,	// (0x00011923) bg_passive_tab_pane_g1_cp5

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp5

0xf3be,	// (0x0001192c) bg_passive_tab_pane_g3_cp5

0x3396,	// (0x00005904) list_set_graphic_pane_ParamLimits

0x3396,	// (0x00005904) list_set_graphic_pane

0xe017,	// (0x00010585) bg_set_opt_pane_cp4

0xa4f1,	// (0x0000ca5f) list_set_graphic_pane_g1_ParamLimits

0xa4f1,	// (0x0000ca5f) list_set_graphic_pane_g1

0xa4fd,	// (0x0000ca6b) list_set_graphic_pane_g2_ParamLimits

0xa4fd,	// (0x0000ca6b) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00011cbc) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00011cbc) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0001203f) volume_small_pane_cp_g

0xa521,	// (0x0000ca8f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa521,	// (0x0000ca8f) list_double2_large_graphic_pane_g1_cp2

0xa52f,	// (0x0000ca9d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa52f,	// (0x0000ca9d) list_double2_large_graphic_pane_g2_cp2

0xf3c7,	// (0x00011935) list_double2_large_graphic_pane_g3_cp2

0xf3cf,	// (0x0001193d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf3cf,	// (0x0001193d) list_double2_large_graphic_pane_t1_cp2

0xf3e5,	// (0x00011953) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf3e5,	// (0x00011953) list_double2_large_graphic_pane_t2_cp2

0xb840,	// (0x0000ddae) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb840,	// (0x0000ddae) list_double_large_graphic_pane_g1_cp2

0xb853,	// (0x0000ddc1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb853,	// (0x0000ddc1) list_double_large_graphic_pane_g2_cp2

0xf51e,	// (0x00011a8c) list_double_large_graphic_pane_g3_cp2

0x268d,	// (0x00004bfb) list_double_large_graphic_pane_g4_cp

0x2695,	// (0x00004c03) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2695,	// (0x00004c03) list_double_large_graphic_pane_t1_cp2

0x26ac,	// (0x00004c1a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x26ac,	// (0x00004c1a) list_double_large_graphic_pane_t2_cp2

0xa54b,	// (0x0000cab9) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa54b,	// (0x0000cab9) list_double2_graphic_pane_g1_cp2

0xa559,	// (0x0000cac7) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa559,	// (0x0000cac7) list_double2_graphic_pane_g2_cp2

0xa56a,	// (0x0000cad8) list_double2_graphic_pane_g3_cp2

0xf44b,	// (0x000119b9) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf44b,	// (0x000119b9) list_double2_graphic_pane_t1_cp2

0xf461,	// (0x000119cf) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf461,	// (0x000119cf) list_double2_graphic_pane_t2_cp2

0xf473,	// (0x000119e1) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf473,	// (0x000119e1) list_single_number_heading_pane_g1_cp2

0xf47f,	// (0x000119ed) list_single_number_heading_pane_g2_cp2

0xf487,	// (0x000119f5) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf487,	// (0x000119f5) list_single_number_heading_pane_t1_cp2

0xa574,	// (0x0000cae2) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa574,	// (0x0000cae2) list_single_number_heading_pane_t2_cp2

0xf49d,	// (0x00011a0b) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf49d,	// (0x00011a0b) list_single_number_heading_pane_t3_cp2

0xf473,	// (0x000119e1) list_single_heading_pane_g1_cp2_ParamLimits

0xf473,	// (0x000119e1) list_single_heading_pane_g1_cp2

0xf47f,	// (0x000119ed) list_single_heading_pane_g2_cp2

0xf487,	// (0x000119f5) list_single_heading_pane_t1_cp2_ParamLimits

0xf487,	// (0x000119f5) list_single_heading_pane_t1_cp2

0xb82c,	// (0x0000dd9a) list_single_heading_pane_t2_cp2_ParamLimits

0xb82c,	// (0x0000dd9a) list_single_heading_pane_t2_cp2

0x23ab,	// (0x00004919) list_double_graphic_pane_g1_cp2_ParamLimits

0x23ab,	// (0x00004919) list_double_graphic_pane_g1_cp2

0x23b7,	// (0x00004925) list_double_graphic_pane_g2_cp2_ParamLimits

0x23b7,	// (0x00004925) list_double_graphic_pane_g2_cp2

0x23c6,	// (0x00004934) list_double_graphic_pane_g3_cp2

0x23ce,	// (0x0000493c) list_double_graphic_pane_t1_cp2_ParamLimits

0x23ce,	// (0x0000493c) list_double_graphic_pane_t1_cp2

0x23e4,	// (0x00004952) list_double_graphic_pane_t2_cp2_ParamLimits

0x23e4,	// (0x00004952) list_double_graphic_pane_t2_cp2

0xf512,	// (0x00011a80) list_double_number_pane_g1_cp2_ParamLimits

0xf512,	// (0x00011a80) list_double_number_pane_g1_cp2

0xf51e,	// (0x00011a8c) list_double_number_pane_g2_cp2

0xb7c6,	// (0x0000dd34) list_double_number_pane_t1_cp2_ParamLimits

0xb7c6,	// (0x0000dd34) list_double_number_pane_t1_cp2

0x2383,	// (0x000048f1) list_double_number_pane_t2_cp2_ParamLimits

0x2383,	// (0x000048f1) list_double_number_pane_t2_cp2

0x2399,	// (0x00004907) list_double_number_pane_t3_cp2_ParamLimits

0x2399,	// (0x00004907) list_double_number_pane_t3_cp2

0xb703,	// (0x0000dc71) list_single_graphic_pane_g1_cp2_ParamLimits

0xb703,	// (0x0000dc71) list_single_graphic_pane_g1_cp2

0x001c,	// (0x0000258a) list_single_graphic_pane_g2_cp2_ParamLimits

0x001c,	// (0x0000258a) list_single_graphic_pane_g2_cp2

0x0028,	// (0x00002596) list_single_graphic_pane_g3_cp2

0x221d,	// (0x0000478b) list_single_graphic_pane_t1_cp2_ParamLimits

0x221d,	// (0x0000478b) list_single_graphic_pane_t1_cp2

0x001c,	// (0x0000258a) list_single_number_pane_g1_cp2_ParamLimits

0x001c,	// (0x0000258a) list_single_number_pane_g1_cp2

0x0028,	// (0x00002596) list_single_number_pane_g2_cp2

0x221d,	// (0x0000478b) list_single_number_pane_t1_cp2_ParamLimits

0x221d,	// (0x0000478b) list_single_number_pane_t1_cp2

0xb6ef,	// (0x0000dc5d) list_single_number_pane_t2_cp2_ParamLimits

0xb6ef,	// (0x0000dc5d) list_single_number_pane_t2_cp2

0xa52f,	// (0x0000ca9d) list_double2_pane_g1_cp2_ParamLimits

0xa52f,	// (0x0000ca9d) list_double2_pane_g1_cp2

0xf3c7,	// (0x00011935) list_double2_pane_g2_cp2

0xf4ea,	// (0x00011a58) list_double2_pane_t1_cp2_ParamLimits

0xf4ea,	// (0x00011a58) list_double2_pane_t1_cp2

0xf500,	// (0x00011a6e) list_double2_pane_t2_cp2_ParamLimits

0xf500,	// (0x00011a6e) list_double2_pane_t2_cp2

0xf512,	// (0x00011a80) list_double_pane_g1_cp2_ParamLimits

0xf512,	// (0x00011a80) list_double_pane_g1_cp2

0xf51e,	// (0x00011a8c) list_double_pane_g2_cp2

0xf526,	// (0x00011a94) list_double_pane_t1_cp2_ParamLimits

0xf526,	// (0x00011a94) list_double_pane_t1_cp2

0xf53c,	// (0x00011aaa) list_double_pane_t2_cp2_ParamLimits

0xf53c,	// (0x00011aaa) list_double_pane_t2_cp2

0x000c,	// (0x0000257a) list_single_pane_cp2_g3

0x001c,	// (0x0000258a) list_single_pane_g1_cp2_ParamLimits

0x001c,	// (0x0000258a) list_single_pane_g1_cp2

0x0028,	// (0x00002596) list_single_pane_g2_cp2

0x0030,	// (0x0000259e) list_single_pane_t1_cp2_ParamLimits

0x0030,	// (0x0000259e) list_single_pane_t1_cp2

0xa5a2,	// (0x0000cb10) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa5a2,	// (0x0000cb10) list_single_large_graphic_pane_g1_cp2

0x0056,	// (0x000025c4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0056,	// (0x000025c4) list_single_large_graphic_pane_g2_cp2

0x0062,	// (0x000025d0) list_single_large_graphic_pane_g3_cp2

0x006a,	// (0x000025d8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x006a,	// (0x000025d8) list_single_large_graphic_pane_g4_cp1

0x0084,	// (0x000025f2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0084,	// (0x000025f2) list_single_large_graphic_pane_t1_cp2

0x208c,	// (0x000045fa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x208c,	// (0x000045fa) list_single_graphic_heading_pane_g1_cp2

0xb574,	// (0x0000dae2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb574,	// (0x0000dae2) list_single_graphic_heading_pane_g4_cp2

0x0028,	// (0x00002596) list_single_graphic_heading_pane_g5_cp2

0x2098,	// (0x00004606) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2098,	// (0x00004606) list_single_graphic_heading_pane_t1_cp2

0xb585,	// (0x0000daf3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb585,	// (0x0000daf3) list_single_graphic_heading_pane_t2_cp2

0x204d,	// (0x000045bb) list_single_2graphic_pane_g1_cp2_ParamLimits

0x204d,	// (0x000045bb) list_single_2graphic_pane_g1_cp2

0xb574,	// (0x0000dae2) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb574,	// (0x0000dae2) list_single_2graphic_pane_g2_cp2

0x0028,	// (0x00002596) list_single_2graphic_pane_g3_cp2

0x206a,	// (0x000045d8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x206a,	// (0x000045d8) list_single_2graphic_pane_g4_cp2

0x2076,	// (0x000045e4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2076,	// (0x000045e4) list_single_2graphic_pane_t1_cp2

0xde9e,	// (0x0001040c) list_highlight_pane_g10_cp1

0x1c25,	// (0x00004193) list_highlight_pane_g1_cp1

0x1c2d,	// (0x0000419b) list_highlight_pane_g2_cp1

0x1c35,	// (0x000041a3) list_highlight_pane_g3_cp1

0x1c3d,	// (0x000041ab) list_highlight_pane_g4_cp1

0x1c45,	// (0x000041b3) list_highlight_pane_g5_cp1

0x1c4d,	// (0x000041bb) list_highlight_pane_g6_cp1

0x1c55,	// (0x000041c3) list_highlight_pane_g7_cp1

0x1c5d,	// (0x000041cb) list_highlight_pane_g8_cp1

0x1c65,	// (0x000041d3) list_highlight_pane_g9_cp1

0xb53a,	// (0x0000daa8) form_field_slider_pane_t3

0xb548,	// (0x0000dab6) form_field_slider_pane_t4

0x1b61,	// (0x000040cf) slider_form_pane_ParamLimits

0x1b61,	// (0x000040cf) slider_form_pane

0xe017,	// (0x00010585) control_abbreviations

0xe017,	// (0x00010585) control_conventions

0xe017,	// (0x00010585) control_definitions

0xe017,	// (0x00010585) format_table_attribute

0x24b9,	// (0x00004a27) bg_popup_preview_window_pane_g9

0xe017,	// (0x00010585) format_table_data2

0xe017,	// (0x00010585) format_table_data3

0xe017,	// (0x00010585) format_table_data_example

0x0008,

0xe017,	// (0x00010585) intro_purpose

0xf8de,	// (0x00011e4c) bg_popup_preview_window_pane_g

0xe017,	// (0x00010585) texts_category

0xe017,	// (0x00010585) texts_graphics

0x009a,	// (0x00002608) text_digital

0x00a9,	// (0x00002617) text_primary

0x00b8,	// (0x00002626) text_primary_small

0x00c7,	// (0x00002635) text_secondary

0x00d6,	// (0x00002644) text_title

0x2dc6,	// (0x00005334) bg_passive_tab_pane_g1_cp3_srt

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp3_srt

0x2dcf,	// (0x0000533d) bg_passive_tab_pane_g3_cp3_srt

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp3_srt_ParamLimits

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp3_srt

0x2dd8,	// (0x00005346) tabs_4_active_pane_srt_g1

0xbb7b,	// (0x0000e0e9) tabs_4_active_pane_srt_t1_ParamLimits

0xbb7b,	// (0x0000e0e9) tabs_4_active_pane_srt_t1

0x2dc6,	// (0x00005334) bg_active_tab_pane_g1_cp3_copy1

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp3_copy1

0x2dcf,	// (0x0000533d) bg_active_tab_pane_g3_cp3_copy1

0xe0dd,	// (0x0001064b) tabs_2_long_active_pane_srt_ParamLimits

0xe0dd,	// (0x0001064b) tabs_2_long_active_pane_srt

0xe0dd,	// (0x0001064b) tabs_2_long_passive_pane_srt_ParamLimits

0xe0dd,	// (0x0001064b) tabs_2_long_passive_pane_srt

0x065e,	// (0x00002bcc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x065e,	// (0x00002bcc) bg_passive_tab_pane_cp4_srt

0x2981,	// (0x00004eef) bg_passive_tab_pane_g1_cp4_srt

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp4_srt

0x298a,	// (0x00004ef8) bg_passive_tab_pane_g3_cp4_srt

0xe0dd,	// (0x0001064b) bg_active_tab_pane_cp4_srt_ParamLimits

0xe0dd,	// (0x0001064b) bg_active_tab_pane_cp4_srt

0xb928,	// (0x0000de96) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb928,	// (0x0000de96) tabs_2_long_active_pane_srt_t1

0x2981,	// (0x00004eef) bg_active_tab_pane_g1_cp4_srt

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp4_srt

0x298a,	// (0x00004ef8) bg_active_tab_pane_g3_cp4_srt

0xe0c5,	// (0x00010633) tabs_3_long_active_pane_srt_ParamLimits

0xe0c5,	// (0x00010633) tabs_3_long_active_pane_srt

0xe0c5,	// (0x00010633) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe0c5,	// (0x00010633) tabs_3_long_passive_pane_cp_srt

0xe0c5,	// (0x00010633) tabs_3_long_passive_pane_srt_ParamLimits

0xe0c5,	// (0x00010633) tabs_3_long_passive_pane_srt

0x065e,	// (0x00002bcc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x065e,	// (0x00002bcc) bg_passive_tab_pane_cp5_srt

0xf3b5,	// (0x00011923) bg_passive_tab_pane_g1_cp5_srt

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp5_srt

0xf3be,	// (0x0001192c) bg_passive_tab_pane_g3_cp5_srt

0xe0dd,	// (0x0001064b) bg_active_tab_pane_cp5_srt_ParamLimits

0xe0dd,	// (0x0001064b) bg_active_tab_pane_cp5_srt

0xb912,	// (0x0000de80) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb912,	// (0x0000de80) tabs_3_long_active_pane_srt_t1

0xf3b5,	// (0x00011923) bg_active_tab_pane_g1_cp5_srt

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp5_srt

0xf3be,	// (0x0001192c) bg_active_tab_pane_g3_cp5_srt

0x2961,	// (0x00004ecf) navi_text_pane_srt_t1

0x2959,	// (0x00004ec7) navi_icon_pane_srt_g1

0x034a,	// (0x000028b8) midp_editing_number_pane_srt

0x00e5,	// (0x00002653) midp_ticker_pane_srt

0x0352,	// (0x000028c0) midp_ticker_pane_srt_g1

0x035a,	// (0x000028c8) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00011cdb) midp_ticker_pane_srt_g

0x0362,	// (0x000028d0) midp_ticker_pane_srt_t1

0x294a,	// (0x00004eb8) midp_editing_number_pane_t1_copy1

0x065e,	// (0x00002bcc) listscroll_midp_pane

0x065e,	// (0x00002bcc) midp_form_pane

0x014f,	// (0x000026bd) midp_info_popup_window_ParamLimits

0x014f,	// (0x000026bd) midp_info_popup_window

0xe97c,	// (0x00010eea) bg_popup_sub_pane_cp50_ParamLimits

0xe97c,	// (0x00010eea) bg_popup_sub_pane_cp50

0x185b,	// (0x00003dc9) listscroll_midp_info_pane_ParamLimits

0x185b,	// (0x00003dc9) listscroll_midp_info_pane

0x1843,	// (0x00003db1) listscroll_form_midp_pane_ParamLimits

0x1843,	// (0x00003db1) listscroll_form_midp_pane

0x184f,	// (0x00003dbd) scroll_bar_cp050

0xb52e,	// (0x0000da9c) list_midp_pane

0x3c46,	// (0x000061b4) signal_pane_g2_cp

0x175d,	// (0x00003ccb) listscroll_midp_info_pane_t1_ParamLimits

0x175d,	// (0x00003ccb) listscroll_midp_info_pane_t1

0x1775,	// (0x00003ce3) listscroll_midp_info_pane_t2_ParamLimits

0x1775,	// (0x00003ce3) listscroll_midp_info_pane_t2

0x17b3,	// (0x00003d21) listscroll_midp_info_pane_t3_ParamLimits

0x17b3,	// (0x00003d21) listscroll_midp_info_pane_t3

0x17ed,	// (0x00003d5b) listscroll_midp_info_pane_t4_ParamLimits

0x17ed,	// (0x00003d5b) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x00011d87) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x00011d87) listscroll_midp_info_pane_t

0xe9fc,	// (0x00010f6a) scroll_pane_cp21

0x16f7,	// (0x00003c65) form_midp_field_choice_group_pane

0x1700,	// (0x00003c6e) form_midp_field_text_pane

0x1743,	// (0x00003cb1) form_midp_field_time_pane

0x174b,	// (0x00003cb9) form_midp_gauge_slider_pane

0x1754,	// (0x00003cc2) form_midp_gauge_wait_pane

0xe017,	// (0x00010585) form_midp_image_pane

0xb511,	// (0x0000da7f) list_single_midp_pane_ParamLimits

0xb511,	// (0x0000da7f) list_single_midp_pane

0xb4e9,	// (0x0000da57) form_midp_field_text_pane_t1

0x13ea,	// (0x00003958) input_focus_pane_cp050

0x16c6,	// (0x00003c34) list_midp_form_text_pane

0x166a,	// (0x00003bd8) form_midp_field_choice_group_pane_t1

0x1678,	// (0x00003be6) input_focus_pane_cp051

0x168c,	// (0x00003bfa) list_midp_choice_pane

0xe017,	// (0x00010585) status_idle_pane

0x164e,	// (0x00003bbc) form_midp_field_time_pane_t1

0xde9e,	// (0x0001040c) wait_anim_pane_g2_copy1

0x165c,	// (0x00003bca) form_midp_field_time_pane_t2

0x0001,

0x01ff,	// (0x0000276d) aid_navinavi_width_2_pane

0xf814,	// (0x00011d82) form_midp_field_time_pane_t

0xe017,	// (0x00010585) input_focus_pane_cp052

0xe017,	// (0x00010585) bg_input_focus_pane_cp040

0x160e,	// (0x00003b7c) form_midp_gauge_slider_pane_t1

0x161c,	// (0x00003b8a) form_midp_gauge_slider_pane_t2

0xb4cd,	// (0x0000da3b) form_midp_gauge_slider_pane_t3

0xb4db,	// (0x0000da49) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x00011d79) form_midp_gauge_slider_pane_t

0x1646,	// (0x00003bb4) form_midp_slider_pane

0xe0dd,	// (0x0001064b) bg_input_focus_pane_cp041_ParamLimits

0xe0dd,	// (0x0001064b) bg_input_focus_pane_cp041

0x15db,	// (0x00003b49) form_midp_gauge_wait_pane_t1_ParamLimits

0x15db,	// (0x00003b49) form_midp_gauge_wait_pane_t1

0x15ed,	// (0x00003b5b) form_midp_gauge_wait_pane_t2_ParamLimits

0x15ed,	// (0x00003b5b) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x00011d74) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x00011d74) form_midp_gauge_wait_pane_t

0x15ff,	// (0x00003b6d) form_midp_wait_pane_ParamLimits

0x15ff,	// (0x00003b6d) form_midp_wait_pane

0x15a3,	// (0x00003b11) form_midp_image_pane_g1

0x15ac,	// (0x00003b1a) form_midp_image_pane_t1

0x15bb,	// (0x00003b29) form_midp_image_pane_t2

0x15ca,	// (0x00003b38) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x00011d6d) form_midp_image_pane_t

0x158b,	// (0x00003af9) list_single_midp_pane_g1

0x1594,	// (0x00003b02) list_single_midp_pane_t1

0xb4b6,	// (0x0000da24) list_midp_form_item_pane_ParamLimits

0xb4b6,	// (0x0000da24) list_midp_form_item_pane

0x01a7,	// (0x00002715) list_midp_form_item_pane_t1

0x01b6,	// (0x00002724) midp_ticker_pane_g1

0x01c2,	// (0x00002730) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00011cc1) midp_ticker_pane_g

0xa647,	// (0x0000cbb5) midp_ticker_pane_t1

0xbad3,	// (0x0000e041) midp_editing_number_pane_t1

0x2c48,	// (0x000051b6) midp_editing_number_pane

0x2c57,	// (0x000051c5) midp_ticker_pane

0x2912,	// (0x00004e80) ai_message_heading_pane

0xe017,	// (0x00010585) bg_popup_window_pane_cp14

0x291a,	// (0x00004e88) listscroll_ai_message_pane

0x2898,	// (0x00004e06) ai_message_heading_pane_g1_ParamLimits

0x2898,	// (0x00004e06) ai_message_heading_pane_g1

0x28a4,	// (0x00004e12) ai_message_heading_pane_g2_ParamLimits

0x28a4,	// (0x00004e12) ai_message_heading_pane_g2

0x28b2,	// (0x00004e20) ai_message_heading_pane_g3_ParamLimits

0x28b2,	// (0x00004e20) ai_message_heading_pane_g3

0x28be,	// (0x00004e2c) ai_message_heading_pane_g4_ParamLimits

0x28be,	// (0x00004e2c) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x00011eae) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x00011eae) ai_message_heading_pane_g

0x28ca,	// (0x00004e38) ai_message_heading_pane_t1_ParamLimits

0x28ca,	// (0x00004e38) ai_message_heading_pane_t1

0x28e4,	// (0x00004e52) ai_message_heading_pane_t2_ParamLimits

0x28e4,	// (0x00004e52) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x00011eb7) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x00011eb7) ai_message_heading_pane_t

0x28f8,	// (0x00004e66) bg_popup_heading_pane_cp1_ParamLimits

0x28f8,	// (0x00004e66) bg_popup_heading_pane_cp1

0x2886,	// (0x00004df4) list_ai_message_pane_ParamLimits

0x2886,	// (0x00004df4) list_ai_message_pane

0xe9fc,	// (0x00010f6a) scroll_pane_cp10

0x27be,	// (0x00004d2c) list_ai_message_pane_g1

0x27c6,	// (0x00004d34) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x00011e8b) list_ai_message_pane_g

0x27ce,	// (0x00004d3c) list_ai_message_pane_t1_ParamLimits

0x27ce,	// (0x00004d3c) list_ai_message_pane_t1

0x27e3,	// (0x00004d51) list_ai_message_pane_t2_ParamLimits

0x27e3,	// (0x00004d51) list_ai_message_pane_t2

0x27f8,	// (0x00004d66) list_ai_message_pane_t3_ParamLimits

0x27f8,	// (0x00004d66) list_ai_message_pane_t3

0x280d,	// (0x00004d7b) list_ai_message_pane_t4_ParamLimits

0x280d,	// (0x00004d7b) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x00011e90) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x00011e90) list_ai_message_pane_t

0xb8e6,	// (0x0000de54) cell_ai_soft_ind_pane_ParamLimits

0xb8e6,	// (0x0000de54) cell_ai_soft_ind_pane

0x01e0,	// (0x0000274e) cell_ai_soft_ind_pane_g1_ParamLimits

0x01e0,	// (0x0000274e) cell_ai_soft_ind_pane_g1

0xe017,	// (0x00010585) grid_highlight_cp1

0x01ed,	// (0x0000275b) text_secondary_cp56_ParamLimits

0x01ed,	// (0x0000275b) text_secondary_cp56

0x277c,	// (0x00004cea) example_general_pane_ParamLimits

0x277c,	// (0x00004cea) example_general_pane

0x2788,	// (0x00004cf6) example_parent_pane_g1_ParamLimits

0x2788,	// (0x00004cf6) example_parent_pane_g1

0x2794,	// (0x00004d02) example_parent_pane_t1_ParamLimits

0x2794,	// (0x00004d02) example_parent_pane_t1

0xacc9,	// (0x0000d237) popup_preview_text_window_ParamLimits

0xacc9,	// (0x0000d237) popup_preview_text_window

0x0014,	// (0x00002582) list_single_pane_cp2_g4

0xe35b,	// (0x000108c9) bg_popup_preview_window_pane_ParamLimits

0xe35b,	// (0x000108c9) bg_popup_preview_window_pane

0x24c3,	// (0x00004a31) popup_preview_text_window_t1_ParamLimits

0x24c3,	// (0x00004a31) popup_preview_text_window_t1

0x24e1,	// (0x00004a4f) popup_preview_text_window_t2_ParamLimits

0x24e1,	// (0x00004a4f) popup_preview_text_window_t2

0x252a,	// (0x00004a98) popup_preview_text_window_t3_ParamLimits

0x252a,	// (0x00004a98) popup_preview_text_window_t3

0x256f,	// (0x00004add) popup_preview_text_window_t4_ParamLimits

0x256f,	// (0x00004add) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x00011e5f) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x00011e5f) popup_preview_text_window_t

0x25ed,	// (0x00004b5b) scroll_pane_cp11

0x124d,	// (0x000037bb) bg_popup_preview_window_pane_g1

0x2477,	// (0x000049e5) bg_popup_preview_window_pane_g2

0x2481,	// (0x000049ef) bg_popup_preview_window_pane_g3

0x248b,	// (0x000049f9) bg_popup_preview_window_pane_g4

0x2495,	// (0x00004a03) bg_popup_preview_window_pane_g5

0x249f,	// (0x00004a0d) bg_popup_preview_window_pane_g6

0x24a7,	// (0x00004a15) bg_popup_preview_window_pane_g7

0x24af,	// (0x00004a1d) bg_popup_preview_window_pane_g8

0xdeb4,	// (0x00010422) aid_popup_width_pane

0xac39,	// (0x0000d1a7) popup_midp_note_alarm_window_ParamLimits

0xac39,	// (0x0000d1a7) popup_midp_note_alarm_window

0xe827,	// (0x00010d95) data_form_pane_ParamLimits

0xa094,	// (0x0000c602) form_field_data_pane_g1

0xa09e,	// (0x0000c60c) form_field_data_pane_t1_ParamLimits

0xe833,	// (0x00010da1) input_focus_pane_ParamLimits

0xe841,	// (0x00010daf) data_form_wide_pane_ParamLimits

0xe852,	// (0x00010dc0) form_field_data_wide_pane_g1

0xe87e,	// (0x00010dec) form_field_data_wide_pane_t1_ParamLimits

0xe510,	// (0x00010a7e) input_focus_pane_cp6_ParamLimits

0xa1df,	// (0x0000c74d) input_popup_find_pane_g1_ParamLimits

0xa1df,	// (0x0000c74d) input_popup_find_pane_g1

0xecee,	// (0x0001125c) aid_navi_side_left_pane

0xed03,	// (0x00011271) aid_navi_side_right_pane

0x1d20,	// (0x0000428e) bg_popup_window_pane_cp30_ParamLimits

0x1d20,	// (0x0000428e) bg_popup_window_pane_cp30

0x1d9a,	// (0x00004308) popup_midp_note_alarm_window_g1_ParamLimits

0x1d9a,	// (0x00004308) popup_midp_note_alarm_window_g1

0x1dca,	// (0x00004338) popup_midp_note_alarm_window_t1_ParamLimits

0x1dca,	// (0x00004338) popup_midp_note_alarm_window_t1

0x1e6b,	// (0x000043d9) popup_midp_note_alarm_window_t2_ParamLimits

0x1e6b,	// (0x000043d9) popup_midp_note_alarm_window_t2

0x1f19,	// (0x00004487) popup_midp_note_alarm_window_t3_ParamLimits

0x1f19,	// (0x00004487) popup_midp_note_alarm_window_t3

0x1f4b,	// (0x000044b9) popup_midp_note_alarm_window_t4_ParamLimits

0x1f4b,	// (0x000044b9) popup_midp_note_alarm_window_t4

0x1f71,	// (0x000044df) popup_midp_note_alarm_window_t5_ParamLimits

0x1f71,	// (0x000044df) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x00011dfc) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x00011dfc) popup_midp_note_alarm_window_t

0x201d,	// (0x0000458b) wait_bar_pane_cp1_ParamLimits

0x201d,	// (0x0000458b) wait_bar_pane_cp1

0xe017,	// (0x00010585) wait_anim_pane_copy1

0xe017,	// (0x00010585) wait_border_pane_copy1

0x1a05,	// (0x00003f73) wait_border_pane_g1_copy1

0xe898,	// (0x00010e06) form_field_popup_pane_g1

0xa0b8,	// (0x0000c626) form_field_popup_pane_t1_ParamLimits

0xe833,	// (0x00010da1) input_focus_pane_cp7_ParamLimits

0xe8a0,	// (0x00010e0e) list_form_pane_ParamLimits

0xe8ac,	// (0x00010e1a) form_field_popup_wide_pane_g1

0xe8b4,	// (0x00010e22) form_field_popup_wide_pane_t1_ParamLimits

0xe833,	// (0x00010da1) input_focus_pane_cp8_ParamLimits

0xe8c9,	// (0x00010e37) list_form_wide_pane_ParamLimits

0x2e53,	// (0x000053c1) aid_size_cell_graphic_pane

0xa137,	// (0x0000c6a5) data_form_pane_t1_ParamLimits

0xbab7,	// (0x0000e025) data_form_wide_pane_t1_ParamLimits

0xb0cd,	// (0x0000d63b) bg_status_flat_pane

0x98bd,	// (0x0000be2b) title_pane_t1_ParamLimits

0xe08d,	// (0x000105fb) title_pane_t2_ParamLimits

0xe0b3,	// (0x00010621) title_pane_t3_ParamLimits

0xf557,	// (0x00011ac5) title_pane_t_ParamLimits

0xa2ef,	// (0x0000c85d) level_1_signal_ParamLimits

0xa301,	// (0x0000c86f) level_2_signal_ParamLimits

0xa314,	// (0x0000c882) level_3_signal_ParamLimits

0xa327,	// (0x0000c895) level_4_signal_ParamLimits

0xa33a,	// (0x0000c8a8) level_5_signal_ParamLimits

0xa34d,	// (0x0000c8bb) level_6_signal_ParamLimits

0xa360,	// (0x0000c8ce) level_7_signal_ParamLimits

0xa2ef,	// (0x0000c85d) level_1_battery_ParamLimits

0xa301,	// (0x0000c86f) level_2_battery_ParamLimits

0xa314,	// (0x0000c882) level_3_battery_ParamLimits

0xa327,	// (0x0000c895) level_4_battery_ParamLimits

0xa33a,	// (0x0000c8a8) level_5_battery_ParamLimits

0xa34d,	// (0x0000c8bb) level_6_battery_ParamLimits

0xa360,	// (0x0000c8ce) level_7_battery_ParamLimits

0x1c25,	// (0x00004193) bg_status_flat_pane_g1

0x1c2d,	// (0x0000419b) bg_status_flat_pane_g2

0x1c35,	// (0x000041a3) bg_status_flat_pane_g3

0x1c3d,	// (0x000041ab) bg_status_flat_pane_g4

0x1c45,	// (0x000041b3) bg_status_flat_pane_g5

0x1c4d,	// (0x000041bb) bg_status_flat_pane_g6

0x1c55,	// (0x000041c3) bg_status_flat_pane_g7

0x9951,	// (0x0000bebf) tabs_3_active_pane_t1_ParamLimits

0x9951,	// (0x0000bebf) tabs_3_passive_pane_t1_ParamLimits

0x996b,	// (0x0000bed9) tabs_4_active_pane_t1_ParamLimits

0x996b,	// (0x0000bed9) tabs_4_1_passive_pane_t1_ParamLimits

0xa1f5,	// (0x0000c763) tabs_2_active_pane_t1_ParamLimits

0xa1f5,	// (0x0000c763) tabs_2_passive_pane_t1_ParamLimits

0xe0dd,	// (0x0001064b) bg_active_tab_pane_cp4_ParamLimits

0xa207,	// (0x0000c775) tabs_2_long_active_pane_t1_ParamLimits

0x065e,	// (0x00002bcc) bg_passive_tab_pane_cp4_ParamLimits

0x130b,	// (0x00003879) list_single_midp_graphic_pane_t1_ParamLimits

0xe0dd,	// (0x0001064b) bg_active_tab_pane_cp5_ParamLimits

0xa21a,	// (0x0000c788) tabs_3_long_active_pane_t1_ParamLimits

0x065e,	// (0x00002bcc) bg_passive_tab_pane_cp5_ParamLimits

0x130b,	// (0x00003879) list_single_midp_graphic_pane_t1

0xb0cd,	// (0x0000d63b) bg_status_flat_pane_ParamLimits

0x0e1f,	// (0x0000338d) indicator_pane_cp2_ParamLimits

0x0e1f,	// (0x0000338d) indicator_pane_cp2

0xb263,	// (0x0000d7d1) navi_pane_srt_ParamLimits

0xb263,	// (0x0000d7d1) navi_pane_srt

0x0f86,	// (0x000034f4) popup_clock_digital_analogue_window_cp1

0xe1c4,	// (0x00010732) indicator_pane_t1

0x00e5,	// (0x00002653) copy_highlight_pane

0x00e5,	// (0x00002653) cursor_graphics_pane

0x00e5,	// (0x00002653) graphic_within_text_pane

0x00e5,	// (0x00002653) link_highlight_pane

0x25b0,	// (0x00004b1e) popup_preview_text_window_t5_ParamLimits

0x25b0,	// (0x00004b1e) popup_preview_text_window_t5

0x0209,	// (0x00002777) cursor_digital_pane

0x0209,	// (0x00002777) cursor_primary_pane

0x021a,	// (0x00002788) cursor_primary_small_pane

0x0222,	// (0x00002790) cursor_secondary_pane

0x022a,	// (0x00002798) cursor_title_pane

0x0209,	// (0x00002777) link_highlight_digital_pane

0x0211,	// (0x0000277f) link_highlight_primary_pane

0x021a,	// (0x00002788) link_highlight_primary_small_pane

0x0222,	// (0x00002790) link_highlight_secondary_pane

0x022a,	// (0x00002798) link_highlight_title_pane

0x0209,	// (0x00002777) copy_highlight_digital_pane

0x0209,	// (0x00002777) copy_highlight_primary_pane

0x021a,	// (0x00002788) copy_highlight_primary_small_pane

0x0222,	// (0x00002790) copy_highlight_secondary_pane

0x022a,	// (0x00002798) copy_highlight_title_pane

0x0222,	// (0x00002790) graphic_text_digital_pane

0x1cc3,	// (0x00004231) graphic_text_primary_pane

0x1ccc,	// (0x0000423a) graphic_text_primary_small_pane

0x021a,	// (0x00002788) graphic_text_secondary_pane

0x0209,	// (0x00002777) graphic_text_title_pane

0xa659,	// (0x0000cbc7) cursor_primary_pane_g1

0x1cb5,	// (0x00004223) cursor_text_primary_t1

0xb56a,	// (0x0000dad8) cursor_primary_small_pane_g1

0x1ca7,	// (0x00004215) cursor_text_primary_small_t1

0xb560,	// (0x0000dace) cursor_primary_small_pane_g1_copy1

0x1c8f,	// (0x000041fd) cursor_text_primary_small_t1_copy1

0x1c6d,	// (0x000041db) cursor_text_title_t1

0xb556,	// (0x0000dac4) cursor_title_pane_g1

0xa659,	// (0x0000cbc7) cursor_digital_pane_g1

0x023c,	// (0x000027aa) cursor_text_digital_t1

0x024a,	// (0x000027b8) link_highlight_primary_pane_g1

0x1c16,	// (0x00004184) link_highlight_primary_pane_t1

0x024a,	// (0x000027b8) link_highlight_primary_small_pane_g1

0x0252,	// (0x000027c0) link_highlight_primary_small_pane_t1

0x0261,	// (0x000027cf) link_highlight_secondary_pane_g1

0x0269,	// (0x000027d7) link_highlight_secondary_pane_t1

0x1b8a,	// (0x000040f8) link_highlight_title_pane_g1

0x1b92,	// (0x00004100) link_highlight_title_pane_t1

0x1b73,	// (0x000040e1) link_highlight_digital_pane_g1

0x1b7b,	// (0x000040e9) link_highlight_digital_pane_t1

0x1a3b,	// (0x00003fa9) copy_highlight_primary_pane_g1

0x1a52,	// (0x00003fc0) copy_highlight_primary_pane_t1

0x1a3b,	// (0x00003fa9) copy_highlight_primary_small_pane_g1

0x1a43,	// (0x00003fb1) copy_highlight_primary_small_pane_t1

0x0278,	// (0x000027e6) copy_highlight_secondary_pane_g1

0x0280,	// (0x000027ee) copy_highlight_secondary_pane_t1

0x1a24,	// (0x00003f92) copy_highlight_title_pane_g1

0x1a2c,	// (0x00003f9a) copy_highlight_title_pane_t1

0x1a3b,	// (0x00003fa9) copy_highlight_digital_pane_g1

0x30db,	// (0x00005649) copy_highlight_digital_pane_t1

0x302f,	// (0x0000559d) graphic_text_primary_pane_g1

0x30bf,	// (0x0000562d) graphic_text_primary_pane_t1

0x30cd,	// (0x0000563b) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x00011f2b) graphic_text_primary_pane_t

0x309b,	// (0x00005609) graphic_text_primary_small_pane_g1

0x30a3,	// (0x00005611) graphic_text_primary_small_pane_t1

0x30b1,	// (0x0000561f) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x00011f26) graphic_text_primary_small_pane_t

0x3077,	// (0x000055e5) graphic_text_secondary_pane_g1

0x307f,	// (0x000055ed) graphic_text_secondary_pane_t1

0x308d,	// (0x000055fb) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x00011f21) graphic_text_secondary_pane_t

0x3053,	// (0x000055c1) graphic_text_title_pane_g1

0x305b,	// (0x000055c9) graphic_text_title_pane_t1

0x3069,	// (0x000055d7) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x00011f1c) graphic_text_title_pane_t

0x302f,	// (0x0000559d) graphic_text_digital_pane_g1

0x3037,	// (0x000055a5) graphic_text_digital_pane_t1

0x3045,	// (0x000055b3) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x00011f17) graphic_text_digital_pane_t

0xe0dd,	// (0x0001064b) navi_icon_pane_srt_ParamLimits

0xe0dd,	// (0x0001064b) navi_icon_pane_srt

0xe017,	// (0x00010585) navi_midp_pane_srt

0xe017,	// (0x00010585) navi_navi_pane_srt

0xe0dd,	// (0x0001064b) navi_text_pane_srt_ParamLimits

0xe0dd,	// (0x0001064b) navi_text_pane_srt

0x2ffa,	// (0x00005568) navi_navi_icon_text_pane_srt

0x3002,	// (0x00005570) navi_navi_pane_srt_g1_ParamLimits

0x3002,	// (0x00005570) navi_navi_pane_srt_g1

0x3014,	// (0x00005582) navi_navi_pane_srt_g2_ParamLimits

0x3014,	// (0x00005582) navi_navi_pane_srt_g2

0x0001,

0xf9a4,	// (0x00011f12) navi_navi_pane_srt_g_ParamLimits

0xf9a4,	// (0x00011f12) navi_navi_pane_srt_g

0x3026,	// (0x00005594) navi_navi_tabs_pane_srt

0x2ffa,	// (0x00005568) navi_navi_text_pane_srt

0x2ffa,	// (0x00005568) navi_navi_volume_pane_srt

0x2feb,	// (0x00005559) navi_navi_text_pane_srt_t1

0x2fc6,	// (0x00005534) navi_navi_volume_pane_srt_g1

0x2fce,	// (0x0000553c) volume_small_pane_srt_ParamLimits

0x2fce,	// (0x0000553c) volume_small_pane_srt

0x028f,	// (0x000027fd) volume_small_pane_srt_g1_ParamLimits

0x028f,	// (0x000027fd) volume_small_pane_srt_g1

0x029f,	// (0x0000280d) volume_small_pane_srt_g2_ParamLimits

0x029f,	// (0x0000280d) volume_small_pane_srt_g2

0x02b0,	// (0x0000281e) volume_small_pane_srt_g3_ParamLimits

0x02b0,	// (0x0000281e) volume_small_pane_srt_g3

0x02c1,	// (0x0000282f) volume_small_pane_srt_g4_ParamLimits

0x02c1,	// (0x0000282f) volume_small_pane_srt_g4

0x02d2,	// (0x00002840) volume_small_pane_srt_g5_ParamLimits

0x02d2,	// (0x00002840) volume_small_pane_srt_g5

0x02e3,	// (0x00002851) volume_small_pane_srt_g6_ParamLimits

0x02e3,	// (0x00002851) volume_small_pane_srt_g6

0x02f4,	// (0x00002862) volume_small_pane_srt_g7_ParamLimits

0x02f4,	// (0x00002862) volume_small_pane_srt_g7

0x0305,	// (0x00002873) volume_small_pane_srt_g8_ParamLimits

0x0305,	// (0x00002873) volume_small_pane_srt_g8

0x0316,	// (0x00002884) volume_small_pane_srt_g9_ParamLimits

0x0316,	// (0x00002884) volume_small_pane_srt_g9

0x0327,	// (0x00002895) volume_small_pane_srt_g10_ParamLimits

0x0327,	// (0x00002895) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00011cc6) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00011cc6) volume_small_pane_srt_g

0xe410,	// (0x0001097e) query_popup_data_pane_cp2

0x2fb4,	// (0x00005522) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2fb4,	// (0x00005522) navi_navi_icon_text_pane_srt_t1

0x1cc3,	// (0x00004231) navi_tabs_2_long_pane_srt

0x1cc3,	// (0x00004231) navi_tabs_2_pane_srt

0x1cc3,	// (0x00004231) navi_tabs_3_long_pane_srt

0x1cc3,	// (0x00004231) navi_tabs_3_pane_srt

0x1cc3,	// (0x00004231) navi_tabs_4_pane_srt

0x2f8c,	// (0x000054fa) tabs_2_active_pane_srt_ParamLimits

0x2f8c,	// (0x000054fa) tabs_2_active_pane_srt

0x2f9c,	// (0x0000550a) tabs_2_passive_pane_srt_ParamLimits

0x2f9c,	// (0x0000550a) tabs_2_passive_pane_srt

0x13ea,	// (0x00003958) bg_passive_tab_pane_cp1_srt_ParamLimits

0x13ea,	// (0x00003958) bg_passive_tab_pane_cp1_srt

0x2f60,	// (0x000054ce) bg_passive_tab_pane_g1_cp1_srt

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp1_srt

0x2f69,	// (0x000054d7) bg_passive_tab_pane_g3_cp1_srt

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp1_srt_ParamLimits

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp1_srt

0x2f72,	// (0x000054e0) tabs_2_active_pane_srt_g1

0xbbfc,	// (0x0000e16a) tabs_2_active_pane_srt_t1_ParamLimits

0xbbfc,	// (0x0000e16a) tabs_2_active_pane_srt_t1

0x2f60,	// (0x000054ce) bg_active_tab_pane_g1_cp1_srt

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp1_srt

0x2f69,	// (0x000054d7) bg_active_tab_pane_g3_cp1_srt

0x2f2d,	// (0x0000549b) tabs_3_active_pane_srt_ParamLimits

0x2f2d,	// (0x0000549b) tabs_3_active_pane_srt

0x2f3e,	// (0x000054ac) tabs_3_passive_pane_cp_srt_ParamLimits

0x2f3e,	// (0x000054ac) tabs_3_passive_pane_cp_srt

0x2f4f,	// (0x000054bd) tabs_3_passive_pane_srt_ParamLimits

0x2f4f,	// (0x000054bd) tabs_3_passive_pane_srt

0x13ea,	// (0x00003958) bg_passive_tab_pane_cp2_srt_ParamLimits

0x13ea,	// (0x00003958) bg_passive_tab_pane_cp2_srt

0x0338,	// (0x000028a6) bg_passive_tab_pane_g1_cp2_srt

0xf22a,	// (0x00011798) bg_passive_tab_pane_g2_cp2_srt

0x0341,	// (0x000028af) bg_passive_tab_pane_g3_cp2_srt

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp2_srt_ParamLimits

0xe0c5,	// (0x00010633) bg_active_tab_pane_cp2_srt

0x2f13,	// (0x00005481) tabs_3_active_pane_srt_g1

0xbbe6,	// (0x0000e154) tabs_3_active_pane_srt_t1_ParamLimits

0xbbe6,	// (0x0000e154) tabs_3_active_pane_srt_t1

0x0338,	// (0x000028a6) bg_active_tab_pane_g1_cp2_srt

0xf22a,	// (0x00011798) bg_active_tab_pane_g2_cp2_srt

0x0341,	// (0x000028af) bg_active_tab_pane_g3_cp2_srt

0x2ecb,	// (0x00005439) tabs_4_active_pane_srt_ParamLimits

0x2ecb,	// (0x00005439) tabs_4_active_pane_srt

0x2edd,	// (0x0000544b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2edd,	// (0x0000544b) tabs_4_passive_pane_cp2_srt

0x05dc,	// (0x00002b4a) aid_size_cell_toolbar

0x2a6c,	// (0x00004fda) main_idle_act_pane_ParamLimits

0x082f,	// (0x00002d9d) popup_large_graphic_colour_window_ParamLimits

0xaf8f,	// (0x0000d4fd) popup_toolbar_window_ParamLimits

0xaf8f,	// (0x0000d4fd) popup_toolbar_window

0x2c8d,	// (0x000051fb) list_single_graphic_2heading_pane_ParamLimits

0x2c8d,	// (0x000051fb) list_single_graphic_2heading_pane

0xed7c,	// (0x000112ea) aid_size_cell_apps_grid_lsc_pane

0xed8e,	// (0x000112fc) aid_size_cell_apps_grid_prt_pane

0x065e,	// (0x00002bcc) bg_wml_button_pane_cp1_ParamLimits

0x065e,	// (0x00002bcc) bg_wml_button_pane_cp1

0xb4e9,	// (0x0000da57) form_midp_field_text_pane_t1_ParamLimits

0x13ea,	// (0x00003958) input_focus_pane_cp050_ParamLimits

0x16c6,	// (0x00003c34) list_midp_form_text_pane_ParamLimits

0x1678,	// (0x00003be6) input_focus_pane_cp051_ParamLimits

0x168c,	// (0x00003bfa) list_midp_choice_pane_ParamLimits

0xb4a0,	// (0x0000da0e) list_single_2graphic_pane_cp3_ParamLimits

0xb4a0,	// (0x0000da0e) list_single_2graphic_pane_cp3

0x4010,	// (0x0000657e) list_single_midp_graphic_pane_ParamLimits

0x4010,	// (0x0000657e) list_single_midp_graphic_pane

0x10e5,	// (0x00003653) list_single_graphic_2heading_pane_g1_ParamLimits

0x10e5,	// (0x00003653) list_single_graphic_2heading_pane_g1

0x0056,	// (0x000025c4) list_single_graphic_2heading_pane_g4_ParamLimits

0x0056,	// (0x000025c4) list_single_graphic_2heading_pane_g4

0x10f1,	// (0x0000365f) list_single_graphic_2heading_pane_g5_ParamLimits

0x10f1,	// (0x0000365f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00011d19) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00011d19) list_single_graphic_2heading_pane_g

0x10fd,	// (0x0000366b) list_single_graphic_2heading_pane_t1_ParamLimits

0x10fd,	// (0x0000366b) list_single_graphic_2heading_pane_t1

0x1111,	// (0x0000367f) list_single_graphic_2heading_pane_t2_ParamLimits

0x1111,	// (0x0000367f) list_single_graphic_2heading_pane_t2

0x112d,	// (0x0000369b) list_single_graphic_2heading_pane_t3_ParamLimits

0x112d,	// (0x0000369b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00011d20) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00011d20) list_single_graphic_2heading_pane_t

0x1145,	// (0x000036b3) bg_popup_sub_pane_cp2

0x116f,	// (0x000036dd) grid_toobar_pane

0x11ab,	// (0x00003719) cell_toolbar_pane_ParamLimits

0x11ab,	// (0x00003719) cell_toolbar_pane

0x11f1,	// (0x0000375f) cell_toolbar_pane_g1_ParamLimits

0x11f1,	// (0x0000375f) cell_toolbar_pane_g1

0x1205,	// (0x00003773) cell_toolbar_pane_g2_ParamLimits

0x1205,	// (0x00003773) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x00011d27) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x00011d27) cell_toolbar_pane_g

0x1227,	// (0x00003795) grid_highlight_pane_cp2_ParamLimits

0x1227,	// (0x00003795) grid_highlight_pane_cp2

0x1241,	// (0x000037af) toolbar_button_pane

0x124d,	// (0x000037bb) toolbar_button_pane_g1

0x1255,	// (0x000037c3) toolbar_button_pane_g2

0x125d,	// (0x000037cb) toolbar_button_pane_g3

0x1265,	// (0x000037d3) toolbar_button_pane_g4

0x126d,	// (0x000037db) toolbar_button_pane_g5

0x1275,	// (0x000037e3) toolbar_button_pane_g6

0x127d,	// (0x000037eb) toolbar_button_pane_g7

0x1285,	// (0x000037f3) toolbar_button_pane_g8

0x128d,	// (0x000037fb) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x00011d2c) toolbar_button_pane_g

0x129d,	// (0x0000380b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x129d,	// (0x0000380b) list_single_2graphic_pane_g1_cp3

0xb402,	// (0x0000d970) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb402,	// (0x0000d970) list_single_2graphic_pane_g2_cp3

0xf47f,	// (0x000119ed) list_single_2graphic_pane_g3_cp3

0x12ba,	// (0x00003828) list_single_2graphic_pane_g4_cp3_ParamLimits

0x12ba,	// (0x00003828) list_single_2graphic_pane_g4_cp3

0x12c6,	// (0x00003834) list_single_2graphic_pane_t1_cp3_ParamLimits

0x12c6,	// (0x00003834) list_single_2graphic_pane_t1_cp3

0xf473,	// (0x000119e1) list_single_midp_graphic_pane_g2_ParamLimits

0xf473,	// (0x000119e1) list_single_midp_graphic_pane_g2

0x05e4,	// (0x00002b52) aid_zoom_text_primary

0x05ec,	// (0x00002b5a) aid_zoom_text_secondary

0xa6b1,	// (0x0000cc1f) status_small_pane_g7_ParamLimits

0xa6b1,	// (0x0000cc1f) status_small_pane_g7

0xa6d4,	// (0x0000cc42) status_small_pane_t1_ParamLimits

0x98a5,	// (0x0000be13) title_pane_g2

0x0003,

0xf54e,	// (0x00011abc) title_pane_g

0x9b31,	// (0x0000c09f) aid_size_cell_colour_1_pane_ParamLimits

0x9b31,	// (0x0000c09f) aid_size_cell_colour_1_pane

0x9b45,	// (0x0000c0b3) aid_size_cell_colour_2_pane_ParamLimits

0x9b45,	// (0x0000c0b3) aid_size_cell_colour_2_pane

0x9b59,	// (0x0000c0c7) aid_size_cell_colour_3_pane_ParamLimits

0x9b59,	// (0x0000c0c7) aid_size_cell_colour_3_pane

0x9b6d,	// (0x0000c0db) aid_size_cell_colour_4_pane_ParamLimits

0x9b6d,	// (0x0000c0db) aid_size_cell_colour_4_pane

0xebf5,	// (0x00011163) title_pane_stacon_g1_ParamLimits

0xebf5,	// (0x00011163) title_pane_stacon_g1

0x1aa9,	// (0x00004017) popup_note_wait_window_g3_ParamLimits

0x1aa9,	// (0x00004017) popup_note_wait_window_g3

0x1b20,	// (0x0000408e) popup_note_wait_window_t5_ParamLimits

0x1b20,	// (0x0000408e) popup_note_wait_window_t5

0xe017,	// (0x00010585) main_feb_china_hwr_fs_writing_pane

0xa926,	// (0x0000ce94) popup_feb_china_hwr_fs_window_ParamLimits

0xa926,	// (0x0000ce94) popup_feb_china_hwr_fs_window

0xb413,	// (0x0000d981) aid_size_cell_hwr_fs_ParamLimits

0xb413,	// (0x0000d981) aid_size_cell_hwr_fs

0x13ea,	// (0x00003958) bg_popup_sub_pane_cp3_ParamLimits

0x13ea,	// (0x00003958) bg_popup_sub_pane_cp3

0xb428,	// (0x0000d996) grid_hwr_fs_pane_ParamLimits

0xb428,	// (0x0000d996) grid_hwr_fs_pane

0x140e,	// (0x0000397c) linegrid_hwr_fs_pane_ParamLimits

0x140e,	// (0x0000397c) linegrid_hwr_fs_pane

0xb440,	// (0x0000d9ae) cell_hwr_fs_pane_ParamLimits

0xb440,	// (0x0000d9ae) cell_hwr_fs_pane

0x1442,	// (0x000039b0) linegrid_hwr_fs_pane_g1_ParamLimits

0x1442,	// (0x000039b0) linegrid_hwr_fs_pane_g1

0xb466,	// (0x0000d9d4) linegrid_hwr_fs_pane_g2_ParamLimits

0xb466,	// (0x0000d9d4) linegrid_hwr_fs_pane_g2

0x1460,	// (0x000039ce) linegrid_hwr_fs_pane_g3_ParamLimits

0x1460,	// (0x000039ce) linegrid_hwr_fs_pane_g3

0x146c,	// (0x000039da) linegrid_hwr_fs_pane_g4_ParamLimits

0x146c,	// (0x000039da) linegrid_hwr_fs_pane_g4

0x148a,	// (0x000039f8) linegrid_hwr_fs_pane_g5_ParamLimits

0x148a,	// (0x000039f8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x00011d52) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x00011d52) linegrid_hwr_fs_pane_g

0x14a0,	// (0x00003a0e) cell_hwr_fs_pane_g1_ParamLimits

0x14a0,	// (0x00003a0e) cell_hwr_fs_pane_g1

0x101c,	// (0x0000358a) cell_hwr_fs_pane_g2_ParamLimits

0x101c,	// (0x0000358a) cell_hwr_fs_pane_g2

0xb478,	// (0x0000d9e6) cell_hwr_fs_pane_g3_ParamLimits

0xb478,	// (0x0000d9e6) cell_hwr_fs_pane_g3

0xb485,	// (0x0000d9f3) cell_hwr_fs_pane_g4_ParamLimits

0xb485,	// (0x0000d9f3) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x00011d5d) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x00011d5d) cell_hwr_fs_pane_g

0xb492,	// (0x0000da00) cell_hwr_fs_pane_t1

0xe017,	// (0x00010585) grid_highlight_pane_cp6

0xe017,	// (0x00010585) main_idle_act2_pane

0xe9e3,	// (0x00010f51) aid_inside_area_popup_secondary

0xb727,	// (0x0000dc95) aid_inside_area_window_primary_ParamLimits

0xb727,	// (0x0000dc95) aid_inside_area_window_primary

0x30ea,	// (0x00005658) ai2_news_ticker_pane

0x30f2,	// (0x00005660) aid_size_cell_ai1_link_ParamLimits

0x30f2,	// (0x00005660) aid_size_cell_ai1_link

0x310c,	// (0x0000567a) popup_ai2_data_window_ParamLimits

0x310c,	// (0x0000567a) popup_ai2_data_window

0x312a,	// (0x00005698) popup_ai2_link_window_ParamLimits

0x312a,	// (0x00005698) popup_ai2_link_window

0x13ea,	// (0x00003958) bg_popup_sub_pane_cp4_ParamLimits

0x13ea,	// (0x00003958) bg_popup_sub_pane_cp4

0x3140,	// (0x000056ae) grid_ai2_link_pane_ParamLimits

0x3140,	// (0x000056ae) grid_ai2_link_pane

0x3157,	// (0x000056c5) popup_ai2_link_window_g1_ParamLimits

0x3157,	// (0x000056c5) popup_ai2_link_window_g1

0x3163,	// (0x000056d1) popup_ai2_link_window_g2_ParamLimits

0x3163,	// (0x000056d1) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x00011f30) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x00011f30) popup_ai2_link_window_g

0x3174,	// (0x000056e2) ai2_mp_button_pane

0x317c,	// (0x000056ea) ai2_mp_volume_pane

0x1678,	// (0x00003be6) bg_popup_sub_pane_cp5_ParamLimits

0x1678,	// (0x00003be6) bg_popup_sub_pane_cp5

0x3184,	// (0x000056f2) heading_ai2_gene_pane_ParamLimits

0x3184,	// (0x000056f2) heading_ai2_gene_pane

0x3190,	// (0x000056fe) list_ai2_gene_pane_ParamLimits

0x3190,	// (0x000056fe) list_ai2_gene_pane

0x31d8,	// (0x00005746) cell_ai2_link_pane_ParamLimits

0x31d8,	// (0x00005746) cell_ai2_link_pane

0x31ee,	// (0x0000575c) cell_ai2_link_pane_g1

0xe017,	// (0x00010585) grid_highlight_pane_cp7

0x32c1,	// (0x0000582f) ai2_mp_volume_pane_g1

0x32c9,	// (0x00005837) ai2_mp_volume_pane_g2

0x3236,	// (0x000057a4) list_ai2_gene_pane_t1

0x32d1,	// (0x0000583f) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x00011f49) ai2_mp_volume_pane_g

0x32d9,	// (0x00005847) volume_small_pane_cp3

0x32e2,	// (0x00005850) aid_size_cell_ai2_button

0x32ea,	// (0x00005858) grid_ai2_button_pane

0x32f3,	// (0x00005861) cell_ai2_button_pane_ParamLimits

0x32f3,	// (0x00005861) cell_ai2_button_pane

0xde9e,	// (0x0001040c) cell_ai2_button_pane_g1

0xe017,	// (0x00010585) grid_highlight_pane_cp8

0x3281,	// (0x000057ef) ai2_gene_pane_t1_ParamLimits

0x3281,	// (0x000057ef) ai2_gene_pane_t1

0xa892,	// (0x0000ce00) aid_height_parent_landscape

0xb93f,	// (0x0000dead) aid_height_set_list

0x2a6c,	// (0x00004fda) aid_size_parent

0x2e53,	// (0x000053c1) aid_size_cell_graphic_pane_ParamLimits

0x31a0,	// (0x0000570e) popup_ai2_data_window_g1_ParamLimits

0x31a0,	// (0x0000570e) popup_ai2_data_window_g1

0x31ac,	// (0x0000571a) ai2_news_ticker_pane_g1

0x31b4,	// (0x00005722) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x00011f35) ai2_news_ticker_pane_g

0x31bc,	// (0x0000572a) ai2_news_ticker_pane_t1

0x31ca,	// (0x00005738) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x00011f3a) ai2_news_ticker_pane_t

0x31f7,	// (0x00005765) heading_ai2_gene_pane_g1

0x31ff,	// (0x0000576d) heading_ai2_gene_pane_t1_ParamLimits

0x31ff,	// (0x0000576d) heading_ai2_gene_pane_t1

0x3214,	// (0x00005782) list_highlight_pane_cp6

0x321c,	// (0x0000578a) ai2_gene_pane_ParamLimits

0x321c,	// (0x0000578a) ai2_gene_pane

0x3244,	// (0x000057b2) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x00011f3f) list_ai2_gene_pane_t

0x3252,	// (0x000057c0) list_highlight_pane_cp8_ParamLimits

0x3252,	// (0x000057c0) list_highlight_pane_cp8

0x3263,	// (0x000057d1) ai2_gene_pane_g1_ParamLimits

0x3263,	// (0x000057d1) ai2_gene_pane_g1

0x3275,	// (0x000057e3) ai2_gene_pane_g2_ParamLimits

0x3275,	// (0x000057e3) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x00011f44) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x00011f44) ai2_gene_pane_g

0xe72b,	// (0x00010c99) scroll_pane_cp12

0xa851,	// (0x0000cdbf) control_pane_t3_ParamLimits

0xa851,	// (0x0000cdbf) control_pane_t3

0xa6c5,	// (0x0000cc33) status_small_pane_g8_ParamLimits

0xa6c5,	// (0x0000cc33) status_small_pane_g8

0xa9c8,	// (0x0000cf36) popup_find_window_ParamLimits

0xac79,	// (0x0000d1e7) popup_note_image_window_ParamLimits

0x10e5,	// (0x00003653) list_double2_graphic_pane_vc_g1_ParamLimits

0x10e5,	// (0x00003653) list_double2_graphic_pane_vc_g1

0x0056,	// (0x000025c4) list_double2_graphic_pane_vc_g2_ParamLimits

0x0056,	// (0x000025c4) list_double2_graphic_pane_vc_g2

0x10f1,	// (0x0000365f) list_double2_graphic_pane_vc_g3_ParamLimits

0x10f1,	// (0x0000365f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7ab,	// (0x00011d19) list_double2_graphic_pane_vc_g_ParamLimits

0xf7ab,	// (0x00011d19) list_double2_graphic_pane_vc_g

0x11db,	// (0x00003749) list_double2_graphic_pane_vc_t1_ParamLimits

0x11db,	// (0x00003749) list_double2_graphic_pane_vc_t1

0x0056,	// (0x000025c4) list_single_heading_pane_vc_g1_ParamLimits

0x0056,	// (0x000025c4) list_single_heading_pane_vc_g1

0x10f1,	// (0x0000365f) list_single_heading_pane_vc_g2_ParamLimits

0x10f1,	// (0x0000365f) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b36) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b36) list_single_heading_pane_vc_g

0x12e1,	// (0x0000384f) list_single_heading_pane_vc_t1_ParamLimits

0x12e1,	// (0x0000384f) list_single_heading_pane_vc_t1

0x12f9,	// (0x00003867) list_single_heading_pane_vc_t2_ParamLimits

0x12f9,	// (0x00003867) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x00011d41) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x00011d41) list_single_heading_pane_vc_t

0x1321,	// (0x0000388f) list_setting_number_pane_vc_g1_ParamLimits

0x1321,	// (0x0000388f) list_setting_number_pane_vc_g1

0x132d,	// (0x0000389b) list_setting_number_pane_vc_g2_ParamLimits

0x132d,	// (0x0000389b) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x00011d46) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x00011d46) list_setting_number_pane_vc_g

0x1339,	// (0x000038a7) list_setting_number_pane_vc_t1_ParamLimits

0x1339,	// (0x000038a7) list_setting_number_pane_vc_t1

0x134d,	// (0x000038bb) list_setting_number_pane_vc_t2_ParamLimits

0x134d,	// (0x000038bb) list_setting_number_pane_vc_t2

0x1369,	// (0x000038d7) list_setting_number_pane_vc_t3_ParamLimits

0x1369,	// (0x000038d7) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x00011d4b) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x00011d4b) list_setting_number_pane_vc_t

0x1397,	// (0x00003905) set_value_pane_vc_ParamLimits

0x1397,	// (0x00003905) set_value_pane_vc

0x2c8d,	// (0x000051fb) list_double2_graphic_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_double2_graphic_pane_vc

0x2c8d,	// (0x000051fb) list_double2_large_graphic_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_double2_large_graphic_pane_vc

0x2c8d,	// (0x000051fb) list_double2_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_double2_pane_vc

0x2c8d,	// (0x000051fb) list_double_graphic_heading_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_double_graphic_heading_pane_vc

0x2c8d,	// (0x000051fb) list_double_graphic_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_double_graphic_pane_vc

0x2c8d,	// (0x000051fb) list_double_heading_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_double_heading_pane_vc

0x2ca1,	// (0x0000520f) list_double_large_graphic_pane_vc_ParamLimits

0x2ca1,	// (0x0000520f) list_double_large_graphic_pane_vc

0x2c8d,	// (0x000051fb) list_double_number_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_double_number_pane_vc

0x2c8d,	// (0x000051fb) list_double_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_double_pane_vc

0x2c8d,	// (0x000051fb) list_double_time_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_double_time_pane_vc

0x2c8d,	// (0x000051fb) list_setting_number_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_setting_number_pane_vc

0x2c8d,	// (0x000051fb) list_setting_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_setting_pane_vc

0x2c8d,	// (0x000051fb) list_single_graphic_heading_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_single_graphic_heading_pane_vc

0x2c8d,	// (0x000051fb) list_single_heading_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_single_heading_pane_vc

0x2c8d,	// (0x000051fb) list_single_number_heading_pane_vc_ParamLimits

0x2c8d,	// (0x000051fb) list_single_number_heading_pane_vc

0x10e5,	// (0x00003653) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x10e5,	// (0x00003653) list_double_graphic_heading_pane_vc_g1

0x3326,	// (0x00005894) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3326,	// (0x00005894) list_double_graphic_heading_pane_vc_g2

0x3332,	// (0x000058a0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3332,	// (0x000058a0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x00011f50) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x00011f50) list_double_graphic_heading_pane_vc_g

0x333e,	// (0x000058ac) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x333e,	// (0x000058ac) list_double_graphic_heading_pane_vc_t1

0x3354,	// (0x000058c2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3354,	// (0x000058c2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00011f57) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00011f57) list_double_graphic_heading_pane_vc_t

0x1321,	// (0x0000388f) list_setting_pane_vc_g1_ParamLimits

0x1321,	// (0x0000388f) list_setting_pane_vc_g1

0x132d,	// (0x0000389b) list_setting_pane_vc_g2_ParamLimits

0x132d,	// (0x0000389b) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x00011d46) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x00011d46) list_setting_pane_vc_g

0x359a,	// (0x00005b08) list_setting_pane_vc_t1_ParamLimits

0x359a,	// (0x00005b08) list_setting_pane_vc_t1

0x35b6,	// (0x00005b24) list_setting_pane_vc_t2_ParamLimits

0x35b6,	// (0x00005b24) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x00011f9a) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x00011f9a) list_setting_pane_vc_t

0x1397,	// (0x00003905) set_value_pane_cp_vc_ParamLimits

0x1397,	// (0x00003905) set_value_pane_cp_vc

0x0056,	// (0x000025c4) list_single_number_heading_pane_vc_g1_ParamLimits

0x0056,	// (0x000025c4) list_single_number_heading_pane_vc_g1

0x10f1,	// (0x0000365f) list_single_number_heading_pane_vc_g2_ParamLimits

0x10f1,	// (0x0000365f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b36) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b36) list_single_number_heading_pane_vc_g

0x12e1,	// (0x0000384f) list_single_number_heading_pane_vc_t1_ParamLimits

0x12e1,	// (0x0000384f) list_single_number_heading_pane_vc_t1

0x35d2,	// (0x00005b40) list_single_number_heading_pane_vc_t2_ParamLimits

0x35d2,	// (0x00005b40) list_single_number_heading_pane_vc_t2

0x35e4,	// (0x00005b52) list_single_number_heading_pane_vc_t3_ParamLimits

0x35e4,	// (0x00005b52) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x00011f9f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x00011f9f) list_single_number_heading_pane_vc_t

0x10e5,	// (0x00003653) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x10e5,	// (0x00003653) list_single_graphic_heading_pane_vc_g1

0x0056,	// (0x000025c4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0056,	// (0x000025c4) list_single_graphic_heading_pane_vc_g4

0x10f1,	// (0x0000365f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x10f1,	// (0x0000365f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7ab,	// (0x00011d19) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x00011d19) list_single_graphic_heading_pane_vc_g

0x12e1,	// (0x0000384f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x12e1,	// (0x0000384f) list_single_graphic_heading_pane_vc_t1

0x35f6,	// (0x00005b64) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x35f6,	// (0x00005b64) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00011fa6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00011fa6) list_single_graphic_heading_pane_vc_t

0x0056,	// (0x000025c4) list_double2_pane_vc_g1_ParamLimits

0x0056,	// (0x000025c4) list_double2_pane_vc_g1

0x10f1,	// (0x0000365f) list_double2_pane_vc_g2_ParamLimits

0x10f1,	// (0x0000365f) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b36) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b36) list_double2_pane_vc_g

0x3608,	// (0x00005b76) list_double2_pane_vc_t1_ParamLimits

0x3608,	// (0x00005b76) list_double2_pane_vc_t1

0x361e,	// (0x00005b8c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x361e,	// (0x00005b8c) list_double2_large_graphic_pane_vc_g1

0x0056,	// (0x000025c4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0056,	// (0x000025c4) list_double2_large_graphic_pane_vc_g2

0x10f1,	// (0x0000365f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x10f1,	// (0x0000365f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00011b53) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00011b53) list_double2_large_graphic_pane_vc_g

0x362a,	// (0x00005b98) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x362a,	// (0x00005b98) list_double2_large_graphic_pane_vc_t1

0x3640,	// (0x00005bae) list_double_time_pane_vc_g1_ParamLimits

0x3640,	// (0x00005bae) list_double_time_pane_vc_g1

0x364c,	// (0x00005bba) list_double_time_pane_vc_g2_ParamLimits

0x364c,	// (0x00005bba) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x00011fab) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x00011fab) list_double_time_pane_vc_g

0x3658,	// (0x00005bc6) list_double_time_pane_vc_t1_ParamLimits

0x3658,	// (0x00005bc6) list_double_time_pane_vc_t1

0x3688,	// (0x00005bf6) list_double_time_pane_vc_t2_ParamLimits

0x3688,	// (0x00005bf6) list_double_time_pane_vc_t2

0x36b1,	// (0x00005c1f) list_double_time_pane_vc_t3_ParamLimits

0x36b1,	// (0x00005c1f) list_double_time_pane_vc_t3

0x36c3,	// (0x00005c31) list_double_time_pane_vc_t4_ParamLimits

0x36c3,	// (0x00005c31) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x00011fb0) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x00011fb0) list_double_time_pane_vc_t

0x0056,	// (0x000025c4) list_double_pane_vc_g1_ParamLimits

0x0056,	// (0x000025c4) list_double_pane_vc_g1

0x10f1,	// (0x0000365f) list_double_pane_vc_g2_ParamLimits

0x10f1,	// (0x0000365f) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b36) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b36) list_double_pane_vc_g

0x36e8,	// (0x00005c56) list_double_pane_vc_t1_ParamLimits

0x36e8,	// (0x00005c56) list_double_pane_vc_t1

0x36fc,	// (0x00005c6a) list_double_pane_vc_t2_ParamLimits

0x36fc,	// (0x00005c6a) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x00011fb9) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x00011fb9) list_double_pane_vc_t

0x0056,	// (0x000025c4) list_double_number_pane_vc_g1_ParamLimits

0x0056,	// (0x000025c4) list_double_number_pane_vc_g1

0x10f1,	// (0x0000365f) list_double_number_pane_vc_g2_ParamLimits

0x10f1,	// (0x0000365f) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b36) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b36) list_double_number_pane_vc_g

0x3712,	// (0x00005c80) list_double_number_pane_vc_t1_ParamLimits

0x3712,	// (0x00005c80) list_double_number_pane_vc_t1

0x3726,	// (0x00005c94) list_double_number_pane_vc_t2_ParamLimits

0x3726,	// (0x00005c94) list_double_number_pane_vc_t2

0x373a,	// (0x00005ca8) list_double_number_pane_vc_t3_ParamLimits

0x373a,	// (0x00005ca8) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x00011fbe) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x00011fbe) list_double_number_pane_vc_t

0x3750,	// (0x00005cbe) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3750,	// (0x00005cbe) list_double_large_graphic_pane_vc_g1

0x3778,	// (0x00005ce6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3778,	// (0x00005ce6) list_double_large_graphic_pane_vc_g2

0x378c,	// (0x00005cfa) list_double_large_graphic_pane_vc_g3_ParamLimits

0x378c,	// (0x00005cfa) list_double_large_graphic_pane_vc_g3

0x379b,	// (0x00005d09) list_double_large_graphic_pane_vc_g4_ParamLimits

0x379b,	// (0x00005d09) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x00011fc5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x00011fc5) list_double_large_graphic_pane_vc_g

0x37ab,	// (0x00005d19) list_double_large_graphic_pane_vc_t1_ParamLimits

0x37ab,	// (0x00005d19) list_double_large_graphic_pane_vc_t1

0x37cd,	// (0x00005d3b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x37cd,	// (0x00005d3b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x00011fce) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x00011fce) list_double_large_graphic_pane_vc_t

0x3326,	// (0x00005894) list_double_heading_pane_vc_g1_ParamLimits

0x3326,	// (0x00005894) list_double_heading_pane_vc_g1

0x3332,	// (0x000058a0) list_double_heading_pane_vc_g2_ParamLimits

0x3332,	// (0x000058a0) list_double_heading_pane_vc_g2

0x0001,

0xfa65,	// (0x00011fd3) list_double_heading_pane_vc_g_ParamLimits

0xfa65,	// (0x00011fd3) list_double_heading_pane_vc_g

0x37ed,	// (0x00005d5b) list_double_heading_pane_vc_t1_ParamLimits

0x37ed,	// (0x00005d5b) list_double_heading_pane_vc_t1

0x12e1,	// (0x0000384f) list_double_heading_pane_vc_t2_ParamLimits

0x12e1,	// (0x0000384f) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x00011fd8) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x00011fd8) list_double_heading_pane_vc_t

0x37ff,	// (0x00005d6d) list_double_graphic_pane_vc_g1_ParamLimits

0x37ff,	// (0x00005d6d) list_double_graphic_pane_vc_g1

0x380b,	// (0x00005d79) list_double_graphic_pane_vc_g2_ParamLimits

0x380b,	// (0x00005d79) list_double_graphic_pane_vc_g2

0x0056,	// (0x000025c4) list_double_graphic_pane_vc_g3_ParamLimits

0x0056,	// (0x000025c4) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x00011fdd) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00011fdd) list_double_graphic_pane_vc_g

0x3828,	// (0x00005d96) list_double_graphic_pane_vc_t1_ParamLimits

0x3828,	// (0x00005d96) list_double_graphic_pane_vc_t1

0x3852,	// (0x00005dc0) list_double_graphic_pane_vc_t2_ParamLimits

0x3852,	// (0x00005dc0) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00011fe6) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00011fe6) list_double_graphic_pane_vc_t

0xdec0,	// (0x0001042e) aid_size_cell_fastswap

0x967e,	// (0x0000bbec) aid_size_cell_touch_ParamLimits

0x967e,	// (0x0000bbec) aid_size_cell_touch

0xe047,	// (0x000105b5) popup_fast_swap_wide_window_ParamLimits

0xe047,	// (0x000105b5) popup_fast_swap_wide_window

0x983c,	// (0x0000bdaa) touch_pane_ParamLimits

0x983c,	// (0x0000bdaa) touch_pane

0xe7c8,	// (0x00010d36) button_value_adjust_pane_cp2

0xe7d0,	// (0x00010d3e) button_value_adjust_pane_cp4

0xe7d8,	// (0x00010d46) form_field_data_pane_cp2

0xa068,	// (0x0000c5d6) form_field_data_wide_pane_cp2

0xedd4,	// (0x00011342) bg_scroll_pane_ParamLimits

0xedf3,	// (0x00011361) scroll_handle_pane_ParamLimits

0xee07,	// (0x00011375) scroll_sc2_down_pane_ParamLimits

0xee07,	// (0x00011375) scroll_sc2_down_pane

0xee2e,	// (0x0001139c) scroll_sc2_up_pane_ParamLimits

0xee2e,	// (0x0001139c) scroll_sc2_up_pane

0xbd39,	// (0x0000e2a7) grid_wheel_folder_pane_g1_ParamLimits

0xbd39,	// (0x0000e2a7) grid_wheel_folder_pane_g1

0xf331,	// (0x0001189f) clock_nsta_pane_cp2_ParamLimits

0xf331,	// (0x0001189f) clock_nsta_pane_cp2

0x065e,	// (0x00002bcc) listscroll_midp_pane_ParamLimits

0xa5b0,	// (0x0000cb1e) midp_canvas_pane

0x05ca,	// (0x00002b38) nsta_clock_indic_pane

0x0628,	// (0x00002b96) listscroll_form_pane_vc

0x064c,	// (0x00002bba) listscroll_set_pane_vc_ParamLimits

0x064c,	// (0x00002bba) listscroll_set_pane_vc

0xb0f5,	// (0x0000d663) clock_nsta_pane

0xb11f,	// (0x0000d68d) indicator_nsta_pane

0x1145,	// (0x000036b3) bg_popup_sub_pane_cp2_ParamLimits

0x1159,	// (0x000036c7) find_pane_cp2_ParamLimits

0x1159,	// (0x000036c7) find_pane_cp2

0x116f,	// (0x000036dd) grid_toobar_pane_ParamLimits

0x13a9,	// (0x00003917) list_form_gen_pane_vc_ParamLimits

0x13a9,	// (0x00003917) list_form_gen_pane_vc

0x13bf,	// (0x0000392d) scroll_pane_cp8_vc_ParamLimits

0x13bf,	// (0x0000392d) scroll_pane_cp8_vc

0x14de,	// (0x00003a4c) data_form_wide_pane_vc_ParamLimits

0x14de,	// (0x00003a4c) data_form_wide_pane_vc

0x14ea,	// (0x00003a58) form_field_data_wide_pane_vc_g1

0x14f2,	// (0x00003a60) form_field_data_wide_pane_vc_t1_ParamLimits

0x14f2,	// (0x00003a60) form_field_data_wide_pane_vc_t1

0xe833,	// (0x00010da1) input_focus_pane_cp6_vc_ParamLimits

0xe833,	// (0x00010da1) input_focus_pane_cp6_vc

0xb52e,	// (0x0000da9c) list_midp_pane_ParamLimits

0x2ebf,	// (0x0000542d) scroll_pane_cp16_ParamLimits

0x2ebf,	// (0x0000542d) scroll_pane_cp16

0x187d,	// (0x00003deb) button_value_adjust_pane_ParamLimits

0x187d,	// (0x00003deb) button_value_adjust_pane

0xb950,	// (0x0000debe) button_value_adjust_pane_cp6_ParamLimits

0xb950,	// (0x0000debe) button_value_adjust_pane_cp6

0xba92,	// (0x0000e000) settings_code_pane_cp_ParamLimits

0xba92,	// (0x0000e000) settings_code_pane_cp

0xde9e,	// (0x0001040c) cell_touch_pane_g1

0xde9e,	// (0x0001040c) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00011c6c) cell_touch_pane_g

0xbc12,	// (0x0000e180) cell_touch_pane_cp_ParamLimits

0xbc12,	// (0x0000e180) cell_touch_pane_cp

0xbc2e,	// (0x0000e19c) cell_touch_pane_ParamLimits

0xbc2e,	// (0x0000e19c) cell_touch_pane

0xde9e,	// (0x0001040c) scroll_sc2_down_pane_g1

0xde9e,	// (0x0001040c) scroll_sc2_up_pane_g1

0xe017,	// (0x00010585) bg_set_opt_pane_cp4_vc

0x3372,	// (0x000058e0) list_set_graphic_pane_vc_g1_ParamLimits

0x3372,	// (0x000058e0) list_set_graphic_pane_vc_g1

0xea4e,	// (0x00010fbc) list_set_graphic_pane_vc_g2_ParamLimits

0xea4e,	// (0x00010fbc) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x00011f5c) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x00011f5c) list_set_graphic_pane_vc_g

0x337e,	// (0x000058ec) text_primary_small_cp13_vc_ParamLimits

0x337e,	// (0x000058ec) text_primary_small_cp13_vc

0x3396,	// (0x00005904) list_set_graphic_pane_vc_ParamLimits

0x3396,	// (0x00005904) list_set_graphic_pane_vc

0xe017,	// (0x00010585) input_focus_pane_cp2_vc

0xde9e,	// (0x0001040c) setting_code_pane_vc_g1

0xe17d,	// (0x000106eb) setting_code_pane_vc_t1

0x33ab,	// (0x00005919) set_text_pane_vc_t1_ParamLimits

0x33ab,	// (0x00005919) set_text_pane_vc_t1

0xe017,	// (0x00010585) input_focus_pane_cp1_vc

0x33c9,	// (0x00005937) list_set_text_pane_vc

0xde9e,	// (0x0001040c) setting_text_pane_vc_g1

0xe017,	// (0x00010585) bg_set_opt_pane_cp2_vc

0xe14c,	// (0x000106ba) setting_slider_graphic_pane_vc_g1

0x33d3,	// (0x00005941) setting_slider_graphic_pane_vc_t1

0x33e5,	// (0x00005953) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x00011f61) setting_slider_graphic_pane_vc_t

0x33f7,	// (0x00005965) slider_set_pane_cp_vc

0x3401,	// (0x0000596f) slider_set_pane_vc_g1

0x340a,	// (0x00005978) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x00011f66) slider_set_pane_vc_g

0xe8fc,	// (0x00010e6a) set_opt_bg_pane_g1_copy1

0xe904,	// (0x00010e72) set_opt_bg_pane_g2_copy1

0x3436,	// (0x000059a4) set_opt_bg_pane_g3_copy1

0xe914,	// (0x00010e82) set_opt_bg_pane_g4_copy1

0xe91c,	// (0x00010e8a) set_opt_bg_pane_g5_copy1

0xe924,	// (0x00010e92) set_opt_bg_pane_g6_copy1

0x3440,	// (0x000059ae) set_opt_bg_pane_g7_copy1

0x344a,	// (0x000059b8) set_opt_bg_pane_g8_copy1

0x3454,	// (0x000059c2) set_opt_bg_pane_g9_copy1

0xe017,	// (0x00010585) bg_set_opt_pane_cp_vc

0x345e,	// (0x000059cc) setting_slider_pane_vc_t1

0x346d,	// (0x000059db) setting_slider_pane_vc_t2

0x347f,	// (0x000059ed) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x00011f75) setting_slider_pane_vc_t

0x3491,	// (0x000059ff) slider_set_pane_vc

0x20c2,	// (0x00004630) volume_set_pane_vc_g1

0x20cb,	// (0x00004639) volume_set_pane_vc_g2

0x20d4,	// (0x00004642) volume_set_pane_vc_g3

0x20dd,	// (0x0000464b) volume_set_pane_vc_g4

0x20e6,	// (0x00004654) volume_set_pane_vc_g5

0x20ef,	// (0x0000465d) volume_set_pane_vc_g6

0x20f8,	// (0x00004666) volume_set_pane_vc_g7

0x2101,	// (0x0000466f) volume_set_pane_vc_g8

0x210a,	// (0x00004678) volume_set_pane_vc_g9

0x2113,	// (0x00004681) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x00011f7c) volume_set_pane_vc_g

0x349b,	// (0x00005a09) volume_set_pane_vc

0x34a5,	// (0x00005a13) button_value_adjust_pane_cp1_vc

0x34af,	// (0x00005a1d) list_highlight_pane_cp2_vc

0x34b8,	// (0x00005a26) list_set_pane_vc_ParamLimits

0x34b8,	// (0x00005a26) list_set_pane_vc

0x3528,	// (0x00005a96) main_pane_set_vc_t1_ParamLimits

0x3528,	// (0x00005a96) main_pane_set_vc_t1

0x353d,	// (0x00005aab) main_pane_set_vc_t2_ParamLimits

0x353d,	// (0x00005aab) main_pane_set_vc_t2

0x354f,	// (0x00005abd) main_pane_set_vc_t3_ParamLimits

0x354f,	// (0x00005abd) main_pane_set_vc_t3

0x3563,	// (0x00005ad1) main_pane_set_vc_t4_ParamLimits

0x3563,	// (0x00005ad1) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x00011f91) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x00011f91) main_pane_set_vc_t

0x3577,	// (0x00005ae5) setting_code_pane_vc_ParamLimits

0x3577,	// (0x00005ae5) setting_code_pane_vc

0x3588,	// (0x00005af6) setting_slider_graphic_pane_vc

0x3588,	// (0x00005af6) setting_slider_pane_vc

0x3588,	// (0x00005af6) setting_text_pane_vc

0x3588,	// (0x00005af6) setting_volume_pane_vc

0x3592,	// (0x00005b00) scroll_pane_cp121_vc

0xe7b6,	// (0x00010d24) set_content_pane_vc

0x3870,	// (0x00005dde) button_value_adjust_pane_g1

0x3879,	// (0x00005de7) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00011feb) button_value_adjust_pane_g

0x3882,	// (0x00005df0) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3882,	// (0x00005df0) form_field_slider_wide_pane_vc_t1

0x3894,	// (0x00005e02) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3894,	// (0x00005e02) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x00011ff0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x00011ff0) form_field_slider_wide_pane_vc_t

0xe0c5,	// (0x00010633) input_focus_pane_cp10_vc_ParamLimits

0xe0c5,	// (0x00010633) input_focus_pane_cp10_vc

0x38c0,	// (0x00005e2e) slider_cont_pane_cp1_vc_ParamLimits

0x38c0,	// (0x00005e2e) slider_cont_pane_cp1_vc

0x38d2,	// (0x00005e40) slider_form_pane_g1_cp2

0x340a,	// (0x00005978) slider_form_pane_g2_cp2

0x38ff,	// (0x00005e6d) form_field_slider_pane_vc_t3

0x390d,	// (0x00005e7b) form_field_slider_pane_vc_t4

0x391b,	// (0x00005e89) slider_form_pane_vc_ParamLimits

0x391b,	// (0x00005e89) slider_form_pane_vc

0x3928,	// (0x00005e96) form_field_slider_pane_vc_t1_ParamLimits

0x3928,	// (0x00005e96) form_field_slider_pane_vc_t1

0x3894,	// (0x00005e02) form_field_slider_pane_vc_t2_ParamLimits

0x3894,	// (0x00005e02) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x00012002) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x00012002) form_field_slider_pane_vc_t

0xe0c5,	// (0x00010633) input_focus_pane_cp9_vc_ParamLimits

0xe0c5,	// (0x00010633) input_focus_pane_cp9_vc

0x393e,	// (0x00005eac) slider_cont_pane_vc_ParamLimits

0x393e,	// (0x00005eac) slider_cont_pane_vc

0x3952,	// (0x00005ec0) list_form_graphic_pane_cp_vc_ParamLimits

0x3952,	// (0x00005ec0) list_form_graphic_pane_cp_vc

0x14ea,	// (0x00003a58) form_field_popup_wide_pane_vc_g1

0x3967,	// (0x00005ed5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3967,	// (0x00005ed5) form_field_popup_wide_pane_vc_t1

0xe833,	// (0x00010da1) input_focus_pane_cp8_vc_ParamLimits

0xe833,	// (0x00010da1) input_focus_pane_cp8_vc

0x39ac,	// (0x00005f1a) list_form_wide_pane_vc_ParamLimits

0x39ac,	// (0x00005f1a) list_form_wide_pane_vc

0x39b8,	// (0x00005f26) list_form_graphic_pane_vc_g1

0x39c0,	// (0x00005f2e) list_form_graphic_pane_vc_t1_ParamLimits

0x39c0,	// (0x00005f2e) list_form_graphic_pane_vc_t1

0xe0dd,	// (0x0001064b) list_highlight_pane_cp5_vc_ParamLimits

0xe0dd,	// (0x0001064b) list_highlight_pane_cp5_vc

0x39dc,	// (0x00005f4a) list_form_graphic_pane_vc_ParamLimits

0x39dc,	// (0x00005f4a) list_form_graphic_pane_vc

0x14ea,	// (0x00003a58) form_field_popup_pane_vc_g1

0x39f2,	// (0x00005f60) form_field_popup_pane_vc_t1_ParamLimits

0x39f2,	// (0x00005f60) form_field_popup_pane_vc_t1

0xe833,	// (0x00010da1) input_focus_pane_cp7_vc_ParamLimits

0xe833,	// (0x00010da1) input_focus_pane_cp7_vc

0x3a09,	// (0x00005f77) list_form_pane_vc_ParamLimits

0x3a09,	// (0x00005f77) list_form_pane_vc

0x3a15,	// (0x00005f83) data_form_pane_vc_t1_ParamLimits

0x3a15,	// (0x00005f83) data_form_pane_vc_t1

0xe8fc,	// (0x00010e6a) input_focus_pane_vc_g1

0xe904,	// (0x00010e72) input_focus_pane_vc_g2

0xe90c,	// (0x00010e7a) input_focus_pane_vc_g3

0xe914,	// (0x00010e82) input_focus_pane_vc_g4

0xe91c,	// (0x00010e8a) input_focus_pane_vc_g5

0xe924,	// (0x00010e92) input_focus_pane_vc_g6

0xe92c,	// (0x00010e9a) input_focus_pane_vc_g7

0xe934,	// (0x00010ea2) input_focus_pane_vc_g8

0xe93c,	// (0x00010eaa) input_focus_pane_vc_g9

0xde9e,	// (0x0001040c) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00011bf5) input_focus_pane_vc_g

0x14de,	// (0x00003a4c) data_form_pane_vc_ParamLimits

0x14de,	// (0x00003a4c) data_form_pane_vc

0x14ea,	// (0x00003a58) form_field_data_pane_vc_g1

0x3a32,	// (0x00005fa0) form_field_data_pane_vc_t1_ParamLimits

0x3a32,	// (0x00005fa0) form_field_data_pane_vc_t1

0xe833,	// (0x00010da1) input_focus_pane_vc_ParamLimits

0xe833,	// (0x00010da1) input_focus_pane_vc

0x3a4c,	// (0x00005fba) button_value_adjust_pane_cp3_vc

0x3a54,	// (0x00005fc2) button_value_adjust_pane_cp5_vc

0x3a5c,	// (0x00005fca) form_field_data_pane_vc_ParamLimits

0x3a5c,	// (0x00005fca) form_field_data_pane_vc

0x3a77,	// (0x00005fe5) form_field_data_pane_vc_cp2

0x3a7f,	// (0x00005fed) form_field_data_wide_pane_vc_ParamLimits

0x3a7f,	// (0x00005fed) form_field_data_wide_pane_vc

0x3a99,	// (0x00006007) form_field_data_wide_pane_vc_cp2

0x3aa1,	// (0x0000600f) form_field_popup_pane_vc_ParamLimits

0x3aa1,	// (0x0000600f) form_field_popup_pane_vc

0x3abc,	// (0x0000602a) form_field_popup_wide_pane_vc_ParamLimits

0x3abc,	// (0x0000602a) form_field_popup_wide_pane_vc

0x3ad6,	// (0x00006044) form_field_slider_pane_vc_ParamLimits

0x3ad6,	// (0x00006044) form_field_slider_pane_vc

0x3ae9,	// (0x00006057) form_field_slider_wide_pane_vc_ParamLimits

0x3ae9,	// (0x00006057) form_field_slider_wide_pane_vc

0xbc4c,	// (0x0000e1ba) grid_touch_1_pane_ParamLimits

0xbc4c,	// (0x0000e1ba) grid_touch_1_pane

0xbc60,	// (0x0000e1ce) grid_touch_2_pane_ParamLimits

0xbc60,	// (0x0000e1ce) grid_touch_2_pane

0x3bba,	// (0x00006128) touch_pane_g1_ParamLimits

0x3bba,	// (0x00006128) touch_pane_g1

0x3b22,	// (0x00006090) cell_app_pane_cp_wide_ParamLimits

0x3b22,	// (0x00006090) cell_app_pane_cp_wide

0x3b33,	// (0x000060a1) grid_popup_fast_wide_pane_ParamLimits

0x3b33,	// (0x000060a1) grid_popup_fast_wide_pane

0x3b47,	// (0x000060b5) scroll_pane_cp19_ParamLimits

0x3b47,	// (0x000060b5) scroll_pane_cp19

0xe017,	// (0x00010585) bg_popup_window_pane_cp20

0x3b5b,	// (0x000060c9) listscroll_popup_fast_wide_pane

0xea5a,	// (0x00010fc8) grid_indicator_nsta_pane

0x3b63,	// (0x000060d1) clock_nsta_pane_g1

0x3b6c,	// (0x000060da) clock_nsta_pane_t1

0xbc8c,	// (0x0000e1fa) cell_indicator_nsta_pane_ParamLimits

0xbc8c,	// (0x0000e1fa) cell_indicator_nsta_pane

0x3bba,	// (0x00006128) cell_indicator_nsta_pane_g1

0xbca5,	// (0x0000e213) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x00012013) cell_indicator_nsta_pane_g

0x3bde,	// (0x0000614c) clock_nsta_pane_cp

0x3be6,	// (0x00006154) indicator_nsta_pane_cp

0x3bef,	// (0x0000615d) nsta_clock_indic_pane_g1

0xe1bc,	// (0x0001072a) grid_indicator_pane

0xef20,	// (0x0001148e) scroll_pane_cp29

0xf25b,	// (0x000117c9) indicator_nsta_pane_cp2_ParamLimits

0xf25b,	// (0x000117c9) indicator_nsta_pane_cp2

0xe0dd,	// (0x0001064b) main_apps_wheel_pane

0x1700,	// (0x00003c6e) form_midp_field_text_pane_ParamLimits

0x184f,	// (0x00003dbd) scroll_bar_cp050_ParamLimits

0x3c58,	// (0x000061c6) cell_indicator_pane_ParamLimits

0x3c58,	// (0x000061c6) cell_indicator_pane

0x3c70,	// (0x000061de) cell_indicator_pane_g1

0xbcbb,	// (0x0000e229) grid_wheel_folder_pane_ParamLimits

0xbcbb,	// (0x0000e229) grid_wheel_folder_pane

0xbcc9,	// (0x0000e237) list_wheel_apps_pane_ParamLimits

0xbcc9,	// (0x0000e237) list_wheel_apps_pane

0xbcd7,	// (0x0000e245) main_apps_wheel_pane_g1_ParamLimits

0xbcd7,	// (0x0000e245) main_apps_wheel_pane_g1

0xbce7,	// (0x0000e255) main_apps_wheel_pane_g2_ParamLimits

0xbce7,	// (0x0000e255) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0001202f) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0001202f) main_apps_wheel_pane_g

0xbcf7,	// (0x0000e265) main_apps_wheel_pane_t1_ParamLimits

0xbcf7,	// (0x0000e265) main_apps_wheel_pane_t1

0xbd0f,	// (0x0000e27d) list_wheel_apps_pane_g1

0xbd17,	// (0x0000e285) list_wheel_apps_pane_g2

0xbd1f,	// (0x0000e28d) list_wheel_apps_pane_g3

0xbd27,	// (0x0000e295) list_wheel_apps_pane_g4

0xbd2f,	// (0x0000e29d) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x00012034) list_wheel_apps_pane_g

0xf4bd,	// (0x00011a2b) navi_icon_text_pane

0xafe7,	// (0x0000d555) aid_fill_nsta

0xbd4c,	// (0x0000e2ba) navi_icon_text_pane_g1

0xbd58,	// (0x0000e2c6) navi_icon_text_pane_t1

0xa509,	// (0x0000ca77) list_set_graphic_pane_t1_ParamLimits

0xa509,	// (0x0000ca77) list_set_graphic_pane_t1

0x1fa0,	// (0x0000450e) popup_midp_note_alarm_window_t6_ParamLimits

0x1fa0,	// (0x0000450e) popup_midp_note_alarm_window_t6

0x1fb2,	// (0x00004520) popup_midp_note_alarm_window_t7_ParamLimits

0x1fb2,	// (0x00004520) popup_midp_note_alarm_window_t7

0x1fc4,	// (0x00004532) popup_midp_note_alarm_window_t8_ParamLimits

0x1fc4,	// (0x00004532) popup_midp_note_alarm_window_t8

0x1fd6,	// (0x00004544) popup_midp_note_alarm_window_t9_ParamLimits

0x1fd6,	// (0x00004544) popup_midp_note_alarm_window_t9

0x1fe8,	// (0x00004556) popup_midp_note_alarm_window_t10_ParamLimits

0x1fe8,	// (0x00004556) popup_midp_note_alarm_window_t10

0x1ffa,	// (0x00004568) popup_midp_note_alarm_window_t11_ParamLimits

0x1ffa,	// (0x00004568) popup_midp_note_alarm_window_t11

0x200c,	// (0x0000457a) scroll_pane_cp17_ParamLimits

0x200c,	// (0x0000457a) scroll_pane_cp17

0x20c2,	// (0x00004630) volume_small_pane_cp_g1

0x3d63,	// (0x000062d1) volume_small_pane_cp_g2

0x3d6c,	// (0x000062da) volume_small_pane_cp_g3

0x3d75,	// (0x000062e3) volume_small_pane_cp_g4

0x3d7e,	// (0x000062ec) volume_small_pane_cp_g5

0x3d87,	// (0x000062f5) volume_small_pane_cp_g6

0x3d90,	// (0x000062fe) volume_small_pane_cp_g7

0x3d99,	// (0x00006307) volume_small_pane_cp_g8

0x3da2,	// (0x00006310) volume_small_pane_cp_g9

0x3dab,	// (0x00006319) volume_small_pane_cp_g10

0x01b6,	// (0x00002724) midp_ticker_pane_g1_ParamLimits

0x01c2,	// (0x00002730) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00011cc1) midp_ticker_pane_g_ParamLimits

0xa647,	// (0x0000cbb5) midp_ticker_pane_t1_ParamLimits

0xb00b,	// (0x0000d579) aid_fill_nsta_2

0x183b,	// (0x00003da9) list_form2_midp_pane

0x2c48,	// (0x000051b6) midp_editing_number_pane_ParamLimits

0x2c57,	// (0x000051c5) midp_ticker_pane_ParamLimits

0x3db4,	// (0x00006322) form2_midp_field_pane

0x3dd8,	// (0x00006346) scroll_pane_cp51

0x3df8,	// (0x00006366) form2_midp_button_pane_ParamLimits

0x3df8,	// (0x00006366) form2_midp_button_pane

0x3e0a,	// (0x00006378) form2_midp_content_pane_ParamLimits

0x3e0a,	// (0x00006378) form2_midp_content_pane

0x3e24,	// (0x00006392) form2_midp_field_choice_group_pane

0x3e2c,	// (0x0000639a) form2_midp_field_pane_g1

0x3e34,	// (0x000063a2) form2_midp_field_pane_g2

0x3e3c,	// (0x000063aa) form2_midp_field_pane_g3

0x3e44,	// (0x000063b2) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00012059) form2_midp_field_pane_g

0x3e4c,	// (0x000063ba) form2_midp_gauge_slider_pane

0x3e54,	// (0x000063c2) form2_midp_gauge_wait_pane

0x3e5c,	// (0x000063ca) form2_midp_image_pane_ParamLimits

0x3e5c,	// (0x000063ca) form2_midp_image_pane

0x3e77,	// (0x000063e5) form2_midp_label_pane_ParamLimits

0x3e77,	// (0x000063e5) form2_midp_label_pane

0xbd86,	// (0x0000e2f4) form2_midp_label_pane_cp_ParamLimits

0xbd86,	// (0x0000e2f4) form2_midp_label_pane_cp

0x3eb7,	// (0x00006425) form2_midp_string_pane_ParamLimits

0x3eb7,	// (0x00006425) form2_midp_string_pane

0xbda7,	// (0x0000e315) form2_midp_text_pane_ParamLimits

0xbda7,	// (0x0000e315) form2_midp_text_pane

0x3eea,	// (0x00006458) form2_midp_time_pane

0x3efa,	// (0x00006468) input_focus_pane_cp51_ParamLimits

0x3efa,	// (0x00006468) input_focus_pane_cp51

0x3f12,	// (0x00006480) form2_midp_label_pane_t1_ParamLimits

0x3f12,	// (0x00006480) form2_midp_label_pane_t1

0xbdc8,	// (0x0000e336) form2_mdip_text_pane_t1_ParamLimits

0xbdc8,	// (0x0000e336) form2_mdip_text_pane_t1

0x3f7a,	// (0x000064e8) form2_midp_time_pane_t1

0x3f95,	// (0x00006503) form2_midp_gauge_slider_pane_t1

0xbde7,	// (0x0000e355) form2_midp_gauge_slider_pane_t2

0xbdf9,	// (0x0000e367) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x00012062) form2_midp_gauge_slider_pane_t

0x3fcb,	// (0x00006539) form2_midp_slider_pane

0x3fd7,	// (0x00006545) form2_midp_gauge_wait_pane_t1

0x3fe5,	// (0x00006553) form2_midp_wait_pane_ParamLimits

0x3fe5,	// (0x00006553) form2_midp_wait_pane

0x1531,	// (0x00003a9f) list_single_2graphic_pane_cp4_ParamLimits

0x1531,	// (0x00003a9f) list_single_2graphic_pane_cp4

0x4010,	// (0x0000657e) list_single_midp_graphic_pane_cp_ParamLimits

0x4010,	// (0x0000657e) list_single_midp_graphic_pane_cp

0xe017,	// (0x00010585) list_highlight_pane_cp20

0x4034,	// (0x000065a2) list_single_2graphic_pane_g1_cp4

0x31f7,	// (0x00005765) list_single_2graphic_pane_g2_cp4

0x403c,	// (0x000065aa) list_single_2graphic_pane_t1_cp4

0xe0dd,	// (0x0001064b) list_highlight_pane_cp21

0x404b,	// (0x000065b9) list_single_midp_graphic_pane_g4_cp

0x405a,	// (0x000065c8) list_single_midp_graphic_pane_t1_cp

0xbe0b,	// (0x0000e379) form2_mdip_string_pane_t1_ParamLimits

0xbe0b,	// (0x0000e379) form2_mdip_string_pane_t1

0xe017,	// (0x00010585) bg_wml_button_pane_cp2

0xde9e,	// (0x0001040c) form2_midp_image_pane_g1

0xe760,	// (0x00010cce) list_double_large_graphic_pane_g5_ParamLimits

0xe760,	// (0x00010cce) list_double_large_graphic_pane_g5

0x065e,	// (0x00002bcc) midp_form_pane_ParamLimits

0xe0dd,	// (0x0001064b) main_apps_wheel_pane_ParamLimits

0xacff,	// (0x0000d26d) popup_preview_window_ParamLimits

0xacff,	// (0x0000d26d) popup_preview_window

0x0c2e,	// (0x0000319c) popup_touch_info_window_ParamLimits

0x0c2e,	// (0x0000319c) popup_touch_info_window

0x0c50,	// (0x000031be) popup_touch_menu_window_ParamLimits

0x0c50,	// (0x000031be) popup_touch_menu_window

0xde94,	// (0x00010402) bg_popup_sub_pane_cp6

0x4114,	// (0x00006682) list_touch_menu_pane

0x411c,	// (0x0000668a) list_single_touch_menu_pane_ParamLimits

0x411c,	// (0x0000668a) list_single_touch_menu_pane

0x4134,	// (0x000066a2) list_single_touch_menu_pane_t1

0xe0dd,	// (0x0001064b) bg_popup_sub_pane_cp7_ParamLimits

0xe0dd,	// (0x0001064b) bg_popup_sub_pane_cp7

0x4142,	// (0x000066b0) heading_sub_pane

0x414a,	// (0x000066b8) list_touch_info_pane_ParamLimits

0x414a,	// (0x000066b8) list_touch_info_pane

0x4159,	// (0x000066c7) list_single_touch_info_pane_ParamLimits

0x4159,	// (0x000066c7) list_single_touch_info_pane

0x416b,	// (0x000066d9) list_single_touch_info_pane_t1

0x4179,	// (0x000066e7) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x00012070) list_single_touch_info_pane_t

0x00e5,	// (0x00002653) bg_popup_heading_pane_cp

0x4187,	// (0x000066f5) heading_sub_pane_t1

0x13ea,	// (0x00003958) bg_popup_preview_window_pane_cp_ParamLimits

0x13ea,	// (0x00003958) bg_popup_preview_window_pane_cp

0x4142,	// (0x000066b0) heading_preview_pane

0x414a,	// (0x000066b8) list_preview_pane_ParamLimits

0x414a,	// (0x000066b8) list_preview_pane

0x4195,	// (0x00006703) popup_preview_window_g1

0x4159,	// (0x000066c7) list_single_preview_pane_ParamLimits

0x4159,	// (0x000066c7) list_single_preview_pane

0x419d,	// (0x0000670b) list_single_preview_pane_g1

0x41a5,	// (0x00006713) list_single_preview_pane_t1

0x416b,	// (0x000066d9) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x00012075) list_single_preview_pane_t

0x41b3,	// (0x00006721) bg_popup_heading_pane_cp2_ParamLimits

0x41b3,	// (0x00006721) bg_popup_heading_pane_cp2

0x41c9,	// (0x00006737) heading_preview_pane_g1

0x41d1,	// (0x0000673f) heading_preview_pane_t1_ParamLimits

0x41d1,	// (0x0000673f) heading_preview_pane_t1

0xe1d3,	// (0x00010741) soft_indicator_pane_t1_ParamLimits

0xe708,	// (0x00010c76) scroll_pane_ParamLimits

0xee1c,	// (0x0001138a) scroll_sc2_left_pane

0xee25,	// (0x00011393) scroll_sc2_right_pane

0xee44,	// (0x000113b2) scroll_bg_pane_g1_ParamLimits

0xee59,	// (0x000113c7) scroll_bg_pane_g2_ParamLimits

0xee71,	// (0x000113df) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00011c4c) scroll_bg_pane_g_ParamLimits

0xee44,	// (0x000113b2) scroll_handle_pane_g1_ParamLimits

0xee93,	// (0x00011401) scroll_handle_pane_g2_ParamLimits

0xee71,	// (0x000113df) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00011c53) scroll_handle_pane_g_ParamLimits

0x068e,	// (0x00002bfc) popup_choice_list_window_ParamLimits

0x068e,	// (0x00002bfc) popup_choice_list_window

0x1151,	// (0x000036bf) choice_list_pane

0x1219,	// (0x00003787) cell_toolbar_pane_t1

0x1241,	// (0x000037af) toolbar_button_pane_ParamLimits

0x2642,	// (0x00004bb0) ai_gene_pane_1_t2_ParamLimits

0x2642,	// (0x00004bb0) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x00011e6f) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x00011e6f) ai_gene_pane_1_t

0x41ee,	// (0x0000675c) scroll_sc2_left_pane_g1

0x41ee,	// (0x0000675c) scroll_sc2_right_pane_g1

0x065e,	// (0x00002bcc) bg_popup_sub_pane_cp10

0x41f8,	// (0x00006766) list_choice_list_pane

0x4211,	// (0x0000677f) list_single_choice_list_pane_ParamLimits

0x4211,	// (0x0000677f) list_single_choice_list_pane

0x4229,	// (0x00006797) list_single_choice_list_pane_g1

0xea21,	// (0x00010f8f) list_single_choice_list_pane_t1_ParamLimits

0xea21,	// (0x00010f8f) list_single_choice_list_pane_t1

0x4231,	// (0x0000679f) choice_list_pane_g1

0x4239,	// (0x000067a7) choice_list_pane_t1

0xde94,	// (0x00010402) input_focus_pane_cp11

0xec09,	// (0x00011177) title_pane_stacon_g2_ParamLimits

0xec09,	// (0x00011177) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00011c32) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00011c32) title_pane_stacon_g

0x00e5,	// (0x00002653) cursor_press_pane

0xa97c,	// (0x0000ceea) popup_fep_hwr_window_ParamLimits

0xa97c,	// (0x0000ceea) popup_fep_hwr_window

0x07d2,	// (0x00002d40) popup_fep_vkb_window_ParamLimits

0x07d2,	// (0x00002d40) popup_fep_vkb_window

0x4247,	// (0x000067b5) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0001209e) fep_vkb_side_pane_g_ParamLimits

0x4288,	// (0x000067f6) fep_hwr_candidate_pane_ParamLimits

0x4288,	// (0x000067f6) fep_hwr_candidate_pane

0x42b2,	// (0x00006820) fep_hwr_side_pane_ParamLimits

0x42b2,	// (0x00006820) fep_hwr_side_pane

0x42d4,	// (0x00006842) fep_hwr_top_pane_ParamLimits

0x42d4,	// (0x00006842) fep_hwr_top_pane

0x42ec,	// (0x0000685a) fep_hwr_write_pane_ParamLimits

0x42ec,	// (0x0000685a) fep_hwr_write_pane

0xfb30,	// (0x0001209e) fep_vkb_side_pane_g

0x4326,	// (0x00006894) fep_hwr_top_pane_g1

0x4338,	// (0x000068a6) fep_hwr_top_pane_g2

0x434a,	// (0x000068b8) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0001207a) fep_hwr_top_pane_g

0x435f,	// (0x000068cd) fep_hwr_top_text_pane

0xef8d,	// (0x000114fb) fep_hwr_top_text_pane_g1

0x443b,	// (0x000069a9) fep_hwr_top_text_pane_t1

0x449b,	// (0x00006a09) fep_hwr_candidate_pane_g1

0x470c,	// (0x00006c7a) fep_vkb_keypad_pane_g3_ParamLimits

0x470c,	// (0x00006c7a) fep_vkb_keypad_pane_g3

0x4738,	// (0x00006ca6) fep_vkb_keypad_pane_g4_ParamLimits

0x4738,	// (0x00006ca6) fep_vkb_keypad_pane_g4

0x47af,	// (0x00006d1d) fep_vkb_bottom_pane_g2_ParamLimits

0x47af,	// (0x00006d1d) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x000120a5) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x000120a5) fep_vkb_bottom_pane_g

0x41ee,	// (0x0000675c) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x000120af) cell_vkb_side_pane_g

0x483a,	// (0x00006da8) cell_vkb_side_pane_t1

0x4848,	// (0x00006db6) cell_vkb_side_pane_t1_copy1

0x41ee,	// (0x0000675c) bg_fep_vkb_candidate_pane_g2

0x498c,	// (0x00006efa) cell_vkb_candidate_pane_ParamLimits

0x44cf,	// (0x00006a3d) aid_size_cell_vkb_ParamLimits

0x44cf,	// (0x00006a3d) aid_size_cell_vkb

0x498c,	// (0x00006efa) cell_vkb_candidate_pane

0x49c6,	// (0x00006f34) bg_popup_fep_shadow_pane_g1

0xbf00,	// (0x0000e46e) fep_vkb_bottom_pane_ParamLimits

0xbf00,	// (0x0000e46e) fep_vkb_bottom_pane

0x459e,	// (0x00006b0c) fep_vkb_candidate_pane_ParamLimits

0x459e,	// (0x00006b0c) fep_vkb_candidate_pane

0xbf2c,	// (0x0000e49a) fep_vkb_keypad_pane_ParamLimits

0xbf2c,	// (0x0000e49a) fep_vkb_keypad_pane

0xbf53,	// (0x0000e4c1) fep_vkb_side_pane_ParamLimits

0xbf53,	// (0x0000e4c1) fep_vkb_side_pane

0xbf8f,	// (0x0000e4fd) fep_vkb_top_pane_ParamLimits

0xbf8f,	// (0x0000e4fd) fep_vkb_top_pane

0x4665,	// (0x00006bd3) fep_vkb_top_pane_g1_ParamLimits

0x4665,	// (0x00006bd3) fep_vkb_top_pane_g1

0x4674,	// (0x00006be2) fep_vkb_top_pane_g2_ParamLimits

0x4674,	// (0x00006be2) fep_vkb_top_pane_g2

0x4683,	// (0x00006bf1) fep_vkb_top_pane_g3_ParamLimits

0x4683,	// (0x00006bf1) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x00012095) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x00012095) fep_vkb_top_pane_g

0x46a1,	// (0x00006c0f) fep_vkb_top_text_pane_ParamLimits

0x46a1,	// (0x00006c0f) fep_vkb_top_text_pane

0xbfcb,	// (0x0000e539) fep_vkb_side_pane_g1_ParamLimits

0xbfcb,	// (0x0000e539) fep_vkb_side_pane_g1

0x46fb,	// (0x00006c69) grid_vkb_side_pane_ParamLimits

0x46fb,	// (0x00006c69) grid_vkb_side_pane

0x49ce,	// (0x00006f3c) bg_popup_fep_shadow_pane_g2

0x49d7,	// (0x00006f45) bg_popup_fep_shadow_pane_g3

0x49df,	// (0x00006f4d) bg_popup_fep_shadow_pane_g4

0x49e8,	// (0x00006f56) bg_popup_fep_shadow_pane_g5

0x49f2,	// (0x00006f60) bg_popup_fep_shadow_pane_g6

0x49fa,	// (0x00006f68) bg_popup_fep_shadow_pane_g7

0xe91c,	// (0x00010e8a) bg_popup_fep_shadow_pane_g8

0x475a,	// (0x00006cc8) grid_vkb_keypad_number_pane_ParamLimits

0x475a,	// (0x00006cc8) grid_vkb_keypad_number_pane

0x476e,	// (0x00006cdc) grid_vkb_keypad_pane_ParamLimits

0x476e,	// (0x00006cdc) grid_vkb_keypad_pane

0x4794,	// (0x00006d02) fep_vkb_bottom_pane_g1_ParamLimits

0x4794,	// (0x00006d02) fep_vkb_bottom_pane_g1

0x47bd,	// (0x00006d2b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x47bd,	// (0x00006d2b) grid_vkb_keypad_bottom_left_pane

0x47d2,	// (0x00006d40) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x47d2,	// (0x00006d40) grid_vkb_keypad_bottom_right_pane

0x47e7,	// (0x00006d55) fep_vkb_top_text_pane_g1

0xc012,	// (0x0000e580) fep_vkb_top_text_pane_t1

0xc024,	// (0x0000e592) cell_vkb_side_pane_ParamLimits

0xc024,	// (0x0000e592) cell_vkb_side_pane

0x41ee,	// (0x0000675c) cell_vkb_side_pane_g1

0x4856,	// (0x00006dc4) cell_vkb_keypad_pane_ParamLimits

0x4856,	// (0x00006dc4) cell_vkb_keypad_pane

0x48e3,	// (0x00006e51) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x000120c2) bg_popup_fep_shadow_pane_g

0x41ee,	// (0x0000675c) cell_hwr_side_pane_g1

0x41ee,	// (0x0000675c) cell_hwr_side_pane_g2

0x48ed,	// (0x00006e5b) cell_vkb_keypad_pane_t1

0xc03a,	// (0x0000e5a8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc03a,	// (0x0000e5a8) cell_vkb_keypad_bottom_left_pane

0xc04f,	// (0x0000e5bd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc04f,	// (0x0000e5bd) cell_vkb_keypad_bottom_right_pane

0x41ee,	// (0x0000675c) cell_vkb_keypad_bottom_left_pane_g1

0x41ee,	// (0x0000675c) cell_vkb_keypad_bottom_right_pane_g1

0x4951,	// (0x00006ebf) cell_vkb_keypad_number_pane_ParamLimits

0x4951,	// (0x00006ebf) cell_vkb_keypad_number_pane

0x4970,	// (0x00006ede) cell_vkb_keypad_number_pane_g1

0x497a,	// (0x00006ee8) cell_vkb_keypad_number_pane_g2

0x4983,	// (0x00006ef1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x000120b4) cell_vkb_keypad_number_pane_g

0x48ed,	// (0x00006e5b) cell_vkb_keypad_number_pane_t1

0x49ad,	// (0x00006f1b) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x000120af) cell_hwr_side_pane_g

0x4a0c,	// (0x00006f7a) cell_hwr_side_pane_t1

0x4a1a,	// (0x00006f88) cell_hwr_side_pane_t1_copy1

0x4693,	// (0x00006c01) cell_hwr_candidate_pane_g1

0x4a6a,	// (0x00006fd8) cell_hwr_candidate_pane_t1

0x41ee,	// (0x0000675c) cell_vkb_candidate_pane_g2

0x4abe,	// (0x0000702c) cell_vkb_candidate_pane_t1

0x424f,	// (0x000067bd) bg_popup_fep_shadow_pane_ParamLimits

0x424f,	// (0x000067bd) bg_popup_fep_shadow_pane

0x4306,	// (0x00006874) bg_fep_hwr_top_pane_g4

0x4374,	// (0x000068e2) bg_hwr_side_pane_g1_ParamLimits

0x4374,	// (0x000068e2) bg_hwr_side_pane_g1

0xbeb9,	// (0x0000e427) cell_hwr_side_pane_ParamLimits

0xbeb9,	// (0x0000e427) cell_hwr_side_pane

0x43e6,	// (0x00006954) fep_hwr_write_pane_g1_ParamLimits

0x43e6,	// (0x00006954) fep_hwr_write_pane_g1

0x43f3,	// (0x00006961) fep_hwr_write_pane_g2_ParamLimits

0x43f3,	// (0x00006961) fep_hwr_write_pane_g2

0x4400,	// (0x0000696e) fep_hwr_write_pane_g3_ParamLimits

0x4400,	// (0x0000696e) fep_hwr_write_pane_g3

0xbed9,	// (0x0000e447) fep_hwr_write_pane_g4_ParamLimits

0xbed9,	// (0x0000e447) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x00012081) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x00012081) fep_hwr_write_pane_g

0x4306,	// (0x00006874) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4306,	// (0x00006874) bg_fep_hwr_candidate_pane_g2

0x4449,	// (0x000069b7) cell_hwr_candidate_pane_ParamLimits

0x4449,	// (0x000069b7) cell_hwr_candidate_pane

0x449b,	// (0x00006a09) fep_hwr_candidate_pane_g1_ParamLimits

0x44fd,	// (0x00006a6b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x44fd,	// (0x00006a6b) bg_popup_fep_shadow_pane_cp2

0x4693,	// (0x00006c01) fep_vkb_top_pane_g4_ParamLimits

0x4693,	// (0x00006c01) fep_vkb_top_pane_g4

0x46d9,	// (0x00006c47) fep_vkb_side_pane_g2_ParamLimits

0x46d9,	// (0x00006c47) fep_vkb_side_pane_g2

0x9f8c,	// (0x0000c4fa) list_setting_pane_t4_ParamLimits

0x9f8c,	// (0x0000c4fa) list_setting_pane_t4

0xa008,	// (0x0000c576) list_setting_number_pane_t5_ParamLimits

0xa008,	// (0x0000c576) list_setting_number_pane_t5

0xa373,	// (0x0000c8e1) list_double_heading_pane_cp2_ParamLimits

0xa373,	// (0x0000c8e1) list_double_heading_pane_cp2

0x4acc,	// (0x0000703a) list_double_heading_pane_g1_cp2_ParamLimits

0x4acc,	// (0x0000703a) list_double_heading_pane_g1_cp2

0x4ad8,	// (0x00007046) list_double_heading_pane_g2_cp2_ParamLimits

0x4ad8,	// (0x00007046) list_double_heading_pane_g2_cp2

0x4aec,	// (0x0000705a) list_double_heading_pane_t1_cp2_ParamLimits

0x4aec,	// (0x0000705a) list_double_heading_pane_t1_cp2

0x4b02,	// (0x00007070) list_double_heading_pane_t2_cp2_ParamLimits

0x4b02,	// (0x00007070) list_double_heading_pane_t2_cp2

0xde8c,	// (0x000103fa) aid_value_unit2

0xe06b,	// (0x000105d9) popup_preview_fixed_window

0xe2b3,	// (0x00010821) bg_popup_preview_window_pane_cp02

0x4b14,	// (0x00007082) list_preview_fixed_pane

0x4b5a,	// (0x000070c8) list_empty_pane_fp_ParamLimits

0x4b5a,	// (0x000070c8) list_empty_pane_fp

0x4b5a,	// (0x000070c8) list_single_cale_day_pane_fp_ParamLimits

0x4b5a,	// (0x000070c8) list_single_cale_day_pane_fp

0x4b5a,	// (0x000070c8) list_single_graphic_heading_pane_fp_ParamLimits

0x4b5a,	// (0x000070c8) list_single_graphic_heading_pane_fp

0x4b5a,	// (0x000070c8) list_single_graphic_pane_fp_ParamLimits

0x4b5a,	// (0x000070c8) list_single_graphic_pane_fp

0x4b5a,	// (0x000070c8) list_single_heading_pane_fp_ParamLimits

0x4b5a,	// (0x000070c8) list_single_heading_pane_fp

0x4b5a,	// (0x000070c8) list_single_pane_fp_ParamLimits

0x4b5a,	// (0x000070c8) list_single_pane_fp

0x4b73,	// (0x000070e1) list_single_pane_fp_g1_ParamLimits

0x4b73,	// (0x000070e1) list_single_pane_fp_g1

0x4acc,	// (0x0000703a) list_single_pane_fp_g2_ParamLimits

0x4acc,	// (0x0000703a) list_single_pane_fp_g2

0x4ad8,	// (0x00007046) list_single_pane_fp_g3_ParamLimits

0x4ad8,	// (0x00007046) list_single_pane_fp_g3

0x4b7f,	// (0x000070ed) list_single_pane_fp_g4_ParamLimits

0x4b7f,	// (0x000070ed) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x000120e3) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x000120e3) list_single_pane_fp_g

0x4b8b,	// (0x000070f9) list_single_pane_fp_t1_ParamLimits

0x4b8b,	// (0x000070f9) list_single_pane_fp_t1

0x4ba2,	// (0x00007110) list_single_graphic_pane_fp_g1_ParamLimits

0x4ba2,	// (0x00007110) list_single_graphic_pane_fp_g1

0x4b73,	// (0x000070e1) list_single_graphic_pane_fp_g2_ParamLimits

0x4b73,	// (0x000070e1) list_single_graphic_pane_fp_g2

0x4acc,	// (0x0000703a) list_single_graphic_pane_fp_g3_ParamLimits

0x4acc,	// (0x0000703a) list_single_graphic_pane_fp_g3

0x4ad8,	// (0x00007046) list_single_graphic_pane_fp_g4_ParamLimits

0x4ad8,	// (0x00007046) list_single_graphic_pane_fp_g4

0x4b7f,	// (0x000070ed) list_single_graphic_pane_fp_g5_ParamLimits

0x4b7f,	// (0x000070ed) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x000120ec) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x000120ec) list_single_graphic_pane_fp_g

0x4bae,	// (0x0000711c) list_single_graphic_pane_fp_t1_ParamLimits

0x4bae,	// (0x0000711c) list_single_graphic_pane_fp_t1

0x4ba2,	// (0x00007110) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4ba2,	// (0x00007110) list_single_graphic_heading_pane_fp_g1

0x4b73,	// (0x000070e1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4b73,	// (0x000070e1) list_single_graphic_heading_pane_fp_g2

0x4acc,	// (0x0000703a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4acc,	// (0x0000703a) list_single_graphic_heading_pane_fp_g3

0x4ad8,	// (0x00007046) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4ad8,	// (0x00007046) list_single_graphic_heading_pane_fp_g4

0x4b7f,	// (0x000070ed) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4b7f,	// (0x000070ed) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x000120ec) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x000120ec) list_single_graphic_heading_pane_fp_g

0x4bc4,	// (0x00007132) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4bc4,	// (0x00007132) list_single_graphic_heading_pane_fp_t1

0x4bda,	// (0x00007148) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4bda,	// (0x00007148) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x000120f7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x000120f7) list_single_graphic_heading_pane_fp_t

0x4bec,	// (0x0000715a) list_single_cale_day_pane_fp_g1_ParamLimits

0x4bec,	// (0x0000715a) list_single_cale_day_pane_fp_g1

0x4c24,	// (0x00007192) list_single_cale_day_pane_fp_g2_ParamLimits

0x4c24,	// (0x00007192) list_single_cale_day_pane_fp_g2

0x4c30,	// (0x0000719e) list_single_cale_day_pane_fp_g3_ParamLimits

0x4c30,	// (0x0000719e) list_single_cale_day_pane_fp_g3

0x4c58,	// (0x000071c6) list_single_cale_day_pane_fp_g4_ParamLimits

0x4c58,	// (0x000071c6) list_single_cale_day_pane_fp_g4

0x4c7c,	// (0x000071ea) list_single_cale_day_pane_fp_g5_ParamLimits

0x4c7c,	// (0x000071ea) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x000120fc) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x000120fc) list_single_cale_day_pane_fp_g

0x4ca0,	// (0x0000720e) list_single_cale_day_pane_fp_t1_ParamLimits

0x4ca0,	// (0x0000720e) list_single_cale_day_pane_fp_t1

0x4cc6,	// (0x00007234) list_single_cale_day_pane_fp_t2_ParamLimits

0x4cc6,	// (0x00007234) list_single_cale_day_pane_fp_t2

0x4cdf,	// (0x0000724d) list_single_cale_day_pane_fp_t3_ParamLimits

0x4cdf,	// (0x0000724d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x00012107) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x00012107) list_single_cale_day_pane_fp_t

0x4b73,	// (0x000070e1) list_empty_pane_fp_g1_ParamLimits

0x4b73,	// (0x000070e1) list_empty_pane_fp_g1

0x4cf8,	// (0x00007266) list_empty_pane_fp_t1

0x4d06,	// (0x00007274) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0001210e) list_empty_pane_fp_t

0x4b73,	// (0x000070e1) list_single_heading_pane_fp_g1_ParamLimits

0x4b73,	// (0x000070e1) list_single_heading_pane_fp_g1

0x4acc,	// (0x0000703a) list_single_heading_pane_fp_g2_ParamLimits

0x4acc,	// (0x0000703a) list_single_heading_pane_fp_g2

0x4ad8,	// (0x00007046) list_single_heading_pane_fp_g3_ParamLimits

0x4ad8,	// (0x00007046) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x00012113) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x00012113) list_single_heading_pane_fp_g

0x4d14,	// (0x00007282) list_single_heading_pane_fp_t1_ParamLimits

0x4d14,	// (0x00007282) list_single_heading_pane_fp_t1

0x4d26,	// (0x00007294) list_single_heading_pane_fp_t2_ParamLimits

0x4d26,	// (0x00007294) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0001211a) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0001211a) list_single_heading_pane_fp_t

0xea36,	// (0x00010fa4) aid_size_cell_fast

0xe296,	// (0x00010804) soft_indicator_pane_cp1_t1

0xea8d,	// (0x00010ffb) cell_app_pane_cp2_ParamLimits

0xea8d,	// (0x00010ffb) cell_app_pane_cp2

0x4271,	// (0x000067df) fep_hwr_candidate_drop_down_list_pane

0x44b5,	// (0x00006a23) fep_hwr_candidate_pane_g3_ParamLimits

0x44b5,	// (0x00006a23) fep_hwr_candidate_pane_g3

0x44c2,	// (0x00006a30) fep_hwr_candidate_pane_g4_ParamLimits

0x44c2,	// (0x00006a30) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0001208e) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0001208e) fep_hwr_candidate_pane_g

0x458d,	// (0x00006afb) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x458d,	// (0x00006afb) fep_vkb_candidate_drop_down_list_pane

0x49b5,	// (0x00006f23) fep_vkb_candidate_pane_g3

0x49bd,	// (0x00006f2b) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x000120bb) fep_vkb_candidate_pane_g

0x4693,	// (0x00006c01) cell_hwr_candidate_pane_g1_ParamLimits

0x4a28,	// (0x00006f96) cell_hwr_candidate_pane_g3_ParamLimits

0x4a28,	// (0x00006f96) cell_hwr_candidate_pane_g3

0x4a49,	// (0x00006fb7) cell_hwr_candidate_pane_g4_ParamLimits

0x4a49,	// (0x00006fb7) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x000120d5) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x000120d5) cell_hwr_candidate_pane_g

0x4a88,	// (0x00006ff6) cell_vkb_candidate_pane_g3_ParamLimits

0x4a88,	// (0x00006ff6) cell_vkb_candidate_pane_g3

0x4aa3,	// (0x00007011) cell_vkb_candidate_pane_g4_ParamLimits

0x4aa3,	// (0x00007011) cell_vkb_candidate_pane_g4

0x4d3c,	// (0x000072aa) cell_app_pane_cp2_g1_ParamLimits

0x4d3c,	// (0x000072aa) cell_app_pane_cp2_g1

0x4d5a,	// (0x000072c8) cell_app_pane_cp2_g2_ParamLimits

0x4d5a,	// (0x000072c8) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0001211f) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0001211f) cell_app_pane_cp2_g

0x4d66,	// (0x000072d4) cell_app_pane_cp2_t1_ParamLimits

0x4d66,	// (0x000072d4) cell_app_pane_cp2_t1

0xe833,	// (0x00010da1) grid_highlight_pane_cp1_ParamLimits

0xe833,	// (0x00010da1) grid_highlight_pane_cp1

0x4d78,	// (0x000072e6) cell_hwr_candidate_pane_cp1_ParamLimits

0x4d78,	// (0x000072e6) cell_hwr_candidate_pane_cp1

0x4693,	// (0x00006c01) fep_hwr_candidate_drop_down_list_pane_g1

0x4d9c,	// (0x0000730a) fep_hwr_candidate_drop_down_list_pane_g2

0x4da9,	// (0x00007317) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00012124) fep_hwr_candidate_drop_down_list_pane_g

0x4db6,	// (0x00007324) fep_hwr_candidate_drop_down_list_scroll_pane

0x4dbf,	// (0x0000732d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4dbf,	// (0x0000732d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x4dcc,	// (0x0000733a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4dcc,	// (0x0000733a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x4dd9,	// (0x00007347) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4dd9,	// (0x00007347) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4a88,	// (0x00006ff6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4a88,	// (0x00006ff6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4aa3,	// (0x00007011) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4aa3,	// (0x00007011) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x4de6,	// (0x00007354) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4de6,	// (0x00007354) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x4e01,	// (0x0000736f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4e01,	// (0x0000736f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x4e1c,	// (0x0000738a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4e1c,	// (0x0000738a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0001212b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0001212b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e37,	// (0x000073a5) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e37,	// (0x000073a5) cell_vkb_candidate_pane_cp1

0x4693,	// (0x00006c01) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4693,	// (0x00006c01) fep_vkb_candidate_drop_down_list_pane_g1

0x4d9c,	// (0x0000730a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4d9c,	// (0x0000730a) fep_vkb_candidate_drop_down_list_pane_g2

0x4da9,	// (0x00007317) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4da9,	// (0x00007317) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00012124) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x00012124) fep_vkb_candidate_drop_down_list_pane_g

0x4e5d,	// (0x000073cb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e5d,	// (0x000073cb) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e6a,	// (0x000073d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e6a,	// (0x000073d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e77,	// (0x000073e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e77,	// (0x000073e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e83,	// (0x000073f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e83,	// (0x000073f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4a28,	// (0x00006f96) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4a28,	// (0x00006f96) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4a49,	// (0x00006fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4a49,	// (0x00006fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4e8f,	// (0x000073fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e8f,	// (0x000073fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4eb0,	// (0x0000741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4eb0,	// (0x0000741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4ed1,	// (0x0000743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4ed1,	// (0x0000743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0001213c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0001213c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9892,	// (0x0000be00) title_pane_g1_ParamLimits

0x98a5,	// (0x0000be13) title_pane_g2_ParamLimits

0xf54e,	// (0x00011abc) title_pane_g_ParamLimits

0xef7d,	// (0x000114eb) aid_call2_pane

0xef85,	// (0x000114f3) aid_call_pane

0xef8d,	// (0x000114fb) popup_clock_analogue_window_g1

0xef8d,	// (0x000114fb) popup_clock_analogue_window_g2

0xef95,	// (0x00011503) popup_clock_analogue_window_g3

0xef9e,	// (0x0001150c) popup_clock_analogue_window_g4

0xde9e,	// (0x0001040c) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00011c61) popup_clock_analogue_window_g

0xefa6,	// (0x00011514) popup_clock_analogue_window_t1

0xf003,	// (0x00011571) clock_digital_number_pane_ParamLimits

0xf003,	// (0x00011571) clock_digital_number_pane

0xf00f,	// (0x0001157d) clock_digital_number_pane_cp02_ParamLimits

0xf00f,	// (0x0001157d) clock_digital_number_pane_cp02

0xf01b,	// (0x00011589) clock_digital_number_pane_cp03_ParamLimits

0xf01b,	// (0x00011589) clock_digital_number_pane_cp03

0xf027,	// (0x00011595) clock_digital_number_pane_cp04_ParamLimits

0xf027,	// (0x00011595) clock_digital_number_pane_cp04

0xf033,	// (0x000115a1) clock_digital_separator_pane_ParamLimits

0xf033,	// (0x000115a1) clock_digital_separator_pane

0xf03f,	// (0x000115ad) popup_clock_digital_window_t1_ParamLimits

0xf03f,	// (0x000115ad) popup_clock_digital_window_t1

0xde9e,	// (0x0001040c) clock_digital_number_pane_g1

0xde9e,	// (0x0001040c) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00011c6c) clock_digital_number_pane_g

0xde9e,	// (0x0001040c) clock_digital_separator_pane_g1

0xde9e,	// (0x0001040c) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00011c6c) clock_digital_separator_pane_g

0xafe7,	// (0x0000d555) aid_fill_nsta_ParamLimits

0xb11f,	// (0x0000d68d) indicator_nsta_pane_ParamLimits

0x0f7e,	// (0x000034ec) popup_clock_analogue_window

0x0f7e,	// (0x000034ec) popup_clock_digital_window

0xea5a,	// (0x00010fc8) grid_indicator_nsta_pane_ParamLimits

0x3b7a,	// (0x000060e8) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0001200e) clock_nsta_pane_t

0xedca,	// (0x00011338) aid_size_max_handle

0xa2e6,	// (0x0000c854) aid_size_min_handle

0x00e5,	// (0x00002653) editor_scroll_pane

0x4eec,	// (0x0000745a) ex_editor_pane

0xe9fc,	// (0x00010f6a) scroll_pane_cp13

0xe734,	// (0x00010ca2) scroll_pane_cp14

0xefdb,	// (0x00011549) scroll_pane_cp36

0xa386,	// (0x0000c8f4) list_single_graphic_hl_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f4) list_single_graphic_hl_pane_cp2

0xbb20,	// (0x0000e08e) list_single_graphic_hl_pane_ParamLimits

0xbb20,	// (0x0000e08e) list_single_graphic_hl_pane

0x4ef4,	// (0x00007462) aid_size_min_hl_cp1

0x4efd,	// (0x0000746b) list_highlight_pane_cp34_ParamLimits

0x4efd,	// (0x0000746b) list_highlight_pane_cp34

0x4f0e,	// (0x0000747c) list_single_graphic_hl_pane_g1_ParamLimits

0x4f0e,	// (0x0000747c) list_single_graphic_hl_pane_g1

0xe73c,	// (0x00010caa) list_single_graphic_hl_pane_g2_ParamLimits

0xe73c,	// (0x00010caa) list_single_graphic_hl_pane_g2

0xe73c,	// (0x00010caa) list_single_graphic_hl_pane_g3_ParamLimits

0xe73c,	// (0x00010caa) list_single_graphic_hl_pane_g3

0xe748,	// (0x00010cb6) list_single_graphic_hl_pane_g4_ParamLimits

0xe748,	// (0x00010cb6) list_single_graphic_hl_pane_g4

0x4f81,	// (0x000074ef) list_single_graphic_hl_pane_g5_ParamLimits

0x4f81,	// (0x000074ef) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0001214d) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0001214d) list_single_graphic_hl_pane_g

0xc06a,	// (0x0000e5d8) list_single_graphic_hl_pane_t1_ParamLimits

0xc06a,	// (0x0000e5d8) list_single_graphic_hl_pane_t1

0x4f51,	// (0x000074bf) aid_size_min_hl_cp2

0x4f5a,	// (0x000074c8) list_highlight_pane_cp34_cp2_ParamLimits

0x4f5a,	// (0x000074c8) list_highlight_pane_cp34_cp2

0x4f0e,	// (0x0000747c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f0e,	// (0x0000747c) list_single_graphic_hl_pane_g1_cp2

0x4f67,	// (0x000074d5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f67,	// (0x000074d5) list_single_graphic_hl_pane_g2_cp2

0xc080,	// (0x0000e5ee) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc080,	// (0x0000e5ee) list_single_graphic_hl_pane_g3_cp2

0xe748,	// (0x00010cb6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe748,	// (0x00010cb6) list_single_graphic_hl_pane_g4_cp2

0x4f81,	// (0x000074ef) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f81,	// (0x000074ef) list_single_graphic_hl_pane_g5_cp2

0xa758,	// (0x0000ccc6) control_pane_g4_ParamLimits

0xa758,	// (0x0000ccc6) control_pane_g4

0x065e,	// (0x00002bcc) bg_popup_sub_pane_cp10_ParamLimits

0x41f8,	// (0x00006766) list_choice_list_pane_ParamLimits

0x4207,	// (0x00006775) scroll_pane_cp23

0xe2b3,	// (0x00010821) bg_popup_preview_window_pane_cp02_ParamLimits

0x4b14,	// (0x00007082) list_preview_fixed_pane_ParamLimits

0x4b2a,	// (0x00007098) list_preview_fixed_pane_cp_ParamLimits

0x4b2a,	// (0x00007098) list_preview_fixed_pane_cp

0x4b36,	// (0x000070a4) popup_preview_fixed_window_g1_ParamLimits

0x4b36,	// (0x000070a4) popup_preview_fixed_window_g1

0x4b42,	// (0x000070b0) popup_preview_fixed_window_g2_ParamLimits

0x4b42,	// (0x000070b0) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x000120dc) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x000120dc) popup_preview_fixed_window_g

0xecee,	// (0x0001125c) aid_navi_side_left_pane_ParamLimits

0xed03,	// (0x00011271) aid_navi_side_right_pane_ParamLimits

0xed1b,	// (0x00011289) navi_icon_pane_stacon_ParamLimits

0xed2f,	// (0x0001129d) navi_navi_pane_stacon_ParamLimits

0xed1b,	// (0x00011289) navi_text_pane_stacon_ParamLimits

0xde94,	// (0x00010402) main_text_info_pane

0x4fab,	// (0x00007519) listscroll_text_info_pane

0x4fb3,	// (0x00007521) list_text_info_pane_ParamLimits

0x4fb3,	// (0x00007521) list_text_info_pane

0x4fc2,	// (0x00007530) scroll_pane_cp24_ParamLimits

0x4fc2,	// (0x00007530) scroll_pane_cp24

0xc08e,	// (0x0000e5fc) list_text_info_pane_t1_ParamLimits

0xc08e,	// (0x0000e5fc) list_text_info_pane_t1

0xa8e0,	// (0x0000ce4e) popup_fast_swap2_window_ParamLimits

0xa8e0,	// (0x0000ce4e) popup_fast_swap2_window

0x5005,	// (0x00007573) aid_size_cell_fast2

0xde94,	// (0x00010402) bg_popup_window_pane_cp17

0x1867,	// (0x00003dd5) heading_pane_cp2

0xe4b9,	// (0x00010a27) listscroll_fast2_pane

0x500f,	// (0x0000757d) grid_fast2_pane

0x5019,	// (0x00007587) listscroll_fast2_pane_g1

0x5023,	// (0x00007591) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x00012158) listscroll_fast2_pane_g

0xe9fc,	// (0x00010f6a) scroll_pane_cp26

0x502d,	// (0x0000759b) cell_fast2_pane_ParamLimits

0x502d,	// (0x0000759b) cell_fast2_pane

0x5044,	// (0x000075b2) cell_fast2_pane_g1

0x504d,	// (0x000075bb) cell_fast2_pane_g2

0x5056,	// (0x000075c4) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0001215d) cell_fast2_pane_g

0xe4fb,	// (0x00010a69) grid_highlight_pane_cp9

0xe510,	// (0x00010a7e) main_eswt_pane_ParamLimits

0xe510,	// (0x00010a7e) main_eswt_pane

0x4fd7,	// (0x00007545) list_single_text_info_pane

0x505e,	// (0x000075cc) eswt_ctrl_button_pane

0x505e,	// (0x000075cc) eswt_ctrl_canvas_pane

0x5066,	// (0x000075d4) eswt_ctrl_combo_pane

0x505e,	// (0x000075cc) eswt_ctrl_default_pane

0x505e,	// (0x000075cc) eswt_ctrl_label_pane

0x506e,	// (0x000075dc) eswt_ctrl_wait_pane

0x5076,	// (0x000075e4) eswt_shell_pane

0xde94,	// (0x00010402) listscroll_eswt_app_pane

0x5096,	// (0x00007604) popup_eswt_tasktip_window_ParamLimits

0x5096,	// (0x00007604) popup_eswt_tasktip_window

0x13ea,	// (0x00003958) bg_popup_window_pane_cp18

0x50a7,	// (0x00007615) eswt_control_pane_g1_ParamLimits

0x50a7,	// (0x00007615) eswt_control_pane_g1

0x50b4,	// (0x00007622) eswt_control_pane_g2_ParamLimits

0x50b4,	// (0x00007622) eswt_control_pane_g2

0x50c1,	// (0x0000762f) eswt_control_pane_g3_ParamLimits

0x50c1,	// (0x0000762f) eswt_control_pane_g3

0x50ce,	// (0x0000763c) eswt_control_pane_g4_ParamLimits

0x50ce,	// (0x0000763c) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x00012164) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x00012164) eswt_control_pane_g

0xe833,	// (0x00010da1) bg_button_pane_ParamLimits

0xe833,	// (0x00010da1) bg_button_pane

0xe510,	// (0x00010a7e) common_borders_pane_copy2_ParamLimits

0xe510,	// (0x00010a7e) common_borders_pane_copy2

0x50db,	// (0x00007649) control_button_pane_g1_ParamLimits

0x50db,	// (0x00007649) control_button_pane_g1

0x50e7,	// (0x00007655) control_button_pane_g2_ParamLimits

0x50e7,	// (0x00007655) control_button_pane_g2

0x50f3,	// (0x00007661) control_button_pane_g3_ParamLimits

0x50f3,	// (0x00007661) control_button_pane_g3

0x0002,

0xfbff,	// (0x0001216d) control_button_pane_g_ParamLimits

0xfbff,	// (0x0001216d) control_button_pane_g

0x5107,	// (0x00007675) control_button_pane_t1

0x5115,	// (0x00007683) control_button_pane_t2

0x0001,

0xfc06,	// (0x00012174) control_button_pane_t

0x124d,	// (0x000037bb) bg_button_pane_g1

0x1255,	// (0x000037c3) bg_button_pane_g2

0x125d,	// (0x000037cb) bg_button_pane_g3

0x1265,	// (0x000037d3) bg_button_pane_g4

0x126d,	// (0x000037db) bg_button_pane_g5

0x1275,	// (0x000037e3) bg_button_pane_g6

0x127d,	// (0x000037eb) bg_button_pane_g7

0x1285,	// (0x000037f3) bg_button_pane_g8

0x128d,	// (0x000037fb) bg_button_pane_g9

0x0008,

0xf855,	// (0x00011dc3) bg_button_pane_g

0x41b3,	// (0x00006721) common_borders_pane_ParamLimits

0x41b3,	// (0x00006721) common_borders_pane

0x50a7,	// (0x00007615) eswt_control_pane_g1_copy1_ParamLimits

0x50a7,	// (0x00007615) eswt_control_pane_g1_copy1

0x50b4,	// (0x00007622) eswt_control_pane_g2_copy1_ParamLimits

0x50b4,	// (0x00007622) eswt_control_pane_g2_copy1

0x50c1,	// (0x0000762f) eswt_control_pane_g3_copy1_ParamLimits

0x50c1,	// (0x0000762f) eswt_control_pane_g3_copy1

0x50ce,	// (0x0000763c) eswt_control_pane_g4_copy1_ParamLimits

0x50ce,	// (0x0000763c) eswt_control_pane_g4_copy1

0x41ee,	// (0x0000675c) bg_eswt_ctrl_canvas_pane_g1

0x41b3,	// (0x00006721) common_borders_pane_cp2_ParamLimits

0x41b3,	// (0x00006721) common_borders_pane_cp2

0x41b3,	// (0x00006721) common_borders_pane_cp3_ParamLimits

0x41b3,	// (0x00006721) common_borders_pane_cp3

0x5123,	// (0x00007691) separator_horizontal_pane

0x512b,	// (0x00007699) separator_vertical_pane

0x50a7,	// (0x00007615) eswt_control_pane_g1_copy2_ParamLimits

0x50a7,	// (0x00007615) eswt_control_pane_g1_copy2

0x50b4,	// (0x00007622) eswt_control_pane_g2_copy2_ParamLimits

0x50b4,	// (0x00007622) eswt_control_pane_g2_copy2

0x50c1,	// (0x0000762f) eswt_control_pane_g3_copy2_ParamLimits

0x50c1,	// (0x0000762f) eswt_control_pane_g3_copy2

0x50ce,	// (0x0000763c) eswt_control_pane_g4_copy2_ParamLimits

0x50ce,	// (0x0000763c) eswt_control_pane_g4_copy2

0xde94,	// (0x00010402) common_borders_pane_cp4

0x5134,	// (0x000076a2) separator_horizontal_pane_g1

0x513d,	// (0x000076ab) separator_horizontal_pane_g2

0x5146,	// (0x000076b4) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x00012179) separator_horizontal_pane_g

0x50a7,	// (0x00007615) eswt_control_pane_g1_copy3_ParamLimits

0x50a7,	// (0x00007615) eswt_control_pane_g1_copy3

0x50b4,	// (0x00007622) eswt_control_pane_g2_copy3_ParamLimits

0x50b4,	// (0x00007622) eswt_control_pane_g2_copy3

0x50c1,	// (0x0000762f) eswt_control_pane_g3_copy3_ParamLimits

0x50c1,	// (0x0000762f) eswt_control_pane_g3_copy3

0x50ce,	// (0x0000763c) eswt_control_pane_g4_copy3_ParamLimits

0x50ce,	// (0x0000763c) eswt_control_pane_g4_copy3

0xde94,	// (0x00010402) common_borders_pane_cp5

0x514f,	// (0x000076bd) separator_vertical_pane_g1

0x5158,	// (0x000076c6) separator_vertical_pane_g2

0x5161,	// (0x000076cf) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x00012180) separator_vertical_pane_g

0x50a7,	// (0x00007615) eswt_control_pane_g1_copy4_ParamLimits

0x50a7,	// (0x00007615) eswt_control_pane_g1_copy4

0x50b4,	// (0x00007622) eswt_control_pane_g2_copy4_ParamLimits

0x50b4,	// (0x00007622) eswt_control_pane_g2_copy4

0x50c1,	// (0x0000762f) eswt_control_pane_g3_copy4_ParamLimits

0x50c1,	// (0x0000762f) eswt_control_pane_g3_copy4

0x50ce,	// (0x0000763c) eswt_control_pane_g4_copy4_ParamLimits

0x50ce,	// (0x0000763c) eswt_control_pane_g4_copy4

0xc0b0,	// (0x0000e61e) eswt_ctrl_combo_button_pane

0xc0b8,	// (0x0000e626) eswt_ctrl_input_pane

0xc0c0,	// (0x0000e62e) popup_choice_list_window_cp70

0xc0c8,	// (0x0000e636) eswt_ctrl_input_pane_t1

0xde94,	// (0x00010402) input_focus_pane_cp70

0x41b3,	// (0x00006721) bg_button_pane_cp70_ParamLimits

0x41b3,	// (0x00006721) bg_button_pane_cp70

0xc0d6,	// (0x0000e644) eswt_ctrl_combo_button_pane_g1

0x5198,	// (0x00007706) wait_bar_pane_cp70

0x13ea,	// (0x00003958) bg_popup_window_pane_cp70_ParamLimits

0x13ea,	// (0x00003958) bg_popup_window_pane_cp70

0x51a0,	// (0x0000770e) popup_eswt_tasktip_window_t1

0x51b6,	// (0x00007724) wait_bar_pane_cp71_ParamLimits

0x51b6,	// (0x00007724) wait_bar_pane_cp71

0x51c2,	// (0x00007730) grid_eswt_app_pane

0xee25,	// (0x00011393) scroll_pane_cp70

0xc0de,	// (0x0000e64c) cell_eswt_app_pane_ParamLimits

0xc0de,	// (0x0000e64c) cell_eswt_app_pane

0xc110,	// (0x0000e67e) cell_eswt_app_pane_g1_ParamLimits

0xc110,	// (0x0000e67e) cell_eswt_app_pane_g1

0xc13f,	// (0x0000e6ad) cell_eswt_app_pane_g2_ParamLimits

0xc13f,	// (0x0000e6ad) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x00012187) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x00012187) cell_eswt_app_pane_g

0xc168,	// (0x0000e6d6) cell_eswt_app_pane_t1_ParamLimits

0xc168,	// (0x0000e6d6) cell_eswt_app_pane_t1

0x5287,	// (0x000077f5) grid_highlight_pane_cp70_ParamLimits

0x5287,	// (0x000077f5) grid_highlight_pane_cp70

0xf512,	// (0x00011a80) set_content_pane_g1

0xa6ee,	// (0x0000cc5c) status_small_volume_pane

0x5293,	// (0x00007801) status_small_volume_pane_g1

0x529b,	// (0x00007809) volume_small2_pane

0x52a4,	// (0x00007812) volume_small2_pane_g1

0x52ad,	// (0x0000781b) volume_small2_pane_g2

0x52b6,	// (0x00007824) volume_small2_pane_g3

0x52bf,	// (0x0000782d) volume_small2_pane_g4

0x52c8,	// (0x00007836) volume_small2_pane_g5

0x52d1,	// (0x0000783f) volume_small2_pane_g6

0x52da,	// (0x00007848) volume_small2_pane_g7

0x52e3,	// (0x00007851) volume_small2_pane_g8

0x52ec,	// (0x0000785a) volume_small2_pane_g9

0x52f5,	// (0x00007863) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0001218c) volume_small2_pane_g

0x47e7,	// (0x00006d55) fep_vkb_top_text_pane_g1_ParamLimits

0xc012,	// (0x0000e580) fep_vkb_top_text_pane_t1_ParamLimits

0x4b4e,	// (0x000070bc) popup_preview_fixed_window_g3_ParamLimits

0x4b4e,	// (0x000070bc) popup_preview_fixed_window_g3

0xaf7a,	// (0x0000d4e8) popup_toolbar_trans_pane

0xb93f,	// (0x0000dead) aid_height_set_list_ParamLimits

0x2a6c,	// (0x00004fda) aid_size_parent_ParamLimits

0x065e,	// (0x00002bcc) list_highlight_pane_cp2_ParamLimits

0xf512,	// (0x00011a80) set_content_pane_g1_ParamLimits

0xbb34,	// (0x0000e0a2) list_single_image_pane_ParamLimits

0xbb34,	// (0x0000e0a2) list_single_image_pane

0xc19a,	// (0x0000e708) aid_size_cell_image_ParamLimits

0xc19a,	// (0x0000e708) aid_size_cell_image

0xc1a7,	// (0x0000e715) grid_single_image_pane_ParamLimits

0xc1a7,	// (0x0000e715) grid_single_image_pane

0xe85e,	// (0x00010dcc) list_single_image_pane_g1_ParamLimits

0xe85e,	// (0x00010dcc) list_single_image_pane_g1

0xe86a,	// (0x00010dd8) list_single_image_pane_g2_ParamLimits

0xe86a,	// (0x00010dd8) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x000121a1) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x000121a1) list_single_image_pane_g

0x5319,	// (0x00007887) list_single_image_pane_t1_ParamLimits

0x5319,	// (0x00007887) list_single_image_pane_t1

0xc1b5,	// (0x0000e723) cell_image_list_pane_ParamLimits

0xc1b5,	// (0x0000e723) cell_image_list_pane

0xc1c9,	// (0x0000e737) cell_image_list_pane_g1

0xc1d2,	// (0x0000e740) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x000121a6) cell_image_list_pane_g

0x5357,	// (0x000078c5) aid_size_cell_tb_trans_pane

0xe833,	// (0x00010da1) bg_tb_trans_pane

0x5369,	// (0x000078d7) grid_tb_trans_pane

0x124d,	// (0x000037bb) bg_tb_trans_pane_g1

0x1255,	// (0x000037c3) bg_tb_trans_pane_g2

0x125d,	// (0x000037cb) bg_tb_trans_pane_g3

0x1265,	// (0x000037d3) bg_tb_trans_pane_g4

0x126d,	// (0x000037db) bg_tb_trans_pane_g5

0x1285,	// (0x000037f3) bg_tb_trans_pane_g6

0x128d,	// (0x000037fb) bg_tb_trans_pane_g7

0x1275,	// (0x000037e3) bg_tb_trans_pane_g8

0x127d,	// (0x000037eb) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x000121ab) bg_tb_trans_pane_g

0x537d,	// (0x000078eb) cell_toolbar_trans_pane_ParamLimits

0x537d,	// (0x000078eb) cell_toolbar_trans_pane

0x41ee,	// (0x0000675c) cell_toolbar_trans_pane_g1

0xbd6a,	// (0x0000e2d8) list_form2_midp_pane_t1

0xbd78,	// (0x0000e2e6) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x00012054) list_form2_midp_pane_t

0x3dd8,	// (0x00006346) scroll_pane_cp51_ParamLimits

0x3ff5,	// (0x00006563) form2_midp_wait_pane_g1

0x3ffe,	// (0x0000656c) form2_midp_wait_pane_g2

0x4007,	// (0x00006575) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x00012069) form2_midp_wait_pane_g

0xe0dd,	// (0x0001064b) list_highlight_pane_cp21_ParamLimits

0x404b,	// (0x000065b9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x405a,	// (0x000065c8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2c8d,	// (0x000051fb) list_single_2graphic_im_pane_ParamLimits

0x2c8d,	// (0x000051fb) list_single_2graphic_im_pane

0xc1db,	// (0x0000e749) list_single_2graphic_im_pane_g1_ParamLimits

0xc1db,	// (0x0000e749) list_single_2graphic_im_pane_g1

0xc1ec,	// (0x0000e75a) list_single_2graphic_im_pane_g2_ParamLimits

0xc1ec,	// (0x0000e75a) list_single_2graphic_im_pane_g2

0xc1f8,	// (0x0000e766) list_single_2graphic_im_pane_g3_ParamLimits

0xc1f8,	// (0x0000e766) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x000121be) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x000121be) list_single_2graphic_im_pane_g

0xc20c,	// (0x0000e77a) list_single_2graphic_im_pane_t1_ParamLimits

0xc20c,	// (0x0000e77a) list_single_2graphic_im_pane_t1

0x4b5a,	// (0x000070c8) list_single_graphic_2heading_pane_fp_ParamLimits

0x4b5a,	// (0x000070c8) list_single_graphic_2heading_pane_fp

0x4ba2,	// (0x00007110) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4ba2,	// (0x00007110) list_single_graphic_2heading_pane_fp_g1

0x4b73,	// (0x000070e1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4b73,	// (0x000070e1) list_single_graphic_2heading_pane_fp_g2

0x4acc,	// (0x0000703a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4acc,	// (0x0000703a) list_single_graphic_2heading_pane_fp_g3

0x4ad8,	// (0x00007046) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4ad8,	// (0x00007046) list_single_graphic_2heading_pane_fp_g4

0x4b7f,	// (0x000070ed) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4b7f,	// (0x000070ed) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x000120ec) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x000120ec) list_single_graphic_2heading_pane_fp_g

0x5411,	// (0x0000797f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5411,	// (0x0000797f) list_single_graphic_2heading_pane_fp_t1

0x4bda,	// (0x00007148) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4bda,	// (0x00007148) list_single_graphic_2heading_pane_fp_t2

0x5427,	// (0x00007995) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5427,	// (0x00007995) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x000121c7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x000121c7) list_single_graphic_2heading_pane_fp_t

0x4423,	// (0x00006991) fep_hwr_write_pane_g5_ParamLimits

0x4423,	// (0x00006991) fep_hwr_write_pane_g5

0x442f,	// (0x0000699d) fep_hwr_write_pane_g6_ParamLimits

0x442f,	// (0x0000699d) fep_hwr_write_pane_g6

0x5076,	// (0x000075e4) eswt_shell_pane_ParamLimits

0x13ea,	// (0x00003958) bg_popup_window_pane_cp18_ParamLimits

0x2912,	// (0x00004e80) heading_pane_cp70

0x51a0,	// (0x0000770e) popup_eswt_tasktip_window_t1_ParamLimits

0xb044,	// (0x0000d5b2) aid_touch_tab_arrow_left

0xb05a,	// (0x0000d5c8) aid_touch_tab_arrow_right

0xe075,	// (0x000105e3) title_pane_g3_ParamLimits

0xe075,	// (0x000105e3) title_pane_g3

0xe78d,	// (0x00010cfb) set_value_pane_g1

0xaf7a,	// (0x0000d4e8) popup_toolbar_trans_pane_ParamLimits

0x5357,	// (0x000078c5) aid_size_cell_tb_trans_pane_ParamLimits

0xe833,	// (0x00010da1) bg_tb_trans_pane_ParamLimits

0x5369,	// (0x000078d7) grid_tb_trans_pane_ParamLimits

0xe2b3,	// (0x00010821) cont_note_pane_ParamLimits

0xe2b3,	// (0x00010821) cont_note_pane

0xe510,	// (0x00010a7e) cont_snote2_single_text_pane_ParamLimits

0xe510,	// (0x00010a7e) cont_snote2_single_text_pane

0xe510,	// (0x00010a7e) cont_snote2_single_graphic_pane_ParamLimits

0xe510,	// (0x00010a7e) cont_snote2_single_graphic_pane

0x1a83,	// (0x00003ff1) cont_note_wait_pane_ParamLimits

0x1a83,	// (0x00003ff1) cont_note_wait_pane

0x1a83,	// (0x00003ff1) cont_note_image_pane_ParamLimits

0x1a83,	// (0x00003ff1) cont_note_image_pane

0x543d,	// (0x000079ab) popup_note2_window_g1_ParamLimits

0x543d,	// (0x000079ab) popup_note2_window_g1

0x546e,	// (0x000079dc) popup_note2_window_t1_ParamLimits

0x546e,	// (0x000079dc) popup_note2_window_t1

0x54b3,	// (0x00007a21) popup_note2_window_t2_ParamLimits

0x54b3,	// (0x00007a21) popup_note2_window_t2

0x54f8,	// (0x00007a66) popup_note2_window_t3_ParamLimits

0x54f8,	// (0x00007a66) popup_note2_window_t3

0x553d,	// (0x00007aab) popup_note2_window_t4_ParamLimits

0x553d,	// (0x00007aab) popup_note2_window_t4

0xe337,	// (0x000108a5) popup_note2_window_t5_ParamLimits

0xe337,	// (0x000108a5) popup_note2_window_t5

0x0004,

0xfc65,	// (0x000121d3) popup_note2_window_t_ParamLimits

0xfc65,	// (0x000121d3) popup_note2_window_t

0x556c,	// (0x00007ada) popup_note2_image_window_g1_ParamLimits

0x556c,	// (0x00007ada) popup_note2_image_window_g1

0x5578,	// (0x00007ae6) popup_note2_image_window_g2_ParamLimits

0x5578,	// (0x00007ae6) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x000121de) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x000121de) popup_note2_image_window_g

0x558a,	// (0x00007af8) popup_note2_image_window_t1_ParamLimits

0x558a,	// (0x00007af8) popup_note2_image_window_t1

0x55a2,	// (0x00007b10) popup_note2_image_window_t2_ParamLimits

0x55a2,	// (0x00007b10) popup_note2_image_window_t2

0x55ba,	// (0x00007b28) popup_note2_image_window_t3_ParamLimits

0x55ba,	// (0x00007b28) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x000121e3) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x000121e3) popup_note2_image_window_t

0x1a91,	// (0x00003fff) popup_note2_wait_window_g1_ParamLimits

0x1a91,	// (0x00003fff) popup_note2_wait_window_g1

0x55d6,	// (0x00007b44) popup_note2_wait_window_g2_ParamLimits

0x55d6,	// (0x00007b44) popup_note2_wait_window_g2

0x1aa9,	// (0x00004017) popup_note2_wait_window_g3_ParamLimits

0x1aa9,	// (0x00004017) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x000121ea) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x000121ea) popup_note2_wait_window_g

0x55e2,	// (0x00007b50) popup_note2_wait_window_t1_ParamLimits

0x55e2,	// (0x00007b50) popup_note2_wait_window_t1

0x5600,	// (0x00007b6e) popup_note2_wait_window_t2_ParamLimits

0x5600,	// (0x00007b6e) popup_note2_wait_window_t2

0x561e,	// (0x00007b8c) popup_note2_wait_window_t3_ParamLimits

0x561e,	// (0x00007b8c) popup_note2_wait_window_t3

0x5630,	// (0x00007b9e) popup_note2_wait_window_t4_ParamLimits

0x5630,	// (0x00007b9e) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x000121f1) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x000121f1) popup_note2_wait_window_t

0x5642,	// (0x00007bb0) wait_bar2_pane_ParamLimits

0x5642,	// (0x00007bb0) wait_bar2_pane

0x565a,	// (0x00007bc8) popup_snote2_single_text_window_g1_ParamLimits

0x565a,	// (0x00007bc8) popup_snote2_single_text_window_g1

0x5682,	// (0x00007bf0) popup_snote2_single_text_window_t1_ParamLimits

0x5682,	// (0x00007bf0) popup_snote2_single_text_window_t1

0x56ce,	// (0x00007c3c) popup_snote2_single_text_window_t2_ParamLimits

0x56ce,	// (0x00007c3c) popup_snote2_single_text_window_t2

0x571a,	// (0x00007c88) popup_snote2_single_text_window_t3_ParamLimits

0x571a,	// (0x00007c88) popup_snote2_single_text_window_t3

0x575b,	// (0x00007cc9) popup_snote2_single_text_window_t4_ParamLimits

0x575b,	// (0x00007cc9) popup_snote2_single_text_window_t4

0x5791,	// (0x00007cff) popup_snote2_single_text_window_t5_ParamLimits

0x5791,	// (0x00007cff) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x000121fa) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x000121fa) popup_snote2_single_text_window_t

0x57bc,	// (0x00007d2a) popup_snote2_single_graphic_window_g1_ParamLimits

0x57bc,	// (0x00007d2a) popup_snote2_single_graphic_window_g1

0x57e4,	// (0x00007d52) popup_snote2_single_graphic_window_g2_ParamLimits

0x57e4,	// (0x00007d52) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x00012205) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x00012205) popup_snote2_single_graphic_window_g

0x580c,	// (0x00007d7a) popup_snote2_single_graphic_window_t1_ParamLimits

0x580c,	// (0x00007d7a) popup_snote2_single_graphic_window_t1

0x5858,	// (0x00007dc6) popup_snote2_single_graphic_window_t2_ParamLimits

0x5858,	// (0x00007dc6) popup_snote2_single_graphic_window_t2

0x571a,	// (0x00007c88) popup_snote2_single_graphic_window_t3_ParamLimits

0x571a,	// (0x00007c88) popup_snote2_single_graphic_window_t3

0x575b,	// (0x00007cc9) popup_snote2_single_graphic_window_t4_ParamLimits

0x575b,	// (0x00007cc9) popup_snote2_single_graphic_window_t4

0x5791,	// (0x00007cff) popup_snote2_single_graphic_window_t5_ParamLimits

0x5791,	// (0x00007cff) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0001220a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0001220a) popup_snote2_single_graphic_window_t

0x3c37,	// (0x000061a5) clock_nsta_pane_cp2_t1

0x3c37,	// (0x000061a5) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0001202a) clock_nsta_pane_cp2_t

0xe852,	// (0x00010dc0) form_field_data_wide_pane_g1_ParamLimits

0xe85e,	// (0x00010dcc) form_field_data_wide_pane_g2_ParamLimits

0xe85e,	// (0x00010dcc) form_field_data_wide_pane_g2

0xe86a,	// (0x00010dd8) form_field_data_wide_pane_g3_ParamLimits

0xe86a,	// (0x00010dd8) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00011be4) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00011be4) form_field_data_wide_pane_g

0xbc76,	// (0x0000e1e4) grid_touch_3_pane_ParamLimits

0xbc76,	// (0x0000e1e4) grid_touch_3_pane

0xc23d,	// (0x0000e7ab) cell_touch_3_pane_ParamLimits

0xc23d,	// (0x0000e7ab) cell_touch_3_pane

0x41ee,	// (0x0000675c) cell_touch_3_pane_g1

0x41ee,	// (0x0000675c) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x000120af) cell_touch_3_pane_g

0xe369,	// (0x000108d7) cont_query_data_pane

0xe371,	// (0x000108df) cont_query_data_pane_cp1

0x58d7,	// (0x00007e45) button_value_adjust_pane_cp7

0x58df,	// (0x00007e4d) query_popup_pane_cp3

0xf067,	// (0x000115d5) bg_popup_sub_pane_cp22_ParamLimits

0xf07d,	// (0x000115eb) navi_navi_volume_pane_cp2

0xf098,	// (0x00011606) popup_side_volume_key_window_g2

0xf0a7,	// (0x00011615) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00011c7a) popup_side_volume_key_window_g

0xf0c4,	// (0x00011632) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00011c81) popup_side_volume_key_window_t

0xf415,	// (0x00011983) popup_side_volume_key_window_ParamLimits

0x9d7b,	// (0x0000c2e9) list_double_graphic_pane_g4_ParamLimits

0x9d7b,	// (0x0000c2e9) list_double_graphic_pane_g4

0xbb0b,	// (0x0000e079) list_single_2heading_msg_pane_ParamLimits

0xbb0b,	// (0x0000e079) list_single_2heading_msg_pane

0xc287,	// (0x0000e7f5) list_single_2heading_msg_pane_g1_ParamLimits

0xc287,	// (0x0000e7f5) list_single_2heading_msg_pane_g1

0xc293,	// (0x0000e801) list_single_2heading_msg_pane_g2_ParamLimits

0xc293,	// (0x0000e801) list_single_2heading_msg_pane_g2

0xc2a6,	// (0x0000e814) list_single_2heading_msg_pane_g3_ParamLimits

0xc2a6,	// (0x0000e814) list_single_2heading_msg_pane_g3

0xc2b2,	// (0x0000e820) list_single_2heading_msg_pane_g4_ParamLimits

0xc2b2,	// (0x0000e820) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x00012215) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x00012215) list_single_2heading_msg_pane_g

0xc2ca,	// (0x0000e838) list_single_2heading_msg_pane_t1_ParamLimits

0xc2ca,	// (0x0000e838) list_single_2heading_msg_pane_t1

0xc2f2,	// (0x0000e860) list_single_2heading_msg_pane_t2_ParamLimits

0xc2f2,	// (0x0000e860) list_single_2heading_msg_pane_t2

0xc35d,	// (0x0000e8cb) list_single_2heading_msg_pane_t3_ParamLimits

0xc35d,	// (0x0000e8cb) list_single_2heading_msg_pane_t3

0x59d0,	// (0x00007f3e) list_single_2heading_msg_pane_t4_ParamLimits

0x59d0,	// (0x00007f3e) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0001221e) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0001221e) list_single_2heading_msg_pane_t

0xe081,	// (0x000105ef) title_pane_g4_ParamLimits

0xe081,	// (0x000105ef) title_pane_g4

0xec16,	// (0x00011184) title_pane_stacon_g3_ParamLimits

0xec16,	// (0x00011184) title_pane_stacon_g3

0x53d4,	// (0x00007942) list_single_2graphic_im_pane_g4_ParamLimits

0x53d4,	// (0x00007942) list_single_2graphic_im_pane_g4

0x265f,	// (0x00004bcd) popup_side_volume_key_window_cp

0x30fe,	// (0x0000566c) main_idle_act2_pane_t1

0x1295,	// (0x00003803) toolbar_button_pane_g10

0x9c32,	// (0x0000c1a0) popup_toolbar_window_cp1

0x3c28,	// (0x00006196) clock_nsta_pane_cp_t1

0x3c28,	// (0x00006196) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x00012025) clock_nsta_pane_cp_t

0xf07d,	// (0x000115eb) navi_navi_volume_pane_cp2_ParamLimits

0xf08c,	// (0x000115fa) popup_side_volume_key_window_g1_ParamLimits

0xf098,	// (0x00011606) popup_side_volume_key_window_g2_ParamLimits

0xf0a7,	// (0x00011615) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00011c7a) popup_side_volume_key_window_g_ParamLimits

0x425d,	// (0x000067cb) fep_hwr_aid_pane

0x4306,	// (0x00006874) bg_fep_hwr_top_pane_g4_ParamLimits

0x4326,	// (0x00006894) fep_hwr_top_pane_g1_ParamLimits

0x4338,	// (0x000068a6) fep_hwr_top_pane_g2_ParamLimits

0x434a,	// (0x000068b8) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0001207a) fep_hwr_top_pane_g_ParamLimits

0x435f,	// (0x000068cd) fep_hwr_top_text_pane_ParamLimits

0x2414,	// (0x00004982) aid_touch_tab_arrow_arrow_2

0x241d,	// (0x0000498b) aid_touch_tab_arrow_left_2

0x4271,	// (0x000067df) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x42a8,	// (0x00006816) fep_hwr_prediction_pane

0x45e1,	// (0x00006b4f) fep_vkb_prediction_pane

0xbff2,	// (0x0000e560) fep_vkb_side_pane_g3_ParamLimits

0xbff2,	// (0x0000e560) fep_vkb_side_pane_g3

0x4693,	// (0x00006c01) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4d9c,	// (0x0000730a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4da9,	// (0x00007317) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x00012124) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x59f5,	// (0x00007f63) fep_hwr_prediction_pane_g1

0x59ff,	// (0x00007f6d) fep_hwr_prediction_pane_g2

0x5a07,	// (0x00007f75) fep_hwr_prediction_pane_g3

0x5a0f,	// (0x00007f7d) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x00012227) fep_hwr_prediction_pane_g

0x59f5,	// (0x00007f63) fep_vkb_prediction_pane_g1

0x5a17,	// (0x00007f85) fep_vkb_prediction_pane_g2

0x5a1f,	// (0x00007f8d) fep_vkb_prediction_pane_g3

0x5a27,	// (0x00007f95) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x00012230) fep_vkb_prediction_pane_g

0x29d3,	// (0x00004f41) slider_set_pane_g3

0x29e7,	// (0x00004f55) slider_set_pane_g4

0x29ff,	// (0x00004f6d) slider_set_pane_g5

0x29d3,	// (0x00004f41) slider_set_pane_g6

0x2a15,	// (0x00004f83) slider_set_pane_g7

0x2bf1,	// (0x0000515f) slider_form_pane_g3

0x2bfa,	// (0x00005168) slider_form_pane_g4

0x2c02,	// (0x00005170) slider_form_pane_g5

0x2bf1,	// (0x0000515f) slider_form_pane_g6

0xbaae,	// (0x0000e01c) slider_form_pane_g7

0x3412,	// (0x00005980) slider_set_pane_vc_g3

0x341b,	// (0x00005989) slider_set_pane_vc_g4

0x3424,	// (0x00005992) slider_set_pane_vc_g5

0x3412,	// (0x00005980) slider_set_pane_vc_g6

0x342d,	// (0x0000599b) slider_set_pane_vc_g7

0x38db,	// (0x00005e49) slider_form_pane_vc_g1

0x38e4,	// (0x00005e52) slider_form_pane_vc_g2

0x38ed,	// (0x00005e5b) slider_form_pane_vc_g3

0x38db,	// (0x00005e49) slider_form_pane_vc_g4

0x38f6,	// (0x00005e64) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x00011ff7) slider_form_pane_vc_g

0xde94,	// (0x00010402) main_idle_act3_pane

0x5a2f,	// (0x00007f9d) ai3_links_pane

0xc3cb,	// (0x0000e939) popup_ai3_data_window_ParamLimits

0xc3cb,	// (0x0000e939) popup_ai3_data_window

0xde94,	// (0x00010402) grid_ai3_links_pane

0xc3e9,	// (0x0000e957) cell_ai3_links_pane_ParamLimits

0xc3e9,	// (0x0000e957) cell_ai3_links_pane

0x5a70,	// (0x00007fde) bg_popup_sub_pane_cp11

0x5a7d,	// (0x00007feb) cell_ai3_links_pane_g1

0xde94,	// (0x00010402) bg_popup_sub_pane_cp12

0x5aa2,	// (0x00008010) heading_ai3_data_pane

0x5aaa,	// (0x00008018) list_ai3_gene_pane

0x5ab6,	// (0x00008024) popup_ai3_data_window_g1

0x5abe,	// (0x0000802c) heading_ai3_data_pane_g1

0x5ac6,	// (0x00008034) heading_ai3_data_pane_t1

0x5ad4,	// (0x00008042) list_double_ai3_gene_pane_ParamLimits

0x5ad4,	// (0x00008042) list_double_ai3_gene_pane

0x5ae1,	// (0x0000804f) list_single_ai3_gene_pane_ParamLimits

0x5ae1,	// (0x0000804f) list_single_ai3_gene_pane

0x41b3,	// (0x00006721) list_highlight_pane_cp7_ParamLimits

0x41b3,	// (0x00006721) list_highlight_pane_cp7

0x5aee,	// (0x0000805c) list_single_a13_gene_pane_t1_ParamLimits

0x5aee,	// (0x0000805c) list_single_a13_gene_pane_t1

0x5b05,	// (0x00008073) list_single_ai3_gene_pane_g1

0x5b0e,	// (0x0000807c) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x00012239) list_single_ai3_gene_pane_g

0x5b16,	// (0x00008084) list_double_ai3_gene_pane_g1_ParamLimits

0x5b16,	// (0x00008084) list_double_ai3_gene_pane_g1

0x5b22,	// (0x00008090) list_double_ai3_gene_pane_t1_ParamLimits

0x5b22,	// (0x00008090) list_double_ai3_gene_pane_t1

0x5b3e,	// (0x000080ac) list_double_ai3_gene_pane_t2_ParamLimits

0x5b3e,	// (0x000080ac) list_double_ai3_gene_pane_t2

0x5b53,	// (0x000080c1) list_double_ai3_gene_pane_t3_ParamLimits

0x5b53,	// (0x000080c1) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0001223e) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0001223e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x58f0,	// (0x00007e5e) aid_size_min_col_2

0xc271,	// (0x0000e7df) aid_size_min_msg_ParamLimits

0xc271,	// (0x0000e7df) aid_size_min_msg

0xc006,	// (0x0000e574) fep_vkb_top_text_pane_g2_ParamLimits

0xc006,	// (0x0000e574) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x000120aa) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x000120aa) fep_vkb_top_text_pane_g

0xde94,	// (0x00010402) main_hc_apps_shell_pane

0x5b70,	// (0x000080de) grid_hc_apps_pane_ParamLimits

0x5b70,	// (0x000080de) grid_hc_apps_pane

0x5b7f,	// (0x000080ed) list_hc_apps_pane

0x5b87,	// (0x000080f5) scroll_pane_cp37_ParamLimits

0x5b87,	// (0x000080f5) scroll_pane_cp37

0xc403,	// (0x0000e971) cell_hc_apps_pane_ParamLimits

0xc403,	// (0x0000e971) cell_hc_apps_pane

0xc4cd,	// (0x0000ea3b) cell_hc_apps_pane_g1_ParamLimits

0xc4cd,	// (0x0000ea3b) cell_hc_apps_pane_g1

0x5c7c,	// (0x000081ea) cell_hc_apps_pane_g2_ParamLimits

0x5c7c,	// (0x000081ea) cell_hc_apps_pane_g2

0x5c98,	// (0x00008206) cell_hc_apps_pane_g3_ParamLimits

0x5c98,	// (0x00008206) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x00012245) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x00012245) cell_hc_apps_pane_g

0xc4fa,	// (0x0000ea68) cell_hc_apps_pane_t1_ParamLimits

0xc4fa,	// (0x0000ea68) cell_hc_apps_pane_t1

0xe2b3,	// (0x00010821) grid_highlight_pane_cp10_ParamLimits

0xe2b3,	// (0x00010821) grid_highlight_pane_cp10

0xc53a,	// (0x0000eaa8) list_single_hc_apps_pane_ParamLimits

0xc53a,	// (0x0000eaa8) list_single_hc_apps_pane

0xc574,	// (0x0000eae2) list_single_hc_apps_pane_g1

0xc58d,	// (0x0000eafb) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0001224c) list_single_hc_apps_pane_g

0xc5a6,	// (0x0000eb14) list_single_hc_apps_pane_g2_copy1

0xc5c2,	// (0x0000eb30) list_single_hc_apps_pane_t1

0xe0dd,	// (0x0001064b) bg_set_opt_pane_cp_ParamLimits

0xe0eb,	// (0x00010659) setting_slider_pane_t1_ParamLimits

0xe104,	// (0x00010672) setting_slider_pane_t2_ParamLimits

0xe11e,	// (0x0001068c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00011acc) setting_slider_pane_t_ParamLimits

0xe136,	// (0x000106a4) slider_set_pane_ParamLimits

0x04bb,	// (0x00002a29) control_pane_g5_ParamLimits

0x04bb,	// (0x00002a29) control_pane_g5

0x29ba,	// (0x00004f28) slider_set_pane_g1_ParamLimits

0x29c7,	// (0x00004f35) slider_set_pane_g2_ParamLimits

0x29d3,	// (0x00004f41) slider_set_pane_g3_ParamLimits

0x29e7,	// (0x00004f55) slider_set_pane_g4_ParamLimits

0x29ff,	// (0x00004f6d) slider_set_pane_g5_ParamLimits

0x29d3,	// (0x00004f41) slider_set_pane_g6_ParamLimits

0x2a15,	// (0x00004f83) slider_set_pane_g7_ParamLimits

0xf953,	// (0x00011ec1) slider_set_pane_g_ParamLimits

0xf4bd,	// (0x00011a2b) navi_icon_text_pane_ParamLimits

0xb00b,	// (0x0000d579) aid_fill_nsta_2_ParamLimits

0xb044,	// (0x0000d5b2) aid_touch_tab_arrow_left_ParamLimits

0xb05a,	// (0x0000d5c8) aid_touch_tab_arrow_right_ParamLimits

0xb0f5,	// (0x0000d663) clock_nsta_pane_ParamLimits

0xb7da,	// (0x0000dd48) navi_icon_pane_g1_ParamLimits

0xb7e6,	// (0x0000dd54) navi_text_pane_t1_ParamLimits

0xbd4c,	// (0x0000e2ba) navi_icon_text_pane_g1_ParamLimits

0xbd58,	// (0x0000e2c6) navi_icon_text_pane_t1_ParamLimits

0xc574,	// (0x0000eae2) list_single_hc_apps_pane_g1_ParamLimits

0xc58d,	// (0x0000eafb) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0001224c) list_single_hc_apps_pane_g_ParamLimits

0xc5a6,	// (0x0000eb14) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc5c2,	// (0x0000eb30) list_single_hc_apps_pane_t1_ParamLimits

0x97b8,	// (0x0000bd26) popup_toolbar2_fixed_window_ParamLimits

0x97b8,	// (0x0000bd26) popup_toolbar2_fixed_window

0xaf70,	// (0x0000d4de) popup_toolbar2_float_window

0xde94,	// (0x00010402) bg_popup_sub_pane_cp27

0x5db5,	// (0x00008323) grid_toolbar2_float_pane

0xde94,	// (0x00010402) bg_popup_sub_pane_cp26

0x5db5,	// (0x00008323) grid_toolbar2_fixed_pane

0xc5f0,	// (0x0000eb5e) cell_toolbar2_fixed_pane_ParamLimits

0xc5f0,	// (0x0000eb5e) cell_toolbar2_fixed_pane

0xc60d,	// (0x0000eb7b) cell_toolbar2_fixed_pane_g1

0x5dd6,	// (0x00008344) toolbar2_fixed_button_pane

0x124d,	// (0x000037bb) toolbar2_fixed_button_pane_g1

0x1255,	// (0x000037c3) toolbar2_fixed_button_pane_g2

0x125d,	// (0x000037cb) toolbar2_fixed_button_pane_g3

0x1265,	// (0x000037d3) toolbar2_fixed_button_pane_g4

0x126d,	// (0x000037db) toolbar2_fixed_button_pane_g5

0x1275,	// (0x000037e3) toolbar2_fixed_button_pane_g6

0x127d,	// (0x000037eb) toolbar2_fixed_button_pane_g7

0x1285,	// (0x000037f3) toolbar2_fixed_button_pane_g8

0x128d,	// (0x000037fb) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x00011dc3) toolbar2_fixed_button_pane_g

0x5dde,	// (0x0000834c) cell_toolbar2_float_pane_ParamLimits

0x5dde,	// (0x0000834c) cell_toolbar2_float_pane

0x5def,	// (0x0000835d) cell_toolbar2_float_pane_g1

0x5dd6,	// (0x00008344) toolbar2_fixed_button_pane_cp

0xbeee,	// (0x0000e45c) fep_vkb_accented_list_pane_ParamLimits

0xbeee,	// (0x0000e45c) fep_vkb_accented_list_pane

0x4a04,	// (0x00006f72) bg_popup_fep_shadow_pane_g9

0x00e5,	// (0x00002653) bg_popup_fep_shadow_pane_cp3

0xe9e3,	// (0x00010f51) list_accented_list_pane

0x5df8,	// (0x00008366) list_single_accented_list_pane_ParamLimits

0x5df8,	// (0x00008366) list_single_accented_list_pane

0x00e5,	// (0x00002653) list_highlight_pane_cp10

0x5e09,	// (0x00008377) list_single_accented_list_pane_t1

0xae8c,	// (0x0000d3fa) popup_slider_window_ParamLimits

0xae8c,	// (0x0000d3fa) popup_slider_window

0x58e7,	// (0x00007e55) aid_indentation_list_msg

0xc718,	// (0x0000ec86) bg_popup_window_pane_cp19

0x5f43,	// (0x000084b1) popup_slider_window_g1

0x5f5f,	// (0x000084cd) popup_slider_window_g2

0x5f7b,	// (0x000084e9) popup_slider_window_g3

0x0005,

0xfce3,	// (0x00012251) popup_slider_window_g

0x5fd7,	// (0x00008545) popup_slider_window_t1

0x604b,	// (0x000085b9) small_volume_slider_vertical_pane

0x41ee,	// (0x0000675c) small_volume_slider_vertical_pane_g1

0x41ee,	// (0x0000675c) small_volume_slider_vertical_pane_g2

0x6067,	// (0x000085d5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x00012263) small_volume_slider_vertical_pane_g

0x9722,	// (0x0000bc90) area_side_right_pane_ParamLimits

0x9722,	// (0x0000bc90) area_side_right_pane

0xc7d0,	// (0x0000ed3e) aid_size_side_button_ParamLimits

0xc7d0,	// (0x0000ed3e) aid_size_side_button

0xc7e9,	// (0x0000ed57) grid_sctrl_middle_pane_ParamLimits

0xc7e9,	// (0x0000ed57) grid_sctrl_middle_pane

0x60a4,	// (0x00008612) sctrl_sk_bottom_pane

0x60b5,	// (0x00008623) sctrl_sk_top_pane

0x60c7,	// (0x00008635) aid_touch_sctrl_top

0xe2b3,	// (0x00010821) bg_sctrl_sk_pane_ParamLimits

0xe2b3,	// (0x00010821) bg_sctrl_sk_pane

0x60d4,	// (0x00008642) sctrl_sk_top_pane_g1

0x60e1,	// (0x0000864f) sctrl_sk_top_pane_t1

0x60c7,	// (0x00008635) aid_touch_sctrl_bottom

0xe2b3,	// (0x00010821) bg_sctrl_sk_pane_cp_ParamLimits

0xe2b3,	// (0x00010821) bg_sctrl_sk_pane_cp

0x60fc,	// (0x0000866a) sctrl_sk_bottom_pane_g1

0x60e1,	// (0x0000864f) sctrl_sk_bottom_pane_t1

0xc803,	// (0x0000ed71) cell_sctrl_middle_pane_ParamLimits

0xc803,	// (0x0000ed71) cell_sctrl_middle_pane

0xc816,	// (0x0000ed84) aid_touch_sctrl_middle_ParamLimits

0xc816,	// (0x0000ed84) aid_touch_sctrl_middle

0xc823,	// (0x0000ed91) bg_sctrl_middle_pane_ParamLimits

0xc823,	// (0x0000ed91) bg_sctrl_middle_pane

0x61c6,	// (0x00008734) cell_sctrl_middle_pane_g1_ParamLimits

0x61c6,	// (0x00008734) cell_sctrl_middle_pane_g1

0xc831,	// (0x0000ed9f) cell_sctrl_middle_pane_g2_ParamLimits

0xc831,	// (0x0000ed9f) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0001226f) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0001226f) cell_sctrl_middle_pane_g

0x124d,	// (0x000037bb) bg_sctrl_middle_pane_g1

0x1255,	// (0x000037c3) bg_sctrl_middle_pane_g2

0x125d,	// (0x000037cb) bg_sctrl_middle_pane_g3

0x1265,	// (0x000037d3) bg_sctrl_middle_pane_g4

0x126d,	// (0x000037db) bg_sctrl_middle_pane_g5

0x1275,	// (0x000037e3) bg_sctrl_middle_pane_g6

0x127d,	// (0x000037eb) bg_sctrl_middle_pane_g7

0x1285,	// (0x000037f3) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x00012274) bg_sctrl_middle_pane_g

0x128d,	// (0x000037fb) bg_sctrl_middle_pane_g8_copy1

0x124d,	// (0x000037bb) bg_sctrl_sk_pane_g1

0x1255,	// (0x000037c3) bg_sctrl_sk_pane_g2

0x125d,	// (0x000037cb) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x00011dc3) bg_sctrl_sk_pane_g

0xe6ce,	// (0x00010c3c) aid_size_touch_scroll_bar

0x1265,	// (0x000037d3) bg_sctrl_sk_pane_g4

0x126d,	// (0x000037db) bg_sctrl_sk_pane_g5

0x1275,	// (0x000037e3) bg_sctrl_sk_pane_g6

0x127d,	// (0x000037eb) bg_sctrl_sk_pane_g7

0x1285,	// (0x000037f3) bg_sctrl_sk_pane_g8

0x128d,	// (0x000037fb) bg_sctrl_sk_pane_g9

0x0714,	// (0x00002c82) popup_fep_china_hwr2_fs_candidate_window

0xa944,	// (0x0000ceb2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa944,	// (0x0000ceb2) popup_fep_china_hwr2_fs_control_window

0x4693,	// (0x00006c01) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0001226a) sctrl_sk_top_pane_g

0xc83d,	// (0x0000edab) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc83d,	// (0x0000edab) aid_fep_china_hwr2_fs_cell

0xc853,	// (0x0000edc1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc853,	// (0x0000edc1) bg_popup_fep_shadow_pane_cp4

0xc86a,	// (0x0000edd8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc86a,	// (0x0000edd8) bg_popup_fep_shadow_pane_cp5

0xc87c,	// (0x0000edea) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc87c,	// (0x0000edea) popup_fep_china_hwr2_fs_control_bar_grid

0xc890,	// (0x0000edfe) popup_fep_china_hwr2_fs_control_funtion_grid

0x619a,	// (0x00008708) aid_fep_china_hwr2_fs_candi_cell

0xde94,	// (0x00010402) bg_popup_fep_shadow_pane_cp6

0x61a4,	// (0x00008712) popup_fep_china_hwr2_fs_candidate_grid

0xc898,	// (0x0000ee06) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc898,	// (0x0000ee06) cell_fep_china_hwr2_fs_funtion_grid

0x41ee,	// (0x0000675c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x61c6,	// (0x00008734) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x61c6,	// (0x00008734) cell_fep_china_hwr2_fs_funtion_grid_g1

0x61d4,	// (0x00008742) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x61d4,	// (0x00008742) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x00012285) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x00012285) cell_fep_china_hwr2_fs_funtion_grid_g

0xc8b0,	// (0x0000ee1e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc8b0,	// (0x0000ee1e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc8c5,	// (0x0000ee33) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc8c5,	// (0x0000ee33) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0001228a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0001228a) cell_fep_china_hwr2_fs_funtion_grid_t

0x621b,	// (0x00008789) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6223,	// (0x00008791) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x622b,	// (0x00008799) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0001228f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6233,	// (0x000087a1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6233,	// (0x000087a1) cell_fep_china_hwr2_fs_candidate_grid

0x6252,	// (0x000087c0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x625a,	// (0x000087c8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x41ee,	// (0x0000675c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x41ee,	// (0x0000675c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x000120af) cell_fep_china_hwr2_fs_candidate_grid_g

0x6262,	// (0x000087d0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0d83,	// (0x000032f1) clock_nsta_pane_cp_24_ParamLimits

0x0d83,	// (0x000032f1) clock_nsta_pane_cp_24

0x0e03,	// (0x00003371) indicator_nsta_pane_cp_24_ParamLimits

0x0e03,	// (0x00003371) indicator_nsta_pane_cp_24

0x2261,	// (0x000047cf) heading_pane_g1

0x0001,

0xf8ba,	// (0x00011e28) heading_pane_g

0x2e8d,	// (0x000053fb) grid_sct_catagory_button_pane

0x2ebf,	// (0x0000542d) scroll_pane_cp5_ParamLimits

0x3de4,	// (0x00006352) button_value_adjust_pane_cp5_ParamLimits

0x3de4,	// (0x00006352) button_value_adjust_pane_cp5

0x3eea,	// (0x00006458) form2_midp_time_pane_ParamLimits

0x6270,	// (0x000087de) cell_sct_catagory_button_pane_ParamLimits

0x6270,	// (0x000087de) cell_sct_catagory_button_pane

0x41b3,	// (0x00006721) bg_button_pane_cp01_ParamLimits

0x41b3,	// (0x00006721) bg_button_pane_cp01

0x41ee,	// (0x0000675c) cell_sct_catagory_button_pane_g1

0xaf0d,	// (0x0000d47b) popup_tb_extension_window

0xc8e1,	// (0x0000ee4f) aid_size_cell_ext_ParamLimits

0xc8e1,	// (0x0000ee4f) aid_size_cell_ext

0xe510,	// (0x00010a7e) bg_tb_trans_pane_cp1_ParamLimits

0xe510,	// (0x00010a7e) bg_tb_trans_pane_cp1

0xc907,	// (0x0000ee75) grid_tb_ext_pane_ParamLimits

0xc907,	// (0x0000ee75) grid_tb_ext_pane

0xc947,	// (0x0000eeb5) cell_tb_ext_pane_ParamLimits

0xc947,	// (0x0000eeb5) cell_tb_ext_pane

0xc96f,	// (0x0000eedd) cell_tb_ext_pane_g1_ParamLimits

0xc96f,	// (0x0000eedd) cell_tb_ext_pane_g1

0x6306,	// (0x00008874) cell_tb_ext_pane_t1

0xe2b3,	// (0x00010821) list_highlight_pane_cp11_ParamLimits

0xe2b3,	// (0x00010821) list_highlight_pane_cp11

0x97cd,	// (0x0000bd3b) popup_uni_indicator_window_ParamLimits

0x97cd,	// (0x0000bd3b) popup_uni_indicator_window

0xe833,	// (0x00010da1) bg_popup_sub_pane_cp14

0x6321,	// (0x0000888f) list_uniindi_pane

0x632d,	// (0x0000889b) uniindi_top_pane

0xe2b3,	// (0x00010821) bg_uniindi_top_pane

0x634e,	// (0x000088bc) uniindi_top_pane_g1

0x6364,	// (0x000088d2) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x00012296) uniindi_top_pane_g

0x638e,	// (0x000088fc) uniindi_top_pane_t1

0x63ba,	// (0x00008928) list_single_uniindi_pane_ParamLimits

0x63ba,	// (0x00008928) list_single_uniindi_pane

0x41ee,	// (0x0000675c) bg_uniindi_top_pane_g1

0x63cc,	// (0x0000893a) list_single_uniindi_pane_g1

0x63df,	// (0x0000894d) list_single_uniindi_pane_t1

0xde94,	// (0x00010402) control_bg_pane

0x6404,	// (0x00008972) bg_sctrl_sk_pane_cp1

0x640d,	// (0x0000897b) bg_sctrl_sk_pane_cp2

0x6416,	// (0x00008984) control_bg_pane_g1

0x641f,	// (0x0000898d) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0001229f) control_bg_pane_g

0x3bba,	// (0x00006128) cell_indicator_nsta_pane_g1_ParamLimits

0xbca5,	// (0x0000e213) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x00012013) cell_indicator_nsta_pane_g_ParamLimits

0x3f7a,	// (0x000064e8) form2_midp_time_pane_t1_ParamLimits

0x424f,	// (0x000067bd) main_idle_act4_pane_ParamLimits

0x424f,	// (0x000067bd) main_idle_act4_pane

0xaf0d,	// (0x0000d47b) popup_tb_extension_window_ParamLimits

0xc92f,	// (0x0000ee9d) tb_ext_find_pane_ParamLimits

0xc92f,	// (0x0000ee9d) tb_ext_find_pane

0x6428,	// (0x00008996) ai_gene_pane_1_cp1

0x0222,	// (0x00002790) ai_gene_pane_2_cp1

0x6430,	// (0x0000899e) list_single_idle_plugin_calendar_pane

0x6439,	// (0x000089a7) list_single_idle_plugin_notification_pane

0x6442,	// (0x000089b0) list_single_idle_plugin_player_pane

0xc98c,	// (0x0000eefa) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc98c,	// (0x0000eefa) list_single_idle_plugin_shortcut_pane

0xc9b4,	// (0x0000ef22) main_idle_act4_pane_t1

0xc9cc,	// (0x0000ef3a) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x000122a4) main_idle_act4_pane_t

0xc9e4,	// (0x0000ef52) middle_sk_idle_act4_pane_ParamLimits

0xc9e4,	// (0x0000ef52) middle_sk_idle_act4_pane

0xca00,	// (0x0000ef6e) popup_clock_digital_analogue_window_cp2

0xca27,	// (0x0000ef95) shortcut_wheel_idle_act4_pane_ParamLimits

0xca27,	// (0x0000ef95) shortcut_wheel_idle_act4_pane

0x41ee,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g1

0x41ee,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g2

0x41ee,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g3

0x41ee,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g4

0x41ee,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g5

0x64d5,	// (0x00008a43) shortcut_wheel_idle_act4_pane_g6

0x64dd,	// (0x00008a4b) shortcut_wheel_idle_act4_pane_g7

0x64e5,	// (0x00008a53) shortcut_wheel_idle_act4_pane_g8

0x64ed,	// (0x00008a5b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x000122a9) shortcut_wheel_idle_act4_pane_g

0x4306,	// (0x00006874) middle_sk_idle_act4_pane_g1_ParamLimits

0x4306,	// (0x00006874) middle_sk_idle_act4_pane_g1

0xcaa4,	// (0x0000f012) middle_sk_idle_act4_pane_g2_ParamLimits

0xcaa4,	// (0x0000f012) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x000122cc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x000122cc) middle_sk_idle_act4_pane_g

0xcabc,	// (0x0000f02a) middle_sk_idle_act4_pane_t1_ParamLimits

0xcabc,	// (0x0000f02a) middle_sk_idle_act4_pane_t1

0xcaeb,	// (0x0000f059) grid_ai_shortcut_pane_ParamLimits

0xcaeb,	// (0x0000f059) grid_ai_shortcut_pane

0xcb08,	// (0x0000f076) list_highlight_pane_cp16_ParamLimits

0xcb08,	// (0x0000f076) list_highlight_pane_cp16

0xcb15,	// (0x0000f083) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcb15,	// (0x0000f083) list_single_idle_plugin_shortcut_pane_g1

0xcb21,	// (0x0000f08f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcb21,	// (0x0000f08f) list_single_idle_plugin_shortcut_pane_g2

0xcb3f,	// (0x0000f0ad) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcb3f,	// (0x0000f0ad) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x000122d1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x000122d1) list_single_idle_plugin_shortcut_pane_g

0xcb54,	// (0x0000f0c2) cell_ai_shortcut_pane_ParamLimits

0xcb54,	// (0x0000f0c2) cell_ai_shortcut_pane

0xcb6a,	// (0x0000f0d8) cell_ai_shortcut_pane_g1_ParamLimits

0xcb6a,	// (0x0000f0d8) cell_ai_shortcut_pane_g1

0x6428,	// (0x00008996) ai_gene_pane_1_cp2

0x661e,	// (0x00008b8c) ai_gene_pane_2_cp2

0x6626,	// (0x00008b94) list_highlight_pane_cp15

0x662f,	// (0x00008b9d) list_single_idle_plugin_calendar_pane_g1

0x6626,	// (0x00008b94) list_highlight_pane_cp17

0x6637,	// (0x00008ba5) list_single_idle_plugin_calendar_pane_g1_copy1

0x663f,	// (0x00008bad) list_single_idle_plugin_player_pane_g1

0x31ac,	// (0x0000571a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x000122d8) list_single_idle_plugin_player_pane_g

0x6647,	// (0x00008bb5) list_single_idle_plugin_player_pane_t1

0x6655,	// (0x00008bc3) list_single_idle_plugin_player_pane_t2

0x6663,	// (0x00008bd1) list_single_idle_plugin_player_pane_t3

0x6671,	// (0x00008bdf) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x000122dd) list_single_idle_plugin_player_pane_t

0x667f,	// (0x00008bed) wait_bar_pane_cp15

0x6687,	// (0x00008bf5) grid_ai_notification_pane

0x31ac,	// (0x0000571a) list_single_idle_plugin_notification_pane_g1

0xcb8c,	// (0x0000f0fa) cell_ai_notification_pane_ParamLimits

0xcb8c,	// (0x0000f0fa) cell_ai_notification_pane

0x669d,	// (0x00008c0b) cell_ai_notification_pane_g1

0x66a5,	// (0x00008c13) cell_ai_notification_pane_t1

0xcb99,	// (0x0000f107) tb_ext_find_button_pane

0xcba1,	// (0x0000f10f) tb_ext_find_pane_g1

0xcba9,	// (0x0000f117) tb_ext_find_pane_t1

0xef8d,	// (0x000114fb) tb_ext_find_button_pane_g1

0x66d1,	// (0x00008c3f) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x000122e6) tb_ext_find_button_pane_g

0xc9b4,	// (0x0000ef22) main_idle_act4_pane_t1_ParamLimits

0xc9cc,	// (0x0000ef3a) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x000122a4) main_idle_act4_pane_t_ParamLimits

0xca00,	// (0x0000ef6e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xca17,	// (0x0000ef85) sat_plugin_idle_act4_pane_ParamLimits

0xca17,	// (0x0000ef85) sat_plugin_idle_act4_pane

0xcbb7,	// (0x0000f125) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcbb7,	// (0x0000f125) sat_plugin_idle_act4_pane_t1

0xcbcf,	// (0x0000f13d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcbcf,	// (0x0000f13d) sat_plugin_idle_act4_pane_t2

0xcbe7,	// (0x0000f155) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcbe7,	// (0x0000f155) sat_plugin_idle_act4_pane_t3

0xcbff,	// (0x0000f16d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcbff,	// (0x0000f16d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x000122eb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x000122eb) sat_plugin_idle_act4_pane_t

0xe021,	// (0x0001058f) popup_battery_window_ParamLimits

0xe021,	// (0x0001058f) popup_battery_window

0xe2b3,	// (0x00010821) bg_popup_sub_pane_cp25_ParamLimits

0xe2b3,	// (0x00010821) bg_popup_sub_pane_cp25

0x6726,	// (0x00008c94) popup_battery_window_g1_ParamLimits

0x6726,	// (0x00008c94) popup_battery_window_g1

0x6732,	// (0x00008ca0) popup_battery_window_t1_ParamLimits

0x6732,	// (0x00008ca0) popup_battery_window_t1

0x6744,	// (0x00008cb2) popup_battery_window_t2_ParamLimits

0x6744,	// (0x00008cb2) popup_battery_window_t2

0x0001,

0xfd86,	// (0x000122f4) popup_battery_window_t_ParamLimits

0xfd86,	// (0x000122f4) popup_battery_window_t

0xa5b0,	// (0x0000cb1e) midp_canvas_pane_ParamLimits

0xa60b,	// (0x0000cb79) midp_keypad_pane_ParamLimits

0xa60b,	// (0x0000cb79) midp_keypad_pane

0x065e,	// (0x00002bcc) main_midp_pane_ParamLimits

0x3c46,	// (0x000061b4) signal_pane_g2_cp_ParamLimits

0xcc17,	// (0x0000f185) aid_size_cell_midp_keypad_ParamLimits

0xcc17,	// (0x0000f185) aid_size_cell_midp_keypad

0xcc35,	// (0x0000f1a3) midp_keyp_game_grid_pane_ParamLimits

0xcc35,	// (0x0000f1a3) midp_keyp_game_grid_pane

0xcc5c,	// (0x0000f1ca) midp_keyp_rocker_pane_ParamLimits

0xcc5c,	// (0x0000f1ca) midp_keyp_rocker_pane

0xcc9b,	// (0x0000f209) midp_keyp_sk_left_pane_ParamLimits

0xcc9b,	// (0x0000f209) midp_keyp_sk_left_pane

0xccef,	// (0x0000f25d) midp_keyp_sk_right_pane_ParamLimits

0xccef,	// (0x0000f25d) midp_keyp_sk_right_pane

0xde94,	// (0x00010402) bg_button_pane_cp03

0xcd43,	// (0x0000f2b1) midp_keyp_sk_left_pane_g1

0xde94,	// (0x00010402) bg_button_pane_cp04

0xcd43,	// (0x0000f2b1) midp_keyp_sk_right_pane_g1

0x41ee,	// (0x0000675c) midp_keyp_rocker_pane_g1

0xcd4c,	// (0x0000f2ba) keyp_game_cell_pane_ParamLimits

0xcd4c,	// (0x0000f2ba) keyp_game_cell_pane

0xde94,	// (0x00010402) bg_button_pane_cp02

0xcd72,	// (0x0000f2e0) keyp_game_cell_pane_g1

0x9764,	// (0x0000bcd2) popup_fep_vkb2_window_ParamLimits

0x9764,	// (0x0000bcd2) popup_fep_vkb2_window

0xcd7b,	// (0x0000f2e9) aid_size_cell_vkb2_ParamLimits

0xcd7b,	// (0x0000f2e9) aid_size_cell_vkb2

0xcdb1,	// (0x0000f31f) popup_fep_vkb2_window_g1_ParamLimits

0xcdb1,	// (0x0000f31f) popup_fep_vkb2_window_g1

0xce01,	// (0x0000f36f) vkb2_area_bottom_pane_ParamLimits

0xce01,	// (0x0000f36f) vkb2_area_bottom_pane

0xce5d,	// (0x0000f3cb) vkb2_area_keypad_pane_ParamLimits

0xce5d,	// (0x0000f3cb) vkb2_area_keypad_pane

0xceab,	// (0x0000f419) vkb2_area_top_pane_ParamLimits

0xceab,	// (0x0000f419) vkb2_area_top_pane

0xcf31,	// (0x0000f49f) vkb2_top_entry_pane_ParamLimits

0xcf31,	// (0x0000f49f) vkb2_top_entry_pane

0xcf5e,	// (0x0000f4cc) vkb2_top_grid_left_pane_ParamLimits

0xcf5e,	// (0x0000f4cc) vkb2_top_grid_left_pane

0xcf7e,	// (0x0000f4ec) vkb2_top_grid_right_pane_ParamLimits

0xcf7e,	// (0x0000f4ec) vkb2_top_grid_right_pane

0x6ac3,	// (0x00009031) vkb2_cell_keypad_pane_ParamLimits

0x6ac3,	// (0x00009031) vkb2_cell_keypad_pane

0xcfc4,	// (0x0000f532) vkb2_area_bottom_grid_pane_ParamLimits

0xcfc4,	// (0x0000f532) vkb2_area_bottom_grid_pane

0xcfee,	// (0x0000f55c) vkb2_area_bottom_pane_g1_ParamLimits

0xcfee,	// (0x0000f55c) vkb2_area_bottom_pane_g1

0xd014,	// (0x0000f582) vkb2_area_bottom_pane_g2_ParamLimits

0xd014,	// (0x0000f582) vkb2_area_bottom_pane_g2

0xd045,	// (0x0000f5b3) vkb2_area_bottom_pane_g3_ParamLimits

0xd045,	// (0x0000f5b3) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x000122f9) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x000122f9) vkb2_area_bottom_pane_g

0x6c6d,	// (0x000091db) vkb2_top_cell_left_pane_ParamLimits

0x6c6d,	// (0x000091db) vkb2_top_cell_left_pane

0xd0af,	// (0x0000f61d) vkb2_top_entry_pane_g1_ParamLimits

0xd0af,	// (0x0000f61d) vkb2_top_entry_pane_g1

0xd0bd,	// (0x0000f62b) vkb2_top_entry_pane_t1_ParamLimits

0xd0bd,	// (0x0000f62b) vkb2_top_entry_pane_t1

0x6cd5,	// (0x00009243) vkb2_top_entry_pane_t2_ParamLimits

0x6cd5,	// (0x00009243) vkb2_top_entry_pane_t2

0x6d07,	// (0x00009275) vkb2_top_entry_pane_t3_ParamLimits

0x6d07,	// (0x00009275) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x00012300) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x00012300) vkb2_top_entry_pane_t

0xd0f6,	// (0x0000f664) vkb2_top_grid_right_pane_g1_ParamLimits

0xd0f6,	// (0x0000f664) vkb2_top_grid_right_pane_g1

0x6d6e,	// (0x000092dc) vkb2_top_grid_right_pane_g2_ParamLimits

0x6d6e,	// (0x000092dc) vkb2_top_grid_right_pane_g2

0x6d86,	// (0x000092f4) vkb2_top_grid_right_pane_g3_ParamLimits

0x6d86,	// (0x000092f4) vkb2_top_grid_right_pane_g3

0xd10c,	// (0x0000f67a) vkb2_top_grid_right_pane_g4_ParamLimits

0xd10c,	// (0x0000f67a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x00012307) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x00012307) vkb2_top_grid_right_pane_g

0x6db4,	// (0x00009322) vkb2_top_cell_left_pane_g1

0x6dcb,	// (0x00009339) vkb2_cell_keypad_pane_g1_ParamLimits

0x6dcb,	// (0x00009339) vkb2_cell_keypad_pane_g1

0x6dd9,	// (0x00009347) vkb2_cell_keypad_pane_t1_ParamLimits

0x6dd9,	// (0x00009347) vkb2_cell_keypad_pane_t1

0x6df0,	// (0x0000935e) vkb2_cell_bottom_grid_pane_ParamLimits

0x6df0,	// (0x0000935e) vkb2_cell_bottom_grid_pane

0x6e29,	// (0x00009397) vkb2_cell_bottom_grid_pane_g1

0xca48,	// (0x0000efb6) aid_call2_pane_cp02

0xca50,	// (0x0000efbe) aid_call_pane_cp02

0xca58,	// (0x0000efc6) clock_digital_number_pane_cp10

0xca60,	// (0x0000efce) clock_digital_number_pane_cp11

0xca68,	// (0x0000efd6) clock_digital_number_pane_cp12

0xca70,	// (0x0000efde) clock_digital_number_pane_cp13

0xca78,	// (0x0000efe6) clock_digital_separator_pane_cp10

0xef8d,	// (0x000114fb) popup_clock_digital_analogue_window_cp2_g1

0xef8d,	// (0x000114fb) popup_clock_digital_analogue_window_cp2_g2

0xca80,	// (0x0000efee) popup_clock_digital_analogue_window_cp2_g3

0xef8d,	// (0x000114fb) popup_clock_digital_analogue_window_cp2_g4

0xca80,	// (0x0000efee) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x000122bc) popup_clock_digital_analogue_window_cp2_g

0xca88,	// (0x0000eff6) popup_clock_digital_analogue_window_cp2_t1

0xca96,	// (0x0000f004) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x000122c7) popup_clock_digital_analogue_window_cp2_t

0x41ee,	// (0x0000675c) clock_digital_number_pane_cp10_g1

0x41ee,	// (0x0000675c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x000120af) clock_digital_number_pane_cp10_g

0x41ee,	// (0x0000675c) clock_digital_separator_pane_cp10_g1

0x41ee,	// (0x0000675c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x000120af) clock_digital_separator_pane_cp10_g

0x6370,	// (0x000088de) uniindi_top_pane_g3

0x6381,	// (0x000088ef) uniindi_top_pane_g4

0x6b4e,	// (0x000090bc) vkb2_row_keypad_pane_ParamLimits

0x6b4e,	// (0x000090bc) vkb2_row_keypad_pane

0x6e45,	// (0x000093b3) vkb2_cell_t_keypad_pane_ParamLimits

0x6e45,	// (0x000093b3) vkb2_cell_t_keypad_pane

0x6e55,	// (0x000093c3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6e55,	// (0x000093c3) vkb2_cell_t_keypad_pane_cp08

0x6e6a,	// (0x000093d8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6e6a,	// (0x000093d8) vkb2_cell_t_keypad_pane_cp09

0x6e7e,	// (0x000093ec) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6e7e,	// (0x000093ec) vkb2_cell_t_keypad_pane_cp01

0x6e8f,	// (0x000093fd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6e8f,	// (0x000093fd) vkb2_cell_t_keypad_pane_cp02

0x6ea0,	// (0x0000940e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6ea0,	// (0x0000940e) vkb2_cell_t_keypad_pane_cp03

0x6eb1,	// (0x0000941f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6eb1,	// (0x0000941f) vkb2_cell_t_keypad_pane_cp04

0x6ec2,	// (0x00009430) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6ec2,	// (0x00009430) vkb2_cell_t_keypad_pane_cp05

0x6ed3,	// (0x00009441) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6ed3,	// (0x00009441) vkb2_cell_t_keypad_pane_cp06

0x6ee6,	// (0x00009454) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6ee6,	// (0x00009454) vkb2_cell_t_keypad_pane_cp07

0x6efb,	// (0x00009469) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6efb,	// (0x00009469) vkb2_cell_t_keypad_pane_cp10

0x4693,	// (0x00006c01) vkb2_cell_t_keypad_pane_g1

0x6f10,	// (0x0000947e) vkb2_cell_t_keypad_pane_t1

0xde94,	// (0x00010402) popup_grid_graphic2_window

0xd122,	// (0x0000f690) aid_size_cell_graphic2_ParamLimits

0xd122,	// (0x0000f690) aid_size_cell_graphic2

0xd160,	// (0x0000f6ce) bg_popup_window_pane_cp21_ParamLimits

0xd160,	// (0x0000f6ce) bg_popup_window_pane_cp21

0xd16e,	// (0x0000f6dc) graphic2_pages_pane_ParamLimits

0xd16e,	// (0x0000f6dc) graphic2_pages_pane

0xd1c6,	// (0x0000f734) grid_graphic2_control_pane_ParamLimits

0xd1c6,	// (0x0000f734) grid_graphic2_control_pane

0xd20e,	// (0x0000f77c) grid_graphic2_pane_ParamLimits

0xd20e,	// (0x0000f77c) grid_graphic2_pane

0xd299,	// (0x0000f807) cell_graphic2_pane

0xde94,	// (0x00010402) main_comp_mode_pane

0x5aaa,	// (0x00008018) list_ai3_gene_pane_ParamLimits

0xc718,	// (0x0000ec86) bg_popup_window_pane_cp19_ParamLimits

0x5ee1,	// (0x0000844f) bg_touch_area_indi_pane_ParamLimits

0x5ee1,	// (0x0000844f) bg_touch_area_indi_pane

0x5ef7,	// (0x00008465) bg_touch_area_indi_pane_cp01_ParamLimits

0x5ef7,	// (0x00008465) bg_touch_area_indi_pane_cp01

0x5f0f,	// (0x0000847d) bg_touch_area_indi_pane_cp02_ParamLimits

0x5f0f,	// (0x0000847d) bg_touch_area_indi_pane_cp02

0x5f29,	// (0x00008497) bg_touch_area_indi_pane_cp03_ParamLimits

0x5f29,	// (0x00008497) bg_touch_area_indi_pane_cp03

0x5f43,	// (0x000084b1) popup_slider_window_g1_ParamLimits

0x5f5f,	// (0x000084cd) popup_slider_window_g2_ParamLimits

0x5f7b,	// (0x000084e9) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x00012251) popup_slider_window_g_ParamLimits

0x5fd7,	// (0x00008545) popup_slider_window_t1_ParamLimits

0x604b,	// (0x000085b9) small_volume_slider_vertical_pane_ParamLimits

0xd299,	// (0x0000f807) cell_graphic2_pane_ParamLimits

0xd2fc,	// (0x0000f86a) bg_button_pane_cp10_ParamLimits

0xd2fc,	// (0x0000f86a) bg_button_pane_cp10

0xd30f,	// (0x0000f87d) bg_button_pane_cp11_ParamLimits

0xd30f,	// (0x0000f87d) bg_button_pane_cp11

0xd322,	// (0x0000f890) graphic2_pages_pane_g1_ParamLimits

0xd322,	// (0x0000f890) graphic2_pages_pane_g1

0xd33d,	// (0x0000f8ab) graphic2_pages_pane_g2_ParamLimits

0xd33d,	// (0x0000f8ab) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x00012315) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x00012315) graphic2_pages_pane_g

0xd355,	// (0x0000f8c3) graphic2_pages_pane_t1_ParamLimits

0xd355,	// (0x0000f8c3) graphic2_pages_pane_t1

0xd36d,	// (0x0000f8db) cell_graphic2_control_pane_ParamLimits

0xd36d,	// (0x0000f8db) cell_graphic2_control_pane

0xd3a1,	// (0x0000f90f) cell_graphic2_pane_g1_ParamLimits

0xd3a1,	// (0x0000f90f) cell_graphic2_pane_g1

0x44b5,	// (0x00006a23) cell_graphic2_pane_g2_ParamLimits

0x44b5,	// (0x00006a23) cell_graphic2_pane_g2

0xd3ae,	// (0x0000f91c) cell_graphic2_pane_g3_ParamLimits

0xd3ae,	// (0x0000f91c) cell_graphic2_pane_g3

0x44c2,	// (0x00006a30) cell_graphic2_pane_g4_ParamLimits

0x44c2,	// (0x00006a30) cell_graphic2_pane_g4

0xd3bb,	// (0x0000f929) cell_graphic2_pane_g5_ParamLimits

0xd3bb,	// (0x0000f929) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0001231a) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0001231a) cell_graphic2_pane_g

0xd3db,	// (0x0000f949) cell_graphic2_pane_t1_ParamLimits

0xd3db,	// (0x0000f949) cell_graphic2_pane_t1

0x2255,	// (0x000047c3) grid_highlight_pane_cp11_ParamLimits

0x2255,	// (0x000047c3) grid_highlight_pane_cp11

0xe2b3,	// (0x00010821) bg_button_pane_cp05

0xd410,	// (0x0000f97e) cell_graphic2_control_pane_g1

0x41ee,	// (0x0000675c) bg_touch_area_indi_pane_g1

0x71ea,	// (0x00009758) aid_cmod_rocker_key_size

0x71f4,	// (0x00009762) aid_cmode_itu_key_size

0x71fe,	// (0x0000976c) main_cmode_video_pane

0x7208,	// (0x00009776) main_comp_mode_itu_pane

0x7214,	// (0x00009782) main_comp_mode_rocker_pane

0x7220,	// (0x0000978e) cell_cmode_rocker_pane_ParamLimits

0x7220,	// (0x0000978e) cell_cmode_rocker_pane

0x7234,	// (0x000097a2) cell_cmode_itu_pane_ParamLimits

0x7234,	// (0x000097a2) cell_cmode_itu_pane

0xe833,	// (0x00010da1) bg_button_pane_cp06_ParamLimits

0xe833,	// (0x00010da1) bg_button_pane_cp06

0x4693,	// (0x00006c01) cell_cmode_rocker_pane_g1_ParamLimits

0x4693,	// (0x00006c01) cell_cmode_rocker_pane_g1

0x61c6,	// (0x00008734) cell_cmode_rocker_pane_g2_ParamLimits

0x61c6,	// (0x00008734) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x0001232a) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x0001232a) cell_cmode_rocker_pane_g

0xde94,	// (0x00010402) bg_button_pane_cp07

0x724b,	// (0x000097b9) cell_cmode_itu_pane_g1

0x7254,	// (0x000097c2) cell_cmode_itu_pane_t1

0x7262,	// (0x000097d0) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0001232f) cell_cmode_itu_pane_t

0x63f4,	// (0x00008962) aid_touch_ctrl_left

0x63fc,	// (0x0000896a) aid_touch_ctrl_right

0xde94,	// (0x00010402) compa_mode_pane

0xd436,	// (0x0000f9a4) aid_cmod_rocker_key_size_cp

0xd440,	// (0x0000f9ae) aid_cmode_itu_key_size_cp

0x7284,	// (0x000097f2) compa_mode_pane_g1

0x728c,	// (0x000097fa) compa_mode_pane_g2

0x7294,	// (0x00009802) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x00012334) compa_mode_pane_g

0xd44a,	// (0x0000f9b8) main_comp_mode_itu_pane_cp

0xd452,	// (0x0000f9c0) main_comp_mode_rocker_pane_cp

0xd45a,	// (0x0000f9c8) cell_cmode_itu_pane_cp_ParamLimits

0xd45a,	// (0x0000f9c8) cell_cmode_itu_pane_cp

0xd46f,	// (0x0000f9dd) cell_cmode_rocker_pane_cp_ParamLimits

0xd46f,	// (0x0000f9dd) cell_cmode_rocker_pane_cp

0xe833,	// (0x00010da1) bg_button_pane_cp06_cp_ParamLimits

0xe833,	// (0x00010da1) bg_button_pane_cp06_cp

0x4693,	// (0x00006c01) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4693,	// (0x00006c01) cell_cmode_rocker_pane_g1_cp

0x41ee,	// (0x0000675c) cell_cmode_rocker_pane_g2_cp

0xde94,	// (0x00010402) bg_button_pane_cp07_cp

0xd481,	// (0x0000f9ef) cell_cmode_itu_pane_g1_cp

0xd48a,	// (0x0000f9f8) cell_cmode_itu_pane_t1_cp

0xd48a,	// (0x0000f9f8) cell_cmode_itu_pane_t2_cp

0xbaa6,	// (0x0000e014) settings_code_pane_cp2

0xe0dd,	// (0x0001064b) bg_popup_window_pane_cp3_ParamLimits

0xe4a1,	// (0x00010a0f) heading_pane_cp3_ParamLimits

0xe4ad,	// (0x00010a1b) listscroll_popup_graphic_pane_ParamLimits

0x425d,	// (0x000067cb) fep_hwr_aid_pane_ParamLimits

0x60c7,	// (0x00008635) aid_touch_sctrl_top_ParamLimits

0x60d4,	// (0x00008642) sctrl_sk_top_pane_g1_ParamLimits

0x4693,	// (0x00006c01) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0001226a) sctrl_sk_top_pane_g_ParamLimits

0x60e1,	// (0x0000864f) sctrl_sk_top_pane_t1_ParamLimits

0x60c7,	// (0x00008635) aid_touch_sctrl_bottom_ParamLimits

0x60e1,	// (0x0000864f) sctrl_sk_bottom_pane_t1_ParamLimits

0x633a,	// (0x000088a8) aid_area_touch_clock

0xcef3,	// (0x0000f461) aid_vkb2_area_top_pane_cell_ParamLimits

0xcef3,	// (0x0000f461) aid_vkb2_area_top_pane_cell

0xcf9e,	// (0x0000f50c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcf9e,	// (0x0000f50c) aid_vkb2_area_bottom_pane_cell

0x6c8d,	// (0x000091fb) popup_char_count_window

0x72ea,	// (0x00009858) popup_char_count_window_g1

0x72f3,	// (0x00009861) popup_char_count_window_g2

0x72fc,	// (0x0000986a) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x0001233b) popup_char_count_window_g

0x7305,	// (0x00009873) popup_char_count_window_t1

0x68df,	// (0x00008e4d) popup_fep_char_preview_window_ParamLimits

0x68df,	// (0x00008e4d) popup_fep_char_preview_window

0xcf13,	// (0x0000f481) vkb2_top_candi_pane_ParamLimits

0xcf13,	// (0x0000f481) vkb2_top_candi_pane

0xd498,	// (0x0000fa06) cell_vkb2_top_candi_pane_ParamLimits

0xd498,	// (0x0000fa06) cell_vkb2_top_candi_pane

0x1a83,	// (0x00003ff1) bg_popup_fep_char_preview_window_ParamLimits

0x1a83,	// (0x00003ff1) bg_popup_fep_char_preview_window

0x7364,	// (0x000098d2) popup_fep_char_preview_window_t1_ParamLimits

0x7364,	// (0x000098d2) popup_fep_char_preview_window_t1

0x739e,	// (0x0000990c) bg_popup_fep_char_preview_window_g1

0x73a6,	// (0x00009914) bg_popup_fep_char_preview_window_g2

0x73ae,	// (0x0000991c) bg_popup_fep_char_preview_window_g3

0x73b6,	// (0x00009924) bg_popup_fep_char_preview_window_g4

0x73be,	// (0x0000992c) bg_popup_fep_char_preview_window_g5

0x73c6,	// (0x00009934) bg_popup_fep_char_preview_window_g6

0x73ce,	// (0x0000993c) bg_popup_fep_char_preview_window_g7

0x73d6,	// (0x00009944) bg_popup_fep_char_preview_window_g8

0x73de,	// (0x0000994c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x00012342) bg_popup_fep_char_preview_window_g

0x4693,	// (0x00006c01) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4693,	// (0x00006c01) cell_vkb2_top_candi_pane_g1

0x4a28,	// (0x00006f96) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4a28,	// (0x00006f96) cell_vkb2_top_candi_pane_g2

0x4a49,	// (0x00006fb7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4a49,	// (0x00006fb7) cell_vkb2_top_candi_pane_g3

0x73e6,	// (0x00009954) cell_vkb2_top_candi_pane_g4_ParamLimits

0x73e6,	// (0x00009954) cell_vkb2_top_candi_pane_g4

0x7407,	// (0x00009975) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7407,	// (0x00009975) cell_vkb2_top_candi_pane_g5

0x61c6,	// (0x00008734) cell_vkb2_top_candi_pane_g6_ParamLimits

0x61c6,	// (0x00008734) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x00012355) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x00012355) cell_vkb2_top_candi_pane_g

0x7428,	// (0x00009996) cell_vkb2_top_candi_pane_t1

0x29a6,	// (0x00004f14) aid_size_touch_slider_mark_ParamLimits

0x29a6,	// (0x00004f14) aid_size_touch_slider_mark

0xd1aa,	// (0x0000f718) grid_graphic2_catg_pane_ParamLimits

0xd1aa,	// (0x0000f718) grid_graphic2_catg_pane

0xd268,	// (0x0000f7d6) popup_grid_graphic2_window_t1_ParamLimits

0xd268,	// (0x0000f7d6) popup_grid_graphic2_window_t1

0xd27e,	// (0x0000f7ec) popup_grid_graphic2_window_t2_ParamLimits

0xd27e,	// (0x0000f7ec) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x00012310) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x00012310) popup_grid_graphic2_window_t

0xe2b3,	// (0x00010821) bg_button_pane_cp05_ParamLimits

0xd410,	// (0x0000f97e) cell_graphic2_control_pane_g1_ParamLimits

0xd502,	// (0x0000fa70) cell_graphic2_catg_pane_ParamLimits

0xd502,	// (0x0000fa70) cell_graphic2_catg_pane

0xde94,	// (0x00010402) bg_button_pane_cp12

0xd514,	// (0x0000fa82) cell_graphic2_catg_pane_g1

0x6306,	// (0x00008874) cell_tb_ext_pane_t1_ParamLimits

0x6d2b,	// (0x00009299) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6d2b,	// (0x00009299) vkb2_top_cell_right_narrow_pane

0x6d43,	// (0x000092b1) vkb2_top_cell_right_wide_pane_ParamLimits

0x6d43,	// (0x000092b1) vkb2_top_cell_right_wide_pane

0x424f,	// (0x000067bd) bg_vkb2_func_pane_ParamLimits

0x424f,	// (0x000067bd) bg_vkb2_func_pane

0x6db4,	// (0x00009322) vkb2_top_cell_left_pane_g1_ParamLimits

0x424f,	// (0x000067bd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x424f,	// (0x000067bd) bg_vkb2_fuc_pane_cp03

0x6e29,	// (0x00009397) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1255,	// (0x000037c3) bg_vkb2_func_pane_g1

0x125d,	// (0x000037cb) bg_vkb2_func_pane_g2

0x126d,	// (0x000037db) bg_vkb2_func_pane_g3

0x1265,	// (0x000037d3) bg_vkb2_func_pane_g4

0x1275,	// (0x000037e3) bg_vkb2_func_pane_g5

0x127d,	// (0x000037eb) bg_vkb2_func_pane_g6

0x1285,	// (0x000037f3) bg_vkb2_func_pane_g7

0x128d,	// (0x000037fb) bg_vkb2_func_pane_g8

0x124d,	// (0x000037bb) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x00012362) bg_vkb2_func_pane_g

0x424f,	// (0x000067bd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x424f,	// (0x000067bd) bg_vkb2_fuc_pane_cp01

0x6db4,	// (0x00009322) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6db4,	// (0x00009322) vkb2_top_cell_right_wide_pane_g1

0x424f,	// (0x000067bd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x424f,	// (0x000067bd) bg_vkb2_fuc_pane_cp02

0x6e29,	// (0x00009397) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6e29,	// (0x00009397) vkb2_top_cell_right_narrow_pane_g1

0xc652,	// (0x0000ebc0) aid_touch_area_decrease_ParamLimits

0xc652,	// (0x0000ebc0) aid_touch_area_decrease

0xc68c,	// (0x0000ebfa) aid_touch_area_increase_ParamLimits

0xc68c,	// (0x0000ebfa) aid_touch_area_increase

0xc6b4,	// (0x0000ec22) aid_touch_area_mute_ParamLimits

0xc6b4,	// (0x0000ec22) aid_touch_area_mute

0xc6e4,	// (0x0000ec52) aid_touch_area_slider_ParamLimits

0xc6e4,	// (0x0000ec52) aid_touch_area_slider

0xc724,	// (0x0000ec92) popup_slider_window_g4_ParamLimits

0xc724,	// (0x0000ec92) popup_slider_window_g4

0xc74c,	// (0x0000ecba) popup_slider_window_g5_ParamLimits

0xc74c,	// (0x0000ecba) popup_slider_window_g5

0xc780,	// (0x0000ecee) popup_slider_window_g6_ParamLimits

0xc780,	// (0x0000ecee) popup_slider_window_g6

0x6005,	// (0x00008573) popup_slider_window_t2_ParamLimits

0x6005,	// (0x00008573) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0001225e) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0001225e) popup_slider_window_t

0xc79c,	// (0x0000ed0a) slider_pane_ParamLimits

0xc79c,	// (0x0000ed0a) slider_pane

0x7461,	// (0x000099cf) slider_pane_g1_ParamLimits

0x7461,	// (0x000099cf) slider_pane_g1

0x7475,	// (0x000099e3) slider_pane_g2_ParamLimits

0x7475,	// (0x000099e3) slider_pane_g2

0x748b,	// (0x000099f9) slider_pane_g3_ParamLimits

0x748b,	// (0x000099f9) slider_pane_g3

0x0003,

0xfe07,	// (0x00012375) slider_pane_g_ParamLimits

0xfe07,	// (0x00012375) slider_pane_g

0xaf59,	// (0x0000d4c7) popup_tb_float_extension_window_ParamLimits

0xaf59,	// (0x0000d4c7) popup_tb_float_extension_window

0x74b7,	// (0x00009a25) aid_size_cell_tb_float_ext

0xde94,	// (0x00010402) bg_popup_sub_window_cp28

0x74c3,	// (0x00009a31) grid_tb_float_ext_pane

0x74cf,	// (0x00009a3d) cell_tb_float_ext_pane_ParamLimits

0x74cf,	// (0x00009a3d) cell_tb_float_ext_pane

0x74eb,	// (0x00009a59) cell_tb_float_ext_pane_g1

0x74f4,	// (0x00009a62) grid_highlight_pane_cp12

0xbecc,	// (0x0000e43a) cell_last_hwr_side_pane_ParamLimits

0xbecc,	// (0x0000e43a) cell_last_hwr_side_pane

0x41ee,	// (0x0000675c) cell_last_hwr_side_pane_g1

0x74fd,	// (0x00009a6b) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x0001237e) cell_last_hwr_side_pane_g

0xd07a,	// (0x0000f5e8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd07a,	// (0x0000f5e8) vkb2_area_bottom_space_btn_pane

0x4693,	// (0x00006c01) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6f10,	// (0x0000947e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7428,	// (0x00009996) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7506,	// (0x00009a74) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7506,	// (0x00009a74) vkb2_area_bottom_space_btn_pane_g1

0x7540,	// (0x00009aae) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7540,	// (0x00009aae) vkb2_area_bottom_space_btn_pane_g2

0x7576,	// (0x00009ae4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7576,	// (0x00009ae4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x00012383) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x00012383) vkb2_area_bottom_space_btn_pane_g

0x4314,	// (0x00006882) cel_fep_hwr_func_pane_ParamLimits

0x4314,	// (0x00006882) cel_fep_hwr_func_pane

0xbea1,	// (0x0000e40f) cell_hwr_side_button_pane_ParamLimits

0xbea1,	// (0x0000e40f) cell_hwr_side_button_pane

0x633a,	// (0x000088a8) aid_area_touch_clock_ParamLimits

0xe2b3,	// (0x00010821) bg_uniindi_top_pane_ParamLimits

0x634e,	// (0x000088bc) uniindi_top_pane_g1_ParamLimits

0x6364,	// (0x000088d2) uniindi_top_pane_g2_ParamLimits

0x6370,	// (0x000088de) uniindi_top_pane_g3_ParamLimits

0x6381,	// (0x000088ef) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x00012296) uniindi_top_pane_g_ParamLimits

0x638e,	// (0x000088fc) uniindi_top_pane_t1_ParamLimits

0xe2b3,	// (0x00010821) bg_vkb2_func_pane_cp01_ParamLimits

0xe2b3,	// (0x00010821) bg_vkb2_func_pane_cp01

0x75c0,	// (0x00009b2e) cel_fep_hwr_func_pane_g1_ParamLimits

0x75c0,	// (0x00009b2e) cel_fep_hwr_func_pane_g1

0xe2b3,	// (0x00010821) bg_vkb2_func_pane_cp02_ParamLimits

0xe2b3,	// (0x00010821) bg_vkb2_func_pane_cp02

0x75c0,	// (0x00009b2e) cell_hwr_side_button_pane_g1_ParamLimits

0x75c0,	// (0x00009b2e) cell_hwr_side_button_pane_g1

0x1028,	// (0x00003596) status_pane_g4_ParamLimits

0x1028,	// (0x00003596) status_pane_g4

0x1042,	// (0x000035b0) status_pane_t1

0x3f8d,	// (0x000064fb) form2_midp_gauge_slider_cont_pane

0x3f95,	// (0x00006503) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbde7,	// (0x0000e355) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdf9,	// (0x0000e367) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x00012062) form2_midp_gauge_slider_pane_t_ParamLimits

0x3fcb,	// (0x00006539) form2_midp_slider_pane_ParamLimits

0x689f,	// (0x00008e0d) aid_size_cell_func_vkb2_ParamLimits

0x689f,	// (0x00008e0d) aid_size_cell_func_vkb2

0x74a3,	// (0x00009a11) slider_pane_g4_ParamLimits

0x74a3,	// (0x00009a11) slider_pane_g4

0xd51d,	// (0x0000fa8b) form2_midp_gauge_slider_pane_t2_cp01

0xd52b,	// (0x0000fa99) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd52b,	// (0x0000fa99) form2_midp_gauge_slider_pane_t3_cp01

0x75f9,	// (0x00009b67) form2_midp_slider_pane_cp01

0xde94,	// (0x00010402) navi_smil_pane

0x762d,	// (0x00009b9b) navi_smil_pane_g1

0x7635,	// (0x00009ba3) navi_smil_pane_t1

0x7602,	// (0x00009b70) form2_midp_slider_pane_g1

0x760b,	// (0x00009b79) form2_midp_slider_pane_g2

0x7613,	// (0x00009b81) form2_midp_slider_pane_g3

0x7602,	// (0x00009b70) form2_midp_slider_pane_g4

0xd548,	// (0x0000fab6) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x0001238c) form2_midp_slider_pane_g

0x75b0,	// (0x00009b1e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x75b0,	// (0x00009b1e) vkb2_area_bottom_space_btn_pane_g4

0xb140,	// (0x0000d6ae) lc0_navi_pane_ParamLimits

0xb140,	// (0x0000d6ae) lc0_navi_pane

0xb1b0,	// (0x0000d71e) lc0_stat_indi_pane_ParamLimits

0xb1b0,	// (0x0000d71e) lc0_stat_indi_pane

0xb1c5,	// (0x0000d733) ls0_title_pane_ParamLimits

0xb1c5,	// (0x0000d733) ls0_title_pane

0xe833,	// (0x00010da1) bg_popup_sub_pane_cp14_ParamLimits

0x6321,	// (0x0000888f) list_uniindi_pane_ParamLimits

0x632d,	// (0x0000889b) uniindi_top_pane_ParamLimits

0x63cc,	// (0x0000893a) list_single_uniindi_pane_g1_ParamLimits

0x63df,	// (0x0000894d) list_single_uniindi_pane_t1_ParamLimits

0xd551,	// (0x0000fabf) lc0_stat_clock_pane_ParamLimits

0xd551,	// (0x0000fabf) lc0_stat_clock_pane

0xd55e,	// (0x0000facc) lc0_stat_indi_pane_g1_ParamLimits

0xd55e,	// (0x0000facc) lc0_stat_indi_pane_g1

0xd56b,	// (0x0000fad9) lc0_stat_indi_pane_g2_ParamLimits

0xd56b,	// (0x0000fad9) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x00012397) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x00012397) lc0_stat_indi_pane_g

0xd578,	// (0x0000fae6) lc0_uni_indicator_pane_ParamLimits

0xd578,	// (0x0000fae6) lc0_uni_indicator_pane

0xd585,	// (0x0000faf3) ls0_title_pane_g1_ParamLimits

0xd585,	// (0x0000faf3) ls0_title_pane_g1

0xd599,	// (0x0000fb07) ls0_title_pane_t1_ParamLimits

0xd599,	// (0x0000fb07) ls0_title_pane_t1

0xd5c7,	// (0x0000fb35) lc0_uni_indicator_pane_g1_ParamLimits

0xd5c7,	// (0x0000fb35) lc0_uni_indicator_pane_g1

0x76d4,	// (0x00009c42) lc0_stat_clock_pane_t1

0xde94,	// (0x00010402) main_ai5_pane

0x76e2,	// (0x00009c50) ai5_sk_pane_ParamLimits

0x76e2,	// (0x00009c50) ai5_sk_pane

0xd5e6,	// (0x0000fb54) cell_ai5_widget_pane_ParamLimits

0xd5e6,	// (0x0000fb54) cell_ai5_widget_pane

0x7c8b,	// (0x0000a1f9) aid_size_cell_widget_grid

0x7c99,	// (0x0000a207) bg_ai5_widget_pane_ParamLimits

0x7c99,	// (0x0000a207) bg_ai5_widget_pane

0x7d0d,	// (0x0000a27b) cell_ai5_widget_pane_g2

0x7d1d,	// (0x0000a28b) cell_ai5_widget_pane_g3

0x7d34,	// (0x0000a2a2) cell_ai5_widget_pane_g4

0x7d40,	// (0x0000a2ae) cell_ai5_widget_pane_g5

0xd93d,	// (0x0000feab) cell_ai5_widget_pane_g6

0xd949,	// (0x0000feb7) cell_ai5_widget_pane_g7

0x7da0,	// (0x0000a30e) cell_ai5_widget_pane_t1_ParamLimits

0x7da0,	// (0x0000a30e) cell_ai5_widget_pane_t1

0x7dbd,	// (0x0000a32b) cell_ai5_widget_pane_t2_ParamLimits

0x7dbd,	// (0x0000a32b) cell_ai5_widget_pane_t2

0x7dd5,	// (0x0000a343) cell_ai5_widget_pane_t3_ParamLimits

0x7dd5,	// (0x0000a343) cell_ai5_widget_pane_t3

0x7ded,	// (0x0000a35b) cell_ai5_widget_pane_t4_ParamLimits

0x7ded,	// (0x0000a35b) cell_ai5_widget_pane_t4

0x7e0a,	// (0x0000a378) cell_ai5_widget_pane_t5_ParamLimits

0x7e0a,	// (0x0000a378) cell_ai5_widget_pane_t5

0x7e29,	// (0x0000a397) cell_ai5_widget_pane_t6_ParamLimits

0x7e29,	// (0x0000a397) cell_ai5_widget_pane_t6

0x7e3b,	// (0x0000a3a9) cell_ai5_widget_pane_t7_ParamLimits

0x7e3b,	// (0x0000a3a9) cell_ai5_widget_pane_t7

0x7e54,	// (0x0000a3c2) cell_ai5_widget_pane_t8_ParamLimits

0x7e54,	// (0x0000a3c2) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x000123b1) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x000123b1) cell_ai5_widget_pane_t

0x7ea8,	// (0x0000a416) grid_ai5_widget_pane

0xe833,	// (0x00010da1) highlight_cell_ai5_widget_pane_ParamLimits

0xe833,	// (0x00010da1) highlight_cell_ai5_widget_pane

0xd955,	// (0x0000fec3) ai5_sk_left_pane

0xd95f,	// (0x0000fecd) ai5_sk_middle_pane

0xd969,	// (0x0000fed7) ai5_sk_right_pane

0x7eda,	// (0x0000a448) bg_ai5_widget_pane_g1_ParamLimits

0x7eda,	// (0x0000a448) bg_ai5_widget_pane_g1

0x7ee6,	// (0x0000a454) bg_ai5_widget_pane_g2_ParamLimits

0x7ee6,	// (0x0000a454) bg_ai5_widget_pane_g2

0x7ef2,	// (0x0000a460) bg_ai5_widget_pane_g3_ParamLimits

0x7ef2,	// (0x0000a460) bg_ai5_widget_pane_g3

0x7efe,	// (0x0000a46c) bg_ai5_widget_pane_g4_ParamLimits

0x7efe,	// (0x0000a46c) bg_ai5_widget_pane_g4

0x7f0a,	// (0x0000a478) bg_ai5_widget_pane_g5_ParamLimits

0x7f0a,	// (0x0000a478) bg_ai5_widget_pane_g5

0x7f16,	// (0x0000a484) bg_ai5_widget_pane_g6_ParamLimits

0x7f16,	// (0x0000a484) bg_ai5_widget_pane_g6

0x7f22,	// (0x0000a490) bg_ai5_widget_pane_g7_ParamLimits

0x7f22,	// (0x0000a490) bg_ai5_widget_pane_g7

0x7f2e,	// (0x0000a49c) bg_ai5_widget_pane_g8_ParamLimits

0x7f2e,	// (0x0000a49c) bg_ai5_widget_pane_g8

0x7f3a,	// (0x0000a4a8) bg_ai5_widget_pane_g9_ParamLimits

0x7f3a,	// (0x0000a4a8) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x000123c6) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x000123c6) bg_ai5_widget_pane_g

0x7f70,	// (0x0000a4de) cell_shortcut_ai5_widget_pane_ParamLimits

0x7f70,	// (0x0000a4de) cell_shortcut_ai5_widget_pane

0x00e5,	// (0x00002653) bg_cell_shortcut_ai5_widget_pane

0x7f83,	// (0x0000a4f1) cell_grid_ai5_widget_pane_g1

0x00e5,	// (0x00002653) highlight_cell_shortcut_ai5_widget_pane

0x125d,	// (0x000037cb) ai5_sk_left_pane_g1

0x7f8c,	// (0x0000a4fa) ai5_sk_left_pane_g2

0x7f94,	// (0x0000a502) ai5_sk_left_pane_g3

0x7f9c,	// (0x0000a50a) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x000123d9) ai5_sk_left_pane_g

0x7fa4,	// (0x0000a512) ai5_sk_left_pane_t1

0x1255,	// (0x000037c3) ai5_sk_right_pane_g1

0x7fb2,	// (0x0000a520) ai5_sk_right_pane_g2

0x7fba,	// (0x0000a528) ai5_sk_right_pane_g3

0x7fc2,	// (0x0000a530) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x000123e2) ai5_sk_right_pane_g

0x7fca,	// (0x0000a538) ai5_sk_right_pane_t1

0x1255,	// (0x000037c3) ai5_sk_middle_pane_g1

0x125d,	// (0x000037cb) ai5_sk_middle_pane_g2

0x1275,	// (0x000037e3) ai5_sk_middle_pane_g3

0x7fba,	// (0x0000a528) ai5_sk_middle_pane_g4

0x7f94,	// (0x0000a502) ai5_sk_middle_pane_g5

0x7fd8,	// (0x0000a546) ai5_sk_middle_pane_g6

0xd973,	// (0x0000fee1) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x000123eb) ai5_sk_middle_pane_g

0xb02a,	// (0x0000d598) aid_touch_area_size_lc0_ParamLimits

0xb02a,	// (0x0000d598) aid_touch_area_size_lc0

0x4a6a,	// (0x00006fd8) cell_hwr_candidate_pane_t1_ParamLimits

0x0cdf,	// (0x0000324d) aid_touch_navi_pane

0xb2d0,	// (0x0000d83e) status_dt_navi_pane_ParamLimits

0xb2d0,	// (0x0000d83e) status_dt_navi_pane

0xb2e8,	// (0x0000d856) status_dt_sta_pane_ParamLimits

0xb2e8,	// (0x0000d856) status_dt_sta_pane

0xd97b,	// (0x0000fee9) dt_sta_controll_pane

0xd988,	// (0x0000fef6) dt_sta_indi_pane

0xd995,	// (0x0000ff03) dt_sta_title_pane

0xe2b3,	// (0x00010821) bg_dt_sta_indi_pane_ParamLimits

0xe2b3,	// (0x00010821) bg_dt_sta_indi_pane

0xd9a7,	// (0x0000ff15) dt_sta_battery_pane

0xd9af,	// (0x0000ff1d) dt_sta_indi_pane_g1

0xd9b8,	// (0x0000ff26) dt_sta_indi_pane_g2

0xd9c1,	// (0x0000ff2f) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x000123fa) dt_sta_indi_pane_g

0xd9ca,	// (0x0000ff38) dt_sta_signal_pane

0xe833,	// (0x00010da1) bg_dt_sta_title_pane_ParamLimits

0xe833,	// (0x00010da1) bg_dt_sta_title_pane

0xd9d3,	// (0x0000ff41) dt_sta_title_pane_g1

0xd9db,	// (0x0000ff49) dt_sta_title_pane_t1_ParamLimits

0xd9db,	// (0x0000ff49) dt_sta_title_pane_t1

0xde94,	// (0x00010402) bg_dt_sta_control_pane

0xd9f0,	// (0x0000ff5e) dt_sta_controll_pane_g1

0xd9f9,	// (0x0000ff67) bg_dt_sta_title_pane_g1

0xda02,	// (0x0000ff70) bg_dt_sta_title_pane_g2

0xda0b,	// (0x0000ff79) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x00012401) bg_dt_sta_title_pane_g

0x41ee,	// (0x0000675c) bg_dt_sta_indi_pane_g1

0x8086,	// (0x0000a5f4) dt_sta_signal_pane_g1

0x808e,	// (0x0000a5fc) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x00012408) dt_sta_signal_pane_g

0x8096,	// (0x0000a604) dt_sta_battery_pane_g1

0x809f,	// (0x0000a60d) dt_sta_battery_pane_t1

0x41ee,	// (0x0000675c) bg_dt_sta_control_pane_g1

0xf0e8,	// (0x00011656) fep_china_uni_eep_pane

0xf0f0,	// (0x0001165e) fep_china_uni_entry_pane_ParamLimits

0xf100,	// (0x0001166e) popup_fep_china_uni_window_g1_ParamLimits

0xf110,	// (0x0001167e) popup_fep_china_uni_window_g2_ParamLimits

0xf110,	// (0x0001167e) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00011c86) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00011c86) popup_fep_china_uni_window_g

0x80ae,	// (0x0000a61c) fep_china_uni_eep_pane_g1

0x80b6,	// (0x0000a624) fep_china_uni_eep_pane_t1

0x7624,	// (0x00009b92) aid_touch_area_size_smil_player

0x0e37,	// (0x000033a5) lc0_clock_pane

0x1036,	// (0x000035a4) status_pane_g5_ParamLimits

0x1036,	// (0x000035a4) status_pane_g5

0xaa7f,	// (0x0000cfed) popup_keymap_window

0x0ff4,	// (0x00003562) status_icon_pane

0x7d1d,	// (0x0000a28b) cell_ai5_widget_pane_g3_ParamLimits

0x7d34,	// (0x0000a2a2) cell_ai5_widget_pane_g4_ParamLimits

0x7d40,	// (0x0000a2ae) cell_ai5_widget_pane_g5_ParamLimits

0x7d64,	// (0x0000a2d2) cell_ai5_widget_pane_g8_ParamLimits

0x7d64,	// (0x0000a2d2) cell_ai5_widget_pane_g8

0x7d78,	// (0x0000a2e6) cell_ai5_widget_pane_g9_ParamLimits

0x7d78,	// (0x0000a2e6) cell_ai5_widget_pane_g9

0x7d8c,	// (0x0000a2fa) cell_ai5_widget_pane_g10_ParamLimits

0x7d8c,	// (0x0000a2fa) cell_ai5_widget_pane_g10

0x80c5,	// (0x0000a633) status_icon_pane_g1

0xde94,	// (0x00010402) bg_popup_sub_pane_cp13

0x80cd,	// (0x0000a63b) popup_keymap_window_t1

0xa76e,	// (0x0000ccdc) control_pane_g6_ParamLimits

0xa76e,	// (0x0000ccdc) control_pane_g6

0xa77b,	// (0x0000cce9) control_pane_g7_ParamLimits

0xa77b,	// (0x0000cce9) control_pane_g7

0xa788,	// (0x0000ccf6) control_pane_g8_ParamLimits

0xa788,	// (0x0000ccf6) control_pane_g8

0xd97b,	// (0x0000fee9) dt_sta_controll_pane_ParamLimits

0xd988,	// (0x0000fef6) dt_sta_indi_pane_ParamLimits

0xd995,	// (0x0000ff03) dt_sta_title_pane_ParamLimits

0xe6d7,	// (0x00010c45) aid_size_touch_scroll_bar_cale

0xe039,	// (0x000105a7) popup_discreet_window_ParamLimits

0xe039,	// (0x000105a7) popup_discreet_window

0x97ae,	// (0x0000bd1c) popup_sk_window

0x1a83,	// (0x00003ff1) bg_popup_sub_pane_cp28_ParamLimits

0x1a83,	// (0x00003ff1) bg_popup_sub_pane_cp28

0x80db,	// (0x0000a649) popup_discreet_window_g1_ParamLimits

0x80db,	// (0x0000a649) popup_discreet_window_g1

0x80fb,	// (0x0000a669) popup_discreet_window_t1_ParamLimits

0x80fb,	// (0x0000a669) popup_discreet_window_t1

0x8119,	// (0x0000a687) popup_discreet_window_t2_ParamLimits

0x8119,	// (0x0000a687) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x0001240d) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x0001240d) popup_discreet_window_t

0x816b,	// (0x0000a6d9) popup_sk_window_g1

0x8175,	// (0x0000a6e3) popup_sk_window_g2

0x0001,

0xfea6,	// (0x00012414) popup_sk_window_g

0x817f,	// (0x0000a6ed) popup_sk_window_t1

0x818f,	// (0x0000a6fd) popup_sk_window_t1_copy1

0x7d0d,	// (0x0000a27b) cell_ai5_widget_pane_g2_ParamLimits

0x7e66,	// (0x0000a3d4) cell_ai5_widget_pane_t9_ParamLimits

0x7e66,	// (0x0000a3d4) cell_ai5_widget_pane_t9

0xde94,	// (0x00010402) main_fep_fshwr2_pane

0xda14,	// (0x0000ff82) aid_fshwr2_btn_pane

0xda25,	// (0x0000ff93) aid_fshwr2_syb_pane

0xda36,	// (0x0000ffa4) aid_fshwr2_txt_pane

0xda42,	// (0x0000ffb0) fshwr2_func_candi_pane

0xda63,	// (0x0000ffd1) fshwr2_hwr_syb_pane

0xda80,	// (0x0000ffee) fshwr2_icf_pane

0xde94,	// (0x00010402) fshwr2_icf_bg_pane

0x8211,	// (0x0000a77f) fshwr2_icf_pane_t1_ParamLimits

0x8211,	// (0x0000a77f) fshwr2_icf_pane_t1

0xef8d,	// (0x000114fb) fshwr2_func_candi_pane_g1

0xdaac,	// (0x0001001a) fshwr2_func_candi_row_pane_ParamLimits

0xdaac,	// (0x0001001a) fshwr2_func_candi_row_pane

0xdabc,	// (0x0001002a) cell_fshwr2_syb_pane_ParamLimits

0xdabc,	// (0x0001002a) cell_fshwr2_syb_pane

0x4693,	// (0x00006c01) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4693,	// (0x00006c01) fshwr2_hwr_syb_pane_g1

0xde94,	// (0x00010402) bg_popup_call_pane_cp01

0xdad2,	// (0x00010040) fshwr2_func_candi_cell_pane_ParamLimits

0xdad2,	// (0x00010040) fshwr2_func_candi_cell_pane

0xdb02,	// (0x00010070) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xdb02,	// (0x00010070) fshwr2_func_candi_cell_bg_pane

0xdb0e,	// (0x0001007c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdb0e,	// (0x0001007c) fshwr2_func_candi_cell_pane_g1

0xdb3d,	// (0x000100ab) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdb3d,	// (0x000100ab) fshwr2_func_candi_cell_pane_t1

0xde94,	// (0x00010402) bg_button_pane_cp08

0x82c2,	// (0x0000a830) cell_fshwr2_syb_bg_pane

0xdb50,	// (0x000100be) cell_fshwr2_syb_bg_pane_g1

0xdb58,	// (0x000100c6) cell_fshwr2_syb_bg_pane_t1

0xe833,	// (0x00010da1) main_tmo_pane

0xb891,	// (0x0000ddff) uni_indicator_pane_g1_ParamLimits

0xb8a7,	// (0x0000de15) uni_indicator_pane_g2_ParamLimits

0xb8bd,	// (0x0000de2b) uni_indicator_pane_g3_ParamLimits

0xb8d2,	// (0x0000de40) uni_indicator_pane_g4_ParamLimits

0xb8d2,	// (0x0000de40) uni_indicator_pane_g4

0x2768,	// (0x00004cd6) uni_indicator_pane_g5_ParamLimits

0x2768,	// (0x00004cd6) uni_indicator_pane_g5

0x2768,	// (0x00004cd6) uni_indicator_pane_g6_ParamLimits

0x2768,	// (0x00004cd6) uni_indicator_pane_g6

0xf910,	// (0x00011e7e) uni_indicator_pane_g_ParamLimits

0xc622,	// (0x0000eb90) popup_tmo_note_window_ParamLimits

0xc622,	// (0x0000eb90) popup_tmo_note_window

0xe833,	// (0x00010da1) fshwr2_bg_pane

0xdb2e,	// (0x0001009c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdb2e,	// (0x0001009c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x00012419) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x00012419) fshwr2_func_candi_cell_pane_g

0x41ee,	// (0x0000675c) bg_popup_window_pane_cp01

0x82e1,	// (0x0000a84f) bg_popup_window_pane_g1_cp01

0x82ea,	// (0x0000a858) bg_popup_window_pane_cp22_ParamLimits

0x82ea,	// (0x0000a858) bg_popup_window_pane_cp22

0x82f8,	// (0x0000a866) listscroll_tmo_link_pane_ParamLimits

0x82f8,	// (0x0000a866) listscroll_tmo_link_pane

0x8338,	// (0x0000a8a6) popup_tmo_note_window_g1_ParamLimits

0x8338,	// (0x0000a8a6) popup_tmo_note_window_g1

0x8345,	// (0x0000a8b3) tmo_note_info_pane_ParamLimits

0x8345,	// (0x0000a8b3) tmo_note_info_pane

0xdb67,	// (0x000100d5) list_tmo_note_info_pane_g1_ParamLimits

0xdb67,	// (0x000100d5) list_tmo_note_info_pane_g1

0x8376,	// (0x0000a8e4) list_tmo_note_info_pane_g2_ParamLimits

0x8376,	// (0x0000a8e4) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x0001241e) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x0001241e) list_tmo_note_info_pane_g

0x8392,	// (0x0000a900) list_tmo_note_info_text_pane_ParamLimits

0x8392,	// (0x0000a900) list_tmo_note_info_text_pane

0x8417,	// (0x0000a985) list_tmo_link_pane

0x8424,	// (0x0000a992) scroll_pane_cp20

0x8431,	// (0x0000a99f) list_single_tmo_link_pane_ParamLimits

0x8431,	// (0x0000a99f) list_single_tmo_link_pane

0x8441,	// (0x0000a9af) list_single_tmo_link_pane_t1

0x844f,	// (0x0000a9bd) list_tmo_note_info_text_pane_t1_ParamLimits

0x844f,	// (0x0000a9bd) list_tmo_note_info_text_pane_t1

0xa1a3,	// (0x0000c711) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa1a3,	// (0x0000c711) aid_size_touch_scroll_bar_cp01

0xa0d2,	// (0x0000c640) aid_size_touch_slider_marker

0x979e,	// (0x0000bd0c) popup_settings_window_ParamLimits

0x979e,	// (0x0000bd0c) popup_settings_window

0x0686,	// (0x00002bf4) popup_candi_list_indi_window

0x0cdf,	// (0x0000324d) aid_touch_navi_pane_ParamLimits

0x609b,	// (0x00008609) rs_clock_indi_pane

0x60a4,	// (0x00008612) sctrl_sk_bottom_pane_ParamLimits

0x60b5,	// (0x00008623) sctrl_sk_top_pane_ParamLimits

0x68f9,	// (0x00008e67) popup_fep_tooltip_window

0x7c8b,	// (0x0000a1f9) aid_size_cell_widget_grid_ParamLimits

0x7cf8,	// (0x0000a266) cell_ai5_widget_pane_g1_ParamLimits

0x7cf8,	// (0x0000a266) cell_ai5_widget_pane_g1

0xd93d,	// (0x0000feab) cell_ai5_widget_pane_g6_ParamLimits

0xd949,	// (0x0000feb7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x0001239c) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0001239c) cell_ai5_widget_pane_g

0x7e8a,	// (0x0000a3f8) cell_ai5_widget_pane_t10_ParamLimits

0x7e8a,	// (0x0000a3f8) cell_ai5_widget_pane_t10

0x7ea8,	// (0x0000a416) grid_ai5_widget_pane_ParamLimits

0x7f46,	// (0x0000a4b4) cell_contacts_ai5_widget_pane_ParamLimits

0x7f46,	// (0x0000a4b4) cell_contacts_ai5_widget_pane

0x812e,	// (0x0000a69c) popup_discreet_window_t3_ParamLimits

0x812e,	// (0x0000a69c) popup_discreet_window_t3

0xda98,	// (0x00010006) popup_fshwr2_char_preview_window_ParamLimits

0xda98,	// (0x00010006) popup_fshwr2_char_preview_window

0xdb7e,	// (0x000100ec) tmo_note_info_pane_t1

0xdb93,	// (0x00010101) tmo_note_info_pane_t2

0xdbac,	// (0x0001011a) tmo_note_info_pane_t3

0x83f3,	// (0x0000a961) tmo_note_info_pane_t4

0x8405,	// (0x0000a973) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x00012423) tmo_note_info_pane_t

0x8417,	// (0x0000a985) list_tmo_link_pane_ParamLimits

0x8424,	// (0x0000a992) scroll_pane_cp20_ParamLimits

0xde94,	// (0x00010402) bg_popup_fep_char_preview_window_cp01

0x8468,	// (0x0000a9d6) popup_fshwr2_char_preview_window_t1

0x8476,	// (0x0000a9e4) popup_candi_list_indi_window_g1

0x847f,	// (0x0000a9ed) bg_cell_contacts_ai5_widget_pane

0x848b,	// (0x0000a9f9) cell_contacts_ai5_widget_pane_g1

0x84a0,	// (0x0000aa0e) cell_contacts_ai5_widget_pane_g2

0x84ac,	// (0x0000aa1a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x0001242e) cell_contacts_ai5_widget_pane_g

0x84b8,	// (0x0000aa26) cell_contacts_ai5_widget_pane_t1

0xe833,	// (0x00010da1) highlight_cell_shortcut_ai5_widget_pane_cp01

0xdc26,	// (0x00010194) settings_container_pane

0x00e5,	// (0x00002653) listscroll_set_pane_copy1

0x3592,	// (0x00005b00) scroll_pane_cp121_copy1

0x853b,	// (0x0000aaa9) set_content_pane_copy1

0xdc32,	// (0x000101a0) aid_height_set_list_copy1_ParamLimits

0xdc32,	// (0x000101a0) aid_height_set_list_copy1

0x2a6c,	// (0x00004fda) aid_size_parent_copy1_ParamLimits

0x2a6c,	// (0x00004fda) aid_size_parent_copy1

0xdc3e,	// (0x000101ac) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdc3e,	// (0x000101ac) button_value_adjust_pane_cp6_copy1

0x065e,	// (0x00002bcc) list_highlight_pane_cp2_copy1_ParamLimits

0x065e,	// (0x00002bcc) list_highlight_pane_cp2_copy1

0xdc52,	// (0x000101c0) list_set_pane_copy1_ParamLimits

0xdc52,	// (0x000101c0) list_set_pane_copy1

0xdbc1,	// (0x0001012f) main_pane_set_t1_copy1_ParamLimits

0xdbc1,	// (0x0001012f) main_pane_set_t1_copy1

0xdbfb,	// (0x00010169) main_pane_set_t2_copy1_ParamLimits

0xdbfb,	// (0x00010169) main_pane_set_t2_copy1

0xdd19,	// (0x00010287) main_pane_set_t3_copy1

0xdd27,	// (0x00010295) main_pane_set_t4_copy1

0xdc1a,	// (0x00010188) set_content_pane_g1_copy1_ParamLimits

0xdc1a,	// (0x00010188) set_content_pane_g1_copy1

0xdd35,	// (0x000102a3) setting_code_pane_copy1

0x864e,	// (0x0000abbc) setting_slider_graphic_pane_copy1

0x864e,	// (0x0000abbc) setting_slider_pane_copy1

0x864e,	// (0x0000abbc) setting_text_pane_copy1

0x864e,	// (0x0000abbc) setting_volume_pane_copy1

0xdd35,	// (0x000102a3) settings_code_pane_cp2_copy1

0xdd3d,	// (0x000102ab) settings_code_pane_cp_copy1_ParamLimits

0xdd3d,	// (0x000102ab) settings_code_pane_cp_copy1

0xdd51,	// (0x000102bf) volume_set_pane_copy1

0xdd5d,	// (0x000102cb) volume_set_pane_g10_copy1

0xdd69,	// (0x000102d7) volume_set_pane_g1_copy1

0xdd73,	// (0x000102e1) volume_set_pane_g2_copy1

0xdd7d,	// (0x000102eb) volume_set_pane_g3_copy1

0xdd87,	// (0x000102f5) volume_set_pane_g4_copy1

0xdd91,	// (0x000102ff) volume_set_pane_g5_copy1

0xdd9b,	// (0x00010309) volume_set_pane_g6_copy1

0xdda5,	// (0x00010313) volume_set_pane_g7_copy1

0xddaf,	// (0x0001031d) volume_set_pane_g8_copy1

0xddb9,	// (0x00010327) volume_set_pane_g9_copy1

0xe0dd,	// (0x0001064b) bg_set_opt_pane_cp_copy1_ParamLimits

0xe0dd,	// (0x0001064b) bg_set_opt_pane_cp_copy1

0x86dc,	// (0x0000ac4a) setting_slider_pane_t1_copy1_ParamLimits

0x86dc,	// (0x0000ac4a) setting_slider_pane_t1_copy1

0xddc3,	// (0x00010331) setting_slider_pane_t2_copy1_ParamLimits

0xddc3,	// (0x00010331) setting_slider_pane_t2_copy1

0xdddd,	// (0x0001034b) setting_slider_pane_t3_copy1_ParamLimits

0xdddd,	// (0x0001034b) setting_slider_pane_t3_copy1

0xddf5,	// (0x00010363) slider_set_pane_copy1_ParamLimits

0xddf5,	// (0x00010363) slider_set_pane_copy1

0xe8fc,	// (0x00010e6a) set_opt_bg_pane_g1_copy2

0xe904,	// (0x00010e72) set_opt_bg_pane_g2_copy2

0x8742,	// (0x0000acb0) set_opt_bg_pane_g3_copy2

0xe914,	// (0x00010e82) set_opt_bg_pane_g4_copy2

0xe91c,	// (0x00010e8a) set_opt_bg_pane_g5_copy2

0xe924,	// (0x00010e92) set_opt_bg_pane_g6_copy2

0xde0b,	// (0x00010379) set_opt_bg_pane_g7_copy2

0x8756,	// (0x0000acc4) set_opt_bg_pane_g8_copy2

0x8760,	// (0x0000acce) set_opt_bg_pane_g9_copy2

0x876a,	// (0x0000acd8) aid_size_touch_slider_mark_copy1_ParamLimits

0x876a,	// (0x0000acd8) aid_size_touch_slider_mark_copy1

0x877e,	// (0x0000acec) slider_set_pane_g1_copy1

0x8787,	// (0x0000acf5) slider_set_pane_g2_copy1

0x29d3,	// (0x00004f41) slider_set_pane_g3_copy1_ParamLimits

0x29d3,	// (0x00004f41) slider_set_pane_g3_copy1

0x29e7,	// (0x00004f55) slider_set_pane_g4_copy1_ParamLimits

0x29e7,	// (0x00004f55) slider_set_pane_g4_copy1

0x29ff,	// (0x00004f6d) slider_set_pane_g5_copy1_ParamLimits

0x29ff,	// (0x00004f6d) slider_set_pane_g5_copy1

0x29d3,	// (0x00004f41) slider_set_pane_g6_copy1_ParamLimits

0x29d3,	// (0x00004f41) slider_set_pane_g6_copy1

0xde15,	// (0x00010383) slider_set_pane_g7_copy1_ParamLimits

0xde15,	// (0x00010383) slider_set_pane_g7_copy1

0xe017,	// (0x00010585) bg_set_opt_pane_cp2_copy1

0x87a5,	// (0x0000ad13) setting_slider_graphic_pane_g1_copy1

0xde2b,	// (0x00010399) setting_slider_graphic_pane_t1_copy1

0xde3b,	// (0x000103a9) setting_slider_graphic_pane_t2_copy1

0xde4b,	// (0x000103b9) slider_set_pane_cp_copy1

0x87de,	// (0x0000ad4c) input_focus_pane_cp1_copy1

0x87e7,	// (0x0000ad55) list_set_text_pane_copy1

0x87ef,	// (0x0000ad5d) setting_text_pane_g1_copy1

0xe18b,	// (0x000106f9) set_text_pane_t1_copy1

0x87de,	// (0x0000ad4c) input_focus_pane_cp2_copy1

0x87ef,	// (0x0000ad5d) setting_code_pane_g1_copy1

0xde53,	// (0x000103c1) setting_code_pane_t1_copy1

0xde61,	// (0x000103cf) list_set_graphic_pane_copy1

0xe017,	// (0x00010585) bg_set_opt_pane_cp4_copy1

0xa4f1,	// (0x0000ca5f) list_set_graphic_pane_g1_copy1_ParamLimits

0xa4f1,	// (0x0000ca5f) list_set_graphic_pane_g1_copy1

0xde73,	// (0x000103e1) list_set_graphic_pane_g2_copy1

0xa509,	// (0x0000ca77) list_set_graphic_pane_t1_copy1_ParamLimits

0xa509,	// (0x0000ca77) list_set_graphic_pane_t1_copy1

0x41ee,	// (0x0000675c) rs_clock_indi_pane_g1

0x8839,	// (0x0000ada7) rs_clock_indi_pane_t1

0x8847,	// (0x0000adb5) rs_indi_pane

0x884f,	// (0x0000adbd) rs_indi_pane_g1

0x8858,	// (0x0000adc6) rs_indi_pane_g2

0x8861,	// (0x0000adcf) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x00012435) rs_indi_pane_g

0x00e5,	// (0x00002653) bg_popup_preview_window_pane_cp03

0x886a,	// (0x0000add8) popup_fep_tooltip_window_t1

0x5461,	// (0x000079cf) popup_note2_window_g2_ParamLimits

0x5461,	// (0x000079cf) popup_note2_window_g2

0x0001,

0xfc60,	// (0x000121ce) popup_note2_window_g_ParamLimits

0xfc60,	// (0x000121ce) popup_note2_window_g

0x5a70,	// (0x00007fde) bg_popup_sub_pane_cp11_ParamLimits

0x5a7d,	// (0x00007feb) cell_ai3_links_pane_g1_ParamLimits

0x5a94,	// (0x00008002) cell_ai3_links_pane_t1

0xe18b,	// (0x000106f9) set_text_pane_t1_copy1_ParamLimits

0xa588,	// (0x0000caf6) cell_graphic_popup_pane_cp2_ParamLimits

0xa588,	// (0x0000caf6) cell_graphic_popup_pane_cp2

0xde7b,	// (0x000103e9) cell_graphic_popup_pane_g1_cp2

0xe4ea,	// (0x00010a58) cell_graphic_popup_pane_g2_cp2

0x8880,	// (0x0000adee) cell_graphic_popup_pane_g3_cp2

0x8888,	// (0x0000adf6) cell_graphic_popup_pane_t2_cp2

0xe4fb,	// (0x00010a69) grid_highlight_pane_cp3_cp2

0xed7c,	// (0x000112ea) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe833,	// (0x00010da1) main_tmo_pane_ParamLimits

0xc616,	// (0x0000eb84) popup_tmo_big_image_note_window

0x7ce7,	// (0x0000a255) cell_ai5_widget_list_pane

0x7cef,	// (0x0000a25d) cell_ai5_widget_lrg_icon_pane

0xdb7e,	// (0x000100ec) tmo_note_info_pane_t1_ParamLimits

0xdb93,	// (0x00010101) tmo_note_info_pane_t2_ParamLimits

0xdbac,	// (0x0001011a) tmo_note_info_pane_t3_ParamLimits

0x83f3,	// (0x0000a961) tmo_note_info_pane_t4_ParamLimits

0x8405,	// (0x0000a973) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x00012423) tmo_note_info_pane_t_ParamLimits

0xdc26,	// (0x00010194) settings_container_pane_ParamLimits

0x87d6,	// (0x0000ad44) indicator_popup_pane_cp5

0x87d6,	// (0x0000ad44) indicator_popup_pane_cp6

0xde61,	// (0x000103cf) list_set_graphic_pane_copy1_ParamLimits

0xde94,	// (0x00010402) bg_popup_window_pane_cp23

0x8896,	// (0x0000ae04) popup_tmo_big_image_note_window_g1

0x88a2,	// (0x0000ae10) popup_tmo_big_image_note_window_t1

0x88b2,	// (0x0000ae20) popup_tmo_big_image_note_window_t2

0x88c2,	// (0x0000ae30) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x0001243c) popup_tmo_big_image_note_window_t

0x41ee,	// (0x0000675c) cell_ai5_widget_lrg_icon_pane_g1

0x88d2,	// (0x0000ae40) cell_ai5_widget_lrg_icon_pane_t1

0x88e0,	// (0x0000ae4e) cell_ai5_widget_list_row_pane_ParamLimits

0x88e0,	// (0x0000ae4e) cell_ai5_widget_list_row_pane

0x88f8,	// (0x0000ae66) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x88f8,	// (0x0000ae66) cell_ai5_widget_list_row_pane_g1

0x8905,	// (0x0000ae73) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8905,	// (0x0000ae73) cell_ai5_widget_list_row_pane_t1

0x8930,	// (0x0000ae9e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8930,	// (0x0000ae9e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x00012443) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x00012443) cell_ai5_widget_list_row_pane_t

0xde94,	// (0x00010402) main_fep_vtchi_ss_pane

0x8974,	// (0x0000aee2) popup_fep_char_pre_window

0x897c,	// (0x0000aeea) popup_fep_ituss_window

0x899d,	// (0x0000af0b) popup_fep_vkbss_window

0x89bf,	// (0x0000af2d) grid_vkbss_keypad_pane_ParamLimits

0x89bf,	// (0x0000af2d) grid_vkbss_keypad_pane

0x89cf,	// (0x0000af3d) ituss_keypad_pane

0x89ea,	// (0x0000af58) aid_vkbss_key_offset_ParamLimits

0x89ea,	// (0x0000af58) aid_vkbss_key_offset

0x89f6,	// (0x0000af64) cell_vkbss_key_pane_ParamLimits

0x89f6,	// (0x0000af64) cell_vkbss_key_pane

0x8a0c,	// (0x0000af7a) bg_cell_vkbss_key_g1_ParamLimits

0x8a0c,	// (0x0000af7a) bg_cell_vkbss_key_g1

0x8a18,	// (0x0000af86) cell_vkbss_key_3p_pane_ParamLimits

0x8a18,	// (0x0000af86) cell_vkbss_key_3p_pane

0x8a32,	// (0x0000afa0) cell_vkbss_key_g1_ParamLimits

0x8a32,	// (0x0000afa0) cell_vkbss_key_g1

0x8a4c,	// (0x0000afba) cell_vkbss_key_t1_ParamLimits

0x8a4c,	// (0x0000afba) cell_vkbss_key_t1

0x8a77,	// (0x0000afe5) cell_ituss_key_pane_ParamLimits

0x8a77,	// (0x0000afe5) cell_ituss_key_pane

0x8a88,	// (0x0000aff6) bg_cell_ituss_key_g1_ParamLimits

0x8a88,	// (0x0000aff6) bg_cell_ituss_key_g1

0x8a94,	// (0x0000b002) cell_ituss_key_pane_g1_ParamLimits

0x8a94,	// (0x0000b002) cell_ituss_key_pane_g1

0x8aa8,	// (0x0000b016) cell_ituss_key_pane_g2_ParamLimits

0x8aa8,	// (0x0000b016) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x0001244a) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x0001244a) cell_ituss_key_pane_g

0x8ae6,	// (0x0000b054) cell_ituss_key_t1_ParamLimits

0x8ae6,	// (0x0000b054) cell_ituss_key_t1

0x8b20,	// (0x0000b08e) cell_ituss_key_t2_ParamLimits

0x8b20,	// (0x0000b08e) cell_ituss_key_t2

0x8b51,	// (0x0000b0bf) cell_ituss_key_t3_ParamLimits

0x8b51,	// (0x0000b0bf) cell_ituss_key_t3

0x8b20,	// (0x0000b08e) cell_ituss_key_t4_ParamLimits

0x8b20,	// (0x0000b08e) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00012451) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00012451) cell_ituss_key_t

0x8b94,	// (0x0000b102) cell_vkbss_key_3p_pane_g1

0x8b9c,	// (0x0000b10a) cell_vkbss_key_3p_pane_g2

0x8ba4,	// (0x0000b112) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0001245c) cell_vkbss_key_3p_pane_g

0xde94,	// (0x00010402) bg_popup_fep_char_preview_window_cp02

0x8bac,	// (0x0000b11a) popup_fep_char_pre_window_t1

0xd933,	// (0x0000fea1) main_ai5_sk_pane

0x847f,	// (0x0000a9ed) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x848b,	// (0x0000a9f9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x84a0,	// (0x0000aa0e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x84ac,	// (0x0000aa1a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x0001242e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x84b8,	// (0x0000aa26) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe833,	// (0x00010da1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xde83,	// (0x000103f1) main_ai5_sk_pane_g1

0x18bb,	// (0x00003e29) popup_query_code_window_g1

0x8992,	// (0x0000af00) popup_fep_vkb_icf_pane

0x89a8,	// (0x0000af16) popup_fep_vtchi_icf_pane

0x8bc4,	// (0x0000b132) bg_icf_pane

0x8bd0,	// (0x0000b13e) list_vkb_icf_pane

0x8bdc,	// (0x0000b14a) bg_icf_pane_cp01

0x8be8,	// (0x0000b156) vtchi_icf_list_pane

0x8bf9,	// (0x0000b167) list_vkb_icf_pane_t1_ParamLimits

0x8bf9,	// (0x0000b167) list_vkb_icf_pane_t1

0x8c0f,	// (0x0000b17d) vtchi_icf_list_pane_t1_ParamLimits

0x8c0f,	// (0x0000b17d) vtchi_icf_list_pane_t1

0x897c,	// (0x0000aeea) popup_fep_ituss_window_ParamLimits

0x89a8,	// (0x0000af16) popup_fep_vtchi_icf_pane_ParamLimits

0x89cf,	// (0x0000af3d) ituss_keypad_pane_ParamLimits

0x89de,	// (0x0000af4c) ituss_sks_pane

0x8bc4,	// (0x0000b132) bg_icf_pane_ParamLimits

0x8958,	// (0x0000aec6) icf_edit_indi_pane_ParamLimits

0x8958,	// (0x0000aec6) icf_edit_indi_pane

0x8bd0,	// (0x0000b13e) list_vkb_icf_pane_ParamLimits

0x8bdc,	// (0x0000b14a) bg_icf_pane_cp01_ParamLimits

0x8967,	// (0x0000aed5) icf_edit_indi_pane_cp01_ParamLimits

0x8967,	// (0x0000aed5) icf_edit_indi_pane_cp01

0x8bf0,	// (0x0000b15e) vtchi_query_pane

0x4693,	// (0x00006c01) icf_edit_indi_pane_g1_ParamLimits

0x4693,	// (0x00006c01) icf_edit_indi_pane_g1

0x8c91,	// (0x0000b1ff) icf_edit_indi_pane_g2_ParamLimits

0x8c91,	// (0x0000b1ff) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00012474) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00012474) icf_edit_indi_pane_g

0x8ca0,	// (0x0000b20e) icf_edit_indi_pane_t1

0x8c27,	// (0x0000b195) bg_input_focus_pane_cp042

0xe6ce,	// (0x00010c3c) vtchi_button_pane

0x8c30,	// (0x0000b19e) vtchi_query_pane_t1

0x8c3e,	// (0x0000b1ac) vtchi_query_pane_t2

0x8c4c,	// (0x0000b1ba) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00012463) vtchi_query_pane_t

0xde94,	// (0x00010402) bg_button_pane_cp13

0x8c5a,	// (0x0000b1c8) vtchi_button_pane_g1

0x8c62,	// (0x0000b1d0) ituss_sks_pane_g1

0x8c6d,	// (0x0000b1db) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x0001246a) ituss_sks_pane_g

0x8c75,	// (0x0000b1e3) ituss_sks_pane_t1

0x8c83,	// (0x0000b1f1) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0001246f) ituss_sks_pane_t

0x3bf7,	// (0x00006165) indicator_nsta_pane_cp_g1

0x3c00,	// (0x0000616e) indicator_nsta_pane_cp_g2

0x3c08,	// (0x00006176) indicator_nsta_pane_cp_g3

0x3c10,	// (0x0000617e) indicator_nsta_pane_cp_g4

0x3c18,	// (0x00006186) indicator_nsta_pane_cp_g5

0x3c20,	// (0x0000618e) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x00012018) indicator_nsta_pane_cp_g

0xd3f2,	// (0x0000f960) cell_graphic2_pane_t2_ParamLimits

0xd3f2,	// (0x0000f960) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x00012325) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x00012325) cell_graphic2_pane_t

0xd428,	// (0x0000f996) cell_graphic2_control_pane_t1

0xa3ec,	// (0x0000c95a) signal_pane_g3_ParamLimits

0xa3ec,	// (0x0000c95a) signal_pane_g3

0xa400,	// (0x0000c96e) signal_pane_g4_ParamLimits

0xa400,	// (0x0000c96e) signal_pane_g4

0x8942,	// (0x0000aeb0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8942,	// (0x0000aeb0) cell_ai5_widget_list_row_pane_t3

0x8ad4,	// (0x0000b042) cell_ituss_key_pane_t1_ParamLimits

0x8ad4,	// (0x0000b042) cell_ituss_key_pane_t1

0x1509,	// (0x00003a77) form_field_data_wide_pane_vc_t2_ParamLimits

0x1509,	// (0x00003a77) form_field_data_wide_pane_vc_t2

0x151d,	// (0x00003a8b) form_field_data_wide_pane_vc_t3_ParamLimits

0x151d,	// (0x00003a8b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x00011d66) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x00011d66) form_field_data_wide_pane_vc_t

0x38a8,	// (0x00005e16) form_field_slider_wide_pane_vc_t3_ParamLimits

0x38a8,	// (0x00005e16) form_field_slider_wide_pane_vc_t3

0x397e,	// (0x00005eec) form_field_popup_wide_pane_vc_t2_ParamLimits

0x397e,	// (0x00005eec) form_field_popup_wide_pane_vc_t2

0x3995,	// (0x00005f03) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3995,	// (0x00005f03) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x00012007) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00012007) form_field_popup_wide_pane_vc_t

0xda14,	// (0x0000ff82) aid_fshwr2_btn_pane_ParamLimits

0xda25,	// (0x0000ff93) aid_fshwr2_syb_pane_ParamLimits

0xda36,	// (0x0000ffa4) aid_fshwr2_txt_pane_ParamLimits

0xe833,	// (0x00010da1) fshwr2_bg_pane_ParamLimits

0xda42,	// (0x0000ffb0) fshwr2_func_candi_pane_ParamLimits

0xda63,	// (0x0000ffd1) fshwr2_hwr_syb_pane_ParamLimits

0xda80,	// (0x0000ffee) fshwr2_icf_pane_ParamLimits

0x381c,	// (0x00005d8a) list_double_graphic_pane_vc_g4_ParamLimits

0x381c,	// (0x00005d8a) list_double_graphic_pane_vc_g4

0x8ac8,	// (0x0000b036) cell_ituss_key_pane_g3_ParamLimits

0x8ac8,	// (0x0000b036) cell_ituss_key_pane_g3

0x8b82,	// (0x0000b0f0) cell_ituss_key_t5_ParamLimits

0x8b82,	// (0x0000b0f0) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
