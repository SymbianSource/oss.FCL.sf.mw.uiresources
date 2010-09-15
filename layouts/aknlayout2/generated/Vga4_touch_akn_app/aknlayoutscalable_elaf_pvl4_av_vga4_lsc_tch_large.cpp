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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00047b2a };

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
0x9fb5,	// (0x00051adf) Screen

0x9fc9,	// (0x00051af3) application_window_ParamLimits

0x9fc9,	// (0x00051af3) application_window

0x9fe3,	// (0x00051b0d) screen_g1

0xa015,	// (0x00051b3f) area_bottom_pane_ParamLimits

0xa015,	// (0x00051b3f) area_bottom_pane

0xf2c4,	// (0x00056dee) area_top_pane_ParamLimits

0xf2c4,	// (0x00056dee) area_top_pane

0xf358,	// (0x00056e82) main_pane_ParamLimits

0xf358,	// (0x00056e82) main_pane

0xa0d3,	// (0x00051bfd) misc_graphics

0xc60f,	// (0x00054139) battery_pane_ParamLimits

0xc60f,	// (0x00054139) battery_pane

0x3a69,	// (0x0004b593) bg_status_flat_pane_g8

0x3a71,	// (0x0004b59b) bg_status_flat_pane_g9

0x2e69,	// (0x0004a993) context_pane_ParamLimits

0x2e69,	// (0x0004a993) context_pane

0xc786,	// (0x000542b0) navi_pane_ParamLimits

0xc786,	// (0x000542b0) navi_pane

0xc810,	// (0x0005433a) signal_pane_ParamLimits

0xc810,	// (0x0005433a) signal_pane

0x0008,

0xf854,	// (0x0005737e) bg_status_flat_pane_g

0xc8a0,	// (0x000543ca) status_pane_g1_ParamLimits

0xc8a0,	// (0x000543ca) status_pane_g1

0xc8b6,	// (0x000543e0) status_pane_g2_ParamLimits

0xc8b6,	// (0x000543e0) status_pane_g2

0x30a2,	// (0x0004abcc) status_pane_g3_ParamLimits

0x30a2,	// (0x0004abcc) status_pane_g3

0x0004,

0xf780,	// (0x000572aa) status_pane_g_ParamLimits

0xf780,	// (0x000572aa) status_pane_g

0xc8c2,	// (0x000543ec) title_pane_ParamLimits

0xc8c2,	// (0x000543ec) title_pane

0xc929,	// (0x00054453) uni_indicator_pane_ParamLimits

0xc929,	// (0x00054453) uni_indicator_pane

0x2cd3,	// (0x0004a7fd) bg_list_pane_ParamLimits

0x2cd3,	// (0x0004a7fd) bg_list_pane

0xb460,	// (0x00052f8a) find_pane

0x329d,	// (0x0004adc7) listscroll_app_pane_ParamLimits

0x329d,	// (0x0004adc7) listscroll_app_pane

0x2cff,	// (0x0004a829) listscroll_form_pane

0xb468,	// (0x00052f92) listscroll_gen_pane_ParamLimits

0xb468,	// (0x00052f92) listscroll_gen_pane

0x0932,	// (0x0004845c) listscroll_set_pane

0x4606,	// (0x0004c130) main_idle_act_pane

0x29cc,	// (0x0004a4f6) main_idle_trad_pane

0x29cc,	// (0x0004a4f6) main_list_empty_pane

0x2cf3,	// (0x0004a81d) main_midp_pane

0x2d19,	// (0x0004a843) main_pane_g1_ParamLimits

0x2d19,	// (0x0004a843) main_pane_g1

0xb47c,	// (0x00052fa6) popup_ai_message_window_ParamLimits

0xb47c,	// (0x00052fa6) popup_ai_message_window

0xb51c,	// (0x00053046) popup_fep_china_uni_window_ParamLimits

0xb51c,	// (0x00053046) popup_fep_china_uni_window

0x0a4e,	// (0x00048578) popup_fep_japan_candidate_window_ParamLimits

0x0a4e,	// (0x00048578) popup_fep_japan_candidate_window

0x0a78,	// (0x000485a2) popup_fep_japan_predictive_window_ParamLimits

0x0a78,	// (0x000485a2) popup_fep_japan_predictive_window

0xb57c,	// (0x000530a6) popup_find_window

0xb599,	// (0x000530c3) popup_grid_graphic_window_ParamLimits

0xb599,	// (0x000530c3) popup_grid_graphic_window

0x0aeb,	// (0x00048615) popup_large_graphic_colour_window

0xb643,	// (0x0005316d) popup_menu_window_ParamLimits

0xb643,	// (0x0005316d) popup_menu_window

0xb833,	// (0x0005335d) popup_note_image_window

0xb7f3,	// (0x0005331d) popup_note_wait_window_ParamLimits

0xb7f3,	// (0x0005331d) popup_note_wait_window

0xb84b,	// (0x00053375) popup_note_window_ParamLimits

0xb84b,	// (0x00053375) popup_note_window

0xb8f9,	// (0x00053423) popup_query_code_window_ParamLimits

0xb8f9,	// (0x00053423) popup_query_code_window

0x0d57,	// (0x00048881) popup_query_data_code_window_ParamLimits

0x0d57,	// (0x00048881) popup_query_data_code_window

0xb939,	// (0x00053463) popup_query_data_window_ParamLimits

0xb939,	// (0x00053463) popup_query_data_window

0xb9cd,	// (0x000534f7) popup_query_sat_info_window_ParamLimits

0xb9cd,	// (0x000534f7) popup_query_sat_info_window

0xba78,	// (0x000535a2) popup_snote_single_graphic_window_ParamLimits

0xba78,	// (0x000535a2) popup_snote_single_graphic_window

0xba78,	// (0x000535a2) popup_snote_single_text_window_ParamLimits

0xba78,	// (0x000535a2) popup_snote_single_text_window

0x0df2,	// (0x0004891c) popup_sub_window_general

0x0f38,	// (0x00048a62) popup_window_general_ParamLimits

0x0f38,	// (0x00048a62) popup_window_general

0x2d27,	// (0x0004a851) power_save_pane

0x07cd,	// (0x000482f7) control_pane_g1_ParamLimits

0x07cd,	// (0x000482f7) control_pane_g1

0x07f0,	// (0x0004831a) control_pane_g2_ParamLimits

0x07f0,	// (0x0004831a) control_pane_g2

0x2c96,	// (0x0004a7c0) control_pane_g3_ParamLimits

0x2c96,	// (0x0004a7c0) control_pane_g3

0x0007,

0xf768,	// (0x00057292) control_pane_g_ParamLimits

0xf768,	// (0x00057292) control_pane_g

0xb377,	// (0x00052ea1) control_pane_t1_ParamLimits

0xb377,	// (0x00052ea1) control_pane_t1

0xb3c7,	// (0x00052ef1) control_pane_t2_ParamLimits

0xb3c7,	// (0x00052ef1) control_pane_t2

0x0002,

0xf779,	// (0x000572a3) control_pane_t_ParamLimits

0xf779,	// (0x000572a3) control_pane_t

0x2bbb,	// (0x0004a6e5) navi_navi_volume_pane_cp1

0x2bc3,	// (0x0004a6ed) status_small_icon_pane

0x2bcb,	// (0x0004a6f5) status_small_pane_g1_ParamLimits

0x2bcb,	// (0x0004a6f5) status_small_pane_g1

0x2bff,	// (0x0004a729) status_small_pane_g2_ParamLimits

0x2bff,	// (0x0004a729) status_small_pane_g2

0x2c0b,	// (0x0004a735) status_small_pane_g3_ParamLimits

0x2c0b,	// (0x0004a735) status_small_pane_g3

0xb329,	// (0x00052e53) status_small_pane_g4_ParamLimits

0xb329,	// (0x00052e53) status_small_pane_g4

0xb337,	// (0x00052e61) status_small_pane_g5_ParamLimits

0xb337,	// (0x00052e61) status_small_pane_g5

0x2c31,	// (0x0004a75b) status_small_pane_g6_ParamLimits

0x2c31,	// (0x0004a75b) status_small_pane_g6

0x0007,

0xf757,	// (0x00057281) status_small_pane_g_ParamLimits

0xf757,	// (0x00057281) status_small_pane_g

0x2c60,	// (0x0004a78a) status_small_pane_t1

0xb34d,	// (0x00052e77) status_small_wait_pane_ParamLimits

0xb34d,	// (0x00052e77) status_small_wait_pane

0xb183,	// (0x00052cad) aid_levels_signal_ParamLimits

0xb183,	// (0x00052cad) aid_levels_signal

0xb19b,	// (0x00052cc5) signal_pane_g1_ParamLimits

0xb19b,	// (0x00052cc5) signal_pane_g1

0xb1b6,	// (0x00052ce0) signal_pane_g2_ParamLimits

0xb1b6,	// (0x00052ce0) signal_pane_g2

0x0003,

0xf6e8,	// (0x00057212) signal_pane_g_ParamLimits

0xf6e8,	// (0x00057212) signal_pane_g

0xe4d8,	// (0x00056002) context_pane_g1

0xa20b,	// (0x00051d35) title_pane_g1

0xa25a,	// (0x00051d84) title_pane_t1

0xa2e6,	// (0x00051e10) title_pane_t2

0xa30c,	// (0x00051e36) title_pane_t3

0x0002,

0xf532,	// (0x0005705c) title_pane_t

0xc951,	// (0x0005447b) aid_levels_battery_ParamLimits

0xc951,	// (0x0005447b) aid_levels_battery

0xc96d,	// (0x00054497) battery_pane_g1_ParamLimits

0xc96d,	// (0x00054497) battery_pane_g1

0xc98a,	// (0x000544b4) battery_pane_g2_ParamLimits

0xc98a,	// (0x000544b4) battery_pane_g2

0x0001,

0xf78b,	// (0x000572b5) battery_pane_g_ParamLimits

0xf78b,	// (0x000572b5) battery_pane_g

0xcbbc,	// (0x000546e6) uni_indicator_pane_g1

0xcbd2,	// (0x000546fc) uni_indicator_pane_g2

0xcbe8,	// (0x00054712) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00057426) uni_indicator_pane_g

0x282f,	// (0x0004a359) navi_icon_pane_ParamLimits

0x282f,	// (0x0004a359) navi_icon_pane

0x2782,	// (0x0004a2ac) navi_midp_pane

0x284b,	// (0x0004a375) navi_navi_pane

0x2855,	// (0x0004a37f) navi_text_pane_ParamLimits

0x2855,	// (0x0004a37f) navi_text_pane

0x9fe3,	// (0x00051b0d) status_small_wait_pane_g1

0xa811,	// (0x0005233b) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00057421) status_small_wait_pane_g

0xcb5b,	// (0x00054685) navi_navi_icon_text_pane

0xcb63,	// (0x0005468d) navi_navi_pane_g1_ParamLimits

0xcb63,	// (0x0005468d) navi_navi_pane_g1

0xcb75,	// (0x0005469f) navi_navi_pane_g2_ParamLimits

0xcb75,	// (0x0005469f) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x000573ef) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x000573ef) navi_navi_pane_g

0x40f2,	// (0x0004bc1c) navi_navi_tabs_pane

0xcb87,	// (0x000546b1) navi_navi_text_pane

0xcb5b,	// (0x00054685) navi_navi_volume_pane

0xcb49,	// (0x00054673) navi_text_pane_t1

0xcb3d,	// (0x00054667) navi_icon_pane_g1

0x3fe9,	// (0x0004bb13) navi_navi_text_pane_t1

0xbd7b,	// (0x000538a5) navi_navi_volume_pane_g1

0xbd83,	// (0x000538ad) volume_small_pane

0xca99,	// (0x000545c3) navi_navi_icon_text_pane_g1

0xcaa1,	// (0x000545cb) navi_navi_icon_text_pane_t1

0x284b,	// (0x0004a375) navi_tabs_2_long_pane

0x284b,	// (0x0004a375) navi_tabs_2_pane

0x284b,	// (0x0004a375) navi_tabs_3_long_pane

0x284b,	// (0x0004a375) navi_tabs_3_pane

0x284b,	// (0x0004a375) navi_tabs_4_pane

0xbd5b,	// (0x00053885) tabs_2_active_pane_ParamLimits

0xbd5b,	// (0x00053885) tabs_2_active_pane

0xbd6b,	// (0x00053895) tabs_2_passive_pane_ParamLimits

0xbd6b,	// (0x00053895) tabs_2_passive_pane

0xbd29,	// (0x00053853) tabs_3_active_pane_ParamLimits

0xbd29,	// (0x00053853) tabs_3_active_pane

0xbd39,	// (0x00053863) tabs_3_passive_pane_ParamLimits

0xbd39,	// (0x00053863) tabs_3_passive_pane

0xbd4a,	// (0x00053874) tabs_3_passive_pane_cp_ParamLimits

0xbd4a,	// (0x00053874) tabs_3_passive_pane_cp

0xbce5,	// (0x0005380f) tabs_4_active_pane_ParamLimits

0xbce5,	// (0x0005380f) tabs_4_active_pane

0xbcf6,	// (0x00053820) tabs_4_passive_pane_ParamLimits

0xbcf6,	// (0x00053820) tabs_4_passive_pane

0xbd07,	// (0x00053831) tabs_4_passive_pane_cp_ParamLimits

0xbd07,	// (0x00053831) tabs_4_passive_pane_cp

0xbd18,	// (0x00053842) tabs_4_passive_pane_cp2_ParamLimits

0xbd18,	// (0x00053842) tabs_4_passive_pane_cp2

0xbcc1,	// (0x000537eb) tabs_2_long_active_pane_ParamLimits

0xbcc1,	// (0x000537eb) tabs_2_long_active_pane

0xbcd3,	// (0x000537fd) tabs_2_long_passive_pane_ParamLimits

0xbcd3,	// (0x000537fd) tabs_2_long_passive_pane

0xbc88,	// (0x000537b2) tabs_3_long_active_pane_ParamLimits

0xbc88,	// (0x000537b2) tabs_3_long_active_pane

0xbc9b,	// (0x000537c5) tabs_3_long_passive_pane_ParamLimits

0xbc9b,	// (0x000537c5) tabs_3_long_passive_pane

0xbcae,	// (0x000537d8) tabs_3_long_passive_pane_cp_ParamLimits

0xbcae,	// (0x000537d8) tabs_3_long_passive_pane_cp

0x10b6,	// (0x00048be0) volume_small_pane_g1

0xbc37,	// (0x00053761) volume_small_pane_g2

0xbc40,	// (0x0005376a) volume_small_pane_g3

0xbc49,	// (0x00053773) volume_small_pane_g4

0xbc52,	// (0x0005377c) volume_small_pane_g5

0xbc5b,	// (0x00053785) volume_small_pane_g6

0xbc64,	// (0x0005378e) volume_small_pane_g7

0xbc6d,	// (0x00053797) volume_small_pane_g8

0xbc76,	// (0x000537a0) volume_small_pane_g9

0xbc7f,	// (0x000537a9) volume_small_pane_g10

0x0009,

0xf891,	// (0x000573bb) volume_small_pane_g

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp2_ParamLimits

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp2

0xa32c,	// (0x00051e56) tabs_3_active_pane_g1

0xa334,	// (0x00051e5e) tabs_3_active_pane_t1

0xa31e,	// (0x00051e48) bg_passive_tab_pane_cp2_ParamLimits

0xa31e,	// (0x00051e48) bg_passive_tab_pane_cp2

0xa32c,	// (0x00051e56) tabs_3_passive_pane_g1

0xa334,	// (0x00051e5e) tabs_3_passive_pane_t1

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp3_ParamLimits

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp3

0xa346,	// (0x00051e70) tabs_4_active_pane_g1

0xa34e,	// (0x00051e78) tabs_4_active_pane_t1

0xa31e,	// (0x00051e48) bg_passive_tab_pane_cp3_ParamLimits

0xa31e,	// (0x00051e48) bg_passive_tab_pane_cp3

0xa346,	// (0x00051e70) tabs_4_1_passive_pane_g1

0xa34e,	// (0x00051e78) tabs_4_1_passive_pane_t1

0x2cf3,	// (0x0004a81d) list_highlight_pane_cp2

0xcc7b,	// (0x000547a5) list_set_pane_ParamLimits

0xcc7b,	// (0x000547a5) list_set_pane

0xcd3d,	// (0x00054867) main_pane_set_t1_ParamLimits

0xcd3d,	// (0x00054867) main_pane_set_t1

0xcd5d,	// (0x00054887) main_pane_set_t2_ParamLimits

0xcd5d,	// (0x00054887) main_pane_set_t2

0xcd71,	// (0x0005489b) main_pane_set_t3_ParamLimits

0xcd71,	// (0x0005489b) main_pane_set_t3

0xcd85,	// (0x000548af) main_pane_set_t4_ParamLimits

0xcd85,	// (0x000548af) main_pane_set_t4

0x0003,

0xf961,	// (0x0005748b) main_pane_set_t_ParamLimits

0xf961,	// (0x0005748b) main_pane_set_t

0xcd99,	// (0x000548c3) setting_code_pane

0x4754,	// (0x0004c27e) setting_slider_graphic_pane

0x4754,	// (0x0004c27e) setting_slider_pane

0x4754,	// (0x0004c27e) setting_text_pane

0x4754,	// (0x0004c27e) setting_volume_pane

0xf467,	// (0x00056f91) volume_set_pane

0xa360,	// (0x00051e8a) bg_set_opt_pane_cp

0xf471,	// (0x00056f9b) setting_slider_pane_t1

0xf48a,	// (0x00056fb4) setting_slider_pane_t2

0xf4a4,	// (0x00056fce) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00057063) setting_slider_pane_t

0xf4bc,	// (0x00056fe6) slider_set_pane

0xa0d3,	// (0x00051bfd) bg_set_opt_pane_cp2

0xa36e,	// (0x00051e98) setting_slider_graphic_pane_g1

0xf4d2,	// (0x00056ffc) setting_slider_graphic_pane_t1

0xf4e2,	// (0x0005700c) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005706a) setting_slider_graphic_pane_t

0xf521,	// (0x0005704b) slider_set_pane_cp

0xa0d3,	// (0x00051bfd) input_focus_pane_cp1

0x45ed,	// (0x0004c117) list_set_text_pane

0x9fe3,	// (0x00051b0d) setting_text_pane_g1

0xa0d3,	// (0x00051bfd) input_focus_pane_cp2

0x9fe3,	// (0x00051b0d) setting_code_pane_g1

0xa377,	// (0x00051ea1) setting_code_pane_t1

0xe2bb,	// (0x00055de5) set_text_pane_t1_ParamLimits

0xe2bb,	// (0x00055de5) set_text_pane_t1

0xad08,	// (0x00052832) set_opt_bg_pane_g1

0xad10,	// (0x0005283a) set_opt_bg_pane_g2

0x45c5,	// (0x0004c0ef) set_opt_bg_pane_g3

0xad20,	// (0x0005284a) set_opt_bg_pane_g4

0xad28,	// (0x00052852) set_opt_bg_pane_g5

0xad30,	// (0x0005285a) set_opt_bg_pane_g6

0x45cf,	// (0x0004c0f9) set_opt_bg_pane_g7

0x45d9,	// (0x0004c103) set_opt_bg_pane_g8

0x45e3,	// (0x0004c10d) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x00057478) set_opt_bg_pane_g

0x45b8,	// (0x0004c0e2) slider_set_pane_g1

0x129a,	// (0x00048dc4) slider_set_pane_g2

0x0006,

0xf93f,	// (0x00057469) slider_set_pane_g

0x1222,	// (0x00048d4c) volume_set_pane_g1

0x122c,	// (0x00048d56) volume_set_pane_g2

0x1236,	// (0x00048d60) volume_set_pane_g3

0x1240,	// (0x00048d6a) volume_set_pane_g4

0x124a,	// (0x00048d74) volume_set_pane_g5

0x1254,	// (0x00048d7e) volume_set_pane_g6

0x125e,	// (0x00048d88) volume_set_pane_g7

0x1268,	// (0x00048d92) volume_set_pane_g8

0x1272,	// (0x00048d9c) volume_set_pane_g9

0x127c,	// (0x00048da6) volume_set_pane_g10

0x0009,

0xf917,	// (0x00057441) volume_set_pane_g

0xa385,	// (0x00051eaf) indicator_pane_ParamLimits

0xa385,	// (0x00051eaf) indicator_pane

0xa3b1,	// (0x00051edb) main_idle_pane_g2_ParamLimits

0xa3b1,	// (0x00051edb) main_idle_pane_g2

0xa3e9,	// (0x00051f13) main_pane_idle_g1_ParamLimits

0xa3e9,	// (0x00051f13) main_pane_idle_g1

0xa413,	// (0x00051f3d) popup_clock_digital_analogue_window_ParamLimits

0xa413,	// (0x00051f3d) popup_clock_digital_analogue_window

0xa42a,	// (0x00051f54) soft_indicator_pane_ParamLimits

0xa42a,	// (0x00051f54) soft_indicator_pane

0xa446,	// (0x00051f70) wallpaper_pane_ParamLimits

0xa446,	// (0x00051f70) wallpaper_pane

0x9fe3,	// (0x00051b0d) wallpaper_pane_g1

0xa460,	// (0x00051f8a) indicator_pane_g1_ParamLimits

0xa460,	// (0x00051f8a) indicator_pane_g1

0x4a17,	// (0x0004c541) navi_navi_icon_text_pane_srt_g1

0xa488,	// (0x00051fb2) soft_indicator_pane_t1

0xa4a2,	// (0x00051fcc) aid_ps_area_pane

0xa4b3,	// (0x00051fdd) aid_ps_clock_pane

0xa4c1,	// (0x00051feb) aid_ps_indicator_pane

0xa4cd,	// (0x00051ff7) indicator_ps_pane_ParamLimits

0xa4cd,	// (0x00051ff7) indicator_ps_pane

0xa4dc,	// (0x00052006) power_save_pane_g1_ParamLimits

0xa4dc,	// (0x00052006) power_save_pane_g1

0xa4e8,	// (0x00052012) power_save_pane_g2_ParamLimits

0xa4e8,	// (0x00052012) power_save_pane_g2

0xf2a4,	// (0x00056dce) aid_navinavi_width_pane

0xa4a2,	// (0x00051fcc) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005706f) power_save_pane_g_ParamLimits

0xf545,	// (0x0005706f) power_save_pane_g

0xa4f6,	// (0x00052020) power_save_pane_t1_ParamLimits

0xa4f6,	// (0x00052020) power_save_pane_t1

0xa4b3,	// (0x00051fdd) aid_ps_clock_pane_ParamLimits

0xa4c1,	// (0x00051feb) aid_ps_indicator_pane_ParamLimits

0xa508,	// (0x00052032) power_save_pane_t4_ParamLimits

0xa508,	// (0x00052032) power_save_pane_t4

0x0001,

0xf54a,	// (0x00057074) power_save_pane_t_ParamLimits

0xf54a,	// (0x00057074) power_save_pane_t

0xa532,	// (0x0005205c) power_save_t3_ParamLimits

0xa532,	// (0x0005205c) power_save_t3

0xa51d,	// (0x00052047) power_save_t2_ParamLimits

0xa51d,	// (0x00052047) power_save_t2

0xa547,	// (0x00052071) indicator_ps_pane_g1

0xa550,	// (0x0005207a) ai_gene_pane_ParamLimits

0xa550,	// (0x0005207a) ai_gene_pane

0xa567,	// (0x00052091) ai_links_pane_ParamLimits

0xa567,	// (0x00052091) ai_links_pane

0xa57f,	// (0x000520a9) indicator_pane_cp1_ParamLimits

0xa57f,	// (0x000520a9) indicator_pane_cp1

0xa58e,	// (0x000520b8) main_pane_idle_g1_cp_ParamLimits

0xa58e,	// (0x000520b8) main_pane_idle_g1_cp

0xa5a6,	// (0x000520d0) popup_ai_links_title_window

0xa5af,	// (0x000520d9) soft_indicator_pane_cp1_ParamLimits

0xa5af,	// (0x000520d9) soft_indicator_pane_cp1

0x43a1,	// (0x0004becb) ai_links_pane_g1

0x43aa,	// (0x0004bed4) grid_ai_links_pane

0xcbb3,	// (0x000546dd) ai_gene_pane_1

0x438f,	// (0x0004beb9) ai_gene_pane_2

0x4398,	// (0x0004bec2) list_highlight_pane_cp4

0xcb8f,	// (0x000546b9) cell_ai_link_pane_ParamLimits

0xcb8f,	// (0x000546b9) cell_ai_link_pane

0x435e,	// (0x0004be88) cell_ai_link_pane_g1

0xa811,	// (0x0005233b) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0005741c) cell_ai_link_pane_g

0xa0d3,	// (0x00051bfd) grid_highlight_cp2

0xa0d3,	// (0x00051bfd) bg_popup_sub_pane_cp1

0xa5d1,	// (0x000520fb) popup_ai_links_title_window_t1

0x42aa,	// (0x0004bdd4) ai_gene_pane_1_g1_ParamLimits

0x42aa,	// (0x0004bdd4) ai_gene_pane_1_g1

0x42b6,	// (0x0004bde0) ai_gene_pane_1_g2_ParamLimits

0x42b6,	// (0x0004bde0) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00057412) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00057412) ai_gene_pane_1_g

0x42c3,	// (0x0004bded) ai_gene_pane_1_t1_ParamLimits

0x42c3,	// (0x0004bded) ai_gene_pane_1_t1

0x42f7,	// (0x0004be21) grid_ai_soft_ind_pane

0x4295,	// (0x0004bdbf) ai_gene_pane_2_t1_ParamLimits

0x4295,	// (0x0004bdbf) ai_gene_pane_2_t1

0xa5e0,	// (0x0005210a) main_pane_empty_t1_ParamLimits

0xa5e0,	// (0x0005210a) main_pane_empty_t1

0xa5f8,	// (0x00052122) main_pane_empty_t2_ParamLimits

0xa5f8,	// (0x00052122) main_pane_empty_t2

0xa60d,	// (0x00052137) main_pane_empty_t3_ParamLimits

0xa60d,	// (0x00052137) main_pane_empty_t3

0xa61f,	// (0x00052149) main_pane_empty_t4_ParamLimits

0xa61f,	// (0x00052149) main_pane_empty_t4

0xa631,	// (0x0005215b) main_pane_empty_t5_ParamLimits

0xa631,	// (0x0005215b) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00057079) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00057079) main_pane_empty_t

0xadd3,	// (0x000528fd) bg_popup_window_pane_ParamLimits

0xadd3,	// (0x000528fd) bg_popup_window_pane

0x3ff7,	// (0x0004bb21) find_popup_pane_cp2_ParamLimits

0x3ff7,	// (0x0004bb21) find_popup_pane_cp2

0x4003,	// (0x0004bb2d) heading_pane_ParamLimits

0x4003,	// (0x0004bb2d) heading_pane

0xa0d3,	// (0x00051bfd) bg_popup_sub_pane

0xcabe,	// (0x000545e8) bg_popup_window_pane_g1_ParamLimits

0xcabe,	// (0x000545e8) bg_popup_window_pane_g1

0xcacd,	// (0x000545f7) bg_popup_window_pane_g2_ParamLimits

0xcacd,	// (0x000545f7) bg_popup_window_pane_g2

0xcad9,	// (0x00054603) bg_popup_window_pane_g3_ParamLimits

0xcad9,	// (0x00054603) bg_popup_window_pane_g3

0xcae5,	// (0x0005460f) bg_popup_window_pane_g4_ParamLimits

0xcae5,	// (0x0005460f) bg_popup_window_pane_g4

0xcaf4,	// (0x0005461e) bg_popup_window_pane_g5_ParamLimits

0xcaf4,	// (0x0005461e) bg_popup_window_pane_g5

0xcb04,	// (0x0005462e) bg_popup_window_pane_g6_ParamLimits

0xcb04,	// (0x0005462e) bg_popup_window_pane_g6

0xcb10,	// (0x0005463a) bg_popup_window_pane_g7_ParamLimits

0xcb10,	// (0x0005463a) bg_popup_window_pane_g7

0xcb1f,	// (0x00054649) bg_popup_window_pane_g8_ParamLimits

0xcb1f,	// (0x00054649) bg_popup_window_pane_g8

0xcb2e,	// (0x00054658) bg_popup_window_pane_g9_ParamLimits

0xcb2e,	// (0x00054658) bg_popup_window_pane_g9

0x3fdd,	// (0x0004bb07) bg_popup_window_pane_g10_ParamLimits

0x3fdd,	// (0x0004bb07) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x000573da) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x000573da) bg_popup_window_pane_g

0x3f06,	// (0x0004ba30) bg_popup_heading_pane_ParamLimits

0x3f06,	// (0x0004ba30) bg_popup_heading_pane

0x137d,	// (0x00048ea7) tabs_4_passive_pane_cp_srt_ParamLimits

0x137d,	// (0x00048ea7) tabs_4_passive_pane_cp_srt

0x138f,	// (0x00048eb9) tabs_4_passive_pane_srt_ParamLimits

0x3f1a,	// (0x0004ba44) heading_pane_g2

0x138f,	// (0x00048eb9) tabs_4_passive_pane_srt

0x329d,	// (0x0004adc7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x329d,	// (0x0004adc7) bg_passive_tab_pane_cp3_srt

0x3f22,	// (0x0004ba4c) heading_pane_t1_ParamLimits

0x3f22,	// (0x0004ba4c) heading_pane_t1

0x3f39,	// (0x0004ba63) heading_pane_t2_ParamLimits

0x3f39,	// (0x0004ba63) heading_pane_t2

0x0001,

0xf8ab,	// (0x000573d5) heading_pane_t_ParamLimits

0xf8ab,	// (0x000573d5) heading_pane_t

0x3a31,	// (0x0004b55b) bg_popup_heading_pane_g1

0x3ae0,	// (0x0004b60a) bg_popup_heading_pane_g2

0x3aea,	// (0x0004b614) bg_popup_heading_pane_g3

0x3af4,	// (0x0004b61e) bg_popup_heading_pane_g4

0x3afe,	// (0x0004b628) bg_popup_heading_pane_g5

0x3b08,	// (0x0004b632) bg_popup_heading_pane_g6

0x3b10,	// (0x0004b63a) bg_popup_heading_pane_g7

0x3b18,	// (0x0004b642) bg_popup_heading_pane_g8

0x3b22,	// (0x0004b64c) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00057391) bg_popup_heading_pane_g

0x3229,	// (0x0004ad53) bg_popup_sub_pane_g1

0x3231,	// (0x0004ad5b) bg_popup_sub_pane_g2

0x3239,	// (0x0004ad63) bg_popup_sub_pane_g3

0x3241,	// (0x0004ad6b) bg_popup_sub_pane_g4

0x3249,	// (0x0004ad73) bg_popup_sub_pane_g5

0x3251,	// (0x0004ad7b) bg_popup_sub_pane_g6

0x3259,	// (0x0004ad83) bg_popup_sub_pane_g7

0x3261,	// (0x0004ad8b) bg_popup_sub_pane_g8

0x3269,	// (0x0004ad93) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0005736b) bg_popup_sub_pane_g

0xa31e,	// (0x00051e48) bg_popup_window_pane_cp5_ParamLimits

0xa31e,	// (0x00051e48) bg_popup_window_pane_cp5

0xa651,	// (0x0005217b) popup_note_window_g1_ParamLimits

0xa651,	// (0x0005217b) popup_note_window_g1

0xa65d,	// (0x00052187) popup_note_window_t1_ParamLimits

0xa65d,	// (0x00052187) popup_note_window_t1

0xa673,	// (0x0005219d) popup_note_window_t2_ParamLimits

0xa673,	// (0x0005219d) popup_note_window_t2

0xa689,	// (0x000521b3) popup_note_window_t3_ParamLimits

0xa689,	// (0x000521b3) popup_note_window_t3

0xa69f,	// (0x000521c9) popup_note_window_t4_ParamLimits

0xa69f,	// (0x000521c9) popup_note_window_t4

0xa6c7,	// (0x000521f1) popup_note_window_t5_ParamLimits

0xa6c7,	// (0x000521f1) popup_note_window_t5

0x0004,

0xf55a,	// (0x00057084) popup_note_window_t_ParamLimits

0xf55a,	// (0x00057084) popup_note_window_t

0xa711,	// (0x0005223b) bg_popup_window_pane_cp6_ParamLimits

0xa711,	// (0x0005223b) bg_popup_window_pane_cp6

0x39ad,	// (0x0004b4d7) popup_note_image_window_g1_ParamLimits

0x39ad,	// (0x0004b4d7) popup_note_image_window_g1

0x39b9,	// (0x0004b4e3) popup_note_image_window_g2_ParamLimits

0x39b9,	// (0x0004b4e3) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0005735f) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0005735f) popup_note_image_window_g

0x39d2,	// (0x0004b4fc) popup_note_image_window_t1_ParamLimits

0x39d2,	// (0x0004b4fc) popup_note_image_window_t1

0x39eb,	// (0x0004b515) popup_note_image_window_t2_ParamLimits

0x39eb,	// (0x0004b515) popup_note_image_window_t2

0x3a04,	// (0x0004b52e) popup_note_image_window_t3_ParamLimits

0x3a04,	// (0x0004b52e) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x00057364) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x00057364) popup_note_image_window_t

0x386d,	// (0x0004b397) bg_popup_window_pane_cp7_ParamLimits

0x386d,	// (0x0004b397) bg_popup_window_pane_cp7

0x389d,	// (0x0004b3c7) popup_note_wait_window_g1_ParamLimits

0x389d,	// (0x0004b3c7) popup_note_wait_window_g1

0x38a9,	// (0x0004b3d3) popup_note_wait_window_g2_ParamLimits

0x38a9,	// (0x0004b3d3) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0005734d) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0005734d) popup_note_wait_window_g

0x38c1,	// (0x0004b3eb) popup_note_wait_window_t1_ParamLimits

0x38c1,	// (0x0004b3eb) popup_note_wait_window_t1

0x38e8,	// (0x0004b412) popup_note_wait_window_t2_ParamLimits

0x38e8,	// (0x0004b412) popup_note_wait_window_t2

0x3906,	// (0x0004b430) popup_note_wait_window_t3_ParamLimits

0x3906,	// (0x0004b430) popup_note_wait_window_t3

0x3919,	// (0x0004b443) popup_note_wait_window_t4_ParamLimits

0x3919,	// (0x0004b443) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x00057354) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x00057354) popup_note_wait_window_t

0x393e,	// (0x0004b468) wait_bar_pane_ParamLimits

0x393e,	// (0x0004b468) wait_bar_pane

0xa0d3,	// (0x00051bfd) wait_anim_pane

0xa0d3,	// (0x00051bfd) wait_border_pane

0x9fe3,	// (0x00051b0d) wait_anim_pane_g1

0x9fe3,	// (0x00051b0d) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0005720d) wait_anim_pane_g

0x3811,	// (0x0004b33b) wait_border_pane_g1

0x381c,	// (0x0004b346) wait_border_pane_g2

0x3825,	// (0x0004b34f) wait_border_pane_g3

0x0002,

0xf81c,	// (0x00057346) wait_border_pane_g

0x367b,	// (0x0004b1a5) bg_popup_window_pane_cp16_ParamLimits

0x367b,	// (0x0004b1a5) bg_popup_window_pane_cp16

0x377b,	// (0x0004b2a5) indicator_popup_pane_cp4_ParamLimits

0x377b,	// (0x0004b2a5) indicator_popup_pane_cp4

0x378f,	// (0x0004b2b9) popup_query_data_window_t1_ParamLimits

0x378f,	// (0x0004b2b9) popup_query_data_window_t1

0x37a1,	// (0x0004b2cb) popup_query_data_window_t2_ParamLimits

0x37a1,	// (0x0004b2cb) popup_query_data_window_t2

0x37ba,	// (0x0004b2e4) popup_query_data_window_t3_ParamLimits

0x37ba,	// (0x0004b2e4) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0005733f) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0005733f) popup_query_data_window_t

0x37d4,	// (0x0004b2fe) query_popup_data_pane_ParamLimits

0x37d4,	// (0x0004b2fe) query_popup_data_pane

0x37e8,	// (0x0004b312) query_popup_data_pane_cp1_ParamLimits

0x37e8,	// (0x0004b312) query_popup_data_pane_cp1

0x367b,	// (0x0004b1a5) bg_popup_window_pane_cp10_ParamLimits

0x367b,	// (0x0004b1a5) bg_popup_window_pane_cp10

0x36ad,	// (0x0004b1d7) indicator_popup_pane_ParamLimits

0x36ad,	// (0x0004b1d7) indicator_popup_pane

0x36cf,	// (0x0004b1f9) popup_query_code_window_t1_ParamLimits

0x36cf,	// (0x0004b1f9) popup_query_code_window_t1

0x36e9,	// (0x0004b213) popup_query_code_window_t2_ParamLimits

0x36e9,	// (0x0004b213) popup_query_code_window_t2

0x3732,	// (0x0004b25c) popup_query_code_window_t3_ParamLimits

0x3732,	// (0x0004b25c) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x00057338) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x00057338) popup_query_code_window_t

0x3761,	// (0x0004b28b) query_popup_pane_ParamLimits

0x3761,	// (0x0004b28b) query_popup_pane

0xa711,	// (0x0005223b) bg_popup_window_pane_cp15_ParamLimits

0xa711,	// (0x0005223b) bg_popup_window_pane_cp15

0xa731,	// (0x0005225b) indicator_popup_pane_cp1_ParamLimits

0xa731,	// (0x0005225b) indicator_popup_pane_cp1

0xa744,	// (0x0005226e) indicator_popup_pane_cp2_ParamLimits

0xa744,	// (0x0005226e) indicator_popup_pane_cp2

0xa75f,	// (0x00052289) popup_query_data_code_window_g1_ParamLimits

0xa75f,	// (0x00052289) popup_query_data_code_window_g1

0xa772,	// (0x0005229c) popup_query_data_code_window_t1_ParamLimits

0xa772,	// (0x0005229c) popup_query_data_code_window_t1

0xa784,	// (0x000522ae) popup_query_data_code_window_t2_ParamLimits

0xa784,	// (0x000522ae) popup_query_data_code_window_t2

0xa796,	// (0x000522c0) popup_query_data_code_window_t3_ParamLimits

0xa796,	// (0x000522c0) popup_query_data_code_window_t3

0xa7ac,	// (0x000522d6) popup_query_data_code_window_t4_ParamLimits

0xa7ac,	// (0x000522d6) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005708f) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005708f) popup_query_data_code_window_t

0x27eb,	// (0x0004a315) list_single_midp_graphic_pane_g3

0xa7c6,	// (0x000522f0) query_popup_data_pane_cp2_ParamLimits

0xa7d9,	// (0x00052303) query_popup_pane_cp2_ParamLimits

0xa7d9,	// (0x00052303) query_popup_pane_cp2

0xa0d3,	// (0x00051bfd) bg_popup_window_pane_cp11

0x365f,	// (0x0004b189) heading_pane_cp5

0x3667,	// (0x0004b191) listscroll_popup_info_pane

0xa0d3,	// (0x00051bfd) input_focus_pane_cp3

0xa7f4,	// (0x0005231e) query_popup_pane_t1

0xa802,	// (0x0005232c) list_popup_info_pane_ParamLimits

0xa802,	// (0x0005232c) list_popup_info_pane

0xa811,	// (0x0005233b) listscroll_popup_info_pane_g1

0xa819,	// (0x00052343) scroll_pane_cp7

0xa823,	// (0x0005234d) popup_info_list_pane_t1_ParamLimits

0xa823,	// (0x0005234d) popup_info_list_pane_t1

0xa83d,	// (0x00052367) popup_info_list_pane_t2_ParamLimits

0xa83d,	// (0x00052367) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00057098) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00057098) popup_info_list_pane_t

0xa0d3,	// (0x00051bfd) bg_popup_window_pane_cp12

0x4a31,	// (0x0004c55b) find_popup_pane

0xa360,	// (0x00051e8a) bg_popup_window_pane_cp3

0xa857,	// (0x00052381) heading_pane_cp3

0xa866,	// (0x00052390) listscroll_popup_graphic_pane

0xa0d3,	// (0x00051bfd) bg_popup_window_pane_cp4

0xa8c6,	// (0x000523f0) heading_pane_cp4

0xa8d0,	// (0x000523fa) listscroll_popup_colour_pane

0xa8d8,	// (0x00052402) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa8d8,	// (0x00052402) cell_large_graphic_colour_none_popup_pane

0xa8ec,	// (0x00052416) grid_large_graphic_colour_popup_pane_ParamLimits

0xa8ec,	// (0x00052416) grid_large_graphic_colour_popup_pane

0xa914,	// (0x0005243e) listscroll_popup_colour_pane_g1_ParamLimits

0xa914,	// (0x0005243e) listscroll_popup_colour_pane_g1

0xa92b,	// (0x00052455) listscroll_popup_colour_pane_g2_ParamLimits

0xa92b,	// (0x00052455) listscroll_popup_colour_pane_g2

0xa942,	// (0x0005246c) listscroll_popup_colour_pane_g3_ParamLimits

0xa942,	// (0x0005246c) listscroll_popup_colour_pane_g3

0xa952,	// (0x0005247c) listscroll_popup_colour_pane_g4_ParamLimits

0xa952,	// (0x0005247c) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005709d) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005709d) listscroll_popup_colour_pane_g

0xa962,	// (0x0005248c) scroll_pane_cp6_ParamLimits

0xa962,	// (0x0005248c) scroll_pane_cp6

0xa974,	// (0x0005249e) cell_large_graphic_colour_popup_pane_ParamLimits

0xa974,	// (0x0005249e) cell_large_graphic_colour_popup_pane

0xa995,	// (0x000524bf) cell_large_graphic_colour_none_popup_pane_t1

0xa0d3,	// (0x00051bfd) grid_highlight_pane_cp5

0xa9a4,	// (0x000524ce) cell_large_graphic_colour_popup_pane_g1

0xa9ac,	// (0x000524d6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000570a6) cell_large_graphic_colour_popup_pane_g

0xa9b4,	// (0x000524de) cell_large_graphic_colour_popup_pane_g2_copy1

0xa9bd,	// (0x000524e7) grid_highlight_pane_cp4

0xa9c5,	// (0x000524ef) bg_popup_window_pane_cp8_ParamLimits

0xa9c5,	// (0x000524ef) bg_popup_window_pane_cp8

0xa9e0,	// (0x0005250a) popup_snote_single_text_window_g1_ParamLimits

0xa9e0,	// (0x0005250a) popup_snote_single_text_window_g1

0xa9f2,	// (0x0005251c) popup_snote_single_text_window_t1_ParamLimits

0xa9f2,	// (0x0005251c) popup_snote_single_text_window_t1

0xaa05,	// (0x0005252f) popup_snote_single_text_window_t2_ParamLimits

0xaa05,	// (0x0005252f) popup_snote_single_text_window_t2

0xaa18,	// (0x00052542) popup_snote_single_text_window_t3_ParamLimits

0xaa18,	// (0x00052542) popup_snote_single_text_window_t3

0xaa51,	// (0x0005257b) popup_snote_single_text_window_t4_ParamLimits

0xaa51,	// (0x0005257b) popup_snote_single_text_window_t4

0xaa85,	// (0x000525af) popup_snote_single_text_window_t5_ParamLimits

0xaa85,	// (0x000525af) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000570ab) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000570ab) popup_snote_single_text_window_t

0xaab4,	// (0x000525de) bg_popup_window_pane_cp9_ParamLimits

0xaab4,	// (0x000525de) bg_popup_window_pane_cp9

0xa9e0,	// (0x0005250a) popup_snote_single_graphic_window_g1_ParamLimits

0xa9e0,	// (0x0005250a) popup_snote_single_graphic_window_g1

0xaac2,	// (0x000525ec) popup_snote_single_graphic_window_g2_ParamLimits

0xaac2,	// (0x000525ec) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000570b6) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000570b6) popup_snote_single_graphic_window_g

0xaace,	// (0x000525f8) popup_snote_single_graphic_window_t1_ParamLimits

0xaace,	// (0x000525f8) popup_snote_single_graphic_window_t1

0xaae1,	// (0x0005260b) popup_snote_single_graphic_window_t2_ParamLimits

0xaae1,	// (0x0005260b) popup_snote_single_graphic_window_t2

0xaaf4,	// (0x0005261e) popup_snote_single_graphic_window_t3_ParamLimits

0xaaf4,	// (0x0005261e) popup_snote_single_graphic_window_t3

0xab2d,	// (0x00052657) popup_snote_single_graphic_window_t4_ParamLimits

0xab2d,	// (0x00052657) popup_snote_single_graphic_window_t4

0xab61,	// (0x0005268b) popup_snote_single_graphic_window_t5_ParamLimits

0xab61,	// (0x0005268b) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000570bb) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000570bb) popup_snote_single_graphic_window_t

0x496f,	// (0x0004c499) grid_graphic_popup_pane_ParamLimits

0x496f,	// (0x0004c499) grid_graphic_popup_pane

0x499d,	// (0x0004c4c7) listscroll_popup_graphic_pane_g1_ParamLimits

0x499d,	// (0x0004c4c7) listscroll_popup_graphic_pane_g1

0xcea5,	// (0x000549cf) listscroll_popup_graphic_pane_g2_ParamLimits

0xcea5,	// (0x000549cf) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x000574b5) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x000574b5) listscroll_popup_graphic_pane_g

0x49c5,	// (0x0004c4ef) scroll_pane_cp5

0xce5d,	// (0x00054987) cell_graphic_popup_pane_ParamLimits

0xce5d,	// (0x00054987) cell_graphic_popup_pane

0x48e8,	// (0x0004c412) cell_graphic_popup_pane_g1

0x48f0,	// (0x0004c41a) cell_graphic_popup_pane_g2

0xa9b4,	// (0x000524de) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x000574ae) cell_graphic_popup_pane_g

0x48f9,	// (0x0004c423) cell_graphic_popup_pane_t2

0xa9bd,	// (0x000524e7) grid_highlight_pane_cp3

0xaba2,	// (0x000526cc) list_gen_pane_ParamLimits

0xaba2,	// (0x000526cc) list_gen_pane

0xabd4,	// (0x000526fe) scroll_pane

0xce14,	// (0x0005493e) bg_list_pane_g1_ParamLimits

0xce14,	// (0x0005493e) bg_list_pane_g1

0x485d,	// (0x0004c387) bg_list_pane_g2_ParamLimits

0x485d,	// (0x0004c387) bg_list_pane_g2

0x4872,	// (0x0004c39c) bg_list_pane_g3_ParamLimits

0x4872,	// (0x0004c39c) bg_list_pane_g3

0x4886,	// (0x0004c3b0) bg_list_pane_g4_ParamLimits

0x4886,	// (0x0004c3b0) bg_list_pane_g4

0xce31,	// (0x0005495b) bg_list_pane_g5_ParamLimits

0xce31,	// (0x0005495b) bg_list_pane_g5

0x0004,

0xf979,	// (0x000574a3) bg_list_pane_g_ParamLimits

0xf979,	// (0x000574a3) bg_list_pane_g

0xbd8c,	// (0x000538b6) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double2_graphic_large_graphic_pane

0xbd8c,	// (0x000538b6) list_double2_graphic_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double2_graphic_pane

0xbd8c,	// (0x000538b6) list_double2_large_graphic_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double2_large_graphic_pane

0xbd8c,	// (0x000538b6) list_double2_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double2_pane

0xbd8c,	// (0x000538b6) list_double_graphic_heading_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double_graphic_heading_pane

0xbd8c,	// (0x000538b6) list_double_graphic_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double_graphic_pane

0xbd8c,	// (0x000538b6) list_double_heading_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double_heading_pane

0xbd8c,	// (0x000538b6) list_double_large_graphic_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double_large_graphic_pane

0xbd8c,	// (0x000538b6) list_double_number_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double_number_pane

0xbd8c,	// (0x000538b6) list_double_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double_pane

0xbd8c,	// (0x000538b6) list_double_time_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_double_time_pane

0xbd8c,	// (0x000538b6) list_setting_number_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_setting_number_pane

0xbd8c,	// (0x000538b6) list_setting_pane_ParamLimits

0xbd8c,	// (0x000538b6) list_setting_pane

0xcdd7,	// (0x00054901) list_single_2graphic_pane_ParamLimits

0xcdd7,	// (0x00054901) list_single_2graphic_pane

0xcdd7,	// (0x00054901) list_single_graphic_heading_pane_ParamLimits

0xcdd7,	// (0x00054901) list_single_graphic_heading_pane

0xcdd7,	// (0x00054901) list_single_graphic_pane_ParamLimits

0xcdd7,	// (0x00054901) list_single_graphic_pane

0xcdd7,	// (0x00054901) list_single_heading_pane_ParamLimits

0xcdd7,	// (0x00054901) list_single_heading_pane

0xcdd7,	// (0x00054901) list_single_large_graphic_pane_ParamLimits

0xcdd7,	// (0x00054901) list_single_large_graphic_pane

0xcdd7,	// (0x00054901) list_single_number_heading_pane_ParamLimits

0xcdd7,	// (0x00054901) list_single_number_heading_pane

0xcdd7,	// (0x00054901) list_single_number_pane_ParamLimits

0xcdd7,	// (0x00054901) list_single_number_pane

0xcdd7,	// (0x00054901) list_single_pane_ParamLimits

0xcdd7,	// (0x00054901) list_single_pane

0xa0d3,	// (0x00051bfd) list_highlight_pane_cp1

0x0f81,	// (0x00048aab) list_single_pane_g1_ParamLimits

0x0f81,	// (0x00048aab) list_single_pane_g1

0x0f8d,	// (0x00048ab7) list_single_pane_g2_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_pane_g2

0x0001,

0xf5ad,	// (0x000570d7) list_single_pane_g_ParamLimits

0xf5ad,	// (0x000570d7) list_single_pane_g

0xeee0,	// (0x00056a0a) list_single_pane_t1_ParamLimits

0xeee0,	// (0x00056a0a) list_single_pane_t1

0x0f81,	// (0x00048aab) list_single_number_pane_g1_ParamLimits

0x0f81,	// (0x00048aab) list_single_number_pane_g1

0x0f8d,	// (0x00048ab7) list_single_number_pane_g2_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x000570d7) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x000570d7) list_single_number_pane_g

0xee11,	// (0x0005693b) list_single_number_pane_t1_ParamLimits

0xee11,	// (0x0005693b) list_single_number_pane_t1

0xeece,	// (0x000569f8) list_single_number_pane_t2_ParamLimits

0xeece,	// (0x000569f8) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00057464) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00057464) list_single_number_pane_t

0x97af,	// (0x000512d9) list_single_graphic_pane_g1_ParamLimits

0x97af,	// (0x000512d9) list_single_graphic_pane_g1

0x0f81,	// (0x00048aab) list_single_graphic_pane_g2_ParamLimits

0x0f81,	// (0x00048aab) list_single_graphic_pane_g2

0x0f8d,	// (0x00048ab7) list_single_graphic_pane_g3_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000570c6) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000570c6) list_single_graphic_pane_g

0x97bb,	// (0x000512e5) list_single_graphic_pane_t1_ParamLimits

0x97bb,	// (0x000512e5) list_single_graphic_pane_t1

0x97d1,	// (0x000512fb) list_single_heading_pane_g1_ParamLimits

0x97d1,	// (0x000512fb) list_single_heading_pane_g1

0x0f8d,	// (0x00048ab7) list_single_heading_pane_g2_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000570cd) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000570cd) list_single_heading_pane_g

0x97e4,	// (0x0005130e) list_single_heading_pane_t1_ParamLimits

0x97e4,	// (0x0005130e) list_single_heading_pane_t1

0xac08,	// (0x00052732) list_single_heading_pane_t2_ParamLimits

0xac08,	// (0x00052732) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000570d2) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000570d2) list_single_heading_pane_t

0x0f81,	// (0x00048aab) list_single_number_heading_pane_g1_ParamLimits

0x0f81,	// (0x00048aab) list_single_number_heading_pane_g1

0x0f8d,	// (0x00048ab7) list_single_number_heading_pane_g2_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x000570d7) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x000570d7) list_single_number_heading_pane_g

0xec41,	// (0x0005676b) list_single_number_heading_pane_t1_ParamLimits

0xec41,	// (0x0005676b) list_single_number_heading_pane_t1

0x97fa,	// (0x00051324) list_single_number_heading_pane_t2_ParamLimits

0x97fa,	// (0x00051324) list_single_number_heading_pane_t2

0xec57,	// (0x00056781) list_single_number_heading_pane_t3_ParamLimits

0xec57,	// (0x00056781) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x000570dc) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x000570dc) list_single_number_heading_pane_t

0xec69,	// (0x00056793) list_single_graphic_heading_pane_g1_ParamLimits

0xec69,	// (0x00056793) list_single_graphic_heading_pane_g1

0xac1a,	// (0x00052744) list_single_graphic_heading_pane_g4_ParamLimits

0xac1a,	// (0x00052744) list_single_graphic_heading_pane_g4

0x0f8d,	// (0x00048ab7) list_single_graphic_heading_pane_g5_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000570e3) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000570e3) list_single_graphic_heading_pane_g

0xec41,	// (0x0005676b) list_single_graphic_heading_pane_t1_ParamLimits

0xec41,	// (0x0005676b) list_single_graphic_heading_pane_t1

0x980c,	// (0x00051336) list_single_graphic_heading_pane_t2_ParamLimits

0x980c,	// (0x00051336) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000570ea) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000570ea) list_single_graphic_heading_pane_t

0x142e,	// (0x00048f58) list_single_large_graphic_pane_g1_ParamLimits

0x142e,	// (0x00048f58) list_single_large_graphic_pane_g1

0x0f81,	// (0x00048aab) list_single_large_graphic_pane_g2_ParamLimits

0x0f81,	// (0x00048aab) list_single_large_graphic_pane_g2

0x0f8d,	// (0x00048ab7) list_single_large_graphic_pane_g3_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000570ef) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000570ef) list_single_large_graphic_pane_g

0x381c,	// (0x0004b346) wait_border_pane_g2_copy1

0xac2b,	// (0x00052755) list_single_large_graphic_pane_g4_cp2

0xec75,	// (0x0005679f) list_single_large_graphic_pane_t1_ParamLimits

0xec75,	// (0x0005679f) list_single_large_graphic_pane_t1

0xac33,	// (0x0005275d) list_double_pane_g1_ParamLimits

0xac33,	// (0x0005275d) list_double_pane_g1

0xac3f,	// (0x00052769) list_double_pane_g2_ParamLimits

0xac3f,	// (0x00052769) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000570f6) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000570f6) list_double_pane_g

0x981e,	// (0x00051348) list_double_pane_t1_ParamLimits

0x981e,	// (0x00051348) list_double_pane_t1

0x9834,	// (0x0005135e) list_double_pane_t2_ParamLimits

0x9834,	// (0x0005135e) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000570fb) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000570fb) list_double_pane_t

0x9846,	// (0x00051370) list_double2_pane_g1_ParamLimits

0x9846,	// (0x00051370) list_double2_pane_g1

0x9857,	// (0x00051381) list_double2_pane_g2_ParamLimits

0x9857,	// (0x00051381) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00057100) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00057100) list_double2_pane_g

0x9863,	// (0x0005138d) list_double2_pane_t1_ParamLimits

0x9863,	// (0x0005138d) list_double2_pane_t1

0x9879,	// (0x000513a3) list_double2_pane_t2_ParamLimits

0x9879,	// (0x000513a3) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00057105) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00057105) list_double2_pane_t

0xac33,	// (0x0005275d) list_double_number_pane_g1_ParamLimits

0xac33,	// (0x0005275d) list_double_number_pane_g1

0xac3f,	// (0x00052769) list_double_number_pane_g2_ParamLimits

0xac3f,	// (0x00052769) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000570f6) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000570f6) list_double_number_pane_g

0x988b,	// (0x000513b5) list_double_number_pane_t1_ParamLimits

0x988b,	// (0x000513b5) list_double_number_pane_t1

0x989d,	// (0x000513c7) list_double_number_pane_t2_ParamLimits

0x989d,	// (0x000513c7) list_double_number_pane_t2

0x98b3,	// (0x000513dd) list_double_number_pane_t3_ParamLimits

0x98b3,	// (0x000513dd) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005710a) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005710a) list_double_number_pane_t

0x98c5,	// (0x000513ef) list_double_graphic_pane_g1_ParamLimits

0x98c5,	// (0x000513ef) list_double_graphic_pane_g1

0x98d1,	// (0x000513fb) list_double_graphic_pane_g2_ParamLimits

0x98d1,	// (0x000513fb) list_double_graphic_pane_g2

0x98e0,	// (0x0005140a) list_double_graphic_pane_g3_ParamLimits

0x98e0,	// (0x0005140a) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00057111) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00057111) list_double_graphic_pane_g

0x98f8,	// (0x00051422) list_double_graphic_pane_t1_ParamLimits

0x98f8,	// (0x00051422) list_double_graphic_pane_t1

0x990e,	// (0x00051438) list_double_graphic_pane_t2_ParamLimits

0x990e,	// (0x00051438) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0005711a) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0005711a) list_double_graphic_pane_t

0x9920,	// (0x0005144a) list_double2_graphic_pane_g1_ParamLimits

0x9920,	// (0x0005144a) list_double2_graphic_pane_g1

0x5e9f,	// (0x0004d9c9) list_double2_graphic_pane_g2_ParamLimits

0x5e9f,	// (0x0004d9c9) list_double2_graphic_pane_g2

0x992c,	// (0x00051456) list_double2_graphic_pane_g3_ParamLimits

0x992c,	// (0x00051456) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0005711f) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0005711f) list_double2_graphic_pane_g

0x9938,	// (0x00051462) list_double2_graphic_pane_t1_ParamLimits

0x9938,	// (0x00051462) list_double2_graphic_pane_t1

0x994e,	// (0x00051478) list_double2_graphic_pane_t2_ParamLimits

0x994e,	// (0x00051478) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00057126) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00057126) list_double2_graphic_pane_t

0x9960,	// (0x0005148a) list_double_large_graphic_pane_g1_ParamLimits

0x9960,	// (0x0005148a) list_double_large_graphic_pane_g1

0x997f,	// (0x000514a9) list_double_large_graphic_pane_g2_ParamLimits

0x997f,	// (0x000514a9) list_double_large_graphic_pane_g2

0xac3f,	// (0x00052769) list_double_large_graphic_pane_g3_ParamLimits

0xac3f,	// (0x00052769) list_double_large_graphic_pane_g3

0x9995,	// (0x000514bf) list_double_large_graphic_pane_g4_ParamLimits

0x9995,	// (0x000514bf) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0005712b) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0005712b) list_double_large_graphic_pane_g

0x99a8,	// (0x000514d2) list_double_large_graphic_pane_t1_ParamLimits

0x99a8,	// (0x000514d2) list_double_large_graphic_pane_t1

0x99c1,	// (0x000514eb) list_double_large_graphic_pane_t2_ParamLimits

0x99c1,	// (0x000514eb) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00057136) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00057136) list_double_large_graphic_pane_t

0xac4b,	// (0x00052775) list_double2_large_graphic_pane_g1_ParamLimits

0xac4b,	// (0x00052775) list_double2_large_graphic_pane_g1

0x99d3,	// (0x000514fd) list_double2_large_graphic_pane_g2_ParamLimits

0x99d3,	// (0x000514fd) list_double2_large_graphic_pane_g2

0x992c,	// (0x00051456) list_double2_large_graphic_pane_g3_ParamLimits

0x992c,	// (0x00051456) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0005713b) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0005713b) list_double2_large_graphic_pane_g

0x99e4,	// (0x0005150e) list_double2_large_graphic_pane_t1_ParamLimits

0x99e4,	// (0x0005150e) list_double2_large_graphic_pane_t1

0x99fa,	// (0x00051524) list_double2_large_graphic_pane_t2_ParamLimits

0x99fa,	// (0x00051524) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00057142) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00057142) list_double2_large_graphic_pane_t

0x9a0c,	// (0x00051536) list_double_heading_pane_g1_ParamLimits

0x9a0c,	// (0x00051536) list_double_heading_pane_g1

0x9a1d,	// (0x00051547) list_double_heading_pane_g2_ParamLimits

0x9a1d,	// (0x00051547) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00057147) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00057147) list_double_heading_pane_g

0x9a29,	// (0x00051553) list_double_heading_pane_t1_ParamLimits

0x9a29,	// (0x00051553) list_double_heading_pane_t1

0x9a3f,	// (0x00051569) list_double_heading_pane_t2_ParamLimits

0x9a3f,	// (0x00051569) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0005714c) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0005714c) list_double_heading_pane_t

0x9a51,	// (0x0005157b) list_double_graphic_heading_pane_g1_ParamLimits

0x9a51,	// (0x0005157b) list_double_graphic_heading_pane_g1

0x9a0c,	// (0x00051536) list_double_graphic_heading_pane_g2_ParamLimits

0x9a0c,	// (0x00051536) list_double_graphic_heading_pane_g2

0x9a1d,	// (0x00051547) list_double_graphic_heading_pane_g3_ParamLimits

0x9a1d,	// (0x00051547) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00057151) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00057151) list_double_graphic_heading_pane_g

0x9a5d,	// (0x00051587) list_double_graphic_heading_pane_t1_ParamLimits

0x9a5d,	// (0x00051587) list_double_graphic_heading_pane_t1

0x9a73,	// (0x0005159d) list_double_graphic_heading_pane_t2_ParamLimits

0x9a73,	// (0x0005159d) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00057158) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00057158) list_double_graphic_heading_pane_t

0x9a85,	// (0x000515af) list_double_time_pane_g1_ParamLimits

0x9a85,	// (0x000515af) list_double_time_pane_g1

0x9a96,	// (0x000515c0) list_double_time_pane_g2_ParamLimits

0x9a96,	// (0x000515c0) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0005715d) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0005715d) list_double_time_pane_g

0x9aa2,	// (0x000515cc) list_double_time_pane_t1_ParamLimits

0x9aa2,	// (0x000515cc) list_double_time_pane_t1

0x9ab8,	// (0x000515e2) list_double_time_pane_t2_ParamLimits

0x9ab8,	// (0x000515e2) list_double_time_pane_t2

0x9aca,	// (0x000515f4) list_double_time_pane_t3_ParamLimits

0x9aca,	// (0x000515f4) list_double_time_pane_t3

0x9adc,	// (0x00051606) list_double_time_pane_t4_ParamLimits

0x9adc,	// (0x00051606) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00057162) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00057162) list_double_time_pane_t

0x9aee,	// (0x00051618) list_setting_pane_g1_ParamLimits

0x9aee,	// (0x00051618) list_setting_pane_g1

0x9afa,	// (0x00051624) list_setting_pane_g2_ParamLimits

0x9afa,	// (0x00051624) list_setting_pane_g2

0x0001,

0xf641,	// (0x0005716b) list_setting_pane_g_ParamLimits

0xf641,	// (0x0005716b) list_setting_pane_g

0x9b06,	// (0x00051630) list_setting_pane_t1_ParamLimits

0x9b06,	// (0x00051630) list_setting_pane_t1

0x9b20,	// (0x0005164a) list_setting_pane_t2_ParamLimits

0x9b20,	// (0x0005164a) list_setting_pane_t2

0x0002,

0xf646,	// (0x00057170) list_setting_pane_t_ParamLimits

0xf646,	// (0x00057170) list_setting_pane_t

0x9b5f,	// (0x00051689) set_value_pane_cp_ParamLimits

0x9b5f,	// (0x00051689) set_value_pane_cp

0x9b6d,	// (0x00051697) list_setting_number_pane_g1_ParamLimits

0x9b6d,	// (0x00051697) list_setting_number_pane_g1

0x9b79,	// (0x000516a3) list_setting_number_pane_g2_ParamLimits

0x9b79,	// (0x000516a3) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00057177) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00057177) list_setting_number_pane_g

0x9b85,	// (0x000516af) list_setting_number_pane_t1_ParamLimits

0x9b85,	// (0x000516af) list_setting_number_pane_t1

0x9b9e,	// (0x000516c8) list_setting_number_pane_t2_ParamLimits

0x9b9e,	// (0x000516c8) list_setting_number_pane_t2

0x9bb8,	// (0x000516e2) list_setting_number_pane_t3_ParamLimits

0x9bb8,	// (0x000516e2) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0005717c) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0005717c) list_setting_number_pane_t

0x9b5f,	// (0x00051689) set_value_pane_ParamLimits

0x9b5f,	// (0x00051689) set_value_pane

0xac57,	// (0x00052781) bg_set_opt_pane_ParamLimits

0xac57,	// (0x00052781) bg_set_opt_pane

0xec8b,	// (0x000567b5) set_value_pane_t1

0xac78,	// (0x000527a2) slider_set_pane_cp3

0xac81,	// (0x000527ab) volume_small_pane_cp

0xac8a,	// (0x000527b4) list_form_gen_pane

0xac93,	// (0x000527bd) scroll_pane_cp8

0x9bfb,	// (0x00051725) form_field_data_pane_ParamLimits

0x9bfb,	// (0x00051725) form_field_data_pane

0x9c18,	// (0x00051742) form_field_data_wide_pane_ParamLimits

0x9c18,	// (0x00051742) form_field_data_wide_pane

0x9c3c,	// (0x00051766) form_field_popup_pane_ParamLimits

0x9c3c,	// (0x00051766) form_field_popup_pane

0xeca9,	// (0x000567d3) form_field_popup_wide_pane_ParamLimits

0xeca9,	// (0x000567d3) form_field_popup_wide_pane

0xecca,	// (0x000567f4) form_field_slider_pane_ParamLimits

0xecca,	// (0x000567f4) form_field_slider_pane

0xecdd,	// (0x00056807) form_field_slider_wide_pane_ParamLimits

0xecdd,	// (0x00056807) form_field_slider_wide_pane

0xaca4,	// (0x000527ce) data_form_pane

0x9c68,	// (0x00051792) form_field_data_pane_t1

0xacb0,	// (0x000527da) input_focus_pane

0xecf0,	// (0x0005681a) data_form_wide_pane

0xed0d,	// (0x00056837) form_field_data_wide_pane_t1

0xa9d2,	// (0x000524fc) input_focus_pane_cp6

0x9c82,	// (0x000517ac) form_field_popup_pane_t1

0xacb0,	// (0x000527da) input_focus_pane_cp7

0xacde,	// (0x00052808) list_form_pane

0xed37,	// (0x00056861) form_field_popup_wide_pane_t1

0xacb0,	// (0x000527da) input_focus_pane_cp8

0xacea,	// (0x00052814) list_form_wide_pane

0x9ca4,	// (0x000517ce) form_field_slider_pane_t1_ParamLimits

0x9ca4,	// (0x000517ce) form_field_slider_pane_t1

0x9cbc,	// (0x000517e6) form_field_slider_pane_t2_ParamLimits

0x9cbc,	// (0x000517e6) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0005718c) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0005718c) form_field_slider_pane_t

0xa31e,	// (0x00051e48) input_focus_pane_cp9_ParamLimits

0xa31e,	// (0x00051e48) input_focus_pane_cp9

0x9cd1,	// (0x000517fb) slider_cont_pane_ParamLimits

0x9cd1,	// (0x000517fb) slider_cont_pane

0xacf6,	// (0x00052820) form_field_slider_wide_pane_t1_ParamLimits

0xacf6,	// (0x00052820) form_field_slider_wide_pane_t1

0xed4c,	// (0x00056876) form_field_slider_wide_pane_t2_ParamLimits

0xed4c,	// (0x00056876) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00057191) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00057191) form_field_slider_wide_pane_t

0xa31e,	// (0x00051e48) input_focus_pane_cp10_ParamLimits

0xa31e,	// (0x00051e48) input_focus_pane_cp10

0x9ce5,	// (0x0005180f) slider_cont_pane_cp1_ParamLimits

0x9ce5,	// (0x0005180f) slider_cont_pane_cp1

0x9cf9,	// (0x00051823) slider_form_pane_cp

0xad08,	// (0x00052832) input_focus_pane_g1

0xad10,	// (0x0005283a) input_focus_pane_g2

0xad18,	// (0x00052842) input_focus_pane_g3

0xad20,	// (0x0005284a) input_focus_pane_g4

0xad28,	// (0x00052852) input_focus_pane_g5

0xad30,	// (0x0005285a) input_focus_pane_g6

0xad38,	// (0x00052862) input_focus_pane_g7

0xad40,	// (0x0005286a) input_focus_pane_g8

0xad48,	// (0x00052872) input_focus_pane_g9

0x9fe3,	// (0x00051b0d) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00057196) input_focus_pane_g

0x3825,	// (0x0004b34f) wait_border_pane_g3_copy1

0x9d01,	// (0x0005182b) data_form_pane_t1

0x9fe3,	// (0x00051b0d) wait_anim_pane_g1_copy1

0x9df5,	// (0x0005191f) data_form_wide_pane_t1

0xed5e,	// (0x00056888) list_form_graphic_pane_cp_ParamLimits

0xed5e,	// (0x00056888) list_form_graphic_pane_cp

0x477c,	// (0x0004c2a6) slider_form_pane_g1

0x4785,	// (0x0004c2af) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00057494) slider_form_pane_g

0x9d1d,	// (0x00051847) list_form_graphic_pane_ParamLimits

0x9d1d,	// (0x00051847) list_form_graphic_pane

0xed70,	// (0x0005689a) list_form_graphic_pane_g1

0xed78,	// (0x000568a2) list_form_graphic_pane_t1_ParamLimits

0xed78,	// (0x000568a2) list_form_graphic_pane_t1

0xa360,	// (0x00051e8a) list_highlight_pane_cp5_ParamLimits

0xa360,	// (0x00051e8a) list_highlight_pane_cp5

0x9d2e,	// (0x00051858) find_pane_g1

0xad50,	// (0x0005287a) input_find_pane

0x9d37,	// (0x00051861) input_find_pane_g1_ParamLimits

0x9d37,	// (0x00051861) input_find_pane_g1

0x9d43,	// (0x0005186d) input_find_pane_t1_ParamLimits

0x9d43,	// (0x0005186d) input_find_pane_t1

0x9d58,	// (0x00051882) input_find_pane_t2_ParamLimits

0x9d58,	// (0x00051882) input_find_pane_t2

0x0001,

0xf681,	// (0x000571ab) input_find_pane_t_ParamLimits

0xf681,	// (0x000571ab) input_find_pane_t

0xad59,	// (0x00052883) input_focus_pane_cp5_ParamLimits

0xad59,	// (0x00052883) input_focus_pane_cp5

0xad78,	// (0x000528a2) bg_popup_window_pane_cp2_ParamLimits

0xad78,	// (0x000528a2) bg_popup_window_pane_cp2

0xad85,	// (0x000528af) listscroll_menu_pane_ParamLimits

0xad85,	// (0x000528af) listscroll_menu_pane

0xad91,	// (0x000528bb) popup_submenu_window_ParamLimits

0xad91,	// (0x000528bb) popup_submenu_window

0xadc1,	// (0x000528eb) find_popup_pane_g1

0xadc9,	// (0x000528f3) input_popup_find_pane_cp

0xadd3,	// (0x000528fd) input_focus_pane_cp4_ParamLimits

0xadd3,	// (0x000528fd) input_focus_pane_cp4

0xadef,	// (0x00052919) input_popup_find_pane_t1_ParamLimits

0xadef,	// (0x00052919) input_popup_find_pane_t1

0xa0d3,	// (0x00051bfd) bg_popup_sub_pane_cp

0xae1d,	// (0x00052947) listscroll_popup_sub_pane

0xae25,	// (0x0005294f) list_submenu_pane_ParamLimits

0xae25,	// (0x0005294f) list_submenu_pane

0xae36,	// (0x00052960) scroll_pane_cp4

0xae3e,	// (0x00052968) list_single_popup_submenu_pane_ParamLimits

0xae3e,	// (0x00052968) list_single_popup_submenu_pane

0xae53,	// (0x0005297d) list_single_popup_submenu_pane_g1

0xae5b,	// (0x00052985) list_single_popup_submenu_pane_t1_ParamLimits

0xae5b,	// (0x00052985) list_single_popup_submenu_pane_t1

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp1_ParamLimits

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp1

0xae70,	// (0x0005299a) tabs_2_active_pane_g1

0xae78,	// (0x000529a2) tabs_2_active_pane_t1

0xa31e,	// (0x00051e48) bg_passive_tab_pane_cp1_ParamLimits

0xa31e,	// (0x00051e48) bg_passive_tab_pane_cp1

0xae70,	// (0x0005299a) tabs_2_passive_pane_g1

0xae78,	// (0x000529a2) tabs_2_passive_pane_t1

0xa360,	// (0x00051e8a) bg_active_tab_pane_cp4

0xae8a,	// (0x000529b4) tabs_2_long_active_pane_t1

0x2cf3,	// (0x0004a81d) bg_passive_tab_pane_cp4

0x0fbe,	// (0x00048ae8) list_single_midp_graphic_pane_g4_ParamLimits

0xa360,	// (0x00051e8a) bg_active_tab_pane_cp5

0xae9d,	// (0x000529c7) tabs_3_long_active_pane_t1

0x2cf3,	// (0x0004a81d) bg_passive_tab_pane_cp5

0x0fbe,	// (0x00048ae8) list_single_midp_graphic_pane_g4

0xa360,	// (0x00051e8a) bg_popup_window_pane_cp13_ParamLimits

0xa360,	// (0x00051e8a) bg_popup_window_pane_cp13

0xaeb8,	// (0x000529e2) listscroll_popup_fast_pane_ParamLimits

0xaeb8,	// (0x000529e2) listscroll_popup_fast_pane

0xaec7,	// (0x000529f1) grid_popup_fast_pane_ParamLimits

0xaec7,	// (0x000529f1) grid_popup_fast_pane

0xaed9,	// (0x00052a03) scroll_pane_cp9_ParamLimits

0xaed9,	// (0x00052a03) scroll_pane_cp9

0x60eb,	// (0x0004dc15) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x60eb,	// (0x0004dc15) list_single_graphic_hl_pane_t1_cp2

0xaefd,	// (0x00052a27) input_focus_pane_cp20_ParamLimits

0xaefd,	// (0x00052a27) input_focus_pane_cp20

0xaf0b,	// (0x00052a35) query_popup_data_pane_t1_ParamLimits

0xaf0b,	// (0x00052a35) query_popup_data_pane_t1

0xaf1e,	// (0x00052a48) query_popup_data_pane_t2_ParamLimits

0xaf1e,	// (0x00052a48) query_popup_data_pane_t2

0xaf64,	// (0x00052a8e) query_popup_data_pane_t3_ParamLimits

0xaf64,	// (0x00052a8e) query_popup_data_pane_t3

0xafa5,	// (0x00052acf) query_popup_data_pane_t4_ParamLimits

0xafa5,	// (0x00052acf) query_popup_data_pane_t4

0xc526,	// (0x00054050) query_popup_data_pane_t5_ParamLimits

0xc526,	// (0x00054050) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x000571b0) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x000571b0) query_popup_data_pane_t

0xad08,	// (0x00052832) bg_set_opt_pane_g1

0xad10,	// (0x0005283a) bg_set_opt_pane_g2

0xad18,	// (0x00052842) bg_set_opt_pane_g3

0xad20,	// (0x0005284a) bg_set_opt_pane_g4

0xad28,	// (0x00052852) bg_set_opt_pane_g5

0xad30,	// (0x0005285a) bg_set_opt_pane_g6

0xad38,	// (0x00052862) bg_set_opt_pane_g7

0xad40,	// (0x0005286a) bg_set_opt_pane_g8

0xad48,	// (0x00052872) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x000571bb) bg_set_opt_pane_g

0x05e3,	// (0x0004810d) control_top_pane_stacon_ParamLimits

0x05e3,	// (0x0004810d) control_top_pane_stacon

0x0636,	// (0x00048160) signal_pane_stacon_ParamLimits

0x0636,	// (0x00048160) signal_pane_stacon

0x2661,	// (0x0004a18b) stacon_top_pane_g1_ParamLimits

0x2661,	// (0x0004a18b) stacon_top_pane_g1

0x065b,	// (0x00048185) title_pane_stacon_ParamLimits

0x065b,	// (0x00048185) title_pane_stacon

0x0685,	// (0x000481af) uni_indicator_pane_stacon_ParamLimits

0x0685,	// (0x000481af) uni_indicator_pane_stacon

0x069a,	// (0x000481c4) battery_pane_stacon_ParamLimits

0x069a,	// (0x000481c4) battery_pane_stacon

0x06de,	// (0x00048208) control_bottom_pane_stacon_ParamLimits

0x06de,	// (0x00048208) control_bottom_pane_stacon

0x0701,	// (0x0004822b) navi_pane_stacon_ParamLimits

0x0701,	// (0x0004822b) navi_pane_stacon

0x2683,	// (0x0004a1ad) stacon_bottom_pane_g1_ParamLimits

0x2683,	// (0x0004a1ad) stacon_bottom_pane_g1

0x00ff,	// (0x00047c29) aid_levels_signal_lsc_ParamLimits

0x00ff,	// (0x00047c29) aid_levels_signal_lsc

0x0116,	// (0x00047c40) signal_pane_stacon_g1_ParamLimits

0x0116,	// (0x00047c40) signal_pane_stacon_g1

0x012a,	// (0x00047c54) signal_pane_stacon_g2_ParamLimits

0x012a,	// (0x00047c54) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x000571ce) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000571ce) signal_pane_stacon_g

0x015f,	// (0x00047c89) title_pane_stacon_t1_ParamLimits

0x015f,	// (0x00047c89) title_pane_stacon_t1

0xc56a,	// (0x00054094) uni_indicator_pane_stacon_g1

0xc574,	// (0x0005409e) uni_indicator_pane_stacon_g2

0xc57e,	// (0x000540a8) uni_indicator_pane_stacon_g3

0xc588,	// (0x000540b2) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x000571da) uni_indicator_pane_stacon_g

0x0184,	// (0x00047cae) control_top_pane_stacon_g1

0x018c,	// (0x00047cb6) control_top_pane_stacon_t1_ParamLimits

0x018c,	// (0x00047cb6) control_top_pane_stacon_t1

0x01c3,	// (0x00047ced) aid_levels_battery_lsc_ParamLimits

0x01c3,	// (0x00047ced) aid_levels_battery_lsc

0x01db,	// (0x00047d05) battery_pane_stacon_g1_ParamLimits

0x01db,	// (0x00047d05) battery_pane_stacon_g1

0x01ed,	// (0x00047d17) battery_pane_stacon_g2_ParamLimits

0x01ed,	// (0x00047d17) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x000571e3) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x000571e3) battery_pane_stacon_g

0x022b,	// (0x00047d55) navi_icon_pane_stacon

0x023f,	// (0x00047d69) navi_navi_pane_stacon

0x022b,	// (0x00047d55) navi_text_pane_stacon

0x0255,	// (0x00047d7f) control_bottom_pane_stacon_g1

0x025d,	// (0x00047d87) control_bottom_pane_stacon_t1_ParamLimits

0x025d,	// (0x00047d87) control_bottom_pane_stacon_t1

0xafe1,	// (0x00052b0b) grid_app_pane_ParamLimits

0xafe1,	// (0x00052b0b) grid_app_pane

0xb019,	// (0x00052b43) scroll_pane_cp15_ParamLimits

0xb019,	// (0x00052b43) scroll_pane_cp15

0xb02e,	// (0x00052b58) cell_app_pane_ParamLimits

0xb02e,	// (0x00052b58) cell_app_pane

0xb079,	// (0x00052ba3) cell_app_pane_g1_ParamLimits

0xb079,	// (0x00052ba3) cell_app_pane_g1

0xe2d4,	// (0x00055dfe) cell_app_pane_g2_ParamLimits

0xe2d4,	// (0x00055dfe) cell_app_pane_g2

0x0001,

0xf6be,	// (0x000571e8) cell_app_pane_g_ParamLimits

0xf6be,	// (0x000571e8) cell_app_pane_g

0xb09d,	// (0x00052bc7) cell_app_pane_t1_ParamLimits

0xb09d,	// (0x00052bc7) cell_app_pane_t1

0xe2e0,	// (0x00055e0a) grid_highlight_pane_ParamLimits

0xe2e0,	// (0x00055e0a) grid_highlight_pane

0xad08,	// (0x00052832) cell_highlight_pane_g1

0xad10,	// (0x0005283a) cell_highlight_pane_g2

0xad18,	// (0x00052842) cell_highlight_pane_g3

0xad20,	// (0x0005284a) cell_highlight_pane_g4

0xad28,	// (0x00052852) cell_highlight_pane_g5

0xad30,	// (0x0005285a) cell_highlight_pane_g6

0xad38,	// (0x00052862) cell_highlight_pane_g7

0xad40,	// (0x0005286a) cell_highlight_pane_g8

0xad48,	// (0x00052872) cell_highlight_pane_g9

0x9fe3,	// (0x00051b0d) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00057196) cell_highlight_pane_g

0xe2f1,	// (0x00055e1b) bg_scroll_pane

0x035d,	// (0x00047e87) scroll_handle_pane

0xe338,	// (0x00055e62) scroll_bg_pane_g1

0xe34d,	// (0x00055e77) scroll_bg_pane_g2

0xe365,	// (0x00055e8f) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x000571ed) scroll_bg_pane_g

0xe37a,	// (0x00055ea4) scroll_handle_focus_pane_ParamLimits

0xe37a,	// (0x00055ea4) scroll_handle_focus_pane

0xe338,	// (0x00055e62) scroll_handle_pane_g1

0xe387,	// (0x00055eb1) scroll_handle_pane_g2

0xe365,	// (0x00055e8f) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x000571f4) scroll_handle_pane_g

0xadd3,	// (0x000528fd) bg_popup_sub_pane_cp21_ParamLimits

0xadd3,	// (0x000528fd) bg_popup_sub_pane_cp21

0xe39b,	// (0x00055ec5) popup_fep_japan_predictive_window_t1_ParamLimits

0xe39b,	// (0x00055ec5) popup_fep_japan_predictive_window_t1

0xe3b2,	// (0x00055edc) popup_fep_japan_predictive_window_t2_ParamLimits

0xe3b2,	// (0x00055edc) popup_fep_japan_predictive_window_t2

0xe3e5,	// (0x00055f0f) popup_fep_japan_predictive_window_t3_ParamLimits

0xe3e5,	// (0x00055f0f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x000571fb) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x000571fb) popup_fep_japan_predictive_window_t

0xa0d3,	// (0x00051bfd) bg_popup_sub_pane_cp23

0xe41c,	// (0x00055f46) listscroll_japin_cand_pane

0xe424,	// (0x00055f4e) popup_fep_japan_candidate_window_t1

0xe432,	// (0x00055f5c) candidate_pane_ParamLimits

0xe432,	// (0x00055f5c) candidate_pane

0xe444,	// (0x00055f6e) scroll_pane_cp30

0xe44e,	// (0x00055f78) list_single_popup_jap_candidate_pane_ParamLimits

0xe44e,	// (0x00055f78) list_single_popup_jap_candidate_pane

0xa0d3,	// (0x00051bfd) list_highlight_pane_cp30

0xe462,	// (0x00055f8c) list_single_popup_jap_candidate_pane_t1

0xb0d7,	// (0x00052c01) level_1_signal

0xb0e9,	// (0x00052c13) level_2_signal

0xb0fc,	// (0x00052c26) level_3_signal

0xb10f,	// (0x00052c39) level_4_signal

0xb122,	// (0x00052c4c) level_5_signal

0xb135,	// (0x00052c5f) level_6_signal

0xb148,	// (0x00052c72) level_7_signal

0xb0d7,	// (0x00052c01) level_1_battery

0xb0e9,	// (0x00052c13) level_2_battery

0xb0fc,	// (0x00052c26) level_3_battery

0xb10f,	// (0x00052c39) level_4_battery

0xb122,	// (0x00052c4c) level_5_battery

0xb135,	// (0x00052c5f) level_6_battery

0xb148,	// (0x00052c72) level_7_battery

0xe489,	// (0x00055fb3) list_menu_pane_ParamLimits

0xe489,	// (0x00055fb3) list_menu_pane

0xe49f,	// (0x00055fc9) scroll_pane_cp25_ParamLimits

0xe49f,	// (0x00055fc9) scroll_pane_cp25

0xe4b8,	// (0x00055fe2) list_double2_graphic_pane_cp2_ParamLimits

0xe4b8,	// (0x00055fe2) list_double2_graphic_pane_cp2

0xe4b8,	// (0x00055fe2) list_double2_large_graphic_pane_cp2_ParamLimits

0xe4b8,	// (0x00055fe2) list_double2_large_graphic_pane_cp2

0xe4b8,	// (0x00055fe2) list_double2_pane_cp2_ParamLimits

0xe4b8,	// (0x00055fe2) list_double2_pane_cp2

0xe4b8,	// (0x00055fe2) list_double_graphic_pane_cp2_ParamLimits

0xe4b8,	// (0x00055fe2) list_double_graphic_pane_cp2

0xe4b8,	// (0x00055fe2) list_double_large_graphic_pane_cp2_ParamLimits

0xe4b8,	// (0x00055fe2) list_double_large_graphic_pane_cp2

0xe4b8,	// (0x00055fe2) list_double_number_pane_cp2_ParamLimits

0xe4b8,	// (0x00055fe2) list_double_number_pane_cp2

0xe4b8,	// (0x00055fe2) list_double_pane_cp2_ParamLimits

0xe4b8,	// (0x00055fe2) list_double_pane_cp2

0xb15b,	// (0x00052c85) list_single_2graphic_pane_cp2_ParamLimits

0xb15b,	// (0x00052c85) list_single_2graphic_pane_cp2

0xb15b,	// (0x00052c85) list_single_graphic_heading_pane_cp2_ParamLimits

0xb15b,	// (0x00052c85) list_single_graphic_heading_pane_cp2

0xb15b,	// (0x00052c85) list_single_graphic_pane_cp2_ParamLimits

0xb15b,	// (0x00052c85) list_single_graphic_pane_cp2

0xb15b,	// (0x00052c85) list_single_heading_pane_cp2_ParamLimits

0xb15b,	// (0x00052c85) list_single_heading_pane_cp2

0xe4c8,	// (0x00055ff2) list_single_large_graphic_pane_cp2_ParamLimits

0xe4c8,	// (0x00055ff2) list_single_large_graphic_pane_cp2

0xb15b,	// (0x00052c85) list_single_number_heading_pane_cp2_ParamLimits

0xb15b,	// (0x00052c85) list_single_number_heading_pane_cp2

0xb15b,	// (0x00052c85) list_single_number_pane_cp2_ParamLimits

0xb15b,	// (0x00052c85) list_single_number_pane_cp2

0xb16f,	// (0x00052c99) list_single_pane_cp2_ParamLimits

0xb16f,	// (0x00052c99) list_single_pane_cp2

0xe4e1,	// (0x0005600b) bg_popup_sub_pane_cp22

0x050f,	// (0x00048039) popup_side_volume_key_window_g1

0x0539,	// (0x00048063) popup_side_volume_key_window_t1

0x0557,	// (0x00048081) volume_small_pane_cp1

0xa31e,	// (0x00051e48) bg_popup_sub_pane_cp24_ParamLimits

0xa31e,	// (0x00051e48) bg_popup_sub_pane_cp24

0xe4f7,	// (0x00056021) fep_china_uni_candidate_pane_ParamLimits

0xe4f7,	// (0x00056021) fep_china_uni_candidate_pane

0xe50b,	// (0x00056035) fep_china_uni_entry_pane

0xe51b,	// (0x00056045) popup_fep_china_uni_window_g1

0xe537,	// (0x00056061) fep_china_uni_entry_pane_g1

0xe541,	// (0x0005606b) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0005722c) fep_china_uni_entry_pane_g

0xe54b,	// (0x00056075) fep_entry_item_pane

0xe555,	// (0x0005607f) fep_candidate_item_pane

0xe55d,	// (0x00056087) fep_china_uni_candidate_pane_g1

0xe567,	// (0x00056091) fep_china_uni_candidate_pane_g2

0xe56f,	// (0x00056099) fep_china_uni_candidate_pane_g3

0xe577,	// (0x000560a1) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00057231) fep_china_uni_candidate_pane_g

0x9fe3,	// (0x00051b0d) fep_entry_item_pane_g1

0xe581,	// (0x000560ab) fep_entry_item_pane_t1_ParamLimits

0xe581,	// (0x000560ab) fep_entry_item_pane_t1

0xe597,	// (0x000560c1) fep_candidate_item_pane_t1_ParamLimits

0xe597,	// (0x000560c1) fep_candidate_item_pane_t1

0xe5ac,	// (0x000560d6) fep_candidate_item_pane_t2_ParamLimits

0xe5ac,	// (0x000560d6) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0005723a) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0005723a) fep_candidate_item_pane_t

0xa360,	// (0x00051e8a) list_highlight_pane_cp31_ParamLimits

0xa360,	// (0x00051e8a) list_highlight_pane_cp31

0xe5be,	// (0x000560e8) level_1_signal_lsc

0xe5c7,	// (0x000560f1) level_2_signal_lsc

0xe5d0,	// (0x000560fa) level_3_signal_lsc

0xe5d9,	// (0x00056103) level_4_signal_lsc

0xe5e2,	// (0x0005610c) level_5_signal_lsc

0xe5eb,	// (0x00056115) level_6_signal_lsc

0xe5f4,	// (0x0005611e) level_7_signal_lsc

0xe5f4,	// (0x0005611e) level_1_battery_lsc

0xe5fd,	// (0x00056127) level_2_battery_lsc

0xe606,	// (0x00056130) level_3_battery_lsc

0xe60f,	// (0x00056139) level_4_battery_lsc

0xe618,	// (0x00056142) level_5_battery_lsc

0xe621,	// (0x0005614b) level_6_battery_lsc

0xe5be,	// (0x000560e8) level_7_battery_lsc

0xe62a,	// (0x00056154) scroll_handle_focus_pane_g1

0xe633,	// (0x0005615d) scroll_handle_focus_pane_g2

0xe63c,	// (0x00056166) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0005723f) scroll_handle_focus_pane_g

0x9d6d,	// (0x00051897) list_single_2graphic_pane_g1_ParamLimits

0x9d6d,	// (0x00051897) list_single_2graphic_pane_g1

0xac1a,	// (0x00052744) list_single_2graphic_pane_g2_ParamLimits

0xac1a,	// (0x00052744) list_single_2graphic_pane_g2

0x0f8d,	// (0x00048ab7) list_single_2graphic_pane_g3_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_2graphic_pane_g3

0xb1fe,	// (0x00052d28) list_single_2graphic_pane_g4_ParamLimits

0xb1fe,	// (0x00052d28) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00057246) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00057246) list_single_2graphic_pane_g

0x9d79,	// (0x000518a3) list_single_2graphic_pane_t1_ParamLimits

0x9d79,	// (0x000518a3) list_single_2graphic_pane_t1

0xb20f,	// (0x00052d39) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb20f,	// (0x00052d39) list_double2_graphic_large_graphic_pane_g1

0x99d3,	// (0x000514fd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x99d3,	// (0x000514fd) list_double2_graphic_large_graphic_pane_g2

0x992c,	// (0x00051456) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x992c,	// (0x00051456) list_double2_graphic_large_graphic_pane_g3

0x9da7,	// (0x000518d1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9da7,	// (0x000518d1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0005724f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0005724f) list_double2_graphic_large_graphic_pane_g

0x9db3,	// (0x000518dd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9db3,	// (0x000518dd) list_double2_graphic_large_graphic_pane_t1

0x9dc9,	// (0x000518f3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9dc9,	// (0x000518f3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00057258) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00057258) list_double2_graphic_large_graphic_pane_t

0x2746,	// (0x0004a270) popup_fast_swap_window_ParamLimits

0x2746,	// (0x0004a270) popup_fast_swap_window

0x2764,	// (0x0004a28e) popup_side_volume_key_window

0x2782,	// (0x0004a2ac) stacon_top_pane

0x278c,	// (0x0004a2b6) status_pane_ParamLimits

0x278c,	// (0x0004a2b6) status_pane

0x9fd9,	// (0x00051b03) status_small_pane

0xa0d3,	// (0x00051bfd) control_pane

0xa0d3,	// (0x00051bfd) stacon_bottom_pane

0xac93,	// (0x000527bd) scroll_pane_cp121

0xac8a,	// (0x000527b4) set_content_pane

0xb221,	// (0x00052d4b) bg_active_tab_pane_g1_cp1

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp1

0xb22a,	// (0x00052d54) bg_active_tab_pane_g3_cp1

0xb221,	// (0x00052d4b) bg_passive_tab_pane_g1_cp1

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp1

0xb22a,	// (0x00052d54) bg_passive_tab_pane_g3_cp1

0xb233,	// (0x00052d5d) bg_active_tab_pane_g1_cp2

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp2

0xb23c,	// (0x00052d66) bg_active_tab_pane_g3_cp2

0xb233,	// (0x00052d5d) bg_passive_tab_pane_g1_cp2

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp2

0xb23c,	// (0x00052d66) bg_passive_tab_pane_g3_cp2

0xb245,	// (0x00052d6f) bg_active_tab_pane_g1_cp3

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp3

0xb24e,	// (0x00052d78) bg_active_tab_pane_g3_cp3

0xb245,	// (0x00052d6f) bg_passive_tab_pane_g1_cp3

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp3

0xb24e,	// (0x00052d78) bg_passive_tab_pane_g3_cp3

0xb257,	// (0x00052d81) bg_active_tab_pane_g1_cp4

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp4

0xb260,	// (0x00052d8a) bg_active_tab_pane_g3_cp4

0xb257,	// (0x00052d81) bg_passive_tab_pane_g1_cp4

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp4

0xb260,	// (0x00052d8a) bg_passive_tab_pane_g3_cp4

0x269f,	// (0x0004a1c9) bg_active_tab_pane_g1_cp5

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp5

0x26a8,	// (0x0004a1d2) bg_active_tab_pane_g3_cp5

0x269f,	// (0x0004a1c9) bg_passive_tab_pane_g1_cp5

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp5

0x26a8,	// (0x0004a1d2) bg_passive_tab_pane_g3_cp5

0x4d93,	// (0x0004c8bd) list_set_graphic_pane_ParamLimits

0x4d93,	// (0x0004c8bd) list_set_graphic_pane

0xa0d3,	// (0x00051bfd) bg_set_opt_pane_cp4

0x26c7,	// (0x0004a1f1) list_set_graphic_pane_g1_ParamLimits

0x26c7,	// (0x0004a1f1) list_set_graphic_pane_g1

0x26d3,	// (0x0004a1fd) list_set_graphic_pane_g2_ParamLimits

0x26d3,	// (0x0004a1fd) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0005725d) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0005725d) list_set_graphic_pane_g

0x0009,

0xfabd,	// (0x000575e7) volume_small_pane_cp_g

0x26f7,	// (0x0004a221) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x26f7,	// (0x0004a221) list_double2_large_graphic_pane_g1_cp2

0x2705,	// (0x0004a22f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2705,	// (0x0004a22f) list_double2_large_graphic_pane_g2_cp2

0x2716,	// (0x0004a240) list_double2_large_graphic_pane_g3_cp2

0x271e,	// (0x0004a248) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x271e,	// (0x0004a248) list_double2_large_graphic_pane_t1_cp2

0x2734,	// (0x0004a25e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2734,	// (0x0004a25e) list_double2_large_graphic_pane_t2_cp2

0x4309,	// (0x0004be33) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4309,	// (0x0004be33) list_double_large_graphic_pane_g1_cp2

0x431c,	// (0x0004be46) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x431c,	// (0x0004be46) list_double_large_graphic_pane_g2_cp2

0x289e,	// (0x0004a3c8) list_double_large_graphic_pane_g3_cp2

0x432d,	// (0x0004be57) list_double_large_graphic_pane_g4_cp

0x4335,	// (0x0004be5f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4335,	// (0x0004be5f) list_double_large_graphic_pane_t1_cp2

0x434c,	// (0x0004be76) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x434c,	// (0x0004be76) list_double_large_graphic_pane_t2_cp2

0x279a,	// (0x0004a2c4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x279a,	// (0x0004a2c4) list_double2_graphic_pane_g1_cp2

0x27a8,	// (0x0004a2d2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x27a8,	// (0x0004a2d2) list_double2_graphic_pane_g2_cp2

0x27b9,	// (0x0004a2e3) list_double2_graphic_pane_g3_cp2

0x27c3,	// (0x0004a2ed) list_double2_graphic_pane_t1_cp2_ParamLimits

0x27c3,	// (0x0004a2ed) list_double2_graphic_pane_t1_cp2

0x27d9,	// (0x0004a303) list_double2_graphic_pane_t2_cp2_ParamLimits

0x27d9,	// (0x0004a303) list_double2_graphic_pane_t2_cp2

0x2655,	// (0x0004a17f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2655,	// (0x0004a17f) list_single_number_heading_pane_g1_cp2

0x27eb,	// (0x0004a315) list_single_number_heading_pane_g2_cp2

0x27f3,	// (0x0004a31d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x27f3,	// (0x0004a31d) list_single_number_heading_pane_t1_cp2

0x2809,	// (0x0004a333) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2809,	// (0x0004a333) list_single_number_heading_pane_t2_cp2

0x281d,	// (0x0004a347) list_single_number_heading_pane_t3_cp2_ParamLimits

0x281d,	// (0x0004a347) list_single_number_heading_pane_t3_cp2

0x2655,	// (0x0004a17f) list_single_heading_pane_g1_cp2_ParamLimits

0x2655,	// (0x0004a17f) list_single_heading_pane_g1_cp2

0x27eb,	// (0x0004a315) list_single_heading_pane_g2_cp2

0x27f3,	// (0x0004a31d) list_single_heading_pane_t1_cp2_ParamLimits

0x27f3,	// (0x0004a31d) list_single_heading_pane_t1_cp2

0x4103,	// (0x0004bc2d) list_single_heading_pane_t2_cp2_ParamLimits

0x4103,	// (0x0004bc2d) list_single_heading_pane_t2_cp2

0x404b,	// (0x0004bb75) list_double_graphic_pane_g1_cp2_ParamLimits

0x404b,	// (0x0004bb75) list_double_graphic_pane_g1_cp2

0x4057,	// (0x0004bb81) list_double_graphic_pane_g2_cp2_ParamLimits

0x4057,	// (0x0004bb81) list_double_graphic_pane_g2_cp2

0x4066,	// (0x0004bb90) list_double_graphic_pane_g3_cp2

0x406e,	// (0x0004bb98) list_double_graphic_pane_t1_cp2_ParamLimits

0x406e,	// (0x0004bb98) list_double_graphic_pane_t1_cp2

0x4084,	// (0x0004bbae) list_double_graphic_pane_t2_cp2_ParamLimits

0x4084,	// (0x0004bbae) list_double_graphic_pane_t2_cp2

0x2892,	// (0x0004a3bc) list_double_number_pane_g1_cp2_ParamLimits

0x2892,	// (0x0004a3bc) list_double_number_pane_g1_cp2

0x289e,	// (0x0004a3c8) list_double_number_pane_g2_cp2

0x400f,	// (0x0004bb39) list_double_number_pane_t1_cp2_ParamLimits

0x400f,	// (0x0004bb39) list_double_number_pane_t1_cp2

0x4023,	// (0x0004bb4d) list_double_number_pane_t2_cp2_ParamLimits

0x4023,	// (0x0004bb4d) list_double_number_pane_t2_cp2

0x4039,	// (0x0004bb63) list_double_number_pane_t3_cp2_ParamLimits

0x4039,	// (0x0004bb63) list_double_number_pane_t3_cp2

0x3ef8,	// (0x0004ba22) list_single_graphic_pane_g1_cp2_ParamLimits

0x3ef8,	// (0x0004ba22) list_single_graphic_pane_g1_cp2

0x2903,	// (0x0004a42d) list_single_graphic_pane_g2_cp2_ParamLimits

0x2903,	// (0x0004a42d) list_single_graphic_pane_g2_cp2

0x290f,	// (0x0004a439) list_single_graphic_pane_g3_cp2

0x3ece,	// (0x0004b9f8) list_single_graphic_pane_t1_cp2_ParamLimits

0x3ece,	// (0x0004b9f8) list_single_graphic_pane_t1_cp2

0x2903,	// (0x0004a42d) list_single_number_pane_g1_cp2_ParamLimits

0x2903,	// (0x0004a42d) list_single_number_pane_g1_cp2

0x290f,	// (0x0004a439) list_single_number_pane_g2_cp2

0x3ece,	// (0x0004b9f8) list_single_number_pane_t1_cp2_ParamLimits

0x3ece,	// (0x0004b9f8) list_single_number_pane_t1_cp2

0x3ee4,	// (0x0004ba0e) list_single_number_pane_t2_cp2_ParamLimits

0x3ee4,	// (0x0004ba0e) list_single_number_pane_t2_cp2

0x2705,	// (0x0004a22f) list_double2_pane_g1_cp2_ParamLimits

0x2705,	// (0x0004a22f) list_double2_pane_g1_cp2

0x2716,	// (0x0004a240) list_double2_pane_g2_cp2

0x286a,	// (0x0004a394) list_double2_pane_t1_cp2_ParamLimits

0x286a,	// (0x0004a394) list_double2_pane_t1_cp2

0x2880,	// (0x0004a3aa) list_double2_pane_t2_cp2_ParamLimits

0x2880,	// (0x0004a3aa) list_double2_pane_t2_cp2

0x2892,	// (0x0004a3bc) list_double_pane_g1_cp2_ParamLimits

0x2892,	// (0x0004a3bc) list_double_pane_g1_cp2

0x289e,	// (0x0004a3c8) list_double_pane_g2_cp2

0x28a6,	// (0x0004a3d0) list_double_pane_t1_cp2_ParamLimits

0x28a6,	// (0x0004a3d0) list_double_pane_t1_cp2

0x28bc,	// (0x0004a3e6) list_double_pane_t2_cp2_ParamLimits

0x28bc,	// (0x0004a3e6) list_double_pane_t2_cp2

0x28f3,	// (0x0004a41d) list_single_pane_cp2_g3

0x2903,	// (0x0004a42d) list_single_pane_g1_cp2_ParamLimits

0x2903,	// (0x0004a42d) list_single_pane_g1_cp2

0x290f,	// (0x0004a439) list_single_pane_g2_cp2

0x2917,	// (0x0004a441) list_single_pane_t1_cp2_ParamLimits

0x2917,	// (0x0004a441) list_single_pane_t1_cp2

0x292f,	// (0x0004a459) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x292f,	// (0x0004a459) list_single_large_graphic_pane_g1_cp2

0x293d,	// (0x0004a467) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x293d,	// (0x0004a467) list_single_large_graphic_pane_g2_cp2

0x2949,	// (0x0004a473) list_single_large_graphic_pane_g3_cp2

0x2951,	// (0x0004a47b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2951,	// (0x0004a47b) list_single_large_graphic_pane_g4_cp1

0x296b,	// (0x0004a495) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x296b,	// (0x0004a495) list_single_large_graphic_pane_t1_cp2

0x3e98,	// (0x0004b9c2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3e98,	// (0x0004b9c2) list_single_graphic_heading_pane_g1_cp2

0x3e65,	// (0x0004b98f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3e65,	// (0x0004b98f) list_single_graphic_heading_pane_g4_cp2

0x290f,	// (0x0004a439) list_single_graphic_heading_pane_g5_cp2

0x3ea4,	// (0x0004b9ce) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3ea4,	// (0x0004b9ce) list_single_graphic_heading_pane_t1_cp2

0x3eba,	// (0x0004b9e4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3eba,	// (0x0004b9e4) list_single_graphic_heading_pane_t2_cp2

0x3e59,	// (0x0004b983) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3e59,	// (0x0004b983) list_single_2graphic_pane_g1_cp2

0x3e65,	// (0x0004b98f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3e65,	// (0x0004b98f) list_single_2graphic_pane_g2_cp2

0x290f,	// (0x0004a439) list_single_2graphic_pane_g3_cp2

0x3e76,	// (0x0004b9a0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3e76,	// (0x0004b9a0) list_single_2graphic_pane_g4_cp2

0x3e82,	// (0x0004b9ac) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3e82,	// (0x0004b9ac) list_single_2graphic_pane_t1_cp2

0x9fe3,	// (0x00051b0d) list_highlight_pane_g10_cp1

0x3a31,	// (0x0004b55b) list_highlight_pane_g1_cp1

0x3a39,	// (0x0004b563) list_highlight_pane_g2_cp1

0x3a41,	// (0x0004b56b) list_highlight_pane_g3_cp1

0x3a49,	// (0x0004b573) list_highlight_pane_g4_cp1

0x3a51,	// (0x0004b57b) list_highlight_pane_g5_cp1

0x3a59,	// (0x0004b583) list_highlight_pane_g6_cp1

0x3a61,	// (0x0004b58b) list_highlight_pane_g7_cp1

0x3a69,	// (0x0004b593) list_highlight_pane_g8_cp1

0x3a71,	// (0x0004b59b) list_highlight_pane_g9_cp1

0xca5f,	// (0x00054589) form_field_slider_pane_t3

0xca6d,	// (0x00054597) form_field_slider_pane_t4

0x396d,	// (0x0004b497) slider_form_pane_ParamLimits

0x396d,	// (0x0004b497) slider_form_pane

0xa0d3,	// (0x00051bfd) control_abbreviations

0xa0d3,	// (0x00051bfd) control_conventions

0xa0d3,	// (0x00051bfd) control_definitions

0xa0d3,	// (0x00051bfd) format_table_attribute

0x4159,	// (0x0004bc83) bg_popup_preview_window_pane_g9

0xa0d3,	// (0x00051bfd) format_table_data2

0xa0d3,	// (0x00051bfd) format_table_data3

0xa0d3,	// (0x00051bfd) format_table_data_example

0x0008,

0xa0d3,	// (0x00051bfd) intro_purpose

0xf8ca,	// (0x000573f4) bg_popup_preview_window_pane_g

0xa0d3,	// (0x00051bfd) texts_category

0xa0d3,	// (0x00051bfd) texts_graphics

0x2981,	// (0x0004a4ab) text_digital

0x2990,	// (0x0004a4ba) text_primary

0x299f,	// (0x0004a4c9) text_primary_small

0x29ae,	// (0x0004a4d8) text_secondary

0x29bd,	// (0x0004a4e7) text_title

0x48bc,	// (0x0004c3e6) bg_passive_tab_pane_g1_cp3_srt

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp3_srt

0x48c5,	// (0x0004c3ef) bg_passive_tab_pane_g3_cp3_srt

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp3_srt_ParamLimits

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp3_srt

0x48ce,	// (0x0004c3f8) tabs_4_active_pane_srt_g1

0xce47,	// (0x00054971) tabs_4_active_pane_srt_t1_ParamLimits

0xce47,	// (0x00054971) tabs_4_active_pane_srt_t1

0x48bc,	// (0x0004c3e6) bg_active_tab_pane_g1_cp3_copy1

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp3_copy1

0x48c5,	// (0x0004c3ef) bg_active_tab_pane_g3_cp3_copy1

0xa360,	// (0x00051e8a) tabs_2_long_active_pane_srt_ParamLimits

0xa360,	// (0x00051e8a) tabs_2_long_active_pane_srt

0xa360,	// (0x00051e8a) tabs_2_long_passive_pane_srt_ParamLimits

0xa360,	// (0x00051e8a) tabs_2_long_passive_pane_srt

0x2cf3,	// (0x0004a81d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2cf3,	// (0x0004a81d) bg_passive_tab_pane_cp4_srt

0x4593,	// (0x0004c0bd) bg_passive_tab_pane_g1_cp4_srt

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp4_srt

0x459c,	// (0x0004c0c6) bg_passive_tab_pane_g3_cp4_srt

0xa360,	// (0x00051e8a) bg_active_tab_pane_cp4_srt_ParamLimits

0xa360,	// (0x00051e8a) bg_active_tab_pane_cp4_srt

0xcc3f,	// (0x00054769) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcc3f,	// (0x00054769) tabs_2_long_active_pane_srt_t1

0x4593,	// (0x0004c0bd) bg_active_tab_pane_g1_cp4_srt

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp4_srt

0x459c,	// (0x0004c0c6) bg_active_tab_pane_g3_cp4_srt

0xa31e,	// (0x00051e48) tabs_3_long_active_pane_srt_ParamLimits

0xa31e,	// (0x00051e48) tabs_3_long_active_pane_srt

0xa31e,	// (0x00051e48) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa31e,	// (0x00051e48) tabs_3_long_passive_pane_cp_srt

0xa31e,	// (0x00051e48) tabs_3_long_passive_pane_srt_ParamLimits

0xa31e,	// (0x00051e48) tabs_3_long_passive_pane_srt

0x2cf3,	// (0x0004a81d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2cf3,	// (0x0004a81d) bg_passive_tab_pane_cp5_srt

0x269f,	// (0x0004a1c9) bg_passive_tab_pane_g1_cp5_srt

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp5_srt

0x26a8,	// (0x0004a1d2) bg_passive_tab_pane_g3_cp5_srt

0xa360,	// (0x00051e8a) bg_active_tab_pane_cp5_srt_ParamLimits

0xa360,	// (0x00051e8a) bg_active_tab_pane_cp5_srt

0xcc29,	// (0x00054753) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcc29,	// (0x00054753) tabs_3_long_active_pane_srt_t1

0x269f,	// (0x0004a1c9) bg_active_tab_pane_g1_cp5_srt

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp5_srt

0x26a8,	// (0x0004a1d2) bg_active_tab_pane_g3_cp5_srt

0x4573,	// (0x0004c09d) navi_text_pane_srt_t1

0x456b,	// (0x0004c095) navi_icon_pane_srt_g1

0x2b95,	// (0x0004a6bf) midp_editing_number_pane_srt

0x29cc,	// (0x0004a4f6) midp_ticker_pane_srt

0x2b9d,	// (0x0004a6c7) midp_ticker_pane_srt_g1

0x2ba5,	// (0x0004a6cf) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0005727c) midp_ticker_pane_srt_g

0x2bad,	// (0x0004a6d7) midp_ticker_pane_srt_t1

0x455c,	// (0x0004c086) midp_editing_number_pane_t1_copy1

0xb269,	// (0x00052d93) listscroll_midp_pane

0xb269,	// (0x00052d93) midp_form_pane

0x2a43,	// (0x0004a56d) midp_info_popup_window_ParamLimits

0x2a43,	// (0x0004a56d) midp_info_popup_window

0xadd3,	// (0x000528fd) bg_popup_sub_pane_cp50_ParamLimits

0xadd3,	// (0x000528fd) bg_popup_sub_pane_cp50

0x3653,	// (0x0004b17d) listscroll_midp_info_pane_ParamLimits

0x3653,	// (0x0004b17d) listscroll_midp_info_pane

0x3633,	// (0x0004b15d) listscroll_form_midp_pane_ParamLimits

0x3633,	// (0x0004b15d) listscroll_form_midp_pane

0x363f,	// (0x0004b169) scroll_bar_cp050

0x3633,	// (0x0004b15d) list_midp_pane

0x5370,	// (0x0004ce9a) signal_pane_g2_cp

0x354d,	// (0x0004b077) listscroll_midp_info_pane_t1_ParamLimits

0x354d,	// (0x0004b077) listscroll_midp_info_pane_t1

0x3565,	// (0x0004b08f) listscroll_midp_info_pane_t2_ParamLimits

0x3565,	// (0x0004b08f) listscroll_midp_info_pane_t2

0x35a3,	// (0x0004b0cd) listscroll_midp_info_pane_t3_ParamLimits

0x35a3,	// (0x0004b0cd) listscroll_midp_info_pane_t3

0x35dd,	// (0x0004b107) listscroll_midp_info_pane_t4_ParamLimits

0x35dd,	// (0x0004b107) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0005732f) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0005732f) listscroll_midp_info_pane_t

0xae36,	// (0x00052960) scroll_pane_cp21

0x34e7,	// (0x0004b011) form_midp_field_choice_group_pane

0x34f0,	// (0x0004b01a) form_midp_field_text_pane

0x3533,	// (0x0004b05d) form_midp_field_time_pane

0x353b,	// (0x0004b065) form_midp_gauge_slider_pane

0x3544,	// (0x0004b06e) form_midp_gauge_wait_pane

0xa0d3,	// (0x00051bfd) form_midp_image_pane

0x9ddb,	// (0x00051905) list_single_midp_pane_ParamLimits

0x9ddb,	// (0x00051905) list_single_midp_pane

0xca3a,	// (0x00054564) form_midp_field_text_pane_t1

0x329d,	// (0x0004adc7) input_focus_pane_cp050

0x34d6,	// (0x0004b000) list_midp_form_text_pane

0x347a,	// (0x0004afa4) form_midp_field_choice_group_pane_t1

0x3488,	// (0x0004afb2) input_focus_pane_cp051

0x349c,	// (0x0004afc6) list_midp_choice_pane

0xa0d3,	// (0x00051bfd) status_idle_pane

0x345e,	// (0x0004af88) form_midp_field_time_pane_t1

0x9fe3,	// (0x00051b0d) wait_anim_pane_g2_copy1

0x346c,	// (0x0004af96) form_midp_field_time_pane_t2

0x0001,

0x2af3,	// (0x0004a61d) aid_navinavi_width_2_pane

0xf800,	// (0x0005732a) form_midp_field_time_pane_t

0xa0d3,	// (0x00051bfd) input_focus_pane_cp052

0xa0d3,	// (0x00051bfd) bg_input_focus_pane_cp040

0x341e,	// (0x0004af48) form_midp_gauge_slider_pane_t1

0x342c,	// (0x0004af56) form_midp_gauge_slider_pane_t2

0xca1e,	// (0x00054548) form_midp_gauge_slider_pane_t3

0xca2c,	// (0x00054556) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00057321) form_midp_gauge_slider_pane_t

0x3456,	// (0x0004af80) form_midp_slider_pane

0xa360,	// (0x00051e8a) bg_input_focus_pane_cp041_ParamLimits

0xa360,	// (0x00051e8a) bg_input_focus_pane_cp041

0x33eb,	// (0x0004af15) form_midp_gauge_wait_pane_t1_ParamLimits

0x33eb,	// (0x0004af15) form_midp_gauge_wait_pane_t1

0x33fd,	// (0x0004af27) form_midp_gauge_wait_pane_t2_ParamLimits

0x33fd,	// (0x0004af27) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0005731c) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0005731c) form_midp_gauge_wait_pane_t

0x340f,	// (0x0004af39) form_midp_wait_pane_ParamLimits

0x340f,	// (0x0004af39) form_midp_wait_pane

0x33b3,	// (0x0004aedd) form_midp_image_pane_g1

0x33bc,	// (0x0004aee6) form_midp_image_pane_t1

0x33cb,	// (0x0004aef5) form_midp_image_pane_t2

0x33da,	// (0x0004af04) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x00057315) form_midp_image_pane_t

0x33aa,	// (0x0004aed4) list_single_midp_pane_g1

0xeebf,	// (0x000569e9) list_single_midp_pane_t1

0xca07,	// (0x00054531) list_midp_form_item_pane_ParamLimits

0xca07,	// (0x00054531) list_midp_form_item_pane

0x2a9b,	// (0x0004a5c5) list_midp_form_item_pane_t1

0x2aaa,	// (0x0004a5d4) midp_ticker_pane_g1

0x2ab6,	// (0x0004a5e0) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00057262) midp_ticker_pane_g

0xb30d,	// (0x00052e37) midp_ticker_pane_t1

0xcdc8,	// (0x000548f2) midp_editing_number_pane_t1

0x47a7,	// (0x0004c2d1) midp_editing_number_pane

0x47b6,	// (0x0004c2e0) midp_ticker_pane

0x454c,	// (0x0004c076) ai_message_heading_pane

0xa0d3,	// (0x00051bfd) bg_popup_window_pane_cp14

0x4554,	// (0x0004c07e) listscroll_ai_message_pane

0x44d2,	// (0x0004bffc) ai_message_heading_pane_g1_ParamLimits

0x44d2,	// (0x0004bffc) ai_message_heading_pane_g1

0x44de,	// (0x0004c008) ai_message_heading_pane_g2_ParamLimits

0x44de,	// (0x0004c008) ai_message_heading_pane_g2

0x44ec,	// (0x0004c016) ai_message_heading_pane_g3_ParamLimits

0x44ec,	// (0x0004c016) ai_message_heading_pane_g3

0x44f8,	// (0x0004c022) ai_message_heading_pane_g4_ParamLimits

0x44f8,	// (0x0004c022) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x00057456) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x00057456) ai_message_heading_pane_g

0x4504,	// (0x0004c02e) ai_message_heading_pane_t1_ParamLimits

0x4504,	// (0x0004c02e) ai_message_heading_pane_t1

0x451e,	// (0x0004c048) ai_message_heading_pane_t2_ParamLimits

0x451e,	// (0x0004c048) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0005745f) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0005745f) ai_message_heading_pane_t

0x4532,	// (0x0004c05c) bg_popup_heading_pane_cp1_ParamLimits

0x4532,	// (0x0004c05c) bg_popup_heading_pane_cp1

0x44c0,	// (0x0004bfea) list_ai_message_pane_ParamLimits

0x44c0,	// (0x0004bfea) list_ai_message_pane

0xae36,	// (0x00052960) scroll_pane_cp10

0x445c,	// (0x0004bf86) list_ai_message_pane_g1

0x4464,	// (0x0004bf8e) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00057433) list_ai_message_pane_g

0x446c,	// (0x0004bf96) list_ai_message_pane_t1_ParamLimits

0x446c,	// (0x0004bf96) list_ai_message_pane_t1

0x4481,	// (0x0004bfab) list_ai_message_pane_t2_ParamLimits

0x4481,	// (0x0004bfab) list_ai_message_pane_t2

0x4496,	// (0x0004bfc0) list_ai_message_pane_t3_ParamLimits

0x4496,	// (0x0004bfc0) list_ai_message_pane_t3

0x44ab,	// (0x0004bfd5) list_ai_message_pane_t4_ParamLimits

0x44ab,	// (0x0004bfd5) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x00057438) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x00057438) list_ai_message_pane_t

0xcc0f,	// (0x00054739) cell_ai_soft_ind_pane_ParamLimits

0xcc0f,	// (0x00054739) cell_ai_soft_ind_pane

0x2ad4,	// (0x0004a5fe) cell_ai_soft_ind_pane_g1_ParamLimits

0x2ad4,	// (0x0004a5fe) cell_ai_soft_ind_pane_g1

0xa0d3,	// (0x00051bfd) grid_highlight_cp1

0x2ae1,	// (0x0004a60b) text_secondary_cp56_ParamLimits

0x2ae1,	// (0x0004a60b) text_secondary_cp56

0x441a,	// (0x0004bf44) example_general_pane_ParamLimits

0x441a,	// (0x0004bf44) example_general_pane

0x4426,	// (0x0004bf50) example_parent_pane_g1_ParamLimits

0x4426,	// (0x0004bf50) example_parent_pane_g1

0x4432,	// (0x0004bf5c) example_parent_pane_t1_ParamLimits

0x4432,	// (0x0004bf5c) example_parent_pane_t1

0xb883,	// (0x000533ad) popup_preview_text_window_ParamLimits

0xb883,	// (0x000533ad) popup_preview_text_window

0x28fb,	// (0x0004a425) list_single_pane_cp2_g4

0xa711,	// (0x0005223b) bg_popup_preview_window_pane_ParamLimits

0xa711,	// (0x0005223b) bg_popup_preview_window_pane

0x4163,	// (0x0004bc8d) popup_preview_text_window_t1_ParamLimits

0x4163,	// (0x0004bc8d) popup_preview_text_window_t1

0x4181,	// (0x0004bcab) popup_preview_text_window_t2_ParamLimits

0x4181,	// (0x0004bcab) popup_preview_text_window_t2

0x41ca,	// (0x0004bcf4) popup_preview_text_window_t3_ParamLimits

0x41ca,	// (0x0004bcf4) popup_preview_text_window_t3

0x420f,	// (0x0004bd39) popup_preview_text_window_t4_ParamLimits

0x420f,	// (0x0004bd39) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x00057407) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x00057407) popup_preview_text_window_t

0x428d,	// (0x0004bdb7) scroll_pane_cp11

0x3229,	// (0x0004ad53) bg_popup_preview_window_pane_g1

0x4117,	// (0x0004bc41) bg_popup_preview_window_pane_g2

0x4121,	// (0x0004bc4b) bg_popup_preview_window_pane_g3

0x412b,	// (0x0004bc55) bg_popup_preview_window_pane_g4

0x4135,	// (0x0004bc5f) bg_popup_preview_window_pane_g5

0x413f,	// (0x0004bc69) bg_popup_preview_window_pane_g6

0x4147,	// (0x0004bc71) bg_popup_preview_window_pane_g7

0x414f,	// (0x0004bc79) bg_popup_preview_window_pane_g8

0xf2b0,	// (0x00056dda) aid_popup_width_pane

0xb7f3,	// (0x0005331d) popup_midp_note_alarm_window_ParamLimits

0xb7f3,	// (0x0005331d) popup_midp_note_alarm_window

0xaca4,	// (0x000527ce) data_form_pane_ParamLimits

0x9c5e,	// (0x00051788) form_field_data_pane_g1

0x9c68,	// (0x00051792) form_field_data_pane_t1_ParamLimits

0xacb0,	// (0x000527da) input_focus_pane_ParamLimits

0xecf0,	// (0x0005681a) data_form_wide_pane_ParamLimits

0xed01,	// (0x0005682b) form_field_data_wide_pane_g1

0xed0d,	// (0x00056837) form_field_data_wide_pane_t1_ParamLimits

0xa9d2,	// (0x000524fc) input_focus_pane_cp6_ParamLimits

0xade1,	// (0x0005290b) input_popup_find_pane_g1_ParamLimits

0xade1,	// (0x0005290b) input_popup_find_pane_g1

0x01fe,	// (0x00047d28) aid_navi_side_left_pane

0x0213,	// (0x00047d3d) aid_navi_side_right_pane

0x3b2c,	// (0x0004b656) bg_popup_window_pane_cp30_ParamLimits

0x3b2c,	// (0x0004b656) bg_popup_window_pane_cp30

0x3ba6,	// (0x0004b6d0) popup_midp_note_alarm_window_g1_ParamLimits

0x3ba6,	// (0x0004b6d0) popup_midp_note_alarm_window_g1

0x3bd6,	// (0x0004b700) popup_midp_note_alarm_window_t1_ParamLimits

0x3bd6,	// (0x0004b700) popup_midp_note_alarm_window_t1

0x3c77,	// (0x0004b7a1) popup_midp_note_alarm_window_t2_ParamLimits

0x3c77,	// (0x0004b7a1) popup_midp_note_alarm_window_t2

0x3d25,	// (0x0004b84f) popup_midp_note_alarm_window_t3_ParamLimits

0x3d25,	// (0x0004b84f) popup_midp_note_alarm_window_t3

0x3d57,	// (0x0004b881) popup_midp_note_alarm_window_t4_ParamLimits

0x3d57,	// (0x0004b881) popup_midp_note_alarm_window_t4

0x3d7d,	// (0x0004b8a7) popup_midp_note_alarm_window_t5_ParamLimits

0x3d7d,	// (0x0004b8a7) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x000573a4) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x000573a4) popup_midp_note_alarm_window_t

0x3e29,	// (0x0004b953) wait_bar_pane_cp1_ParamLimits

0x3e29,	// (0x0004b953) wait_bar_pane_cp1

0xa0d3,	// (0x00051bfd) wait_anim_pane_copy1

0xa0d3,	// (0x00051bfd) wait_border_pane_copy1

0x3811,	// (0x0004b33b) wait_border_pane_g1_copy1

0xed27,	// (0x00056851) form_field_popup_pane_g1

0x9c82,	// (0x000517ac) form_field_popup_pane_t1_ParamLimits

0xacb0,	// (0x000527da) input_focus_pane_cp7_ParamLimits

0xacde,	// (0x00052808) list_form_pane_ParamLimits

0xed2f,	// (0x00056859) form_field_popup_wide_pane_g1

0xed37,	// (0x00056861) form_field_popup_wide_pane_t1_ParamLimits

0xacb0,	// (0x000527da) input_focus_pane_cp8_ParamLimits

0xacea,	// (0x00052814) list_form_wide_pane_ParamLimits

0x4957,	// (0x0004c481) aid_size_cell_graphic_pane

0x9d01,	// (0x0005182b) data_form_pane_t1_ParamLimits

0x9df5,	// (0x0005191f) data_form_wide_pane_t1_ParamLimits

0xc66e,	// (0x00054198) bg_status_flat_pane

0xa25a,	// (0x00051d84) title_pane_t1_ParamLimits

0xa2e6,	// (0x00051e10) title_pane_t2_ParamLimits

0xa30c,	// (0x00051e36) title_pane_t3_ParamLimits

0xf532,	// (0x0005705c) title_pane_t_ParamLimits

0xb0d7,	// (0x00052c01) level_1_signal_ParamLimits

0xb0e9,	// (0x00052c13) level_2_signal_ParamLimits

0xb0fc,	// (0x00052c26) level_3_signal_ParamLimits

0xb10f,	// (0x00052c39) level_4_signal_ParamLimits

0xb122,	// (0x00052c4c) level_5_signal_ParamLimits

0xb135,	// (0x00052c5f) level_6_signal_ParamLimits

0xb148,	// (0x00052c72) level_7_signal_ParamLimits

0xb0d7,	// (0x00052c01) level_1_battery_ParamLimits

0xb0e9,	// (0x00052c13) level_2_battery_ParamLimits

0xb0fc,	// (0x00052c26) level_3_battery_ParamLimits

0xb10f,	// (0x00052c39) level_4_battery_ParamLimits

0xb122,	// (0x00052c4c) level_5_battery_ParamLimits

0xb135,	// (0x00052c5f) level_6_battery_ParamLimits

0xb148,	// (0x00052c72) level_7_battery_ParamLimits

0x3a31,	// (0x0004b55b) bg_status_flat_pane_g1

0x3a39,	// (0x0004b563) bg_status_flat_pane_g2

0x3a41,	// (0x0004b56b) bg_status_flat_pane_g3

0x3a49,	// (0x0004b573) bg_status_flat_pane_g4

0x3a51,	// (0x0004b57b) bg_status_flat_pane_g5

0x3a59,	// (0x0004b583) bg_status_flat_pane_g6

0x3a61,	// (0x0004b58b) bg_status_flat_pane_g7

0xa334,	// (0x00051e5e) tabs_3_active_pane_t1_ParamLimits

0xa334,	// (0x00051e5e) tabs_3_passive_pane_t1_ParamLimits

0xa34e,	// (0x00051e78) tabs_4_active_pane_t1_ParamLimits

0xa34e,	// (0x00051e78) tabs_4_1_passive_pane_t1_ParamLimits

0xae78,	// (0x000529a2) tabs_2_active_pane_t1_ParamLimits

0xae78,	// (0x000529a2) tabs_2_passive_pane_t1_ParamLimits

0xa360,	// (0x00051e8a) bg_active_tab_pane_cp4_ParamLimits

0xae8a,	// (0x000529b4) tabs_2_long_active_pane_t1_ParamLimits

0x2cf3,	// (0x0004a81d) bg_passive_tab_pane_cp4_ParamLimits

0x0fe5,	// (0x00048b0f) list_single_midp_graphic_pane_t1_ParamLimits

0xa360,	// (0x00051e8a) bg_active_tab_pane_cp5_ParamLimits

0xae9d,	// (0x000529c7) tabs_3_long_active_pane_t1_ParamLimits

0x2cf3,	// (0x0004a81d) bg_passive_tab_pane_cp5_ParamLimits

0x0fe5,	// (0x00048b0f) list_single_midp_graphic_pane_t1

0xc66e,	// (0x00054198) bg_status_flat_pane_ParamLimits

0x2ead,	// (0x0004a9d7) indicator_pane_cp2_ParamLimits

0x2ead,	// (0x0004a9d7) indicator_pane_cp2

0xc804,	// (0x0005432e) navi_pane_srt_ParamLimits

0xc804,	// (0x0005432e) navi_pane_srt

0x3014,	// (0x0004ab3e) popup_clock_digital_analogue_window_cp1

0xa479,	// (0x00051fa3) indicator_pane_t1

0x29cc,	// (0x0004a4f6) copy_highlight_pane

0x29cc,	// (0x0004a4f6) cursor_graphics_pane

0x29cc,	// (0x0004a4f6) graphic_within_text_pane

0x29cc,	// (0x0004a4f6) link_highlight_pane

0x4250,	// (0x0004bd7a) popup_preview_text_window_t5_ParamLimits

0x4250,	// (0x0004bd7a) popup_preview_text_window_t5

0x2afd,	// (0x0004a627) cursor_digital_pane

0x2afd,	// (0x0004a627) cursor_primary_pane

0x2b0e,	// (0x0004a638) cursor_primary_small_pane

0x2b16,	// (0x0004a640) cursor_secondary_pane

0x2b1e,	// (0x0004a648) cursor_title_pane

0x2afd,	// (0x0004a627) link_highlight_digital_pane

0x2b05,	// (0x0004a62f) link_highlight_primary_pane

0x2b0e,	// (0x0004a638) link_highlight_primary_small_pane

0x2b16,	// (0x0004a640) link_highlight_secondary_pane

0x2b1e,	// (0x0004a648) link_highlight_title_pane

0x2afd,	// (0x0004a627) copy_highlight_digital_pane

0x2afd,	// (0x0004a627) copy_highlight_primary_pane

0x2b0e,	// (0x0004a638) copy_highlight_primary_small_pane

0x2b16,	// (0x0004a640) copy_highlight_secondary_pane

0x2b1e,	// (0x0004a648) copy_highlight_title_pane

0x2b16,	// (0x0004a640) graphic_text_digital_pane

0x3acf,	// (0x0004b5f9) graphic_text_primary_pane

0x3ad8,	// (0x0004b602) graphic_text_primary_small_pane

0x2b0e,	// (0x0004a638) graphic_text_secondary_pane

0x2afd,	// (0x0004a627) graphic_text_title_pane

0xb31f,	// (0x00052e49) cursor_primary_pane_g1

0x3ac1,	// (0x0004b5eb) cursor_text_primary_t1

0xca8f,	// (0x000545b9) cursor_primary_small_pane_g1

0x3ab3,	// (0x0004b5dd) cursor_text_primary_small_t1

0xca85,	// (0x000545af) cursor_primary_small_pane_g1_copy1

0x3a9b,	// (0x0004b5c5) cursor_text_primary_small_t1_copy1

0x3a79,	// (0x0004b5a3) cursor_text_title_t1

0xca7b,	// (0x000545a5) cursor_title_pane_g1

0xb31f,	// (0x00052e49) cursor_digital_pane_g1

0x2b30,	// (0x0004a65a) cursor_text_digital_t1

0x2b3e,	// (0x0004a668) link_highlight_primary_pane_g1

0x3a22,	// (0x0004b54c) link_highlight_primary_pane_t1

0x2b3e,	// (0x0004a668) link_highlight_primary_small_pane_g1

0x2b46,	// (0x0004a670) link_highlight_primary_small_pane_t1

0x2b55,	// (0x0004a67f) link_highlight_secondary_pane_g1

0x2b5d,	// (0x0004a687) link_highlight_secondary_pane_t1

0x3996,	// (0x0004b4c0) link_highlight_title_pane_g1

0x399e,	// (0x0004b4c8) link_highlight_title_pane_t1

0x397f,	// (0x0004b4a9) link_highlight_digital_pane_g1

0x3987,	// (0x0004b4b1) link_highlight_digital_pane_t1

0x3847,	// (0x0004b371) copy_highlight_primary_pane_g1

0x385e,	// (0x0004b388) copy_highlight_primary_pane_t1

0x3847,	// (0x0004b371) copy_highlight_primary_small_pane_g1

0x384f,	// (0x0004b379) copy_highlight_primary_small_pane_t1

0x2b6c,	// (0x0004a696) copy_highlight_secondary_pane_g1

0x2b74,	// (0x0004a69e) copy_highlight_secondary_pane_t1

0x3830,	// (0x0004b35a) copy_highlight_title_pane_g1

0x3838,	// (0x0004b362) copy_highlight_title_pane_t1

0x3847,	// (0x0004b371) copy_highlight_digital_pane_g1

0x4b29,	// (0x0004c653) copy_highlight_digital_pane_t1

0x4a7d,	// (0x0004c5a7) graphic_text_primary_pane_g1

0x4b0d,	// (0x0004c637) graphic_text_primary_pane_t1

0x4b1b,	// (0x0004c645) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x000574d3) graphic_text_primary_pane_t

0x4ae9,	// (0x0004c613) graphic_text_primary_small_pane_g1

0x4af1,	// (0x0004c61b) graphic_text_primary_small_pane_t1

0x4aff,	// (0x0004c629) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x000574ce) graphic_text_primary_small_pane_t

0x4ac5,	// (0x0004c5ef) graphic_text_secondary_pane_g1

0x4acd,	// (0x0004c5f7) graphic_text_secondary_pane_t1

0x4adb,	// (0x0004c605) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x000574c9) graphic_text_secondary_pane_t

0x4aa1,	// (0x0004c5cb) graphic_text_title_pane_g1

0x4aa9,	// (0x0004c5d3) graphic_text_title_pane_t1

0x4ab7,	// (0x0004c5e1) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x000574c4) graphic_text_title_pane_t

0x4a7d,	// (0x0004c5a7) graphic_text_digital_pane_g1

0x4a85,	// (0x0004c5af) graphic_text_digital_pane_t1

0x4a93,	// (0x0004c5bd) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x000574bf) graphic_text_digital_pane_t

0xa360,	// (0x00051e8a) navi_icon_pane_srt_ParamLimits

0xa360,	// (0x00051e8a) navi_icon_pane_srt

0xa0d3,	// (0x00051bfd) navi_midp_pane_srt

0xa0d3,	// (0x00051bfd) navi_navi_pane_srt

0xa360,	// (0x00051e8a) navi_text_pane_srt_ParamLimits

0xa360,	// (0x00051e8a) navi_text_pane_srt

0x4a48,	// (0x0004c572) navi_navi_icon_text_pane_srt

0x4a50,	// (0x0004c57a) navi_navi_pane_srt_g1_ParamLimits

0x4a50,	// (0x0004c57a) navi_navi_pane_srt_g1

0x4a62,	// (0x0004c58c) navi_navi_pane_srt_g2_ParamLimits

0x4a62,	// (0x0004c58c) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x000574ba) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x000574ba) navi_navi_pane_srt_g

0x4a74,	// (0x0004c59e) navi_navi_tabs_pane_srt

0x4a48,	// (0x0004c572) navi_navi_text_pane_srt

0x4a48,	// (0x0004c572) navi_navi_volume_pane_srt

0x4a39,	// (0x0004c563) navi_navi_text_pane_srt_t1

0x13f4,	// (0x00048f1e) navi_navi_volume_pane_srt_g1

0x13fc,	// (0x00048f26) volume_small_pane_srt_ParamLimits

0x13fc,	// (0x00048f26) volume_small_pane_srt

0x0724,	// (0x0004824e) volume_small_pane_srt_g1_ParamLimits

0x0724,	// (0x0004824e) volume_small_pane_srt_g1

0x0734,	// (0x0004825e) volume_small_pane_srt_g2_ParamLimits

0x0734,	// (0x0004825e) volume_small_pane_srt_g2

0x0745,	// (0x0004826f) volume_small_pane_srt_g3_ParamLimits

0x0745,	// (0x0004826f) volume_small_pane_srt_g3

0x0756,	// (0x00048280) volume_small_pane_srt_g4_ParamLimits

0x0756,	// (0x00048280) volume_small_pane_srt_g4

0x0767,	// (0x00048291) volume_small_pane_srt_g5_ParamLimits

0x0767,	// (0x00048291) volume_small_pane_srt_g5

0x0778,	// (0x000482a2) volume_small_pane_srt_g6_ParamLimits

0x0778,	// (0x000482a2) volume_small_pane_srt_g6

0x0789,	// (0x000482b3) volume_small_pane_srt_g7_ParamLimits

0x0789,	// (0x000482b3) volume_small_pane_srt_g7

0x079a,	// (0x000482c4) volume_small_pane_srt_g8_ParamLimits

0x079a,	// (0x000482c4) volume_small_pane_srt_g8

0x07ab,	// (0x000482d5) volume_small_pane_srt_g9_ParamLimits

0x07ab,	// (0x000482d5) volume_small_pane_srt_g9

0x07bc,	// (0x000482e6) volume_small_pane_srt_g10_ParamLimits

0x07bc,	// (0x000482e6) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00057267) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00057267) volume_small_pane_srt_g

0xa7c6,	// (0x000522f0) query_popup_data_pane_cp2

0x4a1f,	// (0x0004c549) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4a1f,	// (0x0004c549) navi_navi_icon_text_pane_srt_t1

0x3acf,	// (0x0004b5f9) navi_tabs_2_long_pane_srt

0x3acf,	// (0x0004b5f9) navi_tabs_2_pane_srt

0x3acf,	// (0x0004b5f9) navi_tabs_3_long_pane_srt

0x3acf,	// (0x0004b5f9) navi_tabs_3_pane_srt

0x3acf,	// (0x0004b5f9) navi_tabs_4_pane_srt

0x13d4,	// (0x00048efe) tabs_2_active_pane_srt_ParamLimits

0x13d4,	// (0x00048efe) tabs_2_active_pane_srt

0x13e4,	// (0x00048f0e) tabs_2_passive_pane_srt_ParamLimits

0x13e4,	// (0x00048f0e) tabs_2_passive_pane_srt

0x329d,	// (0x0004adc7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x329d,	// (0x0004adc7) bg_passive_tab_pane_cp1_srt

0x49eb,	// (0x0004c515) bg_passive_tab_pane_g1_cp1_srt

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp1_srt

0x49f4,	// (0x0004c51e) bg_passive_tab_pane_g3_cp1_srt

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp1_srt_ParamLimits

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp1_srt

0x49fd,	// (0x0004c527) tabs_2_active_pane_srt_g1

0xcecf,	// (0x000549f9) tabs_2_active_pane_srt_t1_ParamLimits

0xcecf,	// (0x000549f9) tabs_2_active_pane_srt_t1

0x49eb,	// (0x0004c515) bg_active_tab_pane_g1_cp1_srt

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp1_srt

0x49f4,	// (0x0004c51e) bg_active_tab_pane_g3_cp1_srt

0x13a1,	// (0x00048ecb) tabs_3_active_pane_srt_ParamLimits

0x13a1,	// (0x00048ecb) tabs_3_active_pane_srt

0x13b2,	// (0x00048edc) tabs_3_passive_pane_cp_srt_ParamLimits

0x13b2,	// (0x00048edc) tabs_3_passive_pane_cp_srt

0x13c3,	// (0x00048eed) tabs_3_passive_pane_srt_ParamLimits

0x13c3,	// (0x00048eed) tabs_3_passive_pane_srt

0x329d,	// (0x0004adc7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x329d,	// (0x0004adc7) bg_passive_tab_pane_cp2_srt

0x2b83,	// (0x0004a6ad) bg_passive_tab_pane_g1_cp2_srt

0x0597,	// (0x000480c1) bg_passive_tab_pane_g2_cp2_srt

0x2b8c,	// (0x0004a6b6) bg_passive_tab_pane_g3_cp2_srt

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp2_srt_ParamLimits

0xa31e,	// (0x00051e48) bg_active_tab_pane_cp2_srt

0x49d1,	// (0x0004c4fb) tabs_3_active_pane_srt_g1

0xceb9,	// (0x000549e3) tabs_3_active_pane_srt_t1_ParamLimits

0xceb9,	// (0x000549e3) tabs_3_active_pane_srt_t1

0x2b83,	// (0x0004a6ad) bg_active_tab_pane_g1_cp2_srt

0x0597,	// (0x000480c1) bg_active_tab_pane_g2_cp2_srt

0x2b8c,	// (0x0004a6b6) bg_active_tab_pane_g3_cp2_srt

0x1359,	// (0x00048e83) tabs_4_active_pane_srt_ParamLimits

0x1359,	// (0x00048e83) tabs_4_active_pane_srt

0x136b,	// (0x00048e95) tabs_4_passive_pane_cp2_srt_ParamLimits

0x136b,	// (0x00048e95) tabs_4_passive_pane_cp2_srt

0x090e,	// (0x00048438) aid_size_cell_toolbar

0x4606,	// (0x0004c130) main_idle_act_pane_ParamLimits

0x0aeb,	// (0x00048615) popup_large_graphic_colour_window_ParamLimits

0xbb49,	// (0x00053673) popup_toolbar_window_ParamLimits

0xbb49,	// (0x00053673) popup_toolbar_window

0x47ef,	// (0x0004c319) list_single_graphic_2heading_pane_ParamLimits

0x47ef,	// (0x0004c319) list_single_graphic_2heading_pane

0xc592,	// (0x000540bc) aid_size_cell_apps_grid_lsc_pane

0xc5a4,	// (0x000540ce) aid_size_cell_apps_grid_prt_pane

0x2cf3,	// (0x0004a81d) bg_wml_button_pane_cp1_ParamLimits

0x2cf3,	// (0x0004a81d) bg_wml_button_pane_cp1

0xca3a,	// (0x00054564) form_midp_field_text_pane_t1_ParamLimits

0x329d,	// (0x0004adc7) input_focus_pane_cp050_ParamLimits

0x34d6,	// (0x0004b000) list_midp_form_text_pane_ParamLimits

0x3488,	// (0x0004afb2) input_focus_pane_cp051_ParamLimits

0x349c,	// (0x0004afc6) list_midp_choice_pane_ParamLimits

0xc9d3,	// (0x000544fd) list_single_2graphic_pane_cp3_ParamLimits

0xc9d3,	// (0x000544fd) list_single_2graphic_pane_cp3

0xc9e6,	// (0x00054510) list_single_midp_graphic_pane_ParamLimits

0xc9e6,	// (0x00054510) list_single_midp_graphic_pane

0xeda5,	// (0x000568cf) list_single_graphic_2heading_pane_g1_ParamLimits

0xeda5,	// (0x000568cf) list_single_graphic_2heading_pane_g1

0xedb1,	// (0x000568db) list_single_graphic_2heading_pane_g4_ParamLimits

0xedb1,	// (0x000568db) list_single_graphic_2heading_pane_g4

0xedbd,	// (0x000568e7) list_single_graphic_2heading_pane_g5_ParamLimits

0xedbd,	// (0x000568e7) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x000572ba) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x000572ba) list_single_graphic_2heading_pane_g

0xedc9,	// (0x000568f3) list_single_graphic_2heading_pane_t1_ParamLimits

0xedc9,	// (0x000568f3) list_single_graphic_2heading_pane_t1

0xeddd,	// (0x00056907) list_single_graphic_2heading_pane_t2_ParamLimits

0xeddd,	// (0x00056907) list_single_graphic_2heading_pane_t2

0xedf9,	// (0x00056923) list_single_graphic_2heading_pane_t3_ParamLimits

0xedf9,	// (0x00056923) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x000572c1) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x000572c1) list_single_graphic_2heading_pane_t

0x3167,	// (0x0004ac91) bg_popup_sub_pane_cp2

0x3191,	// (0x0004acbb) grid_toobar_pane

0x0f51,	// (0x00048a7b) cell_toolbar_pane_ParamLimits

0x0f51,	// (0x00048a7b) cell_toolbar_pane

0x31cd,	// (0x0004acf7) cell_toolbar_pane_g1_ParamLimits

0x31cd,	// (0x0004acf7) cell_toolbar_pane_g1

0x31e1,	// (0x0004ad0b) cell_toolbar_pane_g2_ParamLimits

0x31e1,	// (0x0004ad0b) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x000572cf) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x000572cf) cell_toolbar_pane_g

0x3203,	// (0x0004ad2d) grid_highlight_pane_cp2_ParamLimits

0x3203,	// (0x0004ad2d) grid_highlight_pane_cp2

0x321d,	// (0x0004ad47) toolbar_button_pane

0x3229,	// (0x0004ad53) toolbar_button_pane_g1

0x3231,	// (0x0004ad5b) toolbar_button_pane_g2

0x3239,	// (0x0004ad63) toolbar_button_pane_g3

0x3241,	// (0x0004ad6b) toolbar_button_pane_g4

0x3249,	// (0x0004ad73) toolbar_button_pane_g5

0x3251,	// (0x0004ad7b) toolbar_button_pane_g6

0x3259,	// (0x0004ad83) toolbar_button_pane_g7

0x3261,	// (0x0004ad8b) toolbar_button_pane_g8

0x3269,	// (0x0004ad93) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x000572d4) toolbar_button_pane_g

0x0fa1,	// (0x00048acb) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0fa1,	// (0x00048acb) list_single_2graphic_pane_g1_cp3

0xbbc5,	// (0x000536ef) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbbc5,	// (0x000536ef) list_single_2graphic_pane_g2_cp3

0x27eb,	// (0x0004a315) list_single_2graphic_pane_g3_cp3

0x0fbe,	// (0x00048ae8) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0fbe,	// (0x00048ae8) list_single_2graphic_pane_g4_cp3

0x0fca,	// (0x00048af4) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0fca,	// (0x00048af4) list_single_2graphic_pane_t1_cp3

0x2655,	// (0x0004a17f) list_single_midp_graphic_pane_g2_ParamLimits

0x2655,	// (0x0004a17f) list_single_midp_graphic_pane_g2

0xed8d,	// (0x000568b7) aid_zoom_text_primary

0xed95,	// (0x000568bf) aid_zoom_text_secondary

0x2c3d,	// (0x0004a767) status_small_pane_g7_ParamLimits

0x2c3d,	// (0x0004a767) status_small_pane_g7

0x2c60,	// (0x0004a78a) status_small_pane_t1_ParamLimits

0xa21e,	// (0x00051d48) title_pane_g2

0x0003,

0xf529,	// (0x00057053) title_pane_g

0xa876,	// (0x000523a0) aid_size_cell_colour_1_pane_ParamLimits

0xa876,	// (0x000523a0) aid_size_cell_colour_1_pane

0xa88a,	// (0x000523b4) aid_size_cell_colour_2_pane_ParamLimits

0xa88a,	// (0x000523b4) aid_size_cell_colour_2_pane

0xa89e,	// (0x000523c8) aid_size_cell_colour_3_pane_ParamLimits

0xa89e,	// (0x000523c8) aid_size_cell_colour_3_pane

0xa8b2,	// (0x000523dc) aid_size_cell_colour_4_pane_ParamLimits

0xa8b2,	// (0x000523dc) aid_size_cell_colour_4_pane

0x013b,	// (0x00047c65) title_pane_stacon_g1_ParamLimits

0x013b,	// (0x00047c65) title_pane_stacon_g1

0x38b5,	// (0x0004b3df) popup_note_wait_window_g3_ParamLimits

0x38b5,	// (0x0004b3df) popup_note_wait_window_g3

0x392c,	// (0x0004b456) popup_note_wait_window_t5_ParamLimits

0x392c,	// (0x0004b456) popup_note_wait_window_t5

0xa0d3,	// (0x00051bfd) main_feb_china_hwr_fs_writing_pane

0xb4da,	// (0x00053004) popup_feb_china_hwr_fs_window_ParamLimits

0xb4da,	// (0x00053004) popup_feb_china_hwr_fs_window

0xbbd6,	// (0x00053700) aid_size_cell_hwr_fs_ParamLimits

0xbbd6,	// (0x00053700) aid_size_cell_hwr_fs

0x329d,	// (0x0004adc7) bg_popup_sub_pane_cp3_ParamLimits

0x329d,	// (0x0004adc7) bg_popup_sub_pane_cp3

0xbbeb,	// (0x00053715) grid_hwr_fs_pane_ParamLimits

0xbbeb,	// (0x00053715) grid_hwr_fs_pane

0x1040,	// (0x00048b6a) linegrid_hwr_fs_pane_ParamLimits

0x1040,	// (0x00048b6a) linegrid_hwr_fs_pane

0xbc03,	// (0x0005372d) cell_hwr_fs_pane_ParamLimits

0xbc03,	// (0x0005372d) cell_hwr_fs_pane

0x32a9,	// (0x0004add3) linegrid_hwr_fs_pane_g1_ParamLimits

0x32a9,	// (0x0004add3) linegrid_hwr_fs_pane_g1

0xc9a7,	// (0x000544d1) linegrid_hwr_fs_pane_g2_ParamLimits

0xc9a7,	// (0x000544d1) linegrid_hwr_fs_pane_g2

0x32c7,	// (0x0004adf1) linegrid_hwr_fs_pane_g3_ParamLimits

0x32c7,	// (0x0004adf1) linegrid_hwr_fs_pane_g3

0x1074,	// (0x00048b9e) linegrid_hwr_fs_pane_g4_ParamLimits

0x1074,	// (0x00048b9e) linegrid_hwr_fs_pane_g4

0x1092,	// (0x00048bbc) linegrid_hwr_fs_pane_g5_ParamLimits

0x1092,	// (0x00048bbc) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x000572fa) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x000572fa) linegrid_hwr_fs_pane_g

0x32d3,	// (0x0004adfd) cell_hwr_fs_pane_g1_ParamLimits

0x32d3,	// (0x0004adfd) cell_hwr_fs_pane_g1

0x30a2,	// (0x0004abcc) cell_hwr_fs_pane_g2_ParamLimits

0x30a2,	// (0x0004abcc) cell_hwr_fs_pane_g2

0xc9b9,	// (0x000544e3) cell_hwr_fs_pane_g3_ParamLimits

0xc9b9,	// (0x000544e3) cell_hwr_fs_pane_g3

0xc9c6,	// (0x000544f0) cell_hwr_fs_pane_g4_ParamLimits

0xc9c6,	// (0x000544f0) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x00057305) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x00057305) cell_hwr_fs_pane_g

0xbc29,	// (0x00053753) cell_hwr_fs_pane_t1

0xa0d3,	// (0x00051bfd) grid_highlight_pane_cp6

0xa0d3,	// (0x00051bfd) main_idle_act2_pane

0xae1d,	// (0x00052947) aid_inside_area_popup_secondary

0xcaaf,	// (0x000545d9) aid_inside_area_window_primary_ParamLimits

0xcaaf,	// (0x000545d9) aid_inside_area_window_primary

0x4b38,	// (0x0004c662) ai2_news_ticker_pane

0x4b40,	// (0x0004c66a) aid_size_cell_ai1_link_ParamLimits

0x4b40,	// (0x0004c66a) aid_size_cell_ai1_link

0x4b5a,	// (0x0004c684) popup_ai2_data_window_ParamLimits

0x4b5a,	// (0x0004c684) popup_ai2_data_window

0x4b78,	// (0x0004c6a2) popup_ai2_link_window_ParamLimits

0x4b78,	// (0x0004c6a2) popup_ai2_link_window

0x329d,	// (0x0004adc7) bg_popup_sub_pane_cp4_ParamLimits

0x329d,	// (0x0004adc7) bg_popup_sub_pane_cp4

0x4b8e,	// (0x0004c6b8) grid_ai2_link_pane_ParamLimits

0x4b8e,	// (0x0004c6b8) grid_ai2_link_pane

0x4ba5,	// (0x0004c6cf) popup_ai2_link_window_g1_ParamLimits

0x4ba5,	// (0x0004c6cf) popup_ai2_link_window_g1

0x4bb1,	// (0x0004c6db) popup_ai2_link_window_g2_ParamLimits

0x4bb1,	// (0x0004c6db) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x000574d8) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x000574d8) popup_ai2_link_window_g

0x4bc2,	// (0x0004c6ec) ai2_mp_button_pane

0x4bca,	// (0x0004c6f4) ai2_mp_volume_pane

0x3488,	// (0x0004afb2) bg_popup_sub_pane_cp5_ParamLimits

0x3488,	// (0x0004afb2) bg_popup_sub_pane_cp5

0x4bd2,	// (0x0004c6fc) heading_ai2_gene_pane_ParamLimits

0x4bd2,	// (0x0004c6fc) heading_ai2_gene_pane

0x4bde,	// (0x0004c708) list_ai2_gene_pane_ParamLimits

0x4bde,	// (0x0004c708) list_ai2_gene_pane

0x4c26,	// (0x0004c750) cell_ai2_link_pane_ParamLimits

0x4c26,	// (0x0004c750) cell_ai2_link_pane

0x4c3c,	// (0x0004c766) cell_ai2_link_pane_g1

0xa0d3,	// (0x00051bfd) grid_highlight_pane_cp7

0x1411,	// (0x00048f3b) ai2_mp_volume_pane_g1

0x4d0f,	// (0x0004c839) ai2_mp_volume_pane_g2

0x4c84,	// (0x0004c7ae) list_ai2_gene_pane_t1

0x4d17,	// (0x0004c841) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x000574f1) ai2_mp_volume_pane_g

0x1419,	// (0x00048f43) volume_small_pane_cp3

0x4d1f,	// (0x0004c849) aid_size_cell_ai2_button

0x4d27,	// (0x0004c851) grid_ai2_button_pane

0x4d30,	// (0x0004c85a) cell_ai2_button_pane_ParamLimits

0x4d30,	// (0x0004c85a) cell_ai2_button_pane

0x9fe3,	// (0x00051b0d) cell_ai2_button_pane_g1

0xa0d3,	// (0x00051bfd) grid_highlight_pane_cp8

0x4ccf,	// (0x0004c7f9) ai2_gene_pane_t1_ParamLimits

0x4ccf,	// (0x0004c7f9) ai2_gene_pane_t1

0xb456,	// (0x00052f80) aid_height_parent_landscape

0xcc56,	// (0x00054780) aid_height_set_list

0x4606,	// (0x0004c130) aid_size_parent

0x4957,	// (0x0004c481) aid_size_cell_graphic_pane_ParamLimits

0x4bee,	// (0x0004c718) popup_ai2_data_window_g1_ParamLimits

0x4bee,	// (0x0004c718) popup_ai2_data_window_g1

0x4bfa,	// (0x0004c724) ai2_news_ticker_pane_g1

0x4c02,	// (0x0004c72c) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x000574dd) ai2_news_ticker_pane_g

0x4c0a,	// (0x0004c734) ai2_news_ticker_pane_t1

0x4c18,	// (0x0004c742) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x000574e2) ai2_news_ticker_pane_t

0x4c45,	// (0x0004c76f) heading_ai2_gene_pane_g1

0x4c4d,	// (0x0004c777) heading_ai2_gene_pane_t1_ParamLimits

0x4c4d,	// (0x0004c777) heading_ai2_gene_pane_t1

0x4c62,	// (0x0004c78c) list_highlight_pane_cp6

0x4c6a,	// (0x0004c794) ai2_gene_pane_ParamLimits

0x4c6a,	// (0x0004c794) ai2_gene_pane

0x4c92,	// (0x0004c7bc) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x000574e7) list_ai2_gene_pane_t

0x4ca0,	// (0x0004c7ca) list_highlight_pane_cp8_ParamLimits

0x4ca0,	// (0x0004c7ca) list_highlight_pane_cp8

0x4cb1,	// (0x0004c7db) ai2_gene_pane_g1_ParamLimits

0x4cb1,	// (0x0004c7db) ai2_gene_pane_g1

0x4cc3,	// (0x0004c7ed) ai2_gene_pane_g2_ParamLimits

0x4cc3,	// (0x0004c7ed) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x000574ec) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x000574ec) ai2_gene_pane_g

0xabf7,	// (0x00052721) scroll_pane_cp12

0xb415,	// (0x00052f3f) control_pane_t3_ParamLimits

0xb415,	// (0x00052f3f) control_pane_t3

0x2c51,	// (0x0004a77b) status_small_pane_g8_ParamLimits

0x2c51,	// (0x0004a77b) status_small_pane_g8

0xb57c,	// (0x000530a6) popup_find_window_ParamLimits

0xb833,	// (0x0005335d) popup_note_image_window_ParamLimits

0xec69,	// (0x00056793) list_double2_graphic_pane_vc_g1_ParamLimits

0xec69,	// (0x00056793) list_double2_graphic_pane_vc_g1

0x0f81,	// (0x00048aab) list_double2_graphic_pane_vc_g2_ParamLimits

0x0f81,	// (0x00048aab) list_double2_graphic_pane_vc_g2

0x0f8d,	// (0x00048ab7) list_double2_graphic_pane_vc_g3_ParamLimits

0x0f8d,	// (0x00048ab7) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x000572c8) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x000572c8) list_double2_graphic_pane_vc_g

0xee11,	// (0x0005693b) list_double2_graphic_pane_vc_t1_ParamLimits

0xee11,	// (0x0005693b) list_double2_graphic_pane_vc_t1

0x0f81,	// (0x00048aab) list_single_heading_pane_vc_g1_ParamLimits

0x0f81,	// (0x00048aab) list_single_heading_pane_vc_g1

0x0f8d,	// (0x00048ab7) list_single_heading_pane_vc_g2_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570d7) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570d7) list_single_heading_pane_vc_g

0xee27,	// (0x00056951) list_single_heading_pane_vc_t1_ParamLimits

0xee27,	// (0x00056951) list_single_heading_pane_vc_t1

0xee3d,	// (0x00056967) list_single_heading_pane_vc_t2_ParamLimits

0xee3d,	// (0x00056967) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x000572e9) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x000572e9) list_single_heading_pane_vc_t

0x0ffb,	// (0x00048b25) list_setting_number_pane_vc_g1_ParamLimits

0x0ffb,	// (0x00048b25) list_setting_number_pane_vc_g1

0x1007,	// (0x00048b31) list_setting_number_pane_vc_g2_ParamLimits

0x1007,	// (0x00048b31) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x000572ee) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x000572ee) list_setting_number_pane_vc_g

0xee4f,	// (0x00056979) list_setting_number_pane_vc_t1_ParamLimits

0xee4f,	// (0x00056979) list_setting_number_pane_vc_t1

0xee63,	// (0x0005698d) list_setting_number_pane_vc_t2_ParamLimits

0xee63,	// (0x0005698d) list_setting_number_pane_vc_t2

0xee7f,	// (0x000569a9) list_setting_number_pane_vc_t3_ParamLimits

0xee7f,	// (0x000569a9) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x000572f3) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x000572f3) list_setting_number_pane_vc_t

0xeead,	// (0x000569d7) set_value_pane_vc_ParamLimits

0xeead,	// (0x000569d7) set_value_pane_vc

0x47ef,	// (0x0004c319) list_double2_graphic_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_double2_graphic_pane_vc

0x47ef,	// (0x0004c319) list_double2_large_graphic_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_double2_large_graphic_pane_vc

0x47ef,	// (0x0004c319) list_double2_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_double2_pane_vc

0x47ef,	// (0x0004c319) list_double_graphic_heading_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_double_graphic_heading_pane_vc

0x47ef,	// (0x0004c319) list_double_graphic_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_double_graphic_pane_vc

0x47ef,	// (0x0004c319) list_double_heading_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_double_heading_pane_vc

0x4803,	// (0x0004c32d) list_double_large_graphic_pane_vc_ParamLimits

0x4803,	// (0x0004c32d) list_double_large_graphic_pane_vc

0x47ef,	// (0x0004c319) list_double_number_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_double_number_pane_vc

0x47ef,	// (0x0004c319) list_double_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_double_pane_vc

0x47ef,	// (0x0004c319) list_double_time_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_double_time_pane_vc

0x47ef,	// (0x0004c319) list_setting_number_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_setting_number_pane_vc

0x47ef,	// (0x0004c319) list_setting_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_setting_pane_vc

0x47ef,	// (0x0004c319) list_single_graphic_heading_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_single_graphic_heading_pane_vc

0x47ef,	// (0x0004c319) list_single_heading_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_single_heading_pane_vc

0x47ef,	// (0x0004c319) list_single_number_heading_pane_vc_ParamLimits

0x47ef,	// (0x0004c319) list_single_number_heading_pane_vc

0xec69,	// (0x00056793) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xec69,	// (0x00056793) list_double_graphic_heading_pane_vc_g1

0x293d,	// (0x0004a467) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x293d,	// (0x0004a467) list_double_graphic_heading_pane_vc_g2

0x1422,	// (0x00048f4c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1422,	// (0x00048f4c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x000574f8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x000574f8) list_double_graphic_heading_pane_vc_g

0xeef6,	// (0x00056a20) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeef6,	// (0x00056a20) list_double_graphic_heading_pane_vc_t1

0xef0c,	// (0x00056a36) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xef0c,	// (0x00056a36) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x000574ff) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x000574ff) list_double_graphic_heading_pane_vc_t

0x0ffb,	// (0x00048b25) list_setting_pane_vc_g1_ParamLimits

0x0ffb,	// (0x00048b25) list_setting_pane_vc_g1

0x1007,	// (0x00048b31) list_setting_pane_vc_g2_ParamLimits

0x1007,	// (0x00048b31) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x000572ee) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x000572ee) list_setting_pane_vc_g

0xef2a,	// (0x00056a54) list_setting_pane_vc_t1_ParamLimits

0xef2a,	// (0x00056a54) list_setting_pane_vc_t1

0xef46,	// (0x00056a70) list_setting_pane_vc_t2_ParamLimits

0xef46,	// (0x00056a70) list_setting_pane_vc_t2

0x0001,

0xfa18,	// (0x00057542) list_setting_pane_vc_t_ParamLimits

0xfa18,	// (0x00057542) list_setting_pane_vc_t

0xeead,	// (0x000569d7) set_value_pane_cp_vc_ParamLimits

0xeead,	// (0x000569d7) set_value_pane_cp_vc

0x0f81,	// (0x00048aab) list_single_number_heading_pane_vc_g1_ParamLimits

0x0f81,	// (0x00048aab) list_single_number_heading_pane_vc_g1

0x0f8d,	// (0x00048ab7) list_single_number_heading_pane_vc_g2_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570d7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570d7) list_single_number_heading_pane_vc_g

0xec41,	// (0x0005676b) list_single_number_heading_pane_vc_t1_ParamLimits

0xec41,	// (0x0005676b) list_single_number_heading_pane_vc_t1

0xef62,	// (0x00056a8c) list_single_number_heading_pane_vc_t2_ParamLimits

0xef62,	// (0x00056a8c) list_single_number_heading_pane_vc_t2

0xec57,	// (0x00056781) list_single_number_heading_pane_vc_t3_ParamLimits

0xec57,	// (0x00056781) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1d,	// (0x00057547) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1d,	// (0x00057547) list_single_number_heading_pane_vc_t

0xec69,	// (0x00056793) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xec69,	// (0x00056793) list_single_graphic_heading_pane_vc_g1

0x0f81,	// (0x00048aab) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0f81,	// (0x00048aab) list_single_graphic_heading_pane_vc_g4

0x0f8d,	// (0x00048ab7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0f8d,	// (0x00048ab7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x000572c8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x000572c8) list_single_graphic_heading_pane_vc_g

0xec41,	// (0x0005676b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xec41,	// (0x0005676b) list_single_graphic_heading_pane_vc_t1

0xef78,	// (0x00056aa2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef78,	// (0x00056aa2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x0005754e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x0005754e) list_single_graphic_heading_pane_vc_t

0x0f81,	// (0x00048aab) list_double2_pane_vc_g1_ParamLimits

0x0f81,	// (0x00048aab) list_double2_pane_vc_g1

0x0f8d,	// (0x00048ab7) list_double2_pane_vc_g2_ParamLimits

0x0f8d,	// (0x00048ab7) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570d7) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570d7) list_double2_pane_vc_g

0xeee0,	// (0x00056a0a) list_double2_pane_vc_t1_ParamLimits

0xeee0,	// (0x00056a0a) list_double2_pane_vc_t1

0x142e,	// (0x00048f58) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x142e,	// (0x00048f58) list_double2_large_graphic_pane_vc_g1

0x0f81,	// (0x00048aab) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0f81,	// (0x00048aab) list_double2_large_graphic_pane_vc_g2

0x0f8d,	// (0x00048ab7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0f8d,	// (0x00048ab7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x000570ef) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x000570ef) list_double2_large_graphic_pane_vc_g

0xec75,	// (0x0005679f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xec75,	// (0x0005679f) list_double2_large_graphic_pane_vc_t1

0x143a,	// (0x00048f64) list_double_time_pane_vc_g1_ParamLimits

0x143a,	// (0x00048f64) list_double_time_pane_vc_g1

0x1446,	// (0x00048f70) list_double_time_pane_vc_g2_ParamLimits

0x1446,	// (0x00048f70) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x00057553) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x00057553) list_double_time_pane_vc_g

0xef8a,	// (0x00056ab4) list_double_time_pane_vc_t1_ParamLimits

0xef8a,	// (0x00056ab4) list_double_time_pane_vc_t1

0xefb4,	// (0x00056ade) list_double_time_pane_vc_t2_ParamLimits

0xefb4,	// (0x00056ade) list_double_time_pane_vc_t2

0xeffd,	// (0x00056b27) list_double_time_pane_vc_t3_ParamLimits

0xeffd,	// (0x00056b27) list_double_time_pane_vc_t3

0xf00f,	// (0x00056b39) list_double_time_pane_vc_t4_ParamLimits

0xf00f,	// (0x00056b39) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x00057558) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x00057558) list_double_time_pane_vc_t

0x0f81,	// (0x00048aab) list_double_pane_vc_g1_ParamLimits

0x0f81,	// (0x00048aab) list_double_pane_vc_g1

0x0f8d,	// (0x00048ab7) list_double_pane_vc_g2_ParamLimits

0x0f8d,	// (0x00048ab7) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570d7) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570d7) list_double_pane_vc_g

0xf023,	// (0x00056b4d) list_double_pane_vc_t1_ParamLimits

0xf023,	// (0x00056b4d) list_double_pane_vc_t1

0xf037,	// (0x00056b61) list_double_pane_vc_t2_ParamLimits

0xf037,	// (0x00056b61) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x00057561) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x00057561) list_double_pane_vc_t

0x0f81,	// (0x00048aab) list_double_number_pane_vc_g1_ParamLimits

0x0f81,	// (0x00048aab) list_double_number_pane_vc_g1

0x0f8d,	// (0x00048ab7) list_double_number_pane_vc_g2_ParamLimits

0x0f8d,	// (0x00048ab7) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570d7) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570d7) list_double_number_pane_vc_g

0xeece,	// (0x000569f8) list_double_number_pane_vc_t1_ParamLimits

0xeece,	// (0x000569f8) list_double_number_pane_vc_t1

0xf04d,	// (0x00056b77) list_double_number_pane_vc_t2_ParamLimits

0xf04d,	// (0x00056b77) list_double_number_pane_vc_t2

0xf037,	// (0x00056b61) list_double_number_pane_vc_t3_ParamLimits

0xf037,	// (0x00056b61) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x00057566) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x00057566) list_double_number_pane_vc_t

0x1452,	// (0x00048f7c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1452,	// (0x00048f7c) list_double_large_graphic_pane_vc_g1

0x1474,	// (0x00048f9e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1474,	// (0x00048f9e) list_double_large_graphic_pane_vc_g2

0x1488,	// (0x00048fb2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1488,	// (0x00048fb2) list_double_large_graphic_pane_vc_g3

0xf061,	// (0x00056b8b) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf061,	// (0x00056b8b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x0005756d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x0005756d) list_double_large_graphic_pane_vc_g

0xf06d,	// (0x00056b97) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf06d,	// (0x00056b97) list_double_large_graphic_pane_vc_t1

0xf089,	// (0x00056bb3) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf089,	// (0x00056bb3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x00057576) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x00057576) list_double_large_graphic_pane_vc_t

0x293d,	// (0x0004a467) list_double_heading_pane_vc_g1_ParamLimits

0x293d,	// (0x0004a467) list_double_heading_pane_vc_g1

0x1422,	// (0x00048f4c) list_double_heading_pane_vc_g2_ParamLimits

0x1422,	// (0x00048f4c) list_double_heading_pane_vc_g2

0x0001,

0xfa51,	// (0x0005757b) list_double_heading_pane_vc_g_ParamLimits

0xfa51,	// (0x0005757b) list_double_heading_pane_vc_g

0xf0a9,	// (0x00056bd3) list_double_heading_pane_vc_t1_ParamLimits

0xf0a9,	// (0x00056bd3) list_double_heading_pane_vc_t1

0xf0bb,	// (0x00056be5) list_double_heading_pane_vc_t2_ParamLimits

0xf0bb,	// (0x00056be5) list_double_heading_pane_vc_t2

0x0001,

0xfa56,	// (0x00057580) list_double_heading_pane_vc_t_ParamLimits

0xfa56,	// (0x00057580) list_double_heading_pane_vc_t

0xf0d3,	// (0x00056bfd) list_double_graphic_pane_vc_g1_ParamLimits

0xf0d3,	// (0x00056bfd) list_double_graphic_pane_vc_g1

0x1497,	// (0x00048fc1) list_double_graphic_pane_vc_g2_ParamLimits

0x1497,	// (0x00048fc1) list_double_graphic_pane_vc_g2

0x0f81,	// (0x00048aab) list_double_graphic_pane_vc_g3_ParamLimits

0x0f81,	// (0x00048aab) list_double_graphic_pane_vc_g3

0x0003,

0xfa5b,	// (0x00057585) list_double_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x00057585) list_double_graphic_pane_vc_g

0xf0df,	// (0x00056c09) list_double_graphic_pane_vc_t1_ParamLimits

0xf0df,	// (0x00056c09) list_double_graphic_pane_vc_t1

0xf109,	// (0x00056c33) list_double_graphic_pane_vc_t2_ParamLimits

0xf109,	// (0x00056c33) list_double_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0005758e) list_double_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0005758e) list_double_graphic_pane_vc_t

0xf2bc,	// (0x00056de6) aid_size_cell_fastswap

0x9fed,	// (0x00051b17) aid_size_cell_touch_ParamLimits

0x9fed,	// (0x00051b17) aid_size_cell_touch

0xf439,	// (0x00056f63) popup_fast_swap_wide_window_ParamLimits

0xf439,	// (0x00056f63) popup_fast_swap_wide_window

0xa1b5,	// (0x00051cdf) touch_pane_ParamLimits

0xa1b5,	// (0x00051cdf) touch_pane

0xac9c,	// (0x000527c6) button_value_adjust_pane_cp2

0xec99,	// (0x000567c3) button_value_adjust_pane_cp4

0xeca1,	// (0x000567cb) form_field_data_pane_cp2

0x9c32,	// (0x0005175c) form_field_data_wide_pane_cp2

0xe2f1,	// (0x00055e1b) bg_scroll_pane_ParamLimits

0x035d,	// (0x00047e87) scroll_handle_pane_ParamLimits

0x0371,	// (0x00047e9b) scroll_sc2_down_pane_ParamLimits

0x0371,	// (0x00047e9b) scroll_sc2_down_pane

0xe322,	// (0x00055e4c) scroll_sc2_up_pane_ParamLimits

0xe322,	// (0x00055e4c) scroll_sc2_up_pane

0xd011,	// (0x00054b3b) grid_wheel_folder_pane_g1_ParamLimits

0xd011,	// (0x00054b3b) grid_wheel_folder_pane_g1

0x06bc,	// (0x000481e6) clock_nsta_pane_cp2_ParamLimits

0x06bc,	// (0x000481e6) clock_nsta_pane_cp2

0xb269,	// (0x00052d93) listscroll_midp_pane_ParamLimits

0xb275,	// (0x00052d9f) midp_canvas_pane

0x2ccb,	// (0x0004a7f5) nsta_clock_indic_pane

0x2cff,	// (0x0004a829) listscroll_form_pane_vc

0x2d07,	// (0x0004a831) listscroll_set_pane_vc_ParamLimits

0x2d07,	// (0x0004a831) listscroll_set_pane_vc

0xc696,	// (0x000541c0) clock_nsta_pane

0xc6c0,	// (0x000541ea) indicator_nsta_pane

0x3167,	// (0x0004ac91) bg_popup_sub_pane_cp2_ParamLimits

0x317b,	// (0x0004aca5) find_pane_cp2_ParamLimits

0x317b,	// (0x0004aca5) find_pane_cp2

0x3191,	// (0x0004acbb) grid_toobar_pane_ParamLimits

0x3271,	// (0x0004ad9b) list_form_gen_pane_vc_ParamLimits

0x3271,	// (0x0004ad9b) list_form_gen_pane_vc

0x3287,	// (0x0004adb1) scroll_pane_cp8_vc_ParamLimits

0x3287,	// (0x0004adb1) scroll_pane_cp8_vc

0x3303,	// (0x0004ae2d) data_form_wide_pane_vc_ParamLimits

0x3303,	// (0x0004ae2d) data_form_wide_pane_vc

0x330f,	// (0x0004ae39) form_field_data_wide_pane_vc_g1

0x3317,	// (0x0004ae41) form_field_data_wide_pane_vc_t1_ParamLimits

0x3317,	// (0x0004ae41) form_field_data_wide_pane_vc_t1

0xacb0,	// (0x000527da) input_focus_pane_cp6_vc_ParamLimits

0xacb0,	// (0x000527da) input_focus_pane_cp6_vc

0x3633,	// (0x0004b15d) list_midp_pane_ParamLimits

0x49c5,	// (0x0004c4ef) scroll_pane_cp16_ParamLimits

0x49c5,	// (0x0004c4ef) scroll_pane_cp16

0x3689,	// (0x0004b1b3) button_value_adjust_pane_ParamLimits

0x3689,	// (0x0004b1b3) button_value_adjust_pane

0xcc67,	// (0x00054791) button_value_adjust_pane_cp6_ParamLimits

0xcc67,	// (0x00054791) button_value_adjust_pane_cp6

0xcda3,	// (0x000548cd) settings_code_pane_cp_ParamLimits

0xcda3,	// (0x000548cd) settings_code_pane_cp

0x9fe3,	// (0x00051b0d) cell_touch_pane_g1

0x9fe3,	// (0x00051b0d) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0005720d) cell_touch_pane_g

0xcee5,	// (0x00054a0f) cell_touch_pane_cp_ParamLimits

0xcee5,	// (0x00054a0f) cell_touch_pane_cp

0xcf01,	// (0x00054a2b) cell_touch_pane_ParamLimits

0xcf01,	// (0x00054a2b) cell_touch_pane

0x9fe3,	// (0x00051b0d) scroll_sc2_down_pane_g1

0x9fe3,	// (0x00051b0d) scroll_sc2_up_pane_g1

0xa0d3,	// (0x00051bfd) bg_set_opt_pane_cp4_vc

0x4d63,	// (0x0004c88d) list_set_graphic_pane_vc_g1_ParamLimits

0x4d63,	// (0x0004c88d) list_set_graphic_pane_vc_g1

0x4d6f,	// (0x0004c899) list_set_graphic_pane_vc_g2_ParamLimits

0x4d6f,	// (0x0004c899) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x00057504) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x00057504) list_set_graphic_pane_vc_g

0x4d7b,	// (0x0004c8a5) text_primary_small_cp13_vc_ParamLimits

0x4d7b,	// (0x0004c8a5) text_primary_small_cp13_vc

0x4d93,	// (0x0004c8bd) list_set_graphic_pane_vc_ParamLimits

0x4d93,	// (0x0004c8bd) list_set_graphic_pane_vc

0xa0d3,	// (0x00051bfd) input_focus_pane_cp2_vc

0x9fe3,	// (0x00051b0d) setting_code_pane_vc_g1

0xa377,	// (0x00051ea1) setting_code_pane_vc_t1

0x4da6,	// (0x0004c8d0) set_text_pane_vc_t1_ParamLimits

0x4da6,	// (0x0004c8d0) set_text_pane_vc_t1

0xa0d3,	// (0x00051bfd) input_focus_pane_cp1_vc

0x4dc7,	// (0x0004c8f1) list_set_text_pane_vc

0x9fe3,	// (0x00051b0d) setting_text_pane_vc_g1

0xa0d3,	// (0x00051bfd) bg_set_opt_pane_cp2_vc

0xa36e,	// (0x00051e98) setting_slider_graphic_pane_vc_g1

0x4dd1,	// (0x0004c8fb) setting_slider_graphic_pane_vc_t1

0x4de3,	// (0x0004c90d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x00057509) setting_slider_graphic_pane_vc_t

0x4df5,	// (0x0004c91f) slider_set_pane_cp_vc

0x4dff,	// (0x0004c929) slider_set_pane_vc_g1

0x4e08,	// (0x0004c932) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0005750e) slider_set_pane_vc_g

0xad08,	// (0x00052832) set_opt_bg_pane_g1_copy1

0xad10,	// (0x0005283a) set_opt_bg_pane_g2_copy1

0x4e34,	// (0x0004c95e) set_opt_bg_pane_g3_copy1

0xad20,	// (0x0005284a) set_opt_bg_pane_g4_copy1

0xad28,	// (0x00052852) set_opt_bg_pane_g5_copy1

0xad30,	// (0x0005285a) set_opt_bg_pane_g6_copy1

0x4e3e,	// (0x0004c968) set_opt_bg_pane_g7_copy1

0x4e48,	// (0x0004c972) set_opt_bg_pane_g8_copy1

0x4e52,	// (0x0004c97c) set_opt_bg_pane_g9_copy1

0xa0d3,	// (0x00051bfd) bg_set_opt_pane_cp_vc

0x4e5c,	// (0x0004c986) setting_slider_pane_vc_t1

0x4e6b,	// (0x0004c995) setting_slider_pane_vc_t2

0x4e7d,	// (0x0004c9a7) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0005751d) setting_slider_pane_vc_t

0x4e8f,	// (0x0004c9b9) slider_set_pane_vc

0x10b6,	// (0x00048be0) volume_set_pane_vc_g1

0x10bf,	// (0x00048be9) volume_set_pane_vc_g2

0x10c8,	// (0x00048bf2) volume_set_pane_vc_g3

0x10d1,	// (0x00048bfb) volume_set_pane_vc_g4

0x10da,	// (0x00048c04) volume_set_pane_vc_g5

0x10e3,	// (0x00048c0d) volume_set_pane_vc_g6

0x10ec,	// (0x00048c16) volume_set_pane_vc_g7

0x10f5,	// (0x00048c1f) volume_set_pane_vc_g8

0x10fe,	// (0x00048c28) volume_set_pane_vc_g9

0x1107,	// (0x00048c31) volume_set_pane_vc_g10

0x0009,

0xf9fa,	// (0x00057524) volume_set_pane_vc_g

0x4e99,	// (0x0004c9c3) volume_set_pane_vc

0x4ea3,	// (0x0004c9cd) button_value_adjust_pane_cp1_vc

0x4ead,	// (0x0004c9d7) list_highlight_pane_cp2_vc

0x4eb6,	// (0x0004c9e0) list_set_pane_vc_ParamLimits

0x4eb6,	// (0x0004c9e0) list_set_pane_vc

0x4f24,	// (0x0004ca4e) main_pane_set_vc_t1_ParamLimits

0x4f24,	// (0x0004ca4e) main_pane_set_vc_t1

0x4f39,	// (0x0004ca63) main_pane_set_vc_t2_ParamLimits

0x4f39,	// (0x0004ca63) main_pane_set_vc_t2

0x4f4b,	// (0x0004ca75) main_pane_set_vc_t3_ParamLimits

0x4f4b,	// (0x0004ca75) main_pane_set_vc_t3

0x4f5f,	// (0x0004ca89) main_pane_set_vc_t4_ParamLimits

0x4f5f,	// (0x0004ca89) main_pane_set_vc_t4

0x0003,

0xfa0f,	// (0x00057539) main_pane_set_vc_t_ParamLimits

0xfa0f,	// (0x00057539) main_pane_set_vc_t

0x4f73,	// (0x0004ca9d) setting_code_pane_vc_ParamLimits

0x4f73,	// (0x0004ca9d) setting_code_pane_vc

0x4f84,	// (0x0004caae) setting_slider_graphic_pane_vc

0x4f84,	// (0x0004caae) setting_slider_pane_vc

0x4f84,	// (0x0004caae) setting_text_pane_vc

0x4f84,	// (0x0004caae) setting_volume_pane_vc

0x4f8e,	// (0x0004cab8) scroll_pane_cp121_vc

0xac8a,	// (0x000527b4) set_content_pane_vc

0x4f96,	// (0x0004cac0) button_value_adjust_pane_g1

0x4f9f,	// (0x0004cac9) button_value_adjust_pane_g2

0x0001,

0xfa69,	// (0x00057593) button_value_adjust_pane_g

0x4fa8,	// (0x0004cad2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4fa8,	// (0x0004cad2) form_field_slider_wide_pane_vc_t1

0x4fba,	// (0x0004cae4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4fba,	// (0x0004cae4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6e,	// (0x00057598) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6e,	// (0x00057598) form_field_slider_wide_pane_vc_t

0xa31e,	// (0x00051e48) input_focus_pane_cp10_vc_ParamLimits

0xa31e,	// (0x00051e48) input_focus_pane_cp10_vc

0x4fe6,	// (0x0004cb10) slider_cont_pane_cp1_vc_ParamLimits

0x4fe6,	// (0x0004cb10) slider_cont_pane_cp1_vc

0x4ff8,	// (0x0004cb22) slider_form_pane_g1_cp2

0x4e08,	// (0x0004c932) slider_form_pane_g2_cp2

0x5025,	// (0x0004cb4f) form_field_slider_pane_vc_t3

0x5033,	// (0x0004cb5d) form_field_slider_pane_vc_t4

0x5041,	// (0x0004cb6b) slider_form_pane_vc_ParamLimits

0x5041,	// (0x0004cb6b) slider_form_pane_vc

0x504e,	// (0x0004cb78) form_field_slider_pane_vc_t1_ParamLimits

0x504e,	// (0x0004cb78) form_field_slider_pane_vc_t1

0x4fba,	// (0x0004cae4) form_field_slider_pane_vc_t2_ParamLimits

0x4fba,	// (0x0004cae4) form_field_slider_pane_vc_t2

0x0001,

0xfa80,	// (0x000575aa) form_field_slider_pane_vc_t_ParamLimits

0xfa80,	// (0x000575aa) form_field_slider_pane_vc_t

0xa31e,	// (0x00051e48) input_focus_pane_cp9_vc_ParamLimits

0xa31e,	// (0x00051e48) input_focus_pane_cp9_vc

0x5064,	// (0x0004cb8e) slider_cont_pane_vc_ParamLimits

0x5064,	// (0x0004cb8e) slider_cont_pane_vc

0x5078,	// (0x0004cba2) list_form_graphic_pane_cp_vc_ParamLimits

0x5078,	// (0x0004cba2) list_form_graphic_pane_cp_vc

0x330f,	// (0x0004ae39) form_field_popup_wide_pane_vc_g1

0x508d,	// (0x0004cbb7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x508d,	// (0x0004cbb7) form_field_popup_wide_pane_vc_t1

0xacb0,	// (0x000527da) input_focus_pane_cp8_vc_ParamLimits

0xacb0,	// (0x000527da) input_focus_pane_cp8_vc

0x50d2,	// (0x0004cbfc) list_form_wide_pane_vc_ParamLimits

0x50d2,	// (0x0004cbfc) list_form_wide_pane_vc

0x50de,	// (0x0004cc08) list_form_graphic_pane_vc_g1

0x50e6,	// (0x0004cc10) list_form_graphic_pane_vc_t1_ParamLimits

0x50e6,	// (0x0004cc10) list_form_graphic_pane_vc_t1

0xa360,	// (0x00051e8a) list_highlight_pane_cp5_vc_ParamLimits

0xa360,	// (0x00051e8a) list_highlight_pane_cp5_vc

0x5102,	// (0x0004cc2c) list_form_graphic_pane_vc_ParamLimits

0x5102,	// (0x0004cc2c) list_form_graphic_pane_vc

0x330f,	// (0x0004ae39) form_field_popup_pane_vc_g1

0x5118,	// (0x0004cc42) form_field_popup_pane_vc_t1_ParamLimits

0x5118,	// (0x0004cc42) form_field_popup_pane_vc_t1

0xacb0,	// (0x000527da) input_focus_pane_cp7_vc_ParamLimits

0xacb0,	// (0x000527da) input_focus_pane_cp7_vc

0x512f,	// (0x0004cc59) list_form_pane_vc_ParamLimits

0x512f,	// (0x0004cc59) list_form_pane_vc

0x513b,	// (0x0004cc65) data_form_pane_vc_t1_ParamLimits

0x513b,	// (0x0004cc65) data_form_pane_vc_t1

0xad08,	// (0x00052832) input_focus_pane_vc_g1

0xad10,	// (0x0005283a) input_focus_pane_vc_g2

0xad18,	// (0x00052842) input_focus_pane_vc_g3

0xad20,	// (0x0005284a) input_focus_pane_vc_g4

0xad28,	// (0x00052852) input_focus_pane_vc_g5

0xad30,	// (0x0005285a) input_focus_pane_vc_g6

0xad38,	// (0x00052862) input_focus_pane_vc_g7

0xad40,	// (0x0005286a) input_focus_pane_vc_g8

0xad48,	// (0x00052872) input_focus_pane_vc_g9

0x9fe3,	// (0x00051b0d) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00057196) input_focus_pane_vc_g

0x3303,	// (0x0004ae2d) data_form_pane_vc_ParamLimits

0x3303,	// (0x0004ae2d) data_form_pane_vc

0x330f,	// (0x0004ae39) form_field_data_pane_vc_g1

0x5158,	// (0x0004cc82) form_field_data_pane_vc_t1_ParamLimits

0x5158,	// (0x0004cc82) form_field_data_pane_vc_t1

0xacb0,	// (0x000527da) input_focus_pane_vc_ParamLimits

0xacb0,	// (0x000527da) input_focus_pane_vc

0x5172,	// (0x0004cc9c) button_value_adjust_pane_cp3_vc

0x517a,	// (0x0004cca4) button_value_adjust_pane_cp5_vc

0x5182,	// (0x0004ccac) form_field_data_pane_vc_ParamLimits

0x5182,	// (0x0004ccac) form_field_data_pane_vc

0x519d,	// (0x0004ccc7) form_field_data_pane_vc_cp2

0x51a5,	// (0x0004cccf) form_field_data_wide_pane_vc_ParamLimits

0x51a5,	// (0x0004cccf) form_field_data_wide_pane_vc

0x51bf,	// (0x0004cce9) form_field_data_wide_pane_vc_cp2

0x51c7,	// (0x0004ccf1) form_field_popup_pane_vc_ParamLimits

0x51c7,	// (0x0004ccf1) form_field_popup_pane_vc

0x51e2,	// (0x0004cd0c) form_field_popup_wide_pane_vc_ParamLimits

0x51e2,	// (0x0004cd0c) form_field_popup_wide_pane_vc

0x51fc,	// (0x0004cd26) form_field_slider_pane_vc_ParamLimits

0x51fc,	// (0x0004cd26) form_field_slider_pane_vc

0x520f,	// (0x0004cd39) form_field_slider_wide_pane_vc_ParamLimits

0x520f,	// (0x0004cd39) form_field_slider_wide_pane_vc

0xcf1f,	// (0x00054a49) grid_touch_1_pane_ParamLimits

0xcf1f,	// (0x00054a49) grid_touch_1_pane

0xcf33,	// (0x00054a5d) grid_touch_2_pane_ParamLimits

0xcf33,	// (0x00054a5d) grid_touch_2_pane

0x52f5,	// (0x0004ce1f) touch_pane_g1_ParamLimits

0x52f5,	// (0x0004ce1f) touch_pane_g1

0x5248,	// (0x0004cd72) cell_app_pane_cp_wide_ParamLimits

0x5248,	// (0x0004cd72) cell_app_pane_cp_wide

0x5259,	// (0x0004cd83) grid_popup_fast_wide_pane_ParamLimits

0x5259,	// (0x0004cd83) grid_popup_fast_wide_pane

0x526d,	// (0x0004cd97) scroll_pane_cp19_ParamLimits

0x526d,	// (0x0004cd97) scroll_pane_cp19

0xa0d3,	// (0x00051bfd) bg_popup_window_pane_cp20

0x5281,	// (0x0004cdab) listscroll_popup_fast_wide_pane

0xcf5f,	// (0x00054a89) grid_indicator_nsta_pane

0x529b,	// (0x0004cdc5) clock_nsta_pane_g1

0x52a4,	// (0x0004cdce) clock_nsta_pane_t1

0xcf6b,	// (0x00054a95) cell_indicator_nsta_pane_ParamLimits

0xcf6b,	// (0x00054a95) cell_indicator_nsta_pane

0x52f5,	// (0x0004ce1f) cell_indicator_nsta_pane_g1

0xcf86,	// (0x00054ab0) cell_indicator_nsta_pane_g2

0x0001,

0xfa91,	// (0x000575bb) cell_indicator_nsta_pane_g

0x5316,	// (0x0004ce40) clock_nsta_pane_cp

0x531f,	// (0x0004ce49) indicator_nsta_pane_cp

0x5329,	// (0x0004ce53) nsta_clock_indic_pane_g1

0xa458,	// (0x00051f82) grid_indicator_pane

0xe414,	// (0x00055f3e) scroll_pane_cp29

0x060b,	// (0x00048135) indicator_nsta_pane_cp2_ParamLimits

0x060b,	// (0x00048135) indicator_nsta_pane_cp2

0xa360,	// (0x00051e8a) main_apps_wheel_pane

0x34f0,	// (0x0004b01a) form_midp_field_text_pane_ParamLimits

0x363f,	// (0x0004b169) scroll_bar_cp050_ParamLimits

0x5382,	// (0x0004ceac) cell_indicator_pane_ParamLimits

0x5382,	// (0x0004ceac) cell_indicator_pane

0x539a,	// (0x0004cec4) cell_indicator_pane_g1

0xcf93,	// (0x00054abd) grid_wheel_folder_pane_ParamLimits

0xcf93,	// (0x00054abd) grid_wheel_folder_pane

0xcfa1,	// (0x00054acb) list_wheel_apps_pane_ParamLimits

0xcfa1,	// (0x00054acb) list_wheel_apps_pane

0xcfaf,	// (0x00054ad9) main_apps_wheel_pane_g1_ParamLimits

0xcfaf,	// (0x00054ad9) main_apps_wheel_pane_g1

0xcfbf,	// (0x00054ae9) main_apps_wheel_pane_g2_ParamLimits

0xcfbf,	// (0x00054ae9) main_apps_wheel_pane_g2

0x0001,

0xfaad,	// (0x000575d7) main_apps_wheel_pane_g_ParamLimits

0xfaad,	// (0x000575d7) main_apps_wheel_pane_g

0xcfcf,	// (0x00054af9) main_apps_wheel_pane_t1_ParamLimits

0xcfcf,	// (0x00054af9) main_apps_wheel_pane_t1

0xcfe7,	// (0x00054b11) list_wheel_apps_pane_g1

0xcfef,	// (0x00054b19) list_wheel_apps_pane_g2

0xcff7,	// (0x00054b21) list_wheel_apps_pane_g3

0xcfff,	// (0x00054b29) list_wheel_apps_pane_g4

0xd007,	// (0x00054b31) list_wheel_apps_pane_g5

0x0004,

0xfab2,	// (0x000575dc) list_wheel_apps_pane_g

0x283d,	// (0x0004a367) navi_icon_text_pane

0xbba1,	// (0x000536cb) aid_fill_nsta

0xd022,	// (0x00054b4c) navi_icon_text_pane_g1

0xd02e,	// (0x00054b58) navi_icon_text_pane_t1

0x26df,	// (0x0004a209) list_set_graphic_pane_t1_ParamLimits

0x26df,	// (0x0004a209) list_set_graphic_pane_t1

0x3dac,	// (0x0004b8d6) popup_midp_note_alarm_window_t6_ParamLimits

0x3dac,	// (0x0004b8d6) popup_midp_note_alarm_window_t6

0x3dbe,	// (0x0004b8e8) popup_midp_note_alarm_window_t7_ParamLimits

0x3dbe,	// (0x0004b8e8) popup_midp_note_alarm_window_t7

0x3dd0,	// (0x0004b8fa) popup_midp_note_alarm_window_t8_ParamLimits

0x3dd0,	// (0x0004b8fa) popup_midp_note_alarm_window_t8

0x3de2,	// (0x0004b90c) popup_midp_note_alarm_window_t9_ParamLimits

0x3de2,	// (0x0004b90c) popup_midp_note_alarm_window_t9

0x3df4,	// (0x0004b91e) popup_midp_note_alarm_window_t10_ParamLimits

0x3df4,	// (0x0004b91e) popup_midp_note_alarm_window_t10

0x3e06,	// (0x0004b930) popup_midp_note_alarm_window_t11_ParamLimits

0x3e06,	// (0x0004b930) popup_midp_note_alarm_window_t11

0x3e18,	// (0x0004b942) scroll_pane_cp17_ParamLimits

0x3e18,	// (0x0004b942) scroll_pane_cp17

0x10b6,	// (0x00048be0) volume_small_pane_cp_g1

0x14b4,	// (0x00048fde) volume_small_pane_cp_g2

0x14bd,	// (0x00048fe7) volume_small_pane_cp_g3

0x14c6,	// (0x00048ff0) volume_small_pane_cp_g4

0x14cf,	// (0x00048ff9) volume_small_pane_cp_g5

0x14d8,	// (0x00049002) volume_small_pane_cp_g6

0x14e1,	// (0x0004900b) volume_small_pane_cp_g7

0x14ea,	// (0x00049014) volume_small_pane_cp_g8

0x14f3,	// (0x0004901d) volume_small_pane_cp_g9

0x14fc,	// (0x00049026) volume_small_pane_cp_g10

0x2aaa,	// (0x0004a5d4) midp_ticker_pane_g1_ParamLimits

0x2ab6,	// (0x0004a5e0) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00057262) midp_ticker_pane_g_ParamLimits

0xb30d,	// (0x00052e37) midp_ticker_pane_t1_ParamLimits

0xc5ac,	// (0x000540d6) aid_fill_nsta_2

0x362b,	// (0x0004b155) list_form2_midp_pane

0x47a7,	// (0x0004c2d1) midp_editing_number_pane_ParamLimits

0x47b6,	// (0x0004c2e0) midp_ticker_pane_ParamLimits

0x548d,	// (0x0004cfb7) form2_midp_field_pane

0x54b1,	// (0x0004cfdb) scroll_pane_cp51

0x54d1,	// (0x0004cffb) form2_midp_button_pane_ParamLimits

0x54d1,	// (0x0004cffb) form2_midp_button_pane

0x54e3,	// (0x0004d00d) form2_midp_content_pane_ParamLimits

0x54e3,	// (0x0004d00d) form2_midp_content_pane

0x54fd,	// (0x0004d027) form2_midp_field_choice_group_pane

0x5505,	// (0x0004d02f) form2_midp_field_pane_g1

0x550d,	// (0x0004d037) form2_midp_field_pane_g2

0x5515,	// (0x0004d03f) form2_midp_field_pane_g3

0x551d,	// (0x0004d047) form2_midp_field_pane_g4

0x0003,

0xfad7,	// (0x00057601) form2_midp_field_pane_g

0x5525,	// (0x0004d04f) form2_midp_gauge_slider_pane

0x552d,	// (0x0004d057) form2_midp_gauge_wait_pane

0x5535,	// (0x0004d05f) form2_midp_image_pane_ParamLimits

0x5535,	// (0x0004d05f) form2_midp_image_pane

0x5550,	// (0x0004d07a) form2_midp_label_pane_ParamLimits

0x5550,	// (0x0004d07a) form2_midp_label_pane

0xd05c,	// (0x00054b86) form2_midp_label_pane_cp_ParamLimits

0xd05c,	// (0x00054b86) form2_midp_label_pane_cp

0x5590,	// (0x0004d0ba) form2_midp_string_pane_ParamLimits

0x5590,	// (0x0004d0ba) form2_midp_string_pane

0x9e25,	// (0x0005194f) form2_midp_text_pane_ParamLimits

0x9e25,	// (0x0005194f) form2_midp_text_pane

0x55a2,	// (0x0004d0cc) form2_midp_time_pane

0x55b2,	// (0x0004d0dc) input_focus_pane_cp51_ParamLimits

0x55b2,	// (0x0004d0dc) input_focus_pane_cp51

0x55ca,	// (0x0004d0f4) form2_midp_label_pane_t1_ParamLimits

0x55ca,	// (0x0004d0f4) form2_midp_label_pane_t1

0x9e48,	// (0x00051972) form2_mdip_text_pane_t1_ParamLimits

0x9e48,	// (0x00051972) form2_mdip_text_pane_t1

0xf127,	// (0x00056c51) form2_midp_time_pane_t1

0x5618,	// (0x0004d142) form2_midp_gauge_slider_pane_t1

0xd07d,	// (0x00054ba7) form2_midp_gauge_slider_pane_t2

0xd08f,	// (0x00054bb9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae0,	// (0x0005760a) form2_midp_gauge_slider_pane_t

0x564e,	// (0x0004d178) form2_midp_slider_pane

0x565a,	// (0x0004d184) form2_midp_gauge_wait_pane_t1

0x5668,	// (0x0004d192) form2_midp_wait_pane_ParamLimits

0x5668,	// (0x0004d192) form2_midp_wait_pane

0x3356,	// (0x0004ae80) list_single_2graphic_pane_cp4_ParamLimits

0x3356,	// (0x0004ae80) list_single_2graphic_pane_cp4

0xc9e6,	// (0x00054510) list_single_midp_graphic_pane_cp_ParamLimits

0xc9e6,	// (0x00054510) list_single_midp_graphic_pane_cp

0xa0d3,	// (0x00051bfd) list_highlight_pane_cp20

0x56ac,	// (0x0004d1d6) list_single_2graphic_pane_g1_cp4

0x4c45,	// (0x0004c76f) list_single_2graphic_pane_g2_cp4

0x56b4,	// (0x0004d1de) list_single_2graphic_pane_t1_cp4

0xa360,	// (0x00051e8a) list_highlight_pane_cp21

0x56c3,	// (0x0004d1ed) list_single_midp_graphic_pane_g4_cp

0x56d2,	// (0x0004d1fc) list_single_midp_graphic_pane_t1_cp

0xd0a1,	// (0x00054bcb) form2_mdip_string_pane_t1_ParamLimits

0xd0a1,	// (0x00054bcb) form2_mdip_string_pane_t1

0xa0d3,	// (0x00051bfd) bg_wml_button_pane_cp2

0x9fe3,	// (0x00051b0d) form2_midp_image_pane_g1

0x002a,	// (0x00047b54) list_double_large_graphic_pane_g5_ParamLimits

0x002a,	// (0x00047b54) list_double_large_graphic_pane_g5

0xb269,	// (0x00052d93) midp_form_pane_ParamLimits

0xa360,	// (0x00051e8a) main_apps_wheel_pane_ParamLimits

0xb8b9,	// (0x000533e3) popup_preview_window_ParamLimits

0xb8b9,	// (0x000533e3) popup_preview_window

0x0eea,	// (0x00048a14) popup_touch_info_window_ParamLimits

0x0eea,	// (0x00048a14) popup_touch_info_window

0x0f0c,	// (0x00048a36) popup_touch_menu_window_ParamLimits

0x0f0c,	// (0x00048a36) popup_touch_menu_window

0x9fd9,	// (0x00051b03) bg_popup_sub_pane_cp6

0x5783,	// (0x0004d2ad) list_touch_menu_pane

0x578b,	// (0x0004d2b5) list_single_touch_menu_pane_ParamLimits

0x578b,	// (0x0004d2b5) list_single_touch_menu_pane

0x57a3,	// (0x0004d2cd) list_single_touch_menu_pane_t1

0xa360,	// (0x00051e8a) bg_popup_sub_pane_cp7_ParamLimits

0xa360,	// (0x00051e8a) bg_popup_sub_pane_cp7

0x57b1,	// (0x0004d2db) heading_sub_pane

0x57b9,	// (0x0004d2e3) list_touch_info_pane_ParamLimits

0x57b9,	// (0x0004d2e3) list_touch_info_pane

0x57c8,	// (0x0004d2f2) list_single_touch_info_pane_ParamLimits

0x57c8,	// (0x0004d2f2) list_single_touch_info_pane

0x57da,	// (0x0004d304) list_single_touch_info_pane_t1

0x57e8,	// (0x0004d312) list_single_touch_info_pane_t2

0x0001,

0xfaee,	// (0x00057618) list_single_touch_info_pane_t

0x29cc,	// (0x0004a4f6) bg_popup_heading_pane_cp

0x57f6,	// (0x0004d320) heading_sub_pane_t1

0x329d,	// (0x0004adc7) bg_popup_preview_window_pane_cp_ParamLimits

0x329d,	// (0x0004adc7) bg_popup_preview_window_pane_cp

0x57b1,	// (0x0004d2db) heading_preview_pane

0x57b9,	// (0x0004d2e3) list_preview_pane_ParamLimits

0x57b9,	// (0x0004d2e3) list_preview_pane

0x5804,	// (0x0004d32e) popup_preview_window_g1

0x57c8,	// (0x0004d2f2) list_single_preview_pane_ParamLimits

0x57c8,	// (0x0004d2f2) list_single_preview_pane

0x580c,	// (0x0004d336) list_single_preview_pane_g1

0x5814,	// (0x0004d33e) list_single_preview_pane_t1

0x57da,	// (0x0004d304) list_single_preview_pane_t2

0x0001,

0xfaf3,	// (0x0005761d) list_single_preview_pane_t

0x5822,	// (0x0004d34c) bg_popup_heading_pane_cp2_ParamLimits

0x5822,	// (0x0004d34c) bg_popup_heading_pane_cp2

0x5838,	// (0x0004d362) heading_preview_pane_g1

0x5840,	// (0x0004d36a) heading_preview_pane_t1_ParamLimits

0x5840,	// (0x0004d36a) heading_preview_pane_t1

0xa488,	// (0x00051fb2) soft_indicator_pane_t1_ParamLimits

0xabd4,	// (0x000526fe) scroll_pane_ParamLimits

0xe310,	// (0x00055e3a) scroll_sc2_left_pane

0xe319,	// (0x00055e43) scroll_sc2_right_pane

0xe338,	// (0x00055e62) scroll_bg_pane_g1_ParamLimits

0xe34d,	// (0x00055e77) scroll_bg_pane_g2_ParamLimits

0xe365,	// (0x00055e8f) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x000571ed) scroll_bg_pane_g_ParamLimits

0xe338,	// (0x00055e62) scroll_handle_pane_g1_ParamLimits

0xe387,	// (0x00055eb1) scroll_handle_pane_g2_ParamLimits

0xe365,	// (0x00055e8f) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x000571f4) scroll_handle_pane_g_ParamLimits

0x0948,	// (0x00048472) popup_choice_list_window_ParamLimits

0x0948,	// (0x00048472) popup_choice_list_window

0x3173,	// (0x0004ac9d) choice_list_pane

0x31f5,	// (0x0004ad1f) cell_toolbar_pane_t1

0x321d,	// (0x0004ad47) toolbar_button_pane_ParamLimits

0x42e2,	// (0x0004be0c) ai_gene_pane_1_t2_ParamLimits

0x42e2,	// (0x0004be0c) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00057417) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00057417) ai_gene_pane_1_t

0x585d,	// (0x0004d387) scroll_sc2_left_pane_g1

0x585d,	// (0x0004d387) scroll_sc2_right_pane_g1

0x2cf3,	// (0x0004a81d) bg_popup_sub_pane_cp10

0x5867,	// (0x0004d391) list_choice_list_pane

0x5880,	// (0x0004d3aa) list_single_choice_list_pane_ParamLimits

0x5880,	// (0x0004d3aa) list_single_choice_list_pane

0x5898,	// (0x0004d3c2) list_single_choice_list_pane_g1

0xae5b,	// (0x00052985) list_single_choice_list_pane_t1_ParamLimits

0xae5b,	// (0x00052985) list_single_choice_list_pane_t1

0x58a0,	// (0x0004d3ca) choice_list_pane_g1

0x58a8,	// (0x0004d3d2) choice_list_pane_t1

0x9fd9,	// (0x00051b03) input_focus_pane_cp11

0xc55d,	// (0x00054087) title_pane_stacon_g2_ParamLimits

0xc55d,	// (0x00054087) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x000571d3) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x000571d3) title_pane_stacon_g

0x29cc,	// (0x0004a4f6) cursor_press_pane

0xb530,	// (0x0005305a) popup_fep_hwr_window_ParamLimits

0xb530,	// (0x0005305a) popup_fep_hwr_window

0x0a8c,	// (0x000485b6) popup_fep_vkb_window_ParamLimits

0x0a8c,	// (0x000485b6) popup_fep_vkb_window

0x58b6,	// (0x0004d3e0) cursor_press_pane_g1

0x0002,

0xfb1c,	// (0x00057646) fep_vkb_side_pane_g_ParamLimits

0x153e,	// (0x00049068) fep_hwr_candidate_pane_ParamLimits

0x153e,	// (0x00049068) fep_hwr_candidate_pane

0x1568,	// (0x00049092) fep_hwr_side_pane_ParamLimits

0x1568,	// (0x00049092) fep_hwr_side_pane

0x158a,	// (0x000490b4) fep_hwr_top_pane_ParamLimits

0x158a,	// (0x000490b4) fep_hwr_top_pane

0x15a2,	// (0x000490cc) fep_hwr_write_pane_ParamLimits

0x15a2,	// (0x000490cc) fep_hwr_write_pane

0xfb1c,	// (0x00057646) fep_vkb_side_pane_g

0x58be,	// (0x0004d3e8) fep_hwr_top_pane_g1

0x58d0,	// (0x0004d3fa) fep_hwr_top_pane_g2

0x15ce,	// (0x000490f8) fep_hwr_top_pane_g3

0x0002,

0xfaf8,	// (0x00057622) fep_hwr_top_pane_g

0x15e3,	// (0x0004910d) fep_hwr_top_text_pane

0xe481,	// (0x00055fab) fep_hwr_top_text_pane_g1

0x5906,	// (0x0004d430) fep_hwr_top_text_pane_t1

0x16ed,	// (0x00049217) fep_hwr_candidate_pane_g1

0x5b51,	// (0x0004d67b) fep_vkb_keypad_pane_g3_ParamLimits

0x5b51,	// (0x0004d67b) fep_vkb_keypad_pane_g3

0x5b7d,	// (0x0004d6a7) fep_vkb_keypad_pane_g4_ParamLimits

0x5b7d,	// (0x0004d6a7) fep_vkb_keypad_pane_g4

0x5bf4,	// (0x0004d71e) fep_vkb_bottom_pane_g2_ParamLimits

0x5bf4,	// (0x0004d71e) fep_vkb_bottom_pane_g2

0x0001,

0xfb23,	// (0x0005764d) fep_vkb_bottom_pane_g_ParamLimits

0xfb23,	// (0x0005764d) fep_vkb_bottom_pane_g

0x585d,	// (0x0004d387) cell_vkb_side_pane_g2

0x0001,

0xfb2d,	// (0x00057657) cell_vkb_side_pane_g

0x5c7f,	// (0x0004d7a9) cell_vkb_side_pane_t1

0x5c8d,	// (0x0004d7b7) cell_vkb_side_pane_t1_copy1

0x585d,	// (0x0004d387) bg_fep_vkb_candidate_pane_g2

0x5dd1,	// (0x0004d8fb) cell_vkb_candidate_pane_ParamLimits

0x5914,	// (0x0004d43e) aid_size_cell_vkb_ParamLimits

0x5914,	// (0x0004d43e) aid_size_cell_vkb

0x5dd1,	// (0x0004d8fb) cell_vkb_candidate_pane

0x1707,	// (0x00049231) bg_popup_fep_shadow_pane_g1

0xd15f,	// (0x00054c89) fep_vkb_bottom_pane_ParamLimits

0xd15f,	// (0x00054c89) fep_vkb_bottom_pane

0x59e3,	// (0x0004d50d) fep_vkb_candidate_pane_ParamLimits

0x59e3,	// (0x0004d50d) fep_vkb_candidate_pane

0xd18b,	// (0x00054cb5) fep_vkb_keypad_pane_ParamLimits

0xd18b,	// (0x00054cb5) fep_vkb_keypad_pane

0xd1b2,	// (0x00054cdc) fep_vkb_side_pane_ParamLimits

0xd1b2,	// (0x00054cdc) fep_vkb_side_pane

0xd1ee,	// (0x00054d18) fep_vkb_top_pane_ParamLimits

0xd1ee,	// (0x00054d18) fep_vkb_top_pane

0x5aaa,	// (0x0004d5d4) fep_vkb_top_pane_g1_ParamLimits

0x5aaa,	// (0x0004d5d4) fep_vkb_top_pane_g1

0x5ab9,	// (0x0004d5e3) fep_vkb_top_pane_g2_ParamLimits

0x5ab9,	// (0x0004d5e3) fep_vkb_top_pane_g2

0x5ac8,	// (0x0004d5f2) fep_vkb_top_pane_g3_ParamLimits

0x5ac8,	// (0x0004d5f2) fep_vkb_top_pane_g3

0x0003,

0xfb13,	// (0x0005763d) fep_vkb_top_pane_g_ParamLimits

0xfb13,	// (0x0005763d) fep_vkb_top_pane_g

0x5ae6,	// (0x0004d610) fep_vkb_top_text_pane_ParamLimits

0x5ae6,	// (0x0004d610) fep_vkb_top_text_pane

0xd22a,	// (0x00054d54) fep_vkb_side_pane_g1_ParamLimits

0xd22a,	// (0x00054d54) fep_vkb_side_pane_g1

0x5b40,	// (0x0004d66a) grid_vkb_side_pane_ParamLimits

0x5b40,	// (0x0004d66a) grid_vkb_side_pane

0x170f,	// (0x00049239) bg_popup_fep_shadow_pane_g2

0x1718,	// (0x00049242) bg_popup_fep_shadow_pane_g3

0x1720,	// (0x0004924a) bg_popup_fep_shadow_pane_g4

0x1729,	// (0x00049253) bg_popup_fep_shadow_pane_g5

0x1733,	// (0x0004925d) bg_popup_fep_shadow_pane_g6

0x173b,	// (0x00049265) bg_popup_fep_shadow_pane_g7

0xad28,	// (0x00052852) bg_popup_fep_shadow_pane_g8

0x5b9f,	// (0x0004d6c9) grid_vkb_keypad_number_pane_ParamLimits

0x5b9f,	// (0x0004d6c9) grid_vkb_keypad_number_pane

0x5bb3,	// (0x0004d6dd) grid_vkb_keypad_pane_ParamLimits

0x5bb3,	// (0x0004d6dd) grid_vkb_keypad_pane

0x5bd9,	// (0x0004d703) fep_vkb_bottom_pane_g1_ParamLimits

0x5bd9,	// (0x0004d703) fep_vkb_bottom_pane_g1

0x5c02,	// (0x0004d72c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5c02,	// (0x0004d72c) grid_vkb_keypad_bottom_left_pane

0x5c17,	// (0x0004d741) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5c17,	// (0x0004d741) grid_vkb_keypad_bottom_right_pane

0x5c2c,	// (0x0004d756) fep_vkb_top_text_pane_g1

0xd271,	// (0x00054d9b) fep_vkb_top_text_pane_t1

0xd283,	// (0x00054dad) cell_vkb_side_pane_ParamLimits

0xd283,	// (0x00054dad) cell_vkb_side_pane

0x585d,	// (0x0004d387) cell_vkb_side_pane_g1

0x5c9b,	// (0x0004d7c5) cell_vkb_keypad_pane_ParamLimits

0x5c9b,	// (0x0004d7c5) cell_vkb_keypad_pane

0x5d28,	// (0x0004d852) cell_vkb_keypad_pane_g1

0x0008,

0xfb40,	// (0x0005766a) bg_popup_fep_shadow_pane_g

0x585d,	// (0x0004d387) cell_hwr_side_pane_g1

0x585d,	// (0x0004d387) cell_hwr_side_pane_g2

0x5d32,	// (0x0004d85c) cell_vkb_keypad_pane_t1

0xd299,	// (0x00054dc3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd299,	// (0x00054dc3) cell_vkb_keypad_bottom_left_pane

0xd2ae,	// (0x00054dd8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd2ae,	// (0x00054dd8) cell_vkb_keypad_bottom_right_pane

0x585d,	// (0x0004d387) cell_vkb_keypad_bottom_left_pane_g1

0x585d,	// (0x0004d387) cell_vkb_keypad_bottom_right_pane_g1

0x5d96,	// (0x0004d8c0) cell_vkb_keypad_number_pane_ParamLimits

0x5d96,	// (0x0004d8c0) cell_vkb_keypad_number_pane

0x5db5,	// (0x0004d8df) cell_vkb_keypad_number_pane_g1

0x5dbf,	// (0x0004d8e9) cell_vkb_keypad_number_pane_g2

0x5dc8,	// (0x0004d8f2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb32,	// (0x0005765c) cell_vkb_keypad_number_pane_g

0x5d32,	// (0x0004d85c) cell_vkb_keypad_number_pane_t1

0x5df2,	// (0x0004d91c) fep_vkb_candidate_pane_g1

0x0001,

0xfb2d,	// (0x00057657) cell_hwr_side_pane_g

0x5e0b,	// (0x0004d935) cell_hwr_side_pane_t1

0x174d,	// (0x00049277) cell_hwr_side_pane_t1_copy1

0x5ad8,	// (0x0004d602) cell_hwr_candidate_pane_g1

0x175b,	// (0x00049285) cell_hwr_candidate_pane_t1

0x585d,	// (0x0004d387) cell_vkb_candidate_pane_g2

0x5e91,	// (0x0004d9bb) cell_vkb_candidate_pane_t1

0x1505,	// (0x0004902f) bg_popup_fep_shadow_pane_ParamLimits

0x1505,	// (0x0004902f) bg_popup_fep_shadow_pane

0xd125,	// (0x00054c4f) bg_fep_hwr_top_pane_g4

0x58e2,	// (0x0004d40c) bg_hwr_side_pane_g1_ParamLimits

0x58e2,	// (0x0004d40c) bg_hwr_side_pane_g1

0xbdcd,	// (0x000538f7) cell_hwr_side_pane_ParamLimits

0xbdcd,	// (0x000538f7) cell_hwr_side_pane

0x165e,	// (0x00049188) fep_hwr_write_pane_g1_ParamLimits

0x165e,	// (0x00049188) fep_hwr_write_pane_g1

0x166b,	// (0x00049195) fep_hwr_write_pane_g2_ParamLimits

0x166b,	// (0x00049195) fep_hwr_write_pane_g2

0x1678,	// (0x000491a2) fep_hwr_write_pane_g3_ParamLimits

0x1678,	// (0x000491a2) fep_hwr_write_pane_g3

0xbded,	// (0x00053917) fep_hwr_write_pane_g4_ParamLimits

0xbded,	// (0x00053917) fep_hwr_write_pane_g4

0x0005,

0xfaff,	// (0x00057629) fep_hwr_write_pane_g_ParamLimits

0xfaff,	// (0x00057629) fep_hwr_write_pane_g

0xd125,	// (0x00054c4f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd125,	// (0x00054c4f) bg_fep_hwr_candidate_pane_g2

0x169b,	// (0x000491c5) cell_hwr_candidate_pane_ParamLimits

0x169b,	// (0x000491c5) cell_hwr_candidate_pane

0x16ed,	// (0x00049217) fep_hwr_candidate_pane_g1_ParamLimits

0x5942,	// (0x0004d46c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5942,	// (0x0004d46c) bg_popup_fep_shadow_pane_cp2

0x5ad8,	// (0x0004d602) fep_vkb_top_pane_g4_ParamLimits

0x5ad8,	// (0x0004d602) fep_vkb_top_pane_g4

0x5b1e,	// (0x0004d648) fep_vkb_side_pane_g2_ParamLimits

0x5b1e,	// (0x0004d648) fep_vkb_side_pane_g2

0x9b34,	// (0x0005165e) list_setting_pane_t4_ParamLimits

0x9b34,	// (0x0005165e) list_setting_pane_t4

0x9bd0,	// (0x000516fa) list_setting_number_pane_t5_ParamLimits

0x9bd0,	// (0x000516fa) list_setting_number_pane_t5

0xe4b8,	// (0x00055fe2) list_double_heading_pane_cp2_ParamLimits

0xe4b8,	// (0x00055fe2) list_double_heading_pane_cp2

0x5e9f,	// (0x0004d9c9) list_double_heading_pane_g1_cp2_ParamLimits

0x5e9f,	// (0x0004d9c9) list_double_heading_pane_g1_cp2

0x5eab,	// (0x0004d9d5) list_double_heading_pane_g2_cp2_ParamLimits

0x5eab,	// (0x0004d9d5) list_double_heading_pane_g2_cp2

0x5ebf,	// (0x0004d9e9) list_double_heading_pane_t1_cp2_ParamLimits

0x5ebf,	// (0x0004d9e9) list_double_heading_pane_t1_cp2

0x5ed5,	// (0x0004d9ff) list_double_heading_pane_t2_cp2_ParamLimits

0x5ed5,	// (0x0004d9ff) list_double_heading_pane_t2_cp2

0x9fc1,	// (0x00051aeb) aid_value_unit2

0xf45d,	// (0x00056f87) popup_preview_fixed_window

0xa643,	// (0x0005216d) bg_popup_preview_window_pane_cp02

0x5ee7,	// (0x0004da11) list_preview_fixed_pane

0x5f2d,	// (0x0004da57) list_empty_pane_fp_ParamLimits

0x5f2d,	// (0x0004da57) list_empty_pane_fp

0x5f2d,	// (0x0004da57) list_single_cale_day_pane_fp_ParamLimits

0x5f2d,	// (0x0004da57) list_single_cale_day_pane_fp

0x5f2d,	// (0x0004da57) list_single_graphic_heading_pane_fp_ParamLimits

0x5f2d,	// (0x0004da57) list_single_graphic_heading_pane_fp

0x5f2d,	// (0x0004da57) list_single_graphic_pane_fp_ParamLimits

0x5f2d,	// (0x0004da57) list_single_graphic_pane_fp

0x5f2d,	// (0x0004da57) list_single_heading_pane_fp_ParamLimits

0x5f2d,	// (0x0004da57) list_single_heading_pane_fp

0x5f2d,	// (0x0004da57) list_single_pane_fp_ParamLimits

0x5f2d,	// (0x0004da57) list_single_pane_fp

0x5f46,	// (0x0004da70) list_single_pane_fp_g1_ParamLimits

0x5f46,	// (0x0004da70) list_single_pane_fp_g1

0x1779,	// (0x000492a3) list_single_pane_fp_g2_ParamLimits

0x1779,	// (0x000492a3) list_single_pane_fp_g2

0x1785,	// (0x000492af) list_single_pane_fp_g3_ParamLimits

0x1785,	// (0x000492af) list_single_pane_fp_g3

0x5f52,	// (0x0004da7c) list_single_pane_fp_g4_ParamLimits

0x5f52,	// (0x0004da7c) list_single_pane_fp_g4

0x0003,

0xfb61,	// (0x0005768b) list_single_pane_fp_g_ParamLimits

0xfb61,	// (0x0005768b) list_single_pane_fp_g

0xf13a,	// (0x00056c64) list_single_pane_fp_t1_ParamLimits

0xf13a,	// (0x00056c64) list_single_pane_fp_t1

0xf151,	// (0x00056c7b) list_single_graphic_pane_fp_g1_ParamLimits

0xf151,	// (0x00056c7b) list_single_graphic_pane_fp_g1

0x5f46,	// (0x0004da70) list_single_graphic_pane_fp_g2_ParamLimits

0x5f46,	// (0x0004da70) list_single_graphic_pane_fp_g2

0x1779,	// (0x000492a3) list_single_graphic_pane_fp_g3_ParamLimits

0x1779,	// (0x000492a3) list_single_graphic_pane_fp_g3

0x1785,	// (0x000492af) list_single_graphic_pane_fp_g4_ParamLimits

0x1785,	// (0x000492af) list_single_graphic_pane_fp_g4

0x5f52,	// (0x0004da7c) list_single_graphic_pane_fp_g5_ParamLimits

0x5f52,	// (0x0004da7c) list_single_graphic_pane_fp_g5

0x0004,

0xfb6a,	// (0x00057694) list_single_graphic_pane_fp_g_ParamLimits

0xfb6a,	// (0x00057694) list_single_graphic_pane_fp_g

0xf15d,	// (0x00056c87) list_single_graphic_pane_fp_t1_ParamLimits

0xf15d,	// (0x00056c87) list_single_graphic_pane_fp_t1

0xf151,	// (0x00056c7b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf151,	// (0x00056c7b) list_single_graphic_heading_pane_fp_g1

0x5f46,	// (0x0004da70) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5f46,	// (0x0004da70) list_single_graphic_heading_pane_fp_g2

0x1779,	// (0x000492a3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1779,	// (0x000492a3) list_single_graphic_heading_pane_fp_g3

0x1785,	// (0x000492af) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1785,	// (0x000492af) list_single_graphic_heading_pane_fp_g4

0x5f52,	// (0x0004da7c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5f52,	// (0x0004da7c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x00057694) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x00057694) list_single_graphic_heading_pane_fp_g

0xf173,	// (0x00056c9d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf173,	// (0x00056c9d) list_single_graphic_heading_pane_fp_t1

0xf189,	// (0x00056cb3) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf189,	// (0x00056cb3) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb75,	// (0x0005769f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb75,	// (0x0005769f) list_single_graphic_heading_pane_fp_t

0xf19b,	// (0x00056cc5) list_single_cale_day_pane_fp_g1_ParamLimits

0xf19b,	// (0x00056cc5) list_single_cale_day_pane_fp_g1

0x5f5e,	// (0x0004da88) list_single_cale_day_pane_fp_g2_ParamLimits

0x5f5e,	// (0x0004da88) list_single_cale_day_pane_fp_g2

0x1799,	// (0x000492c3) list_single_cale_day_pane_fp_g3_ParamLimits

0x1799,	// (0x000492c3) list_single_cale_day_pane_fp_g3

0x17c1,	// (0x000492eb) list_single_cale_day_pane_fp_g4_ParamLimits

0x17c1,	// (0x000492eb) list_single_cale_day_pane_fp_g4

0x17e5,	// (0x0004930f) list_single_cale_day_pane_fp_g5_ParamLimits

0x17e5,	// (0x0004930f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7a,	// (0x000576a4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7a,	// (0x000576a4) list_single_cale_day_pane_fp_g

0xf1d3,	// (0x00056cfd) list_single_cale_day_pane_fp_t1_ParamLimits

0xf1d3,	// (0x00056cfd) list_single_cale_day_pane_fp_t1

0xf1f9,	// (0x00056d23) list_single_cale_day_pane_fp_t2_ParamLimits

0xf1f9,	// (0x00056d23) list_single_cale_day_pane_fp_t2

0xf212,	// (0x00056d3c) list_single_cale_day_pane_fp_t3_ParamLimits

0xf212,	// (0x00056d3c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb85,	// (0x000576af) list_single_cale_day_pane_fp_t_ParamLimits

0xfb85,	// (0x000576af) list_single_cale_day_pane_fp_t

0x5f46,	// (0x0004da70) list_empty_pane_fp_g1_ParamLimits

0x5f46,	// (0x0004da70) list_empty_pane_fp_g1

0xf22b,	// (0x00056d55) list_empty_pane_fp_t1

0xf239,	// (0x00056d63) list_empty_pane_fp_t2

0x0001,

0xfb8c,	// (0x000576b6) list_empty_pane_fp_t

0x5f46,	// (0x0004da70) list_single_heading_pane_fp_g1_ParamLimits

0x5f46,	// (0x0004da70) list_single_heading_pane_fp_g1

0x1779,	// (0x000492a3) list_single_heading_pane_fp_g2_ParamLimits

0x1779,	// (0x000492a3) list_single_heading_pane_fp_g2

0x1785,	// (0x000492af) list_single_heading_pane_fp_g3_ParamLimits

0x1785,	// (0x000492af) list_single_heading_pane_fp_g3

0x0002,

0xfb91,	// (0x000576bb) list_single_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x000576bb) list_single_heading_pane_fp_g

0xf247,	// (0x00056d71) list_single_heading_pane_fp_t1_ParamLimits

0xf247,	// (0x00056d71) list_single_heading_pane_fp_t1

0xf259,	// (0x00056d83) list_single_heading_pane_fp_t2_ParamLimits

0xf259,	// (0x00056d83) list_single_heading_pane_fp_t2

0x0001,

0xfb98,	// (0x000576c2) list_single_heading_pane_fp_t_ParamLimits

0xfb98,	// (0x000576c2) list_single_heading_pane_fp_t

0xaeaf,	// (0x000529d9) aid_size_cell_fast

0xa5c3,	// (0x000520ed) soft_indicator_pane_cp1_t1

0xaeec,	// (0x00052a16) cell_app_pane_cp2_ParamLimits

0xaeec,	// (0x00052a16) cell_app_pane_cp2

0x1527,	// (0x00049051) fep_hwr_candidate_drop_down_list_pane

0xd133,	// (0x00054c5d) fep_hwr_candidate_pane_g3_ParamLimits

0xd133,	// (0x00054c5d) fep_hwr_candidate_pane_g3

0xd140,	// (0x00054c6a) fep_hwr_candidate_pane_g4_ParamLimits

0xd140,	// (0x00054c6a) fep_hwr_candidate_pane_g4

0x0002,

0xfb0c,	// (0x00057636) fep_hwr_candidate_pane_g_ParamLimits

0xfb0c,	// (0x00057636) fep_hwr_candidate_pane_g

0x59d2,	// (0x0004d4fc) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x59d2,	// (0x0004d4fc) fep_vkb_candidate_drop_down_list_pane

0x5dfa,	// (0x0004d924) fep_vkb_candidate_pane_g3

0x5e02,	// (0x0004d92c) fep_vkb_candidate_pane_g4

0x0002,

0xfb39,	// (0x00057663) fep_vkb_candidate_pane_g

0x5ad8,	// (0x0004d602) cell_hwr_candidate_pane_g1_ParamLimits

0x5e19,	// (0x0004d943) cell_hwr_candidate_pane_g3_ParamLimits

0x5e19,	// (0x0004d943) cell_hwr_candidate_pane_g3

0x5e3a,	// (0x0004d964) cell_hwr_candidate_pane_g4_ParamLimits

0x5e3a,	// (0x0004d964) cell_hwr_candidate_pane_g4

0x0002,

0xfb53,	// (0x0005767d) cell_hwr_candidate_pane_g_ParamLimits

0xfb53,	// (0x0005767d) cell_hwr_candidate_pane_g

0x5e5b,	// (0x0004d985) cell_vkb_candidate_pane_g3_ParamLimits

0x5e5b,	// (0x0004d985) cell_vkb_candidate_pane_g3

0x5e76,	// (0x0004d9a0) cell_vkb_candidate_pane_g4_ParamLimits

0x5e76,	// (0x0004d9a0) cell_vkb_candidate_pane_g4

0x5f6a,	// (0x0004da94) cell_app_pane_cp2_g1_ParamLimits

0x5f6a,	// (0x0004da94) cell_app_pane_cp2_g1

0x5f88,	// (0x0004dab2) cell_app_pane_cp2_g2_ParamLimits

0x5f88,	// (0x0004dab2) cell_app_pane_cp2_g2

0x0001,

0xfb9d,	// (0x000576c7) cell_app_pane_cp2_g_ParamLimits

0xfb9d,	// (0x000576c7) cell_app_pane_cp2_g

0x5f94,	// (0x0004dabe) cell_app_pane_cp2_t1_ParamLimits

0x5f94,	// (0x0004dabe) cell_app_pane_cp2_t1

0xacb0,	// (0x000527da) grid_highlight_pane_cp1_ParamLimits

0xacb0,	// (0x000527da) grid_highlight_pane_cp1

0x1809,	// (0x00049333) cell_hwr_candidate_pane_cp1_ParamLimits

0x1809,	// (0x00049333) cell_hwr_candidate_pane_cp1

0x5ad8,	// (0x0004d602) fep_hwr_candidate_drop_down_list_pane_g1

0x5fa6,	// (0x0004dad0) fep_hwr_candidate_drop_down_list_pane_g2

0x5fb3,	// (0x0004dadd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x000576cc) fep_hwr_candidate_drop_down_list_pane_g

0x182d,	// (0x00049357) fep_hwr_candidate_drop_down_list_scroll_pane

0x1836,	// (0x00049360) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1836,	// (0x00049360) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1843,	// (0x0004936d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1843,	// (0x0004936d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1850,	// (0x0004937a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1850,	// (0x0004937a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5e5b,	// (0x0004d985) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5e5b,	// (0x0004d985) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5e76,	// (0x0004d9a0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5e76,	// (0x0004d9a0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x185d,	// (0x00049387) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x185d,	// (0x00049387) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1878,	// (0x000493a2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1878,	// (0x000493a2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1893,	// (0x000493bd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1893,	// (0x000493bd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x000576d3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x000576d3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5fc0,	// (0x0004daea) cell_vkb_candidate_pane_cp1_ParamLimits

0x5fc0,	// (0x0004daea) cell_vkb_candidate_pane_cp1

0x5ad8,	// (0x0004d602) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5ad8,	// (0x0004d602) fep_vkb_candidate_drop_down_list_pane_g1

0x5fa6,	// (0x0004dad0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5fa6,	// (0x0004dad0) fep_vkb_candidate_drop_down_list_pane_g2

0x5fb3,	// (0x0004dadd) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5fb3,	// (0x0004dadd) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x000576cc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba2,	// (0x000576cc) fep_vkb_candidate_drop_down_list_pane_g

0x5fe6,	// (0x0004db10) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5fe6,	// (0x0004db10) fep_vkb_candidate_drop_down_list_scroll_pane

0x5ff3,	// (0x0004db1d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5ff3,	// (0x0004db1d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6000,	// (0x0004db2a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6000,	// (0x0004db2a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x600c,	// (0x0004db36) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x600c,	// (0x0004db36) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5e19,	// (0x0004d943) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5e19,	// (0x0004d943) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5e3a,	// (0x0004d964) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5e3a,	// (0x0004d964) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6018,	// (0x0004db42) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6018,	// (0x0004db42) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6039,	// (0x0004db63) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6039,	// (0x0004db63) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x605a,	// (0x0004db84) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x605a,	// (0x0004db84) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x000576e4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x000576e4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa20b,	// (0x00051d35) title_pane_g1_ParamLimits

0xa21e,	// (0x00051d48) title_pane_g2_ParamLimits

0xf529,	// (0x00057053) title_pane_g_ParamLimits

0xe471,	// (0x00055f9b) aid_call2_pane

0xe479,	// (0x00055fa3) aid_call_pane

0xe481,	// (0x00055fab) popup_clock_analogue_window_g1

0xe481,	// (0x00055fab) popup_clock_analogue_window_g2

0x03e1,	// (0x00047f0b) popup_clock_analogue_window_g3

0x03ea,	// (0x00047f14) popup_clock_analogue_window_g4

0x9fe3,	// (0x00051b0d) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00057202) popup_clock_analogue_window_g

0x03f2,	// (0x00047f1c) popup_clock_analogue_window_t1

0x0450,	// (0x00047f7a) clock_digital_number_pane_ParamLimits

0x0450,	// (0x00047f7a) clock_digital_number_pane

0x045c,	// (0x00047f86) clock_digital_number_pane_cp02_ParamLimits

0x045c,	// (0x00047f86) clock_digital_number_pane_cp02

0x0468,	// (0x00047f92) clock_digital_number_pane_cp03_ParamLimits

0x0468,	// (0x00047f92) clock_digital_number_pane_cp03

0x0474,	// (0x00047f9e) clock_digital_number_pane_cp04_ParamLimits

0x0474,	// (0x00047f9e) clock_digital_number_pane_cp04

0x0480,	// (0x00047faa) clock_digital_separator_pane_ParamLimits

0x0480,	// (0x00047faa) clock_digital_separator_pane

0x048c,	// (0x00047fb6) popup_clock_digital_window_t1_ParamLimits

0x048c,	// (0x00047fb6) popup_clock_digital_window_t1

0x9fe3,	// (0x00051b0d) clock_digital_number_pane_g1

0x9fe3,	// (0x00051b0d) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0005720d) clock_digital_number_pane_g

0x9fe3,	// (0x00051b0d) clock_digital_separator_pane_g1

0x9fe3,	// (0x00051b0d) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0005720d) clock_digital_separator_pane_g

0xbba1,	// (0x000536cb) aid_fill_nsta_ParamLimits

0xc6c0,	// (0x000541ea) indicator_nsta_pane_ParamLimits

0x300c,	// (0x0004ab36) popup_clock_analogue_window

0x300c,	// (0x0004ab36) popup_clock_digital_window

0xcf5f,	// (0x00054a89) grid_indicator_nsta_pane_ParamLimits

0x52b2,	// (0x0004cddc) clock_nsta_pane_t2

0x0001,

0xfa8c,	// (0x000575b6) clock_nsta_pane_t

0x034a,	// (0x00047e74) aid_size_max_handle

0xb0ce,	// (0x00052bf8) aid_size_min_handle

0x29cc,	// (0x0004a4f6) editor_scroll_pane

0x6075,	// (0x0004db9f) ex_editor_pane

0xae36,	// (0x00052960) scroll_pane_cp13

0xac00,	// (0x0005272a) scroll_pane_cp14

0xe4b0,	// (0x00055fda) scroll_pane_cp36

0xb15b,	// (0x00052c85) list_single_graphic_hl_pane_cp2_ParamLimits

0xb15b,	// (0x00052c85) list_single_graphic_hl_pane_cp2

0xcdec,	// (0x00054916) list_single_graphic_hl_pane_ParamLimits

0xcdec,	// (0x00054916) list_single_graphic_hl_pane

0xf26f,	// (0x00056d99) aid_size_min_hl_cp1

0x607d,	// (0x0004dba7) list_highlight_pane_cp34_ParamLimits

0x607d,	// (0x0004dba7) list_highlight_pane_cp34

0x608e,	// (0x0004dbb8) list_single_graphic_hl_pane_g1_ParamLimits

0x608e,	// (0x0004dbb8) list_single_graphic_hl_pane_g1

0x9e64,	// (0x0005198e) list_single_graphic_hl_pane_g2_ParamLimits

0x9e64,	// (0x0005198e) list_single_graphic_hl_pane_g2

0x9e64,	// (0x0005198e) list_single_graphic_hl_pane_g3_ParamLimits

0x9e64,	// (0x0005198e) list_single_graphic_hl_pane_g3

0x2903,	// (0x0004a42d) list_single_graphic_hl_pane_g4_ParamLimits

0x2903,	// (0x0004a42d) list_single_graphic_hl_pane_g4

0xbe02,	// (0x0005392c) list_single_graphic_hl_pane_g5_ParamLimits

0xbe02,	// (0x0005392c) list_single_graphic_hl_pane_g5

0x0004,

0xfbcb,	// (0x000576f5) list_single_graphic_hl_pane_g_ParamLimits

0xfbcb,	// (0x000576f5) list_single_graphic_hl_pane_g

0x9e70,	// (0x0005199a) list_single_graphic_hl_pane_t1_ParamLimits

0x9e70,	// (0x0005199a) list_single_graphic_hl_pane_t1

0x609b,	// (0x0004dbc5) aid_size_min_hl_cp2

0x60a4,	// (0x0004dbce) list_highlight_pane_cp34_cp2_ParamLimits

0x60a4,	// (0x0004dbce) list_highlight_pane_cp34_cp2

0x608e,	// (0x0004dbb8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x608e,	// (0x0004dbb8) list_single_graphic_hl_pane_g1_cp2

0x60b1,	// (0x0004dbdb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x60b1,	// (0x0004dbdb) list_single_graphic_hl_pane_g2_cp2

0x60bd,	// (0x0004dbe7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x60bd,	// (0x0004dbe7) list_single_graphic_hl_pane_g3_cp2

0x60cb,	// (0x0004dbf5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x60cb,	// (0x0004dbf5) list_single_graphic_hl_pane_g4_cp2

0x60d7,	// (0x0004dc01) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x60d7,	// (0x0004dc01) list_single_graphic_hl_pane_g5_cp2

0xb361,	// (0x00052e8b) control_pane_g4_ParamLimits

0xb361,	// (0x00052e8b) control_pane_g4

0x2cf3,	// (0x0004a81d) bg_popup_sub_pane_cp10_ParamLimits

0x5867,	// (0x0004d391) list_choice_list_pane_ParamLimits

0x5876,	// (0x0004d3a0) scroll_pane_cp23

0xa643,	// (0x0005216d) bg_popup_preview_window_pane_cp02_ParamLimits

0x5ee7,	// (0x0004da11) list_preview_fixed_pane_ParamLimits

0x5efd,	// (0x0004da27) list_preview_fixed_pane_cp_ParamLimits

0x5efd,	// (0x0004da27) list_preview_fixed_pane_cp

0x5f09,	// (0x0004da33) popup_preview_fixed_window_g1_ParamLimits

0x5f09,	// (0x0004da33) popup_preview_fixed_window_g1

0x5f15,	// (0x0004da3f) popup_preview_fixed_window_g2_ParamLimits

0x5f15,	// (0x0004da3f) popup_preview_fixed_window_g2

0x0002,

0xfb5a,	// (0x00057684) popup_preview_fixed_window_g_ParamLimits

0xfb5a,	// (0x00057684) popup_preview_fixed_window_g

0x01fe,	// (0x00047d28) aid_navi_side_left_pane_ParamLimits

0x0213,	// (0x00047d3d) aid_navi_side_right_pane_ParamLimits

0x022b,	// (0x00047d55) navi_icon_pane_stacon_ParamLimits

0x023f,	// (0x00047d69) navi_navi_pane_stacon_ParamLimits

0x022b,	// (0x00047d55) navi_text_pane_stacon_ParamLimits

0x9fd9,	// (0x00051b03) main_text_info_pane

0x6101,	// (0x0004dc2b) listscroll_text_info_pane

0x6109,	// (0x0004dc33) list_text_info_pane_ParamLimits

0x6109,	// (0x0004dc33) list_text_info_pane

0x6118,	// (0x0004dc42) scroll_pane_cp24_ParamLimits

0x6118,	// (0x0004dc42) scroll_pane_cp24

0xd2c9,	// (0x00054df3) list_text_info_pane_t1_ParamLimits

0xd2c9,	// (0x00054df3) list_text_info_pane_t1

0xb494,	// (0x00052fbe) popup_fast_swap2_window_ParamLimits

0xb494,	// (0x00052fbe) popup_fast_swap2_window

0x615b,	// (0x0004dc85) aid_size_cell_fast2

0x9fd9,	// (0x00051b03) bg_popup_window_pane_cp17

0x6165,	// (0x0004dc8f) heading_pane_cp2

0x616d,	// (0x0004dc97) listscroll_fast2_pane

0x6175,	// (0x0004dc9f) grid_fast2_pane

0x617f,	// (0x0004dca9) listscroll_fast2_pane_g1

0x6189,	// (0x0004dcb3) listscroll_fast2_pane_g2

0x0001,

0xfbd6,	// (0x00057700) listscroll_fast2_pane_g

0xae36,	// (0x00052960) scroll_pane_cp26

0x6193,	// (0x0004dcbd) cell_fast2_pane_ParamLimits

0x6193,	// (0x0004dcbd) cell_fast2_pane

0x61aa,	// (0x0004dcd4) cell_fast2_pane_g1

0x61b3,	// (0x0004dcdd) cell_fast2_pane_g2

0x61bc,	// (0x0004dce6) cell_fast2_pane_g3

0x0002,

0xfbdb,	// (0x00057705) cell_fast2_pane_g

0xa9bd,	// (0x000524e7) grid_highlight_pane_cp9

0xa9d2,	// (0x000524fc) main_eswt_pane_ParamLimits

0xa9d2,	// (0x000524fc) main_eswt_pane

0x612d,	// (0x0004dc57) list_single_text_info_pane

0x61c4,	// (0x0004dcee) eswt_ctrl_button_pane

0x61c4,	// (0x0004dcee) eswt_ctrl_canvas_pane

0x61cc,	// (0x0004dcf6) eswt_ctrl_combo_pane

0x61c4,	// (0x0004dcee) eswt_ctrl_default_pane

0x61c4,	// (0x0004dcee) eswt_ctrl_label_pane

0x61d4,	// (0x0004dcfe) eswt_ctrl_wait_pane

0x61dc,	// (0x0004dd06) eswt_shell_pane

0x9fd9,	// (0x00051b03) listscroll_eswt_app_pane

0x61fc,	// (0x0004dd26) popup_eswt_tasktip_window_ParamLimits

0x61fc,	// (0x0004dd26) popup_eswt_tasktip_window

0x329d,	// (0x0004adc7) bg_popup_window_pane_cp18

0x6215,	// (0x0004dd3f) eswt_control_pane_g1_ParamLimits

0x6215,	// (0x0004dd3f) eswt_control_pane_g1

0x6222,	// (0x0004dd4c) eswt_control_pane_g2_ParamLimits

0x6222,	// (0x0004dd4c) eswt_control_pane_g2

0x622f,	// (0x0004dd59) eswt_control_pane_g3_ParamLimits

0x622f,	// (0x0004dd59) eswt_control_pane_g3

0x623c,	// (0x0004dd66) eswt_control_pane_g4_ParamLimits

0x623c,	// (0x0004dd66) eswt_control_pane_g4

0x0003,

0xfbe2,	// (0x0005770c) eswt_control_pane_g_ParamLimits

0xfbe2,	// (0x0005770c) eswt_control_pane_g

0xacb0,	// (0x000527da) bg_button_pane_ParamLimits

0xacb0,	// (0x000527da) bg_button_pane

0xa9d2,	// (0x000524fc) common_borders_pane_copy2_ParamLimits

0xa9d2,	// (0x000524fc) common_borders_pane_copy2

0x6249,	// (0x0004dd73) control_button_pane_g1_ParamLimits

0x6249,	// (0x0004dd73) control_button_pane_g1

0x6255,	// (0x0004dd7f) control_button_pane_g2_ParamLimits

0x6255,	// (0x0004dd7f) control_button_pane_g2

0x6261,	// (0x0004dd8b) control_button_pane_g3_ParamLimits

0x6261,	// (0x0004dd8b) control_button_pane_g3

0x0002,

0xfbeb,	// (0x00057715) control_button_pane_g_ParamLimits

0xfbeb,	// (0x00057715) control_button_pane_g

0x6275,	// (0x0004dd9f) control_button_pane_t1

0x6283,	// (0x0004ddad) control_button_pane_t2

0x0001,

0xfbf2,	// (0x0005771c) control_button_pane_t

0x3229,	// (0x0004ad53) bg_button_pane_g1

0x3231,	// (0x0004ad5b) bg_button_pane_g2

0x3239,	// (0x0004ad63) bg_button_pane_g3

0x3241,	// (0x0004ad6b) bg_button_pane_g4

0x3249,	// (0x0004ad73) bg_button_pane_g5

0x3251,	// (0x0004ad7b) bg_button_pane_g6

0x3259,	// (0x0004ad83) bg_button_pane_g7

0x3261,	// (0x0004ad8b) bg_button_pane_g8

0x3269,	// (0x0004ad93) bg_button_pane_g9

0x0008,

0xf841,	// (0x0005736b) bg_button_pane_g

0x5822,	// (0x0004d34c) common_borders_pane_ParamLimits

0x5822,	// (0x0004d34c) common_borders_pane

0x6215,	// (0x0004dd3f) eswt_control_pane_g1_copy1_ParamLimits

0x6215,	// (0x0004dd3f) eswt_control_pane_g1_copy1

0x6222,	// (0x0004dd4c) eswt_control_pane_g2_copy1_ParamLimits

0x6222,	// (0x0004dd4c) eswt_control_pane_g2_copy1

0x622f,	// (0x0004dd59) eswt_control_pane_g3_copy1_ParamLimits

0x622f,	// (0x0004dd59) eswt_control_pane_g3_copy1

0x623c,	// (0x0004dd66) eswt_control_pane_g4_copy1_ParamLimits

0x623c,	// (0x0004dd66) eswt_control_pane_g4_copy1

0x585d,	// (0x0004d387) bg_eswt_ctrl_canvas_pane_g1

0x5822,	// (0x0004d34c) common_borders_pane_cp2_ParamLimits

0x5822,	// (0x0004d34c) common_borders_pane_cp2

0x5822,	// (0x0004d34c) common_borders_pane_cp3_ParamLimits

0x5822,	// (0x0004d34c) common_borders_pane_cp3

0x6291,	// (0x0004ddbb) separator_horizontal_pane

0x6299,	// (0x0004ddc3) separator_vertical_pane

0x6215,	// (0x0004dd3f) eswt_control_pane_g1_copy2_ParamLimits

0x6215,	// (0x0004dd3f) eswt_control_pane_g1_copy2

0x6222,	// (0x0004dd4c) eswt_control_pane_g2_copy2_ParamLimits

0x6222,	// (0x0004dd4c) eswt_control_pane_g2_copy2

0x622f,	// (0x0004dd59) eswt_control_pane_g3_copy2_ParamLimits

0x622f,	// (0x0004dd59) eswt_control_pane_g3_copy2

0x623c,	// (0x0004dd66) eswt_control_pane_g4_copy2_ParamLimits

0x623c,	// (0x0004dd66) eswt_control_pane_g4_copy2

0x9fd9,	// (0x00051b03) common_borders_pane_cp4

0x62a2,	// (0x0004ddcc) separator_horizontal_pane_g1

0x62ab,	// (0x0004ddd5) separator_horizontal_pane_g2

0x62b4,	// (0x0004ddde) separator_horizontal_pane_g3

0x0002,

0xfbf7,	// (0x00057721) separator_horizontal_pane_g

0x6215,	// (0x0004dd3f) eswt_control_pane_g1_copy3_ParamLimits

0x6215,	// (0x0004dd3f) eswt_control_pane_g1_copy3

0x6222,	// (0x0004dd4c) eswt_control_pane_g2_copy3_ParamLimits

0x6222,	// (0x0004dd4c) eswt_control_pane_g2_copy3

0x622f,	// (0x0004dd59) eswt_control_pane_g3_copy3_ParamLimits

0x622f,	// (0x0004dd59) eswt_control_pane_g3_copy3

0x623c,	// (0x0004dd66) eswt_control_pane_g4_copy3_ParamLimits

0x623c,	// (0x0004dd66) eswt_control_pane_g4_copy3

0x9fd9,	// (0x00051b03) common_borders_pane_cp5

0x62bd,	// (0x0004dde7) separator_vertical_pane_g1

0x62c6,	// (0x0004ddf0) separator_vertical_pane_g2

0x62cf,	// (0x0004ddf9) separator_vertical_pane_g3

0x0002,

0xfbfe,	// (0x00057728) separator_vertical_pane_g

0x6215,	// (0x0004dd3f) eswt_control_pane_g1_copy4_ParamLimits

0x6215,	// (0x0004dd3f) eswt_control_pane_g1_copy4

0x6222,	// (0x0004dd4c) eswt_control_pane_g2_copy4_ParamLimits

0x6222,	// (0x0004dd4c) eswt_control_pane_g2_copy4

0x622f,	// (0x0004dd59) eswt_control_pane_g3_copy4_ParamLimits

0x622f,	// (0x0004dd59) eswt_control_pane_g3_copy4

0x623c,	// (0x0004dd66) eswt_control_pane_g4_copy4_ParamLimits

0x623c,	// (0x0004dd66) eswt_control_pane_g4_copy4

0xd2eb,	// (0x00054e15) eswt_ctrl_combo_button_pane

0xd2f3,	// (0x00054e1d) eswt_ctrl_input_pane

0xd2fb,	// (0x00054e25) popup_choice_list_window_cp70

0xd303,	// (0x00054e2d) eswt_ctrl_input_pane_t1

0x9fd9,	// (0x00051b03) input_focus_pane_cp70

0x5822,	// (0x0004d34c) bg_button_pane_cp70_ParamLimits

0x5822,	// (0x0004d34c) bg_button_pane_cp70

0xd311,	// (0x00054e3b) eswt_ctrl_combo_button_pane_g1

0x6306,	// (0x0004de30) wait_bar_pane_cp70

0x329d,	// (0x0004adc7) bg_popup_window_pane_cp70_ParamLimits

0x329d,	// (0x0004adc7) bg_popup_window_pane_cp70

0x630e,	// (0x0004de38) popup_eswt_tasktip_window_t1

0x6324,	// (0x0004de4e) wait_bar_pane_cp71_ParamLimits

0x6324,	// (0x0004de4e) wait_bar_pane_cp71

0x6330,	// (0x0004de5a) grid_eswt_app_pane

0xe319,	// (0x00055e43) scroll_pane_cp70

0xd319,	// (0x00054e43) cell_eswt_app_pane_ParamLimits

0xd319,	// (0x00054e43) cell_eswt_app_pane

0xd34b,	// (0x00054e75) cell_eswt_app_pane_g1_ParamLimits

0xd34b,	// (0x00054e75) cell_eswt_app_pane_g1

0xd37a,	// (0x00054ea4) cell_eswt_app_pane_g2_ParamLimits

0xd37a,	// (0x00054ea4) cell_eswt_app_pane_g2

0x0001,

0xfc05,	// (0x0005772f) cell_eswt_app_pane_g_ParamLimits

0xfc05,	// (0x0005772f) cell_eswt_app_pane_g

0xd3a3,	// (0x00054ecd) cell_eswt_app_pane_t1_ParamLimits

0xd3a3,	// (0x00054ecd) cell_eswt_app_pane_t1

0x63f5,	// (0x0004df1f) grid_highlight_pane_cp70_ParamLimits

0x63f5,	// (0x0004df1f) grid_highlight_pane_cp70

0x2892,	// (0x0004a3bc) set_content_pane_g1

0xb345,	// (0x00052e6f) status_small_volume_pane

0xbe16,	// (0x00053940) status_small_volume_pane_g1

0xbe1e,	// (0x00053948) volume_small2_pane

0xbe27,	// (0x00053951) volume_small2_pane_g1

0xbe30,	// (0x0005395a) volume_small2_pane_g2

0xbe39,	// (0x00053963) volume_small2_pane_g3

0xbe42,	// (0x0005396c) volume_small2_pane_g4

0xbe4b,	// (0x00053975) volume_small2_pane_g5

0xbe54,	// (0x0005397e) volume_small2_pane_g6

0xbe5d,	// (0x00053987) volume_small2_pane_g7

0xbe66,	// (0x00053990) volume_small2_pane_g8

0xbe6f,	// (0x00053999) volume_small2_pane_g9

0xbe78,	// (0x000539a2) volume_small2_pane_g10

0x0009,

0xfc0a,	// (0x00057734) volume_small2_pane_g

0x5c2c,	// (0x0004d756) fep_vkb_top_text_pane_g1_ParamLimits

0xd271,	// (0x00054d9b) fep_vkb_top_text_pane_t1_ParamLimits

0x5f21,	// (0x0004da4b) popup_preview_fixed_window_g3_ParamLimits

0x5f21,	// (0x0004da4b) popup_preview_fixed_window_g3

0xbb34,	// (0x0005365e) popup_toolbar_trans_pane

0xcc56,	// (0x00054780) aid_height_set_list_ParamLimits

0x4606,	// (0x0004c130) aid_size_parent_ParamLimits

0x2cf3,	// (0x0004a81d) list_highlight_pane_cp2_ParamLimits

0x2892,	// (0x0004a3bc) set_content_pane_g1_ParamLimits

0xce00,	// (0x0005492a) list_single_image_pane_ParamLimits

0xce00,	// (0x0005492a) list_single_image_pane

0xd3d5,	// (0x00054eff) aid_size_cell_image_ParamLimits

0xd3d5,	// (0x00054eff) aid_size_cell_image

0xd3e2,	// (0x00054f0c) grid_single_image_pane_ParamLimits

0xd3e2,	// (0x00054f0c) grid_single_image_pane

0xacbe,	// (0x000527e8) list_single_image_pane_g1_ParamLimits

0xacbe,	// (0x000527e8) list_single_image_pane_g1

0xacca,	// (0x000527f4) list_single_image_pane_g2_ParamLimits

0xacca,	// (0x000527f4) list_single_image_pane_g2

0x0001,

0xfc1f,	// (0x00057749) list_single_image_pane_g_ParamLimits

0xfc1f,	// (0x00057749) list_single_image_pane_g

0x641c,	// (0x0004df46) list_single_image_pane_t1_ParamLimits

0x641c,	// (0x0004df46) list_single_image_pane_t1

0xd3f0,	// (0x00054f1a) cell_image_list_pane_ParamLimits

0xd3f0,	// (0x00054f1a) cell_image_list_pane

0xd406,	// (0x00054f30) cell_image_list_pane_g1

0xd40f,	// (0x00054f39) cell_image_list_pane_g2

0x0001,

0xfc24,	// (0x0005774e) cell_image_list_pane_g

0x645c,	// (0x0004df86) aid_size_cell_tb_trans_pane

0xacb0,	// (0x000527da) bg_tb_trans_pane

0x646e,	// (0x0004df98) grid_tb_trans_pane

0x3229,	// (0x0004ad53) bg_tb_trans_pane_g1

0x3231,	// (0x0004ad5b) bg_tb_trans_pane_g2

0x3239,	// (0x0004ad63) bg_tb_trans_pane_g3

0x3241,	// (0x0004ad6b) bg_tb_trans_pane_g4

0x3249,	// (0x0004ad73) bg_tb_trans_pane_g5

0x3261,	// (0x0004ad8b) bg_tb_trans_pane_g6

0x3269,	// (0x0004ad93) bg_tb_trans_pane_g7

0x3251,	// (0x0004ad7b) bg_tb_trans_pane_g8

0x3259,	// (0x0004ad83) bg_tb_trans_pane_g9

0x0008,

0xfc29,	// (0x00057753) bg_tb_trans_pane_g

0x6482,	// (0x0004dfac) cell_toolbar_trans_pane_ParamLimits

0x6482,	// (0x0004dfac) cell_toolbar_trans_pane

0x585d,	// (0x0004d387) cell_toolbar_trans_pane_g1

0xd040,	// (0x00054b6a) list_form2_midp_pane_t1

0xd04e,	// (0x00054b78) list_form2_midp_pane_t2

0x0001,

0xfad2,	// (0x000575fc) list_form2_midp_pane_t

0x54b1,	// (0x0004cfdb) scroll_pane_cp51_ParamLimits

0x5678,	// (0x0004d1a2) form2_midp_wait_pane_g1

0x5681,	// (0x0004d1ab) form2_midp_wait_pane_g2

0x568a,	// (0x0004d1b4) form2_midp_wait_pane_g3

0x0002,

0xfae7,	// (0x00057611) form2_midp_wait_pane_g

0xa360,	// (0x00051e8a) list_highlight_pane_cp21_ParamLimits

0x56c3,	// (0x0004d1ed) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x56d2,	// (0x0004d1fc) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x47ef,	// (0x0004c319) list_single_2graphic_im_pane_ParamLimits

0x47ef,	// (0x0004c319) list_single_2graphic_im_pane

0xd418,	// (0x00054f42) list_single_2graphic_im_pane_g1_ParamLimits

0xd418,	// (0x00054f42) list_single_2graphic_im_pane_g1

0xd429,	// (0x00054f53) list_single_2graphic_im_pane_g2_ParamLimits

0xd429,	// (0x00054f53) list_single_2graphic_im_pane_g2

0xd435,	// (0x00054f5f) list_single_2graphic_im_pane_g3_ParamLimits

0xd435,	// (0x00054f5f) list_single_2graphic_im_pane_g3

0x0003,

0xfc3c,	// (0x00057766) list_single_2graphic_im_pane_g_ParamLimits

0xfc3c,	// (0x00057766) list_single_2graphic_im_pane_g

0xd449,	// (0x00054f73) list_single_2graphic_im_pane_t1_ParamLimits

0xd449,	// (0x00054f73) list_single_2graphic_im_pane_t1

0x5f2d,	// (0x0004da57) list_single_graphic_2heading_pane_fp_ParamLimits

0x5f2d,	// (0x0004da57) list_single_graphic_2heading_pane_fp

0xf151,	// (0x00056c7b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf151,	// (0x00056c7b) list_single_graphic_2heading_pane_fp_g1

0x5f46,	// (0x0004da70) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5f46,	// (0x0004da70) list_single_graphic_2heading_pane_fp_g2

0x1779,	// (0x000492a3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1779,	// (0x000492a3) list_single_graphic_2heading_pane_fp_g3

0x1785,	// (0x000492af) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1785,	// (0x000492af) list_single_graphic_2heading_pane_fp_g4

0x5f52,	// (0x0004da7c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5f52,	// (0x0004da7c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x00057694) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x00057694) list_single_graphic_2heading_pane_fp_g

0xf278,	// (0x00056da2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf278,	// (0x00056da2) list_single_graphic_2heading_pane_fp_t1

0xf189,	// (0x00056cb3) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf189,	// (0x00056cb3) list_single_graphic_2heading_pane_fp_t2

0xf28e,	// (0x00056db8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf28e,	// (0x00056db8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc45,	// (0x0005776f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc45,	// (0x0005776f) list_single_graphic_2heading_pane_fp_t

0x58ee,	// (0x0004d418) fep_hwr_write_pane_g5_ParamLimits

0x58ee,	// (0x0004d418) fep_hwr_write_pane_g5

0x58fa,	// (0x0004d424) fep_hwr_write_pane_g6_ParamLimits

0x58fa,	// (0x0004d424) fep_hwr_write_pane_g6

0x61dc,	// (0x0004dd06) eswt_shell_pane_ParamLimits

0x329d,	// (0x0004adc7) bg_popup_window_pane_cp18_ParamLimits

0x620d,	// (0x0004dd37) heading_pane_cp70

0x630e,	// (0x0004de38) popup_eswt_tasktip_window_t1_ParamLimits

0xc5e5,	// (0x0005410f) aid_touch_tab_arrow_left

0xc5fb,	// (0x00054125) aid_touch_tab_arrow_right

0xa242,	// (0x00051d6c) title_pane_g3_ParamLimits

0xa242,	// (0x00051d6c) title_pane_g3

0xac6f,	// (0x00052799) set_value_pane_g1

0xbb34,	// (0x0005365e) popup_toolbar_trans_pane_ParamLimits

0x645c,	// (0x0004df86) aid_size_cell_tb_trans_pane_ParamLimits

0xacb0,	// (0x000527da) bg_tb_trans_pane_ParamLimits

0x646e,	// (0x0004df98) grid_tb_trans_pane_ParamLimits

0xa643,	// (0x0005216d) cont_note_pane_ParamLimits

0xa643,	// (0x0005216d) cont_note_pane

0xa9d2,	// (0x000524fc) cont_snote2_single_text_pane_ParamLimits

0xa9d2,	// (0x000524fc) cont_snote2_single_text_pane

0xa9d2,	// (0x000524fc) cont_snote2_single_graphic_pane_ParamLimits

0xa9d2,	// (0x000524fc) cont_snote2_single_graphic_pane

0x388f,	// (0x0004b3b9) cont_note_wait_pane_ParamLimits

0x388f,	// (0x0004b3b9) cont_note_wait_pane

0x388f,	// (0x0004b3b9) cont_note_image_pane_ParamLimits

0x388f,	// (0x0004b3b9) cont_note_image_pane

0x6516,	// (0x0004e040) popup_note2_window_g1_ParamLimits

0x6516,	// (0x0004e040) popup_note2_window_g1

0x6547,	// (0x0004e071) popup_note2_window_t1_ParamLimits

0x6547,	// (0x0004e071) popup_note2_window_t1

0x658c,	// (0x0004e0b6) popup_note2_window_t2_ParamLimits

0x658c,	// (0x0004e0b6) popup_note2_window_t2

0x65d1,	// (0x0004e0fb) popup_note2_window_t3_ParamLimits

0x65d1,	// (0x0004e0fb) popup_note2_window_t3

0x6616,	// (0x0004e140) popup_note2_window_t4_ParamLimits

0x6616,	// (0x0004e140) popup_note2_window_t4

0xa6c7,	// (0x000521f1) popup_note2_window_t5_ParamLimits

0xa6c7,	// (0x000521f1) popup_note2_window_t5

0x0004,

0xfc51,	// (0x0005777b) popup_note2_window_t_ParamLimits

0xfc51,	// (0x0005777b) popup_note2_window_t

0x6645,	// (0x0004e16f) popup_note2_image_window_g1_ParamLimits

0x6645,	// (0x0004e16f) popup_note2_image_window_g1

0x6651,	// (0x0004e17b) popup_note2_image_window_g2_ParamLimits

0x6651,	// (0x0004e17b) popup_note2_image_window_g2

0x0001,

0xfc5c,	// (0x00057786) popup_note2_image_window_g_ParamLimits

0xfc5c,	// (0x00057786) popup_note2_image_window_g

0x6663,	// (0x0004e18d) popup_note2_image_window_t1_ParamLimits

0x6663,	// (0x0004e18d) popup_note2_image_window_t1

0x667b,	// (0x0004e1a5) popup_note2_image_window_t2_ParamLimits

0x667b,	// (0x0004e1a5) popup_note2_image_window_t2

0x6693,	// (0x0004e1bd) popup_note2_image_window_t3_ParamLimits

0x6693,	// (0x0004e1bd) popup_note2_image_window_t3

0x0002,

0xfc61,	// (0x0005778b) popup_note2_image_window_t_ParamLimits

0xfc61,	// (0x0005778b) popup_note2_image_window_t

0x389d,	// (0x0004b3c7) popup_note2_wait_window_g1_ParamLimits

0x389d,	// (0x0004b3c7) popup_note2_wait_window_g1

0x66af,	// (0x0004e1d9) popup_note2_wait_window_g2_ParamLimits

0x66af,	// (0x0004e1d9) popup_note2_wait_window_g2

0x38b5,	// (0x0004b3df) popup_note2_wait_window_g3_ParamLimits

0x38b5,	// (0x0004b3df) popup_note2_wait_window_g3

0x0002,

0xfc68,	// (0x00057792) popup_note2_wait_window_g_ParamLimits

0xfc68,	// (0x00057792) popup_note2_wait_window_g

0x66bb,	// (0x0004e1e5) popup_note2_wait_window_t1_ParamLimits

0x66bb,	// (0x0004e1e5) popup_note2_wait_window_t1

0x66d9,	// (0x0004e203) popup_note2_wait_window_t2_ParamLimits

0x66d9,	// (0x0004e203) popup_note2_wait_window_t2

0x66f7,	// (0x0004e221) popup_note2_wait_window_t3_ParamLimits

0x66f7,	// (0x0004e221) popup_note2_wait_window_t3

0x6709,	// (0x0004e233) popup_note2_wait_window_t4_ParamLimits

0x6709,	// (0x0004e233) popup_note2_wait_window_t4

0x0003,

0xfc6f,	// (0x00057799) popup_note2_wait_window_t_ParamLimits

0xfc6f,	// (0x00057799) popup_note2_wait_window_t

0x671b,	// (0x0004e245) wait_bar2_pane_ParamLimits

0x671b,	// (0x0004e245) wait_bar2_pane

0x6733,	// (0x0004e25d) popup_snote2_single_text_window_g1_ParamLimits

0x6733,	// (0x0004e25d) popup_snote2_single_text_window_g1

0x675b,	// (0x0004e285) popup_snote2_single_text_window_t1_ParamLimits

0x675b,	// (0x0004e285) popup_snote2_single_text_window_t1

0x67a7,	// (0x0004e2d1) popup_snote2_single_text_window_t2_ParamLimits

0x67a7,	// (0x0004e2d1) popup_snote2_single_text_window_t2

0x67f3,	// (0x0004e31d) popup_snote2_single_text_window_t3_ParamLimits

0x67f3,	// (0x0004e31d) popup_snote2_single_text_window_t3

0x6834,	// (0x0004e35e) popup_snote2_single_text_window_t4_ParamLimits

0x6834,	// (0x0004e35e) popup_snote2_single_text_window_t4

0x686a,	// (0x0004e394) popup_snote2_single_text_window_t5_ParamLimits

0x686a,	// (0x0004e394) popup_snote2_single_text_window_t5

0x0004,

0xfc78,	// (0x000577a2) popup_snote2_single_text_window_t_ParamLimits

0xfc78,	// (0x000577a2) popup_snote2_single_text_window_t

0x6895,	// (0x0004e3bf) popup_snote2_single_graphic_window_g1_ParamLimits

0x6895,	// (0x0004e3bf) popup_snote2_single_graphic_window_g1

0x68bd,	// (0x0004e3e7) popup_snote2_single_graphic_window_g2_ParamLimits

0x68bd,	// (0x0004e3e7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc83,	// (0x000577ad) popup_snote2_single_graphic_window_g_ParamLimits

0xfc83,	// (0x000577ad) popup_snote2_single_graphic_window_g

0x68e5,	// (0x0004e40f) popup_snote2_single_graphic_window_t1_ParamLimits

0x68e5,	// (0x0004e40f) popup_snote2_single_graphic_window_t1

0x6931,	// (0x0004e45b) popup_snote2_single_graphic_window_t2_ParamLimits

0x6931,	// (0x0004e45b) popup_snote2_single_graphic_window_t2

0x67f3,	// (0x0004e31d) popup_snote2_single_graphic_window_t3_ParamLimits

0x67f3,	// (0x0004e31d) popup_snote2_single_graphic_window_t3

0x6834,	// (0x0004e35e) popup_snote2_single_graphic_window_t4_ParamLimits

0x6834,	// (0x0004e35e) popup_snote2_single_graphic_window_t4

0x686a,	// (0x0004e394) popup_snote2_single_graphic_window_t5_ParamLimits

0x686a,	// (0x0004e394) popup_snote2_single_graphic_window_t5

0x0004,

0xfc88,	// (0x000577b2) popup_snote2_single_graphic_window_t_ParamLimits

0xfc88,	// (0x000577b2) popup_snote2_single_graphic_window_t

0x5361,	// (0x0004ce8b) clock_nsta_pane_cp2_t1

0x5361,	// (0x0004ce8b) clock_nsta_pane_cp2_t2

0x0001,

0xfaa8,	// (0x000575d2) clock_nsta_pane_cp2_t

0xed01,	// (0x0005682b) form_field_data_wide_pane_g1_ParamLimits

0xacbe,	// (0x000527e8) form_field_data_wide_pane_g2_ParamLimits

0xacbe,	// (0x000527e8) form_field_data_wide_pane_g2

0xacca,	// (0x000527f4) form_field_data_wide_pane_g3_ParamLimits

0xacca,	// (0x000527f4) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00057185) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00057185) form_field_data_wide_pane_g

0xcf49,	// (0x00054a73) grid_touch_3_pane_ParamLimits

0xcf49,	// (0x00054a73) grid_touch_3_pane

0xd47a,	// (0x00054fa4) cell_touch_3_pane_ParamLimits

0xd47a,	// (0x00054fa4) cell_touch_3_pane

0x585d,	// (0x0004d387) cell_touch_3_pane_g1

0x585d,	// (0x0004d387) cell_touch_3_pane_g2

0x0001,

0xfb2d,	// (0x00057657) cell_touch_3_pane_g

0xa71f,	// (0x00052249) cont_query_data_pane

0xa727,	// (0x00052251) cont_query_data_pane_cp1

0x69b0,	// (0x0004e4da) button_value_adjust_pane_cp7

0x69b8,	// (0x0004e4e2) query_popup_pane_cp3

0xe4e1,	// (0x0005600b) bg_popup_sub_pane_cp22_ParamLimits

0x0500,	// (0x0004802a) navi_navi_volume_pane_cp2

0x051b,	// (0x00048045) popup_side_volume_key_window_g2

0x052a,	// (0x00048054) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0005721b) popup_side_volume_key_window_g

0x0547,	// (0x00048071) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00057222) popup_side_volume_key_window_t

0x2764,	// (0x0004a28e) popup_side_volume_key_window_ParamLimits

0x98ec,	// (0x00051416) list_double_graphic_pane_g4_ParamLimits

0x98ec,	// (0x00051416) list_double_graphic_pane_g4

0xbda0,	// (0x000538ca) list_single_2heading_msg_pane_ParamLimits

0xbda0,	// (0x000538ca) list_single_2heading_msg_pane

0xbe81,	// (0x000539ab) list_single_2heading_msg_pane_g1_ParamLimits

0xbe81,	// (0x000539ab) list_single_2heading_msg_pane_g1

0xbe8d,	// (0x000539b7) list_single_2heading_msg_pane_g2_ParamLimits

0xbe8d,	// (0x000539b7) list_single_2heading_msg_pane_g2

0xbea0,	// (0x000539ca) list_single_2heading_msg_pane_g3_ParamLimits

0xbea0,	// (0x000539ca) list_single_2heading_msg_pane_g3

0xbeac,	// (0x000539d6) list_single_2heading_msg_pane_g4_ParamLimits

0xbeac,	// (0x000539d6) list_single_2heading_msg_pane_g4

0x0003,

0xfc93,	// (0x000577bd) list_single_2heading_msg_pane_g_ParamLimits

0xfc93,	// (0x000577bd) list_single_2heading_msg_pane_g

0x9e86,	// (0x000519b0) list_single_2heading_msg_pane_t1_ParamLimits

0x9e86,	// (0x000519b0) list_single_2heading_msg_pane_t1

0x9eae,	// (0x000519d8) list_single_2heading_msg_pane_t2_ParamLimits

0x9eae,	// (0x000519d8) list_single_2heading_msg_pane_t2

0x9f19,	// (0x00051a43) list_single_2heading_msg_pane_t3_ParamLimits

0x9f19,	// (0x00051a43) list_single_2heading_msg_pane_t3

0xf4fc,	// (0x00057026) list_single_2heading_msg_pane_t4_ParamLimits

0xf4fc,	// (0x00057026) list_single_2heading_msg_pane_t4

0x0003,

0xfc9c,	// (0x000577c6) list_single_2heading_msg_pane_t_ParamLimits

0xfc9c,	// (0x000577c6) list_single_2heading_msg_pane_t

0xa24e,	// (0x00051d78) title_pane_g4_ParamLimits

0xa24e,	// (0x00051d78) title_pane_g4

0x014f,	// (0x00047c79) title_pane_stacon_g3_ParamLimits

0x014f,	// (0x00047c79) title_pane_stacon_g3

0x64d9,	// (0x0004e003) list_single_2graphic_im_pane_g4_ParamLimits

0x64d9,	// (0x0004e003) list_single_2graphic_im_pane_g4

0x42ff,	// (0x0004be29) popup_side_volume_key_window_cp

0x4b4c,	// (0x0004c676) main_idle_act2_pane_t1

0x0f99,	// (0x00048ac3) toolbar_button_pane_g10

0xabca,	// (0x000526f4) popup_toolbar_window_cp1

0x5352,	// (0x0004ce7c) clock_nsta_pane_cp_t1

0x5352,	// (0x0004ce7c) clock_nsta_pane_cp_t2

0x0001,

0xfaa3,	// (0x000575cd) clock_nsta_pane_cp_t

0x0500,	// (0x0004802a) navi_navi_volume_pane_cp2_ParamLimits

0x050f,	// (0x00048039) popup_side_volume_key_window_g1_ParamLimits

0x051b,	// (0x00048045) popup_side_volume_key_window_g2_ParamLimits

0x052a,	// (0x00048054) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0005721b) popup_side_volume_key_window_g_ParamLimits

0x1513,	// (0x0004903d) fep_hwr_aid_pane

0xd125,	// (0x00054c4f) bg_fep_hwr_top_pane_g4_ParamLimits

0x58be,	// (0x0004d3e8) fep_hwr_top_pane_g1_ParamLimits

0x58d0,	// (0x0004d3fa) fep_hwr_top_pane_g2_ParamLimits

0x15ce,	// (0x000490f8) fep_hwr_top_pane_g3_ParamLimits

0xfaf8,	// (0x00057622) fep_hwr_top_pane_g_ParamLimits

0x15e3,	// (0x0004910d) fep_hwr_top_text_pane_ParamLimits

0x40b4,	// (0x0004bbde) aid_touch_tab_arrow_arrow_2

0x40bd,	// (0x0004bbe7) aid_touch_tab_arrow_left_2

0x1527,	// (0x00049051) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x155e,	// (0x00049088) fep_hwr_prediction_pane

0x5a26,	// (0x0004d550) fep_vkb_prediction_pane

0xd251,	// (0x00054d7b) fep_vkb_side_pane_g3_ParamLimits

0xd251,	// (0x00054d7b) fep_vkb_side_pane_g3

0x5ad8,	// (0x0004d602) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5fa6,	// (0x0004dad0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5fb3,	// (0x0004dadd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba2,	// (0x000576cc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x69df,	// (0x0004e509) fep_hwr_prediction_pane_g1

0x1955,	// (0x0004947f) fep_hwr_prediction_pane_g2

0x195d,	// (0x00049487) fep_hwr_prediction_pane_g3

0x1965,	// (0x0004948f) fep_hwr_prediction_pane_g4

0x0003,

0xfca5,	// (0x000577cf) fep_hwr_prediction_pane_g

0x69df,	// (0x0004e509) fep_vkb_prediction_pane_g1

0x69e9,	// (0x0004e513) fep_vkb_prediction_pane_g2

0x69f1,	// (0x0004e51b) fep_vkb_prediction_pane_g3

0x69f9,	// (0x0004e523) fep_vkb_prediction_pane_g4

0x0003,

0xfcae,	// (0x000577d8) fep_vkb_prediction_pane_g

0x12a6,	// (0x00048dd0) slider_set_pane_g3

0x12ba,	// (0x00048de4) slider_set_pane_g4

0x12d2,	// (0x00048dfc) slider_set_pane_g5

0x12a6,	// (0x00048dd0) slider_set_pane_g6

0x12e8,	// (0x00048e12) slider_set_pane_g7

0x4785,	// (0x0004c2af) slider_form_pane_g3

0x478e,	// (0x0004c2b8) slider_form_pane_g4

0x4796,	// (0x0004c2c0) slider_form_pane_g5

0x4785,	// (0x0004c2af) slider_form_pane_g6

0xcdbf,	// (0x000548e9) slider_form_pane_g7

0x4e10,	// (0x0004c93a) slider_set_pane_vc_g3

0x4e19,	// (0x0004c943) slider_set_pane_vc_g4

0x4e22,	// (0x0004c94c) slider_set_pane_vc_g5

0x4e10,	// (0x0004c93a) slider_set_pane_vc_g6

0x4e2b,	// (0x0004c955) slider_set_pane_vc_g7

0x5001,	// (0x0004cb2b) slider_form_pane_vc_g1

0x500a,	// (0x0004cb34) slider_form_pane_vc_g2

0x5013,	// (0x0004cb3d) slider_form_pane_vc_g3

0x5001,	// (0x0004cb2b) slider_form_pane_vc_g4

0x501c,	// (0x0004cb46) slider_form_pane_vc_g5

0x0004,

0xfa75,	// (0x0005759f) slider_form_pane_vc_g

0x9fd9,	// (0x00051b03) main_idle_act3_pane

0x6a01,	// (0x0004e52b) ai3_links_pane

0xd4c6,	// (0x00054ff0) popup_ai3_data_window_ParamLimits

0xd4c6,	// (0x00054ff0) popup_ai3_data_window

0x9fd9,	// (0x00051b03) grid_ai3_links_pane

0xd4e4,	// (0x0005500e) cell_ai3_links_pane_ParamLimits

0xd4e4,	// (0x0005500e) cell_ai3_links_pane

0x6a42,	// (0x0004e56c) bg_popup_sub_pane_cp11

0x6a4f,	// (0x0004e579) cell_ai3_links_pane_g1

0x9fd9,	// (0x00051b03) bg_popup_sub_pane_cp12

0x6a74,	// (0x0004e59e) heading_ai3_data_pane

0x6a7c,	// (0x0004e5a6) list_ai3_gene_pane

0x6a88,	// (0x0004e5b2) popup_ai3_data_window_g1

0x6a90,	// (0x0004e5ba) heading_ai3_data_pane_g1

0x6a98,	// (0x0004e5c2) heading_ai3_data_pane_t1

0x6aa6,	// (0x0004e5d0) list_double_ai3_gene_pane_ParamLimits

0x6aa6,	// (0x0004e5d0) list_double_ai3_gene_pane

0x6ab3,	// (0x0004e5dd) list_single_ai3_gene_pane_ParamLimits

0x6ab3,	// (0x0004e5dd) list_single_ai3_gene_pane

0x5822,	// (0x0004d34c) list_highlight_pane_cp7_ParamLimits

0x5822,	// (0x0004d34c) list_highlight_pane_cp7

0x6ac0,	// (0x0004e5ea) list_single_a13_gene_pane_t1_ParamLimits

0x6ac0,	// (0x0004e5ea) list_single_a13_gene_pane_t1

0x6ad7,	// (0x0004e601) list_single_ai3_gene_pane_g1

0x6ae0,	// (0x0004e60a) list_single_ai3_gene_pane_g2

0x0001,

0xfcb7,	// (0x000577e1) list_single_ai3_gene_pane_g

0x6ae8,	// (0x0004e612) list_double_ai3_gene_pane_g1_ParamLimits

0x6ae8,	// (0x0004e612) list_double_ai3_gene_pane_g1

0x6af4,	// (0x0004e61e) list_double_ai3_gene_pane_t1_ParamLimits

0x6af4,	// (0x0004e61e) list_double_ai3_gene_pane_t1

0x6b10,	// (0x0004e63a) list_double_ai3_gene_pane_t2_ParamLimits

0x6b10,	// (0x0004e63a) list_double_ai3_gene_pane_t2

0x6b25,	// (0x0004e64f) list_double_ai3_gene_pane_t3_ParamLimits

0x6b25,	// (0x0004e64f) list_double_ai3_gene_pane_t3

0x0002,

0xfcbc,	// (0x000577e6) list_double_ai3_gene_pane_t_ParamLimits

0xfcbc,	// (0x000577e6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf4f2,	// (0x0005701c) aid_size_min_col_2

0xd4b0,	// (0x00054fda) aid_size_min_msg_ParamLimits

0xd4b0,	// (0x00054fda) aid_size_min_msg

0xd265,	// (0x00054d8f) fep_vkb_top_text_pane_g2_ParamLimits

0xd265,	// (0x00054d8f) fep_vkb_top_text_pane_g2

0x0001,

0xfb28,	// (0x00057652) fep_vkb_top_text_pane_g_ParamLimits

0xfb28,	// (0x00057652) fep_vkb_top_text_pane_g

0x9fd9,	// (0x00051b03) main_hc_apps_shell_pane

0x6b42,	// (0x0004e66c) grid_hc_apps_pane_ParamLimits

0x6b42,	// (0x0004e66c) grid_hc_apps_pane

0x6b54,	// (0x0004e67e) list_hc_apps_pane

0x6b5c,	// (0x0004e686) scroll_pane_cp37_ParamLimits

0x6b5c,	// (0x0004e686) scroll_pane_cp37

0xd4fe,	// (0x00055028) cell_hc_apps_pane_ParamLimits

0xd4fe,	// (0x00055028) cell_hc_apps_pane

0xd5c4,	// (0x000550ee) cell_hc_apps_pane_g1_ParamLimits

0xd5c4,	// (0x000550ee) cell_hc_apps_pane_g1

0x6c48,	// (0x0004e772) cell_hc_apps_pane_g2_ParamLimits

0x6c48,	// (0x0004e772) cell_hc_apps_pane_g2

0x6c64,	// (0x0004e78e) cell_hc_apps_pane_g3_ParamLimits

0x6c64,	// (0x0004e78e) cell_hc_apps_pane_g3

0x0002,

0xfcc3,	// (0x000577ed) cell_hc_apps_pane_g_ParamLimits

0xfcc3,	// (0x000577ed) cell_hc_apps_pane_g

0xd5f0,	// (0x0005511a) cell_hc_apps_pane_t1_ParamLimits

0xd5f0,	// (0x0005511a) cell_hc_apps_pane_t1

0xa643,	// (0x0005216d) grid_highlight_pane_cp10_ParamLimits

0xa643,	// (0x0005216d) grid_highlight_pane_cp10

0xd62e,	// (0x00055158) list_single_hc_apps_pane_ParamLimits

0xd62e,	// (0x00055158) list_single_hc_apps_pane

0xd661,	// (0x0005518b) list_single_hc_apps_pane_g1

0xbec4,	// (0x000539ee) list_single_hc_apps_pane_g2

0x0001,

0xfcca,	// (0x000577f4) list_single_hc_apps_pane_g

0xbedd,	// (0x00053a07) list_single_hc_apps_pane_g2_copy1

0x9f87,	// (0x00051ab1) list_single_hc_apps_pane_t1

0xa360,	// (0x00051e8a) bg_set_opt_pane_cp_ParamLimits

0xf471,	// (0x00056f9b) setting_slider_pane_t1_ParamLimits

0xf48a,	// (0x00056fb4) setting_slider_pane_t2_ParamLimits

0xf4a4,	// (0x00056fce) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00057063) setting_slider_pane_t_ParamLimits

0xf4bc,	// (0x00056fe6) slider_set_pane_ParamLimits

0x0826,	// (0x00048350) control_pane_g5_ParamLimits

0x0826,	// (0x00048350) control_pane_g5

0x45b8,	// (0x0004c0e2) slider_set_pane_g1_ParamLimits

0x129a,	// (0x00048dc4) slider_set_pane_g2_ParamLimits

0x12a6,	// (0x00048dd0) slider_set_pane_g3_ParamLimits

0x12ba,	// (0x00048de4) slider_set_pane_g4_ParamLimits

0x12d2,	// (0x00048dfc) slider_set_pane_g5_ParamLimits

0x12a6,	// (0x00048dd0) slider_set_pane_g6_ParamLimits

0x12e8,	// (0x00048e12) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x00057469) slider_set_pane_g_ParamLimits

0x283d,	// (0x0004a367) navi_icon_text_pane_ParamLimits

0xc5ac,	// (0x000540d6) aid_fill_nsta_2_ParamLimits

0xc5e5,	// (0x0005410f) aid_touch_tab_arrow_left_ParamLimits

0xc5fb,	// (0x00054125) aid_touch_tab_arrow_right_ParamLimits

0xc696,	// (0x000541c0) clock_nsta_pane_ParamLimits

0xcb3d,	// (0x00054667) navi_icon_pane_g1_ParamLimits

0xcb49,	// (0x00054673) navi_text_pane_t1_ParamLimits

0xd022,	// (0x00054b4c) navi_icon_text_pane_g1_ParamLimits

0xd02e,	// (0x00054b58) navi_icon_text_pane_t1_ParamLimits

0xd661,	// (0x0005518b) list_single_hc_apps_pane_g1_ParamLimits

0xbec4,	// (0x000539ee) list_single_hc_apps_pane_g2_ParamLimits

0xfcca,	// (0x000577f4) list_single_hc_apps_pane_g_ParamLimits

0xbedd,	// (0x00053a07) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9f87,	// (0x00051ab1) list_single_hc_apps_pane_t1_ParamLimits

0xa131,	// (0x00051c5b) popup_toolbar2_fixed_window_ParamLimits

0xa131,	// (0x00051c5b) popup_toolbar2_fixed_window

0xbb2a,	// (0x00053654) popup_toolbar2_float_window

0x9fd9,	// (0x00051b03) bg_popup_sub_pane_cp27

0x6d1e,	// (0x0004e848) grid_toolbar2_float_pane

0x9fd9,	// (0x00051b03) bg_popup_sub_pane_cp26

0x6d1e,	// (0x0004e848) grid_toolbar2_fixed_pane

0xd67a,	// (0x000551a4) cell_toolbar2_fixed_pane_ParamLimits

0xd67a,	// (0x000551a4) cell_toolbar2_fixed_pane

0xd694,	// (0x000551be) cell_toolbar2_fixed_pane_g1

0x6d3f,	// (0x0004e869) toolbar2_fixed_button_pane

0x3229,	// (0x0004ad53) toolbar2_fixed_button_pane_g1

0x3231,	// (0x0004ad5b) toolbar2_fixed_button_pane_g2

0x3239,	// (0x0004ad63) toolbar2_fixed_button_pane_g3

0x3241,	// (0x0004ad6b) toolbar2_fixed_button_pane_g4

0x3249,	// (0x0004ad73) toolbar2_fixed_button_pane_g5

0x3251,	// (0x0004ad7b) toolbar2_fixed_button_pane_g6

0x3259,	// (0x0004ad83) toolbar2_fixed_button_pane_g7

0x3261,	// (0x0004ad8b) toolbar2_fixed_button_pane_g8

0x3269,	// (0x0004ad93) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0005736b) toolbar2_fixed_button_pane_g

0x6d47,	// (0x0004e871) cell_toolbar2_float_pane_ParamLimits

0x6d47,	// (0x0004e871) cell_toolbar2_float_pane

0x6d58,	// (0x0004e882) cell_toolbar2_float_pane_g1

0x6d3f,	// (0x0004e869) toolbar2_fixed_button_pane_cp

0xd14d,	// (0x00054c77) fep_vkb_accented_list_pane_ParamLimits

0xd14d,	// (0x00054c77) fep_vkb_accented_list_pane

0x1745,	// (0x0004926f) bg_popup_fep_shadow_pane_g9

0x29cc,	// (0x0004a4f6) bg_popup_fep_shadow_pane_cp3

0xae1d,	// (0x00052947) list_accented_list_pane

0x6d61,	// (0x0004e88b) list_single_accented_list_pane_ParamLimits

0x6d61,	// (0x0004e88b) list_single_accented_list_pane

0x29cc,	// (0x0004a4f6) list_highlight_pane_cp10

0x6d72,	// (0x0004e89c) list_single_accented_list_pane_t1

0xba46,	// (0x00053570) popup_slider_window_ParamLimits

0xba46,	// (0x00053570) popup_slider_window

0x69c0,	// (0x0004e4ea) aid_indentation_list_msg

0xd797,	// (0x000552c1) bg_popup_window_pane_cp19

0x6eae,	// (0x0004e9d8) popup_slider_window_g1

0x6eca,	// (0x0004e9f4) popup_slider_window_g2

0x6ee6,	// (0x0004ea10) popup_slider_window_g3

0x0005,

0xfccf,	// (0x000577f9) popup_slider_window_g

0x6f4c,	// (0x0004ea76) popup_slider_window_t1

0x6fc0,	// (0x0004eaea) small_volume_slider_vertical_pane

0x585d,	// (0x0004d387) small_volume_slider_vertical_pane_g1

0x585d,	// (0x0004d387) small_volume_slider_vertical_pane_g2

0x6fdc,	// (0x0004eb06) small_volume_slider_vertical_pane_g3

0x0002,

0xfce1,	// (0x0005780b) small_volume_slider_vertical_pane_g

0xa091,	// (0x00051bbb) area_side_right_pane_ParamLimits

0xa091,	// (0x00051bbb) area_side_right_pane

0xbef9,	// (0x00053a23) aid_size_side_button_ParamLimits

0xbef9,	// (0x00053a23) aid_size_side_button

0xbf12,	// (0x00053a3c) grid_sctrl_middle_pane_ParamLimits

0xbf12,	// (0x00053a3c) grid_sctrl_middle_pane

0x19d5,	// (0x000494ff) sctrl_sk_bottom_pane

0x19e6,	// (0x00049510) sctrl_sk_top_pane

0x19f8,	// (0x00049522) aid_touch_sctrl_top

0xa643,	// (0x0005216d) bg_sctrl_sk_pane_ParamLimits

0xa643,	// (0x0005216d) bg_sctrl_sk_pane

0x1a05,	// (0x0004952f) sctrl_sk_top_pane_g1

0x1a12,	// (0x0004953c) sctrl_sk_top_pane_t1

0x19f8,	// (0x00049522) aid_touch_sctrl_bottom

0xa643,	// (0x0005216d) bg_sctrl_sk_pane_cp_ParamLimits

0xa643,	// (0x0005216d) bg_sctrl_sk_pane_cp

0x1a2d,	// (0x00049557) sctrl_sk_bottom_pane_g1

0x1a12,	// (0x0004953c) sctrl_sk_bottom_pane_t1

0xbf2c,	// (0x00053a56) cell_sctrl_middle_pane_ParamLimits

0xbf2c,	// (0x00053a56) cell_sctrl_middle_pane

0xbf3f,	// (0x00053a69) aid_touch_sctrl_middle_ParamLimits

0xbf3f,	// (0x00053a69) aid_touch_sctrl_middle

0xbf4c,	// (0x00053a76) bg_sctrl_middle_pane_ParamLimits

0xbf4c,	// (0x00053a76) bg_sctrl_middle_pane

0x7067,	// (0x0004eb91) cell_sctrl_middle_pane_g1_ParamLimits

0x7067,	// (0x0004eb91) cell_sctrl_middle_pane_g1

0xbf5a,	// (0x00053a84) cell_sctrl_middle_pane_g2_ParamLimits

0xbf5a,	// (0x00053a84) cell_sctrl_middle_pane_g2

0x0001,

0xfced,	// (0x00057817) cell_sctrl_middle_pane_g_ParamLimits

0xfced,	// (0x00057817) cell_sctrl_middle_pane_g

0x3229,	// (0x0004ad53) bg_sctrl_middle_pane_g1

0x3231,	// (0x0004ad5b) bg_sctrl_middle_pane_g2

0x3239,	// (0x0004ad63) bg_sctrl_middle_pane_g3

0x3241,	// (0x0004ad6b) bg_sctrl_middle_pane_g4

0x3249,	// (0x0004ad73) bg_sctrl_middle_pane_g5

0x3251,	// (0x0004ad7b) bg_sctrl_middle_pane_g6

0x3259,	// (0x0004ad83) bg_sctrl_middle_pane_g7

0x3261,	// (0x0004ad8b) bg_sctrl_middle_pane_g8

0x0007,

0xfcf2,	// (0x0005781c) bg_sctrl_middle_pane_g

0x3269,	// (0x0004ad93) bg_sctrl_middle_pane_g8_copy1

0x3229,	// (0x0004ad53) bg_sctrl_sk_pane_g1

0x3231,	// (0x0004ad5b) bg_sctrl_sk_pane_g2

0x3239,	// (0x0004ad63) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0005736b) bg_sctrl_sk_pane_g

0xab90,	// (0x000526ba) aid_size_touch_scroll_bar

0x3241,	// (0x0004ad6b) bg_sctrl_sk_pane_g4

0x3249,	// (0x0004ad73) bg_sctrl_sk_pane_g5

0x3251,	// (0x0004ad7b) bg_sctrl_sk_pane_g6

0x3259,	// (0x0004ad83) bg_sctrl_sk_pane_g7

0x3261,	// (0x0004ad8b) bg_sctrl_sk_pane_g8

0x3269,	// (0x0004ad93) bg_sctrl_sk_pane_g9

0x09ce,	// (0x000484f8) popup_fep_china_hwr2_fs_candidate_window

0xb4f8,	// (0x00053022) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb4f8,	// (0x00053022) popup_fep_china_hwr2_fs_control_window

0x5ad8,	// (0x0004d602) sctrl_sk_top_pane_g2

0x0001,

0xfce8,	// (0x00057812) sctrl_sk_top_pane_g

0xd84f,	// (0x00055379) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd84f,	// (0x00055379) aid_fep_china_hwr2_fs_cell

0xd865,	// (0x0005538f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd865,	// (0x0005538f) bg_popup_fep_shadow_pane_cp4

0xd87c,	// (0x000553a6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd87c,	// (0x000553a6) bg_popup_fep_shadow_pane_cp5

0xd88e,	// (0x000553b8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd88e,	// (0x000553b8) popup_fep_china_hwr2_fs_control_bar_grid

0xd8a2,	// (0x000553cc) popup_fep_china_hwr2_fs_control_funtion_grid

0x703b,	// (0x0004eb65) aid_fep_china_hwr2_fs_candi_cell

0x9fd9,	// (0x00051b03) bg_popup_fep_shadow_pane_cp6

0x7045,	// (0x0004eb6f) popup_fep_china_hwr2_fs_candidate_grid

0xd8aa,	// (0x000553d4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8aa,	// (0x000553d4) cell_fep_china_hwr2_fs_funtion_grid

0x585d,	// (0x0004d387) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7067,	// (0x0004eb91) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7067,	// (0x0004eb91) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7075,	// (0x0004eb9f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7075,	// (0x0004eb9f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd03,	// (0x0005782d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd03,	// (0x0005782d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8c2,	// (0x000553ec) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8c2,	// (0x000553ec) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8d7,	// (0x00055401) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8d7,	// (0x00055401) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd08,	// (0x00057832) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd08,	// (0x00057832) cell_fep_china_hwr2_fs_funtion_grid_t

0x70bc,	// (0x0004ebe6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x70c4,	// (0x0004ebee) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x70cc,	// (0x0004ebf6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0d,	// (0x00057837) popup_fep_china_hwr2_fs_control_bar_grid_g

0x70d4,	// (0x0004ebfe) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x70d4,	// (0x0004ebfe) cell_fep_china_hwr2_fs_candidate_grid

0x70f3,	// (0x0004ec1d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x70fb,	// (0x0004ec25) popup_fep_china_hwr2_fs_candidate_grid_g21

0x585d,	// (0x0004d387) cell_fep_china_hwr2_fs_candidate_grid_g1

0x585d,	// (0x0004d387) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2d,	// (0x00057657) cell_fep_china_hwr2_fs_candidate_grid_g

0x7103,	// (0x0004ec2d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2e11,	// (0x0004a93b) clock_nsta_pane_cp_24_ParamLimits

0x2e11,	// (0x0004a93b) clock_nsta_pane_cp_24

0x2e91,	// (0x0004a9bb) indicator_nsta_pane_cp_24_ParamLimits

0x2e91,	// (0x0004a9bb) indicator_nsta_pane_cp_24

0x3f12,	// (0x0004ba3c) heading_pane_g1

0x0001,

0xf8a6,	// (0x000573d0) heading_pane_g

0x4993,	// (0x0004c4bd) grid_sct_catagory_button_pane

0x49c5,	// (0x0004c4ef) scroll_pane_cp5_ParamLimits

0x54bd,	// (0x0004cfe7) button_value_adjust_pane_cp5_ParamLimits

0x54bd,	// (0x0004cfe7) button_value_adjust_pane_cp5

0x55a2,	// (0x0004d0cc) form2_midp_time_pane_ParamLimits

0x7111,	// (0x0004ec3b) cell_sct_catagory_button_pane_ParamLimits

0x7111,	// (0x0004ec3b) cell_sct_catagory_button_pane

0x5822,	// (0x0004d34c) bg_button_pane_cp01_ParamLimits

0x5822,	// (0x0004d34c) bg_button_pane_cp01

0x585d,	// (0x0004d387) cell_sct_catagory_button_pane_g1

0xbac7,	// (0x000535f1) popup_tb_extension_window

0xd8f3,	// (0x0005541d) aid_size_cell_ext_ParamLimits

0xd8f3,	// (0x0005541d) aid_size_cell_ext

0xa9d2,	// (0x000524fc) bg_tb_trans_pane_cp1_ParamLimits

0xa9d2,	// (0x000524fc) bg_tb_trans_pane_cp1

0xd919,	// (0x00055443) grid_tb_ext_pane_ParamLimits

0xd919,	// (0x00055443) grid_tb_ext_pane

0xd956,	// (0x00055480) cell_tb_ext_pane_ParamLimits

0xd956,	// (0x00055480) cell_tb_ext_pane

0xd97e,	// (0x000554a8) cell_tb_ext_pane_g1_ParamLimits

0xd97e,	// (0x000554a8) cell_tb_ext_pane_g1

0x71a5,	// (0x0004eccf) cell_tb_ext_pane_t1

0xa643,	// (0x0005216d) list_highlight_pane_cp11_ParamLimits

0xa643,	// (0x0005216d) list_highlight_pane_cp11

0xa146,	// (0x00051c70) popup_uni_indicator_window_ParamLimits

0xa146,	// (0x00051c70) popup_uni_indicator_window

0xacb0,	// (0x000527da) bg_popup_sub_pane_cp14

0x71c0,	// (0x0004ecea) list_uniindi_pane

0x71cc,	// (0x0004ecf6) uniindi_top_pane

0xa643,	// (0x0005216d) bg_uniindi_top_pane

0x71ed,	// (0x0004ed17) uniindi_top_pane_g1

0x7203,	// (0x0004ed2d) uniindi_top_pane_g2

0x0003,

0xfd14,	// (0x0005783e) uniindi_top_pane_g

0x722d,	// (0x0004ed57) uniindi_top_pane_t1

0x7259,	// (0x0004ed83) list_single_uniindi_pane_ParamLimits

0x7259,	// (0x0004ed83) list_single_uniindi_pane

0x585d,	// (0x0004d387) bg_uniindi_top_pane_g1

0x726c,	// (0x0004ed96) list_single_uniindi_pane_g1

0x727f,	// (0x0004eda9) list_single_uniindi_pane_t1

0x9fd9,	// (0x00051b03) control_bg_pane

0x72a4,	// (0x0004edce) bg_sctrl_sk_pane_cp1

0x72ad,	// (0x0004edd7) bg_sctrl_sk_pane_cp2

0x72b6,	// (0x0004ede0) control_bg_pane_g1

0x72bf,	// (0x0004ede9) control_bg_pane_g2

0x0001,

0xfd1d,	// (0x00057847) control_bg_pane_g

0x52f5,	// (0x0004ce1f) cell_indicator_nsta_pane_g1_ParamLimits

0xcf86,	// (0x00054ab0) cell_indicator_nsta_pane_g2_ParamLimits

0xfa91,	// (0x000575bb) cell_indicator_nsta_pane_g_ParamLimits

0xf127,	// (0x00056c51) form2_midp_time_pane_t1_ParamLimits

0x1505,	// (0x0004902f) main_idle_act4_pane_ParamLimits

0x1505,	// (0x0004902f) main_idle_act4_pane

0xbac7,	// (0x000535f1) popup_tb_extension_window_ParamLimits

0xd93e,	// (0x00055468) tb_ext_find_pane_ParamLimits

0xd93e,	// (0x00055468) tb_ext_find_pane

0x72c8,	// (0x0004edf2) ai_gene_pane_1_cp1

0x2b16,	// (0x0004a640) ai_gene_pane_2_cp1

0x72d0,	// (0x0004edfa) list_single_idle_plugin_calendar_pane

0x72d9,	// (0x0004ee03) list_single_idle_plugin_notification_pane

0x72e2,	// (0x0004ee0c) list_single_idle_plugin_player_pane

0xd99b,	// (0x000554c5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd99b,	// (0x000554c5) list_single_idle_plugin_shortcut_pane

0xd9c3,	// (0x000554ed) main_idle_act4_pane_t1

0xd9db,	// (0x00055505) main_idle_act4_pane_t2

0x0001,

0xfd22,	// (0x0005784c) main_idle_act4_pane_t

0xd9f3,	// (0x0005551d) middle_sk_idle_act4_pane_ParamLimits

0xd9f3,	// (0x0005551d) middle_sk_idle_act4_pane

0xda0f,	// (0x00055539) popup_clock_digital_analogue_window_cp2

0xda36,	// (0x00055560) shortcut_wheel_idle_act4_pane_ParamLimits

0xda36,	// (0x00055560) shortcut_wheel_idle_act4_pane

0x585d,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g1

0x585d,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g2

0x585d,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g3

0x585d,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g4

0x585d,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g5

0x7375,	// (0x0004ee9f) shortcut_wheel_idle_act4_pane_g6

0x737d,	// (0x0004eea7) shortcut_wheel_idle_act4_pane_g7

0x7385,	// (0x0004eeaf) shortcut_wheel_idle_act4_pane_g8

0x738d,	// (0x0004eeb7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd27,	// (0x00057851) shortcut_wheel_idle_act4_pane_g

0xd125,	// (0x00054c4f) middle_sk_idle_act4_pane_g1_ParamLimits

0xd125,	// (0x00054c4f) middle_sk_idle_act4_pane_g1

0xdab3,	// (0x000555dd) middle_sk_idle_act4_pane_g2_ParamLimits

0xdab3,	// (0x000555dd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4a,	// (0x00057874) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4a,	// (0x00057874) middle_sk_idle_act4_pane_g

0xdacb,	// (0x000555f5) middle_sk_idle_act4_pane_t1_ParamLimits

0xdacb,	// (0x000555f5) middle_sk_idle_act4_pane_t1

0xdafa,	// (0x00055624) grid_ai_shortcut_pane_ParamLimits

0xdafa,	// (0x00055624) grid_ai_shortcut_pane

0xdb17,	// (0x00055641) list_highlight_pane_cp16_ParamLimits

0xdb17,	// (0x00055641) list_highlight_pane_cp16

0xdb24,	// (0x0005564e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb24,	// (0x0005564e) list_single_idle_plugin_shortcut_pane_g1

0xdb30,	// (0x0005565a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb30,	// (0x0005565a) list_single_idle_plugin_shortcut_pane_g2

0xdb4e,	// (0x00055678) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb4e,	// (0x00055678) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4f,	// (0x00057879) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4f,	// (0x00057879) list_single_idle_plugin_shortcut_pane_g

0xdb63,	// (0x0005568d) cell_ai_shortcut_pane_ParamLimits

0xdb63,	// (0x0005568d) cell_ai_shortcut_pane

0xdb79,	// (0x000556a3) cell_ai_shortcut_pane_g1_ParamLimits

0xdb79,	// (0x000556a3) cell_ai_shortcut_pane_g1

0x72c8,	// (0x0004edf2) ai_gene_pane_1_cp2

0x74be,	// (0x0004efe8) ai_gene_pane_2_cp2

0x74c6,	// (0x0004eff0) list_highlight_pane_cp15

0x74cf,	// (0x0004eff9) list_single_idle_plugin_calendar_pane_g1

0x74c6,	// (0x0004eff0) list_highlight_pane_cp17

0x74d7,	// (0x0004f001) list_single_idle_plugin_calendar_pane_g1_copy1

0x74df,	// (0x0004f009) list_single_idle_plugin_player_pane_g1

0x4bfa,	// (0x0004c724) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd56,	// (0x00057880) list_single_idle_plugin_player_pane_g

0x74e7,	// (0x0004f011) list_single_idle_plugin_player_pane_t1

0x74f5,	// (0x0004f01f) list_single_idle_plugin_player_pane_t2

0x7503,	// (0x0004f02d) list_single_idle_plugin_player_pane_t3

0x7511,	// (0x0004f03b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5b,	// (0x00057885) list_single_idle_plugin_player_pane_t

0x751f,	// (0x0004f049) wait_bar_pane_cp15

0x7527,	// (0x0004f051) grid_ai_notification_pane

0x4bfa,	// (0x0004c724) list_single_idle_plugin_notification_pane_g1

0xdb9b,	// (0x000556c5) cell_ai_notification_pane_ParamLimits

0xdb9b,	// (0x000556c5) cell_ai_notification_pane

0x753d,	// (0x0004f067) cell_ai_notification_pane_g1

0x7545,	// (0x0004f06f) cell_ai_notification_pane_t1

0xdba8,	// (0x000556d2) tb_ext_find_button_pane

0xdbb0,	// (0x000556da) tb_ext_find_pane_g1

0xdbb8,	// (0x000556e2) tb_ext_find_pane_t1

0xe481,	// (0x00055fab) tb_ext_find_button_pane_g1

0x7571,	// (0x0004f09b) tb_ext_find_button_pane_g2

0x0001,

0xfd64,	// (0x0005788e) tb_ext_find_button_pane_g

0xd9c3,	// (0x000554ed) main_idle_act4_pane_t1_ParamLimits

0xd9db,	// (0x00055505) main_idle_act4_pane_t2_ParamLimits

0xfd22,	// (0x0005784c) main_idle_act4_pane_t_ParamLimits

0xda0f,	// (0x00055539) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda26,	// (0x00055550) sat_plugin_idle_act4_pane_ParamLimits

0xda26,	// (0x00055550) sat_plugin_idle_act4_pane

0xdbc6,	// (0x000556f0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdbc6,	// (0x000556f0) sat_plugin_idle_act4_pane_t1

0xdbde,	// (0x00055708) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdbde,	// (0x00055708) sat_plugin_idle_act4_pane_t2

0xdbf6,	// (0x00055720) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdbf6,	// (0x00055720) sat_plugin_idle_act4_pane_t3

0xdc0e,	// (0x00055738) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc0e,	// (0x00055738) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd69,	// (0x00057893) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd69,	// (0x00057893) sat_plugin_idle_act4_pane_t

0xf413,	// (0x00056f3d) popup_battery_window_ParamLimits

0xf413,	// (0x00056f3d) popup_battery_window

0xa643,	// (0x0005216d) bg_popup_sub_pane_cp25_ParamLimits

0xa643,	// (0x0005216d) bg_popup_sub_pane_cp25

0x75c6,	// (0x0004f0f0) popup_battery_window_g1_ParamLimits

0x75c6,	// (0x0004f0f0) popup_battery_window_g1

0x75d2,	// (0x0004f0fc) popup_battery_window_t1_ParamLimits

0x75d2,	// (0x0004f0fc) popup_battery_window_t1

0x75e4,	// (0x0004f10e) popup_battery_window_t2_ParamLimits

0x75e4,	// (0x0004f10e) popup_battery_window_t2

0x0001,

0xfd72,	// (0x0005789c) popup_battery_window_t_ParamLimits

0xfd72,	// (0x0005789c) popup_battery_window_t

0xb275,	// (0x00052d9f) midp_canvas_pane_ParamLimits

0xb2d1,	// (0x00052dfb) midp_keypad_pane_ParamLimits

0xb2d1,	// (0x00052dfb) midp_keypad_pane

0x2cf3,	// (0x0004a81d) main_midp_pane_ParamLimits

0x5370,	// (0x0004ce9a) signal_pane_g2_cp_ParamLimits

0xdc26,	// (0x00055750) aid_size_cell_midp_keypad_ParamLimits

0xdc26,	// (0x00055750) aid_size_cell_midp_keypad

0xdc44,	// (0x0005576e) midp_keyp_game_grid_pane_ParamLimits

0xdc44,	// (0x0005576e) midp_keyp_game_grid_pane

0xdc6b,	// (0x00055795) midp_keyp_rocker_pane_ParamLimits

0xdc6b,	// (0x00055795) midp_keyp_rocker_pane

0xdcba,	// (0x000557e4) midp_keyp_sk_left_pane_ParamLimits

0xdcba,	// (0x000557e4) midp_keyp_sk_left_pane

0xdd10,	// (0x0005583a) midp_keyp_sk_right_pane_ParamLimits

0xdd10,	// (0x0005583a) midp_keyp_sk_right_pane

0x9fd9,	// (0x00051b03) bg_button_pane_cp03

0xdd66,	// (0x00055890) midp_keyp_sk_left_pane_g1

0x9fd9,	// (0x00051b03) bg_button_pane_cp04

0xdd66,	// (0x00055890) midp_keyp_sk_right_pane_g1

0x585d,	// (0x0004d387) midp_keyp_rocker_pane_g1

0xdd6e,	// (0x00055898) keyp_game_cell_pane_ParamLimits

0xdd6e,	// (0x00055898) keyp_game_cell_pane

0x9fd9,	// (0x00051b03) bg_button_pane_cp02

0xdd94,	// (0x000558be) keyp_game_cell_pane_g1

0xa0dd,	// (0x00051c07) popup_fep_vkb2_window_ParamLimits

0xa0dd,	// (0x00051c07) popup_fep_vkb2_window

0xbf66,	// (0x00053a90) aid_size_cell_vkb2_ParamLimits

0xbf66,	// (0x00053a90) aid_size_cell_vkb2

0xbf92,	// (0x00053abc) popup_fep_vkb2_window_g1_ParamLimits

0xbf92,	// (0x00053abc) popup_fep_vkb2_window_g1

0xbfe2,	// (0x00053b0c) vkb2_area_bottom_pane_ParamLimits

0xbfe2,	// (0x00053b0c) vkb2_area_bottom_pane

0xc03e,	// (0x00053b68) vkb2_area_keypad_pane_ParamLimits

0xc03e,	// (0x00053b68) vkb2_area_keypad_pane

0xc08c,	// (0x00053bb6) vkb2_area_top_pane_ParamLimits

0xc08c,	// (0x00053bb6) vkb2_area_top_pane

0xc119,	// (0x00053c43) vkb2_top_entry_pane_ParamLimits

0xc119,	// (0x00053c43) vkb2_top_entry_pane

0xc146,	// (0x00053c70) vkb2_top_grid_left_pane_ParamLimits

0xc146,	// (0x00053c70) vkb2_top_grid_left_pane

0xc167,	// (0x00053c91) vkb2_top_grid_right_pane_ParamLimits

0xc167,	// (0x00053c91) vkb2_top_grid_right_pane

0x1c99,	// (0x000497c3) vkb2_cell_keypad_pane_ParamLimits

0x1c99,	// (0x000497c3) vkb2_cell_keypad_pane

0xc1af,	// (0x00053cd9) vkb2_area_bottom_grid_pane_ParamLimits

0xc1af,	// (0x00053cd9) vkb2_area_bottom_grid_pane

0xc1d9,	// (0x00053d03) vkb2_area_bottom_pane_g1_ParamLimits

0xc1d9,	// (0x00053d03) vkb2_area_bottom_pane_g1

0xc1ff,	// (0x00053d29) vkb2_area_bottom_pane_g2_ParamLimits

0xc1ff,	// (0x00053d29) vkb2_area_bottom_pane_g2

0xc230,	// (0x00053d5a) vkb2_area_bottom_pane_g3_ParamLimits

0xc230,	// (0x00053d5a) vkb2_area_bottom_pane_g3

0x0002,

0xfd77,	// (0x000578a1) vkb2_area_bottom_pane_g_ParamLimits

0xfd77,	// (0x000578a1) vkb2_area_bottom_pane_g

0x1e43,	// (0x0004996d) vkb2_top_cell_left_pane_ParamLimits

0x1e43,	// (0x0004996d) vkb2_top_cell_left_pane

0xdd9d,	// (0x000558c7) vkb2_top_entry_pane_g1_ParamLimits

0xdd9d,	// (0x000558c7) vkb2_top_entry_pane_g1

0xddab,	// (0x000558d5) vkb2_top_entry_pane_t1_ParamLimits

0xddab,	// (0x000558d5) vkb2_top_entry_pane_t1

0x778e,	// (0x0004f2b8) vkb2_top_entry_pane_t2_ParamLimits

0x778e,	// (0x0004f2b8) vkb2_top_entry_pane_t2

0x77c0,	// (0x0004f2ea) vkb2_top_entry_pane_t3_ParamLimits

0x77c0,	// (0x0004f2ea) vkb2_top_entry_pane_t3

0x0002,

0xfd7e,	// (0x000578a8) vkb2_top_entry_pane_t_ParamLimits

0xfd7e,	// (0x000578a8) vkb2_top_entry_pane_t

0xc29a,	// (0x00053dc4) vkb2_top_grid_right_pane_g1_ParamLimits

0xc29a,	// (0x00053dc4) vkb2_top_grid_right_pane_g1

0x1ea6,	// (0x000499d0) vkb2_top_grid_right_pane_g2_ParamLimits

0x1ea6,	// (0x000499d0) vkb2_top_grid_right_pane_g2

0x1ebe,	// (0x000499e8) vkb2_top_grid_right_pane_g3_ParamLimits

0x1ebe,	// (0x000499e8) vkb2_top_grid_right_pane_g3

0xc2b0,	// (0x00053dda) vkb2_top_grid_right_pane_g4_ParamLimits

0xc2b0,	// (0x00053dda) vkb2_top_grid_right_pane_g4

0x0003,

0xfd85,	// (0x000578af) vkb2_top_grid_right_pane_g_ParamLimits

0xfd85,	// (0x000578af) vkb2_top_grid_right_pane_g

0x1eec,	// (0x00049a16) vkb2_top_cell_left_pane_g1

0x1f03,	// (0x00049a2d) vkb2_cell_keypad_pane_g1_ParamLimits

0x1f03,	// (0x00049a2d) vkb2_cell_keypad_pane_g1

0x77e4,	// (0x0004f30e) vkb2_cell_keypad_pane_t1_ParamLimits

0x77e4,	// (0x0004f30e) vkb2_cell_keypad_pane_t1

0x1f11,	// (0x00049a3b) vkb2_cell_bottom_grid_pane_ParamLimits

0x1f11,	// (0x00049a3b) vkb2_cell_bottom_grid_pane

0x1f4a,	// (0x00049a74) vkb2_cell_bottom_grid_pane_g1

0xda57,	// (0x00055581) aid_call2_pane_cp02

0xda5f,	// (0x00055589) aid_call_pane_cp02

0xda67,	// (0x00055591) clock_digital_number_pane_cp10

0xda6f,	// (0x00055599) clock_digital_number_pane_cp11

0xda77,	// (0x000555a1) clock_digital_number_pane_cp12

0xda7f,	// (0x000555a9) clock_digital_number_pane_cp13

0xda87,	// (0x000555b1) clock_digital_separator_pane_cp10

0xe481,	// (0x00055fab) popup_clock_digital_analogue_window_cp2_g1

0xe481,	// (0x00055fab) popup_clock_digital_analogue_window_cp2_g2

0xda8f,	// (0x000555b9) popup_clock_digital_analogue_window_cp2_g3

0xe481,	// (0x00055fab) popup_clock_digital_analogue_window_cp2_g4

0xda8f,	// (0x000555b9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3a,	// (0x00057864) popup_clock_digital_analogue_window_cp2_g

0xda97,	// (0x000555c1) popup_clock_digital_analogue_window_cp2_t1

0xdaa5,	// (0x000555cf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd45,	// (0x0005786f) popup_clock_digital_analogue_window_cp2_t

0x585d,	// (0x0004d387) clock_digital_number_pane_cp10_g1

0x585d,	// (0x0004d387) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2d,	// (0x00057657) clock_digital_number_pane_cp10_g

0x585d,	// (0x0004d387) clock_digital_separator_pane_cp10_g1

0x585d,	// (0x0004d387) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2d,	// (0x00057657) clock_digital_separator_pane_cp10_g

0x720f,	// (0x0004ed39) uniindi_top_pane_g3

0x7220,	// (0x0004ed4a) uniindi_top_pane_g4

0x1d24,	// (0x0004984e) vkb2_row_keypad_pane_ParamLimits

0x1d24,	// (0x0004984e) vkb2_row_keypad_pane

0x1f66,	// (0x00049a90) vkb2_cell_t_keypad_pane_ParamLimits

0x1f66,	// (0x00049a90) vkb2_cell_t_keypad_pane

0x1f76,	// (0x00049aa0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f76,	// (0x00049aa0) vkb2_cell_t_keypad_pane_cp08

0x1f8b,	// (0x00049ab5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f8b,	// (0x00049ab5) vkb2_cell_t_keypad_pane_cp09

0x1f9f,	// (0x00049ac9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f9f,	// (0x00049ac9) vkb2_cell_t_keypad_pane_cp01

0x1fb0,	// (0x00049ada) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1fb0,	// (0x00049ada) vkb2_cell_t_keypad_pane_cp02

0x1fc1,	// (0x00049aeb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1fc1,	// (0x00049aeb) vkb2_cell_t_keypad_pane_cp03

0x1fd2,	// (0x00049afc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1fd2,	// (0x00049afc) vkb2_cell_t_keypad_pane_cp04

0x1fe3,	// (0x00049b0d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1fe3,	// (0x00049b0d) vkb2_cell_t_keypad_pane_cp05

0x1ff4,	// (0x00049b1e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1ff4,	// (0x00049b1e) vkb2_cell_t_keypad_pane_cp06

0x2007,	// (0x00049b31) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2007,	// (0x00049b31) vkb2_cell_t_keypad_pane_cp07

0x201c,	// (0x00049b46) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x201c,	// (0x00049b46) vkb2_cell_t_keypad_pane_cp10

0x5ad8,	// (0x0004d602) vkb2_cell_t_keypad_pane_g1

0x77fb,	// (0x0004f325) vkb2_cell_t_keypad_pane_t1

0x9fd9,	// (0x00051b03) popup_grid_graphic2_window

0xdde4,	// (0x0005590e) aid_size_cell_graphic2_ParamLimits

0xdde4,	// (0x0005590e) aid_size_cell_graphic2

0xde22,	// (0x0005594c) bg_popup_window_pane_cp21_ParamLimits

0xde22,	// (0x0005594c) bg_popup_window_pane_cp21

0xde30,	// (0x0005595a) graphic2_pages_pane_ParamLimits

0xde30,	// (0x0005595a) graphic2_pages_pane

0xde88,	// (0x000559b2) grid_graphic2_control_pane_ParamLimits

0xde88,	// (0x000559b2) grid_graphic2_control_pane

0xded0,	// (0x000559fa) grid_graphic2_pane_ParamLimits

0xded0,	// (0x000559fa) grid_graphic2_pane

0xdf5b,	// (0x00055a85) cell_graphic2_pane

0x9fd9,	// (0x00051b03) main_comp_mode_pane

0x6a7c,	// (0x0004e5a6) list_ai3_gene_pane_ParamLimits

0xd797,	// (0x000552c1) bg_popup_window_pane_cp19_ParamLimits

0x6e4e,	// (0x0004e978) bg_touch_area_indi_pane_ParamLimits

0x6e4e,	// (0x0004e978) bg_touch_area_indi_pane

0x6e64,	// (0x0004e98e) bg_touch_area_indi_pane_cp01_ParamLimits

0x6e64,	// (0x0004e98e) bg_touch_area_indi_pane_cp01

0x6e7a,	// (0x0004e9a4) bg_touch_area_indi_pane_cp02_ParamLimits

0x6e7a,	// (0x0004e9a4) bg_touch_area_indi_pane_cp02

0x6e94,	// (0x0004e9be) bg_touch_area_indi_pane_cp03_ParamLimits

0x6e94,	// (0x0004e9be) bg_touch_area_indi_pane_cp03

0x6eae,	// (0x0004e9d8) popup_slider_window_g1_ParamLimits

0x6eca,	// (0x0004e9f4) popup_slider_window_g2_ParamLimits

0x6ee6,	// (0x0004ea10) popup_slider_window_g3_ParamLimits

0xfccf,	// (0x000577f9) popup_slider_window_g_ParamLimits

0x6f4c,	// (0x0004ea76) popup_slider_window_t1_ParamLimits

0x6fc0,	// (0x0004eaea) small_volume_slider_vertical_pane_ParamLimits

0xdf5b,	// (0x00055a85) cell_graphic2_pane_ParamLimits

0xdfbd,	// (0x00055ae7) bg_button_pane_cp10_ParamLimits

0xdfbd,	// (0x00055ae7) bg_button_pane_cp10

0xdfd0,	// (0x00055afa) bg_button_pane_cp11_ParamLimits

0xdfd0,	// (0x00055afa) bg_button_pane_cp11

0xdfe3,	// (0x00055b0d) graphic2_pages_pane_g1_ParamLimits

0xdfe3,	// (0x00055b0d) graphic2_pages_pane_g1

0xdffe,	// (0x00055b28) graphic2_pages_pane_g2_ParamLimits

0xdffe,	// (0x00055b28) graphic2_pages_pane_g2

0x0001,

0xfd93,	// (0x000578bd) graphic2_pages_pane_g_ParamLimits

0xfd93,	// (0x000578bd) graphic2_pages_pane_g

0xe016,	// (0x00055b40) graphic2_pages_pane_t1_ParamLimits

0xe016,	// (0x00055b40) graphic2_pages_pane_t1

0xe02e,	// (0x00055b58) cell_graphic2_control_pane_ParamLimits

0xe02e,	// (0x00055b58) cell_graphic2_control_pane

0xe062,	// (0x00055b8c) cell_graphic2_pane_g1_ParamLimits

0xe062,	// (0x00055b8c) cell_graphic2_pane_g1

0xd133,	// (0x00054c5d) cell_graphic2_pane_g2_ParamLimits

0xd133,	// (0x00054c5d) cell_graphic2_pane_g2

0xe06f,	// (0x00055b99) cell_graphic2_pane_g3_ParamLimits

0xe06f,	// (0x00055b99) cell_graphic2_pane_g3

0xd140,	// (0x00054c6a) cell_graphic2_pane_g4_ParamLimits

0xd140,	// (0x00054c6a) cell_graphic2_pane_g4

0xe07c,	// (0x00055ba6) cell_graphic2_pane_g5_ParamLimits

0xe07c,	// (0x00055ba6) cell_graphic2_pane_g5

0x0004,

0xfd98,	// (0x000578c2) cell_graphic2_pane_g_ParamLimits

0xfd98,	// (0x000578c2) cell_graphic2_pane_g

0xe098,	// (0x00055bc2) cell_graphic2_pane_t1_ParamLimits

0xe098,	// (0x00055bc2) cell_graphic2_pane_t1

0x3f06,	// (0x0004ba30) grid_highlight_pane_cp11_ParamLimits

0x3f06,	// (0x0004ba30) grid_highlight_pane_cp11

0xa643,	// (0x0005216d) bg_button_pane_cp05

0xe0e1,	// (0x00055c0b) cell_graphic2_control_pane_g1

0x585d,	// (0x0004d387) bg_touch_area_indi_pane_g1

0x7ade,	// (0x0004f608) aid_cmod_rocker_key_size

0x7ae8,	// (0x0004f612) aid_cmode_itu_key_size

0x7af2,	// (0x0004f61c) main_cmode_video_pane

0x7afc,	// (0x0004f626) main_comp_mode_itu_pane

0x7b08,	// (0x0004f632) main_comp_mode_rocker_pane

0x7b14,	// (0x0004f63e) cell_cmode_rocker_pane_ParamLimits

0x7b14,	// (0x0004f63e) cell_cmode_rocker_pane

0x7b28,	// (0x0004f652) cell_cmode_itu_pane_ParamLimits

0x7b28,	// (0x0004f652) cell_cmode_itu_pane

0xacb0,	// (0x000527da) bg_button_pane_cp06_ParamLimits

0xacb0,	// (0x000527da) bg_button_pane_cp06

0x5ad8,	// (0x0004d602) cell_cmode_rocker_pane_g1_ParamLimits

0x5ad8,	// (0x0004d602) cell_cmode_rocker_pane_g1

0x7067,	// (0x0004eb91) cell_cmode_rocker_pane_g2_ParamLimits

0x7067,	// (0x0004eb91) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x000578d2) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x000578d2) cell_cmode_rocker_pane_g

0x9fd9,	// (0x00051b03) bg_button_pane_cp07

0x7b3f,	// (0x0004f669) cell_cmode_itu_pane_g1

0x7b48,	// (0x0004f672) cell_cmode_itu_pane_t1

0x7b56,	// (0x0004f680) cell_cmode_itu_pane_t2

0x0001,

0xfdad,	// (0x000578d7) cell_cmode_itu_pane_t

0x7294,	// (0x0004edbe) aid_touch_ctrl_left

0x729c,	// (0x0004edc6) aid_touch_ctrl_right

0x9fd9,	// (0x00051b03) compa_mode_pane

0xe109,	// (0x00055c33) aid_cmod_rocker_key_size_cp

0xe113,	// (0x00055c3d) aid_cmode_itu_key_size_cp

0x7b78,	// (0x0004f6a2) compa_mode_pane_g1

0x7b80,	// (0x0004f6aa) compa_mode_pane_g2

0x7b88,	// (0x0004f6b2) compa_mode_pane_g3

0x0002,

0xfdb2,	// (0x000578dc) compa_mode_pane_g

0xe11d,	// (0x00055c47) main_comp_mode_itu_pane_cp

0xe125,	// (0x00055c4f) main_comp_mode_rocker_pane_cp

0xe12d,	// (0x00055c57) cell_cmode_itu_pane_cp_ParamLimits

0xe12d,	// (0x00055c57) cell_cmode_itu_pane_cp

0xe142,	// (0x00055c6c) cell_cmode_rocker_pane_cp_ParamLimits

0xe142,	// (0x00055c6c) cell_cmode_rocker_pane_cp

0xacb0,	// (0x000527da) bg_button_pane_cp06_cp_ParamLimits

0xacb0,	// (0x000527da) bg_button_pane_cp06_cp

0x5ad8,	// (0x0004d602) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5ad8,	// (0x0004d602) cell_cmode_rocker_pane_g1_cp

0x585d,	// (0x0004d387) cell_cmode_rocker_pane_g2_cp

0x9fd9,	// (0x00051b03) bg_button_pane_cp07_cp

0xe154,	// (0x00055c7e) cell_cmode_itu_pane_g1_cp

0xe15d,	// (0x00055c87) cell_cmode_itu_pane_t1_cp

0xe15d,	// (0x00055c87) cell_cmode_itu_pane_t2_cp

0xcdb7,	// (0x000548e1) settings_code_pane_cp2

0xa360,	// (0x00051e8a) bg_popup_window_pane_cp3_ParamLimits

0xa857,	// (0x00052381) heading_pane_cp3_ParamLimits

0xa866,	// (0x00052390) listscroll_popup_graphic_pane_ParamLimits

0x1513,	// (0x0004903d) fep_hwr_aid_pane_ParamLimits

0x19f8,	// (0x00049522) aid_touch_sctrl_top_ParamLimits

0x1a05,	// (0x0004952f) sctrl_sk_top_pane_g1_ParamLimits

0x5ad8,	// (0x0004d602) sctrl_sk_top_pane_g2_ParamLimits

0xfce8,	// (0x00057812) sctrl_sk_top_pane_g_ParamLimits

0x1a12,	// (0x0004953c) sctrl_sk_top_pane_t1_ParamLimits

0x19f8,	// (0x00049522) aid_touch_sctrl_bottom_ParamLimits

0x1a12,	// (0x0004953c) sctrl_sk_bottom_pane_t1_ParamLimits

0x71d9,	// (0x0004ed03) aid_area_touch_clock

0xc0d8,	// (0x00053c02) aid_vkb2_area_top_pane_cell_ParamLimits

0xc0d8,	// (0x00053c02) aid_vkb2_area_top_pane_cell

0xc188,	// (0x00053cb2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc188,	// (0x00053cb2) aid_vkb2_area_bottom_pane_cell

0x7746,	// (0x0004f270) popup_char_count_window

0x7bde,	// (0x0004f708) popup_char_count_window_g1

0x7be7,	// (0x0004f711) popup_char_count_window_g2

0x7bf0,	// (0x0004f71a) popup_char_count_window_g3

0x0002,

0xfdb9,	// (0x000578e3) popup_char_count_window_g

0x7bf9,	// (0x0004f723) popup_char_count_window_t1

0x1aad,	// (0x000495d7) popup_fep_char_preview_window_ParamLimits

0x1aad,	// (0x000495d7) popup_fep_char_preview_window

0xc0f8,	// (0x00053c22) vkb2_top_candi_pane_ParamLimits

0xc0f8,	// (0x00053c22) vkb2_top_candi_pane

0xe16b,	// (0x00055c95) cell_vkb2_top_candi_pane_ParamLimits

0xe16b,	// (0x00055c95) cell_vkb2_top_candi_pane

0x388f,	// (0x0004b3b9) bg_popup_fep_char_preview_window_ParamLimits

0x388f,	// (0x0004b3b9) bg_popup_fep_char_preview_window

0x2031,	// (0x00049b5b) popup_fep_char_preview_window_t1_ParamLimits

0x2031,	// (0x00049b5b) popup_fep_char_preview_window_t1

0x7c55,	// (0x0004f77f) bg_popup_fep_char_preview_window_g1

0x7c5d,	// (0x0004f787) bg_popup_fep_char_preview_window_g2

0x7c65,	// (0x0004f78f) bg_popup_fep_char_preview_window_g3

0x7c6d,	// (0x0004f797) bg_popup_fep_char_preview_window_g4

0x7c75,	// (0x0004f79f) bg_popup_fep_char_preview_window_g5

0x7c7d,	// (0x0004f7a7) bg_popup_fep_char_preview_window_g6

0x7c85,	// (0x0004f7af) bg_popup_fep_char_preview_window_g7

0x7c8d,	// (0x0004f7b7) bg_popup_fep_char_preview_window_g8

0x7c95,	// (0x0004f7bf) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc0,	// (0x000578ea) bg_popup_fep_char_preview_window_g

0x5ad8,	// (0x0004d602) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5ad8,	// (0x0004d602) cell_vkb2_top_candi_pane_g1

0x5e19,	// (0x0004d943) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5e19,	// (0x0004d943) cell_vkb2_top_candi_pane_g2

0x5e3a,	// (0x0004d964) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5e3a,	// (0x0004d964) cell_vkb2_top_candi_pane_g3

0x2073,	// (0x00049b9d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2073,	// (0x00049b9d) cell_vkb2_top_candi_pane_g4

0x7c9d,	// (0x0004f7c7) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7c9d,	// (0x0004f7c7) cell_vkb2_top_candi_pane_g5

0x7067,	// (0x0004eb91) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7067,	// (0x0004eb91) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd5,	// (0x000578ff) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd5,	// (0x000578ff) cell_vkb2_top_candi_pane_g

0x2094,	// (0x00049bbe) cell_vkb2_top_candi_pane_t1

0x1286,	// (0x00048db0) aid_size_touch_slider_mark_ParamLimits

0x1286,	// (0x00048db0) aid_size_touch_slider_mark

0xde6c,	// (0x00055996) grid_graphic2_catg_pane_ParamLimits

0xde6c,	// (0x00055996) grid_graphic2_catg_pane

0xdf2a,	// (0x00055a54) popup_grid_graphic2_window_t1_ParamLimits

0xdf2a,	// (0x00055a54) popup_grid_graphic2_window_t1

0xdf40,	// (0x00055a6a) popup_grid_graphic2_window_t2_ParamLimits

0xdf40,	// (0x00055a6a) popup_grid_graphic2_window_t2

0x0001,

0xfd8e,	// (0x000578b8) popup_grid_graphic2_window_t_ParamLimits

0xfd8e,	// (0x000578b8) popup_grid_graphic2_window_t

0xa643,	// (0x0005216d) bg_button_pane_cp05_ParamLimits

0xe0e1,	// (0x00055c0b) cell_graphic2_control_pane_g1_ParamLimits

0xe1cf,	// (0x00055cf9) cell_graphic2_catg_pane_ParamLimits

0xe1cf,	// (0x00055cf9) cell_graphic2_catg_pane

0x9fd9,	// (0x00051b03) bg_button_pane_cp12

0xe1e1,	// (0x00055d0b) cell_graphic2_catg_pane_g1

0x71a5,	// (0x0004eccf) cell_tb_ext_pane_t1_ParamLimits

0x1e63,	// (0x0004998d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1e63,	// (0x0004998d) vkb2_top_cell_right_narrow_pane

0x1e7b,	// (0x000499a5) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e7b,	// (0x000499a5) vkb2_top_cell_right_wide_pane

0x1505,	// (0x0004902f) bg_vkb2_func_pane_ParamLimits

0x1505,	// (0x0004902f) bg_vkb2_func_pane

0x1eec,	// (0x00049a16) vkb2_top_cell_left_pane_g1_ParamLimits

0x1505,	// (0x0004902f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1505,	// (0x0004902f) bg_vkb2_fuc_pane_cp03

0x1f4a,	// (0x00049a74) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3231,	// (0x0004ad5b) bg_vkb2_func_pane_g1

0x3239,	// (0x0004ad63) bg_vkb2_func_pane_g2

0x3249,	// (0x0004ad73) bg_vkb2_func_pane_g3

0x3241,	// (0x0004ad6b) bg_vkb2_func_pane_g4

0x3251,	// (0x0004ad7b) bg_vkb2_func_pane_g5

0x3259,	// (0x0004ad83) bg_vkb2_func_pane_g6

0x3261,	// (0x0004ad8b) bg_vkb2_func_pane_g7

0x3269,	// (0x0004ad93) bg_vkb2_func_pane_g8

0x3229,	// (0x0004ad53) bg_vkb2_func_pane_g9

0x0008,

0xfde2,	// (0x0005790c) bg_vkb2_func_pane_g

0x1505,	// (0x0004902f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1505,	// (0x0004902f) bg_vkb2_fuc_pane_cp01

0x1eec,	// (0x00049a16) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1eec,	// (0x00049a16) vkb2_top_cell_right_wide_pane_g1

0x1505,	// (0x0004902f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1505,	// (0x0004902f) bg_vkb2_fuc_pane_cp02

0x20b2,	// (0x00049bdc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x20b2,	// (0x00049bdc) vkb2_top_cell_right_narrow_pane_g1

0xd6d9,	// (0x00055203) aid_touch_area_decrease_ParamLimits

0xd6d9,	// (0x00055203) aid_touch_area_decrease

0xd713,	// (0x0005523d) aid_touch_area_increase_ParamLimits

0xd713,	// (0x0005523d) aid_touch_area_increase

0xd73b,	// (0x00055265) aid_touch_area_mute_ParamLimits

0xd73b,	// (0x00055265) aid_touch_area_mute

0xd763,	// (0x0005528d) aid_touch_area_slider_ParamLimits

0xd763,	// (0x0005528d) aid_touch_area_slider

0xd7a3,	// (0x000552cd) popup_slider_window_g4_ParamLimits

0xd7a3,	// (0x000552cd) popup_slider_window_g4

0xd7cb,	// (0x000552f5) popup_slider_window_g5_ParamLimits

0xd7cb,	// (0x000552f5) popup_slider_window_g5

0xd7ff,	// (0x00055329) popup_slider_window_g6_ParamLimits

0xd7ff,	// (0x00055329) popup_slider_window_g6

0x6f7a,	// (0x0004eaa4) popup_slider_window_t2_ParamLimits

0x6f7a,	// (0x0004eaa4) popup_slider_window_t2

0x0001,

0xfcdc,	// (0x00057806) popup_slider_window_t_ParamLimits

0xfcdc,	// (0x00057806) popup_slider_window_t

0xd81b,	// (0x00055345) slider_pane_ParamLimits

0xd81b,	// (0x00055345) slider_pane

0x7cd9,	// (0x0004f803) slider_pane_g1_ParamLimits

0x7cd9,	// (0x0004f803) slider_pane_g1

0x7ced,	// (0x0004f817) slider_pane_g2_ParamLimits

0x7ced,	// (0x0004f817) slider_pane_g2

0x7d03,	// (0x0004f82d) slider_pane_g3_ParamLimits

0x7d03,	// (0x0004f82d) slider_pane_g3

0x0003,

0xfdf5,	// (0x0005791f) slider_pane_g_ParamLimits

0xfdf5,	// (0x0005791f) slider_pane_g

0xbb13,	// (0x0005363d) popup_tb_float_extension_window_ParamLimits

0xbb13,	// (0x0005363d) popup_tb_float_extension_window

0x7d2f,	// (0x0004f859) aid_size_cell_tb_float_ext

0x9fd9,	// (0x00051b03) bg_popup_sub_window_cp28

0x7d3b,	// (0x0004f865) grid_tb_float_ext_pane

0x7d47,	// (0x0004f871) cell_tb_float_ext_pane_ParamLimits

0x7d47,	// (0x0004f871) cell_tb_float_ext_pane

0x7d63,	// (0x0004f88d) cell_tb_float_ext_pane_g1

0x7d6c,	// (0x0004f896) grid_highlight_pane_cp12

0xbde0,	// (0x0005390a) cell_last_hwr_side_pane_ParamLimits

0xbde0,	// (0x0005390a) cell_last_hwr_side_pane

0x585d,	// (0x0004d387) cell_last_hwr_side_pane_g1

0x7d75,	// (0x0004f89f) cell_last_hwr_side_pane_g2

0x0001,

0xfdfe,	// (0x00057928) cell_last_hwr_side_pane_g

0xc265,	// (0x00053d8f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc265,	// (0x00053d8f) vkb2_area_bottom_space_btn_pane

0x5ad8,	// (0x0004d602) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x77fb,	// (0x0004f325) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2094,	// (0x00049bbe) cell_vkb2_top_candi_pane_t1_ParamLimits

0x20ce,	// (0x00049bf8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x20ce,	// (0x00049bf8) vkb2_area_bottom_space_btn_pane_g1

0x2108,	// (0x00049c32) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2108,	// (0x00049c32) vkb2_area_bottom_space_btn_pane_g2

0x213e,	// (0x00049c68) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x213e,	// (0x00049c68) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe03,	// (0x0005792d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe03,	// (0x0005792d) vkb2_area_bottom_space_btn_pane_g

0x15bc,	// (0x000490e6) cel_fep_hwr_func_pane_ParamLimits

0x15bc,	// (0x000490e6) cel_fep_hwr_func_pane

0xbdb5,	// (0x000538df) cell_hwr_side_button_pane_ParamLimits

0xbdb5,	// (0x000538df) cell_hwr_side_button_pane

0x71d9,	// (0x0004ed03) aid_area_touch_clock_ParamLimits

0xa643,	// (0x0005216d) bg_uniindi_top_pane_ParamLimits

0x71ed,	// (0x0004ed17) uniindi_top_pane_g1_ParamLimits

0x7203,	// (0x0004ed2d) uniindi_top_pane_g2_ParamLimits

0x720f,	// (0x0004ed39) uniindi_top_pane_g3_ParamLimits

0x7220,	// (0x0004ed4a) uniindi_top_pane_g4_ParamLimits

0xfd14,	// (0x0005783e) uniindi_top_pane_g_ParamLimits

0x722d,	// (0x0004ed57) uniindi_top_pane_t1_ParamLimits

0xa643,	// (0x0005216d) bg_vkb2_func_pane_cp01_ParamLimits

0xa643,	// (0x0005216d) bg_vkb2_func_pane_cp01

0x7d7e,	// (0x0004f8a8) cel_fep_hwr_func_pane_g1_ParamLimits

0x7d7e,	// (0x0004f8a8) cel_fep_hwr_func_pane_g1

0xa643,	// (0x0005216d) bg_vkb2_func_pane_cp02_ParamLimits

0xa643,	// (0x0005216d) bg_vkb2_func_pane_cp02

0x7d7e,	// (0x0004f8a8) cell_hwr_side_button_pane_g1_ParamLimits

0x7d7e,	// (0x0004f8a8) cell_hwr_side_button_pane_g1

0x30ae,	// (0x0004abd8) status_pane_g4_ParamLimits

0x30ae,	// (0x0004abd8) status_pane_g4

0x30c8,	// (0x0004abf2) status_pane_t1

0x5610,	// (0x0004d13a) form2_midp_gauge_slider_cont_pane

0x5618,	// (0x0004d142) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd07d,	// (0x00054ba7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd08f,	// (0x00054bb9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae0,	// (0x0005760a) form2_midp_gauge_slider_pane_t_ParamLimits

0x564e,	// (0x0004d178) form2_midp_slider_pane_ParamLimits

0x1a75,	// (0x0004959f) aid_size_cell_func_vkb2_ParamLimits

0x1a75,	// (0x0004959f) aid_size_cell_func_vkb2

0x7d1b,	// (0x0004f845) slider_pane_g4_ParamLimits

0x7d1b,	// (0x0004f845) slider_pane_g4

0xc2ce,	// (0x00053df8) form2_midp_gauge_slider_pane_t2_cp01

0xc2dc,	// (0x00053e06) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc2dc,	// (0x00053e06) form2_midp_gauge_slider_pane_t3_cp01

0x21b3,	// (0x00049cdd) form2_midp_slider_pane_cp01

0x9fd9,	// (0x00051b03) navi_smil_pane

0x7db7,	// (0x0004f8e1) navi_smil_pane_g1

0x7dbf,	// (0x0004f8e9) navi_smil_pane_t1

0x7d8c,	// (0x0004f8b6) form2_midp_slider_pane_g1

0x7d95,	// (0x0004f8bf) form2_midp_slider_pane_g2

0x7d9d,	// (0x0004f8c7) form2_midp_slider_pane_g3

0x7d8c,	// (0x0004f8b6) form2_midp_slider_pane_g4

0xe1ea,	// (0x00055d14) form2_midp_slider_pane_g5

0x0004,

0xfe0c,	// (0x00057936) form2_midp_slider_pane_g

0x2178,	// (0x00049ca2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2178,	// (0x00049ca2) vkb2_area_bottom_space_btn_pane_g4

0xc6e1,	// (0x0005420b) lc0_navi_pane_ParamLimits

0xc6e1,	// (0x0005420b) lc0_navi_pane

0xc751,	// (0x0005427b) lc0_stat_indi_pane_ParamLimits

0xc751,	// (0x0005427b) lc0_stat_indi_pane

0xc766,	// (0x00054290) ls0_title_pane_ParamLimits

0xc766,	// (0x00054290) ls0_title_pane

0xacb0,	// (0x000527da) bg_popup_sub_pane_cp14_ParamLimits

0x71c0,	// (0x0004ecea) list_uniindi_pane_ParamLimits

0x71cc,	// (0x0004ecf6) uniindi_top_pane_ParamLimits

0x726c,	// (0x0004ed96) list_single_uniindi_pane_g1_ParamLimits

0x727f,	// (0x0004eda9) list_single_uniindi_pane_t1_ParamLimits

0xc2f9,	// (0x00053e23) lc0_stat_clock_pane_ParamLimits

0xc2f9,	// (0x00053e23) lc0_stat_clock_pane

0xe1f3,	// (0x00055d1d) lc0_stat_indi_pane_g1_ParamLimits

0xe1f3,	// (0x00055d1d) lc0_stat_indi_pane_g1

0xe200,	// (0x00055d2a) lc0_stat_indi_pane_g2_ParamLimits

0xe200,	// (0x00055d2a) lc0_stat_indi_pane_g2

0x0001,

0xfe17,	// (0x00057941) lc0_stat_indi_pane_g_ParamLimits

0xfe17,	// (0x00057941) lc0_stat_indi_pane_g

0xc306,	// (0x00053e30) lc0_uni_indicator_pane_ParamLimits

0xc306,	// (0x00053e30) lc0_uni_indicator_pane

0xe20d,	// (0x00055d37) ls0_title_pane_g1_ParamLimits

0xe20d,	// (0x00055d37) ls0_title_pane_g1

0xe221,	// (0x00055d4b) ls0_title_pane_t1_ParamLimits

0xe221,	// (0x00055d4b) ls0_title_pane_t1

0xc313,	// (0x00053e3d) lc0_uni_indicator_pane_g1_ParamLimits

0xc313,	// (0x00053e3d) lc0_uni_indicator_pane_g1

0x7e31,	// (0x0004f95b) lc0_stat_clock_pane_t1

0x9fd9,	// (0x00051b03) main_ai5_pane

0x7e3f,	// (0x0004f969) ai5_sk_pane_ParamLimits

0x7e3f,	// (0x0004f969) ai5_sk_pane

0xe24f,	// (0x00055d79) cell_ai5_widget_pane_ParamLimits

0xe24f,	// (0x00055d79) cell_ai5_widget_pane

0xe658,	// (0x00056182) aid_size_cell_widget_grid

0x7ef9,	// (0x0004fa23) bg_ai5_widget_pane_ParamLimits

0x7ef9,	// (0x0004fa23) bg_ai5_widget_pane

0xe68c,	// (0x000561b6) cell_ai5_widget_pane_g2

0xe6a0,	// (0x000561ca) cell_ai5_widget_pane_g3

0xe6ba,	// (0x000561e4) cell_ai5_widget_pane_g4

0xe6ca,	// (0x000561f4) cell_ai5_widget_pane_g5

0xe6da,	// (0x00056204) cell_ai5_widget_pane_g6

0xe6e6,	// (0x00056210) cell_ai5_widget_pane_g7

0xe752,	// (0x0005627c) cell_ai5_widget_pane_t1_ParamLimits

0xe752,	// (0x0005627c) cell_ai5_widget_pane_t1

0xe76f,	// (0x00056299) cell_ai5_widget_pane_t2_ParamLimits

0xe76f,	// (0x00056299) cell_ai5_widget_pane_t2

0xe787,	// (0x000562b1) cell_ai5_widget_pane_t3_ParamLimits

0xe787,	// (0x000562b1) cell_ai5_widget_pane_t3

0xe79f,	// (0x000562c9) cell_ai5_widget_pane_t4_ParamLimits

0xe79f,	// (0x000562c9) cell_ai5_widget_pane_t4

0xe7c5,	// (0x000562ef) cell_ai5_widget_pane_t5_ParamLimits

0xe7c5,	// (0x000562ef) cell_ai5_widget_pane_t5

0x80ce,	// (0x0004fbf8) cell_ai5_widget_pane_t6_ParamLimits

0x80ce,	// (0x0004fbf8) cell_ai5_widget_pane_t6

0x80e0,	// (0x0004fc0a) cell_ai5_widget_pane_t7_ParamLimits

0x80e0,	// (0x0004fc0a) cell_ai5_widget_pane_t7

0xe7e5,	// (0x0005630f) cell_ai5_widget_pane_t8_ParamLimits

0xe7e5,	// (0x0005630f) cell_ai5_widget_pane_t8

0x000b,

0xfe37,	// (0x00057961) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x00057961) cell_ai5_widget_pane_t

0xe869,	// (0x00056393) grid_ai5_widget_pane

0xacb0,	// (0x000527da) highlight_cell_ai5_widget_pane_ParamLimits

0xacb0,	// (0x000527da) highlight_cell_ai5_widget_pane

0xe877,	// (0x000563a1) ai5_sk_left_pane

0xe881,	// (0x000563ab) ai5_sk_middle_pane

0xe88b,	// (0x000563b5) ai5_sk_right_pane

0x81af,	// (0x0004fcd9) bg_ai5_widget_pane_g1_ParamLimits

0x81af,	// (0x0004fcd9) bg_ai5_widget_pane_g1

0x81bb,	// (0x0004fce5) bg_ai5_widget_pane_g2_ParamLimits

0x81bb,	// (0x0004fce5) bg_ai5_widget_pane_g2

0x81c7,	// (0x0004fcf1) bg_ai5_widget_pane_g3_ParamLimits

0x81c7,	// (0x0004fcf1) bg_ai5_widget_pane_g3

0x81d3,	// (0x0004fcfd) bg_ai5_widget_pane_g4_ParamLimits

0x81d3,	// (0x0004fcfd) bg_ai5_widget_pane_g4

0x81df,	// (0x0004fd09) bg_ai5_widget_pane_g5_ParamLimits

0x81df,	// (0x0004fd09) bg_ai5_widget_pane_g5

0x81eb,	// (0x0004fd15) bg_ai5_widget_pane_g6_ParamLimits

0x81eb,	// (0x0004fd15) bg_ai5_widget_pane_g6

0x81f7,	// (0x0004fd21) bg_ai5_widget_pane_g7_ParamLimits

0x81f7,	// (0x0004fd21) bg_ai5_widget_pane_g7

0x8203,	// (0x0004fd2d) bg_ai5_widget_pane_g8_ParamLimits

0x8203,	// (0x0004fd2d) bg_ai5_widget_pane_g8

0x820f,	// (0x0004fd39) bg_ai5_widget_pane_g9_ParamLimits

0x820f,	// (0x0004fd39) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x0005797a) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x0005797a) bg_ai5_widget_pane_g

0xe8bf,	// (0x000563e9) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8bf,	// (0x000563e9) cell_shortcut_ai5_widget_pane

0x29cc,	// (0x0004a4f6) bg_cell_shortcut_ai5_widget_pane

0x825a,	// (0x0004fd84) cell_grid_ai5_widget_pane_g1

0x29cc,	// (0x0004a4f6) highlight_cell_shortcut_ai5_widget_pane

0x3239,	// (0x0004ad63) ai5_sk_left_pane_g1

0x8263,	// (0x0004fd8d) ai5_sk_left_pane_g2

0x826b,	// (0x0004fd95) ai5_sk_left_pane_g3

0x8273,	// (0x0004fd9d) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x0005798d) ai5_sk_left_pane_g

0x827b,	// (0x0004fda5) ai5_sk_left_pane_t1

0x3231,	// (0x0004ad5b) ai5_sk_right_pane_g1

0x8289,	// (0x0004fdb3) ai5_sk_right_pane_g2

0x8291,	// (0x0004fdbb) ai5_sk_right_pane_g3

0x8299,	// (0x0004fdc3) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x00057996) ai5_sk_right_pane_g

0x82a1,	// (0x0004fdcb) ai5_sk_right_pane_t1

0x3231,	// (0x0004ad5b) ai5_sk_middle_pane_g1

0x3239,	// (0x0004ad63) ai5_sk_middle_pane_g2

0x3251,	// (0x0004ad7b) ai5_sk_middle_pane_g3

0x8291,	// (0x0004fdbb) ai5_sk_middle_pane_g4

0x826b,	// (0x0004fd95) ai5_sk_middle_pane_g5

0x82af,	// (0x0004fdd9) ai5_sk_middle_pane_g6

0xe8d2,	// (0x000563fc) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x0005799f) ai5_sk_middle_pane_g

0xc5cb,	// (0x000540f5) aid_touch_area_size_lc0_ParamLimits

0xc5cb,	// (0x000540f5) aid_touch_area_size_lc0

0x175b,	// (0x00049285) cell_hwr_candidate_pane_t1_ParamLimits

0x2d71,	// (0x0004a89b) aid_touch_navi_pane

0xc871,	// (0x0005439b) status_dt_navi_pane_ParamLimits

0xc871,	// (0x0005439b) status_dt_navi_pane

0xc889,	// (0x000543b3) status_dt_sta_pane_ParamLimits

0xc889,	// (0x000543b3) status_dt_sta_pane

0xe8da,	// (0x00056404) dt_sta_controll_pane

0xe8e7,	// (0x00056411) dt_sta_indi_pane

0xe8f4,	// (0x0005641e) dt_sta_title_pane

0xa643,	// (0x0005216d) bg_dt_sta_indi_pane_ParamLimits

0xa643,	// (0x0005216d) bg_dt_sta_indi_pane

0xe906,	// (0x00056430) dt_sta_battery_pane

0xe90e,	// (0x00056438) dt_sta_indi_pane_g1

0xe917,	// (0x00056441) dt_sta_indi_pane_g2

0xe920,	// (0x0005644a) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x000579ae) dt_sta_indi_pane_g

0xe929,	// (0x00056453) dt_sta_signal_pane

0xacb0,	// (0x000527da) bg_dt_sta_title_pane_ParamLimits

0xacb0,	// (0x000527da) bg_dt_sta_title_pane

0xe932,	// (0x0005645c) dt_sta_title_pane_g1

0xe93a,	// (0x00056464) dt_sta_title_pane_t1_ParamLimits

0xe93a,	// (0x00056464) dt_sta_title_pane_t1

0x9fd9,	// (0x00051b03) bg_dt_sta_control_pane

0xe94f,	// (0x00056479) dt_sta_controll_pane_g1

0xe958,	// (0x00056482) bg_dt_sta_title_pane_g1

0xe961,	// (0x0005648b) bg_dt_sta_title_pane_g2

0xe96a,	// (0x00056494) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x000579b5) bg_dt_sta_title_pane_g

0x585d,	// (0x0004d387) bg_dt_sta_indi_pane_g1

0x835d,	// (0x0004fe87) dt_sta_signal_pane_g1

0x8365,	// (0x0004fe8f) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x000579bc) dt_sta_signal_pane_g

0x836d,	// (0x0004fe97) dt_sta_battery_pane_g1

0x8376,	// (0x0004fea0) dt_sta_battery_pane_t1

0x585d,	// (0x0004d387) bg_dt_sta_control_pane_g1

0xe503,	// (0x0005602d) fep_china_uni_eep_pane

0xe50b,	// (0x00056035) fep_china_uni_entry_pane_ParamLimits

0xe51b,	// (0x00056045) popup_fep_china_uni_window_g1_ParamLimits

0xe52b,	// (0x00056055) popup_fep_china_uni_window_g2_ParamLimits

0xe52b,	// (0x00056055) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00057227) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00057227) popup_fep_china_uni_window_g

0x8385,	// (0x0004feaf) fep_china_uni_eep_pane_g1

0x838d,	// (0x0004feb7) fep_china_uni_eep_pane_t1

0x7dae,	// (0x0004f8d8) aid_touch_area_size_smil_player

0x2ec5,	// (0x0004a9ef) lc0_clock_pane

0x30bc,	// (0x0004abe6) status_pane_g5_ParamLimits

0x30bc,	// (0x0004abe6) status_pane_g5

0xb639,	// (0x00053163) popup_keymap_window

0x3082,	// (0x0004abac) status_icon_pane

0xe6a0,	// (0x000561ca) cell_ai5_widget_pane_g3_ParamLimits

0xe6ba,	// (0x000561e4) cell_ai5_widget_pane_g4_ParamLimits

0xe6ca,	// (0x000561f4) cell_ai5_widget_pane_g5_ParamLimits

0xe6f2,	// (0x0005621c) cell_ai5_widget_pane_g8_ParamLimits

0xe6f2,	// (0x0005621c) cell_ai5_widget_pane_g8

0xe706,	// (0x00056230) cell_ai5_widget_pane_g9_ParamLimits

0xe706,	// (0x00056230) cell_ai5_widget_pane_g9

0xe71a,	// (0x00056244) cell_ai5_widget_pane_g10_ParamLimits

0xe71a,	// (0x00056244) cell_ai5_widget_pane_g10

0x839c,	// (0x0004fec6) status_icon_pane_g1

0x9fd9,	// (0x00051b03) bg_popup_sub_pane_cp13

0x83a4,	// (0x0004fece) popup_keymap_window_t1

0x2ca4,	// (0x0004a7ce) control_pane_g6_ParamLimits

0x2ca4,	// (0x0004a7ce) control_pane_g6

0x2cb1,	// (0x0004a7db) control_pane_g7_ParamLimits

0x2cb1,	// (0x0004a7db) control_pane_g7

0x2cbe,	// (0x0004a7e8) control_pane_g8_ParamLimits

0x2cbe,	// (0x0004a7e8) control_pane_g8

0xe8da,	// (0x00056404) dt_sta_controll_pane_ParamLimits

0xe8e7,	// (0x00056411) dt_sta_indi_pane_ParamLimits

0xe8f4,	// (0x0005641e) dt_sta_title_pane_ParamLimits

0xab99,	// (0x000526c3) aid_size_touch_scroll_bar_cale

0xf42b,	// (0x00056f55) popup_discreet_window_ParamLimits

0xf42b,	// (0x00056f55) popup_discreet_window

0xa127,	// (0x00051c51) popup_sk_window

0x388f,	// (0x0004b3b9) bg_popup_sub_pane_cp28_ParamLimits

0x388f,	// (0x0004b3b9) bg_popup_sub_pane_cp28

0x83b2,	// (0x0004fedc) popup_discreet_window_g1_ParamLimits

0x83b2,	// (0x0004fedc) popup_discreet_window_g1

0x83d2,	// (0x0004fefc) popup_discreet_window_t1_ParamLimits

0x83d2,	// (0x0004fefc) popup_discreet_window_t1

0x83f0,	// (0x0004ff1a) popup_discreet_window_t2_ParamLimits

0x83f0,	// (0x0004ff1a) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x000579c1) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x000579c1) popup_discreet_window_t

0x21e9,	// (0x00049d13) popup_sk_window_g1

0x21f3,	// (0x00049d1d) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x000579c8) popup_sk_window_g

0x21fb,	// (0x00049d25) popup_sk_window_t1

0x2209,	// (0x00049d33) popup_sk_window_t1_copy1

0xe68c,	// (0x000561b6) cell_ai5_widget_pane_g2_ParamLimits

0xe7f7,	// (0x00056321) cell_ai5_widget_pane_t9_ParamLimits

0xe7f7,	// (0x00056321) cell_ai5_widget_pane_t9

0x9fd9,	// (0x00051b03) main_fep_fshwr2_pane

0xc332,	// (0x00053e5c) aid_fshwr2_btn_pane

0xc346,	// (0x00053e70) aid_fshwr2_syb_pane

0xc35a,	// (0x00053e84) aid_fshwr2_txt_pane

0xc36a,	// (0x00053e94) fshwr2_func_candi_pane

0xc38c,	// (0x00053eb6) fshwr2_hwr_syb_pane

0xc3b0,	// (0x00053eda) fshwr2_icf_pane

0x9fd9,	// (0x00051b03) fshwr2_icf_bg_pane

0x22b5,	// (0x00049ddf) fshwr2_icf_pane_t1_ParamLimits

0x22b5,	// (0x00049ddf) fshwr2_icf_pane_t1

0xe481,	// (0x00055fab) fshwr2_func_candi_pane_g1

0xe973,	// (0x0005649d) fshwr2_func_candi_row_pane_ParamLimits

0xe973,	// (0x0005649d) fshwr2_func_candi_row_pane

0xc3e0,	// (0x00053f0a) cell_fshwr2_syb_pane_ParamLimits

0xc3e0,	// (0x00053f0a) cell_fshwr2_syb_pane

0x7d7e,	// (0x0004f8a8) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7d7e,	// (0x0004f8a8) fshwr2_hwr_syb_pane_g1

0x9fd9,	// (0x00051b03) bg_popup_call_pane_cp01

0xc408,	// (0x00053f32) fshwr2_func_candi_cell_pane_ParamLimits

0xc408,	// (0x00053f32) fshwr2_func_candi_cell_pane

0x366f,	// (0x0004b199) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x366f,	// (0x0004b199) fshwr2_func_candi_cell_bg_pane

0xc453,	// (0x00053f7d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc453,	// (0x00053f7d) fshwr2_func_candi_cell_pane_g1

0xc48a,	// (0x00053fb4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc48a,	// (0x00053fb4) fshwr2_func_candi_cell_pane_t1

0x9fd9,	// (0x00051b03) bg_button_pane_cp08

0x2cf3,	// (0x0004a81d) cell_fshwr2_syb_bg_pane

0xc4a5,	// (0x00053fcf) cell_fshwr2_syb_bg_pane_g1

0xc4b9,	// (0x00053fe3) cell_fshwr2_syb_bg_pane_t1

0xacb0,	// (0x000527da) main_tmo_pane

0xcbbc,	// (0x000546e6) uni_indicator_pane_g1_ParamLimits

0xcbd2,	// (0x000546fc) uni_indicator_pane_g2_ParamLimits

0xcbe8,	// (0x00054712) uni_indicator_pane_g3_ParamLimits

0xcbfb,	// (0x00054725) uni_indicator_pane_g4_ParamLimits

0xcbfb,	// (0x00054725) uni_indicator_pane_g4

0x4406,	// (0x0004bf30) uni_indicator_pane_g5_ParamLimits

0x4406,	// (0x0004bf30) uni_indicator_pane_g5

0x4406,	// (0x0004bf30) uni_indicator_pane_g6_ParamLimits

0x4406,	// (0x0004bf30) uni_indicator_pane_g6

0xf8fc,	// (0x00057426) uni_indicator_pane_g_ParamLimits

0xd6a9,	// (0x000551d3) popup_tmo_note_window_ParamLimits

0xd6a9,	// (0x000551d3) popup_tmo_note_window

0xacb0,	// (0x000527da) fshwr2_bg_pane

0xc47b,	// (0x00053fa5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc47b,	// (0x00053fa5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x000579cd) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x000579cd) fshwr2_func_candi_cell_pane_g

0x585d,	// (0x0004d387) bg_popup_window_pane_cp01

0x23a7,	// (0x00049ed1) bg_popup_window_pane_g1_cp01

0x8465,	// (0x0004ff8f) bg_popup_window_pane_cp22_ParamLimits

0x8465,	// (0x0004ff8f) bg_popup_window_pane_cp22

0x8473,	// (0x0004ff9d) listscroll_tmo_link_pane_ParamLimits

0x8473,	// (0x0004ff9d) listscroll_tmo_link_pane

0x84b3,	// (0x0004ffdd) popup_tmo_note_window_g1_ParamLimits

0x84b3,	// (0x0004ffdd) popup_tmo_note_window_g1

0x84c0,	// (0x0004ffea) tmo_note_info_pane_ParamLimits

0x84c0,	// (0x0004ffea) tmo_note_info_pane

0xe99a,	// (0x000564c4) list_tmo_note_info_pane_g1_ParamLimits

0xe99a,	// (0x000564c4) list_tmo_note_info_pane_g1

0x84f1,	// (0x0005001b) list_tmo_note_info_pane_g2_ParamLimits

0x84f1,	// (0x0005001b) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x000579d2) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x000579d2) list_tmo_note_info_pane_g

0x850d,	// (0x00050037) list_tmo_note_info_text_pane_ParamLimits

0x850d,	// (0x00050037) list_tmo_note_info_text_pane

0x8592,	// (0x000500bc) list_tmo_link_pane

0x859f,	// (0x000500c9) scroll_pane_cp20

0x85ac,	// (0x000500d6) list_single_tmo_link_pane_ParamLimits

0x85ac,	// (0x000500d6) list_single_tmo_link_pane

0x85bc,	// (0x000500e6) list_single_tmo_link_pane_t1

0x85ca,	// (0x000500f4) list_tmo_note_info_text_pane_t1_ParamLimits

0x85ca,	// (0x000500f4) list_tmo_note_info_text_pane_t1

0xad6c,	// (0x00052896) aid_size_touch_scroll_bar_cp01_ParamLimits

0xad6c,	// (0x00052896) aid_size_touch_scroll_bar_cp01

0x9c9c,	// (0x000517c6) aid_size_touch_slider_marker

0xa117,	// (0x00051c41) popup_settings_window_ParamLimits

0xa117,	// (0x00051c41) popup_settings_window

0xed9d,	// (0x000568c7) popup_candi_list_indi_window

0x2d71,	// (0x0004a89b) aid_touch_navi_pane_ParamLimits

0x19cc,	// (0x000494f6) rs_clock_indi_pane

0x19d5,	// (0x000494ff) sctrl_sk_bottom_pane_ParamLimits

0x19e6,	// (0x00049510) sctrl_sk_top_pane_ParamLimits

0x1ac7,	// (0x000495f1) popup_fep_tooltip_window

0xe658,	// (0x00056182) aid_size_cell_widget_grid_ParamLimits

0xe677,	// (0x000561a1) cell_ai5_widget_pane_g1_ParamLimits

0xe677,	// (0x000561a1) cell_ai5_widget_pane_g1

0xe6da,	// (0x00056204) cell_ai5_widget_pane_g6_ParamLimits

0xe6e6,	// (0x00056210) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1c,	// (0x00057946) cell_ai5_widget_pane_g_ParamLimits

0xfe1c,	// (0x00057946) cell_ai5_widget_pane_g

0xe826,	// (0x00056350) cell_ai5_widget_pane_t10_ParamLimits

0xe826,	// (0x00056350) cell_ai5_widget_pane_t10

0xe869,	// (0x00056393) grid_ai5_widget_pane_ParamLimits

0xe895,	// (0x000563bf) cell_contacts_ai5_widget_pane_ParamLimits

0xe895,	// (0x000563bf) cell_contacts_ai5_widget_pane

0x8405,	// (0x0004ff2f) popup_discreet_window_t3_ParamLimits

0x8405,	// (0x0004ff2f) popup_discreet_window_t3

0xc3cc,	// (0x00053ef6) popup_fshwr2_char_preview_window_ParamLimits

0xc3cc,	// (0x00053ef6) popup_fshwr2_char_preview_window

0xe9b1,	// (0x000564db) tmo_note_info_pane_t1

0xe9c6,	// (0x000564f0) tmo_note_info_pane_t2

0xe9df,	// (0x00056509) tmo_note_info_pane_t3

0x856e,	// (0x00050098) tmo_note_info_pane_t4

0x8580,	// (0x000500aa) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x000579d7) tmo_note_info_pane_t

0x8592,	// (0x000500bc) list_tmo_link_pane_ParamLimits

0x859f,	// (0x000500c9) scroll_pane_cp20_ParamLimits

0x9fd9,	// (0x00051b03) bg_popup_fep_char_preview_window_cp01

0x85e3,	// (0x0005010d) popup_fshwr2_char_preview_window_t1

0x85f1,	// (0x0005011b) popup_candi_list_indi_window_g1

0x85fa,	// (0x00050124) bg_cell_contacts_ai5_widget_pane

0xe9f4,	// (0x0005651e) cell_contacts_ai5_widget_pane_g1

0x861b,	// (0x00050145) cell_contacts_ai5_widget_pane_g2

0x8627,	// (0x00050151) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x000579e2) cell_contacts_ai5_widget_pane_g

0x8633,	// (0x0005015d) cell_contacts_ai5_widget_pane_t1

0xacb0,	// (0x000527da) highlight_cell_shortcut_ai5_widget_pane_cp01

0x86aa,	// (0x000501d4) settings_container_pane

0x29cc,	// (0x0004a4f6) listscroll_set_pane_copy1

0x4f8e,	// (0x0004cab8) scroll_pane_cp121_copy1

0x86b6,	// (0x000501e0) set_content_pane_copy1

0x86be,	// (0x000501e8) aid_height_set_list_copy1_ParamLimits

0x86be,	// (0x000501e8) aid_height_set_list_copy1

0x4606,	// (0x0004c130) aid_size_parent_copy1_ParamLimits

0x4606,	// (0x0004c130) aid_size_parent_copy1

0x86ca,	// (0x000501f4) button_value_adjust_pane_cp6_copy1_ParamLimits

0x86ca,	// (0x000501f4) button_value_adjust_pane_cp6_copy1

0x2cf3,	// (0x0004a81d) list_highlight_pane_cp2_copy1_ParamLimits

0x2cf3,	// (0x0004a81d) list_highlight_pane_cp2_copy1

0x86de,	// (0x00050208) list_set_pane_copy1_ParamLimits

0x86de,	// (0x00050208) list_set_pane_copy1

0x8645,	// (0x0005016f) main_pane_set_t1_copy1_ParamLimits

0x8645,	// (0x0005016f) main_pane_set_t1_copy1

0x867f,	// (0x000501a9) main_pane_set_t2_copy1_ParamLimits

0x867f,	// (0x000501a9) main_pane_set_t2_copy1

0x879f,	// (0x000502c9) main_pane_set_t3_copy1

0x87ad,	// (0x000502d7) main_pane_set_t4_copy1

0x869e,	// (0x000501c8) set_content_pane_g1_copy1_ParamLimits

0x869e,	// (0x000501c8) set_content_pane_g1_copy1

0x87bb,	// (0x000502e5) setting_code_pane_copy1

0x87c3,	// (0x000502ed) setting_slider_graphic_pane_copy1

0x87c3,	// (0x000502ed) setting_slider_pane_copy1

0x87cb,	// (0x000502f5) setting_text_pane_copy1

0x87cb,	// (0x000502f5) setting_volume_pane_copy1

0x87bb,	// (0x000502e5) settings_code_pane_cp2_copy1

0x87d3,	// (0x000502fd) settings_code_pane_cp_copy1_ParamLimits

0x87d3,	// (0x000502fd) settings_code_pane_cp_copy1

0x23b0,	// (0x00049eda) volume_set_pane_copy1

0x87e7,	// (0x00050311) volume_set_pane_g10_copy1

0x87f3,	// (0x0005031d) volume_set_pane_g1_copy1

0x87fd,	// (0x00050327) volume_set_pane_g2_copy1

0x8807,	// (0x00050331) volume_set_pane_g3_copy1

0x8811,	// (0x0005033b) volume_set_pane_g4_copy1

0x881b,	// (0x00050345) volume_set_pane_g5_copy1

0x8825,	// (0x0005034f) volume_set_pane_g6_copy1

0x882f,	// (0x00050359) volume_set_pane_g7_copy1

0x8839,	// (0x00050363) volume_set_pane_g8_copy1

0x8843,	// (0x0005036d) volume_set_pane_g9_copy1

0xa360,	// (0x00051e8a) bg_set_opt_pane_cp_copy1_ParamLimits

0xa360,	// (0x00051e8a) bg_set_opt_pane_cp_copy1

0x23bc,	// (0x00049ee6) setting_slider_pane_t1_copy1_ParamLimits

0x23bc,	// (0x00049ee6) setting_slider_pane_t1_copy1

0x23db,	// (0x00049f05) setting_slider_pane_t2_copy1_ParamLimits

0x23db,	// (0x00049f05) setting_slider_pane_t2_copy1

0x23f5,	// (0x00049f1f) setting_slider_pane_t3_copy1_ParamLimits

0x23f5,	// (0x00049f1f) setting_slider_pane_t3_copy1

0x240d,	// (0x00049f37) slider_set_pane_copy1_ParamLimits

0x240d,	// (0x00049f37) slider_set_pane_copy1

0xad08,	// (0x00052832) set_opt_bg_pane_g1_copy2

0xad10,	// (0x0005283a) set_opt_bg_pane_g2_copy2

0x884f,	// (0x00050379) set_opt_bg_pane_g3_copy2

0xad20,	// (0x0005284a) set_opt_bg_pane_g4_copy2

0xad28,	// (0x00052852) set_opt_bg_pane_g5_copy2

0xad30,	// (0x0005285a) set_opt_bg_pane_g6_copy2

0x8859,	// (0x00050383) set_opt_bg_pane_g7_copy2

0x8863,	// (0x0005038d) set_opt_bg_pane_g8_copy2

0x886d,	// (0x00050397) set_opt_bg_pane_g9_copy2

0x2423,	// (0x00049f4d) aid_size_touch_slider_mark_copy1_ParamLimits

0x2423,	// (0x00049f4d) aid_size_touch_slider_mark_copy1

0x8877,	// (0x000503a1) slider_set_pane_g1_copy1

0x2437,	// (0x00049f61) slider_set_pane_g2_copy1

0x12a6,	// (0x00048dd0) slider_set_pane_g3_copy1_ParamLimits

0x12a6,	// (0x00048dd0) slider_set_pane_g3_copy1

0x12ba,	// (0x00048de4) slider_set_pane_g4_copy1_ParamLimits

0x12ba,	// (0x00048de4) slider_set_pane_g4_copy1

0x12d2,	// (0x00048dfc) slider_set_pane_g5_copy1_ParamLimits

0x12d2,	// (0x00048dfc) slider_set_pane_g5_copy1

0x12a6,	// (0x00048dd0) slider_set_pane_g6_copy1_ParamLimits

0x12a6,	// (0x00048dd0) slider_set_pane_g6_copy1

0x243f,	// (0x00049f69) slider_set_pane_g7_copy1_ParamLimits

0x243f,	// (0x00049f69) slider_set_pane_g7_copy1

0xa0d3,	// (0x00051bfd) bg_set_opt_pane_cp2_copy1

0x8880,	// (0x000503aa) setting_slider_graphic_pane_g1_copy1

0x8889,	// (0x000503b3) setting_slider_graphic_pane_t1_copy1

0x8899,	// (0x000503c3) setting_slider_graphic_pane_t2_copy1

0x88a9,	// (0x000503d3) slider_set_pane_cp_copy1

0x88b9,	// (0x000503e3) input_focus_pane_cp1_copy1

0x88c2,	// (0x000503ec) list_set_text_pane_copy1

0x88ca,	// (0x000503f4) setting_text_pane_g1_copy1

0xe2bb,	// (0x00055de5) set_text_pane_t1_copy1

0x88b9,	// (0x000503e3) input_focus_pane_cp2_copy1

0x88ca,	// (0x000503f4) setting_code_pane_g1_copy1

0x88d3,	// (0x000503fd) setting_code_pane_t1_copy1

0x4d93,	// (0x0004c8bd) list_set_graphic_pane_copy1

0xa0d3,	// (0x00051bfd) bg_set_opt_pane_cp4_copy1

0x26c7,	// (0x0004a1f1) list_set_graphic_pane_g1_copy1_ParamLimits

0x26c7,	// (0x0004a1f1) list_set_graphic_pane_g1_copy1

0x88e1,	// (0x0005040b) list_set_graphic_pane_g2_copy1

0x26df,	// (0x0004a209) list_set_graphic_pane_t1_copy1_ParamLimits

0x26df,	// (0x0004a209) list_set_graphic_pane_t1_copy1

0x585d,	// (0x0004d387) rs_clock_indi_pane_g1

0x88e9,	// (0x00050413) rs_clock_indi_pane_t1

0x88f7,	// (0x00050421) rs_indi_pane

0x88ff,	// (0x00050429) rs_indi_pane_g1

0x8908,	// (0x00050432) rs_indi_pane_g2

0x85f1,	// (0x0005011b) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x000579e9) rs_indi_pane_g

0x29cc,	// (0x0004a4f6) bg_popup_preview_window_pane_cp03

0x8911,	// (0x0005043b) popup_fep_tooltip_window_t1

0x653a,	// (0x0004e064) popup_note2_window_g2_ParamLimits

0x653a,	// (0x0004e064) popup_note2_window_g2

0x0001,

0xfc4c,	// (0x00057776) popup_note2_window_g_ParamLimits

0xfc4c,	// (0x00057776) popup_note2_window_g

0x6a42,	// (0x0004e56c) bg_popup_sub_pane_cp11_ParamLimits

0x6a4f,	// (0x0004e579) cell_ai3_links_pane_g1_ParamLimits

0x6a66,	// (0x0004e590) cell_ai3_links_pane_t1

0xe2bb,	// (0x00055de5) set_text_pane_t1_copy1_ParamLimits

0x28ce,	// (0x0004a3f8) cell_graphic_popup_pane_cp2_ParamLimits

0x28ce,	// (0x0004a3f8) cell_graphic_popup_pane_cp2

0x891f,	// (0x00050449) cell_graphic_popup_pane_g1_cp2

0xa9ac,	// (0x000524d6) cell_graphic_popup_pane_g2_cp2

0x8927,	// (0x00050451) cell_graphic_popup_pane_g3_cp2

0x892f,	// (0x00050459) cell_graphic_popup_pane_t2_cp2

0xa9bd,	// (0x000524e7) grid_highlight_pane_cp3_cp2

0xc592,	// (0x000540bc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xacb0,	// (0x000527da) main_tmo_pane_ParamLimits

0xd69d,	// (0x000551c7) popup_tmo_big_image_note_window

0xe666,	// (0x00056190) cell_ai5_widget_list_pane

0xe66e,	// (0x00056198) cell_ai5_widget_lrg_icon_pane

0xe9b1,	// (0x000564db) tmo_note_info_pane_t1_ParamLimits

0xe9c6,	// (0x000564f0) tmo_note_info_pane_t2_ParamLimits

0xe9df,	// (0x00056509) tmo_note_info_pane_t3_ParamLimits

0x856e,	// (0x00050098) tmo_note_info_pane_t4_ParamLimits

0x8580,	// (0x000500aa) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x000579d7) tmo_note_info_pane_t_ParamLimits

0x86aa,	// (0x000501d4) settings_container_pane_ParamLimits

0x88b1,	// (0x000503db) indicator_popup_pane_cp5

0x88b1,	// (0x000503db) indicator_popup_pane_cp6

0x4d93,	// (0x0004c8bd) list_set_graphic_pane_copy1_ParamLimits

0x9fd9,	// (0x00051b03) bg_popup_window_pane_cp23

0x893d,	// (0x00050467) popup_tmo_big_image_note_window_g1

0x8949,	// (0x00050473) popup_tmo_big_image_note_window_t1

0x8959,	// (0x00050483) popup_tmo_big_image_note_window_t2

0x8969,	// (0x00050493) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x000579f0) popup_tmo_big_image_note_window_t

0x585d,	// (0x0004d387) cell_ai5_widget_lrg_icon_pane_g1

0xea09,	// (0x00056533) cell_ai5_widget_lrg_icon_pane_t1

0xea17,	// (0x00056541) cell_ai5_widget_list_row_pane_ParamLimits

0xea17,	// (0x00056541) cell_ai5_widget_list_row_pane

0xea2f,	// (0x00056559) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xea2f,	// (0x00056559) cell_ai5_widget_list_row_pane_g1

0xea3c,	// (0x00056566) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xea3c,	// (0x00056566) cell_ai5_widget_list_row_pane_t1

0xea67,	// (0x00056591) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xea67,	// (0x00056591) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x000579f7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x000579f7) cell_ai5_widget_list_row_pane_t

0x9fd9,	// (0x00051b03) main_fep_vtchi_ss_pane

0x8a27,	// (0x00050551) popup_fep_char_pre_window

0x8a2f,	// (0x00050559) popup_fep_ituss_window

0xeab9,	// (0x000565e3) popup_fep_vkbss_window

0x2cf3,	// (0x0004a81d) grid_vkbss_keypad_pane_ParamLimits

0x2cf3,	// (0x0004a81d) grid_vkbss_keypad_pane

0x8a9d,	// (0x000505c7) ituss_keypad_pane

0x245f,	// (0x00049f89) aid_vkbss_key_offset_ParamLimits

0x245f,	// (0x00049f89) aid_vkbss_key_offset

0xc4cf,	// (0x00053ff9) cell_vkbss_key_pane_ParamLimits

0xc4cf,	// (0x00053ff9) cell_vkbss_key_pane

0x8aa9,	// (0x000505d3) bg_cell_vkbss_key_g1_ParamLimits

0x8aa9,	// (0x000505d3) bg_cell_vkbss_key_g1

0xeac8,	// (0x000565f2) cell_vkbss_key_3p_pane_ParamLimits

0xeac8,	// (0x000565f2) cell_vkbss_key_3p_pane

0xeafe,	// (0x00056628) cell_vkbss_key_g1_ParamLimits

0xeafe,	// (0x00056628) cell_vkbss_key_g1

0xeb34,	// (0x0005665e) cell_vkbss_key_t1_ParamLimits

0xeb34,	// (0x0005665e) cell_vkbss_key_t1

0x24cd,	// (0x00049ff7) cell_ituss_key_pane_ParamLimits

0x24cd,	// (0x00049ff7) cell_ituss_key_pane

0x8b7d,	// (0x000506a7) bg_cell_ituss_key_g1_ParamLimits

0x8b7d,	// (0x000506a7) bg_cell_ituss_key_g1

0x8b89,	// (0x000506b3) cell_ituss_key_pane_g1_ParamLimits

0x8b89,	// (0x000506b3) cell_ituss_key_pane_g1

0x24de,	// (0x0004a008) cell_ituss_key_pane_g2_ParamLimits

0x24de,	// (0x0004a008) cell_ituss_key_pane_g2

0x0005,

0xfed4,	// (0x000579fe) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x000579fe) cell_ituss_key_pane_g

0x2562,	// (0x0004a08c) cell_ituss_key_t1_ParamLimits

0x2562,	// (0x0004a08c) cell_ituss_key_t1

0x259c,	// (0x0004a0c6) cell_ituss_key_t2_ParamLimits

0x259c,	// (0x0004a0c6) cell_ituss_key_t2

0x25ce,	// (0x0004a0f8) cell_ituss_key_t3_ParamLimits

0x25ce,	// (0x0004a0f8) cell_ituss_key_t3

0x25ff,	// (0x0004a129) cell_ituss_key_t4_ParamLimits

0x25ff,	// (0x0004a129) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x00057a0b) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x00057a0b) cell_ituss_key_t

0xeb90,	// (0x000566ba) cell_vkbss_key_3p_pane_g1

0xeb98,	// (0x000566c2) cell_vkbss_key_3p_pane_g2

0xeba0,	// (0x000566ca) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x00057a16) cell_vkbss_key_3p_pane_g

0x29cc,	// (0x0004a4f6) bg_popup_fep_char_preview_window_cp02

0x8bc7,	// (0x000506f1) popup_fep_char_pre_window_t1

0xe645,	// (0x0005616f) main_ai5_sk_pane

0x85fa,	// (0x00050124) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe9f4,	// (0x0005651e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x861b,	// (0x00050145) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8627,	// (0x00050151) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x000579e2) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8633,	// (0x0005015d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xacb0,	// (0x000527da) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeba8,	// (0x000566d2) main_ai5_sk_pane_g1

0x36c7,	// (0x0004b1f1) popup_query_code_window_g1

0xeaaa,	// (0x000565d4) popup_fep_vkb_icf_pane

0x8a74,	// (0x0005059e) popup_fep_vtchi_icf_pane

0x8bde,	// (0x00050708) bg_icf_pane

0x8bde,	// (0x00050708) list_vkb_icf_pane

0x8bea,	// (0x00050714) bg_icf_pane_cp01

0x8bfd,	// (0x00050727) vtchi_icf_list_pane

0xebfd,	// (0x00056727) list_vkb_icf_pane_t1_ParamLimits

0xebfd,	// (0x00056727) list_vkb_icf_pane_t1

0x8c76,	// (0x000507a0) vtchi_icf_list_pane_t1_ParamLimits

0x8c76,	// (0x000507a0) vtchi_icf_list_pane_t1

0x8a2f,	// (0x00050559) popup_fep_ituss_window_ParamLimits

0x8a74,	// (0x0005059e) popup_fep_vtchi_icf_pane_ParamLimits

0x8a9d,	// (0x000505c7) ituss_keypad_pane_ParamLimits

0x2455,	// (0x00049f7f) ituss_sks_pane

0x8bde,	// (0x00050708) bg_icf_pane_ParamLimits

0xea8f,	// (0x000565b9) icf_edit_indi_pane_ParamLimits

0xea8f,	// (0x000565b9) icf_edit_indi_pane

0x8bde,	// (0x00050708) list_vkb_icf_pane_ParamLimits

0x8bea,	// (0x00050714) bg_icf_pane_cp01_ParamLimits

0x8a1a,	// (0x00050544) icf_edit_indi_pane_cp01_ParamLimits

0x8a1a,	// (0x00050544) icf_edit_indi_pane_cp01

0x8bfd,	// (0x00050727) vtchi_query_pane

0x7d7e,	// (0x0004f8a8) icf_edit_indi_pane_g1_ParamLimits

0x7d7e,	// (0x0004f8a8) icf_edit_indi_pane_g1

0xec14,	// (0x0005673e) icf_edit_indi_pane_g2_ParamLimits

0xec14,	// (0x0005673e) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00057a41) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00057a41) icf_edit_indi_pane_g

0xec28,	// (0x00056752) icf_edit_indi_pane_t1

0x8c8f,	// (0x000507b9) bg_input_focus_pane_cp042

0xab90,	// (0x000526ba) vtchi_button_pane

0x8c98,	// (0x000507c2) vtchi_query_pane_t1

0x8ca6,	// (0x000507d0) vtchi_query_pane_t2

0x8cb4,	// (0x000507de) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00057a30) vtchi_query_pane_t

0x9fd9,	// (0x00051b03) bg_button_pane_cp13

0x8cc2,	// (0x000507ec) vtchi_button_pane_g1

0x2642,	// (0x0004a16c) ituss_sks_pane_g1

0x264d,	// (0x0004a177) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00057a37) ituss_sks_pane_g

0x8cca,	// (0x000507f4) ituss_sks_pane_t1

0x8cd8,	// (0x00050802) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00057a3c) ituss_sks_pane_t

0x5331,	// (0x0004ce5b) indicator_nsta_pane_cp_g1

0x533a,	// (0x0004ce64) indicator_nsta_pane_cp_g2

0x5342,	// (0x0004ce6c) indicator_nsta_pane_cp_g3

0x534a,	// (0x0004ce74) indicator_nsta_pane_cp_g4

0x533a,	// (0x0004ce64) indicator_nsta_pane_cp_g5

0x5342,	// (0x0004ce6c) indicator_nsta_pane_cp_g6

0x0005,

0xfa96,	// (0x000575c0) indicator_nsta_pane_cp_g

0xe0c3,	// (0x00055bed) cell_graphic2_pane_t2_ParamLimits

0xe0c3,	// (0x00055bed) cell_graphic2_pane_t2

0x0001,

0xfda3,	// (0x000578cd) cell_graphic2_pane_t_ParamLimits

0xfda3,	// (0x000578cd) cell_graphic2_pane_t

0xe0fb,	// (0x00055c25) cell_graphic2_control_pane_t1

0xb1d2,	// (0x00052cfc) signal_pane_g3_ParamLimits

0xb1d2,	// (0x00052cfc) signal_pane_g3

0xb1e6,	// (0x00052d10) signal_pane_g4_ParamLimits

0xb1e6,	// (0x00052d10) signal_pane_g4

0xea79,	// (0x000565a3) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xea79,	// (0x000565a3) cell_ai5_widget_list_row_pane_t3

0x8b9d,	// (0x000506c7) cell_ituss_key_pane_t1_ParamLimits

0x8b9d,	// (0x000506c7) cell_ituss_key_pane_t1

0x332e,	// (0x0004ae58) form_field_data_wide_pane_vc_t2_ParamLimits

0x332e,	// (0x0004ae58) form_field_data_wide_pane_vc_t2

0x3342,	// (0x0004ae6c) form_field_data_wide_pane_vc_t3_ParamLimits

0x3342,	// (0x0004ae6c) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0005730e) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005730e) form_field_data_wide_pane_vc_t

0x4fce,	// (0x0004caf8) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4fce,	// (0x0004caf8) form_field_slider_wide_pane_vc_t3

0x50a4,	// (0x0004cbce) form_field_popup_wide_pane_vc_t2_ParamLimits

0x50a4,	// (0x0004cbce) form_field_popup_wide_pane_vc_t2

0x50bb,	// (0x0004cbe5) form_field_popup_wide_pane_vc_t3_ParamLimits

0x50bb,	// (0x0004cbe5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa85,	// (0x000575af) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x000575af) form_field_popup_wide_pane_vc_t

0xc332,	// (0x00053e5c) aid_fshwr2_btn_pane_ParamLimits

0xc346,	// (0x00053e70) aid_fshwr2_syb_pane_ParamLimits

0xc35a,	// (0x00053e84) aid_fshwr2_txt_pane_ParamLimits

0xacb0,	// (0x000527da) fshwr2_bg_pane_ParamLimits

0xc36a,	// (0x00053e94) fshwr2_func_candi_pane_ParamLimits

0xc38c,	// (0x00053eb6) fshwr2_hwr_syb_pane_ParamLimits

0xc3b0,	// (0x00053eda) fshwr2_icf_pane_ParamLimits

0x14a8,	// (0x00048fd2) list_double_graphic_pane_vc_g4_ParamLimits

0x14a8,	// (0x00048fd2) list_double_graphic_pane_vc_g4

0x24fe,	// (0x0004a028) cell_ituss_key_pane_g3_ParamLimits

0x24fe,	// (0x0004a028) cell_ituss_key_pane_g3

0x2630,	// (0x0004a15a) cell_ituss_key_t5_ParamLimits

0x2630,	// (0x0004a15a) cell_ituss_key_t5

0xeab9,	// (0x000565e3) popup_fep_vkbss_window_ParamLimits

0xe64f,	// (0x00056179) aid_cell_ai5_quarter

0xec28,	// (0x00056752) icf_edit_indi_pane_t1_ParamLimits

0xa6eb,	// (0x00052215) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xa6eb,	// (0x00052215) aid_tch_indicator_popup_pane_cp2

0xa6fe,	// (0x00052228) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xa6fe,	// (0x00052228) aid_tch_query_popup_data_pane_cp2

0x366f,	// (0x0004b199) aid_tch_query_popup_pane_ParamLimits

0x366f,	// (0x0004b199) aid_tch_query_popup_pane

0x366f,	// (0x0004b199) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x366f,	// (0x0004b199) aid_tch_query_popup_data_pane_cp1

0x2cf3,	// (0x0004a81d) cell_fshwr2_syb_bg_pane_ParamLimits

0xc4a5,	// (0x00053fcf) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc4b9,	// (0x00053fe3) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeaaa,	// (0x000565d4) popup_fep_vkb_icf_pane_ParamLimits

0xc2c6,	// (0x00053df0) bg_popup_fep_char_preview_window_g10

0xe72e,	// (0x00056258) cell_ai5_widget_pane_g11_ParamLimits

0xe72e,	// (0x00056258) cell_ai5_widget_pane_g11

0xe73a,	// (0x00056264) cell_ai5_widget_pane_g12_ParamLimits

0xe73a,	// (0x00056264) cell_ai5_widget_pane_g12

0xe746,	// (0x00056270) cell_ai5_widget_pane_g13_ParamLimits

0xe746,	// (0x00056270) cell_ai5_widget_pane_g13

0xe845,	// (0x0005636f) cell_ai5_widget_pane_t11_ParamLimits

0xe845,	// (0x0005636f) cell_ai5_widget_pane_t11

0xe857,	// (0x00056381) cell_ai5_widget_pane_t12_ParamLimits

0xe857,	// (0x00056381) cell_ai5_widget_pane_t12

0x250a,	// (0x0004a034) cell_ituss_key_pane_g4_ParamLimits

0x250a,	// (0x0004a034) cell_ituss_key_pane_g4

0x2526,	// (0x0004a050) cell_ituss_key_pane_g5_ParamLimits

0x2526,	// (0x0004a050) cell_ituss_key_pane_g5

0x2542,	// (0x0004a06c) cell_ituss_key_pane_g6_ParamLimits

0x2542,	// (0x0004a06c) cell_ituss_key_pane_g6

0x3229,	// (0x0004ad53) bg_icf_pane_g1

0xebb1,	// (0x000566db) bg_icf_pane_g2

0xebbb,	// (0x000566e5) bg_icf_pane_g3

0xebc3,	// (0x000566ed) bg_icf_pane_g4

0xebcd,	// (0x000566f7) bg_icf_pane_g5

0xebd7,	// (0x00056701) bg_icf_pane_g6

0xebe1,	// (0x0005670b) bg_icf_pane_g7

0xebe9,	// (0x00056713) bg_icf_pane_g8

0xebf3,	// (0x0005671d) bg_icf_pane_g9

0x0008,

0xfef3,	// (0x00057a1d) bg_icf_pane_g

0x8a8a,	// (0x000505b4) popup_hyb_candi_window_ParamLimits

0x8a8a,	// (0x000505b4) popup_hyb_candi_window

0x329d,	// (0x0004adc7) bg_popup_sub_pane_cp01_ParamLimits

0x329d,	// (0x0004adc7) bg_popup_sub_pane_cp01

0x8d13,	// (0x0005083d) entry_hyb_candi_pane_ParamLimits

0x8d13,	// (0x0005083d) entry_hyb_candi_pane

0x8d22,	// (0x0005084c) grid_hyb_candi_pane_ParamLimits

0x8d22,	// (0x0005084c) grid_hyb_candi_pane

0x8d37,	// (0x00050861) grid_hyb_phrase_pane_ParamLimits

0x8d37,	// (0x00050861) grid_hyb_phrase_pane

0x8d46,	// (0x00050870) cell_hyb_candi_pane_ParamLimits

0x8d46,	// (0x00050870) cell_hyb_candi_pane

0xab99,	// (0x000526c3) cell_hyb_candi_scroll_pane

0xe481,	// (0x00055fab) cell_hyb_candi_pane_g1

0x8d62,	// (0x0005088c) cell_hyb_candi_pane_t1

0x8d70,	// (0x0005089a) cell_hyb_phrase_pane

0xe481,	// (0x00055fab) cell_hyb_phrase_pane_g1

0x8d79,	// (0x000508a3) cell_hyb_phrase_pane_t1

0x8d87,	// (0x000508b1) entry_hyb_candi_pane_t1

0x29cc,	// (0x0004a4f6) input_focus_pane_cp06

0x8d95,	// (0x000508bf) cell_hyb_candi_scroll_pane_g1

0x8d9d,	// (0x000508c7) cell_hyb_candi_scroll_pane_g1_aid

0x8da5,	// (0x000508cf) cell_hyb_candi_scroll_pane_g2

0x8dad,	// (0x000508d7) cell_hyb_candi_scroll_pane_g2_aid

0x8db5,	// (0x000508df) cell_hyb_candi_scroll_pane_g3

0x8dbd,	// (0x000508e7) cell_hyb_candi_scroll_pane_g4
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
