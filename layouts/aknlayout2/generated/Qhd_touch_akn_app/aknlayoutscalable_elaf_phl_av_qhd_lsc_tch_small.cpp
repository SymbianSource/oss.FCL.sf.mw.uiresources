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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001f0bb };

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
0xbca1,	// (0x0002ad5c) Screen

0xbcad,	// (0x0002ad68) application_window_ParamLimits

0xbcad,	// (0x0002ad68) application_window

0x2d6d,	// (0x00021e28) screen_g1

0xbce5,	// (0x0002ada0) area_bottom_pane_ParamLimits

0xbce5,	// (0x0002ada0) area_bottom_pane

0x13b1,	// (0x0002046c) area_top_pane_ParamLimits

0x13b1,	// (0x0002046c) area_top_pane

0x1445,	// (0x00020500) main_pane_ParamLimits

0x1445,	// (0x00020500) main_pane

0x2d77,	// (0x00021e32) misc_graphics

0xd40c,	// (0x0002c4c7) battery_pane_ParamLimits

0xd40c,	// (0x0002c4c7) battery_pane

0x59d6,	// (0x00024a91) bg_status_flat_pane_g8

0x59de,	// (0x00024a99) bg_status_flat_pane_g9

0x4d85,	// (0x00023e40) context_pane_ParamLimits

0x4d85,	// (0x00023e40) context_pane

0xd577,	// (0x0002c632) navi_pane_ParamLimits

0xd577,	// (0x0002c632) navi_pane

0xd5ee,	// (0x0002c6a9) signal_pane_ParamLimits

0xd5ee,	// (0x0002c6a9) signal_pane

0x0008,

0xf885,	// (0x0002e940) bg_status_flat_pane_g

0xd67e,	// (0x0002c739) status_pane_g1_ParamLimits

0xd67e,	// (0x0002c739) status_pane_g1

0xd694,	// (0x0002c74f) status_pane_g2_ParamLimits

0xd694,	// (0x0002c74f) status_pane_g2

0x4fa5,	// (0x00024060) status_pane_g3_ParamLimits

0x4fa5,	// (0x00024060) status_pane_g3

0x0004,

0xf7b8,	// (0x0002e873) status_pane_g_ParamLimits

0xf7b8,	// (0x0002e873) status_pane_g

0xd6a0,	// (0x0002c75b) title_pane_ParamLimits

0xd6a0,	// (0x0002c75b) title_pane

0xd701,	// (0x0002c7bc) uni_indicator_pane_ParamLimits

0xd701,	// (0x0002c7bc) uni_indicator_pane

0x4648,	// (0x00023703) bg_list_pane_ParamLimits

0x4648,	// (0x00023703) bg_list_pane

0xccc0,	// (0x0002bd7b) find_pane

0xccc8,	// (0x0002bd83) listscroll_app_pane_ParamLimits

0xccc8,	// (0x0002bd83) listscroll_app_pane

0x4674,	// (0x0002372f) listscroll_form_pane

0xccd4,	// (0x0002bd8f) listscroll_gen_pane_ParamLimits

0xccd4,	// (0x0002bd8f) listscroll_gen_pane

0x4674,	// (0x0002372f) listscroll_set_pane

0x657f,	// (0x0002563a) main_idle_act_pane

0x4328,	// (0x000233e3) main_idle_trad_pane

0x4328,	// (0x000233e3) main_list_empty_pane

0x468e,	// (0x00023749) main_midp_pane

0x469a,	// (0x00023755) main_pane_g1_ParamLimits

0x469a,	// (0x00023755) main_pane_g1

0xcce8,	// (0x0002bda3) popup_ai_message_window_ParamLimits

0xcce8,	// (0x0002bda3) popup_ai_message_window

0xcd79,	// (0x0002be34) popup_fep_china_uni_window_ParamLimits

0xcd79,	// (0x0002be34) popup_fep_china_uni_window

0x47a6,	// (0x00023861) popup_fep_japan_candidate_window_ParamLimits

0x47a6,	// (0x00023861) popup_fep_japan_candidate_window

0x47c6,	// (0x00023881) popup_fep_japan_predictive_window_ParamLimits

0x47c6,	// (0x00023881) popup_fep_japan_predictive_window

0xcdd5,	// (0x0002be90) popup_find_window

0xcdf2,	// (0x0002bead) popup_grid_graphic_window_ParamLimits

0xcdf2,	// (0x0002bead) popup_grid_graphic_window

0x482b,	// (0x000238e6) popup_large_graphic_colour_window

0xce8a,	// (0x0002bf45) popup_menu_window_ParamLimits

0xce8a,	// (0x0002bf45) popup_menu_window

0xd044,	// (0x0002c0ff) popup_note_image_window

0xd00a,	// (0x0002c0c5) popup_note_wait_window_ParamLimits

0xd00a,	// (0x0002c0c5) popup_note_wait_window

0xd05c,	// (0x0002c117) popup_note_window_ParamLimits

0xd05c,	// (0x0002c117) popup_note_window

0xd102,	// (0x0002c1bd) popup_query_code_window_ParamLimits

0xd102,	// (0x0002c1bd) popup_query_code_window

0x4a73,	// (0x00023b2e) popup_query_data_code_window_ParamLimits

0x4a73,	// (0x00023b2e) popup_query_data_code_window

0xd13c,	// (0x0002c1f7) popup_query_data_window_ParamLimits

0xd13c,	// (0x0002c1f7) popup_query_data_window

0xd1b2,	// (0x0002c26d) popup_query_sat_info_window_ParamLimits

0xd1b2,	// (0x0002c26d) popup_query_sat_info_window

0xd249,	// (0x0002c304) popup_snote_single_graphic_window_ParamLimits

0xd249,	// (0x0002c304) popup_snote_single_graphic_window

0xd249,	// (0x0002c304) popup_snote_single_text_window_ParamLimits

0xd249,	// (0x0002c304) popup_snote_single_text_window

0x4afa,	// (0x00023bb5) popup_sub_window_general

0x4c2a,	// (0x00023ce5) popup_window_general_ParamLimits

0x4c2a,	// (0x00023ce5) popup_window_general

0x4c3f,	// (0x00023cfa) power_save_pane

0xc207,	// (0x0002b2c2) control_pane_g1_ParamLimits

0xc207,	// (0x0002b2c2) control_pane_g1

0x1bcd,	// (0x00020c88) control_pane_g2_ParamLimits

0x1bcd,	// (0x00020c88) control_pane_g2

0x45f1,	// (0x000236ac) control_pane_g3_ParamLimits

0x45f1,	// (0x000236ac) control_pane_g3

0x0007,

0xf7a0,	// (0x0002e85b) control_pane_g_ParamLimits

0xf7a0,	// (0x0002e85b) control_pane_g

0xc246,	// (0x0002b301) control_pane_t1_ParamLimits

0xc246,	// (0x0002b301) control_pane_t1

0xc2a4,	// (0x0002b35f) control_pane_t2_ParamLimits

0xc2a4,	// (0x0002b35f) control_pane_t2

0x0002,

0xf7b1,	// (0x0002e86c) control_pane_t_ParamLimits

0xf7b1,	// (0x0002e86c) control_pane_t

0x4512,	// (0x000235cd) navi_navi_volume_pane_cp1

0x451b,	// (0x000235d6) status_small_icon_pane

0x4523,	// (0x000235de) status_small_pane_g1_ParamLimits

0x4523,	// (0x000235de) status_small_pane_g1

0x4557,	// (0x00023612) status_small_pane_g2_ParamLimits

0x4557,	// (0x00023612) status_small_pane_g2

0x4563,	// (0x0002361e) status_small_pane_g3_ParamLimits

0x4563,	// (0x0002361e) status_small_pane_g3

0x456f,	// (0x0002362a) status_small_pane_g4_ParamLimits

0x456f,	// (0x0002362a) status_small_pane_g4

0x457b,	// (0x00023636) status_small_pane_g5_ParamLimits

0x457b,	// (0x00023636) status_small_pane_g5

0x458a,	// (0x00023645) status_small_pane_g6_ParamLimits

0x458a,	// (0x00023645) status_small_pane_g6

0x0007,

0xf78f,	// (0x0002e84a) status_small_pane_g_ParamLimits

0xf78f,	// (0x0002e84a) status_small_pane_g

0x45ba,	// (0x00023675) status_small_pane_t1

0x45dd,	// (0x00023698) status_small_wait_pane_ParamLimits

0x45dd,	// (0x00023698) status_small_wait_pane

0xcb16,	// (0x0002bbd1) aid_levels_signal_ParamLimits

0xcb16,	// (0x0002bbd1) aid_levels_signal

0xcb2e,	// (0x0002bbe9) signal_pane_g1_ParamLimits

0xcb2e,	// (0x0002bbe9) signal_pane_g1

0xcb49,	// (0x0002bc04) signal_pane_g2_ParamLimits

0xcb49,	// (0x0002bc04) signal_pane_g2

0x0001,

0xf724,	// (0x0002e7df) signal_pane_g_ParamLimits

0xf724,	// (0x0002e7df) signal_pane_g

0x3e07,	// (0x00022ec2) context_pane_g1

0xbe5e,	// (0x0002af19) title_pane_g1

0xbe93,	// (0x0002af4e) title_pane_t1

0x2e1f,	// (0x00021eda) title_pane_t2

0x2e45,	// (0x00021f00) title_pane_t3

0x0002,

0xf573,	// (0x0002e62e) title_pane_t

0xd729,	// (0x0002c7e4) aid_levels_battery_ParamLimits

0xd729,	// (0x0002c7e4) aid_levels_battery

0xd745,	// (0x0002c800) battery_pane_g1_ParamLimits

0xd745,	// (0x0002c800) battery_pane_g1

0xd762,	// (0x0002c81d) battery_pane_g2_ParamLimits

0xd762,	// (0x0002c81d) battery_pane_g2

0x0001,

0xf7c3,	// (0x0002e87e) battery_pane_g_ParamLimits

0xf7c3,	// (0x0002e87e) battery_pane_g

0xd967,	// (0x0002ca22) uni_indicator_pane_g1

0xd97c,	// (0x0002ca37) uni_indicator_pane_g2

0xd991,	// (0x0002ca4c) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0002e9e8) uni_indicator_pane_g

0x419a,	// (0x00023255) navi_icon_pane_ParamLimits

0x419a,	// (0x00023255) navi_icon_pane

0x40e3,	// (0x0002319e) navi_midp_pane

0x41b6,	// (0x00023271) navi_navi_pane

0x41c0,	// (0x0002327b) navi_text_pane_ParamLimits

0x41c0,	// (0x0002327b) navi_text_pane

0x2d6d,	// (0x00021e28) status_small_wait_pane_g1

0x3274,	// (0x0002232f) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0002e9e3) status_small_wait_pane_g

0x6043,	// (0x000250fe) navi_navi_icon_text_pane

0x604b,	// (0x00025106) navi_navi_pane_g1_ParamLimits

0x604b,	// (0x00025106) navi_navi_pane_g1

0x605d,	// (0x00025118) navi_navi_pane_g2_ParamLimits

0x605d,	// (0x00025118) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0002e9b1) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0002e9b1) navi_navi_pane_g

0x606f,	// (0x0002512a) navi_navi_tabs_pane

0x6078,	// (0x00025133) navi_navi_text_pane

0x6043,	// (0x000250fe) navi_navi_volume_pane

0xd928,	// (0x0002c9e3) navi_text_pane_t1

0xd91c,	// (0x0002c9d7) navi_icon_pane_g1

0x5f60,	// (0x0002501b) navi_navi_text_pane_t1

0xc4f1,	// (0x0002b5ac) navi_navi_volume_pane_g1

0xc4f9,	// (0x0002b5b4) volume_small_pane

0xd878,	// (0x0002c933) navi_navi_icon_text_pane_g1

0xd880,	// (0x0002c93b) navi_navi_icon_text_pane_t1

0x41b6,	// (0x00023271) navi_tabs_2_long_pane

0x41b6,	// (0x00023271) navi_tabs_2_pane

0x41b6,	// (0x00023271) navi_tabs_3_long_pane

0x41b6,	// (0x00023271) navi_tabs_3_pane

0x41b6,	// (0x00023271) navi_tabs_4_pane

0xc4d1,	// (0x0002b58c) tabs_2_active_pane_ParamLimits

0xc4d1,	// (0x0002b58c) tabs_2_active_pane

0xc4e1,	// (0x0002b59c) tabs_2_passive_pane_ParamLimits

0xc4e1,	// (0x0002b59c) tabs_2_passive_pane

0xc49f,	// (0x0002b55a) tabs_3_active_pane_ParamLimits

0xc49f,	// (0x0002b55a) tabs_3_active_pane

0xc4af,	// (0x0002b56a) tabs_3_passive_pane_ParamLimits

0xc4af,	// (0x0002b56a) tabs_3_passive_pane

0xc4c0,	// (0x0002b57b) tabs_3_passive_pane_cp_ParamLimits

0xc4c0,	// (0x0002b57b) tabs_3_passive_pane_cp

0xc45b,	// (0x0002b516) tabs_4_active_pane_ParamLimits

0xc45b,	// (0x0002b516) tabs_4_active_pane

0xc46c,	// (0x0002b527) tabs_4_passive_pane_ParamLimits

0xc46c,	// (0x0002b527) tabs_4_passive_pane

0xc47d,	// (0x0002b538) tabs_4_passive_pane_cp_ParamLimits

0xc47d,	// (0x0002b538) tabs_4_passive_pane_cp

0xc48e,	// (0x0002b549) tabs_4_passive_pane_cp2_ParamLimits

0xc48e,	// (0x0002b549) tabs_4_passive_pane_cp2

0xc43b,	// (0x0002b4f6) tabs_2_long_active_pane_ParamLimits

0xc43b,	// (0x0002b4f6) tabs_2_long_active_pane

0xc44b,	// (0x0002b506) tabs_2_long_passive_pane_ParamLimits

0xc44b,	// (0x0002b506) tabs_2_long_passive_pane

0xc408,	// (0x0002b4c3) tabs_3_long_active_pane_ParamLimits

0xc408,	// (0x0002b4c3) tabs_3_long_active_pane

0xc419,	// (0x0002b4d4) tabs_3_long_passive_pane_ParamLimits

0xc419,	// (0x0002b4d4) tabs_3_long_passive_pane

0xc42a,	// (0x0002b4e5) tabs_3_long_passive_pane_cp_ParamLimits

0xc42a,	// (0x0002b4e5) tabs_3_long_passive_pane_cp

0x1e25,	// (0x00020ee0) volume_small_pane_g1

0xc3b7,	// (0x0002b472) volume_small_pane_g2

0xc3c0,	// (0x0002b47b) volume_small_pane_g3

0xc3c9,	// (0x0002b484) volume_small_pane_g4

0xc3d2,	// (0x0002b48d) volume_small_pane_g5

0xc3db,	// (0x0002b496) volume_small_pane_g6

0xc3e4,	// (0x0002b49f) volume_small_pane_g7

0xc3ed,	// (0x0002b4a8) volume_small_pane_g8

0xc3f6,	// (0x0002b4b1) volume_small_pane_g9

0xc3ff,	// (0x0002b4ba) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0002e97d) volume_small_pane_g

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp2_ParamLimits

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp2

0xbf1f,	// (0x0002afda) tabs_3_active_pane_g1

0xbf27,	// (0x0002afe2) tabs_3_active_pane_t1

0x30d2,	// (0x0002218d) bg_passive_tab_pane_cp2_ParamLimits

0x30d2,	// (0x0002218d) bg_passive_tab_pane_cp2

0xbf1f,	// (0x0002afda) tabs_3_passive_pane_g1

0xbf27,	// (0x0002afe2) tabs_3_passive_pane_t1

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp3_ParamLimits

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp3

0xbf39,	// (0x0002aff4) tabs_4_active_pane_g1

0xbf41,	// (0x0002affc) tabs_4_active_pane_t1

0x30d2,	// (0x0002218d) bg_passive_tab_pane_cp3_ParamLimits

0x30d2,	// (0x0002218d) bg_passive_tab_pane_cp3

0xbf39,	// (0x0002aff4) tabs_4_1_passive_pane_g1

0xbf41,	// (0x0002affc) tabs_4_1_passive_pane_t1

0x468e,	// (0x00023749) list_highlight_pane_cp2

0xda1a,	// (0x0002cad5) list_set_pane_ParamLimits

0xda1a,	// (0x0002cad5) list_set_pane

0xdab4,	// (0x0002cb6f) main_pane_set_t1_ParamLimits

0xdab4,	// (0x0002cb6f) main_pane_set_t1

0xdad4,	// (0x0002cb8f) main_pane_set_t2_ParamLimits

0xdad4,	// (0x0002cb8f) main_pane_set_t2

0xdae8,	// (0x0002cba3) main_pane_set_t3_ParamLimits

0xdae8,	// (0x0002cba3) main_pane_set_t3

0xdafa,	// (0x0002cbb5) main_pane_set_t4_ParamLimits

0xdafa,	// (0x0002cbb5) main_pane_set_t4

0x0003,

0xf992,	// (0x0002ea4d) main_pane_set_t_ParamLimits

0xf992,	// (0x0002ea4d) main_pane_set_t

0xdb0c,	// (0x0002cbc7) setting_code_pane

0xdb16,	// (0x0002cbd1) setting_slider_graphic_pane

0xdb16,	// (0x0002cbd1) setting_slider_pane

0xdb16,	// (0x0002cbd1) setting_text_pane

0xdb16,	// (0x0002cbd1) setting_volume_pane

0x168a,	// (0x00020745) volume_set_pane

0x2e57,	// (0x00021f12) bg_set_opt_pane_cp

0x1692,	// (0x0002074d) setting_slider_pane_t1

0x16ab,	// (0x00020766) setting_slider_pane_t2

0x16c5,	// (0x00020780) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0002e635) setting_slider_pane_t

0x16dd,	// (0x00020798) slider_set_pane

0x2d77,	// (0x00021e32) bg_set_opt_pane_cp2

0x2e99,	// (0x00021f54) setting_slider_graphic_pane_g1

0x16f3,	// (0x000207ae) setting_slider_graphic_pane_t1

0x1703,	// (0x000207be) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0002e63c) setting_slider_graphic_pane_t

0x1713,	// (0x000207ce) slider_set_pane_cp

0x2d77,	// (0x00021e32) input_focus_pane_cp1

0x6566,	// (0x00025621) list_set_text_pane

0x2d6d,	// (0x00021e28) setting_text_pane_g1

0x2d77,	// (0x00021e32) input_focus_pane_cp2

0x2d6d,	// (0x00021e28) setting_code_pane_g1

0x2ea2,	// (0x00021f5d) setting_code_pane_t1

0x0295,	// (0x0001f350) set_text_pane_t1_ParamLimits

0x0295,	// (0x0001f350) set_text_pane_t1

0x372a,	// (0x000227e5) set_opt_bg_pane_g1

0x3732,	// (0x000227ed) set_opt_bg_pane_g2

0x6540,	// (0x000255fb) set_opt_bg_pane_g3

0x3742,	// (0x000227fd) set_opt_bg_pane_g4

0x374a,	// (0x00022805) set_opt_bg_pane_g5

0x3752,	// (0x0002280d) set_opt_bg_pane_g6

0x654a,	// (0x00025605) set_opt_bg_pane_g7

0x6552,	// (0x0002560d) set_opt_bg_pane_g8

0x655c,	// (0x00025617) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0002ea3a) set_opt_bg_pane_g

0x6533,	// (0x000255ee) slider_set_pane_g1

0x1fed,	// (0x000210a8) slider_set_pane_g2

0x0006,

0xf970,	// (0x0002ea2b) slider_set_pane_g

0x1f89,	// (0x00021044) volume_set_pane_g1

0x1f91,	// (0x0002104c) volume_set_pane_g2

0x1f99,	// (0x00021054) volume_set_pane_g3

0x1fa1,	// (0x0002105c) volume_set_pane_g4

0x1fa9,	// (0x00021064) volume_set_pane_g5

0x1fb1,	// (0x0002106c) volume_set_pane_g6

0x1fb9,	// (0x00021074) volume_set_pane_g7

0x1fc1,	// (0x0002107c) volume_set_pane_g8

0x1fc9,	// (0x00021084) volume_set_pane_g9

0x1fd1,	// (0x0002108c) volume_set_pane_g10

0x0009,

0xf948,	// (0x0002ea03) volume_set_pane_g

0xbf53,	// (0x0002b00e) indicator_pane_ParamLimits

0xbf53,	// (0x0002b00e) indicator_pane

0xbf7b,	// (0x0002b036) main_idle_pane_g2_ParamLimits

0xbf7b,	// (0x0002b036) main_idle_pane_g2

0xbfb3,	// (0x0002b06e) main_pane_idle_g1_ParamLimits

0xbfb3,	// (0x0002b06e) main_pane_idle_g1

0x2ef1,	// (0x00021fac) popup_clock_digital_analogue_window_ParamLimits

0x2ef1,	// (0x00021fac) popup_clock_digital_analogue_window

0xbfda,	// (0x0002b095) soft_indicator_pane_ParamLimits

0xbfda,	// (0x0002b095) soft_indicator_pane

0xbff4,	// (0x0002b0af) wallpaper_pane_ParamLimits

0xbff4,	// (0x0002b0af) wallpaper_pane

0x2d6d,	// (0x00021e28) wallpaper_pane_g1

0xc006,	// (0x0002b0c1) indicator_pane_g1_ParamLimits

0xc006,	// (0x0002b0c1) indicator_pane_g1

0x6936,	// (0x000259f1) navi_navi_icon_text_pane_srt_g1

0x2f43,	// (0x00021ffe) soft_indicator_pane_t1

0x2f5d,	// (0x00022018) aid_ps_area_pane

0xc01c,	// (0x0002b0d7) aid_ps_clock_pane

0x2f7c,	// (0x00022037) aid_ps_indicator_pane

0x2f88,	// (0x00022043) indicator_ps_pane_ParamLimits

0x2f88,	// (0x00022043) indicator_ps_pane

0x2f97,	// (0x00022052) power_save_pane_g1_ParamLimits

0x2f97,	// (0x00022052) power_save_pane_g1

0x2fa3,	// (0x0002205e) power_save_pane_g2_ParamLimits

0x2fa3,	// (0x0002205e) power_save_pane_g2

0x12a5,	// (0x00020360) aid_navinavi_width_pane

0x2f5d,	// (0x00022018) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0002e641) power_save_pane_g_ParamLimits

0xf586,	// (0x0002e641) power_save_pane_g

0x2fb1,	// (0x0002206c) power_save_pane_t1_ParamLimits

0x2fb1,	// (0x0002206c) power_save_pane_t1

0xc01c,	// (0x0002b0d7) aid_ps_clock_pane_ParamLimits

0x2f7c,	// (0x00022037) aid_ps_indicator_pane_ParamLimits

0x2fc3,	// (0x0002207e) power_save_pane_t4_ParamLimits

0x2fc3,	// (0x0002207e) power_save_pane_t4

0x0001,

0xf58b,	// (0x0002e646) power_save_pane_t_ParamLimits

0xf58b,	// (0x0002e646) power_save_pane_t

0x2fed,	// (0x000220a8) power_save_t3_ParamLimits

0x2fed,	// (0x000220a8) power_save_t3

0x2fd8,	// (0x00022093) power_save_t2_ParamLimits

0x2fd8,	// (0x00022093) power_save_t2

0x3002,	// (0x000220bd) indicator_ps_pane_g1

0xc02a,	// (0x0002b0e5) ai_gene_pane_ParamLimits

0xc02a,	// (0x0002b0e5) ai_gene_pane

0xc041,	// (0x0002b0fc) ai_links_pane_ParamLimits

0xc041,	// (0x0002b0fc) ai_links_pane

0xc059,	// (0x0002b114) indicator_pane_cp1_ParamLimits

0xc059,	// (0x0002b114) indicator_pane_cp1

0xc068,	// (0x0002b123) main_pane_idle_g1_cp_ParamLimits

0xc068,	// (0x0002b123) main_pane_idle_g1_cp

0x303b,	// (0x000220f6) popup_ai_links_title_window

0xc080,	// (0x0002b13b) soft_indicator_pane_cp1_ParamLimits

0xc080,	// (0x0002b13b) soft_indicator_pane_cp1

0x630c,	// (0x000253c7) ai_links_pane_g1

0x6315,	// (0x000253d0) grid_ai_links_pane

0xd95e,	// (0x0002ca19) ai_gene_pane_1

0x62fa,	// (0x000253b5) ai_gene_pane_2

0x6303,	// (0x000253be) list_highlight_pane_cp4

0xd93a,	// (0x0002c9f5) cell_ai_link_pane_ParamLimits

0xd93a,	// (0x0002c9f5) cell_ai_link_pane

0x62cb,	// (0x00025386) cell_ai_link_pane_g1

0x3274,	// (0x0002232f) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0002e9de) cell_ai_link_pane_g

0x2d77,	// (0x00021e32) grid_highlight_cp2

0x2d77,	// (0x00021e32) bg_popup_sub_pane_cp1

0x305e,	// (0x00022119) popup_ai_links_title_window_t1

0x6219,	// (0x000252d4) ai_gene_pane_1_g1_ParamLimits

0x6219,	// (0x000252d4) ai_gene_pane_1_g1

0x6225,	// (0x000252e0) ai_gene_pane_1_g2_ParamLimits

0x6225,	// (0x000252e0) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0002e9d4) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0002e9d4) ai_gene_pane_1_g

0x6232,	// (0x000252ed) ai_gene_pane_1_t1_ParamLimits

0x6232,	// (0x000252ed) ai_gene_pane_1_t1

0x6266,	// (0x00025321) grid_ai_soft_ind_pane

0x6204,	// (0x000252bf) ai_gene_pane_2_t1_ParamLimits

0x6204,	// (0x000252bf) ai_gene_pane_2_t1

0xc094,	// (0x0002b14f) main_pane_empty_t1_ParamLimits

0xc094,	// (0x0002b14f) main_pane_empty_t1

0xc0ac,	// (0x0002b167) main_pane_empty_t2_ParamLimits

0xc0ac,	// (0x0002b167) main_pane_empty_t2

0xc0c1,	// (0x0002b17c) main_pane_empty_t3_ParamLimits

0xc0c1,	// (0x0002b17c) main_pane_empty_t3

0xc0d3,	// (0x0002b18e) main_pane_empty_t4_ParamLimits

0xc0d3,	// (0x0002b18e) main_pane_empty_t4

0xc0e5,	// (0x0002b1a0) main_pane_empty_t5_ParamLimits

0xc0e5,	// (0x0002b1a0) main_pane_empty_t5

0x0004,

0xf590,	// (0x0002e64b) main_pane_empty_t_ParamLimits

0xf590,	// (0x0002e64b) main_pane_empty_t

0x377b,	// (0x00022836) bg_popup_window_pane_ParamLimits

0x377b,	// (0x00022836) bg_popup_window_pane

0x5f6e,	// (0x00025029) find_popup_pane_cp2_ParamLimits

0x5f6e,	// (0x00025029) find_popup_pane_cp2

0x5f7a,	// (0x00025035) heading_pane_ParamLimits

0x5f7a,	// (0x00025035) heading_pane

0x2d77,	// (0x00021e32) bg_popup_sub_pane

0xd89d,	// (0x0002c958) bg_popup_window_pane_g1_ParamLimits

0xd89d,	// (0x0002c958) bg_popup_window_pane_g1

0xd8ac,	// (0x0002c967) bg_popup_window_pane_g2_ParamLimits

0xd8ac,	// (0x0002c967) bg_popup_window_pane_g2

0xd8b8,	// (0x0002c973) bg_popup_window_pane_g3_ParamLimits

0xd8b8,	// (0x0002c973) bg_popup_window_pane_g3

0xd8c4,	// (0x0002c97f) bg_popup_window_pane_g4_ParamLimits

0xd8c4,	// (0x0002c97f) bg_popup_window_pane_g4

0xd8d3,	// (0x0002c98e) bg_popup_window_pane_g5_ParamLimits

0xd8d3,	// (0x0002c98e) bg_popup_window_pane_g5

0xd8e3,	// (0x0002c99e) bg_popup_window_pane_g6_ParamLimits

0xd8e3,	// (0x0002c99e) bg_popup_window_pane_g6

0xd8ef,	// (0x0002c9aa) bg_popup_window_pane_g7_ParamLimits

0xd8ef,	// (0x0002c9aa) bg_popup_window_pane_g7

0xd8fe,	// (0x0002c9b9) bg_popup_window_pane_g8_ParamLimits

0xd8fe,	// (0x0002c9b9) bg_popup_window_pane_g8

0xd90d,	// (0x0002c9c8) bg_popup_window_pane_g9_ParamLimits

0xd90d,	// (0x0002c9c8) bg_popup_window_pane_g9

0x5f54,	// (0x0002500f) bg_popup_window_pane_g10_ParamLimits

0x5f54,	// (0x0002500f) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0002e99c) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0002e99c) bg_popup_window_pane_g

0x5e7d,	// (0x00024f38) bg_popup_heading_pane_ParamLimits

0x5e7d,	// (0x00024f38) bg_popup_heading_pane

0x2075,	// (0x00021130) tabs_4_passive_pane_cp_srt_ParamLimits

0x2075,	// (0x00021130) tabs_4_passive_pane_cp_srt

0x2087,	// (0x00021142) tabs_4_passive_pane_srt_ParamLimits

0x5e91,	// (0x00024f4c) heading_pane_g2

0x2087,	// (0x00021142) tabs_4_passive_pane_srt

0x5220,	// (0x000242db) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5220,	// (0x000242db) bg_passive_tab_pane_cp3_srt

0x5e99,	// (0x00024f54) heading_pane_t1_ParamLimits

0x5e99,	// (0x00024f54) heading_pane_t1

0x5eb0,	// (0x00024f6b) heading_pane_t2_ParamLimits

0x5eb0,	// (0x00024f6b) heading_pane_t2

0x0001,

0xf8dc,	// (0x0002e997) heading_pane_t_ParamLimits

0xf8dc,	// (0x0002e997) heading_pane_t

0x599e,	// (0x00024a59) bg_popup_heading_pane_g1

0x5a4d,	// (0x00024b08) bg_popup_heading_pane_g2

0x5a57,	// (0x00024b12) bg_popup_heading_pane_g3

0x5a61,	// (0x00024b1c) bg_popup_heading_pane_g4

0x5a6b,	// (0x00024b26) bg_popup_heading_pane_g5

0x5a75,	// (0x00024b30) bg_popup_heading_pane_g6

0x5a7d,	// (0x00024b38) bg_popup_heading_pane_g7

0x5a85,	// (0x00024b40) bg_popup_heading_pane_g8

0x5a8f,	// (0x00024b4a) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0002e953) bg_popup_heading_pane_g

0x5130,	// (0x000241eb) bg_popup_sub_pane_g1

0x5138,	// (0x000241f3) bg_popup_sub_pane_g2

0x5140,	// (0x000241fb) bg_popup_sub_pane_g3

0x5148,	// (0x00024203) bg_popup_sub_pane_g4

0x5150,	// (0x0002420b) bg_popup_sub_pane_g5

0x5158,	// (0x00024213) bg_popup_sub_pane_g6

0x5160,	// (0x0002421b) bg_popup_sub_pane_g7

0x5168,	// (0x00024223) bg_popup_sub_pane_g8

0x5170,	// (0x0002422b) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0002e92d) bg_popup_sub_pane_g

0x30d2,	// (0x0002218d) bg_popup_window_pane_cp5_ParamLimits

0x30d2,	// (0x0002218d) bg_popup_window_pane_cp5

0x30ee,	// (0x000221a9) popup_note_window_g1_ParamLimits

0x30ee,	// (0x000221a9) popup_note_window_g1

0x30fa,	// (0x000221b5) popup_note_window_t1_ParamLimits

0x30fa,	// (0x000221b5) popup_note_window_t1

0x3110,	// (0x000221cb) popup_note_window_t2_ParamLimits

0x3110,	// (0x000221cb) popup_note_window_t2

0x3126,	// (0x000221e1) popup_note_window_t3_ParamLimits

0x3126,	// (0x000221e1) popup_note_window_t3

0x313c,	// (0x000221f7) popup_note_window_t4_ParamLimits

0x313c,	// (0x000221f7) popup_note_window_t4

0x3164,	// (0x0002221f) popup_note_window_t5_ParamLimits

0x3164,	// (0x0002221f) popup_note_window_t5

0x0004,

0xf59b,	// (0x0002e656) popup_note_window_t_ParamLimits

0xf59b,	// (0x0002e656) popup_note_window_t

0x3188,	// (0x00022243) bg_popup_window_pane_cp6_ParamLimits

0x3188,	// (0x00022243) bg_popup_window_pane_cp6

0x591a,	// (0x000249d5) popup_note_image_window_g1_ParamLimits

0x591a,	// (0x000249d5) popup_note_image_window_g1

0x5926,	// (0x000249e1) popup_note_image_window_g2_ParamLimits

0x5926,	// (0x000249e1) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0002e921) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0002e921) popup_note_image_window_g

0x593f,	// (0x000249fa) popup_note_image_window_t1_ParamLimits

0x593f,	// (0x000249fa) popup_note_image_window_t1

0x5958,	// (0x00024a13) popup_note_image_window_t2_ParamLimits

0x5958,	// (0x00024a13) popup_note_image_window_t2

0x5971,	// (0x00024a2c) popup_note_image_window_t3_ParamLimits

0x5971,	// (0x00024a2c) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0002e926) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0002e926) popup_note_image_window_t

0x57db,	// (0x00024896) bg_popup_window_pane_cp7_ParamLimits

0x57db,	// (0x00024896) bg_popup_window_pane_cp7

0x580b,	// (0x000248c6) popup_note_wait_window_g1_ParamLimits

0x580b,	// (0x000248c6) popup_note_wait_window_g1

0x5817,	// (0x000248d2) popup_note_wait_window_g2_ParamLimits

0x5817,	// (0x000248d2) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0002e90f) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0002e90f) popup_note_wait_window_g

0x582f,	// (0x000248ea) popup_note_wait_window_t1_ParamLimits

0x582f,	// (0x000248ea) popup_note_wait_window_t1

0x5856,	// (0x00024911) popup_note_wait_window_t2_ParamLimits

0x5856,	// (0x00024911) popup_note_wait_window_t2

0x5873,	// (0x0002492e) popup_note_wait_window_t3_ParamLimits

0x5873,	// (0x0002492e) popup_note_wait_window_t3

0x5886,	// (0x00024941) popup_note_wait_window_t4_ParamLimits

0x5886,	// (0x00024941) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0002e916) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0002e916) popup_note_wait_window_t

0x58ab,	// (0x00024966) wait_bar_pane_ParamLimits

0x58ab,	// (0x00024966) wait_bar_pane

0x2d77,	// (0x00021e32) wait_anim_pane

0x2d77,	// (0x00021e32) wait_border_pane

0x2d6d,	// (0x00021e28) wait_anim_pane_g1

0x2d6d,	// (0x00021e28) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0002e7da) wait_anim_pane_g

0x577f,	// (0x0002483a) wait_border_pane_g1

0x578a,	// (0x00024845) wait_border_pane_g2

0x5793,	// (0x0002484e) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0002e908) wait_border_pane_g

0x55ea,	// (0x000246a5) bg_popup_window_pane_cp16_ParamLimits

0x55ea,	// (0x000246a5) bg_popup_window_pane_cp16

0x56ea,	// (0x000247a5) indicator_popup_pane_cp4_ParamLimits

0x56ea,	// (0x000247a5) indicator_popup_pane_cp4

0x56fe,	// (0x000247b9) popup_query_data_window_t1_ParamLimits

0x56fe,	// (0x000247b9) popup_query_data_window_t1

0x5710,	// (0x000247cb) popup_query_data_window_t2_ParamLimits

0x5710,	// (0x000247cb) popup_query_data_window_t2

0x5729,	// (0x000247e4) popup_query_data_window_t3_ParamLimits

0x5729,	// (0x000247e4) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0002e901) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0002e901) popup_query_data_window_t

0x5743,	// (0x000247fe) query_popup_data_pane_ParamLimits

0x5743,	// (0x000247fe) query_popup_data_pane

0x5757,	// (0x00024812) query_popup_data_pane_cp1_ParamLimits

0x5757,	// (0x00024812) query_popup_data_pane_cp1

0x55ea,	// (0x000246a5) bg_popup_window_pane_cp10_ParamLimits

0x55ea,	// (0x000246a5) bg_popup_window_pane_cp10

0x561c,	// (0x000246d7) indicator_popup_pane_ParamLimits

0x561c,	// (0x000246d7) indicator_popup_pane

0x563e,	// (0x000246f9) popup_query_code_window_t1_ParamLimits

0x563e,	// (0x000246f9) popup_query_code_window_t1

0x5658,	// (0x00024713) popup_query_code_window_t2_ParamLimits

0x5658,	// (0x00024713) popup_query_code_window_t2

0x56a1,	// (0x0002475c) popup_query_code_window_t3_ParamLimits

0x56a1,	// (0x0002475c) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0002e8fa) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0002e8fa) popup_query_code_window_t

0x56d0,	// (0x0002478b) query_popup_pane_ParamLimits

0x56d0,	// (0x0002478b) query_popup_pane

0x3188,	// (0x00022243) bg_popup_window_pane_cp15_ParamLimits

0x3188,	// (0x00022243) bg_popup_window_pane_cp15

0x31a6,	// (0x00022261) indicator_popup_pane_cp1_ParamLimits

0x31a6,	// (0x00022261) indicator_popup_pane_cp1

0x31b9,	// (0x00022274) indicator_popup_pane_cp2_ParamLimits

0x31b9,	// (0x00022274) indicator_popup_pane_cp2

0x31cc,	// (0x00022287) popup_query_data_code_window_g1_ParamLimits

0x31cc,	// (0x00022287) popup_query_data_code_window_g1

0x31df,	// (0x0002229a) popup_query_data_code_window_t1_ParamLimits

0x31df,	// (0x0002229a) popup_query_data_code_window_t1

0x31f1,	// (0x000222ac) popup_query_data_code_window_t2_ParamLimits

0x31f1,	// (0x000222ac) popup_query_data_code_window_t2

0x3203,	// (0x000222be) popup_query_data_code_window_t3_ParamLimits

0x3203,	// (0x000222be) popup_query_data_code_window_t3

0x3219,	// (0x000222d4) popup_query_data_code_window_t4_ParamLimits

0x3219,	// (0x000222d4) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0002e661) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0002e661) popup_query_data_code_window_t

0x1d4e,	// (0x00020e09) list_single_midp_graphic_pane_g3

0x3231,	// (0x000222ec) query_popup_data_pane_cp2_ParamLimits

0x3244,	// (0x000222ff) query_popup_pane_cp2_ParamLimits

0x3244,	// (0x000222ff) query_popup_pane_cp2

0x2d77,	// (0x00021e32) bg_popup_window_pane_cp11

0x55e2,	// (0x0002469d) heading_pane_cp5

0x332c,	// (0x000223e7) listscroll_popup_info_pane

0x2d77,	// (0x00021e32) input_focus_pane_cp3

0x3257,	// (0x00022312) query_popup_pane_t1

0x3265,	// (0x00022320) list_popup_info_pane_ParamLimits

0x3265,	// (0x00022320) list_popup_info_pane

0x3274,	// (0x0002232f) listscroll_popup_info_pane_g1

0x327c,	// (0x00022337) scroll_pane_cp7

0x3286,	// (0x00022341) popup_info_list_pane_t1_ParamLimits

0x3286,	// (0x00022341) popup_info_list_pane_t1

0x32a0,	// (0x0002235b) popup_info_list_pane_t2_ParamLimits

0x32a0,	// (0x0002235b) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0002e66a) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0002e66a) popup_info_list_pane_t

0x2d77,	// (0x00021e32) bg_popup_window_pane_cp12

0x6950,	// (0x00025a0b) find_popup_pane

0x2e57,	// (0x00021f12) bg_popup_window_pane_cp3

0x32ba,	// (0x00022375) heading_pane_cp3

0x32c6,	// (0x00022381) listscroll_popup_graphic_pane

0x2d77,	// (0x00021e32) bg_popup_window_pane_cp4

0xc147,	// (0x0002b202) heading_pane_cp4

0x332c,	// (0x000223e7) listscroll_popup_colour_pane

0xc14f,	// (0x0002b20a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc14f,	// (0x0002b20a) cell_large_graphic_colour_none_popup_pane

0xc163,	// (0x0002b21e) grid_large_graphic_colour_popup_pane_ParamLimits

0xc163,	// (0x0002b21e) grid_large_graphic_colour_popup_pane

0xc187,	// (0x0002b242) listscroll_popup_colour_pane_g1_ParamLimits

0xc187,	// (0x0002b242) listscroll_popup_colour_pane_g1

0xc19e,	// (0x0002b259) listscroll_popup_colour_pane_g2_ParamLimits

0xc19e,	// (0x0002b259) listscroll_popup_colour_pane_g2

0xc1b5,	// (0x0002b270) listscroll_popup_colour_pane_g3_ParamLimits

0xc1b5,	// (0x0002b270) listscroll_popup_colour_pane_g3

0xc1c5,	// (0x0002b280) listscroll_popup_colour_pane_g4_ParamLimits

0xc1c5,	// (0x0002b280) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0002e66f) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0002e66f) listscroll_popup_colour_pane_g

0x33c6,	// (0x00022481) scroll_pane_cp6_ParamLimits

0x33c6,	// (0x00022481) scroll_pane_cp6

0xc1d5,	// (0x0002b290) cell_large_graphic_colour_popup_pane_ParamLimits

0xc1d5,	// (0x0002b290) cell_large_graphic_colour_popup_pane

0x33f7,	// (0x000224b2) cell_large_graphic_colour_none_popup_pane_t1

0x2d77,	// (0x00021e32) grid_highlight_pane_cp5

0x3406,	// (0x000224c1) cell_large_graphic_colour_popup_pane_g1

0x340e,	// (0x000224c9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0002e678) cell_large_graphic_colour_popup_pane_g

0x3416,	// (0x000224d1) cell_large_graphic_colour_popup_pane_g2_copy1

0x341f,	// (0x000224da) grid_highlight_pane_cp4

0x3427,	// (0x000224e2) bg_popup_window_pane_cp8_ParamLimits

0x3427,	// (0x000224e2) bg_popup_window_pane_cp8

0x3442,	// (0x000224fd) popup_snote_single_text_window_g1_ParamLimits

0x3442,	// (0x000224fd) popup_snote_single_text_window_g1

0x3454,	// (0x0002250f) popup_snote_single_text_window_t1_ParamLimits

0x3454,	// (0x0002250f) popup_snote_single_text_window_t1

0x3467,	// (0x00022522) popup_snote_single_text_window_t2_ParamLimits

0x3467,	// (0x00022522) popup_snote_single_text_window_t2

0x347a,	// (0x00022535) popup_snote_single_text_window_t3_ParamLimits

0x347a,	// (0x00022535) popup_snote_single_text_window_t3

0x34b3,	// (0x0002256e) popup_snote_single_text_window_t4_ParamLimits

0x34b3,	// (0x0002256e) popup_snote_single_text_window_t4

0x34e7,	// (0x000225a2) popup_snote_single_text_window_t5_ParamLimits

0x34e7,	// (0x000225a2) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0002e67d) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0002e67d) popup_snote_single_text_window_t

0x3516,	// (0x000225d1) bg_popup_window_pane_cp9_ParamLimits

0x3516,	// (0x000225d1) bg_popup_window_pane_cp9

0x3442,	// (0x000224fd) popup_snote_single_graphic_window_g1_ParamLimits

0x3442,	// (0x000224fd) popup_snote_single_graphic_window_g1

0x3524,	// (0x000225df) popup_snote_single_graphic_window_g2_ParamLimits

0x3524,	// (0x000225df) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0002e688) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0002e688) popup_snote_single_graphic_window_g

0x3530,	// (0x000225eb) popup_snote_single_graphic_window_t1_ParamLimits

0x3530,	// (0x000225eb) popup_snote_single_graphic_window_t1

0x3543,	// (0x000225fe) popup_snote_single_graphic_window_t2_ParamLimits

0x3543,	// (0x000225fe) popup_snote_single_graphic_window_t2

0x3556,	// (0x00022611) popup_snote_single_graphic_window_t3_ParamLimits

0x3556,	// (0x00022611) popup_snote_single_graphic_window_t3

0x358f,	// (0x0002264a) popup_snote_single_graphic_window_t4_ParamLimits

0x358f,	// (0x0002264a) popup_snote_single_graphic_window_t4

0x35c3,	// (0x0002267e) popup_snote_single_graphic_window_t5_ParamLimits

0x35c3,	// (0x0002267e) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002e68d) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002e68d) popup_snote_single_graphic_window_t

0x6894,	// (0x0002594f) grid_graphic_popup_pane_ParamLimits

0x6894,	// (0x0002594f) grid_graphic_popup_pane

0x68bc,	// (0x00025977) listscroll_popup_graphic_pane_g1_ParamLimits

0x68bc,	// (0x00025977) listscroll_popup_graphic_pane_g1

0xdc22,	// (0x0002ccdd) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc22,	// (0x0002ccdd) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0002ea77) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0002ea77) listscroll_popup_graphic_pane_g

0x68e4,	// (0x0002599f) scroll_pane_cp5

0xdbe6,	// (0x0002cca1) cell_graphic_popup_pane_ParamLimits

0xdbe6,	// (0x0002cca1) cell_graphic_popup_pane

0x681e,	// (0x000258d9) cell_graphic_popup_pane_g1

0x6826,	// (0x000258e1) cell_graphic_popup_pane_g2

0x3416,	// (0x000224d1) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0002ea70) cell_graphic_popup_pane_g

0x682f,	// (0x000258ea) cell_graphic_popup_pane_t2

0x341f,	// (0x000224da) grid_highlight_pane_cp3

0x3604,	// (0x000226bf) list_gen_pane_ParamLimits

0x3604,	// (0x000226bf) list_gen_pane

0x3636,	// (0x000226f1) scroll_pane

0xdba1,	// (0x0002cc5c) bg_list_pane_g1_ParamLimits

0xdba1,	// (0x0002cc5c) bg_list_pane_g1

0x679b,	// (0x00025856) bg_list_pane_g2_ParamLimits

0x679b,	// (0x00025856) bg_list_pane_g2

0x67ae,	// (0x00025869) bg_list_pane_g3_ParamLimits

0x67ae,	// (0x00025869) bg_list_pane_g3

0x67c0,	// (0x0002587b) bg_list_pane_g4_ParamLimits

0x67c0,	// (0x0002587b) bg_list_pane_g4

0xdbbc,	// (0x0002cc77) bg_list_pane_g5_ParamLimits

0xdbbc,	// (0x0002cc77) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0002ea65) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0002ea65) bg_list_pane_g

0xdb58,	// (0x0002cc13) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double2_graphic_large_graphic_pane

0xdb58,	// (0x0002cc13) list_double2_graphic_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double2_graphic_pane

0xdb58,	// (0x0002cc13) list_double2_large_graphic_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double2_large_graphic_pane

0xdb58,	// (0x0002cc13) list_double2_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double2_pane

0xdb58,	// (0x0002cc13) list_double_graphic_heading_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double_graphic_heading_pane

0xdb58,	// (0x0002cc13) list_double_graphic_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double_graphic_pane

0xdb58,	// (0x0002cc13) list_double_heading_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double_heading_pane

0xdb58,	// (0x0002cc13) list_double_large_graphic_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double_large_graphic_pane

0xdb58,	// (0x0002cc13) list_double_number_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double_number_pane

0xdb58,	// (0x0002cc13) list_double_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double_pane

0xdb58,	// (0x0002cc13) list_double_time_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_double_time_pane

0xdb58,	// (0x0002cc13) list_setting_number_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_setting_number_pane

0xdb58,	// (0x0002cc13) list_setting_pane_ParamLimits

0xdb58,	// (0x0002cc13) list_setting_pane

0xdb6a,	// (0x0002cc25) list_single_2graphic_pane_ParamLimits

0xdb6a,	// (0x0002cc25) list_single_2graphic_pane

0xdb6a,	// (0x0002cc25) list_single_graphic_heading_pane_ParamLimits

0xdb6a,	// (0x0002cc25) list_single_graphic_heading_pane

0xdb6a,	// (0x0002cc25) list_single_graphic_pane_ParamLimits

0xdb6a,	// (0x0002cc25) list_single_graphic_pane

0xdb6a,	// (0x0002cc25) list_single_heading_pane_ParamLimits

0xdb6a,	// (0x0002cc25) list_single_heading_pane

0xdb6a,	// (0x0002cc25) list_single_large_graphic_pane_ParamLimits

0xdb6a,	// (0x0002cc25) list_single_large_graphic_pane

0xdb6a,	// (0x0002cc25) list_single_number_heading_pane_ParamLimits

0xdb6a,	// (0x0002cc25) list_single_number_heading_pane

0xdb6a,	// (0x0002cc25) list_single_number_pane_ParamLimits

0xdb6a,	// (0x0002cc25) list_single_number_pane

0xdb6a,	// (0x0002cc25) list_single_pane_ParamLimits

0xdb6a,	// (0x0002cc25) list_single_pane

0x2d77,	// (0x00021e32) list_highlight_pane_cp1

0x0a98,	// (0x0001fb53) list_single_pane_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_single_pane_g1

0x0aa4,	// (0x0001fb5f) list_single_pane_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_single_pane_g

0x0d0f,	// (0x0001fdca) list_single_pane_t1_ParamLimits

0x0d0f,	// (0x0001fdca) list_single_pane_t1

0x0a98,	// (0x0001fb53) list_single_number_pane_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_single_number_pane_g1

0x0aa4,	// (0x0001fb5f) list_single_number_pane_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_single_number_pane_g

0x0b10,	// (0x0001fbcb) list_single_number_pane_t1_ParamLimits

0x0b10,	// (0x0001fbcb) list_single_number_pane_t1

0xba4e,	// (0x0002ab09) list_single_number_pane_t2_ParamLimits

0xba4e,	// (0x0002ab09) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0002ea26) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0002ea26) list_single_number_pane_t

0x10ec,	// (0x000201a7) list_single_graphic_pane_g1_ParamLimits

0x10ec,	// (0x000201a7) list_single_graphic_pane_g1

0x0a98,	// (0x0001fb53) list_single_graphic_pane_g2_ParamLimits

0x0a98,	// (0x0001fb53) list_single_graphic_pane_g2

0x0aa4,	// (0x0001fb5f) list_single_graphic_pane_g3_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0002e698) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0002e698) list_single_graphic_pane_g

0xb459,	// (0x0002a514) list_single_graphic_pane_t1_ParamLimits

0xb459,	// (0x0002a514) list_single_graphic_pane_t1

0x0a98,	// (0x0001fb53) list_single_heading_pane_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_single_heading_pane_g1

0x0aa4,	// (0x0001fb5f) list_single_heading_pane_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_single_heading_pane_g

0x0d31,	// (0x0001fdec) list_single_heading_pane_t1_ParamLimits

0x0d31,	// (0x0001fdec) list_single_heading_pane_t1

0xb46f,	// (0x0002a52a) list_single_heading_pane_t2_ParamLimits

0xb46f,	// (0x0002a52a) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0002e6a4) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0002e6a4) list_single_heading_pane_t

0x0a98,	// (0x0001fb53) list_single_number_heading_pane_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_single_number_heading_pane_g1

0x0aa4,	// (0x0001fb5f) list_single_number_heading_pane_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_single_number_heading_pane_g

0x0d31,	// (0x0001fdec) list_single_number_heading_pane_t1_ParamLimits

0x0d31,	// (0x0001fdec) list_single_number_heading_pane_t1

0xb481,	// (0x0002a53c) list_single_number_heading_pane_t2_ParamLimits

0xb481,	// (0x0002a53c) list_single_number_heading_pane_t2

0x0ce9,	// (0x0001fda4) list_single_number_heading_pane_t3_ParamLimits

0x0ce9,	// (0x0001fda4) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0002e6a9) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0002e6a9) list_single_number_heading_pane_t

0x0a8c,	// (0x0001fb47) list_single_graphic_heading_pane_g1_ParamLimits

0x0a8c,	// (0x0001fb47) list_single_graphic_heading_pane_g1

0xb493,	// (0x0002a54e) list_single_graphic_heading_pane_g4_ParamLimits

0xb493,	// (0x0002a54e) list_single_graphic_heading_pane_g4

0x0aa4,	// (0x0001fb5f) list_single_graphic_heading_pane_g5_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0002e6b0) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0002e6b0) list_single_graphic_heading_pane_g

0x0d31,	// (0x0001fdec) list_single_graphic_heading_pane_t1_ParamLimits

0x0d31,	// (0x0001fdec) list_single_graphic_heading_pane_t1

0xb4a4,	// (0x0002a55f) list_single_graphic_heading_pane_t2_ParamLimits

0xb4a4,	// (0x0002a55f) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0002e6b7) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0002e6b7) list_single_graphic_heading_pane_t

0x0d25,	// (0x0001fde0) list_single_large_graphic_pane_g1_ParamLimits

0x0d25,	// (0x0001fde0) list_single_large_graphic_pane_g1

0x0a98,	// (0x0001fb53) list_single_large_graphic_pane_g2_ParamLimits

0x0a98,	// (0x0001fb53) list_single_large_graphic_pane_g2

0x0aa4,	// (0x0001fb5f) list_single_large_graphic_pane_g3_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0002e6bc) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0002e6bc) list_single_large_graphic_pane_g

0x578a,	// (0x00024845) wait_border_pane_g2_copy1

0xb4b6,	// (0x0002a571) list_single_large_graphic_pane_g4_cp2

0x0d31,	// (0x0001fdec) list_single_large_graphic_pane_t1_ParamLimits

0x0d31,	// (0x0001fdec) list_single_large_graphic_pane_t1

0x0f1e,	// (0x0001ffd9) list_double_pane_g1_ParamLimits

0x0f1e,	// (0x0001ffd9) list_double_pane_g1

0xb4be,	// (0x0002a579) list_double_pane_g2_ParamLimits

0xb4be,	// (0x0002a579) list_double_pane_g2

0x0001,

0xf608,	// (0x0002e6c3) list_double_pane_g_ParamLimits

0xf608,	// (0x0002e6c3) list_double_pane_g

0xb4ca,	// (0x0002a585) list_double_pane_t1_ParamLimits

0xb4ca,	// (0x0002a585) list_double_pane_t1

0xb4e0,	// (0x0002a59b) list_double_pane_t2_ParamLimits

0xb4e0,	// (0x0002a59b) list_double_pane_t2

0x0001,

0xf60d,	// (0x0002e6c8) list_double_pane_t_ParamLimits

0xf60d,	// (0x0002e6c8) list_double_pane_t

0xb4f2,	// (0x0002a5ad) list_double2_pane_g1_ParamLimits

0xb4f2,	// (0x0002a5ad) list_double2_pane_g1

0x05ed,	// (0x0001f6a8) list_double2_pane_g2_ParamLimits

0x05ed,	// (0x0001f6a8) list_double2_pane_g2

0x0001,

0xf612,	// (0x0002e6cd) list_double2_pane_g_ParamLimits

0xf612,	// (0x0002e6cd) list_double2_pane_g

0xb503,	// (0x0002a5be) list_double2_pane_t1_ParamLimits

0xb503,	// (0x0002a5be) list_double2_pane_t1

0xb519,	// (0x0002a5d4) list_double2_pane_t2_ParamLimits

0xb519,	// (0x0002a5d4) list_double2_pane_t2

0x0001,

0xf617,	// (0x0002e6d2) list_double2_pane_t_ParamLimits

0xf617,	// (0x0002e6d2) list_double2_pane_t

0x0f1e,	// (0x0001ffd9) list_double_number_pane_g1_ParamLimits

0x0f1e,	// (0x0001ffd9) list_double_number_pane_g1

0xb4be,	// (0x0002a579) list_double_number_pane_g2_ParamLimits

0xb4be,	// (0x0002a579) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0002e6c3) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0002e6c3) list_double_number_pane_g

0xb52b,	// (0x0002a5e6) list_double_number_pane_t1_ParamLimits

0xb52b,	// (0x0002a5e6) list_double_number_pane_t1

0xb53d,	// (0x0002a5f8) list_double_number_pane_t2_ParamLimits

0xb53d,	// (0x0002a5f8) list_double_number_pane_t2

0xb553,	// (0x0002a60e) list_double_number_pane_t3_ParamLimits

0xb553,	// (0x0002a60e) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0002e6d7) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0002e6d7) list_double_number_pane_t

0xb565,	// (0x0002a620) list_double_graphic_pane_g1_ParamLimits

0xb565,	// (0x0002a620) list_double_graphic_pane_g1

0xb571,	// (0x0002a62c) list_double_graphic_pane_g2_ParamLimits

0xb571,	// (0x0002a62c) list_double_graphic_pane_g2

0xb580,	// (0x0002a63b) list_double_graphic_pane_g3_ParamLimits

0xb580,	// (0x0002a63b) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0002e6de) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0002e6de) list_double_graphic_pane_g

0xb598,	// (0x0002a653) list_double_graphic_pane_t1_ParamLimits

0xb598,	// (0x0002a653) list_double_graphic_pane_t1

0xb5ae,	// (0x0002a669) list_double_graphic_pane_t2_ParamLimits

0xb5ae,	// (0x0002a669) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e6e7) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e6e7) list_double_graphic_pane_t

0xb5c0,	// (0x0002a67b) list_double2_graphic_pane_g1_ParamLimits

0xb5c0,	// (0x0002a67b) list_double2_graphic_pane_g1

0xb5cc,	// (0x0002a687) list_double2_graphic_pane_g2_ParamLimits

0xb5cc,	// (0x0002a687) list_double2_graphic_pane_g2

0x05ed,	// (0x0001f6a8) list_double2_graphic_pane_g3_ParamLimits

0x05ed,	// (0x0001f6a8) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e6ec) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e6ec) list_double2_graphic_pane_g

0xb5d8,	// (0x0002a693) list_double2_graphic_pane_t1_ParamLimits

0xb5d8,	// (0x0002a693) list_double2_graphic_pane_t1

0xb5ee,	// (0x0002a6a9) list_double2_graphic_pane_t2_ParamLimits

0xb5ee,	// (0x0002a6a9) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0002e6f3) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0002e6f3) list_double2_graphic_pane_t

0xb600,	// (0x0002a6bb) list_double_large_graphic_pane_g1_ParamLimits

0xb600,	// (0x0002a6bb) list_double_large_graphic_pane_g1

0xb62b,	// (0x0002a6e6) list_double_large_graphic_pane_g2_ParamLimits

0xb62b,	// (0x0002a6e6) list_double_large_graphic_pane_g2

0xb4be,	// (0x0002a579) list_double_large_graphic_pane_g3_ParamLimits

0xb4be,	// (0x0002a579) list_double_large_graphic_pane_g3

0xb63c,	// (0x0002a6f7) list_double_large_graphic_pane_g4_ParamLimits

0xb63c,	// (0x0002a6f7) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002e6f8) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002e6f8) list_double_large_graphic_pane_g

0xb64e,	// (0x0002a709) list_double_large_graphic_pane_t1_ParamLimits

0xb64e,	// (0x0002a709) list_double_large_graphic_pane_t1

0xb667,	// (0x0002a722) list_double_large_graphic_pane_t2_ParamLimits

0xb667,	// (0x0002a722) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0002e703) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0002e703) list_double_large_graphic_pane_t

0xb679,	// (0x0002a734) list_double2_large_graphic_pane_g1_ParamLimits

0xb679,	// (0x0002a734) list_double2_large_graphic_pane_g1

0xb4f2,	// (0x0002a5ad) list_double2_large_graphic_pane_g2_ParamLimits

0xb4f2,	// (0x0002a5ad) list_double2_large_graphic_pane_g2

0x05ed,	// (0x0001f6a8) list_double2_large_graphic_pane_g3_ParamLimits

0x05ed,	// (0x0001f6a8) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002e708) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002e708) list_double2_large_graphic_pane_g

0xb685,	// (0x0002a740) list_double2_large_graphic_pane_t1_ParamLimits

0xb685,	// (0x0002a740) list_double2_large_graphic_pane_t1

0xb69b,	// (0x0002a756) list_double2_large_graphic_pane_t2_ParamLimits

0xb69b,	// (0x0002a756) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0002e70f) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0002e70f) list_double2_large_graphic_pane_t

0xb6ad,	// (0x0002a768) list_double_heading_pane_g1_ParamLimits

0xb6ad,	// (0x0002a768) list_double_heading_pane_g1

0x03f8,	// (0x0001f4b3) list_double_heading_pane_g2_ParamLimits

0x03f8,	// (0x0001f4b3) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0002e714) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0002e714) list_double_heading_pane_g

0xb6be,	// (0x0002a779) list_double_heading_pane_t1_ParamLimits

0xb6be,	// (0x0002a779) list_double_heading_pane_t1

0xb519,	// (0x0002a5d4) list_double_heading_pane_t2_ParamLimits

0xb519,	// (0x0002a5d4) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002e719) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002e719) list_double_heading_pane_t

0xb565,	// (0x0002a620) list_double_graphic_heading_pane_g1_ParamLimits

0xb565,	// (0x0002a620) list_double_graphic_heading_pane_g1

0xb6ad,	// (0x0002a768) list_double_graphic_heading_pane_g2_ParamLimits

0xb6ad,	// (0x0002a768) list_double_graphic_heading_pane_g2

0x03f8,	// (0x0001f4b3) list_double_graphic_heading_pane_g3_ParamLimits

0x03f8,	// (0x0001f4b3) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0002e71e) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0002e71e) list_double_graphic_heading_pane_g

0xb6d4,	// (0x0002a78f) list_double_graphic_heading_pane_t1_ParamLimits

0xb6d4,	// (0x0002a78f) list_double_graphic_heading_pane_t1

0xb5ee,	// (0x0002a6a9) list_double_graphic_heading_pane_t2_ParamLimits

0xb5ee,	// (0x0002a6a9) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0002e725) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0002e725) list_double_graphic_heading_pane_t

0xb62b,	// (0x0002a6e6) list_double_time_pane_g1_ParamLimits

0xb62b,	// (0x0002a6e6) list_double_time_pane_g1

0xb4be,	// (0x0002a579) list_double_time_pane_g2_ParamLimits

0xb4be,	// (0x0002a579) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0002e72a) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0002e72a) list_double_time_pane_g

0xb6ea,	// (0x0002a7a5) list_double_time_pane_t1_ParamLimits

0xb6ea,	// (0x0002a7a5) list_double_time_pane_t1

0xb700,	// (0x0002a7bb) list_double_time_pane_t2_ParamLimits

0xb700,	// (0x0002a7bb) list_double_time_pane_t2

0xb712,	// (0x0002a7cd) list_double_time_pane_t3_ParamLimits

0xb712,	// (0x0002a7cd) list_double_time_pane_t3

0xb724,	// (0x0002a7df) list_double_time_pane_t4_ParamLimits

0xb724,	// (0x0002a7df) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0002e72f) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0002e72f) list_double_time_pane_t

0xb736,	// (0x0002a7f1) list_setting_pane_g1_ParamLimits

0xb736,	// (0x0002a7f1) list_setting_pane_g1

0xb742,	// (0x0002a7fd) list_setting_pane_g2_ParamLimits

0xb742,	// (0x0002a7fd) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0002e738) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0002e738) list_setting_pane_g

0xb74e,	// (0x0002a809) list_setting_pane_t1_ParamLimits

0xb74e,	// (0x0002a809) list_setting_pane_t1

0xb768,	// (0x0002a823) list_setting_pane_t2_ParamLimits

0xb768,	// (0x0002a823) list_setting_pane_t2

0x0002,

0xf682,	// (0x0002e73d) list_setting_pane_t_ParamLimits

0xf682,	// (0x0002e73d) list_setting_pane_t

0xb7a7,	// (0x0002a862) set_value_pane_cp_ParamLimits

0xb7a7,	// (0x0002a862) set_value_pane_cp

0xb7b3,	// (0x0002a86e) list_setting_number_pane_g1_ParamLimits

0xb7b3,	// (0x0002a86e) list_setting_number_pane_g1

0xb7bf,	// (0x0002a87a) list_setting_number_pane_g2_ParamLimits

0xb7bf,	// (0x0002a87a) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0002e744) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0002e744) list_setting_number_pane_g

0xb7cb,	// (0x0002a886) list_setting_number_pane_t1_ParamLimits

0xb7cb,	// (0x0002a886) list_setting_number_pane_t1

0xb7e4,	// (0x0002a89f) list_setting_number_pane_t2_ParamLimits

0xb7e4,	// (0x0002a89f) list_setting_number_pane_t2

0xb7fe,	// (0x0002a8b9) list_setting_number_pane_t3_ParamLimits

0xb7fe,	// (0x0002a8b9) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x0002e749) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x0002e749) list_setting_number_pane_t

0xb7a7,	// (0x0002a862) set_value_pane_ParamLimits

0xb7a7,	// (0x0002a862) set_value_pane

0x366a,	// (0x00022725) bg_set_opt_pane_ParamLimits

0x366a,	// (0x00022725) bg_set_opt_pane

0x0776,	// (0x0001f831) set_value_pane_t1

0x368b,	// (0x00022746) slider_set_pane_cp3

0x3694,	// (0x0002274f) volume_small_pane_cp

0x369d,	// (0x00022758) list_form_gen_pane

0x36a6,	// (0x00022761) scroll_pane_cp8

0xb841,	// (0x0002a8fc) form_field_data_pane_ParamLimits

0xb841,	// (0x0002a8fc) form_field_data_pane

0xb858,	// (0x0002a913) form_field_data_wide_pane_ParamLimits

0xb858,	// (0x0002a913) form_field_data_wide_pane

0xb878,	// (0x0002a933) form_field_popup_pane_ParamLimits

0xb878,	// (0x0002a933) form_field_popup_pane

0xb890,	// (0x0002a94b) form_field_popup_wide_pane_ParamLimits

0xb890,	// (0x0002a94b) form_field_popup_wide_pane

0x080a,	// (0x0001f8c5) form_field_slider_pane_ParamLimits

0x080a,	// (0x0001f8c5) form_field_slider_pane

0x081d,	// (0x0001f8d8) form_field_slider_wide_pane_ParamLimits

0x081d,	// (0x0001f8d8) form_field_slider_wide_pane

0x36b7,	// (0x00022772) data_form_pane

0xb8b1,	// (0x0002a96c) form_field_data_pane_t1

0x36c3,	// (0x0002277e) input_focus_pane

0x36d1,	// (0x0002278c) data_form_wide_pane

0x085e,	// (0x0001f919) form_field_data_wide_pane_t1

0x3434,	// (0x000224ef) input_focus_pane_cp6

0xb8cb,	// (0x0002a986) form_field_popup_pane_t1

0x36c3,	// (0x0002277e) input_focus_pane_cp7

0x36fd,	// (0x000227b8) list_form_pane

0x08a0,	// (0x0001f95b) form_field_popup_wide_pane_t1

0x36c3,	// (0x0002277e) input_focus_pane_cp8

0x3709,	// (0x000227c4) list_form_wide_pane

0xb8ed,	// (0x0002a9a8) form_field_slider_pane_t1_ParamLimits

0xb8ed,	// (0x0002a9a8) form_field_slider_pane_t1

0xb905,	// (0x0002a9c0) form_field_slider_pane_t2_ParamLimits

0xb905,	// (0x0002a9c0) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x0002e759) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x0002e759) form_field_slider_pane_t

0x30d2,	// (0x0002218d) input_focus_pane_cp9_ParamLimits

0x30d2,	// (0x0002218d) input_focus_pane_cp9

0xb91a,	// (0x0002a9d5) slider_cont_pane_ParamLimits

0xb91a,	// (0x0002a9d5) slider_cont_pane

0x3718,	// (0x000227d3) form_field_slider_wide_pane_t1_ParamLimits

0x3718,	// (0x000227d3) form_field_slider_wide_pane_t1

0x08fc,	// (0x0001f9b7) form_field_slider_wide_pane_t2_ParamLimits

0x08fc,	// (0x0001f9b7) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x0002e75e) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x0002e75e) form_field_slider_wide_pane_t

0x30d2,	// (0x0002218d) input_focus_pane_cp10_ParamLimits

0x30d2,	// (0x0002218d) input_focus_pane_cp10

0xb92e,	// (0x0002a9e9) slider_cont_pane_cp1_ParamLimits

0xb92e,	// (0x0002a9e9) slider_cont_pane_cp1

0xb942,	// (0x0002a9fd) slider_form_pane_cp

0x372a,	// (0x000227e5) input_focus_pane_g1

0x3732,	// (0x000227ed) input_focus_pane_g2

0x373a,	// (0x000227f5) input_focus_pane_g3

0x3742,	// (0x000227fd) input_focus_pane_g4

0x374a,	// (0x00022805) input_focus_pane_g5

0x3752,	// (0x0002280d) input_focus_pane_g6

0x375a,	// (0x00022815) input_focus_pane_g7

0x3762,	// (0x0002281d) input_focus_pane_g8

0x376a,	// (0x00022825) input_focus_pane_g9

0x2d6d,	// (0x00021e28) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0002e763) input_focus_pane_g

0x5793,	// (0x0002484e) wait_border_pane_g3_copy1

0xb94a,	// (0x0002aa05) data_form_pane_t1

0x2d6d,	// (0x00021e28) wait_anim_pane_g1_copy1

0xba60,	// (0x0002ab1b) data_form_wide_pane_t1

0xc98e,	// (0x0002ba49) list_form_graphic_pane_cp_ParamLimits

0xc98e,	// (0x0002ba49) list_form_graphic_pane_cp

0x66db,	// (0x00025796) slider_form_pane_g1

0x66e4,	// (0x0002579f) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0002ea56) slider_form_pane_g

0xc98e,	// (0x0002ba49) list_form_graphic_pane_ParamLimits

0xc98e,	// (0x0002ba49) list_form_graphic_pane

0x097a,	// (0x0001fa35) list_form_graphic_pane_g1

0x0982,	// (0x0001fa3d) list_form_graphic_pane_t1_ParamLimits

0x0982,	// (0x0001fa3d) list_form_graphic_pane_t1

0x2e57,	// (0x00021f12) list_highlight_pane_cp5_ParamLimits

0x2e57,	// (0x00021f12) list_highlight_pane_cp5

0xb964,	// (0x0002aa1f) find_pane_g1

0x3772,	// (0x0002282d) input_find_pane

0xb96d,	// (0x0002aa28) input_find_pane_g1_ParamLimits

0xb96d,	// (0x0002aa28) input_find_pane_g1

0xb979,	// (0x0002aa34) input_find_pane_t1_ParamLimits

0xb979,	// (0x0002aa34) input_find_pane_t1

0xb98e,	// (0x0002aa49) input_find_pane_t2_ParamLimits

0xb98e,	// (0x0002aa49) input_find_pane_t2

0x0001,

0xf6bd,	// (0x0002e778) input_find_pane_t_ParamLimits

0xf6bd,	// (0x0002e778) input_find_pane_t

0x377b,	// (0x00022836) input_focus_pane_cp5_ParamLimits

0x377b,	// (0x00022836) input_focus_pane_cp5

0xc9ac,	// (0x0002ba67) bg_popup_window_pane_cp2_ParamLimits

0xc9ac,	// (0x0002ba67) bg_popup_window_pane_cp2

0xc9b9,	// (0x0002ba74) listscroll_menu_pane_ParamLimits

0xc9b9,	// (0x0002ba74) listscroll_menu_pane

0xc9c5,	// (0x0002ba80) popup_submenu_window_ParamLimits

0xc9c5,	// (0x0002ba80) popup_submenu_window

0x37d8,	// (0x00022893) find_popup_pane_g1

0x37e0,	// (0x0002289b) input_popup_find_pane_cp

0x377b,	// (0x00022836) input_focus_pane_cp4_ParamLimits

0x377b,	// (0x00022836) input_focus_pane_cp4

0x37f6,	// (0x000228b1) input_popup_find_pane_t1_ParamLimits

0x37f6,	// (0x000228b1) input_popup_find_pane_t1

0x2d77,	// (0x00021e32) bg_popup_sub_pane_cp

0x3824,	// (0x000228df) listscroll_popup_sub_pane

0x382c,	// (0x000228e7) list_submenu_pane_ParamLimits

0x382c,	// (0x000228e7) list_submenu_pane

0x383d,	// (0x000228f8) scroll_pane_cp4

0x3845,	// (0x00022900) list_single_popup_submenu_pane_ParamLimits

0x3845,	// (0x00022900) list_single_popup_submenu_pane

0x3859,	// (0x00022914) list_single_popup_submenu_pane_g1

0x3861,	// (0x0002291c) list_single_popup_submenu_pane_t1_ParamLimits

0x3861,	// (0x0002291c) list_single_popup_submenu_pane_t1

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp1_ParamLimits

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp1

0xc9fd,	// (0x0002bab8) tabs_2_active_pane_g1

0xca05,	// (0x0002bac0) tabs_2_active_pane_t1

0x30d2,	// (0x0002218d) bg_passive_tab_pane_cp1_ParamLimits

0x30d2,	// (0x0002218d) bg_passive_tab_pane_cp1

0xc9fd,	// (0x0002bab8) tabs_2_passive_pane_g1

0xca05,	// (0x0002bac0) tabs_2_passive_pane_t1

0x2e57,	// (0x00021f12) bg_active_tab_pane_cp4

0xca17,	// (0x0002bad2) tabs_2_long_active_pane_t1

0x468e,	// (0x00023749) bg_passive_tab_pane_cp4

0x4c87,	// (0x00023d42) list_single_midp_graphic_pane_g4_ParamLimits

0x2e57,	// (0x00021f12) bg_active_tab_pane_cp5

0xca2a,	// (0x0002bae5) tabs_3_long_active_pane_t1

0x468e,	// (0x00023749) bg_passive_tab_pane_cp5

0x4c87,	// (0x00023d42) list_single_midp_graphic_pane_g4

0x2e57,	// (0x00021f12) bg_popup_window_pane_cp13_ParamLimits

0x2e57,	// (0x00021f12) bg_popup_window_pane_cp13

0x38d8,	// (0x00022993) listscroll_popup_fast_pane_ParamLimits

0x38d8,	// (0x00022993) listscroll_popup_fast_pane

0x38e7,	// (0x000229a2) grid_popup_fast_pane_ParamLimits

0x38e7,	// (0x000229a2) grid_popup_fast_pane

0x38f9,	// (0x000229b4) scroll_pane_cp9_ParamLimits

0x38f9,	// (0x000229b4) scroll_pane_cp9

0x7fc4,	// (0x0002707f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7fc4,	// (0x0002707f) list_single_graphic_hl_pane_t1_cp2

0x391d,	// (0x000229d8) input_focus_pane_cp20_ParamLimits

0x391d,	// (0x000229d8) input_focus_pane_cp20

0x392b,	// (0x000229e6) query_popup_data_pane_t1_ParamLimits

0x392b,	// (0x000229e6) query_popup_data_pane_t1

0x393e,	// (0x000229f9) query_popup_data_pane_t2_ParamLimits

0x393e,	// (0x000229f9) query_popup_data_pane_t2

0x3984,	// (0x00022a3f) query_popup_data_pane_t3_ParamLimits

0x3984,	// (0x00022a3f) query_popup_data_pane_t3

0x39c5,	// (0x00022a80) query_popup_data_pane_t4_ParamLimits

0x39c5,	// (0x00022a80) query_popup_data_pane_t4

0x3a01,	// (0x00022abc) query_popup_data_pane_t5_ParamLimits

0x3a01,	// (0x00022abc) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x0002e77d) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x0002e77d) query_popup_data_pane_t

0x372a,	// (0x000227e5) bg_set_opt_pane_g1

0x3732,	// (0x000227ed) bg_set_opt_pane_g2

0x373a,	// (0x000227f5) bg_set_opt_pane_g3

0x3742,	// (0x000227fd) bg_set_opt_pane_g4

0x374a,	// (0x00022805) bg_set_opt_pane_g5

0x3752,	// (0x0002280d) bg_set_opt_pane_g6

0x375a,	// (0x00022815) bg_set_opt_pane_g7

0x3762,	// (0x0002281d) bg_set_opt_pane_g8

0x376a,	// (0x00022825) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x0002e788) bg_set_opt_pane_g

0x19ba,	// (0x00020a75) control_top_pane_stacon_ParamLimits

0x19ba,	// (0x00020a75) control_top_pane_stacon

0x1a0d,	// (0x00020ac8) signal_pane_stacon_ParamLimits

0x1a0d,	// (0x00020ac8) signal_pane_stacon

0x3fc1,	// (0x0002307c) stacon_top_pane_g1_ParamLimits

0x3fc1,	// (0x0002307c) stacon_top_pane_g1

0x1a32,	// (0x00020aed) title_pane_stacon_ParamLimits

0x1a32,	// (0x00020aed) title_pane_stacon

0x1a5c,	// (0x00020b17) uni_indicator_pane_stacon_ParamLimits

0x1a5c,	// (0x00020b17) uni_indicator_pane_stacon

0x1a71,	// (0x00020b2c) battery_pane_stacon_ParamLimits

0x1a71,	// (0x00020b2c) battery_pane_stacon

0x1ab5,	// (0x00020b70) control_bottom_pane_stacon_ParamLimits

0x1ab5,	// (0x00020b70) control_bottom_pane_stacon

0x1ad8,	// (0x00020b93) navi_pane_stacon_ParamLimits

0x1ad8,	// (0x00020b93) navi_pane_stacon

0x3fe3,	// (0x0002309e) stacon_bottom_pane_g1_ParamLimits

0x3fe3,	// (0x0002309e) stacon_bottom_pane_g1

0x171b,	// (0x000207d6) aid_levels_signal_lsc_ParamLimits

0x171b,	// (0x000207d6) aid_levels_signal_lsc

0x1732,	// (0x000207ed) signal_pane_stacon_g1_ParamLimits

0x1732,	// (0x000207ed) signal_pane_stacon_g1

0x1746,	// (0x00020801) signal_pane_stacon_g2_ParamLimits

0x1746,	// (0x00020801) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0002e79b) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002e79b) signal_pane_stacon_g

0x177b,	// (0x00020836) title_pane_stacon_t1_ParamLimits

0x177b,	// (0x00020836) title_pane_stacon_t1

0x3a45,	// (0x00022b00) uni_indicator_pane_stacon_g1

0x3a4f,	// (0x00022b0a) uni_indicator_pane_stacon_g2

0x3a59,	// (0x00022b14) uni_indicator_pane_stacon_g3

0x3a63,	// (0x00022b1e) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0002e7a7) uni_indicator_pane_stacon_g

0x17a0,	// (0x0002085b) control_top_pane_stacon_g1

0x17a8,	// (0x00020863) control_top_pane_stacon_t1_ParamLimits

0x17a8,	// (0x00020863) control_top_pane_stacon_t1

0x17df,	// (0x0002089a) aid_levels_battery_lsc_ParamLimits

0x17df,	// (0x0002089a) aid_levels_battery_lsc

0x17f7,	// (0x000208b2) battery_pane_stacon_g1_ParamLimits

0x17f7,	// (0x000208b2) battery_pane_stacon_g1

0x180a,	// (0x000208c5) battery_pane_stacon_g2_ParamLimits

0x180a,	// (0x000208c5) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0002e7b0) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0002e7b0) battery_pane_stacon_g

0x1848,	// (0x00020903) navi_icon_pane_stacon

0x185c,	// (0x00020917) navi_navi_pane_stacon

0x1848,	// (0x00020903) navi_text_pane_stacon

0x17a0,	// (0x0002085b) control_bottom_pane_stacon_g1

0x1870,	// (0x0002092b) control_bottom_pane_stacon_t1_ParamLimits

0x1870,	// (0x0002092b) control_bottom_pane_stacon_t1

0xca3c,	// (0x0002baf7) grid_app_pane_ParamLimits

0xca3c,	// (0x0002baf7) grid_app_pane

0xca74,	// (0x0002bb2f) scroll_pane_cp15_ParamLimits

0xca74,	// (0x0002bb2f) scroll_pane_cp15

0xca8d,	// (0x0002bb48) cell_app_pane_ParamLimits

0xca8d,	// (0x0002bb48) cell_app_pane

0xcad2,	// (0x0002bb8d) cell_app_pane_g1_ParamLimits

0xcad2,	// (0x0002bb8d) cell_app_pane_g1

0x3b08,	// (0x00022bc3) cell_app_pane_g2_ParamLimits

0x3b08,	// (0x00022bc3) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0002e7b5) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0002e7b5) cell_app_pane_g

0x3b14,	// (0x00022bcf) cell_app_pane_t1_ParamLimits

0x3b14,	// (0x00022bcf) cell_app_pane_t1

0x3b2b,	// (0x00022be6) grid_highlight_pane_ParamLimits

0x3b2b,	// (0x00022be6) grid_highlight_pane

0x372a,	// (0x000227e5) cell_highlight_pane_g1

0x3732,	// (0x000227ed) cell_highlight_pane_g2

0x373a,	// (0x000227f5) cell_highlight_pane_g3

0x3742,	// (0x000227fd) cell_highlight_pane_g4

0x374a,	// (0x00022805) cell_highlight_pane_g5

0x3752,	// (0x0002280d) cell_highlight_pane_g6

0x375a,	// (0x00022815) cell_highlight_pane_g7

0x3762,	// (0x0002281d) cell_highlight_pane_g8

0x376a,	// (0x00022825) cell_highlight_pane_g9

0x2d6d,	// (0x00021e28) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0002e763) cell_highlight_pane_g

0x3b3c,	// (0x00022bf7) bg_scroll_pane

0x18ba,	// (0x00020975) scroll_handle_pane

0x3b83,	// (0x00022c3e) scroll_bg_pane_g1

0x3b98,	// (0x00022c53) scroll_bg_pane_g2

0x3bb0,	// (0x00022c6b) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0002e7ba) scroll_bg_pane_g

0x3bc5,	// (0x00022c80) scroll_handle_focus_pane_ParamLimits

0x3bc5,	// (0x00022c80) scroll_handle_focus_pane

0x3b83,	// (0x00022c3e) scroll_handle_pane_g1

0x3bd2,	// (0x00022c8d) scroll_handle_pane_g2

0x3bb0,	// (0x00022c6b) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0002e7c1) scroll_handle_pane_g

0x377b,	// (0x00022836) bg_popup_sub_pane_cp21_ParamLimits

0x377b,	// (0x00022836) bg_popup_sub_pane_cp21

0x3be6,	// (0x00022ca1) popup_fep_japan_predictive_window_t1_ParamLimits

0x3be6,	// (0x00022ca1) popup_fep_japan_predictive_window_t1

0x3c00,	// (0x00022cbb) popup_fep_japan_predictive_window_t2_ParamLimits

0x3c00,	// (0x00022cbb) popup_fep_japan_predictive_window_t2

0x3c33,	// (0x00022cee) popup_fep_japan_predictive_window_t3_ParamLimits

0x3c33,	// (0x00022cee) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0002e7c8) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0002e7c8) popup_fep_japan_predictive_window_t

0x2d77,	// (0x00021e32) bg_popup_sub_pane_cp23

0x3c6a,	// (0x00022d25) listscroll_japin_cand_pane

0x3c72,	// (0x00022d2d) popup_fep_japan_candidate_window_t1

0x3c80,	// (0x00022d3b) candidate_pane_ParamLimits

0x3c80,	// (0x00022d3b) candidate_pane

0x3c92,	// (0x00022d4d) scroll_pane_cp30

0x3c9a,	// (0x00022d55) list_single_popup_jap_candidate_pane_ParamLimits

0x3c9a,	// (0x00022d55) list_single_popup_jap_candidate_pane

0x2d77,	// (0x00021e32) list_highlight_pane_cp30

0x3caf,	// (0x00022d6a) list_single_popup_jap_candidate_pane_t1

0x3cbe,	// (0x00022d79) level_1_signal

0x3ccb,	// (0x00022d86) level_2_signal

0x3cd8,	// (0x00022d93) level_3_signal

0x3ce5,	// (0x00022da0) level_4_signal

0x3cf2,	// (0x00022dad) level_5_signal

0x3cff,	// (0x00022dba) level_6_signal

0x3d0c,	// (0x00022dc7) level_7_signal

0x3cbe,	// (0x00022d79) level_1_battery

0x3ccb,	// (0x00022d86) level_2_battery

0x3cd8,	// (0x00022d93) level_3_battery

0x3ce5,	// (0x00022da0) level_4_battery

0x3cf2,	// (0x00022dad) level_5_battery

0x3cff,	// (0x00022dba) level_6_battery

0x3d0c,	// (0x00022dc7) level_7_battery

0x3d53,	// (0x00022e0e) list_menu_pane_ParamLimits

0x3d53,	// (0x00022e0e) list_menu_pane

0x3d64,	// (0x00022e1f) scroll_pane_cp25_ParamLimits

0x3d64,	// (0x00022e1f) scroll_pane_cp25

0x3d7d,	// (0x00022e38) list_double2_graphic_pane_cp2_ParamLimits

0x3d7d,	// (0x00022e38) list_double2_graphic_pane_cp2

0x3d7d,	// (0x00022e38) list_double2_large_graphic_pane_cp2_ParamLimits

0x3d7d,	// (0x00022e38) list_double2_large_graphic_pane_cp2

0x3d7d,	// (0x00022e38) list_double2_pane_cp2_ParamLimits

0x3d7d,	// (0x00022e38) list_double2_pane_cp2

0x3d7d,	// (0x00022e38) list_double_graphic_pane_cp2_ParamLimits

0x3d7d,	// (0x00022e38) list_double_graphic_pane_cp2

0x3d7d,	// (0x00022e38) list_double_large_graphic_pane_cp2_ParamLimits

0x3d7d,	// (0x00022e38) list_double_large_graphic_pane_cp2

0x3d7d,	// (0x00022e38) list_double_number_pane_cp2_ParamLimits

0x3d7d,	// (0x00022e38) list_double_number_pane_cp2

0x3d7d,	// (0x00022e38) list_double_pane_cp2_ParamLimits

0x3d7d,	// (0x00022e38) list_double_pane_cp2

0xcb05,	// (0x0002bbc0) list_single_2graphic_pane_cp2_ParamLimits

0xcb05,	// (0x0002bbc0) list_single_2graphic_pane_cp2

0xcb05,	// (0x0002bbc0) list_single_graphic_heading_pane_cp2_ParamLimits

0xcb05,	// (0x0002bbc0) list_single_graphic_heading_pane_cp2

0xcb05,	// (0x0002bbc0) list_single_graphic_pane_cp2_ParamLimits

0xcb05,	// (0x0002bbc0) list_single_graphic_pane_cp2

0xcb05,	// (0x0002bbc0) list_single_heading_pane_cp2_ParamLimits

0xcb05,	// (0x0002bbc0) list_single_heading_pane_cp2

0x3dba,	// (0x00022e75) list_single_large_graphic_pane_cp2_ParamLimits

0x3dba,	// (0x00022e75) list_single_large_graphic_pane_cp2

0xcb05,	// (0x0002bbc0) list_single_number_heading_pane_cp2_ParamLimits

0xcb05,	// (0x0002bbc0) list_single_number_heading_pane_cp2

0xcb05,	// (0x0002bbc0) list_single_number_pane_cp2_ParamLimits

0xcb05,	// (0x0002bbc0) list_single_number_pane_cp2

0xcb05,	// (0x0002bbc0) list_single_pane_cp2_ParamLimits

0xcb05,	// (0x0002bbc0) list_single_pane_cp2

0x3e10,	// (0x00022ecb) bg_popup_sub_pane_cp22

0x196c,	// (0x00020a27) popup_side_volume_key_window_g1

0x1996,	// (0x00020a51) popup_side_volume_key_window_t1

0x19b2,	// (0x00020a6d) volume_small_pane_cp1

0x30d2,	// (0x0002218d) bg_popup_sub_pane_cp24_ParamLimits

0x30d2,	// (0x0002218d) bg_popup_sub_pane_cp24

0x3e26,	// (0x00022ee1) fep_china_uni_candidate_pane_ParamLimits

0x3e26,	// (0x00022ee1) fep_china_uni_candidate_pane

0x3e3a,	// (0x00022ef5) fep_china_uni_entry_pane

0x3e4a,	// (0x00022f05) popup_fep_china_uni_window_g1

0x3e66,	// (0x00022f21) fep_china_uni_entry_pane_g1

0x3e6e,	// (0x00022f29) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0002e7f5) fep_china_uni_entry_pane_g

0x3e76,	// (0x00022f31) fep_entry_item_pane

0x3e80,	// (0x00022f3b) fep_candidate_item_pane

0x3e88,	// (0x00022f43) fep_china_uni_candidate_pane_g1

0x3e90,	// (0x00022f4b) fep_china_uni_candidate_pane_g2

0x3e98,	// (0x00022f53) fep_china_uni_candidate_pane_g3

0x3ea0,	// (0x00022f5b) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0002e7fa) fep_china_uni_candidate_pane_g

0x2d6d,	// (0x00021e28) fep_entry_item_pane_g1

0x3ea8,	// (0x00022f63) fep_entry_item_pane_t1_ParamLimits

0x3ea8,	// (0x00022f63) fep_entry_item_pane_t1

0x3ebe,	// (0x00022f79) fep_candidate_item_pane_t1_ParamLimits

0x3ebe,	// (0x00022f79) fep_candidate_item_pane_t1

0x3ed3,	// (0x00022f8e) fep_candidate_item_pane_t2_ParamLimits

0x3ed3,	// (0x00022f8e) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0002e803) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0002e803) fep_candidate_item_pane_t

0x2e57,	// (0x00021f12) list_highlight_pane_cp31_ParamLimits

0x2e57,	// (0x00021f12) list_highlight_pane_cp31

0x3ee5,	// (0x00022fa0) level_1_signal_lsc

0x3eee,	// (0x00022fa9) level_2_signal_lsc

0x3ef7,	// (0x00022fb2) level_3_signal_lsc

0x3f00,	// (0x00022fbb) level_4_signal_lsc

0x3f09,	// (0x00022fc4) level_5_signal_lsc

0x3f12,	// (0x00022fcd) level_6_signal_lsc

0x3f1b,	// (0x00022fd6) level_7_signal_lsc

0x3f1b,	// (0x00022fd6) level_1_battery_lsc

0x3f24,	// (0x00022fdf) level_2_battery_lsc

0x3f2d,	// (0x00022fe8) level_3_battery_lsc

0x3f36,	// (0x00022ff1) level_4_battery_lsc

0x3f3f,	// (0x00022ffa) level_5_battery_lsc

0x3f48,	// (0x00023003) level_6_battery_lsc

0x3ee5,	// (0x00022fa0) level_7_battery_lsc

0x3f51,	// (0x0002300c) scroll_handle_focus_pane_g1

0x3f5a,	// (0x00023015) scroll_handle_focus_pane_g2

0x3f63,	// (0x0002301e) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0002e808) scroll_handle_focus_pane_g

0xb9a3,	// (0x0002aa5e) list_single_2graphic_pane_g1_ParamLimits

0xb9a3,	// (0x0002aa5e) list_single_2graphic_pane_g1

0xb493,	// (0x0002a54e) list_single_2graphic_pane_g2_ParamLimits

0xb493,	// (0x0002a54e) list_single_2graphic_pane_g2

0x0aa4,	// (0x0001fb5f) list_single_2graphic_pane_g3_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_2graphic_pane_g3

0xb9af,	// (0x0002aa6a) list_single_2graphic_pane_g4_ParamLimits

0xb9af,	// (0x0002aa6a) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002e80f) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002e80f) list_single_2graphic_pane_g

0xb9c0,	// (0x0002aa7b) list_single_2graphic_pane_t1_ParamLimits

0xb9c0,	// (0x0002aa7b) list_single_2graphic_pane_t1

0xb9ee,	// (0x0002aaa9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb9ee,	// (0x0002aaa9) list_double2_graphic_large_graphic_pane_g1

0xb4f2,	// (0x0002a5ad) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb4f2,	// (0x0002a5ad) list_double2_graphic_large_graphic_pane_g2

0x05ed,	// (0x0001f6a8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x05ed,	// (0x0001f6a8) list_double2_graphic_large_graphic_pane_g3

0xba00,	// (0x0002aabb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xba00,	// (0x0002aabb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0002e818) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0002e818) list_double2_graphic_large_graphic_pane_g

0xba0c,	// (0x0002aac7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xba0c,	// (0x0002aac7) list_double2_graphic_large_graphic_pane_t1

0xba22,	// (0x0002aadd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba22,	// (0x0002aadd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002e821) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002e821) list_double2_graphic_large_graphic_pane_t

0x40ab,	// (0x00023166) popup_fast_swap_window_ParamLimits

0x40ab,	// (0x00023166) popup_fast_swap_window

0x40c7,	// (0x00023182) popup_side_volume_key_window

0x40e3,	// (0x0002319e) stacon_top_pane

0x40ed,	// (0x000231a8) status_pane_ParamLimits

0x40ed,	// (0x000231a8) status_pane

0x40e3,	// (0x0002319e) status_small_pane

0x2d77,	// (0x00021e32) control_pane

0x2d77,	// (0x00021e32) stacon_bottom_pane

0x36a6,	// (0x00022761) scroll_pane_cp121

0x369d,	// (0x00022758) set_content_pane

0x3f87,	// (0x00023042) bg_active_tab_pane_g1_cp1

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp1

0x3f90,	// (0x0002304b) bg_active_tab_pane_g3_cp1

0x3f87,	// (0x00023042) bg_passive_tab_pane_g1_cp1

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp1

0x3f90,	// (0x0002304b) bg_passive_tab_pane_g3_cp1

0xcb65,	// (0x0002bc20) bg_active_tab_pane_g1_cp2

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp2

0xcb6e,	// (0x0002bc29) bg_active_tab_pane_g3_cp2

0xcb65,	// (0x0002bc20) bg_passive_tab_pane_g1_cp2

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp2

0xcb6e,	// (0x0002bc29) bg_passive_tab_pane_g3_cp2

0xcb77,	// (0x0002bc32) bg_active_tab_pane_g1_cp3

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp3

0xcb80,	// (0x0002bc3b) bg_active_tab_pane_g3_cp3

0xcb77,	// (0x0002bc32) bg_passive_tab_pane_g1_cp3

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp3

0xcb80,	// (0x0002bc3b) bg_passive_tab_pane_g3_cp3

0xcb89,	// (0x0002bc44) bg_active_tab_pane_g1_cp4

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp4

0xcb92,	// (0x0002bc4d) bg_active_tab_pane_g3_cp4

0xcb89,	// (0x0002bc44) bg_passive_tab_pane_g1_cp4

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp4

0xcb92,	// (0x0002bc4d) bg_passive_tab_pane_g3_cp4

0x3fff,	// (0x000230ba) bg_active_tab_pane_g1_cp5

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp5

0x4008,	// (0x000230c3) bg_active_tab_pane_g3_cp5

0x3fff,	// (0x000230ba) bg_passive_tab_pane_g1_cp5

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp5

0x4008,	// (0x000230c3) bg_passive_tab_pane_g3_cp5

0xc98e,	// (0x0002ba49) list_set_graphic_pane_ParamLimits

0xc98e,	// (0x0002ba49) list_set_graphic_pane

0x2d77,	// (0x00021e32) bg_set_opt_pane_cp4

0xcb9b,	// (0x0002bc56) list_set_graphic_pane_g1_ParamLimits

0xcb9b,	// (0x0002bc56) list_set_graphic_pane_g1

0xcba7,	// (0x0002bc62) list_set_graphic_pane_g2_ParamLimits

0xcba7,	// (0x0002bc62) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0002e826) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0002e826) list_set_graphic_pane_g

0x0009,

0xfade,	// (0x0002eb99) volume_small_pane_cp_g

0x405e,	// (0x00023119) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x405e,	// (0x00023119) list_double2_large_graphic_pane_g1_cp2

0x406a,	// (0x00023125) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x406a,	// (0x00023125) list_double2_large_graphic_pane_g2_cp2

0x407b,	// (0x00023136) list_double2_large_graphic_pane_g3_cp2

0x4083,	// (0x0002313e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4083,	// (0x0002313e) list_double2_large_graphic_pane_t1_cp2

0x4099,	// (0x00023154) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4099,	// (0x00023154) list_double2_large_graphic_pane_t2_cp2

0x6278,	// (0x00025333) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6278,	// (0x00025333) list_double_large_graphic_pane_g1_cp2

0x6289,	// (0x00025344) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6289,	// (0x00025344) list_double_large_graphic_pane_g2_cp2

0x4209,	// (0x000232c4) list_double_large_graphic_pane_g3_cp2

0x629a,	// (0x00025355) list_double_large_graphic_pane_g4_cp

0x62a2,	// (0x0002535d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x62a2,	// (0x0002535d) list_double_large_graphic_pane_t1_cp2

0x62b9,	// (0x00025374) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x62b9,	// (0x00025374) list_double_large_graphic_pane_t2_cp2

0x40fb,	// (0x000231b6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x40fb,	// (0x000231b6) list_double2_graphic_pane_g1_cp2

0x4109,	// (0x000231c4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4109,	// (0x000231c4) list_double2_graphic_pane_g2_cp2

0x411a,	// (0x000231d5) list_double2_graphic_pane_g3_cp2

0x4124,	// (0x000231df) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4124,	// (0x000231df) list_double2_graphic_pane_t1_cp2

0x413a,	// (0x000231f5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x413a,	// (0x000231f5) list_double2_graphic_pane_t2_cp2

0x414c,	// (0x00023207) list_single_number_heading_pane_g1_cp2_ParamLimits

0x414c,	// (0x00023207) list_single_number_heading_pane_g1_cp2

0x4158,	// (0x00023213) list_single_number_heading_pane_g2_cp2

0x4160,	// (0x0002321b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4160,	// (0x0002321b) list_single_number_heading_pane_t1_cp2

0x4176,	// (0x00023231) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4176,	// (0x00023231) list_single_number_heading_pane_t2_cp2

0x4188,	// (0x00023243) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4188,	// (0x00023243) list_single_number_heading_pane_t3_cp2

0x414c,	// (0x00023207) list_single_heading_pane_g1_cp2_ParamLimits

0x414c,	// (0x00023207) list_single_heading_pane_g1_cp2

0x4158,	// (0x00023213) list_single_heading_pane_g2_cp2

0x4160,	// (0x0002321b) list_single_heading_pane_t1_cp2_ParamLimits

0x4160,	// (0x0002321b) list_single_heading_pane_t1_cp2

0x6080,	// (0x0002513b) list_single_heading_pane_t2_cp2_ParamLimits

0x6080,	// (0x0002513b) list_single_heading_pane_t2_cp2

0x5fc2,	// (0x0002507d) list_double_graphic_pane_g1_cp2_ParamLimits

0x5fc2,	// (0x0002507d) list_double_graphic_pane_g1_cp2

0x5fce,	// (0x00025089) list_double_graphic_pane_g2_cp2_ParamLimits

0x5fce,	// (0x00025089) list_double_graphic_pane_g2_cp2

0x5fdd,	// (0x00025098) list_double_graphic_pane_g3_cp2

0x5fe5,	// (0x000250a0) list_double_graphic_pane_t1_cp2_ParamLimits

0x5fe5,	// (0x000250a0) list_double_graphic_pane_t1_cp2

0x5ffb,	// (0x000250b6) list_double_graphic_pane_t2_cp2_ParamLimits

0x5ffb,	// (0x000250b6) list_double_graphic_pane_t2_cp2

0x41fd,	// (0x000232b8) list_double_number_pane_g1_cp2_ParamLimits

0x41fd,	// (0x000232b8) list_double_number_pane_g1_cp2

0x4209,	// (0x000232c4) list_double_number_pane_g2_cp2

0x5f86,	// (0x00025041) list_double_number_pane_t1_cp2_ParamLimits

0x5f86,	// (0x00025041) list_double_number_pane_t1_cp2

0x5f9a,	// (0x00025055) list_double_number_pane_t2_cp2_ParamLimits

0x5f9a,	// (0x00025055) list_double_number_pane_t2_cp2

0x5fb0,	// (0x0002506b) list_double_number_pane_t3_cp2_ParamLimits

0x5fb0,	// (0x0002506b) list_double_number_pane_t3_cp2

0x5e6f,	// (0x00024f2a) list_single_graphic_pane_g1_cp2_ParamLimits

0x5e6f,	// (0x00024f2a) list_single_graphic_pane_g1_cp2

0x4261,	// (0x0002331c) list_single_graphic_pane_g2_cp2_ParamLimits

0x4261,	// (0x0002331c) list_single_graphic_pane_g2_cp2

0x426d,	// (0x00023328) list_single_graphic_pane_g3_cp2

0x5e45,	// (0x00024f00) list_single_graphic_pane_t1_cp2_ParamLimits

0x5e45,	// (0x00024f00) list_single_graphic_pane_t1_cp2

0x4261,	// (0x0002331c) list_single_number_pane_g1_cp2_ParamLimits

0x4261,	// (0x0002331c) list_single_number_pane_g1_cp2

0x426d,	// (0x00023328) list_single_number_pane_g2_cp2

0x5e45,	// (0x00024f00) list_single_number_pane_t1_cp2_ParamLimits

0x5e45,	// (0x00024f00) list_single_number_pane_t1_cp2

0x5e5b,	// (0x00024f16) list_single_number_pane_t2_cp2_ParamLimits

0x5e5b,	// (0x00024f16) list_single_number_pane_t2_cp2

0x406a,	// (0x00023125) list_double2_pane_g1_cp2_ParamLimits

0x406a,	// (0x00023125) list_double2_pane_g1_cp2

0x407b,	// (0x00023136) list_double2_pane_g2_cp2

0x41d5,	// (0x00023290) list_double2_pane_t1_cp2_ParamLimits

0x41d5,	// (0x00023290) list_double2_pane_t1_cp2

0x41eb,	// (0x000232a6) list_double2_pane_t2_cp2_ParamLimits

0x41eb,	// (0x000232a6) list_double2_pane_t2_cp2

0x41fd,	// (0x000232b8) list_double_pane_g1_cp2_ParamLimits

0x41fd,	// (0x000232b8) list_double_pane_g1_cp2

0x4209,	// (0x000232c4) list_double_pane_g2_cp2

0x4211,	// (0x000232cc) list_double_pane_t1_cp2_ParamLimits

0x4211,	// (0x000232cc) list_double_pane_t1_cp2

0x4227,	// (0x000232e2) list_double_pane_t2_cp2_ParamLimits

0x4227,	// (0x000232e2) list_double_pane_t2_cp2

0x4251,	// (0x0002330c) list_single_pane_cp2_g3

0x4261,	// (0x0002331c) list_single_pane_g1_cp2_ParamLimits

0x4261,	// (0x0002331c) list_single_pane_g1_cp2

0x426d,	// (0x00023328) list_single_pane_g2_cp2

0x4275,	// (0x00023330) list_single_pane_t1_cp2_ParamLimits

0x4275,	// (0x00023330) list_single_pane_t1_cp2

0x428d,	// (0x00023348) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x428d,	// (0x00023348) list_single_large_graphic_pane_g1_cp2

0x4299,	// (0x00023354) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4299,	// (0x00023354) list_single_large_graphic_pane_g2_cp2

0x42a5,	// (0x00023360) list_single_large_graphic_pane_g3_cp2

0x42ad,	// (0x00023368) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x42ad,	// (0x00023368) list_single_large_graphic_pane_g4_cp1

0x42c7,	// (0x00023382) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x42c7,	// (0x00023382) list_single_large_graphic_pane_t1_cp2

0x5e11,	// (0x00024ecc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5e11,	// (0x00024ecc) list_single_graphic_heading_pane_g1_cp2

0x5dde,	// (0x00024e99) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5dde,	// (0x00024e99) list_single_graphic_heading_pane_g4_cp2

0x426d,	// (0x00023328) list_single_graphic_heading_pane_g5_cp2

0x5e1d,	// (0x00024ed8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5e1d,	// (0x00024ed8) list_single_graphic_heading_pane_t1_cp2

0x5e33,	// (0x00024eee) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5e33,	// (0x00024eee) list_single_graphic_heading_pane_t2_cp2

0x5dd2,	// (0x00024e8d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5dd2,	// (0x00024e8d) list_single_2graphic_pane_g1_cp2

0x5dde,	// (0x00024e99) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5dde,	// (0x00024e99) list_single_2graphic_pane_g2_cp2

0x426d,	// (0x00023328) list_single_2graphic_pane_g3_cp2

0x5def,	// (0x00024eaa) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5def,	// (0x00024eaa) list_single_2graphic_pane_g4_cp2

0x5dfb,	// (0x00024eb6) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5dfb,	// (0x00024eb6) list_single_2graphic_pane_t1_cp2

0x2d6d,	// (0x00021e28) list_highlight_pane_g10_cp1

0x599e,	// (0x00024a59) list_highlight_pane_g1_cp1

0x59a6,	// (0x00024a61) list_highlight_pane_g2_cp1

0x59ae,	// (0x00024a69) list_highlight_pane_g3_cp1

0x59b6,	// (0x00024a71) list_highlight_pane_g4_cp1

0x59be,	// (0x00024a79) list_highlight_pane_g5_cp1

0x59c6,	// (0x00024a81) list_highlight_pane_g6_cp1

0x59ce,	// (0x00024a89) list_highlight_pane_g7_cp1

0x59d6,	// (0x00024a91) list_highlight_pane_g8_cp1

0x59de,	// (0x00024a99) list_highlight_pane_g9_cp1

0xd83e,	// (0x0002c8f9) form_field_slider_pane_t3

0xd84c,	// (0x0002c907) form_field_slider_pane_t4

0x58da,	// (0x00024995) slider_form_pane_ParamLimits

0x58da,	// (0x00024995) slider_form_pane

0x2d77,	// (0x00021e32) control_abbreviations

0x2d77,	// (0x00021e32) control_conventions

0x2d77,	// (0x00021e32) control_definitions

0x2d77,	// (0x00021e32) format_table_attribute

0x60ca,	// (0x00025185) bg_popup_preview_window_pane_g9

0x2d77,	// (0x00021e32) format_table_data2

0x2d77,	// (0x00021e32) format_table_data3

0x2d77,	// (0x00021e32) format_table_data_example

0x0008,

0x2d77,	// (0x00021e32) intro_purpose

0xf8fb,	// (0x0002e9b6) bg_popup_preview_window_pane_g

0x2d77,	// (0x00021e32) texts_category

0x2d77,	// (0x00021e32) texts_graphics

0x42dd,	// (0x00023398) text_digital

0x42ec,	// (0x000233a7) text_primary

0x42fb,	// (0x000233b6) text_primary_small

0x430a,	// (0x000233c5) text_secondary

0x4319,	// (0x000233d4) text_title

0x67f2,	// (0x000258ad) bg_passive_tab_pane_g1_cp3_srt

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp3_srt

0x67fb,	// (0x000258b6) bg_passive_tab_pane_g3_cp3_srt

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp3_srt_ParamLimits

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp3_srt

0x6804,	// (0x000258bf) tabs_4_active_pane_srt_g1

0xdbd0,	// (0x0002cc8b) tabs_4_active_pane_srt_t1_ParamLimits

0xdbd0,	// (0x0002cc8b) tabs_4_active_pane_srt_t1

0x67f2,	// (0x000258ad) bg_active_tab_pane_g1_cp3_copy1

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp3_copy1

0x67fb,	// (0x000258b6) bg_active_tab_pane_g3_cp3_copy1

0x2e57,	// (0x00021f12) tabs_2_long_active_pane_srt_ParamLimits

0x2e57,	// (0x00021f12) tabs_2_long_active_pane_srt

0x2e57,	// (0x00021f12) tabs_2_long_passive_pane_srt_ParamLimits

0x2e57,	// (0x00021f12) tabs_2_long_passive_pane_srt

0x468e,	// (0x00023749) bg_passive_tab_pane_cp4_srt_ParamLimits

0x468e,	// (0x00023749) bg_passive_tab_pane_cp4_srt

0x650e,	// (0x000255c9) bg_passive_tab_pane_g1_cp4_srt

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp4_srt

0x6517,	// (0x000255d2) bg_passive_tab_pane_g3_cp4_srt

0x2e57,	// (0x00021f12) bg_active_tab_pane_cp4_srt_ParamLimits

0x2e57,	// (0x00021f12) bg_active_tab_pane_cp4_srt

0xd9de,	// (0x0002ca99) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9de,	// (0x0002ca99) tabs_2_long_active_pane_srt_t1

0x650e,	// (0x000255c9) bg_active_tab_pane_g1_cp4_srt

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp4_srt

0x6517,	// (0x000255d2) bg_active_tab_pane_g3_cp4_srt

0x30d2,	// (0x0002218d) tabs_3_long_active_pane_srt_ParamLimits

0x30d2,	// (0x0002218d) tabs_3_long_active_pane_srt

0x30d2,	// (0x0002218d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x30d2,	// (0x0002218d) tabs_3_long_passive_pane_cp_srt

0x30d2,	// (0x0002218d) tabs_3_long_passive_pane_srt_ParamLimits

0x30d2,	// (0x0002218d) tabs_3_long_passive_pane_srt

0x468e,	// (0x00023749) bg_passive_tab_pane_cp5_srt_ParamLimits

0x468e,	// (0x00023749) bg_passive_tab_pane_cp5_srt

0x3fff,	// (0x000230ba) bg_passive_tab_pane_g1_cp5_srt

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp5_srt

0x4008,	// (0x000230c3) bg_passive_tab_pane_g3_cp5_srt

0x2e57,	// (0x00021f12) bg_active_tab_pane_cp5_srt_ParamLimits

0x2e57,	// (0x00021f12) bg_active_tab_pane_cp5_srt

0xd9c8,	// (0x0002ca83) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9c8,	// (0x0002ca83) tabs_3_long_active_pane_srt_t1

0x3fff,	// (0x000230ba) bg_active_tab_pane_g1_cp5_srt

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp5_srt

0x4008,	// (0x000230c3) bg_active_tab_pane_g3_cp5_srt

0x64ee,	// (0x000255a9) navi_text_pane_srt_t1

0x64e6,	// (0x000255a1) navi_icon_pane_srt_g1

0x44ec,	// (0x000235a7) midp_editing_number_pane_srt

0x4328,	// (0x000233e3) midp_ticker_pane_srt

0x44f4,	// (0x000235af) midp_ticker_pane_srt_g1

0x44fc,	// (0x000235b7) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0002e845) midp_ticker_pane_srt_g

0x4504,	// (0x000235bf) midp_ticker_pane_srt_t1

0x64d7,	// (0x00025592) midp_editing_number_pane_t1_copy1

0xcbcb,	// (0x0002bc86) listscroll_midp_pane

0xcbcb,	// (0x0002bc86) midp_form_pane

0x439e,	// (0x00023459) midp_info_popup_window_ParamLimits

0x439e,	// (0x00023459) midp_info_popup_window

0x377b,	// (0x00022836) bg_popup_sub_pane_cp50_ParamLimits

0x377b,	// (0x00022836) bg_popup_sub_pane_cp50

0x55d6,	// (0x00024691) listscroll_midp_info_pane_ParamLimits

0x55d6,	// (0x00024691) listscroll_midp_info_pane

0x55be,	// (0x00024679) listscroll_form_midp_pane_ParamLimits

0x55be,	// (0x00024679) listscroll_form_midp_pane

0x55ca,	// (0x00024685) scroll_bar_cp050

0xd832,	// (0x0002c8ed) list_midp_pane

0x720e,	// (0x000262c9) signal_pane_g2_cp

0x54d8,	// (0x00024593) listscroll_midp_info_pane_t1_ParamLimits

0x54d8,	// (0x00024593) listscroll_midp_info_pane_t1

0x54f0,	// (0x000245ab) listscroll_midp_info_pane_t2_ParamLimits

0x54f0,	// (0x000245ab) listscroll_midp_info_pane_t2

0x552e,	// (0x000245e9) listscroll_midp_info_pane_t3_ParamLimits

0x552e,	// (0x000245e9) listscroll_midp_info_pane_t3

0x5568,	// (0x00024623) listscroll_midp_info_pane_t4_ParamLimits

0x5568,	// (0x00024623) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0002e8f1) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0002e8f1) listscroll_midp_info_pane_t

0x383d,	// (0x000228f8) scroll_pane_cp21

0x5476,	// (0x00024531) form_midp_field_choice_group_pane

0x547f,	// (0x0002453a) form_midp_field_text_pane

0x54be,	// (0x00024579) form_midp_field_time_pane

0x54c6,	// (0x00024581) form_midp_gauge_slider_pane

0x54cf,	// (0x0002458a) form_midp_gauge_wait_pane

0x2d77,	// (0x00021e32) form_midp_image_pane

0xba34,	// (0x0002aaef) list_single_midp_pane_ParamLimits

0xba34,	// (0x0002aaef) list_single_midp_pane

0xd810,	// (0x0002c8cb) form_midp_field_text_pane_t1

0x5220,	// (0x000242db) input_focus_pane_cp050

0x5465,	// (0x00024520) list_midp_form_text_pane

0x53fd,	// (0x000244b8) form_midp_field_choice_group_pane_t1

0x540b,	// (0x000244c6) input_focus_pane_cp051

0x541f,	// (0x000244da) list_midp_choice_pane

0x2d77,	// (0x00021e32) status_idle_pane

0x53e1,	// (0x0002449c) form_midp_field_time_pane_t1

0x2d6d,	// (0x00021e28) wait_anim_pane_g2_copy1

0x53ef,	// (0x000244aa) form_midp_field_time_pane_t2

0x0001,

0x444c,	// (0x00023507) aid_navinavi_width_2_pane

0xf831,	// (0x0002e8ec) form_midp_field_time_pane_t

0x2d77,	// (0x00021e32) input_focus_pane_cp052

0x2d77,	// (0x00021e32) bg_input_focus_pane_cp040

0x53a1,	// (0x0002445c) form_midp_gauge_slider_pane_t1

0x53af,	// (0x0002446a) form_midp_gauge_slider_pane_t2

0xd7f4,	// (0x0002c8af) form_midp_gauge_slider_pane_t3

0xd802,	// (0x0002c8bd) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0002e8e3) form_midp_gauge_slider_pane_t

0x53d9,	// (0x00024494) form_midp_slider_pane

0x2e57,	// (0x00021f12) bg_input_focus_pane_cp041_ParamLimits

0x2e57,	// (0x00021f12) bg_input_focus_pane_cp041

0x536e,	// (0x00024429) form_midp_gauge_wait_pane_t1_ParamLimits

0x536e,	// (0x00024429) form_midp_gauge_wait_pane_t1

0x5380,	// (0x0002443b) form_midp_gauge_wait_pane_t2_ParamLimits

0x5380,	// (0x0002443b) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0002e8de) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0002e8de) form_midp_gauge_wait_pane_t

0x5392,	// (0x0002444d) form_midp_wait_pane_ParamLimits

0x5392,	// (0x0002444d) form_midp_wait_pane

0x5338,	// (0x000243f3) form_midp_image_pane_g1

0x5341,	// (0x000243fc) form_midp_image_pane_t1

0x5350,	// (0x0002440b) form_midp_image_pane_t2

0x535f,	// (0x0002441a) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0002e8d7) form_midp_image_pane_t

0x532f,	// (0x000243ea) list_single_midp_pane_g1

0x0b50,	// (0x0001fc0b) list_single_midp_pane_t1

0xd7df,	// (0x0002c89a) list_midp_form_item_pane_ParamLimits

0xd7df,	// (0x0002c89a) list_midp_form_item_pane

0x43f4,	// (0x000234af) list_midp_form_item_pane_t1

0x4403,	// (0x000234be) midp_ticker_pane_g1

0x440f,	// (0x000234ca) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0002e82b) midp_ticker_pane_g

0xcc73,	// (0x0002bd2e) midp_ticker_pane_t1

0xdb49,	// (0x0002cc04) midp_editing_number_pane_t1

0x6706,	// (0x000257c1) midp_editing_number_pane

0x6715,	// (0x000257d0) midp_ticker_pane

0x64c7,	// (0x00025582) ai_message_heading_pane

0x2d77,	// (0x00021e32) bg_popup_window_pane_cp14

0x64cf,	// (0x0002558a) listscroll_ai_message_pane

0x6451,	// (0x0002550c) ai_message_heading_pane_g1_ParamLimits

0x6451,	// (0x0002550c) ai_message_heading_pane_g1

0x645d,	// (0x00025518) ai_message_heading_pane_g2_ParamLimits

0x645d,	// (0x00025518) ai_message_heading_pane_g2

0x6469,	// (0x00025524) ai_message_heading_pane_g3_ParamLimits

0x6469,	// (0x00025524) ai_message_heading_pane_g3

0x6475,	// (0x00025530) ai_message_heading_pane_g4_ParamLimits

0x6475,	// (0x00025530) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0002ea18) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0002ea18) ai_message_heading_pane_g

0x6481,	// (0x0002553c) ai_message_heading_pane_t1_ParamLimits

0x6481,	// (0x0002553c) ai_message_heading_pane_t1

0x649b,	// (0x00025556) ai_message_heading_pane_t2_ParamLimits

0x649b,	// (0x00025556) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0002ea21) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0002ea21) ai_message_heading_pane_t

0x64ad,	// (0x00025568) bg_popup_heading_pane_cp1_ParamLimits

0x64ad,	// (0x00025568) bg_popup_heading_pane_cp1

0x643f,	// (0x000254fa) list_ai_message_pane_ParamLimits

0x643f,	// (0x000254fa) list_ai_message_pane

0x383d,	// (0x000228f8) scroll_pane_cp10

0x63db,	// (0x00025496) list_ai_message_pane_g1

0x63e3,	// (0x0002549e) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0002e9f5) list_ai_message_pane_g

0x63eb,	// (0x000254a6) list_ai_message_pane_t1_ParamLimits

0x63eb,	// (0x000254a6) list_ai_message_pane_t1

0x6400,	// (0x000254bb) list_ai_message_pane_t2_ParamLimits

0x6400,	// (0x000254bb) list_ai_message_pane_t2

0x6415,	// (0x000254d0) list_ai_message_pane_t3_ParamLimits

0x6415,	// (0x000254d0) list_ai_message_pane_t3

0x642a,	// (0x000254e5) list_ai_message_pane_t4_ParamLimits

0x642a,	// (0x000254e5) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0002e9fa) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0002e9fa) list_ai_message_pane_t

0xd9a7,	// (0x0002ca62) cell_ai_soft_ind_pane_ParamLimits

0xd9a7,	// (0x0002ca62) cell_ai_soft_ind_pane

0x442d,	// (0x000234e8) cell_ai_soft_ind_pane_g1_ParamLimits

0x442d,	// (0x000234e8) cell_ai_soft_ind_pane_g1

0x2d77,	// (0x00021e32) grid_highlight_cp1

0x443a,	// (0x000234f5) text_secondary_cp56_ParamLimits

0x443a,	// (0x000234f5) text_secondary_cp56

0x639b,	// (0x00025456) example_general_pane_ParamLimits

0x639b,	// (0x00025456) example_general_pane

0x63a7,	// (0x00025462) example_parent_pane_g1_ParamLimits

0x63a7,	// (0x00025462) example_parent_pane_g1

0x63b3,	// (0x0002546e) example_parent_pane_t1_ParamLimits

0x63b3,	// (0x0002546e) example_parent_pane_t1

0xd08e,	// (0x0002c149) popup_preview_text_window_ParamLimits

0xd08e,	// (0x0002c149) popup_preview_text_window

0x4259,	// (0x00023314) list_single_pane_cp2_g4

0x3188,	// (0x00022243) bg_popup_preview_window_pane_ParamLimits

0x3188,	// (0x00022243) bg_popup_preview_window_pane

0x60d2,	// (0x0002518d) popup_preview_text_window_t1_ParamLimits

0x60d2,	// (0x0002518d) popup_preview_text_window_t1

0x60f0,	// (0x000251ab) popup_preview_text_window_t2_ParamLimits

0x60f0,	// (0x000251ab) popup_preview_text_window_t2

0x6139,	// (0x000251f4) popup_preview_text_window_t3_ParamLimits

0x6139,	// (0x000251f4) popup_preview_text_window_t3

0x617e,	// (0x00025239) popup_preview_text_window_t4_ParamLimits

0x617e,	// (0x00025239) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0002e9c9) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0002e9c9) popup_preview_text_window_t

0x61fc,	// (0x000252b7) scroll_pane_cp11

0x5130,	// (0x000241eb) bg_popup_preview_window_pane_g1

0x6092,	// (0x0002514d) bg_popup_preview_window_pane_g2

0x609a,	// (0x00025155) bg_popup_preview_window_pane_g3

0x60a2,	// (0x0002515d) bg_popup_preview_window_pane_g4

0x60aa,	// (0x00025165) bg_popup_preview_window_pane_g5

0x60b2,	// (0x0002516d) bg_popup_preview_window_pane_g6

0x60ba,	// (0x00025175) bg_popup_preview_window_pane_g7

0x60c2,	// (0x0002517d) bg_popup_preview_window_pane_g8

0x12b1,	// (0x0002036c) aid_popup_width_pane

0xd00a,	// (0x0002c0c5) popup_midp_note_alarm_window_ParamLimits

0xd00a,	// (0x0002c0c5) popup_midp_note_alarm_window

0x36b7,	// (0x00022772) data_form_pane_ParamLimits

0xb8a7,	// (0x0002a962) form_field_data_pane_g1

0xb8b1,	// (0x0002a96c) form_field_data_pane_t1_ParamLimits

0x36c3,	// (0x0002277e) input_focus_pane_ParamLimits

0x36d1,	// (0x0002278c) data_form_wide_pane_ParamLimits

0x0852,	// (0x0001f90d) form_field_data_wide_pane_g1

0x085e,	// (0x0001f919) form_field_data_wide_pane_t1_ParamLimits

0x3434,	// (0x000224ef) input_focus_pane_cp6_ParamLimits

0xc9ef,	// (0x0002baaa) input_popup_find_pane_g1_ParamLimits

0xc9ef,	// (0x0002baaa) input_popup_find_pane_g1

0x181b,	// (0x000208d6) aid_navi_side_left_pane

0x1830,	// (0x000208eb) aid_navi_side_right_pane

0x5a99,	// (0x00024b54) bg_popup_window_pane_cp30_ParamLimits

0x5a99,	// (0x00024b54) bg_popup_window_pane_cp30

0x5b13,	// (0x00024bce) popup_midp_note_alarm_window_g1_ParamLimits

0x5b13,	// (0x00024bce) popup_midp_note_alarm_window_g1

0x5b4f,	// (0x00024c0a) popup_midp_note_alarm_window_t1_ParamLimits

0x5b4f,	// (0x00024c0a) popup_midp_note_alarm_window_t1

0x5bf0,	// (0x00024cab) popup_midp_note_alarm_window_t2_ParamLimits

0x5bf0,	// (0x00024cab) popup_midp_note_alarm_window_t2

0x5c9e,	// (0x00024d59) popup_midp_note_alarm_window_t3_ParamLimits

0x5c9e,	// (0x00024d59) popup_midp_note_alarm_window_t3

0x5cd0,	// (0x00024d8b) popup_midp_note_alarm_window_t4_ParamLimits

0x5cd0,	// (0x00024d8b) popup_midp_note_alarm_window_t4

0x5cf6,	// (0x00024db1) popup_midp_note_alarm_window_t5_ParamLimits

0x5cf6,	// (0x00024db1) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0002e966) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0002e966) popup_midp_note_alarm_window_t

0x5da2,	// (0x00024e5d) wait_bar_pane_cp1_ParamLimits

0x5da2,	// (0x00024e5d) wait_bar_pane_cp1

0x2d77,	// (0x00021e32) wait_anim_pane_copy1

0x2d77,	// (0x00021e32) wait_border_pane_copy1

0x577f,	// (0x0002483a) wait_border_pane_g1_copy1

0x0878,	// (0x0001f933) form_field_popup_pane_g1

0xb8cb,	// (0x0002a986) form_field_popup_pane_t1_ParamLimits

0x36c3,	// (0x0002277e) input_focus_pane_cp7_ParamLimits

0x36fd,	// (0x000227b8) list_form_pane_ParamLimits

0x0898,	// (0x0001f953) form_field_popup_wide_pane_g1

0x08a0,	// (0x0001f95b) form_field_popup_wide_pane_t1_ParamLimits

0x36c3,	// (0x0002277e) input_focus_pane_cp8_ParamLimits

0x3709,	// (0x000227c4) list_form_wide_pane_ParamLimits

0x687e,	// (0x00025939) aid_size_cell_graphic_pane

0xb94a,	// (0x0002aa05) data_form_pane_t1_ParamLimits

0xba60,	// (0x0002ab1b) data_form_wide_pane_t1_ParamLimits

0xd46b,	// (0x0002c526) bg_status_flat_pane

0xbe93,	// (0x0002af4e) title_pane_t1_ParamLimits

0x2e1f,	// (0x00021eda) title_pane_t2_ParamLimits

0x2e45,	// (0x00021f00) title_pane_t3_ParamLimits

0xf573,	// (0x0002e62e) title_pane_t_ParamLimits

0x3cbe,	// (0x00022d79) level_1_signal_ParamLimits

0x3ccb,	// (0x00022d86) level_2_signal_ParamLimits

0x3cd8,	// (0x00022d93) level_3_signal_ParamLimits

0x3ce5,	// (0x00022da0) level_4_signal_ParamLimits

0x3cf2,	// (0x00022dad) level_5_signal_ParamLimits

0x3cff,	// (0x00022dba) level_6_signal_ParamLimits

0x3d0c,	// (0x00022dc7) level_7_signal_ParamLimits

0x3cbe,	// (0x00022d79) level_1_battery_ParamLimits

0x3ccb,	// (0x00022d86) level_2_battery_ParamLimits

0x3cd8,	// (0x00022d93) level_3_battery_ParamLimits

0x3ce5,	// (0x00022da0) level_4_battery_ParamLimits

0x3cf2,	// (0x00022dad) level_5_battery_ParamLimits

0x3cff,	// (0x00022dba) level_6_battery_ParamLimits

0x3d0c,	// (0x00022dc7) level_7_battery_ParamLimits

0x599e,	// (0x00024a59) bg_status_flat_pane_g1

0x59a6,	// (0x00024a61) bg_status_flat_pane_g2

0x59ae,	// (0x00024a69) bg_status_flat_pane_g3

0x59b6,	// (0x00024a71) bg_status_flat_pane_g4

0x59be,	// (0x00024a79) bg_status_flat_pane_g5

0x59c6,	// (0x00024a81) bg_status_flat_pane_g6

0x59ce,	// (0x00024a89) bg_status_flat_pane_g7

0xbf27,	// (0x0002afe2) tabs_3_active_pane_t1_ParamLimits

0xbf27,	// (0x0002afe2) tabs_3_passive_pane_t1_ParamLimits

0xbf41,	// (0x0002affc) tabs_4_active_pane_t1_ParamLimits

0xbf41,	// (0x0002affc) tabs_4_1_passive_pane_t1_ParamLimits

0xca05,	// (0x0002bac0) tabs_2_active_pane_t1_ParamLimits

0xca05,	// (0x0002bac0) tabs_2_passive_pane_t1_ParamLimits

0x2e57,	// (0x00021f12) bg_active_tab_pane_cp4_ParamLimits

0xca17,	// (0x0002bad2) tabs_2_long_active_pane_t1_ParamLimits

0x468e,	// (0x00023749) bg_passive_tab_pane_cp4_ParamLimits

0x1d72,	// (0x00020e2d) list_single_midp_graphic_pane_t1_ParamLimits

0x2e57,	// (0x00021f12) bg_active_tab_pane_cp5_ParamLimits

0xca2a,	// (0x0002bae5) tabs_3_long_active_pane_t1_ParamLimits

0x468e,	// (0x00023749) bg_passive_tab_pane_cp5_ParamLimits

0x1d72,	// (0x00020e2d) list_single_midp_graphic_pane_t1

0xd46b,	// (0x0002c526) bg_status_flat_pane_ParamLimits

0x4dc7,	// (0x00023e82) indicator_pane_cp2_ParamLimits

0x4dc7,	// (0x00023e82) indicator_pane_cp2

0xd5e2,	// (0x0002c69d) navi_pane_srt_ParamLimits

0xd5e2,	// (0x0002c69d) navi_pane_srt

0x4f0f,	// (0x00023fca) popup_clock_digital_analogue_window_cp1

0x2f34,	// (0x00021fef) indicator_pane_t1

0x4328,	// (0x000233e3) copy_highlight_pane

0x4328,	// (0x000233e3) cursor_graphics_pane

0x4328,	// (0x000233e3) graphic_within_text_pane

0x4328,	// (0x000233e3) link_highlight_pane

0x61bf,	// (0x0002527a) popup_preview_text_window_t5_ParamLimits

0x61bf,	// (0x0002527a) popup_preview_text_window_t5

0x4454,	// (0x0002350f) cursor_digital_pane

0x4454,	// (0x0002350f) cursor_primary_pane

0x4465,	// (0x00023520) cursor_primary_small_pane

0x446d,	// (0x00023528) cursor_secondary_pane

0x4475,	// (0x00023530) cursor_title_pane

0x4454,	// (0x0002350f) link_highlight_digital_pane

0x445c,	// (0x00023517) link_highlight_primary_pane

0x4465,	// (0x00023520) link_highlight_primary_small_pane

0x446d,	// (0x00023528) link_highlight_secondary_pane

0x4475,	// (0x00023530) link_highlight_title_pane

0x4454,	// (0x0002350f) copy_highlight_digital_pane

0x4454,	// (0x0002350f) copy_highlight_primary_pane

0x4465,	// (0x00023520) copy_highlight_primary_small_pane

0x446d,	// (0x00023528) copy_highlight_secondary_pane

0x4475,	// (0x00023530) copy_highlight_title_pane

0x446d,	// (0x00023528) graphic_text_digital_pane

0x5a3c,	// (0x00024af7) graphic_text_primary_pane

0x5a45,	// (0x00024b00) graphic_text_primary_small_pane

0x4465,	// (0x00023520) graphic_text_secondary_pane

0x4454,	// (0x0002350f) graphic_text_title_pane

0xcc85,	// (0x0002bd40) cursor_primary_pane_g1

0x5a2e,	// (0x00024ae9) cursor_text_primary_t1

0xd86e,	// (0x0002c929) cursor_primary_small_pane_g1

0x5a20,	// (0x00024adb) cursor_text_primary_small_t1

0xd864,	// (0x0002c91f) cursor_primary_small_pane_g1_copy1

0x5a08,	// (0x00024ac3) cursor_text_primary_small_t1_copy1

0x59e6,	// (0x00024aa1) cursor_text_title_t1

0xd85a,	// (0x0002c915) cursor_title_pane_g1

0xcc85,	// (0x0002bd40) cursor_digital_pane_g1

0x4487,	// (0x00023542) cursor_text_digital_t1

0x44ac,	// (0x00023567) link_highlight_primary_pane_g1

0x598f,	// (0x00024a4a) link_highlight_primary_pane_t1

0x4495,	// (0x00023550) link_highlight_primary_small_pane_g1

0x449d,	// (0x00023558) link_highlight_primary_small_pane_t1

0x44ac,	// (0x00023567) link_highlight_secondary_pane_g1

0x44b4,	// (0x0002356f) link_highlight_secondary_pane_t1

0x5903,	// (0x000249be) link_highlight_title_pane_g1

0x590b,	// (0x000249c6) link_highlight_title_pane_t1

0x58ec,	// (0x000249a7) link_highlight_digital_pane_g1

0x58f4,	// (0x000249af) link_highlight_digital_pane_t1

0x57c4,	// (0x0002487f) copy_highlight_primary_pane_g1

0x57cc,	// (0x00024887) copy_highlight_primary_pane_t1

0x579e,	// (0x00024859) copy_highlight_primary_small_pane_g1

0x57b5,	// (0x00024870) copy_highlight_primary_small_pane_t1

0x44c3,	// (0x0002357e) copy_highlight_secondary_pane_g1

0x44cb,	// (0x00023586) copy_highlight_secondary_pane_t1

0x579e,	// (0x00024859) copy_highlight_title_pane_g1

0x57a6,	// (0x00024861) copy_highlight_title_pane_t1

0x57c4,	// (0x0002487f) copy_highlight_digital_pane_g1

0x6a48,	// (0x00025b03) copy_highlight_digital_pane_t1

0x699c,	// (0x00025a57) graphic_text_primary_pane_g1

0x6a2c,	// (0x00025ae7) graphic_text_primary_pane_t1

0x6a3a,	// (0x00025af5) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0002ea95) graphic_text_primary_pane_t

0x6a08,	// (0x00025ac3) graphic_text_primary_small_pane_g1

0x6a10,	// (0x00025acb) graphic_text_primary_small_pane_t1

0x6a1e,	// (0x00025ad9) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0002ea90) graphic_text_primary_small_pane_t

0x69e4,	// (0x00025a9f) graphic_text_secondary_pane_g1

0x69ec,	// (0x00025aa7) graphic_text_secondary_pane_t1

0x69fa,	// (0x00025ab5) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0002ea8b) graphic_text_secondary_pane_t

0x69c0,	// (0x00025a7b) graphic_text_title_pane_g1

0x69c8,	// (0x00025a83) graphic_text_title_pane_t1

0x69d6,	// (0x00025a91) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0002ea86) graphic_text_title_pane_t

0x699c,	// (0x00025a57) graphic_text_digital_pane_g1

0x69a4,	// (0x00025a5f) graphic_text_digital_pane_t1

0x69b2,	// (0x00025a6d) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0002ea81) graphic_text_digital_pane_t

0x2e57,	// (0x00021f12) navi_icon_pane_srt_ParamLimits

0x2e57,	// (0x00021f12) navi_icon_pane_srt

0x2d77,	// (0x00021e32) navi_midp_pane_srt

0x2d77,	// (0x00021e32) navi_navi_pane_srt

0x2e57,	// (0x00021f12) navi_text_pane_srt_ParamLimits

0x2e57,	// (0x00021f12) navi_text_pane_srt

0x6967,	// (0x00025a22) navi_navi_icon_text_pane_srt

0x696f,	// (0x00025a2a) navi_navi_pane_srt_g1_ParamLimits

0x696f,	// (0x00025a2a) navi_navi_pane_srt_g1

0x6981,	// (0x00025a3c) navi_navi_pane_srt_g2_ParamLimits

0x6981,	// (0x00025a3c) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0002ea7c) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0002ea7c) navi_navi_pane_srt_g

0x6993,	// (0x00025a4e) navi_navi_tabs_pane_srt

0x6967,	// (0x00025a22) navi_navi_text_pane_srt

0x6967,	// (0x00025a22) navi_navi_volume_pane_srt

0x6958,	// (0x00025a13) navi_navi_text_pane_srt_t1

0x20ec,	// (0x000211a7) navi_navi_volume_pane_srt_g1

0x20f4,	// (0x000211af) volume_small_pane_srt_ParamLimits

0x20f4,	// (0x000211af) volume_small_pane_srt

0x1afb,	// (0x00020bb6) volume_small_pane_srt_g1_ParamLimits

0x1afb,	// (0x00020bb6) volume_small_pane_srt_g1

0x1b0b,	// (0x00020bc6) volume_small_pane_srt_g2_ParamLimits

0x1b0b,	// (0x00020bc6) volume_small_pane_srt_g2

0x1b1c,	// (0x00020bd7) volume_small_pane_srt_g3_ParamLimits

0x1b1c,	// (0x00020bd7) volume_small_pane_srt_g3

0x1b2d,	// (0x00020be8) volume_small_pane_srt_g4_ParamLimits

0x1b2d,	// (0x00020be8) volume_small_pane_srt_g4

0x1b3e,	// (0x00020bf9) volume_small_pane_srt_g5_ParamLimits

0x1b3e,	// (0x00020bf9) volume_small_pane_srt_g5

0x1b4f,	// (0x00020c0a) volume_small_pane_srt_g6_ParamLimits

0x1b4f,	// (0x00020c0a) volume_small_pane_srt_g6

0x1b60,	// (0x00020c1b) volume_small_pane_srt_g7_ParamLimits

0x1b60,	// (0x00020c1b) volume_small_pane_srt_g7

0x1b71,	// (0x00020c2c) volume_small_pane_srt_g8_ParamLimits

0x1b71,	// (0x00020c2c) volume_small_pane_srt_g8

0x1b82,	// (0x00020c3d) volume_small_pane_srt_g9_ParamLimits

0x1b82,	// (0x00020c3d) volume_small_pane_srt_g9

0x1b93,	// (0x00020c4e) volume_small_pane_srt_g10_ParamLimits

0x1b93,	// (0x00020c4e) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0002e830) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0002e830) volume_small_pane_srt_g

0x3231,	// (0x000222ec) query_popup_data_pane_cp2

0x693e,	// (0x000259f9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x693e,	// (0x000259f9) navi_navi_icon_text_pane_srt_t1

0x5a3c,	// (0x00024af7) navi_tabs_2_long_pane_srt

0x5a3c,	// (0x00024af7) navi_tabs_2_pane_srt

0x5a3c,	// (0x00024af7) navi_tabs_3_long_pane_srt

0x5a3c,	// (0x00024af7) navi_tabs_3_pane_srt

0x5a3c,	// (0x00024af7) navi_tabs_4_pane_srt

0x20cc,	// (0x00021187) tabs_2_active_pane_srt_ParamLimits

0x20cc,	// (0x00021187) tabs_2_active_pane_srt

0x20dc,	// (0x00021197) tabs_2_passive_pane_srt_ParamLimits

0x20dc,	// (0x00021197) tabs_2_passive_pane_srt

0x5220,	// (0x000242db) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5220,	// (0x000242db) bg_passive_tab_pane_cp1_srt

0x690a,	// (0x000259c5) bg_passive_tab_pane_g1_cp1_srt

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp1_srt

0x6913,	// (0x000259ce) bg_passive_tab_pane_g3_cp1_srt

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp1_srt_ParamLimits

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp1_srt

0x691c,	// (0x000259d7) tabs_2_active_pane_srt_g1

0xdc4c,	// (0x0002cd07) tabs_2_active_pane_srt_t1_ParamLimits

0xdc4c,	// (0x0002cd07) tabs_2_active_pane_srt_t1

0x690a,	// (0x000259c5) bg_active_tab_pane_g1_cp1_srt

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp1_srt

0x6913,	// (0x000259ce) bg_active_tab_pane_g3_cp1_srt

0x2099,	// (0x00021154) tabs_3_active_pane_srt_ParamLimits

0x2099,	// (0x00021154) tabs_3_active_pane_srt

0x20aa,	// (0x00021165) tabs_3_passive_pane_cp_srt_ParamLimits

0x20aa,	// (0x00021165) tabs_3_passive_pane_cp_srt

0x20bb,	// (0x00021176) tabs_3_passive_pane_srt_ParamLimits

0x20bb,	// (0x00021176) tabs_3_passive_pane_srt

0x5220,	// (0x000242db) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5220,	// (0x000242db) bg_passive_tab_pane_cp2_srt

0x44da,	// (0x00023595) bg_passive_tab_pane_g1_cp2_srt

0x3f75,	// (0x00023030) bg_passive_tab_pane_g2_cp2_srt

0x44e3,	// (0x0002359e) bg_passive_tab_pane_g3_cp2_srt

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp2_srt_ParamLimits

0x30d2,	// (0x0002218d) bg_active_tab_pane_cp2_srt

0x68f0,	// (0x000259ab) tabs_3_active_pane_srt_g1

0xdc36,	// (0x0002ccf1) tabs_3_active_pane_srt_t1_ParamLimits

0xdc36,	// (0x0002ccf1) tabs_3_active_pane_srt_t1

0x44da,	// (0x00023595) bg_active_tab_pane_g1_cp2_srt

0x3f75,	// (0x00023030) bg_active_tab_pane_g2_cp2_srt

0x44e3,	// (0x0002359e) bg_active_tab_pane_g3_cp2_srt

0x2051,	// (0x0002110c) tabs_4_active_pane_srt_ParamLimits

0x2051,	// (0x0002110c) tabs_4_active_pane_srt

0x2063,	// (0x0002111e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2063,	// (0x0002111e) tabs_4_passive_pane_cp2_srt

0x4638,	// (0x000236f3) aid_size_cell_toolbar

0x657f,	// (0x0002563a) main_idle_act_pane_ParamLimits

0x482b,	// (0x000238e6) popup_large_graphic_colour_window_ParamLimits

0xd336,	// (0x0002c3f1) popup_toolbar_window_ParamLimits

0xd336,	// (0x0002c3f1) popup_toolbar_window

0x6752,	// (0x0002580d) list_single_graphic_2heading_pane_ParamLimits

0x6752,	// (0x0002580d) list_single_graphic_2heading_pane

0x3a6d,	// (0x00022b28) aid_size_cell_apps_grid_lsc_pane

0x3a7f,	// (0x00022b3a) aid_size_cell_apps_grid_prt_pane

0x468e,	// (0x00023749) bg_wml_button_pane_cp1_ParamLimits

0x468e,	// (0x00023749) bg_wml_button_pane_cp1

0xd810,	// (0x0002c8cb) form_midp_field_text_pane_t1_ParamLimits

0x5220,	// (0x000242db) input_focus_pane_cp050_ParamLimits

0x5465,	// (0x00024520) list_midp_form_text_pane_ParamLimits

0x540b,	// (0x000244c6) input_focus_pane_cp051_ParamLimits

0x541f,	// (0x000244da) list_midp_choice_pane_ParamLimits

0xd7ab,	// (0x0002c866) list_single_2graphic_pane_cp3_ParamLimits

0xd7ab,	// (0x0002c866) list_single_2graphic_pane_cp3

0xd7bf,	// (0x0002c87a) list_single_midp_graphic_pane_ParamLimits

0xd7bf,	// (0x0002c87a) list_single_midp_graphic_pane

0x0a8c,	// (0x0001fb47) list_single_graphic_2heading_pane_g1_ParamLimits

0x0a8c,	// (0x0001fb47) list_single_graphic_2heading_pane_g1

0x0a98,	// (0x0001fb53) list_single_graphic_2heading_pane_g4_ParamLimits

0x0a98,	// (0x0001fb53) list_single_graphic_2heading_pane_g4

0x0aa4,	// (0x0001fb5f) list_single_graphic_2heading_pane_g5_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0002e883) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0002e883) list_single_graphic_2heading_pane_g

0x0ab0,	// (0x0001fb6b) list_single_graphic_2heading_pane_t1_ParamLimits

0x0ab0,	// (0x0001fb6b) list_single_graphic_2heading_pane_t1

0x0ac4,	// (0x0001fb7f) list_single_graphic_2heading_pane_t2_ParamLimits

0x0ac4,	// (0x0001fb7f) list_single_graphic_2heading_pane_t2

0x0ae0,	// (0x0001fb9b) list_single_graphic_2heading_pane_t3_ParamLimits

0x0ae0,	// (0x0001fb9b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0002e88a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0002e88a) list_single_graphic_2heading_pane_t

0x506e,	// (0x00024129) bg_popup_sub_pane_cp2

0x5098,	// (0x00024153) grid_toobar_pane

0x1cf9,	// (0x00020db4) cell_toolbar_pane_ParamLimits

0x1cf9,	// (0x00020db4) cell_toolbar_pane

0x50d4,	// (0x0002418f) cell_toolbar_pane_g1_ParamLimits

0x50d4,	// (0x0002418f) cell_toolbar_pane_g1

0x50e8,	// (0x000241a3) cell_toolbar_pane_g2_ParamLimits

0x50e8,	// (0x000241a3) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0002e898) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0002e898) cell_toolbar_pane_g

0x510a,	// (0x000241c5) grid_highlight_pane_cp2_ParamLimits

0x510a,	// (0x000241c5) grid_highlight_pane_cp2

0x5124,	// (0x000241df) toolbar_button_pane

0x5130,	// (0x000241eb) toolbar_button_pane_g1

0x5138,	// (0x000241f3) toolbar_button_pane_g2

0x5140,	// (0x000241fb) toolbar_button_pane_g3

0x5148,	// (0x00024203) toolbar_button_pane_g4

0x5150,	// (0x0002420b) toolbar_button_pane_g5

0x5158,	// (0x00024213) toolbar_button_pane_g6

0x5160,	// (0x0002421b) toolbar_button_pane_g7

0x5168,	// (0x00024223) toolbar_button_pane_g8

0x5170,	// (0x0002422b) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0002e89d) toolbar_button_pane_g

0x1d31,	// (0x00020dec) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1d31,	// (0x00020dec) list_single_2graphic_pane_g1_cp3

0xc345,	// (0x0002b400) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc345,	// (0x0002b400) list_single_2graphic_pane_g2_cp3

0x1d4e,	// (0x00020e09) list_single_2graphic_pane_g3_cp3

0x4c87,	// (0x00023d42) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4c87,	// (0x00023d42) list_single_2graphic_pane_g4_cp3

0x1d56,	// (0x00020e11) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1d56,	// (0x00020e11) list_single_2graphic_pane_t1_cp3

0x3d19,	// (0x00022dd4) list_single_midp_graphic_pane_g2_ParamLimits

0x3d19,	// (0x00022dd4) list_single_midp_graphic_pane_g2

0x4640,	// (0x000236fb) aid_zoom_text_primary

0x0a60,	// (0x0001fb1b) aid_zoom_text_secondary

0x4597,	// (0x00023652) status_small_pane_g7_ParamLimits

0x4597,	// (0x00023652) status_small_pane_g7

0x45ba,	// (0x00023675) status_small_pane_t1_ParamLimits

0xbe6f,	// (0x0002af2a) title_pane_g2

0x0003,

0xf56a,	// (0x0002e625) title_pane_g

0xc0f7,	// (0x0002b1b2) aid_size_cell_colour_1_pane_ParamLimits

0xc0f7,	// (0x0002b1b2) aid_size_cell_colour_1_pane

0xc10b,	// (0x0002b1c6) aid_size_cell_colour_2_pane_ParamLimits

0xc10b,	// (0x0002b1c6) aid_size_cell_colour_2_pane

0xc11f,	// (0x0002b1da) aid_size_cell_colour_3_pane_ParamLimits

0xc11f,	// (0x0002b1da) aid_size_cell_colour_3_pane

0xc133,	// (0x0002b1ee) aid_size_cell_colour_4_pane_ParamLimits

0xc133,	// (0x0002b1ee) aid_size_cell_colour_4_pane

0x1757,	// (0x00020812) title_pane_stacon_g1_ParamLimits

0x1757,	// (0x00020812) title_pane_stacon_g1

0x5823,	// (0x000248de) popup_note_wait_window_g3_ParamLimits

0x5823,	// (0x000248de) popup_note_wait_window_g3

0x5899,	// (0x00024954) popup_note_wait_window_t5_ParamLimits

0x5899,	// (0x00024954) popup_note_wait_window_t5

0x2d77,	// (0x00021e32) main_feb_china_hwr_fs_writing_pane

0xcd40,	// (0x0002bdfb) popup_feb_china_hwr_fs_window_ParamLimits

0xcd40,	// (0x0002bdfb) popup_feb_china_hwr_fs_window

0xc356,	// (0x0002b411) aid_size_cell_hwr_fs_ParamLimits

0xc356,	// (0x0002b411) aid_size_cell_hwr_fs

0x5220,	// (0x000242db) bg_popup_sub_pane_cp3_ParamLimits

0x5220,	// (0x000242db) bg_popup_sub_pane_cp3

0xc36b,	// (0x0002b426) grid_hwr_fs_pane_ParamLimits

0xc36b,	// (0x0002b426) grid_hwr_fs_pane

0x1db5,	// (0x00020e70) linegrid_hwr_fs_pane_ParamLimits

0x1db5,	// (0x00020e70) linegrid_hwr_fs_pane

0xc383,	// (0x0002b43e) cell_hwr_fs_pane_ParamLimits

0xc383,	// (0x0002b43e) cell_hwr_fs_pane

0x522c,	// (0x000242e7) linegrid_hwr_fs_pane_g1_ParamLimits

0x522c,	// (0x000242e7) linegrid_hwr_fs_pane_g1

0xd77f,	// (0x0002c83a) linegrid_hwr_fs_pane_g2_ParamLimits

0xd77f,	// (0x0002c83a) linegrid_hwr_fs_pane_g2

0x524a,	// (0x00024305) linegrid_hwr_fs_pane_g3_ParamLimits

0x524a,	// (0x00024305) linegrid_hwr_fs_pane_g3

0x1de7,	// (0x00020ea2) linegrid_hwr_fs_pane_g4_ParamLimits

0x1de7,	// (0x00020ea2) linegrid_hwr_fs_pane_g4

0x1e01,	// (0x00020ebc) linegrid_hwr_fs_pane_g5_ParamLimits

0x1e01,	// (0x00020ebc) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0002e8c3) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0002e8c3) linegrid_hwr_fs_pane_g

0x5256,	// (0x00024311) cell_hwr_fs_pane_g1_ParamLimits

0x5256,	// (0x00024311) cell_hwr_fs_pane_g1

0x4fa5,	// (0x00024060) cell_hwr_fs_pane_g2_ParamLimits

0x4fa5,	// (0x00024060) cell_hwr_fs_pane_g2

0xd791,	// (0x0002c84c) cell_hwr_fs_pane_g3_ParamLimits

0xd791,	// (0x0002c84c) cell_hwr_fs_pane_g3

0xd79e,	// (0x0002c859) cell_hwr_fs_pane_g4_ParamLimits

0xd79e,	// (0x0002c859) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0002e8ce) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0002e8ce) cell_hwr_fs_pane_g

0xc3a9,	// (0x0002b464) cell_hwr_fs_pane_t1

0x2d77,	// (0x00021e32) grid_highlight_pane_cp6

0x2d77,	// (0x00021e32) main_idle_act2_pane

0x3824,	// (0x000228df) aid_inside_area_popup_secondary

0xd88e,	// (0x0002c949) aid_inside_area_window_primary_ParamLimits

0xd88e,	// (0x0002c949) aid_inside_area_window_primary

0x6a57,	// (0x00025b12) ai2_news_ticker_pane

0x6a5f,	// (0x00025b1a) aid_size_cell_ai1_link_ParamLimits

0x6a5f,	// (0x00025b1a) aid_size_cell_ai1_link

0xdc62,	// (0x0002cd1d) popup_ai2_data_window_ParamLimits

0xdc62,	// (0x0002cd1d) popup_ai2_data_window

0x6a8f,	// (0x00025b4a) popup_ai2_link_window_ParamLimits

0x6a8f,	// (0x00025b4a) popup_ai2_link_window

0x5220,	// (0x000242db) bg_popup_sub_pane_cp4_ParamLimits

0x5220,	// (0x000242db) bg_popup_sub_pane_cp4

0x6aa3,	// (0x00025b5e) grid_ai2_link_pane_ParamLimits

0x6aa3,	// (0x00025b5e) grid_ai2_link_pane

0x6aba,	// (0x00025b75) popup_ai2_link_window_g1_ParamLimits

0x6aba,	// (0x00025b75) popup_ai2_link_window_g1

0x6ac6,	// (0x00025b81) popup_ai2_link_window_g2_ParamLimits

0x6ac6,	// (0x00025b81) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0002ea9a) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0002ea9a) popup_ai2_link_window_g

0x6ad5,	// (0x00025b90) ai2_mp_button_pane

0x6add,	// (0x00025b98) ai2_mp_volume_pane

0x540b,	// (0x000244c6) bg_popup_sub_pane_cp5_ParamLimits

0x540b,	// (0x000244c6) bg_popup_sub_pane_cp5

0x6ae5,	// (0x00025ba0) heading_ai2_gene_pane_ParamLimits

0x6ae5,	// (0x00025ba0) heading_ai2_gene_pane

0x6af1,	// (0x00025bac) list_ai2_gene_pane_ParamLimits

0x6af1,	// (0x00025bac) list_ai2_gene_pane

0x6b39,	// (0x00025bf4) cell_ai2_link_pane_ParamLimits

0x6b39,	// (0x00025bf4) cell_ai2_link_pane

0x6b4f,	// (0x00025c0a) cell_ai2_link_pane_g1

0x2d77,	// (0x00021e32) grid_highlight_pane_cp7

0x2109,	// (0x000211c4) ai2_mp_volume_pane_g1

0x6c1f,	// (0x00025cda) ai2_mp_volume_pane_g2

0xdc8c,	// (0x0002cd47) list_ai2_gene_pane_t1

0x6c27,	// (0x00025ce2) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0002eab3) ai2_mp_volume_pane_g

0x2111,	// (0x000211cc) volume_small_pane_cp3

0x6c2f,	// (0x00025cea) aid_size_cell_ai2_button

0x6c37,	// (0x00025cf2) grid_ai2_button_pane

0x6c40,	// (0x00025cfb) cell_ai2_button_pane_ParamLimits

0x6c40,	// (0x00025cfb) cell_ai2_button_pane

0x2d6d,	// (0x00021e28) cell_ai2_button_pane_g1

0x2d77,	// (0x00021e32) grid_highlight_pane_cp8

0x6bdf,	// (0x00025c9a) ai2_gene_pane_t1_ParamLimits

0x6bdf,	// (0x00025c9a) ai2_gene_pane_t1

0xccb6,	// (0x0002bd71) aid_height_parent_landscape

0xd9f5,	// (0x0002cab0) aid_height_set_list

0x657f,	// (0x0002563a) aid_size_parent

0x687e,	// (0x00025939) aid_size_cell_graphic_pane_ParamLimits

0x6b01,	// (0x00025bbc) popup_ai2_data_window_g1_ParamLimits

0x6b01,	// (0x00025bbc) popup_ai2_data_window_g1

0x6b0d,	// (0x00025bc8) ai2_news_ticker_pane_g1

0x6b15,	// (0x00025bd0) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0002ea9f) ai2_news_ticker_pane_g

0x6b1d,	// (0x00025bd8) ai2_news_ticker_pane_t1

0x6b2b,	// (0x00025be6) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0002eaa4) ai2_news_ticker_pane_t

0x6b58,	// (0x00025c13) heading_ai2_gene_pane_g1

0x6b60,	// (0x00025c1b) heading_ai2_gene_pane_t1_ParamLimits

0x6b60,	// (0x00025c1b) heading_ai2_gene_pane_t1

0x6b75,	// (0x00025c30) list_highlight_pane_cp6

0xdc76,	// (0x0002cd31) ai2_gene_pane_ParamLimits

0xdc76,	// (0x0002cd31) ai2_gene_pane

0xdc9a,	// (0x0002cd55) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0002eaa9) list_ai2_gene_pane_t

0x6bb0,	// (0x00025c6b) list_highlight_pane_cp8_ParamLimits

0x6bb0,	// (0x00025c6b) list_highlight_pane_cp8

0x6bc1,	// (0x00025c7c) ai2_gene_pane_g1_ParamLimits

0x6bc1,	// (0x00025c7c) ai2_gene_pane_g1

0x6bd3,	// (0x00025c8e) ai2_gene_pane_g2_ParamLimits

0x6bd3,	// (0x00025c8e) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0002eaae) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0002eaae) ai2_gene_pane_g

0x3659,	// (0x00022714) scroll_pane_cp12

0xc302,	// (0x0002b3bd) control_pane_t3_ParamLimits

0xc302,	// (0x0002b3bd) control_pane_t3

0x45ab,	// (0x00023666) status_small_pane_g8_ParamLimits

0x45ab,	// (0x00023666) status_small_pane_g8

0xcdd5,	// (0x0002be90) popup_find_window_ParamLimits

0xd044,	// (0x0002c0ff) popup_note_image_window_ParamLimits

0x0a8c,	// (0x0001fb47) list_double2_graphic_pane_vc_g1_ParamLimits

0x0a8c,	// (0x0001fb47) list_double2_graphic_pane_vc_g1

0x0af8,	// (0x0001fbb3) list_double2_graphic_pane_vc_g2_ParamLimits

0x0af8,	// (0x0001fbb3) list_double2_graphic_pane_vc_g2

0x0b04,	// (0x0001fbbf) list_double2_graphic_pane_vc_g3_ParamLimits

0x0b04,	// (0x0001fbbf) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0002e891) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0002e891) list_double2_graphic_pane_vc_g

0x0b10,	// (0x0001fbcb) list_double2_graphic_pane_vc_t1_ParamLimits

0x0b10,	// (0x0001fbcb) list_double2_graphic_pane_vc_t1

0x0a98,	// (0x0001fb53) list_single_heading_pane_vc_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_single_heading_pane_vc_g1

0x0aa4,	// (0x0001fb5f) list_single_heading_pane_vc_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_single_heading_pane_vc_g

0x0b26,	// (0x0001fbe1) list_single_heading_pane_vc_t1_ParamLimits

0x0b26,	// (0x0001fbe1) list_single_heading_pane_vc_t1

0x0b3c,	// (0x0001fbf7) list_single_heading_pane_vc_t2_ParamLimits

0x0b3c,	// (0x0001fbf7) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0002e8b2) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0002e8b2) list_single_heading_pane_vc_t

0x5178,	// (0x00024233) list_setting_number_pane_vc_g1_ParamLimits

0x5178,	// (0x00024233) list_setting_number_pane_vc_g1

0x5184,	// (0x0002423f) list_setting_number_pane_vc_g2_ParamLimits

0x5184,	// (0x0002423f) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0002e8b7) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0002e8b7) list_setting_number_pane_vc_g

0x5190,	// (0x0002424b) list_setting_number_pane_vc_t1_ParamLimits

0x5190,	// (0x0002424b) list_setting_number_pane_vc_t1

0x51a4,	// (0x0002425f) list_setting_number_pane_vc_t2_ParamLimits

0x51a4,	// (0x0002425f) list_setting_number_pane_vc_t2

0x51c0,	// (0x0002427b) list_setting_number_pane_vc_t3_ParamLimits

0x51c0,	// (0x0002427b) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0002e8bc) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0002e8bc) list_setting_number_pane_vc_t

0x51e6,	// (0x000242a1) set_value_pane_vc_ParamLimits

0x51e6,	// (0x000242a1) set_value_pane_vc

0x6752,	// (0x0002580d) list_double2_graphic_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double2_graphic_pane_vc

0x6752,	// (0x0002580d) list_double2_large_graphic_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double2_large_graphic_pane_vc

0x6752,	// (0x0002580d) list_double2_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double2_pane_vc

0x6752,	// (0x0002580d) list_double_graphic_heading_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double_graphic_heading_pane_vc

0x6752,	// (0x0002580d) list_double_graphic_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double_graphic_pane_vc

0x6752,	// (0x0002580d) list_double_heading_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double_heading_pane_vc

0x6752,	// (0x0002580d) list_double_large_graphic_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double_large_graphic_pane_vc

0x6752,	// (0x0002580d) list_double_number_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double_number_pane_vc

0x6752,	// (0x0002580d) list_double_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double_pane_vc

0x6752,	// (0x0002580d) list_double_time_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_double_time_pane_vc

0x6752,	// (0x0002580d) list_setting_number_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_setting_number_pane_vc

0x6752,	// (0x0002580d) list_setting_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_setting_pane_vc

0x6752,	// (0x0002580d) list_single_graphic_heading_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_single_graphic_heading_pane_vc

0x6752,	// (0x0002580d) list_single_heading_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_single_heading_pane_vc

0x6752,	// (0x0002580d) list_single_number_heading_pane_vc_ParamLimits

0x6752,	// (0x0002580d) list_single_number_heading_pane_vc

0x0cb5,	// (0x0001fd70) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0cb5,	// (0x0001fd70) list_double_graphic_heading_pane_vc_g1

0x0a98,	// (0x0001fb53) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0a98,	// (0x0001fb53) list_double_graphic_heading_pane_vc_g2

0x0aa4,	// (0x0001fb5f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0aa4,	// (0x0001fb5f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x0002eaba) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x0002eaba) list_double_graphic_heading_pane_vc_g

0x0cc1,	// (0x0001fd7c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0cc1,	// (0x0001fd7c) list_double_graphic_heading_pane_vc_t1

0x0b26,	// (0x0001fbe1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b26,	// (0x0001fbe1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x0002eac1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0002eac1) list_double_graphic_heading_pane_vc_t

0x5178,	// (0x00024233) list_setting_pane_vc_g1_ParamLimits

0x5178,	// (0x00024233) list_setting_pane_vc_g1

0x5184,	// (0x0002423f) list_setting_pane_vc_g2_ParamLimits

0x5184,	// (0x0002423f) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0002e8b7) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0002e8b7) list_setting_pane_vc_g

0x6e78,	// (0x00025f33) list_setting_pane_vc_t1_ParamLimits

0x6e78,	// (0x00025f33) list_setting_pane_vc_t1

0x6e8c,	// (0x00025f47) list_setting_pane_vc_t2_ParamLimits

0x6e8c,	// (0x00025f47) list_setting_pane_vc_t2

0x0001,

0xfa49,	// (0x0002eb04) list_setting_pane_vc_t_ParamLimits

0xfa49,	// (0x0002eb04) list_setting_pane_vc_t

0x51e6,	// (0x000242a1) set_value_pane_cp_vc_ParamLimits

0x51e6,	// (0x000242a1) set_value_pane_cp_vc

0x0a98,	// (0x0001fb53) list_single_number_heading_pane_vc_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_single_number_heading_pane_vc_g1

0x0aa4,	// (0x0001fb5f) list_single_number_heading_pane_vc_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_single_number_heading_pane_vc_g

0x0b26,	// (0x0001fbe1) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b26,	// (0x0001fbe1) list_single_number_heading_pane_vc_t1

0x0cd5,	// (0x0001fd90) list_single_number_heading_pane_vc_t2_ParamLimits

0x0cd5,	// (0x0001fd90) list_single_number_heading_pane_vc_t2

0x0ce9,	// (0x0001fda4) list_single_number_heading_pane_vc_t3_ParamLimits

0x0ce9,	// (0x0001fda4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa4e,	// (0x0002eb09) list_single_number_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002eb09) list_single_number_heading_pane_vc_t

0x0a8c,	// (0x0001fb47) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0a8c,	// (0x0001fb47) list_single_graphic_heading_pane_vc_g1

0x0a98,	// (0x0001fb53) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0a98,	// (0x0001fb53) list_single_graphic_heading_pane_vc_g4

0x0aa4,	// (0x0001fb5f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0aa4,	// (0x0001fb5f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c8,	// (0x0002e883) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x0002e883) list_single_graphic_heading_pane_vc_g

0x0b26,	// (0x0001fbe1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b26,	// (0x0001fbe1) list_single_graphic_heading_pane_vc_t1

0x0cfb,	// (0x0001fdb6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0cfb,	// (0x0001fdb6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0002eb10) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0002eb10) list_single_graphic_heading_pane_vc_t

0x0a98,	// (0x0001fb53) list_double2_pane_vc_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_double2_pane_vc_g1

0x0aa4,	// (0x0001fb5f) list_double2_pane_vc_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_double2_pane_vc_g

0x0d0f,	// (0x0001fdca) list_double2_pane_vc_t1_ParamLimits

0x0d0f,	// (0x0001fdca) list_double2_pane_vc_t1

0x0d25,	// (0x0001fde0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d25,	// (0x0001fde0) list_double2_large_graphic_pane_vc_g1

0x0a98,	// (0x0001fb53) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0a98,	// (0x0001fb53) list_double2_large_graphic_pane_vc_g2

0x0aa4,	// (0x0001fb5f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0aa4,	// (0x0001fb5f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0002e6bc) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0002e6bc) list_double2_large_graphic_pane_vc_g

0x0d31,	// (0x0001fdec) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d31,	// (0x0001fdec) list_double2_large_graphic_pane_vc_t1

0x0d47,	// (0x0001fe02) list_double_time_pane_vc_g1_ParamLimits

0x0d47,	// (0x0001fe02) list_double_time_pane_vc_g1

0x0d53,	// (0x0001fe0e) list_double_time_pane_vc_g2_ParamLimits

0x0d53,	// (0x0001fe0e) list_double_time_pane_vc_g2

0x0001,

0xfa5a,	// (0x0002eb15) list_double_time_pane_vc_g_ParamLimits

0xfa5a,	// (0x0002eb15) list_double_time_pane_vc_g

0x0d5f,	// (0x0001fe1a) list_double_time_pane_vc_t1_ParamLimits

0x0d5f,	// (0x0001fe1a) list_double_time_pane_vc_t1

0x0d78,	// (0x0001fe33) list_double_time_pane_vc_t2_ParamLimits

0x0d78,	// (0x0001fe33) list_double_time_pane_vc_t2

0x0db3,	// (0x0001fe6e) list_double_time_pane_vc_t3_ParamLimits

0x0db3,	// (0x0001fe6e) list_double_time_pane_vc_t3

0x0dcb,	// (0x0001fe86) list_double_time_pane_vc_t4_ParamLimits

0x0dcb,	// (0x0001fe86) list_double_time_pane_vc_t4

0x0003,

0xfa5f,	// (0x0002eb1a) list_double_time_pane_vc_t_ParamLimits

0xfa5f,	// (0x0002eb1a) list_double_time_pane_vc_t

0x0a98,	// (0x0001fb53) list_double_pane_vc_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_double_pane_vc_g1

0x0aa4,	// (0x0001fb5f) list_double_pane_vc_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_double_pane_vc_g

0x0ddf,	// (0x0001fe9a) list_double_pane_vc_t1_ParamLimits

0x0ddf,	// (0x0001fe9a) list_double_pane_vc_t1

0x0df1,	// (0x0001feac) list_double_pane_vc_t2_ParamLimits

0x0df1,	// (0x0001feac) list_double_pane_vc_t2

0x0001,

0xfa68,	// (0x0002eb23) list_double_pane_vc_t_ParamLimits

0xfa68,	// (0x0002eb23) list_double_pane_vc_t

0x0a98,	// (0x0001fb53) list_double_number_pane_vc_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_double_number_pane_vc_g1

0x0aa4,	// (0x0001fb5f) list_double_number_pane_vc_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_double_number_pane_vc_g

0x0e09,	// (0x0001fec4) list_double_number_pane_vc_t1_ParamLimits

0x0e09,	// (0x0001fec4) list_double_number_pane_vc_t1

0x0e1d,	// (0x0001fed8) list_double_number_pane_vc_t2_ParamLimits

0x0e1d,	// (0x0001fed8) list_double_number_pane_vc_t2

0x0df1,	// (0x0001feac) list_double_number_pane_vc_t3_ParamLimits

0x0df1,	// (0x0001feac) list_double_number_pane_vc_t3

0x0002,

0xfa6d,	// (0x0002eb28) list_double_number_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002eb28) list_double_number_pane_vc_t

0x0e2f,	// (0x0001feea) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0e2f,	// (0x0001feea) list_double_large_graphic_pane_vc_g1

0x0e3b,	// (0x0001fef6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0e3b,	// (0x0001fef6) list_double_large_graphic_pane_vc_g2

0x0aa4,	// (0x0001fb5f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0aa4,	// (0x0001fb5f) list_double_large_graphic_pane_vc_g3

0x0e4a,	// (0x0001ff05) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0e4a,	// (0x0001ff05) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa74,	// (0x0002eb2f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x0002eb2f) list_double_large_graphic_pane_vc_g

0x0e56,	// (0x0001ff11) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0e56,	// (0x0001ff11) list_double_large_graphic_pane_vc_t1

0x0e68,	// (0x0001ff23) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0e68,	// (0x0001ff23) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7d,	// (0x0002eb38) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002eb38) list_double_large_graphic_pane_vc_t

0x0a98,	// (0x0001fb53) list_double_heading_pane_vc_g1_ParamLimits

0x0a98,	// (0x0001fb53) list_double_heading_pane_vc_g1

0x0aa4,	// (0x0001fb5f) list_double_heading_pane_vc_g2_ParamLimits

0x0aa4,	// (0x0001fb5f) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e69f) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e69f) list_double_heading_pane_vc_g

0x0e81,	// (0x0001ff3c) list_double_heading_pane_vc_t1_ParamLimits

0x0e81,	// (0x0001ff3c) list_double_heading_pane_vc_t1

0x0b26,	// (0x0001fbe1) list_double_heading_pane_vc_t2_ParamLimits

0x0b26,	// (0x0001fbe1) list_double_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x0002eb3d) list_double_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x0002eb3d) list_double_heading_pane_vc_t

0x0e95,	// (0x0001ff50) list_double_graphic_pane_vc_g1_ParamLimits

0x0e95,	// (0x0001ff50) list_double_graphic_pane_vc_g1

0x0ea5,	// (0x0001ff60) list_double_graphic_pane_vc_g2_ParamLimits

0x0ea5,	// (0x0001ff60) list_double_graphic_pane_vc_g2

0x0eb4,	// (0x0001ff6f) list_double_graphic_pane_vc_g3_ParamLimits

0x0eb4,	// (0x0001ff6f) list_double_graphic_pane_vc_g3

0x0002,

0xfa87,	// (0x0002eb42) list_double_graphic_pane_vc_g_ParamLimits

0xfa87,	// (0x0002eb42) list_double_graphic_pane_vc_g

0x0ec0,	// (0x0001ff7b) list_double_graphic_pane_vc_t1_ParamLimits

0x0ec0,	// (0x0001ff7b) list_double_graphic_pane_vc_t1

0x0df1,	// (0x0001feac) list_double_graphic_pane_vc_t2_ParamLimits

0x0df1,	// (0x0001feac) list_double_graphic_pane_vc_t2

0x0001,

0xfa8e,	// (0x0002eb49) list_double_graphic_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002eb49) list_double_graphic_pane_vc_t

0x12bd,	// (0x00020378) aid_size_cell_fastswap

0xbcbd,	// (0x0002ad78) aid_size_cell_touch_ParamLimits

0xbcbd,	// (0x0002ad78) aid_size_cell_touch

0x1520,	// (0x000205db) popup_fast_swap_wide_window_ParamLimits

0x1520,	// (0x000205db) popup_fast_swap_wide_window

0xbe08,	// (0x0002aec3) touch_pane_ParamLimits

0xbe08,	// (0x0002aec3) touch_pane

0x36af,	// (0x0002276a) button_value_adjust_pane_cp2

0x0784,	// (0x0001f83f) button_value_adjust_pane_cp4

0x07a4,	// (0x0001f85f) form_field_data_pane_cp2

0xb86e,	// (0x0002a929) form_field_data_wide_pane_cp2

0x3b3c,	// (0x00022bf7) bg_scroll_pane_ParamLimits

0x18ba,	// (0x00020975) scroll_handle_pane_ParamLimits

0x18ce,	// (0x00020989) scroll_sc2_down_pane_ParamLimits

0x18ce,	// (0x00020989) scroll_sc2_down_pane

0x3b6d,	// (0x00022c28) scroll_sc2_up_pane_ParamLimits

0x3b6d,	// (0x00022c28) scroll_sc2_up_pane

0xddc5,	// (0x0002ce80) grid_wheel_folder_pane_g1_ParamLimits

0xddc5,	// (0x0002ce80) grid_wheel_folder_pane_g1

0x1a93,	// (0x00020b4e) clock_nsta_pane_cp2_ParamLimits

0x1a93,	// (0x00020b4e) clock_nsta_pane_cp2

0xcbcb,	// (0x0002bc86) listscroll_midp_pane_ParamLimits

0xcbdc,	// (0x0002bc97) midp_canvas_pane

0x4626,	// (0x000236e1) nsta_clock_indic_pane

0x4674,	// (0x0002372f) listscroll_form_pane_vc

0x467c,	// (0x00023737) listscroll_set_pane_vc_ParamLimits

0x467c,	// (0x00023737) listscroll_set_pane_vc

0xd493,	// (0x0002c54e) clock_nsta_pane

0xd4bd,	// (0x0002c578) indicator_nsta_pane

0x506e,	// (0x00024129) bg_popup_sub_pane_cp2_ParamLimits

0x5082,	// (0x0002413d) find_pane_cp2_ParamLimits

0x5082,	// (0x0002413d) find_pane_cp2

0x5098,	// (0x00024153) grid_toobar_pane_ParamLimits

0x51f4,	// (0x000242af) list_form_gen_pane_vc_ParamLimits

0x51f4,	// (0x000242af) list_form_gen_pane_vc

0x520a,	// (0x000242c5) scroll_pane_cp8_vc_ParamLimits

0x520a,	// (0x000242c5) scroll_pane_cp8_vc

0x5286,	// (0x00024341) data_form_wide_pane_vc_ParamLimits

0x5286,	// (0x00024341) data_form_wide_pane_vc

0x5292,	// (0x0002434d) form_field_data_wide_pane_vc_g1

0x529a,	// (0x00024355) form_field_data_wide_pane_vc_t1_ParamLimits

0x529a,	// (0x00024355) form_field_data_wide_pane_vc_t1

0x36c3,	// (0x0002277e) input_focus_pane_cp6_vc_ParamLimits

0x36c3,	// (0x0002277e) input_focus_pane_cp6_vc

0xd832,	// (0x0002c8ed) list_midp_pane_ParamLimits

0x68e4,	// (0x0002599f) scroll_pane_cp16_ParamLimits

0x68e4,	// (0x0002599f) scroll_pane_cp16

0x55f8,	// (0x000246b3) button_value_adjust_pane_ParamLimits

0x55f8,	// (0x000246b3) button_value_adjust_pane

0xda06,	// (0x0002cac1) button_value_adjust_pane_cp6_ParamLimits

0xda06,	// (0x0002cac1) button_value_adjust_pane_cp6

0xdb20,	// (0x0002cbdb) settings_code_pane_cp_ParamLimits

0xdb20,	// (0x0002cbdb) settings_code_pane_cp

0x2d6d,	// (0x00021e28) cell_touch_pane_g1

0x2d6d,	// (0x00021e28) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0002e7da) cell_touch_pane_g

0xdca8,	// (0x0002cd63) cell_touch_pane_cp_ParamLimits

0xdca8,	// (0x0002cd63) cell_touch_pane_cp

0xdcc4,	// (0x0002cd7f) cell_touch_pane_ParamLimits

0xdcc4,	// (0x0002cd7f) cell_touch_pane

0x2d6d,	// (0x00021e28) scroll_sc2_down_pane_g1

0x2d6d,	// (0x00021e28) scroll_sc2_up_pane_g1

0x2d77,	// (0x00021e32) bg_set_opt_pane_cp4_vc

0x6c74,	// (0x00025d2f) list_set_graphic_pane_vc_g1_ParamLimits

0x6c74,	// (0x00025d2f) list_set_graphic_pane_vc_g1

0x6c80,	// (0x00025d3b) list_set_graphic_pane_vc_g2_ParamLimits

0x6c80,	// (0x00025d3b) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x0002eac6) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x0002eac6) list_set_graphic_pane_vc_g

0x6c8c,	// (0x00025d47) text_primary_small_cp13_vc_ParamLimits

0x6c8c,	// (0x00025d47) text_primary_small_cp13_vc

0x6ca4,	// (0x00025d5f) list_set_graphic_pane_vc_ParamLimits

0x6ca4,	// (0x00025d5f) list_set_graphic_pane_vc

0x2d77,	// (0x00021e32) input_focus_pane_cp2_vc

0x2d6d,	// (0x00021e28) setting_code_pane_vc_g1

0x6cb8,	// (0x00025d73) setting_code_pane_vc_t1

0x6cc6,	// (0x00025d81) set_text_pane_vc_t1_ParamLimits

0x6cc6,	// (0x00025d81) set_text_pane_vc_t1

0x2d77,	// (0x00021e32) input_focus_pane_cp1_vc

0x6ce1,	// (0x00025d9c) list_set_text_pane_vc

0x2d6d,	// (0x00021e28) setting_text_pane_vc_g1

0x2d77,	// (0x00021e32) bg_set_opt_pane_cp2_vc

0x6ceb,	// (0x00025da6) setting_slider_graphic_pane_vc_g1

0x6cf3,	// (0x00025dae) setting_slider_graphic_pane_vc_t1

0x6d01,	// (0x00025dbc) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x0002eacb) setting_slider_graphic_pane_vc_t

0x6d0f,	// (0x00025dca) slider_set_pane_cp_vc

0x6d17,	// (0x00025dd2) slider_set_pane_vc_g1

0x6d20,	// (0x00025ddb) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x0002ead0) slider_set_pane_vc_g

0x372a,	// (0x000227e5) set_opt_bg_pane_g1_copy1

0x3732,	// (0x000227ed) set_opt_bg_pane_g2_copy1

0x6d4c,	// (0x00025e07) set_opt_bg_pane_g3_copy1

0x3742,	// (0x000227fd) set_opt_bg_pane_g4_copy1

0x374a,	// (0x00022805) set_opt_bg_pane_g5_copy1

0x3752,	// (0x0002280d) set_opt_bg_pane_g6_copy1

0x6d56,	// (0x00025e11) set_opt_bg_pane_g7_copy1

0x6d5e,	// (0x00025e19) set_opt_bg_pane_g8_copy1

0x6d68,	// (0x00025e23) set_opt_bg_pane_g9_copy1

0x2d77,	// (0x00021e32) bg_set_opt_pane_cp_vc

0x6d72,	// (0x00025e2d) setting_slider_pane_vc_t1

0x6cf3,	// (0x00025dae) setting_slider_pane_vc_t2

0x6d01,	// (0x00025dbc) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x0002eadf) setting_slider_pane_vc_t

0x6d0f,	// (0x00025dca) slider_set_pane_vc

0x1e25,	// (0x00020ee0) volume_set_pane_vc_g1

0x1e2e,	// (0x00020ee9) volume_set_pane_vc_g2

0x1e37,	// (0x00020ef2) volume_set_pane_vc_g3

0x1e40,	// (0x00020efb) volume_set_pane_vc_g4

0x1e49,	// (0x00020f04) volume_set_pane_vc_g5

0x1e52,	// (0x00020f0d) volume_set_pane_vc_g6

0x1e5b,	// (0x00020f16) volume_set_pane_vc_g7

0x1e64,	// (0x00020f1f) volume_set_pane_vc_g8

0x1e6d,	// (0x00020f28) volume_set_pane_vc_g9

0x1e76,	// (0x00020f31) volume_set_pane_vc_g10

0x0009,

0xfa2b,	// (0x0002eae6) volume_set_pane_vc_g

0x6d81,	// (0x00025e3c) volume_set_pane_vc

0x6d89,	// (0x00025e44) button_value_adjust_pane_cp1_vc

0x6d93,	// (0x00025e4e) list_highlight_pane_cp2_vc

0x6d9c,	// (0x00025e57) list_set_pane_vc_ParamLimits

0x6d9c,	// (0x00025e57) list_set_pane_vc

0x6e06,	// (0x00025ec1) main_pane_set_vc_t1_ParamLimits

0x6e06,	// (0x00025ec1) main_pane_set_vc_t1

0x6e1b,	// (0x00025ed6) main_pane_set_vc_t2_ParamLimits

0x6e1b,	// (0x00025ed6) main_pane_set_vc_t2

0x6e2d,	// (0x00025ee8) main_pane_set_vc_t3_ParamLimits

0x6e2d,	// (0x00025ee8) main_pane_set_vc_t3

0x6e41,	// (0x00025efc) main_pane_set_vc_t4_ParamLimits

0x6e41,	// (0x00025efc) main_pane_set_vc_t4

0x0003,

0xfa40,	// (0x0002eafb) main_pane_set_vc_t_ParamLimits

0xfa40,	// (0x0002eafb) main_pane_set_vc_t

0x6e55,	// (0x00025f10) setting_code_pane_vc_ParamLimits

0x6e55,	// (0x00025f10) setting_code_pane_vc

0x6e66,	// (0x00025f21) setting_slider_graphic_pane_vc

0x6e66,	// (0x00025f21) setting_slider_pane_vc

0x6e66,	// (0x00025f21) setting_text_pane_vc

0x6e66,	// (0x00025f21) setting_volume_pane_vc

0x6e70,	// (0x00025f2b) scroll_pane_cp121_vc

0x369d,	// (0x00022758) set_content_pane_vc

0x6eae,	// (0x00025f69) button_value_adjust_pane_g1

0x6eb7,	// (0x00025f72) button_value_adjust_pane_g2

0x0001,

0xfa93,	// (0x0002eb4e) button_value_adjust_pane_g

0x6ec0,	// (0x00025f7b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ec0,	// (0x00025f7b) form_field_slider_wide_pane_vc_t1

0x6ed4,	// (0x00025f8f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ed4,	// (0x00025f8f) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa98,	// (0x0002eb53) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x0002eb53) form_field_slider_wide_pane_vc_t

0x30d2,	// (0x0002218d) input_focus_pane_cp10_vc_ParamLimits

0x30d2,	// (0x0002218d) input_focus_pane_cp10_vc

0x6ee6,	// (0x00025fa1) slider_cont_pane_cp1_vc_ParamLimits

0x6ee6,	// (0x00025fa1) slider_cont_pane_cp1_vc

0x6d17,	// (0x00025dd2) slider_form_pane_g1_cp2

0x6d20,	// (0x00025ddb) slider_form_pane_g2_cp2

0x6eff,	// (0x00025fba) form_field_slider_pane_vc_t3

0x6f0d,	// (0x00025fc8) form_field_slider_pane_vc_t4

0x6f1b,	// (0x00025fd6) slider_form_pane_vc_ParamLimits

0x6f1b,	// (0x00025fd6) slider_form_pane_vc

0x6f28,	// (0x00025fe3) form_field_slider_pane_vc_t1_ParamLimits

0x6f28,	// (0x00025fe3) form_field_slider_pane_vc_t1

0x6ed4,	// (0x00025f8f) form_field_slider_pane_vc_t2_ParamLimits

0x6ed4,	// (0x00025f8f) form_field_slider_pane_vc_t2

0x0001,

0xfaa8,	// (0x0002eb63) form_field_slider_pane_vc_t_ParamLimits

0xfaa8,	// (0x0002eb63) form_field_slider_pane_vc_t

0x30d2,	// (0x0002218d) input_focus_pane_cp9_vc_ParamLimits

0x30d2,	// (0x0002218d) input_focus_pane_cp9_vc

0x6f44,	// (0x00025fff) slider_cont_pane_vc_ParamLimits

0x6f44,	// (0x00025fff) slider_cont_pane_vc

0x6f56,	// (0x00026011) list_form_graphic_pane_cp_vc_ParamLimits

0x6f56,	// (0x00026011) list_form_graphic_pane_cp_vc

0x5292,	// (0x0002434d) form_field_popup_wide_pane_vc_g1

0x6f6b,	// (0x00026026) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6f6b,	// (0x00026026) form_field_popup_wide_pane_vc_t1

0x36c3,	// (0x0002277e) input_focus_pane_cp8_vc_ParamLimits

0x36c3,	// (0x0002277e) input_focus_pane_cp8_vc

0x6f82,	// (0x0002603d) list_form_wide_pane_vc_ParamLimits

0x6f82,	// (0x0002603d) list_form_wide_pane_vc

0x6f8e,	// (0x00026049) list_form_graphic_pane_vc_g1

0x6f96,	// (0x00026051) list_form_graphic_pane_vc_t1_ParamLimits

0x6f96,	// (0x00026051) list_form_graphic_pane_vc_t1

0x2e57,	// (0x00021f12) list_highlight_pane_cp5_vc_ParamLimits

0x2e57,	// (0x00021f12) list_highlight_pane_cp5_vc

0x6fb2,	// (0x0002606d) list_form_graphic_pane_vc_ParamLimits

0x6fb2,	// (0x0002606d) list_form_graphic_pane_vc

0x5292,	// (0x0002434d) form_field_popup_pane_vc_g1

0x6fc8,	// (0x00026083) form_field_popup_pane_vc_t1_ParamLimits

0x6fc8,	// (0x00026083) form_field_popup_pane_vc_t1

0x36c3,	// (0x0002277e) input_focus_pane_cp7_vc_ParamLimits

0x36c3,	// (0x0002277e) input_focus_pane_cp7_vc

0x6fdf,	// (0x0002609a) list_form_pane_vc_ParamLimits

0x6fdf,	// (0x0002609a) list_form_pane_vc

0x6feb,	// (0x000260a6) data_form_pane_vc_t1_ParamLimits

0x6feb,	// (0x000260a6) data_form_pane_vc_t1

0x372a,	// (0x000227e5) input_focus_pane_vc_g1

0x3732,	// (0x000227ed) input_focus_pane_vc_g2

0x373a,	// (0x000227f5) input_focus_pane_vc_g3

0x3742,	// (0x000227fd) input_focus_pane_vc_g4

0x374a,	// (0x00022805) input_focus_pane_vc_g5

0x3752,	// (0x0002280d) input_focus_pane_vc_g6

0x375a,	// (0x00022815) input_focus_pane_vc_g7

0x3762,	// (0x0002281d) input_focus_pane_vc_g8

0x376a,	// (0x00022825) input_focus_pane_vc_g9

0x2d6d,	// (0x00021e28) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0002e763) input_focus_pane_vc_g

0x5286,	// (0x00024341) data_form_pane_vc_ParamLimits

0x5286,	// (0x00024341) data_form_pane_vc

0x5292,	// (0x0002434d) form_field_data_pane_vc_g1

0x7006,	// (0x000260c1) form_field_data_pane_vc_t1_ParamLimits

0x7006,	// (0x000260c1) form_field_data_pane_vc_t1

0x36c3,	// (0x0002277e) input_focus_pane_vc_ParamLimits

0x36c3,	// (0x0002277e) input_focus_pane_vc

0x7020,	// (0x000260db) button_value_adjust_pane_cp3_vc

0x7028,	// (0x000260e3) button_value_adjust_pane_cp5_vc

0x7030,	// (0x000260eb) form_field_data_pane_vc_ParamLimits

0x7030,	// (0x000260eb) form_field_data_pane_vc

0x7047,	// (0x00026102) form_field_data_pane_vc_cp2

0x704f,	// (0x0002610a) form_field_data_wide_pane_vc_ParamLimits

0x704f,	// (0x0002610a) form_field_data_wide_pane_vc

0x7065,	// (0x00026120) form_field_data_wide_pane_vc_cp2

0x706d,	// (0x00026128) form_field_popup_pane_vc_ParamLimits

0x706d,	// (0x00026128) form_field_popup_pane_vc

0x7084,	// (0x0002613f) form_field_popup_wide_pane_vc_ParamLimits

0x7084,	// (0x0002613f) form_field_popup_wide_pane_vc

0x709a,	// (0x00026155) form_field_slider_pane_vc_ParamLimits

0x709a,	// (0x00026155) form_field_slider_pane_vc

0x70ad,	// (0x00026168) form_field_slider_wide_pane_vc_ParamLimits

0x70ad,	// (0x00026168) form_field_slider_wide_pane_vc

0xdce2,	// (0x0002cd9d) grid_touch_1_pane_ParamLimits

0xdce2,	// (0x0002cd9d) grid_touch_1_pane

0xdcf6,	// (0x0002cdb1) grid_touch_2_pane_ParamLimits

0xdcf6,	// (0x0002cdb1) grid_touch_2_pane

0x7182,	// (0x0002623d) touch_pane_g1_ParamLimits

0x7182,	// (0x0002623d) touch_pane_g1

0x70e4,	// (0x0002619f) cell_app_pane_cp_wide_ParamLimits

0x70e4,	// (0x0002619f) cell_app_pane_cp_wide

0x70f5,	// (0x000261b0) grid_popup_fast_wide_pane_ParamLimits

0x70f5,	// (0x000261b0) grid_popup_fast_wide_pane

0x7109,	// (0x000261c4) scroll_pane_cp19_ParamLimits

0x7109,	// (0x000261c4) scroll_pane_cp19

0x2d77,	// (0x00021e32) bg_popup_window_pane_cp20

0x711d,	// (0x000261d8) listscroll_popup_fast_wide_pane

0x3890,	// (0x0002294b) grid_indicator_nsta_pane

0x7125,	// (0x000261e0) clock_nsta_pane_g1

0x712e,	// (0x000261e9) clock_nsta_pane_t1

0xdd20,	// (0x0002cddb) cell_indicator_nsta_pane_ParamLimits

0xdd20,	// (0x0002cddb) cell_indicator_nsta_pane

0x7182,	// (0x0002623d) cell_indicator_nsta_pane_g1

0xdd39,	// (0x0002cdf4) cell_indicator_nsta_pane_g2

0x0001,

0xfab2,	// (0x0002eb6d) cell_indicator_nsta_pane_g

0x71a6,	// (0x00026261) clock_nsta_pane_cp

0x71ae,	// (0x00026269) indicator_nsta_pane_cp

0x71b7,	// (0x00026272) nsta_clock_indic_pane_g1

0x2f20,	// (0x00021fdb) grid_indicator_pane

0x3c62,	// (0x00022d1d) scroll_pane_cp29

0x19e2,	// (0x00020a9d) indicator_nsta_pane_cp2_ParamLimits

0x19e2,	// (0x00020a9d) indicator_nsta_pane_cp2

0x2e57,	// (0x00021f12) main_apps_wheel_pane

0x547f,	// (0x0002453a) form_midp_field_text_pane_ParamLimits

0x55ca,	// (0x00024685) scroll_bar_cp050_ParamLimits

0x7220,	// (0x000262db) cell_indicator_pane_ParamLimits

0x7220,	// (0x000262db) cell_indicator_pane

0x7237,	// (0x000262f2) cell_indicator_pane_g1

0xdd4f,	// (0x0002ce0a) grid_wheel_folder_pane_ParamLimits

0xdd4f,	// (0x0002ce0a) grid_wheel_folder_pane

0xdd5d,	// (0x0002ce18) list_wheel_apps_pane_ParamLimits

0xdd5d,	// (0x0002ce18) list_wheel_apps_pane

0xdd6b,	// (0x0002ce26) main_apps_wheel_pane_g1_ParamLimits

0xdd6b,	// (0x0002ce26) main_apps_wheel_pane_g1

0xdd77,	// (0x0002ce32) main_apps_wheel_pane_g2_ParamLimits

0xdd77,	// (0x0002ce32) main_apps_wheel_pane_g2

0x0001,

0xface,	// (0x0002eb89) main_apps_wheel_pane_g_ParamLimits

0xface,	// (0x0002eb89) main_apps_wheel_pane_g

0xdd85,	// (0x0002ce40) main_apps_wheel_pane_t1_ParamLimits

0xdd85,	// (0x0002ce40) main_apps_wheel_pane_t1

0xdd99,	// (0x0002ce54) list_wheel_apps_pane_g1

0xdda1,	// (0x0002ce5c) list_wheel_apps_pane_g2

0xdda9,	// (0x0002ce64) list_wheel_apps_pane_g3

0xddb1,	// (0x0002ce6c) list_wheel_apps_pane_g4

0xddbb,	// (0x0002ce76) list_wheel_apps_pane_g5

0x0004,

0xfad3,	// (0x0002eb8e) list_wheel_apps_pane_g

0x41a8,	// (0x00023263) navi_icon_text_pane

0xd38e,	// (0x0002c449) aid_fill_nsta

0xddd2,	// (0x0002ce8d) navi_icon_text_pane_g1

0xddde,	// (0x0002ce99) navi_icon_text_pane_t1

0xcbb3,	// (0x0002bc6e) list_set_graphic_pane_t1_ParamLimits

0xcbb3,	// (0x0002bc6e) list_set_graphic_pane_t1

0x5d25,	// (0x00024de0) popup_midp_note_alarm_window_t6_ParamLimits

0x5d25,	// (0x00024de0) popup_midp_note_alarm_window_t6

0x5d37,	// (0x00024df2) popup_midp_note_alarm_window_t7_ParamLimits

0x5d37,	// (0x00024df2) popup_midp_note_alarm_window_t7

0x5d49,	// (0x00024e04) popup_midp_note_alarm_window_t8_ParamLimits

0x5d49,	// (0x00024e04) popup_midp_note_alarm_window_t8

0x5d5b,	// (0x00024e16) popup_midp_note_alarm_window_t9_ParamLimits

0x5d5b,	// (0x00024e16) popup_midp_note_alarm_window_t9

0x5d6d,	// (0x00024e28) popup_midp_note_alarm_window_t10_ParamLimits

0x5d6d,	// (0x00024e28) popup_midp_note_alarm_window_t10

0x5d7f,	// (0x00024e3a) popup_midp_note_alarm_window_t11_ParamLimits

0x5d7f,	// (0x00024e3a) popup_midp_note_alarm_window_t11

0x5d91,	// (0x00024e4c) scroll_pane_cp17_ParamLimits

0x5d91,	// (0x00024e4c) scroll_pane_cp17

0x1e25,	// (0x00020ee0) volume_small_pane_cp_g1

0x211a,	// (0x000211d5) volume_small_pane_cp_g2

0x2123,	// (0x000211de) volume_small_pane_cp_g3

0x212c,	// (0x000211e7) volume_small_pane_cp_g4

0x2135,	// (0x000211f0) volume_small_pane_cp_g5

0x213e,	// (0x000211f9) volume_small_pane_cp_g6

0x2147,	// (0x00021202) volume_small_pane_cp_g7

0x2150,	// (0x0002120b) volume_small_pane_cp_g8

0x2159,	// (0x00021214) volume_small_pane_cp_g9

0x2162,	// (0x0002121d) volume_small_pane_cp_g10

0x4403,	// (0x000234be) midp_ticker_pane_g1_ParamLimits

0x440f,	// (0x000234ca) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0002e82b) midp_ticker_pane_g_ParamLimits

0xcc73,	// (0x0002bd2e) midp_ticker_pane_t1_ParamLimits

0xd3ae,	// (0x0002c469) aid_fill_nsta_2

0x55b6,	// (0x00024671) list_form2_midp_pane

0x6706,	// (0x000257c1) midp_editing_number_pane_ParamLimits

0x6715,	// (0x000257d0) midp_ticker_pane_ParamLimits

0x731e,	// (0x000263d9) form2_midp_field_pane

0x7342,	// (0x000263fd) scroll_pane_cp51

0x7362,	// (0x0002641d) form2_midp_button_pane_ParamLimits

0x7362,	// (0x0002641d) form2_midp_button_pane

0x7374,	// (0x0002642f) form2_midp_content_pane_ParamLimits

0x7374,	// (0x0002642f) form2_midp_content_pane

0x738e,	// (0x00026449) form2_midp_field_choice_group_pane

0x7396,	// (0x00026451) form2_midp_field_pane_g1

0x739e,	// (0x00026459) form2_midp_field_pane_g2

0x73a6,	// (0x00026461) form2_midp_field_pane_g3

0x73ae,	// (0x00026469) form2_midp_field_pane_g4

0x0003,

0xfaf8,	// (0x0002ebb3) form2_midp_field_pane_g

0x73b6,	// (0x00026471) form2_midp_gauge_slider_pane

0x73be,	// (0x00026479) form2_midp_gauge_wait_pane

0x73c6,	// (0x00026481) form2_midp_image_pane_ParamLimits

0x73c6,	// (0x00026481) form2_midp_image_pane

0x73e1,	// (0x0002649c) form2_midp_label_pane_ParamLimits

0x73e1,	// (0x0002649c) form2_midp_label_pane

0xde0c,	// (0x0002cec7) form2_midp_label_pane_cp_ParamLimits

0xde0c,	// (0x0002cec7) form2_midp_label_pane_cp

0x741b,	// (0x000264d6) form2_midp_string_pane_ParamLimits

0x741b,	// (0x000264d6) form2_midp_string_pane

0x0ed2,	// (0x0001ff8d) form2_midp_text_pane_ParamLimits

0x0ed2,	// (0x0001ff8d) form2_midp_text_pane

0x742d,	// (0x000264e8) form2_midp_time_pane

0x743d,	// (0x000264f8) input_focus_pane_cp51_ParamLimits

0x743d,	// (0x000264f8) input_focus_pane_cp51

0x7455,	// (0x00026510) form2_midp_label_pane_t1_ParamLimits

0x7455,	// (0x00026510) form2_midp_label_pane_t1

0x0eed,	// (0x0001ffa8) form2_mdip_text_pane_t1_ParamLimits

0x0eed,	// (0x0001ffa8) form2_mdip_text_pane_t1

0x0f0b,	// (0x0001ffc6) form2_midp_time_pane_t1

0x749e,	// (0x00026559) form2_midp_gauge_slider_pane_t1

0xde2d,	// (0x0002cee8) form2_midp_gauge_slider_pane_t2

0xde3f,	// (0x0002cefa) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb01,	// (0x0002ebbc) form2_midp_gauge_slider_pane_t

0x74d4,	// (0x0002658f) form2_midp_slider_pane

0x74e0,	// (0x0002659b) form2_midp_gauge_wait_pane_t1

0x74ee,	// (0x000265a9) form2_midp_wait_pane_ParamLimits

0x74ee,	// (0x000265a9) form2_midp_wait_pane

0xde51,	// (0x0002cf0c) list_single_2graphic_pane_cp4_ParamLimits

0xde51,	// (0x0002cf0c) list_single_2graphic_pane_cp4

0xd7bf,	// (0x0002c87a) list_single_midp_graphic_pane_cp_ParamLimits

0xd7bf,	// (0x0002c87a) list_single_midp_graphic_pane_cp

0x2d77,	// (0x00021e32) list_highlight_pane_cp20

0x7548,	// (0x00026603) list_single_2graphic_pane_g1_cp4

0x7550,	// (0x0002660b) list_single_2graphic_pane_g2_cp4

0x7558,	// (0x00026613) list_single_2graphic_pane_t1_cp4

0x2e57,	// (0x00021f12) list_highlight_pane_cp21

0x7567,	// (0x00026622) list_single_midp_graphic_pane_g4_cp

0x7576,	// (0x00026631) list_single_midp_graphic_pane_t1_cp

0xde66,	// (0x0002cf21) form2_mdip_string_pane_t1_ParamLimits

0xde66,	// (0x0002cf21) form2_mdip_string_pane_t1

0x2d77,	// (0x00021e32) bg_wml_button_pane_cp2

0x2d6d,	// (0x00021e28) form2_midp_image_pane_g1

0x0557,	// (0x0001f612) list_double_large_graphic_pane_g5_ParamLimits

0x0557,	// (0x0001f612) list_double_large_graphic_pane_g5

0xcbcb,	// (0x0002bc86) midp_form_pane_ParamLimits

0x2e57,	// (0x00021f12) main_apps_wheel_pane_ParamLimits

0xd0c2,	// (0x0002c17d) popup_preview_window_ParamLimits

0xd0c2,	// (0x0002c17d) popup_preview_window

0x4bea,	// (0x00023ca5) popup_touch_info_window_ParamLimits

0x4bea,	// (0x00023ca5) popup_touch_info_window

0x4c08,	// (0x00023cc3) popup_touch_menu_window_ParamLimits

0x4c08,	// (0x00023cc3) popup_touch_menu_window

0x2d63,	// (0x00021e1e) bg_popup_sub_pane_cp6

0x7684,	// (0x0002673f) list_touch_menu_pane

0x768c,	// (0x00026747) list_single_touch_menu_pane_ParamLimits

0x768c,	// (0x00026747) list_single_touch_menu_pane

0x76a3,	// (0x0002675e) list_single_touch_menu_pane_t1

0x2e57,	// (0x00021f12) bg_popup_sub_pane_cp7_ParamLimits

0x2e57,	// (0x00021f12) bg_popup_sub_pane_cp7

0x76b1,	// (0x0002676c) heading_sub_pane

0x76b9,	// (0x00026774) list_touch_info_pane_ParamLimits

0x76b9,	// (0x00026774) list_touch_info_pane

0x76c8,	// (0x00026783) list_single_touch_info_pane_ParamLimits

0x76c8,	// (0x00026783) list_single_touch_info_pane

0x76da,	// (0x00026795) list_single_touch_info_pane_t1

0x76e8,	// (0x000267a3) list_single_touch_info_pane_t2

0x0001,

0xfb0f,	// (0x0002ebca) list_single_touch_info_pane_t

0x4328,	// (0x000233e3) bg_popup_heading_pane_cp

0x76f6,	// (0x000267b1) heading_sub_pane_t1

0x5220,	// (0x000242db) bg_popup_preview_window_pane_cp_ParamLimits

0x5220,	// (0x000242db) bg_popup_preview_window_pane_cp

0x76b1,	// (0x0002676c) heading_preview_pane

0x76b9,	// (0x00026774) list_preview_pane_ParamLimits

0x76b9,	// (0x00026774) list_preview_pane

0x7704,	// (0x000267bf) popup_preview_window_g1

0x76c8,	// (0x00026783) list_single_preview_pane_ParamLimits

0x76c8,	// (0x00026783) list_single_preview_pane

0x770c,	// (0x000267c7) list_single_preview_pane_g1

0x7714,	// (0x000267cf) list_single_preview_pane_t1

0x76da,	// (0x00026795) list_single_preview_pane_t2

0x0001,

0xfb14,	// (0x0002ebcf) list_single_preview_pane_t

0x7722,	// (0x000267dd) bg_popup_heading_pane_cp2_ParamLimits

0x7722,	// (0x000267dd) bg_popup_heading_pane_cp2

0x7738,	// (0x000267f3) heading_preview_pane_g1

0x7740,	// (0x000267fb) heading_preview_pane_t1_ParamLimits

0x7740,	// (0x000267fb) heading_preview_pane_t1

0x2f43,	// (0x00021ffe) soft_indicator_pane_t1_ParamLimits

0x3636,	// (0x000226f1) scroll_pane_ParamLimits

0x3b5b,	// (0x00022c16) scroll_sc2_left_pane

0x3b64,	// (0x00022c1f) scroll_sc2_right_pane

0x3b83,	// (0x00022c3e) scroll_bg_pane_g1_ParamLimits

0x3b98,	// (0x00022c53) scroll_bg_pane_g2_ParamLimits

0x3bb0,	// (0x00022c6b) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0002e7ba) scroll_bg_pane_g_ParamLimits

0x3b83,	// (0x00022c3e) scroll_handle_pane_g1_ParamLimits

0x3bd2,	// (0x00022c8d) scroll_handle_pane_g2_ParamLimits

0x3bb0,	// (0x00022c6b) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0002e7c1) scroll_handle_pane_g_ParamLimits

0x46b6,	// (0x00023771) popup_choice_list_window_ParamLimits

0x46b6,	// (0x00023771) popup_choice_list_window

0x507a,	// (0x00024135) choice_list_pane

0x50fc,	// (0x000241b7) cell_toolbar_pane_t1

0x5124,	// (0x000241df) toolbar_button_pane_ParamLimits

0x6251,	// (0x0002530c) ai_gene_pane_1_t2_ParamLimits

0x6251,	// (0x0002530c) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0002e9d9) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0002e9d9) ai_gene_pane_1_t

0x775d,	// (0x00026818) scroll_sc2_left_pane_g1

0x775d,	// (0x00026818) scroll_sc2_right_pane_g1

0x468e,	// (0x00023749) bg_popup_sub_pane_cp10

0x7767,	// (0x00026822) list_choice_list_pane

0x777e,	// (0x00026839) list_single_choice_list_pane_ParamLimits

0x777e,	// (0x00026839) list_single_choice_list_pane

0x7792,	// (0x0002684d) list_single_choice_list_pane_g1

0x779a,	// (0x00026855) list_single_choice_list_pane_t1_ParamLimits

0x779a,	// (0x00026855) list_single_choice_list_pane_t1

0x77af,	// (0x0002686a) choice_list_pane_g1

0x77b7,	// (0x00026872) choice_list_pane_t1

0x2d63,	// (0x00021e1e) input_focus_pane_cp11

0x3a38,	// (0x00022af3) title_pane_stacon_g2_ParamLimits

0x3a38,	// (0x00022af3) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0002e7a0) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0002e7a0) title_pane_stacon_g

0x4328,	// (0x000233e3) cursor_press_pane

0xcd8d,	// (0x0002be48) popup_fep_hwr_window_ParamLimits

0xcd8d,	// (0x0002be48) popup_fep_hwr_window

0x47d8,	// (0x00023893) popup_fep_vkb_window_ParamLimits

0x47d8,	// (0x00023893) popup_fep_vkb_window

0x77c5,	// (0x00026880) cursor_press_pane_g1

0x0002,

0xfb3d,	// (0x0002ebf8) fep_vkb_side_pane_g_ParamLimits

0x2196,	// (0x00021251) fep_hwr_candidate_pane_ParamLimits

0x2196,	// (0x00021251) fep_hwr_candidate_pane

0x21c0,	// (0x0002127b) fep_hwr_side_pane_ParamLimits

0x21c0,	// (0x0002127b) fep_hwr_side_pane

0x21e0,	// (0x0002129b) fep_hwr_top_pane_ParamLimits

0x21e0,	// (0x0002129b) fep_hwr_top_pane

0x21f8,	// (0x000212b3) fep_hwr_write_pane_ParamLimits

0x21f8,	// (0x000212b3) fep_hwr_write_pane

0xfb3d,	// (0x0002ebf8) fep_vkb_side_pane_g

0x77cd,	// (0x00026888) fep_hwr_top_pane_g1

0x77df,	// (0x0002689a) fep_hwr_top_pane_g2

0x2224,	// (0x000212df) fep_hwr_top_pane_g3

0x0002,

0xfb19,	// (0x0002ebd4) fep_hwr_top_pane_g

0x2239,	// (0x000212f4) fep_hwr_top_text_pane

0x3d4b,	// (0x00022e06) fep_hwr_top_text_pane_g1

0x7815,	// (0x000268d0) fep_hwr_top_text_pane_t1

0x232f,	// (0x000213ea) fep_hwr_candidate_pane_g1

0x7a68,	// (0x00026b23) fep_vkb_keypad_pane_g3_ParamLimits

0x7a68,	// (0x00026b23) fep_vkb_keypad_pane_g3

0x7a90,	// (0x00026b4b) fep_vkb_keypad_pane_g4_ParamLimits

0x7a90,	// (0x00026b4b) fep_vkb_keypad_pane_g4

0x7aff,	// (0x00026bba) fep_vkb_bottom_pane_g2_ParamLimits

0x7aff,	// (0x00026bba) fep_vkb_bottom_pane_g2

0x0001,

0xfb44,	// (0x0002ebff) fep_vkb_bottom_pane_g_ParamLimits

0xfb44,	// (0x0002ebff) fep_vkb_bottom_pane_g

0x775d,	// (0x00026818) cell_vkb_side_pane_g2

0x0001,

0xfb4e,	// (0x0002ec09) cell_vkb_side_pane_g

0x7b8a,	// (0x00026c45) cell_vkb_side_pane_t1

0x7b98,	// (0x00026c53) cell_vkb_side_pane_t1_copy1

0x775d,	// (0x00026818) bg_fep_vkb_candidate_pane_g2

0x7cc4,	// (0x00026d7f) cell_vkb_candidate_pane_ParamLimits

0x7823,	// (0x000268de) aid_size_cell_vkb_ParamLimits

0x7823,	// (0x000268de) aid_size_cell_vkb

0x7cc4,	// (0x00026d7f) cell_vkb_candidate_pane

0x2349,	// (0x00021404) bg_popup_fep_shadow_pane_g1

0xdef4,	// (0x0002cfaf) fep_vkb_bottom_pane_ParamLimits

0xdef4,	// (0x0002cfaf) fep_vkb_bottom_pane

0x78e7,	// (0x000269a2) fep_vkb_candidate_pane_ParamLimits

0x78e7,	// (0x000269a2) fep_vkb_candidate_pane

0xdf19,	// (0x0002cfd4) fep_vkb_keypad_pane_ParamLimits

0xdf19,	// (0x0002cfd4) fep_vkb_keypad_pane

0xdf55,	// (0x0002d010) fep_vkb_side_pane_ParamLimits

0xdf55,	// (0x0002d010) fep_vkb_side_pane

0xdf91,	// (0x0002d04c) fep_vkb_top_pane_ParamLimits

0xdf91,	// (0x0002d04c) fep_vkb_top_pane

0x79c1,	// (0x00026a7c) fep_vkb_top_pane_g1_ParamLimits

0x79c1,	// (0x00026a7c) fep_vkb_top_pane_g1

0x79d0,	// (0x00026a8b) fep_vkb_top_pane_g2_ParamLimits

0x79d0,	// (0x00026a8b) fep_vkb_top_pane_g2

0x79df,	// (0x00026a9a) fep_vkb_top_pane_g3_ParamLimits

0x79df,	// (0x00026a9a) fep_vkb_top_pane_g3

0x0003,

0xfb34,	// (0x0002ebef) fep_vkb_top_pane_g_ParamLimits

0xfb34,	// (0x0002ebef) fep_vkb_top_pane_g

0x79fd,	// (0x00026ab8) fep_vkb_top_text_pane_ParamLimits

0x79fd,	// (0x00026ab8) fep_vkb_top_text_pane

0xdfcd,	// (0x0002d088) fep_vkb_side_pane_g1_ParamLimits

0xdfcd,	// (0x0002d088) fep_vkb_side_pane_g1

0x7a57,	// (0x00026b12) grid_vkb_side_pane_ParamLimits

0x7a57,	// (0x00026b12) grid_vkb_side_pane

0x2351,	// (0x0002140c) bg_popup_fep_shadow_pane_g2

0x235a,	// (0x00021415) bg_popup_fep_shadow_pane_g3

0x2362,	// (0x0002141d) bg_popup_fep_shadow_pane_g4

0x236b,	// (0x00021426) bg_popup_fep_shadow_pane_g5

0x2375,	// (0x00021430) bg_popup_fep_shadow_pane_g6

0x237d,	// (0x00021438) bg_popup_fep_shadow_pane_g7

0x374a,	// (0x00022805) bg_popup_fep_shadow_pane_g8

0x7aae,	// (0x00026b69) grid_vkb_keypad_number_pane_ParamLimits

0x7aae,	// (0x00026b69) grid_vkb_keypad_number_pane

0x7abe,	// (0x00026b79) grid_vkb_keypad_pane_ParamLimits

0x7abe,	// (0x00026b79) grid_vkb_keypad_pane

0x7ae4,	// (0x00026b9f) fep_vkb_bottom_pane_g1_ParamLimits

0x7ae4,	// (0x00026b9f) fep_vkb_bottom_pane_g1

0x7b0d,	// (0x00026bc8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b0d,	// (0x00026bc8) grid_vkb_keypad_bottom_left_pane

0x7b22,	// (0x00026bdd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b22,	// (0x00026bdd) grid_vkb_keypad_bottom_right_pane

0x7b37,	// (0x00026bf2) fep_vkb_top_text_pane_g1

0xe014,	// (0x0002d0cf) fep_vkb_top_text_pane_t1

0xe026,	// (0x0002d0e1) cell_vkb_side_pane_ParamLimits

0xe026,	// (0x0002d0e1) cell_vkb_side_pane

0x775d,	// (0x00026818) cell_vkb_side_pane_g1

0x7ba6,	// (0x00026c61) cell_vkb_keypad_pane_ParamLimits

0x7ba6,	// (0x00026c61) cell_vkb_keypad_pane

0x7c1b,	// (0x00026cd6) cell_vkb_keypad_pane_g1

0x0008,

0xfb61,	// (0x0002ec1c) bg_popup_fep_shadow_pane_g

0x775d,	// (0x00026818) cell_hwr_side_pane_g1

0x775d,	// (0x00026818) cell_hwr_side_pane_g2

0x7c25,	// (0x00026ce0) cell_vkb_keypad_pane_t1

0xe03c,	// (0x0002d0f7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe03c,	// (0x0002d0f7) cell_vkb_keypad_bottom_left_pane

0xe051,	// (0x0002d10c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe051,	// (0x0002d10c) cell_vkb_keypad_bottom_right_pane

0x775d,	// (0x00026818) cell_vkb_keypad_bottom_left_pane_g1

0x775d,	// (0x00026818) cell_vkb_keypad_bottom_right_pane_g1

0x7c89,	// (0x00026d44) cell_vkb_keypad_number_pane_ParamLimits

0x7c89,	// (0x00026d44) cell_vkb_keypad_number_pane

0x7ca8,	// (0x00026d63) cell_vkb_keypad_number_pane_g1

0x7cb2,	// (0x00026d6d) cell_vkb_keypad_number_pane_g2

0x7cbb,	// (0x00026d76) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb53,	// (0x0002ec0e) cell_vkb_keypad_number_pane_g

0x7c25,	// (0x00026ce0) cell_vkb_keypad_number_pane_t1

0x7cdf,	// (0x00026d9a) fep_vkb_candidate_pane_g1

0x0001,

0xfb4e,	// (0x0002ec09) cell_hwr_side_pane_g

0x7cf8,	// (0x00026db3) cell_hwr_side_pane_t1

0x238f,	// (0x0002144a) cell_hwr_side_pane_t1_copy1

0x79ef,	// (0x00026aaa) cell_hwr_candidate_pane_g1

0x239d,	// (0x00021458) cell_hwr_candidate_pane_t1

0x775d,	// (0x00026818) cell_vkb_candidate_pane_g2

0x7d5d,	// (0x00026e18) cell_vkb_candidate_pane_t1

0x7e6f,	// (0x00026f2a) bg_popup_fep_shadow_pane_ParamLimits

0x7e6f,	// (0x00026f2a) bg_popup_fep_shadow_pane

0xd2da,	// (0x0002c395) bg_fep_hwr_top_pane_g4

0x77f1,	// (0x000268ac) bg_hwr_side_pane_g1_ParamLimits

0x77f1,	// (0x000268ac) bg_hwr_side_pane_g1

0xc51a,	// (0x0002b5d5) cell_hwr_side_pane_ParamLimits

0xc51a,	// (0x0002b5d5) cell_hwr_side_pane

0x22b0,	// (0x0002136b) fep_hwr_write_pane_g1_ParamLimits

0x22b0,	// (0x0002136b) fep_hwr_write_pane_g1

0x22bd,	// (0x00021378) fep_hwr_write_pane_g2_ParamLimits

0x22bd,	// (0x00021378) fep_hwr_write_pane_g2

0x22ca,	// (0x00021385) fep_hwr_write_pane_g3_ParamLimits

0x22ca,	// (0x00021385) fep_hwr_write_pane_g3

0xc53a,	// (0x0002b5f5) fep_hwr_write_pane_g4_ParamLimits

0xc53a,	// (0x0002b5f5) fep_hwr_write_pane_g4

0x0005,

0xfb20,	// (0x0002ebdb) fep_hwr_write_pane_g_ParamLimits

0xfb20,	// (0x0002ebdb) fep_hwr_write_pane_g

0xd2da,	// (0x0002c395) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd2da,	// (0x0002c395) bg_fep_hwr_candidate_pane_g2

0x22ed,	// (0x000213a8) cell_hwr_candidate_pane_ParamLimits

0x22ed,	// (0x000213a8) cell_hwr_candidate_pane

0x232f,	// (0x000213ea) fep_hwr_candidate_pane_g1_ParamLimits

0x7851,	// (0x0002690c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7851,	// (0x0002690c) bg_popup_fep_shadow_pane_cp2

0x79ef,	// (0x00026aaa) fep_vkb_top_pane_g4_ParamLimits

0x79ef,	// (0x00026aaa) fep_vkb_top_pane_g4

0x7a35,	// (0x00026af0) fep_vkb_side_pane_g2_ParamLimits

0x7a35,	// (0x00026af0) fep_vkb_side_pane_g2

0xb77c,	// (0x0002a837) list_setting_pane_t4_ParamLimits

0xb77c,	// (0x0002a837) list_setting_pane_t4

0xb816,	// (0x0002a8d1) list_setting_number_pane_t5_ParamLimits

0xb816,	// (0x0002a8d1) list_setting_number_pane_t5

0xcaf6,	// (0x0002bbb1) list_double_heading_pane_cp2_ParamLimits

0xcaf6,	// (0x0002bbb1) list_double_heading_pane_cp2

0x36dd,	// (0x00022798) list_double_heading_pane_g1_cp2_ParamLimits

0x36dd,	// (0x00022798) list_double_heading_pane_g1_cp2

0x36e9,	// (0x000227a4) list_double_heading_pane_g2_cp2_ParamLimits

0x36e9,	// (0x000227a4) list_double_heading_pane_g2_cp2

0x7d6b,	// (0x00026e26) list_double_heading_pane_t1_cp2_ParamLimits

0x7d6b,	// (0x00026e26) list_double_heading_pane_t1_cp2

0x7d81,	// (0x00026e3c) list_double_heading_pane_t2_cp2_ParamLimits

0x7d81,	// (0x00026e3c) list_double_heading_pane_t2_cp2

0x2d4b,	// (0x00021e06) aid_value_unit2

0x157a,	// (0x00020635) popup_preview_fixed_window

0x30e0,	// (0x0002219b) bg_popup_preview_window_pane_cp02

0x7d93,	// (0x00026e4e) list_preview_fixed_pane

0x7dd9,	// (0x00026e94) list_empty_pane_fp_ParamLimits

0x7dd9,	// (0x00026e94) list_empty_pane_fp

0x7dd9,	// (0x00026e94) list_single_cale_day_pane_fp_ParamLimits

0x7dd9,	// (0x00026e94) list_single_cale_day_pane_fp

0x7dd9,	// (0x00026e94) list_single_graphic_heading_pane_fp_ParamLimits

0x7dd9,	// (0x00026e94) list_single_graphic_heading_pane_fp

0x7dd9,	// (0x00026e94) list_single_graphic_pane_fp_ParamLimits

0x7dd9,	// (0x00026e94) list_single_graphic_pane_fp

0x7dd9,	// (0x00026e94) list_single_heading_pane_fp_ParamLimits

0x7dd9,	// (0x00026e94) list_single_heading_pane_fp

0x7dd9,	// (0x00026e94) list_single_pane_fp_ParamLimits

0x7dd9,	// (0x00026e94) list_single_pane_fp

0x7dee,	// (0x00026ea9) list_single_pane_fp_g1_ParamLimits

0x7dee,	// (0x00026ea9) list_single_pane_fp_g1

0x0f1e,	// (0x0001ffd9) list_single_pane_fp_g2_ParamLimits

0x0f1e,	// (0x0001ffd9) list_single_pane_fp_g2

0x0f2a,	// (0x0001ffe5) list_single_pane_fp_g3_ParamLimits

0x0f2a,	// (0x0001ffe5) list_single_pane_fp_g3

0x7dfa,	// (0x00026eb5) list_single_pane_fp_g4_ParamLimits

0x7dfa,	// (0x00026eb5) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x0002ec3d) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x0002ec3d) list_single_pane_fp_g

0x0f3e,	// (0x0001fff9) list_single_pane_fp_t1_ParamLimits

0x0f3e,	// (0x0001fff9) list_single_pane_fp_t1

0x0f55,	// (0x00020010) list_single_graphic_pane_fp_g1_ParamLimits

0x0f55,	// (0x00020010) list_single_graphic_pane_fp_g1

0x7dee,	// (0x00026ea9) list_single_graphic_pane_fp_g2_ParamLimits

0x7dee,	// (0x00026ea9) list_single_graphic_pane_fp_g2

0x0f1e,	// (0x0001ffd9) list_single_graphic_pane_fp_g3_ParamLimits

0x0f1e,	// (0x0001ffd9) list_single_graphic_pane_fp_g3

0x0f2a,	// (0x0001ffe5) list_single_graphic_pane_fp_g4_ParamLimits

0x0f2a,	// (0x0001ffe5) list_single_graphic_pane_fp_g4

0x7dfa,	// (0x00026eb5) list_single_graphic_pane_fp_g5_ParamLimits

0x7dfa,	// (0x00026eb5) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002ec46) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002ec46) list_single_graphic_pane_fp_g

0x0f61,	// (0x0002001c) list_single_graphic_pane_fp_t1_ParamLimits

0x0f61,	// (0x0002001c) list_single_graphic_pane_fp_t1

0x0f55,	// (0x00020010) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0f55,	// (0x00020010) list_single_graphic_heading_pane_fp_g1

0x7dee,	// (0x00026ea9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7dee,	// (0x00026ea9) list_single_graphic_heading_pane_fp_g2

0x0f1e,	// (0x0001ffd9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0f1e,	// (0x0001ffd9) list_single_graphic_heading_pane_fp_g3

0x0f2a,	// (0x0001ffe5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0f2a,	// (0x0001ffe5) list_single_graphic_heading_pane_fp_g4

0x7dfa,	// (0x00026eb5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7dfa,	// (0x00026eb5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002ec46) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002ec46) list_single_graphic_heading_pane_fp_g

0x0f77,	// (0x00020032) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0f77,	// (0x00020032) list_single_graphic_heading_pane_fp_t1

0x0f8d,	// (0x00020048) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0f8d,	// (0x00020048) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x0002ec51) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x0002ec51) list_single_graphic_heading_pane_fp_t

0x0f9f,	// (0x0002005a) list_single_cale_day_pane_fp_g1_ParamLimits

0x0f9f,	// (0x0002005a) list_single_cale_day_pane_fp_g1

0x7e06,	// (0x00026ec1) list_single_cale_day_pane_fp_g2_ParamLimits

0x7e06,	// (0x00026ec1) list_single_cale_day_pane_fp_g2

0x0fd7,	// (0x00020092) list_single_cale_day_pane_fp_g3_ParamLimits

0x0fd7,	// (0x00020092) list_single_cale_day_pane_fp_g3

0x0fff,	// (0x000200ba) list_single_cale_day_pane_fp_g4_ParamLimits

0x0fff,	// (0x000200ba) list_single_cale_day_pane_fp_g4

0x1023,	// (0x000200de) list_single_cale_day_pane_fp_g5_ParamLimits

0x1023,	// (0x000200de) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0002ec56) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0002ec56) list_single_cale_day_pane_fp_g

0x1047,	// (0x00020102) list_single_cale_day_pane_fp_t1_ParamLimits

0x1047,	// (0x00020102) list_single_cale_day_pane_fp_t1

0x106d,	// (0x00020128) list_single_cale_day_pane_fp_t2_ParamLimits

0x106d,	// (0x00020128) list_single_cale_day_pane_fp_t2

0x1086,	// (0x00020141) list_single_cale_day_pane_fp_t3_ParamLimits

0x1086,	// (0x00020141) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x0002ec61) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x0002ec61) list_single_cale_day_pane_fp_t

0x7dee,	// (0x00026ea9) list_empty_pane_fp_g1_ParamLimits

0x7dee,	// (0x00026ea9) list_empty_pane_fp_g1

0x109f,	// (0x0002015a) list_empty_pane_fp_t1

0x10ad,	// (0x00020168) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x0002ec68) list_empty_pane_fp_t

0x7dee,	// (0x00026ea9) list_single_heading_pane_fp_g1_ParamLimits

0x7dee,	// (0x00026ea9) list_single_heading_pane_fp_g1

0x0f1e,	// (0x0001ffd9) list_single_heading_pane_fp_g2_ParamLimits

0x0f1e,	// (0x0001ffd9) list_single_heading_pane_fp_g2

0x0f2a,	// (0x0001ffe5) list_single_heading_pane_fp_g3_ParamLimits

0x0f2a,	// (0x0001ffe5) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x0002ec6d) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x0002ec6d) list_single_heading_pane_fp_g

0x10bb,	// (0x00020176) list_single_heading_pane_fp_t1_ParamLimits

0x10bb,	// (0x00020176) list_single_heading_pane_fp_t1

0x10cd,	// (0x00020188) list_single_heading_pane_fp_t2_ParamLimits

0x10cd,	// (0x00020188) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x0002ec74) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x0002ec74) list_single_heading_pane_fp_t

0x38cf,	// (0x0002298a) aid_size_cell_fast

0x3050,	// (0x0002210b) soft_indicator_pane_cp1_t1

0x390c,	// (0x000229c7) cell_app_pane_cp2_ParamLimits

0x390c,	// (0x000229c7) cell_app_pane_cp2

0x217f,	// (0x0002123a) fep_hwr_candidate_drop_down_list_pane

0xd2e8,	// (0x0002c3a3) fep_hwr_candidate_pane_g3_ParamLimits

0xd2e8,	// (0x0002c3a3) fep_hwr_candidate_pane_g3

0xd2f5,	// (0x0002c3b0) fep_hwr_candidate_pane_g4_ParamLimits

0xd2f5,	// (0x0002c3b0) fep_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0002ebe8) fep_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x0002ebe8) fep_hwr_candidate_pane_g

0x78d6,	// (0x00026991) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x78d6,	// (0x00026991) fep_vkb_candidate_drop_down_list_pane

0x7ce7,	// (0x00026da2) fep_vkb_candidate_pane_g3

0x7cef,	// (0x00026daa) fep_vkb_candidate_pane_g4

0x0002,

0xfb5a,	// (0x0002ec15) fep_vkb_candidate_pane_g

0x79ef,	// (0x00026aaa) cell_hwr_candidate_pane_g1_ParamLimits

0x7d06,	// (0x00026dc1) cell_hwr_candidate_pane_g3_ParamLimits

0x7d06,	// (0x00026dc1) cell_hwr_candidate_pane_g3

0x7e7d,	// (0x00026f38) cell_hwr_candidate_pane_g4_ParamLimits

0x7e7d,	// (0x00026f38) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0002ec2f) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0002ec2f) cell_hwr_candidate_pane_g

0x7d27,	// (0x00026de2) cell_vkb_candidate_pane_g3_ParamLimits

0x7d27,	// (0x00026de2) cell_vkb_candidate_pane_g3

0x7d42,	// (0x00026dfd) cell_vkb_candidate_pane_g4_ParamLimits

0x7d42,	// (0x00026dfd) cell_vkb_candidate_pane_g4

0x7e12,	// (0x00026ecd) cell_app_pane_cp2_g1_ParamLimits

0x7e12,	// (0x00026ecd) cell_app_pane_cp2_g1

0x7e30,	// (0x00026eeb) cell_app_pane_cp2_g2_ParamLimits

0x7e30,	// (0x00026eeb) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x0002ec79) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x0002ec79) cell_app_pane_cp2_g

0x7e3c,	// (0x00026ef7) cell_app_pane_cp2_t1_ParamLimits

0x7e3c,	// (0x00026ef7) cell_app_pane_cp2_t1

0x36c3,	// (0x0002277e) grid_highlight_pane_cp1_ParamLimits

0x36c3,	// (0x0002277e) grid_highlight_pane_cp1

0x23bb,	// (0x00021476) cell_hwr_candidate_pane_cp1_ParamLimits

0x23bb,	// (0x00021476) cell_hwr_candidate_pane_cp1

0x79ef,	// (0x00026aaa) fep_hwr_candidate_drop_down_list_pane_g1

0x7e4e,	// (0x00026f09) fep_hwr_candidate_drop_down_list_pane_g2

0x7e9e,	// (0x00026f59) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0002ec7e) fep_hwr_candidate_drop_down_list_pane_g

0x23da,	// (0x00021495) fep_hwr_candidate_drop_down_list_scroll_pane

0x23e3,	// (0x0002149e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x23e3,	// (0x0002149e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x23f0,	// (0x000214ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x23f0,	// (0x000214ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x23fd,	// (0x000214b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x23fd,	// (0x000214b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7d27,	// (0x00026de2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d27,	// (0x00026de2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7d42,	// (0x00026dfd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7d42,	// (0x00026dfd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x240a,	// (0x000214c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x240a,	// (0x000214c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2425,	// (0x000214e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2425,	// (0x000214e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2440,	// (0x000214fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2440,	// (0x000214fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0002ec85) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0002ec85) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7eab,	// (0x00026f66) cell_vkb_candidate_pane_cp1_ParamLimits

0x7eab,	// (0x00026f66) cell_vkb_candidate_pane_cp1

0x79ef,	// (0x00026aaa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x79ef,	// (0x00026aaa) fep_vkb_candidate_drop_down_list_pane_g1

0x7e4e,	// (0x00026f09) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7e4e,	// (0x00026f09) fep_vkb_candidate_drop_down_list_pane_g2

0x7e9e,	// (0x00026f59) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7e9e,	// (0x00026f59) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0002ec7e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0002ec7e) fep_vkb_candidate_drop_down_list_pane_g

0x7ecb,	// (0x00026f86) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ecb,	// (0x00026f86) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ed8,	// (0x00026f93) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ed8,	// (0x00026f93) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7ee5,	// (0x00026fa0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ee5,	// (0x00026fa0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7ef1,	// (0x00026fac) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ef1,	// (0x00026fac) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d06,	// (0x00026dc1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d06,	// (0x00026dc1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7e7d,	// (0x00026f38) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e7d,	// (0x00026f38) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7efd,	// (0x00026fb8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7efd,	// (0x00026fb8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f1e,	// (0x00026fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f1e,	// (0x00026fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f3f,	// (0x00026ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f3f,	// (0x00026ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdb,	// (0x0002ec96) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdb,	// (0x0002ec96) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbe5e,	// (0x0002af19) title_pane_g1_ParamLimits

0xbe6f,	// (0x0002af2a) title_pane_g2_ParamLimits

0xf56a,	// (0x0002e625) title_pane_g_ParamLimits

0x3d3b,	// (0x00022df6) aid_call2_pane

0x3d43,	// (0x00022dfe) aid_call_pane

0x3d4b,	// (0x00022e06) popup_clock_analogue_window_g1

0x3d4b,	// (0x00022e06) popup_clock_analogue_window_g2

0x18e3,	// (0x0002099e) popup_clock_analogue_window_g3

0x18ec,	// (0x000209a7) popup_clock_analogue_window_g4

0x2d6d,	// (0x00021e28) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0002e7cf) popup_clock_analogue_window_g

0x18f4,	// (0x000209af) popup_clock_analogue_window_t1

0x1902,	// (0x000209bd) clock_digital_number_pane_ParamLimits

0x1902,	// (0x000209bd) clock_digital_number_pane

0x190e,	// (0x000209c9) clock_digital_number_pane_cp02_ParamLimits

0x190e,	// (0x000209c9) clock_digital_number_pane_cp02

0x191a,	// (0x000209d5) clock_digital_number_pane_cp03_ParamLimits

0x191a,	// (0x000209d5) clock_digital_number_pane_cp03

0x1926,	// (0x000209e1) clock_digital_number_pane_cp04_ParamLimits

0x1926,	// (0x000209e1) clock_digital_number_pane_cp04

0x1932,	// (0x000209ed) clock_digital_separator_pane_ParamLimits

0x1932,	// (0x000209ed) clock_digital_separator_pane

0x193e,	// (0x000209f9) popup_clock_digital_window_t1_ParamLimits

0x193e,	// (0x000209f9) popup_clock_digital_window_t1

0x2d6d,	// (0x00021e28) clock_digital_number_pane_g1

0x2d6d,	// (0x00021e28) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0002e7da) clock_digital_number_pane_g

0x2d6d,	// (0x00021e28) clock_digital_separator_pane_g1

0x2d6d,	// (0x00021e28) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0002e7da) clock_digital_separator_pane_g

0xd38e,	// (0x0002c449) aid_fill_nsta_ParamLimits

0xd4bd,	// (0x0002c578) indicator_nsta_pane_ParamLimits

0x4f07,	// (0x00023fc2) popup_clock_analogue_window

0x4f07,	// (0x00023fc2) popup_clock_digital_window

0x3890,	// (0x0002294b) grid_indicator_nsta_pane_ParamLimits

0x713c,	// (0x000261f7) clock_nsta_pane_t2

0x0001,

0xfaad,	// (0x0002eb68) clock_nsta_pane_t

0x18a7,	// (0x00020962) aid_size_max_handle

0xc1fe,	// (0x0002b2b9) aid_size_min_handle

0x4328,	// (0x000233e3) editor_scroll_pane

0x7f5a,	// (0x00027015) ex_editor_pane

0x383d,	// (0x000228f8) scroll_pane_cp13

0x3662,	// (0x0002271d) scroll_pane_cp14

0x3d75,	// (0x00022e30) scroll_pane_cp36

0xcb05,	// (0x0002bbc0) list_single_graphic_hl_pane_cp2_ParamLimits

0xcb05,	// (0x0002bbc0) list_single_graphic_hl_pane_cp2

0xba8c,	// (0x0002ab47) list_single_graphic_hl_pane_ParamLimits

0xba8c,	// (0x0002ab47) list_single_graphic_hl_pane

0x10e3,	// (0x0002019e) aid_size_min_hl_cp1

0x7f62,	// (0x0002701d) list_highlight_pane_cp34_ParamLimits

0x7f62,	// (0x0002701d) list_highlight_pane_cp34

0x7f73,	// (0x0002702e) list_single_graphic_hl_pane_g1_ParamLimits

0x7f73,	// (0x0002702e) list_single_graphic_hl_pane_g1

0xba9e,	// (0x0002ab59) list_single_graphic_hl_pane_g2_ParamLimits

0xba9e,	// (0x0002ab59) list_single_graphic_hl_pane_g2

0xba9e,	// (0x0002ab59) list_single_graphic_hl_pane_g3_ParamLimits

0xba9e,	// (0x0002ab59) list_single_graphic_hl_pane_g3

0xbaaa,	// (0x0002ab65) list_single_graphic_hl_pane_g4_ParamLimits

0xbaaa,	// (0x0002ab65) list_single_graphic_hl_pane_g4

0xbab6,	// (0x0002ab71) list_single_graphic_hl_pane_g5_ParamLimits

0xbab6,	// (0x0002ab71) list_single_graphic_hl_pane_g5

0x0004,

0xfbec,	// (0x0002eca7) list_single_graphic_hl_pane_g_ParamLimits

0xfbec,	// (0x0002eca7) list_single_graphic_hl_pane_g

0xbaca,	// (0x0002ab85) list_single_graphic_hl_pane_t1_ParamLimits

0xbaca,	// (0x0002ab85) list_single_graphic_hl_pane_t1

0x7f80,	// (0x0002703b) aid_size_min_hl_cp2

0x7f89,	// (0x00027044) list_highlight_pane_cp34_cp2_ParamLimits

0x7f89,	// (0x00027044) list_highlight_pane_cp34_cp2

0x7f73,	// (0x0002702e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7f73,	// (0x0002702e) list_single_graphic_hl_pane_g1_cp2

0x7f96,	// (0x00027051) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7f96,	// (0x00027051) list_single_graphic_hl_pane_g2_cp2

0x7fa2,	// (0x0002705d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7fa2,	// (0x0002705d) list_single_graphic_hl_pane_g3_cp2

0x5b43,	// (0x00024bfe) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5b43,	// (0x00024bfe) list_single_graphic_hl_pane_g4_cp2

0x7fb0,	// (0x0002706b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7fb0,	// (0x0002706b) list_single_graphic_hl_pane_g5_cp2

0xc230,	// (0x0002b2eb) control_pane_g4_ParamLimits

0xc230,	// (0x0002b2eb) control_pane_g4

0x468e,	// (0x00023749) bg_popup_sub_pane_cp10_ParamLimits

0x7767,	// (0x00026822) list_choice_list_pane_ParamLimits

0x7776,	// (0x00026831) scroll_pane_cp23

0x30e0,	// (0x0002219b) bg_popup_preview_window_pane_cp02_ParamLimits

0x7d93,	// (0x00026e4e) list_preview_fixed_pane_ParamLimits

0x7da9,	// (0x00026e64) list_preview_fixed_pane_cp_ParamLimits

0x7da9,	// (0x00026e64) list_preview_fixed_pane_cp

0x7db5,	// (0x00026e70) popup_preview_fixed_window_g1_ParamLimits

0x7db5,	// (0x00026e70) popup_preview_fixed_window_g1

0x7dc1,	// (0x00026e7c) popup_preview_fixed_window_g2_ParamLimits

0x7dc1,	// (0x00026e7c) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0002ec36) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0002ec36) popup_preview_fixed_window_g

0x181b,	// (0x000208d6) aid_navi_side_left_pane_ParamLimits

0x1830,	// (0x000208eb) aid_navi_side_right_pane_ParamLimits

0x1848,	// (0x00020903) navi_icon_pane_stacon_ParamLimits

0x185c,	// (0x00020917) navi_navi_pane_stacon_ParamLimits

0x1848,	// (0x00020903) navi_text_pane_stacon_ParamLimits

0x2d63,	// (0x00021e1e) main_text_info_pane

0x7fda,	// (0x00027095) listscroll_text_info_pane

0x7fe2,	// (0x0002709d) list_text_info_pane_ParamLimits

0x7fe2,	// (0x0002709d) list_text_info_pane

0x7ff1,	// (0x000270ac) scroll_pane_cp24_ParamLimits

0x7ff1,	// (0x000270ac) scroll_pane_cp24

0xe06c,	// (0x0002d127) list_text_info_pane_t1_ParamLimits

0xe06c,	// (0x0002d127) list_text_info_pane_t1

0xcd00,	// (0x0002bdbb) popup_fast_swap2_window_ParamLimits

0xcd00,	// (0x0002bdbb) popup_fast_swap2_window

0x8040,	// (0x000270fb) aid_size_cell_fast2

0x2d63,	// (0x00021e1e) bg_popup_window_pane_cp17

0x55e2,	// (0x0002469d) heading_pane_cp2

0x332c,	// (0x000223e7) listscroll_fast2_pane

0x804a,	// (0x00027105) grid_fast2_pane

0x8054,	// (0x0002710f) listscroll_fast2_pane_g1

0x805c,	// (0x00027117) listscroll_fast2_pane_g2

0x0001,

0xfbf7,	// (0x0002ecb2) listscroll_fast2_pane_g

0x383d,	// (0x000228f8) scroll_pane_cp26

0x8066,	// (0x00027121) cell_fast2_pane_ParamLimits

0x8066,	// (0x00027121) cell_fast2_pane

0x807b,	// (0x00027136) cell_fast2_pane_g1

0x8084,	// (0x0002713f) cell_fast2_pane_g2

0x808d,	// (0x00027148) cell_fast2_pane_g3

0x0002,

0xfbfc,	// (0x0002ecb7) cell_fast2_pane_g

0x341f,	// (0x000224da) grid_highlight_pane_cp9

0x3434,	// (0x000224ef) main_eswt_pane_ParamLimits

0x3434,	// (0x000224ef) main_eswt_pane

0x8006,	// (0x000270c1) list_single_text_info_pane

0x8095,	// (0x00027150) eswt_ctrl_button_pane

0x8095,	// (0x00027150) eswt_ctrl_canvas_pane

0x809d,	// (0x00027158) eswt_ctrl_combo_pane

0x8095,	// (0x00027150) eswt_ctrl_default_pane

0x8095,	// (0x00027150) eswt_ctrl_label_pane

0x80a5,	// (0x00027160) eswt_ctrl_wait_pane

0x80ad,	// (0x00027168) eswt_shell_pane

0x2d63,	// (0x00021e1e) listscroll_eswt_app_pane

0x80cd,	// (0x00027188) popup_eswt_tasktip_window_ParamLimits

0x80cd,	// (0x00027188) popup_eswt_tasktip_window

0x5220,	// (0x000242db) bg_popup_window_pane_cp18

0x80de,	// (0x00027199) eswt_control_pane_g1_ParamLimits

0x80de,	// (0x00027199) eswt_control_pane_g1

0x80eb,	// (0x000271a6) eswt_control_pane_g2_ParamLimits

0x80eb,	// (0x000271a6) eswt_control_pane_g2

0x80f8,	// (0x000271b3) eswt_control_pane_g3_ParamLimits

0x80f8,	// (0x000271b3) eswt_control_pane_g3

0x8105,	// (0x000271c0) eswt_control_pane_g4_ParamLimits

0x8105,	// (0x000271c0) eswt_control_pane_g4

0x0003,

0xfc03,	// (0x0002ecbe) eswt_control_pane_g_ParamLimits

0xfc03,	// (0x0002ecbe) eswt_control_pane_g

0x36c3,	// (0x0002277e) bg_button_pane_ParamLimits

0x36c3,	// (0x0002277e) bg_button_pane

0x3434,	// (0x000224ef) common_borders_pane_copy2_ParamLimits

0x3434,	// (0x000224ef) common_borders_pane_copy2

0x8112,	// (0x000271cd) control_button_pane_g1_ParamLimits

0x8112,	// (0x000271cd) control_button_pane_g1

0x811e,	// (0x000271d9) control_button_pane_g2_ParamLimits

0x811e,	// (0x000271d9) control_button_pane_g2

0x812a,	// (0x000271e5) control_button_pane_g3_ParamLimits

0x812a,	// (0x000271e5) control_button_pane_g3

0x0002,

0xfc0c,	// (0x0002ecc7) control_button_pane_g_ParamLimits

0xfc0c,	// (0x0002ecc7) control_button_pane_g

0x813e,	// (0x000271f9) control_button_pane_t1

0x814c,	// (0x00027207) control_button_pane_t2

0x0001,

0xfc13,	// (0x0002ecce) control_button_pane_t

0x5130,	// (0x000241eb) bg_button_pane_g1

0x5138,	// (0x000241f3) bg_button_pane_g2

0x5140,	// (0x000241fb) bg_button_pane_g3

0x5148,	// (0x00024203) bg_button_pane_g4

0x5150,	// (0x0002420b) bg_button_pane_g5

0x5158,	// (0x00024213) bg_button_pane_g6

0x5160,	// (0x0002421b) bg_button_pane_g7

0x5168,	// (0x00024223) bg_button_pane_g8

0x5170,	// (0x0002422b) bg_button_pane_g9

0x0008,

0xf872,	// (0x0002e92d) bg_button_pane_g

0x7722,	// (0x000267dd) common_borders_pane_ParamLimits

0x7722,	// (0x000267dd) common_borders_pane

0x80de,	// (0x00027199) eswt_control_pane_g1_copy1_ParamLimits

0x80de,	// (0x00027199) eswt_control_pane_g1_copy1

0x80eb,	// (0x000271a6) eswt_control_pane_g2_copy1_ParamLimits

0x80eb,	// (0x000271a6) eswt_control_pane_g2_copy1

0x80f8,	// (0x000271b3) eswt_control_pane_g3_copy1_ParamLimits

0x80f8,	// (0x000271b3) eswt_control_pane_g3_copy1

0x8105,	// (0x000271c0) eswt_control_pane_g4_copy1_ParamLimits

0x8105,	// (0x000271c0) eswt_control_pane_g4_copy1

0x775d,	// (0x00026818) bg_eswt_ctrl_canvas_pane_g1

0x7722,	// (0x000267dd) common_borders_pane_cp2_ParamLimits

0x7722,	// (0x000267dd) common_borders_pane_cp2

0x7722,	// (0x000267dd) common_borders_pane_cp3_ParamLimits

0x7722,	// (0x000267dd) common_borders_pane_cp3

0x815a,	// (0x00027215) separator_horizontal_pane

0x8162,	// (0x0002721d) separator_vertical_pane

0x80de,	// (0x00027199) eswt_control_pane_g1_copy2_ParamLimits

0x80de,	// (0x00027199) eswt_control_pane_g1_copy2

0x80eb,	// (0x000271a6) eswt_control_pane_g2_copy2_ParamLimits

0x80eb,	// (0x000271a6) eswt_control_pane_g2_copy2

0x80f8,	// (0x000271b3) eswt_control_pane_g3_copy2_ParamLimits

0x80f8,	// (0x000271b3) eswt_control_pane_g3_copy2

0x8105,	// (0x000271c0) eswt_control_pane_g4_copy2_ParamLimits

0x8105,	// (0x000271c0) eswt_control_pane_g4_copy2

0x2d63,	// (0x00021e1e) common_borders_pane_cp4

0x816b,	// (0x00027226) separator_horizontal_pane_g1

0x8174,	// (0x0002722f) separator_horizontal_pane_g2

0x817d,	// (0x00027238) separator_horizontal_pane_g3

0x0002,

0xfc18,	// (0x0002ecd3) separator_horizontal_pane_g

0x80de,	// (0x00027199) eswt_control_pane_g1_copy3_ParamLimits

0x80de,	// (0x00027199) eswt_control_pane_g1_copy3

0x80eb,	// (0x000271a6) eswt_control_pane_g2_copy3_ParamLimits

0x80eb,	// (0x000271a6) eswt_control_pane_g2_copy3

0x80f8,	// (0x000271b3) eswt_control_pane_g3_copy3_ParamLimits

0x80f8,	// (0x000271b3) eswt_control_pane_g3_copy3

0x8105,	// (0x000271c0) eswt_control_pane_g4_copy3_ParamLimits

0x8105,	// (0x000271c0) eswt_control_pane_g4_copy3

0x2d63,	// (0x00021e1e) common_borders_pane_cp5

0x8186,	// (0x00027241) separator_vertical_pane_g1

0x818f,	// (0x0002724a) separator_vertical_pane_g2

0x8198,	// (0x00027253) separator_vertical_pane_g3

0x0002,

0xfc1f,	// (0x0002ecda) separator_vertical_pane_g

0x80de,	// (0x00027199) eswt_control_pane_g1_copy4_ParamLimits

0x80de,	// (0x00027199) eswt_control_pane_g1_copy4

0x80eb,	// (0x000271a6) eswt_control_pane_g2_copy4_ParamLimits

0x80eb,	// (0x000271a6) eswt_control_pane_g2_copy4

0x80f8,	// (0x000271b3) eswt_control_pane_g3_copy4_ParamLimits

0x80f8,	// (0x000271b3) eswt_control_pane_g3_copy4

0x8105,	// (0x000271c0) eswt_control_pane_g4_copy4_ParamLimits

0x8105,	// (0x000271c0) eswt_control_pane_g4_copy4

0xe087,	// (0x0002d142) eswt_ctrl_combo_button_pane

0xe08f,	// (0x0002d14a) eswt_ctrl_input_pane

0xe097,	// (0x0002d152) popup_choice_list_window_cp70

0xe09f,	// (0x0002d15a) eswt_ctrl_input_pane_t1

0x2d63,	// (0x00021e1e) input_focus_pane_cp70

0x7722,	// (0x000267dd) bg_button_pane_cp70_ParamLimits

0x7722,	// (0x000267dd) bg_button_pane_cp70

0xe0ad,	// (0x0002d168) eswt_ctrl_combo_button_pane_g1

0x81cf,	// (0x0002728a) wait_bar_pane_cp70

0x5220,	// (0x000242db) bg_popup_window_pane_cp70_ParamLimits

0x5220,	// (0x000242db) bg_popup_window_pane_cp70

0x81d7,	// (0x00027292) popup_eswt_tasktip_window_t1

0x81ed,	// (0x000272a8) wait_bar_pane_cp71_ParamLimits

0x81ed,	// (0x000272a8) wait_bar_pane_cp71

0x81f9,	// (0x000272b4) grid_eswt_app_pane

0x3b64,	// (0x00022c1f) scroll_pane_cp70

0xe0b5,	// (0x0002d170) cell_eswt_app_pane_ParamLimits

0xe0b5,	// (0x0002d170) cell_eswt_app_pane

0xe0df,	// (0x0002d19a) cell_eswt_app_pane_g1_ParamLimits

0xe0df,	// (0x0002d19a) cell_eswt_app_pane_g1

0xe10e,	// (0x0002d1c9) cell_eswt_app_pane_g2_ParamLimits

0xe10e,	// (0x0002d1c9) cell_eswt_app_pane_g2

0x0001,

0xfc26,	// (0x0002ece1) cell_eswt_app_pane_g_ParamLimits

0xfc26,	// (0x0002ece1) cell_eswt_app_pane_g

0xe137,	// (0x0002d1f2) cell_eswt_app_pane_t1_ParamLimits

0xe137,	// (0x0002d1f2) cell_eswt_app_pane_t1

0x82bc,	// (0x00027377) grid_highlight_pane_cp70_ParamLimits

0x82bc,	// (0x00027377) grid_highlight_pane_cp70

0x41fd,	// (0x000232b8) set_content_pane_g1

0x45d4,	// (0x0002368f) status_small_volume_pane

0x245b,	// (0x00021516) status_small_volume_pane_g1

0x2463,	// (0x0002151e) volume_small2_pane

0x246c,	// (0x00021527) volume_small2_pane_g1

0x2475,	// (0x00021530) volume_small2_pane_g2

0x247e,	// (0x00021539) volume_small2_pane_g3

0x2487,	// (0x00021542) volume_small2_pane_g4

0x2490,	// (0x0002154b) volume_small2_pane_g5

0x2499,	// (0x00021554) volume_small2_pane_g6

0x24a2,	// (0x0002155d) volume_small2_pane_g7

0x24ab,	// (0x00021566) volume_small2_pane_g8

0x24b4,	// (0x0002156f) volume_small2_pane_g9

0x24bd,	// (0x00021578) volume_small2_pane_g10

0x0009,

0xfc2b,	// (0x0002ece6) volume_small2_pane_g

0x7b37,	// (0x00026bf2) fep_vkb_top_text_pane_g1_ParamLimits

0xe014,	// (0x0002d0cf) fep_vkb_top_text_pane_t1_ParamLimits

0x7dcd,	// (0x00026e88) popup_preview_fixed_window_g3_ParamLimits

0x7dcd,	// (0x00026e88) popup_preview_fixed_window_g3

0xd321,	// (0x0002c3dc) popup_toolbar_trans_pane

0xd9f5,	// (0x0002cab0) aid_height_set_list_ParamLimits

0x657f,	// (0x0002563a) aid_size_parent_ParamLimits

0x468e,	// (0x00023749) list_highlight_pane_cp2_ParamLimits

0x41fd,	// (0x000232b8) set_content_pane_g1_ParamLimits

0xdb90,	// (0x0002cc4b) list_single_image_pane_ParamLimits

0xdb90,	// (0x0002cc4b) list_single_image_pane

0x82c8,	// (0x00027383) aid_size_cell_image_ParamLimits

0x82c8,	// (0x00027383) aid_size_cell_image

0xe169,	// (0x0002d224) grid_single_image_pane_ParamLimits

0xe169,	// (0x0002d224) grid_single_image_pane

0x3d19,	// (0x00022dd4) list_single_image_pane_g1_ParamLimits

0x3d19,	// (0x00022dd4) list_single_image_pane_g1

0x7e5b,	// (0x00026f16) list_single_image_pane_g2_ParamLimits

0x7e5b,	// (0x00026f16) list_single_image_pane_g2

0x0001,

0xfc40,	// (0x0002ecfb) list_single_image_pane_g_ParamLimits

0xfc40,	// (0x0002ecfb) list_single_image_pane_g

0x3d25,	// (0x00022de0) list_single_image_pane_t1_ParamLimits

0x3d25,	// (0x00022de0) list_single_image_pane_t1

0xe177,	// (0x0002d232) cell_image_list_pane_ParamLimits

0xe177,	// (0x0002d232) cell_image_list_pane

0x82f6,	// (0x000273b1) cell_image_list_pane_g1

0x82ff,	// (0x000273ba) cell_image_list_pane_g2

0x0001,

0xfc45,	// (0x0002ed00) cell_image_list_pane_g

0x8308,	// (0x000273c3) aid_size_cell_tb_trans_pane

0x36c3,	// (0x0002277e) bg_tb_trans_pane

0x831a,	// (0x000273d5) grid_tb_trans_pane

0x5130,	// (0x000241eb) bg_tb_trans_pane_g1

0x5138,	// (0x000241f3) bg_tb_trans_pane_g2

0x5140,	// (0x000241fb) bg_tb_trans_pane_g3

0x5148,	// (0x00024203) bg_tb_trans_pane_g4

0x5150,	// (0x0002420b) bg_tb_trans_pane_g5

0x5168,	// (0x00024223) bg_tb_trans_pane_g6

0x5170,	// (0x0002422b) bg_tb_trans_pane_g7

0x5158,	// (0x00024213) bg_tb_trans_pane_g8

0x5160,	// (0x0002421b) bg_tb_trans_pane_g9

0x0008,

0xfc4a,	// (0x0002ed05) bg_tb_trans_pane_g

0x832e,	// (0x000273e9) cell_toolbar_trans_pane_ParamLimits

0x832e,	// (0x000273e9) cell_toolbar_trans_pane

0x775d,	// (0x00026818) cell_toolbar_trans_pane_g1

0xddf0,	// (0x0002ceab) list_form2_midp_pane_t1

0xddfe,	// (0x0002ceb9) list_form2_midp_pane_t2

0x0001,

0xfaf3,	// (0x0002ebae) list_form2_midp_pane_t

0x7342,	// (0x000263fd) scroll_pane_cp51_ParamLimits

0x74fe,	// (0x000265b9) form2_midp_wait_pane_g1

0x7507,	// (0x000265c2) form2_midp_wait_pane_g2

0x7510,	// (0x000265cb) form2_midp_wait_pane_g3

0x0002,

0xfb08,	// (0x0002ebc3) form2_midp_wait_pane_g

0x2e57,	// (0x00021f12) list_highlight_pane_cp21_ParamLimits

0x7567,	// (0x00026622) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7576,	// (0x00026631) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6752,	// (0x0002580d) list_single_2graphic_im_pane_ParamLimits

0x6752,	// (0x0002580d) list_single_2graphic_im_pane

0xe18d,	// (0x0002d248) list_single_2graphic_im_pane_g1_ParamLimits

0xe18d,	// (0x0002d248) list_single_2graphic_im_pane_g1

0xe19e,	// (0x0002d259) list_single_2graphic_im_pane_g2_ParamLimits

0xe19e,	// (0x0002d259) list_single_2graphic_im_pane_g2

0xe1aa,	// (0x0002d265) list_single_2graphic_im_pane_g3_ParamLimits

0xe1aa,	// (0x0002d265) list_single_2graphic_im_pane_g3

0x0003,

0xfc5d,	// (0x0002ed18) list_single_2graphic_im_pane_g_ParamLimits

0xfc5d,	// (0x0002ed18) list_single_2graphic_im_pane_g

0xe1be,	// (0x0002d279) list_single_2graphic_im_pane_t1_ParamLimits

0xe1be,	// (0x0002d279) list_single_2graphic_im_pane_t1

0x7dd9,	// (0x00026e94) list_single_graphic_2heading_pane_fp_ParamLimits

0x7dd9,	// (0x00026e94) list_single_graphic_2heading_pane_fp

0x0f55,	// (0x00020010) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0f55,	// (0x00020010) list_single_graphic_2heading_pane_fp_g1

0x7dee,	// (0x00026ea9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7dee,	// (0x00026ea9) list_single_graphic_2heading_pane_fp_g2

0x0f1e,	// (0x0001ffd9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0f1e,	// (0x0001ffd9) list_single_graphic_2heading_pane_fp_g3

0x0f2a,	// (0x0001ffe5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0f2a,	// (0x0001ffe5) list_single_graphic_2heading_pane_fp_g4

0x7dfa,	// (0x00026eb5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7dfa,	// (0x00026eb5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002ec46) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002ec46) list_single_graphic_2heading_pane_fp_g

0x1122,	// (0x000201dd) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1122,	// (0x000201dd) list_single_graphic_2heading_pane_fp_t1

0x0f8d,	// (0x00020048) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0f8d,	// (0x00020048) list_single_graphic_2heading_pane_fp_t2

0x1138,	// (0x000201f3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1138,	// (0x000201f3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc66,	// (0x0002ed21) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc66,	// (0x0002ed21) list_single_graphic_2heading_pane_fp_t

0x77fd,	// (0x000268b8) fep_hwr_write_pane_g5_ParamLimits

0x77fd,	// (0x000268b8) fep_hwr_write_pane_g5

0x7809,	// (0x000268c4) fep_hwr_write_pane_g6_ParamLimits

0x7809,	// (0x000268c4) fep_hwr_write_pane_g6

0x80ad,	// (0x00027168) eswt_shell_pane_ParamLimits

0x5220,	// (0x000242db) bg_popup_window_pane_cp18_ParamLimits

0x64c7,	// (0x00025582) heading_pane_cp70

0x81d7,	// (0x00027292) popup_eswt_tasktip_window_t1_ParamLimits

0xd3e2,	// (0x0002c49d) aid_touch_tab_arrow_left

0xd3f8,	// (0x0002c4b3) aid_touch_tab_arrow_right

0xbe87,	// (0x0002af42) title_pane_g3_ParamLimits

0xbe87,	// (0x0002af42) title_pane_g3

0x3682,	// (0x0002273d) set_value_pane_g1

0xd321,	// (0x0002c3dc) popup_toolbar_trans_pane_ParamLimits

0x8308,	// (0x000273c3) aid_size_cell_tb_trans_pane_ParamLimits

0x36c3,	// (0x0002277e) bg_tb_trans_pane_ParamLimits

0x831a,	// (0x000273d5) grid_tb_trans_pane_ParamLimits

0x30e0,	// (0x0002219b) cont_note_pane_ParamLimits

0x30e0,	// (0x0002219b) cont_note_pane

0x3434,	// (0x000224ef) cont_snote2_single_text_pane_ParamLimits

0x3434,	// (0x000224ef) cont_snote2_single_text_pane

0x3434,	// (0x000224ef) cont_snote2_single_graphic_pane_ParamLimits

0x3434,	// (0x000224ef) cont_snote2_single_graphic_pane

0x57fd,	// (0x000248b8) cont_note_wait_pane_ParamLimits

0x57fd,	// (0x000248b8) cont_note_wait_pane

0x57fd,	// (0x000248b8) cont_note_image_pane_ParamLimits

0x57fd,	// (0x000248b8) cont_note_image_pane

0x83c2,	// (0x0002747d) popup_note2_window_g1_ParamLimits

0x83c2,	// (0x0002747d) popup_note2_window_g1

0x83f3,	// (0x000274ae) popup_note2_window_t1_ParamLimits

0x83f3,	// (0x000274ae) popup_note2_window_t1

0x8438,	// (0x000274f3) popup_note2_window_t2_ParamLimits

0x8438,	// (0x000274f3) popup_note2_window_t2

0x847d,	// (0x00027538) popup_note2_window_t3_ParamLimits

0x847d,	// (0x00027538) popup_note2_window_t3

0x84c2,	// (0x0002757d) popup_note2_window_t4_ParamLimits

0x84c2,	// (0x0002757d) popup_note2_window_t4

0x3164,	// (0x0002221f) popup_note2_window_t5_ParamLimits

0x3164,	// (0x0002221f) popup_note2_window_t5

0x0004,

0xfc72,	// (0x0002ed2d) popup_note2_window_t_ParamLimits

0xfc72,	// (0x0002ed2d) popup_note2_window_t

0x84f1,	// (0x000275ac) popup_note2_image_window_g1_ParamLimits

0x84f1,	// (0x000275ac) popup_note2_image_window_g1

0x84fd,	// (0x000275b8) popup_note2_image_window_g2_ParamLimits

0x84fd,	// (0x000275b8) popup_note2_image_window_g2

0x0001,

0xfc7d,	// (0x0002ed38) popup_note2_image_window_g_ParamLimits

0xfc7d,	// (0x0002ed38) popup_note2_image_window_g

0x850f,	// (0x000275ca) popup_note2_image_window_t1_ParamLimits

0x850f,	// (0x000275ca) popup_note2_image_window_t1

0x8527,	// (0x000275e2) popup_note2_image_window_t2_ParamLimits

0x8527,	// (0x000275e2) popup_note2_image_window_t2

0x853f,	// (0x000275fa) popup_note2_image_window_t3_ParamLimits

0x853f,	// (0x000275fa) popup_note2_image_window_t3

0x0002,

0xfc82,	// (0x0002ed3d) popup_note2_image_window_t_ParamLimits

0xfc82,	// (0x0002ed3d) popup_note2_image_window_t

0x580b,	// (0x000248c6) popup_note2_wait_window_g1_ParamLimits

0x580b,	// (0x000248c6) popup_note2_wait_window_g1

0x855b,	// (0x00027616) popup_note2_wait_window_g2_ParamLimits

0x855b,	// (0x00027616) popup_note2_wait_window_g2

0x5823,	// (0x000248de) popup_note2_wait_window_g3_ParamLimits

0x5823,	// (0x000248de) popup_note2_wait_window_g3

0x0002,

0xfc89,	// (0x0002ed44) popup_note2_wait_window_g_ParamLimits

0xfc89,	// (0x0002ed44) popup_note2_wait_window_g

0x8567,	// (0x00027622) popup_note2_wait_window_t1_ParamLimits

0x8567,	// (0x00027622) popup_note2_wait_window_t1

0x8585,	// (0x00027640) popup_note2_wait_window_t2_ParamLimits

0x8585,	// (0x00027640) popup_note2_wait_window_t2

0x85a3,	// (0x0002765e) popup_note2_wait_window_t3_ParamLimits

0x85a3,	// (0x0002765e) popup_note2_wait_window_t3

0x85b5,	// (0x00027670) popup_note2_wait_window_t4_ParamLimits

0x85b5,	// (0x00027670) popup_note2_wait_window_t4

0x0003,

0xfc90,	// (0x0002ed4b) popup_note2_wait_window_t_ParamLimits

0xfc90,	// (0x0002ed4b) popup_note2_wait_window_t

0x85c7,	// (0x00027682) wait_bar2_pane_ParamLimits

0x85c7,	// (0x00027682) wait_bar2_pane

0x85df,	// (0x0002769a) popup_snote2_single_text_window_g1_ParamLimits

0x85df,	// (0x0002769a) popup_snote2_single_text_window_g1

0x8607,	// (0x000276c2) popup_snote2_single_text_window_t1_ParamLimits

0x8607,	// (0x000276c2) popup_snote2_single_text_window_t1

0x8653,	// (0x0002770e) popup_snote2_single_text_window_t2_ParamLimits

0x8653,	// (0x0002770e) popup_snote2_single_text_window_t2

0x869f,	// (0x0002775a) popup_snote2_single_text_window_t3_ParamLimits

0x869f,	// (0x0002775a) popup_snote2_single_text_window_t3

0x86e0,	// (0x0002779b) popup_snote2_single_text_window_t4_ParamLimits

0x86e0,	// (0x0002779b) popup_snote2_single_text_window_t4

0x8716,	// (0x000277d1) popup_snote2_single_text_window_t5_ParamLimits

0x8716,	// (0x000277d1) popup_snote2_single_text_window_t5

0x0004,

0xfc99,	// (0x0002ed54) popup_snote2_single_text_window_t_ParamLimits

0xfc99,	// (0x0002ed54) popup_snote2_single_text_window_t

0x8741,	// (0x000277fc) popup_snote2_single_graphic_window_g1_ParamLimits

0x8741,	// (0x000277fc) popup_snote2_single_graphic_window_g1

0x8769,	// (0x00027824) popup_snote2_single_graphic_window_g2_ParamLimits

0x8769,	// (0x00027824) popup_snote2_single_graphic_window_g2

0x0001,

0xfca4,	// (0x0002ed5f) popup_snote2_single_graphic_window_g_ParamLimits

0xfca4,	// (0x0002ed5f) popup_snote2_single_graphic_window_g

0x8791,	// (0x0002784c) popup_snote2_single_graphic_window_t1_ParamLimits

0x8791,	// (0x0002784c) popup_snote2_single_graphic_window_t1

0x87dd,	// (0x00027898) popup_snote2_single_graphic_window_t2_ParamLimits

0x87dd,	// (0x00027898) popup_snote2_single_graphic_window_t2

0x869f,	// (0x0002775a) popup_snote2_single_graphic_window_t3_ParamLimits

0x869f,	// (0x0002775a) popup_snote2_single_graphic_window_t3

0x86e0,	// (0x0002779b) popup_snote2_single_graphic_window_t4_ParamLimits

0x86e0,	// (0x0002779b) popup_snote2_single_graphic_window_t4

0x8716,	// (0x000277d1) popup_snote2_single_graphic_window_t5_ParamLimits

0x8716,	// (0x000277d1) popup_snote2_single_graphic_window_t5

0x0004,

0xfca9,	// (0x0002ed64) popup_snote2_single_graphic_window_t_ParamLimits

0xfca9,	// (0x0002ed64) popup_snote2_single_graphic_window_t

0x71ff,	// (0x000262ba) clock_nsta_pane_cp2_t1

0x71ff,	// (0x000262ba) clock_nsta_pane_cp2_t2

0x0001,

0xfac9,	// (0x0002eb84) clock_nsta_pane_cp2_t

0x0852,	// (0x0001f90d) form_field_data_wide_pane_g1_ParamLimits

0x36dd,	// (0x00022798) form_field_data_wide_pane_g2_ParamLimits

0x36dd,	// (0x00022798) form_field_data_wide_pane_g2

0x36e9,	// (0x000227a4) form_field_data_wide_pane_g3_ParamLimits

0x36e9,	// (0x000227a4) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0002e752) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0002e752) form_field_data_wide_pane_g

0xdd0a,	// (0x0002cdc5) grid_touch_3_pane_ParamLimits

0xdd0a,	// (0x0002cdc5) grid_touch_3_pane

0xe1ef,	// (0x0002d2aa) cell_touch_3_pane_ParamLimits

0xe1ef,	// (0x0002d2aa) cell_touch_3_pane

0x775d,	// (0x00026818) cell_touch_3_pane_g1

0x775d,	// (0x00026818) cell_touch_3_pane_g2

0x0001,

0xfb4e,	// (0x0002ec09) cell_touch_3_pane_g

0x3196,	// (0x00022251) cont_query_data_pane

0x319e,	// (0x00022259) cont_query_data_pane_cp1

0x8857,	// (0x00027912) button_value_adjust_pane_cp7

0x885f,	// (0x0002791a) query_popup_pane_cp3

0x3e10,	// (0x00022ecb) bg_popup_sub_pane_cp22_ParamLimits

0x195d,	// (0x00020a18) navi_navi_volume_pane_cp2

0x1978,	// (0x00020a33) popup_side_volume_key_window_g2

0x1987,	// (0x00020a42) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0002e7e4) popup_side_volume_key_window_g

0x19a4,	// (0x00020a5f) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0002e7eb) popup_side_volume_key_window_t

0x40c7,	// (0x00023182) popup_side_volume_key_window_ParamLimits

0xb58c,	// (0x0002a647) list_double_graphic_pane_g4_ParamLimits

0xb58c,	// (0x0002a647) list_double_graphic_pane_g4

0xdb7d,	// (0x0002cc38) list_single_2heading_msg_pane_ParamLimits

0xdb7d,	// (0x0002cc38) list_single_2heading_msg_pane

0xbae0,	// (0x0002ab9b) list_single_2heading_msg_pane_g1_ParamLimits

0xbae0,	// (0x0002ab9b) list_single_2heading_msg_pane_g1

0xbaec,	// (0x0002aba7) list_single_2heading_msg_pane_g2_ParamLimits

0xbaec,	// (0x0002aba7) list_single_2heading_msg_pane_g2

0xbaff,	// (0x0002abba) list_single_2heading_msg_pane_g3_ParamLimits

0xbaff,	// (0x0002abba) list_single_2heading_msg_pane_g3

0xbb0b,	// (0x0002abc6) list_single_2heading_msg_pane_g4_ParamLimits

0xbb0b,	// (0x0002abc6) list_single_2heading_msg_pane_g4

0x0003,

0xfcb4,	// (0x0002ed6f) list_single_2heading_msg_pane_g_ParamLimits

0xfcb4,	// (0x0002ed6f) list_single_2heading_msg_pane_g

0xbb23,	// (0x0002abde) list_single_2heading_msg_pane_t1_ParamLimits

0xbb23,	// (0x0002abde) list_single_2heading_msg_pane_t1

0xbb4b,	// (0x0002ac06) list_single_2heading_msg_pane_t2_ParamLimits

0xbb4b,	// (0x0002ac06) list_single_2heading_msg_pane_t2

0xbbb6,	// (0x0002ac71) list_single_2heading_msg_pane_t3_ParamLimits

0xbbb6,	// (0x0002ac71) list_single_2heading_msg_pane_t3

0x121d,	// (0x000202d8) list_single_2heading_msg_pane_t4_ParamLimits

0x121d,	// (0x000202d8) list_single_2heading_msg_pane_t4

0x0003,

0xfcbd,	// (0x0002ed78) list_single_2heading_msg_pane_t_ParamLimits

0xfcbd,	// (0x0002ed78) list_single_2heading_msg_pane_t

0x2dab,	// (0x00021e66) title_pane_g4_ParamLimits

0x2dab,	// (0x00021e66) title_pane_g4

0x176b,	// (0x00020826) title_pane_stacon_g3_ParamLimits

0x176b,	// (0x00020826) title_pane_stacon_g3

0x8385,	// (0x00027440) list_single_2graphic_im_pane_g4_ParamLimits

0x8385,	// (0x00027440) list_single_2graphic_im_pane_g4

0x626e,	// (0x00025329) popup_side_volume_key_window_cp

0x6a6b,	// (0x00025b26) main_idle_act2_pane_t1

0x1d29,	// (0x00020de4) toolbar_button_pane_g10

0xc1f4,	// (0x0002b2af) popup_toolbar_window_cp1

0x71f0,	// (0x000262ab) clock_nsta_pane_cp_t1

0x71f0,	// (0x000262ab) clock_nsta_pane_cp_t2

0x0001,

0xfac4,	// (0x0002eb7f) clock_nsta_pane_cp_t

0x195d,	// (0x00020a18) navi_navi_volume_pane_cp2_ParamLimits

0x196c,	// (0x00020a27) popup_side_volume_key_window_g1_ParamLimits

0x1978,	// (0x00020a33) popup_side_volume_key_window_g2_ParamLimits

0x1987,	// (0x00020a42) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0002e7e4) popup_side_volume_key_window_g_ParamLimits

0x216b,	// (0x00021226) fep_hwr_aid_pane

0xd2da,	// (0x0002c395) bg_fep_hwr_top_pane_g4_ParamLimits

0x77cd,	// (0x00026888) fep_hwr_top_pane_g1_ParamLimits

0x77df,	// (0x0002689a) fep_hwr_top_pane_g2_ParamLimits

0x2224,	// (0x000212df) fep_hwr_top_pane_g3_ParamLimits

0xfb19,	// (0x0002ebd4) fep_hwr_top_pane_g_ParamLimits

0x2239,	// (0x000212f4) fep_hwr_top_text_pane_ParamLimits

0x6031,	// (0x000250ec) aid_touch_tab_arrow_arrow_2

0x603a,	// (0x000250f5) aid_touch_tab_arrow_left_2

0x217f,	// (0x0002123a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x21b6,	// (0x00021271) fep_hwr_prediction_pane

0x793f,	// (0x000269fa) fep_vkb_prediction_pane

0xdff4,	// (0x0002d0af) fep_vkb_side_pane_g3_ParamLimits

0xdff4,	// (0x0002d0af) fep_vkb_side_pane_g3

0x79ef,	// (0x00026aaa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7e4e,	// (0x00026f09) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7e9e,	// (0x00026f59) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x0002ec7e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8884,	// (0x0002793f) fep_hwr_prediction_pane_g1

0x24c6,	// (0x00021581) fep_hwr_prediction_pane_g2

0x24ce,	// (0x00021589) fep_hwr_prediction_pane_g3

0x24d6,	// (0x00021591) fep_hwr_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002ed81) fep_hwr_prediction_pane_g

0x8884,	// (0x0002793f) fep_vkb_prediction_pane_g1

0x888e,	// (0x00027949) fep_vkb_prediction_pane_g2

0x8896,	// (0x00027951) fep_vkb_prediction_pane_g3

0x889e,	// (0x00027959) fep_vkb_prediction_pane_g4

0x0003,

0xfccf,	// (0x0002ed8a) fep_vkb_prediction_pane_g

0x1ff9,	// (0x000210b4) slider_set_pane_g3

0x200d,	// (0x000210c8) slider_set_pane_g4

0x2025,	// (0x000210e0) slider_set_pane_g5

0x1ff9,	// (0x000210b4) slider_set_pane_g6

0x203b,	// (0x000210f6) slider_set_pane_g7

0x66e4,	// (0x0002579f) slider_form_pane_g3

0x66ed,	// (0x000257a8) slider_form_pane_g4

0x66f5,	// (0x000257b0) slider_form_pane_g5

0x66e4,	// (0x0002579f) slider_form_pane_g6

0xdb40,	// (0x0002cbfb) slider_form_pane_g7

0x6d28,	// (0x00025de3) slider_set_pane_vc_g3

0x6d31,	// (0x00025dec) slider_set_pane_vc_g4

0x6d3a,	// (0x00025df5) slider_set_pane_vc_g5

0x6d28,	// (0x00025de3) slider_set_pane_vc_g6

0x6d43,	// (0x00025dfe) slider_set_pane_vc_g7

0x6d28,	// (0x00025de3) slider_form_pane_vc_g1

0x6d31,	// (0x00025dec) slider_form_pane_vc_g2

0x6d3a,	// (0x00025df5) slider_form_pane_vc_g3

0x6d28,	// (0x00025de3) slider_form_pane_vc_g4

0x6ef6,	// (0x00025fb1) slider_form_pane_vc_g5

0x0004,

0xfa9d,	// (0x0002eb58) slider_form_pane_vc_g

0x2d63,	// (0x00021e1e) main_idle_act3_pane

0x88a6,	// (0x00027961) ai3_links_pane

0xe238,	// (0x0002d2f3) popup_ai3_data_window_ParamLimits

0xe238,	// (0x0002d2f3) popup_ai3_data_window

0x2d63,	// (0x00021e1e) grid_ai3_links_pane

0xe252,	// (0x0002d30d) cell_ai3_links_pane_ParamLimits

0xe252,	// (0x0002d30d) cell_ai3_links_pane

0x88e1,	// (0x0002799c) bg_popup_sub_pane_cp11

0x88ee,	// (0x000279a9) cell_ai3_links_pane_g1

0x2d63,	// (0x00021e1e) bg_popup_sub_pane_cp12

0x8913,	// (0x000279ce) heading_ai3_data_pane

0x891b,	// (0x000279d6) list_ai3_gene_pane

0x8927,	// (0x000279e2) popup_ai3_data_window_g1

0x892f,	// (0x000279ea) heading_ai3_data_pane_g1

0x8937,	// (0x000279f2) heading_ai3_data_pane_t1

0x8945,	// (0x00027a00) list_double_ai3_gene_pane_ParamLimits

0x8945,	// (0x00027a00) list_double_ai3_gene_pane

0x8952,	// (0x00027a0d) list_single_ai3_gene_pane_ParamLimits

0x8952,	// (0x00027a0d) list_single_ai3_gene_pane

0x7722,	// (0x000267dd) list_highlight_pane_cp7_ParamLimits

0x7722,	// (0x000267dd) list_highlight_pane_cp7

0x895f,	// (0x00027a1a) list_single_a13_gene_pane_t1_ParamLimits

0x895f,	// (0x00027a1a) list_single_a13_gene_pane_t1

0x8976,	// (0x00027a31) list_single_ai3_gene_pane_g1

0x897f,	// (0x00027a3a) list_single_ai3_gene_pane_g2

0x0001,

0xfcd8,	// (0x0002ed93) list_single_ai3_gene_pane_g

0x8987,	// (0x00027a42) list_double_ai3_gene_pane_g1_ParamLimits

0x8987,	// (0x00027a42) list_double_ai3_gene_pane_g1

0x8993,	// (0x00027a4e) list_double_ai3_gene_pane_t1_ParamLimits

0x8993,	// (0x00027a4e) list_double_ai3_gene_pane_t1

0x89af,	// (0x00027a6a) list_double_ai3_gene_pane_t2_ParamLimits

0x89af,	// (0x00027a6a) list_double_ai3_gene_pane_t2

0x89c5,	// (0x00027a80) list_double_ai3_gene_pane_t3_ParamLimits

0x89c5,	// (0x00027a80) list_double_ai3_gene_pane_t3

0x0002,

0xfcdd,	// (0x0002ed98) list_double_ai3_gene_pane_t_ParamLimits

0xfcdd,	// (0x0002ed98) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x114e,	// (0x00020209) aid_size_min_col_2

0xe222,	// (0x0002d2dd) aid_size_min_msg_ParamLimits

0xe222,	// (0x0002d2dd) aid_size_min_msg

0xe008,	// (0x0002d0c3) fep_vkb_top_text_pane_g2_ParamLimits

0xe008,	// (0x0002d0c3) fep_vkb_top_text_pane_g2

0x0001,

0xfb49,	// (0x0002ec04) fep_vkb_top_text_pane_g_ParamLimits

0xfb49,	// (0x0002ec04) fep_vkb_top_text_pane_g

0x2d63,	// (0x00021e1e) main_hc_apps_shell_pane

0x89e2,	// (0x00027a9d) grid_hc_apps_pane_ParamLimits

0x89e2,	// (0x00027a9d) grid_hc_apps_pane

0x89f1,	// (0x00027aac) list_hc_apps_pane

0x89f9,	// (0x00027ab4) scroll_pane_cp37_ParamLimits

0x89f9,	// (0x00027ab4) scroll_pane_cp37

0xe26c,	// (0x0002d327) cell_hc_apps_pane_ParamLimits

0xe26c,	// (0x0002d327) cell_hc_apps_pane

0xe32a,	// (0x0002d3e5) cell_hc_apps_pane_g1_ParamLimits

0xe32a,	// (0x0002d3e5) cell_hc_apps_pane_g1

0x8ae4,	// (0x00027b9f) cell_hc_apps_pane_g2_ParamLimits

0x8ae4,	// (0x00027b9f) cell_hc_apps_pane_g2

0x8b00,	// (0x00027bbb) cell_hc_apps_pane_g3_ParamLimits

0x8b00,	// (0x00027bbb) cell_hc_apps_pane_g3

0x0002,

0xfce4,	// (0x0002ed9f) cell_hc_apps_pane_g_ParamLimits

0xfce4,	// (0x0002ed9f) cell_hc_apps_pane_g

0xe357,	// (0x0002d412) cell_hc_apps_pane_t1_ParamLimits

0xe357,	// (0x0002d412) cell_hc_apps_pane_t1

0x30e0,	// (0x0002219b) grid_highlight_pane_cp10_ParamLimits

0x30e0,	// (0x0002219b) grid_highlight_pane_cp10

0xe395,	// (0x0002d450) list_single_hc_apps_pane_ParamLimits

0xe395,	// (0x0002d450) list_single_hc_apps_pane

0xe3c2,	// (0x0002d47d) list_single_hc_apps_pane_g1

0xbc24,	// (0x0002acdf) list_single_hc_apps_pane_g2

0x0001,

0xfceb,	// (0x0002eda6) list_single_hc_apps_pane_g

0xbc3d,	// (0x0002acf8) list_single_hc_apps_pane_g2_copy1

0xbc59,	// (0x0002ad14) list_single_hc_apps_pane_t1

0x2e57,	// (0x00021f12) bg_set_opt_pane_cp_ParamLimits

0x1692,	// (0x0002074d) setting_slider_pane_t1_ParamLimits

0x16ab,	// (0x00020766) setting_slider_pane_t2_ParamLimits

0x16c5,	// (0x00020780) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0002e635) setting_slider_pane_t_ParamLimits

0x16dd,	// (0x00020798) slider_set_pane_ParamLimits

0x1c05,	// (0x00020cc0) control_pane_g5_ParamLimits

0x1c05,	// (0x00020cc0) control_pane_g5

0x6533,	// (0x000255ee) slider_set_pane_g1_ParamLimits

0x1fed,	// (0x000210a8) slider_set_pane_g2_ParamLimits

0x1ff9,	// (0x000210b4) slider_set_pane_g3_ParamLimits

0x200d,	// (0x000210c8) slider_set_pane_g4_ParamLimits

0x2025,	// (0x000210e0) slider_set_pane_g5_ParamLimits

0x1ff9,	// (0x000210b4) slider_set_pane_g6_ParamLimits

0x203b,	// (0x000210f6) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0002ea2b) slider_set_pane_g_ParamLimits

0x41a8,	// (0x00023263) navi_icon_text_pane_ParamLimits

0xd3ae,	// (0x0002c469) aid_fill_nsta_2_ParamLimits

0xd3e2,	// (0x0002c49d) aid_touch_tab_arrow_left_ParamLimits

0xd3f8,	// (0x0002c4b3) aid_touch_tab_arrow_right_ParamLimits

0xd493,	// (0x0002c54e) clock_nsta_pane_ParamLimits

0xd91c,	// (0x0002c9d7) navi_icon_pane_g1_ParamLimits

0xd928,	// (0x0002c9e3) navi_text_pane_t1_ParamLimits

0xddd2,	// (0x0002ce8d) navi_icon_text_pane_g1_ParamLimits

0xddde,	// (0x0002ce99) navi_icon_text_pane_t1_ParamLimits

0xe3c2,	// (0x0002d47d) list_single_hc_apps_pane_g1_ParamLimits

0xbc24,	// (0x0002acdf) list_single_hc_apps_pane_g2_ParamLimits

0xfceb,	// (0x0002eda6) list_single_hc_apps_pane_g_ParamLimits

0xbc3d,	// (0x0002acf8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbc59,	// (0x0002ad14) list_single_hc_apps_pane_t1_ParamLimits

0xbdf3,	// (0x0002aeae) popup_toolbar2_fixed_window_ParamLimits

0xbdf3,	// (0x0002aeae) popup_toolbar2_fixed_window

0xd317,	// (0x0002c3d2) popup_toolbar2_float_window

0x2d63,	// (0x00021e1e) bg_popup_sub_pane_cp27

0x8bd7,	// (0x00027c92) grid_toolbar2_float_pane

0x2d63,	// (0x00021e1e) bg_popup_sub_pane_cp26

0x8bd7,	// (0x00027c92) grid_toolbar2_fixed_pane

0xe3db,	// (0x0002d496) cell_toolbar2_fixed_pane_ParamLimits

0xe3db,	// (0x0002d496) cell_toolbar2_fixed_pane

0xe3f6,	// (0x0002d4b1) cell_toolbar2_fixed_pane_g1

0x8bf8,	// (0x00027cb3) toolbar2_fixed_button_pane

0x5130,	// (0x000241eb) toolbar2_fixed_button_pane_g1

0x5138,	// (0x000241f3) toolbar2_fixed_button_pane_g2

0x5140,	// (0x000241fb) toolbar2_fixed_button_pane_g3

0x5148,	// (0x00024203) toolbar2_fixed_button_pane_g4

0x5150,	// (0x0002420b) toolbar2_fixed_button_pane_g5

0x5158,	// (0x00024213) toolbar2_fixed_button_pane_g6

0x5160,	// (0x0002421b) toolbar2_fixed_button_pane_g7

0x5168,	// (0x00024223) toolbar2_fixed_button_pane_g8

0x5170,	// (0x0002422b) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0002e92d) toolbar2_fixed_button_pane_g

0x8c00,	// (0x00027cbb) cell_toolbar2_float_pane_ParamLimits

0x8c00,	// (0x00027cbb) cell_toolbar2_float_pane

0x8c11,	// (0x00027ccc) cell_toolbar2_float_pane_g1

0x8bf8,	// (0x00027cb3) toolbar2_fixed_button_pane_cp

0xdee2,	// (0x0002cf9d) fep_vkb_accented_list_pane_ParamLimits

0xdee2,	// (0x0002cf9d) fep_vkb_accented_list_pane

0x2387,	// (0x00021442) bg_popup_fep_shadow_pane_g9

0x4328,	// (0x000233e3) bg_popup_fep_shadow_pane_cp3

0x3824,	// (0x000228df) list_accented_list_pane

0x8c1a,	// (0x00027cd5) list_single_accented_list_pane_ParamLimits

0x8c1a,	// (0x00027cd5) list_single_accented_list_pane

0x4328,	// (0x000233e3) list_highlight_pane_cp10

0x8c2b,	// (0x00027ce6) list_single_accented_list_pane_t1

0xd219,	// (0x0002c2d4) popup_slider_window_ParamLimits

0xd219,	// (0x0002c2d4) popup_slider_window

0x8867,	// (0x00027922) aid_indentation_list_msg

0xe4ef,	// (0x0002d5aa) bg_popup_window_pane_cp19

0x8d4f,	// (0x00027e0a) popup_slider_window_g1

0x8d6b,	// (0x00027e26) popup_slider_window_g2

0x8d87,	// (0x00027e42) popup_slider_window_g3

0x0005,

0xfcf0,	// (0x0002edab) popup_slider_window_g

0x8de3,	// (0x00027e9e) popup_slider_window_t1

0x8e57,	// (0x00027f12) small_volume_slider_vertical_pane

0x775d,	// (0x00026818) small_volume_slider_vertical_pane_g1

0x775d,	// (0x00026818) small_volume_slider_vertical_pane_g2

0x8e73,	// (0x00027f2e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd02,	// (0x0002edbd) small_volume_slider_vertical_pane_g

0xbd61,	// (0x0002ae1c) area_side_right_pane_ParamLimits

0xbd61,	// (0x0002ae1c) area_side_right_pane

0xc54f,	// (0x0002b60a) aid_size_side_button_ParamLimits

0xc54f,	// (0x0002b60a) aid_size_side_button

0xc568,	// (0x0002b623) grid_sctrl_middle_pane_ParamLimits

0xc568,	// (0x0002b623) grid_sctrl_middle_pane

0x2512,	// (0x000215cd) sctrl_sk_bottom_pane

0x2523,	// (0x000215de) sctrl_sk_top_pane

0x2535,	// (0x000215f0) aid_touch_sctrl_top

0x30e0,	// (0x0002219b) bg_sctrl_sk_pane_ParamLimits

0x30e0,	// (0x0002219b) bg_sctrl_sk_pane

0x2542,	// (0x000215fd) sctrl_sk_top_pane_g1

0x254f,	// (0x0002160a) sctrl_sk_top_pane_t1

0x2535,	// (0x000215f0) aid_touch_sctrl_bottom

0x30e0,	// (0x0002219b) bg_sctrl_sk_pane_cp_ParamLimits

0x30e0,	// (0x0002219b) bg_sctrl_sk_pane_cp

0x256a,	// (0x00021625) sctrl_sk_bottom_pane_g1

0x254f,	// (0x0002160a) sctrl_sk_bottom_pane_t1

0xc582,	// (0x0002b63d) cell_sctrl_middle_pane_ParamLimits

0xc582,	// (0x0002b63d) cell_sctrl_middle_pane

0xc593,	// (0x0002b64e) aid_touch_sctrl_middle_ParamLimits

0xc593,	// (0x0002b64e) aid_touch_sctrl_middle

0xc5a0,	// (0x0002b65b) bg_sctrl_middle_pane_ParamLimits

0xc5a0,	// (0x0002b65b) bg_sctrl_middle_pane

0x8efb,	// (0x00027fb6) cell_sctrl_middle_pane_g1_ParamLimits

0x8efb,	// (0x00027fb6) cell_sctrl_middle_pane_g1

0xc5ae,	// (0x0002b669) cell_sctrl_middle_pane_g2_ParamLimits

0xc5ae,	// (0x0002b669) cell_sctrl_middle_pane_g2

0x0001,

0xfd0e,	// (0x0002edc9) cell_sctrl_middle_pane_g_ParamLimits

0xfd0e,	// (0x0002edc9) cell_sctrl_middle_pane_g

0x5130,	// (0x000241eb) bg_sctrl_middle_pane_g1

0x5138,	// (0x000241f3) bg_sctrl_middle_pane_g2

0x5140,	// (0x000241fb) bg_sctrl_middle_pane_g3

0x5148,	// (0x00024203) bg_sctrl_middle_pane_g4

0x5150,	// (0x0002420b) bg_sctrl_middle_pane_g5

0x5158,	// (0x00024213) bg_sctrl_middle_pane_g6

0x5160,	// (0x0002421b) bg_sctrl_middle_pane_g7

0x5168,	// (0x00024223) bg_sctrl_middle_pane_g8

0x0007,

0xfd13,	// (0x0002edce) bg_sctrl_middle_pane_g

0x5170,	// (0x0002422b) bg_sctrl_middle_pane_g8_copy1

0x5130,	// (0x000241eb) bg_sctrl_sk_pane_g1

0x5138,	// (0x000241f3) bg_sctrl_sk_pane_g2

0x5140,	// (0x000241fb) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0002e92d) bg_sctrl_sk_pane_g

0x35f2,	// (0x000226ad) aid_size_touch_scroll_bar

0x5148,	// (0x00024203) bg_sctrl_sk_pane_g4

0x5150,	// (0x0002420b) bg_sctrl_sk_pane_g5

0x5158,	// (0x00024213) bg_sctrl_sk_pane_g6

0x5160,	// (0x0002421b) bg_sctrl_sk_pane_g7

0x5168,	// (0x00024223) bg_sctrl_sk_pane_g8

0x5170,	// (0x0002422b) bg_sctrl_sk_pane_g9

0x472e,	// (0x000237e9) popup_fep_china_hwr2_fs_candidate_window

0xcd5d,	// (0x0002be18) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcd5d,	// (0x0002be18) popup_fep_china_hwr2_fs_control_window

0x79ef,	// (0x00026aaa) sctrl_sk_top_pane_g2

0x0001,

0xfd09,	// (0x0002edc4) sctrl_sk_top_pane_g

0xe5a7,	// (0x0002d662) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe5a7,	// (0x0002d662) aid_fep_china_hwr2_fs_cell

0xe5bb,	// (0x0002d676) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe5bb,	// (0x0002d676) bg_popup_fep_shadow_pane_cp4

0xe5d2,	// (0x0002d68d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe5d2,	// (0x0002d68d) bg_popup_fep_shadow_pane_cp5

0xe5e4,	// (0x0002d69f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe5e4,	// (0x0002d69f) popup_fep_china_hwr2_fs_control_bar_grid

0xe5f8,	// (0x0002d6b3) popup_fep_china_hwr2_fs_control_funtion_grid

0x8ecf,	// (0x00027f8a) aid_fep_china_hwr2_fs_candi_cell

0x2d63,	// (0x00021e1e) bg_popup_fep_shadow_pane_cp6

0x8ed9,	// (0x00027f94) popup_fep_china_hwr2_fs_candidate_grid

0xe600,	// (0x0002d6bb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe600,	// (0x0002d6bb) cell_fep_china_hwr2_fs_funtion_grid

0x775d,	// (0x00026818) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8efb,	// (0x00027fb6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8efb,	// (0x00027fb6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8f09,	// (0x00027fc4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8f09,	// (0x00027fc4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd24,	// (0x0002eddf) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd24,	// (0x0002eddf) cell_fep_china_hwr2_fs_funtion_grid_g

0xe618,	// (0x0002d6d3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe618,	// (0x0002d6d3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe62d,	// (0x0002d6e8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe62d,	// (0x0002d6e8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x00ac,	// (0x0001f167) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x00ac,	// (0x0001f167) cell_fep_china_hwr2_fs_funtion_grid_t

0x8f50,	// (0x0002800b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8f58,	// (0x00028013) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8f60,	// (0x0002801b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x0002ede4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8f68,	// (0x00028023) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8f68,	// (0x00028023) cell_fep_china_hwr2_fs_candidate_grid

0x8f81,	// (0x0002803c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8f89,	// (0x00028044) popup_fep_china_hwr2_fs_candidate_grid_g21

0x775d,	// (0x00026818) cell_fep_china_hwr2_fs_candidate_grid_g1

0x775d,	// (0x00026818) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4e,	// (0x0002ec09) cell_fep_china_hwr2_fs_candidate_grid_g

0x8f91,	// (0x0002804c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4d2d,	// (0x00023de8) clock_nsta_pane_cp_24_ParamLimits

0x4d2d,	// (0x00023de8) clock_nsta_pane_cp_24

0x4dab,	// (0x00023e66) indicator_nsta_pane_cp_24_ParamLimits

0x4dab,	// (0x00023e66) indicator_nsta_pane_cp_24

0x5e89,	// (0x00024f44) heading_pane_g1

0x0001,

0xf8d7,	// (0x0002e992) heading_pane_g

0x68b4,	// (0x0002596f) grid_sct_catagory_button_pane

0x68e4,	// (0x0002599f) scroll_pane_cp5_ParamLimits

0x734e,	// (0x00026409) button_value_adjust_pane_cp5_ParamLimits

0x734e,	// (0x00026409) button_value_adjust_pane_cp5

0x742d,	// (0x000264e8) form2_midp_time_pane_ParamLimits

0x8f9f,	// (0x0002805a) cell_sct_catagory_button_pane_ParamLimits

0x8f9f,	// (0x0002805a) cell_sct_catagory_button_pane

0x7722,	// (0x000267dd) bg_button_pane_cp01_ParamLimits

0x7722,	// (0x000267dd) bg_button_pane_cp01

0x775d,	// (0x00026818) cell_sct_catagory_button_pane_g1

0xd292,	// (0x0002c34d) popup_tb_extension_window

0xe649,	// (0x0002d704) aid_size_cell_ext_ParamLimits

0xe649,	// (0x0002d704) aid_size_cell_ext

0x3434,	// (0x000224ef) bg_tb_trans_pane_cp1_ParamLimits

0x3434,	// (0x000224ef) bg_tb_trans_pane_cp1

0xe66f,	// (0x0002d72a) grid_tb_ext_pane_ParamLimits

0xe66f,	// (0x0002d72a) grid_tb_ext_pane

0xe6aa,	// (0x0002d765) cell_tb_ext_pane_ParamLimits

0xe6aa,	// (0x0002d765) cell_tb_ext_pane

0xe6d2,	// (0x0002d78d) cell_tb_ext_pane_g1_ParamLimits

0xe6d2,	// (0x0002d78d) cell_tb_ext_pane_g1

0x9033,	// (0x000280ee) cell_tb_ext_pane_t1

0x30e0,	// (0x0002219b) list_highlight_pane_cp11_ParamLimits

0x30e0,	// (0x0002219b) list_highlight_pane_cp11

0x15c5,	// (0x00020680) popup_uni_indicator_window_ParamLimits

0x15c5,	// (0x00020680) popup_uni_indicator_window

0x36c3,	// (0x0002277e) bg_popup_sub_pane_cp14

0x904e,	// (0x00028109) list_uniindi_pane

0x905a,	// (0x00028115) uniindi_top_pane

0x30e0,	// (0x0002219b) bg_uniindi_top_pane

0x9079,	// (0x00028134) uniindi_top_pane_g1

0x908f,	// (0x0002814a) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x0002edeb) uniindi_top_pane_g

0x90b9,	// (0x00028174) uniindi_top_pane_t1

0x90e3,	// (0x0002819e) list_single_uniindi_pane_ParamLimits

0x90e3,	// (0x0002819e) list_single_uniindi_pane

0x775d,	// (0x00026818) bg_uniindi_top_pane_g1

0x90f6,	// (0x000281b1) list_single_uniindi_pane_g1

0x9109,	// (0x000281c4) list_single_uniindi_pane_t1

0x2d63,	// (0x00021e1e) control_bg_pane

0x912e,	// (0x000281e9) bg_sctrl_sk_pane_cp1

0x9137,	// (0x000281f2) bg_sctrl_sk_pane_cp2

0x9140,	// (0x000281fb) control_bg_pane_g1

0x9149,	// (0x00028204) control_bg_pane_g2

0x0001,

0xfd39,	// (0x0002edf4) control_bg_pane_g

0x7182,	// (0x0002623d) cell_indicator_nsta_pane_g1_ParamLimits

0xdd39,	// (0x0002cdf4) cell_indicator_nsta_pane_g2_ParamLimits

0xfab2,	// (0x0002eb6d) cell_indicator_nsta_pane_g_ParamLimits

0x0f0b,	// (0x0001ffc6) form2_midp_time_pane_t1_ParamLimits

0x7e6f,	// (0x00026f2a) main_idle_act4_pane_ParamLimits

0x7e6f,	// (0x00026f2a) main_idle_act4_pane

0xd292,	// (0x0002c34d) popup_tb_extension_window_ParamLimits

0xe691,	// (0x0002d74c) tb_ext_find_pane_ParamLimits

0xe691,	// (0x0002d74c) tb_ext_find_pane

0x9152,	// (0x0002820d) ai_gene_pane_1_cp1

0x446d,	// (0x00023528) ai_gene_pane_2_cp1

0x915a,	// (0x00028215) list_single_idle_plugin_calendar_pane

0x9163,	// (0x0002821e) list_single_idle_plugin_notification_pane

0x916c,	// (0x00028227) list_single_idle_plugin_player_pane

0xe6ef,	// (0x0002d7aa) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6ef,	// (0x0002d7aa) list_single_idle_plugin_shortcut_pane

0xe717,	// (0x0002d7d2) main_idle_act4_pane_t1

0xe72d,	// (0x0002d7e8) main_idle_act4_pane_t2

0x0001,

0x00c6,	// (0x0001f181) main_idle_act4_pane_t

0xe743,	// (0x0002d7fe) middle_sk_idle_act4_pane_ParamLimits

0xe743,	// (0x0002d7fe) middle_sk_idle_act4_pane

0xe75f,	// (0x0002d81a) popup_clock_digital_analogue_window_cp2

0xe787,	// (0x0002d842) shortcut_wheel_idle_act4_pane_ParamLimits

0xe787,	// (0x0002d842) shortcut_wheel_idle_act4_pane

0x775d,	// (0x00026818) shortcut_wheel_idle_act4_pane_g1

0x775d,	// (0x00026818) shortcut_wheel_idle_act4_pane_g2

0x775d,	// (0x00026818) shortcut_wheel_idle_act4_pane_g3

0x775d,	// (0x00026818) shortcut_wheel_idle_act4_pane_g4

0x775d,	// (0x00026818) shortcut_wheel_idle_act4_pane_g5

0x91ff,	// (0x000282ba) shortcut_wheel_idle_act4_pane_g6

0x9207,	// (0x000282c2) shortcut_wheel_idle_act4_pane_g7

0x920f,	// (0x000282ca) shortcut_wheel_idle_act4_pane_g8

0x9217,	// (0x000282d2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3e,	// (0x0002edf9) shortcut_wheel_idle_act4_pane_g

0xd2da,	// (0x0002c395) middle_sk_idle_act4_pane_g1_ParamLimits

0xd2da,	// (0x0002c395) middle_sk_idle_act4_pane_g1

0xe804,	// (0x0002d8bf) middle_sk_idle_act4_pane_g2_ParamLimits

0xe804,	// (0x0002d8bf) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x0002ee17) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x0002ee17) middle_sk_idle_act4_pane_g

0xe81c,	// (0x0002d8d7) middle_sk_idle_act4_pane_t1_ParamLimits

0xe81c,	// (0x0002d8d7) middle_sk_idle_act4_pane_t1

0xe84b,	// (0x0002d906) grid_ai_shortcut_pane_ParamLimits

0xe84b,	// (0x0002d906) grid_ai_shortcut_pane

0xe868,	// (0x0002d923) list_highlight_pane_cp16_ParamLimits

0xe868,	// (0x0002d923) list_highlight_pane_cp16

0xe875,	// (0x0002d930) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe875,	// (0x0002d930) list_single_idle_plugin_shortcut_pane_g1

0xe881,	// (0x0002d93c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe881,	// (0x0002d93c) list_single_idle_plugin_shortcut_pane_g2

0xe89d,	// (0x0002d958) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe89d,	// (0x0002d958) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x00f3,	// (0x0001f1ae) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x00f3,	// (0x0001f1ae) list_single_idle_plugin_shortcut_pane_g

0xe8b2,	// (0x0002d96d) cell_ai_shortcut_pane_ParamLimits

0xe8b2,	// (0x0002d96d) cell_ai_shortcut_pane

0xe8c8,	// (0x0002d983) cell_ai_shortcut_pane_g1_ParamLimits

0xe8c8,	// (0x0002d983) cell_ai_shortcut_pane_g1

0x9152,	// (0x0002820d) ai_gene_pane_1_cp2

0x9347,	// (0x00028402) ai_gene_pane_2_cp2

0x934f,	// (0x0002840a) list_highlight_pane_cp15

0x9358,	// (0x00028413) list_single_idle_plugin_calendar_pane_g1

0x934f,	// (0x0002840a) list_highlight_pane_cp17

0x9360,	// (0x0002841b) list_single_idle_plugin_calendar_pane_g1_copy1

0x9368,	// (0x00028423) list_single_idle_plugin_player_pane_g1

0x6b0d,	// (0x00025bc8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0002ee1c) list_single_idle_plugin_player_pane_g

0x9370,	// (0x0002842b) list_single_idle_plugin_player_pane_t1

0x937e,	// (0x00028439) list_single_idle_plugin_player_pane_t2

0x938c,	// (0x00028447) list_single_idle_plugin_player_pane_t3

0x939a,	// (0x00028455) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0002ee21) list_single_idle_plugin_player_pane_t

0x93a8,	// (0x00028463) wait_bar_pane_cp15

0x93b0,	// (0x0002846b) grid_ai_notification_pane

0x6b0d,	// (0x00025bc8) list_single_idle_plugin_notification_pane_g1

0xe8ea,	// (0x0002d9a5) cell_ai_notification_pane_ParamLimits

0xe8ea,	// (0x0002d9a5) cell_ai_notification_pane

0x93c6,	// (0x00028481) cell_ai_notification_pane_g1

0x93ce,	// (0x00028489) cell_ai_notification_pane_t1

0xe8f7,	// (0x0002d9b2) tb_ext_find_button_pane

0xe8ff,	// (0x0002d9ba) tb_ext_find_pane_g1

0xe907,	// (0x0002d9c2) tb_ext_find_pane_t1

0x3d4b,	// (0x00022e06) tb_ext_find_button_pane_g1

0x93fa,	// (0x000284b5) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0002ee2a) tb_ext_find_button_pane_g

0xe717,	// (0x0002d7d2) main_idle_act4_pane_t1_ParamLimits

0xe72d,	// (0x0002d7e8) main_idle_act4_pane_t2_ParamLimits

0x00c6,	// (0x0001f181) main_idle_act4_pane_t_ParamLimits

0xe75f,	// (0x0002d81a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe777,	// (0x0002d832) sat_plugin_idle_act4_pane_ParamLimits

0xe777,	// (0x0002d832) sat_plugin_idle_act4_pane

0xe915,	// (0x0002d9d0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe915,	// (0x0002d9d0) sat_plugin_idle_act4_pane_t1

0xe92d,	// (0x0002d9e8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe92d,	// (0x0002d9e8) sat_plugin_idle_act4_pane_t2

0xe945,	// (0x0002da00) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe945,	// (0x0002da00) sat_plugin_idle_act4_pane_t3

0xe95d,	// (0x0002da18) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe95d,	// (0x0002da18) sat_plugin_idle_act4_pane_t4

0x0003,

0x010d,	// (0x0001f1c8) sat_plugin_idle_act4_pane_t_ParamLimits

0x010d,	// (0x0001f1c8) sat_plugin_idle_act4_pane_t

0x1500,	// (0x000205bb) popup_battery_window_ParamLimits

0x1500,	// (0x000205bb) popup_battery_window

0x30e0,	// (0x0002219b) bg_popup_sub_pane_cp25_ParamLimits

0x30e0,	// (0x0002219b) bg_popup_sub_pane_cp25

0x944f,	// (0x0002850a) popup_battery_window_g1_ParamLimits

0x944f,	// (0x0002850a) popup_battery_window_g1

0x945b,	// (0x00028516) popup_battery_window_t1_ParamLimits

0x945b,	// (0x00028516) popup_battery_window_t1

0x946d,	// (0x00028528) popup_battery_window_t2_ParamLimits

0x946d,	// (0x00028528) popup_battery_window_t2

0x0001,

0xfd74,	// (0x0002ee2f) popup_battery_window_t_ParamLimits

0xfd74,	// (0x0002ee2f) popup_battery_window_t

0xcbdc,	// (0x0002bc97) midp_canvas_pane_ParamLimits

0xcc37,	// (0x0002bcf2) midp_keypad_pane_ParamLimits

0xcc37,	// (0x0002bcf2) midp_keypad_pane

0x468e,	// (0x00023749) main_midp_pane_ParamLimits

0x720e,	// (0x000262c9) signal_pane_g2_cp_ParamLimits

0xe975,	// (0x0002da30) aid_size_cell_midp_keypad_ParamLimits

0xe975,	// (0x0002da30) aid_size_cell_midp_keypad

0xe993,	// (0x0002da4e) midp_keyp_game_grid_pane_ParamLimits

0xe993,	// (0x0002da4e) midp_keyp_game_grid_pane

0xe9ba,	// (0x0002da75) midp_keyp_rocker_pane_ParamLimits

0xe9ba,	// (0x0002da75) midp_keyp_rocker_pane

0xea13,	// (0x0002dace) midp_keyp_sk_left_pane_ParamLimits

0xea13,	// (0x0002dace) midp_keyp_sk_left_pane

0xea67,	// (0x0002db22) midp_keyp_sk_right_pane_ParamLimits

0xea67,	// (0x0002db22) midp_keyp_sk_right_pane

0x2d63,	// (0x00021e1e) bg_button_pane_cp03

0xeabb,	// (0x0002db76) midp_keyp_sk_left_pane_g1

0x2d63,	// (0x00021e1e) bg_button_pane_cp04

0xeabb,	// (0x0002db76) midp_keyp_sk_right_pane_g1

0x775d,	// (0x00026818) midp_keyp_rocker_pane_g1

0xeac4,	// (0x0002db7f) keyp_game_cell_pane_ParamLimits

0xeac4,	// (0x0002db7f) keyp_game_cell_pane

0x2d63,	// (0x00021e1e) bg_button_pane_cp02

0xeae8,	// (0x0002dba3) keyp_game_cell_pane_g1

0xbda3,	// (0x0002ae5e) popup_fep_vkb2_window_ParamLimits

0xbda3,	// (0x0002ae5e) popup_fep_vkb2_window

0xc5ba,	// (0x0002b675) aid_size_cell_vkb2_ParamLimits

0xc5ba,	// (0x0002b675) aid_size_cell_vkb2

0xc5f0,	// (0x0002b6ab) popup_fep_vkb2_window_g1_ParamLimits

0xc5f0,	// (0x0002b6ab) popup_fep_vkb2_window_g1

0xc640,	// (0x0002b6fb) vkb2_area_bottom_pane_ParamLimits

0xc640,	// (0x0002b6fb) vkb2_area_bottom_pane

0xc694,	// (0x0002b74f) vkb2_area_keypad_pane_ParamLimits

0xc694,	// (0x0002b74f) vkb2_area_keypad_pane

0xc6dc,	// (0x0002b797) vkb2_area_top_pane_ParamLimits

0xc6dc,	// (0x0002b797) vkb2_area_top_pane

0xc762,	// (0x0002b81d) vkb2_top_entry_pane_ParamLimits

0xc762,	// (0x0002b81d) vkb2_top_entry_pane

0xc78f,	// (0x0002b84a) vkb2_top_grid_left_pane_ParamLimits

0xc78f,	// (0x0002b84a) vkb2_top_grid_left_pane

0xc7af,	// (0x0002b86a) vkb2_top_grid_right_pane_ParamLimits

0xc7af,	// (0x0002b86a) vkb2_top_grid_right_pane

0x27cb,	// (0x00021886) vkb2_cell_keypad_pane_ParamLimits

0x27cb,	// (0x00021886) vkb2_cell_keypad_pane

0xc7f5,	// (0x0002b8b0) vkb2_area_bottom_grid_pane_ParamLimits

0xc7f5,	// (0x0002b8b0) vkb2_area_bottom_grid_pane

0xc81f,	// (0x0002b8da) vkb2_area_bottom_pane_g1_ParamLimits

0xc81f,	// (0x0002b8da) vkb2_area_bottom_pane_g1

0xc845,	// (0x0002b900) vkb2_area_bottom_pane_g2_ParamLimits

0xc845,	// (0x0002b900) vkb2_area_bottom_pane_g2

0xc876,	// (0x0002b931) vkb2_area_bottom_pane_g3_ParamLimits

0xc876,	// (0x0002b931) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x0002ee34) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x0002ee34) vkb2_area_bottom_pane_g

0x2975,	// (0x00021a30) vkb2_top_cell_left_pane_ParamLimits

0x2975,	// (0x00021a30) vkb2_top_cell_left_pane

0xeaf1,	// (0x0002dbac) vkb2_top_entry_pane_g1_ParamLimits

0xeaf1,	// (0x0002dbac) vkb2_top_entry_pane_g1

0xeaff,	// (0x0002dbba) vkb2_top_entry_pane_t1_ParamLimits

0xeaff,	// (0x0002dbba) vkb2_top_entry_pane_t1

0x961e,	// (0x000286d9) vkb2_top_entry_pane_t2_ParamLimits

0x961e,	// (0x000286d9) vkb2_top_entry_pane_t2

0x9650,	// (0x0002870b) vkb2_top_entry_pane_t3_ParamLimits

0x9650,	// (0x0002870b) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x0002ee3b) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x0002ee3b) vkb2_top_entry_pane_t

0xc8e0,	// (0x0002b99b) vkb2_top_grid_right_pane_g1_ParamLimits

0xc8e0,	// (0x0002b99b) vkb2_top_grid_right_pane_g1

0x29d8,	// (0x00021a93) vkb2_top_grid_right_pane_g2_ParamLimits

0x29d8,	// (0x00021a93) vkb2_top_grid_right_pane_g2

0x29f0,	// (0x00021aab) vkb2_top_grid_right_pane_g3_ParamLimits

0x29f0,	// (0x00021aab) vkb2_top_grid_right_pane_g3

0xc8f6,	// (0x0002b9b1) vkb2_top_grid_right_pane_g4_ParamLimits

0xc8f6,	// (0x0002b9b1) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x0002ee42) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x0002ee42) vkb2_top_grid_right_pane_g

0x2a1e,	// (0x00021ad9) vkb2_top_cell_left_pane_g1

0x2a35,	// (0x00021af0) vkb2_cell_keypad_pane_g1_ParamLimits

0x2a35,	// (0x00021af0) vkb2_cell_keypad_pane_g1

0x9674,	// (0x0002872f) vkb2_cell_keypad_pane_t1_ParamLimits

0x9674,	// (0x0002872f) vkb2_cell_keypad_pane_t1

0x2a43,	// (0x00021afe) vkb2_cell_bottom_grid_pane_ParamLimits

0x2a43,	// (0x00021afe) vkb2_cell_bottom_grid_pane

0x2a7c,	// (0x00021b37) vkb2_cell_bottom_grid_pane_g1

0xe7a8,	// (0x0002d863) aid_call2_pane_cp02

0xe7b0,	// (0x0002d86b) aid_call_pane_cp02

0xe7b8,	// (0x0002d873) clock_digital_number_pane_cp10

0xe7c0,	// (0x0002d87b) clock_digital_number_pane_cp11

0xe7c8,	// (0x0002d883) clock_digital_number_pane_cp12

0xe7d0,	// (0x0002d88b) clock_digital_number_pane_cp13

0xe7d8,	// (0x0002d893) clock_digital_separator_pane_cp10

0x3d4b,	// (0x00022e06) popup_clock_digital_analogue_window_cp2_g1

0x3d4b,	// (0x00022e06) popup_clock_digital_analogue_window_cp2_g2

0xe7e0,	// (0x0002d89b) popup_clock_digital_analogue_window_cp2_g3

0x3d4b,	// (0x00022e06) popup_clock_digital_analogue_window_cp2_g4

0xe7e0,	// (0x0002d89b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd51,	// (0x0002ee0c) popup_clock_digital_analogue_window_cp2_g

0xe7e8,	// (0x0002d8a3) popup_clock_digital_analogue_window_cp2_t1

0xe7f6,	// (0x0002d8b1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x00e9,	// (0x0001f1a4) popup_clock_digital_analogue_window_cp2_t

0x775d,	// (0x00026818) clock_digital_number_pane_cp10_g1

0x775d,	// (0x00026818) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0002ec09) clock_digital_number_pane_cp10_g

0x775d,	// (0x00026818) clock_digital_separator_pane_cp10_g1

0x775d,	// (0x00026818) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0002ec09) clock_digital_separator_pane_cp10_g

0x909b,	// (0x00028156) uniindi_top_pane_g3

0x90ac,	// (0x00028167) uniindi_top_pane_g4

0x2856,	// (0x00021911) vkb2_row_keypad_pane_ParamLimits

0x2856,	// (0x00021911) vkb2_row_keypad_pane

0x2a98,	// (0x00021b53) vkb2_cell_t_keypad_pane_ParamLimits

0x2a98,	// (0x00021b53) vkb2_cell_t_keypad_pane

0x2aa8,	// (0x00021b63) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2aa8,	// (0x00021b63) vkb2_cell_t_keypad_pane_cp08

0x2abb,	// (0x00021b76) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2abb,	// (0x00021b76) vkb2_cell_t_keypad_pane_cp09

0x2acf,	// (0x00021b8a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2acf,	// (0x00021b8a) vkb2_cell_t_keypad_pane_cp01

0x2ae0,	// (0x00021b9b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2ae0,	// (0x00021b9b) vkb2_cell_t_keypad_pane_cp02

0x2af1,	// (0x00021bac) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2af1,	// (0x00021bac) vkb2_cell_t_keypad_pane_cp03

0x2b02,	// (0x00021bbd) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2b02,	// (0x00021bbd) vkb2_cell_t_keypad_pane_cp04

0x2b13,	// (0x00021bce) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2b13,	// (0x00021bce) vkb2_cell_t_keypad_pane_cp05

0x2b24,	// (0x00021bdf) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2b24,	// (0x00021bdf) vkb2_cell_t_keypad_pane_cp06

0x2b35,	// (0x00021bf0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2b35,	// (0x00021bf0) vkb2_cell_t_keypad_pane_cp07

0x2b46,	// (0x00021c01) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2b46,	// (0x00021c01) vkb2_cell_t_keypad_pane_cp10

0x79ef,	// (0x00026aaa) vkb2_cell_t_keypad_pane_g1

0x968b,	// (0x00028746) vkb2_cell_t_keypad_pane_t1

0x2d63,	// (0x00021e1e) popup_grid_graphic2_window

0xeb38,	// (0x0002dbf3) aid_size_cell_graphic2_ParamLimits

0xeb38,	// (0x0002dbf3) aid_size_cell_graphic2

0x57fd,	// (0x000248b8) bg_popup_window_pane_cp21_ParamLimits

0x57fd,	// (0x000248b8) bg_popup_window_pane_cp21

0xeb6a,	// (0x0002dc25) graphic2_pages_pane_ParamLimits

0xeb6a,	// (0x0002dc25) graphic2_pages_pane

0xebc0,	// (0x0002dc7b) grid_graphic2_control_pane_ParamLimits

0xebc0,	// (0x0002dc7b) grid_graphic2_control_pane

0xebf4,	// (0x0002dcaf) grid_graphic2_pane_ParamLimits

0xebf4,	// (0x0002dcaf) grid_graphic2_pane

0xec67,	// (0x0002dd22) cell_graphic2_pane

0x2d63,	// (0x00021e1e) main_comp_mode_pane

0x891b,	// (0x000279d6) list_ai3_gene_pane_ParamLimits

0xe4ef,	// (0x0002d5aa) bg_popup_window_pane_cp19_ParamLimits

0x8cf1,	// (0x00027dac) bg_touch_area_indi_pane_ParamLimits

0x8cf1,	// (0x00027dac) bg_touch_area_indi_pane

0x8d07,	// (0x00027dc2) bg_touch_area_indi_pane_cp01_ParamLimits

0x8d07,	// (0x00027dc2) bg_touch_area_indi_pane_cp01

0x8d1d,	// (0x00027dd8) bg_touch_area_indi_pane_cp02_ParamLimits

0x8d1d,	// (0x00027dd8) bg_touch_area_indi_pane_cp02

0x8d35,	// (0x00027df0) bg_touch_area_indi_pane_cp03_ParamLimits

0x8d35,	// (0x00027df0) bg_touch_area_indi_pane_cp03

0x8d4f,	// (0x00027e0a) popup_slider_window_g1_ParamLimits

0x8d6b,	// (0x00027e26) popup_slider_window_g2_ParamLimits

0x8d87,	// (0x00027e42) popup_slider_window_g3_ParamLimits

0xfcf0,	// (0x0002edab) popup_slider_window_g_ParamLimits

0x8de3,	// (0x00027e9e) popup_slider_window_t1_ParamLimits

0x8e57,	// (0x00027f12) small_volume_slider_vertical_pane_ParamLimits

0xec67,	// (0x0002dd22) cell_graphic2_pane_ParamLimits

0xecc2,	// (0x0002dd7d) bg_button_pane_cp10_ParamLimits

0xecc2,	// (0x0002dd7d) bg_button_pane_cp10

0xecd5,	// (0x0002dd90) bg_button_pane_cp11_ParamLimits

0xecd5,	// (0x0002dd90) bg_button_pane_cp11

0xece8,	// (0x0002dda3) graphic2_pages_pane_g1_ParamLimits

0xece8,	// (0x0002dda3) graphic2_pages_pane_g1

0xed03,	// (0x0002ddbe) graphic2_pages_pane_g2_ParamLimits

0xed03,	// (0x0002ddbe) graphic2_pages_pane_g2

0x0001,

0xfd90,	// (0x0002ee4b) graphic2_pages_pane_g_ParamLimits

0xfd90,	// (0x0002ee4b) graphic2_pages_pane_g

0xed1b,	// (0x0002ddd6) graphic2_pages_pane_t1_ParamLimits

0xed1b,	// (0x0002ddd6) graphic2_pages_pane_t1

0xed33,	// (0x0002ddee) cell_graphic2_control_pane_ParamLimits

0xed33,	// (0x0002ddee) cell_graphic2_control_pane

0xed4d,	// (0x0002de08) cell_graphic2_pane_g1_ParamLimits

0xed4d,	// (0x0002de08) cell_graphic2_pane_g1

0xd2e8,	// (0x0002c3a3) cell_graphic2_pane_g2_ParamLimits

0xd2e8,	// (0x0002c3a3) cell_graphic2_pane_g2

0xed5a,	// (0x0002de15) cell_graphic2_pane_g3_ParamLimits

0xed5a,	// (0x0002de15) cell_graphic2_pane_g3

0xd2f5,	// (0x0002c3b0) cell_graphic2_pane_g4_ParamLimits

0xd2f5,	// (0x0002c3b0) cell_graphic2_pane_g4

0xed67,	// (0x0002de22) cell_graphic2_pane_g5_ParamLimits

0xed67,	// (0x0002de22) cell_graphic2_pane_g5

0x0004,

0xfd95,	// (0x0002ee50) cell_graphic2_pane_g_ParamLimits

0xfd95,	// (0x0002ee50) cell_graphic2_pane_g

0xed87,	// (0x0002de42) cell_graphic2_pane_t1_ParamLimits

0xed87,	// (0x0002de42) cell_graphic2_pane_t1

0x5e7d,	// (0x00024f38) grid_highlight_pane_cp11_ParamLimits

0x5e7d,	// (0x00024f38) grid_highlight_pane_cp11

0x36c3,	// (0x0002277e) bg_button_pane_cp05

0xedbc,	// (0x0002de77) cell_graphic2_control_pane_g1

0x775d,	// (0x00026818) bg_touch_area_indi_pane_g1

0x98fc,	// (0x000289b7) aid_cmod_rocker_key_size

0x9906,	// (0x000289c1) aid_cmode_itu_key_size

0x9910,	// (0x000289cb) main_cmode_video_pane

0x991a,	// (0x000289d5) main_comp_mode_itu_pane

0x9926,	// (0x000289e1) main_comp_mode_rocker_pane

0x9932,	// (0x000289ed) cell_cmode_rocker_pane_ParamLimits

0x9932,	// (0x000289ed) cell_cmode_rocker_pane

0x9944,	// (0x000289ff) cell_cmode_itu_pane_ParamLimits

0x9944,	// (0x000289ff) cell_cmode_itu_pane

0x36c3,	// (0x0002277e) bg_button_pane_cp06_ParamLimits

0x36c3,	// (0x0002277e) bg_button_pane_cp06

0x79ef,	// (0x00026aaa) cell_cmode_rocker_pane_g1_ParamLimits

0x79ef,	// (0x00026aaa) cell_cmode_rocker_pane_g1

0x8efb,	// (0x00027fb6) cell_cmode_rocker_pane_g2_ParamLimits

0x8efb,	// (0x00027fb6) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x0002ee5b) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x0002ee5b) cell_cmode_rocker_pane_g

0x2d63,	// (0x00021e1e) bg_button_pane_cp07

0x9959,	// (0x00028a14) cell_cmode_itu_pane_g1

0x9962,	// (0x00028a1d) cell_cmode_itu_pane_t1

0x9970,	// (0x00028a2b) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x0002ee60) cell_cmode_itu_pane_t

0x911e,	// (0x000281d9) aid_touch_ctrl_left

0x9126,	// (0x000281e1) aid_touch_ctrl_right

0x2d63,	// (0x00021e1e) compa_mode_pane

0xedc9,	// (0x0002de84) aid_cmod_rocker_key_size_cp

0xedd3,	// (0x0002de8e) aid_cmode_itu_key_size_cp

0x9992,	// (0x00028a4d) compa_mode_pane_g1

0x999a,	// (0x00028a55) compa_mode_pane_g2

0x99a2,	// (0x00028a5d) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x0002ee65) compa_mode_pane_g

0xeddd,	// (0x0002de98) main_comp_mode_itu_pane_cp

0xede5,	// (0x0002dea0) main_comp_mode_rocker_pane_cp

0xeded,	// (0x0002dea8) cell_cmode_itu_pane_cp_ParamLimits

0xeded,	// (0x0002dea8) cell_cmode_itu_pane_cp

0xee02,	// (0x0002debd) cell_cmode_rocker_pane_cp_ParamLimits

0xee02,	// (0x0002debd) cell_cmode_rocker_pane_cp

0x36c3,	// (0x0002277e) bg_button_pane_cp06_cp_ParamLimits

0x36c3,	// (0x0002277e) bg_button_pane_cp06_cp

0x79ef,	// (0x00026aaa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x79ef,	// (0x00026aaa) cell_cmode_rocker_pane_g1_cp

0x775d,	// (0x00026818) cell_cmode_rocker_pane_g2_cp

0x2d63,	// (0x00021e1e) bg_button_pane_cp07_cp

0xee14,	// (0x0002decf) cell_cmode_itu_pane_g1_cp

0xee1d,	// (0x0002ded8) cell_cmode_itu_pane_t1_cp

0xee1d,	// (0x0002ded8) cell_cmode_itu_pane_t2_cp

0xdb36,	// (0x0002cbf1) settings_code_pane_cp2

0x2e57,	// (0x00021f12) bg_popup_window_pane_cp3_ParamLimits

0x32ba,	// (0x00022375) heading_pane_cp3_ParamLimits

0x32c6,	// (0x00022381) listscroll_popup_graphic_pane_ParamLimits

0x216b,	// (0x00021226) fep_hwr_aid_pane_ParamLimits

0x2535,	// (0x000215f0) aid_touch_sctrl_top_ParamLimits

0x2542,	// (0x000215fd) sctrl_sk_top_pane_g1_ParamLimits

0x79ef,	// (0x00026aaa) sctrl_sk_top_pane_g2_ParamLimits

0xfd09,	// (0x0002edc4) sctrl_sk_top_pane_g_ParamLimits

0x254f,	// (0x0002160a) sctrl_sk_top_pane_t1_ParamLimits

0x2535,	// (0x000215f0) aid_touch_sctrl_bottom_ParamLimits

0x254f,	// (0x0002160a) sctrl_sk_bottom_pane_t1_ParamLimits

0x9067,	// (0x00028122) aid_area_touch_clock

0xc724,	// (0x0002b7df) aid_vkb2_area_top_pane_cell_ParamLimits

0xc724,	// (0x0002b7df) aid_vkb2_area_top_pane_cell

0xc7cf,	// (0x0002b88a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc7cf,	// (0x0002b88a) aid_vkb2_area_bottom_pane_cell

0x95d6,	// (0x00028691) popup_char_count_window

0x99ef,	// (0x00028aaa) popup_char_count_window_g1

0x99f8,	// (0x00028ab3) popup_char_count_window_g2

0x9a01,	// (0x00028abc) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x0002ee6c) popup_char_count_window_g

0x9a0a,	// (0x00028ac5) popup_char_count_window_t1

0x25f3,	// (0x000216ae) popup_fep_char_preview_window_ParamLimits

0x25f3,	// (0x000216ae) popup_fep_char_preview_window

0xc744,	// (0x0002b7ff) vkb2_top_candi_pane_ParamLimits

0xc744,	// (0x0002b7ff) vkb2_top_candi_pane

0xee2b,	// (0x0002dee6) cell_vkb2_top_candi_pane_ParamLimits

0xee2b,	// (0x0002dee6) cell_vkb2_top_candi_pane

0x57fd,	// (0x000248b8) bg_popup_fep_char_preview_window_ParamLimits

0x57fd,	// (0x000248b8) bg_popup_fep_char_preview_window

0x2b5b,	// (0x00021c16) popup_fep_char_preview_window_t1_ParamLimits

0x2b5b,	// (0x00021c16) popup_fep_char_preview_window_t1

0x9a65,	// (0x00028b20) bg_popup_fep_char_preview_window_g1

0x9a6d,	// (0x00028b28) bg_popup_fep_char_preview_window_g2

0x9a75,	// (0x00028b30) bg_popup_fep_char_preview_window_g3

0x9a7d,	// (0x00028b38) bg_popup_fep_char_preview_window_g4

0x9a85,	// (0x00028b40) bg_popup_fep_char_preview_window_g5

0x2b95,	// (0x00021c50) bg_popup_fep_char_preview_window_g6

0x9a8d,	// (0x00028b48) bg_popup_fep_char_preview_window_g7

0x9a95,	// (0x00028b50) bg_popup_fep_char_preview_window_g8

0x9a9d,	// (0x00028b58) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdb8,	// (0x0002ee73) bg_popup_fep_char_preview_window_g

0x79ef,	// (0x00026aaa) cell_vkb2_top_candi_pane_g1_ParamLimits

0x79ef,	// (0x00026aaa) cell_vkb2_top_candi_pane_g1

0x7d06,	// (0x00026dc1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d06,	// (0x00026dc1) cell_vkb2_top_candi_pane_g2

0x7e7d,	// (0x00026f38) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7e7d,	// (0x00026f38) cell_vkb2_top_candi_pane_g3

0x2b9d,	// (0x00021c58) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2b9d,	// (0x00021c58) cell_vkb2_top_candi_pane_g4

0x9aa5,	// (0x00028b60) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9aa5,	// (0x00028b60) cell_vkb2_top_candi_pane_g5

0x8efb,	// (0x00027fb6) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8efb,	// (0x00027fb6) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x0002ee86) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x0002ee86) cell_vkb2_top_candi_pane_g

0x2bbe,	// (0x00021c79) cell_vkb2_top_candi_pane_t1

0x1fd9,	// (0x00021094) aid_size_touch_slider_mark_ParamLimits

0x1fd9,	// (0x00021094) aid_size_touch_slider_mark

0xeba6,	// (0x0002dc61) grid_graphic2_catg_pane_ParamLimits

0xeba6,	// (0x0002dc61) grid_graphic2_catg_pane

0xec3a,	// (0x0002dcf5) popup_grid_graphic2_window_t1_ParamLimits

0xec3a,	// (0x0002dcf5) popup_grid_graphic2_window_t1

0xec50,	// (0x0002dd0b) popup_grid_graphic2_window_t2_ParamLimits

0xec50,	// (0x0002dd0b) popup_grid_graphic2_window_t2

0x0001,

0x0132,	// (0x0001f1ed) popup_grid_graphic2_window_t_ParamLimits

0x0132,	// (0x0001f1ed) popup_grid_graphic2_window_t

0x36c3,	// (0x0002277e) bg_button_pane_cp05_ParamLimits

0xedbc,	// (0x0002de77) cell_graphic2_control_pane_g1_ParamLimits

0xee91,	// (0x0002df4c) cell_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0002df4c) cell_graphic2_catg_pane

0x2d63,	// (0x00021e1e) bg_button_pane_cp12

0xeea3,	// (0x0002df5e) cell_graphic2_catg_pane_g1

0x9033,	// (0x000280ee) cell_tb_ext_pane_t1_ParamLimits

0x2995,	// (0x00021a50) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2995,	// (0x00021a50) vkb2_top_cell_right_narrow_pane

0x29ad,	// (0x00021a68) vkb2_top_cell_right_wide_pane_ParamLimits

0x29ad,	// (0x00021a68) vkb2_top_cell_right_wide_pane

0x7e6f,	// (0x00026f2a) bg_vkb2_func_pane_ParamLimits

0x7e6f,	// (0x00026f2a) bg_vkb2_func_pane

0x2a1e,	// (0x00021ad9) vkb2_top_cell_left_pane_g1_ParamLimits

0x7e6f,	// (0x00026f2a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7e6f,	// (0x00026f2a) bg_vkb2_fuc_pane_cp03

0x2a7c,	// (0x00021b37) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5138,	// (0x000241f3) bg_vkb2_func_pane_g1

0x5140,	// (0x000241fb) bg_vkb2_func_pane_g2

0x5150,	// (0x0002420b) bg_vkb2_func_pane_g3

0x5148,	// (0x00024203) bg_vkb2_func_pane_g4

0x5158,	// (0x00024213) bg_vkb2_func_pane_g5

0x5160,	// (0x0002421b) bg_vkb2_func_pane_g6

0x5168,	// (0x00024223) bg_vkb2_func_pane_g7

0x5170,	// (0x0002422b) bg_vkb2_func_pane_g8

0x5130,	// (0x000241eb) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x0002ee93) bg_vkb2_func_pane_g

0x7e6f,	// (0x00026f2a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7e6f,	// (0x00026f2a) bg_vkb2_fuc_pane_cp01

0x2a1e,	// (0x00021ad9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2a1e,	// (0x00021ad9) vkb2_top_cell_right_wide_pane_g1

0x7e6f,	// (0x00026f2a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7e6f,	// (0x00026f2a) bg_vkb2_fuc_pane_cp02

0x2a7c,	// (0x00021b37) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2a7c,	// (0x00021b37) vkb2_top_cell_right_narrow_pane_g1

0xe42f,	// (0x0002d4ea) aid_touch_area_decrease_ParamLimits

0xe42f,	// (0x0002d4ea) aid_touch_area_decrease

0xe463,	// (0x0002d51e) aid_touch_area_increase_ParamLimits

0xe463,	// (0x0002d51e) aid_touch_area_increase

0xe48b,	// (0x0002d546) aid_touch_area_mute_ParamLimits

0xe48b,	// (0x0002d546) aid_touch_area_mute

0xe4bb,	// (0x0002d576) aid_touch_area_slider_ParamLimits

0xe4bb,	// (0x0002d576) aid_touch_area_slider

0xe4fb,	// (0x0002d5b6) popup_slider_window_g4_ParamLimits

0xe4fb,	// (0x0002d5b6) popup_slider_window_g4

0xe523,	// (0x0002d5de) popup_slider_window_g5_ParamLimits

0xe523,	// (0x0002d5de) popup_slider_window_g5

0xe557,	// (0x0002d612) popup_slider_window_g6_ParamLimits

0xe557,	// (0x0002d612) popup_slider_window_g6

0x8e11,	// (0x00027ecc) popup_slider_window_t2_ParamLimits

0x8e11,	// (0x00027ecc) popup_slider_window_t2

0x0001,

0xfcfd,	// (0x0002edb8) popup_slider_window_t_ParamLimits

0xfcfd,	// (0x0002edb8) popup_slider_window_t

0xe573,	// (0x0002d62e) slider_pane_ParamLimits

0xe573,	// (0x0002d62e) slider_pane

0x9ae1,	// (0x00028b9c) slider_pane_g1_ParamLimits

0x9ae1,	// (0x00028b9c) slider_pane_g1

0x9af5,	// (0x00028bb0) slider_pane_g2_ParamLimits

0x9af5,	// (0x00028bb0) slider_pane_g2

0x9b0b,	// (0x00028bc6) slider_pane_g3_ParamLimits

0x9b0b,	// (0x00028bc6) slider_pane_g3

0x0003,

0xfdeb,	// (0x0002eea6) slider_pane_g_ParamLimits

0xfdeb,	// (0x0002eea6) slider_pane_g

0xd302,	// (0x0002c3bd) popup_tb_float_extension_window_ParamLimits

0xd302,	// (0x0002c3bd) popup_tb_float_extension_window

0x9b37,	// (0x00028bf2) aid_size_cell_tb_float_ext

0x2d63,	// (0x00021e1e) bg_popup_sub_window_cp28

0x9b43,	// (0x00028bfe) grid_tb_float_ext_pane

0x9b4d,	// (0x00028c08) cell_tb_float_ext_pane_ParamLimits

0x9b4d,	// (0x00028c08) cell_tb_float_ext_pane

0x9b67,	// (0x00028c22) cell_tb_float_ext_pane_g1

0x9b70,	// (0x00028c2b) grid_highlight_pane_cp12

0xc52d,	// (0x0002b5e8) cell_last_hwr_side_pane_ParamLimits

0xc52d,	// (0x0002b5e8) cell_last_hwr_side_pane

0x775d,	// (0x00026818) cell_last_hwr_side_pane_g1

0x9b79,	// (0x00028c34) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x0002eeaf) cell_last_hwr_side_pane_g

0xc8ab,	// (0x0002b966) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc8ab,	// (0x0002b966) vkb2_area_bottom_space_btn_pane

0x79ef,	// (0x00026aaa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x968b,	// (0x00028746) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2bbe,	// (0x00021c79) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2bdd,	// (0x00021c98) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2bdd,	// (0x00021c98) vkb2_area_bottom_space_btn_pane_g1

0x2c17,	// (0x00021cd2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2c17,	// (0x00021cd2) vkb2_area_bottom_space_btn_pane_g2

0x2c4d,	// (0x00021d08) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2c4d,	// (0x00021d08) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x0002eeb4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x0002eeb4) vkb2_area_bottom_space_btn_pane_g

0x2212,	// (0x000212cd) cel_fep_hwr_func_pane_ParamLimits

0x2212,	// (0x000212cd) cel_fep_hwr_func_pane

0xc502,	// (0x0002b5bd) cell_hwr_side_button_pane_ParamLimits

0xc502,	// (0x0002b5bd) cell_hwr_side_button_pane

0x9067,	// (0x00028122) aid_area_touch_clock_ParamLimits

0x30e0,	// (0x0002219b) bg_uniindi_top_pane_ParamLimits

0x9079,	// (0x00028134) uniindi_top_pane_g1_ParamLimits

0x908f,	// (0x0002814a) uniindi_top_pane_g2_ParamLimits

0x909b,	// (0x00028156) uniindi_top_pane_g3_ParamLimits

0x90ac,	// (0x00028167) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x0002edeb) uniindi_top_pane_g_ParamLimits

0x90b9,	// (0x00028174) uniindi_top_pane_t1_ParamLimits

0x30e0,	// (0x0002219b) bg_vkb2_func_pane_cp01_ParamLimits

0x30e0,	// (0x0002219b) bg_vkb2_func_pane_cp01

0x9b82,	// (0x00028c3d) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b82,	// (0x00028c3d) cel_fep_hwr_func_pane_g1

0x30e0,	// (0x0002219b) bg_vkb2_func_pane_cp02_ParamLimits

0x30e0,	// (0x0002219b) bg_vkb2_func_pane_cp02

0x9b82,	// (0x00028c3d) cell_hwr_side_button_pane_g1_ParamLimits

0x9b82,	// (0x00028c3d) cell_hwr_side_button_pane_g1

0x4fb1,	// (0x0002406c) status_pane_g4_ParamLimits

0x4fb1,	// (0x0002406c) status_pane_g4

0x4fcb,	// (0x00024086) status_pane_t1

0x7496,	// (0x00026551) form2_midp_gauge_slider_cont_pane

0x749e,	// (0x00026559) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde2d,	// (0x0002cee8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde3f,	// (0x0002cefa) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb01,	// (0x0002ebbc) form2_midp_gauge_slider_pane_t_ParamLimits

0x74d4,	// (0x0002658f) form2_midp_slider_pane_ParamLimits

0x25b3,	// (0x0002166e) aid_size_cell_func_vkb2_ParamLimits

0x25b3,	// (0x0002166e) aid_size_cell_func_vkb2

0x9b23,	// (0x00028bde) slider_pane_g4_ParamLimits

0x9b23,	// (0x00028bde) slider_pane_g4

0xc90c,	// (0x0002b9c7) form2_midp_gauge_slider_pane_t2_cp01

0xc91a,	// (0x0002b9d5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc91a,	// (0x0002b9d5) form2_midp_gauge_slider_pane_t3_cp01

0x2cc2,	// (0x00021d7d) form2_midp_slider_pane_cp01

0x2d63,	// (0x00021e1e) navi_smil_pane

0x9bbb,	// (0x00028c76) navi_smil_pane_g1

0x9bc3,	// (0x00028c7e) navi_smil_pane_t1

0x9b90,	// (0x00028c4b) form2_midp_slider_pane_g1

0x9b99,	// (0x00028c54) form2_midp_slider_pane_g2

0x9ba1,	// (0x00028c5c) form2_midp_slider_pane_g3

0x9b90,	// (0x00028c4b) form2_midp_slider_pane_g4

0xeeac,	// (0x0002df67) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x0002eebd) form2_midp_slider_pane_g

0x2c87,	// (0x00021d42) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2c87,	// (0x00021d42) vkb2_area_bottom_space_btn_pane_g4

0xd4de,	// (0x0002c599) lc0_navi_pane_ParamLimits

0xd4de,	// (0x0002c599) lc0_navi_pane

0xd548,	// (0x0002c603) lc0_stat_indi_pane_ParamLimits

0xd548,	// (0x0002c603) lc0_stat_indi_pane

0xd55d,	// (0x0002c618) ls0_title_pane_ParamLimits

0xd55d,	// (0x0002c618) ls0_title_pane

0x36c3,	// (0x0002277e) bg_popup_sub_pane_cp14_ParamLimits

0x904e,	// (0x00028109) list_uniindi_pane_ParamLimits

0x905a,	// (0x00028115) uniindi_top_pane_ParamLimits

0x90f6,	// (0x000281b1) list_single_uniindi_pane_g1_ParamLimits

0x9109,	// (0x000281c4) list_single_uniindi_pane_t1_ParamLimits

0xc937,	// (0x0002b9f2) lc0_stat_clock_pane_ParamLimits

0xc937,	// (0x0002b9f2) lc0_stat_clock_pane

0xeeb5,	// (0x0002df70) lc0_stat_indi_pane_g1_ParamLimits

0xeeb5,	// (0x0002df70) lc0_stat_indi_pane_g1

0xeec2,	// (0x0002df7d) lc0_stat_indi_pane_g2_ParamLimits

0xeec2,	// (0x0002df7d) lc0_stat_indi_pane_g2

0x0001,

0x01b9,	// (0x0001f274) lc0_stat_indi_pane_g_ParamLimits

0x01b9,	// (0x0001f274) lc0_stat_indi_pane_g

0xc944,	// (0x0002b9ff) lc0_uni_indicator_pane_ParamLimits

0xc944,	// (0x0002b9ff) lc0_uni_indicator_pane

0x9beb,	// (0x00028ca6) ls0_title_pane_g1_ParamLimits

0x9beb,	// (0x00028ca6) ls0_title_pane_g1

0xeecf,	// (0x0002df8a) ls0_title_pane_t1_ParamLimits

0xeecf,	// (0x0002df8a) ls0_title_pane_t1

0xc951,	// (0x0002ba0c) lc0_uni_indicator_pane_g1_ParamLimits

0xc951,	// (0x0002ba0c) lc0_uni_indicator_pane_g1

0x9c35,	// (0x00028cf0) lc0_stat_clock_pane_t1

0x2d63,	// (0x00021e1e) main_ai5_pane

0x9c43,	// (0x00028cfe) ai5_sk_pane_ParamLimits

0x9c43,	// (0x00028cfe) ai5_sk_pane

0xeefd,	// (0x0002dfb8) cell_ai5_widget_pane_ParamLimits

0xeefd,	// (0x0002dfb8) cell_ai5_widget_pane

0x9cd2,	// (0x00028d8d) aid_size_cell_widget_grid

0x9ce6,	// (0x00028da1) bg_ai5_widget_pane_ParamLimits

0x9ce6,	// (0x00028da1) bg_ai5_widget_pane

0xef86,	// (0x0002e041) cell_ai5_widget_pane_g2

0xef96,	// (0x0002e051) cell_ai5_widget_pane_g3

0xefb5,	// (0x0002e070) cell_ai5_widget_pane_g4

0xefc1,	// (0x0002e07c) cell_ai5_widget_pane_g5

0xefcd,	// (0x0002e088) cell_ai5_widget_pane_g6

0xefd9,	// (0x0002e094) cell_ai5_widget_pane_g7

0xf021,	// (0x0002e0dc) cell_ai5_widget_pane_t1_ParamLimits

0xf021,	// (0x0002e0dc) cell_ai5_widget_pane_t1

0xf03e,	// (0x0002e0f9) cell_ai5_widget_pane_t2_ParamLimits

0xf03e,	// (0x0002e0f9) cell_ai5_widget_pane_t2

0xf056,	// (0x0002e111) cell_ai5_widget_pane_t3_ParamLimits

0xf056,	// (0x0002e111) cell_ai5_widget_pane_t3

0xf06e,	// (0x0002e129) cell_ai5_widget_pane_t4_ParamLimits

0xf06e,	// (0x0002e129) cell_ai5_widget_pane_t4

0xf088,	// (0x0002e143) cell_ai5_widget_pane_t5_ParamLimits

0xf088,	// (0x0002e143) cell_ai5_widget_pane_t5

0x9e2f,	// (0x00028eea) cell_ai5_widget_pane_t6_ParamLimits

0x9e2f,	// (0x00028eea) cell_ai5_widget_pane_t6

0x9e41,	// (0x00028efc) cell_ai5_widget_pane_t7_ParamLimits

0x9e41,	// (0x00028efc) cell_ai5_widget_pane_t7

0xf0a7,	// (0x0002e162) cell_ai5_widget_pane_t8_ParamLimits

0xf0a7,	// (0x0002e162) cell_ai5_widget_pane_t8

0x0009,

0xfe0d,	// (0x0002eec8) cell_ai5_widget_pane_t_ParamLimits

0xfe0d,	// (0x0002eec8) cell_ai5_widget_pane_t

0xf0f3,	// (0x0002e1ae) grid_ai5_widget_pane

0x36c3,	// (0x0002277e) highlight_cell_ai5_widget_pane_ParamLimits

0x36c3,	// (0x0002277e) highlight_cell_ai5_widget_pane

0xf10b,	// (0x0002e1c6) ai5_sk_left_pane

0xf115,	// (0x0002e1d0) ai5_sk_middle_pane

0xf11f,	// (0x0002e1da) ai5_sk_right_pane

0x9edc,	// (0x00028f97) bg_ai5_widget_pane_g1_ParamLimits

0x9edc,	// (0x00028f97) bg_ai5_widget_pane_g1

0x9ee8,	// (0x00028fa3) bg_ai5_widget_pane_g2_ParamLimits

0x9ee8,	// (0x00028fa3) bg_ai5_widget_pane_g2

0x9ef4,	// (0x00028faf) bg_ai5_widget_pane_g3_ParamLimits

0x9ef4,	// (0x00028faf) bg_ai5_widget_pane_g3

0x9f00,	// (0x00028fbb) bg_ai5_widget_pane_g4_ParamLimits

0x9f00,	// (0x00028fbb) bg_ai5_widget_pane_g4

0x9f0c,	// (0x00028fc7) bg_ai5_widget_pane_g5_ParamLimits

0x9f0c,	// (0x00028fc7) bg_ai5_widget_pane_g5

0x9f18,	// (0x00028fd3) bg_ai5_widget_pane_g6_ParamLimits

0x9f18,	// (0x00028fd3) bg_ai5_widget_pane_g6

0x9f24,	// (0x00028fdf) bg_ai5_widget_pane_g7_ParamLimits

0x9f24,	// (0x00028fdf) bg_ai5_widget_pane_g7

0x9f30,	// (0x00028feb) bg_ai5_widget_pane_g8_ParamLimits

0x9f30,	// (0x00028feb) bg_ai5_widget_pane_g8

0x9f3c,	// (0x00028ff7) bg_ai5_widget_pane_g9_ParamLimits

0x9f3c,	// (0x00028ff7) bg_ai5_widget_pane_g9

0x0008,

0xfe22,	// (0x0002eedd) bg_ai5_widget_pane_g_ParamLimits

0xfe22,	// (0x0002eedd) bg_ai5_widget_pane_g

0x9f6f,	// (0x0002902a) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f6f,	// (0x0002902a) cell_shortcut_ai5_widget_pane

0x2f20,	// (0x00021fdb) bg_cell_shortcut_ai5_widget_pane

0x9f80,	// (0x0002903b) cell_grid_ai5_widget_pane_g1

0x9f89,	// (0x00029044) highlight_cell_shortcut_ai5_widget_pane

0x5140,	// (0x000241fb) ai5_sk_left_pane_g1

0x9f91,	// (0x0002904c) ai5_sk_left_pane_g2

0x9f99,	// (0x00029054) ai5_sk_left_pane_g3

0x9fa1,	// (0x0002905c) ai5_sk_left_pane_g4

0x0003,

0xfe35,	// (0x0002eef0) ai5_sk_left_pane_g

0x9fa9,	// (0x00029064) ai5_sk_left_pane_t1

0x5138,	// (0x000241f3) ai5_sk_right_pane_g1

0x9fb7,	// (0x00029072) ai5_sk_right_pane_g2

0x9fbf,	// (0x0002907a) ai5_sk_right_pane_g3

0x9fc7,	// (0x00029082) ai5_sk_right_pane_g4

0x0003,

0xfe3e,	// (0x0002eef9) ai5_sk_right_pane_g

0x9fcf,	// (0x0002908a) ai5_sk_right_pane_t1

0x5138,	// (0x000241f3) ai5_sk_middle_pane_g1

0x5140,	// (0x000241fb) ai5_sk_middle_pane_g2

0x5158,	// (0x00024213) ai5_sk_middle_pane_g3

0x9fbf,	// (0x0002907a) ai5_sk_middle_pane_g4

0x9f99,	// (0x00029054) ai5_sk_middle_pane_g5

0x9fdd,	// (0x00029098) ai5_sk_middle_pane_g6

0xf129,	// (0x0002e1e4) ai5_sk_middle_pane_g7

0x0006,

0xfe47,	// (0x0002ef02) ai5_sk_middle_pane_g

0xd3ca,	// (0x0002c485) aid_touch_area_size_lc0_ParamLimits

0xd3ca,	// (0x0002c485) aid_touch_area_size_lc0

0x239d,	// (0x00021458) cell_hwr_candidate_pane_t1_ParamLimits

0x4c93,	// (0x00023d4e) aid_touch_navi_pane

0xd64f,	// (0x0002c70a) status_dt_navi_pane_ParamLimits

0xd64f,	// (0x0002c70a) status_dt_navi_pane

0xd667,	// (0x0002c722) status_dt_sta_pane_ParamLimits

0xd667,	// (0x0002c722) status_dt_sta_pane

0xf131,	// (0x0002e1ec) dt_sta_controll_pane

0xf13e,	// (0x0002e1f9) dt_sta_indi_pane

0xf14b,	// (0x0002e206) dt_sta_title_pane

0x30e0,	// (0x0002219b) bg_dt_sta_indi_pane_ParamLimits

0x30e0,	// (0x0002219b) bg_dt_sta_indi_pane

0xa01e,	// (0x000290d9) dt_sta_battery_pane

0xf15d,	// (0x0002e218) dt_sta_indi_pane_g1

0xf166,	// (0x0002e221) dt_sta_indi_pane_g2

0xf16f,	// (0x0002e22a) dt_sta_indi_pane_g3

0x0002,

0x021c,	// (0x0001f2d7) dt_sta_indi_pane_g

0xf178,	// (0x0002e233) dt_sta_signal_pane

0x36c3,	// (0x0002277e) bg_dt_sta_title_pane_ParamLimits

0x36c3,	// (0x0002277e) bg_dt_sta_title_pane

0x5fdd,	// (0x00025098) dt_sta_title_pane_g1

0xf181,	// (0x0002e23c) dt_sta_title_pane_t1_ParamLimits

0xf181,	// (0x0002e23c) dt_sta_title_pane_t1

0x2d63,	// (0x00021e1e) bg_dt_sta_control_pane

0xf196,	// (0x0002e251) dt_sta_controll_pane_g1

0xf19f,	// (0x0002e25a) bg_dt_sta_title_pane_g1

0xf1a8,	// (0x0002e263) bg_dt_sta_title_pane_g2

0xf1b1,	// (0x0002e26c) bg_dt_sta_title_pane_g3

0x0002,

0x0223,	// (0x0001f2de) bg_dt_sta_title_pane_g

0x775d,	// (0x00026818) bg_dt_sta_indi_pane_g1

0xa08b,	// (0x00029146) dt_sta_signal_pane_g1

0xa093,	// (0x0002914e) dt_sta_signal_pane_g2

0x0001,

0xfe56,	// (0x0002ef11) dt_sta_signal_pane_g

0xa09b,	// (0x00029156) dt_sta_battery_pane_g1

0xa0a4,	// (0x0002915f) dt_sta_battery_pane_t1

0x775d,	// (0x00026818) bg_dt_sta_control_pane_g1

0x3e32,	// (0x00022eed) fep_china_uni_eep_pane

0x3e3a,	// (0x00022ef5) fep_china_uni_entry_pane_ParamLimits

0x3e4a,	// (0x00022f05) popup_fep_china_uni_window_g1_ParamLimits

0x3e5a,	// (0x00022f15) popup_fep_china_uni_window_g2_ParamLimits

0x3e5a,	// (0x00022f15) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002e7f0) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002e7f0) popup_fep_china_uni_window_g

0xa0b3,	// (0x0002916e) fep_china_uni_eep_pane_g1

0xa0bb,	// (0x00029176) fep_china_uni_eep_pane_t1

0x9bb2,	// (0x00028c6d) aid_touch_area_size_smil_player

0x4ddf,	// (0x00023e9a) lc0_clock_pane

0x4fbf,	// (0x0002407a) status_pane_g5_ParamLimits

0x4fbf,	// (0x0002407a) status_pane_g5

0xce80,	// (0x0002bf3b) popup_keymap_window

0x4f7d,	// (0x00024038) status_icon_pane

0xef96,	// (0x0002e051) cell_ai5_widget_pane_g3_ParamLimits

0xefb5,	// (0x0002e070) cell_ai5_widget_pane_g4_ParamLimits

0xefc1,	// (0x0002e07c) cell_ai5_widget_pane_g5_ParamLimits

0xefe5,	// (0x0002e0a0) cell_ai5_widget_pane_g8_ParamLimits

0xefe5,	// (0x0002e0a0) cell_ai5_widget_pane_g8

0xeff9,	// (0x0002e0b4) cell_ai5_widget_pane_g9_ParamLimits

0xeff9,	// (0x0002e0b4) cell_ai5_widget_pane_g9

0xf00d,	// (0x0002e0c8) cell_ai5_widget_pane_g10_ParamLimits

0xf00d,	// (0x0002e0c8) cell_ai5_widget_pane_g10

0xa0ca,	// (0x00029185) status_icon_pane_g1

0x2d63,	// (0x00021e1e) bg_popup_sub_pane_cp13

0xa0d2,	// (0x0002918d) popup_keymap_window_t1

0xcc8f,	// (0x0002bd4a) control_pane_g6_ParamLimits

0xcc8f,	// (0x0002bd4a) control_pane_g6

0xcc9c,	// (0x0002bd57) control_pane_g7_ParamLimits

0xcc9c,	// (0x0002bd57) control_pane_g7

0xcca9,	// (0x0002bd64) control_pane_g8_ParamLimits

0xcca9,	// (0x0002bd64) control_pane_g8

0xf131,	// (0x0002e1ec) dt_sta_controll_pane_ParamLimits

0xf13e,	// (0x0002e1f9) dt_sta_indi_pane_ParamLimits

0xf14b,	// (0x0002e206) dt_sta_title_pane_ParamLimits

0x35fb,	// (0x000226b6) aid_size_touch_scroll_bar_cale

0x1514,	// (0x000205cf) popup_discreet_window_ParamLimits

0x1514,	// (0x000205cf) popup_discreet_window

0xbde9,	// (0x0002aea4) popup_sk_window

0x57fd,	// (0x000248b8) bg_popup_sub_pane_cp28_ParamLimits

0x57fd,	// (0x000248b8) bg_popup_sub_pane_cp28

0xa0e0,	// (0x0002919b) popup_discreet_window_g1_ParamLimits

0xa0e0,	// (0x0002919b) popup_discreet_window_g1

0xa100,	// (0x000291bb) popup_discreet_window_t1_ParamLimits

0xa100,	// (0x000291bb) popup_discreet_window_t1

0xa11e,	// (0x000291d9) popup_discreet_window_t2_ParamLimits

0xa11e,	// (0x000291d9) popup_discreet_window_t2

0x0002,

0xfe5b,	// (0x0002ef16) popup_discreet_window_t_ParamLimits

0xfe5b,	// (0x0002ef16) popup_discreet_window_t

0x2cf9,	// (0x00021db4) popup_sk_window_g1

0x2d03,	// (0x00021dbe) popup_sk_window_g2

0x0001,

0xfe62,	// (0x0002ef1d) popup_sk_window_g

0xa170,	// (0x0002922b) popup_sk_window_t1

0xa17e,	// (0x00029239) popup_sk_window_t1_copy1

0xef86,	// (0x0002e041) cell_ai5_widget_pane_g2_ParamLimits

0xf0b9,	// (0x0002e174) cell_ai5_widget_pane_t9_ParamLimits

0xf0b9,	// (0x0002e174) cell_ai5_widget_pane_t9

0x2d63,	// (0x00021e1e) main_fep_fshwr2_pane

0xf1ba,	// (0x0002e275) aid_fshwr2_btn_pane

0xf1c2,	// (0x0002e27d) aid_fshwr2_syb_pane

0xf1ca,	// (0x0002e285) aid_fshwr2_txt_pane

0xf1d2,	// (0x0002e28d) fshwr2_func_candi_pane

0xf1dc,	// (0x0002e297) fshwr2_hwr_syb_pane

0xf1ea,	// (0x0002e2a5) fshwr2_icf_pane

0x2d63,	// (0x00021e1e) fshwr2_icf_bg_pane

0xf1f4,	// (0x0002e2af) fshwr2_icf_pane_t1_ParamLimits

0xf1f4,	// (0x0002e2af) fshwr2_icf_pane_t1

0x775d,	// (0x00026818) fshwr2_func_candi_pane_g1

0xa1f1,	// (0x000292ac) fshwr2_func_candi_row_pane_ParamLimits

0xa1f1,	// (0x000292ac) fshwr2_func_candi_row_pane

0xf20c,	// (0x0002e2c7) cell_fshwr2_syb_pane_ParamLimits

0xf20c,	// (0x0002e2c7) cell_fshwr2_syb_pane

0x79ef,	// (0x00026aaa) fshwr2_hwr_syb_pane_g1_ParamLimits

0x79ef,	// (0x00026aaa) fshwr2_hwr_syb_pane_g1

0x2d63,	// (0x00021e1e) bg_popup_call_pane_cp01

0xa21c,	// (0x000292d7) fshwr2_func_candi_cell_pane_ParamLimits

0xa21c,	// (0x000292d7) fshwr2_func_candi_cell_pane

0xa24d,	// (0x00029308) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa24d,	// (0x00029308) fshwr2_func_candi_cell_bg_pane

0xa267,	// (0x00029322) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa267,	// (0x00029322) fshwr2_func_candi_cell_pane_g1

0xa28f,	// (0x0002934a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa28f,	// (0x0002934a) fshwr2_func_candi_cell_pane_t1

0x2d63,	// (0x00021e1e) bg_button_pane_cp08

0x4328,	// (0x000233e3) cell_fshwr2_syb_bg_pane

0xf226,	// (0x0002e2e1) cell_fshwr2_syb_bg_pane_g1

0xf22e,	// (0x0002e2e9) cell_fshwr2_syb_bg_pane_t1

0x36c3,	// (0x0002277e) main_tmo_pane

0xd967,	// (0x0002ca22) uni_indicator_pane_g1_ParamLimits

0xd97c,	// (0x0002ca37) uni_indicator_pane_g2_ParamLimits

0xd991,	// (0x0002ca4c) uni_indicator_pane_g3_ParamLimits

0x635f,	// (0x0002541a) uni_indicator_pane_g4_ParamLimits

0x635f,	// (0x0002541a) uni_indicator_pane_g4

0x6373,	// (0x0002542e) uni_indicator_pane_g5_ParamLimits

0x6373,	// (0x0002542e) uni_indicator_pane_g5

0x6387,	// (0x00025442) uni_indicator_pane_g6_ParamLimits

0x6387,	// (0x00025442) uni_indicator_pane_g6

0xf92d,	// (0x0002e9e8) uni_indicator_pane_g_ParamLimits

0xe40b,	// (0x0002d4c6) popup_tmo_note_window_ParamLimits

0xe40b,	// (0x0002d4c6) popup_tmo_note_window

0x2d63,	// (0x00021e1e) fshwr2_bg_pane

0xa280,	// (0x0002933b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa280,	// (0x0002933b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe67,	// (0x0002ef22) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe67,	// (0x0002ef22) fshwr2_func_candi_cell_pane_g

0x775d,	// (0x00026818) bg_popup_window_pane_cp01

0xa2b9,	// (0x00029374) bg_popup_window_pane_g1_cp01

0xa2c2,	// (0x0002937d) bg_popup_window_pane_cp22_ParamLimits

0xa2c2,	// (0x0002937d) bg_popup_window_pane_cp22

0xa2d0,	// (0x0002938b) listscroll_tmo_link_pane_ParamLimits

0xa2d0,	// (0x0002938b) listscroll_tmo_link_pane

0xa310,	// (0x000293cb) popup_tmo_note_window_g1_ParamLimits

0xa310,	// (0x000293cb) popup_tmo_note_window_g1

0xa31d,	// (0x000293d8) tmo_note_info_pane_ParamLimits

0xa31d,	// (0x000293d8) tmo_note_info_pane

0xf23d,	// (0x0002e2f8) list_tmo_note_info_pane_g1_ParamLimits

0xf23d,	// (0x0002e2f8) list_tmo_note_info_pane_g1

0xa34e,	// (0x00029409) list_tmo_note_info_pane_g2_ParamLimits

0xa34e,	// (0x00029409) list_tmo_note_info_pane_g2

0x0001,

0xfe6c,	// (0x0002ef27) list_tmo_note_info_pane_g_ParamLimits

0xfe6c,	// (0x0002ef27) list_tmo_note_info_pane_g

0xa36a,	// (0x00029425) list_tmo_note_info_text_pane_ParamLimits

0xa36a,	// (0x00029425) list_tmo_note_info_text_pane

0xa3eb,	// (0x000294a6) list_tmo_link_pane

0xa3f8,	// (0x000294b3) scroll_pane_cp20

0xa405,	// (0x000294c0) list_single_tmo_link_pane_ParamLimits

0xa405,	// (0x000294c0) list_single_tmo_link_pane

0xa415,	// (0x000294d0) list_single_tmo_link_pane_t1

0xa423,	// (0x000294de) list_tmo_note_info_text_pane_t1_ParamLimits

0xa423,	// (0x000294de) list_tmo_note_info_text_pane_t1

0xc9a0,	// (0x0002ba5b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc9a0,	// (0x0002ba5b) aid_size_touch_scroll_bar_cp01

0xb8e5,	// (0x0002a9a0) aid_size_touch_slider_marker

0xbdd9,	// (0x0002ae94) popup_settings_window_ParamLimits

0xbdd9,	// (0x0002ae94) popup_settings_window

0x0a84,	// (0x0001fb3f) popup_candi_list_indi_window

0x4c93,	// (0x00023d4e) aid_touch_navi_pane_ParamLimits

0x2509,	// (0x000215c4) rs_clock_indi_pane

0x2512,	// (0x000215cd) sctrl_sk_bottom_pane_ParamLimits

0x2523,	// (0x000215de) sctrl_sk_top_pane_ParamLimits

0x260d,	// (0x000216c8) popup_fep_tooltip_window

0x9cd2,	// (0x00028d8d) aid_size_cell_widget_grid_ParamLimits

0xef7a,	// (0x0002e035) cell_ai5_widget_pane_g1_ParamLimits

0xef7a,	// (0x0002e035) cell_ai5_widget_pane_g1

0xefcd,	// (0x0002e088) cell_ai5_widget_pane_g6_ParamLimits

0xefd9,	// (0x0002e094) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x01be,	// (0x0001f279) cell_ai5_widget_pane_g_ParamLimits

0x01be,	// (0x0001f279) cell_ai5_widget_pane_g

0xf0dd,	// (0x0002e198) cell_ai5_widget_pane_t10_ParamLimits

0xf0dd,	// (0x0002e198) cell_ai5_widget_pane_t10

0xf0f3,	// (0x0002e1ae) grid_ai5_widget_pane_ParamLimits

0x9f48,	// (0x00029003) cell_contacts_ai5_widget_pane_ParamLimits

0x9f48,	// (0x00029003) cell_contacts_ai5_widget_pane

0xa133,	// (0x000291ee) popup_discreet_window_t3_ParamLimits

0xa133,	// (0x000291ee) popup_discreet_window_t3

0xa1c6,	// (0x00029281) popup_fshwr2_char_preview_window_ParamLimits

0xa1c6,	// (0x00029281) popup_fshwr2_char_preview_window

0xf254,	// (0x0002e30f) tmo_note_info_pane_t1

0xf269,	// (0x0002e324) tmo_note_info_pane_t2

0xf280,	// (0x0002e33b) tmo_note_info_pane_t3

0xa3c7,	// (0x00029482) tmo_note_info_pane_t4

0xa3d9,	// (0x00029494) tmo_note_info_pane_t5

0x0004,

0xfe71,	// (0x0002ef2c) tmo_note_info_pane_t

0xa3eb,	// (0x000294a6) list_tmo_link_pane_ParamLimits

0xa3f8,	// (0x000294b3) scroll_pane_cp20_ParamLimits

0x2d63,	// (0x00021e1e) bg_popup_fep_char_preview_window_cp01

0xa43c,	// (0x000294f7) popup_fshwr2_char_preview_window_t1

0xa44a,	// (0x00029505) popup_candi_list_indi_window_g1

0xa453,	// (0x0002950e) bg_cell_contacts_ai5_widget_pane

0xa45f,	// (0x0002951a) cell_contacts_ai5_widget_pane_g1

0xa473,	// (0x0002952e) cell_contacts_ai5_widget_pane_g2

0xa482,	// (0x0002953d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe7c,	// (0x0002ef37) cell_contacts_ai5_widget_pane_g

0xa495,	// (0x00029550) cell_contacts_ai5_widget_pane_t1

0x36c3,	// (0x0002277e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2fa,	// (0x0002e3b5) settings_container_pane

0x4328,	// (0x000233e3) listscroll_set_pane_copy1

0x6e70,	// (0x00025f2b) scroll_pane_cp121_copy1

0xa51b,	// (0x000295d6) set_content_pane_copy1

0xf306,	// (0x0002e3c1) aid_height_set_list_copy1_ParamLimits

0xf306,	// (0x0002e3c1) aid_height_set_list_copy1

0x657f,	// (0x0002563a) aid_size_parent_copy1_ParamLimits

0x657f,	// (0x0002563a) aid_size_parent_copy1

0xf312,	// (0x0002e3cd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf312,	// (0x0002e3cd) button_value_adjust_pane_cp6_copy1

0x468e,	// (0x00023749) list_highlight_pane_cp2_copy1_ParamLimits

0x468e,	// (0x00023749) list_highlight_pane_cp2_copy1

0xf326,	// (0x0002e3e1) list_set_pane_copy1_ParamLimits

0xf326,	// (0x0002e3e1) list_set_pane_copy1

0xf295,	// (0x0002e350) main_pane_set_t1_copy1_ParamLimits

0xf295,	// (0x0002e350) main_pane_set_t1_copy1

0xf2cf,	// (0x0002e38a) main_pane_set_t2_copy1_ParamLimits

0xf2cf,	// (0x0002e38a) main_pane_set_t2_copy1

0xf3d3,	// (0x0002e48e) main_pane_set_t3_copy1

0xf3e1,	// (0x0002e49c) main_pane_set_t4_copy1

0xf2ee,	// (0x0002e3a9) set_content_pane_g1_copy1_ParamLimits

0xf2ee,	// (0x0002e3a9) set_content_pane_g1_copy1

0xf3ef,	// (0x0002e4aa) setting_code_pane_copy1

0xa616,	// (0x000296d1) setting_slider_graphic_pane_copy1

0xa616,	// (0x000296d1) setting_slider_pane_copy1

0xa616,	// (0x000296d1) setting_text_pane_copy1

0xa620,	// (0x000296db) setting_volume_pane_copy1

0xf3f9,	// (0x0002e4b4) settings_code_pane_cp2_copy1

0xf401,	// (0x0002e4bc) settings_code_pane_cp_copy1_ParamLimits

0xf401,	// (0x0002e4bc) settings_code_pane_cp_copy1

0xf415,	// (0x0002e4d0) volume_set_pane_copy1

0xf41d,	// (0x0002e4d8) volume_set_pane_g10_copy1

0xf425,	// (0x0002e4e0) volume_set_pane_g1_copy1

0xf42d,	// (0x0002e4e8) volume_set_pane_g2_copy1

0xf435,	// (0x0002e4f0) volume_set_pane_g3_copy1

0xf43d,	// (0x0002e4f8) volume_set_pane_g4_copy1

0xf445,	// (0x0002e500) volume_set_pane_g5_copy1

0xf44d,	// (0x0002e508) volume_set_pane_g6_copy1

0xf455,	// (0x0002e510) volume_set_pane_g7_copy1

0xf45d,	// (0x0002e518) volume_set_pane_g8_copy1

0xf465,	// (0x0002e520) volume_set_pane_g9_copy1

0x2e57,	// (0x00021f12) bg_set_opt_pane_cp_copy1_ParamLimits

0x2e57,	// (0x00021f12) bg_set_opt_pane_cp_copy1

0xa69d,	// (0x00029758) setting_slider_pane_t1_copy1_ParamLimits

0xa69d,	// (0x00029758) setting_slider_pane_t1_copy1

0xf46d,	// (0x0002e528) setting_slider_pane_t2_copy1_ParamLimits

0xf46d,	// (0x0002e528) setting_slider_pane_t2_copy1

0xf487,	// (0x0002e542) setting_slider_pane_t3_copy1_ParamLimits

0xf487,	// (0x0002e542) setting_slider_pane_t3_copy1

0xf49f,	// (0x0002e55a) slider_set_pane_copy1_ParamLimits

0xf49f,	// (0x0002e55a) slider_set_pane_copy1

0x372a,	// (0x000227e5) set_opt_bg_pane_g1_copy2

0x3732,	// (0x000227ed) set_opt_bg_pane_g2_copy2

0xa703,	// (0x000297be) set_opt_bg_pane_g3_copy2

0x3742,	// (0x000227fd) set_opt_bg_pane_g4_copy2

0x374a,	// (0x00022805) set_opt_bg_pane_g5_copy2

0x3752,	// (0x0002280d) set_opt_bg_pane_g6_copy2

0xf4b5,	// (0x0002e570) set_opt_bg_pane_g7_copy2

0xa715,	// (0x000297d0) set_opt_bg_pane_g8_copy2

0xa71f,	// (0x000297da) set_opt_bg_pane_g9_copy2

0x2d0d,	// (0x00021dc8) aid_size_touch_slider_mark_copy1_ParamLimits

0x2d0d,	// (0x00021dc8) aid_size_touch_slider_mark_copy1

0xa729,	// (0x000297e4) slider_set_pane_g1_copy1

0x2d21,	// (0x00021ddc) slider_set_pane_g2_copy1

0x1ff9,	// (0x000210b4) slider_set_pane_g3_copy1_ParamLimits

0x1ff9,	// (0x000210b4) slider_set_pane_g3_copy1

0x200d,	// (0x000210c8) slider_set_pane_g4_copy1_ParamLimits

0x200d,	// (0x000210c8) slider_set_pane_g4_copy1

0x2025,	// (0x000210e0) slider_set_pane_g5_copy1_ParamLimits

0x2025,	// (0x000210e0) slider_set_pane_g5_copy1

0x1ff9,	// (0x000210b4) slider_set_pane_g6_copy1_ParamLimits

0x1ff9,	// (0x000210b4) slider_set_pane_g6_copy1

0xc978,	// (0x0002ba33) slider_set_pane_g7_copy1_ParamLimits

0xc978,	// (0x0002ba33) slider_set_pane_g7_copy1

0x2d77,	// (0x00021e32) bg_set_opt_pane_cp2_copy1

0xa732,	// (0x000297ed) setting_slider_graphic_pane_g1_copy1

0xf4bd,	// (0x0002e578) setting_slider_graphic_pane_t1_copy1

0xf4cd,	// (0x0002e588) setting_slider_graphic_pane_t2_copy1

0xf4dd,	// (0x0002e598) slider_set_pane_cp_copy1

0xa76b,	// (0x00029826) input_focus_pane_cp1_copy1

0xa774,	// (0x0002982f) list_set_text_pane_copy1

0xa77c,	// (0x00029837) setting_text_pane_g1_copy1

0xbc87,	// (0x0002ad42) set_text_pane_t1_copy1

0xa76b,	// (0x00029826) input_focus_pane_cp2_copy1

0xa77c,	// (0x00029837) setting_code_pane_g1_copy1

0xf4e5,	// (0x0002e5a0) setting_code_pane_t1_copy1

0xc98e,	// (0x0002ba49) list_set_graphic_pane_copy1

0x2d77,	// (0x00021e32) bg_set_opt_pane_cp4_copy1

0xcb9b,	// (0x0002bc56) list_set_graphic_pane_g1_copy1_ParamLimits

0xcb9b,	// (0x0002bc56) list_set_graphic_pane_g1_copy1

0xf4f3,	// (0x0002e5ae) list_set_graphic_pane_g2_copy1

0xcbb3,	// (0x0002bc6e) list_set_graphic_pane_t1_copy1_ParamLimits

0xcbb3,	// (0x0002bc6e) list_set_graphic_pane_t1_copy1

0x775d,	// (0x00026818) rs_clock_indi_pane_g1

0xa7ad,	// (0x00029868) rs_clock_indi_pane_t1

0xa01e,	// (0x000290d9) rs_indi_pane

0xa7bb,	// (0x00029876) rs_indi_pane_g1

0xa7c4,	// (0x0002987f) rs_indi_pane_g2

0xa7cd,	// (0x00029888) rs_indi_pane_g3

0x0002,

0xfe83,	// (0x0002ef3e) rs_indi_pane_g

0x4328,	// (0x000233e3) bg_popup_preview_window_pane_cp03

0xa7d6,	// (0x00029891) popup_fep_tooltip_window_t1

0x83e6,	// (0x000274a1) popup_note2_window_g2_ParamLimits

0x83e6,	// (0x000274a1) popup_note2_window_g2

0x0001,

0xfc6d,	// (0x0002ed28) popup_note2_window_g_ParamLimits

0xfc6d,	// (0x0002ed28) popup_note2_window_g

0x88e1,	// (0x0002799c) bg_popup_sub_pane_cp11_ParamLimits

0x88ee,	// (0x000279a9) cell_ai3_links_pane_g1_ParamLimits

0x8905,	// (0x000279c0) cell_ai3_links_pane_t1

0xbc87,	// (0x0002ad42) set_text_pane_t1_copy1_ParamLimits

0x4239,	// (0x000232f4) cell_graphic_popup_pane_cp2_ParamLimits

0x4239,	// (0x000232f4) cell_graphic_popup_pane_cp2

0xa7e4,	// (0x0002989f) cell_graphic_popup_pane_g1_cp2

0x340e,	// (0x000224c9) cell_graphic_popup_pane_g2_cp2

0xa7ec,	// (0x000298a7) cell_graphic_popup_pane_g3_cp2

0xa7f4,	// (0x000298af) cell_graphic_popup_pane_t2_cp2

0x341f,	// (0x000224da) grid_highlight_pane_cp3_cp2

0x3a6d,	// (0x00022b28) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x36c3,	// (0x0002277e) main_tmo_pane_ParamLimits

0xe3ff,	// (0x0002d4ba) popup_tmo_big_image_note_window

0xef6a,	// (0x0002e025) cell_ai5_widget_list_pane

0xef72,	// (0x0002e02d) cell_ai5_widget_lrg_icon_pane

0xf254,	// (0x0002e30f) tmo_note_info_pane_t1_ParamLimits

0xf269,	// (0x0002e324) tmo_note_info_pane_t2_ParamLimits

0xf280,	// (0x0002e33b) tmo_note_info_pane_t3_ParamLimits

0xa3c7,	// (0x00029482) tmo_note_info_pane_t4_ParamLimits

0xa3d9,	// (0x00029494) tmo_note_info_pane_t5_ParamLimits

0xfe71,	// (0x0002ef2c) tmo_note_info_pane_t_ParamLimits

0xf2fa,	// (0x0002e3b5) settings_container_pane_ParamLimits

0xa763,	// (0x0002981e) indicator_popup_pane_cp5

0xa763,	// (0x0002981e) indicator_popup_pane_cp6

0xc98e,	// (0x0002ba49) list_set_graphic_pane_copy1_ParamLimits

0x2d63,	// (0x00021e1e) bg_popup_window_pane_cp23

0xa802,	// (0x000298bd) popup_tmo_big_image_note_window_g1

0xa80c,	// (0x000298c7) popup_tmo_big_image_note_window_t1

0xa81c,	// (0x000298d7) popup_tmo_big_image_note_window_t2

0xa82c,	// (0x000298e7) popup_tmo_big_image_note_window_t3

0x0002,

0xfe8a,	// (0x0002ef45) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0002e5b6) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0002e5be) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0002e5cc) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0002e5cc) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0002e5e5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0002e5e5) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0002e5f2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0002e5f2) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0002e60a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0002e60a) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0265,	// (0x0001f320) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0265,	// (0x0001f320) cell_ai5_widget_list_row_pane_t

0x2d63,	// (0x00021e1e) main_fep_vtchi_ss_pane

0xa8a2,	// (0x0002995d) popup_fep_char_pre_window

0xa8aa,	// (0x00029965) popup_fep_ituss_window

0xa8cb,	// (0x00029986) popup_fep_vkbss_window

0xa8ea,	// (0x000299a5) grid_vkbss_keypad_pane_ParamLimits

0xa8ea,	// (0x000299a5) grid_vkbss_keypad_pane

0xa8fa,	// (0x000299b5) ituss_keypad_pane

0xa913,	// (0x000299ce) aid_vkbss_key_offset_ParamLimits

0xa913,	// (0x000299ce) aid_vkbss_key_offset

0xa91f,	// (0x000299da) cell_vkbss_key_pane_ParamLimits

0xa91f,	// (0x000299da) cell_vkbss_key_pane

0xa935,	// (0x000299f0) bg_cell_vkbss_key_g1_ParamLimits

0xa935,	// (0x000299f0) bg_cell_vkbss_key_g1

0xa941,	// (0x000299fc) cell_vkbss_key_3p_pane_ParamLimits

0xa941,	// (0x000299fc) cell_vkbss_key_3p_pane

0xa95b,	// (0x00029a16) cell_vkbss_key_g1_ParamLimits

0xa95b,	// (0x00029a16) cell_vkbss_key_g1

0xa975,	// (0x00029a30) cell_vkbss_key_t1_ParamLimits

0xa975,	// (0x00029a30) cell_vkbss_key_t1

0xa9a0,	// (0x00029a5b) cell_ituss_key_pane_ParamLimits

0xa9a0,	// (0x00029a5b) cell_ituss_key_pane

0xa9b0,	// (0x00029a6b) bg_cell_ituss_key_g1_ParamLimits

0xa9b0,	// (0x00029a6b) bg_cell_ituss_key_g1

0xa9bc,	// (0x00029a77) cell_ituss_key_pane_g1_ParamLimits

0xa9bc,	// (0x00029a77) cell_ituss_key_pane_g1

0xa9c8,	// (0x00029a83) cell_ituss_key_pane_g2_ParamLimits

0xa9c8,	// (0x00029a83) cell_ituss_key_pane_g2

0x0001,

0xfe91,	// (0x0002ef4c) cell_ituss_key_pane_g_ParamLimits

0xfe91,	// (0x0002ef4c) cell_ituss_key_pane_g

0xa9e1,	// (0x00029a9c) cell_ituss_key_t1_ParamLimits

0xa9e1,	// (0x00029a9c) cell_ituss_key_t1

0xaa0f,	// (0x00029aca) cell_ituss_key_t2_ParamLimits

0xaa0f,	// (0x00029aca) cell_ituss_key_t2

0xaa40,	// (0x00029afb) cell_ituss_key_t3_ParamLimits

0xaa40,	// (0x00029afb) cell_ituss_key_t3

0xaa71,	// (0x00029b2c) cell_ituss_key_t4_ParamLimits

0xaa71,	// (0x00029b2c) cell_ituss_key_t4

0x0003,

0xfe96,	// (0x0002ef51) cell_ituss_key_t_ParamLimits

0xfe96,	// (0x0002ef51) cell_ituss_key_t

0xaaa2,	// (0x00029b5d) cell_vkbss_key_3p_pane_g1

0xaaaa,	// (0x00029b65) cell_vkbss_key_3p_pane_g2

0xaab2,	// (0x00029b6d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe9f,	// (0x0002ef5a) cell_vkbss_key_3p_pane_g

0x2d63,	// (0x00021e1e) bg_popup_fep_char_preview_window_cp02

0xaaba,	// (0x00029b75) popup_fep_char_pre_window_t1

0xef60,	// (0x0002e01b) main_ai5_sk_pane

0xa453,	// (0x0002950e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa45f,	// (0x0002951a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa473,	// (0x0002952e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa482,	// (0x0002953d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe7c,	// (0x0002ef37) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa495,	// (0x00029550) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x36c3,	// (0x0002277e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0002e61c) main_ai5_sk_pane_g1

0x5636,	// (0x000246f1) popup_query_code_window_g1

0xa8c0,	// (0x0002997b) popup_fep_vkb_icf_pane

0xa8d4,	// (0x0002998f) popup_fep_vtchi_icf_pane

0x36c3,	// (0x0002277e) bg_icf_pane

0xaae1,	// (0x00029b9c) list_vkb_icf_pane

0x36c3,	// (0x0002277e) bg_icf_pane_cp01

0x8bf8,	// (0x00027cb3) vtchi_icf_list_pane

0xab01,	// (0x00029bbc) list_vkb_icf_pane_t1_ParamLimits

0xab01,	// (0x00029bbc) list_vkb_icf_pane_t1

0xab18,	// (0x00029bd3) vtchi_icf_list_pane_t1_ParamLimits

0xab18,	// (0x00029bd3) vtchi_icf_list_pane_t1

0xa8aa,	// (0x00029965) popup_fep_ituss_window_ParamLimits

0xa8d4,	// (0x0002998f) popup_fep_vtchi_icf_pane_ParamLimits

0xa8fa,	// (0x000299b5) ituss_keypad_pane_ParamLimits

0xa90a,	// (0x000299c5) ituss_sks_pane

0x36c3,	// (0x0002277e) bg_icf_pane_ParamLimits

0xaad2,	// (0x00029b8d) icf_edit_indi_pane_ParamLimits

0xaad2,	// (0x00029b8d) icf_edit_indi_pane

0xaae1,	// (0x00029b9c) list_vkb_icf_pane_ParamLimits

0x36c3,	// (0x0002277e) bg_icf_pane_cp01_ParamLimits

0xaaed,	// (0x00029ba8) icf_edit_indi_pane_cp01_ParamLimits

0xaaed,	// (0x00029ba8) icf_edit_indi_pane_cp01

0xaaf9,	// (0x00029bb4) vtchi_query_pane

0x79ef,	// (0x00026aaa) icf_edit_indi_pane_g1_ParamLimits

0x79ef,	// (0x00026aaa) icf_edit_indi_pane_g1

0xab34,	// (0x00029bef) icf_edit_indi_pane_g2_ParamLimits

0xab34,	// (0x00029bef) icf_edit_indi_pane_g2

0x0001,

0xfea6,	// (0x0002ef61) icf_edit_indi_pane_g_ParamLimits

0xfea6,	// (0x0002ef61) icf_edit_indi_pane_g

0xab40,	// (0x00029bfb) icf_edit_indi_pane_t1

0xab4e,	// (0x00029c09) bg_input_focus_pane_cp042

0x35f2,	// (0x000226ad) vtchi_button_pane

0xab57,	// (0x00029c12) vtchi_query_pane_t1

0xab65,	// (0x00029c20) vtchi_query_pane_t2

0xab73,	// (0x00029c2e) vtchi_query_pane_t3

0x0002,

0xfeab,	// (0x0002ef66) vtchi_query_pane_t

0x2d63,	// (0x00021e1e) bg_button_pane_cp13

0xab81,	// (0x00029c3c) vtchi_button_pane_g1

0x9140,	// (0x000281fb) ituss_sks_pane_g1

0xab89,	// (0x00029c44) ituss_sks_pane_g2

0x0001,

0xfeb2,	// (0x0002ef6d) ituss_sks_pane_g

0xab92,	// (0x00029c4d) ituss_sks_pane_t1

0xaba0,	// (0x00029c5b) ituss_sks_pane_t2

0x0001,

0xfeb7,	// (0x0002ef72) ituss_sks_pane_t

0x71bf,	// (0x0002627a) indicator_nsta_pane_cp_g1

0x71c8,	// (0x00026283) indicator_nsta_pane_cp_g2

0x71d0,	// (0x0002628b) indicator_nsta_pane_cp_g3

0x71d8,	// (0x00026293) indicator_nsta_pane_cp_g4

0x71e0,	// (0x0002629b) indicator_nsta_pane_cp_g5

0x71e8,	// (0x000262a3) indicator_nsta_pane_cp_g6

0x0005,

0xfab7,	// (0x0002eb72) indicator_nsta_pane_cp_g

0xed9e,	// (0x0002de59) cell_graphic2_pane_t2_ParamLimits

0xed9e,	// (0x0002de59) cell_graphic2_pane_t2

0x0001,

0x0147,	// (0x0001f202) cell_graphic2_pane_t_ParamLimits

0x0147,	// (0x0001f202) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
