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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00014919 };

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
0x932f,	// (0x0001dc48) Screen

0x933b,	// (0x0001dc54) application_window_ParamLimits

0x933b,	// (0x0001dc54) application_window

0xb90b,	// (0x00020224) screen_g1

0x87e1,	// (0x0001d0fa) area_bottom_pane_ParamLimits

0x87e1,	// (0x0001d0fa) area_bottom_pane

0xd6ab,	// (0x00021fc4) area_top_pane_ParamLimits

0xd6ab,	// (0x00021fc4) area_top_pane

0xd749,	// (0x00022062) main_pane_ParamLimits

0xd749,	// (0x00022062) main_pane

0xb915,	// (0x0002022e) misc_graphics

0xa9cb,	// (0x0001f2e4) battery_pane_ParamLimits

0xa9cb,	// (0x0001f2e4) battery_pane

0x202b,	// (0x00016944) bg_status_flat_pane_g8

0x2033,	// (0x0001694c) bg_status_flat_pane_g9

0x1326,	// (0x00015c3f) context_pane_ParamLimits

0x1326,	// (0x00015c3f) context_pane

0xab42,	// (0x0001f45b) navi_pane_ParamLimits

0xab42,	// (0x0001f45b) navi_pane

0xabcc,	// (0x0001f4e5) signal_pane_ParamLimits

0xabcc,	// (0x0001f4e5) signal_pane

0x0008,

0xf86f,	// (0x00024188) bg_status_flat_pane_g

0xac5c,	// (0x0001f575) status_pane_g1_ParamLimits

0xac5c,	// (0x0001f575) status_pane_g1

0xac72,	// (0x0001f58b) status_pane_g2_ParamLimits

0xac72,	// (0x0001f58b) status_pane_g2

0x1567,	// (0x00015e80) status_pane_g3_ParamLimits

0x1567,	// (0x00015e80) status_pane_g3

0x0004,

0xf79b,	// (0x000240b4) status_pane_g_ParamLimits

0xf79b,	// (0x000240b4) status_pane_g

0xac7e,	// (0x0001f597) title_pane_ParamLimits

0xac7e,	// (0x0001f597) title_pane

0xace1,	// (0x0001f5fa) uni_indicator_pane_ParamLimits

0xace1,	// (0x0001f5fa) uni_indicator_pane

0x0b3f,	// (0x00015458) bg_list_pane_ParamLimits

0x0b3f,	// (0x00015458) bg_list_pane

0xa1eb,	// (0x0001eb04) find_pane

0xa1f3,	// (0x0001eb0c) listscroll_app_pane_ParamLimits

0xa1f3,	// (0x0001eb0c) listscroll_app_pane

0x0b73,	// (0x0001548c) listscroll_form_pane

0xa203,	// (0x0001eb1c) listscroll_gen_pane_ParamLimits

0xa203,	// (0x0001eb1c) listscroll_gen_pane

0x0b8f,	// (0x000154a8) listscroll_set_pane

0x2bf2,	// (0x0001750b) main_idle_act_pane

0x0823,	// (0x0001513c) main_idle_trad_pane

0x0823,	// (0x0001513c) main_list_empty_pane

0x0ba9,	// (0x000154c2) main_midp_pane

0x0bb5,	// (0x000154ce) main_pane_g1_ParamLimits

0x0bb5,	// (0x000154ce) main_pane_g1

0xa225,	// (0x0001eb3e) popup_ai_message_window_ParamLimits

0xa225,	// (0x0001eb3e) popup_ai_message_window

0xa2c5,	// (0x0001ebde) popup_fep_china_uni_window_ParamLimits

0xa2c5,	// (0x0001ebde) popup_fep_china_uni_window

0x0cdf,	// (0x000155f8) popup_fep_japan_candidate_window_ParamLimits

0x0cdf,	// (0x000155f8) popup_fep_japan_candidate_window

0x0d09,	// (0x00015622) popup_fep_japan_predictive_window_ParamLimits

0x0d09,	// (0x00015622) popup_fep_japan_predictive_window

0xa325,	// (0x0001ec3e) popup_find_window

0xa342,	// (0x0001ec5b) popup_grid_graphic_window_ParamLimits

0xa342,	// (0x0001ec5b) popup_grid_graphic_window

0x0d7a,	// (0x00015693) popup_large_graphic_colour_window

0xa3e6,	// (0x0001ecff) popup_menu_window_ParamLimits

0xa3e6,	// (0x0001ecff) popup_menu_window

0xa5d6,	// (0x0001eeef) popup_note_image_window

0xa596,	// (0x0001eeaf) popup_note_wait_window_ParamLimits

0xa596,	// (0x0001eeaf) popup_note_wait_window

0xa5ee,	// (0x0001ef07) popup_note_window_ParamLimits

0xa5ee,	// (0x0001ef07) popup_note_window

0xa69c,	// (0x0001efb5) popup_query_code_window_ParamLimits

0xa69c,	// (0x0001efb5) popup_query_code_window

0x0fe6,	// (0x000158ff) popup_query_data_code_window_ParamLimits

0x0fe6,	// (0x000158ff) popup_query_data_code_window

0xa6dc,	// (0x0001eff5) popup_query_data_window_ParamLimits

0xa6dc,	// (0x0001eff5) popup_query_data_window

0xa770,	// (0x0001f089) popup_query_sat_info_window_ParamLimits

0xa770,	// (0x0001f089) popup_query_sat_info_window

0xa81b,	// (0x0001f134) popup_snote_single_graphic_window_ParamLimits

0xa81b,	// (0x0001f134) popup_snote_single_graphic_window

0xa81b,	// (0x0001f134) popup_snote_single_text_window_ParamLimits

0xa81b,	// (0x0001f134) popup_snote_single_text_window

0x1081,	// (0x0001599a) popup_sub_window_general

0x11c7,	// (0x00015ae0) popup_window_general_ParamLimits

0x11c7,	// (0x00015ae0) popup_window_general

0x11e0,	// (0x00015af9) power_save_pane

0x89d6,	// (0x0001d2ef) control_pane_g1_ParamLimits

0x89d6,	// (0x0001d2ef) control_pane_g1

0x89ff,	// (0x0001d318) control_pane_g2_ParamLimits

0x89ff,	// (0x0001d318) control_pane_g2

0x0ae0,	// (0x000153f9) control_pane_g3_ParamLimits

0x0ae0,	// (0x000153f9) control_pane_g3

0x0007,

0xf783,	// (0x0002409c) control_pane_g_ParamLimits

0xf783,	// (0x0002409c) control_pane_g

0x8a3a,	// (0x0001d353) control_pane_t1_ParamLimits

0x8a3a,	// (0x0001d353) control_pane_t1

0x8a98,	// (0x0001d3b1) control_pane_t2_ParamLimits

0x8a98,	// (0x0001d3b1) control_pane_t2

0x0002,

0xf794,	// (0x000240ad) control_pane_t_ParamLimits

0xf794,	// (0x000240ad) control_pane_t

0xa113,	// (0x0001ea2c) navi_navi_volume_pane_cp1

0xa11b,	// (0x0001ea34) status_small_icon_pane

0x0a15,	// (0x0001532e) status_small_pane_g1_ParamLimits

0x0a15,	// (0x0001532e) status_small_pane_g1

0xa123,	// (0x0001ea3c) status_small_pane_g2_ParamLimits

0xa123,	// (0x0001ea3c) status_small_pane_g2

0xa12f,	// (0x0001ea48) status_small_pane_g3_ParamLimits

0xa12f,	// (0x0001ea48) status_small_pane_g3

0xa13b,	// (0x0001ea54) status_small_pane_g4_ParamLimits

0xa13b,	// (0x0001ea54) status_small_pane_g4

0xa147,	// (0x0001ea60) status_small_pane_g5_ParamLimits

0xa147,	// (0x0001ea60) status_small_pane_g5

0xa155,	// (0x0001ea6e) status_small_pane_g6_ParamLimits

0xa155,	// (0x0001ea6e) status_small_pane_g6

0x0007,

0xf772,	// (0x0002408b) status_small_pane_g_ParamLimits

0xf772,	// (0x0002408b) status_small_pane_g

0xa184,	// (0x0001ea9d) status_small_pane_t1

0xa1a6,	// (0x0001eabf) status_small_wait_pane_ParamLimits

0xa1a6,	// (0x0001eabf) status_small_wait_pane

0x9e4d,	// (0x0001e766) aid_levels_signal_ParamLimits

0x9e4d,	// (0x0001e766) aid_levels_signal

0x9e65,	// (0x0001e77e) signal_pane_g1_ParamLimits

0x9e65,	// (0x0001e77e) signal_pane_g1

0x9e80,	// (0x0001e799) signal_pane_g2_ParamLimits

0x9e80,	// (0x0001e799) signal_pane_g2

0x0003,

0xf703,	// (0x0002401c) signal_pane_g_ParamLimits

0xf703,	// (0x0002401c) signal_pane_g

0xe0e1,	// (0x000229fa) context_pane_g1

0x934b,	// (0x0001dc64) title_pane_g1

0x9376,	// (0x0001dc8f) title_pane_t1

0xb937,	// (0x00020250) title_pane_t2

0xb95d,	// (0x00020276) title_pane_t3

0x0002,

0xf557,	// (0x00023e70) title_pane_t

0xad09,	// (0x0001f622) aid_levels_battery_ParamLimits

0xad09,	// (0x0001f622) aid_levels_battery

0xad25,	// (0x0001f63e) battery_pane_g1_ParamLimits

0xad25,	// (0x0001f63e) battery_pane_g1

0xad42,	// (0x0001f65b) battery_pane_g2_ParamLimits

0xad42,	// (0x0001f65b) battery_pane_g2

0x0001,

0xf7a6,	// (0x000240bf) battery_pane_g_ParamLimits

0xf7a6,	// (0x000240bf) battery_pane_g

0xb015,	// (0x0001f92e) uni_indicator_pane_g1

0xb02b,	// (0x0001f944) uni_indicator_pane_g2

0xb041,	// (0x0001f95a) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x00024230) uni_indicator_pane_g

0xe38f,	// (0x00022ca8) navi_icon_pane_ParamLimits

0xe38f,	// (0x00022ca8) navi_icon_pane

0xe313,	// (0x00022c2c) navi_midp_pane

0xe3ab,	// (0x00022cc4) navi_navi_pane

0xe3b5,	// (0x00022cce) navi_text_pane_ParamLimits

0xe3b5,	// (0x00022cce) navi_text_pane

0xb90b,	// (0x00020224) status_small_wait_pane_g1

0xbc72,	// (0x0002058b) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0002422b) status_small_wait_pane_g

0xaf7c,	// (0x0001f895) navi_navi_icon_text_pane

0xaf84,	// (0x0001f89d) navi_navi_pane_g1_ParamLimits

0xaf84,	// (0x0001f89d) navi_navi_pane_g1

0xaf96,	// (0x0001f8af) navi_navi_pane_g2_ParamLimits

0xaf96,	// (0x0001f8af) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x000241f9) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x000241f9) navi_navi_pane_g

0x26b4,	// (0x00016fcd) navi_navi_tabs_pane

0xafa8,	// (0x0001f8c1) navi_navi_text_pane

0xaf7c,	// (0x0001f895) navi_navi_volume_pane

0xaf6a,	// (0x0001f883) navi_text_pane_t1

0xaf5e,	// (0x0001f877) navi_icon_pane_g1

0x25ab,	// (0x00016ec4) navi_navi_text_pane_t1

0x8cff,	// (0x0001d618) navi_navi_volume_pane_g1

0x8d07,	// (0x0001d620) volume_small_pane

0xaea6,	// (0x0001f7bf) navi_navi_icon_text_pane_g1

0xaeae,	// (0x0001f7c7) navi_navi_icon_text_pane_t1

0xe3ab,	// (0x00022cc4) navi_tabs_2_long_pane

0xe3ab,	// (0x00022cc4) navi_tabs_2_pane

0xe3ab,	// (0x00022cc4) navi_tabs_3_long_pane

0xe3ab,	// (0x00022cc4) navi_tabs_3_pane

0xe3ab,	// (0x00022cc4) navi_tabs_4_pane

0x8cdf,	// (0x0001d5f8) tabs_2_active_pane_ParamLimits

0x8cdf,	// (0x0001d5f8) tabs_2_active_pane

0x8cef,	// (0x0001d608) tabs_2_passive_pane_ParamLimits

0x8cef,	// (0x0001d608) tabs_2_passive_pane

0x8cad,	// (0x0001d5c6) tabs_3_active_pane_ParamLimits

0x8cad,	// (0x0001d5c6) tabs_3_active_pane

0x8cbd,	// (0x0001d5d6) tabs_3_passive_pane_ParamLimits

0x8cbd,	// (0x0001d5d6) tabs_3_passive_pane

0x8cce,	// (0x0001d5e7) tabs_3_passive_pane_cp_ParamLimits

0x8cce,	// (0x0001d5e7) tabs_3_passive_pane_cp

0x8c69,	// (0x0001d582) tabs_4_active_pane_ParamLimits

0x8c69,	// (0x0001d582) tabs_4_active_pane

0x8c7a,	// (0x0001d593) tabs_4_passive_pane_ParamLimits

0x8c7a,	// (0x0001d593) tabs_4_passive_pane

0x8c8b,	// (0x0001d5a4) tabs_4_passive_pane_cp_ParamLimits

0x8c8b,	// (0x0001d5a4) tabs_4_passive_pane_cp

0x8c9c,	// (0x0001d5b5) tabs_4_passive_pane_cp2_ParamLimits

0x8c9c,	// (0x0001d5b5) tabs_4_passive_pane_cp2

0x8c45,	// (0x0001d55e) tabs_2_long_active_pane_ParamLimits

0x8c45,	// (0x0001d55e) tabs_2_long_active_pane

0x8c57,	// (0x0001d570) tabs_2_long_passive_pane_ParamLimits

0x8c57,	// (0x0001d570) tabs_2_long_passive_pane

0x8bfa,	// (0x0001d513) tabs_3_long_active_pane_ParamLimits

0x8bfa,	// (0x0001d513) tabs_3_long_active_pane

0x8c13,	// (0x0001d52c) tabs_3_long_passive_pane_ParamLimits

0x8c13,	// (0x0001d52c) tabs_3_long_passive_pane

0x8c2c,	// (0x0001d545) tabs_3_long_passive_pane_cp_ParamLimits

0x8c2c,	// (0x0001d545) tabs_3_long_passive_pane_cp

0xe8e2,	// (0x000231fb) volume_small_pane_g1

0x8ba9,	// (0x0001d4c2) volume_small_pane_g2

0x8bb2,	// (0x0001d4cb) volume_small_pane_g3

0x8bbb,	// (0x0001d4d4) volume_small_pane_g4

0x8bc4,	// (0x0001d4dd) volume_small_pane_g5

0x8bcd,	// (0x0001d4e6) volume_small_pane_g6

0x8bd6,	// (0x0001d4ef) volume_small_pane_g7

0x8bdf,	// (0x0001d4f8) volume_small_pane_g8

0x8be8,	// (0x0001d501) volume_small_pane_g9

0x8bf1,	// (0x0001d50a) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x000241c5) volume_small_pane_g

0xb96f,	// (0x00020288) bg_active_tab_pane_cp2_ParamLimits

0xb96f,	// (0x00020288) bg_active_tab_pane_cp2

0x9402,	// (0x0001dd1b) tabs_3_active_pane_g1

0x940a,	// (0x0001dd23) tabs_3_active_pane_t1

0xb96f,	// (0x00020288) bg_passive_tab_pane_cp2_ParamLimits

0xb96f,	// (0x00020288) bg_passive_tab_pane_cp2

0x9402,	// (0x0001dd1b) tabs_3_passive_pane_g1

0x940a,	// (0x0001dd23) tabs_3_passive_pane_t1

0xb96f,	// (0x00020288) bg_active_tab_pane_cp3_ParamLimits

0xb96f,	// (0x00020288) bg_active_tab_pane_cp3

0x941c,	// (0x0001dd35) tabs_4_active_pane_g1

0x9424,	// (0x0001dd3d) tabs_4_active_pane_t1

0xb96f,	// (0x00020288) bg_passive_tab_pane_cp3_ParamLimits

0xb96f,	// (0x00020288) bg_passive_tab_pane_cp3

0x941c,	// (0x0001dd35) tabs_4_1_passive_pane_g1

0x9424,	// (0x0001dd3d) tabs_4_1_passive_pane_t1

0x0ba9,	// (0x000154c2) list_highlight_pane_cp2

0xb0e8,	// (0x0001fa01) list_set_pane_ParamLimits

0xb0e8,	// (0x0001fa01) list_set_pane

0xb1b0,	// (0x0001fac9) main_pane_set_t1_ParamLimits

0xb1b0,	// (0x0001fac9) main_pane_set_t1

0xb1d0,	// (0x0001fae9) main_pane_set_t2_ParamLimits

0xb1d0,	// (0x0001fae9) main_pane_set_t2

0xb1e4,	// (0x0001fafd) main_pane_set_t3_ParamLimits

0xb1e4,	// (0x0001fafd) main_pane_set_t3

0xb1f8,	// (0x0001fb11) main_pane_set_t4_ParamLimits

0xb1f8,	// (0x0001fb11) main_pane_set_t4

0x0003,

0xf97c,	// (0x00024295) main_pane_set_t_ParamLimits

0xf97c,	// (0x00024295) main_pane_set_t

0xb20c,	// (0x0001fb25) setting_code_pane

0x2d46,	// (0x0001765f) setting_slider_graphic_pane

0x2d46,	// (0x0001765f) setting_slider_pane

0x2d46,	// (0x0001765f) setting_text_pane

0x2d46,	// (0x0001765f) setting_volume_pane

0xd858,	// (0x00022171) volume_set_pane

0xb97d,	// (0x00020296) bg_set_opt_pane_cp

0xd862,	// (0x0002217b) setting_slider_pane_t1

0xd87b,	// (0x00022194) setting_slider_pane_t2

0xd895,	// (0x000221ae) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00023e77) setting_slider_pane_t

0xd8ad,	// (0x000221c6) slider_set_pane

0xb915,	// (0x0002022e) bg_set_opt_pane_cp2

0xb98b,	// (0x000202a4) setting_slider_graphic_pane_g1

0xd8c3,	// (0x000221dc) setting_slider_graphic_pane_t1

0xd8d3,	// (0x000221ec) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00023e7e) setting_slider_graphic_pane_t

0xd8e3,	// (0x000221fc) slider_set_pane_cp

0xb915,	// (0x0002022e) input_focus_pane_cp1

0x2bd9,	// (0x000174f2) list_set_text_pane

0xb90b,	// (0x00020224) setting_text_pane_g1

0xb915,	// (0x0002022e) input_focus_pane_cp2

0xb90b,	// (0x00020224) setting_code_pane_g1

0xb994,	// (0x000202ad) setting_code_pane_t1

0xb9a2,	// (0x000202bb) set_text_pane_t1_ParamLimits

0xb9a2,	// (0x000202bb) set_text_pane_t1

0xda93,	// (0x000223ac) set_opt_bg_pane_g1

0xda9b,	// (0x000223b4) set_opt_bg_pane_g2

0x2bb1,	// (0x000174ca) set_opt_bg_pane_g3

0xdaab,	// (0x000223c4) set_opt_bg_pane_g4

0xdab3,	// (0x000223cc) set_opt_bg_pane_g5

0xdabb,	// (0x000223d4) set_opt_bg_pane_g6

0x2bbb,	// (0x000174d4) set_opt_bg_pane_g7

0x2bc5,	// (0x000174de) set_opt_bg_pane_g8

0x2bcf,	// (0x000174e8) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x00024282) set_opt_bg_pane_g

0x2ba4,	// (0x000174bd) slider_set_pane_g1

0xe963,	// (0x0002327c) slider_set_pane_g2

0x0006,

0xf95a,	// (0x00024273) slider_set_pane_g

0xe8eb,	// (0x00023204) volume_set_pane_g1

0xe8f5,	// (0x0002320e) volume_set_pane_g2

0xe8ff,	// (0x00023218) volume_set_pane_g3

0xe909,	// (0x00023222) volume_set_pane_g4

0xe913,	// (0x0002322c) volume_set_pane_g5

0xe91d,	// (0x00023236) volume_set_pane_g6

0xe927,	// (0x00023240) volume_set_pane_g7

0xe931,	// (0x0002324a) volume_set_pane_g8

0xe93b,	// (0x00023254) volume_set_pane_g9

0xe945,	// (0x0002325e) volume_set_pane_g10

0x0009,

0xf932,	// (0x0002424b) volume_set_pane_g

0x9436,	// (0x0001dd4f) indicator_pane_ParamLimits

0x9436,	// (0x0001dd4f) indicator_pane

0x9462,	// (0x0001dd7b) main_idle_pane_g2_ParamLimits

0x9462,	// (0x0001dd7b) main_idle_pane_g2

0x949a,	// (0x0001ddb3) main_pane_idle_g1_ParamLimits

0x949a,	// (0x0001ddb3) main_pane_idle_g1

0xb9bc,	// (0x000202d5) popup_clock_digital_analogue_window_ParamLimits

0xb9bc,	// (0x000202d5) popup_clock_digital_analogue_window

0x94c8,	// (0x0001dde1) soft_indicator_pane_ParamLimits

0x94c8,	// (0x0001dde1) soft_indicator_pane

0x94e4,	// (0x0001ddfd) wallpaper_pane_ParamLimits

0x94e4,	// (0x0001ddfd) wallpaper_pane

0xb90b,	// (0x00020224) wallpaper_pane_g1

0x94f6,	// (0x0001de0f) indicator_pane_g1_ParamLimits

0x94f6,	// (0x0001de0f) indicator_pane_g1

0x3097,	// (0x000179b0) navi_navi_icon_text_pane_srt_g1

0xb9ea,	// (0x00020303) soft_indicator_pane_t1

0xba04,	// (0x0002031d) aid_ps_area_pane

0x950f,	// (0x0001de28) aid_ps_clock_pane

0xba15,	// (0x0002032e) aid_ps_indicator_pane

0xba21,	// (0x0002033a) indicator_ps_pane_ParamLimits

0xba21,	// (0x0002033a) indicator_ps_pane

0xba30,	// (0x00020349) power_save_pane_g1_ParamLimits

0xba30,	// (0x00020349) power_save_pane_g1

0xba3c,	// (0x00020355) power_save_pane_g2_ParamLimits

0xba3c,	// (0x00020355) power_save_pane_g2

0xd68b,	// (0x00021fa4) aid_navinavi_width_pane

0xba04,	// (0x0002031d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00023e83) power_save_pane_g_ParamLimits

0xf56a,	// (0x00023e83) power_save_pane_g

0xba4a,	// (0x00020363) power_save_pane_t1_ParamLimits

0xba4a,	// (0x00020363) power_save_pane_t1

0x950f,	// (0x0001de28) aid_ps_clock_pane_ParamLimits

0xba15,	// (0x0002032e) aid_ps_indicator_pane_ParamLimits

0xba5c,	// (0x00020375) power_save_pane_t4_ParamLimits

0xba5c,	// (0x00020375) power_save_pane_t4

0x0001,

0xf56f,	// (0x00023e88) power_save_pane_t_ParamLimits

0xf56f,	// (0x00023e88) power_save_pane_t

0xba86,	// (0x0002039f) power_save_t3_ParamLimits

0xba86,	// (0x0002039f) power_save_t3

0xba71,	// (0x0002038a) power_save_t2_ParamLimits

0xba71,	// (0x0002038a) power_save_t2

0xba9b,	// (0x000203b4) indicator_ps_pane_g1

0x951d,	// (0x0001de36) ai_gene_pane_ParamLimits

0x951d,	// (0x0001de36) ai_gene_pane

0x9534,	// (0x0001de4d) ai_links_pane_ParamLimits

0x9534,	// (0x0001de4d) ai_links_pane

0x954c,	// (0x0001de65) indicator_pane_cp1_ParamLimits

0x954c,	// (0x0001de65) indicator_pane_cp1

0x955b,	// (0x0001de74) main_pane_idle_g1_cp_ParamLimits

0x955b,	// (0x0001de74) main_pane_idle_g1_cp

0xbaa4,	// (0x000203bd) popup_ai_links_title_window

0x9573,	// (0x0001de8c) soft_indicator_pane_cp1_ParamLimits

0x9573,	// (0x0001de8c) soft_indicator_pane_cp1

0x2963,	// (0x0001727c) ai_links_pane_g1

0x296c,	// (0x00017285) grid_ai_links_pane

0xb00c,	// (0x0001f925) ai_gene_pane_1

0x2951,	// (0x0001726a) ai_gene_pane_2

0x295a,	// (0x00017273) list_highlight_pane_cp4

0xafe8,	// (0x0001f901) cell_ai_link_pane_ParamLimits

0xafe8,	// (0x0001f901) cell_ai_link_pane

0x2920,	// (0x00017239) cell_ai_link_pane_g1

0xbc72,	// (0x0002058b) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x00024226) cell_ai_link_pane_g

0xb915,	// (0x0002022e) grid_highlight_cp2

0xb915,	// (0x0002022e) bg_popup_sub_pane_cp1

0xbabb,	// (0x000203d4) popup_ai_links_title_window_t1

0x286c,	// (0x00017185) ai_gene_pane_1_g1_ParamLimits

0x286c,	// (0x00017185) ai_gene_pane_1_g1

0x2878,	// (0x00017191) ai_gene_pane_1_g2_ParamLimits

0x2878,	// (0x00017191) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0002421c) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0002421c) ai_gene_pane_1_g

0x2885,	// (0x0001719e) ai_gene_pane_1_t1_ParamLimits

0x2885,	// (0x0001719e) ai_gene_pane_1_t1

0x28b9,	// (0x000171d2) grid_ai_soft_ind_pane

0x2857,	// (0x00017170) ai_gene_pane_2_t1_ParamLimits

0x2857,	// (0x00017170) ai_gene_pane_2_t1

0x9587,	// (0x0001dea0) main_pane_empty_t1_ParamLimits

0x9587,	// (0x0001dea0) main_pane_empty_t1

0x959f,	// (0x0001deb8) main_pane_empty_t2_ParamLimits

0x959f,	// (0x0001deb8) main_pane_empty_t2

0x95b4,	// (0x0001decd) main_pane_empty_t3_ParamLimits

0x95b4,	// (0x0001decd) main_pane_empty_t3

0x95c6,	// (0x0001dedf) main_pane_empty_t4_ParamLimits

0x95c6,	// (0x0001dedf) main_pane_empty_t4

0x95d8,	// (0x0001def1) main_pane_empty_t5_ParamLimits

0x95d8,	// (0x0001def1) main_pane_empty_t5

0x0004,

0xf574,	// (0x00023e8d) main_pane_empty_t_ParamLimits

0xf574,	// (0x00023e8d) main_pane_empty_t

0xdb13,	// (0x0002242c) bg_popup_window_pane_ParamLimits

0xdb13,	// (0x0002242c) bg_popup_window_pane

0x25b9,	// (0x00016ed2) find_popup_pane_cp2_ParamLimits

0x25b9,	// (0x00016ed2) find_popup_pane_cp2

0x25c5,	// (0x00016ede) heading_pane_ParamLimits

0x25c5,	// (0x00016ede) heading_pane

0xb915,	// (0x0002022e) bg_popup_sub_pane

0xaecb,	// (0x0001f7e4) bg_popup_window_pane_g1_ParamLimits

0xaecb,	// (0x0001f7e4) bg_popup_window_pane_g1

0xaeda,	// (0x0001f7f3) bg_popup_window_pane_g2_ParamLimits

0xaeda,	// (0x0001f7f3) bg_popup_window_pane_g2

0xaee6,	// (0x0001f7ff) bg_popup_window_pane_g3_ParamLimits

0xaee6,	// (0x0001f7ff) bg_popup_window_pane_g3

0xaef2,	// (0x0001f80b) bg_popup_window_pane_g4_ParamLimits

0xaef2,	// (0x0001f80b) bg_popup_window_pane_g4

0xaf01,	// (0x0001f81a) bg_popup_window_pane_g5_ParamLimits

0xaf01,	// (0x0001f81a) bg_popup_window_pane_g5

0xaf11,	// (0x0001f82a) bg_popup_window_pane_g6_ParamLimits

0xaf11,	// (0x0001f82a) bg_popup_window_pane_g6

0xaf1d,	// (0x0001f836) bg_popup_window_pane_g7_ParamLimits

0xaf1d,	// (0x0001f836) bg_popup_window_pane_g7

0xaf2c,	// (0x0001f845) bg_popup_window_pane_g8_ParamLimits

0xaf2c,	// (0x0001f845) bg_popup_window_pane_g8

0xaf3b,	// (0x0001f854) bg_popup_window_pane_g9_ParamLimits

0xaf3b,	// (0x0001f854) bg_popup_window_pane_g9

0x259f,	// (0x00016eb8) bg_popup_window_pane_g10_ParamLimits

0x259f,	// (0x00016eb8) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x000241e4) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x000241e4) bg_popup_window_pane_g

0x24c8,	// (0x00016de1) bg_popup_heading_pane_ParamLimits

0x24c8,	// (0x00016de1) bg_popup_heading_pane

0xe9eb,	// (0x00023304) tabs_4_passive_pane_cp_srt_ParamLimits

0xe9eb,	// (0x00023304) tabs_4_passive_pane_cp_srt

0xe9fd,	// (0x00023316) tabs_4_passive_pane_srt_ParamLimits

0x24dc,	// (0x00016df5) heading_pane_g2

0xe9fd,	// (0x00023316) tabs_4_passive_pane_srt

0x1846,	// (0x0001615f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1846,	// (0x0001615f) bg_passive_tab_pane_cp3_srt

0x24e4,	// (0x00016dfd) heading_pane_t1_ParamLimits

0x24e4,	// (0x00016dfd) heading_pane_t1

0x24fb,	// (0x00016e14) heading_pane_t2_ParamLimits

0x24fb,	// (0x00016e14) heading_pane_t2

0x0001,

0xf8c6,	// (0x000241df) heading_pane_t_ParamLimits

0xf8c6,	// (0x000241df) heading_pane_t

0x1ff3,	// (0x0001690c) bg_popup_heading_pane_g1

0x20a2,	// (0x000169bb) bg_popup_heading_pane_g2

0x20ac,	// (0x000169c5) bg_popup_heading_pane_g3

0x20b6,	// (0x000169cf) bg_popup_heading_pane_g4

0x20c0,	// (0x000169d9) bg_popup_heading_pane_g5

0x20ca,	// (0x000169e3) bg_popup_heading_pane_g6

0x20d2,	// (0x000169eb) bg_popup_heading_pane_g7

0x20da,	// (0x000169f3) bg_popup_heading_pane_g8

0x20e4,	// (0x000169fd) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0002419b) bg_popup_heading_pane_g

0x1720,	// (0x00016039) bg_popup_sub_pane_g1

0x1730,	// (0x00016049) bg_popup_sub_pane_g2

0x1728,	// (0x00016041) bg_popup_sub_pane_g3

0x1740,	// (0x00016059) bg_popup_sub_pane_g4

0x1738,	// (0x00016051) bg_popup_sub_pane_g5

0x1748,	// (0x00016061) bg_popup_sub_pane_g6

0x1750,	// (0x00016069) bg_popup_sub_pane_g7

0x1760,	// (0x00016079) bg_popup_sub_pane_g8

0x1758,	// (0x00016071) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x00024175) bg_popup_sub_pane_g

0xb96f,	// (0x00020288) bg_popup_window_pane_cp5_ParamLimits

0xb96f,	// (0x00020288) bg_popup_window_pane_cp5

0xbad8,	// (0x000203f1) popup_note_window_g1_ParamLimits

0xbad8,	// (0x000203f1) popup_note_window_g1

0xbae4,	// (0x000203fd) popup_note_window_t1_ParamLimits

0xbae4,	// (0x000203fd) popup_note_window_t1

0xbafa,	// (0x00020413) popup_note_window_t2_ParamLimits

0xbafa,	// (0x00020413) popup_note_window_t2

0xbb10,	// (0x00020429) popup_note_window_t3_ParamLimits

0xbb10,	// (0x00020429) popup_note_window_t3

0xbb26,	// (0x0002043f) popup_note_window_t4_ParamLimits

0xbb26,	// (0x0002043f) popup_note_window_t4

0xbb4e,	// (0x00020467) popup_note_window_t5_ParamLimits

0xbb4e,	// (0x00020467) popup_note_window_t5

0x0004,

0xf57f,	// (0x00023e98) popup_note_window_t_ParamLimits

0xf57f,	// (0x00023e98) popup_note_window_t

0xbb72,	// (0x0002048b) bg_popup_window_pane_cp6_ParamLimits

0xbb72,	// (0x0002048b) bg_popup_window_pane_cp6

0x1f6f,	// (0x00016888) popup_note_image_window_g1_ParamLimits

0x1f6f,	// (0x00016888) popup_note_image_window_g1

0x1f7b,	// (0x00016894) popup_note_image_window_g2_ParamLimits

0x1f7b,	// (0x00016894) popup_note_image_window_g2

0x0001,

0xf850,	// (0x00024169) popup_note_image_window_g_ParamLimits

0xf850,	// (0x00024169) popup_note_image_window_g

0x1f94,	// (0x000168ad) popup_note_image_window_t1_ParamLimits

0x1f94,	// (0x000168ad) popup_note_image_window_t1

0x1fad,	// (0x000168c6) popup_note_image_window_t2_ParamLimits

0x1fad,	// (0x000168c6) popup_note_image_window_t2

0x1fc6,	// (0x000168df) popup_note_image_window_t3_ParamLimits

0x1fc6,	// (0x000168df) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0002416e) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0002416e) popup_note_image_window_t

0x1e2f,	// (0x00016748) bg_popup_window_pane_cp7_ParamLimits

0x1e2f,	// (0x00016748) bg_popup_window_pane_cp7

0x1e5f,	// (0x00016778) popup_note_wait_window_g1_ParamLimits

0x1e5f,	// (0x00016778) popup_note_wait_window_g1

0x1e6b,	// (0x00016784) popup_note_wait_window_g2_ParamLimits

0x1e6b,	// (0x00016784) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x00024157) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x00024157) popup_note_wait_window_g

0x1e83,	// (0x0001679c) popup_note_wait_window_t1_ParamLimits

0x1e83,	// (0x0001679c) popup_note_wait_window_t1

0x1eaa,	// (0x000167c3) popup_note_wait_window_t2_ParamLimits

0x1eaa,	// (0x000167c3) popup_note_wait_window_t2

0x1ec8,	// (0x000167e1) popup_note_wait_window_t3_ParamLimits

0x1ec8,	// (0x000167e1) popup_note_wait_window_t3

0x1edb,	// (0x000167f4) popup_note_wait_window_t4_ParamLimits

0x1edb,	// (0x000167f4) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0002415e) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0002415e) popup_note_wait_window_t

0x1f00,	// (0x00016819) wait_bar_pane_ParamLimits

0x1f00,	// (0x00016819) wait_bar_pane

0xb915,	// (0x0002022e) wait_anim_pane

0xb915,	// (0x0002022e) wait_border_pane

0xb90b,	// (0x00020224) wait_anim_pane_g1

0xb90b,	// (0x00020224) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00024017) wait_anim_pane_g

0x1dd3,	// (0x000166ec) wait_border_pane_g1

0x1dde,	// (0x000166f7) wait_border_pane_g2

0x1de7,	// (0x00016700) wait_border_pane_g3

0x0002,

0xf837,	// (0x00024150) wait_border_pane_g

0x1c3d,	// (0x00016556) bg_popup_window_pane_cp16_ParamLimits

0x1c3d,	// (0x00016556) bg_popup_window_pane_cp16

0x1d3d,	// (0x00016656) indicator_popup_pane_cp4_ParamLimits

0x1d3d,	// (0x00016656) indicator_popup_pane_cp4

0x1d51,	// (0x0001666a) popup_query_data_window_t1_ParamLimits

0x1d51,	// (0x0001666a) popup_query_data_window_t1

0x1d63,	// (0x0001667c) popup_query_data_window_t2_ParamLimits

0x1d63,	// (0x0001667c) popup_query_data_window_t2

0x1d7c,	// (0x00016695) popup_query_data_window_t3_ParamLimits

0x1d7c,	// (0x00016695) popup_query_data_window_t3

0x0002,

0xf830,	// (0x00024149) popup_query_data_window_t_ParamLimits

0xf830,	// (0x00024149) popup_query_data_window_t

0x1d96,	// (0x000166af) query_popup_data_pane_ParamLimits

0x1d96,	// (0x000166af) query_popup_data_pane

0x1daa,	// (0x000166c3) query_popup_data_pane_cp1_ParamLimits

0x1daa,	// (0x000166c3) query_popup_data_pane_cp1

0x1c3d,	// (0x00016556) bg_popup_window_pane_cp10_ParamLimits

0x1c3d,	// (0x00016556) bg_popup_window_pane_cp10

0x1c6f,	// (0x00016588) indicator_popup_pane_ParamLimits

0x1c6f,	// (0x00016588) indicator_popup_pane

0x1c91,	// (0x000165aa) popup_query_code_window_t1_ParamLimits

0x1c91,	// (0x000165aa) popup_query_code_window_t1

0x1cab,	// (0x000165c4) popup_query_code_window_t2_ParamLimits

0x1cab,	// (0x000165c4) popup_query_code_window_t2

0x1cf4,	// (0x0001660d) popup_query_code_window_t3_ParamLimits

0x1cf4,	// (0x0001660d) popup_query_code_window_t3

0x0002,

0xf829,	// (0x00024142) popup_query_code_window_t_ParamLimits

0xf829,	// (0x00024142) popup_query_code_window_t

0x1d23,	// (0x0001663c) query_popup_pane_ParamLimits

0x1d23,	// (0x0001663c) query_popup_pane

0xbb72,	// (0x0002048b) bg_popup_window_pane_cp15_ParamLimits

0xbb72,	// (0x0002048b) bg_popup_window_pane_cp15

0xbb92,	// (0x000204ab) indicator_popup_pane_cp1_ParamLimits

0xbb92,	// (0x000204ab) indicator_popup_pane_cp1

0xbba5,	// (0x000204be) indicator_popup_pane_cp2_ParamLimits

0xbba5,	// (0x000204be) indicator_popup_pane_cp2

0xbbc0,	// (0x000204d9) popup_query_data_code_window_g1_ParamLimits

0xbbc0,	// (0x000204d9) popup_query_data_code_window_g1

0xbbd3,	// (0x000204ec) popup_query_data_code_window_t1_ParamLimits

0xbbd3,	// (0x000204ec) popup_query_data_code_window_t1

0xbbe5,	// (0x000204fe) popup_query_data_code_window_t2_ParamLimits

0xbbe5,	// (0x000204fe) popup_query_data_code_window_t2

0xbbf7,	// (0x00020510) popup_query_data_code_window_t3_ParamLimits

0xbbf7,	// (0x00020510) popup_query_data_code_window_t3

0xbc0d,	// (0x00020526) popup_query_data_code_window_t4_ParamLimits

0xbc0d,	// (0x00020526) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00023ea3) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00023ea3) popup_query_data_code_window_t

0xe84d,	// (0x00023166) list_single_midp_graphic_pane_g3

0xbc27,	// (0x00020540) query_popup_data_pane_cp2_ParamLimits

0xbc3a,	// (0x00020553) query_popup_pane_cp2_ParamLimits

0xbc3a,	// (0x00020553) query_popup_pane_cp2

0xb915,	// (0x0002022e) bg_popup_window_pane_cp11

0x1c35,	// (0x0001654e) heading_pane_cp5

0xbcd0,	// (0x000205e9) listscroll_popup_info_pane

0xb915,	// (0x0002022e) input_focus_pane_cp3

0xbc55,	// (0x0002056e) query_popup_pane_t1

0xbc63,	// (0x0002057c) list_popup_info_pane_ParamLimits

0xbc63,	// (0x0002057c) list_popup_info_pane

0xbc72,	// (0x0002058b) listscroll_popup_info_pane_g1

0xbc7a,	// (0x00020593) scroll_pane_cp7

0xbc84,	// (0x0002059d) popup_info_list_pane_t1_ParamLimits

0xbc84,	// (0x0002059d) popup_info_list_pane_t1

0xbc9e,	// (0x000205b7) popup_info_list_pane_t2_ParamLimits

0xbc9e,	// (0x000205b7) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00023eac) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00023eac) popup_info_list_pane_t

0xb915,	// (0x0002022e) bg_popup_window_pane_cp12

0x30b1,	// (0x000179ca) find_popup_pane

0xb97d,	// (0x00020296) bg_popup_window_pane_cp3

0xbcb8,	// (0x000205d1) heading_pane_cp3

0xbcc4,	// (0x000205dd) listscroll_popup_graphic_pane

0xb915,	// (0x0002022e) bg_popup_window_pane_cp4

0x963a,	// (0x0001df53) heading_pane_cp4

0xbcd0,	// (0x000205e9) listscroll_popup_colour_pane

0x9644,	// (0x0001df5d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9644,	// (0x0001df5d) cell_large_graphic_colour_none_popup_pane

0x9658,	// (0x0001df71) grid_large_graphic_colour_popup_pane_ParamLimits

0x9658,	// (0x0001df71) grid_large_graphic_colour_popup_pane

0x967c,	// (0x0001df95) listscroll_popup_colour_pane_g1_ParamLimits

0x967c,	// (0x0001df95) listscroll_popup_colour_pane_g1

0x9693,	// (0x0001dfac) listscroll_popup_colour_pane_g2_ParamLimits

0x9693,	// (0x0001dfac) listscroll_popup_colour_pane_g2

0x96aa,	// (0x0001dfc3) listscroll_popup_colour_pane_g3_ParamLimits

0x96aa,	// (0x0001dfc3) listscroll_popup_colour_pane_g3

0x96ba,	// (0x0001dfd3) listscroll_popup_colour_pane_g4_ParamLimits

0x96ba,	// (0x0001dfd3) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00023eb1) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00023eb1) listscroll_popup_colour_pane_g

0xbcd8,	// (0x000205f1) scroll_pane_cp6_ParamLimits

0xbcd8,	// (0x000205f1) scroll_pane_cp6

0x96ca,	// (0x0001dfe3) cell_large_graphic_colour_popup_pane_ParamLimits

0x96ca,	// (0x0001dfe3) cell_large_graphic_colour_popup_pane

0xbcea,	// (0x00020603) cell_large_graphic_colour_none_popup_pane_t1

0xb915,	// (0x0002022e) grid_highlight_pane_cp5

0xbcf9,	// (0x00020612) cell_large_graphic_colour_popup_pane_g1

0xbd01,	// (0x0002061a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00023eba) cell_large_graphic_colour_popup_pane_g

0xbd09,	// (0x00020622) cell_large_graphic_colour_popup_pane_g2_copy1

0xbd12,	// (0x0002062b) grid_highlight_pane_cp4

0xbd1a,	// (0x00020633) bg_popup_window_pane_cp8_ParamLimits

0xbd1a,	// (0x00020633) bg_popup_window_pane_cp8

0xbd35,	// (0x0002064e) popup_snote_single_text_window_g1_ParamLimits

0xbd35,	// (0x0002064e) popup_snote_single_text_window_g1

0xbd47,	// (0x00020660) popup_snote_single_text_window_t1_ParamLimits

0xbd47,	// (0x00020660) popup_snote_single_text_window_t1

0xbd5a,	// (0x00020673) popup_snote_single_text_window_t2_ParamLimits

0xbd5a,	// (0x00020673) popup_snote_single_text_window_t2

0xbd6d,	// (0x00020686) popup_snote_single_text_window_t3_ParamLimits

0xbd6d,	// (0x00020686) popup_snote_single_text_window_t3

0xbda6,	// (0x000206bf) popup_snote_single_text_window_t4_ParamLimits

0xbda6,	// (0x000206bf) popup_snote_single_text_window_t4

0xbdda,	// (0x000206f3) popup_snote_single_text_window_t5_ParamLimits

0xbdda,	// (0x000206f3) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00023ebf) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00023ebf) popup_snote_single_text_window_t

0xbe09,	// (0x00020722) bg_popup_window_pane_cp9_ParamLimits

0xbe09,	// (0x00020722) bg_popup_window_pane_cp9

0xbd35,	// (0x0002064e) popup_snote_single_graphic_window_g1_ParamLimits

0xbd35,	// (0x0002064e) popup_snote_single_graphic_window_g1

0xbe17,	// (0x00020730) popup_snote_single_graphic_window_g2_ParamLimits

0xbe17,	// (0x00020730) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00023eca) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00023eca) popup_snote_single_graphic_window_g

0xbe23,	// (0x0002073c) popup_snote_single_graphic_window_t1_ParamLimits

0xbe23,	// (0x0002073c) popup_snote_single_graphic_window_t1

0xbe36,	// (0x0002074f) popup_snote_single_graphic_window_t2_ParamLimits

0xbe36,	// (0x0002074f) popup_snote_single_graphic_window_t2

0xbe49,	// (0x00020762) popup_snote_single_graphic_window_t3_ParamLimits

0xbe49,	// (0x00020762) popup_snote_single_graphic_window_t3

0xbe82,	// (0x0002079b) popup_snote_single_graphic_window_t4_ParamLimits

0xbe82,	// (0x0002079b) popup_snote_single_graphic_window_t4

0xbeb6,	// (0x000207cf) popup_snote_single_graphic_window_t5_ParamLimits

0xbeb6,	// (0x000207cf) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00023ecf) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00023ecf) popup_snote_single_graphic_window_t

0x2fef,	// (0x00017908) grid_graphic_popup_pane_ParamLimits

0x2fef,	// (0x00017908) grid_graphic_popup_pane

0x301d,	// (0x00017936) listscroll_popup_graphic_pane_g1_ParamLimits

0x301d,	// (0x00017936) listscroll_popup_graphic_pane_g1

0xb356,	// (0x0001fc6f) listscroll_popup_graphic_pane_g2_ParamLimits

0xb356,	// (0x0001fc6f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x000242bf) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x000242bf) listscroll_popup_graphic_pane_g

0x3045,	// (0x0001795e) scroll_pane_cp5

0xb315,	// (0x0001fc2e) cell_graphic_popup_pane_ParamLimits

0xb315,	// (0x0001fc2e) cell_graphic_popup_pane

0x2f78,	// (0x00017891) cell_graphic_popup_pane_g1

0x2f80,	// (0x00017899) cell_graphic_popup_pane_g2

0xbd09,	// (0x00020622) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x000242b8) cell_graphic_popup_pane_g

0x2f89,	// (0x000178a2) cell_graphic_popup_pane_t2

0xbd12,	// (0x0002062b) grid_highlight_pane_cp3

0xbef7,	// (0x00020810) list_gen_pane_ParamLimits

0xbef7,	// (0x00020810) list_gen_pane

0xbf1f,	// (0x00020838) scroll_pane

0xb2cc,	// (0x0001fbe5) bg_list_pane_g1_ParamLimits

0xb2cc,	// (0x0001fbe5) bg_list_pane_g1

0x2eed,	// (0x00017806) bg_list_pane_g2_ParamLimits

0x2eed,	// (0x00017806) bg_list_pane_g2

0x2f02,	// (0x0001781b) bg_list_pane_g3_ParamLimits

0x2f02,	// (0x0001781b) bg_list_pane_g3

0x2f16,	// (0x0001782f) bg_list_pane_g4_ParamLimits

0x2f16,	// (0x0001782f) bg_list_pane_g4

0xb2e9,	// (0x0001fc02) bg_list_pane_g5_ParamLimits

0xb2e9,	// (0x0001fc02) bg_list_pane_g5

0x0004,

0xf994,	// (0x000242ad) bg_list_pane_g_ParamLimits

0xf994,	// (0x000242ad) bg_list_pane_g

0xb266,	// (0x0001fb7f) list_double2_graphic_large_graphic_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double2_graphic_large_graphic_pane

0xb266,	// (0x0001fb7f) list_double2_graphic_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double2_graphic_pane

0xb266,	// (0x0001fb7f) list_double2_large_graphic_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double2_large_graphic_pane

0xb266,	// (0x0001fb7f) list_double2_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double2_pane

0xb266,	// (0x0001fb7f) list_double_graphic_heading_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double_graphic_heading_pane

0xb266,	// (0x0001fb7f) list_double_graphic_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double_graphic_pane

0xb266,	// (0x0001fb7f) list_double_heading_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double_heading_pane

0xb266,	// (0x0001fb7f) list_double_large_graphic_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double_large_graphic_pane

0xb266,	// (0x0001fb7f) list_double_number_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double_number_pane

0xb266,	// (0x0001fb7f) list_double_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double_pane

0xb266,	// (0x0001fb7f) list_double_time_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_double_time_pane

0xb266,	// (0x0001fb7f) list_setting_number_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_setting_number_pane

0xb266,	// (0x0001fb7f) list_setting_pane_ParamLimits

0xb266,	// (0x0001fb7f) list_setting_pane

0xb27a,	// (0x0001fb93) list_single_2graphic_pane_ParamLimits

0xb27a,	// (0x0001fb93) list_single_2graphic_pane

0xb27a,	// (0x0001fb93) list_single_graphic_heading_pane_ParamLimits

0xb27a,	// (0x0001fb93) list_single_graphic_heading_pane

0xb27a,	// (0x0001fb93) list_single_graphic_pane_ParamLimits

0xb27a,	// (0x0001fb93) list_single_graphic_pane

0xb27a,	// (0x0001fb93) list_single_heading_pane_ParamLimits

0xb27a,	// (0x0001fb93) list_single_heading_pane

0xb27a,	// (0x0001fb93) list_single_large_graphic_pane_ParamLimits

0xb27a,	// (0x0001fb93) list_single_large_graphic_pane

0xb27a,	// (0x0001fb93) list_single_number_heading_pane_ParamLimits

0xb27a,	// (0x0001fb93) list_single_number_heading_pane

0xb27a,	// (0x0001fb93) list_single_number_pane_ParamLimits

0xb27a,	// (0x0001fb93) list_single_number_pane

0xb27a,	// (0x0001fb93) list_single_pane_ParamLimits

0xb27a,	// (0x0001fb93) list_single_pane

0xb915,	// (0x0002022e) list_highlight_pane_cp1

0x0794,	// (0x000150ad) list_single_pane_g1_ParamLimits

0x0794,	// (0x000150ad) list_single_pane_g1

0x16a2,	// (0x00015fbb) list_single_pane_g2_ParamLimits

0x16a2,	// (0x00015fbb) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00023ee1) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00023ee1) list_single_pane_g

0x36c5,	// (0x00017fde) list_single_pane_t1_ParamLimits

0x36c5,	// (0x00017fde) list_single_pane_t1

0x0794,	// (0x000150ad) list_single_number_pane_g1_ParamLimits

0x0794,	// (0x000150ad) list_single_number_pane_g1

0x16a2,	// (0x00015fbb) list_single_number_pane_g2_ParamLimits

0x16a2,	// (0x00015fbb) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00023ee1) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00023ee1) list_single_number_pane_g

0x16ae,	// (0x00015fc7) list_single_number_pane_t1_ParamLimits

0x16ae,	// (0x00015fc7) list_single_number_pane_t1

0xb084,	// (0x0001f99d) list_single_number_pane_t2_ParamLimits

0xb084,	// (0x0001f99d) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0002426e) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0002426e) list_single_number_pane_t

0x4c46,	// (0x0001955f) list_single_graphic_pane_g1_ParamLimits

0x4c46,	// (0x0001955f) list_single_graphic_pane_g1

0x0794,	// (0x000150ad) list_single_graphic_pane_g2_ParamLimits

0x0794,	// (0x000150ad) list_single_graphic_pane_g2

0x16a2,	// (0x00015fbb) list_single_graphic_pane_g3_ParamLimits

0x16a2,	// (0x00015fbb) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00023eda) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00023eda) list_single_graphic_pane_g

0x96f5,	// (0x0001e00e) list_single_graphic_pane_t1_ParamLimits

0x96f5,	// (0x0001e00e) list_single_graphic_pane_t1

0x0794,	// (0x000150ad) list_single_heading_pane_g1_ParamLimits

0x0794,	// (0x000150ad) list_single_heading_pane_g1

0x16a2,	// (0x00015fbb) list_single_heading_pane_g2_ParamLimits

0x16a2,	// (0x00015fbb) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023ee1) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023ee1) list_single_heading_pane_g

0x36e7,	// (0x00018000) list_single_heading_pane_t1_ParamLimits

0x36e7,	// (0x00018000) list_single_heading_pane_t1

0x970b,	// (0x0001e024) list_single_heading_pane_t2_ParamLimits

0x970b,	// (0x0001e024) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00023ee6) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00023ee6) list_single_heading_pane_t

0x0794,	// (0x000150ad) list_single_number_heading_pane_g1_ParamLimits

0x0794,	// (0x000150ad) list_single_number_heading_pane_g1

0x16a2,	// (0x00015fbb) list_single_number_heading_pane_g2_ParamLimits

0x16a2,	// (0x00015fbb) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023ee1) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023ee1) list_single_number_heading_pane_g

0x36e7,	// (0x00018000) list_single_number_heading_pane_t1_ParamLimits

0x36e7,	// (0x00018000) list_single_number_heading_pane_t1

0x971d,	// (0x0001e036) list_single_number_heading_pane_t2_ParamLimits

0x971d,	// (0x0001e036) list_single_number_heading_pane_t2

0x36a1,	// (0x00017fba) list_single_number_heading_pane_t3_ParamLimits

0x36a1,	// (0x00017fba) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00023eeb) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00023eeb) list_single_number_heading_pane_t

0x1696,	// (0x00015faf) list_single_graphic_heading_pane_g1_ParamLimits

0x1696,	// (0x00015faf) list_single_graphic_heading_pane_g1

0x972f,	// (0x0001e048) list_single_graphic_heading_pane_g4_ParamLimits

0x972f,	// (0x0001e048) list_single_graphic_heading_pane_g4

0x16a2,	// (0x00015fbb) list_single_graphic_heading_pane_g5_ParamLimits

0x16a2,	// (0x00015fbb) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00023ef2) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00023ef2) list_single_graphic_heading_pane_g

0x36e7,	// (0x00018000) list_single_graphic_heading_pane_t1_ParamLimits

0x36e7,	// (0x00018000) list_single_graphic_heading_pane_t1

0x9740,	// (0x0001e059) list_single_graphic_heading_pane_t2_ParamLimits

0x9740,	// (0x0001e059) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00023ef9) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00023ef9) list_single_graphic_heading_pane_t

0x36db,	// (0x00017ff4) list_single_large_graphic_pane_g1_ParamLimits

0x36db,	// (0x00017ff4) list_single_large_graphic_pane_g1

0x0794,	// (0x000150ad) list_single_large_graphic_pane_g2_ParamLimits

0x0794,	// (0x000150ad) list_single_large_graphic_pane_g2

0x16a2,	// (0x00015fbb) list_single_large_graphic_pane_g3_ParamLimits

0x16a2,	// (0x00015fbb) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00023efe) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00023efe) list_single_large_graphic_pane_g

0x1dde,	// (0x000166f7) wait_border_pane_g2_copy1

0x9752,	// (0x0001e06b) list_single_large_graphic_pane_g4_cp2

0x36e7,	// (0x00018000) list_single_large_graphic_pane_t1_ParamLimits

0x36e7,	// (0x00018000) list_single_large_graphic_pane_t1

0x975a,	// (0x0001e073) list_double_pane_g1_ParamLimits

0x975a,	// (0x0001e073) list_double_pane_g1

0x9766,	// (0x0001e07f) list_double_pane_g2_ParamLimits

0x9766,	// (0x0001e07f) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00023f05) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00023f05) list_double_pane_g

0x9772,	// (0x0001e08b) list_double_pane_t1_ParamLimits

0x9772,	// (0x0001e08b) list_double_pane_t1

0x9788,	// (0x0001e0a1) list_double_pane_t2_ParamLimits

0x9788,	// (0x0001e0a1) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00023f0a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00023f0a) list_double_pane_t

0x979a,	// (0x0001e0b3) list_double2_pane_g1_ParamLimits

0x979a,	// (0x0001e0b3) list_double2_pane_g1

0x97ab,	// (0x0001e0c4) list_double2_pane_g2_ParamLimits

0x97ab,	// (0x0001e0c4) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00023f0f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00023f0f) list_double2_pane_g

0x97b7,	// (0x0001e0d0) list_double2_pane_t1_ParamLimits

0x97b7,	// (0x0001e0d0) list_double2_pane_t1

0x97cd,	// (0x0001e0e6) list_double2_pane_t2_ParamLimits

0x97cd,	// (0x0001e0e6) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00023f14) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00023f14) list_double2_pane_t

0x975a,	// (0x0001e073) list_double_number_pane_g1_ParamLimits

0x975a,	// (0x0001e073) list_double_number_pane_g1

0x9766,	// (0x0001e07f) list_double_number_pane_g2_ParamLimits

0x9766,	// (0x0001e07f) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00023f05) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00023f05) list_double_number_pane_g

0x97df,	// (0x0001e0f8) list_double_number_pane_t1_ParamLimits

0x97df,	// (0x0001e0f8) list_double_number_pane_t1

0x97f1,	// (0x0001e10a) list_double_number_pane_t2_ParamLimits

0x97f1,	// (0x0001e10a) list_double_number_pane_t2

0x9807,	// (0x0001e120) list_double_number_pane_t3_ParamLimits

0x9807,	// (0x0001e120) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00023f19) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00023f19) list_double_number_pane_t

0xd8eb,	// (0x00022204) list_double_graphic_pane_g1_ParamLimits

0xd8eb,	// (0x00022204) list_double_graphic_pane_g1

0x9819,	// (0x0001e132) list_double_graphic_pane_g2_ParamLimits

0x9819,	// (0x0001e132) list_double_graphic_pane_g2

0x9828,	// (0x0001e141) list_double_graphic_pane_g3_ParamLimits

0x9828,	// (0x0001e141) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00023f20) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00023f20) list_double_graphic_pane_g

0x9840,	// (0x0001e159) list_double_graphic_pane_t1_ParamLimits

0x9840,	// (0x0001e159) list_double_graphic_pane_t1

0x9856,	// (0x0001e16f) list_double_graphic_pane_t2_ParamLimits

0x9856,	// (0x0001e16f) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00023f29) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00023f29) list_double_graphic_pane_t

0x9868,	// (0x0001e181) list_double2_graphic_pane_g1_ParamLimits

0x9868,	// (0x0001e181) list_double2_graphic_pane_g1

0x9874,	// (0x0001e18d) list_double2_graphic_pane_g2_ParamLimits

0x9874,	// (0x0001e18d) list_double2_graphic_pane_g2

0x97ab,	// (0x0001e0c4) list_double2_graphic_pane_g3_ParamLimits

0x97ab,	// (0x0001e0c4) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00023f2e) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00023f2e) list_double2_graphic_pane_g

0x9880,	// (0x0001e199) list_double2_graphic_pane_t1_ParamLimits

0x9880,	// (0x0001e199) list_double2_graphic_pane_t1

0x9896,	// (0x0001e1af) list_double2_graphic_pane_t2_ParamLimits

0x9896,	// (0x0001e1af) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00023f35) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00023f35) list_double2_graphic_pane_t

0x98a8,	// (0x0001e1c1) list_double_large_graphic_pane_g1_ParamLimits

0x98a8,	// (0x0001e1c1) list_double_large_graphic_pane_g1

0x98d3,	// (0x0001e1ec) list_double_large_graphic_pane_g2_ParamLimits

0x98d3,	// (0x0001e1ec) list_double_large_graphic_pane_g2

0x9766,	// (0x0001e07f) list_double_large_graphic_pane_g3_ParamLimits

0x9766,	// (0x0001e07f) list_double_large_graphic_pane_g3

0x98e4,	// (0x0001e1fd) list_double_large_graphic_pane_g4_ParamLimits

0x98e4,	// (0x0001e1fd) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00023f3a) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00023f3a) list_double_large_graphic_pane_g

0x98f6,	// (0x0001e20f) list_double_large_graphic_pane_t1_ParamLimits

0x98f6,	// (0x0001e20f) list_double_large_graphic_pane_t1

0x990f,	// (0x0001e228) list_double_large_graphic_pane_t2_ParamLimits

0x990f,	// (0x0001e228) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00023f45) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00023f45) list_double_large_graphic_pane_t

0x9921,	// (0x0001e23a) list_double2_large_graphic_pane_g1_ParamLimits

0x9921,	// (0x0001e23a) list_double2_large_graphic_pane_g1

0x979a,	// (0x0001e0b3) list_double2_large_graphic_pane_g2_ParamLimits

0x979a,	// (0x0001e0b3) list_double2_large_graphic_pane_g2

0x97ab,	// (0x0001e0c4) list_double2_large_graphic_pane_g3_ParamLimits

0x97ab,	// (0x0001e0c4) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00023f4a) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00023f4a) list_double2_large_graphic_pane_g

0x992d,	// (0x0001e246) list_double2_large_graphic_pane_t1_ParamLimits

0x992d,	// (0x0001e246) list_double2_large_graphic_pane_t1

0x9943,	// (0x0001e25c) list_double2_large_graphic_pane_t2_ParamLimits

0x9943,	// (0x0001e25c) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00023f51) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00023f51) list_double2_large_graphic_pane_t

0x9955,	// (0x0001e26e) list_double_heading_pane_g1_ParamLimits

0x9955,	// (0x0001e26e) list_double_heading_pane_g1

0x9966,	// (0x0001e27f) list_double_heading_pane_g2_ParamLimits

0x9966,	// (0x0001e27f) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00023f56) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00023f56) list_double_heading_pane_g

0x9972,	// (0x0001e28b) list_double_heading_pane_t1_ParamLimits

0x9972,	// (0x0001e28b) list_double_heading_pane_t1

0x9988,	// (0x0001e2a1) list_double_heading_pane_t2_ParamLimits

0x9988,	// (0x0001e2a1) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00023f5b) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00023f5b) list_double_heading_pane_t

0x999a,	// (0x0001e2b3) list_double_graphic_heading_pane_g1_ParamLimits

0x999a,	// (0x0001e2b3) list_double_graphic_heading_pane_g1

0x9955,	// (0x0001e26e) list_double_graphic_heading_pane_g2_ParamLimits

0x9955,	// (0x0001e26e) list_double_graphic_heading_pane_g2

0x9966,	// (0x0001e27f) list_double_graphic_heading_pane_g3_ParamLimits

0x9966,	// (0x0001e27f) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00023f60) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00023f60) list_double_graphic_heading_pane_g

0x99a6,	// (0x0001e2bf) list_double_graphic_heading_pane_t1_ParamLimits

0x99a6,	// (0x0001e2bf) list_double_graphic_heading_pane_t1

0x99bc,	// (0x0001e2d5) list_double_graphic_heading_pane_t2_ParamLimits

0x99bc,	// (0x0001e2d5) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00023f67) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00023f67) list_double_graphic_heading_pane_t

0x98d3,	// (0x0001e1ec) list_double_time_pane_g1_ParamLimits

0x98d3,	// (0x0001e1ec) list_double_time_pane_g1

0x9766,	// (0x0001e07f) list_double_time_pane_g2_ParamLimits

0x9766,	// (0x0001e07f) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00023f6c) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00023f6c) list_double_time_pane_g

0x99ce,	// (0x0001e2e7) list_double_time_pane_t1_ParamLimits

0x99ce,	// (0x0001e2e7) list_double_time_pane_t1

0x99e4,	// (0x0001e2fd) list_double_time_pane_t2_ParamLimits

0x99e4,	// (0x0001e2fd) list_double_time_pane_t2

0x99f6,	// (0x0001e30f) list_double_time_pane_t3_ParamLimits

0x99f6,	// (0x0001e30f) list_double_time_pane_t3

0x9a08,	// (0x0001e321) list_double_time_pane_t4_ParamLimits

0x9a08,	// (0x0001e321) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00023f71) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00023f71) list_double_time_pane_t

0x9874,	// (0x0001e18d) list_setting_pane_g1_ParamLimits

0x9874,	// (0x0001e18d) list_setting_pane_g1

0x97ab,	// (0x0001e0c4) list_setting_pane_g2_ParamLimits

0x97ab,	// (0x0001e0c4) list_setting_pane_g2

0x0001,

0xf661,	// (0x00023f7a) list_setting_pane_g_ParamLimits

0xf661,	// (0x00023f7a) list_setting_pane_g

0x9a1a,	// (0x0001e333) list_setting_pane_t1_ParamLimits

0x9a1a,	// (0x0001e333) list_setting_pane_t1

0x9a31,	// (0x0001e34a) list_setting_pane_t2_ParamLimits

0x9a31,	// (0x0001e34a) list_setting_pane_t2

0x0002,

0xf666,	// (0x00023f7f) list_setting_pane_t_ParamLimits

0xf666,	// (0x00023f7f) list_setting_pane_t

0x9a70,	// (0x0001e389) set_value_pane_cp_ParamLimits

0x9a70,	// (0x0001e389) set_value_pane_cp

0x9874,	// (0x0001e18d) list_setting_number_pane_g1_ParamLimits

0x9874,	// (0x0001e18d) list_setting_number_pane_g1

0x97ab,	// (0x0001e0c4) list_setting_number_pane_g2_ParamLimits

0x97ab,	// (0x0001e0c4) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00023f7a) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00023f7a) list_setting_number_pane_g

0x9a7e,	// (0x0001e397) list_setting_number_pane_t1_ParamLimits

0x9a7e,	// (0x0001e397) list_setting_number_pane_t1

0x9a92,	// (0x0001e3ab) list_setting_number_pane_t2_ParamLimits

0x9a92,	// (0x0001e3ab) list_setting_number_pane_t2

0x9aa9,	// (0x0001e3c2) list_setting_number_pane_t3_ParamLimits

0x9aa9,	// (0x0001e3c2) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00023f86) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00023f86) list_setting_number_pane_t

0x9a70,	// (0x0001e389) set_value_pane_ParamLimits

0x9a70,	// (0x0001e389) set_value_pane

0xd90c,	// (0x00022225) bg_set_opt_pane_ParamLimits

0xd90c,	// (0x00022225) bg_set_opt_pane

0xd92d,	// (0x00022246) set_value_pane_t1

0xd93b,	// (0x00022254) slider_set_pane_cp3

0xd944,	// (0x0002225d) volume_small_pane_cp

0xd94d,	// (0x00022266) list_form_gen_pane

0xd956,	// (0x0002226f) scroll_pane_cp8

0x9aec,	// (0x0001e405) form_field_data_pane_ParamLimits

0x9aec,	// (0x0001e405) form_field_data_pane

0x9b07,	// (0x0001e420) form_field_data_wide_pane_ParamLimits

0x9b07,	// (0x0001e420) form_field_data_wide_pane

0x9b2b,	// (0x0001e444) form_field_popup_pane_ParamLimits

0x9b2b,	// (0x0001e444) form_field_popup_pane

0xd977,	// (0x00022290) form_field_popup_wide_pane_ParamLimits

0xd977,	// (0x00022290) form_field_popup_wide_pane

0xd998,	// (0x000222b1) form_field_slider_pane_ParamLimits

0xd998,	// (0x000222b1) form_field_slider_pane

0xd9ab,	// (0x000222c4) form_field_slider_wide_pane_ParamLimits

0xd9ab,	// (0x000222c4) form_field_slider_wide_pane

0xd9be,	// (0x000222d7) data_form_pane

0x9b57,	// (0x0001e470) form_field_data_pane_t1

0xd9ca,	// (0x000222e3) input_focus_pane

0xd9d8,	// (0x000222f1) data_form_wide_pane

0xda15,	// (0x0002232e) form_field_data_wide_pane_t1

0xbd27,	// (0x00020640) input_focus_pane_cp6

0x9b71,	// (0x0001e48a) form_field_popup_pane_t1

0xd9ca,	// (0x000222e3) input_focus_pane_cp7

0xda37,	// (0x00022350) list_form_pane

0xda4b,	// (0x00022364) form_field_popup_wide_pane_t1

0xd9ca,	// (0x000222e3) input_focus_pane_cp8

0xda60,	// (0x00022379) list_form_wide_pane

0x9b93,	// (0x0001e4ac) form_field_slider_pane_t1_ParamLimits

0x9b93,	// (0x0001e4ac) form_field_slider_pane_t1

0x9bab,	// (0x0001e4c4) form_field_slider_pane_t2_ParamLimits

0x9bab,	// (0x0001e4c4) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00023f96) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00023f96) form_field_slider_pane_t

0xb96f,	// (0x00020288) input_focus_pane_cp9_ParamLimits

0xb96f,	// (0x00020288) input_focus_pane_cp9

0x9bc0,	// (0x0001e4d9) slider_cont_pane_ParamLimits

0x9bc0,	// (0x0001e4d9) slider_cont_pane

0xda6f,	// (0x00022388) form_field_slider_wide_pane_t1_ParamLimits

0xda6f,	// (0x00022388) form_field_slider_wide_pane_t1

0xda81,	// (0x0002239a) form_field_slider_wide_pane_t2_ParamLimits

0xda81,	// (0x0002239a) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00023f9b) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00023f9b) form_field_slider_wide_pane_t

0xb96f,	// (0x00020288) input_focus_pane_cp10_ParamLimits

0xb96f,	// (0x00020288) input_focus_pane_cp10

0x9bd4,	// (0x0001e4ed) slider_cont_pane_cp1_ParamLimits

0x9bd4,	// (0x0001e4ed) slider_cont_pane_cp1

0x9be8,	// (0x0001e501) slider_form_pane_cp

0xda93,	// (0x000223ac) input_focus_pane_g1

0xda9b,	// (0x000223b4) input_focus_pane_g2

0xdaa3,	// (0x000223bc) input_focus_pane_g3

0xdaab,	// (0x000223c4) input_focus_pane_g4

0xdab3,	// (0x000223cc) input_focus_pane_g5

0xdabb,	// (0x000223d4) input_focus_pane_g6

0xdac3,	// (0x000223dc) input_focus_pane_g7

0xdacb,	// (0x000223e4) input_focus_pane_g8

0xdad3,	// (0x000223ec) input_focus_pane_g9

0xb90b,	// (0x00020224) input_focus_pane_g10

0x0009,

0xf687,	// (0x00023fa0) input_focus_pane_g

0x1de7,	// (0x00016700) wait_border_pane_g3_copy1

0x9bf0,	// (0x0001e509) data_form_pane_t1

0xb90b,	// (0x00020224) wait_anim_pane_g1_copy1

0xb23b,	// (0x0001fb54) data_form_wide_pane_t1

0xdadb,	// (0x000223f4) list_form_graphic_pane_cp_ParamLimits

0xdadb,	// (0x000223f4) list_form_graphic_pane_cp

0x2d6e,	// (0x00017687) slider_form_pane_g1

0x2d77,	// (0x00017690) slider_form_pane_g2

0x0006,

0xf985,	// (0x0002429e) slider_form_pane_g

0x9c0c,	// (0x0001e525) list_form_graphic_pane_ParamLimits

0x9c0c,	// (0x0001e525) list_form_graphic_pane

0xdaed,	// (0x00022406) list_form_graphic_pane_g1

0xdaf5,	// (0x0002240e) list_form_graphic_pane_t1_ParamLimits

0xdaf5,	// (0x0002240e) list_form_graphic_pane_t1

0xb97d,	// (0x00020296) list_highlight_pane_cp5_ParamLimits

0xb97d,	// (0x00020296) list_highlight_pane_cp5

0x9c1d,	// (0x0001e536) find_pane_g1

0xdb0a,	// (0x00022423) input_find_pane

0x9c26,	// (0x0001e53f) input_find_pane_g1_ParamLimits

0x9c26,	// (0x0001e53f) input_find_pane_g1

0x9c32,	// (0x0001e54b) input_find_pane_t1_ParamLimits

0x9c32,	// (0x0001e54b) input_find_pane_t1

0x9c47,	// (0x0001e560) input_find_pane_t2_ParamLimits

0x9c47,	// (0x0001e560) input_find_pane_t2

0x0001,

0xf69c,	// (0x00023fb5) input_find_pane_t_ParamLimits

0xf69c,	// (0x00023fb5) input_find_pane_t

0xdb13,	// (0x0002242c) input_focus_pane_cp5_ParamLimits

0xdb13,	// (0x0002242c) input_focus_pane_cp5

0xdb21,	// (0x0002243a) bg_popup_window_pane_cp2_ParamLimits

0xdb21,	// (0x0002243a) bg_popup_window_pane_cp2

0xdb2e,	// (0x00022447) listscroll_menu_pane_ParamLimits

0xdb2e,	// (0x00022447) listscroll_menu_pane

0x9c68,	// (0x0001e581) popup_submenu_window_ParamLimits

0x9c68,	// (0x0001e581) popup_submenu_window

0xdb3a,	// (0x00022453) find_popup_pane_g1

0xdb42,	// (0x0002245b) input_popup_find_pane_cp

0xdb13,	// (0x0002242c) input_focus_pane_cp4_ParamLimits

0xdb13,	// (0x0002242c) input_focus_pane_cp4

0xdb4c,	// (0x00022465) input_popup_find_pane_t1_ParamLimits

0xdb4c,	// (0x00022465) input_popup_find_pane_t1

0xb915,	// (0x0002022e) bg_popup_sub_pane_cp

0xdb7a,	// (0x00022493) listscroll_popup_sub_pane

0xdb82,	// (0x0002249b) list_submenu_pane_ParamLimits

0xdb82,	// (0x0002249b) list_submenu_pane

0xdb93,	// (0x000224ac) scroll_pane_cp4

0xdb9b,	// (0x000224b4) list_single_popup_submenu_pane_ParamLimits

0xdb9b,	// (0x000224b4) list_single_popup_submenu_pane

0xdbb0,	// (0x000224c9) list_single_popup_submenu_pane_g1

0xdbb8,	// (0x000224d1) list_single_popup_submenu_pane_t1_ParamLimits

0xdbb8,	// (0x000224d1) list_single_popup_submenu_pane_t1

0xb96f,	// (0x00020288) bg_active_tab_pane_cp1_ParamLimits

0xb96f,	// (0x00020288) bg_active_tab_pane_cp1

0x9ca6,	// (0x0001e5bf) tabs_2_active_pane_g1

0x9cae,	// (0x0001e5c7) tabs_2_active_pane_t1

0xb96f,	// (0x00020288) bg_passive_tab_pane_cp1_ParamLimits

0xb96f,	// (0x00020288) bg_passive_tab_pane_cp1

0x9ca6,	// (0x0001e5bf) tabs_2_passive_pane_g1

0x9cae,	// (0x0001e5c7) tabs_2_passive_pane_t1

0xb97d,	// (0x00020296) bg_active_tab_pane_cp4

0x9cc0,	// (0x0001e5d9) tabs_2_long_active_pane_t1

0x0ba9,	// (0x000154c2) bg_passive_tab_pane_cp4

0xe855,	// (0x0002316e) list_single_midp_graphic_pane_g4_ParamLimits

0xb97d,	// (0x00020296) bg_active_tab_pane_cp5

0x9cd3,	// (0x0001e5ec) tabs_3_long_active_pane_t1

0x0ba9,	// (0x000154c2) bg_passive_tab_pane_cp5

0xe855,	// (0x0002316e) list_single_midp_graphic_pane_g4

0xb97d,	// (0x00020296) bg_popup_window_pane_cp13_ParamLimits

0xb97d,	// (0x00020296) bg_popup_window_pane_cp13

0xdbd6,	// (0x000224ef) listscroll_popup_fast_pane_ParamLimits

0xdbd6,	// (0x000224ef) listscroll_popup_fast_pane

0xdbe5,	// (0x000224fe) grid_popup_fast_pane_ParamLimits

0xdbe5,	// (0x000224fe) grid_popup_fast_pane

0xdbf7,	// (0x00022510) scroll_pane_cp9_ParamLimits

0xdbf7,	// (0x00022510) scroll_pane_cp9

0x4cc0,	// (0x000195d9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4cc0,	// (0x000195d9) list_single_graphic_hl_pane_t1_cp2

0xdc1b,	// (0x00022534) input_focus_pane_cp20_ParamLimits

0xdc1b,	// (0x00022534) input_focus_pane_cp20

0xdc29,	// (0x00022542) query_popup_data_pane_t1_ParamLimits

0xdc29,	// (0x00022542) query_popup_data_pane_t1

0xdc3c,	// (0x00022555) query_popup_data_pane_t2_ParamLimits

0xdc3c,	// (0x00022555) query_popup_data_pane_t2

0xdc82,	// (0x0002259b) query_popup_data_pane_t3_ParamLimits

0xdc82,	// (0x0002259b) query_popup_data_pane_t3

0xdcc3,	// (0x000225dc) query_popup_data_pane_t4_ParamLimits

0xdcc3,	// (0x000225dc) query_popup_data_pane_t4

0xdcff,	// (0x00022618) query_popup_data_pane_t5_ParamLimits

0xdcff,	// (0x00022618) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00023fba) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00023fba) query_popup_data_pane_t

0xda93,	// (0x000223ac) bg_set_opt_pane_g1

0xda9b,	// (0x000223b4) bg_set_opt_pane_g2

0xdaa3,	// (0x000223bc) bg_set_opt_pane_g3

0xdaab,	// (0x000223c4) bg_set_opt_pane_g4

0xdab3,	// (0x000223cc) bg_set_opt_pane_g5

0xdabb,	// (0x000223d4) bg_set_opt_pane_g6

0xdac3,	// (0x000223dc) bg_set_opt_pane_g7

0xdacb,	// (0x000223e4) bg_set_opt_pane_g8

0xdad3,	// (0x000223ec) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00023fc5) bg_set_opt_pane_g

0xe5a1,	// (0x00022eba) control_top_pane_stacon_ParamLimits

0xe5a1,	// (0x00022eba) control_top_pane_stacon

0xe5f4,	// (0x00022f0d) signal_pane_stacon_ParamLimits

0xe5f4,	// (0x00022f0d) signal_pane_stacon

0xe257,	// (0x00022b70) stacon_top_pane_g1_ParamLimits

0xe257,	// (0x00022b70) stacon_top_pane_g1

0xe619,	// (0x00022f32) title_pane_stacon_ParamLimits

0xe619,	// (0x00022f32) title_pane_stacon

0xe643,	// (0x00022f5c) uni_indicator_pane_stacon_ParamLimits

0xe643,	// (0x00022f5c) uni_indicator_pane_stacon

0xe65b,	// (0x00022f74) battery_pane_stacon_ParamLimits

0xe65b,	// (0x00022f74) battery_pane_stacon

0xe69f,	// (0x00022fb8) control_bottom_pane_stacon_ParamLimits

0xe69f,	// (0x00022fb8) control_bottom_pane_stacon

0xe6c2,	// (0x00022fdb) navi_pane_stacon_ParamLimits

0xe6c2,	// (0x00022fdb) navi_pane_stacon

0xe279,	// (0x00022b92) stacon_bottom_pane_g1_ParamLimits

0xe279,	// (0x00022b92) stacon_bottom_pane_g1

0xdd36,	// (0x0002264f) aid_levels_signal_lsc_ParamLimits

0xdd36,	// (0x0002264f) aid_levels_signal_lsc

0xdd4d,	// (0x00022666) signal_pane_stacon_g1_ParamLimits

0xdd4d,	// (0x00022666) signal_pane_stacon_g1

0xdd61,	// (0x0002267a) signal_pane_stacon_g2_ParamLimits

0xdd61,	// (0x0002267a) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00023fd8) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00023fd8) signal_pane_stacon_g

0xdda3,	// (0x000226bc) title_pane_stacon_t1_ParamLimits

0xdda3,	// (0x000226bc) title_pane_stacon_t1

0xddc8,	// (0x000226e1) uni_indicator_pane_stacon_g1

0xddd2,	// (0x000226eb) uni_indicator_pane_stacon_g2

0xdddc,	// (0x000226f5) uni_indicator_pane_stacon_g3

0xdde6,	// (0x000226ff) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00023fe4) uni_indicator_pane_stacon_g

0xddf0,	// (0x00022709) control_top_pane_stacon_g1

0xddf8,	// (0x00022711) control_top_pane_stacon_t1_ParamLimits

0xddf8,	// (0x00022711) control_top_pane_stacon_t1

0xde2f,	// (0x00022748) aid_levels_battery_lsc_ParamLimits

0xde2f,	// (0x00022748) aid_levels_battery_lsc

0xde47,	// (0x00022760) battery_pane_stacon_g1_ParamLimits

0xde47,	// (0x00022760) battery_pane_stacon_g1

0xde5a,	// (0x00022773) battery_pane_stacon_g2_ParamLimits

0xde5a,	// (0x00022773) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00023fed) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00023fed) battery_pane_stacon_g

0xde98,	// (0x000227b1) navi_icon_pane_stacon

0xe448,	// (0x00022d61) navi_navi_pane_stacon

0xde98,	// (0x000227b1) navi_text_pane_stacon

0xddf0,	// (0x00022709) control_bottom_pane_stacon_g1

0xe45e,	// (0x00022d77) control_bottom_pane_stacon_t1_ParamLimits

0xe45e,	// (0x00022d77) control_bottom_pane_stacon_t1

0x9ce5,	// (0x0001e5fe) grid_app_pane_ParamLimits

0x9ce5,	// (0x0001e5fe) grid_app_pane

0x9d1d,	// (0x0001e636) scroll_pane_cp15_ParamLimits

0x9d1d,	// (0x0001e636) scroll_pane_cp15

0x9d32,	// (0x0001e64b) cell_app_pane_ParamLimits

0x9d32,	// (0x0001e64b) cell_app_pane

0x9d7f,	// (0x0001e698) cell_app_pane_g1_ParamLimits

0x9d7f,	// (0x0001e698) cell_app_pane_g1

0xdec6,	// (0x000227df) cell_app_pane_g2_ParamLimits

0xdec6,	// (0x000227df) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00023ff2) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00023ff2) cell_app_pane_g

0xded2,	// (0x000227eb) cell_app_pane_t1_ParamLimits

0xded2,	// (0x000227eb) cell_app_pane_t1

0xdee9,	// (0x00022802) grid_highlight_pane_ParamLimits

0xdee9,	// (0x00022802) grid_highlight_pane

0xda93,	// (0x000223ac) cell_highlight_pane_g1

0xda9b,	// (0x000223b4) cell_highlight_pane_g2

0xdaa3,	// (0x000223bc) cell_highlight_pane_g3

0xdaab,	// (0x000223c4) cell_highlight_pane_g4

0xdab3,	// (0x000223cc) cell_highlight_pane_g5

0xdabb,	// (0x000223d4) cell_highlight_pane_g6

0xdac3,	// (0x000223dc) cell_highlight_pane_g7

0xdacb,	// (0x000223e4) cell_highlight_pane_g8

0xdad3,	// (0x000223ec) cell_highlight_pane_g9

0xb90b,	// (0x00020224) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00023fa0) cell_highlight_pane_g

0xdefa,	// (0x00022813) bg_scroll_pane

0xe49f,	// (0x00022db8) scroll_handle_pane

0xdf41,	// (0x0002285a) scroll_bg_pane_g1

0xdf56,	// (0x0002286f) scroll_bg_pane_g2

0xdf6e,	// (0x00022887) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00023ff7) scroll_bg_pane_g

0xdf83,	// (0x0002289c) scroll_handle_focus_pane_ParamLimits

0xdf83,	// (0x0002289c) scroll_handle_focus_pane

0xdf41,	// (0x0002285a) scroll_handle_pane_g1

0xdf90,	// (0x000228a9) scroll_handle_pane_g2

0xdf6e,	// (0x00022887) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00023ffe) scroll_handle_pane_g

0xdb13,	// (0x0002242c) bg_popup_sub_pane_cp21_ParamLimits

0xdb13,	// (0x0002242c) bg_popup_sub_pane_cp21

0xdfa4,	// (0x000228bd) popup_fep_japan_predictive_window_t1_ParamLimits

0xdfa4,	// (0x000228bd) popup_fep_japan_predictive_window_t1

0xdfbb,	// (0x000228d4) popup_fep_japan_predictive_window_t2_ParamLimits

0xdfbb,	// (0x000228d4) popup_fep_japan_predictive_window_t2

0xdfee,	// (0x00022907) popup_fep_japan_predictive_window_t3_ParamLimits

0xdfee,	// (0x00022907) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00024005) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00024005) popup_fep_japan_predictive_window_t

0xb915,	// (0x0002022e) bg_popup_sub_pane_cp23

0xe025,	// (0x0002293e) listscroll_japin_cand_pane

0xe02d,	// (0x00022946) popup_fep_japan_candidate_window_t1

0xe03b,	// (0x00022954) candidate_pane_ParamLimits

0xe03b,	// (0x00022954) candidate_pane

0xe04d,	// (0x00022966) scroll_pane_cp30

0xe057,	// (0x00022970) list_single_popup_jap_candidate_pane_ParamLimits

0xe057,	// (0x00022970) list_single_popup_jap_candidate_pane

0xb915,	// (0x0002022e) list_highlight_pane_cp30

0xe06b,	// (0x00022984) list_single_popup_jap_candidate_pane_t1

0x9d9f,	// (0x0001e6b8) level_1_signal

0x9db1,	// (0x0001e6ca) level_2_signal

0x9dc4,	// (0x0001e6dd) level_3_signal

0x9dd7,	// (0x0001e6f0) level_4_signal

0x9dea,	// (0x0001e703) level_5_signal

0x9dfd,	// (0x0001e716) level_6_signal

0x9e10,	// (0x0001e729) level_7_signal

0x9d9f,	// (0x0001e6b8) level_1_battery

0x9db1,	// (0x0001e6ca) level_2_battery

0x9dc4,	// (0x0001e6dd) level_3_battery

0x9dd7,	// (0x0001e6f0) level_4_battery

0x9dea,	// (0x0001e703) level_5_battery

0x9dfd,	// (0x0001e716) level_6_battery

0x9e10,	// (0x0001e729) level_7_battery

0xe092,	// (0x000229ab) list_menu_pane_ParamLimits

0xe092,	// (0x000229ab) list_menu_pane

0xe0a8,	// (0x000229c1) scroll_pane_cp25_ParamLimits

0xe0a8,	// (0x000229c1) scroll_pane_cp25

0xe0c1,	// (0x000229da) list_double2_graphic_pane_cp2_ParamLimits

0xe0c1,	// (0x000229da) list_double2_graphic_pane_cp2

0xe0c1,	// (0x000229da) list_double2_large_graphic_pane_cp2_ParamLimits

0xe0c1,	// (0x000229da) list_double2_large_graphic_pane_cp2

0xe0c1,	// (0x000229da) list_double2_pane_cp2_ParamLimits

0xe0c1,	// (0x000229da) list_double2_pane_cp2

0xe0c1,	// (0x000229da) list_double_graphic_pane_cp2_ParamLimits

0xe0c1,	// (0x000229da) list_double_graphic_pane_cp2

0xe0c1,	// (0x000229da) list_double_large_graphic_pane_cp2_ParamLimits

0xe0c1,	// (0x000229da) list_double_large_graphic_pane_cp2

0xe0c1,	// (0x000229da) list_double_number_pane_cp2_ParamLimits

0xe0c1,	// (0x000229da) list_double_number_pane_cp2

0xe0c1,	// (0x000229da) list_double_pane_cp2_ParamLimits

0xe0c1,	// (0x000229da) list_double_pane_cp2

0x9e36,	// (0x0001e74f) list_single_2graphic_pane_cp2_ParamLimits

0x9e36,	// (0x0001e74f) list_single_2graphic_pane_cp2

0x9e36,	// (0x0001e74f) list_single_graphic_heading_pane_cp2_ParamLimits

0x9e36,	// (0x0001e74f) list_single_graphic_heading_pane_cp2

0x9e36,	// (0x0001e74f) list_single_graphic_pane_cp2_ParamLimits

0x9e36,	// (0x0001e74f) list_single_graphic_pane_cp2

0x9e36,	// (0x0001e74f) list_single_heading_pane_cp2_ParamLimits

0x9e36,	// (0x0001e74f) list_single_heading_pane_cp2

0xe0d1,	// (0x000229ea) list_single_large_graphic_pane_cp2_ParamLimits

0xe0d1,	// (0x000229ea) list_single_large_graphic_pane_cp2

0x9e36,	// (0x0001e74f) list_single_number_heading_pane_cp2_ParamLimits

0x9e36,	// (0x0001e74f) list_single_number_heading_pane_cp2

0x9e36,	// (0x0001e74f) list_single_number_pane_cp2_ParamLimits

0x9e36,	// (0x0001e74f) list_single_number_pane_cp2

0x9e36,	// (0x0001e74f) list_single_pane_cp2_ParamLimits

0x9e36,	// (0x0001e74f) list_single_pane_cp2

0xe0ea,	// (0x00022a03) bg_popup_sub_pane_cp22

0xe551,	// (0x00022e6a) popup_side_volume_key_window_g1

0xe57b,	// (0x00022e94) popup_side_volume_key_window_t1

0xe599,	// (0x00022eb2) volume_small_pane_cp1

0xb96f,	// (0x00020288) bg_popup_sub_pane_cp24_ParamLimits

0xb96f,	// (0x00020288) bg_popup_sub_pane_cp24

0xe100,	// (0x00022a19) fep_china_uni_candidate_pane_ParamLimits

0xe100,	// (0x00022a19) fep_china_uni_candidate_pane

0xe114,	// (0x00022a2d) fep_china_uni_entry_pane

0xe124,	// (0x00022a3d) popup_fep_china_uni_window_g1

0xe140,	// (0x00022a59) fep_china_uni_entry_pane_g1

0xe14a,	// (0x00022a63) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00024036) fep_china_uni_entry_pane_g

0xe154,	// (0x00022a6d) fep_entry_item_pane

0xe15e,	// (0x00022a77) fep_candidate_item_pane

0xe166,	// (0x00022a7f) fep_china_uni_candidate_pane_g1

0xe170,	// (0x00022a89) fep_china_uni_candidate_pane_g2

0xe178,	// (0x00022a91) fep_china_uni_candidate_pane_g3

0xe180,	// (0x00022a99) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002403b) fep_china_uni_candidate_pane_g

0xb90b,	// (0x00020224) fep_entry_item_pane_g1

0xe18a,	// (0x00022aa3) fep_entry_item_pane_t1_ParamLimits

0xe18a,	// (0x00022aa3) fep_entry_item_pane_t1

0xe1a0,	// (0x00022ab9) fep_candidate_item_pane_t1_ParamLimits

0xe1a0,	// (0x00022ab9) fep_candidate_item_pane_t1

0xe1b5,	// (0x00022ace) fep_candidate_item_pane_t2_ParamLimits

0xe1b5,	// (0x00022ace) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00024044) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00024044) fep_candidate_item_pane_t

0xb97d,	// (0x00020296) list_highlight_pane_cp31_ParamLimits

0xb97d,	// (0x00020296) list_highlight_pane_cp31

0xe1c7,	// (0x00022ae0) level_1_signal_lsc

0xe1d0,	// (0x00022ae9) level_2_signal_lsc

0xe1d9,	// (0x00022af2) level_3_signal_lsc

0xe1e2,	// (0x00022afb) level_4_signal_lsc

0xe1eb,	// (0x00022b04) level_5_signal_lsc

0xe1f4,	// (0x00022b0d) level_6_signal_lsc

0xe1fd,	// (0x00022b16) level_7_signal_lsc

0xe1fd,	// (0x00022b16) level_1_battery_lsc

0xe206,	// (0x00022b1f) level_2_battery_lsc

0xe20f,	// (0x00022b28) level_3_battery_lsc

0xe218,	// (0x00022b31) level_4_battery_lsc

0xe221,	// (0x00022b3a) level_5_battery_lsc

0xe22a,	// (0x00022b43) level_6_battery_lsc

0xe1c7,	// (0x00022ae0) level_7_battery_lsc

0xe233,	// (0x00022b4c) scroll_handle_focus_pane_g1

0xe23c,	// (0x00022b55) scroll_handle_focus_pane_g2

0xe245,	// (0x00022b5e) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00024049) scroll_handle_focus_pane_g

0x9ec8,	// (0x0001e7e1) list_single_2graphic_pane_g1_ParamLimits

0x9ec8,	// (0x0001e7e1) list_single_2graphic_pane_g1

0x972f,	// (0x0001e048) list_single_2graphic_pane_g2_ParamLimits

0x972f,	// (0x0001e048) list_single_2graphic_pane_g2

0x16a2,	// (0x00015fbb) list_single_2graphic_pane_g3_ParamLimits

0x16a2,	// (0x00015fbb) list_single_2graphic_pane_g3

0x9ed4,	// (0x0001e7ed) list_single_2graphic_pane_g4_ParamLimits

0x9ed4,	// (0x0001e7ed) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00024050) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00024050) list_single_2graphic_pane_g

0x9ee5,	// (0x0001e7fe) list_single_2graphic_pane_t1_ParamLimits

0x9ee5,	// (0x0001e7fe) list_single_2graphic_pane_t1

0x9f13,	// (0x0001e82c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9f13,	// (0x0001e82c) list_double2_graphic_large_graphic_pane_g1

0x979a,	// (0x0001e0b3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x979a,	// (0x0001e0b3) list_double2_graphic_large_graphic_pane_g2

0x97ab,	// (0x0001e0c4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x97ab,	// (0x0001e0c4) list_double2_graphic_large_graphic_pane_g3

0x9f25,	// (0x0001e83e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9f25,	// (0x0001e83e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00024059) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00024059) list_double2_graphic_large_graphic_pane_g

0x9f31,	// (0x0001e84a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9f31,	// (0x0001e84a) list_double2_graphic_large_graphic_pane_t1

0x9f47,	// (0x0001e860) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9f47,	// (0x0001e860) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00024062) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00024062) list_double2_graphic_large_graphic_pane_t

0xe2d7,	// (0x00022bf0) popup_fast_swap_window_ParamLimits

0xe2d7,	// (0x00022bf0) popup_fast_swap_window

0xe2f5,	// (0x00022c0e) popup_side_volume_key_window

0xe313,	// (0x00022c2c) stacon_top_pane

0xe31d,	// (0x00022c36) status_pane_ParamLimits

0xe31d,	// (0x00022c36) status_pane

0x9ff0,	// (0x0001e909) status_small_pane

0xb915,	// (0x0002022e) control_pane

0xb915,	// (0x0002022e) stacon_bottom_pane

0xd956,	// (0x0002226f) scroll_pane_cp121

0xd94d,	// (0x00022266) set_content_pane

0x9f59,	// (0x0001e872) bg_active_tab_pane_g1_cp1

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp1

0x9f62,	// (0x0001e87b) bg_active_tab_pane_g3_cp1

0x9f59,	// (0x0001e872) bg_passive_tab_pane_g1_cp1

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp1

0x9f62,	// (0x0001e87b) bg_passive_tab_pane_g3_cp1

0x9f6b,	// (0x0001e884) bg_active_tab_pane_g1_cp2

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp2

0x9f74,	// (0x0001e88d) bg_active_tab_pane_g3_cp2

0x9f6b,	// (0x0001e884) bg_passive_tab_pane_g1_cp2

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp2

0x9f74,	// (0x0001e88d) bg_passive_tab_pane_g3_cp2

0x9f7d,	// (0x0001e896) bg_active_tab_pane_g1_cp3

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp3

0x9f86,	// (0x0001e89f) bg_active_tab_pane_g3_cp3

0x9f7d,	// (0x0001e896) bg_passive_tab_pane_g1_cp3

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp3

0x9f86,	// (0x0001e89f) bg_passive_tab_pane_g3_cp3

0x9f8f,	// (0x0001e8a8) bg_active_tab_pane_g1_cp4

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp4

0x9f98,	// (0x0001e8b1) bg_active_tab_pane_g3_cp4

0x9f8f,	// (0x0001e8a8) bg_passive_tab_pane_g1_cp4

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp4

0x9f98,	// (0x0001e8b1) bg_passive_tab_pane_g3_cp4

0xe295,	// (0x00022bae) bg_active_tab_pane_g1_cp5

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp5

0xe29e,	// (0x00022bb7) bg_active_tab_pane_g3_cp5

0xe295,	// (0x00022bae) bg_passive_tab_pane_g1_cp5

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp5

0xe29e,	// (0x00022bb7) bg_passive_tab_pane_g3_cp5

0x3453,	// (0x00017d6c) list_set_graphic_pane_ParamLimits

0x3453,	// (0x00017d6c) list_set_graphic_pane

0xb915,	// (0x0002022e) bg_set_opt_pane_cp4

0x9fa1,	// (0x0001e8ba) list_set_graphic_pane_g1_ParamLimits

0x9fa1,	// (0x0001e8ba) list_set_graphic_pane_g1

0x9fad,	// (0x0001e8c6) list_set_graphic_pane_g2_ParamLimits

0x9fad,	// (0x0001e8c6) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00024067) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00024067) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x000243f1) volume_small_pane_cp_g

0x9fd1,	// (0x0001e8ea) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9fd1,	// (0x0001e8ea) list_double2_large_graphic_pane_g1_cp2

0x9fdf,	// (0x0001e8f8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9fdf,	// (0x0001e8f8) list_double2_large_graphic_pane_g2_cp2

0xe2a7,	// (0x00022bc0) list_double2_large_graphic_pane_g3_cp2

0xe2af,	// (0x00022bc8) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe2af,	// (0x00022bc8) list_double2_large_graphic_pane_t1_cp2

0xe2c5,	// (0x00022bde) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe2c5,	// (0x00022bde) list_double2_large_graphic_pane_t2_cp2

0xafc4,	// (0x0001f8dd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xafc4,	// (0x0001f8dd) list_double_large_graphic_pane_g1_cp2

0xafd7,	// (0x0001f8f0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xafd7,	// (0x0001f8f0) list_double_large_graphic_pane_g2_cp2

0xe3fe,	// (0x00022d17) list_double_large_graphic_pane_g3_cp2

0x28ef,	// (0x00017208) list_double_large_graphic_pane_g4_cp

0x28f7,	// (0x00017210) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x28f7,	// (0x00017210) list_double_large_graphic_pane_t1_cp2

0x290e,	// (0x00017227) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x290e,	// (0x00017227) list_double_large_graphic_pane_t2_cp2

0x9ffb,	// (0x0001e914) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9ffb,	// (0x0001e914) list_double2_graphic_pane_g1_cp2

0xa009,	// (0x0001e922) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa009,	// (0x0001e922) list_double2_graphic_pane_g2_cp2

0xa01a,	// (0x0001e933) list_double2_graphic_pane_g3_cp2

0xe32b,	// (0x00022c44) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe32b,	// (0x00022c44) list_double2_graphic_pane_t1_cp2

0xe341,	// (0x00022c5a) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe341,	// (0x00022c5a) list_double2_graphic_pane_t2_cp2

0xe353,	// (0x00022c6c) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe353,	// (0x00022c6c) list_single_number_heading_pane_g1_cp2

0xe35f,	// (0x00022c78) list_single_number_heading_pane_g2_cp2

0xe367,	// (0x00022c80) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe367,	// (0x00022c80) list_single_number_heading_pane_t1_cp2

0xa024,	// (0x0001e93d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa024,	// (0x0001e93d) list_single_number_heading_pane_t2_cp2

0xe37d,	// (0x00022c96) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe37d,	// (0x00022c96) list_single_number_heading_pane_t3_cp2

0xe353,	// (0x00022c6c) list_single_heading_pane_g1_cp2_ParamLimits

0xe353,	// (0x00022c6c) list_single_heading_pane_g1_cp2

0xe35f,	// (0x00022c78) list_single_heading_pane_g2_cp2

0xe367,	// (0x00022c80) list_single_heading_pane_t1_cp2_ParamLimits

0xe367,	// (0x00022c80) list_single_heading_pane_t1_cp2

0xafb0,	// (0x0001f8c9) list_single_heading_pane_t2_cp2_ParamLimits

0xafb0,	// (0x0001f8c9) list_single_heading_pane_t2_cp2

0x260d,	// (0x00016f26) list_double_graphic_pane_g1_cp2_ParamLimits

0x260d,	// (0x00016f26) list_double_graphic_pane_g1_cp2

0x2619,	// (0x00016f32) list_double_graphic_pane_g2_cp2_ParamLimits

0x2619,	// (0x00016f32) list_double_graphic_pane_g2_cp2

0x2628,	// (0x00016f41) list_double_graphic_pane_g3_cp2

0x2630,	// (0x00016f49) list_double_graphic_pane_t1_cp2_ParamLimits

0x2630,	// (0x00016f49) list_double_graphic_pane_t1_cp2

0x2646,	// (0x00016f5f) list_double_graphic_pane_t2_cp2_ParamLimits

0x2646,	// (0x00016f5f) list_double_graphic_pane_t2_cp2

0xe3f2,	// (0x00022d0b) list_double_number_pane_g1_cp2_ParamLimits

0xe3f2,	// (0x00022d0b) list_double_number_pane_g1_cp2

0xe3fe,	// (0x00022d17) list_double_number_pane_g2_cp2

0xaf4a,	// (0x0001f863) list_double_number_pane_t1_cp2_ParamLimits

0xaf4a,	// (0x0001f863) list_double_number_pane_t1_cp2

0x25e5,	// (0x00016efe) list_double_number_pane_t2_cp2_ParamLimits

0x25e5,	// (0x00016efe) list_double_number_pane_t2_cp2

0x25fb,	// (0x00016f14) list_double_number_pane_t3_cp2_ParamLimits

0x25fb,	// (0x00016f14) list_double_number_pane_t3_cp2

0xae98,	// (0x0001f7b1) list_single_graphic_pane_g1_cp2_ParamLimits

0xae98,	// (0x0001f7b1) list_single_graphic_pane_g1_cp2

0x075a,	// (0x00015073) list_single_graphic_pane_g2_cp2_ParamLimits

0x075a,	// (0x00015073) list_single_graphic_pane_g2_cp2

0x0766,	// (0x0001507f) list_single_graphic_pane_g3_cp2

0x2490,	// (0x00016da9) list_single_graphic_pane_t1_cp2_ParamLimits

0x2490,	// (0x00016da9) list_single_graphic_pane_t1_cp2

0x075a,	// (0x00015073) list_single_number_pane_g1_cp2_ParamLimits

0x075a,	// (0x00015073) list_single_number_pane_g1_cp2

0x0766,	// (0x0001507f) list_single_number_pane_g2_cp2

0x2490,	// (0x00016da9) list_single_number_pane_t1_cp2_ParamLimits

0x2490,	// (0x00016da9) list_single_number_pane_t1_cp2

0xae84,	// (0x0001f79d) list_single_number_pane_t2_cp2_ParamLimits

0xae84,	// (0x0001f79d) list_single_number_pane_t2_cp2

0x9fdf,	// (0x0001e8f8) list_double2_pane_g1_cp2_ParamLimits

0x9fdf,	// (0x0001e8f8) list_double2_pane_g1_cp2

0xe2a7,	// (0x00022bc0) list_double2_pane_g2_cp2

0xe3ca,	// (0x00022ce3) list_double2_pane_t1_cp2_ParamLimits

0xe3ca,	// (0x00022ce3) list_double2_pane_t1_cp2

0xe3e0,	// (0x00022cf9) list_double2_pane_t2_cp2_ParamLimits

0xe3e0,	// (0x00022cf9) list_double2_pane_t2_cp2

0xe3f2,	// (0x00022d0b) list_double_pane_g1_cp2_ParamLimits

0xe3f2,	// (0x00022d0b) list_double_pane_g1_cp2

0xe3fe,	// (0x00022d17) list_double_pane_g2_cp2

0xe406,	// (0x00022d1f) list_double_pane_t1_cp2_ParamLimits

0xe406,	// (0x00022d1f) list_double_pane_t1_cp2

0xe41c,	// (0x00022d35) list_double_pane_t2_cp2_ParamLimits

0xe41c,	// (0x00022d35) list_double_pane_t2_cp2

0x074a,	// (0x00015063) list_single_pane_cp2_g3

0x075a,	// (0x00015073) list_single_pane_g1_cp2_ParamLimits

0x075a,	// (0x00015073) list_single_pane_g1_cp2

0x0766,	// (0x0001507f) list_single_pane_g2_cp2

0x076e,	// (0x00015087) list_single_pane_t1_cp2_ParamLimits

0x076e,	// (0x00015087) list_single_pane_t1_cp2

0xa052,	// (0x0001e96b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa052,	// (0x0001e96b) list_single_large_graphic_pane_g1_cp2

0x0794,	// (0x000150ad) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0794,	// (0x000150ad) list_single_large_graphic_pane_g2_cp2

0x07a0,	// (0x000150b9) list_single_large_graphic_pane_g3_cp2

0x07a8,	// (0x000150c1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x07a8,	// (0x000150c1) list_single_large_graphic_pane_g4_cp1

0x07c2,	// (0x000150db) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x07c2,	// (0x000150db) list_single_large_graphic_pane_t1_cp2

0x245a,	// (0x00016d73) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x245a,	// (0x00016d73) list_single_graphic_heading_pane_g1_cp2

0xae5f,	// (0x0001f778) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xae5f,	// (0x0001f778) list_single_graphic_heading_pane_g4_cp2

0x0766,	// (0x0001507f) list_single_graphic_heading_pane_g5_cp2

0x2466,	// (0x00016d7f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2466,	// (0x00016d7f) list_single_graphic_heading_pane_t1_cp2

0xae70,	// (0x0001f789) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xae70,	// (0x0001f789) list_single_graphic_heading_pane_t2_cp2

0x241b,	// (0x00016d34) list_single_2graphic_pane_g1_cp2_ParamLimits

0x241b,	// (0x00016d34) list_single_2graphic_pane_g1_cp2

0xae5f,	// (0x0001f778) list_single_2graphic_pane_g2_cp2_ParamLimits

0xae5f,	// (0x0001f778) list_single_2graphic_pane_g2_cp2

0x0766,	// (0x0001507f) list_single_2graphic_pane_g3_cp2

0x2438,	// (0x00016d51) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2438,	// (0x00016d51) list_single_2graphic_pane_g4_cp2

0x2444,	// (0x00016d5d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2444,	// (0x00016d5d) list_single_2graphic_pane_t1_cp2

0xb90b,	// (0x00020224) list_highlight_pane_g10_cp1

0x1ff3,	// (0x0001690c) list_highlight_pane_g1_cp1

0x1ffb,	// (0x00016914) list_highlight_pane_g2_cp1

0x2003,	// (0x0001691c) list_highlight_pane_g3_cp1

0x200b,	// (0x00016924) list_highlight_pane_g4_cp1

0x2013,	// (0x0001692c) list_highlight_pane_g5_cp1

0x201b,	// (0x00016934) list_highlight_pane_g6_cp1

0x2023,	// (0x0001693c) list_highlight_pane_g7_cp1

0x202b,	// (0x00016944) list_highlight_pane_g8_cp1

0x2033,	// (0x0001694c) list_highlight_pane_g9_cp1

0xae25,	// (0x0001f73e) form_field_slider_pane_t3

0xae33,	// (0x0001f74c) form_field_slider_pane_t4

0x1f2f,	// (0x00016848) slider_form_pane_ParamLimits

0x1f2f,	// (0x00016848) slider_form_pane

0xb915,	// (0x0002022e) control_abbreviations

0xb915,	// (0x0002022e) control_conventions

0xb915,	// (0x0002022e) control_definitions

0xb915,	// (0x0002022e) format_table_attribute

0x271b,	// (0x00017034) bg_popup_preview_window_pane_g9

0xb915,	// (0x0002022e) format_table_data2

0xb915,	// (0x0002022e) format_table_data3

0xb915,	// (0x0002022e) format_table_data_example

0x0008,

0xb915,	// (0x0002022e) intro_purpose

0xf8e5,	// (0x000241fe) bg_popup_preview_window_pane_g

0xb915,	// (0x0002022e) texts_category

0xb915,	// (0x0002022e) texts_graphics

0x07d8,	// (0x000150f1) text_digital

0x07e7,	// (0x00015100) text_primary

0x07f6,	// (0x0001510f) text_primary_small

0x0805,	// (0x0001511e) text_secondary

0x0814,	// (0x0001512d) text_title

0x2f4c,	// (0x00017865) bg_passive_tab_pane_g1_cp3_srt

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp3_srt

0x2f55,	// (0x0001786e) bg_passive_tab_pane_g3_cp3_srt

0xb96f,	// (0x00020288) bg_active_tab_pane_cp3_srt_ParamLimits

0xb96f,	// (0x00020288) bg_active_tab_pane_cp3_srt

0x2f5e,	// (0x00017877) tabs_4_active_pane_srt_g1

0xb2ff,	// (0x0001fc18) tabs_4_active_pane_srt_t1_ParamLimits

0xb2ff,	// (0x0001fc18) tabs_4_active_pane_srt_t1

0x2f4c,	// (0x00017865) bg_active_tab_pane_g1_cp3_copy1

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp3_copy1

0x2f55,	// (0x0001786e) bg_active_tab_pane_g3_cp3_copy1

0xb97d,	// (0x00020296) tabs_2_long_active_pane_srt_ParamLimits

0xb97d,	// (0x00020296) tabs_2_long_active_pane_srt

0xb97d,	// (0x00020296) tabs_2_long_passive_pane_srt_ParamLimits

0xb97d,	// (0x00020296) tabs_2_long_passive_pane_srt

0x0ba9,	// (0x000154c2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0ba9,	// (0x000154c2) bg_passive_tab_pane_cp4_srt

0x2b7f,	// (0x00017498) bg_passive_tab_pane_g1_cp4_srt

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp4_srt

0x2b88,	// (0x000174a1) bg_passive_tab_pane_g3_cp4_srt

0xb97d,	// (0x00020296) bg_active_tab_pane_cp4_srt_ParamLimits

0xb97d,	// (0x00020296) bg_active_tab_pane_cp4_srt

0xb0ac,	// (0x0001f9c5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0ac,	// (0x0001f9c5) tabs_2_long_active_pane_srt_t1

0x2b7f,	// (0x00017498) bg_active_tab_pane_g1_cp4_srt

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp4_srt

0x2b88,	// (0x000174a1) bg_active_tab_pane_g3_cp4_srt

0xb96f,	// (0x00020288) tabs_3_long_active_pane_srt_ParamLimits

0xb96f,	// (0x00020288) tabs_3_long_active_pane_srt

0xb96f,	// (0x00020288) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb96f,	// (0x00020288) tabs_3_long_passive_pane_cp_srt

0xb96f,	// (0x00020288) tabs_3_long_passive_pane_srt_ParamLimits

0xb96f,	// (0x00020288) tabs_3_long_passive_pane_srt

0x0ba9,	// (0x000154c2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0ba9,	// (0x000154c2) bg_passive_tab_pane_cp5_srt

0xe295,	// (0x00022bae) bg_passive_tab_pane_g1_cp5_srt

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp5_srt

0xe29e,	// (0x00022bb7) bg_passive_tab_pane_g3_cp5_srt

0xb97d,	// (0x00020296) bg_active_tab_pane_cp5_srt_ParamLimits

0xb97d,	// (0x00020296) bg_active_tab_pane_cp5_srt

0xb096,	// (0x0001f9af) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb096,	// (0x0001f9af) tabs_3_long_active_pane_srt_t1

0xe295,	// (0x00022bae) bg_active_tab_pane_g1_cp5_srt

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp5_srt

0xe29e,	// (0x00022bb7) bg_active_tab_pane_g3_cp5_srt

0x2b5f,	// (0x00017478) navi_text_pane_srt_t1

0x2b57,	// (0x00017470) navi_icon_pane_srt_g1

0x09df,	// (0x000152f8) midp_editing_number_pane_srt

0x0823,	// (0x0001513c) midp_ticker_pane_srt

0x09e7,	// (0x00015300) midp_ticker_pane_srt_g1

0x09ef,	// (0x00015308) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00024086) midp_ticker_pane_srt_g

0x09f7,	// (0x00015310) midp_ticker_pane_srt_t1

0x2b48,	// (0x00017461) midp_editing_number_pane_t1_copy1

0x0ba9,	// (0x000154c2) listscroll_midp_pane

0x0ba9,	// (0x000154c2) midp_form_pane

0x088d,	// (0x000151a6) midp_info_popup_window_ParamLimits

0x088d,	// (0x000151a6) midp_info_popup_window

0xdb13,	// (0x0002242c) bg_popup_sub_pane_cp50_ParamLimits

0xdb13,	// (0x0002242c) bg_popup_sub_pane_cp50

0x1c29,	// (0x00016542) listscroll_midp_info_pane_ParamLimits

0x1c29,	// (0x00016542) listscroll_midp_info_pane

0x1c11,	// (0x0001652a) listscroll_form_midp_pane_ParamLimits

0x1c11,	// (0x0001652a) listscroll_form_midp_pane

0x1c1d,	// (0x00016536) scroll_bar_cp050

0xae19,	// (0x0001f732) list_midp_pane

0x3d03,	// (0x0001861c) signal_pane_g2_cp

0x1b2b,	// (0x00016444) listscroll_midp_info_pane_t1_ParamLimits

0x1b2b,	// (0x00016444) listscroll_midp_info_pane_t1

0x1b43,	// (0x0001645c) listscroll_midp_info_pane_t2_ParamLimits

0x1b43,	// (0x0001645c) listscroll_midp_info_pane_t2

0x1b81,	// (0x0001649a) listscroll_midp_info_pane_t3_ParamLimits

0x1b81,	// (0x0001649a) listscroll_midp_info_pane_t3

0x1bbb,	// (0x000164d4) listscroll_midp_info_pane_t4_ParamLimits

0x1bbb,	// (0x000164d4) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x00024139) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x00024139) listscroll_midp_info_pane_t

0xdb93,	// (0x000224ac) scroll_pane_cp21

0x1ac5,	// (0x000163de) form_midp_field_choice_group_pane

0x1ace,	// (0x000163e7) form_midp_field_text_pane

0x1b11,	// (0x0001642a) form_midp_field_time_pane

0x1b19,	// (0x00016432) form_midp_gauge_slider_pane

0x1b22,	// (0x0001643b) form_midp_gauge_wait_pane

0xb915,	// (0x0002022e) form_midp_image_pane

0xadfc,	// (0x0001f715) list_single_midp_pane_ParamLimits

0xadfc,	// (0x0001f715) list_single_midp_pane

0xadd4,	// (0x0001f6ed) form_midp_field_text_pane_t1

0x1846,	// (0x0001615f) input_focus_pane_cp050

0x1a94,	// (0x000163ad) list_midp_form_text_pane

0x1a38,	// (0x00016351) form_midp_field_choice_group_pane_t1

0x1a46,	// (0x0001635f) input_focus_pane_cp051

0x1a5a,	// (0x00016373) list_midp_choice_pane

0xb915,	// (0x0002022e) status_idle_pane

0x1a1c,	// (0x00016335) form_midp_field_time_pane_t1

0xb90b,	// (0x00020224) wait_anim_pane_g2_copy1

0x1a2a,	// (0x00016343) form_midp_field_time_pane_t2

0x0001,

0x093d,	// (0x00015256) aid_navinavi_width_2_pane

0xf81b,	// (0x00024134) form_midp_field_time_pane_t

0xb915,	// (0x0002022e) input_focus_pane_cp052

0xb915,	// (0x0002022e) bg_input_focus_pane_cp040

0x19dc,	// (0x000162f5) form_midp_gauge_slider_pane_t1

0x19ea,	// (0x00016303) form_midp_gauge_slider_pane_t2

0xadb8,	// (0x0001f6d1) form_midp_gauge_slider_pane_t3

0xadc6,	// (0x0001f6df) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0002412b) form_midp_gauge_slider_pane_t

0x1a14,	// (0x0001632d) form_midp_slider_pane

0xb97d,	// (0x00020296) bg_input_focus_pane_cp041_ParamLimits

0xb97d,	// (0x00020296) bg_input_focus_pane_cp041

0x19a9,	// (0x000162c2) form_midp_gauge_wait_pane_t1_ParamLimits

0x19a9,	// (0x000162c2) form_midp_gauge_wait_pane_t1

0x19bb,	// (0x000162d4) form_midp_gauge_wait_pane_t2_ParamLimits

0x19bb,	// (0x000162d4) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x00024126) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x00024126) form_midp_gauge_wait_pane_t

0x19cd,	// (0x000162e6) form_midp_wait_pane_ParamLimits

0x19cd,	// (0x000162e6) form_midp_wait_pane

0x1971,	// (0x0001628a) form_midp_image_pane_g1

0x197a,	// (0x00016293) form_midp_image_pane_t1

0x1989,	// (0x000162a2) form_midp_image_pane_t2

0x1998,	// (0x000162b1) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0002411f) form_midp_image_pane_t

0x1959,	// (0x00016272) list_single_midp_pane_g1

0x1962,	// (0x0001627b) list_single_midp_pane_t1

0xada1,	// (0x0001f6ba) list_midp_form_item_pane_ParamLimits

0xada1,	// (0x0001f6ba) list_midp_form_item_pane

0x08e5,	// (0x000151fe) list_midp_form_item_pane_t1

0x08f4,	// (0x0001520d) midp_ticker_pane_g1

0x0900,	// (0x00015219) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0002406c) midp_ticker_pane_g

0xa0f7,	// (0x0001ea10) midp_ticker_pane_t1

0xb257,	// (0x0001fb70) midp_editing_number_pane_t1

0x2dce,	// (0x000176e7) midp_editing_number_pane

0x2ddd,	// (0x000176f6) midp_ticker_pane

0x2b10,	// (0x00017429) ai_message_heading_pane

0xb915,	// (0x0002022e) bg_popup_window_pane_cp14

0x2b18,	// (0x00017431) listscroll_ai_message_pane

0x2a96,	// (0x000173af) ai_message_heading_pane_g1_ParamLimits

0x2a96,	// (0x000173af) ai_message_heading_pane_g1

0x2aa2,	// (0x000173bb) ai_message_heading_pane_g2_ParamLimits

0x2aa2,	// (0x000173bb) ai_message_heading_pane_g2

0x2ab0,	// (0x000173c9) ai_message_heading_pane_g3_ParamLimits

0x2ab0,	// (0x000173c9) ai_message_heading_pane_g3

0x2abc,	// (0x000173d5) ai_message_heading_pane_g4_ParamLimits

0x2abc,	// (0x000173d5) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x00024260) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x00024260) ai_message_heading_pane_g

0x2ac8,	// (0x000173e1) ai_message_heading_pane_t1_ParamLimits

0x2ac8,	// (0x000173e1) ai_message_heading_pane_t1

0x2ae2,	// (0x000173fb) ai_message_heading_pane_t2_ParamLimits

0x2ae2,	// (0x000173fb) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x00024269) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x00024269) ai_message_heading_pane_t

0x2af6,	// (0x0001740f) bg_popup_heading_pane_cp1_ParamLimits

0x2af6,	// (0x0001740f) bg_popup_heading_pane_cp1

0x2a84,	// (0x0001739d) list_ai_message_pane_ParamLimits

0x2a84,	// (0x0001739d) list_ai_message_pane

0xdb93,	// (0x000224ac) scroll_pane_cp10

0x2a20,	// (0x00017339) list_ai_message_pane_g1

0x2a28,	// (0x00017341) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0002423d) list_ai_message_pane_g

0x2a30,	// (0x00017349) list_ai_message_pane_t1_ParamLimits

0x2a30,	// (0x00017349) list_ai_message_pane_t1

0x2a45,	// (0x0001735e) list_ai_message_pane_t2_ParamLimits

0x2a45,	// (0x0001735e) list_ai_message_pane_t2

0x2a5a,	// (0x00017373) list_ai_message_pane_t3_ParamLimits

0x2a5a,	// (0x00017373) list_ai_message_pane_t3

0x2a6f,	// (0x00017388) list_ai_message_pane_t4_ParamLimits

0x2a6f,	// (0x00017388) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x00024242) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x00024242) list_ai_message_pane_t

0xb06a,	// (0x0001f983) cell_ai_soft_ind_pane_ParamLimits

0xb06a,	// (0x0001f983) cell_ai_soft_ind_pane

0x091e,	// (0x00015237) cell_ai_soft_ind_pane_g1_ParamLimits

0x091e,	// (0x00015237) cell_ai_soft_ind_pane_g1

0xb915,	// (0x0002022e) grid_highlight_cp1

0x092b,	// (0x00015244) text_secondary_cp56_ParamLimits

0x092b,	// (0x00015244) text_secondary_cp56

0x29de,	// (0x000172f7) example_general_pane_ParamLimits

0x29de,	// (0x000172f7) example_general_pane

0x29ea,	// (0x00017303) example_parent_pane_g1_ParamLimits

0x29ea,	// (0x00017303) example_parent_pane_g1

0x29f6,	// (0x0001730f) example_parent_pane_t1_ParamLimits

0x29f6,	// (0x0001730f) example_parent_pane_t1

0xa626,	// (0x0001ef3f) popup_preview_text_window_ParamLimits

0xa626,	// (0x0001ef3f) popup_preview_text_window

0x0752,	// (0x0001506b) list_single_pane_cp2_g4

0xbb72,	// (0x0002048b) bg_popup_preview_window_pane_ParamLimits

0xbb72,	// (0x0002048b) bg_popup_preview_window_pane

0x2725,	// (0x0001703e) popup_preview_text_window_t1_ParamLimits

0x2725,	// (0x0001703e) popup_preview_text_window_t1

0x2743,	// (0x0001705c) popup_preview_text_window_t2_ParamLimits

0x2743,	// (0x0001705c) popup_preview_text_window_t2

0x278c,	// (0x000170a5) popup_preview_text_window_t3_ParamLimits

0x278c,	// (0x000170a5) popup_preview_text_window_t3

0x27d1,	// (0x000170ea) popup_preview_text_window_t4_ParamLimits

0x27d1,	// (0x000170ea) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x00024211) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x00024211) popup_preview_text_window_t

0x284f,	// (0x00017168) scroll_pane_cp11

0x1720,	// (0x00016039) bg_popup_preview_window_pane_g1

0x26d9,	// (0x00016ff2) bg_popup_preview_window_pane_g2

0x26e3,	// (0x00016ffc) bg_popup_preview_window_pane_g3

0x26ed,	// (0x00017006) bg_popup_preview_window_pane_g4

0x26f7,	// (0x00017010) bg_popup_preview_window_pane_g5

0x2701,	// (0x0001701a) bg_popup_preview_window_pane_g6

0x2709,	// (0x00017022) bg_popup_preview_window_pane_g7

0x2711,	// (0x0001702a) bg_popup_preview_window_pane_g8

0xd697,	// (0x00021fb0) aid_popup_width_pane

0xa596,	// (0x0001eeaf) popup_midp_note_alarm_window_ParamLimits

0xa596,	// (0x0001eeaf) popup_midp_note_alarm_window

0xd9be,	// (0x000222d7) data_form_pane_ParamLimits

0x9b4d,	// (0x0001e466) form_field_data_pane_g1

0x9b57,	// (0x0001e470) form_field_data_pane_t1_ParamLimits

0xd9ca,	// (0x000222e3) input_focus_pane_ParamLimits

0xd9d8,	// (0x000222f1) data_form_wide_pane_ParamLimits

0xd9e9,	// (0x00022302) form_field_data_wide_pane_g1

0xda15,	// (0x0002232e) form_field_data_wide_pane_t1_ParamLimits

0xbd27,	// (0x00020640) input_focus_pane_cp6_ParamLimits

0x9c98,	// (0x0001e5b1) input_popup_find_pane_g1_ParamLimits

0x9c98,	// (0x0001e5b1) input_popup_find_pane_g1

0xde6b,	// (0x00022784) aid_navi_side_left_pane

0xde80,	// (0x00022799) aid_navi_side_right_pane

0x20ee,	// (0x00016a07) bg_popup_window_pane_cp30_ParamLimits

0x20ee,	// (0x00016a07) bg_popup_window_pane_cp30

0x2168,	// (0x00016a81) popup_midp_note_alarm_window_g1_ParamLimits

0x2168,	// (0x00016a81) popup_midp_note_alarm_window_g1

0x2198,	// (0x00016ab1) popup_midp_note_alarm_window_t1_ParamLimits

0x2198,	// (0x00016ab1) popup_midp_note_alarm_window_t1

0x2239,	// (0x00016b52) popup_midp_note_alarm_window_t2_ParamLimits

0x2239,	// (0x00016b52) popup_midp_note_alarm_window_t2

0x22e7,	// (0x00016c00) popup_midp_note_alarm_window_t3_ParamLimits

0x22e7,	// (0x00016c00) popup_midp_note_alarm_window_t3

0x2319,	// (0x00016c32) popup_midp_note_alarm_window_t4_ParamLimits

0x2319,	// (0x00016c32) popup_midp_note_alarm_window_t4

0x233f,	// (0x00016c58) popup_midp_note_alarm_window_t5_ParamLimits

0x233f,	// (0x00016c58) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x000241ae) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x000241ae) popup_midp_note_alarm_window_t

0x23eb,	// (0x00016d04) wait_bar_pane_cp1_ParamLimits

0x23eb,	// (0x00016d04) wait_bar_pane_cp1

0xb915,	// (0x0002022e) wait_anim_pane_copy1

0xb915,	// (0x0002022e) wait_border_pane_copy1

0x1dd3,	// (0x000166ec) wait_border_pane_g1_copy1

0xda2f,	// (0x00022348) form_field_popup_pane_g1

0x9b71,	// (0x0001e48a) form_field_popup_pane_t1_ParamLimits

0xd9ca,	// (0x000222e3) input_focus_pane_cp7_ParamLimits

0xda37,	// (0x00022350) list_form_pane_ParamLimits

0xda43,	// (0x0002235c) form_field_popup_wide_pane_g1

0xda4b,	// (0x00022364) form_field_popup_wide_pane_t1_ParamLimits

0xd9ca,	// (0x000222e3) input_focus_pane_cp8_ParamLimits

0xda60,	// (0x00022379) list_form_wide_pane_ParamLimits

0x2fd9,	// (0x000178f2) aid_size_cell_graphic_pane

0x9bf0,	// (0x0001e509) data_form_pane_t1_ParamLimits

0xb23b,	// (0x0001fb54) data_form_wide_pane_t1_ParamLimits

0xaa2a,	// (0x0001f343) bg_status_flat_pane

0x9376,	// (0x0001dc8f) title_pane_t1_ParamLimits

0xb937,	// (0x00020250) title_pane_t2_ParamLimits

0xb95d,	// (0x00020276) title_pane_t3_ParamLimits

0xf557,	// (0x00023e70) title_pane_t_ParamLimits

0x9d9f,	// (0x0001e6b8) level_1_signal_ParamLimits

0x9db1,	// (0x0001e6ca) level_2_signal_ParamLimits

0x9dc4,	// (0x0001e6dd) level_3_signal_ParamLimits

0x9dd7,	// (0x0001e6f0) level_4_signal_ParamLimits

0x9dea,	// (0x0001e703) level_5_signal_ParamLimits

0x9dfd,	// (0x0001e716) level_6_signal_ParamLimits

0x9e10,	// (0x0001e729) level_7_signal_ParamLimits

0x9d9f,	// (0x0001e6b8) level_1_battery_ParamLimits

0x9db1,	// (0x0001e6ca) level_2_battery_ParamLimits

0x9dc4,	// (0x0001e6dd) level_3_battery_ParamLimits

0x9dd7,	// (0x0001e6f0) level_4_battery_ParamLimits

0x9dea,	// (0x0001e703) level_5_battery_ParamLimits

0x9dfd,	// (0x0001e716) level_6_battery_ParamLimits

0x9e10,	// (0x0001e729) level_7_battery_ParamLimits

0x1ff3,	// (0x0001690c) bg_status_flat_pane_g1

0x1ffb,	// (0x00016914) bg_status_flat_pane_g2

0x2003,	// (0x0001691c) bg_status_flat_pane_g3

0x200b,	// (0x00016924) bg_status_flat_pane_g4

0x2013,	// (0x0001692c) bg_status_flat_pane_g5

0x201b,	// (0x00016934) bg_status_flat_pane_g6

0x2023,	// (0x0001693c) bg_status_flat_pane_g7

0x940a,	// (0x0001dd23) tabs_3_active_pane_t1_ParamLimits

0x940a,	// (0x0001dd23) tabs_3_passive_pane_t1_ParamLimits

0x9424,	// (0x0001dd3d) tabs_4_active_pane_t1_ParamLimits

0x9424,	// (0x0001dd3d) tabs_4_1_passive_pane_t1_ParamLimits

0x9cae,	// (0x0001e5c7) tabs_2_active_pane_t1_ParamLimits

0x9cae,	// (0x0001e5c7) tabs_2_passive_pane_t1_ParamLimits

0xb97d,	// (0x00020296) bg_active_tab_pane_cp4_ParamLimits

0x9cc0,	// (0x0001e5d9) tabs_2_long_active_pane_t1_ParamLimits

0x0ba9,	// (0x000154c2) bg_passive_tab_pane_cp4_ParamLimits

0xe888,	// (0x000231a1) list_single_midp_graphic_pane_t1_ParamLimits

0xb97d,	// (0x00020296) bg_active_tab_pane_cp5_ParamLimits

0x9cd3,	// (0x0001e5ec) tabs_3_long_active_pane_t1_ParamLimits

0x0ba9,	// (0x000154c2) bg_passive_tab_pane_cp5_ParamLimits

0xe888,	// (0x000231a1) list_single_midp_graphic_pane_t1

0xaa2a,	// (0x0001f343) bg_status_flat_pane_ParamLimits

0x136a,	// (0x00015c83) indicator_pane_cp2_ParamLimits

0x136a,	// (0x00015c83) indicator_pane_cp2

0xabc0,	// (0x0001f4d9) navi_pane_srt_ParamLimits

0xabc0,	// (0x0001f4d9) navi_pane_srt

0x14d1,	// (0x00015dea) popup_clock_digital_analogue_window_cp1

0xb9db,	// (0x000202f4) indicator_pane_t1

0x0823,	// (0x0001513c) copy_highlight_pane

0x0823,	// (0x0001513c) cursor_graphics_pane

0x0823,	// (0x0001513c) graphic_within_text_pane

0x0823,	// (0x0001513c) link_highlight_pane

0x2812,	// (0x0001712b) popup_preview_text_window_t5_ParamLimits

0x2812,	// (0x0001712b) popup_preview_text_window_t5

0x0947,	// (0x00015260) cursor_digital_pane

0x0947,	// (0x00015260) cursor_primary_pane

0x0958,	// (0x00015271) cursor_primary_small_pane

0x0960,	// (0x00015279) cursor_secondary_pane

0x0968,	// (0x00015281) cursor_title_pane

0x0947,	// (0x00015260) link_highlight_digital_pane

0x094f,	// (0x00015268) link_highlight_primary_pane

0x0958,	// (0x00015271) link_highlight_primary_small_pane

0x0960,	// (0x00015279) link_highlight_secondary_pane

0x0968,	// (0x00015281) link_highlight_title_pane

0x0947,	// (0x00015260) copy_highlight_digital_pane

0x0947,	// (0x00015260) copy_highlight_primary_pane

0x0958,	// (0x00015271) copy_highlight_primary_small_pane

0x0960,	// (0x00015279) copy_highlight_secondary_pane

0x0968,	// (0x00015281) copy_highlight_title_pane

0x0960,	// (0x00015279) graphic_text_digital_pane

0x2091,	// (0x000169aa) graphic_text_primary_pane

0x209a,	// (0x000169b3) graphic_text_primary_small_pane

0x0958,	// (0x00015271) graphic_text_secondary_pane

0x0947,	// (0x00015260) graphic_text_title_pane

0xa109,	// (0x0001ea22) cursor_primary_pane_g1

0x2083,	// (0x0001699c) cursor_text_primary_t1

0xae55,	// (0x0001f76e) cursor_primary_small_pane_g1

0x2075,	// (0x0001698e) cursor_text_primary_small_t1

0xae4b,	// (0x0001f764) cursor_primary_small_pane_g1_copy1

0x205d,	// (0x00016976) cursor_text_primary_small_t1_copy1

0x203b,	// (0x00016954) cursor_text_title_t1

0xae41,	// (0x0001f75a) cursor_title_pane_g1

0xa109,	// (0x0001ea22) cursor_digital_pane_g1

0x097a,	// (0x00015293) cursor_text_digital_t1

0x0988,	// (0x000152a1) link_highlight_primary_pane_g1

0x1fe4,	// (0x000168fd) link_highlight_primary_pane_t1

0x0988,	// (0x000152a1) link_highlight_primary_small_pane_g1

0x0990,	// (0x000152a9) link_highlight_primary_small_pane_t1

0x099f,	// (0x000152b8) link_highlight_secondary_pane_g1

0x09a7,	// (0x000152c0) link_highlight_secondary_pane_t1

0x1f58,	// (0x00016871) link_highlight_title_pane_g1

0x1f60,	// (0x00016879) link_highlight_title_pane_t1

0x1f41,	// (0x0001685a) link_highlight_digital_pane_g1

0x1f49,	// (0x00016862) link_highlight_digital_pane_t1

0x1e09,	// (0x00016722) copy_highlight_primary_pane_g1

0x1e20,	// (0x00016739) copy_highlight_primary_pane_t1

0x1e09,	// (0x00016722) copy_highlight_primary_small_pane_g1

0x1e11,	// (0x0001672a) copy_highlight_primary_small_pane_t1

0x09b6,	// (0x000152cf) copy_highlight_secondary_pane_g1

0x09be,	// (0x000152d7) copy_highlight_secondary_pane_t1

0x1df2,	// (0x0001670b) copy_highlight_title_pane_g1

0x1dfa,	// (0x00016713) copy_highlight_title_pane_t1

0x1e09,	// (0x00016722) copy_highlight_digital_pane_g1

0x31a9,	// (0x00017ac2) copy_highlight_digital_pane_t1

0x30fd,	// (0x00017a16) graphic_text_primary_pane_g1

0x318d,	// (0x00017aa6) graphic_text_primary_pane_t1

0x319b,	// (0x00017ab4) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x000242dd) graphic_text_primary_pane_t

0x3169,	// (0x00017a82) graphic_text_primary_small_pane_g1

0x3171,	// (0x00017a8a) graphic_text_primary_small_pane_t1

0x317f,	// (0x00017a98) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x000242d8) graphic_text_primary_small_pane_t

0x3145,	// (0x00017a5e) graphic_text_secondary_pane_g1

0x314d,	// (0x00017a66) graphic_text_secondary_pane_t1

0x315b,	// (0x00017a74) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x000242d3) graphic_text_secondary_pane_t

0x3121,	// (0x00017a3a) graphic_text_title_pane_g1

0x3129,	// (0x00017a42) graphic_text_title_pane_t1

0x3137,	// (0x00017a50) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x000242ce) graphic_text_title_pane_t

0x30fd,	// (0x00017a16) graphic_text_digital_pane_g1

0x3105,	// (0x00017a1e) graphic_text_digital_pane_t1

0x3113,	// (0x00017a2c) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x000242c9) graphic_text_digital_pane_t

0xb97d,	// (0x00020296) navi_icon_pane_srt_ParamLimits

0xb97d,	// (0x00020296) navi_icon_pane_srt

0xb915,	// (0x0002022e) navi_midp_pane_srt

0xb915,	// (0x0002022e) navi_navi_pane_srt

0xb97d,	// (0x00020296) navi_text_pane_srt_ParamLimits

0xb97d,	// (0x00020296) navi_text_pane_srt

0x30c8,	// (0x000179e1) navi_navi_icon_text_pane_srt

0x30d0,	// (0x000179e9) navi_navi_pane_srt_g1_ParamLimits

0x30d0,	// (0x000179e9) navi_navi_pane_srt_g1

0x30e2,	// (0x000179fb) navi_navi_pane_srt_g2_ParamLimits

0x30e2,	// (0x000179fb) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x000242c4) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x000242c4) navi_navi_pane_srt_g

0x30f4,	// (0x00017a0d) navi_navi_tabs_pane_srt

0x30c8,	// (0x000179e1) navi_navi_text_pane_srt

0x30c8,	// (0x000179e1) navi_navi_volume_pane_srt

0x30b9,	// (0x000179d2) navi_navi_text_pane_srt_t1

0xea62,	// (0x0002337b) navi_navi_volume_pane_srt_g1

0xea6a,	// (0x00023383) volume_small_pane_srt_ParamLimits

0xea6a,	// (0x00023383) volume_small_pane_srt

0xe6e5,	// (0x00022ffe) volume_small_pane_srt_g1_ParamLimits

0xe6e5,	// (0x00022ffe) volume_small_pane_srt_g1

0xe6f5,	// (0x0002300e) volume_small_pane_srt_g2_ParamLimits

0xe6f5,	// (0x0002300e) volume_small_pane_srt_g2

0xe706,	// (0x0002301f) volume_small_pane_srt_g3_ParamLimits

0xe706,	// (0x0002301f) volume_small_pane_srt_g3

0xe717,	// (0x00023030) volume_small_pane_srt_g4_ParamLimits

0xe717,	// (0x00023030) volume_small_pane_srt_g4

0xe728,	// (0x00023041) volume_small_pane_srt_g5_ParamLimits

0xe728,	// (0x00023041) volume_small_pane_srt_g5

0xe739,	// (0x00023052) volume_small_pane_srt_g6_ParamLimits

0xe739,	// (0x00023052) volume_small_pane_srt_g6

0xe74a,	// (0x00023063) volume_small_pane_srt_g7_ParamLimits

0xe74a,	// (0x00023063) volume_small_pane_srt_g7

0xe75b,	// (0x00023074) volume_small_pane_srt_g8_ParamLimits

0xe75b,	// (0x00023074) volume_small_pane_srt_g8

0xe76c,	// (0x00023085) volume_small_pane_srt_g9_ParamLimits

0xe76c,	// (0x00023085) volume_small_pane_srt_g9

0xe77d,	// (0x00023096) volume_small_pane_srt_g10_ParamLimits

0xe77d,	// (0x00023096) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00024071) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00024071) volume_small_pane_srt_g

0xbc27,	// (0x00020540) query_popup_data_pane_cp2

0x309f,	// (0x000179b8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x309f,	// (0x000179b8) navi_navi_icon_text_pane_srt_t1

0x2091,	// (0x000169aa) navi_tabs_2_long_pane_srt

0x2091,	// (0x000169aa) navi_tabs_2_pane_srt

0x2091,	// (0x000169aa) navi_tabs_3_long_pane_srt

0x2091,	// (0x000169aa) navi_tabs_3_pane_srt

0x2091,	// (0x000169aa) navi_tabs_4_pane_srt

0xea42,	// (0x0002335b) tabs_2_active_pane_srt_ParamLimits

0xea42,	// (0x0002335b) tabs_2_active_pane_srt

0xea52,	// (0x0002336b) tabs_2_passive_pane_srt_ParamLimits

0xea52,	// (0x0002336b) tabs_2_passive_pane_srt

0x1846,	// (0x0001615f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1846,	// (0x0001615f) bg_passive_tab_pane_cp1_srt

0x306b,	// (0x00017984) bg_passive_tab_pane_g1_cp1_srt

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp1_srt

0x3074,	// (0x0001798d) bg_passive_tab_pane_g3_cp1_srt

0xb96f,	// (0x00020288) bg_active_tab_pane_cp1_srt_ParamLimits

0xb96f,	// (0x00020288) bg_active_tab_pane_cp1_srt

0x307d,	// (0x00017996) tabs_2_active_pane_srt_g1

0xb380,	// (0x0001fc99) tabs_2_active_pane_srt_t1_ParamLimits

0xb380,	// (0x0001fc99) tabs_2_active_pane_srt_t1

0x306b,	// (0x00017984) bg_active_tab_pane_g1_cp1_srt

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp1_srt

0x3074,	// (0x0001798d) bg_active_tab_pane_g3_cp1_srt

0xea0f,	// (0x00023328) tabs_3_active_pane_srt_ParamLimits

0xea0f,	// (0x00023328) tabs_3_active_pane_srt

0xea20,	// (0x00023339) tabs_3_passive_pane_cp_srt_ParamLimits

0xea20,	// (0x00023339) tabs_3_passive_pane_cp_srt

0xea31,	// (0x0002334a) tabs_3_passive_pane_srt_ParamLimits

0xea31,	// (0x0002334a) tabs_3_passive_pane_srt

0x1846,	// (0x0001615f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1846,	// (0x0001615f) bg_passive_tab_pane_cp2_srt

0x09cd,	// (0x000152e6) bg_passive_tab_pane_g1_cp2_srt

0xe24e,	// (0x00022b67) bg_passive_tab_pane_g2_cp2_srt

0x09d6,	// (0x000152ef) bg_passive_tab_pane_g3_cp2_srt

0xb96f,	// (0x00020288) bg_active_tab_pane_cp2_srt_ParamLimits

0xb96f,	// (0x00020288) bg_active_tab_pane_cp2_srt

0x3051,	// (0x0001796a) tabs_3_active_pane_srt_g1

0xb36a,	// (0x0001fc83) tabs_3_active_pane_srt_t1_ParamLimits

0xb36a,	// (0x0001fc83) tabs_3_active_pane_srt_t1

0x09cd,	// (0x000152e6) bg_active_tab_pane_g1_cp2_srt

0xe24e,	// (0x00022b67) bg_active_tab_pane_g2_cp2_srt

0x09d6,	// (0x000152ef) bg_active_tab_pane_g3_cp2_srt

0xe9c7,	// (0x000232e0) tabs_4_active_pane_srt_ParamLimits

0xe9c7,	// (0x000232e0) tabs_4_active_pane_srt

0xe9d9,	// (0x000232f2) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe9d9,	// (0x000232f2) tabs_4_passive_pane_cp2_srt

0x0b27,	// (0x00015440) aid_size_cell_toolbar

0x2bf2,	// (0x0001750b) main_idle_act_pane_ParamLimits

0x0d7a,	// (0x00015693) popup_large_graphic_colour_window_ParamLimits

0xa8ec,	// (0x0001f205) popup_toolbar_window_ParamLimits

0xa8ec,	// (0x0001f205) popup_toolbar_window

0x2e13,	// (0x0001772c) list_single_graphic_2heading_pane_ParamLimits

0x2e13,	// (0x0001772c) list_single_graphic_2heading_pane

0xdeac,	// (0x000227c5) aid_size_cell_apps_grid_lsc_pane

0xdebe,	// (0x000227d7) aid_size_cell_apps_grid_prt_pane

0x0ba9,	// (0x000154c2) bg_wml_button_pane_cp1_ParamLimits

0x0ba9,	// (0x000154c2) bg_wml_button_pane_cp1

0xadd4,	// (0x0001f6ed) form_midp_field_text_pane_t1_ParamLimits

0x1846,	// (0x0001615f) input_focus_pane_cp050_ParamLimits

0x1a94,	// (0x000163ad) list_midp_form_text_pane_ParamLimits

0x1a46,	// (0x0001635f) input_focus_pane_cp051_ParamLimits

0x1a5a,	// (0x00016373) list_midp_choice_pane_ParamLimits

0xad8b,	// (0x0001f6a4) list_single_2graphic_pane_cp3_ParamLimits

0xad8b,	// (0x0001f6a4) list_single_2graphic_pane_cp3

0x407c,	// (0x00018995) list_single_midp_graphic_pane_ParamLimits

0x407c,	// (0x00018995) list_single_midp_graphic_pane

0xe79d,	// (0x000230b6) list_single_graphic_2heading_pane_g1_ParamLimits

0xe79d,	// (0x000230b6) list_single_graphic_2heading_pane_g1

0xe7a9,	// (0x000230c2) list_single_graphic_2heading_pane_g4_ParamLimits

0xe7a9,	// (0x000230c2) list_single_graphic_2heading_pane_g4

0xe7b5,	// (0x000230ce) list_single_graphic_2heading_pane_g5_ParamLimits

0xe7b5,	// (0x000230ce) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000240c4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000240c4) list_single_graphic_2heading_pane_g

0xe7c1,	// (0x000230da) list_single_graphic_2heading_pane_t1_ParamLimits

0xe7c1,	// (0x000230da) list_single_graphic_2heading_pane_t1

0xe7d5,	// (0x000230ee) list_single_graphic_2heading_pane_t2_ParamLimits

0xe7d5,	// (0x000230ee) list_single_graphic_2heading_pane_t2

0xe7f1,	// (0x0002310a) list_single_graphic_2heading_pane_t3_ParamLimits

0xe7f1,	// (0x0002310a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000240cb) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000240cb) list_single_graphic_2heading_pane_t

0x1630,	// (0x00015f49) bg_popup_sub_pane_cp2

0x165a,	// (0x00015f73) grid_toobar_pane

0xe809,	// (0x00023122) cell_toolbar_pane_ParamLimits

0xe809,	// (0x00023122) cell_toolbar_pane

0x16c4,	// (0x00015fdd) cell_toolbar_pane_g1_ParamLimits

0x16c4,	// (0x00015fdd) cell_toolbar_pane_g1

0x16d8,	// (0x00015ff1) cell_toolbar_pane_g2_ParamLimits

0x16d8,	// (0x00015ff1) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x000240d9) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x000240d9) cell_toolbar_pane_g

0x16fa,	// (0x00016013) grid_highlight_pane_cp2_ParamLimits

0x16fa,	// (0x00016013) grid_highlight_pane_cp2

0x1714,	// (0x0001602d) toolbar_button_pane

0x1720,	// (0x00016039) toolbar_button_pane_g1

0x1728,	// (0x00016041) toolbar_button_pane_g2

0x1730,	// (0x00016049) toolbar_button_pane_g3

0x1738,	// (0x00016051) toolbar_button_pane_g4

0x1740,	// (0x00016059) toolbar_button_pane_g5

0x1748,	// (0x00016061) toolbar_button_pane_g6

0x1750,	// (0x00016069) toolbar_button_pane_g7

0x1758,	// (0x00016071) toolbar_button_pane_g8

0x1760,	// (0x00016079) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x000240de) toolbar_button_pane_g

0xe841,	// (0x0002315a) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe841,	// (0x0002315a) list_single_2graphic_pane_g1_cp3

0x8b37,	// (0x0001d450) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8b37,	// (0x0001d450) list_single_2graphic_pane_g2_cp3

0xe84d,	// (0x00023166) list_single_2graphic_pane_g3_cp3

0xe855,	// (0x0002316e) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe855,	// (0x0002316e) list_single_2graphic_pane_g4_cp3

0xe861,	// (0x0002317a) list_single_2graphic_pane_t1_cp3_ParamLimits

0xe861,	// (0x0002317a) list_single_2graphic_pane_t1_cp3

0xe87c,	// (0x00023195) list_single_midp_graphic_pane_g2_ParamLimits

0xe87c,	// (0x00023195) list_single_midp_graphic_pane_g2

0x0b2f,	// (0x00015448) aid_zoom_text_primary

0x0b37,	// (0x00015450) aid_zoom_text_secondary

0xa161,	// (0x0001ea7a) status_small_pane_g7_ParamLimits

0xa161,	// (0x0001ea7a) status_small_pane_g7

0xa184,	// (0x0001ea9d) status_small_pane_t1_ParamLimits

0x935e,	// (0x0001dc77) title_pane_g2

0x0003,

0xf54e,	// (0x00023e67) title_pane_g

0x95ea,	// (0x0001df03) aid_size_cell_colour_1_pane_ParamLimits

0x95ea,	// (0x0001df03) aid_size_cell_colour_1_pane

0x95fe,	// (0x0001df17) aid_size_cell_colour_2_pane_ParamLimits

0x95fe,	// (0x0001df17) aid_size_cell_colour_2_pane

0x9612,	// (0x0001df2b) aid_size_cell_colour_3_pane_ParamLimits

0x9612,	// (0x0001df2b) aid_size_cell_colour_3_pane

0x9626,	// (0x0001df3f) aid_size_cell_colour_4_pane_ParamLimits

0x9626,	// (0x0001df3f) aid_size_cell_colour_4_pane

0xdd72,	// (0x0002268b) title_pane_stacon_g1_ParamLimits

0xdd72,	// (0x0002268b) title_pane_stacon_g1

0x1e77,	// (0x00016790) popup_note_wait_window_g3_ParamLimits

0x1e77,	// (0x00016790) popup_note_wait_window_g3

0x1eee,	// (0x00016807) popup_note_wait_window_t5_ParamLimits

0x1eee,	// (0x00016807) popup_note_wait_window_t5

0xb915,	// (0x0002022e) main_feb_china_hwr_fs_writing_pane

0xa283,	// (0x0001eb9c) popup_feb_china_hwr_fs_window_ParamLimits

0xa283,	// (0x0001eb9c) popup_feb_china_hwr_fs_window

0x8b48,	// (0x0001d461) aid_size_cell_hwr_fs_ParamLimits

0x8b48,	// (0x0001d461) aid_size_cell_hwr_fs

0x1846,	// (0x0001615f) bg_popup_sub_pane_cp3_ParamLimits

0x1846,	// (0x0001615f) bg_popup_sub_pane_cp3

0x8b5d,	// (0x0001d476) grid_hwr_fs_pane_ParamLimits

0x8b5d,	// (0x0001d476) grid_hwr_fs_pane

0xe89e,	// (0x000231b7) linegrid_hwr_fs_pane_ParamLimits

0xe89e,	// (0x000231b7) linegrid_hwr_fs_pane

0x8b75,	// (0x0001d48e) cell_hwr_fs_pane_ParamLimits

0x8b75,	// (0x0001d48e) cell_hwr_fs_pane

0x1852,	// (0x0001616b) linegrid_hwr_fs_pane_g1_ParamLimits

0x1852,	// (0x0001616b) linegrid_hwr_fs_pane_g1

0xad5f,	// (0x0001f678) linegrid_hwr_fs_pane_g2_ParamLimits

0xad5f,	// (0x0001f678) linegrid_hwr_fs_pane_g2

0x1870,	// (0x00016189) linegrid_hwr_fs_pane_g3_ParamLimits

0x1870,	// (0x00016189) linegrid_hwr_fs_pane_g3

0xe8ae,	// (0x000231c7) linegrid_hwr_fs_pane_g4_ParamLimits

0xe8ae,	// (0x000231c7) linegrid_hwr_fs_pane_g4

0xe8cc,	// (0x000231e5) linegrid_hwr_fs_pane_g5_ParamLimits

0xe8cc,	// (0x000231e5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00024104) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00024104) linegrid_hwr_fs_pane_g

0x187c,	// (0x00016195) cell_hwr_fs_pane_g1_ParamLimits

0x187c,	// (0x00016195) cell_hwr_fs_pane_g1

0x1567,	// (0x00015e80) cell_hwr_fs_pane_g2_ParamLimits

0x1567,	// (0x00015e80) cell_hwr_fs_pane_g2

0xad71,	// (0x0001f68a) cell_hwr_fs_pane_g3_ParamLimits

0xad71,	// (0x0001f68a) cell_hwr_fs_pane_g3

0xad7e,	// (0x0001f697) cell_hwr_fs_pane_g4_ParamLimits

0xad7e,	// (0x0001f697) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0002410f) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0002410f) cell_hwr_fs_pane_g

0x8b9b,	// (0x0001d4b4) cell_hwr_fs_pane_t1

0xb915,	// (0x0002022e) grid_highlight_pane_cp6

0xb915,	// (0x0002022e) main_idle_act2_pane

0xdb7a,	// (0x00022493) aid_inside_area_popup_secondary

0xaebc,	// (0x0001f7d5) aid_inside_area_window_primary_ParamLimits

0xaebc,	// (0x0001f7d5) aid_inside_area_window_primary

0x31b8,	// (0x00017ad1) ai2_news_ticker_pane

0x31c0,	// (0x00017ad9) aid_size_cell_ai1_link_ParamLimits

0x31c0,	// (0x00017ad9) aid_size_cell_ai1_link

0x31da,	// (0x00017af3) popup_ai2_data_window_ParamLimits

0x31da,	// (0x00017af3) popup_ai2_data_window

0x31f8,	// (0x00017b11) popup_ai2_link_window_ParamLimits

0x31f8,	// (0x00017b11) popup_ai2_link_window

0x1846,	// (0x0001615f) bg_popup_sub_pane_cp4_ParamLimits

0x1846,	// (0x0001615f) bg_popup_sub_pane_cp4

0x320e,	// (0x00017b27) grid_ai2_link_pane_ParamLimits

0x320e,	// (0x00017b27) grid_ai2_link_pane

0x3225,	// (0x00017b3e) popup_ai2_link_window_g1_ParamLimits

0x3225,	// (0x00017b3e) popup_ai2_link_window_g1

0x3231,	// (0x00017b4a) popup_ai2_link_window_g2_ParamLimits

0x3231,	// (0x00017b4a) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x000242e2) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x000242e2) popup_ai2_link_window_g

0x3242,	// (0x00017b5b) ai2_mp_button_pane

0x324a,	// (0x00017b63) ai2_mp_volume_pane

0x1a46,	// (0x0001635f) bg_popup_sub_pane_cp5_ParamLimits

0x1a46,	// (0x0001635f) bg_popup_sub_pane_cp5

0x3252,	// (0x00017b6b) heading_ai2_gene_pane_ParamLimits

0x3252,	// (0x00017b6b) heading_ai2_gene_pane

0x325e,	// (0x00017b77) list_ai2_gene_pane_ParamLimits

0x325e,	// (0x00017b77) list_ai2_gene_pane

0x32a6,	// (0x00017bbf) cell_ai2_link_pane_ParamLimits

0x32a6,	// (0x00017bbf) cell_ai2_link_pane

0x32bc,	// (0x00017bd5) cell_ai2_link_pane_g1

0xb915,	// (0x0002022e) grid_highlight_pane_cp7

0xea7f,	// (0x00023398) ai2_mp_volume_pane_g1

0x338f,	// (0x00017ca8) ai2_mp_volume_pane_g2

0x3304,	// (0x00017c1d) list_ai2_gene_pane_t1

0x3397,	// (0x00017cb0) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x000242fb) ai2_mp_volume_pane_g

0xea87,	// (0x000233a0) volume_small_pane_cp3

0x339f,	// (0x00017cb8) aid_size_cell_ai2_button

0x33a7,	// (0x00017cc0) grid_ai2_button_pane

0x33b0,	// (0x00017cc9) cell_ai2_button_pane_ParamLimits

0x33b0,	// (0x00017cc9) cell_ai2_button_pane

0xb90b,	// (0x00020224) cell_ai2_button_pane_g1

0xb915,	// (0x0002022e) grid_highlight_pane_cp8

0x334f,	// (0x00017c68) ai2_gene_pane_t1_ParamLimits

0x334f,	// (0x00017c68) ai2_gene_pane_t1

0xa1e1,	// (0x0001eafa) aid_height_parent_landscape

0xb0c3,	// (0x0001f9dc) aid_height_set_list

0x2bf2,	// (0x0001750b) aid_size_parent

0x2fd9,	// (0x000178f2) aid_size_cell_graphic_pane_ParamLimits

0x326e,	// (0x00017b87) popup_ai2_data_window_g1_ParamLimits

0x326e,	// (0x00017b87) popup_ai2_data_window_g1

0x327a,	// (0x00017b93) ai2_news_ticker_pane_g1

0x3282,	// (0x00017b9b) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x000242e7) ai2_news_ticker_pane_g

0x328a,	// (0x00017ba3) ai2_news_ticker_pane_t1

0x3298,	// (0x00017bb1) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x000242ec) ai2_news_ticker_pane_t

0x32c5,	// (0x00017bde) heading_ai2_gene_pane_g1

0x32cd,	// (0x00017be6) heading_ai2_gene_pane_t1_ParamLimits

0x32cd,	// (0x00017be6) heading_ai2_gene_pane_t1

0x32e2,	// (0x00017bfb) list_highlight_pane_cp6

0x32ea,	// (0x00017c03) ai2_gene_pane_ParamLimits

0x32ea,	// (0x00017c03) ai2_gene_pane

0x3312,	// (0x00017c2b) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x000242f1) list_ai2_gene_pane_t

0x3320,	// (0x00017c39) list_highlight_pane_cp8_ParamLimits

0x3320,	// (0x00017c39) list_highlight_pane_cp8

0x3331,	// (0x00017c4a) ai2_gene_pane_g1_ParamLimits

0x3331,	// (0x00017c4a) ai2_gene_pane_g1

0x3343,	// (0x00017c5c) ai2_gene_pane_g2_ParamLimits

0x3343,	// (0x00017c5c) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x000242f6) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x000242f6) ai2_gene_pane_g

0xbf42,	// (0x0002085b) scroll_pane_cp12

0x8af6,	// (0x0001d40f) control_pane_t3_ParamLimits

0x8af6,	// (0x0001d40f) control_pane_t3

0xa175,	// (0x0001ea8e) status_small_pane_g8_ParamLimits

0xa175,	// (0x0001ea8e) status_small_pane_g8

0xa325,	// (0x0001ec3e) popup_find_window_ParamLimits

0xa5d6,	// (0x0001eeef) popup_note_image_window_ParamLimits

0x1696,	// (0x00015faf) list_double2_graphic_pane_vc_g1_ParamLimits

0x1696,	// (0x00015faf) list_double2_graphic_pane_vc_g1

0x0794,	// (0x000150ad) list_double2_graphic_pane_vc_g2_ParamLimits

0x0794,	// (0x000150ad) list_double2_graphic_pane_vc_g2

0x16a2,	// (0x00015fbb) list_double2_graphic_pane_vc_g3_ParamLimits

0x16a2,	// (0x00015fbb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x000240d2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x000240d2) list_double2_graphic_pane_vc_g

0x16ae,	// (0x00015fc7) list_double2_graphic_pane_vc_t1_ParamLimits

0x16ae,	// (0x00015fc7) list_double2_graphic_pane_vc_t1

0x0794,	// (0x000150ad) list_single_heading_pane_vc_g1_ParamLimits

0x0794,	// (0x000150ad) list_single_heading_pane_vc_g1

0x16a2,	// (0x00015fbb) list_single_heading_pane_vc_g2_ParamLimits

0x16a2,	// (0x00015fbb) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023ee1) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023ee1) list_single_heading_pane_vc_g

0x1768,	// (0x00016081) list_single_heading_pane_vc_t1_ParamLimits

0x1768,	// (0x00016081) list_single_heading_pane_vc_t1

0x1780,	// (0x00016099) list_single_heading_pane_vc_t2_ParamLimits

0x1780,	// (0x00016099) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x000240f3) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x000240f3) list_single_heading_pane_vc_t

0x1792,	// (0x000160ab) list_setting_number_pane_vc_g1_ParamLimits

0x1792,	// (0x000160ab) list_setting_number_pane_vc_g1

0x179e,	// (0x000160b7) list_setting_number_pane_vc_g2_ParamLimits

0x179e,	// (0x000160b7) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x000240f8) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x000240f8) list_setting_number_pane_vc_g

0x17aa,	// (0x000160c3) list_setting_number_pane_vc_t1_ParamLimits

0x17aa,	// (0x000160c3) list_setting_number_pane_vc_t1

0x17be,	// (0x000160d7) list_setting_number_pane_vc_t2_ParamLimits

0x17be,	// (0x000160d7) list_setting_number_pane_vc_t2

0x17da,	// (0x000160f3) list_setting_number_pane_vc_t3_ParamLimits

0x17da,	// (0x000160f3) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x000240fd) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x000240fd) list_setting_number_pane_vc_t

0x1808,	// (0x00016121) set_value_pane_vc_ParamLimits

0x1808,	// (0x00016121) set_value_pane_vc

0x2e13,	// (0x0001772c) list_double2_graphic_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_double2_graphic_pane_vc

0x2e13,	// (0x0001772c) list_double2_large_graphic_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_double2_large_graphic_pane_vc

0x2e13,	// (0x0001772c) list_double2_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_double2_pane_vc

0x2e13,	// (0x0001772c) list_double_graphic_heading_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_double_graphic_heading_pane_vc

0x2e13,	// (0x0001772c) list_double_graphic_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_double_graphic_pane_vc

0x2e13,	// (0x0001772c) list_double_heading_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_double_heading_pane_vc

0x2e27,	// (0x00017740) list_double_large_graphic_pane_vc_ParamLimits

0x2e27,	// (0x00017740) list_double_large_graphic_pane_vc

0x2e13,	// (0x0001772c) list_double_number_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_double_number_pane_vc

0x2e13,	// (0x0001772c) list_double_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_double_pane_vc

0x2e13,	// (0x0001772c) list_double_time_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_double_time_pane_vc

0x2e13,	// (0x0001772c) list_setting_number_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_setting_number_pane_vc

0x2e13,	// (0x0001772c) list_setting_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_setting_pane_vc

0x2e13,	// (0x0001772c) list_single_graphic_heading_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_single_graphic_heading_pane_vc

0x2e13,	// (0x0001772c) list_single_heading_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_single_heading_pane_vc

0x2e13,	// (0x0001772c) list_single_number_heading_pane_vc_ParamLimits

0x2e13,	// (0x0001772c) list_single_number_heading_pane_vc

0x1696,	// (0x00015faf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1696,	// (0x00015faf) list_double_graphic_heading_pane_vc_g1

0x33e3,	// (0x00017cfc) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x33e3,	// (0x00017cfc) list_double_graphic_heading_pane_vc_g2

0x33ef,	// (0x00017d08) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x33ef,	// (0x00017d08) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x00024302) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x00024302) list_double_graphic_heading_pane_vc_g

0x33fb,	// (0x00017d14) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x33fb,	// (0x00017d14) list_double_graphic_heading_pane_vc_t1

0x3411,	// (0x00017d2a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3411,	// (0x00017d2a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x00024309) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x00024309) list_double_graphic_heading_pane_vc_t

0x1792,	// (0x000160ab) list_setting_pane_vc_g1_ParamLimits

0x1792,	// (0x000160ab) list_setting_pane_vc_g1

0x179e,	// (0x000160b7) list_setting_pane_vc_g2_ParamLimits

0x179e,	// (0x000160b7) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x000240f8) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x000240f8) list_setting_pane_vc_g

0x3657,	// (0x00017f70) list_setting_pane_vc_t1_ParamLimits

0x3657,	// (0x00017f70) list_setting_pane_vc_t1

0x3673,	// (0x00017f8c) list_setting_pane_vc_t2_ParamLimits

0x3673,	// (0x00017f8c) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x0002434c) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x0002434c) list_setting_pane_vc_t

0x1808,	// (0x00016121) set_value_pane_cp_vc_ParamLimits

0x1808,	// (0x00016121) set_value_pane_cp_vc

0x0794,	// (0x000150ad) list_single_number_heading_pane_vc_g1_ParamLimits

0x0794,	// (0x000150ad) list_single_number_heading_pane_vc_g1

0x16a2,	// (0x00015fbb) list_single_number_heading_pane_vc_g2_ParamLimits

0x16a2,	// (0x00015fbb) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023ee1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023ee1) list_single_number_heading_pane_vc_g

0x1768,	// (0x00016081) list_single_number_heading_pane_vc_t1_ParamLimits

0x1768,	// (0x00016081) list_single_number_heading_pane_vc_t1

0x368f,	// (0x00017fa8) list_single_number_heading_pane_vc_t2_ParamLimits

0x368f,	// (0x00017fa8) list_single_number_heading_pane_vc_t2

0x36a1,	// (0x00017fba) list_single_number_heading_pane_vc_t3_ParamLimits

0x36a1,	// (0x00017fba) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x00024351) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00024351) list_single_number_heading_pane_vc_t

0x1696,	// (0x00015faf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1696,	// (0x00015faf) list_single_graphic_heading_pane_vc_g1

0x0794,	// (0x000150ad) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0794,	// (0x000150ad) list_single_graphic_heading_pane_vc_g4

0x16a2,	// (0x00015fbb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x16a2,	// (0x00015fbb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x000240d2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x000240d2) list_single_graphic_heading_pane_vc_g

0x1768,	// (0x00016081) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1768,	// (0x00016081) list_single_graphic_heading_pane_vc_t1

0x36b3,	// (0x00017fcc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x36b3,	// (0x00017fcc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x00024358) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x00024358) list_single_graphic_heading_pane_vc_t

0x0794,	// (0x000150ad) list_double2_pane_vc_g1_ParamLimits

0x0794,	// (0x000150ad) list_double2_pane_vc_g1

0x16a2,	// (0x00015fbb) list_double2_pane_vc_g2_ParamLimits

0x16a2,	// (0x00015fbb) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023ee1) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023ee1) list_double2_pane_vc_g

0x36c5,	// (0x00017fde) list_double2_pane_vc_t1_ParamLimits

0x36c5,	// (0x00017fde) list_double2_pane_vc_t1

0x36db,	// (0x00017ff4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x36db,	// (0x00017ff4) list_double2_large_graphic_pane_vc_g1

0x0794,	// (0x000150ad) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0794,	// (0x000150ad) list_double2_large_graphic_pane_vc_g2

0x16a2,	// (0x00015fbb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x16a2,	// (0x00015fbb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00023efe) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00023efe) list_double2_large_graphic_pane_vc_g

0x36e7,	// (0x00018000) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x36e7,	// (0x00018000) list_double2_large_graphic_pane_vc_t1

0x36fd,	// (0x00018016) list_double_time_pane_vc_g1_ParamLimits

0x36fd,	// (0x00018016) list_double_time_pane_vc_g1

0x3709,	// (0x00018022) list_double_time_pane_vc_g2_ParamLimits

0x3709,	// (0x00018022) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0002435d) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0002435d) list_double_time_pane_vc_g

0x3715,	// (0x0001802e) list_double_time_pane_vc_t1_ParamLimits

0x3715,	// (0x0001802e) list_double_time_pane_vc_t1

0x3745,	// (0x0001805e) list_double_time_pane_vc_t2_ParamLimits

0x3745,	// (0x0001805e) list_double_time_pane_vc_t2

0x376e,	// (0x00018087) list_double_time_pane_vc_t3_ParamLimits

0x376e,	// (0x00018087) list_double_time_pane_vc_t3

0x3780,	// (0x00018099) list_double_time_pane_vc_t4_ParamLimits

0x3780,	// (0x00018099) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x00024362) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x00024362) list_double_time_pane_vc_t

0x0794,	// (0x000150ad) list_double_pane_vc_g1_ParamLimits

0x0794,	// (0x000150ad) list_double_pane_vc_g1

0x16a2,	// (0x00015fbb) list_double_pane_vc_g2_ParamLimits

0x16a2,	// (0x00015fbb) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023ee1) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023ee1) list_double_pane_vc_g

0x37a5,	// (0x000180be) list_double_pane_vc_t1_ParamLimits

0x37a5,	// (0x000180be) list_double_pane_vc_t1

0x37b9,	// (0x000180d2) list_double_pane_vc_t2_ParamLimits

0x37b9,	// (0x000180d2) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0002436b) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0002436b) list_double_pane_vc_t

0x0794,	// (0x000150ad) list_double_number_pane_vc_g1_ParamLimits

0x0794,	// (0x000150ad) list_double_number_pane_vc_g1

0x16a2,	// (0x00015fbb) list_double_number_pane_vc_g2_ParamLimits

0x16a2,	// (0x00015fbb) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023ee1) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023ee1) list_double_number_pane_vc_g

0x37cf,	// (0x000180e8) list_double_number_pane_vc_t1_ParamLimits

0x37cf,	// (0x000180e8) list_double_number_pane_vc_t1

0x37e3,	// (0x000180fc) list_double_number_pane_vc_t2_ParamLimits

0x37e3,	// (0x000180fc) list_double_number_pane_vc_t2

0x37f7,	// (0x00018110) list_double_number_pane_vc_t3_ParamLimits

0x37f7,	// (0x00018110) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x00024370) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x00024370) list_double_number_pane_vc_t

0x380d,	// (0x00018126) list_double_large_graphic_pane_vc_g1_ParamLimits

0x380d,	// (0x00018126) list_double_large_graphic_pane_vc_g1

0x3835,	// (0x0001814e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3835,	// (0x0001814e) list_double_large_graphic_pane_vc_g2

0x3849,	// (0x00018162) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3849,	// (0x00018162) list_double_large_graphic_pane_vc_g3

0x3858,	// (0x00018171) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3858,	// (0x00018171) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x00024377) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x00024377) list_double_large_graphic_pane_vc_g

0x3868,	// (0x00018181) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3868,	// (0x00018181) list_double_large_graphic_pane_vc_t1

0x388a,	// (0x000181a3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x388a,	// (0x000181a3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00024380) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00024380) list_double_large_graphic_pane_vc_t

0x33e3,	// (0x00017cfc) list_double_heading_pane_vc_g1_ParamLimits

0x33e3,	// (0x00017cfc) list_double_heading_pane_vc_g1

0x33ef,	// (0x00017d08) list_double_heading_pane_vc_g2_ParamLimits

0x33ef,	// (0x00017d08) list_double_heading_pane_vc_g2

0x0001,

0xfa6c,	// (0x00024385) list_double_heading_pane_vc_g_ParamLimits

0xfa6c,	// (0x00024385) list_double_heading_pane_vc_g

0x38aa,	// (0x000181c3) list_double_heading_pane_vc_t1_ParamLimits

0x38aa,	// (0x000181c3) list_double_heading_pane_vc_t1

0x1768,	// (0x00016081) list_double_heading_pane_vc_t2_ParamLimits

0x1768,	// (0x00016081) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0002438a) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0002438a) list_double_heading_pane_vc_t

0x38bc,	// (0x000181d5) list_double_graphic_pane_vc_g1_ParamLimits

0x38bc,	// (0x000181d5) list_double_graphic_pane_vc_g1

0x38c8,	// (0x000181e1) list_double_graphic_pane_vc_g2_ParamLimits

0x38c8,	// (0x000181e1) list_double_graphic_pane_vc_g2

0x0794,	// (0x000150ad) list_double_graphic_pane_vc_g3_ParamLimits

0x0794,	// (0x000150ad) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0002438f) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0002438f) list_double_graphic_pane_vc_g

0x38e5,	// (0x000181fe) list_double_graphic_pane_vc_t1_ParamLimits

0x38e5,	// (0x000181fe) list_double_graphic_pane_vc_t1

0x390f,	// (0x00018228) list_double_graphic_pane_vc_t2_ParamLimits

0x390f,	// (0x00018228) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00024398) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00024398) list_double_graphic_pane_vc_t

0xd6a3,	// (0x00021fbc) aid_size_cell_fastswap

0x87b9,	// (0x0001d0d2) aid_size_cell_touch_ParamLimits

0x87b9,	// (0x0001d0d2) aid_size_cell_touch

0xd82a,	// (0x00022143) popup_fast_swap_wide_window_ParamLimits

0xd82a,	// (0x00022143) popup_fast_swap_wide_window

0x8977,	// (0x0001d290) touch_pane_ParamLimits

0x8977,	// (0x0001d290) touch_pane

0xd95f,	// (0x00022278) button_value_adjust_pane_cp2

0xd967,	// (0x00022280) button_value_adjust_pane_cp4

0xd96f,	// (0x00022288) form_field_data_pane_cp2

0x9b21,	// (0x0001e43a) form_field_data_wide_pane_cp2

0xdefa,	// (0x00022813) bg_scroll_pane_ParamLimits

0xe49f,	// (0x00022db8) scroll_handle_pane_ParamLimits

0xe4b3,	// (0x00022dcc) scroll_sc2_down_pane_ParamLimits

0xe4b3,	// (0x00022dcc) scroll_sc2_down_pane

0xdf2b,	// (0x00022844) scroll_sc2_up_pane_ParamLimits

0xdf2b,	// (0x00022844) scroll_sc2_up_pane

0xb4bd,	// (0x0001fdd6) grid_wheel_folder_pane_g1_ParamLimits

0xb4bd,	// (0x0001fdd6) grid_wheel_folder_pane_g1

0xe67d,	// (0x00022f96) clock_nsta_pane_cp2_ParamLimits

0xe67d,	// (0x00022f96) clock_nsta_pane_cp2

0x0ba9,	// (0x000154c2) listscroll_midp_pane_ParamLimits

0xa060,	// (0x0001e979) midp_canvas_pane

0x0b15,	// (0x0001542e) nsta_clock_indic_pane

0x0b73,	// (0x0001548c) listscroll_form_pane_vc

0x0b97,	// (0x000154b0) listscroll_set_pane_vc_ParamLimits

0x0b97,	// (0x000154b0) listscroll_set_pane_vc

0xaa52,	// (0x0001f36b) clock_nsta_pane

0xaa7c,	// (0x0001f395) indicator_nsta_pane

0x1630,	// (0x00015f49) bg_popup_sub_pane_cp2_ParamLimits

0x1644,	// (0x00015f5d) find_pane_cp2_ParamLimits

0x1644,	// (0x00015f5d) find_pane_cp2

0x165a,	// (0x00015f73) grid_toobar_pane_ParamLimits

0x181a,	// (0x00016133) list_form_gen_pane_vc_ParamLimits

0x181a,	// (0x00016133) list_form_gen_pane_vc

0x1830,	// (0x00016149) scroll_pane_cp8_vc_ParamLimits

0x1830,	// (0x00016149) scroll_pane_cp8_vc

0x18ac,	// (0x000161c5) data_form_wide_pane_vc_ParamLimits

0x18ac,	// (0x000161c5) data_form_wide_pane_vc

0x18b8,	// (0x000161d1) form_field_data_wide_pane_vc_g1

0x18c0,	// (0x000161d9) form_field_data_wide_pane_vc_t1_ParamLimits

0x18c0,	// (0x000161d9) form_field_data_wide_pane_vc_t1

0xd9ca,	// (0x000222e3) input_focus_pane_cp6_vc_ParamLimits

0xd9ca,	// (0x000222e3) input_focus_pane_cp6_vc

0xae19,	// (0x0001f732) list_midp_pane_ParamLimits

0x3045,	// (0x0001795e) scroll_pane_cp16_ParamLimits

0x3045,	// (0x0001795e) scroll_pane_cp16

0x1c4b,	// (0x00016564) button_value_adjust_pane_ParamLimits

0x1c4b,	// (0x00016564) button_value_adjust_pane

0xb0d4,	// (0x0001f9ed) button_value_adjust_pane_cp6_ParamLimits

0xb0d4,	// (0x0001f9ed) button_value_adjust_pane_cp6

0xb216,	// (0x0001fb2f) settings_code_pane_cp_ParamLimits

0xb216,	// (0x0001fb2f) settings_code_pane_cp

0xb90b,	// (0x00020224) cell_touch_pane_g1

0xb90b,	// (0x00020224) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00024017) cell_touch_pane_g

0xb396,	// (0x0001fcaf) cell_touch_pane_cp_ParamLimits

0xb396,	// (0x0001fcaf) cell_touch_pane_cp

0xb3b2,	// (0x0001fccb) cell_touch_pane_ParamLimits

0xb3b2,	// (0x0001fccb) cell_touch_pane

0xb90b,	// (0x00020224) scroll_sc2_down_pane_g1

0xb90b,	// (0x00020224) scroll_sc2_up_pane_g1

0xb915,	// (0x0002022e) bg_set_opt_pane_cp4_vc

0x342f,	// (0x00017d48) list_set_graphic_pane_vc_g1_ParamLimits

0x342f,	// (0x00017d48) list_set_graphic_pane_vc_g1

0xe42e,	// (0x00022d47) list_set_graphic_pane_vc_g2_ParamLimits

0xe42e,	// (0x00022d47) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0002430e) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0002430e) list_set_graphic_pane_vc_g

0x343b,	// (0x00017d54) text_primary_small_cp13_vc_ParamLimits

0x343b,	// (0x00017d54) text_primary_small_cp13_vc

0x3453,	// (0x00017d6c) list_set_graphic_pane_vc_ParamLimits

0x3453,	// (0x00017d6c) list_set_graphic_pane_vc

0xb915,	// (0x0002022e) input_focus_pane_cp2_vc

0xb90b,	// (0x00020224) setting_code_pane_vc_g1

0xb994,	// (0x000202ad) setting_code_pane_vc_t1

0x3468,	// (0x00017d81) set_text_pane_vc_t1_ParamLimits

0x3468,	// (0x00017d81) set_text_pane_vc_t1

0xb915,	// (0x0002022e) input_focus_pane_cp1_vc

0x3486,	// (0x00017d9f) list_set_text_pane_vc

0xb90b,	// (0x00020224) setting_text_pane_vc_g1

0xb915,	// (0x0002022e) bg_set_opt_pane_cp2_vc

0xb98b,	// (0x000202a4) setting_slider_graphic_pane_vc_g1

0x3490,	// (0x00017da9) setting_slider_graphic_pane_vc_t1

0x34a2,	// (0x00017dbb) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x00024313) setting_slider_graphic_pane_vc_t

0x34b4,	// (0x00017dcd) slider_set_pane_cp_vc

0x34be,	// (0x00017dd7) slider_set_pane_vc_g1

0x34c7,	// (0x00017de0) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x00024318) slider_set_pane_vc_g

0xda93,	// (0x000223ac) set_opt_bg_pane_g1_copy1

0xda9b,	// (0x000223b4) set_opt_bg_pane_g2_copy1

0x34f3,	// (0x00017e0c) set_opt_bg_pane_g3_copy1

0xdaab,	// (0x000223c4) set_opt_bg_pane_g4_copy1

0xdab3,	// (0x000223cc) set_opt_bg_pane_g5_copy1

0xdabb,	// (0x000223d4) set_opt_bg_pane_g6_copy1

0x34fd,	// (0x00017e16) set_opt_bg_pane_g7_copy1

0x3507,	// (0x00017e20) set_opt_bg_pane_g8_copy1

0x3511,	// (0x00017e2a) set_opt_bg_pane_g9_copy1

0xb915,	// (0x0002022e) bg_set_opt_pane_cp_vc

0x351b,	// (0x00017e34) setting_slider_pane_vc_t1

0x352a,	// (0x00017e43) setting_slider_pane_vc_t2

0x353c,	// (0x00017e55) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x00024327) setting_slider_pane_vc_t

0x354e,	// (0x00017e67) slider_set_pane_vc

0xe8e2,	// (0x000231fb) volume_set_pane_vc_g1

0xea90,	// (0x000233a9) volume_set_pane_vc_g2

0xea99,	// (0x000233b2) volume_set_pane_vc_g3

0xeaa2,	// (0x000233bb) volume_set_pane_vc_g4

0xeaab,	// (0x000233c4) volume_set_pane_vc_g5

0xeab4,	// (0x000233cd) volume_set_pane_vc_g6

0xeabd,	// (0x000233d6) volume_set_pane_vc_g7

0xeac6,	// (0x000233df) volume_set_pane_vc_g8

0xeacf,	// (0x000233e8) volume_set_pane_vc_g9

0xead8,	// (0x000233f1) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x0002432e) volume_set_pane_vc_g

0x3558,	// (0x00017e71) volume_set_pane_vc

0x3562,	// (0x00017e7b) button_value_adjust_pane_cp1_vc

0x356c,	// (0x00017e85) list_highlight_pane_cp2_vc

0x3575,	// (0x00017e8e) list_set_pane_vc_ParamLimits

0x3575,	// (0x00017e8e) list_set_pane_vc

0x35e5,	// (0x00017efe) main_pane_set_vc_t1_ParamLimits

0x35e5,	// (0x00017efe) main_pane_set_vc_t1

0x35fa,	// (0x00017f13) main_pane_set_vc_t2_ParamLimits

0x35fa,	// (0x00017f13) main_pane_set_vc_t2

0x360c,	// (0x00017f25) main_pane_set_vc_t3_ParamLimits

0x360c,	// (0x00017f25) main_pane_set_vc_t3

0x3620,	// (0x00017f39) main_pane_set_vc_t4_ParamLimits

0x3620,	// (0x00017f39) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x00024343) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x00024343) main_pane_set_vc_t

0x3634,	// (0x00017f4d) setting_code_pane_vc_ParamLimits

0x3634,	// (0x00017f4d) setting_code_pane_vc

0x3645,	// (0x00017f5e) setting_slider_graphic_pane_vc

0x3645,	// (0x00017f5e) setting_slider_pane_vc

0x3645,	// (0x00017f5e) setting_text_pane_vc

0x3645,	// (0x00017f5e) setting_volume_pane_vc

0x364f,	// (0x00017f68) scroll_pane_cp121_vc

0xd94d,	// (0x00022266) set_content_pane_vc

0x392d,	// (0x00018246) button_value_adjust_pane_g1

0x3936,	// (0x0001824f) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0002439d) button_value_adjust_pane_g

0x393f,	// (0x00018258) form_field_slider_wide_pane_vc_t1_ParamLimits

0x393f,	// (0x00018258) form_field_slider_wide_pane_vc_t1

0x3951,	// (0x0001826a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3951,	// (0x0001826a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x000243a2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x000243a2) form_field_slider_wide_pane_vc_t

0xb96f,	// (0x00020288) input_focus_pane_cp10_vc_ParamLimits

0xb96f,	// (0x00020288) input_focus_pane_cp10_vc

0x397d,	// (0x00018296) slider_cont_pane_cp1_vc_ParamLimits

0x397d,	// (0x00018296) slider_cont_pane_cp1_vc

0x398f,	// (0x000182a8) slider_form_pane_g1_cp2

0x34c7,	// (0x00017de0) slider_form_pane_g2_cp2

0x39bc,	// (0x000182d5) form_field_slider_pane_vc_t3

0x39ca,	// (0x000182e3) form_field_slider_pane_vc_t4

0x39d8,	// (0x000182f1) slider_form_pane_vc_ParamLimits

0x39d8,	// (0x000182f1) slider_form_pane_vc

0x39e5,	// (0x000182fe) form_field_slider_pane_vc_t1_ParamLimits

0x39e5,	// (0x000182fe) form_field_slider_pane_vc_t1

0x3951,	// (0x0001826a) form_field_slider_pane_vc_t2_ParamLimits

0x3951,	// (0x0001826a) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x000243b4) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x000243b4) form_field_slider_pane_vc_t

0xb96f,	// (0x00020288) input_focus_pane_cp9_vc_ParamLimits

0xb96f,	// (0x00020288) input_focus_pane_cp9_vc

0x39fb,	// (0x00018314) slider_cont_pane_vc_ParamLimits

0x39fb,	// (0x00018314) slider_cont_pane_vc

0x3a0f,	// (0x00018328) list_form_graphic_pane_cp_vc_ParamLimits

0x3a0f,	// (0x00018328) list_form_graphic_pane_cp_vc

0x18b8,	// (0x000161d1) form_field_popup_wide_pane_vc_g1

0x3a24,	// (0x0001833d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3a24,	// (0x0001833d) form_field_popup_wide_pane_vc_t1

0xd9ca,	// (0x000222e3) input_focus_pane_cp8_vc_ParamLimits

0xd9ca,	// (0x000222e3) input_focus_pane_cp8_vc

0x3a69,	// (0x00018382) list_form_wide_pane_vc_ParamLimits

0x3a69,	// (0x00018382) list_form_wide_pane_vc

0x3a75,	// (0x0001838e) list_form_graphic_pane_vc_g1

0x3a7d,	// (0x00018396) list_form_graphic_pane_vc_t1_ParamLimits

0x3a7d,	// (0x00018396) list_form_graphic_pane_vc_t1

0xb97d,	// (0x00020296) list_highlight_pane_cp5_vc_ParamLimits

0xb97d,	// (0x00020296) list_highlight_pane_cp5_vc

0x3a99,	// (0x000183b2) list_form_graphic_pane_vc_ParamLimits

0x3a99,	// (0x000183b2) list_form_graphic_pane_vc

0x18b8,	// (0x000161d1) form_field_popup_pane_vc_g1

0x3aaf,	// (0x000183c8) form_field_popup_pane_vc_t1_ParamLimits

0x3aaf,	// (0x000183c8) form_field_popup_pane_vc_t1

0xd9ca,	// (0x000222e3) input_focus_pane_cp7_vc_ParamLimits

0xd9ca,	// (0x000222e3) input_focus_pane_cp7_vc

0x3ac6,	// (0x000183df) list_form_pane_vc_ParamLimits

0x3ac6,	// (0x000183df) list_form_pane_vc

0x3ad2,	// (0x000183eb) data_form_pane_vc_t1_ParamLimits

0x3ad2,	// (0x000183eb) data_form_pane_vc_t1

0xda93,	// (0x000223ac) input_focus_pane_vc_g1

0xda9b,	// (0x000223b4) input_focus_pane_vc_g2

0xdaa3,	// (0x000223bc) input_focus_pane_vc_g3

0xdaab,	// (0x000223c4) input_focus_pane_vc_g4

0xdab3,	// (0x000223cc) input_focus_pane_vc_g5

0xdabb,	// (0x000223d4) input_focus_pane_vc_g6

0xdac3,	// (0x000223dc) input_focus_pane_vc_g7

0xdacb,	// (0x000223e4) input_focus_pane_vc_g8

0xdad3,	// (0x000223ec) input_focus_pane_vc_g9

0xb90b,	// (0x00020224) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00023fa0) input_focus_pane_vc_g

0x18ac,	// (0x000161c5) data_form_pane_vc_ParamLimits

0x18ac,	// (0x000161c5) data_form_pane_vc

0x18b8,	// (0x000161d1) form_field_data_pane_vc_g1

0x3aef,	// (0x00018408) form_field_data_pane_vc_t1_ParamLimits

0x3aef,	// (0x00018408) form_field_data_pane_vc_t1

0xd9ca,	// (0x000222e3) input_focus_pane_vc_ParamLimits

0xd9ca,	// (0x000222e3) input_focus_pane_vc

0x3b09,	// (0x00018422) button_value_adjust_pane_cp3_vc

0x3b11,	// (0x0001842a) button_value_adjust_pane_cp5_vc

0x3b19,	// (0x00018432) form_field_data_pane_vc_ParamLimits

0x3b19,	// (0x00018432) form_field_data_pane_vc

0x3b34,	// (0x0001844d) form_field_data_pane_vc_cp2

0x3b3c,	// (0x00018455) form_field_data_wide_pane_vc_ParamLimits

0x3b3c,	// (0x00018455) form_field_data_wide_pane_vc

0x3b56,	// (0x0001846f) form_field_data_wide_pane_vc_cp2

0x3b5e,	// (0x00018477) form_field_popup_pane_vc_ParamLimits

0x3b5e,	// (0x00018477) form_field_popup_pane_vc

0x3b79,	// (0x00018492) form_field_popup_wide_pane_vc_ParamLimits

0x3b79,	// (0x00018492) form_field_popup_wide_pane_vc

0x3b93,	// (0x000184ac) form_field_slider_pane_vc_ParamLimits

0x3b93,	// (0x000184ac) form_field_slider_pane_vc

0x3ba6,	// (0x000184bf) form_field_slider_wide_pane_vc_ParamLimits

0x3ba6,	// (0x000184bf) form_field_slider_wide_pane_vc

0xb3d0,	// (0x0001fce9) grid_touch_1_pane_ParamLimits

0xb3d0,	// (0x0001fce9) grid_touch_1_pane

0xb3e4,	// (0x0001fcfd) grid_touch_2_pane_ParamLimits

0xb3e4,	// (0x0001fcfd) grid_touch_2_pane

0x3c77,	// (0x00018590) touch_pane_g1_ParamLimits

0x3c77,	// (0x00018590) touch_pane_g1

0x3bdf,	// (0x000184f8) cell_app_pane_cp_wide_ParamLimits

0x3bdf,	// (0x000184f8) cell_app_pane_cp_wide

0x3bf0,	// (0x00018509) grid_popup_fast_wide_pane_ParamLimits

0x3bf0,	// (0x00018509) grid_popup_fast_wide_pane

0x3c04,	// (0x0001851d) scroll_pane_cp19_ParamLimits

0x3c04,	// (0x0001851d) scroll_pane_cp19

0xb915,	// (0x0002022e) bg_popup_window_pane_cp20

0x3c18,	// (0x00018531) listscroll_popup_fast_wide_pane

0xe43a,	// (0x00022d53) grid_indicator_nsta_pane

0x3c20,	// (0x00018539) clock_nsta_pane_g1

0x3c29,	// (0x00018542) clock_nsta_pane_t1

0xb410,	// (0x0001fd29) cell_indicator_nsta_pane_ParamLimits

0xb410,	// (0x0001fd29) cell_indicator_nsta_pane

0x3c77,	// (0x00018590) cell_indicator_nsta_pane_g1

0xb429,	// (0x0001fd42) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x000243c5) cell_indicator_nsta_pane_g

0x3c9b,	// (0x000185b4) clock_nsta_pane_cp

0x3ca3,	// (0x000185bc) indicator_nsta_pane_cp

0x3cac,	// (0x000185c5) nsta_clock_indic_pane_g1

0xb9d3,	// (0x000202ec) grid_indicator_pane

0xe01d,	// (0x00022936) scroll_pane_cp29

0xe5c9,	// (0x00022ee2) indicator_nsta_pane_cp2_ParamLimits

0xe5c9,	// (0x00022ee2) indicator_nsta_pane_cp2

0xb97d,	// (0x00020296) main_apps_wheel_pane

0x1ace,	// (0x000163e7) form_midp_field_text_pane_ParamLimits

0x1c1d,	// (0x00016536) scroll_bar_cp050_ParamLimits

0x3d15,	// (0x0001862e) cell_indicator_pane_ParamLimits

0x3d15,	// (0x0001862e) cell_indicator_pane

0x3d2d,	// (0x00018646) cell_indicator_pane_g1

0xb43f,	// (0x0001fd58) grid_wheel_folder_pane_ParamLimits

0xb43f,	// (0x0001fd58) grid_wheel_folder_pane

0xb44d,	// (0x0001fd66) list_wheel_apps_pane_ParamLimits

0xb44d,	// (0x0001fd66) list_wheel_apps_pane

0xb45b,	// (0x0001fd74) main_apps_wheel_pane_g1_ParamLimits

0xb45b,	// (0x0001fd74) main_apps_wheel_pane_g1

0xb46b,	// (0x0001fd84) main_apps_wheel_pane_g2_ParamLimits

0xb46b,	// (0x0001fd84) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x000243e1) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x000243e1) main_apps_wheel_pane_g

0xb47b,	// (0x0001fd94) main_apps_wheel_pane_t1_ParamLimits

0xb47b,	// (0x0001fd94) main_apps_wheel_pane_t1

0xb493,	// (0x0001fdac) list_wheel_apps_pane_g1

0xb49b,	// (0x0001fdb4) list_wheel_apps_pane_g2

0xb4a3,	// (0x0001fdbc) list_wheel_apps_pane_g3

0xb4ab,	// (0x0001fdc4) list_wheel_apps_pane_g4

0xb4b3,	// (0x0001fdcc) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x000243e6) list_wheel_apps_pane_g

0xe39d,	// (0x00022cb6) navi_icon_text_pane

0xa944,	// (0x0001f25d) aid_fill_nsta

0xb4d0,	// (0x0001fde9) navi_icon_text_pane_g1

0xb4dc,	// (0x0001fdf5) navi_icon_text_pane_t1

0x9fb9,	// (0x0001e8d2) list_set_graphic_pane_t1_ParamLimits

0x9fb9,	// (0x0001e8d2) list_set_graphic_pane_t1

0x236e,	// (0x00016c87) popup_midp_note_alarm_window_t6_ParamLimits

0x236e,	// (0x00016c87) popup_midp_note_alarm_window_t6

0x2380,	// (0x00016c99) popup_midp_note_alarm_window_t7_ParamLimits

0x2380,	// (0x00016c99) popup_midp_note_alarm_window_t7

0x2392,	// (0x00016cab) popup_midp_note_alarm_window_t8_ParamLimits

0x2392,	// (0x00016cab) popup_midp_note_alarm_window_t8

0x23a4,	// (0x00016cbd) popup_midp_note_alarm_window_t9_ParamLimits

0x23a4,	// (0x00016cbd) popup_midp_note_alarm_window_t9

0x23b6,	// (0x00016ccf) popup_midp_note_alarm_window_t10_ParamLimits

0x23b6,	// (0x00016ccf) popup_midp_note_alarm_window_t10

0x23c8,	// (0x00016ce1) popup_midp_note_alarm_window_t11_ParamLimits

0x23c8,	// (0x00016ce1) popup_midp_note_alarm_window_t11

0x23da,	// (0x00016cf3) scroll_pane_cp17_ParamLimits

0x23da,	// (0x00016cf3) scroll_pane_cp17

0xe8e2,	// (0x000231fb) volume_small_pane_cp_g1

0xeae1,	// (0x000233fa) volume_small_pane_cp_g2

0xeaea,	// (0x00023403) volume_small_pane_cp_g3

0xeaf3,	// (0x0002340c) volume_small_pane_cp_g4

0xeafc,	// (0x00023415) volume_small_pane_cp_g5

0xeb05,	// (0x0002341e) volume_small_pane_cp_g6

0xeb0e,	// (0x00023427) volume_small_pane_cp_g7

0xeb17,	// (0x00023430) volume_small_pane_cp_g8

0xeb20,	// (0x00023439) volume_small_pane_cp_g9

0xeb29,	// (0x00023442) volume_small_pane_cp_g10

0x08f4,	// (0x0001520d) midp_ticker_pane_g1_ParamLimits

0x0900,	// (0x00015219) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0002406c) midp_ticker_pane_g_ParamLimits

0xa0f7,	// (0x0001ea10) midp_ticker_pane_t1_ParamLimits

0xa968,	// (0x0001f281) aid_fill_nsta_2

0x1c09,	// (0x00016522) list_form2_midp_pane

0x2dce,	// (0x000176e7) midp_editing_number_pane_ParamLimits

0x2ddd,	// (0x000176f6) midp_ticker_pane_ParamLimits

0x3e20,	// (0x00018739) form2_midp_field_pane

0x3e44,	// (0x0001875d) scroll_pane_cp51

0x3e64,	// (0x0001877d) form2_midp_button_pane_ParamLimits

0x3e64,	// (0x0001877d) form2_midp_button_pane

0x3e76,	// (0x0001878f) form2_midp_content_pane_ParamLimits

0x3e76,	// (0x0001878f) form2_midp_content_pane

0x3e90,	// (0x000187a9) form2_midp_field_choice_group_pane

0x3e98,	// (0x000187b1) form2_midp_field_pane_g1

0x3ea0,	// (0x000187b9) form2_midp_field_pane_g2

0x3ea8,	// (0x000187c1) form2_midp_field_pane_g3

0x3eb0,	// (0x000187c9) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0002440b) form2_midp_field_pane_g

0x3eb8,	// (0x000187d1) form2_midp_gauge_slider_pane

0x3ec0,	// (0x000187d9) form2_midp_gauge_wait_pane

0x3ec8,	// (0x000187e1) form2_midp_image_pane_ParamLimits

0x3ec8,	// (0x000187e1) form2_midp_image_pane

0x3ee3,	// (0x000187fc) form2_midp_label_pane_ParamLimits

0x3ee3,	// (0x000187fc) form2_midp_label_pane

0xb50a,	// (0x0001fe23) form2_midp_label_pane_cp_ParamLimits

0xb50a,	// (0x0001fe23) form2_midp_label_pane_cp

0x3f23,	// (0x0001883c) form2_midp_string_pane_ParamLimits

0x3f23,	// (0x0001883c) form2_midp_string_pane

0xb52b,	// (0x0001fe44) form2_midp_text_pane_ParamLimits

0xb52b,	// (0x0001fe44) form2_midp_text_pane

0x3f56,	// (0x0001886f) form2_midp_time_pane

0x3f66,	// (0x0001887f) input_focus_pane_cp51_ParamLimits

0x3f66,	// (0x0001887f) input_focus_pane_cp51

0x3f7e,	// (0x00018897) form2_midp_label_pane_t1_ParamLimits

0x3f7e,	// (0x00018897) form2_midp_label_pane_t1

0xb54c,	// (0x0001fe65) form2_mdip_text_pane_t1_ParamLimits

0xb54c,	// (0x0001fe65) form2_mdip_text_pane_t1

0x3fe6,	// (0x000188ff) form2_midp_time_pane_t1

0x4001,	// (0x0001891a) form2_midp_gauge_slider_pane_t1

0xb56b,	// (0x0001fe84) form2_midp_gauge_slider_pane_t2

0xb57d,	// (0x0001fe96) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00024414) form2_midp_gauge_slider_pane_t

0x4037,	// (0x00018950) form2_midp_slider_pane

0x4043,	// (0x0001895c) form2_midp_gauge_wait_pane_t1

0x4051,	// (0x0001896a) form2_midp_wait_pane_ParamLimits

0x4051,	// (0x0001896a) form2_midp_wait_pane

0x18ff,	// (0x00016218) list_single_2graphic_pane_cp4_ParamLimits

0x18ff,	// (0x00016218) list_single_2graphic_pane_cp4

0x407c,	// (0x00018995) list_single_midp_graphic_pane_cp_ParamLimits

0x407c,	// (0x00018995) list_single_midp_graphic_pane_cp

0xb915,	// (0x0002022e) list_highlight_pane_cp20

0x40a0,	// (0x000189b9) list_single_2graphic_pane_g1_cp4

0x32c5,	// (0x00017bde) list_single_2graphic_pane_g2_cp4

0x40a8,	// (0x000189c1) list_single_2graphic_pane_t1_cp4

0xb97d,	// (0x00020296) list_highlight_pane_cp21

0x40b7,	// (0x000189d0) list_single_midp_graphic_pane_g4_cp

0x40c6,	// (0x000189df) list_single_midp_graphic_pane_t1_cp

0xb58f,	// (0x0001fea8) form2_mdip_string_pane_t1_ParamLimits

0xb58f,	// (0x0001fea8) form2_mdip_string_pane_t1

0xb915,	// (0x0002022e) bg_wml_button_pane_cp2

0xb90b,	// (0x00020224) form2_midp_image_pane_g1

0xd8f7,	// (0x00022210) list_double_large_graphic_pane_g5_ParamLimits

0xd8f7,	// (0x00022210) list_double_large_graphic_pane_g5

0x0ba9,	// (0x000154c2) midp_form_pane_ParamLimits

0xb97d,	// (0x00020296) main_apps_wheel_pane_ParamLimits

0xa65c,	// (0x0001ef75) popup_preview_window_ParamLimits

0xa65c,	// (0x0001ef75) popup_preview_window

0x1179,	// (0x00015a92) popup_touch_info_window_ParamLimits

0x1179,	// (0x00015a92) popup_touch_info_window

0x119b,	// (0x00015ab4) popup_touch_menu_window_ParamLimits

0x119b,	// (0x00015ab4) popup_touch_menu_window

0xb901,	// (0x0002021a) bg_popup_sub_pane_cp6

0x4180,	// (0x00018a99) list_touch_menu_pane

0x4188,	// (0x00018aa1) list_single_touch_menu_pane_ParamLimits

0x4188,	// (0x00018aa1) list_single_touch_menu_pane

0x41a0,	// (0x00018ab9) list_single_touch_menu_pane_t1

0xb97d,	// (0x00020296) bg_popup_sub_pane_cp7_ParamLimits

0xb97d,	// (0x00020296) bg_popup_sub_pane_cp7

0x41ae,	// (0x00018ac7) heading_sub_pane

0x41b6,	// (0x00018acf) list_touch_info_pane_ParamLimits

0x41b6,	// (0x00018acf) list_touch_info_pane

0x41c5,	// (0x00018ade) list_single_touch_info_pane_ParamLimits

0x41c5,	// (0x00018ade) list_single_touch_info_pane

0x41d7,	// (0x00018af0) list_single_touch_info_pane_t1

0x41e5,	// (0x00018afe) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00024422) list_single_touch_info_pane_t

0x0823,	// (0x0001513c) bg_popup_heading_pane_cp

0x41f3,	// (0x00018b0c) heading_sub_pane_t1

0x1846,	// (0x0001615f) bg_popup_preview_window_pane_cp_ParamLimits

0x1846,	// (0x0001615f) bg_popup_preview_window_pane_cp

0x41ae,	// (0x00018ac7) heading_preview_pane

0x41b6,	// (0x00018acf) list_preview_pane_ParamLimits

0x41b6,	// (0x00018acf) list_preview_pane

0x4201,	// (0x00018b1a) popup_preview_window_g1

0x41c5,	// (0x00018ade) list_single_preview_pane_ParamLimits

0x41c5,	// (0x00018ade) list_single_preview_pane

0x4209,	// (0x00018b22) list_single_preview_pane_g1

0x4211,	// (0x00018b2a) list_single_preview_pane_t1

0x41d7,	// (0x00018af0) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00024427) list_single_preview_pane_t

0x421f,	// (0x00018b38) bg_popup_heading_pane_cp2_ParamLimits

0x421f,	// (0x00018b38) bg_popup_heading_pane_cp2

0x4235,	// (0x00018b4e) heading_preview_pane_g1

0x423d,	// (0x00018b56) heading_preview_pane_t1_ParamLimits

0x423d,	// (0x00018b56) heading_preview_pane_t1

0xb9ea,	// (0x00020303) soft_indicator_pane_t1_ParamLimits

0xbf1f,	// (0x00020838) scroll_pane_ParamLimits

0xdf19,	// (0x00022832) scroll_sc2_left_pane

0xdf22,	// (0x0002283b) scroll_sc2_right_pane

0xdf41,	// (0x0002285a) scroll_bg_pane_g1_ParamLimits

0xdf56,	// (0x0002286f) scroll_bg_pane_g2_ParamLimits

0xdf6e,	// (0x00022887) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00023ff7) scroll_bg_pane_g_ParamLimits

0xdf41,	// (0x0002285a) scroll_handle_pane_g1_ParamLimits

0xdf90,	// (0x000228a9) scroll_handle_pane_g2_ParamLimits

0xdf6e,	// (0x00022887) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00023ffe) scroll_handle_pane_g_ParamLimits

0x0bd9,	// (0x000154f2) popup_choice_list_window_ParamLimits

0x0bd9,	// (0x000154f2) popup_choice_list_window

0x163c,	// (0x00015f55) choice_list_pane

0x16ec,	// (0x00016005) cell_toolbar_pane_t1

0x1714,	// (0x0001602d) toolbar_button_pane_ParamLimits

0x28a4,	// (0x000171bd) ai_gene_pane_1_t2_ParamLimits

0x28a4,	// (0x000171bd) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x00024221) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x00024221) ai_gene_pane_1_t

0x425a,	// (0x00018b73) scroll_sc2_left_pane_g1

0x425a,	// (0x00018b73) scroll_sc2_right_pane_g1

0x0ba9,	// (0x000154c2) bg_popup_sub_pane_cp10

0x4264,	// (0x00018b7d) list_choice_list_pane

0x427d,	// (0x00018b96) list_single_choice_list_pane_ParamLimits

0x427d,	// (0x00018b96) list_single_choice_list_pane

0x4295,	// (0x00018bae) list_single_choice_list_pane_g1

0xdbb8,	// (0x000224d1) list_single_choice_list_pane_t1_ParamLimits

0xdbb8,	// (0x000224d1) list_single_choice_list_pane_t1

0x429d,	// (0x00018bb6) choice_list_pane_g1

0x42a5,	// (0x00018bbe) choice_list_pane_t1

0xb901,	// (0x0002021a) input_focus_pane_cp11

0xdd86,	// (0x0002269f) title_pane_stacon_g2_ParamLimits

0xdd86,	// (0x0002269f) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00023fdd) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00023fdd) title_pane_stacon_g

0x0823,	// (0x0001513c) cursor_press_pane

0xa2d9,	// (0x0001ebf2) popup_fep_hwr_window_ParamLimits

0xa2d9,	// (0x0001ebf2) popup_fep_hwr_window

0x0d1d,	// (0x00015636) popup_fep_vkb_window_ParamLimits

0x0d1d,	// (0x00015636) popup_fep_vkb_window

0x42b3,	// (0x00018bcc) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x00024450) fep_vkb_side_pane_g_ParamLimits

0xeb6b,	// (0x00023484) fep_hwr_candidate_pane_ParamLimits

0xeb6b,	// (0x00023484) fep_hwr_candidate_pane

0xeb95,	// (0x000234ae) fep_hwr_side_pane_ParamLimits

0xeb95,	// (0x000234ae) fep_hwr_side_pane

0xebb7,	// (0x000234d0) fep_hwr_top_pane_ParamLimits

0xebb7,	// (0x000234d0) fep_hwr_top_pane

0xebcf,	// (0x000234e8) fep_hwr_write_pane_ParamLimits

0xebcf,	// (0x000234e8) fep_hwr_write_pane

0xfb37,	// (0x00024450) fep_vkb_side_pane_g

0x42bb,	// (0x00018bd4) fep_hwr_top_pane_g1

0x42cd,	// (0x00018be6) fep_hwr_top_pane_g2

0xec09,	// (0x00023522) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0002442c) fep_hwr_top_pane_g

0xec1e,	// (0x00023537) fep_hwr_top_text_pane

0xe08a,	// (0x000229a3) fep_hwr_top_text_pane_g1

0x4303,	// (0x00018c1c) fep_hwr_top_text_pane_t1

0xecad,	// (0x000235c6) fep_hwr_candidate_pane_g1

0x454e,	// (0x00018e67) fep_vkb_keypad_pane_g3_ParamLimits

0x454e,	// (0x00018e67) fep_vkb_keypad_pane_g3

0x457a,	// (0x00018e93) fep_vkb_keypad_pane_g4_ParamLimits

0x457a,	// (0x00018e93) fep_vkb_keypad_pane_g4

0x45f1,	// (0x00018f0a) fep_vkb_bottom_pane_g2_ParamLimits

0x45f1,	// (0x00018f0a) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x00024457) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x00024457) fep_vkb_bottom_pane_g

0x425a,	// (0x00018b73) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00024461) cell_vkb_side_pane_g

0x467c,	// (0x00018f95) cell_vkb_side_pane_t1

0x468a,	// (0x00018fa3) cell_vkb_side_pane_t1_copy1

0x425a,	// (0x00018b73) bg_fep_vkb_candidate_pane_g2

0x47ce,	// (0x000190e7) cell_vkb_candidate_pane_ParamLimits

0x4311,	// (0x00018c2a) aid_size_cell_vkb_ParamLimits

0x4311,	// (0x00018c2a) aid_size_cell_vkb

0x47ce,	// (0x000190e7) cell_vkb_candidate_pane

0xecd4,	// (0x000235ed) bg_popup_fep_shadow_pane_g1

0xb637,	// (0x0001ff50) fep_vkb_bottom_pane_ParamLimits

0xb637,	// (0x0001ff50) fep_vkb_bottom_pane

0x43e0,	// (0x00018cf9) fep_vkb_candidate_pane_ParamLimits

0x43e0,	// (0x00018cf9) fep_vkb_candidate_pane

0xb663,	// (0x0001ff7c) fep_vkb_keypad_pane_ParamLimits

0xb663,	// (0x0001ff7c) fep_vkb_keypad_pane

0xb68a,	// (0x0001ffa3) fep_vkb_side_pane_ParamLimits

0xb68a,	// (0x0001ffa3) fep_vkb_side_pane

0xb6c6,	// (0x0001ffdf) fep_vkb_top_pane_ParamLimits

0xb6c6,	// (0x0001ffdf) fep_vkb_top_pane

0x44a7,	// (0x00018dc0) fep_vkb_top_pane_g1_ParamLimits

0x44a7,	// (0x00018dc0) fep_vkb_top_pane_g1

0x44b6,	// (0x00018dcf) fep_vkb_top_pane_g2_ParamLimits

0x44b6,	// (0x00018dcf) fep_vkb_top_pane_g2

0x44c5,	// (0x00018dde) fep_vkb_top_pane_g3_ParamLimits

0x44c5,	// (0x00018dde) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00024447) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00024447) fep_vkb_top_pane_g

0x44e3,	// (0x00018dfc) fep_vkb_top_text_pane_ParamLimits

0x44e3,	// (0x00018dfc) fep_vkb_top_text_pane

0xb702,	// (0x0002001b) fep_vkb_side_pane_g1_ParamLimits

0xb702,	// (0x0002001b) fep_vkb_side_pane_g1

0x453d,	// (0x00018e56) grid_vkb_side_pane_ParamLimits

0x453d,	// (0x00018e56) grid_vkb_side_pane

0xecdc,	// (0x000235f5) bg_popup_fep_shadow_pane_g2

0xece5,	// (0x000235fe) bg_popup_fep_shadow_pane_g3

0xeced,	// (0x00023606) bg_popup_fep_shadow_pane_g4

0xecf6,	// (0x0002360f) bg_popup_fep_shadow_pane_g5

0xed00,	// (0x00023619) bg_popup_fep_shadow_pane_g6

0xed08,	// (0x00023621) bg_popup_fep_shadow_pane_g7

0xdaab,	// (0x000223c4) bg_popup_fep_shadow_pane_g8

0x459c,	// (0x00018eb5) grid_vkb_keypad_number_pane_ParamLimits

0x459c,	// (0x00018eb5) grid_vkb_keypad_number_pane

0x45b0,	// (0x00018ec9) grid_vkb_keypad_pane_ParamLimits

0x45b0,	// (0x00018ec9) grid_vkb_keypad_pane

0x45d6,	// (0x00018eef) fep_vkb_bottom_pane_g1_ParamLimits

0x45d6,	// (0x00018eef) fep_vkb_bottom_pane_g1

0x45ff,	// (0x00018f18) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x45ff,	// (0x00018f18) grid_vkb_keypad_bottom_left_pane

0x4614,	// (0x00018f2d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4614,	// (0x00018f2d) grid_vkb_keypad_bottom_right_pane

0x4629,	// (0x00018f42) fep_vkb_top_text_pane_g1

0xb749,	// (0x00020062) fep_vkb_top_text_pane_t1

0xb75b,	// (0x00020074) cell_vkb_side_pane_ParamLimits

0xb75b,	// (0x00020074) cell_vkb_side_pane

0x425a,	// (0x00018b73) cell_vkb_side_pane_g1

0x4698,	// (0x00018fb1) cell_vkb_keypad_pane_ParamLimits

0x4698,	// (0x00018fb1) cell_vkb_keypad_pane

0x4725,	// (0x0001903e) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00024474) bg_popup_fep_shadow_pane_g

0xed1a,	// (0x00023633) cell_hwr_side_pane_g1

0xed1a,	// (0x00023633) cell_hwr_side_pane_g2

0x472f,	// (0x00019048) cell_vkb_keypad_pane_t1

0xb771,	// (0x0002008a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb771,	// (0x0002008a) cell_vkb_keypad_bottom_left_pane

0xb786,	// (0x0002009f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb786,	// (0x0002009f) cell_vkb_keypad_bottom_right_pane

0x425a,	// (0x00018b73) cell_vkb_keypad_bottom_left_pane_g1

0x425a,	// (0x00018b73) cell_vkb_keypad_bottom_right_pane_g1

0x4793,	// (0x000190ac) cell_vkb_keypad_number_pane_ParamLimits

0x4793,	// (0x000190ac) cell_vkb_keypad_number_pane

0x47b2,	// (0x000190cb) cell_vkb_keypad_number_pane_g1

0x47bc,	// (0x000190d5) cell_vkb_keypad_number_pane_g2

0x47c5,	// (0x000190de) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x00024466) cell_vkb_keypad_number_pane_g

0x472f,	// (0x00019048) cell_vkb_keypad_number_pane_t1

0x47ef,	// (0x00019108) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x00024487) cell_hwr_side_pane_g

0x4808,	// (0x00019121) cell_hwr_side_pane_t1

0xed24,	// (0x0002363d) cell_hwr_side_pane_t1_copy1

0xed32,	// (0x0002364b) cell_hwr_candidate_pane_g1

0xed61,	// (0x0002367a) cell_hwr_candidate_pane_t1

0x425a,	// (0x00018b73) cell_vkb_candidate_pane_g2

0x484c,	// (0x00019165) cell_vkb_candidate_pane_t1

0xeb32,	// (0x0002344b) bg_popup_fep_shadow_pane_ParamLimits

0xeb32,	// (0x0002344b) bg_popup_fep_shadow_pane

0xebe9,	// (0x00023502) bg_fep_hwr_top_pane_g4

0x42df,	// (0x00018bf8) bg_hwr_side_pane_g1_ParamLimits

0x42df,	// (0x00018bf8) bg_hwr_side_pane_g1

0x8d28,	// (0x0001d641) cell_hwr_side_pane_ParamLimits

0x8d28,	// (0x0001d641) cell_hwr_side_pane

0xec33,	// (0x0002354c) fep_hwr_write_pane_g1_ParamLimits

0xec33,	// (0x0002354c) fep_hwr_write_pane_g1

0xec40,	// (0x00023559) fep_hwr_write_pane_g2_ParamLimits

0xec40,	// (0x00023559) fep_hwr_write_pane_g2

0xec4d,	// (0x00023566) fep_hwr_write_pane_g3_ParamLimits

0xec4d,	// (0x00023566) fep_hwr_write_pane_g3

0x8d48,	// (0x0001d661) fep_hwr_write_pane_g4_ParamLimits

0x8d48,	// (0x0001d661) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00024433) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00024433) fep_hwr_write_pane_g

0xebe9,	// (0x00023502) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xebe9,	// (0x00023502) bg_fep_hwr_candidate_pane_g2

0xec5b,	// (0x00023574) cell_hwr_candidate_pane_ParamLimits

0xec5b,	// (0x00023574) cell_hwr_candidate_pane

0xecad,	// (0x000235c6) fep_hwr_candidate_pane_g1_ParamLimits

0x433f,	// (0x00018c58) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x433f,	// (0x00018c58) bg_popup_fep_shadow_pane_cp2

0x44d5,	// (0x00018dee) fep_vkb_top_pane_g4_ParamLimits

0x44d5,	// (0x00018dee) fep_vkb_top_pane_g4

0x451b,	// (0x00018e34) fep_vkb_side_pane_g2_ParamLimits

0x451b,	// (0x00018e34) fep_vkb_side_pane_g2

0x9a45,	// (0x0001e35e) list_setting_pane_t4_ParamLimits

0x9a45,	// (0x0001e35e) list_setting_pane_t4

0x9ac1,	// (0x0001e3da) list_setting_number_pane_t5_ParamLimits

0x9ac1,	// (0x0001e3da) list_setting_number_pane_t5

0x9e23,	// (0x0001e73c) list_double_heading_pane_cp2_ParamLimits

0x9e23,	// (0x0001e73c) list_double_heading_pane_cp2

0x485a,	// (0x00019173) list_double_heading_pane_g1_cp2_ParamLimits

0x485a,	// (0x00019173) list_double_heading_pane_g1_cp2

0x4866,	// (0x0001917f) list_double_heading_pane_g2_cp2_ParamLimits

0x4866,	// (0x0001917f) list_double_heading_pane_g2_cp2

0x487a,	// (0x00019193) list_double_heading_pane_t1_cp2_ParamLimits

0x487a,	// (0x00019193) list_double_heading_pane_t1_cp2

0x4890,	// (0x000191a9) list_double_heading_pane_t2_cp2_ParamLimits

0x4890,	// (0x000191a9) list_double_heading_pane_t2_cp2

0xb8f9,	// (0x00020212) aid_value_unit2

0xd84e,	// (0x00022167) popup_preview_fixed_window

0xbaca,	// (0x000203e3) bg_popup_preview_window_pane_cp02

0x48a2,	// (0x000191bb) list_preview_fixed_pane

0x48e8,	// (0x00019201) list_empty_pane_fp_ParamLimits

0x48e8,	// (0x00019201) list_empty_pane_fp

0x48e8,	// (0x00019201) list_single_cale_day_pane_fp_ParamLimits

0x48e8,	// (0x00019201) list_single_cale_day_pane_fp

0x48e8,	// (0x00019201) list_single_graphic_heading_pane_fp_ParamLimits

0x48e8,	// (0x00019201) list_single_graphic_heading_pane_fp

0x48e8,	// (0x00019201) list_single_graphic_pane_fp_ParamLimits

0x48e8,	// (0x00019201) list_single_graphic_pane_fp

0x48e8,	// (0x00019201) list_single_heading_pane_fp_ParamLimits

0x48e8,	// (0x00019201) list_single_heading_pane_fp

0x48e8,	// (0x00019201) list_single_pane_fp_ParamLimits

0x48e8,	// (0x00019201) list_single_pane_fp

0x4901,	// (0x0001921a) list_single_pane_fp_g1_ParamLimits

0x4901,	// (0x0001921a) list_single_pane_fp_g1

0x485a,	// (0x00019173) list_single_pane_fp_g2_ParamLimits

0x485a,	// (0x00019173) list_single_pane_fp_g2

0x4866,	// (0x0001917f) list_single_pane_fp_g3_ParamLimits

0x4866,	// (0x0001917f) list_single_pane_fp_g3

0x490d,	// (0x00019226) list_single_pane_fp_g4_ParamLimits

0x490d,	// (0x00019226) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0002449a) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0002449a) list_single_pane_fp_g

0x4919,	// (0x00019232) list_single_pane_fp_t1_ParamLimits

0x4919,	// (0x00019232) list_single_pane_fp_t1

0x4930,	// (0x00019249) list_single_graphic_pane_fp_g1_ParamLimits

0x4930,	// (0x00019249) list_single_graphic_pane_fp_g1

0x4901,	// (0x0001921a) list_single_graphic_pane_fp_g2_ParamLimits

0x4901,	// (0x0001921a) list_single_graphic_pane_fp_g2

0x485a,	// (0x00019173) list_single_graphic_pane_fp_g3_ParamLimits

0x485a,	// (0x00019173) list_single_graphic_pane_fp_g3

0x4866,	// (0x0001917f) list_single_graphic_pane_fp_g4_ParamLimits

0x4866,	// (0x0001917f) list_single_graphic_pane_fp_g4

0x490d,	// (0x00019226) list_single_graphic_pane_fp_g5_ParamLimits

0x490d,	// (0x00019226) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x000244a3) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x000244a3) list_single_graphic_pane_fp_g

0x493c,	// (0x00019255) list_single_graphic_pane_fp_t1_ParamLimits

0x493c,	// (0x00019255) list_single_graphic_pane_fp_t1

0x4930,	// (0x00019249) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4930,	// (0x00019249) list_single_graphic_heading_pane_fp_g1

0x4901,	// (0x0001921a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4901,	// (0x0001921a) list_single_graphic_heading_pane_fp_g2

0x485a,	// (0x00019173) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x485a,	// (0x00019173) list_single_graphic_heading_pane_fp_g3

0x4866,	// (0x0001917f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4866,	// (0x0001917f) list_single_graphic_heading_pane_fp_g4

0x490d,	// (0x00019226) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x490d,	// (0x00019226) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x000244a3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x000244a3) list_single_graphic_heading_pane_fp_g

0x4952,	// (0x0001926b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4952,	// (0x0001926b) list_single_graphic_heading_pane_fp_t1

0x4968,	// (0x00019281) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4968,	// (0x00019281) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x000244ae) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x000244ae) list_single_graphic_heading_pane_fp_t

0x497a,	// (0x00019293) list_single_cale_day_pane_fp_g1_ParamLimits

0x497a,	// (0x00019293) list_single_cale_day_pane_fp_g1

0x49b2,	// (0x000192cb) list_single_cale_day_pane_fp_g2_ParamLimits

0x49b2,	// (0x000192cb) list_single_cale_day_pane_fp_g2

0x49be,	// (0x000192d7) list_single_cale_day_pane_fp_g3_ParamLimits

0x49be,	// (0x000192d7) list_single_cale_day_pane_fp_g3

0x49e6,	// (0x000192ff) list_single_cale_day_pane_fp_g4_ParamLimits

0x49e6,	// (0x000192ff) list_single_cale_day_pane_fp_g4

0x4a0a,	// (0x00019323) list_single_cale_day_pane_fp_g5_ParamLimits

0x4a0a,	// (0x00019323) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x000244b3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x000244b3) list_single_cale_day_pane_fp_g

0x4a2e,	// (0x00019347) list_single_cale_day_pane_fp_t1_ParamLimits

0x4a2e,	// (0x00019347) list_single_cale_day_pane_fp_t1

0x4a54,	// (0x0001936d) list_single_cale_day_pane_fp_t2_ParamLimits

0x4a54,	// (0x0001936d) list_single_cale_day_pane_fp_t2

0x4a6d,	// (0x00019386) list_single_cale_day_pane_fp_t3_ParamLimits

0x4a6d,	// (0x00019386) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x000244be) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x000244be) list_single_cale_day_pane_fp_t

0x4901,	// (0x0001921a) list_empty_pane_fp_g1_ParamLimits

0x4901,	// (0x0001921a) list_empty_pane_fp_g1

0x4a86,	// (0x0001939f) list_empty_pane_fp_t1

0x4a94,	// (0x000193ad) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x000244c5) list_empty_pane_fp_t

0x4901,	// (0x0001921a) list_single_heading_pane_fp_g1_ParamLimits

0x4901,	// (0x0001921a) list_single_heading_pane_fp_g1

0x485a,	// (0x00019173) list_single_heading_pane_fp_g2_ParamLimits

0x485a,	// (0x00019173) list_single_heading_pane_fp_g2

0x4866,	// (0x0001917f) list_single_heading_pane_fp_g3_ParamLimits

0x4866,	// (0x0001917f) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x000244ca) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x000244ca) list_single_heading_pane_fp_g

0x4aa2,	// (0x000193bb) list_single_heading_pane_fp_t1_ParamLimits

0x4aa2,	// (0x000193bb) list_single_heading_pane_fp_t1

0x4ab4,	// (0x000193cd) list_single_heading_pane_fp_t2_ParamLimits

0x4ab4,	// (0x000193cd) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x000244d1) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x000244d1) list_single_heading_pane_fp_t

0xdbcd,	// (0x000224e6) aid_size_cell_fast

0xbaad,	// (0x000203c6) soft_indicator_pane_cp1_t1

0xdc0a,	// (0x00022523) cell_app_pane_cp2_ParamLimits

0xdc0a,	// (0x00022523) cell_app_pane_cp2

0xeb54,	// (0x0002346d) fep_hwr_candidate_drop_down_list_pane

0xecc7,	// (0x000235e0) fep_hwr_candidate_pane_g3_ParamLimits

0xecc7,	// (0x000235e0) fep_hwr_candidate_pane_g3

0xbf53,	// (0x0002086c) fep_hwr_candidate_pane_g4_ParamLimits

0xbf53,	// (0x0002086c) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x00024440) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x00024440) fep_hwr_candidate_pane_g

0x43cf,	// (0x00018ce8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x43cf,	// (0x00018ce8) fep_vkb_candidate_drop_down_list_pane

0x47f7,	// (0x00019110) fep_vkb_candidate_pane_g3

0x47ff,	// (0x00019118) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0002446d) fep_vkb_candidate_pane_g

0xed32,	// (0x0002364b) cell_hwr_candidate_pane_g1_ParamLimits

0xed40,	// (0x00023659) cell_hwr_candidate_pane_g3_ParamLimits

0xed40,	// (0x00023659) cell_hwr_candidate_pane_g3

0x5657,	// (0x00019f70) cell_hwr_candidate_pane_g4_ParamLimits

0x5657,	// (0x00019f70) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0002448c) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0002448c) cell_hwr_candidate_pane_g

0x4816,	// (0x0001912f) cell_vkb_candidate_pane_g3_ParamLimits

0x4816,	// (0x0001912f) cell_vkb_candidate_pane_g3

0x4831,	// (0x0001914a) cell_vkb_candidate_pane_g4_ParamLimits

0x4831,	// (0x0001914a) cell_vkb_candidate_pane_g4

0x4aca,	// (0x000193e3) cell_app_pane_cp2_g1_ParamLimits

0x4aca,	// (0x000193e3) cell_app_pane_cp2_g1

0x4ae8,	// (0x00019401) cell_app_pane_cp2_g2_ParamLimits

0x4ae8,	// (0x00019401) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x000244d6) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x000244d6) cell_app_pane_cp2_g

0x4af4,	// (0x0001940d) cell_app_pane_cp2_t1_ParamLimits

0x4af4,	// (0x0001940d) cell_app_pane_cp2_t1

0xd9ca,	// (0x000222e3) grid_highlight_pane_cp1_ParamLimits

0xd9ca,	// (0x000222e3) grid_highlight_pane_cp1

0xed7f,	// (0x00023698) cell_hwr_candidate_pane_cp1_ParamLimits

0xed7f,	// (0x00023698) cell_hwr_candidate_pane_cp1

0xed32,	// (0x0002364b) fep_hwr_candidate_drop_down_list_pane_g1

0xeda3,	// (0x000236bc) fep_hwr_candidate_drop_down_list_pane_g2

0xedb0,	// (0x000236c9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x000244db) fep_hwr_candidate_drop_down_list_pane_g

0xedbd,	// (0x000236d6) fep_hwr_candidate_drop_down_list_scroll_pane

0xedc6,	// (0x000236df) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xedc6,	// (0x000236df) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xedd3,	// (0x000236ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xedd3,	// (0x000236ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xede0,	// (0x000236f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xede0,	// (0x000236f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeded,	// (0x00023706) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeded,	// (0x00023706) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xee08,	// (0x00023721) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xee08,	// (0x00023721) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xee23,	// (0x0002373c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xee23,	// (0x0002373c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xee3e,	// (0x00023757) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee3e,	// (0x00023757) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xee59,	// (0x00023772) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee59,	// (0x00023772) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x000244e2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x000244e2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4b06,	// (0x0001941f) cell_vkb_candidate_pane_cp1_ParamLimits

0x4b06,	// (0x0001941f) cell_vkb_candidate_pane_cp1

0x44d5,	// (0x00018dee) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x44d5,	// (0x00018dee) fep_vkb_candidate_drop_down_list_pane_g1

0x4b2c,	// (0x00019445) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4b2c,	// (0x00019445) fep_vkb_candidate_drop_down_list_pane_g2

0x4b39,	// (0x00019452) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4b39,	// (0x00019452) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x000244f3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x000244f3) fep_vkb_candidate_drop_down_list_pane_g

0x4b46,	// (0x0001945f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4b46,	// (0x0001945f) fep_vkb_candidate_drop_down_list_scroll_pane

0x4b53,	// (0x0001946c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4b53,	// (0x0001946c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4b60,	// (0x00019479) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4b60,	// (0x00019479) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4b6c,	// (0x00019485) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4b6c,	// (0x00019485) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4b78,	// (0x00019491) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4b78,	// (0x00019491) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4b99,	// (0x000194b2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4b99,	// (0x000194b2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4bba,	// (0x000194d3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4bba,	// (0x000194d3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4bdb,	// (0x000194f4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4bdb,	// (0x000194f4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4bfc,	// (0x00019515) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4bfc,	// (0x00019515) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x000244fa) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x000244fa) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x934b,	// (0x0001dc64) title_pane_g1_ParamLimits

0x935e,	// (0x0001dc77) title_pane_g2_ParamLimits

0xf54e,	// (0x00023e67) title_pane_g_ParamLimits

0xe07a,	// (0x00022993) aid_call2_pane

0xe082,	// (0x0002299b) aid_call_pane

0xe08a,	// (0x000229a3) popup_clock_analogue_window_g1

0xe08a,	// (0x000229a3) popup_clock_analogue_window_g2

0xe4c8,	// (0x00022de1) popup_clock_analogue_window_g3

0xe4d1,	// (0x00022dea) popup_clock_analogue_window_g4

0xb90b,	// (0x00020224) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002400c) popup_clock_analogue_window_g

0xe4d9,	// (0x00022df2) popup_clock_analogue_window_t1

0xe4e7,	// (0x00022e00) clock_digital_number_pane_ParamLimits

0xe4e7,	// (0x00022e00) clock_digital_number_pane

0xe4f3,	// (0x00022e0c) clock_digital_number_pane_cp02_ParamLimits

0xe4f3,	// (0x00022e0c) clock_digital_number_pane_cp02

0xe4ff,	// (0x00022e18) clock_digital_number_pane_cp03_ParamLimits

0xe4ff,	// (0x00022e18) clock_digital_number_pane_cp03

0xe50b,	// (0x00022e24) clock_digital_number_pane_cp04_ParamLimits

0xe50b,	// (0x00022e24) clock_digital_number_pane_cp04

0xe517,	// (0x00022e30) clock_digital_separator_pane_ParamLimits

0xe517,	// (0x00022e30) clock_digital_separator_pane

0xe523,	// (0x00022e3c) popup_clock_digital_window_t1_ParamLimits

0xe523,	// (0x00022e3c) popup_clock_digital_window_t1

0xb90b,	// (0x00020224) clock_digital_number_pane_g1

0xb90b,	// (0x00020224) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00024017) clock_digital_number_pane_g

0xb90b,	// (0x00020224) clock_digital_separator_pane_g1

0xb90b,	// (0x00020224) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00024017) clock_digital_separator_pane_g

0xa944,	// (0x0001f25d) aid_fill_nsta_ParamLimits

0xaa7c,	// (0x0001f395) indicator_nsta_pane_ParamLimits

0x14c9,	// (0x00015de2) popup_clock_analogue_window

0x14c9,	// (0x00015de2) popup_clock_digital_window

0xe43a,	// (0x00022d53) grid_indicator_nsta_pane_ParamLimits

0x3c37,	// (0x00018550) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x000243c0) clock_nsta_pane_t

0xe495,	// (0x00022dae) aid_size_max_handle

0x89cd,	// (0x0001d2e6) aid_size_min_handle

0x0823,	// (0x0001513c) editor_scroll_pane

0x4c17,	// (0x00019530) ex_editor_pane

0xdb93,	// (0x000224ac) scroll_pane_cp13

0xbf4b,	// (0x00020864) scroll_pane_cp14

0xe0b9,	// (0x000229d2) scroll_pane_cp36

0x9e36,	// (0x0001e74f) list_single_graphic_hl_pane_cp2_ParamLimits

0x9e36,	// (0x0001e74f) list_single_graphic_hl_pane_cp2

0xb2a4,	// (0x0001fbbd) list_single_graphic_hl_pane_ParamLimits

0xb2a4,	// (0x0001fbbd) list_single_graphic_hl_pane

0x4c1f,	// (0x00019538) aid_size_min_hl_cp1

0x4c28,	// (0x00019541) list_highlight_pane_cp34_ParamLimits

0x4c28,	// (0x00019541) list_highlight_pane_cp34

0x4c39,	// (0x00019552) list_single_graphic_hl_pane_g1_ParamLimits

0x4c39,	// (0x00019552) list_single_graphic_hl_pane_g1

0xbf60,	// (0x00020879) list_single_graphic_hl_pane_g2_ParamLimits

0xbf60,	// (0x00020879) list_single_graphic_hl_pane_g2

0xbf60,	// (0x00020879) list_single_graphic_hl_pane_g3_ParamLimits

0xbf60,	// (0x00020879) list_single_graphic_hl_pane_g3

0xbf6c,	// (0x00020885) list_single_graphic_hl_pane_g4_ParamLimits

0xbf6c,	// (0x00020885) list_single_graphic_hl_pane_g4

0x4cac,	// (0x000195c5) list_single_graphic_hl_pane_g5_ParamLimits

0x4cac,	// (0x000195c5) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0002450b) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0002450b) list_single_graphic_hl_pane_g

0xb7a1,	// (0x000200ba) list_single_graphic_hl_pane_t1_ParamLimits

0xb7a1,	// (0x000200ba) list_single_graphic_hl_pane_t1

0x4c7c,	// (0x00019595) aid_size_min_hl_cp2

0x4c85,	// (0x0001959e) list_highlight_pane_cp34_cp2_ParamLimits

0x4c85,	// (0x0001959e) list_highlight_pane_cp34_cp2

0x4c39,	// (0x00019552) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4c39,	// (0x00019552) list_single_graphic_hl_pane_g1_cp2

0x4c92,	// (0x000195ab) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4c92,	// (0x000195ab) list_single_graphic_hl_pane_g2_cp2

0xb7b7,	// (0x000200d0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb7b7,	// (0x000200d0) list_single_graphic_hl_pane_g3_cp2

0xbf6c,	// (0x00020885) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf6c,	// (0x00020885) list_single_graphic_hl_pane_g4_cp2

0x4cac,	// (0x000195c5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4cac,	// (0x000195c5) list_single_graphic_hl_pane_g5_cp2

0x8a24,	// (0x0001d33d) control_pane_g4_ParamLimits

0x8a24,	// (0x0001d33d) control_pane_g4

0x0ba9,	// (0x000154c2) bg_popup_sub_pane_cp10_ParamLimits

0x4264,	// (0x00018b7d) list_choice_list_pane_ParamLimits

0x4273,	// (0x00018b8c) scroll_pane_cp23

0xbaca,	// (0x000203e3) bg_popup_preview_window_pane_cp02_ParamLimits

0x48a2,	// (0x000191bb) list_preview_fixed_pane_ParamLimits

0x48b8,	// (0x000191d1) list_preview_fixed_pane_cp_ParamLimits

0x48b8,	// (0x000191d1) list_preview_fixed_pane_cp

0x48c4,	// (0x000191dd) popup_preview_fixed_window_g1_ParamLimits

0x48c4,	// (0x000191dd) popup_preview_fixed_window_g1

0x48d0,	// (0x000191e9) popup_preview_fixed_window_g2_ParamLimits

0x48d0,	// (0x000191e9) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00024493) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00024493) popup_preview_fixed_window_g

0xde6b,	// (0x00022784) aid_navi_side_left_pane_ParamLimits

0xde80,	// (0x00022799) aid_navi_side_right_pane_ParamLimits

0xde98,	// (0x000227b1) navi_icon_pane_stacon_ParamLimits

0xe448,	// (0x00022d61) navi_navi_pane_stacon_ParamLimits

0xde98,	// (0x000227b1) navi_text_pane_stacon_ParamLimits

0xb901,	// (0x0002021a) main_text_info_pane

0x4cd6,	// (0x000195ef) listscroll_text_info_pane

0x4cde,	// (0x000195f7) list_text_info_pane_ParamLimits

0x4cde,	// (0x000195f7) list_text_info_pane

0x4ced,	// (0x00019606) scroll_pane_cp24_ParamLimits

0x4ced,	// (0x00019606) scroll_pane_cp24

0xb7c5,	// (0x000200de) list_text_info_pane_t1_ParamLimits

0xb7c5,	// (0x000200de) list_text_info_pane_t1

0xa23d,	// (0x0001eb56) popup_fast_swap2_window_ParamLimits

0xa23d,	// (0x0001eb56) popup_fast_swap2_window

0x4d30,	// (0x00019649) aid_size_cell_fast2

0xb901,	// (0x0002021a) bg_popup_window_pane_cp17

0x1c35,	// (0x0001654e) heading_pane_cp2

0xbcd0,	// (0x000205e9) listscroll_fast2_pane

0x4d3a,	// (0x00019653) grid_fast2_pane

0x4d44,	// (0x0001965d) listscroll_fast2_pane_g1

0x4d4e,	// (0x00019667) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00024516) listscroll_fast2_pane_g

0xdb93,	// (0x000224ac) scroll_pane_cp26

0x4d58,	// (0x00019671) cell_fast2_pane_ParamLimits

0x4d58,	// (0x00019671) cell_fast2_pane

0x4d6f,	// (0x00019688) cell_fast2_pane_g1

0x4d78,	// (0x00019691) cell_fast2_pane_g2

0x4d81,	// (0x0001969a) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0002451b) cell_fast2_pane_g

0xbd12,	// (0x0002062b) grid_highlight_pane_cp9

0xbd27,	// (0x00020640) main_eswt_pane_ParamLimits

0xbd27,	// (0x00020640) main_eswt_pane

0x4d02,	// (0x0001961b) list_single_text_info_pane

0x4d89,	// (0x000196a2) eswt_ctrl_button_pane

0x4d89,	// (0x000196a2) eswt_ctrl_canvas_pane

0x4d91,	// (0x000196aa) eswt_ctrl_combo_pane

0x4d89,	// (0x000196a2) eswt_ctrl_default_pane

0x4d89,	// (0x000196a2) eswt_ctrl_label_pane

0x4d99,	// (0x000196b2) eswt_ctrl_wait_pane

0x4da1,	// (0x000196ba) eswt_shell_pane

0xb901,	// (0x0002021a) listscroll_eswt_app_pane

0x4dc1,	// (0x000196da) popup_eswt_tasktip_window_ParamLimits

0x4dc1,	// (0x000196da) popup_eswt_tasktip_window

0x1846,	// (0x0001615f) bg_popup_window_pane_cp18

0x4dd2,	// (0x000196eb) eswt_control_pane_g1_ParamLimits

0x4dd2,	// (0x000196eb) eswt_control_pane_g1

0x4ddf,	// (0x000196f8) eswt_control_pane_g2_ParamLimits

0x4ddf,	// (0x000196f8) eswt_control_pane_g2

0x4dec,	// (0x00019705) eswt_control_pane_g3_ParamLimits

0x4dec,	// (0x00019705) eswt_control_pane_g3

0x4df9,	// (0x00019712) eswt_control_pane_g4_ParamLimits

0x4df9,	// (0x00019712) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x00024522) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x00024522) eswt_control_pane_g

0xd9ca,	// (0x000222e3) bg_button_pane_ParamLimits

0xd9ca,	// (0x000222e3) bg_button_pane

0xbd27,	// (0x00020640) common_borders_pane_copy2_ParamLimits

0xbd27,	// (0x00020640) common_borders_pane_copy2

0x4e06,	// (0x0001971f) control_button_pane_g1_ParamLimits

0x4e06,	// (0x0001971f) control_button_pane_g1

0x4e12,	// (0x0001972b) control_button_pane_g2_ParamLimits

0x4e12,	// (0x0001972b) control_button_pane_g2

0x4e1e,	// (0x00019737) control_button_pane_g3_ParamLimits

0x4e1e,	// (0x00019737) control_button_pane_g3

0x0002,

0xfc12,	// (0x0002452b) control_button_pane_g_ParamLimits

0xfc12,	// (0x0002452b) control_button_pane_g

0x4e32,	// (0x0001974b) control_button_pane_t1

0x4e40,	// (0x00019759) control_button_pane_t2

0x0001,

0xfc19,	// (0x00024532) control_button_pane_t

0x1720,	// (0x00016039) bg_button_pane_g1

0x1730,	// (0x00016049) bg_button_pane_g2

0x1728,	// (0x00016041) bg_button_pane_g3

0x1740,	// (0x00016059) bg_button_pane_g4

0x1738,	// (0x00016051) bg_button_pane_g5

0x1748,	// (0x00016061) bg_button_pane_g6

0x1750,	// (0x00016069) bg_button_pane_g7

0x1760,	// (0x00016079) bg_button_pane_g8

0x1758,	// (0x00016071) bg_button_pane_g9

0x0008,

0xf85c,	// (0x00024175) bg_button_pane_g

0x421f,	// (0x00018b38) common_borders_pane_ParamLimits

0x421f,	// (0x00018b38) common_borders_pane

0x4dd2,	// (0x000196eb) eswt_control_pane_g1_copy1_ParamLimits

0x4dd2,	// (0x000196eb) eswt_control_pane_g1_copy1

0x4ddf,	// (0x000196f8) eswt_control_pane_g2_copy1_ParamLimits

0x4ddf,	// (0x000196f8) eswt_control_pane_g2_copy1

0x4dec,	// (0x00019705) eswt_control_pane_g3_copy1_ParamLimits

0x4dec,	// (0x00019705) eswt_control_pane_g3_copy1

0x4df9,	// (0x00019712) eswt_control_pane_g4_copy1_ParamLimits

0x4df9,	// (0x00019712) eswt_control_pane_g4_copy1

0x425a,	// (0x00018b73) bg_eswt_ctrl_canvas_pane_g1

0x421f,	// (0x00018b38) common_borders_pane_cp2_ParamLimits

0x421f,	// (0x00018b38) common_borders_pane_cp2

0x421f,	// (0x00018b38) common_borders_pane_cp3_ParamLimits

0x421f,	// (0x00018b38) common_borders_pane_cp3

0x4e4e,	// (0x00019767) separator_horizontal_pane

0x4e56,	// (0x0001976f) separator_vertical_pane

0x4dd2,	// (0x000196eb) eswt_control_pane_g1_copy2_ParamLimits

0x4dd2,	// (0x000196eb) eswt_control_pane_g1_copy2

0x4ddf,	// (0x000196f8) eswt_control_pane_g2_copy2_ParamLimits

0x4ddf,	// (0x000196f8) eswt_control_pane_g2_copy2

0x4dec,	// (0x00019705) eswt_control_pane_g3_copy2_ParamLimits

0x4dec,	// (0x00019705) eswt_control_pane_g3_copy2

0x4df9,	// (0x00019712) eswt_control_pane_g4_copy2_ParamLimits

0x4df9,	// (0x00019712) eswt_control_pane_g4_copy2

0xb901,	// (0x0002021a) common_borders_pane_cp4

0x4e5f,	// (0x00019778) separator_horizontal_pane_g1

0x4e68,	// (0x00019781) separator_horizontal_pane_g2

0x4e71,	// (0x0001978a) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x00024537) separator_horizontal_pane_g

0x4dd2,	// (0x000196eb) eswt_control_pane_g1_copy3_ParamLimits

0x4dd2,	// (0x000196eb) eswt_control_pane_g1_copy3

0x4ddf,	// (0x000196f8) eswt_control_pane_g2_copy3_ParamLimits

0x4ddf,	// (0x000196f8) eswt_control_pane_g2_copy3

0x4dec,	// (0x00019705) eswt_control_pane_g3_copy3_ParamLimits

0x4dec,	// (0x00019705) eswt_control_pane_g3_copy3

0x4df9,	// (0x00019712) eswt_control_pane_g4_copy3_ParamLimits

0x4df9,	// (0x00019712) eswt_control_pane_g4_copy3

0xb901,	// (0x0002021a) common_borders_pane_cp5

0x4e7a,	// (0x00019793) separator_vertical_pane_g1

0x4e83,	// (0x0001979c) separator_vertical_pane_g2

0x4e8c,	// (0x000197a5) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x0002453e) separator_vertical_pane_g

0x4dd2,	// (0x000196eb) eswt_control_pane_g1_copy4_ParamLimits

0x4dd2,	// (0x000196eb) eswt_control_pane_g1_copy4

0x4ddf,	// (0x000196f8) eswt_control_pane_g2_copy4_ParamLimits

0x4ddf,	// (0x000196f8) eswt_control_pane_g2_copy4

0x4dec,	// (0x00019705) eswt_control_pane_g3_copy4_ParamLimits

0x4dec,	// (0x00019705) eswt_control_pane_g3_copy4

0x4df9,	// (0x00019712) eswt_control_pane_g4_copy4_ParamLimits

0x4df9,	// (0x00019712) eswt_control_pane_g4_copy4

0xb7e7,	// (0x00020100) eswt_ctrl_combo_button_pane

0xb7ef,	// (0x00020108) eswt_ctrl_input_pane

0xb7f7,	// (0x00020110) popup_choice_list_window_cp70

0xb7ff,	// (0x00020118) eswt_ctrl_input_pane_t1

0xb901,	// (0x0002021a) input_focus_pane_cp70

0x421f,	// (0x00018b38) bg_button_pane_cp70_ParamLimits

0x421f,	// (0x00018b38) bg_button_pane_cp70

0xb80d,	// (0x00020126) eswt_ctrl_combo_button_pane_g1

0x4ec3,	// (0x000197dc) wait_bar_pane_cp70

0x1846,	// (0x0001615f) bg_popup_window_pane_cp70_ParamLimits

0x1846,	// (0x0001615f) bg_popup_window_pane_cp70

0x4ecb,	// (0x000197e4) popup_eswt_tasktip_window_t1

0x4ee1,	// (0x000197fa) wait_bar_pane_cp71_ParamLimits

0x4ee1,	// (0x000197fa) wait_bar_pane_cp71

0x4eed,	// (0x00019806) grid_eswt_app_pane

0xdf19,	// (0x00022832) scroll_pane_cp70

0xb815,	// (0x0002012e) cell_eswt_app_pane_ParamLimits

0xb815,	// (0x0002012e) cell_eswt_app_pane

0xb847,	// (0x00020160) cell_eswt_app_pane_g1_ParamLimits

0xb847,	// (0x00020160) cell_eswt_app_pane_g1

0xb876,	// (0x0002018f) cell_eswt_app_pane_g2_ParamLimits

0xb876,	// (0x0002018f) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x00024545) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x00024545) cell_eswt_app_pane_g

0xb89f,	// (0x000201b8) cell_eswt_app_pane_t1_ParamLimits

0xb89f,	// (0x000201b8) cell_eswt_app_pane_t1

0x4fb2,	// (0x000198cb) grid_highlight_pane_cp70_ParamLimits

0x4fb2,	// (0x000198cb) grid_highlight_pane_cp70

0xe3f2,	// (0x00022d0b) set_content_pane_g1

0xa19e,	// (0x0001eab7) status_small_volume_pane

0xee74,	// (0x0002378d) status_small_volume_pane_g1

0xee7c,	// (0x00023795) volume_small2_pane

0xee85,	// (0x0002379e) volume_small2_pane_g1

0xee8e,	// (0x000237a7) volume_small2_pane_g2

0xee97,	// (0x000237b0) volume_small2_pane_g3

0xeea0,	// (0x000237b9) volume_small2_pane_g4

0xeea9,	// (0x000237c2) volume_small2_pane_g5

0xeeb2,	// (0x000237cb) volume_small2_pane_g6

0xeebb,	// (0x000237d4) volume_small2_pane_g7

0xeec4,	// (0x000237dd) volume_small2_pane_g8

0xeecd,	// (0x000237e6) volume_small2_pane_g9

0xeed6,	// (0x000237ef) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x0002454a) volume_small2_pane_g

0x4629,	// (0x00018f42) fep_vkb_top_text_pane_g1_ParamLimits

0xb749,	// (0x00020062) fep_vkb_top_text_pane_t1_ParamLimits

0x48dc,	// (0x000191f5) popup_preview_fixed_window_g3_ParamLimits

0x48dc,	// (0x000191f5) popup_preview_fixed_window_g3

0xa8d7,	// (0x0001f1f0) popup_toolbar_trans_pane

0xb0c3,	// (0x0001f9dc) aid_height_set_list_ParamLimits

0x2bf2,	// (0x0001750b) aid_size_parent_ParamLimits

0x0ba9,	// (0x000154c2) list_highlight_pane_cp2_ParamLimits

0xe3f2,	// (0x00022d0b) set_content_pane_g1_ParamLimits

0xb2b8,	// (0x0001fbd1) list_single_image_pane_ParamLimits

0xb2b8,	// (0x0001fbd1) list_single_image_pane

0xbf78,	// (0x00020891) aid_size_cell_image_ParamLimits

0xbf78,	// (0x00020891) aid_size_cell_image

0xbf85,	// (0x0002089e) grid_single_image_pane_ParamLimits

0xbf85,	// (0x0002089e) grid_single_image_pane

0xd9f5,	// (0x0002230e) list_single_image_pane_g1_ParamLimits

0xd9f5,	// (0x0002230e) list_single_image_pane_g1

0xda01,	// (0x0002231a) list_single_image_pane_g2_ParamLimits

0xda01,	// (0x0002231a) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x0002455f) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x0002455f) list_single_image_pane_g

0x4fd9,	// (0x000198f2) list_single_image_pane_t1_ParamLimits

0x4fd9,	// (0x000198f2) list_single_image_pane_t1

0xbf93,	// (0x000208ac) cell_image_list_pane_ParamLimits

0xbf93,	// (0x000208ac) cell_image_list_pane

0xbfa7,	// (0x000208c0) cell_image_list_pane_g1

0xbfb0,	// (0x000208c9) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x00024564) cell_image_list_pane_g

0x5017,	// (0x00019930) aid_size_cell_tb_trans_pane

0xd9ca,	// (0x000222e3) bg_tb_trans_pane

0x5029,	// (0x00019942) grid_tb_trans_pane

0x1720,	// (0x00016039) bg_tb_trans_pane_g1

0x1730,	// (0x00016049) bg_tb_trans_pane_g2

0x1728,	// (0x00016041) bg_tb_trans_pane_g3

0x1740,	// (0x00016059) bg_tb_trans_pane_g4

0x1738,	// (0x00016051) bg_tb_trans_pane_g5

0x1760,	// (0x00016079) bg_tb_trans_pane_g6

0x1758,	// (0x00016071) bg_tb_trans_pane_g7

0x1748,	// (0x00016061) bg_tb_trans_pane_g8

0x1750,	// (0x00016069) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x00024569) bg_tb_trans_pane_g

0x503d,	// (0x00019956) cell_toolbar_trans_pane_ParamLimits

0x503d,	// (0x00019956) cell_toolbar_trans_pane

0x425a,	// (0x00018b73) cell_toolbar_trans_pane_g1

0xb4ee,	// (0x0001fe07) list_form2_midp_pane_t1

0xb4fc,	// (0x0001fe15) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00024406) list_form2_midp_pane_t

0x3e44,	// (0x0001875d) scroll_pane_cp51_ParamLimits

0x4061,	// (0x0001897a) form2_midp_wait_pane_g1

0x406a,	// (0x00018983) form2_midp_wait_pane_g2

0x4073,	// (0x0001898c) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0002441b) form2_midp_wait_pane_g

0xb97d,	// (0x00020296) list_highlight_pane_cp21_ParamLimits

0x40b7,	// (0x000189d0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x40c6,	// (0x000189df) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2e13,	// (0x0001772c) list_single_2graphic_im_pane_ParamLimits

0x2e13,	// (0x0001772c) list_single_2graphic_im_pane

0xbfb9,	// (0x000208d2) list_single_2graphic_im_pane_g1_ParamLimits

0xbfb9,	// (0x000208d2) list_single_2graphic_im_pane_g1

0xbfca,	// (0x000208e3) list_single_2graphic_im_pane_g2_ParamLimits

0xbfca,	// (0x000208e3) list_single_2graphic_im_pane_g2

0xbfd6,	// (0x000208ef) list_single_2graphic_im_pane_g3_ParamLimits

0xbfd6,	// (0x000208ef) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x0002457c) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x0002457c) list_single_2graphic_im_pane_g

0xbfea,	// (0x00020903) list_single_2graphic_im_pane_t1_ParamLimits

0xbfea,	// (0x00020903) list_single_2graphic_im_pane_t1

0x48e8,	// (0x00019201) list_single_graphic_2heading_pane_fp_ParamLimits

0x48e8,	// (0x00019201) list_single_graphic_2heading_pane_fp

0x4930,	// (0x00019249) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4930,	// (0x00019249) list_single_graphic_2heading_pane_fp_g1

0x4901,	// (0x0001921a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4901,	// (0x0001921a) list_single_graphic_2heading_pane_fp_g2

0x485a,	// (0x00019173) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x485a,	// (0x00019173) list_single_graphic_2heading_pane_fp_g3

0x4866,	// (0x0001917f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4866,	// (0x0001917f) list_single_graphic_2heading_pane_fp_g4

0x490d,	// (0x00019226) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x490d,	// (0x00019226) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x000244a3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x000244a3) list_single_graphic_2heading_pane_fp_g

0x50d1,	// (0x000199ea) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x50d1,	// (0x000199ea) list_single_graphic_2heading_pane_fp_t1

0x4968,	// (0x00019281) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4968,	// (0x00019281) list_single_graphic_2heading_pane_fp_t2

0x50e7,	// (0x00019a00) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x50e7,	// (0x00019a00) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x00024585) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x00024585) list_single_graphic_2heading_pane_fp_t

0x42eb,	// (0x00018c04) fep_hwr_write_pane_g5_ParamLimits

0x42eb,	// (0x00018c04) fep_hwr_write_pane_g5

0x42f7,	// (0x00018c10) fep_hwr_write_pane_g6_ParamLimits

0x42f7,	// (0x00018c10) fep_hwr_write_pane_g6

0x4da1,	// (0x000196ba) eswt_shell_pane_ParamLimits

0x1846,	// (0x0001615f) bg_popup_window_pane_cp18_ParamLimits

0x2b10,	// (0x00017429) heading_pane_cp70

0x4ecb,	// (0x000197e4) popup_eswt_tasktip_window_t1_ParamLimits

0xa9a1,	// (0x0001f2ba) aid_touch_tab_arrow_left

0xa9b7,	// (0x0001f2d0) aid_touch_tab_arrow_right

0xb91f,	// (0x00020238) title_pane_g3_ParamLimits

0xb91f,	// (0x00020238) title_pane_g3

0xd924,	// (0x0002223d) set_value_pane_g1

0xa8d7,	// (0x0001f1f0) popup_toolbar_trans_pane_ParamLimits

0x5017,	// (0x00019930) aid_size_cell_tb_trans_pane_ParamLimits

0xd9ca,	// (0x000222e3) bg_tb_trans_pane_ParamLimits

0x5029,	// (0x00019942) grid_tb_trans_pane_ParamLimits

0xbaca,	// (0x000203e3) cont_note_pane_ParamLimits

0xbaca,	// (0x000203e3) cont_note_pane

0xbd27,	// (0x00020640) cont_snote2_single_text_pane_ParamLimits

0xbd27,	// (0x00020640) cont_snote2_single_text_pane

0xbd27,	// (0x00020640) cont_snote2_single_graphic_pane_ParamLimits

0xbd27,	// (0x00020640) cont_snote2_single_graphic_pane

0x1e51,	// (0x0001676a) cont_note_wait_pane_ParamLimits

0x1e51,	// (0x0001676a) cont_note_wait_pane

0x1e51,	// (0x0001676a) cont_note_image_pane_ParamLimits

0x1e51,	// (0x0001676a) cont_note_image_pane

0x50fd,	// (0x00019a16) popup_note2_window_g1_ParamLimits

0x50fd,	// (0x00019a16) popup_note2_window_g1

0x512e,	// (0x00019a47) popup_note2_window_t1_ParamLimits

0x512e,	// (0x00019a47) popup_note2_window_t1

0x5173,	// (0x00019a8c) popup_note2_window_t2_ParamLimits

0x5173,	// (0x00019a8c) popup_note2_window_t2

0x51b8,	// (0x00019ad1) popup_note2_window_t3_ParamLimits

0x51b8,	// (0x00019ad1) popup_note2_window_t3

0x51fd,	// (0x00019b16) popup_note2_window_t4_ParamLimits

0x51fd,	// (0x00019b16) popup_note2_window_t4

0xbb4e,	// (0x00020467) popup_note2_window_t5_ParamLimits

0xbb4e,	// (0x00020467) popup_note2_window_t5

0x0004,

0xfc78,	// (0x00024591) popup_note2_window_t_ParamLimits

0xfc78,	// (0x00024591) popup_note2_window_t

0x522c,	// (0x00019b45) popup_note2_image_window_g1_ParamLimits

0x522c,	// (0x00019b45) popup_note2_image_window_g1

0x5238,	// (0x00019b51) popup_note2_image_window_g2_ParamLimits

0x5238,	// (0x00019b51) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0002459c) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0002459c) popup_note2_image_window_g

0x524a,	// (0x00019b63) popup_note2_image_window_t1_ParamLimits

0x524a,	// (0x00019b63) popup_note2_image_window_t1

0x5262,	// (0x00019b7b) popup_note2_image_window_t2_ParamLimits

0x5262,	// (0x00019b7b) popup_note2_image_window_t2

0x527a,	// (0x00019b93) popup_note2_image_window_t3_ParamLimits

0x527a,	// (0x00019b93) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x000245a1) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x000245a1) popup_note2_image_window_t

0x1e5f,	// (0x00016778) popup_note2_wait_window_g1_ParamLimits

0x1e5f,	// (0x00016778) popup_note2_wait_window_g1

0x5296,	// (0x00019baf) popup_note2_wait_window_g2_ParamLimits

0x5296,	// (0x00019baf) popup_note2_wait_window_g2

0x1e77,	// (0x00016790) popup_note2_wait_window_g3_ParamLimits

0x1e77,	// (0x00016790) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x000245a8) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x000245a8) popup_note2_wait_window_g

0x52a2,	// (0x00019bbb) popup_note2_wait_window_t1_ParamLimits

0x52a2,	// (0x00019bbb) popup_note2_wait_window_t1

0x52c0,	// (0x00019bd9) popup_note2_wait_window_t2_ParamLimits

0x52c0,	// (0x00019bd9) popup_note2_wait_window_t2

0x52de,	// (0x00019bf7) popup_note2_wait_window_t3_ParamLimits

0x52de,	// (0x00019bf7) popup_note2_wait_window_t3

0x52f0,	// (0x00019c09) popup_note2_wait_window_t4_ParamLimits

0x52f0,	// (0x00019c09) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x000245af) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x000245af) popup_note2_wait_window_t

0x5302,	// (0x00019c1b) wait_bar2_pane_ParamLimits

0x5302,	// (0x00019c1b) wait_bar2_pane

0x531a,	// (0x00019c33) popup_snote2_single_text_window_g1_ParamLimits

0x531a,	// (0x00019c33) popup_snote2_single_text_window_g1

0x5342,	// (0x00019c5b) popup_snote2_single_text_window_t1_ParamLimits

0x5342,	// (0x00019c5b) popup_snote2_single_text_window_t1

0x538e,	// (0x00019ca7) popup_snote2_single_text_window_t2_ParamLimits

0x538e,	// (0x00019ca7) popup_snote2_single_text_window_t2

0x53da,	// (0x00019cf3) popup_snote2_single_text_window_t3_ParamLimits

0x53da,	// (0x00019cf3) popup_snote2_single_text_window_t3

0x541b,	// (0x00019d34) popup_snote2_single_text_window_t4_ParamLimits

0x541b,	// (0x00019d34) popup_snote2_single_text_window_t4

0x5451,	// (0x00019d6a) popup_snote2_single_text_window_t5_ParamLimits

0x5451,	// (0x00019d6a) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x000245b8) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x000245b8) popup_snote2_single_text_window_t

0x547c,	// (0x00019d95) popup_snote2_single_graphic_window_g1_ParamLimits

0x547c,	// (0x00019d95) popup_snote2_single_graphic_window_g1

0x54a4,	// (0x00019dbd) popup_snote2_single_graphic_window_g2_ParamLimits

0x54a4,	// (0x00019dbd) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x000245c3) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x000245c3) popup_snote2_single_graphic_window_g

0x54cc,	// (0x00019de5) popup_snote2_single_graphic_window_t1_ParamLimits

0x54cc,	// (0x00019de5) popup_snote2_single_graphic_window_t1

0x5518,	// (0x00019e31) popup_snote2_single_graphic_window_t2_ParamLimits

0x5518,	// (0x00019e31) popup_snote2_single_graphic_window_t2

0x53da,	// (0x00019cf3) popup_snote2_single_graphic_window_t3_ParamLimits

0x53da,	// (0x00019cf3) popup_snote2_single_graphic_window_t3

0x541b,	// (0x00019d34) popup_snote2_single_graphic_window_t4_ParamLimits

0x541b,	// (0x00019d34) popup_snote2_single_graphic_window_t4

0x5451,	// (0x00019d6a) popup_snote2_single_graphic_window_t5_ParamLimits

0x5451,	// (0x00019d6a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x000245c8) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x000245c8) popup_snote2_single_graphic_window_t

0x3cf4,	// (0x0001860d) clock_nsta_pane_cp2_t1

0x3cf4,	// (0x0001860d) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x000243dc) clock_nsta_pane_cp2_t

0xd9e9,	// (0x00022302) form_field_data_wide_pane_g1_ParamLimits

0xd9f5,	// (0x0002230e) form_field_data_wide_pane_g2_ParamLimits

0xd9f5,	// (0x0002230e) form_field_data_wide_pane_g2

0xda01,	// (0x0002231a) form_field_data_wide_pane_g3_ParamLimits

0xda01,	// (0x0002231a) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00023f8f) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00023f8f) form_field_data_wide_pane_g

0xb3fa,	// (0x0001fd13) grid_touch_3_pane_ParamLimits

0xb3fa,	// (0x0001fd13) grid_touch_3_pane

0xc01b,	// (0x00020934) cell_touch_3_pane_ParamLimits

0xc01b,	// (0x00020934) cell_touch_3_pane

0x425a,	// (0x00018b73) cell_touch_3_pane_g1

0x425a,	// (0x00018b73) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00024461) cell_touch_3_pane_g

0xbb80,	// (0x00020499) cont_query_data_pane

0xbb88,	// (0x000204a1) cont_query_data_pane_cp1

0x5597,	// (0x00019eb0) button_value_adjust_pane_cp7

0x559f,	// (0x00019eb8) query_popup_pane_cp3

0xe0ea,	// (0x00022a03) bg_popup_sub_pane_cp22_ParamLimits

0xe542,	// (0x00022e5b) navi_navi_volume_pane_cp2

0xe55d,	// (0x00022e76) popup_side_volume_key_window_g2

0xe56c,	// (0x00022e85) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00024025) popup_side_volume_key_window_g

0xe589,	// (0x00022ea2) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002402c) popup_side_volume_key_window_t

0xe2f5,	// (0x00022c0e) popup_side_volume_key_window_ParamLimits

0x9834,	// (0x0001e14d) list_double_graphic_pane_g4_ParamLimits

0x9834,	// (0x0001e14d) list_double_graphic_pane_g4

0xb28f,	// (0x0001fba8) list_single_2heading_msg_pane_ParamLimits

0xb28f,	// (0x0001fba8) list_single_2heading_msg_pane

0xc065,	// (0x0002097e) list_single_2heading_msg_pane_g1_ParamLimits

0xc065,	// (0x0002097e) list_single_2heading_msg_pane_g1

0xc071,	// (0x0002098a) list_single_2heading_msg_pane_g2_ParamLimits

0xc071,	// (0x0002098a) list_single_2heading_msg_pane_g2

0xc084,	// (0x0002099d) list_single_2heading_msg_pane_g3_ParamLimits

0xc084,	// (0x0002099d) list_single_2heading_msg_pane_g3

0xc090,	// (0x000209a9) list_single_2heading_msg_pane_g4_ParamLimits

0xc090,	// (0x000209a9) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x000245d3) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x000245d3) list_single_2heading_msg_pane_g

0xc0a8,	// (0x000209c1) list_single_2heading_msg_pane_t1_ParamLimits

0xc0a8,	// (0x000209c1) list_single_2heading_msg_pane_t1

0xc0d0,	// (0x000209e9) list_single_2heading_msg_pane_t2_ParamLimits

0xc0d0,	// (0x000209e9) list_single_2heading_msg_pane_t2

0xc13b,	// (0x00020a54) list_single_2heading_msg_pane_t3_ParamLimits

0xc13b,	// (0x00020a54) list_single_2heading_msg_pane_t3

0x56b1,	// (0x00019fca) list_single_2heading_msg_pane_t4_ParamLimits

0x56b1,	// (0x00019fca) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x000245dc) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x000245dc) list_single_2heading_msg_pane_t

0xb92b,	// (0x00020244) title_pane_g4_ParamLimits

0xb92b,	// (0x00020244) title_pane_g4

0xdd93,	// (0x000226ac) title_pane_stacon_g3_ParamLimits

0xdd93,	// (0x000226ac) title_pane_stacon_g3

0x5094,	// (0x000199ad) list_single_2graphic_im_pane_g4_ParamLimits

0x5094,	// (0x000199ad) list_single_2graphic_im_pane_g4

0x28c1,	// (0x000171da) popup_side_volume_key_window_cp

0x31cc,	// (0x00017ae5) main_idle_act2_pane_t1

0xe839,	// (0x00023152) toolbar_button_pane_g10

0x96eb,	// (0x0001e004) popup_toolbar_window_cp1

0x3ce5,	// (0x000185fe) clock_nsta_pane_cp_t1

0x3ce5,	// (0x000185fe) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x000243d7) clock_nsta_pane_cp_t

0xe542,	// (0x00022e5b) navi_navi_volume_pane_cp2_ParamLimits

0xe551,	// (0x00022e6a) popup_side_volume_key_window_g1_ParamLimits

0xe55d,	// (0x00022e76) popup_side_volume_key_window_g2_ParamLimits

0xe56c,	// (0x00022e85) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00024025) popup_side_volume_key_window_g_ParamLimits

0xeb40,	// (0x00023459) fep_hwr_aid_pane

0xebe9,	// (0x00023502) bg_fep_hwr_top_pane_g4_ParamLimits

0x42bb,	// (0x00018bd4) fep_hwr_top_pane_g1_ParamLimits

0x42cd,	// (0x00018be6) fep_hwr_top_pane_g2_ParamLimits

0xec09,	// (0x00023522) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0002442c) fep_hwr_top_pane_g_ParamLimits

0xec1e,	// (0x00023537) fep_hwr_top_text_pane_ParamLimits

0x2676,	// (0x00016f8f) aid_touch_tab_arrow_arrow_2

0x267f,	// (0x00016f98) aid_touch_tab_arrow_left_2

0xeb54,	// (0x0002346d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xeb8b,	// (0x000234a4) fep_hwr_prediction_pane

0x4423,	// (0x00018d3c) fep_vkb_prediction_pane

0xb729,	// (0x00020042) fep_vkb_side_pane_g3_ParamLimits

0xb729,	// (0x00020042) fep_vkb_side_pane_g3

0xed32,	// (0x0002364b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xeda3,	// (0x000236bc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xedb0,	// (0x000236c9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x000244db) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xeedf,	// (0x000237f8) fep_hwr_prediction_pane_g1

0xeee9,	// (0x00023802) fep_hwr_prediction_pane_g2

0xeef1,	// (0x0002380a) fep_hwr_prediction_pane_g3

0xeef9,	// (0x00023812) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x000245e5) fep_hwr_prediction_pane_g

0x56d6,	// (0x00019fef) fep_vkb_prediction_pane_g1

0x56e0,	// (0x00019ff9) fep_vkb_prediction_pane_g2

0x56e8,	// (0x0001a001) fep_vkb_prediction_pane_g3

0x56f0,	// (0x0001a009) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x000245ee) fep_vkb_prediction_pane_g

0xe96f,	// (0x00023288) slider_set_pane_g3

0xe983,	// (0x0002329c) slider_set_pane_g4

0xe99b,	// (0x000232b4) slider_set_pane_g5

0xe96f,	// (0x00023288) slider_set_pane_g6

0xe9b1,	// (0x000232ca) slider_set_pane_g7

0x2d77,	// (0x00017690) slider_form_pane_g3

0x2d80,	// (0x00017699) slider_form_pane_g4

0x2d88,	// (0x000176a1) slider_form_pane_g5

0x2d77,	// (0x00017690) slider_form_pane_g6

0xb232,	// (0x0001fb4b) slider_form_pane_g7

0x34cf,	// (0x00017de8) slider_set_pane_vc_g3

0x34d8,	// (0x00017df1) slider_set_pane_vc_g4

0x34e1,	// (0x00017dfa) slider_set_pane_vc_g5

0x34cf,	// (0x00017de8) slider_set_pane_vc_g6

0x34ea,	// (0x00017e03) slider_set_pane_vc_g7

0x3998,	// (0x000182b1) slider_form_pane_vc_g1

0x39a1,	// (0x000182ba) slider_form_pane_vc_g2

0x39aa,	// (0x000182c3) slider_form_pane_vc_g3

0x3998,	// (0x000182b1) slider_form_pane_vc_g4

0x39b3,	// (0x000182cc) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x000243a9) slider_form_pane_vc_g

0xb901,	// (0x0002021a) main_idle_act3_pane

0x56f8,	// (0x0001a011) ai3_links_pane

0xc1a9,	// (0x00020ac2) popup_ai3_data_window_ParamLimits

0xc1a9,	// (0x00020ac2) popup_ai3_data_window

0xb901,	// (0x0002021a) grid_ai3_links_pane

0xc1c7,	// (0x00020ae0) cell_ai3_links_pane_ParamLimits

0xc1c7,	// (0x00020ae0) cell_ai3_links_pane

0x5739,	// (0x0001a052) bg_popup_sub_pane_cp11

0x5746,	// (0x0001a05f) cell_ai3_links_pane_g1

0xb901,	// (0x0002021a) bg_popup_sub_pane_cp12

0x576b,	// (0x0001a084) heading_ai3_data_pane

0x5773,	// (0x0001a08c) list_ai3_gene_pane

0x577f,	// (0x0001a098) popup_ai3_data_window_g1

0x5787,	// (0x0001a0a0) heading_ai3_data_pane_g1

0x578f,	// (0x0001a0a8) heading_ai3_data_pane_t1

0x579d,	// (0x0001a0b6) list_double_ai3_gene_pane_ParamLimits

0x579d,	// (0x0001a0b6) list_double_ai3_gene_pane

0x57aa,	// (0x0001a0c3) list_single_ai3_gene_pane_ParamLimits

0x57aa,	// (0x0001a0c3) list_single_ai3_gene_pane

0x421f,	// (0x00018b38) list_highlight_pane_cp7_ParamLimits

0x421f,	// (0x00018b38) list_highlight_pane_cp7

0x57b7,	// (0x0001a0d0) list_single_a13_gene_pane_t1_ParamLimits

0x57b7,	// (0x0001a0d0) list_single_a13_gene_pane_t1

0x57ce,	// (0x0001a0e7) list_single_ai3_gene_pane_g1

0x57d7,	// (0x0001a0f0) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x000245f7) list_single_ai3_gene_pane_g

0x57df,	// (0x0001a0f8) list_double_ai3_gene_pane_g1_ParamLimits

0x57df,	// (0x0001a0f8) list_double_ai3_gene_pane_g1

0x57eb,	// (0x0001a104) list_double_ai3_gene_pane_t1_ParamLimits

0x57eb,	// (0x0001a104) list_double_ai3_gene_pane_t1

0x5807,	// (0x0001a120) list_double_ai3_gene_pane_t2_ParamLimits

0x5807,	// (0x0001a120) list_double_ai3_gene_pane_t2

0x581c,	// (0x0001a135) list_double_ai3_gene_pane_t3_ParamLimits

0x581c,	// (0x0001a135) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x000245fc) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x000245fc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x55b0,	// (0x00019ec9) aid_size_min_col_2

0xc04f,	// (0x00020968) aid_size_min_msg_ParamLimits

0xc04f,	// (0x00020968) aid_size_min_msg

0xb73d,	// (0x00020056) fep_vkb_top_text_pane_g2_ParamLimits

0xb73d,	// (0x00020056) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0002445c) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0002445c) fep_vkb_top_text_pane_g

0xb901,	// (0x0002021a) main_hc_apps_shell_pane

0x5839,	// (0x0001a152) grid_hc_apps_pane_ParamLimits

0x5839,	// (0x0001a152) grid_hc_apps_pane

0x5848,	// (0x0001a161) list_hc_apps_pane

0x5850,	// (0x0001a169) scroll_pane_cp37_ParamLimits

0x5850,	// (0x0001a169) scroll_pane_cp37

0xc1e1,	// (0x00020afa) cell_hc_apps_pane_ParamLimits

0xc1e1,	// (0x00020afa) cell_hc_apps_pane

0xc2ab,	// (0x00020bc4) cell_hc_apps_pane_g1_ParamLimits

0xc2ab,	// (0x00020bc4) cell_hc_apps_pane_g1

0x5945,	// (0x0001a25e) cell_hc_apps_pane_g2_ParamLimits

0x5945,	// (0x0001a25e) cell_hc_apps_pane_g2

0x5961,	// (0x0001a27a) cell_hc_apps_pane_g3_ParamLimits

0x5961,	// (0x0001a27a) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00024603) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00024603) cell_hc_apps_pane_g

0xc2d8,	// (0x00020bf1) cell_hc_apps_pane_t1_ParamLimits

0xc2d8,	// (0x00020bf1) cell_hc_apps_pane_t1

0xbaca,	// (0x000203e3) grid_highlight_pane_cp10_ParamLimits

0xbaca,	// (0x000203e3) grid_highlight_pane_cp10

0xc318,	// (0x00020c31) list_single_hc_apps_pane_ParamLimits

0xc318,	// (0x00020c31) list_single_hc_apps_pane

0xc352,	// (0x00020c6b) list_single_hc_apps_pane_g1

0xc36b,	// (0x00020c84) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x0002460a) list_single_hc_apps_pane_g

0xc384,	// (0x00020c9d) list_single_hc_apps_pane_g2_copy1

0xc3a0,	// (0x00020cb9) list_single_hc_apps_pane_t1

0xb97d,	// (0x00020296) bg_set_opt_pane_cp_ParamLimits

0xd862,	// (0x0002217b) setting_slider_pane_t1_ParamLimits

0xd87b,	// (0x00022194) setting_slider_pane_t2_ParamLimits

0xd895,	// (0x000221ae) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00023e77) setting_slider_pane_t_ParamLimits

0xd8ad,	// (0x000221c6) slider_set_pane_ParamLimits

0xe78e,	// (0x000230a7) control_pane_g5_ParamLimits

0xe78e,	// (0x000230a7) control_pane_g5

0x2ba4,	// (0x000174bd) slider_set_pane_g1_ParamLimits

0xe963,	// (0x0002327c) slider_set_pane_g2_ParamLimits

0xe96f,	// (0x00023288) slider_set_pane_g3_ParamLimits

0xe983,	// (0x0002329c) slider_set_pane_g4_ParamLimits

0xe99b,	// (0x000232b4) slider_set_pane_g5_ParamLimits

0xe96f,	// (0x00023288) slider_set_pane_g6_ParamLimits

0xe9b1,	// (0x000232ca) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x00024273) slider_set_pane_g_ParamLimits

0xe39d,	// (0x00022cb6) navi_icon_text_pane_ParamLimits

0xa968,	// (0x0001f281) aid_fill_nsta_2_ParamLimits

0xa9a1,	// (0x0001f2ba) aid_touch_tab_arrow_left_ParamLimits

0xa9b7,	// (0x0001f2d0) aid_touch_tab_arrow_right_ParamLimits

0xaa52,	// (0x0001f36b) clock_nsta_pane_ParamLimits

0xaf5e,	// (0x0001f877) navi_icon_pane_g1_ParamLimits

0xaf6a,	// (0x0001f883) navi_text_pane_t1_ParamLimits

0xb4d0,	// (0x0001fde9) navi_icon_text_pane_g1_ParamLimits

0xb4dc,	// (0x0001fdf5) navi_icon_text_pane_t1_ParamLimits

0xc352,	// (0x00020c6b) list_single_hc_apps_pane_g1_ParamLimits

0xc36b,	// (0x00020c84) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x0002460a) list_single_hc_apps_pane_g_ParamLimits

0xc384,	// (0x00020c9d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc3a0,	// (0x00020cb9) list_single_hc_apps_pane_t1_ParamLimits

0x88f3,	// (0x0001d20c) popup_toolbar2_fixed_window_ParamLimits

0x88f3,	// (0x0001d20c) popup_toolbar2_fixed_window

0xa8cd,	// (0x0001f1e6) popup_toolbar2_float_window

0xb901,	// (0x0002021a) bg_popup_sub_pane_cp27

0x5a7e,	// (0x0001a397) grid_toolbar2_float_pane

0xb901,	// (0x0002021a) bg_popup_sub_pane_cp26

0x5a7e,	// (0x0001a397) grid_toolbar2_fixed_pane

0xc3ce,	// (0x00020ce7) cell_toolbar2_fixed_pane_ParamLimits

0xc3ce,	// (0x00020ce7) cell_toolbar2_fixed_pane

0xc3eb,	// (0x00020d04) cell_toolbar2_fixed_pane_g1

0x5a9f,	// (0x0001a3b8) toolbar2_fixed_button_pane

0x1720,	// (0x00016039) toolbar2_fixed_button_pane_g1

0x1730,	// (0x00016049) toolbar2_fixed_button_pane_g2

0x1728,	// (0x00016041) toolbar2_fixed_button_pane_g3

0x1740,	// (0x00016059) toolbar2_fixed_button_pane_g4

0x1738,	// (0x00016051) toolbar2_fixed_button_pane_g5

0x1748,	// (0x00016061) toolbar2_fixed_button_pane_g6

0x1750,	// (0x00016069) toolbar2_fixed_button_pane_g7

0x1760,	// (0x00016079) toolbar2_fixed_button_pane_g8

0x1758,	// (0x00016071) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x00024175) toolbar2_fixed_button_pane_g

0x5aa7,	// (0x0001a3c0) cell_toolbar2_float_pane_ParamLimits

0x5aa7,	// (0x0001a3c0) cell_toolbar2_float_pane

0x5ab8,	// (0x0001a3d1) cell_toolbar2_float_pane_g1

0x5a9f,	// (0x0001a3b8) toolbar2_fixed_button_pane_cp

0xb625,	// (0x0001ff3e) fep_vkb_accented_list_pane_ParamLimits

0xb625,	// (0x0001ff3e) fep_vkb_accented_list_pane

0xed12,	// (0x0002362b) bg_popup_fep_shadow_pane_g9

0x0823,	// (0x0001513c) bg_popup_fep_shadow_pane_cp3

0xdb7a,	// (0x00022493) list_accented_list_pane

0x5ac1,	// (0x0001a3da) list_single_accented_list_pane_ParamLimits

0x5ac1,	// (0x0001a3da) list_single_accented_list_pane

0x0823,	// (0x0001513c) list_highlight_pane_cp10

0x5ad2,	// (0x0001a3eb) list_single_accented_list_pane_t1

0xa7e9,	// (0x0001f102) popup_slider_window_ParamLimits

0xa7e9,	// (0x0001f102) popup_slider_window

0x55a7,	// (0x00019ec0) aid_indentation_list_msg

0xc4f6,	// (0x00020e0f) bg_popup_window_pane_cp19

0x5c0c,	// (0x0001a525) popup_slider_window_g1

0x5c28,	// (0x0001a541) popup_slider_window_g2

0x5c44,	// (0x0001a55d) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x0002460f) popup_slider_window_g

0x5ca0,	// (0x0001a5b9) popup_slider_window_t1

0x5d14,	// (0x0001a62d) small_volume_slider_vertical_pane

0x425a,	// (0x00018b73) small_volume_slider_vertical_pane_g1

0x425a,	// (0x00018b73) small_volume_slider_vertical_pane_g2

0x5d30,	// (0x0001a649) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00024621) small_volume_slider_vertical_pane_g

0x885d,	// (0x0001d176) area_side_right_pane_ParamLimits

0x885d,	// (0x0001d176) area_side_right_pane

0x8d5d,	// (0x0001d676) aid_size_side_button_ParamLimits

0x8d5d,	// (0x0001d676) aid_size_side_button

0x8d76,	// (0x0001d68f) grid_sctrl_middle_pane_ParamLimits

0x8d76,	// (0x0001d68f) grid_sctrl_middle_pane

0xef0a,	// (0x00023823) sctrl_sk_bottom_pane

0xef1b,	// (0x00023834) sctrl_sk_top_pane

0xef2d,	// (0x00023846) aid_touch_sctrl_top

0xef3a,	// (0x00023853) bg_sctrl_sk_pane_ParamLimits

0xef3a,	// (0x00023853) bg_sctrl_sk_pane

0xef48,	// (0x00023861) sctrl_sk_top_pane_g1

0xef55,	// (0x0002386e) sctrl_sk_top_pane_t1

0xef2d,	// (0x00023846) aid_touch_sctrl_bottom

0xef3a,	// (0x00023853) bg_sctrl_sk_pane_cp_ParamLimits

0xef3a,	// (0x00023853) bg_sctrl_sk_pane_cp

0xef70,	// (0x00023889) sctrl_sk_bottom_pane_g1

0xef55,	// (0x0002386e) sctrl_sk_bottom_pane_t1

0x8d90,	// (0x0001d6a9) cell_sctrl_middle_pane_ParamLimits

0x8d90,	// (0x0001d6a9) cell_sctrl_middle_pane

0x8da3,	// (0x0001d6bc) aid_touch_sctrl_middle_ParamLimits

0x8da3,	// (0x0001d6bc) aid_touch_sctrl_middle

0x8db0,	// (0x0001d6c9) bg_sctrl_middle_pane_ParamLimits

0x8db0,	// (0x0001d6c9) bg_sctrl_middle_pane

0xef79,	// (0x00023892) cell_sctrl_middle_pane_g1_ParamLimits

0xef79,	// (0x00023892) cell_sctrl_middle_pane_g1

0x8dbe,	// (0x0001d6d7) cell_sctrl_middle_pane_g2_ParamLimits

0x8dbe,	// (0x0001d6d7) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x0002462d) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x0002462d) cell_sctrl_middle_pane_g

0x1720,	// (0x00016039) bg_sctrl_middle_pane_g1

0x1728,	// (0x00016041) bg_sctrl_middle_pane_g2

0x1730,	// (0x00016049) bg_sctrl_middle_pane_g3

0x1738,	// (0x00016051) bg_sctrl_middle_pane_g4

0x1740,	// (0x00016059) bg_sctrl_middle_pane_g5

0x1748,	// (0x00016061) bg_sctrl_middle_pane_g6

0x1750,	// (0x00016069) bg_sctrl_middle_pane_g7

0x1758,	// (0x00016071) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00024632) bg_sctrl_middle_pane_g

0x1760,	// (0x00016079) bg_sctrl_middle_pane_g8_copy1

0x1720,	// (0x00016039) bg_sctrl_sk_pane_g1

0x1730,	// (0x00016049) bg_sctrl_sk_pane_g2

0x1728,	// (0x00016041) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x00024175) bg_sctrl_sk_pane_g

0xbee5,	// (0x000207fe) aid_size_touch_scroll_bar

0x1740,	// (0x00016059) bg_sctrl_sk_pane_g4

0x1738,	// (0x00016051) bg_sctrl_sk_pane_g5

0x1748,	// (0x00016061) bg_sctrl_sk_pane_g6

0x1750,	// (0x00016069) bg_sctrl_sk_pane_g7

0x1760,	// (0x00016079) bg_sctrl_sk_pane_g8

0x1758,	// (0x00016071) bg_sctrl_sk_pane_g9

0x0c5f,	// (0x00015578) popup_fep_china_hwr2_fs_candidate_window

0xa2a1,	// (0x0001ebba) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa2a1,	// (0x0001ebba) popup_fep_china_hwr2_fs_control_window

0xed32,	// (0x0002364b) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00024628) sctrl_sk_top_pane_g

0xc5ae,	// (0x00020ec7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc5ae,	// (0x00020ec7) aid_fep_china_hwr2_fs_cell

0xc5c4,	// (0x00020edd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc5c4,	// (0x00020edd) bg_popup_fep_shadow_pane_cp4

0xc5db,	// (0x00020ef4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc5db,	// (0x00020ef4) bg_popup_fep_shadow_pane_cp5

0xc5ed,	// (0x00020f06) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc5ed,	// (0x00020f06) popup_fep_china_hwr2_fs_control_bar_grid

0xc601,	// (0x00020f1a) popup_fep_china_hwr2_fs_control_funtion_grid

0x5d8f,	// (0x0001a6a8) aid_fep_china_hwr2_fs_candi_cell

0xb901,	// (0x0002021a) bg_popup_fep_shadow_pane_cp6

0x5d99,	// (0x0001a6b2) popup_fep_china_hwr2_fs_candidate_grid

0xc609,	// (0x00020f22) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc609,	// (0x00020f22) cell_fep_china_hwr2_fs_funtion_grid

0x425a,	// (0x00018b73) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5dbb,	// (0x0001a6d4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5dbb,	// (0x0001a6d4) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5dc9,	// (0x0001a6e2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5dc9,	// (0x0001a6e2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x00024643) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x00024643) cell_fep_china_hwr2_fs_funtion_grid_g

0xc621,	// (0x00020f3a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc621,	// (0x00020f3a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc636,	// (0x00020f4f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc636,	// (0x00020f4f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x00024648) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x00024648) cell_fep_china_hwr2_fs_funtion_grid_t

0x5e10,	// (0x0001a729) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5e18,	// (0x0001a731) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5e20,	// (0x0001a739) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x0002464d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5e28,	// (0x0001a741) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5e28,	// (0x0001a741) cell_fep_china_hwr2_fs_candidate_grid

0x5e47,	// (0x0001a760) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5e4f,	// (0x0001a768) popup_fep_china_hwr2_fs_candidate_grid_g21

0x425a,	// (0x00018b73) cell_fep_china_hwr2_fs_candidate_grid_g1

0x425a,	// (0x00018b73) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00024461) cell_fep_china_hwr2_fs_candidate_grid_g

0x5e57,	// (0x0001a770) cell_fep_china_hwr2_fs_candidate_grid_t1

0x12ce,	// (0x00015be7) clock_nsta_pane_cp_24_ParamLimits

0x12ce,	// (0x00015be7) clock_nsta_pane_cp_24

0x134e,	// (0x00015c67) indicator_nsta_pane_cp_24_ParamLimits

0x134e,	// (0x00015c67) indicator_nsta_pane_cp_24

0x24d4,	// (0x00016ded) heading_pane_g1

0x0001,

0xf8c1,	// (0x000241da) heading_pane_g

0x3013,	// (0x0001792c) grid_sct_catagory_button_pane

0x3045,	// (0x0001795e) scroll_pane_cp5_ParamLimits

0x3e50,	// (0x00018769) button_value_adjust_pane_cp5_ParamLimits

0x3e50,	// (0x00018769) button_value_adjust_pane_cp5

0x3f56,	// (0x0001886f) form2_midp_time_pane_ParamLimits

0x5e65,	// (0x0001a77e) cell_sct_catagory_button_pane_ParamLimits

0x5e65,	// (0x0001a77e) cell_sct_catagory_button_pane

0x421f,	// (0x00018b38) bg_button_pane_cp01_ParamLimits

0x421f,	// (0x00018b38) bg_button_pane_cp01

0x425a,	// (0x00018b73) cell_sct_catagory_button_pane_g1

0xa86a,	// (0x0001f183) popup_tb_extension_window

0xc652,	// (0x00020f6b) aid_size_cell_ext_ParamLimits

0xc652,	// (0x00020f6b) aid_size_cell_ext

0xbd27,	// (0x00020640) bg_tb_trans_pane_cp1_ParamLimits

0xbd27,	// (0x00020640) bg_tb_trans_pane_cp1

0xc678,	// (0x00020f91) grid_tb_ext_pane_ParamLimits

0xc678,	// (0x00020f91) grid_tb_ext_pane

0xc6b8,	// (0x00020fd1) cell_tb_ext_pane_ParamLimits

0xc6b8,	// (0x00020fd1) cell_tb_ext_pane

0xc6e0,	// (0x00020ff9) cell_tb_ext_pane_g1_ParamLimits

0xc6e0,	// (0x00020ff9) cell_tb_ext_pane_g1

0x5efb,	// (0x0001a814) cell_tb_ext_pane_t1

0xbaca,	// (0x000203e3) list_highlight_pane_cp11_ParamLimits

0xbaca,	// (0x000203e3) list_highlight_pane_cp11

0x8908,	// (0x0001d221) popup_uni_indicator_window_ParamLimits

0x8908,	// (0x0001d221) popup_uni_indicator_window

0xd9ca,	// (0x000222e3) bg_popup_sub_pane_cp14

0x5f16,	// (0x0001a82f) list_uniindi_pane

0x5f22,	// (0x0001a83b) uniindi_top_pane

0xbaca,	// (0x000203e3) bg_uniindi_top_pane

0x5f43,	// (0x0001a85c) uniindi_top_pane_g1

0x5f59,	// (0x0001a872) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x00024654) uniindi_top_pane_g

0x5f83,	// (0x0001a89c) uniindi_top_pane_t1

0x5faf,	// (0x0001a8c8) list_single_uniindi_pane_ParamLimits

0x5faf,	// (0x0001a8c8) list_single_uniindi_pane

0x425a,	// (0x00018b73) bg_uniindi_top_pane_g1

0x5fc1,	// (0x0001a8da) list_single_uniindi_pane_g1

0x5fd4,	// (0x0001a8ed) list_single_uniindi_pane_t1

0xd73f,	// (0x00022058) control_bg_pane

0x5ff9,	// (0x0001a912) bg_sctrl_sk_pane_cp1

0x6002,	// (0x0001a91b) bg_sctrl_sk_pane_cp2

0x600b,	// (0x0001a924) control_bg_pane_g1

0x6014,	// (0x0001a92d) control_bg_pane_g2

0x0001,

0xfd44,	// (0x0002465d) control_bg_pane_g

0x3c77,	// (0x00018590) cell_indicator_nsta_pane_g1_ParamLimits

0xb429,	// (0x0001fd42) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x000243c5) cell_indicator_nsta_pane_g_ParamLimits

0x3fe6,	// (0x000188ff) form2_midp_time_pane_t1_ParamLimits

0xa217,	// (0x0001eb30) main_idle_act4_pane_ParamLimits

0xa217,	// (0x0001eb30) main_idle_act4_pane

0xa86a,	// (0x0001f183) popup_tb_extension_window_ParamLimits

0xc6a0,	// (0x00020fb9) tb_ext_find_pane_ParamLimits

0xc6a0,	// (0x00020fb9) tb_ext_find_pane

0x601d,	// (0x0001a936) ai_gene_pane_1_cp1

0x0960,	// (0x00015279) ai_gene_pane_2_cp1

0x6025,	// (0x0001a93e) list_single_idle_plugin_calendar_pane

0x602e,	// (0x0001a947) list_single_idle_plugin_notification_pane

0x6037,	// (0x0001a950) list_single_idle_plugin_player_pane

0xc6fd,	// (0x00021016) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc6fd,	// (0x00021016) list_single_idle_plugin_shortcut_pane

0xc725,	// (0x0002103e) main_idle_act4_pane_t1

0xc73d,	// (0x00021056) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x00024662) main_idle_act4_pane_t

0xc755,	// (0x0002106e) middle_sk_idle_act4_pane_ParamLimits

0xc755,	// (0x0002106e) middle_sk_idle_act4_pane

0xc771,	// (0x0002108a) popup_clock_digital_analogue_window_cp2

0xc798,	// (0x000210b1) shortcut_wheel_idle_act4_pane_ParamLimits

0xc798,	// (0x000210b1) shortcut_wheel_idle_act4_pane

0x425a,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g1

0x425a,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g2

0x425a,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g3

0x425a,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g4

0x425a,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g5

0x60ca,	// (0x0001a9e3) shortcut_wheel_idle_act4_pane_g6

0x60d2,	// (0x0001a9eb) shortcut_wheel_idle_act4_pane_g7

0x60da,	// (0x0001a9f3) shortcut_wheel_idle_act4_pane_g8

0x60e2,	// (0x0001a9fb) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x00024667) shortcut_wheel_idle_act4_pane_g

0xb8d1,	// (0x000201ea) middle_sk_idle_act4_pane_g1_ParamLimits

0xb8d1,	// (0x000201ea) middle_sk_idle_act4_pane_g1

0xc815,	// (0x0002112e) middle_sk_idle_act4_pane_g2_ParamLimits

0xc815,	// (0x0002112e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x0002468a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x0002468a) middle_sk_idle_act4_pane_g

0xc82d,	// (0x00021146) middle_sk_idle_act4_pane_t1_ParamLimits

0xc82d,	// (0x00021146) middle_sk_idle_act4_pane_t1

0xc85c,	// (0x00021175) grid_ai_shortcut_pane_ParamLimits

0xc85c,	// (0x00021175) grid_ai_shortcut_pane

0xc879,	// (0x00021192) list_highlight_pane_cp16_ParamLimits

0xc879,	// (0x00021192) list_highlight_pane_cp16

0xc886,	// (0x0002119f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc886,	// (0x0002119f) list_single_idle_plugin_shortcut_pane_g1

0xc892,	// (0x000211ab) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc892,	// (0x000211ab) list_single_idle_plugin_shortcut_pane_g2

0xc8b0,	// (0x000211c9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc8b0,	// (0x000211c9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x0002468f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x0002468f) list_single_idle_plugin_shortcut_pane_g

0xc8c5,	// (0x000211de) cell_ai_shortcut_pane_ParamLimits

0xc8c5,	// (0x000211de) cell_ai_shortcut_pane

0xc8db,	// (0x000211f4) cell_ai_shortcut_pane_g1_ParamLimits

0xc8db,	// (0x000211f4) cell_ai_shortcut_pane_g1

0x601d,	// (0x0001a936) ai_gene_pane_1_cp2

0x6213,	// (0x0001ab2c) ai_gene_pane_2_cp2

0x621b,	// (0x0001ab34) list_highlight_pane_cp15

0x6224,	// (0x0001ab3d) list_single_idle_plugin_calendar_pane_g1

0x621b,	// (0x0001ab34) list_highlight_pane_cp17

0x622c,	// (0x0001ab45) list_single_idle_plugin_calendar_pane_g1_copy1

0x6234,	// (0x0001ab4d) list_single_idle_plugin_player_pane_g1

0x327a,	// (0x00017b93) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00024696) list_single_idle_plugin_player_pane_g

0x623c,	// (0x0001ab55) list_single_idle_plugin_player_pane_t1

0x624a,	// (0x0001ab63) list_single_idle_plugin_player_pane_t2

0x6258,	// (0x0001ab71) list_single_idle_plugin_player_pane_t3

0x6266,	// (0x0001ab7f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x0002469b) list_single_idle_plugin_player_pane_t

0x6274,	// (0x0001ab8d) wait_bar_pane_cp15

0x627c,	// (0x0001ab95) grid_ai_notification_pane

0x327a,	// (0x00017b93) list_single_idle_plugin_notification_pane_g1

0xc8fd,	// (0x00021216) cell_ai_notification_pane_ParamLimits

0xc8fd,	// (0x00021216) cell_ai_notification_pane

0x6292,	// (0x0001abab) cell_ai_notification_pane_g1

0x629a,	// (0x0001abb3) cell_ai_notification_pane_t1

0xc90a,	// (0x00021223) tb_ext_find_button_pane

0xc912,	// (0x0002122b) tb_ext_find_pane_g1

0xc91a,	// (0x00021233) tb_ext_find_pane_t1

0xe08a,	// (0x000229a3) tb_ext_find_button_pane_g1

0x62c6,	// (0x0001abdf) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x000246a4) tb_ext_find_button_pane_g

0xc725,	// (0x0002103e) main_idle_act4_pane_t1_ParamLimits

0xc73d,	// (0x00021056) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x00024662) main_idle_act4_pane_t_ParamLimits

0xc771,	// (0x0002108a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc788,	// (0x000210a1) sat_plugin_idle_act4_pane_ParamLimits

0xc788,	// (0x000210a1) sat_plugin_idle_act4_pane

0xc928,	// (0x00021241) sat_plugin_idle_act4_pane_t1_ParamLimits

0xc928,	// (0x00021241) sat_plugin_idle_act4_pane_t1

0xc940,	// (0x00021259) sat_plugin_idle_act4_pane_t2_ParamLimits

0xc940,	// (0x00021259) sat_plugin_idle_act4_pane_t2

0xc958,	// (0x00021271) sat_plugin_idle_act4_pane_t3_ParamLimits

0xc958,	// (0x00021271) sat_plugin_idle_act4_pane_t3

0xc970,	// (0x00021289) sat_plugin_idle_act4_pane_t4_ParamLimits

0xc970,	// (0x00021289) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x000246a9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x000246a9) sat_plugin_idle_act4_pane_t

0xd804,	// (0x0002211d) popup_battery_window_ParamLimits

0xd804,	// (0x0002211d) popup_battery_window

0xbaca,	// (0x000203e3) bg_popup_sub_pane_cp25_ParamLimits

0xbaca,	// (0x000203e3) bg_popup_sub_pane_cp25

0x631b,	// (0x0001ac34) popup_battery_window_g1_ParamLimits

0x631b,	// (0x0001ac34) popup_battery_window_g1

0x6327,	// (0x0001ac40) popup_battery_window_t1_ParamLimits

0x6327,	// (0x0001ac40) popup_battery_window_t1

0x6339,	// (0x0001ac52) popup_battery_window_t2_ParamLimits

0x6339,	// (0x0001ac52) popup_battery_window_t2

0x0001,

0xfd99,	// (0x000246b2) popup_battery_window_t_ParamLimits

0xfd99,	// (0x000246b2) popup_battery_window_t

0xa060,	// (0x0001e979) midp_canvas_pane_ParamLimits

0xa0bb,	// (0x0001e9d4) midp_keypad_pane_ParamLimits

0xa0bb,	// (0x0001e9d4) midp_keypad_pane

0x0ba9,	// (0x000154c2) main_midp_pane_ParamLimits

0x3d03,	// (0x0001861c) signal_pane_g2_cp_ParamLimits

0xc988,	// (0x000212a1) aid_size_cell_midp_keypad_ParamLimits

0xc988,	// (0x000212a1) aid_size_cell_midp_keypad

0xc9a6,	// (0x000212bf) midp_keyp_game_grid_pane_ParamLimits

0xc9a6,	// (0x000212bf) midp_keyp_game_grid_pane

0xc9cd,	// (0x000212e6) midp_keyp_rocker_pane_ParamLimits

0xc9cd,	// (0x000212e6) midp_keyp_rocker_pane

0xca0c,	// (0x00021325) midp_keyp_sk_left_pane_ParamLimits

0xca0c,	// (0x00021325) midp_keyp_sk_left_pane

0xca60,	// (0x00021379) midp_keyp_sk_right_pane_ParamLimits

0xca60,	// (0x00021379) midp_keyp_sk_right_pane

0xb901,	// (0x0002021a) bg_button_pane_cp03

0xcab4,	// (0x000213cd) midp_keyp_sk_left_pane_g1

0xb901,	// (0x0002021a) bg_button_pane_cp04

0xcab4,	// (0x000213cd) midp_keyp_sk_right_pane_g1

0x425a,	// (0x00018b73) midp_keyp_rocker_pane_g1

0xcabd,	// (0x000213d6) keyp_game_cell_pane_ParamLimits

0xcabd,	// (0x000213d6) keyp_game_cell_pane

0xb901,	// (0x0002021a) bg_button_pane_cp02

0xcae3,	// (0x000213fc) keyp_game_cell_pane_g1

0x889f,	// (0x0001d1b8) popup_fep_vkb2_window_ParamLimits

0x889f,	// (0x0001d1b8) popup_fep_vkb2_window

0x8dca,	// (0x0001d6e3) aid_size_cell_vkb2_ParamLimits

0x8dca,	// (0x0001d6e3) aid_size_cell_vkb2

0x8e00,	// (0x0001d719) popup_fep_vkb2_window_g1_ParamLimits

0x8e00,	// (0x0001d719) popup_fep_vkb2_window_g1

0x8e50,	// (0x0001d769) vkb2_area_bottom_pane_ParamLimits

0x8e50,	// (0x0001d769) vkb2_area_bottom_pane

0x8eac,	// (0x0001d7c5) vkb2_area_keypad_pane_ParamLimits

0x8eac,	// (0x0001d7c5) vkb2_area_keypad_pane

0x8efa,	// (0x0001d813) vkb2_area_top_pane_ParamLimits

0x8efa,	// (0x0001d813) vkb2_area_top_pane

0x8f80,	// (0x0001d899) vkb2_top_entry_pane_ParamLimits

0x8f80,	// (0x0001d899) vkb2_top_entry_pane

0x8fad,	// (0x0001d8c6) vkb2_top_grid_left_pane_ParamLimits

0x8fad,	// (0x0001d8c6) vkb2_top_grid_left_pane

0x8fcd,	// (0x0001d8e6) vkb2_top_grid_right_pane_ParamLimits

0x8fcd,	// (0x0001d8e6) vkb2_top_grid_right_pane

0xefb7,	// (0x000238d0) vkb2_cell_keypad_pane_ParamLimits

0xefb7,	// (0x000238d0) vkb2_cell_keypad_pane

0x9013,	// (0x0001d92c) vkb2_area_bottom_grid_pane_ParamLimits

0x9013,	// (0x0001d92c) vkb2_area_bottom_grid_pane

0x903d,	// (0x0001d956) vkb2_area_bottom_pane_g1_ParamLimits

0x903d,	// (0x0001d956) vkb2_area_bottom_pane_g1

0x9063,	// (0x0001d97c) vkb2_area_bottom_pane_g2_ParamLimits

0x9063,	// (0x0001d97c) vkb2_area_bottom_pane_g2

0x9094,	// (0x0001d9ad) vkb2_area_bottom_pane_g3_ParamLimits

0x9094,	// (0x0001d9ad) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x000246b7) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x000246b7) vkb2_area_bottom_pane_g

0xf064,	// (0x0002397d) vkb2_top_cell_left_pane_ParamLimits

0xf064,	// (0x0002397d) vkb2_top_cell_left_pane

0xcaec,	// (0x00021405) vkb2_top_entry_pane_g1_ParamLimits

0xcaec,	// (0x00021405) vkb2_top_entry_pane_g1

0xcafa,	// (0x00021413) vkb2_top_entry_pane_t1_ParamLimits

0xcafa,	// (0x00021413) vkb2_top_entry_pane_t1

0x64dc,	// (0x0001adf5) vkb2_top_entry_pane_t2_ParamLimits

0x64dc,	// (0x0001adf5) vkb2_top_entry_pane_t2

0x650e,	// (0x0001ae27) vkb2_top_entry_pane_t3_ParamLimits

0x650e,	// (0x0001ae27) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x000246be) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x000246be) vkb2_top_entry_pane_t

0x90fe,	// (0x0001da17) vkb2_top_grid_right_pane_g1_ParamLimits

0x90fe,	// (0x0001da17) vkb2_top_grid_right_pane_g1

0xf0b1,	// (0x000239ca) vkb2_top_grid_right_pane_g2_ParamLimits

0xf0b1,	// (0x000239ca) vkb2_top_grid_right_pane_g2

0xf0c9,	// (0x000239e2) vkb2_top_grid_right_pane_g3_ParamLimits

0xf0c9,	// (0x000239e2) vkb2_top_grid_right_pane_g3

0x9114,	// (0x0001da2d) vkb2_top_grid_right_pane_g4_ParamLimits

0x9114,	// (0x0001da2d) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x000246c5) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x000246c5) vkb2_top_grid_right_pane_g

0xf0e1,	// (0x000239fa) vkb2_top_cell_left_pane_g1

0xf0f8,	// (0x00023a11) vkb2_cell_keypad_pane_g1_ParamLimits

0xf0f8,	// (0x00023a11) vkb2_cell_keypad_pane_g1

0x6532,	// (0x0001ae4b) vkb2_cell_keypad_pane_t1_ParamLimits

0x6532,	// (0x0001ae4b) vkb2_cell_keypad_pane_t1

0xf106,	// (0x00023a1f) vkb2_cell_bottom_grid_pane_ParamLimits

0xf106,	// (0x00023a1f) vkb2_cell_bottom_grid_pane

0xf13f,	// (0x00023a58) vkb2_cell_bottom_grid_pane_g1

0xc7b9,	// (0x000210d2) aid_call2_pane_cp02

0xc7c1,	// (0x000210da) aid_call_pane_cp02

0xc7c9,	// (0x000210e2) clock_digital_number_pane_cp10

0xc7d1,	// (0x000210ea) clock_digital_number_pane_cp11

0xc7d9,	// (0x000210f2) clock_digital_number_pane_cp12

0xc7e1,	// (0x000210fa) clock_digital_number_pane_cp13

0xc7e9,	// (0x00021102) clock_digital_separator_pane_cp10

0xe08a,	// (0x000229a3) popup_clock_digital_analogue_window_cp2_g1

0xe08a,	// (0x000229a3) popup_clock_digital_analogue_window_cp2_g2

0xc7f1,	// (0x0002110a) popup_clock_digital_analogue_window_cp2_g3

0xe08a,	// (0x000229a3) popup_clock_digital_analogue_window_cp2_g4

0xc7f1,	// (0x0002110a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x0002467a) popup_clock_digital_analogue_window_cp2_g

0xc7f9,	// (0x00021112) popup_clock_digital_analogue_window_cp2_t1

0xc807,	// (0x00021120) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00024685) popup_clock_digital_analogue_window_cp2_t

0x425a,	// (0x00018b73) clock_digital_number_pane_cp10_g1

0x425a,	// (0x00018b73) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00024461) clock_digital_number_pane_cp10_g

0x425a,	// (0x00018b73) clock_digital_separator_pane_cp10_g1

0x425a,	// (0x00018b73) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00024461) clock_digital_separator_pane_cp10_g

0x5f65,	// (0x0001a87e) uniindi_top_pane_g3

0x5f76,	// (0x0001a88f) uniindi_top_pane_g4

0xf042,	// (0x0002395b) vkb2_row_keypad_pane_ParamLimits

0xf042,	// (0x0002395b) vkb2_row_keypad_pane

0xf15b,	// (0x00023a74) vkb2_cell_t_keypad_pane_ParamLimits

0xf15b,	// (0x00023a74) vkb2_cell_t_keypad_pane

0xf16b,	// (0x00023a84) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf16b,	// (0x00023a84) vkb2_cell_t_keypad_pane_cp08

0xf180,	// (0x00023a99) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf180,	// (0x00023a99) vkb2_cell_t_keypad_pane_cp09

0xf194,	// (0x00023aad) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf194,	// (0x00023aad) vkb2_cell_t_keypad_pane_cp01

0xf1a5,	// (0x00023abe) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf1a5,	// (0x00023abe) vkb2_cell_t_keypad_pane_cp02

0xf1b6,	// (0x00023acf) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf1b6,	// (0x00023acf) vkb2_cell_t_keypad_pane_cp03

0xf1c7,	// (0x00023ae0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf1c7,	// (0x00023ae0) vkb2_cell_t_keypad_pane_cp04

0xf1d8,	// (0x00023af1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf1d8,	// (0x00023af1) vkb2_cell_t_keypad_pane_cp05

0xf1e9,	// (0x00023b02) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf1e9,	// (0x00023b02) vkb2_cell_t_keypad_pane_cp06

0xf1fc,	// (0x00023b15) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf1fc,	// (0x00023b15) vkb2_cell_t_keypad_pane_cp07

0xf211,	// (0x00023b2a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf211,	// (0x00023b2a) vkb2_cell_t_keypad_pane_cp10

0xed32,	// (0x0002364b) vkb2_cell_t_keypad_pane_g1

0x6549,	// (0x0001ae62) vkb2_cell_t_keypad_pane_t1

0xd73f,	// (0x00022058) popup_grid_graphic2_window

0xcb33,	// (0x0002144c) aid_size_cell_graphic2_ParamLimits

0xcb33,	// (0x0002144c) aid_size_cell_graphic2

0xcb71,	// (0x0002148a) bg_popup_window_pane_cp21_ParamLimits

0xcb71,	// (0x0002148a) bg_popup_window_pane_cp21

0xcb7f,	// (0x00021498) graphic2_pages_pane_ParamLimits

0xcb7f,	// (0x00021498) graphic2_pages_pane

0xcbd7,	// (0x000214f0) grid_graphic2_control_pane_ParamLimits

0xcbd7,	// (0x000214f0) grid_graphic2_control_pane

0xcc1f,	// (0x00021538) grid_graphic2_pane_ParamLimits

0xcc1f,	// (0x00021538) grid_graphic2_pane

0xccaa,	// (0x000215c3) cell_graphic2_pane

0xb901,	// (0x0002021a) main_comp_mode_pane

0x5773,	// (0x0001a08c) list_ai3_gene_pane_ParamLimits

0xc4f6,	// (0x00020e0f) bg_popup_window_pane_cp19_ParamLimits

0x5baa,	// (0x0001a4c3) bg_touch_area_indi_pane_ParamLimits

0x5baa,	// (0x0001a4c3) bg_touch_area_indi_pane

0x5bc0,	// (0x0001a4d9) bg_touch_area_indi_pane_cp01_ParamLimits

0x5bc0,	// (0x0001a4d9) bg_touch_area_indi_pane_cp01

0x5bd8,	// (0x0001a4f1) bg_touch_area_indi_pane_cp02_ParamLimits

0x5bd8,	// (0x0001a4f1) bg_touch_area_indi_pane_cp02

0x5bf2,	// (0x0001a50b) bg_touch_area_indi_pane_cp03_ParamLimits

0x5bf2,	// (0x0001a50b) bg_touch_area_indi_pane_cp03

0x5c0c,	// (0x0001a525) popup_slider_window_g1_ParamLimits

0x5c28,	// (0x0001a541) popup_slider_window_g2_ParamLimits

0x5c44,	// (0x0001a55d) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x0002460f) popup_slider_window_g_ParamLimits

0x5ca0,	// (0x0001a5b9) popup_slider_window_t1_ParamLimits

0x5d14,	// (0x0001a62d) small_volume_slider_vertical_pane_ParamLimits

0xccaa,	// (0x000215c3) cell_graphic2_pane_ParamLimits

0xcd0d,	// (0x00021626) bg_button_pane_cp10_ParamLimits

0xcd0d,	// (0x00021626) bg_button_pane_cp10

0xcd20,	// (0x00021639) bg_button_pane_cp11_ParamLimits

0xcd20,	// (0x00021639) bg_button_pane_cp11

0xcd33,	// (0x0002164c) graphic2_pages_pane_g1_ParamLimits

0xcd33,	// (0x0002164c) graphic2_pages_pane_g1

0xcd4e,	// (0x00021667) graphic2_pages_pane_g2_ParamLimits

0xcd4e,	// (0x00021667) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x000246d3) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x000246d3) graphic2_pages_pane_g

0xcd66,	// (0x0002167f) graphic2_pages_pane_t1_ParamLimits

0xcd66,	// (0x0002167f) graphic2_pages_pane_t1

0xcd7e,	// (0x00021697) cell_graphic2_control_pane_ParamLimits

0xcd7e,	// (0x00021697) cell_graphic2_control_pane

0xcdb2,	// (0x000216cb) cell_graphic2_pane_g1_ParamLimits

0xcdb2,	// (0x000216cb) cell_graphic2_pane_g1

0xb8df,	// (0x000201f8) cell_graphic2_pane_g2_ParamLimits

0xb8df,	// (0x000201f8) cell_graphic2_pane_g2

0xbf53,	// (0x0002086c) cell_graphic2_pane_g3_ParamLimits

0xbf53,	// (0x0002086c) cell_graphic2_pane_g3

0xb8ec,	// (0x00020205) cell_graphic2_pane_g4_ParamLimits

0xb8ec,	// (0x00020205) cell_graphic2_pane_g4

0xcdbf,	// (0x000216d8) cell_graphic2_pane_g5_ParamLimits

0xcdbf,	// (0x000216d8) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x000246d8) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x000246d8) cell_graphic2_pane_g

0xcddf,	// (0x000216f8) cell_graphic2_pane_t1_ParamLimits

0xcddf,	// (0x000216f8) cell_graphic2_pane_t1

0x24c8,	// (0x00016de1) grid_highlight_pane_cp11_ParamLimits

0x24c8,	// (0x00016de1) grid_highlight_pane_cp11

0xbaca,	// (0x000203e3) bg_button_pane_cp05

0xce14,	// (0x0002172d) cell_graphic2_control_pane_g1

0x425a,	// (0x00018b73) bg_touch_area_indi_pane_g1

0x6823,	// (0x0001b13c) aid_cmod_rocker_key_size

0x682d,	// (0x0001b146) aid_cmode_itu_key_size

0x6837,	// (0x0001b150) main_cmode_video_pane

0x6841,	// (0x0001b15a) main_comp_mode_itu_pane

0x684d,	// (0x0001b166) main_comp_mode_rocker_pane

0x6859,	// (0x0001b172) cell_cmode_rocker_pane_ParamLimits

0x6859,	// (0x0001b172) cell_cmode_rocker_pane

0x686d,	// (0x0001b186) cell_cmode_itu_pane_ParamLimits

0x686d,	// (0x0001b186) cell_cmode_itu_pane

0xd9ca,	// (0x000222e3) bg_button_pane_cp06_ParamLimits

0xd9ca,	// (0x000222e3) bg_button_pane_cp06

0x44d5,	// (0x00018dee) cell_cmode_rocker_pane_g1_ParamLimits

0x44d5,	// (0x00018dee) cell_cmode_rocker_pane_g1

0x5dbb,	// (0x0001a6d4) cell_cmode_rocker_pane_g2_ParamLimits

0x5dbb,	// (0x0001a6d4) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x000246e8) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x000246e8) cell_cmode_rocker_pane_g

0xb901,	// (0x0002021a) bg_button_pane_cp07

0x6884,	// (0x0001b19d) cell_cmode_itu_pane_g1

0x688d,	// (0x0001b1a6) cell_cmode_itu_pane_t1

0x689b,	// (0x0001b1b4) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x000246ed) cell_cmode_itu_pane_t

0x5fe9,	// (0x0001a902) aid_touch_ctrl_left

0x5ff1,	// (0x0001a90a) aid_touch_ctrl_right

0xb901,	// (0x0002021a) compa_mode_pane

0xce3a,	// (0x00021753) aid_cmod_rocker_key_size_cp

0xce44,	// (0x0002175d) aid_cmode_itu_key_size_cp

0x68bd,	// (0x0001b1d6) compa_mode_pane_g1

0x68c5,	// (0x0001b1de) compa_mode_pane_g2

0x68cd,	// (0x0001b1e6) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x000246f2) compa_mode_pane_g

0xce4e,	// (0x00021767) main_comp_mode_itu_pane_cp

0xce56,	// (0x0002176f) main_comp_mode_rocker_pane_cp

0xce5e,	// (0x00021777) cell_cmode_itu_pane_cp_ParamLimits

0xce5e,	// (0x00021777) cell_cmode_itu_pane_cp

0xce73,	// (0x0002178c) cell_cmode_rocker_pane_cp_ParamLimits

0xce73,	// (0x0002178c) cell_cmode_rocker_pane_cp

0xd9ca,	// (0x000222e3) bg_button_pane_cp06_cp_ParamLimits

0xd9ca,	// (0x000222e3) bg_button_pane_cp06_cp

0x44d5,	// (0x00018dee) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x44d5,	// (0x00018dee) cell_cmode_rocker_pane_g1_cp

0x425a,	// (0x00018b73) cell_cmode_rocker_pane_g2_cp

0xb901,	// (0x0002021a) bg_button_pane_cp07_cp

0xce85,	// (0x0002179e) cell_cmode_itu_pane_g1_cp

0xce8e,	// (0x000217a7) cell_cmode_itu_pane_t1_cp

0xce8e,	// (0x000217a7) cell_cmode_itu_pane_t2_cp

0xb22a,	// (0x0001fb43) settings_code_pane_cp2

0xb97d,	// (0x00020296) bg_popup_window_pane_cp3_ParamLimits

0xbcb8,	// (0x000205d1) heading_pane_cp3_ParamLimits

0xbcc4,	// (0x000205dd) listscroll_popup_graphic_pane_ParamLimits

0xeb40,	// (0x00023459) fep_hwr_aid_pane_ParamLimits

0xef2d,	// (0x00023846) aid_touch_sctrl_top_ParamLimits

0xef48,	// (0x00023861) sctrl_sk_top_pane_g1_ParamLimits

0xed32,	// (0x0002364b) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00024628) sctrl_sk_top_pane_g_ParamLimits

0xef55,	// (0x0002386e) sctrl_sk_top_pane_t1_ParamLimits

0xef2d,	// (0x00023846) aid_touch_sctrl_bottom_ParamLimits

0xef55,	// (0x0002386e) sctrl_sk_bottom_pane_t1_ParamLimits

0x5f2f,	// (0x0001a848) aid_area_touch_clock

0x8f42,	// (0x0001d85b) aid_vkb2_area_top_pane_cell_ParamLimits

0x8f42,	// (0x0001d85b) aid_vkb2_area_top_pane_cell

0x8fed,	// (0x0001d906) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8fed,	// (0x0001d906) aid_vkb2_area_bottom_pane_cell

0x6494,	// (0x0001adad) popup_char_count_window

0x6923,	// (0x0001b23c) popup_char_count_window_g1

0x692c,	// (0x0001b245) popup_char_count_window_g2

0x6935,	// (0x0001b24e) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x000246f9) popup_char_count_window_g

0x693e,	// (0x0001b257) popup_char_count_window_t1

0xef95,	// (0x000238ae) popup_fep_char_preview_window_ParamLimits

0xef95,	// (0x000238ae) popup_fep_char_preview_window

0x8f62,	// (0x0001d87b) vkb2_top_candi_pane_ParamLimits

0x8f62,	// (0x0001d87b) vkb2_top_candi_pane

0xce9c,	// (0x000217b5) cell_vkb2_top_candi_pane_ParamLimits

0xce9c,	// (0x000217b5) cell_vkb2_top_candi_pane

0xf226,	// (0x00023b3f) bg_popup_fep_char_preview_window_ParamLimits

0xf226,	// (0x00023b3f) bg_popup_fep_char_preview_window

0xf234,	// (0x00023b4d) popup_fep_char_preview_window_t1_ParamLimits

0xf234,	// (0x00023b4d) popup_fep_char_preview_window_t1

0x699d,	// (0x0001b2b6) bg_popup_fep_char_preview_window_g1

0x69a5,	// (0x0001b2be) bg_popup_fep_char_preview_window_g2

0x69ad,	// (0x0001b2c6) bg_popup_fep_char_preview_window_g3

0x69b5,	// (0x0001b2ce) bg_popup_fep_char_preview_window_g4

0x69bd,	// (0x0001b2d6) bg_popup_fep_char_preview_window_g5

0xf26e,	// (0x00023b87) bg_popup_fep_char_preview_window_g6

0x69c5,	// (0x0001b2de) bg_popup_fep_char_preview_window_g7

0x69cd,	// (0x0001b2e6) bg_popup_fep_char_preview_window_g8

0x69d5,	// (0x0001b2ee) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00024700) bg_popup_fep_char_preview_window_g

0xed32,	// (0x0002364b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xed32,	// (0x0002364b) cell_vkb2_top_candi_pane_g1

0xed40,	// (0x00023659) cell_vkb2_top_candi_pane_g2_ParamLimits

0xed40,	// (0x00023659) cell_vkb2_top_candi_pane_g2

0x5657,	// (0x00019f70) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5657,	// (0x00019f70) cell_vkb2_top_candi_pane_g3

0xf276,	// (0x00023b8f) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf276,	// (0x00023b8f) cell_vkb2_top_candi_pane_g4

0x4b99,	// (0x000194b2) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4b99,	// (0x000194b2) cell_vkb2_top_candi_pane_g5

0xef79,	// (0x00023892) cell_vkb2_top_candi_pane_g6_ParamLimits

0xef79,	// (0x00023892) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x00024713) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x00024713) cell_vkb2_top_candi_pane_g

0xf297,	// (0x00023bb0) cell_vkb2_top_candi_pane_t1

0xe94f,	// (0x00023268) aid_size_touch_slider_mark_ParamLimits

0xe94f,	// (0x00023268) aid_size_touch_slider_mark

0xcbbb,	// (0x000214d4) grid_graphic2_catg_pane_ParamLimits

0xcbbb,	// (0x000214d4) grid_graphic2_catg_pane

0xcc79,	// (0x00021592) popup_grid_graphic2_window_t1_ParamLimits

0xcc79,	// (0x00021592) popup_grid_graphic2_window_t1

0xcc8f,	// (0x000215a8) popup_grid_graphic2_window_t2_ParamLimits

0xcc8f,	// (0x000215a8) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x000246ce) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x000246ce) popup_grid_graphic2_window_t

0xbaca,	// (0x000203e3) bg_button_pane_cp05_ParamLimits

0xce14,	// (0x0002172d) cell_graphic2_control_pane_g1_ParamLimits

0xcf06,	// (0x0002181f) cell_graphic2_catg_pane_ParamLimits

0xcf06,	// (0x0002181f) cell_graphic2_catg_pane

0xb901,	// (0x0002021a) bg_button_pane_cp12

0xcf18,	// (0x00021831) cell_graphic2_catg_pane_g1

0x5efb,	// (0x0001a814) cell_tb_ext_pane_t1_ParamLimits

0xf084,	// (0x0002399d) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf084,	// (0x0002399d) vkb2_top_cell_right_narrow_pane

0xf09c,	// (0x000239b5) vkb2_top_cell_right_wide_pane_ParamLimits

0xf09c,	// (0x000239b5) vkb2_top_cell_right_wide_pane

0xeb32,	// (0x0002344b) bg_vkb2_func_pane_ParamLimits

0xeb32,	// (0x0002344b) bg_vkb2_func_pane

0xf0e1,	// (0x000239fa) vkb2_top_cell_left_pane_g1_ParamLimits

0xeb32,	// (0x0002344b) bg_vkb2_fuc_pane_cp03_ParamLimits

0xeb32,	// (0x0002344b) bg_vkb2_fuc_pane_cp03

0xf13f,	// (0x00023a58) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1728,	// (0x00016041) bg_vkb2_func_pane_g1

0x1730,	// (0x00016049) bg_vkb2_func_pane_g2

0x1740,	// (0x00016059) bg_vkb2_func_pane_g3

0x1738,	// (0x00016051) bg_vkb2_func_pane_g4

0x1748,	// (0x00016061) bg_vkb2_func_pane_g5

0x1750,	// (0x00016069) bg_vkb2_func_pane_g6

0x1758,	// (0x00016071) bg_vkb2_func_pane_g7

0x1760,	// (0x00016079) bg_vkb2_func_pane_g8

0x1720,	// (0x00016039) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x00024720) bg_vkb2_func_pane_g

0xeb32,	// (0x0002344b) bg_vkb2_fuc_pane_cp01_ParamLimits

0xeb32,	// (0x0002344b) bg_vkb2_fuc_pane_cp01

0xf0e1,	// (0x000239fa) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf0e1,	// (0x000239fa) vkb2_top_cell_right_wide_pane_g1

0xeb32,	// (0x0002344b) bg_vkb2_fuc_pane_cp02_ParamLimits

0xeb32,	// (0x0002344b) bg_vkb2_fuc_pane_cp02

0xf13f,	// (0x00023a58) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf13f,	// (0x00023a58) vkb2_top_cell_right_narrow_pane_g1

0xc430,	// (0x00020d49) aid_touch_area_decrease_ParamLimits

0xc430,	// (0x00020d49) aid_touch_area_decrease

0xc46a,	// (0x00020d83) aid_touch_area_increase_ParamLimits

0xc46a,	// (0x00020d83) aid_touch_area_increase

0xc492,	// (0x00020dab) aid_touch_area_mute_ParamLimits

0xc492,	// (0x00020dab) aid_touch_area_mute

0xc4c2,	// (0x00020ddb) aid_touch_area_slider_ParamLimits

0xc4c2,	// (0x00020ddb) aid_touch_area_slider

0xc502,	// (0x00020e1b) popup_slider_window_g4_ParamLimits

0xc502,	// (0x00020e1b) popup_slider_window_g4

0xc52a,	// (0x00020e43) popup_slider_window_g5_ParamLimits

0xc52a,	// (0x00020e43) popup_slider_window_g5

0xc55e,	// (0x00020e77) popup_slider_window_g6_ParamLimits

0xc55e,	// (0x00020e77) popup_slider_window_g6

0x5cce,	// (0x0001a5e7) popup_slider_window_t2_ParamLimits

0x5cce,	// (0x0001a5e7) popup_slider_window_t2

0x0001,

0xfd03,	// (0x0002461c) popup_slider_window_t_ParamLimits

0xfd03,	// (0x0002461c) popup_slider_window_t

0xc57a,	// (0x00020e93) slider_pane_ParamLimits

0xc57a,	// (0x00020e93) slider_pane

0x69f8,	// (0x0001b311) slider_pane_g1_ParamLimits

0x69f8,	// (0x0001b311) slider_pane_g1

0x6a0c,	// (0x0001b325) slider_pane_g2_ParamLimits

0x6a0c,	// (0x0001b325) slider_pane_g2

0x6a22,	// (0x0001b33b) slider_pane_g3_ParamLimits

0x6a22,	// (0x0001b33b) slider_pane_g3

0x0003,

0xfe1a,	// (0x00024733) slider_pane_g_ParamLimits

0xfe1a,	// (0x00024733) slider_pane_g

0xa8b6,	// (0x0001f1cf) popup_tb_float_extension_window_ParamLimits

0xa8b6,	// (0x0001f1cf) popup_tb_float_extension_window

0x6a4e,	// (0x0001b367) aid_size_cell_tb_float_ext

0xb901,	// (0x0002021a) bg_popup_sub_window_cp28

0x6a5a,	// (0x0001b373) grid_tb_float_ext_pane

0x6a66,	// (0x0001b37f) cell_tb_float_ext_pane_ParamLimits

0x6a66,	// (0x0001b37f) cell_tb_float_ext_pane

0x6a82,	// (0x0001b39b) cell_tb_float_ext_pane_g1

0x6a8b,	// (0x0001b3a4) grid_highlight_pane_cp12

0x8d3b,	// (0x0001d654) cell_last_hwr_side_pane_ParamLimits

0x8d3b,	// (0x0001d654) cell_last_hwr_side_pane

0x425a,	// (0x00018b73) cell_last_hwr_side_pane_g1

0x6a94,	// (0x0001b3ad) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x0002473c) cell_last_hwr_side_pane_g

0x90c9,	// (0x0001d9e2) vkb2_area_bottom_space_btn_pane_ParamLimits

0x90c9,	// (0x0001d9e2) vkb2_area_bottom_space_btn_pane

0xed32,	// (0x0002364b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6549,	// (0x0001ae62) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf297,	// (0x00023bb0) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf2b5,	// (0x00023bce) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf2b5,	// (0x00023bce) vkb2_area_bottom_space_btn_pane_g1

0xf2ef,	// (0x00023c08) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf2ef,	// (0x00023c08) vkb2_area_bottom_space_btn_pane_g2

0xf325,	// (0x00023c3e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf325,	// (0x00023c3e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x00024741) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x00024741) vkb2_area_bottom_space_btn_pane_g

0xebf7,	// (0x00023510) cel_fep_hwr_func_pane_ParamLimits

0xebf7,	// (0x00023510) cel_fep_hwr_func_pane

0x8d10,	// (0x0001d629) cell_hwr_side_button_pane_ParamLimits

0x8d10,	// (0x0001d629) cell_hwr_side_button_pane

0x5f2f,	// (0x0001a848) aid_area_touch_clock_ParamLimits

0xbaca,	// (0x000203e3) bg_uniindi_top_pane_ParamLimits

0x5f43,	// (0x0001a85c) uniindi_top_pane_g1_ParamLimits

0x5f59,	// (0x0001a872) uniindi_top_pane_g2_ParamLimits

0x5f65,	// (0x0001a87e) uniindi_top_pane_g3_ParamLimits

0x5f76,	// (0x0001a88f) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x00024654) uniindi_top_pane_g_ParamLimits

0x5f83,	// (0x0001a89c) uniindi_top_pane_t1_ParamLimits

0xbaca,	// (0x000203e3) bg_vkb2_func_pane_cp01_ParamLimits

0xbaca,	// (0x000203e3) bg_vkb2_func_pane_cp01

0x6a9d,	// (0x0001b3b6) cel_fep_hwr_func_pane_g1_ParamLimits

0x6a9d,	// (0x0001b3b6) cel_fep_hwr_func_pane_g1

0xbaca,	// (0x000203e3) bg_vkb2_func_pane_cp02_ParamLimits

0xbaca,	// (0x000203e3) bg_vkb2_func_pane_cp02

0x6a9d,	// (0x0001b3b6) cell_hwr_side_button_pane_g1_ParamLimits

0x6a9d,	// (0x0001b3b6) cell_hwr_side_button_pane_g1

0x1573,	// (0x00015e8c) status_pane_g4_ParamLimits

0x1573,	// (0x00015e8c) status_pane_g4

0x158d,	// (0x00015ea6) status_pane_t1

0x3ff9,	// (0x00018912) form2_midp_gauge_slider_cont_pane

0x4001,	// (0x0001891a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb56b,	// (0x0001fe84) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb57d,	// (0x0001fe96) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00024414) form2_midp_gauge_slider_pane_t_ParamLimits

0x4037,	// (0x00018950) form2_midp_slider_pane_ParamLimits

0xef87,	// (0x000238a0) aid_size_cell_func_vkb2_ParamLimits

0xef87,	// (0x000238a0) aid_size_cell_func_vkb2

0x6a3a,	// (0x0001b353) slider_pane_g4_ParamLimits

0x6a3a,	// (0x0001b353) slider_pane_g4

0x912a,	// (0x0001da43) form2_midp_gauge_slider_pane_t2_cp01

0x9138,	// (0x0001da51) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9138,	// (0x0001da51) form2_midp_gauge_slider_pane_t3_cp01

0xf36f,	// (0x00023c88) form2_midp_slider_pane_cp01

0xb901,	// (0x0002021a) navi_smil_pane

0x6ad6,	// (0x0001b3ef) navi_smil_pane_g1

0x6ade,	// (0x0001b3f7) navi_smil_pane_t1

0x6aab,	// (0x0001b3c4) form2_midp_slider_pane_g1

0x6ab4,	// (0x0001b3cd) form2_midp_slider_pane_g2

0x6abc,	// (0x0001b3d5) form2_midp_slider_pane_g3

0x6aab,	// (0x0001b3c4) form2_midp_slider_pane_g4

0xcf21,	// (0x0002183a) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x0002474a) form2_midp_slider_pane_g

0xf35f,	// (0x00023c78) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf35f,	// (0x00023c78) vkb2_area_bottom_space_btn_pane_g4

0xaa9d,	// (0x0001f3b6) lc0_navi_pane_ParamLimits

0xaa9d,	// (0x0001f3b6) lc0_navi_pane

0xab0d,	// (0x0001f426) lc0_stat_indi_pane_ParamLimits

0xab0d,	// (0x0001f426) lc0_stat_indi_pane

0xab22,	// (0x0001f43b) ls0_title_pane_ParamLimits

0xab22,	// (0x0001f43b) ls0_title_pane

0xd9ca,	// (0x000222e3) bg_popup_sub_pane_cp14_ParamLimits

0x5f16,	// (0x0001a82f) list_uniindi_pane_ParamLimits

0x5f22,	// (0x0001a83b) uniindi_top_pane_ParamLimits

0x5fc1,	// (0x0001a8da) list_single_uniindi_pane_g1_ParamLimits

0x5fd4,	// (0x0001a8ed) list_single_uniindi_pane_t1_ParamLimits

0x9155,	// (0x0001da6e) lc0_stat_clock_pane_ParamLimits

0x9155,	// (0x0001da6e) lc0_stat_clock_pane

0xcf2a,	// (0x00021843) lc0_stat_indi_pane_g1_ParamLimits

0xcf2a,	// (0x00021843) lc0_stat_indi_pane_g1

0xcf37,	// (0x00021850) lc0_stat_indi_pane_g2_ParamLimits

0xcf37,	// (0x00021850) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x00024755) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x00024755) lc0_stat_indi_pane_g

0x9162,	// (0x0001da7b) lc0_uni_indicator_pane_ParamLimits

0x9162,	// (0x0001da7b) lc0_uni_indicator_pane

0xcf44,	// (0x0002185d) ls0_title_pane_g1_ParamLimits

0xcf44,	// (0x0002185d) ls0_title_pane_g1

0xcf58,	// (0x00021871) ls0_title_pane_t1_ParamLimits

0xcf58,	// (0x00021871) ls0_title_pane_t1

0x916f,	// (0x0001da88) lc0_uni_indicator_pane_g1_ParamLimits

0x916f,	// (0x0001da88) lc0_uni_indicator_pane_g1

0x6b50,	// (0x0001b469) lc0_stat_clock_pane_t1

0xb901,	// (0x0002021a) main_ai5_pane

0x6b5e,	// (0x0001b477) ai5_sk_pane_ParamLimits

0x6b5e,	// (0x0001b477) ai5_sk_pane

0xcf86,	// (0x0002189f) cell_ai5_widget_pane_ParamLimits

0xcf86,	// (0x0002189f) cell_ai5_widget_pane

0x7107,	// (0x0001ba20) aid_size_cell_widget_grid

0x7115,	// (0x0001ba2e) bg_ai5_widget_pane_ParamLimits

0x7115,	// (0x0001ba2e) bg_ai5_widget_pane

0x7189,	// (0x0001baa2) cell_ai5_widget_pane_g2

0x7199,	// (0x0001bab2) cell_ai5_widget_pane_g3

0x71b0,	// (0x0001bac9) cell_ai5_widget_pane_g4

0x71bc,	// (0x0001bad5) cell_ai5_widget_pane_g5

0xd2dd,	// (0x00021bf6) cell_ai5_widget_pane_g6

0xd2e9,	// (0x00021c02) cell_ai5_widget_pane_g7

0x721c,	// (0x0001bb35) cell_ai5_widget_pane_t1_ParamLimits

0x721c,	// (0x0001bb35) cell_ai5_widget_pane_t1

0x7239,	// (0x0001bb52) cell_ai5_widget_pane_t2_ParamLimits

0x7239,	// (0x0001bb52) cell_ai5_widget_pane_t2

0x7251,	// (0x0001bb6a) cell_ai5_widget_pane_t3_ParamLimits

0x7251,	// (0x0001bb6a) cell_ai5_widget_pane_t3

0x7269,	// (0x0001bb82) cell_ai5_widget_pane_t4_ParamLimits

0x7269,	// (0x0001bb82) cell_ai5_widget_pane_t4

0x7286,	// (0x0001bb9f) cell_ai5_widget_pane_t5_ParamLimits

0x7286,	// (0x0001bb9f) cell_ai5_widget_pane_t5

0x72a5,	// (0x0001bbbe) cell_ai5_widget_pane_t6_ParamLimits

0x72a5,	// (0x0001bbbe) cell_ai5_widget_pane_t6

0x72b7,	// (0x0001bbd0) cell_ai5_widget_pane_t7_ParamLimits

0x72b7,	// (0x0001bbd0) cell_ai5_widget_pane_t7

0x72d0,	// (0x0001bbe9) cell_ai5_widget_pane_t8_ParamLimits

0x72d0,	// (0x0001bbe9) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x0002476f) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x0002476f) cell_ai5_widget_pane_t

0x7324,	// (0x0001bc3d) grid_ai5_widget_pane

0xd9ca,	// (0x000222e3) highlight_cell_ai5_widget_pane_ParamLimits

0xd9ca,	// (0x000222e3) highlight_cell_ai5_widget_pane

0xd2f5,	// (0x00021c0e) ai5_sk_left_pane

0xd2ff,	// (0x00021c18) ai5_sk_middle_pane

0xd309,	// (0x00021c22) ai5_sk_right_pane

0x7350,	// (0x0001bc69) bg_ai5_widget_pane_g1_ParamLimits

0x7350,	// (0x0001bc69) bg_ai5_widget_pane_g1

0x735c,	// (0x0001bc75) bg_ai5_widget_pane_g2_ParamLimits

0x735c,	// (0x0001bc75) bg_ai5_widget_pane_g2

0x7368,	// (0x0001bc81) bg_ai5_widget_pane_g3_ParamLimits

0x7368,	// (0x0001bc81) bg_ai5_widget_pane_g3

0x7374,	// (0x0001bc8d) bg_ai5_widget_pane_g4_ParamLimits

0x7374,	// (0x0001bc8d) bg_ai5_widget_pane_g4

0x7380,	// (0x0001bc99) bg_ai5_widget_pane_g5_ParamLimits

0x7380,	// (0x0001bc99) bg_ai5_widget_pane_g5

0x738c,	// (0x0001bca5) bg_ai5_widget_pane_g6_ParamLimits

0x738c,	// (0x0001bca5) bg_ai5_widget_pane_g6

0x7398,	// (0x0001bcb1) bg_ai5_widget_pane_g7_ParamLimits

0x7398,	// (0x0001bcb1) bg_ai5_widget_pane_g7

0x73a4,	// (0x0001bcbd) bg_ai5_widget_pane_g8_ParamLimits

0x73a4,	// (0x0001bcbd) bg_ai5_widget_pane_g8

0x73b0,	// (0x0001bcc9) bg_ai5_widget_pane_g9_ParamLimits

0x73b0,	// (0x0001bcc9) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x00024784) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x00024784) bg_ai5_widget_pane_g

0x73e8,	// (0x0001bd01) cell_shortcut_ai5_widget_pane_ParamLimits

0x73e8,	// (0x0001bd01) cell_shortcut_ai5_widget_pane

0x0823,	// (0x0001513c) bg_cell_shortcut_ai5_widget_pane

0x73fb,	// (0x0001bd14) cell_grid_ai5_widget_pane_g1

0x0823,	// (0x0001513c) highlight_cell_shortcut_ai5_widget_pane

0x1728,	// (0x00016041) ai5_sk_left_pane_g1

0x7404,	// (0x0001bd1d) ai5_sk_left_pane_g2

0x740c,	// (0x0001bd25) ai5_sk_left_pane_g3

0x7414,	// (0x0001bd2d) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00024797) ai5_sk_left_pane_g

0x741c,	// (0x0001bd35) ai5_sk_left_pane_t1

0x1730,	// (0x00016049) ai5_sk_right_pane_g1

0x742a,	// (0x0001bd43) ai5_sk_right_pane_g2

0x7432,	// (0x0001bd4b) ai5_sk_right_pane_g3

0x743a,	// (0x0001bd53) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x000247a0) ai5_sk_right_pane_g

0x7442,	// (0x0001bd5b) ai5_sk_right_pane_t1

0x1730,	// (0x00016049) ai5_sk_middle_pane_g1

0x1728,	// (0x00016041) ai5_sk_middle_pane_g2

0x1748,	// (0x00016061) ai5_sk_middle_pane_g3

0x7432,	// (0x0001bd4b) ai5_sk_middle_pane_g4

0x740c,	// (0x0001bd25) ai5_sk_middle_pane_g5

0x7450,	// (0x0001bd69) ai5_sk_middle_pane_g6

0xd313,	// (0x00021c2c) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x000247a9) ai5_sk_middle_pane_g

0xa987,	// (0x0001f2a0) aid_touch_area_size_lc0_ParamLimits

0xa987,	// (0x0001f2a0) aid_touch_area_size_lc0

0xed61,	// (0x0002367a) cell_hwr_candidate_pane_t1_ParamLimits

0x122a,	// (0x00015b43) aid_touch_navi_pane

0xac2d,	// (0x0001f546) status_dt_navi_pane_ParamLimits

0xac2d,	// (0x0001f546) status_dt_navi_pane

0xac45,	// (0x0001f55e) status_dt_sta_pane_ParamLimits

0xac45,	// (0x0001f55e) status_dt_sta_pane

0xd31b,	// (0x00021c34) dt_sta_controll_pane

0xd328,	// (0x00021c41) dt_sta_indi_pane

0xd335,	// (0x00021c4e) dt_sta_title_pane

0xbaca,	// (0x000203e3) bg_dt_sta_indi_pane_ParamLimits

0xbaca,	// (0x000203e3) bg_dt_sta_indi_pane

0xd347,	// (0x00021c60) dt_sta_battery_pane

0xd34f,	// (0x00021c68) dt_sta_indi_pane_g1

0xd358,	// (0x00021c71) dt_sta_indi_pane_g2

0xd361,	// (0x00021c7a) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x000247b8) dt_sta_indi_pane_g

0xd36a,	// (0x00021c83) dt_sta_signal_pane

0xd9ca,	// (0x000222e3) bg_dt_sta_title_pane_ParamLimits

0xd9ca,	// (0x000222e3) bg_dt_sta_title_pane

0xd373,	// (0x00021c8c) dt_sta_title_pane_g1

0xd37b,	// (0x00021c94) dt_sta_title_pane_t1_ParamLimits

0xd37b,	// (0x00021c94) dt_sta_title_pane_t1

0xb901,	// (0x0002021a) bg_dt_sta_control_pane

0xd390,	// (0x00021ca9) dt_sta_controll_pane_g1

0xd399,	// (0x00021cb2) bg_dt_sta_title_pane_g1

0xd3a2,	// (0x00021cbb) bg_dt_sta_title_pane_g2

0xd3ab,	// (0x00021cc4) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x000247bf) bg_dt_sta_title_pane_g

0x425a,	// (0x00018b73) bg_dt_sta_indi_pane_g1

0x74fe,	// (0x0001be17) dt_sta_signal_pane_g1

0x7506,	// (0x0001be1f) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x000247c6) dt_sta_signal_pane_g

0x750e,	// (0x0001be27) dt_sta_battery_pane_g1

0x7517,	// (0x0001be30) dt_sta_battery_pane_t1

0x425a,	// (0x00018b73) bg_dt_sta_control_pane_g1

0xe10c,	// (0x00022a25) fep_china_uni_eep_pane

0xe114,	// (0x00022a2d) fep_china_uni_entry_pane_ParamLimits

0xe124,	// (0x00022a3d) popup_fep_china_uni_window_g1_ParamLimits

0xe134,	// (0x00022a4d) popup_fep_china_uni_window_g2_ParamLimits

0xe134,	// (0x00022a4d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00024031) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00024031) popup_fep_china_uni_window_g

0x7526,	// (0x0001be3f) fep_china_uni_eep_pane_g1

0x752e,	// (0x0001be47) fep_china_uni_eep_pane_t1

0x6acd,	// (0x0001b3e6) aid_touch_area_size_smil_player

0x1382,	// (0x00015c9b) lc0_clock_pane

0x1581,	// (0x00015e9a) status_pane_g5_ParamLimits

0x1581,	// (0x00015e9a) status_pane_g5

0xa3dc,	// (0x0001ecf5) popup_keymap_window

0x153f,	// (0x00015e58) status_icon_pane

0x7199,	// (0x0001bab2) cell_ai5_widget_pane_g3_ParamLimits

0x71b0,	// (0x0001bac9) cell_ai5_widget_pane_g4_ParamLimits

0x71bc,	// (0x0001bad5) cell_ai5_widget_pane_g5_ParamLimits

0x71e0,	// (0x0001baf9) cell_ai5_widget_pane_g8_ParamLimits

0x71e0,	// (0x0001baf9) cell_ai5_widget_pane_g8

0x71f4,	// (0x0001bb0d) cell_ai5_widget_pane_g9_ParamLimits

0x71f4,	// (0x0001bb0d) cell_ai5_widget_pane_g9

0x7208,	// (0x0001bb21) cell_ai5_widget_pane_g10_ParamLimits

0x7208,	// (0x0001bb21) cell_ai5_widget_pane_g10

0x753d,	// (0x0001be56) status_icon_pane_g1

0xb901,	// (0x0002021a) bg_popup_sub_pane_cp13

0x7545,	// (0x0001be5e) popup_keymap_window_t1

0xa1ba,	// (0x0001ead3) control_pane_g6_ParamLimits

0xa1ba,	// (0x0001ead3) control_pane_g6

0xa1c7,	// (0x0001eae0) control_pane_g7_ParamLimits

0xa1c7,	// (0x0001eae0) control_pane_g7

0xa1d4,	// (0x0001eaed) control_pane_g8_ParamLimits

0xa1d4,	// (0x0001eaed) control_pane_g8

0xd31b,	// (0x00021c34) dt_sta_controll_pane_ParamLimits

0xd328,	// (0x00021c41) dt_sta_indi_pane_ParamLimits

0xd335,	// (0x00021c4e) dt_sta_title_pane_ParamLimits

0xbeee,	// (0x00020807) aid_size_touch_scroll_bar_cale

0xd81c,	// (0x00022135) popup_discreet_window_ParamLimits

0xd81c,	// (0x00022135) popup_discreet_window

0x88e9,	// (0x0001d202) popup_sk_window

0x1e51,	// (0x0001676a) bg_popup_sub_pane_cp28_ParamLimits

0x1e51,	// (0x0001676a) bg_popup_sub_pane_cp28

0x7553,	// (0x0001be6c) popup_discreet_window_g1_ParamLimits

0x7553,	// (0x0001be6c) popup_discreet_window_g1

0x7573,	// (0x0001be8c) popup_discreet_window_t1_ParamLimits

0x7573,	// (0x0001be8c) popup_discreet_window_t1

0x7591,	// (0x0001beaa) popup_discreet_window_t2_ParamLimits

0x7591,	// (0x0001beaa) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x000247cb) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x000247cb) popup_discreet_window_t

0xf378,	// (0x00023c91) popup_sk_window_g1

0xf382,	// (0x00023c9b) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x000247d2) popup_sk_window_g

0xf38c,	// (0x00023ca5) popup_sk_window_t1

0xf39c,	// (0x00023cb5) popup_sk_window_t1_copy1

0x7189,	// (0x0001baa2) cell_ai5_widget_pane_g2_ParamLimits

0x72e2,	// (0x0001bbfb) cell_ai5_widget_pane_t9_ParamLimits

0x72e2,	// (0x0001bbfb) cell_ai5_widget_pane_t9

0xb901,	// (0x0002021a) main_fep_fshwr2_pane

0x918e,	// (0x0001daa7) aid_fshwr2_btn_pane

0x919f,	// (0x0001dab8) aid_fshwr2_syb_pane

0x91b0,	// (0x0001dac9) aid_fshwr2_txt_pane

0x91bc,	// (0x0001dad5) fshwr2_func_candi_pane

0x91dd,	// (0x0001daf6) fshwr2_hwr_syb_pane

0x91fa,	// (0x0001db13) fshwr2_icf_pane

0xd73f,	// (0x00022058) fshwr2_icf_bg_pane

0xf3b8,	// (0x00023cd1) fshwr2_icf_pane_t1_ParamLimits

0xf3b8,	// (0x00023cd1) fshwr2_icf_pane_t1

0xe08a,	// (0x000229a3) fshwr2_func_candi_pane_g1

0xd3b4,	// (0x00021ccd) fshwr2_func_candi_row_pane_ParamLimits

0xd3b4,	// (0x00021ccd) fshwr2_func_candi_row_pane

0x9226,	// (0x0001db3f) cell_fshwr2_syb_pane_ParamLimits

0x9226,	// (0x0001db3f) cell_fshwr2_syb_pane

0xed32,	// (0x0002364b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xed32,	// (0x0002364b) fshwr2_hwr_syb_pane_g1

0xd73f,	// (0x00022058) bg_popup_call_pane_cp01

0x923c,	// (0x0001db55) fshwr2_func_candi_cell_pane_ParamLimits

0x923c,	// (0x0001db55) fshwr2_func_candi_cell_pane

0xd3c4,	// (0x00021cdd) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd3c4,	// (0x00021cdd) fshwr2_func_candi_cell_bg_pane

0x926c,	// (0x0001db85) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x926c,	// (0x0001db85) fshwr2_func_candi_cell_pane_g1

0x929b,	// (0x0001dbb4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x929b,	// (0x0001dbb4) fshwr2_func_candi_cell_pane_t1

0xd73f,	// (0x00022058) bg_button_pane_cp08

0x75ff,	// (0x0001bf18) cell_fshwr2_syb_bg_pane

0x92ae,	// (0x0001dbc7) cell_fshwr2_syb_bg_pane_g1

0x92b6,	// (0x0001dbcf) cell_fshwr2_syb_bg_pane_t1

0xd9ca,	// (0x000222e3) main_tmo_pane

0xb015,	// (0x0001f92e) uni_indicator_pane_g1_ParamLimits

0xb02b,	// (0x0001f944) uni_indicator_pane_g2_ParamLimits

0xb041,	// (0x0001f95a) uni_indicator_pane_g3_ParamLimits

0xb056,	// (0x0001f96f) uni_indicator_pane_g4_ParamLimits

0xb056,	// (0x0001f96f) uni_indicator_pane_g4

0x29ca,	// (0x000172e3) uni_indicator_pane_g5_ParamLimits

0x29ca,	// (0x000172e3) uni_indicator_pane_g5

0x29ca,	// (0x000172e3) uni_indicator_pane_g6_ParamLimits

0x29ca,	// (0x000172e3) uni_indicator_pane_g6

0xf917,	// (0x00024230) uni_indicator_pane_g_ParamLimits

0xc400,	// (0x00020d19) popup_tmo_note_window_ParamLimits

0xc400,	// (0x00020d19) popup_tmo_note_window

0xf3aa,	// (0x00023cc3) fshwr2_bg_pane

0x928c,	// (0x0001dba5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x928c,	// (0x0001dba5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x000247d7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x000247d7) fshwr2_func_candi_cell_pane_g

0xed1a,	// (0x00023633) bg_popup_window_pane_cp01

0xf3d0,	// (0x00023ce9) bg_popup_window_pane_g1_cp01

0x7607,	// (0x0001bf20) bg_popup_window_pane_cp22_ParamLimits

0x7607,	// (0x0001bf20) bg_popup_window_pane_cp22

0x7615,	// (0x0001bf2e) listscroll_tmo_link_pane_ParamLimits

0x7615,	// (0x0001bf2e) listscroll_tmo_link_pane

0x7655,	// (0x0001bf6e) popup_tmo_note_window_g1_ParamLimits

0x7655,	// (0x0001bf6e) popup_tmo_note_window_g1

0x7662,	// (0x0001bf7b) tmo_note_info_pane_ParamLimits

0x7662,	// (0x0001bf7b) tmo_note_info_pane

0xd3d0,	// (0x00021ce9) list_tmo_note_info_pane_g1_ParamLimits

0xd3d0,	// (0x00021ce9) list_tmo_note_info_pane_g1

0x7693,	// (0x0001bfac) list_tmo_note_info_pane_g2_ParamLimits

0x7693,	// (0x0001bfac) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x000247dc) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x000247dc) list_tmo_note_info_pane_g

0x76af,	// (0x0001bfc8) list_tmo_note_info_text_pane_ParamLimits

0x76af,	// (0x0001bfc8) list_tmo_note_info_text_pane

0x7734,	// (0x0001c04d) list_tmo_link_pane

0x7741,	// (0x0001c05a) scroll_pane_cp20

0x774e,	// (0x0001c067) list_single_tmo_link_pane_ParamLimits

0x774e,	// (0x0001c067) list_single_tmo_link_pane

0x775e,	// (0x0001c077) list_single_tmo_link_pane_t1

0x776c,	// (0x0001c085) list_tmo_note_info_text_pane_t1_ParamLimits

0x776c,	// (0x0001c085) list_tmo_note_info_text_pane_t1

0x9c5c,	// (0x0001e575) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9c5c,	// (0x0001e575) aid_size_touch_scroll_bar_cp01

0x9b8b,	// (0x0001e4a4) aid_size_touch_slider_marker

0x88d9,	// (0x0001d1f2) popup_settings_window_ParamLimits

0x88d9,	// (0x0001d1f2) popup_settings_window

0x0bd1,	// (0x000154ea) popup_candi_list_indi_window

0x122a,	// (0x00015b43) aid_touch_navi_pane_ParamLimits

0xef01,	// (0x0002381a) rs_clock_indi_pane

0xef0a,	// (0x00023823) sctrl_sk_bottom_pane_ParamLimits

0xef1b,	// (0x00023834) sctrl_sk_top_pane_ParamLimits

0xefaf,	// (0x000238c8) popup_fep_tooltip_window

0x7107,	// (0x0001ba20) aid_size_cell_widget_grid_ParamLimits

0x7174,	// (0x0001ba8d) cell_ai5_widget_pane_g1_ParamLimits

0x7174,	// (0x0001ba8d) cell_ai5_widget_pane_g1

0xd2dd,	// (0x00021bf6) cell_ai5_widget_pane_g6_ParamLimits

0xd2e9,	// (0x00021c02) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x0002475a) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x0002475a) cell_ai5_widget_pane_g

0x7306,	// (0x0001bc1f) cell_ai5_widget_pane_t10_ParamLimits

0x7306,	// (0x0001bc1f) cell_ai5_widget_pane_t10

0x7324,	// (0x0001bc3d) grid_ai5_widget_pane_ParamLimits

0x73bc,	// (0x0001bcd5) cell_contacts_ai5_widget_pane_ParamLimits

0x73bc,	// (0x0001bcd5) cell_contacts_ai5_widget_pane

0x75a6,	// (0x0001bebf) popup_discreet_window_t3_ParamLimits

0x75a6,	// (0x0001bebf) popup_discreet_window_t3

0x9212,	// (0x0001db2b) popup_fshwr2_char_preview_window_ParamLimits

0x9212,	// (0x0001db2b) popup_fshwr2_char_preview_window

0xd3e7,	// (0x00021d00) tmo_note_info_pane_t1

0xd3fc,	// (0x00021d15) tmo_note_info_pane_t2

0xd415,	// (0x00021d2e) tmo_note_info_pane_t3

0x7710,	// (0x0001c029) tmo_note_info_pane_t4

0x7722,	// (0x0001c03b) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x000247e1) tmo_note_info_pane_t

0x7734,	// (0x0001c04d) list_tmo_link_pane_ParamLimits

0x7741,	// (0x0001c05a) scroll_pane_cp20_ParamLimits

0xd73f,	// (0x00022058) bg_popup_fep_char_preview_window_cp01

0x7785,	// (0x0001c09e) popup_fshwr2_char_preview_window_t1

0x7793,	// (0x0001c0ac) popup_candi_list_indi_window_g1

0x779c,	// (0x0001c0b5) bg_cell_contacts_ai5_widget_pane

0x77a8,	// (0x0001c0c1) cell_contacts_ai5_widget_pane_g1

0x77bd,	// (0x0001c0d6) cell_contacts_ai5_widget_pane_g2

0x77c9,	// (0x0001c0e2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x000247ec) cell_contacts_ai5_widget_pane_g

0x77d5,	// (0x0001c0ee) cell_contacts_ai5_widget_pane_t1

0xd9ca,	// (0x000222e3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd48f,	// (0x00021da8) settings_container_pane

0x0823,	// (0x0001513c) listscroll_set_pane_copy1

0x364f,	// (0x00017f68) scroll_pane_cp121_copy1

0x7858,	// (0x0001c171) set_content_pane_copy1

0xd49b,	// (0x00021db4) aid_height_set_list_copy1_ParamLimits

0xd49b,	// (0x00021db4) aid_height_set_list_copy1

0x2bf2,	// (0x0001750b) aid_size_parent_copy1_ParamLimits

0x2bf2,	// (0x0001750b) aid_size_parent_copy1

0xd4a7,	// (0x00021dc0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd4a7,	// (0x00021dc0) button_value_adjust_pane_cp6_copy1

0x0ba9,	// (0x000154c2) list_highlight_pane_cp2_copy1_ParamLimits

0x0ba9,	// (0x000154c2) list_highlight_pane_cp2_copy1

0xd4bb,	// (0x00021dd4) list_set_pane_copy1_ParamLimits

0xd4bb,	// (0x00021dd4) list_set_pane_copy1

0xd42a,	// (0x00021d43) main_pane_set_t1_copy1_ParamLimits

0xd42a,	// (0x00021d43) main_pane_set_t1_copy1

0xd464,	// (0x00021d7d) main_pane_set_t2_copy1_ParamLimits

0xd464,	// (0x00021d7d) main_pane_set_t2_copy1

0xd582,	// (0x00021e9b) main_pane_set_t3_copy1

0xd590,	// (0x00021ea9) main_pane_set_t4_copy1

0xd483,	// (0x00021d9c) set_content_pane_g1_copy1_ParamLimits

0xd483,	// (0x00021d9c) set_content_pane_g1_copy1

0xd59e,	// (0x00021eb7) setting_code_pane_copy1

0x796b,	// (0x0001c284) setting_slider_graphic_pane_copy1

0x796b,	// (0x0001c284) setting_slider_pane_copy1

0x796b,	// (0x0001c284) setting_text_pane_copy1

0x796b,	// (0x0001c284) setting_volume_pane_copy1

0xd59e,	// (0x00021eb7) settings_code_pane_cp2_copy1

0xd5a6,	// (0x00021ebf) settings_code_pane_cp_copy1_ParamLimits

0xd5a6,	// (0x00021ebf) settings_code_pane_cp_copy1

0x92c5,	// (0x0001dbde) volume_set_pane_copy1

0xd5ba,	// (0x00021ed3) volume_set_pane_g10_copy1

0xd5c6,	// (0x00021edf) volume_set_pane_g1_copy1

0xd5d0,	// (0x00021ee9) volume_set_pane_g2_copy1

0xd5da,	// (0x00021ef3) volume_set_pane_g3_copy1

0xd5e4,	// (0x00021efd) volume_set_pane_g4_copy1

0xd5ee,	// (0x00021f07) volume_set_pane_g5_copy1

0xd5f8,	// (0x00021f11) volume_set_pane_g6_copy1

0xd602,	// (0x00021f1b) volume_set_pane_g7_copy1

0xd60c,	// (0x00021f25) volume_set_pane_g8_copy1

0xd616,	// (0x00021f2f) volume_set_pane_g9_copy1

0xb97d,	// (0x00020296) bg_set_opt_pane_cp_copy1_ParamLimits

0xb97d,	// (0x00020296) bg_set_opt_pane_cp_copy1

0xf3d9,	// (0x00023cf2) setting_slider_pane_t1_copy1_ParamLimits

0xf3d9,	// (0x00023cf2) setting_slider_pane_t1_copy1

0x92d1,	// (0x0001dbea) setting_slider_pane_t2_copy1_ParamLimits

0x92d1,	// (0x0001dbea) setting_slider_pane_t2_copy1

0x92eb,	// (0x0001dc04) setting_slider_pane_t3_copy1_ParamLimits

0x92eb,	// (0x0001dc04) setting_slider_pane_t3_copy1

0x9303,	// (0x0001dc1c) slider_set_pane_copy1_ParamLimits

0x9303,	// (0x0001dc1c) slider_set_pane_copy1

0xda93,	// (0x000223ac) set_opt_bg_pane_g1_copy2

0xda9b,	// (0x000223b4) set_opt_bg_pane_g2_copy2

0x79ed,	// (0x0001c306) set_opt_bg_pane_g3_copy2

0xdaab,	// (0x000223c4) set_opt_bg_pane_g4_copy2

0xdab3,	// (0x000223cc) set_opt_bg_pane_g5_copy2

0xdabb,	// (0x000223d4) set_opt_bg_pane_g6_copy2

0xd620,	// (0x00021f39) set_opt_bg_pane_g7_copy2

0x7a01,	// (0x0001c31a) set_opt_bg_pane_g8_copy2

0x7a0b,	// (0x0001c324) set_opt_bg_pane_g9_copy2

0xf3f7,	// (0x00023d10) aid_size_touch_slider_mark_copy1_ParamLimits

0xf3f7,	// (0x00023d10) aid_size_touch_slider_mark_copy1

0x7a15,	// (0x0001c32e) slider_set_pane_g1_copy1

0xf40b,	// (0x00023d24) slider_set_pane_g2_copy1

0xe96f,	// (0x00023288) slider_set_pane_g3_copy1_ParamLimits

0xe96f,	// (0x00023288) slider_set_pane_g3_copy1

0xe983,	// (0x0002329c) slider_set_pane_g4_copy1_ParamLimits

0xe983,	// (0x0002329c) slider_set_pane_g4_copy1

0xe99b,	// (0x000232b4) slider_set_pane_g5_copy1_ParamLimits

0xe99b,	// (0x000232b4) slider_set_pane_g5_copy1

0xe96f,	// (0x00023288) slider_set_pane_g6_copy1_ParamLimits

0xe96f,	// (0x00023288) slider_set_pane_g6_copy1

0x9319,	// (0x0001dc32) slider_set_pane_g7_copy1_ParamLimits

0x9319,	// (0x0001dc32) slider_set_pane_g7_copy1

0xb915,	// (0x0002022e) bg_set_opt_pane_cp2_copy1

0x7a1e,	// (0x0001c337) setting_slider_graphic_pane_g1_copy1

0xd62a,	// (0x00021f43) setting_slider_graphic_pane_t1_copy1

0xd63a,	// (0x00021f53) setting_slider_graphic_pane_t2_copy1

0xd64a,	// (0x00021f63) slider_set_pane_cp_copy1

0x7a57,	// (0x0001c370) input_focus_pane_cp1_copy1

0x7a60,	// (0x0001c379) list_set_text_pane_copy1

0x7a68,	// (0x0001c381) setting_text_pane_g1_copy1

0xb9a2,	// (0x000202bb) set_text_pane_t1_copy1

0x7a57,	// (0x0001c370) input_focus_pane_cp2_copy1

0x7a68,	// (0x0001c381) setting_code_pane_g1_copy1

0xd652,	// (0x00021f6b) setting_code_pane_t1_copy1

0xd660,	// (0x00021f79) list_set_graphic_pane_copy1

0xb915,	// (0x0002022e) bg_set_opt_pane_cp4_copy1

0x9fa1,	// (0x0001e8ba) list_set_graphic_pane_g1_copy1_ParamLimits

0x9fa1,	// (0x0001e8ba) list_set_graphic_pane_g1_copy1

0xd672,	// (0x00021f8b) list_set_graphic_pane_g2_copy1

0x9fb9,	// (0x0001e8d2) list_set_graphic_pane_t1_copy1_ParamLimits

0x9fb9,	// (0x0001e8d2) list_set_graphic_pane_t1_copy1

0x425a,	// (0x00018b73) rs_clock_indi_pane_g1

0x7ab2,	// (0x0001c3cb) rs_clock_indi_pane_t1

0x7ac0,	// (0x0001c3d9) rs_indi_pane

0x7ac8,	// (0x0001c3e1) rs_indi_pane_g1

0x7ad1,	// (0x0001c3ea) rs_indi_pane_g2

0x7ada,	// (0x0001c3f3) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x000247f3) rs_indi_pane_g

0x0823,	// (0x0001513c) bg_popup_preview_window_pane_cp03

0x7ae3,	// (0x0001c3fc) popup_fep_tooltip_window_t1

0x5121,	// (0x00019a3a) popup_note2_window_g2_ParamLimits

0x5121,	// (0x00019a3a) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0002458c) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0002458c) popup_note2_window_g

0x5739,	// (0x0001a052) bg_popup_sub_pane_cp11_ParamLimits

0x5746,	// (0x0001a05f) cell_ai3_links_pane_g1_ParamLimits

0x575d,	// (0x0001a076) cell_ai3_links_pane_t1

0xb9a2,	// (0x000202bb) set_text_pane_t1_copy1_ParamLimits

0xa038,	// (0x0001e951) cell_graphic_popup_pane_cp2_ParamLimits

0xa038,	// (0x0001e951) cell_graphic_popup_pane_cp2

0xd67a,	// (0x00021f93) cell_graphic_popup_pane_g1_cp2

0xbd01,	// (0x0002061a) cell_graphic_popup_pane_g2_cp2

0x7af9,	// (0x0001c412) cell_graphic_popup_pane_g3_cp2

0x7b01,	// (0x0001c41a) cell_graphic_popup_pane_t2_cp2

0xbd12,	// (0x0002062b) grid_highlight_pane_cp3_cp2

0xdeac,	// (0x000227c5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd9ca,	// (0x000222e3) main_tmo_pane_ParamLimits

0xc3f4,	// (0x00020d0d) popup_tmo_big_image_note_window

0x7163,	// (0x0001ba7c) cell_ai5_widget_list_pane

0x716b,	// (0x0001ba84) cell_ai5_widget_lrg_icon_pane

0xd3e7,	// (0x00021d00) tmo_note_info_pane_t1_ParamLimits

0xd3fc,	// (0x00021d15) tmo_note_info_pane_t2_ParamLimits

0xd415,	// (0x00021d2e) tmo_note_info_pane_t3_ParamLimits

0x7710,	// (0x0001c029) tmo_note_info_pane_t4_ParamLimits

0x7722,	// (0x0001c03b) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x000247e1) tmo_note_info_pane_t_ParamLimits

0xd48f,	// (0x00021da8) settings_container_pane_ParamLimits

0x7a4f,	// (0x0001c368) indicator_popup_pane_cp5

0x7a4f,	// (0x0001c368) indicator_popup_pane_cp6

0xd660,	// (0x00021f79) list_set_graphic_pane_copy1_ParamLimits

0xb901,	// (0x0002021a) bg_popup_window_pane_cp23

0x7b0f,	// (0x0001c428) popup_tmo_big_image_note_window_g1

0x7b1b,	// (0x0001c434) popup_tmo_big_image_note_window_t1

0x7b2b,	// (0x0001c444) popup_tmo_big_image_note_window_t2

0x7b3b,	// (0x0001c454) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x000247fa) popup_tmo_big_image_note_window_t

0x425a,	// (0x00018b73) cell_ai5_widget_lrg_icon_pane_g1

0x7b4b,	// (0x0001c464) cell_ai5_widget_lrg_icon_pane_t1

0x7b59,	// (0x0001c472) cell_ai5_widget_list_row_pane_ParamLimits

0x7b59,	// (0x0001c472) cell_ai5_widget_list_row_pane

0x7b71,	// (0x0001c48a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7b71,	// (0x0001c48a) cell_ai5_widget_list_row_pane_g1

0x7b7e,	// (0x0001c497) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7b7e,	// (0x0001c497) cell_ai5_widget_list_row_pane_t1

0x7ba9,	// (0x0001c4c2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7ba9,	// (0x0001c4c2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x00024801) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00024801) cell_ai5_widget_list_row_pane_t

0xd73f,	// (0x00022058) main_fep_vtchi_ss_pane

0x7bed,	// (0x0001c506) popup_fep_char_pre_window

0x7bf5,	// (0x0001c50e) popup_fep_ituss_window

0x7c16,	// (0x0001c52f) popup_fep_vkbss_window

0x7c37,	// (0x0001c550) grid_vkbss_keypad_pane_ParamLimits

0x7c37,	// (0x0001c550) grid_vkbss_keypad_pane

0x7c47,	// (0x0001c560) ituss_keypad_pane

0xf41f,	// (0x00023d38) aid_vkbss_key_offset_ParamLimits

0xf41f,	// (0x00023d38) aid_vkbss_key_offset

0xf42b,	// (0x00023d44) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x00023d44) cell_vkbss_key_pane

0x7c56,	// (0x0001c56f) bg_cell_vkbss_key_g1_ParamLimits

0x7c56,	// (0x0001c56f) bg_cell_vkbss_key_g1

0x7c62,	// (0x0001c57b) cell_vkbss_key_3p_pane_ParamLimits

0x7c62,	// (0x0001c57b) cell_vkbss_key_3p_pane

0x7c7c,	// (0x0001c595) cell_vkbss_key_g1_ParamLimits

0x7c7c,	// (0x0001c595) cell_vkbss_key_g1

0x7c96,	// (0x0001c5af) cell_vkbss_key_t1_ParamLimits

0x7c96,	// (0x0001c5af) cell_vkbss_key_t1

0xf441,	// (0x00023d5a) cell_ituss_key_pane_ParamLimits

0xf441,	// (0x00023d5a) cell_ituss_key_pane

0x7cc1,	// (0x0001c5da) bg_cell_ituss_key_g1_ParamLimits

0x7cc1,	// (0x0001c5da) bg_cell_ituss_key_g1

0x7ccd,	// (0x0001c5e6) cell_ituss_key_pane_g1_ParamLimits

0x7ccd,	// (0x0001c5e6) cell_ituss_key_pane_g1

0xf452,	// (0x00023d6b) cell_ituss_key_pane_g2_ParamLimits

0xf452,	// (0x00023d6b) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x00024808) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x00024808) cell_ituss_key_pane_g

0xf47e,	// (0x00023d97) cell_ituss_key_t1_ParamLimits

0xf47e,	// (0x00023d97) cell_ituss_key_t1

0xf4b8,	// (0x00023dd1) cell_ituss_key_t2_ParamLimits

0xf4b8,	// (0x00023dd1) cell_ituss_key_t2

0xf4e9,	// (0x00023e02) cell_ituss_key_t3_ParamLimits

0xf4e9,	// (0x00023e02) cell_ituss_key_t3

0xf4b8,	// (0x00023dd1) cell_ituss_key_t4_ParamLimits

0xf4b8,	// (0x00023dd1) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x0002480f) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0002480f) cell_ituss_key_t

0x7cf3,	// (0x0001c60c) cell_vkbss_key_3p_pane_g1

0x7cfb,	// (0x0001c614) cell_vkbss_key_3p_pane_g2

0x7d03,	// (0x0001c61c) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0002481a) cell_vkbss_key_3p_pane_g

0xd73f,	// (0x00022058) bg_popup_fep_char_preview_window_cp02

0xf52c,	// (0x00023e45) popup_fep_char_pre_window_t1

0xd2d3,	// (0x00021bec) main_ai5_sk_pane

0x779c,	// (0x0001c0b5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x77a8,	// (0x0001c0c1) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x77bd,	// (0x0001c0d6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x77c9,	// (0x0001c0e2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x000247ec) cell_contacts_ai5_widget_pane_g_ParamLimits

0x77d5,	// (0x0001c0ee) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd9ca,	// (0x000222e3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xd682,	// (0x00021f9b) main_ai5_sk_pane_g1

0x1c89,	// (0x000165a2) popup_query_code_window_g1

0x7c0b,	// (0x0001c524) popup_fep_vkb_icf_pane

0x7c21,	// (0x0001c53a) popup_fep_vtchi_icf_pane

0x7d14,	// (0x0001c62d) bg_icf_pane

0x7d20,	// (0x0001c639) list_vkb_icf_pane

0x7d2c,	// (0x0001c645) bg_icf_pane_cp01

0x7d3f,	// (0x0001c658) vtchi_icf_list_pane

0x7d50,	// (0x0001c669) list_vkb_icf_pane_t1_ParamLimits

0x7d50,	// (0x0001c669) list_vkb_icf_pane_t1

0x7d66,	// (0x0001c67f) vtchi_icf_list_pane_t1_ParamLimits

0x7d66,	// (0x0001c67f) vtchi_icf_list_pane_t1

0x7bf5,	// (0x0001c50e) popup_fep_ituss_window_ParamLimits

0x7c21,	// (0x0001c53a) popup_fep_vtchi_icf_pane_ParamLimits

0x7c47,	// (0x0001c560) ituss_keypad_pane_ParamLimits

0xf413,	// (0x00023d2c) ituss_sks_pane

0x7d14,	// (0x0001c62d) bg_icf_pane_ParamLimits

0x7bd1,	// (0x0001c4ea) icf_edit_indi_pane_ParamLimits

0x7bd1,	// (0x0001c4ea) icf_edit_indi_pane

0x7d20,	// (0x0001c639) list_vkb_icf_pane_ParamLimits

0x7d2c,	// (0x0001c645) bg_icf_pane_cp01_ParamLimits

0x7be0,	// (0x0001c4f9) icf_edit_indi_pane_cp01_ParamLimits

0x7be0,	// (0x0001c4f9) icf_edit_indi_pane_cp01

0x7d47,	// (0x0001c660) vtchi_query_pane

0x44d5,	// (0x00018dee) icf_edit_indi_pane_g1_ParamLimits

0x44d5,	// (0x00018dee) icf_edit_indi_pane_g1

0x7dd5,	// (0x0001c6ee) icf_edit_indi_pane_g2_ParamLimits

0x7dd5,	// (0x0001c6ee) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00024832) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00024832) icf_edit_indi_pane_g

0x7de4,	// (0x0001c6fd) icf_edit_indi_pane_t1

0x7d7e,	// (0x0001c697) bg_input_focus_pane_cp042

0xbee5,	// (0x000207fe) vtchi_button_pane

0x7d87,	// (0x0001c6a0) vtchi_query_pane_t1

0x7d95,	// (0x0001c6ae) vtchi_query_pane_t2

0x7da3,	// (0x0001c6bc) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00024821) vtchi_query_pane_t

0xd73f,	// (0x00022058) bg_button_pane_cp13

0x7db1,	// (0x0001c6ca) vtchi_button_pane_g1

0xf53b,	// (0x00023e54) ituss_sks_pane_g1

0xf546,	// (0x00023e5f) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00024828) ituss_sks_pane_g

0x7db9,	// (0x0001c6d2) ituss_sks_pane_t1

0x7dc7,	// (0x0001c6e0) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0002482d) ituss_sks_pane_t

0x3cb4,	// (0x000185cd) indicator_nsta_pane_cp_g1

0x3cbd,	// (0x000185d6) indicator_nsta_pane_cp_g2

0x3cc5,	// (0x000185de) indicator_nsta_pane_cp_g3

0x3ccd,	// (0x000185e6) indicator_nsta_pane_cp_g4

0x3cd5,	// (0x000185ee) indicator_nsta_pane_cp_g5

0x3cdd,	// (0x000185f6) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x000243ca) indicator_nsta_pane_cp_g

0xcdf6,	// (0x0002170f) cell_graphic2_pane_t2_ParamLimits

0xcdf6,	// (0x0002170f) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x000246e3) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x000246e3) cell_graphic2_pane_t

0xce2c,	// (0x00021745) cell_graphic2_control_pane_t1

0x9e9c,	// (0x0001e7b5) signal_pane_g3_ParamLimits

0x9e9c,	// (0x0001e7b5) signal_pane_g3

0x9eb0,	// (0x0001e7c9) signal_pane_g4_ParamLimits

0x9eb0,	// (0x0001e7c9) signal_pane_g4

0x7bbb,	// (0x0001c4d4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7bbb,	// (0x0001c4d4) cell_ai5_widget_list_row_pane_t3

0x7ce1,	// (0x0001c5fa) cell_ituss_key_pane_t1_ParamLimits

0x7ce1,	// (0x0001c5fa) cell_ituss_key_pane_t1

0x18d7,	// (0x000161f0) form_field_data_wide_pane_vc_t2_ParamLimits

0x18d7,	// (0x000161f0) form_field_data_wide_pane_vc_t2

0x18eb,	// (0x00016204) form_field_data_wide_pane_vc_t3_ParamLimits

0x18eb,	// (0x00016204) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x00024118) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x00024118) form_field_data_wide_pane_vc_t

0x3965,	// (0x0001827e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3965,	// (0x0001827e) form_field_slider_wide_pane_vc_t3

0x3a3b,	// (0x00018354) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3a3b,	// (0x00018354) form_field_popup_wide_pane_vc_t2

0x3a52,	// (0x0001836b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3a52,	// (0x0001836b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x000243b9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x000243b9) form_field_popup_wide_pane_vc_t

0x918e,	// (0x0001daa7) aid_fshwr2_btn_pane_ParamLimits

0x919f,	// (0x0001dab8) aid_fshwr2_syb_pane_ParamLimits

0x91b0,	// (0x0001dac9) aid_fshwr2_txt_pane_ParamLimits

0xf3aa,	// (0x00023cc3) fshwr2_bg_pane_ParamLimits

0x91bc,	// (0x0001dad5) fshwr2_func_candi_pane_ParamLimits

0x91dd,	// (0x0001daf6) fshwr2_hwr_syb_pane_ParamLimits

0x91fa,	// (0x0001db13) fshwr2_icf_pane_ParamLimits

0x38d9,	// (0x000181f2) list_double_graphic_pane_vc_g4_ParamLimits

0x38d9,	// (0x000181f2) list_double_graphic_pane_vc_g4

0xf472,	// (0x00023d8b) cell_ituss_key_pane_g3_ParamLimits

0xf472,	// (0x00023d8b) cell_ituss_key_pane_g3

0xf51a,	// (0x00023e33) cell_ituss_key_t5_ParamLimits

0xf51a,	// (0x00023e33) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
