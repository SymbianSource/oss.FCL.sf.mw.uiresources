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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004514a };

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
0x91d1,	// (0x0004e31b) Screen

0x91dd,	// (0x0004e327) application_window_ParamLimits

0x91dd,	// (0x0004e327) application_window

0xb7bf,	// (0x00050909) screen_g1

0x801b,	// (0x0004d165) area_bottom_pane_ParamLimits

0x801b,	// (0x0004d165) area_bottom_pane

0x07d3,	// (0x0004591d) area_top_pane_ParamLimits

0x07d3,	// (0x0004591d) area_top_pane

0x0871,	// (0x000459bb) main_pane_ParamLimits

0x0871,	// (0x000459bb) main_pane

0xb7c9,	// (0x00050913) misc_graphics

0x9fe8,	// (0x0004f132) battery_pane_ParamLimits

0x9fe8,	// (0x0004f132) battery_pane

0xd909,	// (0x00052a53) bg_status_flat_pane_g8

0xd911,	// (0x00052a5b) bg_status_flat_pane_g9

0xd01e,	// (0x00052168) context_pane_ParamLimits

0xd01e,	// (0x00052168) context_pane

0xa153,	// (0x0004f29d) navi_pane_ParamLimits

0xa153,	// (0x0004f29d) navi_pane

0xa1cb,	// (0x0004f315) signal_pane_ParamLimits

0xa1cb,	// (0x0004f315) signal_pane

0x0008,

0xf88a,	// (0x000549d4) bg_status_flat_pane_g

0xa25b,	// (0x0004f3a5) status_pane_g1_ParamLimits

0xa25b,	// (0x0004f3a5) status_pane_g1

0xa271,	// (0x0004f3bb) status_pane_g2_ParamLimits

0xa271,	// (0x0004f3bb) status_pane_g2

0xd083,	// (0x000521cd) status_pane_g3_ParamLimits

0xd083,	// (0x000521cd) status_pane_g3

0x0004,

0xf7bd,	// (0x00054907) status_pane_g_ParamLimits

0xf7bd,	// (0x00054907) status_pane_g

0xa27d,	// (0x0004f3c7) title_pane_ParamLimits

0xa27d,	// (0x0004f3c7) title_pane

0xa2e0,	// (0x0004f42a) uni_indicator_pane_ParamLimits

0xa2e0,	// (0x0004f42a) uni_indicator_pane

0xce57,	// (0x00051fa1) bg_list_pane_ParamLimits

0xce57,	// (0x00051fa1) bg_list_pane

0x8f3e,	// (0x0004e088) find_pane

0x98cf,	// (0x0004ea19) listscroll_app_pane_ParamLimits

0x98cf,	// (0x0004ea19) listscroll_app_pane

0xce77,	// (0x00051fc1) listscroll_form_pane

0x8f46,	// (0x0004e090) listscroll_gen_pane_ParamLimits

0x8f46,	// (0x0004e090) listscroll_gen_pane

0xce77,	// (0x00051fc1) listscroll_set_pane

0xd8bf,	// (0x00052a09) main_idle_act_pane

0xcc33,	// (0x00051d7d) main_idle_trad_pane

0xcc33,	// (0x00051d7d) main_list_empty_pane

0xc355,	// (0x0005149f) main_midp_pane

0xce91,	// (0x00051fdb) main_pane_g1_ParamLimits

0xce91,	// (0x00051fdb) main_pane_g1

0x98db,	// (0x0004ea25) popup_ai_message_window_ParamLimits

0x98db,	// (0x0004ea25) popup_ai_message_window

0x996c,	// (0x0004eab6) popup_fep_china_uni_window_ParamLimits

0x996c,	// (0x0004eab6) popup_fep_china_uni_window

0xcec3,	// (0x0005200d) popup_fep_japan_candidate_window_ParamLimits

0xcec3,	// (0x0005200d) popup_fep_japan_candidate_window

0xcee1,	// (0x0005202b) popup_fep_japan_predictive_window_ParamLimits

0xcee1,	// (0x0005202b) popup_fep_japan_predictive_window

0x99c6,	// (0x0004eb10) popup_find_window

0x99e3,	// (0x0004eb2d) popup_grid_graphic_window_ParamLimits

0x99e3,	// (0x0004eb2d) popup_grid_graphic_window

0xcf11,	// (0x0005205b) popup_large_graphic_colour_window

0x9a75,	// (0x0004ebbf) popup_menu_window_ParamLimits

0x9a75,	// (0x0004ebbf) popup_menu_window

0x9c41,	// (0x0004ed8b) popup_note_image_window

0x9c07,	// (0x0004ed51) popup_note_wait_window_ParamLimits

0x9c07,	// (0x0004ed51) popup_note_wait_window

0x9c59,	// (0x0004eda3) popup_note_window_ParamLimits

0x9c59,	// (0x0004eda3) popup_note_window

0x9cff,	// (0x0004ee49) popup_query_code_window_ParamLimits

0x9cff,	// (0x0004ee49) popup_query_code_window

0xcf37,	// (0x00052081) popup_query_data_code_window_ParamLimits

0xcf37,	// (0x00052081) popup_query_data_code_window

0x9d39,	// (0x0004ee83) popup_query_data_window_ParamLimits

0x9d39,	// (0x0004ee83) popup_query_data_window

0x9daf,	// (0x0004eef9) popup_query_sat_info_window_ParamLimits

0x9daf,	// (0x0004eef9) popup_query_sat_info_window

0x9e46,	// (0x0004ef90) popup_snote_single_graphic_window_ParamLimits

0x9e46,	// (0x0004ef90) popup_snote_single_graphic_window

0x9e46,	// (0x0004ef90) popup_snote_single_text_window_ParamLimits

0x9e46,	// (0x0004ef90) popup_snote_single_text_window

0xcf4e,	// (0x00052098) popup_sub_window_general

0xcf94,	// (0x000520de) popup_window_general_ParamLimits

0xcf94,	// (0x000520de) popup_window_general

0xcfa9,	// (0x000520f3) power_save_pane

0x84e7,	// (0x0004d631) control_pane_g1_ParamLimits

0x84e7,	// (0x0004d631) control_pane_g1

0x8510,	// (0x0004d65a) control_pane_g2_ParamLimits

0x8510,	// (0x0004d65a) control_pane_g2

0xce39,	// (0x00051f83) control_pane_g3_ParamLimits

0xce39,	// (0x00051f83) control_pane_g3

0x0007,

0xf7a5,	// (0x000548ef) control_pane_g_ParamLimits

0xf7a5,	// (0x000548ef) control_pane_g

0x854d,	// (0x0004d697) control_pane_t1_ParamLimits

0x854d,	// (0x0004d697) control_pane_t1

0x85ab,	// (0x0004d6f5) control_pane_t2_ParamLimits

0x85ab,	// (0x0004d6f5) control_pane_t2

0x0002,

0xf7b6,	// (0x00054900) control_pane_t_ParamLimits

0xf7b6,	// (0x00054900) control_pane_t

0xcd5a,	// (0x00051ea4) navi_navi_volume_pane_cp1

0xcd63,	// (0x00051ead) status_small_icon_pane

0xcd6b,	// (0x00051eb5) status_small_pane_g1_ParamLimits

0xcd6b,	// (0x00051eb5) status_small_pane_g1

0xcd9f,	// (0x00051ee9) status_small_pane_g2_ParamLimits

0xcd9f,	// (0x00051ee9) status_small_pane_g2

0xcdab,	// (0x00051ef5) status_small_pane_g3_ParamLimits

0xcdab,	// (0x00051ef5) status_small_pane_g3

0xcdb7,	// (0x00051f01) status_small_pane_g4_ParamLimits

0xcdb7,	// (0x00051f01) status_small_pane_g4

0xcdc3,	// (0x00051f0d) status_small_pane_g5_ParamLimits

0xcdc3,	// (0x00051f0d) status_small_pane_g5

0xcdd2,	// (0x00051f1c) status_small_pane_g6_ParamLimits

0xcdd2,	// (0x00051f1c) status_small_pane_g6

0x0007,

0xf794,	// (0x000548de) status_small_pane_g_ParamLimits

0xf794,	// (0x000548de) status_small_pane_g

0xce02,	// (0x00051f4c) status_small_pane_t1

0xce25,	// (0x00051f6f) status_small_wait_pane_ParamLimits

0xce25,	// (0x00051f6f) status_small_wait_pane

0x971c,	// (0x0004e866) aid_levels_signal_ParamLimits

0x971c,	// (0x0004e866) aid_levels_signal

0x9734,	// (0x0004e87e) signal_pane_g1_ParamLimits

0x9734,	// (0x0004e87e) signal_pane_g1

0x974f,	// (0x0004e899) signal_pane_g2_ParamLimits

0x974f,	// (0x0004e899) signal_pane_g2

0x0003,

0xf725,	// (0x0005486f) signal_pane_g_ParamLimits

0xf725,	// (0x0005486f) signal_pane_g

0xc777,	// (0x000518c1) context_pane_g1

0x91ed,	// (0x0004e337) title_pane_g1

0x9224,	// (0x0004e36e) title_pane_t1

0xb7df,	// (0x00050929) title_pane_t2

0xb805,	// (0x0005094f) title_pane_t3

0x0002,

0xf56f,	// (0x000546b9) title_pane_t

0xa308,	// (0x0004f452) aid_levels_battery_ParamLimits

0xa308,	// (0x0004f452) aid_levels_battery

0xa324,	// (0x0004f46e) battery_pane_g1_ParamLimits

0xa324,	// (0x0004f46e) battery_pane_g1

0xa341,	// (0x0004f48b) battery_pane_g2_ParamLimits

0xa341,	// (0x0004f48b) battery_pane_g2

0x0001,

0xf7c8,	// (0x00054912) battery_pane_g_ParamLimits

0xf7c8,	// (0x00054912) battery_pane_g

0xa538,	// (0x0004f682) uni_indicator_pane_g1

0xa54d,	// (0x0004f697) uni_indicator_pane_g2

0xe178,	// (0x000532c2) uni_indicator_pane_g3

0x0005,

0xf91b,	// (0x00054a65) uni_indicator_pane_g

0xcaa3,	// (0x00051bed) navi_icon_pane_ParamLimits

0xcaa3,	// (0x00051bed) navi_icon_pane

0xc9ea,	// (0x00051b34) navi_midp_pane

0xcabf,	// (0x00051c09) navi_navi_pane

0xcac9,	// (0x00051c13) navi_text_pane_ParamLimits

0xcac9,	// (0x00051c13) navi_text_pane

0xb7bf,	// (0x00050909) status_small_wait_pane_g1

0xbec4,	// (0x0005100e) status_small_wait_pane_g2

0x0001,

0xf916,	// (0x00054a60) status_small_wait_pane_g

0xdeaa,	// (0x00052ff4) navi_navi_icon_text_pane

0xdeb2,	// (0x00052ffc) navi_navi_pane_g1_ParamLimits

0xdeb2,	// (0x00052ffc) navi_navi_pane_g1

0xdec4,	// (0x0005300e) navi_navi_pane_g2_ParamLimits

0xdec4,	// (0x0005300e) navi_navi_pane_g2

0x0001,

0xf8e4,	// (0x00054a2e) navi_navi_pane_g_ParamLimits

0xf8e4,	// (0x00054a2e) navi_navi_pane_g

0xded6,	// (0x00053020) navi_navi_tabs_pane

0xdedf,	// (0x00053029) navi_navi_text_pane

0xdeaa,	// (0x00052ff4) navi_navi_volume_pane

0xde86,	// (0x00052fd0) navi_text_pane_t1

0xde7a,	// (0x00052fc4) navi_icon_pane_g1

0xddcd,	// (0x00052f17) navi_navi_text_pane_t1

0x87f8,	// (0x0004d942) navi_navi_volume_pane_g1

0x8800,	// (0x0004d94a) volume_small_pane

0xa467,	// (0x0004f5b1) navi_navi_icon_text_pane_g1

0xa46f,	// (0x0004f5b9) navi_navi_icon_text_pane_t1

0xcabf,	// (0x00051c09) navi_tabs_2_long_pane

0xcabf,	// (0x00051c09) navi_tabs_2_pane

0xcabf,	// (0x00051c09) navi_tabs_3_long_pane

0xcabf,	// (0x00051c09) navi_tabs_3_pane

0xcabf,	// (0x00051c09) navi_tabs_4_pane

0x87d8,	// (0x0004d922) tabs_2_active_pane_ParamLimits

0x87d8,	// (0x0004d922) tabs_2_active_pane

0x87e8,	// (0x0004d932) tabs_2_passive_pane_ParamLimits

0x87e8,	// (0x0004d932) tabs_2_passive_pane

0x87a6,	// (0x0004d8f0) tabs_3_active_pane_ParamLimits

0x87a6,	// (0x0004d8f0) tabs_3_active_pane

0x87b6,	// (0x0004d900) tabs_3_passive_pane_ParamLimits

0x87b6,	// (0x0004d900) tabs_3_passive_pane

0x87c7,	// (0x0004d911) tabs_3_passive_pane_cp_ParamLimits

0x87c7,	// (0x0004d911) tabs_3_passive_pane_cp

0x8762,	// (0x0004d8ac) tabs_4_active_pane_ParamLimits

0x8762,	// (0x0004d8ac) tabs_4_active_pane

0x8773,	// (0x0004d8bd) tabs_4_passive_pane_ParamLimits

0x8773,	// (0x0004d8bd) tabs_4_passive_pane

0x8784,	// (0x0004d8ce) tabs_4_passive_pane_cp_ParamLimits

0x8784,	// (0x0004d8ce) tabs_4_passive_pane_cp

0x8795,	// (0x0004d8df) tabs_4_passive_pane_cp2_ParamLimits

0x8795,	// (0x0004d8df) tabs_4_passive_pane_cp2

0x8742,	// (0x0004d88c) tabs_2_long_active_pane_ParamLimits

0x8742,	// (0x0004d88c) tabs_2_long_active_pane

0x8752,	// (0x0004d89c) tabs_2_long_passive_pane_ParamLimits

0x8752,	// (0x0004d89c) tabs_2_long_passive_pane

0x870d,	// (0x0004d857) tabs_3_long_active_pane_ParamLimits

0x870d,	// (0x0004d857) tabs_3_long_active_pane

0x871e,	// (0x0004d868) tabs_3_long_passive_pane_ParamLimits

0x871e,	// (0x0004d868) tabs_3_long_passive_pane

0x8731,	// (0x0004d87b) tabs_3_long_passive_pane_cp_ParamLimits

0x8731,	// (0x0004d87b) tabs_3_long_passive_pane_cp

0x1638,	// (0x00046782) volume_small_pane_g1

0x86bc,	// (0x0004d806) volume_small_pane_g2

0x86c5,	// (0x0004d80f) volume_small_pane_g3

0x86ce,	// (0x0004d818) volume_small_pane_g4

0x86d7,	// (0x0004d821) volume_small_pane_g5

0x86e0,	// (0x0004d82a) volume_small_pane_g6

0x86e9,	// (0x0004d833) volume_small_pane_g7

0x86f2,	// (0x0004d83c) volume_small_pane_g8

0x86fb,	// (0x0004d845) volume_small_pane_g9

0x8704,	// (0x0004d84e) volume_small_pane_g10

0x0009,

0xf8b0,	// (0x000549fa) volume_small_pane_g

0xb817,	// (0x00050961) bg_active_tab_pane_cp2_ParamLimits

0xb817,	// (0x00050961) bg_active_tab_pane_cp2

0x92b0,	// (0x0004e3fa) tabs_3_active_pane_g1

0x92b8,	// (0x0004e402) tabs_3_active_pane_t1

0xb817,	// (0x00050961) bg_passive_tab_pane_cp2_ParamLimits

0xb817,	// (0x00050961) bg_passive_tab_pane_cp2

0x92b0,	// (0x0004e3fa) tabs_3_passive_pane_g1

0x92b8,	// (0x0004e402) tabs_3_passive_pane_t1

0xb817,	// (0x00050961) bg_active_tab_pane_cp3_ParamLimits

0xb817,	// (0x00050961) bg_active_tab_pane_cp3

0x92ca,	// (0x0004e414) tabs_4_active_pane_g1

0x92d2,	// (0x0004e41c) tabs_4_active_pane_t1

0xb817,	// (0x00050961) bg_passive_tab_pane_cp3_ParamLimits

0xb817,	// (0x00050961) bg_passive_tab_pane_cp3

0x92ca,	// (0x0004e414) tabs_4_1_passive_pane_g1

0x92d2,	// (0x0004e41c) tabs_4_1_passive_pane_t1

0xc355,	// (0x0005149f) list_highlight_pane_cp2

0xa5da,	// (0x0004f724) list_set_pane_ParamLimits

0xa5da,	// (0x0004f724) list_set_pane

0xa674,	// (0x0004f7be) main_pane_set_t1_ParamLimits

0xa674,	// (0x0004f7be) main_pane_set_t1

0xa694,	// (0x0004f7de) main_pane_set_t2_ParamLimits

0xa694,	// (0x0004f7de) main_pane_set_t2

0xa6a8,	// (0x0004f7f2) main_pane_set_t3_ParamLimits

0xa6a8,	// (0x0004f7f2) main_pane_set_t3

0xa6ba,	// (0x0004f804) main_pane_set_t4_ParamLimits

0xa6ba,	// (0x0004f804) main_pane_set_t4

0x0003,

0x00eb,	// (0x00045235) main_pane_set_t_ParamLimits

0x00eb,	// (0x00045235) main_pane_set_t

0xa6cc,	// (0x0004f816) setting_code_pane

0xa6d4,	// (0x0004f81e) setting_slider_graphic_pane

0xa6d4,	// (0x0004f81e) setting_slider_pane

0xa6d4,	// (0x0004f81e) setting_text_pane

0xa6d4,	// (0x0004f81e) setting_volume_pane

0x0aa2,	// (0x00045bec) volume_set_pane

0xb825,	// (0x0005096f) bg_set_opt_pane_cp

0x0aaa,	// (0x00045bf4) setting_slider_pane_t1

0x0ac3,	// (0x00045c0d) setting_slider_pane_t2

0x0adc,	// (0x00045c26) setting_slider_pane_t3

0x0002,

0xf576,	// (0x000546c0) setting_slider_pane_t

0x0af3,	// (0x00045c3d) slider_set_pane

0xb7c9,	// (0x00050913) bg_set_opt_pane_cp2

0xb833,	// (0x0005097d) setting_slider_graphic_pane_g1

0x0b09,	// (0x00045c53) setting_slider_graphic_pane_t1

0x0b18,	// (0x00045c62) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x000546c7) setting_slider_graphic_pane_t

0x0b27,	// (0x00045c71) slider_set_pane_cp

0xb7c9,	// (0x00050913) input_focus_pane_cp1

0xe355,	// (0x0005349f) list_set_text_pane

0xb7bf,	// (0x00050909) setting_text_pane_g1

0xb7c9,	// (0x00050913) input_focus_pane_cp2

0xb7bf,	// (0x00050909) setting_code_pane_g1

0xb83c,	// (0x00050986) setting_code_pane_t1

0x0b2f,	// (0x00045c79) set_text_pane_t1_ParamLimits

0x0b2f,	// (0x00045c79) set_text_pane_t1

0xc265,	// (0x000513af) set_opt_bg_pane_g1

0xc26d,	// (0x000513b7) set_opt_bg_pane_g2

0xe335,	// (0x0005347f) set_opt_bg_pane_g3

0xc27d,	// (0x000513c7) set_opt_bg_pane_g4

0xc285,	// (0x000513cf) set_opt_bg_pane_g5

0xc28d,	// (0x000513d7) set_opt_bg_pane_g6

0xe33d,	// (0x00053487) set_opt_bg_pane_g7

0xe345,	// (0x0005348f) set_opt_bg_pane_g8

0xe34d,	// (0x00053497) set_opt_bg_pane_g9

0x0008,

0x00d8,	// (0x00045222) set_opt_bg_pane_g

0xe328,	// (0x00053472) slider_set_pane_g1

0x1806,	// (0x00046950) slider_set_pane_g2

0x0006,

0xf959,	// (0x00054aa3) slider_set_pane_g

0x17a2,	// (0x000468ec) volume_set_pane_g1

0x17aa,	// (0x000468f4) volume_set_pane_g2

0x17b2,	// (0x000468fc) volume_set_pane_g3

0x17ba,	// (0x00046904) volume_set_pane_g4

0x17c2,	// (0x0004690c) volume_set_pane_g5

0x17ca,	// (0x00046914) volume_set_pane_g6

0x17d2,	// (0x0004691c) volume_set_pane_g7

0x17da,	// (0x00046924) volume_set_pane_g8

0x17e2,	// (0x0004692c) volume_set_pane_g9

0x17ea,	// (0x00046934) volume_set_pane_g10

0x0009,

0xf936,	// (0x00054a80) volume_set_pane_g

0x92e4,	// (0x0004e42e) indicator_pane_ParamLimits

0x92e4,	// (0x0004e42e) indicator_pane

0x930c,	// (0x0004e456) main_idle_pane_g2_ParamLimits

0x930c,	// (0x0004e456) main_idle_pane_g2

0x9344,	// (0x0004e48e) main_pane_idle_g1_ParamLimits

0x9344,	// (0x0004e48e) main_pane_idle_g1

0xbaf9,	// (0x00050c43) popup_clock_digital_analogue_window_ParamLimits

0xbaf9,	// (0x00050c43) popup_clock_digital_analogue_window

0x936b,	// (0x0004e4b5) soft_indicator_pane_ParamLimits

0x936b,	// (0x0004e4b5) soft_indicator_pane

0x9385,	// (0x0004e4cf) wallpaper_pane_ParamLimits

0x9385,	// (0x0004e4cf) wallpaper_pane

0xb7bf,	// (0x00050909) wallpaper_pane_g1

0x9397,	// (0x0004e4e1) indicator_pane_g1_ParamLimits

0x9397,	// (0x0004e4e1) indicator_pane_g1

0xe4ab,	// (0x000535f5) navi_navi_icon_text_pane_srt_g1

0xbb27,	// (0x00050c71) soft_indicator_pane_t1

0xbb41,	// (0x00050c8b) aid_ps_area_pane

0x93b0,	// (0x0004e4fa) aid_ps_clock_pane

0xbb52,	// (0x00050c9c) aid_ps_indicator_pane

0xbb5e,	// (0x00050ca8) indicator_ps_pane_ParamLimits

0xbb5e,	// (0x00050ca8) indicator_ps_pane

0xbb6d,	// (0x00050cb7) power_save_pane_g1_ParamLimits

0xbb6d,	// (0x00050cb7) power_save_pane_g1

0xbb79,	// (0x00050cc3) power_save_pane_g2_ParamLimits

0xbb79,	// (0x00050cc3) power_save_pane_g2

0x06c7,	// (0x00045811) aid_navinavi_width_pane

0xbb41,	// (0x00050c8b) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x000546cc) power_save_pane_g_ParamLimits

0xf582,	// (0x000546cc) power_save_pane_g

0xbb87,	// (0x00050cd1) power_save_pane_t1_ParamLimits

0xbb87,	// (0x00050cd1) power_save_pane_t1

0x93b0,	// (0x0004e4fa) aid_ps_clock_pane_ParamLimits

0xbb52,	// (0x00050c9c) aid_ps_indicator_pane_ParamLimits

0xbb99,	// (0x00050ce3) power_save_pane_t4_ParamLimits

0xbb99,	// (0x00050ce3) power_save_pane_t4

0x0001,

0xf587,	// (0x000546d1) power_save_pane_t_ParamLimits

0xf587,	// (0x000546d1) power_save_pane_t

0xbbc3,	// (0x00050d0d) power_save_t3_ParamLimits

0xbbc3,	// (0x00050d0d) power_save_t3

0xbbae,	// (0x00050cf8) power_save_t2_ParamLimits

0xbbae,	// (0x00050cf8) power_save_t2

0xbbd8,	// (0x00050d22) indicator_ps_pane_g1

0x93be,	// (0x0004e508) ai_gene_pane_ParamLimits

0x93be,	// (0x0004e508) ai_gene_pane

0x93d5,	// (0x0004e51f) ai_links_pane_ParamLimits

0x93d5,	// (0x0004e51f) ai_links_pane

0x93ed,	// (0x0004e537) indicator_pane_cp1_ParamLimits

0x93ed,	// (0x0004e537) indicator_pane_cp1

0x93fc,	// (0x0004e546) main_pane_idle_g1_cp_ParamLimits

0x93fc,	// (0x0004e546) main_pane_idle_g1_cp

0xbbe1,	// (0x00050d2b) popup_ai_links_title_window

0x9414,	// (0x0004e55e) soft_indicator_pane_cp1_ParamLimits

0x9414,	// (0x0004e55e) soft_indicator_pane_cp1

0xe166,	// (0x000532b0) ai_links_pane_g1

0xe16f,	// (0x000532b9) grid_ai_links_pane

0xa52f,	// (0x0004f679) ai_gene_pane_1

0xe154,	// (0x0005329e) ai_gene_pane_2

0xe15d,	// (0x000532a7) list_highlight_pane_cp4

0xa50b,	// (0x0004f655) cell_ai_link_pane_ParamLimits

0xa50b,	// (0x0004f655) cell_ai_link_pane

0xe14c,	// (0x00053296) cell_ai_link_pane_g1

0xbec4,	// (0x0005100e) cell_ai_link_pane_g2

0x0001,

0xf911,	// (0x00054a5b) cell_ai_link_pane_g

0xb7c9,	// (0x00050913) grid_highlight_cp2

0xb7c9,	// (0x00050913) bg_popup_sub_pane_cp1

0xbbf8,	// (0x00050d42) popup_ai_links_title_window_t1

0xe09a,	// (0x000531e4) ai_gene_pane_1_g1_ParamLimits

0xe09a,	// (0x000531e4) ai_gene_pane_1_g1

0xe0a6,	// (0x000531f0) ai_gene_pane_1_g2_ParamLimits

0xe0a6,	// (0x000531f0) ai_gene_pane_1_g2

0x0001,

0xf907,	// (0x00054a51) ai_gene_pane_1_g_ParamLimits

0xf907,	// (0x00054a51) ai_gene_pane_1_g

0xe0b3,	// (0x000531fd) ai_gene_pane_1_t1_ParamLimits

0xe0b3,	// (0x000531fd) ai_gene_pane_1_t1

0xe0e7,	// (0x00053231) grid_ai_soft_ind_pane

0xe085,	// (0x000531cf) ai_gene_pane_2_t1_ParamLimits

0xe085,	// (0x000531cf) ai_gene_pane_2_t1

0x9428,	// (0x0004e572) main_pane_empty_t1_ParamLimits

0x9428,	// (0x0004e572) main_pane_empty_t1

0x9440,	// (0x0004e58a) main_pane_empty_t2_ParamLimits

0x9440,	// (0x0004e58a) main_pane_empty_t2

0x9455,	// (0x0004e59f) main_pane_empty_t3_ParamLimits

0x9455,	// (0x0004e59f) main_pane_empty_t3

0x9467,	// (0x0004e5b1) main_pane_empty_t4_ParamLimits

0x9467,	// (0x0004e5b1) main_pane_empty_t4

0x9479,	// (0x0004e5c3) main_pane_empty_t5_ParamLimits

0x9479,	// (0x0004e5c3) main_pane_empty_t5

0x0004,

0xf58c,	// (0x000546d6) main_pane_empty_t_ParamLimits

0xf58c,	// (0x000546d6) main_pane_empty_t

0xc2b6,	// (0x00051400) bg_popup_window_pane_ParamLimits

0xc2b6,	// (0x00051400) bg_popup_window_pane

0xdddb,	// (0x00052f25) find_popup_pane_cp2_ParamLimits

0xdddb,	// (0x00052f25) find_popup_pane_cp2

0xdde7,	// (0x00052f31) heading_pane_ParamLimits

0xdde7,	// (0x00052f31) heading_pane

0xb7c9,	// (0x00050913) bg_popup_sub_pane

0xa48c,	// (0x0004f5d6) bg_popup_window_pane_g1_ParamLimits

0xa48c,	// (0x0004f5d6) bg_popup_window_pane_g1

0xa49b,	// (0x0004f5e5) bg_popup_window_pane_g2_ParamLimits

0xa49b,	// (0x0004f5e5) bg_popup_window_pane_g2

0xa4a7,	// (0x0004f5f1) bg_popup_window_pane_g3_ParamLimits

0xa4a7,	// (0x0004f5f1) bg_popup_window_pane_g3

0xa4b3,	// (0x0004f5fd) bg_popup_window_pane_g4_ParamLimits

0xa4b3,	// (0x0004f5fd) bg_popup_window_pane_g4

0xa4c2,	// (0x0004f60c) bg_popup_window_pane_g5_ParamLimits

0xa4c2,	// (0x0004f60c) bg_popup_window_pane_g5

0xa4d2,	// (0x0004f61c) bg_popup_window_pane_g6_ParamLimits

0xa4d2,	// (0x0004f61c) bg_popup_window_pane_g6

0xa4de,	// (0x0004f628) bg_popup_window_pane_g7_ParamLimits

0xa4de,	// (0x0004f628) bg_popup_window_pane_g7

0xa4ed,	// (0x0004f637) bg_popup_window_pane_g8_ParamLimits

0xa4ed,	// (0x0004f637) bg_popup_window_pane_g8

0xa4fc,	// (0x0004f646) bg_popup_window_pane_g9_ParamLimits

0xa4fc,	// (0x0004f646) bg_popup_window_pane_g9

0xddc1,	// (0x00052f0b) bg_popup_window_pane_g10_ParamLimits

0xddc1,	// (0x00052f0b) bg_popup_window_pane_g10

0x0009,

0xf8cf,	// (0x00054a19) bg_popup_window_pane_g_ParamLimits

0xf8cf,	// (0x00054a19) bg_popup_window_pane_g

0xdd78,	// (0x00052ec2) bg_popup_heading_pane_ParamLimits

0xdd78,	// (0x00052ec2) bg_popup_heading_pane

0x188e,	// (0x000469d8) tabs_4_passive_pane_cp_srt_ParamLimits

0x188e,	// (0x000469d8) tabs_4_passive_pane_cp_srt

0x18a0,	// (0x000469ea) tabs_4_passive_pane_srt_ParamLimits

0xdd8c,	// (0x00052ed6) heading_pane_g2

0x18a0,	// (0x000469ea) tabs_4_passive_pane_srt

0xd275,	// (0x000523bf) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd275,	// (0x000523bf) bg_passive_tab_pane_cp3_srt

0xdd94,	// (0x00052ede) heading_pane_t1_ParamLimits

0xdd94,	// (0x00052ede) heading_pane_t1

0xddab,	// (0x00052ef5) heading_pane_t2_ParamLimits

0xddab,	// (0x00052ef5) heading_pane_t2

0x0001,

0xf8ca,	// (0x00054a14) heading_pane_t_ParamLimits

0xf8ca,	// (0x00054a14) heading_pane_t

0xd8d1,	// (0x00052a1b) bg_popup_heading_pane_g1

0xd962,	// (0x00052aac) bg_popup_heading_pane_g2

0xd96c,	// (0x00052ab6) bg_popup_heading_pane_g3

0xd976,	// (0x00052ac0) bg_popup_heading_pane_g4

0xd980,	// (0x00052aca) bg_popup_heading_pane_g5

0xd98a,	// (0x00052ad4) bg_popup_heading_pane_g6

0xd992,	// (0x00052adc) bg_popup_heading_pane_g7

0xd99a,	// (0x00052ae4) bg_popup_heading_pane_g8

0xd9a4,	// (0x00052aee) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x000549e7) bg_popup_heading_pane_g

0xd177,	// (0x000522c1) bg_popup_sub_pane_g1

0xd187,	// (0x000522d1) bg_popup_sub_pane_g2

0xd17f,	// (0x000522c9) bg_popup_sub_pane_g3

0xd197,	// (0x000522e1) bg_popup_sub_pane_g4

0xd18f,	// (0x000522d9) bg_popup_sub_pane_g5

0xd19f,	// (0x000522e9) bg_popup_sub_pane_g6

0xd1a7,	// (0x000522f1) bg_popup_sub_pane_g7

0xd1b7,	// (0x00052301) bg_popup_sub_pane_g8

0xd1af,	// (0x000522f9) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x000549c1) bg_popup_sub_pane_g

0xb817,	// (0x00050961) bg_popup_window_pane_cp5_ParamLimits

0xb817,	// (0x00050961) bg_popup_window_pane_cp5

0xbc15,	// (0x00050d5f) popup_note_window_g1_ParamLimits

0xbc15,	// (0x00050d5f) popup_note_window_g1

0xbc21,	// (0x00050d6b) popup_note_window_t1_ParamLimits

0xbc21,	// (0x00050d6b) popup_note_window_t1

0xbc33,	// (0x00050d7d) popup_note_window_t2_ParamLimits

0xbc33,	// (0x00050d7d) popup_note_window_t2

0xbc45,	// (0x00050d8f) popup_note_window_t3_ParamLimits

0xbc45,	// (0x00050d8f) popup_note_window_t3

0xbc57,	// (0x00050da1) popup_note_window_t4_ParamLimits

0xbc57,	// (0x00050da1) popup_note_window_t4

0xbc7f,	// (0x00050dc9) popup_note_window_t5_ParamLimits

0xbc7f,	// (0x00050dc9) popup_note_window_t5

0x0004,

0xf597,	// (0x000546e1) popup_note_window_t_ParamLimits

0xf597,	// (0x000546e1) popup_note_window_t

0xbca3,	// (0x00050ded) bg_popup_window_pane_cp6_ParamLimits

0xbca3,	// (0x00050ded) bg_popup_window_pane_cp6

0xd833,	// (0x0005297d) popup_note_image_window_g1_ParamLimits

0xd833,	// (0x0005297d) popup_note_image_window_g1

0xd83f,	// (0x00052989) popup_note_image_window_g2_ParamLimits

0xd83f,	// (0x00052989) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x000549b5) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x000549b5) popup_note_image_window_g

0xd858,	// (0x000529a2) popup_note_image_window_t1_ParamLimits

0xd858,	// (0x000529a2) popup_note_image_window_t1

0xd871,	// (0x000529bb) popup_note_image_window_t2_ParamLimits

0xd871,	// (0x000529bb) popup_note_image_window_t2

0xd88a,	// (0x000529d4) popup_note_image_window_t3_ParamLimits

0xd88a,	// (0x000529d4) popup_note_image_window_t3

0x0002,

0xf870,	// (0x000549ba) popup_note_image_window_t_ParamLimits

0xf870,	// (0x000549ba) popup_note_image_window_t

0xd710,	// (0x0005285a) bg_popup_window_pane_cp7_ParamLimits

0xd710,	// (0x0005285a) bg_popup_window_pane_cp7

0xd740,	// (0x0005288a) popup_note_wait_window_g1_ParamLimits

0xd740,	// (0x0005288a) popup_note_wait_window_g1

0xd74c,	// (0x00052896) popup_note_wait_window_g2_ParamLimits

0xd74c,	// (0x00052896) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x000549a3) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x000549a3) popup_note_wait_window_g

0xd764,	// (0x000528ae) popup_note_wait_window_t1_ParamLimits

0xd764,	// (0x000528ae) popup_note_wait_window_t1

0xd78b,	// (0x000528d5) popup_note_wait_window_t2_ParamLimits

0xd78b,	// (0x000528d5) popup_note_wait_window_t2

0xd7a8,	// (0x000528f2) popup_note_wait_window_t3_ParamLimits

0xd7a8,	// (0x000528f2) popup_note_wait_window_t3

0xd7bb,	// (0x00052905) popup_note_wait_window_t4_ParamLimits

0xd7bb,	// (0x00052905) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x000549aa) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x000549aa) popup_note_wait_window_t

0xd7e0,	// (0x0005292a) wait_bar_pane_ParamLimits

0xd7e0,	// (0x0005292a) wait_bar_pane

0xb7c9,	// (0x00050913) wait_anim_pane

0xb7c9,	// (0x00050913) wait_border_pane

0xb7bf,	// (0x00050909) wait_anim_pane_g1

0xb7bf,	// (0x00050909) wait_anim_pane_g2

0x0001,

0xf720,	// (0x0005486a) wait_anim_pane_g

0xd6b4,	// (0x000527fe) wait_border_pane_g1

0xd6bf,	// (0x00052809) wait_border_pane_g2

0xd6c8,	// (0x00052812) wait_border_pane_g3

0x0002,

0xf852,	// (0x0005499c) wait_border_pane_g

0xd524,	// (0x0005266e) bg_popup_window_pane_cp16_ParamLimits

0xd524,	// (0x0005266e) bg_popup_window_pane_cp16

0xd624,	// (0x0005276e) indicator_popup_pane_cp4_ParamLimits

0xd624,	// (0x0005276e) indicator_popup_pane_cp4

0xd638,	// (0x00052782) popup_query_data_window_t1_ParamLimits

0xd638,	// (0x00052782) popup_query_data_window_t1

0xd64a,	// (0x00052794) popup_query_data_window_t2_ParamLimits

0xd64a,	// (0x00052794) popup_query_data_window_t2

0xd663,	// (0x000527ad) popup_query_data_window_t3_ParamLimits

0xd663,	// (0x000527ad) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00054995) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00054995) popup_query_data_window_t

0xd67d,	// (0x000527c7) query_popup_data_pane_ParamLimits

0xd67d,	// (0x000527c7) query_popup_data_pane

0xd691,	// (0x000527db) query_popup_data_pane_cp1_ParamLimits

0xd691,	// (0x000527db) query_popup_data_pane_cp1

0xd524,	// (0x0005266e) bg_popup_window_pane_cp10_ParamLimits

0xd524,	// (0x0005266e) bg_popup_window_pane_cp10

0xd556,	// (0x000526a0) indicator_popup_pane_ParamLimits

0xd556,	// (0x000526a0) indicator_popup_pane

0xd578,	// (0x000526c2) popup_query_code_window_t1_ParamLimits

0xd578,	// (0x000526c2) popup_query_code_window_t1

0xd592,	// (0x000526dc) popup_query_code_window_t2_ParamLimits

0xd592,	// (0x000526dc) popup_query_code_window_t2

0xd5db,	// (0x00052725) popup_query_code_window_t3_ParamLimits

0xd5db,	// (0x00052725) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0005498e) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0005498e) popup_query_code_window_t

0xd60a,	// (0x00052754) query_popup_pane_ParamLimits

0xd60a,	// (0x00052754) query_popup_pane

0xbca3,	// (0x00050ded) bg_popup_window_pane_cp15_ParamLimits

0xbca3,	// (0x00050ded) bg_popup_window_pane_cp15

0xbcc1,	// (0x00050e0b) indicator_popup_pane_cp1_ParamLimits

0xbcc1,	// (0x00050e0b) indicator_popup_pane_cp1

0xbcd4,	// (0x00050e1e) indicator_popup_pane_cp2_ParamLimits

0xbcd4,	// (0x00050e1e) indicator_popup_pane_cp2

0xbce7,	// (0x00050e31) popup_query_data_code_window_g1_ParamLimits

0xbce7,	// (0x00050e31) popup_query_data_code_window_g1

0xbcfa,	// (0x00050e44) popup_query_data_code_window_t1_ParamLimits

0xbcfa,	// (0x00050e44) popup_query_data_code_window_t1

0xbe41,	// (0x00050f8b) popup_query_data_code_window_t2_ParamLimits

0xbe41,	// (0x00050f8b) popup_query_data_code_window_t2

0xbe53,	// (0x00050f9d) popup_query_data_code_window_t3_ParamLimits

0xbe53,	// (0x00050f9d) popup_query_data_code_window_t3

0xbe69,	// (0x00050fb3) popup_query_data_code_window_t4_ParamLimits

0xbe69,	// (0x00050fb3) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x000546ec) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x000546ec) popup_query_data_code_window_t

0x154b,	// (0x00046695) list_single_midp_graphic_pane_g3

0xbe81,	// (0x00050fcb) query_popup_data_pane_cp2_ParamLimits

0xbe94,	// (0x00050fde) query_popup_pane_cp2_ParamLimits

0xbe94,	// (0x00050fde) query_popup_pane_cp2

0xb7c9,	// (0x00050913) bg_popup_window_pane_cp11

0xd51c,	// (0x00052666) heading_pane_cp5

0xbf22,	// (0x0005106c) listscroll_popup_info_pane

0xb7c9,	// (0x00050913) input_focus_pane_cp3

0xbea7,	// (0x00050ff1) query_popup_pane_t1

0xbeb5,	// (0x00050fff) list_popup_info_pane_ParamLimits

0xbeb5,	// (0x00050fff) list_popup_info_pane

0xbec4,	// (0x0005100e) listscroll_popup_info_pane_g1

0xbecc,	// (0x00051016) scroll_pane_cp7

0xbed6,	// (0x00051020) popup_info_list_pane_t1_ParamLimits

0xbed6,	// (0x00051020) popup_info_list_pane_t1

0xbef0,	// (0x0005103a) popup_info_list_pane_t2_ParamLimits

0xbef0,	// (0x0005103a) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x000546f5) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x000546f5) popup_info_list_pane_t

0xb7c9,	// (0x00050913) bg_popup_window_pane_cp12

0xe4c5,	// (0x0005360f) find_popup_pane

0xb825,	// (0x0005096f) bg_popup_window_pane_cp3

0xbf0a,	// (0x00051054) heading_pane_cp3

0xbf16,	// (0x00051060) listscroll_popup_graphic_pane

0xb7c9,	// (0x00050913) bg_popup_window_pane_cp4

0x94db,	// (0x0004e625) heading_pane_cp4

0xbf22,	// (0x0005106c) listscroll_popup_colour_pane

0x94e3,	// (0x0004e62d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x94e3,	// (0x0004e62d) cell_large_graphic_colour_none_popup_pane

0x94f7,	// (0x0004e641) grid_large_graphic_colour_popup_pane_ParamLimits

0x94f7,	// (0x0004e641) grid_large_graphic_colour_popup_pane

0x951b,	// (0x0004e665) listscroll_popup_colour_pane_g1_ParamLimits

0x951b,	// (0x0004e665) listscroll_popup_colour_pane_g1

0x9532,	// (0x0004e67c) listscroll_popup_colour_pane_g2_ParamLimits

0x9532,	// (0x0004e67c) listscroll_popup_colour_pane_g2

0x9549,	// (0x0004e693) listscroll_popup_colour_pane_g3_ParamLimits

0x9549,	// (0x0004e693) listscroll_popup_colour_pane_g3

0x9559,	// (0x0004e6a3) listscroll_popup_colour_pane_g4_ParamLimits

0x9559,	// (0x0004e6a3) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x000546fa) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x000546fa) listscroll_popup_colour_pane_g

0xbf2a,	// (0x00051074) scroll_pane_cp6_ParamLimits

0xbf2a,	// (0x00051074) scroll_pane_cp6

0x9568,	// (0x0004e6b2) cell_large_graphic_colour_popup_pane_ParamLimits

0x9568,	// (0x0004e6b2) cell_large_graphic_colour_popup_pane

0xbf3c,	// (0x00051086) cell_large_graphic_colour_none_popup_pane_t1

0xb7c9,	// (0x00050913) grid_highlight_pane_cp5

0xbf4b,	// (0x00051095) cell_large_graphic_colour_popup_pane_g1

0xbf53,	// (0x0005109d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00054703) cell_large_graphic_colour_popup_pane_g

0xbf5b,	// (0x000510a5) cell_large_graphic_colour_popup_pane_g2_copy1

0xbf64,	// (0x000510ae) grid_highlight_pane_cp4

0xbf6c,	// (0x000510b6) bg_popup_window_pane_cp8_ParamLimits

0xbf6c,	// (0x000510b6) bg_popup_window_pane_cp8

0xbf87,	// (0x000510d1) popup_snote_single_text_window_g1_ParamLimits

0xbf87,	// (0x000510d1) popup_snote_single_text_window_g1

0xbf99,	// (0x000510e3) popup_snote_single_text_window_t1_ParamLimits

0xbf99,	// (0x000510e3) popup_snote_single_text_window_t1

0xbfac,	// (0x000510f6) popup_snote_single_text_window_t2_ParamLimits

0xbfac,	// (0x000510f6) popup_snote_single_text_window_t2

0xbfbf,	// (0x00051109) popup_snote_single_text_window_t3_ParamLimits

0xbfbf,	// (0x00051109) popup_snote_single_text_window_t3

0xbff8,	// (0x00051142) popup_snote_single_text_window_t4_ParamLimits

0xbff8,	// (0x00051142) popup_snote_single_text_window_t4

0xc02c,	// (0x00051176) popup_snote_single_text_window_t5_ParamLimits

0xc02c,	// (0x00051176) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00054708) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00054708) popup_snote_single_text_window_t

0xc05b,	// (0x000511a5) bg_popup_window_pane_cp9_ParamLimits

0xc05b,	// (0x000511a5) bg_popup_window_pane_cp9

0xbf87,	// (0x000510d1) popup_snote_single_graphic_window_g1_ParamLimits

0xbf87,	// (0x000510d1) popup_snote_single_graphic_window_g1

0xc069,	// (0x000511b3) popup_snote_single_graphic_window_g2_ParamLimits

0xc069,	// (0x000511b3) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00054713) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00054713) popup_snote_single_graphic_window_g

0xc075,	// (0x000511bf) popup_snote_single_graphic_window_t1_ParamLimits

0xc075,	// (0x000511bf) popup_snote_single_graphic_window_t1

0xc088,	// (0x000511d2) popup_snote_single_graphic_window_t2_ParamLimits

0xc088,	// (0x000511d2) popup_snote_single_graphic_window_t2

0xc09b,	// (0x000511e5) popup_snote_single_graphic_window_t3_ParamLimits

0xc09b,	// (0x000511e5) popup_snote_single_graphic_window_t3

0xc0d4,	// (0x0005121e) popup_snote_single_graphic_window_t4_ParamLimits

0xc0d4,	// (0x0005121e) popup_snote_single_graphic_window_t4

0xc108,	// (0x00051252) popup_snote_single_graphic_window_t5_ParamLimits

0xc108,	// (0x00051252) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00054718) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00054718) popup_snote_single_graphic_window_t

0xe449,	// (0x00053593) grid_graphic_popup_pane_ParamLimits

0xe449,	// (0x00053593) grid_graphic_popup_pane

0xe475,	// (0x000535bf) listscroll_popup_graphic_pane_g1_ParamLimits

0xe475,	// (0x000535bf) listscroll_popup_graphic_pane_g1

0xa7c3,	// (0x0004f90d) listscroll_popup_graphic_pane_g2_ParamLimits

0xa7c3,	// (0x0004f90d) listscroll_popup_graphic_pane_g2

0x0001,

0x0115,	// (0x0004525f) listscroll_popup_graphic_pane_g_ParamLimits

0x0115,	// (0x0004525f) listscroll_popup_graphic_pane_g

0xdf65,	// (0x000530af) scroll_pane_cp5

0xa786,	// (0x0004f8d0) cell_graphic_popup_pane_ParamLimits

0xa786,	// (0x0004f8d0) cell_graphic_popup_pane

0xe414,	// (0x0005355e) cell_graphic_popup_pane_g1

0xe41c,	// (0x00053566) cell_graphic_popup_pane_g2

0xbf5b,	// (0x000510a5) cell_graphic_popup_pane_g3

0x0002,

0x010e,	// (0x00045258) cell_graphic_popup_pane_g

0xe425,	// (0x0005356f) cell_graphic_popup_pane_t2

0xbf64,	// (0x000510ae) grid_highlight_pane_cp3

0xc149,	// (0x00051293) list_gen_pane_ParamLimits

0xc149,	// (0x00051293) list_gen_pane

0xc171,	// (0x000512bb) scroll_pane

0xa741,	// (0x0004f88b) bg_list_pane_g1_ParamLimits

0xa741,	// (0x0004f88b) bg_list_pane_g1

0xe3c3,	// (0x0005350d) bg_list_pane_g2_ParamLimits

0xe3c3,	// (0x0005350d) bg_list_pane_g2

0xe3d6,	// (0x00053520) bg_list_pane_g3_ParamLimits

0xe3d6,	// (0x00053520) bg_list_pane_g3

0xe3e8,	// (0x00053532) bg_list_pane_g4_ParamLimits

0xe3e8,	// (0x00053532) bg_list_pane_g4

0xa75c,	// (0x0004f8a6) bg_list_pane_g5_ParamLimits

0xa75c,	// (0x0004f8a6) bg_list_pane_g5

0x0004,

0x0103,	// (0x0004524d) bg_list_pane_g_ParamLimits

0x0103,	// (0x0004524d) bg_list_pane_g

0xa707,	// (0x0004f851) list_double2_graphic_large_graphic_pane_ParamLimits

0xa707,	// (0x0004f851) list_double2_graphic_large_graphic_pane

0xa707,	// (0x0004f851) list_double2_graphic_pane_ParamLimits

0xa707,	// (0x0004f851) list_double2_graphic_pane

0xa707,	// (0x0004f851) list_double2_large_graphic_pane_ParamLimits

0xa707,	// (0x0004f851) list_double2_large_graphic_pane

0xa707,	// (0x0004f851) list_double2_pane_ParamLimits

0xa707,	// (0x0004f851) list_double2_pane

0xa707,	// (0x0004f851) list_double_graphic_heading_pane_ParamLimits

0xa707,	// (0x0004f851) list_double_graphic_heading_pane

0xa707,	// (0x0004f851) list_double_graphic_pane_ParamLimits

0xa707,	// (0x0004f851) list_double_graphic_pane

0xa707,	// (0x0004f851) list_double_heading_pane_ParamLimits

0xa707,	// (0x0004f851) list_double_heading_pane

0xa707,	// (0x0004f851) list_double_large_graphic_pane_ParamLimits

0xa707,	// (0x0004f851) list_double_large_graphic_pane

0xa707,	// (0x0004f851) list_double_number_pane_ParamLimits

0xa707,	// (0x0004f851) list_double_number_pane

0xa707,	// (0x0004f851) list_double_pane_ParamLimits

0xa707,	// (0x0004f851) list_double_pane

0xa707,	// (0x0004f851) list_double_time_pane_ParamLimits

0xa707,	// (0x0004f851) list_double_time_pane

0xa707,	// (0x0004f851) list_setting_number_pane_ParamLimits

0xa707,	// (0x0004f851) list_setting_number_pane

0xa707,	// (0x0004f851) list_setting_pane_ParamLimits

0xa707,	// (0x0004f851) list_setting_pane

0xa71a,	// (0x0004f864) list_single_2graphic_pane_ParamLimits

0xa71a,	// (0x0004f864) list_single_2graphic_pane

0xa71a,	// (0x0004f864) list_single_graphic_heading_pane_ParamLimits

0xa71a,	// (0x0004f864) list_single_graphic_heading_pane

0xa71a,	// (0x0004f864) list_single_graphic_pane_ParamLimits

0xa71a,	// (0x0004f864) list_single_graphic_pane

0xa71a,	// (0x0004f864) list_single_heading_pane_ParamLimits

0xa71a,	// (0x0004f864) list_single_heading_pane

0xa71a,	// (0x0004f864) list_single_large_graphic_pane_ParamLimits

0xa71a,	// (0x0004f864) list_single_large_graphic_pane

0xa71a,	// (0x0004f864) list_single_number_heading_pane_ParamLimits

0xa71a,	// (0x0004f864) list_single_number_heading_pane

0xa71a,	// (0x0004f864) list_single_number_pane_ParamLimits

0xa71a,	// (0x0004f864) list_single_number_pane

0xa71a,	// (0x0004f864) list_single_pane_ParamLimits

0xa71a,	// (0x0004f864) list_single_pane

0xb7c9,	// (0x00050913) list_highlight_pane_cp1

0x29d0,	// (0x00047b1a) list_single_pane_g1_ParamLimits

0x29d0,	// (0x00047b1a) list_single_pane_g1

0x29dc,	// (0x00047b26) list_single_pane_g2_ParamLimits

0x29dc,	// (0x00047b26) list_single_pane_g2

0x0001,

0xf5ea,	// (0x00054734) list_single_pane_g_ParamLimits

0xf5ea,	// (0x00054734) list_single_pane_g

0x3349,	// (0x00048493) list_single_pane_t1_ParamLimits

0x3349,	// (0x00048493) list_single_pane_t1

0x29d0,	// (0x00047b1a) list_single_number_pane_g1_ParamLimits

0x29d0,	// (0x00047b1a) list_single_number_pane_g1

0x29dc,	// (0x00047b26) list_single_number_pane_g2_ParamLimits

0x29dc,	// (0x00047b26) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x00054734) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x00054734) list_single_number_pane_g

0x3112,	// (0x0004825c) list_single_number_pane_t1_ParamLimits

0x3112,	// (0x0004825c) list_single_number_pane_t1

0x8f82,	// (0x0004e0cc) list_single_number_pane_t2_ParamLimits

0x8f82,	// (0x0004e0cc) list_single_number_pane_t2

0x0001,

0xf954,	// (0x00054a9e) list_single_number_pane_t_ParamLimits

0xf954,	// (0x00054a9e) list_single_number_pane_t

0x8194,	// (0x0004d2de) list_single_graphic_pane_g1_ParamLimits

0x8194,	// (0x0004d2de) list_single_graphic_pane_g1

0x29d0,	// (0x00047b1a) list_single_graphic_pane_g2_ParamLimits

0x29d0,	// (0x00047b1a) list_single_graphic_pane_g2

0x29dc,	// (0x00047b26) list_single_graphic_pane_g3_ParamLimits

0x29dc,	// (0x00047b26) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00054723) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00054723) list_single_graphic_pane_g

0x81a0,	// (0x0004d2ea) list_single_graphic_pane_t1_ParamLimits

0x81a0,	// (0x0004d2ea) list_single_graphic_pane_t1

0x81b6,	// (0x0004d300) list_single_heading_pane_g1_ParamLimits

0x81b6,	// (0x0004d300) list_single_heading_pane_g1

0x29dc,	// (0x00047b26) list_single_heading_pane_g2_ParamLimits

0x29dc,	// (0x00047b26) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0005472a) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0005472a) list_single_heading_pane_g

0x81c9,	// (0x0004d313) list_single_heading_pane_t1_ParamLimits

0x81c9,	// (0x0004d313) list_single_heading_pane_t1

0x81df,	// (0x0004d329) list_single_heading_pane_t2_ParamLimits

0x81df,	// (0x0004d329) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005472f) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005472f) list_single_heading_pane_t

0x29d0,	// (0x00047b1a) list_single_number_heading_pane_g1_ParamLimits

0x29d0,	// (0x00047b1a) list_single_number_heading_pane_g1

0x29dc,	// (0x00047b26) list_single_number_heading_pane_g2_ParamLimits

0x29dc,	// (0x00047b26) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x00054734) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x00054734) list_single_number_heading_pane_g

0x335f,	// (0x000484a9) list_single_number_heading_pane_t1_ParamLimits

0x335f,	// (0x000484a9) list_single_number_heading_pane_t1

0x81f1,	// (0x0004d33b) list_single_number_heading_pane_t2_ParamLimits

0x81f1,	// (0x0004d33b) list_single_number_heading_pane_t2

0x3323,	// (0x0004846d) list_single_number_heading_pane_t3_ParamLimits

0x3323,	// (0x0004846d) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x00054739) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x00054739) list_single_number_heading_pane_t

0x8203,	// (0x0004d34d) list_single_graphic_heading_pane_g1_ParamLimits

0x8203,	// (0x0004d34d) list_single_graphic_heading_pane_g1

0x8217,	// (0x0004d361) list_single_graphic_heading_pane_g4_ParamLimits

0x8217,	// (0x0004d361) list_single_graphic_heading_pane_g4

0x29dc,	// (0x00047b26) list_single_graphic_heading_pane_g5_ParamLimits

0x29dc,	// (0x00047b26) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x00054740) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x00054740) list_single_graphic_heading_pane_g

0x335f,	// (0x000484a9) list_single_graphic_heading_pane_t1_ParamLimits

0x335f,	// (0x000484a9) list_single_graphic_heading_pane_t1

0x8228,	// (0x0004d372) list_single_graphic_heading_pane_t2_ParamLimits

0x8228,	// (0x0004d372) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x00054747) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x00054747) list_single_graphic_heading_pane_t

0x3c84,	// (0x00048dce) list_single_large_graphic_pane_g1_ParamLimits

0x3c84,	// (0x00048dce) list_single_large_graphic_pane_g1

0x29d0,	// (0x00047b1a) list_single_large_graphic_pane_g2_ParamLimits

0x29d0,	// (0x00047b1a) list_single_large_graphic_pane_g2

0x29dc,	// (0x00047b26) list_single_large_graphic_pane_g3_ParamLimits

0x29dc,	// (0x00047b26) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x0005474c) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x0005474c) list_single_large_graphic_pane_g

0xd6bf,	// (0x00052809) wait_border_pane_g2_copy1

0x8c82,	// (0x0004ddcc) list_single_large_graphic_pane_g4_cp2

0x335f,	// (0x000484a9) list_single_large_graphic_pane_t1_ParamLimits

0x335f,	// (0x000484a9) list_single_large_graphic_pane_t1

0x2a23,	// (0x00047b6d) list_double_pane_g1_ParamLimits

0x2a23,	// (0x00047b6d) list_double_pane_g1

0x2a2f,	// (0x00047b79) list_double_pane_g2_ParamLimits

0x2a2f,	// (0x00047b79) list_double_pane_g2

0x0001,

0xf609,	// (0x00054753) list_double_pane_g_ParamLimits

0xf609,	// (0x00054753) list_double_pane_g

0x8240,	// (0x0004d38a) list_double_pane_t1_ParamLimits

0x8240,	// (0x0004d38a) list_double_pane_t1

0x8256,	// (0x0004d3a0) list_double_pane_t2_ParamLimits

0x8256,	// (0x0004d3a0) list_double_pane_t2

0x0001,

0xf60e,	// (0x00054758) list_double_pane_t_ParamLimits

0xf60e,	// (0x00054758) list_double_pane_t

0x8268,	// (0x0004d3b2) list_double2_pane_g1_ParamLimits

0x8268,	// (0x0004d3b2) list_double2_pane_g1

0x0eae,	// (0x00045ff8) list_double2_pane_g2_ParamLimits

0x0eae,	// (0x00045ff8) list_double2_pane_g2

0x0001,

0xf613,	// (0x0005475d) list_double2_pane_g_ParamLimits

0xf613,	// (0x0005475d) list_double2_pane_g

0x8279,	// (0x0004d3c3) list_double2_pane_t1_ParamLimits

0x8279,	// (0x0004d3c3) list_double2_pane_t1

0x828f,	// (0x0004d3d9) list_double2_pane_t2_ParamLimits

0x828f,	// (0x0004d3d9) list_double2_pane_t2

0x0001,

0xf618,	// (0x00054762) list_double2_pane_t_ParamLimits

0xf618,	// (0x00054762) list_double2_pane_t

0x2a23,	// (0x00047b6d) list_double_number_pane_g1_ParamLimits

0x2a23,	// (0x00047b6d) list_double_number_pane_g1

0x2a2f,	// (0x00047b79) list_double_number_pane_g2_ParamLimits

0x2a2f,	// (0x00047b79) list_double_number_pane_g2

0x0001,

0xf609,	// (0x00054753) list_double_number_pane_g_ParamLimits

0xf609,	// (0x00054753) list_double_number_pane_g

0x82a1,	// (0x0004d3eb) list_double_number_pane_t1_ParamLimits

0x82a1,	// (0x0004d3eb) list_double_number_pane_t1

0x0d21,	// (0x00045e6b) list_double_number_pane_t2_ParamLimits

0x0d21,	// (0x00045e6b) list_double_number_pane_t2

0x82b3,	// (0x0004d3fd) list_double_number_pane_t3_ParamLimits

0x82b3,	// (0x0004d3fd) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x00054767) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x00054767) list_double_number_pane_t

0x0d15,	// (0x00045e5f) list_double_graphic_pane_g1_ParamLimits

0x0d15,	// (0x00045e5f) list_double_graphic_pane_g1

0x8c8a,	// (0x0004ddd4) list_double_graphic_pane_g2_ParamLimits

0x8c8a,	// (0x0004ddd4) list_double_graphic_pane_g2

0x8c99,	// (0x0004dde3) list_double_graphic_pane_g3_ParamLimits

0x8c99,	// (0x0004dde3) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x0005476e) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x0005476e) list_double_graphic_pane_g

0x82c5,	// (0x0004d40f) list_double_graphic_pane_t1_ParamLimits

0x82c5,	// (0x0004d40f) list_double_graphic_pane_t1

0x82db,	// (0x0004d425) list_double_graphic_pane_t2_ParamLimits

0x82db,	// (0x0004d425) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x00054777) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x00054777) list_double_graphic_pane_t

0x82ed,	// (0x0004d437) list_double2_graphic_pane_g1_ParamLimits

0x82ed,	// (0x0004d437) list_double2_graphic_pane_g1

0xc1a5,	// (0x000512ef) list_double2_graphic_pane_g2_ParamLimits

0xc1a5,	// (0x000512ef) list_double2_graphic_pane_g2

0x8cb1,	// (0x0004ddfb) list_double2_graphic_pane_g3_ParamLimits

0x8cb1,	// (0x0004ddfb) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x0005477c) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x0005477c) list_double2_graphic_pane_g

0x82f9,	// (0x0004d443) list_double2_graphic_pane_t1_ParamLimits

0x82f9,	// (0x0004d443) list_double2_graphic_pane_t1

0x830f,	// (0x0004d459) list_double2_graphic_pane_t2_ParamLimits

0x830f,	// (0x0004d459) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x00054783) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x00054783) list_double2_graphic_pane_t

0x8321,	// (0x0004d46b) list_double_large_graphic_pane_g1_ParamLimits

0x8321,	// (0x0004d46b) list_double_large_graphic_pane_g1

0x8340,	// (0x0004d48a) list_double_large_graphic_pane_g2_ParamLimits

0x8340,	// (0x0004d48a) list_double_large_graphic_pane_g2

0x2a2f,	// (0x00047b79) list_double_large_graphic_pane_g3_ParamLimits

0x2a2f,	// (0x00047b79) list_double_large_graphic_pane_g3

0x8356,	// (0x0004d4a0) list_double_large_graphic_pane_g4_ParamLimits

0x8356,	// (0x0004d4a0) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x00054788) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x00054788) list_double_large_graphic_pane_g

0x8369,	// (0x0004d4b3) list_double_large_graphic_pane_t1_ParamLimits

0x8369,	// (0x0004d4b3) list_double_large_graphic_pane_t1

0x8382,	// (0x0004d4cc) list_double_large_graphic_pane_t2_ParamLimits

0x8382,	// (0x0004d4cc) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x00054793) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x00054793) list_double_large_graphic_pane_t

0x8cbd,	// (0x0004de07) list_double2_large_graphic_pane_g1_ParamLimits

0x8cbd,	// (0x0004de07) list_double2_large_graphic_pane_g1

0x8cc9,	// (0x0004de13) list_double2_large_graphic_pane_g2_ParamLimits

0x8cc9,	// (0x0004de13) list_double2_large_graphic_pane_g2

0x8cb1,	// (0x0004ddfb) list_double2_large_graphic_pane_g3_ParamLimits

0x8cb1,	// (0x0004ddfb) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x00054798) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x00054798) list_double2_large_graphic_pane_g

0x8394,	// (0x0004d4de) list_double2_large_graphic_pane_t1_ParamLimits

0x8394,	// (0x0004d4de) list_double2_large_graphic_pane_t1

0x83aa,	// (0x0004d4f4) list_double2_large_graphic_pane_t2_ParamLimits

0x83aa,	// (0x0004d4f4) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x0005479f) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x0005479f) list_double2_large_graphic_pane_t

0x83bc,	// (0x0004d506) list_double_heading_pane_g1_ParamLimits

0x83bc,	// (0x0004d506) list_double_heading_pane_g1

0x83cd,	// (0x0004d517) list_double_heading_pane_g2_ParamLimits

0x83cd,	// (0x0004d517) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x000547a4) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x000547a4) list_double_heading_pane_g

0x83d9,	// (0x0004d523) list_double_heading_pane_t1_ParamLimits

0x83d9,	// (0x0004d523) list_double_heading_pane_t1

0x828f,	// (0x0004d3d9) list_double_heading_pane_t2_ParamLimits

0x828f,	// (0x0004d3d9) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x000547a9) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x000547a9) list_double_heading_pane_t

0x0cd5,	// (0x00045e1f) list_double_graphic_heading_pane_g1_ParamLimits

0x0cd5,	// (0x00045e1f) list_double_graphic_heading_pane_g1

0x83bc,	// (0x0004d506) list_double_graphic_heading_pane_g2_ParamLimits

0x83bc,	// (0x0004d506) list_double_graphic_heading_pane_g2

0x83cd,	// (0x0004d517) list_double_graphic_heading_pane_g3_ParamLimits

0x83cd,	// (0x0004d517) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x000547ae) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x000547ae) list_double_graphic_heading_pane_g

0x83ef,	// (0x0004d539) list_double_graphic_heading_pane_t1_ParamLimits

0x83ef,	// (0x0004d539) list_double_graphic_heading_pane_t1

0x830f,	// (0x0004d459) list_double_graphic_heading_pane_t2_ParamLimits

0x830f,	// (0x0004d459) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x000547b5) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x000547b5) list_double_graphic_heading_pane_t

0x8405,	// (0x0004d54f) list_double_time_pane_g1_ParamLimits

0x8405,	// (0x0004d54f) list_double_time_pane_g1

0x0c67,	// (0x00045db1) list_double_time_pane_g2_ParamLimits

0x0c67,	// (0x00045db1) list_double_time_pane_g2

0x0001,

0xf670,	// (0x000547ba) list_double_time_pane_g_ParamLimits

0xf670,	// (0x000547ba) list_double_time_pane_g

0x8416,	// (0x0004d560) list_double_time_pane_t1_ParamLimits

0x8416,	// (0x0004d560) list_double_time_pane_t1

0x842c,	// (0x0004d576) list_double_time_pane_t2_ParamLimits

0x842c,	// (0x0004d576) list_double_time_pane_t2

0x843e,	// (0x0004d588) list_double_time_pane_t3_ParamLimits

0x843e,	// (0x0004d588) list_double_time_pane_t3

0x8450,	// (0x0004d59a) list_double_time_pane_t4_ParamLimits

0x8450,	// (0x0004d59a) list_double_time_pane_t4

0x0003,

0xf675,	// (0x000547bf) list_double_time_pane_t_ParamLimits

0xf675,	// (0x000547bf) list_double_time_pane_t

0x0ea2,	// (0x00045fec) list_setting_pane_g1_ParamLimits

0x0ea2,	// (0x00045fec) list_setting_pane_g1

0x0eae,	// (0x00045ff8) list_setting_pane_g2_ParamLimits

0x0eae,	// (0x00045ff8) list_setting_pane_g2

0x0001,

0xf67e,	// (0x000547c8) list_setting_pane_g_ParamLimits

0xf67e,	// (0x000547c8) list_setting_pane_g

0x8462,	// (0x0004d5ac) list_setting_pane_t1_ParamLimits

0x8462,	// (0x0004d5ac) list_setting_pane_t1

0x847c,	// (0x0004d5c6) list_setting_pane_t2_ParamLimits

0x847c,	// (0x0004d5c6) list_setting_pane_t2

0x0002,

0xf683,	// (0x000547cd) list_setting_pane_t_ParamLimits

0xf683,	// (0x000547cd) list_setting_pane_t

0x84b9,	// (0x0004d603) set_value_pane_cp_ParamLimits

0x84b9,	// (0x0004d603) set_value_pane_cp

0x0f1d,	// (0x00046067) list_setting_number_pane_g1_ParamLimits

0x0f1d,	// (0x00046067) list_setting_number_pane_g1

0x2a79,	// (0x00047bc3) list_setting_number_pane_g2_ParamLimits

0x2a79,	// (0x00047bc3) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x000547d4) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x000547d4) list_setting_number_pane_g

0x84c5,	// (0x0004d60f) list_setting_number_pane_t1_ParamLimits

0x84c5,	// (0x0004d60f) list_setting_number_pane_t1

0x8cda,	// (0x0004de24) list_setting_number_pane_t2_ParamLimits

0x8cda,	// (0x0004de24) list_setting_number_pane_t2

0x8cf4,	// (0x0004de3e) list_setting_number_pane_t3_ParamLimits

0x8cf4,	// (0x0004de3e) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x000547d9) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x000547d9) list_setting_number_pane_t

0x84b9,	// (0x0004d603) set_value_pane_ParamLimits

0x84b9,	// (0x0004d603) set_value_pane

0xc1b1,	// (0x000512fb) bg_set_opt_pane_ParamLimits

0xc1b1,	// (0x000512fb) bg_set_opt_pane

0x2afb,	// (0x00047c45) set_value_pane_t1

0xc1d2,	// (0x0005131c) slider_set_pane_cp3

0xc1db,	// (0x00051325) volume_small_pane_cp

0xc1e4,	// (0x0005132e) list_form_gen_pane

0xc1ed,	// (0x00051337) scroll_pane_cp8

0x8d37,	// (0x0004de81) form_field_data_pane_ParamLimits

0x8d37,	// (0x0004de81) form_field_data_pane

0x8d4e,	// (0x0004de98) form_field_data_wide_pane_ParamLimits

0x8d4e,	// (0x0004de98) form_field_data_wide_pane

0x8d6e,	// (0x0004deb8) form_field_popup_pane_ParamLimits

0x8d6e,	// (0x0004deb8) form_field_popup_pane

0x8d86,	// (0x0004ded0) form_field_popup_wide_pane_ParamLimits

0x8d86,	// (0x0004ded0) form_field_popup_wide_pane

0x2b8d,	// (0x00047cd7) form_field_slider_pane_ParamLimits

0x2b8d,	// (0x00047cd7) form_field_slider_pane

0x2ba0,	// (0x00047cea) form_field_slider_wide_pane_ParamLimits

0x2ba0,	// (0x00047cea) form_field_slider_wide_pane

0xc1fe,	// (0x00051348) data_form_pane

0x8dad,	// (0x0004def7) form_field_data_pane_t1

0xc20a,	// (0x00051354) input_focus_pane

0xc218,	// (0x00051362) data_form_wide_pane

0x2be3,	// (0x00047d2d) form_field_data_wide_pane_t1

0xbf79,	// (0x000510c3) input_focus_pane_cp6

0x8dc7,	// (0x0004df11) form_field_popup_pane_t1

0xc20a,	// (0x00051354) input_focus_pane_cp7

0xc238,	// (0x00051382) list_form_pane

0x2c27,	// (0x00047d71) form_field_popup_wide_pane_t1

0xc20a,	// (0x00051354) input_focus_pane_cp8

0xc244,	// (0x0005138e) list_form_wide_pane

0x8de9,	// (0x0004df33) form_field_slider_pane_t1_ParamLimits

0x8de9,	// (0x0004df33) form_field_slider_pane_t1

0x8e01,	// (0x0004df4b) form_field_slider_pane_t2_ParamLimits

0x8e01,	// (0x0004df4b) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x000547e9) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x000547e9) form_field_slider_pane_t

0xb817,	// (0x00050961) input_focus_pane_cp9_ParamLimits

0xb817,	// (0x00050961) input_focus_pane_cp9

0x8e16,	// (0x0004df60) slider_cont_pane_ParamLimits

0x8e16,	// (0x0004df60) slider_cont_pane

0xc253,	// (0x0005139d) form_field_slider_wide_pane_t1_ParamLimits

0xc253,	// (0x0005139d) form_field_slider_wide_pane_t1

0x2c85,	// (0x00047dcf) form_field_slider_wide_pane_t2_ParamLimits

0x2c85,	// (0x00047dcf) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x000547ee) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x000547ee) form_field_slider_wide_pane_t

0xb817,	// (0x00050961) input_focus_pane_cp10_ParamLimits

0xb817,	// (0x00050961) input_focus_pane_cp10

0x8e2a,	// (0x0004df74) slider_cont_pane_cp1_ParamLimits

0x8e2a,	// (0x0004df74) slider_cont_pane_cp1

0x8e3e,	// (0x0004df88) slider_form_pane_cp

0xc265,	// (0x000513af) input_focus_pane_g1

0xc26d,	// (0x000513b7) input_focus_pane_g2

0xc275,	// (0x000513bf) input_focus_pane_g3

0xc27d,	// (0x000513c7) input_focus_pane_g4

0xc285,	// (0x000513cf) input_focus_pane_g5

0xc28d,	// (0x000513d7) input_focus_pane_g6

0xc295,	// (0x000513df) input_focus_pane_g7

0xc29d,	// (0x000513e7) input_focus_pane_g8

0xc2a5,	// (0x000513ef) input_focus_pane_g9

0xb7bf,	// (0x00050909) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x000547f3) input_focus_pane_g

0xd6c8,	// (0x00052812) wait_border_pane_g3_copy1

0x8e46,	// (0x0004df90) data_form_pane_t1

0xb7bf,	// (0x00050909) wait_anim_pane_g1_copy1

0x8f94,	// (0x0004e0de) data_form_wide_pane_t1

0x8e60,	// (0x0004dfaa) list_form_graphic_pane_cp_ParamLimits

0x8e60,	// (0x0004dfaa) list_form_graphic_pane_cp

0xe35d,	// (0x000534a7) slider_form_pane_g1

0xe366,	// (0x000534b0) slider_form_pane_g2

0x0006,

0x00f4,	// (0x0004523e) slider_form_pane_g

0x8e60,	// (0x0004dfaa) list_form_graphic_pane_ParamLimits

0x8e60,	// (0x0004dfaa) list_form_graphic_pane

0x2cff,	// (0x00047e49) list_form_graphic_pane_g1

0x2d07,	// (0x00047e51) list_form_graphic_pane_t1_ParamLimits

0x2d07,	// (0x00047e51) list_form_graphic_pane_t1

0xb825,	// (0x0005096f) list_highlight_pane_cp5_ParamLimits

0xb825,	// (0x0005096f) list_highlight_pane_cp5

0x8e73,	// (0x0004dfbd) find_pane_g1

0xc2ad,	// (0x000513f7) input_find_pane

0x8e7c,	// (0x0004dfc6) input_find_pane_g1_ParamLimits

0x8e7c,	// (0x0004dfc6) input_find_pane_g1

0x8e88,	// (0x0004dfd2) input_find_pane_t1_ParamLimits

0x8e88,	// (0x0004dfd2) input_find_pane_t1

0x8e9d,	// (0x0004dfe7) input_find_pane_t2_ParamLimits

0x8e9d,	// (0x0004dfe7) input_find_pane_t2

0x0001,

0xf6be,	// (0x00054808) input_find_pane_t_ParamLimits

0xf6be,	// (0x00054808) input_find_pane_t

0xc2b6,	// (0x00051400) input_focus_pane_cp5_ParamLimits

0xc2b6,	// (0x00051400) input_focus_pane_cp5

0x959d,	// (0x0004e6e7) bg_popup_window_pane_cp2_ParamLimits

0x959d,	// (0x0004e6e7) bg_popup_window_pane_cp2

0x95aa,	// (0x0004e6f4) listscroll_menu_pane_ParamLimits

0x95aa,	// (0x0004e6f4) listscroll_menu_pane

0x95b6,	// (0x0004e700) popup_submenu_window_ParamLimits

0x95b6,	// (0x0004e700) popup_submenu_window

0xc2c4,	// (0x0005140e) find_popup_pane_g1

0xc2cc,	// (0x00051416) input_popup_find_pane_cp

0xc2b6,	// (0x00051400) input_focus_pane_cp4_ParamLimits

0xc2b6,	// (0x00051400) input_focus_pane_cp4

0xc2d6,	// (0x00051420) input_popup_find_pane_t1_ParamLimits

0xc2d6,	// (0x00051420) input_popup_find_pane_t1

0xb7c9,	// (0x00050913) bg_popup_sub_pane_cp

0xc304,	// (0x0005144e) listscroll_popup_sub_pane

0xc30c,	// (0x00051456) list_submenu_pane_ParamLimits

0xc30c,	// (0x00051456) list_submenu_pane

0xc31d,	// (0x00051467) scroll_pane_cp4

0xc325,	// (0x0005146f) list_single_popup_submenu_pane_ParamLimits

0xc325,	// (0x0005146f) list_single_popup_submenu_pane

0xc338,	// (0x00051482) list_single_popup_submenu_pane_g1

0xc340,	// (0x0005148a) list_single_popup_submenu_pane_t1_ParamLimits

0xc340,	// (0x0005148a) list_single_popup_submenu_pane_t1

0xb817,	// (0x00050961) bg_active_tab_pane_cp1_ParamLimits

0xb817,	// (0x00050961) bg_active_tab_pane_cp1

0x95ec,	// (0x0004e736) tabs_2_active_pane_g1

0x95f4,	// (0x0004e73e) tabs_2_active_pane_t1

0xb817,	// (0x00050961) bg_passive_tab_pane_cp1_ParamLimits

0xb817,	// (0x00050961) bg_passive_tab_pane_cp1

0x95ec,	// (0x0004e736) tabs_2_passive_pane_g1

0x95f4,	// (0x0004e73e) tabs_2_passive_pane_t1

0xb825,	// (0x0005096f) bg_active_tab_pane_cp4

0x9606,	// (0x0004e750) tabs_2_long_active_pane_t1

0xc355,	// (0x0005149f) bg_passive_tab_pane_cp4

0x1553,	// (0x0004669d) list_single_midp_graphic_pane_g4_ParamLimits

0xb825,	// (0x0005096f) bg_active_tab_pane_cp5

0x9619,	// (0x0004e763) tabs_3_long_active_pane_t1

0xc355,	// (0x0005149f) bg_passive_tab_pane_cp5

0x1553,	// (0x0004669d) list_single_midp_graphic_pane_g4

0xb825,	// (0x0005096f) bg_popup_window_pane_cp13_ParamLimits

0xb825,	// (0x0005096f) bg_popup_window_pane_cp13

0xc36a,	// (0x000514b4) listscroll_popup_fast_pane_ParamLimits

0xc36a,	// (0x000514b4) listscroll_popup_fast_pane

0xc379,	// (0x000514c3) grid_popup_fast_pane_ParamLimits

0xc379,	// (0x000514c3) grid_popup_fast_pane

0xc38b,	// (0x000514d5) scroll_pane_cp9_ParamLimits

0xc38b,	// (0x000514d5) scroll_pane_cp9

0x4b16,	// (0x00049c60) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4b16,	// (0x00049c60) list_single_graphic_hl_pane_t1_cp2

0xc3af,	// (0x000514f9) input_focus_pane_cp20_ParamLimits

0xc3af,	// (0x000514f9) input_focus_pane_cp20

0xc3bd,	// (0x00051507) query_popup_data_pane_t1_ParamLimits

0xc3bd,	// (0x00051507) query_popup_data_pane_t1

0xc3d0,	// (0x0005151a) query_popup_data_pane_t2_ParamLimits

0xc3d0,	// (0x0005151a) query_popup_data_pane_t2

0xc416,	// (0x00051560) query_popup_data_pane_t3_ParamLimits

0xc416,	// (0x00051560) query_popup_data_pane_t3

0xc457,	// (0x000515a1) query_popup_data_pane_t4_ParamLimits

0xc457,	// (0x000515a1) query_popup_data_pane_t4

0xc493,	// (0x000515dd) query_popup_data_pane_t5_ParamLimits

0xc493,	// (0x000515dd) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x0005480d) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x0005480d) query_popup_data_pane_t

0xc265,	// (0x000513af) bg_set_opt_pane_g1

0xc26d,	// (0x000513b7) bg_set_opt_pane_g2

0xc275,	// (0x000513bf) bg_set_opt_pane_g3

0xc27d,	// (0x000513c7) bg_set_opt_pane_g4

0xc285,	// (0x000513cf) bg_set_opt_pane_g5

0xc28d,	// (0x000513d7) bg_set_opt_pane_g6

0xc295,	// (0x000513df) bg_set_opt_pane_g7

0xc29d,	// (0x000513e7) bg_set_opt_pane_g8

0xc2a5,	// (0x000513ef) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x00054818) bg_set_opt_pane_g

0x11c8,	// (0x00046312) control_top_pane_stacon_ParamLimits

0x11c8,	// (0x00046312) control_top_pane_stacon

0x121b,	// (0x00046365) signal_pane_stacon_ParamLimits

0x121b,	// (0x00046365) signal_pane_stacon

0xc8e5,	// (0x00051a2f) stacon_top_pane_g1_ParamLimits

0xc8e5,	// (0x00051a2f) stacon_top_pane_g1

0x1240,	// (0x0004638a) title_pane_stacon_ParamLimits

0x1240,	// (0x0004638a) title_pane_stacon

0x126a,	// (0x000463b4) uni_indicator_pane_stacon_ParamLimits

0x126a,	// (0x000463b4) uni_indicator_pane_stacon

0x127f,	// (0x000463c9) battery_pane_stacon_ParamLimits

0x127f,	// (0x000463c9) battery_pane_stacon

0x12c3,	// (0x0004640d) control_bottom_pane_stacon_ParamLimits

0x12c3,	// (0x0004640d) control_bottom_pane_stacon

0x12e6,	// (0x00046430) navi_pane_stacon_ParamLimits

0x12e6,	// (0x00046430) navi_pane_stacon

0xc907,	// (0x00051a51) stacon_bottom_pane_g1_ParamLimits

0xc907,	// (0x00051a51) stacon_bottom_pane_g1

0x0f29,	// (0x00046073) aid_levels_signal_lsc_ParamLimits

0x0f29,	// (0x00046073) aid_levels_signal_lsc

0x0f40,	// (0x0004608a) signal_pane_stacon_g1_ParamLimits

0x0f40,	// (0x0004608a) signal_pane_stacon_g1

0x0f54,	// (0x0004609e) signal_pane_stacon_g2_ParamLimits

0x0f54,	// (0x0004609e) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x0005482b) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0005482b) signal_pane_stacon_g

0x0f89,	// (0x000460d3) title_pane_stacon_t1_ParamLimits

0x0f89,	// (0x000460d3) title_pane_stacon_t1

0xc4d7,	// (0x00051621) uni_indicator_pane_stacon_g1

0xc4e1,	// (0x0005162b) uni_indicator_pane_stacon_g2

0xc4eb,	// (0x00051635) uni_indicator_pane_stacon_g3

0xc4f5,	// (0x0005163f) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x00054837) uni_indicator_pane_stacon_g

0x0fae,	// (0x000460f8) control_top_pane_stacon_g1

0x0fb6,	// (0x00046100) control_top_pane_stacon_t1_ParamLimits

0x0fb6,	// (0x00046100) control_top_pane_stacon_t1

0x0fed,	// (0x00046137) aid_levels_battery_lsc_ParamLimits

0x0fed,	// (0x00046137) aid_levels_battery_lsc

0x1005,	// (0x0004614f) battery_pane_stacon_g1_ParamLimits

0x1005,	// (0x0004614f) battery_pane_stacon_g1

0x1018,	// (0x00046162) battery_pane_stacon_g2_ParamLimits

0x1018,	// (0x00046162) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x00054840) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x00054840) battery_pane_stacon_g

0x1056,	// (0x000461a0) navi_icon_pane_stacon

0x106a,	// (0x000461b4) navi_navi_pane_stacon

0x1056,	// (0x000461a0) navi_text_pane_stacon

0x0fae,	// (0x000460f8) control_bottom_pane_stacon_g1

0x107e,	// (0x000461c8) control_bottom_pane_stacon_t1_ParamLimits

0x107e,	// (0x000461c8) control_bottom_pane_stacon_t1

0x962b,	// (0x0004e775) grid_app_pane_ParamLimits

0x962b,	// (0x0004e775) grid_app_pane

0x9661,	// (0x0004e7ab) scroll_pane_cp15_ParamLimits

0x9661,	// (0x0004e7ab) scroll_pane_cp15

0x967a,	// (0x0004e7c4) cell_app_pane_ParamLimits

0x967a,	// (0x0004e7c4) cell_app_pane

0x96c1,	// (0x0004e80b) cell_app_pane_g1_ParamLimits

0x96c1,	// (0x0004e80b) cell_app_pane_g1

0xc519,	// (0x00051663) cell_app_pane_g2_ParamLimits

0xc519,	// (0x00051663) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x00054845) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x00054845) cell_app_pane_g

0x96e1,	// (0x0004e82b) cell_app_pane_t1_ParamLimits

0x96e1,	// (0x0004e82b) cell_app_pane_t1

0xc525,	// (0x0005166f) grid_highlight_pane_ParamLimits

0xc525,	// (0x0005166f) grid_highlight_pane

0xc265,	// (0x000513af) cell_highlight_pane_g1

0xc26d,	// (0x000513b7) cell_highlight_pane_g2

0xc275,	// (0x000513bf) cell_highlight_pane_g3

0xc27d,	// (0x000513c7) cell_highlight_pane_g4

0xc285,	// (0x000513cf) cell_highlight_pane_g5

0xc28d,	// (0x000513d7) cell_highlight_pane_g6

0xc295,	// (0x000513df) cell_highlight_pane_g7

0xc29d,	// (0x000513e7) cell_highlight_pane_g8

0xc2a5,	// (0x000513ef) cell_highlight_pane_g9

0xb7bf,	// (0x00050909) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x000547f3) cell_highlight_pane_g

0xc536,	// (0x00051680) bg_scroll_pane

0x10c8,	// (0x00046212) scroll_handle_pane

0xc57d,	// (0x000516c7) scroll_bg_pane_g1

0xc592,	// (0x000516dc) scroll_bg_pane_g2

0xc5aa,	// (0x000516f4) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x0005484a) scroll_bg_pane_g

0xc5bf,	// (0x00051709) scroll_handle_focus_pane_ParamLimits

0xc5bf,	// (0x00051709) scroll_handle_focus_pane

0xc57d,	// (0x000516c7) scroll_handle_pane_g1

0xc5cc,	// (0x00051716) scroll_handle_pane_g2

0xc5aa,	// (0x000516f4) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x00054851) scroll_handle_pane_g

0xc2b6,	// (0x00051400) bg_popup_sub_pane_cp21_ParamLimits

0xc2b6,	// (0x00051400) bg_popup_sub_pane_cp21

0xc5e0,	// (0x0005172a) popup_fep_japan_predictive_window_t1_ParamLimits

0xc5e0,	// (0x0005172a) popup_fep_japan_predictive_window_t1

0xc5f7,	// (0x00051741) popup_fep_japan_predictive_window_t2_ParamLimits

0xc5f7,	// (0x00051741) popup_fep_japan_predictive_window_t2

0xc62a,	// (0x00051774) popup_fep_japan_predictive_window_t3_ParamLimits

0xc62a,	// (0x00051774) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x00054858) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x00054858) popup_fep_japan_predictive_window_t

0xb7c9,	// (0x00050913) bg_popup_sub_pane_cp23

0xc661,	// (0x000517ab) listscroll_japin_cand_pane

0xc669,	// (0x000517b3) popup_fep_japan_candidate_window_t1

0xc677,	// (0x000517c1) candidate_pane_ParamLimits

0xc677,	// (0x000517c1) candidate_pane

0xc689,	// (0x000517d3) scroll_pane_cp30

0xc691,	// (0x000517db) list_single_popup_jap_candidate_pane_ParamLimits

0xc691,	// (0x000517db) list_single_popup_jap_candidate_pane

0xb7c9,	// (0x00050913) list_highlight_pane_cp30

0xc6a5,	// (0x000517ef) list_single_popup_jap_candidate_pane_t1

0xc6b4,	// (0x000517fe) level_1_signal

0xc6c1,	// (0x0005180b) level_2_signal

0xc6ce,	// (0x00051818) level_3_signal

0xc6db,	// (0x00051825) level_4_signal

0xc6e8,	// (0x00051832) level_5_signal

0xc6f5,	// (0x0005183f) level_6_signal

0xc702,	// (0x0005184c) level_7_signal

0xc6b4,	// (0x000517fe) level_1_battery

0xc6c1,	// (0x0005180b) level_2_battery

0xc6ce,	// (0x00051818) level_3_battery

0xc6db,	// (0x00051825) level_4_battery

0xc6e8,	// (0x00051832) level_5_battery

0xc6f5,	// (0x0005183f) level_6_battery

0xc702,	// (0x0005184c) level_7_battery

0xc727,	// (0x00051871) list_menu_pane_ParamLimits

0xc727,	// (0x00051871) list_menu_pane

0xc73d,	// (0x00051887) scroll_pane_cp25_ParamLimits

0xc73d,	// (0x00051887) scroll_pane_cp25

0xc756,	// (0x000518a0) list_double2_graphic_pane_cp2_ParamLimits

0xc756,	// (0x000518a0) list_double2_graphic_pane_cp2

0xc756,	// (0x000518a0) list_double2_large_graphic_pane_cp2_ParamLimits

0xc756,	// (0x000518a0) list_double2_large_graphic_pane_cp2

0xc756,	// (0x000518a0) list_double2_pane_cp2_ParamLimits

0xc756,	// (0x000518a0) list_double2_pane_cp2

0xc756,	// (0x000518a0) list_double_graphic_pane_cp2_ParamLimits

0xc756,	// (0x000518a0) list_double_graphic_pane_cp2

0xc756,	// (0x000518a0) list_double_large_graphic_pane_cp2_ParamLimits

0xc756,	// (0x000518a0) list_double_large_graphic_pane_cp2

0xc756,	// (0x000518a0) list_double_number_pane_cp2_ParamLimits

0xc756,	// (0x000518a0) list_double_number_pane_cp2

0xc756,	// (0x000518a0) list_double_pane_cp2_ParamLimits

0xc756,	// (0x000518a0) list_double_pane_cp2

0x9709,	// (0x0004e853) list_single_2graphic_pane_cp2_ParamLimits

0x9709,	// (0x0004e853) list_single_2graphic_pane_cp2

0x9709,	// (0x0004e853) list_single_graphic_heading_pane_cp2_ParamLimits

0x9709,	// (0x0004e853) list_single_graphic_heading_pane_cp2

0x9709,	// (0x0004e853) list_single_graphic_pane_cp2_ParamLimits

0x9709,	// (0x0004e853) list_single_graphic_pane_cp2

0x9709,	// (0x0004e853) list_single_heading_pane_cp2_ParamLimits

0x9709,	// (0x0004e853) list_single_heading_pane_cp2

0xc766,	// (0x000518b0) list_single_large_graphic_pane_cp2_ParamLimits

0xc766,	// (0x000518b0) list_single_large_graphic_pane_cp2

0x9709,	// (0x0004e853) list_single_number_heading_pane_cp2_ParamLimits

0x9709,	// (0x0004e853) list_single_number_heading_pane_cp2

0x9709,	// (0x0004e853) list_single_number_pane_cp2_ParamLimits

0x9709,	// (0x0004e853) list_single_number_pane_cp2

0x9709,	// (0x0004e853) list_single_pane_cp2_ParamLimits

0x9709,	// (0x0004e853) list_single_pane_cp2

0xc780,	// (0x000518ca) bg_popup_sub_pane_cp22

0x117a,	// (0x000462c4) popup_side_volume_key_window_g1

0x11a4,	// (0x000462ee) popup_side_volume_key_window_t1

0x11c0,	// (0x0004630a) volume_small_pane_cp1

0xb817,	// (0x00050961) bg_popup_sub_pane_cp24_ParamLimits

0xb817,	// (0x00050961) bg_popup_sub_pane_cp24

0xc796,	// (0x000518e0) fep_china_uni_candidate_pane_ParamLimits

0xc796,	// (0x000518e0) fep_china_uni_candidate_pane

0xc7aa,	// (0x000518f4) fep_china_uni_entry_pane

0xc7ba,	// (0x00051904) popup_fep_china_uni_window_g1

0xc7d6,	// (0x00051920) fep_china_uni_entry_pane_g1

0xc7de,	// (0x00051928) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00054889) fep_china_uni_entry_pane_g

0xc7e6,	// (0x00051930) fep_entry_item_pane

0xc7f0,	// (0x0005193a) fep_candidate_item_pane

0xc7f8,	// (0x00051942) fep_china_uni_candidate_pane_g1

0xc800,	// (0x0005194a) fep_china_uni_candidate_pane_g2

0xc808,	// (0x00051952) fep_china_uni_candidate_pane_g3

0xc810,	// (0x0005195a) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0005488e) fep_china_uni_candidate_pane_g

0xb7bf,	// (0x00050909) fep_entry_item_pane_g1

0xc818,	// (0x00051962) fep_entry_item_pane_t1_ParamLimits

0xc818,	// (0x00051962) fep_entry_item_pane_t1

0xc82e,	// (0x00051978) fep_candidate_item_pane_t1_ParamLimits

0xc82e,	// (0x00051978) fep_candidate_item_pane_t1

0xc843,	// (0x0005198d) fep_candidate_item_pane_t2_ParamLimits

0xc843,	// (0x0005198d) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00054897) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00054897) fep_candidate_item_pane_t

0xb825,	// (0x0005096f) list_highlight_pane_cp31_ParamLimits

0xb825,	// (0x0005096f) list_highlight_pane_cp31

0xc855,	// (0x0005199f) level_1_signal_lsc

0xc85e,	// (0x000519a8) level_2_signal_lsc

0xc867,	// (0x000519b1) level_3_signal_lsc

0xc870,	// (0x000519ba) level_4_signal_lsc

0xc879,	// (0x000519c3) level_5_signal_lsc

0xc882,	// (0x000519cc) level_6_signal_lsc

0xc88b,	// (0x000519d5) level_7_signal_lsc

0xc88b,	// (0x000519d5) level_1_battery_lsc

0xc894,	// (0x000519de) level_2_battery_lsc

0xc89d,	// (0x000519e7) level_3_battery_lsc

0xc8a6,	// (0x000519f0) level_4_battery_lsc

0xc8af,	// (0x000519f9) level_5_battery_lsc

0xc8b8,	// (0x00051a02) level_6_battery_lsc

0xc855,	// (0x0005199f) level_7_battery_lsc

0xc8c1,	// (0x00051a0b) scroll_handle_focus_pane_g1

0xc8ca,	// (0x00051a14) scroll_handle_focus_pane_g2

0xc8d3,	// (0x00051a1d) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0005489c) scroll_handle_focus_pane_g

0x8eb2,	// (0x0004dffc) list_single_2graphic_pane_g1_ParamLimits

0x8eb2,	// (0x0004dffc) list_single_2graphic_pane_g1

0x8217,	// (0x0004d361) list_single_2graphic_pane_g2_ParamLimits

0x8217,	// (0x0004d361) list_single_2graphic_pane_g2

0x29dc,	// (0x00047b26) list_single_2graphic_pane_g3_ParamLimits

0x29dc,	// (0x00047b26) list_single_2graphic_pane_g3

0x8ebe,	// (0x0004e008) list_single_2graphic_pane_g4_ParamLimits

0x8ebe,	// (0x0004e008) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x000548a3) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x000548a3) list_single_2graphic_pane_g

0x8eca,	// (0x0004e014) list_single_2graphic_pane_t1_ParamLimits

0x8eca,	// (0x0004e014) list_single_2graphic_pane_t1

0x8ef8,	// (0x0004e042) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8ef8,	// (0x0004e042) list_double2_graphic_large_graphic_pane_g1

0x8cc9,	// (0x0004de13) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8cc9,	// (0x0004de13) list_double2_graphic_large_graphic_pane_g2

0x8cb1,	// (0x0004ddfb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8cb1,	// (0x0004ddfb) list_double2_graphic_large_graphic_pane_g3

0x8f0a,	// (0x0004e054) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8f0a,	// (0x0004e054) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x000548ac) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x000548ac) list_double2_graphic_large_graphic_pane_g

0x8f16,	// (0x0004e060) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8f16,	// (0x0004e060) list_double2_graphic_large_graphic_pane_t1

0x8f2c,	// (0x0004e076) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8f2c,	// (0x0004e076) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x000548b5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x000548b5) list_double2_graphic_large_graphic_pane_t

0xc9b4,	// (0x00051afe) popup_fast_swap_window_ParamLimits

0xc9b4,	// (0x00051afe) popup_fast_swap_window

0xc9d0,	// (0x00051b1a) popup_side_volume_key_window

0xc9ea,	// (0x00051b34) stacon_top_pane

0xc9f4,	// (0x00051b3e) status_pane_ParamLimits

0xc9f4,	// (0x00051b3e) status_pane

0xc9ea,	// (0x00051b34) status_small_pane

0xb7c9,	// (0x00050913) control_pane

0xb7c9,	// (0x00050913) stacon_bottom_pane

0xc1ed,	// (0x00051337) scroll_pane_cp121

0xc1e4,	// (0x0005132e) set_content_pane

0x9797,	// (0x0004e8e1) bg_active_tab_pane_g1_cp1

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp1

0x97a0,	// (0x0004e8ea) bg_active_tab_pane_g3_cp1

0x9797,	// (0x0004e8e1) bg_passive_tab_pane_g1_cp1

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp1

0x97a0,	// (0x0004e8ea) bg_passive_tab_pane_g3_cp1

0x97a9,	// (0x0004e8f3) bg_active_tab_pane_g1_cp2

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp2

0x97b2,	// (0x0004e8fc) bg_active_tab_pane_g3_cp2

0x97a9,	// (0x0004e8f3) bg_passive_tab_pane_g1_cp2

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp2

0x97b2,	// (0x0004e8fc) bg_passive_tab_pane_g3_cp2

0x97bb,	// (0x0004e905) bg_active_tab_pane_g1_cp3

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp3

0x97c4,	// (0x0004e90e) bg_active_tab_pane_g3_cp3

0x97bb,	// (0x0004e905) bg_passive_tab_pane_g1_cp3

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp3

0x97c4,	// (0x0004e90e) bg_passive_tab_pane_g3_cp3

0x97cd,	// (0x0004e917) bg_active_tab_pane_g1_cp4

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp4

0x97d6,	// (0x0004e920) bg_active_tab_pane_g3_cp4

0x97cd,	// (0x0004e917) bg_passive_tab_pane_g1_cp4

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp4

0x97d6,	// (0x0004e920) bg_passive_tab_pane_g3_cp4

0xc923,	// (0x00051a6d) bg_active_tab_pane_g1_cp5

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp5

0xc92c,	// (0x00051a76) bg_active_tab_pane_g3_cp5

0xc923,	// (0x00051a6d) bg_passive_tab_pane_g1_cp5

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp5

0xc92c,	// (0x00051a76) bg_passive_tab_pane_g3_cp5

0x6d94,	// (0x0004bede) list_set_graphic_pane_ParamLimits

0x6d94,	// (0x0004bede) list_set_graphic_pane

0xb7c9,	// (0x00050913) bg_set_opt_pane_cp4

0xc935,	// (0x00051a7f) list_set_graphic_pane_g1_ParamLimits

0xc935,	// (0x00051a7f) list_set_graphic_pane_g1

0xc941,	// (0x00051a8b) list_set_graphic_pane_g2_ParamLimits

0xc941,	// (0x00051a8b) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x000548ba) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x000548ba) list_set_graphic_pane_g

0x0009,

0xf9ce,	// (0x00054b18) volume_small_pane_cp_g

0xc965,	// (0x00051aaf) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc965,	// (0x00051aaf) list_double2_large_graphic_pane_g1_cp2

0xc973,	// (0x00051abd) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc973,	// (0x00051abd) list_double2_large_graphic_pane_g2_cp2

0xc984,	// (0x00051ace) list_double2_large_graphic_pane_g3_cp2

0xc98c,	// (0x00051ad6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc98c,	// (0x00051ad6) list_double2_large_graphic_pane_t1_cp2

0xc9a2,	// (0x00051aec) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc9a2,	// (0x00051aec) list_double2_large_graphic_pane_t2_cp2

0xe0f7,	// (0x00053241) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe0f7,	// (0x00053241) list_double_large_graphic_pane_g1_cp2

0xe10a,	// (0x00053254) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe10a,	// (0x00053254) list_double_large_graphic_pane_g2_cp2

0xcb12,	// (0x00051c5c) list_double_large_graphic_pane_g3_cp2

0xe11b,	// (0x00053265) list_double_large_graphic_pane_g4_cp

0xe123,	// (0x0005326d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe123,	// (0x0005326d) list_double_large_graphic_pane_t1_cp2

0xe13a,	// (0x00053284) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe13a,	// (0x00053284) list_double_large_graphic_pane_t2_cp2

0xca02,	// (0x00051b4c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xca02,	// (0x00051b4c) list_double2_graphic_pane_g1_cp2

0xca10,	// (0x00051b5a) list_double2_graphic_pane_g2_cp2_ParamLimits

0xca10,	// (0x00051b5a) list_double2_graphic_pane_g2_cp2

0xca21,	// (0x00051b6b) list_double2_graphic_pane_g3_cp2

0xca2b,	// (0x00051b75) list_double2_graphic_pane_t1_cp2_ParamLimits

0xca2b,	// (0x00051b75) list_double2_graphic_pane_t1_cp2

0xca41,	// (0x00051b8b) list_double2_graphic_pane_t2_cp2_ParamLimits

0xca41,	// (0x00051b8b) list_double2_graphic_pane_t2_cp2

0xca53,	// (0x00051b9d) list_single_number_heading_pane_g1_cp2_ParamLimits

0xca53,	// (0x00051b9d) list_single_number_heading_pane_g1_cp2

0xca5f,	// (0x00051ba9) list_single_number_heading_pane_g2_cp2

0xca67,	// (0x00051bb1) list_single_number_heading_pane_t1_cp2_ParamLimits

0xca67,	// (0x00051bb1) list_single_number_heading_pane_t1_cp2

0xca7d,	// (0x00051bc7) list_single_number_heading_pane_t2_cp2_ParamLimits

0xca7d,	// (0x00051bc7) list_single_number_heading_pane_t2_cp2

0xca91,	// (0x00051bdb) list_single_number_heading_pane_t3_cp2_ParamLimits

0xca91,	// (0x00051bdb) list_single_number_heading_pane_t3_cp2

0xca53,	// (0x00051b9d) list_single_heading_pane_g1_cp2_ParamLimits

0xca53,	// (0x00051b9d) list_single_heading_pane_g1_cp2

0xca5f,	// (0x00051ba9) list_single_heading_pane_g2_cp2

0xca67,	// (0x00051bb1) list_single_heading_pane_t1_cp2_ParamLimits

0xca67,	// (0x00051bb1) list_single_heading_pane_t1_cp2

0xdee7,	// (0x00053031) list_single_heading_pane_t2_cp2_ParamLimits

0xdee7,	// (0x00053031) list_single_heading_pane_t2_cp2

0xde2f,	// (0x00052f79) list_double_graphic_pane_g1_cp2_ParamLimits

0xde2f,	// (0x00052f79) list_double_graphic_pane_g1_cp2

0xde3b,	// (0x00052f85) list_double_graphic_pane_g2_cp2_ParamLimits

0xde3b,	// (0x00052f85) list_double_graphic_pane_g2_cp2

0xde4a,	// (0x00052f94) list_double_graphic_pane_g3_cp2

0xde52,	// (0x00052f9c) list_double_graphic_pane_t1_cp2_ParamLimits

0xde52,	// (0x00052f9c) list_double_graphic_pane_t1_cp2

0xde68,	// (0x00052fb2) list_double_graphic_pane_t2_cp2_ParamLimits

0xde68,	// (0x00052fb2) list_double_graphic_pane_t2_cp2

0xcb06,	// (0x00051c50) list_double_number_pane_g1_cp2_ParamLimits

0xcb06,	// (0x00051c50) list_double_number_pane_g1_cp2

0xcb12,	// (0x00051c5c) list_double_number_pane_g2_cp2

0xddf3,	// (0x00052f3d) list_double_number_pane_t1_cp2_ParamLimits

0xddf3,	// (0x00052f3d) list_double_number_pane_t1_cp2

0xde07,	// (0x00052f51) list_double_number_pane_t2_cp2_ParamLimits

0xde07,	// (0x00052f51) list_double_number_pane_t2_cp2

0xde1d,	// (0x00052f67) list_double_number_pane_t3_cp2_ParamLimits

0xde1d,	// (0x00052f67) list_double_number_pane_t3_cp2

0xdd6a,	// (0x00052eb4) list_single_graphic_pane_g1_cp2_ParamLimits

0xdd6a,	// (0x00052eb4) list_single_graphic_pane_g1_cp2

0xcb6a,	// (0x00051cb4) list_single_graphic_pane_g2_cp2_ParamLimits

0xcb6a,	// (0x00051cb4) list_single_graphic_pane_g2_cp2

0xcb76,	// (0x00051cc0) list_single_graphic_pane_g3_cp2

0xdd40,	// (0x00052e8a) list_single_graphic_pane_t1_cp2_ParamLimits

0xdd40,	// (0x00052e8a) list_single_graphic_pane_t1_cp2

0xcb6a,	// (0x00051cb4) list_single_number_pane_g1_cp2_ParamLimits

0xcb6a,	// (0x00051cb4) list_single_number_pane_g1_cp2

0xcb76,	// (0x00051cc0) list_single_number_pane_g2_cp2

0xdd40,	// (0x00052e8a) list_single_number_pane_t1_cp2_ParamLimits

0xdd40,	// (0x00052e8a) list_single_number_pane_t1_cp2

0xdd56,	// (0x00052ea0) list_single_number_pane_t2_cp2_ParamLimits

0xdd56,	// (0x00052ea0) list_single_number_pane_t2_cp2

0xc973,	// (0x00051abd) list_double2_pane_g1_cp2_ParamLimits

0xc973,	// (0x00051abd) list_double2_pane_g1_cp2

0xc984,	// (0x00051ace) list_double2_pane_g2_cp2

0xcade,	// (0x00051c28) list_double2_pane_t1_cp2_ParamLimits

0xcade,	// (0x00051c28) list_double2_pane_t1_cp2

0xcaf4,	// (0x00051c3e) list_double2_pane_t2_cp2_ParamLimits

0xcaf4,	// (0x00051c3e) list_double2_pane_t2_cp2

0xcb06,	// (0x00051c50) list_double_pane_g1_cp2_ParamLimits

0xcb06,	// (0x00051c50) list_double_pane_g1_cp2

0xcb12,	// (0x00051c5c) list_double_pane_g2_cp2

0xcb1a,	// (0x00051c64) list_double_pane_t1_cp2_ParamLimits

0xcb1a,	// (0x00051c64) list_double_pane_t1_cp2

0xcb30,	// (0x00051c7a) list_double_pane_t2_cp2_ParamLimits

0xcb30,	// (0x00051c7a) list_double_pane_t2_cp2

0xcb5a,	// (0x00051ca4) list_single_pane_cp2_g3

0xcb6a,	// (0x00051cb4) list_single_pane_g1_cp2_ParamLimits

0xcb6a,	// (0x00051cb4) list_single_pane_g1_cp2

0xcb76,	// (0x00051cc0) list_single_pane_g2_cp2

0xcb7e,	// (0x00051cc8) list_single_pane_t1_cp2_ParamLimits

0xcb7e,	// (0x00051cc8) list_single_pane_t1_cp2

0xcb96,	// (0x00051ce0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcb96,	// (0x00051ce0) list_single_large_graphic_pane_g1_cp2

0xcba4,	// (0x00051cee) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcba4,	// (0x00051cee) list_single_large_graphic_pane_g2_cp2

0xcbb0,	// (0x00051cfa) list_single_large_graphic_pane_g3_cp2

0xcbb8,	// (0x00051d02) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcbb8,	// (0x00051d02) list_single_large_graphic_pane_g4_cp1

0xcbd2,	// (0x00051d1c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcbd2,	// (0x00051d1c) list_single_large_graphic_pane_t1_cp2

0xdd0a,	// (0x00052e54) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdd0a,	// (0x00052e54) list_single_graphic_heading_pane_g1_cp2

0xdcd7,	// (0x00052e21) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdcd7,	// (0x00052e21) list_single_graphic_heading_pane_g4_cp2

0xcb76,	// (0x00051cc0) list_single_graphic_heading_pane_g5_cp2

0xdd16,	// (0x00052e60) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xdd16,	// (0x00052e60) list_single_graphic_heading_pane_t1_cp2

0xdd2c,	// (0x00052e76) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdd2c,	// (0x00052e76) list_single_graphic_heading_pane_t2_cp2

0xdccb,	// (0x00052e15) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdccb,	// (0x00052e15) list_single_2graphic_pane_g1_cp2

0xdcd7,	// (0x00052e21) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdcd7,	// (0x00052e21) list_single_2graphic_pane_g2_cp2

0xcb76,	// (0x00051cc0) list_single_2graphic_pane_g3_cp2

0xdce8,	// (0x00052e32) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdce8,	// (0x00052e32) list_single_2graphic_pane_g4_cp2

0xdcf4,	// (0x00052e3e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdcf4,	// (0x00052e3e) list_single_2graphic_pane_t1_cp2

0xb7bf,	// (0x00050909) list_highlight_pane_g10_cp1

0xd8d1,	// (0x00052a1b) list_highlight_pane_g1_cp1

0xd8d9,	// (0x00052a23) list_highlight_pane_g2_cp1

0xd8e1,	// (0x00052a2b) list_highlight_pane_g3_cp1

0xd8e9,	// (0x00052a33) list_highlight_pane_g4_cp1

0xd8f1,	// (0x00052a3b) list_highlight_pane_g5_cp1

0xd8f9,	// (0x00052a43) list_highlight_pane_g6_cp1

0xd901,	// (0x00052a4b) list_highlight_pane_g7_cp1

0xd909,	// (0x00052a53) list_highlight_pane_g8_cp1

0xd911,	// (0x00052a5b) list_highlight_pane_g9_cp1

0xa429,	// (0x0004f573) form_field_slider_pane_t3

0xa439,	// (0x0004f583) form_field_slider_pane_t4

0xd7f3,	// (0x0005293d) slider_form_pane_ParamLimits

0xd7f3,	// (0x0005293d) slider_form_pane

0xb7c9,	// (0x00050913) control_abbreviations

0xb7c9,	// (0x00050913) control_conventions

0xb7c9,	// (0x00050913) control_definitions

0xb7c9,	// (0x00050913) format_table_attribute

0xdf33,	// (0x0005307d) bg_popup_preview_window_pane_g9

0xb7c9,	// (0x00050913) format_table_data2

0xb7c9,	// (0x00050913) format_table_data3

0xb7c9,	// (0x00050913) format_table_data_example

0x0008,

0xb7c9,	// (0x00050913) intro_purpose

0xf8e9,	// (0x00054a33) bg_popup_preview_window_pane_g

0xb7c9,	// (0x00050913) texts_category

0xb7c9,	// (0x00050913) texts_graphics

0xcbe8,	// (0x00051d32) text_digital

0xcbf7,	// (0x00051d41) text_primary

0xcc06,	// (0x00051d50) text_primary_small

0xcc15,	// (0x00051d5f) text_secondary

0xcc24,	// (0x00051d6e) text_title

0xe3fa,	// (0x00053544) bg_passive_tab_pane_g1_cp3_srt

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp3_srt

0xe403,	// (0x0005354d) bg_passive_tab_pane_g3_cp3_srt

0xb817,	// (0x00050961) bg_active_tab_pane_cp3_srt_ParamLimits

0xb817,	// (0x00050961) bg_active_tab_pane_cp3_srt

0xe40c,	// (0x00053556) tabs_4_active_pane_srt_g1

0xa770,	// (0x0004f8ba) tabs_4_active_pane_srt_t1_ParamLimits

0xa770,	// (0x0004f8ba) tabs_4_active_pane_srt_t1

0xe3fa,	// (0x00053544) bg_active_tab_pane_g1_cp3_copy1

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp3_copy1

0xe403,	// (0x0005354d) bg_active_tab_pane_g3_cp3_copy1

0xb825,	// (0x0005096f) tabs_2_long_active_pane_srt_ParamLimits

0xb825,	// (0x0005096f) tabs_2_long_active_pane_srt

0xb825,	// (0x0005096f) tabs_2_long_passive_pane_srt_ParamLimits

0xb825,	// (0x0005096f) tabs_2_long_passive_pane_srt

0xc355,	// (0x0005149f) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc355,	// (0x0005149f) bg_passive_tab_pane_cp4_srt

0xe316,	// (0x00053460) bg_passive_tab_pane_g1_cp4_srt

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp4_srt

0xe31f,	// (0x00053469) bg_passive_tab_pane_g3_cp4_srt

0xb825,	// (0x0005096f) bg_active_tab_pane_cp4_srt_ParamLimits

0xb825,	// (0x0005096f) bg_active_tab_pane_cp4_srt

0xa59e,	// (0x0004f6e8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa59e,	// (0x0004f6e8) tabs_2_long_active_pane_srt_t1

0xe316,	// (0x00053460) bg_active_tab_pane_g1_cp4_srt

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp4_srt

0xe31f,	// (0x00053469) bg_active_tab_pane_g3_cp4_srt

0xb817,	// (0x00050961) tabs_3_long_active_pane_srt_ParamLimits

0xb817,	// (0x00050961) tabs_3_long_active_pane_srt

0xb817,	// (0x00050961) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb817,	// (0x00050961) tabs_3_long_passive_pane_cp_srt

0xb817,	// (0x00050961) tabs_3_long_passive_pane_srt_ParamLimits

0xb817,	// (0x00050961) tabs_3_long_passive_pane_srt

0xc355,	// (0x0005149f) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc355,	// (0x0005149f) bg_passive_tab_pane_cp5_srt

0xc923,	// (0x00051a6d) bg_passive_tab_pane_g1_cp5_srt

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp5_srt

0xc92c,	// (0x00051a76) bg_passive_tab_pane_g3_cp5_srt

0xb825,	// (0x0005096f) bg_active_tab_pane_cp5_srt_ParamLimits

0xb825,	// (0x0005096f) bg_active_tab_pane_cp5_srt

0xa588,	// (0x0004f6d2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa588,	// (0x0004f6d2) tabs_3_long_active_pane_srt_t1

0xc923,	// (0x00051a6d) bg_active_tab_pane_g1_cp5_srt

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp5_srt

0xc92c,	// (0x00051a76) bg_active_tab_pane_g3_cp5_srt

0xe308,	// (0x00053452) navi_text_pane_srt_t1

0xe300,	// (0x0005344a) navi_icon_pane_srt_g1

0xcd34,	// (0x00051e7e) midp_editing_number_pane_srt

0xcc33,	// (0x00051d7d) midp_ticker_pane_srt

0xcd3c,	// (0x00051e86) midp_ticker_pane_srt_g1

0xcd44,	// (0x00051e8e) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x000548d9) midp_ticker_pane_srt_g

0xcd4c,	// (0x00051e96) midp_ticker_pane_srt_t1

0xe2f1,	// (0x0005343b) midp_editing_number_pane_t1_copy1

0xc355,	// (0x0005149f) listscroll_midp_pane

0xc355,	// (0x0005149f) midp_form_pane

0xcc3b,	// (0x00051d85) midp_info_popup_window_ParamLimits

0xcc3b,	// (0x00051d85) midp_info_popup_window

0xc2b6,	// (0x00051400) bg_popup_sub_pane_cp50_ParamLimits

0xc2b6,	// (0x00051400) bg_popup_sub_pane_cp50

0xd510,	// (0x0005265a) listscroll_midp_info_pane_ParamLimits

0xd510,	// (0x0005265a) listscroll_midp_info_pane

0xd4f8,	// (0x00052642) listscroll_form_midp_pane_ParamLimits

0xd4f8,	// (0x00052642) listscroll_form_midp_pane

0xd504,	// (0x0005264e) scroll_bar_cp050

0xa41d,	// (0x0004f567) list_midp_pane

0xecc8,	// (0x00053e12) signal_pane_g2_cp

0xd42a,	// (0x00052574) listscroll_midp_info_pane_t1_ParamLimits

0xd42a,	// (0x00052574) listscroll_midp_info_pane_t1

0xd442,	// (0x0005258c) listscroll_midp_info_pane_t2_ParamLimits

0xd442,	// (0x0005258c) listscroll_midp_info_pane_t2

0xd480,	// (0x000525ca) listscroll_midp_info_pane_t3_ParamLimits

0xd480,	// (0x000525ca) listscroll_midp_info_pane_t3

0xd4ba,	// (0x00052604) listscroll_midp_info_pane_t4_ParamLimits

0xd4ba,	// (0x00052604) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00054985) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00054985) listscroll_midp_info_pane_t

0xc31d,	// (0x00051467) scroll_pane_cp21

0xd3ce,	// (0x00052518) form_midp_field_choice_group_pane

0xd3d7,	// (0x00052521) form_midp_field_text_pane

0xd410,	// (0x0005255a) form_midp_field_time_pane

0xd418,	// (0x00052562) form_midp_gauge_slider_pane

0xd421,	// (0x0005256b) form_midp_gauge_wait_pane

0xb7c9,	// (0x00050913) form_midp_image_pane

0x8f68,	// (0x0004e0b2) list_single_midp_pane_ParamLimits

0x8f68,	// (0x0004e0b2) list_single_midp_pane

0xa3f9,	// (0x0004f543) form_midp_field_text_pane_t1

0xd275,	// (0x000523bf) input_focus_pane_cp050

0xd3bd,	// (0x00052507) list_midp_form_text_pane

0xd38c,	// (0x000524d6) form_midp_field_choice_group_pane_t1

0xd39a,	// (0x000524e4) input_focus_pane_cp051

0xd3ae,	// (0x000524f8) list_midp_choice_pane

0xb7c9,	// (0x00050913) status_idle_pane

0xd370,	// (0x000524ba) form_midp_field_time_pane_t1

0xb7bf,	// (0x00050909) wait_anim_pane_g2_copy1

0xd37e,	// (0x000524c8) form_midp_field_time_pane_t2

0x0001,

0xcca6,	// (0x00051df0) aid_navinavi_width_2_pane

0xf836,	// (0x00054980) form_midp_field_time_pane_t

0xb7c9,	// (0x00050913) input_focus_pane_cp052

0xb7c9,	// (0x00050913) bg_input_focus_pane_cp040

0xd34c,	// (0x00052496) form_midp_gauge_slider_pane_t1

0xd35a,	// (0x000524a4) form_midp_gauge_slider_pane_t2

0xa3d9,	// (0x0004f523) form_midp_gauge_slider_pane_t3

0xa3e9,	// (0x0004f533) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00054977) form_midp_gauge_slider_pane_t

0xd368,	// (0x000524b2) form_midp_slider_pane

0xb825,	// (0x0005096f) bg_input_focus_pane_cp041_ParamLimits

0xb825,	// (0x0005096f) bg_input_focus_pane_cp041

0xd319,	// (0x00052463) form_midp_gauge_wait_pane_t1_ParamLimits

0xd319,	// (0x00052463) form_midp_gauge_wait_pane_t1

0xd32b,	// (0x00052475) form_midp_gauge_wait_pane_t2_ParamLimits

0xd32b,	// (0x00052475) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00054972) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00054972) form_midp_gauge_wait_pane_t

0xd33d,	// (0x00052487) form_midp_wait_pane_ParamLimits

0xd33d,	// (0x00052487) form_midp_wait_pane

0xd2e3,	// (0x0005242d) form_midp_image_pane_g1

0xd2ec,	// (0x00052436) form_midp_image_pane_t1

0xd2fb,	// (0x00052445) form_midp_image_pane_t2

0xd30a,	// (0x00052454) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0005496b) form_midp_image_pane_t

0xd2da,	// (0x00052424) list_single_midp_pane_g1

0x3152,	// (0x0004829c) list_single_midp_pane_t1

0xa3c2,	// (0x0004f50c) list_midp_form_item_pane_ParamLimits

0xa3c2,	// (0x0004f50c) list_midp_form_item_pane

0xcc4e,	// (0x00051d98) list_midp_form_item_pane_t1

0xcc5d,	// (0x00051da7) midp_ticker_pane_g1

0xcc69,	// (0x00051db3) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x000548bf) midp_ticker_pane_g

0xcc75,	// (0x00051dbf) midp_ticker_pane_t1

0xe3a1,	// (0x000534eb) midp_editing_number_pane_t1

0xe37f,	// (0x000534c9) midp_editing_number_pane

0xe38e,	// (0x000534d8) midp_ticker_pane

0xe2e1,	// (0x0005342b) ai_message_heading_pane

0xb7c9,	// (0x00050913) bg_popup_window_pane_cp14

0xe2e9,	// (0x00053433) listscroll_ai_message_pane

0xe26b,	// (0x000533b5) ai_message_heading_pane_g1_ParamLimits

0xe26b,	// (0x000533b5) ai_message_heading_pane_g1

0xe277,	// (0x000533c1) ai_message_heading_pane_g2_ParamLimits

0xe277,	// (0x000533c1) ai_message_heading_pane_g2

0xe283,	// (0x000533cd) ai_message_heading_pane_g3_ParamLimits

0xe283,	// (0x000533cd) ai_message_heading_pane_g3

0xe28f,	// (0x000533d9) ai_message_heading_pane_g4_ParamLimits

0xe28f,	// (0x000533d9) ai_message_heading_pane_g4

0x0003,

0xf94b,	// (0x00054a95) ai_message_heading_pane_g_ParamLimits

0xf94b,	// (0x00054a95) ai_message_heading_pane_g

0xe29b,	// (0x000533e5) ai_message_heading_pane_t1_ParamLimits

0xe29b,	// (0x000533e5) ai_message_heading_pane_t1

0xe2b5,	// (0x000533ff) ai_message_heading_pane_t2_ParamLimits

0xe2b5,	// (0x000533ff) ai_message_heading_pane_t2

0x0001,

0x00bf,	// (0x00045209) ai_message_heading_pane_t_ParamLimits

0x00bf,	// (0x00045209) ai_message_heading_pane_t

0xe2c7,	// (0x00053411) bg_popup_heading_pane_cp1_ParamLimits

0xe2c7,	// (0x00053411) bg_popup_heading_pane_cp1

0xe259,	// (0x000533a3) list_ai_message_pane_ParamLimits

0xe259,	// (0x000533a3) list_ai_message_pane

0xc31d,	// (0x00051467) scroll_pane_cp10

0xe1f5,	// (0x0005333f) list_ai_message_pane_g1

0xe1fd,	// (0x00053347) list_ai_message_pane_g2

0x0001,

0xf928,	// (0x00054a72) list_ai_message_pane_g

0xe205,	// (0x0005334f) list_ai_message_pane_t1_ParamLimits

0xe205,	// (0x0005334f) list_ai_message_pane_t1

0xe21a,	// (0x00053364) list_ai_message_pane_t2_ParamLimits

0xe21a,	// (0x00053364) list_ai_message_pane_t2

0xe22f,	// (0x00053379) list_ai_message_pane_t3_ParamLimits

0xe22f,	// (0x00053379) list_ai_message_pane_t3

0xe244,	// (0x0005338e) list_ai_message_pane_t4_ParamLimits

0xe244,	// (0x0005338e) list_ai_message_pane_t4

0x0003,

0xf92d,	// (0x00054a77) list_ai_message_pane_t_ParamLimits

0xf92d,	// (0x00054a77) list_ai_message_pane_t

0xa563,	// (0x0004f6ad) cell_ai_soft_ind_pane_ParamLimits

0xa563,	// (0x0004f6ad) cell_ai_soft_ind_pane

0xcc87,	// (0x00051dd1) cell_ai_soft_ind_pane_g1_ParamLimits

0xcc87,	// (0x00051dd1) cell_ai_soft_ind_pane_g1

0xb7c9,	// (0x00050913) grid_highlight_cp1

0xcc94,	// (0x00051dde) text_secondary_cp56_ParamLimits

0xcc94,	// (0x00051dde) text_secondary_cp56

0xe1ca,	// (0x00053314) example_general_pane_ParamLimits

0xe1ca,	// (0x00053314) example_general_pane

0xe1d6,	// (0x00053320) example_parent_pane_g1_ParamLimits

0xe1d6,	// (0x00053320) example_parent_pane_g1

0xe1e2,	// (0x0005332c) example_parent_pane_t1_ParamLimits

0xe1e2,	// (0x0005332c) example_parent_pane_t1

0x9c8b,	// (0x0004edd5) popup_preview_text_window_ParamLimits

0x9c8b,	// (0x0004edd5) popup_preview_text_window

0xcb62,	// (0x00051cac) list_single_pane_cp2_g4

0xbca3,	// (0x00050ded) bg_popup_preview_window_pane_ParamLimits

0xbca3,	// (0x00050ded) bg_popup_preview_window_pane

0xdf3b,	// (0x00053085) popup_preview_text_window_t1_ParamLimits

0xdf3b,	// (0x00053085) popup_preview_text_window_t1

0xdf71,	// (0x000530bb) popup_preview_text_window_t2_ParamLimits

0xdf71,	// (0x000530bb) popup_preview_text_window_t2

0xdfba,	// (0x00053104) popup_preview_text_window_t3_ParamLimits

0xdfba,	// (0x00053104) popup_preview_text_window_t3

0xdfff,	// (0x00053149) popup_preview_text_window_t4_ParamLimits

0xdfff,	// (0x00053149) popup_preview_text_window_t4

0x0004,

0xf8fc,	// (0x00054a46) popup_preview_text_window_t_ParamLimits

0xf8fc,	// (0x00054a46) popup_preview_text_window_t

0xe07d,	// (0x000531c7) scroll_pane_cp11

0xd177,	// (0x000522c1) bg_popup_preview_window_pane_g1

0xdefb,	// (0x00053045) bg_popup_preview_window_pane_g2

0xdf03,	// (0x0005304d) bg_popup_preview_window_pane_g3

0xdf0b,	// (0x00053055) bg_popup_preview_window_pane_g4

0xdf13,	// (0x0005305d) bg_popup_preview_window_pane_g5

0xdf1b,	// (0x00053065) bg_popup_preview_window_pane_g6

0xdf23,	// (0x0005306d) bg_popup_preview_window_pane_g7

0xdf2b,	// (0x00053075) bg_popup_preview_window_pane_g8

0x06d3,	// (0x0004581d) aid_popup_width_pane

0x9c07,	// (0x0004ed51) popup_midp_note_alarm_window_ParamLimits

0x9c07,	// (0x0004ed51) popup_midp_note_alarm_window

0xc1fe,	// (0x00051348) data_form_pane_ParamLimits

0x8da3,	// (0x0004deed) form_field_data_pane_g1

0x8dad,	// (0x0004def7) form_field_data_pane_t1_ParamLimits

0xc20a,	// (0x00051354) input_focus_pane_ParamLimits

0xc218,	// (0x00051362) data_form_wide_pane_ParamLimits

0x2bd7,	// (0x00047d21) form_field_data_wide_pane_g1

0x2be3,	// (0x00047d2d) form_field_data_wide_pane_t1_ParamLimits

0xbf79,	// (0x000510c3) input_focus_pane_cp6_ParamLimits

0x95de,	// (0x0004e728) input_popup_find_pane_g1_ParamLimits

0x95de,	// (0x0004e728) input_popup_find_pane_g1

0x1029,	// (0x00046173) aid_navi_side_left_pane

0x103e,	// (0x00046188) aid_navi_side_right_pane

0xd9ae,	// (0x00052af8) bg_popup_window_pane_cp30_ParamLimits

0xd9ae,	// (0x00052af8) bg_popup_window_pane_cp30

0xda28,	// (0x00052b72) popup_midp_note_alarm_window_g1_ParamLimits

0xda28,	// (0x00052b72) popup_midp_note_alarm_window_g1

0xda58,	// (0x00052ba2) popup_midp_note_alarm_window_t1_ParamLimits

0xda58,	// (0x00052ba2) popup_midp_note_alarm_window_t1

0xdaf9,	// (0x00052c43) popup_midp_note_alarm_window_t2_ParamLimits

0xdaf9,	// (0x00052c43) popup_midp_note_alarm_window_t2

0xdba7,	// (0x00052cf1) popup_midp_note_alarm_window_t3_ParamLimits

0xdba7,	// (0x00052cf1) popup_midp_note_alarm_window_t3

0xdbcf,	// (0x00052d19) popup_midp_note_alarm_window_t4_ParamLimits

0xdbcf,	// (0x00052d19) popup_midp_note_alarm_window_t4

0xdbef,	// (0x00052d39) popup_midp_note_alarm_window_t5_ParamLimits

0xdbef,	// (0x00052d39) popup_midp_note_alarm_window_t5

0x000a,

0x0004,	// (0x0004514e) popup_midp_note_alarm_window_t_ParamLimits

0x0004,	// (0x0004514e) popup_midp_note_alarm_window_t

0xdc9b,	// (0x00052de5) wait_bar_pane_cp1_ParamLimits

0xdc9b,	// (0x00052de5) wait_bar_pane_cp1

0xb7c9,	// (0x00050913) wait_anim_pane_copy1

0xb7c9,	// (0x00050913) wait_border_pane_copy1

0xd6b4,	// (0x000527fe) wait_border_pane_g1_copy1

0x2bfd,	// (0x00047d47) form_field_popup_pane_g1

0x8dc7,	// (0x0004df11) form_field_popup_pane_t1_ParamLimits

0xc20a,	// (0x00051354) input_focus_pane_cp7_ParamLimits

0xc238,	// (0x00051382) list_form_pane_ParamLimits

0x2c1f,	// (0x00047d69) form_field_popup_wide_pane_g1

0x2c27,	// (0x00047d71) form_field_popup_wide_pane_t1_ParamLimits

0xc20a,	// (0x00051354) input_focus_pane_cp8_ParamLimits

0xc244,	// (0x0005138e) list_form_wide_pane_ParamLimits

0xe433,	// (0x0005357d) aid_size_cell_graphic_pane

0x8e46,	// (0x0004df90) data_form_pane_t1_ParamLimits

0x8f94,	// (0x0004e0de) data_form_wide_pane_t1_ParamLimits

0xa047,	// (0x0004f191) bg_status_flat_pane

0x9224,	// (0x0004e36e) title_pane_t1_ParamLimits

0xb7df,	// (0x00050929) title_pane_t2_ParamLimits

0xb805,	// (0x0005094f) title_pane_t3_ParamLimits

0xf56f,	// (0x000546b9) title_pane_t_ParamLimits

0xc6b4,	// (0x000517fe) level_1_signal_ParamLimits

0xc6c1,	// (0x0005180b) level_2_signal_ParamLimits

0xc6ce,	// (0x00051818) level_3_signal_ParamLimits

0xc6db,	// (0x00051825) level_4_signal_ParamLimits

0xc6e8,	// (0x00051832) level_5_signal_ParamLimits

0xc6f5,	// (0x0005183f) level_6_signal_ParamLimits

0xc702,	// (0x0005184c) level_7_signal_ParamLimits

0xc6b4,	// (0x000517fe) level_1_battery_ParamLimits

0xc6c1,	// (0x0005180b) level_2_battery_ParamLimits

0xc6ce,	// (0x00051818) level_3_battery_ParamLimits

0xc6db,	// (0x00051825) level_4_battery_ParamLimits

0xc6e8,	// (0x00051832) level_5_battery_ParamLimits

0xc6f5,	// (0x0005183f) level_6_battery_ParamLimits

0xc702,	// (0x0005184c) level_7_battery_ParamLimits

0xd8d1,	// (0x00052a1b) bg_status_flat_pane_g1

0xd8d9,	// (0x00052a23) bg_status_flat_pane_g2

0xd8e1,	// (0x00052a2b) bg_status_flat_pane_g3

0xd8e9,	// (0x00052a33) bg_status_flat_pane_g4

0xd8f1,	// (0x00052a3b) bg_status_flat_pane_g5

0xd8f9,	// (0x00052a43) bg_status_flat_pane_g6

0xd901,	// (0x00052a4b) bg_status_flat_pane_g7

0x92b8,	// (0x0004e402) tabs_3_active_pane_t1_ParamLimits

0x92b8,	// (0x0004e402) tabs_3_passive_pane_t1_ParamLimits

0x92d2,	// (0x0004e41c) tabs_4_active_pane_t1_ParamLimits

0x92d2,	// (0x0004e41c) tabs_4_1_passive_pane_t1_ParamLimits

0x95f4,	// (0x0004e73e) tabs_2_active_pane_t1_ParamLimits

0x95f4,	// (0x0004e73e) tabs_2_passive_pane_t1_ParamLimits

0xb825,	// (0x0005096f) bg_active_tab_pane_cp4_ParamLimits

0x9606,	// (0x0004e750) tabs_2_long_active_pane_t1_ParamLimits

0xc355,	// (0x0005149f) bg_passive_tab_pane_cp4_ParamLimits

0x1585,	// (0x000466cf) list_single_midp_graphic_pane_t1_ParamLimits

0xb825,	// (0x0005096f) bg_active_tab_pane_cp5_ParamLimits

0x9619,	// (0x0004e763) tabs_3_long_active_pane_t1_ParamLimits

0xc355,	// (0x0005149f) bg_passive_tab_pane_cp5_ParamLimits

0x1585,	// (0x000466cf) list_single_midp_graphic_pane_t1

0xa047,	// (0x0004f191) bg_status_flat_pane_ParamLimits

0xd04a,	// (0x00052194) indicator_pane_cp2_ParamLimits

0xd04a,	// (0x00052194) indicator_pane_cp2

0xa1bf,	// (0x0004f309) navi_pane_srt_ParamLimits

0xa1bf,	// (0x0004f309) navi_pane_srt

0xd072,	// (0x000521bc) popup_clock_digital_analogue_window_cp1

0xbb18,	// (0x00050c62) indicator_pane_t1

0xcc33,	// (0x00051d7d) copy_highlight_pane

0xcc33,	// (0x00051d7d) cursor_graphics_pane

0xcc33,	// (0x00051d7d) graphic_within_text_pane

0xcc33,	// (0x00051d7d) link_highlight_pane

0xe040,	// (0x0005318a) popup_preview_text_window_t5_ParamLimits

0xe040,	// (0x0005318a) popup_preview_text_window_t5

0xccae,	// (0x00051df8) cursor_digital_pane

0xccae,	// (0x00051df8) cursor_primary_pane

0xccbf,	// (0x00051e09) cursor_primary_small_pane

0xccc7,	// (0x00051e11) cursor_secondary_pane

0xcccf,	// (0x00051e19) cursor_title_pane

0xccae,	// (0x00051df8) link_highlight_digital_pane

0xccb6,	// (0x00051e00) link_highlight_primary_pane

0xccbf,	// (0x00051e09) link_highlight_primary_small_pane

0xccc7,	// (0x00051e11) link_highlight_secondary_pane

0xcccf,	// (0x00051e19) link_highlight_title_pane

0xccae,	// (0x00051df8) copy_highlight_digital_pane

0xccae,	// (0x00051df8) copy_highlight_primary_pane

0xccbf,	// (0x00051e09) copy_highlight_primary_small_pane

0xccc7,	// (0x00051e11) copy_highlight_secondary_pane

0xcccf,	// (0x00051e19) copy_highlight_title_pane

0xccc7,	// (0x00051e11) graphic_text_digital_pane

0xd951,	// (0x00052a9b) graphic_text_primary_pane

0xd95a,	// (0x00052aa4) graphic_text_primary_small_pane

0xccbf,	// (0x00051e09) graphic_text_secondary_pane

0xccae,	// (0x00051df8) graphic_text_title_pane

0x9894,	// (0x0004e9de) cursor_primary_pane_g1

0xd943,	// (0x00052a8d) cursor_text_primary_t1

0xa45d,	// (0x0004f5a7) cursor_primary_small_pane_g1

0xd935,	// (0x00052a7f) cursor_text_primary_small_t1

0xa453,	// (0x0004f59d) cursor_primary_small_pane_g1_copy1

0xd927,	// (0x00052a71) cursor_text_primary_small_t1_copy1

0xd919,	// (0x00052a63) cursor_text_title_t1

0xa449,	// (0x0004f593) cursor_title_pane_g1

0x9894,	// (0x0004e9de) cursor_digital_pane_g1

0xccd7,	// (0x00051e21) cursor_text_digital_t1

0xd8a8,	// (0x000529f2) link_highlight_primary_pane_g1

0xd8b0,	// (0x000529fa) link_highlight_primary_pane_t1

0xcce5,	// (0x00051e2f) link_highlight_primary_small_pane_g1

0xcced,	// (0x00051e37) link_highlight_primary_small_pane_t1

0xcce5,	// (0x00051e2f) link_highlight_secondary_pane_g1

0xccfc,	// (0x00051e46) link_highlight_secondary_pane_t1

0xd81c,	// (0x00052966) link_highlight_title_pane_g1

0xd824,	// (0x0005296e) link_highlight_title_pane_t1

0xd805,	// (0x0005294f) link_highlight_digital_pane_g1

0xd80d,	// (0x00052957) link_highlight_digital_pane_t1

0xd6f9,	// (0x00052843) copy_highlight_primary_pane_g1

0xd701,	// (0x0005284b) copy_highlight_primary_pane_t1

0xd6d3,	// (0x0005281d) copy_highlight_primary_small_pane_g1

0xd6ea,	// (0x00052834) copy_highlight_primary_small_pane_t1

0xcd0b,	// (0x00051e55) copy_highlight_secondary_pane_g1

0xcd13,	// (0x00051e5d) copy_highlight_secondary_pane_t1

0xd6d3,	// (0x0005281d) copy_highlight_title_pane_g1

0xd6db,	// (0x00052825) copy_highlight_title_pane_t1

0xd6f9,	// (0x00052843) copy_highlight_digital_pane_g1

0xe5bd,	// (0x00053707) copy_highlight_digital_pane_t1

0xe511,	// (0x0005365b) graphic_text_primary_pane_g1

0xe5a1,	// (0x000536eb) graphic_text_primary_pane_t1

0xe5af,	// (0x000536f9) graphic_text_primary_pane_t2

0x0001,

0x0133,	// (0x0004527d) graphic_text_primary_pane_t

0xe57d,	// (0x000536c7) graphic_text_primary_small_pane_g1

0xe585,	// (0x000536cf) graphic_text_primary_small_pane_t1

0xe593,	// (0x000536dd) graphic_text_primary_small_pane_t2

0x0001,

0x012e,	// (0x00045278) graphic_text_primary_small_pane_t

0xe559,	// (0x000536a3) graphic_text_secondary_pane_g1

0xe561,	// (0x000536ab) graphic_text_secondary_pane_t1

0xe56f,	// (0x000536b9) graphic_text_secondary_pane_t2

0x0001,

0x0129,	// (0x00045273) graphic_text_secondary_pane_t

0xe535,	// (0x0005367f) graphic_text_title_pane_g1

0xe53d,	// (0x00053687) graphic_text_title_pane_t1

0xe54b,	// (0x00053695) graphic_text_title_pane_t2

0x0001,

0x0124,	// (0x0004526e) graphic_text_title_pane_t

0xe511,	// (0x0005365b) graphic_text_digital_pane_g1

0xe519,	// (0x00053663) graphic_text_digital_pane_t1

0xe527,	// (0x00053671) graphic_text_digital_pane_t2

0x0001,

0x011f,	// (0x00045269) graphic_text_digital_pane_t

0xb825,	// (0x0005096f) navi_icon_pane_srt_ParamLimits

0xb825,	// (0x0005096f) navi_icon_pane_srt

0xb7c9,	// (0x00050913) navi_midp_pane_srt

0xb7c9,	// (0x00050913) navi_navi_pane_srt

0xb825,	// (0x0005096f) navi_text_pane_srt_ParamLimits

0xb825,	// (0x0005096f) navi_text_pane_srt

0xe4dc,	// (0x00053626) navi_navi_icon_text_pane_srt

0xe4e4,	// (0x0005362e) navi_navi_pane_srt_g1_ParamLimits

0xe4e4,	// (0x0005362e) navi_navi_pane_srt_g1

0xe4f6,	// (0x00053640) navi_navi_pane_srt_g2_ParamLimits

0xe4f6,	// (0x00053640) navi_navi_pane_srt_g2

0x0001,

0x011a,	// (0x00045264) navi_navi_pane_srt_g_ParamLimits

0x011a,	// (0x00045264) navi_navi_pane_srt_g

0xe508,	// (0x00053652) navi_navi_tabs_pane_srt

0xe4dc,	// (0x00053626) navi_navi_text_pane_srt

0xe4dc,	// (0x00053626) navi_navi_volume_pane_srt

0xe4cd,	// (0x00053617) navi_navi_text_pane_srt_t1

0x1905,	// (0x00046a4f) navi_navi_volume_pane_srt_g1

0x190d,	// (0x00046a57) volume_small_pane_srt_ParamLimits

0x190d,	// (0x00046a57) volume_small_pane_srt

0x1309,	// (0x00046453) volume_small_pane_srt_g1_ParamLimits

0x1309,	// (0x00046453) volume_small_pane_srt_g1

0x1319,	// (0x00046463) volume_small_pane_srt_g2_ParamLimits

0x1319,	// (0x00046463) volume_small_pane_srt_g2

0x132a,	// (0x00046474) volume_small_pane_srt_g3_ParamLimits

0x132a,	// (0x00046474) volume_small_pane_srt_g3

0x133b,	// (0x00046485) volume_small_pane_srt_g4_ParamLimits

0x133b,	// (0x00046485) volume_small_pane_srt_g4

0x134c,	// (0x00046496) volume_small_pane_srt_g5_ParamLimits

0x134c,	// (0x00046496) volume_small_pane_srt_g5

0x135d,	// (0x000464a7) volume_small_pane_srt_g6_ParamLimits

0x135d,	// (0x000464a7) volume_small_pane_srt_g6

0x136e,	// (0x000464b8) volume_small_pane_srt_g7_ParamLimits

0x136e,	// (0x000464b8) volume_small_pane_srt_g7

0x137f,	// (0x000464c9) volume_small_pane_srt_g8_ParamLimits

0x137f,	// (0x000464c9) volume_small_pane_srt_g8

0x1390,	// (0x000464da) volume_small_pane_srt_g9_ParamLimits

0x1390,	// (0x000464da) volume_small_pane_srt_g9

0x13a1,	// (0x000464eb) volume_small_pane_srt_g10_ParamLimits

0x13a1,	// (0x000464eb) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x000548c4) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x000548c4) volume_small_pane_srt_g

0xbe81,	// (0x00050fcb) query_popup_data_pane_cp2

0xe4b3,	// (0x000535fd) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe4b3,	// (0x000535fd) navi_navi_icon_text_pane_srt_t1

0xd951,	// (0x00052a9b) navi_tabs_2_long_pane_srt

0xd951,	// (0x00052a9b) navi_tabs_2_pane_srt

0xd951,	// (0x00052a9b) navi_tabs_3_long_pane_srt

0xd951,	// (0x00052a9b) navi_tabs_3_pane_srt

0xd951,	// (0x00052a9b) navi_tabs_4_pane_srt

0x18e5,	// (0x00046a2f) tabs_2_active_pane_srt_ParamLimits

0x18e5,	// (0x00046a2f) tabs_2_active_pane_srt

0x18f5,	// (0x00046a3f) tabs_2_passive_pane_srt_ParamLimits

0x18f5,	// (0x00046a3f) tabs_2_passive_pane_srt

0xd275,	// (0x000523bf) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd275,	// (0x000523bf) bg_passive_tab_pane_cp1_srt

0xe491,	// (0x000535db) bg_passive_tab_pane_g1_cp1_srt

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp1_srt

0xe49a,	// (0x000535e4) bg_passive_tab_pane_g3_cp1_srt

0xb817,	// (0x00050961) bg_active_tab_pane_cp1_srt_ParamLimits

0xb817,	// (0x00050961) bg_active_tab_pane_cp1_srt

0xe4a3,	// (0x000535ed) tabs_2_active_pane_srt_g1

0xa7ed,	// (0x0004f937) tabs_2_active_pane_srt_t1_ParamLimits

0xa7ed,	// (0x0004f937) tabs_2_active_pane_srt_t1

0xe491,	// (0x000535db) bg_active_tab_pane_g1_cp1_srt

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp1_srt

0xe49a,	// (0x000535e4) bg_active_tab_pane_g3_cp1_srt

0x18b2,	// (0x000469fc) tabs_3_active_pane_srt_ParamLimits

0x18b2,	// (0x000469fc) tabs_3_active_pane_srt

0x18c3,	// (0x00046a0d) tabs_3_passive_pane_cp_srt_ParamLimits

0x18c3,	// (0x00046a0d) tabs_3_passive_pane_cp_srt

0x18d4,	// (0x00046a1e) tabs_3_passive_pane_srt_ParamLimits

0x18d4,	// (0x00046a1e) tabs_3_passive_pane_srt

0xd275,	// (0x000523bf) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd275,	// (0x000523bf) bg_passive_tab_pane_cp2_srt

0xcd22,	// (0x00051e6c) bg_passive_tab_pane_g1_cp2_srt

0xc8dc,	// (0x00051a26) bg_passive_tab_pane_g2_cp2_srt

0xcd2b,	// (0x00051e75) bg_passive_tab_pane_g3_cp2_srt

0xb817,	// (0x00050961) bg_active_tab_pane_cp2_srt_ParamLimits

0xb817,	// (0x00050961) bg_active_tab_pane_cp2_srt

0xe489,	// (0x000535d3) tabs_3_active_pane_srt_g1

0xa7d7,	// (0x0004f921) tabs_3_active_pane_srt_t1_ParamLimits

0xa7d7,	// (0x0004f921) tabs_3_active_pane_srt_t1

0xcd22,	// (0x00051e6c) bg_active_tab_pane_g1_cp2_srt

0xc8dc,	// (0x00051a26) bg_active_tab_pane_g2_cp2_srt

0xcd2b,	// (0x00051e75) bg_active_tab_pane_g3_cp2_srt

0x186a,	// (0x000469b4) tabs_4_active_pane_srt_ParamLimits

0x186a,	// (0x000469b4) tabs_4_active_pane_srt

0x187c,	// (0x000469c6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x187c,	// (0x000469c6) tabs_4_passive_pane_cp2_srt

0xce4f,	// (0x00051f99) aid_size_cell_toolbar

0xd8bf,	// (0x00052a09) main_idle_act_pane_ParamLimits

0xcf11,	// (0x0005205b) popup_large_graphic_colour_window_ParamLimits

0x9f0b,	// (0x0004f055) popup_toolbar_window_ParamLimits

0x9f0b,	// (0x0004f055) popup_toolbar_window

0xe3b0,	// (0x000534fa) list_single_graphic_2heading_pane_ParamLimits

0xe3b0,	// (0x000534fa) list_single_graphic_2heading_pane

0xc4ff,	// (0x00051649) aid_size_cell_apps_grid_lsc_pane

0xc511,	// (0x0005165b) aid_size_cell_apps_grid_prt_pane

0xc355,	// (0x0005149f) bg_wml_button_pane_cp1_ParamLimits

0xc355,	// (0x0005149f) bg_wml_button_pane_cp1

0xa3f9,	// (0x0004f543) form_midp_field_text_pane_t1_ParamLimits

0xd275,	// (0x000523bf) input_focus_pane_cp050_ParamLimits

0xd3bd,	// (0x00052507) list_midp_form_text_pane_ParamLimits

0xd39a,	// (0x000524e4) input_focus_pane_cp051_ParamLimits

0xd3ae,	// (0x000524f8) list_midp_choice_pane_ParamLimits

0xa38a,	// (0x0004f4d4) list_single_2graphic_pane_cp3_ParamLimits

0xa38a,	// (0x0004f4d4) list_single_2graphic_pane_cp3

0xa3a0,	// (0x0004f4ea) list_single_midp_graphic_pane_ParamLimits

0xa3a0,	// (0x0004f4ea) list_single_midp_graphic_pane

0x065d,	// (0x000457a7) list_single_graphic_2heading_pane_g1_ParamLimits

0x065d,	// (0x000457a7) list_single_graphic_2heading_pane_g1

0x0669,	// (0x000457b3) list_single_graphic_2heading_pane_g4_ParamLimits

0x0669,	// (0x000457b3) list_single_graphic_2heading_pane_g4

0x0675,	// (0x000457bf) list_single_graphic_2heading_pane_g5_ParamLimits

0x0675,	// (0x000457bf) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00054917) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00054917) list_single_graphic_2heading_pane_g

0x0681,	// (0x000457cb) list_single_graphic_2heading_pane_t1_ParamLimits

0x0681,	// (0x000457cb) list_single_graphic_2heading_pane_t1

0x0695,	// (0x000457df) list_single_graphic_2heading_pane_t2_ParamLimits

0x0695,	// (0x000457df) list_single_graphic_2heading_pane_t2

0x06af,	// (0x000457f9) list_single_graphic_2heading_pane_t3_ParamLimits

0x06af,	// (0x000457f9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0005491e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0005491e) list_single_graphic_2heading_pane_t

0xd0b5,	// (0x000521ff) bg_popup_sub_pane_cp2

0xd0df,	// (0x00052229) grid_toobar_pane

0x14f6,	// (0x00046640) cell_toolbar_pane_ParamLimits

0x14f6,	// (0x00046640) cell_toolbar_pane

0xd11b,	// (0x00052265) cell_toolbar_pane_g1_ParamLimits

0xd11b,	// (0x00052265) cell_toolbar_pane_g1

0xd12f,	// (0x00052279) cell_toolbar_pane_g2_ParamLimits

0xd12f,	// (0x00052279) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0005492c) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0005492c) cell_toolbar_pane_g

0xd151,	// (0x0005229b) grid_highlight_pane_cp2_ParamLimits

0xd151,	// (0x0005229b) grid_highlight_pane_cp2

0xd16b,	// (0x000522b5) toolbar_button_pane

0xd177,	// (0x000522c1) toolbar_button_pane_g1

0xd17f,	// (0x000522c9) toolbar_button_pane_g2

0xd187,	// (0x000522d1) toolbar_button_pane_g3

0xd18f,	// (0x000522d9) toolbar_button_pane_g4

0xd197,	// (0x000522e1) toolbar_button_pane_g5

0xd19f,	// (0x000522e9) toolbar_button_pane_g6

0xd1a7,	// (0x000522f1) toolbar_button_pane_g7

0xd1af,	// (0x000522f9) toolbar_button_pane_g8

0xd1b7,	// (0x00052301) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00054931) toolbar_button_pane_g

0x152e,	// (0x00046678) list_single_2graphic_pane_g1_cp3_ParamLimits

0x152e,	// (0x00046678) list_single_2graphic_pane_g1_cp3

0x864a,	// (0x0004d794) list_single_2graphic_pane_g2_cp3_ParamLimits

0x864a,	// (0x0004d794) list_single_2graphic_pane_g2_cp3

0x154b,	// (0x00046695) list_single_2graphic_pane_g3_cp3

0x1553,	// (0x0004669d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1553,	// (0x0004669d) list_single_2graphic_pane_g4_cp3

0x155f,	// (0x000466a9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x155f,	// (0x000466a9) list_single_2graphic_pane_t1_cp3

0x1579,	// (0x000466c3) list_single_midp_graphic_pane_g2_ParamLimits

0x1579,	// (0x000466c3) list_single_midp_graphic_pane_g2

0x30d2,	// (0x0004821c) aid_zoom_text_primary

0x30da,	// (0x00048224) aid_zoom_text_secondary

0xcddf,	// (0x00051f29) status_small_pane_g7_ParamLimits

0xcddf,	// (0x00051f29) status_small_pane_g7

0xce02,	// (0x00051f4c) status_small_pane_t1_ParamLimits

0x9200,	// (0x0004e34a) title_pane_g2

0x0003,

0xf566,	// (0x000546b0) title_pane_g

0x948b,	// (0x0004e5d5) aid_size_cell_colour_1_pane_ParamLimits

0x948b,	// (0x0004e5d5) aid_size_cell_colour_1_pane

0x949f,	// (0x0004e5e9) aid_size_cell_colour_2_pane_ParamLimits

0x949f,	// (0x0004e5e9) aid_size_cell_colour_2_pane

0x94b3,	// (0x0004e5fd) aid_size_cell_colour_3_pane_ParamLimits

0x94b3,	// (0x0004e5fd) aid_size_cell_colour_3_pane

0x94c7,	// (0x0004e611) aid_size_cell_colour_4_pane_ParamLimits

0x94c7,	// (0x0004e611) aid_size_cell_colour_4_pane

0x0f65,	// (0x000460af) title_pane_stacon_g1_ParamLimits

0x0f65,	// (0x000460af) title_pane_stacon_g1

0xd758,	// (0x000528a2) popup_note_wait_window_g3_ParamLimits

0xd758,	// (0x000528a2) popup_note_wait_window_g3

0xd7ce,	// (0x00052918) popup_note_wait_window_t5_ParamLimits

0xd7ce,	// (0x00052918) popup_note_wait_window_t5

0xb7c9,	// (0x00050913) main_feb_china_hwr_fs_writing_pane

0x9933,	// (0x0004ea7d) popup_feb_china_hwr_fs_window_ParamLimits

0x9933,	// (0x0004ea7d) popup_feb_china_hwr_fs_window

0x865b,	// (0x0004d7a5) aid_size_cell_hwr_fs_ParamLimits

0x865b,	// (0x0004d7a5) aid_size_cell_hwr_fs

0xd275,	// (0x000523bf) bg_popup_sub_pane_cp3_ParamLimits

0xd275,	// (0x000523bf) bg_popup_sub_pane_cp3

0x8670,	// (0x0004d7ba) grid_hwr_fs_pane_ParamLimits

0x8670,	// (0x0004d7ba) grid_hwr_fs_pane

0x15c8,	// (0x00046712) linegrid_hwr_fs_pane_ParamLimits

0x15c8,	// (0x00046712) linegrid_hwr_fs_pane

0x8688,	// (0x0004d7d2) cell_hwr_fs_pane_ParamLimits

0x8688,	// (0x0004d7d2) cell_hwr_fs_pane

0xd281,	// (0x000523cb) linegrid_hwr_fs_pane_g1_ParamLimits

0xd281,	// (0x000523cb) linegrid_hwr_fs_pane_g1

0xa35e,	// (0x0004f4a8) linegrid_hwr_fs_pane_g2_ParamLimits

0xa35e,	// (0x0004f4a8) linegrid_hwr_fs_pane_g2

0xd28d,	// (0x000523d7) linegrid_hwr_fs_pane_g3_ParamLimits

0xd28d,	// (0x000523d7) linegrid_hwr_fs_pane_g3

0x15fa,	// (0x00046744) linegrid_hwr_fs_pane_g4_ParamLimits

0x15fa,	// (0x00046744) linegrid_hwr_fs_pane_g4

0x1614,	// (0x0004675e) linegrid_hwr_fs_pane_g5_ParamLimits

0x1614,	// (0x0004675e) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00054957) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00054957) linegrid_hwr_fs_pane_g

0xd299,	// (0x000523e3) cell_hwr_fs_pane_g1_ParamLimits

0xd299,	// (0x000523e3) cell_hwr_fs_pane_g1

0xd083,	// (0x000521cd) cell_hwr_fs_pane_g2_ParamLimits

0xd083,	// (0x000521cd) cell_hwr_fs_pane_g2

0xa370,	// (0x0004f4ba) cell_hwr_fs_pane_g3_ParamLimits

0xa370,	// (0x0004f4ba) cell_hwr_fs_pane_g3

0xa37d,	// (0x0004f4c7) cell_hwr_fs_pane_g4_ParamLimits

0xa37d,	// (0x0004f4c7) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00054962) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00054962) cell_hwr_fs_pane_g

0x86ae,	// (0x0004d7f8) cell_hwr_fs_pane_t1

0xb7c9,	// (0x00050913) grid_highlight_pane_cp6

0xb7c9,	// (0x00050913) main_idle_act2_pane

0xc304,	// (0x0005144e) aid_inside_area_popup_secondary

0xa47d,	// (0x0004f5c7) aid_inside_area_window_primary_ParamLimits

0xa47d,	// (0x0004f5c7) aid_inside_area_window_primary

0xe5cc,	// (0x00053716) ai2_news_ticker_pane

0xe5d4,	// (0x0005371e) aid_size_cell_ai1_link_ParamLimits

0xe5d4,	// (0x0005371e) aid_size_cell_ai1_link

0xe5ee,	// (0x00053738) popup_ai2_data_window_ParamLimits

0xe5ee,	// (0x00053738) popup_ai2_data_window

0xe602,	// (0x0005374c) popup_ai2_link_window_ParamLimits

0xe602,	// (0x0005374c) popup_ai2_link_window

0xd275,	// (0x000523bf) bg_popup_sub_pane_cp4_ParamLimits

0xd275,	// (0x000523bf) bg_popup_sub_pane_cp4

0xe616,	// (0x00053760) grid_ai2_link_pane_ParamLimits

0xe616,	// (0x00053760) grid_ai2_link_pane

0xe62d,	// (0x00053777) popup_ai2_link_window_g1_ParamLimits

0xe62d,	// (0x00053777) popup_ai2_link_window_g1

0xe639,	// (0x00053783) popup_ai2_link_window_g2_ParamLimits

0xe639,	// (0x00053783) popup_ai2_link_window_g2

0x0001,

0x0138,	// (0x00045282) popup_ai2_link_window_g_ParamLimits

0x0138,	// (0x00045282) popup_ai2_link_window_g

0xe648,	// (0x00053792) ai2_mp_button_pane

0xe650,	// (0x0005379a) ai2_mp_volume_pane

0xd39a,	// (0x000524e4) bg_popup_sub_pane_cp5_ParamLimits

0xd39a,	// (0x000524e4) bg_popup_sub_pane_cp5

0xe658,	// (0x000537a2) heading_ai2_gene_pane_ParamLimits

0xe658,	// (0x000537a2) heading_ai2_gene_pane

0xe664,	// (0x000537ae) list_ai2_gene_pane_ParamLimits

0xe664,	// (0x000537ae) list_ai2_gene_pane

0xe6ac,	// (0x000537f6) cell_ai2_link_pane_ParamLimits

0xe6ac,	// (0x000537f6) cell_ai2_link_pane

0xe6c2,	// (0x0005380c) cell_ai2_link_pane_g1

0xb7c9,	// (0x00050913) grid_highlight_pane_cp7

0x1922,	// (0x00046a6c) ai2_mp_volume_pane_g1

0xe793,	// (0x000538dd) ai2_mp_volume_pane_g2

0xe708,	// (0x00053852) list_ai2_gene_pane_t1

0xe79b,	// (0x000538e5) ai2_mp_volume_pane_g3

0x0002,

0xf968,	// (0x00054ab2) ai2_mp_volume_pane_g

0x192a,	// (0x00046a74) volume_small_pane_cp3

0xe7a3,	// (0x000538ed) aid_size_cell_ai2_button

0xe7ab,	// (0x000538f5) grid_ai2_button_pane

0xe7b4,	// (0x000538fe) cell_ai2_button_pane_ParamLimits

0xe7b4,	// (0x000538fe) cell_ai2_button_pane

0xb7bf,	// (0x00050909) cell_ai2_button_pane_g1

0xb7c9,	// (0x00050913) grid_highlight_pane_cp8

0xe753,	// (0x0005389d) ai2_gene_pane_t1_ParamLimits

0xe753,	// (0x0005389d) ai2_gene_pane_t1

0x98c5,	// (0x0004ea0f) aid_height_parent_landscape

0xa5b5,	// (0x0004f6ff) aid_height_set_list

0xd8bf,	// (0x00052a09) aid_size_parent

0xe433,	// (0x0005357d) aid_size_cell_graphic_pane_ParamLimits

0xe674,	// (0x000537be) popup_ai2_data_window_g1_ParamLimits

0xe674,	// (0x000537be) popup_ai2_data_window_g1

0xe680,	// (0x000537ca) ai2_news_ticker_pane_g1

0xe688,	// (0x000537d2) ai2_news_ticker_pane_g2

0x0001,

0x013d,	// (0x00045287) ai2_news_ticker_pane_g

0xe690,	// (0x000537da) ai2_news_ticker_pane_t1

0xe69e,	// (0x000537e8) ai2_news_ticker_pane_t2

0x0001,

0x0142,	// (0x0004528c) ai2_news_ticker_pane_t

0xe6cb,	// (0x00053815) heading_ai2_gene_pane_g1

0xe6d3,	// (0x0005381d) heading_ai2_gene_pane_t1_ParamLimits

0xe6d3,	// (0x0005381d) heading_ai2_gene_pane_t1

0xe6e8,	// (0x00053832) list_highlight_pane_cp6

0xe6f0,	// (0x0005383a) ai2_gene_pane_ParamLimits

0xe6f0,	// (0x0005383a) ai2_gene_pane

0xe716,	// (0x00053860) list_ai2_gene_pane_t2

0x0001,

0x0147,	// (0x00045291) list_ai2_gene_pane_t

0xe724,	// (0x0005386e) list_highlight_pane_cp8_ParamLimits

0xe724,	// (0x0005386e) list_highlight_pane_cp8

0xe735,	// (0x0005387f) ai2_gene_pane_g1_ParamLimits

0xe735,	// (0x0005387f) ai2_gene_pane_g1

0xe747,	// (0x00053891) ai2_gene_pane_g2_ParamLimits

0xe747,	// (0x00053891) ai2_gene_pane_g2

0x0001,

0x014c,	// (0x00045296) ai2_gene_pane_g_ParamLimits

0x014c,	// (0x00045296) ai2_gene_pane_g

0xc194,	// (0x000512de) scroll_pane_cp12

0x8609,	// (0x0004d753) control_pane_t3_ParamLimits

0x8609,	// (0x0004d753) control_pane_t3

0xcdf3,	// (0x00051f3d) status_small_pane_g8_ParamLimits

0xcdf3,	// (0x00051f3d) status_small_pane_g8

0x99c6,	// (0x0004eb10) popup_find_window_ParamLimits

0x9c41,	// (0x0004ed8b) popup_note_image_window_ParamLimits

0x3106,	// (0x00048250) list_double2_graphic_pane_vc_g1_ParamLimits

0x3106,	// (0x00048250) list_double2_graphic_pane_vc_g1

0x29d0,	// (0x00047b1a) list_double2_graphic_pane_vc_g2_ParamLimits

0x29d0,	// (0x00047b1a) list_double2_graphic_pane_vc_g2

0x29dc,	// (0x00047b26) list_double2_graphic_pane_vc_g3_ParamLimits

0x29dc,	// (0x00047b26) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00054925) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00054925) list_double2_graphic_pane_vc_g

0x3112,	// (0x0004825c) list_double2_graphic_pane_vc_t1_ParamLimits

0x3112,	// (0x0004825c) list_double2_graphic_pane_vc_t1

0x29d0,	// (0x00047b1a) list_single_heading_pane_vc_g1_ParamLimits

0x29d0,	// (0x00047b1a) list_single_heading_pane_vc_g1

0x29dc,	// (0x00047b26) list_single_heading_pane_vc_g2_ParamLimits

0x29dc,	// (0x00047b26) list_single_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00054734) list_single_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00054734) list_single_heading_pane_vc_g

0x3128,	// (0x00048272) list_single_heading_pane_vc_t1_ParamLimits

0x3128,	// (0x00048272) list_single_heading_pane_vc_t1

0x313e,	// (0x00048288) list_single_heading_pane_vc_t2_ParamLimits

0x313e,	// (0x00048288) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00054946) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00054946) list_single_heading_pane_vc_t

0xd1bf,	// (0x00052309) list_setting_number_pane_vc_g1_ParamLimits

0xd1bf,	// (0x00052309) list_setting_number_pane_vc_g1

0xd1cb,	// (0x00052315) list_setting_number_pane_vc_g2_ParamLimits

0xd1cb,	// (0x00052315) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0005494b) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0005494b) list_setting_number_pane_vc_g

0xd1d7,	// (0x00052321) list_setting_number_pane_vc_t1_ParamLimits

0xd1d7,	// (0x00052321) list_setting_number_pane_vc_t1

0xd1eb,	// (0x00052335) list_setting_number_pane_vc_t2_ParamLimits

0xd1eb,	// (0x00052335) list_setting_number_pane_vc_t2

0xd213,	// (0x0005235d) list_setting_number_pane_vc_t3_ParamLimits

0xd213,	// (0x0005235d) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x00054950) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x00054950) list_setting_number_pane_vc_t

0xd239,	// (0x00052383) set_value_pane_vc_ParamLimits

0xd239,	// (0x00052383) set_value_pane_vc

0xe3b0,	// (0x000534fa) list_double2_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double2_graphic_pane_vc

0xe3b0,	// (0x000534fa) list_double2_large_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double2_large_graphic_pane_vc

0xe3b0,	// (0x000534fa) list_double2_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double2_pane_vc

0xe3b0,	// (0x000534fa) list_double_graphic_heading_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double_graphic_heading_pane_vc

0xe3b0,	// (0x000534fa) list_double_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double_graphic_pane_vc

0xe3b0,	// (0x000534fa) list_double_heading_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double_heading_pane_vc

0xe3b0,	// (0x000534fa) list_double_large_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double_large_graphic_pane_vc

0xe3b0,	// (0x000534fa) list_double_number_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double_number_pane_vc

0xe3b0,	// (0x000534fa) list_double_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double_pane_vc

0xe3b0,	// (0x000534fa) list_double_time_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_double_time_pane_vc

0xe3b0,	// (0x000534fa) list_setting_number_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_setting_number_pane_vc

0xe3b0,	// (0x000534fa) list_setting_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_setting_pane_vc

0xe3b0,	// (0x000534fa) list_single_graphic_heading_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_single_graphic_heading_pane_vc

0xe3b0,	// (0x000534fa) list_single_heading_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_single_heading_pane_vc

0xe3b0,	// (0x000534fa) list_single_number_heading_pane_vc_ParamLimits

0xe3b0,	// (0x000534fa) list_single_number_heading_pane_vc

0x3106,	// (0x00048250) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3106,	// (0x00048250) list_double_graphic_heading_pane_vc_g1

0x29d0,	// (0x00047b1a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x29d0,	// (0x00047b1a) list_double_graphic_heading_pane_vc_g2

0x29dc,	// (0x00047b26) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x29dc,	// (0x00047b26) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x00054925) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00054925) list_double_graphic_heading_pane_vc_g

0x32fb,	// (0x00048445) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x32fb,	// (0x00048445) list_double_graphic_heading_pane_vc_t1

0x3128,	// (0x00048272) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3128,	// (0x00048272) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf96f,	// (0x00054ab9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf96f,	// (0x00054ab9) list_double_graphic_heading_pane_vc_t

0xd1bf,	// (0x00052309) list_setting_pane_vc_g1_ParamLimits

0xd1bf,	// (0x00052309) list_setting_pane_vc_g1

0xd1cb,	// (0x00052315) list_setting_pane_vc_g2_ParamLimits

0xd1cb,	// (0x00052315) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0005494b) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0005494b) list_setting_pane_vc_g

0xe9aa,	// (0x00053af4) list_setting_pane_vc_t1_ParamLimits

0xe9aa,	// (0x00053af4) list_setting_pane_vc_t1

0xe9c4,	// (0x00053b0e) list_setting_pane_vc_t2_ParamLimits

0xe9c4,	// (0x00053b0e) list_setting_pane_vc_t2

0x0001,

0x019b,	// (0x000452e5) list_setting_pane_vc_t_ParamLimits

0x019b,	// (0x000452e5) list_setting_pane_vc_t

0xd239,	// (0x00052383) set_value_pane_cp_vc_ParamLimits

0xd239,	// (0x00052383) set_value_pane_cp_vc

0x29d0,	// (0x00047b1a) list_single_number_heading_pane_vc_g1_ParamLimits

0x29d0,	// (0x00047b1a) list_single_number_heading_pane_vc_g1

0x29dc,	// (0x00047b26) list_single_number_heading_pane_vc_g2_ParamLimits

0x29dc,	// (0x00047b26) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00054734) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00054734) list_single_number_heading_pane_vc_g

0x3128,	// (0x00048272) list_single_number_heading_pane_vc_t1_ParamLimits

0x3128,	// (0x00048272) list_single_number_heading_pane_vc_t1

0x330f,	// (0x00048459) list_single_number_heading_pane_vc_t2_ParamLimits

0x330f,	// (0x00048459) list_single_number_heading_pane_vc_t2

0x3323,	// (0x0004846d) list_single_number_heading_pane_vc_t3_ParamLimits

0x3323,	// (0x0004846d) list_single_number_heading_pane_vc_t3

0x0002,

0xf989,	// (0x00054ad3) list_single_number_heading_pane_vc_t_ParamLimits

0xf989,	// (0x00054ad3) list_single_number_heading_pane_vc_t

0x3106,	// (0x00048250) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3106,	// (0x00048250) list_single_graphic_heading_pane_vc_g1

0x29d0,	// (0x00047b1a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x29d0,	// (0x00047b1a) list_single_graphic_heading_pane_vc_g4

0x29dc,	// (0x00047b26) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x29dc,	// (0x00047b26) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00054925) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00054925) list_single_graphic_heading_pane_vc_g

0x3128,	// (0x00048272) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3128,	// (0x00048272) list_single_graphic_heading_pane_vc_t1

0x3335,	// (0x0004847f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3335,	// (0x0004847f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf990,	// (0x00054ada) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf990,	// (0x00054ada) list_single_graphic_heading_pane_vc_t

0x29d0,	// (0x00047b1a) list_double2_pane_vc_g1_ParamLimits

0x29d0,	// (0x00047b1a) list_double2_pane_vc_g1

0x29dc,	// (0x00047b26) list_double2_pane_vc_g2_ParamLimits

0x29dc,	// (0x00047b26) list_double2_pane_vc_g2

0x0001,

0xf5ea,	// (0x00054734) list_double2_pane_vc_g_ParamLimits

0xf5ea,	// (0x00054734) list_double2_pane_vc_g

0x3349,	// (0x00048493) list_double2_pane_vc_t1_ParamLimits

0x3349,	// (0x00048493) list_double2_pane_vc_t1

0x3c84,	// (0x00048dce) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c84,	// (0x00048dce) list_double2_large_graphic_pane_vc_g1

0x29d0,	// (0x00047b1a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x29d0,	// (0x00047b1a) list_double2_large_graphic_pane_vc_g2

0x29dc,	// (0x00047b26) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x29dc,	// (0x00047b26) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf602,	// (0x0005474c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf602,	// (0x0005474c) list_double2_large_graphic_pane_vc_g

0x335f,	// (0x000484a9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x335f,	// (0x000484a9) list_double2_large_graphic_pane_vc_t1

0x3375,	// (0x000484bf) list_double_time_pane_vc_g1_ParamLimits

0x3375,	// (0x000484bf) list_double_time_pane_vc_g1

0x3381,	// (0x000484cb) list_double_time_pane_vc_g2_ParamLimits

0x3381,	// (0x000484cb) list_double_time_pane_vc_g2

0x0001,

0xf995,	// (0x00054adf) list_double_time_pane_vc_g_ParamLimits

0xf995,	// (0x00054adf) list_double_time_pane_vc_g

0x338d,	// (0x000484d7) list_double_time_pane_vc_t1_ParamLimits

0x338d,	// (0x000484d7) list_double_time_pane_vc_t1

0x33a6,	// (0x000484f0) list_double_time_pane_vc_t2_ParamLimits

0x33a6,	// (0x000484f0) list_double_time_pane_vc_t2

0x33e6,	// (0x00048530) list_double_time_pane_vc_t3_ParamLimits

0x33e6,	// (0x00048530) list_double_time_pane_vc_t3

0x33fe,	// (0x00048548) list_double_time_pane_vc_t4_ParamLimits

0x33fe,	// (0x00048548) list_double_time_pane_vc_t4

0x0003,

0xf99a,	// (0x00054ae4) list_double_time_pane_vc_t_ParamLimits

0xf99a,	// (0x00054ae4) list_double_time_pane_vc_t

0x29d0,	// (0x00047b1a) list_double_pane_vc_g1_ParamLimits

0x29d0,	// (0x00047b1a) list_double_pane_vc_g1

0x29dc,	// (0x00047b26) list_double_pane_vc_g2_ParamLimits

0x29dc,	// (0x00047b26) list_double_pane_vc_g2

0x0001,

0xf5ea,	// (0x00054734) list_double_pane_vc_g_ParamLimits

0xf5ea,	// (0x00054734) list_double_pane_vc_g

0x3412,	// (0x0004855c) list_double_pane_vc_t1_ParamLimits

0x3412,	// (0x0004855c) list_double_pane_vc_t1

0x3424,	// (0x0004856e) list_double_pane_vc_t2_ParamLimits

0x3424,	// (0x0004856e) list_double_pane_vc_t2

0x0001,

0xf9a3,	// (0x00054aed) list_double_pane_vc_t_ParamLimits

0xf9a3,	// (0x00054aed) list_double_pane_vc_t

0x29d0,	// (0x00047b1a) list_double_number_pane_vc_g1_ParamLimits

0x29d0,	// (0x00047b1a) list_double_number_pane_vc_g1

0x29dc,	// (0x00047b26) list_double_number_pane_vc_g2_ParamLimits

0x29dc,	// (0x00047b26) list_double_number_pane_vc_g2

0x0001,

0xf5ea,	// (0x00054734) list_double_number_pane_vc_g_ParamLimits

0xf5ea,	// (0x00054734) list_double_number_pane_vc_g

0x343c,	// (0x00048586) list_double_number_pane_vc_t1_ParamLimits

0x343c,	// (0x00048586) list_double_number_pane_vc_t1

0x3450,	// (0x0004859a) list_double_number_pane_vc_t2_ParamLimits

0x3450,	// (0x0004859a) list_double_number_pane_vc_t2

0x3424,	// (0x0004856e) list_double_number_pane_vc_t3_ParamLimits

0x3424,	// (0x0004856e) list_double_number_pane_vc_t3

0x0002,

0xf9a8,	// (0x00054af2) list_double_number_pane_vc_t_ParamLimits

0xf9a8,	// (0x00054af2) list_double_number_pane_vc_t

0x3c90,	// (0x00048dda) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3c90,	// (0x00048dda) list_double_large_graphic_pane_vc_g1

0x3c9c,	// (0x00048de6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3c9c,	// (0x00048de6) list_double_large_graphic_pane_vc_g2

0x29dc,	// (0x00047b26) list_double_large_graphic_pane_vc_g3_ParamLimits

0x29dc,	// (0x00047b26) list_double_large_graphic_pane_vc_g3

0x3462,	// (0x000485ac) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3462,	// (0x000485ac) list_double_large_graphic_pane_vc_g4

0x0003,

0xf9af,	// (0x00054af9) list_double_large_graphic_pane_vc_g_ParamLimits

0xf9af,	// (0x00054af9) list_double_large_graphic_pane_vc_g

0x346e,	// (0x000485b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0x346e,	// (0x000485b8) list_double_large_graphic_pane_vc_t1

0x3480,	// (0x000485ca) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3480,	// (0x000485ca) list_double_large_graphic_pane_vc_t2

0x0001,

0xf9b8,	// (0x00054b02) list_double_large_graphic_pane_vc_t_ParamLimits

0xf9b8,	// (0x00054b02) list_double_large_graphic_pane_vc_t

0x29d0,	// (0x00047b1a) list_double_heading_pane_vc_g1_ParamLimits

0x29d0,	// (0x00047b1a) list_double_heading_pane_vc_g1

0x29dc,	// (0x00047b26) list_double_heading_pane_vc_g2_ParamLimits

0x29dc,	// (0x00047b26) list_double_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00054734) list_double_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00054734) list_double_heading_pane_vc_g

0x3499,	// (0x000485e3) list_double_heading_pane_vc_t1_ParamLimits

0x3499,	// (0x000485e3) list_double_heading_pane_vc_t1

0x3128,	// (0x00048272) list_double_heading_pane_vc_t2_ParamLimits

0x3128,	// (0x00048272) list_double_heading_pane_vc_t2

0x0001,

0xf9bd,	// (0x00054b07) list_double_heading_pane_vc_t_ParamLimits

0xf9bd,	// (0x00054b07) list_double_heading_pane_vc_t

0x3106,	// (0x00048250) list_double_graphic_pane_vc_g1_ParamLimits

0x3106,	// (0x00048250) list_double_graphic_pane_vc_g1

0x34ad,	// (0x000485f7) list_double_graphic_pane_vc_g2_ParamLimits

0x34ad,	// (0x000485f7) list_double_graphic_pane_vc_g2

0x34bc,	// (0x00048606) list_double_graphic_pane_vc_g3_ParamLimits

0x34bc,	// (0x00048606) list_double_graphic_pane_vc_g3

0x0002,

0xf9c2,	// (0x00054b0c) list_double_graphic_pane_vc_g_ParamLimits

0xf9c2,	// (0x00054b0c) list_double_graphic_pane_vc_g

0x34c8,	// (0x00048612) list_double_graphic_pane_vc_t1_ParamLimits

0x34c8,	// (0x00048612) list_double_graphic_pane_vc_t1

0x3424,	// (0x0004856e) list_double_graphic_pane_vc_t2_ParamLimits

0x3424,	// (0x0004856e) list_double_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x00054b13) list_double_graphic_pane_vc_t_ParamLimits

0xf9c9,	// (0x00054b13) list_double_graphic_pane_vc_t

0x06df,	// (0x00045829) aid_size_cell_fastswap

0x7ff3,	// (0x0004d13d) aid_size_cell_touch_ParamLimits

0x7ff3,	// (0x0004d13d) aid_size_cell_touch

0x094c,	// (0x00045a96) popup_fast_swap_wide_window_ParamLimits

0x094c,	// (0x00045a96) popup_fast_swap_wide_window

0x813e,	// (0x0004d288) touch_pane_ParamLimits

0x813e,	// (0x0004d288) touch_pane

0xc1f6,	// (0x00051340) button_value_adjust_pane_cp2

0x2b09,	// (0x00047c53) button_value_adjust_pane_cp4

0x2b29,	// (0x00047c73) form_field_data_pane_cp2

0x8d64,	// (0x0004deae) form_field_data_wide_pane_cp2

0xc536,	// (0x00051680) bg_scroll_pane_ParamLimits

0x10c8,	// (0x00046212) scroll_handle_pane_ParamLimits

0x10dc,	// (0x00046226) scroll_sc2_down_pane_ParamLimits

0x10dc,	// (0x00046226) scroll_sc2_down_pane

0xc567,	// (0x000516b1) scroll_sc2_up_pane_ParamLimits

0xc567,	// (0x000516b1) scroll_sc2_up_pane

0xa924,	// (0x0004fa6e) grid_wheel_folder_pane_g1_ParamLimits

0xa924,	// (0x0004fa6e) grid_wheel_folder_pane_g1

0x12a1,	// (0x000463eb) clock_nsta_pane_cp2_ParamLimits

0x12a1,	// (0x000463eb) clock_nsta_pane_cp2

0xc355,	// (0x0005149f) listscroll_midp_pane_ParamLimits

0x97df,	// (0x0004e929) midp_canvas_pane

0xce47,	// (0x00051f91) nsta_clock_indic_pane

0xce77,	// (0x00051fc1) listscroll_form_pane_vc

0xce7f,	// (0x00051fc9) listscroll_set_pane_vc_ParamLimits

0xce7f,	// (0x00051fc9) listscroll_set_pane_vc

0xa06f,	// (0x0004f1b9) clock_nsta_pane

0xa099,	// (0x0004f1e3) indicator_nsta_pane

0xd0b5,	// (0x000521ff) bg_popup_sub_pane_cp2_ParamLimits

0xd0c9,	// (0x00052213) find_pane_cp2_ParamLimits

0xd0c9,	// (0x00052213) find_pane_cp2

0xd0df,	// (0x00052229) grid_toobar_pane_ParamLimits

0xd249,	// (0x00052393) list_form_gen_pane_vc_ParamLimits

0xd249,	// (0x00052393) list_form_gen_pane_vc

0xd25f,	// (0x000523a9) scroll_pane_cp8_vc_ParamLimits

0xd25f,	// (0x000523a9) scroll_pane_cp8_vc

0xd2af,	// (0x000523f9) data_form_wide_pane_vc_ParamLimits

0xd2af,	// (0x000523f9) data_form_wide_pane_vc

0xd2bb,	// (0x00052405) form_field_data_wide_pane_vc_g1

0xd2c3,	// (0x0005240d) form_field_data_wide_pane_vc_t1_ParamLimits

0xd2c3,	// (0x0005240d) form_field_data_wide_pane_vc_t1

0xc20a,	// (0x00051354) input_focus_pane_cp6_vc_ParamLimits

0xc20a,	// (0x00051354) input_focus_pane_cp6_vc

0xa41d,	// (0x0004f567) list_midp_pane_ParamLimits

0xdf65,	// (0x000530af) scroll_pane_cp16_ParamLimits

0xdf65,	// (0x000530af) scroll_pane_cp16

0xd532,	// (0x0005267c) button_value_adjust_pane_ParamLimits

0xd532,	// (0x0005267c) button_value_adjust_pane

0xa5c6,	// (0x0004f710) button_value_adjust_pane_cp6_ParamLimits

0xa5c6,	// (0x0004f710) button_value_adjust_pane_cp6

0xa6dc,	// (0x0004f826) settings_code_pane_cp_ParamLimits

0xa6dc,	// (0x0004f826) settings_code_pane_cp

0xb7bf,	// (0x00050909) cell_touch_pane_g1

0xb7bf,	// (0x00050909) cell_touch_pane_g2

0x0001,

0xf720,	// (0x0005486a) cell_touch_pane_g

0xa803,	// (0x0004f94d) cell_touch_pane_cp_ParamLimits

0xa803,	// (0x0004f94d) cell_touch_pane_cp

0xa81f,	// (0x0004f969) cell_touch_pane_ParamLimits

0xa81f,	// (0x0004f969) cell_touch_pane

0xb7bf,	// (0x00050909) scroll_sc2_down_pane_g1

0xb7bf,	// (0x00050909) scroll_sc2_up_pane_g1

0xb7c9,	// (0x00050913) bg_set_opt_pane_cp4_vc

0xe7c6,	// (0x00053910) list_set_graphic_pane_vc_g1_ParamLimits

0xe7c6,	// (0x00053910) list_set_graphic_pane_vc_g1

0xe7d2,	// (0x0005391c) list_set_graphic_pane_vc_g2_ParamLimits

0xe7d2,	// (0x0005391c) list_set_graphic_pane_vc_g2

0x0001,

0x015d,	// (0x000452a7) list_set_graphic_pane_vc_g_ParamLimits

0x015d,	// (0x000452a7) list_set_graphic_pane_vc_g

0xe7de,	// (0x00053928) text_primary_small_cp13_vc_ParamLimits

0xe7de,	// (0x00053928) text_primary_small_cp13_vc

0xe7f6,	// (0x00053940) list_set_graphic_pane_vc_ParamLimits

0xe7f6,	// (0x00053940) list_set_graphic_pane_vc

0xb7c9,	// (0x00050913) input_focus_pane_cp2_vc

0xb7bf,	// (0x00050909) setting_code_pane_vc_g1

0xe80a,	// (0x00053954) setting_code_pane_vc_t1

0xe818,	// (0x00053962) set_text_pane_vc_t1_ParamLimits

0xe818,	// (0x00053962) set_text_pane_vc_t1

0xb7c9,	// (0x00050913) input_focus_pane_cp1_vc

0xe837,	// (0x00053981) list_set_text_pane_vc

0xb7bf,	// (0x00050909) setting_text_pane_vc_g1

0xb7c9,	// (0x00050913) bg_set_opt_pane_cp2_vc

0xe841,	// (0x0005398b) setting_slider_graphic_pane_vc_g1

0xe849,	// (0x00053993) setting_slider_graphic_pane_vc_t1

0xe857,	// (0x000539a1) setting_slider_graphic_pane_vc_t2

0x0001,

0x0162,	// (0x000452ac) setting_slider_graphic_pane_vc_t

0xe865,	// (0x000539af) slider_set_pane_cp_vc

0xe86d,	// (0x000539b7) slider_set_pane_vc_g1

0xe876,	// (0x000539c0) slider_set_pane_vc_g2

0x0006,

0x0167,	// (0x000452b1) slider_set_pane_vc_g

0xc265,	// (0x000513af) set_opt_bg_pane_g1_copy1

0xc26d,	// (0x000513b7) set_opt_bg_pane_g2_copy1

0xe8a2,	// (0x000539ec) set_opt_bg_pane_g3_copy1

0xc27d,	// (0x000513c7) set_opt_bg_pane_g4_copy1

0xc285,	// (0x000513cf) set_opt_bg_pane_g5_copy1

0xc28d,	// (0x000513d7) set_opt_bg_pane_g6_copy1

0xe8aa,	// (0x000539f4) set_opt_bg_pane_g7_copy1

0xe8b4,	// (0x000539fe) set_opt_bg_pane_g8_copy1

0xe8bc,	// (0x00053a06) set_opt_bg_pane_g9_copy1

0xb7c9,	// (0x00050913) bg_set_opt_pane_cp_vc

0xe8c4,	// (0x00053a0e) setting_slider_pane_vc_t1

0xe849,	// (0x00053993) setting_slider_pane_vc_t2

0xe857,	// (0x000539a1) setting_slider_pane_vc_t3

0x0002,

0x0176,	// (0x000452c0) setting_slider_pane_vc_t

0xe865,	// (0x000539af) slider_set_pane_vc

0x1638,	// (0x00046782) volume_set_pane_vc_g1

0x1933,	// (0x00046a7d) volume_set_pane_vc_g2

0x193c,	// (0x00046a86) volume_set_pane_vc_g3

0x1945,	// (0x00046a8f) volume_set_pane_vc_g4

0x194e,	// (0x00046a98) volume_set_pane_vc_g5

0x1957,	// (0x00046aa1) volume_set_pane_vc_g6

0x1960,	// (0x00046aaa) volume_set_pane_vc_g7

0x1969,	// (0x00046ab3) volume_set_pane_vc_g8

0x1972,	// (0x00046abc) volume_set_pane_vc_g9

0x197b,	// (0x00046ac5) volume_set_pane_vc_g10

0x0009,

0xf974,	// (0x00054abe) volume_set_pane_vc_g

0xe8d3,	// (0x00053a1d) volume_set_pane_vc

0xe8db,	// (0x00053a25) button_value_adjust_pane_cp1_vc

0xe8e5,	// (0x00053a2f) list_highlight_pane_cp2_vc

0xe8ee,	// (0x00053a38) list_set_pane_vc_ParamLimits

0xe8ee,	// (0x00053a38) list_set_pane_vc

0xe940,	// (0x00053a8a) main_pane_set_vc_t1_ParamLimits

0xe940,	// (0x00053a8a) main_pane_set_vc_t1

0xe955,	// (0x00053a9f) main_pane_set_vc_t2_ParamLimits

0xe955,	// (0x00053a9f) main_pane_set_vc_t2

0xe967,	// (0x00053ab1) main_pane_set_vc_t3_ParamLimits

0xe967,	// (0x00053ab1) main_pane_set_vc_t3

0xe979,	// (0x00053ac3) main_pane_set_vc_t4_ParamLimits

0xe979,	// (0x00053ac3) main_pane_set_vc_t4

0x0003,

0x0192,	// (0x000452dc) main_pane_set_vc_t_ParamLimits

0x0192,	// (0x000452dc) main_pane_set_vc_t

0xe98b,	// (0x00053ad5) setting_code_pane_vc_ParamLimits

0xe98b,	// (0x00053ad5) setting_code_pane_vc

0xe99a,	// (0x00053ae4) setting_slider_graphic_pane_vc

0xe99a,	// (0x00053ae4) setting_slider_pane_vc

0xe99a,	// (0x00053ae4) setting_text_pane_vc

0xe99a,	// (0x00053ae4) setting_volume_pane_vc

0xe9a2,	// (0x00053aec) scroll_pane_cp121_vc

0xc1e4,	// (0x0005132e) set_content_pane_vc

0xe9da,	// (0x00053b24) button_value_adjust_pane_g1

0xe9e3,	// (0x00053b2d) button_value_adjust_pane_g2

0x0001,

0x01e5,	// (0x0004532f) button_value_adjust_pane_g

0xe9ec,	// (0x00053b36) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe9ec,	// (0x00053b36) form_field_slider_wide_pane_vc_t1

0xea00,	// (0x00053b4a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xea00,	// (0x00053b4a) form_field_slider_wide_pane_vc_t2

0x0001,

0x01ea,	// (0x00045334) form_field_slider_wide_pane_vc_t_ParamLimits

0x01ea,	// (0x00045334) form_field_slider_wide_pane_vc_t

0xb817,	// (0x00050961) input_focus_pane_cp10_vc_ParamLimits

0xb817,	// (0x00050961) input_focus_pane_cp10_vc

0xea12,	// (0x00053b5c) slider_cont_pane_cp1_vc_ParamLimits

0xea12,	// (0x00053b5c) slider_cont_pane_cp1_vc

0xe86d,	// (0x000539b7) slider_form_pane_g1_cp2

0xe876,	// (0x000539c0) slider_form_pane_g2_cp2

0xea2b,	// (0x00053b75) form_field_slider_pane_vc_t3

0xea39,	// (0x00053b83) form_field_slider_pane_vc_t4

0xea47,	// (0x00053b91) slider_form_pane_vc_ParamLimits

0xea47,	// (0x00053b91) slider_form_pane_vc

0xea54,	// (0x00053b9e) form_field_slider_pane_vc_t1_ParamLimits

0xea54,	// (0x00053b9e) form_field_slider_pane_vc_t1

0xea00,	// (0x00053b4a) form_field_slider_pane_vc_t2_ParamLimits

0xea00,	// (0x00053b4a) form_field_slider_pane_vc_t2

0x0001,

0x01fa,	// (0x00045344) form_field_slider_pane_vc_t_ParamLimits

0x01fa,	// (0x00045344) form_field_slider_pane_vc_t

0xb817,	// (0x00050961) input_focus_pane_cp9_vc_ParamLimits

0xb817,	// (0x00050961) input_focus_pane_cp9_vc

0xea70,	// (0x00053bba) slider_cont_pane_vc_ParamLimits

0xea70,	// (0x00053bba) slider_cont_pane_vc

0xea82,	// (0x00053bcc) list_form_graphic_pane_cp_vc_ParamLimits

0xea82,	// (0x00053bcc) list_form_graphic_pane_cp_vc

0xd2bb,	// (0x00052405) form_field_popup_wide_pane_vc_g1

0xea97,	// (0x00053be1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xea97,	// (0x00053be1) form_field_popup_wide_pane_vc_t1

0xc20a,	// (0x00051354) input_focus_pane_cp8_vc_ParamLimits

0xc20a,	// (0x00051354) input_focus_pane_cp8_vc

0xeaae,	// (0x00053bf8) list_form_wide_pane_vc_ParamLimits

0xeaae,	// (0x00053bf8) list_form_wide_pane_vc

0xeaba,	// (0x00053c04) list_form_graphic_pane_vc_g1

0xeac2,	// (0x00053c0c) list_form_graphic_pane_vc_t1_ParamLimits

0xeac2,	// (0x00053c0c) list_form_graphic_pane_vc_t1

0xb825,	// (0x0005096f) list_highlight_pane_cp5_vc_ParamLimits

0xb825,	// (0x0005096f) list_highlight_pane_cp5_vc

0xeade,	// (0x00053c28) list_form_graphic_pane_vc_ParamLimits

0xeade,	// (0x00053c28) list_form_graphic_pane_vc

0xd2bb,	// (0x00052405) form_field_popup_pane_vc_g1

0xeaf4,	// (0x00053c3e) form_field_popup_pane_vc_t1_ParamLimits

0xeaf4,	// (0x00053c3e) form_field_popup_pane_vc_t1

0xc20a,	// (0x00051354) input_focus_pane_cp7_vc_ParamLimits

0xc20a,	// (0x00051354) input_focus_pane_cp7_vc

0xeb0b,	// (0x00053c55) list_form_pane_vc_ParamLimits

0xeb0b,	// (0x00053c55) list_form_pane_vc

0xeb17,	// (0x00053c61) data_form_pane_vc_t1_ParamLimits

0xeb17,	// (0x00053c61) data_form_pane_vc_t1

0xc265,	// (0x000513af) input_focus_pane_vc_g1

0xc26d,	// (0x000513b7) input_focus_pane_vc_g2

0xc275,	// (0x000513bf) input_focus_pane_vc_g3

0xc27d,	// (0x000513c7) input_focus_pane_vc_g4

0xc285,	// (0x000513cf) input_focus_pane_vc_g5

0xc28d,	// (0x000513d7) input_focus_pane_vc_g6

0xc295,	// (0x000513df) input_focus_pane_vc_g7

0xc29d,	// (0x000513e7) input_focus_pane_vc_g8

0xc2a5,	// (0x000513ef) input_focus_pane_vc_g9

0xb7bf,	// (0x00050909) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x000547f3) input_focus_pane_vc_g

0xd2af,	// (0x000523f9) data_form_pane_vc_ParamLimits

0xd2af,	// (0x000523f9) data_form_pane_vc

0xd2bb,	// (0x00052405) form_field_data_pane_vc_g1

0xeb32,	// (0x00053c7c) form_field_data_pane_vc_t1_ParamLimits

0xeb32,	// (0x00053c7c) form_field_data_pane_vc_t1

0xc20a,	// (0x00051354) input_focus_pane_vc_ParamLimits

0xc20a,	// (0x00051354) input_focus_pane_vc

0xeb4c,	// (0x00053c96) button_value_adjust_pane_cp3_vc

0xeb54,	// (0x00053c9e) button_value_adjust_pane_cp5_vc

0xeb5c,	// (0x00053ca6) form_field_data_pane_vc_ParamLimits

0xeb5c,	// (0x00053ca6) form_field_data_pane_vc

0xeb73,	// (0x00053cbd) form_field_data_pane_vc_cp2

0xeb7b,	// (0x00053cc5) form_field_data_wide_pane_vc_ParamLimits

0xeb7b,	// (0x00053cc5) form_field_data_wide_pane_vc

0xeb91,	// (0x00053cdb) form_field_data_wide_pane_vc_cp2

0xeb99,	// (0x00053ce3) form_field_popup_pane_vc_ParamLimits

0xeb99,	// (0x00053ce3) form_field_popup_pane_vc

0xebb0,	// (0x00053cfa) form_field_popup_wide_pane_vc_ParamLimits

0xebb0,	// (0x00053cfa) form_field_popup_wide_pane_vc

0xebc6,	// (0x00053d10) form_field_slider_pane_vc_ParamLimits

0xebc6,	// (0x00053d10) form_field_slider_pane_vc

0xebd9,	// (0x00053d23) form_field_slider_wide_pane_vc_ParamLimits

0xebd9,	// (0x00053d23) form_field_slider_wide_pane_vc

0xa83d,	// (0x0004f987) grid_touch_1_pane_ParamLimits

0xa83d,	// (0x0004f987) grid_touch_1_pane

0xa851,	// (0x0004f99b) grid_touch_2_pane_ParamLimits

0xa851,	// (0x0004f99b) grid_touch_2_pane

0xebec,	// (0x00053d36) touch_pane_g1_ParamLimits

0xebec,	// (0x00053d36) touch_pane_g1

0xebfa,	// (0x00053d44) cell_app_pane_cp_wide_ParamLimits

0xebfa,	// (0x00053d44) cell_app_pane_cp_wide

0xec0b,	// (0x00053d55) grid_popup_fast_wide_pane_ParamLimits

0xec0b,	// (0x00053d55) grid_popup_fast_wide_pane

0xec1f,	// (0x00053d69) scroll_pane_cp19_ParamLimits

0xec1f,	// (0x00053d69) scroll_pane_cp19

0xb7c9,	// (0x00050913) bg_popup_window_pane_cp20

0xec33,	// (0x00053d7d) listscroll_popup_fast_wide_pane

0xd205,	// (0x0005234f) grid_indicator_nsta_pane

0xec3b,	// (0x00053d85) clock_nsta_pane_g1

0xec44,	// (0x00053d8e) clock_nsta_pane_t1

0xa87b,	// (0x0004f9c5) cell_indicator_nsta_pane_ParamLimits

0xa87b,	// (0x0004f9c5) cell_indicator_nsta_pane

0xebec,	// (0x00053d36) cell_indicator_nsta_pane_g1

0xa898,	// (0x0004f9e2) cell_indicator_nsta_pane_g2

0x0001,

0x0204,	// (0x0004534e) cell_indicator_nsta_pane_g

0xec60,	// (0x00053daa) clock_nsta_pane_cp

0xec68,	// (0x00053db2) indicator_nsta_pane_cp

0xec71,	// (0x00053dbb) nsta_clock_indic_pane_g1

0xbb10,	// (0x00050c5a) grid_indicator_pane

0xc659,	// (0x000517a3) scroll_pane_cp29

0x11f0,	// (0x0004633a) indicator_nsta_pane_cp2_ParamLimits

0x11f0,	// (0x0004633a) indicator_nsta_pane_cp2

0xb825,	// (0x0005096f) main_apps_wheel_pane

0xd3d7,	// (0x00052521) form_midp_field_text_pane_ParamLimits

0xd504,	// (0x0005264e) scroll_bar_cp050_ParamLimits

0xecda,	// (0x00053e24) cell_indicator_pane_ParamLimits

0xecda,	// (0x00053e24) cell_indicator_pane

0xecf7,	// (0x00053e41) cell_indicator_pane_g1

0xa8ae,	// (0x0004f9f8) grid_wheel_folder_pane_ParamLimits

0xa8ae,	// (0x0004f9f8) grid_wheel_folder_pane

0xa8bc,	// (0x0004fa06) list_wheel_apps_pane_ParamLimits

0xa8bc,	// (0x0004fa06) list_wheel_apps_pane

0xa8ca,	// (0x0004fa14) main_apps_wheel_pane_g1_ParamLimits

0xa8ca,	// (0x0004fa14) main_apps_wheel_pane_g1

0xa8d6,	// (0x0004fa20) main_apps_wheel_pane_g2_ParamLimits

0xa8d6,	// (0x0004fa20) main_apps_wheel_pane_g2

0x0001,

0x0220,	// (0x0004536a) main_apps_wheel_pane_g_ParamLimits

0x0220,	// (0x0004536a) main_apps_wheel_pane_g

0xa8e4,	// (0x0004fa2e) main_apps_wheel_pane_t1_ParamLimits

0xa8e4,	// (0x0004fa2e) main_apps_wheel_pane_t1

0xa8f8,	// (0x0004fa42) list_wheel_apps_pane_g1

0xa900,	// (0x0004fa4a) list_wheel_apps_pane_g2

0xa908,	// (0x0004fa52) list_wheel_apps_pane_g3

0xa910,	// (0x0004fa5a) list_wheel_apps_pane_g4

0xa91a,	// (0x0004fa64) list_wheel_apps_pane_g5

0x0004,

0x0225,	// (0x0004536f) list_wheel_apps_pane_g

0xcab1,	// (0x00051bfb) navi_icon_text_pane

0x9f63,	// (0x0004f0ad) aid_fill_nsta

0xed01,	// (0x00053e4b) navi_icon_text_pane_g1

0xed0d,	// (0x00053e57) navi_icon_text_pane_t1

0xc94d,	// (0x00051a97) list_set_graphic_pane_t1_ParamLimits

0xc94d,	// (0x00051a97) list_set_graphic_pane_t1

0xdc1e,	// (0x00052d68) popup_midp_note_alarm_window_t6_ParamLimits

0xdc1e,	// (0x00052d68) popup_midp_note_alarm_window_t6

0xdc30,	// (0x00052d7a) popup_midp_note_alarm_window_t7_ParamLimits

0xdc30,	// (0x00052d7a) popup_midp_note_alarm_window_t7

0xdc42,	// (0x00052d8c) popup_midp_note_alarm_window_t8_ParamLimits

0xdc42,	// (0x00052d8c) popup_midp_note_alarm_window_t8

0xdc54,	// (0x00052d9e) popup_midp_note_alarm_window_t9_ParamLimits

0xdc54,	// (0x00052d9e) popup_midp_note_alarm_window_t9

0xdc66,	// (0x00052db0) popup_midp_note_alarm_window_t10_ParamLimits

0xdc66,	// (0x00052db0) popup_midp_note_alarm_window_t10

0xdc78,	// (0x00052dc2) popup_midp_note_alarm_window_t11_ParamLimits

0xdc78,	// (0x00052dc2) popup_midp_note_alarm_window_t11

0xdc8a,	// (0x00052dd4) scroll_pane_cp17_ParamLimits

0xdc8a,	// (0x00052dd4) scroll_pane_cp17

0x1638,	// (0x00046782) volume_small_pane_cp_g1

0x1984,	// (0x00046ace) volume_small_pane_cp_g2

0x198d,	// (0x00046ad7) volume_small_pane_cp_g3

0x1996,	// (0x00046ae0) volume_small_pane_cp_g4

0x199f,	// (0x00046ae9) volume_small_pane_cp_g5

0x19a8,	// (0x00046af2) volume_small_pane_cp_g6

0x19b1,	// (0x00046afb) volume_small_pane_cp_g7

0x19ba,	// (0x00046b04) volume_small_pane_cp_g8

0x19c3,	// (0x00046b0d) volume_small_pane_cp_g9

0x19cc,	// (0x00046b16) volume_small_pane_cp_g10

0xcc5d,	// (0x00051da7) midp_ticker_pane_g1_ParamLimits

0xcc69,	// (0x00051db3) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x000548bf) midp_ticker_pane_g_ParamLimits

0xcc75,	// (0x00051dbf) midp_ticker_pane_t1_ParamLimits

0x9f87,	// (0x0004f0d1) aid_fill_nsta_2

0xd4f0,	// (0x0005263a) list_form2_midp_pane

0xe37f,	// (0x000534c9) midp_editing_number_pane_ParamLimits

0xe38e,	// (0x000534d8) midp_ticker_pane_ParamLimits

0xed1f,	// (0x00053e69) form2_midp_field_pane

0xed27,	// (0x00053e71) scroll_pane_cp51

0xed47,	// (0x00053e91) form2_midp_button_pane_ParamLimits

0xed47,	// (0x00053e91) form2_midp_button_pane

0xed59,	// (0x00053ea3) form2_midp_content_pane_ParamLimits

0xed59,	// (0x00053ea3) form2_midp_content_pane

0xed73,	// (0x00053ebd) form2_midp_field_choice_group_pane

0xed7b,	// (0x00053ec5) form2_midp_field_pane_g1

0xed83,	// (0x00053ecd) form2_midp_field_pane_g2

0xed8b,	// (0x00053ed5) form2_midp_field_pane_g3

0xed93,	// (0x00053edd) form2_midp_field_pane_g4

0x0003,

0x024a,	// (0x00045394) form2_midp_field_pane_g

0xed9b,	// (0x00053ee5) form2_midp_gauge_slider_pane

0xeda3,	// (0x00053eed) form2_midp_gauge_wait_pane

0xedab,	// (0x00053ef5) form2_midp_image_pane_ParamLimits

0xedab,	// (0x00053ef5) form2_midp_image_pane

0xedc6,	// (0x00053f10) form2_midp_label_pane_ParamLimits

0xedc6,	// (0x00053f10) form2_midp_label_pane

0xa94d,	// (0x0004fa97) form2_midp_label_pane_cp_ParamLimits

0xa94d,	// (0x0004fa97) form2_midp_label_pane_cp

0xeddf,	// (0x00053f29) form2_midp_string_pane_ParamLimits

0xeddf,	// (0x00053f29) form2_midp_string_pane

0x34da,	// (0x00048624) form2_midp_text_pane_ParamLimits

0x34da,	// (0x00048624) form2_midp_text_pane

0xedf1,	// (0x00053f3b) form2_midp_time_pane

0xee01,	// (0x00053f4b) input_focus_pane_cp51_ParamLimits

0xee01,	// (0x00053f4b) input_focus_pane_cp51

0xee19,	// (0x00053f63) form2_midp_label_pane_t1_ParamLimits

0xee19,	// (0x00053f63) form2_midp_label_pane_t1

0x34f5,	// (0x0004863f) form2_mdip_text_pane_t1_ParamLimits

0x34f5,	// (0x0004863f) form2_mdip_text_pane_t1

0x3511,	// (0x0004865b) form2_midp_time_pane_t1

0xee61,	// (0x00053fab) form2_midp_gauge_slider_pane_t1

0xa96e,	// (0x0004fab8) form2_midp_gauge_slider_pane_t2

0xa982,	// (0x0004facc) form2_midp_gauge_slider_pane_t3

0x0002,

0x0253,	// (0x0004539d) form2_midp_gauge_slider_pane_t

0xee73,	// (0x00053fbd) form2_midp_slider_pane

0xee7f,	// (0x00053fc9) form2_midp_gauge_wait_pane_t1

0xee8d,	// (0x00053fd7) form2_midp_wait_pane_ParamLimits

0xee8d,	// (0x00053fd7) form2_midp_wait_pane

0xa996,	// (0x0004fae0) list_single_2graphic_pane_cp4_ParamLimits

0xa996,	// (0x0004fae0) list_single_2graphic_pane_cp4

0xa3a0,	// (0x0004f4ea) list_single_midp_graphic_pane_cp_ParamLimits

0xa3a0,	// (0x0004f4ea) list_single_midp_graphic_pane_cp

0xb7c9,	// (0x00050913) list_highlight_pane_cp20

0xeeb8,	// (0x00054002) list_single_2graphic_pane_g1_cp4

0xe6cb,	// (0x00053815) list_single_2graphic_pane_g2_cp4

0xeec0,	// (0x0005400a) list_single_2graphic_pane_t1_cp4

0xb825,	// (0x0005096f) list_highlight_pane_cp21

0xeecf,	// (0x00054019) list_single_midp_graphic_pane_g4_cp

0xeede,	// (0x00054028) list_single_midp_graphic_pane_t1_cp

0xa9ad,	// (0x0004faf7) form2_mdip_string_pane_t1_ParamLimits

0xa9ad,	// (0x0004faf7) form2_mdip_string_pane_t1

0xb7c9,	// (0x00050913) bg_wml_button_pane_cp2

0xb7bf,	// (0x00050909) form2_midp_image_pane_g1

0x2a3b,	// (0x00047b85) list_double_large_graphic_pane_g5_ParamLimits

0x2a3b,	// (0x00047b85) list_double_large_graphic_pane_g5

0xc355,	// (0x0005149f) midp_form_pane_ParamLimits

0xb825,	// (0x0005096f) main_apps_wheel_pane_ParamLimits

0x9cbf,	// (0x0004ee09) popup_preview_window_ParamLimits

0x9cbf,	// (0x0004ee09) popup_preview_window

0xcf56,	// (0x000520a0) popup_touch_info_window_ParamLimits

0xcf56,	// (0x000520a0) popup_touch_info_window

0xcf74,	// (0x000520be) popup_touch_menu_window_ParamLimits

0xcf74,	// (0x000520be) popup_touch_menu_window

0xb7b5,	// (0x000508ff) bg_popup_sub_pane_cp6

0xeef3,	// (0x0005403d) list_touch_menu_pane

0xeefb,	// (0x00054045) list_single_touch_menu_pane_ParamLimits

0xeefb,	// (0x00054045) list_single_touch_menu_pane

0xef0f,	// (0x00054059) list_single_touch_menu_pane_t1

0xb825,	// (0x0005096f) bg_popup_sub_pane_cp7_ParamLimits

0xb825,	// (0x0005096f) bg_popup_sub_pane_cp7

0xef1d,	// (0x00054067) heading_sub_pane

0xef25,	// (0x0005406f) list_touch_info_pane_ParamLimits

0xef25,	// (0x0005406f) list_touch_info_pane

0xef34,	// (0x0005407e) list_single_touch_info_pane_ParamLimits

0xef34,	// (0x0005407e) list_single_touch_info_pane

0xef46,	// (0x00054090) list_single_touch_info_pane_t1

0xef54,	// (0x0005409e) list_single_touch_info_pane_t2

0x0001,

0x0261,	// (0x000453ab) list_single_touch_info_pane_t

0xcc33,	// (0x00051d7d) bg_popup_heading_pane_cp

0xef62,	// (0x000540ac) heading_sub_pane_t1

0xd275,	// (0x000523bf) bg_popup_preview_window_pane_cp_ParamLimits

0xd275,	// (0x000523bf) bg_popup_preview_window_pane_cp

0xef1d,	// (0x00054067) heading_preview_pane

0xef25,	// (0x0005406f) list_preview_pane_ParamLimits

0xef25,	// (0x0005406f) list_preview_pane

0xef70,	// (0x000540ba) popup_preview_window_g1

0xef34,	// (0x0005407e) list_single_preview_pane_ParamLimits

0xef34,	// (0x0005407e) list_single_preview_pane

0xef78,	// (0x000540c2) list_single_preview_pane_g1

0xef80,	// (0x000540ca) list_single_preview_pane_t1

0xef46,	// (0x00054090) list_single_preview_pane_t2

0x0001,

0x0266,	// (0x000453b0) list_single_preview_pane_t

0xef8e,	// (0x000540d8) bg_popup_heading_pane_cp2_ParamLimits

0xef8e,	// (0x000540d8) bg_popup_heading_pane_cp2

0xefa4,	// (0x000540ee) heading_preview_pane_g1

0xefac,	// (0x000540f6) heading_preview_pane_t1_ParamLimits

0xefac,	// (0x000540f6) heading_preview_pane_t1

0xbb27,	// (0x00050c71) soft_indicator_pane_t1_ParamLimits

0xc171,	// (0x000512bb) scroll_pane_ParamLimits

0xc555,	// (0x0005169f) scroll_sc2_left_pane

0xc55e,	// (0x000516a8) scroll_sc2_right_pane

0xc57d,	// (0x000516c7) scroll_bg_pane_g1_ParamLimits

0xc592,	// (0x000516dc) scroll_bg_pane_g2_ParamLimits

0xc5aa,	// (0x000516f4) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x0005484a) scroll_bg_pane_g_ParamLimits

0xc57d,	// (0x000516c7) scroll_handle_pane_g1_ParamLimits

0xc5cc,	// (0x00051716) scroll_handle_pane_g2_ParamLimits

0xc5aa,	// (0x000516f4) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x00054851) scroll_handle_pane_g_ParamLimits

0xce9f,	// (0x00051fe9) popup_choice_list_window_ParamLimits

0xce9f,	// (0x00051fe9) popup_choice_list_window

0xd0c1,	// (0x0005220b) choice_list_pane

0xd143,	// (0x0005228d) cell_toolbar_pane_t1

0xd16b,	// (0x000522b5) toolbar_button_pane_ParamLimits

0xe0d2,	// (0x0005321c) ai_gene_pane_1_t2_ParamLimits

0xe0d2,	// (0x0005321c) ai_gene_pane_1_t2

0x0001,

0xf90c,	// (0x00054a56) ai_gene_pane_1_t_ParamLimits

0xf90c,	// (0x00054a56) ai_gene_pane_1_t

0xefc9,	// (0x00054113) scroll_sc2_left_pane_g1

0xefc9,	// (0x00054113) scroll_sc2_right_pane_g1

0xc355,	// (0x0005149f) bg_popup_sub_pane_cp10

0xefd3,	// (0x0005411d) list_choice_list_pane

0xefea,	// (0x00054134) list_single_choice_list_pane_ParamLimits

0xefea,	// (0x00054134) list_single_choice_list_pane

0xc338,	// (0x00051482) list_single_choice_list_pane_g1

0xc340,	// (0x0005148a) list_single_choice_list_pane_t1_ParamLimits

0xc340,	// (0x0005148a) list_single_choice_list_pane_t1

0xeffd,	// (0x00054147) choice_list_pane_g1

0xf005,	// (0x0005414f) choice_list_pane_t1

0xb7b5,	// (0x000508ff) input_focus_pane_cp11

0xc4ca,	// (0x00051614) title_pane_stacon_g2_ParamLimits

0xc4ca,	// (0x00051614) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x00054830) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x00054830) title_pane_stacon_g

0xcc33,	// (0x00051d7d) cursor_press_pane

0x997e,	// (0x0004eac8) popup_fep_hwr_window_ParamLimits

0x997e,	// (0x0004eac8) popup_fep_hwr_window

0xcef3,	// (0x0005203d) popup_fep_vkb_window_ParamLimits

0xcef3,	// (0x0005203d) popup_fep_vkb_window

0xf013,	// (0x0005415d) cursor_press_pane_g1

0x0002,

0x028f,	// (0x000453d9) fep_vkb_side_pane_g_ParamLimits

0x1a0e,	// (0x00046b58) fep_hwr_candidate_pane_ParamLimits

0x1a0e,	// (0x00046b58) fep_hwr_candidate_pane

0x1a38,	// (0x00046b82) fep_hwr_side_pane_ParamLimits

0x1a38,	// (0x00046b82) fep_hwr_side_pane

0x1a58,	// (0x00046ba2) fep_hwr_top_pane_ParamLimits

0x1a58,	// (0x00046ba2) fep_hwr_top_pane

0x1a70,	// (0x00046bba) fep_hwr_write_pane_ParamLimits

0x1a70,	// (0x00046bba) fep_hwr_write_pane

0x028f,	// (0x000453d9) fep_vkb_side_pane_g

0xf01b,	// (0x00054165) fep_hwr_top_pane_g1

0xf02d,	// (0x00054177) fep_hwr_top_pane_g2

0x1aaa,	// (0x00046bf4) fep_hwr_top_pane_g3

0x0002,

0xf9e3,	// (0x00054b2d) fep_hwr_top_pane_g

0x1abf,	// (0x00046c09) fep_hwr_top_text_pane

0xc71f,	// (0x00051869) fep_hwr_top_text_pane_g1

0xf063,	// (0x000541ad) fep_hwr_top_text_pane_t1

0x1bb5,	// (0x00046cff) fep_hwr_candidate_pane_g1

0xf270,	// (0x000543ba) fep_vkb_keypad_pane_g3_ParamLimits

0xf270,	// (0x000543ba) fep_vkb_keypad_pane_g3

0xf298,	// (0x000543e2) fep_vkb_keypad_pane_g4_ParamLimits

0xf298,	// (0x000543e2) fep_vkb_keypad_pane_g4

0xf307,	// (0x00054451) fep_vkb_bottom_pane_g2_ParamLimits

0xf307,	// (0x00054451) fep_vkb_bottom_pane_g2

0x0001,

0x0296,	// (0x000453e0) fep_vkb_bottom_pane_g_ParamLimits

0x0296,	// (0x000453e0) fep_vkb_bottom_pane_g

0xefc9,	// (0x00054113) cell_vkb_side_pane_g2

0x0001,

0x02a0,	// (0x000453ea) cell_vkb_side_pane_g

0xf34b,	// (0x00054495) cell_vkb_side_pane_t1

0xf359,	// (0x000544a3) cell_vkb_side_pane_t1_copy1

0xefc9,	// (0x00054113) bg_fep_vkb_candidate_pane_g2

0xf435,	// (0x0005457f) cell_vkb_candidate_pane_ParamLimits

0xf071,	// (0x000541bb) aid_size_cell_vkb_ParamLimits

0xf071,	// (0x000541bb) aid_size_cell_vkb

0xf435,	// (0x0005457f) cell_vkb_candidate_pane

0x1bdc,	// (0x00046d26) bg_popup_fep_shadow_pane_g1

0xf0ed,	// (0x00054237) fep_vkb_bottom_pane_ParamLimits

0xf0ed,	// (0x00054237) fep_vkb_bottom_pane

0xf12a,	// (0x00054274) fep_vkb_candidate_pane_ParamLimits

0xf12a,	// (0x00054274) fep_vkb_candidate_pane

0xf146,	// (0x00054290) fep_vkb_keypad_pane_ParamLimits

0xf146,	// (0x00054290) fep_vkb_keypad_pane

0xf18c,	// (0x000542d6) fep_vkb_side_pane_ParamLimits

0xf18c,	// (0x000542d6) fep_vkb_side_pane

0xf1c8,	// (0x00054312) fep_vkb_top_pane_ParamLimits

0xf1c8,	// (0x00054312) fep_vkb_top_pane

0xf204,	// (0x0005434e) fep_vkb_top_pane_g1_ParamLimits

0xf204,	// (0x0005434e) fep_vkb_top_pane_g1

0xf213,	// (0x0005435d) fep_vkb_top_pane_g2_ParamLimits

0xf213,	// (0x0005435d) fep_vkb_top_pane_g2

0xf222,	// (0x0005436c) fep_vkb_top_pane_g3_ParamLimits

0xf222,	// (0x0005436c) fep_vkb_top_pane_g3

0x0003,

0x0286,	// (0x000453d0) fep_vkb_top_pane_g_ParamLimits

0x0286,	// (0x000453d0) fep_vkb_top_pane_g

0xf240,	// (0x0005438a) fep_vkb_top_text_pane_ParamLimits

0xf240,	// (0x0005438a) fep_vkb_top_text_pane

0xaa45,	// (0x0004fb8f) fep_vkb_side_pane_g1_ParamLimits

0xaa45,	// (0x0004fb8f) fep_vkb_side_pane_g1

0xf25f,	// (0x000543a9) grid_vkb_side_pane_ParamLimits

0xf25f,	// (0x000543a9) grid_vkb_side_pane

0x1be4,	// (0x00046d2e) bg_popup_fep_shadow_pane_g2

0x1bed,	// (0x00046d37) bg_popup_fep_shadow_pane_g3

0x1bf5,	// (0x00046d3f) bg_popup_fep_shadow_pane_g4

0x1bfe,	// (0x00046d48) bg_popup_fep_shadow_pane_g5

0x1c08,	// (0x00046d52) bg_popup_fep_shadow_pane_g6

0x1c10,	// (0x00046d5a) bg_popup_fep_shadow_pane_g7

0xc27d,	// (0x000513c7) bg_popup_fep_shadow_pane_g8

0xf2b6,	// (0x00054400) grid_vkb_keypad_number_pane_ParamLimits

0xf2b6,	// (0x00054400) grid_vkb_keypad_number_pane

0xf2c6,	// (0x00054410) grid_vkb_keypad_pane_ParamLimits

0xf2c6,	// (0x00054410) grid_vkb_keypad_pane

0xf2ec,	// (0x00054436) fep_vkb_bottom_pane_g1_ParamLimits

0xf2ec,	// (0x00054436) fep_vkb_bottom_pane_g1

0xf315,	// (0x0005445f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xf315,	// (0x0005445f) grid_vkb_keypad_bottom_left_pane

0xf32a,	// (0x00054474) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xf32a,	// (0x00054474) grid_vkb_keypad_bottom_right_pane

0xf33f,	// (0x00054489) fep_vkb_top_text_pane_g1

0xaa8c,	// (0x0004fbd6) fep_vkb_top_text_pane_t1

0xaa9e,	// (0x0004fbe8) cell_vkb_side_pane_ParamLimits

0xaa9e,	// (0x0004fbe8) cell_vkb_side_pane

0xefc9,	// (0x00054113) cell_vkb_side_pane_g1

0xf367,	// (0x000544b1) cell_vkb_keypad_pane_ParamLimits

0xf367,	// (0x000544b1) cell_vkb_keypad_pane

0xf3e2,	// (0x0005452c) cell_vkb_keypad_pane_g1

0x0008,

0xf9fe,	// (0x00054b48) bg_popup_fep_shadow_pane_g

0x1c22,	// (0x00046d6c) cell_hwr_side_pane_g1

0x1c22,	// (0x00046d6c) cell_hwr_side_pane_g2

0xf3ec,	// (0x00054536) cell_vkb_keypad_pane_t1

0xaab4,	// (0x0004fbfe) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xaab4,	// (0x0004fbfe) cell_vkb_keypad_bottom_left_pane

0xaac9,	// (0x0004fc13) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xaac9,	// (0x0004fc13) cell_vkb_keypad_bottom_right_pane

0xefc9,	// (0x00054113) cell_vkb_keypad_bottom_left_pane_g1

0xefc9,	// (0x00054113) cell_vkb_keypad_bottom_right_pane_g1

0xf3fa,	// (0x00054544) cell_vkb_keypad_number_pane_ParamLimits

0xf3fa,	// (0x00054544) cell_vkb_keypad_number_pane

0xf419,	// (0x00054563) cell_vkb_keypad_number_pane_g1

0xf423,	// (0x0005456d) cell_vkb_keypad_number_pane_g2

0xf42c,	// (0x00054576) cell_vkb_keypad_number_pane_g3

0x0002,

0x02a5,	// (0x000453ef) cell_vkb_keypad_number_pane_g

0xf3ec,	// (0x00054536) cell_vkb_keypad_number_pane_t1

0xf452,	// (0x0005459c) fep_vkb_candidate_pane_g1

0x0001,

0xfa11,	// (0x00054b5b) cell_hwr_side_pane_g

0xf46b,	// (0x000545b5) cell_hwr_side_pane_t1

0x1c2c,	// (0x00046d76) cell_hwr_side_pane_t1_copy1

0x1c3a,	// (0x00046d84) cell_hwr_candidate_pane_g1

0x1c69,	// (0x00046db3) cell_hwr_candidate_pane_t1

0xefc9,	// (0x00054113) cell_vkb_candidate_pane_g2

0xf4af,	// (0x000545f9) cell_vkb_candidate_pane_t1

0x19d5,	// (0x00046b1f) bg_popup_fep_shadow_pane_ParamLimits

0x19d5,	// (0x00046b1f) bg_popup_fep_shadow_pane

0x1a8a,	// (0x00046bd4) bg_fep_hwr_top_pane_g4

0xf03f,	// (0x00054189) bg_hwr_side_pane_g1_ParamLimits

0xf03f,	// (0x00054189) bg_hwr_side_pane_g1

0x8821,	// (0x0004d96b) cell_hwr_side_pane_ParamLimits

0x8821,	// (0x0004d96b) cell_hwr_side_pane

0x1b36,	// (0x00046c80) fep_hwr_write_pane_g1_ParamLimits

0x1b36,	// (0x00046c80) fep_hwr_write_pane_g1

0x1b43,	// (0x00046c8d) fep_hwr_write_pane_g2_ParamLimits

0x1b43,	// (0x00046c8d) fep_hwr_write_pane_g2

0x1b50,	// (0x00046c9a) fep_hwr_write_pane_g3_ParamLimits

0x1b50,	// (0x00046c9a) fep_hwr_write_pane_g3

0x8841,	// (0x0004d98b) fep_hwr_write_pane_g4_ParamLimits

0x8841,	// (0x0004d98b) fep_hwr_write_pane_g4

0x0005,

0xf9ea,	// (0x00054b34) fep_hwr_write_pane_g_ParamLimits

0xf9ea,	// (0x00054b34) fep_hwr_write_pane_g

0x1a8a,	// (0x00046bd4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1a8a,	// (0x00046bd4) bg_fep_hwr_candidate_pane_g2

0x1b73,	// (0x00046cbd) cell_hwr_candidate_pane_ParamLimits

0x1b73,	// (0x00046cbd) cell_hwr_candidate_pane

0x1bb5,	// (0x00046cff) fep_hwr_candidate_pane_g1_ParamLimits

0xf09f,	// (0x000541e9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xf09f,	// (0x000541e9) bg_popup_fep_shadow_pane_cp2

0xf232,	// (0x0005437c) fep_vkb_top_pane_g4_ParamLimits

0xf232,	// (0x0005437c) fep_vkb_top_pane_g4

0xf251,	// (0x0005439b) fep_vkb_side_pane_g2_ParamLimits

0xf251,	// (0x0005439b) fep_vkb_side_pane_g2

0x848e,	// (0x0004d5d8) list_setting_pane_t4_ParamLimits

0x848e,	// (0x0004d5d8) list_setting_pane_t4

0x8d0c,	// (0x0004de56) list_setting_number_pane_t5_ParamLimits

0x8d0c,	// (0x0004de56) list_setting_number_pane_t5

0x96f8,	// (0x0004e842) list_double_heading_pane_cp2_ParamLimits

0x96f8,	// (0x0004e842) list_double_heading_pane_cp2

0xc1a5,	// (0x000512ef) list_double_heading_pane_g1_cp2_ParamLimits

0xc1a5,	// (0x000512ef) list_double_heading_pane_g1_cp2

0xc224,	// (0x0005136e) list_double_heading_pane_g2_cp2_ParamLimits

0xc224,	// (0x0005136e) list_double_heading_pane_g2_cp2

0xf4bd,	// (0x00054607) list_double_heading_pane_t1_cp2_ParamLimits

0xf4bd,	// (0x00054607) list_double_heading_pane_t1_cp2

0xf4d3,	// (0x0005461d) list_double_heading_pane_t2_cp2_ParamLimits

0xf4d3,	// (0x0005461d) list_double_heading_pane_t2_cp2

0xb7ad,	// (0x000508f7) aid_value_unit2

0x0998,	// (0x00045ae2) popup_preview_fixed_window

0xbc07,	// (0x00050d51) bg_popup_preview_window_pane_cp02

0xf4e5,	// (0x0005462f) list_preview_fixed_pane

0xf52b,	// (0x00054675) list_empty_pane_fp_ParamLimits

0xf52b,	// (0x00054675) list_empty_pane_fp

0xf52b,	// (0x00054675) list_single_cale_day_pane_fp_ParamLimits

0xf52b,	// (0x00054675) list_single_cale_day_pane_fp

0xf52b,	// (0x00054675) list_single_graphic_heading_pane_fp_ParamLimits

0xf52b,	// (0x00054675) list_single_graphic_heading_pane_fp

0xf52b,	// (0x00054675) list_single_graphic_pane_fp_ParamLimits

0xf52b,	// (0x00054675) list_single_graphic_pane_fp

0xf52b,	// (0x00054675) list_single_heading_pane_fp_ParamLimits

0xf52b,	// (0x00054675) list_single_heading_pane_fp

0xf52b,	// (0x00054675) list_single_pane_fp_ParamLimits

0xf52b,	// (0x00054675) list_single_pane_fp

0xf542,	// (0x0005468c) list_single_pane_fp_g1_ParamLimits

0xf542,	// (0x0005468c) list_single_pane_fp_g1

0x2a23,	// (0x00047b6d) list_single_pane_fp_g2_ParamLimits

0x2a23,	// (0x00047b6d) list_single_pane_fp_g2

0x3524,	// (0x0004866e) list_single_pane_fp_g3_ParamLimits

0x3524,	// (0x0004866e) list_single_pane_fp_g3

0xf54e,	// (0x00054698) list_single_pane_fp_g4_ParamLimits

0xf54e,	// (0x00054698) list_single_pane_fp_g4

0x0003,

0xfa1d,	// (0x00054b67) list_single_pane_fp_g_ParamLimits

0xfa1d,	// (0x00054b67) list_single_pane_fp_g

0x3538,	// (0x00048682) list_single_pane_fp_t1_ParamLimits

0x3538,	// (0x00048682) list_single_pane_fp_t1

0x354f,	// (0x00048699) list_single_graphic_pane_fp_g1_ParamLimits

0x354f,	// (0x00048699) list_single_graphic_pane_fp_g1

0xf542,	// (0x0005468c) list_single_graphic_pane_fp_g2_ParamLimits

0xf542,	// (0x0005468c) list_single_graphic_pane_fp_g2

0x2a23,	// (0x00047b6d) list_single_graphic_pane_fp_g3_ParamLimits

0x2a23,	// (0x00047b6d) list_single_graphic_pane_fp_g3

0x3524,	// (0x0004866e) list_single_graphic_pane_fp_g4_ParamLimits

0x3524,	// (0x0004866e) list_single_graphic_pane_fp_g4

0xf54e,	// (0x00054698) list_single_graphic_pane_fp_g5_ParamLimits

0xf54e,	// (0x00054698) list_single_graphic_pane_fp_g5

0x0004,

0xfa26,	// (0x00054b70) list_single_graphic_pane_fp_g_ParamLimits

0xfa26,	// (0x00054b70) list_single_graphic_pane_fp_g

0x355b,	// (0x000486a5) list_single_graphic_pane_fp_t1_ParamLimits

0x355b,	// (0x000486a5) list_single_graphic_pane_fp_t1

0x354f,	// (0x00048699) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x354f,	// (0x00048699) list_single_graphic_heading_pane_fp_g1

0xf542,	// (0x0005468c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf542,	// (0x0005468c) list_single_graphic_heading_pane_fp_g2

0x2a23,	// (0x00047b6d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2a23,	// (0x00047b6d) list_single_graphic_heading_pane_fp_g3

0x3524,	// (0x0004866e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3524,	// (0x0004866e) list_single_graphic_heading_pane_fp_g4

0xf54e,	// (0x00054698) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf54e,	// (0x00054698) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfa26,	// (0x00054b70) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfa26,	// (0x00054b70) list_single_graphic_heading_pane_fp_g

0x3571,	// (0x000486bb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3571,	// (0x000486bb) list_single_graphic_heading_pane_fp_t1

0x3587,	// (0x000486d1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3587,	// (0x000486d1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfa31,	// (0x00054b7b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfa31,	// (0x00054b7b) list_single_graphic_heading_pane_fp_t

0x3599,	// (0x000486e3) list_single_cale_day_pane_fp_g1_ParamLimits

0x3599,	// (0x000486e3) list_single_cale_day_pane_fp_g1

0xf55a,	// (0x000546a4) list_single_cale_day_pane_fp_g2_ParamLimits

0xf55a,	// (0x000546a4) list_single_cale_day_pane_fp_g2

0x35d1,	// (0x0004871b) list_single_cale_day_pane_fp_g3_ParamLimits

0x35d1,	// (0x0004871b) list_single_cale_day_pane_fp_g3

0x35f9,	// (0x00048743) list_single_cale_day_pane_fp_g4_ParamLimits

0x35f9,	// (0x00048743) list_single_cale_day_pane_fp_g4

0x361d,	// (0x00048767) list_single_cale_day_pane_fp_g5_ParamLimits

0x361d,	// (0x00048767) list_single_cale_day_pane_fp_g5

0x0004,

0xfa36,	// (0x00054b80) list_single_cale_day_pane_fp_g_ParamLimits

0xfa36,	// (0x00054b80) list_single_cale_day_pane_fp_g

0x3641,	// (0x0004878b) list_single_cale_day_pane_fp_t1_ParamLimits

0x3641,	// (0x0004878b) list_single_cale_day_pane_fp_t1

0x3667,	// (0x000487b1) list_single_cale_day_pane_fp_t2_ParamLimits

0x3667,	// (0x000487b1) list_single_cale_day_pane_fp_t2

0x3680,	// (0x000487ca) list_single_cale_day_pane_fp_t3_ParamLimits

0x3680,	// (0x000487ca) list_single_cale_day_pane_fp_t3

0x0002,

0xfa41,	// (0x00054b8b) list_single_cale_day_pane_fp_t_ParamLimits

0xfa41,	// (0x00054b8b) list_single_cale_day_pane_fp_t

0xf542,	// (0x0005468c) list_empty_pane_fp_g1_ParamLimits

0xf542,	// (0x0005468c) list_empty_pane_fp_g1

0x3699,	// (0x000487e3) list_empty_pane_fp_t1

0x36a7,	// (0x000487f1) list_empty_pane_fp_t2

0x0001,

0xfa48,	// (0x00054b92) list_empty_pane_fp_t

0xf542,	// (0x0005468c) list_single_heading_pane_fp_g1_ParamLimits

0xf542,	// (0x0005468c) list_single_heading_pane_fp_g1

0x2a23,	// (0x00047b6d) list_single_heading_pane_fp_g2_ParamLimits

0x2a23,	// (0x00047b6d) list_single_heading_pane_fp_g2

0x3524,	// (0x0004866e) list_single_heading_pane_fp_g3_ParamLimits

0x3524,	// (0x0004866e) list_single_heading_pane_fp_g3

0x0002,

0xfa4d,	// (0x00054b97) list_single_heading_pane_fp_g_ParamLimits

0xfa4d,	// (0x00054b97) list_single_heading_pane_fp_g

0x36b5,	// (0x000487ff) list_single_heading_pane_fp_t1_ParamLimits

0x36b5,	// (0x000487ff) list_single_heading_pane_fp_t1

0x36c7,	// (0x00048811) list_single_heading_pane_fp_t2_ParamLimits

0x36c7,	// (0x00048811) list_single_heading_pane_fp_t2

0x0001,

0xfa54,	// (0x00054b9e) list_single_heading_pane_fp_t_ParamLimits

0xfa54,	// (0x00054b9e) list_single_heading_pane_fp_t

0xc361,	// (0x000514ab) aid_size_cell_fast

0xbbea,	// (0x00050d34) soft_indicator_pane_cp1_t1

0xc39e,	// (0x000514e8) cell_app_pane_cp2_ParamLimits

0xc39e,	// (0x000514e8) cell_app_pane_cp2

0x19f7,	// (0x00046b41) fep_hwr_candidate_drop_down_list_pane

0x1bcf,	// (0x00046d19) fep_hwr_candidate_pane_g3_ParamLimits

0x1bcf,	// (0x00046d19) fep_hwr_candidate_pane_g3

0xb459,	// (0x000505a3) fep_hwr_candidate_pane_g4_ParamLimits

0xb459,	// (0x000505a3) fep_hwr_candidate_pane_g4

0x0002,

0xf9f7,	// (0x00054b41) fep_hwr_candidate_pane_g_ParamLimits

0xf9f7,	// (0x00054b41) fep_hwr_candidate_pane_g

0xf119,	// (0x00054263) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xf119,	// (0x00054263) fep_vkb_candidate_drop_down_list_pane

0xf45a,	// (0x000545a4) fep_vkb_candidate_pane_g3

0xf462,	// (0x000545ac) fep_vkb_candidate_pane_g4

0x0002,

0x02ac,	// (0x000453f6) fep_vkb_candidate_pane_g

0x1c3a,	// (0x00046d84) cell_hwr_candidate_pane_g1_ParamLimits

0x1c48,	// (0x00046d92) cell_hwr_candidate_pane_g3_ParamLimits

0x1c48,	// (0x00046d92) cell_hwr_candidate_pane_g3

0x5e6e,	// (0x0004afb8) cell_hwr_candidate_pane_g4_ParamLimits

0x5e6e,	// (0x0004afb8) cell_hwr_candidate_pane_g4

0x0002,

0xfa16,	// (0x00054b60) cell_hwr_candidate_pane_g_ParamLimits

0xfa16,	// (0x00054b60) cell_hwr_candidate_pane_g

0xf479,	// (0x000545c3) cell_vkb_candidate_pane_g3_ParamLimits

0xf479,	// (0x000545c3) cell_vkb_candidate_pane_g3

0xf494,	// (0x000545de) cell_vkb_candidate_pane_g4_ParamLimits

0xf494,	// (0x000545de) cell_vkb_candidate_pane_g4

0x4965,	// (0x00049aaf) cell_app_pane_cp2_g1_ParamLimits

0x4965,	// (0x00049aaf) cell_app_pane_cp2_g1

0x4983,	// (0x00049acd) cell_app_pane_cp2_g2_ParamLimits

0x4983,	// (0x00049acd) cell_app_pane_cp2_g2

0x0001,

0xfa59,	// (0x00054ba3) cell_app_pane_cp2_g_ParamLimits

0xfa59,	// (0x00054ba3) cell_app_pane_cp2_g

0x498f,	// (0x00049ad9) cell_app_pane_cp2_t1_ParamLimits

0x498f,	// (0x00049ad9) cell_app_pane_cp2_t1

0xc20a,	// (0x00051354) grid_highlight_pane_cp1_ParamLimits

0xc20a,	// (0x00051354) grid_highlight_pane_cp1

0x1c87,	// (0x00046dd1) cell_hwr_candidate_pane_cp1_ParamLimits

0x1c87,	// (0x00046dd1) cell_hwr_candidate_pane_cp1

0x1c3a,	// (0x00046d84) fep_hwr_candidate_drop_down_list_pane_g1

0x1ca6,	// (0x00046df0) fep_hwr_candidate_drop_down_list_pane_g2

0x1cb3,	// (0x00046dfd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfa5e,	// (0x00054ba8) fep_hwr_candidate_drop_down_list_pane_g

0x1cc0,	// (0x00046e0a) fep_hwr_candidate_drop_down_list_scroll_pane

0x1cc9,	// (0x00046e13) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1cc9,	// (0x00046e13) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1cd6,	// (0x00046e20) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1cd6,	// (0x00046e20) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1ce3,	// (0x00046e2d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1ce3,	// (0x00046e2d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1cf0,	// (0x00046e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1cf0,	// (0x00046e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1d0b,	// (0x00046e55) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1d0b,	// (0x00046e55) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1d26,	// (0x00046e70) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1d26,	// (0x00046e70) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1d41,	// (0x00046e8b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1d41,	// (0x00046e8b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1d5c,	// (0x00046ea6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1d5c,	// (0x00046ea6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfa65,	// (0x00054baf) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfa65,	// (0x00054baf) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x49a1,	// (0x00049aeb) cell_vkb_candidate_pane_cp1_ParamLimits

0x49a1,	// (0x00049aeb) cell_vkb_candidate_pane_cp1

0xf232,	// (0x0005437c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xf232,	// (0x0005437c) fep_vkb_candidate_drop_down_list_pane_g1

0x49c1,	// (0x00049b0b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x49c1,	// (0x00049b0b) fep_vkb_candidate_drop_down_list_pane_g2

0x49ce,	// (0x00049b18) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x49ce,	// (0x00049b18) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfa76,	// (0x00054bc0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfa76,	// (0x00054bc0) fep_vkb_candidate_drop_down_list_pane_g

0x49db,	// (0x00049b25) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x49db,	// (0x00049b25) fep_vkb_candidate_drop_down_list_scroll_pane

0x49e8,	// (0x00049b32) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x49e8,	// (0x00049b32) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x49f5,	// (0x00049b3f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x49f5,	// (0x00049b3f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4a01,	// (0x00049b4b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4a01,	// (0x00049b4b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4a0d,	// (0x00049b57) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4a0d,	// (0x00049b57) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4a2e,	// (0x00049b78) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4a2e,	// (0x00049b78) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4a4f,	// (0x00049b99) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4a4f,	// (0x00049b99) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4a70,	// (0x00049bba) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4a70,	// (0x00049bba) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4a91,	// (0x00049bdb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4a91,	// (0x00049bdb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfa7d,	// (0x00054bc7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfa7d,	// (0x00054bc7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x91ed,	// (0x0004e337) title_pane_g1_ParamLimits

0x9200,	// (0x0004e34a) title_pane_g2_ParamLimits

0xf566,	// (0x000546b0) title_pane_g_ParamLimits

0xc70f,	// (0x00051859) aid_call2_pane

0xc717,	// (0x00051861) aid_call_pane

0xc71f,	// (0x00051869) popup_clock_analogue_window_g1

0xc71f,	// (0x00051869) popup_clock_analogue_window_g2

0x10f1,	// (0x0004623b) popup_clock_analogue_window_g3

0x10fa,	// (0x00046244) popup_clock_analogue_window_g4

0xb7bf,	// (0x00050909) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x0005485f) popup_clock_analogue_window_g

0x1102,	// (0x0004624c) popup_clock_analogue_window_t1

0x1110,	// (0x0004625a) clock_digital_number_pane_ParamLimits

0x1110,	// (0x0004625a) clock_digital_number_pane

0x111c,	// (0x00046266) clock_digital_number_pane_cp02_ParamLimits

0x111c,	// (0x00046266) clock_digital_number_pane_cp02

0x1128,	// (0x00046272) clock_digital_number_pane_cp03_ParamLimits

0x1128,	// (0x00046272) clock_digital_number_pane_cp03

0x1134,	// (0x0004627e) clock_digital_number_pane_cp04_ParamLimits

0x1134,	// (0x0004627e) clock_digital_number_pane_cp04

0x1140,	// (0x0004628a) clock_digital_separator_pane_ParamLimits

0x1140,	// (0x0004628a) clock_digital_separator_pane

0x114c,	// (0x00046296) popup_clock_digital_window_t1_ParamLimits

0x114c,	// (0x00046296) popup_clock_digital_window_t1

0xb7bf,	// (0x00050909) clock_digital_number_pane_g1

0xb7bf,	// (0x00050909) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x0005486a) clock_digital_number_pane_g

0xb7bf,	// (0x00050909) clock_digital_separator_pane_g1

0xb7bf,	// (0x00050909) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x0005486a) clock_digital_separator_pane_g

0x9f63,	// (0x0004f0ad) aid_fill_nsta_ParamLimits

0xa099,	// (0x0004f1e3) indicator_nsta_pane_ParamLimits

0xd06a,	// (0x000521b4) popup_clock_analogue_window

0xd06a,	// (0x000521b4) popup_clock_digital_window

0xd205,	// (0x0005234f) grid_indicator_nsta_pane_ParamLimits

0xec52,	// (0x00053d9c) clock_nsta_pane_t2

0x0001,

0x01ff,	// (0x00045349) clock_nsta_pane_t

0x10b5,	// (0x000461ff) aid_size_max_handle

0x84de,	// (0x0004d628) aid_size_min_handle

0xcc33,	// (0x00051d7d) editor_scroll_pane

0x4aac,	// (0x00049bf6) ex_editor_pane

0xc31d,	// (0x00051467) scroll_pane_cp13

0xc19d,	// (0x000512e7) scroll_pane_cp14

0xc74e,	// (0x00051898) scroll_pane_cp36

0x9709,	// (0x0004e853) list_single_graphic_hl_pane_cp2_ParamLimits

0x9709,	// (0x0004e853) list_single_graphic_hl_pane_cp2

0xa72e,	// (0x0004f878) list_single_graphic_hl_pane_ParamLimits

0xa72e,	// (0x0004f878) list_single_graphic_hl_pane

0x36dd,	// (0x00048827) aid_size_min_hl_cp1

0x4ab4,	// (0x00049bfe) list_highlight_pane_cp34_ParamLimits

0x4ab4,	// (0x00049bfe) list_highlight_pane_cp34

0x4ac5,	// (0x00049c0f) list_single_graphic_hl_pane_g1_ParamLimits

0x4ac5,	// (0x00049c0f) list_single_graphic_hl_pane_g1

0x8fe6,	// (0x0004e130) list_single_graphic_hl_pane_g2_ParamLimits

0x8fe6,	// (0x0004e130) list_single_graphic_hl_pane_g2

0x8fe6,	// (0x0004e130) list_single_graphic_hl_pane_g3_ParamLimits

0x8fe6,	// (0x0004e130) list_single_graphic_hl_pane_g3

0x3cb7,	// (0x00048e01) list_single_graphic_hl_pane_g4_ParamLimits

0x3cb7,	// (0x00048e01) list_single_graphic_hl_pane_g4

0x8ff2,	// (0x0004e13c) list_single_graphic_hl_pane_g5_ParamLimits

0x8ff2,	// (0x0004e13c) list_single_graphic_hl_pane_g5

0x0004,

0xfa8e,	// (0x00054bd8) list_single_graphic_hl_pane_g_ParamLimits

0xfa8e,	// (0x00054bd8) list_single_graphic_hl_pane_g

0x9006,	// (0x0004e150) list_single_graphic_hl_pane_t1_ParamLimits

0x9006,	// (0x0004e150) list_single_graphic_hl_pane_t1

0x4ad2,	// (0x00049c1c) aid_size_min_hl_cp2

0x4adb,	// (0x00049c25) list_highlight_pane_cp34_cp2_ParamLimits

0x4adb,	// (0x00049c25) list_highlight_pane_cp34_cp2

0x4ac5,	// (0x00049c0f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4ac5,	// (0x00049c0f) list_single_graphic_hl_pane_g1_cp2

0x4ae8,	// (0x00049c32) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4ae8,	// (0x00049c32) list_single_graphic_hl_pane_g2_cp2

0x4af4,	// (0x00049c3e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x4af4,	// (0x00049c3e) list_single_graphic_hl_pane_g3_cp2

0xcb6a,	// (0x00051cb4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcb6a,	// (0x00051cb4) list_single_graphic_hl_pane_g4_cp2

0x4b02,	// (0x00049c4c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4b02,	// (0x00049c4c) list_single_graphic_hl_pane_g5_cp2

0x8535,	// (0x0004d67f) control_pane_g4_ParamLimits

0x8535,	// (0x0004d67f) control_pane_g4

0xc355,	// (0x0005149f) bg_popup_sub_pane_cp10_ParamLimits

0xefd3,	// (0x0005411d) list_choice_list_pane_ParamLimits

0xefe2,	// (0x0005412c) scroll_pane_cp23

0xbc07,	// (0x00050d51) bg_popup_preview_window_pane_cp02_ParamLimits

0xf4e5,	// (0x0005462f) list_preview_fixed_pane_ParamLimits

0xf4fb,	// (0x00054645) list_preview_fixed_pane_cp_ParamLimits

0xf4fb,	// (0x00054645) list_preview_fixed_pane_cp

0xf507,	// (0x00054651) popup_preview_fixed_window_g1_ParamLimits

0xf507,	// (0x00054651) popup_preview_fixed_window_g1

0xf513,	// (0x0005465d) popup_preview_fixed_window_g2_ParamLimits

0xf513,	// (0x0005465d) popup_preview_fixed_window_g2

0x0002,

0x02cd,	// (0x00045417) popup_preview_fixed_window_g_ParamLimits

0x02cd,	// (0x00045417) popup_preview_fixed_window_g

0x1029,	// (0x00046173) aid_navi_side_left_pane_ParamLimits

0x103e,	// (0x00046188) aid_navi_side_right_pane_ParamLimits

0x1056,	// (0x000461a0) navi_icon_pane_stacon_ParamLimits

0x106a,	// (0x000461b4) navi_navi_pane_stacon_ParamLimits

0x1056,	// (0x000461a0) navi_text_pane_stacon_ParamLimits

0xb7b5,	// (0x000508ff) main_text_info_pane

0x4b2c,	// (0x00049c76) listscroll_text_info_pane

0x4b34,	// (0x00049c7e) list_text_info_pane_ParamLimits

0x4b34,	// (0x00049c7e) list_text_info_pane

0x4b43,	// (0x00049c8d) scroll_pane_cp24_ParamLimits

0x4b43,	// (0x00049c8d) scroll_pane_cp24

0xaae4,	// (0x0004fc2e) list_text_info_pane_t1_ParamLimits

0xaae4,	// (0x0004fc2e) list_text_info_pane_t1

0x98f3,	// (0x0004ea3d) popup_fast_swap2_window_ParamLimits

0x98f3,	// (0x0004ea3d) popup_fast_swap2_window

0x4b9a,	// (0x00049ce4) aid_size_cell_fast2

0xb7b5,	// (0x000508ff) bg_popup_window_pane_cp17

0xd51c,	// (0x00052666) heading_pane_cp2

0xbf22,	// (0x0005106c) listscroll_fast2_pane

0x4ba4,	// (0x00049cee) grid_fast2_pane

0x4bae,	// (0x00049cf8) listscroll_fast2_pane_g1

0x4bb6,	// (0x00049d00) listscroll_fast2_pane_g2

0x0001,

0xfa99,	// (0x00054be3) listscroll_fast2_pane_g

0xc31d,	// (0x00051467) scroll_pane_cp26

0x4bc0,	// (0x00049d0a) cell_fast2_pane_ParamLimits

0x4bc0,	// (0x00049d0a) cell_fast2_pane

0x4bd5,	// (0x00049d1f) cell_fast2_pane_g1

0x4bde,	// (0x00049d28) cell_fast2_pane_g2

0x4be7,	// (0x00049d31) cell_fast2_pane_g3

0x0002,

0xfa9e,	// (0x00054be8) cell_fast2_pane_g

0xbf64,	// (0x000510ae) grid_highlight_pane_cp9

0xbf79,	// (0x000510c3) main_eswt_pane_ParamLimits

0xbf79,	// (0x000510c3) main_eswt_pane

0x4b58,	// (0x00049ca2) list_single_text_info_pane

0x4bef,	// (0x00049d39) eswt_ctrl_button_pane

0x4bef,	// (0x00049d39) eswt_ctrl_canvas_pane

0x4bf7,	// (0x00049d41) eswt_ctrl_combo_pane

0x4bef,	// (0x00049d39) eswt_ctrl_default_pane

0x4bef,	// (0x00049d39) eswt_ctrl_label_pane

0x4bff,	// (0x00049d49) eswt_ctrl_wait_pane

0x4c07,	// (0x00049d51) eswt_shell_pane

0xb7b5,	// (0x000508ff) listscroll_eswt_app_pane

0x4c27,	// (0x00049d71) popup_eswt_tasktip_window_ParamLimits

0x4c27,	// (0x00049d71) popup_eswt_tasktip_window

0xd275,	// (0x000523bf) bg_popup_window_pane_cp18

0x4c38,	// (0x00049d82) eswt_control_pane_g1_ParamLimits

0x4c38,	// (0x00049d82) eswt_control_pane_g1

0x4c45,	// (0x00049d8f) eswt_control_pane_g2_ParamLimits

0x4c45,	// (0x00049d8f) eswt_control_pane_g2

0x4c52,	// (0x00049d9c) eswt_control_pane_g3_ParamLimits

0x4c52,	// (0x00049d9c) eswt_control_pane_g3

0x4c5f,	// (0x00049da9) eswt_control_pane_g4_ParamLimits

0x4c5f,	// (0x00049da9) eswt_control_pane_g4

0x0003,

0xfaa5,	// (0x00054bef) eswt_control_pane_g_ParamLimits

0xfaa5,	// (0x00054bef) eswt_control_pane_g

0xc20a,	// (0x00051354) bg_button_pane_ParamLimits

0xc20a,	// (0x00051354) bg_button_pane

0xbf79,	// (0x000510c3) common_borders_pane_copy2_ParamLimits

0xbf79,	// (0x000510c3) common_borders_pane_copy2

0x4c6c,	// (0x00049db6) control_button_pane_g1_ParamLimits

0x4c6c,	// (0x00049db6) control_button_pane_g1

0x4c78,	// (0x00049dc2) control_button_pane_g2_ParamLimits

0x4c78,	// (0x00049dc2) control_button_pane_g2

0x4c84,	// (0x00049dce) control_button_pane_g3_ParamLimits

0x4c84,	// (0x00049dce) control_button_pane_g3

0x0002,

0xfaae,	// (0x00054bf8) control_button_pane_g_ParamLimits

0xfaae,	// (0x00054bf8) control_button_pane_g

0x4c98,	// (0x00049de2) control_button_pane_t1

0x4ca6,	// (0x00049df0) control_button_pane_t2

0x0001,

0xfab5,	// (0x00054bff) control_button_pane_t

0xd177,	// (0x000522c1) bg_button_pane_g1

0xd187,	// (0x000522d1) bg_button_pane_g2

0xd17f,	// (0x000522c9) bg_button_pane_g3

0xd197,	// (0x000522e1) bg_button_pane_g4

0xd18f,	// (0x000522d9) bg_button_pane_g5

0xd19f,	// (0x000522e9) bg_button_pane_g6

0xd1a7,	// (0x000522f1) bg_button_pane_g7

0xd1b7,	// (0x00052301) bg_button_pane_g8

0xd1af,	// (0x000522f9) bg_button_pane_g9

0x0008,

0xf877,	// (0x000549c1) bg_button_pane_g

0xef8e,	// (0x000540d8) common_borders_pane_ParamLimits

0xef8e,	// (0x000540d8) common_borders_pane

0x4c38,	// (0x00049d82) eswt_control_pane_g1_copy1_ParamLimits

0x4c38,	// (0x00049d82) eswt_control_pane_g1_copy1

0x4c45,	// (0x00049d8f) eswt_control_pane_g2_copy1_ParamLimits

0x4c45,	// (0x00049d8f) eswt_control_pane_g2_copy1

0x4c52,	// (0x00049d9c) eswt_control_pane_g3_copy1_ParamLimits

0x4c52,	// (0x00049d9c) eswt_control_pane_g3_copy1

0x4c5f,	// (0x00049da9) eswt_control_pane_g4_copy1_ParamLimits

0x4c5f,	// (0x00049da9) eswt_control_pane_g4_copy1

0xefc9,	// (0x00054113) bg_eswt_ctrl_canvas_pane_g1

0xef8e,	// (0x000540d8) common_borders_pane_cp2_ParamLimits

0xef8e,	// (0x000540d8) common_borders_pane_cp2

0xef8e,	// (0x000540d8) common_borders_pane_cp3_ParamLimits

0xef8e,	// (0x000540d8) common_borders_pane_cp3

0x4cb4,	// (0x00049dfe) separator_horizontal_pane

0x4cbc,	// (0x00049e06) separator_vertical_pane

0x4c38,	// (0x00049d82) eswt_control_pane_g1_copy2_ParamLimits

0x4c38,	// (0x00049d82) eswt_control_pane_g1_copy2

0x4c45,	// (0x00049d8f) eswt_control_pane_g2_copy2_ParamLimits

0x4c45,	// (0x00049d8f) eswt_control_pane_g2_copy2

0x4c52,	// (0x00049d9c) eswt_control_pane_g3_copy2_ParamLimits

0x4c52,	// (0x00049d9c) eswt_control_pane_g3_copy2

0x4c5f,	// (0x00049da9) eswt_control_pane_g4_copy2_ParamLimits

0x4c5f,	// (0x00049da9) eswt_control_pane_g4_copy2

0xb7b5,	// (0x000508ff) common_borders_pane_cp4

0x4cc5,	// (0x00049e0f) separator_horizontal_pane_g1

0x4cce,	// (0x00049e18) separator_horizontal_pane_g2

0x4cd7,	// (0x00049e21) separator_horizontal_pane_g3

0x0002,

0xfaba,	// (0x00054c04) separator_horizontal_pane_g

0x4c38,	// (0x00049d82) eswt_control_pane_g1_copy3_ParamLimits

0x4c38,	// (0x00049d82) eswt_control_pane_g1_copy3

0x4c45,	// (0x00049d8f) eswt_control_pane_g2_copy3_ParamLimits

0x4c45,	// (0x00049d8f) eswt_control_pane_g2_copy3

0x4c52,	// (0x00049d9c) eswt_control_pane_g3_copy3_ParamLimits

0x4c52,	// (0x00049d9c) eswt_control_pane_g3_copy3

0x4c5f,	// (0x00049da9) eswt_control_pane_g4_copy3_ParamLimits

0x4c5f,	// (0x00049da9) eswt_control_pane_g4_copy3

0xb7b5,	// (0x000508ff) common_borders_pane_cp5

0x4ce0,	// (0x00049e2a) separator_vertical_pane_g1

0x4ce9,	// (0x00049e33) separator_vertical_pane_g2

0x4cf2,	// (0x00049e3c) separator_vertical_pane_g3

0x0002,

0xfac1,	// (0x00054c0b) separator_vertical_pane_g

0x4c38,	// (0x00049d82) eswt_control_pane_g1_copy4_ParamLimits

0x4c38,	// (0x00049d82) eswt_control_pane_g1_copy4

0x4c45,	// (0x00049d8f) eswt_control_pane_g2_copy4_ParamLimits

0x4c45,	// (0x00049d8f) eswt_control_pane_g2_copy4

0x4c52,	// (0x00049d9c) eswt_control_pane_g3_copy4_ParamLimits

0x4c52,	// (0x00049d9c) eswt_control_pane_g3_copy4

0x4c5f,	// (0x00049da9) eswt_control_pane_g4_copy4_ParamLimits

0x4c5f,	// (0x00049da9) eswt_control_pane_g4_copy4

0xab02,	// (0x0004fc4c) eswt_ctrl_combo_button_pane

0xab0a,	// (0x0004fc54) eswt_ctrl_input_pane

0xab12,	// (0x0004fc5c) popup_choice_list_window_cp70

0xab1a,	// (0x0004fc64) eswt_ctrl_input_pane_t1

0xb7b5,	// (0x000508ff) input_focus_pane_cp70

0xef8e,	// (0x000540d8) bg_button_pane_cp70_ParamLimits

0xef8e,	// (0x000540d8) bg_button_pane_cp70

0xab28,	// (0x0004fc72) eswt_ctrl_combo_button_pane_g1

0x4d29,	// (0x00049e73) wait_bar_pane_cp70

0xd275,	// (0x000523bf) bg_popup_window_pane_cp70_ParamLimits

0xd275,	// (0x000523bf) bg_popup_window_pane_cp70

0x4d31,	// (0x00049e7b) popup_eswt_tasktip_window_t1

0x4d47,	// (0x00049e91) wait_bar_pane_cp71_ParamLimits

0x4d47,	// (0x00049e91) wait_bar_pane_cp71

0x4d53,	// (0x00049e9d) grid_eswt_app_pane

0xc555,	// (0x0005169f) scroll_pane_cp70

0xab30,	// (0x0004fc7a) cell_eswt_app_pane_ParamLimits

0xab30,	// (0x0004fc7a) cell_eswt_app_pane

0xab5a,	// (0x0004fca4) cell_eswt_app_pane_g1_ParamLimits

0xab5a,	// (0x0004fca4) cell_eswt_app_pane_g1

0xab89,	// (0x0004fcd3) cell_eswt_app_pane_g2_ParamLimits

0xab89,	// (0x0004fcd3) cell_eswt_app_pane_g2

0x0001,

0x0378,	// (0x000454c2) cell_eswt_app_pane_g_ParamLimits

0x0378,	// (0x000454c2) cell_eswt_app_pane_g

0xabb2,	// (0x0004fcfc) cell_eswt_app_pane_t1_ParamLimits

0xabb2,	// (0x0004fcfc) cell_eswt_app_pane_t1

0x4e1a,	// (0x00049f64) grid_highlight_pane_cp70_ParamLimits

0x4e1a,	// (0x00049f64) grid_highlight_pane_cp70

0xcb06,	// (0x00051c50) set_content_pane_g1

0xce1c,	// (0x00051f66) status_small_volume_pane

0x1d77,	// (0x00046ec1) status_small_volume_pane_g1

0x1d7f,	// (0x00046ec9) volume_small2_pane

0x1d88,	// (0x00046ed2) volume_small2_pane_g1

0x1d91,	// (0x00046edb) volume_small2_pane_g2

0x1d9a,	// (0x00046ee4) volume_small2_pane_g3

0x1da3,	// (0x00046eed) volume_small2_pane_g4

0x1dac,	// (0x00046ef6) volume_small2_pane_g5

0x1db5,	// (0x00046eff) volume_small2_pane_g6

0x1dbe,	// (0x00046f08) volume_small2_pane_g7

0x1dc7,	// (0x00046f11) volume_small2_pane_g8

0x1dd0,	// (0x00046f1a) volume_small2_pane_g9

0x1dd9,	// (0x00046f23) volume_small2_pane_g10

0x0009,

0xfac8,	// (0x00054c12) volume_small2_pane_g

0xf33f,	// (0x00054489) fep_vkb_top_text_pane_g1_ParamLimits

0xaa8c,	// (0x0004fbd6) fep_vkb_top_text_pane_t1_ParamLimits

0xf51f,	// (0x00054669) popup_preview_fixed_window_g3_ParamLimits

0xf51f,	// (0x00054669) popup_preview_fixed_window_g3

0x9ef6,	// (0x0004f040) popup_toolbar_trans_pane

0xa5b5,	// (0x0004f6ff) aid_height_set_list_ParamLimits

0xd8bf,	// (0x00052a09) aid_size_parent_ParamLimits

0xc355,	// (0x0005149f) list_highlight_pane_cp2_ParamLimits

0xcb06,	// (0x00051c50) set_content_pane_g1_ParamLimits

0x8fd4,	// (0x0004e11e) list_single_image_pane_ParamLimits

0x8fd4,	// (0x0004e11e) list_single_image_pane

0xabe4,	// (0x0004fd2e) aid_size_cell_image_ParamLimits

0xabe4,	// (0x0004fd2e) aid_size_cell_image

0xabf1,	// (0x0004fd3b) grid_single_image_pane_ParamLimits

0xabf1,	// (0x0004fd3b) grid_single_image_pane

0xc1a5,	// (0x000512ef) list_single_image_pane_g1_ParamLimits

0xc1a5,	// (0x000512ef) list_single_image_pane_g1

0xc224,	// (0x0005136e) list_single_image_pane_g2_ParamLimits

0xc224,	// (0x0005136e) list_single_image_pane_g2

0x0001,

0x0392,	// (0x000454dc) list_single_image_pane_g_ParamLimits

0x0392,	// (0x000454dc) list_single_image_pane_g

0x4e3f,	// (0x00049f89) list_single_image_pane_t1_ParamLimits

0x4e3f,	// (0x00049f89) list_single_image_pane_t1

0xabfd,	// (0x0004fd47) cell_image_list_pane_ParamLimits

0xabfd,	// (0x0004fd47) cell_image_list_pane

0xac11,	// (0x0004fd5b) cell_image_list_pane_g1

0xac1a,	// (0x0004fd64) cell_image_list_pane_g2

0x0001,

0x0397,	// (0x000454e1) cell_image_list_pane_g

0x4e7b,	// (0x00049fc5) aid_size_cell_tb_trans_pane

0xc20a,	// (0x00051354) bg_tb_trans_pane

0x4e8d,	// (0x00049fd7) grid_tb_trans_pane

0xd177,	// (0x000522c1) bg_tb_trans_pane_g1

0xd187,	// (0x000522d1) bg_tb_trans_pane_g2

0xd17f,	// (0x000522c9) bg_tb_trans_pane_g3

0xd197,	// (0x000522e1) bg_tb_trans_pane_g4

0xd18f,	// (0x000522d9) bg_tb_trans_pane_g5

0xd1b7,	// (0x00052301) bg_tb_trans_pane_g6

0xd1af,	// (0x000522f9) bg_tb_trans_pane_g7

0xd19f,	// (0x000522e9) bg_tb_trans_pane_g8

0xd1a7,	// (0x000522f1) bg_tb_trans_pane_g9

0x0008,

0xfadd,	// (0x00054c27) bg_tb_trans_pane_g

0x4ea1,	// (0x00049feb) cell_toolbar_trans_pane_ParamLimits

0x4ea1,	// (0x00049feb) cell_toolbar_trans_pane

0xefc9,	// (0x00054113) cell_toolbar_trans_pane_g1

0xa931,	// (0x0004fa7b) list_form2_midp_pane_t1

0xa93f,	// (0x0004fa89) list_form2_midp_pane_t2

0x0001,

0x0245,	// (0x0004538f) list_form2_midp_pane_t

0xed27,	// (0x00053e71) scroll_pane_cp51_ParamLimits

0xee9d,	// (0x00053fe7) form2_midp_wait_pane_g1

0xeea6,	// (0x00053ff0) form2_midp_wait_pane_g2

0xeeaf,	// (0x00053ff9) form2_midp_wait_pane_g3

0x0002,

0x025a,	// (0x000453a4) form2_midp_wait_pane_g

0xb825,	// (0x0005096f) list_highlight_pane_cp21_ParamLimits

0xeecf,	// (0x00054019) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeede,	// (0x00054028) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe3b0,	// (0x000534fa) list_single_2graphic_im_pane_ParamLimits

0xe3b0,	// (0x000534fa) list_single_2graphic_im_pane

0xac23,	// (0x0004fd6d) list_single_2graphic_im_pane_g1_ParamLimits

0xac23,	// (0x0004fd6d) list_single_2graphic_im_pane_g1

0xac34,	// (0x0004fd7e) list_single_2graphic_im_pane_g2_ParamLimits

0xac34,	// (0x0004fd7e) list_single_2graphic_im_pane_g2

0xac40,	// (0x0004fd8a) list_single_2graphic_im_pane_g3_ParamLimits

0xac40,	// (0x0004fd8a) list_single_2graphic_im_pane_g3

0x0003,

0xfaf0,	// (0x00054c3a) list_single_2graphic_im_pane_g_ParamLimits

0xfaf0,	// (0x00054c3a) list_single_2graphic_im_pane_g

0xac54,	// (0x0004fd9e) list_single_2graphic_im_pane_t1_ParamLimits

0xac54,	// (0x0004fd9e) list_single_2graphic_im_pane_t1

0xf52b,	// (0x00054675) list_single_graphic_2heading_pane_fp_ParamLimits

0xf52b,	// (0x00054675) list_single_graphic_2heading_pane_fp

0x354f,	// (0x00048699) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x354f,	// (0x00048699) list_single_graphic_2heading_pane_fp_g1

0xf542,	// (0x0005468c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf542,	// (0x0005468c) list_single_graphic_2heading_pane_fp_g2

0x2a23,	// (0x00047b6d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2a23,	// (0x00047b6d) list_single_graphic_2heading_pane_fp_g3

0x3524,	// (0x0004866e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3524,	// (0x0004866e) list_single_graphic_2heading_pane_fp_g4

0xf54e,	// (0x00054698) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf54e,	// (0x00054698) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfa26,	// (0x00054b70) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfa26,	// (0x00054b70) list_single_graphic_2heading_pane_fp_g

0x371c,	// (0x00048866) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x371c,	// (0x00048866) list_single_graphic_2heading_pane_fp_t1

0x3587,	// (0x000486d1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3587,	// (0x000486d1) list_single_graphic_2heading_pane_fp_t2

0x3732,	// (0x0004887c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3732,	// (0x0004887c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfaf9,	// (0x00054c43) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfaf9,	// (0x00054c43) list_single_graphic_2heading_pane_fp_t

0xf04b,	// (0x00054195) fep_hwr_write_pane_g5_ParamLimits

0xf04b,	// (0x00054195) fep_hwr_write_pane_g5

0xf057,	// (0x000541a1) fep_hwr_write_pane_g6_ParamLimits

0xf057,	// (0x000541a1) fep_hwr_write_pane_g6

0x4c07,	// (0x00049d51) eswt_shell_pane_ParamLimits

0xd275,	// (0x000523bf) bg_popup_window_pane_cp18_ParamLimits

0xe2e1,	// (0x0005342b) heading_pane_cp70

0x4d31,	// (0x00049e7b) popup_eswt_tasktip_window_t1_ParamLimits

0x9fbe,	// (0x0004f108) aid_touch_tab_arrow_left

0x9fd4,	// (0x0004f11e) aid_touch_tab_arrow_right

0x9218,	// (0x0004e362) title_pane_g3_ParamLimits

0x9218,	// (0x0004e362) title_pane_g3

0xc1c9,	// (0x00051313) set_value_pane_g1

0x9ef6,	// (0x0004f040) popup_toolbar_trans_pane_ParamLimits

0x4e7b,	// (0x00049fc5) aid_size_cell_tb_trans_pane_ParamLimits

0xc20a,	// (0x00051354) bg_tb_trans_pane_ParamLimits

0x4e8d,	// (0x00049fd7) grid_tb_trans_pane_ParamLimits

0xbc07,	// (0x00050d51) cont_note_pane_ParamLimits

0xbc07,	// (0x00050d51) cont_note_pane

0xbf79,	// (0x000510c3) cont_snote2_single_text_pane_ParamLimits

0xbf79,	// (0x000510c3) cont_snote2_single_text_pane

0xbf79,	// (0x000510c3) cont_snote2_single_graphic_pane_ParamLimits

0xbf79,	// (0x000510c3) cont_snote2_single_graphic_pane

0xd732,	// (0x0005287c) cont_note_wait_pane_ParamLimits

0xd732,	// (0x0005287c) cont_note_wait_pane

0xd732,	// (0x0005287c) cont_note_image_pane_ParamLimits

0xd732,	// (0x0005287c) cont_note_image_pane

0x4f35,	// (0x0004a07f) popup_note2_window_g1_ParamLimits

0x4f35,	// (0x0004a07f) popup_note2_window_g1

0x4f66,	// (0x0004a0b0) popup_note2_window_t1_ParamLimits

0x4f66,	// (0x0004a0b0) popup_note2_window_t1

0x4fab,	// (0x0004a0f5) popup_note2_window_t2_ParamLimits

0x4fab,	// (0x0004a0f5) popup_note2_window_t2

0x4ff0,	// (0x0004a13a) popup_note2_window_t3_ParamLimits

0x4ff0,	// (0x0004a13a) popup_note2_window_t3

0x5035,	// (0x0004a17f) popup_note2_window_t4_ParamLimits

0x5035,	// (0x0004a17f) popup_note2_window_t4

0xbc7f,	// (0x00050dc9) popup_note2_window_t5_ParamLimits

0xbc7f,	// (0x00050dc9) popup_note2_window_t5

0x0004,

0xfb05,	// (0x00054c4f) popup_note2_window_t_ParamLimits

0xfb05,	// (0x00054c4f) popup_note2_window_t

0x5064,	// (0x0004a1ae) popup_note2_image_window_g1_ParamLimits

0x5064,	// (0x0004a1ae) popup_note2_image_window_g1

0x5070,	// (0x0004a1ba) popup_note2_image_window_g2_ParamLimits

0x5070,	// (0x0004a1ba) popup_note2_image_window_g2

0x0001,

0xfb10,	// (0x00054c5a) popup_note2_image_window_g_ParamLimits

0xfb10,	// (0x00054c5a) popup_note2_image_window_g

0x5082,	// (0x0004a1cc) popup_note2_image_window_t1_ParamLimits

0x5082,	// (0x0004a1cc) popup_note2_image_window_t1

0x509a,	// (0x0004a1e4) popup_note2_image_window_t2_ParamLimits

0x509a,	// (0x0004a1e4) popup_note2_image_window_t2

0x50b2,	// (0x0004a1fc) popup_note2_image_window_t3_ParamLimits

0x50b2,	// (0x0004a1fc) popup_note2_image_window_t3

0x0002,

0xfb15,	// (0x00054c5f) popup_note2_image_window_t_ParamLimits

0xfb15,	// (0x00054c5f) popup_note2_image_window_t

0xd740,	// (0x0005288a) popup_note2_wait_window_g1_ParamLimits

0xd740,	// (0x0005288a) popup_note2_wait_window_g1

0xd74c,	// (0x00052896) popup_note2_wait_window_g2_ParamLimits

0xd74c,	// (0x00052896) popup_note2_wait_window_g2

0xd758,	// (0x000528a2) popup_note2_wait_window_g3_ParamLimits

0xd758,	// (0x000528a2) popup_note2_wait_window_g3

0x0002,

0xf859,	// (0x000549a3) popup_note2_wait_window_g_ParamLimits

0xf859,	// (0x000549a3) popup_note2_wait_window_g

0x50ce,	// (0x0004a218) popup_note2_wait_window_t1_ParamLimits

0x50ce,	// (0x0004a218) popup_note2_wait_window_t1

0x50ec,	// (0x0004a236) popup_note2_wait_window_t2_ParamLimits

0x50ec,	// (0x0004a236) popup_note2_wait_window_t2

0x510a,	// (0x0004a254) popup_note2_wait_window_t3_ParamLimits

0x510a,	// (0x0004a254) popup_note2_wait_window_t3

0x511c,	// (0x0004a266) popup_note2_wait_window_t4_ParamLimits

0x511c,	// (0x0004a266) popup_note2_wait_window_t4

0x0003,

0xfb1c,	// (0x00054c66) popup_note2_wait_window_t_ParamLimits

0xfb1c,	// (0x00054c66) popup_note2_wait_window_t

0x512e,	// (0x0004a278) wait_bar2_pane_ParamLimits

0x512e,	// (0x0004a278) wait_bar2_pane

0x5146,	// (0x0004a290) popup_snote2_single_text_window_g1_ParamLimits

0x5146,	// (0x0004a290) popup_snote2_single_text_window_g1

0x516e,	// (0x0004a2b8) popup_snote2_single_text_window_t1_ParamLimits

0x516e,	// (0x0004a2b8) popup_snote2_single_text_window_t1

0x51ba,	// (0x0004a304) popup_snote2_single_text_window_t2_ParamLimits

0x51ba,	// (0x0004a304) popup_snote2_single_text_window_t2

0x5206,	// (0x0004a350) popup_snote2_single_text_window_t3_ParamLimits

0x5206,	// (0x0004a350) popup_snote2_single_text_window_t3

0x5247,	// (0x0004a391) popup_snote2_single_text_window_t4_ParamLimits

0x5247,	// (0x0004a391) popup_snote2_single_text_window_t4

0x527d,	// (0x0004a3c7) popup_snote2_single_text_window_t5_ParamLimits

0x527d,	// (0x0004a3c7) popup_snote2_single_text_window_t5

0x0004,

0xfb25,	// (0x00054c6f) popup_snote2_single_text_window_t_ParamLimits

0xfb25,	// (0x00054c6f) popup_snote2_single_text_window_t

0x52a8,	// (0x0004a3f2) popup_snote2_single_graphic_window_g1_ParamLimits

0x52a8,	// (0x0004a3f2) popup_snote2_single_graphic_window_g1

0x52d0,	// (0x0004a41a) popup_snote2_single_graphic_window_g2_ParamLimits

0x52d0,	// (0x0004a41a) popup_snote2_single_graphic_window_g2

0x0001,

0xfb30,	// (0x00054c7a) popup_snote2_single_graphic_window_g_ParamLimits

0xfb30,	// (0x00054c7a) popup_snote2_single_graphic_window_g

0x52f8,	// (0x0004a442) popup_snote2_single_graphic_window_t1_ParamLimits

0x52f8,	// (0x0004a442) popup_snote2_single_graphic_window_t1

0x5344,	// (0x0004a48e) popup_snote2_single_graphic_window_t2_ParamLimits

0x5344,	// (0x0004a48e) popup_snote2_single_graphic_window_t2

0x5206,	// (0x0004a350) popup_snote2_single_graphic_window_t3_ParamLimits

0x5206,	// (0x0004a350) popup_snote2_single_graphic_window_t3

0x5247,	// (0x0004a391) popup_snote2_single_graphic_window_t4_ParamLimits

0x5247,	// (0x0004a391) popup_snote2_single_graphic_window_t4

0x527d,	// (0x0004a3c7) popup_snote2_single_graphic_window_t5_ParamLimits

0x527d,	// (0x0004a3c7) popup_snote2_single_graphic_window_t5

0x0004,

0xfb35,	// (0x00054c7f) popup_snote2_single_graphic_window_t_ParamLimits

0xfb35,	// (0x00054c7f) popup_snote2_single_graphic_window_t

0xecb9,	// (0x00053e03) clock_nsta_pane_cp2_t1

0xecb9,	// (0x00053e03) clock_nsta_pane_cp2_t2

0x0001,

0x021b,	// (0x00045365) clock_nsta_pane_cp2_t

0x2bd7,	// (0x00047d21) form_field_data_wide_pane_g1_ParamLimits

0xc1a5,	// (0x000512ef) form_field_data_wide_pane_g2_ParamLimits

0xc1a5,	// (0x000512ef) form_field_data_wide_pane_g2

0xc224,	// (0x0005136e) form_field_data_wide_pane_g3_ParamLimits

0xc224,	// (0x0005136e) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x000547e2) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x000547e2) form_field_data_wide_pane_g

0xa865,	// (0x0004f9af) grid_touch_3_pane_ParamLimits

0xa865,	// (0x0004f9af) grid_touch_3_pane

0xac85,	// (0x0004fdcf) cell_touch_3_pane_ParamLimits

0xac85,	// (0x0004fdcf) cell_touch_3_pane

0xefc9,	// (0x00054113) cell_touch_3_pane_g1

0xefc9,	// (0x00054113) cell_touch_3_pane_g2

0x0001,

0x02a0,	// (0x000453ea) cell_touch_3_pane_g

0xbcb1,	// (0x00050dfb) cont_query_data_pane

0xbcb9,	// (0x00050e03) cont_query_data_pane_cp1

0x53bf,	// (0x0004a509) button_value_adjust_pane_cp7

0x53c7,	// (0x0004a511) query_popup_pane_cp3

0xc780,	// (0x000518ca) bg_popup_sub_pane_cp22_ParamLimits

0x116b,	// (0x000462b5) navi_navi_volume_pane_cp2

0x1186,	// (0x000462d0) popup_side_volume_key_window_g2

0x1195,	// (0x000462df) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00054878) popup_side_volume_key_window_g

0x11b2,	// (0x000462fc) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0005487f) popup_side_volume_key_window_t

0xc9d0,	// (0x00051b1a) popup_side_volume_key_window_ParamLimits

0x8ca5,	// (0x0004ddef) list_double_graphic_pane_g4_ParamLimits

0x8ca5,	// (0x0004ddef) list_double_graphic_pane_g4

0x8fc0,	// (0x0004e10a) list_single_2heading_msg_pane_ParamLimits

0x8fc0,	// (0x0004e10a) list_single_2heading_msg_pane

0x901c,	// (0x0004e166) list_single_2heading_msg_pane_g1_ParamLimits

0x901c,	// (0x0004e166) list_single_2heading_msg_pane_g1

0x9028,	// (0x0004e172) list_single_2heading_msg_pane_g2_ParamLimits

0x9028,	// (0x0004e172) list_single_2heading_msg_pane_g2

0x903b,	// (0x0004e185) list_single_2heading_msg_pane_g3_ParamLimits

0x903b,	// (0x0004e185) list_single_2heading_msg_pane_g3

0x9047,	// (0x0004e191) list_single_2heading_msg_pane_g4_ParamLimits

0x9047,	// (0x0004e191) list_single_2heading_msg_pane_g4

0x0003,

0xfb40,	// (0x00054c8a) list_single_2heading_msg_pane_g_ParamLimits

0xfb40,	// (0x00054c8a) list_single_2heading_msg_pane_g

0x905f,	// (0x0004e1a9) list_single_2heading_msg_pane_t1_ParamLimits

0x905f,	// (0x0004e1a9) list_single_2heading_msg_pane_t1

0x9087,	// (0x0004e1d1) list_single_2heading_msg_pane_t2_ParamLimits

0x9087,	// (0x0004e1d1) list_single_2heading_msg_pane_t2

0x90f2,	// (0x0004e23c) list_single_2heading_msg_pane_t3_ParamLimits

0x90f2,	// (0x0004e23c) list_single_2heading_msg_pane_t3

0x37e7,	// (0x00048931) list_single_2heading_msg_pane_t4_ParamLimits

0x37e7,	// (0x00048931) list_single_2heading_msg_pane_t4

0x0003,

0xfb49,	// (0x00054c93) list_single_2heading_msg_pane_t_ParamLimits

0xfb49,	// (0x00054c93) list_single_2heading_msg_pane_t

0xb7d3,	// (0x0005091d) title_pane_g4_ParamLimits

0xb7d3,	// (0x0005091d) title_pane_g4

0x0f79,	// (0x000460c3) title_pane_stacon_g3_ParamLimits

0x0f79,	// (0x000460c3) title_pane_stacon_g3

0x4ef8,	// (0x0004a042) list_single_2graphic_im_pane_g4_ParamLimits

0x4ef8,	// (0x0004a042) list_single_2graphic_im_pane_g4

0xe0ef,	// (0x00053239) popup_side_volume_key_window_cp

0xe5e0,	// (0x0005372a) main_idle_act2_pane_t1

0x1526,	// (0x00046670) toolbar_button_pane_g10

0x9587,	// (0x0004e6d1) popup_toolbar_window_cp1

0xecaa,	// (0x00053df4) clock_nsta_pane_cp_t1

0xecaa,	// (0x00053df4) clock_nsta_pane_cp_t2

0x0001,

0x0216,	// (0x00045360) clock_nsta_pane_cp_t

0x116b,	// (0x000462b5) navi_navi_volume_pane_cp2_ParamLimits

0x117a,	// (0x000462c4) popup_side_volume_key_window_g1_ParamLimits

0x1186,	// (0x000462d0) popup_side_volume_key_window_g2_ParamLimits

0x1195,	// (0x000462df) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00054878) popup_side_volume_key_window_g_ParamLimits

0x19e3,	// (0x00046b2d) fep_hwr_aid_pane

0x1a8a,	// (0x00046bd4) bg_fep_hwr_top_pane_g4_ParamLimits

0xf01b,	// (0x00054165) fep_hwr_top_pane_g1_ParamLimits

0xf02d,	// (0x00054177) fep_hwr_top_pane_g2_ParamLimits

0x1aaa,	// (0x00046bf4) fep_hwr_top_pane_g3_ParamLimits

0xf9e3,	// (0x00054b2d) fep_hwr_top_pane_g_ParamLimits

0x1abf,	// (0x00046c09) fep_hwr_top_text_pane_ParamLimits

0xde98,	// (0x00052fe2) aid_touch_tab_arrow_arrow_2

0xdea1,	// (0x00052feb) aid_touch_tab_arrow_left_2

0x19f7,	// (0x00046b41) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1a2e,	// (0x00046b78) fep_hwr_prediction_pane

0xf182,	// (0x000542cc) fep_vkb_prediction_pane

0xaa6c,	// (0x0004fbb6) fep_vkb_side_pane_g3_ParamLimits

0xaa6c,	// (0x0004fbb6) fep_vkb_side_pane_g3

0x1c3a,	// (0x00046d84) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1ca6,	// (0x00046df0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1cb3,	// (0x00046dfd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfa5e,	// (0x00054ba8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1de2,	// (0x00046f2c) fep_hwr_prediction_pane_g1

0x1dec,	// (0x00046f36) fep_hwr_prediction_pane_g2

0x1df4,	// (0x00046f3e) fep_hwr_prediction_pane_g3

0x1dfc,	// (0x00046f46) fep_hwr_prediction_pane_g4

0x0003,

0xfb52,	// (0x00054c9c) fep_hwr_prediction_pane_g

0x53ec,	// (0x0004a536) fep_vkb_prediction_pane_g1

0x53f6,	// (0x0004a540) fep_vkb_prediction_pane_g2

0x53fe,	// (0x0004a548) fep_vkb_prediction_pane_g3

0x5406,	// (0x0004a550) fep_vkb_prediction_pane_g4

0x0003,

0xfb5b,	// (0x00054ca5) fep_vkb_prediction_pane_g

0x1812,	// (0x0004695c) slider_set_pane_g3

0x1826,	// (0x00046970) slider_set_pane_g4

0x183e,	// (0x00046988) slider_set_pane_g5

0x1812,	// (0x0004695c) slider_set_pane_g6

0x1854,	// (0x0004699e) slider_set_pane_g7

0xe366,	// (0x000534b0) slider_form_pane_g3

0xe36f,	// (0x000534b9) slider_form_pane_g4

0xe377,	// (0x000534c1) slider_form_pane_g5

0xe366,	// (0x000534b0) slider_form_pane_g6

0xa6fc,	// (0x0004f846) slider_form_pane_g7

0xe87e,	// (0x000539c8) slider_set_pane_vc_g3

0xe887,	// (0x000539d1) slider_set_pane_vc_g4

0xe890,	// (0x000539da) slider_set_pane_vc_g5

0xe87e,	// (0x000539c8) slider_set_pane_vc_g6

0xe899,	// (0x000539e3) slider_set_pane_vc_g7

0xe87e,	// (0x000539c8) slider_form_pane_vc_g1

0xe887,	// (0x000539d1) slider_form_pane_vc_g2

0xe890,	// (0x000539da) slider_form_pane_vc_g3

0xe87e,	// (0x000539c8) slider_form_pane_vc_g4

0xea22,	// (0x00053b6c) slider_form_pane_vc_g5

0x0004,

0x01ef,	// (0x00045339) slider_form_pane_vc_g

0xb7b5,	// (0x000508ff) main_idle_act3_pane

0x540e,	// (0x0004a558) ai3_links_pane

0xaccf,	// (0x0004fe19) popup_ai3_data_window_ParamLimits

0xaccf,	// (0x0004fe19) popup_ai3_data_window

0xb7b5,	// (0x000508ff) grid_ai3_links_pane

0xace7,	// (0x0004fe31) cell_ai3_links_pane_ParamLimits

0xace7,	// (0x0004fe31) cell_ai3_links_pane

0x5447,	// (0x0004a591) bg_popup_sub_pane_cp11

0x5454,	// (0x0004a59e) cell_ai3_links_pane_g1

0xb7b5,	// (0x000508ff) bg_popup_sub_pane_cp12

0x5479,	// (0x0004a5c3) heading_ai3_data_pane

0x5481,	// (0x0004a5cb) list_ai3_gene_pane

0x548d,	// (0x0004a5d7) popup_ai3_data_window_g1

0x5495,	// (0x0004a5df) heading_ai3_data_pane_g1

0x549d,	// (0x0004a5e7) heading_ai3_data_pane_t1

0x54ab,	// (0x0004a5f5) list_double_ai3_gene_pane_ParamLimits

0x54ab,	// (0x0004a5f5) list_double_ai3_gene_pane

0x54b8,	// (0x0004a602) list_single_ai3_gene_pane_ParamLimits

0x54b8,	// (0x0004a602) list_single_ai3_gene_pane

0xef8e,	// (0x000540d8) list_highlight_pane_cp7_ParamLimits

0xef8e,	// (0x000540d8) list_highlight_pane_cp7

0x54c5,	// (0x0004a60f) list_single_a13_gene_pane_t1_ParamLimits

0x54c5,	// (0x0004a60f) list_single_a13_gene_pane_t1

0x54dc,	// (0x0004a626) list_single_ai3_gene_pane_g1

0x54e5,	// (0x0004a62f) list_single_ai3_gene_pane_g2

0x0001,

0xfb64,	// (0x00054cae) list_single_ai3_gene_pane_g

0x54ed,	// (0x0004a637) list_double_ai3_gene_pane_g1_ParamLimits

0x54ed,	// (0x0004a637) list_double_ai3_gene_pane_g1

0x54f9,	// (0x0004a643) list_double_ai3_gene_pane_t1_ParamLimits

0x54f9,	// (0x0004a643) list_double_ai3_gene_pane_t1

0x5515,	// (0x0004a65f) list_double_ai3_gene_pane_t2_ParamLimits

0x5515,	// (0x0004a65f) list_double_ai3_gene_pane_t2

0x552a,	// (0x0004a674) list_double_ai3_gene_pane_t3_ParamLimits

0x552a,	// (0x0004a674) list_double_ai3_gene_pane_t3

0x0002,

0xfb69,	// (0x00054cb3) list_double_ai3_gene_pane_t_ParamLimits

0xfb69,	// (0x00054cb3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3748,	// (0x00048892) aid_size_min_col_2

0xacb9,	// (0x0004fe03) aid_size_min_msg_ParamLimits

0xacb9,	// (0x0004fe03) aid_size_min_msg

0xaa80,	// (0x0004fbca) fep_vkb_top_text_pane_g2_ParamLimits

0xaa80,	// (0x0004fbca) fep_vkb_top_text_pane_g2

0x0001,

0x029b,	// (0x000453e5) fep_vkb_top_text_pane_g_ParamLimits

0x029b,	// (0x000453e5) fep_vkb_top_text_pane_g

0xb7b5,	// (0x000508ff) main_hc_apps_shell_pane

0x5547,	// (0x0004a691) grid_hc_apps_pane_ParamLimits

0x5547,	// (0x0004a691) grid_hc_apps_pane

0x5556,	// (0x0004a6a0) list_hc_apps_pane

0x555e,	// (0x0004a6a8) scroll_pane_cp37_ParamLimits

0x555e,	// (0x0004a6a8) scroll_pane_cp37

0xad01,	// (0x0004fe4b) cell_hc_apps_pane_ParamLimits

0xad01,	// (0x0004fe4b) cell_hc_apps_pane

0xadc1,	// (0x0004ff0b) cell_hc_apps_pane_g1_ParamLimits

0xadc1,	// (0x0004ff0b) cell_hc_apps_pane_g1

0x564b,	// (0x0004a795) cell_hc_apps_pane_g2_ParamLimits

0x564b,	// (0x0004a795) cell_hc_apps_pane_g2

0x5667,	// (0x0004a7b1) cell_hc_apps_pane_g3_ParamLimits

0x5667,	// (0x0004a7b1) cell_hc_apps_pane_g3

0x0002,

0xfb70,	// (0x00054cba) cell_hc_apps_pane_g_ParamLimits

0xfb70,	// (0x00054cba) cell_hc_apps_pane_g

0xadee,	// (0x0004ff38) cell_hc_apps_pane_t1_ParamLimits

0xadee,	// (0x0004ff38) cell_hc_apps_pane_t1

0xbc07,	// (0x00050d51) grid_highlight_pane_cp10_ParamLimits

0xbc07,	// (0x00050d51) grid_highlight_pane_cp10

0xae2c,	// (0x0004ff76) list_single_hc_apps_pane_ParamLimits

0xae2c,	// (0x0004ff76) list_single_hc_apps_pane

0xae5f,	// (0x0004ffa9) list_single_hc_apps_pane_g1

0x9160,	// (0x0004e2aa) list_single_hc_apps_pane_g2

0x0001,

0xfb77,	// (0x00054cc1) list_single_hc_apps_pane_g

0x9179,	// (0x0004e2c3) list_single_hc_apps_pane_g2_copy1

0x9195,	// (0x0004e2df) list_single_hc_apps_pane_t1

0xb825,	// (0x0005096f) bg_set_opt_pane_cp_ParamLimits

0x0aaa,	// (0x00045bf4) setting_slider_pane_t1_ParamLimits

0x0ac3,	// (0x00045c0d) setting_slider_pane_t2_ParamLimits

0x0adc,	// (0x00045c26) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x000546c0) setting_slider_pane_t_ParamLimits

0x0af3,	// (0x00045c3d) slider_set_pane_ParamLimits

0x1410,	// (0x0004655a) control_pane_g5_ParamLimits

0x1410,	// (0x0004655a) control_pane_g5

0xe328,	// (0x00053472) slider_set_pane_g1_ParamLimits

0x1806,	// (0x00046950) slider_set_pane_g2_ParamLimits

0x1812,	// (0x0004695c) slider_set_pane_g3_ParamLimits

0x1826,	// (0x00046970) slider_set_pane_g4_ParamLimits

0x183e,	// (0x00046988) slider_set_pane_g5_ParamLimits

0x1812,	// (0x0004695c) slider_set_pane_g6_ParamLimits

0x1854,	// (0x0004699e) slider_set_pane_g7_ParamLimits

0xf959,	// (0x00054aa3) slider_set_pane_g_ParamLimits

0xcab1,	// (0x00051bfb) navi_icon_text_pane_ParamLimits

0x9f87,	// (0x0004f0d1) aid_fill_nsta_2_ParamLimits

0x9fbe,	// (0x0004f108) aid_touch_tab_arrow_left_ParamLimits

0x9fd4,	// (0x0004f11e) aid_touch_tab_arrow_right_ParamLimits

0xa06f,	// (0x0004f1b9) clock_nsta_pane_ParamLimits

0xde7a,	// (0x00052fc4) navi_icon_pane_g1_ParamLimits

0xde86,	// (0x00052fd0) navi_text_pane_t1_ParamLimits

0xed01,	// (0x00053e4b) navi_icon_text_pane_g1_ParamLimits

0xed0d,	// (0x00053e57) navi_icon_text_pane_t1_ParamLimits

0xae5f,	// (0x0004ffa9) list_single_hc_apps_pane_g1_ParamLimits

0x9160,	// (0x0004e2aa) list_single_hc_apps_pane_g2_ParamLimits

0xfb77,	// (0x00054cc1) list_single_hc_apps_pane_g_ParamLimits

0x9179,	// (0x0004e2c3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9195,	// (0x0004e2df) list_single_hc_apps_pane_t1_ParamLimits

0x8129,	// (0x0004d273) popup_toolbar2_fixed_window_ParamLimits

0x8129,	// (0x0004d273) popup_toolbar2_fixed_window

0x9eec,	// (0x0004f036) popup_toolbar2_float_window

0xb7b5,	// (0x000508ff) bg_popup_sub_pane_cp27

0x5755,	// (0x0004a89f) grid_toolbar2_float_pane

0xb7b5,	// (0x000508ff) bg_popup_sub_pane_cp26

0x5755,	// (0x0004a89f) grid_toolbar2_fixed_pane

0xae78,	// (0x0004ffc2) cell_toolbar2_fixed_pane_ParamLimits

0xae78,	// (0x0004ffc2) cell_toolbar2_fixed_pane

0xae92,	// (0x0004ffdc) cell_toolbar2_fixed_pane_g1

0x5777,	// (0x0004a8c1) toolbar2_fixed_button_pane

0xd177,	// (0x000522c1) toolbar2_fixed_button_pane_g1

0xd187,	// (0x000522d1) toolbar2_fixed_button_pane_g2

0xd17f,	// (0x000522c9) toolbar2_fixed_button_pane_g3

0xd197,	// (0x000522e1) toolbar2_fixed_button_pane_g4

0xd18f,	// (0x000522d9) toolbar2_fixed_button_pane_g5

0xd19f,	// (0x000522e9) toolbar2_fixed_button_pane_g6

0xd1a7,	// (0x000522f1) toolbar2_fixed_button_pane_g7

0xd1b7,	// (0x00052301) toolbar2_fixed_button_pane_g8

0xd1af,	// (0x000522f9) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x000549c1) toolbar2_fixed_button_pane_g

0x577f,	// (0x0004a8c9) cell_toolbar2_float_pane_ParamLimits

0x577f,	// (0x0004a8c9) cell_toolbar2_float_pane

0x5790,	// (0x0004a8da) cell_toolbar2_float_pane_g1

0x5777,	// (0x0004a8c1) toolbar2_fixed_button_pane_cp

0xaa33,	// (0x0004fb7d) fep_vkb_accented_list_pane_ParamLimits

0xaa33,	// (0x0004fb7d) fep_vkb_accented_list_pane

0x1c1a,	// (0x00046d64) bg_popup_fep_shadow_pane_g9

0xcc33,	// (0x00051d7d) bg_popup_fep_shadow_pane_cp3

0xc304,	// (0x0005144e) list_accented_list_pane

0x5799,	// (0x0004a8e3) list_single_accented_list_pane_ParamLimits

0x5799,	// (0x0004a8e3) list_single_accented_list_pane

0xcc33,	// (0x00051d7d) list_highlight_pane_cp10

0x57aa,	// (0x0004a8f4) list_single_accented_list_pane_t1

0x9e16,	// (0x0004ef60) popup_slider_window_ParamLimits

0x9e16,	// (0x0004ef60) popup_slider_window

0x53cf,	// (0x0004a519) aid_indentation_list_msg

0xaf8b,	// (0x000500d5) bg_popup_window_pane_cp19

0x58ce,	// (0x0004aa18) popup_slider_window_g1

0x58ea,	// (0x0004aa34) popup_slider_window_g2

0x5906,	// (0x0004aa50) popup_slider_window_g3

0x0005,

0xfb7c,	// (0x00054cc6) popup_slider_window_g

0x5962,	// (0x0004aaac) popup_slider_window_t1

0x59d6,	// (0x0004ab20) small_volume_slider_vertical_pane

0xefc9,	// (0x00054113) small_volume_slider_vertical_pane_g1

0xefc9,	// (0x00054113) small_volume_slider_vertical_pane_g2

0x59f2,	// (0x0004ab3c) small_volume_slider_vertical_pane_g3

0x0002,

0xfb8e,	// (0x00054cd8) small_volume_slider_vertical_pane_g

0x8097,	// (0x0004d1e1) area_side_right_pane_ParamLimits

0x8097,	// (0x0004d1e1) area_side_right_pane

0x8856,	// (0x0004d9a0) aid_size_side_button_ParamLimits

0x8856,	// (0x0004d9a0) aid_size_side_button

0x886f,	// (0x0004d9b9) grid_sctrl_middle_pane_ParamLimits

0x886f,	// (0x0004d9b9) grid_sctrl_middle_pane

0x1e38,	// (0x00046f82) sctrl_sk_bottom_pane

0x1e49,	// (0x00046f93) sctrl_sk_top_pane

0x1e5b,	// (0x00046fa5) aid_touch_sctrl_top

0x1e68,	// (0x00046fb2) bg_sctrl_sk_pane_ParamLimits

0x1e68,	// (0x00046fb2) bg_sctrl_sk_pane

0x1e76,	// (0x00046fc0) sctrl_sk_top_pane_g1

0x1e83,	// (0x00046fcd) sctrl_sk_top_pane_t1

0x1e5b,	// (0x00046fa5) aid_touch_sctrl_bottom

0x1e68,	// (0x00046fb2) bg_sctrl_sk_pane_cp_ParamLimits

0x1e68,	// (0x00046fb2) bg_sctrl_sk_pane_cp

0x1e9e,	// (0x00046fe8) sctrl_sk_bottom_pane_g1

0x1e83,	// (0x00046fcd) sctrl_sk_bottom_pane_t1

0x8889,	// (0x0004d9d3) cell_sctrl_middle_pane_ParamLimits

0x8889,	// (0x0004d9d3) cell_sctrl_middle_pane

0x889a,	// (0x0004d9e4) aid_touch_sctrl_middle_ParamLimits

0x889a,	// (0x0004d9e4) aid_touch_sctrl_middle

0x88a7,	// (0x0004d9f1) bg_sctrl_middle_pane_ParamLimits

0x88a7,	// (0x0004d9f1) bg_sctrl_middle_pane

0x2507,	// (0x00047651) cell_sctrl_middle_pane_g1_ParamLimits

0x2507,	// (0x00047651) cell_sctrl_middle_pane_g1

0x88b5,	// (0x0004d9ff) cell_sctrl_middle_pane_g2_ParamLimits

0x88b5,	// (0x0004d9ff) cell_sctrl_middle_pane_g2

0x0001,

0xfb9a,	// (0x00054ce4) cell_sctrl_middle_pane_g_ParamLimits

0xfb9a,	// (0x00054ce4) cell_sctrl_middle_pane_g

0xd177,	// (0x000522c1) bg_sctrl_middle_pane_g1

0xd17f,	// (0x000522c9) bg_sctrl_middle_pane_g2

0xd187,	// (0x000522d1) bg_sctrl_middle_pane_g3

0xd18f,	// (0x000522d9) bg_sctrl_middle_pane_g4

0xd197,	// (0x000522e1) bg_sctrl_middle_pane_g5

0xd19f,	// (0x000522e9) bg_sctrl_middle_pane_g6

0xd1a7,	// (0x000522f1) bg_sctrl_middle_pane_g7

0xd1af,	// (0x000522f9) bg_sctrl_middle_pane_g8

0x0007,

0xfb9f,	// (0x00054ce9) bg_sctrl_middle_pane_g

0xd1b7,	// (0x00052301) bg_sctrl_middle_pane_g8_copy1

0xd177,	// (0x000522c1) bg_sctrl_sk_pane_g1

0xd187,	// (0x000522d1) bg_sctrl_sk_pane_g2

0xd17f,	// (0x000522c9) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x000549c1) bg_sctrl_sk_pane_g

0xc137,	// (0x00051281) aid_size_touch_scroll_bar

0xd197,	// (0x000522e1) bg_sctrl_sk_pane_g4

0xd18f,	// (0x000522d9) bg_sctrl_sk_pane_g5

0xd19f,	// (0x000522e9) bg_sctrl_sk_pane_g6

0xd1a7,	// (0x000522f1) bg_sctrl_sk_pane_g7

0xd1b7,	// (0x00052301) bg_sctrl_sk_pane_g8

0xd1af,	// (0x000522f9) bg_sctrl_sk_pane_g9

0xceb9,	// (0x00052003) popup_fep_china_hwr2_fs_candidate_window

0x9950,	// (0x0004ea9a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9950,	// (0x0004ea9a) popup_fep_china_hwr2_fs_control_window

0x1c3a,	// (0x00046d84) sctrl_sk_top_pane_g2

0x0001,

0xfb95,	// (0x00054cdf) sctrl_sk_top_pane_g

0xb043,	// (0x0005018d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb043,	// (0x0005018d) aid_fep_china_hwr2_fs_cell

0xb057,	// (0x000501a1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb057,	// (0x000501a1) bg_popup_fep_shadow_pane_cp4

0xb06e,	// (0x000501b8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb06e,	// (0x000501b8) bg_popup_fep_shadow_pane_cp5

0xb080,	// (0x000501ca) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb080,	// (0x000501ca) popup_fep_china_hwr2_fs_control_bar_grid

0xb094,	// (0x000501de) popup_fep_china_hwr2_fs_control_funtion_grid

0x5a4e,	// (0x0004ab98) aid_fep_china_hwr2_fs_candi_cell

0xb7b5,	// (0x000508ff) bg_popup_fep_shadow_pane_cp6

0x5a58,	// (0x0004aba2) popup_fep_china_hwr2_fs_candidate_grid

0xb09c,	// (0x000501e6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb09c,	// (0x000501e6) cell_fep_china_hwr2_fs_funtion_grid

0xefc9,	// (0x00054113) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5a7a,	// (0x0004abc4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5a7a,	// (0x0004abc4) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5a88,	// (0x0004abd2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5a88,	// (0x0004abd2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfbb0,	// (0x00054cfa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfbb0,	// (0x00054cfa) cell_fep_china_hwr2_fs_funtion_grid_g

0xb0b4,	// (0x000501fe) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb0b4,	// (0x000501fe) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb0c9,	// (0x00050213) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb0c9,	// (0x00050213) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0474,	// (0x000455be) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0474,	// (0x000455be) cell_fep_china_hwr2_fs_funtion_grid_t

0x5acf,	// (0x0004ac19) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5ad7,	// (0x0004ac21) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5adf,	// (0x0004ac29) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfbb5,	// (0x00054cff) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5ae7,	// (0x0004ac31) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5ae7,	// (0x0004ac31) cell_fep_china_hwr2_fs_candidate_grid

0x5b00,	// (0x0004ac4a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5b08,	// (0x0004ac52) popup_fep_china_hwr2_fs_candidate_grid_g21

0xefc9,	// (0x00054113) cell_fep_china_hwr2_fs_candidate_grid_g1

0xefc9,	// (0x00054113) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x02a0,	// (0x000453ea) cell_fep_china_hwr2_fs_candidate_grid_g

0x5b10,	// (0x0004ac5a) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcfc6,	// (0x00052110) clock_nsta_pane_cp_24_ParamLimits

0xcfc6,	// (0x00052110) clock_nsta_pane_cp_24

0xd02e,	// (0x00052178) indicator_nsta_pane_cp_24_ParamLimits

0xd02e,	// (0x00052178) indicator_nsta_pane_cp_24

0xdd84,	// (0x00052ece) heading_pane_g1

0x0001,

0xf8c5,	// (0x00054a0f) heading_pane_g

0xe46b,	// (0x000535b5) grid_sct_catagory_button_pane

0xdf65,	// (0x000530af) scroll_pane_cp5_ParamLimits

0xed33,	// (0x00053e7d) button_value_adjust_pane_cp5_ParamLimits

0xed33,	// (0x00053e7d) button_value_adjust_pane_cp5

0xedf1,	// (0x00053f3b) form2_midp_time_pane_ParamLimits

0x5b1e,	// (0x0004ac68) cell_sct_catagory_button_pane_ParamLimits

0x5b1e,	// (0x0004ac68) cell_sct_catagory_button_pane

0xef8e,	// (0x000540d8) bg_button_pane_cp01_ParamLimits

0xef8e,	// (0x000540d8) bg_button_pane_cp01

0xefc9,	// (0x00054113) cell_sct_catagory_button_pane_g1

0x9e8f,	// (0x0004efd9) popup_tb_extension_window

0xb0e5,	// (0x0005022f) aid_size_cell_ext_ParamLimits

0xb0e5,	// (0x0005022f) aid_size_cell_ext

0xbf79,	// (0x000510c3) bg_tb_trans_pane_cp1_ParamLimits

0xbf79,	// (0x000510c3) bg_tb_trans_pane_cp1

0xb10b,	// (0x00050255) grid_tb_ext_pane_ParamLimits

0xb10b,	// (0x00050255) grid_tb_ext_pane

0xb148,	// (0x00050292) cell_tb_ext_pane_ParamLimits

0xb148,	// (0x00050292) cell_tb_ext_pane

0xb170,	// (0x000502ba) cell_tb_ext_pane_g1_ParamLimits

0xb170,	// (0x000502ba) cell_tb_ext_pane_g1

0x5bb4,	// (0x0004acfe) cell_tb_ext_pane_t1

0xbc07,	// (0x00050d51) list_highlight_pane_cp11_ParamLimits

0xbc07,	// (0x00050d51) list_highlight_pane_cp11

0x09e3,	// (0x00045b2d) popup_uni_indicator_window_ParamLimits

0x09e3,	// (0x00045b2d) popup_uni_indicator_window

0xc20a,	// (0x00051354) bg_popup_sub_pane_cp14

0x5bcf,	// (0x0004ad19) list_uniindi_pane

0x5bdb,	// (0x0004ad25) uniindi_top_pane

0xbc07,	// (0x00050d51) bg_uniindi_top_pane

0x5bfa,	// (0x0004ad44) uniindi_top_pane_g1

0x5c10,	// (0x0004ad5a) uniindi_top_pane_g2

0x0003,

0xfbbc,	// (0x00054d06) uniindi_top_pane_g

0x5c3a,	// (0x0004ad84) uniindi_top_pane_t1

0x5c64,	// (0x0004adae) list_single_uniindi_pane_ParamLimits

0x5c64,	// (0x0004adae) list_single_uniindi_pane

0xefc9,	// (0x00054113) bg_uniindi_top_pane_g1

0x5c76,	// (0x0004adc0) list_single_uniindi_pane_g1

0x5c89,	// (0x0004add3) list_single_uniindi_pane_t1

0x0867,	// (0x000459b1) control_bg_pane

0x5cae,	// (0x0004adf8) bg_sctrl_sk_pane_cp1

0x5cb7,	// (0x0004ae01) bg_sctrl_sk_pane_cp2

0x5cc0,	// (0x0004ae0a) control_bg_pane_g1

0x5cc9,	// (0x0004ae13) control_bg_pane_g2

0x0001,

0xfbc5,	// (0x00054d0f) control_bg_pane_g

0xebec,	// (0x00053d36) cell_indicator_nsta_pane_g1_ParamLimits

0xa898,	// (0x0004f9e2) cell_indicator_nsta_pane_g2_ParamLimits

0x0204,	// (0x0004534e) cell_indicator_nsta_pane_g_ParamLimits

0x3511,	// (0x0004865b) form2_midp_time_pane_t1_ParamLimits

0x8f5a,	// (0x0004e0a4) main_idle_act4_pane_ParamLimits

0x8f5a,	// (0x0004e0a4) main_idle_act4_pane

0x9e8f,	// (0x0004efd9) popup_tb_extension_window_ParamLimits

0xb12f,	// (0x00050279) tb_ext_find_pane_ParamLimits

0xb12f,	// (0x00050279) tb_ext_find_pane

0x5cd2,	// (0x0004ae1c) ai_gene_pane_1_cp1

0xccc7,	// (0x00051e11) ai_gene_pane_2_cp1

0x5cda,	// (0x0004ae24) list_single_idle_plugin_calendar_pane

0x5ce3,	// (0x0004ae2d) list_single_idle_plugin_notification_pane

0x5cec,	// (0x0004ae36) list_single_idle_plugin_player_pane

0xb18d,	// (0x000502d7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb18d,	// (0x000502d7) list_single_idle_plugin_shortcut_pane

0xb1b5,	// (0x000502ff) main_idle_act4_pane_t1

0xb1cb,	// (0x00050315) main_idle_act4_pane_t2

0x0001,

0x048e,	// (0x000455d8) main_idle_act4_pane_t

0xb1e3,	// (0x0005032d) middle_sk_idle_act4_pane_ParamLimits

0xb1e3,	// (0x0005032d) middle_sk_idle_act4_pane

0xb1ff,	// (0x00050349) popup_clock_digital_analogue_window_cp2

0xb226,	// (0x00050370) shortcut_wheel_idle_act4_pane_ParamLimits

0xb226,	// (0x00050370) shortcut_wheel_idle_act4_pane

0xefc9,	// (0x00054113) shortcut_wheel_idle_act4_pane_g1

0xefc9,	// (0x00054113) shortcut_wheel_idle_act4_pane_g2

0xefc9,	// (0x00054113) shortcut_wheel_idle_act4_pane_g3

0xefc9,	// (0x00054113) shortcut_wheel_idle_act4_pane_g4

0xefc9,	// (0x00054113) shortcut_wheel_idle_act4_pane_g5

0x5d7f,	// (0x0004aec9) shortcut_wheel_idle_act4_pane_g6

0x5d87,	// (0x0004aed1) shortcut_wheel_idle_act4_pane_g7

0x5d8f,	// (0x0004aed9) shortcut_wheel_idle_act4_pane_g8

0x5d97,	// (0x0004aee1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfbca,	// (0x00054d14) shortcut_wheel_idle_act4_pane_g

0x91c3,	// (0x0004e30d) middle_sk_idle_act4_pane_g1_ParamLimits

0x91c3,	// (0x0004e30d) middle_sk_idle_act4_pane_g1

0xb2a3,	// (0x000503ed) middle_sk_idle_act4_pane_g2_ParamLimits

0xb2a3,	// (0x000503ed) middle_sk_idle_act4_pane_g2

0x0001,

0xfbdd,	// (0x00054d27) middle_sk_idle_act4_pane_g_ParamLimits

0xfbdd,	// (0x00054d27) middle_sk_idle_act4_pane_g

0xb2bb,	// (0x00050405) middle_sk_idle_act4_pane_t1_ParamLimits

0xb2bb,	// (0x00050405) middle_sk_idle_act4_pane_t1

0xb2ea,	// (0x00050434) grid_ai_shortcut_pane_ParamLimits

0xb2ea,	// (0x00050434) grid_ai_shortcut_pane

0xb307,	// (0x00050451) list_highlight_pane_cp16_ParamLimits

0xb307,	// (0x00050451) list_highlight_pane_cp16

0xb314,	// (0x0005045e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb314,	// (0x0005045e) list_single_idle_plugin_shortcut_pane_g1

0xb320,	// (0x0005046a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb320,	// (0x0005046a) list_single_idle_plugin_shortcut_pane_g2

0xb33c,	// (0x00050486) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb33c,	// (0x00050486) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x04bb,	// (0x00045605) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x04bb,	// (0x00045605) list_single_idle_plugin_shortcut_pane_g

0xb351,	// (0x0005049b) cell_ai_shortcut_pane_ParamLimits

0xb351,	// (0x0005049b) cell_ai_shortcut_pane

0xb367,	// (0x000504b1) cell_ai_shortcut_pane_g1_ParamLimits

0xb367,	// (0x000504b1) cell_ai_shortcut_pane_g1

0x5cd2,	// (0x0004ae1c) ai_gene_pane_1_cp2

0x5ee5,	// (0x0004b02f) ai_gene_pane_2_cp2

0x5eed,	// (0x0004b037) list_highlight_pane_cp15

0x5ef6,	// (0x0004b040) list_single_idle_plugin_calendar_pane_g1

0x5eed,	// (0x0004b037) list_highlight_pane_cp17

0x5efe,	// (0x0004b048) list_single_idle_plugin_calendar_pane_g1_copy1

0x5f06,	// (0x0004b050) list_single_idle_plugin_player_pane_g1

0xe680,	// (0x000537ca) list_single_idle_plugin_player_pane_g2

0x0001,

0xfbe2,	// (0x00054d2c) list_single_idle_plugin_player_pane_g

0x5f0e,	// (0x0004b058) list_single_idle_plugin_player_pane_t1

0x5f1c,	// (0x0004b066) list_single_idle_plugin_player_pane_t2

0x5f2a,	// (0x0004b074) list_single_idle_plugin_player_pane_t3

0x5f38,	// (0x0004b082) list_single_idle_plugin_player_pane_t4

0x0003,

0xfbe7,	// (0x00054d31) list_single_idle_plugin_player_pane_t

0x5f46,	// (0x0004b090) wait_bar_pane_cp15

0x5f4e,	// (0x0004b098) grid_ai_notification_pane

0xe680,	// (0x000537ca) list_single_idle_plugin_notification_pane_g1

0xb389,	// (0x000504d3) cell_ai_notification_pane_ParamLimits

0xb389,	// (0x000504d3) cell_ai_notification_pane

0x5f64,	// (0x0004b0ae) cell_ai_notification_pane_g1

0x5f6c,	// (0x0004b0b6) cell_ai_notification_pane_t1

0xb396,	// (0x000504e0) tb_ext_find_button_pane

0xb39e,	// (0x000504e8) tb_ext_find_pane_g1

0xb3a6,	// (0x000504f0) tb_ext_find_pane_t1

0xc71f,	// (0x00051869) tb_ext_find_button_pane_g1

0x5f98,	// (0x0004b0e2) tb_ext_find_button_pane_g2

0x0001,

0xfbf0,	// (0x00054d3a) tb_ext_find_button_pane_g

0xb1b5,	// (0x000502ff) main_idle_act4_pane_t1_ParamLimits

0xb1cb,	// (0x00050315) main_idle_act4_pane_t2_ParamLimits

0x048e,	// (0x000455d8) main_idle_act4_pane_t_ParamLimits

0xb1ff,	// (0x00050349) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb216,	// (0x00050360) sat_plugin_idle_act4_pane_ParamLimits

0xb216,	// (0x00050360) sat_plugin_idle_act4_pane

0xb3b4,	// (0x000504fe) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb3b4,	// (0x000504fe) sat_plugin_idle_act4_pane_t1

0xb3cc,	// (0x00050516) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb3cc,	// (0x00050516) sat_plugin_idle_act4_pane_t2

0xb3e4,	// (0x0005052e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb3e4,	// (0x0005052e) sat_plugin_idle_act4_pane_t3

0xb3fc,	// (0x00050546) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb3fc,	// (0x00050546) sat_plugin_idle_act4_pane_t4

0x0003,

0x04d5,	// (0x0004561f) sat_plugin_idle_act4_pane_t_ParamLimits

0x04d5,	// (0x0004561f) sat_plugin_idle_act4_pane_t

0x092c,	// (0x00045a76) popup_battery_window_ParamLimits

0x092c,	// (0x00045a76) popup_battery_window

0xbc07,	// (0x00050d51) bg_popup_sub_pane_cp25_ParamLimits

0xbc07,	// (0x00050d51) bg_popup_sub_pane_cp25

0x5fed,	// (0x0004b137) popup_battery_window_g1_ParamLimits

0x5fed,	// (0x0004b137) popup_battery_window_g1

0x5ff9,	// (0x0004b143) popup_battery_window_t1_ParamLimits

0x5ff9,	// (0x0004b143) popup_battery_window_t1

0x600b,	// (0x0004b155) popup_battery_window_t2_ParamLimits

0x600b,	// (0x0004b155) popup_battery_window_t2

0x0001,

0xfbf5,	// (0x00054d3f) popup_battery_window_t_ParamLimits

0xfbf5,	// (0x00054d3f) popup_battery_window_t

0x97df,	// (0x0004e929) midp_canvas_pane_ParamLimits

0x983c,	// (0x0004e986) midp_keypad_pane_ParamLimits

0x983c,	// (0x0004e986) midp_keypad_pane

0xc355,	// (0x0005149f) main_midp_pane_ParamLimits

0xecc8,	// (0x00053e12) signal_pane_g2_cp_ParamLimits

0xb414,	// (0x0005055e) aid_size_cell_midp_keypad_ParamLimits

0xb414,	// (0x0005055e) aid_size_cell_midp_keypad

0xb432,	// (0x0005057c) midp_keyp_game_grid_pane_ParamLimits

0xb432,	// (0x0005057c) midp_keyp_game_grid_pane

0xb466,	// (0x000505b0) midp_keyp_rocker_pane_ParamLimits

0xb466,	// (0x000505b0) midp_keyp_rocker_pane

0xb4a7,	// (0x000505f1) midp_keyp_sk_left_pane_ParamLimits

0xb4a7,	// (0x000505f1) midp_keyp_sk_left_pane

0xb4fb,	// (0x00050645) midp_keyp_sk_right_pane_ParamLimits

0xb4fb,	// (0x00050645) midp_keyp_sk_right_pane

0xb7b5,	// (0x000508ff) bg_button_pane_cp03

0xb54f,	// (0x00050699) midp_keyp_sk_left_pane_g1

0xb7b5,	// (0x000508ff) bg_button_pane_cp04

0xb54f,	// (0x00050699) midp_keyp_sk_right_pane_g1

0xefc9,	// (0x00054113) midp_keyp_rocker_pane_g1

0xb558,	// (0x000506a2) keyp_game_cell_pane_ParamLimits

0xb558,	// (0x000506a2) keyp_game_cell_pane

0xb7b5,	// (0x000508ff) bg_button_pane_cp02

0xb57c,	// (0x000506c6) keyp_game_cell_pane_g1

0x80d9,	// (0x0004d223) popup_fep_vkb2_window_ParamLimits

0x80d9,	// (0x0004d223) popup_fep_vkb2_window

0x88c1,	// (0x0004da0b) aid_size_cell_vkb2_ParamLimits

0x88c1,	// (0x0004da0b) aid_size_cell_vkb2

0x88f7,	// (0x0004da41) popup_fep_vkb2_window_g1_ParamLimits

0x88f7,	// (0x0004da41) popup_fep_vkb2_window_g1

0x893e,	// (0x0004da88) vkb2_area_bottom_pane_ParamLimits

0x893e,	// (0x0004da88) vkb2_area_bottom_pane

0x8992,	// (0x0004dadc) vkb2_area_keypad_pane_ParamLimits

0x8992,	// (0x0004dadc) vkb2_area_keypad_pane

0x89da,	// (0x0004db24) vkb2_area_top_pane_ParamLimits

0x89da,	// (0x0004db24) vkb2_area_top_pane

0x8a60,	// (0x0004dbaa) vkb2_top_entry_pane_ParamLimits

0x8a60,	// (0x0004dbaa) vkb2_top_entry_pane

0x8a8d,	// (0x0004dbd7) vkb2_top_grid_left_pane_ParamLimits

0x8a8d,	// (0x0004dbd7) vkb2_top_grid_left_pane

0x8aad,	// (0x0004dbf7) vkb2_top_grid_right_pane_ParamLimits

0x8aad,	// (0x0004dbf7) vkb2_top_grid_right_pane

0x2102,	// (0x0004724c) vkb2_cell_keypad_pane_ParamLimits

0x2102,	// (0x0004724c) vkb2_cell_keypad_pane

0x8af3,	// (0x0004dc3d) vkb2_area_bottom_grid_pane_ParamLimits

0x8af3,	// (0x0004dc3d) vkb2_area_bottom_grid_pane

0x8b1d,	// (0x0004dc67) vkb2_area_bottom_pane_g1_ParamLimits

0x8b1d,	// (0x0004dc67) vkb2_area_bottom_pane_g1

0x8b43,	// (0x0004dc8d) vkb2_area_bottom_pane_g2_ParamLimits

0x8b43,	// (0x0004dc8d) vkb2_area_bottom_pane_g2

0x8b74,	// (0x0004dcbe) vkb2_area_bottom_pane_g3_ParamLimits

0x8b74,	// (0x0004dcbe) vkb2_area_bottom_pane_g3

0x0002,

0xfbfa,	// (0x00054d44) vkb2_area_bottom_pane_g_ParamLimits

0xfbfa,	// (0x00054d44) vkb2_area_bottom_pane_g

0x22ac,	// (0x000473f6) vkb2_top_cell_left_pane_ParamLimits

0x22ac,	// (0x000473f6) vkb2_top_cell_left_pane

0xb585,	// (0x000506cf) vkb2_top_entry_pane_g1_ParamLimits

0xb585,	// (0x000506cf) vkb2_top_entry_pane_g1

0xb593,	// (0x000506dd) vkb2_top_entry_pane_t1_ParamLimits

0xb593,	// (0x000506dd) vkb2_top_entry_pane_t1

0x616e,	// (0x0004b2b8) vkb2_top_entry_pane_t2_ParamLimits

0x616e,	// (0x0004b2b8) vkb2_top_entry_pane_t2

0x61a0,	// (0x0004b2ea) vkb2_top_entry_pane_t3_ParamLimits

0x61a0,	// (0x0004b2ea) vkb2_top_entry_pane_t3

0x0002,

0xfc01,	// (0x00054d4b) vkb2_top_entry_pane_t_ParamLimits

0xfc01,	// (0x00054d4b) vkb2_top_entry_pane_t

0x8bde,	// (0x0004dd28) vkb2_top_grid_right_pane_g1_ParamLimits

0x8bde,	// (0x0004dd28) vkb2_top_grid_right_pane_g1

0x230f,	// (0x00047459) vkb2_top_grid_right_pane_g2_ParamLimits

0x230f,	// (0x00047459) vkb2_top_grid_right_pane_g2

0x2327,	// (0x00047471) vkb2_top_grid_right_pane_g3_ParamLimits

0x2327,	// (0x00047471) vkb2_top_grid_right_pane_g3

0x8bf4,	// (0x0004dd3e) vkb2_top_grid_right_pane_g4_ParamLimits

0x8bf4,	// (0x0004dd3e) vkb2_top_grid_right_pane_g4

0x0003,

0xfc08,	// (0x00054d52) vkb2_top_grid_right_pane_g_ParamLimits

0xfc08,	// (0x00054d52) vkb2_top_grid_right_pane_g

0x2355,	// (0x0004749f) vkb2_top_cell_left_pane_g1

0x236c,	// (0x000474b6) vkb2_cell_keypad_pane_g1_ParamLimits

0x236c,	// (0x000474b6) vkb2_cell_keypad_pane_g1

0x61c4,	// (0x0004b30e) vkb2_cell_keypad_pane_t1_ParamLimits

0x61c4,	// (0x0004b30e) vkb2_cell_keypad_pane_t1

0x237a,	// (0x000474c4) vkb2_cell_bottom_grid_pane_ParamLimits

0x237a,	// (0x000474c4) vkb2_cell_bottom_grid_pane

0x23b3,	// (0x000474fd) vkb2_cell_bottom_grid_pane_g1

0xb247,	// (0x00050391) aid_call2_pane_cp02

0xb24f,	// (0x00050399) aid_call_pane_cp02

0xb257,	// (0x000503a1) clock_digital_number_pane_cp10

0xb25f,	// (0x000503a9) clock_digital_number_pane_cp11

0xb267,	// (0x000503b1) clock_digital_number_pane_cp12

0xb26f,	// (0x000503b9) clock_digital_number_pane_cp13

0xb277,	// (0x000503c1) clock_digital_separator_pane_cp10

0xc71f,	// (0x00051869) popup_clock_digital_analogue_window_cp2_g1

0xc71f,	// (0x00051869) popup_clock_digital_analogue_window_cp2_g2

0xb27f,	// (0x000503c9) popup_clock_digital_analogue_window_cp2_g3

0xc71f,	// (0x00051869) popup_clock_digital_analogue_window_cp2_g4

0xb27f,	// (0x000503c9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0x04a6,	// (0x000455f0) popup_clock_digital_analogue_window_cp2_g

0xb287,	// (0x000503d1) popup_clock_digital_analogue_window_cp2_t1

0xb295,	// (0x000503df) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x04b1,	// (0x000455fb) popup_clock_digital_analogue_window_cp2_t

0xefc9,	// (0x00054113) clock_digital_number_pane_cp10_g1

0xefc9,	// (0x00054113) clock_digital_number_pane_cp10_g2

0x0001,

0x02a0,	// (0x000453ea) clock_digital_number_pane_cp10_g

0xefc9,	// (0x00054113) clock_digital_separator_pane_cp10_g1

0xefc9,	// (0x00054113) clock_digital_separator_pane_cp10_g2

0x0001,

0x02a0,	// (0x000453ea) clock_digital_separator_pane_cp10_g

0x5c1c,	// (0x0004ad66) uniindi_top_pane_g3

0x5c2d,	// (0x0004ad77) uniindi_top_pane_g4

0x218d,	// (0x000472d7) vkb2_row_keypad_pane_ParamLimits

0x218d,	// (0x000472d7) vkb2_row_keypad_pane

0x23d3,	// (0x0004751d) vkb2_cell_t_keypad_pane_ParamLimits

0x23d3,	// (0x0004751d) vkb2_cell_t_keypad_pane

0x23e3,	// (0x0004752d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x23e3,	// (0x0004752d) vkb2_cell_t_keypad_pane_cp08

0x23f6,	// (0x00047540) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x23f6,	// (0x00047540) vkb2_cell_t_keypad_pane_cp09

0x240a,	// (0x00047554) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x240a,	// (0x00047554) vkb2_cell_t_keypad_pane_cp01

0x241b,	// (0x00047565) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x241b,	// (0x00047565) vkb2_cell_t_keypad_pane_cp02

0x242c,	// (0x00047576) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x242c,	// (0x00047576) vkb2_cell_t_keypad_pane_cp03

0x243d,	// (0x00047587) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x243d,	// (0x00047587) vkb2_cell_t_keypad_pane_cp04

0x244e,	// (0x00047598) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x244e,	// (0x00047598) vkb2_cell_t_keypad_pane_cp05

0x245f,	// (0x000475a9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x245f,	// (0x000475a9) vkb2_cell_t_keypad_pane_cp06

0x2470,	// (0x000475ba) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2470,	// (0x000475ba) vkb2_cell_t_keypad_pane_cp07

0x2481,	// (0x000475cb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2481,	// (0x000475cb) vkb2_cell_t_keypad_pane_cp10

0x1c3a,	// (0x00046d84) vkb2_cell_t_keypad_pane_g1

0x61db,	// (0x0004b325) vkb2_cell_t_keypad_pane_t1

0x0867,	// (0x000459b1) popup_grid_graphic2_window

0xb5cc,	// (0x00050716) aid_size_cell_graphic2_ParamLimits

0xb5cc,	// (0x00050716) aid_size_cell_graphic2

0xb60a,	// (0x00050754) bg_popup_window_pane_cp21_ParamLimits

0xb60a,	// (0x00050754) bg_popup_window_pane_cp21

0xb618,	// (0x00050762) graphic2_pages_pane_ParamLimits

0xb618,	// (0x00050762) graphic2_pages_pane

0xb66e,	// (0x000507b8) grid_graphic2_control_pane_ParamLimits

0xb66e,	// (0x000507b8) grid_graphic2_control_pane

0xb6b6,	// (0x00050800) grid_graphic2_pane_ParamLimits

0xb6b6,	// (0x00050800) grid_graphic2_pane

0xb73d,	// (0x00050887) cell_graphic2_pane

0xb7b5,	// (0x000508ff) main_comp_mode_pane

0x5481,	// (0x0004a5cb) list_ai3_gene_pane_ParamLimits

0xaf8b,	// (0x000500d5) bg_popup_window_pane_cp19_ParamLimits

0x5870,	// (0x0004a9ba) bg_touch_area_indi_pane_ParamLimits

0x5870,	// (0x0004a9ba) bg_touch_area_indi_pane

0x5886,	// (0x0004a9d0) bg_touch_area_indi_pane_cp01_ParamLimits

0x5886,	// (0x0004a9d0) bg_touch_area_indi_pane_cp01

0x589c,	// (0x0004a9e6) bg_touch_area_indi_pane_cp02_ParamLimits

0x589c,	// (0x0004a9e6) bg_touch_area_indi_pane_cp02

0x58b4,	// (0x0004a9fe) bg_touch_area_indi_pane_cp03_ParamLimits

0x58b4,	// (0x0004a9fe) bg_touch_area_indi_pane_cp03

0x58ce,	// (0x0004aa18) popup_slider_window_g1_ParamLimits

0x58ea,	// (0x0004aa34) popup_slider_window_g2_ParamLimits

0x5906,	// (0x0004aa50) popup_slider_window_g3_ParamLimits

0xfb7c,	// (0x00054cc6) popup_slider_window_g_ParamLimits

0x5962,	// (0x0004aaac) popup_slider_window_t1_ParamLimits

0x59d6,	// (0x0004ab20) small_volume_slider_vertical_pane_ParamLimits

0xb73d,	// (0x00050887) cell_graphic2_pane_ParamLimits

0xb79a,	// (0x000508e4) bg_button_pane_cp10_ParamLimits

0xb79a,	// (0x000508e4) bg_button_pane_cp10

0xb84a,	// (0x00050994) bg_button_pane_cp11_ParamLimits

0xb84a,	// (0x00050994) bg_button_pane_cp11

0xb85d,	// (0x000509a7) graphic2_pages_pane_g1_ParamLimits

0xb85d,	// (0x000509a7) graphic2_pages_pane_g1

0xb878,	// (0x000509c2) graphic2_pages_pane_g2_ParamLimits

0xb878,	// (0x000509c2) graphic2_pages_pane_g2

0x0001,

0xfc11,	// (0x00054d5b) graphic2_pages_pane_g_ParamLimits

0xfc11,	// (0x00054d5b) graphic2_pages_pane_g

0xb890,	// (0x000509da) graphic2_pages_pane_t1_ParamLimits

0xb890,	// (0x000509da) graphic2_pages_pane_t1

0xb8a8,	// (0x000509f2) cell_graphic2_control_pane_ParamLimits

0xb8a8,	// (0x000509f2) cell_graphic2_control_pane

0xb8da,	// (0x00050a24) cell_graphic2_pane_g1_ParamLimits

0xb8da,	// (0x00050a24) cell_graphic2_pane_g1

0x987a,	// (0x0004e9c4) cell_graphic2_pane_g2_ParamLimits

0x987a,	// (0x0004e9c4) cell_graphic2_pane_g2

0xb459,	// (0x000505a3) cell_graphic2_pane_g3_ParamLimits

0xb459,	// (0x000505a3) cell_graphic2_pane_g3

0x9887,	// (0x0004e9d1) cell_graphic2_pane_g4_ParamLimits

0x9887,	// (0x0004e9d1) cell_graphic2_pane_g4

0xb8e7,	// (0x00050a31) cell_graphic2_pane_g5_ParamLimits

0xb8e7,	// (0x00050a31) cell_graphic2_pane_g5

0x0004,

0xfc16,	// (0x00054d60) cell_graphic2_pane_g_ParamLimits

0xfc16,	// (0x00054d60) cell_graphic2_pane_g

0xb907,	// (0x00050a51) cell_graphic2_pane_t1_ParamLimits

0xb907,	// (0x00050a51) cell_graphic2_pane_t1

0xdd78,	// (0x00052ec2) grid_highlight_pane_cp11_ParamLimits

0xdd78,	// (0x00052ec2) grid_highlight_pane_cp11

0xbc07,	// (0x00050d51) bg_button_pane_cp05

0xb93c,	// (0x00050a86) cell_graphic2_control_pane_g1

0xefc9,	// (0x00054113) bg_touch_area_indi_pane_g1

0x61ed,	// (0x0004b337) aid_cmod_rocker_key_size

0x61f7,	// (0x0004b341) aid_cmode_itu_key_size

0x6201,	// (0x0004b34b) main_cmode_video_pane

0x620b,	// (0x0004b355) main_comp_mode_itu_pane

0x6217,	// (0x0004b361) main_comp_mode_rocker_pane

0x6223,	// (0x0004b36d) cell_cmode_rocker_pane_ParamLimits

0x6223,	// (0x0004b36d) cell_cmode_rocker_pane

0x6235,	// (0x0004b37f) cell_cmode_itu_pane_ParamLimits

0x6235,	// (0x0004b37f) cell_cmode_itu_pane

0xc20a,	// (0x00051354) bg_button_pane_cp06_ParamLimits

0xc20a,	// (0x00051354) bg_button_pane_cp06

0xf232,	// (0x0005437c) cell_cmode_rocker_pane_g1_ParamLimits

0xf232,	// (0x0005437c) cell_cmode_rocker_pane_g1

0x5a7a,	// (0x0004abc4) cell_cmode_rocker_pane_g2_ParamLimits

0x5a7a,	// (0x0004abc4) cell_cmode_rocker_pane_g2

0x0001,

0xfc26,	// (0x00054d70) cell_cmode_rocker_pane_g_ParamLimits

0xfc26,	// (0x00054d70) cell_cmode_rocker_pane_g

0xb7b5,	// (0x000508ff) bg_button_pane_cp07

0x624a,	// (0x0004b394) cell_cmode_itu_pane_g1

0x6253,	// (0x0004b39d) cell_cmode_itu_pane_t1

0x6261,	// (0x0004b3ab) cell_cmode_itu_pane_t2

0x0001,

0xfc2b,	// (0x00054d75) cell_cmode_itu_pane_t

0x5c9e,	// (0x0004ade8) aid_touch_ctrl_left

0x5ca6,	// (0x0004adf0) aid_touch_ctrl_right

0xb7b5,	// (0x000508ff) compa_mode_pane

0xb962,	// (0x00050aac) aid_cmod_rocker_key_size_cp

0xb96c,	// (0x00050ab6) aid_cmode_itu_key_size_cp

0x626f,	// (0x0004b3b9) compa_mode_pane_g1

0x6277,	// (0x0004b3c1) compa_mode_pane_g2

0x627f,	// (0x0004b3c9) compa_mode_pane_g3

0x0002,

0xfc30,	// (0x00054d7a) compa_mode_pane_g

0xb976,	// (0x00050ac0) main_comp_mode_itu_pane_cp

0xb97e,	// (0x00050ac8) main_comp_mode_rocker_pane_cp

0xb986,	// (0x00050ad0) cell_cmode_itu_pane_cp_ParamLimits

0xb986,	// (0x00050ad0) cell_cmode_itu_pane_cp

0xb99b,	// (0x00050ae5) cell_cmode_rocker_pane_cp_ParamLimits

0xb99b,	// (0x00050ae5) cell_cmode_rocker_pane_cp

0xc20a,	// (0x00051354) bg_button_pane_cp06_cp_ParamLimits

0xc20a,	// (0x00051354) bg_button_pane_cp06_cp

0xf232,	// (0x0005437c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xf232,	// (0x0005437c) cell_cmode_rocker_pane_g1_cp

0xefc9,	// (0x00054113) cell_cmode_rocker_pane_g2_cp

0xb7b5,	// (0x000508ff) bg_button_pane_cp07_cp

0xb9ad,	// (0x00050af7) cell_cmode_itu_pane_g1_cp

0xb9b6,	// (0x00050b00) cell_cmode_itu_pane_t1_cp

0xb9b6,	// (0x00050b00) cell_cmode_itu_pane_t2_cp

0xa6f2,	// (0x0004f83c) settings_code_pane_cp2

0xb825,	// (0x0005096f) bg_popup_window_pane_cp3_ParamLimits

0xbf0a,	// (0x00051054) heading_pane_cp3_ParamLimits

0xbf16,	// (0x00051060) listscroll_popup_graphic_pane_ParamLimits

0x19e3,	// (0x00046b2d) fep_hwr_aid_pane_ParamLimits

0x1e5b,	// (0x00046fa5) aid_touch_sctrl_top_ParamLimits

0x1e76,	// (0x00046fc0) sctrl_sk_top_pane_g1_ParamLimits

0x1c3a,	// (0x00046d84) sctrl_sk_top_pane_g2_ParamLimits

0xfb95,	// (0x00054cdf) sctrl_sk_top_pane_g_ParamLimits

0x1e83,	// (0x00046fcd) sctrl_sk_top_pane_t1_ParamLimits

0x1e5b,	// (0x00046fa5) aid_touch_sctrl_bottom_ParamLimits

0x1e83,	// (0x00046fcd) sctrl_sk_bottom_pane_t1_ParamLimits

0x5be8,	// (0x0004ad32) aid_area_touch_clock

0x8a22,	// (0x0004db6c) aid_vkb2_area_top_pane_cell_ParamLimits

0x8a22,	// (0x0004db6c) aid_vkb2_area_top_pane_cell

0x8acd,	// (0x0004dc17) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8acd,	// (0x0004dc17) aid_vkb2_area_bottom_pane_cell

0x6166,	// (0x0004b2b0) popup_char_count_window

0x6287,	// (0x0004b3d1) popup_char_count_window_g1

0x6290,	// (0x0004b3da) popup_char_count_window_g2

0x6299,	// (0x0004b3e3) popup_char_count_window_g3

0x0002,

0xfc37,	// (0x00054d81) popup_char_count_window_g

0x62a2,	// (0x0004b3ec) popup_char_count_window_t1

0x1f32,	// (0x0004707c) popup_fep_char_preview_window_ParamLimits

0x1f32,	// (0x0004707c) popup_fep_char_preview_window

0x8a42,	// (0x0004db8c) vkb2_top_candi_pane_ParamLimits

0x8a42,	// (0x0004db8c) vkb2_top_candi_pane

0xb9c4,	// (0x00050b0e) cell_vkb2_top_candi_pane_ParamLimits

0xb9c4,	// (0x00050b0e) cell_vkb2_top_candi_pane

0x2496,	// (0x000475e0) bg_popup_fep_char_preview_window_ParamLimits

0x2496,	// (0x000475e0) bg_popup_fep_char_preview_window

0x24a4,	// (0x000475ee) popup_fep_char_preview_window_t1_ParamLimits

0x24a4,	// (0x000475ee) popup_fep_char_preview_window_t1

0x62b0,	// (0x0004b3fa) bg_popup_fep_char_preview_window_g1

0x62b8,	// (0x0004b402) bg_popup_fep_char_preview_window_g2

0x62c0,	// (0x0004b40a) bg_popup_fep_char_preview_window_g3

0x62c8,	// (0x0004b412) bg_popup_fep_char_preview_window_g4

0x62d0,	// (0x0004b41a) bg_popup_fep_char_preview_window_g5

0x24de,	// (0x00047628) bg_popup_fep_char_preview_window_g6

0x62d8,	// (0x0004b422) bg_popup_fep_char_preview_window_g7

0x62e0,	// (0x0004b42a) bg_popup_fep_char_preview_window_g8

0x62e8,	// (0x0004b432) bg_popup_fep_char_preview_window_g9

0x0008,

0xfc3e,	// (0x00054d88) bg_popup_fep_char_preview_window_g

0x1c3a,	// (0x00046d84) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1c3a,	// (0x00046d84) cell_vkb2_top_candi_pane_g1

0x1c48,	// (0x00046d92) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1c48,	// (0x00046d92) cell_vkb2_top_candi_pane_g2

0x5e6e,	// (0x0004afb8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5e6e,	// (0x0004afb8) cell_vkb2_top_candi_pane_g3

0x24e6,	// (0x00047630) cell_vkb2_top_candi_pane_g4_ParamLimits

0x24e6,	// (0x00047630) cell_vkb2_top_candi_pane_g4

0x4a2e,	// (0x00049b78) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4a2e,	// (0x00049b78) cell_vkb2_top_candi_pane_g5

0x2507,	// (0x00047651) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2507,	// (0x00047651) cell_vkb2_top_candi_pane_g6

0x0005,

0xfc51,	// (0x00054d9b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfc51,	// (0x00054d9b) cell_vkb2_top_candi_pane_g

0x2515,	// (0x0004765f) cell_vkb2_top_candi_pane_t1

0x17f2,	// (0x0004693c) aid_size_touch_slider_mark_ParamLimits

0x17f2,	// (0x0004693c) aid_size_touch_slider_mark

0xb654,	// (0x0005079e) grid_graphic2_catg_pane_ParamLimits

0xb654,	// (0x0005079e) grid_graphic2_catg_pane

0xb710,	// (0x0005085a) popup_grid_graphic2_window_t1_ParamLimits

0xb710,	// (0x0005085a) popup_grid_graphic2_window_t1

0xb726,	// (0x00050870) popup_grid_graphic2_window_t2_ParamLimits

0xb726,	// (0x00050870) popup_grid_graphic2_window_t2

0x0001,

0x04fa,	// (0x00045644) popup_grid_graphic2_window_t_ParamLimits

0x04fa,	// (0x00045644) popup_grid_graphic2_window_t

0xbc07,	// (0x00050d51) bg_button_pane_cp05_ParamLimits

0xb93c,	// (0x00050a86) cell_graphic2_control_pane_g1_ParamLimits

0xba2a,	// (0x00050b74) cell_graphic2_catg_pane_ParamLimits

0xba2a,	// (0x00050b74) cell_graphic2_catg_pane

0xb7b5,	// (0x000508ff) bg_button_pane_cp12

0xba3c,	// (0x00050b86) cell_graphic2_catg_pane_g1

0x5bb4,	// (0x0004acfe) cell_tb_ext_pane_t1_ParamLimits

0x22cc,	// (0x00047416) vkb2_top_cell_right_narrow_pane_ParamLimits

0x22cc,	// (0x00047416) vkb2_top_cell_right_narrow_pane

0x22e4,	// (0x0004742e) vkb2_top_cell_right_wide_pane_ParamLimits

0x22e4,	// (0x0004742e) vkb2_top_cell_right_wide_pane

0x19d5,	// (0x00046b1f) bg_vkb2_func_pane_ParamLimits

0x19d5,	// (0x00046b1f) bg_vkb2_func_pane

0x2355,	// (0x0004749f) vkb2_top_cell_left_pane_g1_ParamLimits

0x19d5,	// (0x00046b1f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x19d5,	// (0x00046b1f) bg_vkb2_fuc_pane_cp03

0x23b3,	// (0x000474fd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd17f,	// (0x000522c9) bg_vkb2_func_pane_g1

0xd187,	// (0x000522d1) bg_vkb2_func_pane_g2

0xd197,	// (0x000522e1) bg_vkb2_func_pane_g3

0xd18f,	// (0x000522d9) bg_vkb2_func_pane_g4

0xd19f,	// (0x000522e9) bg_vkb2_func_pane_g5

0xd1a7,	// (0x000522f1) bg_vkb2_func_pane_g6

0xd1af,	// (0x000522f9) bg_vkb2_func_pane_g7

0xd1b7,	// (0x00052301) bg_vkb2_func_pane_g8

0xd177,	// (0x000522c1) bg_vkb2_func_pane_g9

0x0008,

0xfc5e,	// (0x00054da8) bg_vkb2_func_pane_g

0x19d5,	// (0x00046b1f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x19d5,	// (0x00046b1f) bg_vkb2_fuc_pane_cp01

0x2355,	// (0x0004749f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2355,	// (0x0004749f) vkb2_top_cell_right_wide_pane_g1

0x19d5,	// (0x00046b1f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x19d5,	// (0x00046b1f) bg_vkb2_fuc_pane_cp02

0x23b3,	// (0x000474fd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x23b3,	// (0x000474fd) vkb2_top_cell_right_narrow_pane_g1

0xaec5,	// (0x0005000f) aid_touch_area_decrease_ParamLimits

0xaec5,	// (0x0005000f) aid_touch_area_decrease

0xaeff,	// (0x00050049) aid_touch_area_increase_ParamLimits

0xaeff,	// (0x00050049) aid_touch_area_increase

0xaf27,	// (0x00050071) aid_touch_area_mute_ParamLimits

0xaf27,	// (0x00050071) aid_touch_area_mute

0xaf57,	// (0x000500a1) aid_touch_area_slider_ParamLimits

0xaf57,	// (0x000500a1) aid_touch_area_slider

0xaf97,	// (0x000500e1) popup_slider_window_g4_ParamLimits

0xaf97,	// (0x000500e1) popup_slider_window_g4

0xafbf,	// (0x00050109) popup_slider_window_g5_ParamLimits

0xafbf,	// (0x00050109) popup_slider_window_g5

0xaff3,	// (0x0005013d) popup_slider_window_g6_ParamLimits

0xaff3,	// (0x0005013d) popup_slider_window_g6

0x5990,	// (0x0004aada) popup_slider_window_t2_ParamLimits

0x5990,	// (0x0004aada) popup_slider_window_t2

0x0001,

0xfb89,	// (0x00054cd3) popup_slider_window_t_ParamLimits

0xfb89,	// (0x00054cd3) popup_slider_window_t

0xb00f,	// (0x00050159) slider_pane_ParamLimits

0xb00f,	// (0x00050159) slider_pane

0x62f0,	// (0x0004b43a) slider_pane_g1_ParamLimits

0x62f0,	// (0x0004b43a) slider_pane_g1

0x6304,	// (0x0004b44e) slider_pane_g2_ParamLimits

0x6304,	// (0x0004b44e) slider_pane_g2

0x631a,	// (0x0004b464) slider_pane_g3_ParamLimits

0x631a,	// (0x0004b464) slider_pane_g3

0x0003,

0xfc71,	// (0x00054dbb) slider_pane_g_ParamLimits

0xfc71,	// (0x00054dbb) slider_pane_g

0x9ed7,	// (0x0004f021) popup_tb_float_extension_window_ParamLimits

0x9ed7,	// (0x0004f021) popup_tb_float_extension_window

0x6346,	// (0x0004b490) aid_size_cell_tb_float_ext

0xb7b5,	// (0x000508ff) bg_popup_sub_window_cp28

0x6352,	// (0x0004b49c) grid_tb_float_ext_pane

0x635c,	// (0x0004b4a6) cell_tb_float_ext_pane_ParamLimits

0x635c,	// (0x0004b4a6) cell_tb_float_ext_pane

0x6376,	// (0x0004b4c0) cell_tb_float_ext_pane_g1

0x637f,	// (0x0004b4c9) grid_highlight_pane_cp12

0x8834,	// (0x0004d97e) cell_last_hwr_side_pane_ParamLimits

0x8834,	// (0x0004d97e) cell_last_hwr_side_pane

0xefc9,	// (0x00054113) cell_last_hwr_side_pane_g1

0x6388,	// (0x0004b4d2) cell_last_hwr_side_pane_g2

0x0001,

0xfc7a,	// (0x00054dc4) cell_last_hwr_side_pane_g

0x8ba9,	// (0x0004dcf3) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8ba9,	// (0x0004dcf3) vkb2_area_bottom_space_btn_pane

0x1c3a,	// (0x00046d84) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x61db,	// (0x0004b325) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2515,	// (0x0004765f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2534,	// (0x0004767e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2534,	// (0x0004767e) vkb2_area_bottom_space_btn_pane_g1

0x256e,	// (0x000476b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x256e,	// (0x000476b8) vkb2_area_bottom_space_btn_pane_g2

0x25a4,	// (0x000476ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x25a4,	// (0x000476ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfc7f,	// (0x00054dc9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfc7f,	// (0x00054dc9) vkb2_area_bottom_space_btn_pane_g

0x1a98,	// (0x00046be2) cel_fep_hwr_func_pane_ParamLimits

0x1a98,	// (0x00046be2) cel_fep_hwr_func_pane

0x8809,	// (0x0004d953) cell_hwr_side_button_pane_ParamLimits

0x8809,	// (0x0004d953) cell_hwr_side_button_pane

0x5be8,	// (0x0004ad32) aid_area_touch_clock_ParamLimits

0xbc07,	// (0x00050d51) bg_uniindi_top_pane_ParamLimits

0x5bfa,	// (0x0004ad44) uniindi_top_pane_g1_ParamLimits

0x5c10,	// (0x0004ad5a) uniindi_top_pane_g2_ParamLimits

0x5c1c,	// (0x0004ad66) uniindi_top_pane_g3_ParamLimits

0x5c2d,	// (0x0004ad77) uniindi_top_pane_g4_ParamLimits

0xfbbc,	// (0x00054d06) uniindi_top_pane_g_ParamLimits

0x5c3a,	// (0x0004ad84) uniindi_top_pane_t1_ParamLimits

0xbc07,	// (0x00050d51) bg_vkb2_func_pane_cp01_ParamLimits

0xbc07,	// (0x00050d51) bg_vkb2_func_pane_cp01

0x6391,	// (0x0004b4db) cel_fep_hwr_func_pane_g1_ParamLimits

0x6391,	// (0x0004b4db) cel_fep_hwr_func_pane_g1

0xbc07,	// (0x00050d51) bg_vkb2_func_pane_cp02_ParamLimits

0xbc07,	// (0x00050d51) bg_vkb2_func_pane_cp02

0x6391,	// (0x0004b4db) cell_hwr_side_button_pane_g1_ParamLimits

0x6391,	// (0x0004b4db) cell_hwr_side_button_pane_g1

0xd08f,	// (0x000521d9) status_pane_g4_ParamLimits

0xd08f,	// (0x000521d9) status_pane_g4

0xd0a7,	// (0x000521f1) status_pane_t1

0xee59,	// (0x00053fa3) form2_midp_gauge_slider_cont_pane

0xee61,	// (0x00053fab) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa96e,	// (0x0004fab8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa982,	// (0x0004facc) form2_midp_gauge_slider_pane_t3_ParamLimits

0x0253,	// (0x0004539d) form2_midp_gauge_slider_pane_t_ParamLimits

0xee73,	// (0x00053fbd) form2_midp_slider_pane_ParamLimits

0x1ef2,	// (0x0004703c) aid_size_cell_func_vkb2_ParamLimits

0x1ef2,	// (0x0004703c) aid_size_cell_func_vkb2

0x6332,	// (0x0004b47c) slider_pane_g4_ParamLimits

0x6332,	// (0x0004b47c) slider_pane_g4

0x8c0a,	// (0x0004dd54) form2_midp_gauge_slider_pane_t2_cp01

0x8c1a,	// (0x0004dd64) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8c1a,	// (0x0004dd64) form2_midp_gauge_slider_pane_t3_cp01

0x2619,	// (0x00047763) form2_midp_slider_pane_cp01

0xb7b5,	// (0x000508ff) navi_smil_pane

0x63c1,	// (0x0004b50b) navi_smil_pane_g1

0x63c9,	// (0x0004b513) navi_smil_pane_t1

0x639f,	// (0x0004b4e9) form2_midp_slider_pane_g1

0x63a8,	// (0x0004b4f2) form2_midp_slider_pane_g2

0x63b0,	// (0x0004b4fa) form2_midp_slider_pane_g3

0x639f,	// (0x0004b4e9) form2_midp_slider_pane_g4

0xba45,	// (0x00050b8f) form2_midp_slider_pane_g5

0x0004,

0xfc88,	// (0x00054dd2) form2_midp_slider_pane_g

0x25de,	// (0x00047728) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x25de,	// (0x00047728) vkb2_area_bottom_space_btn_pane_g4

0xa0ba,	// (0x0004f204) lc0_navi_pane_ParamLimits

0xa0ba,	// (0x0004f204) lc0_navi_pane

0xa124,	// (0x0004f26e) lc0_stat_indi_pane_ParamLimits

0xa124,	// (0x0004f26e) lc0_stat_indi_pane

0xa139,	// (0x0004f283) ls0_title_pane_ParamLimits

0xa139,	// (0x0004f283) ls0_title_pane

0xc20a,	// (0x00051354) bg_popup_sub_pane_cp14_ParamLimits

0x5bcf,	// (0x0004ad19) list_uniindi_pane_ParamLimits

0x5bdb,	// (0x0004ad25) uniindi_top_pane_ParamLimits

0x5c76,	// (0x0004adc0) list_single_uniindi_pane_g1_ParamLimits

0x5c89,	// (0x0004add3) list_single_uniindi_pane_t1_ParamLimits

0x8c39,	// (0x0004dd83) lc0_stat_clock_pane_ParamLimits

0x8c39,	// (0x0004dd83) lc0_stat_clock_pane

0xba50,	// (0x00050b9a) lc0_stat_indi_pane_g1_ParamLimits

0xba50,	// (0x00050b9a) lc0_stat_indi_pane_g1

0xba5d,	// (0x00050ba7) lc0_stat_indi_pane_g2_ParamLimits

0xba5d,	// (0x00050ba7) lc0_stat_indi_pane_g2

0x0001,

0xfc93,	// (0x00054ddd) lc0_stat_indi_pane_g_ParamLimits

0xfc93,	// (0x00054ddd) lc0_stat_indi_pane_g

0x8c46,	// (0x0004dd90) lc0_uni_indicator_pane_ParamLimits

0x8c46,	// (0x0004dd90) lc0_uni_indicator_pane

0x63d7,	// (0x0004b521) ls0_title_pane_g1_ParamLimits

0x63d7,	// (0x0004b521) ls0_title_pane_g1

0xba6a,	// (0x00050bb4) ls0_title_pane_t1_ParamLimits

0xba6a,	// (0x00050bb4) ls0_title_pane_t1

0x8c53,	// (0x0004dd9d) lc0_uni_indicator_pane_g1_ParamLimits

0x8c53,	// (0x0004dd9d) lc0_uni_indicator_pane_g1

0x63eb,	// (0x0004b535) lc0_stat_clock_pane_t1

0xb7b5,	// (0x000508ff) main_ai5_pane

0x63f9,	// (0x0004b543) ai5_sk_pane_ParamLimits

0x63f9,	// (0x0004b543) ai5_sk_pane

0xba98,	// (0x00050be2) cell_ai5_widget_pane_ParamLimits

0xba98,	// (0x00050be2) cell_ai5_widget_pane

0x6406,	// (0x0004b550) aid_size_cell_widget_grid

0x641a,	// (0x0004b564) bg_ai5_widget_pane_ParamLimits

0x641a,	// (0x0004b564) bg_ai5_widget_pane

0x6464,	// (0x0004b5ae) cell_ai5_widget_pane_g2

0x6474,	// (0x0004b5be) cell_ai5_widget_pane_g3

0x6493,	// (0x0004b5dd) cell_ai5_widget_pane_g4

0x649f,	// (0x0004b5e9) cell_ai5_widget_pane_g5

0x64ab,	// (0x0004b5f5) cell_ai5_widget_pane_g6

0x64b7,	// (0x0004b601) cell_ai5_widget_pane_g7

0x64ff,	// (0x0004b649) cell_ai5_widget_pane_t1_ParamLimits

0x64ff,	// (0x0004b649) cell_ai5_widget_pane_t1

0x651c,	// (0x0004b666) cell_ai5_widget_pane_t2_ParamLimits

0x651c,	// (0x0004b666) cell_ai5_widget_pane_t2

0x6534,	// (0x0004b67e) cell_ai5_widget_pane_t3_ParamLimits

0x6534,	// (0x0004b67e) cell_ai5_widget_pane_t3

0x654c,	// (0x0004b696) cell_ai5_widget_pane_t4_ParamLimits

0x654c,	// (0x0004b696) cell_ai5_widget_pane_t4

0x6566,	// (0x0004b6b0) cell_ai5_widget_pane_t5_ParamLimits

0x6566,	// (0x0004b6b0) cell_ai5_widget_pane_t5

0x6585,	// (0x0004b6cf) cell_ai5_widget_pane_t6_ParamLimits

0x6585,	// (0x0004b6cf) cell_ai5_widget_pane_t6

0x6597,	// (0x0004b6e1) cell_ai5_widget_pane_t7_ParamLimits

0x6597,	// (0x0004b6e1) cell_ai5_widget_pane_t7

0x65b0,	// (0x0004b6fa) cell_ai5_widget_pane_t8_ParamLimits

0x65b0,	// (0x0004b6fa) cell_ai5_widget_pane_t8

0x0009,

0xfcad,	// (0x00054df7) cell_ai5_widget_pane_t_ParamLimits

0xfcad,	// (0x00054df7) cell_ai5_widget_pane_t

0x65fc,	// (0x0004b746) grid_ai5_widget_pane

0xc20a,	// (0x00051354) highlight_cell_ai5_widget_pane_ParamLimits

0xc20a,	// (0x00051354) highlight_cell_ai5_widget_pane

0xbd16,	// (0x00050e60) ai5_sk_left_pane

0xbd20,	// (0x00050e6a) ai5_sk_middle_pane

0xbd2a,	// (0x00050e74) ai5_sk_right_pane

0x6610,	// (0x0004b75a) bg_ai5_widget_pane_g1_ParamLimits

0x6610,	// (0x0004b75a) bg_ai5_widget_pane_g1

0x661c,	// (0x0004b766) bg_ai5_widget_pane_g2_ParamLimits

0x661c,	// (0x0004b766) bg_ai5_widget_pane_g2

0x6628,	// (0x0004b772) bg_ai5_widget_pane_g3_ParamLimits

0x6628,	// (0x0004b772) bg_ai5_widget_pane_g3

0x6634,	// (0x0004b77e) bg_ai5_widget_pane_g4_ParamLimits

0x6634,	// (0x0004b77e) bg_ai5_widget_pane_g4

0x6640,	// (0x0004b78a) bg_ai5_widget_pane_g5_ParamLimits

0x6640,	// (0x0004b78a) bg_ai5_widget_pane_g5

0x664c,	// (0x0004b796) bg_ai5_widget_pane_g6_ParamLimits

0x664c,	// (0x0004b796) bg_ai5_widget_pane_g6

0x6658,	// (0x0004b7a2) bg_ai5_widget_pane_g7_ParamLimits

0x6658,	// (0x0004b7a2) bg_ai5_widget_pane_g7

0x6664,	// (0x0004b7ae) bg_ai5_widget_pane_g8_ParamLimits

0x6664,	// (0x0004b7ae) bg_ai5_widget_pane_g8

0x6670,	// (0x0004b7ba) bg_ai5_widget_pane_g9_ParamLimits

0x6670,	// (0x0004b7ba) bg_ai5_widget_pane_g9

0x0008,

0xfcc2,	// (0x00054e0c) bg_ai5_widget_pane_g_ParamLimits

0xfcc2,	// (0x00054e0c) bg_ai5_widget_pane_g

0x66a3,	// (0x0004b7ed) cell_shortcut_ai5_widget_pane_ParamLimits

0x66a3,	// (0x0004b7ed) cell_shortcut_ai5_widget_pane

0xbb10,	// (0x00050c5a) bg_cell_shortcut_ai5_widget_pane

0x66b4,	// (0x0004b7fe) cell_grid_ai5_widget_pane_g1

0x66bd,	// (0x0004b807) highlight_cell_shortcut_ai5_widget_pane

0xd17f,	// (0x000522c9) ai5_sk_left_pane_g1

0x66c5,	// (0x0004b80f) ai5_sk_left_pane_g2

0x66cd,	// (0x0004b817) ai5_sk_left_pane_g3

0x66d5,	// (0x0004b81f) ai5_sk_left_pane_g4

0x0003,

0xfcd5,	// (0x00054e1f) ai5_sk_left_pane_g

0x66dd,	// (0x0004b827) ai5_sk_left_pane_t1

0xd187,	// (0x000522d1) ai5_sk_right_pane_g1

0x66eb,	// (0x0004b835) ai5_sk_right_pane_g2

0x66f3,	// (0x0004b83d) ai5_sk_right_pane_g3

0x66fb,	// (0x0004b845) ai5_sk_right_pane_g4

0x0003,

0xfcde,	// (0x00054e28) ai5_sk_right_pane_g

0x6703,	// (0x0004b84d) ai5_sk_right_pane_t1

0xd187,	// (0x000522d1) ai5_sk_middle_pane_g1

0xd17f,	// (0x000522c9) ai5_sk_middle_pane_g2

0xd19f,	// (0x000522e9) ai5_sk_middle_pane_g3

0x66f3,	// (0x0004b83d) ai5_sk_middle_pane_g4

0x66cd,	// (0x0004b817) ai5_sk_middle_pane_g5

0x6711,	// (0x0004b85b) ai5_sk_middle_pane_g6

0xbd34,	// (0x00050e7e) ai5_sk_middle_pane_g7

0x0006,

0xfce7,	// (0x00054e31) ai5_sk_middle_pane_g

0x9fa6,	// (0x0004f0f0) aid_touch_area_size_lc0_ParamLimits

0x9fa6,	// (0x0004f0f0) aid_touch_area_size_lc0

0x1c69,	// (0x00046db3) cell_hwr_candidate_pane_t1_ParamLimits

0xcfb1,	// (0x000520fb) aid_touch_navi_pane

0xa22c,	// (0x0004f376) status_dt_navi_pane_ParamLimits

0xa22c,	// (0x0004f376) status_dt_navi_pane

0xa244,	// (0x0004f38e) status_dt_sta_pane_ParamLimits

0xa244,	// (0x0004f38e) status_dt_sta_pane

0xbd3c,	// (0x00050e86) dt_sta_controll_pane

0xbd49,	// (0x00050e93) dt_sta_indi_pane

0xbd56,	// (0x00050ea0) dt_sta_title_pane

0xbc07,	// (0x00050d51) bg_dt_sta_indi_pane_ParamLimits

0xbc07,	// (0x00050d51) bg_dt_sta_indi_pane

0x6719,	// (0x0004b863) dt_sta_battery_pane

0x6721,	// (0x0004b86b) dt_sta_indi_pane_g1

0x672a,	// (0x0004b874) dt_sta_indi_pane_g2

0x6733,	// (0x0004b87d) dt_sta_indi_pane_g3

0x0002,

0xfcf6,	// (0x00054e40) dt_sta_indi_pane_g

0x673c,	// (0x0004b886) dt_sta_signal_pane

0xc20a,	// (0x00051354) bg_dt_sta_title_pane_ParamLimits

0xc20a,	// (0x00051354) bg_dt_sta_title_pane

0xde4a,	// (0x00052f94) dt_sta_title_pane_g1

0x6745,	// (0x0004b88f) dt_sta_title_pane_t1_ParamLimits

0x6745,	// (0x0004b88f) dt_sta_title_pane_t1

0xb7b5,	// (0x000508ff) bg_dt_sta_control_pane

0x675a,	// (0x0004b8a4) dt_sta_controll_pane_g1

0x6763,	// (0x0004b8ad) bg_dt_sta_title_pane_g1

0x676c,	// (0x0004b8b6) bg_dt_sta_title_pane_g2

0x6775,	// (0x0004b8bf) bg_dt_sta_title_pane_g3

0x0002,

0xfcfd,	// (0x00054e47) bg_dt_sta_title_pane_g

0xefc9,	// (0x00054113) bg_dt_sta_indi_pane_g1

0x677e,	// (0x0004b8c8) dt_sta_signal_pane_g1

0x6786,	// (0x0004b8d0) dt_sta_signal_pane_g2

0x0001,

0xfd04,	// (0x00054e4e) dt_sta_signal_pane_g

0x678e,	// (0x0004b8d8) dt_sta_battery_pane_g1

0x6797,	// (0x0004b8e1) dt_sta_battery_pane_t1

0xefc9,	// (0x00054113) bg_dt_sta_control_pane_g1

0xc7a2,	// (0x000518ec) fep_china_uni_eep_pane

0xc7aa,	// (0x000518f4) fep_china_uni_entry_pane_ParamLimits

0xc7ba,	// (0x00051904) popup_fep_china_uni_window_g1_ParamLimits

0xc7ca,	// (0x00051914) popup_fep_china_uni_window_g2_ParamLimits

0xc7ca,	// (0x00051914) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00054884) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00054884) popup_fep_china_uni_window_g

0x67a6,	// (0x0004b8f0) fep_china_uni_eep_pane_g1

0x67ae,	// (0x0004b8f8) fep_china_uni_eep_pane_t1

0x63b8,	// (0x0004b502) aid_touch_area_size_smil_player

0xd062,	// (0x000521ac) lc0_clock_pane

0xd09b,	// (0x000521e5) status_pane_g5_ParamLimits

0xd09b,	// (0x000521e5) status_pane_g5

0x9a6b,	// (0x0004ebb5) popup_keymap_window

0xd07b,	// (0x000521c5) status_icon_pane

0x6474,	// (0x0004b5be) cell_ai5_widget_pane_g3_ParamLimits

0x6493,	// (0x0004b5dd) cell_ai5_widget_pane_g4_ParamLimits

0x649f,	// (0x0004b5e9) cell_ai5_widget_pane_g5_ParamLimits

0x64c3,	// (0x0004b60d) cell_ai5_widget_pane_g8_ParamLimits

0x64c3,	// (0x0004b60d) cell_ai5_widget_pane_g8

0x64d7,	// (0x0004b621) cell_ai5_widget_pane_g9_ParamLimits

0x64d7,	// (0x0004b621) cell_ai5_widget_pane_g9

0x64eb,	// (0x0004b635) cell_ai5_widget_pane_g10_ParamLimits

0x64eb,	// (0x0004b635) cell_ai5_widget_pane_g10

0x67bd,	// (0x0004b907) status_icon_pane_g1

0xb7b5,	// (0x000508ff) bg_popup_sub_pane_cp13

0x67c5,	// (0x0004b90f) popup_keymap_window_t1

0x989e,	// (0x0004e9e8) control_pane_g6_ParamLimits

0x989e,	// (0x0004e9e8) control_pane_g6

0x98ab,	// (0x0004e9f5) control_pane_g7_ParamLimits

0x98ab,	// (0x0004e9f5) control_pane_g7

0x98b8,	// (0x0004ea02) control_pane_g8_ParamLimits

0x98b8,	// (0x0004ea02) control_pane_g8

0xbd3c,	// (0x00050e86) dt_sta_controll_pane_ParamLimits

0xbd49,	// (0x00050e93) dt_sta_indi_pane_ParamLimits

0xbd56,	// (0x00050ea0) dt_sta_title_pane_ParamLimits

0xc140,	// (0x0005128a) aid_size_touch_scroll_bar_cale

0x0940,	// (0x00045a8a) popup_discreet_window_ParamLimits

0x0940,	// (0x00045a8a) popup_discreet_window

0x811f,	// (0x0004d269) popup_sk_window

0xd732,	// (0x0005287c) bg_popup_sub_pane_cp28_ParamLimits

0xd732,	// (0x0005287c) bg_popup_sub_pane_cp28

0x67d3,	// (0x0004b91d) popup_discreet_window_g1_ParamLimits

0x67d3,	// (0x0004b91d) popup_discreet_window_g1

0x67f3,	// (0x0004b93d) popup_discreet_window_t1_ParamLimits

0x67f3,	// (0x0004b93d) popup_discreet_window_t1

0x6811,	// (0x0004b95b) popup_discreet_window_t2_ParamLimits

0x6811,	// (0x0004b95b) popup_discreet_window_t2

0x0002,

0xfd09,	// (0x00054e53) popup_discreet_window_t_ParamLimits

0xfd09,	// (0x00054e53) popup_discreet_window_t

0x2652,	// (0x0004779c) popup_sk_window_g1

0x265c,	// (0x000477a6) popup_sk_window_g2

0x0001,

0xfd10,	// (0x00054e5a) popup_sk_window_g

0x2666,	// (0x000477b0) popup_sk_window_t1

0x2674,	// (0x000477be) popup_sk_window_t1_copy1

0x6464,	// (0x0004b5ae) cell_ai5_widget_pane_g2_ParamLimits

0x65c2,	// (0x0004b70c) cell_ai5_widget_pane_t9_ParamLimits

0x65c2,	// (0x0004b70c) cell_ai5_widget_pane_t9

0xb7b5,	// (0x000508ff) main_fep_fshwr2_pane

0xbd68,	// (0x00050eb2) aid_fshwr2_btn_pane

0xbd70,	// (0x00050eba) aid_fshwr2_syb_pane

0xbd78,	// (0x00050ec2) aid_fshwr2_txt_pane

0xbd80,	// (0x00050eca) fshwr2_func_candi_pane

0xbd8a,	// (0x00050ed4) fshwr2_hwr_syb_pane

0xbd98,	// (0x00050ee2) fshwr2_icf_pane

0xb7b5,	// (0x000508ff) fshwr2_icf_bg_pane

0xbda2,	// (0x00050eec) fshwr2_icf_pane_t1_ParamLimits

0xbda2,	// (0x00050eec) fshwr2_icf_pane_t1

0xefc9,	// (0x00054113) fshwr2_func_candi_pane_g1

0x6877,	// (0x0004b9c1) fshwr2_func_candi_row_pane_ParamLimits

0x6877,	// (0x0004b9c1) fshwr2_func_candi_row_pane

0xbdbc,	// (0x00050f06) cell_fshwr2_syb_pane_ParamLimits

0xbdbc,	// (0x00050f06) cell_fshwr2_syb_pane

0xf232,	// (0x0005437c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf232,	// (0x0005437c) fshwr2_hwr_syb_pane_g1

0xb7b5,	// (0x000508ff) bg_popup_call_pane_cp01

0x6888,	// (0x0004b9d2) fshwr2_func_candi_cell_pane_ParamLimits

0x6888,	// (0x0004b9d2) fshwr2_func_candi_cell_pane

0x68b9,	// (0x0004ba03) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x68b9,	// (0x0004ba03) fshwr2_func_candi_cell_bg_pane

0x68d3,	// (0x0004ba1d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x68d3,	// (0x0004ba1d) fshwr2_func_candi_cell_pane_g1

0x68f3,	// (0x0004ba3d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x68f3,	// (0x0004ba3d) fshwr2_func_candi_cell_pane_t1

0xb7b5,	// (0x000508ff) bg_button_pane_cp08

0xcc33,	// (0x00051d7d) cell_fshwr2_syb_bg_pane

0xbdd6,	// (0x00050f20) cell_fshwr2_syb_bg_pane_g1

0x6906,	// (0x0004ba50) cell_fshwr2_syb_bg_pane_t1

0xc20a,	// (0x00051354) main_tmo_pane

0xa538,	// (0x0004f682) uni_indicator_pane_g1_ParamLimits

0xa54d,	// (0x0004f697) uni_indicator_pane_g2_ParamLimits

0xe178,	// (0x000532c2) uni_indicator_pane_g3_ParamLimits

0xe18e,	// (0x000532d8) uni_indicator_pane_g4_ParamLimits

0xe18e,	// (0x000532d8) uni_indicator_pane_g4

0xe1a2,	// (0x000532ec) uni_indicator_pane_g5_ParamLimits

0xe1a2,	// (0x000532ec) uni_indicator_pane_g5

0xe1b6,	// (0x00053300) uni_indicator_pane_g6_ParamLimits

0xe1b6,	// (0x00053300) uni_indicator_pane_g6

0xf91b,	// (0x00054a65) uni_indicator_pane_g_ParamLimits

0xaea7,	// (0x0004fff1) popup_tmo_note_window_ParamLimits

0xaea7,	// (0x0004fff1) popup_tmo_note_window

0xb7b5,	// (0x000508ff) fshwr2_bg_pane

0x68e4,	// (0x0004ba2e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x68e4,	// (0x0004ba2e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfd15,	// (0x00054e5f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfd15,	// (0x00054e5f) fshwr2_func_candi_cell_pane_g

0xefc9,	// (0x00054113) bg_popup_window_pane_cp01

0x6915,	// (0x0004ba5f) bg_popup_window_pane_g1_cp01

0x691e,	// (0x0004ba68) bg_popup_window_pane_cp22_ParamLimits

0x691e,	// (0x0004ba68) bg_popup_window_pane_cp22

0x692c,	// (0x0004ba76) listscroll_tmo_link_pane_ParamLimits

0x692c,	// (0x0004ba76) listscroll_tmo_link_pane

0x696c,	// (0x0004bab6) popup_tmo_note_window_g1_ParamLimits

0x696c,	// (0x0004bab6) popup_tmo_note_window_g1

0x6979,	// (0x0004bac3) tmo_note_info_pane_ParamLimits

0x6979,	// (0x0004bac3) tmo_note_info_pane

0xbdde,	// (0x00050f28) list_tmo_note_info_pane_g1_ParamLimits

0xbdde,	// (0x00050f28) list_tmo_note_info_pane_g1

0x6993,	// (0x0004badd) list_tmo_note_info_pane_g2_ParamLimits

0x6993,	// (0x0004badd) list_tmo_note_info_pane_g2

0x0001,

0xfd1a,	// (0x00054e64) list_tmo_note_info_pane_g_ParamLimits

0xfd1a,	// (0x00054e64) list_tmo_note_info_pane_g

0x69af,	// (0x0004baf9) list_tmo_note_info_text_pane_ParamLimits

0x69af,	// (0x0004baf9) list_tmo_note_info_text_pane

0x69f1,	// (0x0004bb3b) list_tmo_link_pane

0x69fe,	// (0x0004bb48) scroll_pane_cp20

0x6a0b,	// (0x0004bb55) list_single_tmo_link_pane_ParamLimits

0x6a0b,	// (0x0004bb55) list_single_tmo_link_pane

0x6a1b,	// (0x0004bb65) list_single_tmo_link_pane_t1

0x6a29,	// (0x0004bb73) list_tmo_note_info_text_pane_t1_ParamLimits

0x6a29,	// (0x0004bb73) list_tmo_note_info_text_pane_t1

0x9591,	// (0x0004e6db) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9591,	// (0x0004e6db) aid_size_touch_scroll_bar_cp01

0x8de1,	// (0x0004df2b) aid_size_touch_slider_marker

0x810f,	// (0x0004d259) popup_settings_window_ParamLimits

0x810f,	// (0x0004d259) popup_settings_window

0x30fe,	// (0x00048248) popup_candi_list_indi_window

0xcfb1,	// (0x000520fb) aid_touch_navi_pane_ParamLimits

0x1e2f,	// (0x00046f79) rs_clock_indi_pane

0x1e38,	// (0x00046f82) sctrl_sk_bottom_pane_ParamLimits

0x1e49,	// (0x00046f93) sctrl_sk_top_pane_ParamLimits

0x1f4c,	// (0x00047096) popup_fep_tooltip_window

0x6406,	// (0x0004b550) aid_size_cell_widget_grid_ParamLimits

0x6458,	// (0x0004b5a2) cell_ai5_widget_pane_g1_ParamLimits

0x6458,	// (0x0004b5a2) cell_ai5_widget_pane_g1

0x64ab,	// (0x0004b5f5) cell_ai5_widget_pane_g6_ParamLimits

0x64b7,	// (0x0004b601) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfc98,	// (0x00054de2) cell_ai5_widget_pane_g_ParamLimits

0xfc98,	// (0x00054de2) cell_ai5_widget_pane_g

0x65e6,	// (0x0004b730) cell_ai5_widget_pane_t10_ParamLimits

0x65e6,	// (0x0004b730) cell_ai5_widget_pane_t10

0x65fc,	// (0x0004b746) grid_ai5_widget_pane_ParamLimits

0x667c,	// (0x0004b7c6) cell_contacts_ai5_widget_pane_ParamLimits

0x667c,	// (0x0004b7c6) cell_contacts_ai5_widget_pane

0x6826,	// (0x0004b970) popup_discreet_window_t3_ParamLimits

0x6826,	// (0x0004b970) popup_discreet_window_t3

0x6863,	// (0x0004b9ad) popup_fshwr2_char_preview_window_ParamLimits

0x6863,	// (0x0004b9ad) popup_fshwr2_char_preview_window

0xbdf5,	// (0x00050f3f) tmo_note_info_pane_t1

0xbe0a,	// (0x00050f54) tmo_note_info_pane_t2

0xbe23,	// (0x00050f6d) tmo_note_info_pane_t3

0x69cd,	// (0x0004bb17) tmo_note_info_pane_t4

0x69df,	// (0x0004bb29) tmo_note_info_pane_t5

0x0004,

0xfd1f,	// (0x00054e69) tmo_note_info_pane_t

0x69f1,	// (0x0004bb3b) list_tmo_link_pane_ParamLimits

0x69fe,	// (0x0004bb48) scroll_pane_cp20_ParamLimits

0xb7b5,	// (0x000508ff) bg_popup_fep_char_preview_window_cp01

0x6a42,	// (0x0004bb8c) popup_fshwr2_char_preview_window_t1

0x6a50,	// (0x0004bb9a) popup_candi_list_indi_window_g1

0x6a59,	// (0x0004bba3) bg_cell_contacts_ai5_widget_pane

0x6a65,	// (0x0004bbaf) cell_contacts_ai5_widget_pane_g1

0x6a78,	// (0x0004bbc2) cell_contacts_ai5_widget_pane_g2

0x6a84,	// (0x0004bbce) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfd2a,	// (0x00054e74) cell_contacts_ai5_widget_pane_g

0x6a96,	// (0x0004bbe0) cell_contacts_ai5_widget_pane_t1

0xc20a,	// (0x00051354) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6b10,	// (0x0004bc5a) settings_container_pane

0xcc33,	// (0x00051d7d) listscroll_set_pane_copy1

0xe9a2,	// (0x00053aec) scroll_pane_cp121_copy1

0x6b1c,	// (0x0004bc66) set_content_pane_copy1

0x6b24,	// (0x0004bc6e) aid_height_set_list_copy1_ParamLimits

0x6b24,	// (0x0004bc6e) aid_height_set_list_copy1

0xd8bf,	// (0x00052a09) aid_size_parent_copy1_ParamLimits

0xd8bf,	// (0x00052a09) aid_size_parent_copy1

0x6b30,	// (0x0004bc7a) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6b30,	// (0x0004bc7a) button_value_adjust_pane_cp6_copy1

0xc355,	// (0x0005149f) list_highlight_pane_cp2_copy1_ParamLimits

0xc355,	// (0x0005149f) list_highlight_pane_cp2_copy1

0x6b44,	// (0x0004bc8e) list_set_pane_copy1_ParamLimits

0x6b44,	// (0x0004bc8e) list_set_pane_copy1

0x6aab,	// (0x0004bbf5) main_pane_set_t1_copy1_ParamLimits

0x6aab,	// (0x0004bbf5) main_pane_set_t1_copy1

0x6ae5,	// (0x0004bc2f) main_pane_set_t2_copy1_ParamLimits

0x6ae5,	// (0x0004bc2f) main_pane_set_t2_copy1

0x6bf1,	// (0x0004bd3b) main_pane_set_t3_copy1

0x6bff,	// (0x0004bd49) main_pane_set_t4_copy1

0x6b04,	// (0x0004bc4e) set_content_pane_g1_copy1_ParamLimits

0x6b04,	// (0x0004bc4e) set_content_pane_g1_copy1

0x6c0d,	// (0x0004bd57) setting_code_pane_copy1

0x6c17,	// (0x0004bd61) setting_slider_graphic_pane_copy1

0x6c17,	// (0x0004bd61) setting_slider_pane_copy1

0x6c17,	// (0x0004bd61) setting_text_pane_copy1

0x6c21,	// (0x0004bd6b) setting_volume_pane_copy1

0x6c2a,	// (0x0004bd74) settings_code_pane_cp2_copy1

0x6c32,	// (0x0004bd7c) settings_code_pane_cp_copy1_ParamLimits

0x6c32,	// (0x0004bd7c) settings_code_pane_cp_copy1

0x6c46,	// (0x0004bd90) volume_set_pane_copy1

0x6c4e,	// (0x0004bd98) volume_set_pane_g10_copy1

0x6c56,	// (0x0004bda0) volume_set_pane_g1_copy1

0x6c5e,	// (0x0004bda8) volume_set_pane_g2_copy1

0x6c66,	// (0x0004bdb0) volume_set_pane_g3_copy1

0x6c6e,	// (0x0004bdb8) volume_set_pane_g4_copy1

0x6c76,	// (0x0004bdc0) volume_set_pane_g5_copy1

0x6c7e,	// (0x0004bdc8) volume_set_pane_g6_copy1

0x6c86,	// (0x0004bdd0) volume_set_pane_g7_copy1

0x6c8e,	// (0x0004bdd8) volume_set_pane_g8_copy1

0x6c96,	// (0x0004bde0) volume_set_pane_g9_copy1

0xb825,	// (0x0005096f) bg_set_opt_pane_cp_copy1_ParamLimits

0xb825,	// (0x0005096f) bg_set_opt_pane_cp_copy1

0x6c9e,	// (0x0004bde8) setting_slider_pane_t1_copy1_ParamLimits

0x6c9e,	// (0x0004bde8) setting_slider_pane_t1_copy1

0x6cbc,	// (0x0004be06) setting_slider_pane_t2_copy1_ParamLimits

0x6cbc,	// (0x0004be06) setting_slider_pane_t2_copy1

0x6cd6,	// (0x0004be20) setting_slider_pane_t3_copy1_ParamLimits

0x6cd6,	// (0x0004be20) setting_slider_pane_t3_copy1

0x6cee,	// (0x0004be38) slider_set_pane_copy1_ParamLimits

0x6cee,	// (0x0004be38) slider_set_pane_copy1

0xc265,	// (0x000513af) set_opt_bg_pane_g1_copy2

0xc26d,	// (0x000513b7) set_opt_bg_pane_g2_copy2

0x6d04,	// (0x0004be4e) set_opt_bg_pane_g3_copy2

0xc27d,	// (0x000513c7) set_opt_bg_pane_g4_copy2

0xc285,	// (0x000513cf) set_opt_bg_pane_g5_copy2

0xc28d,	// (0x000513d7) set_opt_bg_pane_g6_copy2

0x6d0e,	// (0x0004be58) set_opt_bg_pane_g7_copy2

0x6d16,	// (0x0004be60) set_opt_bg_pane_g8_copy2

0x6d20,	// (0x0004be6a) set_opt_bg_pane_g9_copy2

0x2682,	// (0x000477cc) aid_size_touch_slider_mark_copy1_ParamLimits

0x2682,	// (0x000477cc) aid_size_touch_slider_mark_copy1

0x6d2a,	// (0x0004be74) slider_set_pane_g1_copy1

0x2696,	// (0x000477e0) slider_set_pane_g2_copy1

0x1812,	// (0x0004695c) slider_set_pane_g3_copy1_ParamLimits

0x1812,	// (0x0004695c) slider_set_pane_g3_copy1

0x1826,	// (0x00046970) slider_set_pane_g4_copy1_ParamLimits

0x1826,	// (0x00046970) slider_set_pane_g4_copy1

0x183e,	// (0x00046988) slider_set_pane_g5_copy1_ParamLimits

0x183e,	// (0x00046988) slider_set_pane_g5_copy1

0x1812,	// (0x0004695c) slider_set_pane_g6_copy1_ParamLimits

0x1812,	// (0x0004695c) slider_set_pane_g6_copy1

0x269e,	// (0x000477e8) slider_set_pane_g7_copy1_ParamLimits

0x269e,	// (0x000477e8) slider_set_pane_g7_copy1

0xb7c9,	// (0x00050913) bg_set_opt_pane_cp2_copy1

0x6d33,	// (0x0004be7d) setting_slider_graphic_pane_g1_copy1

0x6d3c,	// (0x0004be86) setting_slider_graphic_pane_t1_copy1

0x6d4c,	// (0x0004be96) setting_slider_graphic_pane_t2_copy1

0x6d5c,	// (0x0004bea6) slider_set_pane_cp_copy1

0x6d6c,	// (0x0004beb6) input_focus_pane_cp1_copy1

0x6d75,	// (0x0004bebf) list_set_text_pane_copy1

0x6d7d,	// (0x0004bec7) setting_text_pane_g1_copy1

0x383a,	// (0x00048984) set_text_pane_t1_copy1

0x6d6c,	// (0x0004beb6) input_focus_pane_cp2_copy1

0x6d7d,	// (0x0004bec7) setting_code_pane_g1_copy1

0x6d86,	// (0x0004bed0) setting_code_pane_t1_copy1

0x6d94,	// (0x0004bede) list_set_graphic_pane_copy1

0xb7c9,	// (0x00050913) bg_set_opt_pane_cp4_copy1

0xc935,	// (0x00051a7f) list_set_graphic_pane_g1_copy1_ParamLimits

0xc935,	// (0x00051a7f) list_set_graphic_pane_g1_copy1

0x6da8,	// (0x0004bef2) list_set_graphic_pane_g2_copy1

0xc94d,	// (0x00051a97) list_set_graphic_pane_t1_copy1_ParamLimits

0xc94d,	// (0x00051a97) list_set_graphic_pane_t1_copy1

0xefc9,	// (0x00054113) rs_clock_indi_pane_g1

0x6db0,	// (0x0004befa) rs_clock_indi_pane_t1

0x6dbe,	// (0x0004bf08) rs_indi_pane

0x6dc6,	// (0x0004bf10) rs_indi_pane_g1

0x6dcf,	// (0x0004bf19) rs_indi_pane_g2

0x6dd8,	// (0x0004bf22) rs_indi_pane_g3

0x0002,

0xfd31,	// (0x00054e7b) rs_indi_pane_g

0xcc33,	// (0x00051d7d) bg_popup_preview_window_pane_cp03

0x6de1,	// (0x0004bf2b) popup_fep_tooltip_window_t1

0x4f59,	// (0x0004a0a3) popup_note2_window_g2_ParamLimits

0x4f59,	// (0x0004a0a3) popup_note2_window_g2

0x0001,

0xfb00,	// (0x00054c4a) popup_note2_window_g_ParamLimits

0xfb00,	// (0x00054c4a) popup_note2_window_g

0x5447,	// (0x0004a591) bg_popup_sub_pane_cp11_ParamLimits

0x5454,	// (0x0004a59e) cell_ai3_links_pane_g1_ParamLimits

0x546b,	// (0x0004a5b5) cell_ai3_links_pane_t1

0x383a,	// (0x00048984) set_text_pane_t1_copy1_ParamLimits

0xcb42,	// (0x00051c8c) cell_graphic_popup_pane_cp2_ParamLimits

0xcb42,	// (0x00051c8c) cell_graphic_popup_pane_cp2

0x6def,	// (0x0004bf39) cell_graphic_popup_pane_g1_cp2

0xbf53,	// (0x0005109d) cell_graphic_popup_pane_g2_cp2

0x6df7,	// (0x0004bf41) cell_graphic_popup_pane_g3_cp2

0x6dff,	// (0x0004bf49) cell_graphic_popup_pane_t2_cp2

0xbf64,	// (0x000510ae) grid_highlight_pane_cp3_cp2

0xc4ff,	// (0x00051649) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc20a,	// (0x00051354) main_tmo_pane_ParamLimits

0xae9b,	// (0x0004ffe5) popup_tmo_big_image_note_window

0x6448,	// (0x0004b592) cell_ai5_widget_list_pane

0x6450,	// (0x0004b59a) cell_ai5_widget_lrg_icon_pane

0xbdf5,	// (0x00050f3f) tmo_note_info_pane_t1_ParamLimits

0xbe0a,	// (0x00050f54) tmo_note_info_pane_t2_ParamLimits

0xbe23,	// (0x00050f6d) tmo_note_info_pane_t3_ParamLimits

0x69cd,	// (0x0004bb17) tmo_note_info_pane_t4_ParamLimits

0x69df,	// (0x0004bb29) tmo_note_info_pane_t5_ParamLimits

0xfd1f,	// (0x00054e69) tmo_note_info_pane_t_ParamLimits

0x6b10,	// (0x0004bc5a) settings_container_pane_ParamLimits

0x6d64,	// (0x0004beae) indicator_popup_pane_cp5

0x6d64,	// (0x0004beae) indicator_popup_pane_cp6

0x6d94,	// (0x0004bede) list_set_graphic_pane_copy1_ParamLimits

0xb7b5,	// (0x000508ff) bg_popup_window_pane_cp23

0x6e0d,	// (0x0004bf57) popup_tmo_big_image_note_window_g1

0x6e18,	// (0x0004bf62) popup_tmo_big_image_note_window_t1

0x6e28,	// (0x0004bf72) popup_tmo_big_image_note_window_t2

0x6e38,	// (0x0004bf82) popup_tmo_big_image_note_window_t3

0x0002,

0xfd38,	// (0x00054e82) popup_tmo_big_image_note_window_t

0x6e48,	// (0x0004bf92) cell_ai5_widget_lrg_icon_pane_g1

0x6e50,	// (0x0004bf9a) cell_ai5_widget_lrg_icon_pane_t1

0x6e5e,	// (0x0004bfa8) cell_ai5_widget_list_row_pane_ParamLimits

0x6e5e,	// (0x0004bfa8) cell_ai5_widget_list_row_pane

0x6e77,	// (0x0004bfc1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6e77,	// (0x0004bfc1) cell_ai5_widget_list_row_pane_g1

0x6e84,	// (0x0004bfce) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6e84,	// (0x0004bfce) cell_ai5_widget_list_row_pane_t1

0x6e9c,	// (0x0004bfe6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6e9c,	// (0x0004bfe6) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfd3f,	// (0x00054e89) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfd3f,	// (0x00054e89) cell_ai5_widget_list_row_pane_t

0x0867,	// (0x000459b1) main_fep_vtchi_ss_pane

0x6eae,	// (0x0004bff8) popup_fep_char_pre_window

0x6eb6,	// (0x0004c000) popup_fep_ituss_window

0x6ed0,	// (0x0004c01a) popup_fep_vkbss_window

0x6eee,	// (0x0004c038) grid_vkbss_keypad_pane_ParamLimits

0x6eee,	// (0x0004c038) grid_vkbss_keypad_pane

0x6efe,	// (0x0004c048) ituss_keypad_pane

0x6f14,	// (0x0004c05e) aid_vkbss_key_offset_ParamLimits

0x6f14,	// (0x0004c05e) aid_vkbss_key_offset

0x6f20,	// (0x0004c06a) cell_vkbss_key_pane_ParamLimits

0x6f20,	// (0x0004c06a) cell_vkbss_key_pane

0xdf59,	// (0x000530a3) bg_cell_vkbss_key_g1_ParamLimits

0xdf59,	// (0x000530a3) bg_cell_vkbss_key_g1

0x6f36,	// (0x0004c080) cell_vkbss_key_3p_pane_ParamLimits

0x6f36,	// (0x0004c080) cell_vkbss_key_3p_pane

0x6f50,	// (0x0004c09a) cell_vkbss_key_g1_ParamLimits

0x6f50,	// (0x0004c09a) cell_vkbss_key_g1

0x6f6a,	// (0x0004c0b4) cell_vkbss_key_t1_ParamLimits

0x6f6a,	// (0x0004c0b4) cell_vkbss_key_t1

0x6f95,	// (0x0004c0df) cell_ituss_key_pane_ParamLimits

0x6f95,	// (0x0004c0df) cell_ituss_key_pane

0x6fa5,	// (0x0004c0ef) bg_cell_ituss_key_g1_ParamLimits

0x6fa5,	// (0x0004c0ef) bg_cell_ituss_key_g1

0x6fb1,	// (0x0004c0fb) cell_ituss_key_pane_g1_ParamLimits

0x6fb1,	// (0x0004c0fb) cell_ituss_key_pane_g1

0x6fbd,	// (0x0004c107) cell_ituss_key_pane_g2_ParamLimits

0x6fbd,	// (0x0004c107) cell_ituss_key_pane_g2

0x0001,

0xfd44,	// (0x00054e8e) cell_ituss_key_pane_g_ParamLimits

0xfd44,	// (0x00054e8e) cell_ituss_key_pane_g

0x6fd6,	// (0x0004c120) cell_ituss_key_t1_ParamLimits

0x6fd6,	// (0x0004c120) cell_ituss_key_t1

0x7004,	// (0x0004c14e) cell_ituss_key_t2_ParamLimits

0x7004,	// (0x0004c14e) cell_ituss_key_t2

0x7035,	// (0x0004c17f) cell_ituss_key_t3_ParamLimits

0x7035,	// (0x0004c17f) cell_ituss_key_t3

0x7066,	// (0x0004c1b0) cell_ituss_key_t4_ParamLimits

0x7066,	// (0x0004c1b0) cell_ituss_key_t4

0x0003,

0xfd49,	// (0x00054e93) cell_ituss_key_t_ParamLimits

0xfd49,	// (0x00054e93) cell_ituss_key_t

0x7097,	// (0x0004c1e1) cell_vkbss_key_3p_pane_g1

0x709f,	// (0x0004c1e9) cell_vkbss_key_3p_pane_g2

0x70a7,	// (0x0004c1f1) cell_vkbss_key_3p_pane_g3

0x0002,

0xfd52,	// (0x00054e9c) cell_vkbss_key_3p_pane_g

0xb7b5,	// (0x000508ff) bg_popup_fep_char_preview_window_cp02

0x70af,	// (0x0004c1f9) popup_fep_char_pre_window_t1

0xbd0c,	// (0x00050e56) main_ai5_sk_pane

0x6a59,	// (0x0004bba3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6a65,	// (0x0004bbaf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6a78,	// (0x0004bbc2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6a84,	// (0x0004bbce) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfd2a,	// (0x00054e74) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6a96,	// (0x0004bbe0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc20a,	// (0x00051354) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbe38,	// (0x00050f82) main_ai5_sk_pane_g1

0xd570,	// (0x000526ba) popup_query_code_window_g1

0x6ec5,	// (0x0004c00f) popup_fep_vkb_icf_pane

0x6ed9,	// (0x0004c023) popup_fep_vtchi_icf_pane

0xc20a,	// (0x00051354) bg_icf_pane

0x70cd,	// (0x0004c217) list_vkb_icf_pane

0xc20a,	// (0x00051354) bg_icf_pane_cp01

0x70e5,	// (0x0004c22f) vtchi_icf_list_pane

0x70f5,	// (0x0004c23f) list_vkb_icf_pane_t1_ParamLimits

0x70f5,	// (0x0004c23f) list_vkb_icf_pane_t1

0x710f,	// (0x0004c259) vtchi_icf_list_pane_t1_ParamLimits

0x710f,	// (0x0004c259) vtchi_icf_list_pane_t1

0x6eb6,	// (0x0004c000) popup_fep_ituss_window_ParamLimits

0x6ed9,	// (0x0004c023) popup_fep_vtchi_icf_pane_ParamLimits

0x6efe,	// (0x0004c048) ituss_keypad_pane_ParamLimits

0x6f0a,	// (0x0004c054) ituss_sks_pane

0xc20a,	// (0x00051354) bg_icf_pane_ParamLimits

0x70be,	// (0x0004c208) icf_edit_indi_pane_ParamLimits

0x70be,	// (0x0004c208) icf_edit_indi_pane

0x70cd,	// (0x0004c217) list_vkb_icf_pane_ParamLimits

0xc20a,	// (0x00051354) bg_icf_pane_cp01_ParamLimits

0x70d9,	// (0x0004c223) icf_edit_indi_pane_cp01_ParamLimits

0x70d9,	// (0x0004c223) icf_edit_indi_pane_cp01

0x70ed,	// (0x0004c237) vtchi_query_pane

0xf232,	// (0x0005437c) icf_edit_indi_pane_g1_ParamLimits

0xf232,	// (0x0005437c) icf_edit_indi_pane_g1

0x7136,	// (0x0004c280) icf_edit_indi_pane_g2_ParamLimits

0x7136,	// (0x0004c280) icf_edit_indi_pane_g2

0x0001,

0xfd59,	// (0x00054ea3) icf_edit_indi_pane_g_ParamLimits

0xfd59,	// (0x00054ea3) icf_edit_indi_pane_g

0x7142,	// (0x0004c28c) icf_edit_indi_pane_t1

0x7150,	// (0x0004c29a) bg_input_focus_pane_cp042

0xc137,	// (0x00051281) vtchi_button_pane

0x7159,	// (0x0004c2a3) vtchi_query_pane_t1

0x7167,	// (0x0004c2b1) vtchi_query_pane_t2

0x765a,	// (0x0004c7a4) vtchi_query_pane_t3

0x0002,

0xfd5e,	// (0x00054ea8) vtchi_query_pane_t

0xb7b5,	// (0x000508ff) bg_button_pane_cp13

0x7668,	// (0x0004c7b2) vtchi_button_pane_g1

0x7670,	// (0x0004c7ba) ituss_sks_pane_g1

0x767b,	// (0x0004c7c5) ituss_sks_pane_g2

0x0001,

0xfd65,	// (0x00054eaf) ituss_sks_pane_g

0x7683,	// (0x0004c7cd) ituss_sks_pane_t1

0x7691,	// (0x0004c7db) ituss_sks_pane_t2

0x0001,

0xfd6a,	// (0x00054eb4) ituss_sks_pane_t

0xec79,	// (0x00053dc3) indicator_nsta_pane_cp_g1

0xec82,	// (0x00053dcc) indicator_nsta_pane_cp_g2

0xec8a,	// (0x00053dd4) indicator_nsta_pane_cp_g3

0xec92,	// (0x00053ddc) indicator_nsta_pane_cp_g4

0xec9a,	// (0x00053de4) indicator_nsta_pane_cp_g5

0xeca2,	// (0x00053dec) indicator_nsta_pane_cp_g6

0x0005,

0x0209,	// (0x00045353) indicator_nsta_pane_cp_g

0xb91e,	// (0x00050a68) cell_graphic2_pane_t2_ParamLimits

0xb91e,	// (0x00050a68) cell_graphic2_pane_t2

0x0001,

0xfc21,	// (0x00054d6b) cell_graphic2_pane_t_ParamLimits

0xfc21,	// (0x00054d6b) cell_graphic2_pane_t

0xb954,	// (0x00050a9e) cell_graphic2_control_pane_t1

0x976b,	// (0x0004e8b5) signal_pane_g3_ParamLimits

0x976b,	// (0x0004e8b5) signal_pane_g3

0x977f,	// (0x0004e8c9) signal_pane_g4_ParamLimits

0x977f,	// (0x0004e8c9) signal_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
