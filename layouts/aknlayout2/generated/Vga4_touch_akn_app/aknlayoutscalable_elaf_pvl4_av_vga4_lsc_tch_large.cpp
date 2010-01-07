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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003fb3b };

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
0xb936,	// (0x0004b471) Screen

0xb942,	// (0x0004b47d) application_window_ParamLimits

0xb942,	// (0x0004b47d) application_window

0x299a,	// (0x000424d5) screen_g1

0xb97a,	// (0x0004b4b5) area_bottom_pane_ParamLimits

0xb97a,	// (0x0004b4b5) area_bottom_pane

0x0d80,	// (0x000408bb) area_top_pane_ParamLimits

0x0d80,	// (0x000408bb) area_top_pane

0x0e14,	// (0x0004094f) main_pane_ParamLimits

0x0e14,	// (0x0004094f) main_pane

0x29a4,	// (0x000424df) misc_graphics

0xd2c5,	// (0x0004ce00) battery_pane_ParamLimits

0xd2c5,	// (0x0004ce00) battery_pane

0x567e,	// (0x000451b9) bg_status_flat_pane_g8

0x5686,	// (0x000451c1) bg_status_flat_pane_g9

0x4a64,	// (0x0004459f) context_pane_ParamLimits

0x4a64,	// (0x0004459f) context_pane

0xd43c,	// (0x0004cf77) navi_pane_ParamLimits

0xd43c,	// (0x0004cf77) navi_pane

0xd4c5,	// (0x0004d000) signal_pane_ParamLimits

0xd4c5,	// (0x0004d000) signal_pane

0x0008,

0xf8b2,	// (0x0004f3ed) bg_status_flat_pane_g

0xd555,	// (0x0004d090) status_pane_g1_ParamLimits

0xd555,	// (0x0004d090) status_pane_g1

0xd56b,	// (0x0004d0a6) status_pane_g2_ParamLimits

0xd56b,	// (0x0004d0a6) status_pane_g2

0x4ca4,	// (0x000447df) status_pane_g3_ParamLimits

0x4ca4,	// (0x000447df) status_pane_g3

0x0004,

0xf7e5,	// (0x0004f320) status_pane_g_ParamLimits

0xf7e5,	// (0x0004f320) status_pane_g

0xd577,	// (0x0004d0b2) title_pane_ParamLimits

0xd577,	// (0x0004d0b2) title_pane

0xd5d4,	// (0x0004d10f) uni_indicator_pane_ParamLimits

0xd5d4,	// (0x0004d10f) uni_indicator_pane

0x4285,	// (0x00043dc0) bg_list_pane_ParamLimits

0x4285,	// (0x00043dc0) bg_list_pane

0xbf62,	// (0x0004ba9d) find_pane

0xcb1e,	// (0x0004c659) listscroll_app_pane_ParamLimits

0xcb1e,	// (0x0004c659) listscroll_app_pane

0x42c5,	// (0x00043e00) listscroll_form_pane

0xbf6a,	// (0x0004baa5) listscroll_gen_pane_ParamLimits

0xbf6a,	// (0x0004baa5) listscroll_gen_pane

0x42c5,	// (0x00043e00) listscroll_set_pane

0x6237,	// (0x00045d72) main_idle_act_pane

0x3f69,	// (0x00043aa4) main_idle_trad_pane

0x3f69,	// (0x00043aa4) main_list_empty_pane

0x42f3,	// (0x00043e2e) main_midp_pane

0x42ff,	// (0x00043e3a) main_pane_g1_ParamLimits

0x42ff,	// (0x00043e3a) main_pane_g1

0xcb2a,	// (0x0004c665) popup_ai_message_window_ParamLimits

0xcb2a,	// (0x0004c665) popup_ai_message_window

0xcbca,	// (0x0004c705) popup_fep_china_uni_window_ParamLimits

0xcbca,	// (0x0004c705) popup_fep_china_uni_window

0x441d,	// (0x00043f58) popup_fep_japan_candidate_window_ParamLimits

0x441d,	// (0x00043f58) popup_fep_japan_candidate_window

0x4447,	// (0x00043f82) popup_fep_japan_predictive_window_ParamLimits

0x4447,	// (0x00043f82) popup_fep_japan_predictive_window

0xcc2a,	// (0x0004c765) popup_find_window

0xcc47,	// (0x0004c782) popup_grid_graphic_window_ParamLimits

0xcc47,	// (0x0004c782) popup_grid_graphic_window

0x44b8,	// (0x00043ff3) popup_large_graphic_colour_window

0xcceb,	// (0x0004c826) popup_menu_window_ParamLimits

0xcceb,	// (0x0004c826) popup_menu_window

0xced7,	// (0x0004ca12) popup_note_image_window

0xce97,	// (0x0004c9d2) popup_note_wait_window_ParamLimits

0xce97,	// (0x0004c9d2) popup_note_wait_window

0xceef,	// (0x0004ca2a) popup_note_window_ParamLimits

0xceef,	// (0x0004ca2a) popup_note_window

0xcf9d,	// (0x0004cad8) popup_query_code_window_ParamLimits

0xcf9d,	// (0x0004cad8) popup_query_code_window

0x4724,	// (0x0004425f) popup_query_data_code_window_ParamLimits

0x4724,	// (0x0004425f) popup_query_data_code_window

0xcfdd,	// (0x0004cb18) popup_query_data_window_ParamLimits

0xcfdd,	// (0x0004cb18) popup_query_data_window

0xd071,	// (0x0004cbac) popup_query_sat_info_window_ParamLimits

0xd071,	// (0x0004cbac) popup_query_sat_info_window

0xd11c,	// (0x0004cc57) popup_snote_single_graphic_window_ParamLimits

0xd11c,	// (0x0004cc57) popup_snote_single_graphic_window

0xd11c,	// (0x0004cc57) popup_snote_single_text_window_ParamLimits

0xd11c,	// (0x0004cc57) popup_snote_single_text_window

0x47bf,	// (0x000442fa) popup_sub_window_general

0x4905,	// (0x00044440) popup_window_general_ParamLimits

0x4905,	// (0x00044440) popup_window_general

0x491e,	// (0x00044459) power_save_pane

0xbe23,	// (0x0004b95e) control_pane_g1_ParamLimits

0xbe23,	// (0x0004b95e) control_pane_g1

0x167b,	// (0x000411b6) control_pane_g2_ParamLimits

0x167b,	// (0x000411b6) control_pane_g2

0x4236,	// (0x00043d71) control_pane_g3_ParamLimits

0x4236,	// (0x00043d71) control_pane_g3

0x0007,

0xf7cd,	// (0x0004f308) control_pane_g_ParamLimits

0xf7cd,	// (0x0004f308) control_pane_g

0xbe65,	// (0x0004b9a0) control_pane_t1_ParamLimits

0xbe65,	// (0x0004b9a0) control_pane_t1

0xbec3,	// (0x0004b9fe) control_pane_t2_ParamLimits

0xbec3,	// (0x0004b9fe) control_pane_t2

0x0002,

0xf7de,	// (0x0004f319) control_pane_t_ParamLimits

0xf7de,	// (0x0004f319) control_pane_t

0x4157,	// (0x00043c92) navi_navi_volume_pane_cp1

0x4160,	// (0x00043c9b) status_small_icon_pane

0x4168,	// (0x00043ca3) status_small_pane_g1_ParamLimits

0x4168,	// (0x00043ca3) status_small_pane_g1

0x419c,	// (0x00043cd7) status_small_pane_g2_ParamLimits

0x419c,	// (0x00043cd7) status_small_pane_g2

0x41a8,	// (0x00043ce3) status_small_pane_g3_ParamLimits

0x41a8,	// (0x00043ce3) status_small_pane_g3

0x41b4,	// (0x00043cef) status_small_pane_g4_ParamLimits

0x41b4,	// (0x00043cef) status_small_pane_g4

0x41c0,	// (0x00043cfb) status_small_pane_g5_ParamLimits

0x41c0,	// (0x00043cfb) status_small_pane_g5

0x41cf,	// (0x00043d0a) status_small_pane_g6_ParamLimits

0x41cf,	// (0x00043d0a) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0004f2f7) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0004f2f7) status_small_pane_g

0x41ff,	// (0x00043d3a) status_small_pane_t1

0x4222,	// (0x00043d5d) status_small_wait_pane_ParamLimits

0x4222,	// (0x00043d5d) status_small_wait_pane

0xc962,	// (0x0004c49d) aid_levels_signal_ParamLimits

0xc962,	// (0x0004c49d) aid_levels_signal

0xc97a,	// (0x0004c4b5) signal_pane_g1_ParamLimits

0xc97a,	// (0x0004c4b5) signal_pane_g1

0xc995,	// (0x0004c4d0) signal_pane_g2_ParamLimits

0xc995,	// (0x0004c4d0) signal_pane_g2

0x0001,

0xf751,	// (0x0004f28c) signal_pane_g_ParamLimits

0xf751,	// (0x0004f28c) signal_pane_g

0x3a3c,	// (0x00043577) context_pane_g1

0xbaf7,	// (0x0004b632) title_pane_g1

0xbb2c,	// (0x0004b667) title_pane_t1

0x2a4c,	// (0x00042587) title_pane_t2

0x2a72,	// (0x000425ad) title_pane_t3

0x0002,

0xf59b,	// (0x0004f0d6) title_pane_t

0xd5fc,	// (0x0004d137) aid_levels_battery_ParamLimits

0xd5fc,	// (0x0004d137) aid_levels_battery

0xd618,	// (0x0004d153) battery_pane_g1_ParamLimits

0xd618,	// (0x0004d153) battery_pane_g1

0xd635,	// (0x0004d170) battery_pane_g2_ParamLimits

0xd635,	// (0x0004d170) battery_pane_g2

0x0001,

0xf7f0,	// (0x0004f32b) battery_pane_g_ParamLimits

0xf7f0,	// (0x0004f32b) battery_pane_g

0xd858,	// (0x0004d393) uni_indicator_pane_g1

0xd86d,	// (0x0004d3a8) uni_indicator_pane_g2

0xd882,	// (0x0004d3bd) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0004f495) uni_indicator_pane_g

0x3dd7,	// (0x00043912) navi_icon_pane_ParamLimits

0x3dd7,	// (0x00043912) navi_icon_pane

0x3d1e,	// (0x00043859) navi_midp_pane

0x3df3,	// (0x0004392e) navi_navi_pane

0x3dfd,	// (0x00043938) navi_text_pane_ParamLimits

0x3dfd,	// (0x00043938) navi_text_pane

0x299a,	// (0x000424d5) status_small_wait_pane_g1

0x2eb6,	// (0x000429f1) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0004f490) status_small_wait_pane_g

0xd7f7,	// (0x0004d332) navi_navi_icon_text_pane

0xd7ff,	// (0x0004d33a) navi_navi_pane_g1_ParamLimits

0xd7ff,	// (0x0004d33a) navi_navi_pane_g1

0xd811,	// (0x0004d34c) navi_navi_pane_g2_ParamLimits

0xd811,	// (0x0004d34c) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0004f45e) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0004f45e) navi_navi_pane_g

0x5d0d,	// (0x00045848) navi_navi_tabs_pane

0xd823,	// (0x0004d35e) navi_navi_text_pane

0xd7f7,	// (0x0004d332) navi_navi_volume_pane

0xd7e5,	// (0x0004d320) navi_text_pane_t1

0xd7d9,	// (0x0004d314) navi_icon_pane_g1

0x5bfe,	// (0x00045739) navi_navi_text_pane_t1

0xc146,	// (0x0004bc81) navi_navi_volume_pane_g1

0xc14e,	// (0x0004bc89) volume_small_pane

0xd735,	// (0x0004d270) navi_navi_icon_text_pane_g1

0xd73d,	// (0x0004d278) navi_navi_icon_text_pane_t1

0x3df3,	// (0x0004392e) navi_tabs_2_long_pane

0x3df3,	// (0x0004392e) navi_tabs_2_pane

0x3df3,	// (0x0004392e) navi_tabs_3_long_pane

0x3df3,	// (0x0004392e) navi_tabs_3_pane

0x3df3,	// (0x0004392e) navi_tabs_4_pane

0xc126,	// (0x0004bc61) tabs_2_active_pane_ParamLimits

0xc126,	// (0x0004bc61) tabs_2_active_pane

0xc136,	// (0x0004bc71) tabs_2_passive_pane_ParamLimits

0xc136,	// (0x0004bc71) tabs_2_passive_pane

0xc0f4,	// (0x0004bc2f) tabs_3_active_pane_ParamLimits

0xc0f4,	// (0x0004bc2f) tabs_3_active_pane

0xc104,	// (0x0004bc3f) tabs_3_passive_pane_ParamLimits

0xc104,	// (0x0004bc3f) tabs_3_passive_pane

0xc115,	// (0x0004bc50) tabs_3_passive_pane_cp_ParamLimits

0xc115,	// (0x0004bc50) tabs_3_passive_pane_cp

0xc0b0,	// (0x0004bbeb) tabs_4_active_pane_ParamLimits

0xc0b0,	// (0x0004bbeb) tabs_4_active_pane

0xc0c1,	// (0x0004bbfc) tabs_4_passive_pane_ParamLimits

0xc0c1,	// (0x0004bbfc) tabs_4_passive_pane

0xc0d2,	// (0x0004bc0d) tabs_4_passive_pane_cp_ParamLimits

0xc0d2,	// (0x0004bc0d) tabs_4_passive_pane_cp

0xc0e3,	// (0x0004bc1e) tabs_4_passive_pane_cp2_ParamLimits

0xc0e3,	// (0x0004bc1e) tabs_4_passive_pane_cp2

0xc08c,	// (0x0004bbc7) tabs_2_long_active_pane_ParamLimits

0xc08c,	// (0x0004bbc7) tabs_2_long_active_pane

0xc09e,	// (0x0004bbd9) tabs_2_long_passive_pane_ParamLimits

0xc09e,	// (0x0004bbd9) tabs_2_long_passive_pane

0xc041,	// (0x0004bb7c) tabs_3_long_active_pane_ParamLimits

0xc041,	// (0x0004bb7c) tabs_3_long_active_pane

0xc05a,	// (0x0004bb95) tabs_3_long_passive_pane_ParamLimits

0xc05a,	// (0x0004bb95) tabs_3_long_passive_pane

0xc073,	// (0x0004bbae) tabs_3_long_passive_pane_cp_ParamLimits

0xc073,	// (0x0004bbae) tabs_3_long_passive_pane_cp

0x18ec,	// (0x00041427) volume_small_pane_g1

0xbff0,	// (0x0004bb2b) volume_small_pane_g2

0xbff9,	// (0x0004bb34) volume_small_pane_g3

0xc002,	// (0x0004bb3d) volume_small_pane_g4

0xc00b,	// (0x0004bb46) volume_small_pane_g5

0xc014,	// (0x0004bb4f) volume_small_pane_g6

0xc01d,	// (0x0004bb58) volume_small_pane_g7

0xc026,	// (0x0004bb61) volume_small_pane_g8

0xc02f,	// (0x0004bb6a) volume_small_pane_g9

0xc038,	// (0x0004bb73) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0004f42a) volume_small_pane_g

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp2_ParamLimits

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp2

0xbbb8,	// (0x0004b6f3) tabs_3_active_pane_g1

0xbbc0,	// (0x0004b6fb) tabs_3_active_pane_t1

0x2d00,	// (0x0004283b) bg_passive_tab_pane_cp2_ParamLimits

0x2d00,	// (0x0004283b) bg_passive_tab_pane_cp2

0xbbb8,	// (0x0004b6f3) tabs_3_passive_pane_g1

0xbbc0,	// (0x0004b6fb) tabs_3_passive_pane_t1

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp3_ParamLimits

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp3

0xbbd2,	// (0x0004b70d) tabs_4_active_pane_g1

0xbbda,	// (0x0004b715) tabs_4_active_pane_t1

0x2d00,	// (0x0004283b) bg_passive_tab_pane_cp3_ParamLimits

0x2d00,	// (0x0004283b) bg_passive_tab_pane_cp3

0xbbd2,	// (0x0004b70d) tabs_4_1_passive_pane_g1

0xbbda,	// (0x0004b715) tabs_4_1_passive_pane_t1

0x42f3,	// (0x00043e2e) list_highlight_pane_cp2

0xd940,	// (0x0004d47b) list_set_pane_ParamLimits

0xd940,	// (0x0004d47b) list_set_pane

0xda08,	// (0x0004d543) main_pane_set_t1_ParamLimits

0xda08,	// (0x0004d543) main_pane_set_t1

0xda28,	// (0x0004d563) main_pane_set_t2_ParamLimits

0xda28,	// (0x0004d563) main_pane_set_t2

0xda3c,	// (0x0004d577) main_pane_set_t3_ParamLimits

0xda3c,	// (0x0004d577) main_pane_set_t3

0xda50,	// (0x0004d58b) main_pane_set_t4_ParamLimits

0xda50,	// (0x0004d58b) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0004f4fa) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0004f4fa) main_pane_set_t

0xda64,	// (0x0004d59f) setting_code_pane

0x6397,	// (0x00045ed2) setting_slider_graphic_pane

0x6397,	// (0x00045ed2) setting_slider_pane

0x6397,	// (0x00045ed2) setting_text_pane

0x6397,	// (0x00045ed2) setting_volume_pane

0x106b,	// (0x00040ba6) volume_set_pane

0x2a84,	// (0x000425bf) bg_set_opt_pane_cp

0x1075,	// (0x00040bb0) setting_slider_pane_t1

0x108b,	// (0x00040bc6) setting_slider_pane_t2

0x10a5,	// (0x00040be0) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0004f0dd) setting_slider_pane_t

0x10bd,	// (0x00040bf8) slider_set_pane

0x29a4,	// (0x000424df) bg_set_opt_pane_cp2

0x2ac6,	// (0x00042601) setting_slider_graphic_pane_g1

0x10d3,	// (0x00040c0e) setting_slider_graphic_pane_t1

0x10e3,	// (0x00040c1e) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0004f0e4) setting_slider_graphic_pane_t

0x10f3,	// (0x00040c2e) slider_set_pane_cp

0x29a4,	// (0x000424df) input_focus_pane_cp1

0x621e,	// (0x00045d59) list_set_text_pane

0x299a,	// (0x000424d5) setting_text_pane_g1

0x29a4,	// (0x000424df) input_focus_pane_cp2

0x299a,	// (0x000424d5) setting_code_pane_g1

0x2acf,	// (0x0004260a) setting_code_pane_t1

0xf563,	// (0x0004f09e) set_text_pane_t1_ParamLimits

0xf563,	// (0x0004f09e) set_text_pane_t1

0x3372,	// (0x00042ead) set_opt_bg_pane_g1

0x337a,	// (0x00042eb5) set_opt_bg_pane_g2

0x61f6,	// (0x00045d31) set_opt_bg_pane_g3

0x338a,	// (0x00042ec5) set_opt_bg_pane_g4

0x3392,	// (0x00042ecd) set_opt_bg_pane_g5

0x339a,	// (0x00042ed5) set_opt_bg_pane_g6

0x6200,	// (0x00045d3b) set_opt_bg_pane_g7

0x620a,	// (0x00045d45) set_opt_bg_pane_g8

0x6214,	// (0x00045d4f) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0004f4e7) set_opt_bg_pane_g

0x61e9,	// (0x00045d24) slider_set_pane_g1

0x1ad0,	// (0x0004160b) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0004f4d8) slider_set_pane_g

0x1a58,	// (0x00041593) volume_set_pane_g1

0x1a62,	// (0x0004159d) volume_set_pane_g2

0x1a6c,	// (0x000415a7) volume_set_pane_g3

0x1a76,	// (0x000415b1) volume_set_pane_g4

0x1a80,	// (0x000415bb) volume_set_pane_g5

0x1a8a,	// (0x000415c5) volume_set_pane_g6

0x1a94,	// (0x000415cf) volume_set_pane_g7

0x1a9e,	// (0x000415d9) volume_set_pane_g8

0x1aa8,	// (0x000415e3) volume_set_pane_g9

0x1ab2,	// (0x000415ed) volume_set_pane_g10

0x0009,

0xf975,	// (0x0004f4b0) volume_set_pane_g

0xbbec,	// (0x0004b727) indicator_pane_ParamLimits

0xbbec,	// (0x0004b727) indicator_pane

0xbc18,	// (0x0004b753) main_idle_pane_g2_ParamLimits

0xbc18,	// (0x0004b753) main_idle_pane_g2

0xbc50,	// (0x0004b78b) main_pane_idle_g1_ParamLimits

0xbc50,	// (0x0004b78b) main_pane_idle_g1

0x2b1f,	// (0x0004265a) popup_clock_digital_analogue_window_ParamLimits

0x2b1f,	// (0x0004265a) popup_clock_digital_analogue_window

0xbc7e,	// (0x0004b7b9) soft_indicator_pane_ParamLimits

0xbc7e,	// (0x0004b7b9) soft_indicator_pane

0xbc9a,	// (0x0004b7d5) wallpaper_pane_ParamLimits

0xbc9a,	// (0x0004b7d5) wallpaper_pane

0x299a,	// (0x000424d5) wallpaper_pane_g1

0xbcac,	// (0x0004b7e7) indicator_pane_g1_ParamLimits

0xbcac,	// (0x0004b7e7) indicator_pane_g1

0x665b,	// (0x00046196) navi_navi_icon_text_pane_srt_g1

0x2b73,	// (0x000426ae) soft_indicator_pane_t1

0x2b8d,	// (0x000426c8) aid_ps_area_pane

0xbcc5,	// (0x0004b800) aid_ps_clock_pane

0x2bac,	// (0x000426e7) aid_ps_indicator_pane

0x2bb8,	// (0x000426f3) indicator_ps_pane_ParamLimits

0x2bb8,	// (0x000426f3) indicator_ps_pane

0x2bc7,	// (0x00042702) power_save_pane_g1_ParamLimits

0x2bc7,	// (0x00042702) power_save_pane_g1

0x2bd3,	// (0x0004270e) power_save_pane_g2_ParamLimits

0x2bd3,	// (0x0004270e) power_save_pane_g2

0x0c74,	// (0x000407af) aid_navinavi_width_pane

0x2b8d,	// (0x000426c8) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0004f0e9) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0004f0e9) power_save_pane_g

0x2be1,	// (0x0004271c) power_save_pane_t1_ParamLimits

0x2be1,	// (0x0004271c) power_save_pane_t1

0xbcc5,	// (0x0004b800) aid_ps_clock_pane_ParamLimits

0x2bac,	// (0x000426e7) aid_ps_indicator_pane_ParamLimits

0x2bf3,	// (0x0004272e) power_save_pane_t4_ParamLimits

0x2bf3,	// (0x0004272e) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0004f0ee) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0004f0ee) power_save_pane_t

0x2c1d,	// (0x00042758) power_save_t3_ParamLimits

0x2c1d,	// (0x00042758) power_save_t3

0x2c08,	// (0x00042743) power_save_t2_ParamLimits

0x2c08,	// (0x00042743) power_save_t2

0x2c32,	// (0x0004276d) indicator_ps_pane_g1

0xbcd3,	// (0x0004b80e) ai_gene_pane_ParamLimits

0xbcd3,	// (0x0004b80e) ai_gene_pane

0xbcea,	// (0x0004b825) ai_links_pane_ParamLimits

0xbcea,	// (0x0004b825) ai_links_pane

0xbd02,	// (0x0004b83d) indicator_pane_cp1_ParamLimits

0xbd02,	// (0x0004b83d) indicator_pane_cp1

0xbd11,	// (0x0004b84c) main_pane_idle_g1_cp_ParamLimits

0xbd11,	// (0x0004b84c) main_pane_idle_g1_cp

0x2c6b,	// (0x000427a6) popup_ai_links_title_window

0xbd29,	// (0x0004b864) soft_indicator_pane_cp1_ParamLimits

0xbd29,	// (0x0004b864) soft_indicator_pane_cp1

0x5fbc,	// (0x00045af7) ai_links_pane_g1

0x5fc5,	// (0x00045b00) grid_ai_links_pane

0xd84f,	// (0x0004d38a) ai_gene_pane_1

0x5faa,	// (0x00045ae5) ai_gene_pane_2

0x5fb3,	// (0x00045aee) list_highlight_pane_cp4

0xd82b,	// (0x0004d366) cell_ai_link_pane_ParamLimits

0xd82b,	// (0x0004d366) cell_ai_link_pane

0x5f79,	// (0x00045ab4) cell_ai_link_pane_g1

0x2eb6,	// (0x000429f1) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0004f48b) cell_ai_link_pane_g

0x29a4,	// (0x000424df) grid_highlight_cp2

0x29a4,	// (0x000424df) bg_popup_sub_pane_cp1

0x2c8e,	// (0x000427c9) popup_ai_links_title_window_t1

0x5ec5,	// (0x00045a00) ai_gene_pane_1_g1_ParamLimits

0x5ec5,	// (0x00045a00) ai_gene_pane_1_g1

0x5ed1,	// (0x00045a0c) ai_gene_pane_1_g2_ParamLimits

0x5ed1,	// (0x00045a0c) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0004f481) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0004f481) ai_gene_pane_1_g

0x5ede,	// (0x00045a19) ai_gene_pane_1_t1_ParamLimits

0x5ede,	// (0x00045a19) ai_gene_pane_1_t1

0x5f12,	// (0x00045a4d) grid_ai_soft_ind_pane

0x5eb0,	// (0x000459eb) ai_gene_pane_2_t1_ParamLimits

0x5eb0,	// (0x000459eb) ai_gene_pane_2_t1

0xbd3d,	// (0x0004b878) main_pane_empty_t1_ParamLimits

0xbd3d,	// (0x0004b878) main_pane_empty_t1

0xbd55,	// (0x0004b890) main_pane_empty_t2_ParamLimits

0xbd55,	// (0x0004b890) main_pane_empty_t2

0xbd6a,	// (0x0004b8a5) main_pane_empty_t3_ParamLimits

0xbd6a,	// (0x0004b8a5) main_pane_empty_t3

0xbd7c,	// (0x0004b8b7) main_pane_empty_t4_ParamLimits

0xbd7c,	// (0x0004b8b7) main_pane_empty_t4

0xbd8e,	// (0x0004b8c9) main_pane_empty_t5_ParamLimits

0xbd8e,	// (0x0004b8c9) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0004f0f3) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0004f0f3) main_pane_empty_t

0x33c3,	// (0x00042efe) bg_popup_window_pane_ParamLimits

0x33c3,	// (0x00042efe) bg_popup_window_pane

0x5c0c,	// (0x00045747) find_popup_pane_cp2_ParamLimits

0x5c0c,	// (0x00045747) find_popup_pane_cp2

0x5c18,	// (0x00045753) heading_pane_ParamLimits

0x5c18,	// (0x00045753) heading_pane

0x29a4,	// (0x000424df) bg_popup_sub_pane

0xd75a,	// (0x0004d295) bg_popup_window_pane_g1_ParamLimits

0xd75a,	// (0x0004d295) bg_popup_window_pane_g1

0xd769,	// (0x0004d2a4) bg_popup_window_pane_g2_ParamLimits

0xd769,	// (0x0004d2a4) bg_popup_window_pane_g2

0xd775,	// (0x0004d2b0) bg_popup_window_pane_g3_ParamLimits

0xd775,	// (0x0004d2b0) bg_popup_window_pane_g3

0xd781,	// (0x0004d2bc) bg_popup_window_pane_g4_ParamLimits

0xd781,	// (0x0004d2bc) bg_popup_window_pane_g4

0xd790,	// (0x0004d2cb) bg_popup_window_pane_g5_ParamLimits

0xd790,	// (0x0004d2cb) bg_popup_window_pane_g5

0xd7a0,	// (0x0004d2db) bg_popup_window_pane_g6_ParamLimits

0xd7a0,	// (0x0004d2db) bg_popup_window_pane_g6

0xd7ac,	// (0x0004d2e7) bg_popup_window_pane_g7_ParamLimits

0xd7ac,	// (0x0004d2e7) bg_popup_window_pane_g7

0xd7bb,	// (0x0004d2f6) bg_popup_window_pane_g8_ParamLimits

0xd7bb,	// (0x0004d2f6) bg_popup_window_pane_g8

0xd7ca,	// (0x0004d305) bg_popup_window_pane_g9_ParamLimits

0xd7ca,	// (0x0004d305) bg_popup_window_pane_g9

0x5bf2,	// (0x0004572d) bg_popup_window_pane_g10_ParamLimits

0x5bf2,	// (0x0004572d) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0004f449) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0004f449) bg_popup_window_pane_g

0x5b1b,	// (0x00045656) bg_popup_heading_pane_ParamLimits

0x5b1b,	// (0x00045656) bg_popup_heading_pane

0x1b42,	// (0x0004167d) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b42,	// (0x0004167d) tabs_4_passive_pane_cp_srt

0x1b54,	// (0x0004168f) tabs_4_passive_pane_srt_ParamLimits

0x5b2f,	// (0x0004566a) heading_pane_g2

0x1b54,	// (0x0004168f) tabs_4_passive_pane_srt

0x4f21,	// (0x00044a5c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4f21,	// (0x00044a5c) bg_passive_tab_pane_cp3_srt

0x5b37,	// (0x00045672) heading_pane_t1_ParamLimits

0x5b37,	// (0x00045672) heading_pane_t1

0x5b4e,	// (0x00045689) heading_pane_t2_ParamLimits

0x5b4e,	// (0x00045689) heading_pane_t2

0x0001,

0xf909,	// (0x0004f444) heading_pane_t_ParamLimits

0xf909,	// (0x0004f444) heading_pane_t

0x5646,	// (0x00045181) bg_popup_heading_pane_g1

0x56f5,	// (0x00045230) bg_popup_heading_pane_g2

0x56ff,	// (0x0004523a) bg_popup_heading_pane_g3

0x5709,	// (0x00045244) bg_popup_heading_pane_g4

0x5713,	// (0x0004524e) bg_popup_heading_pane_g5

0x571d,	// (0x00045258) bg_popup_heading_pane_g6

0x5725,	// (0x00045260) bg_popup_heading_pane_g7

0x572d,	// (0x00045268) bg_popup_heading_pane_g8

0x5737,	// (0x00045272) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0004f400) bg_popup_heading_pane_g

0x4e2f,	// (0x0004496a) bg_popup_sub_pane_g1

0x4e37,	// (0x00044972) bg_popup_sub_pane_g2

0x4e3f,	// (0x0004497a) bg_popup_sub_pane_g3

0x4e47,	// (0x00044982) bg_popup_sub_pane_g4

0x4e4f,	// (0x0004498a) bg_popup_sub_pane_g5

0x4e57,	// (0x00044992) bg_popup_sub_pane_g6

0x4e5f,	// (0x0004499a) bg_popup_sub_pane_g7

0x4e67,	// (0x000449a2) bg_popup_sub_pane_g8

0x4e6f,	// (0x000449aa) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0004f3da) bg_popup_sub_pane_g

0x2d00,	// (0x0004283b) bg_popup_window_pane_cp5_ParamLimits

0x2d00,	// (0x0004283b) bg_popup_window_pane_cp5

0x2d1c,	// (0x00042857) popup_note_window_g1_ParamLimits

0x2d1c,	// (0x00042857) popup_note_window_g1

0x2d28,	// (0x00042863) popup_note_window_t1_ParamLimits

0x2d28,	// (0x00042863) popup_note_window_t1

0x2d3e,	// (0x00042879) popup_note_window_t2_ParamLimits

0x2d3e,	// (0x00042879) popup_note_window_t2

0x2d54,	// (0x0004288f) popup_note_window_t3_ParamLimits

0x2d54,	// (0x0004288f) popup_note_window_t3

0x2d6a,	// (0x000428a5) popup_note_window_t4_ParamLimits

0x2d6a,	// (0x000428a5) popup_note_window_t4

0x2d92,	// (0x000428cd) popup_note_window_t5_ParamLimits

0x2d92,	// (0x000428cd) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0004f0fe) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0004f0fe) popup_note_window_t

0x2db6,	// (0x000428f1) bg_popup_window_pane_cp6_ParamLimits

0x2db6,	// (0x000428f1) bg_popup_window_pane_cp6

0x55c2,	// (0x000450fd) popup_note_image_window_g1_ParamLimits

0x55c2,	// (0x000450fd) popup_note_image_window_g1

0x55ce,	// (0x00045109) popup_note_image_window_g2_ParamLimits

0x55ce,	// (0x00045109) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0004f3ce) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0004f3ce) popup_note_image_window_g

0x55e7,	// (0x00045122) popup_note_image_window_t1_ParamLimits

0x55e7,	// (0x00045122) popup_note_image_window_t1

0x5600,	// (0x0004513b) popup_note_image_window_t2_ParamLimits

0x5600,	// (0x0004513b) popup_note_image_window_t2

0x5619,	// (0x00045154) popup_note_image_window_t3_ParamLimits

0x5619,	// (0x00045154) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0004f3d3) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0004f3d3) popup_note_image_window_t

0x5482,	// (0x00044fbd) bg_popup_window_pane_cp7_ParamLimits

0x5482,	// (0x00044fbd) bg_popup_window_pane_cp7

0x54b2,	// (0x00044fed) popup_note_wait_window_g1_ParamLimits

0x54b2,	// (0x00044fed) popup_note_wait_window_g1

0x54be,	// (0x00044ff9) popup_note_wait_window_g2_ParamLimits

0x54be,	// (0x00044ff9) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0004f3bc) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0004f3bc) popup_note_wait_window_g

0x54d6,	// (0x00045011) popup_note_wait_window_t1_ParamLimits

0x54d6,	// (0x00045011) popup_note_wait_window_t1

0x54fd,	// (0x00045038) popup_note_wait_window_t2_ParamLimits

0x54fd,	// (0x00045038) popup_note_wait_window_t2

0x551b,	// (0x00045056) popup_note_wait_window_t3_ParamLimits

0x551b,	// (0x00045056) popup_note_wait_window_t3

0x552e,	// (0x00045069) popup_note_wait_window_t4_ParamLimits

0x552e,	// (0x00045069) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0004f3c3) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0004f3c3) popup_note_wait_window_t

0x5553,	// (0x0004508e) wait_bar_pane_ParamLimits

0x5553,	// (0x0004508e) wait_bar_pane

0x29a4,	// (0x000424df) wait_anim_pane

0x29a4,	// (0x000424df) wait_border_pane

0x299a,	// (0x000424d5) wait_anim_pane_g1

0x299a,	// (0x000424d5) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0004f287) wait_anim_pane_g

0x5426,	// (0x00044f61) wait_border_pane_g1

0x5431,	// (0x00044f6c) wait_border_pane_g2

0x543a,	// (0x00044f75) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0004f3b5) wait_border_pane_g

0x5382,	// (0x00044ebd) bg_popup_window_pane_cp16_ParamLimits

0x5382,	// (0x00044ebd) bg_popup_window_pane_cp16

0x5390,	// (0x00044ecb) indicator_popup_pane_cp4_ParamLimits

0x5390,	// (0x00044ecb) indicator_popup_pane_cp4

0x53a4,	// (0x00044edf) popup_query_data_window_t1_ParamLimits

0x53a4,	// (0x00044edf) popup_query_data_window_t1

0x53b6,	// (0x00044ef1) popup_query_data_window_t2_ParamLimits

0x53b6,	// (0x00044ef1) popup_query_data_window_t2

0x53cf,	// (0x00044f0a) popup_query_data_window_t3_ParamLimits

0x53cf,	// (0x00044f0a) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0004f3ae) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0004f3ae) popup_query_data_window_t

0x53e9,	// (0x00044f24) query_popup_data_pane_ParamLimits

0x53e9,	// (0x00044f24) query_popup_data_pane

0x53fd,	// (0x00044f38) query_popup_data_pane_cp1_ParamLimits

0x53fd,	// (0x00044f38) query_popup_data_pane_cp1

0x2db6,	// (0x000428f1) bg_popup_window_pane_cp10_ParamLimits

0x2db6,	// (0x000428f1) bg_popup_window_pane_cp10

0x52e5,	// (0x00044e20) indicator_popup_pane_ParamLimits

0x52e5,	// (0x00044e20) indicator_popup_pane

0x2e17,	// (0x00042952) popup_query_code_window_t1_ParamLimits

0x2e17,	// (0x00042952) popup_query_code_window_t1

0x52fd,	// (0x00044e38) popup_query_code_window_t2_ParamLimits

0x52fd,	// (0x00044e38) popup_query_code_window_t2

0x533b,	// (0x00044e76) popup_query_code_window_t3_ParamLimits

0x533b,	// (0x00044e76) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0004f3a7) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0004f3a7) popup_query_code_window_t

0x536a,	// (0x00044ea5) query_popup_pane_ParamLimits

0x536a,	// (0x00044ea5) query_popup_pane

0x2db6,	// (0x000428f1) bg_popup_window_pane_cp15_ParamLimits

0x2db6,	// (0x000428f1) bg_popup_window_pane_cp15

0x2dd6,	// (0x00042911) indicator_popup_pane_cp1_ParamLimits

0x2dd6,	// (0x00042911) indicator_popup_pane_cp1

0x2de9,	// (0x00042924) indicator_popup_pane_cp2_ParamLimits

0x2de9,	// (0x00042924) indicator_popup_pane_cp2

0x2e04,	// (0x0004293f) popup_query_data_code_window_g1_ParamLimits

0x2e04,	// (0x0004293f) popup_query_data_code_window_g1

0x2e17,	// (0x00042952) popup_query_data_code_window_t1_ParamLimits

0x2e17,	// (0x00042952) popup_query_data_code_window_t1

0x2e29,	// (0x00042964) popup_query_data_code_window_t2_ParamLimits

0x2e29,	// (0x00042964) popup_query_data_code_window_t2

0x2e3b,	// (0x00042976) popup_query_data_code_window_t3_ParamLimits

0x2e3b,	// (0x00042976) popup_query_data_code_window_t3

0x2e51,	// (0x0004298c) popup_query_data_code_window_t4_ParamLimits

0x2e51,	// (0x0004298c) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0004f109) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0004f109) popup_query_data_code_window_t

0x3d93,	// (0x000438ce) list_single_midp_graphic_pane_g3

0x2e6b,	// (0x000429a6) query_popup_data_pane_cp2_ParamLimits

0x2e7e,	// (0x000429b9) query_popup_pane_cp2_ParamLimits

0x2e7e,	// (0x000429b9) query_popup_pane_cp2

0x29a4,	// (0x000424df) bg_popup_window_pane_cp11

0x52b9,	// (0x00044df4) heading_pane_cp5

0x2f6e,	// (0x00042aa9) listscroll_popup_info_pane

0x29a4,	// (0x000424df) input_focus_pane_cp3

0x2e99,	// (0x000429d4) query_popup_pane_t1

0x2ea7,	// (0x000429e2) list_popup_info_pane_ParamLimits

0x2ea7,	// (0x000429e2) list_popup_info_pane

0x2eb6,	// (0x000429f1) listscroll_popup_info_pane_g1

0x2ebe,	// (0x000429f9) scroll_pane_cp7

0x2ec8,	// (0x00042a03) popup_info_list_pane_t1_ParamLimits

0x2ec8,	// (0x00042a03) popup_info_list_pane_t1

0x2ee2,	// (0x00042a1d) popup_info_list_pane_t2_ParamLimits

0x2ee2,	// (0x00042a1d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0004f112) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0004f112) popup_info_list_pane_t

0x29a4,	// (0x000424df) bg_popup_window_pane_cp12

0x6675,	// (0x000461b0) find_popup_pane

0x2a84,	// (0x000425bf) bg_popup_window_pane_cp3

0x2efc,	// (0x00042a37) heading_pane_cp3

0x2f08,	// (0x00042a43) listscroll_popup_graphic_pane

0x29a4,	// (0x000424df) bg_popup_window_pane_cp4

0xc6a7,	// (0x0004c1e2) heading_pane_cp4

0x2f6e,	// (0x00042aa9) listscroll_popup_colour_pane

0xc6b1,	// (0x0004c1ec) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc6b1,	// (0x0004c1ec) cell_large_graphic_colour_none_popup_pane

0xc6c5,	// (0x0004c200) grid_large_graphic_colour_popup_pane_ParamLimits

0xc6c5,	// (0x0004c200) grid_large_graphic_colour_popup_pane

0xc6f1,	// (0x0004c22c) listscroll_popup_colour_pane_g1_ParamLimits

0xc6f1,	// (0x0004c22c) listscroll_popup_colour_pane_g1

0xc708,	// (0x0004c243) listscroll_popup_colour_pane_g2_ParamLimits

0xc708,	// (0x0004c243) listscroll_popup_colour_pane_g2

0xc71f,	// (0x0004c25a) listscroll_popup_colour_pane_g3_ParamLimits

0xc71f,	// (0x0004c25a) listscroll_popup_colour_pane_g3

0xc72f,	// (0x0004c26a) listscroll_popup_colour_pane_g4_ParamLimits

0xc72f,	// (0x0004c26a) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0004f117) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0004f117) listscroll_popup_colour_pane_g

0x3008,	// (0x00042b43) scroll_pane_cp6_ParamLimits

0x3008,	// (0x00042b43) scroll_pane_cp6

0xc743,	// (0x0004c27e) cell_large_graphic_colour_popup_pane_ParamLimits

0xc743,	// (0x0004c27e) cell_large_graphic_colour_popup_pane

0x303f,	// (0x00042b7a) cell_large_graphic_colour_none_popup_pane_t1

0x29a4,	// (0x000424df) grid_highlight_pane_cp5

0x304e,	// (0x00042b89) cell_large_graphic_colour_popup_pane_g1

0x3056,	// (0x00042b91) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0004f120) cell_large_graphic_colour_popup_pane_g

0x305e,	// (0x00042b99) cell_large_graphic_colour_popup_pane_g2_copy1

0x3067,	// (0x00042ba2) grid_highlight_pane_cp4

0x306f,	// (0x00042baa) bg_popup_window_pane_cp8_ParamLimits

0x306f,	// (0x00042baa) bg_popup_window_pane_cp8

0x308a,	// (0x00042bc5) popup_snote_single_text_window_g1_ParamLimits

0x308a,	// (0x00042bc5) popup_snote_single_text_window_g1

0x309c,	// (0x00042bd7) popup_snote_single_text_window_t1_ParamLimits

0x309c,	// (0x00042bd7) popup_snote_single_text_window_t1

0x30af,	// (0x00042bea) popup_snote_single_text_window_t2_ParamLimits

0x30af,	// (0x00042bea) popup_snote_single_text_window_t2

0x30c2,	// (0x00042bfd) popup_snote_single_text_window_t3_ParamLimits

0x30c2,	// (0x00042bfd) popup_snote_single_text_window_t3

0x30fb,	// (0x00042c36) popup_snote_single_text_window_t4_ParamLimits

0x30fb,	// (0x00042c36) popup_snote_single_text_window_t4

0x312f,	// (0x00042c6a) popup_snote_single_text_window_t5_ParamLimits

0x312f,	// (0x00042c6a) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0004f125) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0004f125) popup_snote_single_text_window_t

0x315e,	// (0x00042c99) bg_popup_window_pane_cp9_ParamLimits

0x315e,	// (0x00042c99) bg_popup_window_pane_cp9

0x308a,	// (0x00042bc5) popup_snote_single_graphic_window_g1_ParamLimits

0x308a,	// (0x00042bc5) popup_snote_single_graphic_window_g1

0x316c,	// (0x00042ca7) popup_snote_single_graphic_window_g2_ParamLimits

0x316c,	// (0x00042ca7) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0004f130) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0004f130) popup_snote_single_graphic_window_g

0x3178,	// (0x00042cb3) popup_snote_single_graphic_window_t1_ParamLimits

0x3178,	// (0x00042cb3) popup_snote_single_graphic_window_t1

0x318b,	// (0x00042cc6) popup_snote_single_graphic_window_t2_ParamLimits

0x318b,	// (0x00042cc6) popup_snote_single_graphic_window_t2

0x319e,	// (0x00042cd9) popup_snote_single_graphic_window_t3_ParamLimits

0x319e,	// (0x00042cd9) popup_snote_single_graphic_window_t3

0x31d7,	// (0x00042d12) popup_snote_single_graphic_window_t4_ParamLimits

0x31d7,	// (0x00042d12) popup_snote_single_graphic_window_t4

0x320b,	// (0x00042d46) popup_snote_single_graphic_window_t5_ParamLimits

0x320b,	// (0x00042d46) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0004f135) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0004f135) popup_snote_single_graphic_window_t

0x65b3,	// (0x000460ee) grid_graphic_popup_pane_ParamLimits

0x65b3,	// (0x000460ee) grid_graphic_popup_pane

0x65e1,	// (0x0004611c) listscroll_popup_graphic_pane_g1_ParamLimits

0x65e1,	// (0x0004611c) listscroll_popup_graphic_pane_g1

0xdb64,	// (0x0004d69f) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb64,	// (0x0004d69f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0004f524) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0004f524) listscroll_popup_graphic_pane_g

0x6609,	// (0x00046144) scroll_pane_cp5

0xdb24,	// (0x0004d65f) cell_graphic_popup_pane_ParamLimits

0xdb24,	// (0x0004d65f) cell_graphic_popup_pane

0x653c,	// (0x00046077) cell_graphic_popup_pane_g1

0x6544,	// (0x0004607f) cell_graphic_popup_pane_g2

0x305e,	// (0x00042b99) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0004f51d) cell_graphic_popup_pane_g

0x654d,	// (0x00046088) cell_graphic_popup_pane_t2

0x3067,	// (0x00042ba2) grid_highlight_pane_cp3

0x324c,	// (0x00042d87) list_gen_pane_ParamLimits

0x324c,	// (0x00042d87) list_gen_pane

0x327e,	// (0x00042db9) scroll_pane

0xdadf,	// (0x0004d61a) bg_list_pane_g1_ParamLimits

0xdadf,	// (0x0004d61a) bg_list_pane_g1

0x64b9,	// (0x00045ff4) bg_list_pane_g2_ParamLimits

0x64b9,	// (0x00045ff4) bg_list_pane_g2

0x64cc,	// (0x00046007) bg_list_pane_g3_ParamLimits

0x64cc,	// (0x00046007) bg_list_pane_g3

0x64de,	// (0x00046019) bg_list_pane_g4_ParamLimits

0x64de,	// (0x00046019) bg_list_pane_g4

0xdafa,	// (0x0004d635) bg_list_pane_g5_ParamLimits

0xdafa,	// (0x0004d635) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0004f512) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0004f512) bg_list_pane_g

0xdaa2,	// (0x0004d5dd) list_double2_graphic_large_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double2_graphic_large_graphic_pane

0xdaa2,	// (0x0004d5dd) list_double2_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double2_graphic_pane

0xdaa2,	// (0x0004d5dd) list_double2_large_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double2_large_graphic_pane

0xdaa2,	// (0x0004d5dd) list_double2_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double2_pane

0xdaa2,	// (0x0004d5dd) list_double_graphic_heading_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double_graphic_heading_pane

0xdaa2,	// (0x0004d5dd) list_double_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double_graphic_pane

0xdaa2,	// (0x0004d5dd) list_double_heading_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double_heading_pane

0xdaa2,	// (0x0004d5dd) list_double_large_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double_large_graphic_pane

0xdaa2,	// (0x0004d5dd) list_double_number_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double_number_pane

0xdaa2,	// (0x0004d5dd) list_double_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double_pane

0xdaa2,	// (0x0004d5dd) list_double_time_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_double_time_pane

0xdaa2,	// (0x0004d5dd) list_setting_number_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_setting_number_pane

0xdaa2,	// (0x0004d5dd) list_setting_pane_ParamLimits

0xdaa2,	// (0x0004d5dd) list_setting_pane

0xdab6,	// (0x0004d5f1) list_single_2graphic_pane_ParamLimits

0xdab6,	// (0x0004d5f1) list_single_2graphic_pane

0xdab6,	// (0x0004d5f1) list_single_graphic_heading_pane_ParamLimits

0xdab6,	// (0x0004d5f1) list_single_graphic_heading_pane

0xdab6,	// (0x0004d5f1) list_single_graphic_pane_ParamLimits

0xdab6,	// (0x0004d5f1) list_single_graphic_pane

0xdab6,	// (0x0004d5f1) list_single_heading_pane_ParamLimits

0xdab6,	// (0x0004d5f1) list_single_heading_pane

0xdab6,	// (0x0004d5f1) list_single_large_graphic_pane_ParamLimits

0xdab6,	// (0x0004d5f1) list_single_large_graphic_pane

0xdab6,	// (0x0004d5f1) list_single_number_heading_pane_ParamLimits

0xdab6,	// (0x0004d5f1) list_single_number_heading_pane

0xdab6,	// (0x0004d5f1) list_single_number_pane_ParamLimits

0xdab6,	// (0x0004d5f1) list_single_number_pane

0xdab6,	// (0x0004d5f1) list_single_pane_ParamLimits

0xdab6,	// (0x0004d5f1) list_single_pane

0x29a4,	// (0x000424df) list_highlight_pane_cp1

0x3eda,	// (0x00043a15) list_single_pane_g1_ParamLimits

0x3eda,	// (0x00043a15) list_single_pane_g1

0x17db,	// (0x00041316) list_single_pane_g2_ParamLimits

0x17db,	// (0x00041316) list_single_pane_g2

0x0001,

0xf616,	// (0x0004f151) list_single_pane_g_ParamLimits

0xf616,	// (0x0004f151) list_single_pane_g

0x0848,	// (0x00040383) list_single_pane_t1_ParamLimits

0x0848,	// (0x00040383) list_single_pane_t1

0x3eda,	// (0x00043a15) list_single_number_pane_g1_ParamLimits

0x3eda,	// (0x00043a15) list_single_number_pane_g1

0x17db,	// (0x00041316) list_single_number_pane_g2_ParamLimits

0x17db,	// (0x00041316) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0004f151) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0004f151) list_single_number_pane_g

0x0718,	// (0x00040253) list_single_number_pane_t1_ParamLimits

0x0718,	// (0x00040253) list_single_number_pane_t1

0xb77a,	// (0x0004b2b5) list_single_number_pane_t2_ParamLimits

0xb77a,	// (0x0004b2b5) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0004f4d3) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0004f4d3) list_single_number_pane_t

0xb142,	// (0x0004ac7d) list_single_graphic_pane_g1_ParamLimits

0xb142,	// (0x0004ac7d) list_single_graphic_pane_g1

0x3eda,	// (0x00043a15) list_single_graphic_pane_g2_ParamLimits

0x3eda,	// (0x00043a15) list_single_graphic_pane_g2

0x17db,	// (0x00041316) list_single_graphic_pane_g3_ParamLimits

0x17db,	// (0x00041316) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0004f140) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0004f140) list_single_graphic_pane_g

0x0b45,	// (0x00040680) list_single_graphic_pane_t1_ParamLimits

0x0b45,	// (0x00040680) list_single_graphic_pane_t1

0xb14e,	// (0x0004ac89) list_single_heading_pane_g1_ParamLimits

0xb14e,	// (0x0004ac89) list_single_heading_pane_g1

0x17db,	// (0x00041316) list_single_heading_pane_g2_ParamLimits

0x17db,	// (0x00041316) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0004f147) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0004f147) list_single_heading_pane_g

0xb161,	// (0x0004ac9c) list_single_heading_pane_t1_ParamLimits

0xb161,	// (0x0004ac9c) list_single_heading_pane_t1

0xbdb4,	// (0x0004b8ef) list_single_heading_pane_t2_ParamLimits

0xbdb4,	// (0x0004b8ef) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0004f14c) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0004f14c) list_single_heading_pane_t

0x3eda,	// (0x00043a15) list_single_number_heading_pane_g1_ParamLimits

0x3eda,	// (0x00043a15) list_single_number_heading_pane_g1

0x17db,	// (0x00041316) list_single_number_heading_pane_g2_ParamLimits

0x17db,	// (0x00041316) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0004f151) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0004f151) list_single_number_heading_pane_g

0x085e,	// (0x00040399) list_single_number_heading_pane_t1_ParamLimits

0x085e,	// (0x00040399) list_single_number_heading_pane_t1

0xb177,	// (0x0004acb2) list_single_number_heading_pane_t2_ParamLimits

0xb177,	// (0x0004acb2) list_single_number_heading_pane_t2

0x0822,	// (0x0004035d) list_single_number_heading_pane_t3_ParamLimits

0x0822,	// (0x0004035d) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0004f156) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0004f156) list_single_number_heading_pane_t

0xb189,	// (0x0004acc4) list_single_graphic_heading_pane_g1_ParamLimits

0xb189,	// (0x0004acc4) list_single_graphic_heading_pane_g1

0xbdc6,	// (0x0004b901) list_single_graphic_heading_pane_g4_ParamLimits

0xbdc6,	// (0x0004b901) list_single_graphic_heading_pane_g4

0x17db,	// (0x00041316) list_single_graphic_heading_pane_g5_ParamLimits

0x17db,	// (0x00041316) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0004f15d) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0004f15d) list_single_graphic_heading_pane_g

0x085e,	// (0x00040399) list_single_graphic_heading_pane_t1_ParamLimits

0x085e,	// (0x00040399) list_single_graphic_heading_pane_t1

0xb1a1,	// (0x0004acdc) list_single_graphic_heading_pane_t2_ParamLimits

0xb1a1,	// (0x0004acdc) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0004f164) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0004f164) list_single_graphic_heading_pane_t

0x1bff,	// (0x0004173a) list_single_large_graphic_pane_g1_ParamLimits

0x1bff,	// (0x0004173a) list_single_large_graphic_pane_g1

0x3eda,	// (0x00043a15) list_single_large_graphic_pane_g2_ParamLimits

0x3eda,	// (0x00043a15) list_single_large_graphic_pane_g2

0x17db,	// (0x00041316) list_single_large_graphic_pane_g3_ParamLimits

0x17db,	// (0x00041316) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0004f169) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0004f169) list_single_large_graphic_pane_g

0x5431,	// (0x00044f6c) wait_border_pane_g2_copy1

0xbdd7,	// (0x0004b912) list_single_large_graphic_pane_g4_cp2

0x085e,	// (0x00040399) list_single_large_graphic_pane_t1_ParamLimits

0x085e,	// (0x00040399) list_single_large_graphic_pane_t1

0x3325,	// (0x00042e60) list_double_pane_g1_ParamLimits

0x3325,	// (0x00042e60) list_double_pane_g1

0xbddf,	// (0x0004b91a) list_double_pane_g2_ParamLimits

0xbddf,	// (0x0004b91a) list_double_pane_g2

0x0001,

0xf635,	// (0x0004f170) list_double_pane_g_ParamLimits

0xf635,	// (0x0004f170) list_double_pane_g

0xb1b9,	// (0x0004acf4) list_double_pane_t1_ParamLimits

0xb1b9,	// (0x0004acf4) list_double_pane_t1

0xb1cf,	// (0x0004ad0a) list_double_pane_t2_ParamLimits

0xb1cf,	// (0x0004ad0a) list_double_pane_t2

0x0001,

0xf63a,	// (0x0004f175) list_double_pane_t_ParamLimits

0xf63a,	// (0x0004f175) list_double_pane_t

0xb1e1,	// (0x0004ad1c) list_double2_pane_g1_ParamLimits

0xb1e1,	// (0x0004ad1c) list_double2_pane_g1

0xb1f2,	// (0x0004ad2d) list_double2_pane_g2_ParamLimits

0xb1f2,	// (0x0004ad2d) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0004f17a) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0004f17a) list_double2_pane_g

0xb1fe,	// (0x0004ad39) list_double2_pane_t1_ParamLimits

0xb1fe,	// (0x0004ad39) list_double2_pane_t1

0xb214,	// (0x0004ad4f) list_double2_pane_t2_ParamLimits

0xb214,	// (0x0004ad4f) list_double2_pane_t2

0x0001,

0xf644,	// (0x0004f17f) list_double2_pane_t_ParamLimits

0xf644,	// (0x0004f17f) list_double2_pane_t

0x3325,	// (0x00042e60) list_double_number_pane_g1_ParamLimits

0x3325,	// (0x00042e60) list_double_number_pane_g1

0xbddf,	// (0x0004b91a) list_double_number_pane_g2_ParamLimits

0xbddf,	// (0x0004b91a) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0004f170) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0004f170) list_double_number_pane_g

0xb226,	// (0x0004ad61) list_double_number_pane_t1_ParamLimits

0xb226,	// (0x0004ad61) list_double_number_pane_t1

0xb238,	// (0x0004ad73) list_double_number_pane_t2_ParamLimits

0xb238,	// (0x0004ad73) list_double_number_pane_t2

0xb24e,	// (0x0004ad89) list_double_number_pane_t3_ParamLimits

0xb24e,	// (0x0004ad89) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0004f184) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0004f184) list_double_number_pane_t

0xb260,	// (0x0004ad9b) list_double_graphic_pane_g1_ParamLimits

0xb260,	// (0x0004ad9b) list_double_graphic_pane_g1

0xb26c,	// (0x0004ada7) list_double_graphic_pane_g2_ParamLimits

0xb26c,	// (0x0004ada7) list_double_graphic_pane_g2

0xb27b,	// (0x0004adb6) list_double_graphic_pane_g3_ParamLimits

0xb27b,	// (0x0004adb6) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0004f18b) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0004f18b) list_double_graphic_pane_g

0xb293,	// (0x0004adce) list_double_graphic_pane_t1_ParamLimits

0xb293,	// (0x0004adce) list_double_graphic_pane_t1

0xb2a9,	// (0x0004ade4) list_double_graphic_pane_t2_ParamLimits

0xb2a9,	// (0x0004ade4) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0004f194) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0004f194) list_double_graphic_pane_t

0xb2bb,	// (0x0004adf6) list_double2_graphic_pane_g1_ParamLimits

0xb2bb,	// (0x0004adf6) list_double2_graphic_pane_g1

0xb2c7,	// (0x0004ae02) list_double2_graphic_pane_g2_ParamLimits

0xb2c7,	// (0x0004ae02) list_double2_graphic_pane_g2

0xb2d3,	// (0x0004ae0e) list_double2_graphic_pane_g3_ParamLimits

0xb2d3,	// (0x0004ae0e) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0004f199) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0004f199) list_double2_graphic_pane_g

0xb2df,	// (0x0004ae1a) list_double2_graphic_pane_t1_ParamLimits

0xb2df,	// (0x0004ae1a) list_double2_graphic_pane_t1

0xb2f5,	// (0x0004ae30) list_double2_graphic_pane_t2_ParamLimits

0xb2f5,	// (0x0004ae30) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0004f1a0) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0004f1a0) list_double2_graphic_pane_t

0xb307,	// (0x0004ae42) list_double_large_graphic_pane_g1_ParamLimits

0xb307,	// (0x0004ae42) list_double_large_graphic_pane_g1

0xb332,	// (0x0004ae6d) list_double_large_graphic_pane_g2_ParamLimits

0xb332,	// (0x0004ae6d) list_double_large_graphic_pane_g2

0xbddf,	// (0x0004b91a) list_double_large_graphic_pane_g3_ParamLimits

0xbddf,	// (0x0004b91a) list_double_large_graphic_pane_g3

0xb348,	// (0x0004ae83) list_double_large_graphic_pane_g4_ParamLimits

0xb348,	// (0x0004ae83) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0004f1a5) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0004f1a5) list_double_large_graphic_pane_g

0xb35b,	// (0x0004ae96) list_double_large_graphic_pane_t1_ParamLimits

0xb35b,	// (0x0004ae96) list_double_large_graphic_pane_t1

0xb374,	// (0x0004aeaf) list_double_large_graphic_pane_t2_ParamLimits

0xb374,	// (0x0004aeaf) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0004f1b0) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0004f1b0) list_double_large_graphic_pane_t

0xbdeb,	// (0x0004b926) list_double2_large_graphic_pane_g1_ParamLimits

0xbdeb,	// (0x0004b926) list_double2_large_graphic_pane_g1

0xb386,	// (0x0004aec1) list_double2_large_graphic_pane_g2_ParamLimits

0xb386,	// (0x0004aec1) list_double2_large_graphic_pane_g2

0xb2d3,	// (0x0004ae0e) list_double2_large_graphic_pane_g3_ParamLimits

0xb2d3,	// (0x0004ae0e) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0004f1b5) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0004f1b5) list_double2_large_graphic_pane_g

0xb397,	// (0x0004aed2) list_double2_large_graphic_pane_t1_ParamLimits

0xb397,	// (0x0004aed2) list_double2_large_graphic_pane_t1

0xb3ad,	// (0x0004aee8) list_double2_large_graphic_pane_t2_ParamLimits

0xb3ad,	// (0x0004aee8) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0004f1bc) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0004f1bc) list_double2_large_graphic_pane_t

0xb3bf,	// (0x0004aefa) list_double_heading_pane_g1_ParamLimits

0xb3bf,	// (0x0004aefa) list_double_heading_pane_g1

0xb3d0,	// (0x0004af0b) list_double_heading_pane_g2_ParamLimits

0xb3d0,	// (0x0004af0b) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0004f1c1) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0004f1c1) list_double_heading_pane_g

0xb3dc,	// (0x0004af17) list_double_heading_pane_t1_ParamLimits

0xb3dc,	// (0x0004af17) list_double_heading_pane_t1

0xb214,	// (0x0004ad4f) list_double_heading_pane_t2_ParamLimits

0xb214,	// (0x0004ad4f) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0004f1c6) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0004f1c6) list_double_heading_pane_t

0xb3f2,	// (0x0004af2d) list_double_graphic_heading_pane_g1_ParamLimits

0xb3f2,	// (0x0004af2d) list_double_graphic_heading_pane_g1

0xb3bf,	// (0x0004aefa) list_double_graphic_heading_pane_g2_ParamLimits

0xb3bf,	// (0x0004aefa) list_double_graphic_heading_pane_g2

0xb3d0,	// (0x0004af0b) list_double_graphic_heading_pane_g3_ParamLimits

0xb3d0,	// (0x0004af0b) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0004f1cb) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0004f1cb) list_double_graphic_heading_pane_g

0xb3fe,	// (0x0004af39) list_double_graphic_heading_pane_t1_ParamLimits

0xb3fe,	// (0x0004af39) list_double_graphic_heading_pane_t1

0xb2f5,	// (0x0004ae30) list_double_graphic_heading_pane_t2_ParamLimits

0xb2f5,	// (0x0004ae30) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0004f1d2) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0004f1d2) list_double_graphic_heading_pane_t

0xb414,	// (0x0004af4f) list_double_time_pane_g1_ParamLimits

0xb414,	// (0x0004af4f) list_double_time_pane_g1

0xb425,	// (0x0004af60) list_double_time_pane_g2_ParamLimits

0xb425,	// (0x0004af60) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0004f1d7) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0004f1d7) list_double_time_pane_g

0xb431,	// (0x0004af6c) list_double_time_pane_t1_ParamLimits

0xb431,	// (0x0004af6c) list_double_time_pane_t1

0xb447,	// (0x0004af82) list_double_time_pane_t2_ParamLimits

0xb447,	// (0x0004af82) list_double_time_pane_t2

0xb459,	// (0x0004af94) list_double_time_pane_t3_ParamLimits

0xb459,	// (0x0004af94) list_double_time_pane_t3

0xb46b,	// (0x0004afa6) list_double_time_pane_t4_ParamLimits

0xb46b,	// (0x0004afa6) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0004f1dc) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0004f1dc) list_double_time_pane_t

0xb47d,	// (0x0004afb8) list_setting_pane_g1_ParamLimits

0xb47d,	// (0x0004afb8) list_setting_pane_g1

0xb1f2,	// (0x0004ad2d) list_setting_pane_g2_ParamLimits

0xb1f2,	// (0x0004ad2d) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0004f1e5) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0004f1e5) list_setting_pane_g

0xb489,	// (0x0004afc4) list_setting_pane_t1_ParamLimits

0xb489,	// (0x0004afc4) list_setting_pane_t1

0xb4a3,	// (0x0004afde) list_setting_pane_t2_ParamLimits

0xb4a3,	// (0x0004afde) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0004f1ea) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0004f1ea) list_setting_pane_t

0xb4e2,	// (0x0004b01d) set_value_pane_cp_ParamLimits

0xb4e2,	// (0x0004b01d) set_value_pane_cp

0xb4f0,	// (0x0004b02b) list_setting_number_pane_g1_ParamLimits

0xb4f0,	// (0x0004b02b) list_setting_number_pane_g1

0xb4fc,	// (0x0004b037) list_setting_number_pane_g2_ParamLimits

0xb4fc,	// (0x0004b037) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0004f1f1) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0004f1f1) list_setting_number_pane_g

0xb508,	// (0x0004b043) list_setting_number_pane_t1_ParamLimits

0xb508,	// (0x0004b043) list_setting_number_pane_t1

0xb521,	// (0x0004b05c) list_setting_number_pane_t2_ParamLimits

0xb521,	// (0x0004b05c) list_setting_number_pane_t2

0xb53b,	// (0x0004b076) list_setting_number_pane_t3_ParamLimits

0xb53b,	// (0x0004b076) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0004f1f6) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0004f1f6) list_setting_number_pane_t

0xb4e2,	// (0x0004b01d) set_value_pane_ParamLimits

0xb4e2,	// (0x0004b01d) set_value_pane

0x32b2,	// (0x00042ded) bg_set_opt_pane_ParamLimits

0x32b2,	// (0x00042ded) bg_set_opt_pane

0x03c8,	// (0x0003ff03) set_value_pane_t1

0x32d3,	// (0x00042e0e) slider_set_pane_cp3

0x32dc,	// (0x00042e17) volume_small_pane_cp

0x32e5,	// (0x00042e20) list_form_gen_pane

0x32ee,	// (0x00042e29) scroll_pane_cp8

0xb57e,	// (0x0004b0b9) form_field_data_pane_ParamLimits

0xb57e,	// (0x0004b0b9) form_field_data_pane

0xb59b,	// (0x0004b0d6) form_field_data_wide_pane_ParamLimits

0xb59b,	// (0x0004b0d6) form_field_data_wide_pane

0xb5bf,	// (0x0004b0fa) form_field_popup_pane_ParamLimits

0xb5bf,	// (0x0004b0fa) form_field_popup_pane

0x044f,	// (0x0003ff8a) form_field_popup_wide_pane_ParamLimits

0x044f,	// (0x0003ff8a) form_field_popup_wide_pane

0x0470,	// (0x0003ffab) form_field_slider_pane_ParamLimits

0x0470,	// (0x0003ffab) form_field_slider_pane

0x0483,	// (0x0003ffbe) form_field_slider_wide_pane_ParamLimits

0x0483,	// (0x0003ffbe) form_field_slider_wide_pane

0x32ff,	// (0x00042e3a) data_form_pane

0xb5eb,	// (0x0004b126) form_field_data_pane_t1

0x330b,	// (0x00042e46) input_focus_pane

0x3319,	// (0x00042e54) data_form_wide_pane

0x04c6,	// (0x00040001) form_field_data_wide_pane_t1

0x307c,	// (0x00042bb7) input_focus_pane_cp6

0xb605,	// (0x0004b140) form_field_popup_pane_t1

0x330b,	// (0x00042e46) input_focus_pane_cp7

0x3345,	// (0x00042e80) list_form_pane

0x050a,	// (0x00040045) form_field_popup_wide_pane_t1

0x330b,	// (0x00042e46) input_focus_pane_cp8

0x3351,	// (0x00042e8c) list_form_wide_pane

0xb627,	// (0x0004b162) form_field_slider_pane_t1_ParamLimits

0xb627,	// (0x0004b162) form_field_slider_pane_t1

0xb63f,	// (0x0004b17a) form_field_slider_pane_t2_ParamLimits

0xb63f,	// (0x0004b17a) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0004f206) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0004f206) form_field_slider_pane_t

0x2d00,	// (0x0004283b) input_focus_pane_cp9_ParamLimits

0x2d00,	// (0x0004283b) input_focus_pane_cp9

0xb654,	// (0x0004b18f) slider_cont_pane_ParamLimits

0xb654,	// (0x0004b18f) slider_cont_pane

0x3360,	// (0x00042e9b) form_field_slider_wide_pane_t1_ParamLimits

0x3360,	// (0x00042e9b) form_field_slider_wide_pane_t1

0x0568,	// (0x000400a3) form_field_slider_wide_pane_t2_ParamLimits

0x0568,	// (0x000400a3) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0004f20b) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0004f20b) form_field_slider_wide_pane_t

0x2d00,	// (0x0004283b) input_focus_pane_cp10_ParamLimits

0x2d00,	// (0x0004283b) input_focus_pane_cp10

0xb668,	// (0x0004b1a3) slider_cont_pane_cp1_ParamLimits

0xb668,	// (0x0004b1a3) slider_cont_pane_cp1

0xb67c,	// (0x0004b1b7) slider_form_pane_cp

0x3372,	// (0x00042ead) input_focus_pane_g1

0x337a,	// (0x00042eb5) input_focus_pane_g2

0x3382,	// (0x00042ebd) input_focus_pane_g3

0x338a,	// (0x00042ec5) input_focus_pane_g4

0x3392,	// (0x00042ecd) input_focus_pane_g5

0x339a,	// (0x00042ed5) input_focus_pane_g6

0x33a2,	// (0x00042edd) input_focus_pane_g7

0x33aa,	// (0x00042ee5) input_focus_pane_g8

0x33b2,	// (0x00042eed) input_focus_pane_g9

0x299a,	// (0x000424d5) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0004f210) input_focus_pane_g

0x543a,	// (0x00044f75) wait_border_pane_g3_copy1

0xb684,	// (0x0004b1bf) data_form_pane_t1

0x299a,	// (0x000424d5) wait_anim_pane_g1_copy1

0xb78c,	// (0x0004b2c7) data_form_wide_pane_t1

0x05b5,	// (0x000400f0) list_form_graphic_pane_cp_ParamLimits

0x05b5,	// (0x000400f0) list_form_graphic_pane_cp

0x63bf,	// (0x00045efa) slider_form_pane_g1

0x63c8,	// (0x00045f03) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0004f503) slider_form_pane_g

0xb6a0,	// (0x0004b1db) list_form_graphic_pane_ParamLimits

0xb6a0,	// (0x0004b1db) list_form_graphic_pane

0x05c7,	// (0x00040102) list_form_graphic_pane_g1

0x05cf,	// (0x0004010a) list_form_graphic_pane_t1_ParamLimits

0x05cf,	// (0x0004010a) list_form_graphic_pane_t1

0x2a84,	// (0x000425bf) list_highlight_pane_cp5_ParamLimits

0x2a84,	// (0x000425bf) list_highlight_pane_cp5

0xb6b1,	// (0x0004b1ec) find_pane_g1

0x33ba,	// (0x00042ef5) input_find_pane

0xb6ba,	// (0x0004b1f5) input_find_pane_g1_ParamLimits

0xb6ba,	// (0x0004b1f5) input_find_pane_g1

0xb6c6,	// (0x0004b201) input_find_pane_t1_ParamLimits

0xb6c6,	// (0x0004b201) input_find_pane_t1

0xb6db,	// (0x0004b216) input_find_pane_t2_ParamLimits

0xb6db,	// (0x0004b216) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0004f225) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0004f225) input_find_pane_t

0x33c3,	// (0x00042efe) input_focus_pane_cp5_ParamLimits

0x33c3,	// (0x00042efe) input_focus_pane_cp5

0xc77a,	// (0x0004c2b5) bg_popup_window_pane_cp2_ParamLimits

0xc77a,	// (0x0004c2b5) bg_popup_window_pane_cp2

0xc787,	// (0x0004c2c2) listscroll_menu_pane_ParamLimits

0xc787,	// (0x0004c2c2) listscroll_menu_pane

0xc793,	// (0x0004c2ce) popup_submenu_window_ParamLimits

0xc793,	// (0x0004c2ce) popup_submenu_window

0x3426,	// (0x00042f61) find_popup_pane_g1

0x342e,	// (0x00042f69) input_popup_find_pane_cp

0x33c3,	// (0x00042efe) input_focus_pane_cp4_ParamLimits

0x33c3,	// (0x00042efe) input_focus_pane_cp4

0x3446,	// (0x00042f81) input_popup_find_pane_t1_ParamLimits

0x3446,	// (0x00042f81) input_popup_find_pane_t1

0x29a4,	// (0x000424df) bg_popup_sub_pane_cp

0x3474,	// (0x00042faf) listscroll_popup_sub_pane

0x347c,	// (0x00042fb7) list_submenu_pane_ParamLimits

0x347c,	// (0x00042fb7) list_submenu_pane

0x348d,	// (0x00042fc8) scroll_pane_cp4

0x3495,	// (0x00042fd0) list_single_popup_submenu_pane_ParamLimits

0x3495,	// (0x00042fd0) list_single_popup_submenu_pane

0x34aa,	// (0x00042fe5) list_single_popup_submenu_pane_g1

0x34b2,	// (0x00042fed) list_single_popup_submenu_pane_t1_ParamLimits

0x34b2,	// (0x00042fed) list_single_popup_submenu_pane_t1

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp1_ParamLimits

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp1

0xc7d1,	// (0x0004c30c) tabs_2_active_pane_g1

0xc7d9,	// (0x0004c314) tabs_2_active_pane_t1

0x2d00,	// (0x0004283b) bg_passive_tab_pane_cp1_ParamLimits

0x2d00,	// (0x0004283b) bg_passive_tab_pane_cp1

0xc7d1,	// (0x0004c30c) tabs_2_passive_pane_g1

0xc7d9,	// (0x0004c314) tabs_2_passive_pane_t1

0x2a84,	// (0x000425bf) bg_active_tab_pane_cp4

0xc7eb,	// (0x0004c326) tabs_2_long_active_pane_t1

0x42f3,	// (0x00043e2e) bg_passive_tab_pane_cp4

0x180c,	// (0x00041347) list_single_midp_graphic_pane_g4_ParamLimits

0x2a84,	// (0x000425bf) bg_active_tab_pane_cp5

0xc7fe,	// (0x0004c339) tabs_3_long_active_pane_t1

0x42f3,	// (0x00043e2e) bg_passive_tab_pane_cp5

0x180c,	// (0x00041347) list_single_midp_graphic_pane_g4

0x2a84,	// (0x000425bf) bg_popup_window_pane_cp13_ParamLimits

0x2a84,	// (0x000425bf) bg_popup_window_pane_cp13

0x3529,	// (0x00043064) listscroll_popup_fast_pane_ParamLimits

0x3529,	// (0x00043064) listscroll_popup_fast_pane

0x3538,	// (0x00043073) grid_popup_fast_pane_ParamLimits

0x3538,	// (0x00043073) grid_popup_fast_pane

0x354a,	// (0x00043085) scroll_pane_cp9_ParamLimits

0x354a,	// (0x00043085) scroll_pane_cp9

0x7cf2,	// (0x0004782d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7cf2,	// (0x0004782d) list_single_graphic_hl_pane_t1_cp2

0x356e,	// (0x000430a9) input_focus_pane_cp20_ParamLimits

0x356e,	// (0x000430a9) input_focus_pane_cp20

0x357c,	// (0x000430b7) query_popup_data_pane_t1_ParamLimits

0x357c,	// (0x000430b7) query_popup_data_pane_t1

0x358f,	// (0x000430ca) query_popup_data_pane_t2_ParamLimits

0x358f,	// (0x000430ca) query_popup_data_pane_t2

0x35d5,	// (0x00043110) query_popup_data_pane_t3_ParamLimits

0x35d5,	// (0x00043110) query_popup_data_pane_t3

0x3616,	// (0x00043151) query_popup_data_pane_t4_ParamLimits

0x3616,	// (0x00043151) query_popup_data_pane_t4

0x3652,	// (0x0004318d) query_popup_data_pane_t5_ParamLimits

0x3652,	// (0x0004318d) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0004f22a) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0004f22a) query_popup_data_pane_t

0x3372,	// (0x00042ead) bg_set_opt_pane_g1

0x337a,	// (0x00042eb5) bg_set_opt_pane_g2

0x3382,	// (0x00042ebd) bg_set_opt_pane_g3

0x338a,	// (0x00042ec5) bg_set_opt_pane_g4

0x3392,	// (0x00042ecd) bg_set_opt_pane_g5

0x339a,	// (0x00042ed5) bg_set_opt_pane_g6

0x33a2,	// (0x00042edd) bg_set_opt_pane_g7

0x33aa,	// (0x00042ee5) bg_set_opt_pane_g8

0x33b2,	// (0x00042eed) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0004f235) bg_set_opt_pane_g

0x1465,	// (0x00040fa0) control_top_pane_stacon_ParamLimits

0x1465,	// (0x00040fa0) control_top_pane_stacon

0x14b8,	// (0x00040ff3) signal_pane_stacon_ParamLimits

0x14b8,	// (0x00040ff3) signal_pane_stacon

0x3bfe,	// (0x00043739) stacon_top_pane_g1_ParamLimits

0x3bfe,	// (0x00043739) stacon_top_pane_g1

0x14dd,	// (0x00041018) title_pane_stacon_ParamLimits

0x14dd,	// (0x00041018) title_pane_stacon

0x1507,	// (0x00041042) uni_indicator_pane_stacon_ParamLimits

0x1507,	// (0x00041042) uni_indicator_pane_stacon

0x151f,	// (0x0004105a) battery_pane_stacon_ParamLimits

0x151f,	// (0x0004105a) battery_pane_stacon

0x1563,	// (0x0004109e) control_bottom_pane_stacon_ParamLimits

0x1563,	// (0x0004109e) control_bottom_pane_stacon

0x1586,	// (0x000410c1) navi_pane_stacon_ParamLimits

0x1586,	// (0x000410c1) navi_pane_stacon

0x3c20,	// (0x0004375b) stacon_bottom_pane_g1_ParamLimits

0x3c20,	// (0x0004375b) stacon_bottom_pane_g1

0x11a4,	// (0x00040cdf) aid_levels_signal_lsc_ParamLimits

0x11a4,	// (0x00040cdf) aid_levels_signal_lsc

0x11bb,	// (0x00040cf6) signal_pane_stacon_g1_ParamLimits

0x11bb,	// (0x00040cf6) signal_pane_stacon_g1

0x11cf,	// (0x00040d0a) signal_pane_stacon_g2_ParamLimits

0x11cf,	// (0x00040d0a) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0004f248) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0004f248) signal_pane_stacon_g

0x1204,	// (0x00040d3f) title_pane_stacon_t1_ParamLimits

0x1204,	// (0x00040d3f) title_pane_stacon_t1

0x3696,	// (0x000431d1) uni_indicator_pane_stacon_g1

0x36a0,	// (0x000431db) uni_indicator_pane_stacon_g2

0x36aa,	// (0x000431e5) uni_indicator_pane_stacon_g3

0x36b4,	// (0x000431ef) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0004f254) uni_indicator_pane_stacon_g

0x1229,	// (0x00040d64) control_top_pane_stacon_g1

0x1231,	// (0x00040d6c) control_top_pane_stacon_t1_ParamLimits

0x1231,	// (0x00040d6c) control_top_pane_stacon_t1

0x1268,	// (0x00040da3) aid_levels_battery_lsc_ParamLimits

0x1268,	// (0x00040da3) aid_levels_battery_lsc

0x1280,	// (0x00040dbb) battery_pane_stacon_g1_ParamLimits

0x1280,	// (0x00040dbb) battery_pane_stacon_g1

0x1293,	// (0x00040dce) battery_pane_stacon_g2_ParamLimits

0x1293,	// (0x00040dce) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0004f25d) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0004f25d) battery_pane_stacon_g

0x12d1,	// (0x00040e0c) navi_icon_pane_stacon

0x12e5,	// (0x00040e20) navi_navi_pane_stacon

0x12d1,	// (0x00040e0c) navi_text_pane_stacon

0x1229,	// (0x00040d64) control_bottom_pane_stacon_g1

0x12fb,	// (0x00040e36) control_bottom_pane_stacon_t1_ParamLimits

0x12fb,	// (0x00040e36) control_bottom_pane_stacon_t1

0xc810,	// (0x0004c34b) grid_app_pane_ParamLimits

0xc810,	// (0x0004c34b) grid_app_pane

0xc848,	// (0x0004c383) scroll_pane_cp15_ParamLimits

0xc848,	// (0x0004c383) scroll_pane_cp15

0xc865,	// (0x0004c3a0) cell_app_pane_ParamLimits

0xc865,	// (0x0004c3a0) cell_app_pane

0xc8a6,	// (0x0004c3e1) cell_app_pane_g1_ParamLimits

0xc8a6,	// (0x0004c3e1) cell_app_pane_g1

0x3761,	// (0x0004329c) cell_app_pane_g2_ParamLimits

0x3761,	// (0x0004329c) cell_app_pane_g2

0x0001,

0xf727,	// (0x0004f262) cell_app_pane_g_ParamLimits

0xf727,	// (0x0004f262) cell_app_pane_g

0x376d,	// (0x000432a8) cell_app_pane_t1_ParamLimits

0x376d,	// (0x000432a8) cell_app_pane_t1

0x377f,	// (0x000432ba) grid_highlight_pane_ParamLimits

0x377f,	// (0x000432ba) grid_highlight_pane

0x3372,	// (0x00042ead) cell_highlight_pane_g1

0x337a,	// (0x00042eb5) cell_highlight_pane_g2

0x3382,	// (0x00042ebd) cell_highlight_pane_g3

0x338a,	// (0x00042ec5) cell_highlight_pane_g4

0x3392,	// (0x00042ecd) cell_highlight_pane_g5

0x339a,	// (0x00042ed5) cell_highlight_pane_g6

0x33a2,	// (0x00042edd) cell_highlight_pane_g7

0x33aa,	// (0x00042ee5) cell_highlight_pane_g8

0x33b2,	// (0x00042eed) cell_highlight_pane_g9

0x299a,	// (0x000424d5) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0004f210) cell_highlight_pane_g

0x3790,	// (0x000432cb) bg_scroll_pane

0x1345,	// (0x00040e80) scroll_handle_pane

0x37d7,	// (0x00043312) scroll_bg_pane_g1

0x37ec,	// (0x00043327) scroll_bg_pane_g2

0x3804,	// (0x0004333f) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0004f267) scroll_bg_pane_g

0x3819,	// (0x00043354) scroll_handle_focus_pane_ParamLimits

0x3819,	// (0x00043354) scroll_handle_focus_pane

0x37d7,	// (0x00043312) scroll_handle_pane_g1

0x3826,	// (0x00043361) scroll_handle_pane_g2

0x3804,	// (0x0004333f) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0004f26e) scroll_handle_pane_g

0x33c3,	// (0x00042efe) bg_popup_sub_pane_cp21_ParamLimits

0x33c3,	// (0x00042efe) bg_popup_sub_pane_cp21

0x383a,	// (0x00043375) popup_fep_japan_predictive_window_t1_ParamLimits

0x383a,	// (0x00043375) popup_fep_japan_predictive_window_t1

0x3851,	// (0x0004338c) popup_fep_japan_predictive_window_t2_ParamLimits

0x3851,	// (0x0004338c) popup_fep_japan_predictive_window_t2

0x3884,	// (0x000433bf) popup_fep_japan_predictive_window_t3_ParamLimits

0x3884,	// (0x000433bf) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0004f275) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0004f275) popup_fep_japan_predictive_window_t

0x29a4,	// (0x000424df) bg_popup_sub_pane_cp23

0x38bb,	// (0x000433f6) listscroll_japin_cand_pane

0x38c3,	// (0x000433fe) popup_fep_japan_candidate_window_t1

0x38d1,	// (0x0004340c) candidate_pane_ParamLimits

0x38d1,	// (0x0004340c) candidate_pane

0x38e3,	// (0x0004341e) scroll_pane_cp30

0x38ed,	// (0x00043428) list_single_popup_jap_candidate_pane_ParamLimits

0x38ed,	// (0x00043428) list_single_popup_jap_candidate_pane

0x29a4,	// (0x000424df) list_highlight_pane_cp30

0x3901,	// (0x0004343c) list_single_popup_jap_candidate_pane_t1

0xc8ca,	// (0x0004c405) level_1_signal

0xc8dc,	// (0x0004c417) level_2_signal

0xc8ef,	// (0x0004c42a) level_3_signal

0xc902,	// (0x0004c43d) level_4_signal

0xc915,	// (0x0004c450) level_5_signal

0xc928,	// (0x0004c463) level_6_signal

0xc93b,	// (0x0004c476) level_7_signal

0xc8ca,	// (0x0004c405) level_1_battery

0xc8dc,	// (0x0004c417) level_2_battery

0xc8ef,	// (0x0004c42a) level_3_battery

0xc902,	// (0x0004c43d) level_4_battery

0xc915,	// (0x0004c450) level_5_battery

0xc928,	// (0x0004c463) level_6_battery

0xc93b,	// (0x0004c476) level_7_battery

0x3983,	// (0x000434be) list_menu_pane_ParamLimits

0x3983,	// (0x000434be) list_menu_pane

0x3994,	// (0x000434cf) scroll_pane_cp25_ParamLimits

0x3994,	// (0x000434cf) scroll_pane_cp25

0x39ad,	// (0x000434e8) list_double2_graphic_pane_cp2_ParamLimits

0x39ad,	// (0x000434e8) list_double2_graphic_pane_cp2

0x39ad,	// (0x000434e8) list_double2_large_graphic_pane_cp2_ParamLimits

0x39ad,	// (0x000434e8) list_double2_large_graphic_pane_cp2

0x39ad,	// (0x000434e8) list_double2_pane_cp2_ParamLimits

0x39ad,	// (0x000434e8) list_double2_pane_cp2

0x39ad,	// (0x000434e8) list_double_graphic_pane_cp2_ParamLimits

0x39ad,	// (0x000434e8) list_double_graphic_pane_cp2

0x39ad,	// (0x000434e8) list_double_large_graphic_pane_cp2_ParamLimits

0x39ad,	// (0x000434e8) list_double_large_graphic_pane_cp2

0x39ad,	// (0x000434e8) list_double_number_pane_cp2_ParamLimits

0x39ad,	// (0x000434e8) list_double_number_pane_cp2

0x39ad,	// (0x000434e8) list_double_pane_cp2_ParamLimits

0x39ad,	// (0x000434e8) list_double_pane_cp2

0xc94e,	// (0x0004c489) list_single_2graphic_pane_cp2_ParamLimits

0xc94e,	// (0x0004c489) list_single_2graphic_pane_cp2

0xc94e,	// (0x0004c489) list_single_graphic_heading_pane_cp2_ParamLimits

0xc94e,	// (0x0004c489) list_single_graphic_heading_pane_cp2

0xc94e,	// (0x0004c489) list_single_graphic_pane_cp2_ParamLimits

0xc94e,	// (0x0004c489) list_single_graphic_pane_cp2

0xc94e,	// (0x0004c489) list_single_heading_pane_cp2_ParamLimits

0xc94e,	// (0x0004c489) list_single_heading_pane_cp2

0x39f0,	// (0x0004352b) list_single_large_graphic_pane_cp2_ParamLimits

0x39f0,	// (0x0004352b) list_single_large_graphic_pane_cp2

0xc94e,	// (0x0004c489) list_single_number_heading_pane_cp2_ParamLimits

0xc94e,	// (0x0004c489) list_single_number_heading_pane_cp2

0xc94e,	// (0x0004c489) list_single_number_pane_cp2_ParamLimits

0xc94e,	// (0x0004c489) list_single_number_pane_cp2

0xc94e,	// (0x0004c489) list_single_pane_cp2_ParamLimits

0xc94e,	// (0x0004c489) list_single_pane_cp2

0x3a45,	// (0x00043580) bg_popup_sub_pane_cp22

0x13f7,	// (0x00040f32) popup_side_volume_key_window_g1

0x1421,	// (0x00040f5c) popup_side_volume_key_window_t1

0x143f,	// (0x00040f7a) volume_small_pane_cp1

0x2d00,	// (0x0004283b) bg_popup_sub_pane_cp24_ParamLimits

0x2d00,	// (0x0004283b) bg_popup_sub_pane_cp24

0x3a5b,	// (0x00043596) fep_china_uni_candidate_pane_ParamLimits

0x3a5b,	// (0x00043596) fep_china_uni_candidate_pane

0x3a6f,	// (0x000435aa) fep_china_uni_entry_pane

0x3a7f,	// (0x000435ba) popup_fep_china_uni_window_g1

0x3a9b,	// (0x000435d6) fep_china_uni_entry_pane_g1

0x3aa5,	// (0x000435e0) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0004f2a2) fep_china_uni_entry_pane_g

0x3aaf,	// (0x000435ea) fep_entry_item_pane

0x3ab9,	// (0x000435f4) fep_candidate_item_pane

0x3ac1,	// (0x000435fc) fep_china_uni_candidate_pane_g1

0x3acb,	// (0x00043606) fep_china_uni_candidate_pane_g2

0x3ad3,	// (0x0004360e) fep_china_uni_candidate_pane_g3

0x3adb,	// (0x00043616) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0004f2a7) fep_china_uni_candidate_pane_g

0x299a,	// (0x000424d5) fep_entry_item_pane_g1

0x3ae5,	// (0x00043620) fep_entry_item_pane_t1_ParamLimits

0x3ae5,	// (0x00043620) fep_entry_item_pane_t1

0x3afb,	// (0x00043636) fep_candidate_item_pane_t1_ParamLimits

0x3afb,	// (0x00043636) fep_candidate_item_pane_t1

0x3b10,	// (0x0004364b) fep_candidate_item_pane_t2_ParamLimits

0x3b10,	// (0x0004364b) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0004f2b0) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0004f2b0) fep_candidate_item_pane_t

0x2a84,	// (0x000425bf) list_highlight_pane_cp31_ParamLimits

0x2a84,	// (0x000425bf) list_highlight_pane_cp31

0x3b22,	// (0x0004365d) level_1_signal_lsc

0x3b2b,	// (0x00043666) level_2_signal_lsc

0x3b34,	// (0x0004366f) level_3_signal_lsc

0x3b3d,	// (0x00043678) level_4_signal_lsc

0x3b46,	// (0x00043681) level_5_signal_lsc

0x3b4f,	// (0x0004368a) level_6_signal_lsc

0x3b58,	// (0x00043693) level_7_signal_lsc

0x3b58,	// (0x00043693) level_1_battery_lsc

0x3b61,	// (0x0004369c) level_2_battery_lsc

0x3b6a,	// (0x000436a5) level_3_battery_lsc

0x3b73,	// (0x000436ae) level_4_battery_lsc

0x3b7c,	// (0x000436b7) level_5_battery_lsc

0x3b85,	// (0x000436c0) level_6_battery_lsc

0x3b22,	// (0x0004365d) level_7_battery_lsc

0x3b8e,	// (0x000436c9) scroll_handle_focus_pane_g1

0x3b97,	// (0x000436d2) scroll_handle_focus_pane_g2

0x3ba0,	// (0x000436db) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0004f2b5) scroll_handle_focus_pane_g

0xb6f0,	// (0x0004b22b) list_single_2graphic_pane_g1_ParamLimits

0xb6f0,	// (0x0004b22b) list_single_2graphic_pane_g1

0xbdc6,	// (0x0004b901) list_single_2graphic_pane_g2_ParamLimits

0xbdc6,	// (0x0004b901) list_single_2graphic_pane_g2

0x17db,	// (0x00041316) list_single_2graphic_pane_g3_ParamLimits

0x17db,	// (0x00041316) list_single_2graphic_pane_g3

0xbe00,	// (0x0004b93b) list_single_2graphic_pane_g4_ParamLimits

0xbe00,	// (0x0004b93b) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0004f2bc) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0004f2bc) list_single_2graphic_pane_g

0xb6fc,	// (0x0004b237) list_single_2graphic_pane_t1_ParamLimits

0xb6fc,	// (0x0004b237) list_single_2graphic_pane_t1

0xbe11,	// (0x0004b94c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe11,	// (0x0004b94c) list_double2_graphic_large_graphic_pane_g1

0xb386,	// (0x0004aec1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb386,	// (0x0004aec1) list_double2_graphic_large_graphic_pane_g2

0xb2d3,	// (0x0004ae0e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb2d3,	// (0x0004ae0e) list_double2_graphic_large_graphic_pane_g3

0xb72a,	// (0x0004b265) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb72a,	// (0x0004b265) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0004f2c5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0004f2c5) list_double2_graphic_large_graphic_pane_g

0xb736,	// (0x0004b271) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb736,	// (0x0004b271) list_double2_graphic_large_graphic_pane_t1

0xb74c,	// (0x0004b287) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb74c,	// (0x0004b287) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0004f2ce) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0004f2ce) list_double2_graphic_large_graphic_pane_t

0x3ce2,	// (0x0004381d) popup_fast_swap_window_ParamLimits

0x3ce2,	// (0x0004381d) popup_fast_swap_window

0x3d00,	// (0x0004383b) popup_side_volume_key_window

0x3d1e,	// (0x00043859) stacon_top_pane

0x3d28,	// (0x00043863) status_pane_ParamLimits

0x3d28,	// (0x00043863) status_pane

0x3d1e,	// (0x00043859) status_small_pane

0x29a4,	// (0x000424df) control_pane

0x29a4,	// (0x000424df) stacon_bottom_pane

0x32ee,	// (0x00042e29) scroll_pane_cp121

0x32e5,	// (0x00042e20) set_content_pane

0xc9b1,	// (0x0004c4ec) bg_active_tab_pane_g1_cp1

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp1

0xc9ba,	// (0x0004c4f5) bg_active_tab_pane_g3_cp1

0xc9b1,	// (0x0004c4ec) bg_passive_tab_pane_g1_cp1

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp1

0xc9ba,	// (0x0004c4f5) bg_passive_tab_pane_g3_cp1

0xc9c3,	// (0x0004c4fe) bg_active_tab_pane_g1_cp2

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp2

0xc9cc,	// (0x0004c507) bg_active_tab_pane_g3_cp2

0xc9c3,	// (0x0004c4fe) bg_passive_tab_pane_g1_cp2

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp2

0xc9cc,	// (0x0004c507) bg_passive_tab_pane_g3_cp2

0xc9d5,	// (0x0004c510) bg_active_tab_pane_g1_cp3

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp3

0xc9de,	// (0x0004c519) bg_active_tab_pane_g3_cp3

0xc9d5,	// (0x0004c510) bg_passive_tab_pane_g1_cp3

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp3

0xc9de,	// (0x0004c519) bg_passive_tab_pane_g3_cp3

0xc9e7,	// (0x0004c522) bg_active_tab_pane_g1_cp4

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp4

0xc9f0,	// (0x0004c52b) bg_active_tab_pane_g3_cp4

0xc9e7,	// (0x0004c522) bg_passive_tab_pane_g1_cp4

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp4

0xc9f0,	// (0x0004c52b) bg_passive_tab_pane_g3_cp4

0x3c3c,	// (0x00043777) bg_active_tab_pane_g1_cp5

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp5

0x3c45,	// (0x00043780) bg_active_tab_pane_g3_cp5

0x3c3c,	// (0x00043777) bg_passive_tab_pane_g1_cp5

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp5

0x3c45,	// (0x00043780) bg_passive_tab_pane_g3_cp5

0x3495,	// (0x00042fd0) list_set_graphic_pane_ParamLimits

0x3495,	// (0x00042fd0) list_set_graphic_pane

0x29a4,	// (0x000424df) bg_set_opt_pane_cp4

0xc9f9,	// (0x0004c534) list_set_graphic_pane_g1_ParamLimits

0xc9f9,	// (0x0004c534) list_set_graphic_pane_g1

0xca05,	// (0x0004c540) list_set_graphic_pane_g2_ParamLimits

0xca05,	// (0x0004c540) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0004f2d3) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0004f2d3) list_set_graphic_pane_g

0x0009,

0xfb03,	// (0x0004f63e) volume_small_pane_cp_g

0x3c93,	// (0x000437ce) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3c93,	// (0x000437ce) list_double2_large_graphic_pane_g1_cp2

0x3ca1,	// (0x000437dc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3ca1,	// (0x000437dc) list_double2_large_graphic_pane_g2_cp2

0x3cb2,	// (0x000437ed) list_double2_large_graphic_pane_g3_cp2

0x3cba,	// (0x000437f5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3cba,	// (0x000437f5) list_double2_large_graphic_pane_t1_cp2

0x3cd0,	// (0x0004380b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3cd0,	// (0x0004380b) list_double2_large_graphic_pane_t2_cp2

0x5f24,	// (0x00045a5f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5f24,	// (0x00045a5f) list_double_large_graphic_pane_g1_cp2

0x5f37,	// (0x00045a72) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5f37,	// (0x00045a72) list_double_large_graphic_pane_g2_cp2

0x3e46,	// (0x00043981) list_double_large_graphic_pane_g3_cp2

0x5f48,	// (0x00045a83) list_double_large_graphic_pane_g4_cp

0x5f50,	// (0x00045a8b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5f50,	// (0x00045a8b) list_double_large_graphic_pane_t1_cp2

0x5f67,	// (0x00045aa2) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5f67,	// (0x00045aa2) list_double_large_graphic_pane_t2_cp2

0x3d36,	// (0x00043871) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3d36,	// (0x00043871) list_double2_graphic_pane_g1_cp2

0x3d44,	// (0x0004387f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3d44,	// (0x0004387f) list_double2_graphic_pane_g2_cp2

0x3d55,	// (0x00043890) list_double2_graphic_pane_g3_cp2

0x3d5f,	// (0x0004389a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3d5f,	// (0x0004389a) list_double2_graphic_pane_t1_cp2

0x3d75,	// (0x000438b0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3d75,	// (0x000438b0) list_double2_graphic_pane_t2_cp2

0x3d87,	// (0x000438c2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3d87,	// (0x000438c2) list_single_number_heading_pane_g1_cp2

0x3d93,	// (0x000438ce) list_single_number_heading_pane_g2_cp2

0x3d9b,	// (0x000438d6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3d9b,	// (0x000438d6) list_single_number_heading_pane_t1_cp2

0x3db1,	// (0x000438ec) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3db1,	// (0x000438ec) list_single_number_heading_pane_t2_cp2

0x3dc5,	// (0x00043900) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3dc5,	// (0x00043900) list_single_number_heading_pane_t3_cp2

0x3d87,	// (0x000438c2) list_single_heading_pane_g1_cp2_ParamLimits

0x3d87,	// (0x000438c2) list_single_heading_pane_g1_cp2

0x3d93,	// (0x000438ce) list_single_heading_pane_g2_cp2

0x3d9b,	// (0x000438d6) list_single_heading_pane_t1_cp2_ParamLimits

0x3d9b,	// (0x000438d6) list_single_heading_pane_t1_cp2

0x5d1e,	// (0x00045859) list_single_heading_pane_t2_cp2_ParamLimits

0x5d1e,	// (0x00045859) list_single_heading_pane_t2_cp2

0x5c60,	// (0x0004579b) list_double_graphic_pane_g1_cp2_ParamLimits

0x5c60,	// (0x0004579b) list_double_graphic_pane_g1_cp2

0x5c6c,	// (0x000457a7) list_double_graphic_pane_g2_cp2_ParamLimits

0x5c6c,	// (0x000457a7) list_double_graphic_pane_g2_cp2

0x5c7b,	// (0x000457b6) list_double_graphic_pane_g3_cp2

0x5c83,	// (0x000457be) list_double_graphic_pane_t1_cp2_ParamLimits

0x5c83,	// (0x000457be) list_double_graphic_pane_t1_cp2

0x5c99,	// (0x000457d4) list_double_graphic_pane_t2_cp2_ParamLimits

0x5c99,	// (0x000457d4) list_double_graphic_pane_t2_cp2

0x3e3a,	// (0x00043975) list_double_number_pane_g1_cp2_ParamLimits

0x3e3a,	// (0x00043975) list_double_number_pane_g1_cp2

0x3e46,	// (0x00043981) list_double_number_pane_g2_cp2

0x5c24,	// (0x0004575f) list_double_number_pane_t1_cp2_ParamLimits

0x5c24,	// (0x0004575f) list_double_number_pane_t1_cp2

0x5c38,	// (0x00045773) list_double_number_pane_t2_cp2_ParamLimits

0x5c38,	// (0x00045773) list_double_number_pane_t2_cp2

0x5c4e,	// (0x00045789) list_double_number_pane_t3_cp2_ParamLimits

0x5c4e,	// (0x00045789) list_double_number_pane_t3_cp2

0x5b0d,	// (0x00045648) list_single_graphic_pane_g1_cp2_ParamLimits

0x5b0d,	// (0x00045648) list_single_graphic_pane_g1_cp2

0x3ea0,	// (0x000439db) list_single_graphic_pane_g2_cp2_ParamLimits

0x3ea0,	// (0x000439db) list_single_graphic_pane_g2_cp2

0x3eac,	// (0x000439e7) list_single_graphic_pane_g3_cp2

0x5ae3,	// (0x0004561e) list_single_graphic_pane_t1_cp2_ParamLimits

0x5ae3,	// (0x0004561e) list_single_graphic_pane_t1_cp2

0x3ea0,	// (0x000439db) list_single_number_pane_g1_cp2_ParamLimits

0x3ea0,	// (0x000439db) list_single_number_pane_g1_cp2

0x3eac,	// (0x000439e7) list_single_number_pane_g2_cp2

0x5ae3,	// (0x0004561e) list_single_number_pane_t1_cp2_ParamLimits

0x5ae3,	// (0x0004561e) list_single_number_pane_t1_cp2

0x5af9,	// (0x00045634) list_single_number_pane_t2_cp2_ParamLimits

0x5af9,	// (0x00045634) list_single_number_pane_t2_cp2

0x3ca1,	// (0x000437dc) list_double2_pane_g1_cp2_ParamLimits

0x3ca1,	// (0x000437dc) list_double2_pane_g1_cp2

0x3cb2,	// (0x000437ed) list_double2_pane_g2_cp2

0x3e12,	// (0x0004394d) list_double2_pane_t1_cp2_ParamLimits

0x3e12,	// (0x0004394d) list_double2_pane_t1_cp2

0x3e28,	// (0x00043963) list_double2_pane_t2_cp2_ParamLimits

0x3e28,	// (0x00043963) list_double2_pane_t2_cp2

0x3e3a,	// (0x00043975) list_double_pane_g1_cp2_ParamLimits

0x3e3a,	// (0x00043975) list_double_pane_g1_cp2

0x3e46,	// (0x00043981) list_double_pane_g2_cp2

0x3e4e,	// (0x00043989) list_double_pane_t1_cp2_ParamLimits

0x3e4e,	// (0x00043989) list_double_pane_t1_cp2

0x3e64,	// (0x0004399f) list_double_pane_t2_cp2_ParamLimits

0x3e64,	// (0x0004399f) list_double_pane_t2_cp2

0x3e90,	// (0x000439cb) list_single_pane_cp2_g3

0x3ea0,	// (0x000439db) list_single_pane_g1_cp2_ParamLimits

0x3ea0,	// (0x000439db) list_single_pane_g1_cp2

0x3eac,	// (0x000439e7) list_single_pane_g2_cp2

0x3eb4,	// (0x000439ef) list_single_pane_t1_cp2_ParamLimits

0x3eb4,	// (0x000439ef) list_single_pane_t1_cp2

0x3ecc,	// (0x00043a07) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3ecc,	// (0x00043a07) list_single_large_graphic_pane_g1_cp2

0x3eda,	// (0x00043a15) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3eda,	// (0x00043a15) list_single_large_graphic_pane_g2_cp2

0x3ee6,	// (0x00043a21) list_single_large_graphic_pane_g3_cp2

0x3eee,	// (0x00043a29) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3eee,	// (0x00043a29) list_single_large_graphic_pane_g4_cp1

0x3f08,	// (0x00043a43) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3f08,	// (0x00043a43) list_single_large_graphic_pane_t1_cp2

0x5aad,	// (0x000455e8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5aad,	// (0x000455e8) list_single_graphic_heading_pane_g1_cp2

0x5a7a,	// (0x000455b5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5a7a,	// (0x000455b5) list_single_graphic_heading_pane_g4_cp2

0x3eac,	// (0x000439e7) list_single_graphic_heading_pane_g5_cp2

0x5ab9,	// (0x000455f4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5ab9,	// (0x000455f4) list_single_graphic_heading_pane_t1_cp2

0x5acf,	// (0x0004560a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5acf,	// (0x0004560a) list_single_graphic_heading_pane_t2_cp2

0x5a6e,	// (0x000455a9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5a6e,	// (0x000455a9) list_single_2graphic_pane_g1_cp2

0x5a7a,	// (0x000455b5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5a7a,	// (0x000455b5) list_single_2graphic_pane_g2_cp2

0x3eac,	// (0x000439e7) list_single_2graphic_pane_g3_cp2

0x5a8b,	// (0x000455c6) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5a8b,	// (0x000455c6) list_single_2graphic_pane_g4_cp2

0x5a97,	// (0x000455d2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5a97,	// (0x000455d2) list_single_2graphic_pane_t1_cp2

0x299a,	// (0x000424d5) list_highlight_pane_g10_cp1

0x5646,	// (0x00045181) list_highlight_pane_g1_cp1

0x564e,	// (0x00045189) list_highlight_pane_g2_cp1

0x5656,	// (0x00045191) list_highlight_pane_g3_cp1

0x565e,	// (0x00045199) list_highlight_pane_g4_cp1

0x5666,	// (0x000451a1) list_highlight_pane_g5_cp1

0x566e,	// (0x000451a9) list_highlight_pane_g6_cp1

0x5676,	// (0x000451b1) list_highlight_pane_g7_cp1

0x567e,	// (0x000451b9) list_highlight_pane_g8_cp1

0x5686,	// (0x000451c1) list_highlight_pane_g9_cp1

0xd6fb,	// (0x0004d236) form_field_slider_pane_t3

0xd709,	// (0x0004d244) form_field_slider_pane_t4

0x5582,	// (0x000450bd) slider_form_pane_ParamLimits

0x5582,	// (0x000450bd) slider_form_pane

0x29a4,	// (0x000424df) control_abbreviations

0x29a4,	// (0x000424df) control_conventions

0x29a4,	// (0x000424df) control_definitions

0x29a4,	// (0x000424df) format_table_attribute

0x5d74,	// (0x000458af) bg_popup_preview_window_pane_g9

0x29a4,	// (0x000424df) format_table_data2

0x29a4,	// (0x000424df) format_table_data3

0x29a4,	// (0x000424df) format_table_data_example

0x0008,

0x29a4,	// (0x000424df) intro_purpose

0xf928,	// (0x0004f463) bg_popup_preview_window_pane_g

0x29a4,	// (0x000424df) texts_category

0x29a4,	// (0x000424df) texts_graphics

0x3f1e,	// (0x00043a59) text_digital

0x3f2d,	// (0x00043a68) text_primary

0x3f3c,	// (0x00043a77) text_primary_small

0x3f4b,	// (0x00043a86) text_secondary

0x3f5a,	// (0x00043a95) text_title

0x6510,	// (0x0004604b) bg_passive_tab_pane_g1_cp3_srt

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp3_srt

0x6519,	// (0x00046054) bg_passive_tab_pane_g3_cp3_srt

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp3_srt_ParamLimits

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp3_srt

0x6522,	// (0x0004605d) tabs_4_active_pane_srt_g1

0xdb0e,	// (0x0004d649) tabs_4_active_pane_srt_t1_ParamLimits

0xdb0e,	// (0x0004d649) tabs_4_active_pane_srt_t1

0x6510,	// (0x0004604b) bg_active_tab_pane_g1_cp3_copy1

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp3_copy1

0x6519,	// (0x00046054) bg_active_tab_pane_g3_cp3_copy1

0x2a84,	// (0x000425bf) tabs_2_long_active_pane_srt_ParamLimits

0x2a84,	// (0x000425bf) tabs_2_long_active_pane_srt

0x2a84,	// (0x000425bf) tabs_2_long_passive_pane_srt_ParamLimits

0x2a84,	// (0x000425bf) tabs_2_long_passive_pane_srt

0x42f3,	// (0x00043e2e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x42f3,	// (0x00043e2e) bg_passive_tab_pane_cp4_srt

0x61c4,	// (0x00045cff) bg_passive_tab_pane_g1_cp4_srt

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp4_srt

0x61cd,	// (0x00045d08) bg_passive_tab_pane_g3_cp4_srt

0x2a84,	// (0x000425bf) bg_active_tab_pane_cp4_srt_ParamLimits

0x2a84,	// (0x000425bf) bg_active_tab_pane_cp4_srt

0xd904,	// (0x0004d43f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd904,	// (0x0004d43f) tabs_2_long_active_pane_srt_t1

0x61c4,	// (0x00045cff) bg_active_tab_pane_g1_cp4_srt

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp4_srt

0x61cd,	// (0x00045d08) bg_active_tab_pane_g3_cp4_srt

0x2d00,	// (0x0004283b) tabs_3_long_active_pane_srt_ParamLimits

0x2d00,	// (0x0004283b) tabs_3_long_active_pane_srt

0x2d00,	// (0x0004283b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2d00,	// (0x0004283b) tabs_3_long_passive_pane_cp_srt

0x2d00,	// (0x0004283b) tabs_3_long_passive_pane_srt_ParamLimits

0x2d00,	// (0x0004283b) tabs_3_long_passive_pane_srt

0x42f3,	// (0x00043e2e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x42f3,	// (0x00043e2e) bg_passive_tab_pane_cp5_srt

0x3c3c,	// (0x00043777) bg_passive_tab_pane_g1_cp5_srt

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp5_srt

0x3c45,	// (0x00043780) bg_passive_tab_pane_g3_cp5_srt

0x2a84,	// (0x000425bf) bg_active_tab_pane_cp5_srt_ParamLimits

0x2a84,	// (0x000425bf) bg_active_tab_pane_cp5_srt

0xd8ee,	// (0x0004d429) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd8ee,	// (0x0004d429) tabs_3_long_active_pane_srt_t1

0x3c3c,	// (0x00043777) bg_active_tab_pane_g1_cp5_srt

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp5_srt

0x3c45,	// (0x00043780) bg_active_tab_pane_g3_cp5_srt

0x61a4,	// (0x00045cdf) navi_text_pane_srt_t1

0x619c,	// (0x00045cd7) navi_icon_pane_srt_g1

0x4131,	// (0x00043c6c) midp_editing_number_pane_srt

0x3f69,	// (0x00043aa4) midp_ticker_pane_srt

0x4139,	// (0x00043c74) midp_ticker_pane_srt_g1

0x4141,	// (0x00043c7c) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0004f2f2) midp_ticker_pane_srt_g

0x4149,	// (0x00043c84) midp_ticker_pane_srt_t1

0x618d,	// (0x00045cc8) midp_editing_number_pane_t1_copy1

0xca29,	// (0x0004c564) listscroll_midp_pane

0xca29,	// (0x0004c564) midp_form_pane

0x3fdf,	// (0x00043b1a) midp_info_popup_window_ParamLimits

0x3fdf,	// (0x00043b1a) midp_info_popup_window

0x33c3,	// (0x00042efe) bg_popup_sub_pane_cp50_ParamLimits

0x33c3,	// (0x00042efe) bg_popup_sub_pane_cp50

0x52ad,	// (0x00044de8) listscroll_midp_info_pane_ParamLimits

0x52ad,	// (0x00044de8) listscroll_midp_info_pane

0x5295,	// (0x00044dd0) listscroll_form_midp_pane_ParamLimits

0x5295,	// (0x00044dd0) listscroll_form_midp_pane

0x52a1,	// (0x00044ddc) scroll_bar_cp050

0xd6ef,	// (0x0004d22a) list_midp_pane

0x6f69,	// (0x00046aa4) signal_pane_g2_cp

0x51af,	// (0x00044cea) listscroll_midp_info_pane_t1_ParamLimits

0x51af,	// (0x00044cea) listscroll_midp_info_pane_t1

0x51c7,	// (0x00044d02) listscroll_midp_info_pane_t2_ParamLimits

0x51c7,	// (0x00044d02) listscroll_midp_info_pane_t2

0x5205,	// (0x00044d40) listscroll_midp_info_pane_t3_ParamLimits

0x5205,	// (0x00044d40) listscroll_midp_info_pane_t3

0x523f,	// (0x00044d7a) listscroll_midp_info_pane_t4_ParamLimits

0x523f,	// (0x00044d7a) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0004f39e) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0004f39e) listscroll_midp_info_pane_t

0x348d,	// (0x00042fc8) scroll_pane_cp21

0x5149,	// (0x00044c84) form_midp_field_choice_group_pane

0x5152,	// (0x00044c8d) form_midp_field_text_pane

0x5195,	// (0x00044cd0) form_midp_field_time_pane

0x519d,	// (0x00044cd8) form_midp_gauge_slider_pane

0x51a6,	// (0x00044ce1) form_midp_gauge_wait_pane

0x29a4,	// (0x000424df) form_midp_image_pane

0xb75e,	// (0x0004b299) list_single_midp_pane_ParamLimits

0xb75e,	// (0x0004b299) list_single_midp_pane

0xd6c7,	// (0x0004d202) form_midp_field_text_pane_t1

0x4f21,	// (0x00044a5c) input_focus_pane_cp050

0x5138,	// (0x00044c73) list_midp_form_text_pane

0x50dc,	// (0x00044c17) form_midp_field_choice_group_pane_t1

0x50ea,	// (0x00044c25) input_focus_pane_cp051

0x50fe,	// (0x00044c39) list_midp_choice_pane

0x29a4,	// (0x000424df) status_idle_pane

0x50c0,	// (0x00044bfb) form_midp_field_time_pane_t1

0x299a,	// (0x000424d5) wait_anim_pane_g2_copy1

0x50ce,	// (0x00044c09) form_midp_field_time_pane_t2

0x0001,

0x408f,	// (0x00043bca) aid_navinavi_width_2_pane

0xf85e,	// (0x0004f399) form_midp_field_time_pane_t

0x29a4,	// (0x000424df) input_focus_pane_cp052

0x29a4,	// (0x000424df) bg_input_focus_pane_cp040

0x5080,	// (0x00044bbb) form_midp_gauge_slider_pane_t1

0x508e,	// (0x00044bc9) form_midp_gauge_slider_pane_t2

0xd6ab,	// (0x0004d1e6) form_midp_gauge_slider_pane_t3

0xd6b9,	// (0x0004d1f4) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0004f390) form_midp_gauge_slider_pane_t

0x50b8,	// (0x00044bf3) form_midp_slider_pane

0x2a84,	// (0x000425bf) bg_input_focus_pane_cp041_ParamLimits

0x2a84,	// (0x000425bf) bg_input_focus_pane_cp041

0x504d,	// (0x00044b88) form_midp_gauge_wait_pane_t1_ParamLimits

0x504d,	// (0x00044b88) form_midp_gauge_wait_pane_t1

0x505f,	// (0x00044b9a) form_midp_gauge_wait_pane_t2_ParamLimits

0x505f,	// (0x00044b9a) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0004f38b) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0004f38b) form_midp_gauge_wait_pane_t

0x5071,	// (0x00044bac) form_midp_wait_pane_ParamLimits

0x5071,	// (0x00044bac) form_midp_wait_pane

0x5015,	// (0x00044b50) form_midp_image_pane_g1

0x501e,	// (0x00044b59) form_midp_image_pane_t1

0x502d,	// (0x00044b68) form_midp_image_pane_t2

0x503c,	// (0x00044b77) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0004f384) form_midp_image_pane_t

0x500c,	// (0x00044b47) list_single_midp_pane_g1

0x0758,	// (0x00040293) list_single_midp_pane_t1

0xd694,	// (0x0004d1cf) list_midp_form_item_pane_ParamLimits

0xd694,	// (0x0004d1cf) list_midp_form_item_pane

0x4037,	// (0x00043b72) list_midp_form_item_pane_t1

0x4046,	// (0x00043b81) midp_ticker_pane_g1

0x4052,	// (0x00043b8d) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0004f2d8) midp_ticker_pane_g

0xcad1,	// (0x0004c60c) midp_ticker_pane_t1

0xda93,	// (0x0004d5ce) midp_editing_number_pane_t1

0x63ea,	// (0x00045f25) midp_editing_number_pane

0x63f9,	// (0x00045f34) midp_ticker_pane

0x617d,	// (0x00045cb8) ai_message_heading_pane

0x29a4,	// (0x000424df) bg_popup_window_pane_cp14

0x6185,	// (0x00045cc0) listscroll_ai_message_pane

0x6103,	// (0x00045c3e) ai_message_heading_pane_g1_ParamLimits

0x6103,	// (0x00045c3e) ai_message_heading_pane_g1

0x610f,	// (0x00045c4a) ai_message_heading_pane_g2_ParamLimits

0x610f,	// (0x00045c4a) ai_message_heading_pane_g2

0x611d,	// (0x00045c58) ai_message_heading_pane_g3_ParamLimits

0x611d,	// (0x00045c58) ai_message_heading_pane_g3

0x6129,	// (0x00045c64) ai_message_heading_pane_g4_ParamLimits

0x6129,	// (0x00045c64) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0004f4c5) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0004f4c5) ai_message_heading_pane_g

0x6135,	// (0x00045c70) ai_message_heading_pane_t1_ParamLimits

0x6135,	// (0x00045c70) ai_message_heading_pane_t1

0x614f,	// (0x00045c8a) ai_message_heading_pane_t2_ParamLimits

0x614f,	// (0x00045c8a) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0004f4ce) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0004f4ce) ai_message_heading_pane_t

0x6163,	// (0x00045c9e) bg_popup_heading_pane_cp1_ParamLimits

0x6163,	// (0x00045c9e) bg_popup_heading_pane_cp1

0x60f1,	// (0x00045c2c) list_ai_message_pane_ParamLimits

0x60f1,	// (0x00045c2c) list_ai_message_pane

0x348d,	// (0x00042fc8) scroll_pane_cp10

0x608d,	// (0x00045bc8) list_ai_message_pane_g1

0x6095,	// (0x00045bd0) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0004f4a2) list_ai_message_pane_g

0x609d,	// (0x00045bd8) list_ai_message_pane_t1_ParamLimits

0x609d,	// (0x00045bd8) list_ai_message_pane_t1

0x60b2,	// (0x00045bed) list_ai_message_pane_t2_ParamLimits

0x60b2,	// (0x00045bed) list_ai_message_pane_t2

0x60c7,	// (0x00045c02) list_ai_message_pane_t3_ParamLimits

0x60c7,	// (0x00045c02) list_ai_message_pane_t3

0x60dc,	// (0x00045c17) list_ai_message_pane_t4_ParamLimits

0x60dc,	// (0x00045c17) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0004f4a7) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0004f4a7) list_ai_message_pane_t

0xd8d4,	// (0x0004d40f) cell_ai_soft_ind_pane_ParamLimits

0xd8d4,	// (0x0004d40f) cell_ai_soft_ind_pane

0x4070,	// (0x00043bab) cell_ai_soft_ind_pane_g1_ParamLimits

0x4070,	// (0x00043bab) cell_ai_soft_ind_pane_g1

0x29a4,	// (0x000424df) grid_highlight_cp1

0x407d,	// (0x00043bb8) text_secondary_cp56_ParamLimits

0x407d,	// (0x00043bb8) text_secondary_cp56

0x604b,	// (0x00045b86) example_general_pane_ParamLimits

0x604b,	// (0x00045b86) example_general_pane

0x6057,	// (0x00045b92) example_parent_pane_g1_ParamLimits

0x6057,	// (0x00045b92) example_parent_pane_g1

0x6063,	// (0x00045b9e) example_parent_pane_t1_ParamLimits

0x6063,	// (0x00045b9e) example_parent_pane_t1

0xcf27,	// (0x0004ca62) popup_preview_text_window_ParamLimits

0xcf27,	// (0x0004ca62) popup_preview_text_window

0x3e98,	// (0x000439d3) list_single_pane_cp2_g4

0x2db6,	// (0x000428f1) bg_popup_preview_window_pane_ParamLimits

0x2db6,	// (0x000428f1) bg_popup_preview_window_pane

0x5d7e,	// (0x000458b9) popup_preview_text_window_t1_ParamLimits

0x5d7e,	// (0x000458b9) popup_preview_text_window_t1

0x5d9c,	// (0x000458d7) popup_preview_text_window_t2_ParamLimits

0x5d9c,	// (0x000458d7) popup_preview_text_window_t2

0x5de5,	// (0x00045920) popup_preview_text_window_t3_ParamLimits

0x5de5,	// (0x00045920) popup_preview_text_window_t3

0x5e2a,	// (0x00045965) popup_preview_text_window_t4_ParamLimits

0x5e2a,	// (0x00045965) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0004f476) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0004f476) popup_preview_text_window_t

0x5ea8,	// (0x000459e3) scroll_pane_cp11

0x4e2f,	// (0x0004496a) bg_popup_preview_window_pane_g1

0x5d32,	// (0x0004586d) bg_popup_preview_window_pane_g2

0x5d3c,	// (0x00045877) bg_popup_preview_window_pane_g3

0x5d46,	// (0x00045881) bg_popup_preview_window_pane_g4

0x5d50,	// (0x0004588b) bg_popup_preview_window_pane_g5

0x5d5a,	// (0x00045895) bg_popup_preview_window_pane_g6

0x5d62,	// (0x0004589d) bg_popup_preview_window_pane_g7

0x5d6a,	// (0x000458a5) bg_popup_preview_window_pane_g8

0x0c80,	// (0x000407bb) aid_popup_width_pane

0xce97,	// (0x0004c9d2) popup_midp_note_alarm_window_ParamLimits

0xce97,	// (0x0004c9d2) popup_midp_note_alarm_window

0x32ff,	// (0x00042e3a) data_form_pane_ParamLimits

0xb5e1,	// (0x0004b11c) form_field_data_pane_g1

0xb5eb,	// (0x0004b126) form_field_data_pane_t1_ParamLimits

0x330b,	// (0x00042e46) input_focus_pane_ParamLimits

0x3319,	// (0x00042e54) data_form_wide_pane_ParamLimits

0x04ba,	// (0x0003fff5) form_field_data_wide_pane_g1

0x04c6,	// (0x00040001) form_field_data_wide_pane_t1_ParamLimits

0x307c,	// (0x00042bb7) input_focus_pane_cp6_ParamLimits

0xc7c3,	// (0x0004c2fe) input_popup_find_pane_g1_ParamLimits

0xc7c3,	// (0x0004c2fe) input_popup_find_pane_g1

0x12a4,	// (0x00040ddf) aid_navi_side_left_pane

0x12b9,	// (0x00040df4) aid_navi_side_right_pane

0x5741,	// (0x0004527c) bg_popup_window_pane_cp30_ParamLimits

0x5741,	// (0x0004527c) bg_popup_window_pane_cp30

0x57bb,	// (0x000452f6) popup_midp_note_alarm_window_g1_ParamLimits

0x57bb,	// (0x000452f6) popup_midp_note_alarm_window_g1

0x57eb,	// (0x00045326) popup_midp_note_alarm_window_t1_ParamLimits

0x57eb,	// (0x00045326) popup_midp_note_alarm_window_t1

0x588c,	// (0x000453c7) popup_midp_note_alarm_window_t2_ParamLimits

0x588c,	// (0x000453c7) popup_midp_note_alarm_window_t2

0x593a,	// (0x00045475) popup_midp_note_alarm_window_t3_ParamLimits

0x593a,	// (0x00045475) popup_midp_note_alarm_window_t3

0x596c,	// (0x000454a7) popup_midp_note_alarm_window_t4_ParamLimits

0x596c,	// (0x000454a7) popup_midp_note_alarm_window_t4

0x5992,	// (0x000454cd) popup_midp_note_alarm_window_t5_ParamLimits

0x5992,	// (0x000454cd) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0004f413) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0004f413) popup_midp_note_alarm_window_t

0x5a3e,	// (0x00045579) wait_bar_pane_cp1_ParamLimits

0x5a3e,	// (0x00045579) wait_bar_pane_cp1

0x29a4,	// (0x000424df) wait_anim_pane_copy1

0x29a4,	// (0x000424df) wait_border_pane_copy1

0x5426,	// (0x00044f61) wait_border_pane_g1_copy1

0x04e0,	// (0x0004001b) form_field_popup_pane_g1

0xb605,	// (0x0004b140) form_field_popup_pane_t1_ParamLimits

0x330b,	// (0x00042e46) input_focus_pane_cp7_ParamLimits

0x3345,	// (0x00042e80) list_form_pane_ParamLimits

0x0502,	// (0x0004003d) form_field_popup_wide_pane_g1

0x050a,	// (0x00040045) form_field_popup_wide_pane_t1_ParamLimits

0x330b,	// (0x00042e46) input_focus_pane_cp8_ParamLimits

0x3351,	// (0x00042e8c) list_form_wide_pane_ParamLimits

0x659d,	// (0x000460d8) aid_size_cell_graphic_pane

0xb684,	// (0x0004b1bf) data_form_pane_t1_ParamLimits

0xb78c,	// (0x0004b2c7) data_form_wide_pane_t1_ParamLimits

0xd324,	// (0x0004ce5f) bg_status_flat_pane

0xbb2c,	// (0x0004b667) title_pane_t1_ParamLimits

0x2a4c,	// (0x00042587) title_pane_t2_ParamLimits

0x2a72,	// (0x000425ad) title_pane_t3_ParamLimits

0xf59b,	// (0x0004f0d6) title_pane_t_ParamLimits

0xc8ca,	// (0x0004c405) level_1_signal_ParamLimits

0xc8dc,	// (0x0004c417) level_2_signal_ParamLimits

0xc8ef,	// (0x0004c42a) level_3_signal_ParamLimits

0xc902,	// (0x0004c43d) level_4_signal_ParamLimits

0xc915,	// (0x0004c450) level_5_signal_ParamLimits

0xc928,	// (0x0004c463) level_6_signal_ParamLimits

0xc93b,	// (0x0004c476) level_7_signal_ParamLimits

0xc8ca,	// (0x0004c405) level_1_battery_ParamLimits

0xc8dc,	// (0x0004c417) level_2_battery_ParamLimits

0xc8ef,	// (0x0004c42a) level_3_battery_ParamLimits

0xc902,	// (0x0004c43d) level_4_battery_ParamLimits

0xc915,	// (0x0004c450) level_5_battery_ParamLimits

0xc928,	// (0x0004c463) level_6_battery_ParamLimits

0xc93b,	// (0x0004c476) level_7_battery_ParamLimits

0x5646,	// (0x00045181) bg_status_flat_pane_g1

0x564e,	// (0x00045189) bg_status_flat_pane_g2

0x5656,	// (0x00045191) bg_status_flat_pane_g3

0x565e,	// (0x00045199) bg_status_flat_pane_g4

0x5666,	// (0x000451a1) bg_status_flat_pane_g5

0x566e,	// (0x000451a9) bg_status_flat_pane_g6

0x5676,	// (0x000451b1) bg_status_flat_pane_g7

0xbbc0,	// (0x0004b6fb) tabs_3_active_pane_t1_ParamLimits

0xbbc0,	// (0x0004b6fb) tabs_3_passive_pane_t1_ParamLimits

0xbbda,	// (0x0004b715) tabs_4_active_pane_t1_ParamLimits

0xbbda,	// (0x0004b715) tabs_4_1_passive_pane_t1_ParamLimits

0xc7d9,	// (0x0004c314) tabs_2_active_pane_t1_ParamLimits

0xc7d9,	// (0x0004c314) tabs_2_passive_pane_t1_ParamLimits

0x2a84,	// (0x000425bf) bg_active_tab_pane_cp4_ParamLimits

0xc7eb,	// (0x0004c326) tabs_2_long_active_pane_t1_ParamLimits

0x42f3,	// (0x00043e2e) bg_passive_tab_pane_cp4_ParamLimits

0x1833,	// (0x0004136e) list_single_midp_graphic_pane_t1_ParamLimits

0x2a84,	// (0x000425bf) bg_active_tab_pane_cp5_ParamLimits

0xc7fe,	// (0x0004c339) tabs_3_long_active_pane_t1_ParamLimits

0x42f3,	// (0x00043e2e) bg_passive_tab_pane_cp5_ParamLimits

0x1833,	// (0x0004136e) list_single_midp_graphic_pane_t1

0xd324,	// (0x0004ce5f) bg_status_flat_pane_ParamLimits

0x4aa8,	// (0x000445e3) indicator_pane_cp2_ParamLimits

0x4aa8,	// (0x000445e3) indicator_pane_cp2

0xd4b9,	// (0x0004cff4) navi_pane_srt_ParamLimits

0xd4b9,	// (0x0004cff4) navi_pane_srt

0x4c0e,	// (0x00044749) popup_clock_digital_analogue_window_cp1

0x2b64,	// (0x0004269f) indicator_pane_t1

0x3f69,	// (0x00043aa4) copy_highlight_pane

0x3f69,	// (0x00043aa4) cursor_graphics_pane

0x3f69,	// (0x00043aa4) graphic_within_text_pane

0x3f69,	// (0x00043aa4) link_highlight_pane

0x5e6b,	// (0x000459a6) popup_preview_text_window_t5_ParamLimits

0x5e6b,	// (0x000459a6) popup_preview_text_window_t5

0x4099,	// (0x00043bd4) cursor_digital_pane

0x4099,	// (0x00043bd4) cursor_primary_pane

0x40aa,	// (0x00043be5) cursor_primary_small_pane

0x40b2,	// (0x00043bed) cursor_secondary_pane

0x40ba,	// (0x00043bf5) cursor_title_pane

0x4099,	// (0x00043bd4) link_highlight_digital_pane

0x40a1,	// (0x00043bdc) link_highlight_primary_pane

0x40aa,	// (0x00043be5) link_highlight_primary_small_pane

0x40b2,	// (0x00043bed) link_highlight_secondary_pane

0x40ba,	// (0x00043bf5) link_highlight_title_pane

0x4099,	// (0x00043bd4) copy_highlight_digital_pane

0x4099,	// (0x00043bd4) copy_highlight_primary_pane

0x40aa,	// (0x00043be5) copy_highlight_primary_small_pane

0x40b2,	// (0x00043bed) copy_highlight_secondary_pane

0x40ba,	// (0x00043bf5) copy_highlight_title_pane

0x40b2,	// (0x00043bed) graphic_text_digital_pane

0x56e4,	// (0x0004521f) graphic_text_primary_pane

0x56ed,	// (0x00045228) graphic_text_primary_small_pane

0x40aa,	// (0x00043be5) graphic_text_secondary_pane

0x4099,	// (0x00043bd4) graphic_text_title_pane

0xcae3,	// (0x0004c61e) cursor_primary_pane_g1

0x56d6,	// (0x00045211) cursor_text_primary_t1

0xd72b,	// (0x0004d266) cursor_primary_small_pane_g1

0x56c8,	// (0x00045203) cursor_text_primary_small_t1

0xd721,	// (0x0004d25c) cursor_primary_small_pane_g1_copy1

0x56b0,	// (0x000451eb) cursor_text_primary_small_t1_copy1

0x568e,	// (0x000451c9) cursor_text_title_t1

0xd717,	// (0x0004d252) cursor_title_pane_g1

0xcae3,	// (0x0004c61e) cursor_digital_pane_g1

0x40cc,	// (0x00043c07) cursor_text_digital_t1

0x40da,	// (0x00043c15) link_highlight_primary_pane_g1

0x5637,	// (0x00045172) link_highlight_primary_pane_t1

0x40da,	// (0x00043c15) link_highlight_primary_small_pane_g1

0x40e2,	// (0x00043c1d) link_highlight_primary_small_pane_t1

0x40f1,	// (0x00043c2c) link_highlight_secondary_pane_g1

0x40f9,	// (0x00043c34) link_highlight_secondary_pane_t1

0x55ab,	// (0x000450e6) link_highlight_title_pane_g1

0x55b3,	// (0x000450ee) link_highlight_title_pane_t1

0x5594,	// (0x000450cf) link_highlight_digital_pane_g1

0x559c,	// (0x000450d7) link_highlight_digital_pane_t1

0x545c,	// (0x00044f97) copy_highlight_primary_pane_g1

0x5473,	// (0x00044fae) copy_highlight_primary_pane_t1

0x545c,	// (0x00044f97) copy_highlight_primary_small_pane_g1

0x5464,	// (0x00044f9f) copy_highlight_primary_small_pane_t1

0x4108,	// (0x00043c43) copy_highlight_secondary_pane_g1

0x4110,	// (0x00043c4b) copy_highlight_secondary_pane_t1

0x5445,	// (0x00044f80) copy_highlight_title_pane_g1

0x544d,	// (0x00044f88) copy_highlight_title_pane_t1

0x545c,	// (0x00044f97) copy_highlight_digital_pane_g1

0x676d,	// (0x000462a8) copy_highlight_digital_pane_t1

0x66c1,	// (0x000461fc) graphic_text_primary_pane_g1

0x6751,	// (0x0004628c) graphic_text_primary_pane_t1

0x675f,	// (0x0004629a) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0004f542) graphic_text_primary_pane_t

0x672d,	// (0x00046268) graphic_text_primary_small_pane_g1

0x6735,	// (0x00046270) graphic_text_primary_small_pane_t1

0x6743,	// (0x0004627e) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0004f53d) graphic_text_primary_small_pane_t

0x6709,	// (0x00046244) graphic_text_secondary_pane_g1

0x6711,	// (0x0004624c) graphic_text_secondary_pane_t1

0x671f,	// (0x0004625a) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0004f538) graphic_text_secondary_pane_t

0x66e5,	// (0x00046220) graphic_text_title_pane_g1

0x66ed,	// (0x00046228) graphic_text_title_pane_t1

0x66fb,	// (0x00046236) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0004f533) graphic_text_title_pane_t

0x66c1,	// (0x000461fc) graphic_text_digital_pane_g1

0x66c9,	// (0x00046204) graphic_text_digital_pane_t1

0x66d7,	// (0x00046212) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0004f52e) graphic_text_digital_pane_t

0x2a84,	// (0x000425bf) navi_icon_pane_srt_ParamLimits

0x2a84,	// (0x000425bf) navi_icon_pane_srt

0x29a4,	// (0x000424df) navi_midp_pane_srt

0x29a4,	// (0x000424df) navi_navi_pane_srt

0x2a84,	// (0x000425bf) navi_text_pane_srt_ParamLimits

0x2a84,	// (0x000425bf) navi_text_pane_srt

0x668c,	// (0x000461c7) navi_navi_icon_text_pane_srt

0x6694,	// (0x000461cf) navi_navi_pane_srt_g1_ParamLimits

0x6694,	// (0x000461cf) navi_navi_pane_srt_g1

0x66a6,	// (0x000461e1) navi_navi_pane_srt_g2_ParamLimits

0x66a6,	// (0x000461e1) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0004f529) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0004f529) navi_navi_pane_srt_g

0x66b8,	// (0x000461f3) navi_navi_tabs_pane_srt

0x668c,	// (0x000461c7) navi_navi_text_pane_srt

0x668c,	// (0x000461c7) navi_navi_volume_pane_srt

0x667d,	// (0x000461b8) navi_navi_text_pane_srt_t1

0x1bb9,	// (0x000416f4) navi_navi_volume_pane_srt_g1

0x1bc1,	// (0x000416fc) volume_small_pane_srt_ParamLimits

0x1bc1,	// (0x000416fc) volume_small_pane_srt

0x15a9,	// (0x000410e4) volume_small_pane_srt_g1_ParamLimits

0x15a9,	// (0x000410e4) volume_small_pane_srt_g1

0x15b9,	// (0x000410f4) volume_small_pane_srt_g2_ParamLimits

0x15b9,	// (0x000410f4) volume_small_pane_srt_g2

0x15ca,	// (0x00041105) volume_small_pane_srt_g3_ParamLimits

0x15ca,	// (0x00041105) volume_small_pane_srt_g3

0x15db,	// (0x00041116) volume_small_pane_srt_g4_ParamLimits

0x15db,	// (0x00041116) volume_small_pane_srt_g4

0x15ec,	// (0x00041127) volume_small_pane_srt_g5_ParamLimits

0x15ec,	// (0x00041127) volume_small_pane_srt_g5

0x15fd,	// (0x00041138) volume_small_pane_srt_g6_ParamLimits

0x15fd,	// (0x00041138) volume_small_pane_srt_g6

0x160e,	// (0x00041149) volume_small_pane_srt_g7_ParamLimits

0x160e,	// (0x00041149) volume_small_pane_srt_g7

0x161f,	// (0x0004115a) volume_small_pane_srt_g8_ParamLimits

0x161f,	// (0x0004115a) volume_small_pane_srt_g8

0x1630,	// (0x0004116b) volume_small_pane_srt_g9_ParamLimits

0x1630,	// (0x0004116b) volume_small_pane_srt_g9

0x1641,	// (0x0004117c) volume_small_pane_srt_g10_ParamLimits

0x1641,	// (0x0004117c) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0004f2dd) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0004f2dd) volume_small_pane_srt_g

0x2e6b,	// (0x000429a6) query_popup_data_pane_cp2

0x6663,	// (0x0004619e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6663,	// (0x0004619e) navi_navi_icon_text_pane_srt_t1

0x56e4,	// (0x0004521f) navi_tabs_2_long_pane_srt

0x56e4,	// (0x0004521f) navi_tabs_2_pane_srt

0x56e4,	// (0x0004521f) navi_tabs_3_long_pane_srt

0x56e4,	// (0x0004521f) navi_tabs_3_pane_srt

0x56e4,	// (0x0004521f) navi_tabs_4_pane_srt

0x1b99,	// (0x000416d4) tabs_2_active_pane_srt_ParamLimits

0x1b99,	// (0x000416d4) tabs_2_active_pane_srt

0x1ba9,	// (0x000416e4) tabs_2_passive_pane_srt_ParamLimits

0x1ba9,	// (0x000416e4) tabs_2_passive_pane_srt

0x4f21,	// (0x00044a5c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4f21,	// (0x00044a5c) bg_passive_tab_pane_cp1_srt

0x662f,	// (0x0004616a) bg_passive_tab_pane_g1_cp1_srt

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp1_srt

0x6638,	// (0x00046173) bg_passive_tab_pane_g3_cp1_srt

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp1_srt_ParamLimits

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp1_srt

0x6641,	// (0x0004617c) tabs_2_active_pane_srt_g1

0xdb8e,	// (0x0004d6c9) tabs_2_active_pane_srt_t1_ParamLimits

0xdb8e,	// (0x0004d6c9) tabs_2_active_pane_srt_t1

0x662f,	// (0x0004616a) bg_active_tab_pane_g1_cp1_srt

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp1_srt

0x6638,	// (0x00046173) bg_active_tab_pane_g3_cp1_srt

0x1b66,	// (0x000416a1) tabs_3_active_pane_srt_ParamLimits

0x1b66,	// (0x000416a1) tabs_3_active_pane_srt

0x1b77,	// (0x000416b2) tabs_3_passive_pane_cp_srt_ParamLimits

0x1b77,	// (0x000416b2) tabs_3_passive_pane_cp_srt

0x1b88,	// (0x000416c3) tabs_3_passive_pane_srt_ParamLimits

0x1b88,	// (0x000416c3) tabs_3_passive_pane_srt

0x4f21,	// (0x00044a5c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4f21,	// (0x00044a5c) bg_passive_tab_pane_cp2_srt

0x411f,	// (0x00043c5a) bg_passive_tab_pane_g1_cp2_srt

0x3bb2,	// (0x000436ed) bg_passive_tab_pane_g2_cp2_srt

0x4128,	// (0x00043c63) bg_passive_tab_pane_g3_cp2_srt

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp2_srt_ParamLimits

0x2d00,	// (0x0004283b) bg_active_tab_pane_cp2_srt

0x6615,	// (0x00046150) tabs_3_active_pane_srt_g1

0xdb78,	// (0x0004d6b3) tabs_3_active_pane_srt_t1_ParamLimits

0xdb78,	// (0x0004d6b3) tabs_3_active_pane_srt_t1

0x411f,	// (0x00043c5a) bg_active_tab_pane_g1_cp2_srt

0x3bb2,	// (0x000436ed) bg_active_tab_pane_g2_cp2_srt

0x4128,	// (0x00043c63) bg_active_tab_pane_g3_cp2_srt

0x1b1e,	// (0x00041659) tabs_4_active_pane_srt_ParamLimits

0x1b1e,	// (0x00041659) tabs_4_active_pane_srt

0x1b30,	// (0x0004166b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b30,	// (0x0004166b) tabs_4_passive_pane_cp2_srt

0x427d,	// (0x00043db8) aid_size_cell_toolbar

0x6237,	// (0x00045d72) main_idle_act_pane_ParamLimits

0x44b8,	// (0x00043ff3) popup_large_graphic_colour_window_ParamLimits

0xd1ed,	// (0x0004cd28) popup_toolbar_window_ParamLimits

0xd1ed,	// (0x0004cd28) popup_toolbar_window

0x642f,	// (0x00045f6a) list_single_graphic_2heading_pane_ParamLimits

0x642f,	// (0x00045f6a) list_single_graphic_2heading_pane

0x36be,	// (0x000431f9) aid_size_cell_apps_grid_lsc_pane

0x36d0,	// (0x0004320b) aid_size_cell_apps_grid_prt_pane

0x42f3,	// (0x00043e2e) bg_wml_button_pane_cp1_ParamLimits

0x42f3,	// (0x00043e2e) bg_wml_button_pane_cp1

0xd6c7,	// (0x0004d202) form_midp_field_text_pane_t1_ParamLimits

0x4f21,	// (0x00044a5c) input_focus_pane_cp050_ParamLimits

0x5138,	// (0x00044c73) list_midp_form_text_pane_ParamLimits

0x50ea,	// (0x00044c25) input_focus_pane_cp051_ParamLimits

0x50fe,	// (0x00044c39) list_midp_choice_pane_ParamLimits

0xd67e,	// (0x0004d1b9) list_single_2graphic_pane_cp3_ParamLimits

0xd67e,	// (0x0004d1b9) list_single_2graphic_pane_cp3

0x7292,	// (0x00046dcd) list_single_midp_graphic_pane_ParamLimits

0x7292,	// (0x00046dcd) list_single_midp_graphic_pane

0x06a0,	// (0x000401db) list_single_graphic_2heading_pane_g1_ParamLimits

0x06a0,	// (0x000401db) list_single_graphic_2heading_pane_g1

0x06ac,	// (0x000401e7) list_single_graphic_2heading_pane_g4_ParamLimits

0x06ac,	// (0x000401e7) list_single_graphic_2heading_pane_g4

0x06b8,	// (0x000401f3) list_single_graphic_2heading_pane_g5_ParamLimits

0x06b8,	// (0x000401f3) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0004f330) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0004f330) list_single_graphic_2heading_pane_g

0x06c4,	// (0x000401ff) list_single_graphic_2heading_pane_t1_ParamLimits

0x06c4,	// (0x000401ff) list_single_graphic_2heading_pane_t1

0x06d8,	// (0x00040213) list_single_graphic_2heading_pane_t2_ParamLimits

0x06d8,	// (0x00040213) list_single_graphic_2heading_pane_t2

0x06f4,	// (0x0004022f) list_single_graphic_2heading_pane_t3_ParamLimits

0x06f4,	// (0x0004022f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0004f337) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0004f337) list_single_graphic_2heading_pane_t

0x4d6d,	// (0x000448a8) bg_popup_sub_pane_cp2

0x4d97,	// (0x000448d2) grid_toobar_pane

0x17ab,	// (0x000412e6) cell_toolbar_pane_ParamLimits

0x17ab,	// (0x000412e6) cell_toolbar_pane

0x4dd3,	// (0x0004490e) cell_toolbar_pane_g1_ParamLimits

0x4dd3,	// (0x0004490e) cell_toolbar_pane_g1

0x4de7,	// (0x00044922) cell_toolbar_pane_g2_ParamLimits

0x4de7,	// (0x00044922) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0004f345) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0004f345) cell_toolbar_pane_g

0x4e09,	// (0x00044944) grid_highlight_pane_cp2_ParamLimits

0x4e09,	// (0x00044944) grid_highlight_pane_cp2

0x4e23,	// (0x0004495e) toolbar_button_pane

0x4e2f,	// (0x0004496a) toolbar_button_pane_g1

0x4e37,	// (0x00044972) toolbar_button_pane_g2

0x4e3f,	// (0x0004497a) toolbar_button_pane_g3

0x4e47,	// (0x00044982) toolbar_button_pane_g4

0x4e4f,	// (0x0004498a) toolbar_button_pane_g5

0x4e57,	// (0x00044992) toolbar_button_pane_g6

0x4e5f,	// (0x0004499a) toolbar_button_pane_g7

0x4e67,	// (0x000449a2) toolbar_button_pane_g8

0x4e6f,	// (0x000449aa) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0004f34a) toolbar_button_pane_g

0x17ef,	// (0x0004132a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x17ef,	// (0x0004132a) list_single_2graphic_pane_g1_cp3

0xbf7e,	// (0x0004bab9) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbf7e,	// (0x0004bab9) list_single_2graphic_pane_g2_cp3

0x3d93,	// (0x000438ce) list_single_2graphic_pane_g3_cp3

0x180c,	// (0x00041347) list_single_2graphic_pane_g4_cp3_ParamLimits

0x180c,	// (0x00041347) list_single_2graphic_pane_g4_cp3

0x1818,	// (0x00041353) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1818,	// (0x00041353) list_single_2graphic_pane_t1_cp3

0x3d87,	// (0x000438c2) list_single_midp_graphic_pane_g2_ParamLimits

0x3d87,	// (0x000438c2) list_single_midp_graphic_pane_g2

0x0688,	// (0x000401c3) aid_zoom_text_primary

0x0690,	// (0x000401cb) aid_zoom_text_secondary

0x41dc,	// (0x00043d17) status_small_pane_g7_ParamLimits

0x41dc,	// (0x00043d17) status_small_pane_g7

0x41ff,	// (0x00043d3a) status_small_pane_t1_ParamLimits

0xbb08,	// (0x0004b643) title_pane_g2

0x0003,

0xf592,	// (0x0004f0cd) title_pane_g

0xbda0,	// (0x0004b8db) aid_size_cell_colour_1_pane_ParamLimits

0xbda0,	// (0x0004b8db) aid_size_cell_colour_1_pane

0xc66b,	// (0x0004c1a6) aid_size_cell_colour_2_pane_ParamLimits

0xc66b,	// (0x0004c1a6) aid_size_cell_colour_2_pane

0xc67f,	// (0x0004c1ba) aid_size_cell_colour_3_pane_ParamLimits

0xc67f,	// (0x0004c1ba) aid_size_cell_colour_3_pane

0xc693,	// (0x0004c1ce) aid_size_cell_colour_4_pane_ParamLimits

0xc693,	// (0x0004c1ce) aid_size_cell_colour_4_pane

0x11e0,	// (0x00040d1b) title_pane_stacon_g1_ParamLimits

0x11e0,	// (0x00040d1b) title_pane_stacon_g1

0x54ca,	// (0x00045005) popup_note_wait_window_g3_ParamLimits

0x54ca,	// (0x00045005) popup_note_wait_window_g3

0x5541,	// (0x0004507c) popup_note_wait_window_t5_ParamLimits

0x5541,	// (0x0004507c) popup_note_wait_window_t5

0x29a4,	// (0x000424df) main_feb_china_hwr_fs_writing_pane

0xcb88,	// (0x0004c6c3) popup_feb_china_hwr_fs_window_ParamLimits

0xcb88,	// (0x0004c6c3) popup_feb_china_hwr_fs_window

0xbf8f,	// (0x0004baca) aid_size_cell_hwr_fs_ParamLimits

0xbf8f,	// (0x0004baca) aid_size_cell_hwr_fs

0x4f21,	// (0x00044a5c) bg_popup_sub_pane_cp3_ParamLimits

0x4f21,	// (0x00044a5c) bg_popup_sub_pane_cp3

0xbfa4,	// (0x0004badf) grid_hwr_fs_pane_ParamLimits

0xbfa4,	// (0x0004badf) grid_hwr_fs_pane

0x1876,	// (0x000413b1) linegrid_hwr_fs_pane_ParamLimits

0x1876,	// (0x000413b1) linegrid_hwr_fs_pane

0xbfbc,	// (0x0004baf7) cell_hwr_fs_pane_ParamLimits

0xbfbc,	// (0x0004baf7) cell_hwr_fs_pane

0x4f2d,	// (0x00044a68) linegrid_hwr_fs_pane_g1_ParamLimits

0x4f2d,	// (0x00044a68) linegrid_hwr_fs_pane_g1

0xd652,	// (0x0004d18d) linegrid_hwr_fs_pane_g2_ParamLimits

0xd652,	// (0x0004d18d) linegrid_hwr_fs_pane_g2

0x4f4b,	// (0x00044a86) linegrid_hwr_fs_pane_g3_ParamLimits

0x4f4b,	// (0x00044a86) linegrid_hwr_fs_pane_g3

0x18aa,	// (0x000413e5) linegrid_hwr_fs_pane_g4_ParamLimits

0x18aa,	// (0x000413e5) linegrid_hwr_fs_pane_g4

0x18c8,	// (0x00041403) linegrid_hwr_fs_pane_g5_ParamLimits

0x18c8,	// (0x00041403) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0004f370) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0004f370) linegrid_hwr_fs_pane_g

0x4f57,	// (0x00044a92) cell_hwr_fs_pane_g1_ParamLimits

0x4f57,	// (0x00044a92) cell_hwr_fs_pane_g1

0x4ca4,	// (0x000447df) cell_hwr_fs_pane_g2_ParamLimits

0x4ca4,	// (0x000447df) cell_hwr_fs_pane_g2

0xd664,	// (0x0004d19f) cell_hwr_fs_pane_g3_ParamLimits

0xd664,	// (0x0004d19f) cell_hwr_fs_pane_g3

0xd671,	// (0x0004d1ac) cell_hwr_fs_pane_g4_ParamLimits

0xd671,	// (0x0004d1ac) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0004f37b) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0004f37b) cell_hwr_fs_pane_g

0xbfe2,	// (0x0004bb1d) cell_hwr_fs_pane_t1

0x29a4,	// (0x000424df) grid_highlight_pane_cp6

0x29a4,	// (0x000424df) main_idle_act2_pane

0x3474,	// (0x00042faf) aid_inside_area_popup_secondary

0xd74b,	// (0x0004d286) aid_inside_area_window_primary_ParamLimits

0xd74b,	// (0x0004d286) aid_inside_area_window_primary

0x677c,	// (0x000462b7) ai2_news_ticker_pane

0x6784,	// (0x000462bf) aid_size_cell_ai1_link_ParamLimits

0x6784,	// (0x000462bf) aid_size_cell_ai1_link

0x679e,	// (0x000462d9) popup_ai2_data_window_ParamLimits

0x679e,	// (0x000462d9) popup_ai2_data_window

0x67bc,	// (0x000462f7) popup_ai2_link_window_ParamLimits

0x67bc,	// (0x000462f7) popup_ai2_link_window

0x4f21,	// (0x00044a5c) bg_popup_sub_pane_cp4_ParamLimits

0x4f21,	// (0x00044a5c) bg_popup_sub_pane_cp4

0x67d2,	// (0x0004630d) grid_ai2_link_pane_ParamLimits

0x67d2,	// (0x0004630d) grid_ai2_link_pane

0x67e9,	// (0x00046324) popup_ai2_link_window_g1_ParamLimits

0x67e9,	// (0x00046324) popup_ai2_link_window_g1

0x67f5,	// (0x00046330) popup_ai2_link_window_g2_ParamLimits

0x67f5,	// (0x00046330) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0004f547) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0004f547) popup_ai2_link_window_g

0x6806,	// (0x00046341) ai2_mp_button_pane

0x680e,	// (0x00046349) ai2_mp_volume_pane

0x50ea,	// (0x00044c25) bg_popup_sub_pane_cp5_ParamLimits

0x50ea,	// (0x00044c25) bg_popup_sub_pane_cp5

0x6816,	// (0x00046351) heading_ai2_gene_pane_ParamLimits

0x6816,	// (0x00046351) heading_ai2_gene_pane

0x6822,	// (0x0004635d) list_ai2_gene_pane_ParamLimits

0x6822,	// (0x0004635d) list_ai2_gene_pane

0x686a,	// (0x000463a5) cell_ai2_link_pane_ParamLimits

0x686a,	// (0x000463a5) cell_ai2_link_pane

0x68c2,	// (0x000463fd) cell_ai2_link_pane_g1

0x29a4,	// (0x000424df) grid_highlight_pane_cp7

0x1bd6,	// (0x00041711) ai2_mp_volume_pane_g1

0x6995,	// (0x000464d0) ai2_mp_volume_pane_g2

0x690a,	// (0x00046445) list_ai2_gene_pane_t1

0x699d,	// (0x000464d8) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0004f560) ai2_mp_volume_pane_g

0x1bde,	// (0x00041719) volume_small_pane_cp3

0x69a5,	// (0x000464e0) aid_size_cell_ai2_button

0x69ad,	// (0x000464e8) grid_ai2_button_pane

0x69b6,	// (0x000464f1) cell_ai2_button_pane_ParamLimits

0x69b6,	// (0x000464f1) cell_ai2_button_pane

0x299a,	// (0x000424d5) cell_ai2_button_pane_g1

0x29a4,	// (0x000424df) grid_highlight_pane_cp8

0x6955,	// (0x00046490) ai2_gene_pane_t1_ParamLimits

0x6955,	// (0x00046490) ai2_gene_pane_t1

0xcb14,	// (0x0004c64f) aid_height_parent_landscape

0xd91b,	// (0x0004d456) aid_height_set_list

0x6237,	// (0x00045d72) aid_size_parent

0x659d,	// (0x000460d8) aid_size_cell_graphic_pane_ParamLimits

0x6832,	// (0x0004636d) popup_ai2_data_window_g1_ParamLimits

0x6832,	// (0x0004636d) popup_ai2_data_window_g1

0x683e,	// (0x00046379) ai2_news_ticker_pane_g1

0x6846,	// (0x00046381) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0004f54c) ai2_news_ticker_pane_g

0x684e,	// (0x00046389) ai2_news_ticker_pane_t1

0x685c,	// (0x00046397) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0004f551) ai2_news_ticker_pane_t

0x68cb,	// (0x00046406) heading_ai2_gene_pane_g1

0x68d3,	// (0x0004640e) heading_ai2_gene_pane_t1_ParamLimits

0x68d3,	// (0x0004640e) heading_ai2_gene_pane_t1

0x68e8,	// (0x00046423) list_highlight_pane_cp6

0x68f0,	// (0x0004642b) ai2_gene_pane_ParamLimits

0x68f0,	// (0x0004642b) ai2_gene_pane

0x6918,	// (0x00046453) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0004f556) list_ai2_gene_pane_t

0x6926,	// (0x00046461) list_highlight_pane_cp8_ParamLimits

0x6926,	// (0x00046461) list_highlight_pane_cp8

0x6937,	// (0x00046472) ai2_gene_pane_g1_ParamLimits

0x6937,	// (0x00046472) ai2_gene_pane_g1

0x6949,	// (0x00046484) ai2_gene_pane_g2_ParamLimits

0x6949,	// (0x00046484) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0004f55b) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0004f55b) ai2_gene_pane_g

0x32a1,	// (0x00042ddc) scroll_pane_cp12

0xbf21,	// (0x0004ba5c) control_pane_t3_ParamLimits

0xbf21,	// (0x0004ba5c) control_pane_t3

0x41f0,	// (0x00043d2b) status_small_pane_g8_ParamLimits

0x41f0,	// (0x00043d2b) status_small_pane_g8

0xcc2a,	// (0x0004c765) popup_find_window_ParamLimits

0xced7,	// (0x0004ca12) popup_note_image_window_ParamLimits

0x070c,	// (0x00040247) list_double2_graphic_pane_vc_g1_ParamLimits

0x070c,	// (0x00040247) list_double2_graphic_pane_vc_g1

0x3eda,	// (0x00043a15) list_double2_graphic_pane_vc_g2_ParamLimits

0x3eda,	// (0x00043a15) list_double2_graphic_pane_vc_g2

0x17db,	// (0x00041316) list_double2_graphic_pane_vc_g3_ParamLimits

0x17db,	// (0x00041316) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0004f33e) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0004f33e) list_double2_graphic_pane_vc_g

0x0718,	// (0x00040253) list_double2_graphic_pane_vc_t1_ParamLimits

0x0718,	// (0x00040253) list_double2_graphic_pane_vc_t1

0x3eda,	// (0x00043a15) list_single_heading_pane_vc_g1_ParamLimits

0x3eda,	// (0x00043a15) list_single_heading_pane_vc_g1

0x17db,	// (0x00041316) list_single_heading_pane_vc_g2_ParamLimits

0x17db,	// (0x00041316) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0004f151) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0004f151) list_single_heading_pane_vc_g

0x072e,	// (0x00040269) list_single_heading_pane_vc_t1_ParamLimits

0x072e,	// (0x00040269) list_single_heading_pane_vc_t1

0x0744,	// (0x0004027f) list_single_heading_pane_vc_t2_ParamLimits

0x0744,	// (0x0004027f) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0004f35f) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0004f35f) list_single_heading_pane_vc_t

0x4e77,	// (0x000449b2) list_setting_number_pane_vc_g1_ParamLimits

0x4e77,	// (0x000449b2) list_setting_number_pane_vc_g1

0x4e83,	// (0x000449be) list_setting_number_pane_vc_g2_ParamLimits

0x4e83,	// (0x000449be) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0004f364) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0004f364) list_setting_number_pane_vc_g

0x4e8f,	// (0x000449ca) list_setting_number_pane_vc_t1_ParamLimits

0x4e8f,	// (0x000449ca) list_setting_number_pane_vc_t1

0x4ea3,	// (0x000449de) list_setting_number_pane_vc_t2_ParamLimits

0x4ea3,	// (0x000449de) list_setting_number_pane_vc_t2

0x4ebf,	// (0x000449fa) list_setting_number_pane_vc_t3_ParamLimits

0x4ebf,	// (0x000449fa) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0004f369) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0004f369) list_setting_number_pane_vc_t

0x4ee7,	// (0x00044a22) set_value_pane_vc_ParamLimits

0x4ee7,	// (0x00044a22) set_value_pane_vc

0x642f,	// (0x00045f6a) list_double2_graphic_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double2_graphic_pane_vc

0x642f,	// (0x00045f6a) list_double2_large_graphic_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double2_large_graphic_pane_vc

0x642f,	// (0x00045f6a) list_double2_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double2_pane_vc

0x642f,	// (0x00045f6a) list_double_graphic_heading_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double_graphic_heading_pane_vc

0x642f,	// (0x00045f6a) list_double_graphic_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double_graphic_pane_vc

0x642f,	// (0x00045f6a) list_double_heading_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double_heading_pane_vc

0x642f,	// (0x00045f6a) list_double_large_graphic_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double_large_graphic_pane_vc

0x642f,	// (0x00045f6a) list_double_number_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double_number_pane_vc

0x642f,	// (0x00045f6a) list_double_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double_pane_vc

0x642f,	// (0x00045f6a) list_double_time_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_double_time_pane_vc

0x642f,	// (0x00045f6a) list_setting_number_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_setting_number_pane_vc

0x642f,	// (0x00045f6a) list_setting_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_setting_pane_vc

0x642f,	// (0x00045f6a) list_single_graphic_heading_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_single_graphic_heading_pane_vc

0x642f,	// (0x00045f6a) list_single_heading_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_single_heading_pane_vc

0x642f,	// (0x00045f6a) list_single_number_heading_pane_vc_ParamLimits

0x642f,	// (0x00045f6a) list_single_number_heading_pane_vc

0x070c,	// (0x00040247) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x070c,	// (0x00040247) list_double_graphic_heading_pane_vc_g1

0x1be7,	// (0x00041722) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1be7,	// (0x00041722) list_double_graphic_heading_pane_vc_g2

0x1bf3,	// (0x0004172e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1bf3,	// (0x0004172e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0004f567) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0004f567) list_double_graphic_heading_pane_vc_g

0x07fa,	// (0x00040335) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x07fa,	// (0x00040335) list_double_graphic_heading_pane_vc_t1

0x072e,	// (0x00040269) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x072e,	// (0x00040269) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0004f56e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0004f56e) list_double_graphic_heading_pane_vc_t

0x4e77,	// (0x000449b2) list_setting_pane_vc_g1_ParamLimits

0x4e77,	// (0x000449b2) list_setting_pane_vc_g1

0x4e83,	// (0x000449be) list_setting_pane_vc_g2_ParamLimits

0x4e83,	// (0x000449be) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0004f364) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0004f364) list_setting_pane_vc_g

0x6bf2,	// (0x0004672d) list_setting_pane_vc_t1_ParamLimits

0x6bf2,	// (0x0004672d) list_setting_pane_vc_t1

0x6c06,	// (0x00046741) list_setting_pane_vc_t2_ParamLimits

0x6c06,	// (0x00046741) list_setting_pane_vc_t2

0x0001,

0xfa76,	// (0x0004f5b1) list_setting_pane_vc_t_ParamLimits

0xfa76,	// (0x0004f5b1) list_setting_pane_vc_t

0x4ee7,	// (0x00044a22) set_value_pane_cp_vc_ParamLimits

0x4ee7,	// (0x00044a22) set_value_pane_cp_vc

0x3eda,	// (0x00043a15) list_single_number_heading_pane_vc_g1_ParamLimits

0x3eda,	// (0x00043a15) list_single_number_heading_pane_vc_g1

0x17db,	// (0x00041316) list_single_number_heading_pane_vc_g2_ParamLimits

0x17db,	// (0x00041316) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0004f151) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0004f151) list_single_number_heading_pane_vc_g

0x072e,	// (0x00040269) list_single_number_heading_pane_vc_t1_ParamLimits

0x072e,	// (0x00040269) list_single_number_heading_pane_vc_t1

0x080e,	// (0x00040349) list_single_number_heading_pane_vc_t2_ParamLimits

0x080e,	// (0x00040349) list_single_number_heading_pane_vc_t2

0x0822,	// (0x0004035d) list_single_number_heading_pane_vc_t3_ParamLimits

0x0822,	// (0x0004035d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa7b,	// (0x0004f5b6) list_single_number_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0004f5b6) list_single_number_heading_pane_vc_t

0x070c,	// (0x00040247) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x070c,	// (0x00040247) list_single_graphic_heading_pane_vc_g1

0x3eda,	// (0x00043a15) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3eda,	// (0x00043a15) list_single_graphic_heading_pane_vc_g4

0x17db,	// (0x00041316) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x17db,	// (0x00041316) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0004f33e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004f33e) list_single_graphic_heading_pane_vc_g

0x072e,	// (0x00040269) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x072e,	// (0x00040269) list_single_graphic_heading_pane_vc_t1

0x0834,	// (0x0004036f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0834,	// (0x0004036f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x0004f5bd) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x0004f5bd) list_single_graphic_heading_pane_vc_t

0x3eda,	// (0x00043a15) list_double2_pane_vc_g1_ParamLimits

0x3eda,	// (0x00043a15) list_double2_pane_vc_g1

0x17db,	// (0x00041316) list_double2_pane_vc_g2_ParamLimits

0x17db,	// (0x00041316) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x0004f151) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x0004f151) list_double2_pane_vc_g

0x0848,	// (0x00040383) list_double2_pane_vc_t1_ParamLimits

0x0848,	// (0x00040383) list_double2_pane_vc_t1

0x1bff,	// (0x0004173a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1bff,	// (0x0004173a) list_double2_large_graphic_pane_vc_g1

0x3eda,	// (0x00043a15) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3eda,	// (0x00043a15) list_double2_large_graphic_pane_vc_g2

0x17db,	// (0x00041316) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x17db,	// (0x00041316) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0004f169) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0004f169) list_double2_large_graphic_pane_vc_g

0x085e,	// (0x00040399) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x085e,	// (0x00040399) list_double2_large_graphic_pane_vc_t1

0x1c0b,	// (0x00041746) list_double_time_pane_vc_g1_ParamLimits

0x1c0b,	// (0x00041746) list_double_time_pane_vc_g1

0x1c17,	// (0x00041752) list_double_time_pane_vc_g2_ParamLimits

0x1c17,	// (0x00041752) list_double_time_pane_vc_g2

0x0001,

0xfa87,	// (0x0004f5c2) list_double_time_pane_vc_g_ParamLimits

0xfa87,	// (0x0004f5c2) list_double_time_pane_vc_g

0x0874,	// (0x000403af) list_double_time_pane_vc_t1_ParamLimits

0x0874,	// (0x000403af) list_double_time_pane_vc_t1

0x088d,	// (0x000403c8) list_double_time_pane_vc_t2_ParamLimits

0x088d,	// (0x000403c8) list_double_time_pane_vc_t2

0x08cd,	// (0x00040408) list_double_time_pane_vc_t3_ParamLimits

0x08cd,	// (0x00040408) list_double_time_pane_vc_t3

0x08e5,	// (0x00040420) list_double_time_pane_vc_t4_ParamLimits

0x08e5,	// (0x00040420) list_double_time_pane_vc_t4

0x0003,

0xfa8c,	// (0x0004f5c7) list_double_time_pane_vc_t_ParamLimits

0xfa8c,	// (0x0004f5c7) list_double_time_pane_vc_t

0x3eda,	// (0x00043a15) list_double_pane_vc_g1_ParamLimits

0x3eda,	// (0x00043a15) list_double_pane_vc_g1

0x17db,	// (0x00041316) list_double_pane_vc_g2_ParamLimits

0x17db,	// (0x00041316) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x0004f151) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x0004f151) list_double_pane_vc_g

0x08f9,	// (0x00040434) list_double_pane_vc_t1_ParamLimits

0x08f9,	// (0x00040434) list_double_pane_vc_t1

0x090b,	// (0x00040446) list_double_pane_vc_t2_ParamLimits

0x090b,	// (0x00040446) list_double_pane_vc_t2

0x0001,

0xfa95,	// (0x0004f5d0) list_double_pane_vc_t_ParamLimits

0xfa95,	// (0x0004f5d0) list_double_pane_vc_t

0x3eda,	// (0x00043a15) list_double_number_pane_vc_g1_ParamLimits

0x3eda,	// (0x00043a15) list_double_number_pane_vc_g1

0x17db,	// (0x00041316) list_double_number_pane_vc_g2_ParamLimits

0x17db,	// (0x00041316) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x0004f151) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x0004f151) list_double_number_pane_vc_g

0x0923,	// (0x0004045e) list_double_number_pane_vc_t1_ParamLimits

0x0923,	// (0x0004045e) list_double_number_pane_vc_t1

0x0937,	// (0x00040472) list_double_number_pane_vc_t2_ParamLimits

0x0937,	// (0x00040472) list_double_number_pane_vc_t2

0x090b,	// (0x00040446) list_double_number_pane_vc_t3_ParamLimits

0x090b,	// (0x00040446) list_double_number_pane_vc_t3

0x0002,

0xfa9a,	// (0x0004f5d5) list_double_number_pane_vc_t_ParamLimits

0xfa9a,	// (0x0004f5d5) list_double_number_pane_vc_t

0x1c23,	// (0x0004175e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1c23,	// (0x0004175e) list_double_large_graphic_pane_vc_g1

0x1c2f,	// (0x0004176a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1c2f,	// (0x0004176a) list_double_large_graphic_pane_vc_g2

0x17db,	// (0x00041316) list_double_large_graphic_pane_vc_g3_ParamLimits

0x17db,	// (0x00041316) list_double_large_graphic_pane_vc_g3

0x0949,	// (0x00040484) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0949,	// (0x00040484) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa1,	// (0x0004f5dc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x0004f5dc) list_double_large_graphic_pane_vc_g

0x0955,	// (0x00040490) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0955,	// (0x00040490) list_double_large_graphic_pane_vc_t1

0x0967,	// (0x000404a2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0967,	// (0x000404a2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaaa,	// (0x0004f5e5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaaa,	// (0x0004f5e5) list_double_large_graphic_pane_vc_t

0x1be7,	// (0x00041722) list_double_heading_pane_vc_g1_ParamLimits

0x1be7,	// (0x00041722) list_double_heading_pane_vc_g1

0x1bf3,	// (0x0004172e) list_double_heading_pane_vc_g2_ParamLimits

0x1bf3,	// (0x0004172e) list_double_heading_pane_vc_g2

0x0001,

0xfaaf,	// (0x0004f5ea) list_double_heading_pane_vc_g_ParamLimits

0xfaaf,	// (0x0004f5ea) list_double_heading_pane_vc_g

0x0980,	// (0x000404bb) list_double_heading_pane_vc_t1_ParamLimits

0x0980,	// (0x000404bb) list_double_heading_pane_vc_t1

0x072e,	// (0x00040269) list_double_heading_pane_vc_t2_ParamLimits

0x072e,	// (0x00040269) list_double_heading_pane_vc_t2

0x0001,

0xfab4,	// (0x0004f5ef) list_double_heading_pane_vc_t_ParamLimits

0xfab4,	// (0x0004f5ef) list_double_heading_pane_vc_t

0x070c,	// (0x00040247) list_double_graphic_pane_vc_g1_ParamLimits

0x070c,	// (0x00040247) list_double_graphic_pane_vc_g1

0x1c3e,	// (0x00041779) list_double_graphic_pane_vc_g2_ParamLimits

0x1c3e,	// (0x00041779) list_double_graphic_pane_vc_g2

0x1c4d,	// (0x00041788) list_double_graphic_pane_vc_g3_ParamLimits

0x1c4d,	// (0x00041788) list_double_graphic_pane_vc_g3

0x0002,

0xfab9,	// (0x0004f5f4) list_double_graphic_pane_vc_g_ParamLimits

0xfab9,	// (0x0004f5f4) list_double_graphic_pane_vc_g

0x0994,	// (0x000404cf) list_double_graphic_pane_vc_t1_ParamLimits

0x0994,	// (0x000404cf) list_double_graphic_pane_vc_t1

0x090b,	// (0x00040446) list_double_graphic_pane_vc_t2_ParamLimits

0x090b,	// (0x00040446) list_double_graphic_pane_vc_t2

0x0001,

0xfac0,	// (0x0004f5fb) list_double_graphic_pane_vc_t_ParamLimits

0xfac0,	// (0x0004f5fb) list_double_graphic_pane_vc_t

0x0c8c,	// (0x000407c7) aid_size_cell_fastswap

0xb952,	// (0x0004b48d) aid_size_cell_touch_ParamLimits

0xb952,	// (0x0004b48d) aid_size_cell_touch

0x0ef5,	// (0x00040a30) popup_fast_swap_wide_window_ParamLimits

0x0ef5,	// (0x00040a30) popup_fast_swap_wide_window

0xbaa1,	// (0x0004b5dc) touch_pane_ParamLimits

0xbaa1,	// (0x0004b5dc) touch_pane

0x32f7,	// (0x00042e32) button_value_adjust_pane_cp2

0x03d6,	// (0x0003ff11) button_value_adjust_pane_cp4

0x03fe,	// (0x0003ff39) form_field_data_pane_cp2

0xb5b5,	// (0x0004b0f0) form_field_data_wide_pane_cp2

0x3790,	// (0x000432cb) bg_scroll_pane_ParamLimits

0x1345,	// (0x00040e80) scroll_handle_pane_ParamLimits

0x1359,	// (0x00040e94) scroll_sc2_down_pane_ParamLimits

0x1359,	// (0x00040e94) scroll_sc2_down_pane

0x37c1,	// (0x000432fc) scroll_sc2_up_pane_ParamLimits

0x37c1,	// (0x000432fc) scroll_sc2_up_pane

0xdccf,	// (0x0004d80a) grid_wheel_folder_pane_g1_ParamLimits

0xdccf,	// (0x0004d80a) grid_wheel_folder_pane_g1

0x1541,	// (0x0004107c) clock_nsta_pane_cp2_ParamLimits

0x1541,	// (0x0004107c) clock_nsta_pane_cp2

0xca29,	// (0x0004c564) listscroll_midp_pane_ParamLimits

0xca3a,	// (0x0004c575) midp_canvas_pane

0x426b,	// (0x00043da6) nsta_clock_indic_pane

0x42c5,	// (0x00043e00) listscroll_form_pane_vc

0x42e1,	// (0x00043e1c) listscroll_set_pane_vc_ParamLimits

0x42e1,	// (0x00043e1c) listscroll_set_pane_vc

0xd34c,	// (0x0004ce87) clock_nsta_pane

0xd376,	// (0x0004ceb1) indicator_nsta_pane

0x4d6d,	// (0x000448a8) bg_popup_sub_pane_cp2_ParamLimits

0x4d81,	// (0x000448bc) find_pane_cp2_ParamLimits

0x4d81,	// (0x000448bc) find_pane_cp2

0x4d97,	// (0x000448d2) grid_toobar_pane_ParamLimits

0x4ef5,	// (0x00044a30) list_form_gen_pane_vc_ParamLimits

0x4ef5,	// (0x00044a30) list_form_gen_pane_vc

0x4f0b,	// (0x00044a46) scroll_pane_cp8_vc_ParamLimits

0x4f0b,	// (0x00044a46) scroll_pane_cp8_vc

0x4f87,	// (0x00044ac2) data_form_wide_pane_vc_ParamLimits

0x4f87,	// (0x00044ac2) data_form_wide_pane_vc

0x4f93,	// (0x00044ace) form_field_data_wide_pane_vc_g1

0x4f9b,	// (0x00044ad6) form_field_data_wide_pane_vc_t1_ParamLimits

0x4f9b,	// (0x00044ad6) form_field_data_wide_pane_vc_t1

0x330b,	// (0x00042e46) input_focus_pane_cp6_vc_ParamLimits

0x330b,	// (0x00042e46) input_focus_pane_cp6_vc

0xd6ef,	// (0x0004d22a) list_midp_pane_ParamLimits

0x6609,	// (0x00046144) scroll_pane_cp16_ParamLimits

0x6609,	// (0x00046144) scroll_pane_cp16

0x52c1,	// (0x00044dfc) button_value_adjust_pane_ParamLimits

0x52c1,	// (0x00044dfc) button_value_adjust_pane

0xd92c,	// (0x0004d467) button_value_adjust_pane_cp6_ParamLimits

0xd92c,	// (0x0004d467) button_value_adjust_pane_cp6

0xda6e,	// (0x0004d5a9) settings_code_pane_cp_ParamLimits

0xda6e,	// (0x0004d5a9) settings_code_pane_cp

0x299a,	// (0x000424d5) cell_touch_pane_g1

0x299a,	// (0x000424d5) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0004f287) cell_touch_pane_g

0xdba4,	// (0x0004d6df) cell_touch_pane_cp_ParamLimits

0xdba4,	// (0x0004d6df) cell_touch_pane_cp

0xdbc0,	// (0x0004d6fb) cell_touch_pane_ParamLimits

0xdbc0,	// (0x0004d6fb) cell_touch_pane

0x299a,	// (0x000424d5) scroll_sc2_down_pane_g1

0x299a,	// (0x000424d5) scroll_sc2_up_pane_g1

0x29a4,	// (0x000424df) bg_set_opt_pane_cp4_vc

0x69e9,	// (0x00046524) list_set_graphic_pane_vc_g1_ParamLimits

0x69e9,	// (0x00046524) list_set_graphic_pane_vc_g1

0x69f5,	// (0x00046530) list_set_graphic_pane_vc_g2_ParamLimits

0x69f5,	// (0x00046530) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0004f573) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0004f573) list_set_graphic_pane_vc_g

0x6a01,	// (0x0004653c) text_primary_small_cp13_vc_ParamLimits

0x6a01,	// (0x0004653c) text_primary_small_cp13_vc

0x6a19,	// (0x00046554) list_set_graphic_pane_vc_ParamLimits

0x6a19,	// (0x00046554) list_set_graphic_pane_vc

0x29a4,	// (0x000424df) input_focus_pane_cp2_vc

0x299a,	// (0x000424d5) setting_code_pane_vc_g1

0x6a2d,	// (0x00046568) setting_code_pane_vc_t1

0x6a3b,	// (0x00046576) set_text_pane_vc_t1_ParamLimits

0x6a3b,	// (0x00046576) set_text_pane_vc_t1

0x29a4,	// (0x000424df) input_focus_pane_cp1_vc

0x6a59,	// (0x00046594) list_set_text_pane_vc

0x299a,	// (0x000424d5) setting_text_pane_vc_g1

0x29a4,	// (0x000424df) bg_set_opt_pane_cp2_vc

0x6a63,	// (0x0004659e) setting_slider_graphic_pane_vc_g1

0x6a6b,	// (0x000465a6) setting_slider_graphic_pane_vc_t1

0x6a79,	// (0x000465b4) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0004f578) setting_slider_graphic_pane_vc_t

0x6a87,	// (0x000465c2) slider_set_pane_cp_vc

0x6a8f,	// (0x000465ca) slider_set_pane_vc_g1

0x6a98,	// (0x000465d3) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0004f57d) slider_set_pane_vc_g

0x3372,	// (0x00042ead) set_opt_bg_pane_g1_copy1

0x337a,	// (0x00042eb5) set_opt_bg_pane_g2_copy1

0x6ac4,	// (0x000465ff) set_opt_bg_pane_g3_copy1

0x338a,	// (0x00042ec5) set_opt_bg_pane_g4_copy1

0x3392,	// (0x00042ecd) set_opt_bg_pane_g5_copy1

0x339a,	// (0x00042ed5) set_opt_bg_pane_g6_copy1

0x6ace,	// (0x00046609) set_opt_bg_pane_g7_copy1

0x6ad8,	// (0x00046613) set_opt_bg_pane_g8_copy1

0x6ae2,	// (0x0004661d) set_opt_bg_pane_g9_copy1

0x29a4,	// (0x000424df) bg_set_opt_pane_cp_vc

0x6aec,	// (0x00046627) setting_slider_pane_vc_t1

0x6a6b,	// (0x000465a6) setting_slider_pane_vc_t2

0x6a79,	// (0x000465b4) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0004f58c) setting_slider_pane_vc_t

0x6a87,	// (0x000465c2) slider_set_pane_vc

0x18ec,	// (0x00041427) volume_set_pane_vc_g1

0x18f5,	// (0x00041430) volume_set_pane_vc_g2

0x18fe,	// (0x00041439) volume_set_pane_vc_g3

0x1907,	// (0x00041442) volume_set_pane_vc_g4

0x1910,	// (0x0004144b) volume_set_pane_vc_g5

0x1919,	// (0x00041454) volume_set_pane_vc_g6

0x1922,	// (0x0004145d) volume_set_pane_vc_g7

0x192b,	// (0x00041466) volume_set_pane_vc_g8

0x1934,	// (0x0004146f) volume_set_pane_vc_g9

0x193d,	// (0x00041478) volume_set_pane_vc_g10

0x0009,

0xfa58,	// (0x0004f593) volume_set_pane_vc_g

0x6afb,	// (0x00046636) volume_set_pane_vc

0x6b03,	// (0x0004663e) button_value_adjust_pane_cp1_vc

0x6b0d,	// (0x00046648) list_highlight_pane_cp2_vc

0x6b16,	// (0x00046651) list_set_pane_vc_ParamLimits

0x6b16,	// (0x00046651) list_set_pane_vc

0x6b80,	// (0x000466bb) main_pane_set_vc_t1_ParamLimits

0x6b80,	// (0x000466bb) main_pane_set_vc_t1

0x6b95,	// (0x000466d0) main_pane_set_vc_t2_ParamLimits

0x6b95,	// (0x000466d0) main_pane_set_vc_t2

0x6ba7,	// (0x000466e2) main_pane_set_vc_t3_ParamLimits

0x6ba7,	// (0x000466e2) main_pane_set_vc_t3

0x6bbb,	// (0x000466f6) main_pane_set_vc_t4_ParamLimits

0x6bbb,	// (0x000466f6) main_pane_set_vc_t4

0x0003,

0xfa6d,	// (0x0004f5a8) main_pane_set_vc_t_ParamLimits

0xfa6d,	// (0x0004f5a8) main_pane_set_vc_t

0x6bcf,	// (0x0004670a) setting_code_pane_vc_ParamLimits

0x6bcf,	// (0x0004670a) setting_code_pane_vc

0x6be0,	// (0x0004671b) setting_slider_graphic_pane_vc

0x6be0,	// (0x0004671b) setting_slider_pane_vc

0x6be0,	// (0x0004671b) setting_text_pane_vc

0x6be0,	// (0x0004671b) setting_volume_pane_vc

0x6bea,	// (0x00046725) scroll_pane_cp121_vc

0x32e5,	// (0x00042e20) set_content_pane_vc

0x6c28,	// (0x00046763) button_value_adjust_pane_g1

0x6c31,	// (0x0004676c) button_value_adjust_pane_g2

0x0001,

0xfac5,	// (0x0004f600) button_value_adjust_pane_g

0x6c3a,	// (0x00046775) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6c3a,	// (0x00046775) form_field_slider_wide_pane_vc_t1

0x6c4e,	// (0x00046789) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6c4e,	// (0x00046789) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaca,	// (0x0004f605) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaca,	// (0x0004f605) form_field_slider_wide_pane_vc_t

0x2d00,	// (0x0004283b) input_focus_pane_cp10_vc_ParamLimits

0x2d00,	// (0x0004283b) input_focus_pane_cp10_vc

0x6c60,	// (0x0004679b) slider_cont_pane_cp1_vc_ParamLimits

0x6c60,	// (0x0004679b) slider_cont_pane_cp1_vc

0x6a8f,	// (0x000465ca) slider_form_pane_g1_cp2

0x6a98,	// (0x000465d3) slider_form_pane_g2_cp2

0x6c79,	// (0x000467b4) form_field_slider_pane_vc_t3

0x6c87,	// (0x000467c2) form_field_slider_pane_vc_t4

0x6c95,	// (0x000467d0) slider_form_pane_vc_ParamLimits

0x6c95,	// (0x000467d0) slider_form_pane_vc

0x6ca2,	// (0x000467dd) form_field_slider_pane_vc_t1_ParamLimits

0x6ca2,	// (0x000467dd) form_field_slider_pane_vc_t1

0x6c4e,	// (0x00046789) form_field_slider_pane_vc_t2_ParamLimits

0x6c4e,	// (0x00046789) form_field_slider_pane_vc_t2

0x0001,

0xfada,	// (0x0004f615) form_field_slider_pane_vc_t_ParamLimits

0xfada,	// (0x0004f615) form_field_slider_pane_vc_t

0x2d00,	// (0x0004283b) input_focus_pane_cp9_vc_ParamLimits

0x2d00,	// (0x0004283b) input_focus_pane_cp9_vc

0x6cbe,	// (0x000467f9) slider_cont_pane_vc_ParamLimits

0x6cbe,	// (0x000467f9) slider_cont_pane_vc

0x6cd0,	// (0x0004680b) list_form_graphic_pane_cp_vc_ParamLimits

0x6cd0,	// (0x0004680b) list_form_graphic_pane_cp_vc

0x4f93,	// (0x00044ace) form_field_popup_wide_pane_vc_g1

0x6ce5,	// (0x00046820) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6ce5,	// (0x00046820) form_field_popup_wide_pane_vc_t1

0x330b,	// (0x00042e46) input_focus_pane_cp8_vc_ParamLimits

0x330b,	// (0x00042e46) input_focus_pane_cp8_vc

0x6cfc,	// (0x00046837) list_form_wide_pane_vc_ParamLimits

0x6cfc,	// (0x00046837) list_form_wide_pane_vc

0x6d08,	// (0x00046843) list_form_graphic_pane_vc_g1

0x6d10,	// (0x0004684b) list_form_graphic_pane_vc_t1_ParamLimits

0x6d10,	// (0x0004684b) list_form_graphic_pane_vc_t1

0x2a84,	// (0x000425bf) list_highlight_pane_cp5_vc_ParamLimits

0x2a84,	// (0x000425bf) list_highlight_pane_cp5_vc

0x6d2c,	// (0x00046867) list_form_graphic_pane_vc_ParamLimits

0x6d2c,	// (0x00046867) list_form_graphic_pane_vc

0x4f93,	// (0x00044ace) form_field_popup_pane_vc_g1

0x6d42,	// (0x0004687d) form_field_popup_pane_vc_t1_ParamLimits

0x6d42,	// (0x0004687d) form_field_popup_pane_vc_t1

0x330b,	// (0x00042e46) input_focus_pane_cp7_vc_ParamLimits

0x330b,	// (0x00042e46) input_focus_pane_cp7_vc

0x6d59,	// (0x00046894) list_form_pane_vc_ParamLimits

0x6d59,	// (0x00046894) list_form_pane_vc

0x6d65,	// (0x000468a0) data_form_pane_vc_t1_ParamLimits

0x6d65,	// (0x000468a0) data_form_pane_vc_t1

0x3372,	// (0x00042ead) input_focus_pane_vc_g1

0x337a,	// (0x00042eb5) input_focus_pane_vc_g2

0x3382,	// (0x00042ebd) input_focus_pane_vc_g3

0x338a,	// (0x00042ec5) input_focus_pane_vc_g4

0x3392,	// (0x00042ecd) input_focus_pane_vc_g5

0x339a,	// (0x00042ed5) input_focus_pane_vc_g6

0x33a2,	// (0x00042edd) input_focus_pane_vc_g7

0x33aa,	// (0x00042ee5) input_focus_pane_vc_g8

0x33b2,	// (0x00042eed) input_focus_pane_vc_g9

0x299a,	// (0x000424d5) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0004f210) input_focus_pane_vc_g

0x4f87,	// (0x00044ac2) data_form_pane_vc_ParamLimits

0x4f87,	// (0x00044ac2) data_form_pane_vc

0x4f93,	// (0x00044ace) form_field_data_pane_vc_g1

0x6d82,	// (0x000468bd) form_field_data_pane_vc_t1_ParamLimits

0x6d82,	// (0x000468bd) form_field_data_pane_vc_t1

0x330b,	// (0x00042e46) input_focus_pane_vc_ParamLimits

0x330b,	// (0x00042e46) input_focus_pane_vc

0x6d9c,	// (0x000468d7) button_value_adjust_pane_cp3_vc

0x6da4,	// (0x000468df) button_value_adjust_pane_cp5_vc

0x6dac,	// (0x000468e7) form_field_data_pane_vc_ParamLimits

0x6dac,	// (0x000468e7) form_field_data_pane_vc

0x6dc7,	// (0x00046902) form_field_data_pane_vc_cp2

0x6dcf,	// (0x0004690a) form_field_data_wide_pane_vc_ParamLimits

0x6dcf,	// (0x0004690a) form_field_data_wide_pane_vc

0x6de9,	// (0x00046924) form_field_data_wide_pane_vc_cp2

0x6df1,	// (0x0004692c) form_field_popup_pane_vc_ParamLimits

0x6df1,	// (0x0004692c) form_field_popup_pane_vc

0x6e0c,	// (0x00046947) form_field_popup_wide_pane_vc_ParamLimits

0x6e0c,	// (0x00046947) form_field_popup_wide_pane_vc

0x6e26,	// (0x00046961) form_field_slider_pane_vc_ParamLimits

0x6e26,	// (0x00046961) form_field_slider_pane_vc

0x6e39,	// (0x00046974) form_field_slider_wide_pane_vc_ParamLimits

0x6e39,	// (0x00046974) form_field_slider_wide_pane_vc

0xdbde,	// (0x0004d719) grid_touch_1_pane_ParamLimits

0xdbde,	// (0x0004d719) grid_touch_1_pane

0xdbf2,	// (0x0004d72d) grid_touch_2_pane_ParamLimits

0xdbf2,	// (0x0004d72d) grid_touch_2_pane

0x6f10,	// (0x00046a4b) touch_pane_g1_ParamLimits

0x6f10,	// (0x00046a4b) touch_pane_g1

0x6e72,	// (0x000469ad) cell_app_pane_cp_wide_ParamLimits

0x6e72,	// (0x000469ad) cell_app_pane_cp_wide

0x6e83,	// (0x000469be) grid_popup_fast_wide_pane_ParamLimits

0x6e83,	// (0x000469be) grid_popup_fast_wide_pane

0x6e97,	// (0x000469d2) scroll_pane_cp19_ParamLimits

0x6e97,	// (0x000469d2) scroll_pane_cp19

0x29a4,	// (0x000424df) bg_popup_window_pane_cp20

0x6eab,	// (0x000469e6) listscroll_popup_fast_wide_pane

0x34e1,	// (0x0004301c) grid_indicator_nsta_pane

0x6eb3,	// (0x000469ee) clock_nsta_pane_g1

0x6ebc,	// (0x000469f7) clock_nsta_pane_t1

0xdc1e,	// (0x0004d759) cell_indicator_nsta_pane_ParamLimits

0xdc1e,	// (0x0004d759) cell_indicator_nsta_pane

0x6f10,	// (0x00046a4b) cell_indicator_nsta_pane_g1

0xdc3b,	// (0x0004d776) cell_indicator_nsta_pane_g2

0x0001,

0xfae4,	// (0x0004f61f) cell_indicator_nsta_pane_g

0x6f33,	// (0x00046a6e) clock_nsta_pane_cp

0x6f3b,	// (0x00046a76) indicator_nsta_pane_cp

0x6f43,	// (0x00046a7e) nsta_clock_indic_pane_g1

0x2b50,	// (0x0004268b) grid_indicator_pane

0x38b3,	// (0x000433ee) scroll_pane_cp29

0x148d,	// (0x00040fc8) indicator_nsta_pane_cp2_ParamLimits

0x148d,	// (0x00040fc8) indicator_nsta_pane_cp2

0x2a84,	// (0x000425bf) main_apps_wheel_pane

0x5152,	// (0x00044c8d) form_midp_field_text_pane_ParamLimits

0x52a1,	// (0x00044ddc) scroll_bar_cp050_ParamLimits

0x6f7b,	// (0x00046ab6) cell_indicator_pane_ParamLimits

0x6f7b,	// (0x00046ab6) cell_indicator_pane

0x6f93,	// (0x00046ace) cell_indicator_pane_g1

0xdc51,	// (0x0004d78c) grid_wheel_folder_pane_ParamLimits

0xdc51,	// (0x0004d78c) grid_wheel_folder_pane

0xdc5f,	// (0x0004d79a) list_wheel_apps_pane_ParamLimits

0xdc5f,	// (0x0004d79a) list_wheel_apps_pane

0xdc6d,	// (0x0004d7a8) main_apps_wheel_pane_g1_ParamLimits

0xdc6d,	// (0x0004d7a8) main_apps_wheel_pane_g1

0xdc7d,	// (0x0004d7b8) main_apps_wheel_pane_g2_ParamLimits

0xdc7d,	// (0x0004d7b8) main_apps_wheel_pane_g2

0x0001,

0xfaf3,	// (0x0004f62e) main_apps_wheel_pane_g_ParamLimits

0xfaf3,	// (0x0004f62e) main_apps_wheel_pane_g

0xdc8d,	// (0x0004d7c8) main_apps_wheel_pane_t1_ParamLimits

0xdc8d,	// (0x0004d7c8) main_apps_wheel_pane_t1

0xdca5,	// (0x0004d7e0) list_wheel_apps_pane_g1

0xdcad,	// (0x0004d7e8) list_wheel_apps_pane_g2

0xdcb5,	// (0x0004d7f0) list_wheel_apps_pane_g3

0xdcbd,	// (0x0004d7f8) list_wheel_apps_pane_g4

0xdcc5,	// (0x0004d800) list_wheel_apps_pane_g5

0x0004,

0xfaf8,	// (0x0004f633) list_wheel_apps_pane_g

0x3de5,	// (0x00043920) navi_icon_text_pane

0xd245,	// (0x0004cd80) aid_fill_nsta

0xdce2,	// (0x0004d81d) navi_icon_text_pane_g1

0xdcee,	// (0x0004d829) navi_icon_text_pane_t1

0xca11,	// (0x0004c54c) list_set_graphic_pane_t1_ParamLimits

0xca11,	// (0x0004c54c) list_set_graphic_pane_t1

0x59c1,	// (0x000454fc) popup_midp_note_alarm_window_t6_ParamLimits

0x59c1,	// (0x000454fc) popup_midp_note_alarm_window_t6

0x59d3,	// (0x0004550e) popup_midp_note_alarm_window_t7_ParamLimits

0x59d3,	// (0x0004550e) popup_midp_note_alarm_window_t7

0x59e5,	// (0x00045520) popup_midp_note_alarm_window_t8_ParamLimits

0x59e5,	// (0x00045520) popup_midp_note_alarm_window_t8

0x59f7,	// (0x00045532) popup_midp_note_alarm_window_t9_ParamLimits

0x59f7,	// (0x00045532) popup_midp_note_alarm_window_t9

0x5a09,	// (0x00045544) popup_midp_note_alarm_window_t10_ParamLimits

0x5a09,	// (0x00045544) popup_midp_note_alarm_window_t10

0x5a1b,	// (0x00045556) popup_midp_note_alarm_window_t11_ParamLimits

0x5a1b,	// (0x00045556) popup_midp_note_alarm_window_t11

0x5a2d,	// (0x00045568) scroll_pane_cp17_ParamLimits

0x5a2d,	// (0x00045568) scroll_pane_cp17

0x18ec,	// (0x00041427) volume_small_pane_cp_g1

0x1c59,	// (0x00041794) volume_small_pane_cp_g2

0x1c62,	// (0x0004179d) volume_small_pane_cp_g3

0x1c6b,	// (0x000417a6) volume_small_pane_cp_g4

0x1c74,	// (0x000417af) volume_small_pane_cp_g5

0x1c7d,	// (0x000417b8) volume_small_pane_cp_g6

0x1c86,	// (0x000417c1) volume_small_pane_cp_g7

0x1c8f,	// (0x000417ca) volume_small_pane_cp_g8

0x1c98,	// (0x000417d3) volume_small_pane_cp_g9

0x1ca1,	// (0x000417dc) volume_small_pane_cp_g10

0x4046,	// (0x00043b81) midp_ticker_pane_g1_ParamLimits

0x4052,	// (0x00043b8d) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0004f2d8) midp_ticker_pane_g_ParamLimits

0xcad1,	// (0x0004c60c) midp_ticker_pane_t1_ParamLimits

0xd265,	// (0x0004cda0) aid_fill_nsta_2

0x528d,	// (0x00044dc8) list_form2_midp_pane

0x63ea,	// (0x00045f25) midp_editing_number_pane_ParamLimits

0x63f9,	// (0x00045f34) midp_ticker_pane_ParamLimits

0x708c,	// (0x00046bc7) form2_midp_field_pane

0x70b0,	// (0x00046beb) scroll_pane_cp51

0x70d0,	// (0x00046c0b) form2_midp_button_pane_ParamLimits

0x70d0,	// (0x00046c0b) form2_midp_button_pane

0x70e2,	// (0x00046c1d) form2_midp_content_pane_ParamLimits

0x70e2,	// (0x00046c1d) form2_midp_content_pane

0x70fc,	// (0x00046c37) form2_midp_field_choice_group_pane

0x7104,	// (0x00046c3f) form2_midp_field_pane_g1

0x710c,	// (0x00046c47) form2_midp_field_pane_g2

0x7114,	// (0x00046c4f) form2_midp_field_pane_g3

0x711c,	// (0x00046c57) form2_midp_field_pane_g4

0x0003,

0xfb1d,	// (0x0004f658) form2_midp_field_pane_g

0x7124,	// (0x00046c5f) form2_midp_gauge_slider_pane

0x712c,	// (0x00046c67) form2_midp_gauge_wait_pane

0x7134,	// (0x00046c6f) form2_midp_image_pane_ParamLimits

0x7134,	// (0x00046c6f) form2_midp_image_pane

0x714f,	// (0x00046c8a) form2_midp_label_pane_ParamLimits

0x714f,	// (0x00046c8a) form2_midp_label_pane

0xdd1c,	// (0x0004d857) form2_midp_label_pane_cp_ParamLimits

0xdd1c,	// (0x0004d857) form2_midp_label_pane_cp

0x718f,	// (0x00046cca) form2_midp_string_pane_ParamLimits

0x718f,	// (0x00046cca) form2_midp_string_pane

0xb7bc,	// (0x0004b2f7) form2_midp_text_pane_ParamLimits

0xb7bc,	// (0x0004b2f7) form2_midp_text_pane

0x71a1,	// (0x00046cdc) form2_midp_time_pane

0x71b1,	// (0x00046cec) input_focus_pane_cp51_ParamLimits

0x71b1,	// (0x00046cec) input_focus_pane_cp51

0x71c9,	// (0x00046d04) form2_midp_label_pane_t1_ParamLimits

0x71c9,	// (0x00046d04) form2_midp_label_pane_t1

0xb7df,	// (0x0004b31a) form2_mdip_text_pane_t1_ParamLimits

0xb7df,	// (0x0004b31a) form2_mdip_text_pane_t1

0x09e8,	// (0x00040523) form2_midp_time_pane_t1

0x7217,	// (0x00046d52) form2_midp_gauge_slider_pane_t1

0xdd3d,	// (0x0004d878) form2_midp_gauge_slider_pane_t2

0xdd4f,	// (0x0004d88a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb26,	// (0x0004f661) form2_midp_gauge_slider_pane_t

0x724d,	// (0x00046d88) form2_midp_slider_pane

0x7259,	// (0x00046d94) form2_midp_gauge_wait_pane_t1

0x7267,	// (0x00046da2) form2_midp_wait_pane_ParamLimits

0x7267,	// (0x00046da2) form2_midp_wait_pane

0xd67e,	// (0x0004d1b9) list_single_2graphic_pane_cp4_ParamLimits

0xd67e,	// (0x0004d1b9) list_single_2graphic_pane_cp4

0xdd61,	// (0x0004d89c) list_single_midp_graphic_pane_cp_ParamLimits

0xdd61,	// (0x0004d89c) list_single_midp_graphic_pane_cp

0x29a4,	// (0x000424df) list_highlight_pane_cp20

0x72b6,	// (0x00046df1) list_single_2graphic_pane_g1_cp4

0x68cb,	// (0x00046406) list_single_2graphic_pane_g2_cp4

0x72be,	// (0x00046df9) list_single_2graphic_pane_t1_cp4

0x2a84,	// (0x000425bf) list_highlight_pane_cp21

0x72cd,	// (0x00046e08) list_single_midp_graphic_pane_g4_cp

0x72dc,	// (0x00046e17) list_single_midp_graphic_pane_t1_cp

0xdd82,	// (0x0004d8bd) form2_mdip_string_pane_t1_ParamLimits

0xdd82,	// (0x0004d8bd) form2_mdip_string_pane_t1

0x29a4,	// (0x000424df) bg_wml_button_pane_cp2

0x299a,	// (0x000424d5) form2_midp_image_pane_g1

0x117a,	// (0x00040cb5) list_double_large_graphic_pane_g5_ParamLimits

0x117a,	// (0x00040cb5) list_double_large_graphic_pane_g5

0xca29,	// (0x0004c564) midp_form_pane_ParamLimits

0x2a84,	// (0x000425bf) main_apps_wheel_pane_ParamLimits

0xcf5d,	// (0x0004ca98) popup_preview_window_ParamLimits

0xcf5d,	// (0x0004ca98) popup_preview_window

0x48b7,	// (0x000443f2) popup_touch_info_window_ParamLimits

0x48b7,	// (0x000443f2) popup_touch_info_window

0x48d9,	// (0x00044414) popup_touch_menu_window_ParamLimits

0x48d9,	// (0x00044414) popup_touch_menu_window

0x2990,	// (0x000424cb) bg_popup_sub_pane_cp6

0x7396,	// (0x00046ed1) list_touch_menu_pane

0x739e,	// (0x00046ed9) list_single_touch_menu_pane_ParamLimits

0x739e,	// (0x00046ed9) list_single_touch_menu_pane

0x73b9,	// (0x00046ef4) list_single_touch_menu_pane_t1

0x2a84,	// (0x000425bf) bg_popup_sub_pane_cp7_ParamLimits

0x2a84,	// (0x000425bf) bg_popup_sub_pane_cp7

0x73c7,	// (0x00046f02) heading_sub_pane

0x73cf,	// (0x00046f0a) list_touch_info_pane_ParamLimits

0x73cf,	// (0x00046f0a) list_touch_info_pane

0x73de,	// (0x00046f19) list_single_touch_info_pane_ParamLimits

0x73de,	// (0x00046f19) list_single_touch_info_pane

0x73f0,	// (0x00046f2b) list_single_touch_info_pane_t1

0x73fe,	// (0x00046f39) list_single_touch_info_pane_t2

0x0001,

0xfb34,	// (0x0004f66f) list_single_touch_info_pane_t

0x3f69,	// (0x00043aa4) bg_popup_heading_pane_cp

0x740c,	// (0x00046f47) heading_sub_pane_t1

0x4f21,	// (0x00044a5c) bg_popup_preview_window_pane_cp_ParamLimits

0x4f21,	// (0x00044a5c) bg_popup_preview_window_pane_cp

0x73c7,	// (0x00046f02) heading_preview_pane

0x73cf,	// (0x00046f0a) list_preview_pane_ParamLimits

0x73cf,	// (0x00046f0a) list_preview_pane

0x741a,	// (0x00046f55) popup_preview_window_g1

0x73de,	// (0x00046f19) list_single_preview_pane_ParamLimits

0x73de,	// (0x00046f19) list_single_preview_pane

0x7422,	// (0x00046f5d) list_single_preview_pane_g1

0x742a,	// (0x00046f65) list_single_preview_pane_t1

0x73f0,	// (0x00046f2b) list_single_preview_pane_t2

0x0001,

0xfb39,	// (0x0004f674) list_single_preview_pane_t

0x7438,	// (0x00046f73) bg_popup_heading_pane_cp2_ParamLimits

0x7438,	// (0x00046f73) bg_popup_heading_pane_cp2

0x744e,	// (0x00046f89) heading_preview_pane_g1

0x7456,	// (0x00046f91) heading_preview_pane_t1_ParamLimits

0x7456,	// (0x00046f91) heading_preview_pane_t1

0x2b73,	// (0x000426ae) soft_indicator_pane_t1_ParamLimits

0x327e,	// (0x00042db9) scroll_pane_ParamLimits

0x37af,	// (0x000432ea) scroll_sc2_left_pane

0x37b8,	// (0x000432f3) scroll_sc2_right_pane

0x37d7,	// (0x00043312) scroll_bg_pane_g1_ParamLimits

0x37ec,	// (0x00043327) scroll_bg_pane_g2_ParamLimits

0x3804,	// (0x0004333f) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0004f267) scroll_bg_pane_g_ParamLimits

0x37d7,	// (0x00043312) scroll_handle_pane_g1_ParamLimits

0x3826,	// (0x00043361) scroll_handle_pane_g2_ParamLimits

0x3804,	// (0x0004333f) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0004f26e) scroll_handle_pane_g_ParamLimits

0x431b,	// (0x00043e56) popup_choice_list_window_ParamLimits

0x431b,	// (0x00043e56) popup_choice_list_window

0x4d79,	// (0x000448b4) choice_list_pane

0x4dfb,	// (0x00044936) cell_toolbar_pane_t1

0x4e23,	// (0x0004495e) toolbar_button_pane_ParamLimits

0x5efd,	// (0x00045a38) ai_gene_pane_1_t2_ParamLimits

0x5efd,	// (0x00045a38) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0004f486) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0004f486) ai_gene_pane_1_t

0x7473,	// (0x00046fae) scroll_sc2_left_pane_g1

0x7473,	// (0x00046fae) scroll_sc2_right_pane_g1

0x42f3,	// (0x00043e2e) bg_popup_sub_pane_cp10

0x747d,	// (0x00046fb8) list_choice_list_pane

0x7494,	// (0x00046fcf) list_single_choice_list_pane_ParamLimits

0x7494,	// (0x00046fcf) list_single_choice_list_pane

0x74a8,	// (0x00046fe3) list_single_choice_list_pane_g1

0x74b0,	// (0x00046feb) list_single_choice_list_pane_t1_ParamLimits

0x74b0,	// (0x00046feb) list_single_choice_list_pane_t1

0x74c5,	// (0x00047000) choice_list_pane_g1

0x74cd,	// (0x00047008) choice_list_pane_t1

0x2990,	// (0x000424cb) input_focus_pane_cp11

0x3689,	// (0x000431c4) title_pane_stacon_g2_ParamLimits

0x3689,	// (0x000431c4) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0004f24d) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0004f24d) title_pane_stacon_g

0x3f69,	// (0x00043aa4) cursor_press_pane

0xcbde,	// (0x0004c719) popup_fep_hwr_window_ParamLimits

0xcbde,	// (0x0004c719) popup_fep_hwr_window

0x445b,	// (0x00043f96) popup_fep_vkb_window_ParamLimits

0x445b,	// (0x00043f96) popup_fep_vkb_window

0x74db,	// (0x00047016) cursor_press_pane_g1

0x0002,

0xfb62,	// (0x0004f69d) fep_vkb_side_pane_g_ParamLimits

0x1cd5,	// (0x00041810) fep_hwr_candidate_pane_ParamLimits

0x1cd5,	// (0x00041810) fep_hwr_candidate_pane

0x1cff,	// (0x0004183a) fep_hwr_side_pane_ParamLimits

0x1cff,	// (0x0004183a) fep_hwr_side_pane

0x1d21,	// (0x0004185c) fep_hwr_top_pane_ParamLimits

0x1d21,	// (0x0004185c) fep_hwr_top_pane

0x1d39,	// (0x00041874) fep_hwr_write_pane_ParamLimits

0x1d39,	// (0x00041874) fep_hwr_write_pane

0xfb62,	// (0x0004f69d) fep_vkb_side_pane_g

0x74e3,	// (0x0004701e) fep_hwr_top_pane_g1

0x74f5,	// (0x00047030) fep_hwr_top_pane_g2

0x1d65,	// (0x000418a0) fep_hwr_top_pane_g3

0x0002,

0xfb3e,	// (0x0004f679) fep_hwr_top_pane_g

0x1d7a,	// (0x000418b5) fep_hwr_top_text_pane

0x397b,	// (0x000434b6) fep_hwr_top_text_pane_g1

0x7539,	// (0x00047074) fep_hwr_top_text_pane_t1

0x1e84,	// (0x000419bf) fep_hwr_candidate_pane_g1

0x7784,	// (0x000472bf) fep_vkb_keypad_pane_g3_ParamLimits

0x7784,	// (0x000472bf) fep_vkb_keypad_pane_g3

0x77b0,	// (0x000472eb) fep_vkb_keypad_pane_g4_ParamLimits

0x77b0,	// (0x000472eb) fep_vkb_keypad_pane_g4

0x7827,	// (0x00047362) fep_vkb_bottom_pane_g2_ParamLimits

0x7827,	// (0x00047362) fep_vkb_bottom_pane_g2

0x0001,

0xfb69,	// (0x0004f6a4) fep_vkb_bottom_pane_g_ParamLimits

0xfb69,	// (0x0004f6a4) fep_vkb_bottom_pane_g

0x7473,	// (0x00046fae) cell_vkb_side_pane_g2

0x0001,

0xfb73,	// (0x0004f6ae) cell_vkb_side_pane_g

0x78b2,	// (0x000473ed) cell_vkb_side_pane_t1

0x78c0,	// (0x000473fb) cell_vkb_side_pane_t1_copy1

0x7473,	// (0x00046fae) bg_fep_vkb_candidate_pane_g2

0x7a04,	// (0x0004753f) cell_vkb_candidate_pane_ParamLimits

0x7547,	// (0x00047082) aid_size_cell_vkb_ParamLimits

0x7547,	// (0x00047082) aid_size_cell_vkb

0x7a04,	// (0x0004753f) cell_vkb_candidate_pane

0x1e9e,	// (0x000419d9) bg_popup_fep_shadow_pane_g1

0xde46,	// (0x0004d981) fep_vkb_bottom_pane_ParamLimits

0xde46,	// (0x0004d981) fep_vkb_bottom_pane

0x7616,	// (0x00047151) fep_vkb_candidate_pane_ParamLimits

0x7616,	// (0x00047151) fep_vkb_candidate_pane

0xde72,	// (0x0004d9ad) fep_vkb_keypad_pane_ParamLimits

0xde72,	// (0x0004d9ad) fep_vkb_keypad_pane

0xde99,	// (0x0004d9d4) fep_vkb_side_pane_ParamLimits

0xde99,	// (0x0004d9d4) fep_vkb_side_pane

0xded5,	// (0x0004da10) fep_vkb_top_pane_ParamLimits

0xded5,	// (0x0004da10) fep_vkb_top_pane

0x76dd,	// (0x00047218) fep_vkb_top_pane_g1_ParamLimits

0x76dd,	// (0x00047218) fep_vkb_top_pane_g1

0x76ec,	// (0x00047227) fep_vkb_top_pane_g2_ParamLimits

0x76ec,	// (0x00047227) fep_vkb_top_pane_g2

0x76fb,	// (0x00047236) fep_vkb_top_pane_g3_ParamLimits

0x76fb,	// (0x00047236) fep_vkb_top_pane_g3

0x0003,

0xfb59,	// (0x0004f694) fep_vkb_top_pane_g_ParamLimits

0xfb59,	// (0x0004f694) fep_vkb_top_pane_g

0x7719,	// (0x00047254) fep_vkb_top_text_pane_ParamLimits

0x7719,	// (0x00047254) fep_vkb_top_text_pane

0xdf11,	// (0x0004da4c) fep_vkb_side_pane_g1_ParamLimits

0xdf11,	// (0x0004da4c) fep_vkb_side_pane_g1

0x7773,	// (0x000472ae) grid_vkb_side_pane_ParamLimits

0x7773,	// (0x000472ae) grid_vkb_side_pane

0x1ea6,	// (0x000419e1) bg_popup_fep_shadow_pane_g2

0x1eaf,	// (0x000419ea) bg_popup_fep_shadow_pane_g3

0x1eb7,	// (0x000419f2) bg_popup_fep_shadow_pane_g4

0x1ec0,	// (0x000419fb) bg_popup_fep_shadow_pane_g5

0x1eca,	// (0x00041a05) bg_popup_fep_shadow_pane_g6

0x1ed2,	// (0x00041a0d) bg_popup_fep_shadow_pane_g7

0x3392,	// (0x00042ecd) bg_popup_fep_shadow_pane_g8

0x77d2,	// (0x0004730d) grid_vkb_keypad_number_pane_ParamLimits

0x77d2,	// (0x0004730d) grid_vkb_keypad_number_pane

0x77e6,	// (0x00047321) grid_vkb_keypad_pane_ParamLimits

0x77e6,	// (0x00047321) grid_vkb_keypad_pane

0x780c,	// (0x00047347) fep_vkb_bottom_pane_g1_ParamLimits

0x780c,	// (0x00047347) fep_vkb_bottom_pane_g1

0x7835,	// (0x00047370) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7835,	// (0x00047370) grid_vkb_keypad_bottom_left_pane

0x784a,	// (0x00047385) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x784a,	// (0x00047385) grid_vkb_keypad_bottom_right_pane

0x785f,	// (0x0004739a) fep_vkb_top_text_pane_g1

0xdf58,	// (0x0004da93) fep_vkb_top_text_pane_t1

0xdf6a,	// (0x0004daa5) cell_vkb_side_pane_ParamLimits

0xdf6a,	// (0x0004daa5) cell_vkb_side_pane

0x7473,	// (0x00046fae) cell_vkb_side_pane_g1

0x78ce,	// (0x00047409) cell_vkb_keypad_pane_ParamLimits

0x78ce,	// (0x00047409) cell_vkb_keypad_pane

0x795b,	// (0x00047496) cell_vkb_keypad_pane_g1

0x0008,

0xfb86,	// (0x0004f6c1) bg_popup_fep_shadow_pane_g

0x7473,	// (0x00046fae) cell_hwr_side_pane_g1

0x7473,	// (0x00046fae) cell_hwr_side_pane_g2

0x7965,	// (0x000474a0) cell_vkb_keypad_pane_t1

0xdf80,	// (0x0004dabb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf80,	// (0x0004dabb) cell_vkb_keypad_bottom_left_pane

0xdf95,	// (0x0004dad0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf95,	// (0x0004dad0) cell_vkb_keypad_bottom_right_pane

0x7473,	// (0x00046fae) cell_vkb_keypad_bottom_left_pane_g1

0x7473,	// (0x00046fae) cell_vkb_keypad_bottom_right_pane_g1

0x79c9,	// (0x00047504) cell_vkb_keypad_number_pane_ParamLimits

0x79c9,	// (0x00047504) cell_vkb_keypad_number_pane

0x79e8,	// (0x00047523) cell_vkb_keypad_number_pane_g1

0x79f2,	// (0x0004752d) cell_vkb_keypad_number_pane_g2

0x79fb,	// (0x00047536) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb78,	// (0x0004f6b3) cell_vkb_keypad_number_pane_g

0x7965,	// (0x000474a0) cell_vkb_keypad_number_pane_t1

0x7a25,	// (0x00047560) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x0004f6ae) cell_hwr_side_pane_g

0x7a3e,	// (0x00047579) cell_hwr_side_pane_t1

0x1ee4,	// (0x00041a1f) cell_hwr_side_pane_t1_copy1

0x770b,	// (0x00047246) cell_hwr_candidate_pane_g1

0x1ef2,	// (0x00041a2d) cell_hwr_candidate_pane_t1

0x7473,	// (0x00046fae) cell_vkb_candidate_pane_g2

0x7ac4,	// (0x000475ff) cell_vkb_candidate_pane_t1

0x751f,	// (0x0004705a) bg_popup_fep_shadow_pane_ParamLimits

0x751f,	// (0x0004705a) bg_popup_fep_shadow_pane

0xde0c,	// (0x0004d947) bg_fep_hwr_top_pane_g4

0x7507,	// (0x00047042) bg_hwr_side_pane_g1_ParamLimits

0x7507,	// (0x00047042) bg_hwr_side_pane_g1

0xc195,	// (0x0004bcd0) cell_hwr_side_pane_ParamLimits

0xc195,	// (0x0004bcd0) cell_hwr_side_pane

0x1df5,	// (0x00041930) fep_hwr_write_pane_g1_ParamLimits

0x1df5,	// (0x00041930) fep_hwr_write_pane_g1

0x1e02,	// (0x0004193d) fep_hwr_write_pane_g2_ParamLimits

0x1e02,	// (0x0004193d) fep_hwr_write_pane_g2

0x1e0f,	// (0x0004194a) fep_hwr_write_pane_g3_ParamLimits

0x1e0f,	// (0x0004194a) fep_hwr_write_pane_g3

0xc1b5,	// (0x0004bcf0) fep_hwr_write_pane_g4_ParamLimits

0xc1b5,	// (0x0004bcf0) fep_hwr_write_pane_g4

0x0005,

0xfb45,	// (0x0004f680) fep_hwr_write_pane_g_ParamLimits

0xfb45,	// (0x0004f680) fep_hwr_write_pane_g

0xde0c,	// (0x0004d947) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xde0c,	// (0x0004d947) bg_fep_hwr_candidate_pane_g2

0x1e32,	// (0x0004196d) cell_hwr_candidate_pane_ParamLimits

0x1e32,	// (0x0004196d) cell_hwr_candidate_pane

0x1e84,	// (0x000419bf) fep_hwr_candidate_pane_g1_ParamLimits

0x7575,	// (0x000470b0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7575,	// (0x000470b0) bg_popup_fep_shadow_pane_cp2

0x770b,	// (0x00047246) fep_vkb_top_pane_g4_ParamLimits

0x770b,	// (0x00047246) fep_vkb_top_pane_g4

0x7751,	// (0x0004728c) fep_vkb_side_pane_g2_ParamLimits

0x7751,	// (0x0004728c) fep_vkb_side_pane_g2

0xb4b7,	// (0x0004aff2) list_setting_pane_t4_ParamLimits

0xb4b7,	// (0x0004aff2) list_setting_pane_t4

0xb553,	// (0x0004b08e) list_setting_number_pane_t5_ParamLimits

0xb553,	// (0x0004b08e) list_setting_number_pane_t5

0x39ad,	// (0x000434e8) list_double_heading_pane_cp2_ParamLimits

0x39ad,	// (0x000434e8) list_double_heading_pane_cp2

0x3325,	// (0x00042e60) list_double_heading_pane_g1_cp2_ParamLimits

0x3325,	// (0x00042e60) list_double_heading_pane_g1_cp2

0x3331,	// (0x00042e6c) list_double_heading_pane_g2_cp2_ParamLimits

0x3331,	// (0x00042e6c) list_double_heading_pane_g2_cp2

0x7ad2,	// (0x0004760d) list_double_heading_pane_t1_cp2_ParamLimits

0x7ad2,	// (0x0004760d) list_double_heading_pane_t1_cp2

0x7ae8,	// (0x00047623) list_double_heading_pane_t2_cp2_ParamLimits

0x7ae8,	// (0x00047623) list_double_heading_pane_t2_cp2

0x2978,	// (0x000424b3) aid_value_unit2

0x0f53,	// (0x00040a8e) popup_preview_fixed_window

0x2d0e,	// (0x00042849) bg_popup_preview_window_pane_cp02

0x7afa,	// (0x00047635) list_preview_fixed_pane

0x7b40,	// (0x0004767b) list_empty_pane_fp_ParamLimits

0x7b40,	// (0x0004767b) list_empty_pane_fp

0x7b40,	// (0x0004767b) list_single_cale_day_pane_fp_ParamLimits

0x7b40,	// (0x0004767b) list_single_cale_day_pane_fp

0x7b40,	// (0x0004767b) list_single_graphic_heading_pane_fp_ParamLimits

0x7b40,	// (0x0004767b) list_single_graphic_heading_pane_fp

0x7b40,	// (0x0004767b) list_single_graphic_pane_fp_ParamLimits

0x7b40,	// (0x0004767b) list_single_graphic_pane_fp

0x7b40,	// (0x0004767b) list_single_heading_pane_fp_ParamLimits

0x7b40,	// (0x0004767b) list_single_heading_pane_fp

0x7b40,	// (0x0004767b) list_single_pane_fp_ParamLimits

0x7b40,	// (0x0004767b) list_single_pane_fp

0x7b59,	// (0x00047694) list_single_pane_fp_g1_ParamLimits

0x7b59,	// (0x00047694) list_single_pane_fp_g1

0x116e,	// (0x00040ca9) list_single_pane_fp_g2_ParamLimits

0x116e,	// (0x00040ca9) list_single_pane_fp_g2

0x1f10,	// (0x00041a4b) list_single_pane_fp_g3_ParamLimits

0x1f10,	// (0x00041a4b) list_single_pane_fp_g3

0x7b65,	// (0x000476a0) list_single_pane_fp_g4_ParamLimits

0x7b65,	// (0x000476a0) list_single_pane_fp_g4

0x0003,

0xfba7,	// (0x0004f6e2) list_single_pane_fp_g_ParamLimits

0xfba7,	// (0x0004f6e2) list_single_pane_fp_g

0x09fb,	// (0x00040536) list_single_pane_fp_t1_ParamLimits

0x09fb,	// (0x00040536) list_single_pane_fp_t1

0x0a12,	// (0x0004054d) list_single_graphic_pane_fp_g1_ParamLimits

0x0a12,	// (0x0004054d) list_single_graphic_pane_fp_g1

0x7b59,	// (0x00047694) list_single_graphic_pane_fp_g2_ParamLimits

0x7b59,	// (0x00047694) list_single_graphic_pane_fp_g2

0x116e,	// (0x00040ca9) list_single_graphic_pane_fp_g3_ParamLimits

0x116e,	// (0x00040ca9) list_single_graphic_pane_fp_g3

0x1f10,	// (0x00041a4b) list_single_graphic_pane_fp_g4_ParamLimits

0x1f10,	// (0x00041a4b) list_single_graphic_pane_fp_g4

0x7b65,	// (0x000476a0) list_single_graphic_pane_fp_g5_ParamLimits

0x7b65,	// (0x000476a0) list_single_graphic_pane_fp_g5

0x0004,

0xfbb0,	// (0x0004f6eb) list_single_graphic_pane_fp_g_ParamLimits

0xfbb0,	// (0x0004f6eb) list_single_graphic_pane_fp_g

0x0a1e,	// (0x00040559) list_single_graphic_pane_fp_t1_ParamLimits

0x0a1e,	// (0x00040559) list_single_graphic_pane_fp_t1

0x0a12,	// (0x0004054d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0a12,	// (0x0004054d) list_single_graphic_heading_pane_fp_g1

0x7b59,	// (0x00047694) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b59,	// (0x00047694) list_single_graphic_heading_pane_fp_g2

0x116e,	// (0x00040ca9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x116e,	// (0x00040ca9) list_single_graphic_heading_pane_fp_g3

0x1f10,	// (0x00041a4b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1f10,	// (0x00041a4b) list_single_graphic_heading_pane_fp_g4

0x7b65,	// (0x000476a0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b65,	// (0x000476a0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x0004f6eb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0004f6eb) list_single_graphic_heading_pane_fp_g

0x0a34,	// (0x0004056f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0a34,	// (0x0004056f) list_single_graphic_heading_pane_fp_t1

0x0a4a,	// (0x00040585) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0a4a,	// (0x00040585) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbbb,	// (0x0004f6f6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbbb,	// (0x0004f6f6) list_single_graphic_heading_pane_fp_t

0x0a5c,	// (0x00040597) list_single_cale_day_pane_fp_g1_ParamLimits

0x0a5c,	// (0x00040597) list_single_cale_day_pane_fp_g1

0x7b71,	// (0x000476ac) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b71,	// (0x000476ac) list_single_cale_day_pane_fp_g2

0x1f24,	// (0x00041a5f) list_single_cale_day_pane_fp_g3_ParamLimits

0x1f24,	// (0x00041a5f) list_single_cale_day_pane_fp_g3

0x1f4c,	// (0x00041a87) list_single_cale_day_pane_fp_g4_ParamLimits

0x1f4c,	// (0x00041a87) list_single_cale_day_pane_fp_g4

0x1f70,	// (0x00041aab) list_single_cale_day_pane_fp_g5_ParamLimits

0x1f70,	// (0x00041aab) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc0,	// (0x0004f6fb) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc0,	// (0x0004f6fb) list_single_cale_day_pane_fp_g

0x0a94,	// (0x000405cf) list_single_cale_day_pane_fp_t1_ParamLimits

0x0a94,	// (0x000405cf) list_single_cale_day_pane_fp_t1

0x0aba,	// (0x000405f5) list_single_cale_day_pane_fp_t2_ParamLimits

0x0aba,	// (0x000405f5) list_single_cale_day_pane_fp_t2

0x0ad3,	// (0x0004060e) list_single_cale_day_pane_fp_t3_ParamLimits

0x0ad3,	// (0x0004060e) list_single_cale_day_pane_fp_t3

0x0002,

0xfbcb,	// (0x0004f706) list_single_cale_day_pane_fp_t_ParamLimits

0xfbcb,	// (0x0004f706) list_single_cale_day_pane_fp_t

0x7b59,	// (0x00047694) list_empty_pane_fp_g1_ParamLimits

0x7b59,	// (0x00047694) list_empty_pane_fp_g1

0x0aec,	// (0x00040627) list_empty_pane_fp_t1

0x0afa,	// (0x00040635) list_empty_pane_fp_t2

0x0001,

0xfbd2,	// (0x0004f70d) list_empty_pane_fp_t

0x7b59,	// (0x00047694) list_single_heading_pane_fp_g1_ParamLimits

0x7b59,	// (0x00047694) list_single_heading_pane_fp_g1

0x116e,	// (0x00040ca9) list_single_heading_pane_fp_g2_ParamLimits

0x116e,	// (0x00040ca9) list_single_heading_pane_fp_g2

0x1f10,	// (0x00041a4b) list_single_heading_pane_fp_g3_ParamLimits

0x1f10,	// (0x00041a4b) list_single_heading_pane_fp_g3

0x0002,

0xfbd7,	// (0x0004f712) list_single_heading_pane_fp_g_ParamLimits

0xfbd7,	// (0x0004f712) list_single_heading_pane_fp_g

0x0b08,	// (0x00040643) list_single_heading_pane_fp_t1_ParamLimits

0x0b08,	// (0x00040643) list_single_heading_pane_fp_t1

0x0b1a,	// (0x00040655) list_single_heading_pane_fp_t2_ParamLimits

0x0b1a,	// (0x00040655) list_single_heading_pane_fp_t2

0x0001,

0xfbde,	// (0x0004f719) list_single_heading_pane_fp_t_ParamLimits

0xfbde,	// (0x0004f719) list_single_heading_pane_fp_t

0x3520,	// (0x0004305b) aid_size_cell_fast

0x2c80,	// (0x000427bb) soft_indicator_pane_cp1_t1

0x355d,	// (0x00043098) cell_app_pane_cp2_ParamLimits

0x355d,	// (0x00043098) cell_app_pane_cp2

0x1cbe,	// (0x000417f9) fep_hwr_candidate_drop_down_list_pane

0xde1a,	// (0x0004d955) fep_hwr_candidate_pane_g3_ParamLimits

0xde1a,	// (0x0004d955) fep_hwr_candidate_pane_g3

0xde27,	// (0x0004d962) fep_hwr_candidate_pane_g4_ParamLimits

0xde27,	// (0x0004d962) fep_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0004f68d) fep_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0004f68d) fep_hwr_candidate_pane_g

0x7605,	// (0x00047140) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7605,	// (0x00047140) fep_vkb_candidate_drop_down_list_pane

0x7a2d,	// (0x00047568) fep_vkb_candidate_pane_g3

0x7a35,	// (0x00047570) fep_vkb_candidate_pane_g4

0x0002,

0xfb7f,	// (0x0004f6ba) fep_vkb_candidate_pane_g

0x770b,	// (0x00047246) cell_hwr_candidate_pane_g1_ParamLimits

0x7a4c,	// (0x00047587) cell_hwr_candidate_pane_g3_ParamLimits

0x7a4c,	// (0x00047587) cell_hwr_candidate_pane_g3

0x7a6d,	// (0x000475a8) cell_hwr_candidate_pane_g4_ParamLimits

0x7a6d,	// (0x000475a8) cell_hwr_candidate_pane_g4

0x0002,

0xfb99,	// (0x0004f6d4) cell_hwr_candidate_pane_g_ParamLimits

0xfb99,	// (0x0004f6d4) cell_hwr_candidate_pane_g

0x7a8e,	// (0x000475c9) cell_vkb_candidate_pane_g3_ParamLimits

0x7a8e,	// (0x000475c9) cell_vkb_candidate_pane_g3

0x7aa9,	// (0x000475e4) cell_vkb_candidate_pane_g4_ParamLimits

0x7aa9,	// (0x000475e4) cell_vkb_candidate_pane_g4

0x7b7d,	// (0x000476b8) cell_app_pane_cp2_g1_ParamLimits

0x7b7d,	// (0x000476b8) cell_app_pane_cp2_g1

0x7b9b,	// (0x000476d6) cell_app_pane_cp2_g2_ParamLimits

0x7b9b,	// (0x000476d6) cell_app_pane_cp2_g2

0x0001,

0xfbe3,	// (0x0004f71e) cell_app_pane_cp2_g_ParamLimits

0xfbe3,	// (0x0004f71e) cell_app_pane_cp2_g

0x7ba7,	// (0x000476e2) cell_app_pane_cp2_t1_ParamLimits

0x7ba7,	// (0x000476e2) cell_app_pane_cp2_t1

0x330b,	// (0x00042e46) grid_highlight_pane_cp1_ParamLimits

0x330b,	// (0x00042e46) grid_highlight_pane_cp1

0x1f94,	// (0x00041acf) cell_hwr_candidate_pane_cp1_ParamLimits

0x1f94,	// (0x00041acf) cell_hwr_candidate_pane_cp1

0x770b,	// (0x00047246) fep_hwr_candidate_drop_down_list_pane_g1

0x7bb9,	// (0x000476f4) fep_hwr_candidate_drop_down_list_pane_g2

0x7bc6,	// (0x00047701) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x0004f723) fep_hwr_candidate_drop_down_list_pane_g

0x1fb8,	// (0x00041af3) fep_hwr_candidate_drop_down_list_scroll_pane

0x1fc1,	// (0x00041afc) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1fc1,	// (0x00041afc) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1fce,	// (0x00041b09) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1fce,	// (0x00041b09) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1fdb,	// (0x00041b16) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1fdb,	// (0x00041b16) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7a8e,	// (0x000475c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a8e,	// (0x000475c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7aa9,	// (0x000475e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7aa9,	// (0x000475e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1fe8,	// (0x00041b23) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1fe8,	// (0x00041b23) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2003,	// (0x00041b3e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2003,	// (0x00041b3e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x201e,	// (0x00041b59) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x201e,	// (0x00041b59) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0004f72a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0004f72a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7bd3,	// (0x0004770e) cell_vkb_candidate_pane_cp1_ParamLimits

0x7bd3,	// (0x0004770e) cell_vkb_candidate_pane_cp1

0x770b,	// (0x00047246) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x770b,	// (0x00047246) fep_vkb_candidate_drop_down_list_pane_g1

0x7bb9,	// (0x000476f4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7bb9,	// (0x000476f4) fep_vkb_candidate_drop_down_list_pane_g2

0x7bc6,	// (0x00047701) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7bc6,	// (0x00047701) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x0004f723) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x0004f723) fep_vkb_candidate_drop_down_list_pane_g

0x7bf9,	// (0x00047734) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7bf9,	// (0x00047734) fep_vkb_candidate_drop_down_list_scroll_pane

0x7c06,	// (0x00047741) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c06,	// (0x00047741) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7c13,	// (0x0004774e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c13,	// (0x0004774e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7c1f,	// (0x0004775a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c1f,	// (0x0004775a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7a4c,	// (0x00047587) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a4c,	// (0x00047587) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7a6d,	// (0x000475a8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a6d,	// (0x000475a8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c2b,	// (0x00047766) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c2b,	// (0x00047766) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c4c,	// (0x00047787) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c4c,	// (0x00047787) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c6d,	// (0x000477a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c6d,	// (0x000477a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc00,	// (0x0004f73b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc00,	// (0x0004f73b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbaf7,	// (0x0004b632) title_pane_g1_ParamLimits

0xbb08,	// (0x0004b643) title_pane_g2_ParamLimits

0xf592,	// (0x0004f0cd) title_pane_g_ParamLimits

0x396b,	// (0x000434a6) aid_call2_pane

0x3973,	// (0x000434ae) aid_call_pane

0x397b,	// (0x000434b6) popup_clock_analogue_window_g1

0x397b,	// (0x000434b6) popup_clock_analogue_window_g2

0x136e,	// (0x00040ea9) popup_clock_analogue_window_g3

0x1377,	// (0x00040eb2) popup_clock_analogue_window_g4

0x299a,	// (0x000424d5) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0004f27c) popup_clock_analogue_window_g

0x137f,	// (0x00040eba) popup_clock_analogue_window_t1

0x138d,	// (0x00040ec8) clock_digital_number_pane_ParamLimits

0x138d,	// (0x00040ec8) clock_digital_number_pane

0x1399,	// (0x00040ed4) clock_digital_number_pane_cp02_ParamLimits

0x1399,	// (0x00040ed4) clock_digital_number_pane_cp02

0x13a5,	// (0x00040ee0) clock_digital_number_pane_cp03_ParamLimits

0x13a5,	// (0x00040ee0) clock_digital_number_pane_cp03

0x13b1,	// (0x00040eec) clock_digital_number_pane_cp04_ParamLimits

0x13b1,	// (0x00040eec) clock_digital_number_pane_cp04

0x13bd,	// (0x00040ef8) clock_digital_separator_pane_ParamLimits

0x13bd,	// (0x00040ef8) clock_digital_separator_pane

0x13c9,	// (0x00040f04) popup_clock_digital_window_t1_ParamLimits

0x13c9,	// (0x00040f04) popup_clock_digital_window_t1

0x299a,	// (0x000424d5) clock_digital_number_pane_g1

0x299a,	// (0x000424d5) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0004f287) clock_digital_number_pane_g

0x299a,	// (0x000424d5) clock_digital_separator_pane_g1

0x299a,	// (0x000424d5) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0004f287) clock_digital_separator_pane_g

0xd245,	// (0x0004cd80) aid_fill_nsta_ParamLimits

0xd376,	// (0x0004ceb1) indicator_nsta_pane_ParamLimits

0x4c06,	// (0x00044741) popup_clock_analogue_window

0x4c06,	// (0x00044741) popup_clock_digital_window

0x34e1,	// (0x0004301c) grid_indicator_nsta_pane_ParamLimits

0x6eca,	// (0x00046a05) clock_nsta_pane_t2

0x0001,

0xfadf,	// (0x0004f61a) clock_nsta_pane_t

0x1332,	// (0x00040e6d) aid_size_max_handle

0xbdf7,	// (0x0004b932) aid_size_min_handle

0x3f69,	// (0x00043aa4) editor_scroll_pane

0x7c88,	// (0x000477c3) ex_editor_pane

0x348d,	// (0x00042fc8) scroll_pane_cp13

0x32aa,	// (0x00042de5) scroll_pane_cp14

0x39a5,	// (0x000434e0) scroll_pane_cp36

0xc94e,	// (0x0004c489) list_single_graphic_hl_pane_cp2_ParamLimits

0xc94e,	// (0x0004c489) list_single_graphic_hl_pane_cp2

0xdacb,	// (0x0004d606) list_single_graphic_hl_pane_ParamLimits

0xdacb,	// (0x0004d606) list_single_graphic_hl_pane

0x0b30,	// (0x0004066b) aid_size_min_hl_cp1

0x7c90,	// (0x000477cb) list_highlight_pane_cp34_ParamLimits

0x7c90,	// (0x000477cb) list_highlight_pane_cp34

0x7ca1,	// (0x000477dc) list_single_graphic_hl_pane_g1_ParamLimits

0x7ca1,	// (0x000477dc) list_single_graphic_hl_pane_g1

0xb7fb,	// (0x0004b336) list_single_graphic_hl_pane_g2_ParamLimits

0xb7fb,	// (0x0004b336) list_single_graphic_hl_pane_g2

0xb7fb,	// (0x0004b336) list_single_graphic_hl_pane_g3_ParamLimits

0xb7fb,	// (0x0004b336) list_single_graphic_hl_pane_g3

0x42ad,	// (0x00043de8) list_single_graphic_hl_pane_g4_ParamLimits

0x42ad,	// (0x00043de8) list_single_graphic_hl_pane_g4

0x7cde,	// (0x00047819) list_single_graphic_hl_pane_g5_ParamLimits

0x7cde,	// (0x00047819) list_single_graphic_hl_pane_g5

0x0004,

0xfc11,	// (0x0004f74c) list_single_graphic_hl_pane_g_ParamLimits

0xfc11,	// (0x0004f74c) list_single_graphic_hl_pane_g

0xf57c,	// (0x0004f0b7) list_single_graphic_hl_pane_t1_ParamLimits

0xf57c,	// (0x0004f0b7) list_single_graphic_hl_pane_t1

0x7cae,	// (0x000477e9) aid_size_min_hl_cp2

0x7cb7,	// (0x000477f2) list_highlight_pane_cp34_cp2_ParamLimits

0x7cb7,	// (0x000477f2) list_highlight_pane_cp34_cp2

0x7ca1,	// (0x000477dc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7ca1,	// (0x000477dc) list_single_graphic_hl_pane_g1_cp2

0x7cc4,	// (0x000477ff) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7cc4,	// (0x000477ff) list_single_graphic_hl_pane_g2_cp2

0x7cd0,	// (0x0004780b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7cd0,	// (0x0004780b) list_single_graphic_hl_pane_g3_cp2

0x42ad,	// (0x00043de8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x42ad,	// (0x00043de8) list_single_graphic_hl_pane_g4_cp2

0x7cde,	// (0x00047819) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7cde,	// (0x00047819) list_single_graphic_hl_pane_g5_cp2

0xbe4c,	// (0x0004b987) control_pane_g4_ParamLimits

0xbe4c,	// (0x0004b987) control_pane_g4

0x42f3,	// (0x00043e2e) bg_popup_sub_pane_cp10_ParamLimits

0x747d,	// (0x00046fb8) list_choice_list_pane_ParamLimits

0x748c,	// (0x00046fc7) scroll_pane_cp23

0x2d0e,	// (0x00042849) bg_popup_preview_window_pane_cp02_ParamLimits

0x7afa,	// (0x00047635) list_preview_fixed_pane_ParamLimits

0x7b10,	// (0x0004764b) list_preview_fixed_pane_cp_ParamLimits

0x7b10,	// (0x0004764b) list_preview_fixed_pane_cp

0x7b1c,	// (0x00047657) popup_preview_fixed_window_g1_ParamLimits

0x7b1c,	// (0x00047657) popup_preview_fixed_window_g1

0x7b28,	// (0x00047663) popup_preview_fixed_window_g2_ParamLimits

0x7b28,	// (0x00047663) popup_preview_fixed_window_g2

0x0002,

0xfba0,	// (0x0004f6db) popup_preview_fixed_window_g_ParamLimits

0xfba0,	// (0x0004f6db) popup_preview_fixed_window_g

0x12a4,	// (0x00040ddf) aid_navi_side_left_pane_ParamLimits

0x12b9,	// (0x00040df4) aid_navi_side_right_pane_ParamLimits

0x12d1,	// (0x00040e0c) navi_icon_pane_stacon_ParamLimits

0x12e5,	// (0x00040e20) navi_navi_pane_stacon_ParamLimits

0x12d1,	// (0x00040e0c) navi_text_pane_stacon_ParamLimits

0x2990,	// (0x000424cb) main_text_info_pane

0x7d08,	// (0x00047843) listscroll_text_info_pane

0x7d10,	// (0x0004784b) list_text_info_pane_ParamLimits

0x7d10,	// (0x0004784b) list_text_info_pane

0x7d1f,	// (0x0004785a) scroll_pane_cp24_ParamLimits

0x7d1f,	// (0x0004785a) scroll_pane_cp24

0xdfb0,	// (0x0004daeb) list_text_info_pane_t1_ParamLimits

0xdfb0,	// (0x0004daeb) list_text_info_pane_t1

0xcb42,	// (0x0004c67d) popup_fast_swap2_window_ParamLimits

0xcb42,	// (0x0004c67d) popup_fast_swap2_window

0x7d62,	// (0x0004789d) aid_size_cell_fast2

0x2990,	// (0x000424cb) bg_popup_window_pane_cp17

0x52b9,	// (0x00044df4) heading_pane_cp2

0x2f6e,	// (0x00042aa9) listscroll_fast2_pane

0x7d6c,	// (0x000478a7) grid_fast2_pane

0x7d76,	// (0x000478b1) listscroll_fast2_pane_g1

0x7d80,	// (0x000478bb) listscroll_fast2_pane_g2

0x0001,

0xfc1c,	// (0x0004f757) listscroll_fast2_pane_g

0x348d,	// (0x00042fc8) scroll_pane_cp26

0x7d8a,	// (0x000478c5) cell_fast2_pane_ParamLimits

0x7d8a,	// (0x000478c5) cell_fast2_pane

0x7da1,	// (0x000478dc) cell_fast2_pane_g1

0x7daa,	// (0x000478e5) cell_fast2_pane_g2

0x7db3,	// (0x000478ee) cell_fast2_pane_g3

0x0002,

0xfc21,	// (0x0004f75c) cell_fast2_pane_g

0x3067,	// (0x00042ba2) grid_highlight_pane_cp9

0x307c,	// (0x00042bb7) main_eswt_pane_ParamLimits

0x307c,	// (0x00042bb7) main_eswt_pane

0x7d34,	// (0x0004786f) list_single_text_info_pane

0x7dbb,	// (0x000478f6) eswt_ctrl_button_pane

0x7dbb,	// (0x000478f6) eswt_ctrl_canvas_pane

0x7dc3,	// (0x000478fe) eswt_ctrl_combo_pane

0x7dbb,	// (0x000478f6) eswt_ctrl_default_pane

0x7dbb,	// (0x000478f6) eswt_ctrl_label_pane

0x7dcb,	// (0x00047906) eswt_ctrl_wait_pane

0x7dd3,	// (0x0004790e) eswt_shell_pane

0x2990,	// (0x000424cb) listscroll_eswt_app_pane

0x7df3,	// (0x0004792e) popup_eswt_tasktip_window_ParamLimits

0x7df3,	// (0x0004792e) popup_eswt_tasktip_window

0x4f21,	// (0x00044a5c) bg_popup_window_pane_cp18

0x7e04,	// (0x0004793f) eswt_control_pane_g1_ParamLimits

0x7e04,	// (0x0004793f) eswt_control_pane_g1

0x7e11,	// (0x0004794c) eswt_control_pane_g2_ParamLimits

0x7e11,	// (0x0004794c) eswt_control_pane_g2

0x7e1e,	// (0x00047959) eswt_control_pane_g3_ParamLimits

0x7e1e,	// (0x00047959) eswt_control_pane_g3

0x7e2b,	// (0x00047966) eswt_control_pane_g4_ParamLimits

0x7e2b,	// (0x00047966) eswt_control_pane_g4

0x0003,

0xfc28,	// (0x0004f763) eswt_control_pane_g_ParamLimits

0xfc28,	// (0x0004f763) eswt_control_pane_g

0x330b,	// (0x00042e46) bg_button_pane_ParamLimits

0x330b,	// (0x00042e46) bg_button_pane

0x307c,	// (0x00042bb7) common_borders_pane_copy2_ParamLimits

0x307c,	// (0x00042bb7) common_borders_pane_copy2

0x7e38,	// (0x00047973) control_button_pane_g1_ParamLimits

0x7e38,	// (0x00047973) control_button_pane_g1

0x7e44,	// (0x0004797f) control_button_pane_g2_ParamLimits

0x7e44,	// (0x0004797f) control_button_pane_g2

0x7e50,	// (0x0004798b) control_button_pane_g3_ParamLimits

0x7e50,	// (0x0004798b) control_button_pane_g3

0x0002,

0xfc31,	// (0x0004f76c) control_button_pane_g_ParamLimits

0xfc31,	// (0x0004f76c) control_button_pane_g

0x7e64,	// (0x0004799f) control_button_pane_t1

0x7e72,	// (0x000479ad) control_button_pane_t2

0x0001,

0xfc38,	// (0x0004f773) control_button_pane_t

0x4e2f,	// (0x0004496a) bg_button_pane_g1

0x4e37,	// (0x00044972) bg_button_pane_g2

0x4e3f,	// (0x0004497a) bg_button_pane_g3

0x4e47,	// (0x00044982) bg_button_pane_g4

0x4e4f,	// (0x0004498a) bg_button_pane_g5

0x4e57,	// (0x00044992) bg_button_pane_g6

0x4e5f,	// (0x0004499a) bg_button_pane_g7

0x4e67,	// (0x000449a2) bg_button_pane_g8

0x4e6f,	// (0x000449aa) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0004f3da) bg_button_pane_g

0x7438,	// (0x00046f73) common_borders_pane_ParamLimits

0x7438,	// (0x00046f73) common_borders_pane

0x7e04,	// (0x0004793f) eswt_control_pane_g1_copy1_ParamLimits

0x7e04,	// (0x0004793f) eswt_control_pane_g1_copy1

0x7e11,	// (0x0004794c) eswt_control_pane_g2_copy1_ParamLimits

0x7e11,	// (0x0004794c) eswt_control_pane_g2_copy1

0x7e1e,	// (0x00047959) eswt_control_pane_g3_copy1_ParamLimits

0x7e1e,	// (0x00047959) eswt_control_pane_g3_copy1

0x7e2b,	// (0x00047966) eswt_control_pane_g4_copy1_ParamLimits

0x7e2b,	// (0x00047966) eswt_control_pane_g4_copy1

0x7473,	// (0x00046fae) bg_eswt_ctrl_canvas_pane_g1

0x7438,	// (0x00046f73) common_borders_pane_cp2_ParamLimits

0x7438,	// (0x00046f73) common_borders_pane_cp2

0x7438,	// (0x00046f73) common_borders_pane_cp3_ParamLimits

0x7438,	// (0x00046f73) common_borders_pane_cp3

0x7e80,	// (0x000479bb) separator_horizontal_pane

0x7e88,	// (0x000479c3) separator_vertical_pane

0x7e04,	// (0x0004793f) eswt_control_pane_g1_copy2_ParamLimits

0x7e04,	// (0x0004793f) eswt_control_pane_g1_copy2

0x7e11,	// (0x0004794c) eswt_control_pane_g2_copy2_ParamLimits

0x7e11,	// (0x0004794c) eswt_control_pane_g2_copy2

0x7e1e,	// (0x00047959) eswt_control_pane_g3_copy2_ParamLimits

0x7e1e,	// (0x00047959) eswt_control_pane_g3_copy2

0x7e2b,	// (0x00047966) eswt_control_pane_g4_copy2_ParamLimits

0x7e2b,	// (0x00047966) eswt_control_pane_g4_copy2

0x2990,	// (0x000424cb) common_borders_pane_cp4

0x7e91,	// (0x000479cc) separator_horizontal_pane_g1

0x7e9a,	// (0x000479d5) separator_horizontal_pane_g2

0x7ea3,	// (0x000479de) separator_horizontal_pane_g3

0x0002,

0xfc3d,	// (0x0004f778) separator_horizontal_pane_g

0x7e04,	// (0x0004793f) eswt_control_pane_g1_copy3_ParamLimits

0x7e04,	// (0x0004793f) eswt_control_pane_g1_copy3

0x7e11,	// (0x0004794c) eswt_control_pane_g2_copy3_ParamLimits

0x7e11,	// (0x0004794c) eswt_control_pane_g2_copy3

0x7e1e,	// (0x00047959) eswt_control_pane_g3_copy3_ParamLimits

0x7e1e,	// (0x00047959) eswt_control_pane_g3_copy3

0x7e2b,	// (0x00047966) eswt_control_pane_g4_copy3_ParamLimits

0x7e2b,	// (0x00047966) eswt_control_pane_g4_copy3

0x2990,	// (0x000424cb) common_borders_pane_cp5

0x7eac,	// (0x000479e7) separator_vertical_pane_g1

0x7eb5,	// (0x000479f0) separator_vertical_pane_g2

0x7ebe,	// (0x000479f9) separator_vertical_pane_g3

0x0002,

0xfc44,	// (0x0004f77f) separator_vertical_pane_g

0x7e04,	// (0x0004793f) eswt_control_pane_g1_copy4_ParamLimits

0x7e04,	// (0x0004793f) eswt_control_pane_g1_copy4

0x7e11,	// (0x0004794c) eswt_control_pane_g2_copy4_ParamLimits

0x7e11,	// (0x0004794c) eswt_control_pane_g2_copy4

0x7e1e,	// (0x00047959) eswt_control_pane_g3_copy4_ParamLimits

0x7e1e,	// (0x00047959) eswt_control_pane_g3_copy4

0x7e2b,	// (0x00047966) eswt_control_pane_g4_copy4_ParamLimits

0x7e2b,	// (0x00047966) eswt_control_pane_g4_copy4

0xdfd2,	// (0x0004db0d) eswt_ctrl_combo_button_pane

0xdfda,	// (0x0004db15) eswt_ctrl_input_pane

0xdfe2,	// (0x0004db1d) popup_choice_list_window_cp70

0xdfea,	// (0x0004db25) eswt_ctrl_input_pane_t1

0x2990,	// (0x000424cb) input_focus_pane_cp70

0x7438,	// (0x00046f73) bg_button_pane_cp70_ParamLimits

0x7438,	// (0x00046f73) bg_button_pane_cp70

0xdff8,	// (0x0004db33) eswt_ctrl_combo_button_pane_g1

0x7ef5,	// (0x00047a30) wait_bar_pane_cp70

0x4f21,	// (0x00044a5c) bg_popup_window_pane_cp70_ParamLimits

0x4f21,	// (0x00044a5c) bg_popup_window_pane_cp70

0x7efd,	// (0x00047a38) popup_eswt_tasktip_window_t1

0x7f13,	// (0x00047a4e) wait_bar_pane_cp71_ParamLimits

0x7f13,	// (0x00047a4e) wait_bar_pane_cp71

0x7f1f,	// (0x00047a5a) grid_eswt_app_pane

0x37b8,	// (0x000432f3) scroll_pane_cp70

0xe000,	// (0x0004db3b) cell_eswt_app_pane_ParamLimits

0xe000,	// (0x0004db3b) cell_eswt_app_pane

0xe032,	// (0x0004db6d) cell_eswt_app_pane_g1_ParamLimits

0xe032,	// (0x0004db6d) cell_eswt_app_pane_g1

0xe061,	// (0x0004db9c) cell_eswt_app_pane_g2_ParamLimits

0xe061,	// (0x0004db9c) cell_eswt_app_pane_g2

0x0001,

0xfc4b,	// (0x0004f786) cell_eswt_app_pane_g_ParamLimits

0xfc4b,	// (0x0004f786) cell_eswt_app_pane_g

0xe08a,	// (0x0004dbc5) cell_eswt_app_pane_t1_ParamLimits

0xe08a,	// (0x0004dbc5) cell_eswt_app_pane_t1

0x7fe4,	// (0x00047b1f) grid_highlight_pane_cp70_ParamLimits

0x7fe4,	// (0x00047b1f) grid_highlight_pane_cp70

0x6381,	// (0x00045ebc) set_content_pane_g1

0x4219,	// (0x00043d54) status_small_volume_pane

0x204d,	// (0x00041b88) status_small_volume_pane_g1

0x2055,	// (0x00041b90) volume_small2_pane

0x205e,	// (0x00041b99) volume_small2_pane_g1

0x2067,	// (0x00041ba2) volume_small2_pane_g2

0x2070,	// (0x00041bab) volume_small2_pane_g3

0x2079,	// (0x00041bb4) volume_small2_pane_g4

0x2082,	// (0x00041bbd) volume_small2_pane_g5

0x208b,	// (0x00041bc6) volume_small2_pane_g6

0x2094,	// (0x00041bcf) volume_small2_pane_g7

0x209d,	// (0x00041bd8) volume_small2_pane_g8

0x20a6,	// (0x00041be1) volume_small2_pane_g9

0x20af,	// (0x00041bea) volume_small2_pane_g10

0x0009,

0xfc50,	// (0x0004f78b) volume_small2_pane_g

0x785f,	// (0x0004739a) fep_vkb_top_text_pane_g1_ParamLimits

0xdf58,	// (0x0004da93) fep_vkb_top_text_pane_t1_ParamLimits

0x7b34,	// (0x0004766f) popup_preview_fixed_window_g3_ParamLimits

0x7b34,	// (0x0004766f) popup_preview_fixed_window_g3

0xd1d8,	// (0x0004cd13) popup_toolbar_trans_pane

0xd91b,	// (0x0004d456) aid_height_set_list_ParamLimits

0x6237,	// (0x00045d72) aid_size_parent_ParamLimits

0x42f3,	// (0x00043e2e) list_highlight_pane_cp2_ParamLimits

0x6381,	// (0x00045ebc) set_content_pane_g1_ParamLimits

0xc16c,	// (0x0004bca7) list_single_image_pane_ParamLimits

0xc16c,	// (0x0004bca7) list_single_image_pane

0xe0bc,	// (0x0004dbf7) aid_size_cell_image_ParamLimits

0xe0bc,	// (0x0004dbf7) aid_size_cell_image

0xe0c9,	// (0x0004dc04) grid_single_image_pane_ParamLimits

0xe0c9,	// (0x0004dc04) grid_single_image_pane

0x3325,	// (0x00042e60) list_single_image_pane_g1_ParamLimits

0x3325,	// (0x00042e60) list_single_image_pane_g1

0x3331,	// (0x00042e6c) list_single_image_pane_g2_ParamLimits

0x3331,	// (0x00042e6c) list_single_image_pane_g2

0x0001,

0xfc65,	// (0x0004f7a0) list_single_image_pane_g_ParamLimits

0xfc65,	// (0x0004f7a0) list_single_image_pane_g

0x800b,	// (0x00047b46) list_single_image_pane_t1_ParamLimits

0x800b,	// (0x00047b46) list_single_image_pane_t1

0xe0d7,	// (0x0004dc12) cell_image_list_pane_ParamLimits

0xe0d7,	// (0x0004dc12) cell_image_list_pane

0xe0f1,	// (0x0004dc2c) cell_image_list_pane_g1

0xe0fa,	// (0x0004dc35) cell_image_list_pane_g2

0x0001,

0xfc6a,	// (0x0004f7a5) cell_image_list_pane_g

0x8049,	// (0x00047b84) aid_size_cell_tb_trans_pane

0x330b,	// (0x00042e46) bg_tb_trans_pane

0x805b,	// (0x00047b96) grid_tb_trans_pane

0x4e2f,	// (0x0004496a) bg_tb_trans_pane_g1

0x4e37,	// (0x00044972) bg_tb_trans_pane_g2

0x4e3f,	// (0x0004497a) bg_tb_trans_pane_g3

0x4e47,	// (0x00044982) bg_tb_trans_pane_g4

0x4e4f,	// (0x0004498a) bg_tb_trans_pane_g5

0x4e67,	// (0x000449a2) bg_tb_trans_pane_g6

0x4e6f,	// (0x000449aa) bg_tb_trans_pane_g7

0x4e57,	// (0x00044992) bg_tb_trans_pane_g8

0x4e5f,	// (0x0004499a) bg_tb_trans_pane_g9

0x0008,

0xfc6f,	// (0x0004f7aa) bg_tb_trans_pane_g

0x806f,	// (0x00047baa) cell_toolbar_trans_pane_ParamLimits

0x806f,	// (0x00047baa) cell_toolbar_trans_pane

0x7473,	// (0x00046fae) cell_toolbar_trans_pane_g1

0xdd00,	// (0x0004d83b) list_form2_midp_pane_t1

0xdd0e,	// (0x0004d849) list_form2_midp_pane_t2

0x0001,

0xfb18,	// (0x0004f653) list_form2_midp_pane_t

0x70b0,	// (0x00046beb) scroll_pane_cp51_ParamLimits

0x7277,	// (0x00046db2) form2_midp_wait_pane_g1

0x7280,	// (0x00046dbb) form2_midp_wait_pane_g2

0x7289,	// (0x00046dc4) form2_midp_wait_pane_g3

0x0002,

0xfb2d,	// (0x0004f668) form2_midp_wait_pane_g

0x2a84,	// (0x000425bf) list_highlight_pane_cp21_ParamLimits

0x72cd,	// (0x00046e08) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x72dc,	// (0x00046e17) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x642f,	// (0x00045f6a) list_single_2graphic_im_pane_ParamLimits

0x642f,	// (0x00045f6a) list_single_2graphic_im_pane

0xe103,	// (0x0004dc3e) list_single_2graphic_im_pane_g1_ParamLimits

0xe103,	// (0x0004dc3e) list_single_2graphic_im_pane_g1

0xe114,	// (0x0004dc4f) list_single_2graphic_im_pane_g2_ParamLimits

0xe114,	// (0x0004dc4f) list_single_2graphic_im_pane_g2

0xe120,	// (0x0004dc5b) list_single_2graphic_im_pane_g3_ParamLimits

0xe120,	// (0x0004dc5b) list_single_2graphic_im_pane_g3

0x0003,

0xfc82,	// (0x0004f7bd) list_single_2graphic_im_pane_g_ParamLimits

0xfc82,	// (0x0004f7bd) list_single_2graphic_im_pane_g

0xe134,	// (0x0004dc6f) list_single_2graphic_im_pane_t1_ParamLimits

0xe134,	// (0x0004dc6f) list_single_2graphic_im_pane_t1

0x7b40,	// (0x0004767b) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b40,	// (0x0004767b) list_single_graphic_2heading_pane_fp

0x0a12,	// (0x0004054d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0a12,	// (0x0004054d) list_single_graphic_2heading_pane_fp_g1

0x7b59,	// (0x00047694) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b59,	// (0x00047694) list_single_graphic_2heading_pane_fp_g2

0x116e,	// (0x00040ca9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x116e,	// (0x00040ca9) list_single_graphic_2heading_pane_fp_g3

0x1f10,	// (0x00041a4b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1f10,	// (0x00041a4b) list_single_graphic_2heading_pane_fp_g4

0x7b65,	// (0x000476a0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b65,	// (0x000476a0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x0004f6eb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0004f6eb) list_single_graphic_2heading_pane_fp_g

0x0b5b,	// (0x00040696) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0b5b,	// (0x00040696) list_single_graphic_2heading_pane_fp_t1

0x0a4a,	// (0x00040585) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0a4a,	// (0x00040585) list_single_graphic_2heading_pane_fp_t2

0x0b71,	// (0x000406ac) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0b71,	// (0x000406ac) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8b,	// (0x0004f7c6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8b,	// (0x0004f7c6) list_single_graphic_2heading_pane_fp_t

0x7513,	// (0x0004704e) fep_hwr_write_pane_g5_ParamLimits

0x7513,	// (0x0004704e) fep_hwr_write_pane_g5

0x752d,	// (0x00047068) fep_hwr_write_pane_g6_ParamLimits

0x752d,	// (0x00047068) fep_hwr_write_pane_g6

0x7dd3,	// (0x0004790e) eswt_shell_pane_ParamLimits

0x4f21,	// (0x00044a5c) bg_popup_window_pane_cp18_ParamLimits

0x617d,	// (0x00045cb8) heading_pane_cp70

0x7efd,	// (0x00047a38) popup_eswt_tasktip_window_t1_ParamLimits

0xd29b,	// (0x0004cdd6) aid_touch_tab_arrow_left

0xd2b1,	// (0x0004cdec) aid_touch_tab_arrow_right

0xbb20,	// (0x0004b65b) title_pane_g3_ParamLimits

0xbb20,	// (0x0004b65b) title_pane_g3

0x32ca,	// (0x00042e05) set_value_pane_g1

0xd1d8,	// (0x0004cd13) popup_toolbar_trans_pane_ParamLimits

0x8049,	// (0x00047b84) aid_size_cell_tb_trans_pane_ParamLimits

0x330b,	// (0x00042e46) bg_tb_trans_pane_ParamLimits

0x805b,	// (0x00047b96) grid_tb_trans_pane_ParamLimits

0x2d0e,	// (0x00042849) cont_note_pane_ParamLimits

0x2d0e,	// (0x00042849) cont_note_pane

0x307c,	// (0x00042bb7) cont_snote2_single_text_pane_ParamLimits

0x307c,	// (0x00042bb7) cont_snote2_single_text_pane

0x307c,	// (0x00042bb7) cont_snote2_single_graphic_pane_ParamLimits

0x307c,	// (0x00042bb7) cont_snote2_single_graphic_pane

0x54a4,	// (0x00044fdf) cont_note_wait_pane_ParamLimits

0x54a4,	// (0x00044fdf) cont_note_wait_pane

0x54a4,	// (0x00044fdf) cont_note_image_pane_ParamLimits

0x54a4,	// (0x00044fdf) cont_note_image_pane

0x8103,	// (0x00047c3e) popup_note2_window_g1_ParamLimits

0x8103,	// (0x00047c3e) popup_note2_window_g1

0x8134,	// (0x00047c6f) popup_note2_window_t1_ParamLimits

0x8134,	// (0x00047c6f) popup_note2_window_t1

0x8179,	// (0x00047cb4) popup_note2_window_t2_ParamLimits

0x8179,	// (0x00047cb4) popup_note2_window_t2

0x81be,	// (0x00047cf9) popup_note2_window_t3_ParamLimits

0x81be,	// (0x00047cf9) popup_note2_window_t3

0x8203,	// (0x00047d3e) popup_note2_window_t4_ParamLimits

0x8203,	// (0x00047d3e) popup_note2_window_t4

0x2d92,	// (0x000428cd) popup_note2_window_t5_ParamLimits

0x2d92,	// (0x000428cd) popup_note2_window_t5

0x0004,

0xfc97,	// (0x0004f7d2) popup_note2_window_t_ParamLimits

0xfc97,	// (0x0004f7d2) popup_note2_window_t

0x8232,	// (0x00047d6d) popup_note2_image_window_g1_ParamLimits

0x8232,	// (0x00047d6d) popup_note2_image_window_g1

0x823e,	// (0x00047d79) popup_note2_image_window_g2_ParamLimits

0x823e,	// (0x00047d79) popup_note2_image_window_g2

0x0001,

0xfca2,	// (0x0004f7dd) popup_note2_image_window_g_ParamLimits

0xfca2,	// (0x0004f7dd) popup_note2_image_window_g

0x8250,	// (0x00047d8b) popup_note2_image_window_t1_ParamLimits

0x8250,	// (0x00047d8b) popup_note2_image_window_t1

0x8268,	// (0x00047da3) popup_note2_image_window_t2_ParamLimits

0x8268,	// (0x00047da3) popup_note2_image_window_t2

0x8280,	// (0x00047dbb) popup_note2_image_window_t3_ParamLimits

0x8280,	// (0x00047dbb) popup_note2_image_window_t3

0x0002,

0xfca7,	// (0x0004f7e2) popup_note2_image_window_t_ParamLimits

0xfca7,	// (0x0004f7e2) popup_note2_image_window_t

0x54b2,	// (0x00044fed) popup_note2_wait_window_g1_ParamLimits

0x54b2,	// (0x00044fed) popup_note2_wait_window_g1

0x829c,	// (0x00047dd7) popup_note2_wait_window_g2_ParamLimits

0x829c,	// (0x00047dd7) popup_note2_wait_window_g2

0x54ca,	// (0x00045005) popup_note2_wait_window_g3_ParamLimits

0x54ca,	// (0x00045005) popup_note2_wait_window_g3

0x0002,

0xfcae,	// (0x0004f7e9) popup_note2_wait_window_g_ParamLimits

0xfcae,	// (0x0004f7e9) popup_note2_wait_window_g

0x82a8,	// (0x00047de3) popup_note2_wait_window_t1_ParamLimits

0x82a8,	// (0x00047de3) popup_note2_wait_window_t1

0x82c6,	// (0x00047e01) popup_note2_wait_window_t2_ParamLimits

0x82c6,	// (0x00047e01) popup_note2_wait_window_t2

0x82e4,	// (0x00047e1f) popup_note2_wait_window_t3_ParamLimits

0x82e4,	// (0x00047e1f) popup_note2_wait_window_t3

0x82f6,	// (0x00047e31) popup_note2_wait_window_t4_ParamLimits

0x82f6,	// (0x00047e31) popup_note2_wait_window_t4

0x0003,

0xfcb5,	// (0x0004f7f0) popup_note2_wait_window_t_ParamLimits

0xfcb5,	// (0x0004f7f0) popup_note2_wait_window_t

0x8308,	// (0x00047e43) wait_bar2_pane_ParamLimits

0x8308,	// (0x00047e43) wait_bar2_pane

0x8320,	// (0x00047e5b) popup_snote2_single_text_window_g1_ParamLimits

0x8320,	// (0x00047e5b) popup_snote2_single_text_window_g1

0x8348,	// (0x00047e83) popup_snote2_single_text_window_t1_ParamLimits

0x8348,	// (0x00047e83) popup_snote2_single_text_window_t1

0x8394,	// (0x00047ecf) popup_snote2_single_text_window_t2_ParamLimits

0x8394,	// (0x00047ecf) popup_snote2_single_text_window_t2

0x83e0,	// (0x00047f1b) popup_snote2_single_text_window_t3_ParamLimits

0x83e0,	// (0x00047f1b) popup_snote2_single_text_window_t3

0x8421,	// (0x00047f5c) popup_snote2_single_text_window_t4_ParamLimits

0x8421,	// (0x00047f5c) popup_snote2_single_text_window_t4

0x8457,	// (0x00047f92) popup_snote2_single_text_window_t5_ParamLimits

0x8457,	// (0x00047f92) popup_snote2_single_text_window_t5

0x0004,

0xfcbe,	// (0x0004f7f9) popup_snote2_single_text_window_t_ParamLimits

0xfcbe,	// (0x0004f7f9) popup_snote2_single_text_window_t

0x8482,	// (0x00047fbd) popup_snote2_single_graphic_window_g1_ParamLimits

0x8482,	// (0x00047fbd) popup_snote2_single_graphic_window_g1

0x84aa,	// (0x00047fe5) popup_snote2_single_graphic_window_g2_ParamLimits

0x84aa,	// (0x00047fe5) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc9,	// (0x0004f804) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc9,	// (0x0004f804) popup_snote2_single_graphic_window_g

0x84d2,	// (0x0004800d) popup_snote2_single_graphic_window_t1_ParamLimits

0x84d2,	// (0x0004800d) popup_snote2_single_graphic_window_t1

0x851e,	// (0x00048059) popup_snote2_single_graphic_window_t2_ParamLimits

0x851e,	// (0x00048059) popup_snote2_single_graphic_window_t2

0x83e0,	// (0x00047f1b) popup_snote2_single_graphic_window_t3_ParamLimits

0x83e0,	// (0x00047f1b) popup_snote2_single_graphic_window_t3

0x8421,	// (0x00047f5c) popup_snote2_single_graphic_window_t4_ParamLimits

0x8421,	// (0x00047f5c) popup_snote2_single_graphic_window_t4

0x8457,	// (0x00047f92) popup_snote2_single_graphic_window_t5_ParamLimits

0x8457,	// (0x00047f92) popup_snote2_single_graphic_window_t5

0x0004,

0xfcce,	// (0x0004f809) popup_snote2_single_graphic_window_t_ParamLimits

0xfcce,	// (0x0004f809) popup_snote2_single_graphic_window_t

0x6f5a,	// (0x00046a95) clock_nsta_pane_cp2_t1

0x6f5a,	// (0x00046a95) clock_nsta_pane_cp2_t2

0x0001,

0xfaee,	// (0x0004f629) clock_nsta_pane_cp2_t

0x04ba,	// (0x0003fff5) form_field_data_wide_pane_g1_ParamLimits

0x3325,	// (0x00042e60) form_field_data_wide_pane_g2_ParamLimits

0x3325,	// (0x00042e60) form_field_data_wide_pane_g2

0x3331,	// (0x00042e6c) form_field_data_wide_pane_g3_ParamLimits

0x3331,	// (0x00042e6c) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0004f1ff) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0004f1ff) form_field_data_wide_pane_g

0xdc08,	// (0x0004d743) grid_touch_3_pane_ParamLimits

0xdc08,	// (0x0004d743) grid_touch_3_pane

0xe165,	// (0x0004dca0) cell_touch_3_pane_ParamLimits

0xe165,	// (0x0004dca0) cell_touch_3_pane

0x7473,	// (0x00046fae) cell_touch_3_pane_g1

0x7473,	// (0x00046fae) cell_touch_3_pane_g2

0x0001,

0xfb73,	// (0x0004f6ae) cell_touch_3_pane_g

0x2dc4,	// (0x000428ff) cont_query_data_pane

0x2dcc,	// (0x00042907) cont_query_data_pane_cp1

0x859d,	// (0x000480d8) button_value_adjust_pane_cp7

0x85a5,	// (0x000480e0) query_popup_pane_cp3

0x3a45,	// (0x00043580) bg_popup_sub_pane_cp22_ParamLimits

0x13e8,	// (0x00040f23) navi_navi_volume_pane_cp2

0x1403,	// (0x00040f3e) popup_side_volume_key_window_g2

0x1412,	// (0x00040f4d) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0004f291) popup_side_volume_key_window_g

0x142f,	// (0x00040f6a) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0004f298) popup_side_volume_key_window_t

0x3d00,	// (0x0004383b) popup_side_volume_key_window_ParamLimits

0xb287,	// (0x0004adc2) list_double_graphic_pane_g4_ParamLimits

0xb287,	// (0x0004adc2) list_double_graphic_pane_g4

0xc157,	// (0x0004bc92) list_single_2heading_msg_pane_ParamLimits

0xc157,	// (0x0004bc92) list_single_2heading_msg_pane

0xc1ca,	// (0x0004bd05) list_single_2heading_msg_pane_g1_ParamLimits

0xc1ca,	// (0x0004bd05) list_single_2heading_msg_pane_g1

0xc1d6,	// (0x0004bd11) list_single_2heading_msg_pane_g2_ParamLimits

0xc1d6,	// (0x0004bd11) list_single_2heading_msg_pane_g2

0xc1e9,	// (0x0004bd24) list_single_2heading_msg_pane_g3_ParamLimits

0xc1e9,	// (0x0004bd24) list_single_2heading_msg_pane_g3

0xc1f5,	// (0x0004bd30) list_single_2heading_msg_pane_g4_ParamLimits

0xc1f5,	// (0x0004bd30) list_single_2heading_msg_pane_g4

0x0003,

0xfcd9,	// (0x0004f814) list_single_2heading_msg_pane_g_ParamLimits

0xfcd9,	// (0x0004f814) list_single_2heading_msg_pane_g

0xb807,	// (0x0004b342) list_single_2heading_msg_pane_t1_ParamLimits

0xb807,	// (0x0004b342) list_single_2heading_msg_pane_t1

0xb82f,	// (0x0004b36a) list_single_2heading_msg_pane_t2_ParamLimits

0xb82f,	// (0x0004b36a) list_single_2heading_msg_pane_t2

0xb89a,	// (0x0004b3d5) list_single_2heading_msg_pane_t3_ParamLimits

0xb89a,	// (0x0004b3d5) list_single_2heading_msg_pane_t3

0x0c21,	// (0x0004075c) list_single_2heading_msg_pane_t4_ParamLimits

0x0c21,	// (0x0004075c) list_single_2heading_msg_pane_t4

0x0003,

0xfce2,	// (0x0004f81d) list_single_2heading_msg_pane_t_ParamLimits

0xfce2,	// (0x0004f81d) list_single_2heading_msg_pane_t

0x29d8,	// (0x00042513) title_pane_g4_ParamLimits

0x29d8,	// (0x00042513) title_pane_g4

0x11f4,	// (0x00040d2f) title_pane_stacon_g3_ParamLimits

0x11f4,	// (0x00040d2f) title_pane_stacon_g3

0x80c6,	// (0x00047c01) list_single_2graphic_im_pane_g4_ParamLimits

0x80c6,	// (0x00047c01) list_single_2graphic_im_pane_g4

0x5f1a,	// (0x00045a55) popup_side_volume_key_window_cp

0x6790,	// (0x000462cb) main_idle_act2_pane_t1

0x17e7,	// (0x00041322) toolbar_button_pane_g10

0xc764,	// (0x0004c29f) popup_toolbar_window_cp1

0x6f4b,	// (0x00046a86) clock_nsta_pane_cp_t1

0x6f4b,	// (0x00046a86) clock_nsta_pane_cp_t2

0x0001,

0xfae9,	// (0x0004f624) clock_nsta_pane_cp_t

0x13e8,	// (0x00040f23) navi_navi_volume_pane_cp2_ParamLimits

0x13f7,	// (0x00040f32) popup_side_volume_key_window_g1_ParamLimits

0x1403,	// (0x00040f3e) popup_side_volume_key_window_g2_ParamLimits

0x1412,	// (0x00040f4d) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0004f291) popup_side_volume_key_window_g_ParamLimits

0x1caa,	// (0x000417e5) fep_hwr_aid_pane

0xde0c,	// (0x0004d947) bg_fep_hwr_top_pane_g4_ParamLimits

0x74e3,	// (0x0004701e) fep_hwr_top_pane_g1_ParamLimits

0x74f5,	// (0x00047030) fep_hwr_top_pane_g2_ParamLimits

0x1d65,	// (0x000418a0) fep_hwr_top_pane_g3_ParamLimits

0xfb3e,	// (0x0004f679) fep_hwr_top_pane_g_ParamLimits

0x1d7a,	// (0x000418b5) fep_hwr_top_text_pane_ParamLimits

0x5ccf,	// (0x0004580a) aid_touch_tab_arrow_arrow_2

0x5cd8,	// (0x00045813) aid_touch_tab_arrow_left_2

0x1cbe,	// (0x000417f9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1cf5,	// (0x00041830) fep_hwr_prediction_pane

0x7659,	// (0x00047194) fep_vkb_prediction_pane

0xdf38,	// (0x0004da73) fep_vkb_side_pane_g3_ParamLimits

0xdf38,	// (0x0004da73) fep_vkb_side_pane_g3

0x770b,	// (0x00047246) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7bb9,	// (0x000476f4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7bc6,	// (0x00047701) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe8,	// (0x0004f723) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x85cc,	// (0x00048107) fep_hwr_prediction_pane_g1

0x20e8,	// (0x00041c23) fep_hwr_prediction_pane_g2

0x20f0,	// (0x00041c2b) fep_hwr_prediction_pane_g3

0x20f8,	// (0x00041c33) fep_hwr_prediction_pane_g4

0x0003,

0xfceb,	// (0x0004f826) fep_hwr_prediction_pane_g

0x85cc,	// (0x00048107) fep_vkb_prediction_pane_g1

0x85d6,	// (0x00048111) fep_vkb_prediction_pane_g2

0x85de,	// (0x00048119) fep_vkb_prediction_pane_g3

0x85e6,	// (0x00048121) fep_vkb_prediction_pane_g4

0x0003,

0xfcf4,	// (0x0004f82f) fep_vkb_prediction_pane_g

0x6880,	// (0x000463bb) slider_set_pane_g3

0x6894,	// (0x000463cf) slider_set_pane_g4

0x68ac,	// (0x000463e7) slider_set_pane_g5

0x6880,	// (0x000463bb) slider_set_pane_g6

0x1adc,	// (0x00041617) slider_set_pane_g7

0x63c8,	// (0x00045f03) slider_form_pane_g3

0x63d1,	// (0x00045f0c) slider_form_pane_g4

0x63d9,	// (0x00045f14) slider_form_pane_g5

0x63c8,	// (0x00045f03) slider_form_pane_g6

0xda8a,	// (0x0004d5c5) slider_form_pane_g7

0x6aa0,	// (0x000465db) slider_set_pane_vc_g3

0x6aa9,	// (0x000465e4) slider_set_pane_vc_g4

0x6ab2,	// (0x000465ed) slider_set_pane_vc_g5

0x6aa0,	// (0x000465db) slider_set_pane_vc_g6

0x6abb,	// (0x000465f6) slider_set_pane_vc_g7

0x6aa0,	// (0x000465db) slider_form_pane_vc_g1

0x6aa9,	// (0x000465e4) slider_form_pane_vc_g2

0x6ab2,	// (0x000465ed) slider_form_pane_vc_g3

0x6aa0,	// (0x000465db) slider_form_pane_vc_g4

0x6c70,	// (0x000467ab) slider_form_pane_vc_g5

0x0004,

0xfacf,	// (0x0004f60a) slider_form_pane_vc_g

0x2990,	// (0x000424cb) main_idle_act3_pane

0x85ee,	// (0x00048129) ai3_links_pane

0xe1af,	// (0x0004dcea) popup_ai3_data_window_ParamLimits

0xe1af,	// (0x0004dcea) popup_ai3_data_window

0x2990,	// (0x000424cb) grid_ai3_links_pane

0xe1cd,	// (0x0004dd08) cell_ai3_links_pane_ParamLimits

0xe1cd,	// (0x0004dd08) cell_ai3_links_pane

0x862f,	// (0x0004816a) bg_popup_sub_pane_cp11

0x863c,	// (0x00048177) cell_ai3_links_pane_g1

0x2990,	// (0x000424cb) bg_popup_sub_pane_cp12

0x8661,	// (0x0004819c) heading_ai3_data_pane

0x8669,	// (0x000481a4) list_ai3_gene_pane

0x8675,	// (0x000481b0) popup_ai3_data_window_g1

0x867d,	// (0x000481b8) heading_ai3_data_pane_g1

0x8685,	// (0x000481c0) heading_ai3_data_pane_t1

0x8693,	// (0x000481ce) list_double_ai3_gene_pane_ParamLimits

0x8693,	// (0x000481ce) list_double_ai3_gene_pane

0x86a0,	// (0x000481db) list_single_ai3_gene_pane_ParamLimits

0x86a0,	// (0x000481db) list_single_ai3_gene_pane

0x7438,	// (0x00046f73) list_highlight_pane_cp7_ParamLimits

0x7438,	// (0x00046f73) list_highlight_pane_cp7

0x86ad,	// (0x000481e8) list_single_a13_gene_pane_t1_ParamLimits

0x86ad,	// (0x000481e8) list_single_a13_gene_pane_t1

0x86c4,	// (0x000481ff) list_single_ai3_gene_pane_g1

0x86cd,	// (0x00048208) list_single_ai3_gene_pane_g2

0x0001,

0xfcfd,	// (0x0004f838) list_single_ai3_gene_pane_g

0x86d5,	// (0x00048210) list_double_ai3_gene_pane_g1_ParamLimits

0x86d5,	// (0x00048210) list_double_ai3_gene_pane_g1

0x86e1,	// (0x0004821c) list_double_ai3_gene_pane_t1_ParamLimits

0x86e1,	// (0x0004821c) list_double_ai3_gene_pane_t1

0x86fd,	// (0x00048238) list_double_ai3_gene_pane_t2_ParamLimits

0x86fd,	// (0x00048238) list_double_ai3_gene_pane_t2

0x8712,	// (0x0004824d) list_double_ai3_gene_pane_t3_ParamLimits

0x8712,	// (0x0004824d) list_double_ai3_gene_pane_t3

0x0002,

0xfd02,	// (0x0004f83d) list_double_ai3_gene_pane_t_ParamLimits

0xfd02,	// (0x0004f83d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0b87,	// (0x000406c2) aid_size_min_col_2

0xe199,	// (0x0004dcd4) aid_size_min_msg_ParamLimits

0xe199,	// (0x0004dcd4) aid_size_min_msg

0xdf4c,	// (0x0004da87) fep_vkb_top_text_pane_g2_ParamLimits

0xdf4c,	// (0x0004da87) fep_vkb_top_text_pane_g2

0x0001,

0xfb6e,	// (0x0004f6a9) fep_vkb_top_text_pane_g_ParamLimits

0xfb6e,	// (0x0004f6a9) fep_vkb_top_text_pane_g

0x2990,	// (0x000424cb) main_hc_apps_shell_pane

0x872f,	// (0x0004826a) grid_hc_apps_pane_ParamLimits

0x872f,	// (0x0004826a) grid_hc_apps_pane

0x873e,	// (0x00048279) list_hc_apps_pane

0x8746,	// (0x00048281) scroll_pane_cp37_ParamLimits

0x8746,	// (0x00048281) scroll_pane_cp37

0xe1e7,	// (0x0004dd22) cell_hc_apps_pane_ParamLimits

0xe1e7,	// (0x0004dd22) cell_hc_apps_pane

0xe2b1,	// (0x0004ddec) cell_hc_apps_pane_g1_ParamLimits

0xe2b1,	// (0x0004ddec) cell_hc_apps_pane_g1

0x883b,	// (0x00048376) cell_hc_apps_pane_g2_ParamLimits

0x883b,	// (0x00048376) cell_hc_apps_pane_g2

0x8857,	// (0x00048392) cell_hc_apps_pane_g3_ParamLimits

0x8857,	// (0x00048392) cell_hc_apps_pane_g3

0x0002,

0xfd09,	// (0x0004f844) cell_hc_apps_pane_g_ParamLimits

0xfd09,	// (0x0004f844) cell_hc_apps_pane_g

0xe2de,	// (0x0004de19) cell_hc_apps_pane_t1_ParamLimits

0xe2de,	// (0x0004de19) cell_hc_apps_pane_t1

0x2d0e,	// (0x00042849) grid_highlight_pane_cp10_ParamLimits

0x2d0e,	// (0x00042849) grid_highlight_pane_cp10

0xe31e,	// (0x0004de59) list_single_hc_apps_pane_ParamLimits

0xe31e,	// (0x0004de59) list_single_hc_apps_pane

0xe358,	// (0x0004de93) list_single_hc_apps_pane_g1

0xc20d,	// (0x0004bd48) list_single_hc_apps_pane_g2

0x0001,

0xfd10,	// (0x0004f84b) list_single_hc_apps_pane_g

0xc226,	// (0x0004bd61) list_single_hc_apps_pane_g2_copy1

0xb908,	// (0x0004b443) list_single_hc_apps_pane_t1

0x2a84,	// (0x000425bf) bg_set_opt_pane_cp_ParamLimits

0x1075,	// (0x00040bb0) setting_slider_pane_t1_ParamLimits

0x108b,	// (0x00040bc6) setting_slider_pane_t2_ParamLimits

0x10a5,	// (0x00040be0) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0004f0dd) setting_slider_pane_t_ParamLimits

0x10bd,	// (0x00040bf8) slider_set_pane_ParamLimits

0x16b7,	// (0x000411f2) control_pane_g5_ParamLimits

0x16b7,	// (0x000411f2) control_pane_g5

0x61e9,	// (0x00045d24) slider_set_pane_g1_ParamLimits

0x1ad0,	// (0x0004160b) slider_set_pane_g2_ParamLimits

0x6880,	// (0x000463bb) slider_set_pane_g3_ParamLimits

0x6894,	// (0x000463cf) slider_set_pane_g4_ParamLimits

0x68ac,	// (0x000463e7) slider_set_pane_g5_ParamLimits

0x6880,	// (0x000463bb) slider_set_pane_g6_ParamLimits

0x1adc,	// (0x00041617) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0004f4d8) slider_set_pane_g_ParamLimits

0x3de5,	// (0x00043920) navi_icon_text_pane_ParamLimits

0xd265,	// (0x0004cda0) aid_fill_nsta_2_ParamLimits

0xd29b,	// (0x0004cdd6) aid_touch_tab_arrow_left_ParamLimits

0xd2b1,	// (0x0004cdec) aid_touch_tab_arrow_right_ParamLimits

0xd34c,	// (0x0004ce87) clock_nsta_pane_ParamLimits

0xd7d9,	// (0x0004d314) navi_icon_pane_g1_ParamLimits

0xd7e5,	// (0x0004d320) navi_text_pane_t1_ParamLimits

0xdce2,	// (0x0004d81d) navi_icon_text_pane_g1_ParamLimits

0xdcee,	// (0x0004d829) navi_icon_text_pane_t1_ParamLimits

0xe358,	// (0x0004de93) list_single_hc_apps_pane_g1_ParamLimits

0xc20d,	// (0x0004bd48) list_single_hc_apps_pane_g2_ParamLimits

0xfd10,	// (0x0004f84b) list_single_hc_apps_pane_g_ParamLimits

0xc226,	// (0x0004bd61) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb908,	// (0x0004b443) list_single_hc_apps_pane_t1_ParamLimits

0xba8c,	// (0x0004b5c7) popup_toolbar2_fixed_window_ParamLimits

0xba8c,	// (0x0004b5c7) popup_toolbar2_fixed_window

0xd1ce,	// (0x0004cd09) popup_toolbar2_float_window

0x2990,	// (0x000424cb) bg_popup_sub_pane_cp27

0x8911,	// (0x0004844c) grid_toolbar2_float_pane

0x2990,	// (0x000424cb) bg_popup_sub_pane_cp26

0x8911,	// (0x0004844c) grid_toolbar2_fixed_pane

0xe371,	// (0x0004deac) cell_toolbar2_fixed_pane_ParamLimits

0xe371,	// (0x0004deac) cell_toolbar2_fixed_pane

0xe38e,	// (0x0004dec9) cell_toolbar2_fixed_pane_g1

0x8932,	// (0x0004846d) toolbar2_fixed_button_pane

0x4e2f,	// (0x0004496a) toolbar2_fixed_button_pane_g1

0x4e37,	// (0x00044972) toolbar2_fixed_button_pane_g2

0x4e3f,	// (0x0004497a) toolbar2_fixed_button_pane_g3

0x4e47,	// (0x00044982) toolbar2_fixed_button_pane_g4

0x4e4f,	// (0x0004498a) toolbar2_fixed_button_pane_g5

0x4e57,	// (0x00044992) toolbar2_fixed_button_pane_g6

0x4e5f,	// (0x0004499a) toolbar2_fixed_button_pane_g7

0x4e67,	// (0x000449a2) toolbar2_fixed_button_pane_g8

0x4e6f,	// (0x000449aa) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0004f3da) toolbar2_fixed_button_pane_g

0x893a,	// (0x00048475) cell_toolbar2_float_pane_ParamLimits

0x893a,	// (0x00048475) cell_toolbar2_float_pane

0x894b,	// (0x00048486) cell_toolbar2_float_pane_g1

0x8932,	// (0x0004846d) toolbar2_fixed_button_pane_cp

0xde34,	// (0x0004d96f) fep_vkb_accented_list_pane_ParamLimits

0xde34,	// (0x0004d96f) fep_vkb_accented_list_pane

0x1edc,	// (0x00041a17) bg_popup_fep_shadow_pane_g9

0x3f69,	// (0x00043aa4) bg_popup_fep_shadow_pane_cp3

0x3474,	// (0x00042faf) list_accented_list_pane

0x8954,	// (0x0004848f) list_single_accented_list_pane_ParamLimits

0x8954,	// (0x0004848f) list_single_accented_list_pane

0x3f69,	// (0x00043aa4) list_highlight_pane_cp10

0x8965,	// (0x000484a0) list_single_accented_list_pane_t1

0xd0ea,	// (0x0004cc25) popup_slider_window_ParamLimits

0xd0ea,	// (0x0004cc25) popup_slider_window

0x85ad,	// (0x000480e8) aid_indentation_list_msg

0xe499,	// (0x0004dfd4) bg_popup_window_pane_cp19

0x8a9f,	// (0x000485da) popup_slider_window_g1

0x8abb,	// (0x000485f6) popup_slider_window_g2

0x8ad7,	// (0x00048612) popup_slider_window_g3

0x0005,

0xfd15,	// (0x0004f850) popup_slider_window_g

0x8b33,	// (0x0004866e) popup_slider_window_t1

0x8ba7,	// (0x000486e2) small_volume_slider_vertical_pane

0x7473,	// (0x00046fae) small_volume_slider_vertical_pane_g1

0x7473,	// (0x00046fae) small_volume_slider_vertical_pane_g2

0x8bc3,	// (0x000486fe) small_volume_slider_vertical_pane_g3

0x0002,

0xfd27,	// (0x0004f862) small_volume_slider_vertical_pane_g

0xb9f6,	// (0x0004b531) area_side_right_pane_ParamLimits

0xb9f6,	// (0x0004b531) area_side_right_pane

0xc242,	// (0x0004bd7d) aid_size_side_button_ParamLimits

0xc242,	// (0x0004bd7d) aid_size_side_button

0xc25b,	// (0x0004bd96) grid_sctrl_middle_pane_ParamLimits

0xc25b,	// (0x0004bd96) grid_sctrl_middle_pane

0x2169,	// (0x00041ca4) sctrl_sk_bottom_pane

0x217a,	// (0x00041cb5) sctrl_sk_top_pane

0x218c,	// (0x00041cc7) aid_touch_sctrl_top

0x2d0e,	// (0x00042849) bg_sctrl_sk_pane_ParamLimits

0x2d0e,	// (0x00042849) bg_sctrl_sk_pane

0x2199,	// (0x00041cd4) sctrl_sk_top_pane_g1

0x21a6,	// (0x00041ce1) sctrl_sk_top_pane_t1

0x218c,	// (0x00041cc7) aid_touch_sctrl_bottom

0x2d0e,	// (0x00042849) bg_sctrl_sk_pane_cp_ParamLimits

0x2d0e,	// (0x00042849) bg_sctrl_sk_pane_cp

0x21c1,	// (0x00041cfc) sctrl_sk_bottom_pane_g1

0x21a6,	// (0x00041ce1) sctrl_sk_bottom_pane_t1

0xc275,	// (0x0004bdb0) cell_sctrl_middle_pane_ParamLimits

0xc275,	// (0x0004bdb0) cell_sctrl_middle_pane

0xc288,	// (0x0004bdc3) aid_touch_sctrl_middle_ParamLimits

0xc288,	// (0x0004bdc3) aid_touch_sctrl_middle

0xc295,	// (0x0004bdd0) bg_sctrl_middle_pane_ParamLimits

0xc295,	// (0x0004bdd0) bg_sctrl_middle_pane

0x8c4e,	// (0x00048789) cell_sctrl_middle_pane_g1_ParamLimits

0x8c4e,	// (0x00048789) cell_sctrl_middle_pane_g1

0xc2a3,	// (0x0004bdde) cell_sctrl_middle_pane_g2_ParamLimits

0xc2a3,	// (0x0004bdde) cell_sctrl_middle_pane_g2

0x0001,

0xfd33,	// (0x0004f86e) cell_sctrl_middle_pane_g_ParamLimits

0xfd33,	// (0x0004f86e) cell_sctrl_middle_pane_g

0x4e2f,	// (0x0004496a) bg_sctrl_middle_pane_g1

0x4e37,	// (0x00044972) bg_sctrl_middle_pane_g2

0x4e3f,	// (0x0004497a) bg_sctrl_middle_pane_g3

0x4e47,	// (0x00044982) bg_sctrl_middle_pane_g4

0x4e4f,	// (0x0004498a) bg_sctrl_middle_pane_g5

0x4e57,	// (0x00044992) bg_sctrl_middle_pane_g6

0x4e5f,	// (0x0004499a) bg_sctrl_middle_pane_g7

0x4e67,	// (0x000449a2) bg_sctrl_middle_pane_g8

0x0007,

0xfd38,	// (0x0004f873) bg_sctrl_middle_pane_g

0x4e6f,	// (0x000449aa) bg_sctrl_middle_pane_g8_copy1

0x4e2f,	// (0x0004496a) bg_sctrl_sk_pane_g1

0x4e37,	// (0x00044972) bg_sctrl_sk_pane_g2

0x4e3f,	// (0x0004497a) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0004f3da) bg_sctrl_sk_pane_g

0x323a,	// (0x00042d75) aid_size_touch_scroll_bar

0x4e47,	// (0x00044982) bg_sctrl_sk_pane_g4

0x4e4f,	// (0x0004498a) bg_sctrl_sk_pane_g5

0x4e57,	// (0x00044992) bg_sctrl_sk_pane_g6

0x4e5f,	// (0x0004499a) bg_sctrl_sk_pane_g7

0x4e67,	// (0x000449a2) bg_sctrl_sk_pane_g8

0x4e6f,	// (0x000449aa) bg_sctrl_sk_pane_g9

0x439d,	// (0x00043ed8) popup_fep_china_hwr2_fs_candidate_window

0xcba6,	// (0x0004c6e1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcba6,	// (0x0004c6e1) popup_fep_china_hwr2_fs_control_window

0x770b,	// (0x00047246) sctrl_sk_top_pane_g2

0x0001,

0xfd2e,	// (0x0004f869) sctrl_sk_top_pane_g

0xe551,	// (0x0004e08c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe551,	// (0x0004e08c) aid_fep_china_hwr2_fs_cell

0xe567,	// (0x0004e0a2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe567,	// (0x0004e0a2) bg_popup_fep_shadow_pane_cp4

0xe57e,	// (0x0004e0b9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe57e,	// (0x0004e0b9) bg_popup_fep_shadow_pane_cp5

0xe590,	// (0x0004e0cb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe590,	// (0x0004e0cb) popup_fep_china_hwr2_fs_control_bar_grid

0xe5a4,	// (0x0004e0df) popup_fep_china_hwr2_fs_control_funtion_grid

0x8c22,	// (0x0004875d) aid_fep_china_hwr2_fs_candi_cell

0x2990,	// (0x000424cb) bg_popup_fep_shadow_pane_cp6

0x8c2c,	// (0x00048767) popup_fep_china_hwr2_fs_candidate_grid

0xe5ac,	// (0x0004e0e7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe5ac,	// (0x0004e0e7) cell_fep_china_hwr2_fs_funtion_grid

0x7473,	// (0x00046fae) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8c4e,	// (0x00048789) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8c4e,	// (0x00048789) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8c5c,	// (0x00048797) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8c5c,	// (0x00048797) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd49,	// (0x0004f884) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd49,	// (0x0004f884) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5c4,	// (0x0004e0ff) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5c4,	// (0x0004e0ff) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5d9,	// (0x0004e114) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5d9,	// (0x0004e114) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4e,	// (0x0004f889) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4e,	// (0x0004f889) cell_fep_china_hwr2_fs_funtion_grid_t

0x8ca3,	// (0x000487de) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8cab,	// (0x000487e6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8cb3,	// (0x000487ee) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd53,	// (0x0004f88e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8cbb,	// (0x000487f6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8cbb,	// (0x000487f6) cell_fep_china_hwr2_fs_candidate_grid

0x8cda,	// (0x00048815) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ce2,	// (0x0004881d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7473,	// (0x00046fae) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7473,	// (0x00046fae) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb73,	// (0x0004f6ae) cell_fep_china_hwr2_fs_candidate_grid_g

0x8cea,	// (0x00048825) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4a0c,	// (0x00044547) clock_nsta_pane_cp_24_ParamLimits

0x4a0c,	// (0x00044547) clock_nsta_pane_cp_24

0x4a8c,	// (0x000445c7) indicator_nsta_pane_cp_24_ParamLimits

0x4a8c,	// (0x000445c7) indicator_nsta_pane_cp_24

0x5b27,	// (0x00045662) heading_pane_g1

0x0001,

0xf904,	// (0x0004f43f) heading_pane_g

0x65d7,	// (0x00046112) grid_sct_catagory_button_pane

0x6609,	// (0x00046144) scroll_pane_cp5_ParamLimits

0x70bc,	// (0x00046bf7) button_value_adjust_pane_cp5_ParamLimits

0x70bc,	// (0x00046bf7) button_value_adjust_pane_cp5

0x71a1,	// (0x00046cdc) form2_midp_time_pane_ParamLimits

0x8cf8,	// (0x00048833) cell_sct_catagory_button_pane_ParamLimits

0x8cf8,	// (0x00048833) cell_sct_catagory_button_pane

0x7438,	// (0x00046f73) bg_button_pane_cp01_ParamLimits

0x7438,	// (0x00046f73) bg_button_pane_cp01

0x7473,	// (0x00046fae) cell_sct_catagory_button_pane_g1

0xd16b,	// (0x0004cca6) popup_tb_extension_window

0xe5f5,	// (0x0004e130) aid_size_cell_ext_ParamLimits

0xe5f5,	// (0x0004e130) aid_size_cell_ext

0x307c,	// (0x00042bb7) bg_tb_trans_pane_cp1_ParamLimits

0x307c,	// (0x00042bb7) bg_tb_trans_pane_cp1

0xe61b,	// (0x0004e156) grid_tb_ext_pane_ParamLimits

0xe61b,	// (0x0004e156) grid_tb_ext_pane

0xe65b,	// (0x0004e196) cell_tb_ext_pane_ParamLimits

0xe65b,	// (0x0004e196) cell_tb_ext_pane

0xe685,	// (0x0004e1c0) cell_tb_ext_pane_g1_ParamLimits

0xe685,	// (0x0004e1c0) cell_tb_ext_pane_g1

0x8d8e,	// (0x000488c9) cell_tb_ext_pane_t1

0x2d0e,	// (0x00042849) list_highlight_pane_cp11_ParamLimits

0x2d0e,	// (0x00042849) list_highlight_pane_cp11

0x0f9e,	// (0x00040ad9) popup_uni_indicator_window_ParamLimits

0x0f9e,	// (0x00040ad9) popup_uni_indicator_window

0x330b,	// (0x00042e46) bg_popup_sub_pane_cp14

0x8da9,	// (0x000488e4) list_uniindi_pane

0x8db5,	// (0x000488f0) uniindi_top_pane

0x2d0e,	// (0x00042849) bg_uniindi_top_pane

0x8dd6,	// (0x00048911) uniindi_top_pane_g1

0x8dec,	// (0x00048927) uniindi_top_pane_g2

0x0003,

0xfd5a,	// (0x0004f895) uniindi_top_pane_g

0x8e16,	// (0x00048951) uniindi_top_pane_t1

0x8e42,	// (0x0004897d) list_single_uniindi_pane_ParamLimits

0x8e42,	// (0x0004897d) list_single_uniindi_pane

0x7473,	// (0x00046fae) bg_uniindi_top_pane_g1

0x8e54,	// (0x0004898f) list_single_uniindi_pane_g1

0x8e67,	// (0x000489a2) list_single_uniindi_pane_t1

0x2990,	// (0x000424cb) control_bg_pane

0x8e8c,	// (0x000489c7) bg_sctrl_sk_pane_cp1

0x8e95,	// (0x000489d0) bg_sctrl_sk_pane_cp2

0x8e9e,	// (0x000489d9) control_bg_pane_g1

0x8ea7,	// (0x000489e2) control_bg_pane_g2

0x0001,

0xfd63,	// (0x0004f89e) control_bg_pane_g

0x6f10,	// (0x00046a4b) cell_indicator_nsta_pane_g1_ParamLimits

0xdc3b,	// (0x0004d776) cell_indicator_nsta_pane_g2_ParamLimits

0xfae4,	// (0x0004f61f) cell_indicator_nsta_pane_g_ParamLimits

0x09e8,	// (0x00040523) form2_midp_time_pane_t1_ParamLimits

0x751f,	// (0x0004705a) main_idle_act4_pane_ParamLimits

0x751f,	// (0x0004705a) main_idle_act4_pane

0xd16b,	// (0x0004cca6) popup_tb_extension_window_ParamLimits

0xe643,	// (0x0004e17e) tb_ext_find_pane_ParamLimits

0xe643,	// (0x0004e17e) tb_ext_find_pane

0x8eb0,	// (0x000489eb) ai_gene_pane_1_cp1

0x40b2,	// (0x00043bed) ai_gene_pane_2_cp1

0x8eb8,	// (0x000489f3) list_single_idle_plugin_calendar_pane

0x8ec1,	// (0x000489fc) list_single_idle_plugin_notification_pane

0x8eca,	// (0x00048a05) list_single_idle_plugin_player_pane

0xe6a2,	// (0x0004e1dd) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6a2,	// (0x0004e1dd) list_single_idle_plugin_shortcut_pane

0xe6ca,	// (0x0004e205) main_idle_act4_pane_t1

0xe6e2,	// (0x0004e21d) main_idle_act4_pane_t2

0x0001,

0xfd68,	// (0x0004f8a3) main_idle_act4_pane_t

0xe6fa,	// (0x0004e235) middle_sk_idle_act4_pane_ParamLimits

0xe6fa,	// (0x0004e235) middle_sk_idle_act4_pane

0xe716,	// (0x0004e251) popup_clock_digital_analogue_window_cp2

0xe73d,	// (0x0004e278) shortcut_wheel_idle_act4_pane_ParamLimits

0xe73d,	// (0x0004e278) shortcut_wheel_idle_act4_pane

0x7473,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g1

0x7473,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g2

0x7473,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g3

0x7473,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g4

0x7473,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g5

0x8f5d,	// (0x00048a98) shortcut_wheel_idle_act4_pane_g6

0x8f65,	// (0x00048aa0) shortcut_wheel_idle_act4_pane_g7

0x8f6d,	// (0x00048aa8) shortcut_wheel_idle_act4_pane_g8

0x8f75,	// (0x00048ab0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6d,	// (0x0004f8a8) shortcut_wheel_idle_act4_pane_g

0xde0c,	// (0x0004d947) middle_sk_idle_act4_pane_g1_ParamLimits

0xde0c,	// (0x0004d947) middle_sk_idle_act4_pane_g1

0xe7ba,	// (0x0004e2f5) middle_sk_idle_act4_pane_g2_ParamLimits

0xe7ba,	// (0x0004e2f5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd90,	// (0x0004f8cb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd90,	// (0x0004f8cb) middle_sk_idle_act4_pane_g

0xe7d2,	// (0x0004e30d) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7d2,	// (0x0004e30d) middle_sk_idle_act4_pane_t1

0xe801,	// (0x0004e33c) grid_ai_shortcut_pane_ParamLimits

0xe801,	// (0x0004e33c) grid_ai_shortcut_pane

0xe81e,	// (0x0004e359) list_highlight_pane_cp16_ParamLimits

0xe81e,	// (0x0004e359) list_highlight_pane_cp16

0xe82b,	// (0x0004e366) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe82b,	// (0x0004e366) list_single_idle_plugin_shortcut_pane_g1

0xe837,	// (0x0004e372) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe837,	// (0x0004e372) list_single_idle_plugin_shortcut_pane_g2

0xe855,	// (0x0004e390) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe855,	// (0x0004e390) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd95,	// (0x0004f8d0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd95,	// (0x0004f8d0) list_single_idle_plugin_shortcut_pane_g

0xe86a,	// (0x0004e3a5) cell_ai_shortcut_pane_ParamLimits

0xe86a,	// (0x0004e3a5) cell_ai_shortcut_pane

0xe880,	// (0x0004e3bb) cell_ai_shortcut_pane_g1_ParamLimits

0xe880,	// (0x0004e3bb) cell_ai_shortcut_pane_g1

0x8eb0,	// (0x000489eb) ai_gene_pane_1_cp2

0x90a6,	// (0x00048be1) ai_gene_pane_2_cp2

0x90ae,	// (0x00048be9) list_highlight_pane_cp15

0x90b7,	// (0x00048bf2) list_single_idle_plugin_calendar_pane_g1

0x90ae,	// (0x00048be9) list_highlight_pane_cp17

0x90bf,	// (0x00048bfa) list_single_idle_plugin_calendar_pane_g1_copy1

0x90c7,	// (0x00048c02) list_single_idle_plugin_player_pane_g1

0x683e,	// (0x00046379) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd9c,	// (0x0004f8d7) list_single_idle_plugin_player_pane_g

0x90cf,	// (0x00048c0a) list_single_idle_plugin_player_pane_t1

0x90dd,	// (0x00048c18) list_single_idle_plugin_player_pane_t2

0x90eb,	// (0x00048c26) list_single_idle_plugin_player_pane_t3

0x90f9,	// (0x00048c34) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda1,	// (0x0004f8dc) list_single_idle_plugin_player_pane_t

0x9107,	// (0x00048c42) wait_bar_pane_cp15

0x910f,	// (0x00048c4a) grid_ai_notification_pane

0x683e,	// (0x00046379) list_single_idle_plugin_notification_pane_g1

0xe8a2,	// (0x0004e3dd) cell_ai_notification_pane_ParamLimits

0xe8a2,	// (0x0004e3dd) cell_ai_notification_pane

0x9125,	// (0x00048c60) cell_ai_notification_pane_g1

0x912d,	// (0x00048c68) cell_ai_notification_pane_t1

0xe8af,	// (0x0004e3ea) tb_ext_find_button_pane

0xe8b7,	// (0x0004e3f2) tb_ext_find_pane_g1

0xe8bf,	// (0x0004e3fa) tb_ext_find_pane_t1

0x397b,	// (0x000434b6) tb_ext_find_button_pane_g1

0x9159,	// (0x00048c94) tb_ext_find_button_pane_g2

0x0001,

0xfdaa,	// (0x0004f8e5) tb_ext_find_button_pane_g

0xe6ca,	// (0x0004e205) main_idle_act4_pane_t1_ParamLimits

0xe6e2,	// (0x0004e21d) main_idle_act4_pane_t2_ParamLimits

0xfd68,	// (0x0004f8a3) main_idle_act4_pane_t_ParamLimits

0xe716,	// (0x0004e251) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe72d,	// (0x0004e268) sat_plugin_idle_act4_pane_ParamLimits

0xe72d,	// (0x0004e268) sat_plugin_idle_act4_pane

0xe8cd,	// (0x0004e408) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8cd,	// (0x0004e408) sat_plugin_idle_act4_pane_t1

0xe8e5,	// (0x0004e420) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8e5,	// (0x0004e420) sat_plugin_idle_act4_pane_t2

0xe8fd,	// (0x0004e438) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe8fd,	// (0x0004e438) sat_plugin_idle_act4_pane_t3

0xe915,	// (0x0004e450) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe915,	// (0x0004e450) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdaf,	// (0x0004f8ea) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdaf,	// (0x0004f8ea) sat_plugin_idle_act4_pane_t

0x0ecf,	// (0x00040a0a) popup_battery_window_ParamLimits

0x0ecf,	// (0x00040a0a) popup_battery_window

0x2d0e,	// (0x00042849) bg_popup_sub_pane_cp25_ParamLimits

0x2d0e,	// (0x00042849) bg_popup_sub_pane_cp25

0x91ae,	// (0x00048ce9) popup_battery_window_g1_ParamLimits

0x91ae,	// (0x00048ce9) popup_battery_window_g1

0x91ba,	// (0x00048cf5) popup_battery_window_t1_ParamLimits

0x91ba,	// (0x00048cf5) popup_battery_window_t1

0x91cc,	// (0x00048d07) popup_battery_window_t2_ParamLimits

0x91cc,	// (0x00048d07) popup_battery_window_t2

0x0001,

0xfdb8,	// (0x0004f8f3) popup_battery_window_t_ParamLimits

0xfdb8,	// (0x0004f8f3) popup_battery_window_t

0xca3a,	// (0x0004c575) midp_canvas_pane_ParamLimits

0xca95,	// (0x0004c5d0) midp_keypad_pane_ParamLimits

0xca95,	// (0x0004c5d0) midp_keypad_pane

0x42f3,	// (0x00043e2e) main_midp_pane_ParamLimits

0x6f69,	// (0x00046aa4) signal_pane_g2_cp_ParamLimits

0xe92d,	// (0x0004e468) aid_size_cell_midp_keypad_ParamLimits

0xe92d,	// (0x0004e468) aid_size_cell_midp_keypad

0xe94b,	// (0x0004e486) midp_keyp_game_grid_pane_ParamLimits

0xe94b,	// (0x0004e486) midp_keyp_game_grid_pane

0xe972,	// (0x0004e4ad) midp_keyp_rocker_pane_ParamLimits

0xe972,	// (0x0004e4ad) midp_keyp_rocker_pane

0xe9b7,	// (0x0004e4f2) midp_keyp_sk_left_pane_ParamLimits

0xe9b7,	// (0x0004e4f2) midp_keyp_sk_left_pane

0xea0b,	// (0x0004e546) midp_keyp_sk_right_pane_ParamLimits

0xea0b,	// (0x0004e546) midp_keyp_sk_right_pane

0x2990,	// (0x000424cb) bg_button_pane_cp03

0xea5f,	// (0x0004e59a) midp_keyp_sk_left_pane_g1

0x2990,	// (0x000424cb) bg_button_pane_cp04

0xea5f,	// (0x0004e59a) midp_keyp_sk_right_pane_g1

0x7473,	// (0x00046fae) midp_keyp_rocker_pane_g1

0xea68,	// (0x0004e5a3) keyp_game_cell_pane_ParamLimits

0xea68,	// (0x0004e5a3) keyp_game_cell_pane

0x2990,	// (0x000424cb) bg_button_pane_cp02

0xea8e,	// (0x0004e5c9) keyp_game_cell_pane_g1

0xba38,	// (0x0004b573) popup_fep_vkb2_window_ParamLimits

0xba38,	// (0x0004b573) popup_fep_vkb2_window

0xc2af,	// (0x0004bdea) aid_size_cell_vkb2_ParamLimits

0xc2af,	// (0x0004bdea) aid_size_cell_vkb2

0xc2dd,	// (0x0004be18) popup_fep_vkb2_window_g1_ParamLimits

0xc2dd,	// (0x0004be18) popup_fep_vkb2_window_g1

0xc32d,	// (0x0004be68) vkb2_area_bottom_pane_ParamLimits

0xc32d,	// (0x0004be68) vkb2_area_bottom_pane

0xc389,	// (0x0004bec4) vkb2_area_keypad_pane_ParamLimits

0xc389,	// (0x0004bec4) vkb2_area_keypad_pane

0xc3d7,	// (0x0004bf12) vkb2_area_top_pane_ParamLimits

0xc3d7,	// (0x0004bf12) vkb2_area_top_pane

0xc45d,	// (0x0004bf98) vkb2_top_entry_pane_ParamLimits

0xc45d,	// (0x0004bf98) vkb2_top_entry_pane

0xc48a,	// (0x0004bfc5) vkb2_top_grid_left_pane_ParamLimits

0xc48a,	// (0x0004bfc5) vkb2_top_grid_left_pane

0xc4aa,	// (0x0004bfe5) vkb2_top_grid_right_pane_ParamLimits

0xc4aa,	// (0x0004bfe5) vkb2_top_grid_right_pane

0x2429,	// (0x00041f64) vkb2_cell_keypad_pane_ParamLimits

0x2429,	// (0x00041f64) vkb2_cell_keypad_pane

0xc4f0,	// (0x0004c02b) vkb2_area_bottom_grid_pane_ParamLimits

0xc4f0,	// (0x0004c02b) vkb2_area_bottom_grid_pane

0xc51a,	// (0x0004c055) vkb2_area_bottom_pane_g1_ParamLimits

0xc51a,	// (0x0004c055) vkb2_area_bottom_pane_g1

0xc540,	// (0x0004c07b) vkb2_area_bottom_pane_g2_ParamLimits

0xc540,	// (0x0004c07b) vkb2_area_bottom_pane_g2

0xc571,	// (0x0004c0ac) vkb2_area_bottom_pane_g3_ParamLimits

0xc571,	// (0x0004c0ac) vkb2_area_bottom_pane_g3

0x0002,

0xfdbd,	// (0x0004f8f8) vkb2_area_bottom_pane_g_ParamLimits

0xfdbd,	// (0x0004f8f8) vkb2_area_bottom_pane_g

0x25b8,	// (0x000420f3) vkb2_top_cell_left_pane_ParamLimits

0x25b8,	// (0x000420f3) vkb2_top_cell_left_pane

0xea97,	// (0x0004e5d2) vkb2_top_entry_pane_g1_ParamLimits

0xea97,	// (0x0004e5d2) vkb2_top_entry_pane_g1

0xeaa5,	// (0x0004e5e0) vkb2_top_entry_pane_t1_ParamLimits

0xeaa5,	// (0x0004e5e0) vkb2_top_entry_pane_t1

0x9359,	// (0x00048e94) vkb2_top_entry_pane_t2_ParamLimits

0x9359,	// (0x00048e94) vkb2_top_entry_pane_t2

0x9371,	// (0x00048eac) vkb2_top_entry_pane_t3_ParamLimits

0x9371,	// (0x00048eac) vkb2_top_entry_pane_t3

0x0002,

0xfdc4,	// (0x0004f8ff) vkb2_top_entry_pane_t_ParamLimits

0xfdc4,	// (0x0004f8ff) vkb2_top_entry_pane_t

0xc5db,	// (0x0004c116) vkb2_top_grid_right_pane_g1_ParamLimits

0xc5db,	// (0x0004c116) vkb2_top_grid_right_pane_g1

0x261b,	// (0x00042156) vkb2_top_grid_right_pane_g2_ParamLimits

0x261b,	// (0x00042156) vkb2_top_grid_right_pane_g2

0x2633,	// (0x0004216e) vkb2_top_grid_right_pane_g3_ParamLimits

0x2633,	// (0x0004216e) vkb2_top_grid_right_pane_g3

0xc5f1,	// (0x0004c12c) vkb2_top_grid_right_pane_g4_ParamLimits

0xc5f1,	// (0x0004c12c) vkb2_top_grid_right_pane_g4

0x0003,

0xfdcb,	// (0x0004f906) vkb2_top_grid_right_pane_g_ParamLimits

0xfdcb,	// (0x0004f906) vkb2_top_grid_right_pane_g

0x2661,	// (0x0004219c) vkb2_top_cell_left_pane_g1

0x2678,	// (0x000421b3) vkb2_cell_keypad_pane_g1_ParamLimits

0x2678,	// (0x000421b3) vkb2_cell_keypad_pane_g1

0x9387,	// (0x00048ec2) vkb2_cell_keypad_pane_t1_ParamLimits

0x9387,	// (0x00048ec2) vkb2_cell_keypad_pane_t1

0x269c,	// (0x000421d7) vkb2_cell_bottom_grid_pane_ParamLimits

0x269c,	// (0x000421d7) vkb2_cell_bottom_grid_pane

0x26d5,	// (0x00042210) vkb2_cell_bottom_grid_pane_g1

0xe75e,	// (0x0004e299) aid_call2_pane_cp02

0xe766,	// (0x0004e2a1) aid_call_pane_cp02

0xe76e,	// (0x0004e2a9) clock_digital_number_pane_cp10

0xe776,	// (0x0004e2b1) clock_digital_number_pane_cp11

0xe77e,	// (0x0004e2b9) clock_digital_number_pane_cp12

0xe786,	// (0x0004e2c1) clock_digital_number_pane_cp13

0xe78e,	// (0x0004e2c9) clock_digital_separator_pane_cp10

0x397b,	// (0x000434b6) popup_clock_digital_analogue_window_cp2_g1

0x397b,	// (0x000434b6) popup_clock_digital_analogue_window_cp2_g2

0xe796,	// (0x0004e2d1) popup_clock_digital_analogue_window_cp2_g3

0x397b,	// (0x000434b6) popup_clock_digital_analogue_window_cp2_g4

0xe796,	// (0x0004e2d1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd80,	// (0x0004f8bb) popup_clock_digital_analogue_window_cp2_g

0xe79e,	// (0x0004e2d9) popup_clock_digital_analogue_window_cp2_t1

0xe7ac,	// (0x0004e2e7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8b,	// (0x0004f8c6) popup_clock_digital_analogue_window_cp2_t

0x7473,	// (0x00046fae) clock_digital_number_pane_cp10_g1

0x7473,	// (0x00046fae) clock_digital_number_pane_cp10_g2

0x0001,

0xfb73,	// (0x0004f6ae) clock_digital_number_pane_cp10_g

0x7473,	// (0x00046fae) clock_digital_separator_pane_cp10_g1

0x7473,	// (0x00046fae) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb73,	// (0x0004f6ae) clock_digital_separator_pane_cp10_g

0x8df8,	// (0x00048933) uniindi_top_pane_g3

0x8e09,	// (0x00048944) uniindi_top_pane_g4

0x2499,	// (0x00041fd4) vkb2_row_keypad_pane_ParamLimits

0x2499,	// (0x00041fd4) vkb2_row_keypad_pane

0x26f1,	// (0x0004222c) vkb2_cell_t_keypad_pane_ParamLimits

0x26f1,	// (0x0004222c) vkb2_cell_t_keypad_pane

0x2701,	// (0x0004223c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2701,	// (0x0004223c) vkb2_cell_t_keypad_pane_cp08

0x2716,	// (0x00042251) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2716,	// (0x00042251) vkb2_cell_t_keypad_pane_cp09

0x272a,	// (0x00042265) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x272a,	// (0x00042265) vkb2_cell_t_keypad_pane_cp01

0x273b,	// (0x00042276) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x273b,	// (0x00042276) vkb2_cell_t_keypad_pane_cp02

0x274c,	// (0x00042287) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x274c,	// (0x00042287) vkb2_cell_t_keypad_pane_cp03

0x275d,	// (0x00042298) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x275d,	// (0x00042298) vkb2_cell_t_keypad_pane_cp04

0x276e,	// (0x000422a9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x276e,	// (0x000422a9) vkb2_cell_t_keypad_pane_cp05

0x277f,	// (0x000422ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x277f,	// (0x000422ba) vkb2_cell_t_keypad_pane_cp06

0x2792,	// (0x000422cd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2792,	// (0x000422cd) vkb2_cell_t_keypad_pane_cp07

0x27a7,	// (0x000422e2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x27a7,	// (0x000422e2) vkb2_cell_t_keypad_pane_cp10

0x770b,	// (0x00047246) vkb2_cell_t_keypad_pane_g1

0x939e,	// (0x00048ed9) vkb2_cell_t_keypad_pane_t1

0x2990,	// (0x000424cb) popup_grid_graphic2_window

0xeade,	// (0x0004e619) aid_size_cell_graphic2_ParamLimits

0xeade,	// (0x0004e619) aid_size_cell_graphic2

0x54a4,	// (0x00044fdf) bg_popup_window_pane_cp21_ParamLimits

0x54a4,	// (0x00044fdf) bg_popup_window_pane_cp21

0xeb10,	// (0x0004e64b) graphic2_pages_pane_ParamLimits

0xeb10,	// (0x0004e64b) graphic2_pages_pane

0xeb68,	// (0x0004e6a3) grid_graphic2_control_pane_ParamLimits

0xeb68,	// (0x0004e6a3) grid_graphic2_control_pane

0xeb9c,	// (0x0004e6d7) grid_graphic2_pane_ParamLimits

0xeb9c,	// (0x0004e6d7) grid_graphic2_pane

0xec13,	// (0x0004e74e) cell_graphic2_pane

0x2990,	// (0x000424cb) main_comp_mode_pane

0x8669,	// (0x000481a4) list_ai3_gene_pane_ParamLimits

0xe499,	// (0x0004dfd4) bg_popup_window_pane_cp19_ParamLimits

0x8a3d,	// (0x00048578) bg_touch_area_indi_pane_ParamLimits

0x8a3d,	// (0x00048578) bg_touch_area_indi_pane

0x8a53,	// (0x0004858e) bg_touch_area_indi_pane_cp01_ParamLimits

0x8a53,	// (0x0004858e) bg_touch_area_indi_pane_cp01

0x8a6b,	// (0x000485a6) bg_touch_area_indi_pane_cp02_ParamLimits

0x8a6b,	// (0x000485a6) bg_touch_area_indi_pane_cp02

0x8a85,	// (0x000485c0) bg_touch_area_indi_pane_cp03_ParamLimits

0x8a85,	// (0x000485c0) bg_touch_area_indi_pane_cp03

0x8a9f,	// (0x000485da) popup_slider_window_g1_ParamLimits

0x8abb,	// (0x000485f6) popup_slider_window_g2_ParamLimits

0x8ad7,	// (0x00048612) popup_slider_window_g3_ParamLimits

0xfd15,	// (0x0004f850) popup_slider_window_g_ParamLimits

0x8b33,	// (0x0004866e) popup_slider_window_t1_ParamLimits

0x8ba7,	// (0x000486e2) small_volume_slider_vertical_pane_ParamLimits

0xec13,	// (0x0004e74e) cell_graphic2_pane_ParamLimits

0xec76,	// (0x0004e7b1) bg_button_pane_cp10_ParamLimits

0xec76,	// (0x0004e7b1) bg_button_pane_cp10

0xec89,	// (0x0004e7c4) bg_button_pane_cp11_ParamLimits

0xec89,	// (0x0004e7c4) bg_button_pane_cp11

0xec9c,	// (0x0004e7d7) graphic2_pages_pane_g1_ParamLimits

0xec9c,	// (0x0004e7d7) graphic2_pages_pane_g1

0xecb7,	// (0x0004e7f2) graphic2_pages_pane_g2_ParamLimits

0xecb7,	// (0x0004e7f2) graphic2_pages_pane_g2

0x0001,

0xfdd9,	// (0x0004f914) graphic2_pages_pane_g_ParamLimits

0xfdd9,	// (0x0004f914) graphic2_pages_pane_g

0xeccf,	// (0x0004e80a) graphic2_pages_pane_t1_ParamLimits

0xeccf,	// (0x0004e80a) graphic2_pages_pane_t1

0xece7,	// (0x0004e822) cell_graphic2_control_pane_ParamLimits

0xece7,	// (0x0004e822) cell_graphic2_control_pane

0xed01,	// (0x0004e83c) cell_graphic2_pane_g1_ParamLimits

0xed01,	// (0x0004e83c) cell_graphic2_pane_g1

0xde1a,	// (0x0004d955) cell_graphic2_pane_g2_ParamLimits

0xde1a,	// (0x0004d955) cell_graphic2_pane_g2

0xed0e,	// (0x0004e849) cell_graphic2_pane_g3_ParamLimits

0xed0e,	// (0x0004e849) cell_graphic2_pane_g3

0xde27,	// (0x0004d962) cell_graphic2_pane_g4_ParamLimits

0xde27,	// (0x0004d962) cell_graphic2_pane_g4

0xed1b,	// (0x0004e856) cell_graphic2_pane_g5_ParamLimits

0xed1b,	// (0x0004e856) cell_graphic2_pane_g5

0x0004,

0xfdde,	// (0x0004f919) cell_graphic2_pane_g_ParamLimits

0xfdde,	// (0x0004f919) cell_graphic2_pane_g

0xed3b,	// (0x0004e876) cell_graphic2_pane_t1_ParamLimits

0xed3b,	// (0x0004e876) cell_graphic2_pane_t1

0x5b1b,	// (0x00045656) grid_highlight_pane_cp11_ParamLimits

0x5b1b,	// (0x00045656) grid_highlight_pane_cp11

0x330b,	// (0x00042e46) bg_button_pane_cp05

0xed52,	// (0x0004e88d) cell_graphic2_control_pane_g1

0x7473,	// (0x00046fae) bg_touch_area_indi_pane_g1

0x9606,	// (0x00049141) aid_cmod_rocker_key_size

0x9610,	// (0x0004914b) aid_cmode_itu_key_size

0x961a,	// (0x00049155) main_cmode_video_pane

0x9624,	// (0x0004915f) main_comp_mode_itu_pane

0x9630,	// (0x0004916b) main_comp_mode_rocker_pane

0x963c,	// (0x00049177) cell_cmode_rocker_pane_ParamLimits

0x963c,	// (0x00049177) cell_cmode_rocker_pane

0x9650,	// (0x0004918b) cell_cmode_itu_pane_ParamLimits

0x9650,	// (0x0004918b) cell_cmode_itu_pane

0x330b,	// (0x00042e46) bg_button_pane_cp06_ParamLimits

0x330b,	// (0x00042e46) bg_button_pane_cp06

0x770b,	// (0x00047246) cell_cmode_rocker_pane_g1_ParamLimits

0x770b,	// (0x00047246) cell_cmode_rocker_pane_g1

0x8c4e,	// (0x00048789) cell_cmode_rocker_pane_g2_ParamLimits

0x8c4e,	// (0x00048789) cell_cmode_rocker_pane_g2

0x0001,

0xfde9,	// (0x0004f924) cell_cmode_rocker_pane_g_ParamLimits

0xfde9,	// (0x0004f924) cell_cmode_rocker_pane_g

0x2990,	// (0x000424cb) bg_button_pane_cp07

0x9667,	// (0x000491a2) cell_cmode_itu_pane_g1

0x9670,	// (0x000491ab) cell_cmode_itu_pane_t1

0x967e,	// (0x000491b9) cell_cmode_itu_pane_t2

0x0001,

0xfdee,	// (0x0004f929) cell_cmode_itu_pane_t

0x8e7c,	// (0x000489b7) aid_touch_ctrl_left

0x8e84,	// (0x000489bf) aid_touch_ctrl_right

0x2990,	// (0x000424cb) compa_mode_pane

0xed5f,	// (0x0004e89a) aid_cmod_rocker_key_size_cp

0xed69,	// (0x0004e8a4) aid_cmode_itu_key_size_cp

0x96a0,	// (0x000491db) compa_mode_pane_g1

0x96a8,	// (0x000491e3) compa_mode_pane_g2

0x96b0,	// (0x000491eb) compa_mode_pane_g3

0x0002,

0xfdf3,	// (0x0004f92e) compa_mode_pane_g

0xed73,	// (0x0004e8ae) main_comp_mode_itu_pane_cp

0xed7b,	// (0x0004e8b6) main_comp_mode_rocker_pane_cp

0xed83,	// (0x0004e8be) cell_cmode_itu_pane_cp_ParamLimits

0xed83,	// (0x0004e8be) cell_cmode_itu_pane_cp

0xed98,	// (0x0004e8d3) cell_cmode_rocker_pane_cp_ParamLimits

0xed98,	// (0x0004e8d3) cell_cmode_rocker_pane_cp

0x330b,	// (0x00042e46) bg_button_pane_cp06_cp_ParamLimits

0x330b,	// (0x00042e46) bg_button_pane_cp06_cp

0x770b,	// (0x00047246) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x770b,	// (0x00047246) cell_cmode_rocker_pane_g1_cp

0x7473,	// (0x00046fae) cell_cmode_rocker_pane_g2_cp

0x2990,	// (0x000424cb) bg_button_pane_cp07_cp

0xedaa,	// (0x0004e8e5) cell_cmode_itu_pane_g1_cp

0xedb3,	// (0x0004e8ee) cell_cmode_itu_pane_t1_cp

0xedb3,	// (0x0004e8ee) cell_cmode_itu_pane_t2_cp

0xda82,	// (0x0004d5bd) settings_code_pane_cp2

0x2a84,	// (0x000425bf) bg_popup_window_pane_cp3_ParamLimits

0x2efc,	// (0x00042a37) heading_pane_cp3_ParamLimits

0x2f08,	// (0x00042a43) listscroll_popup_graphic_pane_ParamLimits

0x1caa,	// (0x000417e5) fep_hwr_aid_pane_ParamLimits

0x218c,	// (0x00041cc7) aid_touch_sctrl_top_ParamLimits

0x2199,	// (0x00041cd4) sctrl_sk_top_pane_g1_ParamLimits

0x770b,	// (0x00047246) sctrl_sk_top_pane_g2_ParamLimits

0xfd2e,	// (0x0004f869) sctrl_sk_top_pane_g_ParamLimits

0x21a6,	// (0x00041ce1) sctrl_sk_top_pane_t1_ParamLimits

0x218c,	// (0x00041cc7) aid_touch_sctrl_bottom_ParamLimits

0x21a6,	// (0x00041ce1) sctrl_sk_bottom_pane_t1_ParamLimits

0x8dc2,	// (0x000488fd) aid_area_touch_clock

0xc41f,	// (0x0004bf5a) aid_vkb2_area_top_pane_cell_ParamLimits

0xc41f,	// (0x0004bf5a) aid_vkb2_area_top_pane_cell

0xc4ca,	// (0x0004c005) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc4ca,	// (0x0004c005) aid_vkb2_area_bottom_pane_cell

0x932b,	// (0x00048e66) popup_char_count_window

0x9706,	// (0x00049241) popup_char_count_window_g1

0x970f,	// (0x0004924a) popup_char_count_window_g2

0x9718,	// (0x00049253) popup_char_count_window_g3

0x0002,

0xfdfa,	// (0x0004f935) popup_char_count_window_g

0x9721,	// (0x0004925c) popup_char_count_window_t1

0x2245,	// (0x00041d80) popup_fep_char_preview_window_ParamLimits

0x2245,	// (0x00041d80) popup_fep_char_preview_window

0xc43f,	// (0x0004bf7a) vkb2_top_candi_pane_ParamLimits

0xc43f,	// (0x0004bf7a) vkb2_top_candi_pane

0xedc1,	// (0x0004e8fc) cell_vkb2_top_candi_pane_ParamLimits

0xedc1,	// (0x0004e8fc) cell_vkb2_top_candi_pane

0x54a4,	// (0x00044fdf) bg_popup_fep_char_preview_window_ParamLimits

0x54a4,	// (0x00044fdf) bg_popup_fep_char_preview_window

0x27bc,	// (0x000422f7) popup_fep_char_preview_window_t1_ParamLimits

0x27bc,	// (0x000422f7) popup_fep_char_preview_window_t1

0x9780,	// (0x000492bb) bg_popup_fep_char_preview_window_g1

0x9788,	// (0x000492c3) bg_popup_fep_char_preview_window_g2

0x9790,	// (0x000492cb) bg_popup_fep_char_preview_window_g3

0x9798,	// (0x000492d3) bg_popup_fep_char_preview_window_g4

0x97a0,	// (0x000492db) bg_popup_fep_char_preview_window_g5

0x27f6,	// (0x00042331) bg_popup_fep_char_preview_window_g6

0x97a8,	// (0x000492e3) bg_popup_fep_char_preview_window_g7

0x97b0,	// (0x000492eb) bg_popup_fep_char_preview_window_g8

0x97b8,	// (0x000492f3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe01,	// (0x0004f93c) bg_popup_fep_char_preview_window_g

0x770b,	// (0x00047246) cell_vkb2_top_candi_pane_g1_ParamLimits

0x770b,	// (0x00047246) cell_vkb2_top_candi_pane_g1

0x7a4c,	// (0x00047587) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7a4c,	// (0x00047587) cell_vkb2_top_candi_pane_g2

0x7a6d,	// (0x000475a8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7a6d,	// (0x000475a8) cell_vkb2_top_candi_pane_g3

0x27fe,	// (0x00042339) cell_vkb2_top_candi_pane_g4_ParamLimits

0x27fe,	// (0x00042339) cell_vkb2_top_candi_pane_g4

0x97c0,	// (0x000492fb) cell_vkb2_top_candi_pane_g5_ParamLimits

0x97c0,	// (0x000492fb) cell_vkb2_top_candi_pane_g5

0x8c4e,	// (0x00048789) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8c4e,	// (0x00048789) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe14,	// (0x0004f94f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe14,	// (0x0004f94f) cell_vkb2_top_candi_pane_g

0x281f,	// (0x0004235a) cell_vkb2_top_candi_pane_t1

0x1abc,	// (0x000415f7) aid_size_touch_slider_mark_ParamLimits

0x1abc,	// (0x000415f7) aid_size_touch_slider_mark

0xeb4c,	// (0x0004e687) grid_graphic2_catg_pane_ParamLimits

0xeb4c,	// (0x0004e687) grid_graphic2_catg_pane

0xebe2,	// (0x0004e71d) popup_grid_graphic2_window_t1_ParamLimits

0xebe2,	// (0x0004e71d) popup_grid_graphic2_window_t1

0xebf8,	// (0x0004e733) popup_grid_graphic2_window_t2_ParamLimits

0xebf8,	// (0x0004e733) popup_grid_graphic2_window_t2

0x0001,

0xfdd4,	// (0x0004f90f) popup_grid_graphic2_window_t_ParamLimits

0xfdd4,	// (0x0004f90f) popup_grid_graphic2_window_t

0x330b,	// (0x00042e46) bg_button_pane_cp05_ParamLimits

0xed52,	// (0x0004e88d) cell_graphic2_control_pane_g1_ParamLimits

0xee15,	// (0x0004e950) cell_graphic2_catg_pane_ParamLimits

0xee15,	// (0x0004e950) cell_graphic2_catg_pane

0x2990,	// (0x000424cb) bg_button_pane_cp12

0xee27,	// (0x0004e962) cell_graphic2_catg_pane_g1

0x8d8e,	// (0x000488c9) cell_tb_ext_pane_t1_ParamLimits

0x25d8,	// (0x00042113) vkb2_top_cell_right_narrow_pane_ParamLimits

0x25d8,	// (0x00042113) vkb2_top_cell_right_narrow_pane

0x25f0,	// (0x0004212b) vkb2_top_cell_right_wide_pane_ParamLimits

0x25f0,	// (0x0004212b) vkb2_top_cell_right_wide_pane

0x751f,	// (0x0004705a) bg_vkb2_func_pane_ParamLimits

0x751f,	// (0x0004705a) bg_vkb2_func_pane

0x2661,	// (0x0004219c) vkb2_top_cell_left_pane_g1_ParamLimits

0x751f,	// (0x0004705a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x751f,	// (0x0004705a) bg_vkb2_fuc_pane_cp03

0x26d5,	// (0x00042210) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4e37,	// (0x00044972) bg_vkb2_func_pane_g1

0x4e3f,	// (0x0004497a) bg_vkb2_func_pane_g2

0x4e4f,	// (0x0004498a) bg_vkb2_func_pane_g3

0x4e47,	// (0x00044982) bg_vkb2_func_pane_g4

0x4e57,	// (0x00044992) bg_vkb2_func_pane_g5

0x4e5f,	// (0x0004499a) bg_vkb2_func_pane_g6

0x4e67,	// (0x000449a2) bg_vkb2_func_pane_g7

0x4e6f,	// (0x000449aa) bg_vkb2_func_pane_g8

0x4e2f,	// (0x0004496a) bg_vkb2_func_pane_g9

0x0008,

0xfe21,	// (0x0004f95c) bg_vkb2_func_pane_g

0x751f,	// (0x0004705a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x751f,	// (0x0004705a) bg_vkb2_fuc_pane_cp01

0x2661,	// (0x0004219c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2661,	// (0x0004219c) vkb2_top_cell_right_wide_pane_g1

0x751f,	// (0x0004705a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x751f,	// (0x0004705a) bg_vkb2_fuc_pane_cp02

0x26d5,	// (0x00042210) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x26d5,	// (0x00042210) vkb2_top_cell_right_narrow_pane_g1

0xe3d3,	// (0x0004df0e) aid_touch_area_decrease_ParamLimits

0xe3d3,	// (0x0004df0e) aid_touch_area_decrease

0xe40d,	// (0x0004df48) aid_touch_area_increase_ParamLimits

0xe40d,	// (0x0004df48) aid_touch_area_increase

0xe435,	// (0x0004df70) aid_touch_area_mute_ParamLimits

0xe435,	// (0x0004df70) aid_touch_area_mute

0xe465,	// (0x0004dfa0) aid_touch_area_slider_ParamLimits

0xe465,	// (0x0004dfa0) aid_touch_area_slider

0xe4a5,	// (0x0004dfe0) popup_slider_window_g4_ParamLimits

0xe4a5,	// (0x0004dfe0) popup_slider_window_g4

0xe4cd,	// (0x0004e008) popup_slider_window_g5_ParamLimits

0xe4cd,	// (0x0004e008) popup_slider_window_g5

0xe501,	// (0x0004e03c) popup_slider_window_g6_ParamLimits

0xe501,	// (0x0004e03c) popup_slider_window_g6

0x8b61,	// (0x0004869c) popup_slider_window_t2_ParamLimits

0x8b61,	// (0x0004869c) popup_slider_window_t2

0x0001,

0xfd22,	// (0x0004f85d) popup_slider_window_t_ParamLimits

0xfd22,	// (0x0004f85d) popup_slider_window_t

0xe51d,	// (0x0004e058) slider_pane_ParamLimits

0xe51d,	// (0x0004e058) slider_pane

0x97fc,	// (0x00049337) slider_pane_g1_ParamLimits

0x97fc,	// (0x00049337) slider_pane_g1

0x9810,	// (0x0004934b) slider_pane_g2_ParamLimits

0x9810,	// (0x0004934b) slider_pane_g2

0x9826,	// (0x00049361) slider_pane_g3_ParamLimits

0x9826,	// (0x00049361) slider_pane_g3

0x0003,

0xfe34,	// (0x0004f96f) slider_pane_g_ParamLimits

0xfe34,	// (0x0004f96f) slider_pane_g

0xd1b7,	// (0x0004ccf2) popup_tb_float_extension_window_ParamLimits

0xd1b7,	// (0x0004ccf2) popup_tb_float_extension_window

0x9852,	// (0x0004938d) aid_size_cell_tb_float_ext

0x2990,	// (0x000424cb) bg_popup_sub_window_cp28

0x985e,	// (0x00049399) grid_tb_float_ext_pane

0x986a,	// (0x000493a5) cell_tb_float_ext_pane_ParamLimits

0x986a,	// (0x000493a5) cell_tb_float_ext_pane

0x9886,	// (0x000493c1) cell_tb_float_ext_pane_g1

0x988f,	// (0x000493ca) grid_highlight_pane_cp12

0xc1a8,	// (0x0004bce3) cell_last_hwr_side_pane_ParamLimits

0xc1a8,	// (0x0004bce3) cell_last_hwr_side_pane

0x7473,	// (0x00046fae) cell_last_hwr_side_pane_g1

0x9898,	// (0x000493d3) cell_last_hwr_side_pane_g2

0x0001,

0xfe3d,	// (0x0004f978) cell_last_hwr_side_pane_g

0xc5a6,	// (0x0004c0e1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc5a6,	// (0x0004c0e1) vkb2_area_bottom_space_btn_pane

0x770b,	// (0x00047246) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x939e,	// (0x00048ed9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x281f,	// (0x0004235a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x283d,	// (0x00042378) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x283d,	// (0x00042378) vkb2_area_bottom_space_btn_pane_g1

0x2877,	// (0x000423b2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2877,	// (0x000423b2) vkb2_area_bottom_space_btn_pane_g2

0x28ad,	// (0x000423e8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x28ad,	// (0x000423e8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe42,	// (0x0004f97d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe42,	// (0x0004f97d) vkb2_area_bottom_space_btn_pane_g

0x1d53,	// (0x0004188e) cel_fep_hwr_func_pane_ParamLimits

0x1d53,	// (0x0004188e) cel_fep_hwr_func_pane

0xc17d,	// (0x0004bcb8) cell_hwr_side_button_pane_ParamLimits

0xc17d,	// (0x0004bcb8) cell_hwr_side_button_pane

0x8dc2,	// (0x000488fd) aid_area_touch_clock_ParamLimits

0x2d0e,	// (0x00042849) bg_uniindi_top_pane_ParamLimits

0x8dd6,	// (0x00048911) uniindi_top_pane_g1_ParamLimits

0x8dec,	// (0x00048927) uniindi_top_pane_g2_ParamLimits

0x8df8,	// (0x00048933) uniindi_top_pane_g3_ParamLimits

0x8e09,	// (0x00048944) uniindi_top_pane_g4_ParamLimits

0xfd5a,	// (0x0004f895) uniindi_top_pane_g_ParamLimits

0x8e16,	// (0x00048951) uniindi_top_pane_t1_ParamLimits

0x2d0e,	// (0x00042849) bg_vkb2_func_pane_cp01_ParamLimits

0x2d0e,	// (0x00042849) bg_vkb2_func_pane_cp01

0x98a1,	// (0x000493dc) cel_fep_hwr_func_pane_g1_ParamLimits

0x98a1,	// (0x000493dc) cel_fep_hwr_func_pane_g1

0x2d0e,	// (0x00042849) bg_vkb2_func_pane_cp02_ParamLimits

0x2d0e,	// (0x00042849) bg_vkb2_func_pane_cp02

0x98a1,	// (0x000493dc) cell_hwr_side_button_pane_g1_ParamLimits

0x98a1,	// (0x000493dc) cell_hwr_side_button_pane_g1

0x4cb0,	// (0x000447eb) status_pane_g4_ParamLimits

0x4cb0,	// (0x000447eb) status_pane_g4

0x4cca,	// (0x00044805) status_pane_t1

0x720f,	// (0x00046d4a) form2_midp_gauge_slider_cont_pane

0x7217,	// (0x00046d52) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd3d,	// (0x0004d878) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd4f,	// (0x0004d88a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb26,	// (0x0004f661) form2_midp_gauge_slider_pane_t_ParamLimits

0x724d,	// (0x00046d88) form2_midp_slider_pane_ParamLimits

0x220d,	// (0x00041d48) aid_size_cell_func_vkb2_ParamLimits

0x220d,	// (0x00041d48) aid_size_cell_func_vkb2

0x983e,	// (0x00049379) slider_pane_g4_ParamLimits

0x983e,	// (0x00049379) slider_pane_g4

0xc607,	// (0x0004c142) form2_midp_gauge_slider_pane_t2_cp01

0xc615,	// (0x0004c150) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc615,	// (0x0004c150) form2_midp_gauge_slider_pane_t3_cp01

0x2922,	// (0x0004245d) form2_midp_slider_pane_cp01

0x2990,	// (0x000424cb) navi_smil_pane

0x98da,	// (0x00049415) navi_smil_pane_g1

0x98e2,	// (0x0004941d) navi_smil_pane_t1

0x98af,	// (0x000493ea) form2_midp_slider_pane_g1

0x98b8,	// (0x000493f3) form2_midp_slider_pane_g2

0x98c0,	// (0x000493fb) form2_midp_slider_pane_g3

0x98af,	// (0x000493ea) form2_midp_slider_pane_g4

0xee30,	// (0x0004e96b) form2_midp_slider_pane_g5

0x0004,

0xfe4b,	// (0x0004f986) form2_midp_slider_pane_g

0x28e7,	// (0x00042422) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x28e7,	// (0x00042422) vkb2_area_bottom_space_btn_pane_g4

0xd397,	// (0x0004ced2) lc0_navi_pane_ParamLimits

0xd397,	// (0x0004ced2) lc0_navi_pane

0xd407,	// (0x0004cf42) lc0_stat_indi_pane_ParamLimits

0xd407,	// (0x0004cf42) lc0_stat_indi_pane

0xd41c,	// (0x0004cf57) ls0_title_pane_ParamLimits

0xd41c,	// (0x0004cf57) ls0_title_pane

0x330b,	// (0x00042e46) bg_popup_sub_pane_cp14_ParamLimits

0x8da9,	// (0x000488e4) list_uniindi_pane_ParamLimits

0x8db5,	// (0x000488f0) uniindi_top_pane_ParamLimits

0x8e54,	// (0x0004898f) list_single_uniindi_pane_g1_ParamLimits

0x8e67,	// (0x000489a2) list_single_uniindi_pane_t1_ParamLimits

0xc632,	// (0x0004c16d) lc0_stat_clock_pane_ParamLimits

0xc632,	// (0x0004c16d) lc0_stat_clock_pane

0xee39,	// (0x0004e974) lc0_stat_indi_pane_g1_ParamLimits

0xee39,	// (0x0004e974) lc0_stat_indi_pane_g1

0xee46,	// (0x0004e981) lc0_stat_indi_pane_g2_ParamLimits

0xee46,	// (0x0004e981) lc0_stat_indi_pane_g2

0x0001,

0xfe56,	// (0x0004f991) lc0_stat_indi_pane_g_ParamLimits

0xfe56,	// (0x0004f991) lc0_stat_indi_pane_g

0xc63f,	// (0x0004c17a) lc0_uni_indicator_pane_ParamLimits

0xc63f,	// (0x0004c17a) lc0_uni_indicator_pane

0xee53,	// (0x0004e98e) ls0_title_pane_g1_ParamLimits

0xee53,	// (0x0004e98e) ls0_title_pane_g1

0xee67,	// (0x0004e9a2) ls0_title_pane_t1_ParamLimits

0xee67,	// (0x0004e9a2) ls0_title_pane_t1

0xc64c,	// (0x0004c187) lc0_uni_indicator_pane_g1_ParamLimits

0xc64c,	// (0x0004c187) lc0_uni_indicator_pane_g1

0x9954,	// (0x0004948f) lc0_stat_clock_pane_t1

0x2990,	// (0x000424cb) main_ai5_pane

0x9962,	// (0x0004949d) ai5_sk_pane_ParamLimits

0x9962,	// (0x0004949d) ai5_sk_pane

0xee95,	// (0x0004e9d0) cell_ai5_widget_pane_ParamLimits

0xee95,	// (0x0004e9d0) cell_ai5_widget_pane

0x99e5,	// (0x00049520) aid_size_cell_widget_grid

0x99f9,	// (0x00049534) bg_ai5_widget_pane_ParamLimits

0x99f9,	// (0x00049534) bg_ai5_widget_pane

0xef22,	// (0x0004ea5d) cell_ai5_widget_pane_g2

0xef32,	// (0x0004ea6d) cell_ai5_widget_pane_g3

0xef46,	// (0x0004ea81) cell_ai5_widget_pane_g4

0xef52,	// (0x0004ea8d) cell_ai5_widget_pane_g5

0xef5e,	// (0x0004ea99) cell_ai5_widget_pane_g6

0xef6a,	// (0x0004eaa5) cell_ai5_widget_pane_g7

0xefb2,	// (0x0004eaed) cell_ai5_widget_pane_t1_ParamLimits

0xefb2,	// (0x0004eaed) cell_ai5_widget_pane_t1

0xefcf,	// (0x0004eb0a) cell_ai5_widget_pane_t2_ParamLimits

0xefcf,	// (0x0004eb0a) cell_ai5_widget_pane_t2

0xefe7,	// (0x0004eb22) cell_ai5_widget_pane_t3_ParamLimits

0xefe7,	// (0x0004eb22) cell_ai5_widget_pane_t3

0xefff,	// (0x0004eb3a) cell_ai5_widget_pane_t4_ParamLimits

0xefff,	// (0x0004eb3a) cell_ai5_widget_pane_t4

0xf019,	// (0x0004eb54) cell_ai5_widget_pane_t5_ParamLimits

0xf019,	// (0x0004eb54) cell_ai5_widget_pane_t5

0x9b39,	// (0x00049674) cell_ai5_widget_pane_t6_ParamLimits

0x9b39,	// (0x00049674) cell_ai5_widget_pane_t6

0x9b4b,	// (0x00049686) cell_ai5_widget_pane_t7_ParamLimits

0x9b4b,	// (0x00049686) cell_ai5_widget_pane_t7

0xf038,	// (0x0004eb73) cell_ai5_widget_pane_t8_ParamLimits

0xf038,	// (0x0004eb73) cell_ai5_widget_pane_t8

0x0009,

0xfe70,	// (0x0004f9ab) cell_ai5_widget_pane_t_ParamLimits

0xfe70,	// (0x0004f9ab) cell_ai5_widget_pane_t

0xf080,	// (0x0004ebbb) grid_ai5_widget_pane

0x330b,	// (0x00042e46) highlight_cell_ai5_widget_pane_ParamLimits

0x330b,	// (0x00042e46) highlight_cell_ai5_widget_pane

0xf097,	// (0x0004ebd2) ai5_sk_left_pane

0xf0a1,	// (0x0004ebdc) ai5_sk_middle_pane

0xf0ab,	// (0x0004ebe6) ai5_sk_right_pane

0x9be1,	// (0x0004971c) bg_ai5_widget_pane_g1_ParamLimits

0x9be1,	// (0x0004971c) bg_ai5_widget_pane_g1

0x9bed,	// (0x00049728) bg_ai5_widget_pane_g2_ParamLimits

0x9bed,	// (0x00049728) bg_ai5_widget_pane_g2

0x9bf9,	// (0x00049734) bg_ai5_widget_pane_g3_ParamLimits

0x9bf9,	// (0x00049734) bg_ai5_widget_pane_g3

0x9c05,	// (0x00049740) bg_ai5_widget_pane_g4_ParamLimits

0x9c05,	// (0x00049740) bg_ai5_widget_pane_g4

0x9c11,	// (0x0004974c) bg_ai5_widget_pane_g5_ParamLimits

0x9c11,	// (0x0004974c) bg_ai5_widget_pane_g5

0x9c1d,	// (0x00049758) bg_ai5_widget_pane_g6_ParamLimits

0x9c1d,	// (0x00049758) bg_ai5_widget_pane_g6

0x9c29,	// (0x00049764) bg_ai5_widget_pane_g7_ParamLimits

0x9c29,	// (0x00049764) bg_ai5_widget_pane_g7

0x9c35,	// (0x00049770) bg_ai5_widget_pane_g8_ParamLimits

0x9c35,	// (0x00049770) bg_ai5_widget_pane_g8

0x9c41,	// (0x0004977c) bg_ai5_widget_pane_g9_ParamLimits

0x9c41,	// (0x0004977c) bg_ai5_widget_pane_g9

0x0008,

0xfe85,	// (0x0004f9c0) bg_ai5_widget_pane_g_ParamLimits

0xfe85,	// (0x0004f9c0) bg_ai5_widget_pane_g

0x9c68,	// (0x000497a3) cell_shortcut_ai5_widget_pane_ParamLimits

0x9c68,	// (0x000497a3) cell_shortcut_ai5_widget_pane

0x2b50,	// (0x0004268b) bg_cell_shortcut_ai5_widget_pane

0x9c7a,	// (0x000497b5) cell_grid_ai5_widget_pane_g1

0x9c83,	// (0x000497be) highlight_cell_shortcut_ai5_widget_pane

0x4e3f,	// (0x0004497a) ai5_sk_left_pane_g1

0x9c8b,	// (0x000497c6) ai5_sk_left_pane_g2

0x9c93,	// (0x000497ce) ai5_sk_left_pane_g3

0x9c9b,	// (0x000497d6) ai5_sk_left_pane_g4

0x0003,

0xfe98,	// (0x0004f9d3) ai5_sk_left_pane_g

0x9ca3,	// (0x000497de) ai5_sk_left_pane_t1

0x4e37,	// (0x00044972) ai5_sk_right_pane_g1

0x9cb1,	// (0x000497ec) ai5_sk_right_pane_g2

0x9cb9,	// (0x000497f4) ai5_sk_right_pane_g3

0x9cc1,	// (0x000497fc) ai5_sk_right_pane_g4

0x0003,

0xfea1,	// (0x0004f9dc) ai5_sk_right_pane_g

0x9cc9,	// (0x00049804) ai5_sk_right_pane_t1

0x4e37,	// (0x00044972) ai5_sk_middle_pane_g1

0x4e3f,	// (0x0004497a) ai5_sk_middle_pane_g2

0x4e57,	// (0x00044992) ai5_sk_middle_pane_g3

0x9cb9,	// (0x000497f4) ai5_sk_middle_pane_g4

0x9c93,	// (0x000497ce) ai5_sk_middle_pane_g5

0x9cd7,	// (0x00049812) ai5_sk_middle_pane_g6

0xf0b5,	// (0x0004ebf0) ai5_sk_middle_pane_g7

0x0006,

0xfeaa,	// (0x0004f9e5) ai5_sk_middle_pane_g

0xd281,	// (0x0004cdbc) aid_touch_area_size_lc0_ParamLimits

0xd281,	// (0x0004cdbc) aid_touch_area_size_lc0

0x1ef2,	// (0x00041a2d) cell_hwr_candidate_pane_t1_ParamLimits

0x4968,	// (0x000444a3) aid_touch_navi_pane

0xd526,	// (0x0004d061) status_dt_navi_pane_ParamLimits

0xd526,	// (0x0004d061) status_dt_navi_pane

0xd53e,	// (0x0004d079) status_dt_sta_pane_ParamLimits

0xd53e,	// (0x0004d079) status_dt_sta_pane

0xf0bd,	// (0x0004ebf8) dt_sta_controll_pane

0xf0ca,	// (0x0004ec05) dt_sta_indi_pane

0xf0d7,	// (0x0004ec12) dt_sta_title_pane

0x2d0e,	// (0x00042849) bg_dt_sta_indi_pane_ParamLimits

0x2d0e,	// (0x00042849) bg_dt_sta_indi_pane

0xf0e9,	// (0x0004ec24) dt_sta_battery_pane

0xf0f1,	// (0x0004ec2c) dt_sta_indi_pane_g1

0xf0fa,	// (0x0004ec35) dt_sta_indi_pane_g2

0xf103,	// (0x0004ec3e) dt_sta_indi_pane_g3

0x0002,

0xfeb9,	// (0x0004f9f4) dt_sta_indi_pane_g

0xf10c,	// (0x0004ec47) dt_sta_signal_pane

0x330b,	// (0x00042e46) bg_dt_sta_title_pane_ParamLimits

0x330b,	// (0x00042e46) bg_dt_sta_title_pane

0xf115,	// (0x0004ec50) dt_sta_title_pane_g1

0xf11d,	// (0x0004ec58) dt_sta_title_pane_t1_ParamLimits

0xf11d,	// (0x0004ec58) dt_sta_title_pane_t1

0x2990,	// (0x000424cb) bg_dt_sta_control_pane

0xf132,	// (0x0004ec6d) dt_sta_controll_pane_g1

0xf13b,	// (0x0004ec76) bg_dt_sta_title_pane_g1

0xf144,	// (0x0004ec7f) bg_dt_sta_title_pane_g2

0xf14d,	// (0x0004ec88) bg_dt_sta_title_pane_g3

0x0002,

0xfec0,	// (0x0004f9fb) bg_dt_sta_title_pane_g

0x7473,	// (0x00046fae) bg_dt_sta_indi_pane_g1

0x9d85,	// (0x000498c0) dt_sta_signal_pane_g1

0x9d8d,	// (0x000498c8) dt_sta_signal_pane_g2

0x0001,

0xfec7,	// (0x0004fa02) dt_sta_signal_pane_g

0x9d95,	// (0x000498d0) dt_sta_battery_pane_g1

0x9d9e,	// (0x000498d9) dt_sta_battery_pane_t1

0x7473,	// (0x00046fae) bg_dt_sta_control_pane_g1

0x3a67,	// (0x000435a2) fep_china_uni_eep_pane

0x3a6f,	// (0x000435aa) fep_china_uni_entry_pane_ParamLimits

0x3a7f,	// (0x000435ba) popup_fep_china_uni_window_g1_ParamLimits

0x3a8f,	// (0x000435ca) popup_fep_china_uni_window_g2_ParamLimits

0x3a8f,	// (0x000435ca) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0004f29d) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0004f29d) popup_fep_china_uni_window_g

0x9dad,	// (0x000498e8) fep_china_uni_eep_pane_g1

0x9db5,	// (0x000498f0) fep_china_uni_eep_pane_t1

0x98d1,	// (0x0004940c) aid_touch_area_size_smil_player

0x4ac0,	// (0x000445fb) lc0_clock_pane

0x4cbe,	// (0x000447f9) status_pane_g5_ParamLimits

0x4cbe,	// (0x000447f9) status_pane_g5

0xcce1,	// (0x0004c81c) popup_keymap_window

0x4c7c,	// (0x000447b7) status_icon_pane

0xef32,	// (0x0004ea6d) cell_ai5_widget_pane_g3_ParamLimits

0xef46,	// (0x0004ea81) cell_ai5_widget_pane_g4_ParamLimits

0xef52,	// (0x0004ea8d) cell_ai5_widget_pane_g5_ParamLimits

0xef76,	// (0x0004eab1) cell_ai5_widget_pane_g8_ParamLimits

0xef76,	// (0x0004eab1) cell_ai5_widget_pane_g8

0xef8a,	// (0x0004eac5) cell_ai5_widget_pane_g9_ParamLimits

0xef8a,	// (0x0004eac5) cell_ai5_widget_pane_g9

0xef9e,	// (0x0004ead9) cell_ai5_widget_pane_g10_ParamLimits

0xef9e,	// (0x0004ead9) cell_ai5_widget_pane_g10

0x9dc4,	// (0x000498ff) status_icon_pane_g1

0x2990,	// (0x000424cb) bg_popup_sub_pane_cp13

0x9dcc,	// (0x00049907) popup_keymap_window_t1

0xcaed,	// (0x0004c628) control_pane_g6_ParamLimits

0xcaed,	// (0x0004c628) control_pane_g6

0xcafa,	// (0x0004c635) control_pane_g7_ParamLimits

0xcafa,	// (0x0004c635) control_pane_g7

0xcb07,	// (0x0004c642) control_pane_g8_ParamLimits

0xcb07,	// (0x0004c642) control_pane_g8

0xf0bd,	// (0x0004ebf8) dt_sta_controll_pane_ParamLimits

0xf0ca,	// (0x0004ec05) dt_sta_indi_pane_ParamLimits

0xf0d7,	// (0x0004ec12) dt_sta_title_pane_ParamLimits

0x3243,	// (0x00042d7e) aid_size_touch_scroll_bar_cale

0x0ee7,	// (0x00040a22) popup_discreet_window_ParamLimits

0x0ee7,	// (0x00040a22) popup_discreet_window

0xba82,	// (0x0004b5bd) popup_sk_window

0x54a4,	// (0x00044fdf) bg_popup_sub_pane_cp28_ParamLimits

0x54a4,	// (0x00044fdf) bg_popup_sub_pane_cp28

0x9dda,	// (0x00049915) popup_discreet_window_g1_ParamLimits

0x9dda,	// (0x00049915) popup_discreet_window_g1

0x9dfa,	// (0x00049935) popup_discreet_window_t1_ParamLimits

0x9dfa,	// (0x00049935) popup_discreet_window_t1

0x9e18,	// (0x00049953) popup_discreet_window_t2_ParamLimits

0x9e18,	// (0x00049953) popup_discreet_window_t2

0x0002,

0xfecc,	// (0x0004fa07) popup_discreet_window_t_ParamLimits

0xfecc,	// (0x0004fa07) popup_discreet_window_t

0x2958,	// (0x00042493) popup_sk_window_g1

0x2962,	// (0x0004249d) popup_sk_window_g2

0x0001,

0xfed3,	// (0x0004fa0e) popup_sk_window_g

0x9e6a,	// (0x000499a5) popup_sk_window_t1

0x9e78,	// (0x000499b3) popup_sk_window_t1_copy1

0xef22,	// (0x0004ea5d) cell_ai5_widget_pane_g2_ParamLimits

0xf04a,	// (0x0004eb85) cell_ai5_widget_pane_t9_ParamLimits

0xf04a,	// (0x0004eb85) cell_ai5_widget_pane_t9

0x2990,	// (0x000424cb) main_fep_fshwr2_pane

0xf156,	// (0x0004ec91) aid_fshwr2_btn_pane

0xf15e,	// (0x0004ec99) aid_fshwr2_syb_pane

0xf166,	// (0x0004eca1) aid_fshwr2_txt_pane

0xf16e,	// (0x0004eca9) fshwr2_func_candi_pane

0xf178,	// (0x0004ecb3) fshwr2_hwr_syb_pane

0xf184,	// (0x0004ecbf) fshwr2_icf_pane

0x2990,	// (0x000424cb) fshwr2_icf_bg_pane

0xf18e,	// (0x0004ecc9) fshwr2_icf_pane_t1_ParamLimits

0xf18e,	// (0x0004ecc9) fshwr2_icf_pane_t1

0x7473,	// (0x00046fae) fshwr2_func_candi_pane_g1

0x9eeb,	// (0x00049a26) fshwr2_func_candi_row_pane_ParamLimits

0x9eeb,	// (0x00049a26) fshwr2_func_candi_row_pane

0xf1a6,	// (0x0004ece1) cell_fshwr2_syb_pane_ParamLimits

0xf1a6,	// (0x0004ece1) cell_fshwr2_syb_pane

0x770b,	// (0x00047246) fshwr2_hwr_syb_pane_g1_ParamLimits

0x770b,	// (0x00047246) fshwr2_hwr_syb_pane_g1

0x2990,	// (0x000424cb) bg_popup_call_pane_cp01

0x9f16,	// (0x00049a51) fshwr2_func_candi_cell_pane_ParamLimits

0x9f16,	// (0x00049a51) fshwr2_func_candi_cell_pane

0x9f48,	// (0x00049a83) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f48,	// (0x00049a83) fshwr2_func_candi_cell_bg_pane

0x9f62,	// (0x00049a9d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f62,	// (0x00049a9d) fshwr2_func_candi_cell_pane_g1

0x9f82,	// (0x00049abd) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f82,	// (0x00049abd) fshwr2_func_candi_cell_pane_t1

0x2990,	// (0x000424cb) bg_button_pane_cp08

0x3f69,	// (0x00043aa4) cell_fshwr2_syb_bg_pane

0xf1bf,	// (0x0004ecfa) cell_fshwr2_syb_bg_pane_g1

0xf1c7,	// (0x0004ed02) cell_fshwr2_syb_bg_pane_t1

0x330b,	// (0x00042e46) main_tmo_pane

0xd858,	// (0x0004d393) uni_indicator_pane_g1_ParamLimits

0xd86d,	// (0x0004d3a8) uni_indicator_pane_g2_ParamLimits

0xd882,	// (0x0004d3bd) uni_indicator_pane_g3_ParamLimits

0xd898,	// (0x0004d3d3) uni_indicator_pane_g4_ParamLimits

0xd898,	// (0x0004d3d3) uni_indicator_pane_g4

0xd8ac,	// (0x0004d3e7) uni_indicator_pane_g5_ParamLimits

0xd8ac,	// (0x0004d3e7) uni_indicator_pane_g5

0xd8c0,	// (0x0004d3fb) uni_indicator_pane_g6_ParamLimits

0xd8c0,	// (0x0004d3fb) uni_indicator_pane_g6

0xf95a,	// (0x0004f495) uni_indicator_pane_g_ParamLimits

0xe3a3,	// (0x0004dede) popup_tmo_note_window_ParamLimits

0xe3a3,	// (0x0004dede) popup_tmo_note_window

0x2990,	// (0x000424cb) fshwr2_bg_pane

0x9f73,	// (0x00049aae) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f73,	// (0x00049aae) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed8,	// (0x0004fa13) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed8,	// (0x0004fa13) fshwr2_func_candi_cell_pane_g

0x7473,	// (0x00046fae) bg_popup_window_pane_cp01

0x9fac,	// (0x00049ae7) bg_popup_window_pane_g1_cp01

0x9fb5,	// (0x00049af0) bg_popup_window_pane_cp22_ParamLimits

0x9fb5,	// (0x00049af0) bg_popup_window_pane_cp22

0x9fc3,	// (0x00049afe) listscroll_tmo_link_pane_ParamLimits

0x9fc3,	// (0x00049afe) listscroll_tmo_link_pane

0xa003,	// (0x00049b3e) popup_tmo_note_window_g1_ParamLimits

0xa003,	// (0x00049b3e) popup_tmo_note_window_g1

0xa010,	// (0x00049b4b) tmo_note_info_pane_ParamLimits

0xa010,	// (0x00049b4b) tmo_note_info_pane

0xf1d6,	// (0x0004ed11) list_tmo_note_info_pane_g1_ParamLimits

0xf1d6,	// (0x0004ed11) list_tmo_note_info_pane_g1

0xa041,	// (0x00049b7c) list_tmo_note_info_pane_g2_ParamLimits

0xa041,	// (0x00049b7c) list_tmo_note_info_pane_g2

0x0001,

0xfedd,	// (0x0004fa18) list_tmo_note_info_pane_g_ParamLimits

0xfedd,	// (0x0004fa18) list_tmo_note_info_pane_g

0xa05d,	// (0x00049b98) list_tmo_note_info_text_pane_ParamLimits

0xa05d,	// (0x00049b98) list_tmo_note_info_text_pane

0xa0e2,	// (0x00049c1d) list_tmo_link_pane

0xa0ef,	// (0x00049c2a) scroll_pane_cp20

0xa0fc,	// (0x00049c37) list_single_tmo_link_pane_ParamLimits

0xa0fc,	// (0x00049c37) list_single_tmo_link_pane

0xa10c,	// (0x00049c47) list_single_tmo_link_pane_t1

0xa11a,	// (0x00049c55) list_tmo_note_info_text_pane_t1_ParamLimits

0xa11a,	// (0x00049c55) list_tmo_note_info_text_pane_t1

0xc76e,	// (0x0004c2a9) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc76e,	// (0x0004c2a9) aid_size_touch_scroll_bar_cp01

0xb61f,	// (0x0004b15a) aid_size_touch_slider_marker

0xba72,	// (0x0004b5ad) popup_settings_window_ParamLimits

0xba72,	// (0x0004b5ad) popup_settings_window

0x0698,	// (0x000401d3) popup_candi_list_indi_window

0x4968,	// (0x000444a3) aid_touch_navi_pane_ParamLimits

0x2160,	// (0x00041c9b) rs_clock_indi_pane

0x2169,	// (0x00041ca4) sctrl_sk_bottom_pane_ParamLimits

0x217a,	// (0x00041cb5) sctrl_sk_top_pane_ParamLimits

0x225f,	// (0x00041d9a) popup_fep_tooltip_window

0x99e5,	// (0x00049520) aid_size_cell_widget_grid_ParamLimits

0xef16,	// (0x0004ea51) cell_ai5_widget_pane_g1_ParamLimits

0xef16,	// (0x0004ea51) cell_ai5_widget_pane_g1

0xef5e,	// (0x0004ea99) cell_ai5_widget_pane_g6_ParamLimits

0xef6a,	// (0x0004eaa5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5b,	// (0x0004f996) cell_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0004f996) cell_ai5_widget_pane_g

0xf06e,	// (0x0004eba9) cell_ai5_widget_pane_t10_ParamLimits

0xf06e,	// (0x0004eba9) cell_ai5_widget_pane_t10

0xf080,	// (0x0004ebbb) grid_ai5_widget_pane_ParamLimits

0x9c4d,	// (0x00049788) cell_contacts_ai5_widget_pane_ParamLimits

0x9c4d,	// (0x00049788) cell_contacts_ai5_widget_pane

0x9e2d,	// (0x00049968) popup_discreet_window_t3_ParamLimits

0x9e2d,	// (0x00049968) popup_discreet_window_t3

0x9ebc,	// (0x000499f7) popup_fshwr2_char_preview_window_ParamLimits

0x9ebc,	// (0x000499f7) popup_fshwr2_char_preview_window

0xf1ed,	// (0x0004ed28) tmo_note_info_pane_t1

0xf202,	// (0x0004ed3d) tmo_note_info_pane_t2

0xf21b,	// (0x0004ed56) tmo_note_info_pane_t3

0xa0be,	// (0x00049bf9) tmo_note_info_pane_t4

0xa0d0,	// (0x00049c0b) tmo_note_info_pane_t5

0x0004,

0xfee2,	// (0x0004fa1d) tmo_note_info_pane_t

0xa0e2,	// (0x00049c1d) list_tmo_link_pane_ParamLimits

0xa0ef,	// (0x00049c2a) scroll_pane_cp20_ParamLimits

0x2990,	// (0x000424cb) bg_popup_fep_char_preview_window_cp01

0xa133,	// (0x00049c6e) popup_fshwr2_char_preview_window_t1

0xa141,	// (0x00049c7c) popup_candi_list_indi_window_g1

0xa14a,	// (0x00049c85) bg_cell_contacts_ai5_widget_pane

0xa156,	// (0x00049c91) cell_contacts_ai5_widget_pane_g1

0xa16a,	// (0x00049ca5) cell_contacts_ai5_widget_pane_g2

0xa179,	// (0x00049cb4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeed,	// (0x0004fa28) cell_contacts_ai5_widget_pane_g

0xa18c,	// (0x00049cc7) cell_contacts_ai5_widget_pane_t1

0x330b,	// (0x00042e46) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf295,	// (0x0004edd0) settings_container_pane

0x3f69,	// (0x00043aa4) listscroll_set_pane_copy1

0x6bea,	// (0x00046725) scroll_pane_cp121_copy1

0xa212,	// (0x00049d4d) set_content_pane_copy1

0xf2a1,	// (0x0004eddc) aid_height_set_list_copy1_ParamLimits

0xf2a1,	// (0x0004eddc) aid_height_set_list_copy1

0x6237,	// (0x00045d72) aid_size_parent_copy1_ParamLimits

0x6237,	// (0x00045d72) aid_size_parent_copy1

0xf2ad,	// (0x0004ede8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf2ad,	// (0x0004ede8) button_value_adjust_pane_cp6_copy1

0x42f3,	// (0x00043e2e) list_highlight_pane_cp2_copy1_ParamLimits

0x42f3,	// (0x00043e2e) list_highlight_pane_cp2_copy1

0xf2c1,	// (0x0004edfc) list_set_pane_copy1_ParamLimits

0xf2c1,	// (0x0004edfc) list_set_pane_copy1

0xf230,	// (0x0004ed6b) main_pane_set_t1_copy1_ParamLimits

0xf230,	// (0x0004ed6b) main_pane_set_t1_copy1

0xf26a,	// (0x0004eda5) main_pane_set_t2_copy1_ParamLimits

0xf26a,	// (0x0004eda5) main_pane_set_t2_copy1

0xf388,	// (0x0004eec3) main_pane_set_t3_copy1

0xf396,	// (0x0004eed1) main_pane_set_t4_copy1

0xf289,	// (0x0004edc4) set_content_pane_g1_copy1_ParamLimits

0xf289,	// (0x0004edc4) set_content_pane_g1_copy1

0xf3a4,	// (0x0004eedf) setting_code_pane_copy1

0xa327,	// (0x00049e62) setting_slider_graphic_pane_copy1

0xa327,	// (0x00049e62) setting_slider_pane_copy1

0xa331,	// (0x00049e6c) setting_text_pane_copy1

0xa33b,	// (0x00049e76) setting_volume_pane_copy1

0xf3ae,	// (0x0004eee9) settings_code_pane_cp2_copy1

0xf3b6,	// (0x0004eef1) settings_code_pane_cp_copy1_ParamLimits

0xf3b6,	// (0x0004eef1) settings_code_pane_cp_copy1

0xf3ca,	// (0x0004ef05) volume_set_pane_copy1

0xf3d6,	// (0x0004ef11) volume_set_pane_g10_copy1

0xf3e2,	// (0x0004ef1d) volume_set_pane_g1_copy1

0xf3ec,	// (0x0004ef27) volume_set_pane_g2_copy1

0xf3f6,	// (0x0004ef31) volume_set_pane_g3_copy1

0xf400,	// (0x0004ef3b) volume_set_pane_g4_copy1

0xf40a,	// (0x0004ef45) volume_set_pane_g5_copy1

0xf414,	// (0x0004ef4f) volume_set_pane_g6_copy1

0xf41e,	// (0x0004ef59) volume_set_pane_g7_copy1

0xf428,	// (0x0004ef63) volume_set_pane_g8_copy1

0xf432,	// (0x0004ef6d) volume_set_pane_g9_copy1

0x2a84,	// (0x000425bf) bg_set_opt_pane_cp_copy1_ParamLimits

0x2a84,	// (0x000425bf) bg_set_opt_pane_cp_copy1

0xa3d2,	// (0x00049f0d) setting_slider_pane_t1_copy1_ParamLimits

0xa3d2,	// (0x00049f0d) setting_slider_pane_t1_copy1

0xf43c,	// (0x0004ef77) setting_slider_pane_t2_copy1_ParamLimits

0xf43c,	// (0x0004ef77) setting_slider_pane_t2_copy1

0xf456,	// (0x0004ef91) setting_slider_pane_t3_copy1_ParamLimits

0xf456,	// (0x0004ef91) setting_slider_pane_t3_copy1

0xf46e,	// (0x0004efa9) slider_set_pane_copy1_ParamLimits

0xf46e,	// (0x0004efa9) slider_set_pane_copy1

0x3372,	// (0x00042ead) set_opt_bg_pane_g1_copy2

0x337a,	// (0x00042eb5) set_opt_bg_pane_g2_copy2

0xa438,	// (0x00049f73) set_opt_bg_pane_g3_copy2

0x338a,	// (0x00042ec5) set_opt_bg_pane_g4_copy2

0x3392,	// (0x00042ecd) set_opt_bg_pane_g5_copy2

0x339a,	// (0x00042ed5) set_opt_bg_pane_g6_copy2

0xf484,	// (0x0004efbf) set_opt_bg_pane_g7_copy2

0xa44c,	// (0x00049f87) set_opt_bg_pane_g8_copy2

0xa456,	// (0x00049f91) set_opt_bg_pane_g9_copy2

0xa460,	// (0x00049f9b) aid_size_touch_slider_mark_copy1_ParamLimits

0xa460,	// (0x00049f9b) aid_size_touch_slider_mark_copy1

0xa474,	// (0x00049faf) slider_set_pane_g1_copy1

0xa47d,	// (0x00049fb8) slider_set_pane_g2_copy1

0x6880,	// (0x000463bb) slider_set_pane_g3_copy1_ParamLimits

0x6880,	// (0x000463bb) slider_set_pane_g3_copy1

0x6894,	// (0x000463cf) slider_set_pane_g4_copy1_ParamLimits

0x6894,	// (0x000463cf) slider_set_pane_g4_copy1

0x68ac,	// (0x000463e7) slider_set_pane_g5_copy1_ParamLimits

0x68ac,	// (0x000463e7) slider_set_pane_g5_copy1

0x6880,	// (0x000463bb) slider_set_pane_g6_copy1_ParamLimits

0x6880,	// (0x000463bb) slider_set_pane_g6_copy1

0xf48e,	// (0x0004efc9) slider_set_pane_g7_copy1_ParamLimits

0xf48e,	// (0x0004efc9) slider_set_pane_g7_copy1

0x29a4,	// (0x000424df) bg_set_opt_pane_cp2_copy1

0xa49b,	// (0x00049fd6) setting_slider_graphic_pane_g1_copy1

0xf4a4,	// (0x0004efdf) setting_slider_graphic_pane_t1_copy1

0xf4b4,	// (0x0004efef) setting_slider_graphic_pane_t2_copy1

0xf4c4,	// (0x0004efff) slider_set_pane_cp_copy1

0xa4d4,	// (0x0004a00f) input_focus_pane_cp1_copy1

0xa4dd,	// (0x0004a018) list_set_text_pane_copy1

0xa4e5,	// (0x0004a020) setting_text_pane_g1_copy1

0xf563,	// (0x0004f09e) set_text_pane_t1_copy1

0xa4d4,	// (0x0004a00f) input_focus_pane_cp2_copy1

0xa4e5,	// (0x0004a020) setting_code_pane_g1_copy1

0xf4cc,	// (0x0004f007) setting_code_pane_t1_copy1

0xf4da,	// (0x0004f015) list_set_graphic_pane_copy1

0x29a4,	// (0x000424df) bg_set_opt_pane_cp4_copy1

0xc9f9,	// (0x0004c534) list_set_graphic_pane_g1_copy1_ParamLimits

0xc9f9,	// (0x0004c534) list_set_graphic_pane_g1_copy1

0xf4ec,	// (0x0004f027) list_set_graphic_pane_g2_copy1

0xca11,	// (0x0004c54c) list_set_graphic_pane_t1_copy1_ParamLimits

0xca11,	// (0x0004c54c) list_set_graphic_pane_t1_copy1

0x7473,	// (0x00046fae) rs_clock_indi_pane_g1

0xa516,	// (0x0004a051) rs_clock_indi_pane_t1

0xa524,	// (0x0004a05f) rs_indi_pane

0xa52c,	// (0x0004a067) rs_indi_pane_g1

0xa535,	// (0x0004a070) rs_indi_pane_g2

0xa53e,	// (0x0004a079) rs_indi_pane_g3

0x0002,

0xfef4,	// (0x0004fa2f) rs_indi_pane_g

0x3f69,	// (0x00043aa4) bg_popup_preview_window_pane_cp03

0xa547,	// (0x0004a082) popup_fep_tooltip_window_t1

0x8127,	// (0x00047c62) popup_note2_window_g2_ParamLimits

0x8127,	// (0x00047c62) popup_note2_window_g2

0x0001,

0xfc92,	// (0x0004f7cd) popup_note2_window_g_ParamLimits

0xfc92,	// (0x0004f7cd) popup_note2_window_g

0x862f,	// (0x0004816a) bg_popup_sub_pane_cp11_ParamLimits

0x863c,	// (0x00048177) cell_ai3_links_pane_g1_ParamLimits

0x8653,	// (0x0004818e) cell_ai3_links_pane_t1

0xf563,	// (0x0004f09e) set_text_pane_t1_copy1_ParamLimits

0x3e76,	// (0x000439b1) cell_graphic_popup_pane_cp2_ParamLimits

0x3e76,	// (0x000439b1) cell_graphic_popup_pane_cp2

0xa555,	// (0x0004a090) cell_graphic_popup_pane_g1_cp2

0x3056,	// (0x00042b91) cell_graphic_popup_pane_g2_cp2

0xa55d,	// (0x0004a098) cell_graphic_popup_pane_g3_cp2

0xa565,	// (0x0004a0a0) cell_graphic_popup_pane_t2_cp2

0x3067,	// (0x00042ba2) grid_highlight_pane_cp3_cp2

0x36be,	// (0x000431f9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x330b,	// (0x00042e46) main_tmo_pane_ParamLimits

0xe397,	// (0x0004ded2) popup_tmo_big_image_note_window

0xef06,	// (0x0004ea41) cell_ai5_widget_list_pane

0xef0e,	// (0x0004ea49) cell_ai5_widget_lrg_icon_pane

0xf1ed,	// (0x0004ed28) tmo_note_info_pane_t1_ParamLimits

0xf202,	// (0x0004ed3d) tmo_note_info_pane_t2_ParamLimits

0xf21b,	// (0x0004ed56) tmo_note_info_pane_t3_ParamLimits

0xa0be,	// (0x00049bf9) tmo_note_info_pane_t4_ParamLimits

0xa0d0,	// (0x00049c0b) tmo_note_info_pane_t5_ParamLimits

0xfee2,	// (0x0004fa1d) tmo_note_info_pane_t_ParamLimits

0xf295,	// (0x0004edd0) settings_container_pane_ParamLimits

0xa4cc,	// (0x0004a007) indicator_popup_pane_cp5

0xa4cc,	// (0x0004a007) indicator_popup_pane_cp6

0xf4da,	// (0x0004f015) list_set_graphic_pane_copy1_ParamLimits

0x2990,	// (0x000424cb) bg_popup_window_pane_cp23

0xa573,	// (0x0004a0ae) popup_tmo_big_image_note_window_g1

0xa57f,	// (0x0004a0ba) popup_tmo_big_image_note_window_t1

0xa58f,	// (0x0004a0ca) popup_tmo_big_image_note_window_t2

0xa59f,	// (0x0004a0da) popup_tmo_big_image_note_window_t3

0x0002,

0xfefb,	// (0x0004fa36) popup_tmo_big_image_note_window_t

0xf4f4,	// (0x0004f02f) cell_ai5_widget_lrg_icon_pane_g1

0xf4fc,	// (0x0004f037) cell_ai5_widget_lrg_icon_pane_t1

0xf50a,	// (0x0004f045) cell_ai5_widget_list_row_pane_ParamLimits

0xf50a,	// (0x0004f045) cell_ai5_widget_list_row_pane

0xf523,	// (0x0004f05e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf523,	// (0x0004f05e) cell_ai5_widget_list_row_pane_g1

0xf530,	// (0x0004f06b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf530,	// (0x0004f06b) cell_ai5_widget_list_row_pane_t1

0xf548,	// (0x0004f083) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf548,	// (0x0004f083) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff02,	// (0x0004fa3d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff02,	// (0x0004fa3d) cell_ai5_widget_list_row_pane_t

0x2990,	// (0x000424cb) main_fep_vtchi_ss_pane

0xa615,	// (0x0004a150) popup_fep_char_pre_window

0xa61d,	// (0x0004a158) popup_fep_ituss_window

0xa628,	// (0x0004a163) popup_fep_vkbss_window

0xa633,	// (0x0004a16e) grid_vkbss_keypad_pane_ParamLimits

0xa633,	// (0x0004a16e) grid_vkbss_keypad_pane

0xa643,	// (0x0004a17e) ituss_keypad_pane

0xa64b,	// (0x0004a186) aid_vkbss_key_offset_ParamLimits

0xa64b,	// (0x0004a186) aid_vkbss_key_offset

0xa65a,	// (0x0004a195) cell_vkbss_key_pane_ParamLimits

0xa65a,	// (0x0004a195) cell_vkbss_key_pane

0xa670,	// (0x0004a1ab) bg_cell_vkbss_key_g1_ParamLimits

0xa670,	// (0x0004a1ab) bg_cell_vkbss_key_g1

0xa67c,	// (0x0004a1b7) cell_vkbss_key_3p_pane_ParamLimits

0xa67c,	// (0x0004a1b7) cell_vkbss_key_3p_pane

0xa696,	// (0x0004a1d1) cell_vkbss_key_g1_ParamLimits

0xa696,	// (0x0004a1d1) cell_vkbss_key_g1

0xa6b0,	// (0x0004a1eb) cell_vkbss_key_t1_ParamLimits

0xa6b0,	// (0x0004a1eb) cell_vkbss_key_t1

0xa6db,	// (0x0004a216) cell_ituss_key_pane_ParamLimits

0xa6db,	// (0x0004a216) cell_ituss_key_pane

0xa6ea,	// (0x0004a225) bg_cell_ituss_key_g1_ParamLimits

0xa6ea,	// (0x0004a225) bg_cell_ituss_key_g1

0xa6f6,	// (0x0004a231) cell_ituss_key_pane_g1_ParamLimits

0xa6f6,	// (0x0004a231) cell_ituss_key_pane_g1

0xa702,	// (0x0004a23d) cell_ituss_key_pane_g2_ParamLimits

0xa702,	// (0x0004a23d) cell_ituss_key_pane_g2

0x0001,

0xff07,	// (0x0004fa42) cell_ituss_key_pane_g_ParamLimits

0xff07,	// (0x0004fa42) cell_ituss_key_pane_g

0xa716,	// (0x0004a251) cell_ituss_key_t1_ParamLimits

0xa716,	// (0x0004a251) cell_ituss_key_t1

0xa734,	// (0x0004a26f) cell_ituss_key_t2_ParamLimits

0xa734,	// (0x0004a26f) cell_ituss_key_t2

0xa753,	// (0x0004a28e) cell_ituss_key_t3_ParamLimits

0xa753,	// (0x0004a28e) cell_ituss_key_t3

0xa772,	// (0x0004a2ad) cell_ituss_key_t4_ParamLimits

0xa772,	// (0x0004a2ad) cell_ituss_key_t4

0x0003,

0xff0c,	// (0x0004fa47) cell_ituss_key_t_ParamLimits

0xff0c,	// (0x0004fa47) cell_ituss_key_t

0xa791,	// (0x0004a2cc) cell_vkbss_key_3p_pane_g1

0xa799,	// (0x0004a2d4) cell_vkbss_key_3p_pane_g2

0xa7a1,	// (0x0004a2dc) cell_vkbss_key_3p_pane_g3

0x0002,

0xff15,	// (0x0004fa50) cell_vkbss_key_3p_pane_g

0x2990,	// (0x000424cb) bg_popup_fep_char_preview_window_cp02

0xa7a9,	// (0x0004a2e4) popup_fep_char_pre_window_t1

0xeefc,	// (0x0004ea37) main_ai5_sk_pane

0xa14a,	// (0x00049c85) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa156,	// (0x00049c91) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa16a,	// (0x00049ca5) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa179,	// (0x00049cb4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeed,	// (0x0004fa28) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa18c,	// (0x00049cc7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x330b,	// (0x00042e46) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf55a,	// (0x0004f095) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
