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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003f660 };

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
0xbc72,	// (0x0004b2d2) Screen

0xbc7e,	// (0x0004b2de) application_window_ParamLimits

0xbc7e,	// (0x0004b2de) application_window

0x3138,	// (0x00042798) screen_g1

0xbcb6,	// (0x0004b316) area_bottom_pane_ParamLimits

0xbcb6,	// (0x0004b316) area_bottom_pane

0x0ef1,	// (0x00040551) area_top_pane_ParamLimits

0x0ef1,	// (0x00040551) area_top_pane

0x0f85,	// (0x000405e5) main_pane_ParamLimits

0x0f85,	// (0x000405e5) main_pane

0x3142,	// (0x000427a2) misc_graphics

0xd5af,	// (0x0004cc0f) battery_pane_ParamLimits

0xd5af,	// (0x0004cc0f) battery_pane

0x583c,	// (0x00044e9c) bg_status_flat_pane_g8

0x5844,	// (0x00044ea4) bg_status_flat_pane_g9

0x4b88,	// (0x000441e8) context_pane_ParamLimits

0x4b88,	// (0x000441e8) context_pane

0xd71a,	// (0x0004cd7a) navi_pane_ParamLimits

0xd71a,	// (0x0004cd7a) navi_pane

0xd792,	// (0x0004cdf2) signal_pane_ParamLimits

0xd792,	// (0x0004cdf2) signal_pane

0x0008,

0xf878,	// (0x0004eed8) bg_status_flat_pane_g

0xd822,	// (0x0004ce82) status_pane_g1_ParamLimits

0xd822,	// (0x0004ce82) status_pane_g1

0xd838,	// (0x0004ce98) status_pane_g2_ParamLimits

0xd838,	// (0x0004ce98) status_pane_g2

0x4da1,	// (0x00044401) status_pane_g3_ParamLimits

0x4da1,	// (0x00044401) status_pane_g3

0x0004,

0xf7ab,	// (0x0004ee0b) status_pane_g_ParamLimits

0xf7ab,	// (0x0004ee0b) status_pane_g

0xd844,	// (0x0004cea4) title_pane_ParamLimits

0xd844,	// (0x0004cea4) title_pane

0xd8a7,	// (0x0004cf07) uni_indicator_pane_ParamLimits

0xd8a7,	// (0x0004cf07) uni_indicator_pane

0x49ee,	// (0x0004404e) bg_list_pane_ParamLimits

0x49ee,	// (0x0004404e) bg_list_pane

0xd516,	// (0x0004cb76) find_pane

0xd51e,	// (0x0004cb7e) listscroll_app_pane_ParamLimits

0xd51e,	// (0x0004cb7e) listscroll_app_pane

0x4a1a,	// (0x0004407a) listscroll_form_pane

0xc09f,	// (0x0004b6ff) listscroll_gen_pane_ParamLimits

0xc09f,	// (0x0004b6ff) listscroll_gen_pane

0x4a1a,	// (0x0004407a) listscroll_set_pane

0x6406,	// (0x00045a66) main_idle_act_pane

0x46f4,	// (0x00043d54) main_idle_trad_pane

0x46f4,	// (0x00043d54) main_list_empty_pane

0x4a34,	// (0x00044094) main_midp_pane

0x4a40,	// (0x000440a0) main_pane_g1_ParamLimits

0x4a40,	// (0x000440a0) main_pane_g1

0xc0b3,	// (0x0004b713) popup_ai_message_window_ParamLimits

0xc0b3,	// (0x0004b713) popup_ai_message_window

0xc144,	// (0x0004b7a4) popup_fep_china_uni_window_ParamLimits

0xc144,	// (0x0004b7a4) popup_fep_china_uni_window

0x19de,	// (0x0004103e) popup_fep_japan_candidate_window_ParamLimits

0x19de,	// (0x0004103e) popup_fep_japan_candidate_window

0x19fe,	// (0x0004105e) popup_fep_japan_predictive_window_ParamLimits

0x19fe,	// (0x0004105e) popup_fep_japan_predictive_window

0xc1a0,	// (0x0004b800) popup_find_window

0xc1bd,	// (0x0004b81d) popup_grid_graphic_window_ParamLimits

0xc1bd,	// (0x0004b81d) popup_grid_graphic_window

0x1a63,	// (0x000410c3) popup_large_graphic_colour_window

0xc255,	// (0x0004b8b5) popup_menu_window_ParamLimits

0xc255,	// (0x0004b8b5) popup_menu_window

0xc427,	// (0x0004ba87) popup_note_image_window

0xc3ed,	// (0x0004ba4d) popup_note_wait_window_ParamLimits

0xc3ed,	// (0x0004ba4d) popup_note_wait_window

0xc43f,	// (0x0004ba9f) popup_note_window_ParamLimits

0xc43f,	// (0x0004ba9f) popup_note_window

0xc4e5,	// (0x0004bb45) popup_query_code_window_ParamLimits

0xc4e5,	// (0x0004bb45) popup_query_code_window

0x1cab,	// (0x0004130b) popup_query_data_code_window_ParamLimits

0x1cab,	// (0x0004130b) popup_query_data_code_window

0xc51f,	// (0x0004bb7f) popup_query_data_window_ParamLimits

0xc51f,	// (0x0004bb7f) popup_query_data_window

0xc5a1,	// (0x0004bc01) popup_query_sat_info_window_ParamLimits

0xc5a1,	// (0x0004bc01) popup_query_sat_info_window

0xc638,	// (0x0004bc98) popup_snote_single_graphic_window_ParamLimits

0xc638,	// (0x0004bc98) popup_snote_single_graphic_window

0xc638,	// (0x0004bc98) popup_snote_single_text_window_ParamLimits

0xc638,	// (0x0004bc98) popup_snote_single_text_window

0x1d32,	// (0x00041392) popup_sub_window_general

0x1e62,	// (0x000414c2) popup_window_general_ParamLimits

0x1e62,	// (0x000414c2) popup_window_general

0x4a4e,	// (0x000440ae) power_save_pane

0xbf32,	// (0x0004b592) control_pane_g1_ParamLimits

0xbf32,	// (0x0004b592) control_pane_g1

0xbf5b,	// (0x0004b5bb) control_pane_g2_ParamLimits

0xbf5b,	// (0x0004b5bb) control_pane_g2

0x49b1,	// (0x00044011) control_pane_g3_ParamLimits

0x49b1,	// (0x00044011) control_pane_g3

0x0007,

0xf793,	// (0x0004edf3) control_pane_g_ParamLimits

0xf793,	// (0x0004edf3) control_pane_g

0xbf98,	// (0x0004b5f8) control_pane_t1_ParamLimits

0xbf98,	// (0x0004b5f8) control_pane_t1

0xbff6,	// (0x0004b656) control_pane_t2_ParamLimits

0xbff6,	// (0x0004b656) control_pane_t2

0x0002,

0xf7a4,	// (0x0004ee04) control_pane_t_ParamLimits

0xf7a4,	// (0x0004ee04) control_pane_t

0x48d2,	// (0x00043f32) navi_navi_volume_pane_cp1

0x48db,	// (0x00043f3b) status_small_icon_pane

0x48e3,	// (0x00043f43) status_small_pane_g1_ParamLimits

0x48e3,	// (0x00043f43) status_small_pane_g1

0x4917,	// (0x00043f77) status_small_pane_g2_ParamLimits

0x4917,	// (0x00043f77) status_small_pane_g2

0x4923,	// (0x00043f83) status_small_pane_g3_ParamLimits

0x4923,	// (0x00043f83) status_small_pane_g3

0x492f,	// (0x00043f8f) status_small_pane_g4_ParamLimits

0x492f,	// (0x00043f8f) status_small_pane_g4

0x493b,	// (0x00043f9b) status_small_pane_g5_ParamLimits

0x493b,	// (0x00043f9b) status_small_pane_g5

0x494a,	// (0x00043faa) status_small_pane_g6_ParamLimits

0x494a,	// (0x00043faa) status_small_pane_g6

0x0007,

0xf782,	// (0x0004ede2) status_small_pane_g_ParamLimits

0xf782,	// (0x0004ede2) status_small_pane_g

0x497a,	// (0x00043fda) status_small_pane_t1

0x499d,	// (0x00043ffd) status_small_wait_pane_ParamLimits

0x499d,	// (0x00043ffd) status_small_wait_pane

0xd2eb,	// (0x0004c94b) aid_levels_signal_ParamLimits

0xd2eb,	// (0x0004c94b) aid_levels_signal

0xd303,	// (0x0004c963) signal_pane_g1_ParamLimits

0xd303,	// (0x0004c963) signal_pane_g1

0xd31e,	// (0x0004c97e) signal_pane_g2_ParamLimits

0xd31e,	// (0x0004c97e) signal_pane_g2

0x0003,

0xf713,	// (0x0004ed73) signal_pane_g_ParamLimits

0xf713,	// (0x0004ed73) signal_pane_g

0x41df,	// (0x0004383f) context_pane_g1

0xbe2f,	// (0x0004b48f) title_pane_g1

0xbe66,	// (0x0004b4c6) title_pane_t1

0x31ea,	// (0x0004284a) title_pane_t2

0x3210,	// (0x00042870) title_pane_t3

0x0002,

0xf55d,	// (0x0004ebbd) title_pane_t

0xd8cf,	// (0x0004cf2f) aid_levels_battery_ParamLimits

0xd8cf,	// (0x0004cf2f) aid_levels_battery

0xd8eb,	// (0x0004cf4b) battery_pane_g1_ParamLimits

0xd8eb,	// (0x0004cf4b) battery_pane_g1

0xd908,	// (0x0004cf68) battery_pane_g2_ParamLimits

0xd908,	// (0x0004cf68) battery_pane_g2

0x0001,

0xf7b6,	// (0x0004ee16) battery_pane_g_ParamLimits

0xf7b6,	// (0x0004ee16) battery_pane_g

0x6163,	// (0x000457c3) uni_indicator_pane_g1

0x6178,	// (0x000457d8) uni_indicator_pane_g2

0x618e,	// (0x000457ee) uni_indicator_pane_g3

0x0005,

0xf920,	// (0x0004ef80) uni_indicator_pane_g

0x4572,	// (0x00043bd2) navi_icon_pane_ParamLimits

0x4572,	// (0x00043bd2) navi_icon_pane

0x44bb,	// (0x00043b1b) navi_midp_pane

0x458e,	// (0x00043bee) navi_navi_pane

0x4598,	// (0x00043bf8) navi_text_pane_ParamLimits

0x4598,	// (0x00043bf8) navi_text_pane

0x3138,	// (0x00042798) status_small_wait_pane_g1

0x363f,	// (0x00042c9f) status_small_wait_pane_g2

0x0001,

0xf91b,	// (0x0004ef7b) status_small_wait_pane_g

0x5e88,	// (0x000454e8) navi_navi_icon_text_pane

0x5e90,	// (0x000454f0) navi_navi_pane_g1_ParamLimits

0x5e90,	// (0x000454f0) navi_navi_pane_g1

0x5ea2,	// (0x00045502) navi_navi_pane_g2_ParamLimits

0x5ea2,	// (0x00045502) navi_navi_pane_g2

0x0001,

0xf8e9,	// (0x0004ef49) navi_navi_pane_g_ParamLimits

0xf8e9,	// (0x0004ef49) navi_navi_pane_g

0x5eb4,	// (0x00045514) navi_navi_tabs_pane

0x5ebd,	// (0x0004551d) navi_navi_text_pane

0x5e88,	// (0x000454e8) navi_navi_volume_pane

0x5e64,	// (0x000454c4) navi_text_pane_t1

0x5e58,	// (0x000454b8) navi_icon_pane_g1

0x5dba,	// (0x0004541a) navi_navi_text_pane_t1

0xc901,	// (0x0004bf61) navi_navi_volume_pane_g1

0xc909,	// (0x0004bf69) volume_small_pane

0xda63,	// (0x0004d0c3) navi_navi_icon_text_pane_g1

0xda6b,	// (0x0004d0cb) navi_navi_icon_text_pane_t1

0x458e,	// (0x00043bee) navi_tabs_2_long_pane

0x458e,	// (0x00043bee) navi_tabs_2_pane

0x458e,	// (0x00043bee) navi_tabs_3_long_pane

0x458e,	// (0x00043bee) navi_tabs_3_pane

0x458e,	// (0x00043bee) navi_tabs_4_pane

0xc8e1,	// (0x0004bf41) tabs_2_active_pane_ParamLimits

0xc8e1,	// (0x0004bf41) tabs_2_active_pane

0xc8f1,	// (0x0004bf51) tabs_2_passive_pane_ParamLimits

0xc8f1,	// (0x0004bf51) tabs_2_passive_pane

0xc8af,	// (0x0004bf0f) tabs_3_active_pane_ParamLimits

0xc8af,	// (0x0004bf0f) tabs_3_active_pane

0xc8bf,	// (0x0004bf1f) tabs_3_passive_pane_ParamLimits

0xc8bf,	// (0x0004bf1f) tabs_3_passive_pane

0xc8d0,	// (0x0004bf30) tabs_3_passive_pane_cp_ParamLimits

0xc8d0,	// (0x0004bf30) tabs_3_passive_pane_cp

0xc86b,	// (0x0004becb) tabs_4_active_pane_ParamLimits

0xc86b,	// (0x0004becb) tabs_4_active_pane

0xc87c,	// (0x0004bedc) tabs_4_passive_pane_ParamLimits

0xc87c,	// (0x0004bedc) tabs_4_passive_pane

0xc88d,	// (0x0004beed) tabs_4_passive_pane_cp_ParamLimits

0xc88d,	// (0x0004beed) tabs_4_passive_pane_cp

0xc89e,	// (0x0004befe) tabs_4_passive_pane_cp2_ParamLimits

0xc89e,	// (0x0004befe) tabs_4_passive_pane_cp2

0xc84b,	// (0x0004beab) tabs_2_long_active_pane_ParamLimits

0xc84b,	// (0x0004beab) tabs_2_long_active_pane

0xc85b,	// (0x0004bebb) tabs_2_long_passive_pane_ParamLimits

0xc85b,	// (0x0004bebb) tabs_2_long_passive_pane

0xc818,	// (0x0004be78) tabs_3_long_active_pane_ParamLimits

0xc818,	// (0x0004be78) tabs_3_long_active_pane

0xc829,	// (0x0004be89) tabs_3_long_passive_pane_ParamLimits

0xc829,	// (0x0004be89) tabs_3_long_passive_pane

0xc83a,	// (0x0004be9a) tabs_3_long_passive_pane_cp_ParamLimits

0xc83a,	// (0x0004be9a) tabs_3_long_passive_pane_cp

0x1fbb,	// (0x0004161b) volume_small_pane_g1

0xc7c7,	// (0x0004be27) volume_small_pane_g2

0xc7d0,	// (0x0004be30) volume_small_pane_g3

0xc7d9,	// (0x0004be39) volume_small_pane_g4

0xc7e2,	// (0x0004be42) volume_small_pane_g5

0xc7eb,	// (0x0004be4b) volume_small_pane_g6

0xc7f4,	// (0x0004be54) volume_small_pane_g7

0xc7fd,	// (0x0004be5d) volume_small_pane_g8

0xc806,	// (0x0004be66) volume_small_pane_g9

0xc80f,	// (0x0004be6f) volume_small_pane_g10

0x0009,

0xf8b5,	// (0x0004ef15) volume_small_pane_g

0x349d,	// (0x00042afd) bg_active_tab_pane_cp2_ParamLimits

0x349d,	// (0x00042afd) bg_active_tab_pane_cp2

0xce96,	// (0x0004c4f6) tabs_3_active_pane_g1

0xce9e,	// (0x0004c4fe) tabs_3_active_pane_t1

0x349d,	// (0x00042afd) bg_passive_tab_pane_cp2_ParamLimits

0x349d,	// (0x00042afd) bg_passive_tab_pane_cp2

0xce96,	// (0x0004c4f6) tabs_3_passive_pane_g1

0xce9e,	// (0x0004c4fe) tabs_3_passive_pane_t1

0x349d,	// (0x00042afd) bg_active_tab_pane_cp3_ParamLimits

0x349d,	// (0x00042afd) bg_active_tab_pane_cp3

0xceb0,	// (0x0004c510) tabs_4_active_pane_g1

0xceb8,	// (0x0004c518) tabs_4_active_pane_t1

0x349d,	// (0x00042afd) bg_passive_tab_pane_cp3_ParamLimits

0x349d,	// (0x00042afd) bg_passive_tab_pane_cp3

0xceb0,	// (0x0004c510) tabs_4_1_passive_pane_g1

0xceb8,	// (0x0004c518) tabs_4_1_passive_pane_t1

0x4a34,	// (0x00044094) list_highlight_pane_cp2

0xdbf3,	// (0x0004d253) list_set_pane_ParamLimits

0xdbf3,	// (0x0004d253) list_set_pane

0xdc8d,	// (0x0004d2ed) main_pane_set_t1_ParamLimits

0xdc8d,	// (0x0004d2ed) main_pane_set_t1

0xdcad,	// (0x0004d30d) main_pane_set_t2_ParamLimits

0xdcad,	// (0x0004d30d) main_pane_set_t2

0xdcc1,	// (0x0004d321) main_pane_set_t3_ParamLimits

0xdcc1,	// (0x0004d321) main_pane_set_t3

0xdcd3,	// (0x0004d333) main_pane_set_t4_ParamLimits

0xdcd3,	// (0x0004d333) main_pane_set_t4

0x0003,

0xf985,	// (0x0004efe5) main_pane_set_t_ParamLimits

0xf985,	// (0x0004efe5) main_pane_set_t

0xdce5,	// (0x0004d345) setting_code_pane

0xdcef,	// (0x0004d34f) setting_slider_graphic_pane

0xdcef,	// (0x0004d34f) setting_slider_pane

0xdcef,	// (0x0004d34f) setting_text_pane

0xdcef,	// (0x0004d34f) setting_volume_pane

0x11ca,	// (0x0004082a) volume_set_pane

0x3222,	// (0x00042882) bg_set_opt_pane_cp

0x11d2,	// (0x00040832) setting_slider_pane_t1

0x11eb,	// (0x0004084b) setting_slider_pane_t2

0x1205,	// (0x00040865) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004ebc4) setting_slider_pane_t

0x121d,	// (0x0004087d) slider_set_pane

0x3142,	// (0x000427a2) bg_set_opt_pane_cp2

0x3264,	// (0x000428c4) setting_slider_graphic_pane_g1

0x1233,	// (0x00040893) setting_slider_graphic_pane_t1

0x1243,	// (0x000408a3) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004ebcb) setting_slider_graphic_pane_t

0x1253,	// (0x000408b3) slider_set_pane_cp

0x3142,	// (0x000427a2) input_focus_pane_cp1

0x63ed,	// (0x00045a4d) list_set_text_pane

0x3138,	// (0x00042798) setting_text_pane_g1

0x3142,	// (0x000427a2) input_focus_pane_cp2

0x3138,	// (0x00042798) setting_code_pane_g1

0x326d,	// (0x000428cd) setting_code_pane_t1

0xf53b,	// (0x0004eb9b) set_text_pane_t1_ParamLimits

0xf53b,	// (0x0004eb9b) set_text_pane_t1

0x3af5,	// (0x00043155) set_opt_bg_pane_g1

0x3afd,	// (0x0004315d) set_opt_bg_pane_g2

0x63c7,	// (0x00045a27) set_opt_bg_pane_g3

0x3b0d,	// (0x0004316d) set_opt_bg_pane_g4

0x3b15,	// (0x00043175) set_opt_bg_pane_g5

0x3b1d,	// (0x0004317d) set_opt_bg_pane_g6

0x63d1,	// (0x00045a31) set_opt_bg_pane_g7

0x63d9,	// (0x00045a39) set_opt_bg_pane_g8

0x63e3,	// (0x00045a43) set_opt_bg_pane_g9

0x0008,

0xf972,	// (0x0004efd2) set_opt_bg_pane_g

0x6378,	// (0x000459d8) slider_set_pane_g1

0x2183,	// (0x000417e3) slider_set_pane_g2

0x0006,

0xf963,	// (0x0004efc3) slider_set_pane_g

0x211f,	// (0x0004177f) volume_set_pane_g1

0x2127,	// (0x00041787) volume_set_pane_g2

0x212f,	// (0x0004178f) volume_set_pane_g3

0x2137,	// (0x00041797) volume_set_pane_g4

0x213f,	// (0x0004179f) volume_set_pane_g5

0x2147,	// (0x000417a7) volume_set_pane_g6

0x214f,	// (0x000417af) volume_set_pane_g7

0x2157,	// (0x000417b7) volume_set_pane_g8

0x215f,	// (0x000417bf) volume_set_pane_g9

0x2167,	// (0x000417c7) volume_set_pane_g10

0x0009,

0xf93b,	// (0x0004ef9b) volume_set_pane_g

0xceca,	// (0x0004c52a) indicator_pane_ParamLimits

0xceca,	// (0x0004c52a) indicator_pane

0xcef2,	// (0x0004c552) main_idle_pane_g2_ParamLimits

0xcef2,	// (0x0004c552) main_idle_pane_g2

0xcf2a,	// (0x0004c58a) main_pane_idle_g1_ParamLimits

0xcf2a,	// (0x0004c58a) main_pane_idle_g1

0x32bc,	// (0x0004291c) popup_clock_digital_analogue_window_ParamLimits

0x32bc,	// (0x0004291c) popup_clock_digital_analogue_window

0xcf51,	// (0x0004c5b1) soft_indicator_pane_ParamLimits

0xcf51,	// (0x0004c5b1) soft_indicator_pane

0xcf6b,	// (0x0004c5cb) wallpaper_pane_ParamLimits

0xcf6b,	// (0x0004c5cb) wallpaper_pane

0x3138,	// (0x00042798) wallpaper_pane_g1

0xcf7d,	// (0x0004c5dd) indicator_pane_g1_ParamLimits

0xcf7d,	// (0x0004c5dd) indicator_pane_g1

0x67ab,	// (0x00045e0b) navi_navi_icon_text_pane_srt_g1

0x330e,	// (0x0004296e) soft_indicator_pane_t1

0x3328,	// (0x00042988) aid_ps_area_pane

0xcf93,	// (0x0004c5f3) aid_ps_clock_pane

0x3347,	// (0x000429a7) aid_ps_indicator_pane

0x3353,	// (0x000429b3) indicator_ps_pane_ParamLimits

0x3353,	// (0x000429b3) indicator_ps_pane

0x3362,	// (0x000429c2) power_save_pane_g1_ParamLimits

0x3362,	// (0x000429c2) power_save_pane_g1

0x336e,	// (0x000429ce) power_save_pane_g2_ParamLimits

0x336e,	// (0x000429ce) power_save_pane_g2

0x0de5,	// (0x00040445) aid_navinavi_width_pane

0x3328,	// (0x00042988) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0004ebd0) power_save_pane_g_ParamLimits

0xf570,	// (0x0004ebd0) power_save_pane_g

0x337c,	// (0x000429dc) power_save_pane_t1_ParamLimits

0x337c,	// (0x000429dc) power_save_pane_t1

0xcf93,	// (0x0004c5f3) aid_ps_clock_pane_ParamLimits

0x3347,	// (0x000429a7) aid_ps_indicator_pane_ParamLimits

0x338e,	// (0x000429ee) power_save_pane_t4_ParamLimits

0x338e,	// (0x000429ee) power_save_pane_t4

0x0001,

0xf575,	// (0x0004ebd5) power_save_pane_t_ParamLimits

0xf575,	// (0x0004ebd5) power_save_pane_t

0x33b8,	// (0x00042a18) power_save_t3_ParamLimits

0x33b8,	// (0x00042a18) power_save_t3

0x33a3,	// (0x00042a03) power_save_t2_ParamLimits

0x33a3,	// (0x00042a03) power_save_t2

0x33cd,	// (0x00042a2d) indicator_ps_pane_g1

0xcfa1,	// (0x0004c601) ai_gene_pane_ParamLimits

0xcfa1,	// (0x0004c601) ai_gene_pane

0xcfb8,	// (0x0004c618) ai_links_pane_ParamLimits

0xcfb8,	// (0x0004c618) ai_links_pane

0xcfd0,	// (0x0004c630) indicator_pane_cp1_ParamLimits

0xcfd0,	// (0x0004c630) indicator_pane_cp1

0xcfdf,	// (0x0004c63f) main_pane_idle_g1_cp_ParamLimits

0xcfdf,	// (0x0004c63f) main_pane_idle_g1_cp

0x3406,	// (0x00042a66) popup_ai_links_title_window

0xcff7,	// (0x0004c657) soft_indicator_pane_cp1_ParamLimits

0xcff7,	// (0x0004c657) soft_indicator_pane_cp1

0x6151,	// (0x000457b1) ai_links_pane_g1

0x615a,	// (0x000457ba) grid_ai_links_pane

0xdb77,	// (0x0004d1d7) ai_gene_pane_1

0x613f,	// (0x0004579f) ai_gene_pane_2

0x6148,	// (0x000457a8) list_highlight_pane_cp4

0xdb53,	// (0x0004d1b3) cell_ai_link_pane_ParamLimits

0xdb53,	// (0x0004d1b3) cell_ai_link_pane

0x6110,	// (0x00045770) cell_ai_link_pane_g1

0x363f,	// (0x00042c9f) cell_ai_link_pane_g2

0x0001,

0xf916,	// (0x0004ef76) cell_ai_link_pane_g

0x3142,	// (0x000427a2) grid_highlight_cp2

0x3142,	// (0x000427a2) bg_popup_sub_pane_cp1

0x3429,	// (0x00042a89) popup_ai_links_title_window_t1

0x605e,	// (0x000456be) ai_gene_pane_1_g1_ParamLimits

0x605e,	// (0x000456be) ai_gene_pane_1_g1

0x606a,	// (0x000456ca) ai_gene_pane_1_g2_ParamLimits

0x606a,	// (0x000456ca) ai_gene_pane_1_g2

0x0001,

0xf90c,	// (0x0004ef6c) ai_gene_pane_1_g_ParamLimits

0xf90c,	// (0x0004ef6c) ai_gene_pane_1_g

0x6077,	// (0x000456d7) ai_gene_pane_1_t1_ParamLimits

0x6077,	// (0x000456d7) ai_gene_pane_1_t1

0x60ab,	// (0x0004570b) grid_ai_soft_ind_pane

0x6049,	// (0x000456a9) ai_gene_pane_2_t1_ParamLimits

0x6049,	// (0x000456a9) ai_gene_pane_2_t1

0xd00b,	// (0x0004c66b) main_pane_empty_t1_ParamLimits

0xd00b,	// (0x0004c66b) main_pane_empty_t1

0xd023,	// (0x0004c683) main_pane_empty_t2_ParamLimits

0xd023,	// (0x0004c683) main_pane_empty_t2

0xd038,	// (0x0004c698) main_pane_empty_t3_ParamLimits

0xd038,	// (0x0004c698) main_pane_empty_t3

0xd04a,	// (0x0004c6aa) main_pane_empty_t4_ParamLimits

0xd04a,	// (0x0004c6aa) main_pane_empty_t4

0xd05c,	// (0x0004c6bc) main_pane_empty_t5_ParamLimits

0xd05c,	// (0x0004c6bc) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004ebda) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004ebda) main_pane_empty_t

0x3b46,	// (0x000431a6) bg_popup_window_pane_ParamLimits

0x3b46,	// (0x000431a6) bg_popup_window_pane

0x5dc8,	// (0x00045428) find_popup_pane_cp2_ParamLimits

0x5dc8,	// (0x00045428) find_popup_pane_cp2

0x5dd4,	// (0x00045434) heading_pane_ParamLimits

0x5dd4,	// (0x00045434) heading_pane

0x3142,	// (0x000427a2) bg_popup_sub_pane

0xda88,	// (0x0004d0e8) bg_popup_window_pane_g1_ParamLimits

0xda88,	// (0x0004d0e8) bg_popup_window_pane_g1

0xda97,	// (0x0004d0f7) bg_popup_window_pane_g2_ParamLimits

0xda97,	// (0x0004d0f7) bg_popup_window_pane_g2

0xdaa3,	// (0x0004d103) bg_popup_window_pane_g3_ParamLimits

0xdaa3,	// (0x0004d103) bg_popup_window_pane_g3

0xdaaf,	// (0x0004d10f) bg_popup_window_pane_g4_ParamLimits

0xdaaf,	// (0x0004d10f) bg_popup_window_pane_g4

0xdabe,	// (0x0004d11e) bg_popup_window_pane_g5_ParamLimits

0xdabe,	// (0x0004d11e) bg_popup_window_pane_g5

0xdace,	// (0x0004d12e) bg_popup_window_pane_g6_ParamLimits

0xdace,	// (0x0004d12e) bg_popup_window_pane_g6

0xdada,	// (0x0004d13a) bg_popup_window_pane_g7_ParamLimits

0xdada,	// (0x0004d13a) bg_popup_window_pane_g7

0xdae9,	// (0x0004d149) bg_popup_window_pane_g8_ParamLimits

0xdae9,	// (0x0004d149) bg_popup_window_pane_g8

0xdaf8,	// (0x0004d158) bg_popup_window_pane_g9_ParamLimits

0xdaf8,	// (0x0004d158) bg_popup_window_pane_g9

0x5dae,	// (0x0004540e) bg_popup_window_pane_g10_ParamLimits

0x5dae,	// (0x0004540e) bg_popup_window_pane_g10

0x0009,

0xf8d4,	// (0x0004ef34) bg_popup_window_pane_g_ParamLimits

0xf8d4,	// (0x0004ef34) bg_popup_window_pane_g

0x5cd7,	// (0x00045337) bg_popup_heading_pane_ParamLimits

0x5cd7,	// (0x00045337) bg_popup_heading_pane

0x226d,	// (0x000418cd) tabs_4_passive_pane_cp_srt_ParamLimits

0x226d,	// (0x000418cd) tabs_4_passive_pane_cp_srt

0x227f,	// (0x000418df) tabs_4_passive_pane_srt_ParamLimits

0x5ceb,	// (0x0004534b) heading_pane_g2

0x227f,	// (0x000418df) tabs_4_passive_pane_srt

0x5039,	// (0x00044699) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5039,	// (0x00044699) bg_passive_tab_pane_cp3_srt

0x5cf3,	// (0x00045353) heading_pane_t1_ParamLimits

0x5cf3,	// (0x00045353) heading_pane_t1

0x5d0a,	// (0x0004536a) heading_pane_t2_ParamLimits

0x5d0a,	// (0x0004536a) heading_pane_t2

0x0001,

0xf8cf,	// (0x0004ef2f) heading_pane_t_ParamLimits

0xf8cf,	// (0x0004ef2f) heading_pane_t

0x5804,	// (0x00044e64) bg_popup_heading_pane_g1

0x58b3,	// (0x00044f13) bg_popup_heading_pane_g2

0x58bd,	// (0x00044f1d) bg_popup_heading_pane_g3

0x58c7,	// (0x00044f27) bg_popup_heading_pane_g4

0x58d1,	// (0x00044f31) bg_popup_heading_pane_g5

0x58db,	// (0x00044f3b) bg_popup_heading_pane_g6

0x58e3,	// (0x00044f43) bg_popup_heading_pane_g7

0x58eb,	// (0x00044f4b) bg_popup_heading_pane_g8

0x58f5,	// (0x00044f55) bg_popup_heading_pane_g9

0x0008,

0xf88b,	// (0x0004eeeb) bg_popup_heading_pane_g

0x4f35,	// (0x00044595) bg_popup_sub_pane_g1

0x4f3d,	// (0x0004459d) bg_popup_sub_pane_g2

0x4f45,	// (0x000445a5) bg_popup_sub_pane_g3

0x4f4d,	// (0x000445ad) bg_popup_sub_pane_g4

0x4f55,	// (0x000445b5) bg_popup_sub_pane_g5

0x4f5d,	// (0x000445bd) bg_popup_sub_pane_g6

0x4f65,	// (0x000445c5) bg_popup_sub_pane_g7

0x4f6d,	// (0x000445cd) bg_popup_sub_pane_g8

0x4f75,	// (0x000445d5) bg_popup_sub_pane_g9

0x0008,

0xf865,	// (0x0004eec5) bg_popup_sub_pane_g

0x349d,	// (0x00042afd) bg_popup_window_pane_cp5_ParamLimits

0x349d,	// (0x00042afd) bg_popup_window_pane_cp5

0x34b9,	// (0x00042b19) popup_note_window_g1_ParamLimits

0x34b9,	// (0x00042b19) popup_note_window_g1

0x34c5,	// (0x00042b25) popup_note_window_t1_ParamLimits

0x34c5,	// (0x00042b25) popup_note_window_t1

0x34db,	// (0x00042b3b) popup_note_window_t2_ParamLimits

0x34db,	// (0x00042b3b) popup_note_window_t2

0x34f1,	// (0x00042b51) popup_note_window_t3_ParamLimits

0x34f1,	// (0x00042b51) popup_note_window_t3

0x3507,	// (0x00042b67) popup_note_window_t4_ParamLimits

0x3507,	// (0x00042b67) popup_note_window_t4

0x352f,	// (0x00042b8f) popup_note_window_t5_ParamLimits

0x352f,	// (0x00042b8f) popup_note_window_t5

0x0004,

0xf585,	// (0x0004ebe5) popup_note_window_t_ParamLimits

0xf585,	// (0x0004ebe5) popup_note_window_t

0x3553,	// (0x00042bb3) bg_popup_window_pane_cp6_ParamLimits

0x3553,	// (0x00042bb3) bg_popup_window_pane_cp6

0x5780,	// (0x00044de0) popup_note_image_window_g1_ParamLimits

0x5780,	// (0x00044de0) popup_note_image_window_g1

0x578c,	// (0x00044dec) popup_note_image_window_g2_ParamLimits

0x578c,	// (0x00044dec) popup_note_image_window_g2

0x0001,

0xf859,	// (0x0004eeb9) popup_note_image_window_g_ParamLimits

0xf859,	// (0x0004eeb9) popup_note_image_window_g

0x57a5,	// (0x00044e05) popup_note_image_window_t1_ParamLimits

0x57a5,	// (0x00044e05) popup_note_image_window_t1

0x57be,	// (0x00044e1e) popup_note_image_window_t2_ParamLimits

0x57be,	// (0x00044e1e) popup_note_image_window_t2

0x57d7,	// (0x00044e37) popup_note_image_window_t3_ParamLimits

0x57d7,	// (0x00044e37) popup_note_image_window_t3

0x0002,

0xf85e,	// (0x0004eebe) popup_note_image_window_t_ParamLimits

0xf85e,	// (0x0004eebe) popup_note_image_window_t

0x561c,	// (0x00044c7c) bg_popup_window_pane_cp7_ParamLimits

0x561c,	// (0x00044c7c) bg_popup_window_pane_cp7

0x5671,	// (0x00044cd1) popup_note_wait_window_g1_ParamLimits

0x5671,	// (0x00044cd1) popup_note_wait_window_g1

0x567d,	// (0x00044cdd) popup_note_wait_window_g2_ParamLimits

0x567d,	// (0x00044cdd) popup_note_wait_window_g2

0x0002,

0xf847,	// (0x0004eea7) popup_note_wait_window_g_ParamLimits

0xf847,	// (0x0004eea7) popup_note_wait_window_g

0x5695,	// (0x00044cf5) popup_note_wait_window_t1_ParamLimits

0x5695,	// (0x00044cf5) popup_note_wait_window_t1

0x56bc,	// (0x00044d1c) popup_note_wait_window_t2_ParamLimits

0x56bc,	// (0x00044d1c) popup_note_wait_window_t2

0x56d9,	// (0x00044d39) popup_note_wait_window_t3_ParamLimits

0x56d9,	// (0x00044d39) popup_note_wait_window_t3

0x56ec,	// (0x00044d4c) popup_note_wait_window_t4_ParamLimits

0x56ec,	// (0x00044d4c) popup_note_wait_window_t4

0x0004,

0xf84e,	// (0x0004eeae) popup_note_wait_window_t_ParamLimits

0xf84e,	// (0x0004eeae) popup_note_wait_window_t

0x5711,	// (0x00044d71) wait_bar_pane_ParamLimits

0x5711,	// (0x00044d71) wait_bar_pane

0x3142,	// (0x000427a2) wait_anim_pane

0x3142,	// (0x000427a2) wait_border_pane

0x3138,	// (0x00042798) wait_anim_pane_g1

0x3138,	// (0x00042798) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0004ed6e) wait_anim_pane_g

0x55c0,	// (0x00044c20) wait_border_pane_g1

0x55cb,	// (0x00044c2b) wait_border_pane_g2

0x55d4,	// (0x00044c34) wait_border_pane_g3

0x0002,

0xf840,	// (0x0004eea0) wait_border_pane_g

0x542b,	// (0x00044a8b) bg_popup_window_pane_cp16_ParamLimits

0x542b,	// (0x00044a8b) bg_popup_window_pane_cp16

0x552b,	// (0x00044b8b) indicator_popup_pane_cp4_ParamLimits

0x552b,	// (0x00044b8b) indicator_popup_pane_cp4

0x553f,	// (0x00044b9f) popup_query_data_window_t1_ParamLimits

0x553f,	// (0x00044b9f) popup_query_data_window_t1

0x5551,	// (0x00044bb1) popup_query_data_window_t2_ParamLimits

0x5551,	// (0x00044bb1) popup_query_data_window_t2

0x556a,	// (0x00044bca) popup_query_data_window_t3_ParamLimits

0x556a,	// (0x00044bca) popup_query_data_window_t3

0x0002,

0xf839,	// (0x0004ee99) popup_query_data_window_t_ParamLimits

0xf839,	// (0x0004ee99) popup_query_data_window_t

0x5584,	// (0x00044be4) query_popup_data_pane_ParamLimits

0x5584,	// (0x00044be4) query_popup_data_pane

0x5598,	// (0x00044bf8) query_popup_data_pane_cp1_ParamLimits

0x5598,	// (0x00044bf8) query_popup_data_pane_cp1

0x542b,	// (0x00044a8b) bg_popup_window_pane_cp10_ParamLimits

0x542b,	// (0x00044a8b) bg_popup_window_pane_cp10

0x545d,	// (0x00044abd) indicator_popup_pane_ParamLimits

0x545d,	// (0x00044abd) indicator_popup_pane

0x547f,	// (0x00044adf) popup_query_code_window_t1_ParamLimits

0x547f,	// (0x00044adf) popup_query_code_window_t1

0x5499,	// (0x00044af9) popup_query_code_window_t2_ParamLimits

0x5499,	// (0x00044af9) popup_query_code_window_t2

0x54e2,	// (0x00044b42) popup_query_code_window_t3_ParamLimits

0x54e2,	// (0x00044b42) popup_query_code_window_t3

0x0002,

0xf832,	// (0x0004ee92) popup_query_code_window_t_ParamLimits

0xf832,	// (0x0004ee92) popup_query_code_window_t

0x5511,	// (0x00044b71) query_popup_pane_ParamLimits

0x5511,	// (0x00044b71) query_popup_pane

0x3553,	// (0x00042bb3) bg_popup_window_pane_cp15_ParamLimits

0x3553,	// (0x00042bb3) bg_popup_window_pane_cp15

0x3571,	// (0x00042bd1) indicator_popup_pane_cp1_ParamLimits

0x3571,	// (0x00042bd1) indicator_popup_pane_cp1

0x3584,	// (0x00042be4) indicator_popup_pane_cp2_ParamLimits

0x3584,	// (0x00042be4) indicator_popup_pane_cp2

0x3597,	// (0x00042bf7) popup_query_data_code_window_g1_ParamLimits

0x3597,	// (0x00042bf7) popup_query_data_code_window_g1

0x35aa,	// (0x00042c0a) popup_query_data_code_window_t1_ParamLimits

0x35aa,	// (0x00042c0a) popup_query_data_code_window_t1

0x35bc,	// (0x00042c1c) popup_query_data_code_window_t2_ParamLimits

0x35bc,	// (0x00042c1c) popup_query_data_code_window_t2

0x35ce,	// (0x00042c2e) popup_query_data_code_window_t3_ParamLimits

0x35ce,	// (0x00042c2e) popup_query_data_code_window_t3

0x35e4,	// (0x00042c44) popup_query_data_code_window_t4_ParamLimits

0x35e4,	// (0x00042c44) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0004ebf0) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0004ebf0) popup_query_data_code_window_t

0x1ed8,	// (0x00041538) list_single_midp_graphic_pane_g3

0x35fc,	// (0x00042c5c) query_popup_data_pane_cp2_ParamLimits

0x360f,	// (0x00042c6f) query_popup_pane_cp2_ParamLimits

0x360f,	// (0x00042c6f) query_popup_pane_cp2

0x3142,	// (0x000427a2) bg_popup_window_pane_cp11

0x5423,	// (0x00044a83) heading_pane_cp5

0x36f7,	// (0x00042d57) listscroll_popup_info_pane

0x3142,	// (0x000427a2) input_focus_pane_cp3

0x3622,	// (0x00042c82) query_popup_pane_t1

0x3630,	// (0x00042c90) list_popup_info_pane_ParamLimits

0x3630,	// (0x00042c90) list_popup_info_pane

0x363f,	// (0x00042c9f) listscroll_popup_info_pane_g1

0x3647,	// (0x00042ca7) scroll_pane_cp7

0x3651,	// (0x00042cb1) popup_info_list_pane_t1_ParamLimits

0x3651,	// (0x00042cb1) popup_info_list_pane_t1

0x366b,	// (0x00042ccb) popup_info_list_pane_t2_ParamLimits

0x366b,	// (0x00042ccb) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004ebf9) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004ebf9) popup_info_list_pane_t

0x3142,	// (0x000427a2) bg_popup_window_pane_cp12

0x67c5,	// (0x00045e25) find_popup_pane

0x3222,	// (0x00042882) bg_popup_window_pane_cp3

0x3685,	// (0x00042ce5) heading_pane_cp3

0x3691,	// (0x00042cf1) listscroll_popup_graphic_pane

0x3142,	// (0x000427a2) bg_popup_window_pane_cp4

0xd0be,	// (0x0004c71e) heading_pane_cp4

0x36f7,	// (0x00042d57) listscroll_popup_colour_pane

0xd0c6,	// (0x0004c726) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xd0c6,	// (0x0004c726) cell_large_graphic_colour_none_popup_pane

0xd0da,	// (0x0004c73a) grid_large_graphic_colour_popup_pane_ParamLimits

0xd0da,	// (0x0004c73a) grid_large_graphic_colour_popup_pane

0xd0fe,	// (0x0004c75e) listscroll_popup_colour_pane_g1_ParamLimits

0xd0fe,	// (0x0004c75e) listscroll_popup_colour_pane_g1

0xd115,	// (0x0004c775) listscroll_popup_colour_pane_g2_ParamLimits

0xd115,	// (0x0004c775) listscroll_popup_colour_pane_g2

0xd12c,	// (0x0004c78c) listscroll_popup_colour_pane_g3_ParamLimits

0xd12c,	// (0x0004c78c) listscroll_popup_colour_pane_g3

0xd13c,	// (0x0004c79c) listscroll_popup_colour_pane_g4_ParamLimits

0xd13c,	// (0x0004c79c) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004ebfe) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004ebfe) listscroll_popup_colour_pane_g

0x3791,	// (0x00042df1) scroll_pane_cp6_ParamLimits

0x3791,	// (0x00042df1) scroll_pane_cp6

0xd14c,	// (0x0004c7ac) cell_large_graphic_colour_popup_pane_ParamLimits

0xd14c,	// (0x0004c7ac) cell_large_graphic_colour_popup_pane

0x37c2,	// (0x00042e22) cell_large_graphic_colour_none_popup_pane_t1

0x3142,	// (0x000427a2) grid_highlight_pane_cp5

0x37d1,	// (0x00042e31) cell_large_graphic_colour_popup_pane_g1

0x37d9,	// (0x00042e39) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0004ec07) cell_large_graphic_colour_popup_pane_g

0x37e1,	// (0x00042e41) cell_large_graphic_colour_popup_pane_g2_copy1

0x37ea,	// (0x00042e4a) grid_highlight_pane_cp4

0x37f2,	// (0x00042e52) bg_popup_window_pane_cp8_ParamLimits

0x37f2,	// (0x00042e52) bg_popup_window_pane_cp8

0x380d,	// (0x00042e6d) popup_snote_single_text_window_g1_ParamLimits

0x380d,	// (0x00042e6d) popup_snote_single_text_window_g1

0x381f,	// (0x00042e7f) popup_snote_single_text_window_t1_ParamLimits

0x381f,	// (0x00042e7f) popup_snote_single_text_window_t1

0x3832,	// (0x00042e92) popup_snote_single_text_window_t2_ParamLimits

0x3832,	// (0x00042e92) popup_snote_single_text_window_t2

0x3845,	// (0x00042ea5) popup_snote_single_text_window_t3_ParamLimits

0x3845,	// (0x00042ea5) popup_snote_single_text_window_t3

0x387e,	// (0x00042ede) popup_snote_single_text_window_t4_ParamLimits

0x387e,	// (0x00042ede) popup_snote_single_text_window_t4

0x38b2,	// (0x00042f12) popup_snote_single_text_window_t5_ParamLimits

0x38b2,	// (0x00042f12) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0004ec0c) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0004ec0c) popup_snote_single_text_window_t

0x38e1,	// (0x00042f41) bg_popup_window_pane_cp9_ParamLimits

0x38e1,	// (0x00042f41) bg_popup_window_pane_cp9

0x380d,	// (0x00042e6d) popup_snote_single_graphic_window_g1_ParamLimits

0x380d,	// (0x00042e6d) popup_snote_single_graphic_window_g1

0x38ef,	// (0x00042f4f) popup_snote_single_graphic_window_g2_ParamLimits

0x38ef,	// (0x00042f4f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0004ec17) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0004ec17) popup_snote_single_graphic_window_g

0x38fb,	// (0x00042f5b) popup_snote_single_graphic_window_t1_ParamLimits

0x38fb,	// (0x00042f5b) popup_snote_single_graphic_window_t1

0x390e,	// (0x00042f6e) popup_snote_single_graphic_window_t2_ParamLimits

0x390e,	// (0x00042f6e) popup_snote_single_graphic_window_t2

0x3921,	// (0x00042f81) popup_snote_single_graphic_window_t3_ParamLimits

0x3921,	// (0x00042f81) popup_snote_single_graphic_window_t3

0x395a,	// (0x00042fba) popup_snote_single_graphic_window_t4_ParamLimits

0x395a,	// (0x00042fba) popup_snote_single_graphic_window_t4

0x398e,	// (0x00042fee) popup_snote_single_graphic_window_t5_ParamLimits

0x398e,	// (0x00042fee) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0004ec1c) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0004ec1c) popup_snote_single_graphic_window_t

0x6709,	// (0x00045d69) grid_graphic_popup_pane_ParamLimits

0x6709,	// (0x00045d69) grid_graphic_popup_pane

0x6731,	// (0x00045d91) listscroll_popup_graphic_pane_g1_ParamLimits

0x6731,	// (0x00045d91) listscroll_popup_graphic_pane_g1

0xdde0,	// (0x0004d440) listscroll_popup_graphic_pane_g2_ParamLimits

0xdde0,	// (0x0004d440) listscroll_popup_graphic_pane_g2

0x0001,

0xf9af,	// (0x0004f00f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9af,	// (0x0004f00f) listscroll_popup_graphic_pane_g

0x6759,	// (0x00045db9) scroll_pane_cp5

0xdda3,	// (0x0004d403) cell_graphic_popup_pane_ParamLimits

0xdda3,	// (0x0004d403) cell_graphic_popup_pane

0x6693,	// (0x00045cf3) cell_graphic_popup_pane_g1

0x669b,	// (0x00045cfb) cell_graphic_popup_pane_g2

0x37e1,	// (0x00042e41) cell_graphic_popup_pane_g3

0x0002,

0xf9a8,	// (0x0004f008) cell_graphic_popup_pane_g

0x66a4,	// (0x00045d04) cell_graphic_popup_pane_t2

0x37ea,	// (0x00042e4a) grid_highlight_pane_cp3

0x39cf,	// (0x0004302f) list_gen_pane_ParamLimits

0x39cf,	// (0x0004302f) list_gen_pane

0x3a01,	// (0x00043061) scroll_pane

0xdd5a,	// (0x0004d3ba) bg_list_pane_g1_ParamLimits

0xdd5a,	// (0x0004d3ba) bg_list_pane_g1

0x6608,	// (0x00045c68) bg_list_pane_g2_ParamLimits

0x6608,	// (0x00045c68) bg_list_pane_g2

0x661d,	// (0x00045c7d) bg_list_pane_g3_ParamLimits

0x661d,	// (0x00045c7d) bg_list_pane_g3

0x6631,	// (0x00045c91) bg_list_pane_g4_ParamLimits

0x6631,	// (0x00045c91) bg_list_pane_g4

0xdd77,	// (0x0004d3d7) bg_list_pane_g5_ParamLimits

0xdd77,	// (0x0004d3d7) bg_list_pane_g5

0x0004,

0xf99d,	// (0x0004effd) bg_list_pane_g_ParamLimits

0xf99d,	// (0x0004effd) bg_list_pane_g

0xbb27,	// (0x0004b187) list_double2_graphic_large_graphic_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double2_graphic_large_graphic_pane

0xbb27,	// (0x0004b187) list_double2_graphic_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double2_graphic_pane

0xbb27,	// (0x0004b187) list_double2_large_graphic_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double2_large_graphic_pane

0xbb27,	// (0x0004b187) list_double2_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double2_pane

0xbb27,	// (0x0004b187) list_double_graphic_heading_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double_graphic_heading_pane

0xbb27,	// (0x0004b187) list_double_graphic_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double_graphic_pane

0xbb27,	// (0x0004b187) list_double_heading_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double_heading_pane

0xbb27,	// (0x0004b187) list_double_large_graphic_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double_large_graphic_pane

0xbb27,	// (0x0004b187) list_double_number_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double_number_pane

0xbb27,	// (0x0004b187) list_double_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double_pane

0xbb27,	// (0x0004b187) list_double_time_pane_ParamLimits

0xbb27,	// (0x0004b187) list_double_time_pane

0xbb27,	// (0x0004b187) list_setting_number_pane_ParamLimits

0xbb27,	// (0x0004b187) list_setting_number_pane

0xbb27,	// (0x0004b187) list_setting_pane_ParamLimits

0xbb27,	// (0x0004b187) list_setting_pane

0xdd22,	// (0x0004d382) list_single_2graphic_pane_ParamLimits

0xdd22,	// (0x0004d382) list_single_2graphic_pane

0xdd22,	// (0x0004d382) list_single_graphic_heading_pane_ParamLimits

0xdd22,	// (0x0004d382) list_single_graphic_heading_pane

0xdd22,	// (0x0004d382) list_single_graphic_pane_ParamLimits

0xdd22,	// (0x0004d382) list_single_graphic_pane

0xdd22,	// (0x0004d382) list_single_heading_pane_ParamLimits

0xdd22,	// (0x0004d382) list_single_heading_pane

0xdd48,	// (0x0004d3a8) list_single_large_graphic_pane_ParamLimits

0xdd48,	// (0x0004d3a8) list_single_large_graphic_pane

0xdd22,	// (0x0004d382) list_single_number_heading_pane_ParamLimits

0xdd22,	// (0x0004d382) list_single_number_heading_pane

0xdd22,	// (0x0004d382) list_single_number_pane_ParamLimits

0xdd22,	// (0x0004d382) list_single_number_pane

0xdd22,	// (0x0004d382) list_single_pane_ParamLimits

0xdd22,	// (0x0004d382) list_single_pane

0x3142,	// (0x000427a2) list_highlight_pane_cp1

0x4ecd,	// (0x0004452d) list_single_pane_g1_ParamLimits

0x4ecd,	// (0x0004452d) list_single_pane_g1

0x1ea7,	// (0x00041507) list_single_pane_g2_ParamLimits

0x1ea7,	// (0x00041507) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0004ec38) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0004ec38) list_single_pane_g

0x0987,	// (0x0003ffe7) list_single_pane_t1_ParamLimits

0x0987,	// (0x0003ffe7) list_single_pane_t1

0x4ecd,	// (0x0004452d) list_single_number_pane_g1_ParamLimits

0x4ecd,	// (0x0004452d) list_single_number_pane_g1

0x1ea7,	// (0x00041507) list_single_number_pane_g2_ParamLimits

0x1ea7,	// (0x00041507) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0004ec38) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0004ec38) list_single_number_pane_g

0x081c,	// (0x0003fe7c) list_single_number_pane_t1_ParamLimits

0x081c,	// (0x0003fe7c) list_single_number_pane_t1

0xbae9,	// (0x0004b149) list_single_number_pane_t2_ParamLimits

0xbae9,	// (0x0004b149) list_single_number_pane_t2

0x0001,

0xf95e,	// (0x0004efbe) list_single_number_pane_t_ParamLimits

0xf95e,	// (0x0004efbe) list_single_number_pane_t

0xb4e7,	// (0x0004ab47) list_single_graphic_pane_g1_ParamLimits

0xb4e7,	// (0x0004ab47) list_single_graphic_pane_g1

0x4ecd,	// (0x0004452d) list_single_graphic_pane_g2_ParamLimits

0x4ecd,	// (0x0004452d) list_single_graphic_pane_g2

0x1ea7,	// (0x00041507) list_single_graphic_pane_g3_ParamLimits

0x1ea7,	// (0x00041507) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0004ec27) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0004ec27) list_single_graphic_pane_g

0xb4f3,	// (0x0004ab53) list_single_graphic_pane_t1_ParamLimits

0xb4f3,	// (0x0004ab53) list_single_graphic_pane_t1

0xb509,	// (0x0004ab69) list_single_heading_pane_g1_ParamLimits

0xb509,	// (0x0004ab69) list_single_heading_pane_g1

0x1ea7,	// (0x00041507) list_single_heading_pane_g2_ParamLimits

0x1ea7,	// (0x00041507) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0004ec2e) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0004ec2e) list_single_heading_pane_g

0xb51c,	// (0x0004ab7c) list_single_heading_pane_t1_ParamLimits

0xb51c,	// (0x0004ab7c) list_single_heading_pane_t1

0xbef2,	// (0x0004b552) list_single_heading_pane_t2_ParamLimits

0xbef2,	// (0x0004b552) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0004ec33) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0004ec33) list_single_heading_pane_t

0x4ecd,	// (0x0004452d) list_single_number_heading_pane_g1_ParamLimits

0x4ecd,	// (0x0004452d) list_single_number_heading_pane_g1

0x1ea7,	// (0x00041507) list_single_number_heading_pane_g2_ParamLimits

0x1ea7,	// (0x00041507) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0004ec38) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0004ec38) list_single_number_heading_pane_g

0xb532,	// (0x0004ab92) list_single_number_heading_pane_t1_ParamLimits

0xb532,	// (0x0004ab92) list_single_number_heading_pane_t1

0xb548,	// (0x0004aba8) list_single_number_heading_pane_t2_ParamLimits

0xb548,	// (0x0004aba8) list_single_number_heading_pane_t2

0x0961,	// (0x0003ffc1) list_single_number_heading_pane_t3_ParamLimits

0x0961,	// (0x0003ffc1) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0004ec3d) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0004ec3d) list_single_number_heading_pane_t

0xb55a,	// (0x0004abba) list_single_graphic_heading_pane_g1_ParamLimits

0xb55a,	// (0x0004abba) list_single_graphic_heading_pane_g1

0xbf04,	// (0x0004b564) list_single_graphic_heading_pane_g4_ParamLimits

0xbf04,	// (0x0004b564) list_single_graphic_heading_pane_g4

0x1ea7,	// (0x00041507) list_single_graphic_heading_pane_g5_ParamLimits

0x1ea7,	// (0x00041507) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0004ec44) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004ec44) list_single_graphic_heading_pane_g

0xb532,	// (0x0004ab92) list_single_graphic_heading_pane_t1_ParamLimits

0xb532,	// (0x0004ab92) list_single_graphic_heading_pane_t1

0xb570,	// (0x0004abd0) list_single_graphic_heading_pane_t2_ParamLimits

0xb570,	// (0x0004abd0) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0004ec4b) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0004ec4b) list_single_graphic_heading_pane_t

0x2312,	// (0x00041972) list_single_large_graphic_pane_g1_ParamLimits

0x2312,	// (0x00041972) list_single_large_graphic_pane_g1

0x231e,	// (0x0004197e) list_single_large_graphic_pane_g2_ParamLimits

0x231e,	// (0x0004197e) list_single_large_graphic_pane_g2

0x232a,	// (0x0004198a) list_single_large_graphic_pane_g3_ParamLimits

0x232a,	// (0x0004198a) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004ec50) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004ec50) list_single_large_graphic_pane_g

0x55cb,	// (0x00044c2b) wait_border_pane_g2_copy1

0xbf15,	// (0x0004b575) list_single_large_graphic_pane_g4_cp2

0x099d,	// (0x0003fffd) list_single_large_graphic_pane_t1_ParamLimits

0x099d,	// (0x0003fffd) list_single_large_graphic_pane_t1

0x462d,	// (0x00043c8d) list_double_pane_g1_ParamLimits

0x462d,	// (0x00043c8d) list_double_pane_g1

0xb586,	// (0x0004abe6) list_double_pane_g2_ParamLimits

0xb586,	// (0x0004abe6) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0004ec57) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0004ec57) list_double_pane_g

0xb592,	// (0x0004abf2) list_double_pane_t1_ParamLimits

0xb592,	// (0x0004abf2) list_double_pane_t1

0xb5a8,	// (0x0004ac08) list_double_pane_t2_ParamLimits

0xb5a8,	// (0x0004ac08) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0004ec5c) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0004ec5c) list_double_pane_t

0xb5ba,	// (0x0004ac1a) list_double2_pane_g1_ParamLimits

0xb5ba,	// (0x0004ac1a) list_double2_pane_g1

0x07bc,	// (0x0003fe1c) list_double2_pane_g2_ParamLimits

0x07bc,	// (0x0003fe1c) list_double2_pane_g2

0x0001,

0xf601,	// (0x0004ec61) list_double2_pane_g_ParamLimits

0xf601,	// (0x0004ec61) list_double2_pane_g

0xb5cb,	// (0x0004ac2b) list_double2_pane_t1_ParamLimits

0xb5cb,	// (0x0004ac2b) list_double2_pane_t1

0xb5e1,	// (0x0004ac41) list_double2_pane_t2_ParamLimits

0xb5e1,	// (0x0004ac41) list_double2_pane_t2

0x0001,

0xf606,	// (0x0004ec66) list_double2_pane_t_ParamLimits

0xf606,	// (0x0004ec66) list_double2_pane_t

0x462d,	// (0x00043c8d) list_double_number_pane_g1_ParamLimits

0x462d,	// (0x00043c8d) list_double_number_pane_g1

0xb586,	// (0x0004abe6) list_double_number_pane_g2_ParamLimits

0xb586,	// (0x0004abe6) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0004ec57) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0004ec57) list_double_number_pane_g

0xb5f3,	// (0x0004ac53) list_double_number_pane_t1_ParamLimits

0xb5f3,	// (0x0004ac53) list_double_number_pane_t1

0xb605,	// (0x0004ac65) list_double_number_pane_t2_ParamLimits

0xb605,	// (0x0004ac65) list_double_number_pane_t2

0xb61b,	// (0x0004ac7b) list_double_number_pane_t3_ParamLimits

0xb61b,	// (0x0004ac7b) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0004ec6b) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0004ec6b) list_double_number_pane_t

0xb62d,	// (0x0004ac8d) list_double_graphic_pane_g1_ParamLimits

0xb62d,	// (0x0004ac8d) list_double_graphic_pane_g1

0xb639,	// (0x0004ac99) list_double_graphic_pane_g2_ParamLimits

0xb639,	// (0x0004ac99) list_double_graphic_pane_g2

0x6af5,	// (0x00046155) list_double_graphic_pane_g3_ParamLimits

0x6af5,	// (0x00046155) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0004ec72) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0004ec72) list_double_graphic_pane_g

0xb654,	// (0x0004acb4) list_double_graphic_pane_t1_ParamLimits

0xb654,	// (0x0004acb4) list_double_graphic_pane_t1

0xb66a,	// (0x0004acca) list_double_graphic_pane_t2_ParamLimits

0xb66a,	// (0x0004acca) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0004ec7b) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0004ec7b) list_double_graphic_pane_t

0x0810,	// (0x0003fe70) list_double2_graphic_pane_g1_ParamLimits

0x0810,	// (0x0003fe70) list_double2_graphic_pane_g1

0x4ecd,	// (0x0004452d) list_double2_graphic_pane_g2_ParamLimits

0x4ecd,	// (0x0004452d) list_double2_graphic_pane_g2

0x1ea7,	// (0x00041507) list_double2_graphic_pane_g3_ParamLimits

0x1ea7,	// (0x00041507) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0004ec80) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0004ec80) list_double2_graphic_pane_g

0x081c,	// (0x0003fe7c) list_double2_graphic_pane_t1_ParamLimits

0x081c,	// (0x0003fe7c) list_double2_graphic_pane_t1

0xb67c,	// (0x0004acdc) list_double2_graphic_pane_t2_ParamLimits

0xb67c,	// (0x0004acdc) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0004ec87) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0004ec87) list_double2_graphic_pane_t

0xb68e,	// (0x0004acee) list_double_large_graphic_pane_g1_ParamLimits

0xb68e,	// (0x0004acee) list_double_large_graphic_pane_g1

0xb6b9,	// (0x0004ad19) list_double_large_graphic_pane_g2_ParamLimits

0xb6b9,	// (0x0004ad19) list_double_large_graphic_pane_g2

0xb586,	// (0x0004abe6) list_double_large_graphic_pane_g3_ParamLimits

0xb586,	// (0x0004abe6) list_double_large_graphic_pane_g3

0xb6cf,	// (0x0004ad2f) list_double_large_graphic_pane_g4_ParamLimits

0xb6cf,	// (0x0004ad2f) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0004ec8c) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0004ec8c) list_double_large_graphic_pane_g

0xb6e2,	// (0x0004ad42) list_double_large_graphic_pane_t1_ParamLimits

0xb6e2,	// (0x0004ad42) list_double_large_graphic_pane_t1

0xb6fb,	// (0x0004ad5b) list_double_large_graphic_pane_t2_ParamLimits

0xb6fb,	// (0x0004ad5b) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0004ec97) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0004ec97) list_double_large_graphic_pane_t

0xb70d,	// (0x0004ad6d) list_double2_large_graphic_pane_g1_ParamLimits

0xb70d,	// (0x0004ad6d) list_double2_large_graphic_pane_g1

0xbf04,	// (0x0004b564) list_double2_large_graphic_pane_g2_ParamLimits

0xbf04,	// (0x0004b564) list_double2_large_graphic_pane_g2

0x1ea7,	// (0x00041507) list_double2_large_graphic_pane_g3_ParamLimits

0x1ea7,	// (0x00041507) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0004ec9c) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0004ec9c) list_double2_large_graphic_pane_g

0xb532,	// (0x0004ab92) list_double2_large_graphic_pane_t1_ParamLimits

0xb532,	// (0x0004ab92) list_double2_large_graphic_pane_t1

0xb719,	// (0x0004ad79) list_double2_large_graphic_pane_t2_ParamLimits

0xb719,	// (0x0004ad79) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0004eca3) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0004eca3) list_double2_large_graphic_pane_t

0xb72b,	// (0x0004ad8b) list_double_heading_pane_g1_ParamLimits

0xb72b,	// (0x0004ad8b) list_double_heading_pane_g1

0xb73c,	// (0x0004ad9c) list_double_heading_pane_g2_ParamLimits

0xb73c,	// (0x0004ad9c) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0004eca8) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0004eca8) list_double_heading_pane_g

0xb748,	// (0x0004ada8) list_double_heading_pane_t1_ParamLimits

0xb748,	// (0x0004ada8) list_double_heading_pane_t1

0xb5e1,	// (0x0004ac41) list_double_heading_pane_t2_ParamLimits

0xb5e1,	// (0x0004ac41) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0004ecad) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0004ecad) list_double_heading_pane_t

0x01c7,	// (0x0003f827) list_double_graphic_heading_pane_g1_ParamLimits

0x01c7,	// (0x0003f827) list_double_graphic_heading_pane_g1

0xb72b,	// (0x0004ad8b) list_double_graphic_heading_pane_g2_ParamLimits

0xb72b,	// (0x0004ad8b) list_double_graphic_heading_pane_g2

0xb73c,	// (0x0004ad9c) list_double_graphic_heading_pane_g3_ParamLimits

0xb73c,	// (0x0004ad9c) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0004ecb2) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0004ecb2) list_double_graphic_heading_pane_g

0xb75e,	// (0x0004adbe) list_double_graphic_heading_pane_t1_ParamLimits

0xb75e,	// (0x0004adbe) list_double_graphic_heading_pane_t1

0xb67c,	// (0x0004acdc) list_double_graphic_heading_pane_t2_ParamLimits

0xb67c,	// (0x0004acdc) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0004ecb9) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0004ecb9) list_double_graphic_heading_pane_t

0xb774,	// (0x0004add4) list_double_time_pane_g1_ParamLimits

0xb774,	// (0x0004add4) list_double_time_pane_g1

0xb785,	// (0x0004ade5) list_double_time_pane_g2_ParamLimits

0xb785,	// (0x0004ade5) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0004ecbe) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0004ecbe) list_double_time_pane_g

0xb791,	// (0x0004adf1) list_double_time_pane_t1_ParamLimits

0xb791,	// (0x0004adf1) list_double_time_pane_t1

0xb7a7,	// (0x0004ae07) list_double_time_pane_t2_ParamLimits

0xb7a7,	// (0x0004ae07) list_double_time_pane_t2

0xb7b9,	// (0x0004ae19) list_double_time_pane_t3_ParamLimits

0xb7b9,	// (0x0004ae19) list_double_time_pane_t3

0xb7cb,	// (0x0004ae2b) list_double_time_pane_t4_ParamLimits

0xb7cb,	// (0x0004ae2b) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0004ecc3) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0004ecc3) list_double_time_pane_t

0x07b0,	// (0x0003fe10) list_setting_pane_g1_ParamLimits

0x07b0,	// (0x0003fe10) list_setting_pane_g1

0x07bc,	// (0x0003fe1c) list_setting_pane_g2_ParamLimits

0x07bc,	// (0x0003fe1c) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0004eccc) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0004eccc) list_setting_pane_g

0xb7dd,	// (0x0004ae3d) list_setting_pane_t1_ParamLimits

0xb7dd,	// (0x0004ae3d) list_setting_pane_t1

0xb7f7,	// (0x0004ae57) list_setting_pane_t2_ParamLimits

0xb7f7,	// (0x0004ae57) list_setting_pane_t2

0x0002,

0xf671,	// (0x0004ecd1) list_setting_pane_t_ParamLimits

0xf671,	// (0x0004ecd1) list_setting_pane_t

0xb836,	// (0x0004ae96) set_value_pane_cp_ParamLimits

0xb836,	// (0x0004ae96) set_value_pane_cp

0xb842,	// (0x0004aea2) list_setting_number_pane_g1_ParamLimits

0xb842,	// (0x0004aea2) list_setting_number_pane_g1

0xb84e,	// (0x0004aeae) list_setting_number_pane_g2_ParamLimits

0xb84e,	// (0x0004aeae) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0004ecd8) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0004ecd8) list_setting_number_pane_g

0xb85a,	// (0x0004aeba) list_setting_number_pane_t1_ParamLimits

0xb85a,	// (0x0004aeba) list_setting_number_pane_t1

0xb873,	// (0x0004aed3) list_setting_number_pane_t2_ParamLimits

0xb873,	// (0x0004aed3) list_setting_number_pane_t2

0xb88d,	// (0x0004aeed) list_setting_number_pane_t3_ParamLimits

0xb88d,	// (0x0004aeed) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0004ecdd) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0004ecdd) list_setting_number_pane_t

0xb836,	// (0x0004ae96) set_value_pane_ParamLimits

0xb836,	// (0x0004ae96) set_value_pane

0x3a35,	// (0x00043095) bg_set_opt_pane_ParamLimits

0x3a35,	// (0x00043095) bg_set_opt_pane

0x04a2,	// (0x0003fb02) set_value_pane_t1

0x3a56,	// (0x000430b6) slider_set_pane_cp3

0x3a5f,	// (0x000430bf) volume_small_pane_cp

0x3a68,	// (0x000430c8) list_form_gen_pane

0x3a71,	// (0x000430d1) scroll_pane_cp8

0xb8d0,	// (0x0004af30) form_field_data_pane_ParamLimits

0xb8d0,	// (0x0004af30) form_field_data_pane

0xb8e7,	// (0x0004af47) form_field_data_wide_pane_ParamLimits

0xb8e7,	// (0x0004af47) form_field_data_wide_pane

0xb907,	// (0x0004af67) form_field_popup_pane_ParamLimits

0xb907,	// (0x0004af67) form_field_popup_pane

0xb91f,	// (0x0004af7f) form_field_popup_wide_pane_ParamLimits

0xb91f,	// (0x0004af7f) form_field_popup_wide_pane

0x053e,	// (0x0003fb9e) form_field_slider_pane_ParamLimits

0x053e,	// (0x0003fb9e) form_field_slider_pane

0x0551,	// (0x0003fbb1) form_field_slider_wide_pane_ParamLimits

0x0551,	// (0x0003fbb1) form_field_slider_wide_pane

0x3a82,	// (0x000430e2) data_form_pane

0xb940,	// (0x0004afa0) form_field_data_pane_t1

0x3a8e,	// (0x000430ee) input_focus_pane

0x3a9c,	// (0x000430fc) data_form_wide_pane

0x0592,	// (0x0003fbf2) form_field_data_wide_pane_t1

0x37ff,	// (0x00042e5f) input_focus_pane_cp6

0xb95a,	// (0x0004afba) form_field_popup_pane_t1

0x3a8e,	// (0x000430ee) input_focus_pane_cp7

0x3ac8,	// (0x00043128) list_form_pane

0x05d4,	// (0x0003fc34) form_field_popup_wide_pane_t1

0x3a8e,	// (0x000430ee) input_focus_pane_cp8

0x3ad4,	// (0x00043134) list_form_wide_pane

0xb97c,	// (0x0004afdc) form_field_slider_pane_t1_ParamLimits

0xb97c,	// (0x0004afdc) form_field_slider_pane_t1

0xb994,	// (0x0004aff4) form_field_slider_pane_t2_ParamLimits

0xb994,	// (0x0004aff4) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0004eced) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0004eced) form_field_slider_pane_t

0x349d,	// (0x00042afd) input_focus_pane_cp9_ParamLimits

0x349d,	// (0x00042afd) input_focus_pane_cp9

0xb9a9,	// (0x0004b009) slider_cont_pane_ParamLimits

0xb9a9,	// (0x0004b009) slider_cont_pane

0x3ae3,	// (0x00043143) form_field_slider_wide_pane_t1_ParamLimits

0x3ae3,	// (0x00043143) form_field_slider_wide_pane_t1

0x0630,	// (0x0003fc90) form_field_slider_wide_pane_t2_ParamLimits

0x0630,	// (0x0003fc90) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0004ecf2) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0004ecf2) form_field_slider_wide_pane_t

0x349d,	// (0x00042afd) input_focus_pane_cp10_ParamLimits

0x349d,	// (0x00042afd) input_focus_pane_cp10

0xb9bd,	// (0x0004b01d) slider_cont_pane_cp1_ParamLimits

0xb9bd,	// (0x0004b01d) slider_cont_pane_cp1

0xb9d1,	// (0x0004b031) slider_form_pane_cp

0x3af5,	// (0x00043155) input_focus_pane_g1

0x3afd,	// (0x0004315d) input_focus_pane_g2

0x3b05,	// (0x00043165) input_focus_pane_g3

0x3b0d,	// (0x0004316d) input_focus_pane_g4

0x3b15,	// (0x00043175) input_focus_pane_g5

0x3b1d,	// (0x0004317d) input_focus_pane_g6

0x3b25,	// (0x00043185) input_focus_pane_g7

0x3b2d,	// (0x0004318d) input_focus_pane_g8

0x3b35,	// (0x00043195) input_focus_pane_g9

0x3138,	// (0x00042798) input_focus_pane_g10

0x0009,

0xf697,	// (0x0004ecf7) input_focus_pane_g

0x55d4,	// (0x00044c34) wait_border_pane_g3_copy1

0xb9d9,	// (0x0004b039) data_form_pane_t1

0x3138,	// (0x00042798) wait_anim_pane_g1_copy1

0xbafb,	// (0x0004b15b) data_form_wide_pane_t1

0xb9f2,	// (0x0004b052) list_form_graphic_pane_cp_ParamLimits

0xb9f2,	// (0x0004b052) list_form_graphic_pane_cp

0x6562,	// (0x00045bc2) slider_form_pane_g1

0x656b,	// (0x00045bcb) slider_form_pane_g2

0x0006,

0xf98e,	// (0x0004efee) slider_form_pane_g

0xba03,	// (0x0004b063) list_form_graphic_pane_ParamLimits

0xba03,	// (0x0004b063) list_form_graphic_pane

0x06ae,	// (0x0003fd0e) list_form_graphic_pane_g1

0x06b6,	// (0x0003fd16) list_form_graphic_pane_t1_ParamLimits

0x06b6,	// (0x0003fd16) list_form_graphic_pane_t1

0x3222,	// (0x00042882) list_highlight_pane_cp5_ParamLimits

0x3222,	// (0x00042882) list_highlight_pane_cp5

0xba15,	// (0x0004b075) find_pane_g1

0x3b3d,	// (0x0004319d) input_find_pane

0xba1e,	// (0x0004b07e) input_find_pane_g1_ParamLimits

0xba1e,	// (0x0004b07e) input_find_pane_g1

0xba2a,	// (0x0004b08a) input_find_pane_t1_ParamLimits

0xba2a,	// (0x0004b08a) input_find_pane_t1

0xba3f,	// (0x0004b09f) input_find_pane_t2_ParamLimits

0xba3f,	// (0x0004b09f) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0004ed0c) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0004ed0c) input_find_pane_t

0x3b46,	// (0x000431a6) input_focus_pane_cp5_ParamLimits

0x3b46,	// (0x000431a6) input_focus_pane_cp5

0x3b60,	// (0x000431c0) bg_popup_window_pane_cp2_ParamLimits

0x3b60,	// (0x000431c0) bg_popup_window_pane_cp2

0x3b6d,	// (0x000431cd) listscroll_menu_pane_ParamLimits

0x3b6d,	// (0x000431cd) listscroll_menu_pane

0xd181,	// (0x0004c7e1) popup_submenu_window_ParamLimits

0xd181,	// (0x0004c7e1) popup_submenu_window

0x3ba5,	// (0x00043205) find_popup_pane_g1

0x3bad,	// (0x0004320d) input_popup_find_pane_cp

0x3b46,	// (0x000431a6) input_focus_pane_cp4_ParamLimits

0x3b46,	// (0x000431a6) input_focus_pane_cp4

0x3bc3,	// (0x00043223) input_popup_find_pane_t1_ParamLimits

0x3bc3,	// (0x00043223) input_popup_find_pane_t1

0x3142,	// (0x000427a2) bg_popup_sub_pane_cp

0x3bf1,	// (0x00043251) listscroll_popup_sub_pane

0x3bf9,	// (0x00043259) list_submenu_pane_ParamLimits

0x3bf9,	// (0x00043259) list_submenu_pane

0x3c0a,	// (0x0004326a) scroll_pane_cp4

0x3c12,	// (0x00043272) list_single_popup_submenu_pane_ParamLimits

0x3c12,	// (0x00043272) list_single_popup_submenu_pane

0x3c26,	// (0x00043286) list_single_popup_submenu_pane_g1

0x3c2e,	// (0x0004328e) list_single_popup_submenu_pane_t1_ParamLimits

0x3c2e,	// (0x0004328e) list_single_popup_submenu_pane_t1

0x349d,	// (0x00042afd) bg_active_tab_pane_cp1_ParamLimits

0x349d,	// (0x00042afd) bg_active_tab_pane_cp1

0xd1bb,	// (0x0004c81b) tabs_2_active_pane_g1

0xd1c3,	// (0x0004c823) tabs_2_active_pane_t1

0x349d,	// (0x00042afd) bg_passive_tab_pane_cp1_ParamLimits

0x349d,	// (0x00042afd) bg_passive_tab_pane_cp1

0xd1bb,	// (0x0004c81b) tabs_2_passive_pane_g1

0xd1c3,	// (0x0004c823) tabs_2_passive_pane_t1

0x3222,	// (0x00042882) bg_active_tab_pane_cp4

0xd1d5,	// (0x0004c835) tabs_2_long_active_pane_t1

0x4a34,	// (0x00044094) bg_passive_tab_pane_cp4

0x1ee0,	// (0x00041540) list_single_midp_graphic_pane_g4_ParamLimits

0x3222,	// (0x00042882) bg_active_tab_pane_cp5

0xd1e8,	// (0x0004c848) tabs_3_long_active_pane_t1

0x4a34,	// (0x00044094) bg_passive_tab_pane_cp5

0x1ee0,	// (0x00041540) list_single_midp_graphic_pane_g4

0x3222,	// (0x00042882) bg_popup_window_pane_cp13_ParamLimits

0x3222,	// (0x00042882) bg_popup_window_pane_cp13

0x3ca5,	// (0x00043305) listscroll_popup_fast_pane_ParamLimits

0x3ca5,	// (0x00043305) listscroll_popup_fast_pane

0x3cb4,	// (0x00043314) grid_popup_fast_pane_ParamLimits

0x3cb4,	// (0x00043314) grid_popup_fast_pane

0x3cc6,	// (0x00043326) scroll_pane_cp9_ParamLimits

0x3cc6,	// (0x00043326) scroll_pane_cp9

0x7e78,	// (0x000474d8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e78,	// (0x000474d8) list_single_graphic_hl_pane_t1_cp2

0x3cea,	// (0x0004334a) input_focus_pane_cp20_ParamLimits

0x3cea,	// (0x0004334a) input_focus_pane_cp20

0x3cf8,	// (0x00043358) query_popup_data_pane_t1_ParamLimits

0x3cf8,	// (0x00043358) query_popup_data_pane_t1

0x3d0b,	// (0x0004336b) query_popup_data_pane_t2_ParamLimits

0x3d0b,	// (0x0004336b) query_popup_data_pane_t2

0x3d51,	// (0x000433b1) query_popup_data_pane_t3_ParamLimits

0x3d51,	// (0x000433b1) query_popup_data_pane_t3

0x3d9e,	// (0x000433fe) query_popup_data_pane_t4_ParamLimits

0x3d9e,	// (0x000433fe) query_popup_data_pane_t4

0x3dda,	// (0x0004343a) query_popup_data_pane_t5_ParamLimits

0x3dda,	// (0x0004343a) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0004ed11) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0004ed11) query_popup_data_pane_t

0x3af5,	// (0x00043155) bg_set_opt_pane_g1

0x3afd,	// (0x0004315d) bg_set_opt_pane_g2

0x3b05,	// (0x00043165) bg_set_opt_pane_g3

0x3b0d,	// (0x0004316d) bg_set_opt_pane_g4

0x3b15,	// (0x00043175) bg_set_opt_pane_g5

0x3b1d,	// (0x0004317d) bg_set_opt_pane_g6

0x3b25,	// (0x00043185) bg_set_opt_pane_g7

0x3b2d,	// (0x0004318d) bg_set_opt_pane_g8

0x3b35,	// (0x00043195) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0004ed1c) bg_set_opt_pane_g

0x1576,	// (0x00040bd6) control_top_pane_stacon_ParamLimits

0x1576,	// (0x00040bd6) control_top_pane_stacon

0x15c9,	// (0x00040c29) signal_pane_stacon_ParamLimits

0x15c9,	// (0x00040c29) signal_pane_stacon

0x4399,	// (0x000439f9) stacon_top_pane_g1_ParamLimits

0x4399,	// (0x000439f9) stacon_top_pane_g1

0x15ee,	// (0x00040c4e) title_pane_stacon_ParamLimits

0x15ee,	// (0x00040c4e) title_pane_stacon

0x1618,	// (0x00040c78) uni_indicator_pane_stacon_ParamLimits

0x1618,	// (0x00040c78) uni_indicator_pane_stacon

0x162d,	// (0x00040c8d) battery_pane_stacon_ParamLimits

0x162d,	// (0x00040c8d) battery_pane_stacon

0x1671,	// (0x00040cd1) control_bottom_pane_stacon_ParamLimits

0x1671,	// (0x00040cd1) control_bottom_pane_stacon

0x1694,	// (0x00040cf4) navi_pane_stacon_ParamLimits

0x1694,	// (0x00040cf4) navi_pane_stacon

0x43bb,	// (0x00043a1b) stacon_bottom_pane_g1_ParamLimits

0x43bb,	// (0x00043a1b) stacon_bottom_pane_g1

0x12d7,	// (0x00040937) aid_levels_signal_lsc_ParamLimits

0x12d7,	// (0x00040937) aid_levels_signal_lsc

0x12ee,	// (0x0004094e) signal_pane_stacon_g1_ParamLimits

0x12ee,	// (0x0004094e) signal_pane_stacon_g1

0x1302,	// (0x00040962) signal_pane_stacon_g2_ParamLimits

0x1302,	// (0x00040962) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0004ed2f) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0004ed2f) signal_pane_stacon_g

0x1337,	// (0x00040997) title_pane_stacon_t1_ParamLimits

0x1337,	// (0x00040997) title_pane_stacon_t1

0x3e1e,	// (0x0004347e) uni_indicator_pane_stacon_g1

0x3e28,	// (0x00043488) uni_indicator_pane_stacon_g2

0x3e32,	// (0x00043492) uni_indicator_pane_stacon_g3

0x3e3c,	// (0x0004349c) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0004ed3b) uni_indicator_pane_stacon_g

0x135c,	// (0x000409bc) control_top_pane_stacon_g1

0x1364,	// (0x000409c4) control_top_pane_stacon_t1_ParamLimits

0x1364,	// (0x000409c4) control_top_pane_stacon_t1

0x139b,	// (0x000409fb) aid_levels_battery_lsc_ParamLimits

0x139b,	// (0x000409fb) aid_levels_battery_lsc

0x13b3,	// (0x00040a13) battery_pane_stacon_g1_ParamLimits

0x13b3,	// (0x00040a13) battery_pane_stacon_g1

0x13c6,	// (0x00040a26) battery_pane_stacon_g2_ParamLimits

0x13c6,	// (0x00040a26) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0004ed44) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0004ed44) battery_pane_stacon_g

0x1404,	// (0x00040a64) navi_icon_pane_stacon

0x1418,	// (0x00040a78) navi_navi_pane_stacon

0x1404,	// (0x00040a64) navi_text_pane_stacon

0x135c,	// (0x000409bc) control_bottom_pane_stacon_g1

0x142c,	// (0x00040a8c) control_bottom_pane_stacon_t1_ParamLimits

0x142c,	// (0x00040a8c) control_bottom_pane_stacon_t1

0xd1fa,	// (0x0004c85a) grid_app_pane_ParamLimits

0xd1fa,	// (0x0004c85a) grid_app_pane

0xd232,	// (0x0004c892) scroll_pane_cp15_ParamLimits

0xd232,	// (0x0004c892) scroll_pane_cp15

0xd24b,	// (0x0004c8ab) cell_app_pane_ParamLimits

0xd24b,	// (0x0004c8ab) cell_app_pane

0xd290,	// (0x0004c8f0) cell_app_pane_g1_ParamLimits

0xd290,	// (0x0004c8f0) cell_app_pane_g1

0x3edd,	// (0x0004353d) cell_app_pane_g2_ParamLimits

0x3edd,	// (0x0004353d) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0004ed49) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0004ed49) cell_app_pane_g

0xd2b0,	// (0x0004c910) cell_app_pane_t1_ParamLimits

0xd2b0,	// (0x0004c910) cell_app_pane_t1

0x3f00,	// (0x00043560) grid_highlight_pane_ParamLimits

0x3f00,	// (0x00043560) grid_highlight_pane

0x3af5,	// (0x00043155) cell_highlight_pane_g1

0x3afd,	// (0x0004315d) cell_highlight_pane_g2

0x3b05,	// (0x00043165) cell_highlight_pane_g3

0x3b0d,	// (0x0004316d) cell_highlight_pane_g4

0x3b15,	// (0x00043175) cell_highlight_pane_g5

0x3b1d,	// (0x0004317d) cell_highlight_pane_g6

0x3b25,	// (0x00043185) cell_highlight_pane_g7

0x3b2d,	// (0x0004318d) cell_highlight_pane_g8

0x3b35,	// (0x00043195) cell_highlight_pane_g9

0x3138,	// (0x00042798) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0004ecf7) cell_highlight_pane_g

0x3f11,	// (0x00043571) bg_scroll_pane

0x1476,	// (0x00040ad6) scroll_handle_pane

0x3f58,	// (0x000435b8) scroll_bg_pane_g1

0x3f6d,	// (0x000435cd) scroll_bg_pane_g2

0x3f85,	// (0x000435e5) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0004ed4e) scroll_bg_pane_g

0x3f9a,	// (0x000435fa) scroll_handle_focus_pane_ParamLimits

0x3f9a,	// (0x000435fa) scroll_handle_focus_pane

0x3f58,	// (0x000435b8) scroll_handle_pane_g1

0x3fa7,	// (0x00043607) scroll_handle_pane_g2

0x3f85,	// (0x000435e5) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0004ed55) scroll_handle_pane_g

0x3b46,	// (0x000431a6) bg_popup_sub_pane_cp21_ParamLimits

0x3b46,	// (0x000431a6) bg_popup_sub_pane_cp21

0x3fbb,	// (0x0004361b) popup_fep_japan_predictive_window_t1_ParamLimits

0x3fbb,	// (0x0004361b) popup_fep_japan_predictive_window_t1

0x3fd5,	// (0x00043635) popup_fep_japan_predictive_window_t2_ParamLimits

0x3fd5,	// (0x00043635) popup_fep_japan_predictive_window_t2

0x4008,	// (0x00043668) popup_fep_japan_predictive_window_t3_ParamLimits

0x4008,	// (0x00043668) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0004ed5c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0004ed5c) popup_fep_japan_predictive_window_t

0x3142,	// (0x000427a2) bg_popup_sub_pane_cp23

0x403f,	// (0x0004369f) listscroll_japin_cand_pane

0x4047,	// (0x000436a7) popup_fep_japan_candidate_window_t1

0x4055,	// (0x000436b5) candidate_pane_ParamLimits

0x4055,	// (0x000436b5) candidate_pane

0x4067,	// (0x000436c7) scroll_pane_cp30

0x406f,	// (0x000436cf) list_single_popup_jap_candidate_pane_ParamLimits

0x406f,	// (0x000436cf) list_single_popup_jap_candidate_pane

0x3142,	// (0x000427a2) list_highlight_pane_cp30

0x4084,	// (0x000436e4) list_single_popup_jap_candidate_pane_t1

0x4093,	// (0x000436f3) level_1_signal

0x40a0,	// (0x00043700) level_2_signal

0x40ad,	// (0x0004370d) level_3_signal

0x40ba,	// (0x0004371a) level_4_signal

0x40c7,	// (0x00043727) level_5_signal

0x40d4,	// (0x00043734) level_6_signal

0x40e1,	// (0x00043741) level_7_signal

0x4093,	// (0x000436f3) level_1_battery

0x40a0,	// (0x00043700) level_2_battery

0x40ad,	// (0x0004370d) level_3_battery

0x40ba,	// (0x0004371a) level_4_battery

0x40c7,	// (0x00043727) level_5_battery

0x40d4,	// (0x00043734) level_6_battery

0x40e1,	// (0x00043741) level_7_battery

0x4106,	// (0x00043766) list_menu_pane_ParamLimits

0x4106,	// (0x00043766) list_menu_pane

0x411c,	// (0x0004377c) scroll_pane_cp25_ParamLimits

0x411c,	// (0x0004377c) scroll_pane_cp25

0x4135,	// (0x00043795) list_double2_graphic_pane_cp2_ParamLimits

0x4135,	// (0x00043795) list_double2_graphic_pane_cp2

0x4135,	// (0x00043795) list_double2_large_graphic_pane_cp2_ParamLimits

0x4135,	// (0x00043795) list_double2_large_graphic_pane_cp2

0x4135,	// (0x00043795) list_double2_pane_cp2_ParamLimits

0x4135,	// (0x00043795) list_double2_pane_cp2

0x4135,	// (0x00043795) list_double_graphic_pane_cp2_ParamLimits

0x4135,	// (0x00043795) list_double_graphic_pane_cp2

0x4135,	// (0x00043795) list_double_large_graphic_pane_cp2_ParamLimits

0x4135,	// (0x00043795) list_double_large_graphic_pane_cp2

0x4135,	// (0x00043795) list_double_number_pane_cp2_ParamLimits

0x4135,	// (0x00043795) list_double_number_pane_cp2

0x4135,	// (0x00043795) list_double_pane_cp2_ParamLimits

0x4135,	// (0x00043795) list_double_pane_cp2

0xd2d8,	// (0x0004c938) list_single_2graphic_pane_cp2_ParamLimits

0xd2d8,	// (0x0004c938) list_single_2graphic_pane_cp2

0xd2d8,	// (0x0004c938) list_single_graphic_heading_pane_cp2_ParamLimits

0xd2d8,	// (0x0004c938) list_single_graphic_heading_pane_cp2

0xd2d8,	// (0x0004c938) list_single_graphic_pane_cp2_ParamLimits

0xd2d8,	// (0x0004c938) list_single_graphic_pane_cp2

0xd2d8,	// (0x0004c938) list_single_heading_pane_cp2_ParamLimits

0xd2d8,	// (0x0004c938) list_single_heading_pane_cp2

0x4172,	// (0x000437d2) list_single_large_graphic_pane_cp2_ParamLimits

0x4172,	// (0x000437d2) list_single_large_graphic_pane_cp2

0xd2d8,	// (0x0004c938) list_single_number_heading_pane_cp2_ParamLimits

0xd2d8,	// (0x0004c938) list_single_number_heading_pane_cp2

0xd2d8,	// (0x0004c938) list_single_number_pane_cp2_ParamLimits

0xd2d8,	// (0x0004c938) list_single_number_pane_cp2

0xd2d8,	// (0x0004c938) list_single_pane_cp2_ParamLimits

0xd2d8,	// (0x0004c938) list_single_pane_cp2

0x41e8,	// (0x00043848) bg_popup_sub_pane_cp22

0x1528,	// (0x00040b88) popup_side_volume_key_window_g1

0x1552,	// (0x00040bb2) popup_side_volume_key_window_t1

0x156e,	// (0x00040bce) volume_small_pane_cp1

0x349d,	// (0x00042afd) bg_popup_sub_pane_cp24_ParamLimits

0x349d,	// (0x00042afd) bg_popup_sub_pane_cp24

0x41fe,	// (0x0004385e) fep_china_uni_candidate_pane_ParamLimits

0x41fe,	// (0x0004385e) fep_china_uni_candidate_pane

0x4212,	// (0x00043872) fep_china_uni_entry_pane

0x4222,	// (0x00043882) popup_fep_china_uni_window_g1

0x423e,	// (0x0004389e) fep_china_uni_entry_pane_g1

0x4246,	// (0x000438a6) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0004ed8d) fep_china_uni_entry_pane_g

0x424e,	// (0x000438ae) fep_entry_item_pane

0x4258,	// (0x000438b8) fep_candidate_item_pane

0x4260,	// (0x000438c0) fep_china_uni_candidate_pane_g1

0x4268,	// (0x000438c8) fep_china_uni_candidate_pane_g2

0x4270,	// (0x000438d0) fep_china_uni_candidate_pane_g3

0x4278,	// (0x000438d8) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0004ed92) fep_china_uni_candidate_pane_g

0x3138,	// (0x00042798) fep_entry_item_pane_g1

0x4280,	// (0x000438e0) fep_entry_item_pane_t1_ParamLimits

0x4280,	// (0x000438e0) fep_entry_item_pane_t1

0x4296,	// (0x000438f6) fep_candidate_item_pane_t1_ParamLimits

0x4296,	// (0x000438f6) fep_candidate_item_pane_t1

0x42ab,	// (0x0004390b) fep_candidate_item_pane_t2_ParamLimits

0x42ab,	// (0x0004390b) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0004ed9b) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0004ed9b) fep_candidate_item_pane_t

0x3222,	// (0x00042882) list_highlight_pane_cp31_ParamLimits

0x3222,	// (0x00042882) list_highlight_pane_cp31

0x42bd,	// (0x0004391d) level_1_signal_lsc

0x42c6,	// (0x00043926) level_2_signal_lsc

0x42cf,	// (0x0004392f) level_3_signal_lsc

0x42d8,	// (0x00043938) level_4_signal_lsc

0x42e1,	// (0x00043941) level_5_signal_lsc

0x42ea,	// (0x0004394a) level_6_signal_lsc

0x42f3,	// (0x00043953) level_7_signal_lsc

0x42f3,	// (0x00043953) level_1_battery_lsc

0x42fc,	// (0x0004395c) level_2_battery_lsc

0x4305,	// (0x00043965) level_3_battery_lsc

0x430e,	// (0x0004396e) level_4_battery_lsc

0x4317,	// (0x00043977) level_5_battery_lsc

0x4320,	// (0x00043980) level_6_battery_lsc

0x42bd,	// (0x0004391d) level_7_battery_lsc

0x4329,	// (0x00043989) scroll_handle_focus_pane_g1

0x4332,	// (0x00043992) scroll_handle_focus_pane_g2

0x433b,	// (0x0004399b) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0004eda0) scroll_handle_focus_pane_g

0xba54,	// (0x0004b0b4) list_single_2graphic_pane_g1_ParamLimits

0xba54,	// (0x0004b0b4) list_single_2graphic_pane_g1

0xbf04,	// (0x0004b564) list_single_2graphic_pane_g2_ParamLimits

0xbf04,	// (0x0004b564) list_single_2graphic_pane_g2

0x1ea7,	// (0x00041507) list_single_2graphic_pane_g3_ParamLimits

0x1ea7,	// (0x00041507) list_single_2graphic_pane_g3

0xbf26,	// (0x0004b586) list_single_2graphic_pane_g4_ParamLimits

0xbf26,	// (0x0004b586) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0004eda7) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0004eda7) list_single_2graphic_pane_g

0xba60,	// (0x0004b0c0) list_single_2graphic_pane_t1_ParamLimits

0xba60,	// (0x0004b0c0) list_single_2graphic_pane_t1

0xba8e,	// (0x0004b0ee) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xba8e,	// (0x0004b0ee) list_double2_graphic_large_graphic_pane_g1

0xbf04,	// (0x0004b564) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbf04,	// (0x0004b564) list_double2_graphic_large_graphic_pane_g2

0x1ea7,	// (0x00041507) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x1ea7,	// (0x00041507) list_double2_graphic_large_graphic_pane_g3

0xbaa0,	// (0x0004b100) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbaa0,	// (0x0004b100) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0004edb0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0004edb0) list_double2_graphic_large_graphic_pane_g

0xbaac,	// (0x0004b10c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbaac,	// (0x0004b10c) list_double2_graphic_large_graphic_pane_t1

0xbac2,	// (0x0004b122) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbac2,	// (0x0004b122) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0004edb9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0004edb9) list_double2_graphic_large_graphic_pane_t

0x4483,	// (0x00043ae3) popup_fast_swap_window_ParamLimits

0x4483,	// (0x00043ae3) popup_fast_swap_window

0x449f,	// (0x00043aff) popup_side_volume_key_window

0x44bb,	// (0x00043b1b) stacon_top_pane

0x44c5,	// (0x00043b25) status_pane_ParamLimits

0x44c5,	// (0x00043b25) status_pane

0x44bb,	// (0x00043b1b) status_small_pane

0x3142,	// (0x000427a2) control_pane

0x3142,	// (0x000427a2) stacon_bottom_pane

0x3a71,	// (0x000430d1) scroll_pane_cp121

0x3a68,	// (0x000430c8) set_content_pane

0x435f,	// (0x000439bf) bg_active_tab_pane_g1_cp1

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp1

0x4368,	// (0x000439c8) bg_active_tab_pane_g3_cp1

0x435f,	// (0x000439bf) bg_passive_tab_pane_g1_cp1

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp1

0x4368,	// (0x000439c8) bg_passive_tab_pane_g3_cp1

0xd366,	// (0x0004c9c6) bg_active_tab_pane_g1_cp2

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp2

0xd36f,	// (0x0004c9cf) bg_active_tab_pane_g3_cp2

0xd366,	// (0x0004c9c6) bg_passive_tab_pane_g1_cp2

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp2

0xd36f,	// (0x0004c9cf) bg_passive_tab_pane_g3_cp2

0xd378,	// (0x0004c9d8) bg_active_tab_pane_g1_cp3

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp3

0xd381,	// (0x0004c9e1) bg_active_tab_pane_g3_cp3

0xd378,	// (0x0004c9d8) bg_passive_tab_pane_g1_cp3

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp3

0xd381,	// (0x0004c9e1) bg_passive_tab_pane_g3_cp3

0xd38a,	// (0x0004c9ea) bg_active_tab_pane_g1_cp4

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp4

0xd393,	// (0x0004c9f3) bg_active_tab_pane_g3_cp4

0xd38a,	// (0x0004c9ea) bg_passive_tab_pane_g1_cp4

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp4

0xd393,	// (0x0004c9f3) bg_passive_tab_pane_g3_cp4

0x43d7,	// (0x00043a37) bg_active_tab_pane_g1_cp5

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp5

0x43e0,	// (0x00043a40) bg_active_tab_pane_g3_cp5

0x43d7,	// (0x00043a37) bg_passive_tab_pane_g1_cp5

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp5

0x43e0,	// (0x00043a40) bg_passive_tab_pane_g3_cp5

0x6b19,	// (0x00046179) list_set_graphic_pane_ParamLimits

0x6b19,	// (0x00046179) list_set_graphic_pane

0x3142,	// (0x000427a2) bg_set_opt_pane_cp4

0xd39c,	// (0x0004c9fc) list_set_graphic_pane_g1_ParamLimits

0xd39c,	// (0x0004c9fc) list_set_graphic_pane_g1

0xd3a8,	// (0x0004ca08) list_set_graphic_pane_g2_ParamLimits

0xd3a8,	// (0x0004ca08) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0004edbe) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0004edbe) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0004f133) volume_small_pane_cp_g

0xd3cc,	// (0x0004ca2c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd3cc,	// (0x0004ca2c) list_double2_large_graphic_pane_g1_cp2

0xd3da,	// (0x0004ca3a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd3da,	// (0x0004ca3a) list_double2_large_graphic_pane_g2_cp2

0x4453,	// (0x00043ab3) list_double2_large_graphic_pane_g3_cp2

0x445b,	// (0x00043abb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x445b,	// (0x00043abb) list_double2_large_graphic_pane_t1_cp2

0x4471,	// (0x00043ad1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4471,	// (0x00043ad1) list_double2_large_graphic_pane_t2_cp2

0xdb2f,	// (0x0004d18f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdb2f,	// (0x0004d18f) list_double_large_graphic_pane_g1_cp2

0xdb42,	// (0x0004d1a2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdb42,	// (0x0004d1a2) list_double_large_graphic_pane_g2_cp2

0x45d5,	// (0x00043c35) list_double_large_graphic_pane_g3_cp2

0x60df,	// (0x0004573f) list_double_large_graphic_pane_g4_cp

0x60e7,	// (0x00045747) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x60e7,	// (0x00045747) list_double_large_graphic_pane_t1_cp2

0x60fe,	// (0x0004575e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x60fe,	// (0x0004575e) list_double_large_graphic_pane_t2_cp2

0xd3eb,	// (0x0004ca4b) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd3eb,	// (0x0004ca4b) list_double2_graphic_pane_g1_cp2

0xd3f9,	// (0x0004ca59) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd3f9,	// (0x0004ca59) list_double2_graphic_pane_g2_cp2

0xd40a,	// (0x0004ca6a) list_double2_graphic_pane_g3_cp2

0x44fc,	// (0x00043b5c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x44fc,	// (0x00043b5c) list_double2_graphic_pane_t1_cp2

0x4512,	// (0x00043b72) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4512,	// (0x00043b72) list_double2_graphic_pane_t2_cp2

0x4524,	// (0x00043b84) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4524,	// (0x00043b84) list_single_number_heading_pane_g1_cp2

0x4530,	// (0x00043b90) list_single_number_heading_pane_g2_cp2

0x4538,	// (0x00043b98) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4538,	// (0x00043b98) list_single_number_heading_pane_t1_cp2

0xd414,	// (0x0004ca74) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd414,	// (0x0004ca74) list_single_number_heading_pane_t2_cp2

0x4560,	// (0x00043bc0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4560,	// (0x00043bc0) list_single_number_heading_pane_t3_cp2

0x4524,	// (0x00043b84) list_single_heading_pane_g1_cp2_ParamLimits

0x4524,	// (0x00043b84) list_single_heading_pane_g1_cp2

0x4530,	// (0x00043b90) list_single_heading_pane_g2_cp2

0x4538,	// (0x00043b98) list_single_heading_pane_t1_cp2_ParamLimits

0x4538,	// (0x00043b98) list_single_heading_pane_t1_cp2

0xdb1b,	// (0x0004d17b) list_single_heading_pane_t2_cp2_ParamLimits

0xdb1b,	// (0x0004d17b) list_single_heading_pane_t2_cp2

0x5e1c,	// (0x0004547c) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e1c,	// (0x0004547c) list_double_graphic_pane_g1_cp2

0x5654,	// (0x00044cb4) list_double_graphic_pane_g2_cp2_ParamLimits

0x5654,	// (0x00044cb4) list_double_graphic_pane_g2_cp2

0x5e28,	// (0x00045488) list_double_graphic_pane_g3_cp2

0x5e30,	// (0x00045490) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e30,	// (0x00045490) list_double_graphic_pane_t1_cp2

0x5e46,	// (0x000454a6) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e46,	// (0x000454a6) list_double_graphic_pane_t2_cp2

0x3d92,	// (0x000433f2) list_double_number_pane_g1_cp2_ParamLimits

0x3d92,	// (0x000433f2) list_double_number_pane_g1_cp2

0x45d5,	// (0x00043c35) list_double_number_pane_g2_cp2

0xdb07,	// (0x0004d167) list_double_number_pane_t1_cp2_ParamLimits

0xdb07,	// (0x0004d167) list_double_number_pane_t1_cp2

0x5df4,	// (0x00045454) list_double_number_pane_t2_cp2_ParamLimits

0x5df4,	// (0x00045454) list_double_number_pane_t2_cp2

0x5e0a,	// (0x0004546a) list_double_number_pane_t3_cp2_ParamLimits

0x5e0a,	// (0x0004546a) list_double_number_pane_t3_cp2

0xda55,	// (0x0004d0b5) list_single_graphic_pane_g1_cp2_ParamLimits

0xda55,	// (0x0004d0b5) list_single_graphic_pane_g1_cp2

0x462d,	// (0x00043c8d) list_single_graphic_pane_g2_cp2_ParamLimits

0x462d,	// (0x00043c8d) list_single_graphic_pane_g2_cp2

0x4639,	// (0x00043c99) list_single_graphic_pane_g3_cp2

0x5c9f,	// (0x000452ff) list_single_graphic_pane_t1_cp2_ParamLimits

0x5c9f,	// (0x000452ff) list_single_graphic_pane_t1_cp2

0x462d,	// (0x00043c8d) list_single_number_pane_g1_cp2_ParamLimits

0x462d,	// (0x00043c8d) list_single_number_pane_g1_cp2

0x4639,	// (0x00043c99) list_single_number_pane_g2_cp2

0x5c9f,	// (0x000452ff) list_single_number_pane_t1_cp2_ParamLimits

0x5c9f,	// (0x000452ff) list_single_number_pane_t1_cp2

0xda41,	// (0x0004d0a1) list_single_number_pane_t2_cp2_ParamLimits

0xda41,	// (0x0004d0a1) list_single_number_pane_t2_cp2

0xd3da,	// (0x0004ca3a) list_double2_pane_g1_cp2_ParamLimits

0xd3da,	// (0x0004ca3a) list_double2_pane_g1_cp2

0x4453,	// (0x00043ab3) list_double2_pane_g2_cp2

0x45ad,	// (0x00043c0d) list_double2_pane_t1_cp2_ParamLimits

0x45ad,	// (0x00043c0d) list_double2_pane_t1_cp2

0x45c3,	// (0x00043c23) list_double2_pane_t2_cp2_ParamLimits

0x45c3,	// (0x00043c23) list_double2_pane_t2_cp2

0x3d92,	// (0x000433f2) list_double_pane_g1_cp2_ParamLimits

0x3d92,	// (0x000433f2) list_double_pane_g1_cp2

0x45d5,	// (0x00043c35) list_double_pane_g2_cp2

0x45dd,	// (0x00043c3d) list_double_pane_t1_cp2_ParamLimits

0x45dd,	// (0x00043c3d) list_double_pane_t1_cp2

0x45f3,	// (0x00043c53) list_double_pane_t2_cp2_ParamLimits

0x45f3,	// (0x00043c53) list_double_pane_t2_cp2

0x461d,	// (0x00043c7d) list_single_pane_cp2_g3

0x462d,	// (0x00043c8d) list_single_pane_g1_cp2_ParamLimits

0x462d,	// (0x00043c8d) list_single_pane_g1_cp2

0x4639,	// (0x00043c99) list_single_pane_g2_cp2

0x4641,	// (0x00043ca1) list_single_pane_t1_cp2_ParamLimits

0x4641,	// (0x00043ca1) list_single_pane_t1_cp2

0xd440,	// (0x0004caa0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd440,	// (0x0004caa0) list_single_large_graphic_pane_g1_cp2

0x4665,	// (0x00043cc5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4665,	// (0x00043cc5) list_single_large_graphic_pane_g2_cp2

0x4671,	// (0x00043cd1) list_single_large_graphic_pane_g3_cp2

0x4679,	// (0x00043cd9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4679,	// (0x00043cd9) list_single_large_graphic_pane_g4_cp1

0x4693,	// (0x00043cf3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4693,	// (0x00043cf3) list_single_large_graphic_pane_t1_cp2

0x5c6b,	// (0x000452cb) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5c6b,	// (0x000452cb) list_single_graphic_heading_pane_g1_cp2

0xda1c,	// (0x0004d07c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xda1c,	// (0x0004d07c) list_single_graphic_heading_pane_g4_cp2

0x4639,	// (0x00043c99) list_single_graphic_heading_pane_g5_cp2

0x5c77,	// (0x000452d7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5c77,	// (0x000452d7) list_single_graphic_heading_pane_t1_cp2

0xda2d,	// (0x0004d08d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xda2d,	// (0x0004d08d) list_single_graphic_heading_pane_t2_cp2

0x5c2c,	// (0x0004528c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c2c,	// (0x0004528c) list_single_2graphic_pane_g1_cp2

0xda1c,	// (0x0004d07c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xda1c,	// (0x0004d07c) list_single_2graphic_pane_g2_cp2

0x4639,	// (0x00043c99) list_single_2graphic_pane_g3_cp2

0x5c49,	// (0x000452a9) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c49,	// (0x000452a9) list_single_2graphic_pane_g4_cp2

0x5c55,	// (0x000452b5) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c55,	// (0x000452b5) list_single_2graphic_pane_t1_cp2

0x3138,	// (0x00042798) list_highlight_pane_g10_cp1

0x5804,	// (0x00044e64) list_highlight_pane_g1_cp1

0x580c,	// (0x00044e6c) list_highlight_pane_g2_cp1

0x5814,	// (0x00044e74) list_highlight_pane_g3_cp1

0x581c,	// (0x00044e7c) list_highlight_pane_g4_cp1

0x5824,	// (0x00044e84) list_highlight_pane_g5_cp1

0x582c,	// (0x00044e8c) list_highlight_pane_g6_cp1

0x5834,	// (0x00044e94) list_highlight_pane_g7_cp1

0x583c,	// (0x00044e9c) list_highlight_pane_g8_cp1

0x5844,	// (0x00044ea4) list_highlight_pane_g9_cp1

0xd9e2,	// (0x0004d042) form_field_slider_pane_t3

0xd9f0,	// (0x0004d050) form_field_slider_pane_t4

0x5740,	// (0x00044da0) slider_form_pane_ParamLimits

0x5740,	// (0x00044da0) slider_form_pane

0x3142,	// (0x000427a2) control_abbreviations

0x3142,	// (0x000427a2) control_conventions

0x3142,	// (0x000427a2) control_definitions

0x3142,	// (0x000427a2) format_table_attribute

0x5f0f,	// (0x0004556f) bg_popup_preview_window_pane_g9

0x3142,	// (0x000427a2) format_table_data2

0x3142,	// (0x000427a2) format_table_data3

0x3142,	// (0x000427a2) format_table_data_example

0x0008,

0x3142,	// (0x000427a2) intro_purpose

0xf8ee,	// (0x0004ef4e) bg_popup_preview_window_pane_g

0x3142,	// (0x000427a2) texts_category

0x3142,	// (0x000427a2) texts_graphics

0x46a9,	// (0x00043d09) text_digital

0x46b8,	// (0x00043d18) text_primary

0x46c7,	// (0x00043d27) text_primary_small

0x46d6,	// (0x00043d36) text_secondary

0x46e5,	// (0x00043d45) text_title

0x6667,	// (0x00045cc7) bg_passive_tab_pane_g1_cp3_srt

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp3_srt

0x6670,	// (0x00045cd0) bg_passive_tab_pane_g3_cp3_srt

0x349d,	// (0x00042afd) bg_active_tab_pane_cp3_srt_ParamLimits

0x349d,	// (0x00042afd) bg_active_tab_pane_cp3_srt

0x6679,	// (0x00045cd9) tabs_4_active_pane_srt_g1

0xdd8d,	// (0x0004d3ed) tabs_4_active_pane_srt_t1_ParamLimits

0xdd8d,	// (0x0004d3ed) tabs_4_active_pane_srt_t1

0x6667,	// (0x00045cc7) bg_active_tab_pane_g1_cp3_copy1

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp3_copy1

0x6670,	// (0x00045cd0) bg_active_tab_pane_g3_cp3_copy1

0x3222,	// (0x00042882) tabs_2_long_active_pane_srt_ParamLimits

0x3222,	// (0x00042882) tabs_2_long_active_pane_srt

0x3222,	// (0x00042882) tabs_2_long_passive_pane_srt_ParamLimits

0x3222,	// (0x00042882) tabs_2_long_passive_pane_srt

0x4a34,	// (0x00044094) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4a34,	// (0x00044094) bg_passive_tab_pane_cp4_srt

0x6353,	// (0x000459b3) bg_passive_tab_pane_g1_cp4_srt

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp4_srt

0x635c,	// (0x000459bc) bg_passive_tab_pane_g3_cp4_srt

0x3222,	// (0x00042882) bg_active_tab_pane_cp4_srt_ParamLimits

0x3222,	// (0x00042882) bg_active_tab_pane_cp4_srt

0xdbb7,	// (0x0004d217) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbb7,	// (0x0004d217) tabs_2_long_active_pane_srt_t1

0x6353,	// (0x000459b3) bg_active_tab_pane_g1_cp4_srt

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp4_srt

0x635c,	// (0x000459bc) bg_active_tab_pane_g3_cp4_srt

0x349d,	// (0x00042afd) tabs_3_long_active_pane_srt_ParamLimits

0x349d,	// (0x00042afd) tabs_3_long_active_pane_srt

0x349d,	// (0x00042afd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x349d,	// (0x00042afd) tabs_3_long_passive_pane_cp_srt

0x349d,	// (0x00042afd) tabs_3_long_passive_pane_srt_ParamLimits

0x349d,	// (0x00042afd) tabs_3_long_passive_pane_srt

0x4a34,	// (0x00044094) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4a34,	// (0x00044094) bg_passive_tab_pane_cp5_srt

0x43d7,	// (0x00043a37) bg_passive_tab_pane_g1_cp5_srt

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp5_srt

0x43e0,	// (0x00043a40) bg_passive_tab_pane_g3_cp5_srt

0x3222,	// (0x00042882) bg_active_tab_pane_cp5_srt_ParamLimits

0x3222,	// (0x00042882) bg_active_tab_pane_cp5_srt

0xdba1,	// (0x0004d201) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdba1,	// (0x0004d201) tabs_3_long_active_pane_srt_t1

0x43d7,	// (0x00043a37) bg_active_tab_pane_g1_cp5_srt

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp5_srt

0x43e0,	// (0x00043a40) bg_active_tab_pane_g3_cp5_srt

0x6333,	// (0x00045993) navi_text_pane_srt_t1

0x632b,	// (0x0004598b) navi_icon_pane_srt_g1

0x48ac,	// (0x00043f0c) midp_editing_number_pane_srt

0x46f4,	// (0x00043d54) midp_ticker_pane_srt

0x48b4,	// (0x00043f14) midp_ticker_pane_srt_g1

0x48bc,	// (0x00043f1c) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0004eddd) midp_ticker_pane_srt_g

0x48c4,	// (0x00043f24) midp_ticker_pane_srt_t1

0x631c,	// (0x0004597c) midp_editing_number_pane_t1_copy1

0x4a34,	// (0x00044094) listscroll_midp_pane

0x4a34,	// (0x00044094) midp_form_pane

0x475e,	// (0x00043dbe) midp_info_popup_window_ParamLimits

0x475e,	// (0x00043dbe) midp_info_popup_window

0x3b46,	// (0x000431a6) bg_popup_sub_pane_cp50_ParamLimits

0x3b46,	// (0x000431a6) bg_popup_sub_pane_cp50

0x5417,	// (0x00044a77) listscroll_midp_info_pane_ParamLimits

0x5417,	// (0x00044a77) listscroll_midp_info_pane

0x53ff,	// (0x00044a5f) listscroll_form_midp_pane_ParamLimits

0x53ff,	// (0x00044a5f) listscroll_form_midp_pane

0x540b,	// (0x00044a6b) scroll_bar_cp050

0xd9d6,	// (0x0004d036) list_midp_pane

0x70ff,	// (0x0004675f) signal_pane_g2_cp

0x5319,	// (0x00044979) listscroll_midp_info_pane_t1_ParamLimits

0x5319,	// (0x00044979) listscroll_midp_info_pane_t1

0x5331,	// (0x00044991) listscroll_midp_info_pane_t2_ParamLimits

0x5331,	// (0x00044991) listscroll_midp_info_pane_t2

0x536f,	// (0x000449cf) listscroll_midp_info_pane_t3_ParamLimits

0x536f,	// (0x000449cf) listscroll_midp_info_pane_t3

0x53a9,	// (0x00044a09) listscroll_midp_info_pane_t4_ParamLimits

0x53a9,	// (0x00044a09) listscroll_midp_info_pane_t4

0x0003,

0xf829,	// (0x0004ee89) listscroll_midp_info_pane_t_ParamLimits

0xf829,	// (0x0004ee89) listscroll_midp_info_pane_t

0x3c0a,	// (0x0004326a) scroll_pane_cp21

0x52b7,	// (0x00044917) form_midp_field_choice_group_pane

0x52c0,	// (0x00044920) form_midp_field_text_pane

0x52ff,	// (0x0004495f) form_midp_field_time_pane

0x5307,	// (0x00044967) form_midp_gauge_slider_pane

0x5310,	// (0x00044970) form_midp_gauge_wait_pane

0x3142,	// (0x000427a2) form_midp_image_pane

0xbad4,	// (0x0004b134) list_single_midp_pane_ParamLimits

0xbad4,	// (0x0004b134) list_single_midp_pane

0xd9b4,	// (0x0004d014) form_midp_field_text_pane_t1

0x5039,	// (0x00044699) input_focus_pane_cp050

0x52a6,	// (0x00044906) list_midp_form_text_pane

0x523e,	// (0x0004489e) form_midp_field_choice_group_pane_t1

0x524c,	// (0x000448ac) input_focus_pane_cp051

0x5260,	// (0x000448c0) list_midp_choice_pane

0x3142,	// (0x000427a2) status_idle_pane

0x5222,	// (0x00044882) form_midp_field_time_pane_t1

0x3138,	// (0x00042798) wait_anim_pane_g2_copy1

0x5230,	// (0x00044890) form_midp_field_time_pane_t2

0x0001,

0x480c,	// (0x00043e6c) aid_navinavi_width_2_pane

0xf824,	// (0x0004ee84) form_midp_field_time_pane_t

0x3142,	// (0x000427a2) input_focus_pane_cp052

0x3142,	// (0x000427a2) bg_input_focus_pane_cp040

0x51e2,	// (0x00044842) form_midp_gauge_slider_pane_t1

0x51f0,	// (0x00044850) form_midp_gauge_slider_pane_t2

0xd998,	// (0x0004cff8) form_midp_gauge_slider_pane_t3

0xd9a6,	// (0x0004d006) form_midp_gauge_slider_pane_t4

0x0003,

0xf81b,	// (0x0004ee7b) form_midp_gauge_slider_pane_t

0x521a,	// (0x0004487a) form_midp_slider_pane

0x3222,	// (0x00042882) bg_input_focus_pane_cp041_ParamLimits

0x3222,	// (0x00042882) bg_input_focus_pane_cp041

0x51af,	// (0x0004480f) form_midp_gauge_wait_pane_t1_ParamLimits

0x51af,	// (0x0004480f) form_midp_gauge_wait_pane_t1

0x51c1,	// (0x00044821) form_midp_gauge_wait_pane_t2_ParamLimits

0x51c1,	// (0x00044821) form_midp_gauge_wait_pane_t2

0x0001,

0xf816,	// (0x0004ee76) form_midp_gauge_wait_pane_t_ParamLimits

0xf816,	// (0x0004ee76) form_midp_gauge_wait_pane_t

0x51d3,	// (0x00044833) form_midp_wait_pane_ParamLimits

0x51d3,	// (0x00044833) form_midp_wait_pane

0x5179,	// (0x000447d9) form_midp_image_pane_g1

0x5182,	// (0x000447e2) form_midp_image_pane_t1

0x5191,	// (0x000447f1) form_midp_image_pane_t2

0x51a0,	// (0x00044800) form_midp_image_pane_t3

0x0002,

0xf80f,	// (0x0004ee6f) form_midp_image_pane_t

0x5170,	// (0x000447d0) list_single_midp_pane_g1

0x085e,	// (0x0003febe) list_single_midp_pane_t1

0xd983,	// (0x0004cfe3) list_midp_form_item_pane_ParamLimits

0xd983,	// (0x0004cfe3) list_midp_form_item_pane

0x47b4,	// (0x00043e14) list_midp_form_item_pane_t1

0x47c3,	// (0x00043e23) midp_ticker_pane_g1

0x47cf,	// (0x00043e2f) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0004edc3) midp_ticker_pane_g

0x47db,	// (0x00043e3b) midp_ticker_pane_t1

0x65af,	// (0x00045c0f) midp_editing_number_pane_t1

0x658d,	// (0x00045bed) midp_editing_number_pane

0x659c,	// (0x00045bfc) midp_ticker_pane

0x630c,	// (0x0004596c) ai_message_heading_pane

0x3142,	// (0x000427a2) bg_popup_window_pane_cp14

0x6314,	// (0x00045974) listscroll_ai_message_pane

0x6296,	// (0x000458f6) ai_message_heading_pane_g1_ParamLimits

0x6296,	// (0x000458f6) ai_message_heading_pane_g1

0x62a2,	// (0x00045902) ai_message_heading_pane_g2_ParamLimits

0x62a2,	// (0x00045902) ai_message_heading_pane_g2

0x62ae,	// (0x0004590e) ai_message_heading_pane_g3_ParamLimits

0x62ae,	// (0x0004590e) ai_message_heading_pane_g3

0x62ba,	// (0x0004591a) ai_message_heading_pane_g4_ParamLimits

0x62ba,	// (0x0004591a) ai_message_heading_pane_g4

0x0003,

0xf950,	// (0x0004efb0) ai_message_heading_pane_g_ParamLimits

0xf950,	// (0x0004efb0) ai_message_heading_pane_g

0x62c6,	// (0x00045926) ai_message_heading_pane_t1_ParamLimits

0x62c6,	// (0x00045926) ai_message_heading_pane_t1

0x62e0,	// (0x00045940) ai_message_heading_pane_t2_ParamLimits

0x62e0,	// (0x00045940) ai_message_heading_pane_t2

0x0001,

0xf959,	// (0x0004efb9) ai_message_heading_pane_t_ParamLimits

0xf959,	// (0x0004efb9) ai_message_heading_pane_t

0x62f2,	// (0x00045952) bg_popup_heading_pane_cp1_ParamLimits

0x62f2,	// (0x00045952) bg_popup_heading_pane_cp1

0x6284,	// (0x000458e4) list_ai_message_pane_ParamLimits

0x6284,	// (0x000458e4) list_ai_message_pane

0x3c0a,	// (0x0004326a) scroll_pane_cp10

0x6220,	// (0x00045880) list_ai_message_pane_g1

0x6228,	// (0x00045888) list_ai_message_pane_g2

0x0001,

0xf92d,	// (0x0004ef8d) list_ai_message_pane_g

0x6230,	// (0x00045890) list_ai_message_pane_t1_ParamLimits

0x6230,	// (0x00045890) list_ai_message_pane_t1

0x6245,	// (0x000458a5) list_ai_message_pane_t2_ParamLimits

0x6245,	// (0x000458a5) list_ai_message_pane_t2

0x625a,	// (0x000458ba) list_ai_message_pane_t3_ParamLimits

0x625a,	// (0x000458ba) list_ai_message_pane_t3

0x626f,	// (0x000458cf) list_ai_message_pane_t4_ParamLimits

0x626f,	// (0x000458cf) list_ai_message_pane_t4

0x0003,

0xf932,	// (0x0004ef92) list_ai_message_pane_t_ParamLimits

0xf932,	// (0x0004ef92) list_ai_message_pane_t

0xdb80,	// (0x0004d1e0) cell_ai_soft_ind_pane_ParamLimits

0xdb80,	// (0x0004d1e0) cell_ai_soft_ind_pane

0x47ed,	// (0x00043e4d) cell_ai_soft_ind_pane_g1_ParamLimits

0x47ed,	// (0x00043e4d) cell_ai_soft_ind_pane_g1

0x3142,	// (0x000427a2) grid_highlight_cp1

0x47fa,	// (0x00043e5a) text_secondary_cp56_ParamLimits

0x47fa,	// (0x00043e5a) text_secondary_cp56

0x61e0,	// (0x00045840) example_general_pane_ParamLimits

0x61e0,	// (0x00045840) example_general_pane

0x61ec,	// (0x0004584c) example_parent_pane_g1_ParamLimits

0x61ec,	// (0x0004584c) example_parent_pane_g1

0x61f8,	// (0x00045858) example_parent_pane_t1_ParamLimits

0x61f8,	// (0x00045858) example_parent_pane_t1

0xc471,	// (0x0004bad1) popup_preview_text_window_ParamLimits

0xc471,	// (0x0004bad1) popup_preview_text_window

0x4625,	// (0x00043c85) list_single_pane_cp2_g4

0x3553,	// (0x00042bb3) bg_popup_preview_window_pane_ParamLimits

0x3553,	// (0x00042bb3) bg_popup_preview_window_pane

0x5f17,	// (0x00045577) popup_preview_text_window_t1_ParamLimits

0x5f17,	// (0x00045577) popup_preview_text_window_t1

0x5f35,	// (0x00045595) popup_preview_text_window_t2_ParamLimits

0x5f35,	// (0x00045595) popup_preview_text_window_t2

0x5f7e,	// (0x000455de) popup_preview_text_window_t3_ParamLimits

0x5f7e,	// (0x000455de) popup_preview_text_window_t3

0x5fc3,	// (0x00045623) popup_preview_text_window_t4_ParamLimits

0x5fc3,	// (0x00045623) popup_preview_text_window_t4

0x0004,

0xf901,	// (0x0004ef61) popup_preview_text_window_t_ParamLimits

0xf901,	// (0x0004ef61) popup_preview_text_window_t

0x6041,	// (0x000456a1) scroll_pane_cp11

0x4f35,	// (0x00044595) bg_popup_preview_window_pane_g1

0x5ed7,	// (0x00045537) bg_popup_preview_window_pane_g2

0x5edf,	// (0x0004553f) bg_popup_preview_window_pane_g3

0x5ee7,	// (0x00045547) bg_popup_preview_window_pane_g4

0x5eef,	// (0x0004554f) bg_popup_preview_window_pane_g5

0x5ef7,	// (0x00045557) bg_popup_preview_window_pane_g6

0x5eff,	// (0x0004555f) bg_popup_preview_window_pane_g7

0x5f07,	// (0x00045567) bg_popup_preview_window_pane_g8

0x0df1,	// (0x00040451) aid_popup_width_pane

0xc3ed,	// (0x0004ba4d) popup_midp_note_alarm_window_ParamLimits

0xc3ed,	// (0x0004ba4d) popup_midp_note_alarm_window

0x3a82,	// (0x000430e2) data_form_pane_ParamLimits

0xb936,	// (0x0004af96) form_field_data_pane_g1

0xb940,	// (0x0004afa0) form_field_data_pane_t1_ParamLimits

0x3a8e,	// (0x000430ee) input_focus_pane_ParamLimits

0x3a9c,	// (0x000430fc) data_form_wide_pane_ParamLimits

0x0586,	// (0x0003fbe6) form_field_data_wide_pane_g1

0x0592,	// (0x0003fbf2) form_field_data_wide_pane_t1_ParamLimits

0x37ff,	// (0x00042e5f) input_focus_pane_cp6_ParamLimits

0xd1ad,	// (0x0004c80d) input_popup_find_pane_g1_ParamLimits

0xd1ad,	// (0x0004c80d) input_popup_find_pane_g1

0x13d7,	// (0x00040a37) aid_navi_side_left_pane

0x13ec,	// (0x00040a4c) aid_navi_side_right_pane

0x58ff,	// (0x00044f5f) bg_popup_window_pane_cp30_ParamLimits

0x58ff,	// (0x00044f5f) bg_popup_window_pane_cp30

0x5979,	// (0x00044fd9) popup_midp_note_alarm_window_g1_ParamLimits

0x5979,	// (0x00044fd9) popup_midp_note_alarm_window_g1

0x59a9,	// (0x00045009) popup_midp_note_alarm_window_t1_ParamLimits

0x59a9,	// (0x00045009) popup_midp_note_alarm_window_t1

0x5a4a,	// (0x000450aa) popup_midp_note_alarm_window_t2_ParamLimits

0x5a4a,	// (0x000450aa) popup_midp_note_alarm_window_t2

0x5af8,	// (0x00045158) popup_midp_note_alarm_window_t3_ParamLimits

0x5af8,	// (0x00045158) popup_midp_note_alarm_window_t3

0x5b2a,	// (0x0004518a) popup_midp_note_alarm_window_t4_ParamLimits

0x5b2a,	// (0x0004518a) popup_midp_note_alarm_window_t4

0x5b50,	// (0x000451b0) popup_midp_note_alarm_window_t5_ParamLimits

0x5b50,	// (0x000451b0) popup_midp_note_alarm_window_t5

0x000a,

0xf89e,	// (0x0004eefe) popup_midp_note_alarm_window_t_ParamLimits

0xf89e,	// (0x0004eefe) popup_midp_note_alarm_window_t

0x5bfc,	// (0x0004525c) wait_bar_pane_cp1_ParamLimits

0x5bfc,	// (0x0004525c) wait_bar_pane_cp1

0x3142,	// (0x000427a2) wait_anim_pane_copy1

0x3142,	// (0x000427a2) wait_border_pane_copy1

0x55c0,	// (0x00044c20) wait_border_pane_g1_copy1

0x05ac,	// (0x0003fc0c) form_field_popup_pane_g1

0xb95a,	// (0x0004afba) form_field_popup_pane_t1_ParamLimits

0x3a8e,	// (0x000430ee) input_focus_pane_cp7_ParamLimits

0x3ac8,	// (0x00043128) list_form_pane_ParamLimits

0x05cc,	// (0x0003fc2c) form_field_popup_wide_pane_g1

0x05d4,	// (0x0003fc34) form_field_popup_wide_pane_t1_ParamLimits

0x3a8e,	// (0x000430ee) input_focus_pane_cp8_ParamLimits

0x3ad4,	// (0x00043134) list_form_wide_pane_ParamLimits

0x66f3,	// (0x00045d53) aid_size_cell_graphic_pane

0xb9d9,	// (0x0004b039) data_form_pane_t1_ParamLimits

0xbafb,	// (0x0004b15b) data_form_wide_pane_t1_ParamLimits

0xd60e,	// (0x0004cc6e) bg_status_flat_pane

0xbe66,	// (0x0004b4c6) title_pane_t1_ParamLimits

0x31ea,	// (0x0004284a) title_pane_t2_ParamLimits

0x3210,	// (0x00042870) title_pane_t3_ParamLimits

0xf55d,	// (0x0004ebbd) title_pane_t_ParamLimits

0x4093,	// (0x000436f3) level_1_signal_ParamLimits

0x40a0,	// (0x00043700) level_2_signal_ParamLimits

0x40ad,	// (0x0004370d) level_3_signal_ParamLimits

0x40ba,	// (0x0004371a) level_4_signal_ParamLimits

0x40c7,	// (0x00043727) level_5_signal_ParamLimits

0x40d4,	// (0x00043734) level_6_signal_ParamLimits

0x40e1,	// (0x00043741) level_7_signal_ParamLimits

0x4093,	// (0x000436f3) level_1_battery_ParamLimits

0x40a0,	// (0x00043700) level_2_battery_ParamLimits

0x40ad,	// (0x0004370d) level_3_battery_ParamLimits

0x40ba,	// (0x0004371a) level_4_battery_ParamLimits

0x40c7,	// (0x00043727) level_5_battery_ParamLimits

0x40d4,	// (0x00043734) level_6_battery_ParamLimits

0x40e1,	// (0x00043741) level_7_battery_ParamLimits

0x5804,	// (0x00044e64) bg_status_flat_pane_g1

0x580c,	// (0x00044e6c) bg_status_flat_pane_g2

0x5814,	// (0x00044e74) bg_status_flat_pane_g3

0x581c,	// (0x00044e7c) bg_status_flat_pane_g4

0x5824,	// (0x00044e84) bg_status_flat_pane_g5

0x582c,	// (0x00044e8c) bg_status_flat_pane_g6

0x5834,	// (0x00044e94) bg_status_flat_pane_g7

0xce9e,	// (0x0004c4fe) tabs_3_active_pane_t1_ParamLimits

0xce9e,	// (0x0004c4fe) tabs_3_passive_pane_t1_ParamLimits

0xceb8,	// (0x0004c518) tabs_4_active_pane_t1_ParamLimits

0xceb8,	// (0x0004c518) tabs_4_1_passive_pane_t1_ParamLimits

0xd1c3,	// (0x0004c823) tabs_2_active_pane_t1_ParamLimits

0xd1c3,	// (0x0004c823) tabs_2_passive_pane_t1_ParamLimits

0x3222,	// (0x00042882) bg_active_tab_pane_cp4_ParamLimits

0xd1d5,	// (0x0004c835) tabs_2_long_active_pane_t1_ParamLimits

0x4a34,	// (0x00044094) bg_passive_tab_pane_cp4_ParamLimits

0x1f08,	// (0x00041568) list_single_midp_graphic_pane_t1_ParamLimits

0x3222,	// (0x00042882) bg_active_tab_pane_cp5_ParamLimits

0xd1e8,	// (0x0004c848) tabs_3_long_active_pane_t1_ParamLimits

0x4a34,	// (0x00044094) bg_passive_tab_pane_cp5_ParamLimits

0x1f08,	// (0x00041568) list_single_midp_graphic_pane_t1

0xd60e,	// (0x0004cc6e) bg_status_flat_pane_ParamLimits

0x4bca,	// (0x0004422a) indicator_pane_cp2_ParamLimits

0x4bca,	// (0x0004422a) indicator_pane_cp2

0xd786,	// (0x0004cde6) navi_pane_srt_ParamLimits

0xd786,	// (0x0004cde6) navi_pane_srt

0x4d13,	// (0x00044373) popup_clock_digital_analogue_window_cp1

0x32ff,	// (0x0004295f) indicator_pane_t1

0x46f4,	// (0x00043d54) copy_highlight_pane

0x46f4,	// (0x00043d54) cursor_graphics_pane

0x46f4,	// (0x00043d54) graphic_within_text_pane

0x46f4,	// (0x00043d54) link_highlight_pane

0x6004,	// (0x00045664) popup_preview_text_window_t5_ParamLimits

0x6004,	// (0x00045664) popup_preview_text_window_t5

0x4814,	// (0x00043e74) cursor_digital_pane

0x4814,	// (0x00043e74) cursor_primary_pane

0x4825,	// (0x00043e85) cursor_primary_small_pane

0x482d,	// (0x00043e8d) cursor_secondary_pane

0x4835,	// (0x00043e95) cursor_title_pane

0x4814,	// (0x00043e74) link_highlight_digital_pane

0x481c,	// (0x00043e7c) link_highlight_primary_pane

0x4825,	// (0x00043e85) link_highlight_primary_small_pane

0x482d,	// (0x00043e8d) link_highlight_secondary_pane

0x4835,	// (0x00043e95) link_highlight_title_pane

0x4814,	// (0x00043e74) copy_highlight_digital_pane

0x4814,	// (0x00043e74) copy_highlight_primary_pane

0x4825,	// (0x00043e85) copy_highlight_primary_small_pane

0x482d,	// (0x00043e8d) copy_highlight_secondary_pane

0x4835,	// (0x00043e95) copy_highlight_title_pane

0x482d,	// (0x00043e8d) graphic_text_digital_pane

0x58a2,	// (0x00044f02) graphic_text_primary_pane

0x58ab,	// (0x00044f0b) graphic_text_primary_small_pane

0x4825,	// (0x00043e85) graphic_text_secondary_pane

0x4814,	// (0x00043e74) graphic_text_title_pane

0xd4e5,	// (0x0004cb45) cursor_primary_pane_g1

0x5894,	// (0x00044ef4) cursor_text_primary_t1

0xda12,	// (0x0004d072) cursor_primary_small_pane_g1

0x5886,	// (0x00044ee6) cursor_text_primary_small_t1

0xda08,	// (0x0004d068) cursor_primary_small_pane_g1_copy1

0x586e,	// (0x00044ece) cursor_text_primary_small_t1_copy1

0x584c,	// (0x00044eac) cursor_text_title_t1

0xd9fe,	// (0x0004d05e) cursor_title_pane_g1

0xd4e5,	// (0x0004cb45) cursor_digital_pane_g1

0x4847,	// (0x00043ea7) cursor_text_digital_t1

0x486c,	// (0x00043ecc) link_highlight_primary_pane_g1

0x57f5,	// (0x00044e55) link_highlight_primary_pane_t1

0x4855,	// (0x00043eb5) link_highlight_primary_small_pane_g1

0x485d,	// (0x00043ebd) link_highlight_primary_small_pane_t1

0x486c,	// (0x00043ecc) link_highlight_secondary_pane_g1

0x4874,	// (0x00043ed4) link_highlight_secondary_pane_t1

0x5769,	// (0x00044dc9) link_highlight_title_pane_g1

0x5771,	// (0x00044dd1) link_highlight_title_pane_t1

0x5752,	// (0x00044db2) link_highlight_digital_pane_g1

0x575a,	// (0x00044dba) link_highlight_digital_pane_t1

0x5605,	// (0x00044c65) copy_highlight_primary_pane_g1

0x560d,	// (0x00044c6d) copy_highlight_primary_pane_t1

0x55df,	// (0x00044c3f) copy_highlight_primary_small_pane_g1

0x55f6,	// (0x00044c56) copy_highlight_primary_small_pane_t1

0x4883,	// (0x00043ee3) copy_highlight_secondary_pane_g1

0x488b,	// (0x00043eeb) copy_highlight_secondary_pane_t1

0x55df,	// (0x00044c3f) copy_highlight_title_pane_g1

0x55e7,	// (0x00044c47) copy_highlight_title_pane_t1

0x5605,	// (0x00044c65) copy_highlight_digital_pane_g1

0x68bd,	// (0x00045f1d) copy_highlight_digital_pane_t1

0x6811,	// (0x00045e71) graphic_text_primary_pane_g1

0x68a1,	// (0x00045f01) graphic_text_primary_pane_t1

0x68af,	// (0x00045f0f) graphic_text_primary_pane_t2

0x0001,

0xf9cd,	// (0x0004f02d) graphic_text_primary_pane_t

0x687d,	// (0x00045edd) graphic_text_primary_small_pane_g1

0x6885,	// (0x00045ee5) graphic_text_primary_small_pane_t1

0x6893,	// (0x00045ef3) graphic_text_primary_small_pane_t2

0x0001,

0xf9c8,	// (0x0004f028) graphic_text_primary_small_pane_t

0x6859,	// (0x00045eb9) graphic_text_secondary_pane_g1

0x6861,	// (0x00045ec1) graphic_text_secondary_pane_t1

0x686f,	// (0x00045ecf) graphic_text_secondary_pane_t2

0x0001,

0xf9c3,	// (0x0004f023) graphic_text_secondary_pane_t

0x6835,	// (0x00045e95) graphic_text_title_pane_g1

0x683d,	// (0x00045e9d) graphic_text_title_pane_t1

0x684b,	// (0x00045eab) graphic_text_title_pane_t2

0x0001,

0xf9be,	// (0x0004f01e) graphic_text_title_pane_t

0x6811,	// (0x00045e71) graphic_text_digital_pane_g1

0x6819,	// (0x00045e79) graphic_text_digital_pane_t1

0x6827,	// (0x00045e87) graphic_text_digital_pane_t2

0x0001,

0xf9b9,	// (0x0004f019) graphic_text_digital_pane_t

0x3222,	// (0x00042882) navi_icon_pane_srt_ParamLimits

0x3222,	// (0x00042882) navi_icon_pane_srt

0x3142,	// (0x000427a2) navi_midp_pane_srt

0x3142,	// (0x000427a2) navi_navi_pane_srt

0x3222,	// (0x00042882) navi_text_pane_srt_ParamLimits

0x3222,	// (0x00042882) navi_text_pane_srt

0x67dc,	// (0x00045e3c) navi_navi_icon_text_pane_srt

0x67e4,	// (0x00045e44) navi_navi_pane_srt_g1_ParamLimits

0x67e4,	// (0x00045e44) navi_navi_pane_srt_g1

0x67f6,	// (0x00045e56) navi_navi_pane_srt_g2_ParamLimits

0x67f6,	// (0x00045e56) navi_navi_pane_srt_g2

0x0001,

0xf9b4,	// (0x0004f014) navi_navi_pane_srt_g_ParamLimits

0xf9b4,	// (0x0004f014) navi_navi_pane_srt_g

0x6808,	// (0x00045e68) navi_navi_tabs_pane_srt

0x67dc,	// (0x00045e3c) navi_navi_text_pane_srt

0x67dc,	// (0x00045e3c) navi_navi_volume_pane_srt

0x67cd,	// (0x00045e2d) navi_navi_text_pane_srt_t1

0x22e4,	// (0x00041944) navi_navi_volume_pane_srt_g1

0x22ec,	// (0x0004194c) volume_small_pane_srt_ParamLimits

0x22ec,	// (0x0004194c) volume_small_pane_srt

0x16b7,	// (0x00040d17) volume_small_pane_srt_g1_ParamLimits

0x16b7,	// (0x00040d17) volume_small_pane_srt_g1

0x16c7,	// (0x00040d27) volume_small_pane_srt_g2_ParamLimits

0x16c7,	// (0x00040d27) volume_small_pane_srt_g2

0x16d8,	// (0x00040d38) volume_small_pane_srt_g3_ParamLimits

0x16d8,	// (0x00040d38) volume_small_pane_srt_g3

0x16e9,	// (0x00040d49) volume_small_pane_srt_g4_ParamLimits

0x16e9,	// (0x00040d49) volume_small_pane_srt_g4

0x16fa,	// (0x00040d5a) volume_small_pane_srt_g5_ParamLimits

0x16fa,	// (0x00040d5a) volume_small_pane_srt_g5

0x170b,	// (0x00040d6b) volume_small_pane_srt_g6_ParamLimits

0x170b,	// (0x00040d6b) volume_small_pane_srt_g6

0x171c,	// (0x00040d7c) volume_small_pane_srt_g7_ParamLimits

0x171c,	// (0x00040d7c) volume_small_pane_srt_g7

0x172d,	// (0x00040d8d) volume_small_pane_srt_g8_ParamLimits

0x172d,	// (0x00040d8d) volume_small_pane_srt_g8

0x173e,	// (0x00040d9e) volume_small_pane_srt_g9_ParamLimits

0x173e,	// (0x00040d9e) volume_small_pane_srt_g9

0x174f,	// (0x00040daf) volume_small_pane_srt_g10_ParamLimits

0x174f,	// (0x00040daf) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0004edc8) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0004edc8) volume_small_pane_srt_g

0x35fc,	// (0x00042c5c) query_popup_data_pane_cp2

0x67b3,	// (0x00045e13) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x67b3,	// (0x00045e13) navi_navi_icon_text_pane_srt_t1

0x58a2,	// (0x00044f02) navi_tabs_2_long_pane_srt

0x58a2,	// (0x00044f02) navi_tabs_2_pane_srt

0x58a2,	// (0x00044f02) navi_tabs_3_long_pane_srt

0x58a2,	// (0x00044f02) navi_tabs_3_pane_srt

0x58a2,	// (0x00044f02) navi_tabs_4_pane_srt

0x22c4,	// (0x00041924) tabs_2_active_pane_srt_ParamLimits

0x22c4,	// (0x00041924) tabs_2_active_pane_srt

0x22d4,	// (0x00041934) tabs_2_passive_pane_srt_ParamLimits

0x22d4,	// (0x00041934) tabs_2_passive_pane_srt

0x5039,	// (0x00044699) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5039,	// (0x00044699) bg_passive_tab_pane_cp1_srt

0x677f,	// (0x00045ddf) bg_passive_tab_pane_g1_cp1_srt

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp1_srt

0x6788,	// (0x00045de8) bg_passive_tab_pane_g3_cp1_srt

0x349d,	// (0x00042afd) bg_active_tab_pane_cp1_srt_ParamLimits

0x349d,	// (0x00042afd) bg_active_tab_pane_cp1_srt

0x6791,	// (0x00045df1) tabs_2_active_pane_srt_g1

0xde0a,	// (0x0004d46a) tabs_2_active_pane_srt_t1_ParamLimits

0xde0a,	// (0x0004d46a) tabs_2_active_pane_srt_t1

0x677f,	// (0x00045ddf) bg_active_tab_pane_g1_cp1_srt

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp1_srt

0x6788,	// (0x00045de8) bg_active_tab_pane_g3_cp1_srt

0x2291,	// (0x000418f1) tabs_3_active_pane_srt_ParamLimits

0x2291,	// (0x000418f1) tabs_3_active_pane_srt

0x22a2,	// (0x00041902) tabs_3_passive_pane_cp_srt_ParamLimits

0x22a2,	// (0x00041902) tabs_3_passive_pane_cp_srt

0x22b3,	// (0x00041913) tabs_3_passive_pane_srt_ParamLimits

0x22b3,	// (0x00041913) tabs_3_passive_pane_srt

0x5039,	// (0x00044699) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5039,	// (0x00044699) bg_passive_tab_pane_cp2_srt

0x489a,	// (0x00043efa) bg_passive_tab_pane_g1_cp2_srt

0x434d,	// (0x000439ad) bg_passive_tab_pane_g2_cp2_srt

0x48a3,	// (0x00043f03) bg_passive_tab_pane_g3_cp2_srt

0x349d,	// (0x00042afd) bg_active_tab_pane_cp2_srt_ParamLimits

0x349d,	// (0x00042afd) bg_active_tab_pane_cp2_srt

0x6765,	// (0x00045dc5) tabs_3_active_pane_srt_g1

0xddf4,	// (0x0004d454) tabs_3_active_pane_srt_t1_ParamLimits

0xddf4,	// (0x0004d454) tabs_3_active_pane_srt_t1

0x489a,	// (0x00043efa) bg_active_tab_pane_g1_cp2_srt

0x434d,	// (0x000439ad) bg_active_tab_pane_g2_cp2_srt

0x48a3,	// (0x00043f03) bg_active_tab_pane_g3_cp2_srt

0x2249,	// (0x000418a9) tabs_4_active_pane_srt_ParamLimits

0x2249,	// (0x000418a9) tabs_4_active_pane_srt

0x225b,	// (0x000418bb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x225b,	// (0x000418bb) tabs_4_passive_pane_cp2_srt

0x18b0,	// (0x00040f10) aid_size_cell_toolbar

0x6406,	// (0x00045a66) main_idle_act_pane_ParamLimits

0x1a63,	// (0x000410c3) popup_large_graphic_colour_window_ParamLimits

0xc6fd,	// (0x0004bd5d) popup_toolbar_window_ParamLimits

0xc6fd,	// (0x0004bd5d) popup_toolbar_window

0x65be,	// (0x00045c1e) list_single_graphic_2heading_pane_ParamLimits

0x65be,	// (0x00045c1e) list_single_graphic_2heading_pane

0x3e46,	// (0x000434a6) aid_size_cell_apps_grid_lsc_pane

0x3e58,	// (0x000434b8) aid_size_cell_apps_grid_prt_pane

0x4a34,	// (0x00044094) bg_wml_button_pane_cp1_ParamLimits

0x4a34,	// (0x00044094) bg_wml_button_pane_cp1

0xd9b4,	// (0x0004d014) form_midp_field_text_pane_t1_ParamLimits

0x5039,	// (0x00044699) input_focus_pane_cp050_ParamLimits

0x52a6,	// (0x00044906) list_midp_form_text_pane_ParamLimits

0x524c,	// (0x000448ac) input_focus_pane_cp051_ParamLimits

0x5260,	// (0x000448c0) list_midp_choice_pane_ParamLimits

0xd951,	// (0x0004cfb1) list_single_2graphic_pane_cp3_ParamLimits

0xd951,	// (0x0004cfb1) list_single_2graphic_pane_cp3

0xd964,	// (0x0004cfc4) list_single_midp_graphic_pane_ParamLimits

0xd964,	// (0x0004cfc4) list_single_midp_graphic_pane

0x07a4,	// (0x0003fe04) list_single_graphic_2heading_pane_g1_ParamLimits

0x07a4,	// (0x0003fe04) list_single_graphic_2heading_pane_g1

0x07b0,	// (0x0003fe10) list_single_graphic_2heading_pane_g4_ParamLimits

0x07b0,	// (0x0003fe10) list_single_graphic_2heading_pane_g4

0x07bc,	// (0x0003fe1c) list_single_graphic_2heading_pane_g5_ParamLimits

0x07bc,	// (0x0003fe1c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0004ee1b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0004ee1b) list_single_graphic_2heading_pane_g

0x07c8,	// (0x0003fe28) list_single_graphic_2heading_pane_t1_ParamLimits

0x07c8,	// (0x0003fe28) list_single_graphic_2heading_pane_t1

0x07dc,	// (0x0003fe3c) list_single_graphic_2heading_pane_t2_ParamLimits

0x07dc,	// (0x0003fe3c) list_single_graphic_2heading_pane_t2

0x07f8,	// (0x0003fe58) list_single_graphic_2heading_pane_t3_ParamLimits

0x07f8,	// (0x0003fe58) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0004ee22) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0004ee22) list_single_graphic_2heading_pane_t

0x4e67,	// (0x000444c7) bg_popup_sub_pane_cp2

0x4e91,	// (0x000444f1) grid_toobar_pane

0x1e77,	// (0x000414d7) cell_toolbar_pane_ParamLimits

0x1e77,	// (0x000414d7) cell_toolbar_pane

0x4ed9,	// (0x00044539) cell_toolbar_pane_g1_ParamLimits

0x4ed9,	// (0x00044539) cell_toolbar_pane_g1

0x4eed,	// (0x0004454d) cell_toolbar_pane_g2_ParamLimits

0x4eed,	// (0x0004454d) cell_toolbar_pane_g2

0x0001,

0xf7c9,	// (0x0004ee29) cell_toolbar_pane_g_ParamLimits

0xf7c9,	// (0x0004ee29) cell_toolbar_pane_g

0x4f0f,	// (0x0004456f) grid_highlight_pane_cp2_ParamLimits

0x4f0f,	// (0x0004456f) grid_highlight_pane_cp2

0x4f29,	// (0x00044589) toolbar_button_pane

0x4f35,	// (0x00044595) toolbar_button_pane_g1

0x4f3d,	// (0x0004459d) toolbar_button_pane_g2

0x4f45,	// (0x000445a5) toolbar_button_pane_g3

0x4f4d,	// (0x000445ad) toolbar_button_pane_g4

0x4f55,	// (0x000445b5) toolbar_button_pane_g5

0x4f5d,	// (0x000445bd) toolbar_button_pane_g6

0x4f65,	// (0x000445c5) toolbar_button_pane_g7

0x4f6d,	// (0x000445cd) toolbar_button_pane_g8

0x4f75,	// (0x000445d5) toolbar_button_pane_g9

0x0009,

0xf7ce,	// (0x0004ee2e) toolbar_button_pane_g

0x1ebb,	// (0x0004151b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1ebb,	// (0x0004151b) list_single_2graphic_pane_g1_cp3

0xc755,	// (0x0004bdb5) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc755,	// (0x0004bdb5) list_single_2graphic_pane_g2_cp3

0x1ed8,	// (0x00041538) list_single_2graphic_pane_g3_cp3

0x1ee0,	// (0x00041540) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1ee0,	// (0x00041540) list_single_2graphic_pane_g4_cp3

0x1eec,	// (0x0004154c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1eec,	// (0x0004154c) list_single_2graphic_pane_t1_cp3

0x4f7d,	// (0x000445dd) list_single_midp_graphic_pane_g2_ParamLimits

0x4f7d,	// (0x000445dd) list_single_midp_graphic_pane_g2

0x0794,	// (0x0003fdf4) aid_zoom_text_primary

0x18b8,	// (0x00040f18) aid_zoom_text_secondary

0x4957,	// (0x00043fb7) status_small_pane_g7_ParamLimits

0x4957,	// (0x00043fb7) status_small_pane_g7

0x497a,	// (0x00043fda) status_small_pane_t1_ParamLimits

0xbe42,	// (0x0004b4a2) title_pane_g2

0x0003,

0xf554,	// (0x0004ebb4) title_pane_g

0xd06e,	// (0x0004c6ce) aid_size_cell_colour_1_pane_ParamLimits

0xd06e,	// (0x0004c6ce) aid_size_cell_colour_1_pane

0xd082,	// (0x0004c6e2) aid_size_cell_colour_2_pane_ParamLimits

0xd082,	// (0x0004c6e2) aid_size_cell_colour_2_pane

0xd096,	// (0x0004c6f6) aid_size_cell_colour_3_pane_ParamLimits

0xd096,	// (0x0004c6f6) aid_size_cell_colour_3_pane

0xd0aa,	// (0x0004c70a) aid_size_cell_colour_4_pane_ParamLimits

0xd0aa,	// (0x0004c70a) aid_size_cell_colour_4_pane

0x1313,	// (0x00040973) title_pane_stacon_g1_ParamLimits

0x1313,	// (0x00040973) title_pane_stacon_g1

0x5689,	// (0x00044ce9) popup_note_wait_window_g3_ParamLimits

0x5689,	// (0x00044ce9) popup_note_wait_window_g3

0x56ff,	// (0x00044d5f) popup_note_wait_window_t5_ParamLimits

0x56ff,	// (0x00044d5f) popup_note_wait_window_t5

0x3142,	// (0x000427a2) main_feb_china_hwr_fs_writing_pane

0xc10b,	// (0x0004b76b) popup_feb_china_hwr_fs_window_ParamLimits

0xc10b,	// (0x0004b76b) popup_feb_china_hwr_fs_window

0xc766,	// (0x0004bdc6) aid_size_cell_hwr_fs_ParamLimits

0xc766,	// (0x0004bdc6) aid_size_cell_hwr_fs

0x5039,	// (0x00044699) bg_popup_sub_pane_cp3_ParamLimits

0x5039,	// (0x00044699) bg_popup_sub_pane_cp3

0xc77b,	// (0x0004bddb) grid_hwr_fs_pane_ParamLimits

0xc77b,	// (0x0004bddb) grid_hwr_fs_pane

0x1f4b,	// (0x000415ab) linegrid_hwr_fs_pane_ParamLimits

0x1f4b,	// (0x000415ab) linegrid_hwr_fs_pane

0xc793,	// (0x0004bdf3) cell_hwr_fs_pane_ParamLimits

0xc793,	// (0x0004bdf3) cell_hwr_fs_pane

0x5045,	// (0x000446a5) linegrid_hwr_fs_pane_g1_ParamLimits

0x5045,	// (0x000446a5) linegrid_hwr_fs_pane_g1

0xd925,	// (0x0004cf85) linegrid_hwr_fs_pane_g2_ParamLimits

0xd925,	// (0x0004cf85) linegrid_hwr_fs_pane_g2

0x5063,	// (0x000446c3) linegrid_hwr_fs_pane_g3_ParamLimits

0x5063,	// (0x000446c3) linegrid_hwr_fs_pane_g3

0x1f7d,	// (0x000415dd) linegrid_hwr_fs_pane_g4_ParamLimits

0x1f7d,	// (0x000415dd) linegrid_hwr_fs_pane_g4

0x1f97,	// (0x000415f7) linegrid_hwr_fs_pane_g5_ParamLimits

0x1f97,	// (0x000415f7) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f4,	// (0x0004ee54) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0004ee54) linegrid_hwr_fs_pane_g

0x506f,	// (0x000446cf) cell_hwr_fs_pane_g1_ParamLimits

0x506f,	// (0x000446cf) cell_hwr_fs_pane_g1

0x4da1,	// (0x00044401) cell_hwr_fs_pane_g2_ParamLimits

0x4da1,	// (0x00044401) cell_hwr_fs_pane_g2

0xd937,	// (0x0004cf97) cell_hwr_fs_pane_g3_ParamLimits

0xd937,	// (0x0004cf97) cell_hwr_fs_pane_g3

0xd944,	// (0x0004cfa4) cell_hwr_fs_pane_g4_ParamLimits

0xd944,	// (0x0004cfa4) cell_hwr_fs_pane_g4

0x0003,

0xf7ff,	// (0x0004ee5f) cell_hwr_fs_pane_g_ParamLimits

0xf7ff,	// (0x0004ee5f) cell_hwr_fs_pane_g

0xc7b9,	// (0x0004be19) cell_hwr_fs_pane_t1

0x3142,	// (0x000427a2) grid_highlight_pane_cp6

0x3142,	// (0x000427a2) main_idle_act2_pane

0x3bf1,	// (0x00043251) aid_inside_area_popup_secondary

0xda79,	// (0x0004d0d9) aid_inside_area_window_primary_ParamLimits

0xda79,	// (0x0004d0d9) aid_inside_area_window_primary

0x68cc,	// (0x00045f2c) ai2_news_ticker_pane

0x68d4,	// (0x00045f34) aid_size_cell_ai1_link_ParamLimits

0x68d4,	// (0x00045f34) aid_size_cell_ai1_link

0xde20,	// (0x0004d480) popup_ai2_data_window_ParamLimits

0xde20,	// (0x0004d480) popup_ai2_data_window

0x6904,	// (0x00045f64) popup_ai2_link_window_ParamLimits

0x6904,	// (0x00045f64) popup_ai2_link_window

0x5039,	// (0x00044699) bg_popup_sub_pane_cp4_ParamLimits

0x5039,	// (0x00044699) bg_popup_sub_pane_cp4

0x6918,	// (0x00045f78) grid_ai2_link_pane_ParamLimits

0x6918,	// (0x00045f78) grid_ai2_link_pane

0x692f,	// (0x00045f8f) popup_ai2_link_window_g1_ParamLimits

0x692f,	// (0x00045f8f) popup_ai2_link_window_g1

0x693b,	// (0x00045f9b) popup_ai2_link_window_g2_ParamLimits

0x693b,	// (0x00045f9b) popup_ai2_link_window_g2

0x0001,

0xf9d2,	// (0x0004f032) popup_ai2_link_window_g_ParamLimits

0xf9d2,	// (0x0004f032) popup_ai2_link_window_g

0x694a,	// (0x00045faa) ai2_mp_button_pane

0x6952,	// (0x00045fb2) ai2_mp_volume_pane

0x524c,	// (0x000448ac) bg_popup_sub_pane_cp5_ParamLimits

0x524c,	// (0x000448ac) bg_popup_sub_pane_cp5

0x695a,	// (0x00045fba) heading_ai2_gene_pane_ParamLimits

0x695a,	// (0x00045fba) heading_ai2_gene_pane

0x6966,	// (0x00045fc6) list_ai2_gene_pane_ParamLimits

0x6966,	// (0x00045fc6) list_ai2_gene_pane

0x69ae,	// (0x0004600e) cell_ai2_link_pane_ParamLimits

0x69ae,	// (0x0004600e) cell_ai2_link_pane

0x69c4,	// (0x00046024) cell_ai2_link_pane_g1

0x3142,	// (0x000427a2) grid_highlight_pane_cp7

0x2301,	// (0x00041961) ai2_mp_volume_pane_g1

0x6a94,	// (0x000460f4) ai2_mp_volume_pane_g2

0xde4a,	// (0x0004d4aa) list_ai2_gene_pane_t1

0x6a9c,	// (0x000460fc) ai2_mp_volume_pane_g3

0x0002,

0xf9eb,	// (0x0004f04b) ai2_mp_volume_pane_g

0x2309,	// (0x00041969) volume_small_pane_cp3

0x6aa4,	// (0x00046104) aid_size_cell_ai2_button

0x6aac,	// (0x0004610c) grid_ai2_button_pane

0x6ab5,	// (0x00046115) cell_ai2_button_pane_ParamLimits

0x6ab5,	// (0x00046115) cell_ai2_button_pane

0x3138,	// (0x00042798) cell_ai2_button_pane_g1

0x3142,	// (0x000427a2) grid_highlight_pane_cp8

0x6a54,	// (0x000460b4) ai2_gene_pane_t1_ParamLimits

0x6a54,	// (0x000460b4) ai2_gene_pane_t1

0xc095,	// (0x0004b6f5) aid_height_parent_landscape

0xdbce,	// (0x0004d22e) aid_height_set_list

0x6406,	// (0x00045a66) aid_size_parent

0x66f3,	// (0x00045d53) aid_size_cell_graphic_pane_ParamLimits

0x6976,	// (0x00045fd6) popup_ai2_data_window_g1_ParamLimits

0x6976,	// (0x00045fd6) popup_ai2_data_window_g1

0x6982,	// (0x00045fe2) ai2_news_ticker_pane_g1

0x698a,	// (0x00045fea) ai2_news_ticker_pane_g2

0x0001,

0xf9d7,	// (0x0004f037) ai2_news_ticker_pane_g

0x6992,	// (0x00045ff2) ai2_news_ticker_pane_t1

0x69a0,	// (0x00046000) ai2_news_ticker_pane_t2

0x0001,

0xf9dc,	// (0x0004f03c) ai2_news_ticker_pane_t

0x69cd,	// (0x0004602d) heading_ai2_gene_pane_g1

0x69d5,	// (0x00046035) heading_ai2_gene_pane_t1_ParamLimits

0x69d5,	// (0x00046035) heading_ai2_gene_pane_t1

0x69ea,	// (0x0004604a) list_highlight_pane_cp6

0xde34,	// (0x0004d494) ai2_gene_pane_ParamLimits

0xde34,	// (0x0004d494) ai2_gene_pane

0xde58,	// (0x0004d4b8) list_ai2_gene_pane_t2

0x0001,

0xf9e1,	// (0x0004f041) list_ai2_gene_pane_t

0x6a25,	// (0x00046085) list_highlight_pane_cp8_ParamLimits

0x6a25,	// (0x00046085) list_highlight_pane_cp8

0x6a36,	// (0x00046096) ai2_gene_pane_g1_ParamLimits

0x6a36,	// (0x00046096) ai2_gene_pane_g1

0x6a48,	// (0x000460a8) ai2_gene_pane_g2_ParamLimits

0x6a48,	// (0x000460a8) ai2_gene_pane_g2

0x0001,

0xf9e6,	// (0x0004f046) ai2_gene_pane_g_ParamLimits

0xf9e6,	// (0x0004f046) ai2_gene_pane_g

0x3a24,	// (0x00043084) scroll_pane_cp12

0xc054,	// (0x0004b6b4) control_pane_t3_ParamLimits

0xc054,	// (0x0004b6b4) control_pane_t3

0x496b,	// (0x00043fcb) status_small_pane_g8_ParamLimits

0x496b,	// (0x00043fcb) status_small_pane_g8

0xc1a0,	// (0x0004b800) popup_find_window_ParamLimits

0xc427,	// (0x0004ba87) popup_note_image_window_ParamLimits

0x0810,	// (0x0003fe70) list_double2_graphic_pane_vc_g1_ParamLimits

0x0810,	// (0x0003fe70) list_double2_graphic_pane_vc_g1

0x4ecd,	// (0x0004452d) list_double2_graphic_pane_vc_g2_ParamLimits

0x4ecd,	// (0x0004452d) list_double2_graphic_pane_vc_g2

0x1ea7,	// (0x00041507) list_double2_graphic_pane_vc_g3_ParamLimits

0x1ea7,	// (0x00041507) list_double2_graphic_pane_vc_g3

0x0002,

0xf620,	// (0x0004ec80) list_double2_graphic_pane_vc_g_ParamLimits

0xf620,	// (0x0004ec80) list_double2_graphic_pane_vc_g

0x081c,	// (0x0003fe7c) list_double2_graphic_pane_vc_t1_ParamLimits

0x081c,	// (0x0003fe7c) list_double2_graphic_pane_vc_t1

0x4ecd,	// (0x0004452d) list_single_heading_pane_vc_g1_ParamLimits

0x4ecd,	// (0x0004452d) list_single_heading_pane_vc_g1

0x1ea7,	// (0x00041507) list_single_heading_pane_vc_g2_ParamLimits

0x1ea7,	// (0x00041507) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004ec38) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004ec38) list_single_heading_pane_vc_g

0x0832,	// (0x0003fe92) list_single_heading_pane_vc_t1_ParamLimits

0x0832,	// (0x0003fe92) list_single_heading_pane_vc_t1

0x084a,	// (0x0003feaa) list_single_heading_pane_vc_t2_ParamLimits

0x084a,	// (0x0003feaa) list_single_heading_pane_vc_t2

0x0001,

0xf7e3,	// (0x0004ee43) list_single_heading_pane_vc_t_ParamLimits

0xf7e3,	// (0x0004ee43) list_single_heading_pane_vc_t

0x4f89,	// (0x000445e9) list_setting_number_pane_vc_g1_ParamLimits

0x4f89,	// (0x000445e9) list_setting_number_pane_vc_g1

0x4f95,	// (0x000445f5) list_setting_number_pane_vc_g2_ParamLimits

0x4f95,	// (0x000445f5) list_setting_number_pane_vc_g2

0x0001,

0xf7e8,	// (0x0004ee48) list_setting_number_pane_vc_g_ParamLimits

0xf7e8,	// (0x0004ee48) list_setting_number_pane_vc_g

0x4fa1,	// (0x00044601) list_setting_number_pane_vc_t1_ParamLimits

0x4fa1,	// (0x00044601) list_setting_number_pane_vc_t1

0x4fb5,	// (0x00044615) list_setting_number_pane_vc_t2_ParamLimits

0x4fb5,	// (0x00044615) list_setting_number_pane_vc_t2

0x4fd1,	// (0x00044631) list_setting_number_pane_vc_t3_ParamLimits

0x4fd1,	// (0x00044631) list_setting_number_pane_vc_t3

0x0002,

0xf7ed,	// (0x0004ee4d) list_setting_number_pane_vc_t_ParamLimits

0xf7ed,	// (0x0004ee4d) list_setting_number_pane_vc_t

0x4ffd,	// (0x0004465d) set_value_pane_vc_ParamLimits

0x4ffd,	// (0x0004465d) set_value_pane_vc

0x65be,	// (0x00045c1e) list_double2_graphic_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_double2_graphic_pane_vc

0x21a5,	// (0x00041805) list_double2_large_graphic_pane_vc_ParamLimits

0x21a5,	// (0x00041805) list_double2_large_graphic_pane_vc

0x65be,	// (0x00045c1e) list_double2_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_double2_pane_vc

0x65be,	// (0x00045c1e) list_double_graphic_heading_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_double_graphic_heading_pane_vc

0x65be,	// (0x00045c1e) list_double_graphic_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_double_graphic_pane_vc

0x65be,	// (0x00045c1e) list_double_heading_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_double_heading_pane_vc

0x21a5,	// (0x00041805) list_double_large_graphic_pane_vc_ParamLimits

0x21a5,	// (0x00041805) list_double_large_graphic_pane_vc

0x65be,	// (0x00045c1e) list_double_number_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_double_number_pane_vc

0x65be,	// (0x00045c1e) list_double_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_double_pane_vc

0x65be,	// (0x00045c1e) list_double_time_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_double_time_pane_vc

0x65be,	// (0x00045c1e) list_setting_number_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_setting_number_pane_vc

0x65be,	// (0x00045c1e) list_setting_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_setting_pane_vc

0x65be,	// (0x00045c1e) list_single_graphic_heading_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_single_graphic_heading_pane_vc

0x65be,	// (0x00045c1e) list_single_heading_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_single_heading_pane_vc

0x65be,	// (0x00045c1e) list_single_number_heading_pane_vc_ParamLimits

0x65be,	// (0x00045c1e) list_single_number_heading_pane_vc

0x0810,	// (0x0003fe70) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0810,	// (0x0003fe70) list_double_graphic_heading_pane_vc_g1

0x4ecd,	// (0x0004452d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4ecd,	// (0x0004452d) list_double_graphic_heading_pane_vc_g2

0x1ea7,	// (0x00041507) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1ea7,	// (0x00041507) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf620,	// (0x0004ec80) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf620,	// (0x0004ec80) list_double_graphic_heading_pane_vc_g

0x0939,	// (0x0003ff99) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0939,	// (0x0003ff99) list_double_graphic_heading_pane_vc_t1

0x0832,	// (0x0003fe92) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0832,	// (0x0003fe92) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f2,	// (0x0004f052) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f2,	// (0x0004f052) list_double_graphic_heading_pane_vc_t

0x4f89,	// (0x000445e9) list_setting_pane_vc_g1_ParamLimits

0x4f89,	// (0x000445e9) list_setting_pane_vc_g1

0x4f95,	// (0x000445f5) list_setting_pane_vc_g2_ParamLimits

0x4f95,	// (0x000445f5) list_setting_pane_vc_g2

0x0001,

0xf7e8,	// (0x0004ee48) list_setting_pane_vc_g_ParamLimits

0xf7e8,	// (0x0004ee48) list_setting_pane_vc_g

0x6cf5,	// (0x00046355) list_setting_pane_vc_t1_ParamLimits

0x6cf5,	// (0x00046355) list_setting_pane_vc_t1

0x6d11,	// (0x00046371) list_setting_pane_vc_t2_ParamLimits

0x6d11,	// (0x00046371) list_setting_pane_vc_t2

0x0001,

0xfa35,	// (0x0004f095) list_setting_pane_vc_t_ParamLimits

0xfa35,	// (0x0004f095) list_setting_pane_vc_t

0x4ffd,	// (0x0004465d) set_value_pane_cp_vc_ParamLimits

0x4ffd,	// (0x0004465d) set_value_pane_cp_vc

0x4ecd,	// (0x0004452d) list_single_number_heading_pane_vc_g1_ParamLimits

0x4ecd,	// (0x0004452d) list_single_number_heading_pane_vc_g1

0x1ea7,	// (0x00041507) list_single_number_heading_pane_vc_g2_ParamLimits

0x1ea7,	// (0x00041507) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004ec38) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004ec38) list_single_number_heading_pane_vc_g

0x0832,	// (0x0003fe92) list_single_number_heading_pane_vc_t1_ParamLimits

0x0832,	// (0x0003fe92) list_single_number_heading_pane_vc_t1

0x094d,	// (0x0003ffad) list_single_number_heading_pane_vc_t2_ParamLimits

0x094d,	// (0x0003ffad) list_single_number_heading_pane_vc_t2

0x0961,	// (0x0003ffc1) list_single_number_heading_pane_vc_t3_ParamLimits

0x0961,	// (0x0003ffc1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3a,	// (0x0004f09a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x0004f09a) list_single_number_heading_pane_vc_t

0x0810,	// (0x0003fe70) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0810,	// (0x0003fe70) list_single_graphic_heading_pane_vc_g1

0x4ecd,	// (0x0004452d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4ecd,	// (0x0004452d) list_single_graphic_heading_pane_vc_g4

0x1ea7,	// (0x00041507) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1ea7,	// (0x00041507) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf620,	// (0x0004ec80) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf620,	// (0x0004ec80) list_single_graphic_heading_pane_vc_g

0x0832,	// (0x0003fe92) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0832,	// (0x0003fe92) list_single_graphic_heading_pane_vc_t1

0x0973,	// (0x0003ffd3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0973,	// (0x0003ffd3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0004f0a1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0004f0a1) list_single_graphic_heading_pane_vc_t

0x4ecd,	// (0x0004452d) list_double2_pane_vc_g1_ParamLimits

0x4ecd,	// (0x0004452d) list_double2_pane_vc_g1

0x1ea7,	// (0x00041507) list_double2_pane_vc_g2_ParamLimits

0x1ea7,	// (0x00041507) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004ec38) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004ec38) list_double2_pane_vc_g

0x0987,	// (0x0003ffe7) list_double2_pane_vc_t1_ParamLimits

0x0987,	// (0x0003ffe7) list_double2_pane_vc_t1

0x2312,	// (0x00041972) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2312,	// (0x00041972) list_double2_large_graphic_pane_vc_g1

0x231e,	// (0x0004197e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x231e,	// (0x0004197e) list_double2_large_graphic_pane_vc_g2

0x232a,	// (0x0004198a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x232a,	// (0x0004198a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x0004ec50) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x0004ec50) list_double2_large_graphic_pane_vc_g

0x099d,	// (0x0003fffd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x099d,	// (0x0003fffd) list_double2_large_graphic_pane_vc_t1

0x2336,	// (0x00041996) list_double_time_pane_vc_g1_ParamLimits

0x2336,	// (0x00041996) list_double_time_pane_vc_g1

0x2342,	// (0x000419a2) list_double_time_pane_vc_g2_ParamLimits

0x2342,	// (0x000419a2) list_double_time_pane_vc_g2

0x0001,

0xfa46,	// (0x0004f0a6) list_double_time_pane_vc_g_ParamLimits

0xfa46,	// (0x0004f0a6) list_double_time_pane_vc_g

0x09b3,	// (0x00040013) list_double_time_pane_vc_t1_ParamLimits

0x09b3,	// (0x00040013) list_double_time_pane_vc_t1

0x09d7,	// (0x00040037) list_double_time_pane_vc_t2_ParamLimits

0x09d7,	// (0x00040037) list_double_time_pane_vc_t2

0x0a26,	// (0x00040086) list_double_time_pane_vc_t3_ParamLimits

0x0a26,	// (0x00040086) list_double_time_pane_vc_t3

0x0a38,	// (0x00040098) list_double_time_pane_vc_t4_ParamLimits

0x0a38,	// (0x00040098) list_double_time_pane_vc_t4

0x0003,

0xfa4b,	// (0x0004f0ab) list_double_time_pane_vc_t_ParamLimits

0xfa4b,	// (0x0004f0ab) list_double_time_pane_vc_t

0x4ecd,	// (0x0004452d) list_double_pane_vc_g1_ParamLimits

0x4ecd,	// (0x0004452d) list_double_pane_vc_g1

0x1ea7,	// (0x00041507) list_double_pane_vc_g2_ParamLimits

0x1ea7,	// (0x00041507) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004ec38) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004ec38) list_double_pane_vc_g

0x0a5d,	// (0x000400bd) list_double_pane_vc_t1_ParamLimits

0x0a5d,	// (0x000400bd) list_double_pane_vc_t1

0x0a71,	// (0x000400d1) list_double_pane_vc_t2_ParamLimits

0x0a71,	// (0x000400d1) list_double_pane_vc_t2

0x0001,

0xfa54,	// (0x0004f0b4) list_double_pane_vc_t_ParamLimits

0xfa54,	// (0x0004f0b4) list_double_pane_vc_t

0x4ecd,	// (0x0004452d) list_double_number_pane_vc_g1_ParamLimits

0x4ecd,	// (0x0004452d) list_double_number_pane_vc_g1

0x1ea7,	// (0x00041507) list_double_number_pane_vc_g2_ParamLimits

0x1ea7,	// (0x00041507) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004ec38) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004ec38) list_double_number_pane_vc_g

0x0a89,	// (0x000400e9) list_double_number_pane_vc_t1_ParamLimits

0x0a89,	// (0x000400e9) list_double_number_pane_vc_t1

0x0a9d,	// (0x000400fd) list_double_number_pane_vc_t2_ParamLimits

0x0a9d,	// (0x000400fd) list_double_number_pane_vc_t2

0x0a71,	// (0x000400d1) list_double_number_pane_vc_t3_ParamLimits

0x0a71,	// (0x000400d1) list_double_number_pane_vc_t3

0x0002,

0xfa59,	// (0x0004f0b9) list_double_number_pane_vc_t_ParamLimits

0xfa59,	// (0x0004f0b9) list_double_number_pane_vc_t

0x234e,	// (0x000419ae) list_double_large_graphic_pane_vc_g1_ParamLimits

0x234e,	// (0x000419ae) list_double_large_graphic_pane_vc_g1

0x235f,	// (0x000419bf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x235f,	// (0x000419bf) list_double_large_graphic_pane_vc_g2

0x232a,	// (0x0004198a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x232a,	// (0x0004198a) list_double_large_graphic_pane_vc_g3

0x0ab1,	// (0x00040111) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0ab1,	// (0x00040111) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa60,	// (0x0004f0c0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa60,	// (0x0004f0c0) list_double_large_graphic_pane_vc_g

0x0abd,	// (0x0004011d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0abd,	// (0x0004011d) list_double_large_graphic_pane_vc_t1

0x0ad6,	// (0x00040136) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0ad6,	// (0x00040136) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa69,	// (0x0004f0c9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa69,	// (0x0004f0c9) list_double_large_graphic_pane_vc_t

0x4ecd,	// (0x0004452d) list_double_heading_pane_vc_g1_ParamLimits

0x4ecd,	// (0x0004452d) list_double_heading_pane_vc_g1

0x1ea7,	// (0x00041507) list_double_heading_pane_vc_g2_ParamLimits

0x1ea7,	// (0x00041507) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004ec38) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004ec38) list_double_heading_pane_vc_g

0x0aef,	// (0x0004014f) list_double_heading_pane_vc_t1_ParamLimits

0x0aef,	// (0x0004014f) list_double_heading_pane_vc_t1

0x0832,	// (0x0003fe92) list_double_heading_pane_vc_t2_ParamLimits

0x0832,	// (0x0003fe92) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0004f0ce) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0004f0ce) list_double_heading_pane_vc_t

0x0810,	// (0x0003fe70) list_double_graphic_pane_vc_g1_ParamLimits

0x0810,	// (0x0003fe70) list_double_graphic_pane_vc_g1

0x236e,	// (0x000419ce) list_double_graphic_pane_vc_g2_ParamLimits

0x236e,	// (0x000419ce) list_double_graphic_pane_vc_g2

0x237d,	// (0x000419dd) list_double_graphic_pane_vc_g3_ParamLimits

0x237d,	// (0x000419dd) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0004f0d3) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0004f0d3) list_double_graphic_pane_vc_g

0x0b03,	// (0x00040163) list_double_graphic_pane_vc_t1_ParamLimits

0x0b03,	// (0x00040163) list_double_graphic_pane_vc_t1

0x0a71,	// (0x000400d1) list_double_graphic_pane_vc_t2_ParamLimits

0x0a71,	// (0x000400d1) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0004f0da) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0004f0da) list_double_graphic_pane_vc_t

0x0dfd,	// (0x0004045d) aid_size_cell_fastswap

0xbc8e,	// (0x0004b2ee) aid_size_cell_touch_ParamLimits

0xbc8e,	// (0x0004b2ee) aid_size_cell_touch

0x1060,	// (0x000406c0) popup_fast_swap_wide_window_ParamLimits

0x1060,	// (0x000406c0) popup_fast_swap_wide_window

0xbdd9,	// (0x0004b439) touch_pane_ParamLimits

0xbdd9,	// (0x0004b439) touch_pane

0x3a7a,	// (0x000430da) button_value_adjust_pane_cp2

0x04b0,	// (0x0003fb10) button_value_adjust_pane_cp4

0x04d4,	// (0x0003fb34) form_field_data_pane_cp2

0xb8fd,	// (0x0004af5d) form_field_data_wide_pane_cp2

0x3f11,	// (0x00043571) bg_scroll_pane_ParamLimits

0x1476,	// (0x00040ad6) scroll_handle_pane_ParamLimits

0x148a,	// (0x00040aea) scroll_sc2_down_pane_ParamLimits

0x148a,	// (0x00040aea) scroll_sc2_down_pane

0x3f42,	// (0x000435a2) scroll_sc2_up_pane_ParamLimits

0x3f42,	// (0x000435a2) scroll_sc2_up_pane

0xdf82,	// (0x0004d5e2) grid_wheel_folder_pane_g1_ParamLimits

0xdf82,	// (0x0004d5e2) grid_wheel_folder_pane_g1

0x164f,	// (0x00040caf) clock_nsta_pane_cp2_ParamLimits

0x164f,	// (0x00040caf) clock_nsta_pane_cp2

0x4a34,	// (0x00044094) listscroll_midp_pane_ParamLimits

0xd44e,	// (0x0004caae) midp_canvas_pane

0x49e6,	// (0x00044046) nsta_clock_indic_pane

0x4a1a,	// (0x0004407a) listscroll_form_pane_vc

0x4a22,	// (0x00044082) listscroll_set_pane_vc_ParamLimits

0x4a22,	// (0x00044082) listscroll_set_pane_vc

0xd636,	// (0x0004cc96) clock_nsta_pane

0xd660,	// (0x0004ccc0) indicator_nsta_pane

0x4e67,	// (0x000444c7) bg_popup_sub_pane_cp2_ParamLimits

0x4e7b,	// (0x000444db) find_pane_cp2_ParamLimits

0x4e7b,	// (0x000444db) find_pane_cp2

0x4e91,	// (0x000444f1) grid_toobar_pane_ParamLimits

0x500d,	// (0x0004466d) list_form_gen_pane_vc_ParamLimits

0x500d,	// (0x0004466d) list_form_gen_pane_vc

0x5023,	// (0x00044683) scroll_pane_cp8_vc_ParamLimits

0x5023,	// (0x00044683) scroll_pane_cp8_vc

0x509f,	// (0x000446ff) data_form_wide_pane_vc_ParamLimits

0x509f,	// (0x000446ff) data_form_wide_pane_vc

0x50ab,	// (0x0004470b) form_field_data_wide_pane_vc_g1

0x50b3,	// (0x00044713) form_field_data_wide_pane_vc_t1_ParamLimits

0x50b3,	// (0x00044713) form_field_data_wide_pane_vc_t1

0x3a8e,	// (0x000430ee) input_focus_pane_cp6_vc_ParamLimits

0x3a8e,	// (0x000430ee) input_focus_pane_cp6_vc

0xd9d6,	// (0x0004d036) list_midp_pane_ParamLimits

0x6759,	// (0x00045db9) scroll_pane_cp16_ParamLimits

0x6759,	// (0x00045db9) scroll_pane_cp16

0x5439,	// (0x00044a99) button_value_adjust_pane_ParamLimits

0x5439,	// (0x00044a99) button_value_adjust_pane

0xdbdf,	// (0x0004d23f) button_value_adjust_pane_cp6_ParamLimits

0xdbdf,	// (0x0004d23f) button_value_adjust_pane_cp6

0xdcf9,	// (0x0004d359) settings_code_pane_cp_ParamLimits

0xdcf9,	// (0x0004d359) settings_code_pane_cp

0x3138,	// (0x00042798) cell_touch_pane_g1

0x3138,	// (0x00042798) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0004ed6e) cell_touch_pane_g

0xde66,	// (0x0004d4c6) cell_touch_pane_cp_ParamLimits

0xde66,	// (0x0004d4c6) cell_touch_pane_cp

0xde82,	// (0x0004d4e2) cell_touch_pane_ParamLimits

0xde82,	// (0x0004d4e2) cell_touch_pane

0x3138,	// (0x00042798) scroll_sc2_down_pane_g1

0x3138,	// (0x00042798) scroll_sc2_up_pane_g1

0x3142,	// (0x000427a2) bg_set_opt_pane_cp4_vc

0x6ae9,	// (0x00046149) list_set_graphic_pane_vc_g1_ParamLimits

0x6ae9,	// (0x00046149) list_set_graphic_pane_vc_g1

0x6af5,	// (0x00046155) list_set_graphic_pane_vc_g2_ParamLimits

0x6af5,	// (0x00046155) list_set_graphic_pane_vc_g2

0x0001,

0xf9f7,	// (0x0004f057) list_set_graphic_pane_vc_g_ParamLimits

0xf9f7,	// (0x0004f057) list_set_graphic_pane_vc_g

0x6b01,	// (0x00046161) text_primary_small_cp13_vc_ParamLimits

0x6b01,	// (0x00046161) text_primary_small_cp13_vc

0x6b19,	// (0x00046179) list_set_graphic_pane_vc_ParamLimits

0x6b19,	// (0x00046179) list_set_graphic_pane_vc

0x3142,	// (0x000427a2) input_focus_pane_cp2_vc

0x3138,	// (0x00042798) setting_code_pane_vc_g1

0x326d,	// (0x000428cd) setting_code_pane_vc_t1

0x6b2b,	// (0x0004618b) set_text_pane_vc_t1_ParamLimits

0x6b2b,	// (0x0004618b) set_text_pane_vc_t1

0x3142,	// (0x000427a2) input_focus_pane_cp1_vc

0x6b46,	// (0x000461a6) list_set_text_pane_vc

0x3138,	// (0x00042798) setting_text_pane_vc_g1

0x3142,	// (0x000427a2) bg_set_opt_pane_cp2_vc

0x3264,	// (0x000428c4) setting_slider_graphic_pane_vc_g1

0x6b50,	// (0x000461b0) setting_slider_graphic_pane_vc_t1

0x6b60,	// (0x000461c0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fc,	// (0x0004f05c) setting_slider_graphic_pane_vc_t

0x6b70,	// (0x000461d0) slider_set_pane_cp_vc

0x6b78,	// (0x000461d8) slider_set_pane_vc_g1

0x6b81,	// (0x000461e1) slider_set_pane_vc_g2

0x0006,

0xfa01,	// (0x0004f061) slider_set_pane_vc_g

0x3af5,	// (0x00043155) set_opt_bg_pane_g1_copy1

0x3afd,	// (0x0004315d) set_opt_bg_pane_g2_copy1

0x6bad,	// (0x0004620d) set_opt_bg_pane_g3_copy1

0x3b0d,	// (0x0004316d) set_opt_bg_pane_g4_copy1

0x3b15,	// (0x00043175) set_opt_bg_pane_g5_copy1

0x3b1d,	// (0x0004317d) set_opt_bg_pane_g6_copy1

0x6bb7,	// (0x00046217) set_opt_bg_pane_g7_copy1

0x6bbf,	// (0x0004621f) set_opt_bg_pane_g8_copy1

0x6bc9,	// (0x00046229) set_opt_bg_pane_g9_copy1

0x3142,	// (0x000427a2) bg_set_opt_pane_cp_vc

0x6bd3,	// (0x00046233) setting_slider_pane_vc_t1

0x6be2,	// (0x00046242) setting_slider_pane_vc_t2

0x6bf2,	// (0x00046252) setting_slider_pane_vc_t3

0x0002,

0xfa10,	// (0x0004f070) setting_slider_pane_vc_t

0x6c02,	// (0x00046262) slider_set_pane_vc

0x1fbb,	// (0x0004161b) volume_set_pane_vc_g1

0x1fc4,	// (0x00041624) volume_set_pane_vc_g2

0x1fcd,	// (0x0004162d) volume_set_pane_vc_g3

0x1fd6,	// (0x00041636) volume_set_pane_vc_g4

0x1fdf,	// (0x0004163f) volume_set_pane_vc_g5

0x1fe8,	// (0x00041648) volume_set_pane_vc_g6

0x1ff1,	// (0x00041651) volume_set_pane_vc_g7

0x1ffa,	// (0x0004165a) volume_set_pane_vc_g8

0x2003,	// (0x00041663) volume_set_pane_vc_g9

0x200c,	// (0x0004166c) volume_set_pane_vc_g10

0x0009,

0xfa17,	// (0x0004f077) volume_set_pane_vc_g

0x6c0a,	// (0x0004626a) volume_set_pane_vc

0x6c12,	// (0x00046272) button_value_adjust_pane_cp1_vc

0x6c1c,	// (0x0004627c) list_highlight_pane_cp2_vc

0x6c25,	// (0x00046285) list_set_pane_vc_ParamLimits

0x6c25,	// (0x00046285) list_set_pane_vc

0x6c83,	// (0x000462e3) main_pane_set_vc_t1_ParamLimits

0x6c83,	// (0x000462e3) main_pane_set_vc_t1

0x6c98,	// (0x000462f8) main_pane_set_vc_t2_ParamLimits

0x6c98,	// (0x000462f8) main_pane_set_vc_t2

0x6caa,	// (0x0004630a) main_pane_set_vc_t3_ParamLimits

0x6caa,	// (0x0004630a) main_pane_set_vc_t3

0x6cbe,	// (0x0004631e) main_pane_set_vc_t4_ParamLimits

0x6cbe,	// (0x0004631e) main_pane_set_vc_t4

0x0003,

0xfa2c,	// (0x0004f08c) main_pane_set_vc_t_ParamLimits

0xfa2c,	// (0x0004f08c) main_pane_set_vc_t

0x6cd2,	// (0x00046332) setting_code_pane_vc_ParamLimits

0x6cd2,	// (0x00046332) setting_code_pane_vc

0x6ce3,	// (0x00046343) setting_slider_graphic_pane_vc

0x6ce3,	// (0x00046343) setting_slider_pane_vc

0x6ce3,	// (0x00046343) setting_text_pane_vc

0x6ce3,	// (0x00046343) setting_volume_pane_vc

0x6ced,	// (0x0004634d) scroll_pane_cp121_vc

0x3a68,	// (0x000430c8) set_content_pane_vc

0x6d2d,	// (0x0004638d) button_value_adjust_pane_g1

0x6d36,	// (0x00046396) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0004f0df) button_value_adjust_pane_g

0x6d3f,	// (0x0004639f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d3f,	// (0x0004639f) form_field_slider_wide_pane_vc_t1

0x6d53,	// (0x000463b3) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d53,	// (0x000463b3) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0004f0e4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0004f0e4) form_field_slider_wide_pane_vc_t

0x349d,	// (0x00042afd) input_focus_pane_cp10_vc_ParamLimits

0x349d,	// (0x00042afd) input_focus_pane_cp10_vc

0x6d81,	// (0x000463e1) slider_cont_pane_cp1_vc_ParamLimits

0x6d81,	// (0x000463e1) slider_cont_pane_cp1_vc

0x6d93,	// (0x000463f3) slider_form_pane_g1_cp2

0x6b81,	// (0x000461e1) slider_form_pane_g2_cp2

0x6dc0,	// (0x00046420) form_field_slider_pane_vc_t3

0x6dce,	// (0x0004642e) form_field_slider_pane_vc_t4

0x6ddc,	// (0x0004643c) slider_form_pane_vc_ParamLimits

0x6ddc,	// (0x0004643c) slider_form_pane_vc

0x6de9,	// (0x00046449) form_field_slider_pane_vc_t1_ParamLimits

0x6de9,	// (0x00046449) form_field_slider_pane_vc_t1

0x6d53,	// (0x000463b3) form_field_slider_pane_vc_t2_ParamLimits

0x6d53,	// (0x000463b3) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0004f0f6) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0004f0f6) form_field_slider_pane_vc_t

0x349d,	// (0x00042afd) input_focus_pane_cp9_vc_ParamLimits

0x349d,	// (0x00042afd) input_focus_pane_cp9_vc

0x6e05,	// (0x00046465) slider_cont_pane_vc_ParamLimits

0x6e05,	// (0x00046465) slider_cont_pane_vc

0x6e19,	// (0x00046479) list_form_graphic_pane_cp_vc_ParamLimits

0x6e19,	// (0x00046479) list_form_graphic_pane_cp_vc

0x50ab,	// (0x0004470b) form_field_popup_wide_pane_vc_g1

0x6e2e,	// (0x0004648e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e2e,	// (0x0004648e) form_field_popup_wide_pane_vc_t1

0x3a8e,	// (0x000430ee) input_focus_pane_cp8_vc_ParamLimits

0x3a8e,	// (0x000430ee) input_focus_pane_cp8_vc

0x6e73,	// (0x000464d3) list_form_wide_pane_vc_ParamLimits

0x6e73,	// (0x000464d3) list_form_wide_pane_vc

0x6e7f,	// (0x000464df) list_form_graphic_pane_vc_g1

0x6e87,	// (0x000464e7) list_form_graphic_pane_vc_t1_ParamLimits

0x6e87,	// (0x000464e7) list_form_graphic_pane_vc_t1

0x3222,	// (0x00042882) list_highlight_pane_cp5_vc_ParamLimits

0x3222,	// (0x00042882) list_highlight_pane_cp5_vc

0x6ea3,	// (0x00046503) list_form_graphic_pane_vc_ParamLimits

0x6ea3,	// (0x00046503) list_form_graphic_pane_vc

0x50ab,	// (0x0004470b) form_field_popup_pane_vc_g1

0x6eb9,	// (0x00046519) form_field_popup_pane_vc_t1_ParamLimits

0x6eb9,	// (0x00046519) form_field_popup_pane_vc_t1

0x3a8e,	// (0x000430ee) input_focus_pane_cp7_vc_ParamLimits

0x3a8e,	// (0x000430ee) input_focus_pane_cp7_vc

0x6ed0,	// (0x00046530) list_form_pane_vc_ParamLimits

0x6ed0,	// (0x00046530) list_form_pane_vc

0x6edc,	// (0x0004653c) data_form_pane_vc_t1_ParamLimits

0x6edc,	// (0x0004653c) data_form_pane_vc_t1

0x3af5,	// (0x00043155) input_focus_pane_vc_g1

0x3afd,	// (0x0004315d) input_focus_pane_vc_g2

0x3b05,	// (0x00043165) input_focus_pane_vc_g3

0x3b0d,	// (0x0004316d) input_focus_pane_vc_g4

0x3b15,	// (0x00043175) input_focus_pane_vc_g5

0x3b1d,	// (0x0004317d) input_focus_pane_vc_g6

0x3b25,	// (0x00043185) input_focus_pane_vc_g7

0x3b2d,	// (0x0004318d) input_focus_pane_vc_g8

0x3b35,	// (0x00043195) input_focus_pane_vc_g9

0x3138,	// (0x00042798) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0004ecf7) input_focus_pane_vc_g

0x509f,	// (0x000446ff) data_form_pane_vc_ParamLimits

0x509f,	// (0x000446ff) data_form_pane_vc

0x50ab,	// (0x0004470b) form_field_data_pane_vc_g1

0x6ef7,	// (0x00046557) form_field_data_pane_vc_t1_ParamLimits

0x6ef7,	// (0x00046557) form_field_data_pane_vc_t1

0x3a8e,	// (0x000430ee) input_focus_pane_vc_ParamLimits

0x3a8e,	// (0x000430ee) input_focus_pane_vc

0x6f11,	// (0x00046571) button_value_adjust_pane_cp3_vc

0x6f19,	// (0x00046579) button_value_adjust_pane_cp5_vc

0x6f21,	// (0x00046581) form_field_data_pane_vc_ParamLimits

0x6f21,	// (0x00046581) form_field_data_pane_vc

0x6f38,	// (0x00046598) form_field_data_pane_vc_cp2

0x6f40,	// (0x000465a0) form_field_data_wide_pane_vc_ParamLimits

0x6f40,	// (0x000465a0) form_field_data_wide_pane_vc

0x6f56,	// (0x000465b6) form_field_data_wide_pane_vc_cp2

0x6f5e,	// (0x000465be) form_field_popup_pane_vc_ParamLimits

0x6f5e,	// (0x000465be) form_field_popup_pane_vc

0x6f75,	// (0x000465d5) form_field_popup_wide_pane_vc_ParamLimits

0x6f75,	// (0x000465d5) form_field_popup_wide_pane_vc

0x6f8b,	// (0x000465eb) form_field_slider_pane_vc_ParamLimits

0x6f8b,	// (0x000465eb) form_field_slider_pane_vc

0x6f9e,	// (0x000465fe) form_field_slider_wide_pane_vc_ParamLimits

0x6f9e,	// (0x000465fe) form_field_slider_wide_pane_vc

0xdea0,	// (0x0004d500) grid_touch_1_pane_ParamLimits

0xdea0,	// (0x0004d500) grid_touch_1_pane

0xdeb4,	// (0x0004d514) grid_touch_2_pane_ParamLimits

0xdeb4,	// (0x0004d514) grid_touch_2_pane

0x7073,	// (0x000466d3) touch_pane_g1_ParamLimits

0x7073,	// (0x000466d3) touch_pane_g1

0x6fd5,	// (0x00046635) cell_app_pane_cp_wide_ParamLimits

0x6fd5,	// (0x00046635) cell_app_pane_cp_wide

0x6fe6,	// (0x00046646) grid_popup_fast_wide_pane_ParamLimits

0x6fe6,	// (0x00046646) grid_popup_fast_wide_pane

0x6ffa,	// (0x0004665a) scroll_pane_cp19_ParamLimits

0x6ffa,	// (0x0004665a) scroll_pane_cp19

0x3142,	// (0x000427a2) bg_popup_window_pane_cp20

0x700e,	// (0x0004666e) listscroll_popup_fast_wide_pane

0x3c5d,	// (0x000432bd) grid_indicator_nsta_pane

0x7016,	// (0x00046676) clock_nsta_pane_g1

0x701f,	// (0x0004667f) clock_nsta_pane_t1

0xdede,	// (0x0004d53e) cell_indicator_nsta_pane_ParamLimits

0xdede,	// (0x0004d53e) cell_indicator_nsta_pane

0x7073,	// (0x000466d3) cell_indicator_nsta_pane_g1

0xdef7,	// (0x0004d557) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0004f107) cell_indicator_nsta_pane_g

0x7097,	// (0x000466f7) clock_nsta_pane_cp

0x709f,	// (0x000466ff) indicator_nsta_pane_cp

0x70a8,	// (0x00046708) nsta_clock_indic_pane_g1

0x32eb,	// (0x0004294b) grid_indicator_pane

0x4037,	// (0x00043697) scroll_pane_cp29

0x159e,	// (0x00040bfe) indicator_nsta_pane_cp2_ParamLimits

0x159e,	// (0x00040bfe) indicator_nsta_pane_cp2

0x3222,	// (0x00042882) main_apps_wheel_pane

0x52c0,	// (0x00044920) form_midp_field_text_pane_ParamLimits

0x540b,	// (0x00044a6b) scroll_bar_cp050_ParamLimits

0x7111,	// (0x00046771) cell_indicator_pane_ParamLimits

0x7111,	// (0x00046771) cell_indicator_pane

0x7128,	// (0x00046788) cell_indicator_pane_g1

0xdf0c,	// (0x0004d56c) grid_wheel_folder_pane_ParamLimits

0xdf0c,	// (0x0004d56c) grid_wheel_folder_pane

0xdf1a,	// (0x0004d57a) list_wheel_apps_pane_ParamLimits

0xdf1a,	// (0x0004d57a) list_wheel_apps_pane

0xdf28,	// (0x0004d588) main_apps_wheel_pane_g1_ParamLimits

0xdf28,	// (0x0004d588) main_apps_wheel_pane_g1

0xdf34,	// (0x0004d594) main_apps_wheel_pane_g2_ParamLimits

0xdf34,	// (0x0004d594) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0004f123) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0004f123) main_apps_wheel_pane_g

0xdf42,	// (0x0004d5a2) main_apps_wheel_pane_t1_ParamLimits

0xdf42,	// (0x0004d5a2) main_apps_wheel_pane_t1

0xdf56,	// (0x0004d5b6) list_wheel_apps_pane_g1

0xdf5e,	// (0x0004d5be) list_wheel_apps_pane_g2

0xdf66,	// (0x0004d5c6) list_wheel_apps_pane_g3

0xdf6e,	// (0x0004d5ce) list_wheel_apps_pane_g4

0xdf78,	// (0x0004d5d8) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0004f128) list_wheel_apps_pane_g

0x4580,	// (0x00043be0) navi_icon_text_pane

0xd52a,	// (0x0004cb8a) aid_fill_nsta

0x71eb,	// (0x0004684b) navi_icon_text_pane_g1

0x71f7,	// (0x00046857) navi_icon_text_pane_t1

0xd3b4,	// (0x0004ca14) list_set_graphic_pane_t1_ParamLimits

0xd3b4,	// (0x0004ca14) list_set_graphic_pane_t1

0x5b7f,	// (0x000451df) popup_midp_note_alarm_window_t6_ParamLimits

0x5b7f,	// (0x000451df) popup_midp_note_alarm_window_t6

0x5b91,	// (0x000451f1) popup_midp_note_alarm_window_t7_ParamLimits

0x5b91,	// (0x000451f1) popup_midp_note_alarm_window_t7

0x5ba3,	// (0x00045203) popup_midp_note_alarm_window_t8_ParamLimits

0x5ba3,	// (0x00045203) popup_midp_note_alarm_window_t8

0x5bb5,	// (0x00045215) popup_midp_note_alarm_window_t9_ParamLimits

0x5bb5,	// (0x00045215) popup_midp_note_alarm_window_t9

0x5bc7,	// (0x00045227) popup_midp_note_alarm_window_t10_ParamLimits

0x5bc7,	// (0x00045227) popup_midp_note_alarm_window_t10

0x5bd9,	// (0x00045239) popup_midp_note_alarm_window_t11_ParamLimits

0x5bd9,	// (0x00045239) popup_midp_note_alarm_window_t11

0x5beb,	// (0x0004524b) scroll_pane_cp17_ParamLimits

0x5beb,	// (0x0004524b) scroll_pane_cp17

0x1fbb,	// (0x0004161b) volume_small_pane_cp_g1

0x2389,	// (0x000419e9) volume_small_pane_cp_g2

0x2392,	// (0x000419f2) volume_small_pane_cp_g3

0x239b,	// (0x000419fb) volume_small_pane_cp_g4

0x23a4,	// (0x00041a04) volume_small_pane_cp_g5

0x23ad,	// (0x00041a0d) volume_small_pane_cp_g6

0x23b6,	// (0x00041a16) volume_small_pane_cp_g7

0x23bf,	// (0x00041a1f) volume_small_pane_cp_g8

0x23c8,	// (0x00041a28) volume_small_pane_cp_g9

0x23d1,	// (0x00041a31) volume_small_pane_cp_g10

0x47c3,	// (0x00043e23) midp_ticker_pane_g1_ParamLimits

0x47cf,	// (0x00043e2f) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0004edc3) midp_ticker_pane_g_ParamLimits

0x47db,	// (0x00043e3b) midp_ticker_pane_t1_ParamLimits

0xd54e,	// (0x0004cbae) aid_fill_nsta_2

0x53f7,	// (0x00044a57) list_form2_midp_pane

0x658d,	// (0x00045bed) midp_editing_number_pane_ParamLimits

0x659c,	// (0x00045bfc) midp_ticker_pane_ParamLimits

0x7209,	// (0x00046869) form2_midp_field_pane

0x722d,	// (0x0004688d) scroll_pane_cp51

0x724d,	// (0x000468ad) form2_midp_button_pane_ParamLimits

0x724d,	// (0x000468ad) form2_midp_button_pane

0x725f,	// (0x000468bf) form2_midp_content_pane_ParamLimits

0x725f,	// (0x000468bf) form2_midp_content_pane

0x7279,	// (0x000468d9) form2_midp_field_choice_group_pane

0x7281,	// (0x000468e1) form2_midp_field_pane_g1

0x7289,	// (0x000468e9) form2_midp_field_pane_g2

0x7291,	// (0x000468f1) form2_midp_field_pane_g3

0x7299,	// (0x000468f9) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0004f14d) form2_midp_field_pane_g

0x72a1,	// (0x00046901) form2_midp_gauge_slider_pane

0x72a9,	// (0x00046909) form2_midp_gauge_wait_pane

0x72b1,	// (0x00046911) form2_midp_image_pane_ParamLimits

0x72b1,	// (0x00046911) form2_midp_image_pane

0x72cc,	// (0x0004692c) form2_midp_label_pane_ParamLimits

0x72cc,	// (0x0004692c) form2_midp_label_pane

0xdfab,	// (0x0004d60b) form2_midp_label_pane_cp_ParamLimits

0xdfab,	// (0x0004d60b) form2_midp_label_pane_cp

0x7306,	// (0x00046966) form2_midp_string_pane_ParamLimits

0x7306,	// (0x00046966) form2_midp_string_pane

0xbb38,	// (0x0004b198) form2_midp_text_pane_ParamLimits

0xbb38,	// (0x0004b198) form2_midp_text_pane

0x7318,	// (0x00046978) form2_midp_time_pane

0x7328,	// (0x00046988) input_focus_pane_cp51_ParamLimits

0x7328,	// (0x00046988) input_focus_pane_cp51

0x7340,	// (0x000469a0) form2_midp_label_pane_t1_ParamLimits

0x7340,	// (0x000469a0) form2_midp_label_pane_t1

0xbb57,	// (0x0004b1b7) form2_mdip_text_pane_t1_ParamLimits

0xbb57,	// (0x0004b1b7) form2_mdip_text_pane_t1

0x0b54,	// (0x000401b4) form2_midp_time_pane_t1

0x7389,	// (0x000469e9) form2_midp_gauge_slider_pane_t1

0xdfca,	// (0x0004d62a) form2_midp_gauge_slider_pane_t2

0xdfdc,	// (0x0004d63c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0004f156) form2_midp_gauge_slider_pane_t

0x73bf,	// (0x00046a1f) form2_midp_slider_pane

0x73cb,	// (0x00046a2b) form2_midp_gauge_wait_pane_t1

0x73d9,	// (0x00046a39) form2_midp_wait_pane_ParamLimits

0x73d9,	// (0x00046a39) form2_midp_wait_pane

0xdfee,	// (0x0004d64e) list_single_2graphic_pane_cp4_ParamLimits

0xdfee,	// (0x0004d64e) list_single_2graphic_pane_cp4

0xd964,	// (0x0004cfc4) list_single_midp_graphic_pane_cp_ParamLimits

0xd964,	// (0x0004cfc4) list_single_midp_graphic_pane_cp

0x3142,	// (0x000427a2) list_highlight_pane_cp20

0x7433,	// (0x00046a93) list_single_2graphic_pane_g1_cp4

0x743b,	// (0x00046a9b) list_single_2graphic_pane_g2_cp4

0x7443,	// (0x00046aa3) list_single_2graphic_pane_t1_cp4

0x3222,	// (0x00042882) list_highlight_pane_cp21

0x7452,	// (0x00046ab2) list_single_midp_graphic_pane_g4_cp

0x7461,	// (0x00046ac1) list_single_midp_graphic_pane_t1_cp

0xe002,	// (0x0004d662) form2_mdip_string_pane_t1_ParamLimits

0xe002,	// (0x0004d662) form2_mdip_string_pane_t1

0x3142,	// (0x000427a2) bg_wml_button_pane_cp2

0x3138,	// (0x00042798) form2_midp_image_pane_g1

0x12c2,	// (0x00040922) list_double_large_graphic_pane_g5_ParamLimits

0x12c2,	// (0x00040922) list_double_large_graphic_pane_g5

0x4a34,	// (0x00044094) midp_form_pane_ParamLimits

0x3222,	// (0x00042882) main_apps_wheel_pane_ParamLimits

0xc4a5,	// (0x0004bb05) popup_preview_window_ParamLimits

0xc4a5,	// (0x0004bb05) popup_preview_window

0x1e22,	// (0x00041482) popup_touch_info_window_ParamLimits

0x1e22,	// (0x00041482) popup_touch_info_window

0x1e40,	// (0x000414a0) popup_touch_menu_window_ParamLimits

0x1e40,	// (0x000414a0) popup_touch_menu_window

0x312e,	// (0x0004278e) bg_popup_sub_pane_cp6

0x756f,	// (0x00046bcf) list_touch_menu_pane

0x7577,	// (0x00046bd7) list_single_touch_menu_pane_ParamLimits

0x7577,	// (0x00046bd7) list_single_touch_menu_pane

0x758d,	// (0x00046bed) list_single_touch_menu_pane_t1

0x3222,	// (0x00042882) bg_popup_sub_pane_cp7_ParamLimits

0x3222,	// (0x00042882) bg_popup_sub_pane_cp7

0x759b,	// (0x00046bfb) heading_sub_pane

0x75a3,	// (0x00046c03) list_touch_info_pane_ParamLimits

0x75a3,	// (0x00046c03) list_touch_info_pane

0x75b2,	// (0x00046c12) list_single_touch_info_pane_ParamLimits

0x75b2,	// (0x00046c12) list_single_touch_info_pane

0x75c4,	// (0x00046c24) list_single_touch_info_pane_t1

0x75d2,	// (0x00046c32) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0004f164) list_single_touch_info_pane_t

0x46f4,	// (0x00043d54) bg_popup_heading_pane_cp

0x75e0,	// (0x00046c40) heading_sub_pane_t1

0x5039,	// (0x00044699) bg_popup_preview_window_pane_cp_ParamLimits

0x5039,	// (0x00044699) bg_popup_preview_window_pane_cp

0x759b,	// (0x00046bfb) heading_preview_pane

0x75a3,	// (0x00046c03) list_preview_pane_ParamLimits

0x75a3,	// (0x00046c03) list_preview_pane

0x75ee,	// (0x00046c4e) popup_preview_window_g1

0x75b2,	// (0x00046c12) list_single_preview_pane_ParamLimits

0x75b2,	// (0x00046c12) list_single_preview_pane

0x75f6,	// (0x00046c56) list_single_preview_pane_g1

0x75fe,	// (0x00046c5e) list_single_preview_pane_t1

0x75c4,	// (0x00046c24) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0004f169) list_single_preview_pane_t

0x760c,	// (0x00046c6c) bg_popup_heading_pane_cp2_ParamLimits

0x760c,	// (0x00046c6c) bg_popup_heading_pane_cp2

0x7622,	// (0x00046c82) heading_preview_pane_g1

0x762a,	// (0x00046c8a) heading_preview_pane_t1_ParamLimits

0x762a,	// (0x00046c8a) heading_preview_pane_t1

0x330e,	// (0x0004296e) soft_indicator_pane_t1_ParamLimits

0x3a01,	// (0x00043061) scroll_pane_ParamLimits

0x3f30,	// (0x00043590) scroll_sc2_left_pane

0x3f39,	// (0x00043599) scroll_sc2_right_pane

0x3f58,	// (0x000435b8) scroll_bg_pane_g1_ParamLimits

0x3f6d,	// (0x000435cd) scroll_bg_pane_g2_ParamLimits

0x3f85,	// (0x000435e5) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0004ed4e) scroll_bg_pane_g_ParamLimits

0x3f58,	// (0x000435b8) scroll_handle_pane_g1_ParamLimits

0x3fa7,	// (0x00043607) scroll_handle_pane_g2_ParamLimits

0x3f85,	// (0x000435e5) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0004ed55) scroll_handle_pane_g_ParamLimits

0x18ea,	// (0x00040f4a) popup_choice_list_window_ParamLimits

0x18ea,	// (0x00040f4a) popup_choice_list_window

0x4e73,	// (0x000444d3) choice_list_pane

0x4f01,	// (0x00044561) cell_toolbar_pane_t1

0x4f29,	// (0x00044589) toolbar_button_pane_ParamLimits

0x6096,	// (0x000456f6) ai_gene_pane_1_t2_ParamLimits

0x6096,	// (0x000456f6) ai_gene_pane_1_t2

0x0001,

0xf911,	// (0x0004ef71) ai_gene_pane_1_t_ParamLimits

0xf911,	// (0x0004ef71) ai_gene_pane_1_t

0x7647,	// (0x00046ca7) scroll_sc2_left_pane_g1

0x7647,	// (0x00046ca7) scroll_sc2_right_pane_g1

0x4a34,	// (0x00044094) bg_popup_sub_pane_cp10

0x7651,	// (0x00046cb1) list_choice_list_pane

0x766a,	// (0x00046cca) list_single_choice_list_pane_ParamLimits

0x766a,	// (0x00046cca) list_single_choice_list_pane

0x767d,	// (0x00046cdd) list_single_choice_list_pane_g1

0x3c2e,	// (0x0004328e) list_single_choice_list_pane_t1_ParamLimits

0x3c2e,	// (0x0004328e) list_single_choice_list_pane_t1

0x7685,	// (0x00046ce5) choice_list_pane_g1

0x768d,	// (0x00046ced) choice_list_pane_t1

0x312e,	// (0x0004278e) input_focus_pane_cp11

0x3e11,	// (0x00043471) title_pane_stacon_g2_ParamLimits

0x3e11,	// (0x00043471) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0004ed34) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0004ed34) title_pane_stacon_g

0x46f4,	// (0x00043d54) cursor_press_pane

0xc158,	// (0x0004b7b8) popup_fep_hwr_window_ParamLimits

0xc158,	// (0x0004b7b8) popup_fep_hwr_window

0x1a10,	// (0x00041070) popup_fep_vkb_window_ParamLimits

0x1a10,	// (0x00041070) popup_fep_vkb_window

0x769b,	// (0x00046cfb) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0004f192) fep_vkb_side_pane_g_ParamLimits

0x2413,	// (0x00041a73) fep_hwr_candidate_pane_ParamLimits

0x2413,	// (0x00041a73) fep_hwr_candidate_pane

0x243d,	// (0x00041a9d) fep_hwr_side_pane_ParamLimits

0x243d,	// (0x00041a9d) fep_hwr_side_pane

0x245d,	// (0x00041abd) fep_hwr_top_pane_ParamLimits

0x245d,	// (0x00041abd) fep_hwr_top_pane

0x2475,	// (0x00041ad5) fep_hwr_write_pane_ParamLimits

0x2475,	// (0x00041ad5) fep_hwr_write_pane

0xfb32,	// (0x0004f192) fep_vkb_side_pane_g

0x76a3,	// (0x00046d03) fep_hwr_top_pane_g1

0x76b5,	// (0x00046d15) fep_hwr_top_pane_g2

0x24a1,	// (0x00041b01) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0004f16e) fep_hwr_top_pane_g

0x24b6,	// (0x00041b16) fep_hwr_top_text_pane

0x40fe,	// (0x0004375e) fep_hwr_top_text_pane_g1

0x76eb,	// (0x00046d4b) fep_hwr_top_text_pane_t1

0x25ac,	// (0x00041c0c) fep_hwr_candidate_pane_g1

0x793e,	// (0x00046f9e) fep_vkb_keypad_pane_g3_ParamLimits

0x793e,	// (0x00046f9e) fep_vkb_keypad_pane_g3

0x7966,	// (0x00046fc6) fep_vkb_keypad_pane_g4_ParamLimits

0x7966,	// (0x00046fc6) fep_vkb_keypad_pane_g4

0x79d5,	// (0x00047035) fep_vkb_bottom_pane_g2_ParamLimits

0x79d5,	// (0x00047035) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0004f199) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0004f199) fep_vkb_bottom_pane_g

0x7647,	// (0x00046ca7) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0004f1a3) cell_vkb_side_pane_g

0x7a60,	// (0x000470c0) cell_vkb_side_pane_t1

0x7a6e,	// (0x000470ce) cell_vkb_side_pane_t1_copy1

0x7647,	// (0x00046ca7) bg_fep_vkb_candidate_pane_g2

0x7b9a,	// (0x000471fa) cell_vkb_candidate_pane_ParamLimits

0x76f9,	// (0x00046d59) aid_size_cell_vkb_ParamLimits

0x76f9,	// (0x00046d59) aid_size_cell_vkb

0x7b9a,	// (0x000471fa) cell_vkb_candidate_pane

0x25c6,	// (0x00041c26) bg_popup_fep_shadow_pane_g1

0xe0ae,	// (0x0004d70e) fep_vkb_bottom_pane_ParamLimits

0xe0ae,	// (0x0004d70e) fep_vkb_bottom_pane

0x77bd,	// (0x00046e1d) fep_vkb_candidate_pane_ParamLimits

0x77bd,	// (0x00046e1d) fep_vkb_candidate_pane

0xe0d3,	// (0x0004d733) fep_vkb_keypad_pane_ParamLimits

0xe0d3,	// (0x0004d733) fep_vkb_keypad_pane

0xe10f,	// (0x0004d76f) fep_vkb_side_pane_ParamLimits

0xe10f,	// (0x0004d76f) fep_vkb_side_pane

0xe14b,	// (0x0004d7ab) fep_vkb_top_pane_ParamLimits

0xe14b,	// (0x0004d7ab) fep_vkb_top_pane

0x7897,	// (0x00046ef7) fep_vkb_top_pane_g1_ParamLimits

0x7897,	// (0x00046ef7) fep_vkb_top_pane_g1

0x78a6,	// (0x00046f06) fep_vkb_top_pane_g2_ParamLimits

0x78a6,	// (0x00046f06) fep_vkb_top_pane_g2

0x78b5,	// (0x00046f15) fep_vkb_top_pane_g3_ParamLimits

0x78b5,	// (0x00046f15) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0004f189) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0004f189) fep_vkb_top_pane_g

0x78d3,	// (0x00046f33) fep_vkb_top_text_pane_ParamLimits

0x78d3,	// (0x00046f33) fep_vkb_top_text_pane

0xe187,	// (0x0004d7e7) fep_vkb_side_pane_g1_ParamLimits

0xe187,	// (0x0004d7e7) fep_vkb_side_pane_g1

0x792d,	// (0x00046f8d) grid_vkb_side_pane_ParamLimits

0x792d,	// (0x00046f8d) grid_vkb_side_pane

0x25ce,	// (0x00041c2e) bg_popup_fep_shadow_pane_g2

0x25d7,	// (0x00041c37) bg_popup_fep_shadow_pane_g3

0x25df,	// (0x00041c3f) bg_popup_fep_shadow_pane_g4

0x25e8,	// (0x00041c48) bg_popup_fep_shadow_pane_g5

0x25f2,	// (0x00041c52) bg_popup_fep_shadow_pane_g6

0x25fa,	// (0x00041c5a) bg_popup_fep_shadow_pane_g7

0x3b15,	// (0x00043175) bg_popup_fep_shadow_pane_g8

0x7984,	// (0x00046fe4) grid_vkb_keypad_number_pane_ParamLimits

0x7984,	// (0x00046fe4) grid_vkb_keypad_number_pane

0x7994,	// (0x00046ff4) grid_vkb_keypad_pane_ParamLimits

0x7994,	// (0x00046ff4) grid_vkb_keypad_pane

0x79ba,	// (0x0004701a) fep_vkb_bottom_pane_g1_ParamLimits

0x79ba,	// (0x0004701a) fep_vkb_bottom_pane_g1

0x79e3,	// (0x00047043) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79e3,	// (0x00047043) grid_vkb_keypad_bottom_left_pane

0x79f8,	// (0x00047058) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x79f8,	// (0x00047058) grid_vkb_keypad_bottom_right_pane

0x7a0d,	// (0x0004706d) fep_vkb_top_text_pane_g1

0xe1ce,	// (0x0004d82e) fep_vkb_top_text_pane_t1

0xe1e0,	// (0x0004d840) cell_vkb_side_pane_ParamLimits

0xe1e0,	// (0x0004d840) cell_vkb_side_pane

0x7647,	// (0x00046ca7) cell_vkb_side_pane_g1

0x7a7c,	// (0x000470dc) cell_vkb_keypad_pane_ParamLimits

0x7a7c,	// (0x000470dc) cell_vkb_keypad_pane

0x7af1,	// (0x00047151) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0004f1b6) bg_popup_fep_shadow_pane_g

0x7647,	// (0x00046ca7) cell_hwr_side_pane_g1

0x7647,	// (0x00046ca7) cell_hwr_side_pane_g2

0x7afb,	// (0x0004715b) cell_vkb_keypad_pane_t1

0xe1f6,	// (0x0004d856) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe1f6,	// (0x0004d856) cell_vkb_keypad_bottom_left_pane

0xe20b,	// (0x0004d86b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe20b,	// (0x0004d86b) cell_vkb_keypad_bottom_right_pane

0x7647,	// (0x00046ca7) cell_vkb_keypad_bottom_left_pane_g1

0x7647,	// (0x00046ca7) cell_vkb_keypad_bottom_right_pane_g1

0x7b5f,	// (0x000471bf) cell_vkb_keypad_number_pane_ParamLimits

0x7b5f,	// (0x000471bf) cell_vkb_keypad_number_pane

0x7b7e,	// (0x000471de) cell_vkb_keypad_number_pane_g1

0x7b88,	// (0x000471e8) cell_vkb_keypad_number_pane_g2

0x7b91,	// (0x000471f1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0004f1a8) cell_vkb_keypad_number_pane_g

0x7afb,	// (0x0004715b) cell_vkb_keypad_number_pane_t1

0x7bb5,	// (0x00047215) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x0004f1a3) cell_hwr_side_pane_g

0x7bce,	// (0x0004722e) cell_hwr_side_pane_t1

0x260c,	// (0x00041c6c) cell_hwr_side_pane_t1_copy1

0x78c5,	// (0x00046f25) cell_hwr_candidate_pane_g1

0x261a,	// (0x00041c7a) cell_hwr_candidate_pane_t1

0x7647,	// (0x00046ca7) cell_vkb_candidate_pane_g2

0x7c54,	// (0x000472b4) cell_vkb_candidate_pane_t1

0x23da,	// (0x00041a3a) bg_popup_fep_shadow_pane_ParamLimits

0x23da,	// (0x00041a3a) bg_popup_fep_shadow_pane

0xe074,	// (0x0004d6d4) bg_fep_hwr_top_pane_g4

0x76c7,	// (0x00046d27) bg_hwr_side_pane_g1_ParamLimits

0x76c7,	// (0x00046d27) bg_hwr_side_pane_g1

0xc94c,	// (0x0004bfac) cell_hwr_side_pane_ParamLimits

0xc94c,	// (0x0004bfac) cell_hwr_side_pane

0x252d,	// (0x00041b8d) fep_hwr_write_pane_g1_ParamLimits

0x252d,	// (0x00041b8d) fep_hwr_write_pane_g1

0x253a,	// (0x00041b9a) fep_hwr_write_pane_g2_ParamLimits

0x253a,	// (0x00041b9a) fep_hwr_write_pane_g2

0x2547,	// (0x00041ba7) fep_hwr_write_pane_g3_ParamLimits

0x2547,	// (0x00041ba7) fep_hwr_write_pane_g3

0xc96c,	// (0x0004bfcc) fep_hwr_write_pane_g4_ParamLimits

0xc96c,	// (0x0004bfcc) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0004f175) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0004f175) fep_hwr_write_pane_g

0xe074,	// (0x0004d6d4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe074,	// (0x0004d6d4) bg_fep_hwr_candidate_pane_g2

0x256a,	// (0x00041bca) cell_hwr_candidate_pane_ParamLimits

0x256a,	// (0x00041bca) cell_hwr_candidate_pane

0x25ac,	// (0x00041c0c) fep_hwr_candidate_pane_g1_ParamLimits

0x7727,	// (0x00046d87) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7727,	// (0x00046d87) bg_popup_fep_shadow_pane_cp2

0x78c5,	// (0x00046f25) fep_vkb_top_pane_g4_ParamLimits

0x78c5,	// (0x00046f25) fep_vkb_top_pane_g4

0x790b,	// (0x00046f6b) fep_vkb_side_pane_g2_ParamLimits

0x790b,	// (0x00046f6b) fep_vkb_side_pane_g2

0xb80b,	// (0x0004ae6b) list_setting_pane_t4_ParamLimits

0xb80b,	// (0x0004ae6b) list_setting_pane_t4

0xb8a5,	// (0x0004af05) list_setting_number_pane_t5_ParamLimits

0xb8a5,	// (0x0004af05) list_setting_number_pane_t5

0xd2c7,	// (0x0004c927) list_double_heading_pane_cp2_ParamLimits

0xd2c7,	// (0x0004c927) list_double_heading_pane_cp2

0x3aa8,	// (0x00043108) list_double_heading_pane_g1_cp2_ParamLimits

0x3aa8,	// (0x00043108) list_double_heading_pane_g1_cp2

0x3ab4,	// (0x00043114) list_double_heading_pane_g2_cp2_ParamLimits

0x3ab4,	// (0x00043114) list_double_heading_pane_g2_cp2

0x7c62,	// (0x000472c2) list_double_heading_pane_t1_cp2_ParamLimits

0x7c62,	// (0x000472c2) list_double_heading_pane_t1_cp2

0x7c78,	// (0x000472d8) list_double_heading_pane_t2_cp2_ParamLimits

0x7c78,	// (0x000472d8) list_double_heading_pane_t2_cp2

0x3116,	// (0x00042776) aid_value_unit2

0x10ba,	// (0x0004071a) popup_preview_fixed_window

0x34ab,	// (0x00042b0b) bg_popup_preview_window_pane_cp02

0x7c8a,	// (0x000472ea) list_preview_fixed_pane

0x7cd0,	// (0x00047330) list_empty_pane_fp_ParamLimits

0x7cd0,	// (0x00047330) list_empty_pane_fp

0x7cd0,	// (0x00047330) list_single_cale_day_pane_fp_ParamLimits

0x7cd0,	// (0x00047330) list_single_cale_day_pane_fp

0x7cd0,	// (0x00047330) list_single_graphic_heading_pane_fp_ParamLimits

0x7cd0,	// (0x00047330) list_single_graphic_heading_pane_fp

0x7cd0,	// (0x00047330) list_single_graphic_pane_fp_ParamLimits

0x7cd0,	// (0x00047330) list_single_graphic_pane_fp

0x7cd0,	// (0x00047330) list_single_heading_pane_fp_ParamLimits

0x7cd0,	// (0x00047330) list_single_heading_pane_fp

0x7cd0,	// (0x00047330) list_single_pane_fp_ParamLimits

0x7cd0,	// (0x00047330) list_single_pane_fp

0x7ce5,	// (0x00047345) list_single_pane_fp_g1_ParamLimits

0x7ce5,	// (0x00047345) list_single_pane_fp_g1

0x3aa8,	// (0x00043108) list_single_pane_fp_g2_ParamLimits

0x3aa8,	// (0x00043108) list_single_pane_fp_g2

0x3ab4,	// (0x00043114) list_single_pane_fp_g3_ParamLimits

0x3ab4,	// (0x00043114) list_single_pane_fp_g3

0x7cf1,	// (0x00047351) list_single_pane_fp_g4_ParamLimits

0x7cf1,	// (0x00047351) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0004f1d7) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0004f1d7) list_single_pane_fp_g

0x0b67,	// (0x000401c7) list_single_pane_fp_t1_ParamLimits

0x0b67,	// (0x000401c7) list_single_pane_fp_t1

0x0b7e,	// (0x000401de) list_single_graphic_pane_fp_g1_ParamLimits

0x0b7e,	// (0x000401de) list_single_graphic_pane_fp_g1

0x7ce5,	// (0x00047345) list_single_graphic_pane_fp_g2_ParamLimits

0x7ce5,	// (0x00047345) list_single_graphic_pane_fp_g2

0x3aa8,	// (0x00043108) list_single_graphic_pane_fp_g3_ParamLimits

0x3aa8,	// (0x00043108) list_single_graphic_pane_fp_g3

0x3ab4,	// (0x00043114) list_single_graphic_pane_fp_g4_ParamLimits

0x3ab4,	// (0x00043114) list_single_graphic_pane_fp_g4

0x7cf1,	// (0x00047351) list_single_graphic_pane_fp_g5_ParamLimits

0x7cf1,	// (0x00047351) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0004f1e0) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0004f1e0) list_single_graphic_pane_fp_g

0x0b8a,	// (0x000401ea) list_single_graphic_pane_fp_t1_ParamLimits

0x0b8a,	// (0x000401ea) list_single_graphic_pane_fp_t1

0x0b7e,	// (0x000401de) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0b7e,	// (0x000401de) list_single_graphic_heading_pane_fp_g1

0x7ce5,	// (0x00047345) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7ce5,	// (0x00047345) list_single_graphic_heading_pane_fp_g2

0x3aa8,	// (0x00043108) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3aa8,	// (0x00043108) list_single_graphic_heading_pane_fp_g3

0x3ab4,	// (0x00043114) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3ab4,	// (0x00043114) list_single_graphic_heading_pane_fp_g4

0x7cf1,	// (0x00047351) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7cf1,	// (0x00047351) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0004f1e0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0004f1e0) list_single_graphic_heading_pane_fp_g

0x0ba0,	// (0x00040200) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0ba0,	// (0x00040200) list_single_graphic_heading_pane_fp_t1

0x0bb6,	// (0x00040216) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0bb6,	// (0x00040216) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0004f1eb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0004f1eb) list_single_graphic_heading_pane_fp_t

0x0bc8,	// (0x00040228) list_single_cale_day_pane_fp_g1_ParamLimits

0x0bc8,	// (0x00040228) list_single_cale_day_pane_fp_g1

0x7cfd,	// (0x0004735d) list_single_cale_day_pane_fp_g2_ParamLimits

0x7cfd,	// (0x0004735d) list_single_cale_day_pane_fp_g2

0x2638,	// (0x00041c98) list_single_cale_day_pane_fp_g3_ParamLimits

0x2638,	// (0x00041c98) list_single_cale_day_pane_fp_g3

0x2660,	// (0x00041cc0) list_single_cale_day_pane_fp_g4_ParamLimits

0x2660,	// (0x00041cc0) list_single_cale_day_pane_fp_g4

0x2684,	// (0x00041ce4) list_single_cale_day_pane_fp_g5_ParamLimits

0x2684,	// (0x00041ce4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0004f1f0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0004f1f0) list_single_cale_day_pane_fp_g

0x0c00,	// (0x00040260) list_single_cale_day_pane_fp_t1_ParamLimits

0x0c00,	// (0x00040260) list_single_cale_day_pane_fp_t1

0x0c26,	// (0x00040286) list_single_cale_day_pane_fp_t2_ParamLimits

0x0c26,	// (0x00040286) list_single_cale_day_pane_fp_t2

0x0c3f,	// (0x0004029f) list_single_cale_day_pane_fp_t3_ParamLimits

0x0c3f,	// (0x0004029f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0004f1fb) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0004f1fb) list_single_cale_day_pane_fp_t

0x7ce5,	// (0x00047345) list_empty_pane_fp_g1_ParamLimits

0x7ce5,	// (0x00047345) list_empty_pane_fp_g1

0x0c58,	// (0x000402b8) list_empty_pane_fp_t1

0x0c66,	// (0x000402c6) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0004f202) list_empty_pane_fp_t

0x7ce5,	// (0x00047345) list_single_heading_pane_fp_g1_ParamLimits

0x7ce5,	// (0x00047345) list_single_heading_pane_fp_g1

0x3aa8,	// (0x00043108) list_single_heading_pane_fp_g2_ParamLimits

0x3aa8,	// (0x00043108) list_single_heading_pane_fp_g2

0x3ab4,	// (0x00043114) list_single_heading_pane_fp_g3_ParamLimits

0x3ab4,	// (0x00043114) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0004f207) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0004f207) list_single_heading_pane_fp_g

0x0c74,	// (0x000402d4) list_single_heading_pane_fp_t1_ParamLimits

0x0c74,	// (0x000402d4) list_single_heading_pane_fp_t1

0x0c86,	// (0x000402e6) list_single_heading_pane_fp_t2_ParamLimits

0x0c86,	// (0x000402e6) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0004f20e) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0004f20e) list_single_heading_pane_fp_t

0x3c9c,	// (0x000432fc) aid_size_cell_fast

0x341b,	// (0x00042a7b) soft_indicator_pane_cp1_t1

0x3cd9,	// (0x00043339) cell_app_pane_cp2_ParamLimits

0x3cd9,	// (0x00043339) cell_app_pane_cp2

0x23fc,	// (0x00041a5c) fep_hwr_candidate_drop_down_list_pane

0xe082,	// (0x0004d6e2) fep_hwr_candidate_pane_g3_ParamLimits

0xe082,	// (0x0004d6e2) fep_hwr_candidate_pane_g3

0xe08f,	// (0x0004d6ef) fep_hwr_candidate_pane_g4_ParamLimits

0xe08f,	// (0x0004d6ef) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0004f182) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0004f182) fep_hwr_candidate_pane_g

0x77ac,	// (0x00046e0c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77ac,	// (0x00046e0c) fep_vkb_candidate_drop_down_list_pane

0x7bbd,	// (0x0004721d) fep_vkb_candidate_pane_g3

0x7bc5,	// (0x00047225) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0004f1af) fep_vkb_candidate_pane_g

0x78c5,	// (0x00046f25) cell_hwr_candidate_pane_g1_ParamLimits

0x7bdc,	// (0x0004723c) cell_hwr_candidate_pane_g3_ParamLimits

0x7bdc,	// (0x0004723c) cell_hwr_candidate_pane_g3

0x7bfd,	// (0x0004725d) cell_hwr_candidate_pane_g4_ParamLimits

0x7bfd,	// (0x0004725d) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0004f1c9) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0004f1c9) cell_hwr_candidate_pane_g

0x7c1e,	// (0x0004727e) cell_vkb_candidate_pane_g3_ParamLimits

0x7c1e,	// (0x0004727e) cell_vkb_candidate_pane_g3

0x7c39,	// (0x00047299) cell_vkb_candidate_pane_g4_ParamLimits

0x7c39,	// (0x00047299) cell_vkb_candidate_pane_g4

0x7d09,	// (0x00047369) cell_app_pane_cp2_g1_ParamLimits

0x7d09,	// (0x00047369) cell_app_pane_cp2_g1

0x7d27,	// (0x00047387) cell_app_pane_cp2_g2_ParamLimits

0x7d27,	// (0x00047387) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0004f213) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0004f213) cell_app_pane_cp2_g

0x7d33,	// (0x00047393) cell_app_pane_cp2_t1_ParamLimits

0x7d33,	// (0x00047393) cell_app_pane_cp2_t1

0x3a8e,	// (0x000430ee) grid_highlight_pane_cp1_ParamLimits

0x3a8e,	// (0x000430ee) grid_highlight_pane_cp1

0x26a8,	// (0x00041d08) cell_hwr_candidate_pane_cp1_ParamLimits

0x26a8,	// (0x00041d08) cell_hwr_candidate_pane_cp1

0x78c5,	// (0x00046f25) fep_hwr_candidate_drop_down_list_pane_g1

0x7d45,	// (0x000473a5) fep_hwr_candidate_drop_down_list_pane_g2

0x7d52,	// (0x000473b2) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0004f218) fep_hwr_candidate_drop_down_list_pane_g

0x26c7,	// (0x00041d27) fep_hwr_candidate_drop_down_list_scroll_pane

0x26d0,	// (0x00041d30) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x26d0,	// (0x00041d30) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x26dd,	// (0x00041d3d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x26dd,	// (0x00041d3d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x26ea,	// (0x00041d4a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x26ea,	// (0x00041d4a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c1e,	// (0x0004727e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c1e,	// (0x0004727e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c39,	// (0x00047299) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c39,	// (0x00047299) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x26f7,	// (0x00041d57) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x26f7,	// (0x00041d57) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2712,	// (0x00041d72) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2712,	// (0x00041d72) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x272d,	// (0x00041d8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x272d,	// (0x00041d8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0004f21f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0004f21f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d5f,	// (0x000473bf) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d5f,	// (0x000473bf) cell_vkb_candidate_pane_cp1

0x78c5,	// (0x00046f25) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78c5,	// (0x00046f25) fep_vkb_candidate_drop_down_list_pane_g1

0x7d45,	// (0x000473a5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d45,	// (0x000473a5) fep_vkb_candidate_drop_down_list_pane_g2

0x7d52,	// (0x000473b2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d52,	// (0x000473b2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0004f218) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x0004f218) fep_vkb_candidate_drop_down_list_pane_g

0x7d7f,	// (0x000473df) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d7f,	// (0x000473df) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d8c,	// (0x000473ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d8c,	// (0x000473ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d99,	// (0x000473f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d99,	// (0x000473f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7da5,	// (0x00047405) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7da5,	// (0x00047405) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7bdc,	// (0x0004723c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bdc,	// (0x0004723c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7bfd,	// (0x0004725d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7bfd,	// (0x0004725d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7db1,	// (0x00047411) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7db1,	// (0x00047411) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7dd2,	// (0x00047432) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7dd2,	// (0x00047432) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7df3,	// (0x00047453) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7df3,	// (0x00047453) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0004f230) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0004f230) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbe2f,	// (0x0004b48f) title_pane_g1_ParamLimits

0xbe42,	// (0x0004b4a2) title_pane_g2_ParamLimits

0xf554,	// (0x0004ebb4) title_pane_g_ParamLimits

0x40ee,	// (0x0004374e) aid_call2_pane

0x40f6,	// (0x00043756) aid_call_pane

0x40fe,	// (0x0004375e) popup_clock_analogue_window_g1

0x40fe,	// (0x0004375e) popup_clock_analogue_window_g2

0x149f,	// (0x00040aff) popup_clock_analogue_window_g3

0x14a8,	// (0x00040b08) popup_clock_analogue_window_g4

0x3138,	// (0x00042798) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0004ed63) popup_clock_analogue_window_g

0x14b0,	// (0x00040b10) popup_clock_analogue_window_t1

0x14be,	// (0x00040b1e) clock_digital_number_pane_ParamLimits

0x14be,	// (0x00040b1e) clock_digital_number_pane

0x14ca,	// (0x00040b2a) clock_digital_number_pane_cp02_ParamLimits

0x14ca,	// (0x00040b2a) clock_digital_number_pane_cp02

0x14d6,	// (0x00040b36) clock_digital_number_pane_cp03_ParamLimits

0x14d6,	// (0x00040b36) clock_digital_number_pane_cp03

0x14e2,	// (0x00040b42) clock_digital_number_pane_cp04_ParamLimits

0x14e2,	// (0x00040b42) clock_digital_number_pane_cp04

0x14ee,	// (0x00040b4e) clock_digital_separator_pane_ParamLimits

0x14ee,	// (0x00040b4e) clock_digital_separator_pane

0x14fa,	// (0x00040b5a) popup_clock_digital_window_t1_ParamLimits

0x14fa,	// (0x00040b5a) popup_clock_digital_window_t1

0x3138,	// (0x00042798) clock_digital_number_pane_g1

0x3138,	// (0x00042798) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0004ed6e) clock_digital_number_pane_g

0x3138,	// (0x00042798) clock_digital_separator_pane_g1

0x3138,	// (0x00042798) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0004ed6e) clock_digital_separator_pane_g

0xd52a,	// (0x0004cb8a) aid_fill_nsta_ParamLimits

0xd660,	// (0x0004ccc0) indicator_nsta_pane_ParamLimits

0x4d0b,	// (0x0004436b) popup_clock_analogue_window

0x4d0b,	// (0x0004436b) popup_clock_digital_window

0x3c5d,	// (0x000432bd) grid_indicator_nsta_pane_ParamLimits

0x702d,	// (0x0004668d) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0004f102) clock_nsta_pane_t

0x1463,	// (0x00040ac3) aid_size_max_handle

0xbf1d,	// (0x0004b57d) aid_size_min_handle

0x46f4,	// (0x00043d54) editor_scroll_pane

0x7e0e,	// (0x0004746e) ex_editor_pane

0x3c0a,	// (0x0004326a) scroll_pane_cp13

0x3a2d,	// (0x0004308d) scroll_pane_cp14

0x412d,	// (0x0004378d) scroll_pane_cp36

0xd2d8,	// (0x0004c938) list_single_graphic_hl_pane_cp2_ParamLimits

0xd2d8,	// (0x0004c938) list_single_graphic_hl_pane_cp2

0xc912,	// (0x0004bf72) list_single_graphic_hl_pane_ParamLimits

0xc912,	// (0x0004bf72) list_single_graphic_hl_pane

0x0c9c,	// (0x000402fc) aid_size_min_hl_cp1

0x7e16,	// (0x00047476) list_highlight_pane_cp34_ParamLimits

0x7e16,	// (0x00047476) list_highlight_pane_cp34

0x7e27,	// (0x00047487) list_single_graphic_hl_pane_g1_ParamLimits

0x7e27,	// (0x00047487) list_single_graphic_hl_pane_g1

0x0ca5,	// (0x00040305) list_single_graphic_hl_pane_g2_ParamLimits

0x0ca5,	// (0x00040305) list_single_graphic_hl_pane_g2

0x0ca5,	// (0x00040305) list_single_graphic_hl_pane_g3_ParamLimits

0x0ca5,	// (0x00040305) list_single_graphic_hl_pane_g3

0x4665,	// (0x00043cc5) list_single_graphic_hl_pane_g4_ParamLimits

0x4665,	// (0x00043cc5) list_single_graphic_hl_pane_g4

0x2748,	// (0x00041da8) list_single_graphic_hl_pane_g5_ParamLimits

0x2748,	// (0x00041da8) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x0004f241) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x0004f241) list_single_graphic_hl_pane_g

0x0cb1,	// (0x00040311) list_single_graphic_hl_pane_t1_ParamLimits

0x0cb1,	// (0x00040311) list_single_graphic_hl_pane_t1

0x7e34,	// (0x00047494) aid_size_min_hl_cp2

0x7e3d,	// (0x0004749d) list_highlight_pane_cp34_cp2_ParamLimits

0x7e3d,	// (0x0004749d) list_highlight_pane_cp34_cp2

0x7e27,	// (0x00047487) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e27,	// (0x00047487) list_single_graphic_hl_pane_g1_cp2

0x7e4a,	// (0x000474aa) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e4a,	// (0x000474aa) list_single_graphic_hl_pane_g2_cp2

0xe226,	// (0x0004d886) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe226,	// (0x0004d886) list_single_graphic_hl_pane_g3_cp2

0x4ecd,	// (0x0004452d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4ecd,	// (0x0004452d) list_single_graphic_hl_pane_g4_cp2

0x7e64,	// (0x000474c4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e64,	// (0x000474c4) list_single_graphic_hl_pane_g5_cp2

0xbf80,	// (0x0004b5e0) control_pane_g4_ParamLimits

0xbf80,	// (0x0004b5e0) control_pane_g4

0x4a34,	// (0x00044094) bg_popup_sub_pane_cp10_ParamLimits

0x7651,	// (0x00046cb1) list_choice_list_pane_ParamLimits

0x7660,	// (0x00046cc0) scroll_pane_cp23

0x34ab,	// (0x00042b0b) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c8a,	// (0x000472ea) list_preview_fixed_pane_ParamLimits

0x7ca0,	// (0x00047300) list_preview_fixed_pane_cp_ParamLimits

0x7ca0,	// (0x00047300) list_preview_fixed_pane_cp

0x7cac,	// (0x0004730c) popup_preview_fixed_window_g1_ParamLimits

0x7cac,	// (0x0004730c) popup_preview_fixed_window_g1

0x7cb8,	// (0x00047318) popup_preview_fixed_window_g2_ParamLimits

0x7cb8,	// (0x00047318) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0004f1d0) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0004f1d0) popup_preview_fixed_window_g

0x13d7,	// (0x00040a37) aid_navi_side_left_pane_ParamLimits

0x13ec,	// (0x00040a4c) aid_navi_side_right_pane_ParamLimits

0x1404,	// (0x00040a64) navi_icon_pane_stacon_ParamLimits

0x1418,	// (0x00040a78) navi_navi_pane_stacon_ParamLimits

0x1404,	// (0x00040a64) navi_text_pane_stacon_ParamLimits

0x312e,	// (0x0004278e) main_text_info_pane

0x7e8e,	// (0x000474ee) listscroll_text_info_pane

0x7e96,	// (0x000474f6) list_text_info_pane_ParamLimits

0x7e96,	// (0x000474f6) list_text_info_pane

0x7ea5,	// (0x00047505) scroll_pane_cp24_ParamLimits

0x7ea5,	// (0x00047505) scroll_pane_cp24

0xe234,	// (0x0004d894) list_text_info_pane_t1_ParamLimits

0xe234,	// (0x0004d894) list_text_info_pane_t1

0xc0cb,	// (0x0004b72b) popup_fast_swap2_window_ParamLimits

0xc0cb,	// (0x0004b72b) popup_fast_swap2_window

0x7ef4,	// (0x00047554) aid_size_cell_fast2

0x312e,	// (0x0004278e) bg_popup_window_pane_cp17

0x5423,	// (0x00044a83) heading_pane_cp2

0x36f7,	// (0x00042d57) listscroll_fast2_pane

0x7efe,	// (0x0004755e) grid_fast2_pane

0x7f08,	// (0x00047568) listscroll_fast2_pane_g1

0x7f10,	// (0x00047570) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x0004f24c) listscroll_fast2_pane_g

0x3c0a,	// (0x0004326a) scroll_pane_cp26

0x7f1a,	// (0x0004757a) cell_fast2_pane_ParamLimits

0x7f1a,	// (0x0004757a) cell_fast2_pane

0x7f2f,	// (0x0004758f) cell_fast2_pane_g1

0x7f38,	// (0x00047598) cell_fast2_pane_g2

0x7f41,	// (0x000475a1) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x0004f251) cell_fast2_pane_g

0x37ea,	// (0x00042e4a) grid_highlight_pane_cp9

0x37ff,	// (0x00042e5f) main_eswt_pane_ParamLimits

0x37ff,	// (0x00042e5f) main_eswt_pane

0x7eba,	// (0x0004751a) list_single_text_info_pane

0x7f49,	// (0x000475a9) eswt_ctrl_button_pane

0x7f49,	// (0x000475a9) eswt_ctrl_canvas_pane

0x7f51,	// (0x000475b1) eswt_ctrl_combo_pane

0x7f49,	// (0x000475a9) eswt_ctrl_default_pane

0x7f49,	// (0x000475a9) eswt_ctrl_label_pane

0x7f59,	// (0x000475b9) eswt_ctrl_wait_pane

0x7f61,	// (0x000475c1) eswt_shell_pane

0x312e,	// (0x0004278e) listscroll_eswt_app_pane

0x7f81,	// (0x000475e1) popup_eswt_tasktip_window_ParamLimits

0x7f81,	// (0x000475e1) popup_eswt_tasktip_window

0x5039,	// (0x00044699) bg_popup_window_pane_cp18

0x7f92,	// (0x000475f2) eswt_control_pane_g1_ParamLimits

0x7f92,	// (0x000475f2) eswt_control_pane_g1

0x7f9f,	// (0x000475ff) eswt_control_pane_g2_ParamLimits

0x7f9f,	// (0x000475ff) eswt_control_pane_g2

0x7fac,	// (0x0004760c) eswt_control_pane_g3_ParamLimits

0x7fac,	// (0x0004760c) eswt_control_pane_g3

0x7fb9,	// (0x00047619) eswt_control_pane_g4_ParamLimits

0x7fb9,	// (0x00047619) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x0004f258) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x0004f258) eswt_control_pane_g

0x3a8e,	// (0x000430ee) bg_button_pane_ParamLimits

0x3a8e,	// (0x000430ee) bg_button_pane

0x37ff,	// (0x00042e5f) common_borders_pane_copy2_ParamLimits

0x37ff,	// (0x00042e5f) common_borders_pane_copy2

0x7fc6,	// (0x00047626) control_button_pane_g1_ParamLimits

0x7fc6,	// (0x00047626) control_button_pane_g1

0x7fd2,	// (0x00047632) control_button_pane_g2_ParamLimits

0x7fd2,	// (0x00047632) control_button_pane_g2

0x7fde,	// (0x0004763e) control_button_pane_g3_ParamLimits

0x7fde,	// (0x0004763e) control_button_pane_g3

0x0002,

0xfc01,	// (0x0004f261) control_button_pane_g_ParamLimits

0xfc01,	// (0x0004f261) control_button_pane_g

0x7ff2,	// (0x00047652) control_button_pane_t1

0x8000,	// (0x00047660) control_button_pane_t2

0x0001,

0xfc08,	// (0x0004f268) control_button_pane_t

0x4f35,	// (0x00044595) bg_button_pane_g1

0x4f3d,	// (0x0004459d) bg_button_pane_g2

0x4f45,	// (0x000445a5) bg_button_pane_g3

0x4f4d,	// (0x000445ad) bg_button_pane_g4

0x4f55,	// (0x000445b5) bg_button_pane_g5

0x4f5d,	// (0x000445bd) bg_button_pane_g6

0x4f65,	// (0x000445c5) bg_button_pane_g7

0x4f6d,	// (0x000445cd) bg_button_pane_g8

0x4f75,	// (0x000445d5) bg_button_pane_g9

0x0008,

0xf865,	// (0x0004eec5) bg_button_pane_g

0x760c,	// (0x00046c6c) common_borders_pane_ParamLimits

0x760c,	// (0x00046c6c) common_borders_pane

0x7f92,	// (0x000475f2) eswt_control_pane_g1_copy1_ParamLimits

0x7f92,	// (0x000475f2) eswt_control_pane_g1_copy1

0x7f9f,	// (0x000475ff) eswt_control_pane_g2_copy1_ParamLimits

0x7f9f,	// (0x000475ff) eswt_control_pane_g2_copy1

0x7fac,	// (0x0004760c) eswt_control_pane_g3_copy1_ParamLimits

0x7fac,	// (0x0004760c) eswt_control_pane_g3_copy1

0x7fb9,	// (0x00047619) eswt_control_pane_g4_copy1_ParamLimits

0x7fb9,	// (0x00047619) eswt_control_pane_g4_copy1

0x7647,	// (0x00046ca7) bg_eswt_ctrl_canvas_pane_g1

0x760c,	// (0x00046c6c) common_borders_pane_cp2_ParamLimits

0x760c,	// (0x00046c6c) common_borders_pane_cp2

0x760c,	// (0x00046c6c) common_borders_pane_cp3_ParamLimits

0x760c,	// (0x00046c6c) common_borders_pane_cp3

0x800e,	// (0x0004766e) separator_horizontal_pane

0x8016,	// (0x00047676) separator_vertical_pane

0x7f92,	// (0x000475f2) eswt_control_pane_g1_copy2_ParamLimits

0x7f92,	// (0x000475f2) eswt_control_pane_g1_copy2

0x7f9f,	// (0x000475ff) eswt_control_pane_g2_copy2_ParamLimits

0x7f9f,	// (0x000475ff) eswt_control_pane_g2_copy2

0x7fac,	// (0x0004760c) eswt_control_pane_g3_copy2_ParamLimits

0x7fac,	// (0x0004760c) eswt_control_pane_g3_copy2

0x7fb9,	// (0x00047619) eswt_control_pane_g4_copy2_ParamLimits

0x7fb9,	// (0x00047619) eswt_control_pane_g4_copy2

0x312e,	// (0x0004278e) common_borders_pane_cp4

0x801f,	// (0x0004767f) separator_horizontal_pane_g1

0x8028,	// (0x00047688) separator_horizontal_pane_g2

0x8031,	// (0x00047691) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x0004f26d) separator_horizontal_pane_g

0x7f92,	// (0x000475f2) eswt_control_pane_g1_copy3_ParamLimits

0x7f92,	// (0x000475f2) eswt_control_pane_g1_copy3

0x7f9f,	// (0x000475ff) eswt_control_pane_g2_copy3_ParamLimits

0x7f9f,	// (0x000475ff) eswt_control_pane_g2_copy3

0x7fac,	// (0x0004760c) eswt_control_pane_g3_copy3_ParamLimits

0x7fac,	// (0x0004760c) eswt_control_pane_g3_copy3

0x7fb9,	// (0x00047619) eswt_control_pane_g4_copy3_ParamLimits

0x7fb9,	// (0x00047619) eswt_control_pane_g4_copy3

0x312e,	// (0x0004278e) common_borders_pane_cp5

0x803a,	// (0x0004769a) separator_vertical_pane_g1

0x8043,	// (0x000476a3) separator_vertical_pane_g2

0x804c,	// (0x000476ac) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x0004f274) separator_vertical_pane_g

0x7f92,	// (0x000475f2) eswt_control_pane_g1_copy4_ParamLimits

0x7f92,	// (0x000475f2) eswt_control_pane_g1_copy4

0x7f9f,	// (0x000475ff) eswt_control_pane_g2_copy4_ParamLimits

0x7f9f,	// (0x000475ff) eswt_control_pane_g2_copy4

0x7fac,	// (0x0004760c) eswt_control_pane_g3_copy4_ParamLimits

0x7fac,	// (0x0004760c) eswt_control_pane_g3_copy4

0x7fb9,	// (0x00047619) eswt_control_pane_g4_copy4_ParamLimits

0x7fb9,	// (0x00047619) eswt_control_pane_g4_copy4

0xe24f,	// (0x0004d8af) eswt_ctrl_combo_button_pane

0xe257,	// (0x0004d8b7) eswt_ctrl_input_pane

0xe25f,	// (0x0004d8bf) popup_choice_list_window_cp70

0xe267,	// (0x0004d8c7) eswt_ctrl_input_pane_t1

0x312e,	// (0x0004278e) input_focus_pane_cp70

0x760c,	// (0x00046c6c) bg_button_pane_cp70_ParamLimits

0x760c,	// (0x00046c6c) bg_button_pane_cp70

0xe275,	// (0x0004d8d5) eswt_ctrl_combo_button_pane_g1

0x8083,	// (0x000476e3) wait_bar_pane_cp70

0x5039,	// (0x00044699) bg_popup_window_pane_cp70_ParamLimits

0x5039,	// (0x00044699) bg_popup_window_pane_cp70

0x808b,	// (0x000476eb) popup_eswt_tasktip_window_t1

0x80a1,	// (0x00047701) wait_bar_pane_cp71_ParamLimits

0x80a1,	// (0x00047701) wait_bar_pane_cp71

0x80ad,	// (0x0004770d) grid_eswt_app_pane

0x3f39,	// (0x00043599) scroll_pane_cp70

0xe27d,	// (0x0004d8dd) cell_eswt_app_pane_ParamLimits

0xe27d,	// (0x0004d8dd) cell_eswt_app_pane

0xe2a7,	// (0x0004d907) cell_eswt_app_pane_g1_ParamLimits

0xe2a7,	// (0x0004d907) cell_eswt_app_pane_g1

0xe2d6,	// (0x0004d936) cell_eswt_app_pane_g2_ParamLimits

0xe2d6,	// (0x0004d936) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x0004f27b) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x0004f27b) cell_eswt_app_pane_g

0xe2ff,	// (0x0004d95f) cell_eswt_app_pane_t1_ParamLimits

0xe2ff,	// (0x0004d95f) cell_eswt_app_pane_t1

0x8170,	// (0x000477d0) grid_highlight_pane_cp70_ParamLimits

0x8170,	// (0x000477d0) grid_highlight_pane_cp70

0x3d92,	// (0x000433f2) set_content_pane_g1

0x4994,	// (0x00043ff4) status_small_volume_pane

0x275c,	// (0x00041dbc) status_small_volume_pane_g1

0x2764,	// (0x00041dc4) volume_small2_pane

0x276d,	// (0x00041dcd) volume_small2_pane_g1

0x2776,	// (0x00041dd6) volume_small2_pane_g2

0x277f,	// (0x00041ddf) volume_small2_pane_g3

0x2788,	// (0x00041de8) volume_small2_pane_g4

0x2791,	// (0x00041df1) volume_small2_pane_g5

0x279a,	// (0x00041dfa) volume_small2_pane_g6

0x27a3,	// (0x00041e03) volume_small2_pane_g7

0x27ac,	// (0x00041e0c) volume_small2_pane_g8

0x27b5,	// (0x00041e15) volume_small2_pane_g9

0x27be,	// (0x00041e1e) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x0004f280) volume_small2_pane_g

0x7a0d,	// (0x0004706d) fep_vkb_top_text_pane_g1_ParamLimits

0xe1ce,	// (0x0004d82e) fep_vkb_top_text_pane_t1_ParamLimits

0x7cc4,	// (0x00047324) popup_preview_fixed_window_g3_ParamLimits

0x7cc4,	// (0x00047324) popup_preview_fixed_window_g3

0xc6e8,	// (0x0004bd48) popup_toolbar_trans_pane

0xdbce,	// (0x0004d22e) aid_height_set_list_ParamLimits

0x6406,	// (0x00045a66) aid_size_parent_ParamLimits

0x4a34,	// (0x00044094) list_highlight_pane_cp2_ParamLimits

0x3d92,	// (0x000433f2) set_content_pane_g1_ParamLimits

0xc923,	// (0x0004bf83) list_single_image_pane_ParamLimits

0xc923,	// (0x0004bf83) list_single_image_pane

0xe331,	// (0x0004d991) aid_size_cell_image_ParamLimits

0xe331,	// (0x0004d991) aid_size_cell_image

0xe33e,	// (0x0004d99e) grid_single_image_pane_ParamLimits

0xe33e,	// (0x0004d99e) grid_single_image_pane

0x4f7d,	// (0x000445dd) list_single_image_pane_g1_ParamLimits

0x4f7d,	// (0x000445dd) list_single_image_pane_g1

0x8197,	// (0x000477f7) list_single_image_pane_g2_ParamLimits

0x8197,	// (0x000477f7) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x0004f295) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x0004f295) list_single_image_pane_g

0x563e,	// (0x00044c9e) list_single_image_pane_t1_ParamLimits

0x563e,	// (0x00044c9e) list_single_image_pane_t1

0xe34c,	// (0x0004d9ac) cell_image_list_pane_ParamLimits

0xe34c,	// (0x0004d9ac) cell_image_list_pane

0xe362,	// (0x0004d9c2) cell_image_list_pane_g1

0xe36b,	// (0x0004d9cb) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x0004f29a) cell_image_list_pane_g

0x81d0,	// (0x00047830) aid_size_cell_tb_trans_pane

0x3a8e,	// (0x000430ee) bg_tb_trans_pane

0x81e2,	// (0x00047842) grid_tb_trans_pane

0x4f35,	// (0x00044595) bg_tb_trans_pane_g1

0x4f3d,	// (0x0004459d) bg_tb_trans_pane_g2

0x4f45,	// (0x000445a5) bg_tb_trans_pane_g3

0x4f4d,	// (0x000445ad) bg_tb_trans_pane_g4

0x4f55,	// (0x000445b5) bg_tb_trans_pane_g5

0x4f6d,	// (0x000445cd) bg_tb_trans_pane_g6

0x4f75,	// (0x000445d5) bg_tb_trans_pane_g7

0x4f5d,	// (0x000445bd) bg_tb_trans_pane_g8

0x4f65,	// (0x000445c5) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x0004f29f) bg_tb_trans_pane_g

0x81f6,	// (0x00047856) cell_toolbar_trans_pane_ParamLimits

0x81f6,	// (0x00047856) cell_toolbar_trans_pane

0x7647,	// (0x00046ca7) cell_toolbar_trans_pane_g1

0xdf8f,	// (0x0004d5ef) list_form2_midp_pane_t1

0xdf9d,	// (0x0004d5fd) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0004f148) list_form2_midp_pane_t

0x722d,	// (0x0004688d) scroll_pane_cp51_ParamLimits

0x73e9,	// (0x00046a49) form2_midp_wait_pane_g1

0x73f2,	// (0x00046a52) form2_midp_wait_pane_g2

0x73fb,	// (0x00046a5b) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0004f15d) form2_midp_wait_pane_g

0x3222,	// (0x00042882) list_highlight_pane_cp21_ParamLimits

0x7452,	// (0x00046ab2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7461,	// (0x00046ac1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x65be,	// (0x00045c1e) list_single_2graphic_im_pane_ParamLimits

0x65be,	// (0x00045c1e) list_single_2graphic_im_pane

0xe374,	// (0x0004d9d4) list_single_2graphic_im_pane_g1_ParamLimits

0xe374,	// (0x0004d9d4) list_single_2graphic_im_pane_g1

0xe385,	// (0x0004d9e5) list_single_2graphic_im_pane_g2_ParamLimits

0xe385,	// (0x0004d9e5) list_single_2graphic_im_pane_g2

0xe391,	// (0x0004d9f1) list_single_2graphic_im_pane_g3_ParamLimits

0xe391,	// (0x0004d9f1) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x0004f2b2) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x0004f2b2) list_single_2graphic_im_pane_g

0xe3a5,	// (0x0004da05) list_single_2graphic_im_pane_t1_ParamLimits

0xe3a5,	// (0x0004da05) list_single_2graphic_im_pane_t1

0x7cd0,	// (0x00047330) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cd0,	// (0x00047330) list_single_graphic_2heading_pane_fp

0x0b7e,	// (0x000401de) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0b7e,	// (0x000401de) list_single_graphic_2heading_pane_fp_g1

0x7ce5,	// (0x00047345) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7ce5,	// (0x00047345) list_single_graphic_2heading_pane_fp_g2

0x3aa8,	// (0x00043108) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3aa8,	// (0x00043108) list_single_graphic_2heading_pane_fp_g3

0x3ab4,	// (0x00043114) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3ab4,	// (0x00043114) list_single_graphic_2heading_pane_fp_g4

0x7cf1,	// (0x00047351) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7cf1,	// (0x00047351) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0004f1e0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0004f1e0) list_single_graphic_2heading_pane_fp_g

0x0cc7,	// (0x00040327) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0cc7,	// (0x00040327) list_single_graphic_2heading_pane_fp_t1

0x0bb6,	// (0x00040216) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0bb6,	// (0x00040216) list_single_graphic_2heading_pane_fp_t2

0x0cdd,	// (0x0004033d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0cdd,	// (0x0004033d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x0004f2bb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x0004f2bb) list_single_graphic_2heading_pane_fp_t

0x76d3,	// (0x00046d33) fep_hwr_write_pane_g5_ParamLimits

0x76d3,	// (0x00046d33) fep_hwr_write_pane_g5

0x76df,	// (0x00046d3f) fep_hwr_write_pane_g6_ParamLimits

0x76df,	// (0x00046d3f) fep_hwr_write_pane_g6

0x7f61,	// (0x000475c1) eswt_shell_pane_ParamLimits

0x5039,	// (0x00044699) bg_popup_window_pane_cp18_ParamLimits

0x630c,	// (0x0004596c) heading_pane_cp70

0x808b,	// (0x000476eb) popup_eswt_tasktip_window_t1_ParamLimits

0xd585,	// (0x0004cbe5) aid_touch_tab_arrow_left

0xd59b,	// (0x0004cbfb) aid_touch_tab_arrow_right

0xbe5a,	// (0x0004b4ba) title_pane_g3_ParamLimits

0xbe5a,	// (0x0004b4ba) title_pane_g3

0x3a4d,	// (0x000430ad) set_value_pane_g1

0xc6e8,	// (0x0004bd48) popup_toolbar_trans_pane_ParamLimits

0x81d0,	// (0x00047830) aid_size_cell_tb_trans_pane_ParamLimits

0x3a8e,	// (0x000430ee) bg_tb_trans_pane_ParamLimits

0x81e2,	// (0x00047842) grid_tb_trans_pane_ParamLimits

0x34ab,	// (0x00042b0b) cont_note_pane_ParamLimits

0x34ab,	// (0x00042b0b) cont_note_pane

0x37ff,	// (0x00042e5f) cont_snote2_single_text_pane_ParamLimits

0x37ff,	// (0x00042e5f) cont_snote2_single_text_pane

0x37ff,	// (0x00042e5f) cont_snote2_single_graphic_pane_ParamLimits

0x37ff,	// (0x00042e5f) cont_snote2_single_graphic_pane

0x5663,	// (0x00044cc3) cont_note_wait_pane_ParamLimits

0x5663,	// (0x00044cc3) cont_note_wait_pane

0x5663,	// (0x00044cc3) cont_note_image_pane_ParamLimits

0x5663,	// (0x00044cc3) cont_note_image_pane

0x828a,	// (0x000478ea) popup_note2_window_g1_ParamLimits

0x828a,	// (0x000478ea) popup_note2_window_g1

0x82bb,	// (0x0004791b) popup_note2_window_t1_ParamLimits

0x82bb,	// (0x0004791b) popup_note2_window_t1

0x8300,	// (0x00047960) popup_note2_window_t2_ParamLimits

0x8300,	// (0x00047960) popup_note2_window_t2

0x8345,	// (0x000479a5) popup_note2_window_t3_ParamLimits

0x8345,	// (0x000479a5) popup_note2_window_t3

0x838a,	// (0x000479ea) popup_note2_window_t4_ParamLimits

0x838a,	// (0x000479ea) popup_note2_window_t4

0x352f,	// (0x00042b8f) popup_note2_window_t5_ParamLimits

0x352f,	// (0x00042b8f) popup_note2_window_t5

0x0004,

0xfc67,	// (0x0004f2c7) popup_note2_window_t_ParamLimits

0xfc67,	// (0x0004f2c7) popup_note2_window_t

0x83b9,	// (0x00047a19) popup_note2_image_window_g1_ParamLimits

0x83b9,	// (0x00047a19) popup_note2_image_window_g1

0x83c5,	// (0x00047a25) popup_note2_image_window_g2_ParamLimits

0x83c5,	// (0x00047a25) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x0004f2d2) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x0004f2d2) popup_note2_image_window_g

0x83d7,	// (0x00047a37) popup_note2_image_window_t1_ParamLimits

0x83d7,	// (0x00047a37) popup_note2_image_window_t1

0x83ef,	// (0x00047a4f) popup_note2_image_window_t2_ParamLimits

0x83ef,	// (0x00047a4f) popup_note2_image_window_t2

0x8407,	// (0x00047a67) popup_note2_image_window_t3_ParamLimits

0x8407,	// (0x00047a67) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x0004f2d7) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x0004f2d7) popup_note2_image_window_t

0x5671,	// (0x00044cd1) popup_note2_wait_window_g1_ParamLimits

0x5671,	// (0x00044cd1) popup_note2_wait_window_g1

0x8423,	// (0x00047a83) popup_note2_wait_window_g2_ParamLimits

0x8423,	// (0x00047a83) popup_note2_wait_window_g2

0x5689,	// (0x00044ce9) popup_note2_wait_window_g3_ParamLimits

0x5689,	// (0x00044ce9) popup_note2_wait_window_g3

0x0002,

0xfc7e,	// (0x0004f2de) popup_note2_wait_window_g_ParamLimits

0xfc7e,	// (0x0004f2de) popup_note2_wait_window_g

0x842f,	// (0x00047a8f) popup_note2_wait_window_t1_ParamLimits

0x842f,	// (0x00047a8f) popup_note2_wait_window_t1

0x844d,	// (0x00047aad) popup_note2_wait_window_t2_ParamLimits

0x844d,	// (0x00047aad) popup_note2_wait_window_t2

0x846b,	// (0x00047acb) popup_note2_wait_window_t3_ParamLimits

0x846b,	// (0x00047acb) popup_note2_wait_window_t3

0x847d,	// (0x00047add) popup_note2_wait_window_t4_ParamLimits

0x847d,	// (0x00047add) popup_note2_wait_window_t4

0x0003,

0xfc85,	// (0x0004f2e5) popup_note2_wait_window_t_ParamLimits

0xfc85,	// (0x0004f2e5) popup_note2_wait_window_t

0x848f,	// (0x00047aef) wait_bar2_pane_ParamLimits

0x848f,	// (0x00047aef) wait_bar2_pane

0x84a7,	// (0x00047b07) popup_snote2_single_text_window_g1_ParamLimits

0x84a7,	// (0x00047b07) popup_snote2_single_text_window_g1

0x84cf,	// (0x00047b2f) popup_snote2_single_text_window_t1_ParamLimits

0x84cf,	// (0x00047b2f) popup_snote2_single_text_window_t1

0x851b,	// (0x00047b7b) popup_snote2_single_text_window_t2_ParamLimits

0x851b,	// (0x00047b7b) popup_snote2_single_text_window_t2

0x8567,	// (0x00047bc7) popup_snote2_single_text_window_t3_ParamLimits

0x8567,	// (0x00047bc7) popup_snote2_single_text_window_t3

0x85a8,	// (0x00047c08) popup_snote2_single_text_window_t4_ParamLimits

0x85a8,	// (0x00047c08) popup_snote2_single_text_window_t4

0x85de,	// (0x00047c3e) popup_snote2_single_text_window_t5_ParamLimits

0x85de,	// (0x00047c3e) popup_snote2_single_text_window_t5

0x0004,

0xfc8e,	// (0x0004f2ee) popup_snote2_single_text_window_t_ParamLimits

0xfc8e,	// (0x0004f2ee) popup_snote2_single_text_window_t

0x8609,	// (0x00047c69) popup_snote2_single_graphic_window_g1_ParamLimits

0x8609,	// (0x00047c69) popup_snote2_single_graphic_window_g1

0x8631,	// (0x00047c91) popup_snote2_single_graphic_window_g2_ParamLimits

0x8631,	// (0x00047c91) popup_snote2_single_graphic_window_g2

0x0001,

0xfc99,	// (0x0004f2f9) popup_snote2_single_graphic_window_g_ParamLimits

0xfc99,	// (0x0004f2f9) popup_snote2_single_graphic_window_g

0x8659,	// (0x00047cb9) popup_snote2_single_graphic_window_t1_ParamLimits

0x8659,	// (0x00047cb9) popup_snote2_single_graphic_window_t1

0x86a5,	// (0x00047d05) popup_snote2_single_graphic_window_t2_ParamLimits

0x86a5,	// (0x00047d05) popup_snote2_single_graphic_window_t2

0x8567,	// (0x00047bc7) popup_snote2_single_graphic_window_t3_ParamLimits

0x8567,	// (0x00047bc7) popup_snote2_single_graphic_window_t3

0x85a8,	// (0x00047c08) popup_snote2_single_graphic_window_t4_ParamLimits

0x85a8,	// (0x00047c08) popup_snote2_single_graphic_window_t4

0x85de,	// (0x00047c3e) popup_snote2_single_graphic_window_t5_ParamLimits

0x85de,	// (0x00047c3e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9e,	// (0x0004f2fe) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9e,	// (0x0004f2fe) popup_snote2_single_graphic_window_t

0x70f0,	// (0x00046750) clock_nsta_pane_cp2_t1

0x70f0,	// (0x00046750) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0004f11e) clock_nsta_pane_cp2_t

0x0586,	// (0x0003fbe6) form_field_data_wide_pane_g1_ParamLimits

0x3aa8,	// (0x00043108) form_field_data_wide_pane_g2_ParamLimits

0x3aa8,	// (0x00043108) form_field_data_wide_pane_g2

0x3ab4,	// (0x00043114) form_field_data_wide_pane_g3_ParamLimits

0x3ab4,	// (0x00043114) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0004ece6) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0004ece6) form_field_data_wide_pane_g

0xdec8,	// (0x0004d528) grid_touch_3_pane_ParamLimits

0xdec8,	// (0x0004d528) grid_touch_3_pane

0xe3d6,	// (0x0004da36) cell_touch_3_pane_ParamLimits

0xe3d6,	// (0x0004da36) cell_touch_3_pane

0x7647,	// (0x00046ca7) cell_touch_3_pane_g1

0x7647,	// (0x00046ca7) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0004f1a3) cell_touch_3_pane_g

0x3561,	// (0x00042bc1) cont_query_data_pane

0x3569,	// (0x00042bc9) cont_query_data_pane_cp1

0x871f,	// (0x00047d7f) button_value_adjust_pane_cp7

0x8727,	// (0x00047d87) query_popup_pane_cp3

0x41e8,	// (0x00043848) bg_popup_sub_pane_cp22_ParamLimits

0x1519,	// (0x00040b79) navi_navi_volume_pane_cp2

0x1534,	// (0x00040b94) popup_side_volume_key_window_g2

0x1543,	// (0x00040ba3) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0004ed7c) popup_side_volume_key_window_g

0x1560,	// (0x00040bc0) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0004ed83) popup_side_volume_key_window_t

0x449f,	// (0x00043aff) popup_side_volume_key_window_ParamLimits

0xb648,	// (0x0004aca8) list_double_graphic_pane_g4_ParamLimits

0xb648,	// (0x0004aca8) list_double_graphic_pane_g4

0xdd35,	// (0x0004d395) list_single_2heading_msg_pane_ParamLimits

0xdd35,	// (0x0004d395) list_single_2heading_msg_pane

0xc981,	// (0x0004bfe1) list_single_2heading_msg_pane_g1_ParamLimits

0xc981,	// (0x0004bfe1) list_single_2heading_msg_pane_g1

0xc98d,	// (0x0004bfed) list_single_2heading_msg_pane_g2_ParamLimits

0xc98d,	// (0x0004bfed) list_single_2heading_msg_pane_g2

0xc9a0,	// (0x0004c000) list_single_2heading_msg_pane_g3_ParamLimits

0xc9a0,	// (0x0004c000) list_single_2heading_msg_pane_g3

0xc9ac,	// (0x0004c00c) list_single_2heading_msg_pane_g4_ParamLimits

0xc9ac,	// (0x0004c00c) list_single_2heading_msg_pane_g4

0x0003,

0xfca9,	// (0x0004f309) list_single_2heading_msg_pane_g_ParamLimits

0xfca9,	// (0x0004f309) list_single_2heading_msg_pane_g

0xbb71,	// (0x0004b1d1) list_single_2heading_msg_pane_t1_ParamLimits

0xbb71,	// (0x0004b1d1) list_single_2heading_msg_pane_t1

0xbb99,	// (0x0004b1f9) list_single_2heading_msg_pane_t2_ParamLimits

0xbb99,	// (0x0004b1f9) list_single_2heading_msg_pane_t2

0xbc04,	// (0x0004b264) list_single_2heading_msg_pane_t3_ParamLimits

0xbc04,	// (0x0004b264) list_single_2heading_msg_pane_t3

0x0d92,	// (0x000403f2) list_single_2heading_msg_pane_t4_ParamLimits

0x0d92,	// (0x000403f2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb2,	// (0x0004f312) list_single_2heading_msg_pane_t_ParamLimits

0xfcb2,	// (0x0004f312) list_single_2heading_msg_pane_t

0x3176,	// (0x000427d6) title_pane_g4_ParamLimits

0x3176,	// (0x000427d6) title_pane_g4

0x1327,	// (0x00040987) title_pane_stacon_g3_ParamLimits

0x1327,	// (0x00040987) title_pane_stacon_g3

0x824d,	// (0x000478ad) list_single_2graphic_im_pane_g4_ParamLimits

0x824d,	// (0x000478ad) list_single_2graphic_im_pane_g4

0x60b3,	// (0x00045713) popup_side_volume_key_window_cp

0x68e0,	// (0x00045f40) main_idle_act2_pane_t1

0x1eb3,	// (0x00041513) toolbar_button_pane_g10

0xd16b,	// (0x0004c7cb) popup_toolbar_window_cp1

0x70e1,	// (0x00046741) clock_nsta_pane_cp_t1

0x70e1,	// (0x00046741) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0004f119) clock_nsta_pane_cp_t

0x1519,	// (0x00040b79) navi_navi_volume_pane_cp2_ParamLimits

0x1528,	// (0x00040b88) popup_side_volume_key_window_g1_ParamLimits

0x1534,	// (0x00040b94) popup_side_volume_key_window_g2_ParamLimits

0x1543,	// (0x00040ba3) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0004ed7c) popup_side_volume_key_window_g_ParamLimits

0x23e8,	// (0x00041a48) fep_hwr_aid_pane

0xe074,	// (0x0004d6d4) bg_fep_hwr_top_pane_g4_ParamLimits

0x76a3,	// (0x00046d03) fep_hwr_top_pane_g1_ParamLimits

0x76b5,	// (0x00046d15) fep_hwr_top_pane_g2_ParamLimits

0x24a1,	// (0x00041b01) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0004f16e) fep_hwr_top_pane_g_ParamLimits

0x24b6,	// (0x00041b16) fep_hwr_top_text_pane_ParamLimits

0x5e76,	// (0x000454d6) aid_touch_tab_arrow_arrow_2

0x5e7f,	// (0x000454df) aid_touch_tab_arrow_left_2

0x23fc,	// (0x00041a5c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2433,	// (0x00041a93) fep_hwr_prediction_pane

0x7815,	// (0x00046e75) fep_vkb_prediction_pane

0xe1ae,	// (0x0004d80e) fep_vkb_side_pane_g3_ParamLimits

0xe1ae,	// (0x0004d80e) fep_vkb_side_pane_g3

0x78c5,	// (0x00046f25) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d45,	// (0x000473a5) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7d52,	// (0x000473b2) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0004f218) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x874c,	// (0x00047dac) fep_hwr_prediction_pane_g1

0x27f7,	// (0x00041e57) fep_hwr_prediction_pane_g2

0x27ff,	// (0x00041e5f) fep_hwr_prediction_pane_g3

0x2807,	// (0x00041e67) fep_hwr_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0004f31b) fep_hwr_prediction_pane_g

0x874c,	// (0x00047dac) fep_vkb_prediction_pane_g1

0x8756,	// (0x00047db6) fep_vkb_prediction_pane_g2

0x875e,	// (0x00047dbe) fep_vkb_prediction_pane_g3

0x8766,	// (0x00047dc6) fep_vkb_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0004f324) fep_vkb_prediction_pane_g

0x6385,	// (0x000459e5) slider_set_pane_g3

0x6399,	// (0x000459f9) slider_set_pane_g4

0x63b1,	// (0x00045a11) slider_set_pane_g5

0x6385,	// (0x000459e5) slider_set_pane_g6

0x218f,	// (0x000417ef) slider_set_pane_g7

0x656b,	// (0x00045bcb) slider_form_pane_g3

0x6574,	// (0x00045bd4) slider_form_pane_g4

0x657c,	// (0x00045bdc) slider_form_pane_g5

0x656b,	// (0x00045bcb) slider_form_pane_g6

0xdd19,	// (0x0004d379) slider_form_pane_g7

0x6b89,	// (0x000461e9) slider_set_pane_vc_g3

0x6b92,	// (0x000461f2) slider_set_pane_vc_g4

0x6b9b,	// (0x000461fb) slider_set_pane_vc_g5

0x6b89,	// (0x000461e9) slider_set_pane_vc_g6

0x6ba4,	// (0x00046204) slider_set_pane_vc_g7

0x6d9c,	// (0x000463fc) slider_form_pane_vc_g1

0x6da5,	// (0x00046405) slider_form_pane_vc_g2

0x6dae,	// (0x0004640e) slider_form_pane_vc_g3

0x6d9c,	// (0x000463fc) slider_form_pane_vc_g4

0x6db7,	// (0x00046417) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0004f0eb) slider_form_pane_vc_g

0x312e,	// (0x0004278e) main_idle_act3_pane

0x876e,	// (0x00047dce) ai3_links_pane

0xe420,	// (0x0004da80) popup_ai3_data_window_ParamLimits

0xe420,	// (0x0004da80) popup_ai3_data_window

0x312e,	// (0x0004278e) grid_ai3_links_pane

0xe43a,	// (0x0004da9a) cell_ai3_links_pane_ParamLimits

0xe43a,	// (0x0004da9a) cell_ai3_links_pane

0x87a9,	// (0x00047e09) bg_popup_sub_pane_cp11

0x87b6,	// (0x00047e16) cell_ai3_links_pane_g1

0x312e,	// (0x0004278e) bg_popup_sub_pane_cp12

0x87db,	// (0x00047e3b) heading_ai3_data_pane

0x87e3,	// (0x00047e43) list_ai3_gene_pane

0x87ef,	// (0x00047e4f) popup_ai3_data_window_g1

0x87f7,	// (0x00047e57) heading_ai3_data_pane_g1

0x87ff,	// (0x00047e5f) heading_ai3_data_pane_t1

0x880d,	// (0x00047e6d) list_double_ai3_gene_pane_ParamLimits

0x880d,	// (0x00047e6d) list_double_ai3_gene_pane

0x881a,	// (0x00047e7a) list_single_ai3_gene_pane_ParamLimits

0x881a,	// (0x00047e7a) list_single_ai3_gene_pane

0x760c,	// (0x00046c6c) list_highlight_pane_cp7_ParamLimits

0x760c,	// (0x00046c6c) list_highlight_pane_cp7

0x8827,	// (0x00047e87) list_single_a13_gene_pane_t1_ParamLimits

0x8827,	// (0x00047e87) list_single_a13_gene_pane_t1

0x883e,	// (0x00047e9e) list_single_ai3_gene_pane_g1

0x8847,	// (0x00047ea7) list_single_ai3_gene_pane_g2

0x0001,

0xfccd,	// (0x0004f32d) list_single_ai3_gene_pane_g

0x884f,	// (0x00047eaf) list_double_ai3_gene_pane_g1_ParamLimits

0x884f,	// (0x00047eaf) list_double_ai3_gene_pane_g1

0x885b,	// (0x00047ebb) list_double_ai3_gene_pane_t1_ParamLimits

0x885b,	// (0x00047ebb) list_double_ai3_gene_pane_t1

0x8877,	// (0x00047ed7) list_double_ai3_gene_pane_t2_ParamLimits

0x8877,	// (0x00047ed7) list_double_ai3_gene_pane_t2

0x888d,	// (0x00047eed) list_double_ai3_gene_pane_t3_ParamLimits

0x888d,	// (0x00047eed) list_double_ai3_gene_pane_t3

0x0002,

0xfcd2,	// (0x0004f332) list_double_ai3_gene_pane_t_ParamLimits

0xfcd2,	// (0x0004f332) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0cf3,	// (0x00040353) aid_size_min_col_2

0xe40a,	// (0x0004da6a) aid_size_min_msg_ParamLimits

0xe40a,	// (0x0004da6a) aid_size_min_msg

0xe1c2,	// (0x0004d822) fep_vkb_top_text_pane_g2_ParamLimits

0xe1c2,	// (0x0004d822) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0004f19e) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0004f19e) fep_vkb_top_text_pane_g

0x312e,	// (0x0004278e) main_hc_apps_shell_pane

0x88aa,	// (0x00047f0a) grid_hc_apps_pane_ParamLimits

0x88aa,	// (0x00047f0a) grid_hc_apps_pane

0x88b9,	// (0x00047f19) list_hc_apps_pane

0x88c1,	// (0x00047f21) scroll_pane_cp37_ParamLimits

0x88c1,	// (0x00047f21) scroll_pane_cp37

0xe454,	// (0x0004dab4) cell_hc_apps_pane_ParamLimits

0xe454,	// (0x0004dab4) cell_hc_apps_pane

0xe512,	// (0x0004db72) cell_hc_apps_pane_g1_ParamLimits

0xe512,	// (0x0004db72) cell_hc_apps_pane_g1

0x89ac,	// (0x0004800c) cell_hc_apps_pane_g2_ParamLimits

0x89ac,	// (0x0004800c) cell_hc_apps_pane_g2

0x89c8,	// (0x00048028) cell_hc_apps_pane_g3_ParamLimits

0x89c8,	// (0x00048028) cell_hc_apps_pane_g3

0x0002,

0xfcd9,	// (0x0004f339) cell_hc_apps_pane_g_ParamLimits

0xfcd9,	// (0x0004f339) cell_hc_apps_pane_g

0xe53f,	// (0x0004db9f) cell_hc_apps_pane_t1_ParamLimits

0xe53f,	// (0x0004db9f) cell_hc_apps_pane_t1

0x34ab,	// (0x00042b0b) grid_highlight_pane_cp10_ParamLimits

0x34ab,	// (0x00042b0b) grid_highlight_pane_cp10

0xe57d,	// (0x0004dbdd) list_single_hc_apps_pane_ParamLimits

0xe57d,	// (0x0004dbdd) list_single_hc_apps_pane

0xe5aa,	// (0x0004dc0a) list_single_hc_apps_pane_g1

0xc9c4,	// (0x0004c024) list_single_hc_apps_pane_g2

0x0001,

0xfce0,	// (0x0004f340) list_single_hc_apps_pane_g

0xc9dd,	// (0x0004c03d) list_single_hc_apps_pane_g2_copy1

0x0db7,	// (0x00040417) list_single_hc_apps_pane_t1

0x3222,	// (0x00042882) bg_set_opt_pane_cp_ParamLimits

0x11d2,	// (0x00040832) setting_slider_pane_t1_ParamLimits

0x11eb,	// (0x0004084b) setting_slider_pane_t2_ParamLimits

0x1205,	// (0x00040865) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004ebc4) setting_slider_pane_t_ParamLimits

0x121d,	// (0x0004087d) slider_set_pane_ParamLimits

0x17be,	// (0x00040e1e) control_pane_g5_ParamLimits

0x17be,	// (0x00040e1e) control_pane_g5

0x6378,	// (0x000459d8) slider_set_pane_g1_ParamLimits

0x2183,	// (0x000417e3) slider_set_pane_g2_ParamLimits

0x6385,	// (0x000459e5) slider_set_pane_g3_ParamLimits

0x6399,	// (0x000459f9) slider_set_pane_g4_ParamLimits

0x63b1,	// (0x00045a11) slider_set_pane_g5_ParamLimits

0x6385,	// (0x000459e5) slider_set_pane_g6_ParamLimits

0x218f,	// (0x000417ef) slider_set_pane_g7_ParamLimits

0xf963,	// (0x0004efc3) slider_set_pane_g_ParamLimits

0x4580,	// (0x00043be0) navi_icon_text_pane_ParamLimits

0xd54e,	// (0x0004cbae) aid_fill_nsta_2_ParamLimits

0xd585,	// (0x0004cbe5) aid_touch_tab_arrow_left_ParamLimits

0xd59b,	// (0x0004cbfb) aid_touch_tab_arrow_right_ParamLimits

0xd636,	// (0x0004cc96) clock_nsta_pane_ParamLimits

0x5e58,	// (0x000454b8) navi_icon_pane_g1_ParamLimits

0x5e64,	// (0x000454c4) navi_text_pane_t1_ParamLimits

0x71eb,	// (0x0004684b) navi_icon_text_pane_g1_ParamLimits

0x71f7,	// (0x00046857) navi_icon_text_pane_t1_ParamLimits

0xe5aa,	// (0x0004dc0a) list_single_hc_apps_pane_g1_ParamLimits

0xc9c4,	// (0x0004c024) list_single_hc_apps_pane_g2_ParamLimits

0xfce0,	// (0x0004f340) list_single_hc_apps_pane_g_ParamLimits

0xc9dd,	// (0x0004c03d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0db7,	// (0x00040417) list_single_hc_apps_pane_t1_ParamLimits

0xbdc4,	// (0x0004b424) popup_toolbar2_fixed_window_ParamLimits

0xbdc4,	// (0x0004b424) popup_toolbar2_fixed_window

0xc6de,	// (0x0004bd3e) popup_toolbar2_float_window

0x312e,	// (0x0004278e) bg_popup_sub_pane_cp27

0x8a9f,	// (0x000480ff) grid_toolbar2_float_pane

0x312e,	// (0x0004278e) bg_popup_sub_pane_cp26

0x8a9f,	// (0x000480ff) grid_toolbar2_fixed_pane

0xe5c3,	// (0x0004dc23) cell_toolbar2_fixed_pane_ParamLimits

0xe5c3,	// (0x0004dc23) cell_toolbar2_fixed_pane

0xe5de,	// (0x0004dc3e) cell_toolbar2_fixed_pane_g1

0x8ac0,	// (0x00048120) toolbar2_fixed_button_pane

0x4f35,	// (0x00044595) toolbar2_fixed_button_pane_g1

0x4f3d,	// (0x0004459d) toolbar2_fixed_button_pane_g2

0x4f45,	// (0x000445a5) toolbar2_fixed_button_pane_g3

0x4f4d,	// (0x000445ad) toolbar2_fixed_button_pane_g4

0x4f55,	// (0x000445b5) toolbar2_fixed_button_pane_g5

0x4f5d,	// (0x000445bd) toolbar2_fixed_button_pane_g6

0x4f65,	// (0x000445c5) toolbar2_fixed_button_pane_g7

0x4f6d,	// (0x000445cd) toolbar2_fixed_button_pane_g8

0x4f75,	// (0x000445d5) toolbar2_fixed_button_pane_g9

0x0008,

0xf865,	// (0x0004eec5) toolbar2_fixed_button_pane_g

0x8ac8,	// (0x00048128) cell_toolbar2_float_pane_ParamLimits

0x8ac8,	// (0x00048128) cell_toolbar2_float_pane

0x8ad9,	// (0x00048139) cell_toolbar2_float_pane_g1

0x8ac0,	// (0x00048120) toolbar2_fixed_button_pane_cp

0xe09c,	// (0x0004d6fc) fep_vkb_accented_list_pane_ParamLimits

0xe09c,	// (0x0004d6fc) fep_vkb_accented_list_pane

0x2604,	// (0x00041c64) bg_popup_fep_shadow_pane_g9

0x46f4,	// (0x00043d54) bg_popup_fep_shadow_pane_cp3

0x3bf1,	// (0x00043251) list_accented_list_pane

0x8ae2,	// (0x00048142) list_single_accented_list_pane_ParamLimits

0x8ae2,	// (0x00048142) list_single_accented_list_pane

0x46f4,	// (0x00043d54) list_highlight_pane_cp10

0x8af3,	// (0x00048153) list_single_accented_list_pane_t1

0xc608,	// (0x0004bc68) popup_slider_window_ParamLimits

0xc608,	// (0x0004bc68) popup_slider_window

0x872f,	// (0x00047d8f) aid_indentation_list_msg

0xe6e4,	// (0x0004dd44) bg_popup_window_pane_cp19

0x8c17,	// (0x00048277) popup_slider_window_g1

0x8c33,	// (0x00048293) popup_slider_window_g2

0x8c4f,	// (0x000482af) popup_slider_window_g3

0x0005,

0xfce5,	// (0x0004f345) popup_slider_window_g

0x8cab,	// (0x0004830b) popup_slider_window_t1

0x8d1f,	// (0x0004837f) small_volume_slider_vertical_pane

0x7647,	// (0x00046ca7) small_volume_slider_vertical_pane_g1

0x7647,	// (0x00046ca7) small_volume_slider_vertical_pane_g2

0x8d3b,	// (0x0004839b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf7,	// (0x0004f357) small_volume_slider_vertical_pane_g

0xbd32,	// (0x0004b392) area_side_right_pane_ParamLimits

0xbd32,	// (0x0004b392) area_side_right_pane

0xc9f9,	// (0x0004c059) aid_size_side_button_ParamLimits

0xc9f9,	// (0x0004c059) aid_size_side_button

0xca12,	// (0x0004c072) grid_sctrl_middle_pane_ParamLimits

0xca12,	// (0x0004c072) grid_sctrl_middle_pane

0x2878,	// (0x00041ed8) sctrl_sk_bottom_pane

0x2889,	// (0x00041ee9) sctrl_sk_top_pane

0x289b,	// (0x00041efb) aid_touch_sctrl_top

0x34ab,	// (0x00042b0b) bg_sctrl_sk_pane_ParamLimits

0x34ab,	// (0x00042b0b) bg_sctrl_sk_pane

0x28a8,	// (0x00041f08) sctrl_sk_top_pane_g1

0x28b5,	// (0x00041f15) sctrl_sk_top_pane_t1

0x289b,	// (0x00041efb) aid_touch_sctrl_bottom

0x34ab,	// (0x00042b0b) bg_sctrl_sk_pane_cp_ParamLimits

0x34ab,	// (0x00042b0b) bg_sctrl_sk_pane_cp

0x28d0,	// (0x00041f30) sctrl_sk_bottom_pane_g1

0x28b5,	// (0x00041f15) sctrl_sk_bottom_pane_t1

0xca2c,	// (0x0004c08c) cell_sctrl_middle_pane_ParamLimits

0xca2c,	// (0x0004c08c) cell_sctrl_middle_pane

0xca3d,	// (0x0004c09d) aid_touch_sctrl_middle_ParamLimits

0xca3d,	// (0x0004c09d) aid_touch_sctrl_middle

0xca4a,	// (0x0004c0aa) bg_sctrl_middle_pane_ParamLimits

0xca4a,	// (0x0004c0aa) bg_sctrl_middle_pane

0x8dc3,	// (0x00048423) cell_sctrl_middle_pane_g1_ParamLimits

0x8dc3,	// (0x00048423) cell_sctrl_middle_pane_g1

0xca58,	// (0x0004c0b8) cell_sctrl_middle_pane_g2_ParamLimits

0xca58,	// (0x0004c0b8) cell_sctrl_middle_pane_g2

0x0001,

0xfd03,	// (0x0004f363) cell_sctrl_middle_pane_g_ParamLimits

0xfd03,	// (0x0004f363) cell_sctrl_middle_pane_g

0x4f35,	// (0x00044595) bg_sctrl_middle_pane_g1

0x4f3d,	// (0x0004459d) bg_sctrl_middle_pane_g2

0x4f45,	// (0x000445a5) bg_sctrl_middle_pane_g3

0x4f4d,	// (0x000445ad) bg_sctrl_middle_pane_g4

0x4f55,	// (0x000445b5) bg_sctrl_middle_pane_g5

0x4f5d,	// (0x000445bd) bg_sctrl_middle_pane_g6

0x4f65,	// (0x000445c5) bg_sctrl_middle_pane_g7

0x4f6d,	// (0x000445cd) bg_sctrl_middle_pane_g8

0x0007,

0xfd08,	// (0x0004f368) bg_sctrl_middle_pane_g

0x4f75,	// (0x000445d5) bg_sctrl_middle_pane_g8_copy1

0x4f35,	// (0x00044595) bg_sctrl_sk_pane_g1

0x4f3d,	// (0x0004459d) bg_sctrl_sk_pane_g2

0x4f45,	// (0x000445a5) bg_sctrl_sk_pane_g3

0x0008,

0xf865,	// (0x0004eec5) bg_sctrl_sk_pane_g

0x39bd,	// (0x0004301d) aid_size_touch_scroll_bar

0x4f4d,	// (0x000445ad) bg_sctrl_sk_pane_g4

0x4f55,	// (0x000445b5) bg_sctrl_sk_pane_g5

0x4f5d,	// (0x000445bd) bg_sctrl_sk_pane_g6

0x4f65,	// (0x000445c5) bg_sctrl_sk_pane_g7

0x4f6d,	// (0x000445cd) bg_sctrl_sk_pane_g8

0x4f75,	// (0x000445d5) bg_sctrl_sk_pane_g9

0x1966,	// (0x00040fc6) popup_fep_china_hwr2_fs_candidate_window

0xc128,	// (0x0004b788) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc128,	// (0x0004b788) popup_fep_china_hwr2_fs_control_window

0x78c5,	// (0x00046f25) sctrl_sk_top_pane_g2

0x0001,

0xfcfe,	// (0x0004f35e) sctrl_sk_top_pane_g

0xe79c,	// (0x0004ddfc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe79c,	// (0x0004ddfc) aid_fep_china_hwr2_fs_cell

0xe7b0,	// (0x0004de10) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7b0,	// (0x0004de10) bg_popup_fep_shadow_pane_cp4

0xe7c7,	// (0x0004de27) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7c7,	// (0x0004de27) bg_popup_fep_shadow_pane_cp5

0xe7d9,	// (0x0004de39) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7d9,	// (0x0004de39) popup_fep_china_hwr2_fs_control_bar_grid

0xe7ed,	// (0x0004de4d) popup_fep_china_hwr2_fs_control_funtion_grid

0x8d97,	// (0x000483f7) aid_fep_china_hwr2_fs_candi_cell

0x312e,	// (0x0004278e) bg_popup_fep_shadow_pane_cp6

0x8da1,	// (0x00048401) popup_fep_china_hwr2_fs_candidate_grid

0xe7f5,	// (0x0004de55) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7f5,	// (0x0004de55) cell_fep_china_hwr2_fs_funtion_grid

0x7647,	// (0x00046ca7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8dc3,	// (0x00048423) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8dc3,	// (0x00048423) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8dd1,	// (0x00048431) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8dd1,	// (0x00048431) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd19,	// (0x0004f379) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd19,	// (0x0004f379) cell_fep_china_hwr2_fs_funtion_grid_g

0xe80d,	// (0x0004de6d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe80d,	// (0x0004de6d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe822,	// (0x0004de82) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe822,	// (0x0004de82) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1e,	// (0x0004f37e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1e,	// (0x0004f37e) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e18,	// (0x00048478) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e20,	// (0x00048480) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e28,	// (0x00048488) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd23,	// (0x0004f383) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8e30,	// (0x00048490) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8e30,	// (0x00048490) cell_fep_china_hwr2_fs_candidate_grid

0x8e49,	// (0x000484a9) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8e51,	// (0x000484b1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7647,	// (0x00046ca7) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7647,	// (0x00046ca7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0004f1a3) cell_fep_china_hwr2_fs_candidate_grid_g

0x8e59,	// (0x000484b9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4b30,	// (0x00044190) clock_nsta_pane_cp_24_ParamLimits

0x4b30,	// (0x00044190) clock_nsta_pane_cp_24

0x4bae,	// (0x0004420e) indicator_nsta_pane_cp_24_ParamLimits

0x4bae,	// (0x0004420e) indicator_nsta_pane_cp_24

0x5ce3,	// (0x00045343) heading_pane_g1

0x0001,

0xf8ca,	// (0x0004ef2a) heading_pane_g

0x6729,	// (0x00045d89) grid_sct_catagory_button_pane

0x6759,	// (0x00045db9) scroll_pane_cp5_ParamLimits

0x7239,	// (0x00046899) button_value_adjust_pane_cp5_ParamLimits

0x7239,	// (0x00046899) button_value_adjust_pane_cp5

0x7318,	// (0x00046978) form2_midp_time_pane_ParamLimits

0x8e67,	// (0x000484c7) cell_sct_catagory_button_pane_ParamLimits

0x8e67,	// (0x000484c7) cell_sct_catagory_button_pane

0x760c,	// (0x00046c6c) bg_button_pane_cp01_ParamLimits

0x760c,	// (0x00046c6c) bg_button_pane_cp01

0x7647,	// (0x00046ca7) cell_sct_catagory_button_pane_g1

0xc681,	// (0x0004bce1) popup_tb_extension_window

0xe83e,	// (0x0004de9e) aid_size_cell_ext_ParamLimits

0xe83e,	// (0x0004de9e) aid_size_cell_ext

0x37ff,	// (0x00042e5f) bg_tb_trans_pane_cp1_ParamLimits

0x37ff,	// (0x00042e5f) bg_tb_trans_pane_cp1

0xe864,	// (0x0004dec4) grid_tb_ext_pane_ParamLimits

0xe864,	// (0x0004dec4) grid_tb_ext_pane

0xe8a2,	// (0x0004df02) cell_tb_ext_pane_ParamLimits

0xe8a2,	// (0x0004df02) cell_tb_ext_pane

0xe8ca,	// (0x0004df2a) cell_tb_ext_pane_g1_ParamLimits

0xe8ca,	// (0x0004df2a) cell_tb_ext_pane_g1

0x8efd,	// (0x0004855d) cell_tb_ext_pane_t1

0x34ab,	// (0x00042b0b) list_highlight_pane_cp11_ParamLimits

0x34ab,	// (0x00042b0b) list_highlight_pane_cp11

0x1105,	// (0x00040765) popup_uni_indicator_window_ParamLimits

0x1105,	// (0x00040765) popup_uni_indicator_window

0x3a8e,	// (0x000430ee) bg_popup_sub_pane_cp14

0x8f18,	// (0x00048578) list_uniindi_pane

0x8f24,	// (0x00048584) uniindi_top_pane

0x34ab,	// (0x00042b0b) bg_uniindi_top_pane

0x8f43,	// (0x000485a3) uniindi_top_pane_g1

0x8f59,	// (0x000485b9) uniindi_top_pane_g2

0x0003,

0xfd2a,	// (0x0004f38a) uniindi_top_pane_g

0x8f83,	// (0x000485e3) uniindi_top_pane_t1

0x8fad,	// (0x0004860d) list_single_uniindi_pane_ParamLimits

0x8fad,	// (0x0004860d) list_single_uniindi_pane

0x7647,	// (0x00046ca7) bg_uniindi_top_pane_g1

0x8fc0,	// (0x00048620) list_single_uniindi_pane_g1

0x8fd3,	// (0x00048633) list_single_uniindi_pane_t1

0x312e,	// (0x0004278e) control_bg_pane

0x8ff8,	// (0x00048658) bg_sctrl_sk_pane_cp1

0x9001,	// (0x00048661) bg_sctrl_sk_pane_cp2

0x900a,	// (0x0004866a) control_bg_pane_g1

0x9013,	// (0x00048673) control_bg_pane_g2

0x0001,

0xfd33,	// (0x0004f393) control_bg_pane_g

0x7073,	// (0x000466d3) cell_indicator_nsta_pane_g1_ParamLimits

0xdef7,	// (0x0004d557) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0004f107) cell_indicator_nsta_pane_g_ParamLimits

0x0b54,	// (0x000401b4) form2_midp_time_pane_t1_ParamLimits

0x23da,	// (0x00041a3a) main_idle_act4_pane_ParamLimits

0x23da,	// (0x00041a3a) main_idle_act4_pane

0xc681,	// (0x0004bce1) popup_tb_extension_window_ParamLimits

0xe889,	// (0x0004dee9) tb_ext_find_pane_ParamLimits

0xe889,	// (0x0004dee9) tb_ext_find_pane

0x901c,	// (0x0004867c) ai_gene_pane_1_cp1

0x482d,	// (0x00043e8d) ai_gene_pane_2_cp1

0x9024,	// (0x00048684) list_single_idle_plugin_calendar_pane

0x902d,	// (0x0004868d) list_single_idle_plugin_notification_pane

0x9036,	// (0x00048696) list_single_idle_plugin_player_pane

0xe8e7,	// (0x0004df47) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8e7,	// (0x0004df47) list_single_idle_plugin_shortcut_pane

0xe90f,	// (0x0004df6f) main_idle_act4_pane_t1

0xe925,	// (0x0004df85) main_idle_act4_pane_t2

0x0001,

0xfd38,	// (0x0004f398) main_idle_act4_pane_t

0xe93b,	// (0x0004df9b) middle_sk_idle_act4_pane_ParamLimits

0xe93b,	// (0x0004df9b) middle_sk_idle_act4_pane

0xe957,	// (0x0004dfb7) popup_clock_digital_analogue_window_cp2

0xe97f,	// (0x0004dfdf) shortcut_wheel_idle_act4_pane_ParamLimits

0xe97f,	// (0x0004dfdf) shortcut_wheel_idle_act4_pane

0x7647,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g1

0x7647,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g2

0x7647,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g3

0x7647,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g4

0x7647,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g5

0x90c9,	// (0x00048729) shortcut_wheel_idle_act4_pane_g6

0x90d1,	// (0x00048731) shortcut_wheel_idle_act4_pane_g7

0x90d9,	// (0x00048739) shortcut_wheel_idle_act4_pane_g8

0x90e1,	// (0x00048741) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3d,	// (0x0004f39d) shortcut_wheel_idle_act4_pane_g

0xe074,	// (0x0004d6d4) middle_sk_idle_act4_pane_g1_ParamLimits

0xe074,	// (0x0004d6d4) middle_sk_idle_act4_pane_g1

0xe9fc,	// (0x0004e05c) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9fc,	// (0x0004e05c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd60,	// (0x0004f3c0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd60,	// (0x0004f3c0) middle_sk_idle_act4_pane_g

0xea14,	// (0x0004e074) middle_sk_idle_act4_pane_t1_ParamLimits

0xea14,	// (0x0004e074) middle_sk_idle_act4_pane_t1

0xea43,	// (0x0004e0a3) grid_ai_shortcut_pane_ParamLimits

0xea43,	// (0x0004e0a3) grid_ai_shortcut_pane

0xea60,	// (0x0004e0c0) list_highlight_pane_cp16_ParamLimits

0xea60,	// (0x0004e0c0) list_highlight_pane_cp16

0xea6d,	// (0x0004e0cd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea6d,	// (0x0004e0cd) list_single_idle_plugin_shortcut_pane_g1

0xea79,	// (0x0004e0d9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea79,	// (0x0004e0d9) list_single_idle_plugin_shortcut_pane_g2

0xea95,	// (0x0004e0f5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea95,	// (0x0004e0f5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd65,	// (0x0004f3c5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd65,	// (0x0004f3c5) list_single_idle_plugin_shortcut_pane_g

0xeaaa,	// (0x0004e10a) cell_ai_shortcut_pane_ParamLimits

0xeaaa,	// (0x0004e10a) cell_ai_shortcut_pane

0xeac0,	// (0x0004e120) cell_ai_shortcut_pane_g1_ParamLimits

0xeac0,	// (0x0004e120) cell_ai_shortcut_pane_g1

0x901c,	// (0x0004867c) ai_gene_pane_1_cp2

0x9211,	// (0x00048871) ai_gene_pane_2_cp2

0x9219,	// (0x00048879) list_highlight_pane_cp15

0x9222,	// (0x00048882) list_single_idle_plugin_calendar_pane_g1

0x9219,	// (0x00048879) list_highlight_pane_cp17

0x922a,	// (0x0004888a) list_single_idle_plugin_calendar_pane_g1_copy1

0x9232,	// (0x00048892) list_single_idle_plugin_player_pane_g1

0x6982,	// (0x00045fe2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6c,	// (0x0004f3cc) list_single_idle_plugin_player_pane_g

0x923a,	// (0x0004889a) list_single_idle_plugin_player_pane_t1

0x9248,	// (0x000488a8) list_single_idle_plugin_player_pane_t2

0x9256,	// (0x000488b6) list_single_idle_plugin_player_pane_t3

0x9264,	// (0x000488c4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd71,	// (0x0004f3d1) list_single_idle_plugin_player_pane_t

0x9272,	// (0x000488d2) wait_bar_pane_cp15

0x927a,	// (0x000488da) grid_ai_notification_pane

0x6982,	// (0x00045fe2) list_single_idle_plugin_notification_pane_g1

0xeae2,	// (0x0004e142) cell_ai_notification_pane_ParamLimits

0xeae2,	// (0x0004e142) cell_ai_notification_pane

0x9290,	// (0x000488f0) cell_ai_notification_pane_g1

0x9298,	// (0x000488f8) cell_ai_notification_pane_t1

0xeaef,	// (0x0004e14f) tb_ext_find_button_pane

0xeaf7,	// (0x0004e157) tb_ext_find_pane_g1

0xeaff,	// (0x0004e15f) tb_ext_find_pane_t1

0x40fe,	// (0x0004375e) tb_ext_find_button_pane_g1

0x92c4,	// (0x00048924) tb_ext_find_button_pane_g2

0x0001,

0xfd7a,	// (0x0004f3da) tb_ext_find_button_pane_g

0xe90f,	// (0x0004df6f) main_idle_act4_pane_t1_ParamLimits

0xe925,	// (0x0004df85) main_idle_act4_pane_t2_ParamLimits

0xfd38,	// (0x0004f398) main_idle_act4_pane_t_ParamLimits

0xe957,	// (0x0004dfb7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe96f,	// (0x0004dfcf) sat_plugin_idle_act4_pane_ParamLimits

0xe96f,	// (0x0004dfcf) sat_plugin_idle_act4_pane

0xeb0d,	// (0x0004e16d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0004e16d) sat_plugin_idle_act4_pane_t1

0xeb25,	// (0x0004e185) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb25,	// (0x0004e185) sat_plugin_idle_act4_pane_t2

0xeb3d,	// (0x0004e19d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb3d,	// (0x0004e19d) sat_plugin_idle_act4_pane_t3

0xeb55,	// (0x0004e1b5) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb55,	// (0x0004e1b5) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7f,	// (0x0004f3df) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7f,	// (0x0004f3df) sat_plugin_idle_act4_pane_t

0x1040,	// (0x000406a0) popup_battery_window_ParamLimits

0x1040,	// (0x000406a0) popup_battery_window

0x34ab,	// (0x00042b0b) bg_popup_sub_pane_cp25_ParamLimits

0x34ab,	// (0x00042b0b) bg_popup_sub_pane_cp25

0x9319,	// (0x00048979) popup_battery_window_g1_ParamLimits

0x9319,	// (0x00048979) popup_battery_window_g1

0x9325,	// (0x00048985) popup_battery_window_t1_ParamLimits

0x9325,	// (0x00048985) popup_battery_window_t1

0x9337,	// (0x00048997) popup_battery_window_t2_ParamLimits

0x9337,	// (0x00048997) popup_battery_window_t2

0x0001,

0xfd88,	// (0x0004f3e8) popup_battery_window_t_ParamLimits

0xfd88,	// (0x0004f3e8) popup_battery_window_t

0xd44e,	// (0x0004caae) midp_canvas_pane_ParamLimits

0xd4a9,	// (0x0004cb09) midp_keypad_pane_ParamLimits

0xd4a9,	// (0x0004cb09) midp_keypad_pane

0x4a34,	// (0x00044094) main_midp_pane_ParamLimits

0x70ff,	// (0x0004675f) signal_pane_g2_cp_ParamLimits

0xeb6d,	// (0x0004e1cd) aid_size_cell_midp_keypad_ParamLimits

0xeb6d,	// (0x0004e1cd) aid_size_cell_midp_keypad

0xeb8b,	// (0x0004e1eb) midp_keyp_game_grid_pane_ParamLimits

0xeb8b,	// (0x0004e1eb) midp_keyp_game_grid_pane

0xebb2,	// (0x0004e212) midp_keyp_rocker_pane_ParamLimits

0xebb2,	// (0x0004e212) midp_keyp_rocker_pane

0xebf3,	// (0x0004e253) midp_keyp_sk_left_pane_ParamLimits

0xebf3,	// (0x0004e253) midp_keyp_sk_left_pane

0xec47,	// (0x0004e2a7) midp_keyp_sk_right_pane_ParamLimits

0xec47,	// (0x0004e2a7) midp_keyp_sk_right_pane

0x312e,	// (0x0004278e) bg_button_pane_cp03

0xec9b,	// (0x0004e2fb) midp_keyp_sk_left_pane_g1

0x312e,	// (0x0004278e) bg_button_pane_cp04

0xec9b,	// (0x0004e2fb) midp_keyp_sk_right_pane_g1

0x7647,	// (0x00046ca7) midp_keyp_rocker_pane_g1

0xeca4,	// (0x0004e304) keyp_game_cell_pane_ParamLimits

0xeca4,	// (0x0004e304) keyp_game_cell_pane

0x312e,	// (0x0004278e) bg_button_pane_cp02

0xecc8,	// (0x0004e328) keyp_game_cell_pane_g1

0xbd74,	// (0x0004b3d4) popup_fep_vkb2_window_ParamLimits

0xbd74,	// (0x0004b3d4) popup_fep_vkb2_window

0xca64,	// (0x0004c0c4) aid_size_cell_vkb2_ParamLimits

0xca64,	// (0x0004c0c4) aid_size_cell_vkb2

0xca9a,	// (0x0004c0fa) popup_fep_vkb2_window_g1_ParamLimits

0xca9a,	// (0x0004c0fa) popup_fep_vkb2_window_g1

0xcaea,	// (0x0004c14a) vkb2_area_bottom_pane_ParamLimits

0xcaea,	// (0x0004c14a) vkb2_area_bottom_pane

0xcb3e,	// (0x0004c19e) vkb2_area_keypad_pane_ParamLimits

0xcb3e,	// (0x0004c19e) vkb2_area_keypad_pane

0xcb86,	// (0x0004c1e6) vkb2_area_top_pane_ParamLimits

0xcb86,	// (0x0004c1e6) vkb2_area_top_pane

0xcc0c,	// (0x0004c26c) vkb2_top_entry_pane_ParamLimits

0xcc0c,	// (0x0004c26c) vkb2_top_entry_pane

0xcc39,	// (0x0004c299) vkb2_top_grid_left_pane_ParamLimits

0xcc39,	// (0x0004c299) vkb2_top_grid_left_pane

0xcc59,	// (0x0004c2b9) vkb2_top_grid_right_pane_ParamLimits

0xcc59,	// (0x0004c2b9) vkb2_top_grid_right_pane

0x2b2e,	// (0x0004218e) vkb2_cell_keypad_pane_ParamLimits

0x2b2e,	// (0x0004218e) vkb2_cell_keypad_pane

0xcc9f,	// (0x0004c2ff) vkb2_area_bottom_grid_pane_ParamLimits

0xcc9f,	// (0x0004c2ff) vkb2_area_bottom_grid_pane

0xccc9,	// (0x0004c329) vkb2_area_bottom_pane_g1_ParamLimits

0xccc9,	// (0x0004c329) vkb2_area_bottom_pane_g1

0xccef,	// (0x0004c34f) vkb2_area_bottom_pane_g2_ParamLimits

0xccef,	// (0x0004c34f) vkb2_area_bottom_pane_g2

0xcd20,	// (0x0004c380) vkb2_area_bottom_pane_g3_ParamLimits

0xcd20,	// (0x0004c380) vkb2_area_bottom_pane_g3

0x0002,

0xfd8d,	// (0x0004f3ed) vkb2_area_bottom_pane_g_ParamLimits

0xfd8d,	// (0x0004f3ed) vkb2_area_bottom_pane_g

0x2cd8,	// (0x00042338) vkb2_top_cell_left_pane_ParamLimits

0x2cd8,	// (0x00042338) vkb2_top_cell_left_pane

0xecd1,	// (0x0004e331) vkb2_top_entry_pane_g1_ParamLimits

0xecd1,	// (0x0004e331) vkb2_top_entry_pane_g1

0xecdf,	// (0x0004e33f) vkb2_top_entry_pane_t1_ParamLimits

0xecdf,	// (0x0004e33f) vkb2_top_entry_pane_t1

0x94da,	// (0x00048b3a) vkb2_top_entry_pane_t2_ParamLimits

0x94da,	// (0x00048b3a) vkb2_top_entry_pane_t2

0x950c,	// (0x00048b6c) vkb2_top_entry_pane_t3_ParamLimits

0x950c,	// (0x00048b6c) vkb2_top_entry_pane_t3

0x0002,

0xfd94,	// (0x0004f3f4) vkb2_top_entry_pane_t_ParamLimits

0xfd94,	// (0x0004f3f4) vkb2_top_entry_pane_t

0xcd8a,	// (0x0004c3ea) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd8a,	// (0x0004c3ea) vkb2_top_grid_right_pane_g1

0x2d3b,	// (0x0004239b) vkb2_top_grid_right_pane_g2_ParamLimits

0x2d3b,	// (0x0004239b) vkb2_top_grid_right_pane_g2

0x2d53,	// (0x000423b3) vkb2_top_grid_right_pane_g3_ParamLimits

0x2d53,	// (0x000423b3) vkb2_top_grid_right_pane_g3

0xcda0,	// (0x0004c400) vkb2_top_grid_right_pane_g4_ParamLimits

0xcda0,	// (0x0004c400) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9b,	// (0x0004f3fb) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9b,	// (0x0004f3fb) vkb2_top_grid_right_pane_g

0x2d81,	// (0x000423e1) vkb2_top_cell_left_pane_g1

0x2d98,	// (0x000423f8) vkb2_cell_keypad_pane_g1_ParamLimits

0x2d98,	// (0x000423f8) vkb2_cell_keypad_pane_g1

0x9530,	// (0x00048b90) vkb2_cell_keypad_pane_t1_ParamLimits

0x9530,	// (0x00048b90) vkb2_cell_keypad_pane_t1

0x2da6,	// (0x00042406) vkb2_cell_bottom_grid_pane_ParamLimits

0x2da6,	// (0x00042406) vkb2_cell_bottom_grid_pane

0x2ddf,	// (0x0004243f) vkb2_cell_bottom_grid_pane_g1

0xe9a0,	// (0x0004e000) aid_call2_pane_cp02

0xe9a8,	// (0x0004e008) aid_call_pane_cp02

0xe9b0,	// (0x0004e010) clock_digital_number_pane_cp10

0xe9b8,	// (0x0004e018) clock_digital_number_pane_cp11

0xe9c0,	// (0x0004e020) clock_digital_number_pane_cp12

0xe9c8,	// (0x0004e028) clock_digital_number_pane_cp13

0xe9d0,	// (0x0004e030) clock_digital_separator_pane_cp10

0x40fe,	// (0x0004375e) popup_clock_digital_analogue_window_cp2_g1

0x40fe,	// (0x0004375e) popup_clock_digital_analogue_window_cp2_g2

0xe9d8,	// (0x0004e038) popup_clock_digital_analogue_window_cp2_g3

0x40fe,	// (0x0004375e) popup_clock_digital_analogue_window_cp2_g4

0xe9d8,	// (0x0004e038) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd50,	// (0x0004f3b0) popup_clock_digital_analogue_window_cp2_g

0xe9e0,	// (0x0004e040) popup_clock_digital_analogue_window_cp2_t1

0xe9ee,	// (0x0004e04e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5b,	// (0x0004f3bb) popup_clock_digital_analogue_window_cp2_t

0x7647,	// (0x00046ca7) clock_digital_number_pane_cp10_g1

0x7647,	// (0x00046ca7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004f1a3) clock_digital_number_pane_cp10_g

0x7647,	// (0x00046ca7) clock_digital_separator_pane_cp10_g1

0x7647,	// (0x00046ca7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004f1a3) clock_digital_separator_pane_cp10_g

0x8f65,	// (0x000485c5) uniindi_top_pane_g3

0x8f76,	// (0x000485d6) uniindi_top_pane_g4

0x2bb9,	// (0x00042219) vkb2_row_keypad_pane_ParamLimits

0x2bb9,	// (0x00042219) vkb2_row_keypad_pane

0x2dfb,	// (0x0004245b) vkb2_cell_t_keypad_pane_ParamLimits

0x2dfb,	// (0x0004245b) vkb2_cell_t_keypad_pane

0x2e0b,	// (0x0004246b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2e0b,	// (0x0004246b) vkb2_cell_t_keypad_pane_cp08

0x2e1e,	// (0x0004247e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2e1e,	// (0x0004247e) vkb2_cell_t_keypad_pane_cp09

0x2e32,	// (0x00042492) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2e32,	// (0x00042492) vkb2_cell_t_keypad_pane_cp01

0x2e43,	// (0x000424a3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2e43,	// (0x000424a3) vkb2_cell_t_keypad_pane_cp02

0x2e54,	// (0x000424b4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2e54,	// (0x000424b4) vkb2_cell_t_keypad_pane_cp03

0x2e65,	// (0x000424c5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2e65,	// (0x000424c5) vkb2_cell_t_keypad_pane_cp04

0x2e76,	// (0x000424d6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2e76,	// (0x000424d6) vkb2_cell_t_keypad_pane_cp05

0x2e87,	// (0x000424e7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2e87,	// (0x000424e7) vkb2_cell_t_keypad_pane_cp06

0x2e98,	// (0x000424f8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2e98,	// (0x000424f8) vkb2_cell_t_keypad_pane_cp07

0x2ea9,	// (0x00042509) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2ea9,	// (0x00042509) vkb2_cell_t_keypad_pane_cp10

0x78c5,	// (0x00046f25) vkb2_cell_t_keypad_pane_g1

0x9547,	// (0x00048ba7) vkb2_cell_t_keypad_pane_t1

0x312e,	// (0x0004278e) popup_grid_graphic2_window

0xed18,	// (0x0004e378) aid_size_cell_graphic2_ParamLimits

0xed18,	// (0x0004e378) aid_size_cell_graphic2

0xed56,	// (0x0004e3b6) bg_popup_window_pane_cp21_ParamLimits

0xed56,	// (0x0004e3b6) bg_popup_window_pane_cp21

0xed64,	// (0x0004e3c4) graphic2_pages_pane_ParamLimits

0xed64,	// (0x0004e3c4) graphic2_pages_pane

0xedba,	// (0x0004e41a) grid_graphic2_control_pane_ParamLimits

0xedba,	// (0x0004e41a) grid_graphic2_control_pane

0xee02,	// (0x0004e462) grid_graphic2_pane_ParamLimits

0xee02,	// (0x0004e462) grid_graphic2_pane

0xee89,	// (0x0004e4e9) cell_graphic2_pane

0x312e,	// (0x0004278e) main_comp_mode_pane

0x87e3,	// (0x00047e43) list_ai3_gene_pane_ParamLimits

0xe6e4,	// (0x0004dd44) bg_popup_window_pane_cp19_ParamLimits

0x8bb9,	// (0x00048219) bg_touch_area_indi_pane_ParamLimits

0x8bb9,	// (0x00048219) bg_touch_area_indi_pane

0x8bcf,	// (0x0004822f) bg_touch_area_indi_pane_cp01_ParamLimits

0x8bcf,	// (0x0004822f) bg_touch_area_indi_pane_cp01

0x8be5,	// (0x00048245) bg_touch_area_indi_pane_cp02_ParamLimits

0x8be5,	// (0x00048245) bg_touch_area_indi_pane_cp02

0x8bfd,	// (0x0004825d) bg_touch_area_indi_pane_cp03_ParamLimits

0x8bfd,	// (0x0004825d) bg_touch_area_indi_pane_cp03

0x8c17,	// (0x00048277) popup_slider_window_g1_ParamLimits

0x8c33,	// (0x00048293) popup_slider_window_g2_ParamLimits

0x8c4f,	// (0x000482af) popup_slider_window_g3_ParamLimits

0xfce5,	// (0x0004f345) popup_slider_window_g_ParamLimits

0x8cab,	// (0x0004830b) popup_slider_window_t1_ParamLimits

0x8d1f,	// (0x0004837f) small_volume_slider_vertical_pane_ParamLimits

0xee89,	// (0x0004e4e9) cell_graphic2_pane_ParamLimits

0xeee6,	// (0x0004e546) bg_button_pane_cp10_ParamLimits

0xeee6,	// (0x0004e546) bg_button_pane_cp10

0xeef9,	// (0x0004e559) bg_button_pane_cp11_ParamLimits

0xeef9,	// (0x0004e559) bg_button_pane_cp11

0xef0c,	// (0x0004e56c) graphic2_pages_pane_g1_ParamLimits

0xef0c,	// (0x0004e56c) graphic2_pages_pane_g1

0xef27,	// (0x0004e587) graphic2_pages_pane_g2_ParamLimits

0xef27,	// (0x0004e587) graphic2_pages_pane_g2

0x0001,

0xfda9,	// (0x0004f409) graphic2_pages_pane_g_ParamLimits

0xfda9,	// (0x0004f409) graphic2_pages_pane_g

0xef3f,	// (0x0004e59f) graphic2_pages_pane_t1_ParamLimits

0xef3f,	// (0x0004e59f) graphic2_pages_pane_t1

0xef57,	// (0x0004e5b7) cell_graphic2_control_pane_ParamLimits

0xef57,	// (0x0004e5b7) cell_graphic2_control_pane

0xef89,	// (0x0004e5e9) cell_graphic2_pane_g1_ParamLimits

0xef89,	// (0x0004e5e9) cell_graphic2_pane_g1

0xe082,	// (0x0004d6e2) cell_graphic2_pane_g2_ParamLimits

0xe082,	// (0x0004d6e2) cell_graphic2_pane_g2

0xe6a3,	// (0x0004dd03) cell_graphic2_pane_g3_ParamLimits

0xe6a3,	// (0x0004dd03) cell_graphic2_pane_g3

0xe08f,	// (0x0004d6ef) cell_graphic2_pane_g4_ParamLimits

0xe08f,	// (0x0004d6ef) cell_graphic2_pane_g4

0xef96,	// (0x0004e5f6) cell_graphic2_pane_g5_ParamLimits

0xef96,	// (0x0004e5f6) cell_graphic2_pane_g5

0x0004,

0xfdae,	// (0x0004f40e) cell_graphic2_pane_g_ParamLimits

0xfdae,	// (0x0004f40e) cell_graphic2_pane_g

0xefb6,	// (0x0004e616) cell_graphic2_pane_t1_ParamLimits

0xefb6,	// (0x0004e616) cell_graphic2_pane_t1

0x5cd7,	// (0x00045337) grid_highlight_pane_cp11_ParamLimits

0x5cd7,	// (0x00045337) grid_highlight_pane_cp11

0x34ab,	// (0x00042b0b) bg_button_pane_cp05

0xefeb,	// (0x0004e64b) cell_graphic2_control_pane_g1

0x7647,	// (0x00046ca7) bg_touch_area_indi_pane_g1

0x9817,	// (0x00048e77) aid_cmod_rocker_key_size

0x9821,	// (0x00048e81) aid_cmode_itu_key_size

0x982b,	// (0x00048e8b) main_cmode_video_pane

0x9835,	// (0x00048e95) main_comp_mode_itu_pane

0x9841,	// (0x00048ea1) main_comp_mode_rocker_pane

0x984d,	// (0x00048ead) cell_cmode_rocker_pane_ParamLimits

0x984d,	// (0x00048ead) cell_cmode_rocker_pane

0x985f,	// (0x00048ebf) cell_cmode_itu_pane_ParamLimits

0x985f,	// (0x00048ebf) cell_cmode_itu_pane

0x3a8e,	// (0x000430ee) bg_button_pane_cp06_ParamLimits

0x3a8e,	// (0x000430ee) bg_button_pane_cp06

0x78c5,	// (0x00046f25) cell_cmode_rocker_pane_g1_ParamLimits

0x78c5,	// (0x00046f25) cell_cmode_rocker_pane_g1

0x8dc3,	// (0x00048423) cell_cmode_rocker_pane_g2_ParamLimits

0x8dc3,	// (0x00048423) cell_cmode_rocker_pane_g2

0x0001,

0xfdbe,	// (0x0004f41e) cell_cmode_rocker_pane_g_ParamLimits

0xfdbe,	// (0x0004f41e) cell_cmode_rocker_pane_g

0x312e,	// (0x0004278e) bg_button_pane_cp07

0x9874,	// (0x00048ed4) cell_cmode_itu_pane_g1

0x987d,	// (0x00048edd) cell_cmode_itu_pane_t1

0x988b,	// (0x00048eeb) cell_cmode_itu_pane_t2

0x0001,

0xfdc3,	// (0x0004f423) cell_cmode_itu_pane_t

0x8fe8,	// (0x00048648) aid_touch_ctrl_left

0x8ff0,	// (0x00048650) aid_touch_ctrl_right

0x312e,	// (0x0004278e) compa_mode_pane

0xf011,	// (0x0004e671) aid_cmod_rocker_key_size_cp

0xf01b,	// (0x0004e67b) aid_cmode_itu_key_size_cp

0x98ad,	// (0x00048f0d) compa_mode_pane_g1

0x98b5,	// (0x00048f15) compa_mode_pane_g2

0x98bd,	// (0x00048f1d) compa_mode_pane_g3

0x0002,

0xfdc8,	// (0x0004f428) compa_mode_pane_g

0xf025,	// (0x0004e685) main_comp_mode_itu_pane_cp

0xf02d,	// (0x0004e68d) main_comp_mode_rocker_pane_cp

0xf035,	// (0x0004e695) cell_cmode_itu_pane_cp_ParamLimits

0xf035,	// (0x0004e695) cell_cmode_itu_pane_cp

0xf04a,	// (0x0004e6aa) cell_cmode_rocker_pane_cp_ParamLimits

0xf04a,	// (0x0004e6aa) cell_cmode_rocker_pane_cp

0x3a8e,	// (0x000430ee) bg_button_pane_cp06_cp_ParamLimits

0x3a8e,	// (0x000430ee) bg_button_pane_cp06_cp

0x78c5,	// (0x00046f25) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78c5,	// (0x00046f25) cell_cmode_rocker_pane_g1_cp

0x7647,	// (0x00046ca7) cell_cmode_rocker_pane_g2_cp

0x312e,	// (0x0004278e) bg_button_pane_cp07_cp

0xf05c,	// (0x0004e6bc) cell_cmode_itu_pane_g1_cp

0xf065,	// (0x0004e6c5) cell_cmode_itu_pane_t1_cp

0xf065,	// (0x0004e6c5) cell_cmode_itu_pane_t2_cp

0xdd0f,	// (0x0004d36f) settings_code_pane_cp2

0x3222,	// (0x00042882) bg_popup_window_pane_cp3_ParamLimits

0x3685,	// (0x00042ce5) heading_pane_cp3_ParamLimits

0x3691,	// (0x00042cf1) listscroll_popup_graphic_pane_ParamLimits

0x23e8,	// (0x00041a48) fep_hwr_aid_pane_ParamLimits

0x289b,	// (0x00041efb) aid_touch_sctrl_top_ParamLimits

0x28a8,	// (0x00041f08) sctrl_sk_top_pane_g1_ParamLimits

0x78c5,	// (0x00046f25) sctrl_sk_top_pane_g2_ParamLimits

0xfcfe,	// (0x0004f35e) sctrl_sk_top_pane_g_ParamLimits

0x28b5,	// (0x00041f15) sctrl_sk_top_pane_t1_ParamLimits

0x289b,	// (0x00041efb) aid_touch_sctrl_bottom_ParamLimits

0x28b5,	// (0x00041f15) sctrl_sk_bottom_pane_t1_ParamLimits

0x8f31,	// (0x00048591) aid_area_touch_clock

0xcbce,	// (0x0004c22e) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbce,	// (0x0004c22e) aid_vkb2_area_top_pane_cell

0xcc79,	// (0x0004c2d9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc79,	// (0x0004c2d9) aid_vkb2_area_bottom_pane_cell

0x9492,	// (0x00048af2) popup_char_count_window

0x990a,	// (0x00048f6a) popup_char_count_window_g1

0x9913,	// (0x00048f73) popup_char_count_window_g2

0x991c,	// (0x00048f7c) popup_char_count_window_g3

0x0002,

0xfdcf,	// (0x0004f42f) popup_char_count_window_g

0x9925,	// (0x00048f85) popup_char_count_window_t1

0x2956,	// (0x00041fb6) popup_fep_char_preview_window_ParamLimits

0x2956,	// (0x00041fb6) popup_fep_char_preview_window

0xcbee,	// (0x0004c24e) vkb2_top_candi_pane_ParamLimits

0xcbee,	// (0x0004c24e) vkb2_top_candi_pane

0xf073,	// (0x0004e6d3) cell_vkb2_top_candi_pane_ParamLimits

0xf073,	// (0x0004e6d3) cell_vkb2_top_candi_pane

0x5663,	// (0x00044cc3) bg_popup_fep_char_preview_window_ParamLimits

0x5663,	// (0x00044cc3) bg_popup_fep_char_preview_window

0x2ebe,	// (0x0004251e) popup_fep_char_preview_window_t1_ParamLimits

0x2ebe,	// (0x0004251e) popup_fep_char_preview_window_t1

0x9980,	// (0x00048fe0) bg_popup_fep_char_preview_window_g1

0x9988,	// (0x00048fe8) bg_popup_fep_char_preview_window_g2

0x9990,	// (0x00048ff0) bg_popup_fep_char_preview_window_g3

0x9998,	// (0x00048ff8) bg_popup_fep_char_preview_window_g4

0x99a0,	// (0x00049000) bg_popup_fep_char_preview_window_g5

0x2ef8,	// (0x00042558) bg_popup_fep_char_preview_window_g6

0x99a8,	// (0x00049008) bg_popup_fep_char_preview_window_g7

0x99b0,	// (0x00049010) bg_popup_fep_char_preview_window_g8

0x99b8,	// (0x00049018) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd6,	// (0x0004f436) bg_popup_fep_char_preview_window_g

0x78c5,	// (0x00046f25) cell_vkb2_top_candi_pane_g1_ParamLimits

0x78c5,	// (0x00046f25) cell_vkb2_top_candi_pane_g1

0x7bdc,	// (0x0004723c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7bdc,	// (0x0004723c) cell_vkb2_top_candi_pane_g2

0x7bfd,	// (0x0004725d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7bfd,	// (0x0004725d) cell_vkb2_top_candi_pane_g3

0x2f00,	// (0x00042560) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2f00,	// (0x00042560) cell_vkb2_top_candi_pane_g4

0x99c0,	// (0x00049020) cell_vkb2_top_candi_pane_g5_ParamLimits

0x99c0,	// (0x00049020) cell_vkb2_top_candi_pane_g5

0x8dc3,	// (0x00048423) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8dc3,	// (0x00048423) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde9,	// (0x0004f449) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde9,	// (0x0004f449) cell_vkb2_top_candi_pane_g

0x2f21,	// (0x00042581) cell_vkb2_top_candi_pane_t1

0x216f,	// (0x000417cf) aid_size_touch_slider_mark_ParamLimits

0x216f,	// (0x000417cf) aid_size_touch_slider_mark

0xeda0,	// (0x0004e400) grid_graphic2_catg_pane_ParamLimits

0xeda0,	// (0x0004e400) grid_graphic2_catg_pane

0xee5c,	// (0x0004e4bc) popup_grid_graphic2_window_t1_ParamLimits

0xee5c,	// (0x0004e4bc) popup_grid_graphic2_window_t1

0xee72,	// (0x0004e4d2) popup_grid_graphic2_window_t2_ParamLimits

0xee72,	// (0x0004e4d2) popup_grid_graphic2_window_t2

0x0001,

0xfda4,	// (0x0004f404) popup_grid_graphic2_window_t_ParamLimits

0xfda4,	// (0x0004f404) popup_grid_graphic2_window_t

0x34ab,	// (0x00042b0b) bg_button_pane_cp05_ParamLimits

0xefeb,	// (0x0004e64b) cell_graphic2_control_pane_g1_ParamLimits

0xf0d9,	// (0x0004e739) cell_graphic2_catg_pane_ParamLimits

0xf0d9,	// (0x0004e739) cell_graphic2_catg_pane

0x312e,	// (0x0004278e) bg_button_pane_cp12

0xf0eb,	// (0x0004e74b) cell_graphic2_catg_pane_g1

0x8efd,	// (0x0004855d) cell_tb_ext_pane_t1_ParamLimits

0x2cf8,	// (0x00042358) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2cf8,	// (0x00042358) vkb2_top_cell_right_narrow_pane

0x2d10,	// (0x00042370) vkb2_top_cell_right_wide_pane_ParamLimits

0x2d10,	// (0x00042370) vkb2_top_cell_right_wide_pane

0x23da,	// (0x00041a3a) bg_vkb2_func_pane_ParamLimits

0x23da,	// (0x00041a3a) bg_vkb2_func_pane

0x2d81,	// (0x000423e1) vkb2_top_cell_left_pane_g1_ParamLimits

0x23da,	// (0x00041a3a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x23da,	// (0x00041a3a) bg_vkb2_fuc_pane_cp03

0x2ddf,	// (0x0004243f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4f3d,	// (0x0004459d) bg_vkb2_func_pane_g1

0x4f45,	// (0x000445a5) bg_vkb2_func_pane_g2

0x4f55,	// (0x000445b5) bg_vkb2_func_pane_g3

0x4f4d,	// (0x000445ad) bg_vkb2_func_pane_g4

0x4f5d,	// (0x000445bd) bg_vkb2_func_pane_g5

0x4f65,	// (0x000445c5) bg_vkb2_func_pane_g6

0x4f6d,	// (0x000445cd) bg_vkb2_func_pane_g7

0x4f75,	// (0x000445d5) bg_vkb2_func_pane_g8

0x4f35,	// (0x00044595) bg_vkb2_func_pane_g9

0x0008,

0xfdf6,	// (0x0004f456) bg_vkb2_func_pane_g

0x23da,	// (0x00041a3a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x23da,	// (0x00041a3a) bg_vkb2_fuc_pane_cp01

0x2d81,	// (0x000423e1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2d81,	// (0x000423e1) vkb2_top_cell_right_wide_pane_g1

0x23da,	// (0x00041a3a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x23da,	// (0x00041a3a) bg_vkb2_fuc_pane_cp02

0x2ddf,	// (0x0004243f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2ddf,	// (0x0004243f) vkb2_top_cell_right_narrow_pane_g1

0xe617,	// (0x0004dc77) aid_touch_area_decrease_ParamLimits

0xe617,	// (0x0004dc77) aid_touch_area_decrease

0xe64b,	// (0x0004dcab) aid_touch_area_increase_ParamLimits

0xe64b,	// (0x0004dcab) aid_touch_area_increase

0xe673,	// (0x0004dcd3) aid_touch_area_mute_ParamLimits

0xe673,	// (0x0004dcd3) aid_touch_area_mute

0xe6b0,	// (0x0004dd10) aid_touch_area_slider_ParamLimits

0xe6b0,	// (0x0004dd10) aid_touch_area_slider

0xe6f0,	// (0x0004dd50) popup_slider_window_g4_ParamLimits

0xe6f0,	// (0x0004dd50) popup_slider_window_g4

0xe718,	// (0x0004dd78) popup_slider_window_g5_ParamLimits

0xe718,	// (0x0004dd78) popup_slider_window_g5

0xe74c,	// (0x0004ddac) popup_slider_window_g6_ParamLimits

0xe74c,	// (0x0004ddac) popup_slider_window_g6

0x8cd9,	// (0x00048339) popup_slider_window_t2_ParamLimits

0x8cd9,	// (0x00048339) popup_slider_window_t2

0x0001,

0xfcf2,	// (0x0004f352) popup_slider_window_t_ParamLimits

0xfcf2,	// (0x0004f352) popup_slider_window_t

0xe768,	// (0x0004ddc8) slider_pane_ParamLimits

0xe768,	// (0x0004ddc8) slider_pane

0x99fc,	// (0x0004905c) slider_pane_g1_ParamLimits

0x99fc,	// (0x0004905c) slider_pane_g1

0x9a10,	// (0x00049070) slider_pane_g2_ParamLimits

0x9a10,	// (0x00049070) slider_pane_g2

0x9a26,	// (0x00049086) slider_pane_g3_ParamLimits

0x9a26,	// (0x00049086) slider_pane_g3

0x0003,

0xfe09,	// (0x0004f469) slider_pane_g_ParamLimits

0xfe09,	// (0x0004f469) slider_pane_g

0xc6c9,	// (0x0004bd29) popup_tb_float_extension_window_ParamLimits

0xc6c9,	// (0x0004bd29) popup_tb_float_extension_window

0x9a52,	// (0x000490b2) aid_size_cell_tb_float_ext

0x312e,	// (0x0004278e) bg_popup_sub_window_cp28

0x9a5e,	// (0x000490be) grid_tb_float_ext_pane

0x9a68,	// (0x000490c8) cell_tb_float_ext_pane_ParamLimits

0x9a68,	// (0x000490c8) cell_tb_float_ext_pane

0x9a82,	// (0x000490e2) cell_tb_float_ext_pane_g1

0x9a8b,	// (0x000490eb) grid_highlight_pane_cp12

0xc95f,	// (0x0004bfbf) cell_last_hwr_side_pane_ParamLimits

0xc95f,	// (0x0004bfbf) cell_last_hwr_side_pane

0x7647,	// (0x00046ca7) cell_last_hwr_side_pane_g1

0x9a94,	// (0x000490f4) cell_last_hwr_side_pane_g2

0x0001,

0xfe12,	// (0x0004f472) cell_last_hwr_side_pane_g

0xcd55,	// (0x0004c3b5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd55,	// (0x0004c3b5) vkb2_area_bottom_space_btn_pane

0x78c5,	// (0x00046f25) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9547,	// (0x00048ba7) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2f21,	// (0x00042581) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2f40,	// (0x000425a0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2f40,	// (0x000425a0) vkb2_area_bottom_space_btn_pane_g1

0x2f7a,	// (0x000425da) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2f7a,	// (0x000425da) vkb2_area_bottom_space_btn_pane_g2

0x2fb0,	// (0x00042610) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2fb0,	// (0x00042610) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe17,	// (0x0004f477) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe17,	// (0x0004f477) vkb2_area_bottom_space_btn_pane_g

0x248f,	// (0x00041aef) cel_fep_hwr_func_pane_ParamLimits

0x248f,	// (0x00041aef) cel_fep_hwr_func_pane

0xc934,	// (0x0004bf94) cell_hwr_side_button_pane_ParamLimits

0xc934,	// (0x0004bf94) cell_hwr_side_button_pane

0x8f31,	// (0x00048591) aid_area_touch_clock_ParamLimits

0x34ab,	// (0x00042b0b) bg_uniindi_top_pane_ParamLimits

0x8f43,	// (0x000485a3) uniindi_top_pane_g1_ParamLimits

0x8f59,	// (0x000485b9) uniindi_top_pane_g2_ParamLimits

0x8f65,	// (0x000485c5) uniindi_top_pane_g3_ParamLimits

0x8f76,	// (0x000485d6) uniindi_top_pane_g4_ParamLimits

0xfd2a,	// (0x0004f38a) uniindi_top_pane_g_ParamLimits

0x8f83,	// (0x000485e3) uniindi_top_pane_t1_ParamLimits

0x34ab,	// (0x00042b0b) bg_vkb2_func_pane_cp01_ParamLimits

0x34ab,	// (0x00042b0b) bg_vkb2_func_pane_cp01

0x9a9d,	// (0x000490fd) cel_fep_hwr_func_pane_g1_ParamLimits

0x9a9d,	// (0x000490fd) cel_fep_hwr_func_pane_g1

0x34ab,	// (0x00042b0b) bg_vkb2_func_pane_cp02_ParamLimits

0x34ab,	// (0x00042b0b) bg_vkb2_func_pane_cp02

0x9a9d,	// (0x000490fd) cell_hwr_side_button_pane_g1_ParamLimits

0x9a9d,	// (0x000490fd) cell_hwr_side_button_pane_g1

0x4dad,	// (0x0004440d) status_pane_g4_ParamLimits

0x4dad,	// (0x0004440d) status_pane_g4

0x4dc7,	// (0x00044427) status_pane_t1

0x7381,	// (0x000469e1) form2_midp_gauge_slider_cont_pane

0x7389,	// (0x000469e9) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdfca,	// (0x0004d62a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdfdc,	// (0x0004d63c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0004f156) form2_midp_gauge_slider_pane_t_ParamLimits

0x73bf,	// (0x00046a1f) form2_midp_slider_pane_ParamLimits

0x2916,	// (0x00041f76) aid_size_cell_func_vkb2_ParamLimits

0x2916,	// (0x00041f76) aid_size_cell_func_vkb2

0x9a3e,	// (0x0004909e) slider_pane_g4_ParamLimits

0x9a3e,	// (0x0004909e) slider_pane_g4

0xcdb6,	// (0x0004c416) form2_midp_gauge_slider_pane_t2_cp01

0xcdc4,	// (0x0004c424) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcdc4,	// (0x0004c424) form2_midp_gauge_slider_pane_t3_cp01

0x3025,	// (0x00042685) form2_midp_slider_pane_cp01

0x312e,	// (0x0004278e) navi_smil_pane

0x9ad6,	// (0x00049136) navi_smil_pane_g1

0x9ade,	// (0x0004913e) navi_smil_pane_t1

0x9aab,	// (0x0004910b) form2_midp_slider_pane_g1

0x9ab4,	// (0x00049114) form2_midp_slider_pane_g2

0x9abc,	// (0x0004911c) form2_midp_slider_pane_g3

0x9aab,	// (0x0004910b) form2_midp_slider_pane_g4

0xf0f4,	// (0x0004e754) form2_midp_slider_pane_g5

0x0004,

0xfe20,	// (0x0004f480) form2_midp_slider_pane_g

0x2fea,	// (0x0004264a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2fea,	// (0x0004264a) vkb2_area_bottom_space_btn_pane_g4

0xd681,	// (0x0004cce1) lc0_navi_pane_ParamLimits

0xd681,	// (0x0004cce1) lc0_navi_pane

0xd6eb,	// (0x0004cd4b) lc0_stat_indi_pane_ParamLimits

0xd6eb,	// (0x0004cd4b) lc0_stat_indi_pane

0xd700,	// (0x0004cd60) ls0_title_pane_ParamLimits

0xd700,	// (0x0004cd60) ls0_title_pane

0x3a8e,	// (0x000430ee) bg_popup_sub_pane_cp14_ParamLimits

0x8f18,	// (0x00048578) list_uniindi_pane_ParamLimits

0x8f24,	// (0x00048584) uniindi_top_pane_ParamLimits

0x8fc0,	// (0x00048620) list_single_uniindi_pane_g1_ParamLimits

0x8fd3,	// (0x00048633) list_single_uniindi_pane_t1_ParamLimits

0xcde1,	// (0x0004c441) lc0_stat_clock_pane_ParamLimits

0xcde1,	// (0x0004c441) lc0_stat_clock_pane

0xf0ff,	// (0x0004e75f) lc0_stat_indi_pane_g1_ParamLimits

0xf0ff,	// (0x0004e75f) lc0_stat_indi_pane_g1

0xf10c,	// (0x0004e76c) lc0_stat_indi_pane_g2_ParamLimits

0xf10c,	// (0x0004e76c) lc0_stat_indi_pane_g2

0x0001,

0xfe2b,	// (0x0004f48b) lc0_stat_indi_pane_g_ParamLimits

0xfe2b,	// (0x0004f48b) lc0_stat_indi_pane_g

0xcdee,	// (0x0004c44e) lc0_uni_indicator_pane_ParamLimits

0xcdee,	// (0x0004c44e) lc0_uni_indicator_pane

0xf119,	// (0x0004e779) ls0_title_pane_g1_ParamLimits

0xf119,	// (0x0004e779) ls0_title_pane_g1

0xf12d,	// (0x0004e78d) ls0_title_pane_t1_ParamLimits

0xf12d,	// (0x0004e78d) ls0_title_pane_t1

0xcdfb,	// (0x0004c45b) lc0_uni_indicator_pane_g1_ParamLimits

0xcdfb,	// (0x0004c45b) lc0_uni_indicator_pane_g1

0x9b50,	// (0x000491b0) lc0_stat_clock_pane_t1

0x312e,	// (0x0004278e) main_ai5_pane

0x9b5e,	// (0x000491be) ai5_sk_pane_ParamLimits

0x9b5e,	// (0x000491be) ai5_sk_pane

0xf15b,	// (0x0004e7bb) cell_ai5_widget_pane_ParamLimits

0xf15b,	// (0x0004e7bb) cell_ai5_widget_pane

0x9c21,	// (0x00049281) aid_size_cell_widget_grid

0x9c37,	// (0x00049297) bg_ai5_widget_pane_ParamLimits

0x9c37,	// (0x00049297) bg_ai5_widget_pane

0x9ca1,	// (0x00049301) cell_ai5_widget_pane_g2

0x9cb1,	// (0x00049311) cell_ai5_widget_pane_g3

0x9cd0,	// (0x00049330) cell_ai5_widget_pane_g4

0x9cdc,	// (0x0004933c) cell_ai5_widget_pane_g5

0x9ce8,	// (0x00049348) cell_ai5_widget_pane_g6

0x9cf4,	// (0x00049354) cell_ai5_widget_pane_g7

0x9d3c,	// (0x0004939c) cell_ai5_widget_pane_t1_ParamLimits

0x9d3c,	// (0x0004939c) cell_ai5_widget_pane_t1

0x9d59,	// (0x000493b9) cell_ai5_widget_pane_t2_ParamLimits

0x9d59,	// (0x000493b9) cell_ai5_widget_pane_t2

0x9d71,	// (0x000493d1) cell_ai5_widget_pane_t3_ParamLimits

0x9d71,	// (0x000493d1) cell_ai5_widget_pane_t3

0x9d89,	// (0x000493e9) cell_ai5_widget_pane_t4_ParamLimits

0x9d89,	// (0x000493e9) cell_ai5_widget_pane_t4

0x9da3,	// (0x00049403) cell_ai5_widget_pane_t5_ParamLimits

0x9da3,	// (0x00049403) cell_ai5_widget_pane_t5

0x9dc2,	// (0x00049422) cell_ai5_widget_pane_t6_ParamLimits

0x9dc2,	// (0x00049422) cell_ai5_widget_pane_t6

0x9dd4,	// (0x00049434) cell_ai5_widget_pane_t7_ParamLimits

0x9dd4,	// (0x00049434) cell_ai5_widget_pane_t7

0x9ded,	// (0x0004944d) cell_ai5_widget_pane_t8_ParamLimits

0x9ded,	// (0x0004944d) cell_ai5_widget_pane_t8

0x0009,

0xfe45,	// (0x0004f4a5) cell_ai5_widget_pane_t_ParamLimits

0xfe45,	// (0x0004f4a5) cell_ai5_widget_pane_t

0x9e39,	// (0x00049499) grid_ai5_widget_pane

0x3a8e,	// (0x000430ee) highlight_cell_ai5_widget_pane_ParamLimits

0x3a8e,	// (0x000430ee) highlight_cell_ai5_widget_pane

0xf1c5,	// (0x0004e825) ai5_sk_left_pane

0xf1cf,	// (0x0004e82f) ai5_sk_middle_pane

0xf1d9,	// (0x0004e839) ai5_sk_right_pane

0x9e6f,	// (0x000494cf) bg_ai5_widget_pane_g1_ParamLimits

0x9e6f,	// (0x000494cf) bg_ai5_widget_pane_g1

0x9e7b,	// (0x000494db) bg_ai5_widget_pane_g2_ParamLimits

0x9e7b,	// (0x000494db) bg_ai5_widget_pane_g2

0x9e87,	// (0x000494e7) bg_ai5_widget_pane_g3_ParamLimits

0x9e87,	// (0x000494e7) bg_ai5_widget_pane_g3

0x9e93,	// (0x000494f3) bg_ai5_widget_pane_g4_ParamLimits

0x9e93,	// (0x000494f3) bg_ai5_widget_pane_g4

0x9e9f,	// (0x000494ff) bg_ai5_widget_pane_g5_ParamLimits

0x9e9f,	// (0x000494ff) bg_ai5_widget_pane_g5

0x9eab,	// (0x0004950b) bg_ai5_widget_pane_g6_ParamLimits

0x9eab,	// (0x0004950b) bg_ai5_widget_pane_g6

0x9eb7,	// (0x00049517) bg_ai5_widget_pane_g7_ParamLimits

0x9eb7,	// (0x00049517) bg_ai5_widget_pane_g7

0x9ec3,	// (0x00049523) bg_ai5_widget_pane_g8_ParamLimits

0x9ec3,	// (0x00049523) bg_ai5_widget_pane_g8

0x9ecf,	// (0x0004952f) bg_ai5_widget_pane_g9_ParamLimits

0x9ecf,	// (0x0004952f) bg_ai5_widget_pane_g9

0x0008,

0xfe5a,	// (0x0004f4ba) bg_ai5_widget_pane_g_ParamLimits

0xfe5a,	// (0x0004f4ba) bg_ai5_widget_pane_g

0x9f02,	// (0x00049562) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f02,	// (0x00049562) cell_shortcut_ai5_widget_pane

0x46f4,	// (0x00043d54) bg_cell_shortcut_ai5_widget_pane

0x9f13,	// (0x00049573) cell_grid_ai5_widget_pane_g1

0x9f1c,	// (0x0004957c) highlight_cell_shortcut_ai5_widget_pane

0x4f45,	// (0x000445a5) ai5_sk_left_pane_g1

0x9f24,	// (0x00049584) ai5_sk_left_pane_g2

0x9f2c,	// (0x0004958c) ai5_sk_left_pane_g3

0x9f34,	// (0x00049594) ai5_sk_left_pane_g4

0x0003,

0xfe6d,	// (0x0004f4cd) ai5_sk_left_pane_g

0x9f3c,	// (0x0004959c) ai5_sk_left_pane_t1

0x4f3d,	// (0x0004459d) ai5_sk_right_pane_g1

0x9f4a,	// (0x000495aa) ai5_sk_right_pane_g2

0x9f52,	// (0x000495b2) ai5_sk_right_pane_g3

0x9f5a,	// (0x000495ba) ai5_sk_right_pane_g4

0x0003,

0xfe76,	// (0x0004f4d6) ai5_sk_right_pane_g

0x9f62,	// (0x000495c2) ai5_sk_right_pane_t1

0x4f3d,	// (0x0004459d) ai5_sk_middle_pane_g1

0x4f45,	// (0x000445a5) ai5_sk_middle_pane_g2

0x4f5d,	// (0x000445bd) ai5_sk_middle_pane_g3

0x9f52,	// (0x000495b2) ai5_sk_middle_pane_g4

0x9f2c,	// (0x0004958c) ai5_sk_middle_pane_g5

0x9f70,	// (0x000495d0) ai5_sk_middle_pane_g6

0xf1e3,	// (0x0004e843) ai5_sk_middle_pane_g7

0x0006,

0xfe7f,	// (0x0004f4df) ai5_sk_middle_pane_g

0xd56d,	// (0x0004cbcd) aid_touch_area_size_lc0_ParamLimits

0xd56d,	// (0x0004cbcd) aid_touch_area_size_lc0

0x261a,	// (0x00041c7a) cell_hwr_candidate_pane_t1_ParamLimits

0x4a96,	// (0x000440f6) aid_touch_navi_pane

0xd7f3,	// (0x0004ce53) status_dt_navi_pane_ParamLimits

0xd7f3,	// (0x0004ce53) status_dt_navi_pane

0xd80b,	// (0x0004ce6b) status_dt_sta_pane_ParamLimits

0xd80b,	// (0x0004ce6b) status_dt_sta_pane

0xf1eb,	// (0x0004e84b) dt_sta_controll_pane

0xf1f8,	// (0x0004e858) dt_sta_indi_pane

0xf205,	// (0x0004e865) dt_sta_title_pane

0x34ab,	// (0x00042b0b) bg_dt_sta_indi_pane_ParamLimits

0x34ab,	// (0x00042b0b) bg_dt_sta_indi_pane

0x9fab,	// (0x0004960b) dt_sta_battery_pane

0x9fb3,	// (0x00049613) dt_sta_indi_pane_g1

0x9fbc,	// (0x0004961c) dt_sta_indi_pane_g2

0x9fc5,	// (0x00049625) dt_sta_indi_pane_g3

0x0002,

0xfe8e,	// (0x0004f4ee) dt_sta_indi_pane_g

0x9fce,	// (0x0004962e) dt_sta_signal_pane

0x3a8e,	// (0x000430ee) bg_dt_sta_title_pane_ParamLimits

0x3a8e,	// (0x000430ee) bg_dt_sta_title_pane

0x9fd7,	// (0x00049637) dt_sta_title_pane_g1

0x9fdf,	// (0x0004963f) dt_sta_title_pane_t1_ParamLimits

0x9fdf,	// (0x0004963f) dt_sta_title_pane_t1

0x312e,	// (0x0004278e) bg_dt_sta_control_pane

0x9ff4,	// (0x00049654) dt_sta_controll_pane_g1

0x9ffd,	// (0x0004965d) bg_dt_sta_title_pane_g1

0xa006,	// (0x00049666) bg_dt_sta_title_pane_g2

0xa00f,	// (0x0004966f) bg_dt_sta_title_pane_g3

0x0002,

0xfe95,	// (0x0004f4f5) bg_dt_sta_title_pane_g

0x7647,	// (0x00046ca7) bg_dt_sta_indi_pane_g1

0xa018,	// (0x00049678) dt_sta_signal_pane_g1

0xa020,	// (0x00049680) dt_sta_signal_pane_g2

0x0001,

0xfe9c,	// (0x0004f4fc) dt_sta_signal_pane_g

0xa028,	// (0x00049688) dt_sta_battery_pane_g1

0xa031,	// (0x00049691) dt_sta_battery_pane_t1

0x7647,	// (0x00046ca7) bg_dt_sta_control_pane_g1

0x420a,	// (0x0004386a) fep_china_uni_eep_pane

0x4212,	// (0x00043872) fep_china_uni_entry_pane_ParamLimits

0x4222,	// (0x00043882) popup_fep_china_uni_window_g1_ParamLimits

0x4232,	// (0x00043892) popup_fep_china_uni_window_g2_ParamLimits

0x4232,	// (0x00043892) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0004ed88) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0004ed88) popup_fep_china_uni_window_g

0xa040,	// (0x000496a0) fep_china_uni_eep_pane_g1

0xa048,	// (0x000496a8) fep_china_uni_eep_pane_t1

0x9acd,	// (0x0004912d) aid_touch_area_size_smil_player

0x4be2,	// (0x00044242) lc0_clock_pane

0x4dbb,	// (0x0004441b) status_pane_g5_ParamLimits

0x4dbb,	// (0x0004441b) status_pane_g5

0xc24b,	// (0x0004b8ab) popup_keymap_window

0x4d81,	// (0x000443e1) status_icon_pane

0x9cb1,	// (0x00049311) cell_ai5_widget_pane_g3_ParamLimits

0x9cd0,	// (0x00049330) cell_ai5_widget_pane_g4_ParamLimits

0x9cdc,	// (0x0004933c) cell_ai5_widget_pane_g5_ParamLimits

0x9d00,	// (0x00049360) cell_ai5_widget_pane_g8_ParamLimits

0x9d00,	// (0x00049360) cell_ai5_widget_pane_g8

0x9d14,	// (0x00049374) cell_ai5_widget_pane_g9_ParamLimits

0x9d14,	// (0x00049374) cell_ai5_widget_pane_g9

0x9d28,	// (0x00049388) cell_ai5_widget_pane_g10_ParamLimits

0x9d28,	// (0x00049388) cell_ai5_widget_pane_g10

0xa057,	// (0x000496b7) status_icon_pane_g1

0x312e,	// (0x0004278e) bg_popup_sub_pane_cp13

0xa05f,	// (0x000496bf) popup_keymap_window_t1

0xd4ef,	// (0x0004cb4f) control_pane_g6_ParamLimits

0xd4ef,	// (0x0004cb4f) control_pane_g6

0xd4fc,	// (0x0004cb5c) control_pane_g7_ParamLimits

0xd4fc,	// (0x0004cb5c) control_pane_g7

0xd509,	// (0x0004cb69) control_pane_g8_ParamLimits

0xd509,	// (0x0004cb69) control_pane_g8

0xf1eb,	// (0x0004e84b) dt_sta_controll_pane_ParamLimits

0xf1f8,	// (0x0004e858) dt_sta_indi_pane_ParamLimits

0xf205,	// (0x0004e865) dt_sta_title_pane_ParamLimits

0x39c6,	// (0x00043026) aid_size_touch_scroll_bar_cale

0x1054,	// (0x000406b4) popup_discreet_window_ParamLimits

0x1054,	// (0x000406b4) popup_discreet_window

0xbdba,	// (0x0004b41a) popup_sk_window

0x5663,	// (0x00044cc3) bg_popup_sub_pane_cp28_ParamLimits

0x5663,	// (0x00044cc3) bg_popup_sub_pane_cp28

0xa06d,	// (0x000496cd) popup_discreet_window_g1_ParamLimits

0xa06d,	// (0x000496cd) popup_discreet_window_g1

0xa08d,	// (0x000496ed) popup_discreet_window_t1_ParamLimits

0xa08d,	// (0x000496ed) popup_discreet_window_t1

0xa0ab,	// (0x0004970b) popup_discreet_window_t2_ParamLimits

0xa0ab,	// (0x0004970b) popup_discreet_window_t2

0x0002,

0xfea1,	// (0x0004f501) popup_discreet_window_t_ParamLimits

0xfea1,	// (0x0004f501) popup_discreet_window_t

0x305c,	// (0x000426bc) popup_sk_window_g1

0x3066,	// (0x000426c6) popup_sk_window_g2

0x0001,

0xfea8,	// (0x0004f508) popup_sk_window_g

0x3070,	// (0x000426d0) popup_sk_window_t1

0x307e,	// (0x000426de) popup_sk_window_t1_copy1

0x9ca1,	// (0x00049301) cell_ai5_widget_pane_g2_ParamLimits

0x9dff,	// (0x0004945f) cell_ai5_widget_pane_t9_ParamLimits

0x9dff,	// (0x0004945f) cell_ai5_widget_pane_t9

0x312e,	// (0x0004278e) main_fep_fshwr2_pane

0xce22,	// (0x0004c482) aid_fshwr2_btn_pane

0xce31,	// (0x0004c491) aid_fshwr2_syb_pane

0xce43,	// (0x0004c4a3) aid_fshwr2_txt_pane

0xce52,	// (0x0004c4b2) fshwr2_func_candi_pane

0xce63,	// (0x0004c4c3) fshwr2_hwr_syb_pane

0xce7e,	// (0x0004c4de) fshwr2_icf_pane

0x312e,	// (0x0004278e) fshwr2_icf_bg_pane

0xf217,	// (0x0004e877) fshwr2_icf_pane_t1_ParamLimits

0xf217,	// (0x0004e877) fshwr2_icf_pane_t1

0x7647,	// (0x00046ca7) fshwr2_func_candi_pane_g1

0xa114,	// (0x00049774) fshwr2_func_candi_row_pane_ParamLimits

0xa114,	// (0x00049774) fshwr2_func_candi_row_pane

0xf22f,	// (0x0004e88f) cell_fshwr2_syb_pane_ParamLimits

0xf22f,	// (0x0004e88f) cell_fshwr2_syb_pane

0x78c5,	// (0x00046f25) fshwr2_hwr_syb_pane_g1_ParamLimits

0x78c5,	// (0x00046f25) fshwr2_hwr_syb_pane_g1

0x312e,	// (0x0004278e) bg_popup_call_pane_cp01

0xa13f,	// (0x0004979f) fshwr2_func_candi_cell_pane_ParamLimits

0xa13f,	// (0x0004979f) fshwr2_func_candi_cell_pane

0xa170,	// (0x000497d0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa170,	// (0x000497d0) fshwr2_func_candi_cell_bg_pane

0xa18a,	// (0x000497ea) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa18a,	// (0x000497ea) fshwr2_func_candi_cell_pane_g1

0xa1b2,	// (0x00049812) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa1b2,	// (0x00049812) fshwr2_func_candi_cell_pane_t1

0x312e,	// (0x0004278e) bg_button_pane_cp08

0x46f4,	// (0x00043d54) cell_fshwr2_syb_bg_pane

0xf249,	// (0x0004e8a9) cell_fshwr2_syb_bg_pane_g1

0xf251,	// (0x0004e8b1) cell_fshwr2_syb_bg_pane_t1

0x3a8e,	// (0x000430ee) main_tmo_pane

0x6163,	// (0x000457c3) uni_indicator_pane_g1_ParamLimits

0x6178,	// (0x000457d8) uni_indicator_pane_g2_ParamLimits

0x618e,	// (0x000457ee) uni_indicator_pane_g3_ParamLimits

0x61a4,	// (0x00045804) uni_indicator_pane_g4_ParamLimits

0x61a4,	// (0x00045804) uni_indicator_pane_g4

0x61b8,	// (0x00045818) uni_indicator_pane_g5_ParamLimits

0x61b8,	// (0x00045818) uni_indicator_pane_g5

0x61cc,	// (0x0004582c) uni_indicator_pane_g6_ParamLimits

0x61cc,	// (0x0004582c) uni_indicator_pane_g6

0xf920,	// (0x0004ef80) uni_indicator_pane_g_ParamLimits

0xe5f3,	// (0x0004dc53) popup_tmo_note_window_ParamLimits

0xe5f3,	// (0x0004dc53) popup_tmo_note_window

0x3a8e,	// (0x000430ee) fshwr2_bg_pane

0xa1a3,	// (0x00049803) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa1a3,	// (0x00049803) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfead,	// (0x0004f50d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfead,	// (0x0004f50d) fshwr2_func_candi_cell_pane_g

0x7647,	// (0x00046ca7) bg_popup_window_pane_cp01

0xa1dc,	// (0x0004983c) bg_popup_window_pane_g1_cp01

0xa1e5,	// (0x00049845) bg_popup_window_pane_cp22_ParamLimits

0xa1e5,	// (0x00049845) bg_popup_window_pane_cp22

0xa1f3,	// (0x00049853) listscroll_tmo_link_pane_ParamLimits

0xa1f3,	// (0x00049853) listscroll_tmo_link_pane

0xa233,	// (0x00049893) popup_tmo_note_window_g1_ParamLimits

0xa233,	// (0x00049893) popup_tmo_note_window_g1

0xa240,	// (0x000498a0) tmo_note_info_pane_ParamLimits

0xa240,	// (0x000498a0) tmo_note_info_pane

0xf260,	// (0x0004e8c0) list_tmo_note_info_pane_g1_ParamLimits

0xf260,	// (0x0004e8c0) list_tmo_note_info_pane_g1

0xa271,	// (0x000498d1) list_tmo_note_info_pane_g2_ParamLimits

0xa271,	// (0x000498d1) list_tmo_note_info_pane_g2

0x0001,

0xfeb2,	// (0x0004f512) list_tmo_note_info_pane_g_ParamLimits

0xfeb2,	// (0x0004f512) list_tmo_note_info_pane_g

0xa28d,	// (0x000498ed) list_tmo_note_info_text_pane_ParamLimits

0xa28d,	// (0x000498ed) list_tmo_note_info_text_pane

0xa30e,	// (0x0004996e) list_tmo_link_pane

0xa31b,	// (0x0004997b) scroll_pane_cp20

0xa328,	// (0x00049988) list_single_tmo_link_pane_ParamLimits

0xa328,	// (0x00049988) list_single_tmo_link_pane

0xa338,	// (0x00049998) list_single_tmo_link_pane_t1

0xa346,	// (0x000499a6) list_tmo_note_info_text_pane_t1_ParamLimits

0xa346,	// (0x000499a6) list_tmo_note_info_text_pane_t1

0xd175,	// (0x0004c7d5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd175,	// (0x0004c7d5) aid_size_touch_scroll_bar_cp01

0xb974,	// (0x0004afd4) aid_size_touch_slider_marker

0xbdaa,	// (0x0004b40a) popup_settings_window_ParamLimits

0xbdaa,	// (0x0004b40a) popup_settings_window

0x079c,	// (0x0003fdfc) popup_candi_list_indi_window

0x4a96,	// (0x000440f6) aid_touch_navi_pane_ParamLimits

0x286f,	// (0x00041ecf) rs_clock_indi_pane

0x2878,	// (0x00041ed8) sctrl_sk_bottom_pane_ParamLimits

0x2889,	// (0x00041ee9) sctrl_sk_top_pane_ParamLimits

0x2970,	// (0x00041fd0) popup_fep_tooltip_window

0x9c21,	// (0x00049281) aid_size_cell_widget_grid_ParamLimits

0x9c95,	// (0x000492f5) cell_ai5_widget_pane_g1_ParamLimits

0x9c95,	// (0x000492f5) cell_ai5_widget_pane_g1

0x9ce8,	// (0x00049348) cell_ai5_widget_pane_g6_ParamLimits

0x9cf4,	// (0x00049354) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe30,	// (0x0004f490) cell_ai5_widget_pane_g_ParamLimits

0xfe30,	// (0x0004f490) cell_ai5_widget_pane_g

0x9e23,	// (0x00049483) cell_ai5_widget_pane_t10_ParamLimits

0x9e23,	// (0x00049483) cell_ai5_widget_pane_t10

0x9e39,	// (0x00049499) grid_ai5_widget_pane_ParamLimits

0x9edb,	// (0x0004953b) cell_contacts_ai5_widget_pane_ParamLimits

0x9edb,	// (0x0004953b) cell_contacts_ai5_widget_pane

0xa0c0,	// (0x00049720) popup_discreet_window_t3_ParamLimits

0xa0c0,	// (0x00049720) popup_discreet_window_t3

0x30f6,	// (0x00042756) popup_fshwr2_char_preview_window_ParamLimits

0x30f6,	// (0x00042756) popup_fshwr2_char_preview_window

0xf277,	// (0x0004e8d7) tmo_note_info_pane_t1

0xf28c,	// (0x0004e8ec) tmo_note_info_pane_t2

0xf2a3,	// (0x0004e903) tmo_note_info_pane_t3

0xa2ea,	// (0x0004994a) tmo_note_info_pane_t4

0xa2fc,	// (0x0004995c) tmo_note_info_pane_t5

0x0004,

0xfeb7,	// (0x0004f517) tmo_note_info_pane_t

0xa30e,	// (0x0004996e) list_tmo_link_pane_ParamLimits

0xa31b,	// (0x0004997b) scroll_pane_cp20_ParamLimits

0x312e,	// (0x0004278e) bg_popup_fep_char_preview_window_cp01

0xa35f,	// (0x000499bf) popup_fshwr2_char_preview_window_t1

0xa36d,	// (0x000499cd) popup_candi_list_indi_window_g1

0xa376,	// (0x000499d6) bg_cell_contacts_ai5_widget_pane

0xa382,	// (0x000499e2) cell_contacts_ai5_widget_pane_g1

0xa396,	// (0x000499f6) cell_contacts_ai5_widget_pane_g2

0xa3a2,	// (0x00049a02) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec2,	// (0x0004f522) cell_contacts_ai5_widget_pane_g

0xa3b5,	// (0x00049a15) cell_contacts_ai5_widget_pane_t1

0x3a8e,	// (0x000430ee) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf31d,	// (0x0004e97d) settings_container_pane

0x46f4,	// (0x00043d54) listscroll_set_pane_copy1

0x6ced,	// (0x0004634d) scroll_pane_cp121_copy1

0xa438,	// (0x00049a98) set_content_pane_copy1

0xf329,	// (0x0004e989) aid_height_set_list_copy1_ParamLimits

0xf329,	// (0x0004e989) aid_height_set_list_copy1

0x6406,	// (0x00045a66) aid_size_parent_copy1_ParamLimits

0x6406,	// (0x00045a66) aid_size_parent_copy1

0xf335,	// (0x0004e995) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf335,	// (0x0004e995) button_value_adjust_pane_cp6_copy1

0x4a34,	// (0x00044094) list_highlight_pane_cp2_copy1_ParamLimits

0x4a34,	// (0x00044094) list_highlight_pane_cp2_copy1

0xf349,	// (0x0004e9a9) list_set_pane_copy1_ParamLimits

0xf349,	// (0x0004e9a9) list_set_pane_copy1

0xf2b8,	// (0x0004e918) main_pane_set_t1_copy1_ParamLimits

0xf2b8,	// (0x0004e918) main_pane_set_t1_copy1

0xf2f2,	// (0x0004e952) main_pane_set_t2_copy1_ParamLimits

0xf2f2,	// (0x0004e952) main_pane_set_t2_copy1

0xf3f6,	// (0x0004ea56) main_pane_set_t3_copy1

0xf404,	// (0x0004ea64) main_pane_set_t4_copy1

0xf311,	// (0x0004e971) set_content_pane_g1_copy1_ParamLimits

0xf311,	// (0x0004e971) set_content_pane_g1_copy1

0xf412,	// (0x0004ea72) setting_code_pane_copy1

0xa531,	// (0x00049b91) setting_slider_graphic_pane_copy1

0xa531,	// (0x00049b91) setting_slider_pane_copy1

0xa531,	// (0x00049b91) setting_text_pane_copy1

0xa531,	// (0x00049b91) setting_volume_pane_copy1

0xf412,	// (0x0004ea72) settings_code_pane_cp2_copy1

0xf41a,	// (0x0004ea7a) settings_code_pane_cp_copy1_ParamLimits

0xf41a,	// (0x0004ea7a) settings_code_pane_cp_copy1

0xf42e,	// (0x0004ea8e) volume_set_pane_copy1

0xf436,	// (0x0004ea96) volume_set_pane_g10_copy1

0xf43e,	// (0x0004ea9e) volume_set_pane_g1_copy1

0xf446,	// (0x0004eaa6) volume_set_pane_g2_copy1

0xf44e,	// (0x0004eaae) volume_set_pane_g3_copy1

0xf456,	// (0x0004eab6) volume_set_pane_g4_copy1

0xf45e,	// (0x0004eabe) volume_set_pane_g5_copy1

0xf466,	// (0x0004eac6) volume_set_pane_g6_copy1

0xf46e,	// (0x0004eace) volume_set_pane_g7_copy1

0xf476,	// (0x0004ead6) volume_set_pane_g8_copy1

0xf47e,	// (0x0004eade) volume_set_pane_g9_copy1

0x3222,	// (0x00042882) bg_set_opt_pane_cp_copy1_ParamLimits

0x3222,	// (0x00042882) bg_set_opt_pane_cp_copy1

0xa5a5,	// (0x00049c05) setting_slider_pane_t1_copy1_ParamLimits

0xa5a5,	// (0x00049c05) setting_slider_pane_t1_copy1

0xf486,	// (0x0004eae6) setting_slider_pane_t2_copy1_ParamLimits

0xf486,	// (0x0004eae6) setting_slider_pane_t2_copy1

0xf4a0,	// (0x0004eb00) setting_slider_pane_t3_copy1_ParamLimits

0xf4a0,	// (0x0004eb00) setting_slider_pane_t3_copy1

0xf4b8,	// (0x0004eb18) slider_set_pane_copy1_ParamLimits

0xf4b8,	// (0x0004eb18) slider_set_pane_copy1

0x3af5,	// (0x00043155) set_opt_bg_pane_g1_copy2

0x3afd,	// (0x0004315d) set_opt_bg_pane_g2_copy2

0xa60b,	// (0x00049c6b) set_opt_bg_pane_g3_copy2

0x3b0d,	// (0x0004316d) set_opt_bg_pane_g4_copy2

0x3b15,	// (0x00043175) set_opt_bg_pane_g5_copy2

0x3b1d,	// (0x0004317d) set_opt_bg_pane_g6_copy2

0xf4ce,	// (0x0004eb2e) set_opt_bg_pane_g7_copy2

0xa61d,	// (0x00049c7d) set_opt_bg_pane_g8_copy2

0xa627,	// (0x00049c87) set_opt_bg_pane_g9_copy2

0xa631,	// (0x00049c91) aid_size_touch_slider_mark_copy1_ParamLimits

0xa631,	// (0x00049c91) aid_size_touch_slider_mark_copy1

0xa645,	// (0x00049ca5) slider_set_pane_g1_copy1

0xa64e,	// (0x00049cae) slider_set_pane_g2_copy1

0x6385,	// (0x000459e5) slider_set_pane_g3_copy1_ParamLimits

0x6385,	// (0x000459e5) slider_set_pane_g3_copy1

0x6399,	// (0x000459f9) slider_set_pane_g4_copy1_ParamLimits

0x6399,	// (0x000459f9) slider_set_pane_g4_copy1

0x63b1,	// (0x00045a11) slider_set_pane_g5_copy1_ParamLimits

0x63b1,	// (0x00045a11) slider_set_pane_g5_copy1

0x6385,	// (0x000459e5) slider_set_pane_g6_copy1_ParamLimits

0x6385,	// (0x000459e5) slider_set_pane_g6_copy1

0xf4d6,	// (0x0004eb36) slider_set_pane_g7_copy1_ParamLimits

0xf4d6,	// (0x0004eb36) slider_set_pane_g7_copy1

0x3142,	// (0x000427a2) bg_set_opt_pane_cp2_copy1

0xa66c,	// (0x00049ccc) setting_slider_graphic_pane_g1_copy1

0xf4ec,	// (0x0004eb4c) setting_slider_graphic_pane_t1_copy1

0xf4fc,	// (0x0004eb5c) setting_slider_graphic_pane_t2_copy1

0xf50c,	// (0x0004eb6c) slider_set_pane_cp_copy1

0xa6a5,	// (0x00049d05) input_focus_pane_cp1_copy1

0xa6ae,	// (0x00049d0e) list_set_text_pane_copy1

0xa6b6,	// (0x00049d16) setting_text_pane_g1_copy1

0xf53b,	// (0x0004eb9b) set_text_pane_t1_copy1

0xa6a5,	// (0x00049d05) input_focus_pane_cp2_copy1

0xa6b6,	// (0x00049d16) setting_code_pane_g1_copy1

0xf514,	// (0x0004eb74) setting_code_pane_t1_copy1

0x6b19,	// (0x00046179) list_set_graphic_pane_copy1

0x3142,	// (0x000427a2) bg_set_opt_pane_cp4_copy1

0xd39c,	// (0x0004c9fc) list_set_graphic_pane_g1_copy1_ParamLimits

0xd39c,	// (0x0004c9fc) list_set_graphic_pane_g1_copy1

0xf522,	// (0x0004eb82) list_set_graphic_pane_g2_copy1

0xd3b4,	// (0x0004ca14) list_set_graphic_pane_t1_copy1_ParamLimits

0xd3b4,	// (0x0004ca14) list_set_graphic_pane_t1_copy1

0x7647,	// (0x00046ca7) rs_clock_indi_pane_g1

0xa6e7,	// (0x00049d47) rs_clock_indi_pane_t1

0xa6f5,	// (0x00049d55) rs_indi_pane

0xa6fd,	// (0x00049d5d) rs_indi_pane_g1

0xa706,	// (0x00049d66) rs_indi_pane_g2

0xa70f,	// (0x00049d6f) rs_indi_pane_g3

0x0002,

0xfec9,	// (0x0004f529) rs_indi_pane_g

0x46f4,	// (0x00043d54) bg_popup_preview_window_pane_cp03

0xa718,	// (0x00049d78) popup_fep_tooltip_window_t1

0x82ae,	// (0x0004790e) popup_note2_window_g2_ParamLimits

0x82ae,	// (0x0004790e) popup_note2_window_g2

0x0001,

0xfc62,	// (0x0004f2c2) popup_note2_window_g_ParamLimits

0xfc62,	// (0x0004f2c2) popup_note2_window_g

0x87a9,	// (0x00047e09) bg_popup_sub_pane_cp11_ParamLimits

0x87b6,	// (0x00047e16) cell_ai3_links_pane_g1_ParamLimits

0x87cd,	// (0x00047e2d) cell_ai3_links_pane_t1

0xf53b,	// (0x0004eb9b) set_text_pane_t1_copy1_ParamLimits

0xd428,	// (0x0004ca88) cell_graphic_popup_pane_cp2_ParamLimits

0xd428,	// (0x0004ca88) cell_graphic_popup_pane_cp2

0xf52a,	// (0x0004eb8a) cell_graphic_popup_pane_g1_cp2

0x37d9,	// (0x00042e39) cell_graphic_popup_pane_g2_cp2

0xa72e,	// (0x00049d8e) cell_graphic_popup_pane_g3_cp2

0xa736,	// (0x00049d96) cell_graphic_popup_pane_t2_cp2

0x37ea,	// (0x00042e4a) grid_highlight_pane_cp3_cp2

0x3e46,	// (0x000434a6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3a8e,	// (0x000430ee) main_tmo_pane_ParamLimits

0xe5e7,	// (0x0004dc47) popup_tmo_big_image_note_window

0x9c85,	// (0x000492e5) cell_ai5_widget_list_pane

0x9c8d,	// (0x000492ed) cell_ai5_widget_lrg_icon_pane

0xf277,	// (0x0004e8d7) tmo_note_info_pane_t1_ParamLimits

0xf28c,	// (0x0004e8ec) tmo_note_info_pane_t2_ParamLimits

0xf2a3,	// (0x0004e903) tmo_note_info_pane_t3_ParamLimits

0xa2ea,	// (0x0004994a) tmo_note_info_pane_t4_ParamLimits

0xa2fc,	// (0x0004995c) tmo_note_info_pane_t5_ParamLimits

0xfeb7,	// (0x0004f517) tmo_note_info_pane_t_ParamLimits

0xf31d,	// (0x0004e97d) settings_container_pane_ParamLimits

0xa69d,	// (0x00049cfd) indicator_popup_pane_cp5

0xa69d,	// (0x00049cfd) indicator_popup_pane_cp6

0x6b19,	// (0x00046179) list_set_graphic_pane_copy1_ParamLimits

0x312e,	// (0x0004278e) bg_popup_window_pane_cp23

0xa744,	// (0x00049da4) popup_tmo_big_image_note_window_g1

0xa74e,	// (0x00049dae) popup_tmo_big_image_note_window_t1

0xa75e,	// (0x00049dbe) popup_tmo_big_image_note_window_t2

0xa76e,	// (0x00049dce) popup_tmo_big_image_note_window_t3

0x0002,

0xfed0,	// (0x0004f530) popup_tmo_big_image_note_window_t

0xa77e,	// (0x00049dde) cell_ai5_widget_lrg_icon_pane_g1

0xa786,	// (0x00049de6) cell_ai5_widget_lrg_icon_pane_t1

0xa794,	// (0x00049df4) cell_ai5_widget_list_row_pane_ParamLimits

0xa794,	// (0x00049df4) cell_ai5_widget_list_row_pane

0xa7ad,	// (0x00049e0d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7ad,	// (0x00049e0d) cell_ai5_widget_list_row_pane_g1

0xa7ba,	// (0x00049e1a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa7ba,	// (0x00049e1a) cell_ai5_widget_list_row_pane_t1

0xa7d2,	// (0x00049e32) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa7d2,	// (0x00049e32) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed7,	// (0x0004f537) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed7,	// (0x0004f537) cell_ai5_widget_list_row_pane_t

0x312e,	// (0x0004278e) main_fep_vtchi_ss_pane

0xa809,	// (0x00049e69) popup_fep_char_pre_window

0xa811,	// (0x00049e71) popup_fep_ituss_window

0xa832,	// (0x00049e92) popup_fep_vkbss_window

0xa851,	// (0x00049eb1) grid_vkbss_keypad_pane_ParamLimits

0xa851,	// (0x00049eb1) grid_vkbss_keypad_pane

0xa861,	// (0x00049ec1) ituss_keypad_pane

0xa87d,	// (0x00049edd) aid_vkbss_key_offset_ParamLimits

0xa87d,	// (0x00049edd) aid_vkbss_key_offset

0xa889,	// (0x00049ee9) cell_vkbss_key_pane_ParamLimits

0xa889,	// (0x00049ee9) cell_vkbss_key_pane

0xa89f,	// (0x00049eff) bg_cell_vkbss_key_g1_ParamLimits

0xa89f,	// (0x00049eff) bg_cell_vkbss_key_g1

0xa8ab,	// (0x00049f0b) cell_vkbss_key_3p_pane_ParamLimits

0xa8ab,	// (0x00049f0b) cell_vkbss_key_3p_pane

0xa8c5,	// (0x00049f25) cell_vkbss_key_g1_ParamLimits

0xa8c5,	// (0x00049f25) cell_vkbss_key_g1

0xa8df,	// (0x00049f3f) cell_vkbss_key_t1_ParamLimits

0xa8df,	// (0x00049f3f) cell_vkbss_key_t1

0xa90a,	// (0x00049f6a) cell_ituss_key_pane_ParamLimits

0xa90a,	// (0x00049f6a) cell_ituss_key_pane

0xa91b,	// (0x00049f7b) bg_cell_ituss_key_g1_ParamLimits

0xa91b,	// (0x00049f7b) bg_cell_ituss_key_g1

0xa927,	// (0x00049f87) cell_ituss_key_pane_g1_ParamLimits

0xa927,	// (0x00049f87) cell_ituss_key_pane_g1

0xa941,	// (0x00049fa1) cell_ituss_key_pane_g2_ParamLimits

0xa941,	// (0x00049fa1) cell_ituss_key_pane_g2

0x0001,

0xfede,	// (0x0004f53e) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x0004f53e) cell_ituss_key_pane_g

0xa96c,	// (0x00049fcc) cell_ituss_key_t1_ParamLimits

0xa96c,	// (0x00049fcc) cell_ituss_key_t1

0xa99a,	// (0x00049ffa) cell_ituss_key_t2_ParamLimits

0xa99a,	// (0x00049ffa) cell_ituss_key_t2

0xa9cb,	// (0x0004a02b) cell_ituss_key_t3_ParamLimits

0xa9cb,	// (0x0004a02b) cell_ituss_key_t3

0xa9fc,	// (0x0004a05c) cell_ituss_key_t4_ParamLimits

0xa9fc,	// (0x0004a05c) cell_ituss_key_t4

0x0003,

0xfee3,	// (0x0004f543) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0004f543) cell_ituss_key_t

0xaa2d,	// (0x0004a08d) cell_vkbss_key_3p_pane_g1

0xaa35,	// (0x0004a095) cell_vkbss_key_3p_pane_g2

0xaa3d,	// (0x0004a09d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0004f54c) cell_vkbss_key_3p_pane_g

0x312e,	// (0x0004278e) bg_popup_fep_char_preview_window_cp02

0xaa45,	// (0x0004a0a5) popup_fep_char_pre_window_t1

0xf1bb,	// (0x0004e81b) main_ai5_sk_pane

0xa376,	// (0x000499d6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa382,	// (0x000499e2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa396,	// (0x000499f6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3a2,	// (0x00049a02) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec2,	// (0x0004f522) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3b5,	// (0x00049a15) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3a8e,	// (0x000430ee) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf532,	// (0x0004eb92) main_ai5_sk_pane_g1

0x5477,	// (0x00044ad7) popup_query_code_window_g1

0xa827,	// (0x00049e87) popup_fep_vkb_icf_pane

0xa83b,	// (0x00049e9b) popup_fep_vtchi_icf_pane

0x3a8e,	// (0x000430ee) bg_icf_pane

0xaa5d,	// (0x0004a0bd) list_vkb_icf_pane

0x3a8e,	// (0x000430ee) bg_icf_pane_cp01

0xaa69,	// (0x0004a0c9) vtchi_icf_list_pane

0xaa7a,	// (0x0004a0da) list_vkb_icf_pane_t1_ParamLimits

0xaa7a,	// (0x0004a0da) list_vkb_icf_pane_t1

0xaa91,	// (0x0004a0f1) vtchi_icf_list_pane_t1_ParamLimits

0xaa91,	// (0x0004a0f1) vtchi_icf_list_pane_t1

0xa811,	// (0x00049e71) popup_fep_ituss_window_ParamLimits

0xa83b,	// (0x00049e9b) popup_fep_vtchi_icf_pane_ParamLimits

0xa861,	// (0x00049ec1) ituss_keypad_pane_ParamLimits

0xa871,	// (0x00049ed1) ituss_sks_pane

0x3a8e,	// (0x000430ee) bg_icf_pane_ParamLimits

0xa7fa,	// (0x00049e5a) icf_edit_indi_pane_ParamLimits

0xa7fa,	// (0x00049e5a) icf_edit_indi_pane

0xaa5d,	// (0x0004a0bd) list_vkb_icf_pane_ParamLimits

0x3a8e,	// (0x000430ee) bg_icf_pane_cp01_ParamLimits

0xa7fa,	// (0x00049e5a) icf_edit_indi_pane_cp01_ParamLimits

0xa7fa,	// (0x00049e5a) icf_edit_indi_pane_cp01

0xaa71,	// (0x0004a0d1) vtchi_query_pane

0x78c5,	// (0x00046f25) icf_edit_indi_pane_g1_ParamLimits

0x78c5,	// (0x00046f25) icf_edit_indi_pane_g1

0xab17,	// (0x0004a177) icf_edit_indi_pane_g2_ParamLimits

0xab17,	// (0x0004a177) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0004f564) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0004f564) icf_edit_indi_pane_g

0xab26,	// (0x0004a186) icf_edit_indi_pane_t1

0xaaad,	// (0x0004a10d) bg_input_focus_pane_cp042

0x39bd,	// (0x0004301d) vtchi_button_pane

0xaab6,	// (0x0004a116) vtchi_query_pane_t1

0xaac4,	// (0x0004a124) vtchi_query_pane_t2

0xaad2,	// (0x0004a132) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0004f553) vtchi_query_pane_t

0x312e,	// (0x0004278e) bg_button_pane_cp13

0xaae0,	// (0x0004a140) vtchi_button_pane_g1

0xaae8,	// (0x0004a148) ituss_sks_pane_g1

0xaaf3,	// (0x0004a153) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0004f55a) ituss_sks_pane_g

0xaafb,	// (0x0004a15b) ituss_sks_pane_t1

0xab09,	// (0x0004a169) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0004f55f) ituss_sks_pane_t

0x70b0,	// (0x00046710) indicator_nsta_pane_cp_g1

0x70b9,	// (0x00046719) indicator_nsta_pane_cp_g2

0x70c1,	// (0x00046721) indicator_nsta_pane_cp_g3

0x70c9,	// (0x00046729) indicator_nsta_pane_cp_g4

0x70d1,	// (0x00046731) indicator_nsta_pane_cp_g5

0x70d9,	// (0x00046739) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0004f10c) indicator_nsta_pane_cp_g

0xefcd,	// (0x0004e62d) cell_graphic2_pane_t2_ParamLimits

0xefcd,	// (0x0004e62d) cell_graphic2_pane_t2

0x0001,

0xfdb9,	// (0x0004f419) cell_graphic2_pane_t_ParamLimits

0xfdb9,	// (0x0004f419) cell_graphic2_pane_t

0xf003,	// (0x0004e663) cell_graphic2_control_pane_t1

0xd33a,	// (0x0004c99a) signal_pane_g3_ParamLimits

0xd33a,	// (0x0004c99a) signal_pane_g3

0xd34e,	// (0x0004c9ae) signal_pane_g4_ParamLimits

0xd34e,	// (0x0004c9ae) signal_pane_g4

0xa7e4,	// (0x00049e44) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa7e4,	// (0x00049e44) cell_ai5_widget_list_row_pane_t3

0xa95a,	// (0x00049fba) cell_ituss_key_pane_t1_ParamLimits

0xa95a,	// (0x00049fba) cell_ituss_key_pane_t1

0x50ca,	// (0x0004472a) form_field_data_wide_pane_vc_t2_ParamLimits

0x50ca,	// (0x0004472a) form_field_data_wide_pane_vc_t2

0x50de,	// (0x0004473e) form_field_data_wide_pane_vc_t3_ParamLimits

0x50de,	// (0x0004473e) form_field_data_wide_pane_vc_t3

0x0002,

0xf808,	// (0x0004ee68) form_field_data_wide_pane_vc_t_ParamLimits

0xf808,	// (0x0004ee68) form_field_data_wide_pane_vc_t

0x6d67,	// (0x000463c7) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6d67,	// (0x000463c7) form_field_slider_wide_pane_vc_t3

0x6e45,	// (0x000464a5) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e45,	// (0x000464a5) form_field_popup_wide_pane_vc_t2

0x6e5c,	// (0x000464bc) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e5c,	// (0x000464bc) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0004f0fb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0004f0fb) form_field_popup_wide_pane_vc_t

0xce22,	// (0x0004c482) aid_fshwr2_btn_pane_ParamLimits

0xce31,	// (0x0004c491) aid_fshwr2_syb_pane_ParamLimits

0xce43,	// (0x0004c4a3) aid_fshwr2_txt_pane_ParamLimits

0x3a8e,	// (0x000430ee) fshwr2_bg_pane_ParamLimits

0xce52,	// (0x0004c4b2) fshwr2_func_candi_pane_ParamLimits

0xce63,	// (0x0004c4c3) fshwr2_hwr_syb_pane_ParamLimits

0xce7e,	// (0x0004c4de) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
