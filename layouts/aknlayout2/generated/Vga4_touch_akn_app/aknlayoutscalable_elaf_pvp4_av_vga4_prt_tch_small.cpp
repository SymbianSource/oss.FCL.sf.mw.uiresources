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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001f2f6 };

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
0x60d2,	// (0x000253c8) Screen

0x60de,	// (0x000253d4) application_window_ParamLimits

0x60de,	// (0x000253d4) application_window

0x1225,	// (0x0002051b) screen_g1

0x613a,	// (0x00025430) area_bottom_pane_ParamLimits

0x613a,	// (0x00025430) area_bottom_pane

0x61fa,	// (0x000254f0) area_top_pane_ParamLimits

0x61fa,	// (0x000254f0) area_top_pane

0x628e,	// (0x00025584) main_pane_ParamLimits

0x628e,	// (0x00025584) main_pane

0x122f,	// (0x00020525) misc_graphics

0x7e68,	// (0x0002715e) battery_pane_ParamLimits

0x7e68,	// (0x0002715e) battery_pane

0x9ef6,	// (0x000291ec) bg_status_flat_pane_g8

0x9efe,	// (0x000291f4) bg_status_flat_pane_g9

0x7f2a,	// (0x00027220) context_pane_ParamLimits

0x7f2a,	// (0x00027220) context_pane

0x804e,	// (0x00027344) navi_pane_ParamLimits

0x804e,	// (0x00027344) navi_pane

0x80de,	// (0x000273d4) signal_pane_ParamLimits

0x80de,	// (0x000273d4) signal_pane

0x0008,

0xf874,	// (0x0002eb6a) bg_status_flat_pane_g

0x814b,	// (0x00027441) status_pane_g1_ParamLimits

0x814b,	// (0x00027441) status_pane_g1

0x8157,	// (0x0002744d) status_pane_g2_ParamLimits

0x8157,	// (0x0002744d) status_pane_g2

0x8163,	// (0x00027459) status_pane_g3_ParamLimits

0x8163,	// (0x00027459) status_pane_g3

0x0004,

0xf79b,	// (0x0002ea91) status_pane_g_ParamLimits

0xf79b,	// (0x0002ea91) status_pane_g

0x8197,	// (0x0002748d) title_pane_ParamLimits

0x8197,	// (0x0002748d) title_pane

0x81d6,	// (0x000274cc) uni_indicator_pane_ParamLimits

0x81d6,	// (0x000274cc) uni_indicator_pane

0x7761,	// (0x00026a57) bg_list_pane_ParamLimits

0x7761,	// (0x00026a57) bg_list_pane

0x7781,	// (0x00026a77) find_pane

0x7789,	// (0x00026a7f) listscroll_app_pane_ParamLimits

0x7789,	// (0x00026a7f) listscroll_app_pane

0x7795,	// (0x00026a8b) listscroll_form_pane

0x779d,	// (0x00026a93) listscroll_gen_pane_ParamLimits

0x779d,	// (0x00026a93) listscroll_gen_pane

0x77b1,	// (0x00026aa7) listscroll_set_pane

0x68f5,	// (0x00025beb) main_idle_act_pane

0x7233,	// (0x00026529) main_idle_trad_pane

0x7233,	// (0x00026529) main_list_empty_pane

0x7789,	// (0x00026a7f) main_midp_pane

0x77cb,	// (0x00026ac1) main_pane_g1_ParamLimits

0x77cb,	// (0x00026ac1) main_pane_g1

0x77d9,	// (0x00026acf) popup_ai_message_window_ParamLimits

0x77d9,	// (0x00026acf) popup_ai_message_window

0x788d,	// (0x00026b83) popup_fep_china_uni_window_ParamLimits

0x788d,	// (0x00026b83) popup_fep_china_uni_window

0x78ed,	// (0x00026be3) popup_fep_japan_candidate_window_ParamLimits

0x78ed,	// (0x00026be3) popup_fep_japan_candidate_window

0x7917,	// (0x00026c0d) popup_fep_japan_predictive_window_ParamLimits

0x7917,	// (0x00026c0d) popup_fep_japan_predictive_window

0x794d,	// (0x00026c43) popup_find_window

0x795a,	// (0x00026c50) popup_grid_graphic_window_ParamLimits

0x795a,	// (0x00026c50) popup_grid_graphic_window

0x7988,	// (0x00026c7e) popup_large_graphic_colour_window

0x79ae,	// (0x00026ca4) popup_menu_window_ParamLimits

0x79ae,	// (0x00026ca4) popup_menu_window

0x7b78,	// (0x00026e6e) popup_note_image_window

0x7b62,	// (0x00026e58) popup_note_wait_window_ParamLimits

0x7b62,	// (0x00026e58) popup_note_wait_window

0x7b62,	// (0x00026e58) popup_note_window_ParamLimits

0x7b62,	// (0x00026e58) popup_note_window

0x7bde,	// (0x00026ed4) popup_query_code_window_ParamLimits

0x7bde,	// (0x00026ed4) popup_query_code_window

0x7bf4,	// (0x00026eea) popup_query_data_code_window_ParamLimits

0x7bf4,	// (0x00026eea) popup_query_data_code_window

0x7c17,	// (0x00026f0d) popup_query_data_window_ParamLimits

0x7c17,	// (0x00026f0d) popup_query_data_window

0x7c39,	// (0x00026f2f) popup_query_sat_info_window_ParamLimits

0x7c39,	// (0x00026f2f) popup_query_sat_info_window

0x7c78,	// (0x00026f6e) popup_snote_single_graphic_window_ParamLimits

0x7c78,	// (0x00026f6e) popup_snote_single_graphic_window

0x7c78,	// (0x00026f6e) popup_snote_single_text_window_ParamLimits

0x7c78,	// (0x00026f6e) popup_snote_single_text_window

0x7c8f,	// (0x00026f85) popup_sub_window_general

0x7dd5,	// (0x000270cb) popup_window_general_ParamLimits

0x7dd5,	// (0x000270cb) popup_window_general

0x7dee,	// (0x000270e4) power_save_pane

0x75a6,	// (0x0002689c) control_pane_g1_ParamLimits

0x75a6,	// (0x0002689c) control_pane_g1

0x75cf,	// (0x000268c5) control_pane_g2_ParamLimits

0x75cf,	// (0x000268c5) control_pane_g2

0x75f8,	// (0x000268ee) control_pane_g3_ParamLimits

0x75f8,	// (0x000268ee) control_pane_g3

0x0007,

0xf783,	// (0x0002ea79) control_pane_g_ParamLimits

0xf783,	// (0x0002ea79) control_pane_g

0x7650,	// (0x00026946) control_pane_t1_ParamLimits

0x7650,	// (0x00026946) control_pane_t1

0x76aa,	// (0x000269a0) control_pane_t2_ParamLimits

0x76aa,	// (0x000269a0) control_pane_t2

0x0002,

0xf794,	// (0x0002ea8a) control_pane_t_ParamLimits

0xf794,	// (0x0002ea8a) control_pane_t

0x74cb,	// (0x000267c1) navi_navi_volume_pane_cp1

0x74d3,	// (0x000267c9) status_small_icon_pane

0x74db,	// (0x000267d1) status_small_pane_g1_ParamLimits

0x74db,	// (0x000267d1) status_small_pane_g1

0x750f,	// (0x00026805) status_small_pane_g2_ParamLimits

0x750f,	// (0x00026805) status_small_pane_g2

0x751b,	// (0x00026811) status_small_pane_g3_ParamLimits

0x751b,	// (0x00026811) status_small_pane_g3

0x7527,	// (0x0002681d) status_small_pane_g4_ParamLimits

0x7527,	// (0x0002681d) status_small_pane_g4

0x7533,	// (0x00026829) status_small_pane_g5_ParamLimits

0x7533,	// (0x00026829) status_small_pane_g5

0x7541,	// (0x00026837) status_small_pane_g6_ParamLimits

0x7541,	// (0x00026837) status_small_pane_g6

0x0007,

0xf772,	// (0x0002ea68) status_small_pane_g_ParamLimits

0xf772,	// (0x0002ea68) status_small_pane_g

0x7570,	// (0x00026866) status_small_pane_t1

0x7592,	// (0x00026888) status_small_wait_pane_ParamLimits

0x7592,	// (0x00026888) status_small_wait_pane

0x6c81,	// (0x00025f77) aid_levels_signal_ParamLimits

0x6c81,	// (0x00025f77) aid_levels_signal

0x6c90,	// (0x00025f86) signal_pane_g1_ParamLimits

0x6c90,	// (0x00025f86) signal_pane_g1

0x6ca5,	// (0x00025f9b) signal_pane_g2_ParamLimits

0x6ca5,	// (0x00025f9b) signal_pane_g2

0x0003,

0xf703,	// (0x0002e9f9) signal_pane_g_ParamLimits

0xf703,	// (0x0002e9f9) signal_pane_g

0x349c,	// (0x00022792) context_pane_g1

0x64ed,	// (0x000257e3) title_pane_g1

0x651f,	// (0x00025815) title_pane_t1

0x1245,	// (0x0002053b) title_pane_t2

0x126b,	// (0x00020561) title_pane_t3

0x0002,

0xf557,	// (0x0002e84d) title_pane_t

0x81ee,	// (0x000274e4) aid_levels_battery_ParamLimits

0x81ee,	// (0x000274e4) aid_levels_battery

0x81ff,	// (0x000274f5) battery_pane_g1_ParamLimits

0x81ff,	// (0x000274f5) battery_pane_g1

0x8215,	// (0x0002750b) battery_pane_g2_ParamLimits

0x8215,	// (0x0002750b) battery_pane_g2

0x0001,

0xf7a6,	// (0x0002ea9c) battery_pane_g_ParamLimits

0xf7a6,	// (0x0002ea9c) battery_pane_g

0xa840,	// (0x00029b36) uni_indicator_pane_g1

0xa853,	// (0x00029b49) uni_indicator_pane_g2

0xa865,	// (0x00029b5b) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0002ec12) uni_indicator_pane_g

0x70ad,	// (0x000263a3) navi_icon_pane_ParamLimits

0x70ad,	// (0x000263a3) navi_icon_pane

0x6fe9,	// (0x000262df) navi_midp_pane

0x70c9,	// (0x000263bf) navi_navi_pane

0x70d3,	// (0x000263c9) navi_text_pane_ParamLimits

0x70d3,	// (0x000263c9) navi_text_pane

0x1225,	// (0x0002051b) status_small_wait_pane_g1

0x15a6,	// (0x0002089c) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0002ec0d) status_small_wait_pane_g

0xa553,	// (0x00029849) navi_navi_icon_text_pane

0xa55b,	// (0x00029851) navi_navi_pane_g1_ParamLimits

0xa55b,	// (0x00029851) navi_navi_pane_g1

0xa56d,	// (0x00029863) navi_navi_pane_g2_ParamLimits

0xa56d,	// (0x00029863) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0002ebdb) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0002ebdb) navi_navi_pane_g

0xa57f,	// (0x00029875) navi_navi_tabs_pane

0xa588,	// (0x0002987e) navi_navi_text_pane

0xa553,	// (0x00029849) navi_navi_volume_pane

0xa52f,	// (0x00029825) navi_text_pane_t1

0xa523,	// (0x00029819) navi_icon_pane_g1

0xa476,	// (0x0002976c) navi_navi_text_pane_t1

0x859a,	// (0x00027890) navi_navi_volume_pane_g1

0x85a2,	// (0x00027898) volume_small_pane

0xa3dc,	// (0x000296d2) navi_navi_icon_text_pane_g1

0xa3e4,	// (0x000296da) navi_navi_icon_text_pane_t1

0x70c9,	// (0x000263bf) navi_tabs_2_long_pane

0x70c9,	// (0x000263bf) navi_tabs_2_pane

0x70c9,	// (0x000263bf) navi_tabs_3_long_pane

0x70c9,	// (0x000263bf) navi_tabs_3_pane

0x70c9,	// (0x000263bf) navi_tabs_4_pane

0x857a,	// (0x00027870) tabs_2_active_pane_ParamLimits

0x857a,	// (0x00027870) tabs_2_active_pane

0x858a,	// (0x00027880) tabs_2_passive_pane_ParamLimits

0x858a,	// (0x00027880) tabs_2_passive_pane

0x8548,	// (0x0002783e) tabs_3_active_pane_ParamLimits

0x8548,	// (0x0002783e) tabs_3_active_pane

0x8558,	// (0x0002784e) tabs_3_passive_pane_ParamLimits

0x8558,	// (0x0002784e) tabs_3_passive_pane

0x8569,	// (0x0002785f) tabs_3_passive_pane_cp_ParamLimits

0x8569,	// (0x0002785f) tabs_3_passive_pane_cp

0x84fc,	// (0x000277f2) tabs_4_active_pane_ParamLimits

0x84fc,	// (0x000277f2) tabs_4_active_pane

0x850f,	// (0x00027805) tabs_4_passive_pane_ParamLimits

0x850f,	// (0x00027805) tabs_4_passive_pane

0x8520,	// (0x00027816) tabs_4_passive_pane_cp_ParamLimits

0x8520,	// (0x00027816) tabs_4_passive_pane_cp

0x8531,	// (0x00027827) tabs_4_passive_pane_cp2_ParamLimits

0x8531,	// (0x00027827) tabs_4_passive_pane_cp2

0x84d8,	// (0x000277ce) tabs_2_long_active_pane_ParamLimits

0x84d8,	// (0x000277ce) tabs_2_long_active_pane

0x84ea,	// (0x000277e0) tabs_2_long_passive_pane_ParamLimits

0x84ea,	// (0x000277e0) tabs_2_long_passive_pane

0x8499,	// (0x0002778f) tabs_3_long_active_pane_ParamLimits

0x8499,	// (0x0002778f) tabs_3_long_active_pane

0x84ac,	// (0x000277a2) tabs_3_long_passive_pane_ParamLimits

0x84ac,	// (0x000277a2) tabs_3_long_passive_pane

0x84c5,	// (0x000277bb) tabs_3_long_passive_pane_cp_ParamLimits

0x84c5,	// (0x000277bb) tabs_3_long_passive_pane_cp

0x843f,	// (0x00027735) volume_small_pane_g1

0x8448,	// (0x0002773e) volume_small_pane_g2

0x8451,	// (0x00027747) volume_small_pane_g3

0x845a,	// (0x00027750) volume_small_pane_g4

0x8463,	// (0x00027759) volume_small_pane_g5

0x846c,	// (0x00027762) volume_small_pane_g6

0x8475,	// (0x0002776b) volume_small_pane_g7

0x847e,	// (0x00027774) volume_small_pane_g8

0x8487,	// (0x0002777d) volume_small_pane_g9

0x8490,	// (0x00027786) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0002eba7) volume_small_pane_g

0x128b,	// (0x00020581) bg_active_tab_pane_cp2_ParamLimits

0x128b,	// (0x00020581) bg_active_tab_pane_cp2

0x6587,	// (0x0002587d) tabs_3_active_pane_g1

0x658f,	// (0x00025885) tabs_3_active_pane_t1

0x128b,	// (0x00020581) bg_passive_tab_pane_cp2_ParamLimits

0x128b,	// (0x00020581) bg_passive_tab_pane_cp2

0x6587,	// (0x0002587d) tabs_3_passive_pane_g1

0x658f,	// (0x00025885) tabs_3_passive_pane_t1

0x128b,	// (0x00020581) bg_active_tab_pane_cp3_ParamLimits

0x128b,	// (0x00020581) bg_active_tab_pane_cp3

0x65a1,	// (0x00025897) tabs_4_active_pane_g1

0x65a9,	// (0x0002589f) tabs_4_active_pane_t1

0x128b,	// (0x00020581) bg_passive_tab_pane_cp3_ParamLimits

0x128b,	// (0x00020581) bg_passive_tab_pane_cp3

0x65a1,	// (0x00025897) tabs_4_1_passive_pane_g1

0x65a9,	// (0x0002589f) tabs_4_1_passive_pane_t1

0x7789,	// (0x00026a7f) list_highlight_pane_cp2

0xaaae,	// (0x00029da4) list_set_pane_ParamLimits

0xaaae,	// (0x00029da4) list_set_pane

0xab70,	// (0x00029e66) main_pane_set_t1_ParamLimits

0xab70,	// (0x00029e66) main_pane_set_t1

0xab90,	// (0x00029e86) main_pane_set_t2_ParamLimits

0xab90,	// (0x00029e86) main_pane_set_t2

0xaba4,	// (0x00029e9a) main_pane_set_t3_ParamLimits

0xaba4,	// (0x00029e9a) main_pane_set_t3

0xabb8,	// (0x00029eae) main_pane_set_t4_ParamLimits

0xabb8,	// (0x00029eae) main_pane_set_t4

0x0003,

0xf981,	// (0x0002ec77) main_pane_set_t_ParamLimits

0xf981,	// (0x0002ec77) main_pane_set_t

0xabcc,	// (0x00029ec2) setting_code_pane

0xabd6,	// (0x00029ecc) setting_slider_graphic_pane

0xabd6,	// (0x00029ecc) setting_slider_pane

0xabd6,	// (0x00029ecc) setting_text_pane

0xabd6,	// (0x00029ecc) setting_volume_pane

0x65bb,	// (0x000258b1) volume_set_pane

0x128b,	// (0x00020581) bg_set_opt_pane_cp

0x65c5,	// (0x000258bb) setting_slider_pane_t1

0x65de,	// (0x000258d4) setting_slider_pane_t2

0x65f8,	// (0x000258ee) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e854) setting_slider_pane_t

0x6610,	// (0x00025906) slider_set_pane

0x122f,	// (0x00020525) bg_set_opt_pane_cp2

0x1299,	// (0x0002058f) setting_slider_graphic_pane_g1

0x6626,	// (0x0002591c) setting_slider_graphic_pane_t1

0x6636,	// (0x0002592c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e85b) setting_slider_graphic_pane_t

0x6646,	// (0x0002593c) slider_set_pane_cp

0x122f,	// (0x00020525) input_focus_pane_cp1

0xaa6f,	// (0x00029d65) list_set_text_pane

0x1225,	// (0x0002051b) setting_text_pane_g1

0x122f,	// (0x00020525) input_focus_pane_cp2

0x1225,	// (0x0002051b) setting_code_pane_g1

0x12a2,	// (0x00020598) setting_code_pane_t1

0x4fd2,	// (0x000242c8) set_text_pane_t1_ParamLimits

0x4fd2,	// (0x000242c8) set_text_pane_t1

0x1a18,	// (0x00020d0e) set_opt_bg_pane_g1

0x1a20,	// (0x00020d16) set_opt_bg_pane_g2

0xaa47,	// (0x00029d3d) set_opt_bg_pane_g3

0x1a30,	// (0x00020d26) set_opt_bg_pane_g4

0x1a38,	// (0x00020d2e) set_opt_bg_pane_g5

0x1a40,	// (0x00020d36) set_opt_bg_pane_g6

0xaa51,	// (0x00029d47) set_opt_bg_pane_g7

0xaa5b,	// (0x00029d51) set_opt_bg_pane_g8

0xaa65,	// (0x00029d5b) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0002ec64) set_opt_bg_pane_g

0xaa3a,	// (0x00029d30) slider_set_pane_g1

0x8623,	// (0x00027919) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0002ec55) slider_set_pane_g

0x85ab,	// (0x000278a1) volume_set_pane_g1

0x85b5,	// (0x000278ab) volume_set_pane_g2

0x85bf,	// (0x000278b5) volume_set_pane_g3

0x85c9,	// (0x000278bf) volume_set_pane_g4

0x85d3,	// (0x000278c9) volume_set_pane_g5

0x85dd,	// (0x000278d3) volume_set_pane_g6

0x85e7,	// (0x000278dd) volume_set_pane_g7

0x85f1,	// (0x000278e7) volume_set_pane_g8

0x85fb,	// (0x000278f1) volume_set_pane_g9

0x8605,	// (0x000278fb) volume_set_pane_g10

0x0009,

0xf937,	// (0x0002ec2d) volume_set_pane_g

0x664e,	// (0x00025944) indicator_pane_ParamLimits

0x664e,	// (0x00025944) indicator_pane

0x665a,	// (0x00025950) main_idle_pane_g2_ParamLimits

0x665a,	// (0x00025950) main_idle_pane_g2

0x6682,	// (0x00025978) main_pane_idle_g1_ParamLimits

0x6682,	// (0x00025978) main_pane_idle_g1

0x12ca,	// (0x000205c0) popup_clock_digital_analogue_window_ParamLimits

0x12ca,	// (0x000205c0) popup_clock_digital_analogue_window

0x6690,	// (0x00025986) soft_indicator_pane_ParamLimits

0x6690,	// (0x00025986) soft_indicator_pane

0x669e,	// (0x00025994) wallpaper_pane_ParamLimits

0x669e,	// (0x00025994) wallpaper_pane

0x1225,	// (0x0002051b) wallpaper_pane_g1

0x66aa,	// (0x000259a0) indicator_pane_g1_ParamLimits

0x66aa,	// (0x000259a0) indicator_pane_g1

0xaec6,	// (0x0002a1bc) navi_navi_icon_text_pane_srt_g1

0x12f8,	// (0x000205ee) soft_indicator_pane_t1

0x1312,	// (0x00020608) aid_ps_area_pane

0x66b6,	// (0x000259ac) aid_ps_clock_pane

0x1323,	// (0x00020619) aid_ps_indicator_pane

0x132f,	// (0x00020625) indicator_ps_pane_ParamLimits

0x132f,	// (0x00020625) indicator_ps_pane

0x133e,	// (0x00020634) power_save_pane_g1_ParamLimits

0x133e,	// (0x00020634) power_save_pane_g1

0x134a,	// (0x00020640) power_save_pane_g2_ParamLimits

0x134a,	// (0x00020640) power_save_pane_g2

0x60ee,	// (0x000253e4) aid_navinavi_width_pane

0x1312,	// (0x00020608) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e860) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e860) power_save_pane_g

0x1358,	// (0x0002064e) power_save_pane_t1_ParamLimits

0x1358,	// (0x0002064e) power_save_pane_t1

0x66b6,	// (0x000259ac) aid_ps_clock_pane_ParamLimits

0x1323,	// (0x00020619) aid_ps_indicator_pane_ParamLimits

0x136a,	// (0x00020660) power_save_pane_t4_ParamLimits

0x136a,	// (0x00020660) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e865) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e865) power_save_pane_t

0x1394,	// (0x0002068a) power_save_t3_ParamLimits

0x1394,	// (0x0002068a) power_save_t3

0x137f,	// (0x00020675) power_save_t2_ParamLimits

0x137f,	// (0x00020675) power_save_t2

0x13a9,	// (0x0002069f) indicator_ps_pane_g1

0x66c4,	// (0x000259ba) ai_gene_pane_ParamLimits

0x66c4,	// (0x000259ba) ai_gene_pane

0x66d0,	// (0x000259c6) ai_links_pane_ParamLimits

0x66d0,	// (0x000259c6) ai_links_pane

0x66dc,	// (0x000259d2) indicator_pane_cp1_ParamLimits

0x66dc,	// (0x000259d2) indicator_pane_cp1

0x66e8,	// (0x000259de) main_pane_idle_g1_cp_ParamLimits

0x66e8,	// (0x000259de) main_pane_idle_g1_cp

0x13b2,	// (0x000206a8) popup_ai_links_title_window

0x66f4,	// (0x000259ea) soft_indicator_pane_cp1_ParamLimits

0x66f4,	// (0x000259ea) soft_indicator_pane_cp1

0xa82e,	// (0x00029b24) ai_links_pane_g1

0xa837,	// (0x00029b2d) grid_ai_links_pane

0xa813,	// (0x00029b09) ai_gene_pane_1

0xa81c,	// (0x00029b12) ai_gene_pane_2

0xa825,	// (0x00029b1b) list_highlight_pane_cp4

0xa7f3,	// (0x00029ae9) cell_ai_link_pane_ParamLimits

0xa7f3,	// (0x00029ae9) cell_ai_link_pane

0xa7eb,	// (0x00029ae1) cell_ai_link_pane_g1

0x15a6,	// (0x0002089c) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0002ec08) cell_ai_link_pane_g

0x122f,	// (0x00020525) grid_highlight_cp2

0x122f,	// (0x00020525) bg_popup_sub_pane_cp1

0x13c9,	// (0x000206bf) popup_ai_links_title_window_t1

0xa737,	// (0x00029a2d) ai_gene_pane_1_g1_ParamLimits

0xa737,	// (0x00029a2d) ai_gene_pane_1_g1

0xa743,	// (0x00029a39) ai_gene_pane_1_g2_ParamLimits

0xa743,	// (0x00029a39) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0002ebfe) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0002ebfe) ai_gene_pane_1_g

0xa750,	// (0x00029a46) ai_gene_pane_1_t1_ParamLimits

0xa750,	// (0x00029a46) ai_gene_pane_1_t1

0xa784,	// (0x00029a7a) grid_ai_soft_ind_pane

0xa722,	// (0x00029a18) ai_gene_pane_2_t1_ParamLimits

0xa722,	// (0x00029a18) ai_gene_pane_2_t1

0x6700,	// (0x000259f6) main_pane_empty_t1_ParamLimits

0x6700,	// (0x000259f6) main_pane_empty_t1

0x6718,	// (0x00025a0e) main_pane_empty_t2_ParamLimits

0x6718,	// (0x00025a0e) main_pane_empty_t2

0x672d,	// (0x00025a23) main_pane_empty_t3_ParamLimits

0x672d,	// (0x00025a23) main_pane_empty_t3

0x673f,	// (0x00025a35) main_pane_empty_t4_ParamLimits

0x673f,	// (0x00025a35) main_pane_empty_t4

0x6751,	// (0x00025a47) main_pane_empty_t5_ParamLimits

0x6751,	// (0x00025a47) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e86a) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e86a) main_pane_empty_t

0x1a98,	// (0x00020d8e) bg_popup_window_pane_ParamLimits

0x1a98,	// (0x00020d8e) bg_popup_window_pane

0xa484,	// (0x0002977a) find_popup_pane_cp2_ParamLimits

0xa484,	// (0x0002977a) find_popup_pane_cp2

0xa490,	// (0x00029786) heading_pane_ParamLimits

0xa490,	// (0x00029786) heading_pane

0x122f,	// (0x00020525) bg_popup_sub_pane

0xa3fe,	// (0x000296f4) bg_popup_window_pane_g1_ParamLimits

0xa3fe,	// (0x000296f4) bg_popup_window_pane_g1

0xa40a,	// (0x00029700) bg_popup_window_pane_g2_ParamLimits

0xa40a,	// (0x00029700) bg_popup_window_pane_g2

0xa416,	// (0x0002970c) bg_popup_window_pane_g3_ParamLimits

0xa416,	// (0x0002970c) bg_popup_window_pane_g3

0xa422,	// (0x00029718) bg_popup_window_pane_g4_ParamLimits

0xa422,	// (0x00029718) bg_popup_window_pane_g4

0xa42e,	// (0x00029724) bg_popup_window_pane_g5_ParamLimits

0xa42e,	// (0x00029724) bg_popup_window_pane_g5

0xa43a,	// (0x00029730) bg_popup_window_pane_g6_ParamLimits

0xa43a,	// (0x00029730) bg_popup_window_pane_g6

0xa446,	// (0x0002973c) bg_popup_window_pane_g7_ParamLimits

0xa446,	// (0x0002973c) bg_popup_window_pane_g7

0xa452,	// (0x00029748) bg_popup_window_pane_g8_ParamLimits

0xa452,	// (0x00029748) bg_popup_window_pane_g8

0xa45e,	// (0x00029754) bg_popup_window_pane_g9_ParamLimits

0xa45e,	// (0x00029754) bg_popup_window_pane_g9

0xa46a,	// (0x00029760) bg_popup_window_pane_g10_ParamLimits

0xa46a,	// (0x00029760) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0002ebc6) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0002ebc6) bg_popup_window_pane_g

0xa393,	// (0x00029689) bg_popup_heading_pane_ParamLimits

0xa393,	// (0x00029689) bg_popup_heading_pane

0x86ab,	// (0x000279a1) tabs_4_passive_pane_cp_srt_ParamLimits

0x86ab,	// (0x000279a1) tabs_4_passive_pane_cp_srt

0x86bd,	// (0x000279b3) tabs_4_passive_pane_srt_ParamLimits

0xa3a7,	// (0x0002969d) heading_pane_g2

0x86bd,	// (0x000279b3) tabs_4_passive_pane_srt

0x7789,	// (0x00026a7f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7789,	// (0x00026a7f) bg_passive_tab_pane_cp3_srt

0xa3af,	// (0x000296a5) heading_pane_t1_ParamLimits

0xa3af,	// (0x000296a5) heading_pane_t1

0xa3c6,	// (0x000296bc) heading_pane_t2_ParamLimits

0xa3c6,	// (0x000296bc) heading_pane_t2

0x0001,

0xf8cb,	// (0x0002ebc1) heading_pane_t_ParamLimits

0xf8cb,	// (0x0002ebc1) heading_pane_t

0x9ebe,	// (0x000291b4) bg_popup_heading_pane_g1

0x9f6d,	// (0x00029263) bg_popup_heading_pane_g2

0x9f77,	// (0x0002926d) bg_popup_heading_pane_g3

0x9f81,	// (0x00029277) bg_popup_heading_pane_g4

0x9f8b,	// (0x00029281) bg_popup_heading_pane_g5

0x9f95,	// (0x0002928b) bg_popup_heading_pane_g6

0x9f9d,	// (0x00029293) bg_popup_heading_pane_g7

0x9fa5,	// (0x0002929b) bg_popup_heading_pane_g8

0x9faf,	// (0x000292a5) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0002eb7d) bg_popup_heading_pane_g

0x831a,	// (0x00027610) bg_popup_sub_pane_g1

0x8322,	// (0x00027618) bg_popup_sub_pane_g2

0x832a,	// (0x00027620) bg_popup_sub_pane_g3

0x96de,	// (0x000289d4) bg_popup_sub_pane_g4

0x8332,	// (0x00027628) bg_popup_sub_pane_g5

0x96e6,	// (0x000289dc) bg_popup_sub_pane_g6

0x96ee,	// (0x000289e4) bg_popup_sub_pane_g7

0x96f6,	// (0x000289ec) bg_popup_sub_pane_g8

0x96fe,	// (0x000289f4) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0002eb57) bg_popup_sub_pane_g

0x127d,	// (0x00020573) bg_popup_window_pane_cp5_ParamLimits

0x127d,	// (0x00020573) bg_popup_window_pane_cp5

0x13e6,	// (0x000206dc) popup_note_window_g1_ParamLimits

0x13e6,	// (0x000206dc) popup_note_window_g1

0x13f2,	// (0x000206e8) popup_note_window_t1_ParamLimits

0x13f2,	// (0x000206e8) popup_note_window_t1

0x1408,	// (0x000206fe) popup_note_window_t2_ParamLimits

0x1408,	// (0x000206fe) popup_note_window_t2

0x141e,	// (0x00020714) popup_note_window_t3_ParamLimits

0x141e,	// (0x00020714) popup_note_window_t3

0x1434,	// (0x0002072a) popup_note_window_t4_ParamLimits

0x1434,	// (0x0002072a) popup_note_window_t4

0x145c,	// (0x00020752) popup_note_window_t5_ParamLimits

0x145c,	// (0x00020752) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e875) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e875) popup_note_window_t

0x14a6,	// (0x0002079c) bg_popup_window_pane_cp6_ParamLimits

0x14a6,	// (0x0002079c) bg_popup_window_pane_cp6

0x9e3a,	// (0x00029130) popup_note_image_window_g1_ParamLimits

0x9e3a,	// (0x00029130) popup_note_image_window_g1

0x9e46,	// (0x0002913c) popup_note_image_window_g2_ParamLimits

0x9e46,	// (0x0002913c) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0002eb4b) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0002eb4b) popup_note_image_window_g

0x9e5f,	// (0x00029155) popup_note_image_window_t1_ParamLimits

0x9e5f,	// (0x00029155) popup_note_image_window_t1

0x9e78,	// (0x0002916e) popup_note_image_window_t2_ParamLimits

0x9e78,	// (0x0002916e) popup_note_image_window_t2

0x9e91,	// (0x00029187) popup_note_image_window_t3_ParamLimits

0x9e91,	// (0x00029187) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0002eb50) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0002eb50) popup_note_image_window_t

0x9cfa,	// (0x00028ff0) bg_popup_window_pane_cp7_ParamLimits

0x9cfa,	// (0x00028ff0) bg_popup_window_pane_cp7

0x9d2a,	// (0x00029020) popup_note_wait_window_g1_ParamLimits

0x9d2a,	// (0x00029020) popup_note_wait_window_g1

0x9d36,	// (0x0002902c) popup_note_wait_window_g2_ParamLimits

0x9d36,	// (0x0002902c) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0002eb39) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0002eb39) popup_note_wait_window_g

0x9d4e,	// (0x00029044) popup_note_wait_window_t1_ParamLimits

0x9d4e,	// (0x00029044) popup_note_wait_window_t1

0x9d75,	// (0x0002906b) popup_note_wait_window_t2_ParamLimits

0x9d75,	// (0x0002906b) popup_note_wait_window_t2

0x9d93,	// (0x00029089) popup_note_wait_window_t3_ParamLimits

0x9d93,	// (0x00029089) popup_note_wait_window_t3

0x9da6,	// (0x0002909c) popup_note_wait_window_t4_ParamLimits

0x9da6,	// (0x0002909c) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0002eb40) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0002eb40) popup_note_wait_window_t

0x9dcb,	// (0x000290c1) wait_bar_pane_ParamLimits

0x9dcb,	// (0x000290c1) wait_bar_pane

0x122f,	// (0x00020525) wait_anim_pane

0x122f,	// (0x00020525) wait_border_pane

0x1225,	// (0x0002051b) wait_anim_pane_g1

0x1225,	// (0x0002051b) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0002e9f4) wait_anim_pane_g

0x9c9e,	// (0x00028f94) wait_border_pane_g1

0x9ca9,	// (0x00028f9f) wait_border_pane_g2

0x9cb2,	// (0x00028fa8) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0002eb32) wait_border_pane_g

0x9b08,	// (0x00028dfe) bg_popup_window_pane_cp16_ParamLimits

0x9b08,	// (0x00028dfe) bg_popup_window_pane_cp16

0x9c08,	// (0x00028efe) indicator_popup_pane_cp4_ParamLimits

0x9c08,	// (0x00028efe) indicator_popup_pane_cp4

0x9c1c,	// (0x00028f12) popup_query_data_window_t1_ParamLimits

0x9c1c,	// (0x00028f12) popup_query_data_window_t1

0x9c2e,	// (0x00028f24) popup_query_data_window_t2_ParamLimits

0x9c2e,	// (0x00028f24) popup_query_data_window_t2

0x9c47,	// (0x00028f3d) popup_query_data_window_t3_ParamLimits

0x9c47,	// (0x00028f3d) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0002eb2b) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0002eb2b) popup_query_data_window_t

0x9c61,	// (0x00028f57) query_popup_data_pane_ParamLimits

0x9c61,	// (0x00028f57) query_popup_data_pane

0x9c75,	// (0x00028f6b) query_popup_data_pane_cp1_ParamLimits

0x9c75,	// (0x00028f6b) query_popup_data_pane_cp1

0x9b08,	// (0x00028dfe) bg_popup_window_pane_cp10_ParamLimits

0x9b08,	// (0x00028dfe) bg_popup_window_pane_cp10

0x9b3a,	// (0x00028e30) indicator_popup_pane_ParamLimits

0x9b3a,	// (0x00028e30) indicator_popup_pane

0x9b5c,	// (0x00028e52) popup_query_code_window_t1_ParamLimits

0x9b5c,	// (0x00028e52) popup_query_code_window_t1

0x9b76,	// (0x00028e6c) popup_query_code_window_t2_ParamLimits

0x9b76,	// (0x00028e6c) popup_query_code_window_t2

0x9bbf,	// (0x00028eb5) popup_query_code_window_t3_ParamLimits

0x9bbf,	// (0x00028eb5) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0002eb24) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0002eb24) popup_query_code_window_t

0x9bee,	// (0x00028ee4) query_popup_pane_ParamLimits

0x9bee,	// (0x00028ee4) query_popup_pane

0x14a6,	// (0x0002079c) bg_popup_window_pane_cp15_ParamLimits

0x14a6,	// (0x0002079c) bg_popup_window_pane_cp15

0x14c6,	// (0x000207bc) indicator_popup_pane_cp1_ParamLimits

0x14c6,	// (0x000207bc) indicator_popup_pane_cp1

0x14d9,	// (0x000207cf) indicator_popup_pane_cp2_ParamLimits

0x14d9,	// (0x000207cf) indicator_popup_pane_cp2

0x14f4,	// (0x000207ea) popup_query_data_code_window_g1_ParamLimits

0x14f4,	// (0x000207ea) popup_query_data_code_window_g1

0x1507,	// (0x000207fd) popup_query_data_code_window_t1_ParamLimits

0x1507,	// (0x000207fd) popup_query_data_code_window_t1

0x1519,	// (0x0002080f) popup_query_data_code_window_t2_ParamLimits

0x1519,	// (0x0002080f) popup_query_data_code_window_t2

0x152b,	// (0x00020821) popup_query_data_code_window_t3_ParamLimits

0x152b,	// (0x00020821) popup_query_data_code_window_t3

0x1541,	// (0x00020837) popup_query_data_code_window_t4_ParamLimits

0x1541,	// (0x00020837) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e880) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e880) popup_query_data_code_window_t

0x7069,	// (0x0002635f) list_single_midp_graphic_pane_g3

0x155b,	// (0x00020851) query_popup_data_pane_cp2_ParamLimits

0x156e,	// (0x00020864) query_popup_pane_cp2_ParamLimits

0x156e,	// (0x00020864) query_popup_pane_cp2

0x122f,	// (0x00020525) bg_popup_window_pane_cp11

0x9af4,	// (0x00028dea) heading_pane_cp5

0x1607,	// (0x000208fd) listscroll_popup_info_pane

0x122f,	// (0x00020525) input_focus_pane_cp3

0x1589,	// (0x0002087f) query_popup_pane_t1

0x1597,	// (0x0002088d) list_popup_info_pane_ParamLimits

0x1597,	// (0x0002088d) list_popup_info_pane

0x15a6,	// (0x0002089c) listscroll_popup_info_pane_g1

0x15ae,	// (0x000208a4) scroll_pane_cp7

0x15b8,	// (0x000208ae) popup_info_list_pane_t1_ParamLimits

0x15b8,	// (0x000208ae) popup_info_list_pane_t1

0x15d2,	// (0x000208c8) popup_info_list_pane_t2_ParamLimits

0x15d2,	// (0x000208c8) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e889) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e889) popup_info_list_pane_t

0x122f,	// (0x00020525) bg_popup_window_pane_cp12

0xaee0,	// (0x0002a1d6) find_popup_pane

0x128b,	// (0x00020581) bg_popup_window_pane_cp3

0x15ec,	// (0x000208e2) heading_pane_cp3

0x15f8,	// (0x000208ee) listscroll_popup_graphic_pane

0x122f,	// (0x00020525) bg_popup_window_pane_cp4

0x67b3,	// (0x00025aa9) heading_pane_cp4

0x1607,	// (0x000208fd) listscroll_popup_colour_pane

0x67bd,	// (0x00025ab3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x67bd,	// (0x00025ab3) cell_large_graphic_colour_none_popup_pane

0x67d1,	// (0x00025ac7) grid_large_graphic_colour_popup_pane_ParamLimits

0x67d1,	// (0x00025ac7) grid_large_graphic_colour_popup_pane

0x67fd,	// (0x00025af3) listscroll_popup_colour_pane_g1_ParamLimits

0x67fd,	// (0x00025af3) listscroll_popup_colour_pane_g1

0x6814,	// (0x00025b0a) listscroll_popup_colour_pane_g2_ParamLimits

0x6814,	// (0x00025b0a) listscroll_popup_colour_pane_g2

0x682b,	// (0x00025b21) listscroll_popup_colour_pane_g3_ParamLimits

0x682b,	// (0x00025b21) listscroll_popup_colour_pane_g3

0x683b,	// (0x00025b31) listscroll_popup_colour_pane_g4_ParamLimits

0x683b,	// (0x00025b31) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e88e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e88e) listscroll_popup_colour_pane_g

0x160f,	// (0x00020905) scroll_pane_cp6_ParamLimits

0x160f,	// (0x00020905) scroll_pane_cp6

0x684f,	// (0x00025b45) cell_large_graphic_colour_popup_pane_ParamLimits

0x684f,	// (0x00025b45) cell_large_graphic_colour_popup_pane

0x1621,	// (0x00020917) cell_large_graphic_colour_none_popup_pane_t1

0x122f,	// (0x00020525) grid_highlight_pane_cp5

0x1630,	// (0x00020926) cell_large_graphic_colour_popup_pane_g1

0x1638,	// (0x0002092e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e897) cell_large_graphic_colour_popup_pane_g

0x1640,	// (0x00020936) cell_large_graphic_colour_popup_pane_g2_copy1

0x1649,	// (0x0002093f) grid_highlight_pane_cp4

0x1651,	// (0x00020947) bg_popup_window_pane_cp8_ParamLimits

0x1651,	// (0x00020947) bg_popup_window_pane_cp8

0x166c,	// (0x00020962) popup_snote_single_text_window_g1_ParamLimits

0x166c,	// (0x00020962) popup_snote_single_text_window_g1

0x167e,	// (0x00020974) popup_snote_single_text_window_t1_ParamLimits

0x167e,	// (0x00020974) popup_snote_single_text_window_t1

0x1691,	// (0x00020987) popup_snote_single_text_window_t2_ParamLimits

0x1691,	// (0x00020987) popup_snote_single_text_window_t2

0x16a4,	// (0x0002099a) popup_snote_single_text_window_t3_ParamLimits

0x16a4,	// (0x0002099a) popup_snote_single_text_window_t3

0x16dd,	// (0x000209d3) popup_snote_single_text_window_t4_ParamLimits

0x16dd,	// (0x000209d3) popup_snote_single_text_window_t4

0x1711,	// (0x00020a07) popup_snote_single_text_window_t5_ParamLimits

0x1711,	// (0x00020a07) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e89c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e89c) popup_snote_single_text_window_t

0x1740,	// (0x00020a36) bg_popup_window_pane_cp9_ParamLimits

0x1740,	// (0x00020a36) bg_popup_window_pane_cp9

0x166c,	// (0x00020962) popup_snote_single_graphic_window_g1_ParamLimits

0x166c,	// (0x00020962) popup_snote_single_graphic_window_g1

0x174e,	// (0x00020a44) popup_snote_single_graphic_window_g2_ParamLimits

0x174e,	// (0x00020a44) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e8a7) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e8a7) popup_snote_single_graphic_window_g

0x175a,	// (0x00020a50) popup_snote_single_graphic_window_t1_ParamLimits

0x175a,	// (0x00020a50) popup_snote_single_graphic_window_t1

0x176d,	// (0x00020a63) popup_snote_single_graphic_window_t2_ParamLimits

0x176d,	// (0x00020a63) popup_snote_single_graphic_window_t2

0x1780,	// (0x00020a76) popup_snote_single_graphic_window_t3_ParamLimits

0x1780,	// (0x00020a76) popup_snote_single_graphic_window_t3

0x17b9,	// (0x00020aaf) popup_snote_single_graphic_window_t4_ParamLimits

0x17b9,	// (0x00020aaf) popup_snote_single_graphic_window_t4

0x17ed,	// (0x00020ae3) popup_snote_single_graphic_window_t5_ParamLimits

0x17ed,	// (0x00020ae3) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e8ac) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e8ac) popup_snote_single_graphic_window_t

0xae1e,	// (0x0002a114) grid_graphic_popup_pane_ParamLimits

0xae1e,	// (0x0002a114) grid_graphic_popup_pane

0xae4c,	// (0x0002a142) listscroll_popup_graphic_pane_g1_ParamLimits

0xae4c,	// (0x0002a142) listscroll_popup_graphic_pane_g1

0xae60,	// (0x0002a156) listscroll_popup_graphic_pane_g2_ParamLimits

0xae60,	// (0x0002a156) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0002eca1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0002eca1) listscroll_popup_graphic_pane_g

0xae74,	// (0x0002a16a) scroll_pane_cp5

0xadb3,	// (0x0002a0a9) cell_graphic_popup_pane_ParamLimits

0xadb3,	// (0x0002a0a9) cell_graphic_popup_pane

0xad94,	// (0x0002a08a) cell_graphic_popup_pane_g1

0xad9c,	// (0x0002a092) cell_graphic_popup_pane_g2

0x1640,	// (0x00020936) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0002ec9a) cell_graphic_popup_pane_g

0xada5,	// (0x0002a09b) cell_graphic_popup_pane_t2

0x1649,	// (0x0002093f) grid_highlight_pane_cp3

0x182e,	// (0x00020b24) list_gen_pane_ParamLimits

0x182e,	// (0x00020b24) list_gen_pane

0x1856,	// (0x00020b4c) scroll_pane

0xacec,	// (0x00029fe2) bg_list_pane_g1_ParamLimits

0xacec,	// (0x00029fe2) bg_list_pane_g1

0xad09,	// (0x00029fff) bg_list_pane_g2_ParamLimits

0xad09,	// (0x00029fff) bg_list_pane_g2

0xad1e,	// (0x0002a014) bg_list_pane_g3_ParamLimits

0xad1e,	// (0x0002a014) bg_list_pane_g3

0xad32,	// (0x0002a028) bg_list_pane_g4_ParamLimits

0xad32,	// (0x0002a028) bg_list_pane_g4

0xad46,	// (0x0002a03c) bg_list_pane_g5_ParamLimits

0xad46,	// (0x0002a03c) bg_list_pane_g5

0x0004,

0xf999,	// (0x0002ec8f) bg_list_pane_g_ParamLimits

0xf999,	// (0x0002ec8f) bg_list_pane_g

0xac5a,	// (0x00029f50) list_double2_graphic_large_graphic_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double2_graphic_large_graphic_pane

0xac5a,	// (0x00029f50) list_double2_graphic_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double2_graphic_pane

0xac5a,	// (0x00029f50) list_double2_large_graphic_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double2_large_graphic_pane

0xac5a,	// (0x00029f50) list_double2_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double2_pane

0xac5a,	// (0x00029f50) list_double_graphic_heading_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double_graphic_heading_pane

0xac5a,	// (0x00029f50) list_double_graphic_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double_graphic_pane

0xac5a,	// (0x00029f50) list_double_heading_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double_heading_pane

0xac5a,	// (0x00029f50) list_double_large_graphic_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double_large_graphic_pane

0xac5a,	// (0x00029f50) list_double_number_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double_number_pane

0xac5a,	// (0x00029f50) list_double_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double_pane

0xac5a,	// (0x00029f50) list_double_time_pane_ParamLimits

0xac5a,	// (0x00029f50) list_double_time_pane

0xac5a,	// (0x00029f50) list_setting_number_pane_ParamLimits

0xac5a,	// (0x00029f50) list_setting_number_pane

0xac5a,	// (0x00029f50) list_setting_pane_ParamLimits

0xac5a,	// (0x00029f50) list_setting_pane

0xacbc,	// (0x00029fb2) list_single_2graphic_pane_ParamLimits

0xacbc,	// (0x00029fb2) list_single_2graphic_pane

0xacbc,	// (0x00029fb2) list_single_graphic_heading_pane_ParamLimits

0xacbc,	// (0x00029fb2) list_single_graphic_heading_pane

0xacbc,	// (0x00029fb2) list_single_graphic_pane_ParamLimits

0xacbc,	// (0x00029fb2) list_single_graphic_pane

0xacbc,	// (0x00029fb2) list_single_heading_pane_ParamLimits

0xacbc,	// (0x00029fb2) list_single_heading_pane

0x5983,	// (0x00024c79) list_single_large_graphic_pane_ParamLimits

0x5983,	// (0x00024c79) list_single_large_graphic_pane

0xacbc,	// (0x00029fb2) list_single_number_heading_pane_ParamLimits

0xacbc,	// (0x00029fb2) list_single_number_heading_pane

0xacbc,	// (0x00029fb2) list_single_number_pane_ParamLimits

0xacbc,	// (0x00029fb2) list_single_number_pane

0xacbc,	// (0x00029fb2) list_single_pane_ParamLimits

0xacbc,	// (0x00029fb2) list_single_pane

0x122f,	// (0x00020525) list_highlight_pane_cp1

0x4ff9,	// (0x000242ef) list_single_pane_g1_ParamLimits

0x4ff9,	// (0x000242ef) list_single_pane_g1

0x5005,	// (0x000242fb) list_single_pane_g2_ParamLimits

0x5005,	// (0x000242fb) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e8be) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e8be) list_single_pane_g

0x5958,	// (0x00024c4e) list_single_pane_t1_ParamLimits

0x5958,	// (0x00024c4e) list_single_pane_t1

0x4ff9,	// (0x000242ef) list_single_number_pane_g1_ParamLimits

0x4ff9,	// (0x000242ef) list_single_number_pane_g1

0x5005,	// (0x000242fb) list_single_number_pane_g2_ParamLimits

0x5005,	// (0x000242fb) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e8be) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e8be) list_single_number_pane_g

0x5902,	// (0x00024bf8) list_single_number_pane_t1_ParamLimits

0x5902,	// (0x00024bf8) list_single_number_pane_t1

0x5918,	// (0x00024c0e) list_single_number_pane_t2_ParamLimits

0x5918,	// (0x00024c0e) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0002ec50) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0002ec50) list_single_number_pane_t

0x4fed,	// (0x000242e3) list_single_graphic_pane_g1_ParamLimits

0x4fed,	// (0x000242e3) list_single_graphic_pane_g1

0x4ff9,	// (0x000242ef) list_single_graphic_pane_g2_ParamLimits

0x4ff9,	// (0x000242ef) list_single_graphic_pane_g2

0x5005,	// (0x000242fb) list_single_graphic_pane_g3_ParamLimits

0x5005,	// (0x000242fb) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e8b7) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e8b7) list_single_graphic_pane_g

0x5011,	// (0x00024307) list_single_graphic_pane_t1_ParamLimits

0x5011,	// (0x00024307) list_single_graphic_pane_t1

0x4ff9,	// (0x000242ef) list_single_heading_pane_g1_ParamLimits

0x4ff9,	// (0x000242ef) list_single_heading_pane_g1

0x5005,	// (0x000242fb) list_single_heading_pane_g2_ParamLimits

0x5005,	// (0x000242fb) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e8be) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e8be) list_single_heading_pane_g

0x5027,	// (0x0002431d) list_single_heading_pane_t1_ParamLimits

0x5027,	// (0x0002431d) list_single_heading_pane_t1

0x503d,	// (0x00024333) list_single_heading_pane_t2_ParamLimits

0x503d,	// (0x00024333) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e8c3) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e8c3) list_single_heading_pane_t

0x4ff9,	// (0x000242ef) list_single_number_heading_pane_g1_ParamLimits

0x4ff9,	// (0x000242ef) list_single_number_heading_pane_g1

0x5005,	// (0x000242fb) list_single_number_heading_pane_g2_ParamLimits

0x5005,	// (0x000242fb) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e8be) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e8be) list_single_number_heading_pane_g

0x5027,	// (0x0002431d) list_single_number_heading_pane_t1_ParamLimits

0x5027,	// (0x0002431d) list_single_number_heading_pane_t1

0x504f,	// (0x00024345) list_single_number_heading_pane_t2_ParamLimits

0x504f,	// (0x00024345) list_single_number_heading_pane_t2

0x5061,	// (0x00024357) list_single_number_heading_pane_t3_ParamLimits

0x5061,	// (0x00024357) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e8c8) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e8c8) list_single_number_heading_pane_t

0x5073,	// (0x00024369) list_single_graphic_heading_pane_g1_ParamLimits

0x5073,	// (0x00024369) list_single_graphic_heading_pane_g1

0x507f,	// (0x00024375) list_single_graphic_heading_pane_g4_ParamLimits

0x507f,	// (0x00024375) list_single_graphic_heading_pane_g4

0x5005,	// (0x000242fb) list_single_graphic_heading_pane_g5_ParamLimits

0x5005,	// (0x000242fb) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e8cf) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e8cf) list_single_graphic_heading_pane_g

0x5027,	// (0x0002431d) list_single_graphic_heading_pane_t1_ParamLimits

0x5027,	// (0x0002431d) list_single_graphic_heading_pane_t1

0x5090,	// (0x00024386) list_single_graphic_heading_pane_t2_ParamLimits

0x5090,	// (0x00024386) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e8d6) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e8d6) list_single_graphic_heading_pane_t

0x50a2,	// (0x00024398) list_single_large_graphic_pane_g1_ParamLimits

0x50a2,	// (0x00024398) list_single_large_graphic_pane_g1

0x4ff9,	// (0x000242ef) list_single_large_graphic_pane_g2_ParamLimits

0x4ff9,	// (0x000242ef) list_single_large_graphic_pane_g2

0x5005,	// (0x000242fb) list_single_large_graphic_pane_g3_ParamLimits

0x5005,	// (0x000242fb) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e8db) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e8db) list_single_large_graphic_pane_g

0x9ca9,	// (0x00028f9f) wait_border_pane_g2_copy1

0x50ae,	// (0x000243a4) list_single_large_graphic_pane_g4_cp2

0x50b6,	// (0x000243ac) list_single_large_graphic_pane_t1_ParamLimits

0x50b6,	// (0x000243ac) list_single_large_graphic_pane_t1

0x50cc,	// (0x000243c2) list_double_pane_g1_ParamLimits

0x50cc,	// (0x000243c2) list_double_pane_g1

0x50d8,	// (0x000243ce) list_double_pane_g2_ParamLimits

0x50d8,	// (0x000243ce) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e8e2) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e8e2) list_double_pane_g

0x50e4,	// (0x000243da) list_double_pane_t1_ParamLimits

0x50e4,	// (0x000243da) list_double_pane_t1

0x50fa,	// (0x000243f0) list_double_pane_t2_ParamLimits

0x50fa,	// (0x000243f0) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e8e7) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e8e7) list_double_pane_t

0x510c,	// (0x00024402) list_double2_pane_g1_ParamLimits

0x510c,	// (0x00024402) list_double2_pane_g1

0x50d8,	// (0x000243ce) list_double2_pane_g2_ParamLimits

0x50d8,	// (0x000243ce) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e8ec) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e8ec) list_double2_pane_g

0x50e4,	// (0x000243da) list_double2_pane_t1_ParamLimits

0x50e4,	// (0x000243da) list_double2_pane_t1

0x511d,	// (0x00024413) list_double2_pane_t2_ParamLimits

0x511d,	// (0x00024413) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e8f1) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e8f1) list_double2_pane_t

0x50cc,	// (0x000243c2) list_double_number_pane_g1_ParamLimits

0x50cc,	// (0x000243c2) list_double_number_pane_g1

0x50d8,	// (0x000243ce) list_double_number_pane_g2_ParamLimits

0x50d8,	// (0x000243ce) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e8e2) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e8e2) list_double_number_pane_g

0x512f,	// (0x00024425) list_double_number_pane_t1_ParamLimits

0x512f,	// (0x00024425) list_double_number_pane_t1

0x5141,	// (0x00024437) list_double_number_pane_t2_ParamLimits

0x5141,	// (0x00024437) list_double_number_pane_t2

0x5157,	// (0x0002444d) list_double_number_pane_t3_ParamLimits

0x5157,	// (0x0002444d) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e8f6) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e8f6) list_double_number_pane_t

0x5169,	// (0x0002445f) list_double_graphic_pane_g1_ParamLimits

0x5169,	// (0x0002445f) list_double_graphic_pane_g1

0x5175,	// (0x0002446b) list_double_graphic_pane_g2_ParamLimits

0x5175,	// (0x0002446b) list_double_graphic_pane_g2

0x5184,	// (0x0002447a) list_double_graphic_pane_g3_ParamLimits

0x5184,	// (0x0002447a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e8fd) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e8fd) list_double_graphic_pane_g

0x519c,	// (0x00024492) list_double_graphic_pane_t1_ParamLimits

0x519c,	// (0x00024492) list_double_graphic_pane_t1

0x51b2,	// (0x000244a8) list_double_graphic_pane_t2_ParamLimits

0x51b2,	// (0x000244a8) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e906) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e906) list_double_graphic_pane_t

0x5169,	// (0x0002445f) list_double2_graphic_pane_g1_ParamLimits

0x5169,	// (0x0002445f) list_double2_graphic_pane_g1

0x51c4,	// (0x000244ba) list_double2_graphic_pane_g2_ParamLimits

0x51c4,	// (0x000244ba) list_double2_graphic_pane_g2

0x51d0,	// (0x000244c6) list_double2_graphic_pane_g3_ParamLimits

0x51d0,	// (0x000244c6) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e90b) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e90b) list_double2_graphic_pane_g

0x5141,	// (0x00024437) list_double2_graphic_pane_t1_ParamLimits

0x5141,	// (0x00024437) list_double2_graphic_pane_t1

0x51dc,	// (0x000244d2) list_double2_graphic_pane_t2_ParamLimits

0x51dc,	// (0x000244d2) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e912) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e912) list_double2_graphic_pane_t

0x51ee,	// (0x000244e4) list_double_large_graphic_pane_g1_ParamLimits

0x51ee,	// (0x000244e4) list_double_large_graphic_pane_g1

0x510c,	// (0x00024402) list_double_large_graphic_pane_g2_ParamLimits

0x510c,	// (0x00024402) list_double_large_graphic_pane_g2

0x50d8,	// (0x000243ce) list_double_large_graphic_pane_g3_ParamLimits

0x50d8,	// (0x000243ce) list_double_large_graphic_pane_g3

0x520d,	// (0x00024503) list_double_large_graphic_pane_g4_ParamLimits

0x520d,	// (0x00024503) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e917) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e917) list_double_large_graphic_pane_g

0x5235,	// (0x0002452b) list_double_large_graphic_pane_t1_ParamLimits

0x5235,	// (0x0002452b) list_double_large_graphic_pane_t1

0x524e,	// (0x00024544) list_double_large_graphic_pane_t2_ParamLimits

0x524e,	// (0x00024544) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e922) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e922) list_double_large_graphic_pane_t

0x5260,	// (0x00024556) list_double2_large_graphic_pane_g1_ParamLimits

0x5260,	// (0x00024556) list_double2_large_graphic_pane_g1

0x510c,	// (0x00024402) list_double2_large_graphic_pane_g2_ParamLimits

0x510c,	// (0x00024402) list_double2_large_graphic_pane_g2

0x50d8,	// (0x000243ce) list_double2_large_graphic_pane_g3_ParamLimits

0x50d8,	// (0x000243ce) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e927) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e927) list_double2_large_graphic_pane_g

0x526c,	// (0x00024562) list_double2_large_graphic_pane_t1_ParamLimits

0x526c,	// (0x00024562) list_double2_large_graphic_pane_t1

0x5282,	// (0x00024578) list_double2_large_graphic_pane_t2_ParamLimits

0x5282,	// (0x00024578) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002e92e) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002e92e) list_double2_large_graphic_pane_t

0x5294,	// (0x0002458a) list_double_heading_pane_g1_ParamLimits

0x5294,	// (0x0002458a) list_double_heading_pane_g1

0x52a5,	// (0x0002459b) list_double_heading_pane_g2_ParamLimits

0x52a5,	// (0x0002459b) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002e933) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002e933) list_double_heading_pane_g

0x52b1,	// (0x000245a7) list_double_heading_pane_t1_ParamLimits

0x52b1,	// (0x000245a7) list_double_heading_pane_t1

0x52c7,	// (0x000245bd) list_double_heading_pane_t2_ParamLimits

0x52c7,	// (0x000245bd) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002e938) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002e938) list_double_heading_pane_t

0x52d9,	// (0x000245cf) list_double_graphic_heading_pane_g1_ParamLimits

0x52d9,	// (0x000245cf) list_double_graphic_heading_pane_g1

0x5294,	// (0x0002458a) list_double_graphic_heading_pane_g2_ParamLimits

0x5294,	// (0x0002458a) list_double_graphic_heading_pane_g2

0x52a5,	// (0x0002459b) list_double_graphic_heading_pane_g3_ParamLimits

0x52a5,	// (0x0002459b) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002e93d) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002e93d) list_double_graphic_heading_pane_g

0x52e5,	// (0x000245db) list_double_graphic_heading_pane_t1_ParamLimits

0x52e5,	// (0x000245db) list_double_graphic_heading_pane_t1

0x52fb,	// (0x000245f1) list_double_graphic_heading_pane_t2_ParamLimits

0x52fb,	// (0x000245f1) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002e944) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002e944) list_double_graphic_heading_pane_t

0x510c,	// (0x00024402) list_double_time_pane_g1_ParamLimits

0x510c,	// (0x00024402) list_double_time_pane_g1

0x50d8,	// (0x000243ce) list_double_time_pane_g2_ParamLimits

0x50d8,	// (0x000243ce) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0002e8ec) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0002e8ec) list_double_time_pane_g

0x530d,	// (0x00024603) list_double_time_pane_t1_ParamLimits

0x530d,	// (0x00024603) list_double_time_pane_t1

0x5323,	// (0x00024619) list_double_time_pane_t2_ParamLimits

0x5323,	// (0x00024619) list_double_time_pane_t2

0x5335,	// (0x0002462b) list_double_time_pane_t3_ParamLimits

0x5335,	// (0x0002462b) list_double_time_pane_t3

0x5347,	// (0x0002463d) list_double_time_pane_t4_ParamLimits

0x5347,	// (0x0002463d) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0002e949) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0002e949) list_double_time_pane_t

0x5359,	// (0x0002464f) list_setting_pane_g1_ParamLimits

0x5359,	// (0x0002464f) list_setting_pane_g1

0x5365,	// (0x0002465b) list_setting_pane_g2_ParamLimits

0x5365,	// (0x0002465b) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0002e952) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0002e952) list_setting_pane_g

0x5371,	// (0x00024667) list_setting_pane_t1_ParamLimits

0x5371,	// (0x00024667) list_setting_pane_t1

0x538b,	// (0x00024681) list_setting_pane_t2_ParamLimits

0x538b,	// (0x00024681) list_setting_pane_t2

0x0002,

0xf661,	// (0x0002e957) list_setting_pane_t_ParamLimits

0xf661,	// (0x0002e957) list_setting_pane_t

0x53ca,	// (0x000246c0) set_value_pane_cp_ParamLimits

0x53ca,	// (0x000246c0) set_value_pane_cp

0x53d8,	// (0x000246ce) list_setting_number_pane_g1_ParamLimits

0x53d8,	// (0x000246ce) list_setting_number_pane_g1

0x53e4,	// (0x000246da) list_setting_number_pane_g2_ParamLimits

0x53e4,	// (0x000246da) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0002e95e) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0002e95e) list_setting_number_pane_g

0x53f0,	// (0x000246e6) list_setting_number_pane_t1_ParamLimits

0x53f0,	// (0x000246e6) list_setting_number_pane_t1

0x5409,	// (0x000246ff) list_setting_number_pane_t2_ParamLimits

0x5409,	// (0x000246ff) list_setting_number_pane_t2

0x5423,	// (0x00024719) list_setting_number_pane_t3_ParamLimits

0x5423,	// (0x00024719) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0002e963) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0002e963) list_setting_number_pane_t

0x53ca,	// (0x000246c0) set_value_pane_ParamLimits

0x53ca,	// (0x000246c0) set_value_pane

0x189f,	// (0x00020b95) bg_set_opt_pane_ParamLimits

0x189f,	// (0x00020b95) bg_set_opt_pane

0x5466,	// (0x0002475c) set_value_pane_t1

0x18ce,	// (0x00020bc4) slider_set_pane_cp3

0x18d7,	// (0x00020bcd) volume_small_pane_cp

0x18e0,	// (0x00020bd6) list_form_gen_pane

0x18e9,	// (0x00020bdf) scroll_pane_cp8

0x547c,	// (0x00024772) form_field_data_pane_ParamLimits

0x547c,	// (0x00024772) form_field_data_pane

0x54a2,	// (0x00024798) form_field_data_wide_pane_ParamLimits

0x54a2,	// (0x00024798) form_field_data_wide_pane

0x54c7,	// (0x000247bd) form_field_popup_pane_ParamLimits

0x54c7,	// (0x000247bd) form_field_popup_pane

0x54e9,	// (0x000247df) form_field_popup_wide_pane_ParamLimits

0x54e9,	// (0x000247df) form_field_popup_wide_pane

0x550a,	// (0x00024800) form_field_slider_pane_ParamLimits

0x550a,	// (0x00024800) form_field_slider_pane

0x551d,	// (0x00024813) form_field_slider_wide_pane_ParamLimits

0x551d,	// (0x00024813) form_field_slider_wide_pane

0x1951,	// (0x00020c47) data_form_pane

0x553a,	// (0x00024830) form_field_data_pane_t1

0x195d,	// (0x00020c53) input_focus_pane

0x5554,	// (0x0002484a) data_form_wide_pane

0x5571,	// (0x00024867) form_field_data_wide_pane_t1

0x165e,	// (0x00020954) input_focus_pane_cp6

0x5593,	// (0x00024889) form_field_popup_pane_t1

0x195d,	// (0x00020c53) input_focus_pane_cp7

0x19c2,	// (0x00020cb8) list_form_pane

0x55b5,	// (0x000248ab) form_field_popup_wide_pane_t1

0x195d,	// (0x00020c53) input_focus_pane_cp8

0x19e8,	// (0x00020cde) list_form_wide_pane

0x55d2,	// (0x000248c8) form_field_slider_pane_t1_ParamLimits

0x55d2,	// (0x000248c8) form_field_slider_pane_t1

0x55ea,	// (0x000248e0) form_field_slider_pane_t2_ParamLimits

0x55ea,	// (0x000248e0) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0002e973) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0002e973) form_field_slider_pane_t

0x127d,	// (0x00020573) input_focus_pane_cp9_ParamLimits

0x127d,	// (0x00020573) input_focus_pane_cp9

0x55ff,	// (0x000248f5) slider_cont_pane_ParamLimits

0x55ff,	// (0x000248f5) slider_cont_pane

0x19f4,	// (0x00020cea) form_field_slider_wide_pane_t1_ParamLimits

0x19f4,	// (0x00020cea) form_field_slider_wide_pane_t1

0x5613,	// (0x00024909) form_field_slider_wide_pane_t2_ParamLimits

0x5613,	// (0x00024909) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0002e978) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0002e978) form_field_slider_wide_pane_t

0x127d,	// (0x00020573) input_focus_pane_cp10_ParamLimits

0x127d,	// (0x00020573) input_focus_pane_cp10

0x5625,	// (0x0002491b) slider_cont_pane_cp1_ParamLimits

0x5625,	// (0x0002491b) slider_cont_pane_cp1

0x5639,	// (0x0002492f) slider_form_pane_cp

0x1a18,	// (0x00020d0e) input_focus_pane_g1

0x1a20,	// (0x00020d16) input_focus_pane_g2

0x1a28,	// (0x00020d1e) input_focus_pane_g3

0x1a30,	// (0x00020d26) input_focus_pane_g4

0x1a38,	// (0x00020d2e) input_focus_pane_g5

0x1a40,	// (0x00020d36) input_focus_pane_g6

0x1a48,	// (0x00020d3e) input_focus_pane_g7

0x1a50,	// (0x00020d46) input_focus_pane_g8

0x1a58,	// (0x00020d4e) input_focus_pane_g9

0x1225,	// (0x0002051b) input_focus_pane_g10

0x0009,

0xf687,	// (0x0002e97d) input_focus_pane_g

0x9cb2,	// (0x00028fa8) wait_border_pane_g3_copy1

0x5641,	// (0x00024937) data_form_pane_t1

0x1225,	// (0x0002051b) wait_anim_pane_g1_copy1

0x592a,	// (0x00024c20) data_form_wide_pane_t1

0x565e,	// (0x00024954) list_form_graphic_pane_cp_ParamLimits

0x565e,	// (0x00024954) list_form_graphic_pane_cp

0xabfe,	// (0x00029ef4) slider_form_pane_g1

0xac07,	// (0x00029efd) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0002ec80) slider_form_pane_g

0x5673,	// (0x00024969) list_form_graphic_pane_ParamLimits

0x5673,	// (0x00024969) list_form_graphic_pane

0x5685,	// (0x0002497b) list_form_graphic_pane_g1

0x568d,	// (0x00024983) list_form_graphic_pane_t1_ParamLimits

0x568d,	// (0x00024983) list_form_graphic_pane_t1

0x128b,	// (0x00020581) list_highlight_pane_cp5_ParamLimits

0x128b,	// (0x00020581) list_highlight_pane_cp5

0x56a2,	// (0x00024998) find_pane_g1

0x1a8f,	// (0x00020d85) input_find_pane

0x56ab,	// (0x000249a1) input_find_pane_g1_ParamLimits

0x56ab,	// (0x000249a1) input_find_pane_g1

0x56b7,	// (0x000249ad) input_find_pane_t1_ParamLimits

0x56b7,	// (0x000249ad) input_find_pane_t1

0x56cc,	// (0x000249c2) input_find_pane_t2_ParamLimits

0x56cc,	// (0x000249c2) input_find_pane_t2

0x0001,

0xf69c,	// (0x0002e992) input_find_pane_t_ParamLimits

0xf69c,	// (0x0002e992) input_find_pane_t

0x1a98,	// (0x00020d8e) input_focus_pane_cp5_ParamLimits

0x1a98,	// (0x00020d8e) input_focus_pane_cp5

0x1aa6,	// (0x00020d9c) bg_popup_window_pane_cp2_ParamLimits

0x1aa6,	// (0x00020d9c) bg_popup_window_pane_cp2

0x1ab3,	// (0x00020da9) listscroll_menu_pane_ParamLimits

0x1ab3,	// (0x00020da9) listscroll_menu_pane

0x688a,	// (0x00025b80) popup_submenu_window_ParamLimits

0x688a,	// (0x00025b80) popup_submenu_window

0x1abf,	// (0x00020db5) find_popup_pane_g1

0x1ac7,	// (0x00020dbd) input_popup_find_pane_cp

0x1a98,	// (0x00020d8e) input_focus_pane_cp4_ParamLimits

0x1a98,	// (0x00020d8e) input_focus_pane_cp4

0x1ad1,	// (0x00020dc7) input_popup_find_pane_t1_ParamLimits

0x1ad1,	// (0x00020dc7) input_popup_find_pane_t1

0x122f,	// (0x00020525) bg_popup_sub_pane_cp

0x1aff,	// (0x00020df5) listscroll_popup_sub_pane

0x1b07,	// (0x00020dfd) list_submenu_pane_ParamLimits

0x1b07,	// (0x00020dfd) list_submenu_pane

0x1b18,	// (0x00020e0e) scroll_pane_cp4

0x1b20,	// (0x00020e16) list_single_popup_submenu_pane_ParamLimits

0x1b20,	// (0x00020e16) list_single_popup_submenu_pane

0x1b35,	// (0x00020e2b) list_single_popup_submenu_pane_g1

0x1b3d,	// (0x00020e33) list_single_popup_submenu_pane_t1_ParamLimits

0x1b3d,	// (0x00020e33) list_single_popup_submenu_pane_t1

0x128b,	// (0x00020581) bg_active_tab_pane_cp1_ParamLimits

0x128b,	// (0x00020581) bg_active_tab_pane_cp1

0x68c8,	// (0x00025bbe) tabs_2_active_pane_g1

0x68d0,	// (0x00025bc6) tabs_2_active_pane_t1

0x128b,	// (0x00020581) bg_passive_tab_pane_cp1_ParamLimits

0x128b,	// (0x00020581) bg_passive_tab_pane_cp1

0x68c8,	// (0x00025bbe) tabs_2_passive_pane_g1

0x68d0,	// (0x00025bc6) tabs_2_passive_pane_t1

0x1c90,	// (0x00020f86) bg_active_tab_pane_cp4

0x68e2,	// (0x00025bd8) tabs_2_long_active_pane_t1

0x68f5,	// (0x00025beb) bg_passive_tab_pane_cp4

0x835f,	// (0x00027655) list_single_midp_graphic_pane_g4_ParamLimits

0x1c90,	// (0x00020f86) bg_active_tab_pane_cp5

0x6901,	// (0x00025bf7) tabs_3_long_active_pane_t1

0x68f5,	// (0x00025beb) bg_passive_tab_pane_cp5

0x835f,	// (0x00027655) list_single_midp_graphic_pane_g4

0x128b,	// (0x00020581) bg_popup_window_pane_cp13_ParamLimits

0x128b,	// (0x00020581) bg_popup_window_pane_cp13

0x1b5b,	// (0x00020e51) listscroll_popup_fast_pane_ParamLimits

0x1b5b,	// (0x00020e51) listscroll_popup_fast_pane

0x1b6a,	// (0x00020e60) grid_popup_fast_pane_ParamLimits

0x1b6a,	// (0x00020e60) grid_popup_fast_pane

0x1b7c,	// (0x00020e72) scroll_pane_cp9_ParamLimits

0x1b7c,	// (0x00020e72) scroll_pane_cp9

0xc543,	// (0x0002b839) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc543,	// (0x0002b839) list_single_graphic_hl_pane_t1_cp2

0x1ba0,	// (0x00020e96) input_focus_pane_cp20_ParamLimits

0x1ba0,	// (0x00020e96) input_focus_pane_cp20

0x1bae,	// (0x00020ea4) query_popup_data_pane_t1_ParamLimits

0x1bae,	// (0x00020ea4) query_popup_data_pane_t1

0x1bc1,	// (0x00020eb7) query_popup_data_pane_t2_ParamLimits

0x1bc1,	// (0x00020eb7) query_popup_data_pane_t2

0x1c07,	// (0x00020efd) query_popup_data_pane_t3_ParamLimits

0x1c07,	// (0x00020efd) query_popup_data_pane_t3

0x1c48,	// (0x00020f3e) query_popup_data_pane_t4_ParamLimits

0x1c48,	// (0x00020f3e) query_popup_data_pane_t4

0x2fd7,	// (0x000222cd) query_popup_data_pane_t5_ParamLimits

0x2fd7,	// (0x000222cd) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0002e997) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0002e997) query_popup_data_pane_t

0x1a18,	// (0x00020d0e) bg_set_opt_pane_g1

0x1a20,	// (0x00020d16) bg_set_opt_pane_g2

0x1a28,	// (0x00020d1e) bg_set_opt_pane_g3

0x1a30,	// (0x00020d26) bg_set_opt_pane_g4

0x1a38,	// (0x00020d2e) bg_set_opt_pane_g5

0x1a40,	// (0x00020d36) bg_set_opt_pane_g6

0x1a48,	// (0x00020d3e) bg_set_opt_pane_g7

0x1a50,	// (0x00020d46) bg_set_opt_pane_g8

0x1a58,	// (0x00020d4e) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0002e9a2) bg_set_opt_pane_g

0x6d8a,	// (0x00026080) control_top_pane_stacon_ParamLimits

0x6d8a,	// (0x00026080) control_top_pane_stacon

0x6ddd,	// (0x000260d3) signal_pane_stacon_ParamLimits

0x6ddd,	// (0x000260d3) signal_pane_stacon

0x6e02,	// (0x000260f8) stacon_top_pane_g1_ParamLimits

0x6e02,	// (0x000260f8) stacon_top_pane_g1

0x6e24,	// (0x0002611a) title_pane_stacon_ParamLimits

0x6e24,	// (0x0002611a) title_pane_stacon

0x6e4e,	// (0x00026144) uni_indicator_pane_stacon_ParamLimits

0x6e4e,	// (0x00026144) uni_indicator_pane_stacon

0x6e63,	// (0x00026159) battery_pane_stacon_ParamLimits

0x6e63,	// (0x00026159) battery_pane_stacon

0x6ea7,	// (0x0002619d) control_bottom_pane_stacon_ParamLimits

0x6ea7,	// (0x0002619d) control_bottom_pane_stacon

0x6eca,	// (0x000261c0) navi_pane_stacon_ParamLimits

0x6eca,	// (0x000261c0) navi_pane_stacon

0x6eed,	// (0x000261e3) stacon_bottom_pane_g1_ParamLimits

0x6eed,	// (0x000261e3) stacon_bottom_pane_g1

0x6913,	// (0x00025c09) aid_levels_signal_lsc_ParamLimits

0x6913,	// (0x00025c09) aid_levels_signal_lsc

0x692a,	// (0x00025c20) signal_pane_stacon_g1_ParamLimits

0x692a,	// (0x00025c20) signal_pane_stacon_g1

0x693e,	// (0x00025c34) signal_pane_stacon_g2_ParamLimits

0x693e,	// (0x00025c34) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0002e9b5) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002e9b5) signal_pane_stacon_g

0x6973,	// (0x00025c69) title_pane_stacon_t1_ParamLimits

0x6973,	// (0x00025c69) title_pane_stacon_t1

0x30b4,	// (0x000223aa) uni_indicator_pane_stacon_g1

0x30be,	// (0x000223b4) uni_indicator_pane_stacon_g2

0x30a0,	// (0x00022396) uni_indicator_pane_stacon_g3

0x30aa,	// (0x000223a0) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0002e9c1) uni_indicator_pane_stacon_g

0x6998,	// (0x00025c8e) control_top_pane_stacon_g1

0x69a0,	// (0x00025c96) control_top_pane_stacon_t1_ParamLimits

0x69a0,	// (0x00025c96) control_top_pane_stacon_t1

0x69d7,	// (0x00025ccd) aid_levels_battery_lsc_ParamLimits

0x69d7,	// (0x00025ccd) aid_levels_battery_lsc

0x69ef,	// (0x00025ce5) battery_pane_stacon_g1_ParamLimits

0x69ef,	// (0x00025ce5) battery_pane_stacon_g1

0x6a02,	// (0x00025cf8) battery_pane_stacon_g2_ParamLimits

0x6a02,	// (0x00025cf8) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0002e9ca) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0002e9ca) battery_pane_stacon_g

0x6a40,	// (0x00025d36) navi_icon_pane_stacon

0x6a54,	// (0x00025d4a) navi_navi_pane_stacon

0x6a40,	// (0x00025d36) navi_text_pane_stacon

0x6998,	// (0x00025c8e) control_bottom_pane_stacon_g1

0x6a6a,	// (0x00025d60) control_bottom_pane_stacon_t1_ParamLimits

0x6a6a,	// (0x00025d60) control_bottom_pane_stacon_t1

0x6aa1,	// (0x00025d97) grid_app_pane_ParamLimits

0x6aa1,	// (0x00025d97) grid_app_pane

0x6ac3,	// (0x00025db9) scroll_pane_cp15_ParamLimits

0x6ac3,	// (0x00025db9) scroll_pane_cp15

0x6ad6,	// (0x00025dcc) cell_app_pane_ParamLimits

0x6ad6,	// (0x00025dcc) cell_app_pane

0x6b02,	// (0x00025df8) cell_app_pane_g1_ParamLimits

0x6b02,	// (0x00025df8) cell_app_pane_g1

0x31eb,	// (0x000224e1) cell_app_pane_g2_ParamLimits

0x31eb,	// (0x000224e1) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0002e9cf) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0002e9cf) cell_app_pane_g

0x6b26,	// (0x00025e1c) cell_app_pane_t1_ParamLimits

0x6b26,	// (0x00025e1c) cell_app_pane_t1

0x31f7,	// (0x000224ed) grid_highlight_pane_ParamLimits

0x31f7,	// (0x000224ed) grid_highlight_pane

0x1a18,	// (0x00020d0e) cell_highlight_pane_g1

0x1a20,	// (0x00020d16) cell_highlight_pane_g2

0x1a28,	// (0x00020d1e) cell_highlight_pane_g3

0x1a30,	// (0x00020d26) cell_highlight_pane_g4

0x1a38,	// (0x00020d2e) cell_highlight_pane_g5

0x1a40,	// (0x00020d36) cell_highlight_pane_g6

0x1a48,	// (0x00020d3e) cell_highlight_pane_g7

0x1a50,	// (0x00020d46) cell_highlight_pane_g8

0x1a58,	// (0x00020d4e) cell_highlight_pane_g9

0x1225,	// (0x0002051b) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0002e97d) cell_highlight_pane_g

0x3212,	// (0x00022508) bg_scroll_pane

0x6b50,	// (0x00025e46) scroll_handle_pane

0x3282,	// (0x00022578) scroll_bg_pane_g1

0x3297,	// (0x0002258d) scroll_bg_pane_g2

0x32af,	// (0x000225a5) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0002e9d4) scroll_bg_pane_g

0x32c4,	// (0x000225ba) scroll_handle_focus_pane_ParamLimits

0x32c4,	// (0x000225ba) scroll_handle_focus_pane

0x3282,	// (0x00022578) scroll_handle_pane_g1

0x32d1,	// (0x000225c7) scroll_handle_pane_g2

0x32af,	// (0x000225a5) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0002e9db) scroll_handle_pane_g

0x1a98,	// (0x00020d8e) bg_popup_sub_pane_cp21_ParamLimits

0x1a98,	// (0x00020d8e) bg_popup_sub_pane_cp21

0x32e5,	// (0x000225db) popup_fep_japan_predictive_window_t1_ParamLimits

0x32e5,	// (0x000225db) popup_fep_japan_predictive_window_t1

0x32fc,	// (0x000225f2) popup_fep_japan_predictive_window_t2_ParamLimits

0x32fc,	// (0x000225f2) popup_fep_japan_predictive_window_t2

0x332f,	// (0x00022625) popup_fep_japan_predictive_window_t3_ParamLimits

0x332f,	// (0x00022625) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0002e9e2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0002e9e2) popup_fep_japan_predictive_window_t

0x122f,	// (0x00020525) bg_popup_sub_pane_cp23

0x3366,	// (0x0002265c) listscroll_japin_cand_pane

0x336e,	// (0x00022664) popup_fep_japan_candidate_window_t1

0x337c,	// (0x00022672) candidate_pane_ParamLimits

0x337c,	// (0x00022672) candidate_pane

0x338e,	// (0x00022684) scroll_pane_cp30

0x3398,	// (0x0002268e) list_single_popup_jap_candidate_pane_ParamLimits

0x3398,	// (0x0002268e) list_single_popup_jap_candidate_pane

0x122f,	// (0x00020525) list_highlight_pane_cp30

0x33ac,	// (0x000226a2) list_single_popup_jap_candidate_pane_t1

0x6b79,	// (0x00025e6f) level_1_signal

0x6b86,	// (0x00025e7c) level_2_signal

0x6b93,	// (0x00025e89) level_3_signal

0x6ba0,	// (0x00025e96) level_4_signal

0x6bad,	// (0x00025ea3) level_5_signal

0x6bba,	// (0x00025eb0) level_6_signal

0x6bc7,	// (0x00025ebd) level_7_signal

0x6b79,	// (0x00025e6f) level_1_battery

0x6b86,	// (0x00025e7c) level_2_battery

0x6b93,	// (0x00025e89) level_3_battery

0x6ba0,	// (0x00025e96) level_4_battery

0x6bad,	// (0x00025ea3) level_5_battery

0x6bba,	// (0x00025eb0) level_6_battery

0x6bc7,	// (0x00025ebd) level_7_battery

0x33f2,	// (0x000226e8) list_menu_pane_ParamLimits

0x33f2,	// (0x000226e8) list_menu_pane

0x3408,	// (0x000226fe) scroll_pane_cp25_ParamLimits

0x3408,	// (0x000226fe) scroll_pane_cp25

0x3421,	// (0x00022717) list_double2_graphic_pane_cp2_ParamLimits

0x3421,	// (0x00022717) list_double2_graphic_pane_cp2

0x3421,	// (0x00022717) list_double2_large_graphic_pane_cp2_ParamLimits

0x3421,	// (0x00022717) list_double2_large_graphic_pane_cp2

0x3421,	// (0x00022717) list_double2_pane_cp2_ParamLimits

0x3421,	// (0x00022717) list_double2_pane_cp2

0x3421,	// (0x00022717) list_double_graphic_pane_cp2_ParamLimits

0x3421,	// (0x00022717) list_double_graphic_pane_cp2

0x3421,	// (0x00022717) list_double_large_graphic_pane_cp2_ParamLimits

0x3421,	// (0x00022717) list_double_large_graphic_pane_cp2

0x3421,	// (0x00022717) list_double_number_pane_cp2_ParamLimits

0x3421,	// (0x00022717) list_double_number_pane_cp2

0x3421,	// (0x00022717) list_double_pane_cp2_ParamLimits

0x3421,	// (0x00022717) list_double_pane_cp2

0x6c09,	// (0x00025eff) list_single_2graphic_pane_cp2_ParamLimits

0x6c09,	// (0x00025eff) list_single_2graphic_pane_cp2

0x6c09,	// (0x00025eff) list_single_graphic_heading_pane_cp2_ParamLimits

0x6c09,	// (0x00025eff) list_single_graphic_heading_pane_cp2

0x6c09,	// (0x00025eff) list_single_graphic_pane_cp2_ParamLimits

0x6c09,	// (0x00025eff) list_single_graphic_pane_cp2

0x6c09,	// (0x00025eff) list_single_heading_pane_cp2_ParamLimits

0x6c09,	// (0x00025eff) list_single_heading_pane_cp2

0x3431,	// (0x00022727) list_single_large_graphic_pane_cp2_ParamLimits

0x3431,	// (0x00022727) list_single_large_graphic_pane_cp2

0x6c09,	// (0x00025eff) list_single_number_heading_pane_cp2_ParamLimits

0x6c09,	// (0x00025eff) list_single_number_heading_pane_cp2

0x6c09,	// (0x00025eff) list_single_number_pane_cp2_ParamLimits

0x6c09,	// (0x00025eff) list_single_number_pane_cp2

0x6c09,	// (0x00025eff) list_single_pane_cp2_ParamLimits

0x6c09,	// (0x00025eff) list_single_pane_cp2

0x34a5,	// (0x0002279b) bg_popup_sub_pane_cp22

0x6ce5,	// (0x00025fdb) popup_side_volume_key_window_g1

0x6d0f,	// (0x00026005) popup_side_volume_key_window_t1

0x6d2d,	// (0x00026023) volume_small_pane_cp1

0x127d,	// (0x00020573) bg_popup_sub_pane_cp24_ParamLimits

0x127d,	// (0x00020573) bg_popup_sub_pane_cp24

0x351a,	// (0x00022810) fep_china_uni_candidate_pane_ParamLimits

0x351a,	// (0x00022810) fep_china_uni_candidate_pane

0x352e,	// (0x00022824) fep_china_uni_entry_pane

0x353e,	// (0x00022834) popup_fep_china_uni_window_g1

0x355a,	// (0x00022850) fep_china_uni_entry_pane_g1

0x3564,	// (0x0002285a) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0002ea13) fep_china_uni_entry_pane_g

0x356e,	// (0x00022864) fep_entry_item_pane

0x3578,	// (0x0002286e) fep_candidate_item_pane

0x3580,	// (0x00022876) fep_china_uni_candidate_pane_g1

0x358a,	// (0x00022880) fep_china_uni_candidate_pane_g2

0x3592,	// (0x00022888) fep_china_uni_candidate_pane_g3

0x359a,	// (0x00022890) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002ea18) fep_china_uni_candidate_pane_g

0x1225,	// (0x0002051b) fep_entry_item_pane_g1

0x35a4,	// (0x0002289a) fep_entry_item_pane_t1_ParamLimits

0x35a4,	// (0x0002289a) fep_entry_item_pane_t1

0x35ba,	// (0x000228b0) fep_candidate_item_pane_t1_ParamLimits

0x35ba,	// (0x000228b0) fep_candidate_item_pane_t1

0x35cf,	// (0x000228c5) fep_candidate_item_pane_t2_ParamLimits

0x35cf,	// (0x000228c5) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0002ea21) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0002ea21) fep_candidate_item_pane_t

0x128b,	// (0x00020581) list_highlight_pane_cp31_ParamLimits

0x128b,	// (0x00020581) list_highlight_pane_cp31

0x35e1,	// (0x000228d7) level_1_signal_lsc

0x35ea,	// (0x000228e0) level_2_signal_lsc

0x35f3,	// (0x000228e9) level_3_signal_lsc

0x35fc,	// (0x000228f2) level_4_signal_lsc

0x3605,	// (0x000228fb) level_5_signal_lsc

0x360e,	// (0x00022904) level_6_signal_lsc

0x3617,	// (0x0002290d) level_7_signal_lsc

0x3617,	// (0x0002290d) level_1_battery_lsc

0x3620,	// (0x00022916) level_2_battery_lsc

0x3629,	// (0x0002291f) level_3_battery_lsc

0x3632,	// (0x00022928) level_4_battery_lsc

0x363b,	// (0x00022931) level_5_battery_lsc

0x3644,	// (0x0002293a) level_6_battery_lsc

0x35e1,	// (0x000228d7) level_7_battery_lsc

0x364d,	// (0x00022943) scroll_handle_focus_pane_g1

0x3656,	// (0x0002294c) scroll_handle_focus_pane_g2

0x365f,	// (0x00022955) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0002ea26) scroll_handle_focus_pane_g

0x56e1,	// (0x000249d7) list_single_2graphic_pane_g1_ParamLimits

0x56e1,	// (0x000249d7) list_single_2graphic_pane_g1

0x507f,	// (0x00024375) list_single_2graphic_pane_g2_ParamLimits

0x507f,	// (0x00024375) list_single_2graphic_pane_g2

0x5005,	// (0x000242fb) list_single_2graphic_pane_g3_ParamLimits

0x5005,	// (0x000242fb) list_single_2graphic_pane_g3

0x56ed,	// (0x000249e3) list_single_2graphic_pane_g4_ParamLimits

0x56ed,	// (0x000249e3) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0002ea2d) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0002ea2d) list_single_2graphic_pane_g

0x56f9,	// (0x000249ef) list_single_2graphic_pane_t1_ParamLimits

0x56f9,	// (0x000249ef) list_single_2graphic_pane_t1

0x5727,	// (0x00024a1d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5727,	// (0x00024a1d) list_double2_graphic_large_graphic_pane_g1

0x510c,	// (0x00024402) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x510c,	// (0x00024402) list_double2_graphic_large_graphic_pane_g2

0x50d8,	// (0x000243ce) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x50d8,	// (0x000243ce) list_double2_graphic_large_graphic_pane_g3

0x5739,	// (0x00024a2f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5739,	// (0x00024a2f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0002ea36) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0002ea36) list_double2_graphic_large_graphic_pane_g

0x5745,	// (0x00024a3b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5745,	// (0x00024a3b) list_double2_graphic_large_graphic_pane_t1

0x575b,	// (0x00024a51) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x575b,	// (0x00024a51) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0002ea3f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0002ea3f) list_double2_graphic_large_graphic_pane_t

0x6fad,	// (0x000262a3) popup_fast_swap_window_ParamLimits

0x6fad,	// (0x000262a3) popup_fast_swap_window

0x6fcb,	// (0x000262c1) popup_side_volume_key_window

0x6fe9,	// (0x000262df) stacon_top_pane

0x6ff3,	// (0x000262e9) status_pane_ParamLimits

0x6ff3,	// (0x000262e9) status_pane

0x7001,	// (0x000262f7) status_small_pane

0x122f,	// (0x00020525) control_pane

0x122f,	// (0x00020525) stacon_bottom_pane

0x18e9,	// (0x00020bdf) scroll_pane_cp121

0x18e0,	// (0x00020bd6) set_content_pane

0x6d35,	// (0x0002602b) bg_active_tab_pane_g1_cp1

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp1

0x6d47,	// (0x0002603d) bg_active_tab_pane_g3_cp1

0x6d35,	// (0x0002602b) bg_passive_tab_pane_g1_cp1

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp1

0x6d47,	// (0x0002603d) bg_passive_tab_pane_g3_cp1

0x6d50,	// (0x00026046) bg_active_tab_pane_g1_cp2

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp2

0x6d59,	// (0x0002604f) bg_active_tab_pane_g3_cp2

0x6d50,	// (0x00026046) bg_passive_tab_pane_g1_cp2

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp2

0x6d59,	// (0x0002604f) bg_passive_tab_pane_g3_cp2

0x6d62,	// (0x00026058) bg_active_tab_pane_g1_cp3

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp3

0x6d6b,	// (0x00026061) bg_active_tab_pane_g3_cp3

0x6d62,	// (0x00026058) bg_passive_tab_pane_g1_cp3

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp3

0x6d6b,	// (0x00026061) bg_passive_tab_pane_g3_cp3

0x6d74,	// (0x0002606a) bg_active_tab_pane_g1_cp4

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp4

0x6d7f,	// (0x00026075) bg_active_tab_pane_g3_cp4

0x6d74,	// (0x0002606a) bg_passive_tab_pane_g1_cp4

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp4

0x6d7f,	// (0x00026075) bg_passive_tab_pane_g3_cp4

0x6f09,	// (0x000261ff) bg_active_tab_pane_g1_cp5

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp5

0x6f12,	// (0x00026208) bg_active_tab_pane_g3_cp5

0x6f09,	// (0x000261ff) bg_passive_tab_pane_g1_cp5

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp5

0x6f12,	// (0x00026208) bg_passive_tab_pane_g3_cp5

0x6f1b,	// (0x00026211) list_set_graphic_pane_ParamLimits

0x6f1b,	// (0x00026211) list_set_graphic_pane

0x122f,	// (0x00020525) bg_set_opt_pane_cp4

0x6f2e,	// (0x00026224) list_set_graphic_pane_g1_ParamLimits

0x6f2e,	// (0x00026224) list_set_graphic_pane_g1

0x6f3a,	// (0x00026230) list_set_graphic_pane_g2_ParamLimits

0x6f3a,	// (0x00026230) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0002ea44) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0002ea44) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x0002edc0) volume_small_pane_cp_g

0x6f5e,	// (0x00026254) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6f5e,	// (0x00026254) list_double2_large_graphic_pane_g1_cp2

0x6f6c,	// (0x00026262) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6f6c,	// (0x00026262) list_double2_large_graphic_pane_g2_cp2

0x6f7d,	// (0x00026273) list_double2_large_graphic_pane_g3_cp2

0x6f85,	// (0x0002627b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6f85,	// (0x0002627b) list_double2_large_graphic_pane_t1_cp2

0x6f9b,	// (0x00026291) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6f9b,	// (0x00026291) list_double2_large_graphic_pane_t2_cp2

0xa796,	// (0x00029a8c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa796,	// (0x00029a8c) list_double_large_graphic_pane_g1_cp2

0xa7a9,	// (0x00029a9f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa7a9,	// (0x00029a9f) list_double_large_graphic_pane_g2_cp2

0x711c,	// (0x00026412) list_double_large_graphic_pane_g3_cp2

0xa7ba,	// (0x00029ab0) list_double_large_graphic_pane_g4_cp

0xa7c2,	// (0x00029ab8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa7c2,	// (0x00029ab8) list_double_large_graphic_pane_t1_cp2

0xa7d9,	// (0x00029acf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa7d9,	// (0x00029acf) list_double_large_graphic_pane_t2_cp2

0x700c,	// (0x00026302) list_double2_graphic_pane_g1_cp2_ParamLimits

0x700c,	// (0x00026302) list_double2_graphic_pane_g1_cp2

0x701a,	// (0x00026310) list_double2_graphic_pane_g2_cp2_ParamLimits

0x701a,	// (0x00026310) list_double2_graphic_pane_g2_cp2

0x702b,	// (0x00026321) list_double2_graphic_pane_g3_cp2

0x7035,	// (0x0002632b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7035,	// (0x0002632b) list_double2_graphic_pane_t1_cp2

0x704b,	// (0x00026341) list_double2_graphic_pane_t2_cp2_ParamLimits

0x704b,	// (0x00026341) list_double2_graphic_pane_t2_cp2

0x705d,	// (0x00026353) list_single_number_heading_pane_g1_cp2_ParamLimits

0x705d,	// (0x00026353) list_single_number_heading_pane_g1_cp2

0x7069,	// (0x0002635f) list_single_number_heading_pane_g2_cp2

0x7071,	// (0x00026367) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7071,	// (0x00026367) list_single_number_heading_pane_t1_cp2

0x7087,	// (0x0002637d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7087,	// (0x0002637d) list_single_number_heading_pane_t2_cp2

0x709b,	// (0x00026391) list_single_number_heading_pane_t3_cp2_ParamLimits

0x709b,	// (0x00026391) list_single_number_heading_pane_t3_cp2

0x705d,	// (0x00026353) list_single_heading_pane_g1_cp2_ParamLimits

0x705d,	// (0x00026353) list_single_heading_pane_g1_cp2

0x7069,	// (0x0002635f) list_single_heading_pane_g2_cp2

0x7071,	// (0x00026367) list_single_heading_pane_t1_cp2_ParamLimits

0x7071,	// (0x00026367) list_single_heading_pane_t1_cp2

0xa590,	// (0x00029886) list_single_heading_pane_t2_cp2_ParamLimits

0xa590,	// (0x00029886) list_single_heading_pane_t2_cp2

0xa4d8,	// (0x000297ce) list_double_graphic_pane_g1_cp2_ParamLimits

0xa4d8,	// (0x000297ce) list_double_graphic_pane_g1_cp2

0xa4e4,	// (0x000297da) list_double_graphic_pane_g2_cp2_ParamLimits

0xa4e4,	// (0x000297da) list_double_graphic_pane_g2_cp2

0xa4f3,	// (0x000297e9) list_double_graphic_pane_g3_cp2

0xa4fb,	// (0x000297f1) list_double_graphic_pane_t1_cp2_ParamLimits

0xa4fb,	// (0x000297f1) list_double_graphic_pane_t1_cp2

0xa511,	// (0x00029807) list_double_graphic_pane_t2_cp2_ParamLimits

0xa511,	// (0x00029807) list_double_graphic_pane_t2_cp2

0x7110,	// (0x00026406) list_double_number_pane_g1_cp2_ParamLimits

0x7110,	// (0x00026406) list_double_number_pane_g1_cp2

0x711c,	// (0x00026412) list_double_number_pane_g2_cp2

0xa49c,	// (0x00029792) list_double_number_pane_t1_cp2_ParamLimits

0xa49c,	// (0x00029792) list_double_number_pane_t1_cp2

0xa4b0,	// (0x000297a6) list_double_number_pane_t2_cp2_ParamLimits

0xa4b0,	// (0x000297a6) list_double_number_pane_t2_cp2

0xa4c6,	// (0x000297bc) list_double_number_pane_t3_cp2_ParamLimits

0xa4c6,	// (0x000297bc) list_double_number_pane_t3_cp2

0xa385,	// (0x0002967b) list_single_graphic_pane_g1_cp2_ParamLimits

0xa385,	// (0x0002967b) list_single_graphic_pane_g1_cp2

0x1c84,	// (0x00020f7a) list_single_graphic_pane_g2_cp2_ParamLimits

0x1c84,	// (0x00020f7a) list_single_graphic_pane_g2_cp2

0x7176,	// (0x0002646c) list_single_graphic_pane_g3_cp2

0xa35b,	// (0x00029651) list_single_graphic_pane_t1_cp2_ParamLimits

0xa35b,	// (0x00029651) list_single_graphic_pane_t1_cp2

0x1c84,	// (0x00020f7a) list_single_number_pane_g1_cp2_ParamLimits

0x1c84,	// (0x00020f7a) list_single_number_pane_g1_cp2

0x7176,	// (0x0002646c) list_single_number_pane_g2_cp2

0xa35b,	// (0x00029651) list_single_number_pane_t1_cp2_ParamLimits

0xa35b,	// (0x00029651) list_single_number_pane_t1_cp2

0xa371,	// (0x00029667) list_single_number_pane_t2_cp2_ParamLimits

0xa371,	// (0x00029667) list_single_number_pane_t2_cp2

0x6f6c,	// (0x00026262) list_double2_pane_g1_cp2_ParamLimits

0x6f6c,	// (0x00026262) list_double2_pane_g1_cp2

0x6f7d,	// (0x00026273) list_double2_pane_g2_cp2

0x70e8,	// (0x000263de) list_double2_pane_t1_cp2_ParamLimits

0x70e8,	// (0x000263de) list_double2_pane_t1_cp2

0x70fe,	// (0x000263f4) list_double2_pane_t2_cp2_ParamLimits

0x70fe,	// (0x000263f4) list_double2_pane_t2_cp2

0x7110,	// (0x00026406) list_double_pane_g1_cp2_ParamLimits

0x7110,	// (0x00026406) list_double_pane_g1_cp2

0x711c,	// (0x00026412) list_double_pane_g2_cp2

0x7124,	// (0x0002641a) list_double_pane_t1_cp2_ParamLimits

0x7124,	// (0x0002641a) list_double_pane_t1_cp2

0x713a,	// (0x00026430) list_double_pane_t2_cp2_ParamLimits

0x713a,	// (0x00026430) list_double_pane_t2_cp2

0x7166,	// (0x0002645c) list_single_pane_cp2_g3

0x1c84,	// (0x00020f7a) list_single_pane_g1_cp2_ParamLimits

0x1c84,	// (0x00020f7a) list_single_pane_g1_cp2

0x7176,	// (0x0002646c) list_single_pane_g2_cp2

0x717e,	// (0x00026474) list_single_pane_t1_cp2_ParamLimits

0x717e,	// (0x00026474) list_single_pane_t1_cp2

0x7196,	// (0x0002648c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7196,	// (0x0002648c) list_single_large_graphic_pane_g1_cp2

0x71a4,	// (0x0002649a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x71a4,	// (0x0002649a) list_single_large_graphic_pane_g2_cp2

0x71b0,	// (0x000264a6) list_single_large_graphic_pane_g3_cp2

0x71b8,	// (0x000264ae) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x71b8,	// (0x000264ae) list_single_large_graphic_pane_g4_cp1

0x71d2,	// (0x000264c8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x71d2,	// (0x000264c8) list_single_large_graphic_pane_t1_cp2

0xa325,	// (0x0002961b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa325,	// (0x0002961b) list_single_graphic_heading_pane_g1_cp2

0xa2f2,	// (0x000295e8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa2f2,	// (0x000295e8) list_single_graphic_heading_pane_g4_cp2

0x7176,	// (0x0002646c) list_single_graphic_heading_pane_g5_cp2

0xa331,	// (0x00029627) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa331,	// (0x00029627) list_single_graphic_heading_pane_t1_cp2

0xa347,	// (0x0002963d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa347,	// (0x0002963d) list_single_graphic_heading_pane_t2_cp2

0xa2e6,	// (0x000295dc) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa2e6,	// (0x000295dc) list_single_2graphic_pane_g1_cp2

0xa2f2,	// (0x000295e8) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa2f2,	// (0x000295e8) list_single_2graphic_pane_g2_cp2

0x7176,	// (0x0002646c) list_single_2graphic_pane_g3_cp2

0xa303,	// (0x000295f9) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa303,	// (0x000295f9) list_single_2graphic_pane_g4_cp2

0xa30f,	// (0x00029605) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa30f,	// (0x00029605) list_single_2graphic_pane_t1_cp2

0x1225,	// (0x0002051b) list_highlight_pane_g10_cp1

0x9ebe,	// (0x000291b4) list_highlight_pane_g1_cp1

0x9ec6,	// (0x000291bc) list_highlight_pane_g2_cp1

0x9ece,	// (0x000291c4) list_highlight_pane_g3_cp1

0x9ed6,	// (0x000291cc) list_highlight_pane_g4_cp1

0x9ede,	// (0x000291d4) list_highlight_pane_g5_cp1

0x9ee6,	// (0x000291dc) list_highlight_pane_g6_cp1

0x9eee,	// (0x000291e4) list_highlight_pane_g7_cp1

0x9ef6,	// (0x000291ec) list_highlight_pane_g8_cp1

0x9efe,	// (0x000291f4) list_highlight_pane_g9_cp1

0x9dde,	// (0x000290d4) form_field_slider_pane_t3

0x9dec,	// (0x000290e2) form_field_slider_pane_t4

0x9dfa,	// (0x000290f0) slider_form_pane_ParamLimits

0x9dfa,	// (0x000290f0) slider_form_pane

0x122f,	// (0x00020525) control_abbreviations

0x122f,	// (0x00020525) control_conventions

0x122f,	// (0x00020525) control_definitions

0x122f,	// (0x00020525) format_table_attribute

0xa5e6,	// (0x000298dc) bg_popup_preview_window_pane_g9

0x122f,	// (0x00020525) format_table_data2

0x122f,	// (0x00020525) format_table_data3

0x122f,	// (0x00020525) format_table_data_example

0x0008,

0x122f,	// (0x00020525) intro_purpose

0xf8ea,	// (0x0002ebe0) bg_popup_preview_window_pane_g

0x122f,	// (0x00020525) texts_category

0x122f,	// (0x00020525) texts_graphics

0x71e8,	// (0x000264de) text_digital

0x71f7,	// (0x000264ed) text_primary

0x7206,	// (0x000264fc) text_primary_small

0x7215,	// (0x0002650b) text_secondary

0x7224,	// (0x0002651a) text_title

0xad68,	// (0x0002a05e) bg_passive_tab_pane_g1_cp3_srt

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp3_srt

0xad71,	// (0x0002a067) bg_passive_tab_pane_g3_cp3_srt

0x128b,	// (0x00020581) bg_active_tab_pane_cp3_srt_ParamLimits

0x128b,	// (0x00020581) bg_active_tab_pane_cp3_srt

0xad7a,	// (0x0002a070) tabs_4_active_pane_srt_g1

0xad82,	// (0x0002a078) tabs_4_active_pane_srt_t1_ParamLimits

0xad82,	// (0x0002a078) tabs_4_active_pane_srt_t1

0xad68,	// (0x0002a05e) bg_active_tab_pane_g1_cp3_copy1

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp3_copy1

0xad71,	// (0x0002a067) bg_active_tab_pane_g3_cp3_copy1

0x128b,	// (0x00020581) tabs_2_long_active_pane_srt_ParamLimits

0x128b,	// (0x00020581) tabs_2_long_active_pane_srt

0x128b,	// (0x00020581) tabs_2_long_passive_pane_srt_ParamLimits

0x128b,	// (0x00020581) tabs_2_long_passive_pane_srt

0x68f5,	// (0x00025beb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x68f5,	// (0x00025beb) bg_passive_tab_pane_cp4_srt

0xaa15,	// (0x00029d0b) bg_passive_tab_pane_g1_cp4_srt

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp4_srt

0xaa1e,	// (0x00029d14) bg_passive_tab_pane_g3_cp4_srt

0x1c90,	// (0x00020f86) bg_active_tab_pane_cp4_srt_ParamLimits

0x1c90,	// (0x00020f86) bg_active_tab_pane_cp4_srt

0xaa27,	// (0x00029d1d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaa27,	// (0x00029d1d) tabs_2_long_active_pane_srt_t1

0xaa15,	// (0x00029d0b) bg_active_tab_pane_g1_cp4_srt

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp4_srt

0xaa1e,	// (0x00029d14) bg_active_tab_pane_g3_cp4_srt

0x127d,	// (0x00020573) tabs_3_long_active_pane_srt_ParamLimits

0x127d,	// (0x00020573) tabs_3_long_active_pane_srt

0x127d,	// (0x00020573) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x127d,	// (0x00020573) tabs_3_long_passive_pane_cp_srt

0x127d,	// (0x00020573) tabs_3_long_passive_pane_srt_ParamLimits

0x127d,	// (0x00020573) tabs_3_long_passive_pane_srt

0x68f5,	// (0x00025beb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x68f5,	// (0x00025beb) bg_passive_tab_pane_cp5_srt

0x6f09,	// (0x000261ff) bg_passive_tab_pane_g1_cp5_srt

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp5_srt

0x6f12,	// (0x00026208) bg_passive_tab_pane_g3_cp5_srt

0x1c90,	// (0x00020f86) bg_active_tab_pane_cp5_srt_ParamLimits

0x1c90,	// (0x00020f86) bg_active_tab_pane_cp5_srt

0xaa03,	// (0x00029cf9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaa03,	// (0x00029cf9) tabs_3_long_active_pane_srt_t1

0x6f09,	// (0x000261ff) bg_active_tab_pane_g1_cp5_srt

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp5_srt

0x6f12,	// (0x00026208) bg_active_tab_pane_g3_cp5_srt

0xa9f5,	// (0x00029ceb) navi_text_pane_srt_t1

0xa9ed,	// (0x00029ce3) navi_icon_pane_srt_g1

0x74a5,	// (0x0002679b) midp_editing_number_pane_srt

0x7233,	// (0x00026529) midp_ticker_pane_srt

0x74ad,	// (0x000267a3) midp_ticker_pane_srt_g1

0x74b5,	// (0x000267ab) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0002ea63) midp_ticker_pane_srt_g

0x74bd,	// (0x000267b3) midp_ticker_pane_srt_t1

0xa9de,	// (0x00029cd4) midp_editing_number_pane_t1_copy1

0x723b,	// (0x00026531) listscroll_midp_pane

0x723b,	// (0x00026531) midp_form_pane

0x72aa,	// (0x000265a0) midp_info_popup_window_ParamLimits

0x72aa,	// (0x000265a0) midp_info_popup_window

0x1a98,	// (0x00020d8e) bg_popup_sub_pane_cp50_ParamLimits

0x1a98,	// (0x00020d8e) bg_popup_sub_pane_cp50

0x9ae8,	// (0x00028dde) listscroll_midp_info_pane_ParamLimits

0x9ae8,	// (0x00028dde) listscroll_midp_info_pane

0x9ac8,	// (0x00028dbe) listscroll_form_midp_pane_ParamLimits

0x9ac8,	// (0x00028dbe) listscroll_form_midp_pane

0x9ad4,	// (0x00028dca) scroll_bar_cp050

0x9aa8,	// (0x00028d9e) list_midp_pane

0xb7e0,	// (0x0002aad6) signal_pane_g2_cp

0x99e2,	// (0x00028cd8) listscroll_midp_info_pane_t1_ParamLimits

0x99e2,	// (0x00028cd8) listscroll_midp_info_pane_t1

0x99fa,	// (0x00028cf0) listscroll_midp_info_pane_t2_ParamLimits

0x99fa,	// (0x00028cf0) listscroll_midp_info_pane_t2

0x9a38,	// (0x00028d2e) listscroll_midp_info_pane_t3_ParamLimits

0x9a38,	// (0x00028d2e) listscroll_midp_info_pane_t3

0x9a72,	// (0x00028d68) listscroll_midp_info_pane_t4_ParamLimits

0x9a72,	// (0x00028d68) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0002eb1b) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0002eb1b) listscroll_midp_info_pane_t

0x1b18,	// (0x00020e0e) scroll_pane_cp21

0x997c,	// (0x00028c72) form_midp_field_choice_group_pane

0x9985,	// (0x00028c7b) form_midp_field_text_pane

0x99c8,	// (0x00028cbe) form_midp_field_time_pane

0x99d0,	// (0x00028cc6) form_midp_gauge_slider_pane

0x99d9,	// (0x00028ccf) form_midp_gauge_wait_pane

0x122f,	// (0x00020525) form_midp_image_pane

0x58e2,	// (0x00024bd8) list_single_midp_pane_ParamLimits

0x58e2,	// (0x00024bd8) list_single_midp_pane

0x9940,	// (0x00028c36) form_midp_field_text_pane_t1

0x9732,	// (0x00028a28) input_focus_pane_cp050

0x996b,	// (0x00028c61) list_midp_form_text_pane

0x990f,	// (0x00028c05) form_midp_field_choice_group_pane_t1

0x991d,	// (0x00028c13) input_focus_pane_cp051

0x9931,	// (0x00028c27) list_midp_choice_pane

0x122f,	// (0x00020525) status_idle_pane

0x98f3,	// (0x00028be9) form_midp_field_time_pane_t1

0x1225,	// (0x0002051b) wait_anim_pane_g2_copy1

0x9901,	// (0x00028bf7) form_midp_field_time_pane_t2

0x0001,

0x735a,	// (0x00026650) aid_navinavi_width_2_pane

0xf820,	// (0x0002eb16) form_midp_field_time_pane_t

0x122f,	// (0x00020525) input_focus_pane_cp052

0x122f,	// (0x00020525) bg_input_focus_pane_cp040

0x98b3,	// (0x00028ba9) form_midp_gauge_slider_pane_t1

0x98c1,	// (0x00028bb7) form_midp_gauge_slider_pane_t2

0x98cf,	// (0x00028bc5) form_midp_gauge_slider_pane_t3

0x98dd,	// (0x00028bd3) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0002eb0d) form_midp_gauge_slider_pane_t

0x98eb,	// (0x00028be1) form_midp_slider_pane

0x128b,	// (0x00020581) bg_input_focus_pane_cp041_ParamLimits

0x128b,	// (0x00020581) bg_input_focus_pane_cp041

0x9880,	// (0x00028b76) form_midp_gauge_wait_pane_t1_ParamLimits

0x9880,	// (0x00028b76) form_midp_gauge_wait_pane_t1

0x9892,	// (0x00028b88) form_midp_gauge_wait_pane_t2_ParamLimits

0x9892,	// (0x00028b88) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0002eb08) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0002eb08) form_midp_gauge_wait_pane_t

0x98a4,	// (0x00028b9a) form_midp_wait_pane_ParamLimits

0x98a4,	// (0x00028b9a) form_midp_wait_pane

0x9848,	// (0x00028b3e) form_midp_image_pane_g1

0x9851,	// (0x00028b47) form_midp_image_pane_t1

0x9860,	// (0x00028b56) form_midp_image_pane_t2

0x986f,	// (0x00028b65) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0002eb01) form_midp_image_pane_t

0x983f,	// (0x00028b35) list_single_midp_pane_g1

0x58d3,	// (0x00024bc9) list_single_midp_pane_t1

0x9825,	// (0x00028b1b) list_midp_form_item_pane_ParamLimits

0x9825,	// (0x00028b1b) list_midp_form_item_pane

0x7302,	// (0x000265f8) list_midp_form_item_pane_t1

0x7311,	// (0x00026607) midp_ticker_pane_g1

0x731d,	// (0x00026613) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0002ea49) midp_ticker_pane_g

0x7329,	// (0x0002661f) midp_ticker_pane_t1

0xac4b,	// (0x00029f41) midp_editing_number_pane_t1

0xac29,	// (0x00029f1f) midp_editing_number_pane

0xac38,	// (0x00029f2e) midp_ticker_pane

0xa9ce,	// (0x00029cc4) ai_message_heading_pane

0x122f,	// (0x00020525) bg_popup_window_pane_cp14

0xa9d6,	// (0x00029ccc) listscroll_ai_message_pane

0xa954,	// (0x00029c4a) ai_message_heading_pane_g1_ParamLimits

0xa954,	// (0x00029c4a) ai_message_heading_pane_g1

0xa960,	// (0x00029c56) ai_message_heading_pane_g2_ParamLimits

0xa960,	// (0x00029c56) ai_message_heading_pane_g2

0xa96e,	// (0x00029c64) ai_message_heading_pane_g3_ParamLimits

0xa96e,	// (0x00029c64) ai_message_heading_pane_g3

0xa97a,	// (0x00029c70) ai_message_heading_pane_g4_ParamLimits

0xa97a,	// (0x00029c70) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0002ec42) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0002ec42) ai_message_heading_pane_g

0xa986,	// (0x00029c7c) ai_message_heading_pane_t1_ParamLimits

0xa986,	// (0x00029c7c) ai_message_heading_pane_t1

0xa9a0,	// (0x00029c96) ai_message_heading_pane_t2_ParamLimits

0xa9a0,	// (0x00029c96) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0002ec4b) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0002ec4b) ai_message_heading_pane_t

0xa9b4,	// (0x00029caa) bg_popup_heading_pane_cp1_ParamLimits

0xa9b4,	// (0x00029caa) bg_popup_heading_pane_cp1

0xa942,	// (0x00029c38) list_ai_message_pane_ParamLimits

0xa942,	// (0x00029c38) list_ai_message_pane

0x1b18,	// (0x00020e0e) scroll_pane_cp10

0xa8de,	// (0x00029bd4) list_ai_message_pane_g1

0xa8e6,	// (0x00029bdc) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0002ec1f) list_ai_message_pane_g

0xa8ee,	// (0x00029be4) list_ai_message_pane_t1_ParamLimits

0xa8ee,	// (0x00029be4) list_ai_message_pane_t1

0xa903,	// (0x00029bf9) list_ai_message_pane_t2_ParamLimits

0xa903,	// (0x00029bf9) list_ai_message_pane_t2

0xa918,	// (0x00029c0e) list_ai_message_pane_t3_ParamLimits

0xa918,	// (0x00029c0e) list_ai_message_pane_t3

0xa92d,	// (0x00029c23) list_ai_message_pane_t4_ParamLimits

0xa92d,	// (0x00029c23) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0002ec24) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0002ec24) list_ai_message_pane_t

0xa8c7,	// (0x00029bbd) cell_ai_soft_ind_pane_ParamLimits

0xa8c7,	// (0x00029bbd) cell_ai_soft_ind_pane

0x733b,	// (0x00026631) cell_ai_soft_ind_pane_g1_ParamLimits

0x733b,	// (0x00026631) cell_ai_soft_ind_pane_g1

0x122f,	// (0x00020525) grid_highlight_cp1

0x7348,	// (0x0002663e) text_secondary_cp56_ParamLimits

0x7348,	// (0x0002663e) text_secondary_cp56

0xa89c,	// (0x00029b92) example_general_pane_ParamLimits

0xa89c,	// (0x00029b92) example_general_pane

0xa8a8,	// (0x00029b9e) example_parent_pane_g1_ParamLimits

0xa8a8,	// (0x00029b9e) example_parent_pane_g1

0xa8b4,	// (0x00029baa) example_parent_pane_t1_ParamLimits

0xa8b4,	// (0x00029baa) example_parent_pane_t1

0x7b86,	// (0x00026e7c) popup_preview_text_window_ParamLimits

0x7b86,	// (0x00026e7c) popup_preview_text_window

0x716e,	// (0x00026464) list_single_pane_cp2_g4

0x14a6,	// (0x0002079c) bg_popup_preview_window_pane_ParamLimits

0x14a6,	// (0x0002079c) bg_popup_preview_window_pane

0xa5f0,	// (0x000298e6) popup_preview_text_window_t1_ParamLimits

0xa5f0,	// (0x000298e6) popup_preview_text_window_t1

0xa60e,	// (0x00029904) popup_preview_text_window_t2_ParamLimits

0xa60e,	// (0x00029904) popup_preview_text_window_t2

0xa657,	// (0x0002994d) popup_preview_text_window_t3_ParamLimits

0xa657,	// (0x0002994d) popup_preview_text_window_t3

0xa69c,	// (0x00029992) popup_preview_text_window_t4_ParamLimits

0xa69c,	// (0x00029992) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0002ebf3) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0002ebf3) popup_preview_text_window_t

0xa71a,	// (0x00029a10) scroll_pane_cp11

0x831a,	// (0x00027610) bg_popup_preview_window_pane_g1

0xa5a4,	// (0x0002989a) bg_popup_preview_window_pane_g2

0xa5ae,	// (0x000298a4) bg_popup_preview_window_pane_g3

0xa5b8,	// (0x000298ae) bg_popup_preview_window_pane_g4

0xa5c2,	// (0x000298b8) bg_popup_preview_window_pane_g5

0xa5cc,	// (0x000298c2) bg_popup_preview_window_pane_g6

0xa5d4,	// (0x000298ca) bg_popup_preview_window_pane_g7

0xa5dc,	// (0x000298d2) bg_popup_preview_window_pane_g8

0x60fa,	// (0x000253f0) aid_popup_width_pane

0x7b62,	// (0x00026e58) popup_midp_note_alarm_window_ParamLimits

0x7b62,	// (0x00026e58) popup_midp_note_alarm_window

0x1951,	// (0x00020c47) data_form_pane_ParamLimits

0x5530,	// (0x00024826) form_field_data_pane_g1

0x553a,	// (0x00024830) form_field_data_pane_t1_ParamLimits

0x195d,	// (0x00020c53) input_focus_pane_ParamLimits

0x5554,	// (0x0002484a) data_form_wide_pane_ParamLimits

0x5565,	// (0x0002485b) form_field_data_wide_pane_g1

0x5571,	// (0x00024867) form_field_data_wide_pane_t1_ParamLimits

0x165e,	// (0x00020954) input_focus_pane_cp6_ParamLimits

0x68ba,	// (0x00025bb0) input_popup_find_pane_g1_ParamLimits

0x68ba,	// (0x00025bb0) input_popup_find_pane_g1

0x6a13,	// (0x00025d09) aid_navi_side_left_pane

0x6a28,	// (0x00025d1e) aid_navi_side_right_pane

0x9fb9,	// (0x000292af) bg_popup_window_pane_cp30_ParamLimits

0x9fb9,	// (0x000292af) bg_popup_window_pane_cp30

0xa033,	// (0x00029329) popup_midp_note_alarm_window_g1_ParamLimits

0xa033,	// (0x00029329) popup_midp_note_alarm_window_g1

0xa063,	// (0x00029359) popup_midp_note_alarm_window_t1_ParamLimits

0xa063,	// (0x00029359) popup_midp_note_alarm_window_t1

0xa104,	// (0x000293fa) popup_midp_note_alarm_window_t2_ParamLimits

0xa104,	// (0x000293fa) popup_midp_note_alarm_window_t2

0xa1b2,	// (0x000294a8) popup_midp_note_alarm_window_t3_ParamLimits

0xa1b2,	// (0x000294a8) popup_midp_note_alarm_window_t3

0xa1e4,	// (0x000294da) popup_midp_note_alarm_window_t4_ParamLimits

0xa1e4,	// (0x000294da) popup_midp_note_alarm_window_t4

0xa20a,	// (0x00029500) popup_midp_note_alarm_window_t5_ParamLimits

0xa20a,	// (0x00029500) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0002eb90) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0002eb90) popup_midp_note_alarm_window_t

0xa2b6,	// (0x000295ac) wait_bar_pane_cp1_ParamLimits

0xa2b6,	// (0x000295ac) wait_bar_pane_cp1

0x122f,	// (0x00020525) wait_anim_pane_copy1

0x122f,	// (0x00020525) wait_border_pane_copy1

0x9c9e,	// (0x00028f94) wait_border_pane_g1_copy1

0x558b,	// (0x00024881) form_field_popup_pane_g1

0x5593,	// (0x00024889) form_field_popup_pane_t1_ParamLimits

0x195d,	// (0x00020c53) input_focus_pane_cp7_ParamLimits

0x19c2,	// (0x00020cb8) list_form_pane_ParamLimits

0x55ad,	// (0x000248a3) form_field_popup_wide_pane_g1

0x55b5,	// (0x000248ab) form_field_popup_wide_pane_t1_ParamLimits

0x195d,	// (0x00020c53) input_focus_pane_cp8_ParamLimits

0x19e8,	// (0x00020cde) list_form_wide_pane_ParamLimits

0xae06,	// (0x0002a0fc) aid_size_cell_graphic_pane

0x5641,	// (0x00024937) data_form_pane_t1_ParamLimits

0x592a,	// (0x00024c20) data_form_wide_pane_t1_ParamLimits

0x7ea9,	// (0x0002719f) bg_status_flat_pane

0x651f,	// (0x00025815) title_pane_t1_ParamLimits

0x1245,	// (0x0002053b) title_pane_t2_ParamLimits

0x126b,	// (0x00020561) title_pane_t3_ParamLimits

0xf557,	// (0x0002e84d) title_pane_t_ParamLimits

0x6b79,	// (0x00025e6f) level_1_signal_ParamLimits

0x6b86,	// (0x00025e7c) level_2_signal_ParamLimits

0x6b93,	// (0x00025e89) level_3_signal_ParamLimits

0x6ba0,	// (0x00025e96) level_4_signal_ParamLimits

0x6bad,	// (0x00025ea3) level_5_signal_ParamLimits

0x6bba,	// (0x00025eb0) level_6_signal_ParamLimits

0x6bc7,	// (0x00025ebd) level_7_signal_ParamLimits

0x6b79,	// (0x00025e6f) level_1_battery_ParamLimits

0x6b86,	// (0x00025e7c) level_2_battery_ParamLimits

0x6b93,	// (0x00025e89) level_3_battery_ParamLimits

0x6ba0,	// (0x00025e96) level_4_battery_ParamLimits

0x6bad,	// (0x00025ea3) level_5_battery_ParamLimits

0x6bba,	// (0x00025eb0) level_6_battery_ParamLimits

0x6bc7,	// (0x00025ebd) level_7_battery_ParamLimits

0x9ebe,	// (0x000291b4) bg_status_flat_pane_g1

0x9ec6,	// (0x000291bc) bg_status_flat_pane_g2

0x9ece,	// (0x000291c4) bg_status_flat_pane_g3

0x9ed6,	// (0x000291cc) bg_status_flat_pane_g4

0x9ede,	// (0x000291d4) bg_status_flat_pane_g5

0x9ee6,	// (0x000291dc) bg_status_flat_pane_g6

0x9eee,	// (0x000291e4) bg_status_flat_pane_g7

0x658f,	// (0x00025885) tabs_3_active_pane_t1_ParamLimits

0x658f,	// (0x00025885) tabs_3_passive_pane_t1_ParamLimits

0x65a9,	// (0x0002589f) tabs_4_active_pane_t1_ParamLimits

0x65a9,	// (0x0002589f) tabs_4_1_passive_pane_t1_ParamLimits

0x68d0,	// (0x00025bc6) tabs_2_active_pane_t1_ParamLimits

0x68d0,	// (0x00025bc6) tabs_2_passive_pane_t1_ParamLimits

0x1c90,	// (0x00020f86) bg_active_tab_pane_cp4_ParamLimits

0x68e2,	// (0x00025bd8) tabs_2_long_active_pane_t1_ParamLimits

0x68f5,	// (0x00025beb) bg_passive_tab_pane_cp4_ParamLimits

0x8386,	// (0x0002767c) list_single_midp_graphic_pane_t1_ParamLimits

0x1c90,	// (0x00020f86) bg_active_tab_pane_cp5_ParamLimits

0x6901,	// (0x00025bf7) tabs_3_long_active_pane_t1_ParamLimits

0x68f5,	// (0x00025beb) bg_passive_tab_pane_cp5_ParamLimits

0x8386,	// (0x0002767c) list_single_midp_graphic_pane_t1

0x7ea9,	// (0x0002719f) bg_status_flat_pane_ParamLimits

0x7f6e,	// (0x00027264) indicator_pane_cp2_ParamLimits

0x7f6e,	// (0x00027264) indicator_pane_cp2

0x80b1,	// (0x000273a7) navi_pane_srt_ParamLimits

0x80b1,	// (0x000273a7) navi_pane_srt

0x80d5,	// (0x000273cb) popup_clock_digital_analogue_window_cp1

0x12e9,	// (0x000205df) indicator_pane_t1

0x7233,	// (0x00026529) copy_highlight_pane

0x7233,	// (0x00026529) cursor_graphics_pane

0x7233,	// (0x00026529) graphic_within_text_pane

0x7233,	// (0x00026529) link_highlight_pane

0xa6dd,	// (0x000299d3) popup_preview_text_window_t5_ParamLimits

0xa6dd,	// (0x000299d3) popup_preview_text_window_t5

0x7364,	// (0x0002665a) cursor_digital_pane

0x7364,	// (0x0002665a) cursor_primary_pane

0x7375,	// (0x0002666b) cursor_primary_small_pane

0x737d,	// (0x00026673) cursor_secondary_pane

0x7385,	// (0x0002667b) cursor_title_pane

0x7364,	// (0x0002665a) link_highlight_digital_pane

0x736c,	// (0x00026662) link_highlight_primary_pane

0x7375,	// (0x0002666b) link_highlight_primary_small_pane

0x737d,	// (0x00026673) link_highlight_secondary_pane

0x7385,	// (0x0002667b) link_highlight_title_pane

0x7364,	// (0x0002665a) copy_highlight_digital_pane

0x7364,	// (0x0002665a) copy_highlight_primary_pane

0x7375,	// (0x0002666b) copy_highlight_primary_small_pane

0x737d,	// (0x00026673) copy_highlight_secondary_pane

0x7385,	// (0x0002667b) copy_highlight_title_pane

0x737d,	// (0x00026673) graphic_text_digital_pane

0x9f5c,	// (0x00029252) graphic_text_primary_pane

0x9f65,	// (0x0002925b) graphic_text_primary_small_pane

0x7375,	// (0x0002666b) graphic_text_secondary_pane

0x7364,	// (0x0002665a) graphic_text_title_pane

0x738d,	// (0x00026683) cursor_primary_pane_g1

0x9f4e,	// (0x00029244) cursor_text_primary_t1

0x9f36,	// (0x0002922c) cursor_primary_small_pane_g1

0x9f40,	// (0x00029236) cursor_text_primary_small_t1

0x9f1e,	// (0x00029214) cursor_primary_small_pane_g1_copy1

0x9f28,	// (0x0002921e) cursor_text_primary_small_t1_copy1

0x9f06,	// (0x000291fc) cursor_text_title_t1

0x9f14,	// (0x0002920a) cursor_title_pane_g1

0x738d,	// (0x00026683) cursor_digital_pane_g1

0x7397,	// (0x0002668d) cursor_text_digital_t1

0x73a5,	// (0x0002669b) link_highlight_primary_pane_g1

0x9eaf,	// (0x000291a5) link_highlight_primary_pane_t1

0x73a5,	// (0x0002669b) link_highlight_primary_small_pane_g1

0x73ad,	// (0x000266a3) link_highlight_primary_small_pane_t1

0x73bc,	// (0x000266b2) link_highlight_secondary_pane_g1

0x73c4,	// (0x000266ba) link_highlight_secondary_pane_t1

0x9e23,	// (0x00029119) link_highlight_title_pane_g1

0x9e2b,	// (0x00029121) link_highlight_title_pane_t1

0x9e0c,	// (0x00029102) link_highlight_digital_pane_g1

0x9e14,	// (0x0002910a) link_highlight_digital_pane_t1

0x9cd4,	// (0x00028fca) copy_highlight_primary_pane_g1

0x9ceb,	// (0x00028fe1) copy_highlight_primary_pane_t1

0x9cd4,	// (0x00028fca) copy_highlight_primary_small_pane_g1

0x9cdc,	// (0x00028fd2) copy_highlight_primary_small_pane_t1

0x73d3,	// (0x000266c9) copy_highlight_secondary_pane_g1

0x73db,	// (0x000266d1) copy_highlight_secondary_pane_t1

0x9cbd,	// (0x00028fb3) copy_highlight_title_pane_g1

0x9cc5,	// (0x00028fbb) copy_highlight_title_pane_t1

0x9cd4,	// (0x00028fca) copy_highlight_digital_pane_g1

0xafd8,	// (0x0002a2ce) copy_highlight_digital_pane_t1

0xaf2c,	// (0x0002a222) graphic_text_primary_pane_g1

0xafbc,	// (0x0002a2b2) graphic_text_primary_pane_t1

0xafca,	// (0x0002a2c0) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0002ecbf) graphic_text_primary_pane_t

0xaf98,	// (0x0002a28e) graphic_text_primary_small_pane_g1

0xafa0,	// (0x0002a296) graphic_text_primary_small_pane_t1

0xafae,	// (0x0002a2a4) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0002ecba) graphic_text_primary_small_pane_t

0xaf74,	// (0x0002a26a) graphic_text_secondary_pane_g1

0xaf7c,	// (0x0002a272) graphic_text_secondary_pane_t1

0xaf8a,	// (0x0002a280) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0002ecb5) graphic_text_secondary_pane_t

0xaf50,	// (0x0002a246) graphic_text_title_pane_g1

0xaf58,	// (0x0002a24e) graphic_text_title_pane_t1

0xaf66,	// (0x0002a25c) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0002ecb0) graphic_text_title_pane_t

0xaf2c,	// (0x0002a222) graphic_text_digital_pane_g1

0xaf34,	// (0x0002a22a) graphic_text_digital_pane_t1

0xaf42,	// (0x0002a238) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0002ecab) graphic_text_digital_pane_t

0x128b,	// (0x00020581) navi_icon_pane_srt_ParamLimits

0x128b,	// (0x00020581) navi_icon_pane_srt

0x122f,	// (0x00020525) navi_midp_pane_srt

0x122f,	// (0x00020525) navi_navi_pane_srt

0x128b,	// (0x00020581) navi_text_pane_srt_ParamLimits

0x128b,	// (0x00020581) navi_text_pane_srt

0xaef7,	// (0x0002a1ed) navi_navi_icon_text_pane_srt

0xaeff,	// (0x0002a1f5) navi_navi_pane_srt_g1_ParamLimits

0xaeff,	// (0x0002a1f5) navi_navi_pane_srt_g1

0xaf11,	// (0x0002a207) navi_navi_pane_srt_g2_ParamLimits

0xaf11,	// (0x0002a207) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0002eca6) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0002eca6) navi_navi_pane_srt_g

0xaf23,	// (0x0002a219) navi_navi_tabs_pane_srt

0xaef7,	// (0x0002a1ed) navi_navi_text_pane_srt

0xaef7,	// (0x0002a1ed) navi_navi_volume_pane_srt

0xaee8,	// (0x0002a1de) navi_navi_text_pane_srt_t1

0x8722,	// (0x00027a18) navi_navi_volume_pane_srt_g1

0x872a,	// (0x00027a20) volume_small_pane_srt_ParamLimits

0x872a,	// (0x00027a20) volume_small_pane_srt

0x73ea,	// (0x000266e0) volume_small_pane_srt_g1_ParamLimits

0x73ea,	// (0x000266e0) volume_small_pane_srt_g1

0x73fa,	// (0x000266f0) volume_small_pane_srt_g2_ParamLimits

0x73fa,	// (0x000266f0) volume_small_pane_srt_g2

0x740b,	// (0x00026701) volume_small_pane_srt_g3_ParamLimits

0x740b,	// (0x00026701) volume_small_pane_srt_g3

0x741c,	// (0x00026712) volume_small_pane_srt_g4_ParamLimits

0x741c,	// (0x00026712) volume_small_pane_srt_g4

0x742d,	// (0x00026723) volume_small_pane_srt_g5_ParamLimits

0x742d,	// (0x00026723) volume_small_pane_srt_g5

0x743e,	// (0x00026734) volume_small_pane_srt_g6_ParamLimits

0x743e,	// (0x00026734) volume_small_pane_srt_g6

0x744f,	// (0x00026745) volume_small_pane_srt_g7_ParamLimits

0x744f,	// (0x00026745) volume_small_pane_srt_g7

0x7460,	// (0x00026756) volume_small_pane_srt_g8_ParamLimits

0x7460,	// (0x00026756) volume_small_pane_srt_g8

0x7471,	// (0x00026767) volume_small_pane_srt_g9_ParamLimits

0x7471,	// (0x00026767) volume_small_pane_srt_g9

0x7482,	// (0x00026778) volume_small_pane_srt_g10_ParamLimits

0x7482,	// (0x00026778) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0002ea4e) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0002ea4e) volume_small_pane_srt_g

0x155b,	// (0x00020851) query_popup_data_pane_cp2

0xaece,	// (0x0002a1c4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaece,	// (0x0002a1c4) navi_navi_icon_text_pane_srt_t1

0x9f5c,	// (0x00029252) navi_tabs_2_long_pane_srt

0x9f5c,	// (0x00029252) navi_tabs_2_pane_srt

0x9f5c,	// (0x00029252) navi_tabs_3_long_pane_srt

0x9f5c,	// (0x00029252) navi_tabs_3_pane_srt

0x9f5c,	// (0x00029252) navi_tabs_4_pane_srt

0x8702,	// (0x000279f8) tabs_2_active_pane_srt_ParamLimits

0x8702,	// (0x000279f8) tabs_2_active_pane_srt

0x8712,	// (0x00027a08) tabs_2_passive_pane_srt_ParamLimits

0x8712,	// (0x00027a08) tabs_2_passive_pane_srt

0x7789,	// (0x00026a7f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7789,	// (0x00026a7f) bg_passive_tab_pane_cp1_srt

0xae9a,	// (0x0002a190) bg_passive_tab_pane_g1_cp1_srt

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp1_srt

0xaea3,	// (0x0002a199) bg_passive_tab_pane_g3_cp1_srt

0x128b,	// (0x00020581) bg_active_tab_pane_cp1_srt_ParamLimits

0x128b,	// (0x00020581) bg_active_tab_pane_cp1_srt

0xaeac,	// (0x0002a1a2) tabs_2_active_pane_srt_g1

0xaeb4,	// (0x0002a1aa) tabs_2_active_pane_srt_t1_ParamLimits

0xaeb4,	// (0x0002a1aa) tabs_2_active_pane_srt_t1

0xae9a,	// (0x0002a190) bg_active_tab_pane_g1_cp1_srt

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp1_srt

0xaea3,	// (0x0002a199) bg_active_tab_pane_g3_cp1_srt

0x86cf,	// (0x000279c5) tabs_3_active_pane_srt_ParamLimits

0x86cf,	// (0x000279c5) tabs_3_active_pane_srt

0x86e0,	// (0x000279d6) tabs_3_passive_pane_cp_srt_ParamLimits

0x86e0,	// (0x000279d6) tabs_3_passive_pane_cp_srt

0x86f1,	// (0x000279e7) tabs_3_passive_pane_srt_ParamLimits

0x86f1,	// (0x000279e7) tabs_3_passive_pane_srt

0x7789,	// (0x00026a7f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7789,	// (0x00026a7f) bg_passive_tab_pane_cp2_srt

0x7493,	// (0x00026789) bg_passive_tab_pane_g1_cp2_srt

0x6d3e,	// (0x00026034) bg_passive_tab_pane_g2_cp2_srt

0x749c,	// (0x00026792) bg_passive_tab_pane_g3_cp2_srt

0x128b,	// (0x00020581) bg_active_tab_pane_cp2_srt_ParamLimits

0x128b,	// (0x00020581) bg_active_tab_pane_cp2_srt

0xae80,	// (0x0002a176) tabs_3_active_pane_srt_g1

0xae88,	// (0x0002a17e) tabs_3_active_pane_srt_t1_ParamLimits

0xae88,	// (0x0002a17e) tabs_3_active_pane_srt_t1

0x7493,	// (0x00026789) bg_active_tab_pane_g1_cp2_srt

0x6d3e,	// (0x00026034) bg_active_tab_pane_g2_cp2_srt

0x749c,	// (0x00026792) bg_active_tab_pane_g3_cp2_srt

0x8687,	// (0x0002797d) tabs_4_active_pane_srt_ParamLimits

0x8687,	// (0x0002797d) tabs_4_active_pane_srt

0x8699,	// (0x0002798f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8699,	// (0x0002798f) tabs_4_passive_pane_cp2_srt

0x7751,	// (0x00026a47) aid_size_cell_toolbar

0x68f5,	// (0x00025beb) main_idle_act_pane_ParamLimits

0x7988,	// (0x00026c7e) popup_large_graphic_colour_window_ParamLimits

0x7d2f,	// (0x00027025) popup_toolbar_window_ParamLimits

0x7d2f,	// (0x00027025) popup_toolbar_window

0x596e,	// (0x00024c64) list_single_graphic_2heading_pane_ParamLimits

0x596e,	// (0x00024c64) list_single_graphic_2heading_pane

0x31d1,	// (0x000224c7) aid_size_cell_apps_grid_lsc_pane

0x31e3,	// (0x000224d9) aid_size_cell_apps_grid_prt_pane

0x7789,	// (0x00026a7f) bg_wml_button_pane_cp1_ParamLimits

0x7789,	// (0x00026a7f) bg_wml_button_pane_cp1

0x9940,	// (0x00028c36) form_midp_field_text_pane_t1_ParamLimits

0x9732,	// (0x00028a28) input_focus_pane_cp050_ParamLimits

0x996b,	// (0x00028c61) list_midp_form_text_pane_ParamLimits

0x991d,	// (0x00028c13) input_focus_pane_cp051_ParamLimits

0x9931,	// (0x00028c27) list_midp_choice_pane_ParamLimits

0x97eb,	// (0x00028ae1) list_single_2graphic_pane_cp3_ParamLimits

0x97eb,	// (0x00028ae1) list_single_2graphic_pane_cp3

0x9801,	// (0x00028af7) list_single_midp_graphic_pane_ParamLimits

0x9801,	// (0x00028af7) list_single_midp_graphic_pane

0x577d,	// (0x00024a73) list_single_graphic_2heading_pane_g1_ParamLimits

0x577d,	// (0x00024a73) list_single_graphic_2heading_pane_g1

0x5789,	// (0x00024a7f) list_single_graphic_2heading_pane_g4_ParamLimits

0x5789,	// (0x00024a7f) list_single_graphic_2heading_pane_g4

0x5795,	// (0x00024a8b) list_single_graphic_2heading_pane_g5_ParamLimits

0x5795,	// (0x00024a8b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0002eaa1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0002eaa1) list_single_graphic_2heading_pane_g

0x57a1,	// (0x00024a97) list_single_graphic_2heading_pane_t1_ParamLimits

0x57a1,	// (0x00024a97) list_single_graphic_2heading_pane_t1

0x57b5,	// (0x00024aab) list_single_graphic_2heading_pane_t2_ParamLimits

0x57b5,	// (0x00024aab) list_single_graphic_2heading_pane_t2

0x57d1,	// (0x00024ac7) list_single_graphic_2heading_pane_t3_ParamLimits

0x57d1,	// (0x00024ac7) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0002eaa8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0002eaa8) list_single_graphic_2heading_pane_t

0x8228,	// (0x0002751e) bg_popup_sub_pane_cp2

0x8252,	// (0x00027548) grid_toobar_pane

0x828e,	// (0x00027584) cell_toolbar_pane_ParamLimits

0x828e,	// (0x00027584) cell_toolbar_pane

0x82be,	// (0x000275b4) cell_toolbar_pane_g1_ParamLimits

0x82be,	// (0x000275b4) cell_toolbar_pane_g1

0x82d2,	// (0x000275c8) cell_toolbar_pane_g2_ParamLimits

0x82d2,	// (0x000275c8) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0002eab6) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0002eab6) cell_toolbar_pane_g

0x82f4,	// (0x000275ea) grid_highlight_pane_cp2_ParamLimits

0x82f4,	// (0x000275ea) grid_highlight_pane_cp2

0x830e,	// (0x00027604) toolbar_button_pane

0x831a,	// (0x00027610) toolbar_button_pane_g1

0x8322,	// (0x00027618) toolbar_button_pane_g2

0x832a,	// (0x00027620) toolbar_button_pane_g3

0x96de,	// (0x000289d4) toolbar_button_pane_g4

0x8332,	// (0x00027628) toolbar_button_pane_g5

0x96e6,	// (0x000289dc) toolbar_button_pane_g6

0x96ee,	// (0x000289e4) toolbar_button_pane_g7

0x96f6,	// (0x000289ec) toolbar_button_pane_g8

0x96fe,	// (0x000289f4) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0002eabb) toolbar_button_pane_g

0x8342,	// (0x00027638) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8342,	// (0x00027638) list_single_2graphic_pane_g1_cp3

0x834e,	// (0x00027644) list_single_2graphic_pane_g2_cp3_ParamLimits

0x834e,	// (0x00027644) list_single_2graphic_pane_g2_cp3

0x7069,	// (0x0002635f) list_single_2graphic_pane_g3_cp3

0x835f,	// (0x00027655) list_single_2graphic_pane_g4_cp3_ParamLimits

0x835f,	// (0x00027655) list_single_2graphic_pane_g4_cp3

0x836b,	// (0x00027661) list_single_2graphic_pane_t1_cp3_ParamLimits

0x836b,	// (0x00027661) list_single_2graphic_pane_t1_cp3

0x705d,	// (0x00026353) list_single_midp_graphic_pane_g2_ParamLimits

0x705d,	// (0x00026353) list_single_midp_graphic_pane_g2

0x7759,	// (0x00026a4f) aid_zoom_text_primary

0x576d,	// (0x00024a63) aid_zoom_text_secondary

0x754d,	// (0x00026843) status_small_pane_g7_ParamLimits

0x754d,	// (0x00026843) status_small_pane_g7

0x7570,	// (0x00026866) status_small_pane_t1_ParamLimits

0x64fa,	// (0x000257f0) title_pane_g2

0x0003,

0xf54e,	// (0x0002e844) title_pane_g

0x6763,	// (0x00025a59) aid_size_cell_colour_1_pane_ParamLimits

0x6763,	// (0x00025a59) aid_size_cell_colour_1_pane

0x6777,	// (0x00025a6d) aid_size_cell_colour_2_pane_ParamLimits

0x6777,	// (0x00025a6d) aid_size_cell_colour_2_pane

0x678b,	// (0x00025a81) aid_size_cell_colour_3_pane_ParamLimits

0x678b,	// (0x00025a81) aid_size_cell_colour_3_pane

0x679f,	// (0x00025a95) aid_size_cell_colour_4_pane_ParamLimits

0x679f,	// (0x00025a95) aid_size_cell_colour_4_pane

0x694f,	// (0x00025c45) title_pane_stacon_g1_ParamLimits

0x694f,	// (0x00025c45) title_pane_stacon_g1

0x9d42,	// (0x00029038) popup_note_wait_window_g3_ParamLimits

0x9d42,	// (0x00029038) popup_note_wait_window_g3

0x9db9,	// (0x000290af) popup_note_wait_window_t5_ParamLimits

0x9db9,	// (0x000290af) popup_note_wait_window_t5

0x122f,	// (0x00020525) main_feb_china_hwr_fs_writing_pane

0x784f,	// (0x00026b45) popup_feb_china_hwr_fs_window_ParamLimits

0x784f,	// (0x00026b45) popup_feb_china_hwr_fs_window

0x839c,	// (0x00027692) aid_size_cell_hwr_fs_ParamLimits

0x839c,	// (0x00027692) aid_size_cell_hwr_fs

0x9732,	// (0x00028a28) bg_popup_sub_pane_cp3_ParamLimits

0x9732,	// (0x00028a28) bg_popup_sub_pane_cp3

0x83b1,	// (0x000276a7) grid_hwr_fs_pane_ParamLimits

0x83b1,	// (0x000276a7) grid_hwr_fs_pane

0x83c9,	// (0x000276bf) linegrid_hwr_fs_pane_ParamLimits

0x83c9,	// (0x000276bf) linegrid_hwr_fs_pane

0x83d9,	// (0x000276cf) cell_hwr_fs_pane_ParamLimits

0x83d9,	// (0x000276cf) cell_hwr_fs_pane

0x973e,	// (0x00028a34) linegrid_hwr_fs_pane_g1_ParamLimits

0x973e,	// (0x00028a34) linegrid_hwr_fs_pane_g1

0x974a,	// (0x00028a40) linegrid_hwr_fs_pane_g2_ParamLimits

0x974a,	// (0x00028a40) linegrid_hwr_fs_pane_g2

0x975c,	// (0x00028a52) linegrid_hwr_fs_pane_g3_ParamLimits

0x975c,	// (0x00028a52) linegrid_hwr_fs_pane_g3

0x83fd,	// (0x000276f3) linegrid_hwr_fs_pane_g4_ParamLimits

0x83fd,	// (0x000276f3) linegrid_hwr_fs_pane_g4

0x841b,	// (0x00027711) linegrid_hwr_fs_pane_g5_ParamLimits

0x841b,	// (0x00027711) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0002eae6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0002eae6) linegrid_hwr_fs_pane_g

0x9768,	// (0x00028a5e) cell_hwr_fs_pane_g1_ParamLimits

0x9768,	// (0x00028a5e) cell_hwr_fs_pane_g1

0x8163,	// (0x00027459) cell_hwr_fs_pane_g2_ParamLimits

0x8163,	// (0x00027459) cell_hwr_fs_pane_g2

0x977e,	// (0x00028a74) cell_hwr_fs_pane_g3_ParamLimits

0x977e,	// (0x00028a74) cell_hwr_fs_pane_g3

0x978b,	// (0x00028a81) cell_hwr_fs_pane_g4_ParamLimits

0x978b,	// (0x00028a81) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0002eaf1) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002eaf1) cell_hwr_fs_pane_g

0x8431,	// (0x00027727) cell_hwr_fs_pane_t1

0x122f,	// (0x00020525) grid_highlight_pane_cp6

0x122f,	// (0x00020525) main_idle_act2_pane

0x1aff,	// (0x00020df5) aid_inside_area_popup_secondary

0xa3f2,	// (0x000296e8) aid_inside_area_window_primary_ParamLimits

0xa3f2,	// (0x000296e8) aid_inside_area_window_primary

0xafe7,	// (0x0002a2dd) ai2_news_ticker_pane

0xafef,	// (0x0002a2e5) aid_size_cell_ai1_link_ParamLimits

0xafef,	// (0x0002a2e5) aid_size_cell_ai1_link

0xb009,	// (0x0002a2ff) popup_ai2_data_window_ParamLimits

0xb009,	// (0x0002a2ff) popup_ai2_data_window

0xb027,	// (0x0002a31d) popup_ai2_link_window_ParamLimits

0xb027,	// (0x0002a31d) popup_ai2_link_window

0x9732,	// (0x00028a28) bg_popup_sub_pane_cp4_ParamLimits

0x9732,	// (0x00028a28) bg_popup_sub_pane_cp4

0xb03d,	// (0x0002a333) grid_ai2_link_pane_ParamLimits

0xb03d,	// (0x0002a333) grid_ai2_link_pane

0xb054,	// (0x0002a34a) popup_ai2_link_window_g1_ParamLimits

0xb054,	// (0x0002a34a) popup_ai2_link_window_g1

0xb060,	// (0x0002a356) popup_ai2_link_window_g2_ParamLimits

0xb060,	// (0x0002a356) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0002ecc4) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0002ecc4) popup_ai2_link_window_g

0xb071,	// (0x0002a367) ai2_mp_button_pane

0xb079,	// (0x0002a36f) ai2_mp_volume_pane

0x991d,	// (0x00028c13) bg_popup_sub_pane_cp5_ParamLimits

0x991d,	// (0x00028c13) bg_popup_sub_pane_cp5

0xb081,	// (0x0002a377) heading_ai2_gene_pane_ParamLimits

0xb081,	// (0x0002a377) heading_ai2_gene_pane

0xb08d,	// (0x0002a383) list_ai2_gene_pane_ParamLimits

0xb08d,	// (0x0002a383) list_ai2_gene_pane

0xb0d5,	// (0x0002a3cb) cell_ai2_link_pane_ParamLimits

0xb0d5,	// (0x0002a3cb) cell_ai2_link_pane

0xb0eb,	// (0x0002a3e1) cell_ai2_link_pane_g1

0x122f,	// (0x00020525) grid_highlight_pane_cp7

0x873f,	// (0x00027a35) ai2_mp_volume_pane_g1

0xb1be,	// (0x0002a4b4) ai2_mp_volume_pane_g2

0xb133,	// (0x0002a429) list_ai2_gene_pane_t1

0xb1c6,	// (0x0002a4bc) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0002ecdd) ai2_mp_volume_pane_g

0x8747,	// (0x00027a3d) volume_small_pane_cp3

0xb1ce,	// (0x0002a4c4) aid_size_cell_ai2_button

0xb1d6,	// (0x0002a4cc) grid_ai2_button_pane

0xb1df,	// (0x0002a4d5) cell_ai2_button_pane_ParamLimits

0xb1df,	// (0x0002a4d5) cell_ai2_button_pane

0x1225,	// (0x0002051b) cell_ai2_button_pane_g1

0x122f,	// (0x00020525) grid_highlight_pane_cp8

0xb17e,	// (0x0002a474) ai2_gene_pane_t1_ParamLimits

0xb17e,	// (0x0002a474) ai2_gene_pane_t1

0x7747,	// (0x00026a3d) aid_height_parent_landscape

0xaa77,	// (0x00029d6d) aid_height_set_list

0xaa88,	// (0x00029d7e) aid_size_parent

0xae06,	// (0x0002a0fc) aid_size_cell_graphic_pane_ParamLimits

0xb09d,	// (0x0002a393) popup_ai2_data_window_g1_ParamLimits

0xb09d,	// (0x0002a393) popup_ai2_data_window_g1

0xb0a9,	// (0x0002a39f) ai2_news_ticker_pane_g1

0xb0b1,	// (0x0002a3a7) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0002ecc9) ai2_news_ticker_pane_g

0xb0b9,	// (0x0002a3af) ai2_news_ticker_pane_t1

0xb0c7,	// (0x0002a3bd) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0002ecce) ai2_news_ticker_pane_t

0xb0f4,	// (0x0002a3ea) heading_ai2_gene_pane_g1

0xb0fc,	// (0x0002a3f2) heading_ai2_gene_pane_t1_ParamLimits

0xb0fc,	// (0x0002a3f2) heading_ai2_gene_pane_t1

0xb111,	// (0x0002a407) list_highlight_pane_cp6

0xb119,	// (0x0002a40f) ai2_gene_pane_ParamLimits

0xb119,	// (0x0002a40f) ai2_gene_pane

0xb141,	// (0x0002a437) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0002ecd3) list_ai2_gene_pane_t

0xb14f,	// (0x0002a445) list_highlight_pane_cp8_ParamLimits

0xb14f,	// (0x0002a445) list_highlight_pane_cp8

0xb160,	// (0x0002a456) ai2_gene_pane_g1_ParamLimits

0xb160,	// (0x0002a456) ai2_gene_pane_g1

0xb172,	// (0x0002a468) ai2_gene_pane_g2_ParamLimits

0xb172,	// (0x0002a468) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0002ecd8) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0002ecd8) ai2_gene_pane_g

0x1879,	// (0x00020b6f) scroll_pane_cp12

0x76fc,	// (0x000269f2) control_pane_t3_ParamLimits

0x76fc,	// (0x000269f2) control_pane_t3

0x7561,	// (0x00026857) status_small_pane_g8_ParamLimits

0x7561,	// (0x00026857) status_small_pane_g8

0x794d,	// (0x00026c43) popup_find_window_ParamLimits

0x7b78,	// (0x00026e6e) popup_note_image_window_ParamLimits

0x57e9,	// (0x00024adf) list_double2_graphic_pane_vc_g1_ParamLimits

0x57e9,	// (0x00024adf) list_double2_graphic_pane_vc_g1

0x57f5,	// (0x00024aeb) list_double2_graphic_pane_vc_g2_ParamLimits

0x57f5,	// (0x00024aeb) list_double2_graphic_pane_vc_g2

0x5801,	// (0x00024af7) list_double2_graphic_pane_vc_g3_ParamLimits

0x5801,	// (0x00024af7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0002eaaf) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0002eaaf) list_double2_graphic_pane_vc_g

0x580d,	// (0x00024b03) list_double2_graphic_pane_vc_t1_ParamLimits

0x580d,	// (0x00024b03) list_double2_graphic_pane_vc_t1

0x5789,	// (0x00024a7f) list_single_heading_pane_vc_g1_ParamLimits

0x5789,	// (0x00024a7f) list_single_heading_pane_vc_g1

0x5795,	// (0x00024a8b) list_single_heading_pane_vc_g2_ParamLimits

0x5795,	// (0x00024a8b) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ead0) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ead0) list_single_heading_pane_vc_g

0x5823,	// (0x00024b19) list_single_heading_pane_vc_t1_ParamLimits

0x5823,	// (0x00024b19) list_single_heading_pane_vc_t1

0x5839,	// (0x00024b2f) list_single_heading_pane_vc_t2_ParamLimits

0x5839,	// (0x00024b2f) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0002ead5) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0002ead5) list_single_heading_pane_vc_t

0x584b,	// (0x00024b41) list_setting_number_pane_vc_g1_ParamLimits

0x584b,	// (0x00024b41) list_setting_number_pane_vc_g1

0x5857,	// (0x00024b4d) list_setting_number_pane_vc_g2_ParamLimits

0x5857,	// (0x00024b4d) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002eada) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002eada) list_setting_number_pane_vc_g

0x5863,	// (0x00024b59) list_setting_number_pane_vc_t1_ParamLimits

0x5863,	// (0x00024b59) list_setting_number_pane_vc_t1

0x5877,	// (0x00024b6d) list_setting_number_pane_vc_t2_ParamLimits

0x5877,	// (0x00024b6d) list_setting_number_pane_vc_t2

0x5893,	// (0x00024b89) list_setting_number_pane_vc_t3_ParamLimits

0x5893,	// (0x00024b89) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0002eadf) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0002eadf) list_setting_number_pane_vc_t

0x58c1,	// (0x00024bb7) set_value_pane_vc_ParamLimits

0x58c1,	// (0x00024bb7) set_value_pane_vc

0x596e,	// (0x00024c64) list_double2_graphic_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_double2_graphic_pane_vc

0xac6f,	// (0x00029f65) list_double2_large_graphic_pane_vc_ParamLimits

0xac6f,	// (0x00029f65) list_double2_large_graphic_pane_vc

0x596e,	// (0x00024c64) list_double2_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_double2_pane_vc

0x596e,	// (0x00024c64) list_double_graphic_heading_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_double_graphic_heading_pane_vc

0x596e,	// (0x00024c64) list_double_graphic_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_double_graphic_pane_vc

0x596e,	// (0x00024c64) list_double_heading_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_double_heading_pane_vc

0xac83,	// (0x00029f79) list_double_large_graphic_pane_vc_ParamLimits

0xac83,	// (0x00029f79) list_double_large_graphic_pane_vc

0x596e,	// (0x00024c64) list_double_number_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_double_number_pane_vc

0x596e,	// (0x00024c64) list_double_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_double_pane_vc

0x596e,	// (0x00024c64) list_double_time_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_double_time_pane_vc

0x596e,	// (0x00024c64) list_setting_number_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_setting_number_pane_vc

0x596e,	// (0x00024c64) list_setting_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_setting_pane_vc

0x596e,	// (0x00024c64) list_single_graphic_heading_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_single_graphic_heading_pane_vc

0x596e,	// (0x00024c64) list_single_heading_pane_vc_ParamLimits

0x596e,	// (0x00024c64) list_single_heading_pane_vc

0xaca5,	// (0x00029f9b) list_single_number_heading_pane_vc_ParamLimits

0xaca5,	// (0x00029f9b) list_single_number_heading_pane_vc

0x57e9,	// (0x00024adf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x57e9,	// (0x00024adf) list_double_graphic_heading_pane_vc_g1

0x5789,	// (0x00024a7f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5789,	// (0x00024a7f) list_double_graphic_heading_pane_vc_g2

0x5795,	// (0x00024a8b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5795,	// (0x00024a8b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0002ece4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002ece4) list_double_graphic_heading_pane_vc_g

0x599e,	// (0x00024c94) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x599e,	// (0x00024c94) list_double_graphic_heading_pane_vc_t1

0x59b4,	// (0x00024caa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x59b4,	// (0x00024caa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002eceb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0002eceb) list_double_graphic_heading_pane_vc_t

0x584b,	// (0x00024b41) list_setting_pane_vc_g1_ParamLimits

0x584b,	// (0x00024b41) list_setting_pane_vc_g1

0x5857,	// (0x00024b4d) list_setting_pane_vc_g2_ParamLimits

0x5857,	// (0x00024b4d) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002eada) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002eada) list_setting_pane_vc_g

0x59d2,	// (0x00024cc8) list_setting_pane_vc_t1_ParamLimits

0x59d2,	// (0x00024cc8) list_setting_pane_vc_t1

0x59ee,	// (0x00024ce4) list_setting_pane_vc_t2_ParamLimits

0x59ee,	// (0x00024ce4) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0002ed19) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0002ed19) list_setting_pane_vc_t

0x58c1,	// (0x00024bb7) set_value_pane_cp_vc_ParamLimits

0x58c1,	// (0x00024bb7) set_value_pane_cp_vc

0x5789,	// (0x00024a7f) list_single_number_heading_pane_vc_g1_ParamLimits

0x5789,	// (0x00024a7f) list_single_number_heading_pane_vc_g1

0x5795,	// (0x00024a8b) list_single_number_heading_pane_vc_g2_ParamLimits

0x5795,	// (0x00024a8b) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ead0) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ead0) list_single_number_heading_pane_vc_g

0x5a0a,	// (0x00024d00) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a0a,	// (0x00024d00) list_single_number_heading_pane_vc_t1

0x5a20,	// (0x00024d16) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a20,	// (0x00024d16) list_single_number_heading_pane_vc_t2

0x5a32,	// (0x00024d28) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a32,	// (0x00024d28) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0002ed1e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0002ed1e) list_single_number_heading_pane_vc_t

0x57e9,	// (0x00024adf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x57e9,	// (0x00024adf) list_single_graphic_heading_pane_vc_g1

0x5789,	// (0x00024a7f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5789,	// (0x00024a7f) list_single_graphic_heading_pane_vc_g4

0x5795,	// (0x00024a8b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5795,	// (0x00024a8b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x0002ece4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002ece4) list_single_graphic_heading_pane_vc_g

0x5a0a,	// (0x00024d00) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5a0a,	// (0x00024d00) list_single_graphic_heading_pane_vc_t1

0x5a44,	// (0x00024d3a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a44,	// (0x00024d3a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0002ed25) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0002ed25) list_single_graphic_heading_pane_vc_t

0x5789,	// (0x00024a7f) list_double2_pane_vc_g1_ParamLimits

0x5789,	// (0x00024a7f) list_double2_pane_vc_g1

0x5795,	// (0x00024a8b) list_double2_pane_vc_g2_ParamLimits

0x5795,	// (0x00024a8b) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ead0) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ead0) list_double2_pane_vc_g

0x5a56,	// (0x00024d4c) list_double2_pane_vc_t1_ParamLimits

0x5a56,	// (0x00024d4c) list_double2_pane_vc_t1

0x5a6c,	// (0x00024d62) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5a6c,	// (0x00024d62) list_double2_large_graphic_pane_vc_g1

0x5a78,	// (0x00024d6e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5a78,	// (0x00024d6e) list_double2_large_graphic_pane_vc_g2

0x5a84,	// (0x00024d7a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5a84,	// (0x00024d7a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0002ed2a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0002ed2a) list_double2_large_graphic_pane_vc_g

0x5a90,	// (0x00024d86) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5a90,	// (0x00024d86) list_double2_large_graphic_pane_vc_t1

0x5aa6,	// (0x00024d9c) list_double_time_pane_vc_g1_ParamLimits

0x5aa6,	// (0x00024d9c) list_double_time_pane_vc_g1

0x5ab2,	// (0x00024da8) list_double_time_pane_vc_g2_ParamLimits

0x5ab2,	// (0x00024da8) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0002ed31) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0002ed31) list_double_time_pane_vc_g

0x5abe,	// (0x00024db4) list_double_time_pane_vc_t1_ParamLimits

0x5abe,	// (0x00024db4) list_double_time_pane_vc_t1

0x5ae8,	// (0x00024dde) list_double_time_pane_vc_t2_ParamLimits

0x5ae8,	// (0x00024dde) list_double_time_pane_vc_t2

0x5b31,	// (0x00024e27) list_double_time_pane_vc_t3_ParamLimits

0x5b31,	// (0x00024e27) list_double_time_pane_vc_t3

0x5b43,	// (0x00024e39) list_double_time_pane_vc_t4_ParamLimits

0x5b43,	// (0x00024e39) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0002ed36) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0002ed36) list_double_time_pane_vc_t

0x5789,	// (0x00024a7f) list_double_pane_vc_g1_ParamLimits

0x5789,	// (0x00024a7f) list_double_pane_vc_g1

0x5795,	// (0x00024a8b) list_double_pane_vc_g2_ParamLimits

0x5795,	// (0x00024a8b) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ead0) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ead0) list_double_pane_vc_g

0x5b57,	// (0x00024e4d) list_double_pane_vc_t1_ParamLimits

0x5b57,	// (0x00024e4d) list_double_pane_vc_t1

0x5b6b,	// (0x00024e61) list_double_pane_vc_t2_ParamLimits

0x5b6b,	// (0x00024e61) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0002ed3f) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0002ed3f) list_double_pane_vc_t

0x5789,	// (0x00024a7f) list_double_number_pane_vc_g1_ParamLimits

0x5789,	// (0x00024a7f) list_double_number_pane_vc_g1

0x5795,	// (0x00024a8b) list_double_number_pane_vc_g2_ParamLimits

0x5795,	// (0x00024a8b) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ead0) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ead0) list_double_number_pane_vc_g

0x5b81,	// (0x00024e77) list_double_number_pane_vc_t1_ParamLimits

0x5b81,	// (0x00024e77) list_double_number_pane_vc_t1

0x5b93,	// (0x00024e89) list_double_number_pane_vc_t2_ParamLimits

0x5b93,	// (0x00024e89) list_double_number_pane_vc_t2

0x5b6b,	// (0x00024e61) list_double_number_pane_vc_t3_ParamLimits

0x5b6b,	// (0x00024e61) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0002ed44) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002ed44) list_double_number_pane_vc_t

0x5ba7,	// (0x00024e9d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ba7,	// (0x00024e9d) list_double_large_graphic_pane_vc_g1

0x5bc9,	// (0x00024ebf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5bc9,	// (0x00024ebf) list_double_large_graphic_pane_vc_g2

0x5bdd,	// (0x00024ed3) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5bdd,	// (0x00024ed3) list_double_large_graphic_pane_vc_g3

0x5bec,	// (0x00024ee2) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5bec,	// (0x00024ee2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0002ed4b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002ed4b) list_double_large_graphic_pane_vc_g

0x5bfb,	// (0x00024ef1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5bfb,	// (0x00024ef1) list_double_large_graphic_pane_vc_t1

0x5c17,	// (0x00024f0d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5c17,	// (0x00024f0d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0002ed54) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002ed54) list_double_large_graphic_pane_vc_t

0x5789,	// (0x00024a7f) list_double_heading_pane_vc_g1_ParamLimits

0x5789,	// (0x00024a7f) list_double_heading_pane_vc_g1

0x5795,	// (0x00024a8b) list_double_heading_pane_vc_g2_ParamLimits

0x5795,	// (0x00024a8b) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ead0) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ead0) list_double_heading_pane_vc_g

0x5c37,	// (0x00024f2d) list_double_heading_pane_vc_t1_ParamLimits

0x5c37,	// (0x00024f2d) list_double_heading_pane_vc_t1

0x5c49,	// (0x00024f3f) list_double_heading_pane_vc_t2_ParamLimits

0x5c49,	// (0x00024f3f) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x0002ed59) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x0002ed59) list_double_heading_pane_vc_t

0x5c61,	// (0x00024f57) list_double_graphic_pane_vc_g1_ParamLimits

0x5c61,	// (0x00024f57) list_double_graphic_pane_vc_g1

0x5c74,	// (0x00024f6a) list_double_graphic_pane_vc_g2_ParamLimits

0x5c74,	// (0x00024f6a) list_double_graphic_pane_vc_g2

0x5789,	// (0x00024a7f) list_double_graphic_pane_vc_g3_ParamLimits

0x5789,	// (0x00024a7f) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x0002ed5e) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0002ed5e) list_double_graphic_pane_vc_g

0x5c91,	// (0x00024f87) list_double_graphic_pane_vc_t1_ParamLimits

0x5c91,	// (0x00024f87) list_double_graphic_pane_vc_t1

0x5cbb,	// (0x00024fb1) list_double_graphic_pane_vc_t2_ParamLimits

0x5cbb,	// (0x00024fb1) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0002ed67) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0002ed67) list_double_graphic_pane_vc_t

0x6106,	// (0x000253fc) aid_size_cell_fastswap

0x610e,	// (0x00025404) aid_size_cell_touch_ParamLimits

0x610e,	// (0x00025404) aid_size_cell_touch

0x636f,	// (0x00025665) popup_fast_swap_wide_window_ParamLimits

0x636f,	// (0x00025665) popup_fast_swap_wide_window

0x648d,	// (0x00025783) touch_pane_ParamLimits

0x648d,	// (0x00025783) touch_pane

0x18f2,	// (0x00020be8) button_value_adjust_pane_cp2

0x5474,	// (0x0002476a) button_value_adjust_pane_cp4

0x549a,	// (0x00024790) form_field_data_pane_cp2

0x54bd,	// (0x000247b3) form_field_data_wide_pane_cp2

0x3212,	// (0x00022508) bg_scroll_pane_ParamLimits

0x6b50,	// (0x00025e46) scroll_handle_pane_ParamLimits

0x6b64,	// (0x00025e5a) scroll_sc2_down_pane_ParamLimits

0x6b64,	// (0x00025e5a) scroll_sc2_down_pane

0x326c,	// (0x00022562) scroll_sc2_up_pane_ParamLimits

0x326c,	// (0x00022562) scroll_sc2_up_pane

0xb8c8,	// (0x0002abbe) grid_wheel_folder_pane_g1_ParamLimits

0xb8c8,	// (0x0002abbe) grid_wheel_folder_pane_g1

0x6e85,	// (0x0002617b) clock_nsta_pane_cp2_ParamLimits

0x6e85,	// (0x0002617b) clock_nsta_pane_cp2

0x723b,	// (0x00026531) listscroll_midp_pane_ParamLimits

0x7247,	// (0x0002653d) midp_canvas_pane

0x773f,	// (0x00026a35) nsta_clock_indic_pane

0x7795,	// (0x00026a8b) listscroll_form_pane_vc

0x77b9,	// (0x00026aaf) listscroll_set_pane_vc_ParamLimits

0x77b9,	// (0x00026aaf) listscroll_set_pane_vc

0x7ec5,	// (0x000271bb) clock_nsta_pane

0x7f3c,	// (0x00027232) indicator_nsta_pane

0x8228,	// (0x0002751e) bg_popup_sub_pane_cp2_ParamLimits

0x823c,	// (0x00027532) find_pane_cp2_ParamLimits

0x823c,	// (0x00027532) find_pane_cp2

0x8252,	// (0x00027548) grid_toobar_pane_ParamLimits

0x9706,	// (0x000289fc) list_form_gen_pane_vc_ParamLimits

0x9706,	// (0x000289fc) list_form_gen_pane_vc

0x971c,	// (0x00028a12) scroll_pane_cp8_vc_ParamLimits

0x971c,	// (0x00028a12) scroll_pane_cp8_vc

0x9798,	// (0x00028a8e) data_form_wide_pane_vc_ParamLimits

0x9798,	// (0x00028a8e) data_form_wide_pane_vc

0x97a4,	// (0x00028a9a) form_field_data_wide_pane_vc_g1

0x97ac,	// (0x00028aa2) form_field_data_wide_pane_vc_t1_ParamLimits

0x97ac,	// (0x00028aa2) form_field_data_wide_pane_vc_t1

0x195d,	// (0x00020c53) input_focus_pane_cp6_vc_ParamLimits

0x195d,	// (0x00020c53) input_focus_pane_cp6_vc

0x9aa8,	// (0x00028d9e) list_midp_pane_ParamLimits

0x9ab4,	// (0x00028daa) scroll_pane_cp16_ParamLimits

0x9ab4,	// (0x00028daa) scroll_pane_cp16

0x9b16,	// (0x00028e0c) button_value_adjust_pane_ParamLimits

0x9b16,	// (0x00028e0c) button_value_adjust_pane

0xaa9a,	// (0x00029d90) button_value_adjust_pane_cp6_ParamLimits

0xaa9a,	// (0x00029d90) button_value_adjust_pane_cp6

0xabe2,	// (0x00029ed8) settings_code_pane_cp_ParamLimits

0xabe2,	// (0x00029ed8) settings_code_pane_cp

0x1225,	// (0x0002051b) cell_touch_pane_g1

0x1225,	// (0x0002051b) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0002e9f4) cell_touch_pane_g

0xb1f1,	// (0x0002a4e7) cell_touch_pane_cp_ParamLimits

0xb1f1,	// (0x0002a4e7) cell_touch_pane_cp

0xb201,	// (0x0002a4f7) cell_touch_pane_ParamLimits

0xb201,	// (0x0002a4f7) cell_touch_pane

0x1225,	// (0x0002051b) scroll_sc2_down_pane_g1

0x1225,	// (0x0002051b) scroll_sc2_up_pane_g1

0x122f,	// (0x00020525) bg_set_opt_pane_cp4_vc

0xb212,	// (0x0002a508) list_set_graphic_pane_vc_g1_ParamLimits

0xb212,	// (0x0002a508) list_set_graphic_pane_vc_g1

0xb21e,	// (0x0002a514) list_set_graphic_pane_vc_g2_ParamLimits

0xb21e,	// (0x0002a514) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0002ecf0) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0002ecf0) list_set_graphic_pane_vc_g

0xb22a,	// (0x0002a520) text_primary_small_cp13_vc_ParamLimits

0xb22a,	// (0x0002a520) text_primary_small_cp13_vc

0x6f1b,	// (0x00026211) list_set_graphic_pane_vc_ParamLimits

0x6f1b,	// (0x00026211) list_set_graphic_pane_vc

0x122f,	// (0x00020525) input_focus_pane_cp2_vc

0x1225,	// (0x0002051b) setting_code_pane_vc_g1

0x12a2,	// (0x00020598) setting_code_pane_vc_t1

0xb242,	// (0x0002a538) set_text_pane_vc_t1_ParamLimits

0xb242,	// (0x0002a538) set_text_pane_vc_t1

0x122f,	// (0x00020525) input_focus_pane_cp1_vc

0xb260,	// (0x0002a556) list_set_text_pane_vc

0x1225,	// (0x0002051b) setting_text_pane_vc_g1

0x122f,	// (0x00020525) bg_set_opt_pane_cp2_vc

0x1299,	// (0x0002058f) setting_slider_graphic_pane_vc_g1

0xb26a,	// (0x0002a560) setting_slider_graphic_pane_vc_t1

0xb27c,	// (0x0002a572) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0002ecf5) setting_slider_graphic_pane_vc_t

0xb28e,	// (0x0002a584) slider_set_pane_cp_vc

0xb298,	// (0x0002a58e) slider_set_pane_vc_g1

0xb2a1,	// (0x0002a597) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0002ecfa) slider_set_pane_vc_g

0x1a18,	// (0x00020d0e) set_opt_bg_pane_g1_copy1

0x1a20,	// (0x00020d16) set_opt_bg_pane_g2_copy1

0xb2cd,	// (0x0002a5c3) set_opt_bg_pane_g3_copy1

0x1a30,	// (0x00020d26) set_opt_bg_pane_g4_copy1

0x1a38,	// (0x00020d2e) set_opt_bg_pane_g5_copy1

0x1a40,	// (0x00020d36) set_opt_bg_pane_g6_copy1

0xb2d7,	// (0x0002a5cd) set_opt_bg_pane_g7_copy1

0xb2e1,	// (0x0002a5d7) set_opt_bg_pane_g8_copy1

0xb2eb,	// (0x0002a5e1) set_opt_bg_pane_g9_copy1

0x122f,	// (0x00020525) bg_set_opt_pane_cp_vc

0xb2f5,	// (0x0002a5eb) setting_slider_pane_vc_t1

0xb304,	// (0x0002a5fa) setting_slider_pane_vc_t2

0xb316,	// (0x0002a60c) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0002ed09) setting_slider_pane_vc_t

0xb328,	// (0x0002a61e) slider_set_pane_vc

0x843f,	// (0x00027735) volume_set_pane_vc_g1

0x8448,	// (0x0002773e) volume_set_pane_vc_g2

0x8451,	// (0x00027747) volume_set_pane_vc_g3

0x845a,	// (0x00027750) volume_set_pane_vc_g4

0x8463,	// (0x00027759) volume_set_pane_vc_g5

0x846c,	// (0x00027762) volume_set_pane_vc_g6

0x8475,	// (0x0002776b) volume_set_pane_vc_g7

0x847e,	// (0x00027774) volume_set_pane_vc_g8

0x8487,	// (0x0002777d) volume_set_pane_vc_g9

0x8490,	// (0x00027786) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0002eba7) volume_set_pane_vc_g

0xb330,	// (0x0002a626) volume_set_pane_vc

0xb33a,	// (0x0002a630) button_value_adjust_pane_cp1_vc

0xb344,	// (0x0002a63a) list_highlight_pane_cp2_vc

0xb34d,	// (0x0002a643) list_set_pane_vc_ParamLimits

0xb34d,	// (0x0002a643) list_set_pane_vc

0xb3bb,	// (0x0002a6b1) main_pane_set_vc_t1_ParamLimits

0xb3bb,	// (0x0002a6b1) main_pane_set_vc_t1

0xb3d0,	// (0x0002a6c6) main_pane_set_vc_t2_ParamLimits

0xb3d0,	// (0x0002a6c6) main_pane_set_vc_t2

0xb3e2,	// (0x0002a6d8) main_pane_set_vc_t3_ParamLimits

0xb3e2,	// (0x0002a6d8) main_pane_set_vc_t3

0xb3f6,	// (0x0002a6ec) main_pane_set_vc_t4_ParamLimits

0xb3f6,	// (0x0002a6ec) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0002ed10) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0002ed10) main_pane_set_vc_t

0xb40a,	// (0x0002a700) setting_code_pane_vc_ParamLimits

0xb40a,	// (0x0002a700) setting_code_pane_vc

0xb41b,	// (0x0002a711) setting_slider_graphic_pane_vc

0xb41b,	// (0x0002a711) setting_slider_pane_vc

0xb41b,	// (0x0002a711) setting_text_pane_vc

0xb41b,	// (0x0002a711) setting_volume_pane_vc

0xb425,	// (0x0002a71b) scroll_pane_cp121_vc

0x18e0,	// (0x00020bd6) set_content_pane_vc

0xb42d,	// (0x0002a723) button_value_adjust_pane_g1

0xb436,	// (0x0002a72c) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x0002ed6c) button_value_adjust_pane_g

0xb43f,	// (0x0002a735) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb43f,	// (0x0002a735) form_field_slider_wide_pane_vc_t1

0xb451,	// (0x0002a747) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb451,	// (0x0002a747) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x0002ed71) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x0002ed71) form_field_slider_wide_pane_vc_t

0x127d,	// (0x00020573) input_focus_pane_cp10_vc_ParamLimits

0x127d,	// (0x00020573) input_focus_pane_cp10_vc

0xb47d,	// (0x0002a773) slider_cont_pane_cp1_vc_ParamLimits

0xb47d,	// (0x0002a773) slider_cont_pane_cp1_vc

0xb48f,	// (0x0002a785) slider_form_pane_g1_cp2

0xb2a1,	// (0x0002a597) slider_form_pane_g2_cp2

0xb4bc,	// (0x0002a7b2) form_field_slider_pane_vc_t3

0xb4ca,	// (0x0002a7c0) form_field_slider_pane_vc_t4

0xb4d8,	// (0x0002a7ce) slider_form_pane_vc_ParamLimits

0xb4d8,	// (0x0002a7ce) slider_form_pane_vc

0xb4e5,	// (0x0002a7db) form_field_slider_pane_vc_t1_ParamLimits

0xb4e5,	// (0x0002a7db) form_field_slider_pane_vc_t1

0xb451,	// (0x0002a747) form_field_slider_pane_vc_t2_ParamLimits

0xb451,	// (0x0002a747) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x0002ed83) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002ed83) form_field_slider_pane_vc_t

0x127d,	// (0x00020573) input_focus_pane_cp9_vc_ParamLimits

0x127d,	// (0x00020573) input_focus_pane_cp9_vc

0xb4fb,	// (0x0002a7f1) slider_cont_pane_vc_ParamLimits

0xb4fb,	// (0x0002a7f1) slider_cont_pane_vc

0xb50f,	// (0x0002a805) list_form_graphic_pane_cp_vc_ParamLimits

0xb50f,	// (0x0002a805) list_form_graphic_pane_cp_vc

0x97a4,	// (0x00028a9a) form_field_popup_wide_pane_vc_g1

0xb524,	// (0x0002a81a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb524,	// (0x0002a81a) form_field_popup_wide_pane_vc_t1

0x195d,	// (0x00020c53) input_focus_pane_cp8_vc_ParamLimits

0x195d,	// (0x00020c53) input_focus_pane_cp8_vc

0xb569,	// (0x0002a85f) list_form_wide_pane_vc_ParamLimits

0xb569,	// (0x0002a85f) list_form_wide_pane_vc

0xb575,	// (0x0002a86b) list_form_graphic_pane_vc_g1

0xb57d,	// (0x0002a873) list_form_graphic_pane_vc_t1_ParamLimits

0xb57d,	// (0x0002a873) list_form_graphic_pane_vc_t1

0x128b,	// (0x00020581) list_highlight_pane_cp5_vc_ParamLimits

0x128b,	// (0x00020581) list_highlight_pane_cp5_vc

0xb599,	// (0x0002a88f) list_form_graphic_pane_vc_ParamLimits

0xb599,	// (0x0002a88f) list_form_graphic_pane_vc

0x97a4,	// (0x00028a9a) form_field_popup_pane_vc_g1

0xb5af,	// (0x0002a8a5) form_field_popup_pane_vc_t1_ParamLimits

0xb5af,	// (0x0002a8a5) form_field_popup_pane_vc_t1

0x195d,	// (0x00020c53) input_focus_pane_cp7_vc_ParamLimits

0x195d,	// (0x00020c53) input_focus_pane_cp7_vc

0xb5c6,	// (0x0002a8bc) list_form_pane_vc_ParamLimits

0xb5c6,	// (0x0002a8bc) list_form_pane_vc

0xb5d2,	// (0x0002a8c8) data_form_pane_vc_t1_ParamLimits

0xb5d2,	// (0x0002a8c8) data_form_pane_vc_t1

0x1a18,	// (0x00020d0e) input_focus_pane_vc_g1

0x1a20,	// (0x00020d16) input_focus_pane_vc_g2

0x1a28,	// (0x00020d1e) input_focus_pane_vc_g3

0x1a30,	// (0x00020d26) input_focus_pane_vc_g4

0x1a38,	// (0x00020d2e) input_focus_pane_vc_g5

0x1a40,	// (0x00020d36) input_focus_pane_vc_g6

0x1a48,	// (0x00020d3e) input_focus_pane_vc_g7

0x1a50,	// (0x00020d46) input_focus_pane_vc_g8

0x1a58,	// (0x00020d4e) input_focus_pane_vc_g9

0x1225,	// (0x0002051b) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0002e97d) input_focus_pane_vc_g

0x9798,	// (0x00028a8e) data_form_pane_vc_ParamLimits

0x9798,	// (0x00028a8e) data_form_pane_vc

0x97a4,	// (0x00028a9a) form_field_data_pane_vc_g1

0xb5ef,	// (0x0002a8e5) form_field_data_pane_vc_t1_ParamLimits

0xb5ef,	// (0x0002a8e5) form_field_data_pane_vc_t1

0x195d,	// (0x00020c53) input_focus_pane_vc_ParamLimits

0x195d,	// (0x00020c53) input_focus_pane_vc

0xb609,	// (0x0002a8ff) button_value_adjust_pane_cp3_vc

0xb611,	// (0x0002a907) button_value_adjust_pane_cp5_vc

0xb619,	// (0x0002a90f) form_field_data_pane_vc_ParamLimits

0xb619,	// (0x0002a90f) form_field_data_pane_vc

0xb634,	// (0x0002a92a) form_field_data_pane_vc_cp2

0xb63c,	// (0x0002a932) form_field_data_wide_pane_vc_ParamLimits

0xb63c,	// (0x0002a932) form_field_data_wide_pane_vc

0xb656,	// (0x0002a94c) form_field_data_wide_pane_vc_cp2

0xb65e,	// (0x0002a954) form_field_popup_pane_vc_ParamLimits

0xb65e,	// (0x0002a954) form_field_popup_pane_vc

0xb679,	// (0x0002a96f) form_field_popup_wide_pane_vc_ParamLimits

0xb679,	// (0x0002a96f) form_field_popup_wide_pane_vc

0xb693,	// (0x0002a989) form_field_slider_pane_vc_ParamLimits

0xb693,	// (0x0002a989) form_field_slider_pane_vc

0xb6a6,	// (0x0002a99c) form_field_slider_wide_pane_vc_ParamLimits

0xb6a6,	// (0x0002a99c) form_field_slider_wide_pane_vc

0xb6b9,	// (0x0002a9af) grid_touch_1_pane_ParamLimits

0xb6b9,	// (0x0002a9af) grid_touch_1_pane

0xb6c5,	// (0x0002a9bb) grid_touch_2_pane_ParamLimits

0xb6c5,	// (0x0002a9bb) grid_touch_2_pane

0x75f8,	// (0x000268ee) touch_pane_g1_ParamLimits

0x75f8,	// (0x000268ee) touch_pane_g1

0xb6df,	// (0x0002a9d5) cell_app_pane_cp_wide_ParamLimits

0xb6df,	// (0x0002a9d5) cell_app_pane_cp_wide

0xb6f0,	// (0x0002a9e6) grid_popup_fast_wide_pane_ParamLimits

0xb6f0,	// (0x0002a9e6) grid_popup_fast_wide_pane

0xb704,	// (0x0002a9fa) scroll_pane_cp19_ParamLimits

0xb704,	// (0x0002a9fa) scroll_pane_cp19

0x122f,	// (0x00020525) bg_popup_window_pane_cp20

0xb718,	// (0x0002aa0e) listscroll_popup_fast_wide_pane

0x128b,	// (0x00020581) grid_indicator_nsta_pane

0xb720,	// (0x0002aa16) clock_nsta_pane_g1

0xb729,	// (0x0002aa1f) clock_nsta_pane_t1

0xb745,	// (0x0002aa3b) cell_indicator_nsta_pane_ParamLimits

0xb745,	// (0x0002aa3b) cell_indicator_nsta_pane

0xb776,	// (0x0002aa6c) cell_indicator_nsta_pane_g1

0xb784,	// (0x0002aa7a) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x0002ed94) cell_indicator_nsta_pane_g

0xb791,	// (0x0002aa87) clock_nsta_pane_cp

0xb79a,	// (0x0002aa90) indicator_nsta_pane_cp

0xb7a2,	// (0x0002aa98) nsta_clock_indic_pane_g1

0x12e1,	// (0x000205d7) grid_indicator_pane

0x335e,	// (0x00022654) scroll_pane_cp29

0x6db2,	// (0x000260a8) indicator_nsta_pane_cp2_ParamLimits

0x6db2,	// (0x000260a8) indicator_nsta_pane_cp2

0x128b,	// (0x00020581) main_apps_wheel_pane

0x9985,	// (0x00028c7b) form_midp_field_text_pane_ParamLimits

0x9ad4,	// (0x00028dca) scroll_bar_cp050_ParamLimits

0xb7f2,	// (0x0002aae8) cell_indicator_pane_ParamLimits

0xb7f2,	// (0x0002aae8) cell_indicator_pane

0xb80a,	// (0x0002ab00) cell_indicator_pane_g1

0xb814,	// (0x0002ab0a) grid_wheel_folder_pane_ParamLimits

0xb814,	// (0x0002ab0a) grid_wheel_folder_pane

0xb828,	// (0x0002ab1e) list_wheel_apps_pane_ParamLimits

0xb828,	// (0x0002ab1e) list_wheel_apps_pane

0xb83b,	// (0x0002ab31) main_apps_wheel_pane_g1_ParamLimits

0xb83b,	// (0x0002ab31) main_apps_wheel_pane_g1

0xb857,	// (0x0002ab4d) main_apps_wheel_pane_g2_ParamLimits

0xb857,	// (0x0002ab4d) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x0002edb0) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x0002edb0) main_apps_wheel_pane_g

0xb873,	// (0x0002ab69) main_apps_wheel_pane_t1_ParamLimits

0xb873,	// (0x0002ab69) main_apps_wheel_pane_t1

0xb89c,	// (0x0002ab92) list_wheel_apps_pane_g1

0xb8a4,	// (0x0002ab9a) list_wheel_apps_pane_g2

0xb8ac,	// (0x0002aba2) list_wheel_apps_pane_g3

0xb8b4,	// (0x0002abaa) list_wheel_apps_pane_g4

0xb8be,	// (0x0002abb4) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x0002edb5) list_wheel_apps_pane_g

0x70bb,	// (0x000263b1) navi_icon_text_pane

0x7df6,	// (0x000270ec) aid_fill_nsta

0xb8df,	// (0x0002abd5) navi_icon_text_pane_g1

0xb8eb,	// (0x0002abe1) navi_icon_text_pane_t1

0x6f46,	// (0x0002623c) list_set_graphic_pane_t1_ParamLimits

0x6f46,	// (0x0002623c) list_set_graphic_pane_t1

0xa239,	// (0x0002952f) popup_midp_note_alarm_window_t6_ParamLimits

0xa239,	// (0x0002952f) popup_midp_note_alarm_window_t6

0xa24b,	// (0x00029541) popup_midp_note_alarm_window_t7_ParamLimits

0xa24b,	// (0x00029541) popup_midp_note_alarm_window_t7

0xa25d,	// (0x00029553) popup_midp_note_alarm_window_t8_ParamLimits

0xa25d,	// (0x00029553) popup_midp_note_alarm_window_t8

0xa26f,	// (0x00029565) popup_midp_note_alarm_window_t9_ParamLimits

0xa26f,	// (0x00029565) popup_midp_note_alarm_window_t9

0xa281,	// (0x00029577) popup_midp_note_alarm_window_t10_ParamLimits

0xa281,	// (0x00029577) popup_midp_note_alarm_window_t10

0xa293,	// (0x00029589) popup_midp_note_alarm_window_t11_ParamLimits

0xa293,	// (0x00029589) popup_midp_note_alarm_window_t11

0xa2a5,	// (0x0002959b) scroll_pane_cp17_ParamLimits

0xa2a5,	// (0x0002959b) scroll_pane_cp17

0x843f,	// (0x00027735) volume_small_pane_cp_g1

0x8750,	// (0x00027a46) volume_small_pane_cp_g2

0x8759,	// (0x00027a4f) volume_small_pane_cp_g3

0x8762,	// (0x00027a58) volume_small_pane_cp_g4

0x876b,	// (0x00027a61) volume_small_pane_cp_g5

0x8774,	// (0x00027a6a) volume_small_pane_cp_g6

0x877d,	// (0x00027a73) volume_small_pane_cp_g7

0x8786,	// (0x00027a7c) volume_small_pane_cp_g8

0x878f,	// (0x00027a85) volume_small_pane_cp_g9

0x8798,	// (0x00027a8e) volume_small_pane_cp_g10

0x7311,	// (0x00026607) midp_ticker_pane_g1_ParamLimits

0x731d,	// (0x00026613) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0002ea49) midp_ticker_pane_g_ParamLimits

0x7329,	// (0x0002661f) midp_ticker_pane_t1_ParamLimits

0x7e0c,	// (0x00027102) aid_fill_nsta_2

0x9ac0,	// (0x00028db6) list_form2_midp_pane

0xac29,	// (0x00029f1f) midp_editing_number_pane_ParamLimits

0xac38,	// (0x00029f2e) midp_ticker_pane_ParamLimits

0xb8fd,	// (0x0002abf3) form2_midp_field_pane

0xb921,	// (0x0002ac17) scroll_pane_cp51

0xb941,	// (0x0002ac37) form2_midp_button_pane_ParamLimits

0xb941,	// (0x0002ac37) form2_midp_button_pane

0xb953,	// (0x0002ac49) form2_midp_content_pane_ParamLimits

0xb953,	// (0x0002ac49) form2_midp_content_pane

0xb96d,	// (0x0002ac63) form2_midp_field_choice_group_pane

0xb975,	// (0x0002ac6b) form2_midp_field_pane_g1

0xb97d,	// (0x0002ac73) form2_midp_field_pane_g2

0xb985,	// (0x0002ac7b) form2_midp_field_pane_g3

0xb98d,	// (0x0002ac83) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x0002edda) form2_midp_field_pane_g

0xb995,	// (0x0002ac8b) form2_midp_gauge_slider_pane

0xb99d,	// (0x0002ac93) form2_midp_gauge_wait_pane

0xb9a5,	// (0x0002ac9b) form2_midp_image_pane_ParamLimits

0xb9a5,	// (0x0002ac9b) form2_midp_image_pane

0xb9c0,	// (0x0002acb6) form2_midp_label_pane_ParamLimits

0xb9c0,	// (0x0002acb6) form2_midp_label_pane

0xb9df,	// (0x0002acd5) form2_midp_label_pane_cp_ParamLimits

0xb9df,	// (0x0002acd5) form2_midp_label_pane_cp

0xba00,	// (0x0002acf6) form2_midp_string_pane_ParamLimits

0xba00,	// (0x0002acf6) form2_midp_string_pane

0x5cd9,	// (0x00024fcf) form2_midp_text_pane_ParamLimits

0x5cd9,	// (0x00024fcf) form2_midp_text_pane

0xba12,	// (0x0002ad08) form2_midp_time_pane

0xba22,	// (0x0002ad18) input_focus_pane_cp51_ParamLimits

0xba22,	// (0x0002ad18) input_focus_pane_cp51

0xba3a,	// (0x0002ad30) form2_midp_label_pane_t1_ParamLimits

0xba3a,	// (0x0002ad30) form2_midp_label_pane_t1

0x5cfa,	// (0x00024ff0) form2_mdip_text_pane_t1_ParamLimits

0x5cfa,	// (0x00024ff0) form2_mdip_text_pane_t1

0x5d1e,	// (0x00025014) form2_midp_time_pane_t1

0xba88,	// (0x0002ad7e) form2_midp_gauge_slider_pane_t1

0xba9a,	// (0x0002ad90) form2_midp_gauge_slider_pane_t2

0xbaac,	// (0x0002ada2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x0002ede3) form2_midp_gauge_slider_pane_t

0xbabe,	// (0x0002adb4) form2_midp_slider_pane

0xbaca,	// (0x0002adc0) form2_midp_gauge_wait_pane_t1

0xbad8,	// (0x0002adce) form2_midp_wait_pane_ParamLimits

0xbad8,	// (0x0002adce) form2_midp_wait_pane

0xbb03,	// (0x0002adf9) list_single_2graphic_pane_cp4_ParamLimits

0xbb03,	// (0x0002adf9) list_single_2graphic_pane_cp4

0x9801,	// (0x00028af7) list_single_midp_graphic_pane_cp_ParamLimits

0x9801,	// (0x00028af7) list_single_midp_graphic_pane_cp

0x122f,	// (0x00020525) list_highlight_pane_cp20

0xbb1c,	// (0x0002ae12) list_single_2graphic_pane_g1_cp4

0xb0f4,	// (0x0002a3ea) list_single_2graphic_pane_g2_cp4

0xbb24,	// (0x0002ae1a) list_single_2graphic_pane_t1_cp4

0x128b,	// (0x00020581) list_highlight_pane_cp21

0xbb33,	// (0x0002ae29) list_single_midp_graphic_pane_g4_cp

0xbb42,	// (0x0002ae38) list_single_midp_graphic_pane_t1_cp

0xbb57,	// (0x0002ae4d) form2_mdip_string_pane_t1_ParamLimits

0xbb57,	// (0x0002ae4d) form2_mdip_string_pane_t1

0x122f,	// (0x00020525) bg_wml_button_pane_cp2

0x1225,	// (0x0002051b) form2_midp_image_pane_g1

0x5220,	// (0x00024516) list_double_large_graphic_pane_g5_ParamLimits

0x5220,	// (0x00024516) list_double_large_graphic_pane_g5

0x723b,	// (0x00026531) midp_form_pane_ParamLimits

0x128b,	// (0x00020581) main_apps_wheel_pane_ParamLimits

0x7ba0,	// (0x00026e96) popup_preview_window_ParamLimits

0x7ba0,	// (0x00026e96) popup_preview_window

0x7d87,	// (0x0002707d) popup_touch_info_window_ParamLimits

0x7d87,	// (0x0002707d) popup_touch_info_window

0x7da9,	// (0x0002709f) popup_touch_menu_window_ParamLimits

0x7da9,	// (0x0002709f) popup_touch_menu_window

0x121b,	// (0x00020511) bg_popup_sub_pane_cp6

0xbbf3,	// (0x0002aee9) list_touch_menu_pane

0xbbfb,	// (0x0002aef1) list_single_touch_menu_pane_ParamLimits

0xbbfb,	// (0x0002aef1) list_single_touch_menu_pane

0xbc13,	// (0x0002af09) list_single_touch_menu_pane_t1

0x128b,	// (0x00020581) bg_popup_sub_pane_cp7_ParamLimits

0x128b,	// (0x00020581) bg_popup_sub_pane_cp7

0xbc21,	// (0x0002af17) heading_sub_pane

0xbc29,	// (0x0002af1f) list_touch_info_pane_ParamLimits

0xbc29,	// (0x0002af1f) list_touch_info_pane

0xbc38,	// (0x0002af2e) list_single_touch_info_pane_ParamLimits

0xbc38,	// (0x0002af2e) list_single_touch_info_pane

0xbc4a,	// (0x0002af40) list_single_touch_info_pane_t1

0xbc58,	// (0x0002af4e) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x0002edf1) list_single_touch_info_pane_t

0x7233,	// (0x00026529) bg_popup_heading_pane_cp

0xbc66,	// (0x0002af5c) heading_sub_pane_t1

0x9732,	// (0x00028a28) bg_popup_preview_window_pane_cp_ParamLimits

0x9732,	// (0x00028a28) bg_popup_preview_window_pane_cp

0xbc21,	// (0x0002af17) heading_preview_pane

0xbc29,	// (0x0002af1f) list_preview_pane_ParamLimits

0xbc29,	// (0x0002af1f) list_preview_pane

0xbc74,	// (0x0002af6a) popup_preview_window_g1

0xbc38,	// (0x0002af2e) list_single_preview_pane_ParamLimits

0xbc38,	// (0x0002af2e) list_single_preview_pane

0xbc7c,	// (0x0002af72) list_single_preview_pane_g1

0xbc84,	// (0x0002af7a) list_single_preview_pane_t1

0xbc4a,	// (0x0002af40) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x0002edf6) list_single_preview_pane_t

0xbc92,	// (0x0002af88) bg_popup_heading_pane_cp2_ParamLimits

0xbc92,	// (0x0002af88) bg_popup_heading_pane_cp2

0xbca8,	// (0x0002af9e) heading_preview_pane_g1

0xbcb0,	// (0x0002afa6) heading_preview_pane_t1_ParamLimits

0xbcb0,	// (0x0002afa6) heading_preview_pane_t1

0x12f8,	// (0x000205ee) soft_indicator_pane_t1_ParamLimits

0x1856,	// (0x00020b4c) scroll_pane_ParamLimits

0x3263,	// (0x00022559) scroll_sc2_left_pane

0x325a,	// (0x00022550) scroll_sc2_right_pane

0x3282,	// (0x00022578) scroll_bg_pane_g1_ParamLimits

0x3297,	// (0x0002258d) scroll_bg_pane_g2_ParamLimits

0x32af,	// (0x000225a5) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0002e9d4) scroll_bg_pane_g_ParamLimits

0x3282,	// (0x00022578) scroll_handle_pane_g1_ParamLimits

0x32d1,	// (0x000225c7) scroll_handle_pane_g2_ParamLimits

0x32af,	// (0x000225a5) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0002e9db) scroll_handle_pane_g_ParamLimits

0x77e7,	// (0x00026add) popup_choice_list_window_ParamLimits

0x77e7,	// (0x00026add) popup_choice_list_window

0x8234,	// (0x0002752a) choice_list_pane

0x82e6,	// (0x000275dc) cell_toolbar_pane_t1

0x830e,	// (0x00027604) toolbar_button_pane_ParamLimits

0xa76f,	// (0x00029a65) ai_gene_pane_1_t2_ParamLimits

0xa76f,	// (0x00029a65) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0002ec03) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0002ec03) ai_gene_pane_1_t

0xbccd,	// (0x0002afc3) scroll_sc2_left_pane_g1

0xbccd,	// (0x0002afc3) scroll_sc2_right_pane_g1

0x7789,	// (0x00026a7f) bg_popup_sub_pane_cp10

0xbcd7,	// (0x0002afcd) list_choice_list_pane

0xacd4,	// (0x00029fca) list_single_choice_list_pane_ParamLimits

0xacd4,	// (0x00029fca) list_single_choice_list_pane

0xbcf0,	// (0x0002afe6) list_single_choice_list_pane_g1

0x1b3d,	// (0x00020e33) list_single_choice_list_pane_t1_ParamLimits

0x1b3d,	// (0x00020e33) list_single_choice_list_pane_t1

0xbcf8,	// (0x0002afee) choice_list_pane_g1

0xbd00,	// (0x0002aff6) choice_list_pane_t1

0x121b,	// (0x00020511) input_focus_pane_cp11

0x305e,	// (0x00022354) title_pane_stacon_g2_ParamLimits

0x305e,	// (0x00022354) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0002e9ba) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002e9ba) title_pane_stacon_g

0x7233,	// (0x00026529) cursor_press_pane

0x78a1,	// (0x00026b97) popup_fep_hwr_window_ParamLimits

0x78a1,	// (0x00026b97) popup_fep_hwr_window

0x792b,	// (0x00026c21) popup_fep_vkb_window_ParamLimits

0x792b,	// (0x00026c21) popup_fep_vkb_window

0xbd0e,	// (0x0002b004) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x0002ee1f) fep_vkb_side_pane_g_ParamLimits

0x87da,	// (0x00027ad0) fep_hwr_candidate_pane_ParamLimits

0x87da,	// (0x00027ad0) fep_hwr_candidate_pane

0x8804,	// (0x00027afa) fep_hwr_side_pane_ParamLimits

0x8804,	// (0x00027afa) fep_hwr_side_pane

0x8826,	// (0x00027b1c) fep_hwr_top_pane_ParamLimits

0x8826,	// (0x00027b1c) fep_hwr_top_pane

0x883e,	// (0x00027b34) fep_hwr_write_pane_ParamLimits

0x883e,	// (0x00027b34) fep_hwr_write_pane

0xfb29,	// (0x0002ee1f) fep_vkb_side_pane_g

0xbd16,	// (0x0002b00c) fep_hwr_top_pane_g1

0xbd28,	// (0x0002b01e) fep_hwr_top_pane_g2

0x886a,	// (0x00027b60) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x0002edfb) fep_hwr_top_pane_g

0x887f,	// (0x00027b75) fep_hwr_top_text_pane

0x33cb,	// (0x000226c1) fep_hwr_top_text_pane_g1

0xbd5e,	// (0x0002b054) fep_hwr_top_text_pane_t1

0x8989,	// (0x00027c7f) fep_hwr_candidate_pane_g1

0xbfa9,	// (0x0002b29f) fep_vkb_keypad_pane_g3_ParamLimits

0xbfa9,	// (0x0002b29f) fep_vkb_keypad_pane_g3

0xbfd5,	// (0x0002b2cb) fep_vkb_keypad_pane_g4_ParamLimits

0xbfd5,	// (0x0002b2cb) fep_vkb_keypad_pane_g4

0xc04c,	// (0x0002b342) fep_vkb_bottom_pane_g2_ParamLimits

0xc04c,	// (0x0002b342) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x0002ee26) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x0002ee26) fep_vkb_bottom_pane_g

0xbccd,	// (0x0002afc3) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x0002ee30) cell_vkb_side_pane_g

0xc0d7,	// (0x0002b3cd) cell_vkb_side_pane_t1

0xc0e5,	// (0x0002b3db) cell_vkb_side_pane_t1_copy1

0xbccd,	// (0x0002afc3) bg_fep_vkb_candidate_pane_g2

0xc229,	// (0x0002b51f) cell_vkb_candidate_pane_ParamLimits

0xbd6c,	// (0x0002b062) aid_size_cell_vkb_ParamLimits

0xbd6c,	// (0x0002b062) aid_size_cell_vkb

0xc229,	// (0x0002b51f) cell_vkb_candidate_pane

0x89a3,	// (0x00027c99) bg_popup_fep_shadow_pane_g1

0xbdfe,	// (0x0002b0f4) fep_vkb_bottom_pane_ParamLimits

0xbdfe,	// (0x0002b0f4) fep_vkb_bottom_pane

0xbe3b,	// (0x0002b131) fep_vkb_candidate_pane_ParamLimits

0xbe3b,	// (0x0002b131) fep_vkb_candidate_pane

0xbe57,	// (0x0002b14d) fep_vkb_keypad_pane_ParamLimits

0xbe57,	// (0x0002b14d) fep_vkb_keypad_pane

0xbe8a,	// (0x0002b180) fep_vkb_side_pane_ParamLimits

0xbe8a,	// (0x0002b180) fep_vkb_side_pane

0xbec6,	// (0x0002b1bc) fep_vkb_top_pane_ParamLimits

0xbec6,	// (0x0002b1bc) fep_vkb_top_pane

0xbf02,	// (0x0002b1f8) fep_vkb_top_pane_g1_ParamLimits

0xbf02,	// (0x0002b1f8) fep_vkb_top_pane_g1

0xbf11,	// (0x0002b207) fep_vkb_top_pane_g2_ParamLimits

0xbf11,	// (0x0002b207) fep_vkb_top_pane_g2

0xbf20,	// (0x0002b216) fep_vkb_top_pane_g3_ParamLimits

0xbf20,	// (0x0002b216) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x0002ee16) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x0002ee16) fep_vkb_top_pane_g

0xbf3e,	// (0x0002b234) fep_vkb_top_text_pane_ParamLimits

0xbf3e,	// (0x0002b234) fep_vkb_top_text_pane

0xbf4f,	// (0x0002b245) fep_vkb_side_pane_g1_ParamLimits

0xbf4f,	// (0x0002b245) fep_vkb_side_pane_g1

0xbf98,	// (0x0002b28e) grid_vkb_side_pane_ParamLimits

0xbf98,	// (0x0002b28e) grid_vkb_side_pane

0x89ab,	// (0x00027ca1) bg_popup_fep_shadow_pane_g2

0x89b4,	// (0x00027caa) bg_popup_fep_shadow_pane_g3

0x89bc,	// (0x00027cb2) bg_popup_fep_shadow_pane_g4

0x89c5,	// (0x00027cbb) bg_popup_fep_shadow_pane_g5

0x89cf,	// (0x00027cc5) bg_popup_fep_shadow_pane_g6

0x89d7,	// (0x00027ccd) bg_popup_fep_shadow_pane_g7

0x1a38,	// (0x00020d2e) bg_popup_fep_shadow_pane_g8

0xbff7,	// (0x0002b2ed) grid_vkb_keypad_number_pane_ParamLimits

0xbff7,	// (0x0002b2ed) grid_vkb_keypad_number_pane

0xc00b,	// (0x0002b301) grid_vkb_keypad_pane_ParamLimits

0xc00b,	// (0x0002b301) grid_vkb_keypad_pane

0xc031,	// (0x0002b327) fep_vkb_bottom_pane_g1_ParamLimits

0xc031,	// (0x0002b327) fep_vkb_bottom_pane_g1

0xc05a,	// (0x0002b350) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc05a,	// (0x0002b350) grid_vkb_keypad_bottom_left_pane

0xc06f,	// (0x0002b365) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc06f,	// (0x0002b365) grid_vkb_keypad_bottom_right_pane

0xc084,	// (0x0002b37a) fep_vkb_top_text_pane_g1

0xc09f,	// (0x0002b395) fep_vkb_top_text_pane_t1

0xc0b4,	// (0x0002b3aa) cell_vkb_side_pane_ParamLimits

0xc0b4,	// (0x0002b3aa) cell_vkb_side_pane

0xbccd,	// (0x0002afc3) cell_vkb_side_pane_g1

0xc0f3,	// (0x0002b3e9) cell_vkb_keypad_pane_ParamLimits

0xc0f3,	// (0x0002b3e9) cell_vkb_keypad_pane

0xc180,	// (0x0002b476) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x0002ee43) bg_popup_fep_shadow_pane_g

0xbccd,	// (0x0002afc3) cell_hwr_side_pane_g1

0xbccd,	// (0x0002afc3) cell_hwr_side_pane_g2

0xc18a,	// (0x0002b480) cell_vkb_keypad_pane_t1

0xc198,	// (0x0002b48e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc198,	// (0x0002b48e) cell_vkb_keypad_bottom_left_pane

0xc1b5,	// (0x0002b4ab) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1b5,	// (0x0002b4ab) cell_vkb_keypad_bottom_right_pane

0xbccd,	// (0x0002afc3) cell_vkb_keypad_bottom_left_pane_g1

0xbccd,	// (0x0002afc3) cell_vkb_keypad_bottom_right_pane_g1

0xc1ee,	// (0x0002b4e4) cell_vkb_keypad_number_pane_ParamLimits

0xc1ee,	// (0x0002b4e4) cell_vkb_keypad_number_pane

0xc20d,	// (0x0002b503) cell_vkb_keypad_number_pane_g1

0xc217,	// (0x0002b50d) cell_vkb_keypad_number_pane_g2

0xc220,	// (0x0002b516) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x0002ee35) cell_vkb_keypad_number_pane_g

0xc18a,	// (0x0002b480) cell_vkb_keypad_number_pane_t1

0xc24a,	// (0x0002b540) fep_vkb_candidate_pane_g1

0x0001,

0xfb3a,	// (0x0002ee30) cell_hwr_side_pane_g

0xc263,	// (0x0002b559) cell_hwr_side_pane_t1

0x89e9,	// (0x00027cdf) cell_hwr_side_pane_t1_copy1

0xbf30,	// (0x0002b226) cell_hwr_candidate_pane_g1

0x89f7,	// (0x00027ced) cell_hwr_candidate_pane_t1

0xbccd,	// (0x0002afc3) cell_vkb_candidate_pane_g2

0xc2e9,	// (0x0002b5df) cell_vkb_candidate_pane_t1

0x87a1,	// (0x00027a97) bg_popup_fep_shadow_pane_ParamLimits

0x87a1,	// (0x00027a97) bg_popup_fep_shadow_pane

0x11eb,	// (0x000204e1) bg_fep_hwr_top_pane_g4

0xbd3a,	// (0x0002b030) bg_hwr_side_pane_g1_ParamLimits

0xbd3a,	// (0x0002b030) bg_hwr_side_pane_g1

0x88bd,	// (0x00027bb3) cell_hwr_side_pane_ParamLimits

0x88bd,	// (0x00027bb3) cell_hwr_side_pane

0x88fa,	// (0x00027bf0) fep_hwr_write_pane_g1_ParamLimits

0x88fa,	// (0x00027bf0) fep_hwr_write_pane_g1

0x8907,	// (0x00027bfd) fep_hwr_write_pane_g2_ParamLimits

0x8907,	// (0x00027bfd) fep_hwr_write_pane_g2

0x8914,	// (0x00027c0a) fep_hwr_write_pane_g3_ParamLimits

0x8914,	// (0x00027c0a) fep_hwr_write_pane_g3

0x8922,	// (0x00027c18) fep_hwr_write_pane_g4_ParamLimits

0x8922,	// (0x00027c18) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x0002ee02) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x0002ee02) fep_hwr_write_pane_g

0x11eb,	// (0x000204e1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x11eb,	// (0x000204e1) bg_fep_hwr_candidate_pane_g2

0x8937,	// (0x00027c2d) cell_hwr_candidate_pane_ParamLimits

0x8937,	// (0x00027c2d) cell_hwr_candidate_pane

0x8989,	// (0x00027c7f) fep_hwr_candidate_pane_g1_ParamLimits

0xbd9a,	// (0x0002b090) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd9a,	// (0x0002b090) bg_popup_fep_shadow_pane_cp2

0xbf30,	// (0x0002b226) fep_vkb_top_pane_g4_ParamLimits

0xbf30,	// (0x0002b226) fep_vkb_top_pane_g4

0xbf76,	// (0x0002b26c) fep_vkb_side_pane_g2_ParamLimits

0xbf76,	// (0x0002b26c) fep_vkb_side_pane_g2

0x539f,	// (0x00024695) list_setting_pane_t4_ParamLimits

0x539f,	// (0x00024695) list_setting_pane_t4

0x543b,	// (0x00024731) list_setting_number_pane_t5_ParamLimits

0x543b,	// (0x00024731) list_setting_number_pane_t5

0x6bf3,	// (0x00025ee9) list_double_heading_pane_cp2_ParamLimits

0x6bf3,	// (0x00025ee9) list_double_heading_pane_cp2

0xc2f7,	// (0x0002b5ed) list_double_heading_pane_g1_cp2_ParamLimits

0xc2f7,	// (0x0002b5ed) list_double_heading_pane_g1_cp2

0xc303,	// (0x0002b5f9) list_double_heading_pane_g2_cp2_ParamLimits

0xc303,	// (0x0002b5f9) list_double_heading_pane_g2_cp2

0xc317,	// (0x0002b60d) list_double_heading_pane_t1_cp2_ParamLimits

0xc317,	// (0x0002b60d) list_double_heading_pane_t1_cp2

0xc32d,	// (0x0002b623) list_double_heading_pane_t2_cp2_ParamLimits

0xc32d,	// (0x0002b623) list_double_heading_pane_t2_cp2

0x1213,	// (0x00020509) aid_value_unit2

0x63cd,	// (0x000256c3) popup_preview_fixed_window

0x13d8,	// (0x000206ce) bg_popup_preview_window_pane_cp02

0xc33f,	// (0x0002b635) list_preview_fixed_pane

0xc385,	// (0x0002b67b) list_empty_pane_fp_ParamLimits

0xc385,	// (0x0002b67b) list_empty_pane_fp

0xc385,	// (0x0002b67b) list_single_cale_day_pane_fp_ParamLimits

0xc385,	// (0x0002b67b) list_single_cale_day_pane_fp

0xc385,	// (0x0002b67b) list_single_graphic_heading_pane_fp_ParamLimits

0xc385,	// (0x0002b67b) list_single_graphic_heading_pane_fp

0xc385,	// (0x0002b67b) list_single_graphic_pane_fp_ParamLimits

0xc385,	// (0x0002b67b) list_single_graphic_pane_fp

0xc385,	// (0x0002b67b) list_single_heading_pane_fp_ParamLimits

0xc385,	// (0x0002b67b) list_single_heading_pane_fp

0xc385,	// (0x0002b67b) list_single_pane_fp_ParamLimits

0xc385,	// (0x0002b67b) list_single_pane_fp

0xc39e,	// (0x0002b694) list_single_pane_fp_g1_ParamLimits

0xc39e,	// (0x0002b694) list_single_pane_fp_g1

0x5d31,	// (0x00025027) list_single_pane_fp_g2_ParamLimits

0x5d31,	// (0x00025027) list_single_pane_fp_g2

0x5d3d,	// (0x00025033) list_single_pane_fp_g3_ParamLimits

0x5d3d,	// (0x00025033) list_single_pane_fp_g3

0xc3aa,	// (0x0002b6a0) list_single_pane_fp_g4_ParamLimits

0xc3aa,	// (0x0002b6a0) list_single_pane_fp_g4

0x0003,

0xfb6e,	// (0x0002ee64) list_single_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002ee64) list_single_pane_fp_g

0x5d51,	// (0x00025047) list_single_pane_fp_t1_ParamLimits

0x5d51,	// (0x00025047) list_single_pane_fp_t1

0x5d68,	// (0x0002505e) list_single_graphic_pane_fp_g1_ParamLimits

0x5d68,	// (0x0002505e) list_single_graphic_pane_fp_g1

0xc39e,	// (0x0002b694) list_single_graphic_pane_fp_g2_ParamLimits

0xc39e,	// (0x0002b694) list_single_graphic_pane_fp_g2

0x5d31,	// (0x00025027) list_single_graphic_pane_fp_g3_ParamLimits

0x5d31,	// (0x00025027) list_single_graphic_pane_fp_g3

0x5d3d,	// (0x00025033) list_single_graphic_pane_fp_g4_ParamLimits

0x5d3d,	// (0x00025033) list_single_graphic_pane_fp_g4

0xc3aa,	// (0x0002b6a0) list_single_graphic_pane_fp_g5_ParamLimits

0xc3aa,	// (0x0002b6a0) list_single_graphic_pane_fp_g5

0x0004,

0xfb77,	// (0x0002ee6d) list_single_graphic_pane_fp_g_ParamLimits

0xfb77,	// (0x0002ee6d) list_single_graphic_pane_fp_g

0x5d74,	// (0x0002506a) list_single_graphic_pane_fp_t1_ParamLimits

0x5d74,	// (0x0002506a) list_single_graphic_pane_fp_t1

0x5d68,	// (0x0002505e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5d68,	// (0x0002505e) list_single_graphic_heading_pane_fp_g1

0xc39e,	// (0x0002b694) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc39e,	// (0x0002b694) list_single_graphic_heading_pane_fp_g2

0x5d31,	// (0x00025027) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5d31,	// (0x00025027) list_single_graphic_heading_pane_fp_g3

0x5d3d,	// (0x00025033) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5d3d,	// (0x00025033) list_single_graphic_heading_pane_fp_g4

0xc3aa,	// (0x0002b6a0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc3aa,	// (0x0002b6a0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002ee6d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002ee6d) list_single_graphic_heading_pane_fp_g

0x5d8a,	// (0x00025080) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5d8a,	// (0x00025080) list_single_graphic_heading_pane_fp_t1

0x5da0,	// (0x00025096) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5da0,	// (0x00025096) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb82,	// (0x0002ee78) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb82,	// (0x0002ee78) list_single_graphic_heading_pane_fp_t

0x5db2,	// (0x000250a8) list_single_cale_day_pane_fp_g1_ParamLimits

0x5db2,	// (0x000250a8) list_single_cale_day_pane_fp_g1

0xc3b6,	// (0x0002b6ac) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3b6,	// (0x0002b6ac) list_single_cale_day_pane_fp_g2

0x5dea,	// (0x000250e0) list_single_cale_day_pane_fp_g3_ParamLimits

0x5dea,	// (0x000250e0) list_single_cale_day_pane_fp_g3

0x5e12,	// (0x00025108) list_single_cale_day_pane_fp_g4_ParamLimits

0x5e12,	// (0x00025108) list_single_cale_day_pane_fp_g4

0x5e36,	// (0x0002512c) list_single_cale_day_pane_fp_g5_ParamLimits

0x5e36,	// (0x0002512c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb87,	// (0x0002ee7d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb87,	// (0x0002ee7d) list_single_cale_day_pane_fp_g

0x5e5a,	// (0x00025150) list_single_cale_day_pane_fp_t1_ParamLimits

0x5e5a,	// (0x00025150) list_single_cale_day_pane_fp_t1

0x5e80,	// (0x00025176) list_single_cale_day_pane_fp_t2_ParamLimits

0x5e80,	// (0x00025176) list_single_cale_day_pane_fp_t2

0x5e99,	// (0x0002518f) list_single_cale_day_pane_fp_t3_ParamLimits

0x5e99,	// (0x0002518f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb92,	// (0x0002ee88) list_single_cale_day_pane_fp_t_ParamLimits

0xfb92,	// (0x0002ee88) list_single_cale_day_pane_fp_t

0xc39e,	// (0x0002b694) list_empty_pane_fp_g1_ParamLimits

0xc39e,	// (0x0002b694) list_empty_pane_fp_g1

0x5eb2,	// (0x000251a8) list_empty_pane_fp_t1

0x5ec0,	// (0x000251b6) list_empty_pane_fp_t2

0x0001,

0xfb99,	// (0x0002ee8f) list_empty_pane_fp_t

0xc39e,	// (0x0002b694) list_single_heading_pane_fp_g1_ParamLimits

0xc39e,	// (0x0002b694) list_single_heading_pane_fp_g1

0x5d31,	// (0x00025027) list_single_heading_pane_fp_g2_ParamLimits

0x5d31,	// (0x00025027) list_single_heading_pane_fp_g2

0x5d3d,	// (0x00025033) list_single_heading_pane_fp_g3_ParamLimits

0x5d3d,	// (0x00025033) list_single_heading_pane_fp_g3

0x0002,

0xfb9e,	// (0x0002ee94) list_single_heading_pane_fp_g_ParamLimits

0xfb9e,	// (0x0002ee94) list_single_heading_pane_fp_g

0x5ece,	// (0x000251c4) list_single_heading_pane_fp_t1_ParamLimits

0x5ece,	// (0x000251c4) list_single_heading_pane_fp_t1

0x5ee0,	// (0x000251d6) list_single_heading_pane_fp_t2_ParamLimits

0x5ee0,	// (0x000251d6) list_single_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0002ee9b) list_single_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0002ee9b) list_single_heading_pane_fp_t

0x1b52,	// (0x00020e48) aid_size_cell_fast

0x13bb,	// (0x000206b1) soft_indicator_pane_cp1_t1

0x1b8f,	// (0x00020e85) cell_app_pane_cp2_ParamLimits

0x1b8f,	// (0x00020e85) cell_app_pane_cp2

0x87c3,	// (0x00027ab9) fep_hwr_candidate_drop_down_list_pane

0x11f9,	// (0x000204ef) fep_hwr_candidate_pane_g3_ParamLimits

0x11f9,	// (0x000204ef) fep_hwr_candidate_pane_g3

0x1206,	// (0x000204fc) fep_hwr_candidate_pane_g4_ParamLimits

0x1206,	// (0x000204fc) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x0002ee0f) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x0002ee0f) fep_hwr_candidate_pane_g

0xbe2a,	// (0x0002b120) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe2a,	// (0x0002b120) fep_vkb_candidate_drop_down_list_pane

0xc252,	// (0x0002b548) fep_vkb_candidate_pane_g3

0xc25a,	// (0x0002b550) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x0002ee3c) fep_vkb_candidate_pane_g

0xbf30,	// (0x0002b226) cell_hwr_candidate_pane_g1_ParamLimits

0xc271,	// (0x0002b567) cell_hwr_candidate_pane_g3_ParamLimits

0xc271,	// (0x0002b567) cell_hwr_candidate_pane_g3

0xc292,	// (0x0002b588) cell_hwr_candidate_pane_g4_ParamLimits

0xc292,	// (0x0002b588) cell_hwr_candidate_pane_g4

0x0002,

0xfb60,	// (0x0002ee56) cell_hwr_candidate_pane_g_ParamLimits

0xfb60,	// (0x0002ee56) cell_hwr_candidate_pane_g

0xc2b3,	// (0x0002b5a9) cell_vkb_candidate_pane_g3_ParamLimits

0xc2b3,	// (0x0002b5a9) cell_vkb_candidate_pane_g3

0xc2ce,	// (0x0002b5c4) cell_vkb_candidate_pane_g4_ParamLimits

0xc2ce,	// (0x0002b5c4) cell_vkb_candidate_pane_g4

0xc3c2,	// (0x0002b6b8) cell_app_pane_cp2_g1_ParamLimits

0xc3c2,	// (0x0002b6b8) cell_app_pane_cp2_g1

0xc3e0,	// (0x0002b6d6) cell_app_pane_cp2_g2_ParamLimits

0xc3e0,	// (0x0002b6d6) cell_app_pane_cp2_g2

0x0001,

0xfbaa,	// (0x0002eea0) cell_app_pane_cp2_g_ParamLimits

0xfbaa,	// (0x0002eea0) cell_app_pane_cp2_g

0xc3ec,	// (0x0002b6e2) cell_app_pane_cp2_t1_ParamLimits

0xc3ec,	// (0x0002b6e2) cell_app_pane_cp2_t1

0x195d,	// (0x00020c53) grid_highlight_pane_cp1_ParamLimits

0x195d,	// (0x00020c53) grid_highlight_pane_cp1

0x8a15,	// (0x00027d0b) cell_hwr_candidate_pane_cp1_ParamLimits

0x8a15,	// (0x00027d0b) cell_hwr_candidate_pane_cp1

0xbf30,	// (0x0002b226) fep_hwr_candidate_drop_down_list_pane_g1

0xc3fe,	// (0x0002b6f4) fep_hwr_candidate_drop_down_list_pane_g2

0xc40b,	// (0x0002b701) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002eea5) fep_hwr_candidate_drop_down_list_pane_g

0x8a39,	// (0x00027d2f) fep_hwr_candidate_drop_down_list_scroll_pane

0x8a42,	// (0x00027d38) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8a42,	// (0x00027d38) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8a4f,	// (0x00027d45) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8a4f,	// (0x00027d45) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8a5c,	// (0x00027d52) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8a5c,	// (0x00027d52) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc2b3,	// (0x0002b5a9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc2b3,	// (0x0002b5a9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc2ce,	// (0x0002b5c4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc2ce,	// (0x0002b5c4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8a69,	// (0x00027d5f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8a69,	// (0x00027d5f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8a84,	// (0x00027d7a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8a84,	// (0x00027d7a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8a9f,	// (0x00027d95) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8a9f,	// (0x00027d95) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x0002eeac) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x0002eeac) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc418,	// (0x0002b70e) cell_vkb_candidate_pane_cp1_ParamLimits

0xc418,	// (0x0002b70e) cell_vkb_candidate_pane_cp1

0xbf30,	// (0x0002b226) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf30,	// (0x0002b226) fep_vkb_candidate_drop_down_list_pane_g1

0xc3fe,	// (0x0002b6f4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc3fe,	// (0x0002b6f4) fep_vkb_candidate_drop_down_list_pane_g2

0xc40b,	// (0x0002b701) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc40b,	// (0x0002b701) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002eea5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaf,	// (0x0002eea5) fep_vkb_candidate_drop_down_list_pane_g

0xc43e,	// (0x0002b734) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc43e,	// (0x0002b734) fep_vkb_candidate_drop_down_list_scroll_pane

0xc44b,	// (0x0002b741) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc44b,	// (0x0002b741) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc458,	// (0x0002b74e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc458,	// (0x0002b74e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc464,	// (0x0002b75a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc464,	// (0x0002b75a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc271,	// (0x0002b567) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc271,	// (0x0002b567) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc292,	// (0x0002b588) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc292,	// (0x0002b588) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc470,	// (0x0002b766) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc470,	// (0x0002b766) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc491,	// (0x0002b787) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc491,	// (0x0002b787) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc4b2,	// (0x0002b7a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc4b2,	// (0x0002b7a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc7,	// (0x0002eebd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc7,	// (0x0002eebd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x64ed,	// (0x000257e3) title_pane_g1_ParamLimits

0x64fa,	// (0x000257f0) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e844) title_pane_g_ParamLimits

0x33c3,	// (0x000226b9) aid_call2_pane

0x33bb,	// (0x000226b1) aid_call_pane

0x33cb,	// (0x000226c1) popup_clock_analogue_window_g1

0x33cb,	// (0x000226c1) popup_clock_analogue_window_g2

0x6bd4,	// (0x00025eca) popup_clock_analogue_window_g3

0x6bdd,	// (0x00025ed3) popup_clock_analogue_window_g4

0x1225,	// (0x0002051b) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002e9e9) popup_clock_analogue_window_g

0x6be5,	// (0x00025edb) popup_clock_analogue_window_t1

0x6c26,	// (0x00025f1c) clock_digital_number_pane_ParamLimits

0x6c26,	// (0x00025f1c) clock_digital_number_pane

0x6c32,	// (0x00025f28) clock_digital_number_pane_cp02_ParamLimits

0x6c32,	// (0x00025f28) clock_digital_number_pane_cp02

0x6c3e,	// (0x00025f34) clock_digital_number_pane_cp03_ParamLimits

0x6c3e,	// (0x00025f34) clock_digital_number_pane_cp03

0x6c4a,	// (0x00025f40) clock_digital_number_pane_cp04_ParamLimits

0x6c4a,	// (0x00025f40) clock_digital_number_pane_cp04

0x6c56,	// (0x00025f4c) clock_digital_separator_pane_ParamLimits

0x6c56,	// (0x00025f4c) clock_digital_separator_pane

0x6c62,	// (0x00025f58) popup_clock_digital_window_t1_ParamLimits

0x6c62,	// (0x00025f58) popup_clock_digital_window_t1

0x1225,	// (0x0002051b) clock_digital_number_pane_g1

0x1225,	// (0x0002051b) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0002e9f4) clock_digital_number_pane_g

0x1225,	// (0x0002051b) clock_digital_separator_pane_g1

0x1225,	// (0x0002051b) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0002e9f4) clock_digital_separator_pane_g

0x7df6,	// (0x000270ec) aid_fill_nsta_ParamLimits

0x7f3c,	// (0x00027232) indicator_nsta_pane_ParamLimits

0x80cd,	// (0x000273c3) popup_clock_analogue_window

0x80cd,	// (0x000273c3) popup_clock_digital_window

0x128b,	// (0x00020581) grid_indicator_nsta_pane_ParamLimits

0xb737,	// (0x0002aa2d) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x0002ed8f) clock_nsta_pane_t

0x6b3d,	// (0x00025e33) aid_size_max_handle

0x6b47,	// (0x00025e3d) aid_size_min_handle

0x7233,	// (0x00026529) editor_scroll_pane

0xc4cd,	// (0x0002b7c3) ex_editor_pane

0x1b18,	// (0x00020e0e) scroll_pane_cp13

0x1882,	// (0x00020b78) scroll_pane_cp14

0x3419,	// (0x0002270f) scroll_pane_cp36

0x6c09,	// (0x00025eff) list_single_graphic_hl_pane_cp2_ParamLimits

0x6c09,	// (0x00025eff) list_single_graphic_hl_pane_cp2

0x596e,	// (0x00024c64) list_single_graphic_hl_pane_ParamLimits

0x596e,	// (0x00024c64) list_single_graphic_hl_pane

0x5ef6,	// (0x000251ec) aid_size_min_hl_cp1

0xc4d5,	// (0x0002b7cb) list_highlight_pane_cp34_ParamLimits

0xc4d5,	// (0x0002b7cb) list_highlight_pane_cp34

0xc4e6,	// (0x0002b7dc) list_single_graphic_hl_pane_g1_ParamLimits

0xc4e6,	// (0x0002b7dc) list_single_graphic_hl_pane_g1

0x5eff,	// (0x000251f5) list_single_graphic_hl_pane_g2_ParamLimits

0x5eff,	// (0x000251f5) list_single_graphic_hl_pane_g2

0x5eff,	// (0x000251f5) list_single_graphic_hl_pane_g3_ParamLimits

0x5eff,	// (0x000251f5) list_single_graphic_hl_pane_g3

0x5789,	// (0x00024a7f) list_single_graphic_hl_pane_g4_ParamLimits

0x5789,	// (0x00024a7f) list_single_graphic_hl_pane_g4

0x5f0b,	// (0x00025201) list_single_graphic_hl_pane_g5_ParamLimits

0x5f0b,	// (0x00025201) list_single_graphic_hl_pane_g5

0x0004,

0xfbd8,	// (0x0002eece) list_single_graphic_hl_pane_g_ParamLimits

0xfbd8,	// (0x0002eece) list_single_graphic_hl_pane_g

0x5f1f,	// (0x00025215) list_single_graphic_hl_pane_t1_ParamLimits

0x5f1f,	// (0x00025215) list_single_graphic_hl_pane_t1

0xc4f3,	// (0x0002b7e9) aid_size_min_hl_cp2

0xc4fc,	// (0x0002b7f2) list_highlight_pane_cp34_cp2_ParamLimits

0xc4fc,	// (0x0002b7f2) list_highlight_pane_cp34_cp2

0xc4e6,	// (0x0002b7dc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc4e6,	// (0x0002b7dc) list_single_graphic_hl_pane_g1_cp2

0xc509,	// (0x0002b7ff) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc509,	// (0x0002b7ff) list_single_graphic_hl_pane_g2_cp2

0xc515,	// (0x0002b80b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc515,	// (0x0002b80b) list_single_graphic_hl_pane_g3_cp2

0xc523,	// (0x0002b819) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc523,	// (0x0002b819) list_single_graphic_hl_pane_g4_cp2

0xc52f,	// (0x0002b825) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc52f,	// (0x0002b825) list_single_graphic_hl_pane_g5_cp2

0x7606,	// (0x000268fc) control_pane_g4_ParamLimits

0x7606,	// (0x000268fc) control_pane_g4

0x7789,	// (0x00026a7f) bg_popup_sub_pane_cp10_ParamLimits

0xbcd7,	// (0x0002afcd) list_choice_list_pane_ParamLimits

0xbce6,	// (0x0002afdc) scroll_pane_cp23

0x13d8,	// (0x000206ce) bg_popup_preview_window_pane_cp02_ParamLimits

0xc33f,	// (0x0002b635) list_preview_fixed_pane_ParamLimits

0xc355,	// (0x0002b64b) list_preview_fixed_pane_cp_ParamLimits

0xc355,	// (0x0002b64b) list_preview_fixed_pane_cp

0xc361,	// (0x0002b657) popup_preview_fixed_window_g1_ParamLimits

0xc361,	// (0x0002b657) popup_preview_fixed_window_g1

0xc36d,	// (0x0002b663) popup_preview_fixed_window_g2_ParamLimits

0xc36d,	// (0x0002b663) popup_preview_fixed_window_g2

0x0002,

0xfb67,	// (0x0002ee5d) popup_preview_fixed_window_g_ParamLimits

0xfb67,	// (0x0002ee5d) popup_preview_fixed_window_g

0x6a13,	// (0x00025d09) aid_navi_side_left_pane_ParamLimits

0x6a28,	// (0x00025d1e) aid_navi_side_right_pane_ParamLimits

0x6a40,	// (0x00025d36) navi_icon_pane_stacon_ParamLimits

0x6a54,	// (0x00025d4a) navi_navi_pane_stacon_ParamLimits

0x6a40,	// (0x00025d36) navi_text_pane_stacon_ParamLimits

0x121b,	// (0x00020511) main_text_info_pane

0xc559,	// (0x0002b84f) listscroll_text_info_pane

0xc561,	// (0x0002b857) list_text_info_pane_ParamLimits

0xc561,	// (0x0002b857) list_text_info_pane

0xc570,	// (0x0002b866) scroll_pane_cp24_ParamLimits

0xc570,	// (0x0002b866) scroll_pane_cp24

0xc58e,	// (0x0002b884) list_text_info_pane_t1_ParamLimits

0xc58e,	// (0x0002b884) list_text_info_pane_t1

0x7809,	// (0x00026aff) popup_fast_swap2_window_ParamLimits

0x7809,	// (0x00026aff) popup_fast_swap2_window

0xc5b3,	// (0x0002b8a9) aid_size_cell_fast2

0x121b,	// (0x00020511) bg_popup_window_pane_cp17

0x9af4,	// (0x00028dea) heading_pane_cp2

0x1607,	// (0x000208fd) listscroll_fast2_pane

0xc5bd,	// (0x0002b8b3) grid_fast2_pane

0xc5c7,	// (0x0002b8bd) listscroll_fast2_pane_g1

0xc5d1,	// (0x0002b8c7) listscroll_fast2_pane_g2

0x0001,

0xfbe3,	// (0x0002eed9) listscroll_fast2_pane_g

0x1b18,	// (0x00020e0e) scroll_pane_cp26

0xc5db,	// (0x0002b8d1) cell_fast2_pane_ParamLimits

0xc5db,	// (0x0002b8d1) cell_fast2_pane

0xc5f2,	// (0x0002b8e8) cell_fast2_pane_g1

0xc5fb,	// (0x0002b8f1) cell_fast2_pane_g2

0xc604,	// (0x0002b8fa) cell_fast2_pane_g3

0x0002,

0xfbe8,	// (0x0002eede) cell_fast2_pane_g

0x1649,	// (0x0002093f) grid_highlight_pane_cp9

0x165e,	// (0x00020954) main_eswt_pane_ParamLimits

0x165e,	// (0x00020954) main_eswt_pane

0xc585,	// (0x0002b87b) list_single_text_info_pane

0xc60c,	// (0x0002b902) eswt_ctrl_button_pane

0xc60c,	// (0x0002b902) eswt_ctrl_canvas_pane

0xc614,	// (0x0002b90a) eswt_ctrl_combo_pane

0xc60c,	// (0x0002b902) eswt_ctrl_default_pane

0xc60c,	// (0x0002b902) eswt_ctrl_label_pane

0xc61c,	// (0x0002b912) eswt_ctrl_wait_pane

0xc624,	// (0x0002b91a) eswt_shell_pane

0x121b,	// (0x00020511) listscroll_eswt_app_pane

0xc644,	// (0x0002b93a) popup_eswt_tasktip_window_ParamLimits

0xc644,	// (0x0002b93a) popup_eswt_tasktip_window

0x9732,	// (0x00028a28) bg_popup_window_pane_cp18

0xc655,	// (0x0002b94b) eswt_control_pane_g1_ParamLimits

0xc655,	// (0x0002b94b) eswt_control_pane_g1

0xc662,	// (0x0002b958) eswt_control_pane_g2_ParamLimits

0xc662,	// (0x0002b958) eswt_control_pane_g2

0xc66f,	// (0x0002b965) eswt_control_pane_g3_ParamLimits

0xc66f,	// (0x0002b965) eswt_control_pane_g3

0xc67c,	// (0x0002b972) eswt_control_pane_g4_ParamLimits

0xc67c,	// (0x0002b972) eswt_control_pane_g4

0x0003,

0xfbef,	// (0x0002eee5) eswt_control_pane_g_ParamLimits

0xfbef,	// (0x0002eee5) eswt_control_pane_g

0x195d,	// (0x00020c53) bg_button_pane_ParamLimits

0x195d,	// (0x00020c53) bg_button_pane

0x165e,	// (0x00020954) common_borders_pane_copy2_ParamLimits

0x165e,	// (0x00020954) common_borders_pane_copy2

0xc689,	// (0x0002b97f) control_button_pane_g1_ParamLimits

0xc689,	// (0x0002b97f) control_button_pane_g1

0xc695,	// (0x0002b98b) control_button_pane_g2_ParamLimits

0xc695,	// (0x0002b98b) control_button_pane_g2

0xc6a1,	// (0x0002b997) control_button_pane_g3_ParamLimits

0xc6a1,	// (0x0002b997) control_button_pane_g3

0x0002,

0xfbf8,	// (0x0002eeee) control_button_pane_g_ParamLimits

0xfbf8,	// (0x0002eeee) control_button_pane_g

0xc6b5,	// (0x0002b9ab) control_button_pane_t1

0xc6c3,	// (0x0002b9b9) control_button_pane_t2

0x0001,

0xfbff,	// (0x0002eef5) control_button_pane_t

0x831a,	// (0x00027610) bg_button_pane_g1

0x8322,	// (0x00027618) bg_button_pane_g2

0x832a,	// (0x00027620) bg_button_pane_g3

0x96de,	// (0x000289d4) bg_button_pane_g4

0x8332,	// (0x00027628) bg_button_pane_g5

0x96e6,	// (0x000289dc) bg_button_pane_g6

0x96ee,	// (0x000289e4) bg_button_pane_g7

0x96f6,	// (0x000289ec) bg_button_pane_g8

0x96fe,	// (0x000289f4) bg_button_pane_g9

0x0008,

0xf861,	// (0x0002eb57) bg_button_pane_g

0xbc92,	// (0x0002af88) common_borders_pane_ParamLimits

0xbc92,	// (0x0002af88) common_borders_pane

0xc655,	// (0x0002b94b) eswt_control_pane_g1_copy1_ParamLimits

0xc655,	// (0x0002b94b) eswt_control_pane_g1_copy1

0xc662,	// (0x0002b958) eswt_control_pane_g2_copy1_ParamLimits

0xc662,	// (0x0002b958) eswt_control_pane_g2_copy1

0xc66f,	// (0x0002b965) eswt_control_pane_g3_copy1_ParamLimits

0xc66f,	// (0x0002b965) eswt_control_pane_g3_copy1

0xc67c,	// (0x0002b972) eswt_control_pane_g4_copy1_ParamLimits

0xc67c,	// (0x0002b972) eswt_control_pane_g4_copy1

0xbccd,	// (0x0002afc3) bg_eswt_ctrl_canvas_pane_g1

0xbc92,	// (0x0002af88) common_borders_pane_cp2_ParamLimits

0xbc92,	// (0x0002af88) common_borders_pane_cp2

0xbc92,	// (0x0002af88) common_borders_pane_cp3_ParamLimits

0xbc92,	// (0x0002af88) common_borders_pane_cp3

0xc6d1,	// (0x0002b9c7) separator_horizontal_pane

0xc6d9,	// (0x0002b9cf) separator_vertical_pane

0xc655,	// (0x0002b94b) eswt_control_pane_g1_copy2_ParamLimits

0xc655,	// (0x0002b94b) eswt_control_pane_g1_copy2

0xc662,	// (0x0002b958) eswt_control_pane_g2_copy2_ParamLimits

0xc662,	// (0x0002b958) eswt_control_pane_g2_copy2

0xc66f,	// (0x0002b965) eswt_control_pane_g3_copy2_ParamLimits

0xc66f,	// (0x0002b965) eswt_control_pane_g3_copy2

0xc67c,	// (0x0002b972) eswt_control_pane_g4_copy2_ParamLimits

0xc67c,	// (0x0002b972) eswt_control_pane_g4_copy2

0x121b,	// (0x00020511) common_borders_pane_cp4

0xc6e2,	// (0x0002b9d8) separator_horizontal_pane_g1

0xc6eb,	// (0x0002b9e1) separator_horizontal_pane_g2

0xc6f4,	// (0x0002b9ea) separator_horizontal_pane_g3

0x0002,

0xfc04,	// (0x0002eefa) separator_horizontal_pane_g

0xc655,	// (0x0002b94b) eswt_control_pane_g1_copy3_ParamLimits

0xc655,	// (0x0002b94b) eswt_control_pane_g1_copy3

0xc662,	// (0x0002b958) eswt_control_pane_g2_copy3_ParamLimits

0xc662,	// (0x0002b958) eswt_control_pane_g2_copy3

0xc66f,	// (0x0002b965) eswt_control_pane_g3_copy3_ParamLimits

0xc66f,	// (0x0002b965) eswt_control_pane_g3_copy3

0xc67c,	// (0x0002b972) eswt_control_pane_g4_copy3_ParamLimits

0xc67c,	// (0x0002b972) eswt_control_pane_g4_copy3

0x121b,	// (0x00020511) common_borders_pane_cp5

0xc6fd,	// (0x0002b9f3) separator_vertical_pane_g1

0xc706,	// (0x0002b9fc) separator_vertical_pane_g2

0xc70f,	// (0x0002ba05) separator_vertical_pane_g3

0x0002,

0xfc0b,	// (0x0002ef01) separator_vertical_pane_g

0xc655,	// (0x0002b94b) eswt_control_pane_g1_copy4_ParamLimits

0xc655,	// (0x0002b94b) eswt_control_pane_g1_copy4

0xc662,	// (0x0002b958) eswt_control_pane_g2_copy4_ParamLimits

0xc662,	// (0x0002b958) eswt_control_pane_g2_copy4

0xc66f,	// (0x0002b965) eswt_control_pane_g3_copy4_ParamLimits

0xc66f,	// (0x0002b965) eswt_control_pane_g3_copy4

0xc67c,	// (0x0002b972) eswt_control_pane_g4_copy4_ParamLimits

0xc67c,	// (0x0002b972) eswt_control_pane_g4_copy4

0xc718,	// (0x0002ba0e) eswt_ctrl_combo_button_pane

0xc720,	// (0x0002ba16) eswt_ctrl_input_pane

0xc728,	// (0x0002ba1e) popup_choice_list_window_cp70

0xc730,	// (0x0002ba26) eswt_ctrl_input_pane_t1

0x121b,	// (0x00020511) input_focus_pane_cp70

0xbc92,	// (0x0002af88) bg_button_pane_cp70_ParamLimits

0xbc92,	// (0x0002af88) bg_button_pane_cp70

0xc73e,	// (0x0002ba34) eswt_ctrl_combo_button_pane_g1

0xc746,	// (0x0002ba3c) wait_bar_pane_cp70

0x9732,	// (0x00028a28) bg_popup_window_pane_cp70_ParamLimits

0x9732,	// (0x00028a28) bg_popup_window_pane_cp70

0xc74e,	// (0x0002ba44) popup_eswt_tasktip_window_t1

0xc764,	// (0x0002ba5a) wait_bar_pane_cp71_ParamLimits

0xc764,	// (0x0002ba5a) wait_bar_pane_cp71

0xc770,	// (0x0002ba66) grid_eswt_app_pane

0x325a,	// (0x00022550) scroll_pane_cp70

0xc779,	// (0x0002ba6f) cell_eswt_app_pane_ParamLimits

0xc779,	// (0x0002ba6f) cell_eswt_app_pane

0xc7ab,	// (0x0002baa1) cell_eswt_app_pane_g1_ParamLimits

0xc7ab,	// (0x0002baa1) cell_eswt_app_pane_g1

0xc7da,	// (0x0002bad0) cell_eswt_app_pane_g2_ParamLimits

0xc7da,	// (0x0002bad0) cell_eswt_app_pane_g2

0x0001,

0xfc12,	// (0x0002ef08) cell_eswt_app_pane_g_ParamLimits

0xfc12,	// (0x0002ef08) cell_eswt_app_pane_g

0xc803,	// (0x0002baf9) cell_eswt_app_pane_t1_ParamLimits

0xc803,	// (0x0002baf9) cell_eswt_app_pane_t1

0xc835,	// (0x0002bb2b) grid_highlight_pane_cp70_ParamLimits

0xc835,	// (0x0002bb2b) grid_highlight_pane_cp70

0x7110,	// (0x00026406) set_content_pane_g1

0x758a,	// (0x00026880) status_small_volume_pane

0x8aba,	// (0x00027db0) status_small_volume_pane_g1

0x8ac2,	// (0x00027db8) volume_small2_pane

0x8acb,	// (0x00027dc1) volume_small2_pane_g1

0x8ad4,	// (0x00027dca) volume_small2_pane_g2

0x8add,	// (0x00027dd3) volume_small2_pane_g3

0x8ae6,	// (0x00027ddc) volume_small2_pane_g4

0x8aef,	// (0x00027de5) volume_small2_pane_g5

0x8af8,	// (0x00027dee) volume_small2_pane_g6

0x8b01,	// (0x00027df7) volume_small2_pane_g7

0x8b0a,	// (0x00027e00) volume_small2_pane_g8

0x8b13,	// (0x00027e09) volume_small2_pane_g9

0x8b1c,	// (0x00027e12) volume_small2_pane_g10

0x0009,

0xfc17,	// (0x0002ef0d) volume_small2_pane_g

0xc084,	// (0x0002b37a) fep_vkb_top_text_pane_g1_ParamLimits

0xc09f,	// (0x0002b395) fep_vkb_top_text_pane_t1_ParamLimits

0xc379,	// (0x0002b66f) popup_preview_fixed_window_g3_ParamLimits

0xc379,	// (0x0002b66f) popup_preview_fixed_window_g3

0x7d1a,	// (0x00027010) popup_toolbar_trans_pane

0xaa77,	// (0x00029d6d) aid_height_set_list_ParamLimits

0xaa88,	// (0x00029d7e) aid_size_parent_ParamLimits

0x7789,	// (0x00026a7f) list_highlight_pane_cp2_ParamLimits

0x7110,	// (0x00026406) set_content_pane_g1_ParamLimits

0x04ca,	// (0x0001f7c0) list_single_image_pane_ParamLimits

0x04ca,	// (0x0001f7c0) list_single_image_pane

0xc841,	// (0x0002bb37) aid_size_cell_image_ParamLimits

0xc841,	// (0x0002bb37) aid_size_cell_image

0xc84e,	// (0x0002bb44) grid_single_image_pane_ParamLimits

0xc84e,	// (0x0002bb44) grid_single_image_pane

0x1983,	// (0x00020c79) list_single_image_pane_g1_ParamLimits

0x1983,	// (0x00020c79) list_single_image_pane_g1

0x198f,	// (0x00020c85) list_single_image_pane_g2_ParamLimits

0x198f,	// (0x00020c85) list_single_image_pane_g2

0x0001,

0xfc2c,	// (0x0002ef22) list_single_image_pane_g_ParamLimits

0xfc2c,	// (0x0002ef22) list_single_image_pane_g

0xc85c,	// (0x0002bb52) list_single_image_pane_t1_ParamLimits

0xc85c,	// (0x0002bb52) list_single_image_pane_t1

0xc872,	// (0x0002bb68) cell_image_list_pane_ParamLimits

0xc872,	// (0x0002bb68) cell_image_list_pane

0xc888,	// (0x0002bb7e) cell_image_list_pane_g1

0xc891,	// (0x0002bb87) cell_image_list_pane_g2

0x0001,

0xfc31,	// (0x0002ef27) cell_image_list_pane_g

0xc89a,	// (0x0002bb90) aid_size_cell_tb_trans_pane

0x195d,	// (0x00020c53) bg_tb_trans_pane

0xc8ac,	// (0x0002bba2) grid_tb_trans_pane

0x831a,	// (0x00027610) bg_tb_trans_pane_g1

0x8322,	// (0x00027618) bg_tb_trans_pane_g2

0x832a,	// (0x00027620) bg_tb_trans_pane_g3

0x96de,	// (0x000289d4) bg_tb_trans_pane_g4

0x8332,	// (0x00027628) bg_tb_trans_pane_g5

0x96f6,	// (0x000289ec) bg_tb_trans_pane_g6

0x96fe,	// (0x000289f4) bg_tb_trans_pane_g7

0x96e6,	// (0x000289dc) bg_tb_trans_pane_g8

0x96ee,	// (0x000289e4) bg_tb_trans_pane_g9

0x0008,

0xfc36,	// (0x0002ef2c) bg_tb_trans_pane_g

0xc8c0,	// (0x0002bbb6) cell_toolbar_trans_pane_ParamLimits

0xc8c0,	// (0x0002bbb6) cell_toolbar_trans_pane

0xbccd,	// (0x0002afc3) cell_toolbar_trans_pane_g1

0xb905,	// (0x0002abfb) list_form2_midp_pane_t1

0xb913,	// (0x0002ac09) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x0002edd5) list_form2_midp_pane_t

0xb921,	// (0x0002ac17) scroll_pane_cp51_ParamLimits

0xbae8,	// (0x0002adde) form2_midp_wait_pane_g1

0xbaf1,	// (0x0002ade7) form2_midp_wait_pane_g2

0xbafa,	// (0x0002adf0) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x0002edea) form2_midp_wait_pane_g

0x128b,	// (0x00020581) list_highlight_pane_cp21_ParamLimits

0xbb33,	// (0x0002ae29) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb42,	// (0x0002ae38) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaca5,	// (0x00029f9b) list_single_2graphic_im_pane_ParamLimits

0xaca5,	// (0x00029f9b) list_single_2graphic_im_pane

0xc8e6,	// (0x0002bbdc) list_single_2graphic_im_pane_g1_ParamLimits

0xc8e6,	// (0x0002bbdc) list_single_2graphic_im_pane_g1

0xc8f7,	// (0x0002bbed) list_single_2graphic_im_pane_g2_ParamLimits

0xc8f7,	// (0x0002bbed) list_single_2graphic_im_pane_g2

0xc903,	// (0x0002bbf9) list_single_2graphic_im_pane_g3_ParamLimits

0xc903,	// (0x0002bbf9) list_single_2graphic_im_pane_g3

0x0003,

0xfc49,	// (0x0002ef3f) list_single_2graphic_im_pane_g_ParamLimits

0xfc49,	// (0x0002ef3f) list_single_2graphic_im_pane_g

0xc923,	// (0x0002bc19) list_single_2graphic_im_pane_t1_ParamLimits

0xc923,	// (0x0002bc19) list_single_2graphic_im_pane_t1

0xc385,	// (0x0002b67b) list_single_graphic_2heading_pane_fp_ParamLimits

0xc385,	// (0x0002b67b) list_single_graphic_2heading_pane_fp

0x5d68,	// (0x0002505e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5d68,	// (0x0002505e) list_single_graphic_2heading_pane_fp_g1

0xc39e,	// (0x0002b694) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc39e,	// (0x0002b694) list_single_graphic_2heading_pane_fp_g2

0x5d31,	// (0x00025027) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5d31,	// (0x00025027) list_single_graphic_2heading_pane_fp_g3

0x5d3d,	// (0x00025033) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5d3d,	// (0x00025033) list_single_graphic_2heading_pane_fp_g4

0xc3aa,	// (0x0002b6a0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc3aa,	// (0x0002b6a0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002ee6d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002ee6d) list_single_graphic_2heading_pane_fp_g

0x5f35,	// (0x0002522b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5f35,	// (0x0002522b) list_single_graphic_2heading_pane_fp_t1

0x5da0,	// (0x00025096) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5da0,	// (0x00025096) list_single_graphic_2heading_pane_fp_t2

0x5f4b,	// (0x00025241) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5f4b,	// (0x00025241) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc52,	// (0x0002ef48) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc52,	// (0x0002ef48) list_single_graphic_2heading_pane_fp_t

0xbd46,	// (0x0002b03c) fep_hwr_write_pane_g5_ParamLimits

0xbd46,	// (0x0002b03c) fep_hwr_write_pane_g5

0xbd52,	// (0x0002b048) fep_hwr_write_pane_g6_ParamLimits

0xbd52,	// (0x0002b048) fep_hwr_write_pane_g6

0xc624,	// (0x0002b91a) eswt_shell_pane_ParamLimits

0x9732,	// (0x00028a28) bg_popup_window_pane_cp18_ParamLimits

0xa9ce,	// (0x00029cc4) heading_pane_cp70

0xc74e,	// (0x0002ba44) popup_eswt_tasktip_window_t1_ParamLimits

0x7e4d,	// (0x00027143) aid_touch_tab_arrow_left

0x7e59,	// (0x0002714f) aid_touch_tab_arrow_right

0x6513,	// (0x00025809) title_pane_g3_ParamLimits

0x6513,	// (0x00025809) title_pane_g3

0x18b7,	// (0x00020bad) set_value_pane_g1

0x7d1a,	// (0x00027010) popup_toolbar_trans_pane_ParamLimits

0xc89a,	// (0x0002bb90) aid_size_cell_tb_trans_pane_ParamLimits

0x195d,	// (0x00020c53) bg_tb_trans_pane_ParamLimits

0xc8ac,	// (0x0002bba2) grid_tb_trans_pane_ParamLimits

0x13d8,	// (0x000206ce) cont_note_pane_ParamLimits

0x13d8,	// (0x000206ce) cont_note_pane

0x165e,	// (0x00020954) cont_snote2_single_text_pane_ParamLimits

0x165e,	// (0x00020954) cont_snote2_single_text_pane

0x165e,	// (0x00020954) cont_snote2_single_graphic_pane_ParamLimits

0x165e,	// (0x00020954) cont_snote2_single_graphic_pane

0x9d1c,	// (0x00029012) cont_note_wait_pane_ParamLimits

0x9d1c,	// (0x00029012) cont_note_wait_pane

0x9d1c,	// (0x00029012) cont_note_image_pane_ParamLimits

0x9d1c,	// (0x00029012) cont_note_image_pane

0xc954,	// (0x0002bc4a) popup_note2_window_g1_ParamLimits

0xc954,	// (0x0002bc4a) popup_note2_window_g1

0xc985,	// (0x0002bc7b) popup_note2_window_t1_ParamLimits

0xc985,	// (0x0002bc7b) popup_note2_window_t1

0xc9ca,	// (0x0002bcc0) popup_note2_window_t2_ParamLimits

0xc9ca,	// (0x0002bcc0) popup_note2_window_t2

0xca0f,	// (0x0002bd05) popup_note2_window_t3_ParamLimits

0xca0f,	// (0x0002bd05) popup_note2_window_t3

0xca54,	// (0x0002bd4a) popup_note2_window_t4_ParamLimits

0xca54,	// (0x0002bd4a) popup_note2_window_t4

0x145c,	// (0x00020752) popup_note2_window_t5_ParamLimits

0x145c,	// (0x00020752) popup_note2_window_t5

0x0004,

0xfc5e,	// (0x0002ef54) popup_note2_window_t_ParamLimits

0xfc5e,	// (0x0002ef54) popup_note2_window_t

0xca83,	// (0x0002bd79) popup_note2_image_window_g1_ParamLimits

0xca83,	// (0x0002bd79) popup_note2_image_window_g1

0xca8f,	// (0x0002bd85) popup_note2_image_window_g2_ParamLimits

0xca8f,	// (0x0002bd85) popup_note2_image_window_g2

0x0001,

0xfc69,	// (0x0002ef5f) popup_note2_image_window_g_ParamLimits

0xfc69,	// (0x0002ef5f) popup_note2_image_window_g

0xcaa1,	// (0x0002bd97) popup_note2_image_window_t1_ParamLimits

0xcaa1,	// (0x0002bd97) popup_note2_image_window_t1

0xcab9,	// (0x0002bdaf) popup_note2_image_window_t2_ParamLimits

0xcab9,	// (0x0002bdaf) popup_note2_image_window_t2

0xcad1,	// (0x0002bdc7) popup_note2_image_window_t3_ParamLimits

0xcad1,	// (0x0002bdc7) popup_note2_image_window_t3

0x0002,

0xfc6e,	// (0x0002ef64) popup_note2_image_window_t_ParamLimits

0xfc6e,	// (0x0002ef64) popup_note2_image_window_t

0x9d2a,	// (0x00029020) popup_note2_wait_window_g1_ParamLimits

0x9d2a,	// (0x00029020) popup_note2_wait_window_g1

0xcaed,	// (0x0002bde3) popup_note2_wait_window_g2_ParamLimits

0xcaed,	// (0x0002bde3) popup_note2_wait_window_g2

0x9d42,	// (0x00029038) popup_note2_wait_window_g3_ParamLimits

0x9d42,	// (0x00029038) popup_note2_wait_window_g3

0x0002,

0xfc75,	// (0x0002ef6b) popup_note2_wait_window_g_ParamLimits

0xfc75,	// (0x0002ef6b) popup_note2_wait_window_g

0xcaf9,	// (0x0002bdef) popup_note2_wait_window_t1_ParamLimits

0xcaf9,	// (0x0002bdef) popup_note2_wait_window_t1

0xcb17,	// (0x0002be0d) popup_note2_wait_window_t2_ParamLimits

0xcb17,	// (0x0002be0d) popup_note2_wait_window_t2

0xcb35,	// (0x0002be2b) popup_note2_wait_window_t3_ParamLimits

0xcb35,	// (0x0002be2b) popup_note2_wait_window_t3

0xcb47,	// (0x0002be3d) popup_note2_wait_window_t4_ParamLimits

0xcb47,	// (0x0002be3d) popup_note2_wait_window_t4

0x0003,

0xfc7c,	// (0x0002ef72) popup_note2_wait_window_t_ParamLimits

0xfc7c,	// (0x0002ef72) popup_note2_wait_window_t

0xcb59,	// (0x0002be4f) wait_bar2_pane_ParamLimits

0xcb59,	// (0x0002be4f) wait_bar2_pane

0xcb71,	// (0x0002be67) popup_snote2_single_text_window_g1_ParamLimits

0xcb71,	// (0x0002be67) popup_snote2_single_text_window_g1

0xcb99,	// (0x0002be8f) popup_snote2_single_text_window_t1_ParamLimits

0xcb99,	// (0x0002be8f) popup_snote2_single_text_window_t1

0xcbe5,	// (0x0002bedb) popup_snote2_single_text_window_t2_ParamLimits

0xcbe5,	// (0x0002bedb) popup_snote2_single_text_window_t2

0xcc31,	// (0x0002bf27) popup_snote2_single_text_window_t3_ParamLimits

0xcc31,	// (0x0002bf27) popup_snote2_single_text_window_t3

0xcc72,	// (0x0002bf68) popup_snote2_single_text_window_t4_ParamLimits

0xcc72,	// (0x0002bf68) popup_snote2_single_text_window_t4

0xcca8,	// (0x0002bf9e) popup_snote2_single_text_window_t5_ParamLimits

0xcca8,	// (0x0002bf9e) popup_snote2_single_text_window_t5

0x0004,

0xfc85,	// (0x0002ef7b) popup_snote2_single_text_window_t_ParamLimits

0xfc85,	// (0x0002ef7b) popup_snote2_single_text_window_t

0xccd3,	// (0x0002bfc9) popup_snote2_single_graphic_window_g1_ParamLimits

0xccd3,	// (0x0002bfc9) popup_snote2_single_graphic_window_g1

0xccfb,	// (0x0002bff1) popup_snote2_single_graphic_window_g2_ParamLimits

0xccfb,	// (0x0002bff1) popup_snote2_single_graphic_window_g2

0x0001,

0xfc90,	// (0x0002ef86) popup_snote2_single_graphic_window_g_ParamLimits

0xfc90,	// (0x0002ef86) popup_snote2_single_graphic_window_g

0xcd23,	// (0x0002c019) popup_snote2_single_graphic_window_t1_ParamLimits

0xcd23,	// (0x0002c019) popup_snote2_single_graphic_window_t1

0xcd6f,	// (0x0002c065) popup_snote2_single_graphic_window_t2_ParamLimits

0xcd6f,	// (0x0002c065) popup_snote2_single_graphic_window_t2

0xcc31,	// (0x0002bf27) popup_snote2_single_graphic_window_t3_ParamLimits

0xcc31,	// (0x0002bf27) popup_snote2_single_graphic_window_t3

0xcc72,	// (0x0002bf68) popup_snote2_single_graphic_window_t4_ParamLimits

0xcc72,	// (0x0002bf68) popup_snote2_single_graphic_window_t4

0xcca8,	// (0x0002bf9e) popup_snote2_single_graphic_window_t5_ParamLimits

0xcca8,	// (0x0002bf9e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc95,	// (0x0002ef8b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc95,	// (0x0002ef8b) popup_snote2_single_graphic_window_t

0xb7d1,	// (0x0002aac7) clock_nsta_pane_cp2_t1

0xb7d1,	// (0x0002aac7) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x0002edab) clock_nsta_pane_cp2_t

0x5565,	// (0x0002485b) form_field_data_wide_pane_g1_ParamLimits

0x1983,	// (0x00020c79) form_field_data_wide_pane_g2_ParamLimits

0x1983,	// (0x00020c79) form_field_data_wide_pane_g2

0x198f,	// (0x00020c85) form_field_data_wide_pane_g3_ParamLimits

0x198f,	// (0x00020c85) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0002e96c) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0002e96c) form_field_data_wide_pane_g

0xb6d3,	// (0x0002a9c9) grid_touch_3_pane_ParamLimits

0xb6d3,	// (0x0002a9c9) grid_touch_3_pane

0xcdbb,	// (0x0002c0b1) cell_touch_3_pane_ParamLimits

0xcdbb,	// (0x0002c0b1) cell_touch_3_pane

0xbccd,	// (0x0002afc3) cell_touch_3_pane_g1

0xbccd,	// (0x0002afc3) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x0002ee30) cell_touch_3_pane_g

0x14b4,	// (0x000207aa) cont_query_data_pane

0x14bc,	// (0x000207b2) cont_query_data_pane_cp1

0xcdee,	// (0x0002c0e4) button_value_adjust_pane_cp7

0xcdf6,	// (0x0002c0ec) query_popup_pane_cp3

0x34a5,	// (0x0002279b) bg_popup_sub_pane_cp22_ParamLimits

0x6cd6,	// (0x00025fcc) navi_navi_volume_pane_cp2

0x6cf1,	// (0x00025fe7) popup_side_volume_key_window_g2

0x6d00,	// (0x00025ff6) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0002ea02) popup_side_volume_key_window_g

0x6d1d,	// (0x00026013) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002ea09) popup_side_volume_key_window_t

0x6fcb,	// (0x000262c1) popup_side_volume_key_window_ParamLimits

0x5190,	// (0x00024486) list_double_graphic_pane_g4_ParamLimits

0x5190,	// (0x00024486) list_double_graphic_pane_g4

0xacd4,	// (0x00029fca) list_single_2heading_msg_pane_ParamLimits

0xacd4,	// (0x00029fca) list_single_2heading_msg_pane

0x5f6b,	// (0x00025261) list_single_2heading_msg_pane_g1_ParamLimits

0x5f6b,	// (0x00025261) list_single_2heading_msg_pane_g1

0x4ff9,	// (0x000242ef) list_single_2heading_msg_pane_g2_ParamLimits

0x4ff9,	// (0x000242ef) list_single_2heading_msg_pane_g2

0x5f77,	// (0x0002526d) list_single_2heading_msg_pane_g3_ParamLimits

0x5f77,	// (0x0002526d) list_single_2heading_msg_pane_g3

0x5f83,	// (0x00025279) list_single_2heading_msg_pane_g4_ParamLimits

0x5f83,	// (0x00025279) list_single_2heading_msg_pane_g4

0x0003,

0xfca0,	// (0x0002ef96) list_single_2heading_msg_pane_g_ParamLimits

0xfca0,	// (0x0002ef96) list_single_2heading_msg_pane_g

0x5f9b,	// (0x00025291) list_single_2heading_msg_pane_t1_ParamLimits

0x5f9b,	// (0x00025291) list_single_2heading_msg_pane_t1

0x5fc3,	// (0x000252b9) list_single_2heading_msg_pane_t2_ParamLimits

0x5fc3,	// (0x000252b9) list_single_2heading_msg_pane_t2

0x5ff7,	// (0x000252ed) list_single_2heading_msg_pane_t3_ParamLimits

0x5ff7,	// (0x000252ed) list_single_2heading_msg_pane_t3

0x6030,	// (0x00025326) list_single_2heading_msg_pane_t4_ParamLimits

0x6030,	// (0x00025326) list_single_2heading_msg_pane_t4

0x0003,

0xfca9,	// (0x0002ef9f) list_single_2heading_msg_pane_t_ParamLimits

0xfca9,	// (0x0002ef9f) list_single_2heading_msg_pane_t

0x1239,	// (0x0002052f) title_pane_g4_ParamLimits

0x1239,	// (0x0002052f) title_pane_g4

0x6963,	// (0x00025c59) title_pane_stacon_g3_ParamLimits

0x6963,	// (0x00025c59) title_pane_stacon_g3

0xc917,	// (0x0002bc0d) list_single_2graphic_im_pane_g4_ParamLimits

0xc917,	// (0x0002bc0d) list_single_2graphic_im_pane_g4

0xa78c,	// (0x00029a82) popup_side_volume_key_window_cp

0xaffb,	// (0x0002a2f1) main_idle_act2_pane_t1

0x833a,	// (0x00027630) toolbar_button_pane_g10

0x6874,	// (0x00025b6a) popup_toolbar_window_cp1

0xb7c2,	// (0x0002aab8) clock_nsta_pane_cp_t1

0xb7c2,	// (0x0002aab8) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x0002eda6) clock_nsta_pane_cp_t

0x6cd6,	// (0x00025fcc) navi_navi_volume_pane_cp2_ParamLimits

0x6ce5,	// (0x00025fdb) popup_side_volume_key_window_g1_ParamLimits

0x6cf1,	// (0x00025fe7) popup_side_volume_key_window_g2_ParamLimits

0x6d00,	// (0x00025ff6) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0002ea02) popup_side_volume_key_window_g_ParamLimits

0x87af,	// (0x00027aa5) fep_hwr_aid_pane

0x11eb,	// (0x000204e1) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd16,	// (0x0002b00c) fep_hwr_top_pane_g1_ParamLimits

0xbd28,	// (0x0002b01e) fep_hwr_top_pane_g2_ParamLimits

0x886a,	// (0x00027b60) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x0002edfb) fep_hwr_top_pane_g_ParamLimits

0x887f,	// (0x00027b75) fep_hwr_top_text_pane_ParamLimits

0xa541,	// (0x00029837) aid_touch_tab_arrow_arrow_2

0xa54a,	// (0x00029840) aid_touch_tab_arrow_left_2

0x87c3,	// (0x00027ab9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x87fa,	// (0x00027af0) fep_hwr_prediction_pane

0xbe7e,	// (0x0002b174) fep_vkb_prediction_pane

0xbf84,	// (0x0002b27a) fep_vkb_side_pane_g3_ParamLimits

0xbf84,	// (0x0002b27a) fep_vkb_side_pane_g3

0xbf30,	// (0x0002b226) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc3fe,	// (0x0002b6f4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc40b,	// (0x0002b701) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaf,	// (0x0002eea5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xce1d,	// (0x0002c113) fep_hwr_prediction_pane_g1

0x8b25,	// (0x00027e1b) fep_hwr_prediction_pane_g2

0x8b2d,	// (0x00027e23) fep_hwr_prediction_pane_g3

0x8b35,	// (0x00027e2b) fep_hwr_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002efa8) fep_hwr_prediction_pane_g

0xce1d,	// (0x0002c113) fep_vkb_prediction_pane_g1

0xce27,	// (0x0002c11d) fep_vkb_prediction_pane_g2

0xce2f,	// (0x0002c125) fep_vkb_prediction_pane_g3

0xce37,	// (0x0002c12d) fep_vkb_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0002efb1) fep_vkb_prediction_pane_g

0x862f,	// (0x00027925) slider_set_pane_g3

0x8643,	// (0x00027939) slider_set_pane_g4

0x865b,	// (0x00027951) slider_set_pane_g5

0x862f,	// (0x00027925) slider_set_pane_g6

0x8671,	// (0x00027967) slider_set_pane_g7

0xac07,	// (0x00029efd) slider_form_pane_g3

0xac10,	// (0x00029f06) slider_form_pane_g4

0xac18,	// (0x00029f0e) slider_form_pane_g5

0xac07,	// (0x00029efd) slider_form_pane_g6

0xac20,	// (0x00029f16) slider_form_pane_g7

0xb2a9,	// (0x0002a59f) slider_set_pane_vc_g3

0xb2b2,	// (0x0002a5a8) slider_set_pane_vc_g4

0xb2bb,	// (0x0002a5b1) slider_set_pane_vc_g5

0xb2a9,	// (0x0002a59f) slider_set_pane_vc_g6

0xb2c4,	// (0x0002a5ba) slider_set_pane_vc_g7

0xb498,	// (0x0002a78e) slider_form_pane_vc_g1

0xb4a1,	// (0x0002a797) slider_form_pane_vc_g2

0xb4aa,	// (0x0002a7a0) slider_form_pane_vc_g3

0xb498,	// (0x0002a78e) slider_form_pane_vc_g4

0xb4b3,	// (0x0002a7a9) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x0002ed78) slider_form_pane_vc_g

0x121b,	// (0x00020511) main_idle_act3_pane

0xce3f,	// (0x0002c135) ai3_links_pane

0xce48,	// (0x0002c13e) popup_ai3_data_window_ParamLimits

0xce48,	// (0x0002c13e) popup_ai3_data_window

0x121b,	// (0x00020511) grid_ai3_links_pane

0xce66,	// (0x0002c15c) cell_ai3_links_pane_ParamLimits

0xce66,	// (0x0002c15c) cell_ai3_links_pane

0xce80,	// (0x0002c176) bg_popup_sub_pane_cp11

0xce8d,	// (0x0002c183) cell_ai3_links_pane_g1

0x121b,	// (0x00020511) bg_popup_sub_pane_cp12

0xceb2,	// (0x0002c1a8) heading_ai3_data_pane

0xceba,	// (0x0002c1b0) list_ai3_gene_pane

0xcec6,	// (0x0002c1bc) popup_ai3_data_window_g1

0xcece,	// (0x0002c1c4) heading_ai3_data_pane_g1

0xced6,	// (0x0002c1cc) heading_ai3_data_pane_t1

0xcee4,	// (0x0002c1da) list_double_ai3_gene_pane_ParamLimits

0xcee4,	// (0x0002c1da) list_double_ai3_gene_pane

0xcef1,	// (0x0002c1e7) list_single_ai3_gene_pane_ParamLimits

0xcef1,	// (0x0002c1e7) list_single_ai3_gene_pane

0xbc92,	// (0x0002af88) list_highlight_pane_cp7_ParamLimits

0xbc92,	// (0x0002af88) list_highlight_pane_cp7

0xcefe,	// (0x0002c1f4) list_single_a13_gene_pane_t1_ParamLimits

0xcefe,	// (0x0002c1f4) list_single_a13_gene_pane_t1

0xcf15,	// (0x0002c20b) list_single_ai3_gene_pane_g1

0xcf1e,	// (0x0002c214) list_single_ai3_gene_pane_g2

0x0001,

0xfcc4,	// (0x0002efba) list_single_ai3_gene_pane_g

0xcf26,	// (0x0002c21c) list_double_ai3_gene_pane_g1_ParamLimits

0xcf26,	// (0x0002c21c) list_double_ai3_gene_pane_g1

0xcf32,	// (0x0002c228) list_double_ai3_gene_pane_t1_ParamLimits

0xcf32,	// (0x0002c228) list_double_ai3_gene_pane_t1

0xcf4e,	// (0x0002c244) list_double_ai3_gene_pane_t2_ParamLimits

0xcf4e,	// (0x0002c244) list_double_ai3_gene_pane_t2

0xcf63,	// (0x0002c259) list_double_ai3_gene_pane_t3_ParamLimits

0xcf63,	// (0x0002c259) list_double_ai3_gene_pane_t3

0x0002,

0xfcc9,	// (0x0002efbf) list_double_ai3_gene_pane_t_ParamLimits

0xfcc9,	// (0x0002efbf) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5f61,	// (0x00025257) aid_size_min_col_2

0xce07,	// (0x0002c0fd) aid_size_min_msg_ParamLimits

0xce07,	// (0x0002c0fd) aid_size_min_msg

0xc090,	// (0x0002b386) fep_vkb_top_text_pane_g2_ParamLimits

0xc090,	// (0x0002b386) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x0002ee2b) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x0002ee2b) fep_vkb_top_text_pane_g

0x121b,	// (0x00020511) main_hc_apps_shell_pane

0xcf80,	// (0x0002c276) grid_hc_apps_pane_ParamLimits

0xcf80,	// (0x0002c276) grid_hc_apps_pane

0xcf8f,	// (0x0002c285) list_hc_apps_pane

0xcf97,	// (0x0002c28d) scroll_pane_cp37_ParamLimits

0xcf97,	// (0x0002c28d) scroll_pane_cp37

0xcfa3,	// (0x0002c299) cell_hc_apps_pane_ParamLimits

0xcfa3,	// (0x0002c299) cell_hc_apps_pane

0xd05b,	// (0x0002c351) cell_hc_apps_pane_g1_ParamLimits

0xd05b,	// (0x0002c351) cell_hc_apps_pane_g1

0xd08c,	// (0x0002c382) cell_hc_apps_pane_g2_ParamLimits

0xd08c,	// (0x0002c382) cell_hc_apps_pane_g2

0xd0a8,	// (0x0002c39e) cell_hc_apps_pane_g3_ParamLimits

0xd0a8,	// (0x0002c39e) cell_hc_apps_pane_g3

0x0002,

0xfcd0,	// (0x0002efc6) cell_hc_apps_pane_g_ParamLimits

0xfcd0,	// (0x0002efc6) cell_hc_apps_pane_g

0xd0ca,	// (0x0002c3c0) cell_hc_apps_pane_t1_ParamLimits

0xd0ca,	// (0x0002c3c0) cell_hc_apps_pane_t1

0x13d8,	// (0x000206ce) grid_highlight_pane_cp10_ParamLimits

0x13d8,	// (0x000206ce) grid_highlight_pane_cp10

0xd10a,	// (0x0002c400) list_single_hc_apps_pane_ParamLimits

0xd10a,	// (0x0002c400) list_single_hc_apps_pane

0xd149,	// (0x0002c43f) list_single_hc_apps_pane_g1

0x6055,	// (0x0002534b) list_single_hc_apps_pane_g2

0x0001,

0xfcd7,	// (0x0002efcd) list_single_hc_apps_pane_g

0x606e,	// (0x00025364) list_single_hc_apps_pane_g2_copy1

0x608a,	// (0x00025380) list_single_hc_apps_pane_t1

0x128b,	// (0x00020581) bg_set_opt_pane_cp_ParamLimits

0x65c5,	// (0x000258bb) setting_slider_pane_t1_ParamLimits

0x65de,	// (0x000258d4) setting_slider_pane_t2_ParamLimits

0x65f8,	// (0x000258ee) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e854) setting_slider_pane_t_ParamLimits

0x6610,	// (0x00025906) slider_set_pane_ParamLimits

0x761a,	// (0x00026910) control_pane_g5_ParamLimits

0x761a,	// (0x00026910) control_pane_g5

0xaa3a,	// (0x00029d30) slider_set_pane_g1_ParamLimits

0x8623,	// (0x00027919) slider_set_pane_g2_ParamLimits

0x862f,	// (0x00027925) slider_set_pane_g3_ParamLimits

0x8643,	// (0x00027939) slider_set_pane_g4_ParamLimits

0x865b,	// (0x00027951) slider_set_pane_g5_ParamLimits

0x862f,	// (0x00027925) slider_set_pane_g6_ParamLimits

0x8671,	// (0x00027967) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0002ec55) slider_set_pane_g_ParamLimits

0x70bb,	// (0x000263b1) navi_icon_text_pane_ParamLimits

0x7e0c,	// (0x00027102) aid_fill_nsta_2_ParamLimits

0x7e4d,	// (0x00027143) aid_touch_tab_arrow_left_ParamLimits

0x7e59,	// (0x0002714f) aid_touch_tab_arrow_right_ParamLimits

0x7ec5,	// (0x000271bb) clock_nsta_pane_ParamLimits

0xa523,	// (0x00029819) navi_icon_pane_g1_ParamLimits

0xa52f,	// (0x00029825) navi_text_pane_t1_ParamLimits

0xb8df,	// (0x0002abd5) navi_icon_text_pane_g1_ParamLimits

0xb8eb,	// (0x0002abe1) navi_icon_text_pane_t1_ParamLimits

0xd149,	// (0x0002c43f) list_single_hc_apps_pane_g1_ParamLimits

0x6055,	// (0x0002534b) list_single_hc_apps_pane_g2_ParamLimits

0xfcd7,	// (0x0002efcd) list_single_hc_apps_pane_g_ParamLimits

0x606e,	// (0x00025364) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x608a,	// (0x00025380) list_single_hc_apps_pane_t1_ParamLimits

0x63f9,	// (0x000256ef) popup_toolbar2_fixed_window_ParamLimits

0x63f9,	// (0x000256ef) popup_toolbar2_fixed_window

0x7d10,	// (0x00027006) popup_toolbar2_float_window

0x121b,	// (0x00020511) bg_popup_sub_pane_cp27

0xd162,	// (0x0002c458) grid_toolbar2_float_pane

0x121b,	// (0x00020511) bg_popup_sub_pane_cp26

0xd162,	// (0x0002c458) grid_toolbar2_fixed_pane

0xd16a,	// (0x0002c460) cell_toolbar2_fixed_pane_ParamLimits

0xd16a,	// (0x0002c460) cell_toolbar2_fixed_pane

0xd17a,	// (0x0002c470) cell_toolbar2_fixed_pane_g1

0xd183,	// (0x0002c479) toolbar2_fixed_button_pane

0x831a,	// (0x00027610) toolbar2_fixed_button_pane_g1

0x8322,	// (0x00027618) toolbar2_fixed_button_pane_g2

0x832a,	// (0x00027620) toolbar2_fixed_button_pane_g3

0x96de,	// (0x000289d4) toolbar2_fixed_button_pane_g4

0x8332,	// (0x00027628) toolbar2_fixed_button_pane_g5

0x96e6,	// (0x000289dc) toolbar2_fixed_button_pane_g6

0x96ee,	// (0x000289e4) toolbar2_fixed_button_pane_g7

0x96f6,	// (0x000289ec) toolbar2_fixed_button_pane_g8

0x96fe,	// (0x000289f4) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0002eb57) toolbar2_fixed_button_pane_g

0xd18b,	// (0x0002c481) cell_toolbar2_float_pane_ParamLimits

0xd18b,	// (0x0002c481) cell_toolbar2_float_pane

0xd19c,	// (0x0002c492) cell_toolbar2_float_pane_g1

0xd183,	// (0x0002c479) toolbar2_fixed_button_pane_cp

0xbdec,	// (0x0002b0e2) fep_vkb_accented_list_pane_ParamLimits

0xbdec,	// (0x0002b0e2) fep_vkb_accented_list_pane

0x89e1,	// (0x00027cd7) bg_popup_fep_shadow_pane_g9

0x7233,	// (0x00026529) bg_popup_fep_shadow_pane_cp3

0x1aff,	// (0x00020df5) list_accented_list_pane

0xd1a5,	// (0x0002c49b) list_single_accented_list_pane_ParamLimits

0xd1a5,	// (0x0002c49b) list_single_accented_list_pane

0x7233,	// (0x00026529) list_highlight_pane_cp10

0xd1b6,	// (0x0002c4ac) list_single_accented_list_pane_t1

0x7c56,	// (0x00026f4c) popup_slider_window_ParamLimits

0x7c56,	// (0x00026f4c) popup_slider_window

0xcdfe,	// (0x0002c0f4) aid_indentation_list_msg

0xd286,	// (0x0002c57c) bg_popup_window_pane_cp19

0xd2f2,	// (0x0002c5e8) popup_slider_window_g1

0xd30e,	// (0x0002c604) popup_slider_window_g2

0xd32a,	// (0x0002c620) popup_slider_window_g3

0x0005,

0xfcdc,	// (0x0002efd2) popup_slider_window_g

0xd390,	// (0x0002c686) popup_slider_window_t1

0xd404,	// (0x0002c6fa) small_volume_slider_vertical_pane

0xbccd,	// (0x0002afc3) small_volume_slider_vertical_pane_g1

0xbccd,	// (0x0002afc3) small_volume_slider_vertical_pane_g2

0xd420,	// (0x0002c716) small_volume_slider_vertical_pane_g3

0x0002,

0xfcee,	// (0x0002efe4) small_volume_slider_vertical_pane_g

0x61b1,	// (0x000254a7) area_side_right_pane_ParamLimits

0x61b1,	// (0x000254a7) area_side_right_pane

0x8b3d,	// (0x00027e33) aid_size_side_button_ParamLimits

0x8b3d,	// (0x00027e33) aid_size_side_button

0x8b51,	// (0x00027e47) grid_sctrl_middle_pane_ParamLimits

0x8b51,	// (0x00027e47) grid_sctrl_middle_pane

0x8b70,	// (0x00027e66) sctrl_sk_bottom_pane

0x8b81,	// (0x00027e77) sctrl_sk_top_pane

0x8b93,	// (0x00027e89) aid_touch_sctrl_top

0x13d8,	// (0x000206ce) bg_sctrl_sk_pane_ParamLimits

0x13d8,	// (0x000206ce) bg_sctrl_sk_pane

0x8ba0,	// (0x00027e96) sctrl_sk_top_pane_g1

0x8bad,	// (0x00027ea3) sctrl_sk_top_pane_t1

0x8b93,	// (0x00027e89) aid_touch_sctrl_bottom

0x13d8,	// (0x000206ce) bg_sctrl_sk_pane_cp_ParamLimits

0x13d8,	// (0x000206ce) bg_sctrl_sk_pane_cp

0x8bc8,	// (0x00027ebe) sctrl_sk_bottom_pane_g1

0x8bad,	// (0x00027ea3) sctrl_sk_bottom_pane_t1

0x8bd1,	// (0x00027ec7) cell_sctrl_middle_pane_ParamLimits

0x8bd1,	// (0x00027ec7) cell_sctrl_middle_pane

0x8bee,	// (0x00027ee4) aid_touch_sctrl_middle_ParamLimits

0x8bee,	// (0x00027ee4) aid_touch_sctrl_middle

0x195d,	// (0x00020c53) bg_sctrl_middle_pane_ParamLimits

0x195d,	// (0x00020c53) bg_sctrl_middle_pane

0xbf30,	// (0x0002b226) cell_sctrl_middle_pane_g1_ParamLimits

0xbf30,	// (0x0002b226) cell_sctrl_middle_pane_g1

0x8c00,	// (0x00027ef6) cell_sctrl_middle_pane_g2_ParamLimits

0x8c00,	// (0x00027ef6) cell_sctrl_middle_pane_g2

0x0001,

0xfcfa,	// (0x0002eff0) cell_sctrl_middle_pane_g_ParamLimits

0xfcfa,	// (0x0002eff0) cell_sctrl_middle_pane_g

0x831a,	// (0x00027610) bg_sctrl_middle_pane_g1

0x8322,	// (0x00027618) bg_sctrl_middle_pane_g2

0x832a,	// (0x00027620) bg_sctrl_middle_pane_g3

0x96de,	// (0x000289d4) bg_sctrl_middle_pane_g4

0x8332,	// (0x00027628) bg_sctrl_middle_pane_g5

0x96e6,	// (0x000289dc) bg_sctrl_middle_pane_g6

0x96ee,	// (0x000289e4) bg_sctrl_middle_pane_g7

0x96f6,	// (0x000289ec) bg_sctrl_middle_pane_g8

0x0007,

0xfcff,	// (0x0002eff5) bg_sctrl_middle_pane_g

0x96fe,	// (0x000289f4) bg_sctrl_middle_pane_g8_copy1

0x831a,	// (0x00027610) bg_sctrl_sk_pane_g1

0x8322,	// (0x00027618) bg_sctrl_sk_pane_g2

0x832a,	// (0x00027620) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0002eb57) bg_sctrl_sk_pane_g

0x181c,	// (0x00020b12) aid_size_touch_scroll_bar

0x96de,	// (0x000289d4) bg_sctrl_sk_pane_g4

0x8332,	// (0x00027628) bg_sctrl_sk_pane_g5

0x96e6,	// (0x000289dc) bg_sctrl_sk_pane_g6

0x96ee,	// (0x000289e4) bg_sctrl_sk_pane_g7

0x96f6,	// (0x000289ec) bg_sctrl_sk_pane_g8

0x96fe,	// (0x000289f4) bg_sctrl_sk_pane_g9

0x786d,	// (0x00026b63) popup_fep_china_hwr2_fs_candidate_window

0x7877,	// (0x00026b6d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7877,	// (0x00026b6d) popup_fep_china_hwr2_fs_control_window

0xbf30,	// (0x0002b226) sctrl_sk_top_pane_g2

0x0001,

0xfcf5,	// (0x0002efeb) sctrl_sk_top_pane_g

0xd429,	// (0x0002c71f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd429,	// (0x0002c71f) aid_fep_china_hwr2_fs_cell

0xd43c,	// (0x0002c732) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd43c,	// (0x0002c732) bg_popup_fep_shadow_pane_cp4

0xd455,	// (0x0002c74b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd455,	// (0x0002c74b) bg_popup_fep_shadow_pane_cp5

0xd467,	// (0x0002c75d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd467,	// (0x0002c75d) popup_fep_china_hwr2_fs_control_bar_grid

0xd477,	// (0x0002c76d) popup_fep_china_hwr2_fs_control_funtion_grid

0xd47f,	// (0x0002c775) aid_fep_china_hwr2_fs_candi_cell

0x121b,	// (0x00020511) bg_popup_fep_shadow_pane_cp6

0xd489,	// (0x0002c77f) popup_fep_china_hwr2_fs_candidate_grid

0xd493,	// (0x0002c789) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd493,	// (0x0002c789) cell_fep_china_hwr2_fs_funtion_grid

0xbccd,	// (0x0002afc3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4ab,	// (0x0002c7a1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4ab,	// (0x0002c7a1) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4b9,	// (0x0002c7af) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4b9,	// (0x0002c7af) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd10,	// (0x0002f006) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd10,	// (0x0002f006) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4cf,	// (0x0002c7c5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4cf,	// (0x0002c7c5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd4e4,	// (0x0002c7da) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd4e4,	// (0x0002c7da) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd15,	// (0x0002f00b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd15,	// (0x0002f00b) cell_fep_china_hwr2_fs_funtion_grid_t

0xd500,	// (0x0002c7f6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd508,	// (0x0002c7fe) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd510,	// (0x0002c806) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1a,	// (0x0002f010) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd518,	// (0x0002c80e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd518,	// (0x0002c80e) cell_fep_china_hwr2_fs_candidate_grid

0xd537,	// (0x0002c82d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd53f,	// (0x0002c835) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbccd,	// (0x0002afc3) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbccd,	// (0x0002afc3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x0002ee30) cell_fep_china_hwr2_fs_candidate_grid_g

0xd547,	// (0x0002c83d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7ed2,	// (0x000271c8) clock_nsta_pane_cp_24_ParamLimits

0x7ed2,	// (0x000271c8) clock_nsta_pane_cp_24

0x7f52,	// (0x00027248) indicator_nsta_pane_cp_24_ParamLimits

0x7f52,	// (0x00027248) indicator_nsta_pane_cp_24

0xa39f,	// (0x00029695) heading_pane_g1

0x0001,

0xf8c6,	// (0x0002ebbc) heading_pane_g

0xae42,	// (0x0002a138) grid_sct_catagory_button_pane

0xae74,	// (0x0002a16a) scroll_pane_cp5_ParamLimits

0xb92d,	// (0x0002ac23) button_value_adjust_pane_cp5_ParamLimits

0xb92d,	// (0x0002ac23) button_value_adjust_pane_cp5

0xba12,	// (0x0002ad08) form2_midp_time_pane_ParamLimits

0xd555,	// (0x0002c84b) cell_sct_catagory_button_pane_ParamLimits

0xd555,	// (0x0002c84b) cell_sct_catagory_button_pane

0xbc92,	// (0x0002af88) bg_button_pane_cp01_ParamLimits

0xbc92,	// (0x0002af88) bg_button_pane_cp01

0xbccd,	// (0x0002afc3) cell_sct_catagory_button_pane_g1

0x7c97,	// (0x00026f8d) popup_tb_extension_window

0xd567,	// (0x0002c85d) aid_size_cell_ext_ParamLimits

0xd567,	// (0x0002c85d) aid_size_cell_ext

0x13d8,	// (0x000206ce) bg_tb_trans_pane_cp1_ParamLimits

0x13d8,	// (0x000206ce) bg_tb_trans_pane_cp1

0xd587,	// (0x0002c87d) grid_tb_ext_pane_ParamLimits

0xd587,	// (0x0002c87d) grid_tb_ext_pane

0xd5b5,	// (0x0002c8ab) cell_tb_ext_pane_ParamLimits

0xd5b5,	// (0x0002c8ab) cell_tb_ext_pane

0xd5cc,	// (0x0002c8c2) cell_tb_ext_pane_g1_ParamLimits

0xd5cc,	// (0x0002c8c2) cell_tb_ext_pane_g1

0xd5e9,	// (0x0002c8df) cell_tb_ext_pane_t1

0x13d8,	// (0x000206ce) list_highlight_pane_cp11_ParamLimits

0x13d8,	// (0x000206ce) list_highlight_pane_cp11

0x6418,	// (0x0002570e) popup_uni_indicator_window_ParamLimits

0x6418,	// (0x0002570e) popup_uni_indicator_window

0x195d,	// (0x00020c53) bg_popup_sub_pane_cp14

0xd604,	// (0x0002c8fa) list_uniindi_pane

0xd610,	// (0x0002c906) uniindi_top_pane

0x13d8,	// (0x000206ce) bg_uniindi_top_pane

0xd631,	// (0x0002c927) uniindi_top_pane_g1

0xd647,	// (0x0002c93d) uniindi_top_pane_g2

0x0003,

0xfd21,	// (0x0002f017) uniindi_top_pane_g

0xd671,	// (0x0002c967) uniindi_top_pane_t1

0xd69d,	// (0x0002c993) list_single_uniindi_pane_ParamLimits

0xd69d,	// (0x0002c993) list_single_uniindi_pane

0xbccd,	// (0x0002afc3) bg_uniindi_top_pane_g1

0xd6af,	// (0x0002c9a5) list_single_uniindi_pane_g1

0xd6c2,	// (0x0002c9b8) list_single_uniindi_pane_t1

0x121b,	// (0x00020511) control_bg_pane

0xd6e7,	// (0x0002c9dd) bg_sctrl_sk_pane_cp1

0xd6f0,	// (0x0002c9e6) bg_sctrl_sk_pane_cp2

0xd6f9,	// (0x0002c9ef) control_bg_pane_g1

0xd702,	// (0x0002c9f8) control_bg_pane_g2

0x0001,

0xfd2a,	// (0x0002f020) control_bg_pane_g

0xb776,	// (0x0002aa6c) cell_indicator_nsta_pane_g1_ParamLimits

0xb784,	// (0x0002aa7a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x0002ed94) cell_indicator_nsta_pane_g_ParamLimits

0x5d1e,	// (0x00025014) form2_midp_time_pane_t1_ParamLimits

0x165e,	// (0x00020954) main_idle_act4_pane_ParamLimits

0x165e,	// (0x00020954) main_idle_act4_pane

0x7c97,	// (0x00026f8d) popup_tb_extension_window_ParamLimits

0xd5a7,	// (0x0002c89d) tb_ext_find_pane_ParamLimits

0xd5a7,	// (0x0002c89d) tb_ext_find_pane

0xd70b,	// (0x0002ca01) ai_gene_pane_1_cp1

0x737d,	// (0x00026673) ai_gene_pane_2_cp1

0xd713,	// (0x0002ca09) list_single_idle_plugin_calendar_pane

0xd71c,	// (0x0002ca12) list_single_idle_plugin_notification_pane

0xd725,	// (0x0002ca1b) list_single_idle_plugin_player_pane

0xd72e,	// (0x0002ca24) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd72e,	// (0x0002ca24) list_single_idle_plugin_shortcut_pane

0xd750,	// (0x0002ca46) main_idle_act4_pane_t1

0xd762,	// (0x0002ca58) main_idle_act4_pane_t2

0x0001,

0xfd2f,	// (0x0002f025) main_idle_act4_pane_t

0xd774,	// (0x0002ca6a) middle_sk_idle_act4_pane_ParamLimits

0xd774,	// (0x0002ca6a) middle_sk_idle_act4_pane

0xd78a,	// (0x0002ca80) popup_clock_digital_analogue_window_cp2

0xd7a4,	// (0x0002ca9a) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7a4,	// (0x0002ca9a) shortcut_wheel_idle_act4_pane

0xbccd,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g1

0xbccd,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g2

0xbccd,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g3

0xbccd,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g4

0xbccd,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g5

0xd7b8,	// (0x0002caae) shortcut_wheel_idle_act4_pane_g6

0xd7c0,	// (0x0002cab6) shortcut_wheel_idle_act4_pane_g7

0xd7c8,	// (0x0002cabe) shortcut_wheel_idle_act4_pane_g8

0xd7d0,	// (0x0002cac6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd34,	// (0x0002f02a) shortcut_wheel_idle_act4_pane_g

0xbf30,	// (0x0002b226) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf30,	// (0x0002b226) middle_sk_idle_act4_pane_g1

0xd834,	// (0x0002cb2a) middle_sk_idle_act4_pane_g2_ParamLimits

0xd834,	// (0x0002cb2a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd57,	// (0x0002f04d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd57,	// (0x0002f04d) middle_sk_idle_act4_pane_g

0xd840,	// (0x0002cb36) middle_sk_idle_act4_pane_t1_ParamLimits

0xd840,	// (0x0002cb36) middle_sk_idle_act4_pane_t1

0xd85d,	// (0x0002cb53) grid_ai_shortcut_pane_ParamLimits

0xd85d,	// (0x0002cb53) grid_ai_shortcut_pane

0xd876,	// (0x0002cb6c) list_highlight_pane_cp16_ParamLimits

0xd876,	// (0x0002cb6c) list_highlight_pane_cp16

0xd883,	// (0x0002cb79) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd883,	// (0x0002cb79) list_single_idle_plugin_shortcut_pane_g1

0xd88f,	// (0x0002cb85) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd88f,	// (0x0002cb85) list_single_idle_plugin_shortcut_pane_g2

0xd8a9,	// (0x0002cb9f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8a9,	// (0x0002cb9f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5c,	// (0x0002f052) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5c,	// (0x0002f052) list_single_idle_plugin_shortcut_pane_g

0xd8bc,	// (0x0002cbb2) cell_ai_shortcut_pane_ParamLimits

0xd8bc,	// (0x0002cbb2) cell_ai_shortcut_pane

0xd8df,	// (0x0002cbd5) cell_ai_shortcut_pane_g1_ParamLimits

0xd8df,	// (0x0002cbd5) cell_ai_shortcut_pane_g1

0xd70b,	// (0x0002ca01) ai_gene_pane_1_cp2

0xd901,	// (0x0002cbf7) ai_gene_pane_2_cp2

0xd909,	// (0x0002cbff) list_highlight_pane_cp15

0xd912,	// (0x0002cc08) list_single_idle_plugin_calendar_pane_g1

0xd909,	// (0x0002cbff) list_highlight_pane_cp17

0xd91a,	// (0x0002cc10) list_single_idle_plugin_calendar_pane_g1_copy1

0xd922,	// (0x0002cc18) list_single_idle_plugin_player_pane_g1

0xb0a9,	// (0x0002a39f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd63,	// (0x0002f059) list_single_idle_plugin_player_pane_g

0xd92a,	// (0x0002cc20) list_single_idle_plugin_player_pane_t1

0xd938,	// (0x0002cc2e) list_single_idle_plugin_player_pane_t2

0xd946,	// (0x0002cc3c) list_single_idle_plugin_player_pane_t3

0xd954,	// (0x0002cc4a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd68,	// (0x0002f05e) list_single_idle_plugin_player_pane_t

0xd962,	// (0x0002cc58) wait_bar_pane_cp15

0xd96a,	// (0x0002cc60) grid_ai_notification_pane

0xb0a9,	// (0x0002a39f) list_single_idle_plugin_notification_pane_g1

0xd973,	// (0x0002cc69) cell_ai_notification_pane_ParamLimits

0xd973,	// (0x0002cc69) cell_ai_notification_pane

0xd980,	// (0x0002cc76) cell_ai_notification_pane_g1

0xd988,	// (0x0002cc7e) cell_ai_notification_pane_t1

0xd996,	// (0x0002cc8c) tb_ext_find_button_pane

0xd99e,	// (0x0002cc94) tb_ext_find_pane_g1

0xd9a6,	// (0x0002cc9c) tb_ext_find_pane_t1

0x33cb,	// (0x000226c1) tb_ext_find_button_pane_g1

0xd9b4,	// (0x0002ccaa) tb_ext_find_button_pane_g2

0x0001,

0xfd71,	// (0x0002f067) tb_ext_find_button_pane_g

0xd750,	// (0x0002ca46) main_idle_act4_pane_t1_ParamLimits

0xd762,	// (0x0002ca58) main_idle_act4_pane_t2_ParamLimits

0xfd2f,	// (0x0002f025) main_idle_act4_pane_t_ParamLimits

0xd78a,	// (0x0002ca80) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd798,	// (0x0002ca8e) sat_plugin_idle_act4_pane_ParamLimits

0xd798,	// (0x0002ca8e) sat_plugin_idle_act4_pane

0xd9bd,	// (0x0002ccb3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9bd,	// (0x0002ccb3) sat_plugin_idle_act4_pane_t1

0xd9d0,	// (0x0002ccc6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9d0,	// (0x0002ccc6) sat_plugin_idle_act4_pane_t2

0xd9e3,	// (0x0002ccd9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9e3,	// (0x0002ccd9) sat_plugin_idle_act4_pane_t3

0xd9f6,	// (0x0002ccec) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd9f6,	// (0x0002ccec) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd76,	// (0x0002f06c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd76,	// (0x0002f06c) sat_plugin_idle_act4_pane_t

0x6349,	// (0x0002563f) popup_battery_window_ParamLimits

0x6349,	// (0x0002563f) popup_battery_window

0x13d8,	// (0x000206ce) bg_popup_sub_pane_cp25_ParamLimits

0x13d8,	// (0x000206ce) bg_popup_sub_pane_cp25

0xda09,	// (0x0002ccff) popup_battery_window_g1_ParamLimits

0xda09,	// (0x0002ccff) popup_battery_window_g1

0xda15,	// (0x0002cd0b) popup_battery_window_t1_ParamLimits

0xda15,	// (0x0002cd0b) popup_battery_window_t1

0xda27,	// (0x0002cd1d) popup_battery_window_t2_ParamLimits

0xda27,	// (0x0002cd1d) popup_battery_window_t2

0x0001,

0xfd7f,	// (0x0002f075) popup_battery_window_t_ParamLimits

0xfd7f,	// (0x0002f075) popup_battery_window_t

0x7247,	// (0x0002653d) midp_canvas_pane_ParamLimits

0x72bf,	// (0x000265b5) midp_keypad_pane_ParamLimits

0x72bf,	// (0x000265b5) midp_keypad_pane

0x7789,	// (0x00026a7f) main_midp_pane_ParamLimits

0xb7e0,	// (0x0002aad6) signal_pane_g2_cp_ParamLimits

0xda44,	// (0x0002cd3a) aid_size_cell_midp_keypad_ParamLimits

0xda44,	// (0x0002cd3a) aid_size_cell_midp_keypad

0xda5e,	// (0x0002cd54) midp_keyp_game_grid_pane_ParamLimits

0xda5e,	// (0x0002cd54) midp_keyp_game_grid_pane

0xda7e,	// (0x0002cd74) midp_keyp_rocker_pane_ParamLimits

0xda7e,	// (0x0002cd74) midp_keyp_rocker_pane

0xdaad,	// (0x0002cda3) midp_keyp_sk_left_pane_ParamLimits

0xdaad,	// (0x0002cda3) midp_keyp_sk_left_pane

0xdb09,	// (0x0002cdff) midp_keyp_sk_right_pane_ParamLimits

0xdb09,	// (0x0002cdff) midp_keyp_sk_right_pane

0x121b,	// (0x00020511) bg_button_pane_cp03

0xdb65,	// (0x0002ce5b) midp_keyp_sk_left_pane_g1

0x121b,	// (0x00020511) bg_button_pane_cp04

0xdb65,	// (0x0002ce5b) midp_keyp_sk_right_pane_g1

0xbccd,	// (0x0002afc3) midp_keyp_rocker_pane_g1

0xdb6d,	// (0x0002ce63) keyp_game_cell_pane_ParamLimits

0xdb6d,	// (0x0002ce63) keyp_game_cell_pane

0x121b,	// (0x00020511) bg_button_pane_cp02

0xdb80,	// (0x0002ce76) keyp_game_cell_pane_g1

0x6393,	// (0x00025689) popup_fep_vkb2_window_ParamLimits

0x6393,	// (0x00025689) popup_fep_vkb2_window

0x8c1e,	// (0x00027f14) aid_size_cell_vkb2_ParamLimits

0x8c1e,	// (0x00027f14) aid_size_cell_vkb2

0x8c72,	// (0x00027f68) popup_fep_vkb2_window_g1_ParamLimits

0x8c72,	// (0x00027f68) popup_fep_vkb2_window_g1

0x8cba,	// (0x00027fb0) vkb2_area_bottom_pane_ParamLimits

0x8cba,	// (0x00027fb0) vkb2_area_bottom_pane

0x8d0e,	// (0x00028004) vkb2_area_keypad_pane_ParamLimits

0x8d0e,	// (0x00028004) vkb2_area_keypad_pane

0x8d54,	// (0x0002804a) vkb2_area_top_pane_ParamLimits

0x8d54,	// (0x0002804a) vkb2_area_top_pane

0x8dce,	// (0x000280c4) vkb2_top_entry_pane_ParamLimits

0x8dce,	// (0x000280c4) vkb2_top_entry_pane

0x8df8,	// (0x000280ee) vkb2_top_grid_left_pane_ParamLimits

0x8df8,	// (0x000280ee) vkb2_top_grid_left_pane

0x8e16,	// (0x0002810c) vkb2_top_grid_right_pane_ParamLimits

0x8e16,	// (0x0002810c) vkb2_top_grid_right_pane

0x8e34,	// (0x0002812a) vkb2_cell_keypad_pane_ParamLimits

0x8e34,	// (0x0002812a) vkb2_cell_keypad_pane

0x8f05,	// (0x000281fb) vkb2_area_bottom_grid_pane_ParamLimits

0x8f05,	// (0x000281fb) vkb2_area_bottom_grid_pane

0x8f2b,	// (0x00028221) vkb2_area_bottom_pane_g1_ParamLimits

0x8f2b,	// (0x00028221) vkb2_area_bottom_pane_g1

0x8f4f,	// (0x00028245) vkb2_area_bottom_pane_g2_ParamLimits

0x8f4f,	// (0x00028245) vkb2_area_bottom_pane_g2

0x8f7d,	// (0x00028273) vkb2_area_bottom_pane_g3_ParamLimits

0x8f7d,	// (0x00028273) vkb2_area_bottom_pane_g3

0x0002,

0xfd84,	// (0x0002f07a) vkb2_area_bottom_pane_g_ParamLimits

0xfd84,	// (0x0002f07a) vkb2_area_bottom_pane_g

0x8fde,	// (0x000282d4) vkb2_top_cell_left_pane_ParamLimits

0x8fde,	// (0x000282d4) vkb2_top_cell_left_pane

0xdb91,	// (0x0002ce87) vkb2_top_entry_pane_g1_ParamLimits

0xdb91,	// (0x0002ce87) vkb2_top_entry_pane_g1

0xdb9f,	// (0x0002ce95) vkb2_top_entry_pane_t1_ParamLimits

0xdb9f,	// (0x0002ce95) vkb2_top_entry_pane_t1

0xdbd1,	// (0x0002cec7) vkb2_top_entry_pane_t2_ParamLimits

0xdbd1,	// (0x0002cec7) vkb2_top_entry_pane_t2

0xdc03,	// (0x0002cef9) vkb2_top_entry_pane_t3_ParamLimits

0xdc03,	// (0x0002cef9) vkb2_top_entry_pane_t3

0x0002,

0xfd8b,	// (0x0002f081) vkb2_top_entry_pane_t_ParamLimits

0xfd8b,	// (0x0002f081) vkb2_top_entry_pane_t

0x902b,	// (0x00028321) vkb2_top_grid_right_pane_g1_ParamLimits

0x902b,	// (0x00028321) vkb2_top_grid_right_pane_g1

0x9041,	// (0x00028337) vkb2_top_grid_right_pane_g2_ParamLimits

0x9041,	// (0x00028337) vkb2_top_grid_right_pane_g2

0x9059,	// (0x0002834f) vkb2_top_grid_right_pane_g3_ParamLimits

0x9059,	// (0x0002834f) vkb2_top_grid_right_pane_g3

0x9071,	// (0x00028367) vkb2_top_grid_right_pane_g4_ParamLimits

0x9071,	// (0x00028367) vkb2_top_grid_right_pane_g4

0x0003,

0xfd92,	// (0x0002f088) vkb2_top_grid_right_pane_g_ParamLimits

0xfd92,	// (0x0002f088) vkb2_top_grid_right_pane_g

0x9087,	// (0x0002837d) vkb2_top_cell_left_pane_g1

0x909e,	// (0x00028394) vkb2_cell_keypad_pane_g1_ParamLimits

0x909e,	// (0x00028394) vkb2_cell_keypad_pane_g1

0xdc27,	// (0x0002cf1d) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc27,	// (0x0002cf1d) vkb2_cell_keypad_pane_t1

0x90ac,	// (0x000283a2) vkb2_cell_bottom_grid_pane_ParamLimits

0x90ac,	// (0x000283a2) vkb2_cell_bottom_grid_pane

0x90e5,	// (0x000283db) vkb2_cell_bottom_grid_pane_g1

0xd7d8,	// (0x0002cace) aid_call2_pane_cp02

0xd7e0,	// (0x0002cad6) aid_call_pane_cp02

0xd7e8,	// (0x0002cade) clock_digital_number_pane_cp10

0xd7f0,	// (0x0002cae6) clock_digital_number_pane_cp11

0xd7f8,	// (0x0002caee) clock_digital_number_pane_cp12

0xd800,	// (0x0002caf6) clock_digital_number_pane_cp13

0xd808,	// (0x0002cafe) clock_digital_separator_pane_cp10

0x33cb,	// (0x000226c1) popup_clock_digital_analogue_window_cp2_g1

0x33cb,	// (0x000226c1) popup_clock_digital_analogue_window_cp2_g2

0xd810,	// (0x0002cb06) popup_clock_digital_analogue_window_cp2_g3

0x33cb,	// (0x000226c1) popup_clock_digital_analogue_window_cp2_g4

0xd810,	// (0x0002cb06) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd47,	// (0x0002f03d) popup_clock_digital_analogue_window_cp2_g

0xd818,	// (0x0002cb0e) popup_clock_digital_analogue_window_cp2_t1

0xd826,	// (0x0002cb1c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd52,	// (0x0002f048) popup_clock_digital_analogue_window_cp2_t

0xbccd,	// (0x0002afc3) clock_digital_number_pane_cp10_g1

0xbccd,	// (0x0002afc3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002ee30) clock_digital_number_pane_cp10_g

0xbccd,	// (0x0002afc3) clock_digital_separator_pane_cp10_g1

0xbccd,	// (0x0002afc3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002ee30) clock_digital_separator_pane_cp10_g

0xd653,	// (0x0002c949) uniindi_top_pane_g3

0xd664,	// (0x0002c95a) uniindi_top_pane_g4

0x8ebf,	// (0x000281b5) vkb2_row_keypad_pane_ParamLimits

0x8ebf,	// (0x000281b5) vkb2_row_keypad_pane

0x9101,	// (0x000283f7) vkb2_cell_t_keypad_pane_ParamLimits

0x9101,	// (0x000283f7) vkb2_cell_t_keypad_pane

0x9111,	// (0x00028407) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9111,	// (0x00028407) vkb2_cell_t_keypad_pane_cp08

0x9126,	// (0x0002841c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9126,	// (0x0002841c) vkb2_cell_t_keypad_pane_cp09

0x913a,	// (0x00028430) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x913a,	// (0x00028430) vkb2_cell_t_keypad_pane_cp01

0x914b,	// (0x00028441) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x914b,	// (0x00028441) vkb2_cell_t_keypad_pane_cp02

0x915c,	// (0x00028452) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x915c,	// (0x00028452) vkb2_cell_t_keypad_pane_cp03

0x916d,	// (0x00028463) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x916d,	// (0x00028463) vkb2_cell_t_keypad_pane_cp04

0x917e,	// (0x00028474) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x917e,	// (0x00028474) vkb2_cell_t_keypad_pane_cp05

0x918f,	// (0x00028485) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x918f,	// (0x00028485) vkb2_cell_t_keypad_pane_cp06

0x91a2,	// (0x00028498) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91a2,	// (0x00028498) vkb2_cell_t_keypad_pane_cp07

0x91b7,	// (0x000284ad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91b7,	// (0x000284ad) vkb2_cell_t_keypad_pane_cp10

0xbf30,	// (0x0002b226) vkb2_cell_t_keypad_pane_g1

0xdc3e,	// (0x0002cf34) vkb2_cell_t_keypad_pane_t1

0x121b,	// (0x00020511) popup_grid_graphic2_window

0xdc50,	// (0x0002cf46) aid_size_cell_graphic2_ParamLimits

0xdc50,	// (0x0002cf46) aid_size_cell_graphic2

0xdc88,	// (0x0002cf7e) bg_popup_window_pane_cp21_ParamLimits

0xdc88,	// (0x0002cf7e) bg_popup_window_pane_cp21

0xdc96,	// (0x0002cf8c) graphic2_pages_pane_ParamLimits

0xdc96,	// (0x0002cf8c) graphic2_pages_pane

0xdcdc,	// (0x0002cfd2) grid_graphic2_control_pane_ParamLimits

0xdcdc,	// (0x0002cfd2) grid_graphic2_control_pane

0xdd1a,	// (0x0002d010) grid_graphic2_pane_ParamLimits

0xdd1a,	// (0x0002d010) grid_graphic2_pane

0xdd90,	// (0x0002d086) cell_graphic2_pane

0x121b,	// (0x00020511) main_comp_mode_pane

0xceba,	// (0x0002c1b0) list_ai3_gene_pane_ParamLimits

0xd286,	// (0x0002c57c) bg_popup_window_pane_cp19_ParamLimits

0xd292,	// (0x0002c588) bg_touch_area_indi_pane_ParamLimits

0xd292,	// (0x0002c588) bg_touch_area_indi_pane

0xd2a8,	// (0x0002c59e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd2a8,	// (0x0002c59e) bg_touch_area_indi_pane_cp01

0xd2be,	// (0x0002c5b4) bg_touch_area_indi_pane_cp02_ParamLimits

0xd2be,	// (0x0002c5b4) bg_touch_area_indi_pane_cp02

0xd2d8,	// (0x0002c5ce) bg_touch_area_indi_pane_cp03_ParamLimits

0xd2d8,	// (0x0002c5ce) bg_touch_area_indi_pane_cp03

0xd2f2,	// (0x0002c5e8) popup_slider_window_g1_ParamLimits

0xd30e,	// (0x0002c604) popup_slider_window_g2_ParamLimits

0xd32a,	// (0x0002c620) popup_slider_window_g3_ParamLimits

0xfcdc,	// (0x0002efd2) popup_slider_window_g_ParamLimits

0xd390,	// (0x0002c686) popup_slider_window_t1_ParamLimits

0xd404,	// (0x0002c6fa) small_volume_slider_vertical_pane_ParamLimits

0xdd90,	// (0x0002d086) cell_graphic2_pane_ParamLimits

0xdde5,	// (0x0002d0db) bg_button_pane_cp10_ParamLimits

0xdde5,	// (0x0002d0db) bg_button_pane_cp10

0xddfa,	// (0x0002d0f0) bg_button_pane_cp11_ParamLimits

0xddfa,	// (0x0002d0f0) bg_button_pane_cp11

0xde0f,	// (0x0002d105) graphic2_pages_pane_g1_ParamLimits

0xde0f,	// (0x0002d105) graphic2_pages_pane_g1

0xde2a,	// (0x0002d120) graphic2_pages_pane_g2_ParamLimits

0xde2a,	// (0x0002d120) graphic2_pages_pane_g2

0x0001,

0xfda0,	// (0x0002f096) graphic2_pages_pane_g_ParamLimits

0xfda0,	// (0x0002f096) graphic2_pages_pane_g

0xde42,	// (0x0002d138) graphic2_pages_pane_t1_ParamLimits

0xde42,	// (0x0002d138) graphic2_pages_pane_t1

0xde58,	// (0x0002d14e) cell_graphic2_control_pane_ParamLimits

0xde58,	// (0x0002d14e) cell_graphic2_control_pane

0xde78,	// (0x0002d16e) cell_graphic2_pane_g1_ParamLimits

0xde78,	// (0x0002d16e) cell_graphic2_pane_g1

0xde85,	// (0x0002d17b) cell_graphic2_pane_g2_ParamLimits

0xde85,	// (0x0002d17b) cell_graphic2_pane_g2

0xde92,	// (0x0002d188) cell_graphic2_pane_g3_ParamLimits

0xde92,	// (0x0002d188) cell_graphic2_pane_g3

0xde9f,	// (0x0002d195) cell_graphic2_pane_g4_ParamLimits

0xde9f,	// (0x0002d195) cell_graphic2_pane_g4

0xdeac,	// (0x0002d1a2) cell_graphic2_pane_g5_ParamLimits

0xdeac,	// (0x0002d1a2) cell_graphic2_pane_g5

0x0004,

0xfda5,	// (0x0002f09b) cell_graphic2_pane_g_ParamLimits

0xfda5,	// (0x0002f09b) cell_graphic2_pane_g

0xdec7,	// (0x0002d1bd) cell_graphic2_pane_t1_ParamLimits

0xdec7,	// (0x0002d1bd) cell_graphic2_pane_t1

0x9732,	// (0x00028a28) grid_highlight_pane_cp11_ParamLimits

0x9732,	// (0x00028a28) grid_highlight_pane_cp11

0x13d8,	// (0x000206ce) bg_button_pane_cp05

0xdefe,	// (0x0002d1f4) cell_graphic2_control_pane_g1

0xbccd,	// (0x0002afc3) bg_touch_area_indi_pane_g1

0xdf26,	// (0x0002d21c) aid_cmod_rocker_key_size

0xdf30,	// (0x0002d226) aid_cmode_itu_key_size

0xdf3a,	// (0x0002d230) main_cmode_video_pane

0xdf44,	// (0x0002d23a) main_comp_mode_itu_pane

0xdf50,	// (0x0002d246) main_comp_mode_rocker_pane

0xdf5c,	// (0x0002d252) cell_cmode_rocker_pane_ParamLimits

0xdf5c,	// (0x0002d252) cell_cmode_rocker_pane

0xdf70,	// (0x0002d266) cell_cmode_itu_pane_ParamLimits

0xdf70,	// (0x0002d266) cell_cmode_itu_pane

0x195d,	// (0x00020c53) bg_button_pane_cp06_ParamLimits

0x195d,	// (0x00020c53) bg_button_pane_cp06

0xbf30,	// (0x0002b226) cell_cmode_rocker_pane_g1_ParamLimits

0xbf30,	// (0x0002b226) cell_cmode_rocker_pane_g1

0xd4ab,	// (0x0002c7a1) cell_cmode_rocker_pane_g2_ParamLimits

0xd4ab,	// (0x0002c7a1) cell_cmode_rocker_pane_g2

0x0001,

0xfdb5,	// (0x0002f0ab) cell_cmode_rocker_pane_g_ParamLimits

0xfdb5,	// (0x0002f0ab) cell_cmode_rocker_pane_g

0x121b,	// (0x00020511) bg_button_pane_cp07

0xdf87,	// (0x0002d27d) cell_cmode_itu_pane_g1

0xdf90,	// (0x0002d286) cell_cmode_itu_pane_t1

0xdf9e,	// (0x0002d294) cell_cmode_itu_pane_t2

0x0001,

0xfdba,	// (0x0002f0b0) cell_cmode_itu_pane_t

0xd6d7,	// (0x0002c9cd) aid_touch_ctrl_left

0xd6df,	// (0x0002c9d5) aid_touch_ctrl_right

0x121b,	// (0x00020511) compa_mode_pane

0xdfac,	// (0x0002d2a2) aid_cmod_rocker_key_size_cp

0xdfb6,	// (0x0002d2ac) aid_cmode_itu_key_size_cp

0xdfc0,	// (0x0002d2b6) compa_mode_pane_g1

0xdfc8,	// (0x0002d2be) compa_mode_pane_g2

0xdfd0,	// (0x0002d2c6) compa_mode_pane_g3

0x0002,

0xfdbf,	// (0x0002f0b5) compa_mode_pane_g

0xdfd8,	// (0x0002d2ce) main_comp_mode_itu_pane_cp

0xdfe0,	// (0x0002d2d6) main_comp_mode_rocker_pane_cp

0xdfe8,	// (0x0002d2de) cell_cmode_itu_pane_cp_ParamLimits

0xdfe8,	// (0x0002d2de) cell_cmode_itu_pane_cp

0xdffd,	// (0x0002d2f3) cell_cmode_rocker_pane_cp_ParamLimits

0xdffd,	// (0x0002d2f3) cell_cmode_rocker_pane_cp

0x195d,	// (0x00020c53) bg_button_pane_cp06_cp_ParamLimits

0x195d,	// (0x00020c53) bg_button_pane_cp06_cp

0xbf30,	// (0x0002b226) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf30,	// (0x0002b226) cell_cmode_rocker_pane_g1_cp

0xbccd,	// (0x0002afc3) cell_cmode_rocker_pane_g2_cp

0x121b,	// (0x00020511) bg_button_pane_cp07_cp

0xe00f,	// (0x0002d305) cell_cmode_itu_pane_g1_cp

0xe018,	// (0x0002d30e) cell_cmode_itu_pane_t1_cp

0xe018,	// (0x0002d30e) cell_cmode_itu_pane_t2_cp

0xabf6,	// (0x00029eec) settings_code_pane_cp2

0x128b,	// (0x00020581) bg_popup_window_pane_cp3_ParamLimits

0x15ec,	// (0x000208e2) heading_pane_cp3_ParamLimits

0x15f8,	// (0x000208ee) listscroll_popup_graphic_pane_ParamLimits

0x87af,	// (0x00027aa5) fep_hwr_aid_pane_ParamLimits

0x8b93,	// (0x00027e89) aid_touch_sctrl_top_ParamLimits

0x8ba0,	// (0x00027e96) sctrl_sk_top_pane_g1_ParamLimits

0xbf30,	// (0x0002b226) sctrl_sk_top_pane_g2_ParamLimits

0xfcf5,	// (0x0002efeb) sctrl_sk_top_pane_g_ParamLimits

0x8bad,	// (0x00027ea3) sctrl_sk_top_pane_t1_ParamLimits

0x8b93,	// (0x00027e89) aid_touch_sctrl_bottom_ParamLimits

0x8bad,	// (0x00027ea3) sctrl_sk_bottom_pane_t1_ParamLimits

0xd61d,	// (0x0002c913) aid_area_touch_clock

0x8d96,	// (0x0002808c) aid_vkb2_area_top_pane_cell_ParamLimits

0x8d96,	// (0x0002808c) aid_vkb2_area_top_pane_cell

0x8ee1,	// (0x000281d7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8ee1,	// (0x000281d7) aid_vkb2_area_bottom_pane_cell

0xdb89,	// (0x0002ce7f) popup_char_count_window

0xe026,	// (0x0002d31c) popup_char_count_window_g1

0xe02f,	// (0x0002d325) popup_char_count_window_g2

0xe038,	// (0x0002d32e) popup_char_count_window_g3

0x0002,

0xfdc6,	// (0x0002f0bc) popup_char_count_window_g

0xe041,	// (0x0002d337) popup_char_count_window_t1

0x8c50,	// (0x00027f46) popup_fep_char_preview_window_ParamLimits

0x8c50,	// (0x00027f46) popup_fep_char_preview_window

0x8db4,	// (0x000280aa) vkb2_top_candi_pane_ParamLimits

0x8db4,	// (0x000280aa) vkb2_top_candi_pane

0xe04f,	// (0x0002d345) cell_vkb2_top_candi_pane_ParamLimits

0xe04f,	// (0x0002d345) cell_vkb2_top_candi_pane

0x9d1c,	// (0x00029012) bg_popup_fep_char_preview_window_ParamLimits

0x9d1c,	// (0x00029012) bg_popup_fep_char_preview_window

0x91cc,	// (0x000284c2) popup_fep_char_preview_window_t1_ParamLimits

0x91cc,	// (0x000284c2) popup_fep_char_preview_window_t1

0xe0a0,	// (0x0002d396) bg_popup_fep_char_preview_window_g1

0xe0a8,	// (0x0002d39e) bg_popup_fep_char_preview_window_g2

0xe0b0,	// (0x0002d3a6) bg_popup_fep_char_preview_window_g3

0xe0b8,	// (0x0002d3ae) bg_popup_fep_char_preview_window_g4

0xe0c0,	// (0x0002d3b6) bg_popup_fep_char_preview_window_g5

0x9206,	// (0x000284fc) bg_popup_fep_char_preview_window_g6

0xe0c8,	// (0x0002d3be) bg_popup_fep_char_preview_window_g7

0xe0d0,	// (0x0002d3c6) bg_popup_fep_char_preview_window_g8

0xe0d8,	// (0x0002d3ce) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcd,	// (0x0002f0c3) bg_popup_fep_char_preview_window_g

0xbf30,	// (0x0002b226) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbf30,	// (0x0002b226) cell_vkb2_top_candi_pane_g1

0xc271,	// (0x0002b567) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc271,	// (0x0002b567) cell_vkb2_top_candi_pane_g2

0xc292,	// (0x0002b588) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc292,	// (0x0002b588) cell_vkb2_top_candi_pane_g3

0x920e,	// (0x00028504) cell_vkb2_top_candi_pane_g4_ParamLimits

0x920e,	// (0x00028504) cell_vkb2_top_candi_pane_g4

0xe0e0,	// (0x0002d3d6) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe0e0,	// (0x0002d3d6) cell_vkb2_top_candi_pane_g5

0xd4ab,	// (0x0002c7a1) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd4ab,	// (0x0002c7a1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde0,	// (0x0002f0d6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde0,	// (0x0002f0d6) cell_vkb2_top_candi_pane_g

0x922f,	// (0x00028525) cell_vkb2_top_candi_pane_t1

0x860f,	// (0x00027905) aid_size_touch_slider_mark_ParamLimits

0x860f,	// (0x00027905) aid_size_touch_slider_mark

0xdccc,	// (0x0002cfc2) grid_graphic2_catg_pane_ParamLimits

0xdccc,	// (0x0002cfc2) grid_graphic2_catg_pane

0xdd6a,	// (0x0002d060) popup_grid_graphic2_window_t1_ParamLimits

0xdd6a,	// (0x0002d060) popup_grid_graphic2_window_t1

0xdd7c,	// (0x0002d072) popup_grid_graphic2_window_t2_ParamLimits

0xdd7c,	// (0x0002d072) popup_grid_graphic2_window_t2

0x0001,

0xfd9b,	// (0x0002f091) popup_grid_graphic2_window_t_ParamLimits

0xfd9b,	// (0x0002f091) popup_grid_graphic2_window_t

0x13d8,	// (0x000206ce) bg_button_pane_cp05_ParamLimits

0xdefe,	// (0x0002d1f4) cell_graphic2_control_pane_g1_ParamLimits

0xe101,	// (0x0002d3f7) cell_graphic2_catg_pane_ParamLimits

0xe101,	// (0x0002d3f7) cell_graphic2_catg_pane

0x121b,	// (0x00020511) bg_button_pane_cp12

0xe113,	// (0x0002d409) cell_graphic2_catg_pane_g1

0xd5e9,	// (0x0002c8df) cell_tb_ext_pane_t1_ParamLimits

0x8ffe,	// (0x000282f4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8ffe,	// (0x000282f4) vkb2_top_cell_right_narrow_pane

0x9016,	// (0x0002830c) vkb2_top_cell_right_wide_pane_ParamLimits

0x9016,	// (0x0002830c) vkb2_top_cell_right_wide_pane

0x87a1,	// (0x00027a97) bg_vkb2_func_pane_ParamLimits

0x87a1,	// (0x00027a97) bg_vkb2_func_pane

0x9087,	// (0x0002837d) vkb2_top_cell_left_pane_g1_ParamLimits

0x87a1,	// (0x00027a97) bg_vkb2_fuc_pane_cp03_ParamLimits

0x87a1,	// (0x00027a97) bg_vkb2_fuc_pane_cp03

0x90e5,	// (0x000283db) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8322,	// (0x00027618) bg_vkb2_func_pane_g1

0x832a,	// (0x00027620) bg_vkb2_func_pane_g2

0x8332,	// (0x00027628) bg_vkb2_func_pane_g3

0x96de,	// (0x000289d4) bg_vkb2_func_pane_g4

0x96e6,	// (0x000289dc) bg_vkb2_func_pane_g5

0x96ee,	// (0x000289e4) bg_vkb2_func_pane_g6

0x96f6,	// (0x000289ec) bg_vkb2_func_pane_g7

0x96fe,	// (0x000289f4) bg_vkb2_func_pane_g8

0x831a,	// (0x00027610) bg_vkb2_func_pane_g9

0x0008,

0xfded,	// (0x0002f0e3) bg_vkb2_func_pane_g

0x87a1,	// (0x00027a97) bg_vkb2_fuc_pane_cp01_ParamLimits

0x87a1,	// (0x00027a97) bg_vkb2_fuc_pane_cp01

0x9087,	// (0x0002837d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9087,	// (0x0002837d) vkb2_top_cell_right_wide_pane_g1

0x87a1,	// (0x00027a97) bg_vkb2_fuc_pane_cp02_ParamLimits

0x87a1,	// (0x00027a97) bg_vkb2_fuc_pane_cp02

0x90e5,	// (0x000283db) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x90e5,	// (0x000283db) vkb2_top_cell_right_narrow_pane_g1

0xd200,	// (0x0002c4f6) aid_touch_area_decrease_ParamLimits

0xd200,	// (0x0002c4f6) aid_touch_area_decrease

0xd224,	// (0x0002c51a) aid_touch_area_increase_ParamLimits

0xd224,	// (0x0002c51a) aid_touch_area_increase

0xd23c,	// (0x0002c532) aid_touch_area_mute_ParamLimits

0xd23c,	// (0x0002c532) aid_touch_area_mute

0xd258,	// (0x0002c54e) aid_touch_area_slider_ParamLimits

0xd258,	// (0x0002c54e) aid_touch_area_slider

0xd346,	// (0x0002c63c) popup_slider_window_g4_ParamLimits

0xd346,	// (0x0002c63c) popup_slider_window_g4

0xd35e,	// (0x0002c654) popup_slider_window_g5_ParamLimits

0xd35e,	// (0x0002c654) popup_slider_window_g5

0xd380,	// (0x0002c676) popup_slider_window_g6_ParamLimits

0xd380,	// (0x0002c676) popup_slider_window_g6

0xd3be,	// (0x0002c6b4) popup_slider_window_t2_ParamLimits

0xd3be,	// (0x0002c6b4) popup_slider_window_t2

0x0001,

0xfce9,	// (0x0002efdf) popup_slider_window_t_ParamLimits

0xfce9,	// (0x0002efdf) popup_slider_window_t

0xd3d6,	// (0x0002c6cc) slider_pane_ParamLimits

0xd3d6,	// (0x0002c6cc) slider_pane

0xe11c,	// (0x0002d412) slider_pane_g1_ParamLimits

0xe11c,	// (0x0002d412) slider_pane_g1

0xe130,	// (0x0002d426) slider_pane_g2_ParamLimits

0xe130,	// (0x0002d426) slider_pane_g2

0xe146,	// (0x0002d43c) slider_pane_g3_ParamLimits

0xe146,	// (0x0002d43c) slider_pane_g3

0x0003,

0xfe00,	// (0x0002f0f6) slider_pane_g_ParamLimits

0xfe00,	// (0x0002f0f6) slider_pane_g

0x7cf9,	// (0x00026fef) popup_tb_float_extension_window_ParamLimits

0x7cf9,	// (0x00026fef) popup_tb_float_extension_window

0xe172,	// (0x0002d468) aid_size_cell_tb_float_ext

0x121b,	// (0x00020511) bg_popup_sub_window_cp28

0xe17e,	// (0x0002d474) grid_tb_float_ext_pane

0xe18a,	// (0x0002d480) cell_tb_float_ext_pane_ParamLimits

0xe18a,	// (0x0002d480) cell_tb_float_ext_pane

0xe1a6,	// (0x0002d49c) cell_tb_float_ext_pane_g1

0xe1af,	// (0x0002d4a5) grid_highlight_pane_cp12

0x88e8,	// (0x00027bde) cell_last_hwr_side_pane_ParamLimits

0x88e8,	// (0x00027bde) cell_last_hwr_side_pane

0xbccd,	// (0x0002afc3) cell_last_hwr_side_pane_g1

0xe1b8,	// (0x0002d4ae) cell_last_hwr_side_pane_g2

0x0001,

0xfe09,	// (0x0002f0ff) cell_last_hwr_side_pane_g

0x8fad,	// (0x000282a3) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8fad,	// (0x000282a3) vkb2_area_bottom_space_btn_pane

0xbf30,	// (0x0002b226) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdc3e,	// (0x0002cf34) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x922f,	// (0x00028525) cell_vkb2_top_candi_pane_t1_ParamLimits

0x924d,	// (0x00028543) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x924d,	// (0x00028543) vkb2_area_bottom_space_btn_pane_g1

0x9287,	// (0x0002857d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9287,	// (0x0002857d) vkb2_area_bottom_space_btn_pane_g2

0x92bd,	// (0x000285b3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x92bd,	// (0x000285b3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0e,	// (0x0002f104) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0e,	// (0x0002f104) vkb2_area_bottom_space_btn_pane_g

0x8858,	// (0x00027b4e) cel_fep_hwr_func_pane_ParamLimits

0x8858,	// (0x00027b4e) cel_fep_hwr_func_pane

0x8894,	// (0x00027b8a) cell_hwr_side_button_pane_ParamLimits

0x8894,	// (0x00027b8a) cell_hwr_side_button_pane

0xd61d,	// (0x0002c913) aid_area_touch_clock_ParamLimits

0x13d8,	// (0x000206ce) bg_uniindi_top_pane_ParamLimits

0xd631,	// (0x0002c927) uniindi_top_pane_g1_ParamLimits

0xd647,	// (0x0002c93d) uniindi_top_pane_g2_ParamLimits

0xd653,	// (0x0002c949) uniindi_top_pane_g3_ParamLimits

0xd664,	// (0x0002c95a) uniindi_top_pane_g4_ParamLimits

0xfd21,	// (0x0002f017) uniindi_top_pane_g_ParamLimits

0xd671,	// (0x0002c967) uniindi_top_pane_t1_ParamLimits

0x13d8,	// (0x000206ce) bg_vkb2_func_pane_cp01_ParamLimits

0x13d8,	// (0x000206ce) bg_vkb2_func_pane_cp01

0xe1c1,	// (0x0002d4b7) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1c1,	// (0x0002d4b7) cel_fep_hwr_func_pane_g1

0x13d8,	// (0x000206ce) bg_vkb2_func_pane_cp02_ParamLimits

0x13d8,	// (0x000206ce) bg_vkb2_func_pane_cp02

0xe1c1,	// (0x0002d4b7) cell_hwr_side_button_pane_g1_ParamLimits

0xe1c1,	// (0x0002d4b7) cell_hwr_side_button_pane_g1

0x816f,	// (0x00027465) status_pane_g4_ParamLimits

0x816f,	// (0x00027465) status_pane_g4

0x8189,	// (0x0002747f) status_pane_t1

0xba80,	// (0x0002ad76) form2_midp_gauge_slider_cont_pane

0xba88,	// (0x0002ad7e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba9a,	// (0x0002ad90) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbaac,	// (0x0002ada2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x0002ede3) form2_midp_gauge_slider_pane_t_ParamLimits

0xbabe,	// (0x0002adb4) form2_midp_slider_pane_ParamLimits

0x8c10,	// (0x00027f06) aid_size_cell_func_vkb2_ParamLimits

0x8c10,	// (0x00027f06) aid_size_cell_func_vkb2

0xe15e,	// (0x0002d454) slider_pane_g4_ParamLimits

0xe15e,	// (0x0002d454) slider_pane_g4

0x9307,	// (0x000285fd) form2_midp_gauge_slider_pane_t2_cp01

0x9315,	// (0x0002860b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9315,	// (0x0002860b) form2_midp_gauge_slider_pane_t3_cp01

0x9332,	// (0x00028628) form2_midp_slider_pane_cp01

0x121b,	// (0x00020511) navi_smil_pane

0xe1fa,	// (0x0002d4f0) navi_smil_pane_g1

0xe202,	// (0x0002d4f8) navi_smil_pane_t1

0xe1cf,	// (0x0002d4c5) form2_midp_slider_pane_g1

0xe1d8,	// (0x0002d4ce) form2_midp_slider_pane_g2

0xe1e0,	// (0x0002d4d6) form2_midp_slider_pane_g3

0xe1cf,	// (0x0002d4c5) form2_midp_slider_pane_g4

0xe1e8,	// (0x0002d4de) form2_midp_slider_pane_g5

0x0004,

0xfe17,	// (0x0002f10d) form2_midp_slider_pane_g

0x92f7,	// (0x000285ed) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x92f7,	// (0x000285ed) vkb2_area_bottom_space_btn_pane_g4

0x7f8e,	// (0x00027284) lc0_navi_pane_ParamLimits

0x7f8e,	// (0x00027284) lc0_navi_pane

0x800a,	// (0x00027300) lc0_stat_indi_pane_ParamLimits

0x800a,	// (0x00027300) lc0_stat_indi_pane

0x8021,	// (0x00027317) ls0_title_pane_ParamLimits

0x8021,	// (0x00027317) ls0_title_pane

0x195d,	// (0x00020c53) bg_popup_sub_pane_cp14_ParamLimits

0xd604,	// (0x0002c8fa) list_uniindi_pane_ParamLimits

0xd610,	// (0x0002c906) uniindi_top_pane_ParamLimits

0xd6af,	// (0x0002c9a5) list_single_uniindi_pane_g1_ParamLimits

0xd6c2,	// (0x0002c9b8) list_single_uniindi_pane_t1_ParamLimits

0x933b,	// (0x00028631) lc0_stat_clock_pane_ParamLimits

0x933b,	// (0x00028631) lc0_stat_clock_pane

0xe210,	// (0x0002d506) lc0_stat_indi_pane_g1_ParamLimits

0xe210,	// (0x0002d506) lc0_stat_indi_pane_g1

0xe21d,	// (0x0002d513) lc0_stat_indi_pane_g2_ParamLimits

0xe21d,	// (0x0002d513) lc0_stat_indi_pane_g2

0x0001,

0xfe22,	// (0x0002f118) lc0_stat_indi_pane_g_ParamLimits

0xfe22,	// (0x0002f118) lc0_stat_indi_pane_g

0x9348,	// (0x0002863e) lc0_uni_indicator_pane_ParamLimits

0x9348,	// (0x0002863e) lc0_uni_indicator_pane

0xe22a,	// (0x0002d520) ls0_title_pane_g1_ParamLimits

0xe22a,	// (0x0002d520) ls0_title_pane_g1

0xe23e,	// (0x0002d534) ls0_title_pane_t1_ParamLimits

0xe23e,	// (0x0002d534) ls0_title_pane_t1

0x9355,	// (0x0002864b) lc0_uni_indicator_pane_g1_ParamLimits

0x9355,	// (0x0002864b) lc0_uni_indicator_pane_g1

0xe274,	// (0x0002d56a) lc0_stat_clock_pane_t1

0x121b,	// (0x00020511) main_ai5_pane

0xe282,	// (0x0002d578) ai5_sk_pane_ParamLimits

0xe282,	// (0x0002d578) ai5_sk_pane

0xe28f,	// (0x0002d585) cell_ai5_widget_pane_ParamLimits

0xe28f,	// (0x0002d585) cell_ai5_widget_pane

0xe831,	// (0x0002db27) aid_size_cell_widget_grid

0xe83f,	// (0x0002db35) bg_ai5_widget_pane_ParamLimits

0xe83f,	// (0x0002db35) bg_ai5_widget_pane

0xe8b7,	// (0x0002dbad) cell_ai5_widget_pane_g2

0xe8cb,	// (0x0002dbc1) cell_ai5_widget_pane_g3

0xe8e5,	// (0x0002dbdb) cell_ai5_widget_pane_g4

0xe8f5,	// (0x0002dbeb) cell_ai5_widget_pane_g5

0xe905,	// (0x0002dbfb) cell_ai5_widget_pane_g6

0xe911,	// (0x0002dc07) cell_ai5_widget_pane_g7

0xe959,	// (0x0002dc4f) cell_ai5_widget_pane_t1_ParamLimits

0xe959,	// (0x0002dc4f) cell_ai5_widget_pane_t1

0xe976,	// (0x0002dc6c) cell_ai5_widget_pane_t2_ParamLimits

0xe976,	// (0x0002dc6c) cell_ai5_widget_pane_t2

0xe98e,	// (0x0002dc84) cell_ai5_widget_pane_t3_ParamLimits

0xe98e,	// (0x0002dc84) cell_ai5_widget_pane_t3

0xe9a6,	// (0x0002dc9c) cell_ai5_widget_pane_t4_ParamLimits

0xe9a6,	// (0x0002dc9c) cell_ai5_widget_pane_t4

0xe9cc,	// (0x0002dcc2) cell_ai5_widget_pane_t5_ParamLimits

0xe9cc,	// (0x0002dcc2) cell_ai5_widget_pane_t5

0xe9ec,	// (0x0002dce2) cell_ai5_widget_pane_t6_ParamLimits

0xe9ec,	// (0x0002dce2) cell_ai5_widget_pane_t6

0xe9fe,	// (0x0002dcf4) cell_ai5_widget_pane_t7_ParamLimits

0xe9fe,	// (0x0002dcf4) cell_ai5_widget_pane_t7

0xea17,	// (0x0002dd0d) cell_ai5_widget_pane_t8_ParamLimits

0xea17,	// (0x0002dd0d) cell_ai5_widget_pane_t8

0x0009,

0xfe3c,	// (0x0002f132) cell_ai5_widget_pane_t_ParamLimits

0xfe3c,	// (0x0002f132) cell_ai5_widget_pane_t

0xea76,	// (0x0002dd6c) grid_ai5_widget_pane

0x195d,	// (0x00020c53) highlight_cell_ai5_widget_pane_ParamLimits

0x195d,	// (0x00020c53) highlight_cell_ai5_widget_pane

0xea84,	// (0x0002dd7a) ai5_sk_left_pane

0xea8e,	// (0x0002dd84) ai5_sk_middle_pane

0xea98,	// (0x0002dd8e) ai5_sk_right_pane

0xeaa2,	// (0x0002dd98) bg_ai5_widget_pane_g1_ParamLimits

0xeaa2,	// (0x0002dd98) bg_ai5_widget_pane_g1

0xeaae,	// (0x0002dda4) bg_ai5_widget_pane_g2_ParamLimits

0xeaae,	// (0x0002dda4) bg_ai5_widget_pane_g2

0xeaba,	// (0x0002ddb0) bg_ai5_widget_pane_g3_ParamLimits

0xeaba,	// (0x0002ddb0) bg_ai5_widget_pane_g3

0xeac6,	// (0x0002ddbc) bg_ai5_widget_pane_g4_ParamLimits

0xeac6,	// (0x0002ddbc) bg_ai5_widget_pane_g4

0xead2,	// (0x0002ddc8) bg_ai5_widget_pane_g5_ParamLimits

0xead2,	// (0x0002ddc8) bg_ai5_widget_pane_g5

0xeade,	// (0x0002ddd4) bg_ai5_widget_pane_g6_ParamLimits

0xeade,	// (0x0002ddd4) bg_ai5_widget_pane_g6

0xeaea,	// (0x0002dde0) bg_ai5_widget_pane_g7_ParamLimits

0xeaea,	// (0x0002dde0) bg_ai5_widget_pane_g7

0xeaf6,	// (0x0002ddec) bg_ai5_widget_pane_g8_ParamLimits

0xeaf6,	// (0x0002ddec) bg_ai5_widget_pane_g8

0xeb02,	// (0x0002ddf8) bg_ai5_widget_pane_g9_ParamLimits

0xeb02,	// (0x0002ddf8) bg_ai5_widget_pane_g9

0x0008,

0xfe51,	// (0x0002f147) bg_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0002f147) bg_ai5_widget_pane_g

0xeb3a,	// (0x0002de30) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb3a,	// (0x0002de30) cell_shortcut_ai5_widget_pane

0x7233,	// (0x00026529) bg_cell_shortcut_ai5_widget_pane

0xeb4d,	// (0x0002de43) cell_grid_ai5_widget_pane_g1

0x7233,	// (0x00026529) highlight_cell_shortcut_ai5_widget_pane

0x832a,	// (0x00027620) ai5_sk_left_pane_g1

0xeb56,	// (0x0002de4c) ai5_sk_left_pane_g2

0xeb5e,	// (0x0002de54) ai5_sk_left_pane_g3

0xeb66,	// (0x0002de5c) ai5_sk_left_pane_g4

0x0003,

0xfe64,	// (0x0002f15a) ai5_sk_left_pane_g

0xeb6e,	// (0x0002de64) ai5_sk_left_pane_t1

0x8322,	// (0x00027618) ai5_sk_right_pane_g1

0xeb7c,	// (0x0002de72) ai5_sk_right_pane_g2

0xeb84,	// (0x0002de7a) ai5_sk_right_pane_g3

0xeb8c,	// (0x0002de82) ai5_sk_right_pane_g4

0x0003,

0xfe6d,	// (0x0002f163) ai5_sk_right_pane_g

0xeb94,	// (0x0002de8a) ai5_sk_right_pane_t1

0x8322,	// (0x00027618) ai5_sk_middle_pane_g1

0x832a,	// (0x00027620) ai5_sk_middle_pane_g2

0x96e6,	// (0x000289dc) ai5_sk_middle_pane_g3

0xeb84,	// (0x0002de7a) ai5_sk_middle_pane_g4

0xeb5e,	// (0x0002de54) ai5_sk_middle_pane_g5

0xeba2,	// (0x0002de98) ai5_sk_middle_pane_g6

0xebaa,	// (0x0002dea0) ai5_sk_middle_pane_g7

0x0006,

0xfe76,	// (0x0002f16c) ai5_sk_middle_pane_g

0x7e1a,	// (0x00027110) aid_touch_area_size_lc0_ParamLimits

0x7e1a,	// (0x00027110) aid_touch_area_size_lc0

0x89f7,	// (0x00027ced) cell_hwr_candidate_pane_t1_ParamLimits

0x7e38,	// (0x0002712e) aid_touch_navi_pane

0x8121,	// (0x00027417) status_dt_navi_pane_ParamLimits

0x8121,	// (0x00027417) status_dt_navi_pane

0x812e,	// (0x00027424) status_dt_sta_pane_ParamLimits

0x812e,	// (0x00027424) status_dt_sta_pane

0xebb2,	// (0x0002dea8) dt_sta_controll_pane

0xebbf,	// (0x0002deb5) dt_sta_indi_pane

0xebd0,	// (0x0002dec6) dt_sta_title_pane

0x13d8,	// (0x000206ce) bg_dt_sta_indi_pane_ParamLimits

0x13d8,	// (0x000206ce) bg_dt_sta_indi_pane

0xebe3,	// (0x0002ded9) dt_sta_battery_pane

0xebeb,	// (0x0002dee1) dt_sta_indi_pane_g1

0xebf4,	// (0x0002deea) dt_sta_indi_pane_g2

0xebfd,	// (0x0002def3) dt_sta_indi_pane_g3

0x0002,

0xfe85,	// (0x0002f17b) dt_sta_indi_pane_g

0xec06,	// (0x0002defc) dt_sta_signal_pane

0x195d,	// (0x00020c53) bg_dt_sta_title_pane_ParamLimits

0x195d,	// (0x00020c53) bg_dt_sta_title_pane

0xec0f,	// (0x0002df05) dt_sta_title_pane_g1

0xec17,	// (0x0002df0d) dt_sta_title_pane_t1_ParamLimits

0xec17,	// (0x0002df0d) dt_sta_title_pane_t1

0x121b,	// (0x00020511) bg_dt_sta_control_pane

0xec2c,	// (0x0002df22) dt_sta_controll_pane_g1

0xec35,	// (0x0002df2b) bg_dt_sta_title_pane_g1

0xec3e,	// (0x0002df34) bg_dt_sta_title_pane_g2

0xec47,	// (0x0002df3d) bg_dt_sta_title_pane_g3

0x0002,

0xfe8c,	// (0x0002f182) bg_dt_sta_title_pane_g

0xbccd,	// (0x0002afc3) bg_dt_sta_indi_pane_g1

0xec50,	// (0x0002df46) dt_sta_signal_pane_g1

0xec58,	// (0x0002df4e) dt_sta_signal_pane_g2

0x0001,

0xfe93,	// (0x0002f189) dt_sta_signal_pane_g

0xec60,	// (0x0002df56) dt_sta_battery_pane_g1

0xec69,	// (0x0002df5f) dt_sta_battery_pane_t1

0xbccd,	// (0x0002afc3) bg_dt_sta_control_pane_g1

0x3526,	// (0x0002281c) fep_china_uni_eep_pane

0x352e,	// (0x00022824) fep_china_uni_entry_pane_ParamLimits

0x353e,	// (0x00022834) popup_fep_china_uni_window_g1_ParamLimits

0x354e,	// (0x00022844) popup_fep_china_uni_window_g2_ParamLimits

0x354e,	// (0x00022844) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0002ea0e) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0002ea0e) popup_fep_china_uni_window_g

0xec78,	// (0x0002df6e) fep_china_uni_eep_pane_g1

0xec80,	// (0x0002df76) fep_china_uni_eep_pane_t1

0xe1f1,	// (0x0002d4e7) aid_touch_area_size_smil_player

0x7f86,	// (0x0002727c) lc0_clock_pane

0x817d,	// (0x00027473) status_pane_g5_ParamLimits

0x817d,	// (0x00027473) status_pane_g5

0x797e,	// (0x00026c74) popup_keymap_window

0x8143,	// (0x00027439) status_icon_pane

0xe8cb,	// (0x0002dbc1) cell_ai5_widget_pane_g3_ParamLimits

0xe8e5,	// (0x0002dbdb) cell_ai5_widget_pane_g4_ParamLimits

0xe8f5,	// (0x0002dbeb) cell_ai5_widget_pane_g5_ParamLimits

0xe91d,	// (0x0002dc13) cell_ai5_widget_pane_g8_ParamLimits

0xe91d,	// (0x0002dc13) cell_ai5_widget_pane_g8

0xe931,	// (0x0002dc27) cell_ai5_widget_pane_g9_ParamLimits

0xe931,	// (0x0002dc27) cell_ai5_widget_pane_g9

0xe945,	// (0x0002dc3b) cell_ai5_widget_pane_g10_ParamLimits

0xe945,	// (0x0002dc3b) cell_ai5_widget_pane_g10

0xec8f,	// (0x0002df85) status_icon_pane_g1

0x121b,	// (0x00020511) bg_popup_sub_pane_cp13

0xec97,	// (0x0002df8d) popup_keymap_window_t1

0x7629,	// (0x0002691f) control_pane_g6_ParamLimits

0x7629,	// (0x0002691f) control_pane_g6

0x7636,	// (0x0002692c) control_pane_g7_ParamLimits

0x7636,	// (0x0002692c) control_pane_g7

0x7643,	// (0x00026939) control_pane_g8_ParamLimits

0x7643,	// (0x00026939) control_pane_g8

0xebb2,	// (0x0002dea8) dt_sta_controll_pane_ParamLimits

0xebbf,	// (0x0002deb5) dt_sta_indi_pane_ParamLimits

0xebd0,	// (0x0002dec6) dt_sta_title_pane_ParamLimits

0x1825,	// (0x00020b1b) aid_size_touch_scroll_bar_cale

0x6361,	// (0x00025657) popup_discreet_window_ParamLimits

0x6361,	// (0x00025657) popup_discreet_window

0x63ef,	// (0x000256e5) popup_sk_window

0x9d1c,	// (0x00029012) bg_popup_sub_pane_cp28_ParamLimits

0x9d1c,	// (0x00029012) bg_popup_sub_pane_cp28

0xeca5,	// (0x0002df9b) popup_discreet_window_g1_ParamLimits

0xeca5,	// (0x0002df9b) popup_discreet_window_g1

0xecc5,	// (0x0002dfbb) popup_discreet_window_t1_ParamLimits

0xecc5,	// (0x0002dfbb) popup_discreet_window_t1

0xece3,	// (0x0002dfd9) popup_discreet_window_t2_ParamLimits

0xece3,	// (0x0002dfd9) popup_discreet_window_t2

0x0002,

0xfe98,	// (0x0002f18e) popup_discreet_window_t_ParamLimits

0xfe98,	// (0x0002f18e) popup_discreet_window_t

0x9368,	// (0x0002865e) popup_sk_window_g1

0x9372,	// (0x00028668) popup_sk_window_g2

0x0001,

0xfe9f,	// (0x0002f195) popup_sk_window_g

0x937a,	// (0x00028670) popup_sk_window_t1

0x9388,	// (0x0002867e) popup_sk_window_t1_copy1

0xe8b7,	// (0x0002dbad) cell_ai5_widget_pane_g2_ParamLimits

0xea29,	// (0x0002dd1f) cell_ai5_widget_pane_t9_ParamLimits

0xea29,	// (0x0002dd1f) cell_ai5_widget_pane_t9

0x121b,	// (0x00020511) main_fep_fshwr2_pane

0x9396,	// (0x0002868c) aid_fshwr2_btn_pane

0x93a2,	// (0x00028698) aid_fshwr2_syb_pane

0x93b4,	// (0x000286aa) aid_fshwr2_txt_pane

0x93c0,	// (0x000286b6) fshwr2_func_candi_pane

0x93d6,	// (0x000286cc) fshwr2_hwr_syb_pane

0x93ea,	// (0x000286e0) fshwr2_icf_pane

0x121b,	// (0x00020511) fshwr2_icf_bg_pane

0x941e,	// (0x00028714) fshwr2_icf_pane_t1_ParamLimits

0x941e,	// (0x00028714) fshwr2_icf_pane_t1

0x33cb,	// (0x000226c1) fshwr2_func_candi_pane_g1

0xed35,	// (0x0002e02b) fshwr2_func_candi_row_pane_ParamLimits

0xed35,	// (0x0002e02b) fshwr2_func_candi_row_pane

0x9436,	// (0x0002872c) cell_fshwr2_syb_pane_ParamLimits

0x9436,	// (0x0002872c) cell_fshwr2_syb_pane

0xe1c1,	// (0x0002d4b7) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe1c1,	// (0x0002d4b7) fshwr2_hwr_syb_pane_g1

0x121b,	// (0x00020511) bg_popup_call_pane_cp01

0x9457,	// (0x0002874d) fshwr2_func_candi_cell_pane_ParamLimits

0x9457,	// (0x0002874d) fshwr2_func_candi_cell_pane

0xed58,	// (0x0002e04e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed58,	// (0x0002e04e) fshwr2_func_candi_cell_bg_pane

0x94a8,	// (0x0002879e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x94a8,	// (0x0002879e) fshwr2_func_candi_cell_pane_g1

0x94c8,	// (0x000287be) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x94c8,	// (0x000287be) fshwr2_func_candi_cell_pane_t1

0x121b,	// (0x00020511) bg_button_pane_cp08

0xed64,	// (0x0002e05a) cell_fshwr2_syb_bg_pane

0x94db,	// (0x000287d1) cell_fshwr2_syb_bg_pane_g1

0x94ef,	// (0x000287e5) cell_fshwr2_syb_bg_pane_t1

0x195d,	// (0x00020c53) main_tmo_pane

0xa840,	// (0x00029b36) uni_indicator_pane_g1_ParamLimits

0xa853,	// (0x00029b49) uni_indicator_pane_g2_ParamLimits

0xa865,	// (0x00029b5b) uni_indicator_pane_g3_ParamLimits

0xa874,	// (0x00029b6a) uni_indicator_pane_g4_ParamLimits

0xa874,	// (0x00029b6a) uni_indicator_pane_g4

0xa888,	// (0x00029b7e) uni_indicator_pane_g5_ParamLimits

0xa888,	// (0x00029b7e) uni_indicator_pane_g5

0xa888,	// (0x00029b7e) uni_indicator_pane_g6_ParamLimits

0xa888,	// (0x00029b7e) uni_indicator_pane_g6

0xf91c,	// (0x0002ec12) uni_indicator_pane_g_ParamLimits

0xd1d0,	// (0x0002c4c6) popup_tmo_note_window_ParamLimits

0xd1d0,	// (0x0002c4c6) popup_tmo_note_window

0x195d,	// (0x00020c53) fshwr2_bg_pane

0x94b9,	// (0x000287af) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x94b9,	// (0x000287af) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea4,	// (0x0002f19a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea4,	// (0x0002f19a) fshwr2_func_candi_cell_pane_g

0xbccd,	// (0x0002afc3) bg_popup_window_pane_cp01

0x9505,	// (0x000287fb) bg_popup_window_pane_g1_cp01

0xed70,	// (0x0002e066) bg_popup_window_pane_cp22_ParamLimits

0xed70,	// (0x0002e066) bg_popup_window_pane_cp22

0xed7e,	// (0x0002e074) listscroll_tmo_link_pane_ParamLimits

0xed7e,	// (0x0002e074) listscroll_tmo_link_pane

0xedbe,	// (0x0002e0b4) popup_tmo_note_window_g1_ParamLimits

0xedbe,	// (0x0002e0b4) popup_tmo_note_window_g1

0xedcb,	// (0x0002e0c1) tmo_note_info_pane_ParamLimits

0xedcb,	// (0x0002e0c1) tmo_note_info_pane

0xede5,	// (0x0002e0db) list_tmo_note_info_pane_g1_ParamLimits

0xede5,	// (0x0002e0db) list_tmo_note_info_pane_g1

0xedfc,	// (0x0002e0f2) list_tmo_note_info_pane_g2_ParamLimits

0xedfc,	// (0x0002e0f2) list_tmo_note_info_pane_g2

0x0001,

0xfea9,	// (0x0002f19f) list_tmo_note_info_pane_g_ParamLimits

0xfea9,	// (0x0002f19f) list_tmo_note_info_pane_g

0xee18,	// (0x0002e10e) list_tmo_note_info_text_pane_ParamLimits

0xee18,	// (0x0002e10e) list_tmo_note_info_text_pane

0xee9d,	// (0x0002e193) list_tmo_link_pane

0xeeaa,	// (0x0002e1a0) scroll_pane_cp20

0xeeb7,	// (0x0002e1ad) list_single_tmo_link_pane_ParamLimits

0xeeb7,	// (0x0002e1ad) list_single_tmo_link_pane

0xeec7,	// (0x0002e1bd) list_single_tmo_link_pane_t1

0xeed5,	// (0x0002e1cb) list_tmo_note_info_text_pane_t1_ParamLimits

0xeed5,	// (0x0002e1cb) list_tmo_note_info_text_pane_t1

0x687e,	// (0x00025b74) aid_size_touch_scroll_bar_cp01_ParamLimits

0x687e,	// (0x00025b74) aid_size_touch_scroll_bar_cp01

0x55ca,	// (0x000248c0) aid_size_touch_slider_marker

0x63d7,	// (0x000256cd) popup_settings_window_ParamLimits

0x63d7,	// (0x000256cd) popup_settings_window

0x5775,	// (0x00024a6b) popup_candi_list_indi_window

0x7e38,	// (0x0002712e) aid_touch_navi_pane_ParamLimits

0x8b67,	// (0x00027e5d) rs_clock_indi_pane

0x8b70,	// (0x00027e66) sctrl_sk_bottom_pane_ParamLimits

0x8b81,	// (0x00027e77) sctrl_sk_top_pane_ParamLimits

0x8c6a,	// (0x00027f60) popup_fep_tooltip_window

0xe831,	// (0x0002db27) aid_size_cell_widget_grid_ParamLimits

0xe8a2,	// (0x0002db98) cell_ai5_widget_pane_g1_ParamLimits

0xe8a2,	// (0x0002db98) cell_ai5_widget_pane_g1

0xe905,	// (0x0002dbfb) cell_ai5_widget_pane_g6_ParamLimits

0xe911,	// (0x0002dc07) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe27,	// (0x0002f11d) cell_ai5_widget_pane_g_ParamLimits

0xfe27,	// (0x0002f11d) cell_ai5_widget_pane_g

0xea58,	// (0x0002dd4e) cell_ai5_widget_pane_t10_ParamLimits

0xea58,	// (0x0002dd4e) cell_ai5_widget_pane_t10

0xea76,	// (0x0002dd6c) grid_ai5_widget_pane_ParamLimits

0xeb0e,	// (0x0002de04) cell_contacts_ai5_widget_pane_ParamLimits

0xeb0e,	// (0x0002de04) cell_contacts_ai5_widget_pane

0xecf8,	// (0x0002dfee) popup_discreet_window_t3_ParamLimits

0xecf8,	// (0x0002dfee) popup_discreet_window_t3

0x9406,	// (0x000286fc) popup_fshwr2_char_preview_window_ParamLimits

0x9406,	// (0x000286fc) popup_fshwr2_char_preview_window

0xee36,	// (0x0002e12c) tmo_note_info_pane_t1

0xee4b,	// (0x0002e141) tmo_note_info_pane_t2

0xee64,	// (0x0002e15a) tmo_note_info_pane_t3

0xee79,	// (0x0002e16f) tmo_note_info_pane_t4

0xee8b,	// (0x0002e181) tmo_note_info_pane_t5

0x0004,

0xfeae,	// (0x0002f1a4) tmo_note_info_pane_t

0xee9d,	// (0x0002e193) list_tmo_link_pane_ParamLimits

0xeeaa,	// (0x0002e1a0) scroll_pane_cp20_ParamLimits

0x121b,	// (0x00020511) bg_popup_fep_char_preview_window_cp01

0xeeee,	// (0x0002e1e4) popup_fshwr2_char_preview_window_t1

0xeefc,	// (0x0002e1f2) popup_candi_list_indi_window_g1

0xef05,	// (0x0002e1fb) bg_cell_contacts_ai5_widget_pane

0xef11,	// (0x0002e207) cell_contacts_ai5_widget_pane_g1

0xef26,	// (0x0002e21c) cell_contacts_ai5_widget_pane_g2

0xef32,	// (0x0002e228) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb9,	// (0x0002f1af) cell_contacts_ai5_widget_pane_g

0xef3e,	// (0x0002e234) cell_contacts_ai5_widget_pane_t1

0x195d,	// (0x00020c53) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefb5,	// (0x0002e2ab) settings_container_pane

0x7233,	// (0x00026529) listscroll_set_pane_copy1

0xb425,	// (0x0002a71b) scroll_pane_cp121_copy1

0xefc1,	// (0x0002e2b7) set_content_pane_copy1

0xefc9,	// (0x0002e2bf) aid_height_set_list_copy1_ParamLimits

0xefc9,	// (0x0002e2bf) aid_height_set_list_copy1

0xaa88,	// (0x00029d7e) aid_size_parent_copy1_ParamLimits

0xaa88,	// (0x00029d7e) aid_size_parent_copy1

0xefd5,	// (0x0002e2cb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd5,	// (0x0002e2cb) button_value_adjust_pane_cp6_copy1

0x7789,	// (0x00026a7f) list_highlight_pane_cp2_copy1_ParamLimits

0x7789,	// (0x00026a7f) list_highlight_pane_cp2_copy1

0xefe9,	// (0x0002e2df) list_set_pane_copy1_ParamLimits

0xefe9,	// (0x0002e2df) list_set_pane_copy1

0xef50,	// (0x0002e246) main_pane_set_t1_copy1_ParamLimits

0xef50,	// (0x0002e246) main_pane_set_t1_copy1

0xef8a,	// (0x0002e280) main_pane_set_t2_copy1_ParamLimits

0xef8a,	// (0x0002e280) main_pane_set_t2_copy1

0xf0aa,	// (0x0002e3a0) main_pane_set_t3_copy1

0xf0b8,	// (0x0002e3ae) main_pane_set_t4_copy1

0xefa9,	// (0x0002e29f) set_content_pane_g1_copy1_ParamLimits

0xefa9,	// (0x0002e29f) set_content_pane_g1_copy1

0xf0c6,	// (0x0002e3bc) setting_code_pane_copy1

0xf0ce,	// (0x0002e3c4) setting_slider_graphic_pane_copy1

0xf0ce,	// (0x0002e3c4) setting_slider_pane_copy1

0xf0ce,	// (0x0002e3c4) setting_text_pane_copy1

0xf0ce,	// (0x0002e3c4) setting_volume_pane_copy1

0xf0c6,	// (0x0002e3bc) settings_code_pane_cp2_copy1

0xf0d6,	// (0x0002e3cc) settings_code_pane_cp_copy1_ParamLimits

0xf0d6,	// (0x0002e3cc) settings_code_pane_cp_copy1

0x950e,	// (0x00028804) volume_set_pane_copy1

0xf0ea,	// (0x0002e3e0) volume_set_pane_g10_copy1

0xf0f6,	// (0x0002e3ec) volume_set_pane_g1_copy1

0xf100,	// (0x0002e3f6) volume_set_pane_g2_copy1

0xf10a,	// (0x0002e400) volume_set_pane_g3_copy1

0xf114,	// (0x0002e40a) volume_set_pane_g4_copy1

0xf11e,	// (0x0002e414) volume_set_pane_g5_copy1

0xf128,	// (0x0002e41e) volume_set_pane_g6_copy1

0xf132,	// (0x0002e428) volume_set_pane_g7_copy1

0xf13c,	// (0x0002e432) volume_set_pane_g8_copy1

0xf146,	// (0x0002e43c) volume_set_pane_g9_copy1

0x128b,	// (0x00020581) bg_set_opt_pane_cp_copy1_ParamLimits

0x128b,	// (0x00020581) bg_set_opt_pane_cp_copy1

0x951a,	// (0x00028810) setting_slider_pane_t1_copy1_ParamLimits

0x951a,	// (0x00028810) setting_slider_pane_t1_copy1

0x9538,	// (0x0002882e) setting_slider_pane_t2_copy1_ParamLimits

0x9538,	// (0x0002882e) setting_slider_pane_t2_copy1

0x9552,	// (0x00028848) setting_slider_pane_t3_copy1_ParamLimits

0x9552,	// (0x00028848) setting_slider_pane_t3_copy1

0x956a,	// (0x00028860) slider_set_pane_copy1_ParamLimits

0x956a,	// (0x00028860) slider_set_pane_copy1

0x1a18,	// (0x00020d0e) set_opt_bg_pane_g1_copy2

0x1a20,	// (0x00020d16) set_opt_bg_pane_g2_copy2

0xf150,	// (0x0002e446) set_opt_bg_pane_g3_copy2

0x1a30,	// (0x00020d26) set_opt_bg_pane_g4_copy2

0x1a38,	// (0x00020d2e) set_opt_bg_pane_g5_copy2

0x1a40,	// (0x00020d36) set_opt_bg_pane_g6_copy2

0xf15a,	// (0x0002e450) set_opt_bg_pane_g7_copy2

0xf164,	// (0x0002e45a) set_opt_bg_pane_g8_copy2

0xf16e,	// (0x0002e464) set_opt_bg_pane_g9_copy2

0x9580,	// (0x00028876) aid_size_touch_slider_mark_copy1_ParamLimits

0x9580,	// (0x00028876) aid_size_touch_slider_mark_copy1

0xf178,	// (0x0002e46e) slider_set_pane_g1_copy1

0x9594,	// (0x0002888a) slider_set_pane_g2_copy1

0x862f,	// (0x00027925) slider_set_pane_g3_copy1_ParamLimits

0x862f,	// (0x00027925) slider_set_pane_g3_copy1

0x8643,	// (0x00027939) slider_set_pane_g4_copy1_ParamLimits

0x8643,	// (0x00027939) slider_set_pane_g4_copy1

0x865b,	// (0x00027951) slider_set_pane_g5_copy1_ParamLimits

0x865b,	// (0x00027951) slider_set_pane_g5_copy1

0x862f,	// (0x00027925) slider_set_pane_g6_copy1_ParamLimits

0x862f,	// (0x00027925) slider_set_pane_g6_copy1

0x959c,	// (0x00028892) slider_set_pane_g7_copy1_ParamLimits

0x959c,	// (0x00028892) slider_set_pane_g7_copy1

0x122f,	// (0x00020525) bg_set_opt_pane_cp2_copy1

0xf181,	// (0x0002e477) setting_slider_graphic_pane_g1_copy1

0xf18a,	// (0x0002e480) setting_slider_graphic_pane_t1_copy1

0xf19a,	// (0x0002e490) setting_slider_graphic_pane_t2_copy1

0xf1aa,	// (0x0002e4a0) slider_set_pane_cp_copy1

0xf1ba,	// (0x0002e4b0) input_focus_pane_cp1_copy1

0xf1c3,	// (0x0002e4b9) list_set_text_pane_copy1

0xf1cb,	// (0x0002e4c1) setting_text_pane_g1_copy1

0x60b8,	// (0x000253ae) set_text_pane_t1_copy1

0xf1ba,	// (0x0002e4b0) input_focus_pane_cp2_copy1

0xf1cb,	// (0x0002e4c1) setting_code_pane_g1_copy1

0xf1d4,	// (0x0002e4ca) setting_code_pane_t1_copy1

0x6f1b,	// (0x00026211) list_set_graphic_pane_copy1

0x122f,	// (0x00020525) bg_set_opt_pane_cp4_copy1

0x6f2e,	// (0x00026224) list_set_graphic_pane_g1_copy1_ParamLimits

0x6f2e,	// (0x00026224) list_set_graphic_pane_g1_copy1

0xf1e2,	// (0x0002e4d8) list_set_graphic_pane_g2_copy1

0x6f46,	// (0x0002623c) list_set_graphic_pane_t1_copy1_ParamLimits

0x6f46,	// (0x0002623c) list_set_graphic_pane_t1_copy1

0xbccd,	// (0x0002afc3) rs_clock_indi_pane_g1

0xf1ea,	// (0x0002e4e0) rs_clock_indi_pane_t1

0xf1f8,	// (0x0002e4ee) rs_indi_pane

0xf200,	// (0x0002e4f6) rs_indi_pane_g1

0xf209,	// (0x0002e4ff) rs_indi_pane_g2

0xf212,	// (0x0002e508) rs_indi_pane_g3

0x0002,

0xfec0,	// (0x0002f1b6) rs_indi_pane_g

0x7233,	// (0x00026529) bg_popup_preview_window_pane_cp03

0xf21b,	// (0x0002e511) popup_fep_tooltip_window_t1

0xc978,	// (0x0002bc6e) popup_note2_window_g2_ParamLimits

0xc978,	// (0x0002bc6e) popup_note2_window_g2

0x0001,

0xfc59,	// (0x0002ef4f) popup_note2_window_g_ParamLimits

0xfc59,	// (0x0002ef4f) popup_note2_window_g

0xce80,	// (0x0002c176) bg_popup_sub_pane_cp11_ParamLimits

0xce8d,	// (0x0002c183) cell_ai3_links_pane_g1_ParamLimits

0xcea4,	// (0x0002c19a) cell_ai3_links_pane_t1

0x60b8,	// (0x000253ae) set_text_pane_t1_copy1_ParamLimits

0x714c,	// (0x00026442) cell_graphic_popup_pane_cp2_ParamLimits

0x714c,	// (0x00026442) cell_graphic_popup_pane_cp2

0xf229,	// (0x0002e51f) cell_graphic_popup_pane_g1_cp2

0x1638,	// (0x0002092e) cell_graphic_popup_pane_g2_cp2

0xf231,	// (0x0002e527) cell_graphic_popup_pane_g3_cp2

0xf239,	// (0x0002e52f) cell_graphic_popup_pane_t2_cp2

0x1649,	// (0x0002093f) grid_highlight_pane_cp3_cp2

0x31d1,	// (0x000224c7) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x195d,	// (0x00020c53) main_tmo_pane_ParamLimits

0xd1c4,	// (0x0002c4ba) popup_tmo_big_image_note_window

0xe891,	// (0x0002db87) cell_ai5_widget_list_pane

0xe899,	// (0x0002db8f) cell_ai5_widget_lrg_icon_pane

0xee36,	// (0x0002e12c) tmo_note_info_pane_t1_ParamLimits

0xee4b,	// (0x0002e141) tmo_note_info_pane_t2_ParamLimits

0xee64,	// (0x0002e15a) tmo_note_info_pane_t3_ParamLimits

0xee79,	// (0x0002e16f) tmo_note_info_pane_t4_ParamLimits

0xee8b,	// (0x0002e181) tmo_note_info_pane_t5_ParamLimits

0xfeae,	// (0x0002f1a4) tmo_note_info_pane_t_ParamLimits

0xefb5,	// (0x0002e2ab) settings_container_pane_ParamLimits

0xf1b2,	// (0x0002e4a8) indicator_popup_pane_cp5

0xf1b2,	// (0x0002e4a8) indicator_popup_pane_cp6

0x6f1b,	// (0x00026211) list_set_graphic_pane_copy1_ParamLimits

0x121b,	// (0x00020511) bg_popup_window_pane_cp23

0xf247,	// (0x0002e53d) popup_tmo_big_image_note_window_g1

0xf253,	// (0x0002e549) popup_tmo_big_image_note_window_t1

0xf263,	// (0x0002e559) popup_tmo_big_image_note_window_t2

0xf273,	// (0x0002e569) popup_tmo_big_image_note_window_t3

0x0002,

0xfec7,	// (0x0002f1bd) popup_tmo_big_image_note_window_t

0xbccd,	// (0x0002afc3) cell_ai5_widget_lrg_icon_pane_g1

0xf283,	// (0x0002e579) cell_ai5_widget_lrg_icon_pane_t1

0xf291,	// (0x0002e587) cell_ai5_widget_list_row_pane_ParamLimits

0xf291,	// (0x0002e587) cell_ai5_widget_list_row_pane

0xf2a9,	// (0x0002e59f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a9,	// (0x0002e59f) cell_ai5_widget_list_row_pane_g1

0xf2b6,	// (0x0002e5ac) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2b6,	// (0x0002e5ac) cell_ai5_widget_list_row_pane_t1

0xf2e1,	// (0x0002e5d7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e1,	// (0x0002e5d7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfece,	// (0x0002f1c4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfece,	// (0x0002f1c4) cell_ai5_widget_list_row_pane_t

0x121b,	// (0x00020511) main_fep_vtchi_ss_pane

0xf329,	// (0x0002e61f) popup_fep_char_pre_window

0xf331,	// (0x0002e627) popup_fep_ituss_window

0xf356,	// (0x0002e64c) popup_fep_vkbss_window

0xf37b,	// (0x0002e671) grid_vkbss_keypad_pane_ParamLimits

0xf37b,	// (0x0002e671) grid_vkbss_keypad_pane

0xf38b,	// (0x0002e681) ituss_keypad_pane

0x95be,	// (0x000288b4) aid_vkbss_key_offset_ParamLimits

0x95be,	// (0x000288b4) aid_vkbss_key_offset

0x95ca,	// (0x000288c0) cell_vkbss_key_pane_ParamLimits

0x95ca,	// (0x000288c0) cell_vkbss_key_pane

0xf39a,	// (0x0002e690) bg_cell_vkbss_key_g1_ParamLimits

0xf39a,	// (0x0002e690) bg_cell_vkbss_key_g1

0xf3a6,	// (0x0002e69c) cell_vkbss_key_3p_pane_ParamLimits

0xf3a6,	// (0x0002e69c) cell_vkbss_key_3p_pane

0xf3ba,	// (0x0002e6b0) cell_vkbss_key_g1_ParamLimits

0xf3ba,	// (0x0002e6b0) cell_vkbss_key_g1

0xf3ce,	// (0x0002e6c4) cell_vkbss_key_t1_ParamLimits

0xf3ce,	// (0x0002e6c4) cell_vkbss_key_t1

0x95e0,	// (0x000288d6) cell_ituss_key_pane_ParamLimits

0x95e0,	// (0x000288d6) cell_ituss_key_pane

0xf3f9,	// (0x0002e6ef) bg_cell_ituss_key_g1_ParamLimits

0xf3f9,	// (0x0002e6ef) bg_cell_ituss_key_g1

0xf405,	// (0x0002e6fb) cell_ituss_key_pane_g1_ParamLimits

0xf405,	// (0x0002e6fb) cell_ituss_key_pane_g1

0x95f1,	// (0x000288e7) cell_ituss_key_pane_g2_ParamLimits

0x95f1,	// (0x000288e7) cell_ituss_key_pane_g2

0x0002,

0xfed5,	// (0x0002f1cb) cell_ituss_key_pane_g_ParamLimits

0xfed5,	// (0x0002f1cb) cell_ituss_key_pane_g

0x961d,	// (0x00028913) cell_ituss_key_t1_ParamLimits

0x961d,	// (0x00028913) cell_ituss_key_t1

0x9657,	// (0x0002894d) cell_ituss_key_t2_ParamLimits

0x9657,	// (0x0002894d) cell_ituss_key_t2

0x9688,	// (0x0002897e) cell_ituss_key_t3_ParamLimits

0x9688,	// (0x0002897e) cell_ituss_key_t3

0x9657,	// (0x0002894d) cell_ituss_key_t4_ParamLimits

0x9657,	// (0x0002894d) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x0002f1d2) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0002f1d2) cell_ituss_key_t

0xf42b,	// (0x0002e721) cell_vkbss_key_3p_pane_g1

0xf433,	// (0x0002e729) cell_vkbss_key_3p_pane_g2

0xf43b,	// (0x0002e731) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0002f1dd) cell_vkbss_key_3p_pane_g

0x7233,	// (0x00026529) bg_popup_fep_char_preview_window_cp02

0xf443,	// (0x0002e739) popup_fep_char_pre_window_t1

0xe81e,	// (0x0002db14) main_ai5_sk_pane

0xef05,	// (0x0002e1fb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef11,	// (0x0002e207) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef26,	// (0x0002e21c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef32,	// (0x0002e228) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb9,	// (0x0002f1af) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef3e,	// (0x0002e234) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x195d,	// (0x00020c53) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf451,	// (0x0002e747) main_ai5_sk_pane_g1

0x9b54,	// (0x00028e4a) popup_query_code_window_g1

0xf347,	// (0x0002e63d) popup_fep_vkb_icf_pane

0xf365,	// (0x0002e65b) popup_fep_vtchi_icf_pane

0xf45a,	// (0x0002e750) bg_icf_pane

0xf466,	// (0x0002e75c) list_vkb_icf_pane

0xf475,	// (0x0002e76b) bg_icf_pane_cp01

0xf488,	// (0x0002e77e) vtchi_icf_list_pane

0xf498,	// (0x0002e78e) list_vkb_icf_pane_t1_ParamLimits

0xf498,	// (0x0002e78e) list_vkb_icf_pane_t1

0xf4b6,	// (0x0002e7ac) vtchi_icf_list_pane_t1_ParamLimits

0xf4b6,	// (0x0002e7ac) vtchi_icf_list_pane_t1

0xf331,	// (0x0002e627) popup_fep_ituss_window_ParamLimits

0xf365,	// (0x0002e65b) popup_fep_vtchi_icf_pane_ParamLimits

0xf38b,	// (0x0002e681) ituss_keypad_pane_ParamLimits

0x95b2,	// (0x000288a8) ituss_sks_pane

0xf45a,	// (0x0002e750) bg_icf_pane_ParamLimits

0xf309,	// (0x0002e5ff) icf_edit_indi_pane_ParamLimits

0xf309,	// (0x0002e5ff) icf_edit_indi_pane

0xf466,	// (0x0002e75c) list_vkb_icf_pane_ParamLimits

0xf475,	// (0x0002e76b) bg_icf_pane_cp01_ParamLimits

0xf31c,	// (0x0002e612) icf_edit_indi_pane_cp01_ParamLimits

0xf31c,	// (0x0002e612) icf_edit_indi_pane_cp01

0xf490,	// (0x0002e786) vtchi_query_pane

0xe1c1,	// (0x0002d4b7) icf_edit_indi_pane_g1_ParamLimits

0xe1c1,	// (0x0002d4b7) icf_edit_indi_pane_g1

0xf525,	// (0x0002e81b) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0002e81b) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0002f1f5) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0002f1f5) icf_edit_indi_pane_g

0xf537,	// (0x0002e82d) icf_edit_indi_pane_t1

0xf4ce,	// (0x0002e7c4) bg_input_focus_pane_cp042

0x181c,	// (0x00020b12) vtchi_button_pane

0xf4d7,	// (0x0002e7cd) vtchi_query_pane_t1

0xf4e5,	// (0x0002e7db) vtchi_query_pane_t2

0xf4f3,	// (0x0002e7e9) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0002f1e4) vtchi_query_pane_t

0x121b,	// (0x00020511) bg_button_pane_cp13

0xf501,	// (0x0002e7f7) vtchi_button_pane_g1

0x96cb,	// (0x000289c1) ituss_sks_pane_g1

0x96d6,	// (0x000289cc) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0002f1eb) ituss_sks_pane_g

0xf509,	// (0x0002e7ff) ituss_sks_pane_t1

0xf517,	// (0x0002e80d) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0002f1f0) ituss_sks_pane_t

0xb7aa,	// (0x0002aaa0) indicator_nsta_pane_cp_g1

0xb7b2,	// (0x0002aaa8) indicator_nsta_pane_cp_g2

0xb7ba,	// (0x0002aab0) indicator_nsta_pane_cp_g3

0xb7aa,	// (0x0002aaa0) indicator_nsta_pane_cp_g4

0xb7b2,	// (0x0002aaa8) indicator_nsta_pane_cp_g5

0xb7ba,	// (0x0002aab0) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x0002ed99) indicator_nsta_pane_cp_g

0xdeeb,	// (0x0002d1e1) cell_graphic2_pane_t2_ParamLimits

0xdeeb,	// (0x0002d1e1) cell_graphic2_pane_t2

0x0001,

0xfdb0,	// (0x0002f0a6) cell_graphic2_pane_t_ParamLimits

0xfdb0,	// (0x0002f0a6) cell_graphic2_pane_t

0xdf18,	// (0x0002d20e) cell_graphic2_control_pane_t1

0x6cb7,	// (0x00025fad) signal_pane_g3_ParamLimits

0x6cb7,	// (0x00025fad) signal_pane_g3

0x6cc6,	// (0x00025fbc) signal_pane_g4_ParamLimits

0x6cc6,	// (0x00025fbc) signal_pane_g4

0xf2f3,	// (0x0002e5e9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f3,	// (0x0002e5e9) cell_ai5_widget_list_row_pane_t3

0xf419,	// (0x0002e70f) cell_ituss_key_pane_t1_ParamLimits

0xf419,	// (0x0002e70f) cell_ituss_key_pane_t1

0x97c3,	// (0x00028ab9) form_field_data_wide_pane_vc_t2_ParamLimits

0x97c3,	// (0x00028ab9) form_field_data_wide_pane_vc_t2

0x97d7,	// (0x00028acd) form_field_data_wide_pane_vc_t3_ParamLimits

0x97d7,	// (0x00028acd) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0002eafa) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0002eafa) form_field_data_wide_pane_vc_t

0xb465,	// (0x0002a75b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb465,	// (0x0002a75b) form_field_slider_wide_pane_vc_t3

0xb53b,	// (0x0002a831) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb53b,	// (0x0002a831) form_field_popup_wide_pane_vc_t2

0xb552,	// (0x0002a848) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb552,	// (0x0002a848) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x0002ed88) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0002ed88) form_field_popup_wide_pane_vc_t

0x9396,	// (0x0002868c) aid_fshwr2_btn_pane_ParamLimits

0x93a2,	// (0x00028698) aid_fshwr2_syb_pane_ParamLimits

0x93b4,	// (0x000286aa) aid_fshwr2_txt_pane_ParamLimits

0x195d,	// (0x00020c53) fshwr2_bg_pane_ParamLimits

0x93c0,	// (0x000286b6) fshwr2_func_candi_pane_ParamLimits

0x93d6,	// (0x000286cc) fshwr2_hwr_syb_pane_ParamLimits

0x93ea,	// (0x000286e0) fshwr2_icf_pane_ParamLimits

0x5c85,	// (0x00024f7b) list_double_graphic_pane_vc_g4_ParamLimits

0x5c85,	// (0x00024f7b) list_double_graphic_pane_vc_g4

0x9611,	// (0x00028907) cell_ituss_key_pane_g3_ParamLimits

0x9611,	// (0x00028907) cell_ituss_key_pane_g3

0x96b9,	// (0x000289af) cell_ituss_key_t5_ParamLimits

0x96b9,	// (0x000289af) cell_ituss_key_t5

0xf356,	// (0x0002e64c) popup_fep_vkbss_window_ParamLimits

0xe828,	// (0x0002db1e) aid_cell_ai5_quarter

0xf537,	// (0x0002e82d) icf_edit_indi_pane_t1_ParamLimits

0x1480,	// (0x00020776) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x1480,	// (0x00020776) aid_tch_indicator_popup_pane_cp2

0x1493,	// (0x00020789) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x1493,	// (0x00020789) aid_tch_query_popup_data_pane_cp2

0x9afc,	// (0x00028df2) aid_tch_query_popup_pane_ParamLimits

0x9afc,	// (0x00028df2) aid_tch_query_popup_pane

0x9afc,	// (0x00028df2) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9afc,	// (0x00028df2) aid_tch_query_popup_data_pane_cp1

0xed64,	// (0x0002e05a) cell_fshwr2_syb_bg_pane_ParamLimits

0x94db,	// (0x000287d1) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x94ef,	// (0x000287e5) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf347,	// (0x0002e63d) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
