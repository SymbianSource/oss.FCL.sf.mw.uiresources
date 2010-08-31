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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003a1ec };

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
0x772b,	// (0x00041917) Screen

0x773f,	// (0x0004192b) application_window_ParamLimits

0x773f,	// (0x0004192b) application_window

0x7759,	// (0x00041945) screen_g1

0x5a26,	// (0x0003fc12) area_bottom_pane_ParamLimits

0x5a26,	// (0x0003fc12) area_bottom_pane

0x5ae6,	// (0x0003fcd2) area_top_pane_ParamLimits

0x5ae6,	// (0x0003fcd2) area_top_pane

0x5b7a,	// (0x0003fd66) main_pane_ParamLimits

0x5b7a,	// (0x0003fd66) main_pane

0x7763,	// (0x0004194f) misc_graphics

0x969b,	// (0x00043887) battery_pane_ParamLimits

0x969b,	// (0x00043887) battery_pane

0xa3ba,	// (0x000445a6) bg_status_flat_pane_g8

0xa3c2,	// (0x000445ae) bg_status_flat_pane_g9

0x975d,	// (0x00043949) context_pane_ParamLimits

0x975d,	// (0x00043949) context_pane

0x9873,	// (0x00043a5f) navi_pane_ParamLimits

0x9873,	// (0x00043a5f) navi_pane

0x98f0,	// (0x00043adc) signal_pane_ParamLimits

0x98f0,	// (0x00043adc) signal_pane

0x0008,

0xf88f,	// (0x00049a7b) bg_status_flat_pane_g

0x995d,	// (0x00043b49) status_pane_g1_ParamLimits

0x995d,	// (0x00043b49) status_pane_g1

0x9971,	// (0x00043b5d) status_pane_g2_ParamLimits

0x9971,	// (0x00043b5d) status_pane_g2

0x997d,	// (0x00043b69) status_pane_g3_ParamLimits

0x997d,	// (0x00043b69) status_pane_g3

0x0004,

0xf7bd,	// (0x000499a9) status_pane_g_ParamLimits

0xf7bd,	// (0x000499a9) status_pane_g

0x99b1,	// (0x00043b9d) title_pane_ParamLimits

0x99b1,	// (0x00043b9d) title_pane

0x99ee,	// (0x00043bda) uni_indicator_pane_ParamLimits

0x99ee,	// (0x00043bda) uni_indicator_pane

0x902c,	// (0x00043218) bg_list_pane_ParamLimits

0x902c,	// (0x00043218) bg_list_pane

0x64b2,	// (0x0004069e) find_pane

0x904c,	// (0x00043238) listscroll_app_pane_ParamLimits

0x904c,	// (0x00043238) listscroll_app_pane

0x9058,	// (0x00043244) listscroll_form_pane

0x64ba,	// (0x000406a6) listscroll_gen_pane_ParamLimits

0x64ba,	// (0x000406a6) listscroll_gen_pane

0x9058,	// (0x00043244) listscroll_set_pane

0x829d,	// (0x00042489) main_idle_act_pane

0x8d14,	// (0x00042f00) main_idle_trad_pane

0x8d14,	// (0x00042f00) main_list_empty_pane

0x9072,	// (0x0004325e) main_midp_pane

0x907e,	// (0x0004326a) main_pane_g1_ParamLimits

0x907e,	// (0x0004326a) main_pane_g1

0x908c,	// (0x00043278) popup_ai_message_window_ParamLimits

0x908c,	// (0x00043278) popup_ai_message_window

0x912e,	// (0x0004331a) popup_fep_china_uni_window_ParamLimits

0x912e,	// (0x0004331a) popup_fep_china_uni_window

0x918a,	// (0x00043376) popup_fep_japan_candidate_window_ParamLimits

0x918a,	// (0x00043376) popup_fep_japan_candidate_window

0x91aa,	// (0x00043396) popup_fep_japan_predictive_window_ParamLimits

0x91aa,	// (0x00043396) popup_fep_japan_predictive_window

0x91da,	// (0x000433c6) popup_find_window

0x91e7,	// (0x000433d3) popup_grid_graphic_window_ParamLimits

0x91e7,	// (0x000433d3) popup_grid_graphic_window

0x920f,	// (0x000433fb) popup_large_graphic_colour_window

0x9235,	// (0x00043421) popup_menu_window_ParamLimits

0x9235,	// (0x00043421) popup_menu_window

0x93ed,	// (0x000435d9) popup_note_image_window

0x93d9,	// (0x000435c5) popup_note_wait_window_ParamLimits

0x93d9,	// (0x000435c5) popup_note_wait_window

0x93d9,	// (0x000435c5) popup_note_window_ParamLimits

0x93d9,	// (0x000435c5) popup_note_window

0x9443,	// (0x0004362f) popup_query_code_window_ParamLimits

0x9443,	// (0x0004362f) popup_query_code_window

0x9457,	// (0x00043643) popup_query_data_code_window_ParamLimits

0x9457,	// (0x00043643) popup_query_data_code_window

0x9474,	// (0x00043660) popup_query_data_window_ParamLimits

0x9474,	// (0x00043660) popup_query_data_window

0x9490,	// (0x0004367c) popup_query_sat_info_window_ParamLimits

0x9490,	// (0x0004367c) popup_query_sat_info_window

0x94c9,	// (0x000436b5) popup_snote_single_graphic_window_ParamLimits

0x94c9,	// (0x000436b5) popup_snote_single_graphic_window

0x94c9,	// (0x000436b5) popup_snote_single_text_window_ParamLimits

0x94c9,	// (0x000436b5) popup_snote_single_text_window

0x94de,	// (0x000436ca) popup_sub_window_general

0x960e,	// (0x000437fa) popup_window_general_ParamLimits

0x960e,	// (0x000437fa) popup_window_general

0x9623,	// (0x0004380f) power_save_pane

0x6355,	// (0x00040541) control_pane_g1_ParamLimits

0x6355,	// (0x00040541) control_pane_g1

0x637e,	// (0x0004056a) control_pane_g2_ParamLimits

0x637e,	// (0x0004056a) control_pane_g2

0x8fdd,	// (0x000431c9) control_pane_g3_ParamLimits

0x8fdd,	// (0x000431c9) control_pane_g3

0x0007,

0xf7a5,	// (0x00049991) control_pane_g_ParamLimits

0xf7a5,	// (0x00049991) control_pane_g

0x63c5,	// (0x000405b1) control_pane_t1_ParamLimits

0x63c5,	// (0x000405b1) control_pane_t1

0x6417,	// (0x00040603) control_pane_t2_ParamLimits

0x6417,	// (0x00040603) control_pane_t2

0x0002,

0xf7b6,	// (0x000499a2) control_pane_t_ParamLimits

0xf7b6,	// (0x000499a2) control_pane_t

0x8efe,	// (0x000430ea) navi_navi_volume_pane_cp1

0x8f07,	// (0x000430f3) status_small_icon_pane

0x8f0f,	// (0x000430fb) status_small_pane_g1_ParamLimits

0x8f0f,	// (0x000430fb) status_small_pane_g1

0x8f43,	// (0x0004312f) status_small_pane_g2_ParamLimits

0x8f43,	// (0x0004312f) status_small_pane_g2

0x8f4f,	// (0x0004313b) status_small_pane_g3_ParamLimits

0x8f4f,	// (0x0004313b) status_small_pane_g3

0x8f5b,	// (0x00043147) status_small_pane_g4_ParamLimits

0x8f5b,	// (0x00043147) status_small_pane_g4

0x8f67,	// (0x00043153) status_small_pane_g5_ParamLimits

0x8f67,	// (0x00043153) status_small_pane_g5

0x8f76,	// (0x00043162) status_small_pane_g6_ParamLimits

0x8f76,	// (0x00043162) status_small_pane_g6

0x0007,

0xf794,	// (0x00049980) status_small_pane_g_ParamLimits

0xf794,	// (0x00049980) status_small_pane_g

0x8fa6,	// (0x00043192) status_small_pane_t1

0x8fc9,	// (0x000431b5) status_small_wait_pane_ParamLimits

0x8fc9,	// (0x000431b5) status_small_wait_pane

0x8795,	// (0x00042981) aid_levels_signal_ParamLimits

0x8795,	// (0x00042981) aid_levels_signal

0x87a7,	// (0x00042993) signal_pane_g1_ParamLimits

0x87a7,	// (0x00042993) signal_pane_g1

0x87bc,	// (0x000429a8) signal_pane_g2_ParamLimits

0x87bc,	// (0x000429a8) signal_pane_g2

0x0001,

0xf729,	// (0x00049915) signal_pane_g_ParamLimits

0xf729,	// (0x00049915) signal_pane_g

0x87d1,	// (0x000429bd) context_pane_g1

0x776d,	// (0x00041959) title_pane_g1

0x77a3,	// (0x0004198f) title_pane_t1

0x780b,	// (0x000419f7) title_pane_t2

0x7831,	// (0x00041a1d) title_pane_t3

0x0002,

0xf573,	// (0x0004975f) title_pane_t

0x9a06,	// (0x00043bf2) aid_levels_battery_ParamLimits

0x9a06,	// (0x00043bf2) aid_levels_battery

0x9a1a,	// (0x00043c06) battery_pane_g1_ParamLimits

0x9a1a,	// (0x00043c06) battery_pane_g1

0x9a30,	// (0x00043c1c) battery_pane_g2_ParamLimits

0x9a30,	// (0x00043c1c) battery_pane_g2

0x0001,

0xf7c8,	// (0x000499b4) battery_pane_g_ParamLimits

0xf7c8,	// (0x000499b4) battery_pane_g

0xacf6,	// (0x00044ee2) uni_indicator_pane_g1

0xad0b,	// (0x00044ef7) uni_indicator_pane_g2

0xad21,	// (0x00044f0d) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x00049b23) uni_indicator_pane_g

0x8b92,	// (0x00042d7e) navi_icon_pane_ParamLimits

0x8b92,	// (0x00042d7e) navi_icon_pane

0x8adb,	// (0x00042cc7) navi_midp_pane

0x8bae,	// (0x00042d9a) navi_navi_pane

0x8bb8,	// (0x00042da4) navi_text_pane_ParamLimits

0x8bb8,	// (0x00042da4) navi_text_pane

0x7759,	// (0x00041945) status_small_wait_pane_g1

0x7c60,	// (0x00041e4c) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x00049b1e) status_small_wait_pane_g

0xaa1b,	// (0x00044c07) navi_navi_icon_text_pane

0xaa23,	// (0x00044c0f) navi_navi_pane_g1_ParamLimits

0xaa23,	// (0x00044c0f) navi_navi_pane_g1

0xaa35,	// (0x00044c21) navi_navi_pane_g2_ParamLimits

0xaa35,	// (0x00044c21) navi_navi_pane_g2

0x0001,

0xf900,	// (0x00049aec) navi_navi_pane_g_ParamLimits

0xf900,	// (0x00049aec) navi_navi_pane_g

0xaa47,	// (0x00044c33) navi_navi_tabs_pane

0xaa50,	// (0x00044c3c) navi_navi_text_pane

0xaa1b,	// (0x00044c07) navi_navi_volume_pane

0xa9f4,	// (0x00044be0) navi_text_pane_t1

0xa9e5,	// (0x00044bd1) navi_icon_pane_g1

0xa938,	// (0x00044b24) navi_navi_text_pane_t1

0x6765,	// (0x00040951) navi_navi_volume_pane_g1

0x676d,	// (0x00040959) volume_small_pane

0xa89e,	// (0x00044a8a) navi_navi_icon_text_pane_g1

0xa8a6,	// (0x00044a92) navi_navi_icon_text_pane_t1

0x8bae,	// (0x00042d9a) navi_tabs_2_long_pane

0x8bae,	// (0x00042d9a) navi_tabs_2_pane

0x8bae,	// (0x00042d9a) navi_tabs_3_long_pane

0x8bae,	// (0x00042d9a) navi_tabs_3_pane

0x8bae,	// (0x00042d9a) navi_tabs_4_pane

0x6745,	// (0x00040931) tabs_2_active_pane_ParamLimits

0x6745,	// (0x00040931) tabs_2_active_pane

0x6755,	// (0x00040941) tabs_2_passive_pane_ParamLimits

0x6755,	// (0x00040941) tabs_2_passive_pane

0x6713,	// (0x000408ff) tabs_3_active_pane_ParamLimits

0x6713,	// (0x000408ff) tabs_3_active_pane

0x6723,	// (0x0004090f) tabs_3_passive_pane_ParamLimits

0x6723,	// (0x0004090f) tabs_3_passive_pane

0x6734,	// (0x00040920) tabs_3_passive_pane_cp_ParamLimits

0x6734,	// (0x00040920) tabs_3_passive_pane_cp

0x66cf,	// (0x000408bb) tabs_4_active_pane_ParamLimits

0x66cf,	// (0x000408bb) tabs_4_active_pane

0x66e0,	// (0x000408cc) tabs_4_passive_pane_ParamLimits

0x66e0,	// (0x000408cc) tabs_4_passive_pane

0x66f1,	// (0x000408dd) tabs_4_passive_pane_cp_ParamLimits

0x66f1,	// (0x000408dd) tabs_4_passive_pane_cp

0x6702,	// (0x000408ee) tabs_4_passive_pane_cp2_ParamLimits

0x6702,	// (0x000408ee) tabs_4_passive_pane_cp2

0x66ab,	// (0x00040897) tabs_2_long_active_pane_ParamLimits

0x66ab,	// (0x00040897) tabs_2_long_active_pane

0x66bd,	// (0x000408a9) tabs_2_long_passive_pane_ParamLimits

0x66bd,	// (0x000408a9) tabs_2_long_passive_pane

0x666c,	// (0x00040858) tabs_3_long_active_pane_ParamLimits

0x666c,	// (0x00040858) tabs_3_long_active_pane

0x667f,	// (0x0004086b) tabs_3_long_passive_pane_ParamLimits

0x667f,	// (0x0004086b) tabs_3_long_passive_pane

0x6698,	// (0x00040884) tabs_3_long_passive_pane_cp_ParamLimits

0x6698,	// (0x00040884) tabs_3_long_passive_pane_cp

0x6612,	// (0x000407fe) volume_small_pane_g1

0x661b,	// (0x00040807) volume_small_pane_g2

0x6624,	// (0x00040810) volume_small_pane_g3

0x662d,	// (0x00040819) volume_small_pane_g4

0x6636,	// (0x00040822) volume_small_pane_g5

0x663f,	// (0x0004082b) volume_small_pane_g6

0x6648,	// (0x00040834) volume_small_pane_g7

0x6651,	// (0x0004083d) volume_small_pane_g8

0x665a,	// (0x00040846) volume_small_pane_g9

0x6663,	// (0x0004084f) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x00049ab8) volume_small_pane_g

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp2_ParamLimits

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp2

0x7851,	// (0x00041a3d) tabs_3_active_pane_g1

0x7859,	// (0x00041a45) tabs_3_active_pane_t1

0x7843,	// (0x00041a2f) bg_passive_tab_pane_cp2_ParamLimits

0x7843,	// (0x00041a2f) bg_passive_tab_pane_cp2

0x7851,	// (0x00041a3d) tabs_3_passive_pane_g1

0x7859,	// (0x00041a45) tabs_3_passive_pane_t1

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp3_ParamLimits

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp3

0x786b,	// (0x00041a57) tabs_4_active_pane_g1

0x7873,	// (0x00041a5f) tabs_4_active_pane_t1

0x7843,	// (0x00041a2f) bg_passive_tab_pane_cp3_ParamLimits

0x7843,	// (0x00041a2f) bg_passive_tab_pane_cp3

0x786b,	// (0x00041a57) tabs_4_1_passive_pane_g1

0x7873,	// (0x00041a5f) tabs_4_1_passive_pane_t1

0x9072,	// (0x0004325e) list_highlight_pane_cp2

0xaf7f,	// (0x0004516b) list_set_pane_ParamLimits

0xaf7f,	// (0x0004516b) list_set_pane

0xb025,	// (0x00045211) main_pane_set_t1_ParamLimits

0xb025,	// (0x00045211) main_pane_set_t1

0xb045,	// (0x00045231) main_pane_set_t2_ParamLimits

0xb045,	// (0x00045231) main_pane_set_t2

0xb059,	// (0x00045245) main_pane_set_t3_ParamLimits

0xb059,	// (0x00045245) main_pane_set_t3

0xb06b,	// (0x00045257) main_pane_set_t4_ParamLimits

0xb06b,	// (0x00045257) main_pane_set_t4

0x0003,

0xf99c,	// (0x00049b88) main_pane_set_t_ParamLimits

0xf99c,	// (0x00049b88) main_pane_set_t

0xb07d,	// (0x00045269) setting_code_pane

0xb089,	// (0x00045275) setting_slider_graphic_pane

0xb089,	// (0x00045275) setting_slider_pane

0xb089,	// (0x00045275) setting_text_pane

0xb089,	// (0x00045275) setting_volume_pane

0x5dbf,	// (0x0003ffab) volume_set_pane

0x7843,	// (0x00041a2f) bg_set_opt_pane_cp

0x5dc7,	// (0x0003ffb3) setting_slider_pane_t1

0x5de0,	// (0x0003ffcc) setting_slider_pane_t2

0x5dfa,	// (0x0003ffe6) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00049766) setting_slider_pane_t

0x5e12,	// (0x0003fffe) slider_set_pane

0x7763,	// (0x0004194f) bg_set_opt_pane_cp2

0x7885,	// (0x00041a71) setting_slider_graphic_pane_g1

0x5e28,	// (0x00040014) setting_slider_graphic_pane_t1

0x5e38,	// (0x00040024) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0004976d) setting_slider_graphic_pane_t

0x5e48,	// (0x00040034) slider_set_pane_cp

0x7763,	// (0x0004194f) input_focus_pane_cp1

0xaf3e,	// (0x0004512a) list_set_text_pane

0x7759,	// (0x00041945) setting_text_pane_g1

0x7763,	// (0x0004194f) input_focus_pane_cp2

0x7759,	// (0x00041945) setting_code_pane_g1

0x788e,	// (0x00041a7a) setting_code_pane_t1

0x4c0f,	// (0x0003edfb) set_text_pane_t1_ParamLimits

0x4c0f,	// (0x0003edfb) set_text_pane_t1

0x8116,	// (0x00042302) set_opt_bg_pane_g1

0x811e,	// (0x0004230a) set_opt_bg_pane_g2

0xaf18,	// (0x00045104) set_opt_bg_pane_g3

0x812e,	// (0x0004231a) set_opt_bg_pane_g4

0x8136,	// (0x00042322) set_opt_bg_pane_g5

0x813e,	// (0x0004232a) set_opt_bg_pane_g6

0xaf22,	// (0x0004510e) set_opt_bg_pane_g7

0xaf2a,	// (0x00045116) set_opt_bg_pane_g8

0xaf34,	// (0x00045120) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x00049b75) set_opt_bg_pane_g

0xaf0b,	// (0x000450f7) slider_set_pane_g1

0x67da,	// (0x000409c6) slider_set_pane_g2

0x0006,

0xf97a,	// (0x00049b66) slider_set_pane_g

0x6776,	// (0x00040962) volume_set_pane_g1

0x677e,	// (0x0004096a) volume_set_pane_g2

0x6786,	// (0x00040972) volume_set_pane_g3

0x678e,	// (0x0004097a) volume_set_pane_g4

0x6796,	// (0x00040982) volume_set_pane_g5

0x679e,	// (0x0004098a) volume_set_pane_g6

0x67a6,	// (0x00040992) volume_set_pane_g7

0x67ae,	// (0x0004099a) volume_set_pane_g8

0x67b6,	// (0x000409a2) volume_set_pane_g9

0x67be,	// (0x000409aa) volume_set_pane_g10

0x0009,

0xf952,	// (0x00049b3e) volume_set_pane_g

0x789c,	// (0x00041a88) indicator_pane_ParamLimits

0x789c,	// (0x00041a88) indicator_pane

0x78a8,	// (0x00041a94) main_idle_pane_g2_ParamLimits

0x78a8,	// (0x00041a94) main_idle_pane_g2

0x78d0,	// (0x00041abc) main_pane_idle_g1_ParamLimits

0x78d0,	// (0x00041abc) main_pane_idle_g1

0x78dd,	// (0x00041ac9) popup_clock_digital_analogue_window_ParamLimits

0x78dd,	// (0x00041ac9) popup_clock_digital_analogue_window

0x78f4,	// (0x00041ae0) soft_indicator_pane_ParamLimits

0x78f4,	// (0x00041ae0) soft_indicator_pane

0x7900,	// (0x00041aec) wallpaper_pane_ParamLimits

0x7900,	// (0x00041aec) wallpaper_pane

0x7759,	// (0x00041945) wallpaper_pane_g1

0x7914,	// (0x00041b00) indicator_pane_g1_ParamLimits

0x7914,	// (0x00041b00) indicator_pane_g1

0xb2f2,	// (0x000454de) navi_navi_icon_text_pane_srt_g1

0x792f,	// (0x00041b1b) soft_indicator_pane_t1

0x7949,	// (0x00041b35) aid_ps_area_pane

0x795a,	// (0x00041b46) aid_ps_clock_pane

0x7968,	// (0x00041b54) aid_ps_indicator_pane

0x7974,	// (0x00041b60) indicator_ps_pane_ParamLimits

0x7974,	// (0x00041b60) indicator_ps_pane

0x7983,	// (0x00041b6f) power_save_pane_g1_ParamLimits

0x7983,	// (0x00041b6f) power_save_pane_g1

0x798f,	// (0x00041b7b) power_save_pane_g2_ParamLimits

0x798f,	// (0x00041b7b) power_save_pane_g2

0x59da,	// (0x0003fbc6) aid_navinavi_width_pane

0x7949,	// (0x00041b35) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00049772) power_save_pane_g_ParamLimits

0xf586,	// (0x00049772) power_save_pane_g

0x799d,	// (0x00041b89) power_save_pane_t1_ParamLimits

0x799d,	// (0x00041b89) power_save_pane_t1

0x795a,	// (0x00041b46) aid_ps_clock_pane_ParamLimits

0x7968,	// (0x00041b54) aid_ps_indicator_pane_ParamLimits

0x79af,	// (0x00041b9b) power_save_pane_t4_ParamLimits

0x79af,	// (0x00041b9b) power_save_pane_t4

0x0001,

0xf58b,	// (0x00049777) power_save_pane_t_ParamLimits

0xf58b,	// (0x00049777) power_save_pane_t

0x79d9,	// (0x00041bc5) power_save_t3_ParamLimits

0x79d9,	// (0x00041bc5) power_save_t3

0x79c4,	// (0x00041bb0) power_save_t2_ParamLimits

0x79c4,	// (0x00041bb0) power_save_t2

0x79ee,	// (0x00041bda) indicator_ps_pane_g1

0x79f7,	// (0x00041be3) ai_gene_pane_ParamLimits

0x79f7,	// (0x00041be3) ai_gene_pane

0x7a03,	// (0x00041bef) ai_links_pane_ParamLimits

0x7a03,	// (0x00041bef) ai_links_pane

0x7a0f,	// (0x00041bfb) indicator_pane_cp1_ParamLimits

0x7a0f,	// (0x00041bfb) indicator_pane_cp1

0x7a1b,	// (0x00041c07) main_pane_idle_g1_cp_ParamLimits

0x7a1b,	// (0x00041c07) main_pane_idle_g1_cp

0x7a27,	// (0x00041c13) popup_ai_links_title_window

0x7a30,	// (0x00041c1c) soft_indicator_pane_cp1_ParamLimits

0x7a30,	// (0x00041c1c) soft_indicator_pane_cp1

0xace4,	// (0x00044ed0) ai_links_pane_g1

0xaced,	// (0x00044ed9) grid_ai_links_pane

0xacc7,	// (0x00044eb3) ai_gene_pane_1

0xacd2,	// (0x00044ebe) ai_gene_pane_2

0xacdb,	// (0x00044ec7) list_highlight_pane_cp4

0xacab,	// (0x00044e97) cell_ai_link_pane_ParamLimits

0xacab,	// (0x00044e97) cell_ai_link_pane

0xaca3,	// (0x00044e8f) cell_ai_link_pane_g1

0x7c60,	// (0x00041e4c) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x00049b19) cell_ai_link_pane_g

0x7763,	// (0x0004194f) grid_highlight_cp2

0x7763,	// (0x0004194f) bg_popup_sub_pane_cp1

0x7a4a,	// (0x00041c36) popup_ai_links_title_window_t1

0xabf1,	// (0x00044ddd) ai_gene_pane_1_g1_ParamLimits

0xabf1,	// (0x00044ddd) ai_gene_pane_1_g1

0xabfd,	// (0x00044de9) ai_gene_pane_1_g2_ParamLimits

0xabfd,	// (0x00044de9) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x00049b0f) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x00049b0f) ai_gene_pane_1_g

0xac0a,	// (0x00044df6) ai_gene_pane_1_t1_ParamLimits

0xac0a,	// (0x00044df6) ai_gene_pane_1_t1

0xac3e,	// (0x00044e2a) grid_ai_soft_ind_pane

0xabdc,	// (0x00044dc8) ai_gene_pane_2_t1_ParamLimits

0xabdc,	// (0x00044dc8) ai_gene_pane_2_t1

0x7a59,	// (0x00041c45) main_pane_empty_t1_ParamLimits

0x7a59,	// (0x00041c45) main_pane_empty_t1

0x7a71,	// (0x00041c5d) main_pane_empty_t2_ParamLimits

0x7a71,	// (0x00041c5d) main_pane_empty_t2

0x7a86,	// (0x00041c72) main_pane_empty_t3_ParamLimits

0x7a86,	// (0x00041c72) main_pane_empty_t3

0x7a98,	// (0x00041c84) main_pane_empty_t4_ParamLimits

0x7a98,	// (0x00041c84) main_pane_empty_t4

0x7aaa,	// (0x00041c96) main_pane_empty_t5_ParamLimits

0x7aaa,	// (0x00041c96) main_pane_empty_t5

0x0004,

0xf590,	// (0x0004977c) main_pane_empty_t_ParamLimits

0xf590,	// (0x0004977c) main_pane_empty_t

0x8167,	// (0x00042353) bg_popup_window_pane_ParamLimits

0x8167,	// (0x00042353) bg_popup_window_pane

0xa946,	// (0x00044b32) find_popup_pane_cp2_ParamLimits

0xa946,	// (0x00044b32) find_popup_pane_cp2

0xa952,	// (0x00044b3e) heading_pane_ParamLimits

0xa952,	// (0x00044b3e) heading_pane

0x7763,	// (0x0004194f) bg_popup_sub_pane

0xa8c0,	// (0x00044aac) bg_popup_window_pane_g1_ParamLimits

0xa8c0,	// (0x00044aac) bg_popup_window_pane_g1

0xa8cc,	// (0x00044ab8) bg_popup_window_pane_g2_ParamLimits

0xa8cc,	// (0x00044ab8) bg_popup_window_pane_g2

0xa8d8,	// (0x00044ac4) bg_popup_window_pane_g3_ParamLimits

0xa8d8,	// (0x00044ac4) bg_popup_window_pane_g3

0xa8e4,	// (0x00044ad0) bg_popup_window_pane_g4_ParamLimits

0xa8e4,	// (0x00044ad0) bg_popup_window_pane_g4

0xa8f0,	// (0x00044adc) bg_popup_window_pane_g5_ParamLimits

0xa8f0,	// (0x00044adc) bg_popup_window_pane_g5

0xa8fc,	// (0x00044ae8) bg_popup_window_pane_g6_ParamLimits

0xa8fc,	// (0x00044ae8) bg_popup_window_pane_g6

0xa908,	// (0x00044af4) bg_popup_window_pane_g7_ParamLimits

0xa908,	// (0x00044af4) bg_popup_window_pane_g7

0xa914,	// (0x00044b00) bg_popup_window_pane_g8_ParamLimits

0xa914,	// (0x00044b00) bg_popup_window_pane_g8

0xa920,	// (0x00044b0c) bg_popup_window_pane_g9_ParamLimits

0xa920,	// (0x00044b0c) bg_popup_window_pane_g9

0xa92c,	// (0x00044b18) bg_popup_window_pane_g10_ParamLimits

0xa92c,	// (0x00044b18) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x00049ad7) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x00049ad7) bg_popup_window_pane_g

0xa855,	// (0x00044a41) bg_popup_heading_pane_ParamLimits

0xa855,	// (0x00044a41) bg_popup_heading_pane

0x6906,	// (0x00040af2) tabs_4_passive_pane_cp_srt_ParamLimits

0x6906,	// (0x00040af2) tabs_4_passive_pane_cp_srt

0x6918,	// (0x00040b04) tabs_4_passive_pane_srt_ParamLimits

0xa869,	// (0x00044a55) heading_pane_g2

0x6918,	// (0x00040b04) tabs_4_passive_pane_srt

0x9072,	// (0x0004325e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9072,	// (0x0004325e) bg_passive_tab_pane_cp3_srt

0xa871,	// (0x00044a5d) heading_pane_t1_ParamLimits

0xa871,	// (0x00044a5d) heading_pane_t1

0xa888,	// (0x00044a74) heading_pane_t2_ParamLimits

0xa888,	// (0x00044a74) heading_pane_t2

0x0001,

0xf8e6,	// (0x00049ad2) heading_pane_t_ParamLimits

0xf8e6,	// (0x00049ad2) heading_pane_t

0xa382,	// (0x0004456e) bg_popup_heading_pane_g1

0xa431,	// (0x0004461d) bg_popup_heading_pane_g2

0xa43b,	// (0x00044627) bg_popup_heading_pane_g3

0xa445,	// (0x00044631) bg_popup_heading_pane_g4

0xa44f,	// (0x0004463b) bg_popup_heading_pane_g5

0xa459,	// (0x00044645) bg_popup_heading_pane_g6

0xa461,	// (0x0004464d) bg_popup_heading_pane_g7

0xa469,	// (0x00044655) bg_popup_heading_pane_g8

0xa473,	// (0x0004465f) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x00049a8e) bg_popup_heading_pane_g

0x9b08,	// (0x00043cf4) bg_popup_sub_pane_g1

0x9b10,	// (0x00043cfc) bg_popup_sub_pane_g2

0x9b18,	// (0x00043d04) bg_popup_sub_pane_g3

0x9b20,	// (0x00043d0c) bg_popup_sub_pane_g4

0x9b28,	// (0x00043d14) bg_popup_sub_pane_g5

0x9b30,	// (0x00043d1c) bg_popup_sub_pane_g6

0x9b38,	// (0x00043d24) bg_popup_sub_pane_g7

0x9b40,	// (0x00043d2c) bg_popup_sub_pane_g8

0x9b48,	// (0x00043d34) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x00049a68) bg_popup_sub_pane_g

0x7abe,	// (0x00041caa) bg_popup_window_pane_cp5_ParamLimits

0x7abe,	// (0x00041caa) bg_popup_window_pane_cp5

0x7ada,	// (0x00041cc6) popup_note_window_g1_ParamLimits

0x7ada,	// (0x00041cc6) popup_note_window_g1

0x7ae6,	// (0x00041cd2) popup_note_window_t1_ParamLimits

0x7ae6,	// (0x00041cd2) popup_note_window_t1

0x7afc,	// (0x00041ce8) popup_note_window_t2_ParamLimits

0x7afc,	// (0x00041ce8) popup_note_window_t2

0x7b12,	// (0x00041cfe) popup_note_window_t3_ParamLimits

0x7b12,	// (0x00041cfe) popup_note_window_t3

0x7b28,	// (0x00041d14) popup_note_window_t4_ParamLimits

0x7b28,	// (0x00041d14) popup_note_window_t4

0x7b50,	// (0x00041d3c) popup_note_window_t5_ParamLimits

0x7b50,	// (0x00041d3c) popup_note_window_t5

0x0004,

0xf59b,	// (0x00049787) popup_note_window_t_ParamLimits

0xf59b,	// (0x00049787) popup_note_window_t

0x7b74,	// (0x00041d60) bg_popup_window_pane_cp6_ParamLimits

0x7b74,	// (0x00041d60) bg_popup_window_pane_cp6

0xa2fe,	// (0x000444ea) popup_note_image_window_g1_ParamLimits

0xa2fe,	// (0x000444ea) popup_note_image_window_g1

0xa30a,	// (0x000444f6) popup_note_image_window_g2_ParamLimits

0xa30a,	// (0x000444f6) popup_note_image_window_g2

0x0001,

0xf870,	// (0x00049a5c) popup_note_image_window_g_ParamLimits

0xf870,	// (0x00049a5c) popup_note_image_window_g

0xa323,	// (0x0004450f) popup_note_image_window_t1_ParamLimits

0xa323,	// (0x0004450f) popup_note_image_window_t1

0xa33c,	// (0x00044528) popup_note_image_window_t2_ParamLimits

0xa33c,	// (0x00044528) popup_note_image_window_t2

0xa355,	// (0x00044541) popup_note_image_window_t3_ParamLimits

0xa355,	// (0x00044541) popup_note_image_window_t3

0x0002,

0xf875,	// (0x00049a61) popup_note_image_window_t_ParamLimits

0xf875,	// (0x00049a61) popup_note_image_window_t

0xa1bf,	// (0x000443ab) bg_popup_window_pane_cp7_ParamLimits

0xa1bf,	// (0x000443ab) bg_popup_window_pane_cp7

0xa1ef,	// (0x000443db) popup_note_wait_window_g1_ParamLimits

0xa1ef,	// (0x000443db) popup_note_wait_window_g1

0xa1fb,	// (0x000443e7) popup_note_wait_window_g2_ParamLimits

0xa1fb,	// (0x000443e7) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x00049a4a) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x00049a4a) popup_note_wait_window_g

0xa213,	// (0x000443ff) popup_note_wait_window_t1_ParamLimits

0xa213,	// (0x000443ff) popup_note_wait_window_t1

0xa23a,	// (0x00044426) popup_note_wait_window_t2_ParamLimits

0xa23a,	// (0x00044426) popup_note_wait_window_t2

0xa257,	// (0x00044443) popup_note_wait_window_t3_ParamLimits

0xa257,	// (0x00044443) popup_note_wait_window_t3

0xa26a,	// (0x00044456) popup_note_wait_window_t4_ParamLimits

0xa26a,	// (0x00044456) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x00049a51) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x00049a51) popup_note_wait_window_t

0xa28f,	// (0x0004447b) wait_bar_pane_ParamLimits

0xa28f,	// (0x0004447b) wait_bar_pane

0x7763,	// (0x0004194f) wait_anim_pane

0x7763,	// (0x0004194f) wait_border_pane

0x7759,	// (0x00041945) wait_anim_pane_g1

0x7759,	// (0x00041945) wait_anim_pane_g2

0x0001,

0xf724,	// (0x00049910) wait_anim_pane_g

0xa163,	// (0x0004434f) wait_border_pane_g1

0xa16e,	// (0x0004435a) wait_border_pane_g2

0xa177,	// (0x00044363) wait_border_pane_g3

0x0002,

0xf857,	// (0x00049a43) wait_border_pane_g

0x9fc2,	// (0x000441ae) bg_popup_window_pane_cp16_ParamLimits

0x9fc2,	// (0x000441ae) bg_popup_window_pane_cp16

0xa0c2,	// (0x000442ae) indicator_popup_pane_cp4_ParamLimits

0xa0c2,	// (0x000442ae) indicator_popup_pane_cp4

0xa0d6,	// (0x000442c2) popup_query_data_window_t1_ParamLimits

0xa0d6,	// (0x000442c2) popup_query_data_window_t1

0xa0e8,	// (0x000442d4) popup_query_data_window_t2_ParamLimits

0xa0e8,	// (0x000442d4) popup_query_data_window_t2

0xa101,	// (0x000442ed) popup_query_data_window_t3_ParamLimits

0xa101,	// (0x000442ed) popup_query_data_window_t3

0x0002,

0xf850,	// (0x00049a3c) popup_query_data_window_t_ParamLimits

0xf850,	// (0x00049a3c) popup_query_data_window_t

0xa127,	// (0x00044313) query_popup_data_pane_ParamLimits

0xa127,	// (0x00044313) query_popup_data_pane

0xa13b,	// (0x00044327) query_popup_data_pane_cp1_ParamLimits

0xa13b,	// (0x00044327) query_popup_data_pane_cp1

0x9fc2,	// (0x000441ae) bg_popup_window_pane_cp10_ParamLimits

0x9fc2,	// (0x000441ae) bg_popup_window_pane_cp10

0x9ff4,	// (0x000441e0) indicator_popup_pane_ParamLimits

0x9ff4,	// (0x000441e0) indicator_popup_pane

0xa016,	// (0x00044202) popup_query_code_window_t1_ParamLimits

0xa016,	// (0x00044202) popup_query_code_window_t1

0xa030,	// (0x0004421c) popup_query_code_window_t2_ParamLimits

0xa030,	// (0x0004421c) popup_query_code_window_t2

0xa079,	// (0x00044265) popup_query_code_window_t3_ParamLimits

0xa079,	// (0x00044265) popup_query_code_window_t3

0x0002,

0xf849,	// (0x00049a35) popup_query_code_window_t_ParamLimits

0xf849,	// (0x00049a35) popup_query_code_window_t

0xa0a8,	// (0x00044294) query_popup_pane_ParamLimits

0xa0a8,	// (0x00044294) query_popup_pane

0x7b74,	// (0x00041d60) bg_popup_window_pane_cp15_ParamLimits

0x7b74,	// (0x00041d60) bg_popup_window_pane_cp15

0x7b92,	// (0x00041d7e) indicator_popup_pane_cp1_ParamLimits

0x7b92,	// (0x00041d7e) indicator_popup_pane_cp1

0x7ba5,	// (0x00041d91) indicator_popup_pane_cp2_ParamLimits

0x7ba5,	// (0x00041d91) indicator_popup_pane_cp2

0x7bb8,	// (0x00041da4) popup_query_data_code_window_g1_ParamLimits

0x7bb8,	// (0x00041da4) popup_query_data_code_window_g1

0x7bcb,	// (0x00041db7) popup_query_data_code_window_t1_ParamLimits

0x7bcb,	// (0x00041db7) popup_query_data_code_window_t1

0x7bdd,	// (0x00041dc9) popup_query_data_code_window_t2_ParamLimits

0x7bdd,	// (0x00041dc9) popup_query_data_code_window_t2

0x7bef,	// (0x00041ddb) popup_query_data_code_window_t3_ParamLimits

0x7bef,	// (0x00041ddb) popup_query_data_code_window_t3

0x7c05,	// (0x00041df1) popup_query_data_code_window_t4_ParamLimits

0x7c05,	// (0x00041df1) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00049792) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00049792) popup_query_data_code_window_t

0x652f,	// (0x0004071b) list_single_midp_graphic_pane_g3

0x7c1d,	// (0x00041e09) query_popup_data_pane_cp2_ParamLimits

0x7c30,	// (0x00041e1c) query_popup_pane_cp2_ParamLimits

0x7c30,	// (0x00041e1c) query_popup_pane_cp2

0x7763,	// (0x0004194f) bg_popup_window_pane_cp11

0x9fba,	// (0x000441a6) heading_pane_cp5

0x7d18,	// (0x00041f04) listscroll_popup_info_pane

0x7763,	// (0x0004194f) input_focus_pane_cp3

0x7c43,	// (0x00041e2f) query_popup_pane_t1

0x7c51,	// (0x00041e3d) list_popup_info_pane_ParamLimits

0x7c51,	// (0x00041e3d) list_popup_info_pane

0x7c60,	// (0x00041e4c) listscroll_popup_info_pane_g1

0x7c68,	// (0x00041e54) scroll_pane_cp7

0x7c72,	// (0x00041e5e) popup_info_list_pane_t1_ParamLimits

0x7c72,	// (0x00041e5e) popup_info_list_pane_t1

0x7c8c,	// (0x00041e78) popup_info_list_pane_t2_ParamLimits

0x7c8c,	// (0x00041e78) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0004979b) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0004979b) popup_info_list_pane_t

0x7763,	// (0x0004194f) bg_popup_window_pane_cp12

0xb30c,	// (0x000454f8) find_popup_pane

0x7843,	// (0x00041a2f) bg_popup_window_pane_cp3

0x7ca6,	// (0x00041e92) heading_pane_cp3

0x7cb2,	// (0x00041e9e) listscroll_popup_graphic_pane

0x7763,	// (0x0004194f) bg_popup_window_pane_cp4

0x7d0e,	// (0x00041efa) heading_pane_cp4

0x7d18,	// (0x00041f04) listscroll_popup_colour_pane

0x7d20,	// (0x00041f0c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d20,	// (0x00041f0c) cell_large_graphic_colour_none_popup_pane

0x7d34,	// (0x00041f20) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d34,	// (0x00041f20) grid_large_graphic_colour_popup_pane

0x7d60,	// (0x00041f4c) listscroll_popup_colour_pane_g1_ParamLimits

0x7d60,	// (0x00041f4c) listscroll_popup_colour_pane_g1

0x7d77,	// (0x00041f63) listscroll_popup_colour_pane_g2_ParamLimits

0x7d77,	// (0x00041f63) listscroll_popup_colour_pane_g2

0x7d8e,	// (0x00041f7a) listscroll_popup_colour_pane_g3_ParamLimits

0x7d8e,	// (0x00041f7a) listscroll_popup_colour_pane_g3

0x7d9e,	// (0x00041f8a) listscroll_popup_colour_pane_g4_ParamLimits

0x7d9e,	// (0x00041f8a) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x000497a0) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x000497a0) listscroll_popup_colour_pane_g

0x7db2,	// (0x00041f9e) scroll_pane_cp6_ParamLimits

0x7db2,	// (0x00041f9e) scroll_pane_cp6

0x7dc4,	// (0x00041fb0) cell_large_graphic_colour_popup_pane_ParamLimits

0x7dc4,	// (0x00041fb0) cell_large_graphic_colour_popup_pane

0x7de3,	// (0x00041fcf) cell_large_graphic_colour_none_popup_pane_t1

0x7763,	// (0x0004194f) grid_highlight_pane_cp5

0x7df2,	// (0x00041fde) cell_large_graphic_colour_popup_pane_g1

0x7dfa,	// (0x00041fe6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000497a9) cell_large_graphic_colour_popup_pane_g

0x7e02,	// (0x00041fee) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e0b,	// (0x00041ff7) grid_highlight_pane_cp4

0x7e13,	// (0x00041fff) bg_popup_window_pane_cp8_ParamLimits

0x7e13,	// (0x00041fff) bg_popup_window_pane_cp8

0x7e2e,	// (0x0004201a) popup_snote_single_text_window_g1_ParamLimits

0x7e2e,	// (0x0004201a) popup_snote_single_text_window_g1

0x7e40,	// (0x0004202c) popup_snote_single_text_window_t1_ParamLimits

0x7e40,	// (0x0004202c) popup_snote_single_text_window_t1

0x7e53,	// (0x0004203f) popup_snote_single_text_window_t2_ParamLimits

0x7e53,	// (0x0004203f) popup_snote_single_text_window_t2

0x7e66,	// (0x00042052) popup_snote_single_text_window_t3_ParamLimits

0x7e66,	// (0x00042052) popup_snote_single_text_window_t3

0x7e9f,	// (0x0004208b) popup_snote_single_text_window_t4_ParamLimits

0x7e9f,	// (0x0004208b) popup_snote_single_text_window_t4

0x7ed3,	// (0x000420bf) popup_snote_single_text_window_t5_ParamLimits

0x7ed3,	// (0x000420bf) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000497ae) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000497ae) popup_snote_single_text_window_t

0x7f02,	// (0x000420ee) bg_popup_window_pane_cp9_ParamLimits

0x7f02,	// (0x000420ee) bg_popup_window_pane_cp9

0x7e2e,	// (0x0004201a) popup_snote_single_graphic_window_g1_ParamLimits

0x7e2e,	// (0x0004201a) popup_snote_single_graphic_window_g1

0x7f10,	// (0x000420fc) popup_snote_single_graphic_window_g2_ParamLimits

0x7f10,	// (0x000420fc) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000497b9) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000497b9) popup_snote_single_graphic_window_g

0x7f1c,	// (0x00042108) popup_snote_single_graphic_window_t1_ParamLimits

0x7f1c,	// (0x00042108) popup_snote_single_graphic_window_t1

0x7f2f,	// (0x0004211b) popup_snote_single_graphic_window_t2_ParamLimits

0x7f2f,	// (0x0004211b) popup_snote_single_graphic_window_t2

0x7f42,	// (0x0004212e) popup_snote_single_graphic_window_t3_ParamLimits

0x7f42,	// (0x0004212e) popup_snote_single_graphic_window_t3

0x7f7b,	// (0x00042167) popup_snote_single_graphic_window_t4_ParamLimits

0x7f7b,	// (0x00042167) popup_snote_single_graphic_window_t4

0x7faf,	// (0x0004219b) popup_snote_single_graphic_window_t5_ParamLimits

0x7faf,	// (0x0004219b) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000497be) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000497be) popup_snote_single_graphic_window_t

0xb250,	// (0x0004543c) grid_graphic_popup_pane_ParamLimits

0xb250,	// (0x0004543c) grid_graphic_popup_pane

0xb278,	// (0x00045464) listscroll_popup_graphic_pane_g1_ParamLimits

0xb278,	// (0x00045464) listscroll_popup_graphic_pane_g1

0xb28c,	// (0x00045478) listscroll_popup_graphic_pane_g2_ParamLimits

0xb28c,	// (0x00045478) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x00049bb2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x00049bb2) listscroll_popup_graphic_pane_g

0xb2a0,	// (0x0004548c) scroll_pane_cp5

0xb1f9,	// (0x000453e5) cell_graphic_popup_pane_ParamLimits

0xb1f9,	// (0x000453e5) cell_graphic_popup_pane

0xb1da,	// (0x000453c6) cell_graphic_popup_pane_g1

0xb1e2,	// (0x000453ce) cell_graphic_popup_pane_g2

0x7e02,	// (0x00041fee) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x00049bab) cell_graphic_popup_pane_g

0xb1eb,	// (0x000453d7) cell_graphic_popup_pane_t2

0x7e0b,	// (0x00041ff7) grid_highlight_pane_cp3

0x7ff0,	// (0x000421dc) list_gen_pane_ParamLimits

0x7ff0,	// (0x000421dc) list_gen_pane

0x8022,	// (0x0004220e) scroll_pane

0xb13c,	// (0x00045328) bg_list_pane_g1_ParamLimits

0xb13c,	// (0x00045328) bg_list_pane_g1

0xb157,	// (0x00045343) bg_list_pane_g2_ParamLimits

0xb157,	// (0x00045343) bg_list_pane_g2

0xb16a,	// (0x00045356) bg_list_pane_g3_ParamLimits

0xb16a,	// (0x00045356) bg_list_pane_g3

0xb17c,	// (0x00045368) bg_list_pane_g4_ParamLimits

0xb17c,	// (0x00045368) bg_list_pane_g4

0xb18e,	// (0x0004537a) bg_list_pane_g5_ParamLimits

0xb18e,	// (0x0004537a) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x00049ba0) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x00049ba0) bg_list_pane_g

0x552d,	// (0x0003f719) list_double2_graphic_large_graphic_pane_ParamLimits

0x552d,	// (0x0003f719) list_double2_graphic_large_graphic_pane

0x552d,	// (0x0003f719) list_double2_graphic_pane_ParamLimits

0x552d,	// (0x0003f719) list_double2_graphic_pane

0x552d,	// (0x0003f719) list_double2_large_graphic_pane_ParamLimits

0x552d,	// (0x0003f719) list_double2_large_graphic_pane

0xb121,	// (0x0004530d) list_double2_pane_ParamLimits

0xb121,	// (0x0004530d) list_double2_pane

0x552d,	// (0x0003f719) list_double_graphic_heading_pane_ParamLimits

0x552d,	// (0x0003f719) list_double_graphic_heading_pane

0x552d,	// (0x0003f719) list_double_graphic_pane_ParamLimits

0x552d,	// (0x0003f719) list_double_graphic_pane

0x552d,	// (0x0003f719) list_double_heading_pane_ParamLimits

0x552d,	// (0x0003f719) list_double_heading_pane

0x552d,	// (0x0003f719) list_double_large_graphic_pane_ParamLimits

0x552d,	// (0x0003f719) list_double_large_graphic_pane

0x552d,	// (0x0003f719) list_double_number_pane_ParamLimits

0x552d,	// (0x0003f719) list_double_number_pane

0x552d,	// (0x0003f719) list_double_pane_ParamLimits

0x552d,	// (0x0003f719) list_double_pane

0x552d,	// (0x0003f719) list_double_time_pane_ParamLimits

0x552d,	// (0x0003f719) list_double_time_pane

0x552d,	// (0x0003f719) list_setting_number_pane_ParamLimits

0x552d,	// (0x0003f719) list_setting_number_pane

0x552d,	// (0x0003f719) list_setting_pane_ParamLimits

0x552d,	// (0x0003f719) list_setting_pane

0x686d,	// (0x00040a59) list_single_2graphic_pane_ParamLimits

0x686d,	// (0x00040a59) list_single_2graphic_pane

0x686d,	// (0x00040a59) list_single_graphic_heading_pane_ParamLimits

0x686d,	// (0x00040a59) list_single_graphic_heading_pane

0x686d,	// (0x00040a59) list_single_graphic_pane_ParamLimits

0x686d,	// (0x00040a59) list_single_graphic_pane

0x686d,	// (0x00040a59) list_single_heading_pane_ParamLimits

0x686d,	// (0x00040a59) list_single_heading_pane

0x68c3,	// (0x00040aaf) list_single_large_graphic_pane_ParamLimits

0x68c3,	// (0x00040aaf) list_single_large_graphic_pane

0x686d,	// (0x00040a59) list_single_number_heading_pane_ParamLimits

0x686d,	// (0x00040a59) list_single_number_heading_pane

0x686d,	// (0x00040a59) list_single_number_pane_ParamLimits

0x686d,	// (0x00040a59) list_single_number_pane

0x686d,	// (0x00040a59) list_single_pane_ParamLimits

0x686d,	// (0x00040a59) list_single_pane

0x7763,	// (0x0004194f) list_highlight_pane_cp1

0x5e50,	// (0x0004003c) list_single_pane_g1_ParamLimits

0x5e50,	// (0x0004003c) list_single_pane_g1

0x5e5c,	// (0x00040048) list_single_pane_g2_ParamLimits

0x5e5c,	// (0x00040048) list_single_pane_g2

0x0001,

0xf5ee,	// (0x000497da) list_single_pane_g_ParamLimits

0xf5ee,	// (0x000497da) list_single_pane_g

0x5517,	// (0x0003f703) list_single_pane_t1_ParamLimits

0x5517,	// (0x0003f703) list_single_pane_t1

0x5e50,	// (0x0004003c) list_single_number_pane_g1_ParamLimits

0x5e50,	// (0x0004003c) list_single_number_pane_g1

0x5e5c,	// (0x00040048) list_single_number_pane_g2_ParamLimits

0x5e5c,	// (0x00040048) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x000497da) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x000497da) list_single_number_pane_g

0x54bf,	// (0x0003f6ab) list_single_number_pane_t1_ParamLimits

0x54bf,	// (0x0003f6ab) list_single_number_pane_t1

0x54d5,	// (0x0003f6c1) list_single_number_pane_t2_ParamLimits

0x54d5,	// (0x0003f6c1) list_single_number_pane_t2

0x0001,

0xf975,	// (0x00049b61) list_single_number_pane_t_ParamLimits

0xf975,	// (0x00049b61) list_single_number_pane_t

0x4c28,	// (0x0003ee14) list_single_graphic_pane_g1_ParamLimits

0x4c28,	// (0x0003ee14) list_single_graphic_pane_g1

0x5e50,	// (0x0004003c) list_single_graphic_pane_g2_ParamLimits

0x5e50,	// (0x0004003c) list_single_graphic_pane_g2

0x5e5c,	// (0x00040048) list_single_graphic_pane_g3_ParamLimits

0x5e5c,	// (0x00040048) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x000497c9) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x000497c9) list_single_graphic_pane_g

0x4c34,	// (0x0003ee20) list_single_graphic_pane_t1_ParamLimits

0x4c34,	// (0x0003ee20) list_single_graphic_pane_t1

0x4c4a,	// (0x0003ee36) list_single_heading_pane_g1_ParamLimits

0x4c4a,	// (0x0003ee36) list_single_heading_pane_g1

0x5e5c,	// (0x00040048) list_single_heading_pane_g2_ParamLimits

0x5e5c,	// (0x00040048) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x000497d0) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x000497d0) list_single_heading_pane_g

0x4c5d,	// (0x0003ee49) list_single_heading_pane_t1_ParamLimits

0x4c5d,	// (0x0003ee49) list_single_heading_pane_t1

0x5e68,	// (0x00040054) list_single_heading_pane_t2_ParamLimits

0x5e68,	// (0x00040054) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x000497d5) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x000497d5) list_single_heading_pane_t

0x5e50,	// (0x0004003c) list_single_number_heading_pane_g1_ParamLimits

0x5e50,	// (0x0004003c) list_single_number_heading_pane_g1

0x5e5c,	// (0x00040048) list_single_number_heading_pane_g2_ParamLimits

0x5e5c,	// (0x00040048) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x000497da) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x000497da) list_single_number_heading_pane_g

0x4c73,	// (0x0003ee5f) list_single_number_heading_pane_t1_ParamLimits

0x4c73,	// (0x0003ee5f) list_single_number_heading_pane_t1

0x4c89,	// (0x0003ee75) list_single_number_heading_pane_t2_ParamLimits

0x4c89,	// (0x0003ee75) list_single_number_heading_pane_t2

0x4c9b,	// (0x0003ee87) list_single_number_heading_pane_t3_ParamLimits

0x4c9b,	// (0x0003ee87) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x000497df) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x000497df) list_single_number_heading_pane_t

0x4cad,	// (0x0003ee99) list_single_graphic_heading_pane_g1_ParamLimits

0x4cad,	// (0x0003ee99) list_single_graphic_heading_pane_g1

0x5e7a,	// (0x00040066) list_single_graphic_heading_pane_g4_ParamLimits

0x5e7a,	// (0x00040066) list_single_graphic_heading_pane_g4

0x5e5c,	// (0x00040048) list_single_graphic_heading_pane_g5_ParamLimits

0x5e5c,	// (0x00040048) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x000497e6) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x000497e6) list_single_graphic_heading_pane_g

0x4c73,	// (0x0003ee5f) list_single_graphic_heading_pane_t1_ParamLimits

0x4c73,	// (0x0003ee5f) list_single_graphic_heading_pane_t1

0x4cc5,	// (0x0003eeb1) list_single_graphic_heading_pane_t2_ParamLimits

0x4cc5,	// (0x0003eeb1) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x000497ed) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x000497ed) list_single_graphic_heading_pane_t

0x5e8b,	// (0x00040077) list_single_large_graphic_pane_g1_ParamLimits

0x5e8b,	// (0x00040077) list_single_large_graphic_pane_g1

0x5e97,	// (0x00040083) list_single_large_graphic_pane_g2_ParamLimits

0x5e97,	// (0x00040083) list_single_large_graphic_pane_g2

0x5ea3,	// (0x0004008f) list_single_large_graphic_pane_g3_ParamLimits

0x5ea3,	// (0x0004008f) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x000497f2) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x000497f2) list_single_large_graphic_pane_g

0xa16e,	// (0x0004435a) wait_border_pane_g2_copy1

0x5eaf,	// (0x0004009b) list_single_large_graphic_pane_g4_cp2

0x4cdb,	// (0x0003eec7) list_single_large_graphic_pane_t1_ParamLimits

0x4cdb,	// (0x0003eec7) list_single_large_graphic_pane_t1

0x8812,	// (0x000429fe) list_double_pane_g1_ParamLimits

0x8812,	// (0x000429fe) list_double_pane_g1

0x4cf1,	// (0x0003eedd) list_double_pane_g2_ParamLimits

0x4cf1,	// (0x0003eedd) list_double_pane_g2

0x0001,

0xf60d,	// (0x000497f9) list_double_pane_g_ParamLimits

0xf60d,	// (0x000497f9) list_double_pane_g

0x4cfd,	// (0x0003eee9) list_double_pane_t1_ParamLimits

0x4cfd,	// (0x0003eee9) list_double_pane_t1

0x4d13,	// (0x0003eeff) list_double_pane_t2_ParamLimits

0x4d13,	// (0x0003eeff) list_double_pane_t2

0x0001,

0xf612,	// (0x000497fe) list_double_pane_t_ParamLimits

0xf612,	// (0x000497fe) list_double_pane_t

0x4d25,	// (0x0003ef11) list_double2_pane_g1_ParamLimits

0x4d25,	// (0x0003ef11) list_double2_pane_g1

0x4d36,	// (0x0003ef22) list_double2_pane_g2_ParamLimits

0x4d36,	// (0x0003ef22) list_double2_pane_g2

0x0001,

0xf617,	// (0x00049803) list_double2_pane_g_ParamLimits

0xf617,	// (0x00049803) list_double2_pane_g

0x4d42,	// (0x0003ef2e) list_double2_pane_t1_ParamLimits

0x4d42,	// (0x0003ef2e) list_double2_pane_t1

0x4d58,	// (0x0003ef44) list_double2_pane_t2_ParamLimits

0x4d58,	// (0x0003ef44) list_double2_pane_t2

0x0001,

0xf61c,	// (0x00049808) list_double2_pane_t_ParamLimits

0xf61c,	// (0x00049808) list_double2_pane_t

0x8812,	// (0x000429fe) list_double_number_pane_g1_ParamLimits

0x8812,	// (0x000429fe) list_double_number_pane_g1

0x4cf1,	// (0x0003eedd) list_double_number_pane_g2_ParamLimits

0x4cf1,	// (0x0003eedd) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x000497f9) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x000497f9) list_double_number_pane_g

0x4d6a,	// (0x0003ef56) list_double_number_pane_t1_ParamLimits

0x4d6a,	// (0x0003ef56) list_double_number_pane_t1

0x4d7c,	// (0x0003ef68) list_double_number_pane_t2_ParamLimits

0x4d7c,	// (0x0003ef68) list_double_number_pane_t2

0x4d92,	// (0x0003ef7e) list_double_number_pane_t3_ParamLimits

0x4d92,	// (0x0003ef7e) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0004980d) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0004980d) list_double_number_pane_t

0x4da4,	// (0x0003ef90) list_double_graphic_pane_g1_ParamLimits

0x4da4,	// (0x0003ef90) list_double_graphic_pane_g1

0xa972,	// (0x00044b5e) list_double_graphic_pane_g2_ParamLimits

0xa972,	// (0x00044b5e) list_double_graphic_pane_g2

0x4db0,	// (0x0003ef9c) list_double_graphic_pane_g3_ParamLimits

0x4db0,	// (0x0003ef9c) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x00049814) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x00049814) list_double_graphic_pane_g

0x4dc8,	// (0x0003efb4) list_double_graphic_pane_t1_ParamLimits

0x4dc8,	// (0x0003efb4) list_double_graphic_pane_t1

0x4dde,	// (0x0003efca) list_double_graphic_pane_t2_ParamLimits

0x4dde,	// (0x0003efca) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0004981d) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0004981d) list_double_graphic_pane_t

0x4df0,	// (0x0003efdc) list_double2_graphic_pane_g1_ParamLimits

0x4df0,	// (0x0003efdc) list_double2_graphic_pane_g1

0x4dfc,	// (0x0003efe8) list_double2_graphic_pane_g2_ParamLimits

0x4dfc,	// (0x0003efe8) list_double2_graphic_pane_g2

0x4e08,	// (0x0003eff4) list_double2_graphic_pane_g3_ParamLimits

0x4e08,	// (0x0003eff4) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x00049822) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x00049822) list_double2_graphic_pane_g

0x4e14,	// (0x0003f000) list_double2_graphic_pane_t1_ParamLimits

0x4e14,	// (0x0003f000) list_double2_graphic_pane_t1

0x4e2a,	// (0x0003f016) list_double2_graphic_pane_t2_ParamLimits

0x4e2a,	// (0x0003f016) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00049829) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00049829) list_double2_graphic_pane_t

0x4e3c,	// (0x0003f028) list_double_large_graphic_pane_g1_ParamLimits

0x4e3c,	// (0x0003f028) list_double_large_graphic_pane_g1

0x4e65,	// (0x0003f051) list_double_large_graphic_pane_g2_ParamLimits

0x4e65,	// (0x0003f051) list_double_large_graphic_pane_g2

0x4cf1,	// (0x0003eedd) list_double_large_graphic_pane_g3_ParamLimits

0x4cf1,	// (0x0003eedd) list_double_large_graphic_pane_g3

0x4e7b,	// (0x0003f067) list_double_large_graphic_pane_g4_ParamLimits

0x4e7b,	// (0x0003f067) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0004982e) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0004982e) list_double_large_graphic_pane_g

0x4e8c,	// (0x0003f078) list_double_large_graphic_pane_t1_ParamLimits

0x4e8c,	// (0x0003f078) list_double_large_graphic_pane_t1

0x4ea5,	// (0x0003f091) list_double_large_graphic_pane_t2_ParamLimits

0x4ea5,	// (0x0003f091) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00049839) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00049839) list_double_large_graphic_pane_t

0x4eb7,	// (0x0003f0a3) list_double2_large_graphic_pane_g1_ParamLimits

0x4eb7,	// (0x0003f0a3) list_double2_large_graphic_pane_g1

0x4ec3,	// (0x0003f0af) list_double2_large_graphic_pane_g2_ParamLimits

0x4ec3,	// (0x0003f0af) list_double2_large_graphic_pane_g2

0x4e08,	// (0x0003eff4) list_double2_large_graphic_pane_g3_ParamLimits

0x4e08,	// (0x0003eff4) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0004983e) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0004983e) list_double2_large_graphic_pane_g

0x4ed4,	// (0x0003f0c0) list_double2_large_graphic_pane_t1_ParamLimits

0x4ed4,	// (0x0003f0c0) list_double2_large_graphic_pane_t1

0x4eea,	// (0x0003f0d6) list_double2_large_graphic_pane_t2_ParamLimits

0x4eea,	// (0x0003f0d6) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00049845) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00049845) list_double2_large_graphic_pane_t

0x4efc,	// (0x0003f0e8) list_double_heading_pane_g1_ParamLimits

0x4efc,	// (0x0003f0e8) list_double_heading_pane_g1

0x4f0d,	// (0x0003f0f9) list_double_heading_pane_g2_ParamLimits

0x4f0d,	// (0x0003f0f9) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0004984a) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0004984a) list_double_heading_pane_g

0x4f19,	// (0x0003f105) list_double_heading_pane_t1_ParamLimits

0x4f19,	// (0x0003f105) list_double_heading_pane_t1

0x4f2f,	// (0x0003f11b) list_double_heading_pane_t2_ParamLimits

0x4f2f,	// (0x0003f11b) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0004984f) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0004984f) list_double_heading_pane_t

0x4df0,	// (0x0003efdc) list_double_graphic_heading_pane_g1_ParamLimits

0x4df0,	// (0x0003efdc) list_double_graphic_heading_pane_g1

0x4efc,	// (0x0003f0e8) list_double_graphic_heading_pane_g2_ParamLimits

0x4efc,	// (0x0003f0e8) list_double_graphic_heading_pane_g2

0x4f0d,	// (0x0003f0f9) list_double_graphic_heading_pane_g3_ParamLimits

0x4f0d,	// (0x0003f0f9) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00049854) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00049854) list_double_graphic_heading_pane_g

0x4f41,	// (0x0003f12d) list_double_graphic_heading_pane_t1_ParamLimits

0x4f41,	// (0x0003f12d) list_double_graphic_heading_pane_t1

0x4e2a,	// (0x0003f016) list_double_graphic_heading_pane_t2_ParamLimits

0x4e2a,	// (0x0003f016) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0004985b) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0004985b) list_double_graphic_heading_pane_t

0x4f57,	// (0x0003f143) list_double_time_pane_g1_ParamLimits

0x4f57,	// (0x0003f143) list_double_time_pane_g1

0x4f68,	// (0x0003f154) list_double_time_pane_g2_ParamLimits

0x4f68,	// (0x0003f154) list_double_time_pane_g2

0x0001,

0xf674,	// (0x00049860) list_double_time_pane_g_ParamLimits

0xf674,	// (0x00049860) list_double_time_pane_g

0x4f74,	// (0x0003f160) list_double_time_pane_t1_ParamLimits

0x4f74,	// (0x0003f160) list_double_time_pane_t1

0x4f8a,	// (0x0003f176) list_double_time_pane_t2_ParamLimits

0x4f8a,	// (0x0003f176) list_double_time_pane_t2

0x4f9c,	// (0x0003f188) list_double_time_pane_t3_ParamLimits

0x4f9c,	// (0x0003f188) list_double_time_pane_t3

0x4fae,	// (0x0003f19a) list_double_time_pane_t4_ParamLimits

0x4fae,	// (0x0003f19a) list_double_time_pane_t4

0x0003,

0xf679,	// (0x00049865) list_double_time_pane_t_ParamLimits

0xf679,	// (0x00049865) list_double_time_pane_t

0x4fc0,	// (0x0003f1ac) list_setting_pane_g1_ParamLimits

0x4fc0,	// (0x0003f1ac) list_setting_pane_g1

0x4fcc,	// (0x0003f1b8) list_setting_pane_g2_ParamLimits

0x4fcc,	// (0x0003f1b8) list_setting_pane_g2

0x0001,

0xf682,	// (0x0004986e) list_setting_pane_g_ParamLimits

0xf682,	// (0x0004986e) list_setting_pane_g

0x4fd8,	// (0x0003f1c4) list_setting_pane_t1_ParamLimits

0x4fd8,	// (0x0003f1c4) list_setting_pane_t1

0x4ff2,	// (0x0003f1de) list_setting_pane_t2_ParamLimits

0x4ff2,	// (0x0003f1de) list_setting_pane_t2

0x0002,

0xf687,	// (0x00049873) list_setting_pane_t_ParamLimits

0xf687,	// (0x00049873) list_setting_pane_t

0x5031,	// (0x0003f21d) set_value_pane_cp_ParamLimits

0x5031,	// (0x0003f21d) set_value_pane_cp

0x503d,	// (0x0003f229) list_setting_number_pane_g1_ParamLimits

0x503d,	// (0x0003f229) list_setting_number_pane_g1

0x5049,	// (0x0003f235) list_setting_number_pane_g2_ParamLimits

0x5049,	// (0x0003f235) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0004987a) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0004987a) list_setting_number_pane_g

0x5055,	// (0x0003f241) list_setting_number_pane_t1_ParamLimits

0x5055,	// (0x0003f241) list_setting_number_pane_t1

0x506e,	// (0x0003f25a) list_setting_number_pane_t2_ParamLimits

0x506e,	// (0x0003f25a) list_setting_number_pane_t2

0x5088,	// (0x0003f274) list_setting_number_pane_t3_ParamLimits

0x5088,	// (0x0003f274) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0004987f) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0004987f) list_setting_number_pane_t

0x5031,	// (0x0003f21d) set_value_pane_ParamLimits

0x5031,	// (0x0003f21d) set_value_pane

0x8056,	// (0x00042242) bg_set_opt_pane_ParamLimits

0x8056,	// (0x00042242) bg_set_opt_pane

0x50cb,	// (0x0003f2b7) set_value_pane_t1

0x8077,	// (0x00042263) slider_set_pane_cp3

0x8080,	// (0x0004226c) volume_small_pane_cp

0x8089,	// (0x00042275) list_form_gen_pane

0x8092,	// (0x0004227e) scroll_pane_cp8

0x50e1,	// (0x0003f2cd) form_field_data_pane_ParamLimits

0x50e1,	// (0x0003f2cd) form_field_data_pane

0x5105,	// (0x0003f2f1) form_field_data_wide_pane_ParamLimits

0x5105,	// (0x0003f2f1) form_field_data_wide_pane

0x5128,	// (0x0003f314) form_field_popup_pane_ParamLimits

0x5128,	// (0x0003f314) form_field_popup_pane

0x5148,	// (0x0003f334) form_field_popup_wide_pane_ParamLimits

0x5148,	// (0x0003f334) form_field_popup_wide_pane

0x5167,	// (0x0003f353) form_field_slider_pane_ParamLimits

0x5167,	// (0x0003f353) form_field_slider_pane

0x517a,	// (0x0003f366) form_field_slider_wide_pane_ParamLimits

0x517a,	// (0x0003f366) form_field_slider_wide_pane

0x80a3,	// (0x0004228f) data_form_pane

0x5197,	// (0x0003f383) form_field_data_pane_t1

0x80af,	// (0x0004229b) input_focus_pane

0x80bd,	// (0x000422a9) data_form_wide_pane

0x51bb,	// (0x0003f3a7) form_field_data_wide_pane_t1

0x7e20,	// (0x0004200c) input_focus_pane_cp6

0x51dd,	// (0x0003f3c9) form_field_popup_pane_t1

0x80af,	// (0x0004229b) input_focus_pane_cp7

0x80e9,	// (0x000422d5) list_form_pane

0x51fd,	// (0x0003f3e9) form_field_popup_wide_pane_t1

0x80af,	// (0x0004229b) input_focus_pane_cp8

0x80f5,	// (0x000422e1) list_form_wide_pane

0x521a,	// (0x0003f406) form_field_slider_pane_t1_ParamLimits

0x521a,	// (0x0003f406) form_field_slider_pane_t1

0x5230,	// (0x0003f41c) form_field_slider_pane_t2_ParamLimits

0x5230,	// (0x0003f41c) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0004988f) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0004988f) form_field_slider_pane_t

0x7abe,	// (0x00041caa) input_focus_pane_cp9_ParamLimits

0x7abe,	// (0x00041caa) input_focus_pane_cp9

0x5245,	// (0x0003f431) slider_cont_pane_ParamLimits

0x5245,	// (0x0003f431) slider_cont_pane

0x8104,	// (0x000422f0) form_field_slider_wide_pane_t1_ParamLimits

0x8104,	// (0x000422f0) form_field_slider_wide_pane_t1

0x5259,	// (0x0003f445) form_field_slider_wide_pane_t2_ParamLimits

0x5259,	// (0x0003f445) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00049894) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00049894) form_field_slider_wide_pane_t

0x7abe,	// (0x00041caa) input_focus_pane_cp10_ParamLimits

0x7abe,	// (0x00041caa) input_focus_pane_cp10

0x526b,	// (0x0003f457) slider_cont_pane_cp1_ParamLimits

0x526b,	// (0x0003f457) slider_cont_pane_cp1

0x527f,	// (0x0003f46b) slider_form_pane_cp

0x8116,	// (0x00042302) input_focus_pane_g1

0x811e,	// (0x0004230a) input_focus_pane_g2

0x8126,	// (0x00042312) input_focus_pane_g3

0x812e,	// (0x0004231a) input_focus_pane_g4

0x8136,	// (0x00042322) input_focus_pane_g5

0x813e,	// (0x0004232a) input_focus_pane_g6

0x8146,	// (0x00042332) input_focus_pane_g7

0x814e,	// (0x0004233a) input_focus_pane_g8

0x8156,	// (0x00042342) input_focus_pane_g9

0x7759,	// (0x00041945) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x00049899) input_focus_pane_g

0xa177,	// (0x00044363) wait_border_pane_g3_copy1

0x5287,	// (0x0003f473) data_form_pane_t1

0x7759,	// (0x00041945) wait_anim_pane_g1_copy1

0x54e7,	// (0x0003f6d3) data_form_wide_pane_t1

0x52a2,	// (0x0003f48e) list_form_graphic_pane_cp_ParamLimits

0x52a2,	// (0x0003f48e) list_form_graphic_pane_cp

0xb0b3,	// (0x0004529f) slider_form_pane_g1

0xb0bc,	// (0x000452a8) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x00049b91) slider_form_pane_g

0x52bb,	// (0x0003f4a7) list_form_graphic_pane_ParamLimits

0x52bb,	// (0x0003f4a7) list_form_graphic_pane

0x52d7,	// (0x0003f4c3) list_form_graphic_pane_g1

0x52df,	// (0x0003f4cb) list_form_graphic_pane_t1_ParamLimits

0x52df,	// (0x0003f4cb) list_form_graphic_pane_t1

0x7843,	// (0x00041a2f) list_highlight_pane_cp5_ParamLimits

0x7843,	// (0x00041a2f) list_highlight_pane_cp5

0x52f4,	// (0x0003f4e0) find_pane_g1

0x815e,	// (0x0004234a) input_find_pane

0x52fd,	// (0x0003f4e9) input_find_pane_g1_ParamLimits

0x52fd,	// (0x0003f4e9) input_find_pane_g1

0x5309,	// (0x0003f4f5) input_find_pane_t1_ParamLimits

0x5309,	// (0x0003f4f5) input_find_pane_t1

0x531e,	// (0x0003f50a) input_find_pane_t2_ParamLimits

0x531e,	// (0x0003f50a) input_find_pane_t2

0x0001,

0xf6c2,	// (0x000498ae) input_find_pane_t_ParamLimits

0xf6c2,	// (0x000498ae) input_find_pane_t

0x8167,	// (0x00042353) input_focus_pane_cp5_ParamLimits

0x8167,	// (0x00042353) input_focus_pane_cp5

0x8181,	// (0x0004236d) bg_popup_window_pane_cp2_ParamLimits

0x8181,	// (0x0004236d) bg_popup_window_pane_cp2

0x818e,	// (0x0004237a) listscroll_menu_pane_ParamLimits

0x818e,	// (0x0004237a) listscroll_menu_pane

0x819a,	// (0x00042386) popup_submenu_window_ParamLimits

0x819a,	// (0x00042386) popup_submenu_window

0x81c4,	// (0x000423b0) find_popup_pane_g1

0x81cc,	// (0x000423b8) input_popup_find_pane_cp

0x8167,	// (0x00042353) input_focus_pane_cp4_ParamLimits

0x8167,	// (0x00042353) input_focus_pane_cp4

0x81e2,	// (0x000423ce) input_popup_find_pane_t1_ParamLimits

0x81e2,	// (0x000423ce) input_popup_find_pane_t1

0x7763,	// (0x0004194f) bg_popup_sub_pane_cp

0x8210,	// (0x000423fc) listscroll_popup_sub_pane

0x8218,	// (0x00042404) list_submenu_pane_ParamLimits

0x8218,	// (0x00042404) list_submenu_pane

0x8229,	// (0x00042415) scroll_pane_cp4

0x8231,	// (0x0004241d) list_single_popup_submenu_pane_ParamLimits

0x8231,	// (0x0004241d) list_single_popup_submenu_pane

0x8245,	// (0x00042431) list_single_popup_submenu_pane_g1

0x824d,	// (0x00042439) list_single_popup_submenu_pane_t1_ParamLimits

0x824d,	// (0x00042439) list_single_popup_submenu_pane_t1

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp1_ParamLimits

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp1

0x8262,	// (0x0004244e) tabs_2_active_pane_g1

0x826a,	// (0x00042456) tabs_2_active_pane_t1

0x7843,	// (0x00041a2f) bg_passive_tab_pane_cp1_ParamLimits

0x7843,	// (0x00041a2f) bg_passive_tab_pane_cp1

0x8262,	// (0x0004244e) tabs_2_passive_pane_g1

0x826a,	// (0x00042456) tabs_2_passive_pane_t1

0x827c,	// (0x00042468) bg_active_tab_pane_cp4

0x828a,	// (0x00042476) tabs_2_long_active_pane_t1

0x829d,	// (0x00042489) bg_passive_tab_pane_cp4

0x6537,	// (0x00040723) list_single_midp_graphic_pane_g4_ParamLimits

0x827c,	// (0x00042468) bg_active_tab_pane_cp5

0x82a9,	// (0x00042495) tabs_3_long_active_pane_t1

0x829d,	// (0x00042489) bg_passive_tab_pane_cp5

0x6537,	// (0x00040723) list_single_midp_graphic_pane_g4

0x7843,	// (0x00041a2f) bg_popup_window_pane_cp13_ParamLimits

0x7843,	// (0x00041a2f) bg_popup_window_pane_cp13

0x82c4,	// (0x000424b0) listscroll_popup_fast_pane_ParamLimits

0x82c4,	// (0x000424b0) listscroll_popup_fast_pane

0x82d3,	// (0x000424bf) grid_popup_fast_pane_ParamLimits

0x82d3,	// (0x000424bf) grid_popup_fast_pane

0x82e5,	// (0x000424d1) scroll_pane_cp9_ParamLimits

0x82e5,	// (0x000424d1) scroll_pane_cp9

0xc95e,	// (0x00046b4a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc95e,	// (0x00046b4a) list_single_graphic_hl_pane_t1_cp2

0x8309,	// (0x000424f5) input_focus_pane_cp20_ParamLimits

0x8309,	// (0x000424f5) input_focus_pane_cp20

0x8317,	// (0x00042503) query_popup_data_pane_t1_ParamLimits

0x8317,	// (0x00042503) query_popup_data_pane_t1

0x832a,	// (0x00042516) query_popup_data_pane_t2_ParamLimits

0x832a,	// (0x00042516) query_popup_data_pane_t2

0x8370,	// (0x0004255c) query_popup_data_pane_t3_ParamLimits

0x8370,	// (0x0004255c) query_popup_data_pane_t3

0x83b1,	// (0x0004259d) query_popup_data_pane_t4_ParamLimits

0x83b1,	// (0x0004259d) query_popup_data_pane_t4

0x83ed,	// (0x000425d9) query_popup_data_pane_t5_ParamLimits

0x83ed,	// (0x000425d9) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x000498b3) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x000498b3) query_popup_data_pane_t

0x8116,	// (0x00042302) bg_set_opt_pane_g1

0x811e,	// (0x0004230a) bg_set_opt_pane_g2

0x8126,	// (0x00042312) bg_set_opt_pane_g3

0x812e,	// (0x0004231a) bg_set_opt_pane_g4

0x8136,	// (0x00042322) bg_set_opt_pane_g5

0x813e,	// (0x0004232a) bg_set_opt_pane_g6

0x8146,	// (0x00042332) bg_set_opt_pane_g7

0x814e,	// (0x0004233a) bg_set_opt_pane_g8

0x8156,	// (0x00042342) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x000498be) bg_set_opt_pane_g

0x616b,	// (0x00040357) control_top_pane_stacon_ParamLimits

0x616b,	// (0x00040357) control_top_pane_stacon

0x61be,	// (0x000403aa) signal_pane_stacon_ParamLimits

0x61be,	// (0x000403aa) signal_pane_stacon

0x89b9,	// (0x00042ba5) stacon_top_pane_g1_ParamLimits

0x89b9,	// (0x00042ba5) stacon_top_pane_g1

0x61e3,	// (0x000403cf) title_pane_stacon_ParamLimits

0x61e3,	// (0x000403cf) title_pane_stacon

0x620d,	// (0x000403f9) uni_indicator_pane_stacon_ParamLimits

0x620d,	// (0x000403f9) uni_indicator_pane_stacon

0x6222,	// (0x0004040e) battery_pane_stacon_ParamLimits

0x6222,	// (0x0004040e) battery_pane_stacon

0x6266,	// (0x00040452) control_bottom_pane_stacon_ParamLimits

0x6266,	// (0x00040452) control_bottom_pane_stacon

0x6289,	// (0x00040475) navi_pane_stacon_ParamLimits

0x6289,	// (0x00040475) navi_pane_stacon

0x89db,	// (0x00042bc7) stacon_bottom_pane_g1_ParamLimits

0x89db,	// (0x00042bc7) stacon_bottom_pane_g1

0x5ecc,	// (0x000400b8) aid_levels_signal_lsc_ParamLimits

0x5ecc,	// (0x000400b8) aid_levels_signal_lsc

0x5ee3,	// (0x000400cf) signal_pane_stacon_g1_ParamLimits

0x5ee3,	// (0x000400cf) signal_pane_stacon_g1

0x5ef7,	// (0x000400e3) signal_pane_stacon_g2_ParamLimits

0x5ef7,	// (0x000400e3) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x000498d1) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x000498d1) signal_pane_stacon_g

0x5f2c,	// (0x00040118) title_pane_stacon_t1_ParamLimits

0x5f2c,	// (0x00040118) title_pane_stacon_t1

0x8431,	// (0x0004261d) uni_indicator_pane_stacon_g1

0x843b,	// (0x00042627) uni_indicator_pane_stacon_g2

0x8445,	// (0x00042631) uni_indicator_pane_stacon_g3

0x844f,	// (0x0004263b) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x000498dd) uni_indicator_pane_stacon_g

0x5f51,	// (0x0004013d) control_top_pane_stacon_g1

0x5f59,	// (0x00040145) control_top_pane_stacon_t1_ParamLimits

0x5f59,	// (0x00040145) control_top_pane_stacon_t1

0x5f90,	// (0x0004017c) aid_levels_battery_lsc_ParamLimits

0x5f90,	// (0x0004017c) aid_levels_battery_lsc

0x5fa8,	// (0x00040194) battery_pane_stacon_g1_ParamLimits

0x5fa8,	// (0x00040194) battery_pane_stacon_g1

0x5fbb,	// (0x000401a7) battery_pane_stacon_g2_ParamLimits

0x5fbb,	// (0x000401a7) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x000498e6) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x000498e6) battery_pane_stacon_g

0x5ff9,	// (0x000401e5) navi_icon_pane_stacon

0x600d,	// (0x000401f9) navi_navi_pane_stacon

0x5ff9,	// (0x000401e5) navi_text_pane_stacon

0x5f51,	// (0x0004013d) control_bottom_pane_stacon_g1

0x6021,	// (0x0004020d) control_bottom_pane_stacon_t1_ParamLimits

0x6021,	// (0x0004020d) control_bottom_pane_stacon_t1

0x8473,	// (0x0004265f) grid_app_pane_ParamLimits

0x8473,	// (0x0004265f) grid_app_pane

0x8497,	// (0x00042683) scroll_pane_cp15_ParamLimits

0x8497,	// (0x00042683) scroll_pane_cp15

0x84ac,	// (0x00042698) cell_app_pane_ParamLimits

0x84ac,	// (0x00042698) cell_app_pane

0x84d0,	// (0x000426bc) cell_app_pane_g1_ParamLimits

0x84d0,	// (0x000426bc) cell_app_pane_g1

0x84f4,	// (0x000426e0) cell_app_pane_g2_ParamLimits

0x84f4,	// (0x000426e0) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x000498eb) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x000498eb) cell_app_pane_g

0x8500,	// (0x000426ec) cell_app_pane_t1_ParamLimits

0x8500,	// (0x000426ec) cell_app_pane_t1

0x8517,	// (0x00042703) grid_highlight_pane_ParamLimits

0x8517,	// (0x00042703) grid_highlight_pane

0x8116,	// (0x00042302) cell_highlight_pane_g1

0x811e,	// (0x0004230a) cell_highlight_pane_g2

0x8126,	// (0x00042312) cell_highlight_pane_g3

0x812e,	// (0x0004231a) cell_highlight_pane_g4

0x8136,	// (0x00042322) cell_highlight_pane_g5

0x813e,	// (0x0004232a) cell_highlight_pane_g6

0x8146,	// (0x00042332) cell_highlight_pane_g7

0x814e,	// (0x0004233a) cell_highlight_pane_g8

0x8156,	// (0x00042342) cell_highlight_pane_g9

0x7759,	// (0x00041945) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x00049899) cell_highlight_pane_g

0x8528,	// (0x00042714) bg_scroll_pane

0x606b,	// (0x00040257) scroll_handle_pane

0x856f,	// (0x0004275b) scroll_bg_pane_g1

0x8584,	// (0x00042770) scroll_bg_pane_g2

0x859c,	// (0x00042788) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x000498f0) scroll_bg_pane_g

0x85b1,	// (0x0004279d) scroll_handle_focus_pane_ParamLimits

0x85b1,	// (0x0004279d) scroll_handle_focus_pane

0x856f,	// (0x0004275b) scroll_handle_pane_g1

0x85be,	// (0x000427aa) scroll_handle_pane_g2

0x859c,	// (0x00042788) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x000498f7) scroll_handle_pane_g

0x8167,	// (0x00042353) bg_popup_sub_pane_cp21_ParamLimits

0x8167,	// (0x00042353) bg_popup_sub_pane_cp21

0x85d2,	// (0x000427be) popup_fep_japan_predictive_window_t1_ParamLimits

0x85d2,	// (0x000427be) popup_fep_japan_predictive_window_t1

0x85ec,	// (0x000427d8) popup_fep_japan_predictive_window_t2_ParamLimits

0x85ec,	// (0x000427d8) popup_fep_japan_predictive_window_t2

0x861f,	// (0x0004280b) popup_fep_japan_predictive_window_t3_ParamLimits

0x861f,	// (0x0004280b) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x000498fe) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x000498fe) popup_fep_japan_predictive_window_t

0x7763,	// (0x0004194f) bg_popup_sub_pane_cp23

0x8656,	// (0x00042842) listscroll_japin_cand_pane

0x865e,	// (0x0004284a) popup_fep_japan_candidate_window_t1

0x866c,	// (0x00042858) candidate_pane_ParamLimits

0x866c,	// (0x00042858) candidate_pane

0x867e,	// (0x0004286a) scroll_pane_cp30

0x8686,	// (0x00042872) list_single_popup_jap_candidate_pane_ParamLimits

0x8686,	// (0x00042872) list_single_popup_jap_candidate_pane

0x7763,	// (0x0004194f) list_highlight_pane_cp30

0x869b,	// (0x00042887) list_single_popup_jap_candidate_pane_t1

0x86aa,	// (0x00042896) level_1_signal

0x86b7,	// (0x000428a3) level_2_signal

0x86c4,	// (0x000428b0) level_3_signal

0x86d1,	// (0x000428bd) level_4_signal

0x86de,	// (0x000428ca) level_5_signal

0x86eb,	// (0x000428d7) level_6_signal

0x86f8,	// (0x000428e4) level_7_signal

0x86aa,	// (0x00042896) level_1_battery

0x86b7,	// (0x000428a3) level_2_battery

0x86c4,	// (0x000428b0) level_3_battery

0x86d1,	// (0x000428bd) level_4_battery

0x86de,	// (0x000428ca) level_5_battery

0x86eb,	// (0x000428d7) level_6_battery

0x86f8,	// (0x000428e4) level_7_battery

0x871d,	// (0x00042909) list_menu_pane_ParamLimits

0x871d,	// (0x00042909) list_menu_pane

0x872e,	// (0x0004291a) scroll_pane_cp25_ParamLimits

0x872e,	// (0x0004291a) scroll_pane_cp25

0x8747,	// (0x00042933) list_double2_graphic_pane_cp2_ParamLimits

0x8747,	// (0x00042933) list_double2_graphic_pane_cp2

0x8747,	// (0x00042933) list_double2_large_graphic_pane_cp2_ParamLimits

0x8747,	// (0x00042933) list_double2_large_graphic_pane_cp2

0x8747,	// (0x00042933) list_double2_pane_cp2_ParamLimits

0x8747,	// (0x00042933) list_double2_pane_cp2

0x8747,	// (0x00042933) list_double_graphic_pane_cp2_ParamLimits

0x8747,	// (0x00042933) list_double_graphic_pane_cp2

0x8747,	// (0x00042933) list_double_large_graphic_pane_cp2_ParamLimits

0x8747,	// (0x00042933) list_double_large_graphic_pane_cp2

0x8747,	// (0x00042933) list_double_number_pane_cp2_ParamLimits

0x8747,	// (0x00042933) list_double_number_pane_cp2

0x8747,	// (0x00042933) list_double_pane_cp2_ParamLimits

0x8747,	// (0x00042933) list_double_pane_cp2

0x876b,	// (0x00042957) list_single_2graphic_pane_cp2_ParamLimits

0x876b,	// (0x00042957) list_single_2graphic_pane_cp2

0x876b,	// (0x00042957) list_single_graphic_heading_pane_cp2_ParamLimits

0x876b,	// (0x00042957) list_single_graphic_heading_pane_cp2

0x876b,	// (0x00042957) list_single_graphic_pane_cp2_ParamLimits

0x876b,	// (0x00042957) list_single_graphic_pane_cp2

0x876b,	// (0x00042957) list_single_heading_pane_cp2_ParamLimits

0x876b,	// (0x00042957) list_single_heading_pane_cp2

0x8784,	// (0x00042970) list_single_large_graphic_pane_cp2_ParamLimits

0x8784,	// (0x00042970) list_single_large_graphic_pane_cp2

0x876b,	// (0x00042957) list_single_number_heading_pane_cp2_ParamLimits

0x876b,	// (0x00042957) list_single_number_heading_pane_cp2

0x876b,	// (0x00042957) list_single_number_pane_cp2_ParamLimits

0x876b,	// (0x00042957) list_single_number_pane_cp2

0x876b,	// (0x00042957) list_single_pane_cp2_ParamLimits

0x876b,	// (0x00042957) list_single_pane_cp2

0x87da,	// (0x000429c6) bg_popup_sub_pane_cp22

0x611d,	// (0x00040309) popup_side_volume_key_window_g1

0x6147,	// (0x00040333) popup_side_volume_key_window_t1

0x6163,	// (0x0004034f) volume_small_pane_cp1

0x7abe,	// (0x00041caa) bg_popup_sub_pane_cp24_ParamLimits

0x7abe,	// (0x00041caa) bg_popup_sub_pane_cp24

0x881e,	// (0x00042a0a) fep_china_uni_candidate_pane_ParamLimits

0x881e,	// (0x00042a0a) fep_china_uni_candidate_pane

0x8832,	// (0x00042a1e) fep_china_uni_entry_pane

0x8842,	// (0x00042a2e) popup_fep_china_uni_window_g1

0x885e,	// (0x00042a4a) fep_china_uni_entry_pane_g1

0x8866,	// (0x00042a52) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0004992b) fep_china_uni_entry_pane_g

0x886e,	// (0x00042a5a) fep_entry_item_pane

0x8878,	// (0x00042a64) fep_candidate_item_pane

0x8880,	// (0x00042a6c) fep_china_uni_candidate_pane_g1

0x8888,	// (0x00042a74) fep_china_uni_candidate_pane_g2

0x8890,	// (0x00042a7c) fep_china_uni_candidate_pane_g3

0x8898,	// (0x00042a84) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00049930) fep_china_uni_candidate_pane_g

0x7759,	// (0x00041945) fep_entry_item_pane_g1

0x88a0,	// (0x00042a8c) fep_entry_item_pane_t1_ParamLimits

0x88a0,	// (0x00042a8c) fep_entry_item_pane_t1

0x88b6,	// (0x00042aa2) fep_candidate_item_pane_t1_ParamLimits

0x88b6,	// (0x00042aa2) fep_candidate_item_pane_t1

0x88cb,	// (0x00042ab7) fep_candidate_item_pane_t2_ParamLimits

0x88cb,	// (0x00042ab7) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00049939) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00049939) fep_candidate_item_pane_t

0x7843,	// (0x00041a2f) list_highlight_pane_cp31_ParamLimits

0x7843,	// (0x00041a2f) list_highlight_pane_cp31

0x88dd,	// (0x00042ac9) level_1_signal_lsc

0x88e6,	// (0x00042ad2) level_2_signal_lsc

0x88ef,	// (0x00042adb) level_3_signal_lsc

0x88f8,	// (0x00042ae4) level_4_signal_lsc

0x8901,	// (0x00042aed) level_5_signal_lsc

0x890a,	// (0x00042af6) level_6_signal_lsc

0x8913,	// (0x00042aff) level_7_signal_lsc

0x8913,	// (0x00042aff) level_1_battery_lsc

0x891c,	// (0x00042b08) level_2_battery_lsc

0x8925,	// (0x00042b11) level_3_battery_lsc

0x892e,	// (0x00042b1a) level_4_battery_lsc

0x8937,	// (0x00042b23) level_5_battery_lsc

0x8940,	// (0x00042b2c) level_6_battery_lsc

0x88dd,	// (0x00042ac9) level_7_battery_lsc

0x8949,	// (0x00042b35) scroll_handle_focus_pane_g1

0x8952,	// (0x00042b3e) scroll_handle_focus_pane_g2

0x895b,	// (0x00042b47) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0004993e) scroll_handle_focus_pane_g

0x5333,	// (0x0003f51f) list_single_2graphic_pane_g1_ParamLimits

0x5333,	// (0x0003f51f) list_single_2graphic_pane_g1

0x5e7a,	// (0x00040066) list_single_2graphic_pane_g2_ParamLimits

0x5e7a,	// (0x00040066) list_single_2graphic_pane_g2

0x5e5c,	// (0x00040048) list_single_2graphic_pane_g3_ParamLimits

0x5e5c,	// (0x00040048) list_single_2graphic_pane_g3

0x533f,	// (0x0003f52b) list_single_2graphic_pane_g4_ParamLimits

0x533f,	// (0x0003f52b) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00049945) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00049945) list_single_2graphic_pane_g

0x534b,	// (0x0003f537) list_single_2graphic_pane_t1_ParamLimits

0x534b,	// (0x0003f537) list_single_2graphic_pane_t1

0x5379,	// (0x0003f565) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5379,	// (0x0003f565) list_double2_graphic_large_graphic_pane_g1

0x4ec3,	// (0x0003f0af) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ec3,	// (0x0003f0af) list_double2_graphic_large_graphic_pane_g2

0x4e08,	// (0x0003eff4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4e08,	// (0x0003eff4) list_double2_graphic_large_graphic_pane_g3

0x5389,	// (0x0003f575) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5389,	// (0x0003f575) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0004994e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0004994e) list_double2_graphic_large_graphic_pane_g

0x5395,	// (0x0003f581) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5395,	// (0x0003f581) list_double2_graphic_large_graphic_pane_t1

0x53ab,	// (0x0003f597) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x53ab,	// (0x0003f597) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00049957) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00049957) list_double2_graphic_large_graphic_pane_t

0x8aa3,	// (0x00042c8f) popup_fast_swap_window_ParamLimits

0x8aa3,	// (0x00042c8f) popup_fast_swap_window

0x8abf,	// (0x00042cab) popup_side_volume_key_window

0x8adb,	// (0x00042cc7) stacon_top_pane

0x8ae5,	// (0x00042cd1) status_pane_ParamLimits

0x8ae5,	// (0x00042cd1) status_pane

0x8adb,	// (0x00042cc7) status_small_pane

0x7763,	// (0x0004194f) control_pane

0x7763,	// (0x0004194f) stacon_bottom_pane

0x8092,	// (0x0004227e) scroll_pane_cp121

0x8089,	// (0x00042275) set_content_pane

0x8964,	// (0x00042b50) bg_active_tab_pane_g1_cp1

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp1

0x8976,	// (0x00042b62) bg_active_tab_pane_g3_cp1

0x8964,	// (0x00042b50) bg_passive_tab_pane_g1_cp1

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp1

0x8976,	// (0x00042b62) bg_passive_tab_pane_g3_cp1

0x897f,	// (0x00042b6b) bg_active_tab_pane_g1_cp2

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp2

0x8988,	// (0x00042b74) bg_active_tab_pane_g3_cp2

0x897f,	// (0x00042b6b) bg_passive_tab_pane_g1_cp2

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp2

0x8988,	// (0x00042b74) bg_passive_tab_pane_g3_cp2

0x8991,	// (0x00042b7d) bg_active_tab_pane_g1_cp3

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp3

0x899a,	// (0x00042b86) bg_active_tab_pane_g3_cp3

0x8991,	// (0x00042b7d) bg_passive_tab_pane_g1_cp3

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp3

0x899a,	// (0x00042b86) bg_passive_tab_pane_g3_cp3

0x89a3,	// (0x00042b8f) bg_active_tab_pane_g1_cp4

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp4

0x89ae,	// (0x00042b9a) bg_active_tab_pane_g3_cp4

0x89a3,	// (0x00042b8f) bg_passive_tab_pane_g1_cp4

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp4

0x89ae,	// (0x00042b9a) bg_passive_tab_pane_g3_cp4

0x89f7,	// (0x00042be3) bg_active_tab_pane_g1_cp5

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp5

0x8a00,	// (0x00042bec) bg_active_tab_pane_g3_cp5

0x89f7,	// (0x00042be3) bg_passive_tab_pane_g1_cp5

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp5

0x8a00,	// (0x00042bec) bg_passive_tab_pane_g3_cp5

0x8a09,	// (0x00042bf5) list_set_graphic_pane_ParamLimits

0x8a09,	// (0x00042bf5) list_set_graphic_pane

0x7763,	// (0x0004194f) bg_set_opt_pane_cp4

0x8a26,	// (0x00042c12) list_set_graphic_pane_g1_ParamLimits

0x8a26,	// (0x00042c12) list_set_graphic_pane_g1

0x8a32,	// (0x00042c1e) list_set_graphic_pane_g2_ParamLimits

0x8a32,	// (0x00042c1e) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0004995c) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0004995c) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x00049cbf) volume_small_pane_cp_g

0x8a56,	// (0x00042c42) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a56,	// (0x00042c42) list_double2_large_graphic_pane_g1_cp2

0x8a62,	// (0x00042c4e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a62,	// (0x00042c4e) list_double2_large_graphic_pane_g2_cp2

0x8a73,	// (0x00042c5f) list_double2_large_graphic_pane_g3_cp2

0x8a7b,	// (0x00042c67) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a7b,	// (0x00042c67) list_double2_large_graphic_pane_t1_cp2

0x8a91,	// (0x00042c7d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8a91,	// (0x00042c7d) list_double2_large_graphic_pane_t2_cp2

0xac50,	// (0x00044e3c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xac50,	// (0x00044e3c) list_double_large_graphic_pane_g1_cp2

0xac61,	// (0x00044e4d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac61,	// (0x00044e4d) list_double_large_graphic_pane_g2_cp2

0x8bf5,	// (0x00042de1) list_double_large_graphic_pane_g3_cp2

0xac72,	// (0x00044e5e) list_double_large_graphic_pane_g4_cp

0xac7a,	// (0x00044e66) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac7a,	// (0x00044e66) list_double_large_graphic_pane_t1_cp2

0xac91,	// (0x00044e7d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac91,	// (0x00044e7d) list_double_large_graphic_pane_t2_cp2

0x8af3,	// (0x00042cdf) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8af3,	// (0x00042cdf) list_double2_graphic_pane_g1_cp2

0x8b01,	// (0x00042ced) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8b01,	// (0x00042ced) list_double2_graphic_pane_g2_cp2

0x8b12,	// (0x00042cfe) list_double2_graphic_pane_g3_cp2

0x8b1c,	// (0x00042d08) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8b1c,	// (0x00042d08) list_double2_graphic_pane_t1_cp2

0x8b32,	// (0x00042d1e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b32,	// (0x00042d1e) list_double2_graphic_pane_t2_cp2

0x8b44,	// (0x00042d30) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b44,	// (0x00042d30) list_single_number_heading_pane_g1_cp2

0x8b50,	// (0x00042d3c) list_single_number_heading_pane_g2_cp2

0x8b58,	// (0x00042d44) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b58,	// (0x00042d44) list_single_number_heading_pane_t1_cp2

0x8b6e,	// (0x00042d5a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b6e,	// (0x00042d5a) list_single_number_heading_pane_t2_cp2

0x8b80,	// (0x00042d6c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b80,	// (0x00042d6c) list_single_number_heading_pane_t3_cp2

0x8b44,	// (0x00042d30) list_single_heading_pane_g1_cp2_ParamLimits

0x8b44,	// (0x00042d30) list_single_heading_pane_g1_cp2

0x8b50,	// (0x00042d3c) list_single_heading_pane_g2_cp2

0x8b58,	// (0x00042d44) list_single_heading_pane_t1_cp2_ParamLimits

0x8b58,	// (0x00042d44) list_single_heading_pane_t1_cp2

0xaa58,	// (0x00044c44) list_single_heading_pane_t2_cp2_ParamLimits

0xaa58,	// (0x00044c44) list_single_heading_pane_t2_cp2

0xa9a9,	// (0x00044b95) list_double_graphic_pane_g1_cp2_ParamLimits

0xa9a9,	// (0x00044b95) list_double_graphic_pane_g1_cp2

0xa972,	// (0x00044b5e) list_double_graphic_pane_g2_cp2_ParamLimits

0xa972,	// (0x00044b5e) list_double_graphic_pane_g2_cp2

0xa9b5,	// (0x00044ba1) list_double_graphic_pane_g3_cp2

0xa9bd,	// (0x00044ba9) list_double_graphic_pane_t1_cp2_ParamLimits

0xa9bd,	// (0x00044ba9) list_double_graphic_pane_t1_cp2

0xa9d3,	// (0x00044bbf) list_double_graphic_pane_t2_cp2_ParamLimits

0xa9d3,	// (0x00044bbf) list_double_graphic_pane_t2_cp2

0x8812,	// (0x000429fe) list_double_number_pane_g1_cp2_ParamLimits

0x8812,	// (0x000429fe) list_double_number_pane_g1_cp2

0x8bf5,	// (0x00042de1) list_double_number_pane_g2_cp2

0xa95e,	// (0x00044b4a) list_double_number_pane_t1_cp2_ParamLimits

0xa95e,	// (0x00044b4a) list_double_number_pane_t1_cp2

0xa981,	// (0x00044b6d) list_double_number_pane_t2_cp2_ParamLimits

0xa981,	// (0x00044b6d) list_double_number_pane_t2_cp2

0xa997,	// (0x00044b83) list_double_number_pane_t3_cp2_ParamLimits

0xa997,	// (0x00044b83) list_double_number_pane_t3_cp2

0xa847,	// (0x00044a33) list_single_graphic_pane_g1_cp2_ParamLimits

0xa847,	// (0x00044a33) list_single_graphic_pane_g1_cp2

0x8c4d,	// (0x00042e39) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c4d,	// (0x00042e39) list_single_graphic_pane_g2_cp2

0x8c59,	// (0x00042e45) list_single_graphic_pane_g3_cp2

0xa81d,	// (0x00044a09) list_single_graphic_pane_t1_cp2_ParamLimits

0xa81d,	// (0x00044a09) list_single_graphic_pane_t1_cp2

0x8c4d,	// (0x00042e39) list_single_number_pane_g1_cp2_ParamLimits

0x8c4d,	// (0x00042e39) list_single_number_pane_g1_cp2

0x8c59,	// (0x00042e45) list_single_number_pane_g2_cp2

0xa81d,	// (0x00044a09) list_single_number_pane_t1_cp2_ParamLimits

0xa81d,	// (0x00044a09) list_single_number_pane_t1_cp2

0xa833,	// (0x00044a1f) list_single_number_pane_t2_cp2_ParamLimits

0xa833,	// (0x00044a1f) list_single_number_pane_t2_cp2

0x8a62,	// (0x00042c4e) list_double2_pane_g1_cp2_ParamLimits

0x8a62,	// (0x00042c4e) list_double2_pane_g1_cp2

0x8a73,	// (0x00042c5f) list_double2_pane_g2_cp2

0x8bcd,	// (0x00042db9) list_double2_pane_t1_cp2_ParamLimits

0x8bcd,	// (0x00042db9) list_double2_pane_t1_cp2

0x8be3,	// (0x00042dcf) list_double2_pane_t2_cp2_ParamLimits

0x8be3,	// (0x00042dcf) list_double2_pane_t2_cp2

0x8812,	// (0x000429fe) list_double_pane_g1_cp2_ParamLimits

0x8812,	// (0x000429fe) list_double_pane_g1_cp2

0x8bf5,	// (0x00042de1) list_double_pane_g2_cp2

0x8bfd,	// (0x00042de9) list_double_pane_t1_cp2_ParamLimits

0x8bfd,	// (0x00042de9) list_double_pane_t1_cp2

0x8c13,	// (0x00042dff) list_double_pane_t2_cp2_ParamLimits

0x8c13,	// (0x00042dff) list_double_pane_t2_cp2

0x8c3d,	// (0x00042e29) list_single_pane_cp2_g3

0x8c4d,	// (0x00042e39) list_single_pane_g1_cp2_ParamLimits

0x8c4d,	// (0x00042e39) list_single_pane_g1_cp2

0x8c59,	// (0x00042e45) list_single_pane_g2_cp2

0x8c61,	// (0x00042e4d) list_single_pane_t1_cp2_ParamLimits

0x8c61,	// (0x00042e4d) list_single_pane_t1_cp2

0x8c79,	// (0x00042e65) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8c79,	// (0x00042e65) list_single_large_graphic_pane_g1_cp2

0x8c85,	// (0x00042e71) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8c85,	// (0x00042e71) list_single_large_graphic_pane_g2_cp2

0x8c91,	// (0x00042e7d) list_single_large_graphic_pane_g3_cp2

0x8c99,	// (0x00042e85) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8c99,	// (0x00042e85) list_single_large_graphic_pane_g4_cp1

0x8cb3,	// (0x00042e9f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8cb3,	// (0x00042e9f) list_single_large_graphic_pane_t1_cp2

0xa7e9,	// (0x000449d5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa7e9,	// (0x000449d5) list_single_graphic_heading_pane_g1_cp2

0xa7b6,	// (0x000449a2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa7b6,	// (0x000449a2) list_single_graphic_heading_pane_g4_cp2

0x8c59,	// (0x00042e45) list_single_graphic_heading_pane_g5_cp2

0xa7f5,	// (0x000449e1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa7f5,	// (0x000449e1) list_single_graphic_heading_pane_t1_cp2

0xa80b,	// (0x000449f7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa80b,	// (0x000449f7) list_single_graphic_heading_pane_t2_cp2

0xa7aa,	// (0x00044996) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa7aa,	// (0x00044996) list_single_2graphic_pane_g1_cp2

0xa7b6,	// (0x000449a2) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa7b6,	// (0x000449a2) list_single_2graphic_pane_g2_cp2

0x8c59,	// (0x00042e45) list_single_2graphic_pane_g3_cp2

0xa7c7,	// (0x000449b3) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa7c7,	// (0x000449b3) list_single_2graphic_pane_g4_cp2

0xa7d3,	// (0x000449bf) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa7d3,	// (0x000449bf) list_single_2graphic_pane_t1_cp2

0x7759,	// (0x00041945) list_highlight_pane_g10_cp1

0xa382,	// (0x0004456e) list_highlight_pane_g1_cp1

0xa38a,	// (0x00044576) list_highlight_pane_g2_cp1

0xa392,	// (0x0004457e) list_highlight_pane_g3_cp1

0xa39a,	// (0x00044586) list_highlight_pane_g4_cp1

0xa3a2,	// (0x0004458e) list_highlight_pane_g5_cp1

0xa3aa,	// (0x00044596) list_highlight_pane_g6_cp1

0xa3b2,	// (0x0004459e) list_highlight_pane_g7_cp1

0xa3ba,	// (0x000445a6) list_highlight_pane_g8_cp1

0xa3c2,	// (0x000445ae) list_highlight_pane_g9_cp1

0xa2a2,	// (0x0004448e) form_field_slider_pane_t3

0xa2b0,	// (0x0004449c) form_field_slider_pane_t4

0xa2be,	// (0x000444aa) slider_form_pane_ParamLimits

0xa2be,	// (0x000444aa) slider_form_pane

0x7763,	// (0x0004194f) control_abbreviations

0x7763,	// (0x0004194f) control_conventions

0x7763,	// (0x0004194f) control_definitions

0x7763,	// (0x0004194f) format_table_attribute

0xaaa2,	// (0x00044c8e) bg_popup_preview_window_pane_g9

0x7763,	// (0x0004194f) format_table_data2

0x7763,	// (0x0004194f) format_table_data3

0x7763,	// (0x0004194f) format_table_data_example

0x0008,

0x7763,	// (0x0004194f) intro_purpose

0xf905,	// (0x00049af1) bg_popup_preview_window_pane_g

0x7763,	// (0x0004194f) texts_category

0x7763,	// (0x0004194f) texts_graphics

0x8cc9,	// (0x00042eb5) text_digital

0x8cd8,	// (0x00042ec4) text_primary

0x8ce7,	// (0x00042ed3) text_primary_small

0x8cf6,	// (0x00042ee2) text_secondary

0x8d05,	// (0x00042ef1) text_title

0xb1ae,	// (0x0004539a) bg_passive_tab_pane_g1_cp3_srt

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp3_srt

0xb1b7,	// (0x000453a3) bg_passive_tab_pane_g3_cp3_srt

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp3_srt_ParamLimits

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp3_srt

0xb1c0,	// (0x000453ac) tabs_4_active_pane_srt_g1

0xb1c8,	// (0x000453b4) tabs_4_active_pane_srt_t1_ParamLimits

0xb1c8,	// (0x000453b4) tabs_4_active_pane_srt_t1

0xb1ae,	// (0x0004539a) bg_active_tab_pane_g1_cp3_copy1

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp3_copy1

0xb1b7,	// (0x000453a3) bg_active_tab_pane_g3_cp3_copy1

0x7843,	// (0x00041a2f) tabs_2_long_active_pane_srt_ParamLimits

0x7843,	// (0x00041a2f) tabs_2_long_active_pane_srt

0x7843,	// (0x00041a2f) tabs_2_long_passive_pane_srt_ParamLimits

0x7843,	// (0x00041a2f) tabs_2_long_passive_pane_srt

0x829d,	// (0x00042489) bg_passive_tab_pane_cp4_srt_ParamLimits

0x829d,	// (0x00042489) bg_passive_tab_pane_cp4_srt

0xaee6,	// (0x000450d2) bg_passive_tab_pane_g1_cp4_srt

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp4_srt

0xaeef,	// (0x000450db) bg_passive_tab_pane_g3_cp4_srt

0x827c,	// (0x00042468) bg_active_tab_pane_cp4_srt_ParamLimits

0x827c,	// (0x00042468) bg_active_tab_pane_cp4_srt

0xaef8,	// (0x000450e4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaef8,	// (0x000450e4) tabs_2_long_active_pane_srt_t1

0xaee6,	// (0x000450d2) bg_active_tab_pane_g1_cp4_srt

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp4_srt

0xaeef,	// (0x000450db) bg_active_tab_pane_g3_cp4_srt

0x7abe,	// (0x00041caa) tabs_3_long_active_pane_srt_ParamLimits

0x7abe,	// (0x00041caa) tabs_3_long_active_pane_srt

0x7abe,	// (0x00041caa) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7abe,	// (0x00041caa) tabs_3_long_passive_pane_cp_srt

0x7abe,	// (0x00041caa) tabs_3_long_passive_pane_srt_ParamLimits

0x7abe,	// (0x00041caa) tabs_3_long_passive_pane_srt

0x829d,	// (0x00042489) bg_passive_tab_pane_cp5_srt_ParamLimits

0x829d,	// (0x00042489) bg_passive_tab_pane_cp5_srt

0x89f7,	// (0x00042be3) bg_passive_tab_pane_g1_cp5_srt

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp5_srt

0x8a00,	// (0x00042bec) bg_passive_tab_pane_g3_cp5_srt

0x827c,	// (0x00042468) bg_active_tab_pane_cp5_srt_ParamLimits

0x827c,	// (0x00042468) bg_active_tab_pane_cp5_srt

0xaed4,	// (0x000450c0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaed4,	// (0x000450c0) tabs_3_long_active_pane_srt_t1

0x89f7,	// (0x00042be3) bg_active_tab_pane_g1_cp5_srt

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp5_srt

0x8a00,	// (0x00042bec) bg_active_tab_pane_g3_cp5_srt

0xaec6,	// (0x000450b2) navi_text_pane_srt_t1

0xaebe,	// (0x000450aa) navi_icon_pane_srt_g1

0x8ed8,	// (0x000430c4) midp_editing_number_pane_srt

0x8d14,	// (0x00042f00) midp_ticker_pane_srt

0x8ee0,	// (0x000430cc) midp_ticker_pane_srt_g1

0x8ee8,	// (0x000430d4) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004997b) midp_ticker_pane_srt_g

0x8ef0,	// (0x000430dc) midp_ticker_pane_srt_t1

0xaeaf,	// (0x0004509b) midp_editing_number_pane_t1_copy1

0x8d1c,	// (0x00042f08) listscroll_midp_pane

0x8d1c,	// (0x00042f08) midp_form_pane

0x8d8a,	// (0x00042f76) midp_info_popup_window_ParamLimits

0x8d8a,	// (0x00042f76) midp_info_popup_window

0x8167,	// (0x00042353) bg_popup_sub_pane_cp50_ParamLimits

0x8167,	// (0x00042353) bg_popup_sub_pane_cp50

0x9fae,	// (0x0004419a) listscroll_midp_info_pane_ParamLimits

0x9fae,	// (0x0004419a) listscroll_midp_info_pane

0x9f96,	// (0x00044182) listscroll_form_midp_pane_ParamLimits

0x9f96,	// (0x00044182) listscroll_form_midp_pane

0x9fa2,	// (0x0004418e) scroll_bar_cp050

0x9f76,	// (0x00044162) list_midp_pane

0xbbca,	// (0x00045db6) signal_pane_g2_cp

0x9eb0,	// (0x0004409c) listscroll_midp_info_pane_t1_ParamLimits

0x9eb0,	// (0x0004409c) listscroll_midp_info_pane_t1

0x9ec8,	// (0x000440b4) listscroll_midp_info_pane_t2_ParamLimits

0x9ec8,	// (0x000440b4) listscroll_midp_info_pane_t2

0x9f06,	// (0x000440f2) listscroll_midp_info_pane_t3_ParamLimits

0x9f06,	// (0x000440f2) listscroll_midp_info_pane_t3

0x9f40,	// (0x0004412c) listscroll_midp_info_pane_t4_ParamLimits

0x9f40,	// (0x0004412c) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x00049a2c) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x00049a2c) listscroll_midp_info_pane_t

0x8229,	// (0x00042415) scroll_pane_cp21

0x9e4e,	// (0x0004403a) form_midp_field_choice_group_pane

0x9e57,	// (0x00044043) form_midp_field_text_pane

0x9e96,	// (0x00044082) form_midp_field_time_pane

0x9e9e,	// (0x0004408a) form_midp_gauge_slider_pane

0x9ea7,	// (0x00044093) form_midp_gauge_wait_pane

0x7763,	// (0x0004194f) form_midp_image_pane

0x5494,	// (0x0003f680) list_single_midp_pane_ParamLimits

0x5494,	// (0x0003f680) list_single_midp_pane

0x9e06,	// (0x00043ff2) form_midp_field_text_pane_t1

0x9bf8,	// (0x00043de4) input_focus_pane_cp050

0x9e3d,	// (0x00044029) list_midp_form_text_pane

0x9dd5,	// (0x00043fc1) form_midp_field_choice_group_pane_t1

0x9de3,	// (0x00043fcf) input_focus_pane_cp051

0x9df7,	// (0x00043fe3) list_midp_choice_pane

0x7763,	// (0x0004194f) status_idle_pane

0x9db9,	// (0x00043fa5) form_midp_field_time_pane_t1

0x7759,	// (0x00041945) wait_anim_pane_g2_copy1

0x9dc7,	// (0x00043fb3) form_midp_field_time_pane_t2

0x0001,

0x8e38,	// (0x00043024) aid_navinavi_width_2_pane

0xf83b,	// (0x00049a27) form_midp_field_time_pane_t

0x7763,	// (0x0004194f) input_focus_pane_cp052

0x7763,	// (0x0004194f) bg_input_focus_pane_cp040

0x9d79,	// (0x00043f65) form_midp_gauge_slider_pane_t1

0x9d87,	// (0x00043f73) form_midp_gauge_slider_pane_t2

0x9d95,	// (0x00043f81) form_midp_gauge_slider_pane_t3

0x9da3,	// (0x00043f8f) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x00049a1e) form_midp_gauge_slider_pane_t

0x9db1,	// (0x00043f9d) form_midp_slider_pane

0x7843,	// (0x00041a2f) bg_input_focus_pane_cp041_ParamLimits

0x7843,	// (0x00041a2f) bg_input_focus_pane_cp041

0x9d46,	// (0x00043f32) form_midp_gauge_wait_pane_t1_ParamLimits

0x9d46,	// (0x00043f32) form_midp_gauge_wait_pane_t1

0x9d58,	// (0x00043f44) form_midp_gauge_wait_pane_t2_ParamLimits

0x9d58,	// (0x00043f44) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x00049a19) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x00049a19) form_midp_gauge_wait_pane_t

0x9d6a,	// (0x00043f56) form_midp_wait_pane_ParamLimits

0x9d6a,	// (0x00043f56) form_midp_wait_pane

0x9d10,	// (0x00043efc) form_midp_image_pane_g1

0x9d19,	// (0x00043f05) form_midp_image_pane_t1

0x9d28,	// (0x00043f14) form_midp_image_pane_t2

0x9d37,	// (0x00043f23) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x00049a12) form_midp_image_pane_t

0x9d07,	// (0x00043ef3) list_single_midp_pane_g1

0x5485,	// (0x0003f671) list_single_midp_pane_t1

0x9cdf,	// (0x00043ecb) list_midp_form_item_pane_ParamLimits

0x9cdf,	// (0x00043ecb) list_midp_form_item_pane

0x8de0,	// (0x00042fcc) list_midp_form_item_pane_t1

0x8def,	// (0x00042fdb) midp_ticker_pane_g1

0x8dfb,	// (0x00042fe7) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00049961) midp_ticker_pane_g

0x8e07,	// (0x00042ff3) midp_ticker_pane_t1

0xb100,	// (0x000452ec) midp_editing_number_pane_t1

0xb0de,	// (0x000452ca) midp_editing_number_pane

0xb0ed,	// (0x000452d9) midp_ticker_pane

0xae9f,	// (0x0004508b) ai_message_heading_pane

0x7763,	// (0x0004194f) bg_popup_window_pane_cp14

0xaea7,	// (0x00045093) listscroll_ai_message_pane

0xae29,	// (0x00045015) ai_message_heading_pane_g1_ParamLimits

0xae29,	// (0x00045015) ai_message_heading_pane_g1

0xae35,	// (0x00045021) ai_message_heading_pane_g2_ParamLimits

0xae35,	// (0x00045021) ai_message_heading_pane_g2

0xae41,	// (0x0004502d) ai_message_heading_pane_g3_ParamLimits

0xae41,	// (0x0004502d) ai_message_heading_pane_g3

0xae4d,	// (0x00045039) ai_message_heading_pane_g4_ParamLimits

0xae4d,	// (0x00045039) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x00049b53) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x00049b53) ai_message_heading_pane_g

0xae59,	// (0x00045045) ai_message_heading_pane_t1_ParamLimits

0xae59,	// (0x00045045) ai_message_heading_pane_t1

0xae73,	// (0x0004505f) ai_message_heading_pane_t2_ParamLimits

0xae73,	// (0x0004505f) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x00049b5c) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x00049b5c) ai_message_heading_pane_t

0xae85,	// (0x00045071) bg_popup_heading_pane_cp1_ParamLimits

0xae85,	// (0x00045071) bg_popup_heading_pane_cp1

0xae17,	// (0x00045003) list_ai_message_pane_ParamLimits

0xae17,	// (0x00045003) list_ai_message_pane

0x8229,	// (0x00042415) scroll_pane_cp10

0xadb3,	// (0x00044f9f) list_ai_message_pane_g1

0xadbb,	// (0x00044fa7) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x00049b30) list_ai_message_pane_g

0xadc3,	// (0x00044faf) list_ai_message_pane_t1_ParamLimits

0xadc3,	// (0x00044faf) list_ai_message_pane_t1

0xadd8,	// (0x00044fc4) list_ai_message_pane_t2_ParamLimits

0xadd8,	// (0x00044fc4) list_ai_message_pane_t2

0xaded,	// (0x00044fd9) list_ai_message_pane_t3_ParamLimits

0xaded,	// (0x00044fd9) list_ai_message_pane_t3

0xae02,	// (0x00044fee) list_ai_message_pane_t4_ParamLimits

0xae02,	// (0x00044fee) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x00049b35) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x00049b35) list_ai_message_pane_t

0xad9e,	// (0x00044f8a) cell_ai_soft_ind_pane_ParamLimits

0xad9e,	// (0x00044f8a) cell_ai_soft_ind_pane

0x8e19,	// (0x00043005) cell_ai_soft_ind_pane_g1_ParamLimits

0x8e19,	// (0x00043005) cell_ai_soft_ind_pane_g1

0x7763,	// (0x0004194f) grid_highlight_cp1

0x8e26,	// (0x00043012) text_secondary_cp56_ParamLimits

0x8e26,	// (0x00043012) text_secondary_cp56

0xad73,	// (0x00044f5f) example_general_pane_ParamLimits

0xad73,	// (0x00044f5f) example_general_pane

0xad7f,	// (0x00044f6b) example_parent_pane_g1_ParamLimits

0xad7f,	// (0x00044f6b) example_parent_pane_g1

0xad8b,	// (0x00044f77) example_parent_pane_t1_ParamLimits

0xad8b,	// (0x00044f77) example_parent_pane_t1

0x93fb,	// (0x000435e7) popup_preview_text_window_ParamLimits

0x93fb,	// (0x000435e7) popup_preview_text_window

0x8c45,	// (0x00042e31) list_single_pane_cp2_g4

0x7b74,	// (0x00041d60) bg_popup_preview_window_pane_ParamLimits

0x7b74,	// (0x00041d60) bg_popup_preview_window_pane

0xaaaa,	// (0x00044c96) popup_preview_text_window_t1_ParamLimits

0xaaaa,	// (0x00044c96) popup_preview_text_window_t1

0xaac8,	// (0x00044cb4) popup_preview_text_window_t2_ParamLimits

0xaac8,	// (0x00044cb4) popup_preview_text_window_t2

0xab11,	// (0x00044cfd) popup_preview_text_window_t3_ParamLimits

0xab11,	// (0x00044cfd) popup_preview_text_window_t3

0xab56,	// (0x00044d42) popup_preview_text_window_t4_ParamLimits

0xab56,	// (0x00044d42) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x00049b04) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x00049b04) popup_preview_text_window_t

0xabd4,	// (0x00044dc0) scroll_pane_cp11

0x9b08,	// (0x00043cf4) bg_popup_preview_window_pane_g1

0xaa6a,	// (0x00044c56) bg_popup_preview_window_pane_g2

0xaa72,	// (0x00044c5e) bg_popup_preview_window_pane_g3

0xaa7a,	// (0x00044c66) bg_popup_preview_window_pane_g4

0xaa82,	// (0x00044c6e) bg_popup_preview_window_pane_g5

0xaa8a,	// (0x00044c76) bg_popup_preview_window_pane_g6

0xaa92,	// (0x00044c7e) bg_popup_preview_window_pane_g7

0xaa9a,	// (0x00044c86) bg_popup_preview_window_pane_g8

0x59e6,	// (0x0003fbd2) aid_popup_width_pane

0x93d9,	// (0x000435c5) popup_midp_note_alarm_window_ParamLimits

0x93d9,	// (0x000435c5) popup_midp_note_alarm_window

0x80a3,	// (0x0004228f) data_form_pane_ParamLimits

0x518d,	// (0x0003f379) form_field_data_pane_g1

0x5197,	// (0x0003f383) form_field_data_pane_t1_ParamLimits

0x80af,	// (0x0004229b) input_focus_pane_ParamLimits

0x80bd,	// (0x000422a9) data_form_wide_pane_ParamLimits

0x51af,	// (0x0003f39b) form_field_data_wide_pane_g1

0x51bb,	// (0x0003f3a7) form_field_data_wide_pane_t1_ParamLimits

0x7e20,	// (0x0004200c) input_focus_pane_cp6_ParamLimits

0x81d6,	// (0x000423c2) input_popup_find_pane_g1_ParamLimits

0x81d6,	// (0x000423c2) input_popup_find_pane_g1

0x5fcc,	// (0x000401b8) aid_navi_side_left_pane

0x5fe1,	// (0x000401cd) aid_navi_side_right_pane

0xa47d,	// (0x00044669) bg_popup_window_pane_cp30_ParamLimits

0xa47d,	// (0x00044669) bg_popup_window_pane_cp30

0xa4f7,	// (0x000446e3) popup_midp_note_alarm_window_g1_ParamLimits

0xa4f7,	// (0x000446e3) popup_midp_note_alarm_window_g1

0xa527,	// (0x00044713) popup_midp_note_alarm_window_t1_ParamLimits

0xa527,	// (0x00044713) popup_midp_note_alarm_window_t1

0xa5c8,	// (0x000447b4) popup_midp_note_alarm_window_t2_ParamLimits

0xa5c8,	// (0x000447b4) popup_midp_note_alarm_window_t2

0xa676,	// (0x00044862) popup_midp_note_alarm_window_t3_ParamLimits

0xa676,	// (0x00044862) popup_midp_note_alarm_window_t3

0xa6a8,	// (0x00044894) popup_midp_note_alarm_window_t4_ParamLimits

0xa6a8,	// (0x00044894) popup_midp_note_alarm_window_t4

0xa6ce,	// (0x000448ba) popup_midp_note_alarm_window_t5_ParamLimits

0xa6ce,	// (0x000448ba) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x00049aa1) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x00049aa1) popup_midp_note_alarm_window_t

0xa77a,	// (0x00044966) wait_bar_pane_cp1_ParamLimits

0xa77a,	// (0x00044966) wait_bar_pane_cp1

0x7763,	// (0x0004194f) wait_anim_pane_copy1

0x7763,	// (0x0004194f) wait_border_pane_copy1

0xa163,	// (0x0004434f) wait_border_pane_g1_copy1

0x51d5,	// (0x0003f3c1) form_field_popup_pane_g1

0x51dd,	// (0x0003f3c9) form_field_popup_pane_t1_ParamLimits

0x80af,	// (0x0004229b) input_focus_pane_cp7_ParamLimits

0x80e9,	// (0x000422d5) list_form_pane_ParamLimits

0x51f5,	// (0x0003f3e1) form_field_popup_wide_pane_g1

0x51fd,	// (0x0003f3e9) form_field_popup_wide_pane_t1_ParamLimits

0x80af,	// (0x0004229b) input_focus_pane_cp8_ParamLimits

0x80f5,	// (0x000422e1) list_form_wide_pane_ParamLimits

0xb23a,	// (0x00045426) aid_size_cell_graphic_pane

0x5287,	// (0x0003f473) data_form_pane_t1_ParamLimits

0x54e7,	// (0x0003f6d3) data_form_wide_pane_t1_ParamLimits

0x96dc,	// (0x000438c8) bg_status_flat_pane

0x77a3,	// (0x0004198f) title_pane_t1_ParamLimits

0x780b,	// (0x000419f7) title_pane_t2_ParamLimits

0x7831,	// (0x00041a1d) title_pane_t3_ParamLimits

0xf573,	// (0x0004975f) title_pane_t_ParamLimits

0x86aa,	// (0x00042896) level_1_signal_ParamLimits

0x86b7,	// (0x000428a3) level_2_signal_ParamLimits

0x86c4,	// (0x000428b0) level_3_signal_ParamLimits

0x86d1,	// (0x000428bd) level_4_signal_ParamLimits

0x86de,	// (0x000428ca) level_5_signal_ParamLimits

0x86eb,	// (0x000428d7) level_6_signal_ParamLimits

0x86f8,	// (0x000428e4) level_7_signal_ParamLimits

0x86aa,	// (0x00042896) level_1_battery_ParamLimits

0x86b7,	// (0x000428a3) level_2_battery_ParamLimits

0x86c4,	// (0x000428b0) level_3_battery_ParamLimits

0x86d1,	// (0x000428bd) level_4_battery_ParamLimits

0x86de,	// (0x000428ca) level_5_battery_ParamLimits

0x86eb,	// (0x000428d7) level_6_battery_ParamLimits

0x86f8,	// (0x000428e4) level_7_battery_ParamLimits

0xa382,	// (0x0004456e) bg_status_flat_pane_g1

0xa38a,	// (0x00044576) bg_status_flat_pane_g2

0xa392,	// (0x0004457e) bg_status_flat_pane_g3

0xa39a,	// (0x00044586) bg_status_flat_pane_g4

0xa3a2,	// (0x0004458e) bg_status_flat_pane_g5

0xa3aa,	// (0x00044596) bg_status_flat_pane_g6

0xa3b2,	// (0x0004459e) bg_status_flat_pane_g7

0x7859,	// (0x00041a45) tabs_3_active_pane_t1_ParamLimits

0x7859,	// (0x00041a45) tabs_3_passive_pane_t1_ParamLimits

0x7873,	// (0x00041a5f) tabs_4_active_pane_t1_ParamLimits

0x7873,	// (0x00041a5f) tabs_4_1_passive_pane_t1_ParamLimits

0x826a,	// (0x00042456) tabs_2_active_pane_t1_ParamLimits

0x826a,	// (0x00042456) tabs_2_passive_pane_t1_ParamLimits

0x827c,	// (0x00042468) bg_active_tab_pane_cp4_ParamLimits

0x828a,	// (0x00042476) tabs_2_long_active_pane_t1_ParamLimits

0x829d,	// (0x00042489) bg_passive_tab_pane_cp4_ParamLimits

0x655f,	// (0x0004074b) list_single_midp_graphic_pane_t1_ParamLimits

0x827c,	// (0x00042468) bg_active_tab_pane_cp5_ParamLimits

0x82a9,	// (0x00042495) tabs_3_long_active_pane_t1_ParamLimits

0x829d,	// (0x00042489) bg_passive_tab_pane_cp5_ParamLimits

0x655f,	// (0x0004074b) list_single_midp_graphic_pane_t1

0x96dc,	// (0x000438c8) bg_status_flat_pane_ParamLimits

0x979f,	// (0x0004398b) indicator_pane_cp2_ParamLimits

0x979f,	// (0x0004398b) indicator_pane_cp2

0x98c3,	// (0x00043aaf) navi_pane_srt_ParamLimits

0x98c3,	// (0x00043aaf) navi_pane_srt

0x98e7,	// (0x00043ad3) popup_clock_digital_analogue_window_cp1

0x7920,	// (0x00041b0c) indicator_pane_t1

0x8d14,	// (0x00042f00) copy_highlight_pane

0x8d14,	// (0x00042f00) cursor_graphics_pane

0x8d14,	// (0x00042f00) graphic_within_text_pane

0x8d14,	// (0x00042f00) link_highlight_pane

0xab97,	// (0x00044d83) popup_preview_text_window_t5_ParamLimits

0xab97,	// (0x00044d83) popup_preview_text_window_t5

0x8e40,	// (0x0004302c) cursor_digital_pane

0x8e40,	// (0x0004302c) cursor_primary_pane

0x8e51,	// (0x0004303d) cursor_primary_small_pane

0x8e59,	// (0x00043045) cursor_secondary_pane

0x8e61,	// (0x0004304d) cursor_title_pane

0x8e40,	// (0x0004302c) link_highlight_digital_pane

0x8e48,	// (0x00043034) link_highlight_primary_pane

0x8e51,	// (0x0004303d) link_highlight_primary_small_pane

0x8e59,	// (0x00043045) link_highlight_secondary_pane

0x8e61,	// (0x0004304d) link_highlight_title_pane

0x8e40,	// (0x0004302c) copy_highlight_digital_pane

0x8e40,	// (0x0004302c) copy_highlight_primary_pane

0x8e51,	// (0x0004303d) copy_highlight_primary_small_pane

0x8e59,	// (0x00043045) copy_highlight_secondary_pane

0x8e61,	// (0x0004304d) copy_highlight_title_pane

0x8e59,	// (0x00043045) graphic_text_digital_pane

0xa420,	// (0x0004460c) graphic_text_primary_pane

0xa429,	// (0x00044615) graphic_text_primary_small_pane

0x8e51,	// (0x0004303d) graphic_text_secondary_pane

0x8e40,	// (0x0004302c) graphic_text_title_pane

0x8e69,	// (0x00043055) cursor_primary_pane_g1

0xa412,	// (0x000445fe) cursor_text_primary_t1

0xa3fa,	// (0x000445e6) cursor_primary_small_pane_g1

0xa404,	// (0x000445f0) cursor_text_primary_small_t1

0xa3e2,	// (0x000445ce) cursor_primary_small_pane_g1_copy1

0xa3ec,	// (0x000445d8) cursor_text_primary_small_t1_copy1

0xa3ca,	// (0x000445b6) cursor_text_title_t1

0xa3d8,	// (0x000445c4) cursor_title_pane_g1

0x8e69,	// (0x00043055) cursor_digital_pane_g1

0x8e73,	// (0x0004305f) cursor_text_digital_t1

0x8e98,	// (0x00043084) link_highlight_primary_pane_g1

0xa373,	// (0x0004455f) link_highlight_primary_pane_t1

0x8e81,	// (0x0004306d) link_highlight_primary_small_pane_g1

0x8e89,	// (0x00043075) link_highlight_primary_small_pane_t1

0x8e98,	// (0x00043084) link_highlight_secondary_pane_g1

0x8ea0,	// (0x0004308c) link_highlight_secondary_pane_t1

0xa2e7,	// (0x000444d3) link_highlight_title_pane_g1

0xa2ef,	// (0x000444db) link_highlight_title_pane_t1

0xa2d0,	// (0x000444bc) link_highlight_digital_pane_g1

0xa2d8,	// (0x000444c4) link_highlight_digital_pane_t1

0xa1a8,	// (0x00044394) copy_highlight_primary_pane_g1

0xa1b0,	// (0x0004439c) copy_highlight_primary_pane_t1

0xa182,	// (0x0004436e) copy_highlight_primary_small_pane_g1

0xa199,	// (0x00044385) copy_highlight_primary_small_pane_t1

0x8eaf,	// (0x0004309b) copy_highlight_secondary_pane_g1

0x8eb7,	// (0x000430a3) copy_highlight_secondary_pane_t1

0xa182,	// (0x0004436e) copy_highlight_title_pane_g1

0xa18a,	// (0x00044376) copy_highlight_title_pane_t1

0xa1a8,	// (0x00044394) copy_highlight_digital_pane_g1

0xb404,	// (0x000455f0) copy_highlight_digital_pane_t1

0xb358,	// (0x00045544) graphic_text_primary_pane_g1

0xb3e8,	// (0x000455d4) graphic_text_primary_pane_t1

0xb3f6,	// (0x000455e2) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x00049bd0) graphic_text_primary_pane_t

0xb3c4,	// (0x000455b0) graphic_text_primary_small_pane_g1

0xb3cc,	// (0x000455b8) graphic_text_primary_small_pane_t1

0xb3da,	// (0x000455c6) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x00049bcb) graphic_text_primary_small_pane_t

0xb3a0,	// (0x0004558c) graphic_text_secondary_pane_g1

0xb3a8,	// (0x00045594) graphic_text_secondary_pane_t1

0xb3b6,	// (0x000455a2) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x00049bc6) graphic_text_secondary_pane_t

0xb37c,	// (0x00045568) graphic_text_title_pane_g1

0xb384,	// (0x00045570) graphic_text_title_pane_t1

0xb392,	// (0x0004557e) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x00049bc1) graphic_text_title_pane_t

0xb358,	// (0x00045544) graphic_text_digital_pane_g1

0xb360,	// (0x0004554c) graphic_text_digital_pane_t1

0xb36e,	// (0x0004555a) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x00049bbc) graphic_text_digital_pane_t

0x7843,	// (0x00041a2f) navi_icon_pane_srt_ParamLimits

0x7843,	// (0x00041a2f) navi_icon_pane_srt

0x7763,	// (0x0004194f) navi_midp_pane_srt

0x7763,	// (0x0004194f) navi_navi_pane_srt

0x7843,	// (0x00041a2f) navi_text_pane_srt_ParamLimits

0x7843,	// (0x00041a2f) navi_text_pane_srt

0xb323,	// (0x0004550f) navi_navi_icon_text_pane_srt

0xb32b,	// (0x00045517) navi_navi_pane_srt_g1_ParamLimits

0xb32b,	// (0x00045517) navi_navi_pane_srt_g1

0xb33d,	// (0x00045529) navi_navi_pane_srt_g2_ParamLimits

0xb33d,	// (0x00045529) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x00049bb7) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x00049bb7) navi_navi_pane_srt_g

0xb34f,	// (0x0004553b) navi_navi_tabs_pane_srt

0xb323,	// (0x0004550f) navi_navi_text_pane_srt

0xb323,	// (0x0004550f) navi_navi_volume_pane_srt

0xb314,	// (0x00045500) navi_navi_text_pane_srt_t1

0x697d,	// (0x00040b69) navi_navi_volume_pane_srt_g1

0x6985,	// (0x00040b71) volume_small_pane_srt_ParamLimits

0x6985,	// (0x00040b71) volume_small_pane_srt

0x62ac,	// (0x00040498) volume_small_pane_srt_g1_ParamLimits

0x62ac,	// (0x00040498) volume_small_pane_srt_g1

0x62bc,	// (0x000404a8) volume_small_pane_srt_g2_ParamLimits

0x62bc,	// (0x000404a8) volume_small_pane_srt_g2

0x62cd,	// (0x000404b9) volume_small_pane_srt_g3_ParamLimits

0x62cd,	// (0x000404b9) volume_small_pane_srt_g3

0x62de,	// (0x000404ca) volume_small_pane_srt_g4_ParamLimits

0x62de,	// (0x000404ca) volume_small_pane_srt_g4

0x62ef,	// (0x000404db) volume_small_pane_srt_g5_ParamLimits

0x62ef,	// (0x000404db) volume_small_pane_srt_g5

0x6300,	// (0x000404ec) volume_small_pane_srt_g6_ParamLimits

0x6300,	// (0x000404ec) volume_small_pane_srt_g6

0x6311,	// (0x000404fd) volume_small_pane_srt_g7_ParamLimits

0x6311,	// (0x000404fd) volume_small_pane_srt_g7

0x6322,	// (0x0004050e) volume_small_pane_srt_g8_ParamLimits

0x6322,	// (0x0004050e) volume_small_pane_srt_g8

0x6333,	// (0x0004051f) volume_small_pane_srt_g9_ParamLimits

0x6333,	// (0x0004051f) volume_small_pane_srt_g9

0x6344,	// (0x00040530) volume_small_pane_srt_g10_ParamLimits

0x6344,	// (0x00040530) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00049966) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00049966) volume_small_pane_srt_g

0x7c1d,	// (0x00041e09) query_popup_data_pane_cp2

0xb2fa,	// (0x000454e6) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2fa,	// (0x000454e6) navi_navi_icon_text_pane_srt_t1

0xa420,	// (0x0004460c) navi_tabs_2_long_pane_srt

0xa420,	// (0x0004460c) navi_tabs_2_pane_srt

0xa420,	// (0x0004460c) navi_tabs_3_long_pane_srt

0xa420,	// (0x0004460c) navi_tabs_3_pane_srt

0xa420,	// (0x0004460c) navi_tabs_4_pane_srt

0x695d,	// (0x00040b49) tabs_2_active_pane_srt_ParamLimits

0x695d,	// (0x00040b49) tabs_2_active_pane_srt

0x696d,	// (0x00040b59) tabs_2_passive_pane_srt_ParamLimits

0x696d,	// (0x00040b59) tabs_2_passive_pane_srt

0x9072,	// (0x0004325e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9072,	// (0x0004325e) bg_passive_tab_pane_cp1_srt

0xb2c6,	// (0x000454b2) bg_passive_tab_pane_g1_cp1_srt

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp1_srt

0xb2cf,	// (0x000454bb) bg_passive_tab_pane_g3_cp1_srt

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp1_srt_ParamLimits

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp1_srt

0xb2d8,	// (0x000454c4) tabs_2_active_pane_srt_g1

0xb2e0,	// (0x000454cc) tabs_2_active_pane_srt_t1_ParamLimits

0xb2e0,	// (0x000454cc) tabs_2_active_pane_srt_t1

0xb2c6,	// (0x000454b2) bg_active_tab_pane_g1_cp1_srt

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp1_srt

0xb2cf,	// (0x000454bb) bg_active_tab_pane_g3_cp1_srt

0x692a,	// (0x00040b16) tabs_3_active_pane_srt_ParamLimits

0x692a,	// (0x00040b16) tabs_3_active_pane_srt

0x693b,	// (0x00040b27) tabs_3_passive_pane_cp_srt_ParamLimits

0x693b,	// (0x00040b27) tabs_3_passive_pane_cp_srt

0x694c,	// (0x00040b38) tabs_3_passive_pane_srt_ParamLimits

0x694c,	// (0x00040b38) tabs_3_passive_pane_srt

0x9072,	// (0x0004325e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9072,	// (0x0004325e) bg_passive_tab_pane_cp2_srt

0x8ec6,	// (0x000430b2) bg_passive_tab_pane_g1_cp2_srt

0x896d,	// (0x00042b59) bg_passive_tab_pane_g2_cp2_srt

0x8ecf,	// (0x000430bb) bg_passive_tab_pane_g3_cp2_srt

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp2_srt_ParamLimits

0x7843,	// (0x00041a2f) bg_active_tab_pane_cp2_srt

0xb2ac,	// (0x00045498) tabs_3_active_pane_srt_g1

0xb2b4,	// (0x000454a0) tabs_3_active_pane_srt_t1_ParamLimits

0xb2b4,	// (0x000454a0) tabs_3_active_pane_srt_t1

0x8ec6,	// (0x000430b2) bg_active_tab_pane_g1_cp2_srt

0x896d,	// (0x00042b59) bg_active_tab_pane_g2_cp2_srt

0x8ecf,	// (0x000430bb) bg_active_tab_pane_g3_cp2_srt

0x68e2,	// (0x00040ace) tabs_4_active_pane_srt_ParamLimits

0x68e2,	// (0x00040ace) tabs_4_active_pane_srt

0x68f4,	// (0x00040ae0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x68f4,	// (0x00040ae0) tabs_4_passive_pane_cp2_srt

0x9024,	// (0x00043210) aid_size_cell_toolbar

0x829d,	// (0x00042489) main_idle_act_pane_ParamLimits

0x920f,	// (0x000433fb) popup_large_graphic_colour_window_ParamLimits

0x9576,	// (0x00043762) popup_toolbar_window_ParamLimits

0x9576,	// (0x00043762) popup_toolbar_window

0xb10f,	// (0x000452fb) list_single_graphic_2heading_pane_ParamLimits

0xb10f,	// (0x000452fb) list_single_graphic_2heading_pane

0x8459,	// (0x00042645) aid_size_cell_apps_grid_lsc_pane

0x846b,	// (0x00042657) aid_size_cell_apps_grid_prt_pane

0x9072,	// (0x0004325e) bg_wml_button_pane_cp1_ParamLimits

0x9072,	// (0x0004325e) bg_wml_button_pane_cp1

0x9e06,	// (0x00043ff2) form_midp_field_text_pane_t1_ParamLimits

0x9bf8,	// (0x00043de4) input_focus_pane_cp050_ParamLimits

0x9e3d,	// (0x00044029) list_midp_form_text_pane_ParamLimits

0x9de3,	// (0x00043fcf) input_focus_pane_cp051_ParamLimits

0x9df7,	// (0x00043fe3) list_midp_choice_pane_ParamLimits

0x9c89,	// (0x00043e75) list_single_2graphic_pane_cp3_ParamLimits

0x9c89,	// (0x00043e75) list_single_2graphic_pane_cp3

0x9cad,	// (0x00043e99) list_single_midp_graphic_pane_ParamLimits

0x9cad,	// (0x00043e99) list_single_midp_graphic_pane

0x53cd,	// (0x0003f5b9) list_single_graphic_2heading_pane_g1_ParamLimits

0x53cd,	// (0x0003f5b9) list_single_graphic_2heading_pane_g1

0x53d9,	// (0x0003f5c5) list_single_graphic_2heading_pane_g4_ParamLimits

0x53d9,	// (0x0003f5c5) list_single_graphic_2heading_pane_g4

0x53e5,	// (0x0003f5d1) list_single_graphic_2heading_pane_g5_ParamLimits

0x53e5,	// (0x0003f5d1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x000499b9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x000499b9) list_single_graphic_2heading_pane_g

0x53f1,	// (0x0003f5dd) list_single_graphic_2heading_pane_t1_ParamLimits

0x53f1,	// (0x0003f5dd) list_single_graphic_2heading_pane_t1

0x5405,	// (0x0003f5f1) list_single_graphic_2heading_pane_t2_ParamLimits

0x5405,	// (0x0003f5f1) list_single_graphic_2heading_pane_t2

0x5421,	// (0x0003f60d) list_single_graphic_2heading_pane_t3_ParamLimits

0x5421,	// (0x0003f60d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x000499c0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x000499c0) list_single_graphic_2heading_pane_t

0x9a46,	// (0x00043c32) bg_popup_sub_pane_cp2

0x9a70,	// (0x00043c5c) grid_toobar_pane

0x64ce,	// (0x000406ba) cell_toolbar_pane_ParamLimits

0x64ce,	// (0x000406ba) cell_toolbar_pane

0x9aac,	// (0x00043c98) cell_toolbar_pane_g1_ParamLimits

0x9aac,	// (0x00043c98) cell_toolbar_pane_g1

0x9ac0,	// (0x00043cac) cell_toolbar_pane_g2_ParamLimits

0x9ac0,	// (0x00043cac) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x000499ce) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x000499ce) cell_toolbar_pane_g

0x9ae2,	// (0x00043cce) grid_highlight_pane_cp2_ParamLimits

0x9ae2,	// (0x00043cce) grid_highlight_pane_cp2

0x9afc,	// (0x00043ce8) toolbar_button_pane

0x9b08,	// (0x00043cf4) toolbar_button_pane_g1

0x9b10,	// (0x00043cfc) toolbar_button_pane_g2

0x9b18,	// (0x00043d04) toolbar_button_pane_g3

0x9b20,	// (0x00043d0c) toolbar_button_pane_g4

0x9b28,	// (0x00043d14) toolbar_button_pane_g5

0x9b30,	// (0x00043d1c) toolbar_button_pane_g6

0x9b38,	// (0x00043d24) toolbar_button_pane_g7

0x9b40,	// (0x00043d2c) toolbar_button_pane_g8

0x9b48,	// (0x00043d34) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x000499d3) toolbar_button_pane_g

0x6512,	// (0x000406fe) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6512,	// (0x000406fe) list_single_2graphic_pane_g1_cp3

0x651e,	// (0x0004070a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x651e,	// (0x0004070a) list_single_2graphic_pane_g2_cp3

0x652f,	// (0x0004071b) list_single_2graphic_pane_g3_cp3

0x6537,	// (0x00040723) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6537,	// (0x00040723) list_single_2graphic_pane_g4_cp3

0x6543,	// (0x0004072f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6543,	// (0x0004072f) list_single_2graphic_pane_t1_cp3

0x87f0,	// (0x000429dc) list_single_midp_graphic_pane_g2_ParamLimits

0x87f0,	// (0x000429dc) list_single_midp_graphic_pane_g2

0x53bd,	// (0x0003f5a9) aid_zoom_text_primary

0x64aa,	// (0x00040696) aid_zoom_text_secondary

0x8f83,	// (0x0004316f) status_small_pane_g7_ParamLimits

0x8f83,	// (0x0004316f) status_small_pane_g7

0x8fa6,	// (0x00043192) status_small_pane_t1_ParamLimits

0x777a,	// (0x00041966) title_pane_g2

0x0003,

0xf56a,	// (0x00049756) title_pane_g

0x7cbe,	// (0x00041eaa) aid_size_cell_colour_1_pane_ParamLimits

0x7cbe,	// (0x00041eaa) aid_size_cell_colour_1_pane

0x7cd2,	// (0x00041ebe) aid_size_cell_colour_2_pane_ParamLimits

0x7cd2,	// (0x00041ebe) aid_size_cell_colour_2_pane

0x7ce6,	// (0x00041ed2) aid_size_cell_colour_3_pane_ParamLimits

0x7ce6,	// (0x00041ed2) aid_size_cell_colour_3_pane

0x7cfa,	// (0x00041ee6) aid_size_cell_colour_4_pane_ParamLimits

0x7cfa,	// (0x00041ee6) aid_size_cell_colour_4_pane

0x5f08,	// (0x000400f4) title_pane_stacon_g1_ParamLimits

0x5f08,	// (0x000400f4) title_pane_stacon_g1

0xa207,	// (0x000443f3) popup_note_wait_window_g3_ParamLimits

0xa207,	// (0x000443f3) popup_note_wait_window_g3

0xa27d,	// (0x00044469) popup_note_wait_window_t5_ParamLimits

0xa27d,	// (0x00044469) popup_note_wait_window_t5

0x7763,	// (0x0004194f) main_feb_china_hwr_fs_writing_pane

0x90f4,	// (0x000432e0) popup_feb_china_hwr_fs_window_ParamLimits

0x90f4,	// (0x000432e0) popup_feb_china_hwr_fs_window

0x6575,	// (0x00040761) aid_size_cell_hwr_fs_ParamLimits

0x6575,	// (0x00040761) aid_size_cell_hwr_fs

0x9bf8,	// (0x00043de4) bg_popup_sub_pane_cp3_ParamLimits

0x9bf8,	// (0x00043de4) bg_popup_sub_pane_cp3

0x658a,	// (0x00040776) grid_hwr_fs_pane_ParamLimits

0x658a,	// (0x00040776) grid_hwr_fs_pane

0x65a2,	// (0x0004078e) linegrid_hwr_fs_pane_ParamLimits

0x65a2,	// (0x0004078e) linegrid_hwr_fs_pane

0x65b2,	// (0x0004079e) cell_hwr_fs_pane_ParamLimits

0x65b2,	// (0x0004079e) cell_hwr_fs_pane

0x9c04,	// (0x00043df0) linegrid_hwr_fs_pane_g1_ParamLimits

0x9c04,	// (0x00043df0) linegrid_hwr_fs_pane_g1

0x9c10,	// (0x00043dfc) linegrid_hwr_fs_pane_g2_ParamLimits

0x9c10,	// (0x00043dfc) linegrid_hwr_fs_pane_g2

0x9c22,	// (0x00043e0e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9c22,	// (0x00043e0e) linegrid_hwr_fs_pane_g3

0x65d4,	// (0x000407c0) linegrid_hwr_fs_pane_g4_ParamLimits

0x65d4,	// (0x000407c0) linegrid_hwr_fs_pane_g4

0x65ee,	// (0x000407da) linegrid_hwr_fs_pane_g5_ParamLimits

0x65ee,	// (0x000407da) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x000499fe) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x000499fe) linegrid_hwr_fs_pane_g

0x9c2e,	// (0x00043e1a) cell_hwr_fs_pane_g1_ParamLimits

0x9c2e,	// (0x00043e1a) cell_hwr_fs_pane_g1

0x997d,	// (0x00043b69) cell_hwr_fs_pane_g2_ParamLimits

0x997d,	// (0x00043b69) cell_hwr_fs_pane_g2

0x9c44,	// (0x00043e30) cell_hwr_fs_pane_g3_ParamLimits

0x9c44,	// (0x00043e30) cell_hwr_fs_pane_g3

0x9c51,	// (0x00043e3d) cell_hwr_fs_pane_g4_ParamLimits

0x9c51,	// (0x00043e3d) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x00049a09) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x00049a09) cell_hwr_fs_pane_g

0x6604,	// (0x000407f0) cell_hwr_fs_pane_t1

0x7763,	// (0x0004194f) grid_highlight_pane_cp6

0x7763,	// (0x0004194f) main_idle_act2_pane

0x8210,	// (0x000423fc) aid_inside_area_popup_secondary

0xa8b4,	// (0x00044aa0) aid_inside_area_window_primary_ParamLimits

0xa8b4,	// (0x00044aa0) aid_inside_area_window_primary

0xb413,	// (0x000455ff) ai2_news_ticker_pane

0xb41b,	// (0x00045607) aid_size_cell_ai1_link_ParamLimits

0xb41b,	// (0x00045607) aid_size_cell_ai1_link

0xb435,	// (0x00045621) popup_ai2_data_window_ParamLimits

0xb435,	// (0x00045621) popup_ai2_data_window

0xb44b,	// (0x00045637) popup_ai2_link_window_ParamLimits

0xb44b,	// (0x00045637) popup_ai2_link_window

0x9bf8,	// (0x00043de4) bg_popup_sub_pane_cp4_ParamLimits

0x9bf8,	// (0x00043de4) bg_popup_sub_pane_cp4

0xb45f,	// (0x0004564b) grid_ai2_link_pane_ParamLimits

0xb45f,	// (0x0004564b) grid_ai2_link_pane

0xb476,	// (0x00045662) popup_ai2_link_window_g1_ParamLimits

0xb476,	// (0x00045662) popup_ai2_link_window_g1

0xb482,	// (0x0004566e) popup_ai2_link_window_g2_ParamLimits

0xb482,	// (0x0004566e) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x00049bd5) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x00049bd5) popup_ai2_link_window_g

0xb491,	// (0x0004567d) ai2_mp_button_pane

0xb499,	// (0x00045685) ai2_mp_volume_pane

0x9de3,	// (0x00043fcf) bg_popup_sub_pane_cp5_ParamLimits

0x9de3,	// (0x00043fcf) bg_popup_sub_pane_cp5

0xb4a1,	// (0x0004568d) heading_ai2_gene_pane_ParamLimits

0xb4a1,	// (0x0004568d) heading_ai2_gene_pane

0xb4ad,	// (0x00045699) list_ai2_gene_pane_ParamLimits

0xb4ad,	// (0x00045699) list_ai2_gene_pane

0xb4f5,	// (0x000456e1) cell_ai2_link_pane_ParamLimits

0xb4f5,	// (0x000456e1) cell_ai2_link_pane

0xb50b,	// (0x000456f7) cell_ai2_link_pane_g1

0x7763,	// (0x0004194f) grid_highlight_pane_cp7

0x699a,	// (0x00040b86) ai2_mp_volume_pane_g1

0xb5db,	// (0x000457c7) ai2_mp_volume_pane_g2

0xb550,	// (0x0004573c) list_ai2_gene_pane_t1

0xb5e3,	// (0x000457cf) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x00049bee) ai2_mp_volume_pane_g

0x69a2,	// (0x00040b8e) volume_small_pane_cp3

0xb5eb,	// (0x000457d7) aid_size_cell_ai2_button

0xb5f3,	// (0x000457df) grid_ai2_button_pane

0xb5fc,	// (0x000457e8) cell_ai2_button_pane_ParamLimits

0xb5fc,	// (0x000457e8) cell_ai2_button_pane

0x7759,	// (0x00041945) cell_ai2_button_pane_g1

0x7763,	// (0x0004194f) grid_highlight_pane_cp8

0xb59b,	// (0x00045787) ai2_gene_pane_t1_ParamLimits

0xb59b,	// (0x00045787) ai2_gene_pane_t1

0x901a,	// (0x00043206) aid_height_parent_landscape

0xaf46,	// (0x00045132) aid_height_set_list

0xaf57,	// (0x00045143) aid_size_parent

0xb23a,	// (0x00045426) aid_size_cell_graphic_pane_ParamLimits

0xb4bd,	// (0x000456a9) popup_ai2_data_window_g1_ParamLimits

0xb4bd,	// (0x000456a9) popup_ai2_data_window_g1

0xb4c9,	// (0x000456b5) ai2_news_ticker_pane_g1

0xb4d1,	// (0x000456bd) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x00049bda) ai2_news_ticker_pane_g

0xb4d9,	// (0x000456c5) ai2_news_ticker_pane_t1

0xb4e7,	// (0x000456d3) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x00049bdf) ai2_news_ticker_pane_t

0xb514,	// (0x00045700) heading_ai2_gene_pane_g1

0xb51c,	// (0x00045708) heading_ai2_gene_pane_t1_ParamLimits

0xb51c,	// (0x00045708) heading_ai2_gene_pane_t1

0xb531,	// (0x0004571d) list_highlight_pane_cp6

0xb539,	// (0x00045725) ai2_gene_pane_ParamLimits

0xb539,	// (0x00045725) ai2_gene_pane

0xb55e,	// (0x0004574a) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x00049be4) list_ai2_gene_pane_t

0xb56c,	// (0x00045758) list_highlight_pane_cp8_ParamLimits

0xb56c,	// (0x00045758) list_highlight_pane_cp8

0xb57d,	// (0x00045769) ai2_gene_pane_g1_ParamLimits

0xb57d,	// (0x00045769) ai2_gene_pane_g1

0xb58f,	// (0x0004577b) ai2_gene_pane_g2_ParamLimits

0xb58f,	// (0x0004577b) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x00049be9) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x00049be9) ai2_gene_pane_g

0x8045,	// (0x00042231) scroll_pane_cp12

0x6469,	// (0x00040655) control_pane_t3_ParamLimits

0x6469,	// (0x00040655) control_pane_t3

0x8f97,	// (0x00043183) status_small_pane_g8_ParamLimits

0x8f97,	// (0x00043183) status_small_pane_g8

0x91da,	// (0x000433c6) popup_find_window_ParamLimits

0x93ed,	// (0x000435d9) popup_note_image_window_ParamLimits

0x5439,	// (0x0003f625) list_double2_graphic_pane_vc_g1_ParamLimits

0x5439,	// (0x0003f625) list_double2_graphic_pane_vc_g1

0xa11b,	// (0x00044307) list_double2_graphic_pane_vc_g2_ParamLimits

0xa11b,	// (0x00044307) list_double2_graphic_pane_vc_g2

0x64fe,	// (0x000406ea) list_double2_graphic_pane_vc_g3_ParamLimits

0x64fe,	// (0x000406ea) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x000499c7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x000499c7) list_double2_graphic_pane_vc_g

0x5445,	// (0x0003f631) list_double2_graphic_pane_vc_t1_ParamLimits

0x5445,	// (0x0003f631) list_double2_graphic_pane_vc_t1

0xa11b,	// (0x00044307) list_single_heading_pane_vc_g1_ParamLimits

0xa11b,	// (0x00044307) list_single_heading_pane_vc_g1

0x64fe,	// (0x000406ea) list_single_heading_pane_vc_g2_ParamLimits

0x64fe,	// (0x000406ea) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x000499e8) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x000499e8) list_single_heading_pane_vc_g

0x545b,	// (0x0003f647) list_single_heading_pane_vc_t1_ParamLimits

0x545b,	// (0x0003f647) list_single_heading_pane_vc_t1

0x5471,	// (0x0003f65d) list_single_heading_pane_vc_t2_ParamLimits

0x5471,	// (0x0003f65d) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x000499ed) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x000499ed) list_single_heading_pane_vc_t

0x9b50,	// (0x00043d3c) list_setting_number_pane_vc_g1_ParamLimits

0x9b50,	// (0x00043d3c) list_setting_number_pane_vc_g1

0x9b5c,	// (0x00043d48) list_setting_number_pane_vc_g2_ParamLimits

0x9b5c,	// (0x00043d48) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x000499f2) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x000499f2) list_setting_number_pane_vc_g

0x9b68,	// (0x00043d54) list_setting_number_pane_vc_t1_ParamLimits

0x9b68,	// (0x00043d54) list_setting_number_pane_vc_t1

0x9b7c,	// (0x00043d68) list_setting_number_pane_vc_t2_ParamLimits

0x9b7c,	// (0x00043d68) list_setting_number_pane_vc_t2

0x9b98,	// (0x00043d84) list_setting_number_pane_vc_t3_ParamLimits

0x9b98,	// (0x00043d84) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x000499f7) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x000499f7) list_setting_number_pane_vc_t

0x9bbe,	// (0x00043daa) set_value_pane_vc_ParamLimits

0x9bbe,	// (0x00043daa) set_value_pane_vc

0xb10f,	// (0x000452fb) list_double2_graphic_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_double2_graphic_pane_vc

0x683e,	// (0x00040a2a) list_double2_large_graphic_pane_vc_ParamLimits

0x683e,	// (0x00040a2a) list_double2_large_graphic_pane_vc

0xb10f,	// (0x000452fb) list_double2_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_double2_pane_vc

0xb10f,	// (0x000452fb) list_double_graphic_heading_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_double_graphic_heading_pane_vc

0xb10f,	// (0x000452fb) list_double_graphic_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_double_graphic_pane_vc

0xb10f,	// (0x000452fb) list_double_heading_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_double_heading_pane_vc

0x683e,	// (0x00040a2a) list_double_large_graphic_pane_vc_ParamLimits

0x683e,	// (0x00040a2a) list_double_large_graphic_pane_vc

0xb10f,	// (0x000452fb) list_double_number_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_double_number_pane_vc

0xb10f,	// (0x000452fb) list_double_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_double_pane_vc

0xb10f,	// (0x000452fb) list_double_time_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_double_time_pane_vc

0xb10f,	// (0x000452fb) list_setting_number_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_setting_number_pane_vc

0xb10f,	// (0x000452fb) list_setting_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_setting_pane_vc

0xb10f,	// (0x000452fb) list_single_graphic_heading_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_single_graphic_heading_pane_vc

0xb10f,	// (0x000452fb) list_single_heading_pane_vc_ParamLimits

0xb10f,	// (0x000452fb) list_single_heading_pane_vc

0x684f,	// (0x00040a3b) list_single_number_heading_pane_vc_ParamLimits

0x684f,	// (0x00040a3b) list_single_number_heading_pane_vc

0x5439,	// (0x0003f625) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5439,	// (0x0003f625) list_double_graphic_heading_pane_vc_g1

0xa11b,	// (0x00044307) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa11b,	// (0x00044307) list_double_graphic_heading_pane_vc_g2

0x64fe,	// (0x000406ea) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x64fe,	// (0x000406ea) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x000499c7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x000499c7) list_double_graphic_heading_pane_vc_g

0x5560,	// (0x0003f74c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5560,	// (0x0003f74c) list_double_graphic_heading_pane_vc_t1

0x545b,	// (0x0003f647) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x545b,	// (0x0003f647) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x00049bf5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x00049bf5) list_double_graphic_heading_pane_vc_t

0x9b50,	// (0x00043d3c) list_setting_pane_vc_g1_ParamLimits

0x9b50,	// (0x00043d3c) list_setting_pane_vc_g1

0x9b5c,	// (0x00043d48) list_setting_pane_vc_g2_ParamLimits

0x9b5c,	// (0x00043d48) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x000499f2) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x000499f2) list_setting_pane_vc_g

0xb834,	// (0x00045a20) list_setting_pane_vc_t1_ParamLimits

0xb834,	// (0x00045a20) list_setting_pane_vc_t1

0xb848,	// (0x00045a34) list_setting_pane_vc_t2_ParamLimits

0xb848,	// (0x00045a34) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x00049c23) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x00049c23) list_setting_pane_vc_t

0x9bbe,	// (0x00043daa) set_value_pane_cp_vc_ParamLimits

0x9bbe,	// (0x00043daa) set_value_pane_cp_vc

0xa11b,	// (0x00044307) list_single_number_heading_pane_vc_g1_ParamLimits

0xa11b,	// (0x00044307) list_single_number_heading_pane_vc_g1

0x64fe,	// (0x000406ea) list_single_number_heading_pane_vc_g2_ParamLimits

0x64fe,	// (0x000406ea) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x000499e8) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x000499e8) list_single_number_heading_pane_vc_g

0x545b,	// (0x0003f647) list_single_number_heading_pane_vc_t1_ParamLimits

0x545b,	// (0x0003f647) list_single_number_heading_pane_vc_t1

0x5574,	// (0x0003f760) list_single_number_heading_pane_vc_t2_ParamLimits

0x5574,	// (0x0003f760) list_single_number_heading_pane_vc_t2

0x5588,	// (0x0003f774) list_single_number_heading_pane_vc_t3_ParamLimits

0x5588,	// (0x0003f774) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x00049c28) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x00049c28) list_single_number_heading_pane_vc_t

0x5439,	// (0x0003f625) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5439,	// (0x0003f625) list_single_graphic_heading_pane_vc_g1

0xa11b,	// (0x00044307) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa11b,	// (0x00044307) list_single_graphic_heading_pane_vc_g4

0x64fe,	// (0x000406ea) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x64fe,	// (0x000406ea) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x000499c7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x000499c7) list_single_graphic_heading_pane_vc_g

0x545b,	// (0x0003f647) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x545b,	// (0x0003f647) list_single_graphic_heading_pane_vc_t1

0x559a,	// (0x0003f786) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x559a,	// (0x0003f786) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x00049c2f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00049c2f) list_single_graphic_heading_pane_vc_t

0xa11b,	// (0x00044307) list_double2_pane_vc_g1_ParamLimits

0xa11b,	// (0x00044307) list_double2_pane_vc_g1

0x64fe,	// (0x000406ea) list_double2_pane_vc_g2_ParamLimits

0x64fe,	// (0x000406ea) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x000499e8) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x000499e8) list_double2_pane_vc_g

0x55ae,	// (0x0003f79a) list_double2_pane_vc_t1_ParamLimits

0x55ae,	// (0x0003f79a) list_double2_pane_vc_t1

0x69ab,	// (0x00040b97) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x69ab,	// (0x00040b97) list_double2_large_graphic_pane_vc_g1

0x69b7,	// (0x00040ba3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x69b7,	// (0x00040ba3) list_double2_large_graphic_pane_vc_g2

0x69c3,	// (0x00040baf) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x69c3,	// (0x00040baf) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa48,	// (0x00049c34) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x00049c34) list_double2_large_graphic_pane_vc_g

0x55c4,	// (0x0003f7b0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x55c4,	// (0x0003f7b0) list_double2_large_graphic_pane_vc_t1

0x69cf,	// (0x00040bbb) list_double_time_pane_vc_g1_ParamLimits

0x69cf,	// (0x00040bbb) list_double_time_pane_vc_g1

0x69db,	// (0x00040bc7) list_double_time_pane_vc_g2_ParamLimits

0x69db,	// (0x00040bc7) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x00049c3b) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x00049c3b) list_double_time_pane_vc_g

0x55da,	// (0x0003f7c6) list_double_time_pane_vc_t1_ParamLimits

0x55da,	// (0x0003f7c6) list_double_time_pane_vc_t1

0x55f3,	// (0x0003f7df) list_double_time_pane_vc_t2_ParamLimits

0x55f3,	// (0x0003f7df) list_double_time_pane_vc_t2

0x5633,	// (0x0003f81f) list_double_time_pane_vc_t3_ParamLimits

0x5633,	// (0x0003f81f) list_double_time_pane_vc_t3

0x564b,	// (0x0003f837) list_double_time_pane_vc_t4_ParamLimits

0x564b,	// (0x0003f837) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x00049c40) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x00049c40) list_double_time_pane_vc_t

0xa11b,	// (0x00044307) list_double_pane_vc_g1_ParamLimits

0xa11b,	// (0x00044307) list_double_pane_vc_g1

0x64fe,	// (0x000406ea) list_double_pane_vc_g2_ParamLimits

0x64fe,	// (0x000406ea) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x000499e8) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x000499e8) list_double_pane_vc_g

0x565f,	// (0x0003f84b) list_double_pane_vc_t1_ParamLimits

0x565f,	// (0x0003f84b) list_double_pane_vc_t1

0x5671,	// (0x0003f85d) list_double_pane_vc_t2_ParamLimits

0x5671,	// (0x0003f85d) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x00049c49) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x00049c49) list_double_pane_vc_t

0xa11b,	// (0x00044307) list_double_number_pane_vc_g1_ParamLimits

0xa11b,	// (0x00044307) list_double_number_pane_vc_g1

0x64fe,	// (0x000406ea) list_double_number_pane_vc_g2_ParamLimits

0x64fe,	// (0x000406ea) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x000499e8) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x000499e8) list_double_number_pane_vc_g

0x5689,	// (0x0003f875) list_double_number_pane_vc_t1_ParamLimits

0x5689,	// (0x0003f875) list_double_number_pane_vc_t1

0x569d,	// (0x0003f889) list_double_number_pane_vc_t2_ParamLimits

0x569d,	// (0x0003f889) list_double_number_pane_vc_t2

0x5671,	// (0x0003f85d) list_double_number_pane_vc_t3_ParamLimits

0x5671,	// (0x0003f85d) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x00049c4e) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x00049c4e) list_double_number_pane_vc_t

0x69e7,	// (0x00040bd3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x69e7,	// (0x00040bd3) list_double_large_graphic_pane_vc_g1

0x69f3,	// (0x00040bdf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x69f3,	// (0x00040bdf) list_double_large_graphic_pane_vc_g2

0x69c3,	// (0x00040baf) list_double_large_graphic_pane_vc_g3_ParamLimits

0x69c3,	// (0x00040baf) list_double_large_graphic_pane_vc_g3

0x56af,	// (0x0003f89b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x56af,	// (0x0003f89b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x00049c55) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x00049c55) list_double_large_graphic_pane_vc_g

0x56bb,	// (0x0003f8a7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x56bb,	// (0x0003f8a7) list_double_large_graphic_pane_vc_t1

0x56cd,	// (0x0003f8b9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x56cd,	// (0x0003f8b9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x00049c5e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x00049c5e) list_double_large_graphic_pane_vc_t

0xa11b,	// (0x00044307) list_double_heading_pane_vc_g1_ParamLimits

0xa11b,	// (0x00044307) list_double_heading_pane_vc_g1

0x64fe,	// (0x000406ea) list_double_heading_pane_vc_g2_ParamLimits

0x64fe,	// (0x000406ea) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x000499e8) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x000499e8) list_double_heading_pane_vc_g

0x56e6,	// (0x0003f8d2) list_double_heading_pane_vc_t1_ParamLimits

0x56e6,	// (0x0003f8d2) list_double_heading_pane_vc_t1

0x545b,	// (0x0003f647) list_double_heading_pane_vc_t2_ParamLimits

0x545b,	// (0x0003f647) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x00049c63) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x00049c63) list_double_heading_pane_vc_t

0x5439,	// (0x0003f625) list_double_graphic_pane_vc_g1_ParamLimits

0x5439,	// (0x0003f625) list_double_graphic_pane_vc_g1

0x6a02,	// (0x00040bee) list_double_graphic_pane_vc_g2_ParamLimits

0x6a02,	// (0x00040bee) list_double_graphic_pane_vc_g2

0x6a11,	// (0x00040bfd) list_double_graphic_pane_vc_g3_ParamLimits

0x6a11,	// (0x00040bfd) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x00049c68) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x00049c68) list_double_graphic_pane_vc_g

0x56fa,	// (0x0003f8e6) list_double_graphic_pane_vc_t1_ParamLimits

0x56fa,	// (0x0003f8e6) list_double_graphic_pane_vc_t1

0x5671,	// (0x0003f85d) list_double_graphic_pane_vc_t2_ParamLimits

0x5671,	// (0x0003f85d) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00049c6f) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00049c6f) list_double_graphic_pane_vc_t

0x59f2,	// (0x0003fbde) aid_size_cell_fastswap

0x59fa,	// (0x0003fbe6) aid_size_cell_touch_ParamLimits

0x59fa,	// (0x0003fbe6) aid_size_cell_touch

0x5c55,	// (0x0003fe41) popup_fast_swap_wide_window_ParamLimits

0x5c55,	// (0x0003fe41) popup_fast_swap_wide_window

0x5d5f,	// (0x0003ff4b) touch_pane_ParamLimits

0x5d5f,	// (0x0003ff4b) touch_pane

0x809b,	// (0x00042287) button_value_adjust_pane_cp2

0x50d9,	// (0x0003f2c5) button_value_adjust_pane_cp4

0x50fd,	// (0x0003f2e9) form_field_data_pane_cp2

0x511e,	// (0x0003f30a) form_field_data_wide_pane_cp2

0x8528,	// (0x00042714) bg_scroll_pane_ParamLimits

0x606b,	// (0x00040257) scroll_handle_pane_ParamLimits

0x607f,	// (0x0004026b) scroll_sc2_down_pane_ParamLimits

0x607f,	// (0x0004026b) scroll_sc2_down_pane

0x8559,	// (0x00042745) scroll_sc2_up_pane_ParamLimits

0x8559,	// (0x00042745) scroll_sc2_up_pane

0xbc9d,	// (0x00045e89) grid_wheel_folder_pane_g1_ParamLimits

0xbc9d,	// (0x00045e89) grid_wheel_folder_pane_g1

0x6244,	// (0x00040430) clock_nsta_pane_cp2_ParamLimits

0x6244,	// (0x00040430) clock_nsta_pane_cp2

0x8d1c,	// (0x00042f08) listscroll_midp_pane_ParamLimits

0x8d28,	// (0x00042f14) midp_canvas_pane

0x9012,	// (0x000431fe) nsta_clock_indic_pane

0x9058,	// (0x00043244) listscroll_form_pane_vc

0x9060,	// (0x0004324c) listscroll_set_pane_vc_ParamLimits

0x9060,	// (0x0004324c) listscroll_set_pane_vc

0x96f8,	// (0x000438e4) clock_nsta_pane

0x976d,	// (0x00043959) indicator_nsta_pane

0x9a46,	// (0x00043c32) bg_popup_sub_pane_cp2_ParamLimits

0x9a5a,	// (0x00043c46) find_pane_cp2_ParamLimits

0x9a5a,	// (0x00043c46) find_pane_cp2

0x9a70,	// (0x00043c5c) grid_toobar_pane_ParamLimits

0x9bcc,	// (0x00043db8) list_form_gen_pane_vc_ParamLimits

0x9bcc,	// (0x00043db8) list_form_gen_pane_vc

0x9be2,	// (0x00043dce) scroll_pane_cp8_vc_ParamLimits

0x9be2,	// (0x00043dce) scroll_pane_cp8_vc

0x9c5e,	// (0x00043e4a) data_form_wide_pane_vc_ParamLimits

0x9c5e,	// (0x00043e4a) data_form_wide_pane_vc

0x9c6a,	// (0x00043e56) form_field_data_wide_pane_vc_g1

0x9c72,	// (0x00043e5e) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c72,	// (0x00043e5e) form_field_data_wide_pane_vc_t1

0x80af,	// (0x0004229b) input_focus_pane_cp6_vc_ParamLimits

0x80af,	// (0x0004229b) input_focus_pane_cp6_vc

0x9f76,	// (0x00044162) list_midp_pane_ParamLimits

0x9f82,	// (0x0004416e) scroll_pane_cp16_ParamLimits

0x9f82,	// (0x0004416e) scroll_pane_cp16

0x9fd0,	// (0x000441bc) button_value_adjust_pane_ParamLimits

0x9fd0,	// (0x000441bc) button_value_adjust_pane

0xaf69,	// (0x00045155) button_value_adjust_pane_cp6_ParamLimits

0xaf69,	// (0x00045155) button_value_adjust_pane_cp6

0xb093,	// (0x0004527f) settings_code_pane_cp_ParamLimits

0xb093,	// (0x0004527f) settings_code_pane_cp

0x7759,	// (0x00041945) cell_touch_pane_g1

0x7759,	// (0x00041945) cell_touch_pane_g2

0x0001,

0xf724,	// (0x00049910) cell_touch_pane_g

0xb60e,	// (0x000457fa) cell_touch_pane_cp_ParamLimits

0xb60e,	// (0x000457fa) cell_touch_pane_cp

0xb61e,	// (0x0004580a) cell_touch_pane_ParamLimits

0xb61e,	// (0x0004580a) cell_touch_pane

0x7759,	// (0x00041945) scroll_sc2_down_pane_g1

0x7759,	// (0x00041945) scroll_sc2_up_pane_g1

0x7763,	// (0x0004194f) bg_set_opt_pane_cp4_vc

0xb630,	// (0x0004581c) list_set_graphic_pane_vc_g1_ParamLimits

0xb630,	// (0x0004581c) list_set_graphic_pane_vc_g1

0xb63c,	// (0x00045828) list_set_graphic_pane_vc_g2_ParamLimits

0xb63c,	// (0x00045828) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x00049bfa) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x00049bfa) list_set_graphic_pane_vc_g

0xb648,	// (0x00045834) text_primary_small_cp13_vc_ParamLimits

0xb648,	// (0x00045834) text_primary_small_cp13_vc

0xb660,	// (0x0004584c) list_set_graphic_pane_vc_ParamLimits

0xb660,	// (0x0004584c) list_set_graphic_pane_vc

0x7763,	// (0x0004194f) input_focus_pane_cp2_vc

0x7759,	// (0x00041945) setting_code_pane_vc_g1

0xb674,	// (0x00045860) setting_code_pane_vc_t1

0xb682,	// (0x0004586e) set_text_pane_vc_t1_ParamLimits

0xb682,	// (0x0004586e) set_text_pane_vc_t1

0x7763,	// (0x0004194f) input_focus_pane_cp1_vc

0xb69d,	// (0x00045889) list_set_text_pane_vc

0x7759,	// (0x00041945) setting_text_pane_vc_g1

0x7763,	// (0x0004194f) bg_set_opt_pane_cp2_vc

0xb6a7,	// (0x00045893) setting_slider_graphic_pane_vc_g1

0xb6af,	// (0x0004589b) setting_slider_graphic_pane_vc_t1

0xb6bd,	// (0x000458a9) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x00049bff) setting_slider_graphic_pane_vc_t

0xb6cb,	// (0x000458b7) slider_set_pane_cp_vc

0xb6d3,	// (0x000458bf) slider_set_pane_vc_g1

0xb6dc,	// (0x000458c8) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x00049c04) slider_set_pane_vc_g

0x8116,	// (0x00042302) set_opt_bg_pane_g1_copy1

0x811e,	// (0x0004230a) set_opt_bg_pane_g2_copy1

0xb708,	// (0x000458f4) set_opt_bg_pane_g3_copy1

0x812e,	// (0x0004231a) set_opt_bg_pane_g4_copy1

0x8136,	// (0x00042322) set_opt_bg_pane_g5_copy1

0x813e,	// (0x0004232a) set_opt_bg_pane_g6_copy1

0xb712,	// (0x000458fe) set_opt_bg_pane_g7_copy1

0xb71a,	// (0x00045906) set_opt_bg_pane_g8_copy1

0xb724,	// (0x00045910) set_opt_bg_pane_g9_copy1

0x7763,	// (0x0004194f) bg_set_opt_pane_cp_vc

0xb72e,	// (0x0004591a) setting_slider_pane_vc_t1

0xb6af,	// (0x0004589b) setting_slider_pane_vc_t2

0xb6bd,	// (0x000458a9) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x00049c13) setting_slider_pane_vc_t

0xb6cb,	// (0x000458b7) slider_set_pane_vc

0x6612,	// (0x000407fe) volume_set_pane_vc_g1

0x661b,	// (0x00040807) volume_set_pane_vc_g2

0x6624,	// (0x00040810) volume_set_pane_vc_g3

0x662d,	// (0x00040819) volume_set_pane_vc_g4

0x6636,	// (0x00040822) volume_set_pane_vc_g5

0x663f,	// (0x0004082b) volume_set_pane_vc_g6

0x6648,	// (0x00040834) volume_set_pane_vc_g7

0x6651,	// (0x0004083d) volume_set_pane_vc_g8

0x665a,	// (0x00040846) volume_set_pane_vc_g9

0x6663,	// (0x0004084f) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x00049ab8) volume_set_pane_vc_g

0xb73d,	// (0x00045929) volume_set_pane_vc

0xb745,	// (0x00045931) button_value_adjust_pane_cp1_vc

0xb74f,	// (0x0004593b) list_highlight_pane_cp2_vc

0xb758,	// (0x00045944) list_set_pane_vc_ParamLimits

0xb758,	// (0x00045944) list_set_pane_vc

0xb7c2,	// (0x000459ae) main_pane_set_vc_t1_ParamLimits

0xb7c2,	// (0x000459ae) main_pane_set_vc_t1

0xb7d7,	// (0x000459c3) main_pane_set_vc_t2_ParamLimits

0xb7d7,	// (0x000459c3) main_pane_set_vc_t2

0xb7e9,	// (0x000459d5) main_pane_set_vc_t3_ParamLimits

0xb7e9,	// (0x000459d5) main_pane_set_vc_t3

0xb7fd,	// (0x000459e9) main_pane_set_vc_t4_ParamLimits

0xb7fd,	// (0x000459e9) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x00049c1a) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x00049c1a) main_pane_set_vc_t

0xb811,	// (0x000459fd) setting_code_pane_vc_ParamLimits

0xb811,	// (0x000459fd) setting_code_pane_vc

0xb822,	// (0x00045a0e) setting_slider_graphic_pane_vc

0xb822,	// (0x00045a0e) setting_slider_pane_vc

0xb822,	// (0x00045a0e) setting_text_pane_vc

0xb822,	// (0x00045a0e) setting_volume_pane_vc

0xb82c,	// (0x00045a18) scroll_pane_cp121_vc

0x8089,	// (0x00042275) set_content_pane_vc

0xb86a,	// (0x00045a56) button_value_adjust_pane_g1

0xb873,	// (0x00045a5f) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00049c74) button_value_adjust_pane_g

0xb87c,	// (0x00045a68) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb87c,	// (0x00045a68) form_field_slider_wide_pane_vc_t1

0xb890,	// (0x00045a7c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb890,	// (0x00045a7c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8d,	// (0x00049c79) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x00049c79) form_field_slider_wide_pane_vc_t

0x7abe,	// (0x00041caa) input_focus_pane_cp10_vc_ParamLimits

0x7abe,	// (0x00041caa) input_focus_pane_cp10_vc

0xb8a2,	// (0x00045a8e) slider_cont_pane_cp1_vc_ParamLimits

0xb8a2,	// (0x00045a8e) slider_cont_pane_cp1_vc

0xb6d3,	// (0x000458bf) slider_form_pane_g1_cp2

0xb6dc,	// (0x000458c8) slider_form_pane_g2_cp2

0xb8bb,	// (0x00045aa7) form_field_slider_pane_vc_t3

0xb8c9,	// (0x00045ab5) form_field_slider_pane_vc_t4

0xb8d7,	// (0x00045ac3) slider_form_pane_vc_ParamLimits

0xb8d7,	// (0x00045ac3) slider_form_pane_vc

0xb8e4,	// (0x00045ad0) form_field_slider_pane_vc_t1_ParamLimits

0xb8e4,	// (0x00045ad0) form_field_slider_pane_vc_t1

0xb890,	// (0x00045a7c) form_field_slider_pane_vc_t2_ParamLimits

0xb890,	// (0x00045a7c) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x00049c89) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x00049c89) form_field_slider_pane_vc_t

0x7abe,	// (0x00041caa) input_focus_pane_cp9_vc_ParamLimits

0x7abe,	// (0x00041caa) input_focus_pane_cp9_vc

0xb900,	// (0x00045aec) slider_cont_pane_vc_ParamLimits

0xb900,	// (0x00045aec) slider_cont_pane_vc

0xb912,	// (0x00045afe) list_form_graphic_pane_cp_vc_ParamLimits

0xb912,	// (0x00045afe) list_form_graphic_pane_cp_vc

0x9c6a,	// (0x00043e56) form_field_popup_wide_pane_vc_g1

0xb927,	// (0x00045b13) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb927,	// (0x00045b13) form_field_popup_wide_pane_vc_t1

0x80af,	// (0x0004229b) input_focus_pane_cp8_vc_ParamLimits

0x80af,	// (0x0004229b) input_focus_pane_cp8_vc

0xb93e,	// (0x00045b2a) list_form_wide_pane_vc_ParamLimits

0xb93e,	// (0x00045b2a) list_form_wide_pane_vc

0xb94a,	// (0x00045b36) list_form_graphic_pane_vc_g1

0xb952,	// (0x00045b3e) list_form_graphic_pane_vc_t1_ParamLimits

0xb952,	// (0x00045b3e) list_form_graphic_pane_vc_t1

0x7843,	// (0x00041a2f) list_highlight_pane_cp5_vc_ParamLimits

0x7843,	// (0x00041a2f) list_highlight_pane_cp5_vc

0xb96e,	// (0x00045b5a) list_form_graphic_pane_vc_ParamLimits

0xb96e,	// (0x00045b5a) list_form_graphic_pane_vc

0x9c6a,	// (0x00043e56) form_field_popup_pane_vc_g1

0xb984,	// (0x00045b70) form_field_popup_pane_vc_t1_ParamLimits

0xb984,	// (0x00045b70) form_field_popup_pane_vc_t1

0x80af,	// (0x0004229b) input_focus_pane_cp7_vc_ParamLimits

0x80af,	// (0x0004229b) input_focus_pane_cp7_vc

0xb99b,	// (0x00045b87) list_form_pane_vc_ParamLimits

0xb99b,	// (0x00045b87) list_form_pane_vc

0xb9a7,	// (0x00045b93) data_form_pane_vc_t1_ParamLimits

0xb9a7,	// (0x00045b93) data_form_pane_vc_t1

0x8116,	// (0x00042302) input_focus_pane_vc_g1

0x811e,	// (0x0004230a) input_focus_pane_vc_g2

0x8126,	// (0x00042312) input_focus_pane_vc_g3

0x812e,	// (0x0004231a) input_focus_pane_vc_g4

0x8136,	// (0x00042322) input_focus_pane_vc_g5

0x813e,	// (0x0004232a) input_focus_pane_vc_g6

0x8146,	// (0x00042332) input_focus_pane_vc_g7

0x814e,	// (0x0004233a) input_focus_pane_vc_g8

0x8156,	// (0x00042342) input_focus_pane_vc_g9

0x7759,	// (0x00041945) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x00049899) input_focus_pane_vc_g

0x9c5e,	// (0x00043e4a) data_form_pane_vc_ParamLimits

0x9c5e,	// (0x00043e4a) data_form_pane_vc

0x9c6a,	// (0x00043e56) form_field_data_pane_vc_g1

0xb9c2,	// (0x00045bae) form_field_data_pane_vc_t1_ParamLimits

0xb9c2,	// (0x00045bae) form_field_data_pane_vc_t1

0x80af,	// (0x0004229b) input_focus_pane_vc_ParamLimits

0x80af,	// (0x0004229b) input_focus_pane_vc

0xb9dc,	// (0x00045bc8) button_value_adjust_pane_cp3_vc

0xb9e4,	// (0x00045bd0) button_value_adjust_pane_cp5_vc

0xb9ec,	// (0x00045bd8) form_field_data_pane_vc_ParamLimits

0xb9ec,	// (0x00045bd8) form_field_data_pane_vc

0xba03,	// (0x00045bef) form_field_data_pane_vc_cp2

0xba0b,	// (0x00045bf7) form_field_data_wide_pane_vc_ParamLimits

0xba0b,	// (0x00045bf7) form_field_data_wide_pane_vc

0xba21,	// (0x00045c0d) form_field_data_wide_pane_vc_cp2

0xba29,	// (0x00045c15) form_field_popup_pane_vc_ParamLimits

0xba29,	// (0x00045c15) form_field_popup_pane_vc

0xba40,	// (0x00045c2c) form_field_popup_wide_pane_vc_ParamLimits

0xba40,	// (0x00045c2c) form_field_popup_wide_pane_vc

0xba56,	// (0x00045c42) form_field_slider_pane_vc_ParamLimits

0xba56,	// (0x00045c42) form_field_slider_pane_vc

0xba69,	// (0x00045c55) form_field_slider_wide_pane_vc_ParamLimits

0xba69,	// (0x00045c55) form_field_slider_wide_pane_vc

0xba7c,	// (0x00045c68) grid_touch_1_pane_ParamLimits

0xba7c,	// (0x00045c68) grid_touch_1_pane

0xba88,	// (0x00045c74) grid_touch_2_pane_ParamLimits

0xba88,	// (0x00045c74) grid_touch_2_pane

0x8fdd,	// (0x000431c9) touch_pane_g1_ParamLimits

0x8fdd,	// (0x000431c9) touch_pane_g1

0xbaa0,	// (0x00045c8c) cell_app_pane_cp_wide_ParamLimits

0xbaa0,	// (0x00045c8c) cell_app_pane_cp_wide

0xbab1,	// (0x00045c9d) grid_popup_fast_wide_pane_ParamLimits

0xbab1,	// (0x00045c9d) grid_popup_fast_wide_pane

0xbac5,	// (0x00045cb1) scroll_pane_cp19_ParamLimits

0xbac5,	// (0x00045cb1) scroll_pane_cp19

0x7763,	// (0x0004194f) bg_popup_window_pane_cp20

0xbad9,	// (0x00045cc5) listscroll_popup_fast_wide_pane

0x7843,	// (0x00041a2f) grid_indicator_nsta_pane

0xbae1,	// (0x00045ccd) clock_nsta_pane_g1

0xbaea,	// (0x00045cd6) clock_nsta_pane_t1

0xbb06,	// (0x00045cf2) cell_indicator_nsta_pane_ParamLimits

0xbb06,	// (0x00045cf2) cell_indicator_nsta_pane

0xbb3e,	// (0x00045d2a) cell_indicator_nsta_pane_g1

0xbb4c,	// (0x00045d38) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x00049c93) cell_indicator_nsta_pane_g

0xbb62,	// (0x00045d4e) clock_nsta_pane_cp

0xbb6a,	// (0x00045d56) indicator_nsta_pane_cp

0xbb73,	// (0x00045d5f) nsta_clock_indic_pane_g1

0x790c,	// (0x00041af8) grid_indicator_pane

0x864e,	// (0x0004283a) scroll_pane_cp29

0x6193,	// (0x0004037f) indicator_nsta_pane_cp2_ParamLimits

0x6193,	// (0x0004037f) indicator_nsta_pane_cp2

0x7843,	// (0x00041a2f) main_apps_wheel_pane

0x9e57,	// (0x00044043) form_midp_field_text_pane_ParamLimits

0x9fa2,	// (0x0004418e) scroll_bar_cp050_ParamLimits

0xbbdc,	// (0x00045dc8) cell_indicator_pane_ParamLimits

0xbbdc,	// (0x00045dc8) cell_indicator_pane

0xbbf3,	// (0x00045ddf) cell_indicator_pane_g1

0xbbfd,	// (0x00045de9) grid_wheel_folder_pane_ParamLimits

0xbbfd,	// (0x00045de9) grid_wheel_folder_pane

0xbc11,	// (0x00045dfd) list_wheel_apps_pane_ParamLimits

0xbc11,	// (0x00045dfd) list_wheel_apps_pane

0xbc22,	// (0x00045e0e) main_apps_wheel_pane_g1_ParamLimits

0xbc22,	// (0x00045e0e) main_apps_wheel_pane_g1

0xbc36,	// (0x00045e22) main_apps_wheel_pane_g2_ParamLimits

0xbc36,	// (0x00045e22) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x00049caf) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x00049caf) main_apps_wheel_pane_g

0xbc4e,	// (0x00045e3a) main_apps_wheel_pane_t1_ParamLimits

0xbc4e,	// (0x00045e3a) main_apps_wheel_pane_t1

0xbc71,	// (0x00045e5d) list_wheel_apps_pane_g1

0xbc79,	// (0x00045e65) list_wheel_apps_pane_g2

0xbc81,	// (0x00045e6d) list_wheel_apps_pane_g3

0xbc89,	// (0x00045e75) list_wheel_apps_pane_g4

0xbc93,	// (0x00045e7f) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x00049cb4) list_wheel_apps_pane_g

0x8ba0,	// (0x00042d8c) navi_icon_text_pane

0x962b,	// (0x00043817) aid_fill_nsta

0xbcb6,	// (0x00045ea2) navi_icon_text_pane_g1

0xbcc5,	// (0x00045eb1) navi_icon_text_pane_t1

0x8a3e,	// (0x00042c2a) list_set_graphic_pane_t1_ParamLimits

0x8a3e,	// (0x00042c2a) list_set_graphic_pane_t1

0xa6fd,	// (0x000448e9) popup_midp_note_alarm_window_t6_ParamLimits

0xa6fd,	// (0x000448e9) popup_midp_note_alarm_window_t6

0xa70f,	// (0x000448fb) popup_midp_note_alarm_window_t7_ParamLimits

0xa70f,	// (0x000448fb) popup_midp_note_alarm_window_t7

0xa721,	// (0x0004490d) popup_midp_note_alarm_window_t8_ParamLimits

0xa721,	// (0x0004490d) popup_midp_note_alarm_window_t8

0xa733,	// (0x0004491f) popup_midp_note_alarm_window_t9_ParamLimits

0xa733,	// (0x0004491f) popup_midp_note_alarm_window_t9

0xa745,	// (0x00044931) popup_midp_note_alarm_window_t10_ParamLimits

0xa745,	// (0x00044931) popup_midp_note_alarm_window_t10

0xa757,	// (0x00044943) popup_midp_note_alarm_window_t11_ParamLimits

0xa757,	// (0x00044943) popup_midp_note_alarm_window_t11

0xa769,	// (0x00044955) scroll_pane_cp17_ParamLimits

0xa769,	// (0x00044955) scroll_pane_cp17

0x6612,	// (0x000407fe) volume_small_pane_cp_g1

0x6a1d,	// (0x00040c09) volume_small_pane_cp_g2

0x6a26,	// (0x00040c12) volume_small_pane_cp_g3

0x6a2f,	// (0x00040c1b) volume_small_pane_cp_g4

0x6a38,	// (0x00040c24) volume_small_pane_cp_g5

0x6a41,	// (0x00040c2d) volume_small_pane_cp_g6

0x6a4a,	// (0x00040c36) volume_small_pane_cp_g7

0x6a53,	// (0x00040c3f) volume_small_pane_cp_g8

0x6a5c,	// (0x00040c48) volume_small_pane_cp_g9

0x6a65,	// (0x00040c51) volume_small_pane_cp_g10

0x8def,	// (0x00042fdb) midp_ticker_pane_g1_ParamLimits

0x8dfb,	// (0x00042fe7) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00049961) midp_ticker_pane_g_ParamLimits

0x8e07,	// (0x00042ff3) midp_ticker_pane_t1_ParamLimits

0x9641,	// (0x0004382d) aid_fill_nsta_2

0x9f8e,	// (0x0004417a) list_form2_midp_pane

0xb0de,	// (0x000452ca) midp_editing_number_pane_ParamLimits

0xb0ed,	// (0x000452d9) midp_ticker_pane_ParamLimits

0xbcda,	// (0x00045ec6) form2_midp_field_pane

0xbcfe,	// (0x00045eea) scroll_pane_cp51

0xbd1e,	// (0x00045f0a) form2_midp_button_pane_ParamLimits

0xbd1e,	// (0x00045f0a) form2_midp_button_pane

0xbd30,	// (0x00045f1c) form2_midp_content_pane_ParamLimits

0xbd30,	// (0x00045f1c) form2_midp_content_pane

0xbd4a,	// (0x00045f36) form2_midp_field_choice_group_pane

0xbd52,	// (0x00045f3e) form2_midp_field_pane_g1

0xbd5a,	// (0x00045f46) form2_midp_field_pane_g2

0xbd62,	// (0x00045f4e) form2_midp_field_pane_g3

0xbd6a,	// (0x00045f56) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x00049cd9) form2_midp_field_pane_g

0xbd72,	// (0x00045f5e) form2_midp_gauge_slider_pane

0xbd7a,	// (0x00045f66) form2_midp_gauge_wait_pane

0xbd82,	// (0x00045f6e) form2_midp_image_pane_ParamLimits

0xbd82,	// (0x00045f6e) form2_midp_image_pane

0xbd9d,	// (0x00045f89) form2_midp_label_pane_ParamLimits

0xbd9d,	// (0x00045f89) form2_midp_label_pane

0xbdb6,	// (0x00045fa2) form2_midp_label_pane_cp_ParamLimits

0xbdb6,	// (0x00045fa2) form2_midp_label_pane_cp

0xbdd7,	// (0x00045fc3) form2_midp_string_pane_ParamLimits

0xbdd7,	// (0x00045fc3) form2_midp_string_pane

0x570c,	// (0x0003f8f8) form2_midp_text_pane_ParamLimits

0x570c,	// (0x0003f8f8) form2_midp_text_pane

0xbde9,	// (0x00045fd5) form2_midp_time_pane

0xbdf9,	// (0x00045fe5) input_focus_pane_cp51_ParamLimits

0xbdf9,	// (0x00045fe5) input_focus_pane_cp51

0xbe11,	// (0x00045ffd) form2_midp_label_pane_t1_ParamLimits

0xbe11,	// (0x00045ffd) form2_midp_label_pane_t1

0x572b,	// (0x0003f917) form2_mdip_text_pane_t1_ParamLimits

0x572b,	// (0x0003f917) form2_mdip_text_pane_t1

0x5749,	// (0x0003f935) form2_midp_time_pane_t1

0xbe5a,	// (0x00046046) form2_midp_gauge_slider_pane_t1

0xbe6c,	// (0x00046058) form2_midp_gauge_slider_pane_t2

0xbe7e,	// (0x0004606a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x00049ce2) form2_midp_gauge_slider_pane_t

0xbe90,	// (0x0004607c) form2_midp_slider_pane

0xbe9c,	// (0x00046088) form2_midp_gauge_wait_pane_t1

0xbeaa,	// (0x00046096) form2_midp_wait_pane_ParamLimits

0xbeaa,	// (0x00046096) form2_midp_wait_pane

0x9c89,	// (0x00043e75) list_single_2graphic_pane_cp4_ParamLimits

0x9c89,	// (0x00043e75) list_single_2graphic_pane_cp4

0xbed5,	// (0x000460c1) list_single_midp_graphic_pane_cp_ParamLimits

0xbed5,	// (0x000460c1) list_single_midp_graphic_pane_cp

0x7763,	// (0x0004194f) list_highlight_pane_cp20

0xbf04,	// (0x000460f0) list_single_2graphic_pane_g1_cp4

0xbf0c,	// (0x000460f8) list_single_2graphic_pane_g2_cp4

0xbf14,	// (0x00046100) list_single_2graphic_pane_t1_cp4

0x7843,	// (0x00041a2f) list_highlight_pane_cp21

0xbf23,	// (0x0004610f) list_single_midp_graphic_pane_g4_cp

0xbf32,	// (0x0004611e) list_single_midp_graphic_pane_t1_cp

0xbf47,	// (0x00046133) form2_mdip_string_pane_t1_ParamLimits

0xbf47,	// (0x00046133) form2_mdip_string_pane_t1

0x7763,	// (0x0004194f) bg_wml_button_pane_cp2

0x7759,	// (0x00041945) form2_midp_image_pane_g1

0x5eb7,	// (0x000400a3) list_double_large_graphic_pane_g5_ParamLimits

0x5eb7,	// (0x000400a3) list_double_large_graphic_pane_g5

0x8d1c,	// (0x00042f08) midp_form_pane_ParamLimits

0x7843,	// (0x00041a2f) main_apps_wheel_pane_ParamLimits

0x9413,	// (0x000435ff) popup_preview_window_ParamLimits

0x9413,	// (0x000435ff) popup_preview_window

0x95ce,	// (0x000437ba) popup_touch_info_window_ParamLimits

0x95ce,	// (0x000437ba) popup_touch_info_window

0x95ec,	// (0x000437d8) popup_touch_menu_window_ParamLimits

0x95ec,	// (0x000437d8) popup_touch_menu_window

0x774f,	// (0x0004193b) bg_popup_sub_pane_cp6

0xc040,	// (0x0004622c) list_touch_menu_pane

0xc048,	// (0x00046234) list_single_touch_menu_pane_ParamLimits

0xc048,	// (0x00046234) list_single_touch_menu_pane

0xc05f,	// (0x0004624b) list_single_touch_menu_pane_t1

0x7843,	// (0x00041a2f) bg_popup_sub_pane_cp7_ParamLimits

0x7843,	// (0x00041a2f) bg_popup_sub_pane_cp7

0xc06d,	// (0x00046259) heading_sub_pane

0xc075,	// (0x00046261) list_touch_info_pane_ParamLimits

0xc075,	// (0x00046261) list_touch_info_pane

0xc084,	// (0x00046270) list_single_touch_info_pane_ParamLimits

0xc084,	// (0x00046270) list_single_touch_info_pane

0xc096,	// (0x00046282) list_single_touch_info_pane_t1

0xc0a4,	// (0x00046290) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x00049cf0) list_single_touch_info_pane_t

0x8d14,	// (0x00042f00) bg_popup_heading_pane_cp

0xc0b2,	// (0x0004629e) heading_sub_pane_t1

0x9bf8,	// (0x00043de4) bg_popup_preview_window_pane_cp_ParamLimits

0x9bf8,	// (0x00043de4) bg_popup_preview_window_pane_cp

0xc06d,	// (0x00046259) heading_preview_pane

0xc075,	// (0x00046261) list_preview_pane_ParamLimits

0xc075,	// (0x00046261) list_preview_pane

0xc0c0,	// (0x000462ac) popup_preview_window_g1

0xc084,	// (0x00046270) list_single_preview_pane_ParamLimits

0xc084,	// (0x00046270) list_single_preview_pane

0xc0c8,	// (0x000462b4) list_single_preview_pane_g1

0xc0d0,	// (0x000462bc) list_single_preview_pane_t1

0xc096,	// (0x00046282) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x00049cf5) list_single_preview_pane_t

0xc0de,	// (0x000462ca) bg_popup_heading_pane_cp2_ParamLimits

0xc0de,	// (0x000462ca) bg_popup_heading_pane_cp2

0xc0f4,	// (0x000462e0) heading_preview_pane_g1

0xc0fc,	// (0x000462e8) heading_preview_pane_t1_ParamLimits

0xc0fc,	// (0x000462e8) heading_preview_pane_t1

0x792f,	// (0x00041b1b) soft_indicator_pane_t1_ParamLimits

0x8022,	// (0x0004220e) scroll_pane_ParamLimits

0x8547,	// (0x00042733) scroll_sc2_left_pane

0x8550,	// (0x0004273c) scroll_sc2_right_pane

0x856f,	// (0x0004275b) scroll_bg_pane_g1_ParamLimits

0x8584,	// (0x00042770) scroll_bg_pane_g2_ParamLimits

0x859c,	// (0x00042788) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x000498f0) scroll_bg_pane_g_ParamLimits

0x856f,	// (0x0004275b) scroll_handle_pane_g1_ParamLimits

0x85be,	// (0x000427aa) scroll_handle_pane_g2_ParamLimits

0x859c,	// (0x00042788) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x000498f7) scroll_handle_pane_g_ParamLimits

0x909a,	// (0x00043286) popup_choice_list_window_ParamLimits

0x909a,	// (0x00043286) popup_choice_list_window

0x9a52,	// (0x00043c3e) choice_list_pane

0x9ad4,	// (0x00043cc0) cell_toolbar_pane_t1

0x9afc,	// (0x00043ce8) toolbar_button_pane_ParamLimits

0xac29,	// (0x00044e15) ai_gene_pane_1_t2_ParamLimits

0xac29,	// (0x00044e15) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x00049b14) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x00049b14) ai_gene_pane_1_t

0xc119,	// (0x00046305) scroll_sc2_left_pane_g1

0xc119,	// (0x00046305) scroll_sc2_right_pane_g1

0x9072,	// (0x0004325e) bg_popup_sub_pane_cp10

0xc123,	// (0x0004630f) list_choice_list_pane

0xc13a,	// (0x00046326) list_single_choice_list_pane_ParamLimits

0xc13a,	// (0x00046326) list_single_choice_list_pane

0xc14e,	// (0x0004633a) list_single_choice_list_pane_g1

0xc156,	// (0x00046342) list_single_choice_list_pane_t1_ParamLimits

0xc156,	// (0x00046342) list_single_choice_list_pane_t1

0xc16b,	// (0x00046357) choice_list_pane_g1

0xc173,	// (0x0004635f) choice_list_pane_t1

0x774f,	// (0x0004193b) input_focus_pane_cp11

0x8424,	// (0x00042610) title_pane_stacon_g2_ParamLimits

0x8424,	// (0x00042610) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x000498d6) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x000498d6) title_pane_stacon_g

0x8d14,	// (0x00042f00) cursor_press_pane

0x9142,	// (0x0004332e) popup_fep_hwr_window_ParamLimits

0x9142,	// (0x0004332e) popup_fep_hwr_window

0x91bc,	// (0x000433a8) popup_fep_vkb_window_ParamLimits

0x91bc,	// (0x000433a8) popup_fep_vkb_window

0xc181,	// (0x0004636d) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x00049d1e) fep_vkb_side_pane_g_ParamLimits

0x6a99,	// (0x00040c85) fep_hwr_candidate_pane_ParamLimits

0x6a99,	// (0x00040c85) fep_hwr_candidate_pane

0x6ac3,	// (0x00040caf) fep_hwr_side_pane_ParamLimits

0x6ac3,	// (0x00040caf) fep_hwr_side_pane

0x6ae3,	// (0x00040ccf) fep_hwr_top_pane_ParamLimits

0x6ae3,	// (0x00040ccf) fep_hwr_top_pane

0x6afb,	// (0x00040ce7) fep_hwr_write_pane_ParamLimits

0x6afb,	// (0x00040ce7) fep_hwr_write_pane

0xfb32,	// (0x00049d1e) fep_vkb_side_pane_g

0xc189,	// (0x00046375) fep_hwr_top_pane_g1

0xc19b,	// (0x00046387) fep_hwr_top_pane_g2

0x6b27,	// (0x00040d13) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x00049cfa) fep_hwr_top_pane_g

0x6b3c,	// (0x00040d28) fep_hwr_top_text_pane

0x8715,	// (0x00042901) fep_hwr_top_text_pane_g1

0xc1d1,	// (0x000463bd) fep_hwr_top_text_pane_t1

0x6c32,	// (0x00040e1e) fep_hwr_candidate_pane_g1

0xc424,	// (0x00046610) fep_vkb_keypad_pane_g3_ParamLimits

0xc424,	// (0x00046610) fep_vkb_keypad_pane_g3

0xc44c,	// (0x00046638) fep_vkb_keypad_pane_g4_ParamLimits

0xc44c,	// (0x00046638) fep_vkb_keypad_pane_g4

0xc4bb,	// (0x000466a7) fep_vkb_bottom_pane_g2_ParamLimits

0xc4bb,	// (0x000466a7) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x00049d25) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x00049d25) fep_vkb_bottom_pane_g

0xc119,	// (0x00046305) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x00049d2f) cell_vkb_side_pane_g

0xc546,	// (0x00046732) cell_vkb_side_pane_t1

0xc554,	// (0x00046740) cell_vkb_side_pane_t1_copy1

0xc119,	// (0x00046305) bg_fep_vkb_candidate_pane_g2

0xc680,	// (0x0004686c) cell_vkb_candidate_pane_ParamLimits

0xc1df,	// (0x000463cb) aid_size_cell_vkb_ParamLimits

0xc1df,	// (0x000463cb) aid_size_cell_vkb

0xc680,	// (0x0004686c) cell_vkb_candidate_pane

0x6c4c,	// (0x00040e38) bg_popup_fep_shadow_pane_g1

0xc26d,	// (0x00046459) fep_vkb_bottom_pane_ParamLimits

0xc26d,	// (0x00046459) fep_vkb_bottom_pane

0xc2a3,	// (0x0004648f) fep_vkb_candidate_pane_ParamLimits

0xc2a3,	// (0x0004648f) fep_vkb_candidate_pane

0xc2bf,	// (0x000464ab) fep_vkb_keypad_pane_ParamLimits

0xc2bf,	// (0x000464ab) fep_vkb_keypad_pane

0xc305,	// (0x000464f1) fep_vkb_side_pane_ParamLimits

0xc305,	// (0x000464f1) fep_vkb_side_pane

0xc341,	// (0x0004652d) fep_vkb_top_pane_ParamLimits

0xc341,	// (0x0004652d) fep_vkb_top_pane

0xc37d,	// (0x00046569) fep_vkb_top_pane_g1_ParamLimits

0xc37d,	// (0x00046569) fep_vkb_top_pane_g1

0xc38c,	// (0x00046578) fep_vkb_top_pane_g2_ParamLimits

0xc38c,	// (0x00046578) fep_vkb_top_pane_g2

0xc39b,	// (0x00046587) fep_vkb_top_pane_g3_ParamLimits

0xc39b,	// (0x00046587) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x00049d15) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x00049d15) fep_vkb_top_pane_g

0xc3b9,	// (0x000465a5) fep_vkb_top_text_pane_ParamLimits

0xc3b9,	// (0x000465a5) fep_vkb_top_text_pane

0xc3ca,	// (0x000465b6) fep_vkb_side_pane_g1_ParamLimits

0xc3ca,	// (0x000465b6) fep_vkb_side_pane_g1

0xc413,	// (0x000465ff) grid_vkb_side_pane_ParamLimits

0xc413,	// (0x000465ff) grid_vkb_side_pane

0x6c54,	// (0x00040e40) bg_popup_fep_shadow_pane_g2

0x6c5d,	// (0x00040e49) bg_popup_fep_shadow_pane_g3

0x6c65,	// (0x00040e51) bg_popup_fep_shadow_pane_g4

0x6c6e,	// (0x00040e5a) bg_popup_fep_shadow_pane_g5

0x6c78,	// (0x00040e64) bg_popup_fep_shadow_pane_g6

0x6c80,	// (0x00040e6c) bg_popup_fep_shadow_pane_g7

0x8136,	// (0x00042322) bg_popup_fep_shadow_pane_g8

0xc46a,	// (0x00046656) grid_vkb_keypad_number_pane_ParamLimits

0xc46a,	// (0x00046656) grid_vkb_keypad_number_pane

0xc47a,	// (0x00046666) grid_vkb_keypad_pane_ParamLimits

0xc47a,	// (0x00046666) grid_vkb_keypad_pane

0xc4a0,	// (0x0004668c) fep_vkb_bottom_pane_g1_ParamLimits

0xc4a0,	// (0x0004668c) fep_vkb_bottom_pane_g1

0xc4c9,	// (0x000466b5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4c9,	// (0x000466b5) grid_vkb_keypad_bottom_left_pane

0xc4de,	// (0x000466ca) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4de,	// (0x000466ca) grid_vkb_keypad_bottom_right_pane

0xc4f3,	// (0x000466df) fep_vkb_top_text_pane_g1

0xc50e,	// (0x000466fa) fep_vkb_top_text_pane_t1

0xc523,	// (0x0004670f) cell_vkb_side_pane_ParamLimits

0xc523,	// (0x0004670f) cell_vkb_side_pane

0xc119,	// (0x00046305) cell_vkb_side_pane_g1

0xc562,	// (0x0004674e) cell_vkb_keypad_pane_ParamLimits

0xc562,	// (0x0004674e) cell_vkb_keypad_pane

0xc5d7,	// (0x000467c3) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x00049d42) bg_popup_fep_shadow_pane_g

0xc119,	// (0x00046305) cell_hwr_side_pane_g1

0xc119,	// (0x00046305) cell_hwr_side_pane_g2

0xc5e1,	// (0x000467cd) cell_vkb_keypad_pane_t1

0xc5ef,	// (0x000467db) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5ef,	// (0x000467db) cell_vkb_keypad_bottom_left_pane

0xc60c,	// (0x000467f8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc60c,	// (0x000467f8) cell_vkb_keypad_bottom_right_pane

0xc119,	// (0x00046305) cell_vkb_keypad_bottom_left_pane_g1

0xc119,	// (0x00046305) cell_vkb_keypad_bottom_right_pane_g1

0xc645,	// (0x00046831) cell_vkb_keypad_number_pane_ParamLimits

0xc645,	// (0x00046831) cell_vkb_keypad_number_pane

0xc664,	// (0x00046850) cell_vkb_keypad_number_pane_g1

0xc66e,	// (0x0004685a) cell_vkb_keypad_number_pane_g2

0xc677,	// (0x00046863) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x00049d34) cell_vkb_keypad_number_pane_g

0xc5e1,	// (0x000467cd) cell_vkb_keypad_number_pane_t1

0xc69b,	// (0x00046887) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x00049d2f) cell_hwr_side_pane_g

0xc6b4,	// (0x000468a0) cell_hwr_side_pane_t1

0x6c92,	// (0x00040e7e) cell_hwr_side_pane_t1_copy1

0xc3ab,	// (0x00046597) cell_hwr_candidate_pane_g1

0x6ca0,	// (0x00040e8c) cell_hwr_candidate_pane_t1

0xc119,	// (0x00046305) cell_vkb_candidate_pane_g2

0xc73a,	// (0x00046926) cell_vkb_candidate_pane_t1

0xca3f,	// (0x00046c2b) bg_popup_fep_shadow_pane_ParamLimits

0xca3f,	// (0x00046c2b) bg_popup_fep_shadow_pane

0x2586,	// (0x0003c772) bg_fep_hwr_top_pane_g4

0xc1ad,	// (0x00046399) bg_hwr_side_pane_g1_ParamLimits

0xc1ad,	// (0x00046399) bg_hwr_side_pane_g1

0x6b78,	// (0x00040d64) cell_hwr_side_pane_ParamLimits

0x6b78,	// (0x00040d64) cell_hwr_side_pane

0x6bb3,	// (0x00040d9f) fep_hwr_write_pane_g1_ParamLimits

0x6bb3,	// (0x00040d9f) fep_hwr_write_pane_g1

0x6bc0,	// (0x00040dac) fep_hwr_write_pane_g2_ParamLimits

0x6bc0,	// (0x00040dac) fep_hwr_write_pane_g2

0x6bcd,	// (0x00040db9) fep_hwr_write_pane_g3_ParamLimits

0x6bcd,	// (0x00040db9) fep_hwr_write_pane_g3

0x6bdb,	// (0x00040dc7) fep_hwr_write_pane_g4_ParamLimits

0x6bdb,	// (0x00040dc7) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x00049d01) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x00049d01) fep_hwr_write_pane_g

0x2586,	// (0x0003c772) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2586,	// (0x0003c772) bg_fep_hwr_candidate_pane_g2

0x6bf0,	// (0x00040ddc) cell_hwr_candidate_pane_ParamLimits

0x6bf0,	// (0x00040ddc) cell_hwr_candidate_pane

0x6c32,	// (0x00040e1e) fep_hwr_candidate_pane_g1_ParamLimits

0xc20d,	// (0x000463f9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc20d,	// (0x000463f9) bg_popup_fep_shadow_pane_cp2

0xc3ab,	// (0x00046597) fep_vkb_top_pane_g4_ParamLimits

0xc3ab,	// (0x00046597) fep_vkb_top_pane_g4

0xc3f1,	// (0x000465dd) fep_vkb_side_pane_g2_ParamLimits

0xc3f1,	// (0x000465dd) fep_vkb_side_pane_g2

0x5006,	// (0x0003f1f2) list_setting_pane_t4_ParamLimits

0x5006,	// (0x0003f1f2) list_setting_pane_t4

0x50a0,	// (0x0003f28c) list_setting_number_pane_t5_ParamLimits

0x50a0,	// (0x0003f28c) list_setting_number_pane_t5

0x8757,	// (0x00042943) list_double_heading_pane_cp2_ParamLimits

0x8757,	// (0x00042943) list_double_heading_pane_cp2

0x80c9,	// (0x000422b5) list_double_heading_pane_g1_cp2_ParamLimits

0x80c9,	// (0x000422b5) list_double_heading_pane_g1_cp2

0x80d5,	// (0x000422c1) list_double_heading_pane_g2_cp2_ParamLimits

0x80d5,	// (0x000422c1) list_double_heading_pane_g2_cp2

0xc748,	// (0x00046934) list_double_heading_pane_t1_cp2_ParamLimits

0xc748,	// (0x00046934) list_double_heading_pane_t1_cp2

0xc75e,	// (0x0004694a) list_double_heading_pane_t2_cp2_ParamLimits

0xc75e,	// (0x0004694a) list_double_heading_pane_t2_cp2

0x7737,	// (0x00041923) aid_value_unit2

0x5caf,	// (0x0003fe9b) popup_preview_fixed_window

0x7acc,	// (0x00041cb8) bg_popup_preview_window_pane_cp02

0xc770,	// (0x0004695c) list_preview_fixed_pane

0xc7b6,	// (0x000469a2) list_empty_pane_fp_ParamLimits

0xc7b6,	// (0x000469a2) list_empty_pane_fp

0xc7b6,	// (0x000469a2) list_single_cale_day_pane_fp_ParamLimits

0xc7b6,	// (0x000469a2) list_single_cale_day_pane_fp

0xc7b6,	// (0x000469a2) list_single_graphic_heading_pane_fp_ParamLimits

0xc7b6,	// (0x000469a2) list_single_graphic_heading_pane_fp

0xc7b6,	// (0x000469a2) list_single_graphic_pane_fp_ParamLimits

0xc7b6,	// (0x000469a2) list_single_graphic_pane_fp

0xc7b6,	// (0x000469a2) list_single_heading_pane_fp_ParamLimits

0xc7b6,	// (0x000469a2) list_single_heading_pane_fp

0xc7b6,	// (0x000469a2) list_single_pane_fp_ParamLimits

0xc7b6,	// (0x000469a2) list_single_pane_fp

0xc7cb,	// (0x000469b7) list_single_pane_fp_g1_ParamLimits

0xc7cb,	// (0x000469b7) list_single_pane_fp_g1

0x87f0,	// (0x000429dc) list_single_pane_fp_g2_ParamLimits

0x87f0,	// (0x000429dc) list_single_pane_fp_g2

0xca4d,	// (0x00046c39) list_single_pane_fp_g3_ParamLimits

0xca4d,	// (0x00046c39) list_single_pane_fp_g3

0xc7d7,	// (0x000469c3) list_single_pane_fp_g4_ParamLimits

0xc7d7,	// (0x000469c3) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x00049d63) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x00049d63) list_single_pane_fp_g

0x575c,	// (0x0003f948) list_single_pane_fp_t1_ParamLimits

0x575c,	// (0x0003f948) list_single_pane_fp_t1

0x5773,	// (0x0003f95f) list_single_graphic_pane_fp_g1_ParamLimits

0x5773,	// (0x0003f95f) list_single_graphic_pane_fp_g1

0xc7cb,	// (0x000469b7) list_single_graphic_pane_fp_g2_ParamLimits

0xc7cb,	// (0x000469b7) list_single_graphic_pane_fp_g2

0x87f0,	// (0x000429dc) list_single_graphic_pane_fp_g3_ParamLimits

0x87f0,	// (0x000429dc) list_single_graphic_pane_fp_g3

0xca4d,	// (0x00046c39) list_single_graphic_pane_fp_g4_ParamLimits

0xca4d,	// (0x00046c39) list_single_graphic_pane_fp_g4

0xc7d7,	// (0x000469c3) list_single_graphic_pane_fp_g5_ParamLimits

0xc7d7,	// (0x000469c3) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x00049d6c) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x00049d6c) list_single_graphic_pane_fp_g

0x577f,	// (0x0003f96b) list_single_graphic_pane_fp_t1_ParamLimits

0x577f,	// (0x0003f96b) list_single_graphic_pane_fp_t1

0x5773,	// (0x0003f95f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5773,	// (0x0003f95f) list_single_graphic_heading_pane_fp_g1

0xc7cb,	// (0x000469b7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc7cb,	// (0x000469b7) list_single_graphic_heading_pane_fp_g2

0x87f0,	// (0x000429dc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87f0,	// (0x000429dc) list_single_graphic_heading_pane_fp_g3

0xca4d,	// (0x00046c39) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xca4d,	// (0x00046c39) list_single_graphic_heading_pane_fp_g4

0xc7d7,	// (0x000469c3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc7d7,	// (0x000469c3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x00049d6c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x00049d6c) list_single_graphic_heading_pane_fp_g

0x5795,	// (0x0003f981) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5795,	// (0x0003f981) list_single_graphic_heading_pane_fp_t1

0x57ab,	// (0x0003f997) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57ab,	// (0x0003f997) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x00049d77) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x00049d77) list_single_graphic_heading_pane_fp_t

0x57bd,	// (0x0003f9a9) list_single_cale_day_pane_fp_g1_ParamLimits

0x57bd,	// (0x0003f9a9) list_single_cale_day_pane_fp_g1

0xc7e3,	// (0x000469cf) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7e3,	// (0x000469cf) list_single_cale_day_pane_fp_g2

0x6cbe,	// (0x00040eaa) list_single_cale_day_pane_fp_g3_ParamLimits

0x6cbe,	// (0x00040eaa) list_single_cale_day_pane_fp_g3

0x6ce6,	// (0x00040ed2) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ce6,	// (0x00040ed2) list_single_cale_day_pane_fp_g4

0x6d0a,	// (0x00040ef6) list_single_cale_day_pane_fp_g5_ParamLimits

0x6d0a,	// (0x00040ef6) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x00049d7c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x00049d7c) list_single_cale_day_pane_fp_g

0x57f5,	// (0x0003f9e1) list_single_cale_day_pane_fp_t1_ParamLimits

0x57f5,	// (0x0003f9e1) list_single_cale_day_pane_fp_t1

0x581b,	// (0x0003fa07) list_single_cale_day_pane_fp_t2_ParamLimits

0x581b,	// (0x0003fa07) list_single_cale_day_pane_fp_t2

0x5834,	// (0x0003fa20) list_single_cale_day_pane_fp_t3_ParamLimits

0x5834,	// (0x0003fa20) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x00049d87) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x00049d87) list_single_cale_day_pane_fp_t

0xc7cb,	// (0x000469b7) list_empty_pane_fp_g1_ParamLimits

0xc7cb,	// (0x000469b7) list_empty_pane_fp_g1

0x584d,	// (0x0003fa39) list_empty_pane_fp_t1

0x585b,	// (0x0003fa47) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x00049d8e) list_empty_pane_fp_t

0xc7cb,	// (0x000469b7) list_single_heading_pane_fp_g1_ParamLimits

0xc7cb,	// (0x000469b7) list_single_heading_pane_fp_g1

0x87f0,	// (0x000429dc) list_single_heading_pane_fp_g2_ParamLimits

0x87f0,	// (0x000429dc) list_single_heading_pane_fp_g2

0xca4d,	// (0x00046c39) list_single_heading_pane_fp_g3_ParamLimits

0xca4d,	// (0x00046c39) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x00049d93) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x00049d93) list_single_heading_pane_fp_g

0x5869,	// (0x0003fa55) list_single_heading_pane_fp_t1_ParamLimits

0x5869,	// (0x0003fa55) list_single_heading_pane_fp_t1

0x587b,	// (0x0003fa67) list_single_heading_pane_fp_t2_ParamLimits

0x587b,	// (0x0003fa67) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x00049d9a) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x00049d9a) list_single_heading_pane_fp_t

0x82bb,	// (0x000424a7) aid_size_cell_fast

0x7a3c,	// (0x00041c28) soft_indicator_pane_cp1_t1

0x82f8,	// (0x000424e4) cell_app_pane_cp2_ParamLimits

0x82f8,	// (0x000424e4) cell_app_pane_cp2

0x6a82,	// (0x00040c6e) fep_hwr_candidate_drop_down_list_pane

0x2594,	// (0x0003c780) fep_hwr_candidate_pane_g3_ParamLimits

0x2594,	// (0x0003c780) fep_hwr_candidate_pane_g3

0x25a1,	// (0x0003c78d) fep_hwr_candidate_pane_g4_ParamLimits

0x25a1,	// (0x0003c78d) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x00049d0e) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x00049d0e) fep_hwr_candidate_pane_g

0xc292,	// (0x0004647e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc292,	// (0x0004647e) fep_vkb_candidate_drop_down_list_pane

0xc6a3,	// (0x0004688f) fep_vkb_candidate_pane_g3

0xc6ab,	// (0x00046897) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x00049d3b) fep_vkb_candidate_pane_g

0xc3ab,	// (0x00046597) cell_hwr_candidate_pane_g1_ParamLimits

0xc6c2,	// (0x000468ae) cell_hwr_candidate_pane_g3_ParamLimits

0xc6c2,	// (0x000468ae) cell_hwr_candidate_pane_g3

0xc6e3,	// (0x000468cf) cell_hwr_candidate_pane_g4_ParamLimits

0xc6e3,	// (0x000468cf) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x00049d55) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x00049d55) cell_hwr_candidate_pane_g

0xc704,	// (0x000468f0) cell_vkb_candidate_pane_g3_ParamLimits

0xc704,	// (0x000468f0) cell_vkb_candidate_pane_g3

0xc71f,	// (0x0004690b) cell_vkb_candidate_pane_g4_ParamLimits

0xc71f,	// (0x0004690b) cell_vkb_candidate_pane_g4

0xc7ef,	// (0x000469db) cell_app_pane_cp2_g1_ParamLimits

0xc7ef,	// (0x000469db) cell_app_pane_cp2_g1

0xc80d,	// (0x000469f9) cell_app_pane_cp2_g2_ParamLimits

0xc80d,	// (0x000469f9) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x00049d9f) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x00049d9f) cell_app_pane_cp2_g

0xc819,	// (0x00046a05) cell_app_pane_cp2_t1_ParamLimits

0xc819,	// (0x00046a05) cell_app_pane_cp2_t1

0x80af,	// (0x0004229b) grid_highlight_pane_cp1_ParamLimits

0x80af,	// (0x0004229b) grid_highlight_pane_cp1

0x6d2e,	// (0x00040f1a) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d2e,	// (0x00040f1a) cell_hwr_candidate_pane_cp1

0xc3ab,	// (0x00046597) fep_hwr_candidate_drop_down_list_pane_g1

0xc82b,	// (0x00046a17) fep_hwr_candidate_drop_down_list_pane_g2

0xc838,	// (0x00046a24) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x00049da4) fep_hwr_candidate_drop_down_list_pane_g

0x6d4d,	// (0x00040f39) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d56,	// (0x00040f42) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d56,	// (0x00040f42) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d63,	// (0x00040f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d63,	// (0x00040f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d70,	// (0x00040f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d70,	// (0x00040f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc704,	// (0x000468f0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc704,	// (0x000468f0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc71f,	// (0x0004690b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc71f,	// (0x0004690b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d7d,	// (0x00040f69) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d7d,	// (0x00040f69) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d98,	// (0x00040f84) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d98,	// (0x00040f84) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6db3,	// (0x00040f9f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6db3,	// (0x00040f9f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x00049dab) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x00049dab) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc845,	// (0x00046a31) cell_vkb_candidate_pane_cp1_ParamLimits

0xc845,	// (0x00046a31) cell_vkb_candidate_pane_cp1

0xc3ab,	// (0x00046597) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3ab,	// (0x00046597) fep_vkb_candidate_drop_down_list_pane_g1

0xc82b,	// (0x00046a17) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc82b,	// (0x00046a17) fep_vkb_candidate_drop_down_list_pane_g2

0xc838,	// (0x00046a24) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc838,	// (0x00046a24) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x00049da4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x00049da4) fep_vkb_candidate_drop_down_list_pane_g

0xc865,	// (0x00046a51) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc865,	// (0x00046a51) fep_vkb_candidate_drop_down_list_scroll_pane

0xc872,	// (0x00046a5e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc872,	// (0x00046a5e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc87f,	// (0x00046a6b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc87f,	// (0x00046a6b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc88b,	// (0x00046a77) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc88b,	// (0x00046a77) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6c2,	// (0x000468ae) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6c2,	// (0x000468ae) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc6e3,	// (0x000468cf) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6e3,	// (0x000468cf) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc897,	// (0x00046a83) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc897,	// (0x00046a83) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8b8,	// (0x00046aa4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8b8,	// (0x00046aa4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8d9,	// (0x00046ac5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8d9,	// (0x00046ac5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x00049dbc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x00049dbc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x776d,	// (0x00041959) title_pane_g1_ParamLimits

0x777a,	// (0x00041966) title_pane_g2_ParamLimits

0xf56a,	// (0x00049756) title_pane_g_ParamLimits

0x8705,	// (0x000428f1) aid_call2_pane

0x870d,	// (0x000428f9) aid_call_pane

0x8715,	// (0x00042901) popup_clock_analogue_window_g1

0x8715,	// (0x00042901) popup_clock_analogue_window_g2

0x6094,	// (0x00040280) popup_clock_analogue_window_g3

0x609d,	// (0x00040289) popup_clock_analogue_window_g4

0x7759,	// (0x00041945) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00049905) popup_clock_analogue_window_g

0x60a5,	// (0x00040291) popup_clock_analogue_window_t1

0x60b3,	// (0x0004029f) clock_digital_number_pane_ParamLimits

0x60b3,	// (0x0004029f) clock_digital_number_pane

0x60bf,	// (0x000402ab) clock_digital_number_pane_cp02_ParamLimits

0x60bf,	// (0x000402ab) clock_digital_number_pane_cp02

0x60cb,	// (0x000402b7) clock_digital_number_pane_cp03_ParamLimits

0x60cb,	// (0x000402b7) clock_digital_number_pane_cp03

0x60d7,	// (0x000402c3) clock_digital_number_pane_cp04_ParamLimits

0x60d7,	// (0x000402c3) clock_digital_number_pane_cp04

0x60e3,	// (0x000402cf) clock_digital_separator_pane_ParamLimits

0x60e3,	// (0x000402cf) clock_digital_separator_pane

0x60ef,	// (0x000402db) popup_clock_digital_window_t1_ParamLimits

0x60ef,	// (0x000402db) popup_clock_digital_window_t1

0x7759,	// (0x00041945) clock_digital_number_pane_g1

0x7759,	// (0x00041945) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x00049910) clock_digital_number_pane_g

0x7759,	// (0x00041945) clock_digital_separator_pane_g1

0x7759,	// (0x00041945) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x00049910) clock_digital_separator_pane_g

0x962b,	// (0x00043817) aid_fill_nsta_ParamLimits

0x976d,	// (0x00043959) indicator_nsta_pane_ParamLimits

0x98df,	// (0x00043acb) popup_clock_analogue_window

0x98df,	// (0x00043acb) popup_clock_digital_window

0x7843,	// (0x00041a2f) grid_indicator_nsta_pane_ParamLimits

0xbaf8,	// (0x00045ce4) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x00049c8e) clock_nsta_pane_t

0x6058,	// (0x00040244) aid_size_max_handle

0x6062,	// (0x0004024e) aid_size_min_handle

0x8d14,	// (0x00042f00) editor_scroll_pane

0xc8f4,	// (0x00046ae0) ex_editor_pane

0x8229,	// (0x00042415) scroll_pane_cp13

0x804e,	// (0x0004223a) scroll_pane_cp14

0x873f,	// (0x0004292b) scroll_pane_cp36

0x876b,	// (0x00042957) list_single_graphic_hl_pane_cp2_ParamLimits

0x876b,	// (0x00042957) list_single_graphic_hl_pane_cp2

0x5545,	// (0x0003f731) list_single_graphic_hl_pane_ParamLimits

0x5545,	// (0x0003f731) list_single_graphic_hl_pane

0x5891,	// (0x0003fa7d) aid_size_min_hl_cp1

0xc8fc,	// (0x00046ae8) list_highlight_pane_cp34_ParamLimits

0xc8fc,	// (0x00046ae8) list_highlight_pane_cp34

0xc90d,	// (0x00046af9) list_single_graphic_hl_pane_g1_ParamLimits

0xc90d,	// (0x00046af9) list_single_graphic_hl_pane_g1

0x589a,	// (0x0003fa86) list_single_graphic_hl_pane_g2_ParamLimits

0x589a,	// (0x0003fa86) list_single_graphic_hl_pane_g2

0x589a,	// (0x0003fa86) list_single_graphic_hl_pane_g3_ParamLimits

0x589a,	// (0x0003fa86) list_single_graphic_hl_pane_g3

0x8c85,	// (0x00042e71) list_single_graphic_hl_pane_g4_ParamLimits

0x8c85,	// (0x00042e71) list_single_graphic_hl_pane_g4

0x6dce,	// (0x00040fba) list_single_graphic_hl_pane_g5_ParamLimits

0x6dce,	// (0x00040fba) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x00049dcd) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x00049dcd) list_single_graphic_hl_pane_g

0x58a6,	// (0x0003fa92) list_single_graphic_hl_pane_t1_ParamLimits

0x58a6,	// (0x0003fa92) list_single_graphic_hl_pane_t1

0xc91a,	// (0x00046b06) aid_size_min_hl_cp2

0xc923,	// (0x00046b0f) list_highlight_pane_cp34_cp2_ParamLimits

0xc923,	// (0x00046b0f) list_highlight_pane_cp34_cp2

0xc90d,	// (0x00046af9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc90d,	// (0x00046af9) list_single_graphic_hl_pane_g1_cp2

0xc930,	// (0x00046b1c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc930,	// (0x00046b1c) list_single_graphic_hl_pane_g2_cp2

0xc93c,	// (0x00046b28) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc93c,	// (0x00046b28) list_single_graphic_hl_pane_g3_cp2

0xa11b,	// (0x00044307) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa11b,	// (0x00044307) list_single_graphic_hl_pane_g4_cp2

0xc94a,	// (0x00046b36) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc94a,	// (0x00046b36) list_single_graphic_hl_pane_g5_cp2

0x63a1,	// (0x0004058d) control_pane_g4_ParamLimits

0x63a1,	// (0x0004058d) control_pane_g4

0x9072,	// (0x0004325e) bg_popup_sub_pane_cp10_ParamLimits

0xc123,	// (0x0004630f) list_choice_list_pane_ParamLimits

0xc132,	// (0x0004631e) scroll_pane_cp23

0x7acc,	// (0x00041cb8) bg_popup_preview_window_pane_cp02_ParamLimits

0xc770,	// (0x0004695c) list_preview_fixed_pane_ParamLimits

0xc786,	// (0x00046972) list_preview_fixed_pane_cp_ParamLimits

0xc786,	// (0x00046972) list_preview_fixed_pane_cp

0xc792,	// (0x0004697e) popup_preview_fixed_window_g1_ParamLimits

0xc792,	// (0x0004697e) popup_preview_fixed_window_g1

0xc79e,	// (0x0004698a) popup_preview_fixed_window_g2_ParamLimits

0xc79e,	// (0x0004698a) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x00049d5c) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x00049d5c) popup_preview_fixed_window_g

0x5fcc,	// (0x000401b8) aid_navi_side_left_pane_ParamLimits

0x5fe1,	// (0x000401cd) aid_navi_side_right_pane_ParamLimits

0x5ff9,	// (0x000401e5) navi_icon_pane_stacon_ParamLimits

0x600d,	// (0x000401f9) navi_navi_pane_stacon_ParamLimits

0x5ff9,	// (0x000401e5) navi_text_pane_stacon_ParamLimits

0x774f,	// (0x0004193b) main_text_info_pane

0xc974,	// (0x00046b60) listscroll_text_info_pane

0xc97c,	// (0x00046b68) list_text_info_pane_ParamLimits

0xc97c,	// (0x00046b68) list_text_info_pane

0xc98b,	// (0x00046b77) scroll_pane_cp24_ParamLimits

0xc98b,	// (0x00046b77) scroll_pane_cp24

0xc9a9,	// (0x00046b95) list_text_info_pane_t1_ParamLimits

0xc9a9,	// (0x00046b95) list_text_info_pane_t1

0x90b4,	// (0x000432a0) popup_fast_swap2_window_ParamLimits

0x90b4,	// (0x000432a0) popup_fast_swap2_window

0xc9da,	// (0x00046bc6) aid_size_cell_fast2

0x774f,	// (0x0004193b) bg_popup_window_pane_cp17

0x9fba,	// (0x000441a6) heading_pane_cp2

0x7d18,	// (0x00041f04) listscroll_fast2_pane

0xc9e4,	// (0x00046bd0) grid_fast2_pane

0xc9ee,	// (0x00046bda) listscroll_fast2_pane_g1

0xc9f6,	// (0x00046be2) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x00049dd8) listscroll_fast2_pane_g

0x8229,	// (0x00042415) scroll_pane_cp26

0xca00,	// (0x00046bec) cell_fast2_pane_ParamLimits

0xca00,	// (0x00046bec) cell_fast2_pane

0xca15,	// (0x00046c01) cell_fast2_pane_g1

0xca1e,	// (0x00046c0a) cell_fast2_pane_g2

0xca27,	// (0x00046c13) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x00049ddd) cell_fast2_pane_g

0x7e0b,	// (0x00041ff7) grid_highlight_pane_cp9

0x7e20,	// (0x0004200c) main_eswt_pane_ParamLimits

0x7e20,	// (0x0004200c) main_eswt_pane

0xc9a0,	// (0x00046b8c) list_single_text_info_pane

0xca2f,	// (0x00046c1b) eswt_ctrl_button_pane

0xca2f,	// (0x00046c1b) eswt_ctrl_canvas_pane

0xca37,	// (0x00046c23) eswt_ctrl_combo_pane

0xca2f,	// (0x00046c1b) eswt_ctrl_default_pane

0xca2f,	// (0x00046c1b) eswt_ctrl_label_pane

0xca61,	// (0x00046c4d) eswt_ctrl_wait_pane

0xca69,	// (0x00046c55) eswt_shell_pane

0x774f,	// (0x0004193b) listscroll_eswt_app_pane

0xca89,	// (0x00046c75) popup_eswt_tasktip_window_ParamLimits

0xca89,	// (0x00046c75) popup_eswt_tasktip_window

0x9bf8,	// (0x00043de4) bg_popup_window_pane_cp18

0xca9a,	// (0x00046c86) eswt_control_pane_g1_ParamLimits

0xca9a,	// (0x00046c86) eswt_control_pane_g1

0xcaa7,	// (0x00046c93) eswt_control_pane_g2_ParamLimits

0xcaa7,	// (0x00046c93) eswt_control_pane_g2

0xcab4,	// (0x00046ca0) eswt_control_pane_g3_ParamLimits

0xcab4,	// (0x00046ca0) eswt_control_pane_g3

0xcac1,	// (0x00046cad) eswt_control_pane_g4_ParamLimits

0xcac1,	// (0x00046cad) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x00049de4) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x00049de4) eswt_control_pane_g

0x80af,	// (0x0004229b) bg_button_pane_ParamLimits

0x80af,	// (0x0004229b) bg_button_pane

0x7e20,	// (0x0004200c) common_borders_pane_copy2_ParamLimits

0x7e20,	// (0x0004200c) common_borders_pane_copy2

0xcace,	// (0x00046cba) control_button_pane_g1_ParamLimits

0xcace,	// (0x00046cba) control_button_pane_g1

0xcada,	// (0x00046cc6) control_button_pane_g2_ParamLimits

0xcada,	// (0x00046cc6) control_button_pane_g2

0xcae6,	// (0x00046cd2) control_button_pane_g3_ParamLimits

0xcae6,	// (0x00046cd2) control_button_pane_g3

0x0002,

0xfc01,	// (0x00049ded) control_button_pane_g_ParamLimits

0xfc01,	// (0x00049ded) control_button_pane_g

0xcafa,	// (0x00046ce6) control_button_pane_t1

0xcb08,	// (0x00046cf4) control_button_pane_t2

0x0001,

0xfc08,	// (0x00049df4) control_button_pane_t

0x9b08,	// (0x00043cf4) bg_button_pane_g1

0x9b10,	// (0x00043cfc) bg_button_pane_g2

0x9b18,	// (0x00043d04) bg_button_pane_g3

0x9b20,	// (0x00043d0c) bg_button_pane_g4

0x9b28,	// (0x00043d14) bg_button_pane_g5

0x9b30,	// (0x00043d1c) bg_button_pane_g6

0x9b38,	// (0x00043d24) bg_button_pane_g7

0x9b40,	// (0x00043d2c) bg_button_pane_g8

0x9b48,	// (0x00043d34) bg_button_pane_g9

0x0008,

0xf87c,	// (0x00049a68) bg_button_pane_g

0xc0de,	// (0x000462ca) common_borders_pane_ParamLimits

0xc0de,	// (0x000462ca) common_borders_pane

0xca9a,	// (0x00046c86) eswt_control_pane_g1_copy1_ParamLimits

0xca9a,	// (0x00046c86) eswt_control_pane_g1_copy1

0xcaa7,	// (0x00046c93) eswt_control_pane_g2_copy1_ParamLimits

0xcaa7,	// (0x00046c93) eswt_control_pane_g2_copy1

0xcab4,	// (0x00046ca0) eswt_control_pane_g3_copy1_ParamLimits

0xcab4,	// (0x00046ca0) eswt_control_pane_g3_copy1

0xcac1,	// (0x00046cad) eswt_control_pane_g4_copy1_ParamLimits

0xcac1,	// (0x00046cad) eswt_control_pane_g4_copy1

0xc119,	// (0x00046305) bg_eswt_ctrl_canvas_pane_g1

0xc0de,	// (0x000462ca) common_borders_pane_cp2_ParamLimits

0xc0de,	// (0x000462ca) common_borders_pane_cp2

0xc0de,	// (0x000462ca) common_borders_pane_cp3_ParamLimits

0xc0de,	// (0x000462ca) common_borders_pane_cp3

0xcb16,	// (0x00046d02) separator_horizontal_pane

0xcb1e,	// (0x00046d0a) separator_vertical_pane

0xca9a,	// (0x00046c86) eswt_control_pane_g1_copy2_ParamLimits

0xca9a,	// (0x00046c86) eswt_control_pane_g1_copy2

0xcaa7,	// (0x00046c93) eswt_control_pane_g2_copy2_ParamLimits

0xcaa7,	// (0x00046c93) eswt_control_pane_g2_copy2

0xcab4,	// (0x00046ca0) eswt_control_pane_g3_copy2_ParamLimits

0xcab4,	// (0x00046ca0) eswt_control_pane_g3_copy2

0xcac1,	// (0x00046cad) eswt_control_pane_g4_copy2_ParamLimits

0xcac1,	// (0x00046cad) eswt_control_pane_g4_copy2

0x774f,	// (0x0004193b) common_borders_pane_cp4

0xcb27,	// (0x00046d13) separator_horizontal_pane_g1

0xcb30,	// (0x00046d1c) separator_horizontal_pane_g2

0xcb39,	// (0x00046d25) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x00049df9) separator_horizontal_pane_g

0xca9a,	// (0x00046c86) eswt_control_pane_g1_copy3_ParamLimits

0xca9a,	// (0x00046c86) eswt_control_pane_g1_copy3

0xcaa7,	// (0x00046c93) eswt_control_pane_g2_copy3_ParamLimits

0xcaa7,	// (0x00046c93) eswt_control_pane_g2_copy3

0xcab4,	// (0x00046ca0) eswt_control_pane_g3_copy3_ParamLimits

0xcab4,	// (0x00046ca0) eswt_control_pane_g3_copy3

0xcac1,	// (0x00046cad) eswt_control_pane_g4_copy3_ParamLimits

0xcac1,	// (0x00046cad) eswt_control_pane_g4_copy3

0x774f,	// (0x0004193b) common_borders_pane_cp5

0xcb42,	// (0x00046d2e) separator_vertical_pane_g1

0xcb4b,	// (0x00046d37) separator_vertical_pane_g2

0xcb54,	// (0x00046d40) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x00049e00) separator_vertical_pane_g

0xca9a,	// (0x00046c86) eswt_control_pane_g1_copy4_ParamLimits

0xca9a,	// (0x00046c86) eswt_control_pane_g1_copy4

0xcaa7,	// (0x00046c93) eswt_control_pane_g2_copy4_ParamLimits

0xcaa7,	// (0x00046c93) eswt_control_pane_g2_copy4

0xcab4,	// (0x00046ca0) eswt_control_pane_g3_copy4_ParamLimits

0xcab4,	// (0x00046ca0) eswt_control_pane_g3_copy4

0xcac1,	// (0x00046cad) eswt_control_pane_g4_copy4_ParamLimits

0xcac1,	// (0x00046cad) eswt_control_pane_g4_copy4

0xcb5d,	// (0x00046d49) eswt_ctrl_combo_button_pane

0xcb65,	// (0x00046d51) eswt_ctrl_input_pane

0xcb6d,	// (0x00046d59) popup_choice_list_window_cp70

0xcb75,	// (0x00046d61) eswt_ctrl_input_pane_t1

0x774f,	// (0x0004193b) input_focus_pane_cp70

0xc0de,	// (0x000462ca) bg_button_pane_cp70_ParamLimits

0xc0de,	// (0x000462ca) bg_button_pane_cp70

0xcb83,	// (0x00046d6f) eswt_ctrl_combo_button_pane_g1

0xcb8b,	// (0x00046d77) wait_bar_pane_cp70

0x9bf8,	// (0x00043de4) bg_popup_window_pane_cp70_ParamLimits

0x9bf8,	// (0x00043de4) bg_popup_window_pane_cp70

0xcb93,	// (0x00046d7f) popup_eswt_tasktip_window_t1

0xcba9,	// (0x00046d95) wait_bar_pane_cp71_ParamLimits

0xcba9,	// (0x00046d95) wait_bar_pane_cp71

0xcbb5,	// (0x00046da1) grid_eswt_app_pane

0x8550,	// (0x0004273c) scroll_pane_cp70

0xcbbe,	// (0x00046daa) cell_eswt_app_pane_ParamLimits

0xcbbe,	// (0x00046daa) cell_eswt_app_pane

0xcbee,	// (0x00046dda) cell_eswt_app_pane_g1_ParamLimits

0xcbee,	// (0x00046dda) cell_eswt_app_pane_g1

0xcc1d,	// (0x00046e09) cell_eswt_app_pane_g2_ParamLimits

0xcc1d,	// (0x00046e09) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x00049e07) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x00049e07) cell_eswt_app_pane_g

0xcc46,	// (0x00046e32) cell_eswt_app_pane_t1_ParamLimits

0xcc46,	// (0x00046e32) cell_eswt_app_pane_t1

0xcc78,	// (0x00046e64) grid_highlight_pane_cp70_ParamLimits

0xcc78,	// (0x00046e64) grid_highlight_pane_cp70

0x8812,	// (0x000429fe) set_content_pane_g1

0x8fc0,	// (0x000431ac) status_small_volume_pane

0x6de2,	// (0x00040fce) status_small_volume_pane_g1

0x6dea,	// (0x00040fd6) volume_small2_pane

0x6df3,	// (0x00040fdf) volume_small2_pane_g1

0x6dfc,	// (0x00040fe8) volume_small2_pane_g2

0x6e05,	// (0x00040ff1) volume_small2_pane_g3

0x6e0e,	// (0x00040ffa) volume_small2_pane_g4

0x6e17,	// (0x00041003) volume_small2_pane_g5

0x6e20,	// (0x0004100c) volume_small2_pane_g6

0x6e29,	// (0x00041015) volume_small2_pane_g7

0x6e32,	// (0x0004101e) volume_small2_pane_g8

0x6e3b,	// (0x00041027) volume_small2_pane_g9

0x6e44,	// (0x00041030) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x00049e0c) volume_small2_pane_g

0xc4f3,	// (0x000466df) fep_vkb_top_text_pane_g1_ParamLimits

0xc50e,	// (0x000466fa) fep_vkb_top_text_pane_t1_ParamLimits

0xc7aa,	// (0x00046996) popup_preview_fixed_window_g3_ParamLimits

0xc7aa,	// (0x00046996) popup_preview_fixed_window_g3

0x9561,	// (0x0004374d) popup_toolbar_trans_pane

0xaf46,	// (0x00045132) aid_height_set_list_ParamLimits

0xaf57,	// (0x00045143) aid_size_parent_ParamLimits

0x9072,	// (0x0004325e) list_highlight_pane_cp2_ParamLimits

0x8812,	// (0x000429fe) set_content_pane_g1_ParamLimits

0x68ab,	// (0x00040a97) list_single_image_pane_ParamLimits

0x68ab,	// (0x00040a97) list_single_image_pane

0xcc84,	// (0x00046e70) aid_size_cell_image_ParamLimits

0xcc84,	// (0x00046e70) aid_size_cell_image

0xcc91,	// (0x00046e7d) grid_single_image_pane_ParamLimits

0xcc91,	// (0x00046e7d) grid_single_image_pane

0x87f0,	// (0x000429dc) list_single_image_pane_g1_ParamLimits

0x87f0,	// (0x000429dc) list_single_image_pane_g1

0xca4d,	// (0x00046c39) list_single_image_pane_g2_ParamLimits

0xca4d,	// (0x00046c39) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x00049e21) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x00049e21) list_single_image_pane_g

0x87fc,	// (0x000429e8) list_single_image_pane_t1_ParamLimits

0x87fc,	// (0x000429e8) list_single_image_pane_t1

0xcc9f,	// (0x00046e8b) cell_image_list_pane_ParamLimits

0xcc9f,	// (0x00046e8b) cell_image_list_pane

0xccb2,	// (0x00046e9e) cell_image_list_pane_g1

0xccbb,	// (0x00046ea7) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x00049e26) cell_image_list_pane_g

0xccc4,	// (0x00046eb0) aid_size_cell_tb_trans_pane

0x80af,	// (0x0004229b) bg_tb_trans_pane

0xccd6,	// (0x00046ec2) grid_tb_trans_pane

0x9b08,	// (0x00043cf4) bg_tb_trans_pane_g1

0x9b10,	// (0x00043cfc) bg_tb_trans_pane_g2

0x9b18,	// (0x00043d04) bg_tb_trans_pane_g3

0x9b20,	// (0x00043d0c) bg_tb_trans_pane_g4

0x9b28,	// (0x00043d14) bg_tb_trans_pane_g5

0x9b40,	// (0x00043d2c) bg_tb_trans_pane_g6

0x9b48,	// (0x00043d34) bg_tb_trans_pane_g7

0x9b30,	// (0x00043d1c) bg_tb_trans_pane_g8

0x9b38,	// (0x00043d24) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x00049e2b) bg_tb_trans_pane_g

0xccea,	// (0x00046ed6) cell_toolbar_trans_pane_ParamLimits

0xccea,	// (0x00046ed6) cell_toolbar_trans_pane

0xc119,	// (0x00046305) cell_toolbar_trans_pane_g1

0xbce2,	// (0x00045ece) list_form2_midp_pane_t1

0xbcf0,	// (0x00045edc) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x00049cd4) list_form2_midp_pane_t

0xbcfe,	// (0x00045eea) scroll_pane_cp51_ParamLimits

0xbeba,	// (0x000460a6) form2_midp_wait_pane_g1

0xbec3,	// (0x000460af) form2_midp_wait_pane_g2

0xbecc,	// (0x000460b8) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x00049ce9) form2_midp_wait_pane_g

0x7843,	// (0x00041a2f) list_highlight_pane_cp21_ParamLimits

0xbf23,	// (0x0004610f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf32,	// (0x0004611e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x684f,	// (0x00040a3b) list_single_2graphic_im_pane_ParamLimits

0x684f,	// (0x00040a3b) list_single_2graphic_im_pane

0xcd10,	// (0x00046efc) list_single_2graphic_im_pane_g1_ParamLimits

0xcd10,	// (0x00046efc) list_single_2graphic_im_pane_g1

0xcd21,	// (0x00046f0d) list_single_2graphic_im_pane_g2_ParamLimits

0xcd21,	// (0x00046f0d) list_single_2graphic_im_pane_g2

0xcd2d,	// (0x00046f19) list_single_2graphic_im_pane_g3_ParamLimits

0xcd2d,	// (0x00046f19) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x00049e3e) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x00049e3e) list_single_2graphic_im_pane_g

0xcd4d,	// (0x00046f39) list_single_2graphic_im_pane_t1_ParamLimits

0xcd4d,	// (0x00046f39) list_single_2graphic_im_pane_t1

0xc7b6,	// (0x000469a2) list_single_graphic_2heading_pane_fp_ParamLimits

0xc7b6,	// (0x000469a2) list_single_graphic_2heading_pane_fp

0x5773,	// (0x0003f95f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5773,	// (0x0003f95f) list_single_graphic_2heading_pane_fp_g1

0xc7cb,	// (0x000469b7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc7cb,	// (0x000469b7) list_single_graphic_2heading_pane_fp_g2

0x87f0,	// (0x000429dc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87f0,	// (0x000429dc) list_single_graphic_2heading_pane_fp_g3

0xca4d,	// (0x00046c39) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xca4d,	// (0x00046c39) list_single_graphic_2heading_pane_fp_g4

0xc7d7,	// (0x000469c3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc7d7,	// (0x000469c3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x00049d6c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x00049d6c) list_single_graphic_2heading_pane_fp_g

0x58bc,	// (0x0003faa8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x58bc,	// (0x0003faa8) list_single_graphic_2heading_pane_fp_t1

0x57ab,	// (0x0003f997) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57ab,	// (0x0003f997) list_single_graphic_2heading_pane_fp_t2

0x58d2,	// (0x0003fabe) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x58d2,	// (0x0003fabe) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x00049e47) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x00049e47) list_single_graphic_2heading_pane_fp_t

0xc1b9,	// (0x000463a5) fep_hwr_write_pane_g5_ParamLimits

0xc1b9,	// (0x000463a5) fep_hwr_write_pane_g5

0xc1c5,	// (0x000463b1) fep_hwr_write_pane_g6_ParamLimits

0xc1c5,	// (0x000463b1) fep_hwr_write_pane_g6

0xca69,	// (0x00046c55) eswt_shell_pane_ParamLimits

0x9bf8,	// (0x00043de4) bg_popup_window_pane_cp18_ParamLimits

0xae9f,	// (0x0004508b) heading_pane_cp70

0xcb93,	// (0x00046d7f) popup_eswt_tasktip_window_t1_ParamLimits

0x9680,	// (0x0004386c) aid_touch_tab_arrow_left

0x968c,	// (0x00043878) aid_touch_tab_arrow_right

0x778b,	// (0x00041977) title_pane_g3_ParamLimits

0x778b,	// (0x00041977) title_pane_g3

0x806e,	// (0x0004225a) set_value_pane_g1

0x9561,	// (0x0004374d) popup_toolbar_trans_pane_ParamLimits

0xccc4,	// (0x00046eb0) aid_size_cell_tb_trans_pane_ParamLimits

0x80af,	// (0x0004229b) bg_tb_trans_pane_ParamLimits

0xccd6,	// (0x00046ec2) grid_tb_trans_pane_ParamLimits

0x7acc,	// (0x00041cb8) cont_note_pane_ParamLimits

0x7acc,	// (0x00041cb8) cont_note_pane

0x7e20,	// (0x0004200c) cont_snote2_single_text_pane_ParamLimits

0x7e20,	// (0x0004200c) cont_snote2_single_text_pane

0x7e20,	// (0x0004200c) cont_snote2_single_graphic_pane_ParamLimits

0x7e20,	// (0x0004200c) cont_snote2_single_graphic_pane

0xa1e1,	// (0x000443cd) cont_note_wait_pane_ParamLimits

0xa1e1,	// (0x000443cd) cont_note_wait_pane

0xa1e1,	// (0x000443cd) cont_note_image_pane_ParamLimits

0xa1e1,	// (0x000443cd) cont_note_image_pane

0xcd7e,	// (0x00046f6a) popup_note2_window_g1_ParamLimits

0xcd7e,	// (0x00046f6a) popup_note2_window_g1

0xcdaf,	// (0x00046f9b) popup_note2_window_t1_ParamLimits

0xcdaf,	// (0x00046f9b) popup_note2_window_t1

0xcdf4,	// (0x00046fe0) popup_note2_window_t2_ParamLimits

0xcdf4,	// (0x00046fe0) popup_note2_window_t2

0xce39,	// (0x00047025) popup_note2_window_t3_ParamLimits

0xce39,	// (0x00047025) popup_note2_window_t3

0xce7e,	// (0x0004706a) popup_note2_window_t4_ParamLimits

0xce7e,	// (0x0004706a) popup_note2_window_t4

0x7b50,	// (0x00041d3c) popup_note2_window_t5_ParamLimits

0x7b50,	// (0x00041d3c) popup_note2_window_t5

0x0004,

0xfc67,	// (0x00049e53) popup_note2_window_t_ParamLimits

0xfc67,	// (0x00049e53) popup_note2_window_t

0xcead,	// (0x00047099) popup_note2_image_window_g1_ParamLimits

0xcead,	// (0x00047099) popup_note2_image_window_g1

0xceb9,	// (0x000470a5) popup_note2_image_window_g2_ParamLimits

0xceb9,	// (0x000470a5) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x00049e5e) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x00049e5e) popup_note2_image_window_g

0xcecb,	// (0x000470b7) popup_note2_image_window_t1_ParamLimits

0xcecb,	// (0x000470b7) popup_note2_image_window_t1

0xcee3,	// (0x000470cf) popup_note2_image_window_t2_ParamLimits

0xcee3,	// (0x000470cf) popup_note2_image_window_t2

0xcefb,	// (0x000470e7) popup_note2_image_window_t3_ParamLimits

0xcefb,	// (0x000470e7) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x00049e63) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x00049e63) popup_note2_image_window_t

0xa1ef,	// (0x000443db) popup_note2_wait_window_g1_ParamLimits

0xa1ef,	// (0x000443db) popup_note2_wait_window_g1

0xcf17,	// (0x00047103) popup_note2_wait_window_g2_ParamLimits

0xcf17,	// (0x00047103) popup_note2_wait_window_g2

0xa207,	// (0x000443f3) popup_note2_wait_window_g3_ParamLimits

0xa207,	// (0x000443f3) popup_note2_wait_window_g3

0x0002,

0xfc7e,	// (0x00049e6a) popup_note2_wait_window_g_ParamLimits

0xfc7e,	// (0x00049e6a) popup_note2_wait_window_g

0xcf23,	// (0x0004710f) popup_note2_wait_window_t1_ParamLimits

0xcf23,	// (0x0004710f) popup_note2_wait_window_t1

0xcf41,	// (0x0004712d) popup_note2_wait_window_t2_ParamLimits

0xcf41,	// (0x0004712d) popup_note2_wait_window_t2

0xcf5f,	// (0x0004714b) popup_note2_wait_window_t3_ParamLimits

0xcf5f,	// (0x0004714b) popup_note2_wait_window_t3

0xcf71,	// (0x0004715d) popup_note2_wait_window_t4_ParamLimits

0xcf71,	// (0x0004715d) popup_note2_wait_window_t4

0x0003,

0xfc85,	// (0x00049e71) popup_note2_wait_window_t_ParamLimits

0xfc85,	// (0x00049e71) popup_note2_wait_window_t

0xcf83,	// (0x0004716f) wait_bar2_pane_ParamLimits

0xcf83,	// (0x0004716f) wait_bar2_pane

0xcf9b,	// (0x00047187) popup_snote2_single_text_window_g1_ParamLimits

0xcf9b,	// (0x00047187) popup_snote2_single_text_window_g1

0xcfc3,	// (0x000471af) popup_snote2_single_text_window_t1_ParamLimits

0xcfc3,	// (0x000471af) popup_snote2_single_text_window_t1

0xd00f,	// (0x000471fb) popup_snote2_single_text_window_t2_ParamLimits

0xd00f,	// (0x000471fb) popup_snote2_single_text_window_t2

0xd05b,	// (0x00047247) popup_snote2_single_text_window_t3_ParamLimits

0xd05b,	// (0x00047247) popup_snote2_single_text_window_t3

0xd09c,	// (0x00047288) popup_snote2_single_text_window_t4_ParamLimits

0xd09c,	// (0x00047288) popup_snote2_single_text_window_t4

0xd0d2,	// (0x000472be) popup_snote2_single_text_window_t5_ParamLimits

0xd0d2,	// (0x000472be) popup_snote2_single_text_window_t5

0x0004,

0xfc8e,	// (0x00049e7a) popup_snote2_single_text_window_t_ParamLimits

0xfc8e,	// (0x00049e7a) popup_snote2_single_text_window_t

0xd0fd,	// (0x000472e9) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0fd,	// (0x000472e9) popup_snote2_single_graphic_window_g1

0xd125,	// (0x00047311) popup_snote2_single_graphic_window_g2_ParamLimits

0xd125,	// (0x00047311) popup_snote2_single_graphic_window_g2

0x0001,

0xfc99,	// (0x00049e85) popup_snote2_single_graphic_window_g_ParamLimits

0xfc99,	// (0x00049e85) popup_snote2_single_graphic_window_g

0xd14d,	// (0x00047339) popup_snote2_single_graphic_window_t1_ParamLimits

0xd14d,	// (0x00047339) popup_snote2_single_graphic_window_t1

0xd199,	// (0x00047385) popup_snote2_single_graphic_window_t2_ParamLimits

0xd199,	// (0x00047385) popup_snote2_single_graphic_window_t2

0xd05b,	// (0x00047247) popup_snote2_single_graphic_window_t3_ParamLimits

0xd05b,	// (0x00047247) popup_snote2_single_graphic_window_t3

0xd09c,	// (0x00047288) popup_snote2_single_graphic_window_t4_ParamLimits

0xd09c,	// (0x00047288) popup_snote2_single_graphic_window_t4

0xd0d2,	// (0x000472be) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0d2,	// (0x000472be) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9e,	// (0x00049e8a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9e,	// (0x00049e8a) popup_snote2_single_graphic_window_t

0xbbbb,	// (0x00045da7) clock_nsta_pane_cp2_t1

0xbbbb,	// (0x00045da7) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x00049caa) clock_nsta_pane_cp2_t

0x51af,	// (0x0003f39b) form_field_data_wide_pane_g1_ParamLimits

0x80c9,	// (0x000422b5) form_field_data_wide_pane_g2_ParamLimits

0x80c9,	// (0x000422b5) form_field_data_wide_pane_g2

0x80d5,	// (0x000422c1) form_field_data_wide_pane_g3_ParamLimits

0x80d5,	// (0x000422c1) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x00049888) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x00049888) form_field_data_wide_pane_g

0xba94,	// (0x00045c80) grid_touch_3_pane_ParamLimits

0xba94,	// (0x00045c80) grid_touch_3_pane

0xd1e5,	// (0x000473d1) cell_touch_3_pane_ParamLimits

0xd1e5,	// (0x000473d1) cell_touch_3_pane

0xc119,	// (0x00046305) cell_touch_3_pane_g1

0xc119,	// (0x00046305) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x00049d2f) cell_touch_3_pane_g

0x7b82,	// (0x00041d6e) cont_query_data_pane

0x7b8a,	// (0x00041d76) cont_query_data_pane_cp1

0xd213,	// (0x000473ff) button_value_adjust_pane_cp7

0xd21b,	// (0x00047407) query_popup_pane_cp3

0x87da,	// (0x000429c6) bg_popup_sub_pane_cp22_ParamLimits

0x610e,	// (0x000402fa) navi_navi_volume_pane_cp2

0x6129,	// (0x00040315) popup_side_volume_key_window_g2

0x6138,	// (0x00040324) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0004991a) popup_side_volume_key_window_g

0x6155,	// (0x00040341) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00049921) popup_side_volume_key_window_t

0x8abf,	// (0x00042cab) popup_side_volume_key_window_ParamLimits

0x4dbc,	// (0x0003efa8) list_double_graphic_pane_g4_ParamLimits

0x4dbc,	// (0x0003efa8) list_double_graphic_pane_g4

0x688c,	// (0x00040a78) list_single_2heading_msg_pane_ParamLimits

0x688c,	// (0x00040a78) list_single_2heading_msg_pane

0x6e4d,	// (0x00041039) list_single_2heading_msg_pane_g1_ParamLimits

0x6e4d,	// (0x00041039) list_single_2heading_msg_pane_g1

0x8c4d,	// (0x00042e39) list_single_2heading_msg_pane_g2_ParamLimits

0x8c4d,	// (0x00042e39) list_single_2heading_msg_pane_g2

0x6e59,	// (0x00041045) list_single_2heading_msg_pane_g3_ParamLimits

0x6e59,	// (0x00041045) list_single_2heading_msg_pane_g3

0x6e65,	// (0x00041051) list_single_2heading_msg_pane_g4_ParamLimits

0x6e65,	// (0x00041051) list_single_2heading_msg_pane_g4

0x0003,

0xfca9,	// (0x00049e95) list_single_2heading_msg_pane_g_ParamLimits

0xfca9,	// (0x00049e95) list_single_2heading_msg_pane_g

0x58f2,	// (0x0003fade) list_single_2heading_msg_pane_t1_ParamLimits

0x58f2,	// (0x0003fade) list_single_2heading_msg_pane_t1

0x591a,	// (0x0003fb06) list_single_2heading_msg_pane_t2_ParamLimits

0x591a,	// (0x0003fb06) list_single_2heading_msg_pane_t2

0x594e,	// (0x0003fb3a) list_single_2heading_msg_pane_t3_ParamLimits

0x594e,	// (0x0003fb3a) list_single_2heading_msg_pane_t3

0x5987,	// (0x0003fb73) list_single_2heading_msg_pane_t4_ParamLimits

0x5987,	// (0x0003fb73) list_single_2heading_msg_pane_t4

0x0003,

0xfcb2,	// (0x00049e9e) list_single_2heading_msg_pane_t_ParamLimits

0xfcb2,	// (0x00049e9e) list_single_2heading_msg_pane_t

0x7797,	// (0x00041983) title_pane_g4_ParamLimits

0x7797,	// (0x00041983) title_pane_g4

0x5f1c,	// (0x00040108) title_pane_stacon_g3_ParamLimits

0x5f1c,	// (0x00040108) title_pane_stacon_g3

0xcd41,	// (0x00046f2d) list_single_2graphic_im_pane_g4_ParamLimits

0xcd41,	// (0x00046f2d) list_single_2graphic_im_pane_g4

0xac46,	// (0x00044e32) popup_side_volume_key_window_cp

0xb427,	// (0x00045613) main_idle_act2_pane_t1

0x650a,	// (0x000406f6) toolbar_button_pane_g10

0x8018,	// (0x00042204) popup_toolbar_window_cp1

0xbbac,	// (0x00045d98) clock_nsta_pane_cp_t1

0xbbac,	// (0x00045d98) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x00049ca5) clock_nsta_pane_cp_t

0x610e,	// (0x000402fa) navi_navi_volume_pane_cp2_ParamLimits

0x611d,	// (0x00040309) popup_side_volume_key_window_g1_ParamLimits

0x6129,	// (0x00040315) popup_side_volume_key_window_g2_ParamLimits

0x6138,	// (0x00040324) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0004991a) popup_side_volume_key_window_g_ParamLimits

0x6a6e,	// (0x00040c5a) fep_hwr_aid_pane

0x2586,	// (0x0003c772) bg_fep_hwr_top_pane_g4_ParamLimits

0xc189,	// (0x00046375) fep_hwr_top_pane_g1_ParamLimits

0xc19b,	// (0x00046387) fep_hwr_top_pane_g2_ParamLimits

0x6b27,	// (0x00040d13) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x00049cfa) fep_hwr_top_pane_g_ParamLimits

0x6b3c,	// (0x00040d28) fep_hwr_top_text_pane_ParamLimits

0xaa09,	// (0x00044bf5) aid_touch_tab_arrow_arrow_2

0xaa12,	// (0x00044bfe) aid_touch_tab_arrow_left_2

0x6a82,	// (0x00040c6e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6ab9,	// (0x00040ca5) fep_hwr_prediction_pane

0xc2fb,	// (0x000464e7) fep_vkb_prediction_pane

0xc3ff,	// (0x000465eb) fep_vkb_side_pane_g3_ParamLimits

0xc3ff,	// (0x000465eb) fep_vkb_side_pane_g3

0xc3ab,	// (0x00046597) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc82b,	// (0x00046a17) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc838,	// (0x00046a24) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x00049da4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd240,	// (0x0004742c) fep_hwr_prediction_pane_g1

0x6e7d,	// (0x00041069) fep_hwr_prediction_pane_g2

0x6e85,	// (0x00041071) fep_hwr_prediction_pane_g3

0x6e8d,	// (0x00041079) fep_hwr_prediction_pane_g4

0x0003,

0xfcbb,	// (0x00049ea7) fep_hwr_prediction_pane_g

0xd240,	// (0x0004742c) fep_vkb_prediction_pane_g1

0xd24a,	// (0x00047436) fep_vkb_prediction_pane_g2

0xd252,	// (0x0004743e) fep_vkb_prediction_pane_g3

0xd25a,	// (0x00047446) fep_vkb_prediction_pane_g4

0x0003,

0xfcc4,	// (0x00049eb0) fep_vkb_prediction_pane_g

0x67e6,	// (0x000409d2) slider_set_pane_g3

0x67fa,	// (0x000409e6) slider_set_pane_g4

0x6812,	// (0x000409fe) slider_set_pane_g5

0x67e6,	// (0x000409d2) slider_set_pane_g6

0x6828,	// (0x00040a14) slider_set_pane_g7

0xb0bc,	// (0x000452a8) slider_form_pane_g3

0xb0c5,	// (0x000452b1) slider_form_pane_g4

0xb0cd,	// (0x000452b9) slider_form_pane_g5

0xb0bc,	// (0x000452a8) slider_form_pane_g6

0xb0d5,	// (0x000452c1) slider_form_pane_g7

0xb6e4,	// (0x000458d0) slider_set_pane_vc_g3

0xb6ed,	// (0x000458d9) slider_set_pane_vc_g4

0xb6f6,	// (0x000458e2) slider_set_pane_vc_g5

0xb6e4,	// (0x000458d0) slider_set_pane_vc_g6

0xb6ff,	// (0x000458eb) slider_set_pane_vc_g7

0xb6e4,	// (0x000458d0) slider_form_pane_vc_g1

0xb6ed,	// (0x000458d9) slider_form_pane_vc_g2

0xb6f6,	// (0x000458e2) slider_form_pane_vc_g3

0xb6e4,	// (0x000458d0) slider_form_pane_vc_g4

0xb8b2,	// (0x00045a9e) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x00049c7e) slider_form_pane_vc_g

0x774f,	// (0x0004193b) main_idle_act3_pane

0xd262,	// (0x0004744e) ai3_links_pane

0xd26b,	// (0x00047457) popup_ai3_data_window_ParamLimits

0xd26b,	// (0x00047457) popup_ai3_data_window

0x774f,	// (0x0004193b) grid_ai3_links_pane

0xd285,	// (0x00047471) cell_ai3_links_pane_ParamLimits

0xd285,	// (0x00047471) cell_ai3_links_pane

0xd29d,	// (0x00047489) bg_popup_sub_pane_cp11

0xd2aa,	// (0x00047496) cell_ai3_links_pane_g1

0x774f,	// (0x0004193b) bg_popup_sub_pane_cp12

0xd2cf,	// (0x000474bb) heading_ai3_data_pane

0xd2d7,	// (0x000474c3) list_ai3_gene_pane

0xd2e3,	// (0x000474cf) popup_ai3_data_window_g1

0xd2eb,	// (0x000474d7) heading_ai3_data_pane_g1

0xd2f3,	// (0x000474df) heading_ai3_data_pane_t1

0xd301,	// (0x000474ed) list_double_ai3_gene_pane_ParamLimits

0xd301,	// (0x000474ed) list_double_ai3_gene_pane

0xd30e,	// (0x000474fa) list_single_ai3_gene_pane_ParamLimits

0xd30e,	// (0x000474fa) list_single_ai3_gene_pane

0xc0de,	// (0x000462ca) list_highlight_pane_cp7_ParamLimits

0xc0de,	// (0x000462ca) list_highlight_pane_cp7

0xd31b,	// (0x00047507) list_single_a13_gene_pane_t1_ParamLimits

0xd31b,	// (0x00047507) list_single_a13_gene_pane_t1

0xd332,	// (0x0004751e) list_single_ai3_gene_pane_g1

0xd33b,	// (0x00047527) list_single_ai3_gene_pane_g2

0x0001,

0xfccd,	// (0x00049eb9) list_single_ai3_gene_pane_g

0xd343,	// (0x0004752f) list_double_ai3_gene_pane_g1_ParamLimits

0xd343,	// (0x0004752f) list_double_ai3_gene_pane_g1

0xd34f,	// (0x0004753b) list_double_ai3_gene_pane_t1_ParamLimits

0xd34f,	// (0x0004753b) list_double_ai3_gene_pane_t1

0xd36b,	// (0x00047557) list_double_ai3_gene_pane_t2_ParamLimits

0xd36b,	// (0x00047557) list_double_ai3_gene_pane_t2

0xd381,	// (0x0004756d) list_double_ai3_gene_pane_t3_ParamLimits

0xd381,	// (0x0004756d) list_double_ai3_gene_pane_t3

0x0002,

0xfcd2,	// (0x00049ebe) list_double_ai3_gene_pane_t_ParamLimits

0xfcd2,	// (0x00049ebe) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x58e8,	// (0x0003fad4) aid_size_min_col_2

0xd22c,	// (0x00047418) aid_size_min_msg_ParamLimits

0xd22c,	// (0x00047418) aid_size_min_msg

0xc4ff,	// (0x000466eb) fep_vkb_top_text_pane_g2_ParamLimits

0xc4ff,	// (0x000466eb) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x00049d2a) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x00049d2a) fep_vkb_top_text_pane_g

0x774f,	// (0x0004193b) main_hc_apps_shell_pane

0xd39e,	// (0x0004758a) grid_hc_apps_pane_ParamLimits

0xd39e,	// (0x0004758a) grid_hc_apps_pane

0xd3ad,	// (0x00047599) list_hc_apps_pane

0xd3b5,	// (0x000475a1) scroll_pane_cp37_ParamLimits

0xd3b5,	// (0x000475a1) scroll_pane_cp37

0xd3c1,	// (0x000475ad) cell_hc_apps_pane_ParamLimits

0xd3c1,	// (0x000475ad) cell_hc_apps_pane

0xd46f,	// (0x0004765b) cell_hc_apps_pane_g1_ParamLimits

0xd46f,	// (0x0004765b) cell_hc_apps_pane_g1

0xd4a0,	// (0x0004768c) cell_hc_apps_pane_g2_ParamLimits

0xd4a0,	// (0x0004768c) cell_hc_apps_pane_g2

0xd4bc,	// (0x000476a8) cell_hc_apps_pane_g3_ParamLimits

0xd4bc,	// (0x000476a8) cell_hc_apps_pane_g3

0x0002,

0xfcd9,	// (0x00049ec5) cell_hc_apps_pane_g_ParamLimits

0xfcd9,	// (0x00049ec5) cell_hc_apps_pane_g

0xd4de,	// (0x000476ca) cell_hc_apps_pane_t1_ParamLimits

0xd4de,	// (0x000476ca) cell_hc_apps_pane_t1

0x7acc,	// (0x00041cb8) grid_highlight_pane_cp10_ParamLimits

0x7acc,	// (0x00041cb8) grid_highlight_pane_cp10

0xd51e,	// (0x0004770a) list_single_hc_apps_pane_ParamLimits

0xd51e,	// (0x0004770a) list_single_hc_apps_pane

0xd57a,	// (0x00047766) list_single_hc_apps_pane_g1

0x6e95,	// (0x00041081) list_single_hc_apps_pane_g2

0x0001,

0xfce0,	// (0x00049ecc) list_single_hc_apps_pane_g

0x6eae,	// (0x0004109a) list_single_hc_apps_pane_g2_copy1

0x59ac,	// (0x0003fb98) list_single_hc_apps_pane_t1

0x7843,	// (0x00041a2f) bg_set_opt_pane_cp_ParamLimits

0x5dc7,	// (0x0003ffb3) setting_slider_pane_t1_ParamLimits

0x5de0,	// (0x0003ffcc) setting_slider_pane_t2_ParamLimits

0x5dfa,	// (0x0003ffe6) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00049766) setting_slider_pane_t_ParamLimits

0x5e12,	// (0x0003fffe) slider_set_pane_ParamLimits

0x63b6,	// (0x000405a2) control_pane_g5_ParamLimits

0x63b6,	// (0x000405a2) control_pane_g5

0xaf0b,	// (0x000450f7) slider_set_pane_g1_ParamLimits

0x67da,	// (0x000409c6) slider_set_pane_g2_ParamLimits

0x67e6,	// (0x000409d2) slider_set_pane_g3_ParamLimits

0x67fa,	// (0x000409e6) slider_set_pane_g4_ParamLimits

0x6812,	// (0x000409fe) slider_set_pane_g5_ParamLimits

0x67e6,	// (0x000409d2) slider_set_pane_g6_ParamLimits

0x6828,	// (0x00040a14) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x00049b66) slider_set_pane_g_ParamLimits

0x8ba0,	// (0x00042d8c) navi_icon_text_pane_ParamLimits

0x9641,	// (0x0004382d) aid_fill_nsta_2_ParamLimits

0x9680,	// (0x0004386c) aid_touch_tab_arrow_left_ParamLimits

0x968c,	// (0x00043878) aid_touch_tab_arrow_right_ParamLimits

0x96f8,	// (0x000438e4) clock_nsta_pane_ParamLimits

0xa9e5,	// (0x00044bd1) navi_icon_pane_g1_ParamLimits

0xa9f4,	// (0x00044be0) navi_text_pane_t1_ParamLimits

0xbcb6,	// (0x00045ea2) navi_icon_text_pane_g1_ParamLimits

0xbcc5,	// (0x00045eb1) navi_icon_text_pane_t1_ParamLimits

0xd57a,	// (0x00047766) list_single_hc_apps_pane_g1_ParamLimits

0x6e95,	// (0x00041081) list_single_hc_apps_pane_g2_ParamLimits

0xfce0,	// (0x00049ecc) list_single_hc_apps_pane_g_ParamLimits

0x6eae,	// (0x0004109a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x59ac,	// (0x0003fb98) list_single_hc_apps_pane_t1_ParamLimits

0x5cdb,	// (0x0003fec7) popup_toolbar2_fixed_window_ParamLimits

0x5cdb,	// (0x0003fec7) popup_toolbar2_fixed_window

0x9557,	// (0x00043743) popup_toolbar2_float_window

0x774f,	// (0x0004193b) bg_popup_sub_pane_cp27

0xd593,	// (0x0004777f) grid_toolbar2_float_pane

0x774f,	// (0x0004193b) bg_popup_sub_pane_cp26

0xd593,	// (0x0004777f) grid_toolbar2_fixed_pane

0xd59b,	// (0x00047787) cell_toolbar2_fixed_pane_ParamLimits

0xd59b,	// (0x00047787) cell_toolbar2_fixed_pane

0xd5ab,	// (0x00047797) cell_toolbar2_fixed_pane_g1

0xd5b4,	// (0x000477a0) toolbar2_fixed_button_pane

0x9b08,	// (0x00043cf4) toolbar2_fixed_button_pane_g1

0x9b10,	// (0x00043cfc) toolbar2_fixed_button_pane_g2

0x9b18,	// (0x00043d04) toolbar2_fixed_button_pane_g3

0x9b20,	// (0x00043d0c) toolbar2_fixed_button_pane_g4

0x9b28,	// (0x00043d14) toolbar2_fixed_button_pane_g5

0x9b30,	// (0x00043d1c) toolbar2_fixed_button_pane_g6

0x9b38,	// (0x00043d24) toolbar2_fixed_button_pane_g7

0x9b40,	// (0x00043d2c) toolbar2_fixed_button_pane_g8

0x9b48,	// (0x00043d34) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x00049a68) toolbar2_fixed_button_pane_g

0xd5bc,	// (0x000477a8) cell_toolbar2_float_pane_ParamLimits

0xd5bc,	// (0x000477a8) cell_toolbar2_float_pane

0xd5cd,	// (0x000477b9) cell_toolbar2_float_pane_g1

0xd5b4,	// (0x000477a0) toolbar2_fixed_button_pane_cp

0xc25b,	// (0x00046447) fep_vkb_accented_list_pane_ParamLimits

0xc25b,	// (0x00046447) fep_vkb_accented_list_pane

0x6c8a,	// (0x00040e76) bg_popup_fep_shadow_pane_g9

0x8d14,	// (0x00042f00) bg_popup_fep_shadow_pane_cp3

0x8210,	// (0x000423fc) list_accented_list_pane

0xd5d6,	// (0x000477c2) list_single_accented_list_pane_ParamLimits

0xd5d6,	// (0x000477c2) list_single_accented_list_pane

0x8d14,	// (0x00042f00) list_highlight_pane_cp10

0xd5e7,	// (0x000477d3) list_single_accented_list_pane_t1

0x94a7,	// (0x00043693) popup_slider_window_ParamLimits

0x94a7,	// (0x00043693) popup_slider_window

0xd223,	// (0x0004740f) aid_indentation_list_msg

0xd6a1,	// (0x0004788d) bg_popup_window_pane_cp19

0xd70b,	// (0x000478f7) popup_slider_window_g1

0xd727,	// (0x00047913) popup_slider_window_g2

0xd743,	// (0x0004792f) popup_slider_window_g3

0x0005,

0xfce5,	// (0x00049ed1) popup_slider_window_g

0xd79f,	// (0x0004798b) popup_slider_window_t1

0xd813,	// (0x000479ff) small_volume_slider_vertical_pane

0xc119,	// (0x00046305) small_volume_slider_vertical_pane_g1

0xc119,	// (0x00046305) small_volume_slider_vertical_pane_g2

0xd82f,	// (0x00047a1b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf7,	// (0x00049ee3) small_volume_slider_vertical_pane_g

0x5a9d,	// (0x0003fc89) area_side_right_pane_ParamLimits

0x5a9d,	// (0x0003fc89) area_side_right_pane

0x6eca,	// (0x000410b6) aid_size_side_button_ParamLimits

0x6eca,	// (0x000410b6) aid_size_side_button

0x6ede,	// (0x000410ca) grid_sctrl_middle_pane_ParamLimits

0x6ede,	// (0x000410ca) grid_sctrl_middle_pane

0x6efe,	// (0x000410ea) sctrl_sk_bottom_pane

0x6f0f,	// (0x000410fb) sctrl_sk_top_pane

0x6f21,	// (0x0004110d) aid_touch_sctrl_top

0x7acc,	// (0x00041cb8) bg_sctrl_sk_pane_ParamLimits

0x7acc,	// (0x00041cb8) bg_sctrl_sk_pane

0x6f2e,	// (0x0004111a) sctrl_sk_top_pane_g1

0x6f3b,	// (0x00041127) sctrl_sk_top_pane_t1

0x6f21,	// (0x0004110d) aid_touch_sctrl_bottom

0x7acc,	// (0x00041cb8) bg_sctrl_sk_pane_cp_ParamLimits

0x7acc,	// (0x00041cb8) bg_sctrl_sk_pane_cp

0x6f56,	// (0x00041142) sctrl_sk_bottom_pane_g1

0x6f3b,	// (0x00041127) sctrl_sk_bottom_pane_t1

0x6f5f,	// (0x0004114b) cell_sctrl_middle_pane_ParamLimits

0x6f5f,	// (0x0004114b) cell_sctrl_middle_pane

0x6f7a,	// (0x00041166) aid_touch_sctrl_middle_ParamLimits

0x6f7a,	// (0x00041166) aid_touch_sctrl_middle

0x80af,	// (0x0004229b) bg_sctrl_middle_pane_ParamLimits

0x80af,	// (0x0004229b) bg_sctrl_middle_pane

0xc3ab,	// (0x00046597) cell_sctrl_middle_pane_g1_ParamLimits

0xc3ab,	// (0x00046597) cell_sctrl_middle_pane_g1

0x6f8c,	// (0x00041178) cell_sctrl_middle_pane_g2_ParamLimits

0x6f8c,	// (0x00041178) cell_sctrl_middle_pane_g2

0x0001,

0xfd03,	// (0x00049eef) cell_sctrl_middle_pane_g_ParamLimits

0xfd03,	// (0x00049eef) cell_sctrl_middle_pane_g

0x9b08,	// (0x00043cf4) bg_sctrl_middle_pane_g1

0x9b10,	// (0x00043cfc) bg_sctrl_middle_pane_g2

0x9b18,	// (0x00043d04) bg_sctrl_middle_pane_g3

0x9b20,	// (0x00043d0c) bg_sctrl_middle_pane_g4

0x9b28,	// (0x00043d14) bg_sctrl_middle_pane_g5

0x9b30,	// (0x00043d1c) bg_sctrl_middle_pane_g6

0x9b38,	// (0x00043d24) bg_sctrl_middle_pane_g7

0x9b40,	// (0x00043d2c) bg_sctrl_middle_pane_g8

0x0007,

0xfd08,	// (0x00049ef4) bg_sctrl_middle_pane_g

0x9b48,	// (0x00043d34) bg_sctrl_middle_pane_g8_copy1

0x9b08,	// (0x00043cf4) bg_sctrl_sk_pane_g1

0x9b10,	// (0x00043cfc) bg_sctrl_sk_pane_g2

0x9b18,	// (0x00043d04) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x00049a68) bg_sctrl_sk_pane_g

0x7fde,	// (0x000421ca) aid_size_touch_scroll_bar

0x9b20,	// (0x00043d0c) bg_sctrl_sk_pane_g4

0x9b28,	// (0x00043d14) bg_sctrl_sk_pane_g5

0x9b30,	// (0x00043d1c) bg_sctrl_sk_pane_g6

0x9b38,	// (0x00043d24) bg_sctrl_sk_pane_g7

0x9b40,	// (0x00043d2c) bg_sctrl_sk_pane_g8

0x9b48,	// (0x00043d34) bg_sctrl_sk_pane_g9

0x9112,	// (0x000432fe) popup_fep_china_hwr2_fs_candidate_window

0x911c,	// (0x00043308) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x911c,	// (0x00043308) popup_fep_china_hwr2_fs_control_window

0xc3ab,	// (0x00046597) sctrl_sk_top_pane_g2

0x0001,

0xfcfe,	// (0x00049eea) sctrl_sk_top_pane_g

0xd838,	// (0x00047a24) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd838,	// (0x00047a24) aid_fep_china_hwr2_fs_cell

0xd84a,	// (0x00047a36) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd84a,	// (0x00047a36) bg_popup_fep_shadow_pane_cp4

0xd861,	// (0x00047a4d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd861,	// (0x00047a4d) bg_popup_fep_shadow_pane_cp5

0xd873,	// (0x00047a5f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd873,	// (0x00047a5f) popup_fep_china_hwr2_fs_control_bar_grid

0xd883,	// (0x00047a6f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd88b,	// (0x00047a77) aid_fep_china_hwr2_fs_candi_cell

0x774f,	// (0x0004193b) bg_popup_fep_shadow_pane_cp6

0xd895,	// (0x00047a81) popup_fep_china_hwr2_fs_candidate_grid

0xd89f,	// (0x00047a8b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd89f,	// (0x00047a8b) cell_fep_china_hwr2_fs_funtion_grid

0xc119,	// (0x00046305) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8b7,	// (0x00047aa3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8b7,	// (0x00047aa3) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8c5,	// (0x00047ab1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8c5,	// (0x00047ab1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd19,	// (0x00049f05) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd19,	// (0x00049f05) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8db,	// (0x00047ac7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8db,	// (0x00047ac7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8f0,	// (0x00047adc) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8f0,	// (0x00047adc) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1e,	// (0x00049f0a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1e,	// (0x00049f0a) cell_fep_china_hwr2_fs_funtion_grid_t

0xd90c,	// (0x00047af8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd914,	// (0x00047b00) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd91c,	// (0x00047b08) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd23,	// (0x00049f0f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd924,	// (0x00047b10) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd924,	// (0x00047b10) cell_fep_china_hwr2_fs_candidate_grid

0xd93d,	// (0x00047b29) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd945,	// (0x00047b31) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc119,	// (0x00046305) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc119,	// (0x00046305) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x00049d2f) cell_fep_china_hwr2_fs_candidate_grid_g

0xd94d,	// (0x00047b39) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9705,	// (0x000438f1) clock_nsta_pane_cp_24_ParamLimits

0x9705,	// (0x000438f1) clock_nsta_pane_cp_24

0x9783,	// (0x0004396f) indicator_nsta_pane_cp_24_ParamLimits

0x9783,	// (0x0004396f) indicator_nsta_pane_cp_24

0xa861,	// (0x00044a4d) heading_pane_g1

0x0001,

0xf8e1,	// (0x00049acd) heading_pane_g

0xb270,	// (0x0004545c) grid_sct_catagory_button_pane

0xb2a0,	// (0x0004548c) scroll_pane_cp5_ParamLimits

0xbd0a,	// (0x00045ef6) button_value_adjust_pane_cp5_ParamLimits

0xbd0a,	// (0x00045ef6) button_value_adjust_pane_cp5

0xbde9,	// (0x00045fd5) form2_midp_time_pane_ParamLimits

0xd95b,	// (0x00047b47) cell_sct_catagory_button_pane_ParamLimits

0xd95b,	// (0x00047b47) cell_sct_catagory_button_pane

0xc0de,	// (0x000462ca) bg_button_pane_cp01_ParamLimits

0xc0de,	// (0x000462ca) bg_button_pane_cp01

0xc119,	// (0x00046305) cell_sct_catagory_button_pane_g1

0x94e6,	// (0x000436d2) popup_tb_extension_window

0xd96d,	// (0x00047b59) aid_size_cell_ext_ParamLimits

0xd96d,	// (0x00047b59) aid_size_cell_ext

0x7acc,	// (0x00041cb8) bg_tb_trans_pane_cp1_ParamLimits

0x7acc,	// (0x00041cb8) bg_tb_trans_pane_cp1

0xd98d,	// (0x00047b79) grid_tb_ext_pane_ParamLimits

0xd98d,	// (0x00047b79) grid_tb_ext_pane

0xd9bb,	// (0x00047ba7) cell_tb_ext_pane_ParamLimits

0xd9bb,	// (0x00047ba7) cell_tb_ext_pane

0xd9d2,	// (0x00047bbe) cell_tb_ext_pane_g1_ParamLimits

0xd9d2,	// (0x00047bbe) cell_tb_ext_pane_g1

0xd9ef,	// (0x00047bdb) cell_tb_ext_pane_t1

0x7acc,	// (0x00041cb8) list_highlight_pane_cp11_ParamLimits

0x7acc,	// (0x00041cb8) list_highlight_pane_cp11

0x5cfa,	// (0x0003fee6) popup_uni_indicator_window_ParamLimits

0x5cfa,	// (0x0003fee6) popup_uni_indicator_window

0x80af,	// (0x0004229b) bg_popup_sub_pane_cp14

0xda0a,	// (0x00047bf6) list_uniindi_pane

0xda16,	// (0x00047c02) uniindi_top_pane

0x7acc,	// (0x00041cb8) bg_uniindi_top_pane

0xda35,	// (0x00047c21) uniindi_top_pane_g1

0xda4b,	// (0x00047c37) uniindi_top_pane_g2

0x0003,

0xfd2a,	// (0x00049f16) uniindi_top_pane_g

0xda75,	// (0x00047c61) uniindi_top_pane_t1

0xda9f,	// (0x00047c8b) list_single_uniindi_pane_ParamLimits

0xda9f,	// (0x00047c8b) list_single_uniindi_pane

0xc119,	// (0x00046305) bg_uniindi_top_pane_g1

0xdab2,	// (0x00047c9e) list_single_uniindi_pane_g1

0xdac5,	// (0x00047cb1) list_single_uniindi_pane_t1

0x774f,	// (0x0004193b) control_bg_pane

0xdaea,	// (0x00047cd6) bg_sctrl_sk_pane_cp1

0xdaf3,	// (0x00047cdf) bg_sctrl_sk_pane_cp2

0xdafc,	// (0x00047ce8) control_bg_pane_g1

0xdb05,	// (0x00047cf1) control_bg_pane_g2

0x0001,

0xfd33,	// (0x00049f1f) control_bg_pane_g

0xbb3e,	// (0x00045d2a) cell_indicator_nsta_pane_g1_ParamLimits

0xbb4c,	// (0x00045d38) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x00049c93) cell_indicator_nsta_pane_g_ParamLimits

0x5749,	// (0x0003f935) form2_midp_time_pane_t1_ParamLimits

0x7e20,	// (0x0004200c) main_idle_act4_pane_ParamLimits

0x7e20,	// (0x0004200c) main_idle_act4_pane

0x94e6,	// (0x000436d2) popup_tb_extension_window_ParamLimits

0xd9ab,	// (0x00047b97) tb_ext_find_pane_ParamLimits

0xd9ab,	// (0x00047b97) tb_ext_find_pane

0xdb0e,	// (0x00047cfa) ai_gene_pane_1_cp1

0x8e59,	// (0x00043045) ai_gene_pane_2_cp1

0xdb16,	// (0x00047d02) list_single_idle_plugin_calendar_pane

0xdb1f,	// (0x00047d0b) list_single_idle_plugin_notification_pane

0xdb28,	// (0x00047d14) list_single_idle_plugin_player_pane

0xdb31,	// (0x00047d1d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb31,	// (0x00047d1d) list_single_idle_plugin_shortcut_pane

0xdb53,	// (0x00047d3f) main_idle_act4_pane_t1

0xdb65,	// (0x00047d51) main_idle_act4_pane_t2

0x0001,

0xfd38,	// (0x00049f24) main_idle_act4_pane_t

0xdb77,	// (0x00047d63) middle_sk_idle_act4_pane_ParamLimits

0xdb77,	// (0x00047d63) middle_sk_idle_act4_pane

0xdb8d,	// (0x00047d79) popup_clock_digital_analogue_window_cp2

0xdba7,	// (0x00047d93) shortcut_wheel_idle_act4_pane_ParamLimits

0xdba7,	// (0x00047d93) shortcut_wheel_idle_act4_pane

0xc119,	// (0x00046305) shortcut_wheel_idle_act4_pane_g1

0xc119,	// (0x00046305) shortcut_wheel_idle_act4_pane_g2

0xc119,	// (0x00046305) shortcut_wheel_idle_act4_pane_g3

0xc119,	// (0x00046305) shortcut_wheel_idle_act4_pane_g4

0xc119,	// (0x00046305) shortcut_wheel_idle_act4_pane_g5

0xdbbb,	// (0x00047da7) shortcut_wheel_idle_act4_pane_g6

0xdbc3,	// (0x00047daf) shortcut_wheel_idle_act4_pane_g7

0xdbcb,	// (0x00047db7) shortcut_wheel_idle_act4_pane_g8

0xdbd3,	// (0x00047dbf) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3d,	// (0x00049f29) shortcut_wheel_idle_act4_pane_g

0xc3ab,	// (0x00046597) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3ab,	// (0x00046597) middle_sk_idle_act4_pane_g1

0xdc37,	// (0x00047e23) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc37,	// (0x00047e23) middle_sk_idle_act4_pane_g2

0x0001,

0xfd60,	// (0x00049f4c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd60,	// (0x00049f4c) middle_sk_idle_act4_pane_g

0xdc43,	// (0x00047e2f) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc43,	// (0x00047e2f) middle_sk_idle_act4_pane_t1

0xdc60,	// (0x00047e4c) grid_ai_shortcut_pane_ParamLimits

0xdc60,	// (0x00047e4c) grid_ai_shortcut_pane

0xdc79,	// (0x00047e65) list_highlight_pane_cp16_ParamLimits

0xdc79,	// (0x00047e65) list_highlight_pane_cp16

0xdc86,	// (0x00047e72) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc86,	// (0x00047e72) list_single_idle_plugin_shortcut_pane_g1

0xdc92,	// (0x00047e7e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc92,	// (0x00047e7e) list_single_idle_plugin_shortcut_pane_g2

0xdcaa,	// (0x00047e96) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcaa,	// (0x00047e96) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd65,	// (0x00049f51) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd65,	// (0x00049f51) list_single_idle_plugin_shortcut_pane_g

0xdcbd,	// (0x00047ea9) cell_ai_shortcut_pane_ParamLimits

0xdcbd,	// (0x00047ea9) cell_ai_shortcut_pane

0xdce1,	// (0x00047ecd) cell_ai_shortcut_pane_g1_ParamLimits

0xdce1,	// (0x00047ecd) cell_ai_shortcut_pane_g1

0xdb0e,	// (0x00047cfa) ai_gene_pane_1_cp2

0xdd03,	// (0x00047eef) ai_gene_pane_2_cp2

0xdd0b,	// (0x00047ef7) list_highlight_pane_cp15

0xdd14,	// (0x00047f00) list_single_idle_plugin_calendar_pane_g1

0xdd0b,	// (0x00047ef7) list_highlight_pane_cp17

0xdd1c,	// (0x00047f08) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd24,	// (0x00047f10) list_single_idle_plugin_player_pane_g1

0xb4c9,	// (0x000456b5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6c,	// (0x00049f58) list_single_idle_plugin_player_pane_g

0xdd2c,	// (0x00047f18) list_single_idle_plugin_player_pane_t1

0xdd3a,	// (0x00047f26) list_single_idle_plugin_player_pane_t2

0xdd48,	// (0x00047f34) list_single_idle_plugin_player_pane_t3

0xdd56,	// (0x00047f42) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd71,	// (0x00049f5d) list_single_idle_plugin_player_pane_t

0xdd64,	// (0x00047f50) wait_bar_pane_cp15

0xdd6c,	// (0x00047f58) grid_ai_notification_pane

0xb4c9,	// (0x000456b5) list_single_idle_plugin_notification_pane_g1

0xdd75,	// (0x00047f61) cell_ai_notification_pane_ParamLimits

0xdd75,	// (0x00047f61) cell_ai_notification_pane

0xdd82,	// (0x00047f6e) cell_ai_notification_pane_g1

0xdd8a,	// (0x00047f76) cell_ai_notification_pane_t1

0xdd98,	// (0x00047f84) tb_ext_find_button_pane

0xdda0,	// (0x00047f8c) tb_ext_find_pane_g1

0xdda8,	// (0x00047f94) tb_ext_find_pane_t1

0x8715,	// (0x00042901) tb_ext_find_button_pane_g1

0xddb6,	// (0x00047fa2) tb_ext_find_button_pane_g2

0x0001,

0xfd7a,	// (0x00049f66) tb_ext_find_button_pane_g

0xdb53,	// (0x00047d3f) main_idle_act4_pane_t1_ParamLimits

0xdb65,	// (0x00047d51) main_idle_act4_pane_t2_ParamLimits

0xfd38,	// (0x00049f24) main_idle_act4_pane_t_ParamLimits

0xdb8d,	// (0x00047d79) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb9b,	// (0x00047d87) sat_plugin_idle_act4_pane_ParamLimits

0xdb9b,	// (0x00047d87) sat_plugin_idle_act4_pane

0xddbf,	// (0x00047fab) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddbf,	// (0x00047fab) sat_plugin_idle_act4_pane_t1

0xddd2,	// (0x00047fbe) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddd2,	// (0x00047fbe) sat_plugin_idle_act4_pane_t2

0xdde5,	// (0x00047fd1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdde5,	// (0x00047fd1) sat_plugin_idle_act4_pane_t3

0xddf8,	// (0x00047fe4) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddf8,	// (0x00047fe4) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7f,	// (0x00049f6b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7f,	// (0x00049f6b) sat_plugin_idle_act4_pane_t

0x5c35,	// (0x0003fe21) popup_battery_window_ParamLimits

0x5c35,	// (0x0003fe21) popup_battery_window

0x7acc,	// (0x00041cb8) bg_popup_sub_pane_cp25_ParamLimits

0x7acc,	// (0x00041cb8) bg_popup_sub_pane_cp25

0xde0b,	// (0x00047ff7) popup_battery_window_g1_ParamLimits

0xde0b,	// (0x00047ff7) popup_battery_window_g1

0xde17,	// (0x00048003) popup_battery_window_t1_ParamLimits

0xde17,	// (0x00048003) popup_battery_window_t1

0xde29,	// (0x00048015) popup_battery_window_t2_ParamLimits

0xde29,	// (0x00048015) popup_battery_window_t2

0x0001,

0xfd88,	// (0x00049f74) popup_battery_window_t_ParamLimits

0xfd88,	// (0x00049f74) popup_battery_window_t

0x8d28,	// (0x00042f14) midp_canvas_pane_ParamLimits

0x8d9d,	// (0x00042f89) midp_keypad_pane_ParamLimits

0x8d9d,	// (0x00042f89) midp_keypad_pane

0x9072,	// (0x0004325e) main_midp_pane_ParamLimits

0xbbca,	// (0x00045db6) signal_pane_g2_cp_ParamLimits

0xde46,	// (0x00048032) aid_size_cell_midp_keypad_ParamLimits

0xde46,	// (0x00048032) aid_size_cell_midp_keypad

0xde60,	// (0x0004804c) midp_keyp_game_grid_pane_ParamLimits

0xde60,	// (0x0004804c) midp_keyp_game_grid_pane

0xde80,	// (0x0004806c) midp_keyp_rocker_pane_ParamLimits

0xde80,	// (0x0004806c) midp_keyp_rocker_pane

0xdeb9,	// (0x000480a5) midp_keyp_sk_left_pane_ParamLimits

0xdeb9,	// (0x000480a5) midp_keyp_sk_left_pane

0xdf13,	// (0x000480ff) midp_keyp_sk_right_pane_ParamLimits

0xdf13,	// (0x000480ff) midp_keyp_sk_right_pane

0x774f,	// (0x0004193b) bg_button_pane_cp03

0xdf6d,	// (0x00048159) midp_keyp_sk_left_pane_g1

0x774f,	// (0x0004193b) bg_button_pane_cp04

0xdf6d,	// (0x00048159) midp_keyp_sk_right_pane_g1

0xc119,	// (0x00046305) midp_keyp_rocker_pane_g1

0xdf76,	// (0x00048162) keyp_game_cell_pane_ParamLimits

0xdf76,	// (0x00048162) keyp_game_cell_pane

0x774f,	// (0x0004193b) bg_button_pane_cp02

0xdf89,	// (0x00048175) keyp_game_cell_pane_g1

0x5c79,	// (0x0003fe65) popup_fep_vkb2_window_ParamLimits

0x5c79,	// (0x0003fe65) popup_fep_vkb2_window

0x6fad,	// (0x00041199) aid_size_cell_vkb2_ParamLimits

0x6fad,	// (0x00041199) aid_size_cell_vkb2

0x7001,	// (0x000411ed) popup_fep_vkb2_window_g1_ParamLimits

0x7001,	// (0x000411ed) popup_fep_vkb2_window_g1

0x7049,	// (0x00041235) vkb2_area_bottom_pane_ParamLimits

0x7049,	// (0x00041235) vkb2_area_bottom_pane

0x7095,	// (0x00041281) vkb2_area_keypad_pane_ParamLimits

0x7095,	// (0x00041281) vkb2_area_keypad_pane

0x70d7,	// (0x000412c3) vkb2_area_top_pane_ParamLimits

0x70d7,	// (0x000412c3) vkb2_area_top_pane

0x7151,	// (0x0004133d) vkb2_top_entry_pane_ParamLimits

0x7151,	// (0x0004133d) vkb2_top_entry_pane

0x717b,	// (0x00041367) vkb2_top_grid_left_pane_ParamLimits

0x717b,	// (0x00041367) vkb2_top_grid_left_pane

0x7199,	// (0x00041385) vkb2_top_grid_right_pane_ParamLimits

0x7199,	// (0x00041385) vkb2_top_grid_right_pane

0x71b7,	// (0x000413a3) vkb2_cell_keypad_pane_ParamLimits

0x71b7,	// (0x000413a3) vkb2_cell_keypad_pane

0x7288,	// (0x00041474) vkb2_area_bottom_grid_pane_ParamLimits

0x7288,	// (0x00041474) vkb2_area_bottom_grid_pane

0x72ae,	// (0x0004149a) vkb2_area_bottom_pane_g1_ParamLimits

0x72ae,	// (0x0004149a) vkb2_area_bottom_pane_g1

0x72d2,	// (0x000414be) vkb2_area_bottom_pane_g2_ParamLimits

0x72d2,	// (0x000414be) vkb2_area_bottom_pane_g2

0x7300,	// (0x000414ec) vkb2_area_bottom_pane_g3_ParamLimits

0x7300,	// (0x000414ec) vkb2_area_bottom_pane_g3

0x0002,

0xfd8d,	// (0x00049f79) vkb2_area_bottom_pane_g_ParamLimits

0xfd8d,	// (0x00049f79) vkb2_area_bottom_pane_g

0x7361,	// (0x0004154d) vkb2_top_cell_left_pane_ParamLimits

0x7361,	// (0x0004154d) vkb2_top_cell_left_pane

0xdf9a,	// (0x00048186) vkb2_top_entry_pane_g1_ParamLimits

0xdf9a,	// (0x00048186) vkb2_top_entry_pane_g1

0xdfa8,	// (0x00048194) vkb2_top_entry_pane_t1_ParamLimits

0xdfa8,	// (0x00048194) vkb2_top_entry_pane_t1

0xdfda,	// (0x000481c6) vkb2_top_entry_pane_t2_ParamLimits

0xdfda,	// (0x000481c6) vkb2_top_entry_pane_t2

0xe00c,	// (0x000481f8) vkb2_top_entry_pane_t3_ParamLimits

0xe00c,	// (0x000481f8) vkb2_top_entry_pane_t3

0x0002,

0xfd94,	// (0x00049f80) vkb2_top_entry_pane_t_ParamLimits

0xfd94,	// (0x00049f80) vkb2_top_entry_pane_t

0x73ae,	// (0x0004159a) vkb2_top_grid_right_pane_g1_ParamLimits

0x73ae,	// (0x0004159a) vkb2_top_grid_right_pane_g1

0x73c4,	// (0x000415b0) vkb2_top_grid_right_pane_g2_ParamLimits

0x73c4,	// (0x000415b0) vkb2_top_grid_right_pane_g2

0x73dc,	// (0x000415c8) vkb2_top_grid_right_pane_g3_ParamLimits

0x73dc,	// (0x000415c8) vkb2_top_grid_right_pane_g3

0x73f4,	// (0x000415e0) vkb2_top_grid_right_pane_g4_ParamLimits

0x73f4,	// (0x000415e0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9b,	// (0x00049f87) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9b,	// (0x00049f87) vkb2_top_grid_right_pane_g

0x740a,	// (0x000415f6) vkb2_top_cell_left_pane_g1

0x7421,	// (0x0004160d) vkb2_cell_keypad_pane_g1_ParamLimits

0x7421,	// (0x0004160d) vkb2_cell_keypad_pane_g1

0xe030,	// (0x0004821c) vkb2_cell_keypad_pane_t1_ParamLimits

0xe030,	// (0x0004821c) vkb2_cell_keypad_pane_t1

0x742f,	// (0x0004161b) vkb2_cell_bottom_grid_pane_ParamLimits

0x742f,	// (0x0004161b) vkb2_cell_bottom_grid_pane

0x7468,	// (0x00041654) vkb2_cell_bottom_grid_pane_g1

0xdbdb,	// (0x00047dc7) aid_call2_pane_cp02

0xdbe3,	// (0x00047dcf) aid_call_pane_cp02

0xdbeb,	// (0x00047dd7) clock_digital_number_pane_cp10

0xdbf3,	// (0x00047ddf) clock_digital_number_pane_cp11

0xdbfb,	// (0x00047de7) clock_digital_number_pane_cp12

0xdc03,	// (0x00047def) clock_digital_number_pane_cp13

0xdc0b,	// (0x00047df7) clock_digital_separator_pane_cp10

0x8715,	// (0x00042901) popup_clock_digital_analogue_window_cp2_g1

0x8715,	// (0x00042901) popup_clock_digital_analogue_window_cp2_g2

0xdc13,	// (0x00047dff) popup_clock_digital_analogue_window_cp2_g3

0x8715,	// (0x00042901) popup_clock_digital_analogue_window_cp2_g4

0xdc13,	// (0x00047dff) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd50,	// (0x00049f3c) popup_clock_digital_analogue_window_cp2_g

0xdc1b,	// (0x00047e07) popup_clock_digital_analogue_window_cp2_t1

0xdc29,	// (0x00047e15) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5b,	// (0x00049f47) popup_clock_digital_analogue_window_cp2_t

0xc119,	// (0x00046305) clock_digital_number_pane_cp10_g1

0xc119,	// (0x00046305) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x00049d2f) clock_digital_number_pane_cp10_g

0xc119,	// (0x00046305) clock_digital_separator_pane_cp10_g1

0xc119,	// (0x00046305) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x00049d2f) clock_digital_separator_pane_cp10_g

0xda57,	// (0x00047c43) uniindi_top_pane_g3

0xda68,	// (0x00047c54) uniindi_top_pane_g4

0x7242,	// (0x0004142e) vkb2_row_keypad_pane_ParamLimits

0x7242,	// (0x0004142e) vkb2_row_keypad_pane

0x7484,	// (0x00041670) vkb2_cell_t_keypad_pane_ParamLimits

0x7484,	// (0x00041670) vkb2_cell_t_keypad_pane

0x7494,	// (0x00041680) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7494,	// (0x00041680) vkb2_cell_t_keypad_pane_cp08

0x74a7,	// (0x00041693) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x74a7,	// (0x00041693) vkb2_cell_t_keypad_pane_cp09

0x74bb,	// (0x000416a7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x74bb,	// (0x000416a7) vkb2_cell_t_keypad_pane_cp01

0x74cc,	// (0x000416b8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x74cc,	// (0x000416b8) vkb2_cell_t_keypad_pane_cp02

0x74dd,	// (0x000416c9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74dd,	// (0x000416c9) vkb2_cell_t_keypad_pane_cp03

0x74ee,	// (0x000416da) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74ee,	// (0x000416da) vkb2_cell_t_keypad_pane_cp04

0x74ff,	// (0x000416eb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74ff,	// (0x000416eb) vkb2_cell_t_keypad_pane_cp05

0x7510,	// (0x000416fc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7510,	// (0x000416fc) vkb2_cell_t_keypad_pane_cp06

0x7521,	// (0x0004170d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7521,	// (0x0004170d) vkb2_cell_t_keypad_pane_cp07

0x7532,	// (0x0004171e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7532,	// (0x0004171e) vkb2_cell_t_keypad_pane_cp10

0xc3ab,	// (0x00046597) vkb2_cell_t_keypad_pane_g1

0xe047,	// (0x00048233) vkb2_cell_t_keypad_pane_t1

0x774f,	// (0x0004193b) popup_grid_graphic2_window

0xe059,	// (0x00048245) aid_size_cell_graphic2_ParamLimits

0xe059,	// (0x00048245) aid_size_cell_graphic2

0xca3f,	// (0x00046c2b) bg_popup_window_pane_cp21_ParamLimits

0xca3f,	// (0x00046c2b) bg_popup_window_pane_cp21

0xe085,	// (0x00048271) graphic2_pages_pane_ParamLimits

0xe085,	// (0x00048271) graphic2_pages_pane

0xe0cb,	// (0x000482b7) grid_graphic2_control_pane_ParamLimits

0xe0cb,	// (0x000482b7) grid_graphic2_control_pane

0xe0f9,	// (0x000482e5) grid_graphic2_pane_ParamLimits

0xe0f9,	// (0x000482e5) grid_graphic2_pane

0xe159,	// (0x00048345) cell_graphic2_pane

0x774f,	// (0x0004193b) main_comp_mode_pane

0xd2d7,	// (0x000474c3) list_ai3_gene_pane_ParamLimits

0xd6a1,	// (0x0004788d) bg_popup_window_pane_cp19_ParamLimits

0xd6ad,	// (0x00047899) bg_touch_area_indi_pane_ParamLimits

0xd6ad,	// (0x00047899) bg_touch_area_indi_pane

0xd6c3,	// (0x000478af) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6c3,	// (0x000478af) bg_touch_area_indi_pane_cp01

0xd6d9,	// (0x000478c5) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6d9,	// (0x000478c5) bg_touch_area_indi_pane_cp02

0xd6f1,	// (0x000478dd) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6f1,	// (0x000478dd) bg_touch_area_indi_pane_cp03

0xd70b,	// (0x000478f7) popup_slider_window_g1_ParamLimits

0xd727,	// (0x00047913) popup_slider_window_g2_ParamLimits

0xd743,	// (0x0004792f) popup_slider_window_g3_ParamLimits

0xfce5,	// (0x00049ed1) popup_slider_window_g_ParamLimits

0xd79f,	// (0x0004798b) popup_slider_window_t1_ParamLimits

0xd813,	// (0x000479ff) small_volume_slider_vertical_pane_ParamLimits

0xe159,	// (0x00048345) cell_graphic2_pane_ParamLimits

0xe1a8,	// (0x00048394) bg_button_pane_cp10_ParamLimits

0xe1a8,	// (0x00048394) bg_button_pane_cp10

0xe1bb,	// (0x000483a7) bg_button_pane_cp11_ParamLimits

0xe1bb,	// (0x000483a7) bg_button_pane_cp11

0xe1ce,	// (0x000483ba) graphic2_pages_pane_g1_ParamLimits

0xe1ce,	// (0x000483ba) graphic2_pages_pane_g1

0xe1e9,	// (0x000483d5) graphic2_pages_pane_g2_ParamLimits

0xe1e9,	// (0x000483d5) graphic2_pages_pane_g2

0x0001,

0xfda9,	// (0x00049f95) graphic2_pages_pane_g_ParamLimits

0xfda9,	// (0x00049f95) graphic2_pages_pane_g

0xe201,	// (0x000483ed) graphic2_pages_pane_t1_ParamLimits

0xe201,	// (0x000483ed) graphic2_pages_pane_t1

0xe219,	// (0x00048405) cell_graphic2_control_pane_ParamLimits

0xe219,	// (0x00048405) cell_graphic2_control_pane

0xe233,	// (0x0004841f) cell_graphic2_pane_g1_ParamLimits

0xe233,	// (0x0004841f) cell_graphic2_pane_g1

0xe240,	// (0x0004842c) cell_graphic2_pane_g2_ParamLimits

0xe240,	// (0x0004842c) cell_graphic2_pane_g2

0xe24d,	// (0x00048439) cell_graphic2_pane_g3_ParamLimits

0xe24d,	// (0x00048439) cell_graphic2_pane_g3

0xe25a,	// (0x00048446) cell_graphic2_pane_g4_ParamLimits

0xe25a,	// (0x00048446) cell_graphic2_pane_g4

0xe267,	// (0x00048453) cell_graphic2_pane_g5_ParamLimits

0xe267,	// (0x00048453) cell_graphic2_pane_g5

0x0004,

0xfdae,	// (0x00049f9a) cell_graphic2_pane_g_ParamLimits

0xfdae,	// (0x00049f9a) cell_graphic2_pane_g

0xe282,	// (0x0004846e) cell_graphic2_pane_t1_ParamLimits

0xe282,	// (0x0004846e) cell_graphic2_pane_t1

0x9bf8,	// (0x00043de4) grid_highlight_pane_cp11_ParamLimits

0x9bf8,	// (0x00043de4) grid_highlight_pane_cp11

0x80af,	// (0x0004229b) bg_button_pane_cp05

0xe2ab,	// (0x00048497) cell_graphic2_control_pane_g1

0xc119,	// (0x00046305) bg_touch_area_indi_pane_g1

0xe2b8,	// (0x000484a4) aid_cmod_rocker_key_size

0xe2c2,	// (0x000484ae) aid_cmode_itu_key_size

0xe2cc,	// (0x000484b8) main_cmode_video_pane

0xe2f7,	// (0x000484e3) main_comp_mode_itu_pane

0xe303,	// (0x000484ef) main_comp_mode_rocker_pane

0xe30f,	// (0x000484fb) cell_cmode_rocker_pane_ParamLimits

0xe30f,	// (0x000484fb) cell_cmode_rocker_pane

0xe321,	// (0x0004850d) cell_cmode_itu_pane_ParamLimits

0xe321,	// (0x0004850d) cell_cmode_itu_pane

0x80af,	// (0x0004229b) bg_button_pane_cp06_ParamLimits

0x80af,	// (0x0004229b) bg_button_pane_cp06

0xc3ab,	// (0x00046597) cell_cmode_rocker_pane_g1_ParamLimits

0xc3ab,	// (0x00046597) cell_cmode_rocker_pane_g1

0xd8b7,	// (0x00047aa3) cell_cmode_rocker_pane_g2_ParamLimits

0xd8b7,	// (0x00047aa3) cell_cmode_rocker_pane_g2

0x0001,

0xfdbe,	// (0x00049faa) cell_cmode_rocker_pane_g_ParamLimits

0xfdbe,	// (0x00049faa) cell_cmode_rocker_pane_g

0x774f,	// (0x0004193b) bg_button_pane_cp07

0xe336,	// (0x00048522) cell_cmode_itu_pane_g1

0xe33f,	// (0x0004852b) cell_cmode_itu_pane_t1

0xe34d,	// (0x00048539) cell_cmode_itu_pane_t2

0x0001,

0x001c,	// (0x0003a208) cell_cmode_itu_pane_t

0xdada,	// (0x00047cc6) aid_touch_ctrl_left

0xdae2,	// (0x00047cce) aid_touch_ctrl_right

0x774f,	// (0x0004193b) compa_mode_pane

0xe35b,	// (0x00048547) aid_cmod_rocker_key_size_cp

0xe365,	// (0x00048551) aid_cmode_itu_key_size_cp

0xe36f,	// (0x0004855b) compa_mode_pane_g1

0xe377,	// (0x00048563) compa_mode_pane_g2

0xe37f,	// (0x0004856b) compa_mode_pane_g3

0x0002,

0x0021,	// (0x0003a20d) compa_mode_pane_g

0xe387,	// (0x00048573) main_comp_mode_itu_pane_cp

0xe38f,	// (0x0004857b) main_comp_mode_rocker_pane_cp

0xe397,	// (0x00048583) cell_cmode_itu_pane_cp_ParamLimits

0xe397,	// (0x00048583) cell_cmode_itu_pane_cp

0xe3ac,	// (0x00048598) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ac,	// (0x00048598) cell_cmode_rocker_pane_cp

0x80af,	// (0x0004229b) bg_button_pane_cp06_cp_ParamLimits

0x80af,	// (0x0004229b) bg_button_pane_cp06_cp

0xc3ab,	// (0x00046597) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3ab,	// (0x00046597) cell_cmode_rocker_pane_g1_cp

0xc119,	// (0x00046305) cell_cmode_rocker_pane_g2_cp

0x774f,	// (0x0004193b) bg_button_pane_cp07_cp

0xb0bc,	// (0x000452a8) cell_cmode_itu_pane_g1_cp

0xe3be,	// (0x000485aa) cell_cmode_itu_pane_t1_cp

0xe3be,	// (0x000485aa) cell_cmode_itu_pane_t2_cp

0xb0a9,	// (0x00045295) settings_code_pane_cp2

0x7843,	// (0x00041a2f) bg_popup_window_pane_cp3_ParamLimits

0x7ca6,	// (0x00041e92) heading_pane_cp3_ParamLimits

0x7cb2,	// (0x00041e9e) listscroll_popup_graphic_pane_ParamLimits

0x6a6e,	// (0x00040c5a) fep_hwr_aid_pane_ParamLimits

0x6f21,	// (0x0004110d) aid_touch_sctrl_top_ParamLimits

0x6f2e,	// (0x0004111a) sctrl_sk_top_pane_g1_ParamLimits

0xc3ab,	// (0x00046597) sctrl_sk_top_pane_g2_ParamLimits

0xfcfe,	// (0x00049eea) sctrl_sk_top_pane_g_ParamLimits

0x6f3b,	// (0x00041127) sctrl_sk_top_pane_t1_ParamLimits

0x6f21,	// (0x0004110d) aid_touch_sctrl_bottom_ParamLimits

0x6f3b,	// (0x00041127) sctrl_sk_bottom_pane_t1_ParamLimits

0xda23,	// (0x00047c0f) aid_area_touch_clock

0x7119,	// (0x00041305) aid_vkb2_area_top_pane_cell_ParamLimits

0x7119,	// (0x00041305) aid_vkb2_area_top_pane_cell

0x7264,	// (0x00041450) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7264,	// (0x00041450) aid_vkb2_area_bottom_pane_cell

0xdf92,	// (0x0004817e) popup_char_count_window

0xe3cc,	// (0x000485b8) popup_char_count_window_g1

0xe3d5,	// (0x000485c1) popup_char_count_window_g2

0xe3de,	// (0x000485ca) popup_char_count_window_g3

0x0002,

0x0028,	// (0x0003a214) popup_char_count_window_g

0xe3e7,	// (0x000485d3) popup_char_count_window_t1

0x6fdf,	// (0x000411cb) popup_fep_char_preview_window_ParamLimits

0x6fdf,	// (0x000411cb) popup_fep_char_preview_window

0x7137,	// (0x00041323) vkb2_top_candi_pane_ParamLimits

0x7137,	// (0x00041323) vkb2_top_candi_pane

0xe3f5,	// (0x000485e1) cell_vkb2_top_candi_pane_ParamLimits

0xe3f5,	// (0x000485e1) cell_vkb2_top_candi_pane

0xa1e1,	// (0x000443cd) bg_popup_fep_char_preview_window_ParamLimits

0xa1e1,	// (0x000443cd) bg_popup_fep_char_preview_window

0x7547,	// (0x00041733) popup_fep_char_preview_window_t1_ParamLimits

0x7547,	// (0x00041733) popup_fep_char_preview_window_t1

0xe442,	// (0x0004862e) bg_popup_fep_char_preview_window_g1

0xe44a,	// (0x00048636) bg_popup_fep_char_preview_window_g2

0xe452,	// (0x0004863e) bg_popup_fep_char_preview_window_g3

0xe45a,	// (0x00048646) bg_popup_fep_char_preview_window_g4

0xe462,	// (0x0004864e) bg_popup_fep_char_preview_window_g5

0x7581,	// (0x0004176d) bg_popup_fep_char_preview_window_g6

0xe46a,	// (0x00048656) bg_popup_fep_char_preview_window_g7

0xe472,	// (0x0004865e) bg_popup_fep_char_preview_window_g8

0xe47a,	// (0x00048666) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc3,	// (0x00049faf) bg_popup_fep_char_preview_window_g

0xc3ab,	// (0x00046597) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc3ab,	// (0x00046597) cell_vkb2_top_candi_pane_g1

0xc6c2,	// (0x000468ae) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc6c2,	// (0x000468ae) cell_vkb2_top_candi_pane_g2

0xc6e3,	// (0x000468cf) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc6e3,	// (0x000468cf) cell_vkb2_top_candi_pane_g3

0x7589,	// (0x00041775) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7589,	// (0x00041775) cell_vkb2_top_candi_pane_g4

0xe2d6,	// (0x000484c2) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe2d6,	// (0x000484c2) cell_vkb2_top_candi_pane_g5

0xd8b7,	// (0x00047aa3) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd8b7,	// (0x00047aa3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd6,	// (0x00049fc2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd6,	// (0x00049fc2) cell_vkb2_top_candi_pane_g

0x75aa,	// (0x00041796) cell_vkb2_top_candi_pane_t1

0x67c6,	// (0x000409b2) aid_size_touch_slider_mark_ParamLimits

0x67c6,	// (0x000409b2) aid_size_touch_slider_mark

0xe0bb,	// (0x000482a7) grid_graphic2_catg_pane_ParamLimits

0xe0bb,	// (0x000482a7) grid_graphic2_catg_pane

0xe135,	// (0x00048321) popup_grid_graphic2_window_t1_ParamLimits

0xe135,	// (0x00048321) popup_grid_graphic2_window_t1

0xe147,	// (0x00048333) popup_grid_graphic2_window_t2_ParamLimits

0xe147,	// (0x00048333) popup_grid_graphic2_window_t2

0x0001,

0xfda4,	// (0x00049f90) popup_grid_graphic2_window_t_ParamLimits

0xfda4,	// (0x00049f90) popup_grid_graphic2_window_t

0x80af,	// (0x0004229b) bg_button_pane_cp05_ParamLimits

0xe2ab,	// (0x00048497) cell_graphic2_control_pane_g1_ParamLimits

0xe482,	// (0x0004866e) cell_graphic2_catg_pane_ParamLimits

0xe482,	// (0x0004866e) cell_graphic2_catg_pane

0x774f,	// (0x0004193b) bg_button_pane_cp12

0xe494,	// (0x00048680) cell_graphic2_catg_pane_g1

0xd9ef,	// (0x00047bdb) cell_tb_ext_pane_t1_ParamLimits

0x7381,	// (0x0004156d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7381,	// (0x0004156d) vkb2_top_cell_right_narrow_pane

0x7399,	// (0x00041585) vkb2_top_cell_right_wide_pane_ParamLimits

0x7399,	// (0x00041585) vkb2_top_cell_right_wide_pane

0xca3f,	// (0x00046c2b) bg_vkb2_func_pane_ParamLimits

0xca3f,	// (0x00046c2b) bg_vkb2_func_pane

0x740a,	// (0x000415f6) vkb2_top_cell_left_pane_g1_ParamLimits

0xca3f,	// (0x00046c2b) bg_vkb2_fuc_pane_cp03_ParamLimits

0xca3f,	// (0x00046c2b) bg_vkb2_fuc_pane_cp03

0x7468,	// (0x00041654) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9b10,	// (0x00043cfc) bg_vkb2_func_pane_g1

0x9b18,	// (0x00043d04) bg_vkb2_func_pane_g2

0x9b28,	// (0x00043d14) bg_vkb2_func_pane_g3

0x9b20,	// (0x00043d0c) bg_vkb2_func_pane_g4

0x9b30,	// (0x00043d1c) bg_vkb2_func_pane_g5

0x9b38,	// (0x00043d24) bg_vkb2_func_pane_g6

0x9b40,	// (0x00043d2c) bg_vkb2_func_pane_g7

0x9b48,	// (0x00043d34) bg_vkb2_func_pane_g8

0x9b08,	// (0x00043cf4) bg_vkb2_func_pane_g9

0x0008,

0xfde3,	// (0x00049fcf) bg_vkb2_func_pane_g

0xca3f,	// (0x00046c2b) bg_vkb2_fuc_pane_cp01_ParamLimits

0xca3f,	// (0x00046c2b) bg_vkb2_fuc_pane_cp01

0x740a,	// (0x000415f6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x740a,	// (0x000415f6) vkb2_top_cell_right_wide_pane_g1

0xca3f,	// (0x00046c2b) bg_vkb2_fuc_pane_cp02_ParamLimits

0xca3f,	// (0x00046c2b) bg_vkb2_fuc_pane_cp02

0x7468,	// (0x00041654) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7468,	// (0x00041654) vkb2_top_cell_right_narrow_pane_g1

0xd625,	// (0x00047811) aid_touch_area_decrease_ParamLimits

0xd625,	// (0x00047811) aid_touch_area_decrease

0xd643,	// (0x0004782f) aid_touch_area_increase_ParamLimits

0xd643,	// (0x0004782f) aid_touch_area_increase

0xd64f,	// (0x0004783b) aid_touch_area_mute_ParamLimits

0xd64f,	// (0x0004783b) aid_touch_area_mute

0xd673,	// (0x0004785f) aid_touch_area_slider_ParamLimits

0xd673,	// (0x0004785f) aid_touch_area_slider

0xd75f,	// (0x0004794b) popup_slider_window_g4_ParamLimits

0xd75f,	// (0x0004794b) popup_slider_window_g4

0xd76b,	// (0x00047957) popup_slider_window_g5_ParamLimits

0xd76b,	// (0x00047957) popup_slider_window_g5

0xd78d,	// (0x00047979) popup_slider_window_g6_ParamLimits

0xd78d,	// (0x00047979) popup_slider_window_g6

0xd7cd,	// (0x000479b9) popup_slider_window_t2_ParamLimits

0xd7cd,	// (0x000479b9) popup_slider_window_t2

0x0001,

0xfcf2,	// (0x00049ede) popup_slider_window_t_ParamLimits

0xfcf2,	// (0x00049ede) popup_slider_window_t

0xd7e5,	// (0x000479d1) slider_pane_ParamLimits

0xd7e5,	// (0x000479d1) slider_pane

0xe49d,	// (0x00048689) slider_pane_g1_ParamLimits

0xe49d,	// (0x00048689) slider_pane_g1

0xe4b1,	// (0x0004869d) slider_pane_g2_ParamLimits

0xe4b1,	// (0x0004869d) slider_pane_g2

0xe4c7,	// (0x000486b3) slider_pane_g3_ParamLimits

0xe4c7,	// (0x000486b3) slider_pane_g3

0x0003,

0x004f,	// (0x0003a23b) slider_pane_g_ParamLimits

0x004f,	// (0x0003a23b) slider_pane_g

0x9542,	// (0x0004372e) popup_tb_float_extension_window_ParamLimits

0x9542,	// (0x0004372e) popup_tb_float_extension_window

0xe4f3,	// (0x000486df) aid_size_cell_tb_float_ext

0x774f,	// (0x0004193b) bg_popup_sub_window_cp28

0xe4ff,	// (0x000486eb) grid_tb_float_ext_pane

0xe509,	// (0x000486f5) cell_tb_float_ext_pane_ParamLimits

0xe509,	// (0x000486f5) cell_tb_float_ext_pane

0xe523,	// (0x0004870f) cell_tb_float_ext_pane_g1

0xe52c,	// (0x00048718) grid_highlight_pane_cp12

0x6ba1,	// (0x00040d8d) cell_last_hwr_side_pane_ParamLimits

0x6ba1,	// (0x00040d8d) cell_last_hwr_side_pane

0xc119,	// (0x00046305) cell_last_hwr_side_pane_g1

0xe535,	// (0x00048721) cell_last_hwr_side_pane_g2

0x0001,

0xfdf6,	// (0x00049fe2) cell_last_hwr_side_pane_g

0x7330,	// (0x0004151c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7330,	// (0x0004151c) vkb2_area_bottom_space_btn_pane

0xc3ab,	// (0x00046597) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe047,	// (0x00048233) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x75aa,	// (0x00041796) cell_vkb2_top_candi_pane_t1_ParamLimits

0x75c9,	// (0x000417b5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x75c9,	// (0x000417b5) vkb2_area_bottom_space_btn_pane_g1

0x7603,	// (0x000417ef) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7603,	// (0x000417ef) vkb2_area_bottom_space_btn_pane_g2

0x7639,	// (0x00041825) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7639,	// (0x00041825) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfb,	// (0x00049fe7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfb,	// (0x00049fe7) vkb2_area_bottom_space_btn_pane_g

0x6b15,	// (0x00040d01) cel_fep_hwr_func_pane_ParamLimits

0x6b15,	// (0x00040d01) cel_fep_hwr_func_pane

0x6b51,	// (0x00040d3d) cell_hwr_side_button_pane_ParamLimits

0x6b51,	// (0x00040d3d) cell_hwr_side_button_pane

0xda23,	// (0x00047c0f) aid_area_touch_clock_ParamLimits

0x7acc,	// (0x00041cb8) bg_uniindi_top_pane_ParamLimits

0xda35,	// (0x00047c21) uniindi_top_pane_g1_ParamLimits

0xda4b,	// (0x00047c37) uniindi_top_pane_g2_ParamLimits

0xda57,	// (0x00047c43) uniindi_top_pane_g3_ParamLimits

0xda68,	// (0x00047c54) uniindi_top_pane_g4_ParamLimits

0xfd2a,	// (0x00049f16) uniindi_top_pane_g_ParamLimits

0xda75,	// (0x00047c61) uniindi_top_pane_t1_ParamLimits

0x7acc,	// (0x00041cb8) bg_vkb2_func_pane_cp01_ParamLimits

0x7acc,	// (0x00041cb8) bg_vkb2_func_pane_cp01

0xe53e,	// (0x0004872a) cel_fep_hwr_func_pane_g1_ParamLimits

0xe53e,	// (0x0004872a) cel_fep_hwr_func_pane_g1

0x7acc,	// (0x00041cb8) bg_vkb2_func_pane_cp02_ParamLimits

0x7acc,	// (0x00041cb8) bg_vkb2_func_pane_cp02

0xe53e,	// (0x0004872a) cell_hwr_side_button_pane_g1_ParamLimits

0xe53e,	// (0x0004872a) cell_hwr_side_button_pane_g1

0x9989,	// (0x00043b75) status_pane_g4_ParamLimits

0x9989,	// (0x00043b75) status_pane_g4

0x99a3,	// (0x00043b8f) status_pane_t1

0xbe52,	// (0x0004603e) form2_midp_gauge_slider_cont_pane

0xbe5a,	// (0x00046046) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe6c,	// (0x00046058) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe7e,	// (0x0004606a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x00049ce2) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe90,	// (0x0004607c) form2_midp_slider_pane_ParamLimits

0x6f9f,	// (0x0004118b) aid_size_cell_func_vkb2_ParamLimits

0x6f9f,	// (0x0004118b) aid_size_cell_func_vkb2

0xe4df,	// (0x000486cb) slider_pane_g4_ParamLimits

0xe4df,	// (0x000486cb) slider_pane_g4

0x7683,	// (0x0004186f) form2_midp_gauge_slider_pane_t2_cp01

0x7691,	// (0x0004187d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7691,	// (0x0004187d) form2_midp_gauge_slider_pane_t3_cp01

0x76ae,	// (0x0004189a) form2_midp_slider_pane_cp01

0x774f,	// (0x0004193b) navi_smil_pane

0xe577,	// (0x00048763) navi_smil_pane_g1

0xe57f,	// (0x0004876b) navi_smil_pane_t1

0xe54c,	// (0x00048738) form2_midp_slider_pane_g1

0xe555,	// (0x00048741) form2_midp_slider_pane_g2

0xe55d,	// (0x00048749) form2_midp_slider_pane_g3

0xe54c,	// (0x00048738) form2_midp_slider_pane_g4

0xe565,	// (0x00048751) form2_midp_slider_pane_g5

0x0004,

0x0061,	// (0x0003a24d) form2_midp_slider_pane_g

0x7673,	// (0x0004185f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7673,	// (0x0004185f) vkb2_area_bottom_space_btn_pane_g4

0x97bf,	// (0x000439ab) lc0_navi_pane_ParamLimits

0x97bf,	// (0x000439ab) lc0_navi_pane

0x9835,	// (0x00043a21) lc0_stat_indi_pane_ParamLimits

0x9835,	// (0x00043a21) lc0_stat_indi_pane

0x984c,	// (0x00043a38) ls0_title_pane_ParamLimits

0x984c,	// (0x00043a38) ls0_title_pane

0x80af,	// (0x0004229b) bg_popup_sub_pane_cp14_ParamLimits

0xda0a,	// (0x00047bf6) list_uniindi_pane_ParamLimits

0xda16,	// (0x00047c02) uniindi_top_pane_ParamLimits

0xdab2,	// (0x00047c9e) list_single_uniindi_pane_g1_ParamLimits

0xdac5,	// (0x00047cb1) list_single_uniindi_pane_t1_ParamLimits

0x76b7,	// (0x000418a3) lc0_stat_clock_pane_ParamLimits

0x76b7,	// (0x000418a3) lc0_stat_clock_pane

0xe58d,	// (0x00048779) lc0_stat_indi_pane_g1_ParamLimits

0xe58d,	// (0x00048779) lc0_stat_indi_pane_g1

0xe59a,	// (0x00048786) lc0_stat_indi_pane_g2_ParamLimits

0xe59a,	// (0x00048786) lc0_stat_indi_pane_g2

0x0001,

0x006c,	// (0x0003a258) lc0_stat_indi_pane_g_ParamLimits

0x006c,	// (0x0003a258) lc0_stat_indi_pane_g

0x76c4,	// (0x000418b0) lc0_uni_indicator_pane_ParamLimits

0x76c4,	// (0x000418b0) lc0_uni_indicator_pane

0xe5a7,	// (0x00048793) ls0_title_pane_g1_ParamLimits

0xe5a7,	// (0x00048793) ls0_title_pane_g1

0xe5bb,	// (0x000487a7) ls0_title_pane_t1_ParamLimits

0xe5bb,	// (0x000487a7) ls0_title_pane_t1

0x76d1,	// (0x000418bd) lc0_uni_indicator_pane_g1_ParamLimits

0x76d1,	// (0x000418bd) lc0_uni_indicator_pane_g1

0xe5f1,	// (0x000487dd) lc0_stat_clock_pane_t1

0x774f,	// (0x0004193b) main_ai5_pane

0xe5ff,	// (0x000487eb) ai5_sk_pane_ParamLimits

0xe5ff,	// (0x000487eb) ai5_sk_pane

0xe60c,	// (0x000487f8) cell_ai5_widget_pane_ParamLimits

0xe60c,	// (0x000487f8) cell_ai5_widget_pane

0xe68e,	// (0x0004887a) aid_size_cell_widget_grid

0xe6a2,	// (0x0004888e) bg_ai5_widget_pane_ParamLimits

0xe6a2,	// (0x0004888e) bg_ai5_widget_pane

0xe6ca,	// (0x000488b6) cell_ai5_widget_pane_g2

0xe6da,	// (0x000488c6) cell_ai5_widget_pane_g3

0xe6f9,	// (0x000488e5) cell_ai5_widget_pane_g4

0xe705,	// (0x000488f1) cell_ai5_widget_pane_g5

0xe711,	// (0x000488fd) cell_ai5_widget_pane_g6

0xe71d,	// (0x00048909) cell_ai5_widget_pane_g7

0xe765,	// (0x00048951) cell_ai5_widget_pane_t1_ParamLimits

0xe765,	// (0x00048951) cell_ai5_widget_pane_t1

0xe782,	// (0x0004896e) cell_ai5_widget_pane_t2_ParamLimits

0xe782,	// (0x0004896e) cell_ai5_widget_pane_t2

0xe79a,	// (0x00048986) cell_ai5_widget_pane_t3_ParamLimits

0xe79a,	// (0x00048986) cell_ai5_widget_pane_t3

0xe7b2,	// (0x0004899e) cell_ai5_widget_pane_t4_ParamLimits

0xe7b2,	// (0x0004899e) cell_ai5_widget_pane_t4

0xe7cc,	// (0x000489b8) cell_ai5_widget_pane_t5_ParamLimits

0xe7cc,	// (0x000489b8) cell_ai5_widget_pane_t5

0xe7eb,	// (0x000489d7) cell_ai5_widget_pane_t6_ParamLimits

0xe7eb,	// (0x000489d7) cell_ai5_widget_pane_t6

0xe7fd,	// (0x000489e9) cell_ai5_widget_pane_t7_ParamLimits

0xe7fd,	// (0x000489e9) cell_ai5_widget_pane_t7

0xe816,	// (0x00048a02) cell_ai5_widget_pane_t8_ParamLimits

0xe816,	// (0x00048a02) cell_ai5_widget_pane_t8

0x0009,

0x0086,	// (0x0003a272) cell_ai5_widget_pane_t_ParamLimits

0x0086,	// (0x0003a272) cell_ai5_widget_pane_t

0xe862,	// (0x00048a4e) grid_ai5_widget_pane

0x80af,	// (0x0004229b) highlight_cell_ai5_widget_pane_ParamLimits

0x80af,	// (0x0004229b) highlight_cell_ai5_widget_pane

0xe87a,	// (0x00048a66) ai5_sk_left_pane

0xe884,	// (0x00048a70) ai5_sk_middle_pane

0xe88e,	// (0x00048a7a) ai5_sk_right_pane

0xe898,	// (0x00048a84) bg_ai5_widget_pane_g1_ParamLimits

0xe898,	// (0x00048a84) bg_ai5_widget_pane_g1

0xe8a4,	// (0x00048a90) bg_ai5_widget_pane_g2_ParamLimits

0xe8a4,	// (0x00048a90) bg_ai5_widget_pane_g2

0xe8b0,	// (0x00048a9c) bg_ai5_widget_pane_g3_ParamLimits

0xe8b0,	// (0x00048a9c) bg_ai5_widget_pane_g3

0xe8bc,	// (0x00048aa8) bg_ai5_widget_pane_g4_ParamLimits

0xe8bc,	// (0x00048aa8) bg_ai5_widget_pane_g4

0xe8c8,	// (0x00048ab4) bg_ai5_widget_pane_g5_ParamLimits

0xe8c8,	// (0x00048ab4) bg_ai5_widget_pane_g5

0xe8d4,	// (0x00048ac0) bg_ai5_widget_pane_g6_ParamLimits

0xe8d4,	// (0x00048ac0) bg_ai5_widget_pane_g6

0xe8e0,	// (0x00048acc) bg_ai5_widget_pane_g7_ParamLimits

0xe8e0,	// (0x00048acc) bg_ai5_widget_pane_g7

0xe8ec,	// (0x00048ad8) bg_ai5_widget_pane_g8_ParamLimits

0xe8ec,	// (0x00048ad8) bg_ai5_widget_pane_g8

0xe8f8,	// (0x00048ae4) bg_ai5_widget_pane_g9_ParamLimits

0xe8f8,	// (0x00048ae4) bg_ai5_widget_pane_g9

0x0008,

0x009b,	// (0x0003a287) bg_ai5_widget_pane_g_ParamLimits

0x009b,	// (0x0003a287) bg_ai5_widget_pane_g

0xe92b,	// (0x00048b17) cell_shortcut_ai5_widget_pane_ParamLimits

0xe92b,	// (0x00048b17) cell_shortcut_ai5_widget_pane

0x790c,	// (0x00041af8) bg_cell_shortcut_ai5_widget_pane

0xe93c,	// (0x00048b28) cell_grid_ai5_widget_pane_g1

0xe945,	// (0x00048b31) highlight_cell_shortcut_ai5_widget_pane

0x9b18,	// (0x00043d04) ai5_sk_left_pane_g1

0xe94d,	// (0x00048b39) ai5_sk_left_pane_g2

0xe955,	// (0x00048b41) ai5_sk_left_pane_g3

0xe95d,	// (0x00048b49) ai5_sk_left_pane_g4

0x0003,

0xfe04,	// (0x00049ff0) ai5_sk_left_pane_g

0xe965,	// (0x00048b51) ai5_sk_left_pane_t1

0x9b10,	// (0x00043cfc) ai5_sk_right_pane_g1

0xe973,	// (0x00048b5f) ai5_sk_right_pane_g2

0xe97b,	// (0x00048b67) ai5_sk_right_pane_g3

0xe983,	// (0x00048b6f) ai5_sk_right_pane_g4

0x0003,

0xfe0d,	// (0x00049ff9) ai5_sk_right_pane_g

0xe98b,	// (0x00048b77) ai5_sk_right_pane_t1

0x9b10,	// (0x00043cfc) ai5_sk_middle_pane_g1

0x9b18,	// (0x00043d04) ai5_sk_middle_pane_g2

0x9b30,	// (0x00043d1c) ai5_sk_middle_pane_g3

0xe97b,	// (0x00048b67) ai5_sk_middle_pane_g4

0xe955,	// (0x00048b41) ai5_sk_middle_pane_g5

0xe999,	// (0x00048b85) ai5_sk_middle_pane_g6

0xe9a1,	// (0x00048b8d) ai5_sk_middle_pane_g7

0x0006,

0xfe16,	// (0x0004a002) ai5_sk_middle_pane_g

0x964f,	// (0x0004383b) aid_touch_area_size_lc0_ParamLimits

0x964f,	// (0x0004383b) aid_touch_area_size_lc0

0x6ca0,	// (0x00040e8c) cell_hwr_candidate_pane_t1_ParamLimits

0x966b,	// (0x00043857) aid_touch_navi_pane

0x9933,	// (0x00043b1f) status_dt_navi_pane_ParamLimits

0x9933,	// (0x00043b1f) status_dt_navi_pane

0x9940,	// (0x00043b2c) status_dt_sta_pane_ParamLimits

0x9940,	// (0x00043b2c) status_dt_sta_pane

0xe9a9,	// (0x00048b95) dt_sta_controll_pane

0xe9b6,	// (0x00048ba2) dt_sta_indi_pane

0xe9c7,	// (0x00048bb3) dt_sta_title_pane

0x7acc,	// (0x00041cb8) bg_dt_sta_indi_pane_ParamLimits

0x7acc,	// (0x00041cb8) bg_dt_sta_indi_pane

0xe9da,	// (0x00048bc6) dt_sta_battery_pane

0xe9e2,	// (0x00048bce) dt_sta_indi_pane_g1

0xe9eb,	// (0x00048bd7) dt_sta_indi_pane_g2

0xe9f4,	// (0x00048be0) dt_sta_indi_pane_g3

0x0002,

0x00cf,	// (0x0003a2bb) dt_sta_indi_pane_g

0xe9fd,	// (0x00048be9) dt_sta_signal_pane

0x80af,	// (0x0004229b) bg_dt_sta_title_pane_ParamLimits

0x80af,	// (0x0004229b) bg_dt_sta_title_pane

0xea06,	// (0x00048bf2) dt_sta_title_pane_g1

0xea0e,	// (0x00048bfa) dt_sta_title_pane_t1_ParamLimits

0xea0e,	// (0x00048bfa) dt_sta_title_pane_t1

0x774f,	// (0x0004193b) bg_dt_sta_control_pane

0xea23,	// (0x00048c0f) dt_sta_controll_pane_g1

0xea2c,	// (0x00048c18) bg_dt_sta_title_pane_g1

0xea35,	// (0x00048c21) bg_dt_sta_title_pane_g2

0xea3e,	// (0x00048c2a) bg_dt_sta_title_pane_g3

0x0002,

0x00d6,	// (0x0003a2c2) bg_dt_sta_title_pane_g

0xc119,	// (0x00046305) bg_dt_sta_indi_pane_g1

0xea47,	// (0x00048c33) dt_sta_signal_pane_g1

0xea4f,	// (0x00048c3b) dt_sta_signal_pane_g2

0x0001,

0x00dd,	// (0x0003a2c9) dt_sta_signal_pane_g

0xea57,	// (0x00048c43) dt_sta_battery_pane_g1

0xea60,	// (0x00048c4c) dt_sta_battery_pane_t1

0xc119,	// (0x00046305) bg_dt_sta_control_pane_g1

0x882a,	// (0x00042a16) fep_china_uni_eep_pane

0x8832,	// (0x00042a1e) fep_china_uni_entry_pane_ParamLimits

0x8842,	// (0x00042a2e) popup_fep_china_uni_window_g1_ParamLimits

0x8852,	// (0x00042a3e) popup_fep_china_uni_window_g2_ParamLimits

0x8852,	// (0x00042a3e) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00049926) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00049926) popup_fep_china_uni_window_g

0xea6f,	// (0x00048c5b) fep_china_uni_eep_pane_g1

0xea77,	// (0x00048c63) fep_china_uni_eep_pane_t1

0xe56e,	// (0x0004875a) aid_touch_area_size_smil_player

0x97b7,	// (0x000439a3) lc0_clock_pane

0x9997,	// (0x00043b83) status_pane_g5_ParamLimits

0x9997,	// (0x00043b83) status_pane_g5

0x9207,	// (0x000433f3) popup_keymap_window

0x9955,	// (0x00043b41) status_icon_pane

0xe6da,	// (0x000488c6) cell_ai5_widget_pane_g3_ParamLimits

0xe6f9,	// (0x000488e5) cell_ai5_widget_pane_g4_ParamLimits

0xe705,	// (0x000488f1) cell_ai5_widget_pane_g5_ParamLimits

0xe729,	// (0x00048915) cell_ai5_widget_pane_g8_ParamLimits

0xe729,	// (0x00048915) cell_ai5_widget_pane_g8

0xe73d,	// (0x00048929) cell_ai5_widget_pane_g9_ParamLimits

0xe73d,	// (0x00048929) cell_ai5_widget_pane_g9

0xe751,	// (0x0004893d) cell_ai5_widget_pane_g10_ParamLimits

0xe751,	// (0x0004893d) cell_ai5_widget_pane_g10

0xea86,	// (0x00048c72) status_icon_pane_g1

0x774f,	// (0x0004193b) bg_popup_sub_pane_cp13

0xea8e,	// (0x00048c7a) popup_keymap_window_t1

0x8feb,	// (0x000431d7) control_pane_g6_ParamLimits

0x8feb,	// (0x000431d7) control_pane_g6

0x8ff8,	// (0x000431e4) control_pane_g7_ParamLimits

0x8ff8,	// (0x000431e4) control_pane_g7

0x9005,	// (0x000431f1) control_pane_g8_ParamLimits

0x9005,	// (0x000431f1) control_pane_g8

0xe9a9,	// (0x00048b95) dt_sta_controll_pane_ParamLimits

0xe9b6,	// (0x00048ba2) dt_sta_indi_pane_ParamLimits

0xe9c7,	// (0x00048bb3) dt_sta_title_pane_ParamLimits

0x7fe7,	// (0x000421d3) aid_size_touch_scroll_bar_cale

0x5c49,	// (0x0003fe35) popup_discreet_window_ParamLimits

0x5c49,	// (0x0003fe35) popup_discreet_window

0x5cd1,	// (0x0003febd) popup_sk_window

0xa1e1,	// (0x000443cd) bg_popup_sub_pane_cp28_ParamLimits

0xa1e1,	// (0x000443cd) bg_popup_sub_pane_cp28

0xea9c,	// (0x00048c88) popup_discreet_window_g1_ParamLimits

0xea9c,	// (0x00048c88) popup_discreet_window_g1

0xeabc,	// (0x00048ca8) popup_discreet_window_t1_ParamLimits

0xeabc,	// (0x00048ca8) popup_discreet_window_t1

0xeada,	// (0x00048cc6) popup_discreet_window_t2_ParamLimits

0xeada,	// (0x00048cc6) popup_discreet_window_t2

0x0002,

0x00e2,	// (0x0003a2ce) popup_discreet_window_t_ParamLimits

0x00e2,	// (0x0003a2ce) popup_discreet_window_t

0x76e5,	// (0x000418d1) popup_sk_window_g1

0x76ef,	// (0x000418db) popup_sk_window_g2

0x0001,

0xfe25,	// (0x0004a011) popup_sk_window_g

0xeb2c,	// (0x00048d18) popup_sk_window_t1

0xeb3a,	// (0x00048d26) popup_sk_window_t1_copy1

0xe6ca,	// (0x000488b6) cell_ai5_widget_pane_g2_ParamLimits

0xe828,	// (0x00048a14) cell_ai5_widget_pane_t9_ParamLimits

0xe828,	// (0x00048a14) cell_ai5_widget_pane_t9

0x774f,	// (0x0004193b) main_fep_fshwr2_pane

0xeb48,	// (0x00048d34) aid_fshwr2_btn_pane

0xeb50,	// (0x00048d3c) aid_fshwr2_syb_pane

0xeb58,	// (0x00048d44) aid_fshwr2_txt_pane

0xeb60,	// (0x00048d4c) fshwr2_func_candi_pane

0xeb6c,	// (0x00048d58) fshwr2_hwr_syb_pane

0xeb78,	// (0x00048d64) fshwr2_icf_pane

0x774f,	// (0x0004193b) fshwr2_icf_bg_pane

0xeb96,	// (0x00048d82) fshwr2_icf_pane_t1_ParamLimits

0xeb96,	// (0x00048d82) fshwr2_icf_pane_t1

0xc119,	// (0x00046305) fshwr2_func_candi_pane_g1

0xebad,	// (0x00048d99) fshwr2_func_candi_row_pane_ParamLimits

0xebad,	// (0x00048d99) fshwr2_func_candi_row_pane

0xebbe,	// (0x00048daa) cell_fshwr2_syb_pane_ParamLimits

0xebbe,	// (0x00048daa) cell_fshwr2_syb_pane

0xc3ab,	// (0x00046597) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3ab,	// (0x00046597) fshwr2_hwr_syb_pane_g1

0x774f,	// (0x0004193b) bg_popup_call_pane_cp01

0xebd8,	// (0x00048dc4) fshwr2_func_candi_cell_pane_ParamLimits

0xebd8,	// (0x00048dc4) fshwr2_func_candi_cell_pane

0xec09,	// (0x00048df5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec09,	// (0x00048df5) fshwr2_func_candi_cell_bg_pane

0xec23,	// (0x00048e0f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec23,	// (0x00048e0f) fshwr2_func_candi_cell_pane_g1

0xec4b,	// (0x00048e37) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec4b,	// (0x00048e37) fshwr2_func_candi_cell_pane_t1

0x774f,	// (0x0004193b) bg_button_pane_cp08

0x8d14,	// (0x00042f00) cell_fshwr2_syb_bg_pane

0xec5e,	// (0x00048e4a) cell_fshwr2_syb_bg_pane_g1

0xec66,	// (0x00048e52) cell_fshwr2_syb_bg_pane_t1

0x80af,	// (0x0004229b) main_tmo_pane

0xacf6,	// (0x00044ee2) uni_indicator_pane_g1_ParamLimits

0xad0b,	// (0x00044ef7) uni_indicator_pane_g2_ParamLimits

0xad21,	// (0x00044f0d) uni_indicator_pane_g3_ParamLimits

0xad37,	// (0x00044f23) uni_indicator_pane_g4_ParamLimits

0xad37,	// (0x00044f23) uni_indicator_pane_g4

0xad4b,	// (0x00044f37) uni_indicator_pane_g5_ParamLimits

0xad4b,	// (0x00044f37) uni_indicator_pane_g5

0xad5f,	// (0x00044f4b) uni_indicator_pane_g6_ParamLimits

0xad5f,	// (0x00044f4b) uni_indicator_pane_g6

0xf937,	// (0x00049b23) uni_indicator_pane_g_ParamLimits

0xd601,	// (0x000477ed) popup_tmo_note_window_ParamLimits

0xd601,	// (0x000477ed) popup_tmo_note_window

0x774f,	// (0x0004193b) fshwr2_bg_pane

0xec3c,	// (0x00048e28) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec3c,	// (0x00048e28) fshwr2_func_candi_cell_pane_g2

0x0001,

0x00ee,	// (0x0003a2da) fshwr2_func_candi_cell_pane_g_ParamLimits

0x00ee,	// (0x0003a2da) fshwr2_func_candi_cell_pane_g

0xc119,	// (0x00046305) bg_popup_window_pane_cp01

0xec75,	// (0x00048e61) bg_popup_window_pane_g1_cp01

0xec7e,	// (0x00048e6a) bg_popup_window_pane_cp22_ParamLimits

0xec7e,	// (0x00048e6a) bg_popup_window_pane_cp22

0xec8c,	// (0x00048e78) listscroll_tmo_link_pane_ParamLimits

0xec8c,	// (0x00048e78) listscroll_tmo_link_pane

0xeccc,	// (0x00048eb8) popup_tmo_note_window_g1_ParamLimits

0xeccc,	// (0x00048eb8) popup_tmo_note_window_g1

0xecd9,	// (0x00048ec5) tmo_note_info_pane_ParamLimits

0xecd9,	// (0x00048ec5) tmo_note_info_pane

0xecf3,	// (0x00048edf) list_tmo_note_info_pane_g1_ParamLimits

0xecf3,	// (0x00048edf) list_tmo_note_info_pane_g1

0xed0a,	// (0x00048ef6) list_tmo_note_info_pane_g2_ParamLimits

0xed0a,	// (0x00048ef6) list_tmo_note_info_pane_g2

0x0001,

0x00f3,	// (0x0003a2df) list_tmo_note_info_pane_g_ParamLimits

0x00f3,	// (0x0003a2df) list_tmo_note_info_pane_g

0xed26,	// (0x00048f12) list_tmo_note_info_text_pane_ParamLimits

0xed26,	// (0x00048f12) list_tmo_note_info_text_pane

0xeda7,	// (0x00048f93) list_tmo_link_pane

0xedb4,	// (0x00048fa0) scroll_pane_cp20

0xedc1,	// (0x00048fad) list_single_tmo_link_pane_ParamLimits

0xedc1,	// (0x00048fad) list_single_tmo_link_pane

0xedd1,	// (0x00048fbd) list_single_tmo_link_pane_t1

0xeddf,	// (0x00048fcb) list_tmo_note_info_text_pane_t1_ParamLimits

0xeddf,	// (0x00048fcb) list_tmo_note_info_text_pane_t1

0x8175,	// (0x00042361) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8175,	// (0x00042361) aid_size_touch_scroll_bar_cp01

0x5212,	// (0x0003f3fe) aid_size_touch_slider_marker

0x5cb9,	// (0x0003fea5) popup_settings_window_ParamLimits

0x5cb9,	// (0x0003fea5) popup_settings_window

0x53c5,	// (0x0003f5b1) popup_candi_list_indi_window

0x966b,	// (0x00043857) aid_touch_navi_pane_ParamLimits

0x6ef5,	// (0x000410e1) rs_clock_indi_pane

0x6efe,	// (0x000410ea) sctrl_sk_bottom_pane_ParamLimits

0x6f0f,	// (0x000410fb) sctrl_sk_top_pane_ParamLimits

0x6ff9,	// (0x000411e5) popup_fep_tooltip_window

0xe68e,	// (0x0004887a) aid_size_cell_widget_grid_ParamLimits

0xe6be,	// (0x000488aa) cell_ai5_widget_pane_g1_ParamLimits

0xe6be,	// (0x000488aa) cell_ai5_widget_pane_g1

0xe711,	// (0x000488fd) cell_ai5_widget_pane_g6_ParamLimits

0xe71d,	// (0x00048909) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0071,	// (0x0003a25d) cell_ai5_widget_pane_g_ParamLimits

0x0071,	// (0x0003a25d) cell_ai5_widget_pane_g

0xe84c,	// (0x00048a38) cell_ai5_widget_pane_t10_ParamLimits

0xe84c,	// (0x00048a38) cell_ai5_widget_pane_t10

0xe862,	// (0x00048a4e) grid_ai5_widget_pane_ParamLimits

0xe904,	// (0x00048af0) cell_contacts_ai5_widget_pane_ParamLimits

0xe904,	// (0x00048af0) cell_contacts_ai5_widget_pane

0xeaef,	// (0x00048cdb) popup_discreet_window_t3_ParamLimits

0xeaef,	// (0x00048cdb) popup_discreet_window_t3

0xeb82,	// (0x00048d6e) popup_fshwr2_char_preview_window_ParamLimits

0xeb82,	// (0x00048d6e) popup_fshwr2_char_preview_window

0xed44,	// (0x00048f30) tmo_note_info_pane_t1

0xed59,	// (0x00048f45) tmo_note_info_pane_t2

0xed6e,	// (0x00048f5a) tmo_note_info_pane_t3

0xed83,	// (0x00048f6f) tmo_note_info_pane_t4

0xed95,	// (0x00048f81) tmo_note_info_pane_t5

0x0004,

0x00f8,	// (0x0003a2e4) tmo_note_info_pane_t

0xeda7,	// (0x00048f93) list_tmo_link_pane_ParamLimits

0xedb4,	// (0x00048fa0) scroll_pane_cp20_ParamLimits

0x774f,	// (0x0004193b) bg_popup_fep_char_preview_window_cp01

0xedf8,	// (0x00048fe4) popup_fshwr2_char_preview_window_t1

0xee06,	// (0x00048ff2) popup_candi_list_indi_window_g1

0xee0f,	// (0x00048ffb) bg_cell_contacts_ai5_widget_pane

0xee1b,	// (0x00049007) cell_contacts_ai5_widget_pane_g1

0xee2f,	// (0x0004901b) cell_contacts_ai5_widget_pane_g2

0xee3e,	// (0x0004902a) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0103,	// (0x0003a2ef) cell_contacts_ai5_widget_pane_g

0xee51,	// (0x0004903d) cell_contacts_ai5_widget_pane_t1

0x80af,	// (0x0004229b) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeecb,	// (0x000490b7) settings_container_pane

0x8d14,	// (0x00042f00) listscroll_set_pane_copy1

0xb82c,	// (0x00045a18) scroll_pane_cp121_copy1

0xeed7,	// (0x000490c3) set_content_pane_copy1

0xeedf,	// (0x000490cb) aid_height_set_list_copy1_ParamLimits

0xeedf,	// (0x000490cb) aid_height_set_list_copy1

0xaf57,	// (0x00045143) aid_size_parent_copy1_ParamLimits

0xaf57,	// (0x00045143) aid_size_parent_copy1

0xeeeb,	// (0x000490d7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeeeb,	// (0x000490d7) button_value_adjust_pane_cp6_copy1

0x9072,	// (0x0004325e) list_highlight_pane_cp2_copy1_ParamLimits

0x9072,	// (0x0004325e) list_highlight_pane_cp2_copy1

0xeeff,	// (0x000490eb) list_set_pane_copy1_ParamLimits

0xeeff,	// (0x000490eb) list_set_pane_copy1

0xee66,	// (0x00049052) main_pane_set_t1_copy1_ParamLimits

0xee66,	// (0x00049052) main_pane_set_t1_copy1

0xeea0,	// (0x0004908c) main_pane_set_t2_copy1_ParamLimits

0xeea0,	// (0x0004908c) main_pane_set_t2_copy1

0xefac,	// (0x00049198) main_pane_set_t3_copy1

0xefba,	// (0x000491a6) main_pane_set_t4_copy1

0xeebf,	// (0x000490ab) set_content_pane_g1_copy1_ParamLimits

0xeebf,	// (0x000490ab) set_content_pane_g1_copy1

0xefc8,	// (0x000491b4) setting_code_pane_copy1

0xefd2,	// (0x000491be) setting_slider_graphic_pane_copy1

0xefd2,	// (0x000491be) setting_slider_pane_copy1

0xefd2,	// (0x000491be) setting_text_pane_copy1

0xefdc,	// (0x000491c8) setting_volume_pane_copy1

0xefe5,	// (0x000491d1) settings_code_pane_cp2_copy1

0xefed,	// (0x000491d9) settings_code_pane_cp_copy1_ParamLimits

0xefed,	// (0x000491d9) settings_code_pane_cp_copy1

0xf001,	// (0x000491ed) volume_set_pane_copy1

0xf009,	// (0x000491f5) volume_set_pane_g10_copy1

0xf011,	// (0x000491fd) volume_set_pane_g1_copy1

0xf019,	// (0x00049205) volume_set_pane_g2_copy1

0xf021,	// (0x0004920d) volume_set_pane_g3_copy1

0xf029,	// (0x00049215) volume_set_pane_g4_copy1

0xf031,	// (0x0004921d) volume_set_pane_g5_copy1

0xf039,	// (0x00049225) volume_set_pane_g6_copy1

0xf041,	// (0x0004922d) volume_set_pane_g7_copy1

0xf049,	// (0x00049235) volume_set_pane_g8_copy1

0xf051,	// (0x0004923d) volume_set_pane_g9_copy1

0x7843,	// (0x00041a2f) bg_set_opt_pane_cp_copy1_ParamLimits

0x7843,	// (0x00041a2f) bg_set_opt_pane_cp_copy1

0xf059,	// (0x00049245) setting_slider_pane_t1_copy1_ParamLimits

0xf059,	// (0x00049245) setting_slider_pane_t1_copy1

0xf077,	// (0x00049263) setting_slider_pane_t2_copy1_ParamLimits

0xf077,	// (0x00049263) setting_slider_pane_t2_copy1

0xf091,	// (0x0004927d) setting_slider_pane_t3_copy1_ParamLimits

0xf091,	// (0x0004927d) setting_slider_pane_t3_copy1

0xf0a9,	// (0x00049295) slider_set_pane_copy1_ParamLimits

0xf0a9,	// (0x00049295) slider_set_pane_copy1

0x8116,	// (0x00042302) set_opt_bg_pane_g1_copy2

0x811e,	// (0x0004230a) set_opt_bg_pane_g2_copy2

0xf0bf,	// (0x000492ab) set_opt_bg_pane_g3_copy2

0x812e,	// (0x0004231a) set_opt_bg_pane_g4_copy2

0x8136,	// (0x00042322) set_opt_bg_pane_g5_copy2

0x813e,	// (0x0004232a) set_opt_bg_pane_g6_copy2

0xf0c9,	// (0x000492b5) set_opt_bg_pane_g7_copy2

0xf0d1,	// (0x000492bd) set_opt_bg_pane_g8_copy2

0xf0db,	// (0x000492c7) set_opt_bg_pane_g9_copy2

0x76f9,	// (0x000418e5) aid_size_touch_slider_mark_copy1_ParamLimits

0x76f9,	// (0x000418e5) aid_size_touch_slider_mark_copy1

0xf0e5,	// (0x000492d1) slider_set_pane_g1_copy1

0x770d,	// (0x000418f9) slider_set_pane_g2_copy1

0x67e6,	// (0x000409d2) slider_set_pane_g3_copy1_ParamLimits

0x67e6,	// (0x000409d2) slider_set_pane_g3_copy1

0x67fa,	// (0x000409e6) slider_set_pane_g4_copy1_ParamLimits

0x67fa,	// (0x000409e6) slider_set_pane_g4_copy1

0x6812,	// (0x000409fe) slider_set_pane_g5_copy1_ParamLimits

0x6812,	// (0x000409fe) slider_set_pane_g5_copy1

0x67e6,	// (0x000409d2) slider_set_pane_g6_copy1_ParamLimits

0x67e6,	// (0x000409d2) slider_set_pane_g6_copy1

0x7715,	// (0x00041901) slider_set_pane_g7_copy1_ParamLimits

0x7715,	// (0x00041901) slider_set_pane_g7_copy1

0x7763,	// (0x0004194f) bg_set_opt_pane_cp2_copy1

0xf0ee,	// (0x000492da) setting_slider_graphic_pane_g1_copy1

0xf0f7,	// (0x000492e3) setting_slider_graphic_pane_t1_copy1

0xf107,	// (0x000492f3) setting_slider_graphic_pane_t2_copy1

0xf117,	// (0x00049303) slider_set_pane_cp_copy1

0xf127,	// (0x00049313) input_focus_pane_cp1_copy1

0xf130,	// (0x0004931c) list_set_text_pane_copy1

0xf138,	// (0x00049324) setting_text_pane_g1_copy1

0x4c0f,	// (0x0003edfb) set_text_pane_t1_copy1

0xf127,	// (0x00049313) input_focus_pane_cp2_copy1

0xf138,	// (0x00049324) setting_code_pane_g1_copy1

0xf141,	// (0x0004932d) setting_code_pane_t1_copy1

0xf14f,	// (0x0004933b) list_set_graphic_pane_copy1

0x7763,	// (0x0004194f) bg_set_opt_pane_cp4_copy1

0x8a26,	// (0x00042c12) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a26,	// (0x00042c12) list_set_graphic_pane_g1_copy1

0xf161,	// (0x0004934d) list_set_graphic_pane_g2_copy1

0x8a3e,	// (0x00042c2a) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a3e,	// (0x00042c2a) list_set_graphic_pane_t1_copy1

0xc119,	// (0x00046305) rs_clock_indi_pane_g1

0xf169,	// (0x00049355) rs_clock_indi_pane_t1

0xe9da,	// (0x00048bc6) rs_indi_pane

0xf177,	// (0x00049363) rs_indi_pane_g1

0xf180,	// (0x0004936c) rs_indi_pane_g2

0xf189,	// (0x00049375) rs_indi_pane_g3

0x0002,

0x010a,	// (0x0003a2f6) rs_indi_pane_g

0x8d14,	// (0x00042f00) bg_popup_preview_window_pane_cp03

0xf192,	// (0x0004937e) popup_fep_tooltip_window_t1

0xcda2,	// (0x00046f8e) popup_note2_window_g2_ParamLimits

0xcda2,	// (0x00046f8e) popup_note2_window_g2

0x0001,

0xfc62,	// (0x00049e4e) popup_note2_window_g_ParamLimits

0xfc62,	// (0x00049e4e) popup_note2_window_g

0xd29d,	// (0x00047489) bg_popup_sub_pane_cp11_ParamLimits

0xd2aa,	// (0x00047496) cell_ai3_links_pane_g1_ParamLimits

0xd2c1,	// (0x000474ad) cell_ai3_links_pane_t1

0x4c0f,	// (0x0003edfb) set_text_pane_t1_copy1_ParamLimits

0x8c25,	// (0x00042e11) cell_graphic_popup_pane_cp2_ParamLimits

0x8c25,	// (0x00042e11) cell_graphic_popup_pane_cp2

0xf1a0,	// (0x0004938c) cell_graphic_popup_pane_g1_cp2

0x7dfa,	// (0x00041fe6) cell_graphic_popup_pane_g2_cp2

0xf1a8,	// (0x00049394) cell_graphic_popup_pane_g3_cp2

0xf1b0,	// (0x0004939c) cell_graphic_popup_pane_t2_cp2

0x7e0b,	// (0x00041ff7) grid_highlight_pane_cp3_cp2

0x8459,	// (0x00042645) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80af,	// (0x0004229b) main_tmo_pane_ParamLimits

0xd5f5,	// (0x000477e1) popup_tmo_big_image_note_window

0xe6ae,	// (0x0004889a) cell_ai5_widget_list_pane

0xe6b6,	// (0x000488a2) cell_ai5_widget_lrg_icon_pane

0xed44,	// (0x00048f30) tmo_note_info_pane_t1_ParamLimits

0xed59,	// (0x00048f45) tmo_note_info_pane_t2_ParamLimits

0xed6e,	// (0x00048f5a) tmo_note_info_pane_t3_ParamLimits

0xed83,	// (0x00048f6f) tmo_note_info_pane_t4_ParamLimits

0xed95,	// (0x00048f81) tmo_note_info_pane_t5_ParamLimits

0x00f8,	// (0x0003a2e4) tmo_note_info_pane_t_ParamLimits

0xeecb,	// (0x000490b7) settings_container_pane_ParamLimits

0xf11f,	// (0x0004930b) indicator_popup_pane_cp5

0xf11f,	// (0x0004930b) indicator_popup_pane_cp6

0xf14f,	// (0x0004933b) list_set_graphic_pane_copy1_ParamLimits

0x774f,	// (0x0004193b) bg_popup_window_pane_cp23

0xf1be,	// (0x000493aa) popup_tmo_big_image_note_window_g1

0xf1c8,	// (0x000493b4) popup_tmo_big_image_note_window_t1

0xf1d8,	// (0x000493c4) popup_tmo_big_image_note_window_t2

0xf1e8,	// (0x000493d4) popup_tmo_big_image_note_window_t3

0x0002,

0x0111,	// (0x0003a2fd) popup_tmo_big_image_note_window_t

0xf1f8,	// (0x000493e4) cell_ai5_widget_lrg_icon_pane_g1

0xf200,	// (0x000493ec) cell_ai5_widget_lrg_icon_pane_t1

0xf20e,	// (0x000493fa) cell_ai5_widget_list_row_pane_ParamLimits

0xf20e,	// (0x000493fa) cell_ai5_widget_list_row_pane

0xf227,	// (0x00049413) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf227,	// (0x00049413) cell_ai5_widget_list_row_pane_g1

0xf234,	// (0x00049420) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf234,	// (0x00049420) cell_ai5_widget_list_row_pane_t1

0xf24c,	// (0x00049438) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24c,	// (0x00049438) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0118,	// (0x0003a304) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0118,	// (0x0003a304) cell_ai5_widget_list_row_pane_t

0x774f,	// (0x0004193b) main_fep_vtchi_ss_pane

0xf25e,	// (0x0004944a) popup_fep_char_pre_window

0xf266,	// (0x00049452) popup_fep_ituss_window

0xf287,	// (0x00049473) popup_fep_vkbss_window

0xf2a6,	// (0x00049492) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x00049492) grid_vkbss_keypad_pane

0xf2b6,	// (0x000494a2) ituss_keypad_pane

0xf2cf,	// (0x000494bb) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x000494bb) aid_vkbss_key_offset

0xf2db,	// (0x000494c7) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x000494c7) cell_vkbss_key_pane

0xf2f1,	// (0x000494dd) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x000494dd) bg_cell_vkbss_key_g1

0xf2fd,	// (0x000494e9) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x000494e9) cell_vkbss_key_3p_pane

0xf317,	// (0x00049503) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x00049503) cell_vkbss_key_g1

0xf331,	// (0x0004951d) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x0004951d) cell_vkbss_key_t1

0xf35c,	// (0x00049548) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x00049548) cell_ituss_key_pane

0xf36c,	// (0x00049558) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x00049558) bg_cell_ituss_key_g1

0xf378,	// (0x00049564) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x00049564) cell_ituss_key_pane_g1

0xf384,	// (0x00049570) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x00049570) cell_ituss_key_pane_g2

0x0001,

0x011d,	// (0x0003a309) cell_ituss_key_pane_g_ParamLimits

0x011d,	// (0x0003a309) cell_ituss_key_pane_g

0xf39d,	// (0x00049589) cell_ituss_key_t1_ParamLimits

0xf39d,	// (0x00049589) cell_ituss_key_t1

0xf3cb,	// (0x000495b7) cell_ituss_key_t2_ParamLimits

0xf3cb,	// (0x000495b7) cell_ituss_key_t2

0xf3fc,	// (0x000495e8) cell_ituss_key_t3_ParamLimits

0xf3fc,	// (0x000495e8) cell_ituss_key_t3

0xf42d,	// (0x00049619) cell_ituss_key_t4_ParamLimits

0xf42d,	// (0x00049619) cell_ituss_key_t4

0x0003,

0x0122,	// (0x0003a30e) cell_ituss_key_t_ParamLimits

0x0122,	// (0x0003a30e) cell_ituss_key_t

0xf45e,	// (0x0004964a) cell_vkbss_key_3p_pane_g1

0xf466,	// (0x00049652) cell_vkbss_key_3p_pane_g2

0xf46e,	// (0x0004965a) cell_vkbss_key_3p_pane_g3

0x0002,

0x012b,	// (0x0003a317) cell_vkbss_key_3p_pane_g

0x774f,	// (0x0004193b) bg_popup_fep_char_preview_window_cp02

0xf476,	// (0x00049662) popup_fep_char_pre_window_t1

0xe684,	// (0x00048870) main_ai5_sk_pane

0xee0f,	// (0x00048ffb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee1b,	// (0x00049007) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee2f,	// (0x0004901b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee3e,	// (0x0004902a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0103,	// (0x0003a2ef) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee51,	// (0x0004903d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80af,	// (0x0004229b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf485,	// (0x00049671) main_ai5_sk_pane_g1

0xa00e,	// (0x000441fa) popup_query_code_window_g1

0xf27c,	// (0x00049468) popup_fep_vkb_icf_pane

0xf290,	// (0x0004947c) popup_fep_vtchi_icf_pane

0x80af,	// (0x0004229b) bg_icf_pane

0xf49d,	// (0x00049689) list_vkb_icf_pane

0x80af,	// (0x0004229b) bg_icf_pane_cp01

0xd5b4,	// (0x000477a0) vtchi_icf_list_pane

0xf4bd,	// (0x000496a9) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x000496a9) list_vkb_icf_pane_t1

0xf4d4,	// (0x000496c0) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x000496c0) vtchi_icf_list_pane_t1

0xf266,	// (0x00049452) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x0004947c) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x000494a2) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x000494b2) ituss_sks_pane

0x80af,	// (0x0004229b) bg_icf_pane_ParamLimits

0xf48e,	// (0x0004967a) icf_edit_indi_pane_ParamLimits

0xf48e,	// (0x0004967a) icf_edit_indi_pane

0xf49d,	// (0x00049689) list_vkb_icf_pane_ParamLimits

0x80af,	// (0x0004229b) bg_icf_pane_cp01_ParamLimits

0xf4a9,	// (0x00049695) icf_edit_indi_pane_cp01_ParamLimits

0xf4a9,	// (0x00049695) icf_edit_indi_pane_cp01

0xf4b5,	// (0x000496a1) vtchi_query_pane

0xc3ab,	// (0x00046597) icf_edit_indi_pane_g1_ParamLimits

0xc3ab,	// (0x00046597) icf_edit_indi_pane_g1

0xf4f0,	// (0x000496dc) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x000496dc) icf_edit_indi_pane_g2

0x0001,

0xfe2a,	// (0x0004a016) icf_edit_indi_pane_g_ParamLimits

0xfe2a,	// (0x0004a016) icf_edit_indi_pane_g

0xf4fc,	// (0x000496e8) icf_edit_indi_pane_t1

0xf50a,	// (0x000496f6) bg_input_focus_pane_cp042

0x7fde,	// (0x000421ca) vtchi_button_pane

0xf513,	// (0x000496ff) vtchi_query_pane_t1

0xf521,	// (0x0004970d) vtchi_query_pane_t2

0xf52f,	// (0x0004971b) vtchi_query_pane_t3

0x0002,

0x0132,	// (0x0003a31e) vtchi_query_pane_t

0x774f,	// (0x0004193b) bg_button_pane_cp13

0xf53d,	// (0x00049729) vtchi_button_pane_g1

0xdafc,	// (0x00047ce8) ituss_sks_pane_g1

0xf545,	// (0x00049731) ituss_sks_pane_g2

0x0001,

0x0139,	// (0x0003a325) ituss_sks_pane_g

0xf54e,	// (0x0004973a) ituss_sks_pane_t1

0xf55c,	// (0x00049748) ituss_sks_pane_t2

0x0001,

0x013e,	// (0x0003a32a) ituss_sks_pane_t

0xbb7b,	// (0x00045d67) indicator_nsta_pane_cp_g1

0xbb84,	// (0x00045d70) indicator_nsta_pane_cp_g2

0xbb8c,	// (0x00045d78) indicator_nsta_pane_cp_g3

0xbb94,	// (0x00045d80) indicator_nsta_pane_cp_g4

0xbb9c,	// (0x00045d88) indicator_nsta_pane_cp_g5

0xbba4,	// (0x00045d90) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x00049c98) indicator_nsta_pane_cp_g

0xe298,	// (0x00048484) cell_graphic2_pane_t2_ParamLimits

0xe298,	// (0x00048484) cell_graphic2_pane_t2

0x0001,

0xfdb9,	// (0x00049fa5) cell_graphic2_pane_t_ParamLimits

0xfdb9,	// (0x00049fa5) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
