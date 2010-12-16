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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000156dd };

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
0x95dc,	// (0x0001ecb9) Screen

0x95e8,	// (0x0001ecc5) application_window_ParamLimits

0x95e8,	// (0x0001ecc5) application_window

0xc42f,	// (0x00021b0c) screen_g1

0x7ee6,	// (0x0001d5c3) area_bottom_pane_ParamLimits

0x7ee6,	// (0x0001d5c3) area_bottom_pane

0x7fb1,	// (0x0001d68e) area_top_pane_ParamLimits

0x7fb1,	// (0x0001d68e) area_top_pane

0x8045,	// (0x0001d722) main_pane_ParamLimits

0x8045,	// (0x0001d722) main_pane

0xc439,	// (0x00021b16) misc_graphics

0xa770,	// (0x0001fe4d) battery_pane_ParamLimits

0xa770,	// (0x0001fe4d) battery_pane

0x1a4d,	// (0x0001712a) bg_status_flat_pane_g8

0x1a55,	// (0x00017132) bg_status_flat_pane_g9

0x0d24,	// (0x00016401) context_pane_ParamLimits

0x0d24,	// (0x00016401) context_pane

0xa8db,	// (0x0001ffb8) navi_pane_ParamLimits

0xa8db,	// (0x0001ffb8) navi_pane

0xa959,	// (0x00020036) signal_pane_ParamLimits

0xa959,	// (0x00020036) signal_pane

0x0008,

0xf83e,	// (0x00024f1b) bg_status_flat_pane_g

0xa9e9,	// (0x000200c6) status_pane_g1_ParamLimits

0xa9e9,	// (0x000200c6) status_pane_g1

0xa9ff,	// (0x000200dc) status_pane_g2_ParamLimits

0xa9ff,	// (0x000200dc) status_pane_g2

0x0f4b,	// (0x00016628) status_pane_g3_ParamLimits

0x0f4b,	// (0x00016628) status_pane_g3

0x0004,

0xf76a,	// (0x00024e47) status_pane_g_ParamLimits

0xf76a,	// (0x00024e47) status_pane_g

0xaa0b,	// (0x000200e8) title_pane_ParamLimits

0xaa0b,	// (0x000200e8) title_pane

0xaa6c,	// (0x00020149) uni_indicator_pane_ParamLimits

0xaa6c,	// (0x00020149) uni_indicator_pane

0xd351,	// (0x00022a2e) bg_list_pane_ParamLimits

0xd351,	// (0x00022a2e) bg_list_pane

0xa6e3,	// (0x0001fdc0) find_pane

0x1221,	// (0x000168fe) listscroll_app_pane_ParamLimits

0x1221,	// (0x000168fe) listscroll_app_pane

0xd371,	// (0x00022a4e) listscroll_form_pane

0x84b0,	// (0x0001db8d) listscroll_gen_pane_ParamLimits

0x84b0,	// (0x0001db8d) listscroll_gen_pane

0xe720,	// (0x00023dfd) listscroll_set_pane

0x25b3,	// (0x00017c90) main_idle_act_pane

0xd1e5,	// (0x000228c2) main_idle_trad_pane

0xd1e5,	// (0x000228c2) main_list_empty_pane

0xca7f,	// (0x0002215c) main_midp_pane

0xd38b,	// (0x00022a68) main_pane_g1_ParamLimits

0xd38b,	// (0x00022a68) main_pane_g1

0x84c4,	// (0x0001dba1) popup_ai_message_window_ParamLimits

0x84c4,	// (0x0001dba1) popup_ai_message_window

0x8575,	// (0x0001dc52) popup_fep_china_uni_window_ParamLimits

0x8575,	// (0x0001dc52) popup_fep_china_uni_window

0x85cf,	// (0x0001dcac) popup_fep_japan_candidate_window_ParamLimits

0x85cf,	// (0x0001dcac) popup_fep_japan_candidate_window

0x85ed,	// (0x0001dcca) popup_fep_japan_predictive_window_ParamLimits

0x85ed,	// (0x0001dcca) popup_fep_japan_predictive_window

0x85ff,	// (0x0001dcdc) popup_find_window

0x861c,	// (0x0001dcf9) popup_grid_graphic_window_ParamLimits

0x861c,	// (0x0001dcf9) popup_grid_graphic_window

0xe76c,	// (0x00023e49) popup_large_graphic_colour_window

0x86ba,	// (0x0001dd97) popup_menu_window_ParamLimits

0x86ba,	// (0x0001dd97) popup_menu_window

0x888c,	// (0x0001df69) popup_note_image_window

0x8852,	// (0x0001df2f) popup_note_wait_window_ParamLimits

0x8852,	// (0x0001df2f) popup_note_wait_window

0x88a4,	// (0x0001df81) popup_note_window_ParamLimits

0x88a4,	// (0x0001df81) popup_note_window

0x8953,	// (0x0001e030) popup_query_code_window_ParamLimits

0x8953,	// (0x0001e030) popup_query_code_window

0x898d,	// (0x0001e06a) popup_query_data_code_window_ParamLimits

0x898d,	// (0x0001e06a) popup_query_data_code_window

0x89aa,	// (0x0001e087) popup_query_data_window_ParamLimits

0x89aa,	// (0x0001e087) popup_query_data_window

0x8a2c,	// (0x0001e109) popup_query_sat_info_window_ParamLimits

0x8a2c,	// (0x0001e109) popup_query_sat_info_window

0x8ac3,	// (0x0001e1a0) popup_snote_single_graphic_window_ParamLimits

0x8ac3,	// (0x0001e1a0) popup_snote_single_graphic_window

0x8ac3,	// (0x0001e1a0) popup_snote_single_text_window_ParamLimits

0x8ac3,	// (0x0001e1a0) popup_snote_single_text_window

0xe792,	// (0x00023e6f) popup_sub_window_general

0x8c20,	// (0x0001e2fd) popup_window_general_ParamLimits

0x8c20,	// (0x0001e2fd) popup_window_general

0x0be0,	// (0x000162bd) power_save_pane

0x8331,	// (0x0001da0e) control_pane_g1_ParamLimits

0x8331,	// (0x0001da0e) control_pane_g1

0x835a,	// (0x0001da37) control_pane_g2_ParamLimits

0x835a,	// (0x0001da37) control_pane_g2

0xd33b,	// (0x00022a18) control_pane_g3_ParamLimits

0xd33b,	// (0x00022a18) control_pane_g3

0x0007,

0xf752,	// (0x00024e2f) control_pane_g_ParamLimits

0xf752,	// (0x00024e2f) control_pane_g

0x839b,	// (0x0001da78) control_pane_t1_ParamLimits

0x839b,	// (0x0001da78) control_pane_t1

0x8403,	// (0x0001dae0) control_pane_t2_ParamLimits

0x8403,	// (0x0001dae0) control_pane_t2

0x0002,

0xf763,	// (0x00024e40) control_pane_t_ParamLimits

0xf763,	// (0x00024e40) control_pane_t

0xa633,	// (0x0001fd10) navi_navi_volume_pane_cp1

0xa63b,	// (0x0001fd18) status_small_icon_pane

0xd2e7,	// (0x000229c4) status_small_pane_g1_ParamLimits

0xd2e7,	// (0x000229c4) status_small_pane_g1

0xa643,	// (0x0001fd20) status_small_pane_g2_ParamLimits

0xa643,	// (0x0001fd20) status_small_pane_g2

0xd31b,	// (0x000229f8) status_small_pane_g3_ParamLimits

0xd31b,	// (0x000229f8) status_small_pane_g3

0xa64f,	// (0x0001fd2c) status_small_pane_g4_ParamLimits

0xa64f,	// (0x0001fd2c) status_small_pane_g4

0xa65d,	// (0x0001fd3a) status_small_pane_g5_ParamLimits

0xa65d,	// (0x0001fd3a) status_small_pane_g5

0xa66b,	// (0x0001fd48) status_small_pane_g6_ParamLimits

0xa66b,	// (0x0001fd48) status_small_pane_g6

0x0007,

0xf741,	// (0x00024e1e) status_small_pane_g_ParamLimits

0xf741,	// (0x00024e1e) status_small_pane_g

0xa686,	// (0x0001fd63) status_small_pane_t1

0xa6a8,	// (0x0001fd85) status_small_wait_pane_ParamLimits

0xa6a8,	// (0x0001fd85) status_small_wait_pane

0xa35d,	// (0x0001fa3a) aid_levels_signal_ParamLimits

0xa35d,	// (0x0001fa3a) aid_levels_signal

0xa375,	// (0x0001fa52) signal_pane_g1_ParamLimits

0xa375,	// (0x0001fa52) signal_pane_g1

0xa390,	// (0x0001fa6d) signal_pane_g2_ParamLimits

0xa390,	// (0x0001fa6d) signal_pane_g2

0x0003,

0xf6d2,	// (0x00024daf) signal_pane_g_ParamLimits

0xf6d2,	// (0x00024daf) signal_pane_g

0xcde7,	// (0x000224c4) context_pane_g1

0x95f8,	// (0x0001ecd5) title_pane_g1

0x962f,	// (0x0001ed0c) title_pane_t1

0xc44f,	// (0x00021b2c) title_pane_t2

0xc475,	// (0x00021b52) title_pane_t3

0x0002,

0xf530,	// (0x00024c0d) title_pane_t

0xaa94,	// (0x00020171) aid_levels_battery_ParamLimits

0xaa94,	// (0x00020171) aid_levels_battery

0xaab0,	// (0x0002018d) battery_pane_g1_ParamLimits

0xaab0,	// (0x0002018d) battery_pane_g1

0xaacd,	// (0x000201aa) battery_pane_g2_ParamLimits

0xaacd,	// (0x000201aa) battery_pane_g2

0x0001,

0xf775,	// (0x00024e52) battery_pane_g_ParamLimits

0xf775,	// (0x00024e52) battery_pane_g

0xb0aa,	// (0x00020787) uni_indicator_pane_g1

0xb0c0,	// (0x0002079d) uni_indicator_pane_g2

0xb0d6,	// (0x000207b3) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x00024fc3) uni_indicator_pane_g

0xd084,	// (0x00022761) navi_icon_pane_ParamLimits

0xd084,	// (0x00022761) navi_icon_pane

0xcfd9,	// (0x000226b6) navi_midp_pane

0xd0a0,	// (0x0002277d) navi_navi_pane

0xd0aa,	// (0x00022787) navi_text_pane_ParamLimits

0xd0aa,	// (0x00022787) navi_text_pane

0xc42f,	// (0x00021b0c) status_small_wait_pane_g1

0xc6e0,	// (0x00021dbd) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x00024fbe) status_small_wait_pane_g

0xb003,	// (0x000206e0) navi_navi_icon_text_pane

0x20a0,	// (0x0001777d) navi_navi_pane_g1_ParamLimits

0x20a0,	// (0x0001777d) navi_navi_pane_g1

0x20b2,	// (0x0001778f) navi_navi_pane_g2_ParamLimits

0x20b2,	// (0x0001778f) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x00024f8c) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x00024f8c) navi_navi_pane_g

0x20c4,	// (0x000177a1) navi_navi_tabs_pane

0x20cd,	// (0x000177aa) navi_navi_text_pane

0xb003,	// (0x000206e0) navi_navi_volume_pane

0x2074,	// (0x00017751) navi_text_pane_t1

0x2068,	// (0x00017745) navi_icon_pane_g1

0x1fbb,	// (0x00017698) navi_navi_text_pane_t1

0x8cdd,	// (0x0001e3ba) navi_navi_volume_pane_g1

0xe9fd,	// (0x000240da) volume_small_pane

0x1f21,	// (0x000175fe) navi_navi_icon_text_pane_g1

0xaf5b,	// (0x00020638) navi_navi_icon_text_pane_t1

0xd0a0,	// (0x0002277d) navi_tabs_2_long_pane

0xd0a0,	// (0x0002277d) navi_tabs_2_pane

0xd0a0,	// (0x0002277d) navi_tabs_3_long_pane

0xd0a0,	// (0x0002277d) navi_tabs_3_pane

0xd0a0,	// (0x0002277d) navi_tabs_4_pane

0xe9dd,	// (0x000240ba) tabs_2_active_pane_ParamLimits

0xe9dd,	// (0x000240ba) tabs_2_active_pane

0xe9ed,	// (0x000240ca) tabs_2_passive_pane_ParamLimits

0xe9ed,	// (0x000240ca) tabs_2_passive_pane

0xe9ab,	// (0x00024088) tabs_3_active_pane_ParamLimits

0xe9ab,	// (0x00024088) tabs_3_active_pane

0xe9bb,	// (0x00024098) tabs_3_passive_pane_ParamLimits

0xe9bb,	// (0x00024098) tabs_3_passive_pane

0xe9cc,	// (0x000240a9) tabs_3_passive_pane_cp_ParamLimits

0xe9cc,	// (0x000240a9) tabs_3_passive_pane_cp

0xe967,	// (0x00024044) tabs_4_active_pane_ParamLimits

0xe967,	// (0x00024044) tabs_4_active_pane

0xe978,	// (0x00024055) tabs_4_passive_pane_ParamLimits

0xe978,	// (0x00024055) tabs_4_passive_pane

0xe989,	// (0x00024066) tabs_4_passive_pane_cp_ParamLimits

0xe989,	// (0x00024066) tabs_4_passive_pane_cp

0xe99a,	// (0x00024077) tabs_4_passive_pane_cp2_ParamLimits

0xe99a,	// (0x00024077) tabs_4_passive_pane_cp2

0xe943,	// (0x00024020) tabs_2_long_active_pane_ParamLimits

0xe943,	// (0x00024020) tabs_2_long_active_pane

0xe955,	// (0x00024032) tabs_2_long_passive_pane_ParamLimits

0xe955,	// (0x00024032) tabs_2_long_passive_pane

0xe8fe,	// (0x00023fdb) tabs_3_long_active_pane_ParamLimits

0xe8fe,	// (0x00023fdb) tabs_3_long_active_pane

0xe917,	// (0x00023ff4) tabs_3_long_passive_pane_ParamLimits

0xe917,	// (0x00023ff4) tabs_3_long_passive_pane

0xe92a,	// (0x00024007) tabs_3_long_passive_pane_cp_ParamLimits

0xe92a,	// (0x00024007) tabs_3_long_passive_pane_cp

0xe8a4,	// (0x00023f81) volume_small_pane_g1

0xe8ad,	// (0x00023f8a) volume_small_pane_g2

0xe8b6,	// (0x00023f93) volume_small_pane_g3

0xe8bf,	// (0x00023f9c) volume_small_pane_g4

0xe8c8,	// (0x00023fa5) volume_small_pane_g5

0xe8d1,	// (0x00023fae) volume_small_pane_g6

0xe8da,	// (0x00023fb7) volume_small_pane_g7

0xe8e3,	// (0x00023fc0) volume_small_pane_g8

0xe8ec,	// (0x00023fc9) volume_small_pane_g9

0xe8f5,	// (0x00023fd2) volume_small_pane_g10

0x0009,

0xf87b,	// (0x00024f58) volume_small_pane_g

0xc487,	// (0x00021b64) bg_active_tab_pane_cp2_ParamLimits

0xc487,	// (0x00021b64) bg_active_tab_pane_cp2

0x96bb,	// (0x0001ed98) tabs_3_active_pane_g1

0x96c3,	// (0x0001eda0) tabs_3_active_pane_t1

0xc487,	// (0x00021b64) bg_passive_tab_pane_cp2_ParamLimits

0xc487,	// (0x00021b64) bg_passive_tab_pane_cp2

0x96bb,	// (0x0001ed98) tabs_3_passive_pane_g1

0x96c3,	// (0x0001eda0) tabs_3_passive_pane_t1

0xc487,	// (0x00021b64) bg_active_tab_pane_cp3_ParamLimits

0xc487,	// (0x00021b64) bg_active_tab_pane_cp3

0x96d5,	// (0x0001edb2) tabs_4_active_pane_g1

0x96dd,	// (0x0001edba) tabs_4_active_pane_t1

0xc487,	// (0x00021b64) bg_passive_tab_pane_cp3_ParamLimits

0xc487,	// (0x00021b64) bg_passive_tab_pane_cp3

0x96d5,	// (0x0001edb2) tabs_4_1_passive_pane_g1

0x96dd,	// (0x0001edba) tabs_4_1_passive_pane_t1

0xca7f,	// (0x0002215c) list_highlight_pane_cp2

0xb1ee,	// (0x000208cb) list_set_pane_ParamLimits

0xb1ee,	// (0x000208cb) list_set_pane

0xb288,	// (0x00020965) main_pane_set_t1_ParamLimits

0xb288,	// (0x00020965) main_pane_set_t1

0xb2a8,	// (0x00020985) main_pane_set_t2_ParamLimits

0xb2a8,	// (0x00020985) main_pane_set_t2

0xb2bc,	// (0x00020999) main_pane_set_t3_ParamLimits

0xb2bc,	// (0x00020999) main_pane_set_t3

0xb2ce,	// (0x000209ab) main_pane_set_t4_ParamLimits

0xb2ce,	// (0x000209ab) main_pane_set_t4

0x0003,

0xf94b,	// (0x00025028) main_pane_set_t_ParamLimits

0xf94b,	// (0x00025028) main_pane_set_t

0xb2e0,	// (0x000209bd) setting_code_pane

0xb2ea,	// (0x000209c7) setting_slider_graphic_pane

0xb2ea,	// (0x000209c7) setting_slider_pane

0xb2ea,	// (0x000209c7) setting_text_pane

0xb2ea,	// (0x000209c7) setting_volume_pane

0x8240,	// (0x0001d91d) volume_set_pane

0xc495,	// (0x00021b72) bg_set_opt_pane_cp

0x8248,	// (0x0001d925) setting_slider_pane_t1

0x8261,	// (0x0001d93e) setting_slider_pane_t2

0x827b,	// (0x0001d958) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00024c14) setting_slider_pane_t

0x8293,	// (0x0001d970) slider_set_pane

0xc439,	// (0x00021b16) bg_set_opt_pane_cp2

0xc4a3,	// (0x00021b80) setting_slider_graphic_pane_g1

0x82a9,	// (0x0001d986) setting_slider_graphic_pane_t1

0x82b9,	// (0x0001d996) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00024c1b) setting_slider_graphic_pane_t

0x82c9,	// (0x0001d9a6) slider_set_pane_cp

0xc439,	// (0x00021b16) input_focus_pane_cp1

0x259a,	// (0x00017c77) list_set_text_pane

0xc42f,	// (0x00021b0c) setting_text_pane_g1

0xc439,	// (0x00021b16) input_focus_pane_cp2

0xc42f,	// (0x00021b0c) setting_code_pane_g1

0xc4ac,	// (0x00021b89) setting_code_pane_t1

0xc4ba,	// (0x00021b97) set_text_pane_t1_ParamLimits

0xc4ba,	// (0x00021b97) set_text_pane_t1

0xc995,	// (0x00022072) set_opt_bg_pane_g1

0xc99d,	// (0x0002207a) set_opt_bg_pane_g2

0xb1a3,	// (0x00020880) set_opt_bg_pane_g3

0xc9ad,	// (0x0002208a) set_opt_bg_pane_g4

0xc9b5,	// (0x00022092) set_opt_bg_pane_g5

0xc9bd,	// (0x0002209a) set_opt_bg_pane_g6

0xb1ad,	// (0x0002088a) set_opt_bg_pane_g7

0xb1b5,	// (0x00020892) set_opt_bg_pane_g8

0xb1bf,	// (0x0002089c) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x00025015) set_opt_bg_pane_g

0xb196,	// (0x00020873) slider_set_pane_g1

0xea06,	// (0x000240e3) slider_set_pane_g2

0x0006,

0xf929,	// (0x00025006) slider_set_pane_g

0x8ce5,	// (0x0001e3c2) volume_set_pane_g1

0x8ced,	// (0x0001e3ca) volume_set_pane_g2

0x8cf5,	// (0x0001e3d2) volume_set_pane_g3

0x8cfd,	// (0x0001e3da) volume_set_pane_g4

0x8d05,	// (0x0001e3e2) volume_set_pane_g5

0x8d0d,	// (0x0001e3ea) volume_set_pane_g6

0x8d15,	// (0x0001e3f2) volume_set_pane_g7

0x8d1d,	// (0x0001e3fa) volume_set_pane_g8

0x8d25,	// (0x0001e402) volume_set_pane_g9

0x8d2d,	// (0x0001e40a) volume_set_pane_g10

0x0009,

0xf901,	// (0x00024fde) volume_set_pane_g

0x96ef,	// (0x0001edcc) indicator_pane_ParamLimits

0x96ef,	// (0x0001edcc) indicator_pane

0x9717,	// (0x0001edf4) main_idle_pane_g2_ParamLimits

0x9717,	// (0x0001edf4) main_idle_pane_g2

0x974f,	// (0x0001ee2c) main_pane_idle_g1_ParamLimits

0x974f,	// (0x0001ee2c) main_pane_idle_g1

0xc4d4,	// (0x00021bb1) popup_clock_digital_analogue_window_ParamLimits

0xc4d4,	// (0x00021bb1) popup_clock_digital_analogue_window

0x9776,	// (0x0001ee53) soft_indicator_pane_ParamLimits

0x9776,	// (0x0001ee53) soft_indicator_pane

0x979a,	// (0x0001ee77) wallpaper_pane_ParamLimits

0x979a,	// (0x0001ee77) wallpaper_pane

0xc42f,	// (0x00021b0c) wallpaper_pane_g1

0x97ac,	// (0x0001ee89) indicator_pane_g1_ParamLimits

0x97ac,	// (0x0001ee89) indicator_pane_g1

0x2a7c,	// (0x00018159) navi_navi_icon_text_pane_srt_g1

0xc502,	// (0x00021bdf) soft_indicator_pane_t1

0xc51c,	// (0x00021bf9) aid_ps_area_pane

0x97c2,	// (0x0001ee9f) aid_ps_clock_pane

0xc52d,	// (0x00021c0a) aid_ps_indicator_pane

0xc539,	// (0x00021c16) indicator_ps_pane_ParamLimits

0xc539,	// (0x00021c16) indicator_ps_pane

0xc548,	// (0x00021c25) power_save_pane_g1_ParamLimits

0xc548,	// (0x00021c25) power_save_pane_g1

0xc554,	// (0x00021c31) power_save_pane_g2_ParamLimits

0xc554,	// (0x00021c31) power_save_pane_g2

0xe288,	// (0x00023965) aid_navinavi_width_pane

0xc51c,	// (0x00021bf9) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00024c20) power_save_pane_g_ParamLimits

0xf543,	// (0x00024c20) power_save_pane_g

0xc562,	// (0x00021c3f) power_save_pane_t1_ParamLimits

0xc562,	// (0x00021c3f) power_save_pane_t1

0x97c2,	// (0x0001ee9f) aid_ps_clock_pane_ParamLimits

0xc52d,	// (0x00021c0a) aid_ps_indicator_pane_ParamLimits

0xc574,	// (0x00021c51) power_save_pane_t4_ParamLimits

0xc574,	// (0x00021c51) power_save_pane_t4

0x0001,

0xf548,	// (0x00024c25) power_save_pane_t_ParamLimits

0xf548,	// (0x00024c25) power_save_pane_t

0xc59e,	// (0x00021c7b) power_save_t3_ParamLimits

0xc59e,	// (0x00021c7b) power_save_t3

0xc589,	// (0x00021c66) power_save_t2_ParamLimits

0xc589,	// (0x00021c66) power_save_t2

0xc5b3,	// (0x00021c90) indicator_ps_pane_g1

0x97d0,	// (0x0001eead) ai_gene_pane_ParamLimits

0x97d0,	// (0x0001eead) ai_gene_pane

0x97e7,	// (0x0001eec4) ai_links_pane_ParamLimits

0x97e7,	// (0x0001eec4) ai_links_pane

0x97ff,	// (0x0001eedc) indicator_pane_cp1_ParamLimits

0x97ff,	// (0x0001eedc) indicator_pane_cp1

0x980e,	// (0x0001eeeb) main_pane_idle_g1_cp_ParamLimits

0x980e,	// (0x0001eeeb) main_pane_idle_g1_cp

0x9826,	// (0x0001ef03) popup_ai_links_title_window

0x982f,	// (0x0001ef0c) soft_indicator_pane_cp1_ParamLimits

0x982f,	// (0x0001ef0c) soft_indicator_pane_cp1

0x235f,	// (0x00017a3c) ai_links_pane_g1

0x2368,	// (0x00017a45) grid_ai_links_pane

0xb0a1,	// (0x0002077e) ai_gene_pane_1

0x234d,	// (0x00017a2a) ai_gene_pane_2

0x2356,	// (0x00017a33) list_highlight_pane_cp4

0xb07d,	// (0x0002075a) cell_ai_link_pane_ParamLimits

0xb07d,	// (0x0002075a) cell_ai_link_pane

0x231e,	// (0x000179fb) cell_ai_link_pane_g1

0xc6e0,	// (0x00021dbd) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x00024fb9) cell_ai_link_pane_g

0xc439,	// (0x00021b16) grid_highlight_cp2

0xc439,	// (0x00021b16) bg_popup_sub_pane_cp1

0xc5ca,	// (0x00021ca7) popup_ai_links_title_window_t1

0x226e,	// (0x0001794b) ai_gene_pane_1_g1_ParamLimits

0x226e,	// (0x0001794b) ai_gene_pane_1_g1

0x227a,	// (0x00017957) ai_gene_pane_1_g2_ParamLimits

0x227a,	// (0x00017957) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x00024faf) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x00024faf) ai_gene_pane_1_g

0x2287,	// (0x00017964) ai_gene_pane_1_t1_ParamLimits

0x2287,	// (0x00017964) ai_gene_pane_1_t1

0x22bb,	// (0x00017998) grid_ai_soft_ind_pane

0x2259,	// (0x00017936) ai_gene_pane_2_t1_ParamLimits

0x2259,	// (0x00017936) ai_gene_pane_2_t1

0x9843,	// (0x0001ef20) main_pane_empty_t1_ParamLimits

0x9843,	// (0x0001ef20) main_pane_empty_t1

0x985b,	// (0x0001ef38) main_pane_empty_t2_ParamLimits

0x985b,	// (0x0001ef38) main_pane_empty_t2

0x9870,	// (0x0001ef4d) main_pane_empty_t3_ParamLimits

0x9870,	// (0x0001ef4d) main_pane_empty_t3

0x9882,	// (0x0001ef5f) main_pane_empty_t4_ParamLimits

0x9882,	// (0x0001ef5f) main_pane_empty_t4

0x9894,	// (0x0001ef71) main_pane_empty_t5_ParamLimits

0x9894,	// (0x0001ef71) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00024c2a) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00024c2a) main_pane_empty_t

0xca1a,	// (0x000220f7) bg_popup_window_pane_ParamLimits

0xca1a,	// (0x000220f7) bg_popup_window_pane

0xaff7,	// (0x000206d4) find_popup_pane_cp2_ParamLimits

0xaff7,	// (0x000206d4) find_popup_pane_cp2

0x1fd5,	// (0x000176b2) heading_pane_ParamLimits

0x1fd5,	// (0x000176b2) heading_pane

0xc439,	// (0x00021b16) bg_popup_sub_pane

0xaf78,	// (0x00020655) bg_popup_window_pane_g1_ParamLimits

0xaf78,	// (0x00020655) bg_popup_window_pane_g1

0xaf87,	// (0x00020664) bg_popup_window_pane_g2_ParamLimits

0xaf87,	// (0x00020664) bg_popup_window_pane_g2

0xaf93,	// (0x00020670) bg_popup_window_pane_g3_ParamLimits

0xaf93,	// (0x00020670) bg_popup_window_pane_g3

0xaf9f,	// (0x0002067c) bg_popup_window_pane_g4_ParamLimits

0xaf9f,	// (0x0002067c) bg_popup_window_pane_g4

0xafae,	// (0x0002068b) bg_popup_window_pane_g5_ParamLimits

0xafae,	// (0x0002068b) bg_popup_window_pane_g5

0xafbe,	// (0x0002069b) bg_popup_window_pane_g6_ParamLimits

0xafbe,	// (0x0002069b) bg_popup_window_pane_g6

0xafca,	// (0x000206a7) bg_popup_window_pane_g7_ParamLimits

0xafca,	// (0x000206a7) bg_popup_window_pane_g7

0xafd9,	// (0x000206b6) bg_popup_window_pane_g8_ParamLimits

0xafd9,	// (0x000206b6) bg_popup_window_pane_g8

0xafe8,	// (0x000206c5) bg_popup_window_pane_g9_ParamLimits

0xafe8,	// (0x000206c5) bg_popup_window_pane_g9

0x1faf,	// (0x0001768c) bg_popup_window_pane_g10_ParamLimits

0x1faf,	// (0x0001768c) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x00024f77) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x00024f77) bg_popup_window_pane_g

0x1ed8,	// (0x000175b5) bg_popup_heading_pane_ParamLimits

0x1ed8,	// (0x000175b5) bg_popup_heading_pane

0xea36,	// (0x00024113) tabs_4_passive_pane_cp_srt_ParamLimits

0xea36,	// (0x00024113) tabs_4_passive_pane_cp_srt

0xea48,	// (0x00024125) tabs_4_passive_pane_srt_ParamLimits

0x1eec,	// (0x000175c9) heading_pane_g2

0xea48,	// (0x00024125) tabs_4_passive_pane_srt

0x1221,	// (0x000168fe) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1221,	// (0x000168fe) bg_passive_tab_pane_cp3_srt

0x1ef4,	// (0x000175d1) heading_pane_t1_ParamLimits

0x1ef4,	// (0x000175d1) heading_pane_t1

0x1f0b,	// (0x000175e8) heading_pane_t2_ParamLimits

0x1f0b,	// (0x000175e8) heading_pane_t2

0x0001,

0xf895,	// (0x00024f72) heading_pane_t_ParamLimits

0xf895,	// (0x00024f72) heading_pane_t

0x1a15,	// (0x000170f2) bg_popup_heading_pane_g1

0x1ac4,	// (0x000171a1) bg_popup_heading_pane_g2

0x1ace,	// (0x000171ab) bg_popup_heading_pane_g3

0x1ad8,	// (0x000171b5) bg_popup_heading_pane_g4

0x1ae2,	// (0x000171bf) bg_popup_heading_pane_g5

0x1aec,	// (0x000171c9) bg_popup_heading_pane_g6

0x1af4,	// (0x000171d1) bg_popup_heading_pane_g7

0x1afc,	// (0x000171d9) bg_popup_heading_pane_g8

0x1b06,	// (0x000171e3) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x00024f2e) bg_popup_heading_pane_g

0x1101,	// (0x000167de) bg_popup_sub_pane_g1

0x1111,	// (0x000167ee) bg_popup_sub_pane_g2

0x1109,	// (0x000167e6) bg_popup_sub_pane_g3

0x1121,	// (0x000167fe) bg_popup_sub_pane_g4

0x1119,	// (0x000167f6) bg_popup_sub_pane_g5

0x1129,	// (0x00016806) bg_popup_sub_pane_g6

0x1131,	// (0x0001680e) bg_popup_sub_pane_g7

0x1141,	// (0x0001681e) bg_popup_sub_pane_g8

0x1139,	// (0x00016816) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x00024f08) bg_popup_sub_pane_g

0xc487,	// (0x00021b64) bg_popup_window_pane_cp5_ParamLimits

0xc487,	// (0x00021b64) bg_popup_window_pane_cp5

0xc5e7,	// (0x00021cc4) popup_note_window_g1_ParamLimits

0xc5e7,	// (0x00021cc4) popup_note_window_g1

0xc5f3,	// (0x00021cd0) popup_note_window_t1_ParamLimits

0xc5f3,	// (0x00021cd0) popup_note_window_t1

0xc609,	// (0x00021ce6) popup_note_window_t2_ParamLimits

0xc609,	// (0x00021ce6) popup_note_window_t2

0xc61f,	// (0x00021cfc) popup_note_window_t3_ParamLimits

0xc61f,	// (0x00021cfc) popup_note_window_t3

0xc635,	// (0x00021d12) popup_note_window_t4_ParamLimits

0xc635,	// (0x00021d12) popup_note_window_t4

0xc65d,	// (0x00021d3a) popup_note_window_t5_ParamLimits

0xc65d,	// (0x00021d3a) popup_note_window_t5

0x0004,

0xf558,	// (0x00024c35) popup_note_window_t_ParamLimits

0xf558,	// (0x00024c35) popup_note_window_t

0xc681,	// (0x00021d5e) bg_popup_window_pane_cp6_ParamLimits

0xc681,	// (0x00021d5e) bg_popup_window_pane_cp6

0x1991,	// (0x0001706e) popup_note_image_window_g1_ParamLimits

0x1991,	// (0x0001706e) popup_note_image_window_g1

0xae1d,	// (0x000204fa) popup_note_image_window_g2_ParamLimits

0xae1d,	// (0x000204fa) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x00024efc) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x00024efc) popup_note_image_window_g

0x19b6,	// (0x00017093) popup_note_image_window_t1_ParamLimits

0x19b6,	// (0x00017093) popup_note_image_window_t1

0x19cf,	// (0x000170ac) popup_note_image_window_t2_ParamLimits

0x19cf,	// (0x000170ac) popup_note_image_window_t2

0x19e8,	// (0x000170c5) popup_note_image_window_t3_ParamLimits

0x19e8,	// (0x000170c5) popup_note_image_window_t3

0x0002,

0xf824,	// (0x00024f01) popup_note_image_window_t_ParamLimits

0xf824,	// (0x00024f01) popup_note_image_window_t

0x185a,	// (0x00016f37) bg_popup_window_pane_cp7_ParamLimits

0x185a,	// (0x00016f37) bg_popup_window_pane_cp7

0x188a,	// (0x00016f67) popup_note_wait_window_g1_ParamLimits

0x188a,	// (0x00016f67) popup_note_wait_window_g1

0x1896,	// (0x00016f73) popup_note_wait_window_g2_ParamLimits

0x1896,	// (0x00016f73) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x00024eea) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x00024eea) popup_note_wait_window_g

0x18ae,	// (0x00016f8b) popup_note_wait_window_t1_ParamLimits

0x18ae,	// (0x00016f8b) popup_note_wait_window_t1

0xadbe,	// (0x0002049b) popup_note_wait_window_t2_ParamLimits

0xadbe,	// (0x0002049b) popup_note_wait_window_t2

0xaddb,	// (0x000204b8) popup_note_wait_window_t3_ParamLimits

0xaddb,	// (0x000204b8) popup_note_wait_window_t3

0xadee,	// (0x000204cb) popup_note_wait_window_t4_ParamLimits

0xadee,	// (0x000204cb) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x00024ef1) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x00024ef1) popup_note_wait_window_t

0x192a,	// (0x00017007) wait_bar_pane_ParamLimits

0x192a,	// (0x00017007) wait_bar_pane

0xc439,	// (0x00021b16) wait_anim_pane

0xc439,	// (0x00021b16) wait_border_pane

0xc42f,	// (0x00021b0c) wait_anim_pane_g1

0xc42f,	// (0x00021b0c) wait_anim_pane_g2

0x0001,

0xf6cd,	// (0x00024daa) wait_anim_pane_g

0x1806,	// (0x00016ee3) wait_border_pane_g1

0x1811,	// (0x00016eee) wait_border_pane_g2

0x181a,	// (0x00016ef7) wait_border_pane_g3

0x0002,

0xf806,	// (0x00024ee3) wait_border_pane_g

0x1671,	// (0x00016d4e) bg_popup_window_pane_cp16_ParamLimits

0x1671,	// (0x00016d4e) bg_popup_window_pane_cp16

0xad6e,	// (0x0002044b) indicator_popup_pane_cp4_ParamLimits

0xad6e,	// (0x0002044b) indicator_popup_pane_cp4

0x1785,	// (0x00016e62) popup_query_data_window_t1_ParamLimits

0x1785,	// (0x00016e62) popup_query_data_window_t1

0x1797,	// (0x00016e74) popup_query_data_window_t2_ParamLimits

0x1797,	// (0x00016e74) popup_query_data_window_t2

0x17b0,	// (0x00016e8d) popup_query_data_window_t3_ParamLimits

0x17b0,	// (0x00016e8d) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x00024edc) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x00024edc) popup_query_data_window_t

0xad82,	// (0x0002045f) query_popup_data_pane_ParamLimits

0xad82,	// (0x0002045f) query_popup_data_pane

0xad96,	// (0x00020473) query_popup_data_pane_cp1_ParamLimits

0xad96,	// (0x00020473) query_popup_data_pane_cp1

0x1671,	// (0x00016d4e) bg_popup_window_pane_cp10_ParamLimits

0x1671,	// (0x00016d4e) bg_popup_window_pane_cp10

0xace9,	// (0x000203c6) indicator_popup_pane_ParamLimits

0xace9,	// (0x000203c6) indicator_popup_pane

0xad0b,	// (0x000203e8) popup_query_code_window_t1_ParamLimits

0xad0b,	// (0x000203e8) popup_query_code_window_t1

0xad25,	// (0x00020402) popup_query_code_window_t2_ParamLimits

0xad25,	// (0x00020402) popup_query_code_window_t2

0x1728,	// (0x00016e05) popup_query_code_window_t3_ParamLimits

0x1728,	// (0x00016e05) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x00024ed5) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x00024ed5) popup_query_code_window_t

0x1757,	// (0x00016e34) query_popup_pane_ParamLimits

0x1757,	// (0x00016e34) query_popup_pane

0xc681,	// (0x00021d5e) bg_popup_window_pane_cp15_ParamLimits

0xc681,	// (0x00021d5e) bg_popup_window_pane_cp15

0x98cc,	// (0x0001efa9) indicator_popup_pane_cp1_ParamLimits

0x98cc,	// (0x0001efa9) indicator_popup_pane_cp1

0x98df,	// (0x0001efbc) indicator_popup_pane_cp2_ParamLimits

0x98df,	// (0x0001efbc) indicator_popup_pane_cp2

0x98f2,	// (0x0001efcf) popup_query_data_code_window_g1_ParamLimits

0x98f2,	// (0x0001efcf) popup_query_data_code_window_g1

0xc69f,	// (0x00021d7c) popup_query_data_code_window_t1_ParamLimits

0xc69f,	// (0x00021d7c) popup_query_data_code_window_t1

0xc6b1,	// (0x00021d8e) popup_query_data_code_window_t2_ParamLimits

0xc6b1,	// (0x00021d8e) popup_query_data_code_window_t2

0x9905,	// (0x0001efe2) popup_query_data_code_window_t3_ParamLimits

0x9905,	// (0x0001efe2) popup_query_data_code_window_t3

0x991b,	// (0x0001eff8) popup_query_data_code_window_t4_ParamLimits

0x991b,	// (0x0001eff8) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00024c40) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00024c40) popup_query_data_code_window_t

0xe848,	// (0x00023f25) list_single_midp_graphic_pane_g3

0x9933,	// (0x0001f010) query_popup_data_pane_cp2_ParamLimits

0x9946,	// (0x0001f023) query_popup_pane_cp2_ParamLimits

0x9946,	// (0x0001f023) query_popup_pane_cp2

0xc439,	// (0x00021b16) bg_popup_window_pane_cp11

0x1655,	// (0x00016d32) heading_pane_cp5

0x165d,	// (0x00016d3a) listscroll_popup_info_pane

0xc439,	// (0x00021b16) input_focus_pane_cp3

0xc6c3,	// (0x00021da0) query_popup_pane_t1

0xc6d1,	// (0x00021dae) list_popup_info_pane_ParamLimits

0xc6d1,	// (0x00021dae) list_popup_info_pane

0xc6e0,	// (0x00021dbd) listscroll_popup_info_pane_g1

0xc6e8,	// (0x00021dc5) scroll_pane_cp7

0x9959,	// (0x0001f036) popup_info_list_pane_t1_ParamLimits

0x9959,	// (0x0001f036) popup_info_list_pane_t1

0x9973,	// (0x0001f050) popup_info_list_pane_t2_ParamLimits

0x9973,	// (0x0001f050) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00024c49) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00024c49) popup_info_list_pane_t

0xc439,	// (0x00021b16) bg_popup_window_pane_cp12

0xb4d3,	// (0x00020bb0) find_popup_pane

0xc495,	// (0x00021b72) bg_popup_window_pane_cp3

0xc6f2,	// (0x00021dcf) heading_pane_cp3

0xc701,	// (0x00021dde) listscroll_popup_graphic_pane

0xc439,	// (0x00021b16) bg_popup_window_pane_cp4

0x99dd,	// (0x0001f0ba) heading_pane_cp4

0xc711,	// (0x00021dee) listscroll_popup_colour_pane

0x99e7,	// (0x0001f0c4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x99e7,	// (0x0001f0c4) cell_large_graphic_colour_none_popup_pane

0x99fb,	// (0x0001f0d8) grid_large_graphic_colour_popup_pane_ParamLimits

0x99fb,	// (0x0001f0d8) grid_large_graphic_colour_popup_pane

0x9a1f,	// (0x0001f0fc) listscroll_popup_colour_pane_g1_ParamLimits

0x9a1f,	// (0x0001f0fc) listscroll_popup_colour_pane_g1

0x9a36,	// (0x0001f113) listscroll_popup_colour_pane_g2_ParamLimits

0x9a36,	// (0x0001f113) listscroll_popup_colour_pane_g2

0x9a4a,	// (0x0001f127) listscroll_popup_colour_pane_g3_ParamLimits

0x9a4a,	// (0x0001f127) listscroll_popup_colour_pane_g3

0x9a5a,	// (0x0001f137) listscroll_popup_colour_pane_g4_ParamLimits

0x9a5a,	// (0x0001f137) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00024c4e) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00024c4e) listscroll_popup_colour_pane_g

0xc719,	// (0x00021df6) scroll_pane_cp6_ParamLimits

0xc719,	// (0x00021df6) scroll_pane_cp6

0x9a6a,	// (0x0001f147) cell_large_graphic_colour_popup_pane_ParamLimits

0x9a6a,	// (0x0001f147) cell_large_graphic_colour_popup_pane

0x9a89,	// (0x0001f166) cell_large_graphic_colour_none_popup_pane_t1

0xc439,	// (0x00021b16) grid_highlight_pane_cp5

0xc72b,	// (0x00021e08) cell_large_graphic_colour_popup_pane_g1

0xc733,	// (0x00021e10) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00024c57) cell_large_graphic_colour_popup_pane_g

0xc73b,	// (0x00021e18) cell_large_graphic_colour_popup_pane_g2_copy1

0xc744,	// (0x00021e21) grid_highlight_pane_cp4

0xc74c,	// (0x00021e29) bg_popup_window_pane_cp8_ParamLimits

0xc74c,	// (0x00021e29) bg_popup_window_pane_cp8

0x9a98,	// (0x0001f175) popup_snote_single_text_window_g1_ParamLimits

0x9a98,	// (0x0001f175) popup_snote_single_text_window_g1

0x9aaa,	// (0x0001f187) popup_snote_single_text_window_t1_ParamLimits

0x9aaa,	// (0x0001f187) popup_snote_single_text_window_t1

0x9abd,	// (0x0001f19a) popup_snote_single_text_window_t2_ParamLimits

0x9abd,	// (0x0001f19a) popup_snote_single_text_window_t2

0x9ad0,	// (0x0001f1ad) popup_snote_single_text_window_t3_ParamLimits

0x9ad0,	// (0x0001f1ad) popup_snote_single_text_window_t3

0x9b09,	// (0x0001f1e6) popup_snote_single_text_window_t4_ParamLimits

0x9b09,	// (0x0001f1e6) popup_snote_single_text_window_t4

0x9b3d,	// (0x0001f21a) popup_snote_single_text_window_t5_ParamLimits

0x9b3d,	// (0x0001f21a) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00024c5c) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00024c5c) popup_snote_single_text_window_t

0xc767,	// (0x00021e44) bg_popup_window_pane_cp9_ParamLimits

0xc767,	// (0x00021e44) bg_popup_window_pane_cp9

0x9a98,	// (0x0001f175) popup_snote_single_graphic_window_g1_ParamLimits

0x9a98,	// (0x0001f175) popup_snote_single_graphic_window_g1

0xc775,	// (0x00021e52) popup_snote_single_graphic_window_g2_ParamLimits

0xc775,	// (0x00021e52) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00024c67) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00024c67) popup_snote_single_graphic_window_g

0xc781,	// (0x00021e5e) popup_snote_single_graphic_window_t1_ParamLimits

0xc781,	// (0x00021e5e) popup_snote_single_graphic_window_t1

0xc794,	// (0x00021e71) popup_snote_single_graphic_window_t2_ParamLimits

0xc794,	// (0x00021e71) popup_snote_single_graphic_window_t2

0x9ad0,	// (0x0001f1ad) popup_snote_single_graphic_window_t3_ParamLimits

0x9ad0,	// (0x0001f1ad) popup_snote_single_graphic_window_t3

0x9b09,	// (0x0001f1e6) popup_snote_single_graphic_window_t4_ParamLimits

0x9b09,	// (0x0001f1e6) popup_snote_single_graphic_window_t4

0x9b6c,	// (0x0001f249) popup_snote_single_graphic_window_t5_ParamLimits

0x9b6c,	// (0x0001f249) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00024c6c) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00024c6c) popup_snote_single_graphic_window_t

0x29d8,	// (0x000180b5) grid_graphic_popup_pane_ParamLimits

0x29d8,	// (0x000180b5) grid_graphic_popup_pane

0x2a02,	// (0x000180df) listscroll_popup_graphic_pane_g1_ParamLimits

0x2a02,	// (0x000180df) listscroll_popup_graphic_pane_g1

0xb471,	// (0x00020b4e) listscroll_popup_graphic_pane_g2_ParamLimits

0xb471,	// (0x00020b4e) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x00025052) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x00025052) listscroll_popup_graphic_pane_g

0x2a2a,	// (0x00018107) scroll_pane_cp5

0xb42c,	// (0x00020b09) cell_graphic_popup_pane_ParamLimits

0xb42c,	// (0x00020b09) cell_graphic_popup_pane

0x2948,	// (0x00018025) cell_graphic_popup_pane_g1

0x2950,	// (0x0001802d) cell_graphic_popup_pane_g2

0xc73b,	// (0x00021e18) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0002504b) cell_graphic_popup_pane_g

0x2959,	// (0x00018036) cell_graphic_popup_pane_t2

0xc744,	// (0x00021e21) grid_highlight_pane_cp3

0xc7b9,	// (0x00021e96) list_gen_pane_ParamLimits

0xc7b9,	// (0x00021e96) list_gen_pane

0xc7e1,	// (0x00021ebe) scroll_pane

0xb396,	// (0x00020a73) bg_list_pane_g1_ParamLimits

0xb396,	// (0x00020a73) bg_list_pane_g1

0xb3b1,	// (0x00020a8e) bg_list_pane_g2_ParamLimits

0xb3b1,	// (0x00020a8e) bg_list_pane_g2

0xb3c4,	// (0x00020aa1) bg_list_pane_g3_ParamLimits

0xb3c4,	// (0x00020aa1) bg_list_pane_g3

0xb3d6,	// (0x00020ab3) bg_list_pane_g4_ParamLimits

0xb3d6,	// (0x00020ab3) bg_list_pane_g4

0xb3e8,	// (0x00020ac5) bg_list_pane_g5_ParamLimits

0xb3e8,	// (0x00020ac5) bg_list_pane_g5

0x0004,

0xf963,	// (0x00025040) bg_list_pane_g_ParamLimits

0xf963,	// (0x00025040) bg_list_pane_g

0xb339,	// (0x00020a16) list_double2_graphic_large_graphic_pane_ParamLimits

0xb339,	// (0x00020a16) list_double2_graphic_large_graphic_pane

0xb339,	// (0x00020a16) list_double2_graphic_pane_ParamLimits

0xb339,	// (0x00020a16) list_double2_graphic_pane

0xb339,	// (0x00020a16) list_double2_large_graphic_pane_ParamLimits

0xb339,	// (0x00020a16) list_double2_large_graphic_pane

0xb34c,	// (0x00020a29) list_double2_pane_ParamLimits

0xb34c,	// (0x00020a29) list_double2_pane

0xb339,	// (0x00020a16) list_double_graphic_heading_pane_ParamLimits

0xb339,	// (0x00020a16) list_double_graphic_heading_pane

0xb339,	// (0x00020a16) list_double_graphic_pane_ParamLimits

0xb339,	// (0x00020a16) list_double_graphic_pane

0xb339,	// (0x00020a16) list_double_heading_pane_ParamLimits

0xb339,	// (0x00020a16) list_double_heading_pane

0xb339,	// (0x00020a16) list_double_large_graphic_pane_ParamLimits

0xb339,	// (0x00020a16) list_double_large_graphic_pane

0xb339,	// (0x00020a16) list_double_number_pane_ParamLimits

0xb339,	// (0x00020a16) list_double_number_pane

0xb339,	// (0x00020a16) list_double_pane_ParamLimits

0xb339,	// (0x00020a16) list_double_pane

0xb339,	// (0x00020a16) list_double_time_pane_ParamLimits

0xb339,	// (0x00020a16) list_double_time_pane

0xb339,	// (0x00020a16) list_setting_number_pane_ParamLimits

0xb339,	// (0x00020a16) list_setting_number_pane

0xb339,	// (0x00020a16) list_setting_pane_ParamLimits

0xb339,	// (0x00020a16) list_setting_pane

0xa13d,	// (0x0001f81a) list_single_2graphic_pane_ParamLimits

0xa13d,	// (0x0001f81a) list_single_2graphic_pane

0xa13d,	// (0x0001f81a) list_single_graphic_heading_pane_ParamLimits

0xa13d,	// (0x0001f81a) list_single_graphic_heading_pane

0xa13d,	// (0x0001f81a) list_single_graphic_pane_ParamLimits

0xa13d,	// (0x0001f81a) list_single_graphic_pane

0xa13d,	// (0x0001f81a) list_single_heading_pane_ParamLimits

0xa13d,	// (0x0001f81a) list_single_heading_pane

0xb339,	// (0x00020a16) list_single_large_graphic_pane_ParamLimits

0xb339,	// (0x00020a16) list_single_large_graphic_pane

0xa13d,	// (0x0001f81a) list_single_number_heading_pane_ParamLimits

0xa13d,	// (0x0001f81a) list_single_number_heading_pane

0xa13d,	// (0x0001f81a) list_single_number_pane_ParamLimits

0xa13d,	// (0x0001f81a) list_single_number_pane

0xa13d,	// (0x0001f81a) list_single_pane_ParamLimits

0xa13d,	// (0x0001f81a) list_single_pane

0xc439,	// (0x00021b16) list_highlight_pane_cp1

0xc815,	// (0x00021ef2) list_single_pane_g1_ParamLimits

0xc815,	// (0x00021ef2) list_single_pane_g1

0x1083,	// (0x00016760) list_single_pane_g2_ParamLimits

0x1083,	// (0x00016760) list_single_pane_g2

0x0001,

0xf5a1,	// (0x00024c7e) list_single_pane_g_ParamLimits

0xf5a1,	// (0x00024c7e) list_single_pane_g

0x4673,	// (0x00019d50) list_single_pane_t1_ParamLimits

0x4673,	// (0x00019d50) list_single_pane_t1

0xc815,	// (0x00021ef2) list_single_number_pane_g1_ParamLimits

0xc815,	// (0x00021ef2) list_single_number_pane_g1

0x1083,	// (0x00016760) list_single_number_pane_g2_ParamLimits

0x1083,	// (0x00016760) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x00024c7e) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x00024c7e) list_single_number_pane_g

0x4673,	// (0x00019d50) list_single_number_pane_t1_ParamLimits

0x4673,	// (0x00019d50) list_single_number_pane_t1

0xb145,	// (0x00020822) list_single_number_pane_t2_ParamLimits

0xb145,	// (0x00020822) list_single_number_pane_t2

0x0001,

0xf924,	// (0x00025001) list_single_number_pane_t_ParamLimits

0xf924,	// (0x00025001) list_single_number_pane_t

0x9ba5,	// (0x0001f282) list_single_graphic_pane_g1_ParamLimits

0x9ba5,	// (0x0001f282) list_single_graphic_pane_g1

0xc815,	// (0x00021ef2) list_single_graphic_pane_g2_ParamLimits

0xc815,	// (0x00021ef2) list_single_graphic_pane_g2

0x1083,	// (0x00016760) list_single_graphic_pane_g3_ParamLimits

0x1083,	// (0x00016760) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00024c77) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00024c77) list_single_graphic_pane_g

0x4673,	// (0x00019d50) list_single_graphic_pane_t1_ParamLimits

0x4673,	// (0x00019d50) list_single_graphic_pane_t1

0xc815,	// (0x00021ef2) list_single_heading_pane_g1_ParamLimits

0xc815,	// (0x00021ef2) list_single_heading_pane_g1

0x1083,	// (0x00016760) list_single_heading_pane_g2_ParamLimits

0x1083,	// (0x00016760) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00024c7e) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00024c7e) list_single_heading_pane_g

0x302d,	// (0x0001870a) list_single_heading_pane_t1_ParamLimits

0x302d,	// (0x0001870a) list_single_heading_pane_t1

0x9bb1,	// (0x0001f28e) list_single_heading_pane_t2_ParamLimits

0x9bb1,	// (0x0001f28e) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00024c83) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00024c83) list_single_heading_pane_t

0xc815,	// (0x00021ef2) list_single_number_heading_pane_g1_ParamLimits

0xc815,	// (0x00021ef2) list_single_number_heading_pane_g1

0x1083,	// (0x00016760) list_single_number_heading_pane_g2_ParamLimits

0x1083,	// (0x00016760) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x00024c7e) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x00024c7e) list_single_number_heading_pane_g

0x302d,	// (0x0001870a) list_single_number_heading_pane_t1_ParamLimits

0x302d,	// (0x0001870a) list_single_number_heading_pane_t1

0x9bc3,	// (0x0001f2a0) list_single_number_heading_pane_t2_ParamLimits

0x9bc3,	// (0x0001f2a0) list_single_number_heading_pane_t2

0x9bd5,	// (0x0001f2b2) list_single_number_heading_pane_t3_ParamLimits

0x9bd5,	// (0x0001f2b2) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00024c88) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00024c88) list_single_number_heading_pane_t

0x9be7,	// (0x0001f2c4) list_single_graphic_heading_pane_g1_ParamLimits

0x9be7,	// (0x0001f2c4) list_single_graphic_heading_pane_g1

0x9bf3,	// (0x0001f2d0) list_single_graphic_heading_pane_g4_ParamLimits

0x9bf3,	// (0x0001f2d0) list_single_graphic_heading_pane_g4

0x1083,	// (0x00016760) list_single_graphic_heading_pane_g5_ParamLimits

0x1083,	// (0x00016760) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x00024c8f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x00024c8f) list_single_graphic_heading_pane_g

0x302d,	// (0x0001870a) list_single_graphic_heading_pane_t1_ParamLimits

0x302d,	// (0x0001870a) list_single_graphic_heading_pane_t1

0x9c04,	// (0x0001f2e1) list_single_graphic_heading_pane_t2_ParamLimits

0x9c04,	// (0x0001f2e1) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00024c96) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00024c96) list_single_graphic_heading_pane_t

0x30a1,	// (0x0001877e) list_single_large_graphic_pane_g1_ParamLimits

0x30a1,	// (0x0001877e) list_single_large_graphic_pane_g1

0x30ad,	// (0x0001878a) list_single_large_graphic_pane_g2_ParamLimits

0x30ad,	// (0x0001878a) list_single_large_graphic_pane_g2

0x30b9,	// (0x00018796) list_single_large_graphic_pane_g3_ParamLimits

0x30b9,	// (0x00018796) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x00024c9b) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x00024c9b) list_single_large_graphic_pane_g

0x1811,	// (0x00016eee) wait_border_pane_g2_copy1

0x9c16,	// (0x0001f2f3) list_single_large_graphic_pane_g4_cp2

0x30c5,	// (0x000187a2) list_single_large_graphic_pane_t1_ParamLimits

0x30c5,	// (0x000187a2) list_single_large_graphic_pane_t1

0xc821,	// (0x00021efe) list_double_pane_g1_ParamLimits

0xc821,	// (0x00021efe) list_double_pane_g1

0xc82d,	// (0x00021f0a) list_double_pane_g2_ParamLimits

0xc82d,	// (0x00021f0a) list_double_pane_g2

0x0001,

0xf5c5,	// (0x00024ca2) list_double_pane_g_ParamLimits

0xf5c5,	// (0x00024ca2) list_double_pane_g

0x9c1e,	// (0x0001f2fb) list_double_pane_t1_ParamLimits

0x9c1e,	// (0x0001f2fb) list_double_pane_t1

0x9c34,	// (0x0001f311) list_double_pane_t2_ParamLimits

0x9c34,	// (0x0001f311) list_double_pane_t2

0x0001,

0xf5ca,	// (0x00024ca7) list_double_pane_t_ParamLimits

0xf5ca,	// (0x00024ca7) list_double_pane_t

0x9c46,	// (0x0001f323) list_double2_pane_g1_ParamLimits

0x9c46,	// (0x0001f323) list_double2_pane_g1

0x9c57,	// (0x0001f334) list_double2_pane_g2_ParamLimits

0x9c57,	// (0x0001f334) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x00024cac) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x00024cac) list_double2_pane_g

0x9c63,	// (0x0001f340) list_double2_pane_t1_ParamLimits

0x9c63,	// (0x0001f340) list_double2_pane_t1

0x9c79,	// (0x0001f356) list_double2_pane_t2_ParamLimits

0x9c79,	// (0x0001f356) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x00024cb1) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x00024cb1) list_double2_pane_t

0xc821,	// (0x00021efe) list_double_number_pane_g1_ParamLimits

0xc821,	// (0x00021efe) list_double_number_pane_g1

0xc82d,	// (0x00021f0a) list_double_number_pane_g2_ParamLimits

0xc82d,	// (0x00021f0a) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x00024ca2) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x00024ca2) list_double_number_pane_g

0x9c8b,	// (0x0001f368) list_double_number_pane_t1_ParamLimits

0x9c8b,	// (0x0001f368) list_double_number_pane_t1

0x9c1e,	// (0x0001f2fb) list_double_number_pane_t2_ParamLimits

0x9c1e,	// (0x0001f2fb) list_double_number_pane_t2

0x9c34,	// (0x0001f311) list_double_number_pane_t3_ParamLimits

0x9c34,	// (0x0001f311) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x00024cb6) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x00024cb6) list_double_number_pane_t

0x9c9d,	// (0x0001f37a) list_double_graphic_pane_g1_ParamLimits

0x9c9d,	// (0x0001f37a) list_double_graphic_pane_g1

0x9ca9,	// (0x0001f386) list_double_graphic_pane_g2_ParamLimits

0x9ca9,	// (0x0001f386) list_double_graphic_pane_g2

0x9cb8,	// (0x0001f395) list_double_graphic_pane_g3_ParamLimits

0x9cb8,	// (0x0001f395) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x00024cbd) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x00024cbd) list_double_graphic_pane_g

0x9c1e,	// (0x0001f2fb) list_double_graphic_pane_t1_ParamLimits

0x9c1e,	// (0x0001f2fb) list_double_graphic_pane_t1

0x9c34,	// (0x0001f311) list_double_graphic_pane_t2_ParamLimits

0x9c34,	// (0x0001f311) list_double_graphic_pane_t2

0x0001,

0xf5ca,	// (0x00024ca7) list_double_graphic_pane_t_ParamLimits

0xf5ca,	// (0x00024ca7) list_double_graphic_pane_t

0x9cd0,	// (0x0001f3ad) list_double2_graphic_pane_g1_ParamLimits

0x9cd0,	// (0x0001f3ad) list_double2_graphic_pane_g1

0x9cdc,	// (0x0001f3b9) list_double2_graphic_pane_g2_ParamLimits

0x9cdc,	// (0x0001f3b9) list_double2_graphic_pane_g2

0x9ce8,	// (0x0001f3c5) list_double2_graphic_pane_g3_ParamLimits

0x9ce8,	// (0x0001f3c5) list_double2_graphic_pane_g3

0x0002,

0xf5e9,	// (0x00024cc6) list_double2_graphic_pane_g_ParamLimits

0xf5e9,	// (0x00024cc6) list_double2_graphic_pane_g

0x9cf4,	// (0x0001f3d1) list_double2_graphic_pane_t1_ParamLimits

0x9cf4,	// (0x0001f3d1) list_double2_graphic_pane_t1

0x9d0a,	// (0x0001f3e7) list_double2_graphic_pane_t2_ParamLimits

0x9d0a,	// (0x0001f3e7) list_double2_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00024ccd) list_double2_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00024ccd) list_double2_graphic_pane_t

0x9d1c,	// (0x0001f3f9) list_double_large_graphic_pane_g1_ParamLimits

0x9d1c,	// (0x0001f3f9) list_double_large_graphic_pane_g1

0x9d3b,	// (0x0001f418) list_double_large_graphic_pane_g2_ParamLimits

0x9d3b,	// (0x0001f418) list_double_large_graphic_pane_g2

0xc82d,	// (0x00021f0a) list_double_large_graphic_pane_g3_ParamLimits

0xc82d,	// (0x00021f0a) list_double_large_graphic_pane_g3

0x9d4c,	// (0x0001f429) list_double_large_graphic_pane_g4_ParamLimits

0x9d4c,	// (0x0001f429) list_double_large_graphic_pane_g4

0x0004,

0xf5f5,	// (0x00024cd2) list_double_large_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00024cd2) list_double_large_graphic_pane_g

0x9d5e,	// (0x0001f43b) list_double_large_graphic_pane_t1_ParamLimits

0x9d5e,	// (0x0001f43b) list_double_large_graphic_pane_t1

0x9d77,	// (0x0001f454) list_double_large_graphic_pane_t2_ParamLimits

0x9d77,	// (0x0001f454) list_double_large_graphic_pane_t2

0x0001,

0xf600,	// (0x00024cdd) list_double_large_graphic_pane_t_ParamLimits

0xf600,	// (0x00024cdd) list_double_large_graphic_pane_t

0x9d89,	// (0x0001f466) list_double2_large_graphic_pane_g1_ParamLimits

0x9d89,	// (0x0001f466) list_double2_large_graphic_pane_g1

0x9d95,	// (0x0001f472) list_double2_large_graphic_pane_g2_ParamLimits

0x9d95,	// (0x0001f472) list_double2_large_graphic_pane_g2

0x9ce8,	// (0x0001f3c5) list_double2_large_graphic_pane_g3_ParamLimits

0x9ce8,	// (0x0001f3c5) list_double2_large_graphic_pane_g3

0x0002,

0xf605,	// (0x00024ce2) list_double2_large_graphic_pane_g_ParamLimits

0xf605,	// (0x00024ce2) list_double2_large_graphic_pane_g

0x9da6,	// (0x0001f483) list_double2_large_graphic_pane_t1_ParamLimits

0x9da6,	// (0x0001f483) list_double2_large_graphic_pane_t1

0x9dbc,	// (0x0001f499) list_double2_large_graphic_pane_t2_ParamLimits

0x9dbc,	// (0x0001f499) list_double2_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00024ce9) list_double2_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00024ce9) list_double2_large_graphic_pane_t

0x9dce,	// (0x0001f4ab) list_double_heading_pane_g1_ParamLimits

0x9dce,	// (0x0001f4ab) list_double_heading_pane_g1

0x9ddf,	// (0x0001f4bc) list_double_heading_pane_g2_ParamLimits

0x9ddf,	// (0x0001f4bc) list_double_heading_pane_g2

0x0001,

0xf611,	// (0x00024cee) list_double_heading_pane_g_ParamLimits

0xf611,	// (0x00024cee) list_double_heading_pane_g

0x9deb,	// (0x0001f4c8) list_double_heading_pane_t1_ParamLimits

0x9deb,	// (0x0001f4c8) list_double_heading_pane_t1

0x9d0a,	// (0x0001f3e7) list_double_heading_pane_t2_ParamLimits

0x9d0a,	// (0x0001f3e7) list_double_heading_pane_t2

0x0001,

0xf616,	// (0x00024cf3) list_double_heading_pane_t_ParamLimits

0xf616,	// (0x00024cf3) list_double_heading_pane_t

0x9e01,	// (0x0001f4de) list_double_graphic_heading_pane_g1_ParamLimits

0x9e01,	// (0x0001f4de) list_double_graphic_heading_pane_g1

0x9dce,	// (0x0001f4ab) list_double_graphic_heading_pane_g2_ParamLimits

0x9dce,	// (0x0001f4ab) list_double_graphic_heading_pane_g2

0x9ddf,	// (0x0001f4bc) list_double_graphic_heading_pane_g3_ParamLimits

0x9ddf,	// (0x0001f4bc) list_double_graphic_heading_pane_g3

0x0002,

0xf61b,	// (0x00024cf8) list_double_graphic_heading_pane_g_ParamLimits

0xf61b,	// (0x00024cf8) list_double_graphic_heading_pane_g

0x9deb,	// (0x0001f4c8) list_double_graphic_heading_pane_t1_ParamLimits

0x9deb,	// (0x0001f4c8) list_double_graphic_heading_pane_t1

0x9d0a,	// (0x0001f3e7) list_double_graphic_heading_pane_t2_ParamLimits

0x9d0a,	// (0x0001f3e7) list_double_graphic_heading_pane_t2

0x0001,

0xf616,	// (0x00024cf3) list_double_graphic_heading_pane_t_ParamLimits

0xf616,	// (0x00024cf3) list_double_graphic_heading_pane_t

0x9d3b,	// (0x0001f418) list_double_time_pane_g1_ParamLimits

0x9d3b,	// (0x0001f418) list_double_time_pane_g1

0xc82d,	// (0x00021f0a) list_double_time_pane_g2_ParamLimits

0xc82d,	// (0x00021f0a) list_double_time_pane_g2

0x0001,

0xf622,	// (0x00024cff) list_double_time_pane_g_ParamLimits

0xf622,	// (0x00024cff) list_double_time_pane_g

0x9e0d,	// (0x0001f4ea) list_double_time_pane_t1_ParamLimits

0x9e0d,	// (0x0001f4ea) list_double_time_pane_t1

0x9e23,	// (0x0001f500) list_double_time_pane_t2_ParamLimits

0x9e23,	// (0x0001f500) list_double_time_pane_t2

0x9e35,	// (0x0001f512) list_double_time_pane_t3_ParamLimits

0x9e35,	// (0x0001f512) list_double_time_pane_t3

0x9e47,	// (0x0001f524) list_double_time_pane_t4_ParamLimits

0x9e47,	// (0x0001f524) list_double_time_pane_t4

0x0003,

0xf627,	// (0x00024d04) list_double_time_pane_t_ParamLimits

0xf627,	// (0x00024d04) list_double_time_pane_t

0x9cdc,	// (0x0001f3b9) list_setting_pane_g1_ParamLimits

0x9cdc,	// (0x0001f3b9) list_setting_pane_g1

0x9ce8,	// (0x0001f3c5) list_setting_pane_g2_ParamLimits

0x9ce8,	// (0x0001f3c5) list_setting_pane_g2

0x0001,

0xf630,	// (0x00024d0d) list_setting_pane_g_ParamLimits

0xf630,	// (0x00024d0d) list_setting_pane_g

0x9e59,	// (0x0001f536) list_setting_pane_t1_ParamLimits

0x9e59,	// (0x0001f536) list_setting_pane_t1

0x9e70,	// (0x0001f54d) list_setting_pane_t2_ParamLimits

0x9e70,	// (0x0001f54d) list_setting_pane_t2

0x0002,

0xf635,	// (0x00024d12) list_setting_pane_t_ParamLimits

0xf635,	// (0x00024d12) list_setting_pane_t

0x9eaf,	// (0x0001f58c) set_value_pane_cp_ParamLimits

0x9eaf,	// (0x0001f58c) set_value_pane_cp

0x9cdc,	// (0x0001f3b9) list_setting_number_pane_g1_ParamLimits

0x9cdc,	// (0x0001f3b9) list_setting_number_pane_g1

0x9ce8,	// (0x0001f3c5) list_setting_number_pane_g2_ParamLimits

0x9ce8,	// (0x0001f3c5) list_setting_number_pane_g2

0x0001,

0xf630,	// (0x00024d0d) list_setting_number_pane_g_ParamLimits

0xf630,	// (0x00024d0d) list_setting_number_pane_g

0x9ebb,	// (0x0001f598) list_setting_number_pane_t1_ParamLimits

0x9ebb,	// (0x0001f598) list_setting_number_pane_t1

0x9ecf,	// (0x0001f5ac) list_setting_number_pane_t2_ParamLimits

0x9ecf,	// (0x0001f5ac) list_setting_number_pane_t2

0x9ee6,	// (0x0001f5c3) list_setting_number_pane_t3_ParamLimits

0x9ee6,	// (0x0001f5c3) list_setting_number_pane_t3

0x0003,

0xf63c,	// (0x00024d19) list_setting_number_pane_t_ParamLimits

0xf63c,	// (0x00024d19) list_setting_number_pane_t

0x9eaf,	// (0x0001f58c) set_value_pane_ParamLimits

0x9eaf,	// (0x0001f58c) set_value_pane

0xc84e,	// (0x00021f2b) bg_set_opt_pane_ParamLimits

0xc84e,	// (0x00021f2b) bg_set_opt_pane

0xc86f,	// (0x00021f4c) set_value_pane_t1

0xc87d,	// (0x00021f5a) slider_set_pane_cp3

0x9f29,	// (0x0001f606) volume_small_pane_cp

0xc886,	// (0x00021f63) list_form_gen_pane

0xc88f,	// (0x00021f6c) scroll_pane_cp8

0x9f32,	// (0x0001f60f) form_field_data_pane_ParamLimits

0x9f32,	// (0x0001f60f) form_field_data_pane

0x9f49,	// (0x0001f626) form_field_data_wide_pane_ParamLimits

0x9f49,	// (0x0001f626) form_field_data_wide_pane

0x9f69,	// (0x0001f646) form_field_popup_pane_ParamLimits

0x9f69,	// (0x0001f646) form_field_popup_pane

0x9f89,	// (0x0001f666) form_field_popup_wide_pane_ParamLimits

0x9f89,	// (0x0001f666) form_field_popup_wide_pane

0xc8b0,	// (0x00021f8d) form_field_slider_pane_ParamLimits

0xc8b0,	// (0x00021f8d) form_field_slider_pane

0x9fa0,	// (0x0001f67d) form_field_slider_wide_pane_ParamLimits

0x9fa0,	// (0x0001f67d) form_field_slider_wide_pane

0xc8c3,	// (0x00021fa0) data_form_pane

0x9fbd,	// (0x0001f69a) form_field_data_pane_t1

0xc8cf,	// (0x00021fac) input_focus_pane

0xc8dd,	// (0x00021fba) data_form_wide_pane

0xc91a,	// (0x00021ff7) form_field_data_wide_pane_t1

0xc759,	// (0x00021e36) input_focus_pane_cp6

0x9fd7,	// (0x0001f6b4) form_field_popup_pane_t1

0xc8cf,	// (0x00021fac) input_focus_pane_cp7

0xc93c,	// (0x00022019) list_form_pane

0xc950,	// (0x0002202d) form_field_popup_wide_pane_t1

0xc8cf,	// (0x00021fac) input_focus_pane_cp8

0xc965,	// (0x00022042) list_form_wide_pane

0x9ff9,	// (0x0001f6d6) form_field_slider_pane_t1_ParamLimits

0x9ff9,	// (0x0001f6d6) form_field_slider_pane_t1

0xa011,	// (0x0001f6ee) form_field_slider_pane_t2_ParamLimits

0xa011,	// (0x0001f6ee) form_field_slider_pane_t2

0x0001,

0xf64c,	// (0x00024d29) form_field_slider_pane_t_ParamLimits

0xf64c,	// (0x00024d29) form_field_slider_pane_t

0xc487,	// (0x00021b64) input_focus_pane_cp9_ParamLimits

0xc487,	// (0x00021b64) input_focus_pane_cp9

0xa026,	// (0x0001f703) slider_cont_pane_ParamLimits

0xa026,	// (0x0001f703) slider_cont_pane

0xc971,	// (0x0002204e) form_field_slider_wide_pane_t1_ParamLimits

0xc971,	// (0x0002204e) form_field_slider_wide_pane_t1

0xc983,	// (0x00022060) form_field_slider_wide_pane_t2_ParamLimits

0xc983,	// (0x00022060) form_field_slider_wide_pane_t2

0x0001,

0xf651,	// (0x00024d2e) form_field_slider_wide_pane_t_ParamLimits

0xf651,	// (0x00024d2e) form_field_slider_wide_pane_t

0xc487,	// (0x00021b64) input_focus_pane_cp10_ParamLimits

0xc487,	// (0x00021b64) input_focus_pane_cp10

0xa03a,	// (0x0001f717) slider_cont_pane_cp1_ParamLimits

0xa03a,	// (0x0001f717) slider_cont_pane_cp1

0xa04e,	// (0x0001f72b) slider_form_pane_cp

0xc995,	// (0x00022072) input_focus_pane_g1

0xc99d,	// (0x0002207a) input_focus_pane_g2

0xc9a5,	// (0x00022082) input_focus_pane_g3

0xc9ad,	// (0x0002208a) input_focus_pane_g4

0xc9b5,	// (0x00022092) input_focus_pane_g5

0xc9bd,	// (0x0002209a) input_focus_pane_g6

0xc9c5,	// (0x000220a2) input_focus_pane_g7

0xc9cd,	// (0x000220aa) input_focus_pane_g8

0xc9d5,	// (0x000220b2) input_focus_pane_g9

0xc42f,	// (0x00021b0c) input_focus_pane_g10

0x0009,

0xf656,	// (0x00024d33) input_focus_pane_g

0x181a,	// (0x00016ef7) wait_border_pane_g3_copy1

0xa056,	// (0x0001f733) data_form_pane_t1

0xc42f,	// (0x00021b0c) wait_anim_pane_g1_copy1

0xb31d,	// (0x000209fa) data_form_wide_pane_t1

0xa070,	// (0x0001f74d) list_form_graphic_pane_cp_ParamLimits

0xa070,	// (0x0001f74d) list_form_graphic_pane_cp

0x270b,	// (0x00017de8) slider_form_pane_g1

0x2714,	// (0x00017df1) slider_form_pane_g2

0x0006,

0xf954,	// (0x00025031) slider_form_pane_g

0xa082,	// (0x0001f75f) list_form_graphic_pane_ParamLimits

0xa082,	// (0x0001f75f) list_form_graphic_pane

0xa095,	// (0x0001f772) list_form_graphic_pane_g1

0xa09d,	// (0x0001f77a) list_form_graphic_pane_t1_ParamLimits

0xa09d,	// (0x0001f77a) list_form_graphic_pane_t1

0xc495,	// (0x00021b72) list_highlight_pane_cp5_ParamLimits

0xc495,	// (0x00021b72) list_highlight_pane_cp5

0xa0b2,	// (0x0001f78f) find_pane_g1

0xc9dd,	// (0x000220ba) input_find_pane

0xa0bb,	// (0x0001f798) input_find_pane_g1_ParamLimits

0xa0bb,	// (0x0001f798) input_find_pane_g1

0xa0c7,	// (0x0001f7a4) input_find_pane_t1_ParamLimits

0xa0c7,	// (0x0001f7a4) input_find_pane_t1

0xa0dc,	// (0x0001f7b9) input_find_pane_t2_ParamLimits

0xa0dc,	// (0x0001f7b9) input_find_pane_t2

0x0001,

0xf66b,	// (0x00024d48) input_find_pane_t_ParamLimits

0xf66b,	// (0x00024d48) input_find_pane_t

0xc9e6,	// (0x000220c3) input_focus_pane_cp5_ParamLimits

0xc9e6,	// (0x000220c3) input_focus_pane_cp5

0xc9f9,	// (0x000220d6) bg_popup_window_pane_cp2_ParamLimits

0xc9f9,	// (0x000220d6) bg_popup_window_pane_cp2

0xca06,	// (0x000220e3) listscroll_menu_pane_ParamLimits

0xca06,	// (0x000220e3) listscroll_menu_pane

0xa0fd,	// (0x0001f7da) popup_submenu_window_ParamLimits

0xa0fd,	// (0x0001f7da) popup_submenu_window

0xca12,	// (0x000220ef) find_popup_pane_g1

0xa125,	// (0x0001f802) input_popup_find_pane_cp

0xca1a,	// (0x000220f7) input_focus_pane_cp4_ParamLimits

0xca1a,	// (0x000220f7) input_focus_pane_cp4

0xca28,	// (0x00022105) input_popup_find_pane_t1_ParamLimits

0xca28,	// (0x00022105) input_popup_find_pane_t1

0xc439,	// (0x00021b16) bg_popup_sub_pane_cp

0xca56,	// (0x00022133) listscroll_popup_sub_pane

0xca5e,	// (0x0002213b) list_submenu_pane_ParamLimits

0xca5e,	// (0x0002213b) list_submenu_pane

0xca6f,	// (0x0002214c) scroll_pane_cp4

0xa13d,	// (0x0001f81a) list_single_popup_submenu_pane_ParamLimits

0xa13d,	// (0x0001f81a) list_single_popup_submenu_pane

0xa151,	// (0x0001f82e) list_single_popup_submenu_pane_g1

0xa159,	// (0x0001f836) list_single_popup_submenu_pane_t1_ParamLimits

0xa159,	// (0x0001f836) list_single_popup_submenu_pane_t1

0xc487,	// (0x00021b64) bg_active_tab_pane_cp1_ParamLimits

0xc487,	// (0x00021b64) bg_active_tab_pane_cp1

0xca77,	// (0x00022154) tabs_2_active_pane_g1

0xa16e,	// (0x0001f84b) tabs_2_active_pane_t1

0xc487,	// (0x00021b64) bg_passive_tab_pane_cp1_ParamLimits

0xc487,	// (0x00021b64) bg_passive_tab_pane_cp1

0xca77,	// (0x00022154) tabs_2_passive_pane_g1

0xa16e,	// (0x0001f84b) tabs_2_passive_pane_t1

0xc495,	// (0x00021b72) bg_active_tab_pane_cp4

0xa180,	// (0x0001f85d) tabs_2_long_active_pane_t1

0xca7f,	// (0x0002215c) bg_passive_tab_pane_cp4

0xe850,	// (0x00023f2d) list_single_midp_graphic_pane_g4_ParamLimits

0xc495,	// (0x00021b72) bg_active_tab_pane_cp5

0xa193,	// (0x0001f870) tabs_3_long_active_pane_t1

0xca7f,	// (0x0002215c) bg_passive_tab_pane_cp5

0xe850,	// (0x00023f2d) list_single_midp_graphic_pane_g4

0xc495,	// (0x00021b72) bg_popup_window_pane_cp13_ParamLimits

0xc495,	// (0x00021b72) bg_popup_window_pane_cp13

0xca8b,	// (0x00022168) listscroll_popup_fast_pane_ParamLimits

0xca8b,	// (0x00022168) listscroll_popup_fast_pane

0xca97,	// (0x00022174) grid_popup_fast_pane_ParamLimits

0xca97,	// (0x00022174) grid_popup_fast_pane

0xcaa9,	// (0x00022186) scroll_pane_cp9_ParamLimits

0xcaa9,	// (0x00022186) scroll_pane_cp9

0x4673,	// (0x00019d50) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4673,	// (0x00019d50) list_single_graphic_hl_pane_t1_cp2

0xcabc,	// (0x00022199) input_focus_pane_cp20_ParamLimits

0xcabc,	// (0x00022199) input_focus_pane_cp20

0xcaca,	// (0x000221a7) query_popup_data_pane_t1_ParamLimits

0xcaca,	// (0x000221a7) query_popup_data_pane_t1

0xcadd,	// (0x000221ba) query_popup_data_pane_t2_ParamLimits

0xcadd,	// (0x000221ba) query_popup_data_pane_t2

0xcb23,	// (0x00022200) query_popup_data_pane_t3_ParamLimits

0xcb23,	// (0x00022200) query_popup_data_pane_t3

0xcb64,	// (0x00022241) query_popup_data_pane_t4_ParamLimits

0xcb64,	// (0x00022241) query_popup_data_pane_t4

0xcba0,	// (0x0002227d) query_popup_data_pane_t5_ParamLimits

0xcba0,	// (0x0002227d) query_popup_data_pane_t5

0x0004,

0xf670,	// (0x00024d4d) query_popup_data_pane_t_ParamLimits

0xf670,	// (0x00024d4d) query_popup_data_pane_t

0xc995,	// (0x00022072) bg_set_opt_pane_g1

0xc99d,	// (0x0002207a) bg_set_opt_pane_g2

0xc9a5,	// (0x00022082) bg_set_opt_pane_g3

0xc9ad,	// (0x0002208a) bg_set_opt_pane_g4

0xc9b5,	// (0x00022092) bg_set_opt_pane_g5

0xc9bd,	// (0x0002209a) bg_set_opt_pane_g6

0xc9c5,	// (0x000220a2) bg_set_opt_pane_g7

0xc9cd,	// (0x000220aa) bg_set_opt_pane_g8

0xc9d5,	// (0x000220b2) bg_set_opt_pane_g9

0x0008,

0xf67b,	// (0x00024d58) bg_set_opt_pane_g

0xe50f,	// (0x00023bec) control_top_pane_stacon_ParamLimits

0xe50f,	// (0x00023bec) control_top_pane_stacon

0xe562,	// (0x00023c3f) signal_pane_stacon_ParamLimits

0xe562,	// (0x00023c3f) signal_pane_stacon

0xcf2c,	// (0x00022609) stacon_top_pane_g1_ParamLimits

0xcf2c,	// (0x00022609) stacon_top_pane_g1

0xe587,	// (0x00023c64) title_pane_stacon_ParamLimits

0xe587,	// (0x00023c64) title_pane_stacon

0xe5b1,	// (0x00023c8e) uni_indicator_pane_stacon_ParamLimits

0xe5b1,	// (0x00023c8e) uni_indicator_pane_stacon

0xe5c6,	// (0x00023ca3) battery_pane_stacon_ParamLimits

0xe5c6,	// (0x00023ca3) battery_pane_stacon

0xe60a,	// (0x00023ce7) control_bottom_pane_stacon_ParamLimits

0xe60a,	// (0x00023ce7) control_bottom_pane_stacon

0xe62d,	// (0x00023d0a) navi_pane_stacon_ParamLimits

0xe62d,	// (0x00023d0a) navi_pane_stacon

0xcf4e,	// (0x0002262b) stacon_bottom_pane_g1_ParamLimits

0xcf4e,	// (0x0002262b) stacon_bottom_pane_g1

0xe2d2,	// (0x000239af) aid_levels_signal_lsc_ParamLimits

0xe2d2,	// (0x000239af) aid_levels_signal_lsc

0xe2e8,	// (0x000239c5) signal_pane_stacon_g1_ParamLimits

0xe2e8,	// (0x000239c5) signal_pane_stacon_g1

0xe2fc,	// (0x000239d9) signal_pane_stacon_g2_ParamLimits

0xe2fc,	// (0x000239d9) signal_pane_stacon_g2

0x0001,

0xf68e,	// (0x00024d6b) signal_pane_stacon_g_ParamLimits

0xf68e,	// (0x00024d6b) signal_pane_stacon_g

0xe331,	// (0x00023a0e) title_pane_stacon_t1_ParamLimits

0xe331,	// (0x00023a0e) title_pane_stacon_t1

0xcbe4,	// (0x000222c1) uni_indicator_pane_stacon_g1

0xcbee,	// (0x000222cb) uni_indicator_pane_stacon_g2

0xcbf8,	// (0x000222d5) uni_indicator_pane_stacon_g3

0xcc02,	// (0x000222df) uni_indicator_pane_stacon_g4

0x0003,

0xf69a,	// (0x00024d77) uni_indicator_pane_stacon_g

0xe356,	// (0x00023a33) control_top_pane_stacon_g1

0xe35e,	// (0x00023a3b) control_top_pane_stacon_t1_ParamLimits

0xe35e,	// (0x00023a3b) control_top_pane_stacon_t1

0xe395,	// (0x00023a72) aid_levels_battery_lsc_ParamLimits

0xe395,	// (0x00023a72) aid_levels_battery_lsc

0xe3ac,	// (0x00023a89) battery_pane_stacon_g1_ParamLimits

0xe3ac,	// (0x00023a89) battery_pane_stacon_g1

0xe3bf,	// (0x00023a9c) battery_pane_stacon_g2_ParamLimits

0xe3bf,	// (0x00023a9c) battery_pane_stacon_g2

0x0001,

0xf6a3,	// (0x00024d80) battery_pane_stacon_g_ParamLimits

0xf6a3,	// (0x00024d80) battery_pane_stacon_g

0xe3fd,	// (0x00023ada) navi_icon_pane_stacon

0xe411,	// (0x00023aee) navi_navi_pane_stacon

0xe3fd,	// (0x00023ada) navi_text_pane_stacon

0xe356,	// (0x00023a33) control_bottom_pane_stacon_g1

0xe425,	// (0x00023b02) control_bottom_pane_stacon_t1_ParamLimits

0xe425,	// (0x00023b02) control_bottom_pane_stacon_t1

0xa1bf,	// (0x0001f89c) grid_app_pane_ParamLimits

0xa1bf,	// (0x0001f89c) grid_app_pane

0xa1f7,	// (0x0001f8d4) scroll_pane_cp15_ParamLimits

0xa1f7,	// (0x0001f8d4) scroll_pane_cp15

0xa20c,	// (0x0001f8e9) cell_app_pane_ParamLimits

0xa20c,	// (0x0001f8e9) cell_app_pane

0xa251,	// (0x0001f92e) cell_app_pane_g1_ParamLimits

0xa251,	// (0x0001f92e) cell_app_pane_g1

0xcc26,	// (0x00022303) cell_app_pane_g2_ParamLimits

0xcc26,	// (0x00022303) cell_app_pane_g2

0x0001,

0xf6a8,	// (0x00024d85) cell_app_pane_g_ParamLimits

0xf6a8,	// (0x00024d85) cell_app_pane_g

0xa275,	// (0x0001f952) cell_app_pane_t1_ParamLimits

0xa275,	// (0x0001f952) cell_app_pane_t1

0xcc32,	// (0x0002230f) grid_highlight_pane_ParamLimits

0xcc32,	// (0x0002230f) grid_highlight_pane

0xc995,	// (0x00022072) cell_highlight_pane_g1

0xc99d,	// (0x0002207a) cell_highlight_pane_g2

0xc9a5,	// (0x00022082) cell_highlight_pane_g3

0xc9ad,	// (0x0002208a) cell_highlight_pane_g4

0xc9b5,	// (0x00022092) cell_highlight_pane_g5

0xc9bd,	// (0x0002209a) cell_highlight_pane_g6

0xc9c5,	// (0x000220a2) cell_highlight_pane_g7

0xc9cd,	// (0x000220aa) cell_highlight_pane_g8

0xc9d5,	// (0x000220b2) cell_highlight_pane_g9

0xc42f,	// (0x00021b0c) cell_highlight_pane_g10

0x0009,

0xf656,	// (0x00024d33) cell_highlight_pane_g

0xcc43,	// (0x00022320) bg_scroll_pane

0x82da,	// (0x0001d9b7) scroll_handle_pane

0xcc8a,	// (0x00022367) scroll_bg_pane_g1

0xcc9f,	// (0x0002237c) scroll_bg_pane_g2

0xccb7,	// (0x00022394) scroll_bg_pane_g3

0x0002,

0xf6ad,	// (0x00024d8a) scroll_bg_pane_g

0xa28c,	// (0x0001f969) scroll_handle_focus_pane_ParamLimits

0xa28c,	// (0x0001f969) scroll_handle_focus_pane

0xcc8a,	// (0x00022367) scroll_handle_pane_g1

0xcccc,	// (0x000223a9) scroll_handle_pane_g2

0xccb7,	// (0x00022394) scroll_handle_pane_g3

0x0002,

0xf6b4,	// (0x00024d91) scroll_handle_pane_g

0xca1a,	// (0x000220f7) bg_popup_sub_pane_cp21_ParamLimits

0xca1a,	// (0x000220f7) bg_popup_sub_pane_cp21

0xa299,	// (0x0001f976) popup_fep_japan_predictive_window_t1_ParamLimits

0xa299,	// (0x0001f976) popup_fep_japan_predictive_window_t1

0xa2b0,	// (0x0001f98d) popup_fep_japan_predictive_window_t2_ParamLimits

0xa2b0,	// (0x0001f98d) popup_fep_japan_predictive_window_t2

0xa2e3,	// (0x0001f9c0) popup_fep_japan_predictive_window_t3_ParamLimits

0xa2e3,	// (0x0001f9c0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bb,	// (0x00024d98) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bb,	// (0x00024d98) popup_fep_japan_predictive_window_t

0xc439,	// (0x00021b16) bg_popup_sub_pane_cp23

0xa31a,	// (0x0001f9f7) listscroll_japin_cand_pane

0xcce0,	// (0x000223bd) popup_fep_japan_candidate_window_t1

0xccee,	// (0x000223cb) candidate_pane_ParamLimits

0xccee,	// (0x000223cb) candidate_pane

0xa322,	// (0x0001f9ff) scroll_pane_cp30

0xcd00,	// (0x000223dd) list_single_popup_jap_candidate_pane_ParamLimits

0xcd00,	// (0x000223dd) list_single_popup_jap_candidate_pane

0xc439,	// (0x00021b16) list_highlight_pane_cp30

0xcd15,	// (0x000223f2) list_single_popup_jap_candidate_pane_t1

0xcd24,	// (0x00022401) level_1_signal

0xcd31,	// (0x0002240e) level_2_signal

0xcd3e,	// (0x0002241b) level_3_signal

0xcd4b,	// (0x00022428) level_4_signal

0xcd58,	// (0x00022435) level_5_signal

0xcd65,	// (0x00022442) level_6_signal

0xcd72,	// (0x0002244f) level_7_signal

0xcd24,	// (0x00022401) level_1_battery

0xcd31,	// (0x0002240e) level_2_battery

0xcd3e,	// (0x0002241b) level_3_battery

0xcd4b,	// (0x00022428) level_4_battery

0xcd58,	// (0x00022435) level_5_battery

0xcd65,	// (0x00022442) level_6_battery

0xcd72,	// (0x0002244f) level_7_battery

0xcd97,	// (0x00022474) list_menu_pane_ParamLimits

0xcd97,	// (0x00022474) list_menu_pane

0xcdad,	// (0x0002248a) scroll_pane_cp25_ParamLimits

0xcdad,	// (0x0002248a) scroll_pane_cp25

0xa32a,	// (0x0001fa07) list_double2_graphic_pane_cp2_ParamLimits

0xa32a,	// (0x0001fa07) list_double2_graphic_pane_cp2

0xa32a,	// (0x0001fa07) list_double2_large_graphic_pane_cp2_ParamLimits

0xa32a,	// (0x0001fa07) list_double2_large_graphic_pane_cp2

0xa32a,	// (0x0001fa07) list_double2_pane_cp2_ParamLimits

0xa32a,	// (0x0001fa07) list_double2_pane_cp2

0xa32a,	// (0x0001fa07) list_double_graphic_pane_cp2_ParamLimits

0xa32a,	// (0x0001fa07) list_double_graphic_pane_cp2

0xa32a,	// (0x0001fa07) list_double_large_graphic_pane_cp2_ParamLimits

0xa32a,	// (0x0001fa07) list_double_large_graphic_pane_cp2

0xa32a,	// (0x0001fa07) list_double_number_pane_cp2_ParamLimits

0xa32a,	// (0x0001fa07) list_double_number_pane_cp2

0xa32a,	// (0x0001fa07) list_double_pane_cp2_ParamLimits

0xa32a,	// (0x0001fa07) list_double_pane_cp2

0xa339,	// (0x0001fa16) list_single_2graphic_pane_cp2_ParamLimits

0xa339,	// (0x0001fa16) list_single_2graphic_pane_cp2

0xa339,	// (0x0001fa16) list_single_graphic_heading_pane_cp2_ParamLimits

0xa339,	// (0x0001fa16) list_single_graphic_heading_pane_cp2

0xa339,	// (0x0001fa16) list_single_graphic_pane_cp2_ParamLimits

0xa339,	// (0x0001fa16) list_single_graphic_pane_cp2

0xa339,	// (0x0001fa16) list_single_heading_pane_cp2_ParamLimits

0xa339,	// (0x0001fa16) list_single_heading_pane_cp2

0xcdd6,	// (0x000224b3) list_single_large_graphic_pane_cp2_ParamLimits

0xcdd6,	// (0x000224b3) list_single_large_graphic_pane_cp2

0xa339,	// (0x0001fa16) list_single_number_heading_pane_cp2_ParamLimits

0xa339,	// (0x0001fa16) list_single_number_heading_pane_cp2

0xa339,	// (0x0001fa16) list_single_number_pane_cp2_ParamLimits

0xa339,	// (0x0001fa16) list_single_number_pane_cp2

0xa34b,	// (0x0001fa28) list_single_pane_cp2_ParamLimits

0xa34b,	// (0x0001fa28) list_single_pane_cp2

0xcdf0,	// (0x000224cd) bg_popup_sub_pane_cp22

0xe4f5,	// (0x00023bd2) popup_side_volume_key_window_g1

0xe501,	// (0x00023bde) popup_side_volume_key_window_t1

0x8329,	// (0x0001da06) volume_small_pane_cp1

0xc487,	// (0x00021b64) bg_popup_sub_pane_cp24_ParamLimits

0xc487,	// (0x00021b64) bg_popup_sub_pane_cp24

0xce06,	// (0x000224e3) fep_china_uni_candidate_pane_ParamLimits

0xce06,	// (0x000224e3) fep_china_uni_candidate_pane

0xce1a,	// (0x000224f7) fep_china_uni_entry_pane

0xce2a,	// (0x00022507) popup_fep_china_uni_window_g1

0xa3d8,	// (0x0001fab5) fep_china_uni_entry_pane_g1

0xa3e0,	// (0x0001fabd) fep_china_uni_entry_pane_g2

0x0001,

0xf6ec,	// (0x00024dc9) fep_china_uni_entry_pane_g

0xce46,	// (0x00022523) fep_entry_item_pane

0xce50,	// (0x0002252d) fep_candidate_item_pane

0xa3e8,	// (0x0001fac5) fep_china_uni_candidate_pane_g1

0xce58,	// (0x00022535) fep_china_uni_candidate_pane_g2

0xce60,	// (0x0002253d) fep_china_uni_candidate_pane_g3

0xa3f0,	// (0x0001facd) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f1,	// (0x00024dce) fep_china_uni_candidate_pane_g

0xc42f,	// (0x00021b0c) fep_entry_item_pane_g1

0xce68,	// (0x00022545) fep_entry_item_pane_t1_ParamLimits

0xce68,	// (0x00022545) fep_entry_item_pane_t1

0xce7e,	// (0x0002255b) fep_candidate_item_pane_t1_ParamLimits

0xce7e,	// (0x0002255b) fep_candidate_item_pane_t1

0xce93,	// (0x00022570) fep_candidate_item_pane_t2_ParamLimits

0xce93,	// (0x00022570) fep_candidate_item_pane_t2

0x0001,

0xf6fa,	// (0x00024dd7) fep_candidate_item_pane_t_ParamLimits

0xf6fa,	// (0x00024dd7) fep_candidate_item_pane_t

0xc495,	// (0x00021b72) list_highlight_pane_cp31_ParamLimits

0xc495,	// (0x00021b72) list_highlight_pane_cp31

0xcea5,	// (0x00022582) level_1_signal_lsc

0xceae,	// (0x0002258b) level_2_signal_lsc

0xceb7,	// (0x00022594) level_3_signal_lsc

0xcec0,	// (0x0002259d) level_4_signal_lsc

0xcec9,	// (0x000225a6) level_5_signal_lsc

0xced2,	// (0x000225af) level_6_signal_lsc

0xcedb,	// (0x000225b8) level_7_signal_lsc

0xcedb,	// (0x000225b8) level_1_battery_lsc

0xcee4,	// (0x000225c1) level_2_battery_lsc

0xceed,	// (0x000225ca) level_3_battery_lsc

0xcef6,	// (0x000225d3) level_4_battery_lsc

0xceff,	// (0x000225dc) level_5_battery_lsc

0xcf08,	// (0x000225e5) level_6_battery_lsc

0xcea5,	// (0x00022582) level_7_battery_lsc

0xcf11,	// (0x000225ee) scroll_handle_focus_pane_g1

0xcf1a,	// (0x000225f7) scroll_handle_focus_pane_g2

0xcf23,	// (0x00022600) scroll_handle_focus_pane_g3

0x0002,

0xf6ff,	// (0x00024ddc) scroll_handle_focus_pane_g

0xa3f8,	// (0x0001fad5) list_single_2graphic_pane_g1_ParamLimits

0xa3f8,	// (0x0001fad5) list_single_2graphic_pane_g1

0x9bf3,	// (0x0001f2d0) list_single_2graphic_pane_g2_ParamLimits

0x9bf3,	// (0x0001f2d0) list_single_2graphic_pane_g2

0x1083,	// (0x00016760) list_single_2graphic_pane_g3_ParamLimits

0x1083,	// (0x00016760) list_single_2graphic_pane_g3

0xa404,	// (0x0001fae1) list_single_2graphic_pane_g4_ParamLimits

0xa404,	// (0x0001fae1) list_single_2graphic_pane_g4

0x0003,

0xf706,	// (0x00024de3) list_single_2graphic_pane_g_ParamLimits

0xf706,	// (0x00024de3) list_single_2graphic_pane_g

0xa410,	// (0x0001faed) list_single_2graphic_pane_t1_ParamLimits

0xa410,	// (0x0001faed) list_single_2graphic_pane_t1

0xa43e,	// (0x0001fb1b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa43e,	// (0x0001fb1b) list_double2_graphic_large_graphic_pane_g1

0x9d95,	// (0x0001f472) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9d95,	// (0x0001f472) list_double2_graphic_large_graphic_pane_g2

0x9ce8,	// (0x0001f3c5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9ce8,	// (0x0001f3c5) list_double2_graphic_large_graphic_pane_g3

0xa450,	// (0x0001fb2d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa450,	// (0x0001fb2d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70f,	// (0x00024dec) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70f,	// (0x00024dec) list_double2_graphic_large_graphic_pane_g

0xa45c,	// (0x0001fb39) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa45c,	// (0x0001fb39) list_double2_graphic_large_graphic_pane_t1

0xa472,	// (0x0001fb4f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa472,	// (0x0001fb4f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf718,	// (0x00024df5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf718,	// (0x00024df5) list_double2_graphic_large_graphic_pane_t

0xa4f7,	// (0x0001fbd4) popup_fast_swap_window_ParamLimits

0xa4f7,	// (0x0001fbd4) popup_fast_swap_window

0xa513,	// (0x0001fbf0) popup_side_volume_key_window

0xcfd9,	// (0x000226b6) stacon_top_pane

0xcfe3,	// (0x000226c0) status_pane_ParamLimits

0xcfe3,	// (0x000226c0) status_pane

0xc425,	// (0x00021b02) status_small_pane

0xc439,	// (0x00021b16) control_pane

0xc439,	// (0x00021b16) stacon_bottom_pane

0xc88f,	// (0x00021f6c) scroll_pane_cp121

0xc886,	// (0x00021f63) set_content_pane

0xa484,	// (0x0001fb61) bg_active_tab_pane_g1_cp1

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp1

0xa496,	// (0x0001fb73) bg_active_tab_pane_g3_cp1

0xa484,	// (0x0001fb61) bg_passive_tab_pane_g1_cp1

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp1

0xa496,	// (0x0001fb73) bg_passive_tab_pane_g3_cp1

0xa49f,	// (0x0001fb7c) bg_active_tab_pane_g1_cp2

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp2

0xa4a8,	// (0x0001fb85) bg_active_tab_pane_g3_cp2

0xa49f,	// (0x0001fb7c) bg_passive_tab_pane_g1_cp2

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp2

0xa4a8,	// (0x0001fb85) bg_passive_tab_pane_g3_cp2

0xa4b1,	// (0x0001fb8e) bg_active_tab_pane_g1_cp3

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp3

0xa4ba,	// (0x0001fb97) bg_active_tab_pane_g3_cp3

0xa4b1,	// (0x0001fb8e) bg_passive_tab_pane_g1_cp3

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp3

0xa4ba,	// (0x0001fb97) bg_passive_tab_pane_g3_cp3

0xa4c3,	// (0x0001fba0) bg_active_tab_pane_g1_cp4

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp4

0xa4ce,	// (0x0001fbab) bg_active_tab_pane_g3_cp4

0xa4c3,	// (0x0001fba0) bg_passive_tab_pane_g1_cp4

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp4

0xa4ce,	// (0x0001fbab) bg_passive_tab_pane_g3_cp4

0xa4d9,	// (0x0001fbb6) bg_active_tab_pane_g1_cp5

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp5

0xa4e2,	// (0x0001fbbf) bg_active_tab_pane_g3_cp5

0xa4d9,	// (0x0001fbb6) bg_passive_tab_pane_g1_cp5

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp5

0xa4e2,	// (0x0001fbbf) bg_passive_tab_pane_g3_cp5

0x2e22,	// (0x000184ff) list_set_graphic_pane_ParamLimits

0x2e22,	// (0x000184ff) list_set_graphic_pane

0xc439,	// (0x00021b16) bg_set_opt_pane_cp4

0xcf6a,	// (0x00022647) list_set_graphic_pane_g1_ParamLimits

0xcf6a,	// (0x00022647) list_set_graphic_pane_g1

0xcf76,	// (0x00022653) list_set_graphic_pane_g2_ParamLimits

0xcf76,	// (0x00022653) list_set_graphic_pane_g2

0x0001,

0xf71d,	// (0x00024dfa) list_set_graphic_pane_g_ParamLimits

0xf71d,	// (0x00024dfa) list_set_graphic_pane_g

0x0009,

0xfaae,	// (0x0002518b) volume_small_pane_cp_g

0xa4eb,	// (0x0001fbc8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa4eb,	// (0x0001fbc8) list_double2_large_graphic_pane_g1_cp2

0xcf98,	// (0x00022675) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xcf98,	// (0x00022675) list_double2_large_graphic_pane_g2_cp2

0xcfa9,	// (0x00022686) list_double2_large_graphic_pane_g3_cp2

0xcfb1,	// (0x0002268e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xcfb1,	// (0x0002268e) list_double2_large_graphic_pane_t1_cp2

0xcfc7,	// (0x000226a4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xcfc7,	// (0x000226a4) list_double2_large_graphic_pane_t2_cp2

0xb06c,	// (0x00020749) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb06c,	// (0x00020749) list_double_large_graphic_pane_g1_cp2

0x22dc,	// (0x000179b9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x22dc,	// (0x000179b9) list_double_large_graphic_pane_g2_cp2

0xd0f3,	// (0x000227d0) list_double_large_graphic_pane_g3_cp2

0x22ed,	// (0x000179ca) list_double_large_graphic_pane_g4_cp

0x22f5,	// (0x000179d2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x22f5,	// (0x000179d2) list_double_large_graphic_pane_t1_cp2

0x230c,	// (0x000179e9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x230c,	// (0x000179e9) list_double_large_graphic_pane_t2_cp2

0xcff1,	// (0x000226ce) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcff1,	// (0x000226ce) list_double2_graphic_pane_g1_cp2

0xcfff,	// (0x000226dc) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcfff,	// (0x000226dc) list_double2_graphic_pane_g2_cp2

0xd010,	// (0x000226ed) list_double2_graphic_pane_g3_cp2

0xd01a,	// (0x000226f7) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd01a,	// (0x000226f7) list_double2_graphic_pane_t1_cp2

0xd030,	// (0x0002270d) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd030,	// (0x0002270d) list_double2_graphic_pane_t2_cp2

0xc821,	// (0x00021efe) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc821,	// (0x00021efe) list_single_number_heading_pane_g1_cp2

0xd042,	// (0x0002271f) list_single_number_heading_pane_g2_cp2

0xd04a,	// (0x00022727) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd04a,	// (0x00022727) list_single_number_heading_pane_t1_cp2

0xd060,	// (0x0002273d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd060,	// (0x0002273d) list_single_number_heading_pane_t2_cp2

0xd072,	// (0x0002274f) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd072,	// (0x0002274f) list_single_number_heading_pane_t3_cp2

0xc821,	// (0x00021efe) list_single_heading_pane_g1_cp2_ParamLimits

0xc821,	// (0x00021efe) list_single_heading_pane_g1_cp2

0xd042,	// (0x0002271f) list_single_heading_pane_g2_cp2

0xd04a,	// (0x00022727) list_single_heading_pane_t1_cp2_ParamLimits

0xd04a,	// (0x00022727) list_single_heading_pane_t1_cp2

0x20d5,	// (0x000177b2) list_single_heading_pane_t2_cp2_ParamLimits

0x20d5,	// (0x000177b2) list_single_heading_pane_t2_cp2

0x201d,	// (0x000176fa) list_double_graphic_pane_g1_cp2_ParamLimits

0x201d,	// (0x000176fa) list_double_graphic_pane_g1_cp2

0x2029,	// (0x00017706) list_double_graphic_pane_g2_cp2_ParamLimits

0x2029,	// (0x00017706) list_double_graphic_pane_g2_cp2

0x2038,	// (0x00017715) list_double_graphic_pane_g3_cp2

0x2040,	// (0x0001771d) list_double_graphic_pane_t1_cp2_ParamLimits

0x2040,	// (0x0001771d) list_double_graphic_pane_t1_cp2

0x2056,	// (0x00017733) list_double_graphic_pane_t2_cp2_ParamLimits

0x2056,	// (0x00017733) list_double_graphic_pane_t2_cp2

0xd0e7,	// (0x000227c4) list_double_number_pane_g1_cp2_ParamLimits

0xd0e7,	// (0x000227c4) list_double_number_pane_g1_cp2

0xd0f3,	// (0x000227d0) list_double_number_pane_g2_cp2

0x1fe1,	// (0x000176be) list_double_number_pane_t1_cp2_ParamLimits

0x1fe1,	// (0x000176be) list_double_number_pane_t1_cp2

0x1ff5,	// (0x000176d2) list_double_number_pane_t2_cp2_ParamLimits

0x1ff5,	// (0x000176d2) list_double_number_pane_t2_cp2

0x200b,	// (0x000176e8) list_double_number_pane_t3_cp2_ParamLimits

0x200b,	// (0x000176e8) list_double_number_pane_t3_cp2

0x1eca,	// (0x000175a7) list_single_graphic_pane_g1_cp2_ParamLimits

0x1eca,	// (0x000175a7) list_single_graphic_pane_g1_cp2

0xc815,	// (0x00021ef2) list_single_graphic_pane_g2_cp2_ParamLimits

0xc815,	// (0x00021ef2) list_single_graphic_pane_g2_cp2

0xd150,	// (0x0002282d) list_single_graphic_pane_g3_cp2

0x1ea0,	// (0x0001757d) list_single_graphic_pane_t1_cp2_ParamLimits

0x1ea0,	// (0x0001757d) list_single_graphic_pane_t1_cp2

0xc815,	// (0x00021ef2) list_single_number_pane_g1_cp2_ParamLimits

0xc815,	// (0x00021ef2) list_single_number_pane_g1_cp2

0xd150,	// (0x0002282d) list_single_number_pane_g2_cp2

0x1ea0,	// (0x0001757d) list_single_number_pane_t1_cp2_ParamLimits

0x1ea0,	// (0x0001757d) list_single_number_pane_t1_cp2

0x1eb6,	// (0x00017593) list_single_number_pane_t2_cp2_ParamLimits

0x1eb6,	// (0x00017593) list_single_number_pane_t2_cp2

0xcf98,	// (0x00022675) list_double2_pane_g1_cp2_ParamLimits

0xcf98,	// (0x00022675) list_double2_pane_g1_cp2

0xcfa9,	// (0x00022686) list_double2_pane_g2_cp2

0xd0bf,	// (0x0002279c) list_double2_pane_t1_cp2_ParamLimits

0xd0bf,	// (0x0002279c) list_double2_pane_t1_cp2

0xd0d5,	// (0x000227b2) list_double2_pane_t2_cp2_ParamLimits

0xd0d5,	// (0x000227b2) list_double2_pane_t2_cp2

0xd0e7,	// (0x000227c4) list_double_pane_g1_cp2_ParamLimits

0xd0e7,	// (0x000227c4) list_double_pane_g1_cp2

0xd0f3,	// (0x000227d0) list_double_pane_g2_cp2

0xd0fb,	// (0x000227d8) list_double_pane_t1_cp2_ParamLimits

0xd0fb,	// (0x000227d8) list_double_pane_t1_cp2

0xd111,	// (0x000227ee) list_double_pane_t2_cp2_ParamLimits

0xd111,	// (0x000227ee) list_double_pane_t2_cp2

0xa52d,	// (0x0001fc0a) list_single_pane_cp2_g3

0xc815,	// (0x00021ef2) list_single_pane_g1_cp2_ParamLimits

0xc815,	// (0x00021ef2) list_single_pane_g1_cp2

0xd150,	// (0x0002282d) list_single_pane_g2_cp2

0xd158,	// (0x00022835) list_single_pane_t1_cp2_ParamLimits

0xd158,	// (0x00022835) list_single_pane_t1_cp2

0xa535,	// (0x0001fc12) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa535,	// (0x0001fc12) list_single_large_graphic_pane_g1_cp2

0xd170,	// (0x0002284d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd170,	// (0x0002284d) list_single_large_graphic_pane_g2_cp2

0xd17c,	// (0x00022859) list_single_large_graphic_pane_g3_cp2

0xa541,	// (0x0001fc1e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa541,	// (0x0001fc1e) list_single_large_graphic_pane_g4_cp1

0xd184,	// (0x00022861) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd184,	// (0x00022861) list_single_large_graphic_pane_t1_cp2

0x1e6c,	// (0x00017549) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1e6c,	// (0x00017549) list_single_graphic_heading_pane_g1_cp2

0x1e39,	// (0x00017516) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x1e39,	// (0x00017516) list_single_graphic_heading_pane_g4_cp2

0xd150,	// (0x0002282d) list_single_graphic_heading_pane_g5_cp2

0x1e78,	// (0x00017555) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1e78,	// (0x00017555) list_single_graphic_heading_pane_t1_cp2

0x1e8e,	// (0x0001756b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x1e8e,	// (0x0001756b) list_single_graphic_heading_pane_t2_cp2

0x1e2d,	// (0x0001750a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1e2d,	// (0x0001750a) list_single_2graphic_pane_g1_cp2

0x1e39,	// (0x00017516) list_single_2graphic_pane_g2_cp2_ParamLimits

0x1e39,	// (0x00017516) list_single_2graphic_pane_g2_cp2

0xd150,	// (0x0002282d) list_single_2graphic_pane_g3_cp2

0x1e4a,	// (0x00017527) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1e4a,	// (0x00017527) list_single_2graphic_pane_g4_cp2

0x1e56,	// (0x00017533) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1e56,	// (0x00017533) list_single_2graphic_pane_t1_cp2

0xc42f,	// (0x00021b0c) list_highlight_pane_g10_cp1

0x1a15,	// (0x000170f2) list_highlight_pane_g1_cp1

0x1a1d,	// (0x000170fa) list_highlight_pane_g2_cp1

0x1a25,	// (0x00017102) list_highlight_pane_g3_cp1

0x1a2d,	// (0x0001710a) list_highlight_pane_g4_cp1

0x1a35,	// (0x00017112) list_highlight_pane_g5_cp1

0x1a3d,	// (0x0001711a) list_highlight_pane_g6_cp1

0x1a45,	// (0x00017122) list_highlight_pane_g7_cp1

0x1a4d,	// (0x0001712a) list_highlight_pane_g8_cp1

0x1a55,	// (0x00017132) list_highlight_pane_g9_cp1

0xae01,	// (0x000204de) form_field_slider_pane_t3

0xae0f,	// (0x000204ec) form_field_slider_pane_t4

0x1959,	// (0x00017036) slider_form_pane_ParamLimits

0x1959,	// (0x00017036) slider_form_pane

0xc439,	// (0x00021b16) control_abbreviations

0xc439,	// (0x00021b16) control_conventions

0xc439,	// (0x00021b16) control_definitions

0xc439,	// (0x00021b16) format_table_attribute

0xb043,	// (0x00020720) bg_popup_preview_window_pane_g9

0xc439,	// (0x00021b16) format_table_data2

0xc439,	// (0x00021b16) format_table_data3

0xc439,	// (0x00021b16) format_table_data_example

0x0008,

0xc439,	// (0x00021b16) intro_purpose

0xf8b4,	// (0x00024f91) bg_popup_preview_window_pane_g

0xc439,	// (0x00021b16) texts_category

0xc439,	// (0x00021b16) texts_graphics

0xd19a,	// (0x00022877) text_digital

0xd1a9,	// (0x00022886) text_primary

0xd1b8,	// (0x00022895) text_primary_small

0xd1c7,	// (0x000228a4) text_secondary

0xd1d6,	// (0x000228b3) text_title

0xb3fc,	// (0x00020ad9) bg_passive_tab_pane_g1_cp3_srt

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp3_srt

0xb405,	// (0x00020ae2) bg_passive_tab_pane_g3_cp3_srt

0xc487,	// (0x00021b64) bg_active_tab_pane_cp3_srt_ParamLimits

0xc487,	// (0x00021b64) bg_active_tab_pane_cp3_srt

0xb40e,	// (0x00020aeb) tabs_4_active_pane_srt_g1

0xb416,	// (0x00020af3) tabs_4_active_pane_srt_t1_ParamLimits

0xb416,	// (0x00020af3) tabs_4_active_pane_srt_t1

0xb3fc,	// (0x00020ad9) bg_active_tab_pane_g1_cp3_copy1

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp3_copy1

0xb405,	// (0x00020ae2) bg_active_tab_pane_g3_cp3_copy1

0xc495,	// (0x00021b72) tabs_2_long_active_pane_srt_ParamLimits

0xc495,	// (0x00021b72) tabs_2_long_active_pane_srt

0xc495,	// (0x00021b72) tabs_2_long_passive_pane_srt_ParamLimits

0xc495,	// (0x00021b72) tabs_2_long_passive_pane_srt

0xca7f,	// (0x0002215c) bg_passive_tab_pane_cp4_srt_ParamLimits

0xca7f,	// (0x0002215c) bg_passive_tab_pane_cp4_srt

0xb16d,	// (0x0002084a) bg_passive_tab_pane_g1_cp4_srt

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp4_srt

0xb176,	// (0x00020853) bg_passive_tab_pane_g3_cp4_srt

0xc495,	// (0x00021b72) bg_active_tab_pane_cp4_srt_ParamLimits

0xc495,	// (0x00021b72) bg_active_tab_pane_cp4_srt

0xb17f,	// (0x0002085c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb17f,	// (0x0002085c) tabs_2_long_active_pane_srt_t1

0xb16d,	// (0x0002084a) bg_active_tab_pane_g1_cp4_srt

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp4_srt

0xb176,	// (0x00020853) bg_active_tab_pane_g3_cp4_srt

0xc487,	// (0x00021b64) tabs_3_long_active_pane_srt_ParamLimits

0xc487,	// (0x00021b64) tabs_3_long_active_pane_srt

0xc487,	// (0x00021b64) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc487,	// (0x00021b64) tabs_3_long_passive_pane_cp_srt

0xc487,	// (0x00021b64) tabs_3_long_passive_pane_srt_ParamLimits

0xc487,	// (0x00021b64) tabs_3_long_passive_pane_srt

0xca7f,	// (0x0002215c) bg_passive_tab_pane_cp5_srt_ParamLimits

0xca7f,	// (0x0002215c) bg_passive_tab_pane_cp5_srt

0xa4d9,	// (0x0001fbb6) bg_passive_tab_pane_g1_cp5_srt

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp5_srt

0xa4e2,	// (0x0001fbbf) bg_passive_tab_pane_g3_cp5_srt

0xc495,	// (0x00021b72) bg_active_tab_pane_cp5_srt_ParamLimits

0xc495,	// (0x00021b72) bg_active_tab_pane_cp5_srt

0xb157,	// (0x00020834) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb157,	// (0x00020834) tabs_3_long_active_pane_srt_t1

0xa4d9,	// (0x0001fbb6) bg_active_tab_pane_g1_cp5_srt

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp5_srt

0xa4e2,	// (0x0001fbbf) bg_active_tab_pane_g3_cp5_srt

0x2522,	// (0x00017bff) navi_text_pane_srt_t1

0x251a,	// (0x00017bf7) navi_icon_pane_srt_g1

0xd2c1,	// (0x0002299e) midp_editing_number_pane_srt

0xd1e5,	// (0x000228c2) midp_ticker_pane_srt

0xd2c9,	// (0x000229a6) midp_ticker_pane_srt_g1

0xd2d1,	// (0x000229ae) midp_ticker_pane_srt_g2

0x0001,

0xf73c,	// (0x00024e19) midp_ticker_pane_srt_g

0xd2d9,	// (0x000229b6) midp_ticker_pane_srt_t1

0x250b,	// (0x00017be8) midp_editing_number_pane_t1_copy1

0xa55b,	// (0x0001fc38) listscroll_midp_pane

0xa55b,	// (0x0001fc38) midp_form_pane

0xa5c6,	// (0x0001fca3) midp_info_popup_window_ParamLimits

0xa5c6,	// (0x0001fca3) midp_info_popup_window

0xca1a,	// (0x000220f7) bg_popup_sub_pane_cp50_ParamLimits

0xca1a,	// (0x000220f7) bg_popup_sub_pane_cp50

0x1649,	// (0x00016d26) listscroll_midp_info_pane_ParamLimits

0x1649,	// (0x00016d26) listscroll_midp_info_pane

0x1629,	// (0x00016d06) listscroll_form_midp_pane_ParamLimits

0x1629,	// (0x00016d06) listscroll_form_midp_pane

0x1635,	// (0x00016d12) scroll_bar_cp050

0x1629,	// (0x00016d06) list_midp_pane

0xb5a4,	// (0x00020c81) signal_pane_g2_cp

0x1543,	// (0x00016c20) listscroll_midp_info_pane_t1_ParamLimits

0x1543,	// (0x00016c20) listscroll_midp_info_pane_t1

0xac3b,	// (0x00020318) listscroll_midp_info_pane_t2_ParamLimits

0xac3b,	// (0x00020318) listscroll_midp_info_pane_t2

0xac79,	// (0x00020356) listscroll_midp_info_pane_t3_ParamLimits

0xac79,	// (0x00020356) listscroll_midp_info_pane_t3

0xacb3,	// (0x00020390) listscroll_midp_info_pane_t4_ParamLimits

0xacb3,	// (0x00020390) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x00024ecc) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x00024ecc) listscroll_midp_info_pane_t

0xca6f,	// (0x0002214c) scroll_pane_cp21

0x14e3,	// (0x00016bc0) form_midp_field_choice_group_pane

0xabfe,	// (0x000202db) form_midp_field_text_pane

0x1529,	// (0x00016c06) form_midp_field_time_pane

0x1531,	// (0x00016c0e) form_midp_gauge_slider_pane

0x153a,	// (0x00016c17) form_midp_gauge_wait_pane

0xc439,	// (0x00021b16) form_midp_image_pane

0xabe7,	// (0x000202c4) list_single_midp_pane_ParamLimits

0xabe7,	// (0x000202c4) list_single_midp_pane

0xabc5,	// (0x000202a2) form_midp_field_text_pane_t1

0x1221,	// (0x000168fe) input_focus_pane_cp050

0x14a0,	// (0x00016b7d) list_midp_form_text_pane

0x1435,	// (0x00016b12) form_midp_field_choice_group_pane_t1

0x1443,	// (0x00016b20) input_focus_pane_cp051

0x1457,	// (0x00016b34) list_midp_choice_pane

0xc439,	// (0x00021b16) status_idle_pane

0x1419,	// (0x00016af6) form_midp_field_time_pane_t1

0xc42f,	// (0x00021b0c) wait_anim_pane_g2_copy1

0x1427,	// (0x00016b04) form_midp_field_time_pane_t2

0x0001,

0xd245,	// (0x00022922) aid_navinavi_width_2_pane

0xf7ea,	// (0x00024ec7) form_midp_field_time_pane_t

0xc439,	// (0x00021b16) input_focus_pane_cp052

0xc439,	// (0x00021b16) bg_input_focus_pane_cp040

0x13d9,	// (0x00016ab6) form_midp_gauge_slider_pane_t1

0x13e7,	// (0x00016ac4) form_midp_gauge_slider_pane_t2

0xaba9,	// (0x00020286) form_midp_gauge_slider_pane_t3

0xabb7,	// (0x00020294) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x00024ebe) form_midp_gauge_slider_pane_t

0x1411,	// (0x00016aee) form_midp_slider_pane

0xc495,	// (0x00021b72) bg_input_focus_pane_cp041_ParamLimits

0xc495,	// (0x00021b72) bg_input_focus_pane_cp041

0x13a6,	// (0x00016a83) form_midp_gauge_wait_pane_t1_ParamLimits

0x13a6,	// (0x00016a83) form_midp_gauge_wait_pane_t1

0x13b8,	// (0x00016a95) form_midp_gauge_wait_pane_t2_ParamLimits

0x13b8,	// (0x00016a95) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x00024eb9) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x00024eb9) form_midp_gauge_wait_pane_t

0x13ca,	// (0x00016aa7) form_midp_wait_pane_ParamLimits

0x13ca,	// (0x00016aa7) form_midp_wait_pane

0xab73,	// (0x00020250) form_midp_image_pane_g1

0xab7c,	// (0x00020259) form_midp_image_pane_t1

0xab8b,	// (0x00020268) form_midp_image_pane_t2

0xab9a,	// (0x00020277) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x00024eb2) form_midp_image_pane_t

0x1358,	// (0x00016a35) list_single_midp_pane_g1

0x1361,	// (0x00016a3e) list_single_midp_pane_t1

0xab5e,	// (0x0002023b) list_midp_form_item_pane_ParamLimits

0xab5e,	// (0x0002023b) list_midp_form_item_pane

0xd1ed,	// (0x000228ca) list_midp_form_item_pane_t1

0xd1fc,	// (0x000228d9) midp_ticker_pane_g1

0xd208,	// (0x000228e5) midp_ticker_pane_g2

0x0001,

0xf722,	// (0x00024dff) midp_ticker_pane_g

0xd214,	// (0x000228f1) midp_ticker_pane_t1

0x2775,	// (0x00017e52) midp_editing_number_pane_t1

0x2753,	// (0x00017e30) midp_editing_number_pane

0x2762,	// (0x00017e3f) midp_ticker_pane

0x1655,	// (0x00016d32) ai_message_heading_pane

0xc439,	// (0x00021b16) bg_popup_window_pane_cp14

0x165d,	// (0x00016d3a) listscroll_ai_message_pane

0x2483,	// (0x00017b60) ai_message_heading_pane_g1_ParamLimits

0x2483,	// (0x00017b60) ai_message_heading_pane_g1

0xb10d,	// (0x000207ea) ai_message_heading_pane_g2_ParamLimits

0xb10d,	// (0x000207ea) ai_message_heading_pane_g2

0x249b,	// (0x00017b78) ai_message_heading_pane_g3_ParamLimits

0x249b,	// (0x00017b78) ai_message_heading_pane_g3

0x24a7,	// (0x00017b84) ai_message_heading_pane_g4_ParamLimits

0x24a7,	// (0x00017b84) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x00024ff3) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x00024ff3) ai_message_heading_pane_g

0xb119,	// (0x000207f6) ai_message_heading_pane_t1_ParamLimits

0xb119,	// (0x000207f6) ai_message_heading_pane_t1

0xb133,	// (0x00020810) ai_message_heading_pane_t2_ParamLimits

0xb133,	// (0x00020810) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x00024ffc) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x00024ffc) ai_message_heading_pane_t

0x24df,	// (0x00017bbc) bg_popup_heading_pane_cp1_ParamLimits

0x24df,	// (0x00017bbc) bg_popup_heading_pane_cp1

0x2471,	// (0x00017b4e) list_ai_message_pane_ParamLimits

0x2471,	// (0x00017b4e) list_ai_message_pane

0xca6f,	// (0x0002214c) scroll_pane_cp10

0x240d,	// (0x00017aea) list_ai_message_pane_g1

0x2415,	// (0x00017af2) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x00024fd0) list_ai_message_pane_g

0x241d,	// (0x00017afa) list_ai_message_pane_t1_ParamLimits

0x241d,	// (0x00017afa) list_ai_message_pane_t1

0x2432,	// (0x00017b0f) list_ai_message_pane_t2_ParamLimits

0x2432,	// (0x00017b0f) list_ai_message_pane_t2

0x2447,	// (0x00017b24) list_ai_message_pane_t3_ParamLimits

0x2447,	// (0x00017b24) list_ai_message_pane_t3

0x245c,	// (0x00017b39) list_ai_message_pane_t4_ParamLimits

0x245c,	// (0x00017b39) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x00024fd5) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x00024fd5) list_ai_message_pane_t

0xb0e9,	// (0x000207c6) cell_ai_soft_ind_pane_ParamLimits

0xb0e9,	// (0x000207c6) cell_ai_soft_ind_pane

0xd226,	// (0x00022903) cell_ai_soft_ind_pane_g1_ParamLimits

0xd226,	// (0x00022903) cell_ai_soft_ind_pane_g1

0xc439,	// (0x00021b16) grid_highlight_cp1

0xd233,	// (0x00022910) text_secondary_cp56_ParamLimits

0xd233,	// (0x00022910) text_secondary_cp56

0x23cd,	// (0x00017aaa) example_general_pane_ParamLimits

0x23cd,	// (0x00017aaa) example_general_pane

0x23d9,	// (0x00017ab6) example_parent_pane_g1_ParamLimits

0x23d9,	// (0x00017ab6) example_parent_pane_g1

0x23e5,	// (0x00017ac2) example_parent_pane_t1_ParamLimits

0x23e5,	// (0x00017ac2) example_parent_pane_t1

0x88d6,	// (0x0001dfb3) popup_preview_text_window_ParamLimits

0x88d6,	// (0x0001dfb3) popup_preview_text_window

0xd148,	// (0x00022825) list_single_pane_cp2_g4

0xc681,	// (0x00021d5e) bg_popup_preview_window_pane_ParamLimits

0xc681,	// (0x00021d5e) bg_popup_preview_window_pane

0xb04b,	// (0x00020728) popup_preview_text_window_t1_ParamLimits

0xb04b,	// (0x00020728) popup_preview_text_window_t1

0x2145,	// (0x00017822) popup_preview_text_window_t2_ParamLimits

0x2145,	// (0x00017822) popup_preview_text_window_t2

0x218e,	// (0x0001786b) popup_preview_text_window_t3_ParamLimits

0x218e,	// (0x0001786b) popup_preview_text_window_t3

0x21d3,	// (0x000178b0) popup_preview_text_window_t4_ParamLimits

0x21d3,	// (0x000178b0) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x00024fa4) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x00024fa4) popup_preview_text_window_t

0x2251,	// (0x0001792e) scroll_pane_cp11

0x1101,	// (0x000167de) bg_popup_preview_window_pane_g1

0xb00b,	// (0x000206e8) bg_popup_preview_window_pane_g2

0xb013,	// (0x000206f0) bg_popup_preview_window_pane_g3

0xb01b,	// (0x000206f8) bg_popup_preview_window_pane_g4

0xb023,	// (0x00020700) bg_popup_preview_window_pane_g5

0xb02b,	// (0x00020708) bg_popup_preview_window_pane_g6

0xb033,	// (0x00020710) bg_popup_preview_window_pane_g7

0xb03b,	// (0x00020718) bg_popup_preview_window_pane_g8

0xe294,	// (0x00023971) aid_popup_width_pane

0x8852,	// (0x0001df2f) popup_midp_note_alarm_window_ParamLimits

0x8852,	// (0x0001df2f) popup_midp_note_alarm_window

0xc8c3,	// (0x00021fa0) data_form_pane_ParamLimits

0x9fb3,	// (0x0001f690) form_field_data_pane_g1

0x9fbd,	// (0x0001f69a) form_field_data_pane_t1_ParamLimits

0xc8cf,	// (0x00021fac) input_focus_pane_ParamLimits

0xc8dd,	// (0x00021fba) data_form_wide_pane_ParamLimits

0xc8ee,	// (0x00021fcb) form_field_data_wide_pane_g1

0xc91a,	// (0x00021ff7) form_field_data_wide_pane_t1_ParamLimits

0xc759,	// (0x00021e36) input_focus_pane_cp6_ParamLimits

0xa12f,	// (0x0001f80c) input_popup_find_pane_g1_ParamLimits

0xa12f,	// (0x0001f80c) input_popup_find_pane_g1

0xe3d0,	// (0x00023aad) aid_navi_side_left_pane

0xe3e5,	// (0x00023ac2) aid_navi_side_right_pane

0x1b10,	// (0x000171ed) bg_popup_window_pane_cp30_ParamLimits

0x1b10,	// (0x000171ed) bg_popup_window_pane_cp30

0x1b8a,	// (0x00017267) popup_midp_note_alarm_window_g1_ParamLimits

0x1b8a,	// (0x00017267) popup_midp_note_alarm_window_g1

0x1bba,	// (0x00017297) popup_midp_note_alarm_window_t1_ParamLimits

0x1bba,	// (0x00017297) popup_midp_note_alarm_window_t1

0xae54,	// (0x00020531) popup_midp_note_alarm_window_t2_ParamLimits

0xae54,	// (0x00020531) popup_midp_note_alarm_window_t2

0xaf02,	// (0x000205df) popup_midp_note_alarm_window_t3_ParamLimits

0xaf02,	// (0x000205df) popup_midp_note_alarm_window_t3

0xaf2a,	// (0x00020607) popup_midp_note_alarm_window_t4_ParamLimits

0xaf2a,	// (0x00020607) popup_midp_note_alarm_window_t4

0x1d51,	// (0x0001742e) popup_midp_note_alarm_window_t5_ParamLimits

0x1d51,	// (0x0001742e) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x00024f41) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x00024f41) popup_midp_note_alarm_window_t

0x1dfd,	// (0x000174da) wait_bar_pane_cp1_ParamLimits

0x1dfd,	// (0x000174da) wait_bar_pane_cp1

0xc439,	// (0x00021b16) wait_anim_pane_copy1

0xc439,	// (0x00021b16) wait_border_pane_copy1

0x1806,	// (0x00016ee3) wait_border_pane_g1_copy1

0xc934,	// (0x00022011) form_field_popup_pane_g1

0x9fd7,	// (0x0001f6b4) form_field_popup_pane_t1_ParamLimits

0xc8cf,	// (0x00021fac) input_focus_pane_cp7_ParamLimits

0xc93c,	// (0x00022019) list_form_pane_ParamLimits

0xc948,	// (0x00022025) form_field_popup_wide_pane_g1

0xc950,	// (0x0002202d) form_field_popup_wide_pane_t1_ParamLimits

0xc8cf,	// (0x00021fac) input_focus_pane_cp8_ParamLimits

0xc965,	// (0x00022042) list_form_wide_pane_ParamLimits

0x29c0,	// (0x0001809d) aid_size_cell_graphic_pane

0xa056,	// (0x0001f733) data_form_pane_t1_ParamLimits

0xb31d,	// (0x000209fa) data_form_wide_pane_t1_ParamLimits

0xa7cf,	// (0x0001feac) bg_status_flat_pane

0x962f,	// (0x0001ed0c) title_pane_t1_ParamLimits

0xc44f,	// (0x00021b2c) title_pane_t2_ParamLimits

0xc475,	// (0x00021b52) title_pane_t3_ParamLimits

0xf530,	// (0x00024c0d) title_pane_t_ParamLimits

0xcd24,	// (0x00022401) level_1_signal_ParamLimits

0xcd31,	// (0x0002240e) level_2_signal_ParamLimits

0xcd3e,	// (0x0002241b) level_3_signal_ParamLimits

0xcd4b,	// (0x00022428) level_4_signal_ParamLimits

0xcd58,	// (0x00022435) level_5_signal_ParamLimits

0xcd65,	// (0x00022442) level_6_signal_ParamLimits

0xcd72,	// (0x0002244f) level_7_signal_ParamLimits

0xcd24,	// (0x00022401) level_1_battery_ParamLimits

0xcd31,	// (0x0002240e) level_2_battery_ParamLimits

0xcd3e,	// (0x0002241b) level_3_battery_ParamLimits

0xcd4b,	// (0x00022428) level_4_battery_ParamLimits

0xcd58,	// (0x00022435) level_5_battery_ParamLimits

0xcd65,	// (0x00022442) level_6_battery_ParamLimits

0xcd72,	// (0x0002244f) level_7_battery_ParamLimits

0x1a15,	// (0x000170f2) bg_status_flat_pane_g1

0x1a1d,	// (0x000170fa) bg_status_flat_pane_g2

0x1a25,	// (0x00017102) bg_status_flat_pane_g3

0x1a2d,	// (0x0001710a) bg_status_flat_pane_g4

0x1a35,	// (0x00017112) bg_status_flat_pane_g5

0x1a3d,	// (0x0001711a) bg_status_flat_pane_g6

0x1a45,	// (0x00017122) bg_status_flat_pane_g7

0x96c3,	// (0x0001eda0) tabs_3_active_pane_t1_ParamLimits

0x96c3,	// (0x0001eda0) tabs_3_passive_pane_t1_ParamLimits

0x96dd,	// (0x0001edba) tabs_4_active_pane_t1_ParamLimits

0x96dd,	// (0x0001edba) tabs_4_1_passive_pane_t1_ParamLimits

0xa16e,	// (0x0001f84b) tabs_2_active_pane_t1_ParamLimits

0xa16e,	// (0x0001f84b) tabs_2_passive_pane_t1_ParamLimits

0xc495,	// (0x00021b72) bg_active_tab_pane_cp4_ParamLimits

0xa180,	// (0x0001f85d) tabs_2_long_active_pane_t1_ParamLimits

0xca7f,	// (0x0002215c) bg_passive_tab_pane_cp4_ParamLimits

0xe868,	// (0x00023f45) list_single_midp_graphic_pane_t1_ParamLimits

0xc495,	// (0x00021b72) bg_active_tab_pane_cp5_ParamLimits

0xa193,	// (0x0001f870) tabs_3_long_active_pane_t1_ParamLimits

0xca7f,	// (0x0002215c) bg_passive_tab_pane_cp5_ParamLimits

0xe868,	// (0x00023f45) list_single_midp_graphic_pane_t1

0xa7cf,	// (0x0001feac) bg_status_flat_pane_ParamLimits

0x0d66,	// (0x00016443) indicator_pane_cp2_ParamLimits

0x0d66,	// (0x00016443) indicator_pane_cp2

0xa94d,	// (0x0002002a) navi_pane_srt_ParamLimits

0xa94d,	// (0x0002002a) navi_pane_srt

0x0eb5,	// (0x00016592) popup_clock_digital_analogue_window_cp1

0xc4f3,	// (0x00021bd0) indicator_pane_t1

0xd1e5,	// (0x000228c2) copy_highlight_pane

0xd1e5,	// (0x000228c2) cursor_graphics_pane

0xd1e5,	// (0x000228c2) graphic_within_text_pane

0xd1e5,	// (0x000228c2) link_highlight_pane

0x2214,	// (0x000178f1) popup_preview_text_window_t5_ParamLimits

0x2214,	// (0x000178f1) popup_preview_text_window_t5

0xd24d,	// (0x0002292a) cursor_digital_pane

0xd24d,	// (0x0002292a) cursor_primary_pane

0xd25e,	// (0x0002293b) cursor_primary_small_pane

0xd266,	// (0x00022943) cursor_secondary_pane

0xd26e,	// (0x0002294b) cursor_title_pane

0xd24d,	// (0x0002292a) link_highlight_digital_pane

0xd255,	// (0x00022932) link_highlight_primary_pane

0xd25e,	// (0x0002293b) link_highlight_primary_small_pane

0xd266,	// (0x00022943) link_highlight_secondary_pane

0xd26e,	// (0x0002294b) link_highlight_title_pane

0xd24d,	// (0x0002292a) copy_highlight_digital_pane

0xd24d,	// (0x0002292a) copy_highlight_primary_pane

0xd25e,	// (0x0002293b) copy_highlight_primary_small_pane

0xd266,	// (0x00022943) copy_highlight_secondary_pane

0xd26e,	// (0x0002294b) copy_highlight_title_pane

0xd266,	// (0x00022943) graphic_text_digital_pane

0x1ab3,	// (0x00017190) graphic_text_primary_pane

0x1abc,	// (0x00017199) graphic_text_primary_small_pane

0xd25e,	// (0x0002293b) graphic_text_secondary_pane

0xd24d,	// (0x0002292a) graphic_text_title_pane

0xa617,	// (0x0001fcf4) cursor_primary_pane_g1

0x1aa5,	// (0x00017182) cursor_text_primary_t1

0xae4a,	// (0x00020527) cursor_primary_small_pane_g1

0x1a97,	// (0x00017174) cursor_text_primary_small_t1

0xae40,	// (0x0002051d) cursor_primary_small_pane_g1_copy1

0x1a7f,	// (0x0001715c) cursor_text_primary_small_t1_copy1

0x1a5d,	// (0x0001713a) cursor_text_title_t1

0xae36,	// (0x00020513) cursor_title_pane_g1

0xa617,	// (0x0001fcf4) cursor_digital_pane_g1

0xd276,	// (0x00022953) cursor_text_digital_t1

0xd284,	// (0x00022961) link_highlight_primary_pane_g1

0x1a06,	// (0x000170e3) link_highlight_primary_pane_t1

0xd284,	// (0x00022961) link_highlight_primary_small_pane_g1

0xd28c,	// (0x00022969) link_highlight_primary_small_pane_t1

0xd284,	// (0x00022961) link_highlight_secondary_pane_g1

0xd29b,	// (0x00022978) link_highlight_secondary_pane_t1

0x196b,	// (0x00017048) link_highlight_title_pane_g1

0x1982,	// (0x0001705f) link_highlight_title_pane_t1

0x196b,	// (0x00017048) link_highlight_digital_pane_g1

0x1973,	// (0x00017050) link_highlight_digital_pane_t1

0x1825,	// (0x00016f02) copy_highlight_primary_pane_g1

0x184b,	// (0x00016f28) copy_highlight_primary_pane_t1

0x1825,	// (0x00016f02) copy_highlight_primary_small_pane_g1

0x183c,	// (0x00016f19) copy_highlight_primary_small_pane_t1

0xd2aa,	// (0x00022987) copy_highlight_secondary_pane_g1

0xd2b2,	// (0x0002298f) copy_highlight_secondary_pane_t1

0x1825,	// (0x00016f02) copy_highlight_title_pane_g1

0x182d,	// (0x00016f0a) copy_highlight_title_pane_t1

0x1825,	// (0x00016f02) copy_highlight_digital_pane_g1

0x2b8e,	// (0x0001826b) copy_highlight_digital_pane_t1

0x2ae2,	// (0x000181bf) graphic_text_primary_pane_g1

0x2b72,	// (0x0001824f) graphic_text_primary_pane_t1

0x2b80,	// (0x0001825d) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x00025070) graphic_text_primary_pane_t

0x2b4e,	// (0x0001822b) graphic_text_primary_small_pane_g1

0x2b56,	// (0x00018233) graphic_text_primary_small_pane_t1

0x2b64,	// (0x00018241) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0002506b) graphic_text_primary_small_pane_t

0x2b2a,	// (0x00018207) graphic_text_secondary_pane_g1

0x2b32,	// (0x0001820f) graphic_text_secondary_pane_t1

0x2b40,	// (0x0001821d) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x00025066) graphic_text_secondary_pane_t

0x2b06,	// (0x000181e3) graphic_text_title_pane_g1

0x2b0e,	// (0x000181eb) graphic_text_title_pane_t1

0x2b1c,	// (0x000181f9) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x00025061) graphic_text_title_pane_t

0x2ae2,	// (0x000181bf) graphic_text_digital_pane_g1

0x2aea,	// (0x000181c7) graphic_text_digital_pane_t1

0x2af8,	// (0x000181d5) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0002505c) graphic_text_digital_pane_t

0xc495,	// (0x00021b72) navi_icon_pane_srt_ParamLimits

0xc495,	// (0x00021b72) navi_icon_pane_srt

0xc439,	// (0x00021b16) navi_midp_pane_srt

0xc439,	// (0x00021b16) navi_navi_pane_srt

0xc495,	// (0x00021b72) navi_text_pane_srt_ParamLimits

0xc495,	// (0x00021b72) navi_text_pane_srt

0x2aad,	// (0x0001818a) navi_navi_icon_text_pane_srt

0x2ab5,	// (0x00018192) navi_navi_pane_srt_g1_ParamLimits

0x2ab5,	// (0x00018192) navi_navi_pane_srt_g1

0x2ac7,	// (0x000181a4) navi_navi_pane_srt_g2_ParamLimits

0x2ac7,	// (0x000181a4) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x00025057) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x00025057) navi_navi_pane_srt_g

0x2ad9,	// (0x000181b6) navi_navi_tabs_pane_srt

0x2aad,	// (0x0001818a) navi_navi_text_pane_srt

0x2aad,	// (0x0001818a) navi_navi_volume_pane_srt

0x2a9e,	// (0x0001817b) navi_navi_text_pane_srt_t1

0xea5a,	// (0x00024137) navi_navi_volume_pane_srt_g1

0xea62,	// (0x0002413f) volume_small_pane_srt_ParamLimits

0xea62,	// (0x0002413f) volume_small_pane_srt

0xe650,	// (0x00023d2d) volume_small_pane_srt_g1_ParamLimits

0xe650,	// (0x00023d2d) volume_small_pane_srt_g1

0xe660,	// (0x00023d3d) volume_small_pane_srt_g2_ParamLimits

0xe660,	// (0x00023d3d) volume_small_pane_srt_g2

0xe671,	// (0x00023d4e) volume_small_pane_srt_g3_ParamLimits

0xe671,	// (0x00023d4e) volume_small_pane_srt_g3

0xe682,	// (0x00023d5f) volume_small_pane_srt_g4_ParamLimits

0xe682,	// (0x00023d5f) volume_small_pane_srt_g4

0xe693,	// (0x00023d70) volume_small_pane_srt_g5_ParamLimits

0xe693,	// (0x00023d70) volume_small_pane_srt_g5

0xe6a4,	// (0x00023d81) volume_small_pane_srt_g6_ParamLimits

0xe6a4,	// (0x00023d81) volume_small_pane_srt_g6

0xe6b5,	// (0x00023d92) volume_small_pane_srt_g7_ParamLimits

0xe6b5,	// (0x00023d92) volume_small_pane_srt_g7

0xe6c6,	// (0x00023da3) volume_small_pane_srt_g8_ParamLimits

0xe6c6,	// (0x00023da3) volume_small_pane_srt_g8

0xe6d7,	// (0x00023db4) volume_small_pane_srt_g9_ParamLimits

0xe6d7,	// (0x00023db4) volume_small_pane_srt_g9

0xe6e8,	// (0x00023dc5) volume_small_pane_srt_g10_ParamLimits

0xe6e8,	// (0x00023dc5) volume_small_pane_srt_g10

0x0009,

0xf727,	// (0x00024e04) volume_small_pane_srt_g_ParamLimits

0xf727,	// (0x00024e04) volume_small_pane_srt_g

0x9933,	// (0x0001f010) query_popup_data_pane_cp2

0x2a84,	// (0x00018161) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2a84,	// (0x00018161) navi_navi_icon_text_pane_srt_t1

0x1ab3,	// (0x00017190) navi_tabs_2_long_pane_srt

0x1ab3,	// (0x00017190) navi_tabs_2_pane_srt

0x1ab3,	// (0x00017190) navi_tabs_3_long_pane_srt

0x1ab3,	// (0x00017190) navi_tabs_3_pane_srt

0x1ab3,	// (0x00017190) navi_tabs_4_pane_srt

0x8dd4,	// (0x0001e4b1) tabs_2_active_pane_srt_ParamLimits

0x8dd4,	// (0x0001e4b1) tabs_2_active_pane_srt

0x8de4,	// (0x0001e4c1) tabs_2_passive_pane_srt_ParamLimits

0x8de4,	// (0x0001e4c1) tabs_2_passive_pane_srt

0x1221,	// (0x000168fe) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1221,	// (0x000168fe) bg_passive_tab_pane_cp1_srt

0xb4a3,	// (0x00020b80) bg_passive_tab_pane_g1_cp1_srt

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp1_srt

0xb4ac,	// (0x00020b89) bg_passive_tab_pane_g3_cp1_srt

0xc487,	// (0x00021b64) bg_active_tab_pane_cp1_srt_ParamLimits

0xc487,	// (0x00021b64) bg_active_tab_pane_cp1_srt

0xb4b5,	// (0x00020b92) tabs_2_active_pane_srt_g1

0xb4bd,	// (0x00020b9a) tabs_2_active_pane_srt_t1_ParamLimits

0xb4bd,	// (0x00020b9a) tabs_2_active_pane_srt_t1

0xb4a3,	// (0x00020b80) bg_active_tab_pane_g1_cp1_srt

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp1_srt

0xb4ac,	// (0x00020b89) bg_active_tab_pane_g3_cp1_srt

0x8da1,	// (0x0001e47e) tabs_3_active_pane_srt_ParamLimits

0x8da1,	// (0x0001e47e) tabs_3_active_pane_srt

0x8db2,	// (0x0001e48f) tabs_3_passive_pane_cp_srt_ParamLimits

0x8db2,	// (0x0001e48f) tabs_3_passive_pane_cp_srt

0x8dc3,	// (0x0001e4a0) tabs_3_passive_pane_srt_ParamLimits

0x8dc3,	// (0x0001e4a0) tabs_3_passive_pane_srt

0x1221,	// (0x000168fe) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1221,	// (0x000168fe) bg_passive_tab_pane_cp2_srt

0xa621,	// (0x0001fcfe) bg_passive_tab_pane_g1_cp2_srt

0xa48d,	// (0x0001fb6a) bg_passive_tab_pane_g2_cp2_srt

0xa62a,	// (0x0001fd07) bg_passive_tab_pane_g3_cp2_srt

0xc487,	// (0x00021b64) bg_active_tab_pane_cp2_srt_ParamLimits

0xc487,	// (0x00021b64) bg_active_tab_pane_cp2_srt

0xb485,	// (0x00020b62) tabs_3_active_pane_srt_g1

0xb48d,	// (0x00020b6a) tabs_3_active_pane_srt_t1_ParamLimits

0xb48d,	// (0x00020b6a) tabs_3_active_pane_srt_t1

0xa621,	// (0x0001fcfe) bg_active_tab_pane_g1_cp2_srt

0xa48d,	// (0x0001fb6a) bg_active_tab_pane_g2_cp2_srt

0xa62a,	// (0x0001fd07) bg_active_tab_pane_g3_cp2_srt

0xea12,	// (0x000240ef) tabs_4_active_pane_srt_ParamLimits

0xea12,	// (0x000240ef) tabs_4_active_pane_srt

0xea24,	// (0x00024101) tabs_4_passive_pane_cp2_srt_ParamLimits

0xea24,	// (0x00024101) tabs_4_passive_pane_cp2_srt

0xe708,	// (0x00023de5) aid_size_cell_toolbar

0x25b3,	// (0x00017c90) main_idle_act_pane_ParamLimits

0xe76c,	// (0x00023e49) popup_large_graphic_colour_window_ParamLimits

0x8b88,	// (0x0001e265) popup_toolbar_window_ParamLimits

0x8b88,	// (0x0001e265) popup_toolbar_window

0x27a0,	// (0x00017e7d) list_single_graphic_2heading_pane_ParamLimits

0x27a0,	// (0x00017e7d) list_single_graphic_2heading_pane

0xcc0c,	// (0x000222e9) aid_size_cell_apps_grid_lsc_pane

0xcc1e,	// (0x000222fb) aid_size_cell_apps_grid_prt_pane

0xca7f,	// (0x0002215c) bg_wml_button_pane_cp1_ParamLimits

0xca7f,	// (0x0002215c) bg_wml_button_pane_cp1

0xabc5,	// (0x000202a2) form_midp_field_text_pane_t1_ParamLimits

0x1221,	// (0x000168fe) input_focus_pane_cp050_ParamLimits

0x14a0,	// (0x00016b7d) list_midp_form_text_pane_ParamLimits

0x1443,	// (0x00016b20) input_focus_pane_cp051_ParamLimits

0x1457,	// (0x00016b34) list_midp_choice_pane_ParamLimits

0xab2a,	// (0x00020207) list_single_2graphic_pane_cp3_ParamLimits

0xab2a,	// (0x00020207) list_single_2graphic_pane_cp3

0xab3e,	// (0x0002021b) list_single_midp_graphic_pane_ParamLimits

0xab3e,	// (0x0002021b) list_single_midp_graphic_pane

0xe79a,	// (0x00023e77) list_single_graphic_2heading_pane_g1_ParamLimits

0xe79a,	// (0x00023e77) list_single_graphic_2heading_pane_g1

0xe7a6,	// (0x00023e83) list_single_graphic_2heading_pane_g4_ParamLimits

0xe7a6,	// (0x00023e83) list_single_graphic_2heading_pane_g4

0xe7b2,	// (0x00023e8f) list_single_graphic_2heading_pane_g5_ParamLimits

0xe7b2,	// (0x00023e8f) list_single_graphic_2heading_pane_g5

0x0002,

0xf77a,	// (0x00024e57) list_single_graphic_2heading_pane_g_ParamLimits

0xf77a,	// (0x00024e57) list_single_graphic_2heading_pane_g

0xe7be,	// (0x00023e9b) list_single_graphic_2heading_pane_t1_ParamLimits

0xe7be,	// (0x00023e9b) list_single_graphic_2heading_pane_t1

0xe7d2,	// (0x00023eaf) list_single_graphic_2heading_pane_t2_ParamLimits

0xe7d2,	// (0x00023eaf) list_single_graphic_2heading_pane_t2

0xe7ec,	// (0x00023ec9) list_single_graphic_2heading_pane_t3_ParamLimits

0xe7ec,	// (0x00023ec9) list_single_graphic_2heading_pane_t3

0x0002,

0xf781,	// (0x00024e5e) list_single_graphic_2heading_pane_t_ParamLimits

0xf781,	// (0x00024e5e) list_single_graphic_2heading_pane_t

0x1011,	// (0x000166ee) bg_popup_sub_pane_cp2

0x103b,	// (0x00016718) grid_toobar_pane

0xe804,	// (0x00023ee1) cell_toolbar_pane_ParamLimits

0xe804,	// (0x00023ee1) cell_toolbar_pane

0x10a5,	// (0x00016782) cell_toolbar_pane_g1_ParamLimits

0x10a5,	// (0x00016782) cell_toolbar_pane_g1

0xaaea,	// (0x000201c7) cell_toolbar_pane_g2_ParamLimits

0xaaea,	// (0x000201c7) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x00024e6c) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x00024e6c) cell_toolbar_pane_g

0x10db,	// (0x000167b8) grid_highlight_pane_cp2_ParamLimits

0x10db,	// (0x000167b8) grid_highlight_pane_cp2

0x10f5,	// (0x000167d2) toolbar_button_pane

0x1101,	// (0x000167de) toolbar_button_pane_g1

0x1109,	// (0x000167e6) toolbar_button_pane_g2

0x1111,	// (0x000167ee) toolbar_button_pane_g3

0x1119,	// (0x000167f6) toolbar_button_pane_g4

0x1121,	// (0x000167fe) toolbar_button_pane_g5

0x1129,	// (0x00016806) toolbar_button_pane_g6

0x1131,	// (0x0001680e) toolbar_button_pane_g7

0x1139,	// (0x00016816) toolbar_button_pane_g8

0x1141,	// (0x0001681e) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x00024e71) toolbar_button_pane_g

0xe83c,	// (0x00023f19) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe83c,	// (0x00023f19) list_single_2graphic_pane_g1_cp3

0x8c35,	// (0x0001e312) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8c35,	// (0x0001e312) list_single_2graphic_pane_g2_cp3

0xe848,	// (0x00023f25) list_single_2graphic_pane_g3_cp3

0xe850,	// (0x00023f2d) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe850,	// (0x00023f2d) list_single_2graphic_pane_g4_cp3

0x8c46,	// (0x0001e323) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8c46,	// (0x0001e323) list_single_2graphic_pane_t1_cp3

0xe85c,	// (0x00023f39) list_single_midp_graphic_pane_g2_ParamLimits

0xe85c,	// (0x00023f39) list_single_midp_graphic_pane_g2

0xe710,	// (0x00023ded) aid_zoom_text_primary

0xe718,	// (0x00023df5) aid_zoom_text_secondary

0xd327,	// (0x00022a04) status_small_pane_g7_ParamLimits

0xd327,	// (0x00022a04) status_small_pane_g7

0xa686,	// (0x0001fd63) status_small_pane_t1_ParamLimits

0x960b,	// (0x0001ece8) title_pane_g2

0x0003,

0xf527,	// (0x00024c04) title_pane_g

0x998d,	// (0x0001f06a) aid_size_cell_colour_1_pane_ParamLimits

0x998d,	// (0x0001f06a) aid_size_cell_colour_1_pane

0x99a1,	// (0x0001f07e) aid_size_cell_colour_2_pane_ParamLimits

0x99a1,	// (0x0001f07e) aid_size_cell_colour_2_pane

0x99b5,	// (0x0001f092) aid_size_cell_colour_3_pane_ParamLimits

0x99b5,	// (0x0001f092) aid_size_cell_colour_3_pane

0x99c9,	// (0x0001f0a6) aid_size_cell_colour_4_pane_ParamLimits

0x99c9,	// (0x0001f0a6) aid_size_cell_colour_4_pane

0xe30d,	// (0x000239ea) title_pane_stacon_g1_ParamLimits

0xe30d,	// (0x000239ea) title_pane_stacon_g1

0x18a2,	// (0x00016f7f) popup_note_wait_window_g3_ParamLimits

0x18a2,	// (0x00016f7f) popup_note_wait_window_g3

0x1918,	// (0x00016ff5) popup_note_wait_window_t5_ParamLimits

0x1918,	// (0x00016ff5) popup_note_wait_window_t5

0xc439,	// (0x00021b16) main_feb_china_hwr_fs_writing_pane

0x853c,	// (0x0001dc19) popup_feb_china_hwr_fs_window_ParamLimits

0x853c,	// (0x0001dc19) popup_feb_china_hwr_fs_window

0x8c62,	// (0x0001e33f) aid_size_cell_hwr_fs_ParamLimits

0x8c62,	// (0x0001e33f) aid_size_cell_hwr_fs

0x1221,	// (0x000168fe) bg_popup_sub_pane_cp3_ParamLimits

0x1221,	// (0x000168fe) bg_popup_sub_pane_cp3

0x8c77,	// (0x0001e354) grid_hwr_fs_pane_ParamLimits

0x8c77,	// (0x0001e354) grid_hwr_fs_pane

0xe87e,	// (0x00023f5b) linegrid_hwr_fs_pane_ParamLimits

0xe87e,	// (0x00023f5b) linegrid_hwr_fs_pane

0x8c8f,	// (0x0001e36c) cell_hwr_fs_pane_ParamLimits

0x8c8f,	// (0x0001e36c) cell_hwr_fs_pane

0x122d,	// (0x0001690a) linegrid_hwr_fs_pane_g1_ParamLimits

0x122d,	// (0x0001690a) linegrid_hwr_fs_pane_g1

0xaafe,	// (0x000201db) linegrid_hwr_fs_pane_g2_ParamLimits

0xaafe,	// (0x000201db) linegrid_hwr_fs_pane_g2

0x124b,	// (0x00016928) linegrid_hwr_fs_pane_g3_ParamLimits

0x124b,	// (0x00016928) linegrid_hwr_fs_pane_g3

0x8cb5,	// (0x0001e392) linegrid_hwr_fs_pane_g4_ParamLimits

0x8cb5,	// (0x0001e392) linegrid_hwr_fs_pane_g4

0xe88e,	// (0x00023f6b) linegrid_hwr_fs_pane_g5_ParamLimits

0xe88e,	// (0x00023f6b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x00024e97) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x00024e97) linegrid_hwr_fs_pane_g

0x1257,	// (0x00016934) cell_hwr_fs_pane_g1_ParamLimits

0x1257,	// (0x00016934) cell_hwr_fs_pane_g1

0x0f4b,	// (0x00016628) cell_hwr_fs_pane_g2_ParamLimits

0x0f4b,	// (0x00016628) cell_hwr_fs_pane_g2

0xab10,	// (0x000201ed) cell_hwr_fs_pane_g3_ParamLimits

0xab10,	// (0x000201ed) cell_hwr_fs_pane_g3

0xab1d,	// (0x000201fa) cell_hwr_fs_pane_g4_ParamLimits

0xab1d,	// (0x000201fa) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x00024ea2) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x00024ea2) cell_hwr_fs_pane_g

0x8ccf,	// (0x0001e3ac) cell_hwr_fs_pane_t1

0xc439,	// (0x00021b16) grid_highlight_pane_cp6

0xc439,	// (0x00021b16) main_idle_act2_pane

0xca56,	// (0x00022133) aid_inside_area_popup_secondary

0xaf69,	// (0x00020646) aid_inside_area_window_primary_ParamLimits

0xaf69,	// (0x00020646) aid_inside_area_window_primary

0xb4db,	// (0x00020bb8) ai2_news_ticker_pane

0x2ba5,	// (0x00018282) aid_size_cell_ai1_link_ParamLimits

0x2ba5,	// (0x00018282) aid_size_cell_ai1_link

0xb4e3,	// (0x00020bc0) popup_ai2_data_window_ParamLimits

0xb4e3,	// (0x00020bc0) popup_ai2_data_window

0x2bd5,	// (0x000182b2) popup_ai2_link_window_ParamLimits

0x2bd5,	// (0x000182b2) popup_ai2_link_window

0x1221,	// (0x000168fe) bg_popup_sub_pane_cp4_ParamLimits

0x1221,	// (0x000168fe) bg_popup_sub_pane_cp4

0x2be9,	// (0x000182c6) grid_ai2_link_pane_ParamLimits

0x2be9,	// (0x000182c6) grid_ai2_link_pane

0x2c00,	// (0x000182dd) popup_ai2_link_window_g1_ParamLimits

0x2c00,	// (0x000182dd) popup_ai2_link_window_g1

0x2c0c,	// (0x000182e9) popup_ai2_link_window_g2_ParamLimits

0x2c0c,	// (0x000182e9) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x00025075) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x00025075) popup_ai2_link_window_g

0x2c1b,	// (0x000182f8) ai2_mp_button_pane

0x2c23,	// (0x00018300) ai2_mp_volume_pane

0x1443,	// (0x00016b20) bg_popup_sub_pane_cp5_ParamLimits

0x1443,	// (0x00016b20) bg_popup_sub_pane_cp5

0x2c2b,	// (0x00018308) heading_ai2_gene_pane_ParamLimits

0x2c2b,	// (0x00018308) heading_ai2_gene_pane

0x2c37,	// (0x00018314) list_ai2_gene_pane_ParamLimits

0x2c37,	// (0x00018314) list_ai2_gene_pane

0x2c7f,	// (0x0001835c) cell_ai2_link_pane_ParamLimits

0x2c7f,	// (0x0001835c) cell_ai2_link_pane

0x2c95,	// (0x00018372) cell_ai2_link_pane_g1

0xc439,	// (0x00021b16) grid_highlight_pane_cp7

0xea77,	// (0x00024154) ai2_mp_volume_pane_g1

0x2d65,	// (0x00018442) ai2_mp_volume_pane_g2

0x2cda,	// (0x000183b7) list_ai2_gene_pane_t1

0x2d6d,	// (0x0001844a) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0002508e) ai2_mp_volume_pane_g

0x8df4,	// (0x0001e4d1) volume_small_pane_cp3

0x2d75,	// (0x00018452) aid_size_cell_ai2_button

0x2d7d,	// (0x0001845a) grid_ai2_button_pane

0x2d86,	// (0x00018463) cell_ai2_button_pane_ParamLimits

0x2d86,	// (0x00018463) cell_ai2_button_pane

0xc42f,	// (0x00021b0c) cell_ai2_button_pane_g1

0xc439,	// (0x00021b16) grid_highlight_pane_cp8

0x2d25,	// (0x00018402) ai2_gene_pane_t1_ParamLimits

0x2d25,	// (0x00018402) ai2_gene_pane_t1

0x84a6,	// (0x0001db83) aid_height_parent_landscape

0xb1c9,	// (0x000208a6) aid_height_set_list

0x25b3,	// (0x00017c90) aid_size_parent

0x29c0,	// (0x0001809d) aid_size_cell_graphic_pane_ParamLimits

0x2c47,	// (0x00018324) popup_ai2_data_window_g1_ParamLimits

0x2c47,	// (0x00018324) popup_ai2_data_window_g1

0x2c53,	// (0x00018330) ai2_news_ticker_pane_g1

0x2c5b,	// (0x00018338) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0002507a) ai2_news_ticker_pane_g

0x2c63,	// (0x00018340) ai2_news_ticker_pane_t1

0x2c71,	// (0x0001834e) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0002507f) ai2_news_ticker_pane_t

0x2c9e,	// (0x0001837b) heading_ai2_gene_pane_g1

0x2ca6,	// (0x00018383) heading_ai2_gene_pane_t1_ParamLimits

0x2ca6,	// (0x00018383) heading_ai2_gene_pane_t1

0x2cbb,	// (0x00018398) list_highlight_pane_cp6

0x2cc3,	// (0x000183a0) ai2_gene_pane_ParamLimits

0x2cc3,	// (0x000183a0) ai2_gene_pane

0x2ce8,	// (0x000183c5) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x00025084) list_ai2_gene_pane_t

0x2cf6,	// (0x000183d3) list_highlight_pane_cp8_ParamLimits

0x2cf6,	// (0x000183d3) list_highlight_pane_cp8

0x2d07,	// (0x000183e4) ai2_gene_pane_g1_ParamLimits

0x2d07,	// (0x000183e4) ai2_gene_pane_g1

0x2d19,	// (0x000183f6) ai2_gene_pane_g2_ParamLimits

0x2d19,	// (0x000183f6) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x00025089) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x00025089) ai2_gene_pane_g

0xc804,	// (0x00021ee1) scroll_pane_cp12

0x8463,	// (0x0001db40) control_pane_t3_ParamLimits

0x8463,	// (0x0001db40) control_pane_t3

0xa677,	// (0x0001fd54) status_small_pane_g8_ParamLimits

0xa677,	// (0x0001fd54) status_small_pane_g8

0x85ff,	// (0x0001dcdc) popup_find_window_ParamLimits

0x888c,	// (0x0001df69) popup_note_image_window_ParamLimits

0x1077,	// (0x00016754) list_double2_graphic_pane_vc_g1_ParamLimits

0x1077,	// (0x00016754) list_double2_graphic_pane_vc_g1

0xc815,	// (0x00021ef2) list_double2_graphic_pane_vc_g2_ParamLimits

0xc815,	// (0x00021ef2) list_double2_graphic_pane_vc_g2

0x1083,	// (0x00016760) list_double2_graphic_pane_vc_g3_ParamLimits

0x1083,	// (0x00016760) list_double2_graphic_pane_vc_g3

0x0002,

0xf788,	// (0x00024e65) list_double2_graphic_pane_vc_g_ParamLimits

0xf788,	// (0x00024e65) list_double2_graphic_pane_vc_g

0x108f,	// (0x0001676c) list_double2_graphic_pane_vc_t1_ParamLimits

0x108f,	// (0x0001676c) list_double2_graphic_pane_vc_t1

0xc815,	// (0x00021ef2) list_single_heading_pane_vc_g1_ParamLimits

0xc815,	// (0x00021ef2) list_single_heading_pane_vc_g1

0x1083,	// (0x00016760) list_single_heading_pane_vc_g2_ParamLimits

0x1083,	// (0x00016760) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00024c7e) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00024c7e) list_single_heading_pane_vc_g

0x1149,	// (0x00016826) list_single_heading_pane_vc_t1_ParamLimits

0x1149,	// (0x00016826) list_single_heading_pane_vc_t1

0x115f,	// (0x0001683c) list_single_heading_pane_vc_t2_ParamLimits

0x115f,	// (0x0001683c) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x00024e86) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x00024e86) list_single_heading_pane_vc_t

0x1171,	// (0x0001684e) list_setting_number_pane_vc_g1_ParamLimits

0x1171,	// (0x0001684e) list_setting_number_pane_vc_g1

0x117d,	// (0x0001685a) list_setting_number_pane_vc_g2_ParamLimits

0x117d,	// (0x0001685a) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x00024e8b) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x00024e8b) list_setting_number_pane_vc_g

0x1189,	// (0x00016866) list_setting_number_pane_vc_t1_ParamLimits

0x1189,	// (0x00016866) list_setting_number_pane_vc_t1

0x119d,	// (0x0001687a) list_setting_number_pane_vc_t2_ParamLimits

0x119d,	// (0x0001687a) list_setting_number_pane_vc_t2

0x11b9,	// (0x00016896) list_setting_number_pane_vc_t3_ParamLimits

0x11b9,	// (0x00016896) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x00024e90) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x00024e90) list_setting_number_pane_vc_t

0x11e5,	// (0x000168c2) set_value_pane_vc_ParamLimits

0x11e5,	// (0x000168c2) set_value_pane_vc

0x27a0,	// (0x00017e7d) list_double2_graphic_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_double2_graphic_pane_vc

0x27b3,	// (0x00017e90) list_double2_large_graphic_pane_vc_ParamLimits

0x27b3,	// (0x00017e90) list_double2_large_graphic_pane_vc

0x27a0,	// (0x00017e7d) list_double2_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_double2_pane_vc

0x27a0,	// (0x00017e7d) list_double_graphic_heading_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_double_graphic_heading_pane_vc

0x27a0,	// (0x00017e7d) list_double_graphic_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_double_graphic_pane_vc

0x27a0,	// (0x00017e7d) list_double_heading_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_double_heading_pane_vc

0x27c5,	// (0x00017ea2) list_double_large_graphic_pane_vc_ParamLimits

0x27c5,	// (0x00017ea2) list_double_large_graphic_pane_vc

0x27a0,	// (0x00017e7d) list_double_number_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_double_number_pane_vc

0x27a0,	// (0x00017e7d) list_double_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_double_pane_vc

0x27a0,	// (0x00017e7d) list_double_time_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_double_time_pane_vc

0x27a0,	// (0x00017e7d) list_setting_number_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_setting_number_pane_vc

0x27a0,	// (0x00017e7d) list_setting_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_setting_pane_vc

0x27a0,	// (0x00017e7d) list_single_graphic_heading_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_single_graphic_heading_pane_vc

0x27a0,	// (0x00017e7d) list_single_heading_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_single_heading_pane_vc

0x27a0,	// (0x00017e7d) list_single_number_heading_pane_vc_ParamLimits

0x27a0,	// (0x00017e7d) list_single_number_heading_pane_vc

0x2dba,	// (0x00018497) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2dba,	// (0x00018497) list_double_graphic_heading_pane_vc_g1

0xd3a1,	// (0x00022a7e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd3a1,	// (0x00022a7e) list_double_graphic_heading_pane_vc_g2

0xd3ad,	// (0x00022a8a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd3ad,	// (0x00022a8a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x00025095) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x00025095) list_double_graphic_heading_pane_vc_g

0x2dc6,	// (0x000184a3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2dc6,	// (0x000184a3) list_double_graphic_heading_pane_vc_t1

0x2dda,	// (0x000184b7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2dda,	// (0x000184b7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0002509c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0002509c) list_double_graphic_heading_pane_vc_t

0x1171,	// (0x0001684e) list_setting_pane_vc_g1_ParamLimits

0x1171,	// (0x0001684e) list_setting_pane_vc_g1

0x117d,	// (0x0001685a) list_setting_pane_vc_g2_ParamLimits

0x117d,	// (0x0001685a) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x00024e8b) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x00024e8b) list_setting_pane_vc_g

0x2ff7,	// (0x000186d4) list_setting_pane_vc_t1_ParamLimits

0x2ff7,	// (0x000186d4) list_setting_pane_vc_t1

0x3013,	// (0x000186f0) list_setting_pane_vc_t2_ParamLimits

0x3013,	// (0x000186f0) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x000250df) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x000250df) list_setting_pane_vc_t

0x11e5,	// (0x000168c2) set_value_pane_cp_vc_ParamLimits

0x11e5,	// (0x000168c2) set_value_pane_cp_vc

0xc815,	// (0x00021ef2) list_single_number_heading_pane_vc_g1_ParamLimits

0xc815,	// (0x00021ef2) list_single_number_heading_pane_vc_g1

0x1083,	// (0x00016760) list_single_number_heading_pane_vc_g2_ParamLimits

0x1083,	// (0x00016760) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00024c7e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00024c7e) list_single_number_heading_pane_vc_g

0x302d,	// (0x0001870a) list_single_number_heading_pane_vc_t1_ParamLimits

0x302d,	// (0x0001870a) list_single_number_heading_pane_vc_t1

0x3043,	// (0x00018720) list_single_number_heading_pane_vc_t2_ParamLimits

0x3043,	// (0x00018720) list_single_number_heading_pane_vc_t2

0x3059,	// (0x00018736) list_single_number_heading_pane_vc_t3_ParamLimits

0x3059,	// (0x00018736) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x000250e4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x000250e4) list_single_number_heading_pane_vc_t

0x306b,	// (0x00018748) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x306b,	// (0x00018748) list_single_graphic_heading_pane_vc_g1

0xc815,	// (0x00021ef2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc815,	// (0x00021ef2) list_single_graphic_heading_pane_vc_g4

0x1083,	// (0x00016760) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1083,	// (0x00016760) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x000250eb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x000250eb) list_single_graphic_heading_pane_vc_g

0x302d,	// (0x0001870a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x302d,	// (0x0001870a) list_single_graphic_heading_pane_vc_t1

0x3077,	// (0x00018754) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3077,	// (0x00018754) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x000250f2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x000250f2) list_single_graphic_heading_pane_vc_t

0xc815,	// (0x00021ef2) list_double2_pane_vc_g1_ParamLimits

0xc815,	// (0x00021ef2) list_double2_pane_vc_g1

0x1083,	// (0x00016760) list_double2_pane_vc_g2_ParamLimits

0x1083,	// (0x00016760) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x00024c7e) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x00024c7e) list_double2_pane_vc_g

0x3089,	// (0x00018766) list_double2_pane_vc_t1_ParamLimits

0x3089,	// (0x00018766) list_double2_pane_vc_t1

0x30a1,	// (0x0001877e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x30a1,	// (0x0001877e) list_double2_large_graphic_pane_vc_g1

0x30ad,	// (0x0001878a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x30ad,	// (0x0001878a) list_double2_large_graphic_pane_vc_g2

0x30b9,	// (0x00018796) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x30b9,	// (0x00018796) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x00024c9b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x00024c9b) list_double2_large_graphic_pane_vc_g

0x30c5,	// (0x000187a2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x30c5,	// (0x000187a2) list_double2_large_graphic_pane_vc_t1

0x30db,	// (0x000187b8) list_double_time_pane_vc_g1_ParamLimits

0x30db,	// (0x000187b8) list_double_time_pane_vc_g1

0x30e7,	// (0x000187c4) list_double_time_pane_vc_g2_ParamLimits

0x30e7,	// (0x000187c4) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x000250f7) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x000250f7) list_double_time_pane_vc_g

0x30f3,	// (0x000187d0) list_double_time_pane_vc_t1_ParamLimits

0x30f3,	// (0x000187d0) list_double_time_pane_vc_t1

0x3117,	// (0x000187f4) list_double_time_pane_vc_t2_ParamLimits

0x3117,	// (0x000187f4) list_double_time_pane_vc_t2

0x3141,	// (0x0001881e) list_double_time_pane_vc_t3_ParamLimits

0x3141,	// (0x0001881e) list_double_time_pane_vc_t3

0x3153,	// (0x00018830) list_double_time_pane_vc_t4_ParamLimits

0x3153,	// (0x00018830) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x000250fc) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x000250fc) list_double_time_pane_vc_t

0xc815,	// (0x00021ef2) list_double_pane_vc_g1_ParamLimits

0xc815,	// (0x00021ef2) list_double_pane_vc_g1

0x1083,	// (0x00016760) list_double_pane_vc_g2_ParamLimits

0x1083,	// (0x00016760) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x00024c7e) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x00024c7e) list_double_pane_vc_g

0x3167,	// (0x00018844) list_double_pane_vc_t1_ParamLimits

0x3167,	// (0x00018844) list_double_pane_vc_t1

0x317b,	// (0x00018858) list_double_pane_vc_t2_ParamLimits

0x317b,	// (0x00018858) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x00025105) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x00025105) list_double_pane_vc_t

0xc815,	// (0x00021ef2) list_double_number_pane_vc_g1_ParamLimits

0xc815,	// (0x00021ef2) list_double_number_pane_vc_g1

0x1083,	// (0x00016760) list_double_number_pane_vc_g2_ParamLimits

0x1083,	// (0x00016760) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x00024c7e) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x00024c7e) list_double_number_pane_vc_g

0x3193,	// (0x00018870) list_double_number_pane_vc_t1_ParamLimits

0x3193,	// (0x00018870) list_double_number_pane_vc_t1

0x3167,	// (0x00018844) list_double_number_pane_vc_t2_ParamLimits

0x3167,	// (0x00018844) list_double_number_pane_vc_t2

0x31a5,	// (0x00018882) list_double_number_pane_vc_t3_ParamLimits

0x31a5,	// (0x00018882) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x0002510a) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x0002510a) list_double_number_pane_vc_t

0x31bf,	// (0x0001889c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x31bf,	// (0x0001889c) list_double_large_graphic_pane_vc_g1

0x31db,	// (0x000188b8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x31db,	// (0x000188b8) list_double_large_graphic_pane_vc_g2

0x31ef,	// (0x000188cc) list_double_large_graphic_pane_vc_g3_ParamLimits

0x31ef,	// (0x000188cc) list_double_large_graphic_pane_vc_g3

0x31fe,	// (0x000188db) list_double_large_graphic_pane_vc_g4_ParamLimits

0x31fe,	// (0x000188db) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x00025111) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x00025111) list_double_large_graphic_pane_vc_g

0x320d,	// (0x000188ea) list_double_large_graphic_pane_vc_t1_ParamLimits

0x320d,	// (0x000188ea) list_double_large_graphic_pane_vc_t1

0x3229,	// (0x00018906) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3229,	// (0x00018906) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002511a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002511a) list_double_large_graphic_pane_vc_t

0xd3a1,	// (0x00022a7e) list_double_heading_pane_vc_g1_ParamLimits

0xd3a1,	// (0x00022a7e) list_double_heading_pane_vc_g1

0xd3ad,	// (0x00022a8a) list_double_heading_pane_vc_g2_ParamLimits

0xd3ad,	// (0x00022a8a) list_double_heading_pane_vc_g2

0x0001,

0xfa42,	// (0x0002511f) list_double_heading_pane_vc_g_ParamLimits

0xfa42,	// (0x0002511f) list_double_heading_pane_vc_g

0x324b,	// (0x00018928) list_double_heading_pane_vc_t1_ParamLimits

0x324b,	// (0x00018928) list_double_heading_pane_vc_t1

0x325f,	// (0x0001893c) list_double_heading_pane_vc_t2_ParamLimits

0x325f,	// (0x0001893c) list_double_heading_pane_vc_t2

0x0001,

0xfa47,	// (0x00025124) list_double_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x00025124) list_double_heading_pane_vc_t

0x3277,	// (0x00018954) list_double_graphic_pane_vc_g1_ParamLimits

0x3277,	// (0x00018954) list_double_graphic_pane_vc_g1

0x328a,	// (0x00018967) list_double_graphic_pane_vc_g2_ParamLimits

0x328a,	// (0x00018967) list_double_graphic_pane_vc_g2

0xc815,	// (0x00021ef2) list_double_graphic_pane_vc_g3_ParamLimits

0xc815,	// (0x00021ef2) list_double_graphic_pane_vc_g3

0x0003,

0xfa4c,	// (0x00025129) list_double_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00025129) list_double_graphic_pane_vc_g

0x32a7,	// (0x00018984) list_double_graphic_pane_vc_t1_ParamLimits

0x32a7,	// (0x00018984) list_double_graphic_pane_vc_t1

0x32c6,	// (0x000189a3) list_double_graphic_pane_vc_t2_ParamLimits

0x32c6,	// (0x000189a3) list_double_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x00025132) list_double_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x00025132) list_double_graphic_pane_vc_t

0xe2a0,	// (0x0002397d) aid_size_cell_fastswap

0x7ebe,	// (0x0001d59b) aid_size_cell_touch_ParamLimits

0x7ebe,	// (0x0001d59b) aid_size_cell_touch

0xe2b2,	// (0x0002398f) popup_fast_swap_wide_window_ParamLimits

0xe2b2,	// (0x0002398f) popup_fast_swap_wide_window

0x81ea,	// (0x0001d8c7) touch_pane_ParamLimits

0x81ea,	// (0x0001d8c7) touch_pane

0xc898,	// (0x00021f75) button_value_adjust_pane_cp2

0xc8a0,	// (0x00021f7d) button_value_adjust_pane_cp4

0xc8a8,	// (0x00021f85) form_field_data_pane_cp2

0x9f5f,	// (0x0001f63c) form_field_data_wide_pane_cp2

0xcc43,	// (0x00022320) bg_scroll_pane_ParamLimits

0x82da,	// (0x0001d9b7) scroll_handle_pane_ParamLimits

0xe466,	// (0x00023b43) scroll_sc2_down_pane_ParamLimits

0xe466,	// (0x00023b43) scroll_sc2_down_pane

0xcc74,	// (0x00022351) scroll_sc2_up_pane_ParamLimits

0xcc74,	// (0x00022351) scroll_sc2_up_pane

0xb62c,	// (0x00020d09) grid_wheel_folder_pane_g1_ParamLimits

0xb62c,	// (0x00020d09) grid_wheel_folder_pane_g1

0xe5e8,	// (0x00023cc5) clock_nsta_pane_cp2_ParamLimits

0xe5e8,	// (0x00023cc5) clock_nsta_pane_cp2

0xa55b,	// (0x0001fc38) listscroll_midp_pane_ParamLimits

0xa567,	// (0x0001fc44) midp_canvas_pane

0xd349,	// (0x00022a26) nsta_clock_indic_pane

0xd371,	// (0x00022a4e) listscroll_form_pane_vc

0xd379,	// (0x00022a56) listscroll_set_pane_vc_ParamLimits

0xd379,	// (0x00022a56) listscroll_set_pane_vc

0xa7f7,	// (0x0001fed4) clock_nsta_pane

0xa821,	// (0x0001fefe) indicator_nsta_pane

0x1011,	// (0x000166ee) bg_popup_sub_pane_cp2_ParamLimits

0x1025,	// (0x00016702) find_pane_cp2_ParamLimits

0x1025,	// (0x00016702) find_pane_cp2

0x103b,	// (0x00016718) grid_toobar_pane_ParamLimits

0x11f5,	// (0x000168d2) list_form_gen_pane_vc_ParamLimits

0x11f5,	// (0x000168d2) list_form_gen_pane_vc

0x120b,	// (0x000168e8) scroll_pane_cp8_vc_ParamLimits

0x120b,	// (0x000168e8) scroll_pane_cp8_vc

0x1287,	// (0x00016964) data_form_wide_pane_vc_ParamLimits

0x1287,	// (0x00016964) data_form_wide_pane_vc

0x1293,	// (0x00016970) form_field_data_wide_pane_vc_g1

0x129b,	// (0x00016978) form_field_data_wide_pane_vc_t1_ParamLimits

0x129b,	// (0x00016978) form_field_data_wide_pane_vc_t1

0xc8cf,	// (0x00021fac) input_focus_pane_cp6_vc_ParamLimits

0xc8cf,	// (0x00021fac) input_focus_pane_cp6_vc

0x1629,	// (0x00016d06) list_midp_pane_ParamLimits

0x2a2a,	// (0x00018107) scroll_pane_cp16_ParamLimits

0x2a2a,	// (0x00018107) scroll_pane_cp16

0x167f,	// (0x00016d5c) button_value_adjust_pane_ParamLimits

0x167f,	// (0x00016d5c) button_value_adjust_pane

0xb1da,	// (0x000208b7) button_value_adjust_pane_cp6_ParamLimits

0xb1da,	// (0x000208b7) button_value_adjust_pane_cp6

0xb2f4,	// (0x000209d1) settings_code_pane_cp_ParamLimits

0xb2f4,	// (0x000209d1) settings_code_pane_cp

0xc42f,	// (0x00021b0c) cell_touch_pane_g1

0xc42f,	// (0x00021b0c) cell_touch_pane_g2

0x0001,

0xf6cd,	// (0x00024daa) cell_touch_pane_g

0xb4f9,	// (0x00020bd6) cell_touch_pane_cp_ParamLimits

0xb4f9,	// (0x00020bd6) cell_touch_pane_cp

0xb515,	// (0x00020bf2) cell_touch_pane_ParamLimits

0xb515,	// (0x00020bf2) cell_touch_pane

0xc42f,	// (0x00021b0c) scroll_sc2_down_pane_g1

0xc42f,	// (0x00021b0c) scroll_sc2_up_pane_g1

0xc439,	// (0x00021b16) bg_set_opt_pane_cp4_vc

0x2df2,	// (0x000184cf) list_set_graphic_pane_vc_g1_ParamLimits

0x2df2,	// (0x000184cf) list_set_graphic_pane_vc_g1

0x2dfe,	// (0x000184db) list_set_graphic_pane_vc_g2_ParamLimits

0x2dfe,	// (0x000184db) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x000250a1) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x000250a1) list_set_graphic_pane_vc_g

0x2e0a,	// (0x000184e7) text_primary_small_cp13_vc_ParamLimits

0x2e0a,	// (0x000184e7) text_primary_small_cp13_vc

0x2e22,	// (0x000184ff) list_set_graphic_pane_vc_ParamLimits

0x2e22,	// (0x000184ff) list_set_graphic_pane_vc

0xc439,	// (0x00021b16) input_focus_pane_cp2_vc

0xc42f,	// (0x00021b0c) setting_code_pane_vc_g1

0xc4ac,	// (0x00021b89) setting_code_pane_vc_t1

0x2e35,	// (0x00018512) set_text_pane_vc_t1_ParamLimits

0x2e35,	// (0x00018512) set_text_pane_vc_t1

0xc439,	// (0x00021b16) input_focus_pane_cp1_vc

0x2e52,	// (0x0001852f) list_set_text_pane_vc

0xc42f,	// (0x00021b0c) setting_text_pane_vc_g1

0xc439,	// (0x00021b16) bg_set_opt_pane_cp2_vc

0xc4a3,	// (0x00021b80) setting_slider_graphic_pane_vc_g1

0x2e5c,	// (0x00018539) setting_slider_graphic_pane_vc_t1

0x2e6c,	// (0x00018549) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x000250a6) setting_slider_graphic_pane_vc_t

0x2e7c,	// (0x00018559) slider_set_pane_cp_vc

0x2e84,	// (0x00018561) slider_set_pane_vc_g1

0x2e8d,	// (0x0001856a) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x000250ab) slider_set_pane_vc_g

0xc995,	// (0x00022072) set_opt_bg_pane_g1_copy1

0xc99d,	// (0x0002207a) set_opt_bg_pane_g2_copy1

0x2eb9,	// (0x00018596) set_opt_bg_pane_g3_copy1

0xc9ad,	// (0x0002208a) set_opt_bg_pane_g4_copy1

0xc9b5,	// (0x00022092) set_opt_bg_pane_g5_copy1

0xc9bd,	// (0x0002209a) set_opt_bg_pane_g6_copy1

0x2ec1,	// (0x0001859e) set_opt_bg_pane_g7_copy1

0x2ecb,	// (0x000185a8) set_opt_bg_pane_g8_copy1

0x2ed3,	// (0x000185b0) set_opt_bg_pane_g9_copy1

0xc439,	// (0x00021b16) bg_set_opt_pane_cp_vc

0x2edb,	// (0x000185b8) setting_slider_pane_vc_t1

0x2eea,	// (0x000185c7) setting_slider_pane_vc_t2

0x2efa,	// (0x000185d7) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x000250ba) setting_slider_pane_vc_t

0x2f0a,	// (0x000185e7) slider_set_pane_vc

0xe8a4,	// (0x00023f81) volume_set_pane_vc_g1

0xea7f,	// (0x0002415c) volume_set_pane_vc_g2

0xea88,	// (0x00024165) volume_set_pane_vc_g3

0xea91,	// (0x0002416e) volume_set_pane_vc_g4

0xea9a,	// (0x00024177) volume_set_pane_vc_g5

0xeaa3,	// (0x00024180) volume_set_pane_vc_g6

0xeaac,	// (0x00024189) volume_set_pane_vc_g7

0xeab5,	// (0x00024192) volume_set_pane_vc_g8

0xeabe,	// (0x0002419b) volume_set_pane_vc_g9

0xeac7,	// (0x000241a4) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x000250c1) volume_set_pane_vc_g

0x2f12,	// (0x000185ef) volume_set_pane_vc

0x2f1c,	// (0x000185f9) button_value_adjust_pane_cp1_vc

0x2f26,	// (0x00018603) list_highlight_pane_cp2_vc

0x2f2f,	// (0x0001860c) list_set_pane_vc_ParamLimits

0x2f2f,	// (0x0001860c) list_set_pane_vc

0x2f8d,	// (0x0001866a) main_pane_set_vc_t1_ParamLimits

0x2f8d,	// (0x0001866a) main_pane_set_vc_t1

0x2fa2,	// (0x0001867f) main_pane_set_vc_t2_ParamLimits

0x2fa2,	// (0x0001867f) main_pane_set_vc_t2

0x2fb4,	// (0x00018691) main_pane_set_vc_t3_ParamLimits

0x2fb4,	// (0x00018691) main_pane_set_vc_t3

0x2fc6,	// (0x000186a3) main_pane_set_vc_t4_ParamLimits

0x2fc6,	// (0x000186a3) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x000250d6) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x000250d6) main_pane_set_vc_t

0x2fd8,	// (0x000186b5) setting_code_pane_vc_ParamLimits

0x2fd8,	// (0x000186b5) setting_code_pane_vc

0x2fe7,	// (0x000186c4) setting_slider_graphic_pane_vc

0x2fe7,	// (0x000186c4) setting_slider_pane_vc

0x2fe7,	// (0x000186c4) setting_text_pane_vc

0x2fe7,	// (0x000186c4) setting_volume_pane_vc

0x2fef,	// (0x000186cc) scroll_pane_cp121_vc

0xc886,	// (0x00021f63) set_content_pane_vc

0x32f5,	// (0x000189d2) button_value_adjust_pane_g1

0x32fe,	// (0x000189db) button_value_adjust_pane_g2

0x0001,

0xfa5a,	// (0x00025137) button_value_adjust_pane_g

0x3307,	// (0x000189e4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3307,	// (0x000189e4) form_field_slider_wide_pane_vc_t1

0x331b,	// (0x000189f8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x331b,	// (0x000189f8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5f,	// (0x0002513c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5f,	// (0x0002513c) form_field_slider_wide_pane_vc_t

0xc487,	// (0x00021b64) input_focus_pane_cp10_vc_ParamLimits

0xc487,	// (0x00021b64) input_focus_pane_cp10_vc

0x3349,	// (0x00018a26) slider_cont_pane_cp1_vc_ParamLimits

0x3349,	// (0x00018a26) slider_cont_pane_cp1_vc

0x335b,	// (0x00018a38) slider_form_pane_g1_cp2

0x2e8d,	// (0x0001856a) slider_form_pane_g2_cp2

0x3388,	// (0x00018a65) form_field_slider_pane_vc_t3

0x3396,	// (0x00018a73) form_field_slider_pane_vc_t4

0x33a4,	// (0x00018a81) slider_form_pane_vc_ParamLimits

0x33a4,	// (0x00018a81) slider_form_pane_vc

0x33b1,	// (0x00018a8e) form_field_slider_pane_vc_t1_ParamLimits

0x33b1,	// (0x00018a8e) form_field_slider_pane_vc_t1

0x331b,	// (0x000189f8) form_field_slider_pane_vc_t2_ParamLimits

0x331b,	// (0x000189f8) form_field_slider_pane_vc_t2

0x0001,

0xfa71,	// (0x0002514e) form_field_slider_pane_vc_t_ParamLimits

0xfa71,	// (0x0002514e) form_field_slider_pane_vc_t

0xc487,	// (0x00021b64) input_focus_pane_cp9_vc_ParamLimits

0xc487,	// (0x00021b64) input_focus_pane_cp9_vc

0x33cd,	// (0x00018aaa) slider_cont_pane_vc_ParamLimits

0x33cd,	// (0x00018aaa) slider_cont_pane_vc

0x33e1,	// (0x00018abe) list_form_graphic_pane_cp_vc_ParamLimits

0x33e1,	// (0x00018abe) list_form_graphic_pane_cp_vc

0x1293,	// (0x00016970) form_field_popup_wide_pane_vc_g1

0x33f6,	// (0x00018ad3) form_field_popup_wide_pane_vc_t1_ParamLimits

0x33f6,	// (0x00018ad3) form_field_popup_wide_pane_vc_t1

0xc8cf,	// (0x00021fac) input_focus_pane_cp8_vc_ParamLimits

0xc8cf,	// (0x00021fac) input_focus_pane_cp8_vc

0x343b,	// (0x00018b18) list_form_wide_pane_vc_ParamLimits

0x343b,	// (0x00018b18) list_form_wide_pane_vc

0x3447,	// (0x00018b24) list_form_graphic_pane_vc_g1

0x344f,	// (0x00018b2c) list_form_graphic_pane_vc_t1_ParamLimits

0x344f,	// (0x00018b2c) list_form_graphic_pane_vc_t1

0xc495,	// (0x00021b72) list_highlight_pane_cp5_vc_ParamLimits

0xc495,	// (0x00021b72) list_highlight_pane_cp5_vc

0x346b,	// (0x00018b48) list_form_graphic_pane_vc_ParamLimits

0x346b,	// (0x00018b48) list_form_graphic_pane_vc

0x1293,	// (0x00016970) form_field_popup_pane_vc_g1

0x3481,	// (0x00018b5e) form_field_popup_pane_vc_t1_ParamLimits

0x3481,	// (0x00018b5e) form_field_popup_pane_vc_t1

0xc8cf,	// (0x00021fac) input_focus_pane_cp7_vc_ParamLimits

0xc8cf,	// (0x00021fac) input_focus_pane_cp7_vc

0x3498,	// (0x00018b75) list_form_pane_vc_ParamLimits

0x3498,	// (0x00018b75) list_form_pane_vc

0x34a4,	// (0x00018b81) data_form_pane_vc_t1_ParamLimits

0x34a4,	// (0x00018b81) data_form_pane_vc_t1

0xc995,	// (0x00022072) input_focus_pane_vc_g1

0xc99d,	// (0x0002207a) input_focus_pane_vc_g2

0xc9a5,	// (0x00022082) input_focus_pane_vc_g3

0xc9ad,	// (0x0002208a) input_focus_pane_vc_g4

0xc9b5,	// (0x00022092) input_focus_pane_vc_g5

0xc9bd,	// (0x0002209a) input_focus_pane_vc_g6

0xc9c5,	// (0x000220a2) input_focus_pane_vc_g7

0xc9cd,	// (0x000220aa) input_focus_pane_vc_g8

0xc9d5,	// (0x000220b2) input_focus_pane_vc_g9

0xc42f,	// (0x00021b0c) input_focus_pane_vc_g10

0x0009,

0xf656,	// (0x00024d33) input_focus_pane_vc_g

0x1287,	// (0x00016964) data_form_pane_vc_ParamLimits

0x1287,	// (0x00016964) data_form_pane_vc

0x1293,	// (0x00016970) form_field_data_pane_vc_g1

0x34bf,	// (0x00018b9c) form_field_data_pane_vc_t1_ParamLimits

0x34bf,	// (0x00018b9c) form_field_data_pane_vc_t1

0xc8cf,	// (0x00021fac) input_focus_pane_vc_ParamLimits

0xc8cf,	// (0x00021fac) input_focus_pane_vc

0x34d9,	// (0x00018bb6) button_value_adjust_pane_cp3_vc

0x34e1,	// (0x00018bbe) button_value_adjust_pane_cp5_vc

0x34e9,	// (0x00018bc6) form_field_data_pane_vc_ParamLimits

0x34e9,	// (0x00018bc6) form_field_data_pane_vc

0x3500,	// (0x00018bdd) form_field_data_pane_vc_cp2

0x3508,	// (0x00018be5) form_field_data_wide_pane_vc_ParamLimits

0x3508,	// (0x00018be5) form_field_data_wide_pane_vc

0x351e,	// (0x00018bfb) form_field_data_wide_pane_vc_cp2

0x3526,	// (0x00018c03) form_field_popup_pane_vc_ParamLimits

0x3526,	// (0x00018c03) form_field_popup_pane_vc

0x353d,	// (0x00018c1a) form_field_popup_wide_pane_vc_ParamLimits

0x353d,	// (0x00018c1a) form_field_popup_wide_pane_vc

0x3553,	// (0x00018c30) form_field_slider_pane_vc_ParamLimits

0x3553,	// (0x00018c30) form_field_slider_pane_vc

0x3566,	// (0x00018c43) form_field_slider_wide_pane_vc_ParamLimits

0x3566,	// (0x00018c43) form_field_slider_wide_pane_vc

0xb532,	// (0x00020c0f) grid_touch_1_pane_ParamLimits

0xb532,	// (0x00020c0f) grid_touch_1_pane

0xb546,	// (0x00020c23) grid_touch_2_pane_ParamLimits

0xb546,	// (0x00020c23) grid_touch_2_pane

0x364a,	// (0x00018d27) touch_pane_g1_ParamLimits

0x364a,	// (0x00018d27) touch_pane_g1

0x359d,	// (0x00018c7a) cell_app_pane_cp_wide_ParamLimits

0x359d,	// (0x00018c7a) cell_app_pane_cp_wide

0x35ae,	// (0x00018c8b) grid_popup_fast_wide_pane_ParamLimits

0x35ae,	// (0x00018c8b) grid_popup_fast_wide_pane

0x35c2,	// (0x00018c9f) scroll_pane_cp19_ParamLimits

0x35c2,	// (0x00018c9f) scroll_pane_cp19

0xc439,	// (0x00021b16) bg_popup_window_pane_cp20

0x35d6,	// (0x00018cb3) listscroll_popup_fast_wide_pane

0xb570,	// (0x00020c4d) grid_indicator_nsta_pane

0x35f0,	// (0x00018ccd) clock_nsta_pane_g1

0x35f9,	// (0x00018cd6) clock_nsta_pane_t1

0xb57c,	// (0x00020c59) cell_indicator_nsta_pane_ParamLimits

0xb57c,	// (0x00020c59) cell_indicator_nsta_pane

0x364a,	// (0x00018d27) cell_indicator_nsta_pane_g1

0xb597,	// (0x00020c74) cell_indicator_nsta_pane_g2

0x0001,

0xfa82,	// (0x0002515f) cell_indicator_nsta_pane_g

0x366a,	// (0x00018d47) clock_nsta_pane_cp

0x3673,	// (0x00018d50) indicator_nsta_pane_cp

0x367d,	// (0x00018d5a) nsta_clock_indic_pane_g1

0xc4eb,	// (0x00021bc8) grid_indicator_pane

0xa312,	// (0x0001f9ef) scroll_pane_cp29

0xe537,	// (0x00023c14) indicator_nsta_pane_cp2_ParamLimits

0xe537,	// (0x00023c14) indicator_nsta_pane_cp2

0xc495,	// (0x00021b72) main_apps_wheel_pane

0xabfe,	// (0x000202db) form_midp_field_text_pane_ParamLimits

0x1635,	// (0x00016d12) scroll_bar_cp050_ParamLimits

0x36d6,	// (0x00018db3) cell_indicator_pane_ParamLimits

0x36d6,	// (0x00018db3) cell_indicator_pane

0x36ef,	// (0x00018dcc) cell_indicator_pane_g1

0xb5b6,	// (0x00020c93) grid_wheel_folder_pane_ParamLimits

0xb5b6,	// (0x00020c93) grid_wheel_folder_pane

0xb5c4,	// (0x00020ca1) list_wheel_apps_pane_ParamLimits

0xb5c4,	// (0x00020ca1) list_wheel_apps_pane

0xb5d2,	// (0x00020caf) main_apps_wheel_pane_g1_ParamLimits

0xb5d2,	// (0x00020caf) main_apps_wheel_pane_g1

0xb5de,	// (0x00020cbb) main_apps_wheel_pane_g2_ParamLimits

0xb5de,	// (0x00020cbb) main_apps_wheel_pane_g2

0x0001,

0xfa9e,	// (0x0002517b) main_apps_wheel_pane_g_ParamLimits

0xfa9e,	// (0x0002517b) main_apps_wheel_pane_g

0xb5ec,	// (0x00020cc9) main_apps_wheel_pane_t1_ParamLimits

0xb5ec,	// (0x00020cc9) main_apps_wheel_pane_t1

0xb600,	// (0x00020cdd) list_wheel_apps_pane_g1

0xb608,	// (0x00020ce5) list_wheel_apps_pane_g2

0xb610,	// (0x00020ced) list_wheel_apps_pane_g3

0xb618,	// (0x00020cf5) list_wheel_apps_pane_g4

0xb622,	// (0x00020cff) list_wheel_apps_pane_g5

0x0004,

0xfaa3,	// (0x00025180) list_wheel_apps_pane_g

0xd092,	// (0x0002276f) navi_icon_text_pane

0xa6eb,	// (0x0001fdc8) aid_fill_nsta

0x37b6,	// (0x00018e93) navi_icon_text_pane_g1

0x37c2,	// (0x00018e9f) navi_icon_text_pane_t1

0xcf82,	// (0x0002265f) list_set_graphic_pane_t1_ParamLimits

0xcf82,	// (0x0002265f) list_set_graphic_pane_t1

0x1d80,	// (0x0001745d) popup_midp_note_alarm_window_t6_ParamLimits

0x1d80,	// (0x0001745d) popup_midp_note_alarm_window_t6

0x1d92,	// (0x0001746f) popup_midp_note_alarm_window_t7_ParamLimits

0x1d92,	// (0x0001746f) popup_midp_note_alarm_window_t7

0x1da4,	// (0x00017481) popup_midp_note_alarm_window_t8_ParamLimits

0x1da4,	// (0x00017481) popup_midp_note_alarm_window_t8

0x1db6,	// (0x00017493) popup_midp_note_alarm_window_t9_ParamLimits

0x1db6,	// (0x00017493) popup_midp_note_alarm_window_t9

0x1dc8,	// (0x000174a5) popup_midp_note_alarm_window_t10_ParamLimits

0x1dc8,	// (0x000174a5) popup_midp_note_alarm_window_t10

0x1dda,	// (0x000174b7) popup_midp_note_alarm_window_t11_ParamLimits

0x1dda,	// (0x000174b7) popup_midp_note_alarm_window_t11

0xaf4a,	// (0x00020627) scroll_pane_cp17_ParamLimits

0xaf4a,	// (0x00020627) scroll_pane_cp17

0xe8a4,	// (0x00023f81) volume_small_pane_cp_g1

0xead0,	// (0x000241ad) volume_small_pane_cp_g2

0xead9,	// (0x000241b6) volume_small_pane_cp_g3

0xeae2,	// (0x000241bf) volume_small_pane_cp_g4

0xeaeb,	// (0x000241c8) volume_small_pane_cp_g5

0xea9a,	// (0x00024177) volume_small_pane_cp_g6

0xeaf4,	// (0x000241d1) volume_small_pane_cp_g7

0xeafd,	// (0x000241da) volume_small_pane_cp_g8

0xeb06,	// (0x000241e3) volume_small_pane_cp_g9

0xeb0f,	// (0x000241ec) volume_small_pane_cp_g10

0xd1fc,	// (0x000228d9) midp_ticker_pane_g1_ParamLimits

0xd208,	// (0x000228e5) midp_ticker_pane_g2_ParamLimits

0xf722,	// (0x00024dff) midp_ticker_pane_g_ParamLimits

0xd214,	// (0x000228f1) midp_ticker_pane_t1_ParamLimits

0xa70f,	// (0x0001fdec) aid_fill_nsta_2

0x1621,	// (0x00016cfe) list_form2_midp_pane

0x2753,	// (0x00017e30) midp_editing_number_pane_ParamLimits

0x2762,	// (0x00017e3f) midp_ticker_pane_ParamLimits

0x37d4,	// (0x00018eb1) form2_midp_field_pane

0x37f8,	// (0x00018ed5) scroll_pane_cp51

0x3818,	// (0x00018ef5) form2_midp_button_pane_ParamLimits

0x3818,	// (0x00018ef5) form2_midp_button_pane

0x382a,	// (0x00018f07) form2_midp_content_pane_ParamLimits

0x382a,	// (0x00018f07) form2_midp_content_pane

0x3844,	// (0x00018f21) form2_midp_field_choice_group_pane

0x384c,	// (0x00018f29) form2_midp_field_pane_g1

0x3854,	// (0x00018f31) form2_midp_field_pane_g2

0x385c,	// (0x00018f39) form2_midp_field_pane_g3

0x3864,	// (0x00018f41) form2_midp_field_pane_g4

0x0003,

0xfac8,	// (0x000251a5) form2_midp_field_pane_g

0x386c,	// (0x00018f49) form2_midp_gauge_slider_pane

0x3874,	// (0x00018f51) form2_midp_gauge_wait_pane

0x387c,	// (0x00018f59) form2_midp_image_pane_ParamLimits

0x387c,	// (0x00018f59) form2_midp_image_pane

0xb655,	// (0x00020d32) form2_midp_label_pane_ParamLimits

0xb655,	// (0x00020d32) form2_midp_label_pane

0xb66e,	// (0x00020d4b) form2_midp_label_pane_cp_ParamLimits

0xb66e,	// (0x00020d4b) form2_midp_label_pane_cp

0x38d1,	// (0x00018fae) form2_midp_string_pane_ParamLimits

0x38d1,	// (0x00018fae) form2_midp_string_pane

0xb68d,	// (0x00020d6a) form2_midp_text_pane_ParamLimits

0xb68d,	// (0x00020d6a) form2_midp_text_pane

0x38fe,	// (0x00018fdb) form2_midp_time_pane

0x390e,	// (0x00018feb) input_focus_pane_cp51_ParamLimits

0x390e,	// (0x00018feb) input_focus_pane_cp51

0xb6a6,	// (0x00020d83) form2_midp_label_pane_t1_ParamLimits

0xb6a6,	// (0x00020d83) form2_midp_label_pane_t1

0xb6e6,	// (0x00020dc3) form2_mdip_text_pane_t1_ParamLimits

0xb6e6,	// (0x00020dc3) form2_mdip_text_pane_t1

0x3986,	// (0x00019063) form2_midp_time_pane_t1

0x39a1,	// (0x0001907e) form2_midp_gauge_slider_pane_t1

0xb702,	// (0x00020ddf) form2_midp_gauge_slider_pane_t2

0xb714,	// (0x00020df1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad1,	// (0x000251ae) form2_midp_gauge_slider_pane_t

0x39d7,	// (0x000190b4) form2_midp_slider_pane

0x39e3,	// (0x000190c0) form2_midp_gauge_wait_pane_t1

0x39f1,	// (0x000190ce) form2_midp_wait_pane_ParamLimits

0x39f1,	// (0x000190ce) form2_midp_wait_pane

0xb726,	// (0x00020e03) list_single_2graphic_pane_cp4_ParamLimits

0xb726,	// (0x00020e03) list_single_2graphic_pane_cp4

0xab3e,	// (0x0002021b) list_single_midp_graphic_pane_cp_ParamLimits

0xab3e,	// (0x0002021b) list_single_midp_graphic_pane_cp

0xc439,	// (0x00021b16) list_highlight_pane_cp20

0x3a44,	// (0x00019121) list_single_2graphic_pane_g1_cp4

0x2c9e,	// (0x0001837b) list_single_2graphic_pane_g2_cp4

0x3a4c,	// (0x00019129) list_single_2graphic_pane_t1_cp4

0xc495,	// (0x00021b72) list_highlight_pane_cp21

0x3a5b,	// (0x00019138) list_single_midp_graphic_pane_g4_cp

0x3a6a,	// (0x00019147) list_single_midp_graphic_pane_t1_cp

0xb73b,	// (0x00020e18) form2_mdip_string_pane_t1_ParamLimits

0xb73b,	// (0x00020e18) form2_mdip_string_pane_t1

0xc439,	// (0x00021b16) bg_wml_button_pane_cp2

0xc42f,	// (0x00021b0c) form2_midp_image_pane_g1

0xc839,	// (0x00021f16) list_double_large_graphic_pane_g5_ParamLimits

0xc839,	// (0x00021f16) list_double_large_graphic_pane_g5

0xa55b,	// (0x0001fc38) midp_form_pane_ParamLimits

0xc495,	// (0x00021b72) main_apps_wheel_pane_ParamLimits

0x8913,	// (0x0001dff0) popup_preview_window_ParamLimits

0x8913,	// (0x0001dff0) popup_preview_window

0x8be0,	// (0x0001e2bd) popup_touch_info_window_ParamLimits

0x8be0,	// (0x0001e2bd) popup_touch_info_window

0x8bfe,	// (0x0001e2db) popup_touch_menu_window_ParamLimits

0x8bfe,	// (0x0001e2db) popup_touch_menu_window

0xc425,	// (0x00021b02) bg_popup_sub_pane_cp6

0x3b86,	// (0x00019263) list_touch_menu_pane

0xb7b1,	// (0x00020e8e) list_single_touch_menu_pane_ParamLimits

0xb7b1,	// (0x00020e8e) list_single_touch_menu_pane

0xb7c5,	// (0x00020ea2) list_single_touch_menu_pane_t1

0xc495,	// (0x00021b72) bg_popup_sub_pane_cp7_ParamLimits

0xc495,	// (0x00021b72) bg_popup_sub_pane_cp7

0x1655,	// (0x00016d32) heading_sub_pane

0x3bb2,	// (0x0001928f) list_touch_info_pane_ParamLimits

0x3bb2,	// (0x0001928f) list_touch_info_pane

0x3bc2,	// (0x0001929f) list_single_touch_info_pane_ParamLimits

0x3bc2,	// (0x0001929f) list_single_touch_info_pane

0x3bd4,	// (0x000192b1) list_single_touch_info_pane_t1

0x3be2,	// (0x000192bf) list_single_touch_info_pane_t2

0x0001,

0xfadf,	// (0x000251bc) list_single_touch_info_pane_t

0xd1e5,	// (0x000228c2) bg_popup_heading_pane_cp

0x3bf0,	// (0x000192cd) heading_sub_pane_t1

0x1221,	// (0x000168fe) bg_popup_preview_window_pane_cp_ParamLimits

0x1221,	// (0x000168fe) bg_popup_preview_window_pane_cp

0x1655,	// (0x00016d32) heading_preview_pane

0x3bb2,	// (0x0001928f) list_preview_pane_ParamLimits

0x3bb2,	// (0x0001928f) list_preview_pane

0x3bfe,	// (0x000192db) popup_preview_window_g1

0x3bc2,	// (0x0001929f) list_single_preview_pane_ParamLimits

0x3bc2,	// (0x0001929f) list_single_preview_pane

0x3c06,	// (0x000192e3) list_single_preview_pane_g1

0x3c0e,	// (0x000192eb) list_single_preview_pane_t1

0x3bd4,	// (0x000192b1) list_single_preview_pane_t2

0x0001,

0xfae4,	// (0x000251c1) list_single_preview_pane_t

0x3c1c,	// (0x000192f9) bg_popup_heading_pane_cp2_ParamLimits

0x3c1c,	// (0x000192f9) bg_popup_heading_pane_cp2

0x3c32,	// (0x0001930f) heading_preview_pane_g1

0x3c3a,	// (0x00019317) heading_preview_pane_t1_ParamLimits

0x3c3a,	// (0x00019317) heading_preview_pane_t1

0xc502,	// (0x00021bdf) soft_indicator_pane_t1_ParamLimits

0xc7e1,	// (0x00021ebe) scroll_pane_ParamLimits

0xcc62,	// (0x0002233f) scroll_sc2_left_pane

0xcc6b,	// (0x00022348) scroll_sc2_right_pane

0xcc8a,	// (0x00022367) scroll_bg_pane_g1_ParamLimits

0xcc9f,	// (0x0002237c) scroll_bg_pane_g2_ParamLimits

0xccb7,	// (0x00022394) scroll_bg_pane_g3_ParamLimits

0xf6ad,	// (0x00024d8a) scroll_bg_pane_g_ParamLimits

0xcc8a,	// (0x00022367) scroll_handle_pane_g1_ParamLimits

0xcccc,	// (0x000223a9) scroll_handle_pane_g2_ParamLimits

0xccb7,	// (0x00022394) scroll_handle_pane_g3_ParamLimits

0xf6b4,	// (0x00024d91) scroll_handle_pane_g_ParamLimits

0x84e0,	// (0x0001dbbd) popup_choice_list_window_ParamLimits

0x84e0,	// (0x0001dbbd) popup_choice_list_window

0x101d,	// (0x000166fa) choice_list_pane

0x10cd,	// (0x000167aa) cell_toolbar_pane_t1

0x10f5,	// (0x000167d2) toolbar_button_pane_ParamLimits

0x22a6,	// (0x00017983) ai_gene_pane_1_t2_ParamLimits

0x22a6,	// (0x00017983) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x00024fb4) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x00024fb4) ai_gene_pane_1_t

0x3c57,	// (0x00019334) scroll_sc2_left_pane_g1

0x3c57,	// (0x00019334) scroll_sc2_right_pane_g1

0xca7f,	// (0x0002215c) bg_popup_sub_pane_cp10

0x3c61,	// (0x0001933e) list_choice_list_pane

0xb35e,	// (0x00020a3b) list_single_choice_list_pane_ParamLimits

0xb35e,	// (0x00020a3b) list_single_choice_list_pane

0xd3b9,	// (0x00022a96) list_single_choice_list_pane_g1

0xa159,	// (0x0001f836) list_single_choice_list_pane_t1_ParamLimits

0xa159,	// (0x0001f836) list_single_choice_list_pane_t1

0x3c95,	// (0x00019372) choice_list_pane_g1

0xb7d3,	// (0x00020eb0) choice_list_pane_t1

0xc425,	// (0x00021b02) input_focus_pane_cp11

0xcbd7,	// (0x000222b4) title_pane_stacon_g2_ParamLimits

0xcbd7,	// (0x000222b4) title_pane_stacon_g2

0x0002,

0xf693,	// (0x00024d70) title_pane_stacon_g_ParamLimits

0xf693,	// (0x00024d70) title_pane_stacon_g

0xd1e5,	// (0x000228c2) cursor_press_pane

0x8587,	// (0x0001dc64) popup_fep_hwr_window_ParamLimits

0x8587,	// (0x0001dc64) popup_fep_hwr_window

0xe74e,	// (0x00023e2b) popup_fep_vkb_window_ParamLimits

0xe74e,	// (0x00023e2b) popup_fep_vkb_window

0xb7e1,	// (0x00020ebe) cursor_press_pane_g1

0x0002,

0xfb0d,	// (0x000251ea) fep_vkb_side_pane_g_ParamLimits

0xeb43,	// (0x00024220) fep_hwr_candidate_pane_ParamLimits

0xeb43,	// (0x00024220) fep_hwr_candidate_pane

0xeb6d,	// (0x0002424a) fep_hwr_side_pane_ParamLimits

0xeb6d,	// (0x0002424a) fep_hwr_side_pane

0xeb8d,	// (0x0002426a) fep_hwr_top_pane_ParamLimits

0xeb8d,	// (0x0002426a) fep_hwr_top_pane

0xeba5,	// (0x00024282) fep_hwr_write_pane_ParamLimits

0xeba5,	// (0x00024282) fep_hwr_write_pane

0xfb0d,	// (0x000251ea) fep_vkb_side_pane_g

0x3cb3,	// (0x00019390) fep_hwr_top_pane_g1

0x3cc5,	// (0x000193a2) fep_hwr_top_pane_g2

0xebdf,	// (0x000242bc) fep_hwr_top_pane_g3

0x0002,

0xfae9,	// (0x000251c6) fep_hwr_top_pane_g

0xebf4,	// (0x000242d1) fep_hwr_top_text_pane

0xcd8f,	// (0x0002246c) fep_hwr_top_text_pane_g1

0x3cfb,	// (0x000193d8) fep_hwr_top_text_pane_t1

0xec73,	// (0x00024350) fep_hwr_candidate_pane_g1

0x3f40,	// (0x0001961d) fep_vkb_keypad_pane_g3_ParamLimits

0x3f40,	// (0x0001961d) fep_vkb_keypad_pane_g3

0x3f68,	// (0x00019645) fep_vkb_keypad_pane_g4_ParamLimits

0x3f68,	// (0x00019645) fep_vkb_keypad_pane_g4

0x3fd7,	// (0x000196b4) fep_vkb_bottom_pane_g2_ParamLimits

0x3fd7,	// (0x000196b4) fep_vkb_bottom_pane_g2

0x0001,

0xfb14,	// (0x000251f1) fep_vkb_bottom_pane_g_ParamLimits

0xfb14,	// (0x000251f1) fep_vkb_bottom_pane_g

0x3c57,	// (0x00019334) cell_vkb_side_pane_g2

0x0001,

0xfb1e,	// (0x000251fb) cell_vkb_side_pane_g

0x4062,	// (0x0001973f) cell_vkb_side_pane_t1

0x4070,	// (0x0001974d) cell_vkb_side_pane_t1_copy1

0x3c57,	// (0x00019334) bg_fep_vkb_candidate_pane_g2

0x419c,	// (0x00019879) cell_vkb_candidate_pane_ParamLimits

0x3d09,	// (0x000193e6) aid_size_cell_vkb_ParamLimits

0x3d09,	// (0x000193e6) aid_size_cell_vkb

0x419c,	// (0x00019879) cell_vkb_candidate_pane

0xec9a,	// (0x00024377) bg_popup_fep_shadow_pane_g1

0xb7fb,	// (0x00020ed8) fep_vkb_bottom_pane_ParamLimits

0xb7fb,	// (0x00020ed8) fep_vkb_bottom_pane

0x3dcd,	// (0x000194aa) fep_vkb_candidate_pane_ParamLimits

0x3dcd,	// (0x000194aa) fep_vkb_candidate_pane

0xb820,	// (0x00020efd) fep_vkb_keypad_pane_ParamLimits

0xb820,	// (0x00020efd) fep_vkb_keypad_pane

0xb855,	// (0x00020f32) fep_vkb_side_pane_ParamLimits

0xb855,	// (0x00020f32) fep_vkb_side_pane

0xb891,	// (0x00020f6e) fep_vkb_top_pane_ParamLimits

0xb891,	// (0x00020f6e) fep_vkb_top_pane

0x3e99,	// (0x00019576) fep_vkb_top_pane_g1_ParamLimits

0x3e99,	// (0x00019576) fep_vkb_top_pane_g1

0x3ea8,	// (0x00019585) fep_vkb_top_pane_g2_ParamLimits

0x3ea8,	// (0x00019585) fep_vkb_top_pane_g2

0x3eb7,	// (0x00019594) fep_vkb_top_pane_g3_ParamLimits

0x3eb7,	// (0x00019594) fep_vkb_top_pane_g3

0x0003,

0xfb04,	// (0x000251e1) fep_vkb_top_pane_g_ParamLimits

0xfb04,	// (0x000251e1) fep_vkb_top_pane_g

0x3ed5,	// (0x000195b2) fep_vkb_top_text_pane_ParamLimits

0x3ed5,	// (0x000195b2) fep_vkb_top_text_pane

0xb8c6,	// (0x00020fa3) fep_vkb_side_pane_g1_ParamLimits

0xb8c6,	// (0x00020fa3) fep_vkb_side_pane_g1

0x3f2f,	// (0x0001960c) grid_vkb_side_pane_ParamLimits

0x3f2f,	// (0x0001960c) grid_vkb_side_pane

0xeca2,	// (0x0002437f) bg_popup_fep_shadow_pane_g2

0xecab,	// (0x00024388) bg_popup_fep_shadow_pane_g3

0xecb3,	// (0x00024390) bg_popup_fep_shadow_pane_g4

0xecbc,	// (0x00024399) bg_popup_fep_shadow_pane_g5

0xecc6,	// (0x000243a3) bg_popup_fep_shadow_pane_g6

0xecce,	// (0x000243ab) bg_popup_fep_shadow_pane_g7

0xc9ad,	// (0x0002208a) bg_popup_fep_shadow_pane_g8

0x3f86,	// (0x00019663) grid_vkb_keypad_number_pane_ParamLimits

0x3f86,	// (0x00019663) grid_vkb_keypad_number_pane

0x3f96,	// (0x00019673) grid_vkb_keypad_pane_ParamLimits

0x3f96,	// (0x00019673) grid_vkb_keypad_pane

0x3fbc,	// (0x00019699) fep_vkb_bottom_pane_g1_ParamLimits

0x3fbc,	// (0x00019699) fep_vkb_bottom_pane_g1

0x3fe5,	// (0x000196c2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x3fe5,	// (0x000196c2) grid_vkb_keypad_bottom_left_pane

0x3ffa,	// (0x000196d7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x3ffa,	// (0x000196d7) grid_vkb_keypad_bottom_right_pane

0x400f,	// (0x000196ec) fep_vkb_top_text_pane_g1

0xb90d,	// (0x00020fea) fep_vkb_top_text_pane_t1

0xb91f,	// (0x00020ffc) cell_vkb_side_pane_ParamLimits

0xb91f,	// (0x00020ffc) cell_vkb_side_pane

0x3c57,	// (0x00019334) cell_vkb_side_pane_g1

0x407e,	// (0x0001975b) cell_vkb_keypad_pane_ParamLimits

0x407e,	// (0x0001975b) cell_vkb_keypad_pane

0x40f3,	// (0x000197d0) cell_vkb_keypad_pane_g1

0x0008,

0xfb31,	// (0x0002520e) bg_popup_fep_shadow_pane_g

0xece0,	// (0x000243bd) cell_hwr_side_pane_g1

0xece0,	// (0x000243bd) cell_hwr_side_pane_g2

0x40fd,	// (0x000197da) cell_vkb_keypad_pane_t1

0xb935,	// (0x00021012) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb935,	// (0x00021012) cell_vkb_keypad_bottom_left_pane

0xb94a,	// (0x00021027) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb94a,	// (0x00021027) cell_vkb_keypad_bottom_right_pane

0x3c57,	// (0x00019334) cell_vkb_keypad_bottom_left_pane_g1

0x3c57,	// (0x00019334) cell_vkb_keypad_bottom_right_pane_g1

0x4161,	// (0x0001983e) cell_vkb_keypad_number_pane_ParamLimits

0x4161,	// (0x0001983e) cell_vkb_keypad_number_pane

0x4180,	// (0x0001985d) cell_vkb_keypad_number_pane_g1

0x418a,	// (0x00019867) cell_vkb_keypad_number_pane_g2

0x4193,	// (0x00019870) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb23,	// (0x00025200) cell_vkb_keypad_number_pane_g

0x40fd,	// (0x000197da) cell_vkb_keypad_number_pane_t1

0x41b7,	// (0x00019894) fep_vkb_candidate_pane_g1

0x0001,

0xfb44,	// (0x00025221) cell_hwr_side_pane_g

0x41d0,	// (0x000198ad) cell_hwr_side_pane_t1

0xecea,	// (0x000243c7) cell_hwr_side_pane_t1_copy1

0xecf8,	// (0x000243d5) cell_hwr_candidate_pane_g1

0xed27,	// (0x00024404) cell_hwr_candidate_pane_t1

0x3c57,	// (0x00019334) cell_vkb_candidate_pane_g2

0x4214,	// (0x000198f1) cell_vkb_candidate_pane_t1

0xe736,	// (0x00023e13) bg_popup_fep_shadow_pane_ParamLimits

0xe736,	// (0x00023e13) bg_popup_fep_shadow_pane

0xebbf,	// (0x0002429c) bg_fep_hwr_top_pane_g4

0x3cd7,	// (0x000193b4) bg_hwr_side_pane_g1_ParamLimits

0x3cd7,	// (0x000193b4) bg_hwr_side_pane_g1

0x8e15,	// (0x0001e4f2) cell_hwr_side_pane_ParamLimits

0x8e15,	// (0x0001e4f2) cell_hwr_side_pane

0xec09,	// (0x000242e6) fep_hwr_write_pane_g1_ParamLimits

0xec09,	// (0x000242e6) fep_hwr_write_pane_g1

0xec16,	// (0x000242f3) fep_hwr_write_pane_g2_ParamLimits

0xec16,	// (0x000242f3) fep_hwr_write_pane_g2

0xec23,	// (0x00024300) fep_hwr_write_pane_g3_ParamLimits

0xec23,	// (0x00024300) fep_hwr_write_pane_g3

0x8e35,	// (0x0001e512) fep_hwr_write_pane_g4_ParamLimits

0x8e35,	// (0x0001e512) fep_hwr_write_pane_g4

0x0005,

0xfaf0,	// (0x000251cd) fep_hwr_write_pane_g_ParamLimits

0xfaf0,	// (0x000251cd) fep_hwr_write_pane_g

0xebbf,	// (0x0002429c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xebbf,	// (0x0002429c) bg_fep_hwr_candidate_pane_g2

0xec31,	// (0x0002430e) cell_hwr_candidate_pane_ParamLimits

0xec31,	// (0x0002430e) cell_hwr_candidate_pane

0xec73,	// (0x00024350) fep_hwr_candidate_pane_g1_ParamLimits

0x3d37,	// (0x00019414) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3d37,	// (0x00019414) bg_popup_fep_shadow_pane_cp2

0x3ec7,	// (0x000195a4) fep_vkb_top_pane_g4_ParamLimits

0x3ec7,	// (0x000195a4) fep_vkb_top_pane_g4

0x3f0d,	// (0x000195ea) fep_vkb_side_pane_g2_ParamLimits

0x3f0d,	// (0x000195ea) fep_vkb_side_pane_g2

0x9e84,	// (0x0001f561) list_setting_pane_t4_ParamLimits

0x9e84,	// (0x0001f561) list_setting_pane_t4

0x9efe,	// (0x0001f5db) list_setting_number_pane_t5_ParamLimits

0x9efe,	// (0x0001f5db) list_setting_number_pane_t5

0xcdc6,	// (0x000224a3) list_double_heading_pane_cp2_ParamLimits

0xcdc6,	// (0x000224a3) list_double_heading_pane_cp2

0xd3ce,	// (0x00022aab) list_double_heading_pane_g1_cp2_ParamLimits

0xd3ce,	// (0x00022aab) list_double_heading_pane_g1_cp2

0x4222,	// (0x000198ff) list_double_heading_pane_g2_cp2_ParamLimits

0x4222,	// (0x000198ff) list_double_heading_pane_g2_cp2

0x4236,	// (0x00019913) list_double_heading_pane_t1_cp2_ParamLimits

0x4236,	// (0x00019913) list_double_heading_pane_t1_cp2

0x424c,	// (0x00019929) list_double_heading_pane_t2_cp2_ParamLimits

0x424c,	// (0x00019929) list_double_heading_pane_t2_cp2

0xc41d,	// (0x00021afa) aid_value_unit2

0xe2c8,	// (0x000239a5) popup_preview_fixed_window

0xc5d9,	// (0x00021cb6) bg_popup_preview_window_pane_cp02

0x425e,	// (0x0001993b) list_preview_fixed_pane

0x42a4,	// (0x00019981) list_empty_pane_fp_ParamLimits

0x42a4,	// (0x00019981) list_empty_pane_fp

0x42a4,	// (0x00019981) list_single_cale_day_pane_fp_ParamLimits

0x42a4,	// (0x00019981) list_single_cale_day_pane_fp

0x42a4,	// (0x00019981) list_single_graphic_heading_pane_fp_ParamLimits

0x42a4,	// (0x00019981) list_single_graphic_heading_pane_fp

0x42a4,	// (0x00019981) list_single_graphic_pane_fp_ParamLimits

0x42a4,	// (0x00019981) list_single_graphic_pane_fp

0x42a4,	// (0x00019981) list_single_heading_pane_fp_ParamLimits

0x42a4,	// (0x00019981) list_single_heading_pane_fp

0x42a4,	// (0x00019981) list_single_pane_fp_ParamLimits

0x42a4,	// (0x00019981) list_single_pane_fp

0x42ba,	// (0x00019997) list_single_pane_fp_g1_ParamLimits

0x42ba,	// (0x00019997) list_single_pane_fp_g1

0xd3da,	// (0x00022ab7) list_single_pane_fp_g2_ParamLimits

0xd3da,	// (0x00022ab7) list_single_pane_fp_g2

0x42c6,	// (0x000199a3) list_single_pane_fp_g3_ParamLimits

0x42c6,	// (0x000199a3) list_single_pane_fp_g3

0x42da,	// (0x000199b7) list_single_pane_fp_g4_ParamLimits

0x42da,	// (0x000199b7) list_single_pane_fp_g4

0x0003,

0xfb57,	// (0x00025234) list_single_pane_fp_g_ParamLimits

0xfb57,	// (0x00025234) list_single_pane_fp_g

0x42e6,	// (0x000199c3) list_single_pane_fp_t1_ParamLimits

0x42e6,	// (0x000199c3) list_single_pane_fp_t1

0x42fd,	// (0x000199da) list_single_graphic_pane_fp_g1_ParamLimits

0x42fd,	// (0x000199da) list_single_graphic_pane_fp_g1

0x42ba,	// (0x00019997) list_single_graphic_pane_fp_g2_ParamLimits

0x42ba,	// (0x00019997) list_single_graphic_pane_fp_g2

0xd3da,	// (0x00022ab7) list_single_graphic_pane_fp_g3_ParamLimits

0xd3da,	// (0x00022ab7) list_single_graphic_pane_fp_g3

0x42c6,	// (0x000199a3) list_single_graphic_pane_fp_g4_ParamLimits

0x42c6,	// (0x000199a3) list_single_graphic_pane_fp_g4

0x42da,	// (0x000199b7) list_single_graphic_pane_fp_g5_ParamLimits

0x42da,	// (0x000199b7) list_single_graphic_pane_fp_g5

0x0004,

0xfb60,	// (0x0002523d) list_single_graphic_pane_fp_g_ParamLimits

0xfb60,	// (0x0002523d) list_single_graphic_pane_fp_g

0x4309,	// (0x000199e6) list_single_graphic_pane_fp_t1_ParamLimits

0x4309,	// (0x000199e6) list_single_graphic_pane_fp_t1

0x42fd,	// (0x000199da) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x42fd,	// (0x000199da) list_single_graphic_heading_pane_fp_g1

0x42ba,	// (0x00019997) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x42ba,	// (0x00019997) list_single_graphic_heading_pane_fp_g2

0xd3da,	// (0x00022ab7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd3da,	// (0x00022ab7) list_single_graphic_heading_pane_fp_g3

0x42c6,	// (0x000199a3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x42c6,	// (0x000199a3) list_single_graphic_heading_pane_fp_g4

0x42da,	// (0x000199b7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x42da,	// (0x000199b7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb60,	// (0x0002523d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb60,	// (0x0002523d) list_single_graphic_heading_pane_fp_g

0x431f,	// (0x000199fc) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x431f,	// (0x000199fc) list_single_graphic_heading_pane_fp_t1

0x4335,	// (0x00019a12) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4335,	// (0x00019a12) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6b,	// (0x00025248) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6b,	// (0x00025248) list_single_graphic_heading_pane_fp_t

0x4347,	// (0x00019a24) list_single_cale_day_pane_fp_g1_ParamLimits

0x4347,	// (0x00019a24) list_single_cale_day_pane_fp_g1

0x437f,	// (0x00019a5c) list_single_cale_day_pane_fp_g2_ParamLimits

0x437f,	// (0x00019a5c) list_single_cale_day_pane_fp_g2

0x438b,	// (0x00019a68) list_single_cale_day_pane_fp_g3_ParamLimits

0x438b,	// (0x00019a68) list_single_cale_day_pane_fp_g3

0x43b3,	// (0x00019a90) list_single_cale_day_pane_fp_g4_ParamLimits

0x43b3,	// (0x00019a90) list_single_cale_day_pane_fp_g4

0x43d7,	// (0x00019ab4) list_single_cale_day_pane_fp_g5_ParamLimits

0x43d7,	// (0x00019ab4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb70,	// (0x0002524d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb70,	// (0x0002524d) list_single_cale_day_pane_fp_g

0x43fb,	// (0x00019ad8) list_single_cale_day_pane_fp_t1_ParamLimits

0x43fb,	// (0x00019ad8) list_single_cale_day_pane_fp_t1

0x4421,	// (0x00019afe) list_single_cale_day_pane_fp_t2_ParamLimits

0x4421,	// (0x00019afe) list_single_cale_day_pane_fp_t2

0x443a,	// (0x00019b17) list_single_cale_day_pane_fp_t3_ParamLimits

0x443a,	// (0x00019b17) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7b,	// (0x00025258) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7b,	// (0x00025258) list_single_cale_day_pane_fp_t

0x42ba,	// (0x00019997) list_empty_pane_fp_g1_ParamLimits

0x42ba,	// (0x00019997) list_empty_pane_fp_g1

0x4453,	// (0x00019b30) list_empty_pane_fp_t1

0x4461,	// (0x00019b3e) list_empty_pane_fp_t2

0x0001,

0xfb82,	// (0x0002525f) list_empty_pane_fp_t

0x42ba,	// (0x00019997) list_single_heading_pane_fp_g1_ParamLimits

0x42ba,	// (0x00019997) list_single_heading_pane_fp_g1

0xd3da,	// (0x00022ab7) list_single_heading_pane_fp_g2_ParamLimits

0xd3da,	// (0x00022ab7) list_single_heading_pane_fp_g2

0x42c6,	// (0x000199a3) list_single_heading_pane_fp_g3_ParamLimits

0x42c6,	// (0x000199a3) list_single_heading_pane_fp_g3

0x0002,

0xfb87,	// (0x00025264) list_single_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x00025264) list_single_heading_pane_fp_g

0x446f,	// (0x00019b4c) list_single_heading_pane_fp_t1_ParamLimits

0x446f,	// (0x00019b4c) list_single_heading_pane_fp_t1

0x4481,	// (0x00019b5e) list_single_heading_pane_fp_t2_ParamLimits

0x4481,	// (0x00019b5e) list_single_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x0002526b) list_single_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x0002526b) list_single_heading_pane_fp_t

0xa1a5,	// (0x0001f882) aid_size_cell_fast

0xc5bc,	// (0x00021c99) soft_indicator_pane_cp1_t1

0xa1ae,	// (0x0001f88b) cell_app_pane_cp2_ParamLimits

0xa1ae,	// (0x0001f88b) cell_app_pane_cp2

0xeb2c,	// (0x00024209) fep_hwr_candidate_drop_down_list_pane

0xec8d,	// (0x0002436a) fep_hwr_candidate_pane_g3_ParamLimits

0xec8d,	// (0x0002436a) fep_hwr_candidate_pane_g3

0xd3c1,	// (0x00022a9e) fep_hwr_candidate_pane_g4_ParamLimits

0xd3c1,	// (0x00022a9e) fep_hwr_candidate_pane_g4

0x0002,

0xfafd,	// (0x000251da) fep_hwr_candidate_pane_g_ParamLimits

0xfafd,	// (0x000251da) fep_hwr_candidate_pane_g

0x3dbc,	// (0x00019499) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3dbc,	// (0x00019499) fep_vkb_candidate_drop_down_list_pane

0x41bf,	// (0x0001989c) fep_vkb_candidate_pane_g3

0x41c7,	// (0x000198a4) fep_vkb_candidate_pane_g4

0x0002,

0xfb2a,	// (0x00025207) fep_vkb_candidate_pane_g

0xecf8,	// (0x000243d5) cell_hwr_candidate_pane_g1_ParamLimits

0xed06,	// (0x000243e3) cell_hwr_candidate_pane_g3_ParamLimits

0xed06,	// (0x000243e3) cell_hwr_candidate_pane_g3

0x6173,	// (0x0001b850) cell_hwr_candidate_pane_g4_ParamLimits

0x6173,	// (0x0001b850) cell_hwr_candidate_pane_g4

0x0002,

0xfb49,	// (0x00025226) cell_hwr_candidate_pane_g_ParamLimits

0xfb49,	// (0x00025226) cell_hwr_candidate_pane_g

0x41de,	// (0x000198bb) cell_vkb_candidate_pane_g3_ParamLimits

0x41de,	// (0x000198bb) cell_vkb_candidate_pane_g3

0x41f9,	// (0x000198d6) cell_vkb_candidate_pane_g4_ParamLimits

0x41f9,	// (0x000198d6) cell_vkb_candidate_pane_g4

0xb965,	// (0x00021042) cell_app_pane_cp2_g1_ParamLimits

0xb965,	// (0x00021042) cell_app_pane_cp2_g1

0x44b5,	// (0x00019b92) cell_app_pane_cp2_g2_ParamLimits

0x44b5,	// (0x00019b92) cell_app_pane_cp2_g2

0x0001,

0xfb93,	// (0x00025270) cell_app_pane_cp2_g_ParamLimits

0xfb93,	// (0x00025270) cell_app_pane_cp2_g

0x44c1,	// (0x00019b9e) cell_app_pane_cp2_t1_ParamLimits

0x44c1,	// (0x00019b9e) cell_app_pane_cp2_t1

0xc8cf,	// (0x00021fac) grid_highlight_pane_cp1_ParamLimits

0xc8cf,	// (0x00021fac) grid_highlight_pane_cp1

0xed45,	// (0x00024422) cell_hwr_candidate_pane_cp1_ParamLimits

0xed45,	// (0x00024422) cell_hwr_candidate_pane_cp1

0xecf8,	// (0x000243d5) fep_hwr_candidate_drop_down_list_pane_g1

0xed64,	// (0x00024441) fep_hwr_candidate_drop_down_list_pane_g2

0xed71,	// (0x0002444e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb98,	// (0x00025275) fep_hwr_candidate_drop_down_list_pane_g

0xed7e,	// (0x0002445b) fep_hwr_candidate_drop_down_list_scroll_pane

0xed87,	// (0x00024464) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xed87,	// (0x00024464) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xed94,	// (0x00024471) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xed94,	// (0x00024471) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xeda1,	// (0x0002447e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xeda1,	// (0x0002447e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xedae,	// (0x0002448b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xedae,	// (0x0002448b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xedc9,	// (0x000244a6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xedc9,	// (0x000244a6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xede4,	// (0x000244c1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xede4,	// (0x000244c1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xedff,	// (0x000244dc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xedff,	// (0x000244dc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xee1a,	// (0x000244f7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee1a,	// (0x000244f7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9f,	// (0x0002527c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9f,	// (0x0002527c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x44d3,	// (0x00019bb0) cell_vkb_candidate_pane_cp1_ParamLimits

0x44d3,	// (0x00019bb0) cell_vkb_candidate_pane_cp1

0x3ec7,	// (0x000195a4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3ec7,	// (0x000195a4) fep_vkb_candidate_drop_down_list_pane_g1

0x44f3,	// (0x00019bd0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x44f3,	// (0x00019bd0) fep_vkb_candidate_drop_down_list_pane_g2

0x4500,	// (0x00019bdd) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4500,	// (0x00019bdd) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb0,	// (0x0002528d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb0,	// (0x0002528d) fep_vkb_candidate_drop_down_list_pane_g

0x450d,	// (0x00019bea) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x450d,	// (0x00019bea) fep_vkb_candidate_drop_down_list_scroll_pane

0x451a,	// (0x00019bf7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x451a,	// (0x00019bf7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4527,	// (0x00019c04) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4527,	// (0x00019c04) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4533,	// (0x00019c10) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4533,	// (0x00019c10) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x453f,	// (0x00019c1c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x453f,	// (0x00019c1c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4560,	// (0x00019c3d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4560,	// (0x00019c3d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4581,	// (0x00019c5e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4581,	// (0x00019c5e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x45a2,	// (0x00019c7f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x45a2,	// (0x00019c7f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x45c3,	// (0x00019ca0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x45c3,	// (0x00019ca0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb7,	// (0x00025294) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb7,	// (0x00025294) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x95f8,	// (0x0001ecd5) title_pane_g1_ParamLimits

0x960b,	// (0x0001ece8) title_pane_g2_ParamLimits

0xf527,	// (0x00024c04) title_pane_g_ParamLimits

0xcd7f,	// (0x0002245c) aid_call2_pane

0xcd87,	// (0x00022464) aid_call_pane

0xcd8f,	// (0x0002246c) popup_clock_analogue_window_g1

0xcd8f,	// (0x0002246c) popup_clock_analogue_window_g2

0xe47b,	// (0x00023b58) popup_clock_analogue_window_g3

0xe484,	// (0x00023b61) popup_clock_analogue_window_g4

0xc42f,	// (0x00021b0c) popup_clock_analogue_window_g5

0x0004,

0xf6c2,	// (0x00024d9f) popup_clock_analogue_window_g

0xe48c,	// (0x00023b69) popup_clock_analogue_window_t1

0xe49a,	// (0x00023b77) clock_digital_number_pane_ParamLimits

0xe49a,	// (0x00023b77) clock_digital_number_pane

0xe4a6,	// (0x00023b83) clock_digital_number_pane_cp02_ParamLimits

0xe4a6,	// (0x00023b83) clock_digital_number_pane_cp02

0xe4b2,	// (0x00023b8f) clock_digital_number_pane_cp03_ParamLimits

0xe4b2,	// (0x00023b8f) clock_digital_number_pane_cp03

0xe4be,	// (0x00023b9b) clock_digital_number_pane_cp04_ParamLimits

0xe4be,	// (0x00023b9b) clock_digital_number_pane_cp04

0xe4ca,	// (0x00023ba7) clock_digital_separator_pane_ParamLimits

0xe4ca,	// (0x00023ba7) clock_digital_separator_pane

0xe4d6,	// (0x00023bb3) popup_clock_digital_window_t1_ParamLimits

0xe4d6,	// (0x00023bb3) popup_clock_digital_window_t1

0xc42f,	// (0x00021b0c) clock_digital_number_pane_g1

0xc42f,	// (0x00021b0c) clock_digital_number_pane_g2

0x0001,

0xf6cd,	// (0x00024daa) clock_digital_number_pane_g

0xc42f,	// (0x00021b0c) clock_digital_separator_pane_g1

0xc42f,	// (0x00021b0c) clock_digital_separator_pane_g2

0x0001,

0xf6cd,	// (0x00024daa) clock_digital_separator_pane_g

0xa6eb,	// (0x0001fdc8) aid_fill_nsta_ParamLimits

0xa821,	// (0x0001fefe) indicator_nsta_pane_ParamLimits

0x0ead,	// (0x0001658a) popup_clock_analogue_window

0x0ead,	// (0x0001658a) popup_clock_digital_window

0xb570,	// (0x00020c4d) grid_indicator_nsta_pane_ParamLimits

0x3607,	// (0x00018ce4) clock_nsta_pane_t2

0x0001,

0xfa7d,	// (0x0002515a) clock_nsta_pane_t

0xe45c,	// (0x00023b39) aid_size_max_handle

0x82d1,	// (0x0001d9ae) aid_size_min_handle

0xd1e5,	// (0x000228c2) editor_scroll_pane

0x45de,	// (0x00019cbb) ex_editor_pane

0xca6f,	// (0x0002214c) scroll_pane_cp13

0xc80d,	// (0x00021eea) scroll_pane_cp14

0xcdbe,	// (0x0002249b) scroll_pane_cp36

0xa339,	// (0x0001fa16) list_single_graphic_hl_pane_cp2_ParamLimits

0xa339,	// (0x0001fa16) list_single_graphic_hl_pane_cp2

0xb372,	// (0x00020a4f) list_single_graphic_hl_pane_ParamLimits

0xb372,	// (0x00020a4f) list_single_graphic_hl_pane

0x65d7,	// (0x0001bcb4) aid_size_min_hl_cp1

0x45ef,	// (0x00019ccc) list_highlight_pane_cp34_ParamLimits

0x45ef,	// (0x00019ccc) list_highlight_pane_cp34

0x4600,	// (0x00019cdd) list_single_graphic_hl_pane_g1_ParamLimits

0x4600,	// (0x00019cdd) list_single_graphic_hl_pane_g1

0xb983,	// (0x00021060) list_single_graphic_hl_pane_g2_ParamLimits

0xb983,	// (0x00021060) list_single_graphic_hl_pane_g2

0xb983,	// (0x00021060) list_single_graphic_hl_pane_g3_ParamLimits

0xb983,	// (0x00021060) list_single_graphic_hl_pane_g3

0xd170,	// (0x0002284d) list_single_graphic_hl_pane_g4_ParamLimits

0xd170,	// (0x0002284d) list_single_graphic_hl_pane_g4

0xb98f,	// (0x0002106c) list_single_graphic_hl_pane_g5_ParamLimits

0xb98f,	// (0x0002106c) list_single_graphic_hl_pane_g5

0x0004,

0xfbc8,	// (0x000252a5) list_single_graphic_hl_pane_g_ParamLimits

0xfbc8,	// (0x000252a5) list_single_graphic_hl_pane_g

0xb9a3,	// (0x00021080) list_single_graphic_hl_pane_t1_ParamLimits

0xb9a3,	// (0x00021080) list_single_graphic_hl_pane_t1

0x4643,	// (0x00019d20) aid_size_min_hl_cp2

0x464c,	// (0x00019d29) list_highlight_pane_cp34_cp2_ParamLimits

0x464c,	// (0x00019d29) list_highlight_pane_cp34_cp2

0x4600,	// (0x00019cdd) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4600,	// (0x00019cdd) list_single_graphic_hl_pane_g1_cp2

0x4659,	// (0x00019d36) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4659,	// (0x00019d36) list_single_graphic_hl_pane_g2_cp2

0xb9b9,	// (0x00021096) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb9b9,	// (0x00021096) list_single_graphic_hl_pane_g3_cp2

0xc815,	// (0x00021ef2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc815,	// (0x00021ef2) list_single_graphic_hl_pane_g4_cp2

0x4619,	// (0x00019cf6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4619,	// (0x00019cf6) list_single_graphic_hl_pane_g5_cp2

0x8383,	// (0x0001da60) control_pane_g4_ParamLimits

0x8383,	// (0x0001da60) control_pane_g4

0xca7f,	// (0x0002215c) bg_popup_sub_pane_cp10_ParamLimits

0x3c61,	// (0x0001933e) list_choice_list_pane_ParamLimits

0x3c70,	// (0x0001934d) scroll_pane_cp23

0xc5d9,	// (0x00021cb6) bg_popup_preview_window_pane_cp02_ParamLimits

0x425e,	// (0x0001993b) list_preview_fixed_pane_ParamLimits

0x4274,	// (0x00019951) list_preview_fixed_pane_cp_ParamLimits

0x4274,	// (0x00019951) list_preview_fixed_pane_cp

0x4280,	// (0x0001995d) popup_preview_fixed_window_g1_ParamLimits

0x4280,	// (0x0001995d) popup_preview_fixed_window_g1

0x428c,	// (0x00019969) popup_preview_fixed_window_g2_ParamLimits

0x428c,	// (0x00019969) popup_preview_fixed_window_g2

0x0002,

0xfb50,	// (0x0002522d) popup_preview_fixed_window_g_ParamLimits

0xfb50,	// (0x0002522d) popup_preview_fixed_window_g

0xe3d0,	// (0x00023aad) aid_navi_side_left_pane_ParamLimits

0xe3e5,	// (0x00023ac2) aid_navi_side_right_pane_ParamLimits

0xe3fd,	// (0x00023ada) navi_icon_pane_stacon_ParamLimits

0xe411,	// (0x00023aee) navi_navi_pane_stacon_ParamLimits

0xe3fd,	// (0x00023ada) navi_text_pane_stacon_ParamLimits

0xe2a8,	// (0x00023985) main_text_info_pane

0x4689,	// (0x00019d66) listscroll_text_info_pane

0x4691,	// (0x00019d6e) list_text_info_pane_ParamLimits

0x4691,	// (0x00019d6e) list_text_info_pane

0x46a0,	// (0x00019d7d) scroll_pane_cp24_ParamLimits

0x46a0,	// (0x00019d7d) scroll_pane_cp24

0xb9c7,	// (0x000210a4) list_text_info_pane_t1_ParamLimits

0xb9c7,	// (0x000210a4) list_text_info_pane_t1

0x84fc,	// (0x0001dbd9) popup_fast_swap2_window_ParamLimits

0x84fc,	// (0x0001dbd9) popup_fast_swap2_window

0x46f2,	// (0x00019dcf) aid_size_cell_fast2

0xc425,	// (0x00021b02) bg_popup_window_pane_cp17

0x1655,	// (0x00016d32) heading_pane_cp2

0x46fc,	// (0x00019dd9) listscroll_fast2_pane

0xb9e3,	// (0x000210c0) grid_fast2_pane

0xb9ed,	// (0x000210ca) listscroll_fast2_pane_g1

0xb9f5,	// (0x000210d2) listscroll_fast2_pane_g2

0x0001,

0xfbd3,	// (0x000252b0) listscroll_fast2_pane_g

0xca6f,	// (0x0002214c) scroll_pane_cp26

0x4720,	// (0x00019dfd) cell_fast2_pane_ParamLimits

0x4720,	// (0x00019dfd) cell_fast2_pane

0x4735,	// (0x00019e12) cell_fast2_pane_g1

0x473e,	// (0x00019e1b) cell_fast2_pane_g2

0x4747,	// (0x00019e24) cell_fast2_pane_g3

0x0002,

0xfbd8,	// (0x000252b5) cell_fast2_pane_g

0xc744,	// (0x00021e21) grid_highlight_pane_cp9

0xe728,	// (0x00023e05) main_eswt_pane_ParamLimits

0xe728,	// (0x00023e05) main_eswt_pane

0x46b5,	// (0x00019d92) list_single_text_info_pane

0x474f,	// (0x00019e2c) eswt_ctrl_button_pane

0x474f,	// (0x00019e2c) eswt_ctrl_canvas_pane

0xb9ff,	// (0x000210dc) eswt_ctrl_combo_pane

0x474f,	// (0x00019e2c) eswt_ctrl_default_pane

0x474f,	// (0x00019e2c) eswt_ctrl_label_pane

0x475f,	// (0x00019e3c) eswt_ctrl_wait_pane

0xba07,	// (0x000210e4) eswt_shell_pane

0xc425,	// (0x00021b02) listscroll_eswt_app_pane

0x4787,	// (0x00019e64) popup_eswt_tasktip_window_ParamLimits

0x4787,	// (0x00019e64) popup_eswt_tasktip_window

0x1221,	// (0x000168fe) bg_popup_window_pane_cp18

0x4798,	// (0x00019e75) eswt_control_pane_g1_ParamLimits

0x4798,	// (0x00019e75) eswt_control_pane_g1

0x47a5,	// (0x00019e82) eswt_control_pane_g2_ParamLimits

0x47a5,	// (0x00019e82) eswt_control_pane_g2

0x47b2,	// (0x00019e8f) eswt_control_pane_g3_ParamLimits

0x47b2,	// (0x00019e8f) eswt_control_pane_g3

0x47bf,	// (0x00019e9c) eswt_control_pane_g4_ParamLimits

0x47bf,	// (0x00019e9c) eswt_control_pane_g4

0x0003,

0xfbdf,	// (0x000252bc) eswt_control_pane_g_ParamLimits

0xfbdf,	// (0x000252bc) eswt_control_pane_g

0xc8cf,	// (0x00021fac) bg_button_pane_ParamLimits

0xc8cf,	// (0x00021fac) bg_button_pane

0xc759,	// (0x00021e36) common_borders_pane_copy2_ParamLimits

0xc759,	// (0x00021e36) common_borders_pane_copy2

0x47cc,	// (0x00019ea9) control_button_pane_g1_ParamLimits

0x47cc,	// (0x00019ea9) control_button_pane_g1

0x47d8,	// (0x00019eb5) control_button_pane_g2_ParamLimits

0x47d8,	// (0x00019eb5) control_button_pane_g2

0x47e4,	// (0x00019ec1) control_button_pane_g3_ParamLimits

0x47e4,	// (0x00019ec1) control_button_pane_g3

0x0002,

0xfbe8,	// (0x000252c5) control_button_pane_g_ParamLimits

0xfbe8,	// (0x000252c5) control_button_pane_g

0x47f8,	// (0x00019ed5) control_button_pane_t1

0x4806,	// (0x00019ee3) control_button_pane_t2

0x0001,

0xfbef,	// (0x000252cc) control_button_pane_t

0x1101,	// (0x000167de) bg_button_pane_g1

0x1111,	// (0x000167ee) bg_button_pane_g2

0x1109,	// (0x000167e6) bg_button_pane_g3

0x1121,	// (0x000167fe) bg_button_pane_g4

0x1119,	// (0x000167f6) bg_button_pane_g5

0x1129,	// (0x00016806) bg_button_pane_g6

0x1131,	// (0x0001680e) bg_button_pane_g7

0x1141,	// (0x0001681e) bg_button_pane_g8

0x1139,	// (0x00016816) bg_button_pane_g9

0x0008,

0xf82b,	// (0x00024f08) bg_button_pane_g

0x3c1c,	// (0x000192f9) common_borders_pane_ParamLimits

0x3c1c,	// (0x000192f9) common_borders_pane

0x4798,	// (0x00019e75) eswt_control_pane_g1_copy1_ParamLimits

0x4798,	// (0x00019e75) eswt_control_pane_g1_copy1

0x47a5,	// (0x00019e82) eswt_control_pane_g2_copy1_ParamLimits

0x47a5,	// (0x00019e82) eswt_control_pane_g2_copy1

0x47b2,	// (0x00019e8f) eswt_control_pane_g3_copy1_ParamLimits

0x47b2,	// (0x00019e8f) eswt_control_pane_g3_copy1

0x47bf,	// (0x00019e9c) eswt_control_pane_g4_copy1_ParamLimits

0x47bf,	// (0x00019e9c) eswt_control_pane_g4_copy1

0x3c57,	// (0x00019334) bg_eswt_ctrl_canvas_pane_g1

0x3c1c,	// (0x000192f9) common_borders_pane_cp2_ParamLimits

0x3c1c,	// (0x000192f9) common_borders_pane_cp2

0x3c1c,	// (0x000192f9) common_borders_pane_cp3_ParamLimits

0x3c1c,	// (0x000192f9) common_borders_pane_cp3

0x4814,	// (0x00019ef1) separator_horizontal_pane

0x481c,	// (0x00019ef9) separator_vertical_pane

0x4798,	// (0x00019e75) eswt_control_pane_g1_copy2_ParamLimits

0x4798,	// (0x00019e75) eswt_control_pane_g1_copy2

0x47a5,	// (0x00019e82) eswt_control_pane_g2_copy2_ParamLimits

0x47a5,	// (0x00019e82) eswt_control_pane_g2_copy2

0x47b2,	// (0x00019e8f) eswt_control_pane_g3_copy2_ParamLimits

0x47b2,	// (0x00019e8f) eswt_control_pane_g3_copy2

0x47bf,	// (0x00019e9c) eswt_control_pane_g4_copy2_ParamLimits

0x47bf,	// (0x00019e9c) eswt_control_pane_g4_copy2

0xc425,	// (0x00021b02) common_borders_pane_cp4

0x4825,	// (0x00019f02) separator_horizontal_pane_g1

0x482e,	// (0x00019f0b) separator_horizontal_pane_g2

0x4837,	// (0x00019f14) separator_horizontal_pane_g3

0x0002,

0xfbf4,	// (0x000252d1) separator_horizontal_pane_g

0x4798,	// (0x00019e75) eswt_control_pane_g1_copy3_ParamLimits

0x4798,	// (0x00019e75) eswt_control_pane_g1_copy3

0x47a5,	// (0x00019e82) eswt_control_pane_g2_copy3_ParamLimits

0x47a5,	// (0x00019e82) eswt_control_pane_g2_copy3

0x47b2,	// (0x00019e8f) eswt_control_pane_g3_copy3_ParamLimits

0x47b2,	// (0x00019e8f) eswt_control_pane_g3_copy3

0x47bf,	// (0x00019e9c) eswt_control_pane_g4_copy3_ParamLimits

0x47bf,	// (0x00019e9c) eswt_control_pane_g4_copy3

0xc425,	// (0x00021b02) common_borders_pane_cp5

0x4840,	// (0x00019f1d) separator_vertical_pane_g1

0x4849,	// (0x00019f26) separator_vertical_pane_g2

0x4852,	// (0x00019f2f) separator_vertical_pane_g3

0x0002,

0xfbfb,	// (0x000252d8) separator_vertical_pane_g

0x4798,	// (0x00019e75) eswt_control_pane_g1_copy4_ParamLimits

0x4798,	// (0x00019e75) eswt_control_pane_g1_copy4

0x47a5,	// (0x00019e82) eswt_control_pane_g2_copy4_ParamLimits

0x47a5,	// (0x00019e82) eswt_control_pane_g2_copy4

0x47b2,	// (0x00019e8f) eswt_control_pane_g3_copy4_ParamLimits

0x47b2,	// (0x00019e8f) eswt_control_pane_g3_copy4

0x47bf,	// (0x00019e9c) eswt_control_pane_g4_copy4_ParamLimits

0x47bf,	// (0x00019e9c) eswt_control_pane_g4_copy4

0xba27,	// (0x00021104) eswt_ctrl_combo_button_pane

0xba2f,	// (0x0002110c) eswt_ctrl_input_pane

0xba37,	// (0x00021114) popup_choice_list_window_cp70

0xba3f,	// (0x0002111c) eswt_ctrl_input_pane_t1

0xc425,	// (0x00021b02) input_focus_pane_cp70

0x3c1c,	// (0x000192f9) bg_button_pane_cp70_ParamLimits

0x3c1c,	// (0x000192f9) bg_button_pane_cp70

0xba4d,	// (0x0002112a) eswt_ctrl_combo_button_pane_g1

0x4889,	// (0x00019f66) wait_bar_pane_cp70

0x1221,	// (0x000168fe) bg_popup_window_pane_cp70_ParamLimits

0x1221,	// (0x000168fe) bg_popup_window_pane_cp70

0x4891,	// (0x00019f6e) popup_eswt_tasktip_window_t1

0x48a7,	// (0x00019f84) wait_bar_pane_cp71_ParamLimits

0x48a7,	// (0x00019f84) wait_bar_pane_cp71

0x48b3,	// (0x00019f90) grid_eswt_app_pane

0xcc62,	// (0x0002233f) scroll_pane_cp70

0xba55,	// (0x00021132) cell_eswt_app_pane_ParamLimits

0xba55,	// (0x00021132) cell_eswt_app_pane

0xba7f,	// (0x0002115c) cell_eswt_app_pane_g1_ParamLimits

0xba7f,	// (0x0002115c) cell_eswt_app_pane_g1

0xbaae,	// (0x0002118b) cell_eswt_app_pane_g2_ParamLimits

0xbaae,	// (0x0002118b) cell_eswt_app_pane_g2

0x0001,

0xfc02,	// (0x000252df) cell_eswt_app_pane_g_ParamLimits

0xfc02,	// (0x000252df) cell_eswt_app_pane_g

0xbad2,	// (0x000211af) cell_eswt_app_pane_t1_ParamLimits

0xbad2,	// (0x000211af) cell_eswt_app_pane_t1

0x4971,	// (0x0001a04e) grid_highlight_pane_cp70_ParamLimits

0x4971,	// (0x0001a04e) grid_highlight_pane_cp70

0xd0e7,	// (0x000227c4) set_content_pane_g1

0xa6a0,	// (0x0001fd7d) status_small_volume_pane

0x8e4a,	// (0x0001e527) status_small_volume_pane_g1

0x8e52,	// (0x0001e52f) volume_small2_pane

0x8e5b,	// (0x0001e538) volume_small2_pane_g1

0x8e64,	// (0x0001e541) volume_small2_pane_g2

0x8e6d,	// (0x0001e54a) volume_small2_pane_g3

0x8e76,	// (0x0001e553) volume_small2_pane_g4

0x8e7f,	// (0x0001e55c) volume_small2_pane_g5

0x8e88,	// (0x0001e565) volume_small2_pane_g6

0x8e91,	// (0x0001e56e) volume_small2_pane_g7

0x8e9a,	// (0x0001e577) volume_small2_pane_g8

0x8ea3,	// (0x0001e580) volume_small2_pane_g9

0x8eac,	// (0x0001e589) volume_small2_pane_g10

0x0009,

0xfc07,	// (0x000252e4) volume_small2_pane_g

0x400f,	// (0x000196ec) fep_vkb_top_text_pane_g1_ParamLimits

0xb90d,	// (0x00020fea) fep_vkb_top_text_pane_t1_ParamLimits

0x4298,	// (0x00019975) popup_preview_fixed_window_g3_ParamLimits

0x4298,	// (0x00019975) popup_preview_fixed_window_g3

0x8b73,	// (0x0001e250) popup_toolbar_trans_pane

0xb1c9,	// (0x000208a6) aid_height_set_list_ParamLimits

0x25b3,	// (0x00017c90) aid_size_parent_ParamLimits

0xca7f,	// (0x0002215c) list_highlight_pane_cp2_ParamLimits

0xd0e7,	// (0x000227c4) set_content_pane_g1_ParamLimits

0xb384,	// (0x00020a61) list_single_image_pane_ParamLimits

0xb384,	// (0x00020a61) list_single_image_pane

0xbb04,	// (0x000211e1) aid_size_cell_image_ParamLimits

0xbb04,	// (0x000211e1) aid_size_cell_image

0xbb11,	// (0x000211ee) grid_single_image_pane_ParamLimits

0xbb11,	// (0x000211ee) grid_single_image_pane

0xd3da,	// (0x00022ab7) list_single_image_pane_g1_ParamLimits

0xd3da,	// (0x00022ab7) list_single_image_pane_g1

0x42c6,	// (0x000199a3) list_single_image_pane_g2_ParamLimits

0x42c6,	// (0x000199a3) list_single_image_pane_g2

0x0001,

0xfc1c,	// (0x000252f9) list_single_image_pane_g_ParamLimits

0xfc1c,	// (0x000252f9) list_single_image_pane_g

0x4996,	// (0x0001a073) list_single_image_pane_t1_ParamLimits

0x4996,	// (0x0001a073) list_single_image_pane_t1

0xbb1d,	// (0x000211fa) cell_image_list_pane_ParamLimits

0xbb1d,	// (0x000211fa) cell_image_list_pane

0xbb31,	// (0x0002120e) cell_image_list_pane_g1

0xbb3a,	// (0x00021217) cell_image_list_pane_g2

0x0001,

0xfc21,	// (0x000252fe) cell_image_list_pane_g

0xbb43,	// (0x00021220) aid_size_cell_tb_trans_pane

0xc8cf,	// (0x00021fac) bg_tb_trans_pane

0xbb55,	// (0x00021232) grid_tb_trans_pane

0x1101,	// (0x000167de) bg_tb_trans_pane_g1

0x1111,	// (0x000167ee) bg_tb_trans_pane_g2

0x1109,	// (0x000167e6) bg_tb_trans_pane_g3

0x1121,	// (0x000167fe) bg_tb_trans_pane_g4

0x1119,	// (0x000167f6) bg_tb_trans_pane_g5

0x1141,	// (0x0001681e) bg_tb_trans_pane_g6

0x1139,	// (0x00016816) bg_tb_trans_pane_g7

0x1129,	// (0x00016806) bg_tb_trans_pane_g8

0x1131,	// (0x0001680e) bg_tb_trans_pane_g9

0x0008,

0xfc26,	// (0x00025303) bg_tb_trans_pane_g

0xbb69,	// (0x00021246) cell_toolbar_trans_pane_ParamLimits

0xbb69,	// (0x00021246) cell_toolbar_trans_pane

0x3c57,	// (0x00019334) cell_toolbar_trans_pane_g1

0xb639,	// (0x00020d16) list_form2_midp_pane_t1

0xb647,	// (0x00020d24) list_form2_midp_pane_t2

0x0001,

0xfac3,	// (0x000251a0) list_form2_midp_pane_t

0x37f8,	// (0x00018ed5) scroll_pane_cp51_ParamLimits

0x3a01,	// (0x000190de) form2_midp_wait_pane_g1

0x3a0a,	// (0x000190e7) form2_midp_wait_pane_g2

0x3a13,	// (0x000190f0) form2_midp_wait_pane_g3

0x0002,

0xfad8,	// (0x000251b5) form2_midp_wait_pane_g

0xc495,	// (0x00021b72) list_highlight_pane_cp21_ParamLimits

0x3a5b,	// (0x00019138) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3a6a,	// (0x00019147) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x27a0,	// (0x00017e7d) list_single_2graphic_im_pane_ParamLimits

0x27a0,	// (0x00017e7d) list_single_2graphic_im_pane

0xbb8f,	// (0x0002126c) list_single_2graphic_im_pane_g1_ParamLimits

0xbb8f,	// (0x0002126c) list_single_2graphic_im_pane_g1

0xbba0,	// (0x0002127d) list_single_2graphic_im_pane_g2_ParamLimits

0xbba0,	// (0x0002127d) list_single_2graphic_im_pane_g2

0xbbac,	// (0x00021289) list_single_2graphic_im_pane_g3_ParamLimits

0xbbac,	// (0x00021289) list_single_2graphic_im_pane_g3

0x0003,

0xfc39,	// (0x00025316) list_single_2graphic_im_pane_g_ParamLimits

0xfc39,	// (0x00025316) list_single_2graphic_im_pane_g

0xbbc0,	// (0x0002129d) list_single_2graphic_im_pane_t1_ParamLimits

0xbbc0,	// (0x0002129d) list_single_2graphic_im_pane_t1

0x42a4,	// (0x00019981) list_single_graphic_2heading_pane_fp_ParamLimits

0x42a4,	// (0x00019981) list_single_graphic_2heading_pane_fp

0x42fd,	// (0x000199da) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x42fd,	// (0x000199da) list_single_graphic_2heading_pane_fp_g1

0x42ba,	// (0x00019997) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x42ba,	// (0x00019997) list_single_graphic_2heading_pane_fp_g2

0xd3da,	// (0x00022ab7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd3da,	// (0x00022ab7) list_single_graphic_2heading_pane_fp_g3

0x42c6,	// (0x000199a3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x42c6,	// (0x000199a3) list_single_graphic_2heading_pane_fp_g4

0x42da,	// (0x000199b7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x42da,	// (0x000199b7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb60,	// (0x0002523d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb60,	// (0x0002523d) list_single_graphic_2heading_pane_fp_g

0x4a8c,	// (0x0001a169) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4a8c,	// (0x0001a169) list_single_graphic_2heading_pane_fp_t1

0x4335,	// (0x00019a12) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4335,	// (0x00019a12) list_single_graphic_2heading_pane_fp_t2

0x4aa2,	// (0x0001a17f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4aa2,	// (0x0001a17f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc42,	// (0x0002531f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc42,	// (0x0002531f) list_single_graphic_2heading_pane_fp_t

0x3ce3,	// (0x000193c0) fep_hwr_write_pane_g5_ParamLimits

0x3ce3,	// (0x000193c0) fep_hwr_write_pane_g5

0x3cef,	// (0x000193cc) fep_hwr_write_pane_g6_ParamLimits

0x3cef,	// (0x000193cc) fep_hwr_write_pane_g6

0xba07,	// (0x000210e4) eswt_shell_pane_ParamLimits

0x1221,	// (0x000168fe) bg_popup_window_pane_cp18_ParamLimits

0x1655,	// (0x00016d32) heading_pane_cp70

0x4891,	// (0x00019f6e) popup_eswt_tasktip_window_t1_ParamLimits

0xa746,	// (0x0001fe23) aid_touch_tab_arrow_left

0xa75c,	// (0x0001fe39) aid_touch_tab_arrow_right

0x9623,	// (0x0001ed00) title_pane_g3_ParamLimits

0x9623,	// (0x0001ed00) title_pane_g3

0xc866,	// (0x00021f43) set_value_pane_g1

0x8b73,	// (0x0001e250) popup_toolbar_trans_pane_ParamLimits

0xbb43,	// (0x00021220) aid_size_cell_tb_trans_pane_ParamLimits

0xc8cf,	// (0x00021fac) bg_tb_trans_pane_ParamLimits

0xbb55,	// (0x00021232) grid_tb_trans_pane_ParamLimits

0xc5d9,	// (0x00021cb6) cont_note_pane_ParamLimits

0xc5d9,	// (0x00021cb6) cont_note_pane

0xc759,	// (0x00021e36) cont_snote2_single_text_pane_ParamLimits

0xc759,	// (0x00021e36) cont_snote2_single_text_pane

0xc759,	// (0x00021e36) cont_snote2_single_graphic_pane_ParamLimits

0xc759,	// (0x00021e36) cont_snote2_single_graphic_pane

0x187c,	// (0x00016f59) cont_note_wait_pane_ParamLimits

0x187c,	// (0x00016f59) cont_note_wait_pane

0x187c,	// (0x00016f59) cont_note_image_pane_ParamLimits

0x187c,	// (0x00016f59) cont_note_image_pane

0x4ab8,	// (0x0001a195) popup_note2_window_g1_ParamLimits

0x4ab8,	// (0x0001a195) popup_note2_window_g1

0xbbfe,	// (0x000212db) popup_note2_window_t1_ParamLimits

0xbbfe,	// (0x000212db) popup_note2_window_t1

0xbc43,	// (0x00021320) popup_note2_window_t2_ParamLimits

0xbc43,	// (0x00021320) popup_note2_window_t2

0xbc88,	// (0x00021365) popup_note2_window_t3_ParamLimits

0xbc88,	// (0x00021365) popup_note2_window_t3

0x4bb8,	// (0x0001a295) popup_note2_window_t4_ParamLimits

0x4bb8,	// (0x0001a295) popup_note2_window_t4

0xc65d,	// (0x00021d3a) popup_note2_window_t5_ParamLimits

0xc65d,	// (0x00021d3a) popup_note2_window_t5

0x0004,

0xfc4e,	// (0x0002532b) popup_note2_window_t_ParamLimits

0xfc4e,	// (0x0002532b) popup_note2_window_t

0x4be7,	// (0x0001a2c4) popup_note2_image_window_g1_ParamLimits

0x4be7,	// (0x0001a2c4) popup_note2_image_window_g1

0xbccd,	// (0x000213aa) popup_note2_image_window_g2_ParamLimits

0xbccd,	// (0x000213aa) popup_note2_image_window_g2

0x0001,

0xfc59,	// (0x00025336) popup_note2_image_window_g_ParamLimits

0xfc59,	// (0x00025336) popup_note2_image_window_g

0x4c05,	// (0x0001a2e2) popup_note2_image_window_t1_ParamLimits

0x4c05,	// (0x0001a2e2) popup_note2_image_window_t1

0x4c1d,	// (0x0001a2fa) popup_note2_image_window_t2_ParamLimits

0x4c1d,	// (0x0001a2fa) popup_note2_image_window_t2

0x4c35,	// (0x0001a312) popup_note2_image_window_t3_ParamLimits

0x4c35,	// (0x0001a312) popup_note2_image_window_t3

0x0002,

0xfc5e,	// (0x0002533b) popup_note2_image_window_t_ParamLimits

0xfc5e,	// (0x0002533b) popup_note2_image_window_t

0x188a,	// (0x00016f67) popup_note2_wait_window_g1_ParamLimits

0x188a,	// (0x00016f67) popup_note2_wait_window_g1

0x1896,	// (0x00016f73) popup_note2_wait_window_g2_ParamLimits

0x1896,	// (0x00016f73) popup_note2_wait_window_g2

0x18a2,	// (0x00016f7f) popup_note2_wait_window_g3_ParamLimits

0x18a2,	// (0x00016f7f) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x00024eea) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x00024eea) popup_note2_wait_window_g

0x4c51,	// (0x0001a32e) popup_note2_wait_window_t1_ParamLimits

0x4c51,	// (0x0001a32e) popup_note2_wait_window_t1

0x4c6f,	// (0x0001a34c) popup_note2_wait_window_t2_ParamLimits

0x4c6f,	// (0x0001a34c) popup_note2_wait_window_t2

0x4c8d,	// (0x0001a36a) popup_note2_wait_window_t3_ParamLimits

0x4c8d,	// (0x0001a36a) popup_note2_wait_window_t3

0x4c9f,	// (0x0001a37c) popup_note2_wait_window_t4_ParamLimits

0x4c9f,	// (0x0001a37c) popup_note2_wait_window_t4

0x0003,

0xfc65,	// (0x00025342) popup_note2_wait_window_t_ParamLimits

0xfc65,	// (0x00025342) popup_note2_wait_window_t

0x4cb1,	// (0x0001a38e) wait_bar2_pane_ParamLimits

0x4cb1,	// (0x0001a38e) wait_bar2_pane

0x4cc9,	// (0x0001a3a6) popup_snote2_single_text_window_g1_ParamLimits

0x4cc9,	// (0x0001a3a6) popup_snote2_single_text_window_g1

0x4cf1,	// (0x0001a3ce) popup_snote2_single_text_window_t1_ParamLimits

0x4cf1,	// (0x0001a3ce) popup_snote2_single_text_window_t1

0x4d3d,	// (0x0001a41a) popup_snote2_single_text_window_t2_ParamLimits

0x4d3d,	// (0x0001a41a) popup_snote2_single_text_window_t2

0x4d89,	// (0x0001a466) popup_snote2_single_text_window_t3_ParamLimits

0x4d89,	// (0x0001a466) popup_snote2_single_text_window_t3

0x4dca,	// (0x0001a4a7) popup_snote2_single_text_window_t4_ParamLimits

0x4dca,	// (0x0001a4a7) popup_snote2_single_text_window_t4

0x4e00,	// (0x0001a4dd) popup_snote2_single_text_window_t5_ParamLimits

0x4e00,	// (0x0001a4dd) popup_snote2_single_text_window_t5

0x0004,

0xfc6e,	// (0x0002534b) popup_snote2_single_text_window_t_ParamLimits

0xfc6e,	// (0x0002534b) popup_snote2_single_text_window_t

0xbcdf,	// (0x000213bc) popup_snote2_single_graphic_window_g1_ParamLimits

0xbcdf,	// (0x000213bc) popup_snote2_single_graphic_window_g1

0x4e53,	// (0x0001a530) popup_snote2_single_graphic_window_g2_ParamLimits

0x4e53,	// (0x0001a530) popup_snote2_single_graphic_window_g2

0x0001,

0xfc79,	// (0x00025356) popup_snote2_single_graphic_window_g_ParamLimits

0xfc79,	// (0x00025356) popup_snote2_single_graphic_window_g

0x4e7b,	// (0x0001a558) popup_snote2_single_graphic_window_t1_ParamLimits

0x4e7b,	// (0x0001a558) popup_snote2_single_graphic_window_t1

0x4ec7,	// (0x0001a5a4) popup_snote2_single_graphic_window_t2_ParamLimits

0x4ec7,	// (0x0001a5a4) popup_snote2_single_graphic_window_t2

0x4d89,	// (0x0001a466) popup_snote2_single_graphic_window_t3_ParamLimits

0x4d89,	// (0x0001a466) popup_snote2_single_graphic_window_t3

0x4dca,	// (0x0001a4a7) popup_snote2_single_graphic_window_t4_ParamLimits

0x4dca,	// (0x0001a4a7) popup_snote2_single_graphic_window_t4

0x4e00,	// (0x0001a4dd) popup_snote2_single_graphic_window_t5_ParamLimits

0x4e00,	// (0x0001a4dd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7e,	// (0x0002535b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7e,	// (0x0002535b) popup_snote2_single_graphic_window_t

0x36b5,	// (0x00018d92) clock_nsta_pane_cp2_t1

0x36b5,	// (0x00018d92) clock_nsta_pane_cp2_t2

0x0001,

0xfa99,	// (0x00025176) clock_nsta_pane_cp2_t

0xc8ee,	// (0x00021fcb) form_field_data_wide_pane_g1_ParamLimits

0xc8fa,	// (0x00021fd7) form_field_data_wide_pane_g2_ParamLimits

0xc8fa,	// (0x00021fd7) form_field_data_wide_pane_g2

0xc906,	// (0x00021fe3) form_field_data_wide_pane_g3_ParamLimits

0xc906,	// (0x00021fe3) form_field_data_wide_pane_g3

0x0002,

0xf645,	// (0x00024d22) form_field_data_wide_pane_g_ParamLimits

0xf645,	// (0x00024d22) form_field_data_wide_pane_g

0xb55a,	// (0x00020c37) grid_touch_3_pane_ParamLimits

0xb55a,	// (0x00020c37) grid_touch_3_pane

0xbd07,	// (0x000213e4) cell_touch_3_pane_ParamLimits

0xbd07,	// (0x000213e4) cell_touch_3_pane

0x3c57,	// (0x00019334) cell_touch_3_pane_g1

0x3c57,	// (0x00019334) cell_touch_3_pane_g2

0x0001,

0xfb1e,	// (0x000251fb) cell_touch_3_pane_g

0xc68f,	// (0x00021d6c) cont_query_data_pane

0xc697,	// (0x00021d74) cont_query_data_pane_cp1

0x4f41,	// (0x0001a61e) button_value_adjust_pane_cp7

0x4f49,	// (0x0001a626) query_popup_pane_cp3

0xcdf0,	// (0x000224cd) bg_popup_sub_pane_cp22_ParamLimits

0x82ee,	// (0x0001d9cb) navi_navi_volume_pane_cp2

0x82fd,	// (0x0001d9da) popup_side_volume_key_window_g2

0x830c,	// (0x0001d9e9) popup_side_volume_key_window_g3

0x0002,

0xf6db,	// (0x00024db8) popup_side_volume_key_window_g

0x831b,	// (0x0001d9f8) popup_side_volume_key_window_t2

0x0001,

0xf6e2,	// (0x00024dbf) popup_side_volume_key_window_t

0xa513,	// (0x0001fbf0) popup_side_volume_key_window_ParamLimits

0x9cc4,	// (0x0001f3a1) list_double_graphic_pane_g4_ParamLimits

0x9cc4,	// (0x0001f3a1) list_double_graphic_pane_g4

0xb35e,	// (0x00020a3b) list_single_2heading_msg_pane_ParamLimits

0xb35e,	// (0x00020a3b) list_single_2heading_msg_pane

0xbd50,	// (0x0002142d) list_single_2heading_msg_pane_g1_ParamLimits

0xbd50,	// (0x0002142d) list_single_2heading_msg_pane_g1

0xbd5c,	// (0x00021439) list_single_2heading_msg_pane_g2_ParamLimits

0xbd5c,	// (0x00021439) list_single_2heading_msg_pane_g2

0xbd6f,	// (0x0002144c) list_single_2heading_msg_pane_g3_ParamLimits

0xbd6f,	// (0x0002144c) list_single_2heading_msg_pane_g3

0xbd7b,	// (0x00021458) list_single_2heading_msg_pane_g4_ParamLimits

0xbd7b,	// (0x00021458) list_single_2heading_msg_pane_g4

0x0003,

0xfc89,	// (0x00025366) list_single_2heading_msg_pane_g_ParamLimits

0xfc89,	// (0x00025366) list_single_2heading_msg_pane_g

0xbd93,	// (0x00021470) list_single_2heading_msg_pane_t1_ParamLimits

0xbd93,	// (0x00021470) list_single_2heading_msg_pane_t1

0xbdbb,	// (0x00021498) list_single_2heading_msg_pane_t2_ParamLimits

0xbdbb,	// (0x00021498) list_single_2heading_msg_pane_t2

0xbe26,	// (0x00021503) list_single_2heading_msg_pane_t3_ParamLimits

0xbe26,	// (0x00021503) list_single_2heading_msg_pane_t3

0x5038,	// (0x0001a715) list_single_2heading_msg_pane_t4_ParamLimits

0x5038,	// (0x0001a715) list_single_2heading_msg_pane_t4

0x0003,

0xfc92,	// (0x0002536f) list_single_2heading_msg_pane_t_ParamLimits

0xfc92,	// (0x0002536f) list_single_2heading_msg_pane_t

0xc443,	// (0x00021b20) title_pane_g4_ParamLimits

0xc443,	// (0x00021b20) title_pane_g4

0xe321,	// (0x000239fe) title_pane_stacon_g3_ParamLimits

0xe321,	// (0x000239fe) title_pane_stacon_g3

0x4a4f,	// (0x0001a12c) list_single_2graphic_im_pane_g4_ParamLimits

0x4a4f,	// (0x0001a12c) list_single_2graphic_im_pane_g4

0xb064,	// (0x00020741) popup_side_volume_key_window_cp

0x2bb1,	// (0x0001828e) main_idle_act2_pane_t1

0xe834,	// (0x00023f11) toolbar_button_pane_g10

0x9b9b,	// (0x0001f278) popup_toolbar_window_cp1

0x36a6,	// (0x00018d83) clock_nsta_pane_cp_t1

0x36a6,	// (0x00018d83) clock_nsta_pane_cp_t2

0x0001,

0xfa94,	// (0x00025171) clock_nsta_pane_cp_t

0x82ee,	// (0x0001d9cb) navi_navi_volume_pane_cp2_ParamLimits

0xe4f5,	// (0x00023bd2) popup_side_volume_key_window_g1_ParamLimits

0x82fd,	// (0x0001d9da) popup_side_volume_key_window_g2_ParamLimits

0x830c,	// (0x0001d9e9) popup_side_volume_key_window_g3_ParamLimits

0xf6db,	// (0x00024db8) popup_side_volume_key_window_g_ParamLimits

0xeb18,	// (0x000241f5) fep_hwr_aid_pane

0xebbf,	// (0x0002429c) bg_fep_hwr_top_pane_g4_ParamLimits

0x3cb3,	// (0x00019390) fep_hwr_top_pane_g1_ParamLimits

0x3cc5,	// (0x000193a2) fep_hwr_top_pane_g2_ParamLimits

0xebdf,	// (0x000242bc) fep_hwr_top_pane_g3_ParamLimits

0xfae9,	// (0x000251c6) fep_hwr_top_pane_g_ParamLimits

0xebf4,	// (0x000242d1) fep_hwr_top_text_pane_ParamLimits

0x2086,	// (0x00017763) aid_touch_tab_arrow_arrow_2

0x208f,	// (0x0001776c) aid_touch_tab_arrow_left_2

0xeb2c,	// (0x00024209) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xeb63,	// (0x00024240) fep_hwr_prediction_pane

0x3e1e,	// (0x000194fb) fep_vkb_prediction_pane

0xb8ed,	// (0x00020fca) fep_vkb_side_pane_g3_ParamLimits

0xb8ed,	// (0x00020fca) fep_vkb_side_pane_g3

0xecf8,	// (0x000243d5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xed64,	// (0x00024441) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xed71,	// (0x0002444e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb98,	// (0x00025275) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xee35,	// (0x00024512) fep_hwr_prediction_pane_g1

0xee3f,	// (0x0002451c) fep_hwr_prediction_pane_g2

0xee47,	// (0x00024524) fep_hwr_prediction_pane_g3

0xee4f,	// (0x0002452c) fep_hwr_prediction_pane_g4

0x0003,

0xfc9b,	// (0x00025378) fep_hwr_prediction_pane_g

0x505d,	// (0x0001a73a) fep_vkb_prediction_pane_g1

0x5067,	// (0x0001a744) fep_vkb_prediction_pane_g2

0x506f,	// (0x0001a74c) fep_vkb_prediction_pane_g3

0x5077,	// (0x0001a754) fep_vkb_prediction_pane_g4

0x0003,

0xfca4,	// (0x00025381) fep_vkb_prediction_pane_g

0x8d49,	// (0x0001e426) slider_set_pane_g3

0x8d5d,	// (0x0001e43a) slider_set_pane_g4

0x8d75,	// (0x0001e452) slider_set_pane_g5

0x8d49,	// (0x0001e426) slider_set_pane_g6

0x8d8b,	// (0x0001e468) slider_set_pane_g7

0x2714,	// (0x00017df1) slider_form_pane_g3

0x271d,	// (0x00017dfa) slider_form_pane_g4

0x2725,	// (0x00017e02) slider_form_pane_g5

0x2714,	// (0x00017df1) slider_form_pane_g6

0xb314,	// (0x000209f1) slider_form_pane_g7

0x2e95,	// (0x00018572) slider_set_pane_vc_g3

0x2e9e,	// (0x0001857b) slider_set_pane_vc_g4

0x2ea7,	// (0x00018584) slider_set_pane_vc_g5

0x2e95,	// (0x00018572) slider_set_pane_vc_g6

0x2eb0,	// (0x0001858d) slider_set_pane_vc_g7

0x3364,	// (0x00018a41) slider_form_pane_vc_g1

0x336d,	// (0x00018a4a) slider_form_pane_vc_g2

0x3376,	// (0x00018a53) slider_form_pane_vc_g3

0x3364,	// (0x00018a41) slider_form_pane_vc_g4

0x337f,	// (0x00018a5c) slider_form_pane_vc_g5

0x0004,

0xfa66,	// (0x00025143) slider_form_pane_vc_g

0xe2a8,	// (0x00023985) main_idle_act3_pane

0x507f,	// (0x0001a75c) ai3_links_pane

0xbe94,	// (0x00021571) popup_ai3_data_window_ParamLimits

0xbe94,	// (0x00021571) popup_ai3_data_window

0xc425,	// (0x00021b02) grid_ai3_links_pane

0xbeac,	// (0x00021589) cell_ai3_links_pane_ParamLimits

0xbeac,	// (0x00021589) cell_ai3_links_pane

0x50b8,	// (0x0001a795) bg_popup_sub_pane_cp11

0x50c5,	// (0x0001a7a2) cell_ai3_links_pane_g1

0xc425,	// (0x00021b02) bg_popup_sub_pane_cp12

0x50ea,	// (0x0001a7c7) heading_ai3_data_pane

0x50f2,	// (0x0001a7cf) list_ai3_gene_pane

0x50fe,	// (0x0001a7db) popup_ai3_data_window_g1

0x5106,	// (0x0001a7e3) heading_ai3_data_pane_g1

0x510e,	// (0x0001a7eb) heading_ai3_data_pane_t1

0xbec6,	// (0x000215a3) list_double_ai3_gene_pane_ParamLimits

0xbec6,	// (0x000215a3) list_double_ai3_gene_pane

0x5129,	// (0x0001a806) list_single_ai3_gene_pane_ParamLimits

0x5129,	// (0x0001a806) list_single_ai3_gene_pane

0x3c1c,	// (0x000192f9) list_highlight_pane_cp7_ParamLimits

0x3c1c,	// (0x000192f9) list_highlight_pane_cp7

0x5136,	// (0x0001a813) list_single_a13_gene_pane_t1_ParamLimits

0x5136,	// (0x0001a813) list_single_a13_gene_pane_t1

0x514d,	// (0x0001a82a) list_single_ai3_gene_pane_g1

0x5156,	// (0x0001a833) list_single_ai3_gene_pane_g2

0x0001,

0xfcad,	// (0x0002538a) list_single_ai3_gene_pane_g

0x515e,	// (0x0001a83b) list_double_ai3_gene_pane_g1_ParamLimits

0x515e,	// (0x0001a83b) list_double_ai3_gene_pane_g1

0xbed3,	// (0x000215b0) list_double_ai3_gene_pane_t1_ParamLimits

0xbed3,	// (0x000215b0) list_double_ai3_gene_pane_t1

0x5186,	// (0x0001a863) list_double_ai3_gene_pane_t2_ParamLimits

0x5186,	// (0x0001a863) list_double_ai3_gene_pane_t2

0x519b,	// (0x0001a878) list_double_ai3_gene_pane_t3_ParamLimits

0x519b,	// (0x0001a878) list_double_ai3_gene_pane_t3

0x0002,

0xfcb2,	// (0x0002538f) list_double_ai3_gene_pane_t_ParamLimits

0xfcb2,	// (0x0002538f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4f5a,	// (0x0001a637) aid_size_min_col_2

0xbd3a,	// (0x00021417) aid_size_min_msg_ParamLimits

0xbd3a,	// (0x00021417) aid_size_min_msg

0xb901,	// (0x00020fde) fep_vkb_top_text_pane_g2_ParamLimits

0xb901,	// (0x00020fde) fep_vkb_top_text_pane_g2

0x0001,

0xfb19,	// (0x000251f6) fep_vkb_top_text_pane_g_ParamLimits

0xfb19,	// (0x000251f6) fep_vkb_top_text_pane_g

0xe2a8,	// (0x00023985) main_hc_apps_shell_pane

0x51b8,	// (0x0001a895) grid_hc_apps_pane_ParamLimits

0x51b8,	// (0x0001a895) grid_hc_apps_pane

0x51ca,	// (0x0001a8a7) list_hc_apps_pane

0x51d2,	// (0x0001a8af) scroll_pane_cp37_ParamLimits

0x51d2,	// (0x0001a8af) scroll_pane_cp37

0xbeef,	// (0x000215cc) cell_hc_apps_pane_ParamLimits

0xbeef,	// (0x000215cc) cell_hc_apps_pane

0xbfad,	// (0x0002168a) cell_hc_apps_pane_g1_ParamLimits

0xbfad,	// (0x0002168a) cell_hc_apps_pane_g1

0x52bc,	// (0x0001a999) cell_hc_apps_pane_g2_ParamLimits

0x52bc,	// (0x0001a999) cell_hc_apps_pane_g2

0x52d8,	// (0x0001a9b5) cell_hc_apps_pane_g3_ParamLimits

0x52d8,	// (0x0001a9b5) cell_hc_apps_pane_g3

0x0002,

0xfcb9,	// (0x00025396) cell_hc_apps_pane_g_ParamLimits

0xfcb9,	// (0x00025396) cell_hc_apps_pane_g

0xbfd9,	// (0x000216b6) cell_hc_apps_pane_t1_ParamLimits

0xbfd9,	// (0x000216b6) cell_hc_apps_pane_t1

0xc5d9,	// (0x00021cb6) grid_highlight_pane_cp10_ParamLimits

0xc5d9,	// (0x00021cb6) grid_highlight_pane_cp10

0xc017,	// (0x000216f4) list_single_hc_apps_pane_ParamLimits

0xc017,	// (0x000216f4) list_single_hc_apps_pane

0xc047,	// (0x00021724) list_single_hc_apps_pane_g1

0xc060,	// (0x0002173d) list_single_hc_apps_pane_g2

0x0001,

0xfcc0,	// (0x0002539d) list_single_hc_apps_pane_g

0xc079,	// (0x00021756) list_single_hc_apps_pane_g2_copy1

0xc095,	// (0x00021772) list_single_hc_apps_pane_t1

0xc495,	// (0x00021b72) bg_set_opt_pane_cp_ParamLimits

0x8248,	// (0x0001d925) setting_slider_pane_t1_ParamLimits

0x8261,	// (0x0001d93e) setting_slider_pane_t2_ParamLimits

0x827b,	// (0x0001d958) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00024c14) setting_slider_pane_t_ParamLimits

0x8293,	// (0x0001d970) slider_set_pane_ParamLimits

0xe6f9,	// (0x00023dd6) control_pane_g5_ParamLimits

0xe6f9,	// (0x00023dd6) control_pane_g5

0xb196,	// (0x00020873) slider_set_pane_g1_ParamLimits

0xea06,	// (0x000240e3) slider_set_pane_g2_ParamLimits

0x8d49,	// (0x0001e426) slider_set_pane_g3_ParamLimits

0x8d5d,	// (0x0001e43a) slider_set_pane_g4_ParamLimits

0x8d75,	// (0x0001e452) slider_set_pane_g5_ParamLimits

0x8d49,	// (0x0001e426) slider_set_pane_g6_ParamLimits

0x8d8b,	// (0x0001e468) slider_set_pane_g7_ParamLimits

0xf929,	// (0x00025006) slider_set_pane_g_ParamLimits

0xd092,	// (0x0002276f) navi_icon_text_pane_ParamLimits

0xa70f,	// (0x0001fdec) aid_fill_nsta_2_ParamLimits

0xa746,	// (0x0001fe23) aid_touch_tab_arrow_left_ParamLimits

0xa75c,	// (0x0001fe39) aid_touch_tab_arrow_right_ParamLimits

0xa7f7,	// (0x0001fed4) clock_nsta_pane_ParamLimits

0x2068,	// (0x00017745) navi_icon_pane_g1_ParamLimits

0x2074,	// (0x00017751) navi_text_pane_t1_ParamLimits

0x37b6,	// (0x00018e93) navi_icon_text_pane_g1_ParamLimits

0x37c2,	// (0x00018e9f) navi_icon_text_pane_t1_ParamLimits

0xc047,	// (0x00021724) list_single_hc_apps_pane_g1_ParamLimits

0xc060,	// (0x0002173d) list_single_hc_apps_pane_g2_ParamLimits

0xfcc0,	// (0x0002539d) list_single_hc_apps_pane_g_ParamLimits

0xc079,	// (0x00021756) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc095,	// (0x00021772) list_single_hc_apps_pane_t1_ParamLimits

0x8170,	// (0x0001d84d) popup_toolbar2_fixed_window_ParamLimits

0x8170,	// (0x0001d84d) popup_toolbar2_fixed_window

0x8b69,	// (0x0001e246) popup_toolbar2_float_window

0xc425,	// (0x00021b02) bg_popup_sub_pane_cp27

0x5419,	// (0x0001aaf6) grid_toolbar2_float_pane

0xc425,	// (0x00021b02) bg_popup_sub_pane_cp26

0x5419,	// (0x0001aaf6) grid_toolbar2_fixed_pane

0xc0c3,	// (0x000217a0) cell_toolbar2_fixed_pane_ParamLimits

0xc0c3,	// (0x000217a0) cell_toolbar2_fixed_pane

0xc0dd,	// (0x000217ba) cell_toolbar2_fixed_pane_g1

0x1053,	// (0x00016730) toolbar2_fixed_button_pane

0x1101,	// (0x000167de) toolbar2_fixed_button_pane_g1

0x1111,	// (0x000167ee) toolbar2_fixed_button_pane_g2

0x1109,	// (0x000167e6) toolbar2_fixed_button_pane_g3

0x1121,	// (0x000167fe) toolbar2_fixed_button_pane_g4

0x1119,	// (0x000167f6) toolbar2_fixed_button_pane_g5

0x1129,	// (0x00016806) toolbar2_fixed_button_pane_g6

0x1131,	// (0x0001680e) toolbar2_fixed_button_pane_g7

0x1141,	// (0x0001681e) toolbar2_fixed_button_pane_g8

0x1139,	// (0x00016816) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x00024f08) toolbar2_fixed_button_pane_g

0x543a,	// (0x0001ab17) cell_toolbar2_float_pane_ParamLimits

0x543a,	// (0x0001ab17) cell_toolbar2_float_pane

0x544b,	// (0x0001ab28) cell_toolbar2_float_pane_g1

0x1053,	// (0x00016730) toolbar2_fixed_button_pane_cp

0xb7e9,	// (0x00020ec6) fep_vkb_accented_list_pane_ParamLimits

0xb7e9,	// (0x00020ec6) fep_vkb_accented_list_pane

0xecd8,	// (0x000243b5) bg_popup_fep_shadow_pane_g9

0xd1e5,	// (0x000228c2) bg_popup_fep_shadow_pane_cp3

0xca56,	// (0x00022133) list_accented_list_pane

0x5454,	// (0x0001ab31) list_single_accented_list_pane_ParamLimits

0x5454,	// (0x0001ab31) list_single_accented_list_pane

0xd1e5,	// (0x000228c2) list_highlight_pane_cp10

0x5465,	// (0x0001ab42) list_single_accented_list_pane_t1

0x8a93,	// (0x0001e170) popup_slider_window_ParamLimits

0x8a93,	// (0x0001e170) popup_slider_window

0x4f51,	// (0x0001a62e) aid_indentation_list_msg

0xc1ce,	// (0x000218ab) bg_popup_window_pane_cp19

0x558b,	// (0x0001ac68) popup_slider_window_g1

0x55a7,	// (0x0001ac84) popup_slider_window_g2

0x55c3,	// (0x0001aca0) popup_slider_window_g3

0x0005,

0xfcc5,	// (0x000253a2) popup_slider_window_g

0x5629,	// (0x0001ad06) popup_slider_window_t1

0x569d,	// (0x0001ad7a) small_volume_slider_vertical_pane

0x3c57,	// (0x00019334) small_volume_slider_vertical_pane_g1

0x3c57,	// (0x00019334) small_volume_slider_vertical_pane_g2

0x56b9,	// (0x0001ad96) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd7,	// (0x000253b4) small_volume_slider_vertical_pane_g

0x7f62,	// (0x0001d63f) area_side_right_pane_ParamLimits

0x7f62,	// (0x0001d63f) area_side_right_pane

0x8eb5,	// (0x0001e592) aid_size_side_button_ParamLimits

0x8eb5,	// (0x0001e592) aid_size_side_button

0x8ece,	// (0x0001e5ab) grid_sctrl_middle_pane_ParamLimits

0x8ece,	// (0x0001e5ab) grid_sctrl_middle_pane

0xee60,	// (0x0002453d) sctrl_sk_bottom_pane

0xee71,	// (0x0002454e) sctrl_sk_top_pane

0xee83,	// (0x00024560) aid_touch_sctrl_top

0xee90,	// (0x0002456d) bg_sctrl_sk_pane_ParamLimits

0xee90,	// (0x0002456d) bg_sctrl_sk_pane

0xee9e,	// (0x0002457b) sctrl_sk_top_pane_g1

0xeeab,	// (0x00024588) sctrl_sk_top_pane_t1

0xee83,	// (0x00024560) aid_touch_sctrl_bottom

0xee90,	// (0x0002456d) bg_sctrl_sk_pane_cp_ParamLimits

0xee90,	// (0x0002456d) bg_sctrl_sk_pane_cp

0xeec6,	// (0x000245a3) sctrl_sk_bottom_pane_g1

0xeeab,	// (0x00024588) sctrl_sk_bottom_pane_t1

0x8eed,	// (0x0001e5ca) cell_sctrl_middle_pane_ParamLimits

0x8eed,	// (0x0001e5ca) cell_sctrl_middle_pane

0x8f10,	// (0x0001e5ed) aid_touch_sctrl_middle_ParamLimits

0x8f10,	// (0x0001e5ed) aid_touch_sctrl_middle

0xee90,	// (0x0002456d) bg_sctrl_middle_pane_ParamLimits

0xee90,	// (0x0002456d) bg_sctrl_middle_pane

0xeecf,	// (0x000245ac) cell_sctrl_middle_pane_g1_ParamLimits

0xeecf,	// (0x000245ac) cell_sctrl_middle_pane_g1

0x8f24,	// (0x0001e601) cell_sctrl_middle_pane_g2_ParamLimits

0x8f24,	// (0x0001e601) cell_sctrl_middle_pane_g2

0x0001,

0xfce3,	// (0x000253c0) cell_sctrl_middle_pane_g_ParamLimits

0xfce3,	// (0x000253c0) cell_sctrl_middle_pane_g

0x1101,	// (0x000167de) bg_sctrl_middle_pane_g1

0x1109,	// (0x000167e6) bg_sctrl_middle_pane_g2

0x1111,	// (0x000167ee) bg_sctrl_middle_pane_g3

0x1119,	// (0x000167f6) bg_sctrl_middle_pane_g4

0x1121,	// (0x000167fe) bg_sctrl_middle_pane_g5

0x1129,	// (0x00016806) bg_sctrl_middle_pane_g6

0x1131,	// (0x0001680e) bg_sctrl_middle_pane_g7

0x1139,	// (0x00016816) bg_sctrl_middle_pane_g8

0x0007,

0xfce8,	// (0x000253c5) bg_sctrl_middle_pane_g

0x1141,	// (0x0001681e) bg_sctrl_middle_pane_g8_copy1

0x1101,	// (0x000167de) bg_sctrl_sk_pane_g1

0x1111,	// (0x000167ee) bg_sctrl_sk_pane_g2

0x1109,	// (0x000167e6) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x00024f08) bg_sctrl_sk_pane_g

0xc7a7,	// (0x00021e84) aid_size_touch_scroll_bar

0x1121,	// (0x000167fe) bg_sctrl_sk_pane_g4

0x1119,	// (0x000167f6) bg_sctrl_sk_pane_g5

0x1129,	// (0x00016806) bg_sctrl_sk_pane_g6

0x1131,	// (0x0001680e) bg_sctrl_sk_pane_g7

0x1141,	// (0x0001681e) bg_sctrl_sk_pane_g8

0x1139,	// (0x00016816) bg_sctrl_sk_pane_g9

0xe744,	// (0x00023e21) popup_fep_china_hwr2_fs_candidate_window

0x8559,	// (0x0001dc36) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8559,	// (0x0001dc36) popup_fep_china_hwr2_fs_control_window

0xecf8,	// (0x000243d5) sctrl_sk_top_pane_g2

0x0001,

0xfcde,	// (0x000253bb) sctrl_sk_top_pane_g

0xc264,	// (0x00021941) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc264,	// (0x00021941) aid_fep_china_hwr2_fs_cell

0xc278,	// (0x00021955) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc278,	// (0x00021955) bg_popup_fep_shadow_pane_cp4

0xc28f,	// (0x0002196c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc28f,	// (0x0002196c) bg_popup_fep_shadow_pane_cp5

0xc2a1,	// (0x0002197e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc2a1,	// (0x0002197e) popup_fep_china_hwr2_fs_control_bar_grid

0xd3e6,	// (0x00022ac3) popup_fep_china_hwr2_fs_control_funtion_grid

0x5715,	// (0x0001adf2) aid_fep_china_hwr2_fs_candi_cell

0xc425,	// (0x00021b02) bg_popup_fep_shadow_pane_cp6

0x571f,	// (0x0001adfc) popup_fep_china_hwr2_fs_candidate_grid

0xc2b5,	// (0x00021992) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc2b5,	// (0x00021992) cell_fep_china_hwr2_fs_funtion_grid

0x3c57,	// (0x00019334) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5741,	// (0x0001ae1e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5741,	// (0x0001ae1e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x574f,	// (0x0001ae2c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x574f,	// (0x0001ae2c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf9,	// (0x000253d6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf9,	// (0x000253d6) cell_fep_china_hwr2_fs_funtion_grid_g

0xc2cd,	// (0x000219aa) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc2cd,	// (0x000219aa) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc2e2,	// (0x000219bf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc2e2,	// (0x000219bf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfe,	// (0x000253db) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfe,	// (0x000253db) cell_fep_china_hwr2_fs_funtion_grid_t

0x5796,	// (0x0001ae73) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x579e,	// (0x0001ae7b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x57a6,	// (0x0001ae83) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd03,	// (0x000253e0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x57ae,	// (0x0001ae8b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x57ae,	// (0x0001ae8b) cell_fep_china_hwr2_fs_candidate_grid

0x57c7,	// (0x0001aea4) popup_fep_china_hwr2_fs_candidate_grid_g20

0x57cf,	// (0x0001aeac) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3c57,	// (0x00019334) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3c57,	// (0x00019334) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1e,	// (0x000251fb) cell_fep_china_hwr2_fs_candidate_grid_g

0x57d7,	// (0x0001aeb4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0ccc,	// (0x000163a9) clock_nsta_pane_cp_24_ParamLimits

0x0ccc,	// (0x000163a9) clock_nsta_pane_cp_24

0x0d4a,	// (0x00016427) indicator_nsta_pane_cp_24_ParamLimits

0x0d4a,	// (0x00016427) indicator_nsta_pane_cp_24

0x1ee4,	// (0x000175c1) heading_pane_g1

0x0001,

0xf890,	// (0x00024f6d) heading_pane_g

0x29fa,	// (0x000180d7) grid_sct_catagory_button_pane

0x2a2a,	// (0x00018107) scroll_pane_cp5_ParamLimits

0x3804,	// (0x00018ee1) button_value_adjust_pane_cp5_ParamLimits

0x3804,	// (0x00018ee1) button_value_adjust_pane_cp5

0x38fe,	// (0x00018fdb) form2_midp_time_pane_ParamLimits

0x57e5,	// (0x0001aec2) cell_sct_catagory_button_pane_ParamLimits

0x57e5,	// (0x0001aec2) cell_sct_catagory_button_pane

0x3c1c,	// (0x000192f9) bg_button_pane_cp01_ParamLimits

0x3c1c,	// (0x000192f9) bg_button_pane_cp01

0x3c57,	// (0x00019334) cell_sct_catagory_button_pane_g1

0x8b0c,	// (0x0001e1e9) popup_tb_extension_window

0xc2fe,	// (0x000219db) aid_size_cell_ext_ParamLimits

0xc2fe,	// (0x000219db) aid_size_cell_ext

0xc759,	// (0x00021e36) bg_tb_trans_pane_cp1_ParamLimits

0xc759,	// (0x00021e36) bg_tb_trans_pane_cp1

0xc324,	// (0x00021a01) grid_tb_ext_pane_ParamLimits

0xc324,	// (0x00021a01) grid_tb_ext_pane

0xc363,	// (0x00021a40) cell_tb_ext_pane_ParamLimits

0xc363,	// (0x00021a40) cell_tb_ext_pane

0xc38b,	// (0x00021a68) cell_tb_ext_pane_g1_ParamLimits

0xc38b,	// (0x00021a68) cell_tb_ext_pane_g1

0x587b,	// (0x0001af58) cell_tb_ext_pane_t1

0xc5d9,	// (0x00021cb6) list_highlight_pane_cp11_ParamLimits

0xc5d9,	// (0x00021cb6) list_highlight_pane_cp11

0x8185,	// (0x0001d862) popup_uni_indicator_window_ParamLimits

0x8185,	// (0x0001d862) popup_uni_indicator_window

0xc8cf,	// (0x00021fac) bg_popup_sub_pane_cp14

0xc3a8,	// (0x00021a85) list_uniindi_pane

0xc3b4,	// (0x00021a91) uniindi_top_pane

0xc5d9,	// (0x00021cb6) bg_uniindi_top_pane

0xc3d3,	// (0x00021ab0) uniindi_top_pane_g1

0xc3e9,	// (0x00021ac6) uniindi_top_pane_g2

0x0003,

0xfd0a,	// (0x000253e7) uniindi_top_pane_g

0xd3ff,	// (0x00022adc) uniindi_top_pane_t1

0x592c,	// (0x0001b009) list_single_uniindi_pane_ParamLimits

0x592c,	// (0x0001b009) list_single_uniindi_pane

0x3c57,	// (0x00019334) bg_uniindi_top_pane_g1

0x593f,	// (0x0001b01c) list_single_uniindi_pane_g1

0x5952,	// (0x0001b02f) list_single_uniindi_pane_t1

0xe2a8,	// (0x00023985) control_bg_pane

0x5977,	// (0x0001b054) bg_sctrl_sk_pane_cp1

0x5980,	// (0x0001b05d) bg_sctrl_sk_pane_cp2

0x5989,	// (0x0001b066) control_bg_pane_g1

0x5992,	// (0x0001b06f) control_bg_pane_g2

0x0001,

0xfd13,	// (0x000253f0) control_bg_pane_g

0x364a,	// (0x00018d27) cell_indicator_nsta_pane_g1_ParamLimits

0xb597,	// (0x00020c74) cell_indicator_nsta_pane_g2_ParamLimits

0xfa82,	// (0x0002515f) cell_indicator_nsta_pane_g_ParamLimits

0x3986,	// (0x00019063) form2_midp_time_pane_t1_ParamLimits

0xe736,	// (0x00023e13) main_idle_act4_pane_ParamLimits

0xe736,	// (0x00023e13) main_idle_act4_pane

0x8b0c,	// (0x0001e1e9) popup_tb_extension_window_ParamLimits

0xc349,	// (0x00021a26) tb_ext_find_pane_ParamLimits

0xc349,	// (0x00021a26) tb_ext_find_pane

0x599b,	// (0x0001b078) ai_gene_pane_1_cp1

0xd266,	// (0x00022943) ai_gene_pane_2_cp1

0xd429,	// (0x00022b06) list_single_idle_plugin_calendar_pane

0x59ac,	// (0x0001b089) list_single_idle_plugin_notification_pane

0x59b5,	// (0x0001b092) list_single_idle_plugin_player_pane

0xd432,	// (0x00022b0f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd432,	// (0x00022b0f) list_single_idle_plugin_shortcut_pane

0xd45a,	// (0x00022b37) main_idle_act4_pane_t1

0xd471,	// (0x00022b4e) main_idle_act4_pane_t2

0x0001,

0xfd18,	// (0x000253f5) main_idle_act4_pane_t

0xd488,	// (0x00022b65) middle_sk_idle_act4_pane_ParamLimits

0xd488,	// (0x00022b65) middle_sk_idle_act4_pane

0xd4a4,	// (0x00022b81) popup_clock_digital_analogue_window_cp2

0xd4d0,	// (0x00022bad) shortcut_wheel_idle_act4_pane_ParamLimits

0xd4d0,	// (0x00022bad) shortcut_wheel_idle_act4_pane

0x3c57,	// (0x00019334) shortcut_wheel_idle_act4_pane_g1

0x3c57,	// (0x00019334) shortcut_wheel_idle_act4_pane_g2

0x3c57,	// (0x00019334) shortcut_wheel_idle_act4_pane_g3

0x3c57,	// (0x00019334) shortcut_wheel_idle_act4_pane_g4

0x3c57,	// (0x00019334) shortcut_wheel_idle_act4_pane_g5

0x5a48,	// (0x0001b125) shortcut_wheel_idle_act4_pane_g6

0x5a50,	// (0x0001b12d) shortcut_wheel_idle_act4_pane_g7

0x5a58,	// (0x0001b135) shortcut_wheel_idle_act4_pane_g8

0x5a60,	// (0x0001b13d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1d,	// (0x000253fa) shortcut_wheel_idle_act4_pane_g

0xc3f5,	// (0x00021ad2) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3f5,	// (0x00021ad2) middle_sk_idle_act4_pane_g1

0xd54d,	// (0x00022c2a) middle_sk_idle_act4_pane_g2_ParamLimits

0xd54d,	// (0x00022c2a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd40,	// (0x0002541d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd40,	// (0x0002541d) middle_sk_idle_act4_pane_g

0xd565,	// (0x00022c42) middle_sk_idle_act4_pane_t1_ParamLimits

0xd565,	// (0x00022c42) middle_sk_idle_act4_pane_t1

0xd594,	// (0x00022c71) grid_ai_shortcut_pane_ParamLimits

0xd594,	// (0x00022c71) grid_ai_shortcut_pane

0xd5b1,	// (0x00022c8e) list_highlight_pane_cp16_ParamLimits

0xd5b1,	// (0x00022c8e) list_highlight_pane_cp16

0xd5be,	// (0x00022c9b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd5be,	// (0x00022c9b) list_single_idle_plugin_shortcut_pane_g1

0xd5ca,	// (0x00022ca7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd5ca,	// (0x00022ca7) list_single_idle_plugin_shortcut_pane_g2

0xd5e6,	// (0x00022cc3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd5e6,	// (0x00022cc3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd45,	// (0x00025422) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd45,	// (0x00025422) list_single_idle_plugin_shortcut_pane_g

0xd5fb,	// (0x00022cd8) cell_ai_shortcut_pane_ParamLimits

0xd5fb,	// (0x00022cd8) cell_ai_shortcut_pane

0xd611,	// (0x00022cee) cell_ai_shortcut_pane_g1_ParamLimits

0xd611,	// (0x00022cee) cell_ai_shortcut_pane_g1

0x599b,	// (0x0001b078) ai_gene_pane_1_cp2

0x5b90,	// (0x0001b26d) ai_gene_pane_2_cp2

0x5b98,	// (0x0001b275) list_highlight_pane_cp15

0xd633,	// (0x00022d10) list_single_idle_plugin_calendar_pane_g1

0x5b98,	// (0x0001b275) list_highlight_pane_cp17

0x5ba9,	// (0x0001b286) list_single_idle_plugin_calendar_pane_g1_copy1

0x5bb1,	// (0x0001b28e) list_single_idle_plugin_player_pane_g1

0x2c53,	// (0x00018330) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4c,	// (0x00025429) list_single_idle_plugin_player_pane_g

0x5bb9,	// (0x0001b296) list_single_idle_plugin_player_pane_t1

0x5bc7,	// (0x0001b2a4) list_single_idle_plugin_player_pane_t2

0x5bd5,	// (0x0001b2b2) list_single_idle_plugin_player_pane_t3

0x5be3,	// (0x0001b2c0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd51,	// (0x0002542e) list_single_idle_plugin_player_pane_t

0x5bf1,	// (0x0001b2ce) wait_bar_pane_cp15

0x5bf9,	// (0x0001b2d6) grid_ai_notification_pane

0x2c53,	// (0x00018330) list_single_idle_plugin_notification_pane_g1

0xd63b,	// (0x00022d18) cell_ai_notification_pane_ParamLimits

0xd63b,	// (0x00022d18) cell_ai_notification_pane

0x5c0f,	// (0x0001b2ec) cell_ai_notification_pane_g1

0x5c17,	// (0x0001b2f4) cell_ai_notification_pane_t1

0xd648,	// (0x00022d25) tb_ext_find_button_pane

0xd650,	// (0x00022d2d) tb_ext_find_pane_g1

0xd658,	// (0x00022d35) tb_ext_find_pane_t1

0xcd8f,	// (0x0002246c) tb_ext_find_button_pane_g1

0xd666,	// (0x00022d43) tb_ext_find_button_pane_g2

0x0001,

0xfd5a,	// (0x00025437) tb_ext_find_button_pane_g

0xd45a,	// (0x00022b37) main_idle_act4_pane_t1_ParamLimits

0xd471,	// (0x00022b4e) main_idle_act4_pane_t2_ParamLimits

0xfd18,	// (0x000253f5) main_idle_act4_pane_t_ParamLimits

0xd4a4,	// (0x00022b81) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd4bc,	// (0x00022b99) sat_plugin_idle_act4_pane_ParamLimits

0xd4bc,	// (0x00022b99) sat_plugin_idle_act4_pane

0xd66f,	// (0x00022d4c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd66f,	// (0x00022d4c) sat_plugin_idle_act4_pane_t1

0xd687,	// (0x00022d64) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd687,	// (0x00022d64) sat_plugin_idle_act4_pane_t2

0xd69f,	// (0x00022d7c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd69f,	// (0x00022d7c) sat_plugin_idle_act4_pane_t3

0xd6b7,	// (0x00022d94) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd6b7,	// (0x00022d94) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5f,	// (0x0002543c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5f,	// (0x0002543c) sat_plugin_idle_act4_pane_t

0x8100,	// (0x0001d7dd) popup_battery_window_ParamLimits

0x8100,	// (0x0001d7dd) popup_battery_window

0xc5d9,	// (0x00021cb6) bg_popup_sub_pane_cp25_ParamLimits

0xc5d9,	// (0x00021cb6) bg_popup_sub_pane_cp25

0x5c98,	// (0x0001b375) popup_battery_window_g1_ParamLimits

0x5c98,	// (0x0001b375) popup_battery_window_g1

0x5ca4,	// (0x0001b381) popup_battery_window_t1_ParamLimits

0x5ca4,	// (0x0001b381) popup_battery_window_t1

0x5cb6,	// (0x0001b393) popup_battery_window_t2_ParamLimits

0x5cb6,	// (0x0001b393) popup_battery_window_t2

0x0001,

0xfd68,	// (0x00025445) popup_battery_window_t_ParamLimits

0xfd68,	// (0x00025445) popup_battery_window_t

0xa567,	// (0x0001fc44) midp_canvas_pane_ParamLimits

0xa5d9,	// (0x0001fcb6) midp_keypad_pane_ParamLimits

0xa5d9,	// (0x0001fcb6) midp_keypad_pane

0xca7f,	// (0x0002215c) main_midp_pane_ParamLimits

0xb5a4,	// (0x00020c81) signal_pane_g2_cp_ParamLimits

0xd6cf,	// (0x00022dac) aid_size_cell_midp_keypad_ParamLimits

0xd6cf,	// (0x00022dac) aid_size_cell_midp_keypad

0xd6ed,	// (0x00022dca) midp_keyp_game_grid_pane_ParamLimits

0xd6ed,	// (0x00022dca) midp_keyp_game_grid_pane

0xd714,	// (0x00022df1) midp_keyp_rocker_pane_ParamLimits

0xd714,	// (0x00022df1) midp_keyp_rocker_pane

0xd765,	// (0x00022e42) midp_keyp_sk_left_pane_ParamLimits

0xd765,	// (0x00022e42) midp_keyp_sk_left_pane

0xd7b9,	// (0x00022e96) midp_keyp_sk_right_pane_ParamLimits

0xd7b9,	// (0x00022e96) midp_keyp_sk_right_pane

0xc425,	// (0x00021b02) bg_button_pane_cp03

0xd80d,	// (0x00022eea) midp_keyp_sk_left_pane_g1

0xc425,	// (0x00021b02) bg_button_pane_cp04

0xd80d,	// (0x00022eea) midp_keyp_sk_right_pane_g1

0x3c57,	// (0x00019334) midp_keyp_rocker_pane_g1

0xd816,	// (0x00022ef3) keyp_game_cell_pane_ParamLimits

0xd816,	// (0x00022ef3) keyp_game_cell_pane

0xc425,	// (0x00021b02) bg_button_pane_cp02

0xd83a,	// (0x00022f17) keyp_game_cell_pane_g1

0x8120,	// (0x0001d7fd) popup_fep_vkb2_window_ParamLimits

0x8120,	// (0x0001d7fd) popup_fep_vkb2_window

0x8f3c,	// (0x0001e619) aid_size_cell_vkb2_ParamLimits

0x8f3c,	// (0x0001e619) aid_size_cell_vkb2

0x8f70,	// (0x0001e64d) popup_fep_vkb2_window_g1_ParamLimits

0x8f70,	// (0x0001e64d) popup_fep_vkb2_window_g1

0x8fc0,	// (0x0001e69d) vkb2_area_bottom_pane_ParamLimits

0x8fc0,	// (0x0001e69d) vkb2_area_bottom_pane

0x9014,	// (0x0001e6f1) vkb2_area_keypad_pane_ParamLimits

0x9014,	// (0x0001e6f1) vkb2_area_keypad_pane

0x905c,	// (0x0001e739) vkb2_area_top_pane_ParamLimits

0x905c,	// (0x0001e739) vkb2_area_top_pane

0x90e8,	// (0x0001e7c5) vkb2_top_entry_pane_ParamLimits

0x90e8,	// (0x0001e7c5) vkb2_top_entry_pane

0x9115,	// (0x0001e7f2) vkb2_top_grid_left_pane_ParamLimits

0x9115,	// (0x0001e7f2) vkb2_top_grid_left_pane

0x9136,	// (0x0001e813) vkb2_top_grid_right_pane_ParamLimits

0x9136,	// (0x0001e813) vkb2_top_grid_right_pane

0xef05,	// (0x000245e2) vkb2_cell_keypad_pane_ParamLimits

0xef05,	// (0x000245e2) vkb2_cell_keypad_pane

0x917e,	// (0x0001e85b) vkb2_area_bottom_grid_pane_ParamLimits

0x917e,	// (0x0001e85b) vkb2_area_bottom_grid_pane

0x91a8,	// (0x0001e885) vkb2_area_bottom_pane_g1_ParamLimits

0x91a8,	// (0x0001e885) vkb2_area_bottom_pane_g1

0x91ce,	// (0x0001e8ab) vkb2_area_bottom_pane_g2_ParamLimits

0x91ce,	// (0x0001e8ab) vkb2_area_bottom_pane_g2

0x91ff,	// (0x0001e8dc) vkb2_area_bottom_pane_g3_ParamLimits

0x91ff,	// (0x0001e8dc) vkb2_area_bottom_pane_g3

0x0002,

0xfd6d,	// (0x0002544a) vkb2_area_bottom_pane_g_ParamLimits

0xfd6d,	// (0x0002544a) vkb2_area_bottom_pane_g

0xefb2,	// (0x0002468f) vkb2_top_cell_left_pane_ParamLimits

0xefb2,	// (0x0002468f) vkb2_top_cell_left_pane

0xd843,	// (0x00022f20) vkb2_top_entry_pane_g1_ParamLimits

0xd843,	// (0x00022f20) vkb2_top_entry_pane_g1

0xd851,	// (0x00022f2e) vkb2_top_entry_pane_t1_ParamLimits

0xd851,	// (0x00022f2e) vkb2_top_entry_pane_t1

0x5e67,	// (0x0001b544) vkb2_top_entry_pane_t2_ParamLimits

0x5e67,	// (0x0001b544) vkb2_top_entry_pane_t2

0x5e99,	// (0x0001b576) vkb2_top_entry_pane_t3_ParamLimits

0x5e99,	// (0x0001b576) vkb2_top_entry_pane_t3

0x0002,

0xfd74,	// (0x00025451) vkb2_top_entry_pane_t_ParamLimits

0xfd74,	// (0x00025451) vkb2_top_entry_pane_t

0x9269,	// (0x0001e946) vkb2_top_grid_right_pane_g1_ParamLimits

0x9269,	// (0x0001e946) vkb2_top_grid_right_pane_g1

0xefff,	// (0x000246dc) vkb2_top_grid_right_pane_g2_ParamLimits

0xefff,	// (0x000246dc) vkb2_top_grid_right_pane_g2

0xf017,	// (0x000246f4) vkb2_top_grid_right_pane_g3_ParamLimits

0xf017,	// (0x000246f4) vkb2_top_grid_right_pane_g3

0x927f,	// (0x0001e95c) vkb2_top_grid_right_pane_g4_ParamLimits

0x927f,	// (0x0001e95c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7b,	// (0x00025458) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7b,	// (0x00025458) vkb2_top_grid_right_pane_g

0xf02f,	// (0x0002470c) vkb2_top_cell_left_pane_g1

0xf051,	// (0x0002472e) vkb2_cell_keypad_pane_g1_ParamLimits

0xf051,	// (0x0002472e) vkb2_cell_keypad_pane_g1

0x5ebd,	// (0x0001b59a) vkb2_cell_keypad_pane_t1_ParamLimits

0x5ebd,	// (0x0001b59a) vkb2_cell_keypad_pane_t1

0xf05f,	// (0x0002473c) vkb2_cell_bottom_grid_pane_ParamLimits

0xf05f,	// (0x0002473c) vkb2_cell_bottom_grid_pane

0xf098,	// (0x00024775) vkb2_cell_bottom_grid_pane_g1

0xd4f1,	// (0x00022bce) aid_call2_pane_cp02

0xd4f9,	// (0x00022bd6) aid_call_pane_cp02

0xd501,	// (0x00022bde) clock_digital_number_pane_cp10

0xd509,	// (0x00022be6) clock_digital_number_pane_cp11

0xd511,	// (0x00022bee) clock_digital_number_pane_cp12

0xd519,	// (0x00022bf6) clock_digital_number_pane_cp13

0xd521,	// (0x00022bfe) clock_digital_separator_pane_cp10

0xcd8f,	// (0x0002246c) popup_clock_digital_analogue_window_cp2_g1

0xcd8f,	// (0x0002246c) popup_clock_digital_analogue_window_cp2_g2

0xd529,	// (0x00022c06) popup_clock_digital_analogue_window_cp2_g3

0xcd8f,	// (0x0002246c) popup_clock_digital_analogue_window_cp2_g4

0xd529,	// (0x00022c06) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd30,	// (0x0002540d) popup_clock_digital_analogue_window_cp2_g

0xd531,	// (0x00022c0e) popup_clock_digital_analogue_window_cp2_t1

0xd53f,	// (0x00022c1c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3b,	// (0x00025418) popup_clock_digital_analogue_window_cp2_t

0x3c57,	// (0x00019334) clock_digital_number_pane_cp10_g1

0x3c57,	// (0x00019334) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1e,	// (0x000251fb) clock_digital_number_pane_cp10_g

0x3c57,	// (0x00019334) clock_digital_separator_pane_cp10_g1

0x3c57,	// (0x00019334) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1e,	// (0x000251fb) clock_digital_separator_pane_cp10_g

0xd3ee,	// (0x00022acb) uniindi_top_pane_g3

0x58f5,	// (0x0001afd2) uniindi_top_pane_g4

0xef90,	// (0x0002466d) vkb2_row_keypad_pane_ParamLimits

0xef90,	// (0x0002466d) vkb2_row_keypad_pane

0xf0b8,	// (0x00024795) vkb2_cell_t_keypad_pane_ParamLimits

0xf0b8,	// (0x00024795) vkb2_cell_t_keypad_pane

0xf0c8,	// (0x000247a5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf0c8,	// (0x000247a5) vkb2_cell_t_keypad_pane_cp08

0xf0db,	// (0x000247b8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf0db,	// (0x000247b8) vkb2_cell_t_keypad_pane_cp09

0xf0ef,	// (0x000247cc) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf0ef,	// (0x000247cc) vkb2_cell_t_keypad_pane_cp01

0xf100,	// (0x000247dd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf100,	// (0x000247dd) vkb2_cell_t_keypad_pane_cp02

0xf111,	// (0x000247ee) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf111,	// (0x000247ee) vkb2_cell_t_keypad_pane_cp03

0xf122,	// (0x000247ff) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf122,	// (0x000247ff) vkb2_cell_t_keypad_pane_cp04

0xf133,	// (0x00024810) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf133,	// (0x00024810) vkb2_cell_t_keypad_pane_cp05

0xf144,	// (0x00024821) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf144,	// (0x00024821) vkb2_cell_t_keypad_pane_cp06

0xf155,	// (0x00024832) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf155,	// (0x00024832) vkb2_cell_t_keypad_pane_cp07

0xf166,	// (0x00024843) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf166,	// (0x00024843) vkb2_cell_t_keypad_pane_cp10

0xecf8,	// (0x000243d5) vkb2_cell_t_keypad_pane_g1

0x5ed4,	// (0x0001b5b1) vkb2_cell_t_keypad_pane_t1

0xe2a8,	// (0x00023985) popup_grid_graphic2_window

0xd88a,	// (0x00022f67) aid_size_cell_graphic2_ParamLimits

0xd88a,	// (0x00022f67) aid_size_cell_graphic2

0xd8c8,	// (0x00022fa5) bg_popup_window_pane_cp21_ParamLimits

0xd8c8,	// (0x00022fa5) bg_popup_window_pane_cp21

0xd8d6,	// (0x00022fb3) graphic2_pages_pane_ParamLimits

0xd8d6,	// (0x00022fb3) graphic2_pages_pane

0xd92c,	// (0x00023009) grid_graphic2_control_pane_ParamLimits

0xd92c,	// (0x00023009) grid_graphic2_control_pane

0xd974,	// (0x00023051) grid_graphic2_pane_ParamLimits

0xd974,	// (0x00023051) grid_graphic2_pane

0xd9fb,	// (0x000230d8) cell_graphic2_pane

0xe2a8,	// (0x00023985) main_comp_mode_pane

0x50f2,	// (0x0001a7cf) list_ai3_gene_pane_ParamLimits

0xc1ce,	// (0x000218ab) bg_popup_window_pane_cp19_ParamLimits

0x552f,	// (0x0001ac0c) bg_touch_area_indi_pane_ParamLimits

0x552f,	// (0x0001ac0c) bg_touch_area_indi_pane

0x5545,	// (0x0001ac22) bg_touch_area_indi_pane_cp01_ParamLimits

0x5545,	// (0x0001ac22) bg_touch_area_indi_pane_cp01

0x555b,	// (0x0001ac38) bg_touch_area_indi_pane_cp02_ParamLimits

0x555b,	// (0x0001ac38) bg_touch_area_indi_pane_cp02

0x5571,	// (0x0001ac4e) bg_touch_area_indi_pane_cp03_ParamLimits

0x5571,	// (0x0001ac4e) bg_touch_area_indi_pane_cp03

0x558b,	// (0x0001ac68) popup_slider_window_g1_ParamLimits

0x55a7,	// (0x0001ac84) popup_slider_window_g2_ParamLimits

0x55c3,	// (0x0001aca0) popup_slider_window_g3_ParamLimits

0xfcc5,	// (0x000253a2) popup_slider_window_g_ParamLimits

0x5629,	// (0x0001ad06) popup_slider_window_t1_ParamLimits

0x569d,	// (0x0001ad7a) small_volume_slider_vertical_pane_ParamLimits

0xd9fb,	// (0x000230d8) cell_graphic2_pane_ParamLimits

0xda56,	// (0x00023133) bg_button_pane_cp10_ParamLimits

0xda56,	// (0x00023133) bg_button_pane_cp10

0xda69,	// (0x00023146) bg_button_pane_cp11_ParamLimits

0xda69,	// (0x00023146) bg_button_pane_cp11

0xda7c,	// (0x00023159) graphic2_pages_pane_g1_ParamLimits

0xda7c,	// (0x00023159) graphic2_pages_pane_g1

0xda97,	// (0x00023174) graphic2_pages_pane_g2_ParamLimits

0xda97,	// (0x00023174) graphic2_pages_pane_g2

0x0001,

0xfd89,	// (0x00025466) graphic2_pages_pane_g_ParamLimits

0xfd89,	// (0x00025466) graphic2_pages_pane_g

0xdaaf,	// (0x0002318c) graphic2_pages_pane_t1_ParamLimits

0xdaaf,	// (0x0002318c) graphic2_pages_pane_t1

0xdac7,	// (0x000231a4) cell_graphic2_control_pane_ParamLimits

0xdac7,	// (0x000231a4) cell_graphic2_control_pane

0xdaf9,	// (0x000231d6) cell_graphic2_pane_g1_ParamLimits

0xdaf9,	// (0x000231d6) cell_graphic2_pane_g1

0xc403,	// (0x00021ae0) cell_graphic2_pane_g2_ParamLimits

0xc403,	// (0x00021ae0) cell_graphic2_pane_g2

0xd3c1,	// (0x00022a9e) cell_graphic2_pane_g3_ParamLimits

0xd3c1,	// (0x00022a9e) cell_graphic2_pane_g3

0xc410,	// (0x00021aed) cell_graphic2_pane_g4_ParamLimits

0xc410,	// (0x00021aed) cell_graphic2_pane_g4

0xdb06,	// (0x000231e3) cell_graphic2_pane_g5_ParamLimits

0xdb06,	// (0x000231e3) cell_graphic2_pane_g5

0x0004,

0xfd8e,	// (0x0002546b) cell_graphic2_pane_g_ParamLimits

0xfd8e,	// (0x0002546b) cell_graphic2_pane_g

0xdb23,	// (0x00023200) cell_graphic2_pane_t1_ParamLimits

0xdb23,	// (0x00023200) cell_graphic2_pane_t1

0x1ed8,	// (0x000175b5) grid_highlight_pane_cp11_ParamLimits

0x1ed8,	// (0x000175b5) grid_highlight_pane_cp11

0xc5d9,	// (0x00021cb6) bg_button_pane_cp05

0xdb6d,	// (0x0002324a) cell_graphic2_control_pane_g1

0x3c57,	// (0x00019334) bg_touch_area_indi_pane_g1

0x61ce,	// (0x0001b8ab) aid_cmod_rocker_key_size

0x61d8,	// (0x0001b8b5) aid_cmode_itu_key_size

0x61e2,	// (0x0001b8bf) main_cmode_video_pane

0x61ec,	// (0x0001b8c9) main_comp_mode_itu_pane

0x61f8,	// (0x0001b8d5) main_comp_mode_rocker_pane

0x6204,	// (0x0001b8e1) cell_cmode_rocker_pane_ParamLimits

0x6204,	// (0x0001b8e1) cell_cmode_rocker_pane

0x6216,	// (0x0001b8f3) cell_cmode_itu_pane_ParamLimits

0x6216,	// (0x0001b8f3) cell_cmode_itu_pane

0xc8cf,	// (0x00021fac) bg_button_pane_cp06_ParamLimits

0xc8cf,	// (0x00021fac) bg_button_pane_cp06

0x3ec7,	// (0x000195a4) cell_cmode_rocker_pane_g1_ParamLimits

0x3ec7,	// (0x000195a4) cell_cmode_rocker_pane_g1

0x5741,	// (0x0001ae1e) cell_cmode_rocker_pane_g2_ParamLimits

0x5741,	// (0x0001ae1e) cell_cmode_rocker_pane_g2

0x0001,

0xfd9e,	// (0x0002547b) cell_cmode_rocker_pane_g_ParamLimits

0xfd9e,	// (0x0002547b) cell_cmode_rocker_pane_g

0xc425,	// (0x00021b02) bg_button_pane_cp07

0x622b,	// (0x0001b908) cell_cmode_itu_pane_g1

0x6234,	// (0x0001b911) cell_cmode_itu_pane_t1

0x6242,	// (0x0001b91f) cell_cmode_itu_pane_t2

0x0001,

0xfda3,	// (0x00025480) cell_cmode_itu_pane_t

0x5967,	// (0x0001b044) aid_touch_ctrl_left

0x596f,	// (0x0001b04c) aid_touch_ctrl_right

0xc425,	// (0x00021b02) compa_mode_pane

0xdb93,	// (0x00023270) aid_cmod_rocker_key_size_cp

0xdb9d,	// (0x0002327a) aid_cmode_itu_key_size_cp

0x6264,	// (0x0001b941) compa_mode_pane_g1

0x626c,	// (0x0001b949) compa_mode_pane_g2

0x6274,	// (0x0001b951) compa_mode_pane_g3

0x0002,

0xfda8,	// (0x00025485) compa_mode_pane_g

0xdba7,	// (0x00023284) main_comp_mode_itu_pane_cp

0xdbaf,	// (0x0002328c) main_comp_mode_rocker_pane_cp

0xdbb7,	// (0x00023294) cell_cmode_itu_pane_cp_ParamLimits

0xdbb7,	// (0x00023294) cell_cmode_itu_pane_cp

0xdbcc,	// (0x000232a9) cell_cmode_rocker_pane_cp_ParamLimits

0xdbcc,	// (0x000232a9) cell_cmode_rocker_pane_cp

0xc8cf,	// (0x00021fac) bg_button_pane_cp06_cp_ParamLimits

0xc8cf,	// (0x00021fac) bg_button_pane_cp06_cp

0x3ec7,	// (0x000195a4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3ec7,	// (0x000195a4) cell_cmode_rocker_pane_g1_cp

0x3c57,	// (0x00019334) cell_cmode_rocker_pane_g2_cp

0xc425,	// (0x00021b02) bg_button_pane_cp07_cp

0xdbde,	// (0x000232bb) cell_cmode_itu_pane_g1_cp

0xdbe7,	// (0x000232c4) cell_cmode_itu_pane_t1_cp

0xdbe7,	// (0x000232c4) cell_cmode_itu_pane_t2_cp

0xb30a,	// (0x000209e7) settings_code_pane_cp2

0xc495,	// (0x00021b72) bg_popup_window_pane_cp3_ParamLimits

0xc6f2,	// (0x00021dcf) heading_pane_cp3_ParamLimits

0xc701,	// (0x00021dde) listscroll_popup_graphic_pane_ParamLimits

0xeb18,	// (0x000241f5) fep_hwr_aid_pane_ParamLimits

0xee83,	// (0x00024560) aid_touch_sctrl_top_ParamLimits

0xee9e,	// (0x0002457b) sctrl_sk_top_pane_g1_ParamLimits

0xecf8,	// (0x000243d5) sctrl_sk_top_pane_g2_ParamLimits

0xfcde,	// (0x000253bb) sctrl_sk_top_pane_g_ParamLimits

0xeeab,	// (0x00024588) sctrl_sk_top_pane_t1_ParamLimits

0xee83,	// (0x00024560) aid_touch_sctrl_bottom_ParamLimits

0xeeab,	// (0x00024588) sctrl_sk_bottom_pane_t1_ParamLimits

0xc3c1,	// (0x00021a9e) aid_area_touch_clock

0x90a8,	// (0x0001e785) aid_vkb2_area_top_pane_cell_ParamLimits

0x90a8,	// (0x0001e785) aid_vkb2_area_top_pane_cell

0x9157,	// (0x0001e834) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9157,	// (0x0001e834) aid_vkb2_area_bottom_pane_cell

0x5e1f,	// (0x0001b4fc) popup_char_count_window

0x62ca,	// (0x0001b9a7) popup_char_count_window_g1

0x62d3,	// (0x0001b9b0) popup_char_count_window_g2

0x62dc,	// (0x0001b9b9) popup_char_count_window_g3

0x0002,

0xfdaf,	// (0x0002548c) popup_char_count_window_g

0x62e5,	// (0x0001b9c2) popup_char_count_window_t1

0xeeeb,	// (0x000245c8) popup_fep_char_preview_window_ParamLimits

0xeeeb,	// (0x000245c8) popup_fep_char_preview_window

0x90c8,	// (0x0001e7a5) vkb2_top_candi_pane_ParamLimits

0x90c8,	// (0x0001e7a5) vkb2_top_candi_pane

0xdbf5,	// (0x000232d2) cell_vkb2_top_candi_pane_ParamLimits

0xdbf5,	// (0x000232d2) cell_vkb2_top_candi_pane

0xf17b,	// (0x00024858) bg_popup_fep_char_preview_window_ParamLimits

0xf17b,	// (0x00024858) bg_popup_fep_char_preview_window

0xf189,	// (0x00024866) popup_fep_char_preview_window_t1_ParamLimits

0xf189,	// (0x00024866) popup_fep_char_preview_window_t1

0x633d,	// (0x0001ba1a) bg_popup_fep_char_preview_window_g1

0x6345,	// (0x0001ba22) bg_popup_fep_char_preview_window_g2

0x634d,	// (0x0001ba2a) bg_popup_fep_char_preview_window_g3

0x6355,	// (0x0001ba32) bg_popup_fep_char_preview_window_g4

0x635d,	// (0x0001ba3a) bg_popup_fep_char_preview_window_g5

0x6365,	// (0x0001ba42) bg_popup_fep_char_preview_window_g6

0x636d,	// (0x0001ba4a) bg_popup_fep_char_preview_window_g7

0x6375,	// (0x0001ba52) bg_popup_fep_char_preview_window_g8

0x637d,	// (0x0001ba5a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb6,	// (0x00025493) bg_popup_fep_char_preview_window_g

0xecf8,	// (0x000243d5) cell_vkb2_top_candi_pane_g1_ParamLimits

0xecf8,	// (0x000243d5) cell_vkb2_top_candi_pane_g1

0xed06,	// (0x000243e3) cell_vkb2_top_candi_pane_g2_ParamLimits

0xed06,	// (0x000243e3) cell_vkb2_top_candi_pane_g2

0x6173,	// (0x0001b850) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6173,	// (0x0001b850) cell_vkb2_top_candi_pane_g3

0xf1c3,	// (0x000248a0) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf1c3,	// (0x000248a0) cell_vkb2_top_candi_pane_g4

0x4560,	// (0x00019c3d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4560,	// (0x00019c3d) cell_vkb2_top_candi_pane_g5

0xf1e4,	// (0x000248c1) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf1e4,	// (0x000248c1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x000254a8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x000254a8) cell_vkb2_top_candi_pane_g

0xf1f2,	// (0x000248cf) cell_vkb2_top_candi_pane_t1

0x8d35,	// (0x0001e412) aid_size_touch_slider_mark_ParamLimits

0x8d35,	// (0x0001e412) aid_size_touch_slider_mark

0xd912,	// (0x00022fef) grid_graphic2_catg_pane_ParamLimits

0xd912,	// (0x00022fef) grid_graphic2_catg_pane

0xd9ce,	// (0x000230ab) popup_grid_graphic2_window_t1_ParamLimits

0xd9ce,	// (0x000230ab) popup_grid_graphic2_window_t1

0xd9e4,	// (0x000230c1) popup_grid_graphic2_window_t2_ParamLimits

0xd9e4,	// (0x000230c1) popup_grid_graphic2_window_t2

0x0001,

0xfd84,	// (0x00025461) popup_grid_graphic2_window_t_ParamLimits

0xfd84,	// (0x00025461) popup_grid_graphic2_window_t

0xc5d9,	// (0x00021cb6) bg_button_pane_cp05_ParamLimits

0xdb6d,	// (0x0002324a) cell_graphic2_control_pane_g1_ParamLimits

0xdc55,	// (0x00023332) cell_graphic2_catg_pane_ParamLimits

0xdc55,	// (0x00023332) cell_graphic2_catg_pane

0xc425,	// (0x00021b02) bg_button_pane_cp12

0xdc67,	// (0x00023344) cell_graphic2_catg_pane_g1

0x587b,	// (0x0001af58) cell_tb_ext_pane_t1_ParamLimits

0xefd2,	// (0x000246af) vkb2_top_cell_right_narrow_pane_ParamLimits

0xefd2,	// (0x000246af) vkb2_top_cell_right_narrow_pane

0xefea,	// (0x000246c7) vkb2_top_cell_right_wide_pane_ParamLimits

0xefea,	// (0x000246c7) vkb2_top_cell_right_wide_pane

0xe736,	// (0x00023e13) bg_vkb2_func_pane_ParamLimits

0xe736,	// (0x00023e13) bg_vkb2_func_pane

0xf02f,	// (0x0002470c) vkb2_top_cell_left_pane_g1_ParamLimits

0xe736,	// (0x00023e13) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe736,	// (0x00023e13) bg_vkb2_fuc_pane_cp03

0xf098,	// (0x00024775) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1109,	// (0x000167e6) bg_vkb2_func_pane_g1

0x1111,	// (0x000167ee) bg_vkb2_func_pane_g2

0x1121,	// (0x000167fe) bg_vkb2_func_pane_g3

0x1119,	// (0x000167f6) bg_vkb2_func_pane_g4

0x1129,	// (0x00016806) bg_vkb2_func_pane_g5

0x1131,	// (0x0001680e) bg_vkb2_func_pane_g6

0x1139,	// (0x00016816) bg_vkb2_func_pane_g7

0x1141,	// (0x0001681e) bg_vkb2_func_pane_g8

0x1101,	// (0x000167de) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x000254b5) bg_vkb2_func_pane_g

0xe736,	// (0x00023e13) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe736,	// (0x00023e13) bg_vkb2_fuc_pane_cp01

0xf02f,	// (0x0002470c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf02f,	// (0x0002470c) vkb2_top_cell_right_wide_pane_g1

0xe736,	// (0x00023e13) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe736,	// (0x00023e13) bg_vkb2_fuc_pane_cp02

0xf211,	// (0x000248ee) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf211,	// (0x000248ee) vkb2_top_cell_right_narrow_pane_g1

0xc110,	// (0x000217ed) aid_touch_area_decrease_ParamLimits

0xc110,	// (0x000217ed) aid_touch_area_decrease

0xc14a,	// (0x00021827) aid_touch_area_increase_ParamLimits

0xc14a,	// (0x00021827) aid_touch_area_increase

0xc172,	// (0x0002184f) aid_touch_area_mute_ParamLimits

0xc172,	// (0x0002184f) aid_touch_area_mute

0xc19a,	// (0x00021877) aid_touch_area_slider_ParamLimits

0xc19a,	// (0x00021877) aid_touch_area_slider

0xc1da,	// (0x000218b7) popup_slider_window_g4_ParamLimits

0xc1da,	// (0x000218b7) popup_slider_window_g4

0xc1f4,	// (0x000218d1) popup_slider_window_g5_ParamLimits

0xc1f4,	// (0x000218d1) popup_slider_window_g5

0xc21a,	// (0x000218f7) popup_slider_window_g6_ParamLimits

0xc21a,	// (0x000218f7) popup_slider_window_g6

0x5657,	// (0x0001ad34) popup_slider_window_t2_ParamLimits

0x5657,	// (0x0001ad34) popup_slider_window_t2

0x0001,

0xfcd2,	// (0x000253af) popup_slider_window_t_ParamLimits

0xfcd2,	// (0x000253af) popup_slider_window_t

0xc230,	// (0x0002190d) slider_pane_ParamLimits

0xc230,	// (0x0002190d) slider_pane

0x63a0,	// (0x0001ba7d) slider_pane_g1_ParamLimits

0x63a0,	// (0x0001ba7d) slider_pane_g1

0x63b4,	// (0x0001ba91) slider_pane_g2_ParamLimits

0x63b4,	// (0x0001ba91) slider_pane_g2

0x63ca,	// (0x0001baa7) slider_pane_g3_ParamLimits

0x63ca,	// (0x0001baa7) slider_pane_g3

0x0003,

0xfdeb,	// (0x000254c8) slider_pane_g_ParamLimits

0xfdeb,	// (0x000254c8) slider_pane_g

0x8b54,	// (0x0001e231) popup_tb_float_extension_window_ParamLimits

0x8b54,	// (0x0001e231) popup_tb_float_extension_window

0x63f6,	// (0x0001bad3) aid_size_cell_tb_float_ext

0xc425,	// (0x00021b02) bg_popup_sub_window_cp28

0xdc70,	// (0x0002334d) grid_tb_float_ext_pane

0xdc7a,	// (0x00023357) cell_tb_float_ext_pane_ParamLimits

0xdc7a,	// (0x00023357) cell_tb_float_ext_pane

0xdc94,	// (0x00023371) cell_tb_float_ext_pane_g1

0xdc9d,	// (0x0002337a) grid_highlight_pane_cp12

0x8e28,	// (0x0001e505) cell_last_hwr_side_pane_ParamLimits

0x8e28,	// (0x0001e505) cell_last_hwr_side_pane

0x3c57,	// (0x00019334) cell_last_hwr_side_pane_g1

0x6438,	// (0x0001bb15) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x000254d1) cell_last_hwr_side_pane_g

0x9234,	// (0x0001e911) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9234,	// (0x0001e911) vkb2_area_bottom_space_btn_pane

0xecf8,	// (0x000243d5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5ed4,	// (0x0001b5b1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf1f2,	// (0x000248cf) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf231,	// (0x0002490e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf231,	// (0x0002490e) vkb2_area_bottom_space_btn_pane_g1

0xf26b,	// (0x00024948) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf26b,	// (0x00024948) vkb2_area_bottom_space_btn_pane_g2

0xf2a1,	// (0x0002497e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf2a1,	// (0x0002497e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x000254d6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x000254d6) vkb2_area_bottom_space_btn_pane_g

0xebcd,	// (0x000242aa) cel_fep_hwr_func_pane_ParamLimits

0xebcd,	// (0x000242aa) cel_fep_hwr_func_pane

0x8dfd,	// (0x0001e4da) cell_hwr_side_button_pane_ParamLimits

0x8dfd,	// (0x0001e4da) cell_hwr_side_button_pane

0xc3c1,	// (0x00021a9e) aid_area_touch_clock_ParamLimits

0xc5d9,	// (0x00021cb6) bg_uniindi_top_pane_ParamLimits

0xc3d3,	// (0x00021ab0) uniindi_top_pane_g1_ParamLimits

0xc3e9,	// (0x00021ac6) uniindi_top_pane_g2_ParamLimits

0xd3ee,	// (0x00022acb) uniindi_top_pane_g3_ParamLimits

0x58f5,	// (0x0001afd2) uniindi_top_pane_g4_ParamLimits

0xfd0a,	// (0x000253e7) uniindi_top_pane_g_ParamLimits

0xd3ff,	// (0x00022adc) uniindi_top_pane_t1_ParamLimits

0xc5d9,	// (0x00021cb6) bg_vkb2_func_pane_cp01_ParamLimits

0xc5d9,	// (0x00021cb6) bg_vkb2_func_pane_cp01

0x6441,	// (0x0001bb1e) cel_fep_hwr_func_pane_g1_ParamLimits

0x6441,	// (0x0001bb1e) cel_fep_hwr_func_pane_g1

0xc5d9,	// (0x00021cb6) bg_vkb2_func_pane_cp02_ParamLimits

0xc5d9,	// (0x00021cb6) bg_vkb2_func_pane_cp02

0x6441,	// (0x0001bb1e) cell_hwr_side_button_pane_g1_ParamLimits

0x6441,	// (0x0001bb1e) cell_hwr_side_button_pane_g1

0x0f57,	// (0x00016634) status_pane_g4_ParamLimits

0x0f57,	// (0x00016634) status_pane_g4

0x0f71,	// (0x0001664e) status_pane_t1

0x3999,	// (0x00019076) form2_midp_gauge_slider_cont_pane

0x39a1,	// (0x0001907e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb702,	// (0x00020ddf) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb714,	// (0x00020df1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad1,	// (0x000251ae) form2_midp_gauge_slider_pane_t_ParamLimits

0x39d7,	// (0x000190b4) form2_midp_slider_pane_ParamLimits

0xeedd,	// (0x000245ba) aid_size_cell_func_vkb2_ParamLimits

0xeedd,	// (0x000245ba) aid_size_cell_func_vkb2

0x63e2,	// (0x0001babf) slider_pane_g4_ParamLimits

0x63e2,	// (0x0001babf) slider_pane_g4

0x929d,	// (0x0001e97a) form2_midp_gauge_slider_pane_t2_cp01

0x92ab,	// (0x0001e988) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x92ab,	// (0x0001e988) form2_midp_gauge_slider_pane_t3_cp01

0xf2eb,	// (0x000249c8) form2_midp_slider_pane_cp01

0xc425,	// (0x00021b02) navi_smil_pane

0x647a,	// (0x0001bb57) navi_smil_pane_g1

0x6482,	// (0x0001bb5f) navi_smil_pane_t1

0x644f,	// (0x0001bb2c) form2_midp_slider_pane_g1

0x6458,	// (0x0001bb35) form2_midp_slider_pane_g2

0x6460,	// (0x0001bb3d) form2_midp_slider_pane_g3

0x644f,	// (0x0001bb2c) form2_midp_slider_pane_g4

0xdca6,	// (0x00023383) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x000254df) form2_midp_slider_pane_g

0xf2db,	// (0x000249b8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf2db,	// (0x000249b8) vkb2_area_bottom_space_btn_pane_g4

0xa842,	// (0x0001ff1f) lc0_navi_pane_ParamLimits

0xa842,	// (0x0001ff1f) lc0_navi_pane

0xa8ac,	// (0x0001ff89) lc0_stat_indi_pane_ParamLimits

0xa8ac,	// (0x0001ff89) lc0_stat_indi_pane

0xa8c1,	// (0x0001ff9e) ls0_title_pane_ParamLimits

0xa8c1,	// (0x0001ff9e) ls0_title_pane

0xc8cf,	// (0x00021fac) bg_popup_sub_pane_cp14_ParamLimits

0xc3a8,	// (0x00021a85) list_uniindi_pane_ParamLimits

0xc3b4,	// (0x00021a91) uniindi_top_pane_ParamLimits

0x593f,	// (0x0001b01c) list_single_uniindi_pane_g1_ParamLimits

0x5952,	// (0x0001b02f) list_single_uniindi_pane_t1_ParamLimits

0x92c8,	// (0x0001e9a5) lc0_stat_clock_pane_ParamLimits

0x92c8,	// (0x0001e9a5) lc0_stat_clock_pane

0xdcb1,	// (0x0002338e) lc0_stat_indi_pane_g1_ParamLimits

0xdcb1,	// (0x0002338e) lc0_stat_indi_pane_g1

0xdcbe,	// (0x0002339b) lc0_stat_indi_pane_g2_ParamLimits

0xdcbe,	// (0x0002339b) lc0_stat_indi_pane_g2

0x0001,

0xfe0d,	// (0x000254ea) lc0_stat_indi_pane_g_ParamLimits

0xfe0d,	// (0x000254ea) lc0_stat_indi_pane_g

0x92d8,	// (0x0001e9b5) lc0_uni_indicator_pane_ParamLimits

0x92d8,	// (0x0001e9b5) lc0_uni_indicator_pane

0xdccb,	// (0x000233a8) ls0_title_pane_g1_ParamLimits

0xdccb,	// (0x000233a8) ls0_title_pane_g1

0xdcdf,	// (0x000233bc) ls0_title_pane_t1_ParamLimits

0xdcdf,	// (0x000233bc) ls0_title_pane_t1

0x92e8,	// (0x0001e9c5) lc0_uni_indicator_pane_g1_ParamLimits

0x92e8,	// (0x0001e9c5) lc0_uni_indicator_pane_g1

0x64f4,	// (0x0001bbd1) lc0_stat_clock_pane_t1

0xe2a8,	// (0x00023985) main_ai5_pane

0x650a,	// (0x0001bbe7) ai5_sk_pane_ParamLimits

0x650a,	// (0x0001bbe7) ai5_sk_pane

0xdd17,	// (0x000233f4) cell_ai5_widget_pane_ParamLimits

0xdd17,	// (0x000233f4) cell_ai5_widget_pane

0x65e0,	// (0x0001bcbd) aid_size_cell_widget_grid

0x65ee,	// (0x0001bccb) bg_ai5_widget_pane_ParamLimits

0x65ee,	// (0x0001bccb) bg_ai5_widget_pane

0x666c,	// (0x0001bd49) cell_ai5_widget_pane_g2

0x6680,	// (0x0001bd5d) cell_ai5_widget_pane_g3

0x669a,	// (0x0001bd77) cell_ai5_widget_pane_g4

0x66aa,	// (0x0001bd87) cell_ai5_widget_pane_g5

0x66ba,	// (0x0001bd97) cell_ai5_widget_pane_g6

0x66c6,	// (0x0001bda3) cell_ai5_widget_pane_g7

0x6732,	// (0x0001be0f) cell_ai5_widget_pane_t1_ParamLimits

0x6732,	// (0x0001be0f) cell_ai5_widget_pane_t1

0x674f,	// (0x0001be2c) cell_ai5_widget_pane_t2_ParamLimits

0x674f,	// (0x0001be2c) cell_ai5_widget_pane_t2

0x6767,	// (0x0001be44) cell_ai5_widget_pane_t3_ParamLimits

0x6767,	// (0x0001be44) cell_ai5_widget_pane_t3

0x677f,	// (0x0001be5c) cell_ai5_widget_pane_t4_ParamLimits

0x677f,	// (0x0001be5c) cell_ai5_widget_pane_t4

0xdd83,	// (0x00023460) cell_ai5_widget_pane_t5_ParamLimits

0xdd83,	// (0x00023460) cell_ai5_widget_pane_t5

0x67c4,	// (0x0001bea1) cell_ai5_widget_pane_t6_ParamLimits

0x67c4,	// (0x0001bea1) cell_ai5_widget_pane_t6

0x67d6,	// (0x0001beb3) cell_ai5_widget_pane_t7_ParamLimits

0x67d6,	// (0x0001beb3) cell_ai5_widget_pane_t7

0x67f5,	// (0x0001bed2) cell_ai5_widget_pane_t8_ParamLimits

0x67f5,	// (0x0001bed2) cell_ai5_widget_pane_t8

0x000b,

0xfe2d,	// (0x0002550a) cell_ai5_widget_pane_t_ParamLimits

0xfe2d,	// (0x0002550a) cell_ai5_widget_pane_t

0x6879,	// (0x0001bf56) grid_ai5_widget_pane

0xc8cf,	// (0x00021fac) highlight_cell_ai5_widget_pane_ParamLimits

0xc8cf,	// (0x00021fac) highlight_cell_ai5_widget_pane

0xdda3,	// (0x00023480) ai5_sk_left_pane

0xddad,	// (0x0002348a) ai5_sk_middle_pane

0xddb7,	// (0x00023494) ai5_sk_right_pane

0x68ab,	// (0x0001bf88) bg_ai5_widget_pane_g1_ParamLimits

0x68ab,	// (0x0001bf88) bg_ai5_widget_pane_g1

0x68b7,	// (0x0001bf94) bg_ai5_widget_pane_g2_ParamLimits

0x68b7,	// (0x0001bf94) bg_ai5_widget_pane_g2

0x68c3,	// (0x0001bfa0) bg_ai5_widget_pane_g3_ParamLimits

0x68c3,	// (0x0001bfa0) bg_ai5_widget_pane_g3

0x68cf,	// (0x0001bfac) bg_ai5_widget_pane_g4_ParamLimits

0x68cf,	// (0x0001bfac) bg_ai5_widget_pane_g4

0x68db,	// (0x0001bfb8) bg_ai5_widget_pane_g5_ParamLimits

0x68db,	// (0x0001bfb8) bg_ai5_widget_pane_g5

0x68e7,	// (0x0001bfc4) bg_ai5_widget_pane_g6_ParamLimits

0x68e7,	// (0x0001bfc4) bg_ai5_widget_pane_g6

0x68f3,	// (0x0001bfd0) bg_ai5_widget_pane_g7_ParamLimits

0x68f3,	// (0x0001bfd0) bg_ai5_widget_pane_g7

0x68ff,	// (0x0001bfdc) bg_ai5_widget_pane_g8_ParamLimits

0x68ff,	// (0x0001bfdc) bg_ai5_widget_pane_g8

0x690b,	// (0x0001bfe8) bg_ai5_widget_pane_g9_ParamLimits

0x690b,	// (0x0001bfe8) bg_ai5_widget_pane_g9

0x0008,

0xfe46,	// (0x00025523) bg_ai5_widget_pane_g_ParamLimits

0xfe46,	// (0x00025523) bg_ai5_widget_pane_g

0x693d,	// (0x0001c01a) cell_shortcut_ai5_widget_pane_ParamLimits

0x693d,	// (0x0001c01a) cell_shortcut_ai5_widget_pane

0xd1e5,	// (0x000228c2) bg_cell_shortcut_ai5_widget_pane

0x694e,	// (0x0001c02b) cell_grid_ai5_widget_pane_g1

0xd1e5,	// (0x000228c2) highlight_cell_shortcut_ai5_widget_pane

0x1109,	// (0x000167e6) ai5_sk_left_pane_g1

0x6957,	// (0x0001c034) ai5_sk_left_pane_g2

0x695f,	// (0x0001c03c) ai5_sk_left_pane_g3

0x6967,	// (0x0001c044) ai5_sk_left_pane_g4

0x0003,

0xfe59,	// (0x00025536) ai5_sk_left_pane_g

0x696f,	// (0x0001c04c) ai5_sk_left_pane_t1

0x1111,	// (0x000167ee) ai5_sk_right_pane_g1

0x697d,	// (0x0001c05a) ai5_sk_right_pane_g2

0x6985,	// (0x0001c062) ai5_sk_right_pane_g3

0x698d,	// (0x0001c06a) ai5_sk_right_pane_g4

0x0003,

0xfe62,	// (0x0002553f) ai5_sk_right_pane_g

0x6995,	// (0x0001c072) ai5_sk_right_pane_t1

0x1111,	// (0x000167ee) ai5_sk_middle_pane_g1

0x1109,	// (0x000167e6) ai5_sk_middle_pane_g2

0x1129,	// (0x00016806) ai5_sk_middle_pane_g3

0x6985,	// (0x0001c062) ai5_sk_middle_pane_g4

0x695f,	// (0x0001c03c) ai5_sk_middle_pane_g5

0x69a3,	// (0x0001c080) ai5_sk_middle_pane_g6

0xddc1,	// (0x0002349e) ai5_sk_middle_pane_g7

0x0006,

0xfe6b,	// (0x00025548) ai5_sk_middle_pane_g

0xa72e,	// (0x0001fe0b) aid_touch_area_size_lc0_ParamLimits

0xa72e,	// (0x0001fe0b) aid_touch_area_size_lc0

0xed27,	// (0x00024404) cell_hwr_candidate_pane_t1_ParamLimits

0x0c28,	// (0x00016305) aid_touch_navi_pane

0xa9ba,	// (0x00020097) status_dt_navi_pane_ParamLimits

0xa9ba,	// (0x00020097) status_dt_navi_pane

0xa9d2,	// (0x000200af) status_dt_sta_pane_ParamLimits

0xa9d2,	// (0x000200af) status_dt_sta_pane

0xddc9,	// (0x000234a6) dt_sta_controll_pane

0xddd6,	// (0x000234b3) dt_sta_indi_pane

0xdde3,	// (0x000234c0) dt_sta_title_pane

0xc5d9,	// (0x00021cb6) bg_dt_sta_indi_pane_ParamLimits

0xc5d9,	// (0x00021cb6) bg_dt_sta_indi_pane

0xddf5,	// (0x000234d2) dt_sta_battery_pane

0xddfd,	// (0x000234da) dt_sta_indi_pane_g1

0x69f5,	// (0x0001c0d2) dt_sta_indi_pane_g2

0x69fe,	// (0x0001c0db) dt_sta_indi_pane_g3

0x0002,

0xfe7a,	// (0x00025557) dt_sta_indi_pane_g

0x6a07,	// (0x0001c0e4) dt_sta_signal_pane

0xc8cf,	// (0x00021fac) bg_dt_sta_title_pane_ParamLimits

0xc8cf,	// (0x00021fac) bg_dt_sta_title_pane

0x2038,	// (0x00017715) dt_sta_title_pane_g1

0xde06,	// (0x000234e3) dt_sta_title_pane_t1_ParamLimits

0xde06,	// (0x000234e3) dt_sta_title_pane_t1

0xc425,	// (0x00021b02) bg_dt_sta_control_pane

0xde1b,	// (0x000234f8) dt_sta_controll_pane_g1

0xde24,	// (0x00023501) bg_dt_sta_title_pane_g1

0xde2d,	// (0x0002350a) bg_dt_sta_title_pane_g2

0xde36,	// (0x00023513) bg_dt_sta_title_pane_g3

0x0002,

0xfe81,	// (0x0002555e) bg_dt_sta_title_pane_g

0x3c57,	// (0x00019334) bg_dt_sta_indi_pane_g1

0x6a49,	// (0x0001c126) dt_sta_signal_pane_g1

0x6a51,	// (0x0001c12e) dt_sta_signal_pane_g2

0x0001,

0xfe88,	// (0x00025565) dt_sta_signal_pane_g

0x6a59,	// (0x0001c136) dt_sta_battery_pane_g1

0x6a62,	// (0x0001c13f) dt_sta_battery_pane_t1

0x3c57,	// (0x00019334) bg_dt_sta_control_pane_g1

0xce12,	// (0x000224ef) fep_china_uni_eep_pane

0xce1a,	// (0x000224f7) fep_china_uni_entry_pane_ParamLimits

0xce2a,	// (0x00022507) popup_fep_china_uni_window_g1_ParamLimits

0xce3a,	// (0x00022517) popup_fep_china_uni_window_g2_ParamLimits

0xce3a,	// (0x00022517) popup_fep_china_uni_window_g2

0x0001,

0xf6e7,	// (0x00024dc4) popup_fep_china_uni_window_g_ParamLimits

0xf6e7,	// (0x00024dc4) popup_fep_china_uni_window_g

0x6a71,	// (0x0001c14e) fep_china_uni_eep_pane_g1

0x6a79,	// (0x0001c156) fep_china_uni_eep_pane_t1

0x6471,	// (0x0001bb4e) aid_touch_area_size_smil_player

0x0d7e,	// (0x0001645b) lc0_clock_pane

0x0f65,	// (0x00016642) status_pane_g5_ParamLimits

0x0f65,	// (0x00016642) status_pane_g5

0x86b0,	// (0x0001dd8d) popup_keymap_window

0x0f23,	// (0x00016600) status_icon_pane

0x6680,	// (0x0001bd5d) cell_ai5_widget_pane_g3_ParamLimits

0x669a,	// (0x0001bd77) cell_ai5_widget_pane_g4_ParamLimits

0x66aa,	// (0x0001bd87) cell_ai5_widget_pane_g5_ParamLimits

0x66d2,	// (0x0001bdaf) cell_ai5_widget_pane_g8_ParamLimits

0x66d2,	// (0x0001bdaf) cell_ai5_widget_pane_g8

0x66e6,	// (0x0001bdc3) cell_ai5_widget_pane_g9_ParamLimits

0x66e6,	// (0x0001bdc3) cell_ai5_widget_pane_g9

0x66fa,	// (0x0001bdd7) cell_ai5_widget_pane_g10_ParamLimits

0x66fa,	// (0x0001bdd7) cell_ai5_widget_pane_g10

0x6a88,	// (0x0001c165) status_icon_pane_g1

0xc425,	// (0x00021b02) bg_popup_sub_pane_cp13

0x6a90,	// (0x0001c16d) popup_keymap_window_t1

0xa6bc,	// (0x0001fd99) control_pane_g6_ParamLimits

0xa6bc,	// (0x0001fd99) control_pane_g6

0xa6c9,	// (0x0001fda6) control_pane_g7_ParamLimits

0xa6c9,	// (0x0001fda6) control_pane_g7

0xa6d6,	// (0x0001fdb3) control_pane_g8_ParamLimits

0xa6d6,	// (0x0001fdb3) control_pane_g8

0xddc9,	// (0x000234a6) dt_sta_controll_pane_ParamLimits

0xddd6,	// (0x000234b3) dt_sta_indi_pane_ParamLimits

0xdde3,	// (0x000234c0) dt_sta_title_pane_ParamLimits

0xc7b0,	// (0x00021e8d) aid_size_touch_scroll_bar_cale

0x8114,	// (0x0001d7f1) popup_discreet_window_ParamLimits

0x8114,	// (0x0001d7f1) popup_discreet_window

0x8166,	// (0x0001d843) popup_sk_window

0x187c,	// (0x00016f59) bg_popup_sub_pane_cp28_ParamLimits

0x187c,	// (0x00016f59) bg_popup_sub_pane_cp28

0x6a9e,	// (0x0001c17b) popup_discreet_window_g1_ParamLimits

0x6a9e,	// (0x0001c17b) popup_discreet_window_g1

0x6abe,	// (0x0001c19b) popup_discreet_window_t1_ParamLimits

0x6abe,	// (0x0001c19b) popup_discreet_window_t1

0x6adc,	// (0x0001c1b9) popup_discreet_window_t2_ParamLimits

0x6adc,	// (0x0001c1b9) popup_discreet_window_t2

0x0002,

0xfe8d,	// (0x0002556a) popup_discreet_window_t_ParamLimits

0xfe8d,	// (0x0002556a) popup_discreet_window_t

0xf2f4,	// (0x000249d1) popup_sk_window_g1

0xf2fe,	// (0x000249db) popup_sk_window_g2

0x0001,

0xfe94,	// (0x00025571) popup_sk_window_g

0x9313,	// (0x0001e9f0) popup_sk_window_t1

0x9321,	// (0x0001e9fe) popup_sk_window_t1_copy1

0x666c,	// (0x0001bd49) cell_ai5_widget_pane_g2_ParamLimits

0x6807,	// (0x0001bee4) cell_ai5_widget_pane_t9_ParamLimits

0x6807,	// (0x0001bee4) cell_ai5_widget_pane_t9

0xc425,	// (0x00021b02) main_fep_fshwr2_pane

0x932f,	// (0x0001ea0c) aid_fshwr2_btn_pane

0x9343,	// (0x0001ea20) aid_fshwr2_syb_pane

0x9357,	// (0x0001ea34) aid_fshwr2_txt_pane

0x9367,	// (0x0001ea44) fshwr2_func_candi_pane

0x9387,	// (0x0001ea64) fshwr2_hwr_syb_pane

0x93a9,	// (0x0001ea86) fshwr2_icf_pane

0xe2a8,	// (0x00023985) fshwr2_icf_bg_pane

0xf314,	// (0x000249f1) fshwr2_icf_pane_t1_ParamLimits

0xf314,	// (0x000249f1) fshwr2_icf_pane_t1

0xcd8f,	// (0x0002246c) fshwr2_func_candi_pane_g1

0xde3f,	// (0x0002351c) fshwr2_func_candi_row_pane_ParamLimits

0xde3f,	// (0x0002351c) fshwr2_func_candi_row_pane

0x93d9,	// (0x0001eab6) cell_fshwr2_syb_pane_ParamLimits

0x93d9,	// (0x0001eab6) cell_fshwr2_syb_pane

0xeecf,	// (0x000245ac) fshwr2_hwr_syb_pane_g1_ParamLimits

0xeecf,	// (0x000245ac) fshwr2_hwr_syb_pane_g1

0xe2a8,	// (0x00023985) bg_popup_call_pane_cp01

0x93ff,	// (0x0001eadc) fshwr2_func_candi_cell_pane_ParamLimits

0x93ff,	// (0x0001eadc) fshwr2_func_candi_cell_pane

0x1665,	// (0x00016d42) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1665,	// (0x00016d42) fshwr2_func_candi_cell_bg_pane

0x944a,	// (0x0001eb27) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x944a,	// (0x0001eb27) fshwr2_func_candi_cell_pane_g1

0x9481,	// (0x0001eb5e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9481,	// (0x0001eb5e) fshwr2_func_candi_cell_pane_t1

0xe2a8,	// (0x00023985) bg_button_pane_cp08

0xca7f,	// (0x0002215c) cell_fshwr2_syb_bg_pane

0x949c,	// (0x0001eb79) cell_fshwr2_syb_bg_pane_g1

0x94af,	// (0x0001eb8c) cell_fshwr2_syb_bg_pane_t1

0xc8cf,	// (0x00021fac) main_tmo_pane

0xb0aa,	// (0x00020787) uni_indicator_pane_g1_ParamLimits

0xb0c0,	// (0x0002079d) uni_indicator_pane_g2_ParamLimits

0xb0d6,	// (0x000207b3) uni_indicator_pane_g3_ParamLimits

0x23a5,	// (0x00017a82) uni_indicator_pane_g4_ParamLimits

0x23a5,	// (0x00017a82) uni_indicator_pane_g4

0x23b9,	// (0x00017a96) uni_indicator_pane_g5_ParamLimits

0x23b9,	// (0x00017a96) uni_indicator_pane_g5

0x23b9,	// (0x00017a96) uni_indicator_pane_g6_ParamLimits

0x23b9,	// (0x00017a96) uni_indicator_pane_g6

0xf8e6,	// (0x00024fc3) uni_indicator_pane_g_ParamLimits

0xc0f2,	// (0x000217cf) popup_tmo_note_window_ParamLimits

0xc0f2,	// (0x000217cf) popup_tmo_note_window

0xf306,	// (0x000249e3) fshwr2_bg_pane

0x9472,	// (0x0001eb4f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9472,	// (0x0001eb4f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe99,	// (0x00025576) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe99,	// (0x00025576) fshwr2_func_candi_cell_pane_g

0xece0,	// (0x000243bd) bg_popup_window_pane_cp01

0xf32d,	// (0x00024a0a) bg_popup_window_pane_g1_cp01

0x6b55,	// (0x0001c232) bg_popup_window_pane_cp22_ParamLimits

0x6b55,	// (0x0001c232) bg_popup_window_pane_cp22

0xde62,	// (0x0002353f) listscroll_tmo_link_pane_ParamLimits

0xde62,	// (0x0002353f) listscroll_tmo_link_pane

0x6ba3,	// (0x0001c280) popup_tmo_note_window_g1_ParamLimits

0x6ba3,	// (0x0001c280) popup_tmo_note_window_g1

0xdea2,	// (0x0002357f) tmo_note_info_pane_ParamLimits

0xdea2,	// (0x0002357f) tmo_note_info_pane

0xdebc,	// (0x00023599) list_tmo_note_info_pane_g1_ParamLimits

0xdebc,	// (0x00023599) list_tmo_note_info_pane_g1

0x6be1,	// (0x0001c2be) list_tmo_note_info_pane_g2_ParamLimits

0x6be1,	// (0x0001c2be) list_tmo_note_info_pane_g2

0x0001,

0xfe9e,	// (0x0002557b) list_tmo_note_info_pane_g_ParamLimits

0xfe9e,	// (0x0002557b) list_tmo_note_info_pane_g

0x6bfd,	// (0x0001c2da) list_tmo_note_info_text_pane_ParamLimits

0x6bfd,	// (0x0001c2da) list_tmo_note_info_text_pane

0x6c7e,	// (0x0001c35b) list_tmo_link_pane

0x6c8b,	// (0x0001c368) scroll_pane_cp20

0x6c98,	// (0x0001c375) list_single_tmo_link_pane_ParamLimits

0x6c98,	// (0x0001c375) list_single_tmo_link_pane

0x6ca8,	// (0x0001c385) list_single_tmo_link_pane_t1

0x6cb6,	// (0x0001c393) list_tmo_note_info_text_pane_t1_ParamLimits

0x6cb6,	// (0x0001c393) list_tmo_note_info_text_pane_t1

0xa0f1,	// (0x0001f7ce) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa0f1,	// (0x0001f7ce) aid_size_touch_scroll_bar_cp01

0x9ff1,	// (0x0001f6ce) aid_size_touch_slider_marker

0x8156,	// (0x0001d833) popup_settings_window_ParamLimits

0x8156,	// (0x0001d833) popup_settings_window

0xd399,	// (0x00022a76) popup_candi_list_indi_window

0x0c28,	// (0x00016305) aid_touch_navi_pane_ParamLimits

0xee57,	// (0x00024534) rs_clock_indi_pane

0xee60,	// (0x0002453d) sctrl_sk_bottom_pane_ParamLimits

0xee71,	// (0x0002454e) sctrl_sk_top_pane_ParamLimits

0x8f68,	// (0x0001e645) popup_fep_tooltip_window

0x65e0,	// (0x0001bcbd) aid_size_cell_widget_grid_ParamLimits

0x6655,	// (0x0001bd32) cell_ai5_widget_pane_g1_ParamLimits

0x6655,	// (0x0001bd32) cell_ai5_widget_pane_g1

0x66ba,	// (0x0001bd97) cell_ai5_widget_pane_g6_ParamLimits

0x66c6,	// (0x0001bda3) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe12,	// (0x000254ef) cell_ai5_widget_pane_g_ParamLimits

0xfe12,	// (0x000254ef) cell_ai5_widget_pane_g

0x6836,	// (0x0001bf13) cell_ai5_widget_pane_t10_ParamLimits

0x6836,	// (0x0001bf13) cell_ai5_widget_pane_t10

0x6879,	// (0x0001bf56) grid_ai5_widget_pane_ParamLimits

0x6917,	// (0x0001bff4) cell_contacts_ai5_widget_pane_ParamLimits

0x6917,	// (0x0001bff4) cell_contacts_ai5_widget_pane

0x6af1,	// (0x0001c1ce) popup_discreet_window_t3_ParamLimits

0x6af1,	// (0x0001c1ce) popup_discreet_window_t3

0x93c5,	// (0x0001eaa2) popup_fshwr2_char_preview_window_ParamLimits

0x93c5,	// (0x0001eaa2) popup_fshwr2_char_preview_window

0xded3,	// (0x000235b0) tmo_note_info_pane_t1

0xdee8,	// (0x000235c5) tmo_note_info_pane_t2

0xdeff,	// (0x000235dc) tmo_note_info_pane_t3

0x6c5a,	// (0x0001c337) tmo_note_info_pane_t4

0x6c6c,	// (0x0001c349) tmo_note_info_pane_t5

0x0004,

0xfea3,	// (0x00025580) tmo_note_info_pane_t

0x6c7e,	// (0x0001c35b) list_tmo_link_pane_ParamLimits

0x6c8b,	// (0x0001c368) scroll_pane_cp20_ParamLimits

0xe2a8,	// (0x00023985) bg_popup_fep_char_preview_window_cp01

0xdf14,	// (0x000235f1) popup_fshwr2_char_preview_window_t1

0x6cdd,	// (0x0001c3ba) popup_candi_list_indi_window_g1

0x6ce6,	// (0x0001c3c3) bg_cell_contacts_ai5_widget_pane

0x6cf2,	// (0x0001c3cf) cell_contacts_ai5_widget_pane_g1

0x44b5,	// (0x00019b92) cell_contacts_ai5_widget_pane_g2

0x6d07,	// (0x0001c3e4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeae,	// (0x0002558b) cell_contacts_ai5_widget_pane_g

0x6d13,	// (0x0001c3f0) cell_contacts_ai5_widget_pane_t1

0xc8cf,	// (0x00021fac) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6d8a,	// (0x0001c467) settings_container_pane

0xd1e5,	// (0x000228c2) listscroll_set_pane_copy1

0x2fef,	// (0x000186cc) scroll_pane_cp121_copy1

0x1621,	// (0x00016cfe) set_content_pane_copy1

0xdf22,	// (0x000235ff) aid_height_set_list_copy1_ParamLimits

0xdf22,	// (0x000235ff) aid_height_set_list_copy1

0x25b3,	// (0x00017c90) aid_size_parent_copy1_ParamLimits

0x25b3,	// (0x00017c90) aid_size_parent_copy1

0xdf2e,	// (0x0002360b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdf2e,	// (0x0002360b) button_value_adjust_pane_cp6_copy1

0xca7f,	// (0x0002215c) list_highlight_pane_cp2_copy1_ParamLimits

0xca7f,	// (0x0002215c) list_highlight_pane_cp2_copy1

0xdf42,	// (0x0002361f) list_set_pane_copy1_ParamLimits

0xdf42,	// (0x0002361f) list_set_pane_copy1

0x6d25,	// (0x0001c402) main_pane_set_t1_copy1_ParamLimits

0x6d25,	// (0x0001c402) main_pane_set_t1_copy1

0x6d5f,	// (0x0001c43c) main_pane_set_t2_copy1_ParamLimits

0x6d5f,	// (0x0001c43c) main_pane_set_t2_copy1

0xdfef,	// (0x000236cc) main_pane_set_t3_copy1

0xdffd,	// (0x000236da) main_pane_set_t4_copy1

0x6d7e,	// (0x0001c45b) set_content_pane_g1_copy1_ParamLimits

0x6d7e,	// (0x0001c45b) set_content_pane_g1_copy1

0xe00b,	// (0x000236e8) setting_code_pane_copy1

0x6e87,	// (0x0001c564) setting_slider_graphic_pane_copy1

0x6e87,	// (0x0001c564) setting_slider_pane_copy1

0x6e8f,	// (0x0001c56c) setting_text_pane_copy1

0x6e8f,	// (0x0001c56c) setting_volume_pane_copy1

0xe00b,	// (0x000236e8) settings_code_pane_cp2_copy1

0xe013,	// (0x000236f0) settings_code_pane_cp_copy1_ParamLimits

0xe013,	// (0x000236f0) settings_code_pane_cp_copy1

0x94c5,	// (0x0001eba2) volume_set_pane_copy1

0xe027,	// (0x00023704) volume_set_pane_g10_copy1

0xe02f,	// (0x0002370c) volume_set_pane_g1_copy1

0xe037,	// (0x00023714) volume_set_pane_g2_copy1

0xe03f,	// (0x0002371c) volume_set_pane_g3_copy1

0xe047,	// (0x00023724) volume_set_pane_g4_copy1

0xe04f,	// (0x0002372c) volume_set_pane_g5_copy1

0xe057,	// (0x00023734) volume_set_pane_g6_copy1

0xe05f,	// (0x0002373c) volume_set_pane_g7_copy1

0xe067,	// (0x00023744) volume_set_pane_g8_copy1

0xe06f,	// (0x0002374c) volume_set_pane_g9_copy1

0xc495,	// (0x00021b72) bg_set_opt_pane_cp_copy1_ParamLimits

0xc495,	// (0x00021b72) bg_set_opt_pane_cp_copy1

0x94cd,	// (0x0001ebaa) setting_slider_pane_t1_copy1_ParamLimits

0x94cd,	// (0x0001ebaa) setting_slider_pane_t1_copy1

0x94ec,	// (0x0001ebc9) setting_slider_pane_t2_copy1_ParamLimits

0x94ec,	// (0x0001ebc9) setting_slider_pane_t2_copy1

0x9506,	// (0x0001ebe3) setting_slider_pane_t3_copy1_ParamLimits

0x9506,	// (0x0001ebe3) setting_slider_pane_t3_copy1

0x951e,	// (0x0001ebfb) slider_set_pane_copy1_ParamLimits

0x951e,	// (0x0001ebfb) slider_set_pane_copy1

0xc995,	// (0x00022072) set_opt_bg_pane_g1_copy2

0xc99d,	// (0x0002207a) set_opt_bg_pane_g2_copy2

0x6efb,	// (0x0001c5d8) set_opt_bg_pane_g3_copy2

0xc9ad,	// (0x0002208a) set_opt_bg_pane_g4_copy2

0xc9b5,	// (0x00022092) set_opt_bg_pane_g5_copy2

0xc9bd,	// (0x0002209a) set_opt_bg_pane_g6_copy2

0xe077,	// (0x00023754) set_opt_bg_pane_g7_copy2

0x6f0d,	// (0x0001c5ea) set_opt_bg_pane_g8_copy2

0x6f17,	// (0x0001c5f4) set_opt_bg_pane_g9_copy2

0x9534,	// (0x0001ec11) aid_size_touch_slider_mark_copy1_ParamLimits

0x9534,	// (0x0001ec11) aid_size_touch_slider_mark_copy1

0xe07f,	// (0x0002375c) slider_set_pane_g1_copy1

0xf336,	// (0x00024a13) slider_set_pane_g2_copy1

0x8d49,	// (0x0001e426) slider_set_pane_g3_copy1_ParamLimits

0x8d49,	// (0x0001e426) slider_set_pane_g3_copy1

0x8d5d,	// (0x0001e43a) slider_set_pane_g4_copy1_ParamLimits

0x8d5d,	// (0x0001e43a) slider_set_pane_g4_copy1

0x8d75,	// (0x0001e452) slider_set_pane_g5_copy1_ParamLimits

0x8d75,	// (0x0001e452) slider_set_pane_g5_copy1

0x8d49,	// (0x0001e426) slider_set_pane_g6_copy1_ParamLimits

0x8d49,	// (0x0001e426) slider_set_pane_g6_copy1

0x9548,	// (0x0001ec25) slider_set_pane_g7_copy1_ParamLimits

0x9548,	// (0x0001ec25) slider_set_pane_g7_copy1

0xc439,	// (0x00021b16) bg_set_opt_pane_cp2_copy1

0xe088,	// (0x00023765) setting_slider_graphic_pane_g1_copy1

0xe091,	// (0x0002376e) setting_slider_graphic_pane_t1_copy1

0xe0a1,	// (0x0002377e) setting_slider_graphic_pane_t2_copy1

0xe0b1,	// (0x0002378e) slider_set_pane_cp_copy1

0x6f63,	// (0x0001c640) input_focus_pane_cp1_copy1

0x6f6c,	// (0x0001c649) list_set_text_pane_copy1

0x6f74,	// (0x0001c651) setting_text_pane_g1_copy1

0x6f7d,	// (0x0001c65a) set_text_pane_t1_copy1

0x6f63,	// (0x0001c640) input_focus_pane_cp2_copy1

0x6f74,	// (0x0001c651) setting_code_pane_g1_copy1

0x6f98,	// (0x0001c675) setting_code_pane_t1_copy1

0x6fa6,	// (0x0001c683) list_set_graphic_pane_copy1

0xc439,	// (0x00021b16) bg_set_opt_pane_cp4_copy1

0xcf6a,	// (0x00022647) list_set_graphic_pane_g1_copy1_ParamLimits

0xcf6a,	// (0x00022647) list_set_graphic_pane_g1_copy1

0x6fba,	// (0x0001c697) list_set_graphic_pane_g2_copy1

0xcf82,	// (0x0002265f) list_set_graphic_pane_t1_copy1_ParamLimits

0xcf82,	// (0x0002265f) list_set_graphic_pane_t1_copy1

0x3c57,	// (0x00019334) rs_clock_indi_pane_g1

0x6fc2,	// (0x0001c69f) rs_clock_indi_pane_t1

0x6fd0,	// (0x0001c6ad) rs_indi_pane

0x6fd8,	// (0x0001c6b5) rs_indi_pane_g1

0x6fe1,	// (0x0001c6be) rs_indi_pane_g2

0x6cdd,	// (0x0001c3ba) rs_indi_pane_g3

0x0002,

0xfeb5,	// (0x00025592) rs_indi_pane_g

0xd1e5,	// (0x000228c2) bg_popup_preview_window_pane_cp03

0x6fea,	// (0x0001c6c7) popup_fep_tooltip_window_t1

0xbbf1,	// (0x000212ce) popup_note2_window_g2_ParamLimits

0xbbf1,	// (0x000212ce) popup_note2_window_g2

0x0001,

0xfc49,	// (0x00025326) popup_note2_window_g_ParamLimits

0xfc49,	// (0x00025326) popup_note2_window_g

0x50b8,	// (0x0001a795) bg_popup_sub_pane_cp11_ParamLimits

0x50c5,	// (0x0001a7a2) cell_ai3_links_pane_g1_ParamLimits

0x50dc,	// (0x0001a7b9) cell_ai3_links_pane_t1

0x6f7d,	// (0x0001c65a) set_text_pane_t1_copy1_ParamLimits

0xd123,	// (0x00022800) cell_graphic_popup_pane_cp2_ParamLimits

0xd123,	// (0x00022800) cell_graphic_popup_pane_cp2

0xe0c1,	// (0x0002379e) cell_graphic_popup_pane_g1_cp2

0xc733,	// (0x00021e10) cell_graphic_popup_pane_g2_cp2

0x7000,	// (0x0001c6dd) cell_graphic_popup_pane_g3_cp2

0xe0c9,	// (0x000237a6) cell_graphic_popup_pane_t2_cp2

0xc744,	// (0x00021e21) grid_highlight_pane_cp3_cp2

0xcc0c,	// (0x000222e9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc8cf,	// (0x00021fac) main_tmo_pane_ParamLimits

0xc0e6,	// (0x000217c3) popup_tmo_big_image_note_window

0x6644,	// (0x0001bd21) cell_ai5_widget_list_pane

0x664c,	// (0x0001bd29) cell_ai5_widget_lrg_icon_pane

0xded3,	// (0x000235b0) tmo_note_info_pane_t1_ParamLimits

0xdee8,	// (0x000235c5) tmo_note_info_pane_t2_ParamLimits

0xdeff,	// (0x000235dc) tmo_note_info_pane_t3_ParamLimits

0x6c5a,	// (0x0001c337) tmo_note_info_pane_t4_ParamLimits

0x6c6c,	// (0x0001c349) tmo_note_info_pane_t5_ParamLimits

0xfea3,	// (0x00025580) tmo_note_info_pane_t_ParamLimits

0x6d8a,	// (0x0001c467) settings_container_pane_ParamLimits

0xe0b9,	// (0x00023796) indicator_popup_pane_cp5

0xe0b9,	// (0x00023796) indicator_popup_pane_cp6

0x6fa6,	// (0x0001c683) list_set_graphic_pane_copy1_ParamLimits

0xc425,	// (0x00021b02) bg_popup_window_pane_cp23

0x7016,	// (0x0001c6f3) popup_tmo_big_image_note_window_g1

0x701f,	// (0x0001c6fc) popup_tmo_big_image_note_window_t1

0x702f,	// (0x0001c70c) popup_tmo_big_image_note_window_t2

0x703f,	// (0x0001c71c) popup_tmo_big_image_note_window_t3

0x0002,

0xfebc,	// (0x00025599) popup_tmo_big_image_note_window_t

0x3c57,	// (0x00019334) cell_ai5_widget_lrg_icon_pane_g1

0x704f,	// (0x0001c72c) cell_ai5_widget_lrg_icon_pane_t1

0x705d,	// (0x0001c73a) cell_ai5_widget_list_row_pane_ParamLimits

0x705d,	// (0x0001c73a) cell_ai5_widget_list_row_pane

0x7074,	// (0x0001c751) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7074,	// (0x0001c751) cell_ai5_widget_list_row_pane_g1

0x7081,	// (0x0001c75e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7081,	// (0x0001c75e) cell_ai5_widget_list_row_pane_t1

0x70ac,	// (0x0001c789) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x70ac,	// (0x0001c789) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec3,	// (0x000255a0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec3,	// (0x000255a0) cell_ai5_widget_list_row_pane_t

0xe2a8,	// (0x00023985) main_fep_vtchi_ss_pane

0x70fc,	// (0x0001c7d9) popup_fep_char_pre_window

0x7104,	// (0x0001c7e1) popup_fep_ituss_window

0xe101,	// (0x000237de) popup_fep_vkbss_window

0xca7f,	// (0x0002215c) grid_vkbss_keypad_pane_ParamLimits

0xca7f,	// (0x0002215c) grid_vkbss_keypad_pane

0x717c,	// (0x0001c859) ituss_keypad_pane

0xf355,	// (0x00024a32) aid_vkbss_key_offset_ParamLimits

0xf355,	// (0x00024a32) aid_vkbss_key_offset

0x9572,	// (0x0001ec4f) cell_vkbss_key_pane_ParamLimits

0x9572,	// (0x0001ec4f) cell_vkbss_key_pane

0x718c,	// (0x0001c869) bg_cell_vkbss_key_g1_ParamLimits

0x718c,	// (0x0001c869) bg_cell_vkbss_key_g1

0xe10e,	// (0x000237eb) cell_vkbss_key_3p_pane_ParamLimits

0xe10e,	// (0x000237eb) cell_vkbss_key_3p_pane

0xe144,	// (0x00023821) cell_vkbss_key_g1_ParamLimits

0xe144,	// (0x00023821) cell_vkbss_key_g1

0xe17a,	// (0x00023857) cell_vkbss_key_t1_ParamLimits

0xe17a,	// (0x00023857) cell_vkbss_key_t1

0xf361,	// (0x00024a3e) cell_ituss_key_pane_ParamLimits

0xf361,	// (0x00024a3e) cell_ituss_key_pane

0x7260,	// (0x0001c93d) bg_cell_ituss_key_g1_ParamLimits

0x7260,	// (0x0001c93d) bg_cell_ituss_key_g1

0x726c,	// (0x0001c949) cell_ituss_key_pane_g1_ParamLimits

0x726c,	// (0x0001c949) cell_ituss_key_pane_g1

0xf372,	// (0x00024a4f) cell_ituss_key_pane_g2_ParamLimits

0xf372,	// (0x00024a4f) cell_ituss_key_pane_g2

0x0005,

0xfeca,	// (0x000255a7) cell_ituss_key_pane_g_ParamLimits

0xfeca,	// (0x000255a7) cell_ituss_key_pane_g

0xf3f6,	// (0x00024ad3) cell_ituss_key_t1_ParamLimits

0xf3f6,	// (0x00024ad3) cell_ituss_key_t1

0xf430,	// (0x00024b0d) cell_ituss_key_t2_ParamLimits

0xf430,	// (0x00024b0d) cell_ituss_key_t2

0xf462,	// (0x00024b3f) cell_ituss_key_t3_ParamLimits

0xf462,	// (0x00024b3f) cell_ituss_key_t3

0xf493,	// (0x00024b70) cell_ituss_key_t4_ParamLimits

0xf493,	// (0x00024b70) cell_ituss_key_t4

0x0005,

0xfed7,	// (0x000255b4) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x000255b4) cell_ituss_key_t

0xe1d6,	// (0x000238b3) cell_vkbss_key_3p_pane_g1

0xe1de,	// (0x000238bb) cell_vkbss_key_3p_pane_g2

0xe1e6,	// (0x000238c3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee4,	// (0x000255c1) cell_vkbss_key_3p_pane_g

0xd1e5,	// (0x000228c2) bg_popup_fep_char_preview_window_cp02

0x72aa,	// (0x0001c987) popup_fep_char_pre_window_t1

0xdd79,	// (0x00023456) main_ai5_sk_pane

0x6ce6,	// (0x0001c3c3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6cf2,	// (0x0001c3cf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x44b5,	// (0x00019b92) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6d07,	// (0x0001c3e4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeae,	// (0x0002558b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6d13,	// (0x0001c3f0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc8cf,	// (0x00021fac) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe1ee,	// (0x000238cb) main_ai5_sk_pane_g1

0xad03,	// (0x000203e0) popup_query_code_window_g1

0xe0f2,	// (0x000237cf) popup_fep_vkb_icf_pane

0x7150,	// (0x0001c82d) popup_fep_vtchi_icf_pane

0x72c1,	// (0x0001c99e) bg_icf_pane

0x72c1,	// (0x0001c99e) list_vkb_icf_pane

0x72cd,	// (0x0001c9aa) bg_icf_pane_cp01

0x72e0,	// (0x0001c9bd) vtchi_icf_list_pane

0xe243,	// (0x00023920) list_vkb_icf_pane_t1_ParamLimits

0xe243,	// (0x00023920) list_vkb_icf_pane_t1

0x7365,	// (0x0001ca42) vtchi_icf_list_pane_t1_ParamLimits

0x7365,	// (0x0001ca42) vtchi_icf_list_pane_t1

0x7104,	// (0x0001c7e1) popup_fep_ituss_window_ParamLimits

0x7150,	// (0x0001c82d) popup_fep_vtchi_icf_pane_ParamLimits

0x717c,	// (0x0001c859) ituss_keypad_pane_ParamLimits

0xf34b,	// (0x00024a28) ituss_sks_pane

0x72c1,	// (0x0001c99e) bg_icf_pane_ParamLimits

0xe0d7,	// (0x000237b4) icf_edit_indi_pane_ParamLimits

0xe0d7,	// (0x000237b4) icf_edit_indi_pane

0x72c1,	// (0x0001c99e) list_vkb_icf_pane_ParamLimits

0x72cd,	// (0x0001c9aa) bg_icf_pane_cp01_ParamLimits

0x70ef,	// (0x0001c7cc) icf_edit_indi_pane_cp01_ParamLimits

0x70ef,	// (0x0001c7cc) icf_edit_indi_pane_cp01

0x72e0,	// (0x0001c9bd) vtchi_query_pane

0x6441,	// (0x0001bb1e) icf_edit_indi_pane_g1_ParamLimits

0x6441,	// (0x0001bb1e) icf_edit_indi_pane_g1

0xe25b,	// (0x00023938) icf_edit_indi_pane_g2_ParamLimits

0xe25b,	// (0x00023938) icf_edit_indi_pane_g2

0x0001,

0xff0f,	// (0x000255ec) icf_edit_indi_pane_g_ParamLimits

0xff0f,	// (0x000255ec) icf_edit_indi_pane_g

0xe26f,	// (0x0002394c) icf_edit_indi_pane_t1

0x7389,	// (0x0001ca66) bg_input_focus_pane_cp042

0xc7a7,	// (0x00021e84) vtchi_button_pane

0x7392,	// (0x0001ca6f) vtchi_query_pane_t1

0x73a0,	// (0x0001ca7d) vtchi_query_pane_t2

0x73ae,	// (0x0001ca8b) vtchi_query_pane_t3

0x0002,

0xfefe,	// (0x000255db) vtchi_query_pane_t

0xe2a8,	// (0x00023985) bg_button_pane_cp13

0x73bc,	// (0x0001ca99) vtchi_button_pane_g1

0xf514,	// (0x00024bf1) ituss_sks_pane_g1

0xf51f,	// (0x00024bfc) ituss_sks_pane_g2

0x0001,

0xff05,	// (0x000255e2) ituss_sks_pane_g

0x73c4,	// (0x0001caa1) ituss_sks_pane_t1

0x73d2,	// (0x0001caaf) ituss_sks_pane_t2

0x0001,

0xff0a,	// (0x000255e7) ituss_sks_pane_t

0x3685,	// (0x00018d62) indicator_nsta_pane_cp_g1

0x368e,	// (0x00018d6b) indicator_nsta_pane_cp_g2

0x3696,	// (0x00018d73) indicator_nsta_pane_cp_g3

0x369e,	// (0x00018d7b) indicator_nsta_pane_cp_g4

0x368e,	// (0x00018d6b) indicator_nsta_pane_cp_g5

0x3696,	// (0x00018d73) indicator_nsta_pane_cp_g6

0x0005,

0xfa87,	// (0x00025164) indicator_nsta_pane_cp_g

0xdb4e,	// (0x0002322b) cell_graphic2_pane_t2_ParamLimits

0xdb4e,	// (0x0002322b) cell_graphic2_pane_t2

0x0001,

0xfd99,	// (0x00025476) cell_graphic2_pane_t_ParamLimits

0xfd99,	// (0x00025476) cell_graphic2_pane_t

0xdb85,	// (0x00023262) cell_graphic2_control_pane_t1

0xa3ac,	// (0x0001fa89) signal_pane_g3_ParamLimits

0xa3ac,	// (0x0001fa89) signal_pane_g3

0xa3c0,	// (0x0001fa9d) signal_pane_g4_ParamLimits

0xa3c0,	// (0x0001fa9d) signal_pane_g4

0x70be,	// (0x0001c79b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x70be,	// (0x0001c79b) cell_ai5_widget_list_row_pane_t3

0x7280,	// (0x0001c95d) cell_ituss_key_pane_t1_ParamLimits

0x7280,	// (0x0001c95d) cell_ituss_key_pane_t1

0x12af,	// (0x0001698c) form_field_data_wide_pane_vc_t2_ParamLimits

0x12af,	// (0x0001698c) form_field_data_wide_pane_vc_t2

0x12c3,	// (0x000169a0) form_field_data_wide_pane_vc_t3_ParamLimits

0x12c3,	// (0x000169a0) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x00024eab) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x00024eab) form_field_data_wide_pane_vc_t

0x332f,	// (0x00018a0c) form_field_slider_wide_pane_vc_t3_ParamLimits

0x332f,	// (0x00018a0c) form_field_slider_wide_pane_vc_t3

0x340d,	// (0x00018aea) form_field_popup_wide_pane_vc_t2_ParamLimits

0x340d,	// (0x00018aea) form_field_popup_wide_pane_vc_t2

0x3424,	// (0x00018b01) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3424,	// (0x00018b01) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa76,	// (0x00025153) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa76,	// (0x00025153) form_field_popup_wide_pane_vc_t

0x932f,	// (0x0001ea0c) aid_fshwr2_btn_pane_ParamLimits

0x9343,	// (0x0001ea20) aid_fshwr2_syb_pane_ParamLimits

0x9357,	// (0x0001ea34) aid_fshwr2_txt_pane_ParamLimits

0xf306,	// (0x000249e3) fshwr2_bg_pane_ParamLimits

0x9367,	// (0x0001ea44) fshwr2_func_candi_pane_ParamLimits

0x9387,	// (0x0001ea64) fshwr2_hwr_syb_pane_ParamLimits

0x93a9,	// (0x0001ea86) fshwr2_icf_pane_ParamLimits

0x329b,	// (0x00018978) list_double_graphic_pane_vc_g4_ParamLimits

0x329b,	// (0x00018978) list_double_graphic_pane_vc_g4

0xf392,	// (0x00024a6f) cell_ituss_key_pane_g3_ParamLimits

0xf392,	// (0x00024a6f) cell_ituss_key_pane_g3

0xf4c4,	// (0x00024ba1) cell_ituss_key_t5_ParamLimits

0xf4c4,	// (0x00024ba1) cell_ituss_key_t5

0xe101,	// (0x000237de) popup_fep_vkbss_window_ParamLimits

0x65d7,	// (0x0001bcb4) aid_cell_ai5_quarter

0xe26f,	// (0x0002394c) icf_edit_indi_pane_t1_ParamLimits

0x98a6,	// (0x0001ef83) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x98a6,	// (0x0001ef83) aid_tch_indicator_popup_pane_cp2

0x98b9,	// (0x0001ef96) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x98b9,	// (0x0001ef96) aid_tch_query_popup_data_pane_cp2

0x1665,	// (0x00016d42) aid_tch_query_popup_pane_ParamLimits

0x1665,	// (0x00016d42) aid_tch_query_popup_pane

0x1665,	// (0x00016d42) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1665,	// (0x00016d42) aid_tch_query_popup_data_pane_cp1

0xca7f,	// (0x0002215c) cell_fshwr2_syb_bg_pane_ParamLimits

0x949c,	// (0x0001eb79) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x94af,	// (0x0001eb8c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe0f2,	// (0x000237cf) popup_fep_vkb_icf_pane_ParamLimits

0x9295,	// (0x0001e972) bg_popup_fep_char_preview_window_g10

0x670e,	// (0x0001bdeb) cell_ai5_widget_pane_g11_ParamLimits

0x670e,	// (0x0001bdeb) cell_ai5_widget_pane_g11

0x671a,	// (0x0001bdf7) cell_ai5_widget_pane_g12_ParamLimits

0x671a,	// (0x0001bdf7) cell_ai5_widget_pane_g12

0x6726,	// (0x0001be03) cell_ai5_widget_pane_g13_ParamLimits

0x6726,	// (0x0001be03) cell_ai5_widget_pane_g13

0x6855,	// (0x0001bf32) cell_ai5_widget_pane_t11_ParamLimits

0x6855,	// (0x0001bf32) cell_ai5_widget_pane_t11

0x6867,	// (0x0001bf44) cell_ai5_widget_pane_t12_ParamLimits

0x6867,	// (0x0001bf44) cell_ai5_widget_pane_t12

0xf39e,	// (0x00024a7b) cell_ituss_key_pane_g4_ParamLimits

0xf39e,	// (0x00024a7b) cell_ituss_key_pane_g4

0xf3ba,	// (0x00024a97) cell_ituss_key_pane_g5_ParamLimits

0xf3ba,	// (0x00024a97) cell_ituss_key_pane_g5

0xf3d6,	// (0x00024ab3) cell_ituss_key_pane_g6_ParamLimits

0xf3d6,	// (0x00024ab3) cell_ituss_key_pane_g6

0x1101,	// (0x000167de) bg_icf_pane_g1

0xe1f7,	// (0x000238d4) bg_icf_pane_g2

0xe201,	// (0x000238de) bg_icf_pane_g3

0xe209,	// (0x000238e6) bg_icf_pane_g4

0xe213,	// (0x000238f0) bg_icf_pane_g5

0xe21d,	// (0x000238fa) bg_icf_pane_g6

0xe227,	// (0x00023904) bg_icf_pane_g7

0xe22f,	// (0x0002390c) bg_icf_pane_g8

0xe239,	// (0x00023916) bg_icf_pane_g9

0x0008,

0xfeeb,	// (0x000255c8) bg_icf_pane_g

0x7169,	// (0x0001c846) popup_hyb_candi_window_ParamLimits

0x7169,	// (0x0001c846) popup_hyb_candi_window

0x1221,	// (0x000168fe) bg_popup_sub_pane_cp01_ParamLimits

0x1221,	// (0x000168fe) bg_popup_sub_pane_cp01

0x740d,	// (0x0001caea) entry_hyb_candi_pane_ParamLimits

0x740d,	// (0x0001caea) entry_hyb_candi_pane

0x741c,	// (0x0001caf9) grid_hyb_candi_pane_ParamLimits

0x741c,	// (0x0001caf9) grid_hyb_candi_pane

0x7431,	// (0x0001cb0e) grid_hyb_phrase_pane_ParamLimits

0x7431,	// (0x0001cb0e) grid_hyb_phrase_pane

0x7440,	// (0x0001cb1d) cell_hyb_candi_pane_ParamLimits

0x7440,	// (0x0001cb1d) cell_hyb_candi_pane

0x7463,	// (0x0001cb40) cell_hyb_candi_scroll_pane

0xcd8f,	// (0x0002246c) cell_hyb_candi_pane_g1

0x746c,	// (0x0001cb49) cell_hyb_candi_pane_t1

0x747a,	// (0x0001cb57) cell_hyb_phrase_pane

0xcd8f,	// (0x0002246c) cell_hyb_phrase_pane_g1

0x7483,	// (0x0001cb60) cell_hyb_phrase_pane_t1

0x7491,	// (0x0001cb6e) entry_hyb_candi_pane_t1

0xd1e5,	// (0x000228c2) input_focus_pane_cp06

0x749f,	// (0x0001cb7c) cell_hyb_candi_scroll_pane_g1

0x74a7,	// (0x0001cb84) cell_hyb_candi_scroll_pane_g1_aid

0x74af,	// (0x0001cb8c) cell_hyb_candi_scroll_pane_g2

0x74b7,	// (0x0001cb94) cell_hyb_candi_scroll_pane_g2_aid

0x74bf,	// (0x0001cb9c) cell_hyb_candi_scroll_pane_g3

0x74c7,	// (0x0001cba4) cell_hyb_candi_scroll_pane_g4

0xdd0d,	// (0x000233ea) ai5_page_g1

0xf4d6,	// (0x00024bb3) cell_ituss_key_t6_ParamLimits

0xf4d6,	// (0x00024bb3) cell_ituss_key_t6

0x955e,	// (0x0001ec3b) icf_edit_indi_pane_cp02_ParamLimits

0x955e,	// (0x0001ec3b) icf_edit_indi_pane_cp02

0xf33e,	// (0x00024a1b) icf_edit_indi_pane_cp03_ParamLimits

0xf33e,	// (0x00024a1b) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
