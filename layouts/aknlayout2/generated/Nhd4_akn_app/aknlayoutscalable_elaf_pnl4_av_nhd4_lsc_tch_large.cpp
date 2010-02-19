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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003589e };

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
0x91d1,	// (0x0003ea6f) Screen

0x91dd,	// (0x0003ea7b) application_window_ParamLimits

0x91dd,	// (0x0003ea7b) application_window

0xba6e,	// (0x0004130c) screen_g1

0x87d9,	// (0x0003e077) area_bottom_pane_ParamLimits

0x87d9,	// (0x0003e077) area_bottom_pane

0x15ae,	// (0x00036e4c) area_top_pane_ParamLimits

0x15ae,	// (0x00036e4c) area_top_pane

0x1642,	// (0x00036ee0) main_pane_ParamLimits

0x1642,	// (0x00036ee0) main_pane

0xba78,	// (0x00041316) misc_graphics

0x9fe8,	// (0x0003f886) battery_pane_ParamLimits

0x9fe8,	// (0x0003f886) battery_pane

0xd8f7,	// (0x00043195) bg_status_flat_pane_g8

0xd8ff,	// (0x0004319d) bg_status_flat_pane_g9

0xd01e,	// (0x000428bc) context_pane_ParamLimits

0xd01e,	// (0x000428bc) context_pane

0xa153,	// (0x0003f9f1) navi_pane_ParamLimits

0xa153,	// (0x0003f9f1) navi_pane

0xa1cb,	// (0x0003fa69) signal_pane_ParamLimits

0xa1cb,	// (0x0003fa69) signal_pane

0x0008,

0xf88a,	// (0x00045128) bg_status_flat_pane_g

0xa25b,	// (0x0003faf9) status_pane_g1_ParamLimits

0xa25b,	// (0x0003faf9) status_pane_g1

0xa271,	// (0x0003fb0f) status_pane_g2_ParamLimits

0xa271,	// (0x0003fb0f) status_pane_g2

0xd083,	// (0x00042921) status_pane_g3_ParamLimits

0xd083,	// (0x00042921) status_pane_g3

0x0004,

0xf7bd,	// (0x0004505b) status_pane_g_ParamLimits

0xf7bd,	// (0x0004505b) status_pane_g

0xa27d,	// (0x0003fb1b) title_pane_ParamLimits

0xa27d,	// (0x0003fb1b) title_pane

0xa2e0,	// (0x0003fb7e) uni_indicator_pane_ParamLimits

0xa2e0,	// (0x0003fb7e) uni_indicator_pane

0xce57,	// (0x000426f5) bg_list_pane_ParamLimits

0xce57,	// (0x000426f5) bg_list_pane

0x8583,	// (0x0003de21) find_pane

0x98cf,	// (0x0003f16d) listscroll_app_pane_ParamLimits

0x98cf,	// (0x0003f16d) listscroll_app_pane

0xce77,	// (0x00042715) listscroll_form_pane

0x858b,	// (0x0003de29) listscroll_gen_pane_ParamLimits

0x858b,	// (0x0003de29) listscroll_gen_pane

0xce77,	// (0x00042715) listscroll_set_pane

0xda16,	// (0x000432b4) main_idle_act_pane

0xcc33,	// (0x000424d1) main_idle_trad_pane

0xcc33,	// (0x000424d1) main_list_empty_pane

0xc355,	// (0x00041bf3) main_midp_pane

0xce91,	// (0x0004272f) main_pane_g1_ParamLimits

0xce91,	// (0x0004272f) main_pane_g1

0x98db,	// (0x0003f179) popup_ai_message_window_ParamLimits

0x98db,	// (0x0003f179) popup_ai_message_window

0x996c,	// (0x0003f20a) popup_fep_china_uni_window_ParamLimits

0x996c,	// (0x0003f20a) popup_fep_china_uni_window

0xcec3,	// (0x00042761) popup_fep_japan_candidate_window_ParamLimits

0xcec3,	// (0x00042761) popup_fep_japan_candidate_window

0xcee1,	// (0x0004277f) popup_fep_japan_predictive_window_ParamLimits

0xcee1,	// (0x0004277f) popup_fep_japan_predictive_window

0x99c6,	// (0x0003f264) popup_find_window

0x99e3,	// (0x0003f281) popup_grid_graphic_window_ParamLimits

0x99e3,	// (0x0003f281) popup_grid_graphic_window

0xcf11,	// (0x000427af) popup_large_graphic_colour_window

0x9a75,	// (0x0003f313) popup_menu_window_ParamLimits

0x9a75,	// (0x0003f313) popup_menu_window

0x9c41,	// (0x0003f4df) popup_note_image_window

0x9c07,	// (0x0003f4a5) popup_note_wait_window_ParamLimits

0x9c07,	// (0x0003f4a5) popup_note_wait_window

0x9c59,	// (0x0003f4f7) popup_note_window_ParamLimits

0x9c59,	// (0x0003f4f7) popup_note_window

0x9cff,	// (0x0003f59d) popup_query_code_window_ParamLimits

0x9cff,	// (0x0003f59d) popup_query_code_window

0xcf37,	// (0x000427d5) popup_query_data_code_window_ParamLimits

0xcf37,	// (0x000427d5) popup_query_data_code_window

0x9d39,	// (0x0003f5d7) popup_query_data_window_ParamLimits

0x9d39,	// (0x0003f5d7) popup_query_data_window

0x9daf,	// (0x0003f64d) popup_query_sat_info_window_ParamLimits

0x9daf,	// (0x0003f64d) popup_query_sat_info_window

0x9e46,	// (0x0003f6e4) popup_snote_single_graphic_window_ParamLimits

0x9e46,	// (0x0003f6e4) popup_snote_single_graphic_window

0x9e46,	// (0x0003f6e4) popup_snote_single_text_window_ParamLimits

0x9e46,	// (0x0003f6e4) popup_snote_single_text_window

0xcf4e,	// (0x000427ec) popup_sub_window_general

0xcf94,	// (0x00042832) popup_window_general_ParamLimits

0xcf94,	// (0x00042832) popup_window_general

0xcfa9,	// (0x00042847) power_save_pane

0x89d1,	// (0x0003e26f) control_pane_g1_ParamLimits

0x89d1,	// (0x0003e26f) control_pane_g1

0x89fa,	// (0x0003e298) control_pane_g2_ParamLimits

0x89fa,	// (0x0003e298) control_pane_g2

0xce39,	// (0x000426d7) control_pane_g3_ParamLimits

0xce39,	// (0x000426d7) control_pane_g3

0x0007,

0xf7a5,	// (0x00045043) control_pane_g_ParamLimits

0xf7a5,	// (0x00045043) control_pane_g

0x8a37,	// (0x0003e2d5) control_pane_t1_ParamLimits

0x8a37,	// (0x0003e2d5) control_pane_t1

0x8a95,	// (0x0003e333) control_pane_t2_ParamLimits

0x8a95,	// (0x0003e333) control_pane_t2

0x0002,

0xf7b6,	// (0x00045054) control_pane_t_ParamLimits

0xf7b6,	// (0x00045054) control_pane_t

0xcd5a,	// (0x000425f8) navi_navi_volume_pane_cp1

0xcd63,	// (0x00042601) status_small_icon_pane

0xcd6b,	// (0x00042609) status_small_pane_g1_ParamLimits

0xcd6b,	// (0x00042609) status_small_pane_g1

0xcd9f,	// (0x0004263d) status_small_pane_g2_ParamLimits

0xcd9f,	// (0x0004263d) status_small_pane_g2

0xcdab,	// (0x00042649) status_small_pane_g3_ParamLimits

0xcdab,	// (0x00042649) status_small_pane_g3

0xcdb7,	// (0x00042655) status_small_pane_g4_ParamLimits

0xcdb7,	// (0x00042655) status_small_pane_g4

0xcdc3,	// (0x00042661) status_small_pane_g5_ParamLimits

0xcdc3,	// (0x00042661) status_small_pane_g5

0xcdd2,	// (0x00042670) status_small_pane_g6_ParamLimits

0xcdd2,	// (0x00042670) status_small_pane_g6

0x0007,

0xf794,	// (0x00045032) status_small_pane_g_ParamLimits

0xf794,	// (0x00045032) status_small_pane_g

0xce02,	// (0x000426a0) status_small_pane_t1

0xce25,	// (0x000426c3) status_small_wait_pane_ParamLimits

0xce25,	// (0x000426c3) status_small_wait_pane

0x9736,	// (0x0003efd4) aid_levels_signal_ParamLimits

0x9736,	// (0x0003efd4) aid_levels_signal

0x974e,	// (0x0003efec) signal_pane_g1_ParamLimits

0x974e,	// (0x0003efec) signal_pane_g1

0x9769,	// (0x0003f007) signal_pane_g2_ParamLimits

0x9769,	// (0x0003f007) signal_pane_g2

0x0003,

0xf725,	// (0x00044fc3) signal_pane_g_ParamLimits

0xf725,	// (0x00044fc3) signal_pane_g

0xc777,	// (0x00042015) context_pane_g1

0x91ed,	// (0x0003ea8b) title_pane_g1

0x9224,	// (0x0003eac2) title_pane_t1

0xba8e,	// (0x0004132c) title_pane_t2

0xbab4,	// (0x00041352) title_pane_t3

0x0002,

0xf56f,	// (0x00044e0d) title_pane_t

0xa308,	// (0x0003fba6) aid_levels_battery_ParamLimits

0xa308,	// (0x0003fba6) aid_levels_battery

0xa324,	// (0x0003fbc2) battery_pane_g1_ParamLimits

0xa324,	// (0x0003fbc2) battery_pane_g1

0xa341,	// (0x0003fbdf) battery_pane_g2_ParamLimits

0xa341,	// (0x0003fbdf) battery_pane_g2

0x0001,

0xf7c8,	// (0x00045066) battery_pane_g_ParamLimits

0xf7c8,	// (0x00045066) battery_pane_g

0xa538,	// (0x0003fdd6) uni_indicator_pane_g1

0xa54d,	// (0x0003fdeb) uni_indicator_pane_g2

0xe16c,	// (0x00043a0a) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x000451d0) uni_indicator_pane_g

0xcaa3,	// (0x00042341) navi_icon_pane_ParamLimits

0xcaa3,	// (0x00042341) navi_icon_pane

0xc9ea,	// (0x00042288) navi_midp_pane

0xcabf,	// (0x0004235d) navi_navi_pane

0xcac9,	// (0x00042367) navi_text_pane_ParamLimits

0xcac9,	// (0x00042367) navi_text_pane

0xba6e,	// (0x0004130c) status_small_wait_pane_g1

0xbec4,	// (0x00041762) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x000451cb) status_small_wait_pane_g

0xdeb6,	// (0x00043754) navi_navi_icon_text_pane

0xdebe,	// (0x0004375c) navi_navi_pane_g1_ParamLimits

0xdebe,	// (0x0004375c) navi_navi_pane_g1

0xded0,	// (0x0004376e) navi_navi_pane_g2_ParamLimits

0xded0,	// (0x0004376e) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00045199) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00045199) navi_navi_pane_g

0xdee2,	// (0x00043780) navi_navi_tabs_pane

0xdeeb,	// (0x00043789) navi_navi_text_pane

0xdeb6,	// (0x00043754) navi_navi_volume_pane

0xde92,	// (0x00043730) navi_text_pane_t1

0xde86,	// (0x00043724) navi_icon_pane_g1

0xdde5,	// (0x00043683) navi_navi_text_pane_t1

0x8cf0,	// (0x0003e58e) navi_navi_volume_pane_g1

0x8cf8,	// (0x0003e596) volume_small_pane

0xa467,	// (0x0003fd05) navi_navi_icon_text_pane_g1

0xa46f,	// (0x0003fd0d) navi_navi_icon_text_pane_t1

0xcabf,	// (0x0004235d) navi_tabs_2_long_pane

0xcabf,	// (0x0004235d) navi_tabs_2_pane

0xcabf,	// (0x0004235d) navi_tabs_3_long_pane

0xcabf,	// (0x0004235d) navi_tabs_3_pane

0xcabf,	// (0x0004235d) navi_tabs_4_pane

0x8cd0,	// (0x0003e56e) tabs_2_active_pane_ParamLimits

0x8cd0,	// (0x0003e56e) tabs_2_active_pane

0x8ce0,	// (0x0003e57e) tabs_2_passive_pane_ParamLimits

0x8ce0,	// (0x0003e57e) tabs_2_passive_pane

0x8c9e,	// (0x0003e53c) tabs_3_active_pane_ParamLimits

0x8c9e,	// (0x0003e53c) tabs_3_active_pane

0x8cae,	// (0x0003e54c) tabs_3_passive_pane_ParamLimits

0x8cae,	// (0x0003e54c) tabs_3_passive_pane

0x8cbf,	// (0x0003e55d) tabs_3_passive_pane_cp_ParamLimits

0x8cbf,	// (0x0003e55d) tabs_3_passive_pane_cp

0x8c5a,	// (0x0003e4f8) tabs_4_active_pane_ParamLimits

0x8c5a,	// (0x0003e4f8) tabs_4_active_pane

0x8c6b,	// (0x0003e509) tabs_4_passive_pane_ParamLimits

0x8c6b,	// (0x0003e509) tabs_4_passive_pane

0x8c7c,	// (0x0003e51a) tabs_4_passive_pane_cp_ParamLimits

0x8c7c,	// (0x0003e51a) tabs_4_passive_pane_cp

0x8c8d,	// (0x0003e52b) tabs_4_passive_pane_cp2_ParamLimits

0x8c8d,	// (0x0003e52b) tabs_4_passive_pane_cp2

0x8c3a,	// (0x0003e4d8) tabs_2_long_active_pane_ParamLimits

0x8c3a,	// (0x0003e4d8) tabs_2_long_active_pane

0x8c4a,	// (0x0003e4e8) tabs_2_long_passive_pane_ParamLimits

0x8c4a,	// (0x0003e4e8) tabs_2_long_passive_pane

0x8c05,	// (0x0003e4a3) tabs_3_long_active_pane_ParamLimits

0x8c05,	// (0x0003e4a3) tabs_3_long_active_pane

0x8c16,	// (0x0003e4b4) tabs_3_long_passive_pane_ParamLimits

0x8c16,	// (0x0003e4b4) tabs_3_long_passive_pane

0x8c29,	// (0x0003e4c7) tabs_3_long_passive_pane_cp_ParamLimits

0x8c29,	// (0x0003e4c7) tabs_3_long_passive_pane_cp

0x26c4,	// (0x00037f62) volume_small_pane_g1

0x8bb4,	// (0x0003e452) volume_small_pane_g2

0x8bbd,	// (0x0003e45b) volume_small_pane_g3

0x8bc6,	// (0x0003e464) volume_small_pane_g4

0x8bcf,	// (0x0003e46d) volume_small_pane_g5

0x8bd8,	// (0x0003e476) volume_small_pane_g6

0x8be1,	// (0x0003e47f) volume_small_pane_g7

0x8bea,	// (0x0003e488) volume_small_pane_g8

0x8bf3,	// (0x0003e491) volume_small_pane_g9

0x8bfc,	// (0x0003e49a) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x00045165) volume_small_pane_g

0xbac6,	// (0x00041364) bg_active_tab_pane_cp2_ParamLimits

0xbac6,	// (0x00041364) bg_active_tab_pane_cp2

0x92b0,	// (0x0003eb4e) tabs_3_active_pane_g1

0x92b8,	// (0x0003eb56) tabs_3_active_pane_t1

0xbac6,	// (0x00041364) bg_passive_tab_pane_cp2_ParamLimits

0xbac6,	// (0x00041364) bg_passive_tab_pane_cp2

0x92b0,	// (0x0003eb4e) tabs_3_passive_pane_g1

0x92b8,	// (0x0003eb56) tabs_3_passive_pane_t1

0xbac6,	// (0x00041364) bg_active_tab_pane_cp3_ParamLimits

0xbac6,	// (0x00041364) bg_active_tab_pane_cp3

0x92ca,	// (0x0003eb68) tabs_4_active_pane_g1

0x92d2,	// (0x0003eb70) tabs_4_active_pane_t1

0xbac6,	// (0x00041364) bg_passive_tab_pane_cp3_ParamLimits

0xbac6,	// (0x00041364) bg_passive_tab_pane_cp3

0x92ca,	// (0x0003eb68) tabs_4_1_passive_pane_g1

0x92d2,	// (0x0003eb70) tabs_4_1_passive_pane_t1

0xc355,	// (0x00041bf3) list_highlight_pane_cp2

0xa5da,	// (0x0003fe78) list_set_pane_ParamLimits

0xa5da,	// (0x0003fe78) list_set_pane

0xa674,	// (0x0003ff12) main_pane_set_t1_ParamLimits

0xa674,	// (0x0003ff12) main_pane_set_t1

0xa694,	// (0x0003ff32) main_pane_set_t2_ParamLimits

0xa694,	// (0x0003ff32) main_pane_set_t2

0xa6a8,	// (0x0003ff46) main_pane_set_t3_ParamLimits

0xa6a8,	// (0x0003ff46) main_pane_set_t3

0xa6ba,	// (0x0003ff58) main_pane_set_t4_ParamLimits

0xa6ba,	// (0x0003ff58) main_pane_set_t4

0x0003,

0xf997,	// (0x00045235) main_pane_set_t_ParamLimits

0xf997,	// (0x00045235) main_pane_set_t

0xa6cc,	// (0x0003ff6a) setting_code_pane

0xa6d4,	// (0x0003ff72) setting_slider_graphic_pane

0xa6d4,	// (0x0003ff72) setting_slider_pane

0xa6d4,	// (0x0003ff72) setting_text_pane

0xa6d4,	// (0x0003ff72) setting_volume_pane

0x1939,	// (0x000371d7) volume_set_pane

0xbad4,	// (0x00041372) bg_set_opt_pane_cp

0x1941,	// (0x000371df) setting_slider_pane_t1

0x195a,	// (0x000371f8) setting_slider_pane_t2

0x1973,	// (0x00037211) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00044e14) setting_slider_pane_t

0x198a,	// (0x00037228) slider_set_pane

0xba78,	// (0x00041316) bg_set_opt_pane_cp2

0xbae2,	// (0x00041380) setting_slider_graphic_pane_g1

0x19a0,	// (0x0003723e) setting_slider_graphic_pane_t1

0x19af,	// (0x0003724d) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00044e1b) setting_slider_graphic_pane_t

0x19be,	// (0x0003725c) slider_set_pane_cp

0xba78,	// (0x00041316) input_focus_pane_cp1

0xe355,	// (0x00043bf3) list_set_text_pane

0xba6e,	// (0x0004130c) setting_text_pane_g1

0xba78,	// (0x00041316) input_focus_pane_cp2

0xba6e,	// (0x0004130c) setting_code_pane_g1

0xbaeb,	// (0x00041389) setting_code_pane_t1

0x061b,	// (0x00035eb9) set_text_pane_t1_ParamLimits

0x061b,	// (0x00035eb9) set_text_pane_t1

0xc265,	// (0x00041b03) set_opt_bg_pane_g1

0xc26d,	// (0x00041b0b) set_opt_bg_pane_g2

0xe335,	// (0x00043bd3) set_opt_bg_pane_g3

0xc27d,	// (0x00041b1b) set_opt_bg_pane_g4

0xc285,	// (0x00041b23) set_opt_bg_pane_g5

0xc28d,	// (0x00041b2b) set_opt_bg_pane_g6

0xe33d,	// (0x00043bdb) set_opt_bg_pane_g7

0xe345,	// (0x00043be3) set_opt_bg_pane_g8

0xe34d,	// (0x00043beb) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x00045222) set_opt_bg_pane_g

0xe328,	// (0x00043bc6) slider_set_pane_g1

0x2892,	// (0x00038130) slider_set_pane_g2

0x0006,

0xf975,	// (0x00045213) slider_set_pane_g

0x282e,	// (0x000380cc) volume_set_pane_g1

0x2836,	// (0x000380d4) volume_set_pane_g2

0x283e,	// (0x000380dc) volume_set_pane_g3

0x2846,	// (0x000380e4) volume_set_pane_g4

0x284e,	// (0x000380ec) volume_set_pane_g5

0x2856,	// (0x000380f4) volume_set_pane_g6

0x285e,	// (0x000380fc) volume_set_pane_g7

0x2866,	// (0x00038104) volume_set_pane_g8

0x286e,	// (0x0003810c) volume_set_pane_g9

0x2876,	// (0x00038114) volume_set_pane_g10

0x0009,

0xf94d,	// (0x000451eb) volume_set_pane_g

0x92e4,	// (0x0003eb82) indicator_pane_ParamLimits

0x92e4,	// (0x0003eb82) indicator_pane

0x930c,	// (0x0003ebaa) main_idle_pane_g2_ParamLimits

0x930c,	// (0x0003ebaa) main_idle_pane_g2

0x9344,	// (0x0003ebe2) main_pane_idle_g1_ParamLimits

0x9344,	// (0x0003ebe2) main_pane_idle_g1

0xbaf9,	// (0x00041397) popup_clock_digital_analogue_window_ParamLimits

0xbaf9,	// (0x00041397) popup_clock_digital_analogue_window

0x936b,	// (0x0003ec09) soft_indicator_pane_ParamLimits

0x936b,	// (0x0003ec09) soft_indicator_pane

0x9385,	// (0x0003ec23) wallpaper_pane_ParamLimits

0x9385,	// (0x0003ec23) wallpaper_pane

0xba6e,	// (0x0004130c) wallpaper_pane_g1

0x9397,	// (0x0003ec35) indicator_pane_g1_ParamLimits

0x9397,	// (0x0003ec35) indicator_pane_g1

0xe4ab,	// (0x00043d49) navi_navi_icon_text_pane_srt_g1

0xbb27,	// (0x000413c5) soft_indicator_pane_t1

0xbb41,	// (0x000413df) aid_ps_area_pane

0x93b0,	// (0x0003ec4e) aid_ps_clock_pane

0xbc1c,	// (0x000414ba) aid_ps_indicator_pane

0xbc28,	// (0x000414c6) indicator_ps_pane_ParamLimits

0xbc28,	// (0x000414c6) indicator_ps_pane

0xbc37,	// (0x000414d5) power_save_pane_g1_ParamLimits

0xbc37,	// (0x000414d5) power_save_pane_g1

0xbc43,	// (0x000414e1) power_save_pane_g2_ParamLimits

0xbc43,	// (0x000414e1) power_save_pane_g2

0x14a2,	// (0x00036d40) aid_navinavi_width_pane

0xbb41,	// (0x000413df) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00044e20) power_save_pane_g_ParamLimits

0xf582,	// (0x00044e20) power_save_pane_g

0xbc51,	// (0x000414ef) power_save_pane_t1_ParamLimits

0xbc51,	// (0x000414ef) power_save_pane_t1

0x93b0,	// (0x0003ec4e) aid_ps_clock_pane_ParamLimits

0xbc1c,	// (0x000414ba) aid_ps_indicator_pane_ParamLimits

0xbc63,	// (0x00041501) power_save_pane_t4_ParamLimits

0xbc63,	// (0x00041501) power_save_pane_t4

0x0001,

0xf587,	// (0x00044e25) power_save_pane_t_ParamLimits

0xf587,	// (0x00044e25) power_save_pane_t

0xbc8d,	// (0x0004152b) power_save_t3_ParamLimits

0xbc8d,	// (0x0004152b) power_save_t3

0xbc78,	// (0x00041516) power_save_t2_ParamLimits

0xbc78,	// (0x00041516) power_save_t2

0xbca2,	// (0x00041540) indicator_ps_pane_g1

0x93be,	// (0x0003ec5c) ai_gene_pane_ParamLimits

0x93be,	// (0x0003ec5c) ai_gene_pane

0x93d5,	// (0x0003ec73) ai_links_pane_ParamLimits

0x93d5,	// (0x0003ec73) ai_links_pane

0x93ed,	// (0x0003ec8b) indicator_pane_cp1_ParamLimits

0x93ed,	// (0x0003ec8b) indicator_pane_cp1

0x93fc,	// (0x0003ec9a) main_pane_idle_g1_cp_ParamLimits

0x93fc,	// (0x0003ec9a) main_pane_idle_g1_cp

0xbcab,	// (0x00041549) popup_ai_links_title_window

0x9414,	// (0x0003ecb2) soft_indicator_pane_cp1_ParamLimits

0x9414,	// (0x0003ecb2) soft_indicator_pane_cp1

0xe15a,	// (0x000439f8) ai_links_pane_g1

0xe163,	// (0x00043a01) grid_ai_links_pane

0xa52f,	// (0x0003fdcd) ai_gene_pane_1

0xe148,	// (0x000439e6) ai_gene_pane_2

0xe151,	// (0x000439ef) list_highlight_pane_cp4

0xa50b,	// (0x0003fda9) cell_ai_link_pane_ParamLimits

0xa50b,	// (0x0003fda9) cell_ai_link_pane

0xe140,	// (0x000439de) cell_ai_link_pane_g1

0xbec4,	// (0x00041762) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x000451c6) cell_ai_link_pane_g

0xba78,	// (0x00041316) grid_highlight_cp2

0xba78,	// (0x00041316) bg_popup_sub_pane_cp1

0xbcc2,	// (0x00041560) popup_ai_links_title_window_t1

0xe08e,	// (0x0004392c) ai_gene_pane_1_g1_ParamLimits

0xe08e,	// (0x0004392c) ai_gene_pane_1_g1

0xe09a,	// (0x00043938) ai_gene_pane_1_g2_ParamLimits

0xe09a,	// (0x00043938) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x000451bc) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x000451bc) ai_gene_pane_1_g

0xe0a7,	// (0x00043945) ai_gene_pane_1_t1_ParamLimits

0xe0a7,	// (0x00043945) ai_gene_pane_1_t1

0xe0db,	// (0x00043979) grid_ai_soft_ind_pane

0xe079,	// (0x00043917) ai_gene_pane_2_t1_ParamLimits

0xe079,	// (0x00043917) ai_gene_pane_2_t1

0x9428,	// (0x0003ecc6) main_pane_empty_t1_ParamLimits

0x9428,	// (0x0003ecc6) main_pane_empty_t1

0x9440,	// (0x0003ecde) main_pane_empty_t2_ParamLimits

0x9440,	// (0x0003ecde) main_pane_empty_t2

0x9455,	// (0x0003ecf3) main_pane_empty_t3_ParamLimits

0x9455,	// (0x0003ecf3) main_pane_empty_t3

0x9467,	// (0x0003ed05) main_pane_empty_t4_ParamLimits

0x9467,	// (0x0003ed05) main_pane_empty_t4

0x9479,	// (0x0003ed17) main_pane_empty_t5_ParamLimits

0x9479,	// (0x0003ed17) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00044e2a) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00044e2a) main_pane_empty_t

0xc2b6,	// (0x00041b54) bg_popup_window_pane_ParamLimits

0xc2b6,	// (0x00041b54) bg_popup_window_pane

0xddf3,	// (0x00043691) find_popup_pane_cp2_ParamLimits

0xddf3,	// (0x00043691) find_popup_pane_cp2

0xddff,	// (0x0004369d) heading_pane_ParamLimits

0xddff,	// (0x0004369d) heading_pane

0xba78,	// (0x00041316) bg_popup_sub_pane

0xa48c,	// (0x0003fd2a) bg_popup_window_pane_g1_ParamLimits

0xa48c,	// (0x0003fd2a) bg_popup_window_pane_g1

0xa49b,	// (0x0003fd39) bg_popup_window_pane_g2_ParamLimits

0xa49b,	// (0x0003fd39) bg_popup_window_pane_g2

0xa4a7,	// (0x0003fd45) bg_popup_window_pane_g3_ParamLimits

0xa4a7,	// (0x0003fd45) bg_popup_window_pane_g3

0xa4b3,	// (0x0003fd51) bg_popup_window_pane_g4_ParamLimits

0xa4b3,	// (0x0003fd51) bg_popup_window_pane_g4

0xa4c2,	// (0x0003fd60) bg_popup_window_pane_g5_ParamLimits

0xa4c2,	// (0x0003fd60) bg_popup_window_pane_g5

0xa4d2,	// (0x0003fd70) bg_popup_window_pane_g6_ParamLimits

0xa4d2,	// (0x0003fd70) bg_popup_window_pane_g6

0xa4de,	// (0x0003fd7c) bg_popup_window_pane_g7_ParamLimits

0xa4de,	// (0x0003fd7c) bg_popup_window_pane_g7

0xa4ed,	// (0x0003fd8b) bg_popup_window_pane_g8_ParamLimits

0xa4ed,	// (0x0003fd8b) bg_popup_window_pane_g8

0xa4fc,	// (0x0003fd9a) bg_popup_window_pane_g9_ParamLimits

0xa4fc,	// (0x0003fd9a) bg_popup_window_pane_g9

0xddd9,	// (0x00043677) bg_popup_window_pane_g10_ParamLimits

0xddd9,	// (0x00043677) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00045184) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00045184) bg_popup_window_pane_g

0xdd90,	// (0x0004362e) bg_popup_heading_pane_ParamLimits

0xdd90,	// (0x0004362e) bg_popup_heading_pane

0x29d0,	// (0x0003826e) tabs_4_passive_pane_cp_srt_ParamLimits

0x29d0,	// (0x0003826e) tabs_4_passive_pane_cp_srt

0x29e2,	// (0x00038280) tabs_4_passive_pane_srt_ParamLimits

0xdda4,	// (0x00043642) heading_pane_g2

0x29e2,	// (0x00038280) tabs_4_passive_pane_srt

0xd275,	// (0x00042b13) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd275,	// (0x00042b13) bg_passive_tab_pane_cp3_srt

0xddac,	// (0x0004364a) heading_pane_t1_ParamLimits

0xddac,	// (0x0004364a) heading_pane_t1

0xddc3,	// (0x00043661) heading_pane_t2_ParamLimits

0xddc3,	// (0x00043661) heading_pane_t2

0x0001,

0xf8e1,	// (0x0004517f) heading_pane_t_ParamLimits

0xf8e1,	// (0x0004517f) heading_pane_t

0xd8bf,	// (0x0004315d) bg_popup_heading_pane_g1

0xd950,	// (0x000431ee) bg_popup_heading_pane_g2

0xd95a,	// (0x000431f8) bg_popup_heading_pane_g3

0xd964,	// (0x00043202) bg_popup_heading_pane_g4

0xd96e,	// (0x0004320c) bg_popup_heading_pane_g5

0xd978,	// (0x00043216) bg_popup_heading_pane_g6

0xd980,	// (0x0004321e) bg_popup_heading_pane_g7

0xd988,	// (0x00043226) bg_popup_heading_pane_g8

0xd992,	// (0x00043230) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0004513b) bg_popup_heading_pane_g

0xd185,	// (0x00042a23) bg_popup_sub_pane_g1

0xd18d,	// (0x00042a2b) bg_popup_sub_pane_g2

0xd195,	// (0x00042a33) bg_popup_sub_pane_g3

0xd19d,	// (0x00042a3b) bg_popup_sub_pane_g4

0xd1a5,	// (0x00042a43) bg_popup_sub_pane_g5

0xd1ad,	// (0x00042a4b) bg_popup_sub_pane_g6

0xd1b5,	// (0x00042a53) bg_popup_sub_pane_g7

0xd1bd,	// (0x00042a5b) bg_popup_sub_pane_g8

0xd1c5,	// (0x00042a63) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x00045115) bg_popup_sub_pane_g

0xbac6,	// (0x00041364) bg_popup_window_pane_cp5_ParamLimits

0xbac6,	// (0x00041364) bg_popup_window_pane_cp5

0xbcdf,	// (0x0004157d) popup_note_window_g1_ParamLimits

0xbcdf,	// (0x0004157d) popup_note_window_g1

0xbceb,	// (0x00041589) popup_note_window_t1_ParamLimits

0xbceb,	// (0x00041589) popup_note_window_t1

0xbcfd,	// (0x0004159b) popup_note_window_t2_ParamLimits

0xbcfd,	// (0x0004159b) popup_note_window_t2

0xbd0f,	// (0x000415ad) popup_note_window_t3_ParamLimits

0xbd0f,	// (0x000415ad) popup_note_window_t3

0xbd21,	// (0x000415bf) popup_note_window_t4_ParamLimits

0xbd21,	// (0x000415bf) popup_note_window_t4

0xbd49,	// (0x000415e7) popup_note_window_t5_ParamLimits

0xbd49,	// (0x000415e7) popup_note_window_t5

0x0004,

0xf597,	// (0x00044e35) popup_note_window_t_ParamLimits

0xf597,	// (0x00044e35) popup_note_window_t

0xbdd8,	// (0x00041676) bg_popup_window_pane_cp6_ParamLimits

0xbdd8,	// (0x00041676) bg_popup_window_pane_cp6

0xd833,	// (0x000430d1) popup_note_image_window_g1_ParamLimits

0xd833,	// (0x000430d1) popup_note_image_window_g1

0xd83f,	// (0x000430dd) popup_note_image_window_g2_ParamLimits

0xd83f,	// (0x000430dd) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00045109) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00045109) popup_note_image_window_g

0xd858,	// (0x000430f6) popup_note_image_window_t1_ParamLimits

0xd858,	// (0x000430f6) popup_note_image_window_t1

0xd871,	// (0x0004310f) popup_note_image_window_t2_ParamLimits

0xd871,	// (0x0004310f) popup_note_image_window_t2

0xd88a,	// (0x00043128) popup_note_image_window_t3_ParamLimits

0xd88a,	// (0x00043128) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0004510e) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0004510e) popup_note_image_window_t

0xd710,	// (0x00042fae) bg_popup_window_pane_cp7_ParamLimits

0xd710,	// (0x00042fae) bg_popup_window_pane_cp7

0xd740,	// (0x00042fde) popup_note_wait_window_g1_ParamLimits

0xd740,	// (0x00042fde) popup_note_wait_window_g1

0xd74c,	// (0x00042fea) popup_note_wait_window_g2_ParamLimits

0xd74c,	// (0x00042fea) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x000450f7) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x000450f7) popup_note_wait_window_g

0xd764,	// (0x00043002) popup_note_wait_window_t1_ParamLimits

0xd764,	// (0x00043002) popup_note_wait_window_t1

0xd78b,	// (0x00043029) popup_note_wait_window_t2_ParamLimits

0xd78b,	// (0x00043029) popup_note_wait_window_t2

0xd7a8,	// (0x00043046) popup_note_wait_window_t3_ParamLimits

0xd7a8,	// (0x00043046) popup_note_wait_window_t3

0xd7bb,	// (0x00043059) popup_note_wait_window_t4_ParamLimits

0xd7bb,	// (0x00043059) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x000450fe) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x000450fe) popup_note_wait_window_t

0xd7e0,	// (0x0004307e) wait_bar_pane_ParamLimits

0xd7e0,	// (0x0004307e) wait_bar_pane

0xba78,	// (0x00041316) wait_anim_pane

0xba78,	// (0x00041316) wait_border_pane

0xba6e,	// (0x0004130c) wait_anim_pane_g1

0xba6e,	// (0x0004130c) wait_anim_pane_g2

0x0001,

0xf720,	// (0x00044fbe) wait_anim_pane_g

0xd6b4,	// (0x00042f52) wait_border_pane_g1

0xd6bf,	// (0x00042f5d) wait_border_pane_g2

0xd6c8,	// (0x00042f66) wait_border_pane_g3

0x0002,

0xf852,	// (0x000450f0) wait_border_pane_g

0xd524,	// (0x00042dc2) bg_popup_window_pane_cp16_ParamLimits

0xd524,	// (0x00042dc2) bg_popup_window_pane_cp16

0xd624,	// (0x00042ec2) indicator_popup_pane_cp4_ParamLimits

0xd624,	// (0x00042ec2) indicator_popup_pane_cp4

0xd638,	// (0x00042ed6) popup_query_data_window_t1_ParamLimits

0xd638,	// (0x00042ed6) popup_query_data_window_t1

0xd64a,	// (0x00042ee8) popup_query_data_window_t2_ParamLimits

0xd64a,	// (0x00042ee8) popup_query_data_window_t2

0xd663,	// (0x00042f01) popup_query_data_window_t3_ParamLimits

0xd663,	// (0x00042f01) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x000450e9) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x000450e9) popup_query_data_window_t

0xd67d,	// (0x00042f1b) query_popup_data_pane_ParamLimits

0xd67d,	// (0x00042f1b) query_popup_data_pane

0xd691,	// (0x00042f2f) query_popup_data_pane_cp1_ParamLimits

0xd691,	// (0x00042f2f) query_popup_data_pane_cp1

0xd524,	// (0x00042dc2) bg_popup_window_pane_cp10_ParamLimits

0xd524,	// (0x00042dc2) bg_popup_window_pane_cp10

0xd556,	// (0x00042df4) indicator_popup_pane_ParamLimits

0xd556,	// (0x00042df4) indicator_popup_pane

0xd578,	// (0x00042e16) popup_query_code_window_t1_ParamLimits

0xd578,	// (0x00042e16) popup_query_code_window_t1

0xd592,	// (0x00042e30) popup_query_code_window_t2_ParamLimits

0xd592,	// (0x00042e30) popup_query_code_window_t2

0xd5db,	// (0x00042e79) popup_query_code_window_t3_ParamLimits

0xd5db,	// (0x00042e79) popup_query_code_window_t3

0x0002,

0xf844,	// (0x000450e2) popup_query_code_window_t_ParamLimits

0xf844,	// (0x000450e2) popup_query_code_window_t

0xd60a,	// (0x00042ea8) query_popup_pane_ParamLimits

0xd60a,	// (0x00042ea8) query_popup_pane

0xbdd8,	// (0x00041676) bg_popup_window_pane_cp15_ParamLimits

0xbdd8,	// (0x00041676) bg_popup_window_pane_cp15

0xbdf6,	// (0x00041694) indicator_popup_pane_cp1_ParamLimits

0xbdf6,	// (0x00041694) indicator_popup_pane_cp1

0xbe09,	// (0x000416a7) indicator_popup_pane_cp2_ParamLimits

0xbe09,	// (0x000416a7) indicator_popup_pane_cp2

0xbe1c,	// (0x000416ba) popup_query_data_code_window_g1_ParamLimits

0xbe1c,	// (0x000416ba) popup_query_data_code_window_g1

0xbe2f,	// (0x000416cd) popup_query_data_code_window_t1_ParamLimits

0xbe2f,	// (0x000416cd) popup_query_data_code_window_t1

0xbe41,	// (0x000416df) popup_query_data_code_window_t2_ParamLimits

0xbe41,	// (0x000416df) popup_query_data_code_window_t2

0xbe53,	// (0x000416f1) popup_query_data_code_window_t3_ParamLimits

0xbe53,	// (0x000416f1) popup_query_data_code_window_t3

0xbe69,	// (0x00041707) popup_query_data_code_window_t4_ParamLimits

0xbe69,	// (0x00041707) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00044e40) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00044e40) popup_query_data_code_window_t

0xca5f,	// (0x000422fd) list_single_midp_graphic_pane_g3

0xbe81,	// (0x0004171f) query_popup_data_pane_cp2_ParamLimits

0xbe94,	// (0x00041732) query_popup_pane_cp2_ParamLimits

0xbe94,	// (0x00041732) query_popup_pane_cp2

0xba78,	// (0x00041316) bg_popup_window_pane_cp11

0xd51c,	// (0x00042dba) heading_pane_cp5

0xbf22,	// (0x000417c0) listscroll_popup_info_pane

0xba78,	// (0x00041316) input_focus_pane_cp3

0xbea7,	// (0x00041745) query_popup_pane_t1

0xbeb5,	// (0x00041753) list_popup_info_pane_ParamLimits

0xbeb5,	// (0x00041753) list_popup_info_pane

0xbec4,	// (0x00041762) listscroll_popup_info_pane_g1

0xbecc,	// (0x0004176a) scroll_pane_cp7

0xbed6,	// (0x00041774) popup_info_list_pane_t1_ParamLimits

0xbed6,	// (0x00041774) popup_info_list_pane_t1

0xbef0,	// (0x0004178e) popup_info_list_pane_t2_ParamLimits

0xbef0,	// (0x0004178e) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00044e49) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00044e49) popup_info_list_pane_t

0xba78,	// (0x00041316) bg_popup_window_pane_cp12

0xe4c5,	// (0x00043d63) find_popup_pane

0xbad4,	// (0x00041372) bg_popup_window_pane_cp3

0xbf0a,	// (0x000417a8) heading_pane_cp3

0xbf16,	// (0x000417b4) listscroll_popup_graphic_pane

0xba78,	// (0x00041316) bg_popup_window_pane_cp4

0x94db,	// (0x0003ed79) heading_pane_cp4

0xbf22,	// (0x000417c0) listscroll_popup_colour_pane

0x94e3,	// (0x0003ed81) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x94e3,	// (0x0003ed81) cell_large_graphic_colour_none_popup_pane

0x94f7,	// (0x0003ed95) grid_large_graphic_colour_popup_pane_ParamLimits

0x94f7,	// (0x0003ed95) grid_large_graphic_colour_popup_pane

0x951b,	// (0x0003edb9) listscroll_popup_colour_pane_g1_ParamLimits

0x951b,	// (0x0003edb9) listscroll_popup_colour_pane_g1

0x9532,	// (0x0003edd0) listscroll_popup_colour_pane_g2_ParamLimits

0x9532,	// (0x0003edd0) listscroll_popup_colour_pane_g2

0x9549,	// (0x0003ede7) listscroll_popup_colour_pane_g3_ParamLimits

0x9549,	// (0x0003ede7) listscroll_popup_colour_pane_g3

0x9559,	// (0x0003edf7) listscroll_popup_colour_pane_g4_ParamLimits

0x9559,	// (0x0003edf7) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00044e4e) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00044e4e) listscroll_popup_colour_pane_g

0xbf2a,	// (0x000417c8) scroll_pane_cp6_ParamLimits

0xbf2a,	// (0x000417c8) scroll_pane_cp6

0x9568,	// (0x0003ee06) cell_large_graphic_colour_popup_pane_ParamLimits

0x9568,	// (0x0003ee06) cell_large_graphic_colour_popup_pane

0xbf3c,	// (0x000417da) cell_large_graphic_colour_none_popup_pane_t1

0xba78,	// (0x00041316) grid_highlight_pane_cp5

0xbf4b,	// (0x000417e9) cell_large_graphic_colour_popup_pane_g1

0xbf53,	// (0x000417f1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00044e57) cell_large_graphic_colour_popup_pane_g

0xbf5b,	// (0x000417f9) cell_large_graphic_colour_popup_pane_g2_copy1

0xbf64,	// (0x00041802) grid_highlight_pane_cp4

0xbf6c,	// (0x0004180a) bg_popup_window_pane_cp8_ParamLimits

0xbf6c,	// (0x0004180a) bg_popup_window_pane_cp8

0xbf87,	// (0x00041825) popup_snote_single_text_window_g1_ParamLimits

0xbf87,	// (0x00041825) popup_snote_single_text_window_g1

0xbf99,	// (0x00041837) popup_snote_single_text_window_t1_ParamLimits

0xbf99,	// (0x00041837) popup_snote_single_text_window_t1

0xbfac,	// (0x0004184a) popup_snote_single_text_window_t2_ParamLimits

0xbfac,	// (0x0004184a) popup_snote_single_text_window_t2

0xbfbf,	// (0x0004185d) popup_snote_single_text_window_t3_ParamLimits

0xbfbf,	// (0x0004185d) popup_snote_single_text_window_t3

0xbff8,	// (0x00041896) popup_snote_single_text_window_t4_ParamLimits

0xbff8,	// (0x00041896) popup_snote_single_text_window_t4

0xc02c,	// (0x000418ca) popup_snote_single_text_window_t5_ParamLimits

0xc02c,	// (0x000418ca) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00044e5c) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00044e5c) popup_snote_single_text_window_t

0xc05b,	// (0x000418f9) bg_popup_window_pane_cp9_ParamLimits

0xc05b,	// (0x000418f9) bg_popup_window_pane_cp9

0xbf87,	// (0x00041825) popup_snote_single_graphic_window_g1_ParamLimits

0xbf87,	// (0x00041825) popup_snote_single_graphic_window_g1

0xc069,	// (0x00041907) popup_snote_single_graphic_window_g2_ParamLimits

0xc069,	// (0x00041907) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00044e67) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00044e67) popup_snote_single_graphic_window_g

0xc075,	// (0x00041913) popup_snote_single_graphic_window_t1_ParamLimits

0xc075,	// (0x00041913) popup_snote_single_graphic_window_t1

0xc088,	// (0x00041926) popup_snote_single_graphic_window_t2_ParamLimits

0xc088,	// (0x00041926) popup_snote_single_graphic_window_t2

0xc09b,	// (0x00041939) popup_snote_single_graphic_window_t3_ParamLimits

0xc09b,	// (0x00041939) popup_snote_single_graphic_window_t3

0xc0d4,	// (0x00041972) popup_snote_single_graphic_window_t4_ParamLimits

0xc0d4,	// (0x00041972) popup_snote_single_graphic_window_t4

0xc108,	// (0x000419a6) popup_snote_single_graphic_window_t5_ParamLimits

0xc108,	// (0x000419a6) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00044e6c) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00044e6c) popup_snote_single_graphic_window_t

0xe449,	// (0x00043ce7) grid_graphic_popup_pane_ParamLimits

0xe449,	// (0x00043ce7) grid_graphic_popup_pane

0xe475,	// (0x00043d13) listscroll_popup_graphic_pane_g1_ParamLimits

0xe475,	// (0x00043d13) listscroll_popup_graphic_pane_g1

0xa7c3,	// (0x00040061) listscroll_popup_graphic_pane_g2_ParamLimits

0xa7c3,	// (0x00040061) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0004525f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0004525f) listscroll_popup_graphic_pane_g

0xe28f,	// (0x00043b2d) scroll_pane_cp5

0xa786,	// (0x00040024) cell_graphic_popup_pane_ParamLimits

0xa786,	// (0x00040024) cell_graphic_popup_pane

0xe414,	// (0x00043cb2) cell_graphic_popup_pane_g1

0xe41c,	// (0x00043cba) cell_graphic_popup_pane_g2

0xbf5b,	// (0x000417f9) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x00045258) cell_graphic_popup_pane_g

0xe425,	// (0x00043cc3) cell_graphic_popup_pane_t2

0xbf64,	// (0x00041802) grid_highlight_pane_cp3

0xc149,	// (0x000419e7) list_gen_pane_ParamLimits

0xc149,	// (0x000419e7) list_gen_pane

0xc171,	// (0x00041a0f) scroll_pane

0xa741,	// (0x0003ffdf) bg_list_pane_g1_ParamLimits

0xa741,	// (0x0003ffdf) bg_list_pane_g1

0xe3c3,	// (0x00043c61) bg_list_pane_g2_ParamLimits

0xe3c3,	// (0x00043c61) bg_list_pane_g2

0xe3d6,	// (0x00043c74) bg_list_pane_g3_ParamLimits

0xe3d6,	// (0x00043c74) bg_list_pane_g3

0xe3e8,	// (0x00043c86) bg_list_pane_g4_ParamLimits

0xe3e8,	// (0x00043c86) bg_list_pane_g4

0xa75c,	// (0x0003fffa) bg_list_pane_g5_ParamLimits

0xa75c,	// (0x0003fffa) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0004524d) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0004524d) bg_list_pane_g

0xa707,	// (0x0003ffa5) list_double2_graphic_large_graphic_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double2_graphic_large_graphic_pane

0xa707,	// (0x0003ffa5) list_double2_graphic_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double2_graphic_pane

0xa707,	// (0x0003ffa5) list_double2_large_graphic_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double2_large_graphic_pane

0xa707,	// (0x0003ffa5) list_double2_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double2_pane

0xa707,	// (0x0003ffa5) list_double_graphic_heading_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double_graphic_heading_pane

0xa707,	// (0x0003ffa5) list_double_graphic_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double_graphic_pane

0xa707,	// (0x0003ffa5) list_double_heading_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double_heading_pane

0xa707,	// (0x0003ffa5) list_double_large_graphic_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double_large_graphic_pane

0xa707,	// (0x0003ffa5) list_double_number_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double_number_pane

0xa707,	// (0x0003ffa5) list_double_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double_pane

0xa707,	// (0x0003ffa5) list_double_time_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_double_time_pane

0xa707,	// (0x0003ffa5) list_setting_number_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_setting_number_pane

0xa707,	// (0x0003ffa5) list_setting_pane_ParamLimits

0xa707,	// (0x0003ffa5) list_setting_pane

0xa71a,	// (0x0003ffb8) list_single_2graphic_pane_ParamLimits

0xa71a,	// (0x0003ffb8) list_single_2graphic_pane

0xa71a,	// (0x0003ffb8) list_single_graphic_heading_pane_ParamLimits

0xa71a,	// (0x0003ffb8) list_single_graphic_heading_pane

0xa71a,	// (0x0003ffb8) list_single_graphic_pane_ParamLimits

0xa71a,	// (0x0003ffb8) list_single_graphic_pane

0xa71a,	// (0x0003ffb8) list_single_heading_pane_ParamLimits

0xa71a,	// (0x0003ffb8) list_single_heading_pane

0xa71a,	// (0x0003ffb8) list_single_large_graphic_pane_ParamLimits

0xa71a,	// (0x0003ffb8) list_single_large_graphic_pane

0xa71a,	// (0x0003ffb8) list_single_number_heading_pane_ParamLimits

0xa71a,	// (0x0003ffb8) list_single_number_heading_pane

0xa71a,	// (0x0003ffb8) list_single_number_pane_ParamLimits

0xa71a,	// (0x0003ffb8) list_single_number_pane

0xa71a,	// (0x0003ffb8) list_single_pane_ParamLimits

0xa71a,	// (0x0003ffb8) list_single_pane

0xba78,	// (0x00041316) list_highlight_pane_cp1

0x1c00,	// (0x0003749e) list_single_pane_g1_ParamLimits

0x1c00,	// (0x0003749e) list_single_pane_g1

0x1c0c,	// (0x000374aa) list_single_pane_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_single_pane_g2

0x0001,

0xf5ea,	// (0x00044e88) list_single_pane_g_ParamLimits

0xf5ea,	// (0x00044e88) list_single_pane_g

0x0f79,	// (0x00036817) list_single_pane_t1_ParamLimits

0x0f79,	// (0x00036817) list_single_pane_t1

0x1c00,	// (0x0003749e) list_single_number_pane_g1_ParamLimits

0x1c00,	// (0x0003749e) list_single_number_pane_g1

0x1c0c,	// (0x000374aa) list_single_number_pane_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x00044e88) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x00044e88) list_single_number_pane_g

0x0df8,	// (0x00036696) list_single_number_pane_t1_ParamLimits

0x0df8,	// (0x00036696) list_single_number_pane_t1

0x85b9,	// (0x0003de57) list_single_number_pane_t2_ParamLimits

0x85b9,	// (0x0003de57) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0004520e) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0004520e) list_single_number_pane_t

0x7ff3,	// (0x0003d891) list_single_graphic_pane_g1_ParamLimits

0x7ff3,	// (0x0003d891) list_single_graphic_pane_g1

0x1c00,	// (0x0003749e) list_single_graphic_pane_g2_ParamLimits

0x1c00,	// (0x0003749e) list_single_graphic_pane_g2

0x1c0c,	// (0x000374aa) list_single_graphic_pane_g3_ParamLimits

0x1c0c,	// (0x000374aa) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00044e77) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00044e77) list_single_graphic_pane_g

0x7fff,	// (0x0003d89d) list_single_graphic_pane_t1_ParamLimits

0x7fff,	// (0x0003d89d) list_single_graphic_pane_t1

0x8015,	// (0x0003d8b3) list_single_heading_pane_g1_ParamLimits

0x8015,	// (0x0003d8b3) list_single_heading_pane_g1

0x1c0c,	// (0x000374aa) list_single_heading_pane_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00044e7e) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00044e7e) list_single_heading_pane_g

0x8028,	// (0x0003d8c6) list_single_heading_pane_t1_ParamLimits

0x8028,	// (0x0003d8c6) list_single_heading_pane_t1

0x803e,	// (0x0003d8dc) list_single_heading_pane_t2_ParamLimits

0x803e,	// (0x0003d8dc) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x00044e83) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x00044e83) list_single_heading_pane_t

0x1c00,	// (0x0003749e) list_single_number_heading_pane_g1_ParamLimits

0x1c00,	// (0x0003749e) list_single_number_heading_pane_g1

0x1c0c,	// (0x000374aa) list_single_number_heading_pane_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x00044e88) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x00044e88) list_single_number_heading_pane_g

0x0f8f,	// (0x0003682d) list_single_number_heading_pane_t1_ParamLimits

0x0f8f,	// (0x0003682d) list_single_number_heading_pane_t1

0x8050,	// (0x0003d8ee) list_single_number_heading_pane_t2_ParamLimits

0x8050,	// (0x0003d8ee) list_single_number_heading_pane_t2

0x0f53,	// (0x000367f1) list_single_number_heading_pane_t3_ParamLimits

0x0f53,	// (0x000367f1) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x00044e8d) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x00044e8d) list_single_number_heading_pane_t

0x8062,	// (0x0003d900) list_single_graphic_heading_pane_g1_ParamLimits

0x8062,	// (0x0003d900) list_single_graphic_heading_pane_g1

0x8076,	// (0x0003d914) list_single_graphic_heading_pane_g4_ParamLimits

0x8076,	// (0x0003d914) list_single_graphic_heading_pane_g4

0x1c0c,	// (0x000374aa) list_single_graphic_heading_pane_g5_ParamLimits

0x1c0c,	// (0x000374aa) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x00044e94) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x00044e94) list_single_graphic_heading_pane_g

0x0f8f,	// (0x0003682d) list_single_graphic_heading_pane_t1_ParamLimits

0x0f8f,	// (0x0003682d) list_single_graphic_heading_pane_t1

0x8087,	// (0x0003d925) list_single_graphic_heading_pane_t2_ParamLimits

0x8087,	// (0x0003d925) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x00044e9b) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x00044e9b) list_single_graphic_heading_pane_t

0x2ac6,	// (0x00038364) list_single_large_graphic_pane_g1_ParamLimits

0x2ac6,	// (0x00038364) list_single_large_graphic_pane_g1

0x1c00,	// (0x0003749e) list_single_large_graphic_pane_g2_ParamLimits

0x1c00,	// (0x0003749e) list_single_large_graphic_pane_g2

0x1c0c,	// (0x000374aa) list_single_large_graphic_pane_g3_ParamLimits

0x1c0c,	// (0x000374aa) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x00044ea0) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x00044ea0) list_single_large_graphic_pane_g

0xd6bf,	// (0x00042f5d) wait_border_pane_g2_copy1

0x8952,	// (0x0003e1f0) list_single_large_graphic_pane_g4_cp2

0x0f8f,	// (0x0003682d) list_single_large_graphic_pane_t1_ParamLimits

0x0f8f,	// (0x0003682d) list_single_large_graphic_pane_t1

0x1c53,	// (0x000374f1) list_double_pane_g1_ParamLimits

0x1c53,	// (0x000374f1) list_double_pane_g1

0x1c5f,	// (0x000374fd) list_double_pane_g2_ParamLimits

0x1c5f,	// (0x000374fd) list_double_pane_g2

0x0001,

0xf609,	// (0x00044ea7) list_double_pane_g_ParamLimits

0xf609,	// (0x00044ea7) list_double_pane_g

0x809f,	// (0x0003d93d) list_double_pane_t1_ParamLimits

0x809f,	// (0x0003d93d) list_double_pane_t1

0x80b5,	// (0x0003d953) list_double_pane_t2_ParamLimits

0x80b5,	// (0x0003d953) list_double_pane_t2

0x0001,

0xf60e,	// (0x00044eac) list_double_pane_t_ParamLimits

0xf60e,	// (0x00044eac) list_double_pane_t

0x80c7,	// (0x0003d965) list_double2_pane_g1_ParamLimits

0x80c7,	// (0x0003d965) list_double2_pane_g1

0x099a,	// (0x00036238) list_double2_pane_g2_ParamLimits

0x099a,	// (0x00036238) list_double2_pane_g2

0x0001,

0xf613,	// (0x00044eb1) list_double2_pane_g_ParamLimits

0xf613,	// (0x00044eb1) list_double2_pane_g

0x80d8,	// (0x0003d976) list_double2_pane_t1_ParamLimits

0x80d8,	// (0x0003d976) list_double2_pane_t1

0x80ee,	// (0x0003d98c) list_double2_pane_t2_ParamLimits

0x80ee,	// (0x0003d98c) list_double2_pane_t2

0x0001,

0xf618,	// (0x00044eb6) list_double2_pane_t_ParamLimits

0xf618,	// (0x00044eb6) list_double2_pane_t

0x1c53,	// (0x000374f1) list_double_number_pane_g1_ParamLimits

0x1c53,	// (0x000374f1) list_double_number_pane_g1

0x1c5f,	// (0x000374fd) list_double_number_pane_g2_ParamLimits

0x1c5f,	// (0x000374fd) list_double_number_pane_g2

0x0001,

0xf609,	// (0x00044ea7) list_double_number_pane_g_ParamLimits

0xf609,	// (0x00044ea7) list_double_number_pane_g

0x8100,	// (0x0003d99e) list_double_number_pane_t1_ParamLimits

0x8100,	// (0x0003d99e) list_double_number_pane_t1

0x080d,	// (0x000360ab) list_double_number_pane_t2_ParamLimits

0x080d,	// (0x000360ab) list_double_number_pane_t2

0x8112,	// (0x0003d9b0) list_double_number_pane_t3_ParamLimits

0x8112,	// (0x0003d9b0) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x00044ebb) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x00044ebb) list_double_number_pane_t

0x0801,	// (0x0003609f) list_double_graphic_pane_g1_ParamLimits

0x0801,	// (0x0003609f) list_double_graphic_pane_g1

0x895a,	// (0x0003e1f8) list_double_graphic_pane_g2_ParamLimits

0x895a,	// (0x0003e1f8) list_double_graphic_pane_g2

0x8969,	// (0x0003e207) list_double_graphic_pane_g3_ParamLimits

0x8969,	// (0x0003e207) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x00044ec2) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x00044ec2) list_double_graphic_pane_g

0x8124,	// (0x0003d9c2) list_double_graphic_pane_t1_ParamLimits

0x8124,	// (0x0003d9c2) list_double_graphic_pane_t1

0x813a,	// (0x0003d9d8) list_double_graphic_pane_t2_ParamLimits

0x813a,	// (0x0003d9d8) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x00044ecb) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x00044ecb) list_double_graphic_pane_t

0x814c,	// (0x0003d9ea) list_double2_graphic_pane_g1_ParamLimits

0x814c,	// (0x0003d9ea) list_double2_graphic_pane_g1

0xc1a5,	// (0x00041a43) list_double2_graphic_pane_g2_ParamLimits

0xc1a5,	// (0x00041a43) list_double2_graphic_pane_g2

0x8981,	// (0x0003e21f) list_double2_graphic_pane_g3_ParamLimits

0x8981,	// (0x0003e21f) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x00044ed0) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x00044ed0) list_double2_graphic_pane_g

0x8158,	// (0x0003d9f6) list_double2_graphic_pane_t1_ParamLimits

0x8158,	// (0x0003d9f6) list_double2_graphic_pane_t1

0x816e,	// (0x0003da0c) list_double2_graphic_pane_t2_ParamLimits

0x816e,	// (0x0003da0c) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x00044ed7) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x00044ed7) list_double2_graphic_pane_t

0x8180,	// (0x0003da1e) list_double_large_graphic_pane_g1_ParamLimits

0x8180,	// (0x0003da1e) list_double_large_graphic_pane_g1

0x819f,	// (0x0003da3d) list_double_large_graphic_pane_g2_ParamLimits

0x819f,	// (0x0003da3d) list_double_large_graphic_pane_g2

0x1c5f,	// (0x000374fd) list_double_large_graphic_pane_g3_ParamLimits

0x1c5f,	// (0x000374fd) list_double_large_graphic_pane_g3

0x81b5,	// (0x0003da53) list_double_large_graphic_pane_g4_ParamLimits

0x81b5,	// (0x0003da53) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x00044edc) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x00044edc) list_double_large_graphic_pane_g

0x81c8,	// (0x0003da66) list_double_large_graphic_pane_t1_ParamLimits

0x81c8,	// (0x0003da66) list_double_large_graphic_pane_t1

0x81e1,	// (0x0003da7f) list_double_large_graphic_pane_t2_ParamLimits

0x81e1,	// (0x0003da7f) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x00044ee7) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x00044ee7) list_double_large_graphic_pane_t

0x898d,	// (0x0003e22b) list_double2_large_graphic_pane_g1_ParamLimits

0x898d,	// (0x0003e22b) list_double2_large_graphic_pane_g1

0x8999,	// (0x0003e237) list_double2_large_graphic_pane_g2_ParamLimits

0x8999,	// (0x0003e237) list_double2_large_graphic_pane_g2

0x8981,	// (0x0003e21f) list_double2_large_graphic_pane_g3_ParamLimits

0x8981,	// (0x0003e21f) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x00044eec) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x00044eec) list_double2_large_graphic_pane_g

0x81f3,	// (0x0003da91) list_double2_large_graphic_pane_t1_ParamLimits

0x81f3,	// (0x0003da91) list_double2_large_graphic_pane_t1

0x8209,	// (0x0003daa7) list_double2_large_graphic_pane_t2_ParamLimits

0x8209,	// (0x0003daa7) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x00044ef3) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x00044ef3) list_double2_large_graphic_pane_t

0x821b,	// (0x0003dab9) list_double_heading_pane_g1_ParamLimits

0x821b,	// (0x0003dab9) list_double_heading_pane_g1

0x822c,	// (0x0003daca) list_double_heading_pane_g2_ParamLimits

0x822c,	// (0x0003daca) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x00044ef8) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x00044ef8) list_double_heading_pane_g

0x8238,	// (0x0003dad6) list_double_heading_pane_t1_ParamLimits

0x8238,	// (0x0003dad6) list_double_heading_pane_t1

0x80ee,	// (0x0003d98c) list_double_heading_pane_t2_ParamLimits

0x80ee,	// (0x0003d98c) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x00044efd) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x00044efd) list_double_heading_pane_t

0x07c1,	// (0x0003605f) list_double_graphic_heading_pane_g1_ParamLimits

0x07c1,	// (0x0003605f) list_double_graphic_heading_pane_g1

0x821b,	// (0x0003dab9) list_double_graphic_heading_pane_g2_ParamLimits

0x821b,	// (0x0003dab9) list_double_graphic_heading_pane_g2

0x822c,	// (0x0003daca) list_double_graphic_heading_pane_g3_ParamLimits

0x822c,	// (0x0003daca) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x00044f02) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x00044f02) list_double_graphic_heading_pane_g

0x824e,	// (0x0003daec) list_double_graphic_heading_pane_t1_ParamLimits

0x824e,	// (0x0003daec) list_double_graphic_heading_pane_t1

0x816e,	// (0x0003da0c) list_double_graphic_heading_pane_t2_ParamLimits

0x816e,	// (0x0003da0c) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x00044f09) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x00044f09) list_double_graphic_heading_pane_t

0x8264,	// (0x0003db02) list_double_time_pane_g1_ParamLimits

0x8264,	// (0x0003db02) list_double_time_pane_g1

0x0753,	// (0x00035ff1) list_double_time_pane_g2_ParamLimits

0x0753,	// (0x00035ff1) list_double_time_pane_g2

0x0001,

0xf670,	// (0x00044f0e) list_double_time_pane_g_ParamLimits

0xf670,	// (0x00044f0e) list_double_time_pane_g

0x8275,	// (0x0003db13) list_double_time_pane_t1_ParamLimits

0x8275,	// (0x0003db13) list_double_time_pane_t1

0x828b,	// (0x0003db29) list_double_time_pane_t2_ParamLimits

0x828b,	// (0x0003db29) list_double_time_pane_t2

0x829d,	// (0x0003db3b) list_double_time_pane_t3_ParamLimits

0x829d,	// (0x0003db3b) list_double_time_pane_t3

0x82af,	// (0x0003db4d) list_double_time_pane_t4_ParamLimits

0x82af,	// (0x0003db4d) list_double_time_pane_t4

0x0003,

0xf675,	// (0x00044f13) list_double_time_pane_t_ParamLimits

0xf675,	// (0x00044f13) list_double_time_pane_t

0x098e,	// (0x0003622c) list_setting_pane_g1_ParamLimits

0x098e,	// (0x0003622c) list_setting_pane_g1

0x099a,	// (0x00036238) list_setting_pane_g2_ParamLimits

0x099a,	// (0x00036238) list_setting_pane_g2

0x0001,

0xf67e,	// (0x00044f1c) list_setting_pane_g_ParamLimits

0xf67e,	// (0x00044f1c) list_setting_pane_g

0x82c1,	// (0x0003db5f) list_setting_pane_t1_ParamLimits

0x82c1,	// (0x0003db5f) list_setting_pane_t1

0x82db,	// (0x0003db79) list_setting_pane_t2_ParamLimits

0x82db,	// (0x0003db79) list_setting_pane_t2

0x0002,

0xf683,	// (0x00044f21) list_setting_pane_t_ParamLimits

0xf683,	// (0x00044f21) list_setting_pane_t

0x8318,	// (0x0003dbb6) set_value_pane_cp_ParamLimits

0x8318,	// (0x0003dbb6) set_value_pane_cp

0x0a09,	// (0x000362a7) list_setting_number_pane_g1_ParamLimits

0x0a09,	// (0x000362a7) list_setting_number_pane_g1

0x0a15,	// (0x000362b3) list_setting_number_pane_g2_ParamLimits

0x0a15,	// (0x000362b3) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x00044f28) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x00044f28) list_setting_number_pane_g

0x8324,	// (0x0003dbc2) list_setting_number_pane_t1_ParamLimits

0x8324,	// (0x0003dbc2) list_setting_number_pane_t1

0x833d,	// (0x0003dbdb) list_setting_number_pane_t2_ParamLimits

0x833d,	// (0x0003dbdb) list_setting_number_pane_t2

0x8357,	// (0x0003dbf5) list_setting_number_pane_t3_ParamLimits

0x8357,	// (0x0003dbf5) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x00044f2d) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x00044f2d) list_setting_number_pane_t

0x8318,	// (0x0003dbb6) set_value_pane_ParamLimits

0x8318,	// (0x0003dbb6) set_value_pane

0xc1b1,	// (0x00041a4f) bg_set_opt_pane_ParamLimits

0xc1b1,	// (0x00041a4f) bg_set_opt_pane

0x0a97,	// (0x00036335) set_value_pane_t1

0xc1d2,	// (0x00041a70) slider_set_pane_cp3

0xc1db,	// (0x00041a79) volume_small_pane_cp

0xc1e4,	// (0x00041a82) list_form_gen_pane

0xc1ed,	// (0x00041a8b) scroll_pane_cp8

0x839a,	// (0x0003dc38) form_field_data_pane_ParamLimits

0x839a,	// (0x0003dc38) form_field_data_pane

0x83b1,	// (0x0003dc4f) form_field_data_wide_pane_ParamLimits

0x83b1,	// (0x0003dc4f) form_field_data_wide_pane

0x83d1,	// (0x0003dc6f) form_field_popup_pane_ParamLimits

0x83d1,	// (0x0003dc6f) form_field_popup_pane

0x83e9,	// (0x0003dc87) form_field_popup_wide_pane_ParamLimits

0x83e9,	// (0x0003dc87) form_field_popup_wide_pane

0x0b29,	// (0x000363c7) form_field_slider_pane_ParamLimits

0x0b29,	// (0x000363c7) form_field_slider_pane

0x0b3c,	// (0x000363da) form_field_slider_wide_pane_ParamLimits

0x0b3c,	// (0x000363da) form_field_slider_wide_pane

0xc1fe,	// (0x00041a9c) data_form_pane

0x8410,	// (0x0003dcae) form_field_data_pane_t1

0xc20a,	// (0x00041aa8) input_focus_pane

0xc218,	// (0x00041ab6) data_form_wide_pane

0x0b7f,	// (0x0003641d) form_field_data_wide_pane_t1

0xbf79,	// (0x00041817) input_focus_pane_cp6

0x842a,	// (0x0003dcc8) form_field_popup_pane_t1

0xc20a,	// (0x00041aa8) input_focus_pane_cp7

0xc238,	// (0x00041ad6) list_form_pane

0x0bc3,	// (0x00036461) form_field_popup_wide_pane_t1

0xc20a,	// (0x00041aa8) input_focus_pane_cp8

0xc244,	// (0x00041ae2) list_form_wide_pane

0x844c,	// (0x0003dcea) form_field_slider_pane_t1_ParamLimits

0x844c,	// (0x0003dcea) form_field_slider_pane_t1

0x8464,	// (0x0003dd02) form_field_slider_pane_t2_ParamLimits

0x8464,	// (0x0003dd02) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x00044f3d) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x00044f3d) form_field_slider_pane_t

0xbac6,	// (0x00041364) input_focus_pane_cp9_ParamLimits

0xbac6,	// (0x00041364) input_focus_pane_cp9

0x8479,	// (0x0003dd17) slider_cont_pane_ParamLimits

0x8479,	// (0x0003dd17) slider_cont_pane

0xc253,	// (0x00041af1) form_field_slider_wide_pane_t1_ParamLimits

0xc253,	// (0x00041af1) form_field_slider_wide_pane_t1

0x0c21,	// (0x000364bf) form_field_slider_wide_pane_t2_ParamLimits

0x0c21,	// (0x000364bf) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x00044f42) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x00044f42) form_field_slider_wide_pane_t

0xbac6,	// (0x00041364) input_focus_pane_cp10_ParamLimits

0xbac6,	// (0x00041364) input_focus_pane_cp10

0x848d,	// (0x0003dd2b) slider_cont_pane_cp1_ParamLimits

0x848d,	// (0x0003dd2b) slider_cont_pane_cp1

0x84a1,	// (0x0003dd3f) slider_form_pane_cp

0xc265,	// (0x00041b03) input_focus_pane_g1

0xc26d,	// (0x00041b0b) input_focus_pane_g2

0xc275,	// (0x00041b13) input_focus_pane_g3

0xc27d,	// (0x00041b1b) input_focus_pane_g4

0xc285,	// (0x00041b23) input_focus_pane_g5

0xc28d,	// (0x00041b2b) input_focus_pane_g6

0xc295,	// (0x00041b33) input_focus_pane_g7

0xc29d,	// (0x00041b3b) input_focus_pane_g8

0xc2a5,	// (0x00041b43) input_focus_pane_g9

0xba6e,	// (0x0004130c) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x00044f47) input_focus_pane_g

0xd6c8,	// (0x00042f66) wait_border_pane_g3_copy1

0x84a9,	// (0x0003dd47) data_form_pane_t1

0xba6e,	// (0x0004130c) wait_anim_pane_g1_copy1

0x85cb,	// (0x0003de69) data_form_wide_pane_t1

0x84c3,	// (0x0003dd61) list_form_graphic_pane_cp_ParamLimits

0x84c3,	// (0x0003dd61) list_form_graphic_pane_cp

0xe35d,	// (0x00043bfb) slider_form_pane_g1

0xe366,	// (0x00043c04) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0004523e) slider_form_pane_g

0x84c3,	// (0x0003dd61) list_form_graphic_pane_ParamLimits

0x84c3,	// (0x0003dd61) list_form_graphic_pane

0x0c9b,	// (0x00036539) list_form_graphic_pane_g1

0x0ca3,	// (0x00036541) list_form_graphic_pane_t1_ParamLimits

0x0ca3,	// (0x00036541) list_form_graphic_pane_t1

0xbad4,	// (0x00041372) list_highlight_pane_cp5_ParamLimits

0xbad4,	// (0x00041372) list_highlight_pane_cp5

0x84d6,	// (0x0003dd74) find_pane_g1

0xc2ad,	// (0x00041b4b) input_find_pane

0x84df,	// (0x0003dd7d) input_find_pane_g1_ParamLimits

0x84df,	// (0x0003dd7d) input_find_pane_g1

0x84eb,	// (0x0003dd89) input_find_pane_t1_ParamLimits

0x84eb,	// (0x0003dd89) input_find_pane_t1

0x8500,	// (0x0003dd9e) input_find_pane_t2_ParamLimits

0x8500,	// (0x0003dd9e) input_find_pane_t2

0x0001,

0xf6be,	// (0x00044f5c) input_find_pane_t_ParamLimits

0xf6be,	// (0x00044f5c) input_find_pane_t

0xc2b6,	// (0x00041b54) input_focus_pane_cp5_ParamLimits

0xc2b6,	// (0x00041b54) input_focus_pane_cp5

0x959d,	// (0x0003ee3b) bg_popup_window_pane_cp2_ParamLimits

0x959d,	// (0x0003ee3b) bg_popup_window_pane_cp2

0x95c4,	// (0x0003ee62) listscroll_menu_pane_ParamLimits

0x95c4,	// (0x0003ee62) listscroll_menu_pane

0x95d0,	// (0x0003ee6e) popup_submenu_window_ParamLimits

0x95d0,	// (0x0003ee6e) popup_submenu_window

0xc2c4,	// (0x00041b62) find_popup_pane_g1

0xc2cc,	// (0x00041b6a) input_popup_find_pane_cp

0xc2b6,	// (0x00041b54) input_focus_pane_cp4_ParamLimits

0xc2b6,	// (0x00041b54) input_focus_pane_cp4

0xc2d6,	// (0x00041b74) input_popup_find_pane_t1_ParamLimits

0xc2d6,	// (0x00041b74) input_popup_find_pane_t1

0xba78,	// (0x00041316) bg_popup_sub_pane_cp

0xc304,	// (0x00041ba2) listscroll_popup_sub_pane

0xc30c,	// (0x00041baa) list_submenu_pane_ParamLimits

0xc30c,	// (0x00041baa) list_submenu_pane

0xc31d,	// (0x00041bbb) scroll_pane_cp4

0xc325,	// (0x00041bc3) list_single_popup_submenu_pane_ParamLimits

0xc325,	// (0x00041bc3) list_single_popup_submenu_pane

0xc338,	// (0x00041bd6) list_single_popup_submenu_pane_g1

0xc340,	// (0x00041bde) list_single_popup_submenu_pane_t1_ParamLimits

0xc340,	// (0x00041bde) list_single_popup_submenu_pane_t1

0xbac6,	// (0x00041364) bg_active_tab_pane_cp1_ParamLimits

0xbac6,	// (0x00041364) bg_active_tab_pane_cp1

0x9606,	// (0x0003eea4) tabs_2_active_pane_g1

0x960e,	// (0x0003eeac) tabs_2_active_pane_t1

0xbac6,	// (0x00041364) bg_passive_tab_pane_cp1_ParamLimits

0xbac6,	// (0x00041364) bg_passive_tab_pane_cp1

0x9606,	// (0x0003eea4) tabs_2_passive_pane_g1

0x960e,	// (0x0003eeac) tabs_2_passive_pane_t1

0xbad4,	// (0x00041372) bg_active_tab_pane_cp4

0x9620,	// (0x0003eebe) tabs_2_long_active_pane_t1

0xc355,	// (0x00041bf3) bg_passive_tab_pane_cp4

0x25eb,	// (0x00037e89) list_single_midp_graphic_pane_g4_ParamLimits

0xbad4,	// (0x00041372) bg_active_tab_pane_cp5

0x9633,	// (0x0003eed1) tabs_3_long_active_pane_t1

0xc355,	// (0x00041bf3) bg_passive_tab_pane_cp5

0x25eb,	// (0x00037e89) list_single_midp_graphic_pane_g4

0xbad4,	// (0x00041372) bg_popup_window_pane_cp13_ParamLimits

0xbad4,	// (0x00041372) bg_popup_window_pane_cp13

0xc36a,	// (0x00041c08) listscroll_popup_fast_pane_ParamLimits

0xc36a,	// (0x00041c08) listscroll_popup_fast_pane

0xc379,	// (0x00041c17) grid_popup_fast_pane_ParamLimits

0xc379,	// (0x00041c17) grid_popup_fast_pane

0xc38b,	// (0x00041c29) scroll_pane_cp9_ParamLimits

0xc38b,	// (0x00041c29) scroll_pane_cp9

0x49a7,	// (0x0003a245) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x49a7,	// (0x0003a245) list_single_graphic_hl_pane_t1_cp2

0xc3af,	// (0x00041c4d) input_focus_pane_cp20_ParamLimits

0xc3af,	// (0x00041c4d) input_focus_pane_cp20

0xc3bd,	// (0x00041c5b) query_popup_data_pane_t1_ParamLimits

0xc3bd,	// (0x00041c5b) query_popup_data_pane_t1

0xc3d0,	// (0x00041c6e) query_popup_data_pane_t2_ParamLimits

0xc3d0,	// (0x00041c6e) query_popup_data_pane_t2

0xc416,	// (0x00041cb4) query_popup_data_pane_t3_ParamLimits

0xc416,	// (0x00041cb4) query_popup_data_pane_t3

0xc457,	// (0x00041cf5) query_popup_data_pane_t4_ParamLimits

0xc457,	// (0x00041cf5) query_popup_data_pane_t4

0xc493,	// (0x00041d31) query_popup_data_pane_t5_ParamLimits

0xc493,	// (0x00041d31) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x00044f61) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x00044f61) query_popup_data_pane_t

0xc265,	// (0x00041b03) bg_set_opt_pane_g1

0xc26d,	// (0x00041b0b) bg_set_opt_pane_g2

0xc275,	// (0x00041b13) bg_set_opt_pane_g3

0xc27d,	// (0x00041b1b) bg_set_opt_pane_g4

0xc285,	// (0x00041b23) bg_set_opt_pane_g5

0xc28d,	// (0x00041b2b) bg_set_opt_pane_g6

0xc295,	// (0x00041b33) bg_set_opt_pane_g7

0xc29d,	// (0x00041b3b) bg_set_opt_pane_g8

0xc2a5,	// (0x00041b43) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x00044f6c) bg_set_opt_pane_g

0x217b,	// (0x00037a19) control_top_pane_stacon_ParamLimits

0x217b,	// (0x00037a19) control_top_pane_stacon

0x21ce,	// (0x00037a6c) signal_pane_stacon_ParamLimits

0x21ce,	// (0x00037a6c) signal_pane_stacon

0xc8e5,	// (0x00042183) stacon_top_pane_g1_ParamLimits

0xc8e5,	// (0x00042183) stacon_top_pane_g1

0x21f3,	// (0x00037a91) title_pane_stacon_ParamLimits

0x21f3,	// (0x00037a91) title_pane_stacon

0x221d,	// (0x00037abb) uni_indicator_pane_stacon_ParamLimits

0x221d,	// (0x00037abb) uni_indicator_pane_stacon

0x2232,	// (0x00037ad0) battery_pane_stacon_ParamLimits

0x2232,	// (0x00037ad0) battery_pane_stacon

0x2276,	// (0x00037b14) control_bottom_pane_stacon_ParamLimits

0x2276,	// (0x00037b14) control_bottom_pane_stacon

0x2299,	// (0x00037b37) navi_pane_stacon_ParamLimits

0x2299,	// (0x00037b37) navi_pane_stacon

0xc907,	// (0x000421a5) stacon_bottom_pane_g1_ParamLimits

0xc907,	// (0x000421a5) stacon_bottom_pane_g1

0x1d4f,	// (0x000375ed) aid_levels_signal_lsc_ParamLimits

0x1d4f,	// (0x000375ed) aid_levels_signal_lsc

0x1d66,	// (0x00037604) signal_pane_stacon_g1_ParamLimits

0x1d66,	// (0x00037604) signal_pane_stacon_g1

0x1d7a,	// (0x00037618) signal_pane_stacon_g2_ParamLimits

0x1d7a,	// (0x00037618) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x00044f7f) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x00044f7f) signal_pane_stacon_g

0x1daf,	// (0x0003764d) title_pane_stacon_t1_ParamLimits

0x1daf,	// (0x0003764d) title_pane_stacon_t1

0xc4e1,	// (0x00041d7f) uni_indicator_pane_stacon_g1

0xc4eb,	// (0x00041d89) uni_indicator_pane_stacon_g2

0xc4d7,	// (0x00041d75) uni_indicator_pane_stacon_g3

0xc4f5,	// (0x00041d93) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x00044f8b) uni_indicator_pane_stacon_g

0x1dd4,	// (0x00037672) control_top_pane_stacon_g1

0x1ddc,	// (0x0003767a) control_top_pane_stacon_t1_ParamLimits

0x1ddc,	// (0x0003767a) control_top_pane_stacon_t1

0x1e13,	// (0x000376b1) aid_levels_battery_lsc_ParamLimits

0x1e13,	// (0x000376b1) aid_levels_battery_lsc

0x1e2b,	// (0x000376c9) battery_pane_stacon_g1_ParamLimits

0x1e2b,	// (0x000376c9) battery_pane_stacon_g1

0x1e3e,	// (0x000376dc) battery_pane_stacon_g2_ParamLimits

0x1e3e,	// (0x000376dc) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x00044f94) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x00044f94) battery_pane_stacon_g

0x1e7c,	// (0x0003771a) navi_icon_pane_stacon

0x1e90,	// (0x0003772e) navi_navi_pane_stacon

0x1e7c,	// (0x0003771a) navi_text_pane_stacon

0x1dd4,	// (0x00037672) control_bottom_pane_stacon_g1

0x1ea4,	// (0x00037742) control_bottom_pane_stacon_t1_ParamLimits

0x1ea4,	// (0x00037742) control_bottom_pane_stacon_t1

0x9645,	// (0x0003eee3) grid_app_pane_ParamLimits

0x9645,	// (0x0003eee3) grid_app_pane

0x967b,	// (0x0003ef19) scroll_pane_cp15_ParamLimits

0x967b,	// (0x0003ef19) scroll_pane_cp15

0x9694,	// (0x0003ef32) cell_app_pane_ParamLimits

0x9694,	// (0x0003ef32) cell_app_pane

0x96db,	// (0x0003ef79) cell_app_pane_g1_ParamLimits

0x96db,	// (0x0003ef79) cell_app_pane_g1

0xc519,	// (0x00041db7) cell_app_pane_g2_ParamLimits

0xc519,	// (0x00041db7) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x00044f99) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x00044f99) cell_app_pane_g

0x96fb,	// (0x0003ef99) cell_app_pane_t1_ParamLimits

0x96fb,	// (0x0003ef99) cell_app_pane_t1

0xc525,	// (0x00041dc3) grid_highlight_pane_ParamLimits

0xc525,	// (0x00041dc3) grid_highlight_pane

0xc265,	// (0x00041b03) cell_highlight_pane_g1

0xc26d,	// (0x00041b0b) cell_highlight_pane_g2

0xc275,	// (0x00041b13) cell_highlight_pane_g3

0xc27d,	// (0x00041b1b) cell_highlight_pane_g4

0xc285,	// (0x00041b23) cell_highlight_pane_g5

0xc28d,	// (0x00041b2b) cell_highlight_pane_g6

0xc295,	// (0x00041b33) cell_highlight_pane_g7

0xc29d,	// (0x00041b3b) cell_highlight_pane_g8

0xc2a5,	// (0x00041b43) cell_highlight_pane_g9

0xba6e,	// (0x0004130c) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x00044f47) cell_highlight_pane_g

0xc536,	// (0x00041dd4) bg_scroll_pane

0x1f86,	// (0x00037824) scroll_handle_pane

0xc57d,	// (0x00041e1b) scroll_bg_pane_g1

0xc592,	// (0x00041e30) scroll_bg_pane_g2

0xc5aa,	// (0x00041e48) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x00044f9e) scroll_bg_pane_g

0xc5bf,	// (0x00041e5d) scroll_handle_focus_pane_ParamLimits

0xc5bf,	// (0x00041e5d) scroll_handle_focus_pane

0xc57d,	// (0x00041e1b) scroll_handle_pane_g1

0xc5cc,	// (0x00041e6a) scroll_handle_pane_g2

0xc5aa,	// (0x00041e48) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x00044fa5) scroll_handle_pane_g

0xc2b6,	// (0x00041b54) bg_popup_sub_pane_cp21_ParamLimits

0xc2b6,	// (0x00041b54) bg_popup_sub_pane_cp21

0xc5e0,	// (0x00041e7e) popup_fep_japan_predictive_window_t1_ParamLimits

0xc5e0,	// (0x00041e7e) popup_fep_japan_predictive_window_t1

0xc5f7,	// (0x00041e95) popup_fep_japan_predictive_window_t2_ParamLimits

0xc5f7,	// (0x00041e95) popup_fep_japan_predictive_window_t2

0xc62a,	// (0x00041ec8) popup_fep_japan_predictive_window_t3_ParamLimits

0xc62a,	// (0x00041ec8) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x00044fac) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x00044fac) popup_fep_japan_predictive_window_t

0xba78,	// (0x00041316) bg_popup_sub_pane_cp23

0xc661,	// (0x00041eff) listscroll_japin_cand_pane

0xc669,	// (0x00041f07) popup_fep_japan_candidate_window_t1

0xc677,	// (0x00041f15) candidate_pane_ParamLimits

0xc677,	// (0x00041f15) candidate_pane

0xc689,	// (0x00041f27) scroll_pane_cp30

0xc691,	// (0x00041f2f) list_single_popup_jap_candidate_pane_ParamLimits

0xc691,	// (0x00041f2f) list_single_popup_jap_candidate_pane

0xba78,	// (0x00041316) list_highlight_pane_cp30

0xc6a5,	// (0x00041f43) list_single_popup_jap_candidate_pane_t1

0xc6b4,	// (0x00041f52) level_1_signal

0xc6c1,	// (0x00041f5f) level_2_signal

0xc6ce,	// (0x00041f6c) level_3_signal

0xc6db,	// (0x00041f79) level_4_signal

0xc6e8,	// (0x00041f86) level_5_signal

0xc6f5,	// (0x00041f93) level_6_signal

0xc702,	// (0x00041fa0) level_7_signal

0xc6b4,	// (0x00041f52) level_1_battery

0xc6c1,	// (0x00041f5f) level_2_battery

0xc6ce,	// (0x00041f6c) level_3_battery

0xc6db,	// (0x00041f79) level_4_battery

0xc6e8,	// (0x00041f86) level_5_battery

0xc6f5,	// (0x00041f93) level_6_battery

0xc702,	// (0x00041fa0) level_7_battery

0xc727,	// (0x00041fc5) list_menu_pane_ParamLimits

0xc727,	// (0x00041fc5) list_menu_pane

0xc73d,	// (0x00041fdb) scroll_pane_cp25_ParamLimits

0xc73d,	// (0x00041fdb) scroll_pane_cp25

0xc756,	// (0x00041ff4) list_double2_graphic_pane_cp2_ParamLimits

0xc756,	// (0x00041ff4) list_double2_graphic_pane_cp2

0xc756,	// (0x00041ff4) list_double2_large_graphic_pane_cp2_ParamLimits

0xc756,	// (0x00041ff4) list_double2_large_graphic_pane_cp2

0xc756,	// (0x00041ff4) list_double2_pane_cp2_ParamLimits

0xc756,	// (0x00041ff4) list_double2_pane_cp2

0xc756,	// (0x00041ff4) list_double_graphic_pane_cp2_ParamLimits

0xc756,	// (0x00041ff4) list_double_graphic_pane_cp2

0xc756,	// (0x00041ff4) list_double_large_graphic_pane_cp2_ParamLimits

0xc756,	// (0x00041ff4) list_double_large_graphic_pane_cp2

0xc756,	// (0x00041ff4) list_double_number_pane_cp2_ParamLimits

0xc756,	// (0x00041ff4) list_double_number_pane_cp2

0xc756,	// (0x00041ff4) list_double_pane_cp2_ParamLimits

0xc756,	// (0x00041ff4) list_double_pane_cp2

0x9723,	// (0x0003efc1) list_single_2graphic_pane_cp2_ParamLimits

0x9723,	// (0x0003efc1) list_single_2graphic_pane_cp2

0x9723,	// (0x0003efc1) list_single_graphic_heading_pane_cp2_ParamLimits

0x9723,	// (0x0003efc1) list_single_graphic_heading_pane_cp2

0x9723,	// (0x0003efc1) list_single_graphic_pane_cp2_ParamLimits

0x9723,	// (0x0003efc1) list_single_graphic_pane_cp2

0x9723,	// (0x0003efc1) list_single_heading_pane_cp2_ParamLimits

0x9723,	// (0x0003efc1) list_single_heading_pane_cp2

0xc766,	// (0x00042004) list_single_large_graphic_pane_cp2_ParamLimits

0xc766,	// (0x00042004) list_single_large_graphic_pane_cp2

0x9723,	// (0x0003efc1) list_single_number_heading_pane_cp2_ParamLimits

0x9723,	// (0x0003efc1) list_single_number_heading_pane_cp2

0x9723,	// (0x0003efc1) list_single_number_pane_cp2_ParamLimits

0x9723,	// (0x0003efc1) list_single_number_pane_cp2

0x9723,	// (0x0003efc1) list_single_pane_cp2_ParamLimits

0x9723,	// (0x0003efc1) list_single_pane_cp2

0xc780,	// (0x0004201e) bg_popup_sub_pane_cp22

0x20c3,	// (0x00037961) popup_side_volume_key_window_g1

0x20ed,	// (0x0003798b) popup_side_volume_key_window_t1

0x2109,	// (0x000379a7) volume_small_pane_cp1

0xbac6,	// (0x00041364) bg_popup_sub_pane_cp24_ParamLimits

0xbac6,	// (0x00041364) bg_popup_sub_pane_cp24

0xc796,	// (0x00042034) fep_china_uni_candidate_pane_ParamLimits

0xc796,	// (0x00042034) fep_china_uni_candidate_pane

0xc7aa,	// (0x00042048) fep_china_uni_entry_pane

0xc7ba,	// (0x00042058) popup_fep_china_uni_window_g1

0xc7d6,	// (0x00042074) fep_china_uni_entry_pane_g1

0xc7de,	// (0x0004207c) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00044fdd) fep_china_uni_entry_pane_g

0xc7e6,	// (0x00042084) fep_entry_item_pane

0xc7f0,	// (0x0004208e) fep_candidate_item_pane

0xc7f8,	// (0x00042096) fep_china_uni_candidate_pane_g1

0xc800,	// (0x0004209e) fep_china_uni_candidate_pane_g2

0xc808,	// (0x000420a6) fep_china_uni_candidate_pane_g3

0xc810,	// (0x000420ae) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00044fe2) fep_china_uni_candidate_pane_g

0xba6e,	// (0x0004130c) fep_entry_item_pane_g1

0xc818,	// (0x000420b6) fep_entry_item_pane_t1_ParamLimits

0xc818,	// (0x000420b6) fep_entry_item_pane_t1

0xc82e,	// (0x000420cc) fep_candidate_item_pane_t1_ParamLimits

0xc82e,	// (0x000420cc) fep_candidate_item_pane_t1

0xc843,	// (0x000420e1) fep_candidate_item_pane_t2_ParamLimits

0xc843,	// (0x000420e1) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00044feb) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00044feb) fep_candidate_item_pane_t

0xbad4,	// (0x00041372) list_highlight_pane_cp31_ParamLimits

0xbad4,	// (0x00041372) list_highlight_pane_cp31

0xc855,	// (0x000420f3) level_1_signal_lsc

0xc85e,	// (0x000420fc) level_2_signal_lsc

0xc867,	// (0x00042105) level_3_signal_lsc

0xc870,	// (0x0004210e) level_4_signal_lsc

0xc879,	// (0x00042117) level_5_signal_lsc

0xc882,	// (0x00042120) level_6_signal_lsc

0xc88b,	// (0x00042129) level_7_signal_lsc

0xc88b,	// (0x00042129) level_1_battery_lsc

0xc894,	// (0x00042132) level_2_battery_lsc

0xc89d,	// (0x0004213b) level_3_battery_lsc

0xc8a6,	// (0x00042144) level_4_battery_lsc

0xc8af,	// (0x0004214d) level_5_battery_lsc

0xc8b8,	// (0x00042156) level_6_battery_lsc

0xc855,	// (0x000420f3) level_7_battery_lsc

0xc8c1,	// (0x0004215f) scroll_handle_focus_pane_g1

0xc8ca,	// (0x00042168) scroll_handle_focus_pane_g2

0xc8d3,	// (0x00042171) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00044ff0) scroll_handle_focus_pane_g

0x8515,	// (0x0003ddb3) list_single_2graphic_pane_g1_ParamLimits

0x8515,	// (0x0003ddb3) list_single_2graphic_pane_g1

0x8076,	// (0x0003d914) list_single_2graphic_pane_g2_ParamLimits

0x8076,	// (0x0003d914) list_single_2graphic_pane_g2

0x1c0c,	// (0x000374aa) list_single_2graphic_pane_g3_ParamLimits

0x1c0c,	// (0x000374aa) list_single_2graphic_pane_g3

0x8521,	// (0x0003ddbf) list_single_2graphic_pane_g4_ParamLimits

0x8521,	// (0x0003ddbf) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00044ff7) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00044ff7) list_single_2graphic_pane_g

0x852d,	// (0x0003ddcb) list_single_2graphic_pane_t1_ParamLimits

0x852d,	// (0x0003ddcb) list_single_2graphic_pane_t1

0x89b3,	// (0x0003e251) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x89b3,	// (0x0003e251) list_double2_graphic_large_graphic_pane_g1

0x8999,	// (0x0003e237) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8999,	// (0x0003e237) list_double2_graphic_large_graphic_pane_g2

0x8981,	// (0x0003e21f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8981,	// (0x0003e21f) list_double2_graphic_large_graphic_pane_g3

0x89c5,	// (0x0003e263) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x89c5,	// (0x0003e263) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00045000) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00045000) list_double2_graphic_large_graphic_pane_g

0x855b,	// (0x0003ddf9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x855b,	// (0x0003ddf9) list_double2_graphic_large_graphic_pane_t1

0x8571,	// (0x0003de0f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8571,	// (0x0003de0f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00045009) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00045009) list_double2_graphic_large_graphic_pane_t

0xc9b4,	// (0x00042252) popup_fast_swap_window_ParamLimits

0xc9b4,	// (0x00042252) popup_fast_swap_window

0xc9d0,	// (0x0004226e) popup_side_volume_key_window

0xc9ea,	// (0x00042288) stacon_top_pane

0xc9f4,	// (0x00042292) status_pane_ParamLimits

0xc9f4,	// (0x00042292) status_pane

0xc9ea,	// (0x00042288) status_small_pane

0xba78,	// (0x00041316) control_pane

0xba78,	// (0x00041316) stacon_bottom_pane

0xc1ed,	// (0x00041a8b) scroll_pane_cp121

0xc1e4,	// (0x00041a82) set_content_pane

0x97ba,	// (0x0003f058) bg_active_tab_pane_g1_cp1

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp1

0x97b1,	// (0x0003f04f) bg_active_tab_pane_g3_cp1

0x97ba,	// (0x0003f058) bg_passive_tab_pane_g1_cp1

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp1

0x97b1,	// (0x0003f04f) bg_passive_tab_pane_g3_cp1

0x97c3,	// (0x0003f061) bg_active_tab_pane_g1_cp2

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp2

0x97cc,	// (0x0003f06a) bg_active_tab_pane_g3_cp2

0x97c3,	// (0x0003f061) bg_passive_tab_pane_g1_cp2

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp2

0x97cc,	// (0x0003f06a) bg_passive_tab_pane_g3_cp2

0x97d5,	// (0x0003f073) bg_active_tab_pane_g1_cp3

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp3

0x97de,	// (0x0003f07c) bg_active_tab_pane_g3_cp3

0x97d5,	// (0x0003f073) bg_passive_tab_pane_g1_cp3

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp3

0x97de,	// (0x0003f07c) bg_passive_tab_pane_g3_cp3

0x97e7,	// (0x0003f085) bg_active_tab_pane_g1_cp4

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp4

0x97f0,	// (0x0003f08e) bg_active_tab_pane_g3_cp4

0x97e7,	// (0x0003f085) bg_passive_tab_pane_g1_cp4

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp4

0x97f0,	// (0x0003f08e) bg_passive_tab_pane_g3_cp4

0xc923,	// (0x000421c1) bg_active_tab_pane_g1_cp5

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp5

0xc92c,	// (0x000421ca) bg_active_tab_pane_g3_cp5

0xc923,	// (0x000421c1) bg_passive_tab_pane_g1_cp5

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp5

0xc92c,	// (0x000421ca) bg_passive_tab_pane_g3_cp5

0x6c25,	// (0x0003c4c3) list_set_graphic_pane_ParamLimits

0x6c25,	// (0x0003c4c3) list_set_graphic_pane

0xba78,	// (0x00041316) bg_set_opt_pane_cp4

0xc935,	// (0x000421d3) list_set_graphic_pane_g1_ParamLimits

0xc935,	// (0x000421d3) list_set_graphic_pane_g1

0xc941,	// (0x000421df) list_set_graphic_pane_g2_ParamLimits

0xc941,	// (0x000421df) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0004500e) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0004500e) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0004537a) volume_small_pane_cp_g

0xc965,	// (0x00042203) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc965,	// (0x00042203) list_double2_large_graphic_pane_g1_cp2

0xc973,	// (0x00042211) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc973,	// (0x00042211) list_double2_large_graphic_pane_g2_cp2

0xc984,	// (0x00042222) list_double2_large_graphic_pane_g3_cp2

0xc98c,	// (0x0004222a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc98c,	// (0x0004222a) list_double2_large_graphic_pane_t1_cp2

0xc9a2,	// (0x00042240) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc9a2,	// (0x00042240) list_double2_large_graphic_pane_t2_cp2

0xe0eb,	// (0x00043989) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe0eb,	// (0x00043989) list_double_large_graphic_pane_g1_cp2

0xe0fe,	// (0x0004399c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe0fe,	// (0x0004399c) list_double_large_graphic_pane_g2_cp2

0xcb12,	// (0x000423b0) list_double_large_graphic_pane_g3_cp2

0xe10f,	// (0x000439ad) list_double_large_graphic_pane_g4_cp

0xe117,	// (0x000439b5) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe117,	// (0x000439b5) list_double_large_graphic_pane_t1_cp2

0xe12e,	// (0x000439cc) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe12e,	// (0x000439cc) list_double_large_graphic_pane_t2_cp2

0xca02,	// (0x000422a0) list_double2_graphic_pane_g1_cp2_ParamLimits

0xca02,	// (0x000422a0) list_double2_graphic_pane_g1_cp2

0xca10,	// (0x000422ae) list_double2_graphic_pane_g2_cp2_ParamLimits

0xca10,	// (0x000422ae) list_double2_graphic_pane_g2_cp2

0xca21,	// (0x000422bf) list_double2_graphic_pane_g3_cp2

0xca2b,	// (0x000422c9) list_double2_graphic_pane_t1_cp2_ParamLimits

0xca2b,	// (0x000422c9) list_double2_graphic_pane_t1_cp2

0xca41,	// (0x000422df) list_double2_graphic_pane_t2_cp2_ParamLimits

0xca41,	// (0x000422df) list_double2_graphic_pane_t2_cp2

0xca53,	// (0x000422f1) list_single_number_heading_pane_g1_cp2_ParamLimits

0xca53,	// (0x000422f1) list_single_number_heading_pane_g1_cp2

0xca5f,	// (0x000422fd) list_single_number_heading_pane_g2_cp2

0xca67,	// (0x00042305) list_single_number_heading_pane_t1_cp2_ParamLimits

0xca67,	// (0x00042305) list_single_number_heading_pane_t1_cp2

0xca7d,	// (0x0004231b) list_single_number_heading_pane_t2_cp2_ParamLimits

0xca7d,	// (0x0004231b) list_single_number_heading_pane_t2_cp2

0xca91,	// (0x0004232f) list_single_number_heading_pane_t3_cp2_ParamLimits

0xca91,	// (0x0004232f) list_single_number_heading_pane_t3_cp2

0xca53,	// (0x000422f1) list_single_heading_pane_g1_cp2_ParamLimits

0xca53,	// (0x000422f1) list_single_heading_pane_g1_cp2

0xca5f,	// (0x000422fd) list_single_heading_pane_g2_cp2

0xca67,	// (0x00042305) list_single_heading_pane_t1_cp2_ParamLimits

0xca67,	// (0x00042305) list_single_heading_pane_t1_cp2

0xdef3,	// (0x00043791) list_single_heading_pane_t2_cp2_ParamLimits

0xdef3,	// (0x00043791) list_single_heading_pane_t2_cp2

0xdd6a,	// (0x00043608) list_double_graphic_pane_g1_cp2_ParamLimits

0xdd6a,	// (0x00043608) list_double_graphic_pane_g1_cp2

0xde47,	// (0x000436e5) list_double_graphic_pane_g2_cp2_ParamLimits

0xde47,	// (0x000436e5) list_double_graphic_pane_g2_cp2

0xde56,	// (0x000436f4) list_double_graphic_pane_g3_cp2

0xde5e,	// (0x000436fc) list_double_graphic_pane_t1_cp2_ParamLimits

0xde5e,	// (0x000436fc) list_double_graphic_pane_t1_cp2

0xde74,	// (0x00043712) list_double_graphic_pane_t2_cp2_ParamLimits

0xde74,	// (0x00043712) list_double_graphic_pane_t2_cp2

0xcb06,	// (0x000423a4) list_double_number_pane_g1_cp2_ParamLimits

0xcb06,	// (0x000423a4) list_double_number_pane_g1_cp2

0xcb12,	// (0x000423b0) list_double_number_pane_g2_cp2

0xde0b,	// (0x000436a9) list_double_number_pane_t1_cp2_ParamLimits

0xde0b,	// (0x000436a9) list_double_number_pane_t1_cp2

0xde1f,	// (0x000436bd) list_double_number_pane_t2_cp2_ParamLimits

0xde1f,	// (0x000436bd) list_double_number_pane_t2_cp2

0xde35,	// (0x000436d3) list_double_number_pane_t3_cp2_ParamLimits

0xde35,	// (0x000436d3) list_double_number_pane_t3_cp2

0xdd82,	// (0x00043620) list_single_graphic_pane_g1_cp2_ParamLimits

0xdd82,	// (0x00043620) list_single_graphic_pane_g1_cp2

0xcb6a,	// (0x00042408) list_single_graphic_pane_g2_cp2_ParamLimits

0xcb6a,	// (0x00042408) list_single_graphic_pane_g2_cp2

0xcb76,	// (0x00042414) list_single_graphic_pane_g3_cp2

0xdd40,	// (0x000435de) list_single_graphic_pane_t1_cp2_ParamLimits

0xdd40,	// (0x000435de) list_single_graphic_pane_t1_cp2

0xcb6a,	// (0x00042408) list_single_number_pane_g1_cp2_ParamLimits

0xcb6a,	// (0x00042408) list_single_number_pane_g1_cp2

0xcb76,	// (0x00042414) list_single_number_pane_g2_cp2

0xdd40,	// (0x000435de) list_single_number_pane_t1_cp2_ParamLimits

0xdd40,	// (0x000435de) list_single_number_pane_t1_cp2

0xdd56,	// (0x000435f4) list_single_number_pane_t2_cp2_ParamLimits

0xdd56,	// (0x000435f4) list_single_number_pane_t2_cp2

0xc973,	// (0x00042211) list_double2_pane_g1_cp2_ParamLimits

0xc973,	// (0x00042211) list_double2_pane_g1_cp2

0xc984,	// (0x00042222) list_double2_pane_g2_cp2

0xcade,	// (0x0004237c) list_double2_pane_t1_cp2_ParamLimits

0xcade,	// (0x0004237c) list_double2_pane_t1_cp2

0xcaf4,	// (0x00042392) list_double2_pane_t2_cp2_ParamLimits

0xcaf4,	// (0x00042392) list_double2_pane_t2_cp2

0xcb06,	// (0x000423a4) list_double_pane_g1_cp2_ParamLimits

0xcb06,	// (0x000423a4) list_double_pane_g1_cp2

0xcb12,	// (0x000423b0) list_double_pane_g2_cp2

0xcb1a,	// (0x000423b8) list_double_pane_t1_cp2_ParamLimits

0xcb1a,	// (0x000423b8) list_double_pane_t1_cp2

0xcb30,	// (0x000423ce) list_double_pane_t2_cp2_ParamLimits

0xcb30,	// (0x000423ce) list_double_pane_t2_cp2

0xcb5a,	// (0x000423f8) list_single_pane_cp2_g3

0xcb6a,	// (0x00042408) list_single_pane_g1_cp2_ParamLimits

0xcb6a,	// (0x00042408) list_single_pane_g1_cp2

0xcb76,	// (0x00042414) list_single_pane_g2_cp2

0xcb7e,	// (0x0004241c) list_single_pane_t1_cp2_ParamLimits

0xcb7e,	// (0x0004241c) list_single_pane_t1_cp2

0xcb96,	// (0x00042434) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcb96,	// (0x00042434) list_single_large_graphic_pane_g1_cp2

0xcba4,	// (0x00042442) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcba4,	// (0x00042442) list_single_large_graphic_pane_g2_cp2

0xcbb0,	// (0x0004244e) list_single_large_graphic_pane_g3_cp2

0xcbb8,	// (0x00042456) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcbb8,	// (0x00042456) list_single_large_graphic_pane_g4_cp1

0xcbd2,	// (0x00042470) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcbd2,	// (0x00042470) list_single_large_graphic_pane_t1_cp2

0xdd0a,	// (0x000435a8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdd0a,	// (0x000435a8) list_single_graphic_heading_pane_g1_cp2

0xdcd7,	// (0x00043575) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdcd7,	// (0x00043575) list_single_graphic_heading_pane_g4_cp2

0xcb76,	// (0x00042414) list_single_graphic_heading_pane_g5_cp2

0xdd16,	// (0x000435b4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xdd16,	// (0x000435b4) list_single_graphic_heading_pane_t1_cp2

0xdd2c,	// (0x000435ca) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdd2c,	// (0x000435ca) list_single_graphic_heading_pane_t2_cp2

0xdccb,	// (0x00043569) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdccb,	// (0x00043569) list_single_2graphic_pane_g1_cp2

0xdcd7,	// (0x00043575) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdcd7,	// (0x00043575) list_single_2graphic_pane_g2_cp2

0xcb76,	// (0x00042414) list_single_2graphic_pane_g3_cp2

0xdce8,	// (0x00043586) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdce8,	// (0x00043586) list_single_2graphic_pane_g4_cp2

0xdcf4,	// (0x00043592) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdcf4,	// (0x00043592) list_single_2graphic_pane_t1_cp2

0xba6e,	// (0x0004130c) list_highlight_pane_g10_cp1

0xd8bf,	// (0x0004315d) list_highlight_pane_g1_cp1

0xd8c7,	// (0x00043165) list_highlight_pane_g2_cp1

0xd8cf,	// (0x0004316d) list_highlight_pane_g3_cp1

0xd8d7,	// (0x00043175) list_highlight_pane_g4_cp1

0xd8df,	// (0x0004317d) list_highlight_pane_g5_cp1

0xd8e7,	// (0x00043185) list_highlight_pane_g6_cp1

0xd8ef,	// (0x0004318d) list_highlight_pane_g7_cp1

0xd8f7,	// (0x00043195) list_highlight_pane_g8_cp1

0xd8ff,	// (0x0004319d) list_highlight_pane_g9_cp1

0xa429,	// (0x0003fcc7) form_field_slider_pane_t3

0xa439,	// (0x0003fcd7) form_field_slider_pane_t4

0xd7f3,	// (0x00043091) slider_form_pane_ParamLimits

0xd7f3,	// (0x00043091) slider_form_pane

0xba78,	// (0x00041316) control_abbreviations

0xba78,	// (0x00041316) control_conventions

0xba78,	// (0x00041316) control_definitions

0xba78,	// (0x00041316) format_table_attribute

0xdf3f,	// (0x000437dd) bg_popup_preview_window_pane_g9

0xba78,	// (0x00041316) format_table_data2

0xba78,	// (0x00041316) format_table_data3

0xba78,	// (0x00041316) format_table_data_example

0x0008,

0xba78,	// (0x00041316) intro_purpose

0xf900,	// (0x0004519e) bg_popup_preview_window_pane_g

0xba78,	// (0x00041316) texts_category

0xba78,	// (0x00041316) texts_graphics

0xcbe8,	// (0x00042486) text_digital

0xcbf7,	// (0x00042495) text_primary

0xcc06,	// (0x000424a4) text_primary_small

0xcc15,	// (0x000424b3) text_secondary

0xcc24,	// (0x000424c2) text_title

0xe3fa,	// (0x00043c98) bg_passive_tab_pane_g1_cp3_srt

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp3_srt

0xe403,	// (0x00043ca1) bg_passive_tab_pane_g3_cp3_srt

0xbac6,	// (0x00041364) bg_active_tab_pane_cp3_srt_ParamLimits

0xbac6,	// (0x00041364) bg_active_tab_pane_cp3_srt

0xe40c,	// (0x00043caa) tabs_4_active_pane_srt_g1

0xa770,	// (0x0004000e) tabs_4_active_pane_srt_t1_ParamLimits

0xa770,	// (0x0004000e) tabs_4_active_pane_srt_t1

0xe3fa,	// (0x00043c98) bg_active_tab_pane_g1_cp3_copy1

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp3_copy1

0xe403,	// (0x00043ca1) bg_active_tab_pane_g3_cp3_copy1

0xbad4,	// (0x00041372) tabs_2_long_active_pane_srt_ParamLimits

0xbad4,	// (0x00041372) tabs_2_long_active_pane_srt

0xbad4,	// (0x00041372) tabs_2_long_passive_pane_srt_ParamLimits

0xbad4,	// (0x00041372) tabs_2_long_passive_pane_srt

0xc355,	// (0x00041bf3) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc355,	// (0x00041bf3) bg_passive_tab_pane_cp4_srt

0xe316,	// (0x00043bb4) bg_passive_tab_pane_g1_cp4_srt

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp4_srt

0xe31f,	// (0x00043bbd) bg_passive_tab_pane_g3_cp4_srt

0xbad4,	// (0x00041372) bg_active_tab_pane_cp4_srt_ParamLimits

0xbad4,	// (0x00041372) bg_active_tab_pane_cp4_srt

0xa59e,	// (0x0003fe3c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa59e,	// (0x0003fe3c) tabs_2_long_active_pane_srt_t1

0xe316,	// (0x00043bb4) bg_active_tab_pane_g1_cp4_srt

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp4_srt

0xe31f,	// (0x00043bbd) bg_active_tab_pane_g3_cp4_srt

0xbac6,	// (0x00041364) tabs_3_long_active_pane_srt_ParamLimits

0xbac6,	// (0x00041364) tabs_3_long_active_pane_srt

0xbac6,	// (0x00041364) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xbac6,	// (0x00041364) tabs_3_long_passive_pane_cp_srt

0xbac6,	// (0x00041364) tabs_3_long_passive_pane_srt_ParamLimits

0xbac6,	// (0x00041364) tabs_3_long_passive_pane_srt

0xc355,	// (0x00041bf3) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc355,	// (0x00041bf3) bg_passive_tab_pane_cp5_srt

0xc923,	// (0x000421c1) bg_passive_tab_pane_g1_cp5_srt

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp5_srt

0xc92c,	// (0x000421ca) bg_passive_tab_pane_g3_cp5_srt

0xbad4,	// (0x00041372) bg_active_tab_pane_cp5_srt_ParamLimits

0xbad4,	// (0x00041372) bg_active_tab_pane_cp5_srt

0xa588,	// (0x0003fe26) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa588,	// (0x0003fe26) tabs_3_long_active_pane_srt_t1

0xc923,	// (0x000421c1) bg_active_tab_pane_g1_cp5_srt

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp5_srt

0xc92c,	// (0x000421ca) bg_active_tab_pane_g3_cp5_srt

0xe308,	// (0x00043ba6) navi_text_pane_srt_t1

0xe300,	// (0x00043b9e) navi_icon_pane_srt_g1

0xcd34,	// (0x000425d2) midp_editing_number_pane_srt

0xcc33,	// (0x000424d1) midp_ticker_pane_srt

0xcd3c,	// (0x000425da) midp_ticker_pane_srt_g1

0xcd44,	// (0x000425e2) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004502d) midp_ticker_pane_srt_g

0xcd4c,	// (0x000425ea) midp_ticker_pane_srt_t1

0xe2f1,	// (0x00043b8f) midp_editing_number_pane_t1_copy1

0xc355,	// (0x00041bf3) listscroll_midp_pane

0xc355,	// (0x00041bf3) midp_form_pane

0xcc3b,	// (0x000424d9) midp_info_popup_window_ParamLimits

0xcc3b,	// (0x000424d9) midp_info_popup_window

0xc2b6,	// (0x00041b54) bg_popup_sub_pane_cp50_ParamLimits

0xc2b6,	// (0x00041b54) bg_popup_sub_pane_cp50

0xd510,	// (0x00042dae) listscroll_midp_info_pane_ParamLimits

0xd510,	// (0x00042dae) listscroll_midp_info_pane

0xd4f8,	// (0x00042d96) listscroll_form_midp_pane_ParamLimits

0xd4f8,	// (0x00042d96) listscroll_form_midp_pane

0xd504,	// (0x00042da2) scroll_bar_cp050

0xa41d,	// (0x0003fcbb) list_midp_pane

0xecc8,	// (0x00044566) signal_pane_g2_cp

0xd42a,	// (0x00042cc8) listscroll_midp_info_pane_t1_ParamLimits

0xd42a,	// (0x00042cc8) listscroll_midp_info_pane_t1

0xd442,	// (0x00042ce0) listscroll_midp_info_pane_t2_ParamLimits

0xd442,	// (0x00042ce0) listscroll_midp_info_pane_t2

0xd480,	// (0x00042d1e) listscroll_midp_info_pane_t3_ParamLimits

0xd480,	// (0x00042d1e) listscroll_midp_info_pane_t3

0xd4ba,	// (0x00042d58) listscroll_midp_info_pane_t4_ParamLimits

0xd4ba,	// (0x00042d58) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x000450d9) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x000450d9) listscroll_midp_info_pane_t

0xc31d,	// (0x00041bbb) scroll_pane_cp21

0xd3ce,	// (0x00042c6c) form_midp_field_choice_group_pane

0xd3d7,	// (0x00042c75) form_midp_field_text_pane

0xd410,	// (0x00042cae) form_midp_field_time_pane

0xd418,	// (0x00042cb6) form_midp_gauge_slider_pane

0xd421,	// (0x00042cbf) form_midp_gauge_wait_pane

0xba78,	// (0x00041316) form_midp_image_pane

0x859f,	// (0x0003de3d) list_single_midp_pane_ParamLimits

0x859f,	// (0x0003de3d) list_single_midp_pane

0xa3f9,	// (0x0003fc97) form_midp_field_text_pane_t1

0xd275,	// (0x00042b13) input_focus_pane_cp050

0xd3bd,	// (0x00042c5b) list_midp_form_text_pane

0xd38c,	// (0x00042c2a) form_midp_field_choice_group_pane_t1

0xd39a,	// (0x00042c38) input_focus_pane_cp051

0xd3ae,	// (0x00042c4c) list_midp_choice_pane

0xba78,	// (0x00041316) status_idle_pane

0xd370,	// (0x00042c0e) form_midp_field_time_pane_t1

0xba6e,	// (0x0004130c) wait_anim_pane_g2_copy1

0xd37e,	// (0x00042c1c) form_midp_field_time_pane_t2

0x0001,

0xcca6,	// (0x00042544) aid_navinavi_width_2_pane

0xf836,	// (0x000450d4) form_midp_field_time_pane_t

0xba78,	// (0x00041316) input_focus_pane_cp052

0xba78,	// (0x00041316) bg_input_focus_pane_cp040

0xd34c,	// (0x00042bea) form_midp_gauge_slider_pane_t1

0xd35a,	// (0x00042bf8) form_midp_gauge_slider_pane_t2

0xa3d9,	// (0x0003fc77) form_midp_gauge_slider_pane_t3

0xa3e9,	// (0x0003fc87) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x000450cb) form_midp_gauge_slider_pane_t

0xd368,	// (0x00042c06) form_midp_slider_pane

0xbad4,	// (0x00041372) bg_input_focus_pane_cp041_ParamLimits

0xbad4,	// (0x00041372) bg_input_focus_pane_cp041

0xd319,	// (0x00042bb7) form_midp_gauge_wait_pane_t1_ParamLimits

0xd319,	// (0x00042bb7) form_midp_gauge_wait_pane_t1

0xd32b,	// (0x00042bc9) form_midp_gauge_wait_pane_t2_ParamLimits

0xd32b,	// (0x00042bc9) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x000450c6) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x000450c6) form_midp_gauge_wait_pane_t

0xd33d,	// (0x00042bdb) form_midp_wait_pane_ParamLimits

0xd33d,	// (0x00042bdb) form_midp_wait_pane

0xd2e3,	// (0x00042b81) form_midp_image_pane_g1

0xd2ec,	// (0x00042b8a) form_midp_image_pane_t1

0xd2fb,	// (0x00042b99) form_midp_image_pane_t2

0xd30a,	// (0x00042ba8) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x000450bf) form_midp_image_pane_t

0xd2da,	// (0x00042b78) list_single_midp_pane_g1

0x0e38,	// (0x000366d6) list_single_midp_pane_t1

0xa3c2,	// (0x0003fc60) list_midp_form_item_pane_ParamLimits

0xa3c2,	// (0x0003fc60) list_midp_form_item_pane

0xcc4e,	// (0x000424ec) list_midp_form_item_pane_t1

0xcc5d,	// (0x000424fb) midp_ticker_pane_g1

0xcc69,	// (0x00042507) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00045013) midp_ticker_pane_g

0xcc75,	// (0x00042513) midp_ticker_pane_t1

0xe3a1,	// (0x00043c3f) midp_editing_number_pane_t1

0xe37f,	// (0x00043c1d) midp_editing_number_pane

0xe38e,	// (0x00043c2c) midp_ticker_pane

0xe2e1,	// (0x00043b7f) ai_message_heading_pane

0xba78,	// (0x00041316) bg_popup_window_pane_cp14

0xe2e9,	// (0x00043b87) listscroll_ai_message_pane

0xe25f,	// (0x00043afd) ai_message_heading_pane_g1_ParamLimits

0xe25f,	// (0x00043afd) ai_message_heading_pane_g1

0xe26b,	// (0x00043b09) ai_message_heading_pane_g2_ParamLimits

0xe26b,	// (0x00043b09) ai_message_heading_pane_g2

0xe277,	// (0x00043b15) ai_message_heading_pane_g3_ParamLimits

0xe277,	// (0x00043b15) ai_message_heading_pane_g3

0xe283,	// (0x00043b21) ai_message_heading_pane_g4_ParamLimits

0xe283,	// (0x00043b21) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x00045200) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x00045200) ai_message_heading_pane_g

0xe29b,	// (0x00043b39) ai_message_heading_pane_t1_ParamLimits

0xe29b,	// (0x00043b39) ai_message_heading_pane_t1

0xe2b5,	// (0x00043b53) ai_message_heading_pane_t2_ParamLimits

0xe2b5,	// (0x00043b53) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x00045209) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x00045209) ai_message_heading_pane_t

0xe2c7,	// (0x00043b65) bg_popup_heading_pane_cp1_ParamLimits

0xe2c7,	// (0x00043b65) bg_popup_heading_pane_cp1

0xe24d,	// (0x00043aeb) list_ai_message_pane_ParamLimits

0xe24d,	// (0x00043aeb) list_ai_message_pane

0xc31d,	// (0x00041bbb) scroll_pane_cp10

0xe1e9,	// (0x00043a87) list_ai_message_pane_g1

0xe1f1,	// (0x00043a8f) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x000451dd) list_ai_message_pane_g

0xe1f9,	// (0x00043a97) list_ai_message_pane_t1_ParamLimits

0xe1f9,	// (0x00043a97) list_ai_message_pane_t1

0xe20e,	// (0x00043aac) list_ai_message_pane_t2_ParamLimits

0xe20e,	// (0x00043aac) list_ai_message_pane_t2

0xe223,	// (0x00043ac1) list_ai_message_pane_t3_ParamLimits

0xe223,	// (0x00043ac1) list_ai_message_pane_t3

0xe238,	// (0x00043ad6) list_ai_message_pane_t4_ParamLimits

0xe238,	// (0x00043ad6) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x000451e2) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x000451e2) list_ai_message_pane_t

0xa563,	// (0x0003fe01) cell_ai_soft_ind_pane_ParamLimits

0xa563,	// (0x0003fe01) cell_ai_soft_ind_pane

0xcc87,	// (0x00042525) cell_ai_soft_ind_pane_g1_ParamLimits

0xcc87,	// (0x00042525) cell_ai_soft_ind_pane_g1

0xba78,	// (0x00041316) grid_highlight_cp1

0xcc94,	// (0x00042532) text_secondary_cp56_ParamLimits

0xcc94,	// (0x00042532) text_secondary_cp56

0xe1be,	// (0x00043a5c) example_general_pane_ParamLimits

0xe1be,	// (0x00043a5c) example_general_pane

0xe1ca,	// (0x00043a68) example_parent_pane_g1_ParamLimits

0xe1ca,	// (0x00043a68) example_parent_pane_g1

0xe1d6,	// (0x00043a74) example_parent_pane_t1_ParamLimits

0xe1d6,	// (0x00043a74) example_parent_pane_t1

0x9c8b,	// (0x0003f529) popup_preview_text_window_ParamLimits

0x9c8b,	// (0x0003f529) popup_preview_text_window

0xcb62,	// (0x00042400) list_single_pane_cp2_g4

0xbdd8,	// (0x00041676) bg_popup_preview_window_pane_ParamLimits

0xbdd8,	// (0x00041676) bg_popup_preview_window_pane

0xdf47,	// (0x000437e5) popup_preview_text_window_t1_ParamLimits

0xdf47,	// (0x000437e5) popup_preview_text_window_t1

0xdf65,	// (0x00043803) popup_preview_text_window_t2_ParamLimits

0xdf65,	// (0x00043803) popup_preview_text_window_t2

0xdfae,	// (0x0004384c) popup_preview_text_window_t3_ParamLimits

0xdfae,	// (0x0004384c) popup_preview_text_window_t3

0xdff3,	// (0x00043891) popup_preview_text_window_t4_ParamLimits

0xdff3,	// (0x00043891) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x000451b1) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x000451b1) popup_preview_text_window_t

0xe071,	// (0x0004390f) scroll_pane_cp11

0xd185,	// (0x00042a23) bg_popup_preview_window_pane_g1

0xdf07,	// (0x000437a5) bg_popup_preview_window_pane_g2

0xdf0f,	// (0x000437ad) bg_popup_preview_window_pane_g3

0xdf17,	// (0x000437b5) bg_popup_preview_window_pane_g4

0xdf1f,	// (0x000437bd) bg_popup_preview_window_pane_g5

0xdf27,	// (0x000437c5) bg_popup_preview_window_pane_g6

0xdf2f,	// (0x000437cd) bg_popup_preview_window_pane_g7

0xdf37,	// (0x000437d5) bg_popup_preview_window_pane_g8

0x14ae,	// (0x00036d4c) aid_popup_width_pane

0x9c07,	// (0x0003f4a5) popup_midp_note_alarm_window_ParamLimits

0x9c07,	// (0x0003f4a5) popup_midp_note_alarm_window

0xc1fe,	// (0x00041a9c) data_form_pane_ParamLimits

0x8406,	// (0x0003dca4) form_field_data_pane_g1

0x8410,	// (0x0003dcae) form_field_data_pane_t1_ParamLimits

0xc20a,	// (0x00041aa8) input_focus_pane_ParamLimits

0xc218,	// (0x00041ab6) data_form_wide_pane_ParamLimits

0x0b73,	// (0x00036411) form_field_data_wide_pane_g1

0x0b7f,	// (0x0003641d) form_field_data_wide_pane_t1_ParamLimits

0xbf79,	// (0x00041817) input_focus_pane_cp6_ParamLimits

0x95f8,	// (0x0003ee96) input_popup_find_pane_g1_ParamLimits

0x95f8,	// (0x0003ee96) input_popup_find_pane_g1

0x1e4f,	// (0x000376ed) aid_navi_side_left_pane

0x1e64,	// (0x00037702) aid_navi_side_right_pane

0xd99c,	// (0x0004323a) bg_popup_window_pane_cp30_ParamLimits

0xd99c,	// (0x0004323a) bg_popup_window_pane_cp30

0xda28,	// (0x000432c6) popup_midp_note_alarm_window_g1_ParamLimits

0xda28,	// (0x000432c6) popup_midp_note_alarm_window_g1

0xda58,	// (0x000432f6) popup_midp_note_alarm_window_t1_ParamLimits

0xda58,	// (0x000432f6) popup_midp_note_alarm_window_t1

0xdaf9,	// (0x00043397) popup_midp_note_alarm_window_t2_ParamLimits

0xdaf9,	// (0x00043397) popup_midp_note_alarm_window_t2

0xdba7,	// (0x00043445) popup_midp_note_alarm_window_t3_ParamLimits

0xdba7,	// (0x00043445) popup_midp_note_alarm_window_t3

0xdbcf,	// (0x0004346d) popup_midp_note_alarm_window_t4_ParamLimits

0xdbcf,	// (0x0004346d) popup_midp_note_alarm_window_t4

0xdbef,	// (0x0004348d) popup_midp_note_alarm_window_t5_ParamLimits

0xdbef,	// (0x0004348d) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0004514e) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0004514e) popup_midp_note_alarm_window_t

0xdc9b,	// (0x00043539) wait_bar_pane_cp1_ParamLimits

0xdc9b,	// (0x00043539) wait_bar_pane_cp1

0xba78,	// (0x00041316) wait_anim_pane_copy1

0xba78,	// (0x00041316) wait_border_pane_copy1

0xd6b4,	// (0x00042f52) wait_border_pane_g1_copy1

0x0b99,	// (0x00036437) form_field_popup_pane_g1

0x842a,	// (0x0003dcc8) form_field_popup_pane_t1_ParamLimits

0xc20a,	// (0x00041aa8) input_focus_pane_cp7_ParamLimits

0xc238,	// (0x00041ad6) list_form_pane_ParamLimits

0x0bbb,	// (0x00036459) form_field_popup_wide_pane_g1

0x0bc3,	// (0x00036461) form_field_popup_wide_pane_t1_ParamLimits

0xc20a,	// (0x00041aa8) input_focus_pane_cp8_ParamLimits

0xc244,	// (0x00041ae2) list_form_wide_pane_ParamLimits

0xe433,	// (0x00043cd1) aid_size_cell_graphic_pane

0x84a9,	// (0x0003dd47) data_form_pane_t1_ParamLimits

0x85cb,	// (0x0003de69) data_form_wide_pane_t1_ParamLimits

0xa047,	// (0x0003f8e5) bg_status_flat_pane

0x9224,	// (0x0003eac2) title_pane_t1_ParamLimits

0xba8e,	// (0x0004132c) title_pane_t2_ParamLimits

0xbab4,	// (0x00041352) title_pane_t3_ParamLimits

0xf56f,	// (0x00044e0d) title_pane_t_ParamLimits

0xc6b4,	// (0x00041f52) level_1_signal_ParamLimits

0xc6c1,	// (0x00041f5f) level_2_signal_ParamLimits

0xc6ce,	// (0x00041f6c) level_3_signal_ParamLimits

0xc6db,	// (0x00041f79) level_4_signal_ParamLimits

0xc6e8,	// (0x00041f86) level_5_signal_ParamLimits

0xc6f5,	// (0x00041f93) level_6_signal_ParamLimits

0xc702,	// (0x00041fa0) level_7_signal_ParamLimits

0xc6b4,	// (0x00041f52) level_1_battery_ParamLimits

0xc6c1,	// (0x00041f5f) level_2_battery_ParamLimits

0xc6ce,	// (0x00041f6c) level_3_battery_ParamLimits

0xc6db,	// (0x00041f79) level_4_battery_ParamLimits

0xc6e8,	// (0x00041f86) level_5_battery_ParamLimits

0xc6f5,	// (0x00041f93) level_6_battery_ParamLimits

0xc702,	// (0x00041fa0) level_7_battery_ParamLimits

0xd8bf,	// (0x0004315d) bg_status_flat_pane_g1

0xd8c7,	// (0x00043165) bg_status_flat_pane_g2

0xd8cf,	// (0x0004316d) bg_status_flat_pane_g3

0xd8d7,	// (0x00043175) bg_status_flat_pane_g4

0xd8df,	// (0x0004317d) bg_status_flat_pane_g5

0xd8e7,	// (0x00043185) bg_status_flat_pane_g6

0xd8ef,	// (0x0004318d) bg_status_flat_pane_g7

0x92b8,	// (0x0003eb56) tabs_3_active_pane_t1_ParamLimits

0x92b8,	// (0x0003eb56) tabs_3_passive_pane_t1_ParamLimits

0x92d2,	// (0x0003eb70) tabs_4_active_pane_t1_ParamLimits

0x92d2,	// (0x0003eb70) tabs_4_1_passive_pane_t1_ParamLimits

0x960e,	// (0x0003eeac) tabs_2_active_pane_t1_ParamLimits

0x960e,	// (0x0003eeac) tabs_2_passive_pane_t1_ParamLimits

0xbad4,	// (0x00041372) bg_active_tab_pane_cp4_ParamLimits

0x9620,	// (0x0003eebe) tabs_2_long_active_pane_t1_ParamLimits

0xc355,	// (0x00041bf3) bg_passive_tab_pane_cp4_ParamLimits

0x2611,	// (0x00037eaf) list_single_midp_graphic_pane_t1_ParamLimits

0xbad4,	// (0x00041372) bg_active_tab_pane_cp5_ParamLimits

0x9633,	// (0x0003eed1) tabs_3_long_active_pane_t1_ParamLimits

0xc355,	// (0x00041bf3) bg_passive_tab_pane_cp5_ParamLimits

0x2611,	// (0x00037eaf) list_single_midp_graphic_pane_t1

0xa047,	// (0x0003f8e5) bg_status_flat_pane_ParamLimits

0xd04a,	// (0x000428e8) indicator_pane_cp2_ParamLimits

0xd04a,	// (0x000428e8) indicator_pane_cp2

0xa1bf,	// (0x0003fa5d) navi_pane_srt_ParamLimits

0xa1bf,	// (0x0003fa5d) navi_pane_srt

0xd072,	// (0x00042910) popup_clock_digital_analogue_window_cp1

0xbb18,	// (0x000413b6) indicator_pane_t1

0xcc33,	// (0x000424d1) copy_highlight_pane

0xcc33,	// (0x000424d1) cursor_graphics_pane

0xcc33,	// (0x000424d1) graphic_within_text_pane

0xcc33,	// (0x000424d1) link_highlight_pane

0xe034,	// (0x000438d2) popup_preview_text_window_t5_ParamLimits

0xe034,	// (0x000438d2) popup_preview_text_window_t5

0xccae,	// (0x0004254c) cursor_digital_pane

0xccae,	// (0x0004254c) cursor_primary_pane

0xccbf,	// (0x0004255d) cursor_primary_small_pane

0xccc7,	// (0x00042565) cursor_secondary_pane

0xcccf,	// (0x0004256d) cursor_title_pane

0xccae,	// (0x0004254c) link_highlight_digital_pane

0xccb6,	// (0x00042554) link_highlight_primary_pane

0xccbf,	// (0x0004255d) link_highlight_primary_small_pane

0xccc7,	// (0x00042565) link_highlight_secondary_pane

0xcccf,	// (0x0004256d) link_highlight_title_pane

0xccae,	// (0x0004254c) copy_highlight_digital_pane

0xccae,	// (0x0004254c) copy_highlight_primary_pane

0xccbf,	// (0x0004255d) copy_highlight_primary_small_pane

0xccc7,	// (0x00042565) copy_highlight_secondary_pane

0xcccf,	// (0x0004256d) copy_highlight_title_pane

0xccc7,	// (0x00042565) graphic_text_digital_pane

0xd93f,	// (0x000431dd) graphic_text_primary_pane

0xd948,	// (0x000431e6) graphic_text_primary_small_pane

0xccbf,	// (0x0004255d) graphic_text_secondary_pane

0xccae,	// (0x0004254c) graphic_text_title_pane

0x9894,	// (0x0003f132) cursor_primary_pane_g1

0xd931,	// (0x000431cf) cursor_text_primary_t1

0xa45d,	// (0x0003fcfb) cursor_primary_small_pane_g1

0xd923,	// (0x000431c1) cursor_text_primary_small_t1

0xa453,	// (0x0003fcf1) cursor_primary_small_pane_g1_copy1

0xd915,	// (0x000431b3) cursor_text_primary_small_t1_copy1

0xd907,	// (0x000431a5) cursor_text_title_t1

0xa449,	// (0x0003fce7) cursor_title_pane_g1

0x9894,	// (0x0003f132) cursor_digital_pane_g1

0xccd7,	// (0x00042575) cursor_text_digital_t1

0xd8a8,	// (0x00043146) link_highlight_primary_pane_g1

0xd8b0,	// (0x0004314e) link_highlight_primary_pane_t1

0xcce5,	// (0x00042583) link_highlight_primary_small_pane_g1

0xcced,	// (0x0004258b) link_highlight_primary_small_pane_t1

0xcce5,	// (0x00042583) link_highlight_secondary_pane_g1

0xccfc,	// (0x0004259a) link_highlight_secondary_pane_t1

0xd81c,	// (0x000430ba) link_highlight_title_pane_g1

0xd824,	// (0x000430c2) link_highlight_title_pane_t1

0xd805,	// (0x000430a3) link_highlight_digital_pane_g1

0xd80d,	// (0x000430ab) link_highlight_digital_pane_t1

0xd6f9,	// (0x00042f97) copy_highlight_primary_pane_g1

0xd701,	// (0x00042f9f) copy_highlight_primary_pane_t1

0xd6d3,	// (0x00042f71) copy_highlight_primary_small_pane_g1

0xd6ea,	// (0x00042f88) copy_highlight_primary_small_pane_t1

0xcd0b,	// (0x000425a9) copy_highlight_secondary_pane_g1

0xcd13,	// (0x000425b1) copy_highlight_secondary_pane_t1

0xd6d3,	// (0x00042f71) copy_highlight_title_pane_g1

0xd6db,	// (0x00042f79) copy_highlight_title_pane_t1

0xd6f9,	// (0x00042f97) copy_highlight_digital_pane_g1

0xe5bd,	// (0x00043e5b) copy_highlight_digital_pane_t1

0xe511,	// (0x00043daf) graphic_text_primary_pane_g1

0xe5a1,	// (0x00043e3f) graphic_text_primary_pane_t1

0xe5af,	// (0x00043e4d) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0004527d) graphic_text_primary_pane_t

0xe57d,	// (0x00043e1b) graphic_text_primary_small_pane_g1

0xe585,	// (0x00043e23) graphic_text_primary_small_pane_t1

0xe593,	// (0x00043e31) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x00045278) graphic_text_primary_small_pane_t

0xe559,	// (0x00043df7) graphic_text_secondary_pane_g1

0xe561,	// (0x00043dff) graphic_text_secondary_pane_t1

0xe56f,	// (0x00043e0d) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x00045273) graphic_text_secondary_pane_t

0xe535,	// (0x00043dd3) graphic_text_title_pane_g1

0xe53d,	// (0x00043ddb) graphic_text_title_pane_t1

0xe54b,	// (0x00043de9) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0004526e) graphic_text_title_pane_t

0xe511,	// (0x00043daf) graphic_text_digital_pane_g1

0xe519,	// (0x00043db7) graphic_text_digital_pane_t1

0xe527,	// (0x00043dc5) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x00045269) graphic_text_digital_pane_t

0xbad4,	// (0x00041372) navi_icon_pane_srt_ParamLimits

0xbad4,	// (0x00041372) navi_icon_pane_srt

0xba78,	// (0x00041316) navi_midp_pane_srt

0xba78,	// (0x00041316) navi_navi_pane_srt

0xbad4,	// (0x00041372) navi_text_pane_srt_ParamLimits

0xbad4,	// (0x00041372) navi_text_pane_srt

0xe4dc,	// (0x00043d7a) navi_navi_icon_text_pane_srt

0xe4e4,	// (0x00043d82) navi_navi_pane_srt_g1_ParamLimits

0xe4e4,	// (0x00043d82) navi_navi_pane_srt_g1

0xe4f6,	// (0x00043d94) navi_navi_pane_srt_g2_ParamLimits

0xe4f6,	// (0x00043d94) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x00045264) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x00045264) navi_navi_pane_srt_g

0xe508,	// (0x00043da6) navi_navi_tabs_pane_srt

0xe4dc,	// (0x00043d7a) navi_navi_text_pane_srt

0xe4dc,	// (0x00043d7a) navi_navi_volume_pane_srt

0xe4cd,	// (0x00043d6b) navi_navi_text_pane_srt_t1

0x2a47,	// (0x000382e5) navi_navi_volume_pane_srt_g1

0x2a4f,	// (0x000382ed) volume_small_pane_srt_ParamLimits

0x2a4f,	// (0x000382ed) volume_small_pane_srt

0x238d,	// (0x00037c2b) volume_small_pane_srt_g1_ParamLimits

0x238d,	// (0x00037c2b) volume_small_pane_srt_g1

0x239d,	// (0x00037c3b) volume_small_pane_srt_g2_ParamLimits

0x239d,	// (0x00037c3b) volume_small_pane_srt_g2

0x23ae,	// (0x00037c4c) volume_small_pane_srt_g3_ParamLimits

0x23ae,	// (0x00037c4c) volume_small_pane_srt_g3

0x23bf,	// (0x00037c5d) volume_small_pane_srt_g4_ParamLimits

0x23bf,	// (0x00037c5d) volume_small_pane_srt_g4

0x23d0,	// (0x00037c6e) volume_small_pane_srt_g5_ParamLimits

0x23d0,	// (0x00037c6e) volume_small_pane_srt_g5

0x23e1,	// (0x00037c7f) volume_small_pane_srt_g6_ParamLimits

0x23e1,	// (0x00037c7f) volume_small_pane_srt_g6

0x23f2,	// (0x00037c90) volume_small_pane_srt_g7_ParamLimits

0x23f2,	// (0x00037c90) volume_small_pane_srt_g7

0x2403,	// (0x00037ca1) volume_small_pane_srt_g8_ParamLimits

0x2403,	// (0x00037ca1) volume_small_pane_srt_g8

0x2414,	// (0x00037cb2) volume_small_pane_srt_g9_ParamLimits

0x2414,	// (0x00037cb2) volume_small_pane_srt_g9

0x2425,	// (0x00037cc3) volume_small_pane_srt_g10_ParamLimits

0x2425,	// (0x00037cc3) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00045018) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00045018) volume_small_pane_srt_g

0xbe81,	// (0x0004171f) query_popup_data_pane_cp2

0xe4b3,	// (0x00043d51) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe4b3,	// (0x00043d51) navi_navi_icon_text_pane_srt_t1

0xd93f,	// (0x000431dd) navi_tabs_2_long_pane_srt

0xd93f,	// (0x000431dd) navi_tabs_2_pane_srt

0xd93f,	// (0x000431dd) navi_tabs_3_long_pane_srt

0xd93f,	// (0x000431dd) navi_tabs_3_pane_srt

0xd93f,	// (0x000431dd) navi_tabs_4_pane_srt

0x2a27,	// (0x000382c5) tabs_2_active_pane_srt_ParamLimits

0x2a27,	// (0x000382c5) tabs_2_active_pane_srt

0x2a37,	// (0x000382d5) tabs_2_passive_pane_srt_ParamLimits

0x2a37,	// (0x000382d5) tabs_2_passive_pane_srt

0xd275,	// (0x00042b13) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd275,	// (0x00042b13) bg_passive_tab_pane_cp1_srt

0xe491,	// (0x00043d2f) bg_passive_tab_pane_g1_cp1_srt

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp1_srt

0xe49a,	// (0x00043d38) bg_passive_tab_pane_g3_cp1_srt

0xbac6,	// (0x00041364) bg_active_tab_pane_cp1_srt_ParamLimits

0xbac6,	// (0x00041364) bg_active_tab_pane_cp1_srt

0xe4a3,	// (0x00043d41) tabs_2_active_pane_srt_g1

0xa7ed,	// (0x0004008b) tabs_2_active_pane_srt_t1_ParamLimits

0xa7ed,	// (0x0004008b) tabs_2_active_pane_srt_t1

0xe491,	// (0x00043d2f) bg_active_tab_pane_g1_cp1_srt

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp1_srt

0xe49a,	// (0x00043d38) bg_active_tab_pane_g3_cp1_srt

0x29f4,	// (0x00038292) tabs_3_active_pane_srt_ParamLimits

0x29f4,	// (0x00038292) tabs_3_active_pane_srt

0x2a05,	// (0x000382a3) tabs_3_passive_pane_cp_srt_ParamLimits

0x2a05,	// (0x000382a3) tabs_3_passive_pane_cp_srt

0x2a16,	// (0x000382b4) tabs_3_passive_pane_srt_ParamLimits

0x2a16,	// (0x000382b4) tabs_3_passive_pane_srt

0xd275,	// (0x00042b13) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd275,	// (0x00042b13) bg_passive_tab_pane_cp2_srt

0xcd22,	// (0x000425c0) bg_passive_tab_pane_g1_cp2_srt

0xc8dc,	// (0x0004217a) bg_passive_tab_pane_g2_cp2_srt

0xcd2b,	// (0x000425c9) bg_passive_tab_pane_g3_cp2_srt

0xbac6,	// (0x00041364) bg_active_tab_pane_cp2_srt_ParamLimits

0xbac6,	// (0x00041364) bg_active_tab_pane_cp2_srt

0xe489,	// (0x00043d27) tabs_3_active_pane_srt_g1

0xa7d7,	// (0x00040075) tabs_3_active_pane_srt_t1_ParamLimits

0xa7d7,	// (0x00040075) tabs_3_active_pane_srt_t1

0xcd22,	// (0x000425c0) bg_active_tab_pane_g1_cp2_srt

0xc8dc,	// (0x0004217a) bg_active_tab_pane_g2_cp2_srt

0xcd2b,	// (0x000425c9) bg_active_tab_pane_g3_cp2_srt

0x29ac,	// (0x0003824a) tabs_4_active_pane_srt_ParamLimits

0x29ac,	// (0x0003824a) tabs_4_active_pane_srt

0x29be,	// (0x0003825c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x29be,	// (0x0003825c) tabs_4_passive_pane_cp2_srt

0xce4f,	// (0x000426ed) aid_size_cell_toolbar

0xda16,	// (0x000432b4) main_idle_act_pane_ParamLimits

0xcf11,	// (0x000427af) popup_large_graphic_colour_window_ParamLimits

0x9f0b,	// (0x0003f7a9) popup_toolbar_window_ParamLimits

0x9f0b,	// (0x0003f7a9) popup_toolbar_window

0xe3b0,	// (0x00043c4e) list_single_graphic_2heading_pane_ParamLimits

0xe3b0,	// (0x00043c4e) list_single_graphic_2heading_pane

0xc4ff,	// (0x00041d9d) aid_size_cell_apps_grid_lsc_pane

0xc511,	// (0x00041daf) aid_size_cell_apps_grid_prt_pane

0xc355,	// (0x00041bf3) bg_wml_button_pane_cp1_ParamLimits

0xc355,	// (0x00041bf3) bg_wml_button_pane_cp1

0xa3f9,	// (0x0003fc97) form_midp_field_text_pane_t1_ParamLimits

0xd275,	// (0x00042b13) input_focus_pane_cp050_ParamLimits

0xd3bd,	// (0x00042c5b) list_midp_form_text_pane_ParamLimits

0xd39a,	// (0x00042c38) input_focus_pane_cp051_ParamLimits

0xd3ae,	// (0x00042c4c) list_midp_choice_pane_ParamLimits

0xa38a,	// (0x0003fc28) list_single_2graphic_pane_cp3_ParamLimits

0xa38a,	// (0x0003fc28) list_single_2graphic_pane_cp3

0xa3a0,	// (0x0003fc3e) list_single_midp_graphic_pane_ParamLimits

0xa3a0,	// (0x0003fc3e) list_single_midp_graphic_pane

0x0d82,	// (0x00036620) list_single_graphic_2heading_pane_g1_ParamLimits

0x0d82,	// (0x00036620) list_single_graphic_2heading_pane_g1

0x0d8e,	// (0x0003662c) list_single_graphic_2heading_pane_g4_ParamLimits

0x0d8e,	// (0x0003662c) list_single_graphic_2heading_pane_g4

0x0d9a,	// (0x00036638) list_single_graphic_2heading_pane_g5_ParamLimits

0x0d9a,	// (0x00036638) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0004506b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0004506b) list_single_graphic_2heading_pane_g

0x0da6,	// (0x00036644) list_single_graphic_2heading_pane_t1_ParamLimits

0x0da6,	// (0x00036644) list_single_graphic_2heading_pane_t1

0x0dba,	// (0x00036658) list_single_graphic_2heading_pane_t2_ParamLimits

0x0dba,	// (0x00036658) list_single_graphic_2heading_pane_t2

0x0dd4,	// (0x00036672) list_single_graphic_2heading_pane_t3_ParamLimits

0x0dd4,	// (0x00036672) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00045072) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00045072) list_single_graphic_2heading_pane_t

0xd0b5,	// (0x00042953) bg_popup_sub_pane_cp2

0xd0df,	// (0x0004297d) grid_toobar_pane

0x2596,	// (0x00037e34) cell_toolbar_pane_ParamLimits

0x2596,	// (0x00037e34) cell_toolbar_pane

0xd129,	// (0x000429c7) cell_toolbar_pane_g1_ParamLimits

0xd129,	// (0x000429c7) cell_toolbar_pane_g1

0xd13d,	// (0x000429db) cell_toolbar_pane_g2_ParamLimits

0xd13d,	// (0x000429db) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x00045080) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x00045080) cell_toolbar_pane_g

0xd15f,	// (0x000429fd) grid_highlight_pane_cp2_ParamLimits

0xd15f,	// (0x000429fd) grid_highlight_pane_cp2

0xd179,	// (0x00042a17) toolbar_button_pane

0xd185,	// (0x00042a23) toolbar_button_pane_g1

0xd18d,	// (0x00042a2b) toolbar_button_pane_g2

0xd195,	// (0x00042a33) toolbar_button_pane_g3

0xd19d,	// (0x00042a3b) toolbar_button_pane_g4

0xd1a5,	// (0x00042a43) toolbar_button_pane_g5

0xd1ad,	// (0x00042a4b) toolbar_button_pane_g6

0xd1b5,	// (0x00042a53) toolbar_button_pane_g7

0xd1bd,	// (0x00042a5b) toolbar_button_pane_g8

0xd1c5,	// (0x00042a63) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00045085) toolbar_button_pane_g

0x25ce,	// (0x00037e6c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x25ce,	// (0x00037e6c) list_single_2graphic_pane_g1_cp3

0x8b42,	// (0x0003e3e0) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8b42,	// (0x0003e3e0) list_single_2graphic_pane_g2_cp3

0xca5f,	// (0x000422fd) list_single_2graphic_pane_g3_cp3

0x25eb,	// (0x00037e89) list_single_2graphic_pane_g4_cp3_ParamLimits

0x25eb,	// (0x00037e89) list_single_2graphic_pane_g4_cp3

0x25f7,	// (0x00037e95) list_single_2graphic_pane_t1_cp3_ParamLimits

0x25f7,	// (0x00037e95) list_single_2graphic_pane_t1_cp3

0xca53,	// (0x000422f1) list_single_midp_graphic_pane_g2_ParamLimits

0xca53,	// (0x000422f1) list_single_midp_graphic_pane_g2

0x0d6a,	// (0x00036608) aid_zoom_text_primary

0x0d72,	// (0x00036610) aid_zoom_text_secondary

0xcddf,	// (0x0004267d) status_small_pane_g7_ParamLimits

0xcddf,	// (0x0004267d) status_small_pane_g7

0xce02,	// (0x000426a0) status_small_pane_t1_ParamLimits

0x9200,	// (0x0003ea9e) title_pane_g2

0x0003,

0xf566,	// (0x00044e04) title_pane_g

0x948b,	// (0x0003ed29) aid_size_cell_colour_1_pane_ParamLimits

0x948b,	// (0x0003ed29) aid_size_cell_colour_1_pane

0x949f,	// (0x0003ed3d) aid_size_cell_colour_2_pane_ParamLimits

0x949f,	// (0x0003ed3d) aid_size_cell_colour_2_pane

0x94b3,	// (0x0003ed51) aid_size_cell_colour_3_pane_ParamLimits

0x94b3,	// (0x0003ed51) aid_size_cell_colour_3_pane

0x94c7,	// (0x0003ed65) aid_size_cell_colour_4_pane_ParamLimits

0x94c7,	// (0x0003ed65) aid_size_cell_colour_4_pane

0x1d8b,	// (0x00037629) title_pane_stacon_g1_ParamLimits

0x1d8b,	// (0x00037629) title_pane_stacon_g1

0xd758,	// (0x00042ff6) popup_note_wait_window_g3_ParamLimits

0xd758,	// (0x00042ff6) popup_note_wait_window_g3

0xd7ce,	// (0x0004306c) popup_note_wait_window_t5_ParamLimits

0xd7ce,	// (0x0004306c) popup_note_wait_window_t5

0xba78,	// (0x00041316) main_feb_china_hwr_fs_writing_pane

0x9933,	// (0x0003f1d1) popup_feb_china_hwr_fs_window_ParamLimits

0x9933,	// (0x0003f1d1) popup_feb_china_hwr_fs_window

0x8b53,	// (0x0003e3f1) aid_size_cell_hwr_fs_ParamLimits

0x8b53,	// (0x0003e3f1) aid_size_cell_hwr_fs

0xd275,	// (0x00042b13) bg_popup_sub_pane_cp3_ParamLimits

0xd275,	// (0x00042b13) bg_popup_sub_pane_cp3

0x8b68,	// (0x0003e406) grid_hwr_fs_pane_ParamLimits

0x8b68,	// (0x0003e406) grid_hwr_fs_pane

0x2654,	// (0x00037ef2) linegrid_hwr_fs_pane_ParamLimits

0x2654,	// (0x00037ef2) linegrid_hwr_fs_pane

0x8b80,	// (0x0003e41e) cell_hwr_fs_pane_ParamLimits

0x8b80,	// (0x0003e41e) cell_hwr_fs_pane

0xd281,	// (0x00042b1f) linegrid_hwr_fs_pane_g1_ParamLimits

0xd281,	// (0x00042b1f) linegrid_hwr_fs_pane_g1

0xa35e,	// (0x0003fbfc) linegrid_hwr_fs_pane_g2_ParamLimits

0xa35e,	// (0x0003fbfc) linegrid_hwr_fs_pane_g2

0xd28d,	// (0x00042b2b) linegrid_hwr_fs_pane_g3_ParamLimits

0xd28d,	// (0x00042b2b) linegrid_hwr_fs_pane_g3

0x2686,	// (0x00037f24) linegrid_hwr_fs_pane_g4_ParamLimits

0x2686,	// (0x00037f24) linegrid_hwr_fs_pane_g4

0x26a0,	// (0x00037f3e) linegrid_hwr_fs_pane_g5_ParamLimits

0x26a0,	// (0x00037f3e) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x000450ab) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x000450ab) linegrid_hwr_fs_pane_g

0xd299,	// (0x00042b37) cell_hwr_fs_pane_g1_ParamLimits

0xd299,	// (0x00042b37) cell_hwr_fs_pane_g1

0xd083,	// (0x00042921) cell_hwr_fs_pane_g2_ParamLimits

0xd083,	// (0x00042921) cell_hwr_fs_pane_g2

0xa370,	// (0x0003fc0e) cell_hwr_fs_pane_g3_ParamLimits

0xa370,	// (0x0003fc0e) cell_hwr_fs_pane_g3

0xa37d,	// (0x0003fc1b) cell_hwr_fs_pane_g4_ParamLimits

0xa37d,	// (0x0003fc1b) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x000450b6) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x000450b6) cell_hwr_fs_pane_g

0x8ba6,	// (0x0003e444) cell_hwr_fs_pane_t1

0xba78,	// (0x00041316) grid_highlight_pane_cp6

0xba78,	// (0x00041316) main_idle_act2_pane

0xc304,	// (0x00041ba2) aid_inside_area_popup_secondary

0xa47d,	// (0x0003fd1b) aid_inside_area_window_primary_ParamLimits

0xa47d,	// (0x0003fd1b) aid_inside_area_window_primary

0xe5cc,	// (0x00043e6a) ai2_news_ticker_pane

0xe5d4,	// (0x00043e72) aid_size_cell_ai1_link_ParamLimits

0xe5d4,	// (0x00043e72) aid_size_cell_ai1_link

0xe5ee,	// (0x00043e8c) popup_ai2_data_window_ParamLimits

0xe5ee,	// (0x00043e8c) popup_ai2_data_window

0xe602,	// (0x00043ea0) popup_ai2_link_window_ParamLimits

0xe602,	// (0x00043ea0) popup_ai2_link_window

0xd275,	// (0x00042b13) bg_popup_sub_pane_cp4_ParamLimits

0xd275,	// (0x00042b13) bg_popup_sub_pane_cp4

0xe616,	// (0x00043eb4) grid_ai2_link_pane_ParamLimits

0xe616,	// (0x00043eb4) grid_ai2_link_pane

0xe62d,	// (0x00043ecb) popup_ai2_link_window_g1_ParamLimits

0xe62d,	// (0x00043ecb) popup_ai2_link_window_g1

0xe639,	// (0x00043ed7) popup_ai2_link_window_g2_ParamLimits

0xe639,	// (0x00043ed7) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x00045282) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x00045282) popup_ai2_link_window_g

0xe648,	// (0x00043ee6) ai2_mp_button_pane

0xe650,	// (0x00043eee) ai2_mp_volume_pane

0xd39a,	// (0x00042c38) bg_popup_sub_pane_cp5_ParamLimits

0xd39a,	// (0x00042c38) bg_popup_sub_pane_cp5

0xe658,	// (0x00043ef6) heading_ai2_gene_pane_ParamLimits

0xe658,	// (0x00043ef6) heading_ai2_gene_pane

0xe664,	// (0x00043f02) list_ai2_gene_pane_ParamLimits

0xe664,	// (0x00043f02) list_ai2_gene_pane

0xe6ac,	// (0x00043f4a) cell_ai2_link_pane_ParamLimits

0xe6ac,	// (0x00043f4a) cell_ai2_link_pane

0xe6c2,	// (0x00043f60) cell_ai2_link_pane_g1

0xba78,	// (0x00041316) grid_highlight_pane_cp7

0x2a64,	// (0x00038302) ai2_mp_volume_pane_g1

0xe793,	// (0x00044031) ai2_mp_volume_pane_g2

0xe708,	// (0x00043fa6) list_ai2_gene_pane_t1

0xe79b,	// (0x00044039) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0004529b) ai2_mp_volume_pane_g

0x2a6c,	// (0x0003830a) volume_small_pane_cp3

0xe7a3,	// (0x00044041) aid_size_cell_ai2_button

0xe7ab,	// (0x00044049) grid_ai2_button_pane

0xe7b4,	// (0x00044052) cell_ai2_button_pane_ParamLimits

0xe7b4,	// (0x00044052) cell_ai2_button_pane

0xba6e,	// (0x0004130c) cell_ai2_button_pane_g1

0xba78,	// (0x00041316) grid_highlight_pane_cp8

0xe753,	// (0x00043ff1) ai2_gene_pane_t1_ParamLimits

0xe753,	// (0x00043ff1) ai2_gene_pane_t1

0x98c5,	// (0x0003f163) aid_height_parent_landscape

0xa5b5,	// (0x0003fe53) aid_height_set_list

0xda16,	// (0x000432b4) aid_size_parent

0xe433,	// (0x00043cd1) aid_size_cell_graphic_pane_ParamLimits

0xe674,	// (0x00043f12) popup_ai2_data_window_g1_ParamLimits

0xe674,	// (0x00043f12) popup_ai2_data_window_g1

0xe680,	// (0x00043f1e) ai2_news_ticker_pane_g1

0xe688,	// (0x00043f26) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x00045287) ai2_news_ticker_pane_g

0xe690,	// (0x00043f2e) ai2_news_ticker_pane_t1

0xe69e,	// (0x00043f3c) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0004528c) ai2_news_ticker_pane_t

0xe6cb,	// (0x00043f69) heading_ai2_gene_pane_g1

0xe6d3,	// (0x00043f71) heading_ai2_gene_pane_t1_ParamLimits

0xe6d3,	// (0x00043f71) heading_ai2_gene_pane_t1

0xe6e8,	// (0x00043f86) list_highlight_pane_cp6

0xe6f0,	// (0x00043f8e) ai2_gene_pane_ParamLimits

0xe6f0,	// (0x00043f8e) ai2_gene_pane

0xe716,	// (0x00043fb4) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x00045291) list_ai2_gene_pane_t

0xe724,	// (0x00043fc2) list_highlight_pane_cp8_ParamLimits

0xe724,	// (0x00043fc2) list_highlight_pane_cp8

0xe735,	// (0x00043fd3) ai2_gene_pane_g1_ParamLimits

0xe735,	// (0x00043fd3) ai2_gene_pane_g1

0xe747,	// (0x00043fe5) ai2_gene_pane_g2_ParamLimits

0xe747,	// (0x00043fe5) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x00045296) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x00045296) ai2_gene_pane_g

0xc194,	// (0x00041a32) scroll_pane_cp12

0x8af3,	// (0x0003e391) control_pane_t3_ParamLimits

0x8af3,	// (0x0003e391) control_pane_t3

0xcdf3,	// (0x00042691) status_small_pane_g8_ParamLimits

0xcdf3,	// (0x00042691) status_small_pane_g8

0x99c6,	// (0x0003f264) popup_find_window_ParamLimits

0x9c41,	// (0x0003f4df) popup_note_image_window_ParamLimits

0x0dec,	// (0x0003668a) list_double2_graphic_pane_vc_g1_ParamLimits

0x0dec,	// (0x0003668a) list_double2_graphic_pane_vc_g1

0x1c00,	// (0x0003749e) list_double2_graphic_pane_vc_g2_ParamLimits

0x1c00,	// (0x0003749e) list_double2_graphic_pane_vc_g2

0x1c0c,	// (0x000374aa) list_double2_graphic_pane_vc_g3_ParamLimits

0x1c0c,	// (0x000374aa) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00045079) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00045079) list_double2_graphic_pane_vc_g

0x0df8,	// (0x00036696) list_double2_graphic_pane_vc_t1_ParamLimits

0x0df8,	// (0x00036696) list_double2_graphic_pane_vc_t1

0x1c00,	// (0x0003749e) list_single_heading_pane_vc_g1_ParamLimits

0x1c00,	// (0x0003749e) list_single_heading_pane_vc_g1

0x1c0c,	// (0x000374aa) list_single_heading_pane_vc_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_single_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00044e88) list_single_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00044e88) list_single_heading_pane_vc_g

0x0e0e,	// (0x000366ac) list_single_heading_pane_vc_t1_ParamLimits

0x0e0e,	// (0x000366ac) list_single_heading_pane_vc_t1

0x0e24,	// (0x000366c2) list_single_heading_pane_vc_t2_ParamLimits

0x0e24,	// (0x000366c2) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0004509a) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0004509a) list_single_heading_pane_vc_t

0xd1cd,	// (0x00042a6b) list_setting_number_pane_vc_g1_ParamLimits

0xd1cd,	// (0x00042a6b) list_setting_number_pane_vc_g1

0xd1d9,	// (0x00042a77) list_setting_number_pane_vc_g2_ParamLimits

0xd1d9,	// (0x00042a77) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0004509f) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0004509f) list_setting_number_pane_vc_g

0xd1e5,	// (0x00042a83) list_setting_number_pane_vc_t1_ParamLimits

0xd1e5,	// (0x00042a83) list_setting_number_pane_vc_t1

0xd1f9,	// (0x00042a97) list_setting_number_pane_vc_t2_ParamLimits

0xd1f9,	// (0x00042a97) list_setting_number_pane_vc_t2

0xd213,	// (0x00042ab1) list_setting_number_pane_vc_t3_ParamLimits

0xd213,	// (0x00042ab1) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x000450a4) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x000450a4) list_setting_number_pane_vc_t

0xd239,	// (0x00042ad7) set_value_pane_vc_ParamLimits

0xd239,	// (0x00042ad7) set_value_pane_vc

0xe3b0,	// (0x00043c4e) list_double2_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double2_graphic_pane_vc

0xe3b0,	// (0x00043c4e) list_double2_large_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double2_large_graphic_pane_vc

0xe3b0,	// (0x00043c4e) list_double2_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double2_pane_vc

0xe3b0,	// (0x00043c4e) list_double_graphic_heading_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double_graphic_heading_pane_vc

0xe3b0,	// (0x00043c4e) list_double_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double_graphic_pane_vc

0xe3b0,	// (0x00043c4e) list_double_heading_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double_heading_pane_vc

0xe3b0,	// (0x00043c4e) list_double_large_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double_large_graphic_pane_vc

0xe3b0,	// (0x00043c4e) list_double_number_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double_number_pane_vc

0xe3b0,	// (0x00043c4e) list_double_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double_pane_vc

0xe3b0,	// (0x00043c4e) list_double_time_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_double_time_pane_vc

0xe3b0,	// (0x00043c4e) list_setting_number_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_setting_number_pane_vc

0xe3b0,	// (0x00043c4e) list_setting_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_setting_pane_vc

0xe3b0,	// (0x00043c4e) list_single_graphic_heading_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_single_graphic_heading_pane_vc

0xe3b0,	// (0x00043c4e) list_single_heading_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_single_heading_pane_vc

0xe3b0,	// (0x00043c4e) list_single_number_heading_pane_vc_ParamLimits

0xe3b0,	// (0x00043c4e) list_single_number_heading_pane_vc

0x0dec,	// (0x0003668a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0dec,	// (0x0003668a) list_double_graphic_heading_pane_vc_g1

0x1c00,	// (0x0003749e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1c00,	// (0x0003749e) list_double_graphic_heading_pane_vc_g2

0x1c0c,	// (0x000374aa) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1c0c,	// (0x000374aa) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x00045079) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00045079) list_double_graphic_heading_pane_vc_g

0x0f2b,	// (0x000367c9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0f2b,	// (0x000367c9) list_double_graphic_heading_pane_vc_t1

0x0e0e,	// (0x000366ac) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0e0e,	// (0x000366ac) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa04,	// (0x000452a2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa04,	// (0x000452a2) list_double_graphic_heading_pane_vc_t

0xd1cd,	// (0x00042a6b) list_setting_pane_vc_g1_ParamLimits

0xd1cd,	// (0x00042a6b) list_setting_pane_vc_g1

0xd1d9,	// (0x00042a77) list_setting_pane_vc_g2_ParamLimits

0xd1d9,	// (0x00042a77) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0004509f) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0004509f) list_setting_pane_vc_g

0xe9aa,	// (0x00044248) list_setting_pane_vc_t1_ParamLimits

0xe9aa,	// (0x00044248) list_setting_pane_vc_t1

0xe9c4,	// (0x00044262) list_setting_pane_vc_t2_ParamLimits

0xe9c4,	// (0x00044262) list_setting_pane_vc_t2

0x0001,

0xfa47,	// (0x000452e5) list_setting_pane_vc_t_ParamLimits

0xfa47,	// (0x000452e5) list_setting_pane_vc_t

0xd239,	// (0x00042ad7) set_value_pane_cp_vc_ParamLimits

0xd239,	// (0x00042ad7) set_value_pane_cp_vc

0x1c00,	// (0x0003749e) list_single_number_heading_pane_vc_g1_ParamLimits

0x1c00,	// (0x0003749e) list_single_number_heading_pane_vc_g1

0x1c0c,	// (0x000374aa) list_single_number_heading_pane_vc_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00044e88) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00044e88) list_single_number_heading_pane_vc_g

0x0e0e,	// (0x000366ac) list_single_number_heading_pane_vc_t1_ParamLimits

0x0e0e,	// (0x000366ac) list_single_number_heading_pane_vc_t1

0x0f3f,	// (0x000367dd) list_single_number_heading_pane_vc_t2_ParamLimits

0x0f3f,	// (0x000367dd) list_single_number_heading_pane_vc_t2

0x0f53,	// (0x000367f1) list_single_number_heading_pane_vc_t3_ParamLimits

0x0f53,	// (0x000367f1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa4c,	// (0x000452ea) list_single_number_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x000452ea) list_single_number_heading_pane_vc_t

0x0dec,	// (0x0003668a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0dec,	// (0x0003668a) list_single_graphic_heading_pane_vc_g1

0x1c00,	// (0x0003749e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1c00,	// (0x0003749e) list_single_graphic_heading_pane_vc_g4

0x1c0c,	// (0x000374aa) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1c0c,	// (0x000374aa) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00045079) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00045079) list_single_graphic_heading_pane_vc_g

0x0e0e,	// (0x000366ac) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0e0e,	// (0x000366ac) list_single_graphic_heading_pane_vc_t1

0x0f65,	// (0x00036803) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0f65,	// (0x00036803) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa53,	// (0x000452f1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa53,	// (0x000452f1) list_single_graphic_heading_pane_vc_t

0x1c00,	// (0x0003749e) list_double2_pane_vc_g1_ParamLimits

0x1c00,	// (0x0003749e) list_double2_pane_vc_g1

0x1c0c,	// (0x000374aa) list_double2_pane_vc_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_double2_pane_vc_g2

0x0001,

0xf5ea,	// (0x00044e88) list_double2_pane_vc_g_ParamLimits

0xf5ea,	// (0x00044e88) list_double2_pane_vc_g

0x0f79,	// (0x00036817) list_double2_pane_vc_t1_ParamLimits

0x0f79,	// (0x00036817) list_double2_pane_vc_t1

0x2ac6,	// (0x00038364) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2ac6,	// (0x00038364) list_double2_large_graphic_pane_vc_g1

0x1c00,	// (0x0003749e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1c00,	// (0x0003749e) list_double2_large_graphic_pane_vc_g2

0x1c0c,	// (0x000374aa) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1c0c,	// (0x000374aa) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf602,	// (0x00044ea0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf602,	// (0x00044ea0) list_double2_large_graphic_pane_vc_g

0x0f8f,	// (0x0003682d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0f8f,	// (0x0003682d) list_double2_large_graphic_pane_vc_t1

0x0fa5,	// (0x00036843) list_double_time_pane_vc_g1_ParamLimits

0x0fa5,	// (0x00036843) list_double_time_pane_vc_g1

0x0fb1,	// (0x0003684f) list_double_time_pane_vc_g2_ParamLimits

0x0fb1,	// (0x0003684f) list_double_time_pane_vc_g2

0x0001,

0xfa58,	// (0x000452f6) list_double_time_pane_vc_g_ParamLimits

0xfa58,	// (0x000452f6) list_double_time_pane_vc_g

0x0fbd,	// (0x0003685b) list_double_time_pane_vc_t1_ParamLimits

0x0fbd,	// (0x0003685b) list_double_time_pane_vc_t1

0x0fd6,	// (0x00036874) list_double_time_pane_vc_t2_ParamLimits

0x0fd6,	// (0x00036874) list_double_time_pane_vc_t2

0x1016,	// (0x000368b4) list_double_time_pane_vc_t3_ParamLimits

0x1016,	// (0x000368b4) list_double_time_pane_vc_t3

0x102e,	// (0x000368cc) list_double_time_pane_vc_t4_ParamLimits

0x102e,	// (0x000368cc) list_double_time_pane_vc_t4

0x0003,

0xfa5d,	// (0x000452fb) list_double_time_pane_vc_t_ParamLimits

0xfa5d,	// (0x000452fb) list_double_time_pane_vc_t

0x1c00,	// (0x0003749e) list_double_pane_vc_g1_ParamLimits

0x1c00,	// (0x0003749e) list_double_pane_vc_g1

0x1c0c,	// (0x000374aa) list_double_pane_vc_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_double_pane_vc_g2

0x0001,

0xf5ea,	// (0x00044e88) list_double_pane_vc_g_ParamLimits

0xf5ea,	// (0x00044e88) list_double_pane_vc_g

0x1042,	// (0x000368e0) list_double_pane_vc_t1_ParamLimits

0x1042,	// (0x000368e0) list_double_pane_vc_t1

0x1054,	// (0x000368f2) list_double_pane_vc_t2_ParamLimits

0x1054,	// (0x000368f2) list_double_pane_vc_t2

0x0001,

0xfa66,	// (0x00045304) list_double_pane_vc_t_ParamLimits

0xfa66,	// (0x00045304) list_double_pane_vc_t

0x1c00,	// (0x0003749e) list_double_number_pane_vc_g1_ParamLimits

0x1c00,	// (0x0003749e) list_double_number_pane_vc_g1

0x1c0c,	// (0x000374aa) list_double_number_pane_vc_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_double_number_pane_vc_g2

0x0001,

0xf5ea,	// (0x00044e88) list_double_number_pane_vc_g_ParamLimits

0xf5ea,	// (0x00044e88) list_double_number_pane_vc_g

0x106c,	// (0x0003690a) list_double_number_pane_vc_t1_ParamLimits

0x106c,	// (0x0003690a) list_double_number_pane_vc_t1

0x1080,	// (0x0003691e) list_double_number_pane_vc_t2_ParamLimits

0x1080,	// (0x0003691e) list_double_number_pane_vc_t2

0x1054,	// (0x000368f2) list_double_number_pane_vc_t3_ParamLimits

0x1054,	// (0x000368f2) list_double_number_pane_vc_t3

0x0002,

0xfa6b,	// (0x00045309) list_double_number_pane_vc_t_ParamLimits

0xfa6b,	// (0x00045309) list_double_number_pane_vc_t

0x2ad2,	// (0x00038370) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2ad2,	// (0x00038370) list_double_large_graphic_pane_vc_g1

0x2ade,	// (0x0003837c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2ade,	// (0x0003837c) list_double_large_graphic_pane_vc_g2

0x1c0c,	// (0x000374aa) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1c0c,	// (0x000374aa) list_double_large_graphic_pane_vc_g3

0x1092,	// (0x00036930) list_double_large_graphic_pane_vc_g4_ParamLimits

0x1092,	// (0x00036930) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa72,	// (0x00045310) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x00045310) list_double_large_graphic_pane_vc_g

0x109e,	// (0x0003693c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x109e,	// (0x0003693c) list_double_large_graphic_pane_vc_t1

0x10b0,	// (0x0003694e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x10b0,	// (0x0003694e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7b,	// (0x00045319) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7b,	// (0x00045319) list_double_large_graphic_pane_vc_t

0x1c00,	// (0x0003749e) list_double_heading_pane_vc_g1_ParamLimits

0x1c00,	// (0x0003749e) list_double_heading_pane_vc_g1

0x1c0c,	// (0x000374aa) list_double_heading_pane_vc_g2_ParamLimits

0x1c0c,	// (0x000374aa) list_double_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00044e88) list_double_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00044e88) list_double_heading_pane_vc_g

0x10c9,	// (0x00036967) list_double_heading_pane_vc_t1_ParamLimits

0x10c9,	// (0x00036967) list_double_heading_pane_vc_t1

0x0e0e,	// (0x000366ac) list_double_heading_pane_vc_t2_ParamLimits

0x0e0e,	// (0x000366ac) list_double_heading_pane_vc_t2

0x0001,

0xfa80,	// (0x0004531e) list_double_heading_pane_vc_t_ParamLimits

0xfa80,	// (0x0004531e) list_double_heading_pane_vc_t

0x0dec,	// (0x0003668a) list_double_graphic_pane_vc_g1_ParamLimits

0x0dec,	// (0x0003668a) list_double_graphic_pane_vc_g1

0x10dd,	// (0x0003697b) list_double_graphic_pane_vc_g2_ParamLimits

0x10dd,	// (0x0003697b) list_double_graphic_pane_vc_g2

0x10ec,	// (0x0003698a) list_double_graphic_pane_vc_g3_ParamLimits

0x10ec,	// (0x0003698a) list_double_graphic_pane_vc_g3

0x0002,

0xfa85,	// (0x00045323) list_double_graphic_pane_vc_g_ParamLimits

0xfa85,	// (0x00045323) list_double_graphic_pane_vc_g

0x10f8,	// (0x00036996) list_double_graphic_pane_vc_t1_ParamLimits

0x10f8,	// (0x00036996) list_double_graphic_pane_vc_t1

0x1054,	// (0x000368f2) list_double_graphic_pane_vc_t2_ParamLimits

0x1054,	// (0x000368f2) list_double_graphic_pane_vc_t2

0x0001,

0xfa8c,	// (0x0004532a) list_double_graphic_pane_vc_t_ParamLimits

0xfa8c,	// (0x0004532a) list_double_graphic_pane_vc_t

0x14ba,	// (0x00036d58) aid_size_cell_fastswap

0x87b1,	// (0x0003e04f) aid_size_cell_touch_ParamLimits

0x87b1,	// (0x0003e04f) aid_size_cell_touch

0x171d,	// (0x00036fbb) popup_fast_swap_wide_window_ParamLimits

0x171d,	// (0x00036fbb) popup_fast_swap_wide_window

0x88fc,	// (0x0003e19a) touch_pane_ParamLimits

0x88fc,	// (0x0003e19a) touch_pane

0xc1f6,	// (0x00041a94) button_value_adjust_pane_cp2

0x0aa5,	// (0x00036343) button_value_adjust_pane_cp4

0x0ac5,	// (0x00036363) form_field_data_pane_cp2

0x83c7,	// (0x0003dc65) form_field_data_wide_pane_cp2

0xc536,	// (0x00041dd4) bg_scroll_pane_ParamLimits

0x1f86,	// (0x00037824) scroll_handle_pane_ParamLimits

0x1f9a,	// (0x00037838) scroll_sc2_down_pane_ParamLimits

0x1f9a,	// (0x00037838) scroll_sc2_down_pane

0xc567,	// (0x00041e05) scroll_sc2_up_pane_ParamLimits

0xc567,	// (0x00041e05) scroll_sc2_up_pane

0xa924,	// (0x000401c2) grid_wheel_folder_pane_g1_ParamLimits

0xa924,	// (0x000401c2) grid_wheel_folder_pane_g1

0x2254,	// (0x00037af2) clock_nsta_pane_cp2_ParamLimits

0x2254,	// (0x00037af2) clock_nsta_pane_cp2

0xc355,	// (0x00041bf3) listscroll_midp_pane_ParamLimits

0x97f9,	// (0x0003f097) midp_canvas_pane

0xce47,	// (0x000426e5) nsta_clock_indic_pane

0xce77,	// (0x00042715) listscroll_form_pane_vc

0xce7f,	// (0x0004271d) listscroll_set_pane_vc_ParamLimits

0xce7f,	// (0x0004271d) listscroll_set_pane_vc

0xa06f,	// (0x0003f90d) clock_nsta_pane

0xa099,	// (0x0003f937) indicator_nsta_pane

0xd0b5,	// (0x00042953) bg_popup_sub_pane_cp2_ParamLimits

0xd0c9,	// (0x00042967) find_pane_cp2_ParamLimits

0xd0c9,	// (0x00042967) find_pane_cp2

0xd0df,	// (0x0004297d) grid_toobar_pane_ParamLimits

0xd249,	// (0x00042ae7) list_form_gen_pane_vc_ParamLimits

0xd249,	// (0x00042ae7) list_form_gen_pane_vc

0xd25f,	// (0x00042afd) scroll_pane_cp8_vc_ParamLimits

0xd25f,	// (0x00042afd) scroll_pane_cp8_vc

0xd2af,	// (0x00042b4d) data_form_wide_pane_vc_ParamLimits

0xd2af,	// (0x00042b4d) data_form_wide_pane_vc

0xd2bb,	// (0x00042b59) form_field_data_wide_pane_vc_g1

0xd2c3,	// (0x00042b61) form_field_data_wide_pane_vc_t1_ParamLimits

0xd2c3,	// (0x00042b61) form_field_data_wide_pane_vc_t1

0xc20a,	// (0x00041aa8) input_focus_pane_cp6_vc_ParamLimits

0xc20a,	// (0x00041aa8) input_focus_pane_cp6_vc

0xa41d,	// (0x0003fcbb) list_midp_pane_ParamLimits

0xe28f,	// (0x00043b2d) scroll_pane_cp16_ParamLimits

0xe28f,	// (0x00043b2d) scroll_pane_cp16

0xd532,	// (0x00042dd0) button_value_adjust_pane_ParamLimits

0xd532,	// (0x00042dd0) button_value_adjust_pane

0xa5c6,	// (0x0003fe64) button_value_adjust_pane_cp6_ParamLimits

0xa5c6,	// (0x0003fe64) button_value_adjust_pane_cp6

0xa6dc,	// (0x0003ff7a) settings_code_pane_cp_ParamLimits

0xa6dc,	// (0x0003ff7a) settings_code_pane_cp

0xba6e,	// (0x0004130c) cell_touch_pane_g1

0xba6e,	// (0x0004130c) cell_touch_pane_g2

0x0001,

0xf720,	// (0x00044fbe) cell_touch_pane_g

0xa803,	// (0x000400a1) cell_touch_pane_cp_ParamLimits

0xa803,	// (0x000400a1) cell_touch_pane_cp

0xa81f,	// (0x000400bd) cell_touch_pane_ParamLimits

0xa81f,	// (0x000400bd) cell_touch_pane

0xba6e,	// (0x0004130c) scroll_sc2_down_pane_g1

0xba6e,	// (0x0004130c) scroll_sc2_up_pane_g1

0xba78,	// (0x00041316) bg_set_opt_pane_cp4_vc

0xe7c6,	// (0x00044064) list_set_graphic_pane_vc_g1_ParamLimits

0xe7c6,	// (0x00044064) list_set_graphic_pane_vc_g1

0xe7d2,	// (0x00044070) list_set_graphic_pane_vc_g2_ParamLimits

0xe7d2,	// (0x00044070) list_set_graphic_pane_vc_g2

0x0001,

0xfa09,	// (0x000452a7) list_set_graphic_pane_vc_g_ParamLimits

0xfa09,	// (0x000452a7) list_set_graphic_pane_vc_g

0xe7de,	// (0x0004407c) text_primary_small_cp13_vc_ParamLimits

0xe7de,	// (0x0004407c) text_primary_small_cp13_vc

0xe7f6,	// (0x00044094) list_set_graphic_pane_vc_ParamLimits

0xe7f6,	// (0x00044094) list_set_graphic_pane_vc

0xba78,	// (0x00041316) input_focus_pane_cp2_vc

0xba6e,	// (0x0004130c) setting_code_pane_vc_g1

0xe80a,	// (0x000440a8) setting_code_pane_vc_t1

0xe818,	// (0x000440b6) set_text_pane_vc_t1_ParamLimits

0xe818,	// (0x000440b6) set_text_pane_vc_t1

0xba78,	// (0x00041316) input_focus_pane_cp1_vc

0xe837,	// (0x000440d5) list_set_text_pane_vc

0xba6e,	// (0x0004130c) setting_text_pane_vc_g1

0xba78,	// (0x00041316) bg_set_opt_pane_cp2_vc

0xe841,	// (0x000440df) setting_slider_graphic_pane_vc_g1

0xe849,	// (0x000440e7) setting_slider_graphic_pane_vc_t1

0xe857,	// (0x000440f5) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0e,	// (0x000452ac) setting_slider_graphic_pane_vc_t

0xe865,	// (0x00044103) slider_set_pane_cp_vc

0xe86d,	// (0x0004410b) slider_set_pane_vc_g1

0xe876,	// (0x00044114) slider_set_pane_vc_g2

0x0006,

0xfa13,	// (0x000452b1) slider_set_pane_vc_g

0xc265,	// (0x00041b03) set_opt_bg_pane_g1_copy1

0xc26d,	// (0x00041b0b) set_opt_bg_pane_g2_copy1

0xe8a2,	// (0x00044140) set_opt_bg_pane_g3_copy1

0xc27d,	// (0x00041b1b) set_opt_bg_pane_g4_copy1

0xc285,	// (0x00041b23) set_opt_bg_pane_g5_copy1

0xc28d,	// (0x00041b2b) set_opt_bg_pane_g6_copy1

0xe8aa,	// (0x00044148) set_opt_bg_pane_g7_copy1

0xe8b4,	// (0x00044152) set_opt_bg_pane_g8_copy1

0xe8bc,	// (0x0004415a) set_opt_bg_pane_g9_copy1

0xba78,	// (0x00041316) bg_set_opt_pane_cp_vc

0xe8c4,	// (0x00044162) setting_slider_pane_vc_t1

0xe849,	// (0x000440e7) setting_slider_pane_vc_t2

0xe857,	// (0x000440f5) setting_slider_pane_vc_t3

0x0002,

0xfa22,	// (0x000452c0) setting_slider_pane_vc_t

0xe865,	// (0x00044103) slider_set_pane_vc

0x26c4,	// (0x00037f62) volume_set_pane_vc_g1

0x2a75,	// (0x00038313) volume_set_pane_vc_g2

0x2a7e,	// (0x0003831c) volume_set_pane_vc_g3

0x2a87,	// (0x00038325) volume_set_pane_vc_g4

0x2a90,	// (0x0003832e) volume_set_pane_vc_g5

0x2a99,	// (0x00038337) volume_set_pane_vc_g6

0x2aa2,	// (0x00038340) volume_set_pane_vc_g7

0x2aab,	// (0x00038349) volume_set_pane_vc_g8

0x2ab4,	// (0x00038352) volume_set_pane_vc_g9

0x2abd,	// (0x0003835b) volume_set_pane_vc_g10

0x0009,

0xfa29,	// (0x000452c7) volume_set_pane_vc_g

0xe8d3,	// (0x00044171) volume_set_pane_vc

0xe8db,	// (0x00044179) button_value_adjust_pane_cp1_vc

0xe8e5,	// (0x00044183) list_highlight_pane_cp2_vc

0xe8ee,	// (0x0004418c) list_set_pane_vc_ParamLimits

0xe8ee,	// (0x0004418c) list_set_pane_vc

0xe940,	// (0x000441de) main_pane_set_vc_t1_ParamLimits

0xe940,	// (0x000441de) main_pane_set_vc_t1

0xe955,	// (0x000441f3) main_pane_set_vc_t2_ParamLimits

0xe955,	// (0x000441f3) main_pane_set_vc_t2

0xe967,	// (0x00044205) main_pane_set_vc_t3_ParamLimits

0xe967,	// (0x00044205) main_pane_set_vc_t3

0xe979,	// (0x00044217) main_pane_set_vc_t4_ParamLimits

0xe979,	// (0x00044217) main_pane_set_vc_t4

0x0003,

0xfa3e,	// (0x000452dc) main_pane_set_vc_t_ParamLimits

0xfa3e,	// (0x000452dc) main_pane_set_vc_t

0xe98b,	// (0x00044229) setting_code_pane_vc_ParamLimits

0xe98b,	// (0x00044229) setting_code_pane_vc

0xe99a,	// (0x00044238) setting_slider_graphic_pane_vc

0xe99a,	// (0x00044238) setting_slider_pane_vc

0xe99a,	// (0x00044238) setting_text_pane_vc

0xe99a,	// (0x00044238) setting_volume_pane_vc

0xe9a2,	// (0x00044240) scroll_pane_cp121_vc

0xc1e4,	// (0x00041a82) set_content_pane_vc

0xe9da,	// (0x00044278) button_value_adjust_pane_g1

0xe9e3,	// (0x00044281) button_value_adjust_pane_g2

0x0001,

0xfa91,	// (0x0004532f) button_value_adjust_pane_g

0xe9ec,	// (0x0004428a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe9ec,	// (0x0004428a) form_field_slider_wide_pane_vc_t1

0xea00,	// (0x0004429e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xea00,	// (0x0004429e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa96,	// (0x00045334) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x00045334) form_field_slider_wide_pane_vc_t

0xbac6,	// (0x00041364) input_focus_pane_cp10_vc_ParamLimits

0xbac6,	// (0x00041364) input_focus_pane_cp10_vc

0xea12,	// (0x000442b0) slider_cont_pane_cp1_vc_ParamLimits

0xea12,	// (0x000442b0) slider_cont_pane_cp1_vc

0xe86d,	// (0x0004410b) slider_form_pane_g1_cp2

0xe876,	// (0x00044114) slider_form_pane_g2_cp2

0xea2b,	// (0x000442c9) form_field_slider_pane_vc_t3

0xea39,	// (0x000442d7) form_field_slider_pane_vc_t4

0xea47,	// (0x000442e5) slider_form_pane_vc_ParamLimits

0xea47,	// (0x000442e5) slider_form_pane_vc

0xea54,	// (0x000442f2) form_field_slider_pane_vc_t1_ParamLimits

0xea54,	// (0x000442f2) form_field_slider_pane_vc_t1

0xea00,	// (0x0004429e) form_field_slider_pane_vc_t2_ParamLimits

0xea00,	// (0x0004429e) form_field_slider_pane_vc_t2

0x0001,

0xfaa6,	// (0x00045344) form_field_slider_pane_vc_t_ParamLimits

0xfaa6,	// (0x00045344) form_field_slider_pane_vc_t

0xbac6,	// (0x00041364) input_focus_pane_cp9_vc_ParamLimits

0xbac6,	// (0x00041364) input_focus_pane_cp9_vc

0xea70,	// (0x0004430e) slider_cont_pane_vc_ParamLimits

0xea70,	// (0x0004430e) slider_cont_pane_vc

0xea82,	// (0x00044320) list_form_graphic_pane_cp_vc_ParamLimits

0xea82,	// (0x00044320) list_form_graphic_pane_cp_vc

0xd2bb,	// (0x00042b59) form_field_popup_wide_pane_vc_g1

0xea97,	// (0x00044335) form_field_popup_wide_pane_vc_t1_ParamLimits

0xea97,	// (0x00044335) form_field_popup_wide_pane_vc_t1

0xc20a,	// (0x00041aa8) input_focus_pane_cp8_vc_ParamLimits

0xc20a,	// (0x00041aa8) input_focus_pane_cp8_vc

0xeaae,	// (0x0004434c) list_form_wide_pane_vc_ParamLimits

0xeaae,	// (0x0004434c) list_form_wide_pane_vc

0xeaba,	// (0x00044358) list_form_graphic_pane_vc_g1

0xeac2,	// (0x00044360) list_form_graphic_pane_vc_t1_ParamLimits

0xeac2,	// (0x00044360) list_form_graphic_pane_vc_t1

0xbad4,	// (0x00041372) list_highlight_pane_cp5_vc_ParamLimits

0xbad4,	// (0x00041372) list_highlight_pane_cp5_vc

0xeade,	// (0x0004437c) list_form_graphic_pane_vc_ParamLimits

0xeade,	// (0x0004437c) list_form_graphic_pane_vc

0xd2bb,	// (0x00042b59) form_field_popup_pane_vc_g1

0xeaf4,	// (0x00044392) form_field_popup_pane_vc_t1_ParamLimits

0xeaf4,	// (0x00044392) form_field_popup_pane_vc_t1

0xc20a,	// (0x00041aa8) input_focus_pane_cp7_vc_ParamLimits

0xc20a,	// (0x00041aa8) input_focus_pane_cp7_vc

0xeb0b,	// (0x000443a9) list_form_pane_vc_ParamLimits

0xeb0b,	// (0x000443a9) list_form_pane_vc

0xeb17,	// (0x000443b5) data_form_pane_vc_t1_ParamLimits

0xeb17,	// (0x000443b5) data_form_pane_vc_t1

0xc265,	// (0x00041b03) input_focus_pane_vc_g1

0xc26d,	// (0x00041b0b) input_focus_pane_vc_g2

0xc275,	// (0x00041b13) input_focus_pane_vc_g3

0xc27d,	// (0x00041b1b) input_focus_pane_vc_g4

0xc285,	// (0x00041b23) input_focus_pane_vc_g5

0xc28d,	// (0x00041b2b) input_focus_pane_vc_g6

0xc295,	// (0x00041b33) input_focus_pane_vc_g7

0xc29d,	// (0x00041b3b) input_focus_pane_vc_g8

0xc2a5,	// (0x00041b43) input_focus_pane_vc_g9

0xba6e,	// (0x0004130c) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x00044f47) input_focus_pane_vc_g

0xd2af,	// (0x00042b4d) data_form_pane_vc_ParamLimits

0xd2af,	// (0x00042b4d) data_form_pane_vc

0xd2bb,	// (0x00042b59) form_field_data_pane_vc_g1

0xeb32,	// (0x000443d0) form_field_data_pane_vc_t1_ParamLimits

0xeb32,	// (0x000443d0) form_field_data_pane_vc_t1

0xc20a,	// (0x00041aa8) input_focus_pane_vc_ParamLimits

0xc20a,	// (0x00041aa8) input_focus_pane_vc

0xeb4c,	// (0x000443ea) button_value_adjust_pane_cp3_vc

0xeb54,	// (0x000443f2) button_value_adjust_pane_cp5_vc

0xeb5c,	// (0x000443fa) form_field_data_pane_vc_ParamLimits

0xeb5c,	// (0x000443fa) form_field_data_pane_vc

0xeb73,	// (0x00044411) form_field_data_pane_vc_cp2

0xeb7b,	// (0x00044419) form_field_data_wide_pane_vc_ParamLimits

0xeb7b,	// (0x00044419) form_field_data_wide_pane_vc

0xeb91,	// (0x0004442f) form_field_data_wide_pane_vc_cp2

0xeb99,	// (0x00044437) form_field_popup_pane_vc_ParamLimits

0xeb99,	// (0x00044437) form_field_popup_pane_vc

0xebb0,	// (0x0004444e) form_field_popup_wide_pane_vc_ParamLimits

0xebb0,	// (0x0004444e) form_field_popup_wide_pane_vc

0xebc6,	// (0x00044464) form_field_slider_pane_vc_ParamLimits

0xebc6,	// (0x00044464) form_field_slider_pane_vc

0xebd9,	// (0x00044477) form_field_slider_wide_pane_vc_ParamLimits

0xebd9,	// (0x00044477) form_field_slider_wide_pane_vc

0xa83d,	// (0x000400db) grid_touch_1_pane_ParamLimits

0xa83d,	// (0x000400db) grid_touch_1_pane

0xa851,	// (0x000400ef) grid_touch_2_pane_ParamLimits

0xa851,	// (0x000400ef) grid_touch_2_pane

0xebec,	// (0x0004448a) touch_pane_g1_ParamLimits

0xebec,	// (0x0004448a) touch_pane_g1

0xebfa,	// (0x00044498) cell_app_pane_cp_wide_ParamLimits

0xebfa,	// (0x00044498) cell_app_pane_cp_wide

0xec0b,	// (0x000444a9) grid_popup_fast_wide_pane_ParamLimits

0xec0b,	// (0x000444a9) grid_popup_fast_wide_pane

0xec1f,	// (0x000444bd) scroll_pane_cp19_ParamLimits

0xec1f,	// (0x000444bd) scroll_pane_cp19

0xba78,	// (0x00041316) bg_popup_window_pane_cp20

0xec33,	// (0x000444d1) listscroll_popup_fast_wide_pane

0xd11b,	// (0x000429b9) grid_indicator_nsta_pane

0xec3b,	// (0x000444d9) clock_nsta_pane_g1

0xec44,	// (0x000444e2) clock_nsta_pane_t1

0xa87b,	// (0x00040119) cell_indicator_nsta_pane_ParamLimits

0xa87b,	// (0x00040119) cell_indicator_nsta_pane

0xebec,	// (0x0004448a) cell_indicator_nsta_pane_g1

0xa898,	// (0x00040136) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0004534e) cell_indicator_nsta_pane_g

0xec60,	// (0x000444fe) clock_nsta_pane_cp

0xec68,	// (0x00044506) indicator_nsta_pane_cp

0xec71,	// (0x0004450f) nsta_clock_indic_pane_g1

0xbb10,	// (0x000413ae) grid_indicator_pane

0xc659,	// (0x00041ef7) scroll_pane_cp29

0x21a3,	// (0x00037a41) indicator_nsta_pane_cp2_ParamLimits

0x21a3,	// (0x00037a41) indicator_nsta_pane_cp2

0xbad4,	// (0x00041372) main_apps_wheel_pane

0xd3d7,	// (0x00042c75) form_midp_field_text_pane_ParamLimits

0xd504,	// (0x00042da2) scroll_bar_cp050_ParamLimits

0xecda,	// (0x00044578) cell_indicator_pane_ParamLimits

0xecda,	// (0x00044578) cell_indicator_pane

0xecf7,	// (0x00044595) cell_indicator_pane_g1

0xa8ae,	// (0x0004014c) grid_wheel_folder_pane_ParamLimits

0xa8ae,	// (0x0004014c) grid_wheel_folder_pane

0xa8bc,	// (0x0004015a) list_wheel_apps_pane_ParamLimits

0xa8bc,	// (0x0004015a) list_wheel_apps_pane

0xa8ca,	// (0x00040168) main_apps_wheel_pane_g1_ParamLimits

0xa8ca,	// (0x00040168) main_apps_wheel_pane_g1

0xa8d6,	// (0x00040174) main_apps_wheel_pane_g2_ParamLimits

0xa8d6,	// (0x00040174) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0004536a) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0004536a) main_apps_wheel_pane_g

0xa8e4,	// (0x00040182) main_apps_wheel_pane_t1_ParamLimits

0xa8e4,	// (0x00040182) main_apps_wheel_pane_t1

0xa8f8,	// (0x00040196) list_wheel_apps_pane_g1

0xa900,	// (0x0004019e) list_wheel_apps_pane_g2

0xa908,	// (0x000401a6) list_wheel_apps_pane_g3

0xa910,	// (0x000401ae) list_wheel_apps_pane_g4

0xa91a,	// (0x000401b8) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0004536f) list_wheel_apps_pane_g

0xcab1,	// (0x0004234f) navi_icon_text_pane

0x9f63,	// (0x0003f801) aid_fill_nsta

0xed01,	// (0x0004459f) navi_icon_text_pane_g1

0xed0d,	// (0x000445ab) navi_icon_text_pane_t1

0xc94d,	// (0x000421eb) list_set_graphic_pane_t1_ParamLimits

0xc94d,	// (0x000421eb) list_set_graphic_pane_t1

0xdc1e,	// (0x000434bc) popup_midp_note_alarm_window_t6_ParamLimits

0xdc1e,	// (0x000434bc) popup_midp_note_alarm_window_t6

0xdc30,	// (0x000434ce) popup_midp_note_alarm_window_t7_ParamLimits

0xdc30,	// (0x000434ce) popup_midp_note_alarm_window_t7

0xdc42,	// (0x000434e0) popup_midp_note_alarm_window_t8_ParamLimits

0xdc42,	// (0x000434e0) popup_midp_note_alarm_window_t8

0xdc54,	// (0x000434f2) popup_midp_note_alarm_window_t9_ParamLimits

0xdc54,	// (0x000434f2) popup_midp_note_alarm_window_t9

0xdc66,	// (0x00043504) popup_midp_note_alarm_window_t10_ParamLimits

0xdc66,	// (0x00043504) popup_midp_note_alarm_window_t10

0xdc78,	// (0x00043516) popup_midp_note_alarm_window_t11_ParamLimits

0xdc78,	// (0x00043516) popup_midp_note_alarm_window_t11

0xdc8a,	// (0x00043528) scroll_pane_cp17_ParamLimits

0xdc8a,	// (0x00043528) scroll_pane_cp17

0x26c4,	// (0x00037f62) volume_small_pane_cp_g1

0x2aed,	// (0x0003838b) volume_small_pane_cp_g2

0x2af6,	// (0x00038394) volume_small_pane_cp_g3

0x2aff,	// (0x0003839d) volume_small_pane_cp_g4

0x2b08,	// (0x000383a6) volume_small_pane_cp_g5

0x2b11,	// (0x000383af) volume_small_pane_cp_g6

0x2b1a,	// (0x000383b8) volume_small_pane_cp_g7

0x2b23,	// (0x000383c1) volume_small_pane_cp_g8

0x2b2c,	// (0x000383ca) volume_small_pane_cp_g9

0x2b35,	// (0x000383d3) volume_small_pane_cp_g10

0xcc5d,	// (0x000424fb) midp_ticker_pane_g1_ParamLimits

0xcc69,	// (0x00042507) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00045013) midp_ticker_pane_g_ParamLimits

0xcc75,	// (0x00042513) midp_ticker_pane_t1_ParamLimits

0x9f87,	// (0x0003f825) aid_fill_nsta_2

0xd4f0,	// (0x00042d8e) list_form2_midp_pane

0xe37f,	// (0x00043c1d) midp_editing_number_pane_ParamLimits

0xe38e,	// (0x00043c2c) midp_ticker_pane_ParamLimits

0xed1f,	// (0x000445bd) form2_midp_field_pane

0xed27,	// (0x000445c5) scroll_pane_cp51

0xed47,	// (0x000445e5) form2_midp_button_pane_ParamLimits

0xed47,	// (0x000445e5) form2_midp_button_pane

0xed59,	// (0x000445f7) form2_midp_content_pane_ParamLimits

0xed59,	// (0x000445f7) form2_midp_content_pane

0xed73,	// (0x00044611) form2_midp_field_choice_group_pane

0xed7b,	// (0x00044619) form2_midp_field_pane_g1

0xed83,	// (0x00044621) form2_midp_field_pane_g2

0xed8b,	// (0x00044629) form2_midp_field_pane_g3

0xed93,	// (0x00044631) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x00045394) form2_midp_field_pane_g

0xed9b,	// (0x00044639) form2_midp_gauge_slider_pane

0xeda3,	// (0x00044641) form2_midp_gauge_wait_pane

0xedab,	// (0x00044649) form2_midp_image_pane_ParamLimits

0xedab,	// (0x00044649) form2_midp_image_pane

0xedc6,	// (0x00044664) form2_midp_label_pane_ParamLimits

0xedc6,	// (0x00044664) form2_midp_label_pane

0xa94d,	// (0x000401eb) form2_midp_label_pane_cp_ParamLimits

0xa94d,	// (0x000401eb) form2_midp_label_pane_cp

0xeddf,	// (0x0004467d) form2_midp_string_pane_ParamLimits

0xeddf,	// (0x0004467d) form2_midp_string_pane

0x110a,	// (0x000369a8) form2_midp_text_pane_ParamLimits

0x110a,	// (0x000369a8) form2_midp_text_pane

0xedf1,	// (0x0004468f) form2_midp_time_pane

0xee01,	// (0x0004469f) input_focus_pane_cp51_ParamLimits

0xee01,	// (0x0004469f) input_focus_pane_cp51

0xee19,	// (0x000446b7) form2_midp_label_pane_t1_ParamLimits

0xee19,	// (0x000446b7) form2_midp_label_pane_t1

0x1125,	// (0x000369c3) form2_mdip_text_pane_t1_ParamLimits

0x1125,	// (0x000369c3) form2_mdip_text_pane_t1

0x1141,	// (0x000369df) form2_midp_time_pane_t1

0xee61,	// (0x000446ff) form2_midp_gauge_slider_pane_t1

0xa96e,	// (0x0004020c) form2_midp_gauge_slider_pane_t2

0xa982,	// (0x00040220) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0004539d) form2_midp_gauge_slider_pane_t

0xee73,	// (0x00044711) form2_midp_slider_pane

0xee7f,	// (0x0004471d) form2_midp_gauge_wait_pane_t1

0xee8d,	// (0x0004472b) form2_midp_wait_pane_ParamLimits

0xee8d,	// (0x0004472b) form2_midp_wait_pane

0xa996,	// (0x00040234) list_single_2graphic_pane_cp4_ParamLimits

0xa996,	// (0x00040234) list_single_2graphic_pane_cp4

0xa3a0,	// (0x0003fc3e) list_single_midp_graphic_pane_cp_ParamLimits

0xa3a0,	// (0x0003fc3e) list_single_midp_graphic_pane_cp

0xba78,	// (0x00041316) list_highlight_pane_cp20

0xeeb8,	// (0x00044756) list_single_2graphic_pane_g1_cp4

0xe6cb,	// (0x00043f69) list_single_2graphic_pane_g2_cp4

0xeec0,	// (0x0004475e) list_single_2graphic_pane_t1_cp4

0xbad4,	// (0x00041372) list_highlight_pane_cp21

0xeecf,	// (0x0004476d) list_single_midp_graphic_pane_g4_cp

0xeede,	// (0x0004477c) list_single_midp_graphic_pane_t1_cp

0xa9ad,	// (0x0004024b) form2_mdip_string_pane_t1_ParamLimits

0xa9ad,	// (0x0004024b) form2_mdip_string_pane_t1

0xba78,	// (0x00041316) bg_wml_button_pane_cp2

0xba6e,	// (0x0004130c) form2_midp_image_pane_g1

0x1c6b,	// (0x00037509) list_double_large_graphic_pane_g5_ParamLimits

0x1c6b,	// (0x00037509) list_double_large_graphic_pane_g5

0xc355,	// (0x00041bf3) midp_form_pane_ParamLimits

0xbad4,	// (0x00041372) main_apps_wheel_pane_ParamLimits

0x9cbf,	// (0x0003f55d) popup_preview_window_ParamLimits

0x9cbf,	// (0x0003f55d) popup_preview_window

0xcf56,	// (0x000427f4) popup_touch_info_window_ParamLimits

0xcf56,	// (0x000427f4) popup_touch_info_window

0xcf74,	// (0x00042812) popup_touch_menu_window_ParamLimits

0xcf74,	// (0x00042812) popup_touch_menu_window

0xba64,	// (0x00041302) bg_popup_sub_pane_cp6

0xeef3,	// (0x00044791) list_touch_menu_pane

0xeefb,	// (0x00044799) list_single_touch_menu_pane_ParamLimits

0xeefb,	// (0x00044799) list_single_touch_menu_pane

0xef0f,	// (0x000447ad) list_single_touch_menu_pane_t1

0xbad4,	// (0x00041372) bg_popup_sub_pane_cp7_ParamLimits

0xbad4,	// (0x00041372) bg_popup_sub_pane_cp7

0xef1d,	// (0x000447bb) heading_sub_pane

0xef25,	// (0x000447c3) list_touch_info_pane_ParamLimits

0xef25,	// (0x000447c3) list_touch_info_pane

0xef34,	// (0x000447d2) list_single_touch_info_pane_ParamLimits

0xef34,	// (0x000447d2) list_single_touch_info_pane

0xef46,	// (0x000447e4) list_single_touch_info_pane_t1

0xef54,	// (0x000447f2) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x000453ab) list_single_touch_info_pane_t

0xcc33,	// (0x000424d1) bg_popup_heading_pane_cp

0xef62,	// (0x00044800) heading_sub_pane_t1

0xd275,	// (0x00042b13) bg_popup_preview_window_pane_cp_ParamLimits

0xd275,	// (0x00042b13) bg_popup_preview_window_pane_cp

0xef1d,	// (0x000447bb) heading_preview_pane

0xef25,	// (0x000447c3) list_preview_pane_ParamLimits

0xef25,	// (0x000447c3) list_preview_pane

0xef70,	// (0x0004480e) popup_preview_window_g1

0xef34,	// (0x000447d2) list_single_preview_pane_ParamLimits

0xef34,	// (0x000447d2) list_single_preview_pane

0xef78,	// (0x00044816) list_single_preview_pane_g1

0xef80,	// (0x0004481e) list_single_preview_pane_t1

0xef46,	// (0x000447e4) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x000453b0) list_single_preview_pane_t

0xef8e,	// (0x0004482c) bg_popup_heading_pane_cp2_ParamLimits

0xef8e,	// (0x0004482c) bg_popup_heading_pane_cp2

0xefa4,	// (0x00044842) heading_preview_pane_g1

0xefac,	// (0x0004484a) heading_preview_pane_t1_ParamLimits

0xefac,	// (0x0004484a) heading_preview_pane_t1

0xbb27,	// (0x000413c5) soft_indicator_pane_t1_ParamLimits

0xc171,	// (0x00041a0f) scroll_pane_ParamLimits

0xc555,	// (0x00041df3) scroll_sc2_left_pane

0xc55e,	// (0x00041dfc) scroll_sc2_right_pane

0xc57d,	// (0x00041e1b) scroll_bg_pane_g1_ParamLimits

0xc592,	// (0x00041e30) scroll_bg_pane_g2_ParamLimits

0xc5aa,	// (0x00041e48) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x00044f9e) scroll_bg_pane_g_ParamLimits

0xc57d,	// (0x00041e1b) scroll_handle_pane_g1_ParamLimits

0xc5cc,	// (0x00041e6a) scroll_handle_pane_g2_ParamLimits

0xc5aa,	// (0x00041e48) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x00044fa5) scroll_handle_pane_g_ParamLimits

0xce9f,	// (0x0004273d) popup_choice_list_window_ParamLimits

0xce9f,	// (0x0004273d) popup_choice_list_window

0xd0c1,	// (0x0004295f) choice_list_pane

0xd151,	// (0x000429ef) cell_toolbar_pane_t1

0xd179,	// (0x00042a17) toolbar_button_pane_ParamLimits

0xe0c6,	// (0x00043964) ai_gene_pane_1_t2_ParamLimits

0xe0c6,	// (0x00043964) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x000451c1) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x000451c1) ai_gene_pane_1_t

0xefc9,	// (0x00044867) scroll_sc2_left_pane_g1

0xefc9,	// (0x00044867) scroll_sc2_right_pane_g1

0xc355,	// (0x00041bf3) bg_popup_sub_pane_cp10

0xefd3,	// (0x00044871) list_choice_list_pane

0xefea,	// (0x00044888) list_single_choice_list_pane_ParamLimits

0xefea,	// (0x00044888) list_single_choice_list_pane

0xc338,	// (0x00041bd6) list_single_choice_list_pane_g1

0xc340,	// (0x00041bde) list_single_choice_list_pane_t1_ParamLimits

0xc340,	// (0x00041bde) list_single_choice_list_pane_t1

0xeffd,	// (0x0004489b) choice_list_pane_g1

0xf005,	// (0x000448a3) choice_list_pane_t1

0xba64,	// (0x00041302) input_focus_pane_cp11

0xc4ca,	// (0x00041d68) title_pane_stacon_g2_ParamLimits

0xc4ca,	// (0x00041d68) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x00044f84) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x00044f84) title_pane_stacon_g

0xcc33,	// (0x000424d1) cursor_press_pane

0x997e,	// (0x0003f21c) popup_fep_hwr_window_ParamLimits

0x997e,	// (0x0003f21c) popup_fep_hwr_window

0xcef3,	// (0x00042791) popup_fep_vkb_window_ParamLimits

0xcef3,	// (0x00042791) popup_fep_vkb_window

0xf013,	// (0x000448b1) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x000453d9) fep_vkb_side_pane_g_ParamLimits

0x2b69,	// (0x00038407) fep_hwr_candidate_pane_ParamLimits

0x2b69,	// (0x00038407) fep_hwr_candidate_pane

0x2b93,	// (0x00038431) fep_hwr_side_pane_ParamLimits

0x2b93,	// (0x00038431) fep_hwr_side_pane

0x2bb3,	// (0x00038451) fep_hwr_top_pane_ParamLimits

0x2bb3,	// (0x00038451) fep_hwr_top_pane

0x2bcb,	// (0x00038469) fep_hwr_write_pane_ParamLimits

0x2bcb,	// (0x00038469) fep_hwr_write_pane

0xfb3b,	// (0x000453d9) fep_vkb_side_pane_g

0xf01b,	// (0x000448b9) fep_hwr_top_pane_g1

0xf02d,	// (0x000448cb) fep_hwr_top_pane_g2

0x2bf7,	// (0x00038495) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x000453b5) fep_hwr_top_pane_g

0x2c0c,	// (0x000384aa) fep_hwr_top_text_pane

0xc71f,	// (0x00041fbd) fep_hwr_top_text_pane_g1

0xf063,	// (0x00044901) fep_hwr_top_text_pane_t1

0x2d02,	// (0x000385a0) fep_hwr_candidate_pane_g1

0xf270,	// (0x00044b0e) fep_vkb_keypad_pane_g3_ParamLimits

0xf270,	// (0x00044b0e) fep_vkb_keypad_pane_g3

0xf298,	// (0x00044b36) fep_vkb_keypad_pane_g4_ParamLimits

0xf298,	// (0x00044b36) fep_vkb_keypad_pane_g4

0xf307,	// (0x00044ba5) fep_vkb_bottom_pane_g2_ParamLimits

0xf307,	// (0x00044ba5) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x000453e0) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x000453e0) fep_vkb_bottom_pane_g

0xefc9,	// (0x00044867) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x000453ea) cell_vkb_side_pane_g

0xf34b,	// (0x00044be9) cell_vkb_side_pane_t1

0xf359,	// (0x00044bf7) cell_vkb_side_pane_t1_copy1

0xefc9,	// (0x00044867) bg_fep_vkb_candidate_pane_g2

0xf435,	// (0x00044cd3) cell_vkb_candidate_pane_ParamLimits

0xf071,	// (0x0004490f) aid_size_cell_vkb_ParamLimits

0xf071,	// (0x0004490f) aid_size_cell_vkb

0xf435,	// (0x00044cd3) cell_vkb_candidate_pane

0x2d1c,	// (0x000385ba) bg_popup_fep_shadow_pane_g1

0xf0ed,	// (0x0004498b) fep_vkb_bottom_pane_ParamLimits

0xf0ed,	// (0x0004498b) fep_vkb_bottom_pane

0xf12a,	// (0x000449c8) fep_vkb_candidate_pane_ParamLimits

0xf12a,	// (0x000449c8) fep_vkb_candidate_pane

0xf146,	// (0x000449e4) fep_vkb_keypad_pane_ParamLimits

0xf146,	// (0x000449e4) fep_vkb_keypad_pane

0xf18c,	// (0x00044a2a) fep_vkb_side_pane_ParamLimits

0xf18c,	// (0x00044a2a) fep_vkb_side_pane

0xf1c8,	// (0x00044a66) fep_vkb_top_pane_ParamLimits

0xf1c8,	// (0x00044a66) fep_vkb_top_pane

0xf204,	// (0x00044aa2) fep_vkb_top_pane_g1_ParamLimits

0xf204,	// (0x00044aa2) fep_vkb_top_pane_g1

0xf213,	// (0x00044ab1) fep_vkb_top_pane_g2_ParamLimits

0xf213,	// (0x00044ab1) fep_vkb_top_pane_g2

0xf222,	// (0x00044ac0) fep_vkb_top_pane_g3_ParamLimits

0xf222,	// (0x00044ac0) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x000453d0) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x000453d0) fep_vkb_top_pane_g

0xf240,	// (0x00044ade) fep_vkb_top_text_pane_ParamLimits

0xf240,	// (0x00044ade) fep_vkb_top_text_pane

0xaa45,	// (0x000402e3) fep_vkb_side_pane_g1_ParamLimits

0xaa45,	// (0x000402e3) fep_vkb_side_pane_g1

0xf25f,	// (0x00044afd) grid_vkb_side_pane_ParamLimits

0xf25f,	// (0x00044afd) grid_vkb_side_pane

0x2d24,	// (0x000385c2) bg_popup_fep_shadow_pane_g2

0x2d2d,	// (0x000385cb) bg_popup_fep_shadow_pane_g3

0x2d35,	// (0x000385d3) bg_popup_fep_shadow_pane_g4

0x2d3e,	// (0x000385dc) bg_popup_fep_shadow_pane_g5

0x2d48,	// (0x000385e6) bg_popup_fep_shadow_pane_g6

0x2d50,	// (0x000385ee) bg_popup_fep_shadow_pane_g7

0xc285,	// (0x00041b23) bg_popup_fep_shadow_pane_g8

0xf2b6,	// (0x00044b54) grid_vkb_keypad_number_pane_ParamLimits

0xf2b6,	// (0x00044b54) grid_vkb_keypad_number_pane

0xf2c6,	// (0x00044b64) grid_vkb_keypad_pane_ParamLimits

0xf2c6,	// (0x00044b64) grid_vkb_keypad_pane

0xf2ec,	// (0x00044b8a) fep_vkb_bottom_pane_g1_ParamLimits

0xf2ec,	// (0x00044b8a) fep_vkb_bottom_pane_g1

0xf315,	// (0x00044bb3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xf315,	// (0x00044bb3) grid_vkb_keypad_bottom_left_pane

0xf32a,	// (0x00044bc8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xf32a,	// (0x00044bc8) grid_vkb_keypad_bottom_right_pane

0xf33f,	// (0x00044bdd) fep_vkb_top_text_pane_g1

0xaa8c,	// (0x0004032a) fep_vkb_top_text_pane_t1

0xaa9e,	// (0x0004033c) cell_vkb_side_pane_ParamLimits

0xaa9e,	// (0x0004033c) cell_vkb_side_pane

0xefc9,	// (0x00044867) cell_vkb_side_pane_g1

0xf367,	// (0x00044c05) cell_vkb_keypad_pane_ParamLimits

0xf367,	// (0x00044c05) cell_vkb_keypad_pane

0xf3e2,	// (0x00044c80) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x000453fd) bg_popup_fep_shadow_pane_g

0xefc9,	// (0x00044867) cell_hwr_side_pane_g1

0xefc9,	// (0x00044867) cell_hwr_side_pane_g2

0xf3ec,	// (0x00044c8a) cell_vkb_keypad_pane_t1

0xaab4,	// (0x00040352) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xaab4,	// (0x00040352) cell_vkb_keypad_bottom_left_pane

0xaac9,	// (0x00040367) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xaac9,	// (0x00040367) cell_vkb_keypad_bottom_right_pane

0xefc9,	// (0x00044867) cell_vkb_keypad_bottom_left_pane_g1

0xefc9,	// (0x00044867) cell_vkb_keypad_bottom_right_pane_g1

0xf3fa,	// (0x00044c98) cell_vkb_keypad_number_pane_ParamLimits

0xf3fa,	// (0x00044c98) cell_vkb_keypad_number_pane

0xf419,	// (0x00044cb7) cell_vkb_keypad_number_pane_g1

0xf423,	// (0x00044cc1) cell_vkb_keypad_number_pane_g2

0xf42c,	// (0x00044cca) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x000453ef) cell_vkb_keypad_number_pane_g

0xf3ec,	// (0x00044c8a) cell_vkb_keypad_number_pane_t1

0xf452,	// (0x00044cf0) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x000453ea) cell_hwr_side_pane_g

0xf46b,	// (0x00044d09) cell_hwr_side_pane_t1

0x2d62,	// (0x00038600) cell_hwr_side_pane_t1_copy1

0xf232,	// (0x00044ad0) cell_hwr_candidate_pane_g1

0x2d70,	// (0x0003860e) cell_hwr_candidate_pane_t1

0xefc9,	// (0x00044867) cell_vkb_candidate_pane_g2

0xf4af,	// (0x00044d4d) cell_vkb_candidate_pane_t1

0x8b34,	// (0x0003e3d2) bg_popup_fep_shadow_pane_ParamLimits

0x8b34,	// (0x0003e3d2) bg_popup_fep_shadow_pane

0x8d01,	// (0x0003e59f) bg_fep_hwr_top_pane_g4

0xf03f,	// (0x000448dd) bg_hwr_side_pane_g1_ParamLimits

0xf03f,	// (0x000448dd) bg_hwr_side_pane_g1

0x8d27,	// (0x0003e5c5) cell_hwr_side_pane_ParamLimits

0x8d27,	// (0x0003e5c5) cell_hwr_side_pane

0x2c83,	// (0x00038521) fep_hwr_write_pane_g1_ParamLimits

0x2c83,	// (0x00038521) fep_hwr_write_pane_g1

0x2c90,	// (0x0003852e) fep_hwr_write_pane_g2_ParamLimits

0x2c90,	// (0x0003852e) fep_hwr_write_pane_g2

0x2c9d,	// (0x0003853b) fep_hwr_write_pane_g3_ParamLimits

0x2c9d,	// (0x0003853b) fep_hwr_write_pane_g3

0x8d47,	// (0x0003e5e5) fep_hwr_write_pane_g4_ParamLimits

0x8d47,	// (0x0003e5e5) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x000453bc) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x000453bc) fep_hwr_write_pane_g

0x8d01,	// (0x0003e59f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x8d01,	// (0x0003e59f) bg_fep_hwr_candidate_pane_g2

0x2cc0,	// (0x0003855e) cell_hwr_candidate_pane_ParamLimits

0x2cc0,	// (0x0003855e) cell_hwr_candidate_pane

0x2d02,	// (0x000385a0) fep_hwr_candidate_pane_g1_ParamLimits

0xf09f,	// (0x0004493d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xf09f,	// (0x0004493d) bg_popup_fep_shadow_pane_cp2

0xf232,	// (0x00044ad0) fep_vkb_top_pane_g4_ParamLimits

0xf232,	// (0x00044ad0) fep_vkb_top_pane_g4

0xf251,	// (0x00044aef) fep_vkb_side_pane_g2_ParamLimits

0xf251,	// (0x00044aef) fep_vkb_side_pane_g2

0x82ed,	// (0x0003db8b) list_setting_pane_t4_ParamLimits

0x82ed,	// (0x0003db8b) list_setting_pane_t4

0x836f,	// (0x0003dc0d) list_setting_number_pane_t5_ParamLimits

0x836f,	// (0x0003dc0d) list_setting_number_pane_t5

0x9712,	// (0x0003efb0) list_double_heading_pane_cp2_ParamLimits

0x9712,	// (0x0003efb0) list_double_heading_pane_cp2

0xc1a5,	// (0x00041a43) list_double_heading_pane_g1_cp2_ParamLimits

0xc1a5,	// (0x00041a43) list_double_heading_pane_g1_cp2

0xc224,	// (0x00041ac2) list_double_heading_pane_g2_cp2_ParamLimits

0xc224,	// (0x00041ac2) list_double_heading_pane_g2_cp2

0xf4bd,	// (0x00044d5b) list_double_heading_pane_t1_cp2_ParamLimits

0xf4bd,	// (0x00044d5b) list_double_heading_pane_t1_cp2

0xf4d3,	// (0x00044d71) list_double_heading_pane_t2_cp2_ParamLimits

0xf4d3,	// (0x00044d71) list_double_heading_pane_t2_cp2

0xba5c,	// (0x000412fa) aid_value_unit2

0x1769,	// (0x00037007) popup_preview_fixed_window

0xbcd1,	// (0x0004156f) bg_popup_preview_window_pane_cp02

0xf4e5,	// (0x00044d83) list_preview_fixed_pane

0xf52b,	// (0x00044dc9) list_empty_pane_fp_ParamLimits

0xf52b,	// (0x00044dc9) list_empty_pane_fp

0xf52b,	// (0x00044dc9) list_single_cale_day_pane_fp_ParamLimits

0xf52b,	// (0x00044dc9) list_single_cale_day_pane_fp

0xf52b,	// (0x00044dc9) list_single_graphic_heading_pane_fp_ParamLimits

0xf52b,	// (0x00044dc9) list_single_graphic_heading_pane_fp

0xf52b,	// (0x00044dc9) list_single_graphic_pane_fp_ParamLimits

0xf52b,	// (0x00044dc9) list_single_graphic_pane_fp

0xf52b,	// (0x00044dc9) list_single_heading_pane_fp_ParamLimits

0xf52b,	// (0x00044dc9) list_single_heading_pane_fp

0xf52b,	// (0x00044dc9) list_single_pane_fp_ParamLimits

0xf52b,	// (0x00044dc9) list_single_pane_fp

0xf542,	// (0x00044de0) list_single_pane_fp_g1_ParamLimits

0xf542,	// (0x00044de0) list_single_pane_fp_g1

0x1c53,	// (0x000374f1) list_single_pane_fp_g2_ParamLimits

0x1c53,	// (0x000374f1) list_single_pane_fp_g2

0x1154,	// (0x000369f2) list_single_pane_fp_g3_ParamLimits

0x1154,	// (0x000369f2) list_single_pane_fp_g3

0xf54e,	// (0x00044dec) list_single_pane_fp_g4_ParamLimits

0xf54e,	// (0x00044dec) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0004541e) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0004541e) list_single_pane_fp_g

0x1168,	// (0x00036a06) list_single_pane_fp_t1_ParamLimits

0x1168,	// (0x00036a06) list_single_pane_fp_t1

0x117f,	// (0x00036a1d) list_single_graphic_pane_fp_g1_ParamLimits

0x117f,	// (0x00036a1d) list_single_graphic_pane_fp_g1

0xf542,	// (0x00044de0) list_single_graphic_pane_fp_g2_ParamLimits

0xf542,	// (0x00044de0) list_single_graphic_pane_fp_g2

0x1c53,	// (0x000374f1) list_single_graphic_pane_fp_g3_ParamLimits

0x1c53,	// (0x000374f1) list_single_graphic_pane_fp_g3

0x1154,	// (0x000369f2) list_single_graphic_pane_fp_g4_ParamLimits

0x1154,	// (0x000369f2) list_single_graphic_pane_fp_g4

0xf54e,	// (0x00044dec) list_single_graphic_pane_fp_g5_ParamLimits

0xf54e,	// (0x00044dec) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x00045427) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x00045427) list_single_graphic_pane_fp_g

0x118b,	// (0x00036a29) list_single_graphic_pane_fp_t1_ParamLimits

0x118b,	// (0x00036a29) list_single_graphic_pane_fp_t1

0x117f,	// (0x00036a1d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x117f,	// (0x00036a1d) list_single_graphic_heading_pane_fp_g1

0xf542,	// (0x00044de0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf542,	// (0x00044de0) list_single_graphic_heading_pane_fp_g2

0x1c53,	// (0x000374f1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1c53,	// (0x000374f1) list_single_graphic_heading_pane_fp_g3

0x1154,	// (0x000369f2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1154,	// (0x000369f2) list_single_graphic_heading_pane_fp_g4

0xf54e,	// (0x00044dec) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf54e,	// (0x00044dec) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x00045427) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x00045427) list_single_graphic_heading_pane_fp_g

0x11a1,	// (0x00036a3f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x11a1,	// (0x00036a3f) list_single_graphic_heading_pane_fp_t1

0x11b7,	// (0x00036a55) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x11b7,	// (0x00036a55) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x00045432) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x00045432) list_single_graphic_heading_pane_fp_t

0x11c9,	// (0x00036a67) list_single_cale_day_pane_fp_g1_ParamLimits

0x11c9,	// (0x00036a67) list_single_cale_day_pane_fp_g1

0xf55a,	// (0x00044df8) list_single_cale_day_pane_fp_g2_ParamLimits

0xf55a,	// (0x00044df8) list_single_cale_day_pane_fp_g2

0x1201,	// (0x00036a9f) list_single_cale_day_pane_fp_g3_ParamLimits

0x1201,	// (0x00036a9f) list_single_cale_day_pane_fp_g3

0x1229,	// (0x00036ac7) list_single_cale_day_pane_fp_g4_ParamLimits

0x1229,	// (0x00036ac7) list_single_cale_day_pane_fp_g4

0x124d,	// (0x00036aeb) list_single_cale_day_pane_fp_g5_ParamLimits

0x124d,	// (0x00036aeb) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x00045437) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x00045437) list_single_cale_day_pane_fp_g

0x1271,	// (0x00036b0f) list_single_cale_day_pane_fp_t1_ParamLimits

0x1271,	// (0x00036b0f) list_single_cale_day_pane_fp_t1

0x1297,	// (0x00036b35) list_single_cale_day_pane_fp_t2_ParamLimits

0x1297,	// (0x00036b35) list_single_cale_day_pane_fp_t2

0x12b0,	// (0x00036b4e) list_single_cale_day_pane_fp_t3_ParamLimits

0x12b0,	// (0x00036b4e) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x00045442) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x00045442) list_single_cale_day_pane_fp_t

0xf542,	// (0x00044de0) list_empty_pane_fp_g1_ParamLimits

0xf542,	// (0x00044de0) list_empty_pane_fp_g1

0x12c9,	// (0x00036b67) list_empty_pane_fp_t1

0x12d7,	// (0x00036b75) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x00045449) list_empty_pane_fp_t

0xf542,	// (0x00044de0) list_single_heading_pane_fp_g1_ParamLimits

0xf542,	// (0x00044de0) list_single_heading_pane_fp_g1

0x1c53,	// (0x000374f1) list_single_heading_pane_fp_g2_ParamLimits

0x1c53,	// (0x000374f1) list_single_heading_pane_fp_g2

0x1154,	// (0x000369f2) list_single_heading_pane_fp_g3_ParamLimits

0x1154,	// (0x000369f2) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0004544e) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0004544e) list_single_heading_pane_fp_g

0x12e5,	// (0x00036b83) list_single_heading_pane_fp_t1_ParamLimits

0x12e5,	// (0x00036b83) list_single_heading_pane_fp_t1

0x12f7,	// (0x00036b95) list_single_heading_pane_fp_t2_ParamLimits

0x12f7,	// (0x00036b95) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x00045455) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x00045455) list_single_heading_pane_fp_t

0xc361,	// (0x00041bff) aid_size_cell_fast

0xbcb4,	// (0x00041552) soft_indicator_pane_cp1_t1

0xc39e,	// (0x00041c3c) cell_app_pane_cp2_ParamLimits

0xc39e,	// (0x00041c3c) cell_app_pane_cp2

0x2b52,	// (0x000383f0) fep_hwr_candidate_drop_down_list_pane

0x95aa,	// (0x0003ee48) fep_hwr_candidate_pane_g3_ParamLimits

0x95aa,	// (0x0003ee48) fep_hwr_candidate_pane_g3

0x95b7,	// (0x0003ee55) fep_hwr_candidate_pane_g4_ParamLimits

0x95b7,	// (0x0003ee55) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x000453c9) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x000453c9) fep_hwr_candidate_pane_g

0xf119,	// (0x000449b7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xf119,	// (0x000449b7) fep_vkb_candidate_drop_down_list_pane

0xf45a,	// (0x00044cf8) fep_vkb_candidate_pane_g3

0xf462,	// (0x00044d00) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x000453f6) fep_vkb_candidate_pane_g

0xf232,	// (0x00044ad0) cell_hwr_candidate_pane_g1_ParamLimits

0x47f6,	// (0x0003a094) cell_hwr_candidate_pane_g3_ParamLimits

0x47f6,	// (0x0003a094) cell_hwr_candidate_pane_g3

0x4817,	// (0x0003a0b5) cell_hwr_candidate_pane_g4_ParamLimits

0x4817,	// (0x0003a0b5) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x00045410) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x00045410) cell_hwr_candidate_pane_g

0xf479,	// (0x00044d17) cell_vkb_candidate_pane_g3_ParamLimits

0xf479,	// (0x00044d17) cell_vkb_candidate_pane_g3

0xf494,	// (0x00044d32) cell_vkb_candidate_pane_g4_ParamLimits

0xf494,	// (0x00044d32) cell_vkb_candidate_pane_g4

0x4838,	// (0x0003a0d6) cell_app_pane_cp2_g1_ParamLimits

0x4838,	// (0x0003a0d6) cell_app_pane_cp2_g1

0x4856,	// (0x0003a0f4) cell_app_pane_cp2_g2_ParamLimits

0x4856,	// (0x0003a0f4) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0004545a) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0004545a) cell_app_pane_cp2_g

0x4862,	// (0x0003a100) cell_app_pane_cp2_t1_ParamLimits

0x4862,	// (0x0003a100) cell_app_pane_cp2_t1

0xc20a,	// (0x00041aa8) grid_highlight_pane_cp1_ParamLimits

0xc20a,	// (0x00041aa8) grid_highlight_pane_cp1

0x2d8e,	// (0x0003862c) cell_hwr_candidate_pane_cp1_ParamLimits

0x2d8e,	// (0x0003862c) cell_hwr_candidate_pane_cp1

0xf232,	// (0x00044ad0) fep_hwr_candidate_drop_down_list_pane_g1

0x4874,	// (0x0003a112) fep_hwr_candidate_drop_down_list_pane_g2

0x4881,	// (0x0003a11f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0004545f) fep_hwr_candidate_drop_down_list_pane_g

0x2dad,	// (0x0003864b) fep_hwr_candidate_drop_down_list_scroll_pane

0x2db6,	// (0x00038654) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2db6,	// (0x00038654) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2dc3,	// (0x00038661) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2dc3,	// (0x00038661) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2dd0,	// (0x0003866e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2dd0,	// (0x0003866e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf479,	// (0x00044d17) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf479,	// (0x00044d17) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf494,	// (0x00044d32) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf494,	// (0x00044d32) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2ddd,	// (0x0003867b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2ddd,	// (0x0003867b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2df8,	// (0x00038696) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2df8,	// (0x00038696) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x488e,	// (0x0003a12c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x488e,	// (0x0003a12c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x00045466) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x00045466) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x48a9,	// (0x0003a147) cell_vkb_candidate_pane_cp1_ParamLimits

0x48a9,	// (0x0003a147) cell_vkb_candidate_pane_cp1

0xf232,	// (0x00044ad0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xf232,	// (0x00044ad0) fep_vkb_candidate_drop_down_list_pane_g1

0x4874,	// (0x0003a112) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4874,	// (0x0003a112) fep_vkb_candidate_drop_down_list_pane_g2

0x4881,	// (0x0003a11f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4881,	// (0x0003a11f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0004545f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x0004545f) fep_vkb_candidate_drop_down_list_pane_g

0x48c9,	// (0x0003a167) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x48c9,	// (0x0003a167) fep_vkb_candidate_drop_down_list_scroll_pane

0x48d6,	// (0x0003a174) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x48d6,	// (0x0003a174) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x48e3,	// (0x0003a181) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x48e3,	// (0x0003a181) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x48ef,	// (0x0003a18d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x48ef,	// (0x0003a18d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x47f6,	// (0x0003a094) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x47f6,	// (0x0003a094) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4817,	// (0x0003a0b5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4817,	// (0x0003a0b5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x48fb,	// (0x0003a199) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x48fb,	// (0x0003a199) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x491c,	// (0x0003a1ba) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x491c,	// (0x0003a1ba) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x488e,	// (0x0003a12c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x488e,	// (0x0003a12c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x00045477) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x00045477) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x91ed,	// (0x0003ea8b) title_pane_g1_ParamLimits

0x9200,	// (0x0003ea9e) title_pane_g2_ParamLimits

0xf566,	// (0x00044e04) title_pane_g_ParamLimits

0xc70f,	// (0x00041fad) aid_call2_pane

0xc717,	// (0x00041fb5) aid_call_pane

0xc71f,	// (0x00041fbd) popup_clock_analogue_window_g1

0xc71f,	// (0x00041fbd) popup_clock_analogue_window_g2

0x1faf,	// (0x0003784d) popup_clock_analogue_window_g3

0x1fb8,	// (0x00037856) popup_clock_analogue_window_g4

0xba6e,	// (0x0004130c) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x00044fb3) popup_clock_analogue_window_g

0x1fc0,	// (0x0003785e) popup_clock_analogue_window_t1

0x1ff7,	// (0x00037895) clock_digital_number_pane_ParamLimits

0x1ff7,	// (0x00037895) clock_digital_number_pane

0x2003,	// (0x000378a1) clock_digital_number_pane_cp02_ParamLimits

0x2003,	// (0x000378a1) clock_digital_number_pane_cp02

0x200f,	// (0x000378ad) clock_digital_number_pane_cp03_ParamLimits

0x200f,	// (0x000378ad) clock_digital_number_pane_cp03

0x201b,	// (0x000378b9) clock_digital_number_pane_cp04_ParamLimits

0x201b,	// (0x000378b9) clock_digital_number_pane_cp04

0x2027,	// (0x000378c5) clock_digital_separator_pane_ParamLimits

0x2027,	// (0x000378c5) clock_digital_separator_pane

0x2033,	// (0x000378d1) popup_clock_digital_window_t1_ParamLimits

0x2033,	// (0x000378d1) popup_clock_digital_window_t1

0xba6e,	// (0x0004130c) clock_digital_number_pane_g1

0xba6e,	// (0x0004130c) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x00044fbe) clock_digital_number_pane_g

0xba6e,	// (0x0004130c) clock_digital_separator_pane_g1

0xba6e,	// (0x0004130c) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x00044fbe) clock_digital_separator_pane_g

0x9f63,	// (0x0003f801) aid_fill_nsta_ParamLimits

0xa099,	// (0x0003f937) indicator_nsta_pane_ParamLimits

0xd06a,	// (0x00042908) popup_clock_analogue_window

0xd06a,	// (0x00042908) popup_clock_digital_window

0xd11b,	// (0x000429b9) grid_indicator_nsta_pane_ParamLimits

0xec52,	// (0x000444f0) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x00045349) clock_nsta_pane_t

0x1f73,	// (0x00037811) aid_size_max_handle

0x89aa,	// (0x0003e248) aid_size_min_handle

0xcc33,	// (0x000424d1) editor_scroll_pane

0x493d,	// (0x0003a1db) ex_editor_pane

0xc31d,	// (0x00041bbb) scroll_pane_cp13

0xc19d,	// (0x00041a3b) scroll_pane_cp14

0xc74e,	// (0x00041fec) scroll_pane_cp36

0x9723,	// (0x0003efc1) list_single_graphic_hl_pane_cp2_ParamLimits

0x9723,	// (0x0003efc1) list_single_graphic_hl_pane_cp2

0xa72e,	// (0x0003ffcc) list_single_graphic_hl_pane_ParamLimits

0xa72e,	// (0x0003ffcc) list_single_graphic_hl_pane

0x130d,	// (0x00036bab) aid_size_min_hl_cp1

0x4945,	// (0x0003a1e3) list_highlight_pane_cp34_ParamLimits

0x4945,	// (0x0003a1e3) list_highlight_pane_cp34

0x4956,	// (0x0003a1f4) list_single_graphic_hl_pane_g1_ParamLimits

0x4956,	// (0x0003a1f4) list_single_graphic_hl_pane_g1

0x861d,	// (0x0003debb) list_single_graphic_hl_pane_g2_ParamLimits

0x861d,	// (0x0003debb) list_single_graphic_hl_pane_g2

0x861d,	// (0x0003debb) list_single_graphic_hl_pane_g3_ParamLimits

0x861d,	// (0x0003debb) list_single_graphic_hl_pane_g3

0x2e8a,	// (0x00038728) list_single_graphic_hl_pane_g4_ParamLimits

0x2e8a,	// (0x00038728) list_single_graphic_hl_pane_g4

0x8d5c,	// (0x0003e5fa) list_single_graphic_hl_pane_g5_ParamLimits

0x8d5c,	// (0x0003e5fa) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x00045488) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x00045488) list_single_graphic_hl_pane_g

0x8629,	// (0x0003dec7) list_single_graphic_hl_pane_t1_ParamLimits

0x8629,	// (0x0003dec7) list_single_graphic_hl_pane_t1

0x4963,	// (0x0003a201) aid_size_min_hl_cp2

0x496c,	// (0x0003a20a) list_highlight_pane_cp34_cp2_ParamLimits

0x496c,	// (0x0003a20a) list_highlight_pane_cp34_cp2

0x4956,	// (0x0003a1f4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4956,	// (0x0003a1f4) list_single_graphic_hl_pane_g1_cp2

0x4979,	// (0x0003a217) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4979,	// (0x0003a217) list_single_graphic_hl_pane_g2_cp2

0x4985,	// (0x0003a223) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x4985,	// (0x0003a223) list_single_graphic_hl_pane_g3_cp2

0xcb6a,	// (0x00042408) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcb6a,	// (0x00042408) list_single_graphic_hl_pane_g4_cp2

0x4993,	// (0x0003a231) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4993,	// (0x0003a231) list_single_graphic_hl_pane_g5_cp2

0x8a1f,	// (0x0003e2bd) control_pane_g4_ParamLimits

0x8a1f,	// (0x0003e2bd) control_pane_g4

0xc355,	// (0x00041bf3) bg_popup_sub_pane_cp10_ParamLimits

0xefd3,	// (0x00044871) list_choice_list_pane_ParamLimits

0xefe2,	// (0x00044880) scroll_pane_cp23

0xbcd1,	// (0x0004156f) bg_popup_preview_window_pane_cp02_ParamLimits

0xf4e5,	// (0x00044d83) list_preview_fixed_pane_ParamLimits

0xf4fb,	// (0x00044d99) list_preview_fixed_pane_cp_ParamLimits

0xf4fb,	// (0x00044d99) list_preview_fixed_pane_cp

0xf507,	// (0x00044da5) popup_preview_fixed_window_g1_ParamLimits

0xf507,	// (0x00044da5) popup_preview_fixed_window_g1

0xf513,	// (0x00044db1) popup_preview_fixed_window_g2_ParamLimits

0xf513,	// (0x00044db1) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x00045417) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x00045417) popup_preview_fixed_window_g

0x1e4f,	// (0x000376ed) aid_navi_side_left_pane_ParamLimits

0x1e64,	// (0x00037702) aid_navi_side_right_pane_ParamLimits

0x1e7c,	// (0x0003771a) navi_icon_pane_stacon_ParamLimits

0x1e90,	// (0x0003772e) navi_navi_pane_stacon_ParamLimits

0x1e7c,	// (0x0003771a) navi_text_pane_stacon_ParamLimits

0xba64,	// (0x00041302) main_text_info_pane

0x49bd,	// (0x0003a25b) listscroll_text_info_pane

0x49c5,	// (0x0003a263) list_text_info_pane_ParamLimits

0x49c5,	// (0x0003a263) list_text_info_pane

0x49d4,	// (0x0003a272) scroll_pane_cp24_ParamLimits

0x49d4,	// (0x0003a272) scroll_pane_cp24

0xaae4,	// (0x00040382) list_text_info_pane_t1_ParamLimits

0xaae4,	// (0x00040382) list_text_info_pane_t1

0x98f3,	// (0x0003f191) popup_fast_swap2_window_ParamLimits

0x98f3,	// (0x0003f191) popup_fast_swap2_window

0x4a2b,	// (0x0003a2c9) aid_size_cell_fast2

0xba64,	// (0x00041302) bg_popup_window_pane_cp17

0xd51c,	// (0x00042dba) heading_pane_cp2

0xbf22,	// (0x000417c0) listscroll_fast2_pane

0x4a35,	// (0x0003a2d3) grid_fast2_pane

0x4a3f,	// (0x0003a2dd) listscroll_fast2_pane_g1

0x4a47,	// (0x0003a2e5) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x00045493) listscroll_fast2_pane_g

0xc31d,	// (0x00041bbb) scroll_pane_cp26

0x4a51,	// (0x0003a2ef) cell_fast2_pane_ParamLimits

0x4a51,	// (0x0003a2ef) cell_fast2_pane

0x4a66,	// (0x0003a304) cell_fast2_pane_g1

0x4a6f,	// (0x0003a30d) cell_fast2_pane_g2

0x4a78,	// (0x0003a316) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x00045498) cell_fast2_pane_g

0xbf64,	// (0x00041802) grid_highlight_pane_cp9

0xbf79,	// (0x00041817) main_eswt_pane_ParamLimits

0xbf79,	// (0x00041817) main_eswt_pane

0x49e9,	// (0x0003a287) list_single_text_info_pane

0x4a80,	// (0x0003a31e) eswt_ctrl_button_pane

0x4a80,	// (0x0003a31e) eswt_ctrl_canvas_pane

0x4a88,	// (0x0003a326) eswt_ctrl_combo_pane

0x4a80,	// (0x0003a31e) eswt_ctrl_default_pane

0x4a80,	// (0x0003a31e) eswt_ctrl_label_pane

0x4a90,	// (0x0003a32e) eswt_ctrl_wait_pane

0x4a98,	// (0x0003a336) eswt_shell_pane

0xba64,	// (0x00041302) listscroll_eswt_app_pane

0x4ab8,	// (0x0003a356) popup_eswt_tasktip_window_ParamLimits

0x4ab8,	// (0x0003a356) popup_eswt_tasktip_window

0xd275,	// (0x00042b13) bg_popup_window_pane_cp18

0x4ac9,	// (0x0003a367) eswt_control_pane_g1_ParamLimits

0x4ac9,	// (0x0003a367) eswt_control_pane_g1

0x4ad6,	// (0x0003a374) eswt_control_pane_g2_ParamLimits

0x4ad6,	// (0x0003a374) eswt_control_pane_g2

0x4ae3,	// (0x0003a381) eswt_control_pane_g3_ParamLimits

0x4ae3,	// (0x0003a381) eswt_control_pane_g3

0x4af0,	// (0x0003a38e) eswt_control_pane_g4_ParamLimits

0x4af0,	// (0x0003a38e) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x0004549f) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x0004549f) eswt_control_pane_g

0xc20a,	// (0x00041aa8) bg_button_pane_ParamLimits

0xc20a,	// (0x00041aa8) bg_button_pane

0xbf79,	// (0x00041817) common_borders_pane_copy2_ParamLimits

0xbf79,	// (0x00041817) common_borders_pane_copy2

0x4afd,	// (0x0003a39b) control_button_pane_g1_ParamLimits

0x4afd,	// (0x0003a39b) control_button_pane_g1

0x4b09,	// (0x0003a3a7) control_button_pane_g2_ParamLimits

0x4b09,	// (0x0003a3a7) control_button_pane_g2

0x4b15,	// (0x0003a3b3) control_button_pane_g3_ParamLimits

0x4b15,	// (0x0003a3b3) control_button_pane_g3

0x0002,

0xfc0a,	// (0x000454a8) control_button_pane_g_ParamLimits

0xfc0a,	// (0x000454a8) control_button_pane_g

0x4b29,	// (0x0003a3c7) control_button_pane_t1

0x4b37,	// (0x0003a3d5) control_button_pane_t2

0x0001,

0xfc11,	// (0x000454af) control_button_pane_t

0xd185,	// (0x00042a23) bg_button_pane_g1

0xd18d,	// (0x00042a2b) bg_button_pane_g2

0xd195,	// (0x00042a33) bg_button_pane_g3

0xd19d,	// (0x00042a3b) bg_button_pane_g4

0xd1a5,	// (0x00042a43) bg_button_pane_g5

0xd1ad,	// (0x00042a4b) bg_button_pane_g6

0xd1b5,	// (0x00042a53) bg_button_pane_g7

0xd1bd,	// (0x00042a5b) bg_button_pane_g8

0xd1c5,	// (0x00042a63) bg_button_pane_g9

0x0008,

0xf877,	// (0x00045115) bg_button_pane_g

0xef8e,	// (0x0004482c) common_borders_pane_ParamLimits

0xef8e,	// (0x0004482c) common_borders_pane

0x4ac9,	// (0x0003a367) eswt_control_pane_g1_copy1_ParamLimits

0x4ac9,	// (0x0003a367) eswt_control_pane_g1_copy1

0x4ad6,	// (0x0003a374) eswt_control_pane_g2_copy1_ParamLimits

0x4ad6,	// (0x0003a374) eswt_control_pane_g2_copy1

0x4ae3,	// (0x0003a381) eswt_control_pane_g3_copy1_ParamLimits

0x4ae3,	// (0x0003a381) eswt_control_pane_g3_copy1

0x4af0,	// (0x0003a38e) eswt_control_pane_g4_copy1_ParamLimits

0x4af0,	// (0x0003a38e) eswt_control_pane_g4_copy1

0xefc9,	// (0x00044867) bg_eswt_ctrl_canvas_pane_g1

0xef8e,	// (0x0004482c) common_borders_pane_cp2_ParamLimits

0xef8e,	// (0x0004482c) common_borders_pane_cp2

0xef8e,	// (0x0004482c) common_borders_pane_cp3_ParamLimits

0xef8e,	// (0x0004482c) common_borders_pane_cp3

0x4b45,	// (0x0003a3e3) separator_horizontal_pane

0x4b4d,	// (0x0003a3eb) separator_vertical_pane

0x4ac9,	// (0x0003a367) eswt_control_pane_g1_copy2_ParamLimits

0x4ac9,	// (0x0003a367) eswt_control_pane_g1_copy2

0x4ad6,	// (0x0003a374) eswt_control_pane_g2_copy2_ParamLimits

0x4ad6,	// (0x0003a374) eswt_control_pane_g2_copy2

0x4ae3,	// (0x0003a381) eswt_control_pane_g3_copy2_ParamLimits

0x4ae3,	// (0x0003a381) eswt_control_pane_g3_copy2

0x4af0,	// (0x0003a38e) eswt_control_pane_g4_copy2_ParamLimits

0x4af0,	// (0x0003a38e) eswt_control_pane_g4_copy2

0xba64,	// (0x00041302) common_borders_pane_cp4

0x4b56,	// (0x0003a3f4) separator_horizontal_pane_g1

0x4b5f,	// (0x0003a3fd) separator_horizontal_pane_g2

0x4b68,	// (0x0003a406) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x000454b4) separator_horizontal_pane_g

0x4ac9,	// (0x0003a367) eswt_control_pane_g1_copy3_ParamLimits

0x4ac9,	// (0x0003a367) eswt_control_pane_g1_copy3

0x4ad6,	// (0x0003a374) eswt_control_pane_g2_copy3_ParamLimits

0x4ad6,	// (0x0003a374) eswt_control_pane_g2_copy3

0x4ae3,	// (0x0003a381) eswt_control_pane_g3_copy3_ParamLimits

0x4ae3,	// (0x0003a381) eswt_control_pane_g3_copy3

0x4af0,	// (0x0003a38e) eswt_control_pane_g4_copy3_ParamLimits

0x4af0,	// (0x0003a38e) eswt_control_pane_g4_copy3

0xba64,	// (0x00041302) common_borders_pane_cp5

0x4b71,	// (0x0003a40f) separator_vertical_pane_g1

0x4b7a,	// (0x0003a418) separator_vertical_pane_g2

0x4b83,	// (0x0003a421) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x000454bb) separator_vertical_pane_g

0x4ac9,	// (0x0003a367) eswt_control_pane_g1_copy4_ParamLimits

0x4ac9,	// (0x0003a367) eswt_control_pane_g1_copy4

0x4ad6,	// (0x0003a374) eswt_control_pane_g2_copy4_ParamLimits

0x4ad6,	// (0x0003a374) eswt_control_pane_g2_copy4

0x4ae3,	// (0x0003a381) eswt_control_pane_g3_copy4_ParamLimits

0x4ae3,	// (0x0003a381) eswt_control_pane_g3_copy4

0x4af0,	// (0x0003a38e) eswt_control_pane_g4_copy4_ParamLimits

0x4af0,	// (0x0003a38e) eswt_control_pane_g4_copy4

0xab02,	// (0x000403a0) eswt_ctrl_combo_button_pane

0xab0a,	// (0x000403a8) eswt_ctrl_input_pane

0xab12,	// (0x000403b0) popup_choice_list_window_cp70

0xab1a,	// (0x000403b8) eswt_ctrl_input_pane_t1

0xba64,	// (0x00041302) input_focus_pane_cp70

0xef8e,	// (0x0004482c) bg_button_pane_cp70_ParamLimits

0xef8e,	// (0x0004482c) bg_button_pane_cp70

0xab28,	// (0x000403c6) eswt_ctrl_combo_button_pane_g1

0x4bba,	// (0x0003a458) wait_bar_pane_cp70

0xd275,	// (0x00042b13) bg_popup_window_pane_cp70_ParamLimits

0xd275,	// (0x00042b13) bg_popup_window_pane_cp70

0x4bc2,	// (0x0003a460) popup_eswt_tasktip_window_t1

0x4bd8,	// (0x0003a476) wait_bar_pane_cp71_ParamLimits

0x4bd8,	// (0x0003a476) wait_bar_pane_cp71

0x4be4,	// (0x0003a482) grid_eswt_app_pane

0xc55e,	// (0x00041dfc) scroll_pane_cp70

0xab30,	// (0x000403ce) cell_eswt_app_pane_ParamLimits

0xab30,	// (0x000403ce) cell_eswt_app_pane

0xab5a,	// (0x000403f8) cell_eswt_app_pane_g1_ParamLimits

0xab5a,	// (0x000403f8) cell_eswt_app_pane_g1

0xab89,	// (0x00040427) cell_eswt_app_pane_g2_ParamLimits

0xab89,	// (0x00040427) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x000454c2) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x000454c2) cell_eswt_app_pane_g

0xabb2,	// (0x00040450) cell_eswt_app_pane_t1_ParamLimits

0xabb2,	// (0x00040450) cell_eswt_app_pane_t1

0x4cab,	// (0x0003a549) grid_highlight_pane_cp70_ParamLimits

0x4cab,	// (0x0003a549) grid_highlight_pane_cp70

0xcb06,	// (0x000423a4) set_content_pane_g1

0xce1c,	// (0x000426ba) status_small_volume_pane

0x2e13,	// (0x000386b1) status_small_volume_pane_g1

0x2e1b,	// (0x000386b9) volume_small2_pane

0x2e24,	// (0x000386c2) volume_small2_pane_g1

0x2e2d,	// (0x000386cb) volume_small2_pane_g2

0x2e36,	// (0x000386d4) volume_small2_pane_g3

0x2e3f,	// (0x000386dd) volume_small2_pane_g4

0x2e48,	// (0x000386e6) volume_small2_pane_g5

0x2e51,	// (0x000386ef) volume_small2_pane_g6

0x2e5a,	// (0x000386f8) volume_small2_pane_g7

0x2e63,	// (0x00038701) volume_small2_pane_g8

0x2e6c,	// (0x0003870a) volume_small2_pane_g9

0x2e75,	// (0x00038713) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x000454c7) volume_small2_pane_g

0xf33f,	// (0x00044bdd) fep_vkb_top_text_pane_g1_ParamLimits

0xaa8c,	// (0x0004032a) fep_vkb_top_text_pane_t1_ParamLimits

0xf51f,	// (0x00044dbd) popup_preview_fixed_window_g3_ParamLimits

0xf51f,	// (0x00044dbd) popup_preview_fixed_window_g3

0x9ef6,	// (0x0003f794) popup_toolbar_trans_pane

0xa5b5,	// (0x0003fe53) aid_height_set_list_ParamLimits

0xda16,	// (0x000432b4) aid_size_parent_ParamLimits

0xc355,	// (0x00041bf3) list_highlight_pane_cp2_ParamLimits

0xcb06,	// (0x000423a4) set_content_pane_g1_ParamLimits

0x860b,	// (0x0003dea9) list_single_image_pane_ParamLimits

0x860b,	// (0x0003dea9) list_single_image_pane

0xabe4,	// (0x00040482) aid_size_cell_image_ParamLimits

0xabe4,	// (0x00040482) aid_size_cell_image

0xabf1,	// (0x0004048f) grid_single_image_pane_ParamLimits

0xabf1,	// (0x0004048f) grid_single_image_pane

0xc1a5,	// (0x00041a43) list_single_image_pane_g1_ParamLimits

0xc1a5,	// (0x00041a43) list_single_image_pane_g1

0xc224,	// (0x00041ac2) list_single_image_pane_g2_ParamLimits

0xc224,	// (0x00041ac2) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x000454dc) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x000454dc) list_single_image_pane_g

0x4cd0,	// (0x0003a56e) list_single_image_pane_t1_ParamLimits

0x4cd0,	// (0x0003a56e) list_single_image_pane_t1

0xabfd,	// (0x0004049b) cell_image_list_pane_ParamLimits

0xabfd,	// (0x0004049b) cell_image_list_pane

0xac11,	// (0x000404af) cell_image_list_pane_g1

0xac1a,	// (0x000404b8) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x000454e1) cell_image_list_pane_g

0x4d0c,	// (0x0003a5aa) aid_size_cell_tb_trans_pane

0xc20a,	// (0x00041aa8) bg_tb_trans_pane

0x4d1e,	// (0x0003a5bc) grid_tb_trans_pane

0xd185,	// (0x00042a23) bg_tb_trans_pane_g1

0xd18d,	// (0x00042a2b) bg_tb_trans_pane_g2

0xd195,	// (0x00042a33) bg_tb_trans_pane_g3

0xd19d,	// (0x00042a3b) bg_tb_trans_pane_g4

0xd1a5,	// (0x00042a43) bg_tb_trans_pane_g5

0xd1bd,	// (0x00042a5b) bg_tb_trans_pane_g6

0xd1c5,	// (0x00042a63) bg_tb_trans_pane_g7

0xd1ad,	// (0x00042a4b) bg_tb_trans_pane_g8

0xd1b5,	// (0x00042a53) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x000454e6) bg_tb_trans_pane_g

0x4d32,	// (0x0003a5d0) cell_toolbar_trans_pane_ParamLimits

0x4d32,	// (0x0003a5d0) cell_toolbar_trans_pane

0xefc9,	// (0x00044867) cell_toolbar_trans_pane_g1

0xa931,	// (0x000401cf) list_form2_midp_pane_t1

0xa93f,	// (0x000401dd) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0004538f) list_form2_midp_pane_t

0xed27,	// (0x000445c5) scroll_pane_cp51_ParamLimits

0xee9d,	// (0x0004473b) form2_midp_wait_pane_g1

0xeea6,	// (0x00044744) form2_midp_wait_pane_g2

0xeeaf,	// (0x0004474d) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x000453a4) form2_midp_wait_pane_g

0xbad4,	// (0x00041372) list_highlight_pane_cp21_ParamLimits

0xeecf,	// (0x0004476d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeede,	// (0x0004477c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe3b0,	// (0x00043c4e) list_single_2graphic_im_pane_ParamLimits

0xe3b0,	// (0x00043c4e) list_single_2graphic_im_pane

0xac23,	// (0x000404c1) list_single_2graphic_im_pane_g1_ParamLimits

0xac23,	// (0x000404c1) list_single_2graphic_im_pane_g1

0xac34,	// (0x000404d2) list_single_2graphic_im_pane_g2_ParamLimits

0xac34,	// (0x000404d2) list_single_2graphic_im_pane_g2

0xac40,	// (0x000404de) list_single_2graphic_im_pane_g3_ParamLimits

0xac40,	// (0x000404de) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x000454f9) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x000454f9) list_single_2graphic_im_pane_g

0xac54,	// (0x000404f2) list_single_2graphic_im_pane_t1_ParamLimits

0xac54,	// (0x000404f2) list_single_2graphic_im_pane_t1

0xf52b,	// (0x00044dc9) list_single_graphic_2heading_pane_fp_ParamLimits

0xf52b,	// (0x00044dc9) list_single_graphic_2heading_pane_fp

0x117f,	// (0x00036a1d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x117f,	// (0x00036a1d) list_single_graphic_2heading_pane_fp_g1

0xf542,	// (0x00044de0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf542,	// (0x00044de0) list_single_graphic_2heading_pane_fp_g2

0x1c53,	// (0x000374f1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1c53,	// (0x000374f1) list_single_graphic_2heading_pane_fp_g3

0x1154,	// (0x000369f2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1154,	// (0x000369f2) list_single_graphic_2heading_pane_fp_g4

0xf54e,	// (0x00044dec) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf54e,	// (0x00044dec) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x00045427) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x00045427) list_single_graphic_2heading_pane_fp_g

0x134c,	// (0x00036bea) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x134c,	// (0x00036bea) list_single_graphic_2heading_pane_fp_t1

0x11b7,	// (0x00036a55) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x11b7,	// (0x00036a55) list_single_graphic_2heading_pane_fp_t2

0x1362,	// (0x00036c00) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1362,	// (0x00036c00) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x00045502) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x00045502) list_single_graphic_2heading_pane_fp_t

0xf04b,	// (0x000448e9) fep_hwr_write_pane_g5_ParamLimits

0xf04b,	// (0x000448e9) fep_hwr_write_pane_g5

0xf057,	// (0x000448f5) fep_hwr_write_pane_g6_ParamLimits

0xf057,	// (0x000448f5) fep_hwr_write_pane_g6

0x4a98,	// (0x0003a336) eswt_shell_pane_ParamLimits

0xd275,	// (0x00042b13) bg_popup_window_pane_cp18_ParamLimits

0xe2e1,	// (0x00043b7f) heading_pane_cp70

0x4bc2,	// (0x0003a460) popup_eswt_tasktip_window_t1_ParamLimits

0x9fbe,	// (0x0003f85c) aid_touch_tab_arrow_left

0x9fd4,	// (0x0003f872) aid_touch_tab_arrow_right

0x9218,	// (0x0003eab6) title_pane_g3_ParamLimits

0x9218,	// (0x0003eab6) title_pane_g3

0xc1c9,	// (0x00041a67) set_value_pane_g1

0x9ef6,	// (0x0003f794) popup_toolbar_trans_pane_ParamLimits

0x4d0c,	// (0x0003a5aa) aid_size_cell_tb_trans_pane_ParamLimits

0xc20a,	// (0x00041aa8) bg_tb_trans_pane_ParamLimits

0x4d1e,	// (0x0003a5bc) grid_tb_trans_pane_ParamLimits

0xbcd1,	// (0x0004156f) cont_note_pane_ParamLimits

0xbcd1,	// (0x0004156f) cont_note_pane

0xbf79,	// (0x00041817) cont_snote2_single_text_pane_ParamLimits

0xbf79,	// (0x00041817) cont_snote2_single_text_pane

0xbf79,	// (0x00041817) cont_snote2_single_graphic_pane_ParamLimits

0xbf79,	// (0x00041817) cont_snote2_single_graphic_pane

0xd732,	// (0x00042fd0) cont_note_wait_pane_ParamLimits

0xd732,	// (0x00042fd0) cont_note_wait_pane

0xd732,	// (0x00042fd0) cont_note_image_pane_ParamLimits

0xd732,	// (0x00042fd0) cont_note_image_pane

0x4dc6,	// (0x0003a664) popup_note2_window_g1_ParamLimits

0x4dc6,	// (0x0003a664) popup_note2_window_g1

0x4df7,	// (0x0003a695) popup_note2_window_t1_ParamLimits

0x4df7,	// (0x0003a695) popup_note2_window_t1

0x4e3c,	// (0x0003a6da) popup_note2_window_t2_ParamLimits

0x4e3c,	// (0x0003a6da) popup_note2_window_t2

0x4e81,	// (0x0003a71f) popup_note2_window_t3_ParamLimits

0x4e81,	// (0x0003a71f) popup_note2_window_t3

0x4ec6,	// (0x0003a764) popup_note2_window_t4_ParamLimits

0x4ec6,	// (0x0003a764) popup_note2_window_t4

0xbd49,	// (0x000415e7) popup_note2_window_t5_ParamLimits

0xbd49,	// (0x000415e7) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0004550e) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0004550e) popup_note2_window_t

0x4ef5,	// (0x0003a793) popup_note2_image_window_g1_ParamLimits

0x4ef5,	// (0x0003a793) popup_note2_image_window_g1

0x4f01,	// (0x0003a79f) popup_note2_image_window_g2_ParamLimits

0x4f01,	// (0x0003a79f) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x00045519) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x00045519) popup_note2_image_window_g

0x4f13,	// (0x0003a7b1) popup_note2_image_window_t1_ParamLimits

0x4f13,	// (0x0003a7b1) popup_note2_image_window_t1

0x4f2b,	// (0x0003a7c9) popup_note2_image_window_t2_ParamLimits

0x4f2b,	// (0x0003a7c9) popup_note2_image_window_t2

0x4f43,	// (0x0003a7e1) popup_note2_image_window_t3_ParamLimits

0x4f43,	// (0x0003a7e1) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0004551e) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0004551e) popup_note2_image_window_t

0xd740,	// (0x00042fde) popup_note2_wait_window_g1_ParamLimits

0xd740,	// (0x00042fde) popup_note2_wait_window_g1

0xd74c,	// (0x00042fea) popup_note2_wait_window_g2_ParamLimits

0xd74c,	// (0x00042fea) popup_note2_wait_window_g2

0xd758,	// (0x00042ff6) popup_note2_wait_window_g3_ParamLimits

0xd758,	// (0x00042ff6) popup_note2_wait_window_g3

0x0002,

0xf859,	// (0x000450f7) popup_note2_wait_window_g_ParamLimits

0xf859,	// (0x000450f7) popup_note2_wait_window_g

0x4f5f,	// (0x0003a7fd) popup_note2_wait_window_t1_ParamLimits

0x4f5f,	// (0x0003a7fd) popup_note2_wait_window_t1

0x4f7d,	// (0x0003a81b) popup_note2_wait_window_t2_ParamLimits

0x4f7d,	// (0x0003a81b) popup_note2_wait_window_t2

0x4f9b,	// (0x0003a839) popup_note2_wait_window_t3_ParamLimits

0x4f9b,	// (0x0003a839) popup_note2_wait_window_t3

0x4fad,	// (0x0003a84b) popup_note2_wait_window_t4_ParamLimits

0x4fad,	// (0x0003a84b) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x00045525) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x00045525) popup_note2_wait_window_t

0x4fbf,	// (0x0003a85d) wait_bar2_pane_ParamLimits

0x4fbf,	// (0x0003a85d) wait_bar2_pane

0x4fd7,	// (0x0003a875) popup_snote2_single_text_window_g1_ParamLimits

0x4fd7,	// (0x0003a875) popup_snote2_single_text_window_g1

0x4fff,	// (0x0003a89d) popup_snote2_single_text_window_t1_ParamLimits

0x4fff,	// (0x0003a89d) popup_snote2_single_text_window_t1

0x504b,	// (0x0003a8e9) popup_snote2_single_text_window_t2_ParamLimits

0x504b,	// (0x0003a8e9) popup_snote2_single_text_window_t2

0x5097,	// (0x0003a935) popup_snote2_single_text_window_t3_ParamLimits

0x5097,	// (0x0003a935) popup_snote2_single_text_window_t3

0x50d8,	// (0x0003a976) popup_snote2_single_text_window_t4_ParamLimits

0x50d8,	// (0x0003a976) popup_snote2_single_text_window_t4

0x510e,	// (0x0003a9ac) popup_snote2_single_text_window_t5_ParamLimits

0x510e,	// (0x0003a9ac) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0004552e) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0004552e) popup_snote2_single_text_window_t

0x5139,	// (0x0003a9d7) popup_snote2_single_graphic_window_g1_ParamLimits

0x5139,	// (0x0003a9d7) popup_snote2_single_graphic_window_g1

0x5161,	// (0x0003a9ff) popup_snote2_single_graphic_window_g2_ParamLimits

0x5161,	// (0x0003a9ff) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x00045539) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x00045539) popup_snote2_single_graphic_window_g

0x5189,	// (0x0003aa27) popup_snote2_single_graphic_window_t1_ParamLimits

0x5189,	// (0x0003aa27) popup_snote2_single_graphic_window_t1

0x51d5,	// (0x0003aa73) popup_snote2_single_graphic_window_t2_ParamLimits

0x51d5,	// (0x0003aa73) popup_snote2_single_graphic_window_t2

0x5097,	// (0x0003a935) popup_snote2_single_graphic_window_t3_ParamLimits

0x5097,	// (0x0003a935) popup_snote2_single_graphic_window_t3

0x50d8,	// (0x0003a976) popup_snote2_single_graphic_window_t4_ParamLimits

0x50d8,	// (0x0003a976) popup_snote2_single_graphic_window_t4

0x510e,	// (0x0003a9ac) popup_snote2_single_graphic_window_t5_ParamLimits

0x510e,	// (0x0003a9ac) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0004553e) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0004553e) popup_snote2_single_graphic_window_t

0xecb9,	// (0x00044557) clock_nsta_pane_cp2_t1

0xecb9,	// (0x00044557) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00045365) clock_nsta_pane_cp2_t

0x0b73,	// (0x00036411) form_field_data_wide_pane_g1_ParamLimits

0xc1a5,	// (0x00041a43) form_field_data_wide_pane_g2_ParamLimits

0xc1a5,	// (0x00041a43) form_field_data_wide_pane_g2

0xc224,	// (0x00041ac2) form_field_data_wide_pane_g3_ParamLimits

0xc224,	// (0x00041ac2) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x00044f36) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x00044f36) form_field_data_wide_pane_g

0xa865,	// (0x00040103) grid_touch_3_pane_ParamLimits

0xa865,	// (0x00040103) grid_touch_3_pane

0xac85,	// (0x00040523) cell_touch_3_pane_ParamLimits

0xac85,	// (0x00040523) cell_touch_3_pane

0xefc9,	// (0x00044867) cell_touch_3_pane_g1

0xefc9,	// (0x00044867) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x000453ea) cell_touch_3_pane_g

0xbde6,	// (0x00041684) cont_query_data_pane

0xbdee,	// (0x0004168c) cont_query_data_pane_cp1

0x5250,	// (0x0003aaee) button_value_adjust_pane_cp7

0x5258,	// (0x0003aaf6) query_popup_pane_cp3

0xc780,	// (0x0004201e) bg_popup_sub_pane_cp22_ParamLimits

0x20b4,	// (0x00037952) navi_navi_volume_pane_cp2

0x20cf,	// (0x0003796d) popup_side_volume_key_window_g2

0x20de,	// (0x0003797c) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00044fcc) popup_side_volume_key_window_g

0x20fb,	// (0x00037999) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00044fd3) popup_side_volume_key_window_t

0xc9d0,	// (0x0004226e) popup_side_volume_key_window_ParamLimits

0x8975,	// (0x0003e213) list_double_graphic_pane_g4_ParamLimits

0x8975,	// (0x0003e213) list_double_graphic_pane_g4

0x85f7,	// (0x0003de95) list_single_2heading_msg_pane_ParamLimits

0x85f7,	// (0x0003de95) list_single_2heading_msg_pane

0x863f,	// (0x0003dedd) list_single_2heading_msg_pane_g1_ParamLimits

0x863f,	// (0x0003dedd) list_single_2heading_msg_pane_g1

0x864b,	// (0x0003dee9) list_single_2heading_msg_pane_g2_ParamLimits

0x864b,	// (0x0003dee9) list_single_2heading_msg_pane_g2

0x865e,	// (0x0003defc) list_single_2heading_msg_pane_g3_ParamLimits

0x865e,	// (0x0003defc) list_single_2heading_msg_pane_g3

0x866a,	// (0x0003df08) list_single_2heading_msg_pane_g4_ParamLimits

0x866a,	// (0x0003df08) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x00045549) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x00045549) list_single_2heading_msg_pane_g

0x8682,	// (0x0003df20) list_single_2heading_msg_pane_t1_ParamLimits

0x8682,	// (0x0003df20) list_single_2heading_msg_pane_t1

0x86aa,	// (0x0003df48) list_single_2heading_msg_pane_t2_ParamLimits

0x86aa,	// (0x0003df48) list_single_2heading_msg_pane_t2

0x8715,	// (0x0003dfb3) list_single_2heading_msg_pane_t3_ParamLimits

0x8715,	// (0x0003dfb3) list_single_2heading_msg_pane_t3

0x1417,	// (0x00036cb5) list_single_2heading_msg_pane_t4_ParamLimits

0x1417,	// (0x00036cb5) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x00045552) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x00045552) list_single_2heading_msg_pane_t

0xba82,	// (0x00041320) title_pane_g4_ParamLimits

0xba82,	// (0x00041320) title_pane_g4

0x1d9f,	// (0x0003763d) title_pane_stacon_g3_ParamLimits

0x1d9f,	// (0x0003763d) title_pane_stacon_g3

0x4d89,	// (0x0003a627) list_single_2graphic_im_pane_g4_ParamLimits

0x4d89,	// (0x0003a627) list_single_2graphic_im_pane_g4

0xe0e3,	// (0x00043981) popup_side_volume_key_window_cp

0xe5e0,	// (0x00043e7e) main_idle_act2_pane_t1

0x25c6,	// (0x00037e64) toolbar_button_pane_g10

0x9587,	// (0x0003ee25) popup_toolbar_window_cp1

0xecaa,	// (0x00044548) clock_nsta_pane_cp_t1

0xecaa,	// (0x00044548) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00045360) clock_nsta_pane_cp_t

0x20b4,	// (0x00037952) navi_navi_volume_pane_cp2_ParamLimits

0x20c3,	// (0x00037961) popup_side_volume_key_window_g1_ParamLimits

0x20cf,	// (0x0003796d) popup_side_volume_key_window_g2_ParamLimits

0x20de,	// (0x0003797c) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00044fcc) popup_side_volume_key_window_g_ParamLimits

0x2b3e,	// (0x000383dc) fep_hwr_aid_pane

0x8d01,	// (0x0003e59f) bg_fep_hwr_top_pane_g4_ParamLimits

0xf01b,	// (0x000448b9) fep_hwr_top_pane_g1_ParamLimits

0xf02d,	// (0x000448cb) fep_hwr_top_pane_g2_ParamLimits

0x2bf7,	// (0x00038495) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x000453b5) fep_hwr_top_pane_g_ParamLimits

0x2c0c,	// (0x000384aa) fep_hwr_top_text_pane_ParamLimits

0xdea4,	// (0x00043742) aid_touch_tab_arrow_arrow_2

0xdead,	// (0x0004374b) aid_touch_tab_arrow_left_2

0x2b52,	// (0x000383f0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2b89,	// (0x00038427) fep_hwr_prediction_pane

0xf182,	// (0x00044a20) fep_vkb_prediction_pane

0xaa6c,	// (0x0004030a) fep_vkb_side_pane_g3_ParamLimits

0xaa6c,	// (0x0004030a) fep_vkb_side_pane_g3

0xf232,	// (0x00044ad0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4874,	// (0x0003a112) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4881,	// (0x0003a11f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0004545f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x527d,	// (0x0003ab1b) fep_hwr_prediction_pane_g1

0x2eba,	// (0x00038758) fep_hwr_prediction_pane_g2

0x2ec2,	// (0x00038760) fep_hwr_prediction_pane_g3

0x2eca,	// (0x00038768) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0004555b) fep_hwr_prediction_pane_g

0x527d,	// (0x0003ab1b) fep_vkb_prediction_pane_g1

0x5287,	// (0x0003ab25) fep_vkb_prediction_pane_g2

0x528f,	// (0x0003ab2d) fep_vkb_prediction_pane_g3

0x5297,	// (0x0003ab35) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x00045564) fep_vkb_prediction_pane_g

0x289e,	// (0x0003813c) slider_set_pane_g3

0x28b2,	// (0x00038150) slider_set_pane_g4

0x28ca,	// (0x00038168) slider_set_pane_g5

0x289e,	// (0x0003813c) slider_set_pane_g6

0x28e0,	// (0x0003817e) slider_set_pane_g7

0xe366,	// (0x00043c04) slider_form_pane_g3

0xe36f,	// (0x00043c0d) slider_form_pane_g4

0xe377,	// (0x00043c15) slider_form_pane_g5

0xe366,	// (0x00043c04) slider_form_pane_g6

0xa6fc,	// (0x0003ff9a) slider_form_pane_g7

0xe87e,	// (0x0004411c) slider_set_pane_vc_g3

0xe887,	// (0x00044125) slider_set_pane_vc_g4

0xe890,	// (0x0004412e) slider_set_pane_vc_g5

0xe87e,	// (0x0004411c) slider_set_pane_vc_g6

0xe899,	// (0x00044137) slider_set_pane_vc_g7

0xe87e,	// (0x0004411c) slider_form_pane_vc_g1

0xe887,	// (0x00044125) slider_form_pane_vc_g2

0xe890,	// (0x0004412e) slider_form_pane_vc_g3

0xe87e,	// (0x0004411c) slider_form_pane_vc_g4

0xea22,	// (0x000442c0) slider_form_pane_vc_g5

0x0004,

0xfa9b,	// (0x00045339) slider_form_pane_vc_g

0xba64,	// (0x00041302) main_idle_act3_pane

0x529f,	// (0x0003ab3d) ai3_links_pane

0xaccf,	// (0x0004056d) popup_ai3_data_window_ParamLimits

0xaccf,	// (0x0004056d) popup_ai3_data_window

0xba64,	// (0x00041302) grid_ai3_links_pane

0xace7,	// (0x00040585) cell_ai3_links_pane_ParamLimits

0xace7,	// (0x00040585) cell_ai3_links_pane

0x52d8,	// (0x0003ab76) bg_popup_sub_pane_cp11

0x52e5,	// (0x0003ab83) cell_ai3_links_pane_g1

0xba64,	// (0x00041302) bg_popup_sub_pane_cp12

0x530a,	// (0x0003aba8) heading_ai3_data_pane

0x5312,	// (0x0003abb0) list_ai3_gene_pane

0x531e,	// (0x0003abbc) popup_ai3_data_window_g1

0x5326,	// (0x0003abc4) heading_ai3_data_pane_g1

0x532e,	// (0x0003abcc) heading_ai3_data_pane_t1

0x533c,	// (0x0003abda) list_double_ai3_gene_pane_ParamLimits

0x533c,	// (0x0003abda) list_double_ai3_gene_pane

0x5349,	// (0x0003abe7) list_single_ai3_gene_pane_ParamLimits

0x5349,	// (0x0003abe7) list_single_ai3_gene_pane

0xef8e,	// (0x0004482c) list_highlight_pane_cp7_ParamLimits

0xef8e,	// (0x0004482c) list_highlight_pane_cp7

0x5356,	// (0x0003abf4) list_single_a13_gene_pane_t1_ParamLimits

0x5356,	// (0x0003abf4) list_single_a13_gene_pane_t1

0x536d,	// (0x0003ac0b) list_single_ai3_gene_pane_g1

0x5376,	// (0x0003ac14) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0004556d) list_single_ai3_gene_pane_g

0x537e,	// (0x0003ac1c) list_double_ai3_gene_pane_g1_ParamLimits

0x537e,	// (0x0003ac1c) list_double_ai3_gene_pane_g1

0x538a,	// (0x0003ac28) list_double_ai3_gene_pane_t1_ParamLimits

0x538a,	// (0x0003ac28) list_double_ai3_gene_pane_t1

0x53a6,	// (0x0003ac44) list_double_ai3_gene_pane_t2_ParamLimits

0x53a6,	// (0x0003ac44) list_double_ai3_gene_pane_t2

0x53bb,	// (0x0003ac59) list_double_ai3_gene_pane_t3_ParamLimits

0x53bb,	// (0x0003ac59) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x00045572) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x00045572) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1378,	// (0x00036c16) aid_size_min_col_2

0xacb9,	// (0x00040557) aid_size_min_msg_ParamLimits

0xacb9,	// (0x00040557) aid_size_min_msg

0xaa80,	// (0x0004031e) fep_vkb_top_text_pane_g2_ParamLimits

0xaa80,	// (0x0004031e) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x000453e5) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x000453e5) fep_vkb_top_text_pane_g

0xba64,	// (0x00041302) main_hc_apps_shell_pane

0x53d8,	// (0x0003ac76) grid_hc_apps_pane_ParamLimits

0x53d8,	// (0x0003ac76) grid_hc_apps_pane

0x53e7,	// (0x0003ac85) list_hc_apps_pane

0x53ef,	// (0x0003ac8d) scroll_pane_cp37_ParamLimits

0x53ef,	// (0x0003ac8d) scroll_pane_cp37

0xad01,	// (0x0004059f) cell_hc_apps_pane_ParamLimits

0xad01,	// (0x0004059f) cell_hc_apps_pane

0xadc1,	// (0x0004065f) cell_hc_apps_pane_g1_ParamLimits

0xadc1,	// (0x0004065f) cell_hc_apps_pane_g1

0x54dc,	// (0x0003ad7a) cell_hc_apps_pane_g2_ParamLimits

0x54dc,	// (0x0003ad7a) cell_hc_apps_pane_g2

0x54f8,	// (0x0003ad96) cell_hc_apps_pane_g3_ParamLimits

0x54f8,	// (0x0003ad96) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x00045579) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x00045579) cell_hc_apps_pane_g

0xadee,	// (0x0004068c) cell_hc_apps_pane_t1_ParamLimits

0xadee,	// (0x0004068c) cell_hc_apps_pane_t1

0xbcd1,	// (0x0004156f) grid_highlight_pane_cp10_ParamLimits

0xbcd1,	// (0x0004156f) grid_highlight_pane_cp10

0xae2c,	// (0x000406ca) list_single_hc_apps_pane_ParamLimits

0xae2c,	// (0x000406ca) list_single_hc_apps_pane

0xae5f,	// (0x000406fd) list_single_hc_apps_pane_g1

0x8d70,	// (0x0003e60e) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x00045580) list_single_hc_apps_pane_g

0x8d89,	// (0x0003e627) list_single_hc_apps_pane_g2_copy1

0x8783,	// (0x0003e021) list_single_hc_apps_pane_t1

0xbad4,	// (0x00041372) bg_set_opt_pane_cp_ParamLimits

0x1941,	// (0x000371df) setting_slider_pane_t1_ParamLimits

0x195a,	// (0x000371f8) setting_slider_pane_t2_ParamLimits

0x1973,	// (0x00037211) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00044e14) setting_slider_pane_t_ParamLimits

0x198a,	// (0x00037228) slider_set_pane_ParamLimits

0x2494,	// (0x00037d32) control_pane_g5_ParamLimits

0x2494,	// (0x00037d32) control_pane_g5

0xe328,	// (0x00043bc6) slider_set_pane_g1_ParamLimits

0x2892,	// (0x00038130) slider_set_pane_g2_ParamLimits

0x289e,	// (0x0003813c) slider_set_pane_g3_ParamLimits

0x28b2,	// (0x00038150) slider_set_pane_g4_ParamLimits

0x28ca,	// (0x00038168) slider_set_pane_g5_ParamLimits

0x289e,	// (0x0003813c) slider_set_pane_g6_ParamLimits

0x28e0,	// (0x0003817e) slider_set_pane_g7_ParamLimits

0xf975,	// (0x00045213) slider_set_pane_g_ParamLimits

0xcab1,	// (0x0004234f) navi_icon_text_pane_ParamLimits

0x9f87,	// (0x0003f825) aid_fill_nsta_2_ParamLimits

0x9fbe,	// (0x0003f85c) aid_touch_tab_arrow_left_ParamLimits

0x9fd4,	// (0x0003f872) aid_touch_tab_arrow_right_ParamLimits

0xa06f,	// (0x0003f90d) clock_nsta_pane_ParamLimits

0xde86,	// (0x00043724) navi_icon_pane_g1_ParamLimits

0xde92,	// (0x00043730) navi_text_pane_t1_ParamLimits

0xed01,	// (0x0004459f) navi_icon_text_pane_g1_ParamLimits

0xed0d,	// (0x000445ab) navi_icon_text_pane_t1_ParamLimits

0xae5f,	// (0x000406fd) list_single_hc_apps_pane_g1_ParamLimits

0x8d70,	// (0x0003e60e) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x00045580) list_single_hc_apps_pane_g_ParamLimits

0x8d89,	// (0x0003e627) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8783,	// (0x0003e021) list_single_hc_apps_pane_t1_ParamLimits

0x88e7,	// (0x0003e185) popup_toolbar2_fixed_window_ParamLimits

0x88e7,	// (0x0003e185) popup_toolbar2_fixed_window

0x9eec,	// (0x0003f78a) popup_toolbar2_float_window

0xba64,	// (0x00041302) bg_popup_sub_pane_cp27

0x55e6,	// (0x0003ae84) grid_toolbar2_float_pane

0xba64,	// (0x00041302) bg_popup_sub_pane_cp26

0x55e6,	// (0x0003ae84) grid_toolbar2_fixed_pane

0xae78,	// (0x00040716) cell_toolbar2_fixed_pane_ParamLimits

0xae78,	// (0x00040716) cell_toolbar2_fixed_pane

0xae92,	// (0x00040730) cell_toolbar2_fixed_pane_g1

0x5608,	// (0x0003aea6) toolbar2_fixed_button_pane

0xd185,	// (0x00042a23) toolbar2_fixed_button_pane_g1

0xd18d,	// (0x00042a2b) toolbar2_fixed_button_pane_g2

0xd195,	// (0x00042a33) toolbar2_fixed_button_pane_g3

0xd19d,	// (0x00042a3b) toolbar2_fixed_button_pane_g4

0xd1a5,	// (0x00042a43) toolbar2_fixed_button_pane_g5

0xd1ad,	// (0x00042a4b) toolbar2_fixed_button_pane_g6

0xd1b5,	// (0x00042a53) toolbar2_fixed_button_pane_g7

0xd1bd,	// (0x00042a5b) toolbar2_fixed_button_pane_g8

0xd1c5,	// (0x00042a63) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x00045115) toolbar2_fixed_button_pane_g

0x5610,	// (0x0003aeae) cell_toolbar2_float_pane_ParamLimits

0x5610,	// (0x0003aeae) cell_toolbar2_float_pane

0x5621,	// (0x0003aebf) cell_toolbar2_float_pane_g1

0x5608,	// (0x0003aea6) toolbar2_fixed_button_pane_cp

0xaa33,	// (0x000402d1) fep_vkb_accented_list_pane_ParamLimits

0xaa33,	// (0x000402d1) fep_vkb_accented_list_pane

0x2d5a,	// (0x000385f8) bg_popup_fep_shadow_pane_g9

0xcc33,	// (0x000424d1) bg_popup_fep_shadow_pane_cp3

0xc304,	// (0x00041ba2) list_accented_list_pane

0x562a,	// (0x0003aec8) list_single_accented_list_pane_ParamLimits

0x562a,	// (0x0003aec8) list_single_accented_list_pane

0xcc33,	// (0x000424d1) list_highlight_pane_cp10

0x563b,	// (0x0003aed9) list_single_accented_list_pane_t1

0x9e16,	// (0x0003f6b4) popup_slider_window_ParamLimits

0x9e16,	// (0x0003f6b4) popup_slider_window

0x5260,	// (0x0003aafe) aid_indentation_list_msg

0xaf8b,	// (0x00040829) bg_popup_window_pane_cp19

0x575f,	// (0x0003affd) popup_slider_window_g1

0x577b,	// (0x0003b019) popup_slider_window_g2

0x5797,	// (0x0003b035) popup_slider_window_g3

0x0005,

0xfce7,	// (0x00045585) popup_slider_window_g

0x57f3,	// (0x0003b091) popup_slider_window_t1

0x5867,	// (0x0003b105) small_volume_slider_vertical_pane

0xefc9,	// (0x00044867) small_volume_slider_vertical_pane_g1

0xefc9,	// (0x00044867) small_volume_slider_vertical_pane_g2

0x5883,	// (0x0003b121) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x00045597) small_volume_slider_vertical_pane_g

0x8855,	// (0x0003e0f3) area_side_right_pane_ParamLimits

0x8855,	// (0x0003e0f3) area_side_right_pane

0x8da5,	// (0x0003e643) aid_size_side_button_ParamLimits

0x8da5,	// (0x0003e643) aid_size_side_button

0x8dbe,	// (0x0003e65c) grid_sctrl_middle_pane_ParamLimits

0x8dbe,	// (0x0003e65c) grid_sctrl_middle_pane

0x2f3b,	// (0x000387d9) sctrl_sk_bottom_pane

0x2f4c,	// (0x000387ea) sctrl_sk_top_pane

0x2f5e,	// (0x000387fc) aid_touch_sctrl_top

0xbcd1,	// (0x0004156f) bg_sctrl_sk_pane_ParamLimits

0xbcd1,	// (0x0004156f) bg_sctrl_sk_pane

0x2f6b,	// (0x00038809) sctrl_sk_top_pane_g1

0x2f78,	// (0x00038816) sctrl_sk_top_pane_t1

0x2f5e,	// (0x000387fc) aid_touch_sctrl_bottom

0xbcd1,	// (0x0004156f) bg_sctrl_sk_pane_cp_ParamLimits

0xbcd1,	// (0x0004156f) bg_sctrl_sk_pane_cp

0x2f93,	// (0x00038831) sctrl_sk_bottom_pane_g1

0x2f78,	// (0x00038816) sctrl_sk_bottom_pane_t1

0x8dd8,	// (0x0003e676) cell_sctrl_middle_pane_ParamLimits

0x8dd8,	// (0x0003e676) cell_sctrl_middle_pane

0x8de9,	// (0x0003e687) aid_touch_sctrl_middle_ParamLimits

0x8de9,	// (0x0003e687) aid_touch_sctrl_middle

0x8df6,	// (0x0003e694) bg_sctrl_middle_pane_ParamLimits

0x8df6,	// (0x0003e694) bg_sctrl_middle_pane

0x590b,	// (0x0003b1a9) cell_sctrl_middle_pane_g1_ParamLimits

0x590b,	// (0x0003b1a9) cell_sctrl_middle_pane_g1

0x8e04,	// (0x0003e6a2) cell_sctrl_middle_pane_g2_ParamLimits

0x8e04,	// (0x0003e6a2) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x000455a3) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x000455a3) cell_sctrl_middle_pane_g

0xd185,	// (0x00042a23) bg_sctrl_middle_pane_g1

0xd18d,	// (0x00042a2b) bg_sctrl_middle_pane_g2

0xd195,	// (0x00042a33) bg_sctrl_middle_pane_g3

0xd19d,	// (0x00042a3b) bg_sctrl_middle_pane_g4

0xd1a5,	// (0x00042a43) bg_sctrl_middle_pane_g5

0xd1ad,	// (0x00042a4b) bg_sctrl_middle_pane_g6

0xd1b5,	// (0x00042a53) bg_sctrl_middle_pane_g7

0xd1bd,	// (0x00042a5b) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x000455a8) bg_sctrl_middle_pane_g

0xd1c5,	// (0x00042a63) bg_sctrl_middle_pane_g8_copy1

0xd185,	// (0x00042a23) bg_sctrl_sk_pane_g1

0xd18d,	// (0x00042a2b) bg_sctrl_sk_pane_g2

0xd195,	// (0x00042a33) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x00045115) bg_sctrl_sk_pane_g

0xc137,	// (0x000419d5) aid_size_touch_scroll_bar

0xd19d,	// (0x00042a3b) bg_sctrl_sk_pane_g4

0xd1a5,	// (0x00042a43) bg_sctrl_sk_pane_g5

0xd1ad,	// (0x00042a4b) bg_sctrl_sk_pane_g6

0xd1b5,	// (0x00042a53) bg_sctrl_sk_pane_g7

0xd1bd,	// (0x00042a5b) bg_sctrl_sk_pane_g8

0xd1c5,	// (0x00042a63) bg_sctrl_sk_pane_g9

0xceb9,	// (0x00042757) popup_fep_china_hwr2_fs_candidate_window

0x9950,	// (0x0003f1ee) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9950,	// (0x0003f1ee) popup_fep_china_hwr2_fs_control_window

0xf232,	// (0x00044ad0) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0004559e) sctrl_sk_top_pane_g

0xb043,	// (0x000408e1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb043,	// (0x000408e1) aid_fep_china_hwr2_fs_cell

0xb057,	// (0x000408f5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb057,	// (0x000408f5) bg_popup_fep_shadow_pane_cp4

0xb06e,	// (0x0004090c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb06e,	// (0x0004090c) bg_popup_fep_shadow_pane_cp5

0xb080,	// (0x0004091e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb080,	// (0x0004091e) popup_fep_china_hwr2_fs_control_bar_grid

0xb094,	// (0x00040932) popup_fep_china_hwr2_fs_control_funtion_grid

0x58df,	// (0x0003b17d) aid_fep_china_hwr2_fs_candi_cell

0xba64,	// (0x00041302) bg_popup_fep_shadow_pane_cp6

0x58e9,	// (0x0003b187) popup_fep_china_hwr2_fs_candidate_grid

0xb09c,	// (0x0004093a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb09c,	// (0x0004093a) cell_fep_china_hwr2_fs_funtion_grid

0xefc9,	// (0x00044867) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x590b,	// (0x0003b1a9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x590b,	// (0x0003b1a9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5919,	// (0x0003b1b7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5919,	// (0x0003b1b7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x000455b9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x000455b9) cell_fep_china_hwr2_fs_funtion_grid_g

0xb0b4,	// (0x00040952) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb0b4,	// (0x00040952) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb0c9,	// (0x00040967) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb0c9,	// (0x00040967) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x000455be) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x000455be) cell_fep_china_hwr2_fs_funtion_grid_t

0x5960,	// (0x0003b1fe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5968,	// (0x0003b206) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5970,	// (0x0003b20e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x000455c3) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5978,	// (0x0003b216) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5978,	// (0x0003b216) cell_fep_china_hwr2_fs_candidate_grid

0x5991,	// (0x0003b22f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5999,	// (0x0003b237) popup_fep_china_hwr2_fs_candidate_grid_g21

0xefc9,	// (0x00044867) cell_fep_china_hwr2_fs_candidate_grid_g1

0xefc9,	// (0x00044867) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x000453ea) cell_fep_china_hwr2_fs_candidate_grid_g

0x59a1,	// (0x0003b23f) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcfc6,	// (0x00042864) clock_nsta_pane_cp_24_ParamLimits

0xcfc6,	// (0x00042864) clock_nsta_pane_cp_24

0xd02e,	// (0x000428cc) indicator_nsta_pane_cp_24_ParamLimits

0xd02e,	// (0x000428cc) indicator_nsta_pane_cp_24

0xdd9c,	// (0x0004363a) heading_pane_g1

0x0001,

0xf8dc,	// (0x0004517a) heading_pane_g

0xe46b,	// (0x00043d09) grid_sct_catagory_button_pane

0xe28f,	// (0x00043b2d) scroll_pane_cp5_ParamLimits

0xed33,	// (0x000445d1) button_value_adjust_pane_cp5_ParamLimits

0xed33,	// (0x000445d1) button_value_adjust_pane_cp5

0xedf1,	// (0x0004468f) form2_midp_time_pane_ParamLimits

0x59af,	// (0x0003b24d) cell_sct_catagory_button_pane_ParamLimits

0x59af,	// (0x0003b24d) cell_sct_catagory_button_pane

0xef8e,	// (0x0004482c) bg_button_pane_cp01_ParamLimits

0xef8e,	// (0x0004482c) bg_button_pane_cp01

0xefc9,	// (0x00044867) cell_sct_catagory_button_pane_g1

0x9e8f,	// (0x0003f72d) popup_tb_extension_window

0xb0e5,	// (0x00040983) aid_size_cell_ext_ParamLimits

0xb0e5,	// (0x00040983) aid_size_cell_ext

0xbf79,	// (0x00041817) bg_tb_trans_pane_cp1_ParamLimits

0xbf79,	// (0x00041817) bg_tb_trans_pane_cp1

0xb10b,	// (0x000409a9) grid_tb_ext_pane_ParamLimits

0xb10b,	// (0x000409a9) grid_tb_ext_pane

0xb148,	// (0x000409e6) cell_tb_ext_pane_ParamLimits

0xb148,	// (0x000409e6) cell_tb_ext_pane

0xb170,	// (0x00040a0e) cell_tb_ext_pane_g1_ParamLimits

0xb170,	// (0x00040a0e) cell_tb_ext_pane_g1

0x5a45,	// (0x0003b2e3) cell_tb_ext_pane_t1

0xbcd1,	// (0x0004156f) list_highlight_pane_cp11_ParamLimits

0xbcd1,	// (0x0004156f) list_highlight_pane_cp11

0x17b4,	// (0x00037052) popup_uni_indicator_window_ParamLimits

0x17b4,	// (0x00037052) popup_uni_indicator_window

0xc20a,	// (0x00041aa8) bg_popup_sub_pane_cp14

0x5a60,	// (0x0003b2fe) list_uniindi_pane

0x5a6c,	// (0x0003b30a) uniindi_top_pane

0xbcd1,	// (0x0004156f) bg_uniindi_top_pane

0x5a8b,	// (0x0003b329) uniindi_top_pane_g1

0x5aa1,	// (0x0003b33f) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x000455ca) uniindi_top_pane_g

0x5acb,	// (0x0003b369) uniindi_top_pane_t1

0x5af5,	// (0x0003b393) list_single_uniindi_pane_ParamLimits

0x5af5,	// (0x0003b393) list_single_uniindi_pane

0xefc9,	// (0x00044867) bg_uniindi_top_pane_g1

0x5b07,	// (0x0003b3a5) list_single_uniindi_pane_g1

0x5b1a,	// (0x0003b3b8) list_single_uniindi_pane_t1

0xba64,	// (0x00041302) control_bg_pane

0x5b3f,	// (0x0003b3dd) bg_sctrl_sk_pane_cp1

0x5b48,	// (0x0003b3e6) bg_sctrl_sk_pane_cp2

0x5b51,	// (0x0003b3ef) control_bg_pane_g1

0x5b5a,	// (0x0003b3f8) control_bg_pane_g2

0x0001,

0xfd35,	// (0x000455d3) control_bg_pane_g

0xebec,	// (0x0004448a) cell_indicator_nsta_pane_g1_ParamLimits

0xa898,	// (0x00040136) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0004534e) cell_indicator_nsta_pane_g_ParamLimits

0x1141,	// (0x000369df) form2_midp_time_pane_t1_ParamLimits

0x8b34,	// (0x0003e3d2) main_idle_act4_pane_ParamLimits

0x8b34,	// (0x0003e3d2) main_idle_act4_pane

0x9e8f,	// (0x0003f72d) popup_tb_extension_window_ParamLimits

0xb12f,	// (0x000409cd) tb_ext_find_pane_ParamLimits

0xb12f,	// (0x000409cd) tb_ext_find_pane

0x5b63,	// (0x0003b401) ai_gene_pane_1_cp1

0xccc7,	// (0x00042565) ai_gene_pane_2_cp1

0x5b6b,	// (0x0003b409) list_single_idle_plugin_calendar_pane

0x5b74,	// (0x0003b412) list_single_idle_plugin_notification_pane

0x5b7d,	// (0x0003b41b) list_single_idle_plugin_player_pane

0xb18d,	// (0x00040a2b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb18d,	// (0x00040a2b) list_single_idle_plugin_shortcut_pane

0xb1b5,	// (0x00040a53) main_idle_act4_pane_t1

0xb1cb,	// (0x00040a69) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x000455d8) main_idle_act4_pane_t

0xb1e3,	// (0x00040a81) middle_sk_idle_act4_pane_ParamLimits

0xb1e3,	// (0x00040a81) middle_sk_idle_act4_pane

0xb1ff,	// (0x00040a9d) popup_clock_digital_analogue_window_cp2

0xb226,	// (0x00040ac4) shortcut_wheel_idle_act4_pane_ParamLimits

0xb226,	// (0x00040ac4) shortcut_wheel_idle_act4_pane

0xefc9,	// (0x00044867) shortcut_wheel_idle_act4_pane_g1

0xefc9,	// (0x00044867) shortcut_wheel_idle_act4_pane_g2

0xefc9,	// (0x00044867) shortcut_wheel_idle_act4_pane_g3

0xefc9,	// (0x00044867) shortcut_wheel_idle_act4_pane_g4

0xefc9,	// (0x00044867) shortcut_wheel_idle_act4_pane_g5

0x5c10,	// (0x0003b4ae) shortcut_wheel_idle_act4_pane_g6

0x5c18,	// (0x0003b4b6) shortcut_wheel_idle_act4_pane_g7

0x5c20,	// (0x0003b4be) shortcut_wheel_idle_act4_pane_g8

0x5c28,	// (0x0003b4c6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x000455dd) shortcut_wheel_idle_act4_pane_g

0x8d01,	// (0x0003e59f) middle_sk_idle_act4_pane_g1_ParamLimits

0x8d01,	// (0x0003e59f) middle_sk_idle_act4_pane_g1

0xb2a3,	// (0x00040b41) middle_sk_idle_act4_pane_g2_ParamLimits

0xb2a3,	// (0x00040b41) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x00045600) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x00045600) middle_sk_idle_act4_pane_g

0xb2bb,	// (0x00040b59) middle_sk_idle_act4_pane_t1_ParamLimits

0xb2bb,	// (0x00040b59) middle_sk_idle_act4_pane_t1

0xb2ea,	// (0x00040b88) grid_ai_shortcut_pane_ParamLimits

0xb2ea,	// (0x00040b88) grid_ai_shortcut_pane

0xb307,	// (0x00040ba5) list_highlight_pane_cp16_ParamLimits

0xb307,	// (0x00040ba5) list_highlight_pane_cp16

0xb314,	// (0x00040bb2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb314,	// (0x00040bb2) list_single_idle_plugin_shortcut_pane_g1

0xb320,	// (0x00040bbe) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb320,	// (0x00040bbe) list_single_idle_plugin_shortcut_pane_g2

0xb33c,	// (0x00040bda) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb33c,	// (0x00040bda) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x00045605) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x00045605) list_single_idle_plugin_shortcut_pane_g

0xb351,	// (0x00040bef) cell_ai_shortcut_pane_ParamLimits

0xb351,	// (0x00040bef) cell_ai_shortcut_pane

0xb367,	// (0x00040c05) cell_ai_shortcut_pane_g1_ParamLimits

0xb367,	// (0x00040c05) cell_ai_shortcut_pane_g1

0x5b63,	// (0x0003b401) ai_gene_pane_1_cp2

0x5d55,	// (0x0003b5f3) ai_gene_pane_2_cp2

0x5d5d,	// (0x0003b5fb) list_highlight_pane_cp15

0x5d66,	// (0x0003b604) list_single_idle_plugin_calendar_pane_g1

0x5d5d,	// (0x0003b5fb) list_highlight_pane_cp17

0x5d6e,	// (0x0003b60c) list_single_idle_plugin_calendar_pane_g1_copy1

0x5d76,	// (0x0003b614) list_single_idle_plugin_player_pane_g1

0xe680,	// (0x00043f1e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0004560c) list_single_idle_plugin_player_pane_g

0x5d7e,	// (0x0003b61c) list_single_idle_plugin_player_pane_t1

0x5d8c,	// (0x0003b62a) list_single_idle_plugin_player_pane_t2

0x5d9a,	// (0x0003b638) list_single_idle_plugin_player_pane_t3

0x5da8,	// (0x0003b646) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x00045611) list_single_idle_plugin_player_pane_t

0x5db6,	// (0x0003b654) wait_bar_pane_cp15

0x5dbe,	// (0x0003b65c) grid_ai_notification_pane

0xe680,	// (0x00043f1e) list_single_idle_plugin_notification_pane_g1

0xb389,	// (0x00040c27) cell_ai_notification_pane_ParamLimits

0xb389,	// (0x00040c27) cell_ai_notification_pane

0x5dd4,	// (0x0003b672) cell_ai_notification_pane_g1

0x5ddc,	// (0x0003b67a) cell_ai_notification_pane_t1

0xb396,	// (0x00040c34) tb_ext_find_button_pane

0xb39e,	// (0x00040c3c) tb_ext_find_pane_g1

0xb3a6,	// (0x00040c44) tb_ext_find_pane_t1

0xc71f,	// (0x00041fbd) tb_ext_find_button_pane_g1

0x5e08,	// (0x0003b6a6) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0004561a) tb_ext_find_button_pane_g

0xb1b5,	// (0x00040a53) main_idle_act4_pane_t1_ParamLimits

0xb1cb,	// (0x00040a69) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x000455d8) main_idle_act4_pane_t_ParamLimits

0xb1ff,	// (0x00040a9d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb216,	// (0x00040ab4) sat_plugin_idle_act4_pane_ParamLimits

0xb216,	// (0x00040ab4) sat_plugin_idle_act4_pane

0xb3b4,	// (0x00040c52) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb3b4,	// (0x00040c52) sat_plugin_idle_act4_pane_t1

0xb3cc,	// (0x00040c6a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb3cc,	// (0x00040c6a) sat_plugin_idle_act4_pane_t2

0xb3e4,	// (0x00040c82) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb3e4,	// (0x00040c82) sat_plugin_idle_act4_pane_t3

0xb3fc,	// (0x00040c9a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb3fc,	// (0x00040c9a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0004561f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0004561f) sat_plugin_idle_act4_pane_t

0x16fd,	// (0x00036f9b) popup_battery_window_ParamLimits

0x16fd,	// (0x00036f9b) popup_battery_window

0xbcd1,	// (0x0004156f) bg_popup_sub_pane_cp25_ParamLimits

0xbcd1,	// (0x0004156f) bg_popup_sub_pane_cp25

0x5e5d,	// (0x0003b6fb) popup_battery_window_g1_ParamLimits

0x5e5d,	// (0x0003b6fb) popup_battery_window_g1

0x5e69,	// (0x0003b707) popup_battery_window_t1_ParamLimits

0x5e69,	// (0x0003b707) popup_battery_window_t1

0x5e7b,	// (0x0003b719) popup_battery_window_t2_ParamLimits

0x5e7b,	// (0x0003b719) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x00045628) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x00045628) popup_battery_window_t

0x97f9,	// (0x0003f097) midp_canvas_pane_ParamLimits

0x9856,	// (0x0003f0f4) midp_keypad_pane_ParamLimits

0x9856,	// (0x0003f0f4) midp_keypad_pane

0xc355,	// (0x00041bf3) main_midp_pane_ParamLimits

0xecc8,	// (0x00044566) signal_pane_g2_cp_ParamLimits

0xb414,	// (0x00040cb2) aid_size_cell_midp_keypad_ParamLimits

0xb414,	// (0x00040cb2) aid_size_cell_midp_keypad

0xb432,	// (0x00040cd0) midp_keyp_game_grid_pane_ParamLimits

0xb432,	// (0x00040cd0) midp_keyp_game_grid_pane

0xb459,	// (0x00040cf7) midp_keyp_rocker_pane_ParamLimits

0xb459,	// (0x00040cf7) midp_keyp_rocker_pane

0xb49a,	// (0x00040d38) midp_keyp_sk_left_pane_ParamLimits

0xb49a,	// (0x00040d38) midp_keyp_sk_left_pane

0xb4ee,	// (0x00040d8c) midp_keyp_sk_right_pane_ParamLimits

0xb4ee,	// (0x00040d8c) midp_keyp_sk_right_pane

0xba64,	// (0x00041302) bg_button_pane_cp03

0xb542,	// (0x00040de0) midp_keyp_sk_left_pane_g1

0xba64,	// (0x00041302) bg_button_pane_cp04

0xb542,	// (0x00040de0) midp_keyp_sk_right_pane_g1

0xefc9,	// (0x00044867) midp_keyp_rocker_pane_g1

0xb54b,	// (0x00040de9) keyp_game_cell_pane_ParamLimits

0xb54b,	// (0x00040de9) keyp_game_cell_pane

0xba64,	// (0x00041302) bg_button_pane_cp02

0xb56f,	// (0x00040e0d) keyp_game_cell_pane_g1

0x8897,	// (0x0003e135) popup_fep_vkb2_window_ParamLimits

0x8897,	// (0x0003e135) popup_fep_vkb2_window

0x8e10,	// (0x0003e6ae) aid_size_cell_vkb2_ParamLimits

0x8e10,	// (0x0003e6ae) aid_size_cell_vkb2

0x8e46,	// (0x0003e6e4) popup_fep_vkb2_window_g1_ParamLimits

0x8e46,	// (0x0003e6e4) popup_fep_vkb2_window_g1

0x8e8d,	// (0x0003e72b) vkb2_area_bottom_pane_ParamLimits

0x8e8d,	// (0x0003e72b) vkb2_area_bottom_pane

0x8ee1,	// (0x0003e77f) vkb2_area_keypad_pane_ParamLimits

0x8ee1,	// (0x0003e77f) vkb2_area_keypad_pane

0x8f29,	// (0x0003e7c7) vkb2_area_top_pane_ParamLimits

0x8f29,	// (0x0003e7c7) vkb2_area_top_pane

0x8faf,	// (0x0003e84d) vkb2_top_entry_pane_ParamLimits

0x8faf,	// (0x0003e84d) vkb2_top_entry_pane

0x8fdc,	// (0x0003e87a) vkb2_top_grid_left_pane_ParamLimits

0x8fdc,	// (0x0003e87a) vkb2_top_grid_left_pane

0x8ffc,	// (0x0003e89a) vkb2_top_grid_right_pane_ParamLimits

0x8ffc,	// (0x0003e89a) vkb2_top_grid_right_pane

0x31e9,	// (0x00038a87) vkb2_cell_keypad_pane_ParamLimits

0x31e9,	// (0x00038a87) vkb2_cell_keypad_pane

0x9042,	// (0x0003e8e0) vkb2_area_bottom_grid_pane_ParamLimits

0x9042,	// (0x0003e8e0) vkb2_area_bottom_grid_pane

0x906c,	// (0x0003e90a) vkb2_area_bottom_pane_g1_ParamLimits

0x906c,	// (0x0003e90a) vkb2_area_bottom_pane_g1

0x9092,	// (0x0003e930) vkb2_area_bottom_pane_g2_ParamLimits

0x9092,	// (0x0003e930) vkb2_area_bottom_pane_g2

0x90c3,	// (0x0003e961) vkb2_area_bottom_pane_g3_ParamLimits

0x90c3,	// (0x0003e961) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0004562d) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0004562d) vkb2_area_bottom_pane_g

0x3393,	// (0x00038c31) vkb2_top_cell_left_pane_ParamLimits

0x3393,	// (0x00038c31) vkb2_top_cell_left_pane

0xb578,	// (0x00040e16) vkb2_top_entry_pane_g1_ParamLimits

0xb578,	// (0x00040e16) vkb2_top_entry_pane_g1

0xb586,	// (0x00040e24) vkb2_top_entry_pane_t1_ParamLimits

0xb586,	// (0x00040e24) vkb2_top_entry_pane_t1

0x5fff,	// (0x0003b89d) vkb2_top_entry_pane_t2_ParamLimits

0x5fff,	// (0x0003b89d) vkb2_top_entry_pane_t2

0x6031,	// (0x0003b8cf) vkb2_top_entry_pane_t3_ParamLimits

0x6031,	// (0x0003b8cf) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x00045634) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x00045634) vkb2_top_entry_pane_t

0x912d,	// (0x0003e9cb) vkb2_top_grid_right_pane_g1_ParamLimits

0x912d,	// (0x0003e9cb) vkb2_top_grid_right_pane_g1

0x33f6,	// (0x00038c94) vkb2_top_grid_right_pane_g2_ParamLimits

0x33f6,	// (0x00038c94) vkb2_top_grid_right_pane_g2

0x340e,	// (0x00038cac) vkb2_top_grid_right_pane_g3_ParamLimits

0x340e,	// (0x00038cac) vkb2_top_grid_right_pane_g3

0x9143,	// (0x0003e9e1) vkb2_top_grid_right_pane_g4_ParamLimits

0x9143,	// (0x0003e9e1) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0004563b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0004563b) vkb2_top_grid_right_pane_g

0x343c,	// (0x00038cda) vkb2_top_cell_left_pane_g1

0x3453,	// (0x00038cf1) vkb2_cell_keypad_pane_g1_ParamLimits

0x3453,	// (0x00038cf1) vkb2_cell_keypad_pane_g1

0x6055,	// (0x0003b8f3) vkb2_cell_keypad_pane_t1_ParamLimits

0x6055,	// (0x0003b8f3) vkb2_cell_keypad_pane_t1

0x3461,	// (0x00038cff) vkb2_cell_bottom_grid_pane_ParamLimits

0x3461,	// (0x00038cff) vkb2_cell_bottom_grid_pane

0x349a,	// (0x00038d38) vkb2_cell_bottom_grid_pane_g1

0xb247,	// (0x00040ae5) aid_call2_pane_cp02

0xb24f,	// (0x00040aed) aid_call_pane_cp02

0xb257,	// (0x00040af5) clock_digital_number_pane_cp10

0xb25f,	// (0x00040afd) clock_digital_number_pane_cp11

0xb267,	// (0x00040b05) clock_digital_number_pane_cp12

0xb26f,	// (0x00040b0d) clock_digital_number_pane_cp13

0xb277,	// (0x00040b15) clock_digital_separator_pane_cp10

0xc71f,	// (0x00041fbd) popup_clock_digital_analogue_window_cp2_g1

0xc71f,	// (0x00041fbd) popup_clock_digital_analogue_window_cp2_g2

0xb27f,	// (0x00040b1d) popup_clock_digital_analogue_window_cp2_g3

0xc71f,	// (0x00041fbd) popup_clock_digital_analogue_window_cp2_g4

0xb27f,	// (0x00040b1d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x000455f0) popup_clock_digital_analogue_window_cp2_g

0xb287,	// (0x00040b25) popup_clock_digital_analogue_window_cp2_t1

0xb295,	// (0x00040b33) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x000455fb) popup_clock_digital_analogue_window_cp2_t

0xefc9,	// (0x00044867) clock_digital_number_pane_cp10_g1

0xefc9,	// (0x00044867) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x000453ea) clock_digital_number_pane_cp10_g

0xefc9,	// (0x00044867) clock_digital_separator_pane_cp10_g1

0xefc9,	// (0x00044867) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x000453ea) clock_digital_separator_pane_cp10_g

0x5aad,	// (0x0003b34b) uniindi_top_pane_g3

0x5abe,	// (0x0003b35c) uniindi_top_pane_g4

0x3274,	// (0x00038b12) vkb2_row_keypad_pane_ParamLimits

0x3274,	// (0x00038b12) vkb2_row_keypad_pane

0x34ba,	// (0x00038d58) vkb2_cell_t_keypad_pane_ParamLimits

0x34ba,	// (0x00038d58) vkb2_cell_t_keypad_pane

0x34ca,	// (0x00038d68) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x34ca,	// (0x00038d68) vkb2_cell_t_keypad_pane_cp08

0x34dd,	// (0x00038d7b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x34dd,	// (0x00038d7b) vkb2_cell_t_keypad_pane_cp09

0x34f1,	// (0x00038d8f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x34f1,	// (0x00038d8f) vkb2_cell_t_keypad_pane_cp01

0x3502,	// (0x00038da0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3502,	// (0x00038da0) vkb2_cell_t_keypad_pane_cp02

0x3513,	// (0x00038db1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3513,	// (0x00038db1) vkb2_cell_t_keypad_pane_cp03

0x3524,	// (0x00038dc2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3524,	// (0x00038dc2) vkb2_cell_t_keypad_pane_cp04

0x3535,	// (0x00038dd3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3535,	// (0x00038dd3) vkb2_cell_t_keypad_pane_cp05

0x3546,	// (0x00038de4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3546,	// (0x00038de4) vkb2_cell_t_keypad_pane_cp06

0x3557,	// (0x00038df5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3557,	// (0x00038df5) vkb2_cell_t_keypad_pane_cp07

0x3568,	// (0x00038e06) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3568,	// (0x00038e06) vkb2_cell_t_keypad_pane_cp10

0xf232,	// (0x00044ad0) vkb2_cell_t_keypad_pane_g1

0x606c,	// (0x0003b90a) vkb2_cell_t_keypad_pane_t1

0xba64,	// (0x00041302) popup_grid_graphic2_window

0xb5bf,	// (0x00040e5d) aid_size_cell_graphic2_ParamLimits

0xb5bf,	// (0x00040e5d) aid_size_cell_graphic2

0xb5fd,	// (0x00040e9b) bg_popup_window_pane_cp21_ParamLimits

0xb5fd,	// (0x00040e9b) bg_popup_window_pane_cp21

0xb60b,	// (0x00040ea9) graphic2_pages_pane_ParamLimits

0xb60b,	// (0x00040ea9) graphic2_pages_pane

0xb661,	// (0x00040eff) grid_graphic2_control_pane_ParamLimits

0xb661,	// (0x00040eff) grid_graphic2_control_pane

0xb6b6,	// (0x00040f54) grid_graphic2_pane_ParamLimits

0xb6b6,	// (0x00040f54) grid_graphic2_pane

0xb73d,	// (0x00040fdb) cell_graphic2_pane

0xba64,	// (0x00041302) main_comp_mode_pane

0x5312,	// (0x0003abb0) list_ai3_gene_pane_ParamLimits

0xaf8b,	// (0x00040829) bg_popup_window_pane_cp19_ParamLimits

0x5701,	// (0x0003af9f) bg_touch_area_indi_pane_ParamLimits

0x5701,	// (0x0003af9f) bg_touch_area_indi_pane

0x5717,	// (0x0003afb5) bg_touch_area_indi_pane_cp01_ParamLimits

0x5717,	// (0x0003afb5) bg_touch_area_indi_pane_cp01

0x572d,	// (0x0003afcb) bg_touch_area_indi_pane_cp02_ParamLimits

0x572d,	// (0x0003afcb) bg_touch_area_indi_pane_cp02

0x5745,	// (0x0003afe3) bg_touch_area_indi_pane_cp03_ParamLimits

0x5745,	// (0x0003afe3) bg_touch_area_indi_pane_cp03

0x575f,	// (0x0003affd) popup_slider_window_g1_ParamLimits

0x577b,	// (0x0003b019) popup_slider_window_g2_ParamLimits

0x5797,	// (0x0003b035) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x00045585) popup_slider_window_g_ParamLimits

0x57f3,	// (0x0003b091) popup_slider_window_t1_ParamLimits

0x5867,	// (0x0003b105) small_volume_slider_vertical_pane_ParamLimits

0xb73d,	// (0x00040fdb) cell_graphic2_pane_ParamLimits

0xb79a,	// (0x00041038) bg_button_pane_cp10_ParamLimits

0xb79a,	// (0x00041038) bg_button_pane_cp10

0xb7ad,	// (0x0004104b) bg_button_pane_cp11_ParamLimits

0xb7ad,	// (0x0004104b) bg_button_pane_cp11

0xb7c0,	// (0x0004105e) graphic2_pages_pane_g1_ParamLimits

0xb7c0,	// (0x0004105e) graphic2_pages_pane_g1

0xb7db,	// (0x00041079) graphic2_pages_pane_g2_ParamLimits

0xb7db,	// (0x00041079) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x00045649) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x00045649) graphic2_pages_pane_g

0xb7f3,	// (0x00041091) graphic2_pages_pane_t1_ParamLimits

0xb7f3,	// (0x00041091) graphic2_pages_pane_t1

0xb80b,	// (0x000410a9) cell_graphic2_control_pane_ParamLimits

0xb80b,	// (0x000410a9) cell_graphic2_control_pane

0xb83d,	// (0x000410db) cell_graphic2_pane_g1_ParamLimits

0xb83d,	// (0x000410db) cell_graphic2_pane_g1

0x95aa,	// (0x0003ee48) cell_graphic2_pane_g2_ParamLimits

0x95aa,	// (0x0003ee48) cell_graphic2_pane_g2

0xb6a9,	// (0x00040f47) cell_graphic2_pane_g3_ParamLimits

0xb6a9,	// (0x00040f47) cell_graphic2_pane_g3

0x95b7,	// (0x0003ee55) cell_graphic2_pane_g4_ParamLimits

0x95b7,	// (0x0003ee55) cell_graphic2_pane_g4

0xb84a,	// (0x000410e8) cell_graphic2_pane_g5_ParamLimits

0xb84a,	// (0x000410e8) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0004564e) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0004564e) cell_graphic2_pane_g

0xb86a,	// (0x00041108) cell_graphic2_pane_t1_ParamLimits

0xb86a,	// (0x00041108) cell_graphic2_pane_t1

0xdd90,	// (0x0004362e) grid_highlight_pane_cp11_ParamLimits

0xdd90,	// (0x0004362e) grid_highlight_pane_cp11

0xbcd1,	// (0x0004156f) bg_button_pane_cp05

0xb89f,	// (0x0004113d) cell_graphic2_control_pane_g1

0xefc9,	// (0x00044867) bg_touch_area_indi_pane_g1

0x607e,	// (0x0003b91c) aid_cmod_rocker_key_size

0x6088,	// (0x0003b926) aid_cmode_itu_key_size

0x6092,	// (0x0003b930) main_cmode_video_pane

0x609c,	// (0x0003b93a) main_comp_mode_itu_pane

0x60a8,	// (0x0003b946) main_comp_mode_rocker_pane

0x60b4,	// (0x0003b952) cell_cmode_rocker_pane_ParamLimits

0x60b4,	// (0x0003b952) cell_cmode_rocker_pane

0x60c6,	// (0x0003b964) cell_cmode_itu_pane_ParamLimits

0x60c6,	// (0x0003b964) cell_cmode_itu_pane

0xc20a,	// (0x00041aa8) bg_button_pane_cp06_ParamLimits

0xc20a,	// (0x00041aa8) bg_button_pane_cp06

0xf232,	// (0x00044ad0) cell_cmode_rocker_pane_g1_ParamLimits

0xf232,	// (0x00044ad0) cell_cmode_rocker_pane_g1

0x590b,	// (0x0003b1a9) cell_cmode_rocker_pane_g2_ParamLimits

0x590b,	// (0x0003b1a9) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0004565e) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0004565e) cell_cmode_rocker_pane_g

0xba64,	// (0x00041302) bg_button_pane_cp07

0x60db,	// (0x0003b979) cell_cmode_itu_pane_g1

0x60e4,	// (0x0003b982) cell_cmode_itu_pane_t1

0x60f2,	// (0x0003b990) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x00045663) cell_cmode_itu_pane_t

0x5b2f,	// (0x0003b3cd) aid_touch_ctrl_left

0x5b37,	// (0x0003b3d5) aid_touch_ctrl_right

0xba64,	// (0x00041302) compa_mode_pane

0xb8c5,	// (0x00041163) aid_cmod_rocker_key_size_cp

0xb8cf,	// (0x0004116d) aid_cmode_itu_key_size_cp

0x6100,	// (0x0003b99e) compa_mode_pane_g1

0x6108,	// (0x0003b9a6) compa_mode_pane_g2

0x6110,	// (0x0003b9ae) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x00045668) compa_mode_pane_g

0xb8d9,	// (0x00041177) main_comp_mode_itu_pane_cp

0xb8e1,	// (0x0004117f) main_comp_mode_rocker_pane_cp

0xb8e9,	// (0x00041187) cell_cmode_itu_pane_cp_ParamLimits

0xb8e9,	// (0x00041187) cell_cmode_itu_pane_cp

0xb8fe,	// (0x0004119c) cell_cmode_rocker_pane_cp_ParamLimits

0xb8fe,	// (0x0004119c) cell_cmode_rocker_pane_cp

0xc20a,	// (0x00041aa8) bg_button_pane_cp06_cp_ParamLimits

0xc20a,	// (0x00041aa8) bg_button_pane_cp06_cp

0xf232,	// (0x00044ad0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xf232,	// (0x00044ad0) cell_cmode_rocker_pane_g1_cp

0xefc9,	// (0x00044867) cell_cmode_rocker_pane_g2_cp

0xba64,	// (0x00041302) bg_button_pane_cp07_cp

0xb910,	// (0x000411ae) cell_cmode_itu_pane_g1_cp

0xb919,	// (0x000411b7) cell_cmode_itu_pane_t1_cp

0xb919,	// (0x000411b7) cell_cmode_itu_pane_t2_cp

0xa6f2,	// (0x0003ff90) settings_code_pane_cp2

0xbad4,	// (0x00041372) bg_popup_window_pane_cp3_ParamLimits

0xbf0a,	// (0x000417a8) heading_pane_cp3_ParamLimits

0xbf16,	// (0x000417b4) listscroll_popup_graphic_pane_ParamLimits

0x2b3e,	// (0x000383dc) fep_hwr_aid_pane_ParamLimits

0x2f5e,	// (0x000387fc) aid_touch_sctrl_top_ParamLimits

0x2f6b,	// (0x00038809) sctrl_sk_top_pane_g1_ParamLimits

0xf232,	// (0x00044ad0) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0004559e) sctrl_sk_top_pane_g_ParamLimits

0x2f78,	// (0x00038816) sctrl_sk_top_pane_t1_ParamLimits

0x2f5e,	// (0x000387fc) aid_touch_sctrl_bottom_ParamLimits

0x2f78,	// (0x00038816) sctrl_sk_bottom_pane_t1_ParamLimits

0x5a79,	// (0x0003b317) aid_area_touch_clock

0x8f71,	// (0x0003e80f) aid_vkb2_area_top_pane_cell_ParamLimits

0x8f71,	// (0x0003e80f) aid_vkb2_area_top_pane_cell

0x901c,	// (0x0003e8ba) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x901c,	// (0x0003e8ba) aid_vkb2_area_bottom_pane_cell

0x5ff7,	// (0x0003b895) popup_char_count_window

0x6118,	// (0x0003b9b6) popup_char_count_window_g1

0x6121,	// (0x0003b9bf) popup_char_count_window_g2

0x612a,	// (0x0003b9c8) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0004566f) popup_char_count_window_g

0x6133,	// (0x0003b9d1) popup_char_count_window_t1

0x3019,	// (0x000388b7) popup_fep_char_preview_window_ParamLimits

0x3019,	// (0x000388b7) popup_fep_char_preview_window

0x8f91,	// (0x0003e82f) vkb2_top_candi_pane_ParamLimits

0x8f91,	// (0x0003e82f) vkb2_top_candi_pane

0xb927,	// (0x000411c5) cell_vkb2_top_candi_pane_ParamLimits

0xb927,	// (0x000411c5) cell_vkb2_top_candi_pane

0xd732,	// (0x00042fd0) bg_popup_fep_char_preview_window_ParamLimits

0xd732,	// (0x00042fd0) bg_popup_fep_char_preview_window

0x357d,	// (0x00038e1b) popup_fep_char_preview_window_t1_ParamLimits

0x357d,	// (0x00038e1b) popup_fep_char_preview_window_t1

0x6141,	// (0x0003b9df) bg_popup_fep_char_preview_window_g1

0x6149,	// (0x0003b9e7) bg_popup_fep_char_preview_window_g2

0x6151,	// (0x0003b9ef) bg_popup_fep_char_preview_window_g3

0x6159,	// (0x0003b9f7) bg_popup_fep_char_preview_window_g4

0x6161,	// (0x0003b9ff) bg_popup_fep_char_preview_window_g5

0x35b7,	// (0x00038e55) bg_popup_fep_char_preview_window_g6

0x6169,	// (0x0003ba07) bg_popup_fep_char_preview_window_g7

0x6171,	// (0x0003ba0f) bg_popup_fep_char_preview_window_g8

0x6179,	// (0x0003ba17) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x00045676) bg_popup_fep_char_preview_window_g

0xf232,	// (0x00044ad0) cell_vkb2_top_candi_pane_g1_ParamLimits

0xf232,	// (0x00044ad0) cell_vkb2_top_candi_pane_g1

0x47f6,	// (0x0003a094) cell_vkb2_top_candi_pane_g2_ParamLimits

0x47f6,	// (0x0003a094) cell_vkb2_top_candi_pane_g2

0x4817,	// (0x0003a0b5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4817,	// (0x0003a0b5) cell_vkb2_top_candi_pane_g3

0x35bf,	// (0x00038e5d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x35bf,	// (0x00038e5d) cell_vkb2_top_candi_pane_g4

0x5f57,	// (0x0003b7f5) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5f57,	// (0x0003b7f5) cell_vkb2_top_candi_pane_g5

0x590b,	// (0x0003b1a9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x590b,	// (0x0003b1a9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x00045689) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x00045689) cell_vkb2_top_candi_pane_g

0x35e0,	// (0x00038e7e) cell_vkb2_top_candi_pane_t1

0x287e,	// (0x0003811c) aid_size_touch_slider_mark_ParamLimits

0x287e,	// (0x0003811c) aid_size_touch_slider_mark

0xb647,	// (0x00040ee5) grid_graphic2_catg_pane_ParamLimits

0xb647,	// (0x00040ee5) grid_graphic2_catg_pane

0xb710,	// (0x00040fae) popup_grid_graphic2_window_t1_ParamLimits

0xb710,	// (0x00040fae) popup_grid_graphic2_window_t1

0xb726,	// (0x00040fc4) popup_grid_graphic2_window_t2_ParamLimits

0xb726,	// (0x00040fc4) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x00045644) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x00045644) popup_grid_graphic2_window_t

0xbcd1,	// (0x0004156f) bg_button_pane_cp05_ParamLimits

0xb89f,	// (0x0004113d) cell_graphic2_control_pane_g1_ParamLimits

0xb98d,	// (0x0004122b) cell_graphic2_catg_pane_ParamLimits

0xb98d,	// (0x0004122b) cell_graphic2_catg_pane

0xba64,	// (0x00041302) bg_button_pane_cp12

0xb99f,	// (0x0004123d) cell_graphic2_catg_pane_g1

0x5a45,	// (0x0003b2e3) cell_tb_ext_pane_t1_ParamLimits

0x33b3,	// (0x00038c51) vkb2_top_cell_right_narrow_pane_ParamLimits

0x33b3,	// (0x00038c51) vkb2_top_cell_right_narrow_pane

0x33cb,	// (0x00038c69) vkb2_top_cell_right_wide_pane_ParamLimits

0x33cb,	// (0x00038c69) vkb2_top_cell_right_wide_pane

0x8b34,	// (0x0003e3d2) bg_vkb2_func_pane_ParamLimits

0x8b34,	// (0x0003e3d2) bg_vkb2_func_pane

0x343c,	// (0x00038cda) vkb2_top_cell_left_pane_g1_ParamLimits

0x8b34,	// (0x0003e3d2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8b34,	// (0x0003e3d2) bg_vkb2_fuc_pane_cp03

0x349a,	// (0x00038d38) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd18d,	// (0x00042a2b) bg_vkb2_func_pane_g1

0xd195,	// (0x00042a33) bg_vkb2_func_pane_g2

0xd1a5,	// (0x00042a43) bg_vkb2_func_pane_g3

0xd19d,	// (0x00042a3b) bg_vkb2_func_pane_g4

0xd1ad,	// (0x00042a4b) bg_vkb2_func_pane_g5

0xd1b5,	// (0x00042a53) bg_vkb2_func_pane_g6

0xd1bd,	// (0x00042a5b) bg_vkb2_func_pane_g7

0xd1c5,	// (0x00042a63) bg_vkb2_func_pane_g8

0xd185,	// (0x00042a23) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x00045696) bg_vkb2_func_pane_g

0x8b34,	// (0x0003e3d2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8b34,	// (0x0003e3d2) bg_vkb2_fuc_pane_cp01

0x343c,	// (0x00038cda) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x343c,	// (0x00038cda) vkb2_top_cell_right_wide_pane_g1

0x8b34,	// (0x0003e3d2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8b34,	// (0x0003e3d2) bg_vkb2_fuc_pane_cp02

0x349a,	// (0x00038d38) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x349a,	// (0x00038d38) vkb2_top_cell_right_narrow_pane_g1

0xaec5,	// (0x00040763) aid_touch_area_decrease_ParamLimits

0xaec5,	// (0x00040763) aid_touch_area_decrease

0xaeff,	// (0x0004079d) aid_touch_area_increase_ParamLimits

0xaeff,	// (0x0004079d) aid_touch_area_increase

0xaf27,	// (0x000407c5) aid_touch_area_mute_ParamLimits

0xaf27,	// (0x000407c5) aid_touch_area_mute

0xaf57,	// (0x000407f5) aid_touch_area_slider_ParamLimits

0xaf57,	// (0x000407f5) aid_touch_area_slider

0xaf97,	// (0x00040835) popup_slider_window_g4_ParamLimits

0xaf97,	// (0x00040835) popup_slider_window_g4

0xafbf,	// (0x0004085d) popup_slider_window_g5_ParamLimits

0xafbf,	// (0x0004085d) popup_slider_window_g5

0xaff3,	// (0x00040891) popup_slider_window_g6_ParamLimits

0xaff3,	// (0x00040891) popup_slider_window_g6

0x5821,	// (0x0003b0bf) popup_slider_window_t2_ParamLimits

0x5821,	// (0x0003b0bf) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x00045592) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x00045592) popup_slider_window_t

0xb00f,	// (0x000408ad) slider_pane_ParamLimits

0xb00f,	// (0x000408ad) slider_pane

0x6181,	// (0x0003ba1f) slider_pane_g1_ParamLimits

0x6181,	// (0x0003ba1f) slider_pane_g1

0x6195,	// (0x0003ba33) slider_pane_g2_ParamLimits

0x6195,	// (0x0003ba33) slider_pane_g2

0x61ab,	// (0x0003ba49) slider_pane_g3_ParamLimits

0x61ab,	// (0x0003ba49) slider_pane_g3

0x0003,

0xfe0b,	// (0x000456a9) slider_pane_g_ParamLimits

0xfe0b,	// (0x000456a9) slider_pane_g

0x9ed7,	// (0x0003f775) popup_tb_float_extension_window_ParamLimits

0x9ed7,	// (0x0003f775) popup_tb_float_extension_window

0x61d7,	// (0x0003ba75) aid_size_cell_tb_float_ext

0xba64,	// (0x00041302) bg_popup_sub_window_cp28

0x61e3,	// (0x0003ba81) grid_tb_float_ext_pane

0x61ed,	// (0x0003ba8b) cell_tb_float_ext_pane_ParamLimits

0x61ed,	// (0x0003ba8b) cell_tb_float_ext_pane

0x6207,	// (0x0003baa5) cell_tb_float_ext_pane_g1

0x6210,	// (0x0003baae) grid_highlight_pane_cp12

0x8d3a,	// (0x0003e5d8) cell_last_hwr_side_pane_ParamLimits

0x8d3a,	// (0x0003e5d8) cell_last_hwr_side_pane

0xefc9,	// (0x00044867) cell_last_hwr_side_pane_g1

0x6219,	// (0x0003bab7) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x000456b2) cell_last_hwr_side_pane_g

0x90f8,	// (0x0003e996) vkb2_area_bottom_space_btn_pane_ParamLimits

0x90f8,	// (0x0003e996) vkb2_area_bottom_space_btn_pane

0xf232,	// (0x00044ad0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x606c,	// (0x0003b90a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x35e0,	// (0x00038e7e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x35ff,	// (0x00038e9d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x35ff,	// (0x00038e9d) vkb2_area_bottom_space_btn_pane_g1

0x3639,	// (0x00038ed7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3639,	// (0x00038ed7) vkb2_area_bottom_space_btn_pane_g2

0x366f,	// (0x00038f0d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x366f,	// (0x00038f0d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x000456b7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x000456b7) vkb2_area_bottom_space_btn_pane_g

0x2be5,	// (0x00038483) cel_fep_hwr_func_pane_ParamLimits

0x2be5,	// (0x00038483) cel_fep_hwr_func_pane

0x8d0f,	// (0x0003e5ad) cell_hwr_side_button_pane_ParamLimits

0x8d0f,	// (0x0003e5ad) cell_hwr_side_button_pane

0x5a79,	// (0x0003b317) aid_area_touch_clock_ParamLimits

0xbcd1,	// (0x0004156f) bg_uniindi_top_pane_ParamLimits

0x5a8b,	// (0x0003b329) uniindi_top_pane_g1_ParamLimits

0x5aa1,	// (0x0003b33f) uniindi_top_pane_g2_ParamLimits

0x5aad,	// (0x0003b34b) uniindi_top_pane_g3_ParamLimits

0x5abe,	// (0x0003b35c) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x000455ca) uniindi_top_pane_g_ParamLimits

0x5acb,	// (0x0003b369) uniindi_top_pane_t1_ParamLimits

0xbcd1,	// (0x0004156f) bg_vkb2_func_pane_cp01_ParamLimits

0xbcd1,	// (0x0004156f) bg_vkb2_func_pane_cp01

0x6222,	// (0x0003bac0) cel_fep_hwr_func_pane_g1_ParamLimits

0x6222,	// (0x0003bac0) cel_fep_hwr_func_pane_g1

0xbcd1,	// (0x0004156f) bg_vkb2_func_pane_cp02_ParamLimits

0xbcd1,	// (0x0004156f) bg_vkb2_func_pane_cp02

0x6222,	// (0x0003bac0) cell_hwr_side_button_pane_g1_ParamLimits

0x6222,	// (0x0003bac0) cell_hwr_side_button_pane_g1

0xd08f,	// (0x0004292d) status_pane_g4_ParamLimits

0xd08f,	// (0x0004292d) status_pane_g4

0xd0a7,	// (0x00042945) status_pane_t1

0xee59,	// (0x000446f7) form2_midp_gauge_slider_cont_pane

0xee61,	// (0x000446ff) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa96e,	// (0x0004020c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa982,	// (0x00040220) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0004539d) form2_midp_gauge_slider_pane_t_ParamLimits

0xee73,	// (0x00044711) form2_midp_slider_pane_ParamLimits

0x2fd9,	// (0x00038877) aid_size_cell_func_vkb2_ParamLimits

0x2fd9,	// (0x00038877) aid_size_cell_func_vkb2

0x61c3,	// (0x0003ba61) slider_pane_g4_ParamLimits

0x61c3,	// (0x0003ba61) slider_pane_g4

0x9159,	// (0x0003e9f7) form2_midp_gauge_slider_pane_t2_cp01

0x9169,	// (0x0003ea07) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9169,	// (0x0003ea07) form2_midp_gauge_slider_pane_t3_cp01

0x36e4,	// (0x00038f82) form2_midp_slider_pane_cp01

0xba64,	// (0x00041302) navi_smil_pane

0x6252,	// (0x0003baf0) navi_smil_pane_g1

0x625a,	// (0x0003baf8) navi_smil_pane_t1

0x6230,	// (0x0003bace) form2_midp_slider_pane_g1

0x6239,	// (0x0003bad7) form2_midp_slider_pane_g2

0x6241,	// (0x0003badf) form2_midp_slider_pane_g3

0x6230,	// (0x0003bace) form2_midp_slider_pane_g4

0xb9a8,	// (0x00041246) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x000456c0) form2_midp_slider_pane_g

0x36a9,	// (0x00038f47) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x36a9,	// (0x00038f47) vkb2_area_bottom_space_btn_pane_g4

0xa0ba,	// (0x0003f958) lc0_navi_pane_ParamLimits

0xa0ba,	// (0x0003f958) lc0_navi_pane

0xa124,	// (0x0003f9c2) lc0_stat_indi_pane_ParamLimits

0xa124,	// (0x0003f9c2) lc0_stat_indi_pane

0xa139,	// (0x0003f9d7) ls0_title_pane_ParamLimits

0xa139,	// (0x0003f9d7) ls0_title_pane

0xc20a,	// (0x00041aa8) bg_popup_sub_pane_cp14_ParamLimits

0x5a60,	// (0x0003b2fe) list_uniindi_pane_ParamLimits

0x5a6c,	// (0x0003b30a) uniindi_top_pane_ParamLimits

0x5b07,	// (0x0003b3a5) list_single_uniindi_pane_g1_ParamLimits

0x5b1a,	// (0x0003b3b8) list_single_uniindi_pane_t1_ParamLimits

0x9188,	// (0x0003ea26) lc0_stat_clock_pane_ParamLimits

0x9188,	// (0x0003ea26) lc0_stat_clock_pane

0xb9b3,	// (0x00041251) lc0_stat_indi_pane_g1_ParamLimits

0xb9b3,	// (0x00041251) lc0_stat_indi_pane_g1

0xb9c0,	// (0x0004125e) lc0_stat_indi_pane_g2_ParamLimits

0xb9c0,	// (0x0004125e) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x000456cb) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x000456cb) lc0_stat_indi_pane_g

0x9195,	// (0x0003ea33) lc0_uni_indicator_pane_ParamLimits

0x9195,	// (0x0003ea33) lc0_uni_indicator_pane

0x6268,	// (0x0003bb06) ls0_title_pane_g1_ParamLimits

0x6268,	// (0x0003bb06) ls0_title_pane_g1

0xb9cd,	// (0x0004126b) ls0_title_pane_t1_ParamLimits

0xb9cd,	// (0x0004126b) ls0_title_pane_t1

0x91a2,	// (0x0003ea40) lc0_uni_indicator_pane_g1_ParamLimits

0x91a2,	// (0x0003ea40) lc0_uni_indicator_pane_g1

0x627c,	// (0x0003bb1a) lc0_stat_clock_pane_t1

0xba64,	// (0x00041302) main_ai5_pane

0x628a,	// (0x0003bb28) ai5_sk_pane_ParamLimits

0x628a,	// (0x0003bb28) ai5_sk_pane

0xb9fb,	// (0x00041299) cell_ai5_widget_pane_ParamLimits

0xb9fb,	// (0x00041299) cell_ai5_widget_pane

0x6297,	// (0x0003bb35) aid_size_cell_widget_grid

0x62ab,	// (0x0003bb49) bg_ai5_widget_pane_ParamLimits

0x62ab,	// (0x0003bb49) bg_ai5_widget_pane

0x62f5,	// (0x0003bb93) cell_ai5_widget_pane_g2

0x6305,	// (0x0003bba3) cell_ai5_widget_pane_g3

0x6324,	// (0x0003bbc2) cell_ai5_widget_pane_g4

0x6330,	// (0x0003bbce) cell_ai5_widget_pane_g5

0x633c,	// (0x0003bbda) cell_ai5_widget_pane_g6

0x6348,	// (0x0003bbe6) cell_ai5_widget_pane_g7

0x6390,	// (0x0003bc2e) cell_ai5_widget_pane_t1_ParamLimits

0x6390,	// (0x0003bc2e) cell_ai5_widget_pane_t1

0x63ad,	// (0x0003bc4b) cell_ai5_widget_pane_t2_ParamLimits

0x63ad,	// (0x0003bc4b) cell_ai5_widget_pane_t2

0x63c5,	// (0x0003bc63) cell_ai5_widget_pane_t3_ParamLimits

0x63c5,	// (0x0003bc63) cell_ai5_widget_pane_t3

0x63dd,	// (0x0003bc7b) cell_ai5_widget_pane_t4_ParamLimits

0x63dd,	// (0x0003bc7b) cell_ai5_widget_pane_t4

0x63f7,	// (0x0003bc95) cell_ai5_widget_pane_t5_ParamLimits

0x63f7,	// (0x0003bc95) cell_ai5_widget_pane_t5

0x6416,	// (0x0003bcb4) cell_ai5_widget_pane_t6_ParamLimits

0x6416,	// (0x0003bcb4) cell_ai5_widget_pane_t6

0x6428,	// (0x0003bcc6) cell_ai5_widget_pane_t7_ParamLimits

0x6428,	// (0x0003bcc6) cell_ai5_widget_pane_t7

0x6441,	// (0x0003bcdf) cell_ai5_widget_pane_t8_ParamLimits

0x6441,	// (0x0003bcdf) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x000456e5) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x000456e5) cell_ai5_widget_pane_t

0x648d,	// (0x0003bd2b) grid_ai5_widget_pane

0xc20a,	// (0x00041aa8) highlight_cell_ai5_widget_pane_ParamLimits

0xc20a,	// (0x00041aa8) highlight_cell_ai5_widget_pane

0xbb5c,	// (0x000413fa) ai5_sk_left_pane

0xbb66,	// (0x00041404) ai5_sk_middle_pane

0xbb70,	// (0x0004140e) ai5_sk_right_pane

0x64a1,	// (0x0003bd3f) bg_ai5_widget_pane_g1_ParamLimits

0x64a1,	// (0x0003bd3f) bg_ai5_widget_pane_g1

0x64ad,	// (0x0003bd4b) bg_ai5_widget_pane_g2_ParamLimits

0x64ad,	// (0x0003bd4b) bg_ai5_widget_pane_g2

0x64b9,	// (0x0003bd57) bg_ai5_widget_pane_g3_ParamLimits

0x64b9,	// (0x0003bd57) bg_ai5_widget_pane_g3

0x64c5,	// (0x0003bd63) bg_ai5_widget_pane_g4_ParamLimits

0x64c5,	// (0x0003bd63) bg_ai5_widget_pane_g4

0x64d1,	// (0x0003bd6f) bg_ai5_widget_pane_g5_ParamLimits

0x64d1,	// (0x0003bd6f) bg_ai5_widget_pane_g5

0x64dd,	// (0x0003bd7b) bg_ai5_widget_pane_g6_ParamLimits

0x64dd,	// (0x0003bd7b) bg_ai5_widget_pane_g6

0x64e9,	// (0x0003bd87) bg_ai5_widget_pane_g7_ParamLimits

0x64e9,	// (0x0003bd87) bg_ai5_widget_pane_g7

0x64f5,	// (0x0003bd93) bg_ai5_widget_pane_g8_ParamLimits

0x64f5,	// (0x0003bd93) bg_ai5_widget_pane_g8

0x6501,	// (0x0003bd9f) bg_ai5_widget_pane_g9_ParamLimits

0x6501,	// (0x0003bd9f) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x000456fa) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x000456fa) bg_ai5_widget_pane_g

0x6534,	// (0x0003bdd2) cell_shortcut_ai5_widget_pane_ParamLimits

0x6534,	// (0x0003bdd2) cell_shortcut_ai5_widget_pane

0xbb10,	// (0x000413ae) bg_cell_shortcut_ai5_widget_pane

0x6545,	// (0x0003bde3) cell_grid_ai5_widget_pane_g1

0x654e,	// (0x0003bdec) highlight_cell_shortcut_ai5_widget_pane

0xd195,	// (0x00042a33) ai5_sk_left_pane_g1

0x6556,	// (0x0003bdf4) ai5_sk_left_pane_g2

0x655e,	// (0x0003bdfc) ai5_sk_left_pane_g3

0x6566,	// (0x0003be04) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0004570d) ai5_sk_left_pane_g

0x656e,	// (0x0003be0c) ai5_sk_left_pane_t1

0xd18d,	// (0x00042a2b) ai5_sk_right_pane_g1

0x657c,	// (0x0003be1a) ai5_sk_right_pane_g2

0x6584,	// (0x0003be22) ai5_sk_right_pane_g3

0x658c,	// (0x0003be2a) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00045716) ai5_sk_right_pane_g

0x6594,	// (0x0003be32) ai5_sk_right_pane_t1

0xd18d,	// (0x00042a2b) ai5_sk_middle_pane_g1

0xd195,	// (0x00042a33) ai5_sk_middle_pane_g2

0xd1ad,	// (0x00042a4b) ai5_sk_middle_pane_g3

0x6584,	// (0x0003be22) ai5_sk_middle_pane_g4

0x655e,	// (0x0003bdfc) ai5_sk_middle_pane_g5

0x65a2,	// (0x0003be40) ai5_sk_middle_pane_g6

0xbb7a,	// (0x00041418) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0004571f) ai5_sk_middle_pane_g

0x9fa6,	// (0x0003f844) aid_touch_area_size_lc0_ParamLimits

0x9fa6,	// (0x0003f844) aid_touch_area_size_lc0

0x2d70,	// (0x0003860e) cell_hwr_candidate_pane_t1_ParamLimits

0xcfb1,	// (0x0004284f) aid_touch_navi_pane

0xa22c,	// (0x0003faca) status_dt_navi_pane_ParamLimits

0xa22c,	// (0x0003faca) status_dt_navi_pane

0xa244,	// (0x0003fae2) status_dt_sta_pane_ParamLimits

0xa244,	// (0x0003fae2) status_dt_sta_pane

0xbb82,	// (0x00041420) dt_sta_controll_pane

0xbb8f,	// (0x0004142d) dt_sta_indi_pane

0xbb9c,	// (0x0004143a) dt_sta_title_pane

0xbcd1,	// (0x0004156f) bg_dt_sta_indi_pane_ParamLimits

0xbcd1,	// (0x0004156f) bg_dt_sta_indi_pane

0x65aa,	// (0x0003be48) dt_sta_battery_pane

0x65b2,	// (0x0003be50) dt_sta_indi_pane_g1

0x65bb,	// (0x0003be59) dt_sta_indi_pane_g2

0x65c4,	// (0x0003be62) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0004572e) dt_sta_indi_pane_g

0x65cd,	// (0x0003be6b) dt_sta_signal_pane

0xc20a,	// (0x00041aa8) bg_dt_sta_title_pane_ParamLimits

0xc20a,	// (0x00041aa8) bg_dt_sta_title_pane

0xde56,	// (0x000436f4) dt_sta_title_pane_g1

0x65d6,	// (0x0003be74) dt_sta_title_pane_t1_ParamLimits

0x65d6,	// (0x0003be74) dt_sta_title_pane_t1

0xba64,	// (0x00041302) bg_dt_sta_control_pane

0x65eb,	// (0x0003be89) dt_sta_controll_pane_g1

0x65f4,	// (0x0003be92) bg_dt_sta_title_pane_g1

0x65fd,	// (0x0003be9b) bg_dt_sta_title_pane_g2

0x6606,	// (0x0003bea4) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x00045735) bg_dt_sta_title_pane_g

0xefc9,	// (0x00044867) bg_dt_sta_indi_pane_g1

0x660f,	// (0x0003bead) dt_sta_signal_pane_g1

0x6617,	// (0x0003beb5) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0004573c) dt_sta_signal_pane_g

0x661f,	// (0x0003bebd) dt_sta_battery_pane_g1

0x6628,	// (0x0003bec6) dt_sta_battery_pane_t1

0xefc9,	// (0x00044867) bg_dt_sta_control_pane_g1

0xc7a2,	// (0x00042040) fep_china_uni_eep_pane

0xc7aa,	// (0x00042048) fep_china_uni_entry_pane_ParamLimits

0xc7ba,	// (0x00042058) popup_fep_china_uni_window_g1_ParamLimits

0xc7ca,	// (0x00042068) popup_fep_china_uni_window_g2_ParamLimits

0xc7ca,	// (0x00042068) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00044fd8) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00044fd8) popup_fep_china_uni_window_g

0x6637,	// (0x0003bed5) fep_china_uni_eep_pane_g1

0x663f,	// (0x0003bedd) fep_china_uni_eep_pane_t1

0x6249,	// (0x0003bae7) aid_touch_area_size_smil_player

0xd062,	// (0x00042900) lc0_clock_pane

0xd09b,	// (0x00042939) status_pane_g5_ParamLimits

0xd09b,	// (0x00042939) status_pane_g5

0x9a6b,	// (0x0003f309) popup_keymap_window

0xd07b,	// (0x00042919) status_icon_pane

0x6305,	// (0x0003bba3) cell_ai5_widget_pane_g3_ParamLimits

0x6324,	// (0x0003bbc2) cell_ai5_widget_pane_g4_ParamLimits

0x6330,	// (0x0003bbce) cell_ai5_widget_pane_g5_ParamLimits

0x6354,	// (0x0003bbf2) cell_ai5_widget_pane_g8_ParamLimits

0x6354,	// (0x0003bbf2) cell_ai5_widget_pane_g8

0x6368,	// (0x0003bc06) cell_ai5_widget_pane_g9_ParamLimits

0x6368,	// (0x0003bc06) cell_ai5_widget_pane_g9

0x637c,	// (0x0003bc1a) cell_ai5_widget_pane_g10_ParamLimits

0x637c,	// (0x0003bc1a) cell_ai5_widget_pane_g10

0x664e,	// (0x0003beec) status_icon_pane_g1

0xba64,	// (0x00041302) bg_popup_sub_pane_cp13

0x6656,	// (0x0003bef4) popup_keymap_window_t1

0x989e,	// (0x0003f13c) control_pane_g6_ParamLimits

0x989e,	// (0x0003f13c) control_pane_g6

0x98ab,	// (0x0003f149) control_pane_g7_ParamLimits

0x98ab,	// (0x0003f149) control_pane_g7

0x98b8,	// (0x0003f156) control_pane_g8_ParamLimits

0x98b8,	// (0x0003f156) control_pane_g8

0xbb82,	// (0x00041420) dt_sta_controll_pane_ParamLimits

0xbb8f,	// (0x0004142d) dt_sta_indi_pane_ParamLimits

0xbb9c,	// (0x0004143a) dt_sta_title_pane_ParamLimits

0xc140,	// (0x000419de) aid_size_touch_scroll_bar_cale

0x1711,	// (0x00036faf) popup_discreet_window_ParamLimits

0x1711,	// (0x00036faf) popup_discreet_window

0x88dd,	// (0x0003e17b) popup_sk_window

0xd732,	// (0x00042fd0) bg_popup_sub_pane_cp28_ParamLimits

0xd732,	// (0x00042fd0) bg_popup_sub_pane_cp28

0x6664,	// (0x0003bf02) popup_discreet_window_g1_ParamLimits

0x6664,	// (0x0003bf02) popup_discreet_window_g1

0x6684,	// (0x0003bf22) popup_discreet_window_t1_ParamLimits

0x6684,	// (0x0003bf22) popup_discreet_window_t1

0x66a2,	// (0x0003bf40) popup_discreet_window_t2_ParamLimits

0x66a2,	// (0x0003bf40) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x00045741) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x00045741) popup_discreet_window_t

0x371d,	// (0x00038fbb) popup_sk_window_g1

0x3727,	// (0x00038fc5) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x00045748) popup_sk_window_g

0x3731,	// (0x00038fcf) popup_sk_window_t1

0x373f,	// (0x00038fdd) popup_sk_window_t1_copy1

0x62f5,	// (0x0003bb93) cell_ai5_widget_pane_g2_ParamLimits

0x6453,	// (0x0003bcf1) cell_ai5_widget_pane_t9_ParamLimits

0x6453,	// (0x0003bcf1) cell_ai5_widget_pane_t9

0xba64,	// (0x00041302) main_fep_fshwr2_pane

0xbbae,	// (0x0004144c) aid_fshwr2_btn_pane

0xbbb6,	// (0x00041454) aid_fshwr2_syb_pane

0xbbbe,	// (0x0004145c) aid_fshwr2_txt_pane

0xbbc6,	// (0x00041464) fshwr2_func_candi_pane

0xbbd0,	// (0x0004146e) fshwr2_hwr_syb_pane

0xbbde,	// (0x0004147c) fshwr2_icf_pane

0xba64,	// (0x00041302) fshwr2_icf_bg_pane

0xbbe8,	// (0x00041486) fshwr2_icf_pane_t1_ParamLimits

0xbbe8,	// (0x00041486) fshwr2_icf_pane_t1

0xefc9,	// (0x00044867) fshwr2_func_candi_pane_g1

0x6708,	// (0x0003bfa6) fshwr2_func_candi_row_pane_ParamLimits

0x6708,	// (0x0003bfa6) fshwr2_func_candi_row_pane

0xbc02,	// (0x000414a0) cell_fshwr2_syb_pane_ParamLimits

0xbc02,	// (0x000414a0) cell_fshwr2_syb_pane

0xf232,	// (0x00044ad0) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf232,	// (0x00044ad0) fshwr2_hwr_syb_pane_g1

0xba64,	// (0x00041302) bg_popup_call_pane_cp01

0x6719,	// (0x0003bfb7) fshwr2_func_candi_cell_pane_ParamLimits

0x6719,	// (0x0003bfb7) fshwr2_func_candi_cell_pane

0x674a,	// (0x0003bfe8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x674a,	// (0x0003bfe8) fshwr2_func_candi_cell_bg_pane

0x6764,	// (0x0003c002) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6764,	// (0x0003c002) fshwr2_func_candi_cell_pane_g1

0x6784,	// (0x0003c022) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6784,	// (0x0003c022) fshwr2_func_candi_cell_pane_t1

0xba64,	// (0x00041302) bg_button_pane_cp08

0xcc33,	// (0x000424d1) cell_fshwr2_syb_bg_pane

0xbd6d,	// (0x0004160b) cell_fshwr2_syb_bg_pane_g1

0x6797,	// (0x0003c035) cell_fshwr2_syb_bg_pane_t1

0xc20a,	// (0x00041aa8) main_tmo_pane

0xa538,	// (0x0003fdd6) uni_indicator_pane_g1_ParamLimits

0xa54d,	// (0x0003fdeb) uni_indicator_pane_g2_ParamLimits

0xe16c,	// (0x00043a0a) uni_indicator_pane_g3_ParamLimits

0xe182,	// (0x00043a20) uni_indicator_pane_g4_ParamLimits

0xe182,	// (0x00043a20) uni_indicator_pane_g4

0xe196,	// (0x00043a34) uni_indicator_pane_g5_ParamLimits

0xe196,	// (0x00043a34) uni_indicator_pane_g5

0xe1aa,	// (0x00043a48) uni_indicator_pane_g6_ParamLimits

0xe1aa,	// (0x00043a48) uni_indicator_pane_g6

0xf932,	// (0x000451d0) uni_indicator_pane_g_ParamLimits

0xaea7,	// (0x00040745) popup_tmo_note_window_ParamLimits

0xaea7,	// (0x00040745) popup_tmo_note_window

0xba64,	// (0x00041302) fshwr2_bg_pane

0x6775,	// (0x0003c013) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6775,	// (0x0003c013) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0004574d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0004574d) fshwr2_func_candi_cell_pane_g

0xefc9,	// (0x00044867) bg_popup_window_pane_cp01

0x67a6,	// (0x0003c044) bg_popup_window_pane_g1_cp01

0x67af,	// (0x0003c04d) bg_popup_window_pane_cp22_ParamLimits

0x67af,	// (0x0003c04d) bg_popup_window_pane_cp22

0x67bd,	// (0x0003c05b) listscroll_tmo_link_pane_ParamLimits

0x67bd,	// (0x0003c05b) listscroll_tmo_link_pane

0x67fd,	// (0x0003c09b) popup_tmo_note_window_g1_ParamLimits

0x67fd,	// (0x0003c09b) popup_tmo_note_window_g1

0x680a,	// (0x0003c0a8) tmo_note_info_pane_ParamLimits

0x680a,	// (0x0003c0a8) tmo_note_info_pane

0xbd75,	// (0x00041613) list_tmo_note_info_pane_g1_ParamLimits

0xbd75,	// (0x00041613) list_tmo_note_info_pane_g1

0x6824,	// (0x0003c0c2) list_tmo_note_info_pane_g2_ParamLimits

0x6824,	// (0x0003c0c2) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x00045752) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x00045752) list_tmo_note_info_pane_g

0x6840,	// (0x0003c0de) list_tmo_note_info_text_pane_ParamLimits

0x6840,	// (0x0003c0de) list_tmo_note_info_text_pane

0x6882,	// (0x0003c120) list_tmo_link_pane

0x688f,	// (0x0003c12d) scroll_pane_cp20

0x689c,	// (0x0003c13a) list_single_tmo_link_pane_ParamLimits

0x689c,	// (0x0003c13a) list_single_tmo_link_pane

0x68ac,	// (0x0003c14a) list_single_tmo_link_pane_t1

0x68ba,	// (0x0003c158) list_tmo_note_info_text_pane_t1_ParamLimits

0x68ba,	// (0x0003c158) list_tmo_note_info_text_pane_t1

0x9591,	// (0x0003ee2f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9591,	// (0x0003ee2f) aid_size_touch_scroll_bar_cp01

0x8444,	// (0x0003dce2) aid_size_touch_slider_marker

0x88cd,	// (0x0003e16b) popup_settings_window_ParamLimits

0x88cd,	// (0x0003e16b) popup_settings_window

0x0d7a,	// (0x00036618) popup_candi_list_indi_window

0xcfb1,	// (0x0004284f) aid_touch_navi_pane_ParamLimits

0x2f32,	// (0x000387d0) rs_clock_indi_pane

0x2f3b,	// (0x000387d9) sctrl_sk_bottom_pane_ParamLimits

0x2f4c,	// (0x000387ea) sctrl_sk_top_pane_ParamLimits

0x3033,	// (0x000388d1) popup_fep_tooltip_window

0x6297,	// (0x0003bb35) aid_size_cell_widget_grid_ParamLimits

0x62e9,	// (0x0003bb87) cell_ai5_widget_pane_g1_ParamLimits

0x62e9,	// (0x0003bb87) cell_ai5_widget_pane_g1

0x633c,	// (0x0003bbda) cell_ai5_widget_pane_g6_ParamLimits

0x6348,	// (0x0003bbe6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x000456d0) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x000456d0) cell_ai5_widget_pane_g

0x6477,	// (0x0003bd15) cell_ai5_widget_pane_t10_ParamLimits

0x6477,	// (0x0003bd15) cell_ai5_widget_pane_t10

0x648d,	// (0x0003bd2b) grid_ai5_widget_pane_ParamLimits

0x650d,	// (0x0003bdab) cell_contacts_ai5_widget_pane_ParamLimits

0x650d,	// (0x0003bdab) cell_contacts_ai5_widget_pane

0x66b7,	// (0x0003bf55) popup_discreet_window_t3_ParamLimits

0x66b7,	// (0x0003bf55) popup_discreet_window_t3

0x66f4,	// (0x0003bf92) popup_fshwr2_char_preview_window_ParamLimits

0x66f4,	// (0x0003bf92) popup_fshwr2_char_preview_window

0xbd8c,	// (0x0004162a) tmo_note_info_pane_t1

0xbda1,	// (0x0004163f) tmo_note_info_pane_t2

0xbdba,	// (0x00041658) tmo_note_info_pane_t3

0x685e,	// (0x0003c0fc) tmo_note_info_pane_t4

0x6870,	// (0x0003c10e) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x00045757) tmo_note_info_pane_t

0x6882,	// (0x0003c120) list_tmo_link_pane_ParamLimits

0x688f,	// (0x0003c12d) scroll_pane_cp20_ParamLimits

0xba64,	// (0x00041302) bg_popup_fep_char_preview_window_cp01

0x68d3,	// (0x0003c171) popup_fshwr2_char_preview_window_t1

0x68e1,	// (0x0003c17f) popup_candi_list_indi_window_g1

0x68ea,	// (0x0003c188) bg_cell_contacts_ai5_widget_pane

0x68f6,	// (0x0003c194) cell_contacts_ai5_widget_pane_g1

0x6909,	// (0x0003c1a7) cell_contacts_ai5_widget_pane_g2

0x6915,	// (0x0003c1b3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x00045762) cell_contacts_ai5_widget_pane_g

0x6927,	// (0x0003c1c5) cell_contacts_ai5_widget_pane_t1

0xc20a,	// (0x00041aa8) highlight_cell_shortcut_ai5_widget_pane_cp01

0x69a1,	// (0x0003c23f) settings_container_pane

0xcc33,	// (0x000424d1) listscroll_set_pane_copy1

0xe9a2,	// (0x00044240) scroll_pane_cp121_copy1

0x69ad,	// (0x0003c24b) set_content_pane_copy1

0x69b5,	// (0x0003c253) aid_height_set_list_copy1_ParamLimits

0x69b5,	// (0x0003c253) aid_height_set_list_copy1

0xda16,	// (0x000432b4) aid_size_parent_copy1_ParamLimits

0xda16,	// (0x000432b4) aid_size_parent_copy1

0x69c1,	// (0x0003c25f) button_value_adjust_pane_cp6_copy1_ParamLimits

0x69c1,	// (0x0003c25f) button_value_adjust_pane_cp6_copy1

0xc355,	// (0x00041bf3) list_highlight_pane_cp2_copy1_ParamLimits

0xc355,	// (0x00041bf3) list_highlight_pane_cp2_copy1

0x69d5,	// (0x0003c273) list_set_pane_copy1_ParamLimits

0x69d5,	// (0x0003c273) list_set_pane_copy1

0x693c,	// (0x0003c1da) main_pane_set_t1_copy1_ParamLimits

0x693c,	// (0x0003c1da) main_pane_set_t1_copy1

0x6976,	// (0x0003c214) main_pane_set_t2_copy1_ParamLimits

0x6976,	// (0x0003c214) main_pane_set_t2_copy1

0x6a82,	// (0x0003c320) main_pane_set_t3_copy1

0x6a90,	// (0x0003c32e) main_pane_set_t4_copy1

0x6995,	// (0x0003c233) set_content_pane_g1_copy1_ParamLimits

0x6995,	// (0x0003c233) set_content_pane_g1_copy1

0x6a9e,	// (0x0003c33c) setting_code_pane_copy1

0x6aa8,	// (0x0003c346) setting_slider_graphic_pane_copy1

0x6aa8,	// (0x0003c346) setting_slider_pane_copy1

0x6aa8,	// (0x0003c346) setting_text_pane_copy1

0x6ab2,	// (0x0003c350) setting_volume_pane_copy1

0x6abb,	// (0x0003c359) settings_code_pane_cp2_copy1

0x6ac3,	// (0x0003c361) settings_code_pane_cp_copy1_ParamLimits

0x6ac3,	// (0x0003c361) settings_code_pane_cp_copy1

0x6ad7,	// (0x0003c375) volume_set_pane_copy1

0x6adf,	// (0x0003c37d) volume_set_pane_g10_copy1

0x6ae7,	// (0x0003c385) volume_set_pane_g1_copy1

0x6aef,	// (0x0003c38d) volume_set_pane_g2_copy1

0x6af7,	// (0x0003c395) volume_set_pane_g3_copy1

0x6aff,	// (0x0003c39d) volume_set_pane_g4_copy1

0x6b07,	// (0x0003c3a5) volume_set_pane_g5_copy1

0x6b0f,	// (0x0003c3ad) volume_set_pane_g6_copy1

0x6b17,	// (0x0003c3b5) volume_set_pane_g7_copy1

0x6b1f,	// (0x0003c3bd) volume_set_pane_g8_copy1

0x6b27,	// (0x0003c3c5) volume_set_pane_g9_copy1

0xbad4,	// (0x00041372) bg_set_opt_pane_cp_copy1_ParamLimits

0xbad4,	// (0x00041372) bg_set_opt_pane_cp_copy1

0x6b2f,	// (0x0003c3cd) setting_slider_pane_t1_copy1_ParamLimits

0x6b2f,	// (0x0003c3cd) setting_slider_pane_t1_copy1

0x6b4d,	// (0x0003c3eb) setting_slider_pane_t2_copy1_ParamLimits

0x6b4d,	// (0x0003c3eb) setting_slider_pane_t2_copy1

0x6b67,	// (0x0003c405) setting_slider_pane_t3_copy1_ParamLimits

0x6b67,	// (0x0003c405) setting_slider_pane_t3_copy1

0x6b7f,	// (0x0003c41d) slider_set_pane_copy1_ParamLimits

0x6b7f,	// (0x0003c41d) slider_set_pane_copy1

0xc265,	// (0x00041b03) set_opt_bg_pane_g1_copy2

0xc26d,	// (0x00041b0b) set_opt_bg_pane_g2_copy2

0x6b95,	// (0x0003c433) set_opt_bg_pane_g3_copy2

0xc27d,	// (0x00041b1b) set_opt_bg_pane_g4_copy2

0xc285,	// (0x00041b23) set_opt_bg_pane_g5_copy2

0xc28d,	// (0x00041b2b) set_opt_bg_pane_g6_copy2

0x6b9f,	// (0x0003c43d) set_opt_bg_pane_g7_copy2

0x6ba7,	// (0x0003c445) set_opt_bg_pane_g8_copy2

0x6bb1,	// (0x0003c44f) set_opt_bg_pane_g9_copy2

0x374d,	// (0x00038feb) aid_size_touch_slider_mark_copy1_ParamLimits

0x374d,	// (0x00038feb) aid_size_touch_slider_mark_copy1

0x6bbb,	// (0x0003c459) slider_set_pane_g1_copy1

0x3761,	// (0x00038fff) slider_set_pane_g2_copy1

0x289e,	// (0x0003813c) slider_set_pane_g3_copy1_ParamLimits

0x289e,	// (0x0003813c) slider_set_pane_g3_copy1

0x28b2,	// (0x00038150) slider_set_pane_g4_copy1_ParamLimits

0x28b2,	// (0x00038150) slider_set_pane_g4_copy1

0x28ca,	// (0x00038168) slider_set_pane_g5_copy1_ParamLimits

0x28ca,	// (0x00038168) slider_set_pane_g5_copy1

0x289e,	// (0x0003813c) slider_set_pane_g6_copy1_ParamLimits

0x289e,	// (0x0003813c) slider_set_pane_g6_copy1

0x3769,	// (0x00039007) slider_set_pane_g7_copy1_ParamLimits

0x3769,	// (0x00039007) slider_set_pane_g7_copy1

0xba78,	// (0x00041316) bg_set_opt_pane_cp2_copy1

0x6bc4,	// (0x0003c462) setting_slider_graphic_pane_g1_copy1

0x6bcd,	// (0x0003c46b) setting_slider_graphic_pane_t1_copy1

0x6bdd,	// (0x0003c47b) setting_slider_graphic_pane_t2_copy1

0x6bed,	// (0x0003c48b) slider_set_pane_cp_copy1

0x6bfd,	// (0x0003c49b) input_focus_pane_cp1_copy1

0x6c06,	// (0x0003c4a4) list_set_text_pane_copy1

0x6c0e,	// (0x0003c4ac) setting_text_pane_g1_copy1

0x146a,	// (0x00036d08) set_text_pane_t1_copy1

0x6bfd,	// (0x0003c49b) input_focus_pane_cp2_copy1

0x6c0e,	// (0x0003c4ac) setting_code_pane_g1_copy1

0x6c17,	// (0x0003c4b5) setting_code_pane_t1_copy1

0x6c25,	// (0x0003c4c3) list_set_graphic_pane_copy1

0xba78,	// (0x00041316) bg_set_opt_pane_cp4_copy1

0xc935,	// (0x000421d3) list_set_graphic_pane_g1_copy1_ParamLimits

0xc935,	// (0x000421d3) list_set_graphic_pane_g1_copy1

0x6c39,	// (0x0003c4d7) list_set_graphic_pane_g2_copy1

0xc94d,	// (0x000421eb) list_set_graphic_pane_t1_copy1_ParamLimits

0xc94d,	// (0x000421eb) list_set_graphic_pane_t1_copy1

0xefc9,	// (0x00044867) rs_clock_indi_pane_g1

0x6c41,	// (0x0003c4df) rs_clock_indi_pane_t1

0x6c4f,	// (0x0003c4ed) rs_indi_pane

0x6c57,	// (0x0003c4f5) rs_indi_pane_g1

0x6c60,	// (0x0003c4fe) rs_indi_pane_g2

0x6c69,	// (0x0003c507) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x00045769) rs_indi_pane_g

0xcc33,	// (0x000424d1) bg_popup_preview_window_pane_cp03

0x6c72,	// (0x0003c510) popup_fep_tooltip_window_t1

0x4dea,	// (0x0003a688) popup_note2_window_g2_ParamLimits

0x4dea,	// (0x0003a688) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x00045509) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x00045509) popup_note2_window_g

0x52d8,	// (0x0003ab76) bg_popup_sub_pane_cp11_ParamLimits

0x52e5,	// (0x0003ab83) cell_ai3_links_pane_g1_ParamLimits

0x52fc,	// (0x0003ab9a) cell_ai3_links_pane_t1

0x146a,	// (0x00036d08) set_text_pane_t1_copy1_ParamLimits

0xcb42,	// (0x000423e0) cell_graphic_popup_pane_cp2_ParamLimits

0xcb42,	// (0x000423e0) cell_graphic_popup_pane_cp2

0x6c80,	// (0x0003c51e) cell_graphic_popup_pane_g1_cp2

0xbf53,	// (0x000417f1) cell_graphic_popup_pane_g2_cp2

0x6c88,	// (0x0003c526) cell_graphic_popup_pane_g3_cp2

0x6c90,	// (0x0003c52e) cell_graphic_popup_pane_t2_cp2

0xbf64,	// (0x00041802) grid_highlight_pane_cp3_cp2

0xc4ff,	// (0x00041d9d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc20a,	// (0x00041aa8) main_tmo_pane_ParamLimits

0xae9b,	// (0x00040739) popup_tmo_big_image_note_window

0x62d9,	// (0x0003bb77) cell_ai5_widget_list_pane

0x62e1,	// (0x0003bb7f) cell_ai5_widget_lrg_icon_pane

0xbd8c,	// (0x0004162a) tmo_note_info_pane_t1_ParamLimits

0xbda1,	// (0x0004163f) tmo_note_info_pane_t2_ParamLimits

0xbdba,	// (0x00041658) tmo_note_info_pane_t3_ParamLimits

0x685e,	// (0x0003c0fc) tmo_note_info_pane_t4_ParamLimits

0x6870,	// (0x0003c10e) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x00045757) tmo_note_info_pane_t_ParamLimits

0x69a1,	// (0x0003c23f) settings_container_pane_ParamLimits

0x6bf5,	// (0x0003c493) indicator_popup_pane_cp5

0x6bf5,	// (0x0003c493) indicator_popup_pane_cp6

0x6c25,	// (0x0003c4c3) list_set_graphic_pane_copy1_ParamLimits

0xba64,	// (0x00041302) bg_popup_window_pane_cp23

0x6c9e,	// (0x0003c53c) popup_tmo_big_image_note_window_g1

0x6ca9,	// (0x0003c547) popup_tmo_big_image_note_window_t1

0x6cb9,	// (0x0003c557) popup_tmo_big_image_note_window_t2

0x6cc9,	// (0x0003c567) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x00045770) popup_tmo_big_image_note_window_t

0x6cd9,	// (0x0003c577) cell_ai5_widget_lrg_icon_pane_g1

0x6ce1,	// (0x0003c57f) cell_ai5_widget_lrg_icon_pane_t1

0x6cef,	// (0x0003c58d) cell_ai5_widget_list_row_pane_ParamLimits

0x6cef,	// (0x0003c58d) cell_ai5_widget_list_row_pane

0x6d08,	// (0x0003c5a6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6d08,	// (0x0003c5a6) cell_ai5_widget_list_row_pane_g1

0x6d15,	// (0x0003c5b3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6d15,	// (0x0003c5b3) cell_ai5_widget_list_row_pane_t1

0x6d2d,	// (0x0003c5cb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6d2d,	// (0x0003c5cb) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed9,	// (0x00045777) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x00045777) cell_ai5_widget_list_row_pane_t

0xba64,	// (0x00041302) main_fep_vtchi_ss_pane

0x6d3f,	// (0x0003c5dd) popup_fep_char_pre_window

0x6d47,	// (0x0003c5e5) popup_fep_ituss_window

0x6d61,	// (0x0003c5ff) popup_fep_vkbss_window

0x6d7f,	// (0x0003c61d) grid_vkbss_keypad_pane_ParamLimits

0x6d7f,	// (0x0003c61d) grid_vkbss_keypad_pane

0x6d8f,	// (0x0003c62d) ituss_keypad_pane

0x6da5,	// (0x0003c643) aid_vkbss_key_offset_ParamLimits

0x6da5,	// (0x0003c643) aid_vkbss_key_offset

0x6db1,	// (0x0003c64f) cell_vkbss_key_pane_ParamLimits

0x6db1,	// (0x0003c64f) cell_vkbss_key_pane

0xdd76,	// (0x00043614) bg_cell_vkbss_key_g1_ParamLimits

0xdd76,	// (0x00043614) bg_cell_vkbss_key_g1

0x6dc7,	// (0x0003c665) cell_vkbss_key_3p_pane_ParamLimits

0x6dc7,	// (0x0003c665) cell_vkbss_key_3p_pane

0x6de1,	// (0x0003c67f) cell_vkbss_key_g1_ParamLimits

0x6de1,	// (0x0003c67f) cell_vkbss_key_g1

0x6dfb,	// (0x0003c699) cell_vkbss_key_t1_ParamLimits

0x6dfb,	// (0x0003c699) cell_vkbss_key_t1

0x6e26,	// (0x0003c6c4) cell_ituss_key_pane_ParamLimits

0x6e26,	// (0x0003c6c4) cell_ituss_key_pane

0x6e36,	// (0x0003c6d4) bg_cell_ituss_key_g1_ParamLimits

0x6e36,	// (0x0003c6d4) bg_cell_ituss_key_g1

0x6e42,	// (0x0003c6e0) cell_ituss_key_pane_g1_ParamLimits

0x6e42,	// (0x0003c6e0) cell_ituss_key_pane_g1

0x6e4e,	// (0x0003c6ec) cell_ituss_key_pane_g2_ParamLimits

0x6e4e,	// (0x0003c6ec) cell_ituss_key_pane_g2

0x0001,

0xfede,	// (0x0004577c) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x0004577c) cell_ituss_key_pane_g

0x6e67,	// (0x0003c705) cell_ituss_key_t1_ParamLimits

0x6e67,	// (0x0003c705) cell_ituss_key_t1

0x6e95,	// (0x0003c733) cell_ituss_key_t2_ParamLimits

0x6e95,	// (0x0003c733) cell_ituss_key_t2

0x6ec6,	// (0x0003c764) cell_ituss_key_t3_ParamLimits

0x6ec6,	// (0x0003c764) cell_ituss_key_t3

0x6ef7,	// (0x0003c795) cell_ituss_key_t4_ParamLimits

0x6ef7,	// (0x0003c795) cell_ituss_key_t4

0x0003,

0xfee3,	// (0x00045781) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00045781) cell_ituss_key_t

0x6f28,	// (0x0003c7c6) cell_vkbss_key_3p_pane_g1

0x6f30,	// (0x0003c7ce) cell_vkbss_key_3p_pane_g2

0x6f38,	// (0x0003c7d6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0004578a) cell_vkbss_key_3p_pane_g

0xba64,	// (0x00041302) bg_popup_fep_char_preview_window_cp02

0x6f40,	// (0x0003c7de) popup_fep_char_pre_window_t1

0xbb52,	// (0x000413f0) main_ai5_sk_pane

0x68ea,	// (0x0003c188) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x68f6,	// (0x0003c194) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6909,	// (0x0003c1a7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6915,	// (0x0003c1b3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x00045762) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6927,	// (0x0003c1c5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc20a,	// (0x00041aa8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbdcf,	// (0x0004166d) main_ai5_sk_pane_g1

0xd570,	// (0x00042e0e) popup_query_code_window_g1

0x6d56,	// (0x0003c5f4) popup_fep_vkb_icf_pane

0x6d6a,	// (0x0003c608) popup_fep_vtchi_icf_pane

0xc20a,	// (0x00041aa8) bg_icf_pane

0x6f5e,	// (0x0003c7fc) list_vkb_icf_pane

0xc20a,	// (0x00041aa8) bg_icf_pane_cp01

0x6f76,	// (0x0003c814) vtchi_icf_list_pane

0x6f86,	// (0x0003c824) list_vkb_icf_pane_t1_ParamLimits

0x6f86,	// (0x0003c824) list_vkb_icf_pane_t1

0x6fa0,	// (0x0003c83e) vtchi_icf_list_pane_t1_ParamLimits

0x6fa0,	// (0x0003c83e) vtchi_icf_list_pane_t1

0x6d47,	// (0x0003c5e5) popup_fep_ituss_window_ParamLimits

0x6d6a,	// (0x0003c608) popup_fep_vtchi_icf_pane_ParamLimits

0x6d8f,	// (0x0003c62d) ituss_keypad_pane_ParamLimits

0x6d9b,	// (0x0003c639) ituss_sks_pane

0xc20a,	// (0x00041aa8) bg_icf_pane_ParamLimits

0x6f4f,	// (0x0003c7ed) icf_edit_indi_pane_ParamLimits

0x6f4f,	// (0x0003c7ed) icf_edit_indi_pane

0x6f5e,	// (0x0003c7fc) list_vkb_icf_pane_ParamLimits

0xc20a,	// (0x00041aa8) bg_icf_pane_cp01_ParamLimits

0x6f6a,	// (0x0003c808) icf_edit_indi_pane_cp01_ParamLimits

0x6f6a,	// (0x0003c808) icf_edit_indi_pane_cp01

0x6f7e,	// (0x0003c81c) vtchi_query_pane

0xf232,	// (0x00044ad0) icf_edit_indi_pane_g1_ParamLimits

0xf232,	// (0x00044ad0) icf_edit_indi_pane_g1

0x6fc7,	// (0x0003c865) icf_edit_indi_pane_g2_ParamLimits

0x6fc7,	// (0x0003c865) icf_edit_indi_pane_g2

0x0001,

0xfef3,	// (0x00045791) icf_edit_indi_pane_g_ParamLimits

0xfef3,	// (0x00045791) icf_edit_indi_pane_g

0x6fd3,	// (0x0003c871) icf_edit_indi_pane_t1

0x6fe1,	// (0x0003c87f) bg_input_focus_pane_cp042

0xc137,	// (0x000419d5) vtchi_button_pane

0x6fea,	// (0x0003c888) vtchi_query_pane_t1

0x6ff8,	// (0x0003c896) vtchi_query_pane_t2

0x7006,	// (0x0003c8a4) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x00045796) vtchi_query_pane_t

0xba64,	// (0x00041302) bg_button_pane_cp13

0x7014,	// (0x0003c8b2) vtchi_button_pane_g1

0x701c,	// (0x0003c8ba) ituss_sks_pane_g1

0x7027,	// (0x0003c8c5) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0004579d) ituss_sks_pane_g

0x702f,	// (0x0003c8cd) ituss_sks_pane_t1

0x703d,	// (0x0003c8db) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x000457a2) ituss_sks_pane_t

0xec79,	// (0x00044517) indicator_nsta_pane_cp_g1

0xec82,	// (0x00044520) indicator_nsta_pane_cp_g2

0xec8a,	// (0x00044528) indicator_nsta_pane_cp_g3

0xec92,	// (0x00044530) indicator_nsta_pane_cp_g4

0xec9a,	// (0x00044538) indicator_nsta_pane_cp_g5

0xeca2,	// (0x00044540) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00045353) indicator_nsta_pane_cp_g

0xb881,	// (0x0004111f) cell_graphic2_pane_t2_ParamLimits

0xb881,	// (0x0004111f) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x00045659) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x00045659) cell_graphic2_pane_t

0xb8b7,	// (0x00041155) cell_graphic2_control_pane_t1

0x9785,	// (0x0003f023) signal_pane_g3_ParamLimits

0x9785,	// (0x0003f023) signal_pane_g3

0x9799,	// (0x0003f037) signal_pane_g4_ParamLimits

0x9799,	// (0x0003f037) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
