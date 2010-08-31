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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003d5bf };

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
0xa534,	// (0x00047af3) Screen

0xa540,	// (0x00047aff) application_window_ParamLimits

0xa540,	// (0x00047aff) application_window

0x4002,	// (0x000415c1) screen_g1

0x8565,	// (0x00045b24) area_bottom_pane_ParamLimits

0x8565,	// (0x00045b24) area_bottom_pane

0x8625,	// (0x00045be4) area_top_pane_ParamLimits

0x8625,	// (0x00045be4) area_top_pane

0x86c3,	// (0x00045c82) main_pane_ParamLimits

0x86c3,	// (0x00045c82) main_pane

0x400c,	// (0x000415cb) misc_graphics

0xbbbf,	// (0x0004917e) battery_pane_ParamLimits

0xbbbf,	// (0x0004917e) battery_pane

0x5f3a,	// (0x000434f9) bg_status_flat_pane_g8

0x5f42,	// (0x00043501) bg_status_flat_pane_g9

0x565d,	// (0x00042c1c) context_pane_ParamLimits

0x565d,	// (0x00042c1c) context_pane

0xbcf3,	// (0x000492b2) navi_pane_ParamLimits

0xbcf3,	// (0x000492b2) navi_pane

0xbd5f,	// (0x0004931e) signal_pane_ParamLimits

0xbd5f,	// (0x0004931e) signal_pane

0x0008,

0xf88f,	// (0x0004ce4e) bg_status_flat_pane_g

0xbdc4,	// (0x00049383) status_pane_g1_ParamLimits

0xbdc4,	// (0x00049383) status_pane_g1

0xbdd8,	// (0x00049397) status_pane_g2_ParamLimits

0xbdd8,	// (0x00049397) status_pane_g2

0x56c2,	// (0x00042c81) status_pane_g3_ParamLimits

0x56c2,	// (0x00042c81) status_pane_g3

0x0004,

0xf7bd,	// (0x0004cd7c) status_pane_g_ParamLimits

0xf7bd,	// (0x0004cd7c) status_pane_g

0xbde4,	// (0x000493a3) title_pane_ParamLimits

0xbde4,	// (0x000493a3) title_pane

0xbe21,	// (0x000493e0) uni_indicator_pane_ParamLimits

0xbe21,	// (0x000493e0) uni_indicator_pane

0x5488,	// (0x00042a47) bg_list_pane_ParamLimits

0x5488,	// (0x00042a47) bg_list_pane

0xaed7,	// (0x00048496) find_pane

0xb63c,	// (0x00048bfb) listscroll_app_pane_ParamLimits

0xb63c,	// (0x00048bfb) listscroll_app_pane

0x54a8,	// (0x00042a67) listscroll_form_pane

0xaedf,	// (0x0004849e) listscroll_gen_pane_ParamLimits

0xaedf,	// (0x0004849e) listscroll_gen_pane

0x54a8,	// (0x00042a67) listscroll_set_pane

0xabce,	// (0x0004818d) main_idle_act_pane

0x5276,	// (0x00042835) main_idle_trad_pane

0x5276,	// (0x00042835) main_list_empty_pane

0x4986,	// (0x00041f45) main_midp_pane

0x54c2,	// (0x00042a81) main_pane_g1_ParamLimits

0x54c2,	// (0x00042a81) main_pane_g1

0xb648,	// (0x00048c07) popup_ai_message_window_ParamLimits

0xb648,	// (0x00048c07) popup_ai_message_window

0xb6c6,	// (0x00048c85) popup_fep_china_uni_window_ParamLimits

0xb6c6,	// (0x00048c85) popup_fep_china_uni_window

0x54f4,	// (0x00042ab3) popup_fep_japan_candidate_window_ParamLimits

0x54f4,	// (0x00042ab3) popup_fep_japan_candidate_window

0x5512,	// (0x00042ad1) popup_fep_japan_predictive_window_ParamLimits

0x5512,	// (0x00042ad1) popup_fep_japan_predictive_window

0xb720,	// (0x00048cdf) popup_find_window

0xb72d,	// (0x00048cec) popup_grid_graphic_window_ParamLimits

0xb72d,	// (0x00048cec) popup_grid_graphic_window

0x5542,	// (0x00042b01) popup_large_graphic_colour_window

0xb753,	// (0x00048d12) popup_menu_window_ParamLimits

0xb753,	// (0x00048d12) popup_menu_window

0xb90d,	// (0x00048ecc) popup_note_image_window

0xb8f9,	// (0x00048eb8) popup_note_wait_window_ParamLimits

0xb8f9,	// (0x00048eb8) popup_note_wait_window

0xb8f9,	// (0x00048eb8) popup_note_window_ParamLimits

0xb8f9,	// (0x00048eb8) popup_note_window

0xb963,	// (0x00048f22) popup_query_code_window_ParamLimits

0xb963,	// (0x00048f22) popup_query_code_window

0x5568,	// (0x00042b27) popup_query_data_code_window_ParamLimits

0x5568,	// (0x00042b27) popup_query_data_code_window

0xb977,	// (0x00048f36) popup_query_data_window_ParamLimits

0xb977,	// (0x00048f36) popup_query_data_window

0xb98f,	// (0x00048f4e) popup_query_sat_info_window_ParamLimits

0xb98f,	// (0x00048f4e) popup_query_sat_info_window

0xb9c8,	// (0x00048f87) popup_snote_single_graphic_window_ParamLimits

0xb9c8,	// (0x00048f87) popup_snote_single_graphic_window

0xb9c8,	// (0x00048f87) popup_snote_single_text_window_ParamLimits

0xb9c8,	// (0x00048f87) popup_snote_single_text_window

0x557f,	// (0x00042b3e) popup_sub_window_general

0x55c5,	// (0x00042b84) popup_window_general_ParamLimits

0x55c5,	// (0x00042b84) popup_window_general

0x55da,	// (0x00042b99) power_save_pane

0x9243,	// (0x00046802) control_pane_g1_ParamLimits

0x9243,	// (0x00046802) control_pane_g1

0x926c,	// (0x0004682b) control_pane_g2_ParamLimits

0x926c,	// (0x0004682b) control_pane_g2

0x546a,	// (0x00042a29) control_pane_g3_ParamLimits

0x546a,	// (0x00042a29) control_pane_g3

0x0007,

0xf7a5,	// (0x0004cd64) control_pane_g_ParamLimits

0xf7a5,	// (0x0004cd64) control_pane_g

0x92b1,	// (0x00046870) control_pane_t1_ParamLimits

0x92b1,	// (0x00046870) control_pane_t1

0x9303,	// (0x000468c2) control_pane_t2_ParamLimits

0x9303,	// (0x000468c2) control_pane_t2

0x0002,

0xf7b6,	// (0x0004cd75) control_pane_t_ParamLimits

0xf7b6,	// (0x0004cd75) control_pane_t

0x538b,	// (0x0004294a) navi_navi_volume_pane_cp1

0x5394,	// (0x00042953) status_small_icon_pane

0x539c,	// (0x0004295b) status_small_pane_g1_ParamLimits

0x539c,	// (0x0004295b) status_small_pane_g1

0x53d0,	// (0x0004298f) status_small_pane_g2_ParamLimits

0x53d0,	// (0x0004298f) status_small_pane_g2

0x53dc,	// (0x0004299b) status_small_pane_g3_ParamLimits

0x53dc,	// (0x0004299b) status_small_pane_g3

0x53e8,	// (0x000429a7) status_small_pane_g4_ParamLimits

0x53e8,	// (0x000429a7) status_small_pane_g4

0x53f4,	// (0x000429b3) status_small_pane_g5_ParamLimits

0x53f4,	// (0x000429b3) status_small_pane_g5

0x5403,	// (0x000429c2) status_small_pane_g6_ParamLimits

0x5403,	// (0x000429c2) status_small_pane_g6

0x0007,

0xf794,	// (0x0004cd53) status_small_pane_g_ParamLimits

0xf794,	// (0x0004cd53) status_small_pane_g

0x5433,	// (0x000429f2) status_small_pane_t1

0x5456,	// (0x00042a15) status_small_wait_pane_ParamLimits

0x5456,	// (0x00042a15) status_small_wait_pane

0xac9a,	// (0x00048259) aid_levels_signal_ParamLimits

0xac9a,	// (0x00048259) aid_levels_signal

0xacac,	// (0x0004826b) signal_pane_g1_ParamLimits

0xacac,	// (0x0004826b) signal_pane_g1

0xacc1,	// (0x00048280) signal_pane_g2_ParamLimits

0xacc1,	// (0x00048280) signal_pane_g2

0x0001,

0xf729,	// (0x0004cce8) signal_pane_g_ParamLimits

0xf729,	// (0x0004cce8) signal_pane_g

0x4dba,	// (0x00042379) context_pane_g1

0xa550,	// (0x00047b0f) title_pane_g1

0xa57a,	// (0x00047b39) title_pane_t1

0x4022,	// (0x000415e1) title_pane_t2

0x4048,	// (0x00041607) title_pane_t3

0x0002,

0xf573,	// (0x0004cb32) title_pane_t

0xbe39,	// (0x000493f8) aid_levels_battery_ParamLimits

0xbe39,	// (0x000493f8) aid_levels_battery

0xbe4d,	// (0x0004940c) battery_pane_g1_ParamLimits

0xbe4d,	// (0x0004940c) battery_pane_g1

0xbe63,	// (0x00049422) battery_pane_g2_ParamLimits

0xbe63,	// (0x00049422) battery_pane_g2

0x0001,

0xf7c8,	// (0x0004cd87) battery_pane_g_ParamLimits

0xf7c8,	// (0x0004cd87) battery_pane_g

0xc0f5,	// (0x000496b4) uni_indicator_pane_g1

0xc10a,	// (0x000496c9) uni_indicator_pane_g2

0xc120,	// (0x000496df) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0004cef6) uni_indicator_pane_g

0x50e6,	// (0x000426a5) navi_icon_pane_ParamLimits

0x50e6,	// (0x000426a5) navi_icon_pane

0x502d,	// (0x000425ec) navi_midp_pane

0x5102,	// (0x000426c1) navi_navi_pane

0x510c,	// (0x000426cb) navi_text_pane_ParamLimits

0x510c,	// (0x000426cb) navi_text_pane

0x4002,	// (0x000415c1) status_small_wait_pane_g1

0x4406,	// (0x000419c5) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0004cef1) status_small_wait_pane_g

0xc09a,	// (0x00049659) navi_navi_icon_text_pane

0xc0a2,	// (0x00049661) navi_navi_pane_g1_ParamLimits

0xc0a2,	// (0x00049661) navi_navi_pane_g1

0xc0b4,	// (0x00049673) navi_navi_pane_g2_ParamLimits

0xc0b4,	// (0x00049673) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0004cebf) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0004cebf) navi_navi_pane_g

0x64bd,	// (0x00043a7c) navi_navi_tabs_pane

0xc0c6,	// (0x00049685) navi_navi_text_pane

0xc09a,	// (0x00049659) navi_navi_volume_pane

0xc085,	// (0x00049644) navi_text_pane_t1

0xc076,	// (0x00049635) navi_icon_pane_g1

0x63fe,	// (0x000439bd) navi_navi_text_pane_t1

0x9631,	// (0x00046bf0) navi_navi_volume_pane_g1

0x9639,	// (0x00046bf8) volume_small_pane

0xbfe8,	// (0x000495a7) navi_navi_icon_text_pane_g1

0xbff0,	// (0x000495af) navi_navi_icon_text_pane_t1

0x5102,	// (0x000426c1) navi_tabs_2_long_pane

0x5102,	// (0x000426c1) navi_tabs_2_pane

0x5102,	// (0x000426c1) navi_tabs_3_long_pane

0x5102,	// (0x000426c1) navi_tabs_3_pane

0x5102,	// (0x000426c1) navi_tabs_4_pane

0x9611,	// (0x00046bd0) tabs_2_active_pane_ParamLimits

0x9611,	// (0x00046bd0) tabs_2_active_pane

0x9621,	// (0x00046be0) tabs_2_passive_pane_ParamLimits

0x9621,	// (0x00046be0) tabs_2_passive_pane

0x95df,	// (0x00046b9e) tabs_3_active_pane_ParamLimits

0x95df,	// (0x00046b9e) tabs_3_active_pane

0x95ef,	// (0x00046bae) tabs_3_passive_pane_ParamLimits

0x95ef,	// (0x00046bae) tabs_3_passive_pane

0x9600,	// (0x00046bbf) tabs_3_passive_pane_cp_ParamLimits

0x9600,	// (0x00046bbf) tabs_3_passive_pane_cp

0x959b,	// (0x00046b5a) tabs_4_active_pane_ParamLimits

0x959b,	// (0x00046b5a) tabs_4_active_pane

0x95ac,	// (0x00046b6b) tabs_4_passive_pane_ParamLimits

0x95ac,	// (0x00046b6b) tabs_4_passive_pane

0x95bd,	// (0x00046b7c) tabs_4_passive_pane_cp_ParamLimits

0x95bd,	// (0x00046b7c) tabs_4_passive_pane_cp

0x95ce,	// (0x00046b8d) tabs_4_passive_pane_cp2_ParamLimits

0x95ce,	// (0x00046b8d) tabs_4_passive_pane_cp2

0x9577,	// (0x00046b36) tabs_2_long_active_pane_ParamLimits

0x9577,	// (0x00046b36) tabs_2_long_active_pane

0x9589,	// (0x00046b48) tabs_2_long_passive_pane_ParamLimits

0x9589,	// (0x00046b48) tabs_2_long_passive_pane

0x9532,	// (0x00046af1) tabs_3_long_active_pane_ParamLimits

0x9532,	// (0x00046af1) tabs_3_long_active_pane

0x954b,	// (0x00046b0a) tabs_3_long_passive_pane_ParamLimits

0x954b,	// (0x00046b0a) tabs_3_long_passive_pane

0x955e,	// (0x00046b1d) tabs_3_long_passive_pane_cp_ParamLimits

0x955e,	// (0x00046b1d) tabs_3_long_passive_pane_cp

0x94d8,	// (0x00046a97) volume_small_pane_g1

0x94e1,	// (0x00046aa0) volume_small_pane_g2

0x94ea,	// (0x00046aa9) volume_small_pane_g3

0x94f3,	// (0x00046ab2) volume_small_pane_g4

0x94fc,	// (0x00046abb) volume_small_pane_g5

0x9505,	// (0x00046ac4) volume_small_pane_g6

0x950e,	// (0x00046acd) volume_small_pane_g7

0x9517,	// (0x00046ad6) volume_small_pane_g8

0x9520,	// (0x00046adf) volume_small_pane_g9

0x9529,	// (0x00046ae8) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0004ce8b) volume_small_pane_g

0x4068,	// (0x00041627) bg_active_tab_pane_cp2_ParamLimits

0x4068,	// (0x00041627) bg_active_tab_pane_cp2

0xa5e2,	// (0x00047ba1) tabs_3_active_pane_g1

0xa5ea,	// (0x00047ba9) tabs_3_active_pane_t1

0x4068,	// (0x00041627) bg_passive_tab_pane_cp2_ParamLimits

0x4068,	// (0x00041627) bg_passive_tab_pane_cp2

0xa5e2,	// (0x00047ba1) tabs_3_passive_pane_g1

0xa5ea,	// (0x00047ba9) tabs_3_passive_pane_t1

0x4068,	// (0x00041627) bg_active_tab_pane_cp3_ParamLimits

0x4068,	// (0x00041627) bg_active_tab_pane_cp3

0xa5fc,	// (0x00047bbb) tabs_4_active_pane_g1

0xa604,	// (0x00047bc3) tabs_4_active_pane_t1

0x4068,	// (0x00041627) bg_passive_tab_pane_cp3_ParamLimits

0x4068,	// (0x00041627) bg_passive_tab_pane_cp3

0xa5fc,	// (0x00047bbb) tabs_4_1_passive_pane_g1

0xa604,	// (0x00047bc3) tabs_4_1_passive_pane_t1

0x4986,	// (0x00041f45) list_highlight_pane_cp2

0xc198,	// (0x00049757) list_set_pane_ParamLimits

0xc198,	// (0x00049757) list_set_pane

0xc23a,	// (0x000497f9) main_pane_set_t1_ParamLimits

0xc23a,	// (0x000497f9) main_pane_set_t1

0xc25a,	// (0x00049819) main_pane_set_t2_ParamLimits

0xc25a,	// (0x00049819) main_pane_set_t2

0xc26e,	// (0x0004982d) main_pane_set_t3_ParamLimits

0xc26e,	// (0x0004982d) main_pane_set_t3

0xc280,	// (0x0004983f) main_pane_set_t4_ParamLimits

0xc280,	// (0x0004983f) main_pane_set_t4

0x0003,

0xf99c,	// (0x0004cf5b) main_pane_set_t_ParamLimits

0xf99c,	// (0x0004cf5b) main_pane_set_t

0xc292,	// (0x00049851) setting_code_pane

0xc29c,	// (0x0004985b) setting_slider_graphic_pane

0xc29c,	// (0x0004985b) setting_slider_pane

0xc29c,	// (0x0004985b) setting_text_pane

0xc29c,	// (0x0004985b) setting_volume_pane

0x88f4,	// (0x00045eb3) volume_set_pane

0x4068,	// (0x00041627) bg_set_opt_pane_cp

0x88fc,	// (0x00045ebb) setting_slider_pane_t1

0x8915,	// (0x00045ed4) setting_slider_pane_t2

0x892e,	// (0x00045eed) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0004cb39) setting_slider_pane_t

0x8945,	// (0x00045f04) slider_set_pane

0x400c,	// (0x000415cb) bg_set_opt_pane_cp2

0x4076,	// (0x00041635) setting_slider_graphic_pane_g1

0x895b,	// (0x00045f1a) setting_slider_graphic_pane_t1

0x896a,	// (0x00045f29) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0004cb40) setting_slider_graphic_pane_t

0x8979,	// (0x00045f38) slider_set_pane_cp

0x400c,	// (0x000415cb) input_focus_pane_cp1

0x6912,	// (0x00043ed1) list_set_text_pane

0x4002,	// (0x000415c1) setting_text_pane_g1

0x400c,	// (0x000415cb) input_focus_pane_cp2

0x4002,	// (0x000415c1) setting_code_pane_g1

0x407f,	// (0x0004163e) setting_code_pane_t1

0x8981,	// (0x00045f40) set_text_pane_t1_ParamLimits

0x8981,	// (0x00045f40) set_text_pane_t1

0x4896,	// (0x00041e55) set_opt_bg_pane_g1

0x489e,	// (0x00041e5d) set_opt_bg_pane_g2

0x68f2,	// (0x00043eb1) set_opt_bg_pane_g3

0x48ae,	// (0x00041e6d) set_opt_bg_pane_g4

0x48b6,	// (0x00041e75) set_opt_bg_pane_g5

0x48be,	// (0x00041e7d) set_opt_bg_pane_g6

0x68fa,	// (0x00043eb9) set_opt_bg_pane_g7

0x6902,	// (0x00043ec1) set_opt_bg_pane_g8

0x690a,	// (0x00043ec9) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0004cf48) set_opt_bg_pane_g

0x68e5,	// (0x00043ea4) slider_set_pane_g1

0x96a6,	// (0x00046c65) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0004cf39) slider_set_pane_g

0x9642,	// (0x00046c01) volume_set_pane_g1

0x964a,	// (0x00046c09) volume_set_pane_g2

0x9652,	// (0x00046c11) volume_set_pane_g3

0x965a,	// (0x00046c19) volume_set_pane_g4

0x9662,	// (0x00046c21) volume_set_pane_g5

0x966a,	// (0x00046c29) volume_set_pane_g6

0x9672,	// (0x00046c31) volume_set_pane_g7

0x967a,	// (0x00046c39) volume_set_pane_g8

0x9682,	// (0x00046c41) volume_set_pane_g9

0x968a,	// (0x00046c49) volume_set_pane_g10

0x0009,

0xf952,	// (0x0004cf11) volume_set_pane_g

0xa616,	// (0x00047bd5) indicator_pane_ParamLimits

0xa616,	// (0x00047bd5) indicator_pane

0xa622,	// (0x00047be1) main_idle_pane_g2_ParamLimits

0xa622,	// (0x00047be1) main_idle_pane_g2

0xa64a,	// (0x00047c09) main_pane_idle_g1_ParamLimits

0xa64a,	// (0x00047c09) main_pane_idle_g1

0x408d,	// (0x0004164c) popup_clock_digital_analogue_window_ParamLimits

0x408d,	// (0x0004164c) popup_clock_digital_analogue_window

0xa657,	// (0x00047c16) soft_indicator_pane_ParamLimits

0xa657,	// (0x00047c16) soft_indicator_pane

0xa663,	// (0x00047c22) wallpaper_pane_ParamLimits

0xa663,	// (0x00047c22) wallpaper_pane

0x4002,	// (0x000415c1) wallpaper_pane_g1

0xa66f,	// (0x00047c2e) indicator_pane_g1_ParamLimits

0xa66f,	// (0x00047c2e) indicator_pane_g1

0x6a59,	// (0x00044018) navi_navi_icon_text_pane_srt_g1

0x40bb,	// (0x0004167a) soft_indicator_pane_t1

0x40d5,	// (0x00041694) aid_ps_area_pane

0xa67b,	// (0x00047c3a) aid_ps_clock_pane

0x40e6,	// (0x000416a5) aid_ps_indicator_pane

0x40f2,	// (0x000416b1) indicator_ps_pane_ParamLimits

0x40f2,	// (0x000416b1) indicator_ps_pane

0x4101,	// (0x000416c0) power_save_pane_g1_ParamLimits

0x4101,	// (0x000416c0) power_save_pane_g1

0x410d,	// (0x000416cc) power_save_pane_g2_ParamLimits

0x410d,	// (0x000416cc) power_save_pane_g2

0x8519,	// (0x00045ad8) aid_navinavi_width_pane

0x40d5,	// (0x00041694) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0004cb45) power_save_pane_g_ParamLimits

0xf586,	// (0x0004cb45) power_save_pane_g

0x411b,	// (0x000416da) power_save_pane_t1_ParamLimits

0x411b,	// (0x000416da) power_save_pane_t1

0xa67b,	// (0x00047c3a) aid_ps_clock_pane_ParamLimits

0x40e6,	// (0x000416a5) aid_ps_indicator_pane_ParamLimits

0x412d,	// (0x000416ec) power_save_pane_t4_ParamLimits

0x412d,	// (0x000416ec) power_save_pane_t4

0x0001,

0xf58b,	// (0x0004cb4a) power_save_pane_t_ParamLimits

0xf58b,	// (0x0004cb4a) power_save_pane_t

0x4157,	// (0x00041716) power_save_t3_ParamLimits

0x4157,	// (0x00041716) power_save_t3

0x4142,	// (0x00041701) power_save_t2_ParamLimits

0x4142,	// (0x00041701) power_save_t2

0x416c,	// (0x0004172b) indicator_ps_pane_g1

0xa689,	// (0x00047c48) ai_gene_pane_ParamLimits

0xa689,	// (0x00047c48) ai_gene_pane

0xa695,	// (0x00047c54) ai_links_pane_ParamLimits

0xa695,	// (0x00047c54) ai_links_pane

0xa6a1,	// (0x00047c60) indicator_pane_cp1_ParamLimits

0xa6a1,	// (0x00047c60) indicator_pane_cp1

0xa6ad,	// (0x00047c6c) main_pane_idle_g1_cp_ParamLimits

0xa6ad,	// (0x00047c6c) main_pane_idle_g1_cp

0x4175,	// (0x00041734) popup_ai_links_title_window

0xa6b9,	// (0x00047c78) soft_indicator_pane_cp1_ParamLimits

0xa6b9,	// (0x00047c78) soft_indicator_pane_cp1

0x672d,	// (0x00043cec) ai_links_pane_g1

0x6736,	// (0x00043cf5) grid_ai_links_pane

0xc0ea,	// (0x000496a9) ai_gene_pane_1

0x671b,	// (0x00043cda) ai_gene_pane_2

0x6724,	// (0x00043ce3) list_highlight_pane_cp4

0xc0ce,	// (0x0004968d) cell_ai_link_pane_ParamLimits

0xc0ce,	// (0x0004968d) cell_ai_link_pane

0x6713,	// (0x00043cd2) cell_ai_link_pane_g1

0x4406,	// (0x000419c5) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0004ceec) cell_ai_link_pane_g

0x400c,	// (0x000415cb) grid_highlight_cp2

0x400c,	// (0x000415cb) bg_popup_sub_pane_cp1

0x418c,	// (0x0004174b) popup_ai_links_title_window_t1

0x6661,	// (0x00043c20) ai_gene_pane_1_g1_ParamLimits

0x6661,	// (0x00043c20) ai_gene_pane_1_g1

0x666d,	// (0x00043c2c) ai_gene_pane_1_g2_ParamLimits

0x666d,	// (0x00043c2c) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0004cee2) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0004cee2) ai_gene_pane_1_g

0x667a,	// (0x00043c39) ai_gene_pane_1_t1_ParamLimits

0x667a,	// (0x00043c39) ai_gene_pane_1_t1

0x66ae,	// (0x00043c6d) grid_ai_soft_ind_pane

0x664c,	// (0x00043c0b) ai_gene_pane_2_t1_ParamLimits

0x664c,	// (0x00043c0b) ai_gene_pane_2_t1

0xa6c5,	// (0x00047c84) main_pane_empty_t1_ParamLimits

0xa6c5,	// (0x00047c84) main_pane_empty_t1

0xa6dd,	// (0x00047c9c) main_pane_empty_t2_ParamLimits

0xa6dd,	// (0x00047c9c) main_pane_empty_t2

0xa6f2,	// (0x00047cb1) main_pane_empty_t3_ParamLimits

0xa6f2,	// (0x00047cb1) main_pane_empty_t3

0xa704,	// (0x00047cc3) main_pane_empty_t4_ParamLimits

0xa704,	// (0x00047cc3) main_pane_empty_t4

0xa716,	// (0x00047cd5) main_pane_empty_t5_ParamLimits

0xa716,	// (0x00047cd5) main_pane_empty_t5

0x0004,

0xf590,	// (0x0004cb4f) main_pane_empty_t_ParamLimits

0xf590,	// (0x0004cb4f) main_pane_empty_t

0x48e7,	// (0x00041ea6) bg_popup_window_pane_ParamLimits

0x48e7,	// (0x00041ea6) bg_popup_window_pane

0x640c,	// (0x000439cb) find_popup_pane_cp2_ParamLimits

0x640c,	// (0x000439cb) find_popup_pane_cp2

0x6418,	// (0x000439d7) heading_pane_ParamLimits

0x6418,	// (0x000439d7) heading_pane

0x400c,	// (0x000415cb) bg_popup_sub_pane

0xc00a,	// (0x000495c9) bg_popup_window_pane_g1_ParamLimits

0xc00a,	// (0x000495c9) bg_popup_window_pane_g1

0xc016,	// (0x000495d5) bg_popup_window_pane_g2_ParamLimits

0xc016,	// (0x000495d5) bg_popup_window_pane_g2

0xc022,	// (0x000495e1) bg_popup_window_pane_g3_ParamLimits

0xc022,	// (0x000495e1) bg_popup_window_pane_g3

0xc02e,	// (0x000495ed) bg_popup_window_pane_g4_ParamLimits

0xc02e,	// (0x000495ed) bg_popup_window_pane_g4

0xc03a,	// (0x000495f9) bg_popup_window_pane_g5_ParamLimits

0xc03a,	// (0x000495f9) bg_popup_window_pane_g5

0xc046,	// (0x00049605) bg_popup_window_pane_g6_ParamLimits

0xc046,	// (0x00049605) bg_popup_window_pane_g6

0xc052,	// (0x00049611) bg_popup_window_pane_g7_ParamLimits

0xc052,	// (0x00049611) bg_popup_window_pane_g7

0xc05e,	// (0x0004961d) bg_popup_window_pane_g8_ParamLimits

0xc05e,	// (0x0004961d) bg_popup_window_pane_g8

0xc06a,	// (0x00049629) bg_popup_window_pane_g9_ParamLimits

0xc06a,	// (0x00049629) bg_popup_window_pane_g9

0x63f2,	// (0x000439b1) bg_popup_window_pane_g10_ParamLimits

0x63f2,	// (0x000439b1) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0004ceaa) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0004ceaa) bg_popup_window_pane_g

0x63a9,	// (0x00043968) bg_popup_heading_pane_ParamLimits

0x63a9,	// (0x00043968) bg_popup_heading_pane

0x972e,	// (0x00046ced) tabs_4_passive_pane_cp_srt_ParamLimits

0x972e,	// (0x00046ced) tabs_4_passive_pane_cp_srt

0x9740,	// (0x00046cff) tabs_4_passive_pane_srt_ParamLimits

0x63bd,	// (0x0004397c) heading_pane_g2

0x9740,	// (0x00046cff) tabs_4_passive_pane_srt

0x4986,	// (0x00041f45) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4986,	// (0x00041f45) bg_passive_tab_pane_cp3_srt

0x63c5,	// (0x00043984) heading_pane_t1_ParamLimits

0x63c5,	// (0x00043984) heading_pane_t1

0x63dc,	// (0x0004399b) heading_pane_t2_ParamLimits

0x63dc,	// (0x0004399b) heading_pane_t2

0x0001,

0xf8e6,	// (0x0004cea5) heading_pane_t_ParamLimits

0xf8e6,	// (0x0004cea5) heading_pane_t

0x5f02,	// (0x000434c1) bg_popup_heading_pane_g1

0x5f93,	// (0x00043552) bg_popup_heading_pane_g2

0x5f9d,	// (0x0004355c) bg_popup_heading_pane_g3

0x5fa7,	// (0x00043566) bg_popup_heading_pane_g4

0x5fb1,	// (0x00043570) bg_popup_heading_pane_g5

0x5fbb,	// (0x0004357a) bg_popup_heading_pane_g6

0x5fc3,	// (0x00043582) bg_popup_heading_pane_g7

0x5fcb,	// (0x0004358a) bg_popup_heading_pane_g8

0x5fd5,	// (0x00043594) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0004ce61) bg_popup_heading_pane_g

0x57b6,	// (0x00042d75) bg_popup_sub_pane_g1

0x57be,	// (0x00042d7d) bg_popup_sub_pane_g2

0x57c6,	// (0x00042d85) bg_popup_sub_pane_g3

0x57ce,	// (0x00042d8d) bg_popup_sub_pane_g4

0x57d6,	// (0x00042d95) bg_popup_sub_pane_g5

0x57de,	// (0x00042d9d) bg_popup_sub_pane_g6

0x57e6,	// (0x00042da5) bg_popup_sub_pane_g7

0x57ee,	// (0x00042dad) bg_popup_sub_pane_g8

0x57f6,	// (0x00042db5) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0004ce3b) bg_popup_sub_pane_g

0x405a,	// (0x00041619) bg_popup_window_pane_cp5_ParamLimits

0x405a,	// (0x00041619) bg_popup_window_pane_cp5

0x41a9,	// (0x00041768) popup_note_window_g1_ParamLimits

0x41a9,	// (0x00041768) popup_note_window_g1

0x41b5,	// (0x00041774) popup_note_window_t1_ParamLimits

0x41b5,	// (0x00041774) popup_note_window_t1

0x41c7,	// (0x00041786) popup_note_window_t2_ParamLimits

0x41c7,	// (0x00041786) popup_note_window_t2

0x42bc,	// (0x0004187b) popup_note_window_t3_ParamLimits

0x42bc,	// (0x0004187b) popup_note_window_t3

0x42ce,	// (0x0004188d) popup_note_window_t4_ParamLimits

0x42ce,	// (0x0004188d) popup_note_window_t4

0x42f6,	// (0x000418b5) popup_note_window_t5_ParamLimits

0x42f6,	// (0x000418b5) popup_note_window_t5

0x0004,

0xf59b,	// (0x0004cb5a) popup_note_window_t_ParamLimits

0xf59b,	// (0x0004cb5a) popup_note_window_t

0x431a,	// (0x000418d9) bg_popup_window_pane_cp6_ParamLimits

0x431a,	// (0x000418d9) bg_popup_window_pane_cp6

0x5e64,	// (0x00043423) popup_note_image_window_g1_ParamLimits

0x5e64,	// (0x00043423) popup_note_image_window_g1

0x5e70,	// (0x0004342f) popup_note_image_window_g2_ParamLimits

0x5e70,	// (0x0004342f) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0004ce2f) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0004ce2f) popup_note_image_window_g

0x5e89,	// (0x00043448) popup_note_image_window_t1_ParamLimits

0x5e89,	// (0x00043448) popup_note_image_window_t1

0x5ea2,	// (0x00043461) popup_note_image_window_t2_ParamLimits

0x5ea2,	// (0x00043461) popup_note_image_window_t2

0x5ebb,	// (0x0004347a) popup_note_image_window_t3_ParamLimits

0x5ebb,	// (0x0004347a) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0004ce34) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0004ce34) popup_note_image_window_t

0x5d41,	// (0x00043300) bg_popup_window_pane_cp7_ParamLimits

0x5d41,	// (0x00043300) bg_popup_window_pane_cp7

0x5d71,	// (0x00043330) popup_note_wait_window_g1_ParamLimits

0x5d71,	// (0x00043330) popup_note_wait_window_g1

0x5d7d,	// (0x0004333c) popup_note_wait_window_g2_ParamLimits

0x5d7d,	// (0x0004333c) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0004ce1d) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0004ce1d) popup_note_wait_window_g

0x5d95,	// (0x00043354) popup_note_wait_window_t1_ParamLimits

0x5d95,	// (0x00043354) popup_note_wait_window_t1

0x5dbc,	// (0x0004337b) popup_note_wait_window_t2_ParamLimits

0x5dbc,	// (0x0004337b) popup_note_wait_window_t2

0x5dd9,	// (0x00043398) popup_note_wait_window_t3_ParamLimits

0x5dd9,	// (0x00043398) popup_note_wait_window_t3

0x5dec,	// (0x000433ab) popup_note_wait_window_t4_ParamLimits

0x5dec,	// (0x000433ab) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0004ce24) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0004ce24) popup_note_wait_window_t

0x5e11,	// (0x000433d0) wait_bar_pane_ParamLimits

0x5e11,	// (0x000433d0) wait_bar_pane

0x400c,	// (0x000415cb) wait_anim_pane

0x400c,	// (0x000415cb) wait_border_pane

0x4002,	// (0x000415c1) wait_anim_pane_g1

0x4002,	// (0x000415c1) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0004cce3) wait_anim_pane_g

0x5ce5,	// (0x000432a4) wait_border_pane_g1

0x5cf0,	// (0x000432af) wait_border_pane_g2

0x5cf9,	// (0x000432b8) wait_border_pane_g3

0x0002,

0xf857,	// (0x0004ce16) wait_border_pane_g

0x5b55,	// (0x00043114) bg_popup_window_pane_cp16_ParamLimits

0x5b55,	// (0x00043114) bg_popup_window_pane_cp16

0x5c55,	// (0x00043214) indicator_popup_pane_cp4_ParamLimits

0x5c55,	// (0x00043214) indicator_popup_pane_cp4

0x5c69,	// (0x00043228) popup_query_data_window_t1_ParamLimits

0x5c69,	// (0x00043228) popup_query_data_window_t1

0x5c7b,	// (0x0004323a) popup_query_data_window_t2_ParamLimits

0x5c7b,	// (0x0004323a) popup_query_data_window_t2

0x5c94,	// (0x00043253) popup_query_data_window_t3_ParamLimits

0x5c94,	// (0x00043253) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0004ce0f) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0004ce0f) popup_query_data_window_t

0x5cae,	// (0x0004326d) query_popup_data_pane_ParamLimits

0x5cae,	// (0x0004326d) query_popup_data_pane

0x5cc2,	// (0x00043281) query_popup_data_pane_cp1_ParamLimits

0x5cc2,	// (0x00043281) query_popup_data_pane_cp1

0x5b55,	// (0x00043114) bg_popup_window_pane_cp10_ParamLimits

0x5b55,	// (0x00043114) bg_popup_window_pane_cp10

0x5b87,	// (0x00043146) indicator_popup_pane_ParamLimits

0x5b87,	// (0x00043146) indicator_popup_pane

0x5ba9,	// (0x00043168) popup_query_code_window_t1_ParamLimits

0x5ba9,	// (0x00043168) popup_query_code_window_t1

0x5bc3,	// (0x00043182) popup_query_code_window_t2_ParamLimits

0x5bc3,	// (0x00043182) popup_query_code_window_t2

0x5c0c,	// (0x000431cb) popup_query_code_window_t3_ParamLimits

0x5c0c,	// (0x000431cb) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0004ce08) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0004ce08) popup_query_code_window_t

0x5c3b,	// (0x000431fa) query_popup_pane_ParamLimits

0x5c3b,	// (0x000431fa) query_popup_pane

0x431a,	// (0x000418d9) bg_popup_window_pane_cp15_ParamLimits

0x431a,	// (0x000418d9) bg_popup_window_pane_cp15

0x4338,	// (0x000418f7) indicator_popup_pane_cp1_ParamLimits

0x4338,	// (0x000418f7) indicator_popup_pane_cp1

0x434b,	// (0x0004190a) indicator_popup_pane_cp2_ParamLimits

0x434b,	// (0x0004190a) indicator_popup_pane_cp2

0x435e,	// (0x0004191d) popup_query_data_code_window_g1_ParamLimits

0x435e,	// (0x0004191d) popup_query_data_code_window_g1

0x4371,	// (0x00041930) popup_query_data_code_window_t1_ParamLimits

0x4371,	// (0x00041930) popup_query_data_code_window_t1

0x4383,	// (0x00041942) popup_query_data_code_window_t2_ParamLimits

0x4383,	// (0x00041942) popup_query_data_code_window_t2

0x4395,	// (0x00041954) popup_query_data_code_window_t3_ParamLimits

0x4395,	// (0x00041954) popup_query_data_code_window_t3

0x43ab,	// (0x0004196a) popup_query_data_code_window_t4_ParamLimits

0x43ab,	// (0x0004196a) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0004cb65) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0004cb65) popup_query_data_code_window_t

0x93eb,	// (0x000469aa) list_single_midp_graphic_pane_g3

0x43c3,	// (0x00041982) query_popup_data_pane_cp2_ParamLimits

0x43d6,	// (0x00041995) query_popup_pane_cp2_ParamLimits

0x43d6,	// (0x00041995) query_popup_pane_cp2

0x400c,	// (0x000415cb) bg_popup_window_pane_cp11

0x5b4d,	// (0x0004310c) heading_pane_cp5

0x4464,	// (0x00041a23) listscroll_popup_info_pane

0x400c,	// (0x000415cb) input_focus_pane_cp3

0x43e9,	// (0x000419a8) query_popup_pane_t1

0x43f7,	// (0x000419b6) list_popup_info_pane_ParamLimits

0x43f7,	// (0x000419b6) list_popup_info_pane

0x4406,	// (0x000419c5) listscroll_popup_info_pane_g1

0x440e,	// (0x000419cd) scroll_pane_cp7

0x4418,	// (0x000419d7) popup_info_list_pane_t1_ParamLimits

0x4418,	// (0x000419d7) popup_info_list_pane_t1

0x4432,	// (0x000419f1) popup_info_list_pane_t2_ParamLimits

0x4432,	// (0x000419f1) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0004cb6e) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0004cb6e) popup_info_list_pane_t

0x400c,	// (0x000415cb) bg_popup_window_pane_cp12

0x6a73,	// (0x00044032) find_popup_pane

0x4068,	// (0x00041627) bg_popup_window_pane_cp3

0x444c,	// (0x00041a0b) heading_pane_cp3

0x4458,	// (0x00041a17) listscroll_popup_graphic_pane

0x400c,	// (0x000415cb) bg_popup_window_pane_cp4

0xa77a,	// (0x00047d39) heading_pane_cp4

0x4464,	// (0x00041a23) listscroll_popup_colour_pane

0x446c,	// (0x00041a2b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x446c,	// (0x00041a2b) cell_large_graphic_colour_none_popup_pane

0xa784,	// (0x00047d43) grid_large_graphic_colour_popup_pane_ParamLimits

0xa784,	// (0x00047d43) grid_large_graphic_colour_popup_pane

0x4480,	// (0x00041a3f) listscroll_popup_colour_pane_g1_ParamLimits

0x4480,	// (0x00041a3f) listscroll_popup_colour_pane_g1

0x4497,	// (0x00041a56) listscroll_popup_colour_pane_g2_ParamLimits

0x4497,	// (0x00041a56) listscroll_popup_colour_pane_g2

0x44ae,	// (0x00041a6d) listscroll_popup_colour_pane_g3_ParamLimits

0x44ae,	// (0x00041a6d) listscroll_popup_colour_pane_g3

0xa7a8,	// (0x00047d67) listscroll_popup_colour_pane_g4_ParamLimits

0xa7a8,	// (0x00047d67) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0004cb73) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0004cb73) listscroll_popup_colour_pane_g

0x44be,	// (0x00041a7d) scroll_pane_cp6_ParamLimits

0x44be,	// (0x00041a7d) scroll_pane_cp6

0xa7b7,	// (0x00047d76) cell_large_graphic_colour_popup_pane_ParamLimits

0xa7b7,	// (0x00047d76) cell_large_graphic_colour_popup_pane

0x44d0,	// (0x00041a8f) cell_large_graphic_colour_none_popup_pane_t1

0x400c,	// (0x000415cb) grid_highlight_pane_cp5

0x44df,	// (0x00041a9e) cell_large_graphic_colour_popup_pane_g1

0x4584,	// (0x00041b43) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0004cb7c) cell_large_graphic_colour_popup_pane_g

0x458c,	// (0x00041b4b) cell_large_graphic_colour_popup_pane_g2_copy1

0x4595,	// (0x00041b54) grid_highlight_pane_cp4

0x459d,	// (0x00041b5c) bg_popup_window_pane_cp8_ParamLimits

0x459d,	// (0x00041b5c) bg_popup_window_pane_cp8

0x45b8,	// (0x00041b77) popup_snote_single_text_window_g1_ParamLimits

0x45b8,	// (0x00041b77) popup_snote_single_text_window_g1

0x45ca,	// (0x00041b89) popup_snote_single_text_window_t1_ParamLimits

0x45ca,	// (0x00041b89) popup_snote_single_text_window_t1

0x45dd,	// (0x00041b9c) popup_snote_single_text_window_t2_ParamLimits

0x45dd,	// (0x00041b9c) popup_snote_single_text_window_t2

0x45f0,	// (0x00041baf) popup_snote_single_text_window_t3_ParamLimits

0x45f0,	// (0x00041baf) popup_snote_single_text_window_t3

0x4629,	// (0x00041be8) popup_snote_single_text_window_t4_ParamLimits

0x4629,	// (0x00041be8) popup_snote_single_text_window_t4

0x465d,	// (0x00041c1c) popup_snote_single_text_window_t5_ParamLimits

0x465d,	// (0x00041c1c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0004cb81) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0004cb81) popup_snote_single_text_window_t

0x468c,	// (0x00041c4b) bg_popup_window_pane_cp9_ParamLimits

0x468c,	// (0x00041c4b) bg_popup_window_pane_cp9

0x45b8,	// (0x00041b77) popup_snote_single_graphic_window_g1_ParamLimits

0x45b8,	// (0x00041b77) popup_snote_single_graphic_window_g1

0x469a,	// (0x00041c59) popup_snote_single_graphic_window_g2_ParamLimits

0x469a,	// (0x00041c59) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0004cb8c) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0004cb8c) popup_snote_single_graphic_window_g

0x46a6,	// (0x00041c65) popup_snote_single_graphic_window_t1_ParamLimits

0x46a6,	// (0x00041c65) popup_snote_single_graphic_window_t1

0x46b9,	// (0x00041c78) popup_snote_single_graphic_window_t2_ParamLimits

0x46b9,	// (0x00041c78) popup_snote_single_graphic_window_t2

0x46cc,	// (0x00041c8b) popup_snote_single_graphic_window_t3_ParamLimits

0x46cc,	// (0x00041c8b) popup_snote_single_graphic_window_t3

0x4705,	// (0x00041cc4) popup_snote_single_graphic_window_t4_ParamLimits

0x4705,	// (0x00041cc4) popup_snote_single_graphic_window_t4

0x4739,	// (0x00041cf8) popup_snote_single_graphic_window_t5_ParamLimits

0x4739,	// (0x00041cf8) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0004cb91) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0004cb91) popup_snote_single_graphic_window_t

0x69f7,	// (0x00043fb6) grid_graphic_popup_pane_ParamLimits

0x69f7,	// (0x00043fb6) grid_graphic_popup_pane

0x6a23,	// (0x00043fe2) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a23,	// (0x00043fe2) listscroll_popup_graphic_pane_g1

0xc368,	// (0x00049927) listscroll_popup_graphic_pane_g2_ParamLimits

0xc368,	// (0x00049927) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0004cf85) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0004cf85) listscroll_popup_graphic_pane_g

0x6767,	// (0x00043d26) scroll_pane_cp5

0xc329,	// (0x000498e8) cell_graphic_popup_pane_ParamLimits

0xc329,	// (0x000498e8) cell_graphic_popup_pane

0x69c2,	// (0x00043f81) cell_graphic_popup_pane_g1

0x69ca,	// (0x00043f89) cell_graphic_popup_pane_g2

0x458c,	// (0x00041b4b) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0004cf7e) cell_graphic_popup_pane_g

0x69d3,	// (0x00043f92) cell_graphic_popup_pane_t2

0x4595,	// (0x00041b54) grid_highlight_pane_cp3

0x477a,	// (0x00041d39) list_gen_pane_ParamLimits

0x477a,	// (0x00041d39) list_gen_pane

0x47a2,	// (0x00041d61) scroll_pane

0xc2dc,	// (0x0004989b) bg_list_pane_g1_ParamLimits

0xc2dc,	// (0x0004989b) bg_list_pane_g1

0x6971,	// (0x00043f30) bg_list_pane_g2_ParamLimits

0x6971,	// (0x00043f30) bg_list_pane_g2

0x6984,	// (0x00043f43) bg_list_pane_g3_ParamLimits

0x6984,	// (0x00043f43) bg_list_pane_g3

0x6996,	// (0x00043f55) bg_list_pane_g4_ParamLimits

0x6996,	// (0x00043f55) bg_list_pane_g4

0xc2f7,	// (0x000498b6) bg_list_pane_g5_ParamLimits

0xc2f7,	// (0x000498b6) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0004cf73) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0004cf73) bg_list_pane_g

0xaffc,	// (0x000485bb) list_double2_graphic_large_graphic_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double2_graphic_large_graphic_pane

0xaffc,	// (0x000485bb) list_double2_graphic_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double2_graphic_pane

0xaffc,	// (0x000485bb) list_double2_large_graphic_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double2_large_graphic_pane

0xaffc,	// (0x000485bb) list_double2_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double2_pane

0xaffc,	// (0x000485bb) list_double_graphic_heading_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double_graphic_heading_pane

0xaffc,	// (0x000485bb) list_double_graphic_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double_graphic_pane

0xaffc,	// (0x000485bb) list_double_heading_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double_heading_pane

0xaffc,	// (0x000485bb) list_double_large_graphic_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double_large_graphic_pane

0xaffc,	// (0x000485bb) list_double_number_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double_number_pane

0xaffc,	// (0x000485bb) list_double_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double_pane

0xaffc,	// (0x000485bb) list_double_time_pane_ParamLimits

0xaffc,	// (0x000485bb) list_double_time_pane

0xaffc,	// (0x000485bb) list_setting_number_pane_ParamLimits

0xaffc,	// (0x000485bb) list_setting_number_pane

0xaffc,	// (0x000485bb) list_setting_pane_ParamLimits

0xaffc,	// (0x000485bb) list_setting_pane

0xb040,	// (0x000485ff) list_single_2graphic_pane_ParamLimits

0xb040,	// (0x000485ff) list_single_2graphic_pane

0xb040,	// (0x000485ff) list_single_graphic_heading_pane_ParamLimits

0xb040,	// (0x000485ff) list_single_graphic_heading_pane

0xb040,	// (0x000485ff) list_single_graphic_pane_ParamLimits

0xb040,	// (0x000485ff) list_single_graphic_pane

0xb040,	// (0x000485ff) list_single_heading_pane_ParamLimits

0xb040,	// (0x000485ff) list_single_heading_pane

0xb0ca,	// (0x00048689) list_single_large_graphic_pane_ParamLimits

0xb0ca,	// (0x00048689) list_single_large_graphic_pane

0xb040,	// (0x000485ff) list_single_number_heading_pane_ParamLimits

0xb040,	// (0x000485ff) list_single_number_heading_pane

0xb040,	// (0x000485ff) list_single_number_pane_ParamLimits

0xb040,	// (0x000485ff) list_single_number_pane

0xb040,	// (0x000485ff) list_single_pane_ParamLimits

0xb040,	// (0x000485ff) list_single_pane

0x400c,	// (0x000415cb) list_highlight_pane_cp1

0x51e7,	// (0x000427a6) list_single_pane_g1_ParamLimits

0x51e7,	// (0x000427a6) list_single_pane_g1

0x89a6,	// (0x00045f65) list_single_pane_g2_ParamLimits

0x89a6,	// (0x00045f65) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0004cbad) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0004cbad) list_single_pane_g

0xafe6,	// (0x000485a5) list_single_pane_t1_ParamLimits

0xafe6,	// (0x000485a5) list_single_pane_t1

0x51e7,	// (0x000427a6) list_single_number_pane_g1_ParamLimits

0x51e7,	// (0x000427a6) list_single_number_pane_g1

0x89a6,	// (0x00045f65) list_single_number_pane_g2_ParamLimits

0x89a6,	// (0x00045f65) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0004cbad) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0004cbad) list_single_number_pane_g

0xaf8e,	// (0x0004854d) list_single_number_pane_t1_ParamLimits

0xaf8e,	// (0x0004854d) list_single_number_pane_t1

0xafa4,	// (0x00048563) list_single_number_pane_t2_ParamLimits

0xafa4,	// (0x00048563) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0004cf34) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0004cf34) list_single_number_pane_t

0x899a,	// (0x00045f59) list_single_graphic_pane_g1_ParamLimits

0x899a,	// (0x00045f59) list_single_graphic_pane_g1

0x51e7,	// (0x000427a6) list_single_graphic_pane_g2_ParamLimits

0x51e7,	// (0x000427a6) list_single_graphic_pane_g2

0x89a6,	// (0x00045f65) list_single_graphic_pane_g3_ParamLimits

0x89a6,	// (0x00045f65) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0004cb9c) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0004cb9c) list_single_graphic_pane_g

0x89b2,	// (0x00045f71) list_single_graphic_pane_t1_ParamLimits

0x89b2,	// (0x00045f71) list_single_graphic_pane_t1

0x89c8,	// (0x00045f87) list_single_heading_pane_g1_ParamLimits

0x89c8,	// (0x00045f87) list_single_heading_pane_g1

0x89a6,	// (0x00045f65) list_single_heading_pane_g2_ParamLimits

0x89a6,	// (0x00045f65) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0004cba3) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004cba3) list_single_heading_pane_g

0x89db,	// (0x00045f9a) list_single_heading_pane_t1_ParamLimits

0x89db,	// (0x00045f9a) list_single_heading_pane_t1

0xa7e0,	// (0x00047d9f) list_single_heading_pane_t2_ParamLimits

0xa7e0,	// (0x00047d9f) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0004cba8) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0004cba8) list_single_heading_pane_t

0x51e7,	// (0x000427a6) list_single_number_heading_pane_g1_ParamLimits

0x51e7,	// (0x000427a6) list_single_number_heading_pane_g1

0x89a6,	// (0x00045f65) list_single_number_heading_pane_g2_ParamLimits

0x89a6,	// (0x00045f65) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0004cbad) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0004cbad) list_single_number_heading_pane_g

0x89f1,	// (0x00045fb0) list_single_number_heading_pane_t1_ParamLimits

0x89f1,	// (0x00045fb0) list_single_number_heading_pane_t1

0x8a07,	// (0x00045fc6) list_single_number_heading_pane_t2_ParamLimits

0x8a07,	// (0x00045fc6) list_single_number_heading_pane_t2

0x8a19,	// (0x00045fd8) list_single_number_heading_pane_t3_ParamLimits

0x8a19,	// (0x00045fd8) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0004cbb2) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0004cbb2) list_single_number_heading_pane_t

0x8a2b,	// (0x00045fea) list_single_graphic_heading_pane_g1_ParamLimits

0x8a2b,	// (0x00045fea) list_single_graphic_heading_pane_g1

0x8a41,	// (0x00046000) list_single_graphic_heading_pane_g4_ParamLimits

0x8a41,	// (0x00046000) list_single_graphic_heading_pane_g4

0x89a6,	// (0x00045f65) list_single_graphic_heading_pane_g5_ParamLimits

0x89a6,	// (0x00045f65) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0004cbb9) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0004cbb9) list_single_graphic_heading_pane_g

0x89f1,	// (0x00045fb0) list_single_graphic_heading_pane_t1_ParamLimits

0x89f1,	// (0x00045fb0) list_single_graphic_heading_pane_t1

0x8a52,	// (0x00046011) list_single_graphic_heading_pane_t2_ParamLimits

0x8a52,	// (0x00046011) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0004cbc0) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0004cbc0) list_single_graphic_heading_pane_t

0xa7f2,	// (0x00047db1) list_single_large_graphic_pane_g1_ParamLimits

0xa7f2,	// (0x00047db1) list_single_large_graphic_pane_g1

0xa7fe,	// (0x00047dbd) list_single_large_graphic_pane_g2_ParamLimits

0xa7fe,	// (0x00047dbd) list_single_large_graphic_pane_g2

0xa80a,	// (0x00047dc9) list_single_large_graphic_pane_g3_ParamLimits

0xa80a,	// (0x00047dc9) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0004cbc5) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0004cbc5) list_single_large_graphic_pane_g

0x5cf0,	// (0x000432af) wait_border_pane_g2_copy1

0xa816,	// (0x00047dd5) list_single_large_graphic_pane_g4_cp2

0x8a6a,	// (0x00046029) list_single_large_graphic_pane_t1_ParamLimits

0x8a6a,	// (0x00046029) list_single_large_graphic_pane_t1

0xa81e,	// (0x00047ddd) list_double_pane_g1_ParamLimits

0xa81e,	// (0x00047ddd) list_double_pane_g1

0xa82a,	// (0x00047de9) list_double_pane_g2_ParamLimits

0xa82a,	// (0x00047de9) list_double_pane_g2

0x0001,

0xf60d,	// (0x0004cbcc) list_double_pane_g_ParamLimits

0xf60d,	// (0x0004cbcc) list_double_pane_g

0x8a80,	// (0x0004603f) list_double_pane_t1_ParamLimits

0x8a80,	// (0x0004603f) list_double_pane_t1

0x8a96,	// (0x00046055) list_double_pane_t2_ParamLimits

0x8a96,	// (0x00046055) list_double_pane_t2

0x0001,

0xf612,	// (0x0004cbd1) list_double_pane_t_ParamLimits

0xf612,	// (0x0004cbd1) list_double_pane_t

0x8aa8,	// (0x00046067) list_double2_pane_g1_ParamLimits

0x8aa8,	// (0x00046067) list_double2_pane_g1

0x8ab9,	// (0x00046078) list_double2_pane_g2_ParamLimits

0x8ab9,	// (0x00046078) list_double2_pane_g2

0x0001,

0xf617,	// (0x0004cbd6) list_double2_pane_g_ParamLimits

0xf617,	// (0x0004cbd6) list_double2_pane_g

0x8ac5,	// (0x00046084) list_double2_pane_t1_ParamLimits

0x8ac5,	// (0x00046084) list_double2_pane_t1

0x8adb,	// (0x0004609a) list_double2_pane_t2_ParamLimits

0x8adb,	// (0x0004609a) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0004cbdb) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0004cbdb) list_double2_pane_t

0xa81e,	// (0x00047ddd) list_double_number_pane_g1_ParamLimits

0xa81e,	// (0x00047ddd) list_double_number_pane_g1

0xa82a,	// (0x00047de9) list_double_number_pane_g2_ParamLimits

0xa82a,	// (0x00047de9) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0004cbcc) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0004cbcc) list_double_number_pane_g

0x8aed,	// (0x000460ac) list_double_number_pane_t1_ParamLimits

0x8aed,	// (0x000460ac) list_double_number_pane_t1

0x8aff,	// (0x000460be) list_double_number_pane_t2_ParamLimits

0x8aff,	// (0x000460be) list_double_number_pane_t2

0x8b15,	// (0x000460d4) list_double_number_pane_t3_ParamLimits

0x8b15,	// (0x000460d4) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0004cbe0) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0004cbe0) list_double_number_pane_t

0x8b27,	// (0x000460e6) list_double_graphic_pane_g1_ParamLimits

0x8b27,	// (0x000460e6) list_double_graphic_pane_g1

0xa836,	// (0x00047df5) list_double_graphic_pane_g2_ParamLimits

0xa836,	// (0x00047df5) list_double_graphic_pane_g2

0xa845,	// (0x00047e04) list_double_graphic_pane_g3_ParamLimits

0xa845,	// (0x00047e04) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0004cbe7) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0004cbe7) list_double_graphic_pane_g

0x8b3f,	// (0x000460fe) list_double_graphic_pane_t1_ParamLimits

0x8b3f,	// (0x000460fe) list_double_graphic_pane_t1

0x8b55,	// (0x00046114) list_double_graphic_pane_t2_ParamLimits

0x8b55,	// (0x00046114) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0004cbf0) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0004cbf0) list_double_graphic_pane_t

0x8b67,	// (0x00046126) list_double2_graphic_pane_g1_ParamLimits

0x8b67,	// (0x00046126) list_double2_graphic_pane_g1

0xa851,	// (0x00047e10) list_double2_graphic_pane_g2_ParamLimits

0xa851,	// (0x00047e10) list_double2_graphic_pane_g2

0xa85d,	// (0x00047e1c) list_double2_graphic_pane_g3_ParamLimits

0xa85d,	// (0x00047e1c) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0004cbf5) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0004cbf5) list_double2_graphic_pane_g

0x8b73,	// (0x00046132) list_double2_graphic_pane_t1_ParamLimits

0x8b73,	// (0x00046132) list_double2_graphic_pane_t1

0x8b89,	// (0x00046148) list_double2_graphic_pane_t2_ParamLimits

0x8b89,	// (0x00046148) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004cbfc) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004cbfc) list_double2_graphic_pane_t

0x8b9b,	// (0x0004615a) list_double_large_graphic_pane_g1_ParamLimits

0x8b9b,	// (0x0004615a) list_double_large_graphic_pane_g1

0x8bc6,	// (0x00046185) list_double_large_graphic_pane_g2_ParamLimits

0x8bc6,	// (0x00046185) list_double_large_graphic_pane_g2

0xa82a,	// (0x00047de9) list_double_large_graphic_pane_g3_ParamLimits

0xa82a,	// (0x00047de9) list_double_large_graphic_pane_g3

0x8bdc,	// (0x0004619b) list_double_large_graphic_pane_g4_ParamLimits

0x8bdc,	// (0x0004619b) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0004cc01) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0004cc01) list_double_large_graphic_pane_g

0x8bef,	// (0x000461ae) list_double_large_graphic_pane_t1_ParamLimits

0x8bef,	// (0x000461ae) list_double_large_graphic_pane_t1

0x8c08,	// (0x000461c7) list_double_large_graphic_pane_t2_ParamLimits

0x8c08,	// (0x000461c7) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0004cc0c) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0004cc0c) list_double_large_graphic_pane_t

0xa87e,	// (0x00047e3d) list_double2_large_graphic_pane_g1_ParamLimits

0xa87e,	// (0x00047e3d) list_double2_large_graphic_pane_g1

0xa88a,	// (0x00047e49) list_double2_large_graphic_pane_g2_ParamLimits

0xa88a,	// (0x00047e49) list_double2_large_graphic_pane_g2

0xa85d,	// (0x00047e1c) list_double2_large_graphic_pane_g3_ParamLimits

0xa85d,	// (0x00047e1c) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0004cc11) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0004cc11) list_double2_large_graphic_pane_g

0x8c1a,	// (0x000461d9) list_double2_large_graphic_pane_t1_ParamLimits

0x8c1a,	// (0x000461d9) list_double2_large_graphic_pane_t1

0x8c30,	// (0x000461ef) list_double2_large_graphic_pane_t2_ParamLimits

0x8c30,	// (0x000461ef) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0004cc18) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0004cc18) list_double2_large_graphic_pane_t

0x8c42,	// (0x00046201) list_double_heading_pane_g1_ParamLimits

0x8c42,	// (0x00046201) list_double_heading_pane_g1

0xa89b,	// (0x00047e5a) list_double_heading_pane_g2_ParamLimits

0xa89b,	// (0x00047e5a) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0004cc1d) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0004cc1d) list_double_heading_pane_g

0x8c53,	// (0x00046212) list_double_heading_pane_t1_ParamLimits

0x8c53,	// (0x00046212) list_double_heading_pane_t1

0x8adb,	// (0x0004609a) list_double_heading_pane_t2_ParamLimits

0x8adb,	// (0x0004609a) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0004cc22) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0004cc22) list_double_heading_pane_t

0x8c69,	// (0x00046228) list_double_graphic_heading_pane_g1_ParamLimits

0x8c69,	// (0x00046228) list_double_graphic_heading_pane_g1

0x8c42,	// (0x00046201) list_double_graphic_heading_pane_g2_ParamLimits

0x8c42,	// (0x00046201) list_double_graphic_heading_pane_g2

0xa89b,	// (0x00047e5a) list_double_graphic_heading_pane_g3_ParamLimits

0xa89b,	// (0x00047e5a) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0004cc27) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0004cc27) list_double_graphic_heading_pane_g

0x8c75,	// (0x00046234) list_double_graphic_heading_pane_t1_ParamLimits

0x8c75,	// (0x00046234) list_double_graphic_heading_pane_t1

0x8b89,	// (0x00046148) list_double_graphic_heading_pane_t2_ParamLimits

0x8b89,	// (0x00046148) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0004cc2e) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0004cc2e) list_double_graphic_heading_pane_t

0x8c8b,	// (0x0004624a) list_double_time_pane_g1_ParamLimits

0x8c8b,	// (0x0004624a) list_double_time_pane_g1

0x8c9c,	// (0x0004625b) list_double_time_pane_g2_ParamLimits

0x8c9c,	// (0x0004625b) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0004cc33) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0004cc33) list_double_time_pane_g

0x8ca8,	// (0x00046267) list_double_time_pane_t1_ParamLimits

0x8ca8,	// (0x00046267) list_double_time_pane_t1

0x8cbe,	// (0x0004627d) list_double_time_pane_t2_ParamLimits

0x8cbe,	// (0x0004627d) list_double_time_pane_t2

0x8cd0,	// (0x0004628f) list_double_time_pane_t3_ParamLimits

0x8cd0,	// (0x0004628f) list_double_time_pane_t3

0x8ce2,	// (0x000462a1) list_double_time_pane_t4_ParamLimits

0x8ce2,	// (0x000462a1) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0004cc38) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0004cc38) list_double_time_pane_t

0x8cf4,	// (0x000462b3) list_setting_pane_g1_ParamLimits

0x8cf4,	// (0x000462b3) list_setting_pane_g1

0x8d00,	// (0x000462bf) list_setting_pane_g2_ParamLimits

0x8d00,	// (0x000462bf) list_setting_pane_g2

0x0001,

0xf682,	// (0x0004cc41) list_setting_pane_g_ParamLimits

0xf682,	// (0x0004cc41) list_setting_pane_g

0x8d0c,	// (0x000462cb) list_setting_pane_t1_ParamLimits

0x8d0c,	// (0x000462cb) list_setting_pane_t1

0x8d26,	// (0x000462e5) list_setting_pane_t2_ParamLimits

0x8d26,	// (0x000462e5) list_setting_pane_t2

0x0002,

0xf687,	// (0x0004cc46) list_setting_pane_t_ParamLimits

0xf687,	// (0x0004cc46) list_setting_pane_t

0x8d63,	// (0x00046322) set_value_pane_cp_ParamLimits

0x8d63,	// (0x00046322) set_value_pane_cp

0x8d6f,	// (0x0004632e) list_setting_number_pane_g1_ParamLimits

0x8d6f,	// (0x0004632e) list_setting_number_pane_g1

0x8d7b,	// (0x0004633a) list_setting_number_pane_g2_ParamLimits

0x8d7b,	// (0x0004633a) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0004cc4d) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0004cc4d) list_setting_number_pane_g

0x8d87,	// (0x00046346) list_setting_number_pane_t1_ParamLimits

0x8d87,	// (0x00046346) list_setting_number_pane_t1

0x8da0,	// (0x0004635f) list_setting_number_pane_t2_ParamLimits

0x8da0,	// (0x0004635f) list_setting_number_pane_t2

0xa8a7,	// (0x00047e66) list_setting_number_pane_t3_ParamLimits

0xa8a7,	// (0x00047e66) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0004cc52) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0004cc52) list_setting_number_pane_t

0x8d63,	// (0x00046322) set_value_pane_ParamLimits

0x8d63,	// (0x00046322) set_value_pane

0x47d6,	// (0x00041d95) bg_set_opt_pane_ParamLimits

0x47d6,	// (0x00041d95) bg_set_opt_pane

0xa8ea,	// (0x00047ea9) set_value_pane_t1

0x47f7,	// (0x00041db6) slider_set_pane_cp3

0x4800,	// (0x00041dbf) volume_small_pane_cp

0x4809,	// (0x00041dc8) list_form_gen_pane

0x4812,	// (0x00041dd1) scroll_pane_cp8

0xa900,	// (0x00047ebf) form_field_data_pane_ParamLimits

0xa900,	// (0x00047ebf) form_field_data_pane

0xa920,	// (0x00047edf) form_field_data_wide_pane_ParamLimits

0xa920,	// (0x00047edf) form_field_data_wide_pane

0xa941,	// (0x00047f00) form_field_popup_pane_ParamLimits

0xa941,	// (0x00047f00) form_field_popup_pane

0xa95f,	// (0x00047f1e) form_field_popup_wide_pane_ParamLimits

0xa95f,	// (0x00047f1e) form_field_popup_wide_pane

0xa97c,	// (0x00047f3b) form_field_slider_pane_ParamLimits

0xa97c,	// (0x00047f3b) form_field_slider_pane

0xa98f,	// (0x00047f4e) form_field_slider_wide_pane_ParamLimits

0xa98f,	// (0x00047f4e) form_field_slider_wide_pane

0x4823,	// (0x00041de2) data_form_pane

0xa9ac,	// (0x00047f6b) form_field_data_pane_t1

0x482f,	// (0x00041dee) input_focus_pane

0x483d,	// (0x00041dfc) data_form_wide_pane

0xa9d2,	// (0x00047f91) form_field_data_wide_pane_t1

0x45aa,	// (0x00041b69) input_focus_pane_cp6

0xa9f4,	// (0x00047fb3) form_field_popup_pane_t1

0x482f,	// (0x00041dee) input_focus_pane_cp7

0x4869,	// (0x00041e28) list_form_pane

0xaa16,	// (0x00047fd5) form_field_popup_wide_pane_t1

0x482f,	// (0x00041dee) input_focus_pane_cp8

0x4875,	// (0x00041e34) list_form_wide_pane

0xaa33,	// (0x00047ff2) form_field_slider_pane_t1_ParamLimits

0xaa33,	// (0x00047ff2) form_field_slider_pane_t1

0xaa4b,	// (0x0004800a) form_field_slider_pane_t2_ParamLimits

0xaa4b,	// (0x0004800a) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0004cc62) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0004cc62) form_field_slider_pane_t

0x405a,	// (0x00041619) input_focus_pane_cp9_ParamLimits

0x405a,	// (0x00041619) input_focus_pane_cp9

0xaa60,	// (0x0004801f) slider_cont_pane_ParamLimits

0xaa60,	// (0x0004801f) slider_cont_pane

0x4884,	// (0x00041e43) form_field_slider_wide_pane_t1_ParamLimits

0x4884,	// (0x00041e43) form_field_slider_wide_pane_t1

0xaa74,	// (0x00048033) form_field_slider_wide_pane_t2_ParamLimits

0xaa74,	// (0x00048033) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0004cc67) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0004cc67) form_field_slider_wide_pane_t

0x405a,	// (0x00041619) input_focus_pane_cp10_ParamLimits

0x405a,	// (0x00041619) input_focus_pane_cp10

0xaa86,	// (0x00048045) slider_cont_pane_cp1_ParamLimits

0xaa86,	// (0x00048045) slider_cont_pane_cp1

0xaa9a,	// (0x00048059) slider_form_pane_cp

0x4896,	// (0x00041e55) input_focus_pane_g1

0x489e,	// (0x00041e5d) input_focus_pane_g2

0x48a6,	// (0x00041e65) input_focus_pane_g3

0x48ae,	// (0x00041e6d) input_focus_pane_g4

0x48b6,	// (0x00041e75) input_focus_pane_g5

0x48be,	// (0x00041e7d) input_focus_pane_g6

0x48c6,	// (0x00041e85) input_focus_pane_g7

0x48ce,	// (0x00041e8d) input_focus_pane_g8

0x48d6,	// (0x00041e95) input_focus_pane_g9

0x4002,	// (0x000415c1) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0004cc6c) input_focus_pane_g

0x5cf9,	// (0x000432b8) wait_border_pane_g3_copy1

0xaaa2,	// (0x00048061) data_form_pane_t1

0x4002,	// (0x000415c1) wait_anim_pane_g1_copy1

0xafb6,	// (0x00048575) data_form_wide_pane_t1

0xaabd,	// (0x0004807c) list_form_graphic_pane_cp_ParamLimits

0xaabd,	// (0x0004807c) list_form_graphic_pane_cp

0x691a,	// (0x00043ed9) slider_form_pane_g1

0x6923,	// (0x00043ee2) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0004cf64) slider_form_pane_g

0xaad4,	// (0x00048093) list_form_graphic_pane_ParamLimits

0xaad4,	// (0x00048093) list_form_graphic_pane

0xaaee,	// (0x000480ad) list_form_graphic_pane_g1

0xaaf6,	// (0x000480b5) list_form_graphic_pane_t1_ParamLimits

0xaaf6,	// (0x000480b5) list_form_graphic_pane_t1

0x4068,	// (0x00041627) list_highlight_pane_cp5_ParamLimits

0x4068,	// (0x00041627) list_highlight_pane_cp5

0xab0b,	// (0x000480ca) find_pane_g1

0x48de,	// (0x00041e9d) input_find_pane

0xab14,	// (0x000480d3) input_find_pane_g1_ParamLimits

0xab14,	// (0x000480d3) input_find_pane_g1

0xab20,	// (0x000480df) input_find_pane_t1_ParamLimits

0xab20,	// (0x000480df) input_find_pane_t1

0xab35,	// (0x000480f4) input_find_pane_t2_ParamLimits

0xab35,	// (0x000480f4) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0004cc81) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0004cc81) input_find_pane_t

0x48e7,	// (0x00041ea6) input_focus_pane_cp5_ParamLimits

0x48e7,	// (0x00041ea6) input_focus_pane_cp5

0xab56,	// (0x00048115) bg_popup_window_pane_cp2_ParamLimits

0xab56,	// (0x00048115) bg_popup_window_pane_cp2

0xab63,	// (0x00048122) listscroll_menu_pane_ParamLimits

0xab63,	// (0x00048122) listscroll_menu_pane

0xab6f,	// (0x0004812e) popup_submenu_window_ParamLimits

0xab6f,	// (0x0004812e) popup_submenu_window

0x48f5,	// (0x00041eb4) find_popup_pane_g1

0x48fd,	// (0x00041ebc) input_popup_find_pane_cp

0x48e7,	// (0x00041ea6) input_focus_pane_cp4_ParamLimits

0x48e7,	// (0x00041ea6) input_focus_pane_cp4

0x4907,	// (0x00041ec6) input_popup_find_pane_t1_ParamLimits

0x4907,	// (0x00041ec6) input_popup_find_pane_t1

0x400c,	// (0x000415cb) bg_popup_sub_pane_cp

0x4935,	// (0x00041ef4) listscroll_popup_sub_pane

0x493d,	// (0x00041efc) list_submenu_pane_ParamLimits

0x493d,	// (0x00041efc) list_submenu_pane

0x494e,	// (0x00041f0d) scroll_pane_cp4

0x4956,	// (0x00041f15) list_single_popup_submenu_pane_ParamLimits

0x4956,	// (0x00041f15) list_single_popup_submenu_pane

0x4969,	// (0x00041f28) list_single_popup_submenu_pane_g1

0x4971,	// (0x00041f30) list_single_popup_submenu_pane_t1_ParamLimits

0x4971,	// (0x00041f30) list_single_popup_submenu_pane_t1

0x4068,	// (0x00041627) bg_active_tab_pane_cp1_ParamLimits

0x4068,	// (0x00041627) bg_active_tab_pane_cp1

0xaba1,	// (0x00048160) tabs_2_active_pane_g1

0xaba9,	// (0x00048168) tabs_2_active_pane_t1

0x4068,	// (0x00041627) bg_passive_tab_pane_cp1_ParamLimits

0x4068,	// (0x00041627) bg_passive_tab_pane_cp1

0xaba1,	// (0x00048160) tabs_2_passive_pane_g1

0xaba9,	// (0x00048168) tabs_2_passive_pane_t1

0x564f,	// (0x00042c0e) bg_active_tab_pane_cp4

0xabbb,	// (0x0004817a) tabs_2_long_active_pane_t1

0xabce,	// (0x0004818d) bg_passive_tab_pane_cp4

0x93f3,	// (0x000469b2) list_single_midp_graphic_pane_g4_ParamLimits

0x564f,	// (0x00042c0e) bg_active_tab_pane_cp5

0xabda,	// (0x00048199) tabs_3_long_active_pane_t1

0xabce,	// (0x0004818d) bg_passive_tab_pane_cp5

0x93f3,	// (0x000469b2) list_single_midp_graphic_pane_g4

0x4068,	// (0x00041627) bg_popup_window_pane_cp13_ParamLimits

0x4068,	// (0x00041627) bg_popup_window_pane_cp13

0x499b,	// (0x00041f5a) listscroll_popup_fast_pane_ParamLimits

0x499b,	// (0x00041f5a) listscroll_popup_fast_pane

0x49aa,	// (0x00041f69) grid_popup_fast_pane_ParamLimits

0x49aa,	// (0x00041f69) grid_popup_fast_pane

0x49bc,	// (0x00041f7b) scroll_pane_cp9_ParamLimits

0x49bc,	// (0x00041f7b) scroll_pane_cp9

0xc936,	// (0x00049ef5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc936,	// (0x00049ef5) list_single_graphic_hl_pane_t1_cp2

0x49e0,	// (0x00041f9f) input_focus_pane_cp20_ParamLimits

0x49e0,	// (0x00041f9f) input_focus_pane_cp20

0x49ee,	// (0x00041fad) query_popup_data_pane_t1_ParamLimits

0x49ee,	// (0x00041fad) query_popup_data_pane_t1

0x4a01,	// (0x00041fc0) query_popup_data_pane_t2_ParamLimits

0x4a01,	// (0x00041fc0) query_popup_data_pane_t2

0x4a47,	// (0x00042006) query_popup_data_pane_t3_ParamLimits

0x4a47,	// (0x00042006) query_popup_data_pane_t3

0x4a88,	// (0x00042047) query_popup_data_pane_t4_ParamLimits

0x4a88,	// (0x00042047) query_popup_data_pane_t4

0x4ac4,	// (0x00042083) query_popup_data_pane_t5_ParamLimits

0x4ac4,	// (0x00042083) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0004cc86) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0004cc86) query_popup_data_pane_t

0x4896,	// (0x00041e55) bg_set_opt_pane_g1

0x489e,	// (0x00041e5d) bg_set_opt_pane_g2

0x48a6,	// (0x00041e65) bg_set_opt_pane_g3

0x48ae,	// (0x00041e6d) bg_set_opt_pane_g4

0x48b6,	// (0x00041e75) bg_set_opt_pane_g5

0x48be,	// (0x00041e7d) bg_set_opt_pane_g6

0x48c6,	// (0x00041e85) bg_set_opt_pane_g7

0x48ce,	// (0x00041e8d) bg_set_opt_pane_g8

0x48d6,	// (0x00041e95) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0004cc91) bg_set_opt_pane_g

0x9059,	// (0x00046618) control_top_pane_stacon_ParamLimits

0x9059,	// (0x00046618) control_top_pane_stacon

0x90ac,	// (0x0004666b) signal_pane_stacon_ParamLimits

0x90ac,	// (0x0004666b) signal_pane_stacon

0x4f28,	// (0x000424e7) stacon_top_pane_g1_ParamLimits

0x4f28,	// (0x000424e7) stacon_top_pane_g1

0x90d1,	// (0x00046690) title_pane_stacon_ParamLimits

0x90d1,	// (0x00046690) title_pane_stacon

0x90fb,	// (0x000466ba) uni_indicator_pane_stacon_ParamLimits

0x90fb,	// (0x000466ba) uni_indicator_pane_stacon

0x9110,	// (0x000466cf) battery_pane_stacon_ParamLimits

0x9110,	// (0x000466cf) battery_pane_stacon

0x9154,	// (0x00046713) control_bottom_pane_stacon_ParamLimits

0x9154,	// (0x00046713) control_bottom_pane_stacon

0x9177,	// (0x00046736) navi_pane_stacon_ParamLimits

0x9177,	// (0x00046736) navi_pane_stacon

0x4f4a,	// (0x00042509) stacon_bottom_pane_g1_ParamLimits

0x4f4a,	// (0x00042509) stacon_bottom_pane_g1

0x8dba,	// (0x00046379) aid_levels_signal_lsc_ParamLimits

0x8dba,	// (0x00046379) aid_levels_signal_lsc

0x8dd1,	// (0x00046390) signal_pane_stacon_g1_ParamLimits

0x8dd1,	// (0x00046390) signal_pane_stacon_g1

0x8de5,	// (0x000463a4) signal_pane_stacon_g2_ParamLimits

0x8de5,	// (0x000463a4) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0004cca4) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0004cca4) signal_pane_stacon_g

0x8e1a,	// (0x000463d9) title_pane_stacon_t1_ParamLimits

0x8e1a,	// (0x000463d9) title_pane_stacon_t1

0x4b08,	// (0x000420c7) uni_indicator_pane_stacon_g1

0x4b26,	// (0x000420e5) uni_indicator_pane_stacon_g2

0x4b12,	// (0x000420d1) uni_indicator_pane_stacon_g3

0x4b1c,	// (0x000420db) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0004ccb0) uni_indicator_pane_stacon_g

0x8e3f,	// (0x000463fe) control_top_pane_stacon_g1

0x8e47,	// (0x00046406) control_top_pane_stacon_t1_ParamLimits

0x8e47,	// (0x00046406) control_top_pane_stacon_t1

0x8e7e,	// (0x0004643d) aid_levels_battery_lsc_ParamLimits

0x8e7e,	// (0x0004643d) aid_levels_battery_lsc

0x8e96,	// (0x00046455) battery_pane_stacon_g1_ParamLimits

0x8e96,	// (0x00046455) battery_pane_stacon_g1

0x8ea9,	// (0x00046468) battery_pane_stacon_g2_ParamLimits

0x8ea9,	// (0x00046468) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0004ccb9) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0004ccb9) battery_pane_stacon_g

0x8ee7,	// (0x000464a6) navi_icon_pane_stacon

0x8efb,	// (0x000464ba) navi_navi_pane_stacon

0x8ee7,	// (0x000464a6) navi_text_pane_stacon

0x8e3f,	// (0x000463fe) control_bottom_pane_stacon_g1

0x8f0f,	// (0x000464ce) control_bottom_pane_stacon_t1_ParamLimits

0x8f0f,	// (0x000464ce) control_bottom_pane_stacon_t1

0xabec,	// (0x000481ab) grid_app_pane_ParamLimits

0xabec,	// (0x000481ab) grid_app_pane

0xac0e,	// (0x000481cd) scroll_pane_cp15_ParamLimits

0xac0e,	// (0x000481cd) scroll_pane_cp15

0xac23,	// (0x000481e2) cell_app_pane_ParamLimits

0xac23,	// (0x000481e2) cell_app_pane

0xac4d,	// (0x0004820c) cell_app_pane_g1_ParamLimits

0xac4d,	// (0x0004820c) cell_app_pane_g1

0x4b4a,	// (0x00042109) cell_app_pane_g2_ParamLimits

0x4b4a,	// (0x00042109) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0004ccbe) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0004ccbe) cell_app_pane_g

0x4b56,	// (0x00042115) cell_app_pane_t1_ParamLimits

0x4b56,	// (0x00042115) cell_app_pane_t1

0x4b6d,	// (0x0004212c) grid_highlight_pane_ParamLimits

0x4b6d,	// (0x0004212c) grid_highlight_pane

0x4896,	// (0x00041e55) cell_highlight_pane_g1

0x489e,	// (0x00041e5d) cell_highlight_pane_g2

0x48a6,	// (0x00041e65) cell_highlight_pane_g3

0x48ae,	// (0x00041e6d) cell_highlight_pane_g4

0x48b6,	// (0x00041e75) cell_highlight_pane_g5

0x48be,	// (0x00041e7d) cell_highlight_pane_g6

0x48c6,	// (0x00041e85) cell_highlight_pane_g7

0x48ce,	// (0x00041e8d) cell_highlight_pane_g8

0x48d6,	// (0x00041e95) cell_highlight_pane_g9

0x4002,	// (0x000415c1) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0004cc6c) cell_highlight_pane_g

0x4b7e,	// (0x0004213d) bg_scroll_pane

0x8f59,	// (0x00046518) scroll_handle_pane

0x4bc5,	// (0x00042184) scroll_bg_pane_g1

0x4bda,	// (0x00042199) scroll_bg_pane_g2

0x4bf2,	// (0x000421b1) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0004ccc3) scroll_bg_pane_g

0x4c07,	// (0x000421c6) scroll_handle_focus_pane_ParamLimits

0x4c07,	// (0x000421c6) scroll_handle_focus_pane

0x4bc5,	// (0x00042184) scroll_handle_pane_g1

0x4c14,	// (0x000421d3) scroll_handle_pane_g2

0x4bf2,	// (0x000421b1) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0004ccca) scroll_handle_pane_g

0x48e7,	// (0x00041ea6) bg_popup_sub_pane_cp21_ParamLimits

0x48e7,	// (0x00041ea6) bg_popup_sub_pane_cp21

0x4c28,	// (0x000421e7) popup_fep_japan_predictive_window_t1_ParamLimits

0x4c28,	// (0x000421e7) popup_fep_japan_predictive_window_t1

0x4c3f,	// (0x000421fe) popup_fep_japan_predictive_window_t2_ParamLimits

0x4c3f,	// (0x000421fe) popup_fep_japan_predictive_window_t2

0x4c72,	// (0x00042231) popup_fep_japan_predictive_window_t3_ParamLimits

0x4c72,	// (0x00042231) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0004ccd1) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0004ccd1) popup_fep_japan_predictive_window_t

0x400c,	// (0x000415cb) bg_popup_sub_pane_cp23

0x4ca9,	// (0x00042268) listscroll_japin_cand_pane

0x4cb1,	// (0x00042270) popup_fep_japan_candidate_window_t1

0x4cbf,	// (0x0004227e) candidate_pane_ParamLimits

0x4cbf,	// (0x0004227e) candidate_pane

0x4cd1,	// (0x00042290) scroll_pane_cp30

0x4cd9,	// (0x00042298) list_single_popup_jap_candidate_pane_ParamLimits

0x4cd9,	// (0x00042298) list_single_popup_jap_candidate_pane

0x400c,	// (0x000415cb) list_highlight_pane_cp30

0x4ced,	// (0x000422ac) list_single_popup_jap_candidate_pane_t1

0x4cfc,	// (0x000422bb) level_1_signal

0x4d09,	// (0x000422c8) level_2_signal

0x4d16,	// (0x000422d5) level_3_signal

0x4d23,	// (0x000422e2) level_4_signal

0x4d30,	// (0x000422ef) level_5_signal

0x4d3d,	// (0x000422fc) level_6_signal

0x4d4a,	// (0x00042309) level_7_signal

0x4cfc,	// (0x000422bb) level_1_battery

0x4d09,	// (0x000422c8) level_2_battery

0x4d16,	// (0x000422d5) level_3_battery

0x4d23,	// (0x000422e2) level_4_battery

0x4d30,	// (0x000422ef) level_5_battery

0x4d3d,	// (0x000422fc) level_6_battery

0x4d4a,	// (0x00042309) level_7_battery

0x4d6f,	// (0x0004232e) list_menu_pane_ParamLimits

0x4d6f,	// (0x0004232e) list_menu_pane

0x4d80,	// (0x0004233f) scroll_pane_cp25_ParamLimits

0x4d80,	// (0x0004233f) scroll_pane_cp25

0x4d99,	// (0x00042358) list_double2_graphic_pane_cp2_ParamLimits

0x4d99,	// (0x00042358) list_double2_graphic_pane_cp2

0x4d99,	// (0x00042358) list_double2_large_graphic_pane_cp2_ParamLimits

0x4d99,	// (0x00042358) list_double2_large_graphic_pane_cp2

0x4d99,	// (0x00042358) list_double2_pane_cp2_ParamLimits

0x4d99,	// (0x00042358) list_double2_pane_cp2

0x4d99,	// (0x00042358) list_double_graphic_pane_cp2_ParamLimits

0x4d99,	// (0x00042358) list_double_graphic_pane_cp2

0x4d99,	// (0x00042358) list_double_large_graphic_pane_cp2_ParamLimits

0x4d99,	// (0x00042358) list_double_large_graphic_pane_cp2

0x4d99,	// (0x00042358) list_double_number_pane_cp2_ParamLimits

0x4d99,	// (0x00042358) list_double_number_pane_cp2

0x4d99,	// (0x00042358) list_double_pane_cp2_ParamLimits

0x4d99,	// (0x00042358) list_double_pane_cp2

0xac83,	// (0x00048242) list_single_2graphic_pane_cp2_ParamLimits

0xac83,	// (0x00048242) list_single_2graphic_pane_cp2

0xac83,	// (0x00048242) list_single_graphic_heading_pane_cp2_ParamLimits

0xac83,	// (0x00048242) list_single_graphic_heading_pane_cp2

0xac83,	// (0x00048242) list_single_graphic_pane_cp2_ParamLimits

0xac83,	// (0x00048242) list_single_graphic_pane_cp2

0xac83,	// (0x00048242) list_single_heading_pane_cp2_ParamLimits

0xac83,	// (0x00048242) list_single_heading_pane_cp2

0x4da9,	// (0x00042368) list_single_large_graphic_pane_cp2_ParamLimits

0x4da9,	// (0x00042368) list_single_large_graphic_pane_cp2

0xac83,	// (0x00048242) list_single_number_heading_pane_cp2_ParamLimits

0xac83,	// (0x00048242) list_single_number_heading_pane_cp2

0xac83,	// (0x00048242) list_single_number_pane_cp2_ParamLimits

0xac83,	// (0x00048242) list_single_number_pane_cp2

0xac83,	// (0x00048242) list_single_pane_cp2_ParamLimits

0xac83,	// (0x00048242) list_single_pane_cp2

0x4dc3,	// (0x00042382) bg_popup_sub_pane_cp22

0x900b,	// (0x000465ca) popup_side_volume_key_window_g1

0x9035,	// (0x000465f4) popup_side_volume_key_window_t1

0x9051,	// (0x00046610) volume_small_pane_cp1

0x405a,	// (0x00041619) bg_popup_sub_pane_cp24_ParamLimits

0x405a,	// (0x00041619) bg_popup_sub_pane_cp24

0x4dd9,	// (0x00042398) fep_china_uni_candidate_pane_ParamLimits

0x4dd9,	// (0x00042398) fep_china_uni_candidate_pane

0x4ded,	// (0x000423ac) fep_china_uni_entry_pane

0x4dfd,	// (0x000423bc) popup_fep_china_uni_window_g1

0x4e19,	// (0x000423d8) fep_china_uni_entry_pane_g1

0x4e21,	// (0x000423e0) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0004ccfe) fep_china_uni_entry_pane_g

0x4e29,	// (0x000423e8) fep_entry_item_pane

0x4e33,	// (0x000423f2) fep_candidate_item_pane

0x4e3b,	// (0x000423fa) fep_china_uni_candidate_pane_g1

0x4e43,	// (0x00042402) fep_china_uni_candidate_pane_g2

0x4e4b,	// (0x0004240a) fep_china_uni_candidate_pane_g3

0x4e53,	// (0x00042412) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0004cd03) fep_china_uni_candidate_pane_g

0x4002,	// (0x000415c1) fep_entry_item_pane_g1

0x4e5b,	// (0x0004241a) fep_entry_item_pane_t1_ParamLimits

0x4e5b,	// (0x0004241a) fep_entry_item_pane_t1

0x4e71,	// (0x00042430) fep_candidate_item_pane_t1_ParamLimits

0x4e71,	// (0x00042430) fep_candidate_item_pane_t1

0x4e86,	// (0x00042445) fep_candidate_item_pane_t2_ParamLimits

0x4e86,	// (0x00042445) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0004cd0c) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0004cd0c) fep_candidate_item_pane_t

0x4068,	// (0x00041627) list_highlight_pane_cp31_ParamLimits

0x4068,	// (0x00041627) list_highlight_pane_cp31

0x4e98,	// (0x00042457) level_1_signal_lsc

0x4ea1,	// (0x00042460) level_2_signal_lsc

0x4eaa,	// (0x00042469) level_3_signal_lsc

0x4eb3,	// (0x00042472) level_4_signal_lsc

0x4ebc,	// (0x0004247b) level_5_signal_lsc

0x4ec5,	// (0x00042484) level_6_signal_lsc

0x4ece,	// (0x0004248d) level_7_signal_lsc

0x4ece,	// (0x0004248d) level_1_battery_lsc

0x4ed7,	// (0x00042496) level_2_battery_lsc

0x4ee0,	// (0x0004249f) level_3_battery_lsc

0x4ee9,	// (0x000424a8) level_4_battery_lsc

0x4ef2,	// (0x000424b1) level_5_battery_lsc

0x4efb,	// (0x000424ba) level_6_battery_lsc

0x4e98,	// (0x00042457) level_7_battery_lsc

0x4f04,	// (0x000424c3) scroll_handle_focus_pane_g1

0x4f0d,	// (0x000424cc) scroll_handle_focus_pane_g2

0x4f16,	// (0x000424d5) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0004cd11) scroll_handle_focus_pane_g

0xacd6,	// (0x00048295) list_single_2graphic_pane_g1_ParamLimits

0xacd6,	// (0x00048295) list_single_2graphic_pane_g1

0x8a41,	// (0x00046000) list_single_2graphic_pane_g2_ParamLimits

0x8a41,	// (0x00046000) list_single_2graphic_pane_g2

0x89a6,	// (0x00045f65) list_single_2graphic_pane_g3_ParamLimits

0x89a6,	// (0x00045f65) list_single_2graphic_pane_g3

0xace2,	// (0x000482a1) list_single_2graphic_pane_g4_ParamLimits

0xace2,	// (0x000482a1) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0004cd18) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0004cd18) list_single_2graphic_pane_g

0xacf3,	// (0x000482b2) list_single_2graphic_pane_t1_ParamLimits

0xacf3,	// (0x000482b2) list_single_2graphic_pane_t1

0xad21,	// (0x000482e0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xad21,	// (0x000482e0) list_double2_graphic_large_graphic_pane_g1

0xa88a,	// (0x00047e49) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa88a,	// (0x00047e49) list_double2_graphic_large_graphic_pane_g2

0xa85d,	// (0x00047e1c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa85d,	// (0x00047e1c) list_double2_graphic_large_graphic_pane_g3

0xad31,	// (0x000482f0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xad31,	// (0x000482f0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0004cd21) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0004cd21) list_double2_graphic_large_graphic_pane_g

0xad3d,	// (0x000482fc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xad3d,	// (0x000482fc) list_double2_graphic_large_graphic_pane_t1

0xad53,	// (0x00048312) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xad53,	// (0x00048312) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0004cd2a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0004cd2a) list_double2_graphic_large_graphic_pane_t

0x4ff7,	// (0x000425b6) popup_fast_swap_window_ParamLimits

0x4ff7,	// (0x000425b6) popup_fast_swap_window

0x5013,	// (0x000425d2) popup_side_volume_key_window

0x502d,	// (0x000425ec) stacon_top_pane

0x5037,	// (0x000425f6) status_pane_ParamLimits

0x5037,	// (0x000425f6) status_pane

0x502d,	// (0x000425ec) status_small_pane

0x400c,	// (0x000415cb) control_pane

0x400c,	// (0x000415cb) stacon_bottom_pane

0x4812,	// (0x00041dd1) scroll_pane_cp121

0x4809,	// (0x00041dc8) set_content_pane

0xad65,	// (0x00048324) bg_active_tab_pane_g1_cp1

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp1

0xad6e,	// (0x0004832d) bg_active_tab_pane_g3_cp1

0xad65,	// (0x00048324) bg_passive_tab_pane_g1_cp1

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp1

0xad6e,	// (0x0004832d) bg_passive_tab_pane_g3_cp1

0xad77,	// (0x00048336) bg_active_tab_pane_g1_cp2

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp2

0xad80,	// (0x0004833f) bg_active_tab_pane_g3_cp2

0xad77,	// (0x00048336) bg_passive_tab_pane_g1_cp2

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp2

0xad80,	// (0x0004833f) bg_passive_tab_pane_g3_cp2

0xad89,	// (0x00048348) bg_active_tab_pane_g1_cp3

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp3

0xad92,	// (0x00048351) bg_active_tab_pane_g3_cp3

0xad89,	// (0x00048348) bg_passive_tab_pane_g1_cp3

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp3

0xad92,	// (0x00048351) bg_passive_tab_pane_g3_cp3

0xad9b,	// (0x0004835a) bg_active_tab_pane_g1_cp4

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp4

0xada6,	// (0x00048365) bg_active_tab_pane_g3_cp4

0xad9b,	// (0x0004835a) bg_passive_tab_pane_g1_cp4

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp4

0xada6,	// (0x00048365) bg_passive_tab_pane_g3_cp4

0x4f6f,	// (0x0004252e) bg_active_tab_pane_g1_cp5

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp5

0x4f66,	// (0x00042525) bg_active_tab_pane_g3_cp5

0x4f6f,	// (0x0004252e) bg_passive_tab_pane_g1_cp5

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp5

0x4f66,	// (0x00042525) bg_passive_tab_pane_g3_cp5

0xadb1,	// (0x00048370) list_set_graphic_pane_ParamLimits

0xadb1,	// (0x00048370) list_set_graphic_pane

0x400c,	// (0x000415cb) bg_set_opt_pane_cp4

0x4f78,	// (0x00042537) list_set_graphic_pane_g1_ParamLimits

0x4f78,	// (0x00042537) list_set_graphic_pane_g1

0x4f84,	// (0x00042543) list_set_graphic_pane_g2_ParamLimits

0x4f84,	// (0x00042543) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0004cd2f) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0004cd2f) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0004d097) volume_small_pane_cp_g

0x4fa8,	// (0x00042567) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4fa8,	// (0x00042567) list_double2_large_graphic_pane_g1_cp2

0x4fb6,	// (0x00042575) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4fb6,	// (0x00042575) list_double2_large_graphic_pane_g2_cp2

0x4fc7,	// (0x00042586) list_double2_large_graphic_pane_g3_cp2

0x4fcf,	// (0x0004258e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4fcf,	// (0x0004258e) list_double2_large_graphic_pane_t1_cp2

0x4fe5,	// (0x000425a4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4fe5,	// (0x000425a4) list_double2_large_graphic_pane_t2_cp2

0x66be,	// (0x00043c7d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x66be,	// (0x00043c7d) list_double_large_graphic_pane_g1_cp2

0x66d1,	// (0x00043c90) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x66d1,	// (0x00043c90) list_double_large_graphic_pane_g2_cp2

0x5155,	// (0x00042714) list_double_large_graphic_pane_g3_cp2

0x66e2,	// (0x00043ca1) list_double_large_graphic_pane_g4_cp

0x66ea,	// (0x00043ca9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x66ea,	// (0x00043ca9) list_double_large_graphic_pane_t1_cp2

0x6701,	// (0x00043cc0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6701,	// (0x00043cc0) list_double_large_graphic_pane_t2_cp2

0x5045,	// (0x00042604) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5045,	// (0x00042604) list_double2_graphic_pane_g1_cp2

0x5053,	// (0x00042612) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5053,	// (0x00042612) list_double2_graphic_pane_g2_cp2

0x5064,	// (0x00042623) list_double2_graphic_pane_g3_cp2

0x506e,	// (0x0004262d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x506e,	// (0x0004262d) list_double2_graphic_pane_t1_cp2

0x5084,	// (0x00042643) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5084,	// (0x00042643) list_double2_graphic_pane_t2_cp2

0x5096,	// (0x00042655) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5096,	// (0x00042655) list_single_number_heading_pane_g1_cp2

0x50a2,	// (0x00042661) list_single_number_heading_pane_g2_cp2

0x50aa,	// (0x00042669) list_single_number_heading_pane_t1_cp2_ParamLimits

0x50aa,	// (0x00042669) list_single_number_heading_pane_t1_cp2

0x50c0,	// (0x0004267f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x50c0,	// (0x0004267f) list_single_number_heading_pane_t2_cp2

0x50d4,	// (0x00042693) list_single_number_heading_pane_t3_cp2_ParamLimits

0x50d4,	// (0x00042693) list_single_number_heading_pane_t3_cp2

0x5096,	// (0x00042655) list_single_heading_pane_g1_cp2_ParamLimits

0x5096,	// (0x00042655) list_single_heading_pane_g1_cp2

0x50a2,	// (0x00042661) list_single_heading_pane_g2_cp2

0x50aa,	// (0x00042669) list_single_heading_pane_t1_cp2_ParamLimits

0x50aa,	// (0x00042669) list_single_heading_pane_t1_cp2

0x64c6,	// (0x00043a85) list_single_heading_pane_t2_cp2_ParamLimits

0x64c6,	// (0x00043a85) list_single_heading_pane_t2_cp2

0x6460,	// (0x00043a1f) list_double_graphic_pane_g1_cp2_ParamLimits

0x6460,	// (0x00043a1f) list_double_graphic_pane_g1_cp2

0x646c,	// (0x00043a2b) list_double_graphic_pane_g2_cp2_ParamLimits

0x646c,	// (0x00043a2b) list_double_graphic_pane_g2_cp2

0x647b,	// (0x00043a3a) list_double_graphic_pane_g3_cp2

0x6483,	// (0x00043a42) list_double_graphic_pane_t1_cp2_ParamLimits

0x6483,	// (0x00043a42) list_double_graphic_pane_t1_cp2

0x6499,	// (0x00043a58) list_double_graphic_pane_t2_cp2_ParamLimits

0x6499,	// (0x00043a58) list_double_graphic_pane_t2_cp2

0x5149,	// (0x00042708) list_double_number_pane_g1_cp2_ParamLimits

0x5149,	// (0x00042708) list_double_number_pane_g1_cp2

0x5155,	// (0x00042714) list_double_number_pane_g2_cp2

0x6424,	// (0x000439e3) list_double_number_pane_t1_cp2_ParamLimits

0x6424,	// (0x000439e3) list_double_number_pane_t1_cp2

0x6438,	// (0x000439f7) list_double_number_pane_t2_cp2_ParamLimits

0x6438,	// (0x000439f7) list_double_number_pane_t2_cp2

0x644e,	// (0x00043a0d) list_double_number_pane_t3_cp2_ParamLimits

0x644e,	// (0x00043a0d) list_double_number_pane_t3_cp2

0x639b,	// (0x0004395a) list_single_graphic_pane_g1_cp2_ParamLimits

0x639b,	// (0x0004395a) list_single_graphic_pane_g1_cp2

0x51ad,	// (0x0004276c) list_single_graphic_pane_g2_cp2_ParamLimits

0x51ad,	// (0x0004276c) list_single_graphic_pane_g2_cp2

0x51b9,	// (0x00042778) list_single_graphic_pane_g3_cp2

0x6371,	// (0x00043930) list_single_graphic_pane_t1_cp2_ParamLimits

0x6371,	// (0x00043930) list_single_graphic_pane_t1_cp2

0x51ad,	// (0x0004276c) list_single_number_pane_g1_cp2_ParamLimits

0x51ad,	// (0x0004276c) list_single_number_pane_g1_cp2

0x51b9,	// (0x00042778) list_single_number_pane_g2_cp2

0x6371,	// (0x00043930) list_single_number_pane_t1_cp2_ParamLimits

0x6371,	// (0x00043930) list_single_number_pane_t1_cp2

0x6387,	// (0x00043946) list_single_number_pane_t2_cp2_ParamLimits

0x6387,	// (0x00043946) list_single_number_pane_t2_cp2

0x4fb6,	// (0x00042575) list_double2_pane_g1_cp2_ParamLimits

0x4fb6,	// (0x00042575) list_double2_pane_g1_cp2

0x4fc7,	// (0x00042586) list_double2_pane_g2_cp2

0x5121,	// (0x000426e0) list_double2_pane_t1_cp2_ParamLimits

0x5121,	// (0x000426e0) list_double2_pane_t1_cp2

0x5137,	// (0x000426f6) list_double2_pane_t2_cp2_ParamLimits

0x5137,	// (0x000426f6) list_double2_pane_t2_cp2

0x5149,	// (0x00042708) list_double_pane_g1_cp2_ParamLimits

0x5149,	// (0x00042708) list_double_pane_g1_cp2

0x5155,	// (0x00042714) list_double_pane_g2_cp2

0x515d,	// (0x0004271c) list_double_pane_t1_cp2_ParamLimits

0x515d,	// (0x0004271c) list_double_pane_t1_cp2

0x5173,	// (0x00042732) list_double_pane_t2_cp2_ParamLimits

0x5173,	// (0x00042732) list_double_pane_t2_cp2

0x519d,	// (0x0004275c) list_single_pane_cp2_g3

0x51ad,	// (0x0004276c) list_single_pane_g1_cp2_ParamLimits

0x51ad,	// (0x0004276c) list_single_pane_g1_cp2

0x51b9,	// (0x00042778) list_single_pane_g2_cp2

0x51c1,	// (0x00042780) list_single_pane_t1_cp2_ParamLimits

0x51c1,	// (0x00042780) list_single_pane_t1_cp2

0x51d9,	// (0x00042798) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x51d9,	// (0x00042798) list_single_large_graphic_pane_g1_cp2

0x51e7,	// (0x000427a6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x51e7,	// (0x000427a6) list_single_large_graphic_pane_g2_cp2

0x51f3,	// (0x000427b2) list_single_large_graphic_pane_g3_cp2

0x51fb,	// (0x000427ba) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x51fb,	// (0x000427ba) list_single_large_graphic_pane_g4_cp1

0x5215,	// (0x000427d4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5215,	// (0x000427d4) list_single_large_graphic_pane_t1_cp2

0x633b,	// (0x000438fa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x633b,	// (0x000438fa) list_single_graphic_heading_pane_g1_cp2

0x6308,	// (0x000438c7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6308,	// (0x000438c7) list_single_graphic_heading_pane_g4_cp2

0x51b9,	// (0x00042778) list_single_graphic_heading_pane_g5_cp2

0x6347,	// (0x00043906) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6347,	// (0x00043906) list_single_graphic_heading_pane_t1_cp2

0x635d,	// (0x0004391c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x635d,	// (0x0004391c) list_single_graphic_heading_pane_t2_cp2

0x62fc,	// (0x000438bb) list_single_2graphic_pane_g1_cp2_ParamLimits

0x62fc,	// (0x000438bb) list_single_2graphic_pane_g1_cp2

0x6308,	// (0x000438c7) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6308,	// (0x000438c7) list_single_2graphic_pane_g2_cp2

0x51b9,	// (0x00042778) list_single_2graphic_pane_g3_cp2

0x6319,	// (0x000438d8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6319,	// (0x000438d8) list_single_2graphic_pane_g4_cp2

0x6325,	// (0x000438e4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6325,	// (0x000438e4) list_single_2graphic_pane_t1_cp2

0x4002,	// (0x000415c1) list_highlight_pane_g10_cp1

0x5f02,	// (0x000434c1) list_highlight_pane_g1_cp1

0x5f0a,	// (0x000434c9) list_highlight_pane_g2_cp1

0x5f12,	// (0x000434d1) list_highlight_pane_g3_cp1

0x5f1a,	// (0x000434d9) list_highlight_pane_g4_cp1

0x5f22,	// (0x000434e1) list_highlight_pane_g5_cp1

0x5f2a,	// (0x000434e9) list_highlight_pane_g6_cp1

0x5f32,	// (0x000434f1) list_highlight_pane_g7_cp1

0x5f3a,	// (0x000434f9) list_highlight_pane_g8_cp1

0x5f42,	// (0x00043501) list_highlight_pane_g9_cp1

0xbfae,	// (0x0004956d) form_field_slider_pane_t3

0xbfbc,	// (0x0004957b) form_field_slider_pane_t4

0x5e24,	// (0x000433e3) slider_form_pane_ParamLimits

0x5e24,	// (0x000433e3) slider_form_pane

0x400c,	// (0x000415cb) control_abbreviations

0x400c,	// (0x000415cb) control_conventions

0x400c,	// (0x000415cb) control_definitions

0x400c,	// (0x000415cb) format_table_attribute

0x6512,	// (0x00043ad1) bg_popup_preview_window_pane_g9

0x400c,	// (0x000415cb) format_table_data2

0x400c,	// (0x000415cb) format_table_data3

0x400c,	// (0x000415cb) format_table_data_example

0x0008,

0x400c,	// (0x000415cb) intro_purpose

0xf905,	// (0x0004cec4) bg_popup_preview_window_pane_g

0x400c,	// (0x000415cb) texts_category

0x400c,	// (0x000415cb) texts_graphics

0x522b,	// (0x000427ea) text_digital

0x523a,	// (0x000427f9) text_primary

0x5249,	// (0x00042808) text_primary_small

0x5258,	// (0x00042817) text_secondary

0x5267,	// (0x00042826) text_title

0x69b1,	// (0x00043f70) bg_passive_tab_pane_g1_cp3_srt

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp3_srt

0x69a8,	// (0x00043f67) bg_passive_tab_pane_g3_cp3_srt

0x4068,	// (0x00041627) bg_active_tab_pane_cp3_srt_ParamLimits

0x4068,	// (0x00041627) bg_active_tab_pane_cp3_srt

0x69ba,	// (0x00043f79) tabs_4_active_pane_srt_g1

0xc317,	// (0x000498d6) tabs_4_active_pane_srt_t1_ParamLimits

0xc317,	// (0x000498d6) tabs_4_active_pane_srt_t1

0x69b1,	// (0x00043f70) bg_active_tab_pane_g1_cp3_copy1

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp3_copy1

0x69a8,	// (0x00043f67) bg_active_tab_pane_g3_cp3_copy1

0x4068,	// (0x00041627) tabs_2_long_active_pane_srt_ParamLimits

0x4068,	// (0x00041627) tabs_2_long_active_pane_srt

0x4068,	// (0x00041627) tabs_2_long_passive_pane_srt_ParamLimits

0x4068,	// (0x00041627) tabs_2_long_passive_pane_srt

0xabce,	// (0x0004818d) bg_passive_tab_pane_cp4_srt_ParamLimits

0xabce,	// (0x0004818d) bg_passive_tab_pane_cp4_srt

0x68dc,	// (0x00043e9b) bg_passive_tab_pane_g1_cp4_srt

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp4_srt

0x68d3,	// (0x00043e92) bg_passive_tab_pane_g3_cp4_srt

0x564f,	// (0x00042c0e) bg_active_tab_pane_cp4_srt_ParamLimits

0x564f,	// (0x00042c0e) bg_active_tab_pane_cp4_srt

0xc15e,	// (0x0004971d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc15e,	// (0x0004971d) tabs_2_long_active_pane_srt_t1

0x68dc,	// (0x00043e9b) bg_active_tab_pane_g1_cp4_srt

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp4_srt

0x68d3,	// (0x00043e92) bg_active_tab_pane_g3_cp4_srt

0x405a,	// (0x00041619) tabs_3_long_active_pane_srt_ParamLimits

0x405a,	// (0x00041619) tabs_3_long_active_pane_srt

0x405a,	// (0x00041619) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x405a,	// (0x00041619) tabs_3_long_passive_pane_cp_srt

0x405a,	// (0x00041619) tabs_3_long_passive_pane_srt_ParamLimits

0x405a,	// (0x00041619) tabs_3_long_passive_pane_srt

0xabce,	// (0x0004818d) bg_passive_tab_pane_cp5_srt_ParamLimits

0xabce,	// (0x0004818d) bg_passive_tab_pane_cp5_srt

0x4f6f,	// (0x0004252e) bg_passive_tab_pane_g1_cp5_srt

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp5_srt

0x4f66,	// (0x00042525) bg_passive_tab_pane_g3_cp5_srt

0x564f,	// (0x00042c0e) bg_active_tab_pane_cp5_srt_ParamLimits

0x564f,	// (0x00042c0e) bg_active_tab_pane_cp5_srt

0xc14c,	// (0x0004970b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc14c,	// (0x0004970b) tabs_3_long_active_pane_srt_t1

0x4f6f,	// (0x0004252e) bg_active_tab_pane_g1_cp5_srt

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp5_srt

0x4f66,	// (0x00042525) bg_active_tab_pane_g3_cp5_srt

0x68c5,	// (0x00043e84) navi_text_pane_srt_t1

0x68bd,	// (0x00043e7c) navi_icon_pane_srt_g1

0x5365,	// (0x00042924) midp_editing_number_pane_srt

0x5276,	// (0x00042835) midp_ticker_pane_srt

0x536d,	// (0x0004292c) midp_ticker_pane_srt_g1

0x5375,	// (0x00042934) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004cd4e) midp_ticker_pane_srt_g

0x537d,	// (0x0004293c) midp_ticker_pane_srt_t1

0x68ae,	// (0x00043e6d) midp_editing_number_pane_t1_copy1

0xadcf,	// (0x0004838e) listscroll_midp_pane

0xadcf,	// (0x0004838e) midp_form_pane

0x527e,	// (0x0004283d) midp_info_popup_window_ParamLimits

0x527e,	// (0x0004283d) midp_info_popup_window

0x48e7,	// (0x00041ea6) bg_popup_sub_pane_cp50_ParamLimits

0x48e7,	// (0x00041ea6) bg_popup_sub_pane_cp50

0x5b41,	// (0x00043100) listscroll_midp_info_pane_ParamLimits

0x5b41,	// (0x00043100) listscroll_midp_info_pane

0x5b29,	// (0x000430e8) listscroll_form_midp_pane_ParamLimits

0x5b29,	// (0x000430e8) listscroll_form_midp_pane

0x5b35,	// (0x000430f4) scroll_bar_cp050

0xbf96,	// (0x00049555) list_midp_pane

0x727c,	// (0x0004483b) signal_pane_g2_cp

0x5a5b,	// (0x0004301a) listscroll_midp_info_pane_t1_ParamLimits

0x5a5b,	// (0x0004301a) listscroll_midp_info_pane_t1

0x5a73,	// (0x00043032) listscroll_midp_info_pane_t2_ParamLimits

0x5a73,	// (0x00043032) listscroll_midp_info_pane_t2

0x5ab1,	// (0x00043070) listscroll_midp_info_pane_t3_ParamLimits

0x5ab1,	// (0x00043070) listscroll_midp_info_pane_t3

0x5aeb,	// (0x000430aa) listscroll_midp_info_pane_t4_ParamLimits

0x5aeb,	// (0x000430aa) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0004cdff) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0004cdff) listscroll_midp_info_pane_t

0x494e,	// (0x00041f0d) scroll_pane_cp21

0x59ff,	// (0x00042fbe) form_midp_field_choice_group_pane

0x5a08,	// (0x00042fc7) form_midp_field_text_pane

0x5a41,	// (0x00043000) form_midp_field_time_pane

0x5a49,	// (0x00043008) form_midp_gauge_slider_pane

0x5a52,	// (0x00043011) form_midp_gauge_wait_pane

0x400c,	// (0x000415cb) form_midp_image_pane

0xaf56,	// (0x00048515) list_single_midp_pane_ParamLimits

0xaf56,	// (0x00048515) list_single_midp_pane

0xbf57,	// (0x00049516) form_midp_field_text_pane_t1

0x58a6,	// (0x00042e65) input_focus_pane_cp050

0x59ee,	// (0x00042fad) list_midp_form_text_pane

0x59bd,	// (0x00042f7c) form_midp_field_choice_group_pane_t1

0x59cb,	// (0x00042f8a) input_focus_pane_cp051

0x59df,	// (0x00042f9e) list_midp_choice_pane

0x400c,	// (0x000415cb) status_idle_pane

0x59a1,	// (0x00042f60) form_midp_field_time_pane_t1

0x4002,	// (0x000415c1) wait_anim_pane_g2_copy1

0x59af,	// (0x00042f6e) form_midp_field_time_pane_t2

0x0001,

0x52d7,	// (0x00042896) aid_navinavi_width_2_pane

0xf83b,	// (0x0004cdfa) form_midp_field_time_pane_t

0x400c,	// (0x000415cb) input_focus_pane_cp052

0x400c,	// (0x000415cb) bg_input_focus_pane_cp040

0x597d,	// (0x00042f3c) form_midp_gauge_slider_pane_t1

0x598b,	// (0x00042f4a) form_midp_gauge_slider_pane_t2

0xbf3b,	// (0x000494fa) form_midp_gauge_slider_pane_t3

0xbf49,	// (0x00049508) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0004cdf1) form_midp_gauge_slider_pane_t

0x5999,	// (0x00042f58) form_midp_slider_pane

0x4068,	// (0x00041627) bg_input_focus_pane_cp041_ParamLimits

0x4068,	// (0x00041627) bg_input_focus_pane_cp041

0x594a,	// (0x00042f09) form_midp_gauge_wait_pane_t1_ParamLimits

0x594a,	// (0x00042f09) form_midp_gauge_wait_pane_t1

0x595c,	// (0x00042f1b) form_midp_gauge_wait_pane_t2_ParamLimits

0x595c,	// (0x00042f1b) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0004cdec) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0004cdec) form_midp_gauge_wait_pane_t

0x596e,	// (0x00042f2d) form_midp_wait_pane_ParamLimits

0x596e,	// (0x00042f2d) form_midp_wait_pane

0x5914,	// (0x00042ed3) form_midp_image_pane_g1

0x591d,	// (0x00042edc) form_midp_image_pane_t1

0x592c,	// (0x00042eeb) form_midp_image_pane_t2

0x593b,	// (0x00042efa) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0004cde5) form_midp_image_pane_t

0x590b,	// (0x00042eca) list_single_midp_pane_g1

0xaf47,	// (0x00048506) list_single_midp_pane_t1

0xbf0b,	// (0x000494ca) list_midp_form_item_pane_ParamLimits

0xbf0b,	// (0x000494ca) list_midp_form_item_pane

0x5291,	// (0x00042850) list_midp_form_item_pane_t1

0x52a0,	// (0x0004285f) midp_ticker_pane_g1

0x52ac,	// (0x0004286b) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0004cd34) midp_ticker_pane_g

0xae84,	// (0x00048443) midp_ticker_pane_t1

0xc2cd,	// (0x0004988c) midp_editing_number_pane_t1

0x693c,	// (0x00043efb) midp_editing_number_pane

0x694b,	// (0x00043f0a) midp_ticker_pane

0x689e,	// (0x00043e5d) ai_message_heading_pane

0x400c,	// (0x000415cb) bg_popup_window_pane_cp14

0x68a6,	// (0x00043e65) listscroll_ai_message_pane

0x6828,	// (0x00043de7) ai_message_heading_pane_g1_ParamLimits

0x6828,	// (0x00043de7) ai_message_heading_pane_g1

0x6834,	// (0x00043df3) ai_message_heading_pane_g2_ParamLimits

0x6834,	// (0x00043df3) ai_message_heading_pane_g2

0x6840,	// (0x00043dff) ai_message_heading_pane_g3_ParamLimits

0x6840,	// (0x00043dff) ai_message_heading_pane_g3

0x684c,	// (0x00043e0b) ai_message_heading_pane_g4_ParamLimits

0x684c,	// (0x00043e0b) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0004cf26) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0004cf26) ai_message_heading_pane_g

0x6858,	// (0x00043e17) ai_message_heading_pane_t1_ParamLimits

0x6858,	// (0x00043e17) ai_message_heading_pane_t1

0x6872,	// (0x00043e31) ai_message_heading_pane_t2_ParamLimits

0x6872,	// (0x00043e31) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0004cf2f) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0004cf2f) ai_message_heading_pane_t

0x6884,	// (0x00043e43) bg_popup_heading_pane_cp1_ParamLimits

0x6884,	// (0x00043e43) bg_popup_heading_pane_cp1

0x6816,	// (0x00043dd5) list_ai_message_pane_ParamLimits

0x6816,	// (0x00043dd5) list_ai_message_pane

0x494e,	// (0x00041f0d) scroll_pane_cp10

0x67b2,	// (0x00043d71) list_ai_message_pane_g1

0x67ba,	// (0x00043d79) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0004cf03) list_ai_message_pane_g

0x67c2,	// (0x00043d81) list_ai_message_pane_t1_ParamLimits

0x67c2,	// (0x00043d81) list_ai_message_pane_t1

0x67d7,	// (0x00043d96) list_ai_message_pane_t2_ParamLimits

0x67d7,	// (0x00043d96) list_ai_message_pane_t2

0x67ec,	// (0x00043dab) list_ai_message_pane_t3_ParamLimits

0x67ec,	// (0x00043dab) list_ai_message_pane_t3

0x6801,	// (0x00043dc0) list_ai_message_pane_t4_ParamLimits

0x6801,	// (0x00043dc0) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0004cf08) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0004cf08) list_ai_message_pane_t

0xc136,	// (0x000496f5) cell_ai_soft_ind_pane_ParamLimits

0xc136,	// (0x000496f5) cell_ai_soft_ind_pane

0x52b8,	// (0x00042877) cell_ai_soft_ind_pane_g1_ParamLimits

0x52b8,	// (0x00042877) cell_ai_soft_ind_pane_g1

0x400c,	// (0x000415cb) grid_highlight_cp1

0x52c5,	// (0x00042884) text_secondary_cp56_ParamLimits

0x52c5,	// (0x00042884) text_secondary_cp56

0x6787,	// (0x00043d46) example_general_pane_ParamLimits

0x6787,	// (0x00043d46) example_general_pane

0x6793,	// (0x00043d52) example_parent_pane_g1_ParamLimits

0x6793,	// (0x00043d52) example_parent_pane_g1

0x679f,	// (0x00043d5e) example_parent_pane_t1_ParamLimits

0x679f,	// (0x00043d5e) example_parent_pane_t1

0xb91b,	// (0x00048eda) popup_preview_text_window_ParamLimits

0xb91b,	// (0x00048eda) popup_preview_text_window

0x51a5,	// (0x00042764) list_single_pane_cp2_g4

0x431a,	// (0x000418d9) bg_popup_preview_window_pane_ParamLimits

0x431a,	// (0x000418d9) bg_popup_preview_window_pane

0x651a,	// (0x00043ad9) popup_preview_text_window_t1_ParamLimits

0x651a,	// (0x00043ad9) popup_preview_text_window_t1

0x6538,	// (0x00043af7) popup_preview_text_window_t2_ParamLimits

0x6538,	// (0x00043af7) popup_preview_text_window_t2

0x6581,	// (0x00043b40) popup_preview_text_window_t3_ParamLimits

0x6581,	// (0x00043b40) popup_preview_text_window_t3

0x65c6,	// (0x00043b85) popup_preview_text_window_t4_ParamLimits

0x65c6,	// (0x00043b85) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0004ced7) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0004ced7) popup_preview_text_window_t

0x6644,	// (0x00043c03) scroll_pane_cp11

0x57b6,	// (0x00042d75) bg_popup_preview_window_pane_g1

0x64da,	// (0x00043a99) bg_popup_preview_window_pane_g2

0x64e2,	// (0x00043aa1) bg_popup_preview_window_pane_g3

0x64ea,	// (0x00043aa9) bg_popup_preview_window_pane_g4

0x64f2,	// (0x00043ab1) bg_popup_preview_window_pane_g5

0x64fa,	// (0x00043ab9) bg_popup_preview_window_pane_g6

0x6502,	// (0x00043ac1) bg_popup_preview_window_pane_g7

0x650a,	// (0x00043ac9) bg_popup_preview_window_pane_g8

0x8525,	// (0x00045ae4) aid_popup_width_pane

0xb8f9,	// (0x00048eb8) popup_midp_note_alarm_window_ParamLimits

0xb8f9,	// (0x00048eb8) popup_midp_note_alarm_window

0x4823,	// (0x00041de2) data_form_pane_ParamLimits

0xa9a2,	// (0x00047f61) form_field_data_pane_g1

0xa9ac,	// (0x00047f6b) form_field_data_pane_t1_ParamLimits

0x482f,	// (0x00041dee) input_focus_pane_ParamLimits

0x483d,	// (0x00041dfc) data_form_wide_pane_ParamLimits

0xa9c6,	// (0x00047f85) form_field_data_wide_pane_g1

0xa9d2,	// (0x00047f91) form_field_data_wide_pane_t1_ParamLimits

0x45aa,	// (0x00041b69) input_focus_pane_cp6_ParamLimits

0xab93,	// (0x00048152) input_popup_find_pane_g1_ParamLimits

0xab93,	// (0x00048152) input_popup_find_pane_g1

0x8eba,	// (0x00046479) aid_navi_side_left_pane

0x8ecf,	// (0x0004648e) aid_navi_side_right_pane

0x5fdf,	// (0x0004359e) bg_popup_window_pane_cp30_ParamLimits

0x5fdf,	// (0x0004359e) bg_popup_window_pane_cp30

0x6059,	// (0x00043618) popup_midp_note_alarm_window_g1_ParamLimits

0x6059,	// (0x00043618) popup_midp_note_alarm_window_g1

0x6089,	// (0x00043648) popup_midp_note_alarm_window_t1_ParamLimits

0x6089,	// (0x00043648) popup_midp_note_alarm_window_t1

0x612a,	// (0x000436e9) popup_midp_note_alarm_window_t2_ParamLimits

0x612a,	// (0x000436e9) popup_midp_note_alarm_window_t2

0x61d8,	// (0x00043797) popup_midp_note_alarm_window_t3_ParamLimits

0x61d8,	// (0x00043797) popup_midp_note_alarm_window_t3

0x6200,	// (0x000437bf) popup_midp_note_alarm_window_t4_ParamLimits

0x6200,	// (0x000437bf) popup_midp_note_alarm_window_t4

0x6220,	// (0x000437df) popup_midp_note_alarm_window_t5_ParamLimits

0x6220,	// (0x000437df) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0004ce74) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0004ce74) popup_midp_note_alarm_window_t

0x62cc,	// (0x0004388b) wait_bar_pane_cp1_ParamLimits

0x62cc,	// (0x0004388b) wait_bar_pane_cp1

0x400c,	// (0x000415cb) wait_anim_pane_copy1

0x400c,	// (0x000415cb) wait_border_pane_copy1

0x5ce5,	// (0x000432a4) wait_border_pane_g1_copy1

0xa9ec,	// (0x00047fab) form_field_popup_pane_g1

0xa9f4,	// (0x00047fb3) form_field_popup_pane_t1_ParamLimits

0x482f,	// (0x00041dee) input_focus_pane_cp7_ParamLimits

0x4869,	// (0x00041e28) list_form_pane_ParamLimits

0xaa0e,	// (0x00047fcd) form_field_popup_wide_pane_g1

0xaa16,	// (0x00047fd5) form_field_popup_wide_pane_t1_ParamLimits

0x482f,	// (0x00041dee) input_focus_pane_cp8_ParamLimits

0x4875,	// (0x00041e34) list_form_wide_pane_ParamLimits

0x69e1,	// (0x00043fa0) aid_size_cell_graphic_pane

0xaaa2,	// (0x00048061) data_form_pane_t1_ParamLimits

0xafb6,	// (0x00048575) data_form_wide_pane_t1_ParamLimits

0xbc00,	// (0x000491bf) bg_status_flat_pane

0xa57a,	// (0x00047b39) title_pane_t1_ParamLimits

0x4022,	// (0x000415e1) title_pane_t2_ParamLimits

0x4048,	// (0x00041607) title_pane_t3_ParamLimits

0xf573,	// (0x0004cb32) title_pane_t_ParamLimits

0x4cfc,	// (0x000422bb) level_1_signal_ParamLimits

0x4d09,	// (0x000422c8) level_2_signal_ParamLimits

0x4d16,	// (0x000422d5) level_3_signal_ParamLimits

0x4d23,	// (0x000422e2) level_4_signal_ParamLimits

0x4d30,	// (0x000422ef) level_5_signal_ParamLimits

0x4d3d,	// (0x000422fc) level_6_signal_ParamLimits

0x4d4a,	// (0x00042309) level_7_signal_ParamLimits

0x4cfc,	// (0x000422bb) level_1_battery_ParamLimits

0x4d09,	// (0x000422c8) level_2_battery_ParamLimits

0x4d16,	// (0x000422d5) level_3_battery_ParamLimits

0x4d23,	// (0x000422e2) level_4_battery_ParamLimits

0x4d30,	// (0x000422ef) level_5_battery_ParamLimits

0x4d3d,	// (0x000422fc) level_6_battery_ParamLimits

0x4d4a,	// (0x00042309) level_7_battery_ParamLimits

0x5f02,	// (0x000434c1) bg_status_flat_pane_g1

0x5f0a,	// (0x000434c9) bg_status_flat_pane_g2

0x5f12,	// (0x000434d1) bg_status_flat_pane_g3

0x5f1a,	// (0x000434d9) bg_status_flat_pane_g4

0x5f22,	// (0x000434e1) bg_status_flat_pane_g5

0x5f2a,	// (0x000434e9) bg_status_flat_pane_g6

0x5f32,	// (0x000434f1) bg_status_flat_pane_g7

0xa5ea,	// (0x00047ba9) tabs_3_active_pane_t1_ParamLimits

0xa5ea,	// (0x00047ba9) tabs_3_passive_pane_t1_ParamLimits

0xa604,	// (0x00047bc3) tabs_4_active_pane_t1_ParamLimits

0xa604,	// (0x00047bc3) tabs_4_1_passive_pane_t1_ParamLimits

0xaba9,	// (0x00048168) tabs_2_active_pane_t1_ParamLimits

0xaba9,	// (0x00048168) tabs_2_passive_pane_t1_ParamLimits

0x564f,	// (0x00042c0e) bg_active_tab_pane_cp4_ParamLimits

0xabbb,	// (0x0004817a) tabs_2_long_active_pane_t1_ParamLimits

0xabce,	// (0x0004818d) bg_passive_tab_pane_cp4_ParamLimits

0x9425,	// (0x000469e4) list_single_midp_graphic_pane_t1_ParamLimits

0x564f,	// (0x00042c0e) bg_active_tab_pane_cp5_ParamLimits

0xabda,	// (0x00048199) tabs_3_long_active_pane_t1_ParamLimits

0xabce,	// (0x0004818d) bg_passive_tab_pane_cp5_ParamLimits

0x9425,	// (0x000469e4) list_single_midp_graphic_pane_t1

0xbc00,	// (0x000491bf) bg_status_flat_pane_ParamLimits

0x5689,	// (0x00042c48) indicator_pane_cp2_ParamLimits

0x5689,	// (0x00042c48) indicator_pane_cp2

0xbd43,	// (0x00049302) navi_pane_srt_ParamLimits

0xbd43,	// (0x00049302) navi_pane_srt

0x56b1,	// (0x00042c70) popup_clock_digital_analogue_window_cp1

0x40ac,	// (0x0004166b) indicator_pane_t1

0x5276,	// (0x00042835) copy_highlight_pane

0x5276,	// (0x00042835) cursor_graphics_pane

0x5276,	// (0x00042835) graphic_within_text_pane

0x5276,	// (0x00042835) link_highlight_pane

0x6607,	// (0x00043bc6) popup_preview_text_window_t5_ParamLimits

0x6607,	// (0x00043bc6) popup_preview_text_window_t5

0x52df,	// (0x0004289e) cursor_digital_pane

0x52df,	// (0x0004289e) cursor_primary_pane

0x52f0,	// (0x000428af) cursor_primary_small_pane

0x52f8,	// (0x000428b7) cursor_secondary_pane

0x5300,	// (0x000428bf) cursor_title_pane

0x52df,	// (0x0004289e) link_highlight_digital_pane

0x52e7,	// (0x000428a6) link_highlight_primary_pane

0x52f0,	// (0x000428af) link_highlight_primary_small_pane

0x52f8,	// (0x000428b7) link_highlight_secondary_pane

0x5300,	// (0x000428bf) link_highlight_title_pane

0x52df,	// (0x0004289e) copy_highlight_digital_pane

0x52df,	// (0x0004289e) copy_highlight_primary_pane

0x52f0,	// (0x000428af) copy_highlight_primary_small_pane

0x52f8,	// (0x000428b7) copy_highlight_secondary_pane

0x5300,	// (0x000428bf) copy_highlight_title_pane

0x52f8,	// (0x000428b7) graphic_text_digital_pane

0x5f82,	// (0x00043541) graphic_text_primary_pane

0x5f8b,	// (0x0004354a) graphic_text_primary_small_pane

0x52f0,	// (0x000428af) graphic_text_secondary_pane

0x52df,	// (0x0004289e) graphic_text_title_pane

0xae96,	// (0x00048455) cursor_primary_pane_g1

0x5f74,	// (0x00043533) cursor_text_primary_t1

0xbfde,	// (0x0004959d) cursor_primary_small_pane_g1

0x5f66,	// (0x00043525) cursor_text_primary_small_t1

0xbfd4,	// (0x00049593) cursor_primary_small_pane_g1_copy1

0x5f58,	// (0x00043517) cursor_text_primary_small_t1_copy1

0x5f4a,	// (0x00043509) cursor_text_title_t1

0xbfca,	// (0x00049589) cursor_title_pane_g1

0xae96,	// (0x00048455) cursor_digital_pane_g1

0x5308,	// (0x000428c7) cursor_text_digital_t1

0x5eeb,	// (0x000434aa) link_highlight_primary_pane_g1

0x5ef3,	// (0x000434b2) link_highlight_primary_pane_t1

0x5316,	// (0x000428d5) link_highlight_primary_small_pane_g1

0x531e,	// (0x000428dd) link_highlight_primary_small_pane_t1

0x5316,	// (0x000428d5) link_highlight_secondary_pane_g1

0x532d,	// (0x000428ec) link_highlight_secondary_pane_t1

0x5e4d,	// (0x0004340c) link_highlight_title_pane_g1

0x5e55,	// (0x00043414) link_highlight_title_pane_t1

0x5e36,	// (0x000433f5) link_highlight_digital_pane_g1

0x5e3e,	// (0x000433fd) link_highlight_digital_pane_t1

0x5d2a,	// (0x000432e9) copy_highlight_primary_pane_g1

0x5d32,	// (0x000432f1) copy_highlight_primary_pane_t1

0x5d04,	// (0x000432c3) copy_highlight_primary_small_pane_g1

0x5d1b,	// (0x000432da) copy_highlight_primary_small_pane_t1

0x533c,	// (0x000428fb) copy_highlight_secondary_pane_g1

0x5344,	// (0x00042903) copy_highlight_secondary_pane_t1

0x5d04,	// (0x000432c3) copy_highlight_title_pane_g1

0x5d0c,	// (0x000432cb) copy_highlight_title_pane_t1

0x5d2a,	// (0x000432e9) copy_highlight_digital_pane_g1

0x6b6b,	// (0x0004412a) copy_highlight_digital_pane_t1

0x6abf,	// (0x0004407e) graphic_text_primary_pane_g1

0x6b4f,	// (0x0004410e) graphic_text_primary_pane_t1

0x6b5d,	// (0x0004411c) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0004cfa3) graphic_text_primary_pane_t

0x6b2b,	// (0x000440ea) graphic_text_primary_small_pane_g1

0x6b33,	// (0x000440f2) graphic_text_primary_small_pane_t1

0x6b41,	// (0x00044100) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0004cf9e) graphic_text_primary_small_pane_t

0x6b07,	// (0x000440c6) graphic_text_secondary_pane_g1

0x6b0f,	// (0x000440ce) graphic_text_secondary_pane_t1

0x6b1d,	// (0x000440dc) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0004cf99) graphic_text_secondary_pane_t

0x6ae3,	// (0x000440a2) graphic_text_title_pane_g1

0x6aeb,	// (0x000440aa) graphic_text_title_pane_t1

0x6af9,	// (0x000440b8) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0004cf94) graphic_text_title_pane_t

0x6abf,	// (0x0004407e) graphic_text_digital_pane_g1

0x6ac7,	// (0x00044086) graphic_text_digital_pane_t1

0x6ad5,	// (0x00044094) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0004cf8f) graphic_text_digital_pane_t

0x4068,	// (0x00041627) navi_icon_pane_srt_ParamLimits

0x4068,	// (0x00041627) navi_icon_pane_srt

0x400c,	// (0x000415cb) navi_midp_pane_srt

0x400c,	// (0x000415cb) navi_navi_pane_srt

0x4068,	// (0x00041627) navi_text_pane_srt_ParamLimits

0x4068,	// (0x00041627) navi_text_pane_srt

0x6a8a,	// (0x00044049) navi_navi_icon_text_pane_srt

0x6aa4,	// (0x00044063) navi_navi_pane_srt_g1_ParamLimits

0x6aa4,	// (0x00044063) navi_navi_pane_srt_g1

0x6a92,	// (0x00044051) navi_navi_pane_srt_g2_ParamLimits

0x6a92,	// (0x00044051) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0004cf8a) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0004cf8a) navi_navi_pane_srt_g

0x6ab6,	// (0x00044075) navi_navi_tabs_pane_srt

0x6a8a,	// (0x00044049) navi_navi_text_pane_srt

0x6a8a,	// (0x00044049) navi_navi_volume_pane_srt

0x6a7b,	// (0x0004403a) navi_navi_text_pane_srt_t1

0x97a5,	// (0x00046d64) navi_navi_volume_pane_srt_g1

0x97ad,	// (0x00046d6c) volume_small_pane_srt_ParamLimits

0x97ad,	// (0x00046d6c) volume_small_pane_srt

0x919a,	// (0x00046759) volume_small_pane_srt_g1_ParamLimits

0x919a,	// (0x00046759) volume_small_pane_srt_g1

0x91aa,	// (0x00046769) volume_small_pane_srt_g2_ParamLimits

0x91aa,	// (0x00046769) volume_small_pane_srt_g2

0x91bb,	// (0x0004677a) volume_small_pane_srt_g3_ParamLimits

0x91bb,	// (0x0004677a) volume_small_pane_srt_g3

0x91cc,	// (0x0004678b) volume_small_pane_srt_g4_ParamLimits

0x91cc,	// (0x0004678b) volume_small_pane_srt_g4

0x91dd,	// (0x0004679c) volume_small_pane_srt_g5_ParamLimits

0x91dd,	// (0x0004679c) volume_small_pane_srt_g5

0x91ee,	// (0x000467ad) volume_small_pane_srt_g6_ParamLimits

0x91ee,	// (0x000467ad) volume_small_pane_srt_g6

0x91ff,	// (0x000467be) volume_small_pane_srt_g7_ParamLimits

0x91ff,	// (0x000467be) volume_small_pane_srt_g7

0x9210,	// (0x000467cf) volume_small_pane_srt_g8_ParamLimits

0x9210,	// (0x000467cf) volume_small_pane_srt_g8

0x9221,	// (0x000467e0) volume_small_pane_srt_g9_ParamLimits

0x9221,	// (0x000467e0) volume_small_pane_srt_g9

0x9232,	// (0x000467f1) volume_small_pane_srt_g10_ParamLimits

0x9232,	// (0x000467f1) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0004cd39) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0004cd39) volume_small_pane_srt_g

0x43c3,	// (0x00041982) query_popup_data_pane_cp2

0x6a61,	// (0x00044020) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6a61,	// (0x00044020) navi_navi_icon_text_pane_srt_t1

0x5f82,	// (0x00043541) navi_tabs_2_long_pane_srt

0x5f82,	// (0x00043541) navi_tabs_2_pane_srt

0x5f82,	// (0x00043541) navi_tabs_3_long_pane_srt

0x5f82,	// (0x00043541) navi_tabs_3_pane_srt

0x5f82,	// (0x00043541) navi_tabs_4_pane_srt

0x9785,	// (0x00046d44) tabs_2_active_pane_srt_ParamLimits

0x9785,	// (0x00046d44) tabs_2_active_pane_srt

0x9795,	// (0x00046d54) tabs_2_passive_pane_srt_ParamLimits

0x9795,	// (0x00046d54) tabs_2_passive_pane_srt

0x4986,	// (0x00041f45) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4986,	// (0x00041f45) bg_passive_tab_pane_cp1_srt

0x6a48,	// (0x00044007) bg_passive_tab_pane_g1_cp1_srt

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp1_srt

0x6a3f,	// (0x00043ffe) bg_passive_tab_pane_g3_cp1_srt

0x4068,	// (0x00041627) bg_active_tab_pane_cp1_srt_ParamLimits

0x4068,	// (0x00041627) bg_active_tab_pane_cp1_srt

0x6a51,	// (0x00044010) tabs_2_active_pane_srt_g1

0xc38e,	// (0x0004994d) tabs_2_active_pane_srt_t1_ParamLimits

0xc38e,	// (0x0004994d) tabs_2_active_pane_srt_t1

0x6a48,	// (0x00044007) bg_active_tab_pane_g1_cp1_srt

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp1_srt

0x6a3f,	// (0x00043ffe) bg_active_tab_pane_g3_cp1_srt

0x9752,	// (0x00046d11) tabs_3_active_pane_srt_ParamLimits

0x9752,	// (0x00046d11) tabs_3_active_pane_srt

0x9763,	// (0x00046d22) tabs_3_passive_pane_cp_srt_ParamLimits

0x9763,	// (0x00046d22) tabs_3_passive_pane_cp_srt

0x9774,	// (0x00046d33) tabs_3_passive_pane_srt_ParamLimits

0x9774,	// (0x00046d33) tabs_3_passive_pane_srt

0x4986,	// (0x00041f45) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4986,	// (0x00041f45) bg_passive_tab_pane_cp2_srt

0x535c,	// (0x0004291b) bg_passive_tab_pane_g1_cp2_srt

0x4f1f,	// (0x000424de) bg_passive_tab_pane_g2_cp2_srt

0x5353,	// (0x00042912) bg_passive_tab_pane_g3_cp2_srt

0x4068,	// (0x00041627) bg_active_tab_pane_cp2_srt_ParamLimits

0x4068,	// (0x00041627) bg_active_tab_pane_cp2_srt

0x6a37,	// (0x00043ff6) tabs_3_active_pane_srt_g1

0xc37c,	// (0x0004993b) tabs_3_active_pane_srt_t1_ParamLimits

0xc37c,	// (0x0004993b) tabs_3_active_pane_srt_t1

0x535c,	// (0x0004291b) bg_active_tab_pane_g1_cp2_srt

0x4f1f,	// (0x000424de) bg_active_tab_pane_g2_cp2_srt

0x5353,	// (0x00042912) bg_active_tab_pane_g3_cp2_srt

0x970a,	// (0x00046cc9) tabs_4_active_pane_srt_ParamLimits

0x970a,	// (0x00046cc9) tabs_4_active_pane_srt

0x971c,	// (0x00046cdb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x971c,	// (0x00046cdb) tabs_4_passive_pane_cp2_srt

0x5480,	// (0x00042a3f) aid_size_cell_toolbar

0xabce,	// (0x0004818d) main_idle_act_pane_ParamLimits

0x5542,	// (0x00042b01) popup_large_graphic_colour_window_ParamLimits

0xba6d,	// (0x0004902c) popup_toolbar_window_ParamLimits

0xba6d,	// (0x0004902c) popup_toolbar_window

0x695e,	// (0x00043f1d) list_single_graphic_2heading_pane_ParamLimits

0x695e,	// (0x00043f1d) list_single_graphic_2heading_pane

0x4b30,	// (0x000420ef) aid_size_cell_apps_grid_lsc_pane

0x4b42,	// (0x00042101) aid_size_cell_apps_grid_prt_pane

0x4986,	// (0x00041f45) bg_wml_button_pane_cp1_ParamLimits

0x4986,	// (0x00041f45) bg_wml_button_pane_cp1

0xbf57,	// (0x00049516) form_midp_field_text_pane_t1_ParamLimits

0x58a6,	// (0x00042e65) input_focus_pane_cp050_ParamLimits

0x59ee,	// (0x00042fad) list_midp_form_text_pane_ParamLimits

0x59cb,	// (0x00042f8a) input_focus_pane_cp051_ParamLimits

0x59df,	// (0x00042f9e) list_midp_choice_pane_ParamLimits

0xbea5,	// (0x00049464) list_single_2graphic_pane_cp3_ParamLimits

0xbea5,	// (0x00049464) list_single_2graphic_pane_cp3

0xbed1,	// (0x00049490) list_single_midp_graphic_pane_ParamLimits

0xbed1,	// (0x00049490) list_single_midp_graphic_pane

0x84ad,	// (0x00045a6c) list_single_graphic_2heading_pane_g1_ParamLimits

0x84ad,	// (0x00045a6c) list_single_graphic_2heading_pane_g1

0x84b9,	// (0x00045a78) list_single_graphic_2heading_pane_g4_ParamLimits

0x84b9,	// (0x00045a78) list_single_graphic_2heading_pane_g4

0x84c5,	// (0x00045a84) list_single_graphic_2heading_pane_g5_ParamLimits

0x84c5,	// (0x00045a84) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0004cd8c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0004cd8c) list_single_graphic_2heading_pane_g

0x84d1,	// (0x00045a90) list_single_graphic_2heading_pane_t1_ParamLimits

0x84d1,	// (0x00045a90) list_single_graphic_2heading_pane_t1

0x84e5,	// (0x00045aa4) list_single_graphic_2heading_pane_t2_ParamLimits

0x84e5,	// (0x00045aa4) list_single_graphic_2heading_pane_t2

0x8501,	// (0x00045ac0) list_single_graphic_2heading_pane_t3_ParamLimits

0x8501,	// (0x00045ac0) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0004cd93) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0004cd93) list_single_graphic_2heading_pane_t

0x56f4,	// (0x00042cb3) bg_popup_sub_pane_cp2

0x571e,	// (0x00042cdd) grid_toobar_pane

0x9396,	// (0x00046955) cell_toolbar_pane_ParamLimits

0x9396,	// (0x00046955) cell_toolbar_pane

0x575a,	// (0x00042d19) cell_toolbar_pane_g1_ParamLimits

0x575a,	// (0x00042d19) cell_toolbar_pane_g1

0x576e,	// (0x00042d2d) cell_toolbar_pane_g2_ParamLimits

0x576e,	// (0x00042d2d) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0004cda1) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0004cda1) cell_toolbar_pane_g

0x5790,	// (0x00042d4f) grid_highlight_pane_cp2_ParamLimits

0x5790,	// (0x00042d4f) grid_highlight_pane_cp2

0x57aa,	// (0x00042d69) toolbar_button_pane

0x57b6,	// (0x00042d75) toolbar_button_pane_g1

0x57c6,	// (0x00042d85) toolbar_button_pane_g2

0x57be,	// (0x00042d7d) toolbar_button_pane_g3

0x57d6,	// (0x00042d95) toolbar_button_pane_g4

0x57ce,	// (0x00042d8d) toolbar_button_pane_g5

0x57de,	// (0x00042d9d) toolbar_button_pane_g6

0x57e6,	// (0x00042da5) toolbar_button_pane_g7

0x57f6,	// (0x00042db5) toolbar_button_pane_g8

0x57ee,	// (0x00042dad) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0004cda6) toolbar_button_pane_g

0x93ce,	// (0x0004698d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x93ce,	// (0x0004698d) list_single_2graphic_pane_g1_cp3

0x93da,	// (0x00046999) list_single_2graphic_pane_g2_cp3_ParamLimits

0x93da,	// (0x00046999) list_single_2graphic_pane_g2_cp3

0x93eb,	// (0x000469aa) list_single_2graphic_pane_g3_cp3

0x93f3,	// (0x000469b2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x93f3,	// (0x000469b2) list_single_2graphic_pane_g4_cp3

0x93ff,	// (0x000469be) list_single_2graphic_pane_t1_cp3_ParamLimits

0x93ff,	// (0x000469be) list_single_2graphic_pane_t1_cp3

0x9419,	// (0x000469d8) list_single_midp_graphic_pane_g2_ParamLimits

0x9419,	// (0x000469d8) list_single_midp_graphic_pane_g2

0xaec7,	// (0x00048486) aid_zoom_text_primary

0xaecf,	// (0x0004848e) aid_zoom_text_secondary

0x5410,	// (0x000429cf) status_small_pane_g7_ParamLimits

0x5410,	// (0x000429cf) status_small_pane_g7

0x5433,	// (0x000429f2) status_small_pane_t1_ParamLimits

0xa55d,	// (0x00047b1c) title_pane_g2

0x0003,

0xf56a,	// (0x0004cb29) title_pane_g

0xa72a,	// (0x00047ce9) aid_size_cell_colour_1_pane_ParamLimits

0xa72a,	// (0x00047ce9) aid_size_cell_colour_1_pane

0xa73e,	// (0x00047cfd) aid_size_cell_colour_2_pane_ParamLimits

0xa73e,	// (0x00047cfd) aid_size_cell_colour_2_pane

0xa752,	// (0x00047d11) aid_size_cell_colour_3_pane_ParamLimits

0xa752,	// (0x00047d11) aid_size_cell_colour_3_pane

0xa766,	// (0x00047d25) aid_size_cell_colour_4_pane_ParamLimits

0xa766,	// (0x00047d25) aid_size_cell_colour_4_pane

0x8df6,	// (0x000463b5) title_pane_stacon_g1_ParamLimits

0x8df6,	// (0x000463b5) title_pane_stacon_g1

0x5d89,	// (0x00043348) popup_note_wait_window_g3_ParamLimits

0x5d89,	// (0x00043348) popup_note_wait_window_g3

0x5dff,	// (0x000433be) popup_note_wait_window_t5_ParamLimits

0x5dff,	// (0x000433be) popup_note_wait_window_t5

0x400c,	// (0x000415cb) main_feb_china_hwr_fs_writing_pane

0xb696,	// (0x00048c55) popup_feb_china_hwr_fs_window_ParamLimits

0xb696,	// (0x00048c55) popup_feb_china_hwr_fs_window

0x943b,	// (0x000469fa) aid_size_cell_hwr_fs_ParamLimits

0x943b,	// (0x000469fa) aid_size_cell_hwr_fs

0x58a6,	// (0x00042e65) bg_popup_sub_pane_cp3_ParamLimits

0x58a6,	// (0x00042e65) bg_popup_sub_pane_cp3

0x9450,	// (0x00046a0f) grid_hwr_fs_pane_ParamLimits

0x9450,	// (0x00046a0f) grid_hwr_fs_pane

0x9468,	// (0x00046a27) linegrid_hwr_fs_pane_ParamLimits

0x9468,	// (0x00046a27) linegrid_hwr_fs_pane

0x9478,	// (0x00046a37) cell_hwr_fs_pane_ParamLimits

0x9478,	// (0x00046a37) cell_hwr_fs_pane

0x58b2,	// (0x00042e71) linegrid_hwr_fs_pane_g1_ParamLimits

0x58b2,	// (0x00042e71) linegrid_hwr_fs_pane_g1

0xbe79,	// (0x00049438) linegrid_hwr_fs_pane_g2_ParamLimits

0xbe79,	// (0x00049438) linegrid_hwr_fs_pane_g2

0x58be,	// (0x00042e7d) linegrid_hwr_fs_pane_g3_ParamLimits

0x58be,	// (0x00042e7d) linegrid_hwr_fs_pane_g3

0x949a,	// (0x00046a59) linegrid_hwr_fs_pane_g4_ParamLimits

0x949a,	// (0x00046a59) linegrid_hwr_fs_pane_g4

0x94b4,	// (0x00046a73) linegrid_hwr_fs_pane_g5_ParamLimits

0x94b4,	// (0x00046a73) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0004cdd1) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0004cdd1) linegrid_hwr_fs_pane_g

0x58ca,	// (0x00042e89) cell_hwr_fs_pane_g1_ParamLimits

0x58ca,	// (0x00042e89) cell_hwr_fs_pane_g1

0x56c2,	// (0x00042c81) cell_hwr_fs_pane_g2_ParamLimits

0x56c2,	// (0x00042c81) cell_hwr_fs_pane_g2

0xbe8b,	// (0x0004944a) cell_hwr_fs_pane_g3_ParamLimits

0xbe8b,	// (0x0004944a) cell_hwr_fs_pane_g3

0xbe98,	// (0x00049457) cell_hwr_fs_pane_g4_ParamLimits

0xbe98,	// (0x00049457) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0004cddc) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0004cddc) cell_hwr_fs_pane_g

0x94ca,	// (0x00046a89) cell_hwr_fs_pane_t1

0x400c,	// (0x000415cb) grid_highlight_pane_cp6

0x400c,	// (0x000415cb) main_idle_act2_pane

0x4935,	// (0x00041ef4) aid_inside_area_popup_secondary

0xbffe,	// (0x000495bd) aid_inside_area_window_primary_ParamLimits

0xbffe,	// (0x000495bd) aid_inside_area_window_primary

0x6b7a,	// (0x00044139) ai2_news_ticker_pane

0x6b82,	// (0x00044141) aid_size_cell_ai1_link_ParamLimits

0x6b82,	// (0x00044141) aid_size_cell_ai1_link

0x6b9c,	// (0x0004415b) popup_ai2_data_window_ParamLimits

0x6b9c,	// (0x0004415b) popup_ai2_data_window

0x6bb0,	// (0x0004416f) popup_ai2_link_window_ParamLimits

0x6bb0,	// (0x0004416f) popup_ai2_link_window

0x58a6,	// (0x00042e65) bg_popup_sub_pane_cp4_ParamLimits

0x58a6,	// (0x00042e65) bg_popup_sub_pane_cp4

0x6bc4,	// (0x00044183) grid_ai2_link_pane_ParamLimits

0x6bc4,	// (0x00044183) grid_ai2_link_pane

0x6bdb,	// (0x0004419a) popup_ai2_link_window_g1_ParamLimits

0x6bdb,	// (0x0004419a) popup_ai2_link_window_g1

0x6be7,	// (0x000441a6) popup_ai2_link_window_g2_ParamLimits

0x6be7,	// (0x000441a6) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0004cfa8) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0004cfa8) popup_ai2_link_window_g

0x6bf6,	// (0x000441b5) ai2_mp_button_pane

0x6bfe,	// (0x000441bd) ai2_mp_volume_pane

0x59cb,	// (0x00042f8a) bg_popup_sub_pane_cp5_ParamLimits

0x59cb,	// (0x00042f8a) bg_popup_sub_pane_cp5

0x6c06,	// (0x000441c5) heading_ai2_gene_pane_ParamLimits

0x6c06,	// (0x000441c5) heading_ai2_gene_pane

0x6c12,	// (0x000441d1) list_ai2_gene_pane_ParamLimits

0x6c12,	// (0x000441d1) list_ai2_gene_pane

0x6c5a,	// (0x00044219) cell_ai2_link_pane_ParamLimits

0x6c5a,	// (0x00044219) cell_ai2_link_pane

0x6c70,	// (0x0004422f) cell_ai2_link_pane_g1

0x400c,	// (0x000415cb) grid_highlight_pane_cp7

0x97c2,	// (0x00046d81) ai2_mp_volume_pane_g1

0x6d49,	// (0x00044308) ai2_mp_volume_pane_g2

0x6cb6,	// (0x00044275) list_ai2_gene_pane_t1

0x6d41,	// (0x00044300) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0004cfc1) ai2_mp_volume_pane_g

0x97ca,	// (0x00046d89) volume_small_pane_cp3

0x6d51,	// (0x00044310) aid_size_cell_ai2_button

0x6d59,	// (0x00044318) grid_ai2_button_pane

0x6d62,	// (0x00044321) cell_ai2_button_pane_ParamLimits

0x6d62,	// (0x00044321) cell_ai2_button_pane

0x4002,	// (0x000415c1) cell_ai2_button_pane_g1

0x400c,	// (0x000415cb) grid_highlight_pane_cp8

0x6d01,	// (0x000442c0) ai2_gene_pane_t1_ParamLimits

0x6d01,	// (0x000442c0) ai2_gene_pane_t1

0xb632,	// (0x00048bf1) aid_height_parent_landscape

0xc171,	// (0x00049730) aid_height_set_list

0x5ed9,	// (0x00043498) aid_size_parent

0x69e1,	// (0x00043fa0) aid_size_cell_graphic_pane_ParamLimits

0x6c22,	// (0x000441e1) popup_ai2_data_window_g1_ParamLimits

0x6c22,	// (0x000441e1) popup_ai2_data_window_g1

0x6c2e,	// (0x000441ed) ai2_news_ticker_pane_g1

0x6c36,	// (0x000441f5) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0004cfad) ai2_news_ticker_pane_g

0x6c3e,	// (0x000441fd) ai2_news_ticker_pane_t1

0x6c4c,	// (0x0004420b) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0004cfb2) ai2_news_ticker_pane_t

0x6c79,	// (0x00044238) heading_ai2_gene_pane_g1

0x6c81,	// (0x00044240) heading_ai2_gene_pane_t1_ParamLimits

0x6c81,	// (0x00044240) heading_ai2_gene_pane_t1

0x6c96,	// (0x00044255) list_highlight_pane_cp6

0x6c9e,	// (0x0004425d) ai2_gene_pane_ParamLimits

0x6c9e,	// (0x0004425d) ai2_gene_pane

0x6cc4,	// (0x00044283) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0004cfb7) list_ai2_gene_pane_t

0x6cd2,	// (0x00044291) list_highlight_pane_cp8_ParamLimits

0x6cd2,	// (0x00044291) list_highlight_pane_cp8

0x6ce3,	// (0x000442a2) ai2_gene_pane_g1_ParamLimits

0x6ce3,	// (0x000442a2) ai2_gene_pane_g1

0x6cf5,	// (0x000442b4) ai2_gene_pane_g2_ParamLimits

0x6cf5,	// (0x000442b4) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0004cfbc) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0004cfbc) ai2_gene_pane_g

0x47c5,	// (0x00041d84) scroll_pane_cp12

0x9355,	// (0x00046914) control_pane_t3_ParamLimits

0x9355,	// (0x00046914) control_pane_t3

0x5424,	// (0x000429e3) status_small_pane_g8_ParamLimits

0x5424,	// (0x000429e3) status_small_pane_g8

0xb720,	// (0x00048cdf) popup_find_window_ParamLimits

0xb90d,	// (0x00048ecc) popup_note_image_window_ParamLimits

0xaefb,	// (0x000484ba) list_double2_graphic_pane_vc_g1_ParamLimits

0xaefb,	// (0x000484ba) list_double2_graphic_pane_vc_g1

0xa7fe,	// (0x00047dbd) list_double2_graphic_pane_vc_g2_ParamLimits

0xa7fe,	// (0x00047dbd) list_double2_graphic_pane_vc_g2

0xa80a,	// (0x00047dc9) list_double2_graphic_pane_vc_g3_ParamLimits

0xa80a,	// (0x00047dc9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0004cd9a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0004cd9a) list_double2_graphic_pane_vc_g

0xaf07,	// (0x000484c6) list_double2_graphic_pane_vc_t1_ParamLimits

0xaf07,	// (0x000484c6) list_double2_graphic_pane_vc_t1

0xa7fe,	// (0x00047dbd) list_single_heading_pane_vc_g1_ParamLimits

0xa7fe,	// (0x00047dbd) list_single_heading_pane_vc_g1

0xa80a,	// (0x00047dc9) list_single_heading_pane_vc_g2_ParamLimits

0xa80a,	// (0x00047dc9) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cdbb) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cdbb) list_single_heading_pane_vc_g

0xaf1d,	// (0x000484dc) list_single_heading_pane_vc_t1_ParamLimits

0xaf1d,	// (0x000484dc) list_single_heading_pane_vc_t1

0xaf33,	// (0x000484f2) list_single_heading_pane_vc_t2_ParamLimits

0xaf33,	// (0x000484f2) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0004cdc0) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0004cdc0) list_single_heading_pane_vc_t

0x57fe,	// (0x00042dbd) list_setting_number_pane_vc_g1_ParamLimits

0x57fe,	// (0x00042dbd) list_setting_number_pane_vc_g1

0x580a,	// (0x00042dc9) list_setting_number_pane_vc_g2_ParamLimits

0x580a,	// (0x00042dc9) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0004cdc5) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0004cdc5) list_setting_number_pane_vc_g

0x5816,	// (0x00042dd5) list_setting_number_pane_vc_t1_ParamLimits

0x5816,	// (0x00042dd5) list_setting_number_pane_vc_t1

0x582a,	// (0x00042de9) list_setting_number_pane_vc_t2_ParamLimits

0x582a,	// (0x00042de9) list_setting_number_pane_vc_t2

0x5846,	// (0x00042e05) list_setting_number_pane_vc_t3_ParamLimits

0x5846,	// (0x00042e05) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0004cdca) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0004cdca) list_setting_number_pane_vc_t

0x586e,	// (0x00042e2d) set_value_pane_vc_ParamLimits

0x586e,	// (0x00042e2d) set_value_pane_vc

0x695e,	// (0x00043f1d) list_double2_graphic_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double2_graphic_pane_vc

0x695e,	// (0x00043f1d) list_double2_large_graphic_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double2_large_graphic_pane_vc

0x695e,	// (0x00043f1d) list_double2_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double2_pane_vc

0x695e,	// (0x00043f1d) list_double_graphic_heading_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double_graphic_heading_pane_vc

0x695e,	// (0x00043f1d) list_double_graphic_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double_graphic_pane_vc

0x695e,	// (0x00043f1d) list_double_heading_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double_heading_pane_vc

0x695e,	// (0x00043f1d) list_double_large_graphic_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double_large_graphic_pane_vc

0x695e,	// (0x00043f1d) list_double_number_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double_number_pane_vc

0x695e,	// (0x00043f1d) list_double_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double_pane_vc

0x695e,	// (0x00043f1d) list_double_time_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_double_time_pane_vc

0x695e,	// (0x00043f1d) list_setting_number_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_setting_number_pane_vc

0x695e,	// (0x00043f1d) list_setting_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_setting_pane_vc

0x695e,	// (0x00043f1d) list_single_graphic_heading_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_single_graphic_heading_pane_vc

0x695e,	// (0x00043f1d) list_single_heading_pane_vc_ParamLimits

0x695e,	// (0x00043f1d) list_single_heading_pane_vc

0xb01b,	// (0x000485da) list_single_number_heading_pane_vc_ParamLimits

0xb01b,	// (0x000485da) list_single_number_heading_pane_vc

0xaefb,	// (0x000484ba) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xaefb,	// (0x000484ba) list_double_graphic_heading_pane_vc_g1

0xa7fe,	// (0x00047dbd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa7fe,	// (0x00047dbd) list_double_graphic_heading_pane_vc_g2

0xa80a,	// (0x00047dc9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa80a,	// (0x00047dc9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0004cd9a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004cd9a) list_double_graphic_heading_pane_vc_g

0xb0f0,	// (0x000486af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb0f0,	// (0x000486af) list_double_graphic_heading_pane_vc_t1

0xaf1d,	// (0x000484dc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xaf1d,	// (0x000484dc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0004cfc8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0004cfc8) list_double_graphic_heading_pane_vc_t

0x57fe,	// (0x00042dbd) list_setting_pane_vc_g1_ParamLimits

0x57fe,	// (0x00042dbd) list_setting_pane_vc_g1

0x580a,	// (0x00042dc9) list_setting_pane_vc_g2_ParamLimits

0x580a,	// (0x00042dc9) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0004cdc5) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0004cdc5) list_setting_pane_vc_g

0x6f58,	// (0x00044517) list_setting_pane_vc_t1_ParamLimits

0x6f58,	// (0x00044517) list_setting_pane_vc_t1

0x6f6c,	// (0x0004452b) list_setting_pane_vc_t2_ParamLimits

0x6f6c,	// (0x0004452b) list_setting_pane_vc_t2

0x0001,

0xfa4c,	// (0x0004d00b) list_setting_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004d00b) list_setting_pane_vc_t

0x586e,	// (0x00042e2d) set_value_pane_cp_vc_ParamLimits

0x586e,	// (0x00042e2d) set_value_pane_cp_vc

0xa7fe,	// (0x00047dbd) list_single_number_heading_pane_vc_g1_ParamLimits

0xa7fe,	// (0x00047dbd) list_single_number_heading_pane_vc_g1

0xa80a,	// (0x00047dc9) list_single_number_heading_pane_vc_g2_ParamLimits

0xa80a,	// (0x00047dc9) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cdbb) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cdbb) list_single_number_heading_pane_vc_g

0xaf1d,	// (0x000484dc) list_single_number_heading_pane_vc_t1_ParamLimits

0xaf1d,	// (0x000484dc) list_single_number_heading_pane_vc_t1

0xb104,	// (0x000486c3) list_single_number_heading_pane_vc_t2_ParamLimits

0xb104,	// (0x000486c3) list_single_number_heading_pane_vc_t2

0xb118,	// (0x000486d7) list_single_number_heading_pane_vc_t3_ParamLimits

0xb118,	// (0x000486d7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa51,	// (0x0004d010) list_single_number_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x0004d010) list_single_number_heading_pane_vc_t

0xaefb,	// (0x000484ba) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xaefb,	// (0x000484ba) list_single_graphic_heading_pane_vc_g1

0xa7fe,	// (0x00047dbd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa7fe,	// (0x00047dbd) list_single_graphic_heading_pane_vc_g4

0xa80a,	// (0x00047dc9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa80a,	// (0x00047dc9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0004cd9a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004cd9a) list_single_graphic_heading_pane_vc_g

0xaf1d,	// (0x000484dc) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xaf1d,	// (0x000484dc) list_single_graphic_heading_pane_vc_t1

0xb12a,	// (0x000486e9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb12a,	// (0x000486e9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa58,	// (0x0004d017) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa58,	// (0x0004d017) list_single_graphic_heading_pane_vc_t

0xa7fe,	// (0x00047dbd) list_double2_pane_vc_g1_ParamLimits

0xa7fe,	// (0x00047dbd) list_double2_pane_vc_g1

0xa80a,	// (0x00047dc9) list_double2_pane_vc_g2_ParamLimits

0xa80a,	// (0x00047dc9) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cdbb) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cdbb) list_double2_pane_vc_g

0xb13e,	// (0x000486fd) list_double2_pane_vc_t1_ParamLimits

0xb13e,	// (0x000486fd) list_double2_pane_vc_t1

0xb154,	// (0x00048713) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb154,	// (0x00048713) list_double2_large_graphic_pane_vc_g1

0xa7fe,	// (0x00047dbd) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xa7fe,	// (0x00047dbd) list_double2_large_graphic_pane_vc_g2

0xa80a,	// (0x00047dc9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xa80a,	// (0x00047dc9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa5d,	// (0x0004d01c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x0004d01c) list_double2_large_graphic_pane_vc_g

0xb160,	// (0x0004871f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb160,	// (0x0004871f) list_double2_large_graphic_pane_vc_t1

0xb176,	// (0x00048735) list_double_time_pane_vc_g1_ParamLimits

0xb176,	// (0x00048735) list_double_time_pane_vc_g1

0xb182,	// (0x00048741) list_double_time_pane_vc_g2_ParamLimits

0xb182,	// (0x00048741) list_double_time_pane_vc_g2

0x0001,

0xfa64,	// (0x0004d023) list_double_time_pane_vc_g_ParamLimits

0xfa64,	// (0x0004d023) list_double_time_pane_vc_g

0xb18e,	// (0x0004874d) list_double_time_pane_vc_t1_ParamLimits

0xb18e,	// (0x0004874d) list_double_time_pane_vc_t1

0xb1a7,	// (0x00048766) list_double_time_pane_vc_t2_ParamLimits

0xb1a7,	// (0x00048766) list_double_time_pane_vc_t2

0xb1e7,	// (0x000487a6) list_double_time_pane_vc_t3_ParamLimits

0xb1e7,	// (0x000487a6) list_double_time_pane_vc_t3

0xb1ff,	// (0x000487be) list_double_time_pane_vc_t4_ParamLimits

0xb1ff,	// (0x000487be) list_double_time_pane_vc_t4

0x0003,

0xfa69,	// (0x0004d028) list_double_time_pane_vc_t_ParamLimits

0xfa69,	// (0x0004d028) list_double_time_pane_vc_t

0xa7fe,	// (0x00047dbd) list_double_pane_vc_g1_ParamLimits

0xa7fe,	// (0x00047dbd) list_double_pane_vc_g1

0xa80a,	// (0x00047dc9) list_double_pane_vc_g2_ParamLimits

0xa80a,	// (0x00047dc9) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cdbb) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cdbb) list_double_pane_vc_g

0xb213,	// (0x000487d2) list_double_pane_vc_t1_ParamLimits

0xb213,	// (0x000487d2) list_double_pane_vc_t1

0xb225,	// (0x000487e4) list_double_pane_vc_t2_ParamLimits

0xb225,	// (0x000487e4) list_double_pane_vc_t2

0x0001,

0xfa72,	// (0x0004d031) list_double_pane_vc_t_ParamLimits

0xfa72,	// (0x0004d031) list_double_pane_vc_t

0xa7fe,	// (0x00047dbd) list_double_number_pane_vc_g1_ParamLimits

0xa7fe,	// (0x00047dbd) list_double_number_pane_vc_g1

0xa80a,	// (0x00047dc9) list_double_number_pane_vc_g2_ParamLimits

0xa80a,	// (0x00047dc9) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cdbb) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cdbb) list_double_number_pane_vc_g

0xb23d,	// (0x000487fc) list_double_number_pane_vc_t1_ParamLimits

0xb23d,	// (0x000487fc) list_double_number_pane_vc_t1

0xb251,	// (0x00048810) list_double_number_pane_vc_t2_ParamLimits

0xb251,	// (0x00048810) list_double_number_pane_vc_t2

0xb225,	// (0x000487e4) list_double_number_pane_vc_t3_ParamLimits

0xb225,	// (0x000487e4) list_double_number_pane_vc_t3

0x0002,

0xfa77,	// (0x0004d036) list_double_number_pane_vc_t_ParamLimits

0xfa77,	// (0x0004d036) list_double_number_pane_vc_t

0xb263,	// (0x00048822) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb263,	// (0x00048822) list_double_large_graphic_pane_vc_g1

0xbac5,	// (0x00049084) list_double_large_graphic_pane_vc_g2_ParamLimits

0xbac5,	// (0x00049084) list_double_large_graphic_pane_vc_g2

0xa80a,	// (0x00047dc9) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa80a,	// (0x00047dc9) list_double_large_graphic_pane_vc_g3

0xb26f,	// (0x0004882e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb26f,	// (0x0004882e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7e,	// (0x0004d03d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0004d03d) list_double_large_graphic_pane_vc_g

0xb27b,	// (0x0004883a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb27b,	// (0x0004883a) list_double_large_graphic_pane_vc_t1

0xb28d,	// (0x0004884c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb28d,	// (0x0004884c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0004d046) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0004d046) list_double_large_graphic_pane_vc_t

0xa7fe,	// (0x00047dbd) list_double_heading_pane_vc_g1_ParamLimits

0xa7fe,	// (0x00047dbd) list_double_heading_pane_vc_g1

0xa80a,	// (0x00047dc9) list_double_heading_pane_vc_g2_ParamLimits

0xa80a,	// (0x00047dc9) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cdbb) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cdbb) list_double_heading_pane_vc_g

0xb2a6,	// (0x00048865) list_double_heading_pane_vc_t1_ParamLimits

0xb2a6,	// (0x00048865) list_double_heading_pane_vc_t1

0xaf1d,	// (0x000484dc) list_double_heading_pane_vc_t2_ParamLimits

0xaf1d,	// (0x000484dc) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x0004d04b) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x0004d04b) list_double_heading_pane_vc_t

0xaefb,	// (0x000484ba) list_double_graphic_pane_vc_g1_ParamLimits

0xaefb,	// (0x000484ba) list_double_graphic_pane_vc_g1

0xbad4,	// (0x00049093) list_double_graphic_pane_vc_g2_ParamLimits

0xbad4,	// (0x00049093) list_double_graphic_pane_vc_g2

0xbae3,	// (0x000490a2) list_double_graphic_pane_vc_g3_ParamLimits

0xbae3,	// (0x000490a2) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x0004d050) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0004d050) list_double_graphic_pane_vc_g

0xb2ba,	// (0x00048879) list_double_graphic_pane_vc_t1_ParamLimits

0xb2ba,	// (0x00048879) list_double_graphic_pane_vc_t1

0xb225,	// (0x000487e4) list_double_graphic_pane_vc_t2_ParamLimits

0xb225,	// (0x000487e4) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x0004d057) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x0004d057) list_double_graphic_pane_vc_t

0x8531,	// (0x00045af0) aid_size_cell_fastswap

0x8539,	// (0x00045af8) aid_size_cell_touch_ParamLimits

0x8539,	// (0x00045af8) aid_size_cell_touch

0x879e,	// (0x00045d5d) popup_fast_swap_wide_window_ParamLimits

0x879e,	// (0x00045d5d) popup_fast_swap_wide_window

0x8894,	// (0x00045e53) touch_pane_ParamLimits

0x8894,	// (0x00045e53) touch_pane

0x481b,	// (0x00041dda) button_value_adjust_pane_cp2

0xa8f8,	// (0x00047eb7) button_value_adjust_pane_cp4

0xa918,	// (0x00047ed7) form_field_data_pane_cp2

0xa937,	// (0x00047ef6) form_field_data_wide_pane_cp2

0x4b7e,	// (0x0004213d) bg_scroll_pane_ParamLimits

0x8f59,	// (0x00046518) scroll_handle_pane_ParamLimits

0x8f6d,	// (0x0004652c) scroll_sc2_down_pane_ParamLimits

0x8f6d,	// (0x0004652c) scroll_sc2_down_pane

0x4baf,	// (0x0004216e) scroll_sc2_up_pane_ParamLimits

0x4baf,	// (0x0004216e) scroll_sc2_up_pane

0xc4d6,	// (0x00049a95) grid_wheel_folder_pane_g1_ParamLimits

0xc4d6,	// (0x00049a95) grid_wheel_folder_pane_g1

0x9132,	// (0x000466f1) clock_nsta_pane_cp2_ParamLimits

0x9132,	// (0x000466f1) clock_nsta_pane_cp2

0xadcf,	// (0x0004838e) listscroll_midp_pane_ParamLimits

0xaddb,	// (0x0004839a) midp_canvas_pane

0x5478,	// (0x00042a37) nsta_clock_indic_pane

0x54a8,	// (0x00042a67) listscroll_form_pane_vc

0x54b0,	// (0x00042a6f) listscroll_set_pane_vc_ParamLimits

0x54b0,	// (0x00042a6f) listscroll_set_pane_vc

0xbc1c,	// (0x000491db) clock_nsta_pane

0xbc29,	// (0x000491e8) indicator_nsta_pane

0x56f4,	// (0x00042cb3) bg_popup_sub_pane_cp2_ParamLimits

0x5708,	// (0x00042cc7) find_pane_cp2_ParamLimits

0x5708,	// (0x00042cc7) find_pane_cp2

0x571e,	// (0x00042cdd) grid_toobar_pane_ParamLimits

0x587a,	// (0x00042e39) list_form_gen_pane_vc_ParamLimits

0x587a,	// (0x00042e39) list_form_gen_pane_vc

0x5890,	// (0x00042e4f) scroll_pane_cp8_vc_ParamLimits

0x5890,	// (0x00042e4f) scroll_pane_cp8_vc

0x58e0,	// (0x00042e9f) data_form_wide_pane_vc_ParamLimits

0x58e0,	// (0x00042e9f) data_form_wide_pane_vc

0x58ec,	// (0x00042eab) form_field_data_wide_pane_vc_g1

0x58f4,	// (0x00042eb3) form_field_data_wide_pane_vc_t1_ParamLimits

0x58f4,	// (0x00042eb3) form_field_data_wide_pane_vc_t1

0x482f,	// (0x00041dee) input_focus_pane_cp6_vc_ParamLimits

0x482f,	// (0x00041dee) input_focus_pane_cp6_vc

0xbf96,	// (0x00049555) list_midp_pane_ParamLimits

0xbfa2,	// (0x00049561) scroll_pane_cp16_ParamLimits

0xbfa2,	// (0x00049561) scroll_pane_cp16

0x5b63,	// (0x00043122) button_value_adjust_pane_ParamLimits

0x5b63,	// (0x00043122) button_value_adjust_pane

0xc182,	// (0x00049741) button_value_adjust_pane_cp6_ParamLimits

0xc182,	// (0x00049741) button_value_adjust_pane_cp6

0xc2a4,	// (0x00049863) settings_code_pane_cp_ParamLimits

0xc2a4,	// (0x00049863) settings_code_pane_cp

0x4002,	// (0x000415c1) cell_touch_pane_g1

0x4002,	// (0x000415c1) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0004cce3) cell_touch_pane_g

0xc3a0,	// (0x0004995f) cell_touch_pane_cp_ParamLimits

0xc3a0,	// (0x0004995f) cell_touch_pane_cp

0xc3b0,	// (0x0004996f) cell_touch_pane_ParamLimits

0xc3b0,	// (0x0004996f) cell_touch_pane

0x4002,	// (0x000415c1) scroll_sc2_down_pane_g1

0x4002,	// (0x000415c1) scroll_sc2_up_pane_g1

0x400c,	// (0x000415cb) bg_set_opt_pane_cp4_vc

0x6d74,	// (0x00044333) list_set_graphic_pane_vc_g1_ParamLimits

0x6d74,	// (0x00044333) list_set_graphic_pane_vc_g1

0x6d80,	// (0x0004433f) list_set_graphic_pane_vc_g2_ParamLimits

0x6d80,	// (0x0004433f) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0004cfcd) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0004cfcd) list_set_graphic_pane_vc_g

0x6d8c,	// (0x0004434b) text_primary_small_cp13_vc_ParamLimits

0x6d8c,	// (0x0004434b) text_primary_small_cp13_vc

0x6da4,	// (0x00044363) list_set_graphic_pane_vc_ParamLimits

0x6da4,	// (0x00044363) list_set_graphic_pane_vc

0x400c,	// (0x000415cb) input_focus_pane_cp2_vc

0x4002,	// (0x000415c1) setting_code_pane_vc_g1

0x6db8,	// (0x00044377) setting_code_pane_vc_t1

0x6dc6,	// (0x00044385) set_text_pane_vc_t1_ParamLimits

0x6dc6,	// (0x00044385) set_text_pane_vc_t1

0x400c,	// (0x000415cb) input_focus_pane_cp1_vc

0x6de5,	// (0x000443a4) list_set_text_pane_vc

0x4002,	// (0x000415c1) setting_text_pane_vc_g1

0x400c,	// (0x000415cb) bg_set_opt_pane_cp2_vc

0x6def,	// (0x000443ae) setting_slider_graphic_pane_vc_g1

0x6df7,	// (0x000443b6) setting_slider_graphic_pane_vc_t1

0x6e05,	// (0x000443c4) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0004cfd2) setting_slider_graphic_pane_vc_t

0x6e13,	// (0x000443d2) slider_set_pane_cp_vc

0x6e1b,	// (0x000443da) slider_set_pane_vc_g1

0x6e24,	// (0x000443e3) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0004cfd7) slider_set_pane_vc_g

0x4896,	// (0x00041e55) set_opt_bg_pane_g1_copy1

0x489e,	// (0x00041e5d) set_opt_bg_pane_g2_copy1

0x6e50,	// (0x0004440f) set_opt_bg_pane_g3_copy1

0x48ae,	// (0x00041e6d) set_opt_bg_pane_g4_copy1

0x48b6,	// (0x00041e75) set_opt_bg_pane_g5_copy1

0x48be,	// (0x00041e7d) set_opt_bg_pane_g6_copy1

0x6e58,	// (0x00044417) set_opt_bg_pane_g7_copy1

0x6e62,	// (0x00044421) set_opt_bg_pane_g8_copy1

0x6e6a,	// (0x00044429) set_opt_bg_pane_g9_copy1

0x400c,	// (0x000415cb) bg_set_opt_pane_cp_vc

0x6e72,	// (0x00044431) setting_slider_pane_vc_t1

0x6df7,	// (0x000443b6) setting_slider_pane_vc_t2

0x6e05,	// (0x000443c4) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0004cfe6) setting_slider_pane_vc_t

0x6e13,	// (0x000443d2) slider_set_pane_vc

0x94d8,	// (0x00046a97) volume_set_pane_vc_g1

0x97d3,	// (0x00046d92) volume_set_pane_vc_g2

0x97dc,	// (0x00046d9b) volume_set_pane_vc_g3

0x97e5,	// (0x00046da4) volume_set_pane_vc_g4

0x97ee,	// (0x00046dad) volume_set_pane_vc_g5

0x97f7,	// (0x00046db6) volume_set_pane_vc_g6

0x9800,	// (0x00046dbf) volume_set_pane_vc_g7

0x9809,	// (0x00046dc8) volume_set_pane_vc_g8

0x9812,	// (0x00046dd1) volume_set_pane_vc_g9

0x981b,	// (0x00046dda) volume_set_pane_vc_g10

0x0009,

0xfa2e,	// (0x0004cfed) volume_set_pane_vc_g

0x6e81,	// (0x00044440) volume_set_pane_vc

0x6e89,	// (0x00044448) button_value_adjust_pane_cp1_vc

0x6e93,	// (0x00044452) list_highlight_pane_cp2_vc

0x6e9c,	// (0x0004445b) list_set_pane_vc_ParamLimits

0x6e9c,	// (0x0004445b) list_set_pane_vc

0x6eee,	// (0x000444ad) main_pane_set_vc_t1_ParamLimits

0x6eee,	// (0x000444ad) main_pane_set_vc_t1

0x6f03,	// (0x000444c2) main_pane_set_vc_t2_ParamLimits

0x6f03,	// (0x000444c2) main_pane_set_vc_t2

0x6f15,	// (0x000444d4) main_pane_set_vc_t3_ParamLimits

0x6f15,	// (0x000444d4) main_pane_set_vc_t3

0x6f27,	// (0x000444e6) main_pane_set_vc_t4_ParamLimits

0x6f27,	// (0x000444e6) main_pane_set_vc_t4

0x0003,

0xfa43,	// (0x0004d002) main_pane_set_vc_t_ParamLimits

0xfa43,	// (0x0004d002) main_pane_set_vc_t

0x6f39,	// (0x000444f8) setting_code_pane_vc_ParamLimits

0x6f39,	// (0x000444f8) setting_code_pane_vc

0x6f48,	// (0x00044507) setting_slider_graphic_pane_vc

0x6f48,	// (0x00044507) setting_slider_pane_vc

0x6f48,	// (0x00044507) setting_text_pane_vc

0x6f48,	// (0x00044507) setting_volume_pane_vc

0x6f50,	// (0x0004450f) scroll_pane_cp121_vc

0x4809,	// (0x00041dc8) set_content_pane_vc

0x6f8e,	// (0x0004454d) button_value_adjust_pane_g1

0x6f97,	// (0x00044556) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x0004d05c) button_value_adjust_pane_g

0x6fa0,	// (0x0004455f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6fa0,	// (0x0004455f) form_field_slider_wide_pane_vc_t1

0x6fb4,	// (0x00044573) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6fb4,	// (0x00044573) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x0004d061) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0004d061) form_field_slider_wide_pane_vc_t

0x405a,	// (0x00041619) input_focus_pane_cp10_vc_ParamLimits

0x405a,	// (0x00041619) input_focus_pane_cp10_vc

0x6fc6,	// (0x00044585) slider_cont_pane_cp1_vc_ParamLimits

0x6fc6,	// (0x00044585) slider_cont_pane_cp1_vc

0x6e1b,	// (0x000443da) slider_form_pane_g1_cp2

0x6e24,	// (0x000443e3) slider_form_pane_g2_cp2

0x6fdf,	// (0x0004459e) form_field_slider_pane_vc_t3

0x6fed,	// (0x000445ac) form_field_slider_pane_vc_t4

0x6ffb,	// (0x000445ba) slider_form_pane_vc_ParamLimits

0x6ffb,	// (0x000445ba) slider_form_pane_vc

0x7008,	// (0x000445c7) form_field_slider_pane_vc_t1_ParamLimits

0x7008,	// (0x000445c7) form_field_slider_pane_vc_t1

0x6fb4,	// (0x00044573) form_field_slider_pane_vc_t2_ParamLimits

0x6fb4,	// (0x00044573) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x0004d071) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x0004d071) form_field_slider_pane_vc_t

0x405a,	// (0x00041619) input_focus_pane_cp9_vc_ParamLimits

0x405a,	// (0x00041619) input_focus_pane_cp9_vc

0x7024,	// (0x000445e3) slider_cont_pane_vc_ParamLimits

0x7024,	// (0x000445e3) slider_cont_pane_vc

0x7036,	// (0x000445f5) list_form_graphic_pane_cp_vc_ParamLimits

0x7036,	// (0x000445f5) list_form_graphic_pane_cp_vc

0x58ec,	// (0x00042eab) form_field_popup_wide_pane_vc_g1

0x704b,	// (0x0004460a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x704b,	// (0x0004460a) form_field_popup_wide_pane_vc_t1

0x482f,	// (0x00041dee) input_focus_pane_cp8_vc_ParamLimits

0x482f,	// (0x00041dee) input_focus_pane_cp8_vc

0x7062,	// (0x00044621) list_form_wide_pane_vc_ParamLimits

0x7062,	// (0x00044621) list_form_wide_pane_vc

0x706e,	// (0x0004462d) list_form_graphic_pane_vc_g1

0x7076,	// (0x00044635) list_form_graphic_pane_vc_t1_ParamLimits

0x7076,	// (0x00044635) list_form_graphic_pane_vc_t1

0x4068,	// (0x00041627) list_highlight_pane_cp5_vc_ParamLimits

0x4068,	// (0x00041627) list_highlight_pane_cp5_vc

0x7092,	// (0x00044651) list_form_graphic_pane_vc_ParamLimits

0x7092,	// (0x00044651) list_form_graphic_pane_vc

0x58ec,	// (0x00042eab) form_field_popup_pane_vc_g1

0x70a8,	// (0x00044667) form_field_popup_pane_vc_t1_ParamLimits

0x70a8,	// (0x00044667) form_field_popup_pane_vc_t1

0x482f,	// (0x00041dee) input_focus_pane_cp7_vc_ParamLimits

0x482f,	// (0x00041dee) input_focus_pane_cp7_vc

0x70bf,	// (0x0004467e) list_form_pane_vc_ParamLimits

0x70bf,	// (0x0004467e) list_form_pane_vc

0x70cb,	// (0x0004468a) data_form_pane_vc_t1_ParamLimits

0x70cb,	// (0x0004468a) data_form_pane_vc_t1

0x4896,	// (0x00041e55) input_focus_pane_vc_g1

0x489e,	// (0x00041e5d) input_focus_pane_vc_g2

0x48a6,	// (0x00041e65) input_focus_pane_vc_g3

0x48ae,	// (0x00041e6d) input_focus_pane_vc_g4

0x48b6,	// (0x00041e75) input_focus_pane_vc_g5

0x48be,	// (0x00041e7d) input_focus_pane_vc_g6

0x48c6,	// (0x00041e85) input_focus_pane_vc_g7

0x48ce,	// (0x00041e8d) input_focus_pane_vc_g8

0x48d6,	// (0x00041e95) input_focus_pane_vc_g9

0x4002,	// (0x000415c1) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0004cc6c) input_focus_pane_vc_g

0x58e0,	// (0x00042e9f) data_form_pane_vc_ParamLimits

0x58e0,	// (0x00042e9f) data_form_pane_vc

0x58ec,	// (0x00042eab) form_field_data_pane_vc_g1

0x70e6,	// (0x000446a5) form_field_data_pane_vc_t1_ParamLimits

0x70e6,	// (0x000446a5) form_field_data_pane_vc_t1

0x482f,	// (0x00041dee) input_focus_pane_vc_ParamLimits

0x482f,	// (0x00041dee) input_focus_pane_vc

0x7100,	// (0x000446bf) button_value_adjust_pane_cp3_vc

0x7108,	// (0x000446c7) button_value_adjust_pane_cp5_vc

0x7110,	// (0x000446cf) form_field_data_pane_vc_ParamLimits

0x7110,	// (0x000446cf) form_field_data_pane_vc

0x7127,	// (0x000446e6) form_field_data_pane_vc_cp2

0x712f,	// (0x000446ee) form_field_data_wide_pane_vc_ParamLimits

0x712f,	// (0x000446ee) form_field_data_wide_pane_vc

0x7145,	// (0x00044704) form_field_data_wide_pane_vc_cp2

0x714d,	// (0x0004470c) form_field_popup_pane_vc_ParamLimits

0x714d,	// (0x0004470c) form_field_popup_pane_vc

0x7164,	// (0x00044723) form_field_popup_wide_pane_vc_ParamLimits

0x7164,	// (0x00044723) form_field_popup_wide_pane_vc

0x717a,	// (0x00044739) form_field_slider_pane_vc_ParamLimits

0x717a,	// (0x00044739) form_field_slider_pane_vc

0x718d,	// (0x0004474c) form_field_slider_wide_pane_vc_ParamLimits

0x718d,	// (0x0004474c) form_field_slider_wide_pane_vc

0xc3c2,	// (0x00049981) grid_touch_1_pane_ParamLimits

0xc3c2,	// (0x00049981) grid_touch_1_pane

0xc3ce,	// (0x0004998d) grid_touch_2_pane_ParamLimits

0xc3ce,	// (0x0004998d) grid_touch_2_pane

0x546a,	// (0x00042a29) touch_pane_g1_ParamLimits

0x546a,	// (0x00042a29) touch_pane_g1

0x71ae,	// (0x0004476d) cell_app_pane_cp_wide_ParamLimits

0x71ae,	// (0x0004476d) cell_app_pane_cp_wide

0x71bf,	// (0x0004477e) grid_popup_fast_wide_pane_ParamLimits

0x71bf,	// (0x0004477e) grid_popup_fast_wide_pane

0x71d3,	// (0x00044792) scroll_pane_cp19_ParamLimits

0x71d3,	// (0x00044792) scroll_pane_cp19

0x400c,	// (0x000415cb) bg_popup_window_pane_cp20

0x71e7,	// (0x000447a6) listscroll_popup_fast_wide_pane

0x4068,	// (0x00041627) grid_indicator_nsta_pane

0x71ef,	// (0x000447ae) clock_nsta_pane_g1

0x71f8,	// (0x000447b7) clock_nsta_pane_t1

0xc3e6,	// (0x000499a5) cell_indicator_nsta_pane_ParamLimits

0xc3e6,	// (0x000499a5) cell_indicator_nsta_pane

0x71a0,	// (0x0004475f) cell_indicator_nsta_pane_g1

0xc41e,	// (0x000499dd) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x0004d07b) cell_indicator_nsta_pane_g

0x7214,	// (0x000447d3) clock_nsta_pane_cp

0x721c,	// (0x000447db) indicator_nsta_pane_cp

0x7225,	// (0x000447e4) nsta_clock_indic_pane_g1

0x40a4,	// (0x00041663) grid_indicator_pane

0x4ca1,	// (0x00042260) scroll_pane_cp29

0x9081,	// (0x00046640) indicator_nsta_pane_cp2_ParamLimits

0x9081,	// (0x00046640) indicator_nsta_pane_cp2

0x4068,	// (0x00041627) main_apps_wheel_pane

0x5a08,	// (0x00042fc7) form_midp_field_text_pane_ParamLimits

0x5b35,	// (0x000430f4) scroll_bar_cp050_ParamLimits

0x728e,	// (0x0004484d) cell_indicator_pane_ParamLimits

0x728e,	// (0x0004484d) cell_indicator_pane

0x72ab,	// (0x0004486a) cell_indicator_pane_g1

0xc434,	// (0x000499f3) grid_wheel_folder_pane_ParamLimits

0xc434,	// (0x000499f3) grid_wheel_folder_pane

0xc44a,	// (0x00049a09) list_wheel_apps_pane_ParamLimits

0xc44a,	// (0x00049a09) list_wheel_apps_pane

0xc45b,	// (0x00049a1a) main_apps_wheel_pane_g1_ParamLimits

0xc45b,	// (0x00049a1a) main_apps_wheel_pane_g1

0xc46f,	// (0x00049a2e) main_apps_wheel_pane_g2_ParamLimits

0xc46f,	// (0x00049a2e) main_apps_wheel_pane_g2

0x0001,

0x007d,	// (0x0003d63c) main_apps_wheel_pane_g_ParamLimits

0x007d,	// (0x0003d63c) main_apps_wheel_pane_g

0xc487,	// (0x00049a46) main_apps_wheel_pane_t1_ParamLimits

0xc487,	// (0x00049a46) main_apps_wheel_pane_t1

0xc4aa,	// (0x00049a69) list_wheel_apps_pane_g1

0xc4b2,	// (0x00049a71) list_wheel_apps_pane_g2

0xc4ba,	// (0x00049a79) list_wheel_apps_pane_g3

0xc4c2,	// (0x00049a81) list_wheel_apps_pane_g4

0xc4cc,	// (0x00049a8b) list_wheel_apps_pane_g5

0x0004,

0x0082,	// (0x0003d641) list_wheel_apps_pane_g

0x50f4,	// (0x000426b3) navi_icon_text_pane

0xbb60,	// (0x0004911f) aid_fill_nsta

0xc4ef,	// (0x00049aae) navi_icon_text_pane_g1

0xc4fe,	// (0x00049abd) navi_icon_text_pane_t1

0x4f90,	// (0x0004254f) list_set_graphic_pane_t1_ParamLimits

0x4f90,	// (0x0004254f) list_set_graphic_pane_t1

0x624f,	// (0x0004380e) popup_midp_note_alarm_window_t6_ParamLimits

0x624f,	// (0x0004380e) popup_midp_note_alarm_window_t6

0x6261,	// (0x00043820) popup_midp_note_alarm_window_t7_ParamLimits

0x6261,	// (0x00043820) popup_midp_note_alarm_window_t7

0x6273,	// (0x00043832) popup_midp_note_alarm_window_t8_ParamLimits

0x6273,	// (0x00043832) popup_midp_note_alarm_window_t8

0x6285,	// (0x00043844) popup_midp_note_alarm_window_t9_ParamLimits

0x6285,	// (0x00043844) popup_midp_note_alarm_window_t9

0x6297,	// (0x00043856) popup_midp_note_alarm_window_t10_ParamLimits

0x6297,	// (0x00043856) popup_midp_note_alarm_window_t10

0x62a9,	// (0x00043868) popup_midp_note_alarm_window_t11_ParamLimits

0x62a9,	// (0x00043868) popup_midp_note_alarm_window_t11

0x62bb,	// (0x0004387a) scroll_pane_cp17_ParamLimits

0x62bb,	// (0x0004387a) scroll_pane_cp17

0x94d8,	// (0x00046a97) volume_small_pane_cp_g1

0x9824,	// (0x00046de3) volume_small_pane_cp_g2

0x982d,	// (0x00046dec) volume_small_pane_cp_g3

0x9836,	// (0x00046df5) volume_small_pane_cp_g4

0x983f,	// (0x00046dfe) volume_small_pane_cp_g5

0x9848,	// (0x00046e07) volume_small_pane_cp_g6

0x9851,	// (0x00046e10) volume_small_pane_cp_g7

0x985a,	// (0x00046e19) volume_small_pane_cp_g8

0x9863,	// (0x00046e22) volume_small_pane_cp_g9

0x986c,	// (0x00046e2b) volume_small_pane_cp_g10

0x52a0,	// (0x0004285f) midp_ticker_pane_g1_ParamLimits

0x52ac,	// (0x0004286b) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0004cd34) midp_ticker_pane_g_ParamLimits

0xae84,	// (0x00048443) midp_ticker_pane_t1_ParamLimits

0xbb76,	// (0x00049135) aid_fill_nsta_2

0x5b21,	// (0x000430e0) list_form2_midp_pane

0x693c,	// (0x00043efb) midp_editing_number_pane_ParamLimits

0x694b,	// (0x00043f0a) midp_ticker_pane_ParamLimits

0x72b5,	// (0x00044874) form2_midp_field_pane

0x72bd,	// (0x0004487c) scroll_pane_cp51

0x72dd,	// (0x0004489c) form2_midp_button_pane_ParamLimits

0x72dd,	// (0x0004489c) form2_midp_button_pane

0x72ef,	// (0x000448ae) form2_midp_content_pane_ParamLimits

0x72ef,	// (0x000448ae) form2_midp_content_pane

0x7309,	// (0x000448c8) form2_midp_field_choice_group_pane

0x7311,	// (0x000448d0) form2_midp_field_pane_g1

0x7319,	// (0x000448d8) form2_midp_field_pane_g2

0x7321,	// (0x000448e0) form2_midp_field_pane_g3

0x7329,	// (0x000448e8) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0004d0ac) form2_midp_field_pane_g

0x7331,	// (0x000448f0) form2_midp_gauge_slider_pane

0x7339,	// (0x000448f8) form2_midp_gauge_wait_pane

0x7341,	// (0x00044900) form2_midp_image_pane_ParamLimits

0x7341,	// (0x00044900) form2_midp_image_pane

0x735c,	// (0x0004491b) form2_midp_label_pane_ParamLimits

0x735c,	// (0x0004491b) form2_midp_label_pane

0xc52f,	// (0x00049aee) form2_midp_label_pane_cp_ParamLimits

0xc52f,	// (0x00049aee) form2_midp_label_pane_cp

0x7375,	// (0x00044934) form2_midp_string_pane_ParamLimits

0x7375,	// (0x00044934) form2_midp_string_pane

0xb2cc,	// (0x0004888b) form2_midp_text_pane_ParamLimits

0xb2cc,	// (0x0004888b) form2_midp_text_pane

0x7387,	// (0x00044946) form2_midp_time_pane

0x7397,	// (0x00044956) input_focus_pane_cp51_ParamLimits

0x7397,	// (0x00044956) input_focus_pane_cp51

0x73af,	// (0x0004496e) form2_midp_label_pane_t1_ParamLimits

0x73af,	// (0x0004496e) form2_midp_label_pane_t1

0xb2e7,	// (0x000488a6) form2_mdip_text_pane_t1_ParamLimits

0xb2e7,	// (0x000488a6) form2_mdip_text_pane_t1

0xb303,	// (0x000488c2) form2_midp_time_pane_t1

0x73f7,	// (0x000449b6) form2_midp_gauge_slider_pane_t1

0xc550,	// (0x00049b0f) form2_midp_gauge_slider_pane_t2

0xc562,	// (0x00049b21) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0004d0b5) form2_midp_gauge_slider_pane_t

0x7409,	// (0x000449c8) form2_midp_slider_pane

0x7415,	// (0x000449d4) form2_midp_gauge_wait_pane_t1

0x7423,	// (0x000449e2) form2_midp_wait_pane_ParamLimits

0x7423,	// (0x000449e2) form2_midp_wait_pane

0xc574,	// (0x00049b33) list_single_2graphic_pane_cp4_ParamLimits

0xc574,	// (0x00049b33) list_single_2graphic_pane_cp4

0xbed1,	// (0x00049490) list_single_midp_graphic_pane_cp_ParamLimits

0xbed1,	// (0x00049490) list_single_midp_graphic_pane_cp

0x400c,	// (0x000415cb) list_highlight_pane_cp20

0x744e,	// (0x00044a0d) list_single_2graphic_pane_g1_cp4

0x6c79,	// (0x00044238) list_single_2graphic_pane_g2_cp4

0x7456,	// (0x00044a15) list_single_2graphic_pane_t1_cp4

0x4068,	// (0x00041627) list_highlight_pane_cp21

0x7465,	// (0x00044a24) list_single_midp_graphic_pane_g4_cp

0x7474,	// (0x00044a33) list_single_midp_graphic_pane_t1_cp

0xc5a3,	// (0x00049b62) form2_mdip_string_pane_t1_ParamLimits

0xc5a3,	// (0x00049b62) form2_mdip_string_pane_t1

0x400c,	// (0x000415cb) bg_wml_button_pane_cp2

0x4002,	// (0x000415c1) form2_midp_image_pane_g1

0xa869,	// (0x00047e28) list_double_large_graphic_pane_g5_ParamLimits

0xa869,	// (0x00047e28) list_double_large_graphic_pane_g5

0xadcf,	// (0x0004838e) midp_form_pane_ParamLimits

0x4068,	// (0x00041627) main_apps_wheel_pane_ParamLimits

0xb933,	// (0x00048ef2) popup_preview_window_ParamLimits

0xb933,	// (0x00048ef2) popup_preview_window

0x5587,	// (0x00042b46) popup_touch_info_window_ParamLimits

0x5587,	// (0x00042b46) popup_touch_info_window

0x55a5,	// (0x00042b64) popup_touch_menu_window_ParamLimits

0x55a5,	// (0x00042b64) popup_touch_menu_window

0x3ff8,	// (0x000415b7) bg_popup_sub_pane_cp6

0x7489,	// (0x00044a48) list_touch_menu_pane

0x7491,	// (0x00044a50) list_single_touch_menu_pane_ParamLimits

0x7491,	// (0x00044a50) list_single_touch_menu_pane

0x74a6,	// (0x00044a65) list_single_touch_menu_pane_t1

0x4068,	// (0x00041627) bg_popup_sub_pane_cp7_ParamLimits

0x4068,	// (0x00041627) bg_popup_sub_pane_cp7

0x74b4,	// (0x00044a73) heading_sub_pane

0x74bc,	// (0x00044a7b) list_touch_info_pane_ParamLimits

0x74bc,	// (0x00044a7b) list_touch_info_pane

0x74cb,	// (0x00044a8a) list_single_touch_info_pane_ParamLimits

0x74cb,	// (0x00044a8a) list_single_touch_info_pane

0x74dd,	// (0x00044a9c) list_single_touch_info_pane_t1

0x74eb,	// (0x00044aaa) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0004d0c3) list_single_touch_info_pane_t

0x5276,	// (0x00042835) bg_popup_heading_pane_cp

0x74f9,	// (0x00044ab8) heading_sub_pane_t1

0x58a6,	// (0x00042e65) bg_popup_preview_window_pane_cp_ParamLimits

0x58a6,	// (0x00042e65) bg_popup_preview_window_pane_cp

0x74b4,	// (0x00044a73) heading_preview_pane

0x74bc,	// (0x00044a7b) list_preview_pane_ParamLimits

0x74bc,	// (0x00044a7b) list_preview_pane

0x7507,	// (0x00044ac6) popup_preview_window_g1

0x74cb,	// (0x00044a8a) list_single_preview_pane_ParamLimits

0x74cb,	// (0x00044a8a) list_single_preview_pane

0x750f,	// (0x00044ace) list_single_preview_pane_g1

0x7517,	// (0x00044ad6) list_single_preview_pane_t1

0x74dd,	// (0x00044a9c) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0004d0c8) list_single_preview_pane_t

0x7525,	// (0x00044ae4) bg_popup_heading_pane_cp2_ParamLimits

0x7525,	// (0x00044ae4) bg_popup_heading_pane_cp2

0x753b,	// (0x00044afa) heading_preview_pane_g1

0x7543,	// (0x00044b02) heading_preview_pane_t1_ParamLimits

0x7543,	// (0x00044b02) heading_preview_pane_t1

0x40bb,	// (0x0004167a) soft_indicator_pane_t1_ParamLimits

0x47a2,	// (0x00041d61) scroll_pane_ParamLimits

0x4ba6,	// (0x00042165) scroll_sc2_left_pane

0x4b9d,	// (0x0004215c) scroll_sc2_right_pane

0x4bc5,	// (0x00042184) scroll_bg_pane_g1_ParamLimits

0x4bda,	// (0x00042199) scroll_bg_pane_g2_ParamLimits

0x4bf2,	// (0x000421b1) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0004ccc3) scroll_bg_pane_g_ParamLimits

0x4bc5,	// (0x00042184) scroll_handle_pane_g1_ParamLimits

0x4c14,	// (0x000421d3) scroll_handle_pane_g2_ParamLimits

0x4bf2,	// (0x000421b1) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0004ccca) scroll_handle_pane_g_ParamLimits

0x54d0,	// (0x00042a8f) popup_choice_list_window_ParamLimits

0x54d0,	// (0x00042a8f) popup_choice_list_window

0x5700,	// (0x00042cbf) choice_list_pane

0x5782,	// (0x00042d41) cell_toolbar_pane_t1

0x57aa,	// (0x00042d69) toolbar_button_pane_ParamLimits

0x6699,	// (0x00043c58) ai_gene_pane_1_t2_ParamLimits

0x6699,	// (0x00043c58) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0004cee7) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0004cee7) ai_gene_pane_1_t

0x7560,	// (0x00044b1f) scroll_sc2_left_pane_g1

0x7560,	// (0x00044b1f) scroll_sc2_right_pane_g1

0x4986,	// (0x00041f45) bg_popup_sub_pane_cp10

0x756a,	// (0x00044b29) list_choice_list_pane

0x7581,	// (0x00044b40) list_single_choice_list_pane_ParamLimits

0x7581,	// (0x00044b40) list_single_choice_list_pane

0x7595,	// (0x00044b54) list_single_choice_list_pane_g1

0x759d,	// (0x00044b5c) list_single_choice_list_pane_t1_ParamLimits

0x759d,	// (0x00044b5c) list_single_choice_list_pane_t1

0x75b2,	// (0x00044b71) choice_list_pane_g1

0x75ba,	// (0x00044b79) choice_list_pane_t1

0x3ff8,	// (0x000415b7) input_focus_pane_cp11

0x4afb,	// (0x000420ba) title_pane_stacon_g2_ParamLimits

0x4afb,	// (0x000420ba) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0004cca9) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0004cca9) title_pane_stacon_g

0x5276,	// (0x00042835) cursor_press_pane

0xb6d8,	// (0x00048c97) popup_fep_hwr_window_ParamLimits

0xb6d8,	// (0x00048c97) popup_fep_hwr_window

0x5524,	// (0x00042ae3) popup_fep_vkb_window_ParamLimits

0x5524,	// (0x00042ae3) popup_fep_vkb_window

0x75c8,	// (0x00044b87) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0004d0f1) fep_vkb_side_pane_g_ParamLimits

0x98ae,	// (0x00046e6d) fep_hwr_candidate_pane_ParamLimits

0x98ae,	// (0x00046e6d) fep_hwr_candidate_pane

0x98d8,	// (0x00046e97) fep_hwr_side_pane_ParamLimits

0x98d8,	// (0x00046e97) fep_hwr_side_pane

0x98f8,	// (0x00046eb7) fep_hwr_top_pane_ParamLimits

0x98f8,	// (0x00046eb7) fep_hwr_top_pane

0x9910,	// (0x00046ecf) fep_hwr_write_pane_ParamLimits

0x9910,	// (0x00046ecf) fep_hwr_write_pane

0xfb32,	// (0x0004d0f1) fep_vkb_side_pane_g

0x75e2,	// (0x00044ba1) fep_hwr_top_pane_g1

0x75d0,	// (0x00044b8f) fep_hwr_top_pane_g2

0x994a,	// (0x00046f09) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0004d0cd) fep_hwr_top_pane_g

0x995f,	// (0x00046f1e) fep_hwr_top_text_pane

0x4d67,	// (0x00042326) fep_hwr_top_text_pane_g1

0x7618,	// (0x00044bd7) fep_hwr_top_text_pane_t1

0x9a55,	// (0x00047014) fep_hwr_candidate_pane_g1

0x7833,	// (0x00044df2) fep_vkb_keypad_pane_g3_ParamLimits

0x7833,	// (0x00044df2) fep_vkb_keypad_pane_g3

0x785b,	// (0x00044e1a) fep_vkb_keypad_pane_g4_ParamLimits

0x785b,	// (0x00044e1a) fep_vkb_keypad_pane_g4

0x78ca,	// (0x00044e89) fep_vkb_bottom_pane_g2_ParamLimits

0x78ca,	// (0x00044e89) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0004d0f8) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0004d0f8) fep_vkb_bottom_pane_g

0x7560,	// (0x00044b1f) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0004d102) cell_vkb_side_pane_g

0x790e,	// (0x00044ecd) cell_vkb_side_pane_t1

0x791c,	// (0x00044edb) cell_vkb_side_pane_t1_copy1

0x7560,	// (0x00044b1f) bg_fep_vkb_candidate_pane_g2

0x79f8,	// (0x00044fb7) cell_vkb_candidate_pane_ParamLimits

0x7626,	// (0x00044be5) aid_size_cell_vkb_ParamLimits

0x7626,	// (0x00044be5) aid_size_cell_vkb

0x79f8,	// (0x00044fb7) cell_vkb_candidate_pane

0x9a7c,	// (0x0004703b) bg_popup_fep_shadow_pane_g1

0x76a2,	// (0x00044c61) fep_vkb_bottom_pane_ParamLimits

0x76a2,	// (0x00044c61) fep_vkb_bottom_pane

0x76df,	// (0x00044c9e) fep_vkb_candidate_pane_ParamLimits

0x76df,	// (0x00044c9e) fep_vkb_candidate_pane

0x76fb,	// (0x00044cba) fep_vkb_keypad_pane_ParamLimits

0x76fb,	// (0x00044cba) fep_vkb_keypad_pane

0x7741,	// (0x00044d00) fep_vkb_side_pane_ParamLimits

0x7741,	// (0x00044d00) fep_vkb_side_pane

0x777d,	// (0x00044d3c) fep_vkb_top_pane_ParamLimits

0x777d,	// (0x00044d3c) fep_vkb_top_pane

0x77b9,	// (0x00044d78) fep_vkb_top_pane_g1_ParamLimits

0x77b9,	// (0x00044d78) fep_vkb_top_pane_g1

0x77c8,	// (0x00044d87) fep_vkb_top_pane_g2_ParamLimits

0x77c8,	// (0x00044d87) fep_vkb_top_pane_g2

0x77d7,	// (0x00044d96) fep_vkb_top_pane_g3_ParamLimits

0x77d7,	// (0x00044d96) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0004d0e8) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0004d0e8) fep_vkb_top_pane_g

0x7803,	// (0x00044dc2) fep_vkb_top_text_pane_ParamLimits

0x7803,	// (0x00044dc2) fep_vkb_top_text_pane

0xc6ef,	// (0x00049cae) fep_vkb_side_pane_g1_ParamLimits

0xc6ef,	// (0x00049cae) fep_vkb_side_pane_g1

0x7822,	// (0x00044de1) grid_vkb_side_pane_ParamLimits

0x7822,	// (0x00044de1) grid_vkb_side_pane

0x9a84,	// (0x00047043) bg_popup_fep_shadow_pane_g2

0x9a8d,	// (0x0004704c) bg_popup_fep_shadow_pane_g3

0x9a95,	// (0x00047054) bg_popup_fep_shadow_pane_g4

0x9a9e,	// (0x0004705d) bg_popup_fep_shadow_pane_g5

0x9aa8,	// (0x00047067) bg_popup_fep_shadow_pane_g6

0x9ab0,	// (0x0004706f) bg_popup_fep_shadow_pane_g7

0x48ae,	// (0x00041e6d) bg_popup_fep_shadow_pane_g8

0x7879,	// (0x00044e38) grid_vkb_keypad_number_pane_ParamLimits

0x7879,	// (0x00044e38) grid_vkb_keypad_number_pane

0x7889,	// (0x00044e48) grid_vkb_keypad_pane_ParamLimits

0x7889,	// (0x00044e48) grid_vkb_keypad_pane

0x78af,	// (0x00044e6e) fep_vkb_bottom_pane_g1_ParamLimits

0x78af,	// (0x00044e6e) fep_vkb_bottom_pane_g1

0x78d8,	// (0x00044e97) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x78d8,	// (0x00044e97) grid_vkb_keypad_bottom_left_pane

0x78ed,	// (0x00044eac) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x78ed,	// (0x00044eac) grid_vkb_keypad_bottom_right_pane

0x7902,	// (0x00044ec1) fep_vkb_top_text_pane_g1

0xc739,	// (0x00049cf8) fep_vkb_top_text_pane_t1

0xc74e,	// (0x00049d0d) cell_vkb_side_pane_ParamLimits

0xc74e,	// (0x00049d0d) cell_vkb_side_pane

0x7560,	// (0x00044b1f) cell_vkb_side_pane_g1

0x792a,	// (0x00044ee9) cell_vkb_keypad_pane_ParamLimits

0x792a,	// (0x00044ee9) cell_vkb_keypad_pane

0x79a5,	// (0x00044f64) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0004d115) bg_popup_fep_shadow_pane_g

0x9ac2,	// (0x00047081) cell_hwr_side_pane_g1

0x9ac2,	// (0x00047081) cell_hwr_side_pane_g2

0x79af,	// (0x00044f6e) cell_vkb_keypad_pane_t1

0xc771,	// (0x00049d30) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc771,	// (0x00049d30) cell_vkb_keypad_bottom_left_pane

0xc78e,	// (0x00049d4d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc78e,	// (0x00049d4d) cell_vkb_keypad_bottom_right_pane

0x7560,	// (0x00044b1f) cell_vkb_keypad_bottom_left_pane_g1

0x7560,	// (0x00044b1f) cell_vkb_keypad_bottom_right_pane_g1

0x79bd,	// (0x00044f7c) cell_vkb_keypad_number_pane_ParamLimits

0x79bd,	// (0x00044f7c) cell_vkb_keypad_number_pane

0x79dc,	// (0x00044f9b) cell_vkb_keypad_number_pane_g1

0x79e6,	// (0x00044fa5) cell_vkb_keypad_number_pane_g2

0x79ef,	// (0x00044fae) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0004d107) cell_vkb_keypad_number_pane_g

0x79af,	// (0x00044f6e) cell_vkb_keypad_number_pane_t1

0x7a15,	// (0x00044fd4) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0004d128) cell_hwr_side_pane_g

0x7a2e,	// (0x00044fed) cell_hwr_side_pane_t1

0x9acc,	// (0x0004708b) cell_hwr_side_pane_t1_copy1

0x9ada,	// (0x00047099) cell_hwr_candidate_pane_g1

0x9b09,	// (0x000470c8) cell_hwr_candidate_pane_t1

0x7560,	// (0x00044b1f) cell_vkb_candidate_pane_g2

0x7a72,	// (0x00045031) cell_vkb_candidate_pane_t1

0x9875,	// (0x00046e34) bg_popup_fep_shadow_pane_ParamLimits

0x9875,	// (0x00046e34) bg_popup_fep_shadow_pane

0x992a,	// (0x00046ee9) bg_fep_hwr_top_pane_g4

0x75f4,	// (0x00044bb3) bg_hwr_side_pane_g1_ParamLimits

0x75f4,	// (0x00044bb3) bg_hwr_side_pane_g1

0x999b,	// (0x00046f5a) cell_hwr_side_pane_ParamLimits

0x999b,	// (0x00046f5a) cell_hwr_side_pane

0x99d6,	// (0x00046f95) fep_hwr_write_pane_g1_ParamLimits

0x99d6,	// (0x00046f95) fep_hwr_write_pane_g1

0x99e3,	// (0x00046fa2) fep_hwr_write_pane_g2_ParamLimits

0x99e3,	// (0x00046fa2) fep_hwr_write_pane_g2

0x99f0,	// (0x00046faf) fep_hwr_write_pane_g3_ParamLimits

0x99f0,	// (0x00046faf) fep_hwr_write_pane_g3

0x99fe,	// (0x00046fbd) fep_hwr_write_pane_g4_ParamLimits

0x99fe,	// (0x00046fbd) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0004d0d4) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0004d0d4) fep_hwr_write_pane_g

0x992a,	// (0x00046ee9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x992a,	// (0x00046ee9) bg_fep_hwr_candidate_pane_g2

0x9a13,	// (0x00046fd2) cell_hwr_candidate_pane_ParamLimits

0x9a13,	// (0x00046fd2) cell_hwr_candidate_pane

0x9a55,	// (0x00047014) fep_hwr_candidate_pane_g1_ParamLimits

0x7654,	// (0x00044c13) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7654,	// (0x00044c13) bg_popup_fep_shadow_pane_cp2

0x77f5,	// (0x00044db4) fep_vkb_top_pane_g4_ParamLimits

0x77f5,	// (0x00044db4) fep_vkb_top_pane_g4

0x7814,	// (0x00044dd3) fep_vkb_side_pane_g2_ParamLimits

0x7814,	// (0x00044dd3) fep_vkb_side_pane_g2

0x8d38,	// (0x000462f7) list_setting_pane_t4_ParamLimits

0x8d38,	// (0x000462f7) list_setting_pane_t4

0xa8bf,	// (0x00047e7e) list_setting_number_pane_t5_ParamLimits

0xa8bf,	// (0x00047e7e) list_setting_number_pane_t5

0xac71,	// (0x00048230) list_double_heading_pane_cp2_ParamLimits

0xac71,	// (0x00048230) list_double_heading_pane_cp2

0x4849,	// (0x00041e08) list_double_heading_pane_g1_cp2_ParamLimits

0x4849,	// (0x00041e08) list_double_heading_pane_g1_cp2

0x4855,	// (0x00041e14) list_double_heading_pane_g2_cp2_ParamLimits

0x4855,	// (0x00041e14) list_double_heading_pane_g2_cp2

0x7a80,	// (0x0004503f) list_double_heading_pane_t1_cp2_ParamLimits

0x7a80,	// (0x0004503f) list_double_heading_pane_t1_cp2

0x7a96,	// (0x00045055) list_double_heading_pane_t2_cp2_ParamLimits

0x7a96,	// (0x00045055) list_double_heading_pane_t2_cp2

0x3ff0,	// (0x000415af) aid_value_unit2

0x87ea,	// (0x00045da9) popup_preview_fixed_window

0x419b,	// (0x0004175a) bg_popup_preview_window_pane_cp02

0x7aea,	// (0x000450a9) list_preview_fixed_pane

0x7b30,	// (0x000450ef) list_empty_pane_fp_ParamLimits

0x7b30,	// (0x000450ef) list_empty_pane_fp

0x7b30,	// (0x000450ef) list_single_cale_day_pane_fp_ParamLimits

0x7b30,	// (0x000450ef) list_single_cale_day_pane_fp

0x7b30,	// (0x000450ef) list_single_graphic_heading_pane_fp_ParamLimits

0x7b30,	// (0x000450ef) list_single_graphic_heading_pane_fp

0x7b30,	// (0x000450ef) list_single_graphic_pane_fp_ParamLimits

0x7b30,	// (0x000450ef) list_single_graphic_pane_fp

0x7b30,	// (0x000450ef) list_single_heading_pane_fp_ParamLimits

0x7b30,	// (0x000450ef) list_single_heading_pane_fp

0x7b30,	// (0x000450ef) list_single_pane_fp_ParamLimits

0x7b30,	// (0x000450ef) list_single_pane_fp

0x7b47,	// (0x00045106) list_single_pane_fp_g1_ParamLimits

0x7b47,	// (0x00045106) list_single_pane_fp_g1

0xa851,	// (0x00047e10) list_single_pane_fp_g2_ParamLimits

0xa851,	// (0x00047e10) list_single_pane_fp_g2

0xb316,	// (0x000488d5) list_single_pane_fp_g3_ParamLimits

0xb316,	// (0x000488d5) list_single_pane_fp_g3

0x7b53,	// (0x00045112) list_single_pane_fp_g4_ParamLimits

0x7b53,	// (0x00045112) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0004d13b) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0004d13b) list_single_pane_fp_g

0xb32a,	// (0x000488e9) list_single_pane_fp_t1_ParamLimits

0xb32a,	// (0x000488e9) list_single_pane_fp_t1

0xb341,	// (0x00048900) list_single_graphic_pane_fp_g1_ParamLimits

0xb341,	// (0x00048900) list_single_graphic_pane_fp_g1

0x7b47,	// (0x00045106) list_single_graphic_pane_fp_g2_ParamLimits

0x7b47,	// (0x00045106) list_single_graphic_pane_fp_g2

0xa851,	// (0x00047e10) list_single_graphic_pane_fp_g3_ParamLimits

0xa851,	// (0x00047e10) list_single_graphic_pane_fp_g3

0xb316,	// (0x000488d5) list_single_graphic_pane_fp_g4_ParamLimits

0xb316,	// (0x000488d5) list_single_graphic_pane_fp_g4

0x7b53,	// (0x00045112) list_single_graphic_pane_fp_g5_ParamLimits

0x7b53,	// (0x00045112) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0004d144) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0004d144) list_single_graphic_pane_fp_g

0xb34d,	// (0x0004890c) list_single_graphic_pane_fp_t1_ParamLimits

0xb34d,	// (0x0004890c) list_single_graphic_pane_fp_t1

0xb341,	// (0x00048900) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb341,	// (0x00048900) list_single_graphic_heading_pane_fp_g1

0x7b47,	// (0x00045106) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b47,	// (0x00045106) list_single_graphic_heading_pane_fp_g2

0xa851,	// (0x00047e10) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xa851,	// (0x00047e10) list_single_graphic_heading_pane_fp_g3

0xb316,	// (0x000488d5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb316,	// (0x000488d5) list_single_graphic_heading_pane_fp_g4

0x7b53,	// (0x00045112) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b53,	// (0x00045112) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0004d144) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0004d144) list_single_graphic_heading_pane_fp_g

0xb363,	// (0x00048922) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb363,	// (0x00048922) list_single_graphic_heading_pane_fp_t1

0xb379,	// (0x00048938) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb379,	// (0x00048938) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0004d14f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0004d14f) list_single_graphic_heading_pane_fp_t

0xb38b,	// (0x0004894a) list_single_cale_day_pane_fp_g1_ParamLimits

0xb38b,	// (0x0004894a) list_single_cale_day_pane_fp_g1

0x7b5f,	// (0x0004511e) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b5f,	// (0x0004511e) list_single_cale_day_pane_fp_g2

0xb3c3,	// (0x00048982) list_single_cale_day_pane_fp_g3_ParamLimits

0xb3c3,	// (0x00048982) list_single_cale_day_pane_fp_g3

0xb3eb,	// (0x000489aa) list_single_cale_day_pane_fp_g4_ParamLimits

0xb3eb,	// (0x000489aa) list_single_cale_day_pane_fp_g4

0xb40f,	// (0x000489ce) list_single_cale_day_pane_fp_g5_ParamLimits

0xb40f,	// (0x000489ce) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0004d154) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0004d154) list_single_cale_day_pane_fp_g

0xb433,	// (0x000489f2) list_single_cale_day_pane_fp_t1_ParamLimits

0xb433,	// (0x000489f2) list_single_cale_day_pane_fp_t1

0xb459,	// (0x00048a18) list_single_cale_day_pane_fp_t2_ParamLimits

0xb459,	// (0x00048a18) list_single_cale_day_pane_fp_t2

0xb472,	// (0x00048a31) list_single_cale_day_pane_fp_t3_ParamLimits

0xb472,	// (0x00048a31) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0004d15f) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0004d15f) list_single_cale_day_pane_fp_t

0x7b47,	// (0x00045106) list_empty_pane_fp_g1_ParamLimits

0x7b47,	// (0x00045106) list_empty_pane_fp_g1

0xb48b,	// (0x00048a4a) list_empty_pane_fp_t1

0xb499,	// (0x00048a58) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0004d166) list_empty_pane_fp_t

0x7b47,	// (0x00045106) list_single_heading_pane_fp_g1_ParamLimits

0x7b47,	// (0x00045106) list_single_heading_pane_fp_g1

0xa851,	// (0x00047e10) list_single_heading_pane_fp_g2_ParamLimits

0xa851,	// (0x00047e10) list_single_heading_pane_fp_g2

0xb316,	// (0x000488d5) list_single_heading_pane_fp_g3_ParamLimits

0xb316,	// (0x000488d5) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0004d16b) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0004d16b) list_single_heading_pane_fp_g

0xb4a7,	// (0x00048a66) list_single_heading_pane_fp_t1_ParamLimits

0xb4a7,	// (0x00048a66) list_single_heading_pane_fp_t1

0xb4b9,	// (0x00048a78) list_single_heading_pane_fp_t2_ParamLimits

0xb4b9,	// (0x00048a78) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0004d172) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0004d172) list_single_heading_pane_fp_t

0x4992,	// (0x00041f51) aid_size_cell_fast

0x417e,	// (0x0004173d) soft_indicator_pane_cp1_t1

0x49cf,	// (0x00041f8e) cell_app_pane_cp2_ParamLimits

0x49cf,	// (0x00041f8e) cell_app_pane_cp2

0x9897,	// (0x00046e56) fep_hwr_candidate_drop_down_list_pane

0x9a6f,	// (0x0004702e) fep_hwr_candidate_pane_g3_ParamLimits

0x9a6f,	// (0x0004702e) fep_hwr_candidate_pane_g3

0x3a39,	// (0x00040ff8) fep_hwr_candidate_pane_g4_ParamLimits

0x3a39,	// (0x00040ff8) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0004d0e1) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0004d0e1) fep_hwr_candidate_pane_g

0x76ce,	// (0x00044c8d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x76ce,	// (0x00044c8d) fep_vkb_candidate_drop_down_list_pane

0x7a1d,	// (0x00044fdc) fep_vkb_candidate_pane_g3

0x7a25,	// (0x00044fe4) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0004d10e) fep_vkb_candidate_pane_g

0x9ada,	// (0x00047099) cell_hwr_candidate_pane_g1_ParamLimits

0x9ae8,	// (0x000470a7) cell_hwr_candidate_pane_g3_ParamLimits

0x9ae8,	// (0x000470a7) cell_hwr_candidate_pane_g3

0xde29,	// (0x0004b3e8) cell_hwr_candidate_pane_g4_ParamLimits

0xde29,	// (0x0004b3e8) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0004d12d) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0004d12d) cell_hwr_candidate_pane_g

0x7a3c,	// (0x00044ffb) cell_vkb_candidate_pane_g3_ParamLimits

0x7a3c,	// (0x00044ffb) cell_vkb_candidate_pane_g3

0x7a57,	// (0x00045016) cell_vkb_candidate_pane_g4_ParamLimits

0x7a57,	// (0x00045016) cell_vkb_candidate_pane_g4

0xc7c7,	// (0x00049d86) cell_app_pane_cp2_g1_ParamLimits

0xc7c7,	// (0x00049d86) cell_app_pane_cp2_g1

0xc7e5,	// (0x00049da4) cell_app_pane_cp2_g2_ParamLimits

0xc7e5,	// (0x00049da4) cell_app_pane_cp2_g2

0x0001,

0x016d,	// (0x0003d72c) cell_app_pane_cp2_g_ParamLimits

0x016d,	// (0x0003d72c) cell_app_pane_cp2_g

0xc7f1,	// (0x00049db0) cell_app_pane_cp2_t1_ParamLimits

0xc7f1,	// (0x00049db0) cell_app_pane_cp2_t1

0x482f,	// (0x00041dee) grid_highlight_pane_cp1_ParamLimits

0x482f,	// (0x00041dee) grid_highlight_pane_cp1

0x9b27,	// (0x000470e6) cell_hwr_candidate_pane_cp1_ParamLimits

0x9b27,	// (0x000470e6) cell_hwr_candidate_pane_cp1

0x9ada,	// (0x00047099) fep_hwr_candidate_drop_down_list_pane_g1

0x9b46,	// (0x00047105) fep_hwr_candidate_drop_down_list_pane_g2

0x9b53,	// (0x00047112) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0004d177) fep_hwr_candidate_drop_down_list_pane_g

0x9b60,	// (0x0004711f) fep_hwr_candidate_drop_down_list_scroll_pane

0x9b69,	// (0x00047128) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9b69,	// (0x00047128) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9b76,	// (0x00047135) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9b76,	// (0x00047135) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9b83,	// (0x00047142) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9b83,	// (0x00047142) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x9b90,	// (0x0004714f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9b90,	// (0x0004714f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9bab,	// (0x0004716a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9bab,	// (0x0004716a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9bc6,	// (0x00047185) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9bc6,	// (0x00047185) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9be1,	// (0x000471a0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9be1,	// (0x000471a0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9bfc,	// (0x000471bb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9bfc,	// (0x000471bb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0004d17e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0004d17e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc803,	// (0x00049dc2) cell_vkb_candidate_pane_cp1_ParamLimits

0xc803,	// (0x00049dc2) cell_vkb_candidate_pane_cp1

0x77f5,	// (0x00044db4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x77f5,	// (0x00044db4) fep_vkb_candidate_drop_down_list_pane_g1

0xc823,	// (0x00049de2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc823,	// (0x00049de2) fep_vkb_candidate_drop_down_list_pane_g2

0xc830,	// (0x00049def) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc830,	// (0x00049def) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0004d18f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x0004d18f) fep_vkb_candidate_drop_down_list_pane_g

0xc83d,	// (0x00049dfc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc83d,	// (0x00049dfc) fep_vkb_candidate_drop_down_list_scroll_pane

0xc84a,	// (0x00049e09) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc84a,	// (0x00049e09) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc857,	// (0x00049e16) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc857,	// (0x00049e16) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc863,	// (0x00049e22) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc863,	// (0x00049e22) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7aa8,	// (0x00045067) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7aa8,	// (0x00045067) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7ac9,	// (0x00045088) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ac9,	// (0x00045088) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc86f,	// (0x00049e2e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc86f,	// (0x00049e2e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc890,	// (0x00049e4f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc890,	// (0x00049e4f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8b1,	// (0x00049e70) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8b1,	// (0x00049e70) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x0004d196) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x0004d196) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa550,	// (0x00047b0f) title_pane_g1_ParamLimits

0xa55d,	// (0x00047b1c) title_pane_g2_ParamLimits

0xf56a,	// (0x0004cb29) title_pane_g_ParamLimits

0x4d5f,	// (0x0004231e) aid_call2_pane

0x4d57,	// (0x00042316) aid_call_pane

0x4d67,	// (0x00042326) popup_clock_analogue_window_g1

0x4d67,	// (0x00042326) popup_clock_analogue_window_g2

0x8f82,	// (0x00046541) popup_clock_analogue_window_g3

0x8f8b,	// (0x0004654a) popup_clock_analogue_window_g4

0x4002,	// (0x000415c1) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0004ccd8) popup_clock_analogue_window_g

0x8f93,	// (0x00046552) popup_clock_analogue_window_t1

0x8fa1,	// (0x00046560) clock_digital_number_pane_ParamLimits

0x8fa1,	// (0x00046560) clock_digital_number_pane

0x8fad,	// (0x0004656c) clock_digital_number_pane_cp02_ParamLimits

0x8fad,	// (0x0004656c) clock_digital_number_pane_cp02

0x8fb9,	// (0x00046578) clock_digital_number_pane_cp03_ParamLimits

0x8fb9,	// (0x00046578) clock_digital_number_pane_cp03

0x8fc5,	// (0x00046584) clock_digital_number_pane_cp04_ParamLimits

0x8fc5,	// (0x00046584) clock_digital_number_pane_cp04

0x8fd1,	// (0x00046590) clock_digital_separator_pane_ParamLimits

0x8fd1,	// (0x00046590) clock_digital_separator_pane

0x8fdd,	// (0x0004659c) popup_clock_digital_window_t1_ParamLimits

0x8fdd,	// (0x0004659c) popup_clock_digital_window_t1

0x4002,	// (0x000415c1) clock_digital_number_pane_g1

0x4002,	// (0x000415c1) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0004cce3) clock_digital_number_pane_g

0x4002,	// (0x000415c1) clock_digital_separator_pane_g1

0x4002,	// (0x000415c1) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0004cce3) clock_digital_separator_pane_g

0xbb60,	// (0x0004911f) aid_fill_nsta_ParamLimits

0xbc29,	// (0x000491e8) indicator_nsta_pane_ParamLimits

0x56a9,	// (0x00042c68) popup_clock_analogue_window

0x56a9,	// (0x00042c68) popup_clock_digital_window

0x4068,	// (0x00041627) grid_indicator_nsta_pane_ParamLimits

0x7206,	// (0x000447c5) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x0004d076) clock_nsta_pane_t

0x8f46,	// (0x00046505) aid_size_max_handle

0x8f50,	// (0x0004650f) aid_size_min_handle

0x5276,	// (0x00042835) editor_scroll_pane

0xc8cc,	// (0x00049e8b) ex_editor_pane

0x494e,	// (0x00041f0d) scroll_pane_cp13

0x47ce,	// (0x00041d8d) scroll_pane_cp14

0x4d91,	// (0x00042350) scroll_pane_cp36

0xac83,	// (0x00048242) list_single_graphic_hl_pane_cp2_ParamLimits

0xac83,	// (0x00048242) list_single_graphic_hl_pane_cp2

0xb08c,	// (0x0004864b) list_single_graphic_hl_pane_ParamLimits

0xb08c,	// (0x0004864b) list_single_graphic_hl_pane

0xb4cf,	// (0x00048a8e) aid_size_min_hl_cp1

0xc8d4,	// (0x00049e93) list_highlight_pane_cp34_ParamLimits

0xc8d4,	// (0x00049e93) list_highlight_pane_cp34

0xc8e5,	// (0x00049ea4) list_single_graphic_hl_pane_g1_ParamLimits

0xc8e5,	// (0x00049ea4) list_single_graphic_hl_pane_g1

0xb4d8,	// (0x00048a97) list_single_graphic_hl_pane_g2_ParamLimits

0xb4d8,	// (0x00048a97) list_single_graphic_hl_pane_g2

0xb4d8,	// (0x00048a97) list_single_graphic_hl_pane_g3_ParamLimits

0xb4d8,	// (0x00048a97) list_single_graphic_hl_pane_g3

0x51e7,	// (0x000427a6) list_single_graphic_hl_pane_g4_ParamLimits

0x51e7,	// (0x000427a6) list_single_graphic_hl_pane_g4

0xb4e4,	// (0x00048aa3) list_single_graphic_hl_pane_g5_ParamLimits

0xb4e4,	// (0x00048aa3) list_single_graphic_hl_pane_g5

0x0004,

0xfbe8,	// (0x0004d1a7) list_single_graphic_hl_pane_g_ParamLimits

0xfbe8,	// (0x0004d1a7) list_single_graphic_hl_pane_g

0x89b2,	// (0x00045f71) list_single_graphic_hl_pane_t1_ParamLimits

0x89b2,	// (0x00045f71) list_single_graphic_hl_pane_t1

0xc8f2,	// (0x00049eb1) aid_size_min_hl_cp2

0xc8fb,	// (0x00049eba) list_highlight_pane_cp34_cp2_ParamLimits

0xc8fb,	// (0x00049eba) list_highlight_pane_cp34_cp2

0xc8e5,	// (0x00049ea4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8e5,	// (0x00049ea4) list_single_graphic_hl_pane_g1_cp2

0xc908,	// (0x00049ec7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc908,	// (0x00049ec7) list_single_graphic_hl_pane_g2_cp2

0xc914,	// (0x00049ed3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc914,	// (0x00049ed3) list_single_graphic_hl_pane_g3_cp2

0x51ad,	// (0x0004276c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x51ad,	// (0x0004276c) list_single_graphic_hl_pane_g4_cp2

0xc922,	// (0x00049ee1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc922,	// (0x00049ee1) list_single_graphic_hl_pane_g5_cp2

0x928f,	// (0x0004684e) control_pane_g4_ParamLimits

0x928f,	// (0x0004684e) control_pane_g4

0x4986,	// (0x00041f45) bg_popup_sub_pane_cp10_ParamLimits

0x756a,	// (0x00044b29) list_choice_list_pane_ParamLimits

0x7579,	// (0x00044b38) scroll_pane_cp23

0x419b,	// (0x0004175a) bg_popup_preview_window_pane_cp02_ParamLimits

0x7aea,	// (0x000450a9) list_preview_fixed_pane_ParamLimits

0x7b00,	// (0x000450bf) list_preview_fixed_pane_cp_ParamLimits

0x7b00,	// (0x000450bf) list_preview_fixed_pane_cp

0x7b0c,	// (0x000450cb) popup_preview_fixed_window_g1_ParamLimits

0x7b0c,	// (0x000450cb) popup_preview_fixed_window_g1

0x7b18,	// (0x000450d7) popup_preview_fixed_window_g2_ParamLimits

0x7b18,	// (0x000450d7) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0004d134) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0004d134) popup_preview_fixed_window_g

0x8eba,	// (0x00046479) aid_navi_side_left_pane_ParamLimits

0x8ecf,	// (0x0004648e) aid_navi_side_right_pane_ParamLimits

0x8ee7,	// (0x000464a6) navi_icon_pane_stacon_ParamLimits

0x8efb,	// (0x000464ba) navi_navi_pane_stacon_ParamLimits

0x8ee7,	// (0x000464a6) navi_text_pane_stacon_ParamLimits

0x3ff8,	// (0x000415b7) main_text_info_pane

0xc94c,	// (0x00049f0b) listscroll_text_info_pane

0xc954,	// (0x00049f13) list_text_info_pane_ParamLimits

0xc954,	// (0x00049f13) list_text_info_pane

0xc963,	// (0x00049f22) scroll_pane_cp24_ParamLimits

0xc963,	// (0x00049f22) scroll_pane_cp24

0xc981,	// (0x00049f40) list_text_info_pane_t1_ParamLimits

0xc981,	// (0x00049f40) list_text_info_pane_t1

0xb656,	// (0x00048c15) popup_fast_swap2_window_ParamLimits

0xb656,	// (0x00048c15) popup_fast_swap2_window

0xc9ba,	// (0x00049f79) aid_size_cell_fast2

0x3ff8,	// (0x000415b7) bg_popup_window_pane_cp17

0x5b4d,	// (0x0004310c) heading_pane_cp2

0x4464,	// (0x00041a23) listscroll_fast2_pane

0xc9c4,	// (0x00049f83) grid_fast2_pane

0xc9ce,	// (0x00049f8d) listscroll_fast2_pane_g1

0xc9d6,	// (0x00049f95) listscroll_fast2_pane_g2

0x0001,

0x01a6,	// (0x0003d765) listscroll_fast2_pane_g

0x494e,	// (0x00041f0d) scroll_pane_cp26

0xc9e0,	// (0x00049f9f) cell_fast2_pane_ParamLimits

0xc9e0,	// (0x00049f9f) cell_fast2_pane

0xc9f5,	// (0x00049fb4) cell_fast2_pane_g1

0xc9fe,	// (0x00049fbd) cell_fast2_pane_g2

0xca07,	// (0x00049fc6) cell_fast2_pane_g3

0x0002,

0x01ab,	// (0x0003d76a) cell_fast2_pane_g

0x4595,	// (0x00041b54) grid_highlight_pane_cp9

0x45aa,	// (0x00041b69) main_eswt_pane_ParamLimits

0x45aa,	// (0x00041b69) main_eswt_pane

0xc978,	// (0x00049f37) list_single_text_info_pane

0xca0f,	// (0x00049fce) eswt_ctrl_button_pane

0xca0f,	// (0x00049fce) eswt_ctrl_canvas_pane

0xca17,	// (0x00049fd6) eswt_ctrl_combo_pane

0xca0f,	// (0x00049fce) eswt_ctrl_default_pane

0xca0f,	// (0x00049fce) eswt_ctrl_label_pane

0xca1f,	// (0x00049fde) eswt_ctrl_wait_pane

0xca27,	// (0x00049fe6) eswt_shell_pane

0x3ff8,	// (0x000415b7) listscroll_eswt_app_pane

0xca47,	// (0x0004a006) popup_eswt_tasktip_window_ParamLimits

0xca47,	// (0x0004a006) popup_eswt_tasktip_window

0x58a6,	// (0x00042e65) bg_popup_window_pane_cp18

0xca58,	// (0x0004a017) eswt_control_pane_g1_ParamLimits

0xca58,	// (0x0004a017) eswt_control_pane_g1

0xca65,	// (0x0004a024) eswt_control_pane_g2_ParamLimits

0xca65,	// (0x0004a024) eswt_control_pane_g2

0xca72,	// (0x0004a031) eswt_control_pane_g3_ParamLimits

0xca72,	// (0x0004a031) eswt_control_pane_g3

0xca7f,	// (0x0004a03e) eswt_control_pane_g4_ParamLimits

0xca7f,	// (0x0004a03e) eswt_control_pane_g4

0x0003,

0x01b2,	// (0x0003d771) eswt_control_pane_g_ParamLimits

0x01b2,	// (0x0003d771) eswt_control_pane_g

0x482f,	// (0x00041dee) bg_button_pane_ParamLimits

0x482f,	// (0x00041dee) bg_button_pane

0x45aa,	// (0x00041b69) common_borders_pane_copy2_ParamLimits

0x45aa,	// (0x00041b69) common_borders_pane_copy2

0xca8c,	// (0x0004a04b) control_button_pane_g1_ParamLimits

0xca8c,	// (0x0004a04b) control_button_pane_g1

0xca98,	// (0x0004a057) control_button_pane_g2_ParamLimits

0xca98,	// (0x0004a057) control_button_pane_g2

0xcaa4,	// (0x0004a063) control_button_pane_g3_ParamLimits

0xcaa4,	// (0x0004a063) control_button_pane_g3

0x0002,

0x01bb,	// (0x0003d77a) control_button_pane_g_ParamLimits

0x01bb,	// (0x0003d77a) control_button_pane_g

0xcab8,	// (0x0004a077) control_button_pane_t1

0xcac6,	// (0x0004a085) control_button_pane_t2

0x0001,

0x01c2,	// (0x0003d781) control_button_pane_t

0x57b6,	// (0x00042d75) bg_button_pane_g1

0x57be,	// (0x00042d7d) bg_button_pane_g2

0x57c6,	// (0x00042d85) bg_button_pane_g3

0x57ce,	// (0x00042d8d) bg_button_pane_g4

0x57d6,	// (0x00042d95) bg_button_pane_g5

0x57de,	// (0x00042d9d) bg_button_pane_g6

0x57e6,	// (0x00042da5) bg_button_pane_g7

0x57ee,	// (0x00042dad) bg_button_pane_g8

0x57f6,	// (0x00042db5) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0004ce3b) bg_button_pane_g

0x7525,	// (0x00044ae4) common_borders_pane_ParamLimits

0x7525,	// (0x00044ae4) common_borders_pane

0xca58,	// (0x0004a017) eswt_control_pane_g1_copy1_ParamLimits

0xca58,	// (0x0004a017) eswt_control_pane_g1_copy1

0xca65,	// (0x0004a024) eswt_control_pane_g2_copy1_ParamLimits

0xca65,	// (0x0004a024) eswt_control_pane_g2_copy1

0xca72,	// (0x0004a031) eswt_control_pane_g3_copy1_ParamLimits

0xca72,	// (0x0004a031) eswt_control_pane_g3_copy1

0xca7f,	// (0x0004a03e) eswt_control_pane_g4_copy1_ParamLimits

0xca7f,	// (0x0004a03e) eswt_control_pane_g4_copy1

0x7560,	// (0x00044b1f) bg_eswt_ctrl_canvas_pane_g1

0x7525,	// (0x00044ae4) common_borders_pane_cp2_ParamLimits

0x7525,	// (0x00044ae4) common_borders_pane_cp2

0x7525,	// (0x00044ae4) common_borders_pane_cp3_ParamLimits

0x7525,	// (0x00044ae4) common_borders_pane_cp3

0xcad4,	// (0x0004a093) separator_horizontal_pane

0xcadc,	// (0x0004a09b) separator_vertical_pane

0xca58,	// (0x0004a017) eswt_control_pane_g1_copy2_ParamLimits

0xca58,	// (0x0004a017) eswt_control_pane_g1_copy2

0xca65,	// (0x0004a024) eswt_control_pane_g2_copy2_ParamLimits

0xca65,	// (0x0004a024) eswt_control_pane_g2_copy2

0xca72,	// (0x0004a031) eswt_control_pane_g3_copy2_ParamLimits

0xca72,	// (0x0004a031) eswt_control_pane_g3_copy2

0xca7f,	// (0x0004a03e) eswt_control_pane_g4_copy2_ParamLimits

0xca7f,	// (0x0004a03e) eswt_control_pane_g4_copy2

0x3ff8,	// (0x000415b7) common_borders_pane_cp4

0xcae5,	// (0x0004a0a4) separator_horizontal_pane_g1

0xcaee,	// (0x0004a0ad) separator_horizontal_pane_g2

0xcaf7,	// (0x0004a0b6) separator_horizontal_pane_g3

0x0002,

0x01c7,	// (0x0003d786) separator_horizontal_pane_g

0xca58,	// (0x0004a017) eswt_control_pane_g1_copy3_ParamLimits

0xca58,	// (0x0004a017) eswt_control_pane_g1_copy3

0xca65,	// (0x0004a024) eswt_control_pane_g2_copy3_ParamLimits

0xca65,	// (0x0004a024) eswt_control_pane_g2_copy3

0xca72,	// (0x0004a031) eswt_control_pane_g3_copy3_ParamLimits

0xca72,	// (0x0004a031) eswt_control_pane_g3_copy3

0xca7f,	// (0x0004a03e) eswt_control_pane_g4_copy3_ParamLimits

0xca7f,	// (0x0004a03e) eswt_control_pane_g4_copy3

0x3ff8,	// (0x000415b7) common_borders_pane_cp5

0xcb00,	// (0x0004a0bf) separator_vertical_pane_g1

0xcb09,	// (0x0004a0c8) separator_vertical_pane_g2

0xcb12,	// (0x0004a0d1) separator_vertical_pane_g3

0x0002,

0x01ce,	// (0x0003d78d) separator_vertical_pane_g

0xca58,	// (0x0004a017) eswt_control_pane_g1_copy4_ParamLimits

0xca58,	// (0x0004a017) eswt_control_pane_g1_copy4

0xca65,	// (0x0004a024) eswt_control_pane_g2_copy4_ParamLimits

0xca65,	// (0x0004a024) eswt_control_pane_g2_copy4

0xca72,	// (0x0004a031) eswt_control_pane_g3_copy4_ParamLimits

0xca72,	// (0x0004a031) eswt_control_pane_g3_copy4

0xca7f,	// (0x0004a03e) eswt_control_pane_g4_copy4_ParamLimits

0xca7f,	// (0x0004a03e) eswt_control_pane_g4_copy4

0xcb1b,	// (0x0004a0da) eswt_ctrl_combo_button_pane

0xcb23,	// (0x0004a0e2) eswt_ctrl_input_pane

0xcb2b,	// (0x0004a0ea) popup_choice_list_window_cp70

0xcb33,	// (0x0004a0f2) eswt_ctrl_input_pane_t1

0x3ff8,	// (0x000415b7) input_focus_pane_cp70

0x7525,	// (0x00044ae4) bg_button_pane_cp70_ParamLimits

0x7525,	// (0x00044ae4) bg_button_pane_cp70

0xcb41,	// (0x0004a100) eswt_ctrl_combo_button_pane_g1

0xcb49,	// (0x0004a108) wait_bar_pane_cp70

0x58a6,	// (0x00042e65) bg_popup_window_pane_cp70_ParamLimits

0x58a6,	// (0x00042e65) bg_popup_window_pane_cp70

0xcb51,	// (0x0004a110) popup_eswt_tasktip_window_t1

0xcb67,	// (0x0004a126) wait_bar_pane_cp71_ParamLimits

0xcb67,	// (0x0004a126) wait_bar_pane_cp71

0xcb73,	// (0x0004a132) grid_eswt_app_pane

0x4ba6,	// (0x00042165) scroll_pane_cp70

0xcb7c,	// (0x0004a13b) cell_eswt_app_pane_ParamLimits

0xcb7c,	// (0x0004a13b) cell_eswt_app_pane

0xcbb0,	// (0x0004a16f) cell_eswt_app_pane_g1_ParamLimits

0xcbb0,	// (0x0004a16f) cell_eswt_app_pane_g1

0xcbdf,	// (0x0004a19e) cell_eswt_app_pane_g2_ParamLimits

0xcbdf,	// (0x0004a19e) cell_eswt_app_pane_g2

0x0001,

0x01d5,	// (0x0003d794) cell_eswt_app_pane_g_ParamLimits

0x01d5,	// (0x0003d794) cell_eswt_app_pane_g

0xcc08,	// (0x0004a1c7) cell_eswt_app_pane_t1_ParamLimits

0xcc08,	// (0x0004a1c7) cell_eswt_app_pane_t1

0xcc3a,	// (0x0004a1f9) grid_highlight_pane_cp70_ParamLimits

0xcc3a,	// (0x0004a1f9) grid_highlight_pane_cp70

0x5149,	// (0x00042708) set_content_pane_g1

0x544d,	// (0x00042a0c) status_small_volume_pane

0x9c17,	// (0x000471d6) status_small_volume_pane_g1

0x9c1f,	// (0x000471de) volume_small2_pane

0x9c28,	// (0x000471e7) volume_small2_pane_g1

0x9c31,	// (0x000471f0) volume_small2_pane_g2

0x9c3a,	// (0x000471f9) volume_small2_pane_g3

0x9c43,	// (0x00047202) volume_small2_pane_g4

0x9c4c,	// (0x0004720b) volume_small2_pane_g5

0x9c55,	// (0x00047214) volume_small2_pane_g6

0x9c5e,	// (0x0004721d) volume_small2_pane_g7

0x9c67,	// (0x00047226) volume_small2_pane_g8

0x9c70,	// (0x0004722f) volume_small2_pane_g9

0x9c79,	// (0x00047238) volume_small2_pane_g10

0x0009,

0xfbf3,	// (0x0004d1b2) volume_small2_pane_g

0x7902,	// (0x00044ec1) fep_vkb_top_text_pane_g1_ParamLimits

0xc739,	// (0x00049cf8) fep_vkb_top_text_pane_t1_ParamLimits

0x7b24,	// (0x000450e3) popup_preview_fixed_window_g3_ParamLimits

0x7b24,	// (0x000450e3) popup_preview_fixed_window_g3

0xba58,	// (0x00049017) popup_toolbar_trans_pane

0xc171,	// (0x00049730) aid_height_set_list_ParamLimits

0x5ed9,	// (0x00043498) aid_size_parent_ParamLimits

0x4986,	// (0x00041f45) list_highlight_pane_cp2_ParamLimits

0x5149,	// (0x00042708) set_content_pane_g1_ParamLimits

0xb0ae,	// (0x0004866d) list_single_image_pane_ParamLimits

0xb0ae,	// (0x0004866d) list_single_image_pane

0xcc46,	// (0x0004a205) aid_size_cell_image_ParamLimits

0xcc46,	// (0x0004a205) aid_size_cell_image

0xcc53,	// (0x0004a212) grid_single_image_pane_ParamLimits

0xcc53,	// (0x0004a212) grid_single_image_pane

0x4849,	// (0x00041e08) list_single_image_pane_g1_ParamLimits

0x4849,	// (0x00041e08) list_single_image_pane_g1

0x4855,	// (0x00041e14) list_single_image_pane_g2_ParamLimits

0x4855,	// (0x00041e14) list_single_image_pane_g2

0x0001,

0xfc08,	// (0x0004d1c7) list_single_image_pane_g_ParamLimits

0xfc08,	// (0x0004d1c7) list_single_image_pane_g

0xcc5f,	// (0x0004a21e) list_single_image_pane_t1_ParamLimits

0xcc5f,	// (0x0004a21e) list_single_image_pane_t1

0xcc75,	// (0x0004a234) cell_image_list_pane_ParamLimits

0xcc75,	// (0x0004a234) cell_image_list_pane

0xcc89,	// (0x0004a248) cell_image_list_pane_g1

0xcc92,	// (0x0004a251) cell_image_list_pane_g2

0x0001,

0x01f4,	// (0x0003d7b3) cell_image_list_pane_g

0xcc9b,	// (0x0004a25a) aid_size_cell_tb_trans_pane

0x482f,	// (0x00041dee) bg_tb_trans_pane

0xccad,	// (0x0004a26c) grid_tb_trans_pane

0x57b6,	// (0x00042d75) bg_tb_trans_pane_g1

0x57be,	// (0x00042d7d) bg_tb_trans_pane_g2

0x57c6,	// (0x00042d85) bg_tb_trans_pane_g3

0x57ce,	// (0x00042d8d) bg_tb_trans_pane_g4

0x57d6,	// (0x00042d95) bg_tb_trans_pane_g5

0x57ee,	// (0x00042dad) bg_tb_trans_pane_g6

0x57f6,	// (0x00042db5) bg_tb_trans_pane_g7

0x57de,	// (0x00042d9d) bg_tb_trans_pane_g8

0x57e6,	// (0x00042da5) bg_tb_trans_pane_g9

0x0008,

0xfc0d,	// (0x0004d1cc) bg_tb_trans_pane_g

0xccc1,	// (0x0004a280) cell_toolbar_trans_pane_ParamLimits

0xccc1,	// (0x0004a280) cell_toolbar_trans_pane

0x7560,	// (0x00044b1f) cell_toolbar_trans_pane_g1

0xc513,	// (0x00049ad2) list_form2_midp_pane_t1

0xc521,	// (0x00049ae0) list_form2_midp_pane_t2

0x0001,

0x00a2,	// (0x0003d661) list_form2_midp_pane_t

0x72bd,	// (0x0004487c) scroll_pane_cp51_ParamLimits

0x7433,	// (0x000449f2) form2_midp_wait_pane_g1

0x743c,	// (0x000449fb) form2_midp_wait_pane_g2

0x7445,	// (0x00044a04) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0004d0bc) form2_midp_wait_pane_g

0x4068,	// (0x00041627) list_highlight_pane_cp21_ParamLimits

0x7465,	// (0x00044a24) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7474,	// (0x00044a33) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb01b,	// (0x000485da) list_single_2graphic_im_pane_ParamLimits

0xb01b,	// (0x000485da) list_single_2graphic_im_pane

0xcce7,	// (0x0004a2a6) list_single_2graphic_im_pane_g1_ParamLimits

0xcce7,	// (0x0004a2a6) list_single_2graphic_im_pane_g1

0xccf8,	// (0x0004a2b7) list_single_2graphic_im_pane_g2_ParamLimits

0xccf8,	// (0x0004a2b7) list_single_2graphic_im_pane_g2

0xcd04,	// (0x0004a2c3) list_single_2graphic_im_pane_g3_ParamLimits

0xcd04,	// (0x0004a2c3) list_single_2graphic_im_pane_g3

0x0003,

0x020c,	// (0x0003d7cb) list_single_2graphic_im_pane_g_ParamLimits

0x020c,	// (0x0003d7cb) list_single_2graphic_im_pane_g

0xcd24,	// (0x0004a2e3) list_single_2graphic_im_pane_t1_ParamLimits

0xcd24,	// (0x0004a2e3) list_single_2graphic_im_pane_t1

0x7b30,	// (0x000450ef) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b30,	// (0x000450ef) list_single_graphic_2heading_pane_fp

0xb341,	// (0x00048900) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb341,	// (0x00048900) list_single_graphic_2heading_pane_fp_g1

0x7b47,	// (0x00045106) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b47,	// (0x00045106) list_single_graphic_2heading_pane_fp_g2

0xa851,	// (0x00047e10) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xa851,	// (0x00047e10) list_single_graphic_2heading_pane_fp_g3

0xb316,	// (0x000488d5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb316,	// (0x000488d5) list_single_graphic_2heading_pane_fp_g4

0x7b53,	// (0x00045112) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b53,	// (0x00045112) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0004d144) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0004d144) list_single_graphic_2heading_pane_fp_g

0xb4f8,	// (0x00048ab7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xb4f8,	// (0x00048ab7) list_single_graphic_2heading_pane_fp_t1

0xb379,	// (0x00048938) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb379,	// (0x00048938) list_single_graphic_2heading_pane_fp_t2

0xb50e,	// (0x00048acd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xb50e,	// (0x00048acd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc20,	// (0x0004d1df) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc20,	// (0x0004d1df) list_single_graphic_2heading_pane_fp_t

0x7600,	// (0x00044bbf) fep_hwr_write_pane_g5_ParamLimits

0x7600,	// (0x00044bbf) fep_hwr_write_pane_g5

0x760c,	// (0x00044bcb) fep_hwr_write_pane_g6_ParamLimits

0x760c,	// (0x00044bcb) fep_hwr_write_pane_g6

0xca27,	// (0x00049fe6) eswt_shell_pane_ParamLimits

0x58a6,	// (0x00042e65) bg_popup_window_pane_cp18_ParamLimits

0x689e,	// (0x00043e5d) heading_pane_cp70

0xcb51,	// (0x0004a110) popup_eswt_tasktip_window_t1_ParamLimits

0xbba0,	// (0x0004915f) aid_touch_tab_arrow_left

0xbbaf,	// (0x0004916e) aid_touch_tab_arrow_right

0xa56e,	// (0x00047b2d) title_pane_g3_ParamLimits

0xa56e,	// (0x00047b2d) title_pane_g3

0x47ee,	// (0x00041dad) set_value_pane_g1

0xba58,	// (0x00049017) popup_toolbar_trans_pane_ParamLimits

0xcc9b,	// (0x0004a25a) aid_size_cell_tb_trans_pane_ParamLimits

0x482f,	// (0x00041dee) bg_tb_trans_pane_ParamLimits

0xccad,	// (0x0004a26c) grid_tb_trans_pane_ParamLimits

0x419b,	// (0x0004175a) cont_note_pane_ParamLimits

0x419b,	// (0x0004175a) cont_note_pane

0x45aa,	// (0x00041b69) cont_snote2_single_text_pane_ParamLimits

0x45aa,	// (0x00041b69) cont_snote2_single_text_pane

0x45aa,	// (0x00041b69) cont_snote2_single_graphic_pane_ParamLimits

0x45aa,	// (0x00041b69) cont_snote2_single_graphic_pane

0x5d63,	// (0x00043322) cont_note_wait_pane_ParamLimits

0x5d63,	// (0x00043322) cont_note_wait_pane

0x5d63,	// (0x00043322) cont_note_image_pane_ParamLimits

0x5d63,	// (0x00043322) cont_note_image_pane

0xcd55,	// (0x0004a314) popup_note2_window_g1_ParamLimits

0xcd55,	// (0x0004a314) popup_note2_window_g1

0xcd86,	// (0x0004a345) popup_note2_window_t1_ParamLimits

0xcd86,	// (0x0004a345) popup_note2_window_t1

0xcdcb,	// (0x0004a38a) popup_note2_window_t2_ParamLimits

0xcdcb,	// (0x0004a38a) popup_note2_window_t2

0xce10,	// (0x0004a3cf) popup_note2_window_t3_ParamLimits

0xce10,	// (0x0004a3cf) popup_note2_window_t3

0xce55,	// (0x0004a414) popup_note2_window_t4_ParamLimits

0xce55,	// (0x0004a414) popup_note2_window_t4

0x42f6,	// (0x000418b5) popup_note2_window_t5_ParamLimits

0x42f6,	// (0x000418b5) popup_note2_window_t5

0x0004,

0xfc27,	// (0x0004d1e6) popup_note2_window_t_ParamLimits

0xfc27,	// (0x0004d1e6) popup_note2_window_t

0xce84,	// (0x0004a443) popup_note2_image_window_g1_ParamLimits

0xce84,	// (0x0004a443) popup_note2_image_window_g1

0xce90,	// (0x0004a44f) popup_note2_image_window_g2_ParamLimits

0xce90,	// (0x0004a44f) popup_note2_image_window_g2

0x0001,

0x022c,	// (0x0003d7eb) popup_note2_image_window_g_ParamLimits

0x022c,	// (0x0003d7eb) popup_note2_image_window_g

0xcea2,	// (0x0004a461) popup_note2_image_window_t1_ParamLimits

0xcea2,	// (0x0004a461) popup_note2_image_window_t1

0xceba,	// (0x0004a479) popup_note2_image_window_t2_ParamLimits

0xceba,	// (0x0004a479) popup_note2_image_window_t2

0xced2,	// (0x0004a491) popup_note2_image_window_t3_ParamLimits

0xced2,	// (0x0004a491) popup_note2_image_window_t3

0x0002,

0x0231,	// (0x0003d7f0) popup_note2_image_window_t_ParamLimits

0x0231,	// (0x0003d7f0) popup_note2_image_window_t

0x5d71,	// (0x00043330) popup_note2_wait_window_g1_ParamLimits

0x5d71,	// (0x00043330) popup_note2_wait_window_g1

0x5d7d,	// (0x0004333c) popup_note2_wait_window_g2_ParamLimits

0x5d7d,	// (0x0004333c) popup_note2_wait_window_g2

0x5d89,	// (0x00043348) popup_note2_wait_window_g3_ParamLimits

0x5d89,	// (0x00043348) popup_note2_wait_window_g3

0x0002,

0xf85e,	// (0x0004ce1d) popup_note2_wait_window_g_ParamLimits

0xf85e,	// (0x0004ce1d) popup_note2_wait_window_g

0xceee,	// (0x0004a4ad) popup_note2_wait_window_t1_ParamLimits

0xceee,	// (0x0004a4ad) popup_note2_wait_window_t1

0xcf0c,	// (0x0004a4cb) popup_note2_wait_window_t2_ParamLimits

0xcf0c,	// (0x0004a4cb) popup_note2_wait_window_t2

0xcf2a,	// (0x0004a4e9) popup_note2_wait_window_t3_ParamLimits

0xcf2a,	// (0x0004a4e9) popup_note2_wait_window_t3

0xcf3c,	// (0x0004a4fb) popup_note2_wait_window_t4_ParamLimits

0xcf3c,	// (0x0004a4fb) popup_note2_wait_window_t4

0x0003,

0x0238,	// (0x0003d7f7) popup_note2_wait_window_t_ParamLimits

0x0238,	// (0x0003d7f7) popup_note2_wait_window_t

0xcf4e,	// (0x0004a50d) wait_bar2_pane_ParamLimits

0xcf4e,	// (0x0004a50d) wait_bar2_pane

0xcf66,	// (0x0004a525) popup_snote2_single_text_window_g1_ParamLimits

0xcf66,	// (0x0004a525) popup_snote2_single_text_window_g1

0xcf8e,	// (0x0004a54d) popup_snote2_single_text_window_t1_ParamLimits

0xcf8e,	// (0x0004a54d) popup_snote2_single_text_window_t1

0xcfda,	// (0x0004a599) popup_snote2_single_text_window_t2_ParamLimits

0xcfda,	// (0x0004a599) popup_snote2_single_text_window_t2

0xd026,	// (0x0004a5e5) popup_snote2_single_text_window_t3_ParamLimits

0xd026,	// (0x0004a5e5) popup_snote2_single_text_window_t3

0xd067,	// (0x0004a626) popup_snote2_single_text_window_t4_ParamLimits

0xd067,	// (0x0004a626) popup_snote2_single_text_window_t4

0xd09d,	// (0x0004a65c) popup_snote2_single_text_window_t5_ParamLimits

0xd09d,	// (0x0004a65c) popup_snote2_single_text_window_t5

0x0004,

0x0241,	// (0x0003d800) popup_snote2_single_text_window_t_ParamLimits

0x0241,	// (0x0003d800) popup_snote2_single_text_window_t

0xd0c8,	// (0x0004a687) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0c8,	// (0x0004a687) popup_snote2_single_graphic_window_g1

0xd0f0,	// (0x0004a6af) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0f0,	// (0x0004a6af) popup_snote2_single_graphic_window_g2

0x0001,

0x024c,	// (0x0003d80b) popup_snote2_single_graphic_window_g_ParamLimits

0x024c,	// (0x0003d80b) popup_snote2_single_graphic_window_g

0xd118,	// (0x0004a6d7) popup_snote2_single_graphic_window_t1_ParamLimits

0xd118,	// (0x0004a6d7) popup_snote2_single_graphic_window_t1

0xd164,	// (0x0004a723) popup_snote2_single_graphic_window_t2_ParamLimits

0xd164,	// (0x0004a723) popup_snote2_single_graphic_window_t2

0xd026,	// (0x0004a5e5) popup_snote2_single_graphic_window_t3_ParamLimits

0xd026,	// (0x0004a5e5) popup_snote2_single_graphic_window_t3

0xd067,	// (0x0004a626) popup_snote2_single_graphic_window_t4_ParamLimits

0xd067,	// (0x0004a626) popup_snote2_single_graphic_window_t4

0xd09d,	// (0x0004a65c) popup_snote2_single_graphic_window_t5_ParamLimits

0xd09d,	// (0x0004a65c) popup_snote2_single_graphic_window_t5

0x0004,

0x0251,	// (0x0003d810) popup_snote2_single_graphic_window_t_ParamLimits

0x0251,	// (0x0003d810) popup_snote2_single_graphic_window_t

0x726d,	// (0x0004482c) clock_nsta_pane_cp2_t1

0x726d,	// (0x0004482c) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x0004d092) clock_nsta_pane_cp2_t

0xa9c6,	// (0x00047f85) form_field_data_wide_pane_g1_ParamLimits

0x4849,	// (0x00041e08) form_field_data_wide_pane_g2_ParamLimits

0x4849,	// (0x00041e08) form_field_data_wide_pane_g2

0x4855,	// (0x00041e14) form_field_data_wide_pane_g3_ParamLimits

0x4855,	// (0x00041e14) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0004cc5b) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0004cc5b) form_field_data_wide_pane_g

0xc3da,	// (0x00049999) grid_touch_3_pane_ParamLimits

0xc3da,	// (0x00049999) grid_touch_3_pane

0xd1b0,	// (0x0004a76f) cell_touch_3_pane_ParamLimits

0xd1b0,	// (0x0004a76f) cell_touch_3_pane

0x7560,	// (0x00044b1f) cell_touch_3_pane_g1

0x7560,	// (0x00044b1f) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0004d102) cell_touch_3_pane_g

0x4328,	// (0x000418e7) cont_query_data_pane

0x4330,	// (0x000418ef) cont_query_data_pane_cp1

0xd1df,	// (0x0004a79e) button_value_adjust_pane_cp7

0xd1e7,	// (0x0004a7a6) query_popup_pane_cp3

0x4dc3,	// (0x00042382) bg_popup_sub_pane_cp22_ParamLimits

0x8ffc,	// (0x000465bb) navi_navi_volume_pane_cp2

0x9017,	// (0x000465d6) popup_side_volume_key_window_g2

0x9026,	// (0x000465e5) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0004cced) popup_side_volume_key_window_g

0x9043,	// (0x00046602) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0004ccf4) popup_side_volume_key_window_t

0x5013,	// (0x000425d2) popup_side_volume_key_window_ParamLimits

0x8b33,	// (0x000460f2) list_double_graphic_pane_g4_ParamLimits

0x8b33,	// (0x000460f2) list_double_graphic_pane_g4

0xb066,	// (0x00048625) list_single_2heading_msg_pane_ParamLimits

0xb066,	// (0x00048625) list_single_2heading_msg_pane

0xbaef,	// (0x000490ae) list_single_2heading_msg_pane_g1_ParamLimits

0xbaef,	// (0x000490ae) list_single_2heading_msg_pane_g1

0xbafb,	// (0x000490ba) list_single_2heading_msg_pane_g2_ParamLimits

0xbafb,	// (0x000490ba) list_single_2heading_msg_pane_g2

0xbb07,	// (0x000490c6) list_single_2heading_msg_pane_g3_ParamLimits

0xbb07,	// (0x000490c6) list_single_2heading_msg_pane_g3

0xbb13,	// (0x000490d2) list_single_2heading_msg_pane_g4_ParamLimits

0xbb13,	// (0x000490d2) list_single_2heading_msg_pane_g4

0x0003,

0xfc32,	// (0x0004d1f1) list_single_2heading_msg_pane_g_ParamLimits

0xfc32,	// (0x0004d1f1) list_single_2heading_msg_pane_g

0xb52e,	// (0x00048aed) list_single_2heading_msg_pane_t1_ParamLimits

0xb52e,	// (0x00048aed) list_single_2heading_msg_pane_t1

0xb556,	// (0x00048b15) list_single_2heading_msg_pane_t2_ParamLimits

0xb556,	// (0x00048b15) list_single_2heading_msg_pane_t2

0xb58a,	// (0x00048b49) list_single_2heading_msg_pane_t3_ParamLimits

0xb58a,	// (0x00048b49) list_single_2heading_msg_pane_t3

0xb5c3,	// (0x00048b82) list_single_2heading_msg_pane_t4_ParamLimits

0xb5c3,	// (0x00048b82) list_single_2heading_msg_pane_t4

0x0003,

0xfc3b,	// (0x0004d1fa) list_single_2heading_msg_pane_t_ParamLimits

0xfc3b,	// (0x0004d1fa) list_single_2heading_msg_pane_t

0x4016,	// (0x000415d5) title_pane_g4_ParamLimits

0x4016,	// (0x000415d5) title_pane_g4

0x8e0a,	// (0x000463c9) title_pane_stacon_g3_ParamLimits

0x8e0a,	// (0x000463c9) title_pane_stacon_g3

0xcd18,	// (0x0004a2d7) list_single_2graphic_im_pane_g4_ParamLimits

0xcd18,	// (0x0004a2d7) list_single_2graphic_im_pane_g4

0x66b6,	// (0x00043c75) popup_side_volume_key_window_cp

0x6b8e,	// (0x0004414d) main_idle_act2_pane_t1

0x93c6,	// (0x00046985) toolbar_button_pane_g10

0xa7d6,	// (0x00047d95) popup_toolbar_window_cp1

0x725e,	// (0x0004481d) clock_nsta_pane_cp_t1

0x725e,	// (0x0004481d) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0004d08d) clock_nsta_pane_cp_t

0x8ffc,	// (0x000465bb) navi_navi_volume_pane_cp2_ParamLimits

0x900b,	// (0x000465ca) popup_side_volume_key_window_g1_ParamLimits

0x9017,	// (0x000465d6) popup_side_volume_key_window_g2_ParamLimits

0x9026,	// (0x000465e5) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0004cced) popup_side_volume_key_window_g_ParamLimits

0x9883,	// (0x00046e42) fep_hwr_aid_pane

0x992a,	// (0x00046ee9) bg_fep_hwr_top_pane_g4_ParamLimits

0x75e2,	// (0x00044ba1) fep_hwr_top_pane_g1_ParamLimits

0x75d0,	// (0x00044b8f) fep_hwr_top_pane_g2_ParamLimits

0x994a,	// (0x00046f09) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0004d0cd) fep_hwr_top_pane_g_ParamLimits

0x995f,	// (0x00046f1e) fep_hwr_top_text_pane_ParamLimits

0x64b4,	// (0x00043a73) aid_touch_tab_arrow_arrow_2

0x64ab,	// (0x00043a6a) aid_touch_tab_arrow_left_2

0x9897,	// (0x00046e56) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x98ce,	// (0x00046e8d) fep_hwr_prediction_pane

0x7737,	// (0x00044cf6) fep_vkb_prediction_pane

0xc716,	// (0x00049cd5) fep_vkb_side_pane_g3_ParamLimits

0xc716,	// (0x00049cd5) fep_vkb_side_pane_g3

0x9ada,	// (0x00047099) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9b46,	// (0x00047105) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9b53,	// (0x00047112) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0004d177) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x9c82,	// (0x00047241) fep_hwr_prediction_pane_g1

0x9c8c,	// (0x0004724b) fep_hwr_prediction_pane_g2

0x75c8,	// (0x00044b87) fep_hwr_prediction_pane_g3

0x9c94,	// (0x00047253) fep_hwr_prediction_pane_g4

0x0003,

0xfc44,	// (0x0004d203) fep_hwr_prediction_pane_g

0xd20c,	// (0x0004a7cb) fep_vkb_prediction_pane_g1

0xd216,	// (0x0004a7d5) fep_vkb_prediction_pane_g2

0xd21e,	// (0x0004a7dd) fep_vkb_prediction_pane_g3

0xd226,	// (0x0004a7e5) fep_vkb_prediction_pane_g4

0x0003,

0x0277,	// (0x0003d836) fep_vkb_prediction_pane_g

0x96b2,	// (0x00046c71) slider_set_pane_g3

0x96c6,	// (0x00046c85) slider_set_pane_g4

0x96de,	// (0x00046c9d) slider_set_pane_g5

0x96b2,	// (0x00046c71) slider_set_pane_g6

0x96f4,	// (0x00046cb3) slider_set_pane_g7

0x6923,	// (0x00043ee2) slider_form_pane_g3

0x692c,	// (0x00043eeb) slider_form_pane_g4

0x6934,	// (0x00043ef3) slider_form_pane_g5

0x6923,	// (0x00043ee2) slider_form_pane_g6

0xc2c4,	// (0x00049883) slider_form_pane_g7

0x6e2c,	// (0x000443eb) slider_set_pane_vc_g3

0x6e35,	// (0x000443f4) slider_set_pane_vc_g4

0x6e3e,	// (0x000443fd) slider_set_pane_vc_g5

0x6e2c,	// (0x000443eb) slider_set_pane_vc_g6

0x6e47,	// (0x00044406) slider_set_pane_vc_g7

0x6e2c,	// (0x000443eb) slider_form_pane_vc_g1

0x6e35,	// (0x000443f4) slider_form_pane_vc_g2

0x6e3e,	// (0x000443fd) slider_form_pane_vc_g3

0x6e2c,	// (0x000443eb) slider_form_pane_vc_g4

0x6fd6,	// (0x00044595) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x0004d066) slider_form_pane_vc_g

0x3ff8,	// (0x000415b7) main_idle_act3_pane

0xd22e,	// (0x0004a7ed) ai3_links_pane

0xd237,	// (0x0004a7f6) popup_ai3_data_window_ParamLimits

0xd237,	// (0x0004a7f6) popup_ai3_data_window

0x3ff8,	// (0x000415b7) grid_ai3_links_pane

0xd24f,	// (0x0004a80e) cell_ai3_links_pane_ParamLimits

0xd24f,	// (0x0004a80e) cell_ai3_links_pane

0xd267,	// (0x0004a826) bg_popup_sub_pane_cp11

0xd274,	// (0x0004a833) cell_ai3_links_pane_g1

0x3ff8,	// (0x000415b7) bg_popup_sub_pane_cp12

0xd299,	// (0x0004a858) heading_ai3_data_pane

0xd2a1,	// (0x0004a860) list_ai3_gene_pane

0xd2ad,	// (0x0004a86c) popup_ai3_data_window_g1

0xd2b5,	// (0x0004a874) heading_ai3_data_pane_g1

0xd2bd,	// (0x0004a87c) heading_ai3_data_pane_t1

0xd2cb,	// (0x0004a88a) list_double_ai3_gene_pane_ParamLimits

0xd2cb,	// (0x0004a88a) list_double_ai3_gene_pane

0xd2d8,	// (0x0004a897) list_single_ai3_gene_pane_ParamLimits

0xd2d8,	// (0x0004a897) list_single_ai3_gene_pane

0x7525,	// (0x00044ae4) list_highlight_pane_cp7_ParamLimits

0x7525,	// (0x00044ae4) list_highlight_pane_cp7

0xd2e5,	// (0x0004a8a4) list_single_a13_gene_pane_t1_ParamLimits

0xd2e5,	// (0x0004a8a4) list_single_a13_gene_pane_t1

0xd2fc,	// (0x0004a8bb) list_single_ai3_gene_pane_g1

0xd305,	// (0x0004a8c4) list_single_ai3_gene_pane_g2

0x0001,

0x0280,	// (0x0003d83f) list_single_ai3_gene_pane_g

0xd30d,	// (0x0004a8cc) list_double_ai3_gene_pane_g1_ParamLimits

0xd30d,	// (0x0004a8cc) list_double_ai3_gene_pane_g1

0xd319,	// (0x0004a8d8) list_double_ai3_gene_pane_t1_ParamLimits

0xd319,	// (0x0004a8d8) list_double_ai3_gene_pane_t1

0xd335,	// (0x0004a8f4) list_double_ai3_gene_pane_t2_ParamLimits

0xd335,	// (0x0004a8f4) list_double_ai3_gene_pane_t2

0xd34a,	// (0x0004a909) list_double_ai3_gene_pane_t3_ParamLimits

0xd34a,	// (0x0004a909) list_double_ai3_gene_pane_t3

0x0002,

0x0285,	// (0x0003d844) list_double_ai3_gene_pane_t_ParamLimits

0x0285,	// (0x0003d844) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb524,	// (0x00048ae3) aid_size_min_col_2

0xd1f8,	// (0x0004a7b7) aid_size_min_msg_ParamLimits

0xd1f8,	// (0x0004a7b7) aid_size_min_msg

0xc72a,	// (0x00049ce9) fep_vkb_top_text_pane_g2_ParamLimits

0xc72a,	// (0x00049ce9) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0004d0fd) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0004d0fd) fep_vkb_top_text_pane_g

0x3ff8,	// (0x000415b7) main_hc_apps_shell_pane

0xd367,	// (0x0004a926) grid_hc_apps_pane_ParamLimits

0xd367,	// (0x0004a926) grid_hc_apps_pane

0xd376,	// (0x0004a935) list_hc_apps_pane

0xd37e,	// (0x0004a93d) scroll_pane_cp37_ParamLimits

0xd37e,	// (0x0004a93d) scroll_pane_cp37

0xd38a,	// (0x0004a949) cell_hc_apps_pane_ParamLimits

0xd38a,	// (0x0004a949) cell_hc_apps_pane

0xd43a,	// (0x0004a9f9) cell_hc_apps_pane_g1_ParamLimits

0xd43a,	// (0x0004a9f9) cell_hc_apps_pane_g1

0xd46b,	// (0x0004aa2a) cell_hc_apps_pane_g2_ParamLimits

0xd46b,	// (0x0004aa2a) cell_hc_apps_pane_g2

0xd487,	// (0x0004aa46) cell_hc_apps_pane_g3_ParamLimits

0xd487,	// (0x0004aa46) cell_hc_apps_pane_g3

0x0002,

0x028c,	// (0x0003d84b) cell_hc_apps_pane_g_ParamLimits

0x028c,	// (0x0003d84b) cell_hc_apps_pane_g

0xd4a9,	// (0x0004aa68) cell_hc_apps_pane_t1_ParamLimits

0xd4a9,	// (0x0004aa68) cell_hc_apps_pane_t1

0x419b,	// (0x0004175a) grid_highlight_pane_cp10_ParamLimits

0x419b,	// (0x0004175a) grid_highlight_pane_cp10

0xd4e9,	// (0x0004aaa8) list_single_hc_apps_pane_ParamLimits

0xd4e9,	// (0x0004aaa8) list_single_hc_apps_pane

0xd55c,	// (0x0004ab1b) list_single_hc_apps_pane_g1

0xbb2b,	// (0x000490ea) list_single_hc_apps_pane_g2

0x0001,

0xfc4d,	// (0x0004d20c) list_single_hc_apps_pane_g

0xbb44,	// (0x00049103) list_single_hc_apps_pane_g2_copy1

0xb5e8,	// (0x00048ba7) list_single_hc_apps_pane_t1

0x4068,	// (0x00041627) bg_set_opt_pane_cp_ParamLimits

0x88fc,	// (0x00045ebb) setting_slider_pane_t1_ParamLimits

0x8915,	// (0x00045ed4) setting_slider_pane_t2_ParamLimits

0x892e,	// (0x00045eed) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0004cb39) setting_slider_pane_t_ParamLimits

0x8945,	// (0x00045f04) slider_set_pane_ParamLimits

0x92a4,	// (0x00046863) control_pane_g5_ParamLimits

0x92a4,	// (0x00046863) control_pane_g5

0x68e5,	// (0x00043ea4) slider_set_pane_g1_ParamLimits

0x96a6,	// (0x00046c65) slider_set_pane_g2_ParamLimits

0x96b2,	// (0x00046c71) slider_set_pane_g3_ParamLimits

0x96c6,	// (0x00046c85) slider_set_pane_g4_ParamLimits

0x96de,	// (0x00046c9d) slider_set_pane_g5_ParamLimits

0x96b2,	// (0x00046c71) slider_set_pane_g6_ParamLimits

0x96f4,	// (0x00046cb3) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0004cf39) slider_set_pane_g_ParamLimits

0x50f4,	// (0x000426b3) navi_icon_text_pane_ParamLimits

0xbb76,	// (0x00049135) aid_fill_nsta_2_ParamLimits

0xbba0,	// (0x0004915f) aid_touch_tab_arrow_left_ParamLimits

0xbbaf,	// (0x0004916e) aid_touch_tab_arrow_right_ParamLimits

0xbc1c,	// (0x000491db) clock_nsta_pane_ParamLimits

0xc076,	// (0x00049635) navi_icon_pane_g1_ParamLimits

0xc085,	// (0x00049644) navi_text_pane_t1_ParamLimits

0xc4ef,	// (0x00049aae) navi_icon_text_pane_g1_ParamLimits

0xc4fe,	// (0x00049abd) navi_icon_text_pane_t1_ParamLimits

0xd55c,	// (0x0004ab1b) list_single_hc_apps_pane_g1_ParamLimits

0xbb2b,	// (0x000490ea) list_single_hc_apps_pane_g2_ParamLimits

0xfc4d,	// (0x0004d20c) list_single_hc_apps_pane_g_ParamLimits

0xbb44,	// (0x00049103) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb5e8,	// (0x00048ba7) list_single_hc_apps_pane_t1_ParamLimits

0x8816,	// (0x00045dd5) popup_toolbar2_fixed_window_ParamLimits

0x8816,	// (0x00045dd5) popup_toolbar2_fixed_window

0xba4e,	// (0x0004900d) popup_toolbar2_float_window

0x3ff8,	// (0x000415b7) bg_popup_sub_pane_cp27

0xd575,	// (0x0004ab34) grid_toolbar2_float_pane

0x3ff8,	// (0x000415b7) bg_popup_sub_pane_cp26

0xd575,	// (0x0004ab34) grid_toolbar2_fixed_pane

0xd57d,	// (0x0004ab3c) cell_toolbar2_fixed_pane_ParamLimits

0xd57d,	// (0x0004ab3c) cell_toolbar2_fixed_pane

0xd58e,	// (0x0004ab4d) cell_toolbar2_fixed_pane_g1

0xd597,	// (0x0004ab56) toolbar2_fixed_button_pane

0x57b6,	// (0x00042d75) toolbar2_fixed_button_pane_g1

0x57be,	// (0x00042d7d) toolbar2_fixed_button_pane_g2

0x57c6,	// (0x00042d85) toolbar2_fixed_button_pane_g3

0x57ce,	// (0x00042d8d) toolbar2_fixed_button_pane_g4

0x57d6,	// (0x00042d95) toolbar2_fixed_button_pane_g5

0x57de,	// (0x00042d9d) toolbar2_fixed_button_pane_g6

0x57e6,	// (0x00042da5) toolbar2_fixed_button_pane_g7

0x57ee,	// (0x00042dad) toolbar2_fixed_button_pane_g8

0x57f6,	// (0x00042db5) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0004ce3b) toolbar2_fixed_button_pane_g

0xd59f,	// (0x0004ab5e) cell_toolbar2_float_pane_ParamLimits

0xd59f,	// (0x0004ab5e) cell_toolbar2_float_pane

0xd5b0,	// (0x0004ab6f) cell_toolbar2_float_pane_g1

0xd597,	// (0x0004ab56) toolbar2_fixed_button_pane_cp

0xc6dd,	// (0x00049c9c) fep_vkb_accented_list_pane_ParamLimits

0xc6dd,	// (0x00049c9c) fep_vkb_accented_list_pane

0x9aba,	// (0x00047079) bg_popup_fep_shadow_pane_g9

0x5276,	// (0x00042835) bg_popup_fep_shadow_pane_cp3

0x4935,	// (0x00041ef4) list_accented_list_pane

0xd5b9,	// (0x0004ab78) list_single_accented_list_pane_ParamLimits

0xd5b9,	// (0x0004ab78) list_single_accented_list_pane

0x5276,	// (0x00042835) list_highlight_pane_cp10

0xd5ca,	// (0x0004ab89) list_single_accented_list_pane_t1

0xb9a6,	// (0x00048f65) popup_slider_window_ParamLimits

0xb9a6,	// (0x00048f65) popup_slider_window

0xd1ef,	// (0x0004a7ae) aid_indentation_list_msg

0xd684,	// (0x0004ac43) bg_popup_window_pane_cp19

0xd6ee,	// (0x0004acad) popup_slider_window_g1

0xd70a,	// (0x0004acc9) popup_slider_window_g2

0xd726,	// (0x0004ace5) popup_slider_window_g3

0x0005,

0x0298,	// (0x0003d857) popup_slider_window_g

0xd782,	// (0x0004ad41) popup_slider_window_t1

0xd7f6,	// (0x0004adb5) small_volume_slider_vertical_pane

0x7560,	// (0x00044b1f) small_volume_slider_vertical_pane_g1

0x7560,	// (0x00044b1f) small_volume_slider_vertical_pane_g2

0xd812,	// (0x0004add1) small_volume_slider_vertical_pane_g3

0x0002,

0xfc52,	// (0x0004d211) small_volume_slider_vertical_pane_g

0x85dc,	// (0x00045b9b) area_side_right_pane_ParamLimits

0x85dc,	// (0x00045b9b) area_side_right_pane

0x9c9c,	// (0x0004725b) aid_size_side_button_ParamLimits

0x9c9c,	// (0x0004725b) aid_size_side_button

0x9cb0,	// (0x0004726f) grid_sctrl_middle_pane_ParamLimits

0x9cb0,	// (0x0004726f) grid_sctrl_middle_pane

0x9cd0,	// (0x0004728f) sctrl_sk_bottom_pane

0x9ce1,	// (0x000472a0) sctrl_sk_top_pane

0x9cf3,	// (0x000472b2) aid_touch_sctrl_top

0x9d00,	// (0x000472bf) bg_sctrl_sk_pane_ParamLimits

0x9d00,	// (0x000472bf) bg_sctrl_sk_pane

0x9d0e,	// (0x000472cd) sctrl_sk_top_pane_g1

0x9d1b,	// (0x000472da) sctrl_sk_top_pane_t1

0x9cf3,	// (0x000472b2) aid_touch_sctrl_bottom

0x9d00,	// (0x000472bf) bg_sctrl_sk_pane_cp_ParamLimits

0x9d00,	// (0x000472bf) bg_sctrl_sk_pane_cp

0x9d36,	// (0x000472f5) sctrl_sk_bottom_pane_g1

0x9d1b,	// (0x000472da) sctrl_sk_bottom_pane_t1

0x9d3f,	// (0x000472fe) cell_sctrl_middle_pane_ParamLimits

0x9d3f,	// (0x000472fe) cell_sctrl_middle_pane

0x9d5a,	// (0x00047319) aid_touch_sctrl_middle_ParamLimits

0x9d5a,	// (0x00047319) aid_touch_sctrl_middle

0x9d6c,	// (0x0004732b) bg_sctrl_middle_pane_ParamLimits

0x9d6c,	// (0x0004732b) bg_sctrl_middle_pane

0x9ada,	// (0x00047099) cell_sctrl_middle_pane_g1_ParamLimits

0x9ada,	// (0x00047099) cell_sctrl_middle_pane_g1

0x9d7a,	// (0x00047339) cell_sctrl_middle_pane_g2_ParamLimits

0x9d7a,	// (0x00047339) cell_sctrl_middle_pane_g2

0x0001,

0xfc5e,	// (0x0004d21d) cell_sctrl_middle_pane_g_ParamLimits

0xfc5e,	// (0x0004d21d) cell_sctrl_middle_pane_g

0x57b6,	// (0x00042d75) bg_sctrl_middle_pane_g1

0x57c6,	// (0x00042d85) bg_sctrl_middle_pane_g2

0x57be,	// (0x00042d7d) bg_sctrl_middle_pane_g3

0x57d6,	// (0x00042d95) bg_sctrl_middle_pane_g4

0x57ce,	// (0x00042d8d) bg_sctrl_middle_pane_g5

0x57de,	// (0x00042d9d) bg_sctrl_middle_pane_g6

0x57e6,	// (0x00042da5) bg_sctrl_middle_pane_g7

0x57f6,	// (0x00042db5) bg_sctrl_middle_pane_g8

0x0007,

0xfc63,	// (0x0004d222) bg_sctrl_middle_pane_g

0x57ee,	// (0x00042dad) bg_sctrl_middle_pane_g8_copy1

0x57b6,	// (0x00042d75) bg_sctrl_sk_pane_g1

0x57be,	// (0x00042d7d) bg_sctrl_sk_pane_g2

0x57c6,	// (0x00042d85) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0004ce3b) bg_sctrl_sk_pane_g

0x4768,	// (0x00041d27) aid_size_touch_scroll_bar

0x57ce,	// (0x00042d8d) bg_sctrl_sk_pane_g4

0x57d6,	// (0x00042d95) bg_sctrl_sk_pane_g5

0x57de,	// (0x00042d9d) bg_sctrl_sk_pane_g6

0x57e6,	// (0x00042da5) bg_sctrl_sk_pane_g7

0x57ee,	// (0x00042dad) bg_sctrl_sk_pane_g8

0x57f6,	// (0x00042db5) bg_sctrl_sk_pane_g9

0x54ea,	// (0x00042aa9) popup_fep_china_hwr2_fs_candidate_window

0xb6b4,	// (0x00048c73) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb6b4,	// (0x00048c73) popup_fep_china_hwr2_fs_control_window

0x9ada,	// (0x00047099) sctrl_sk_top_pane_g2

0x0001,

0xfc59,	// (0x0004d218) sctrl_sk_top_pane_g

0xd81b,	// (0x0004adda) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd81b,	// (0x0004adda) aid_fep_china_hwr2_fs_cell

0xd82d,	// (0x0004adec) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd82d,	// (0x0004adec) bg_popup_fep_shadow_pane_cp4

0xd844,	// (0x0004ae03) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd844,	// (0x0004ae03) bg_popup_fep_shadow_pane_cp5

0xd856,	// (0x0004ae15) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd856,	// (0x0004ae15) popup_fep_china_hwr2_fs_control_bar_grid

0xd866,	// (0x0004ae25) popup_fep_china_hwr2_fs_control_funtion_grid

0xd86e,	// (0x0004ae2d) aid_fep_china_hwr2_fs_candi_cell

0x3ff8,	// (0x000415b7) bg_popup_fep_shadow_pane_cp6

0xd878,	// (0x0004ae37) popup_fep_china_hwr2_fs_candidate_grid

0xd882,	// (0x0004ae41) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd882,	// (0x0004ae41) cell_fep_china_hwr2_fs_funtion_grid

0x7560,	// (0x00044b1f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd89a,	// (0x0004ae59) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd89a,	// (0x0004ae59) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8a8,	// (0x0004ae67) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8a8,	// (0x0004ae67) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0x02cc,	// (0x0003d88b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0x02cc,	// (0x0003d88b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8be,	// (0x0004ae7d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8be,	// (0x0004ae7d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8d3,	// (0x0004ae92) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8d3,	// (0x0004ae92) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x02d1,	// (0x0003d890) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x02d1,	// (0x0003d890) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8ef,	// (0x0004aeae) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8f7,	// (0x0004aeb6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8ff,	// (0x0004aebe) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x02d6,	// (0x0003d895) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd907,	// (0x0004aec6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd907,	// (0x0004aec6) cell_fep_china_hwr2_fs_candidate_grid

0xd920,	// (0x0004aedf) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd928,	// (0x0004aee7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7560,	// (0x00044b1f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7560,	// (0x00044b1f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0004d102) cell_fep_china_hwr2_fs_candidate_grid_g

0xd930,	// (0x0004aeef) cell_fep_china_hwr2_fs_candidate_grid_t1

0x55f7,	// (0x00042bb6) clock_nsta_pane_cp_24_ParamLimits

0x55f7,	// (0x00042bb6) clock_nsta_pane_cp_24

0x566d,	// (0x00042c2c) indicator_nsta_pane_cp_24_ParamLimits

0x566d,	// (0x00042c2c) indicator_nsta_pane_cp_24

0x63b5,	// (0x00043974) heading_pane_g1

0x0001,

0xf8e1,	// (0x0004cea0) heading_pane_g

0x6a19,	// (0x00043fd8) grid_sct_catagory_button_pane

0x6767,	// (0x00043d26) scroll_pane_cp5_ParamLimits

0x72c9,	// (0x00044888) button_value_adjust_pane_cp5_ParamLimits

0x72c9,	// (0x00044888) button_value_adjust_pane_cp5

0x7387,	// (0x00044946) form2_midp_time_pane_ParamLimits

0xd93e,	// (0x0004aefd) cell_sct_catagory_button_pane_ParamLimits

0xd93e,	// (0x0004aefd) cell_sct_catagory_button_pane

0x7525,	// (0x00044ae4) bg_button_pane_cp01_ParamLimits

0x7525,	// (0x00044ae4) bg_button_pane_cp01

0x7560,	// (0x00044b1f) cell_sct_catagory_button_pane_g1

0xb9dd,	// (0x00048f9c) popup_tb_extension_window

0xd950,	// (0x0004af0f) aid_size_cell_ext_ParamLimits

0xd950,	// (0x0004af0f) aid_size_cell_ext

0x419b,	// (0x0004175a) bg_tb_trans_pane_cp1_ParamLimits

0x419b,	// (0x0004175a) bg_tb_trans_pane_cp1

0xd970,	// (0x0004af2f) grid_tb_ext_pane_ParamLimits

0xd970,	// (0x0004af2f) grid_tb_ext_pane

0xd9a2,	// (0x0004af61) cell_tb_ext_pane_ParamLimits

0xd9a2,	// (0x0004af61) cell_tb_ext_pane

0xd9b9,	// (0x0004af78) cell_tb_ext_pane_g1_ParamLimits

0xd9b9,	// (0x0004af78) cell_tb_ext_pane_g1

0xd9d6,	// (0x0004af95) cell_tb_ext_pane_t1

0x419b,	// (0x0004175a) list_highlight_pane_cp11_ParamLimits

0x419b,	// (0x0004175a) list_highlight_pane_cp11

0x8835,	// (0x00045df4) popup_uni_indicator_window_ParamLimits

0x8835,	// (0x00045df4) popup_uni_indicator_window

0x482f,	// (0x00041dee) bg_popup_sub_pane_cp14

0xd9f1,	// (0x0004afb0) list_uniindi_pane

0xd9fd,	// (0x0004afbc) uniindi_top_pane

0x419b,	// (0x0004175a) bg_uniindi_top_pane

0xda1c,	// (0x0004afdb) uniindi_top_pane_g1

0xda32,	// (0x0004aff1) uniindi_top_pane_g2

0x0003,

0x02dd,	// (0x0003d89c) uniindi_top_pane_g

0xda5c,	// (0x0004b01b) uniindi_top_pane_t1

0xda86,	// (0x0004b045) list_single_uniindi_pane_ParamLimits

0xda86,	// (0x0004b045) list_single_uniindi_pane

0x7560,	// (0x00044b1f) bg_uniindi_top_pane_g1

0xda98,	// (0x0004b057) list_single_uniindi_pane_g1

0xdaab,	// (0x0004b06a) list_single_uniindi_pane_t1

0x86b9,	// (0x00045c78) control_bg_pane

0xdad0,	// (0x0004b08f) bg_sctrl_sk_pane_cp1

0xdad9,	// (0x0004b098) bg_sctrl_sk_pane_cp2

0xdae2,	// (0x0004b0a1) control_bg_pane_g1

0xdaeb,	// (0x0004b0aa) control_bg_pane_g2

0x0001,

0x02e6,	// (0x0003d8a5) control_bg_pane_g

0x71a0,	// (0x0004475f) cell_indicator_nsta_pane_g1_ParamLimits

0xc41e,	// (0x000499dd) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x0004d07b) cell_indicator_nsta_pane_g_ParamLimits

0xb303,	// (0x000488c2) form2_midp_time_pane_t1_ParamLimits

0x45aa,	// (0x00041b69) main_idle_act4_pane_ParamLimits

0x45aa,	// (0x00041b69) main_idle_act4_pane

0xb9dd,	// (0x00048f9c) popup_tb_extension_window_ParamLimits

0xd992,	// (0x0004af51) tb_ext_find_pane_ParamLimits

0xd992,	// (0x0004af51) tb_ext_find_pane

0xdaf4,	// (0x0004b0b3) ai_gene_pane_1_cp1

0x52f8,	// (0x000428b7) ai_gene_pane_2_cp1

0xdafc,	// (0x0004b0bb) list_single_idle_plugin_calendar_pane

0xdb05,	// (0x0004b0c4) list_single_idle_plugin_notification_pane

0xdb0e,	// (0x0004b0cd) list_single_idle_plugin_player_pane

0xdb17,	// (0x0004b0d6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb17,	// (0x0004b0d6) list_single_idle_plugin_shortcut_pane

0xdb39,	// (0x0004b0f8) main_idle_act4_pane_t1

0xdb4b,	// (0x0004b10a) main_idle_act4_pane_t2

0x0001,

0x02eb,	// (0x0003d8aa) main_idle_act4_pane_t

0xdb5d,	// (0x0004b11c) middle_sk_idle_act4_pane_ParamLimits

0xdb5d,	// (0x0004b11c) middle_sk_idle_act4_pane

0xdb73,	// (0x0004b132) popup_clock_digital_analogue_window_cp2

0xdb8d,	// (0x0004b14c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb8d,	// (0x0004b14c) shortcut_wheel_idle_act4_pane

0x7560,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g1

0x7560,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g2

0x7560,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g3

0x7560,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g4

0x7560,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g5

0xdba1,	// (0x0004b160) shortcut_wheel_idle_act4_pane_g6

0xdba9,	// (0x0004b168) shortcut_wheel_idle_act4_pane_g7

0xdbb1,	// (0x0004b170) shortcut_wheel_idle_act4_pane_g8

0xdbb9,	// (0x0004b178) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfc74,	// (0x0004d233) shortcut_wheel_idle_act4_pane_g

0x77f5,	// (0x00044db4) middle_sk_idle_act4_pane_g1_ParamLimits

0x77f5,	// (0x00044db4) middle_sk_idle_act4_pane_g1

0xdc1d,	// (0x0004b1dc) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc1d,	// (0x0004b1dc) middle_sk_idle_act4_pane_g2

0x0001,

0xfc92,	// (0x0004d251) middle_sk_idle_act4_pane_g_ParamLimits

0xfc92,	// (0x0004d251) middle_sk_idle_act4_pane_g

0xdc29,	// (0x0004b1e8) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc29,	// (0x0004b1e8) middle_sk_idle_act4_pane_t1

0xdc46,	// (0x0004b205) grid_ai_shortcut_pane_ParamLimits

0xdc46,	// (0x0004b205) grid_ai_shortcut_pane

0xdc5f,	// (0x0004b21e) list_highlight_pane_cp16_ParamLimits

0xdc5f,	// (0x0004b21e) list_highlight_pane_cp16

0xdc6c,	// (0x0004b22b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc6c,	// (0x0004b22b) list_single_idle_plugin_shortcut_pane_g1

0xdc78,	// (0x0004b237) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc78,	// (0x0004b237) list_single_idle_plugin_shortcut_pane_g2

0xdc90,	// (0x0004b24f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc90,	// (0x0004b24f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x0318,	// (0x0003d8d7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x0318,	// (0x0003d8d7) list_single_idle_plugin_shortcut_pane_g

0xdca3,	// (0x0004b262) cell_ai_shortcut_pane_ParamLimits

0xdca3,	// (0x0004b262) cell_ai_shortcut_pane

0xdcc4,	// (0x0004b283) cell_ai_shortcut_pane_g1_ParamLimits

0xdcc4,	// (0x0004b283) cell_ai_shortcut_pane_g1

0xdaf4,	// (0x0004b0b3) ai_gene_pane_1_cp2

0xdce6,	// (0x0004b2a5) ai_gene_pane_2_cp2

0xdcee,	// (0x0004b2ad) list_highlight_pane_cp15

0xdcf7,	// (0x0004b2b6) list_single_idle_plugin_calendar_pane_g1

0xdcee,	// (0x0004b2ad) list_highlight_pane_cp17

0xdcff,	// (0x0004b2be) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd07,	// (0x0004b2c6) list_single_idle_plugin_player_pane_g1

0x6c2e,	// (0x000441ed) list_single_idle_plugin_player_pane_g2

0x0001,

0xfc97,	// (0x0004d256) list_single_idle_plugin_player_pane_g

0xdd0f,	// (0x0004b2ce) list_single_idle_plugin_player_pane_t1

0xdd1d,	// (0x0004b2dc) list_single_idle_plugin_player_pane_t2

0xdd2b,	// (0x0004b2ea) list_single_idle_plugin_player_pane_t3

0xdd39,	// (0x0004b2f8) list_single_idle_plugin_player_pane_t4

0x0003,

0x0324,	// (0x0003d8e3) list_single_idle_plugin_player_pane_t

0xdd47,	// (0x0004b306) wait_bar_pane_cp15

0xdd4f,	// (0x0004b30e) grid_ai_notification_pane

0x6c2e,	// (0x000441ed) list_single_idle_plugin_notification_pane_g1

0xdd58,	// (0x0004b317) cell_ai_notification_pane_ParamLimits

0xdd58,	// (0x0004b317) cell_ai_notification_pane

0xdd65,	// (0x0004b324) cell_ai_notification_pane_g1

0xdd6d,	// (0x0004b32c) cell_ai_notification_pane_t1

0xdd7b,	// (0x0004b33a) tb_ext_find_button_pane

0xdd83,	// (0x0004b342) tb_ext_find_pane_g1

0xdd8b,	// (0x0004b34a) tb_ext_find_pane_t1

0x4d67,	// (0x00042326) tb_ext_find_button_pane_g1

0xdd99,	// (0x0004b358) tb_ext_find_button_pane_g2

0x0001,

0xfc9c,	// (0x0004d25b) tb_ext_find_button_pane_g

0xdb39,	// (0x0004b0f8) main_idle_act4_pane_t1_ParamLimits

0xdb4b,	// (0x0004b10a) main_idle_act4_pane_t2_ParamLimits

0x02eb,	// (0x0003d8aa) main_idle_act4_pane_t_ParamLimits

0xdb73,	// (0x0004b132) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb81,	// (0x0004b140) sat_plugin_idle_act4_pane_ParamLimits

0xdb81,	// (0x0004b140) sat_plugin_idle_act4_pane

0xdda2,	// (0x0004b361) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdda2,	// (0x0004b361) sat_plugin_idle_act4_pane_t1

0xddb5,	// (0x0004b374) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddb5,	// (0x0004b374) sat_plugin_idle_act4_pane_t2

0xddc8,	// (0x0004b387) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddc8,	// (0x0004b387) sat_plugin_idle_act4_pane_t3

0xdddb,	// (0x0004b39a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdddb,	// (0x0004b39a) sat_plugin_idle_act4_pane_t4

0x0003,

0x0332,	// (0x0003d8f1) sat_plugin_idle_act4_pane_t_ParamLimits

0x0332,	// (0x0003d8f1) sat_plugin_idle_act4_pane_t

0x877e,	// (0x00045d3d) popup_battery_window_ParamLimits

0x877e,	// (0x00045d3d) popup_battery_window

0x419b,	// (0x0004175a) bg_popup_sub_pane_cp25_ParamLimits

0x419b,	// (0x0004175a) bg_popup_sub_pane_cp25

0xddee,	// (0x0004b3ad) popup_battery_window_g1_ParamLimits

0xddee,	// (0x0004b3ad) popup_battery_window_g1

0xddfa,	// (0x0004b3b9) popup_battery_window_t1_ParamLimits

0xddfa,	// (0x0004b3b9) popup_battery_window_t1

0xde0c,	// (0x0004b3cb) popup_battery_window_t2_ParamLimits

0xde0c,	// (0x0004b3cb) popup_battery_window_t2

0x0001,

0x033b,	// (0x0003d8fa) popup_battery_window_t_ParamLimits

0x033b,	// (0x0003d8fa) popup_battery_window_t

0xaddb,	// (0x0004839a) midp_canvas_pane_ParamLimits

0xae3f,	// (0x000483fe) midp_keypad_pane_ParamLimits

0xae3f,	// (0x000483fe) midp_keypad_pane

0x4986,	// (0x00041f45) main_midp_pane_ParamLimits

0x727c,	// (0x0004483b) signal_pane_g2_cp_ParamLimits

0xde4a,	// (0x0004b409) aid_size_cell_midp_keypad_ParamLimits

0xde4a,	// (0x0004b409) aid_size_cell_midp_keypad

0xde64,	// (0x0004b423) midp_keyp_game_grid_pane_ParamLimits

0xde64,	// (0x0004b423) midp_keyp_game_grid_pane

0xde84,	// (0x0004b443) midp_keyp_rocker_pane_ParamLimits

0xde84,	// (0x0004b443) midp_keyp_rocker_pane

0xdebd,	// (0x0004b47c) midp_keyp_sk_left_pane_ParamLimits

0xdebd,	// (0x0004b47c) midp_keyp_sk_left_pane

0xdf17,	// (0x0004b4d6) midp_keyp_sk_right_pane_ParamLimits

0xdf17,	// (0x0004b4d6) midp_keyp_sk_right_pane

0x3ff8,	// (0x000415b7) bg_button_pane_cp03

0xdf71,	// (0x0004b530) midp_keyp_sk_left_pane_g1

0x3ff8,	// (0x000415b7) bg_button_pane_cp04

0xdf71,	// (0x0004b530) midp_keyp_sk_right_pane_g1

0x7560,	// (0x00044b1f) midp_keyp_rocker_pane_g1

0xdf7a,	// (0x0004b539) keyp_game_cell_pane_ParamLimits

0xdf7a,	// (0x0004b539) keyp_game_cell_pane

0x3ff8,	// (0x000415b7) bg_button_pane_cp02

0xdf8d,	// (0x0004b54c) keyp_game_cell_pane_g1

0x87b4,	// (0x00045d73) popup_fep_vkb2_window_ParamLimits

0x87b4,	// (0x00045d73) popup_fep_vkb2_window

0x9d9c,	// (0x0004735b) aid_size_cell_vkb2_ParamLimits

0x9d9c,	// (0x0004735b) aid_size_cell_vkb2

0x9df0,	// (0x000473af) popup_fep_vkb2_window_g1_ParamLimits

0x9df0,	// (0x000473af) popup_fep_vkb2_window_g1

0x9e30,	// (0x000473ef) vkb2_area_bottom_pane_ParamLimits

0x9e30,	// (0x000473ef) vkb2_area_bottom_pane

0x9e7c,	// (0x0004743b) vkb2_area_keypad_pane_ParamLimits

0x9e7c,	// (0x0004743b) vkb2_area_keypad_pane

0x9ebe,	// (0x0004747d) vkb2_area_top_pane_ParamLimits

0x9ebe,	// (0x0004747d) vkb2_area_top_pane

0x9f38,	// (0x000474f7) vkb2_top_entry_pane_ParamLimits

0x9f38,	// (0x000474f7) vkb2_top_entry_pane

0x9f62,	// (0x00047521) vkb2_top_grid_left_pane_ParamLimits

0x9f62,	// (0x00047521) vkb2_top_grid_left_pane

0x9f80,	// (0x0004753f) vkb2_top_grid_right_pane_ParamLimits

0x9f80,	// (0x0004753f) vkb2_top_grid_right_pane

0x9f9e,	// (0x0004755d) vkb2_cell_keypad_pane_ParamLimits

0x9f9e,	// (0x0004755d) vkb2_cell_keypad_pane

0xa06f,	// (0x0004762e) vkb2_area_bottom_grid_pane_ParamLimits

0xa06f,	// (0x0004762e) vkb2_area_bottom_grid_pane

0xa095,	// (0x00047654) vkb2_area_bottom_pane_g1_ParamLimits

0xa095,	// (0x00047654) vkb2_area_bottom_pane_g1

0xa0b9,	// (0x00047678) vkb2_area_bottom_pane_g2_ParamLimits

0xa0b9,	// (0x00047678) vkb2_area_bottom_pane_g2

0xa0e7,	// (0x000476a6) vkb2_area_bottom_pane_g3_ParamLimits

0xa0e7,	// (0x000476a6) vkb2_area_bottom_pane_g3

0x0002,

0xfca1,	// (0x0004d260) vkb2_area_bottom_pane_g_ParamLimits

0xfca1,	// (0x0004d260) vkb2_area_bottom_pane_g

0xa148,	// (0x00047707) vkb2_top_cell_left_pane_ParamLimits

0xa148,	// (0x00047707) vkb2_top_cell_left_pane

0xdf9e,	// (0x0004b55d) vkb2_top_entry_pane_g1_ParamLimits

0xdf9e,	// (0x0004b55d) vkb2_top_entry_pane_g1

0xdfac,	// (0x0004b56b) vkb2_top_entry_pane_t1_ParamLimits

0xdfac,	// (0x0004b56b) vkb2_top_entry_pane_t1

0xdfde,	// (0x0004b59d) vkb2_top_entry_pane_t2_ParamLimits

0xdfde,	// (0x0004b59d) vkb2_top_entry_pane_t2

0xe010,	// (0x0004b5cf) vkb2_top_entry_pane_t3_ParamLimits

0xe010,	// (0x0004b5cf) vkb2_top_entry_pane_t3

0x0002,

0x0347,	// (0x0003d906) vkb2_top_entry_pane_t_ParamLimits

0x0347,	// (0x0003d906) vkb2_top_entry_pane_t

0xa195,	// (0x00047754) vkb2_top_grid_right_pane_g1_ParamLimits

0xa195,	// (0x00047754) vkb2_top_grid_right_pane_g1

0xa1ab,	// (0x0004776a) vkb2_top_grid_right_pane_g2_ParamLimits

0xa1ab,	// (0x0004776a) vkb2_top_grid_right_pane_g2

0xa1c3,	// (0x00047782) vkb2_top_grid_right_pane_g3_ParamLimits

0xa1c3,	// (0x00047782) vkb2_top_grid_right_pane_g3

0xa1db,	// (0x0004779a) vkb2_top_grid_right_pane_g4_ParamLimits

0xa1db,	// (0x0004779a) vkb2_top_grid_right_pane_g4

0x0003,

0xfca8,	// (0x0004d267) vkb2_top_grid_right_pane_g_ParamLimits

0xfca8,	// (0x0004d267) vkb2_top_grid_right_pane_g

0xa1f1,	// (0x000477b0) vkb2_top_cell_left_pane_g1

0xa208,	// (0x000477c7) vkb2_cell_keypad_pane_g1_ParamLimits

0xa208,	// (0x000477c7) vkb2_cell_keypad_pane_g1

0xe034,	// (0x0004b5f3) vkb2_cell_keypad_pane_t1_ParamLimits

0xe034,	// (0x0004b5f3) vkb2_cell_keypad_pane_t1

0xa216,	// (0x000477d5) vkb2_cell_bottom_grid_pane_ParamLimits

0xa216,	// (0x000477d5) vkb2_cell_bottom_grid_pane

0xa24f,	// (0x0004780e) vkb2_cell_bottom_grid_pane_g1

0xdbc1,	// (0x0004b180) aid_call2_pane_cp02

0xdbc9,	// (0x0004b188) aid_call_pane_cp02

0xdbd1,	// (0x0004b190) clock_digital_number_pane_cp10

0xdbd9,	// (0x0004b198) clock_digital_number_pane_cp11

0xdbe1,	// (0x0004b1a0) clock_digital_number_pane_cp12

0xdbe9,	// (0x0004b1a8) clock_digital_number_pane_cp13

0xdbf1,	// (0x0004b1b0) clock_digital_separator_pane_cp10

0x4d67,	// (0x00042326) popup_clock_digital_analogue_window_cp2_g1

0x4d67,	// (0x00042326) popup_clock_digital_analogue_window_cp2_g2

0xdbf9,	// (0x0004b1b8) popup_clock_digital_analogue_window_cp2_g3

0x4d67,	// (0x00042326) popup_clock_digital_analogue_window_cp2_g4

0xdbf9,	// (0x0004b1b8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfc87,	// (0x0004d246) popup_clock_digital_analogue_window_cp2_g

0xdc01,	// (0x0004b1c0) popup_clock_digital_analogue_window_cp2_t1

0xdc0f,	// (0x0004b1ce) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x030e,	// (0x0003d8cd) popup_clock_digital_analogue_window_cp2_t

0x7560,	// (0x00044b1f) clock_digital_number_pane_cp10_g1

0x7560,	// (0x00044b1f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004d102) clock_digital_number_pane_cp10_g

0x7560,	// (0x00044b1f) clock_digital_separator_pane_cp10_g1

0x7560,	// (0x00044b1f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004d102) clock_digital_separator_pane_cp10_g

0xda3e,	// (0x0004affd) uniindi_top_pane_g3

0xda4f,	// (0x0004b00e) uniindi_top_pane_g4

0xa029,	// (0x000475e8) vkb2_row_keypad_pane_ParamLimits

0xa029,	// (0x000475e8) vkb2_row_keypad_pane

0xa26f,	// (0x0004782e) vkb2_cell_t_keypad_pane_ParamLimits

0xa26f,	// (0x0004782e) vkb2_cell_t_keypad_pane

0xa27f,	// (0x0004783e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xa27f,	// (0x0004783e) vkb2_cell_t_keypad_pane_cp08

0xa292,	// (0x00047851) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xa292,	// (0x00047851) vkb2_cell_t_keypad_pane_cp09

0xa2a6,	// (0x00047865) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xa2a6,	// (0x00047865) vkb2_cell_t_keypad_pane_cp01

0xa2b7,	// (0x00047876) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xa2b7,	// (0x00047876) vkb2_cell_t_keypad_pane_cp02

0xa2c8,	// (0x00047887) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xa2c8,	// (0x00047887) vkb2_cell_t_keypad_pane_cp03

0xa2d9,	// (0x00047898) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xa2d9,	// (0x00047898) vkb2_cell_t_keypad_pane_cp04

0xa2ea,	// (0x000478a9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xa2ea,	// (0x000478a9) vkb2_cell_t_keypad_pane_cp05

0xa2fb,	// (0x000478ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xa2fb,	// (0x000478ba) vkb2_cell_t_keypad_pane_cp06

0xa30c,	// (0x000478cb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xa30c,	// (0x000478cb) vkb2_cell_t_keypad_pane_cp07

0xa31d,	// (0x000478dc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xa31d,	// (0x000478dc) vkb2_cell_t_keypad_pane_cp10

0x9ada,	// (0x00047099) vkb2_cell_t_keypad_pane_g1

0xe04b,	// (0x0004b60a) vkb2_cell_t_keypad_pane_t1

0x86b9,	// (0x00045c78) popup_grid_graphic2_window

0xed77,	// (0x0004c336) aid_size_cell_graphic2_ParamLimits

0xed77,	// (0x0004c336) aid_size_cell_graphic2

0x77e7,	// (0x00044da6) bg_popup_window_pane_cp21_ParamLimits

0x77e7,	// (0x00044da6) bg_popup_window_pane_cp21

0xeda3,	// (0x0004c362) graphic2_pages_pane_ParamLimits

0xeda3,	// (0x0004c362) graphic2_pages_pane

0xede9,	// (0x0004c3a8) grid_graphic2_control_pane_ParamLimits

0xede9,	// (0x0004c3a8) grid_graphic2_control_pane

0xee17,	// (0x0004c3d6) grid_graphic2_pane_ParamLimits

0xee17,	// (0x0004c3d6) grid_graphic2_pane

0xee77,	// (0x0004c436) cell_graphic2_pane

0x3ff8,	// (0x000415b7) main_comp_mode_pane

0xd2a1,	// (0x0004a860) list_ai3_gene_pane_ParamLimits

0xd684,	// (0x0004ac43) bg_popup_window_pane_cp19_ParamLimits

0xd690,	// (0x0004ac4f) bg_touch_area_indi_pane_ParamLimits

0xd690,	// (0x0004ac4f) bg_touch_area_indi_pane

0xd6a6,	// (0x0004ac65) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6a6,	// (0x0004ac65) bg_touch_area_indi_pane_cp01

0xd6bc,	// (0x0004ac7b) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6bc,	// (0x0004ac7b) bg_touch_area_indi_pane_cp02

0xd6d4,	// (0x0004ac93) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6d4,	// (0x0004ac93) bg_touch_area_indi_pane_cp03

0xd6ee,	// (0x0004acad) popup_slider_window_g1_ParamLimits

0xd70a,	// (0x0004acc9) popup_slider_window_g2_ParamLimits

0xd726,	// (0x0004ace5) popup_slider_window_g3_ParamLimits

0x0298,	// (0x0003d857) popup_slider_window_g_ParamLimits

0xd782,	// (0x0004ad41) popup_slider_window_t1_ParamLimits

0xd7f6,	// (0x0004adb5) small_volume_slider_vertical_pane_ParamLimits

0xee77,	// (0x0004c436) cell_graphic2_pane_ParamLimits

0xeec6,	// (0x0004c485) bg_button_pane_cp10_ParamLimits

0xeec6,	// (0x0004c485) bg_button_pane_cp10

0xeed9,	// (0x0004c498) bg_button_pane_cp11_ParamLimits

0xeed9,	// (0x0004c498) bg_button_pane_cp11

0xeeec,	// (0x0004c4ab) graphic2_pages_pane_g1_ParamLimits

0xeeec,	// (0x0004c4ab) graphic2_pages_pane_g1

0xef07,	// (0x0004c4c6) graphic2_pages_pane_g2_ParamLimits

0xef07,	// (0x0004c4c6) graphic2_pages_pane_g2

0x0001,

0xfcb6,	// (0x0004d275) graphic2_pages_pane_g_ParamLimits

0xfcb6,	// (0x0004d275) graphic2_pages_pane_g

0xef1f,	// (0x0004c4de) graphic2_pages_pane_t1_ParamLimits

0xef1f,	// (0x0004c4de) graphic2_pages_pane_t1

0xef35,	// (0x0004c4f4) cell_graphic2_control_pane_ParamLimits

0xef35,	// (0x0004c4f4) cell_graphic2_control_pane

0xef4f,	// (0x0004c50e) cell_graphic2_pane_g1_ParamLimits

0xef4f,	// (0x0004c50e) cell_graphic2_pane_g1

0xef5c,	// (0x0004c51b) cell_graphic2_pane_g2_ParamLimits

0xef5c,	// (0x0004c51b) cell_graphic2_pane_g2

0xef69,	// (0x0004c528) cell_graphic2_pane_g3_ParamLimits

0xef69,	// (0x0004c528) cell_graphic2_pane_g3

0xef76,	// (0x0004c535) cell_graphic2_pane_g4_ParamLimits

0xef76,	// (0x0004c535) cell_graphic2_pane_g4

0xef83,	// (0x0004c542) cell_graphic2_pane_g5_ParamLimits

0xef83,	// (0x0004c542) cell_graphic2_pane_g5

0x0004,

0xfcbb,	// (0x0004d27a) cell_graphic2_pane_g_ParamLimits

0xfcbb,	// (0x0004d27a) cell_graphic2_pane_g

0xef9e,	// (0x0004c55d) cell_graphic2_pane_t1_ParamLimits

0xef9e,	// (0x0004c55d) cell_graphic2_pane_t1

0x58a6,	// (0x00042e65) grid_highlight_pane_cp11_ParamLimits

0x58a6,	// (0x00042e65) grid_highlight_pane_cp11

0x482f,	// (0x00041dee) bg_button_pane_cp05

0xefc7,	// (0x0004c586) cell_graphic2_control_pane_g1

0x7560,	// (0x00044b1f) bg_touch_area_indi_pane_g1

0xe05d,	// (0x0004b61c) aid_cmod_rocker_key_size

0xe067,	// (0x0004b626) aid_cmode_itu_key_size

0xe071,	// (0x0004b630) main_cmode_video_pane

0xe07b,	// (0x0004b63a) main_comp_mode_itu_pane

0xe087,	// (0x0004b646) main_comp_mode_rocker_pane

0xe093,	// (0x0004b652) cell_cmode_rocker_pane_ParamLimits

0xe093,	// (0x0004b652) cell_cmode_rocker_pane

0xe0a5,	// (0x0004b664) cell_cmode_itu_pane_ParamLimits

0xe0a5,	// (0x0004b664) cell_cmode_itu_pane

0x482f,	// (0x00041dee) bg_button_pane_cp06_ParamLimits

0x482f,	// (0x00041dee) bg_button_pane_cp06

0x77f5,	// (0x00044db4) cell_cmode_rocker_pane_g1_ParamLimits

0x77f5,	// (0x00044db4) cell_cmode_rocker_pane_g1

0xd89a,	// (0x0004ae59) cell_cmode_rocker_pane_g2_ParamLimits

0xd89a,	// (0x0004ae59) cell_cmode_rocker_pane_g2

0x0001,

0xfccb,	// (0x0004d28a) cell_cmode_rocker_pane_g_ParamLimits

0xfccb,	// (0x0004d28a) cell_cmode_rocker_pane_g

0x3ff8,	// (0x000415b7) bg_button_pane_cp07

0xe0ba,	// (0x0004b679) cell_cmode_itu_pane_g1

0xe0c3,	// (0x0004b682) cell_cmode_itu_pane_t1

0xe0d1,	// (0x0004b690) cell_cmode_itu_pane_t2

0x0001,

0x035c,	// (0x0003d91b) cell_cmode_itu_pane_t

0xdac0,	// (0x0004b07f) aid_touch_ctrl_left

0xdac8,	// (0x0004b087) aid_touch_ctrl_right

0x3ff8,	// (0x000415b7) compa_mode_pane

0xefd4,	// (0x0004c593) aid_cmod_rocker_key_size_cp

0xefde,	// (0x0004c59d) aid_cmode_itu_key_size_cp

0xe0df,	// (0x0004b69e) compa_mode_pane_g1

0xe0e7,	// (0x0004b6a6) compa_mode_pane_g2

0xe0ef,	// (0x0004b6ae) compa_mode_pane_g3

0x0002,

0x0361,	// (0x0003d920) compa_mode_pane_g

0xefe8,	// (0x0004c5a7) main_comp_mode_itu_pane_cp

0xeff0,	// (0x0004c5af) main_comp_mode_rocker_pane_cp

0xeff8,	// (0x0004c5b7) cell_cmode_itu_pane_cp_ParamLimits

0xeff8,	// (0x0004c5b7) cell_cmode_itu_pane_cp

0xf00d,	// (0x0004c5cc) cell_cmode_rocker_pane_cp_ParamLimits

0xf00d,	// (0x0004c5cc) cell_cmode_rocker_pane_cp

0x482f,	// (0x00041dee) bg_button_pane_cp06_cp_ParamLimits

0x482f,	// (0x00041dee) bg_button_pane_cp06_cp

0x77f5,	// (0x00044db4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x77f5,	// (0x00044db4) cell_cmode_rocker_pane_g1_cp

0x7560,	// (0x00044b1f) cell_cmode_rocker_pane_g2_cp

0x3ff8,	// (0x000415b7) bg_button_pane_cp07_cp

0xf01f,	// (0x0004c5de) cell_cmode_itu_pane_g1_cp

0xf028,	// (0x0004c5e7) cell_cmode_itu_pane_t1_cp

0xf028,	// (0x0004c5e7) cell_cmode_itu_pane_t2_cp

0xc2ba,	// (0x00049879) settings_code_pane_cp2

0x4068,	// (0x00041627) bg_popup_window_pane_cp3_ParamLimits

0x444c,	// (0x00041a0b) heading_pane_cp3_ParamLimits

0x4458,	// (0x00041a17) listscroll_popup_graphic_pane_ParamLimits

0x9883,	// (0x00046e42) fep_hwr_aid_pane_ParamLimits

0x9cf3,	// (0x000472b2) aid_touch_sctrl_top_ParamLimits

0x9d0e,	// (0x000472cd) sctrl_sk_top_pane_g1_ParamLimits

0x9ada,	// (0x00047099) sctrl_sk_top_pane_g2_ParamLimits

0xfc59,	// (0x0004d218) sctrl_sk_top_pane_g_ParamLimits

0x9d1b,	// (0x000472da) sctrl_sk_top_pane_t1_ParamLimits

0x9cf3,	// (0x000472b2) aid_touch_sctrl_bottom_ParamLimits

0x9d1b,	// (0x000472da) sctrl_sk_bottom_pane_t1_ParamLimits

0xda0a,	// (0x0004afc9) aid_area_touch_clock

0x9f00,	// (0x000474bf) aid_vkb2_area_top_pane_cell_ParamLimits

0x9f00,	// (0x000474bf) aid_vkb2_area_top_pane_cell

0xa04b,	// (0x0004760a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa04b,	// (0x0004760a) aid_vkb2_area_bottom_pane_cell

0xdf96,	// (0x0004b555) popup_char_count_window

0xe0f7,	// (0x0004b6b6) popup_char_count_window_g1

0xe100,	// (0x0004b6bf) popup_char_count_window_g2

0xe109,	// (0x0004b6c8) popup_char_count_window_g3

0x0002,

0x0368,	// (0x0003d927) popup_char_count_window_g

0xe112,	// (0x0004b6d1) popup_char_count_window_t1

0x9dce,	// (0x0004738d) popup_fep_char_preview_window_ParamLimits

0x9dce,	// (0x0004738d) popup_fep_char_preview_window

0x9f1e,	// (0x000474dd) vkb2_top_candi_pane_ParamLimits

0x9f1e,	// (0x000474dd) vkb2_top_candi_pane

0xf036,	// (0x0004c5f5) cell_vkb2_top_candi_pane_ParamLimits

0xf036,	// (0x0004c5f5) cell_vkb2_top_candi_pane

0xa332,	// (0x000478f1) bg_popup_fep_char_preview_window_ParamLimits

0xa332,	// (0x000478f1) bg_popup_fep_char_preview_window

0xa340,	// (0x000478ff) popup_fep_char_preview_window_t1_ParamLimits

0xa340,	// (0x000478ff) popup_fep_char_preview_window_t1

0xe120,	// (0x0004b6df) bg_popup_fep_char_preview_window_g1

0xe128,	// (0x0004b6e7) bg_popup_fep_char_preview_window_g2

0xe130,	// (0x0004b6ef) bg_popup_fep_char_preview_window_g3

0xe138,	// (0x0004b6f7) bg_popup_fep_char_preview_window_g4

0xe140,	// (0x0004b6ff) bg_popup_fep_char_preview_window_g5

0xa37a,	// (0x00047939) bg_popup_fep_char_preview_window_g6

0xe148,	// (0x0004b707) bg_popup_fep_char_preview_window_g7

0xe150,	// (0x0004b70f) bg_popup_fep_char_preview_window_g8

0xe158,	// (0x0004b717) bg_popup_fep_char_preview_window_g9

0x0008,

0xfcd0,	// (0x0004d28f) bg_popup_fep_char_preview_window_g

0x9ada,	// (0x00047099) cell_vkb2_top_candi_pane_g1_ParamLimits

0x9ada,	// (0x00047099) cell_vkb2_top_candi_pane_g1

0x9ae8,	// (0x000470a7) cell_vkb2_top_candi_pane_g2_ParamLimits

0x9ae8,	// (0x000470a7) cell_vkb2_top_candi_pane_g2

0xde29,	// (0x0004b3e8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xde29,	// (0x0004b3e8) cell_vkb2_top_candi_pane_g3

0xa382,	// (0x00047941) cell_vkb2_top_candi_pane_g4_ParamLimits

0xa382,	// (0x00047941) cell_vkb2_top_candi_pane_g4

0x7ac9,	// (0x00045088) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7ac9,	// (0x00045088) cell_vkb2_top_candi_pane_g5

0xa3a3,	// (0x00047962) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa3a3,	// (0x00047962) cell_vkb2_top_candi_pane_g6

0x0005,

0xfce3,	// (0x0004d2a2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfce3,	// (0x0004d2a2) cell_vkb2_top_candi_pane_g

0xa3b1,	// (0x00047970) cell_vkb2_top_candi_pane_t1

0x9692,	// (0x00046c51) aid_size_touch_slider_mark_ParamLimits

0x9692,	// (0x00046c51) aid_size_touch_slider_mark

0xedd9,	// (0x0004c398) grid_graphic2_catg_pane_ParamLimits

0xedd9,	// (0x0004c398) grid_graphic2_catg_pane

0xee53,	// (0x0004c412) popup_grid_graphic2_window_t1_ParamLimits

0xee53,	// (0x0004c412) popup_grid_graphic2_window_t1

0xee65,	// (0x0004c424) popup_grid_graphic2_window_t2_ParamLimits

0xee65,	// (0x0004c424) popup_grid_graphic2_window_t2

0x0001,

0xfcb1,	// (0x0004d270) popup_grid_graphic2_window_t_ParamLimits

0xfcb1,	// (0x0004d270) popup_grid_graphic2_window_t

0x482f,	// (0x00041dee) bg_button_pane_cp05_ParamLimits

0xefc7,	// (0x0004c586) cell_graphic2_control_pane_g1_ParamLimits

0xf083,	// (0x0004c642) cell_graphic2_catg_pane_ParamLimits

0xf083,	// (0x0004c642) cell_graphic2_catg_pane

0x3ff8,	// (0x000415b7) bg_button_pane_cp12

0xf095,	// (0x0004c654) cell_graphic2_catg_pane_g1

0xd9d6,	// (0x0004af95) cell_tb_ext_pane_t1_ParamLimits

0xa168,	// (0x00047727) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa168,	// (0x00047727) vkb2_top_cell_right_narrow_pane

0xa180,	// (0x0004773f) vkb2_top_cell_right_wide_pane_ParamLimits

0xa180,	// (0x0004773f) vkb2_top_cell_right_wide_pane

0x9875,	// (0x00046e34) bg_vkb2_func_pane_ParamLimits

0x9875,	// (0x00046e34) bg_vkb2_func_pane

0xa1f1,	// (0x000477b0) vkb2_top_cell_left_pane_g1_ParamLimits

0x9875,	// (0x00046e34) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9875,	// (0x00046e34) bg_vkb2_fuc_pane_cp03

0xa24f,	// (0x0004780e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x57c6,	// (0x00042d85) bg_vkb2_func_pane_g1

0x57be,	// (0x00042d7d) bg_vkb2_func_pane_g2

0x57ce,	// (0x00042d8d) bg_vkb2_func_pane_g3

0x57d6,	// (0x00042d95) bg_vkb2_func_pane_g4

0x57de,	// (0x00042d9d) bg_vkb2_func_pane_g5

0x57e6,	// (0x00042da5) bg_vkb2_func_pane_g6

0x57f6,	// (0x00042db5) bg_vkb2_func_pane_g7

0x57ee,	// (0x00042dad) bg_vkb2_func_pane_g8

0x57b6,	// (0x00042d75) bg_vkb2_func_pane_g9

0x0008,

0xfcf0,	// (0x0004d2af) bg_vkb2_func_pane_g

0x9875,	// (0x00046e34) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9875,	// (0x00046e34) bg_vkb2_fuc_pane_cp01

0xa1f1,	// (0x000477b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa1f1,	// (0x000477b0) vkb2_top_cell_right_wide_pane_g1

0x9875,	// (0x00046e34) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9875,	// (0x00046e34) bg_vkb2_fuc_pane_cp02

0xa24f,	// (0x0004780e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xa24f,	// (0x0004780e) vkb2_top_cell_right_narrow_pane_g1

0xd602,	// (0x0004abc1) aid_touch_area_decrease_ParamLimits

0xd602,	// (0x0004abc1) aid_touch_area_decrease

0xd626,	// (0x0004abe5) aid_touch_area_increase_ParamLimits

0xd626,	// (0x0004abe5) aid_touch_area_increase

0xd632,	// (0x0004abf1) aid_touch_area_mute_ParamLimits

0xd632,	// (0x0004abf1) aid_touch_area_mute

0xd656,	// (0x0004ac15) aid_touch_area_slider_ParamLimits

0xd656,	// (0x0004ac15) aid_touch_area_slider

0xd742,	// (0x0004ad01) popup_slider_window_g4_ParamLimits

0xd742,	// (0x0004ad01) popup_slider_window_g4

0xd74e,	// (0x0004ad0d) popup_slider_window_g5_ParamLimits

0xd74e,	// (0x0004ad0d) popup_slider_window_g5

0xd770,	// (0x0004ad2f) popup_slider_window_g6_ParamLimits

0xd770,	// (0x0004ad2f) popup_slider_window_g6

0xd7b0,	// (0x0004ad6f) popup_slider_window_t2_ParamLimits

0xd7b0,	// (0x0004ad6f) popup_slider_window_t2

0x0001,

0x02a5,	// (0x0003d864) popup_slider_window_t_ParamLimits

0x02a5,	// (0x0003d864) popup_slider_window_t

0xd7c8,	// (0x0004ad87) slider_pane_ParamLimits

0xd7c8,	// (0x0004ad87) slider_pane

0xe160,	// (0x0004b71f) slider_pane_g1_ParamLimits

0xe160,	// (0x0004b71f) slider_pane_g1

0xe174,	// (0x0004b733) slider_pane_g2_ParamLimits

0xe174,	// (0x0004b733) slider_pane_g2

0xe18a,	// (0x0004b749) slider_pane_g3_ParamLimits

0xe18a,	// (0x0004b749) slider_pane_g3

0x0003,

0x03a2,	// (0x0003d961) slider_pane_g_ParamLimits

0x03a2,	// (0x0003d961) slider_pane_g

0xba39,	// (0x00048ff8) popup_tb_float_extension_window_ParamLimits

0xba39,	// (0x00048ff8) popup_tb_float_extension_window

0xe1b6,	// (0x0004b775) aid_size_cell_tb_float_ext

0x3ff8,	// (0x000415b7) bg_popup_sub_window_cp28

0xe1c2,	// (0x0004b781) grid_tb_float_ext_pane

0xe1cc,	// (0x0004b78b) cell_tb_float_ext_pane_ParamLimits

0xe1cc,	// (0x0004b78b) cell_tb_float_ext_pane

0xe1e6,	// (0x0004b7a5) cell_tb_float_ext_pane_g1

0xe1ef,	// (0x0004b7ae) grid_highlight_pane_cp12

0x99c4,	// (0x00046f83) cell_last_hwr_side_pane_ParamLimits

0x99c4,	// (0x00046f83) cell_last_hwr_side_pane

0x7560,	// (0x00044b1f) cell_last_hwr_side_pane_g1

0xe1f8,	// (0x0004b7b7) cell_last_hwr_side_pane_g2

0x0001,

0xfd03,	// (0x0004d2c2) cell_last_hwr_side_pane_g

0xa117,	// (0x000476d6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa117,	// (0x000476d6) vkb2_area_bottom_space_btn_pane

0x9ada,	// (0x00047099) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe04b,	// (0x0004b60a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xa3b1,	// (0x00047970) cell_vkb2_top_candi_pane_t1_ParamLimits

0xa3d0,	// (0x0004798f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xa3d0,	// (0x0004798f) vkb2_area_bottom_space_btn_pane_g1

0xa40a,	// (0x000479c9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xa40a,	// (0x000479c9) vkb2_area_bottom_space_btn_pane_g2

0xa440,	// (0x000479ff) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xa440,	// (0x000479ff) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd08,	// (0x0004d2c7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd08,	// (0x0004d2c7) vkb2_area_bottom_space_btn_pane_g

0x9938,	// (0x00046ef7) cel_fep_hwr_func_pane_ParamLimits

0x9938,	// (0x00046ef7) cel_fep_hwr_func_pane

0x9974,	// (0x00046f33) cell_hwr_side_button_pane_ParamLimits

0x9974,	// (0x00046f33) cell_hwr_side_button_pane

0xda0a,	// (0x0004afc9) aid_area_touch_clock_ParamLimits

0x419b,	// (0x0004175a) bg_uniindi_top_pane_ParamLimits

0xda1c,	// (0x0004afdb) uniindi_top_pane_g1_ParamLimits

0xda32,	// (0x0004aff1) uniindi_top_pane_g2_ParamLimits

0xda3e,	// (0x0004affd) uniindi_top_pane_g3_ParamLimits

0xda4f,	// (0x0004b00e) uniindi_top_pane_g4_ParamLimits

0x02dd,	// (0x0003d89c) uniindi_top_pane_g_ParamLimits

0xda5c,	// (0x0004b01b) uniindi_top_pane_t1_ParamLimits

0x419b,	// (0x0004175a) bg_vkb2_func_pane_cp01_ParamLimits

0x419b,	// (0x0004175a) bg_vkb2_func_pane_cp01

0xe201,	// (0x0004b7c0) cel_fep_hwr_func_pane_g1_ParamLimits

0xe201,	// (0x0004b7c0) cel_fep_hwr_func_pane_g1

0x419b,	// (0x0004175a) bg_vkb2_func_pane_cp02_ParamLimits

0x419b,	// (0x0004175a) bg_vkb2_func_pane_cp02

0xe201,	// (0x0004b7c0) cell_hwr_side_button_pane_g1_ParamLimits

0xe201,	// (0x0004b7c0) cell_hwr_side_button_pane_g1

0x56ce,	// (0x00042c8d) status_pane_g4_ParamLimits

0x56ce,	// (0x00042c8d) status_pane_g4

0x56e6,	// (0x00042ca5) status_pane_t1

0x73ef,	// (0x000449ae) form2_midp_gauge_slider_cont_pane

0x73f7,	// (0x000449b6) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc550,	// (0x00049b0f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc562,	// (0x00049b21) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0004d0b5) form2_midp_gauge_slider_pane_t_ParamLimits

0x7409,	// (0x000449c8) form2_midp_slider_pane_ParamLimits

0x9d8e,	// (0x0004734d) aid_size_cell_func_vkb2_ParamLimits

0x9d8e,	// (0x0004734d) aid_size_cell_func_vkb2

0xe1a2,	// (0x0004b761) slider_pane_g4_ParamLimits

0xe1a2,	// (0x0004b761) slider_pane_g4

0xa48a,	// (0x00047a49) form2_midp_gauge_slider_pane_t2_cp01

0xa498,	// (0x00047a57) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa498,	// (0x00047a57) form2_midp_gauge_slider_pane_t3_cp01

0xa4b5,	// (0x00047a74) form2_midp_slider_pane_cp01

0x3ff8,	// (0x000415b7) navi_smil_pane

0xe231,	// (0x0004b7f0) navi_smil_pane_g1

0xe239,	// (0x0004b7f8) navi_smil_pane_t1

0xe20f,	// (0x0004b7ce) form2_midp_slider_pane_g1

0xe218,	// (0x0004b7d7) form2_midp_slider_pane_g2

0xe220,	// (0x0004b7df) form2_midp_slider_pane_g3

0xe20f,	// (0x0004b7ce) form2_midp_slider_pane_g4

0xf09e,	// (0x0004c65d) form2_midp_slider_pane_g5

0x0004,

0xfd11,	// (0x0004d2d0) form2_midp_slider_pane_g

0xa47a,	// (0x00047a39) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xa47a,	// (0x00047a39) vkb2_area_bottom_space_btn_pane_g4

0xbc3f,	// (0x000491fe) lc0_navi_pane_ParamLimits

0xbc3f,	// (0x000491fe) lc0_navi_pane

0xbcb5,	// (0x00049274) lc0_stat_indi_pane_ParamLimits

0xbcb5,	// (0x00049274) lc0_stat_indi_pane

0xbccc,	// (0x0004928b) ls0_title_pane_ParamLimits

0xbccc,	// (0x0004928b) ls0_title_pane

0x482f,	// (0x00041dee) bg_popup_sub_pane_cp14_ParamLimits

0xd9f1,	// (0x0004afb0) list_uniindi_pane_ParamLimits

0xd9fd,	// (0x0004afbc) uniindi_top_pane_ParamLimits

0xda98,	// (0x0004b057) list_single_uniindi_pane_g1_ParamLimits

0xdaab,	// (0x0004b06a) list_single_uniindi_pane_t1_ParamLimits

0xa4be,	// (0x00047a7d) lc0_stat_clock_pane_ParamLimits

0xa4be,	// (0x00047a7d) lc0_stat_clock_pane

0xf0a7,	// (0x0004c666) lc0_stat_indi_pane_g1_ParamLimits

0xf0a7,	// (0x0004c666) lc0_stat_indi_pane_g1

0xf0b4,	// (0x0004c673) lc0_stat_indi_pane_g2_ParamLimits

0xf0b4,	// (0x0004c673) lc0_stat_indi_pane_g2

0x0001,

0xfd1c,	// (0x0004d2db) lc0_stat_indi_pane_g_ParamLimits

0xfd1c,	// (0x0004d2db) lc0_stat_indi_pane_g

0xa4cb,	// (0x00047a8a) lc0_uni_indicator_pane_ParamLimits

0xa4cb,	// (0x00047a8a) lc0_uni_indicator_pane

0xf0c1,	// (0x0004c680) ls0_title_pane_g1_ParamLimits

0xf0c1,	// (0x0004c680) ls0_title_pane_g1

0xf0d5,	// (0x0004c694) ls0_title_pane_t1_ParamLimits

0xf0d5,	// (0x0004c694) ls0_title_pane_t1

0xa4d8,	// (0x00047a97) lc0_uni_indicator_pane_g1_ParamLimits

0xa4d8,	// (0x00047a97) lc0_uni_indicator_pane_g1

0xe247,	// (0x0004b806) lc0_stat_clock_pane_t1

0x3ff8,	// (0x000415b7) main_ai5_pane

0xe255,	// (0x0004b814) ai5_sk_pane_ParamLimits

0xe255,	// (0x0004b814) ai5_sk_pane

0xf10b,	// (0x0004c6ca) cell_ai5_widget_pane_ParamLimits

0xf10b,	// (0x0004c6ca) cell_ai5_widget_pane

0xe262,	// (0x0004b821) aid_size_cell_widget_grid

0xe276,	// (0x0004b835) bg_ai5_widget_pane_ParamLimits

0xe276,	// (0x0004b835) bg_ai5_widget_pane

0xf1b5,	// (0x0004c774) cell_ai5_widget_pane_g2

0xf1c5,	// (0x0004c784) cell_ai5_widget_pane_g3

0xf1e4,	// (0x0004c7a3) cell_ai5_widget_pane_g4

0xf1f0,	// (0x0004c7af) cell_ai5_widget_pane_g5

0xf26a,	// (0x0004c829) cell_ai5_widget_pane_g6

0xf276,	// (0x0004c835) cell_ai5_widget_pane_g7

0xf2be,	// (0x0004c87d) cell_ai5_widget_pane_t1_ParamLimits

0xf2be,	// (0x0004c87d) cell_ai5_widget_pane_t1

0xf2db,	// (0x0004c89a) cell_ai5_widget_pane_t2_ParamLimits

0xf2db,	// (0x0004c89a) cell_ai5_widget_pane_t2

0xf2f3,	// (0x0004c8b2) cell_ai5_widget_pane_t3_ParamLimits

0xf2f3,	// (0x0004c8b2) cell_ai5_widget_pane_t3

0xf30b,	// (0x0004c8ca) cell_ai5_widget_pane_t4_ParamLimits

0xf30b,	// (0x0004c8ca) cell_ai5_widget_pane_t4

0xf325,	// (0x0004c8e4) cell_ai5_widget_pane_t5_ParamLimits

0xf325,	// (0x0004c8e4) cell_ai5_widget_pane_t5

0xe282,	// (0x0004b841) cell_ai5_widget_pane_t6_ParamLimits

0xe282,	// (0x0004b841) cell_ai5_widget_pane_t6

0xe294,	// (0x0004b853) cell_ai5_widget_pane_t7_ParamLimits

0xe294,	// (0x0004b853) cell_ai5_widget_pane_t7

0xf344,	// (0x0004c903) cell_ai5_widget_pane_t8_ParamLimits

0xf344,	// (0x0004c903) cell_ai5_widget_pane_t8

0x0009,

0x03c4,	// (0x0003d983) cell_ai5_widget_pane_t_ParamLimits

0x03c4,	// (0x0003d983) cell_ai5_widget_pane_t

0xf390,	// (0x0004c94f) grid_ai5_widget_pane

0x482f,	// (0x00041dee) highlight_cell_ai5_widget_pane_ParamLimits

0x482f,	// (0x00041dee) highlight_cell_ai5_widget_pane

0xf3a6,	// (0x0004c965) ai5_sk_left_pane

0xf3b0,	// (0x0004c96f) ai5_sk_middle_pane

0xf3ba,	// (0x0004c979) ai5_sk_right_pane

0xe2ad,	// (0x0004b86c) bg_ai5_widget_pane_g1_ParamLimits

0xe2ad,	// (0x0004b86c) bg_ai5_widget_pane_g1

0xe2b9,	// (0x0004b878) bg_ai5_widget_pane_g2_ParamLimits

0xe2b9,	// (0x0004b878) bg_ai5_widget_pane_g2

0xe2c5,	// (0x0004b884) bg_ai5_widget_pane_g3_ParamLimits

0xe2c5,	// (0x0004b884) bg_ai5_widget_pane_g3

0xe2d1,	// (0x0004b890) bg_ai5_widget_pane_g4_ParamLimits

0xe2d1,	// (0x0004b890) bg_ai5_widget_pane_g4

0xe2dd,	// (0x0004b89c) bg_ai5_widget_pane_g5_ParamLimits

0xe2dd,	// (0x0004b89c) bg_ai5_widget_pane_g5

0xe2e9,	// (0x0004b8a8) bg_ai5_widget_pane_g6_ParamLimits

0xe2e9,	// (0x0004b8a8) bg_ai5_widget_pane_g6

0xe2f5,	// (0x0004b8b4) bg_ai5_widget_pane_g7_ParamLimits

0xe2f5,	// (0x0004b8b4) bg_ai5_widget_pane_g7

0xe301,	// (0x0004b8c0) bg_ai5_widget_pane_g8_ParamLimits

0xe301,	// (0x0004b8c0) bg_ai5_widget_pane_g8

0xe30d,	// (0x0004b8cc) bg_ai5_widget_pane_g9_ParamLimits

0xe30d,	// (0x0004b8cc) bg_ai5_widget_pane_g9

0x0008,

0x03d9,	// (0x0003d998) bg_ai5_widget_pane_g_ParamLimits

0x03d9,	// (0x0003d998) bg_ai5_widget_pane_g

0xe340,	// (0x0004b8ff) cell_shortcut_ai5_widget_pane_ParamLimits

0xe340,	// (0x0004b8ff) cell_shortcut_ai5_widget_pane

0x40a4,	// (0x00041663) bg_cell_shortcut_ai5_widget_pane

0xe351,	// (0x0004b910) cell_grid_ai5_widget_pane_g1

0xe35a,	// (0x0004b919) highlight_cell_shortcut_ai5_widget_pane

0x57c6,	// (0x00042d85) ai5_sk_left_pane_g1

0xe362,	// (0x0004b921) ai5_sk_left_pane_g2

0xe36a,	// (0x0004b929) ai5_sk_left_pane_g3

0xe372,	// (0x0004b931) ai5_sk_left_pane_g4

0x0003,

0xfd36,	// (0x0004d2f5) ai5_sk_left_pane_g

0xe37a,	// (0x0004b939) ai5_sk_left_pane_t1

0x57be,	// (0x00042d7d) ai5_sk_right_pane_g1

0xe388,	// (0x0004b947) ai5_sk_right_pane_g2

0xe390,	// (0x0004b94f) ai5_sk_right_pane_g3

0xe398,	// (0x0004b957) ai5_sk_right_pane_g4

0x0003,

0xfd3f,	// (0x0004d2fe) ai5_sk_right_pane_g

0xe3a0,	// (0x0004b95f) ai5_sk_right_pane_t1

0x57be,	// (0x00042d7d) ai5_sk_middle_pane_g1

0x57c6,	// (0x00042d85) ai5_sk_middle_pane_g2

0x57de,	// (0x00042d9d) ai5_sk_middle_pane_g3

0xe390,	// (0x0004b94f) ai5_sk_middle_pane_g4

0xe36a,	// (0x0004b929) ai5_sk_middle_pane_g5

0xe3ae,	// (0x0004b96d) ai5_sk_middle_pane_g6

0xf3c4,	// (0x0004c983) ai5_sk_middle_pane_g7

0x0006,

0xfd48,	// (0x0004d307) ai5_sk_middle_pane_g

0xbb84,	// (0x00049143) aid_touch_area_size_lc0_ParamLimits

0xbb84,	// (0x00049143) aid_touch_area_size_lc0

0x9b09,	// (0x000470c8) cell_hwr_candidate_pane_t1_ParamLimits

0x55e2,	// (0x00042ba1) aid_touch_navi_pane

0xbda2,	// (0x00049361) status_dt_navi_pane_ParamLimits

0xbda2,	// (0x00049361) status_dt_navi_pane

0xbdaf,	// (0x0004936e) status_dt_sta_pane_ParamLimits

0xbdaf,	// (0x0004936e) status_dt_sta_pane

0xf3cc,	// (0x0004c98b) dt_sta_controll_pane

0xf3d9,	// (0x0004c998) dt_sta_indi_pane

0xf3ea,	// (0x0004c9a9) dt_sta_title_pane

0x419b,	// (0x0004175a) bg_dt_sta_indi_pane_ParamLimits

0x419b,	// (0x0004175a) bg_dt_sta_indi_pane

0xf3fd,	// (0x0004c9bc) dt_sta_battery_pane

0xf405,	// (0x0004c9c4) dt_sta_indi_pane_g1

0xe3b6,	// (0x0004b975) dt_sta_indi_pane_g2

0xe3bf,	// (0x0004b97e) dt_sta_indi_pane_g3

0x0002,

0x040d,	// (0x0003d9cc) dt_sta_indi_pane_g

0xe3c8,	// (0x0004b987) dt_sta_signal_pane

0x482f,	// (0x00041dee) bg_dt_sta_title_pane_ParamLimits

0x482f,	// (0x00041dee) bg_dt_sta_title_pane

0x647b,	// (0x00043a3a) dt_sta_title_pane_g1

0xf40e,	// (0x0004c9cd) dt_sta_title_pane_t1_ParamLimits

0xf40e,	// (0x0004c9cd) dt_sta_title_pane_t1

0x3ff8,	// (0x000415b7) bg_dt_sta_control_pane

0xf423,	// (0x0004c9e2) dt_sta_controll_pane_g1

0xe3d1,	// (0x0004b990) bg_dt_sta_title_pane_g1

0xe3da,	// (0x0004b999) bg_dt_sta_title_pane_g2

0xe3e3,	// (0x0004b9a2) bg_dt_sta_title_pane_g3

0x0002,

0x0414,	// (0x0003d9d3) bg_dt_sta_title_pane_g

0x7560,	// (0x00044b1f) bg_dt_sta_indi_pane_g1

0xe3ec,	// (0x0004b9ab) dt_sta_signal_pane_g1

0xe3f4,	// (0x0004b9b3) dt_sta_signal_pane_g2

0x0001,

0x041b,	// (0x0003d9da) dt_sta_signal_pane_g

0xe3fc,	// (0x0004b9bb) dt_sta_battery_pane_g1

0xe405,	// (0x0004b9c4) dt_sta_battery_pane_t1

0x7560,	// (0x00044b1f) bg_dt_sta_control_pane_g1

0x4de5,	// (0x000423a4) fep_china_uni_eep_pane

0x4ded,	// (0x000423ac) fep_china_uni_entry_pane_ParamLimits

0x4dfd,	// (0x000423bc) popup_fep_china_uni_window_g1_ParamLimits

0x4e0d,	// (0x000423cc) popup_fep_china_uni_window_g2_ParamLimits

0x4e0d,	// (0x000423cc) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0004ccf9) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0004ccf9) popup_fep_china_uni_window_g

0xe414,	// (0x0004b9d3) fep_china_uni_eep_pane_g1

0xe41c,	// (0x0004b9db) fep_china_uni_eep_pane_t1

0xe228,	// (0x0004b7e7) aid_touch_area_size_smil_player

0x56a1,	// (0x00042c60) lc0_clock_pane

0x56da,	// (0x00042c99) status_pane_g5_ParamLimits

0x56da,	// (0x00042c99) status_pane_g5

0xb74b,	// (0x00048d0a) popup_keymap_window

0x56ba,	// (0x00042c79) status_icon_pane

0xf1c5,	// (0x0004c784) cell_ai5_widget_pane_g3_ParamLimits

0xf1e4,	// (0x0004c7a3) cell_ai5_widget_pane_g4_ParamLimits

0xf1f0,	// (0x0004c7af) cell_ai5_widget_pane_g5_ParamLimits

0xf282,	// (0x0004c841) cell_ai5_widget_pane_g8_ParamLimits

0xf282,	// (0x0004c841) cell_ai5_widget_pane_g8

0xf296,	// (0x0004c855) cell_ai5_widget_pane_g9_ParamLimits

0xf296,	// (0x0004c855) cell_ai5_widget_pane_g9

0xf2aa,	// (0x0004c869) cell_ai5_widget_pane_g10_ParamLimits

0xf2aa,	// (0x0004c869) cell_ai5_widget_pane_g10

0xe42b,	// (0x0004b9ea) status_icon_pane_g1

0x3ff8,	// (0x000415b7) bg_popup_sub_pane_cp13

0xe433,	// (0x0004b9f2) popup_keymap_window_t1

0xaea0,	// (0x0004845f) control_pane_g6_ParamLimits

0xaea0,	// (0x0004845f) control_pane_g6

0xaead,	// (0x0004846c) control_pane_g7_ParamLimits

0xaead,	// (0x0004846c) control_pane_g7

0xaeba,	// (0x00048479) control_pane_g8_ParamLimits

0xaeba,	// (0x00048479) control_pane_g8

0xf3cc,	// (0x0004c98b) dt_sta_controll_pane_ParamLimits

0xf3d9,	// (0x0004c998) dt_sta_indi_pane_ParamLimits

0xf3ea,	// (0x0004c9a9) dt_sta_title_pane_ParamLimits

0x4771,	// (0x00041d30) aid_size_touch_scroll_bar_cale

0x8792,	// (0x00045d51) popup_discreet_window_ParamLimits

0x8792,	// (0x00045d51) popup_discreet_window

0x880c,	// (0x00045dcb) popup_sk_window

0x5d63,	// (0x00043322) bg_popup_sub_pane_cp28_ParamLimits

0x5d63,	// (0x00043322) bg_popup_sub_pane_cp28

0xe441,	// (0x0004ba00) popup_discreet_window_g1_ParamLimits

0xe441,	// (0x0004ba00) popup_discreet_window_g1

0xe461,	// (0x0004ba20) popup_discreet_window_t1_ParamLimits

0xe461,	// (0x0004ba20) popup_discreet_window_t1

0xe47f,	// (0x0004ba3e) popup_discreet_window_t2_ParamLimits

0xe47f,	// (0x0004ba3e) popup_discreet_window_t2

0x0002,

0x0420,	// (0x0003d9df) popup_discreet_window_t_ParamLimits

0x0420,	// (0x0003d9df) popup_discreet_window_t

0xa4ee,	// (0x00047aad) popup_sk_window_g1

0xa4f8,	// (0x00047ab7) popup_sk_window_g2

0x0001,

0xfd57,	// (0x0004d316) popup_sk_window_g

0xe4d1,	// (0x0004ba90) popup_sk_window_t1

0xe4df,	// (0x0004ba9e) popup_sk_window_t1_copy1

0xf1b5,	// (0x0004c774) cell_ai5_widget_pane_g2_ParamLimits

0xf356,	// (0x0004c915) cell_ai5_widget_pane_t9_ParamLimits

0xf356,	// (0x0004c915) cell_ai5_widget_pane_t9

0x3ff8,	// (0x000415b7) main_fep_fshwr2_pane

0xf42c,	// (0x0004c9eb) aid_fshwr2_btn_pane

0xf434,	// (0x0004c9f3) aid_fshwr2_syb_pane

0xf43c,	// (0x0004c9fb) aid_fshwr2_txt_pane

0xf444,	// (0x0004ca03) fshwr2_func_candi_pane

0xf450,	// (0x0004ca0f) fshwr2_hwr_syb_pane

0xf45c,	// (0x0004ca1b) fshwr2_icf_pane

0x3ff8,	// (0x000415b7) fshwr2_icf_bg_pane

0xf466,	// (0x0004ca25) fshwr2_icf_pane_t1_ParamLimits

0xf466,	// (0x0004ca25) fshwr2_icf_pane_t1

0x7560,	// (0x00044b1f) fshwr2_func_candi_pane_g1

0xe501,	// (0x0004bac0) fshwr2_func_candi_row_pane_ParamLimits

0xe501,	// (0x0004bac0) fshwr2_func_candi_row_pane

0xf47d,	// (0x0004ca3c) cell_fshwr2_syb_pane_ParamLimits

0xf47d,	// (0x0004ca3c) cell_fshwr2_syb_pane

0x77f5,	// (0x00044db4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x77f5,	// (0x00044db4) fshwr2_hwr_syb_pane_g1

0x3ff8,	// (0x000415b7) bg_popup_call_pane_cp01

0xe512,	// (0x0004bad1) fshwr2_func_candi_cell_pane_ParamLimits

0xe512,	// (0x0004bad1) fshwr2_func_candi_cell_pane

0xe543,	// (0x0004bb02) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe543,	// (0x0004bb02) fshwr2_func_candi_cell_bg_pane

0xe55d,	// (0x0004bb1c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe55d,	// (0x0004bb1c) fshwr2_func_candi_cell_pane_g1

0xe57d,	// (0x0004bb3c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe57d,	// (0x0004bb3c) fshwr2_func_candi_cell_pane_t1

0x3ff8,	// (0x000415b7) bg_button_pane_cp08

0x5276,	// (0x00042835) cell_fshwr2_syb_bg_pane

0xf499,	// (0x0004ca58) cell_fshwr2_syb_bg_pane_g1

0xe590,	// (0x0004bb4f) cell_fshwr2_syb_bg_pane_t1

0x482f,	// (0x00041dee) main_tmo_pane

0xc0f5,	// (0x000496b4) uni_indicator_pane_g1_ParamLimits

0xc10a,	// (0x000496c9) uni_indicator_pane_g2_ParamLimits

0xc120,	// (0x000496df) uni_indicator_pane_g3_ParamLimits

0x673f,	// (0x00043cfe) uni_indicator_pane_g4_ParamLimits

0x673f,	// (0x00043cfe) uni_indicator_pane_g4

0x6753,	// (0x00043d12) uni_indicator_pane_g5_ParamLimits

0x6753,	// (0x00043d12) uni_indicator_pane_g5

0x6773,	// (0x00043d32) uni_indicator_pane_g6_ParamLimits

0x6773,	// (0x00043d32) uni_indicator_pane_g6

0xf937,	// (0x0004cef6) uni_indicator_pane_g_ParamLimits

0xd5e4,	// (0x0004aba3) popup_tmo_note_window_ParamLimits

0xd5e4,	// (0x0004aba3) popup_tmo_note_window

0x3ff8,	// (0x000415b7) fshwr2_bg_pane

0xe56e,	// (0x0004bb2d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe56e,	// (0x0004bb2d) fshwr2_func_candi_cell_pane_g2

0x0001,

0x042c,	// (0x0003d9eb) fshwr2_func_candi_cell_pane_g_ParamLimits

0x042c,	// (0x0003d9eb) fshwr2_func_candi_cell_pane_g

0x7560,	// (0x00044b1f) bg_popup_window_pane_cp01

0xe59f,	// (0x0004bb5e) bg_popup_window_pane_g1_cp01

0xe5a8,	// (0x0004bb67) bg_popup_window_pane_cp22_ParamLimits

0xe5a8,	// (0x0004bb67) bg_popup_window_pane_cp22

0xe5b6,	// (0x0004bb75) listscroll_tmo_link_pane_ParamLimits

0xe5b6,	// (0x0004bb75) listscroll_tmo_link_pane

0xe5f6,	// (0x0004bbb5) popup_tmo_note_window_g1_ParamLimits

0xe5f6,	// (0x0004bbb5) popup_tmo_note_window_g1

0xe603,	// (0x0004bbc2) tmo_note_info_pane_ParamLimits

0xe603,	// (0x0004bbc2) tmo_note_info_pane

0xf4a1,	// (0x0004ca60) list_tmo_note_info_pane_g1_ParamLimits

0xf4a1,	// (0x0004ca60) list_tmo_note_info_pane_g1

0xe61d,	// (0x0004bbdc) list_tmo_note_info_pane_g2_ParamLimits

0xe61d,	// (0x0004bbdc) list_tmo_note_info_pane_g2

0x0001,

0x0431,	// (0x0003d9f0) list_tmo_note_info_pane_g_ParamLimits

0x0431,	// (0x0003d9f0) list_tmo_note_info_pane_g

0xe639,	// (0x0004bbf8) list_tmo_note_info_text_pane_ParamLimits

0xe639,	// (0x0004bbf8) list_tmo_note_info_text_pane

0xe67b,	// (0x0004bc3a) list_tmo_link_pane

0xe688,	// (0x0004bc47) scroll_pane_cp20

0xe695,	// (0x0004bc54) list_single_tmo_link_pane_ParamLimits

0xe695,	// (0x0004bc54) list_single_tmo_link_pane

0xe6a5,	// (0x0004bc64) list_single_tmo_link_pane_t1

0xe6b3,	// (0x0004bc72) list_tmo_note_info_text_pane_t1_ParamLimits

0xe6b3,	// (0x0004bc72) list_tmo_note_info_text_pane_t1

0xab4a,	// (0x00048109) aid_size_touch_scroll_bar_cp01_ParamLimits

0xab4a,	// (0x00048109) aid_size_touch_scroll_bar_cp01

0xaa2b,	// (0x00047fea) aid_size_touch_slider_marker

0x87f4,	// (0x00045db3) popup_settings_window_ParamLimits

0x87f4,	// (0x00045db3) popup_settings_window

0xaef3,	// (0x000484b2) popup_candi_list_indi_window

0x55e2,	// (0x00042ba1) aid_touch_navi_pane_ParamLimits

0x9cc7,	// (0x00047286) rs_clock_indi_pane

0x9cd0,	// (0x0004728f) sctrl_sk_bottom_pane_ParamLimits

0x9ce1,	// (0x000472a0) sctrl_sk_top_pane_ParamLimits

0x9de8,	// (0x000473a7) popup_fep_tooltip_window

0xe262,	// (0x0004b821) aid_size_cell_widget_grid_ParamLimits

0xf1a9,	// (0x0004c768) cell_ai5_widget_pane_g1_ParamLimits

0xf1a9,	// (0x0004c768) cell_ai5_widget_pane_g1

0xf26a,	// (0x0004c829) cell_ai5_widget_pane_g6_ParamLimits

0xf276,	// (0x0004c835) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfd21,	// (0x0004d2e0) cell_ai5_widget_pane_g_ParamLimits

0xfd21,	// (0x0004d2e0) cell_ai5_widget_pane_g

0xf37a,	// (0x0004c939) cell_ai5_widget_pane_t10_ParamLimits

0xf37a,	// (0x0004c939) cell_ai5_widget_pane_t10

0xf390,	// (0x0004c94f) grid_ai5_widget_pane_ParamLimits

0xe319,	// (0x0004b8d8) cell_contacts_ai5_widget_pane_ParamLimits

0xe319,	// (0x0004b8d8) cell_contacts_ai5_widget_pane

0xe494,	// (0x0004ba53) popup_discreet_window_t3_ParamLimits

0xe494,	// (0x0004ba53) popup_discreet_window_t3

0xe4ed,	// (0x0004baac) popup_fshwr2_char_preview_window_ParamLimits

0xe4ed,	// (0x0004baac) popup_fshwr2_char_preview_window

0xf4b8,	// (0x0004ca77) tmo_note_info_pane_t1

0xf4cd,	// (0x0004ca8c) tmo_note_info_pane_t2

0xf4e6,	// (0x0004caa5) tmo_note_info_pane_t3

0xe657,	// (0x0004bc16) tmo_note_info_pane_t4

0xe669,	// (0x0004bc28) tmo_note_info_pane_t5

0x0004,

0x0436,	// (0x0003d9f5) tmo_note_info_pane_t

0xe67b,	// (0x0004bc3a) list_tmo_link_pane_ParamLimits

0xe688,	// (0x0004bc47) scroll_pane_cp20_ParamLimits

0x3ff8,	// (0x000415b7) bg_popup_fep_char_preview_window_cp01

0xe6cc,	// (0x0004bc8b) popup_fshwr2_char_preview_window_t1

0xe6da,	// (0x0004bc99) popup_candi_list_indi_window_g1

0xe6e3,	// (0x0004bca2) bg_cell_contacts_ai5_widget_pane

0xe6ef,	// (0x0004bcae) cell_contacts_ai5_widget_pane_g1

0xe703,	// (0x0004bcc2) cell_contacts_ai5_widget_pane_g2

0xe712,	// (0x0004bcd1) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0441,	// (0x0003da00) cell_contacts_ai5_widget_pane_g

0xe725,	// (0x0004bce4) cell_contacts_ai5_widget_pane_t1

0x482f,	// (0x00041dee) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe79f,	// (0x0004bd5e) settings_container_pane

0x5276,	// (0x00042835) listscroll_set_pane_copy1

0x6f50,	// (0x0004450f) scroll_pane_cp121_copy1

0xe7ab,	// (0x0004bd6a) set_content_pane_copy1

0xe7b3,	// (0x0004bd72) aid_height_set_list_copy1_ParamLimits

0xe7b3,	// (0x0004bd72) aid_height_set_list_copy1

0x5ed9,	// (0x00043498) aid_size_parent_copy1_ParamLimits

0x5ed9,	// (0x00043498) aid_size_parent_copy1

0xe7bf,	// (0x0004bd7e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe7bf,	// (0x0004bd7e) button_value_adjust_pane_cp6_copy1

0x4986,	// (0x00041f45) list_highlight_pane_cp2_copy1_ParamLimits

0x4986,	// (0x00041f45) list_highlight_pane_cp2_copy1

0xe7d3,	// (0x0004bd92) list_set_pane_copy1_ParamLimits

0xe7d3,	// (0x0004bd92) list_set_pane_copy1

0xe73a,	// (0x0004bcf9) main_pane_set_t1_copy1_ParamLimits

0xe73a,	// (0x0004bcf9) main_pane_set_t1_copy1

0xe774,	// (0x0004bd33) main_pane_set_t2_copy1_ParamLimits

0xe774,	// (0x0004bd33) main_pane_set_t2_copy1

0xe880,	// (0x0004be3f) main_pane_set_t3_copy1

0xe88e,	// (0x0004be4d) main_pane_set_t4_copy1

0xe793,	// (0x0004bd52) set_content_pane_g1_copy1_ParamLimits

0xe793,	// (0x0004bd52) set_content_pane_g1_copy1

0xe89c,	// (0x0004be5b) setting_code_pane_copy1

0xe8a6,	// (0x0004be65) setting_slider_graphic_pane_copy1

0xe8a6,	// (0x0004be65) setting_slider_pane_copy1

0xe8a6,	// (0x0004be65) setting_text_pane_copy1

0xe8b0,	// (0x0004be6f) setting_volume_pane_copy1

0xe8b9,	// (0x0004be78) settings_code_pane_cp2_copy1

0xe8c1,	// (0x0004be80) settings_code_pane_cp_copy1_ParamLimits

0xe8c1,	// (0x0004be80) settings_code_pane_cp_copy1

0xe8d5,	// (0x0004be94) volume_set_pane_copy1

0xe8dd,	// (0x0004be9c) volume_set_pane_g10_copy1

0xe8e5,	// (0x0004bea4) volume_set_pane_g1_copy1

0xe8ed,	// (0x0004beac) volume_set_pane_g2_copy1

0xe8f5,	// (0x0004beb4) volume_set_pane_g3_copy1

0xe8fd,	// (0x0004bebc) volume_set_pane_g4_copy1

0xe905,	// (0x0004bec4) volume_set_pane_g5_copy1

0xe90d,	// (0x0004becc) volume_set_pane_g6_copy1

0xe915,	// (0x0004bed4) volume_set_pane_g7_copy1

0xe91d,	// (0x0004bedc) volume_set_pane_g8_copy1

0xe925,	// (0x0004bee4) volume_set_pane_g9_copy1

0x4068,	// (0x00041627) bg_set_opt_pane_cp_copy1_ParamLimits

0x4068,	// (0x00041627) bg_set_opt_pane_cp_copy1

0xe92d,	// (0x0004beec) setting_slider_pane_t1_copy1_ParamLimits

0xe92d,	// (0x0004beec) setting_slider_pane_t1_copy1

0xe94b,	// (0x0004bf0a) setting_slider_pane_t2_copy1_ParamLimits

0xe94b,	// (0x0004bf0a) setting_slider_pane_t2_copy1

0xe965,	// (0x0004bf24) setting_slider_pane_t3_copy1_ParamLimits

0xe965,	// (0x0004bf24) setting_slider_pane_t3_copy1

0xe97d,	// (0x0004bf3c) slider_set_pane_copy1_ParamLimits

0xe97d,	// (0x0004bf3c) slider_set_pane_copy1

0x4896,	// (0x00041e55) set_opt_bg_pane_g1_copy2

0x489e,	// (0x00041e5d) set_opt_bg_pane_g2_copy2

0xe993,	// (0x0004bf52) set_opt_bg_pane_g3_copy2

0x48ae,	// (0x00041e6d) set_opt_bg_pane_g4_copy2

0x48b6,	// (0x00041e75) set_opt_bg_pane_g5_copy2

0x48be,	// (0x00041e7d) set_opt_bg_pane_g6_copy2

0xe99d,	// (0x0004bf5c) set_opt_bg_pane_g7_copy2

0xe9a5,	// (0x0004bf64) set_opt_bg_pane_g8_copy2

0xe9af,	// (0x0004bf6e) set_opt_bg_pane_g9_copy2

0xa502,	// (0x00047ac1) aid_size_touch_slider_mark_copy1_ParamLimits

0xa502,	// (0x00047ac1) aid_size_touch_slider_mark_copy1

0xe9b9,	// (0x0004bf78) slider_set_pane_g1_copy1

0xa516,	// (0x00047ad5) slider_set_pane_g2_copy1

0x96b2,	// (0x00046c71) slider_set_pane_g3_copy1_ParamLimits

0x96b2,	// (0x00046c71) slider_set_pane_g3_copy1

0x96c6,	// (0x00046c85) slider_set_pane_g4_copy1_ParamLimits

0x96c6,	// (0x00046c85) slider_set_pane_g4_copy1

0x96de,	// (0x00046c9d) slider_set_pane_g5_copy1_ParamLimits

0x96de,	// (0x00046c9d) slider_set_pane_g5_copy1

0x96b2,	// (0x00046c71) slider_set_pane_g6_copy1_ParamLimits

0x96b2,	// (0x00046c71) slider_set_pane_g6_copy1

0xa51e,	// (0x00047add) slider_set_pane_g7_copy1_ParamLimits

0xa51e,	// (0x00047add) slider_set_pane_g7_copy1

0x400c,	// (0x000415cb) bg_set_opt_pane_cp2_copy1

0xe9c2,	// (0x0004bf81) setting_slider_graphic_pane_g1_copy1

0xe9cb,	// (0x0004bf8a) setting_slider_graphic_pane_t1_copy1

0xe9db,	// (0x0004bf9a) setting_slider_graphic_pane_t2_copy1

0xe9eb,	// (0x0004bfaa) slider_set_pane_cp_copy1

0xe9fb,	// (0x0004bfba) input_focus_pane_cp1_copy1

0xea04,	// (0x0004bfc3) list_set_text_pane_copy1

0xea0c,	// (0x0004bfcb) setting_text_pane_g1_copy1

0xb616,	// (0x00048bd5) set_text_pane_t1_copy1

0xe9fb,	// (0x0004bfba) input_focus_pane_cp2_copy1

0xea0c,	// (0x0004bfcb) setting_code_pane_g1_copy1

0xea15,	// (0x0004bfd4) setting_code_pane_t1_copy1

0xea23,	// (0x0004bfe2) list_set_graphic_pane_copy1

0x400c,	// (0x000415cb) bg_set_opt_pane_cp4_copy1

0x4f78,	// (0x00042537) list_set_graphic_pane_g1_copy1_ParamLimits

0x4f78,	// (0x00042537) list_set_graphic_pane_g1_copy1

0xea37,	// (0x0004bff6) list_set_graphic_pane_g2_copy1

0x4f90,	// (0x0004254f) list_set_graphic_pane_t1_copy1_ParamLimits

0x4f90,	// (0x0004254f) list_set_graphic_pane_t1_copy1

0x7560,	// (0x00044b1f) rs_clock_indi_pane_g1

0xea3f,	// (0x0004bffe) rs_clock_indi_pane_t1

0xea4d,	// (0x0004c00c) rs_indi_pane

0xea55,	// (0x0004c014) rs_indi_pane_g1

0xea5e,	// (0x0004c01d) rs_indi_pane_g2

0xea67,	// (0x0004c026) rs_indi_pane_g3

0x0002,

0x0448,	// (0x0003da07) rs_indi_pane_g

0x5276,	// (0x00042835) bg_popup_preview_window_pane_cp03

0xea70,	// (0x0004c02f) popup_fep_tooltip_window_t1

0xcd79,	// (0x0004a338) popup_note2_window_g2_ParamLimits

0xcd79,	// (0x0004a338) popup_note2_window_g2

0x0001,

0x021c,	// (0x0003d7db) popup_note2_window_g_ParamLimits

0x021c,	// (0x0003d7db) popup_note2_window_g

0xd267,	// (0x0004a826) bg_popup_sub_pane_cp11_ParamLimits

0xd274,	// (0x0004a833) cell_ai3_links_pane_g1_ParamLimits

0xd28b,	// (0x0004a84a) cell_ai3_links_pane_t1

0xb616,	// (0x00048bd5) set_text_pane_t1_copy1_ParamLimits

0x5185,	// (0x00042744) cell_graphic_popup_pane_cp2_ParamLimits

0x5185,	// (0x00042744) cell_graphic_popup_pane_cp2

0xea7e,	// (0x0004c03d) cell_graphic_popup_pane_g1_cp2

0x4584,	// (0x00041b43) cell_graphic_popup_pane_g2_cp2

0xea86,	// (0x0004c045) cell_graphic_popup_pane_g3_cp2

0xea8e,	// (0x0004c04d) cell_graphic_popup_pane_t2_cp2

0x4595,	// (0x00041b54) grid_highlight_pane_cp3_cp2

0x4b30,	// (0x000420ef) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x482f,	// (0x00041dee) main_tmo_pane_ParamLimits

0xd5d8,	// (0x0004ab97) popup_tmo_big_image_note_window

0xf199,	// (0x0004c758) cell_ai5_widget_list_pane

0xf1a1,	// (0x0004c760) cell_ai5_widget_lrg_icon_pane

0xf4b8,	// (0x0004ca77) tmo_note_info_pane_t1_ParamLimits

0xf4cd,	// (0x0004ca8c) tmo_note_info_pane_t2_ParamLimits

0xf4e6,	// (0x0004caa5) tmo_note_info_pane_t3_ParamLimits

0xe657,	// (0x0004bc16) tmo_note_info_pane_t4_ParamLimits

0xe669,	// (0x0004bc28) tmo_note_info_pane_t5_ParamLimits

0x0436,	// (0x0003d9f5) tmo_note_info_pane_t_ParamLimits

0xe79f,	// (0x0004bd5e) settings_container_pane_ParamLimits

0xe9f3,	// (0x0004bfb2) indicator_popup_pane_cp5

0xe9f3,	// (0x0004bfb2) indicator_popup_pane_cp6

0xea23,	// (0x0004bfe2) list_set_graphic_pane_copy1_ParamLimits

0x3ff8,	// (0x000415b7) bg_popup_window_pane_cp23

0xea9c,	// (0x0004c05b) popup_tmo_big_image_note_window_g1

0xeaa7,	// (0x0004c066) popup_tmo_big_image_note_window_t1

0xeab7,	// (0x0004c076) popup_tmo_big_image_note_window_t2

0xeac7,	// (0x0004c086) popup_tmo_big_image_note_window_t3

0x0002,

0x044f,	// (0x0003da0e) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0004caba) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0004cac2) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0004cad0) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0004cad0) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0004cae9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0004cae9) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0004caf6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0004caf6) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0004cb0e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0004cb0e) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0456,	// (0x0003da15) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0456,	// (0x0003da15) cell_ai5_widget_list_row_pane_t

0x86b9,	// (0x00045c78) main_fep_vtchi_ss_pane

0xead7,	// (0x0004c096) popup_fep_char_pre_window

0xeadf,	// (0x0004c09e) popup_fep_ituss_window

0xeb00,	// (0x0004c0bf) popup_fep_vkbss_window

0xeb1f,	// (0x0004c0de) grid_vkbss_keypad_pane_ParamLimits

0xeb1f,	// (0x0004c0de) grid_vkbss_keypad_pane

0xeb2f,	// (0x0004c0ee) ituss_keypad_pane

0xeb47,	// (0x0004c106) aid_vkbss_key_offset_ParamLimits

0xeb47,	// (0x0004c106) aid_vkbss_key_offset

0xeb53,	// (0x0004c112) cell_vkbss_key_pane_ParamLimits

0xeb53,	// (0x0004c112) cell_vkbss_key_pane

0xeb69,	// (0x0004c128) bg_cell_vkbss_key_g1_ParamLimits

0xeb69,	// (0x0004c128) bg_cell_vkbss_key_g1

0xeb75,	// (0x0004c134) cell_vkbss_key_3p_pane_ParamLimits

0xeb75,	// (0x0004c134) cell_vkbss_key_3p_pane

0xeb8f,	// (0x0004c14e) cell_vkbss_key_g1_ParamLimits

0xeb8f,	// (0x0004c14e) cell_vkbss_key_g1

0xeba9,	// (0x0004c168) cell_vkbss_key_t1_ParamLimits

0xeba9,	// (0x0004c168) cell_vkbss_key_t1

0xebd4,	// (0x0004c193) cell_ituss_key_pane_ParamLimits

0xebd4,	// (0x0004c193) cell_ituss_key_pane

0xebe4,	// (0x0004c1a3) bg_cell_ituss_key_g1_ParamLimits

0xebe4,	// (0x0004c1a3) bg_cell_ituss_key_g1

0xebf0,	// (0x0004c1af) cell_ituss_key_pane_g1_ParamLimits

0xebf0,	// (0x0004c1af) cell_ituss_key_pane_g1

0xebfc,	// (0x0004c1bb) cell_ituss_key_pane_g2_ParamLimits

0xebfc,	// (0x0004c1bb) cell_ituss_key_pane_g2

0x0001,

0x045b,	// (0x0003da1a) cell_ituss_key_pane_g_ParamLimits

0x045b,	// (0x0003da1a) cell_ituss_key_pane_g

0xec15,	// (0x0004c1d4) cell_ituss_key_t1_ParamLimits

0xec15,	// (0x0004c1d4) cell_ituss_key_t1

0xec43,	// (0x0004c202) cell_ituss_key_t2_ParamLimits

0xec43,	// (0x0004c202) cell_ituss_key_t2

0xec74,	// (0x0004c233) cell_ituss_key_t3_ParamLimits

0xec74,	// (0x0004c233) cell_ituss_key_t3

0xeca5,	// (0x0004c264) cell_ituss_key_t4_ParamLimits

0xeca5,	// (0x0004c264) cell_ituss_key_t4

0x0003,

0x0460,	// (0x0003da1f) cell_ituss_key_t_ParamLimits

0x0460,	// (0x0003da1f) cell_ituss_key_t

0xecd6,	// (0x0004c295) cell_vkbss_key_3p_pane_g1

0xecde,	// (0x0004c29d) cell_vkbss_key_3p_pane_g2

0xece6,	// (0x0004c2a5) cell_vkbss_key_3p_pane_g3

0x0002,

0x0469,	// (0x0003da28) cell_vkbss_key_3p_pane_g

0x3ff8,	// (0x000415b7) bg_popup_fep_char_preview_window_cp02

0xecee,	// (0x0004c2ad) popup_fep_char_pre_window_t1

0xf18f,	// (0x0004c74e) main_ai5_sk_pane

0xe6e3,	// (0x0004bca2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe6ef,	// (0x0004bcae) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe703,	// (0x0004bcc2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe712,	// (0x0004bcd1) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0441,	// (0x0003da00) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe725,	// (0x0004bce4) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x482f,	// (0x00041dee) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0004cb20) main_ai5_sk_pane_g1

0x5ba1,	// (0x00043160) popup_query_code_window_g1

0xeaf5,	// (0x0004c0b4) popup_fep_vkb_icf_pane

0xeb09,	// (0x0004c0c8) popup_fep_vtchi_icf_pane

0x482f,	// (0x00041dee) bg_icf_pane

0xed0c,	// (0x0004c2cb) list_vkb_icf_pane

0x482f,	// (0x00041dee) bg_icf_pane_cp01

0xd597,	// (0x0004ab56) vtchi_icf_list_pane

0xed2c,	// (0x0004c2eb) list_vkb_icf_pane_t1_ParamLimits

0xed2c,	// (0x0004c2eb) list_vkb_icf_pane_t1

0xed46,	// (0x0004c305) vtchi_icf_list_pane_t1_ParamLimits

0xed46,	// (0x0004c305) vtchi_icf_list_pane_t1

0xeadf,	// (0x0004c09e) popup_fep_ituss_window_ParamLimits

0xeb09,	// (0x0004c0c8) popup_fep_vtchi_icf_pane_ParamLimits

0xeb2f,	// (0x0004c0ee) ituss_keypad_pane_ParamLimits

0xeb3e,	// (0x0004c0fd) ituss_sks_pane

0x482f,	// (0x00041dee) bg_icf_pane_ParamLimits

0xecfd,	// (0x0004c2bc) icf_edit_indi_pane_ParamLimits

0xecfd,	// (0x0004c2bc) icf_edit_indi_pane

0xed0c,	// (0x0004c2cb) list_vkb_icf_pane_ParamLimits

0x482f,	// (0x00041dee) bg_icf_pane_cp01_ParamLimits

0xed18,	// (0x0004c2d7) icf_edit_indi_pane_cp01_ParamLimits

0xed18,	// (0x0004c2d7) icf_edit_indi_pane_cp01

0xed24,	// (0x0004c2e3) vtchi_query_pane

0x77f5,	// (0x00044db4) icf_edit_indi_pane_g1_ParamLimits

0x77f5,	// (0x00044db4) icf_edit_indi_pane_g1

0xed6b,	// (0x0004c32a) icf_edit_indi_pane_g2_ParamLimits

0xed6b,	// (0x0004c32a) icf_edit_indi_pane_g2

0x0001,

0xfd5c,	// (0x0004d31b) icf_edit_indi_pane_g_ParamLimits

0xfd5c,	// (0x0004d31b) icf_edit_indi_pane_g

0xf1fc,	// (0x0004c7bb) icf_edit_indi_pane_t1

0xf20a,	// (0x0004c7c9) bg_input_focus_pane_cp042

0x4768,	// (0x00041d27) vtchi_button_pane

0xf213,	// (0x0004c7d2) vtchi_query_pane_t1

0xf221,	// (0x0004c7e0) vtchi_query_pane_t2

0xf22f,	// (0x0004c7ee) vtchi_query_pane_t3

0x0002,

0xfd61,	// (0x0004d320) vtchi_query_pane_t

0x3ff8,	// (0x000415b7) bg_button_pane_cp13

0xf23d,	// (0x0004c7fc) vtchi_button_pane_g1

0xdae2,	// (0x0004b0a1) ituss_sks_pane_g1

0xf245,	// (0x0004c804) ituss_sks_pane_g2

0x0001,

0xfd68,	// (0x0004d327) ituss_sks_pane_g

0xf24e,	// (0x0004c80d) ituss_sks_pane_t1

0xf25c,	// (0x0004c81b) ituss_sks_pane_t2

0x0001,

0xfd6d,	// (0x0004d32c) ituss_sks_pane_t

0x722d,	// (0x000447ec) indicator_nsta_pane_cp_g1

0x7236,	// (0x000447f5) indicator_nsta_pane_cp_g2

0x723e,	// (0x000447fd) indicator_nsta_pane_cp_g3

0x7246,	// (0x00044805) indicator_nsta_pane_cp_g4

0x724e,	// (0x0004480d) indicator_nsta_pane_cp_g5

0x7256,	// (0x00044815) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x0004d080) indicator_nsta_pane_cp_g

0xefb4,	// (0x0004c573) cell_graphic2_pane_t2_ParamLimits

0xefb4,	// (0x0004c573) cell_graphic2_pane_t2

0x0001,

0xfcc6,	// (0x0004d285) cell_graphic2_pane_t_ParamLimits

0xfcc6,	// (0x0004d285) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
