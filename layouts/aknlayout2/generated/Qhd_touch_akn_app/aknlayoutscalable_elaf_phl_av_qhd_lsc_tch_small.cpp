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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x000177dc };

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
0x2e96,	// (0x0001a672) Screen

0x2ea2,	// (0x0001a67e) application_window_ParamLimits

0x2ea2,	// (0x0001a67e) application_window

0xb49b,	// (0x00022c77) screen_g1

0x7bf5,	// (0x0001f3d1) area_bottom_pane_ParamLimits

0x7bf5,	// (0x0001f3d1) area_bottom_pane

0x4955,	// (0x0001c131) area_top_pane_ParamLimits

0x4955,	// (0x0001c131) area_top_pane

0x49e9,	// (0x0001c1c5) main_pane_ParamLimits

0x49e9,	// (0x0001c1c5) main_pane

0xb4a5,	// (0x00022c81) misc_graphics

0x8ca7,	// (0x00020483) battery_pane_ParamLimits

0x8ca7,	// (0x00020483) battery_pane

0xd1f5,	// (0x000249d1) bg_status_flat_pane_g8

0xd1fd,	// (0x000249d9) bg_status_flat_pane_g9

0xc956,	// (0x00024132) context_pane_ParamLimits

0xc956,	// (0x00024132) context_pane

0x8e12,	// (0x000205ee) navi_pane_ParamLimits

0x8e12,	// (0x000205ee) navi_pane

0x8e89,	// (0x00020665) signal_pane_ParamLimits

0x8e89,	// (0x00020665) signal_pane

0x0008,

0xf8ad,	// (0x00027089) bg_status_flat_pane_g

0x8f19,	// (0x000206f5) status_pane_g1_ParamLimits

0x8f19,	// (0x000206f5) status_pane_g1

0x8f2f,	// (0x0002070b) status_pane_g2_ParamLimits

0x8f2f,	// (0x0002070b) status_pane_g2

0xc9bb,	// (0x00024197) status_pane_g3_ParamLimits

0xc9bb,	// (0x00024197) status_pane_g3

0x0004,

0xf7e0,	// (0x00026fbc) status_pane_g_ParamLimits

0xf7e0,	// (0x00026fbc) status_pane_g

0x8f3b,	// (0x00020717) title_pane_ParamLimits

0x8f3b,	// (0x00020717) title_pane

0x8f9c,	// (0x00020778) uni_indicator_pane_ParamLimits

0x8f9c,	// (0x00020778) uni_indicator_pane

0xc749,	// (0x00023f25) bg_list_pane_ParamLimits

0xc749,	// (0x00023f25) bg_list_pane

0x8583,	// (0x0001fd5f) find_pane

0x858b,	// (0x0001fd67) listscroll_app_pane_ParamLimits

0x858b,	// (0x0001fd67) listscroll_app_pane

0xc769,	// (0x00023f45) listscroll_form_pane

0x8597,	// (0x0001fd73) listscroll_gen_pane_ParamLimits

0x8597,	// (0x0001fd73) listscroll_gen_pane

0xc769,	// (0x00023f45) listscroll_set_pane

0xd83f,	// (0x0002501b) main_idle_act_pane

0xc527,	// (0x00023d03) main_idle_trad_pane

0xc527,	// (0x00023d03) main_list_empty_pane

0xbc5a,	// (0x00023436) main_midp_pane

0xc783,	// (0x00023f5f) main_pane_g1_ParamLimits

0xc783,	// (0x00023f5f) main_pane_g1

0x85ab,	// (0x0001fd87) popup_ai_message_window_ParamLimits

0x85ab,	// (0x0001fd87) popup_ai_message_window

0x863c,	// (0x0001fe18) popup_fep_china_uni_window_ParamLimits

0x863c,	// (0x0001fe18) popup_fep_china_uni_window

0xc7b5,	// (0x00023f91) popup_fep_japan_candidate_window_ParamLimits

0xc7b5,	// (0x00023f91) popup_fep_japan_candidate_window

0xc7d5,	// (0x00023fb1) popup_fep_japan_predictive_window_ParamLimits

0xc7d5,	// (0x00023fb1) popup_fep_japan_predictive_window

0x8698,	// (0x0001fe74) popup_find_window

0x86b5,	// (0x0001fe91) popup_grid_graphic_window_ParamLimits

0x86b5,	// (0x0001fe91) popup_grid_graphic_window

0xc805,	// (0x00023fe1) popup_large_graphic_colour_window

0x874d,	// (0x0001ff29) popup_menu_window_ParamLimits

0x874d,	// (0x0001ff29) popup_menu_window

0x8907,	// (0x000200e3) popup_note_image_window

0x88cd,	// (0x000200a9) popup_note_wait_window_ParamLimits

0x88cd,	// (0x000200a9) popup_note_wait_window

0x891f,	// (0x000200fb) popup_note_window_ParamLimits

0x891f,	// (0x000200fb) popup_note_window

0x89c5,	// (0x000201a1) popup_query_code_window_ParamLimits

0x89c5,	// (0x000201a1) popup_query_code_window

0xc82b,	// (0x00024007) popup_query_data_code_window_ParamLimits

0xc82b,	// (0x00024007) popup_query_data_code_window

0x89ff,	// (0x000201db) popup_query_data_window_ParamLimits

0x89ff,	// (0x000201db) popup_query_data_window

0x8a75,	// (0x00020251) popup_query_sat_info_window_ParamLimits

0x8a75,	// (0x00020251) popup_query_sat_info_window

0x8b0c,	// (0x000202e8) popup_snote_single_graphic_window_ParamLimits

0x8b0c,	// (0x000202e8) popup_snote_single_graphic_window

0x8b0c,	// (0x000202e8) popup_snote_single_text_window_ParamLimits

0x8b0c,	// (0x000202e8) popup_snote_single_text_window

0xc848,	// (0x00024024) popup_sub_window_general

0xc890,	// (0x0002406c) popup_window_general_ParamLimits

0xc890,	// (0x0002406c) popup_window_general

0xc8a5,	// (0x00024081) power_save_pane

0x841c,	// (0x0001fbf8) control_pane_g1_ParamLimits

0x841c,	// (0x0001fbf8) control_pane_g1

0x5171,	// (0x0001c94d) control_pane_g2_ParamLimits

0x5171,	// (0x0001c94d) control_pane_g2

0xc723,	// (0x00023eff) control_pane_g3_ParamLimits

0xc723,	// (0x00023eff) control_pane_g3

0x0007,

0xf7c8,	// (0x00026fa4) control_pane_g_ParamLimits

0xf7c8,	// (0x00026fa4) control_pane_g

0x847a,	// (0x0001fc56) control_pane_t1_ParamLimits

0x847a,	// (0x0001fc56) control_pane_t1

0x84d8,	// (0x0001fcb4) control_pane_t2_ParamLimits

0x84d8,	// (0x0001fcb4) control_pane_t2

0x0002,

0xf7d9,	// (0x00026fb5) control_pane_t_ParamLimits

0xf7d9,	// (0x00026fb5) control_pane_t

0xc644,	// (0x00023e20) navi_navi_volume_pane_cp1

0xc64d,	// (0x00023e29) status_small_icon_pane

0xc655,	// (0x00023e31) status_small_pane_g1_ParamLimits

0xc655,	// (0x00023e31) status_small_pane_g1

0xc689,	// (0x00023e65) status_small_pane_g2_ParamLimits

0xc689,	// (0x00023e65) status_small_pane_g2

0xc695,	// (0x00023e71) status_small_pane_g3_ParamLimits

0xc695,	// (0x00023e71) status_small_pane_g3

0xc6a1,	// (0x00023e7d) status_small_pane_g4_ParamLimits

0xc6a1,	// (0x00023e7d) status_small_pane_g4

0xc6ad,	// (0x00023e89) status_small_pane_g5_ParamLimits

0xc6ad,	// (0x00023e89) status_small_pane_g5

0xc6bc,	// (0x00023e98) status_small_pane_g6_ParamLimits

0xc6bc,	// (0x00023e98) status_small_pane_g6

0x0007,

0xf7b7,	// (0x00026f93) status_small_pane_g_ParamLimits

0xf7b7,	// (0x00026f93) status_small_pane_g

0xc6ec,	// (0x00023ec8) status_small_pane_t1

0xc70f,	// (0x00023eeb) status_small_wait_pane_ParamLimits

0xc70f,	// (0x00023eeb) status_small_wait_pane

0x82a3,	// (0x0001fa7f) aid_levels_signal_ParamLimits

0x82a3,	// (0x0001fa7f) aid_levels_signal

0x82bb,	// (0x0001fa97) signal_pane_g1_ParamLimits

0x82bb,	// (0x0001fa97) signal_pane_g1

0x82d6,	// (0x0001fab2) signal_pane_g2_ParamLimits

0x82d6,	// (0x0001fab2) signal_pane_g2

0x0001,

0xf74c,	// (0x00026f28) signal_pane_g_ParamLimits

0xf74c,	// (0x00026f28) signal_pane_g

0xc08d,	// (0x00023869) context_pane_g1

0x7d6e,	// (0x0001f54a) title_pane_g1

0x7da3,	// (0x0001f57f) title_pane_t1

0xb4bb,	// (0x00022c97) title_pane_t2

0xb4e1,	// (0x00022cbd) title_pane_t3

0x0002,

0xf59b,	// (0x00026d77) title_pane_t

0x8fc4,	// (0x000207a0) aid_levels_battery_ParamLimits

0x8fc4,	// (0x000207a0) aid_levels_battery

0x8fe0,	// (0x000207bc) battery_pane_g1_ParamLimits

0x8fe0,	// (0x000207bc) battery_pane_g1

0x8ffd,	// (0x000207d9) battery_pane_g2_ParamLimits

0x8ffd,	// (0x000207d9) battery_pane_g2

0x0001,

0xf7eb,	// (0x00026fc7) battery_pane_g_ParamLimits

0xf7eb,	// (0x00026fc7) battery_pane_g

0x93bf,	// (0x00020b9b) uni_indicator_pane_g1

0x93d4,	// (0x00020bb0) uni_indicator_pane_g2

0x93e9,	// (0x00020bc5) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x00027131) uni_indicator_pane_g

0xc399,	// (0x00023b75) navi_icon_pane_ParamLimits

0xc399,	// (0x00023b75) navi_icon_pane

0xc2e2,	// (0x00023abe) navi_midp_pane

0xc3b5,	// (0x00023b91) navi_navi_pane

0xc3bf,	// (0x00023b9b) navi_text_pane_ParamLimits

0xc3bf,	// (0x00023b9b) navi_text_pane

0xb49b,	// (0x00022c77) status_small_wait_pane_g1

0xb7c8,	// (0x00022fa4) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x0002712c) status_small_wait_pane_g

0xd786,	// (0x00024f62) navi_navi_icon_text_pane

0xd78e,	// (0x00024f6a) navi_navi_pane_g1_ParamLimits

0xd78e,	// (0x00024f6a) navi_navi_pane_g1

0xd7a0,	// (0x00024f7c) navi_navi_pane_g2_ParamLimits

0xd7a0,	// (0x00024f7c) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x000270fa) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x000270fa) navi_navi_pane_g

0xd7b2,	// (0x00024f8e) navi_navi_tabs_pane

0xd7bb,	// (0x00024f97) navi_navi_text_pane

0xd786,	// (0x00024f62) navi_navi_volume_pane

0x9380,	// (0x00020b5c) navi_text_pane_t1

0x9374,	// (0x00020b50) navi_icon_pane_g1

0xd6c7,	// (0x00024ea3) navi_navi_text_pane_t1

0x9363,	// (0x00020b3f) navi_navi_volume_pane_g1

0x936b,	// (0x00020b47) volume_small_pane

0x92bf,	// (0x00020a9b) navi_navi_icon_text_pane_g1

0x92c7,	// (0x00020aa3) navi_navi_icon_text_pane_t1

0xc3b5,	// (0x00023b91) navi_tabs_2_long_pane

0xc3b5,	// (0x00023b91) navi_tabs_2_pane

0xc3b5,	// (0x00023b91) navi_tabs_3_long_pane

0xc3b5,	// (0x00023b91) navi_tabs_3_pane

0xc3b5,	// (0x00023b91) navi_tabs_4_pane

0x929f,	// (0x00020a7b) tabs_2_active_pane_ParamLimits

0x929f,	// (0x00020a7b) tabs_2_active_pane

0x92af,	// (0x00020a8b) tabs_2_passive_pane_ParamLimits

0x92af,	// (0x00020a8b) tabs_2_passive_pane

0x926d,	// (0x00020a49) tabs_3_active_pane_ParamLimits

0x926d,	// (0x00020a49) tabs_3_active_pane

0x927d,	// (0x00020a59) tabs_3_passive_pane_ParamLimits

0x927d,	// (0x00020a59) tabs_3_passive_pane

0x928e,	// (0x00020a6a) tabs_3_passive_pane_cp_ParamLimits

0x928e,	// (0x00020a6a) tabs_3_passive_pane_cp

0x9229,	// (0x00020a05) tabs_4_active_pane_ParamLimits

0x9229,	// (0x00020a05) tabs_4_active_pane

0x923a,	// (0x00020a16) tabs_4_passive_pane_ParamLimits

0x923a,	// (0x00020a16) tabs_4_passive_pane

0x924b,	// (0x00020a27) tabs_4_passive_pane_cp_ParamLimits

0x924b,	// (0x00020a27) tabs_4_passive_pane_cp

0x925c,	// (0x00020a38) tabs_4_passive_pane_cp2_ParamLimits

0x925c,	// (0x00020a38) tabs_4_passive_pane_cp2

0x9209,	// (0x000209e5) tabs_2_long_active_pane_ParamLimits

0x9209,	// (0x000209e5) tabs_2_long_active_pane

0x9219,	// (0x000209f5) tabs_2_long_passive_pane_ParamLimits

0x9219,	// (0x000209f5) tabs_2_long_passive_pane

0x91d6,	// (0x000209b2) tabs_3_long_active_pane_ParamLimits

0x91d6,	// (0x000209b2) tabs_3_long_active_pane

0x91e7,	// (0x000209c3) tabs_3_long_passive_pane_ParamLimits

0x91e7,	// (0x000209c3) tabs_3_long_passive_pane

0x91f8,	// (0x000209d4) tabs_3_long_passive_pane_cp_ParamLimits

0x91f8,	// (0x000209d4) tabs_3_long_passive_pane_cp

0x53c0,	// (0x0001cb9c) volume_small_pane_g1

0x9185,	// (0x00020961) volume_small_pane_g2

0x918e,	// (0x0002096a) volume_small_pane_g3

0x9197,	// (0x00020973) volume_small_pane_g4

0x91a0,	// (0x0002097c) volume_small_pane_g5

0x91a9,	// (0x00020985) volume_small_pane_g6

0x91b2,	// (0x0002098e) volume_small_pane_g7

0x91bb,	// (0x00020997) volume_small_pane_g8

0x91c4,	// (0x000209a0) volume_small_pane_g9

0x91cd,	// (0x000209a9) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x000270c6) volume_small_pane_g

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp2_ParamLimits

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp2

0x7e2f,	// (0x0001f60b) tabs_3_active_pane_g1

0x7e37,	// (0x0001f613) tabs_3_active_pane_t1

0xb4f3,	// (0x00022ccf) bg_passive_tab_pane_cp2_ParamLimits

0xb4f3,	// (0x00022ccf) bg_passive_tab_pane_cp2

0x7e2f,	// (0x0001f60b) tabs_3_passive_pane_g1

0x7e37,	// (0x0001f613) tabs_3_passive_pane_t1

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp3_ParamLimits

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp3

0x7e49,	// (0x0001f625) tabs_4_active_pane_g1

0x7e51,	// (0x0001f62d) tabs_4_active_pane_t1

0xb4f3,	// (0x00022ccf) bg_passive_tab_pane_cp3_ParamLimits

0xb4f3,	// (0x00022ccf) bg_passive_tab_pane_cp3

0x7e49,	// (0x0001f625) tabs_4_1_passive_pane_g1

0x7e51,	// (0x0001f62d) tabs_4_1_passive_pane_t1

0xbc5a,	// (0x00023436) list_highlight_pane_cp2

0x9472,	// (0x00020c4e) list_set_pane_ParamLimits

0x9472,	// (0x00020c4e) list_set_pane

0x950c,	// (0x00020ce8) main_pane_set_t1_ParamLimits

0x950c,	// (0x00020ce8) main_pane_set_t1

0x952c,	// (0x00020d08) main_pane_set_t2_ParamLimits

0x952c,	// (0x00020d08) main_pane_set_t2

0x9540,	// (0x00020d1c) main_pane_set_t3_ParamLimits

0x9540,	// (0x00020d1c) main_pane_set_t3

0x9552,	// (0x00020d2e) main_pane_set_t4_ParamLimits

0x9552,	// (0x00020d2e) main_pane_set_t4

0x0003,

0xf9ba,	// (0x00027196) main_pane_set_t_ParamLimits

0xf9ba,	// (0x00027196) main_pane_set_t

0x9564,	// (0x00020d40) setting_code_pane

0x956e,	// (0x00020d4a) setting_slider_graphic_pane

0x956e,	// (0x00020d4a) setting_slider_pane

0x956e,	// (0x00020d4a) setting_text_pane

0x956e,	// (0x00020d4a) setting_volume_pane

0x4c2e,	// (0x0001c40a) volume_set_pane

0xb501,	// (0x00022cdd) bg_set_opt_pane_cp

0x4c36,	// (0x0001c412) setting_slider_pane_t1

0x4c4f,	// (0x0001c42b) setting_slider_pane_t2

0x4c69,	// (0x0001c445) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00026d7e) setting_slider_pane_t

0x4c81,	// (0x0001c45d) slider_set_pane

0xb4a5,	// (0x00022c81) bg_set_opt_pane_cp2

0xb50f,	// (0x00022ceb) setting_slider_graphic_pane_g1

0x4c97,	// (0x0001c473) setting_slider_graphic_pane_t1

0x4ca7,	// (0x0001c483) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00026d85) setting_slider_graphic_pane_t

0x4cb7,	// (0x0001c493) slider_set_pane_cp

0xb4a5,	// (0x00022c81) input_focus_pane_cp1

0xdc31,	// (0x0002540d) list_set_text_pane

0xb49b,	// (0x00022c77) setting_text_pane_g1

0xb4a5,	// (0x00022c81) input_focus_pane_cp2

0xb49b,	// (0x00022c77) setting_code_pane_g1

0xb518,	// (0x00022cf4) setting_code_pane_t1

0x3839,	// (0x0001b015) set_text_pane_t1_ParamLimits

0x3839,	// (0x0001b015) set_text_pane_t1

0xbb69,	// (0x00023345) set_opt_bg_pane_g1

0xbb71,	// (0x0002334d) set_opt_bg_pane_g2

0xdc0b,	// (0x000253e7) set_opt_bg_pane_g3

0xbb81,	// (0x0002335d) set_opt_bg_pane_g4

0xbb89,	// (0x00023365) set_opt_bg_pane_g5

0xbb91,	// (0x0002336d) set_opt_bg_pane_g6

0xdc15,	// (0x000253f1) set_opt_bg_pane_g7

0xdc1d,	// (0x000253f9) set_opt_bg_pane_g8

0xdc27,	// (0x00025403) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x00027183) set_opt_bg_pane_g

0xdbfe,	// (0x000253da) slider_set_pane_g1

0x5588,	// (0x0001cd64) slider_set_pane_g2

0x0006,

0xf998,	// (0x00027174) slider_set_pane_g

0x5524,	// (0x0001cd00) volume_set_pane_g1

0x552c,	// (0x0001cd08) volume_set_pane_g2

0x5534,	// (0x0001cd10) volume_set_pane_g3

0x553c,	// (0x0001cd18) volume_set_pane_g4

0x5544,	// (0x0001cd20) volume_set_pane_g5

0x554c,	// (0x0001cd28) volume_set_pane_g6

0x5554,	// (0x0001cd30) volume_set_pane_g7

0x555c,	// (0x0001cd38) volume_set_pane_g8

0x5564,	// (0x0001cd40) volume_set_pane_g9

0x556c,	// (0x0001cd48) volume_set_pane_g10

0x0009,

0xf970,	// (0x0002714c) volume_set_pane_g

0x7e63,	// (0x0001f63f) indicator_pane_ParamLimits

0x7e63,	// (0x0001f63f) indicator_pane

0x7e8b,	// (0x0001f667) main_idle_pane_g2_ParamLimits

0x7e8b,	// (0x0001f667) main_idle_pane_g2

0x7ec3,	// (0x0001f69f) main_pane_idle_g1_ParamLimits

0x7ec3,	// (0x0001f69f) main_pane_idle_g1

0xb526,	// (0x00022d02) popup_clock_digital_analogue_window_ParamLimits

0xb526,	// (0x00022d02) popup_clock_digital_analogue_window

0x7eea,	// (0x0001f6c6) soft_indicator_pane_ParamLimits

0x7eea,	// (0x0001f6c6) soft_indicator_pane

0x7f04,	// (0x0001f6e0) wallpaper_pane_ParamLimits

0x7f04,	// (0x0001f6e0) wallpaper_pane

0xb49b,	// (0x00022c77) wallpaper_pane_g1

0x7f16,	// (0x0001f6f2) indicator_pane_g1_ParamLimits

0x7f16,	// (0x0001f6f2) indicator_pane_g1

0xdd73,	// (0x0002554f) navi_navi_icon_text_pane_srt_g1

0xb554,	// (0x00022d30) soft_indicator_pane_t1

0xb56e,	// (0x00022d4a) aid_ps_area_pane

0x7f2c,	// (0x0001f708) aid_ps_clock_pane

0xb57f,	// (0x00022d5b) aid_ps_indicator_pane

0xb58b,	// (0x00022d67) indicator_ps_pane_ParamLimits

0xb58b,	// (0x00022d67) indicator_ps_pane

0xb59a,	// (0x00022d76) power_save_pane_g1_ParamLimits

0xb59a,	// (0x00022d76) power_save_pane_g1

0xb5a6,	// (0x00022d82) power_save_pane_g2_ParamLimits

0xb5a6,	// (0x00022d82) power_save_pane_g2

0x4849,	// (0x0001c025) aid_navinavi_width_pane

0xb56e,	// (0x00022d4a) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00026d8a) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00026d8a) power_save_pane_g

0xb5b4,	// (0x00022d90) power_save_pane_t1_ParamLimits

0xb5b4,	// (0x00022d90) power_save_pane_t1

0x7f2c,	// (0x0001f708) aid_ps_clock_pane_ParamLimits

0xb57f,	// (0x00022d5b) aid_ps_indicator_pane_ParamLimits

0xb5c6,	// (0x00022da2) power_save_pane_t4_ParamLimits

0xb5c6,	// (0x00022da2) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00026d8f) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00026d8f) power_save_pane_t

0xb5f0,	// (0x00022dcc) power_save_t3_ParamLimits

0xb5f0,	// (0x00022dcc) power_save_t3

0xb5db,	// (0x00022db7) power_save_t2_ParamLimits

0xb5db,	// (0x00022db7) power_save_t2

0xb605,	// (0x00022de1) indicator_ps_pane_g1

0x7f3a,	// (0x0001f716) ai_gene_pane_ParamLimits

0x7f3a,	// (0x0001f716) ai_gene_pane

0x7f51,	// (0x0001f72d) ai_links_pane_ParamLimits

0x7f51,	// (0x0001f72d) ai_links_pane

0x7f69,	// (0x0001f745) indicator_pane_cp1_ParamLimits

0x7f69,	// (0x0001f745) indicator_pane_cp1

0x7f78,	// (0x0001f754) main_pane_idle_g1_cp_ParamLimits

0x7f78,	// (0x0001f754) main_pane_idle_g1_cp

0xb60e,	// (0x00022dea) popup_ai_links_title_window

0x7f90,	// (0x0001f76c) soft_indicator_pane_cp1_ParamLimits

0x7f90,	// (0x0001f76c) soft_indicator_pane_cp1

0xda52,	// (0x0002522e) ai_links_pane_g1

0xda5b,	// (0x00025237) grid_ai_links_pane

0x93b6,	// (0x00020b92) ai_gene_pane_1

0xda40,	// (0x0002521c) ai_gene_pane_2

0xda49,	// (0x00025225) list_highlight_pane_cp4

0x9392,	// (0x00020b6e) cell_ai_link_pane_ParamLimits

0x9392,	// (0x00020b6e) cell_ai_link_pane

0xda38,	// (0x00025214) cell_ai_link_pane_g1

0xb7c8,	// (0x00022fa4) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x00027127) cell_ai_link_pane_g

0xb4a5,	// (0x00022c81) grid_highlight_cp2

0xb4a5,	// (0x00022c81) bg_popup_sub_pane_cp1

0xb625,	// (0x00022e01) popup_ai_links_title_window_t1

0xd986,	// (0x00025162) ai_gene_pane_1_g1_ParamLimits

0xd986,	// (0x00025162) ai_gene_pane_1_g1

0xd992,	// (0x0002516e) ai_gene_pane_1_g2_ParamLimits

0xd992,	// (0x0002516e) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x0002711d) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x0002711d) ai_gene_pane_1_g

0xd99f,	// (0x0002517b) ai_gene_pane_1_t1_ParamLimits

0xd99f,	// (0x0002517b) ai_gene_pane_1_t1

0xd9d3,	// (0x000251af) grid_ai_soft_ind_pane

0xd971,	// (0x0002514d) ai_gene_pane_2_t1_ParamLimits

0xd971,	// (0x0002514d) ai_gene_pane_2_t1

0x7fa4,	// (0x0001f780) main_pane_empty_t1_ParamLimits

0x7fa4,	// (0x0001f780) main_pane_empty_t1

0x7fbc,	// (0x0001f798) main_pane_empty_t2_ParamLimits

0x7fbc,	// (0x0001f798) main_pane_empty_t2

0x7fd1,	// (0x0001f7ad) main_pane_empty_t3_ParamLimits

0x7fd1,	// (0x0001f7ad) main_pane_empty_t3

0x7fe3,	// (0x0001f7bf) main_pane_empty_t4_ParamLimits

0x7fe3,	// (0x0001f7bf) main_pane_empty_t4

0x7ff5,	// (0x0001f7d1) main_pane_empty_t5_ParamLimits

0x7ff5,	// (0x0001f7d1) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00026d94) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00026d94) main_pane_empty_t

0xbbba,	// (0x00023396) bg_popup_window_pane_ParamLimits

0xbbba,	// (0x00023396) bg_popup_window_pane

0xd6d5,	// (0x00024eb1) find_popup_pane_cp2_ParamLimits

0xd6d5,	// (0x00024eb1) find_popup_pane_cp2

0xd6e1,	// (0x00024ebd) heading_pane_ParamLimits

0xd6e1,	// (0x00024ebd) heading_pane

0xb4a5,	// (0x00022c81) bg_popup_sub_pane

0x92e4,	// (0x00020ac0) bg_popup_window_pane_g1_ParamLimits

0x92e4,	// (0x00020ac0) bg_popup_window_pane_g1

0x92f3,	// (0x00020acf) bg_popup_window_pane_g2_ParamLimits

0x92f3,	// (0x00020acf) bg_popup_window_pane_g2

0x92ff,	// (0x00020adb) bg_popup_window_pane_g3_ParamLimits

0x92ff,	// (0x00020adb) bg_popup_window_pane_g3

0x930b,	// (0x00020ae7) bg_popup_window_pane_g4_ParamLimits

0x930b,	// (0x00020ae7) bg_popup_window_pane_g4

0x931a,	// (0x00020af6) bg_popup_window_pane_g5_ParamLimits

0x931a,	// (0x00020af6) bg_popup_window_pane_g5

0x932a,	// (0x00020b06) bg_popup_window_pane_g6_ParamLimits

0x932a,	// (0x00020b06) bg_popup_window_pane_g6

0x9336,	// (0x00020b12) bg_popup_window_pane_g7_ParamLimits

0x9336,	// (0x00020b12) bg_popup_window_pane_g7

0x9345,	// (0x00020b21) bg_popup_window_pane_g8_ParamLimits

0x9345,	// (0x00020b21) bg_popup_window_pane_g8

0x9354,	// (0x00020b30) bg_popup_window_pane_g9_ParamLimits

0x9354,	// (0x00020b30) bg_popup_window_pane_g9

0xd6bb,	// (0x00024e97) bg_popup_window_pane_g10_ParamLimits

0xd6bb,	// (0x00024e97) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x000270e5) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x000270e5) bg_popup_window_pane_g

0xd672,	// (0x00024e4e) bg_popup_heading_pane_ParamLimits

0xd672,	// (0x00024e4e) bg_popup_heading_pane

0x5610,	// (0x0001cdec) tabs_4_passive_pane_cp_srt_ParamLimits

0x5610,	// (0x0001cdec) tabs_4_passive_pane_cp_srt

0x5622,	// (0x0001cdfe) tabs_4_passive_pane_srt_ParamLimits

0xd686,	// (0x00024e62) heading_pane_g2

0x5622,	// (0x0001cdfe) tabs_4_passive_pane_srt

0xcba1,	// (0x0002437d) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcba1,	// (0x0002437d) bg_passive_tab_pane_cp3_srt

0xd68e,	// (0x00024e6a) heading_pane_t1_ParamLimits

0xd68e,	// (0x00024e6a) heading_pane_t1

0xd6a5,	// (0x00024e81) heading_pane_t2_ParamLimits

0xd6a5,	// (0x00024e81) heading_pane_t2

0x0001,

0xf904,	// (0x000270e0) heading_pane_t_ParamLimits

0xf904,	// (0x000270e0) heading_pane_t

0xd1bd,	// (0x00024999) bg_popup_heading_pane_g1

0xd24e,	// (0x00024a2a) bg_popup_heading_pane_g2

0xd258,	// (0x00024a34) bg_popup_heading_pane_g3

0xd262,	// (0x00024a3e) bg_popup_heading_pane_g4

0xd26c,	// (0x00024a48) bg_popup_heading_pane_g5

0xd276,	// (0x00024a52) bg_popup_heading_pane_g6

0xd27e,	// (0x00024a5a) bg_popup_heading_pane_g7

0xd286,	// (0x00024a62) bg_popup_heading_pane_g8

0xd290,	// (0x00024a6c) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x0002709c) bg_popup_heading_pane_g

0xcab1,	// (0x0002428d) bg_popup_sub_pane_g1

0xcab9,	// (0x00024295) bg_popup_sub_pane_g2

0xcac1,	// (0x0002429d) bg_popup_sub_pane_g3

0xcac9,	// (0x000242a5) bg_popup_sub_pane_g4

0xcad1,	// (0x000242ad) bg_popup_sub_pane_g5

0xcad9,	// (0x000242b5) bg_popup_sub_pane_g6

0xcae1,	// (0x000242bd) bg_popup_sub_pane_g7

0xcae9,	// (0x000242c5) bg_popup_sub_pane_g8

0xcaf1,	// (0x000242cd) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x00027076) bg_popup_sub_pane_g

0xb4f3,	// (0x00022ccf) bg_popup_window_pane_cp5_ParamLimits

0xb4f3,	// (0x00022ccf) bg_popup_window_pane_cp5

0xb642,	// (0x00022e1e) popup_note_window_g1_ParamLimits

0xb642,	// (0x00022e1e) popup_note_window_g1

0xb64e,	// (0x00022e2a) popup_note_window_t1_ParamLimits

0xb64e,	// (0x00022e2a) popup_note_window_t1

0xb664,	// (0x00022e40) popup_note_window_t2_ParamLimits

0xb664,	// (0x00022e40) popup_note_window_t2

0xb67a,	// (0x00022e56) popup_note_window_t3_ParamLimits

0xb67a,	// (0x00022e56) popup_note_window_t3

0xb690,	// (0x00022e6c) popup_note_window_t4_ParamLimits

0xb690,	// (0x00022e6c) popup_note_window_t4

0xb6b8,	// (0x00022e94) popup_note_window_t5_ParamLimits

0xb6b8,	// (0x00022e94) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00026d9f) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00026d9f) popup_note_window_t

0xb6dc,	// (0x00022eb8) bg_popup_window_pane_cp6_ParamLimits

0xb6dc,	// (0x00022eb8) bg_popup_window_pane_cp6

0xd139,	// (0x00024915) popup_note_image_window_g1_ParamLimits

0xd139,	// (0x00024915) popup_note_image_window_g1

0xd145,	// (0x00024921) popup_note_image_window_g2_ParamLimits

0xd145,	// (0x00024921) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x0002706a) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x0002706a) popup_note_image_window_g

0xd15e,	// (0x0002493a) popup_note_image_window_t1_ParamLimits

0xd15e,	// (0x0002493a) popup_note_image_window_t1

0xd177,	// (0x00024953) popup_note_image_window_t2_ParamLimits

0xd177,	// (0x00024953) popup_note_image_window_t2

0xd190,	// (0x0002496c) popup_note_image_window_t3_ParamLimits

0xd190,	// (0x0002496c) popup_note_image_window_t3

0x0002,

0xf893,	// (0x0002706f) popup_note_image_window_t_ParamLimits

0xf893,	// (0x0002706f) popup_note_image_window_t

0xd016,	// (0x000247f2) bg_popup_window_pane_cp7_ParamLimits

0xd016,	// (0x000247f2) bg_popup_window_pane_cp7

0xd046,	// (0x00024822) popup_note_wait_window_g1_ParamLimits

0xd046,	// (0x00024822) popup_note_wait_window_g1

0xd052,	// (0x0002482e) popup_note_wait_window_g2_ParamLimits

0xd052,	// (0x0002482e) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x00027058) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x00027058) popup_note_wait_window_g

0xd06a,	// (0x00024846) popup_note_wait_window_t1_ParamLimits

0xd06a,	// (0x00024846) popup_note_wait_window_t1

0xd091,	// (0x0002486d) popup_note_wait_window_t2_ParamLimits

0xd091,	// (0x0002486d) popup_note_wait_window_t2

0xd0ae,	// (0x0002488a) popup_note_wait_window_t3_ParamLimits

0xd0ae,	// (0x0002488a) popup_note_wait_window_t3

0xd0c1,	// (0x0002489d) popup_note_wait_window_t4_ParamLimits

0xd0c1,	// (0x0002489d) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x0002705f) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x0002705f) popup_note_wait_window_t

0xd0e6,	// (0x000248c2) wait_bar_pane_ParamLimits

0xd0e6,	// (0x000248c2) wait_bar_pane

0xb4a5,	// (0x00022c81) wait_anim_pane

0xb4a5,	// (0x00022c81) wait_border_pane

0xb49b,	// (0x00022c77) wait_anim_pane_g1

0xb49b,	// (0x00022c77) wait_anim_pane_g2

0x0001,

0xf747,	// (0x00026f23) wait_anim_pane_g

0xcfba,	// (0x00024796) wait_border_pane_g1

0xcfc5,	// (0x000247a1) wait_border_pane_g2

0xcfce,	// (0x000247aa) wait_border_pane_g3

0x0002,

0xf875,	// (0x00027051) wait_border_pane_g

0xcf17,	// (0x000246f3) bg_popup_window_pane_cp16_ParamLimits

0xcf17,	// (0x000246f3) bg_popup_window_pane_cp16

0xcf25,	// (0x00024701) indicator_popup_pane_cp4_ParamLimits

0xcf25,	// (0x00024701) indicator_popup_pane_cp4

0xcf39,	// (0x00024715) popup_query_data_window_t1_ParamLimits

0xcf39,	// (0x00024715) popup_query_data_window_t1

0xcf4b,	// (0x00024727) popup_query_data_window_t2_ParamLimits

0xcf4b,	// (0x00024727) popup_query_data_window_t2

0xcf64,	// (0x00024740) popup_query_data_window_t3_ParamLimits

0xcf64,	// (0x00024740) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x0002704a) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x0002704a) popup_query_data_window_t

0xcf7e,	// (0x0002475a) query_popup_data_pane_ParamLimits

0xcf7e,	// (0x0002475a) query_popup_data_pane

0xcf92,	// (0x0002476e) query_popup_data_pane_cp1_ParamLimits

0xcf92,	// (0x0002476e) query_popup_data_pane_cp1

0xb6dc,	// (0x00022eb8) bg_popup_window_pane_cp10_ParamLimits

0xb6dc,	// (0x00022eb8) bg_popup_window_pane_cp10

0xce7a,	// (0x00024656) indicator_popup_pane_ParamLimits

0xce7a,	// (0x00024656) indicator_popup_pane

0xb733,	// (0x00022f0f) popup_query_code_window_t1_ParamLimits

0xb733,	// (0x00022f0f) popup_query_code_window_t1

0xce92,	// (0x0002466e) popup_query_code_window_t2_ParamLimits

0xce92,	// (0x0002466e) popup_query_code_window_t2

0xced0,	// (0x000246ac) popup_query_code_window_t3_ParamLimits

0xced0,	// (0x000246ac) popup_query_code_window_t3

0x0002,

0xf867,	// (0x00027043) popup_query_code_window_t_ParamLimits

0xf867,	// (0x00027043) popup_query_code_window_t

0xceff,	// (0x000246db) query_popup_pane_ParamLimits

0xceff,	// (0x000246db) query_popup_pane

0xb6dc,	// (0x00022eb8) bg_popup_window_pane_cp15_ParamLimits

0xb6dc,	// (0x00022eb8) bg_popup_window_pane_cp15

0xb6fa,	// (0x00022ed6) indicator_popup_pane_cp1_ParamLimits

0xb6fa,	// (0x00022ed6) indicator_popup_pane_cp1

0xb70d,	// (0x00022ee9) indicator_popup_pane_cp2_ParamLimits

0xb70d,	// (0x00022ee9) indicator_popup_pane_cp2

0xb720,	// (0x00022efc) popup_query_data_code_window_g1_ParamLimits

0xb720,	// (0x00022efc) popup_query_data_code_window_g1

0xb733,	// (0x00022f0f) popup_query_data_code_window_t1_ParamLimits

0xb733,	// (0x00022f0f) popup_query_data_code_window_t1

0xb745,	// (0x00022f21) popup_query_data_code_window_t2_ParamLimits

0xb745,	// (0x00022f21) popup_query_data_code_window_t2

0xb757,	// (0x00022f33) popup_query_data_code_window_t3_ParamLimits

0xb757,	// (0x00022f33) popup_query_data_code_window_t3

0xb76d,	// (0x00022f49) popup_query_data_code_window_t4_ParamLimits

0xb76d,	// (0x00022f49) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00026daa) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00026daa) popup_query_data_code_window_t

0x52e9,	// (0x0001cac5) list_single_midp_graphic_pane_g3

0xb785,	// (0x00022f61) query_popup_data_pane_cp2_ParamLimits

0xb798,	// (0x00022f74) query_popup_pane_cp2_ParamLimits

0xb798,	// (0x00022f74) query_popup_pane_cp2

0xb4a5,	// (0x00022c81) bg_popup_window_pane_cp11

0xce4e,	// (0x0002462a) heading_pane_cp5

0xb826,	// (0x00023002) listscroll_popup_info_pane

0xb4a5,	// (0x00022c81) input_focus_pane_cp3

0xb7ab,	// (0x00022f87) query_popup_pane_t1

0xb7b9,	// (0x00022f95) list_popup_info_pane_ParamLimits

0xb7b9,	// (0x00022f95) list_popup_info_pane

0xb7c8,	// (0x00022fa4) listscroll_popup_info_pane_g1

0xb7d0,	// (0x00022fac) scroll_pane_cp7

0xb7da,	// (0x00022fb6) popup_info_list_pane_t1_ParamLimits

0xb7da,	// (0x00022fb6) popup_info_list_pane_t1

0xb7f4,	// (0x00022fd0) popup_info_list_pane_t2_ParamLimits

0xb7f4,	// (0x00022fd0) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00026db3) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00026db3) popup_info_list_pane_t

0xb4a5,	// (0x00022c81) bg_popup_window_pane_cp12

0xdd8d,	// (0x00025569) find_popup_pane

0xb501,	// (0x00022cdd) bg_popup_window_pane_cp3

0xb80e,	// (0x00022fea) heading_pane_cp3

0xb81a,	// (0x00022ff6) listscroll_popup_graphic_pane

0xb4a5,	// (0x00022c81) bg_popup_window_pane_cp4

0x8057,	// (0x0001f833) heading_pane_cp4

0xb826,	// (0x00023002) listscroll_popup_colour_pane

0x805f,	// (0x0001f83b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x805f,	// (0x0001f83b) cell_large_graphic_colour_none_popup_pane

0x8073,	// (0x0001f84f) grid_large_graphic_colour_popup_pane_ParamLimits

0x8073,	// (0x0001f84f) grid_large_graphic_colour_popup_pane

0x8097,	// (0x0001f873) listscroll_popup_colour_pane_g1_ParamLimits

0x8097,	// (0x0001f873) listscroll_popup_colour_pane_g1

0x80ae,	// (0x0001f88a) listscroll_popup_colour_pane_g2_ParamLimits

0x80ae,	// (0x0001f88a) listscroll_popup_colour_pane_g2

0x80c5,	// (0x0001f8a1) listscroll_popup_colour_pane_g3_ParamLimits

0x80c5,	// (0x0001f8a1) listscroll_popup_colour_pane_g3

0x80d5,	// (0x0001f8b1) listscroll_popup_colour_pane_g4_ParamLimits

0x80d5,	// (0x0001f8b1) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00026db8) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00026db8) listscroll_popup_colour_pane_g

0xb82e,	// (0x0002300a) scroll_pane_cp6_ParamLimits

0xb82e,	// (0x0002300a) scroll_pane_cp6

0x80e5,	// (0x0001f8c1) cell_large_graphic_colour_popup_pane_ParamLimits

0x80e5,	// (0x0001f8c1) cell_large_graphic_colour_popup_pane

0xb840,	// (0x0002301c) cell_large_graphic_colour_none_popup_pane_t1

0xb4a5,	// (0x00022c81) grid_highlight_pane_cp5

0xb84f,	// (0x0002302b) cell_large_graphic_colour_popup_pane_g1

0xb857,	// (0x00023033) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00026dc1) cell_large_graphic_colour_popup_pane_g

0xb85f,	// (0x0002303b) cell_large_graphic_colour_popup_pane_g2_copy1

0xb868,	// (0x00023044) grid_highlight_pane_cp4

0xb870,	// (0x0002304c) bg_popup_window_pane_cp8_ParamLimits

0xb870,	// (0x0002304c) bg_popup_window_pane_cp8

0xb88b,	// (0x00023067) popup_snote_single_text_window_g1_ParamLimits

0xb88b,	// (0x00023067) popup_snote_single_text_window_g1

0xb89d,	// (0x00023079) popup_snote_single_text_window_t1_ParamLimits

0xb89d,	// (0x00023079) popup_snote_single_text_window_t1

0xb8b0,	// (0x0002308c) popup_snote_single_text_window_t2_ParamLimits

0xb8b0,	// (0x0002308c) popup_snote_single_text_window_t2

0xb8c3,	// (0x0002309f) popup_snote_single_text_window_t3_ParamLimits

0xb8c3,	// (0x0002309f) popup_snote_single_text_window_t3

0xb8fc,	// (0x000230d8) popup_snote_single_text_window_t4_ParamLimits

0xb8fc,	// (0x000230d8) popup_snote_single_text_window_t4

0xb930,	// (0x0002310c) popup_snote_single_text_window_t5_ParamLimits

0xb930,	// (0x0002310c) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00026dc6) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00026dc6) popup_snote_single_text_window_t

0xb95f,	// (0x0002313b) bg_popup_window_pane_cp9_ParamLimits

0xb95f,	// (0x0002313b) bg_popup_window_pane_cp9

0xb88b,	// (0x00023067) popup_snote_single_graphic_window_g1_ParamLimits

0xb88b,	// (0x00023067) popup_snote_single_graphic_window_g1

0xb96d,	// (0x00023149) popup_snote_single_graphic_window_g2_ParamLimits

0xb96d,	// (0x00023149) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00026dd1) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00026dd1) popup_snote_single_graphic_window_g

0xb979,	// (0x00023155) popup_snote_single_graphic_window_t1_ParamLimits

0xb979,	// (0x00023155) popup_snote_single_graphic_window_t1

0xb98c,	// (0x00023168) popup_snote_single_graphic_window_t2_ParamLimits

0xb98c,	// (0x00023168) popup_snote_single_graphic_window_t2

0xb99f,	// (0x0002317b) popup_snote_single_graphic_window_t3_ParamLimits

0xb99f,	// (0x0002317b) popup_snote_single_graphic_window_t3

0xb9d8,	// (0x000231b4) popup_snote_single_graphic_window_t4_ParamLimits

0xb9d8,	// (0x000231b4) popup_snote_single_graphic_window_t4

0xba0c,	// (0x000231e8) popup_snote_single_graphic_window_t5_ParamLimits

0xba0c,	// (0x000231e8) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00026dd6) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00026dd6) popup_snote_single_graphic_window_t

0xdd15,	// (0x000254f1) grid_graphic_popup_pane_ParamLimits

0xdd15,	// (0x000254f1) grid_graphic_popup_pane

0xdd3d,	// (0x00025519) listscroll_popup_graphic_pane_g1_ParamLimits

0xdd3d,	// (0x00025519) listscroll_popup_graphic_pane_g1

0x967a,	// (0x00020e56) listscroll_popup_graphic_pane_g2_ParamLimits

0x967a,	// (0x00020e56) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x000271c0) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x000271c0) listscroll_popup_graphic_pane_g

0xd851,	// (0x0002502d) scroll_pane_cp5

0x963e,	// (0x00020e1a) cell_graphic_popup_pane_ParamLimits

0x963e,	// (0x00020e1a) cell_graphic_popup_pane

0xdce0,	// (0x000254bc) cell_graphic_popup_pane_g1

0xdce8,	// (0x000254c4) cell_graphic_popup_pane_g2

0xb85f,	// (0x0002303b) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x000271b9) cell_graphic_popup_pane_g

0xdcf1,	// (0x000254cd) cell_graphic_popup_pane_t2

0xb868,	// (0x00023044) grid_highlight_pane_cp3

0xba4d,	// (0x00023229) list_gen_pane_ParamLimits

0xba4d,	// (0x00023229) list_gen_pane

0xba75,	// (0x00023251) scroll_pane

0x95f9,	// (0x00020dd5) bg_list_pane_g1_ParamLimits

0x95f9,	// (0x00020dd5) bg_list_pane_g1

0xdc8f,	// (0x0002546b) bg_list_pane_g2_ParamLimits

0xdc8f,	// (0x0002546b) bg_list_pane_g2

0xdca2,	// (0x0002547e) bg_list_pane_g3_ParamLimits

0xdca2,	// (0x0002547e) bg_list_pane_g3

0xdcb4,	// (0x00025490) bg_list_pane_g4_ParamLimits

0xdcb4,	// (0x00025490) bg_list_pane_g4

0x9614,	// (0x00020df0) bg_list_pane_g5_ParamLimits

0x9614,	// (0x00020df0) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x000271ae) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x000271ae) bg_list_pane_g

0x95b0,	// (0x00020d8c) list_double2_graphic_large_graphic_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double2_graphic_large_graphic_pane

0x95b0,	// (0x00020d8c) list_double2_graphic_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double2_graphic_pane

0x95b0,	// (0x00020d8c) list_double2_large_graphic_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double2_large_graphic_pane

0x95b0,	// (0x00020d8c) list_double2_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double2_pane

0x95b0,	// (0x00020d8c) list_double_graphic_heading_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double_graphic_heading_pane

0x95b0,	// (0x00020d8c) list_double_graphic_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double_graphic_pane

0x95b0,	// (0x00020d8c) list_double_heading_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double_heading_pane

0x95b0,	// (0x00020d8c) list_double_large_graphic_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double_large_graphic_pane

0x95b0,	// (0x00020d8c) list_double_number_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double_number_pane

0x95b0,	// (0x00020d8c) list_double_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double_pane

0x95b0,	// (0x00020d8c) list_double_time_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_double_time_pane

0x95b0,	// (0x00020d8c) list_setting_number_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_setting_number_pane

0x95b0,	// (0x00020d8c) list_setting_pane_ParamLimits

0x95b0,	// (0x00020d8c) list_setting_pane

0x95c2,	// (0x00020d9e) list_single_2graphic_pane_ParamLimits

0x95c2,	// (0x00020d9e) list_single_2graphic_pane

0x95c2,	// (0x00020d9e) list_single_graphic_heading_pane_ParamLimits

0x95c2,	// (0x00020d9e) list_single_graphic_heading_pane

0x95c2,	// (0x00020d9e) list_single_graphic_pane_ParamLimits

0x95c2,	// (0x00020d9e) list_single_graphic_pane

0x95c2,	// (0x00020d9e) list_single_heading_pane_ParamLimits

0x95c2,	// (0x00020d9e) list_single_heading_pane

0x95c2,	// (0x00020d9e) list_single_large_graphic_pane_ParamLimits

0x95c2,	// (0x00020d9e) list_single_large_graphic_pane

0x95c2,	// (0x00020d9e) list_single_number_heading_pane_ParamLimits

0x95c2,	// (0x00020d9e) list_single_number_heading_pane

0x95c2,	// (0x00020d9e) list_single_number_pane_ParamLimits

0x95c2,	// (0x00020d9e) list_single_number_pane

0x95c2,	// (0x00020d9e) list_single_pane_ParamLimits

0x95c2,	// (0x00020d9e) list_single_pane

0xb4a5,	// (0x00022c81) list_highlight_pane_cp1

0x403c,	// (0x0001b818) list_single_pane_g1_ParamLimits

0x403c,	// (0x0001b818) list_single_pane_g1

0x4048,	// (0x0001b824) list_single_pane_g2_ParamLimits

0x4048,	// (0x0001b824) list_single_pane_g2

0x0001,

0xf60c,	// (0x00026de8) list_single_pane_g_ParamLimits

0xf60c,	// (0x00026de8) list_single_pane_g

0x42b3,	// (0x0001ba8f) list_single_pane_t1_ParamLimits

0x42b3,	// (0x0001ba8f) list_single_pane_t1

0x403c,	// (0x0001b818) list_single_number_pane_g1_ParamLimits

0x403c,	// (0x0001b818) list_single_number_pane_g1

0x4048,	// (0x0001b824) list_single_number_pane_g2_ParamLimits

0x4048,	// (0x0001b824) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00026de8) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00026de8) list_single_number_pane_g

0x40b4,	// (0x0001b890) list_single_number_pane_t1_ParamLimits

0x40b4,	// (0x0001b890) list_single_number_pane_t1

0x7994,	// (0x0001f170) list_single_number_pane_t2_ParamLimits

0x7994,	// (0x0001f170) list_single_number_pane_t2

0x0001,

0xf993,	// (0x0002716f) list_single_number_pane_t_ParamLimits

0xf993,	// (0x0002716f) list_single_number_pane_t

0x4690,	// (0x0001be6c) list_single_graphic_pane_g1_ParamLimits

0x4690,	// (0x0001be6c) list_single_graphic_pane_g1

0x403c,	// (0x0001b818) list_single_graphic_pane_g2_ParamLimits

0x403c,	// (0x0001b818) list_single_graphic_pane_g2

0x4048,	// (0x0001b824) list_single_graphic_pane_g3_ParamLimits

0x4048,	// (0x0001b824) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00026de1) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00026de1) list_single_graphic_pane_g

0x739f,	// (0x0001eb7b) list_single_graphic_pane_t1_ParamLimits

0x739f,	// (0x0001eb7b) list_single_graphic_pane_t1

0x403c,	// (0x0001b818) list_single_heading_pane_g1_ParamLimits

0x403c,	// (0x0001b818) list_single_heading_pane_g1

0x4048,	// (0x0001b824) list_single_heading_pane_g2_ParamLimits

0x4048,	// (0x0001b824) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00026de8) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00026de8) list_single_heading_pane_g

0x42d5,	// (0x0001bab1) list_single_heading_pane_t1_ParamLimits

0x42d5,	// (0x0001bab1) list_single_heading_pane_t1

0x73b5,	// (0x0001eb91) list_single_heading_pane_t2_ParamLimits

0x73b5,	// (0x0001eb91) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00026ded) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00026ded) list_single_heading_pane_t

0x403c,	// (0x0001b818) list_single_number_heading_pane_g1_ParamLimits

0x403c,	// (0x0001b818) list_single_number_heading_pane_g1

0x4048,	// (0x0001b824) list_single_number_heading_pane_g2_ParamLimits

0x4048,	// (0x0001b824) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00026de8) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00026de8) list_single_number_heading_pane_g

0x42d5,	// (0x0001bab1) list_single_number_heading_pane_t1_ParamLimits

0x42d5,	// (0x0001bab1) list_single_number_heading_pane_t1

0x73c7,	// (0x0001eba3) list_single_number_heading_pane_t2_ParamLimits

0x73c7,	// (0x0001eba3) list_single_number_heading_pane_t2

0x428d,	// (0x0001ba69) list_single_number_heading_pane_t3_ParamLimits

0x428d,	// (0x0001ba69) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00026df2) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00026df2) list_single_number_heading_pane_t

0x4030,	// (0x0001b80c) list_single_graphic_heading_pane_g1_ParamLimits

0x4030,	// (0x0001b80c) list_single_graphic_heading_pane_g1

0x73d9,	// (0x0001ebb5) list_single_graphic_heading_pane_g4_ParamLimits

0x73d9,	// (0x0001ebb5) list_single_graphic_heading_pane_g4

0x4048,	// (0x0001b824) list_single_graphic_heading_pane_g5_ParamLimits

0x4048,	// (0x0001b824) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00026df9) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00026df9) list_single_graphic_heading_pane_g

0x42d5,	// (0x0001bab1) list_single_graphic_heading_pane_t1_ParamLimits

0x42d5,	// (0x0001bab1) list_single_graphic_heading_pane_t1

0x73ea,	// (0x0001ebc6) list_single_graphic_heading_pane_t2_ParamLimits

0x73ea,	// (0x0001ebc6) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00026e00) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00026e00) list_single_graphic_heading_pane_t

0x42c9,	// (0x0001baa5) list_single_large_graphic_pane_g1_ParamLimits

0x42c9,	// (0x0001baa5) list_single_large_graphic_pane_g1

0x403c,	// (0x0001b818) list_single_large_graphic_pane_g2_ParamLimits

0x403c,	// (0x0001b818) list_single_large_graphic_pane_g2

0x4048,	// (0x0001b824) list_single_large_graphic_pane_g3_ParamLimits

0x4048,	// (0x0001b824) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00026e05) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00026e05) list_single_large_graphic_pane_g

0xcfc5,	// (0x000247a1) wait_border_pane_g2_copy1

0x73fc,	// (0x0001ebd8) list_single_large_graphic_pane_g4_cp2

0x42d5,	// (0x0001bab1) list_single_large_graphic_pane_t1_ParamLimits

0x42d5,	// (0x0001bab1) list_single_large_graphic_pane_t1

0x44c2,	// (0x0001bc9e) list_double_pane_g1_ParamLimits

0x44c2,	// (0x0001bc9e) list_double_pane_g1

0x7404,	// (0x0001ebe0) list_double_pane_g2_ParamLimits

0x7404,	// (0x0001ebe0) list_double_pane_g2

0x0001,

0xf630,	// (0x00026e0c) list_double_pane_g_ParamLimits

0xf630,	// (0x00026e0c) list_double_pane_g

0x7410,	// (0x0001ebec) list_double_pane_t1_ParamLimits

0x7410,	// (0x0001ebec) list_double_pane_t1

0x7426,	// (0x0001ec02) list_double_pane_t2_ParamLimits

0x7426,	// (0x0001ec02) list_double_pane_t2

0x0001,

0xf635,	// (0x00026e11) list_double_pane_t_ParamLimits

0xf635,	// (0x00026e11) list_double_pane_t

0x7438,	// (0x0001ec14) list_double2_pane_g1_ParamLimits

0x7438,	// (0x0001ec14) list_double2_pane_g1

0x3b91,	// (0x0001b36d) list_double2_pane_g2_ParamLimits

0x3b91,	// (0x0001b36d) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00026e16) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00026e16) list_double2_pane_g

0x7449,	// (0x0001ec25) list_double2_pane_t1_ParamLimits

0x7449,	// (0x0001ec25) list_double2_pane_t1

0x745f,	// (0x0001ec3b) list_double2_pane_t2_ParamLimits

0x745f,	// (0x0001ec3b) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00026e1b) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00026e1b) list_double2_pane_t

0x44c2,	// (0x0001bc9e) list_double_number_pane_g1_ParamLimits

0x44c2,	// (0x0001bc9e) list_double_number_pane_g1

0x7404,	// (0x0001ebe0) list_double_number_pane_g2_ParamLimits

0x7404,	// (0x0001ebe0) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00026e0c) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00026e0c) list_double_number_pane_g

0x7471,	// (0x0001ec4d) list_double_number_pane_t1_ParamLimits

0x7471,	// (0x0001ec4d) list_double_number_pane_t1

0x7483,	// (0x0001ec5f) list_double_number_pane_t2_ParamLimits

0x7483,	// (0x0001ec5f) list_double_number_pane_t2

0x7499,	// (0x0001ec75) list_double_number_pane_t3_ParamLimits

0x7499,	// (0x0001ec75) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00026e20) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00026e20) list_double_number_pane_t

0x74ab,	// (0x0001ec87) list_double_graphic_pane_g1_ParamLimits

0x74ab,	// (0x0001ec87) list_double_graphic_pane_g1

0x74b7,	// (0x0001ec93) list_double_graphic_pane_g2_ParamLimits

0x74b7,	// (0x0001ec93) list_double_graphic_pane_g2

0x74c6,	// (0x0001eca2) list_double_graphic_pane_g3_ParamLimits

0x74c6,	// (0x0001eca2) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00026e27) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00026e27) list_double_graphic_pane_g

0x74de,	// (0x0001ecba) list_double_graphic_pane_t1_ParamLimits

0x74de,	// (0x0001ecba) list_double_graphic_pane_t1

0x74f4,	// (0x0001ecd0) list_double_graphic_pane_t2_ParamLimits

0x74f4,	// (0x0001ecd0) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00026e30) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00026e30) list_double_graphic_pane_t

0x7506,	// (0x0001ece2) list_double2_graphic_pane_g1_ParamLimits

0x7506,	// (0x0001ece2) list_double2_graphic_pane_g1

0x7512,	// (0x0001ecee) list_double2_graphic_pane_g2_ParamLimits

0x7512,	// (0x0001ecee) list_double2_graphic_pane_g2

0x3b91,	// (0x0001b36d) list_double2_graphic_pane_g3_ParamLimits

0x3b91,	// (0x0001b36d) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00026e35) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00026e35) list_double2_graphic_pane_g

0x751e,	// (0x0001ecfa) list_double2_graphic_pane_t1_ParamLimits

0x751e,	// (0x0001ecfa) list_double2_graphic_pane_t1

0x7534,	// (0x0001ed10) list_double2_graphic_pane_t2_ParamLimits

0x7534,	// (0x0001ed10) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00026e3c) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00026e3c) list_double2_graphic_pane_t

0x7546,	// (0x0001ed22) list_double_large_graphic_pane_g1_ParamLimits

0x7546,	// (0x0001ed22) list_double_large_graphic_pane_g1

0x7571,	// (0x0001ed4d) list_double_large_graphic_pane_g2_ParamLimits

0x7571,	// (0x0001ed4d) list_double_large_graphic_pane_g2

0x7404,	// (0x0001ebe0) list_double_large_graphic_pane_g3_ParamLimits

0x7404,	// (0x0001ebe0) list_double_large_graphic_pane_g3

0x7582,	// (0x0001ed5e) list_double_large_graphic_pane_g4_ParamLimits

0x7582,	// (0x0001ed5e) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00026e41) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00026e41) list_double_large_graphic_pane_g

0x7594,	// (0x0001ed70) list_double_large_graphic_pane_t1_ParamLimits

0x7594,	// (0x0001ed70) list_double_large_graphic_pane_t1

0x75ad,	// (0x0001ed89) list_double_large_graphic_pane_t2_ParamLimits

0x75ad,	// (0x0001ed89) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00026e4c) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00026e4c) list_double_large_graphic_pane_t

0x75bf,	// (0x0001ed9b) list_double2_large_graphic_pane_g1_ParamLimits

0x75bf,	// (0x0001ed9b) list_double2_large_graphic_pane_g1

0x7438,	// (0x0001ec14) list_double2_large_graphic_pane_g2_ParamLimits

0x7438,	// (0x0001ec14) list_double2_large_graphic_pane_g2

0x3b91,	// (0x0001b36d) list_double2_large_graphic_pane_g3_ParamLimits

0x3b91,	// (0x0001b36d) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00026e51) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00026e51) list_double2_large_graphic_pane_g

0x75cb,	// (0x0001eda7) list_double2_large_graphic_pane_t1_ParamLimits

0x75cb,	// (0x0001eda7) list_double2_large_graphic_pane_t1

0x75e1,	// (0x0001edbd) list_double2_large_graphic_pane_t2_ParamLimits

0x75e1,	// (0x0001edbd) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00026e58) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00026e58) list_double2_large_graphic_pane_t

0x75f3,	// (0x0001edcf) list_double_heading_pane_g1_ParamLimits

0x75f3,	// (0x0001edcf) list_double_heading_pane_g1

0x399c,	// (0x0001b178) list_double_heading_pane_g2_ParamLimits

0x399c,	// (0x0001b178) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00026e5d) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00026e5d) list_double_heading_pane_g

0x7604,	// (0x0001ede0) list_double_heading_pane_t1_ParamLimits

0x7604,	// (0x0001ede0) list_double_heading_pane_t1

0x745f,	// (0x0001ec3b) list_double_heading_pane_t2_ParamLimits

0x745f,	// (0x0001ec3b) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00026e62) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00026e62) list_double_heading_pane_t

0x74ab,	// (0x0001ec87) list_double_graphic_heading_pane_g1_ParamLimits

0x74ab,	// (0x0001ec87) list_double_graphic_heading_pane_g1

0x75f3,	// (0x0001edcf) list_double_graphic_heading_pane_g2_ParamLimits

0x75f3,	// (0x0001edcf) list_double_graphic_heading_pane_g2

0x399c,	// (0x0001b178) list_double_graphic_heading_pane_g3_ParamLimits

0x399c,	// (0x0001b178) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00026e67) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00026e67) list_double_graphic_heading_pane_g

0x761a,	// (0x0001edf6) list_double_graphic_heading_pane_t1_ParamLimits

0x761a,	// (0x0001edf6) list_double_graphic_heading_pane_t1

0x7534,	// (0x0001ed10) list_double_graphic_heading_pane_t2_ParamLimits

0x7534,	// (0x0001ed10) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00026e6e) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00026e6e) list_double_graphic_heading_pane_t

0x7571,	// (0x0001ed4d) list_double_time_pane_g1_ParamLimits

0x7571,	// (0x0001ed4d) list_double_time_pane_g1

0x7404,	// (0x0001ebe0) list_double_time_pane_g2_ParamLimits

0x7404,	// (0x0001ebe0) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00026e73) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00026e73) list_double_time_pane_g

0x7630,	// (0x0001ee0c) list_double_time_pane_t1_ParamLimits

0x7630,	// (0x0001ee0c) list_double_time_pane_t1

0x7646,	// (0x0001ee22) list_double_time_pane_t2_ParamLimits

0x7646,	// (0x0001ee22) list_double_time_pane_t2

0x7658,	// (0x0001ee34) list_double_time_pane_t3_ParamLimits

0x7658,	// (0x0001ee34) list_double_time_pane_t3

0x766a,	// (0x0001ee46) list_double_time_pane_t4_ParamLimits

0x766a,	// (0x0001ee46) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00026e78) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00026e78) list_double_time_pane_t

0x767c,	// (0x0001ee58) list_setting_pane_g1_ParamLimits

0x767c,	// (0x0001ee58) list_setting_pane_g1

0x7688,	// (0x0001ee64) list_setting_pane_g2_ParamLimits

0x7688,	// (0x0001ee64) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00026e81) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00026e81) list_setting_pane_g

0x7694,	// (0x0001ee70) list_setting_pane_t1_ParamLimits

0x7694,	// (0x0001ee70) list_setting_pane_t1

0x76ae,	// (0x0001ee8a) list_setting_pane_t2_ParamLimits

0x76ae,	// (0x0001ee8a) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00026e86) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00026e86) list_setting_pane_t

0x76ed,	// (0x0001eec9) set_value_pane_cp_ParamLimits

0x76ed,	// (0x0001eec9) set_value_pane_cp

0x76f9,	// (0x0001eed5) list_setting_number_pane_g1_ParamLimits

0x76f9,	// (0x0001eed5) list_setting_number_pane_g1

0x7705,	// (0x0001eee1) list_setting_number_pane_g2_ParamLimits

0x7705,	// (0x0001eee1) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x00026e8d) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x00026e8d) list_setting_number_pane_g

0x7711,	// (0x0001eeed) list_setting_number_pane_t1_ParamLimits

0x7711,	// (0x0001eeed) list_setting_number_pane_t1

0x772a,	// (0x0001ef06) list_setting_number_pane_t2_ParamLimits

0x772a,	// (0x0001ef06) list_setting_number_pane_t2

0x7744,	// (0x0001ef20) list_setting_number_pane_t3_ParamLimits

0x7744,	// (0x0001ef20) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x00026e92) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x00026e92) list_setting_number_pane_t

0x76ed,	// (0x0001eec9) set_value_pane_ParamLimits

0x76ed,	// (0x0001eec9) set_value_pane

0xbaa9,	// (0x00023285) bg_set_opt_pane_ParamLimits

0xbaa9,	// (0x00023285) bg_set_opt_pane

0x3d1a,	// (0x0001b4f6) set_value_pane_t1

0xbaca,	// (0x000232a6) slider_set_pane_cp3

0xbad3,	// (0x000232af) volume_small_pane_cp

0xbadc,	// (0x000232b8) list_form_gen_pane

0xbae5,	// (0x000232c1) scroll_pane_cp8

0x7787,	// (0x0001ef63) form_field_data_pane_ParamLimits

0x7787,	// (0x0001ef63) form_field_data_pane

0x779e,	// (0x0001ef7a) form_field_data_wide_pane_ParamLimits

0x779e,	// (0x0001ef7a) form_field_data_wide_pane

0x77be,	// (0x0001ef9a) form_field_popup_pane_ParamLimits

0x77be,	// (0x0001ef9a) form_field_popup_pane

0x77d6,	// (0x0001efb2) form_field_popup_wide_pane_ParamLimits

0x77d6,	// (0x0001efb2) form_field_popup_wide_pane

0x3dae,	// (0x0001b58a) form_field_slider_pane_ParamLimits

0x3dae,	// (0x0001b58a) form_field_slider_pane

0x3dc1,	// (0x0001b59d) form_field_slider_wide_pane_ParamLimits

0x3dc1,	// (0x0001b59d) form_field_slider_wide_pane

0xbaf6,	// (0x000232d2) data_form_pane

0x77f7,	// (0x0001efd3) form_field_data_pane_t1

0xbb02,	// (0x000232de) input_focus_pane

0xbb10,	// (0x000232ec) data_form_wide_pane

0x3e02,	// (0x0001b5de) form_field_data_wide_pane_t1

0xb87d,	// (0x00023059) input_focus_pane_cp6

0x7811,	// (0x0001efed) form_field_popup_pane_t1

0xbb02,	// (0x000232de) input_focus_pane_cp7

0xbb3c,	// (0x00023318) list_form_pane

0x3e44,	// (0x0001b620) form_field_popup_wide_pane_t1

0xbb02,	// (0x000232de) input_focus_pane_cp8

0xbb48,	// (0x00023324) list_form_wide_pane

0x7833,	// (0x0001f00f) form_field_slider_pane_t1_ParamLimits

0x7833,	// (0x0001f00f) form_field_slider_pane_t1

0x784b,	// (0x0001f027) form_field_slider_pane_t2_ParamLimits

0x784b,	// (0x0001f027) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x00026ea2) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x00026ea2) form_field_slider_pane_t

0xb4f3,	// (0x00022ccf) input_focus_pane_cp9_ParamLimits

0xb4f3,	// (0x00022ccf) input_focus_pane_cp9

0x7860,	// (0x0001f03c) slider_cont_pane_ParamLimits

0x7860,	// (0x0001f03c) slider_cont_pane

0xbb57,	// (0x00023333) form_field_slider_wide_pane_t1_ParamLimits

0xbb57,	// (0x00023333) form_field_slider_wide_pane_t1

0x3ea0,	// (0x0001b67c) form_field_slider_wide_pane_t2_ParamLimits

0x3ea0,	// (0x0001b67c) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x00026ea7) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x00026ea7) form_field_slider_wide_pane_t

0xb4f3,	// (0x00022ccf) input_focus_pane_cp10_ParamLimits

0xb4f3,	// (0x00022ccf) input_focus_pane_cp10

0x7874,	// (0x0001f050) slider_cont_pane_cp1_ParamLimits

0x7874,	// (0x0001f050) slider_cont_pane_cp1

0x7888,	// (0x0001f064) slider_form_pane_cp

0xbb69,	// (0x00023345) input_focus_pane_g1

0xbb71,	// (0x0002334d) input_focus_pane_g2

0xbb79,	// (0x00023355) input_focus_pane_g3

0xbb81,	// (0x0002335d) input_focus_pane_g4

0xbb89,	// (0x00023365) input_focus_pane_g5

0xbb91,	// (0x0002336d) input_focus_pane_g6

0xbb99,	// (0x00023375) input_focus_pane_g7

0xbba1,	// (0x0002337d) input_focus_pane_g8

0xbba9,	// (0x00023385) input_focus_pane_g9

0xb49b,	// (0x00022c77) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x00026eac) input_focus_pane_g

0xcfce,	// (0x000247aa) wait_border_pane_g3_copy1

0x7890,	// (0x0001f06c) data_form_pane_t1

0xb49b,	// (0x00022c77) wait_anim_pane_g1_copy1

0x79a6,	// (0x0001f182) data_form_wide_pane_t1

0x810e,	// (0x0001f8ea) list_form_graphic_pane_cp_ParamLimits

0x810e,	// (0x0001f8ea) list_form_graphic_pane_cp

0xdc39,	// (0x00025415) slider_form_pane_g1

0xdc42,	// (0x0002541e) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x0002719f) slider_form_pane_g

0x810e,	// (0x0001f8ea) list_form_graphic_pane_ParamLimits

0x810e,	// (0x0001f8ea) list_form_graphic_pane

0x3f1e,	// (0x0001b6fa) list_form_graphic_pane_g1

0x3f26,	// (0x0001b702) list_form_graphic_pane_t1_ParamLimits

0x3f26,	// (0x0001b702) list_form_graphic_pane_t1

0xb501,	// (0x00022cdd) list_highlight_pane_cp5_ParamLimits

0xb501,	// (0x00022cdd) list_highlight_pane_cp5

0x78aa,	// (0x0001f086) find_pane_g1

0xbbb1,	// (0x0002338d) input_find_pane

0x78b3,	// (0x0001f08f) input_find_pane_g1_ParamLimits

0x78b3,	// (0x0001f08f) input_find_pane_g1

0x78bf,	// (0x0001f09b) input_find_pane_t1_ParamLimits

0x78bf,	// (0x0001f09b) input_find_pane_t1

0x78d4,	// (0x0001f0b0) input_find_pane_t2_ParamLimits

0x78d4,	// (0x0001f0b0) input_find_pane_t2

0x0001,

0xf6e5,	// (0x00026ec1) input_find_pane_t_ParamLimits

0xf6e5,	// (0x00026ec1) input_find_pane_t

0xbbba,	// (0x00023396) input_focus_pane_cp5_ParamLimits

0xbbba,	// (0x00023396) input_focus_pane_cp5

0x812c,	// (0x0001f908) bg_popup_window_pane_cp2_ParamLimits

0x812c,	// (0x0001f908) bg_popup_window_pane_cp2

0x8139,	// (0x0001f915) listscroll_menu_pane_ParamLimits

0x8139,	// (0x0001f915) listscroll_menu_pane

0x8145,	// (0x0001f921) popup_submenu_window_ParamLimits

0x8145,	// (0x0001f921) popup_submenu_window

0xbbc8,	// (0x000233a4) find_popup_pane_g1

0xbbd0,	// (0x000233ac) input_popup_find_pane_cp

0xbbba,	// (0x00023396) input_focus_pane_cp4_ParamLimits

0xbbba,	// (0x00023396) input_focus_pane_cp4

0xbbda,	// (0x000233b6) input_popup_find_pane_t1_ParamLimits

0xbbda,	// (0x000233b6) input_popup_find_pane_t1

0xb4a5,	// (0x00022c81) bg_popup_sub_pane_cp

0xbc08,	// (0x000233e4) listscroll_popup_sub_pane

0xbc10,	// (0x000233ec) list_submenu_pane_ParamLimits

0xbc10,	// (0x000233ec) list_submenu_pane

0xbc21,	// (0x000233fd) scroll_pane_cp4

0xbc29,	// (0x00023405) list_single_popup_submenu_pane_ParamLimits

0xbc29,	// (0x00023405) list_single_popup_submenu_pane

0xbc3d,	// (0x00023419) list_single_popup_submenu_pane_g1

0xbc45,	// (0x00023421) list_single_popup_submenu_pane_t1_ParamLimits

0xbc45,	// (0x00023421) list_single_popup_submenu_pane_t1

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp1_ParamLimits

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp1

0x817d,	// (0x0001f959) tabs_2_active_pane_g1

0x8185,	// (0x0001f961) tabs_2_active_pane_t1

0xb4f3,	// (0x00022ccf) bg_passive_tab_pane_cp1_ParamLimits

0xb4f3,	// (0x00022ccf) bg_passive_tab_pane_cp1

0x817d,	// (0x0001f959) tabs_2_passive_pane_g1

0x8185,	// (0x0001f961) tabs_2_passive_pane_t1

0xb501,	// (0x00022cdd) bg_active_tab_pane_cp4

0x8197,	// (0x0001f973) tabs_2_long_active_pane_t1

0xbc5a,	// (0x00023436) bg_passive_tab_pane_cp4

0xc8c2,	// (0x0002409e) list_single_midp_graphic_pane_g4_ParamLimits

0xb501,	// (0x00022cdd) bg_active_tab_pane_cp5

0x81aa,	// (0x0001f986) tabs_3_long_active_pane_t1

0xbc5a,	// (0x00023436) bg_passive_tab_pane_cp5

0xc8c2,	// (0x0002409e) list_single_midp_graphic_pane_g4

0xb501,	// (0x00022cdd) bg_popup_window_pane_cp13_ParamLimits

0xb501,	// (0x00022cdd) bg_popup_window_pane_cp13

0xbc6f,	// (0x0002344b) listscroll_popup_fast_pane_ParamLimits

0xbc6f,	// (0x0002344b) listscroll_popup_fast_pane

0xbc7e,	// (0x0002345a) grid_popup_fast_pane_ParamLimits

0xbc7e,	// (0x0002345a) grid_popup_fast_pane

0xbc90,	// (0x0002346c) scroll_pane_cp9_ParamLimits

0xbc90,	// (0x0002346c) scroll_pane_cp9

0xeec9,	// (0x000266a5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xeec9,	// (0x000266a5) list_single_graphic_hl_pane_t1_cp2

0xbcb4,	// (0x00023490) input_focus_pane_cp20_ParamLimits

0xbcb4,	// (0x00023490) input_focus_pane_cp20

0xbcc2,	// (0x0002349e) query_popup_data_pane_t1_ParamLimits

0xbcc2,	// (0x0002349e) query_popup_data_pane_t1

0xbcd5,	// (0x000234b1) query_popup_data_pane_t2_ParamLimits

0xbcd5,	// (0x000234b1) query_popup_data_pane_t2

0xbd1b,	// (0x000234f7) query_popup_data_pane_t3_ParamLimits

0xbd1b,	// (0x000234f7) query_popup_data_pane_t3

0xbd5c,	// (0x00023538) query_popup_data_pane_t4_ParamLimits

0xbd5c,	// (0x00023538) query_popup_data_pane_t4

0xbd98,	// (0x00023574) query_popup_data_pane_t5_ParamLimits

0xbd98,	// (0x00023574) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x00026ec6) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x00026ec6) query_popup_data_pane_t

0xbb69,	// (0x00023345) bg_set_opt_pane_g1

0xbb71,	// (0x0002334d) bg_set_opt_pane_g2

0xbb79,	// (0x00023355) bg_set_opt_pane_g3

0xbb81,	// (0x0002335d) bg_set_opt_pane_g4

0xbb89,	// (0x00023365) bg_set_opt_pane_g5

0xbb91,	// (0x0002336d) bg_set_opt_pane_g6

0xbb99,	// (0x00023375) bg_set_opt_pane_g7

0xbba1,	// (0x0002337d) bg_set_opt_pane_g8

0xbba9,	// (0x00023385) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x00026ed1) bg_set_opt_pane_g

0x4f5e,	// (0x0001c73a) control_top_pane_stacon_ParamLimits

0x4f5e,	// (0x0001c73a) control_top_pane_stacon

0x4fb1,	// (0x0001c78d) signal_pane_stacon_ParamLimits

0x4fb1,	// (0x0001c78d) signal_pane_stacon

0xc20d,	// (0x000239e9) stacon_top_pane_g1_ParamLimits

0xc20d,	// (0x000239e9) stacon_top_pane_g1

0x4fd6,	// (0x0001c7b2) title_pane_stacon_ParamLimits

0x4fd6,	// (0x0001c7b2) title_pane_stacon

0x5000,	// (0x0001c7dc) uni_indicator_pane_stacon_ParamLimits

0x5000,	// (0x0001c7dc) uni_indicator_pane_stacon

0x5015,	// (0x0001c7f1) battery_pane_stacon_ParamLimits

0x5015,	// (0x0001c7f1) battery_pane_stacon

0x5059,	// (0x0001c835) control_bottom_pane_stacon_ParamLimits

0x5059,	// (0x0001c835) control_bottom_pane_stacon

0x507c,	// (0x0001c858) navi_pane_stacon_ParamLimits

0x507c,	// (0x0001c858) navi_pane_stacon

0xc22f,	// (0x00023a0b) stacon_bottom_pane_g1_ParamLimits

0xc22f,	// (0x00023a0b) stacon_bottom_pane_g1

0x4cbf,	// (0x0001c49b) aid_levels_signal_lsc_ParamLimits

0x4cbf,	// (0x0001c49b) aid_levels_signal_lsc

0x4cd6,	// (0x0001c4b2) signal_pane_stacon_g1_ParamLimits

0x4cd6,	// (0x0001c4b2) signal_pane_stacon_g1

0x4cea,	// (0x0001c4c6) signal_pane_stacon_g2_ParamLimits

0x4cea,	// (0x0001c4c6) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x00026ee4) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x00026ee4) signal_pane_stacon_g

0x4d1f,	// (0x0001c4fb) title_pane_stacon_t1_ParamLimits

0x4d1f,	// (0x0001c4fb) title_pane_stacon_t1

0xbddc,	// (0x000235b8) uni_indicator_pane_stacon_g1

0xbde6,	// (0x000235c2) uni_indicator_pane_stacon_g2

0xbdf0,	// (0x000235cc) uni_indicator_pane_stacon_g3

0xbdfa,	// (0x000235d6) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x00026ef0) uni_indicator_pane_stacon_g

0x4d44,	// (0x0001c520) control_top_pane_stacon_g1

0x4d4c,	// (0x0001c528) control_top_pane_stacon_t1_ParamLimits

0x4d4c,	// (0x0001c528) control_top_pane_stacon_t1

0x4d83,	// (0x0001c55f) aid_levels_battery_lsc_ParamLimits

0x4d83,	// (0x0001c55f) aid_levels_battery_lsc

0x4d9b,	// (0x0001c577) battery_pane_stacon_g1_ParamLimits

0x4d9b,	// (0x0001c577) battery_pane_stacon_g1

0x4dae,	// (0x0001c58a) battery_pane_stacon_g2_ParamLimits

0x4dae,	// (0x0001c58a) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x00026ef9) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x00026ef9) battery_pane_stacon_g

0x4dec,	// (0x0001c5c8) navi_icon_pane_stacon

0x4e00,	// (0x0001c5dc) navi_navi_pane_stacon

0x4dec,	// (0x0001c5c8) navi_text_pane_stacon

0x4d44,	// (0x0001c520) control_bottom_pane_stacon_g1

0x4e14,	// (0x0001c5f0) control_bottom_pane_stacon_t1_ParamLimits

0x4e14,	// (0x0001c5f0) control_bottom_pane_stacon_t1

0x81bc,	// (0x0001f998) grid_app_pane_ParamLimits

0x81bc,	// (0x0001f998) grid_app_pane

0x81f4,	// (0x0001f9d0) scroll_pane_cp15_ParamLimits

0x81f4,	// (0x0001f9d0) scroll_pane_cp15

0x8211,	// (0x0001f9ed) cell_app_pane_ParamLimits

0x8211,	// (0x0001f9ed) cell_app_pane

0x8256,	// (0x0001fa32) cell_app_pane_g1_ParamLimits

0x8256,	// (0x0001fa32) cell_app_pane_g1

0xbe1e,	// (0x000235fa) cell_app_pane_g2_ParamLimits

0xbe1e,	// (0x000235fa) cell_app_pane_g2

0x0001,

0xf722,	// (0x00026efe) cell_app_pane_g_ParamLimits

0xf722,	// (0x00026efe) cell_app_pane_g

0xbe2a,	// (0x00023606) cell_app_pane_t1_ParamLimits

0xbe2a,	// (0x00023606) cell_app_pane_t1

0xbe3c,	// (0x00023618) grid_highlight_pane_ParamLimits

0xbe3c,	// (0x00023618) grid_highlight_pane

0xbb69,	// (0x00023345) cell_highlight_pane_g1

0xbb71,	// (0x0002334d) cell_highlight_pane_g2

0xbb79,	// (0x00023355) cell_highlight_pane_g3

0xbb81,	// (0x0002335d) cell_highlight_pane_g4

0xbb89,	// (0x00023365) cell_highlight_pane_g5

0xbb91,	// (0x0002336d) cell_highlight_pane_g6

0xbb99,	// (0x00023375) cell_highlight_pane_g7

0xbba1,	// (0x0002337d) cell_highlight_pane_g8

0xbba9,	// (0x00023385) cell_highlight_pane_g9

0xb49b,	// (0x00022c77) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x00026eac) cell_highlight_pane_g

0xbe4d,	// (0x00023629) bg_scroll_pane

0x4e5e,	// (0x0001c63a) scroll_handle_pane

0xbe94,	// (0x00023670) scroll_bg_pane_g1

0xbea9,	// (0x00023685) scroll_bg_pane_g2

0xbec1,	// (0x0002369d) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x00026f03) scroll_bg_pane_g

0xbed6,	// (0x000236b2) scroll_handle_focus_pane_ParamLimits

0xbed6,	// (0x000236b2) scroll_handle_focus_pane

0xbe94,	// (0x00023670) scroll_handle_pane_g1

0xbee3,	// (0x000236bf) scroll_handle_pane_g2

0xbec1,	// (0x0002369d) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x00026f0a) scroll_handle_pane_g

0xbbba,	// (0x00023396) bg_popup_sub_pane_cp21_ParamLimits

0xbbba,	// (0x00023396) bg_popup_sub_pane_cp21

0xbef7,	// (0x000236d3) popup_fep_japan_predictive_window_t1_ParamLimits

0xbef7,	// (0x000236d3) popup_fep_japan_predictive_window_t1

0xbf11,	// (0x000236ed) popup_fep_japan_predictive_window_t2_ParamLimits

0xbf11,	// (0x000236ed) popup_fep_japan_predictive_window_t2

0xbf44,	// (0x00023720) popup_fep_japan_predictive_window_t3_ParamLimits

0xbf44,	// (0x00023720) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x00026f11) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x00026f11) popup_fep_japan_predictive_window_t

0xb4a5,	// (0x00022c81) bg_popup_sub_pane_cp23

0xbf7b,	// (0x00023757) listscroll_japin_cand_pane

0xbf83,	// (0x0002375f) popup_fep_japan_candidate_window_t1

0xbf91,	// (0x0002376d) candidate_pane_ParamLimits

0xbf91,	// (0x0002376d) candidate_pane

0xbfa3,	// (0x0002377f) scroll_pane_cp30

0xbfab,	// (0x00023787) list_single_popup_jap_candidate_pane_ParamLimits

0xbfab,	// (0x00023787) list_single_popup_jap_candidate_pane

0xb4a5,	// (0x00022c81) list_highlight_pane_cp30

0xbfc0,	// (0x0002379c) list_single_popup_jap_candidate_pane_t1

0xbfcf,	// (0x000237ab) level_1_signal

0xbfdc,	// (0x000237b8) level_2_signal

0xbfe9,	// (0x000237c5) level_3_signal

0xbff6,	// (0x000237d2) level_4_signal

0xc003,	// (0x000237df) level_5_signal

0xc010,	// (0x000237ec) level_6_signal

0xc01d,	// (0x000237f9) level_7_signal

0xbfcf,	// (0x000237ab) level_1_battery

0xbfdc,	// (0x000237b8) level_2_battery

0xbfe9,	// (0x000237c5) level_3_battery

0xbff6,	// (0x000237d2) level_4_battery

0xc003,	// (0x000237df) level_5_battery

0xc010,	// (0x000237ec) level_6_battery

0xc01d,	// (0x000237f9) level_7_battery

0xc042,	// (0x0002381e) list_menu_pane_ParamLimits

0xc042,	// (0x0002381e) list_menu_pane

0xc053,	// (0x0002382f) scroll_pane_cp25_ParamLimits

0xc053,	// (0x0002382f) scroll_pane_cp25

0xc06c,	// (0x00023848) list_double2_graphic_pane_cp2_ParamLimits

0xc06c,	// (0x00023848) list_double2_graphic_pane_cp2

0xc06c,	// (0x00023848) list_double2_large_graphic_pane_cp2_ParamLimits

0xc06c,	// (0x00023848) list_double2_large_graphic_pane_cp2

0xc06c,	// (0x00023848) list_double2_pane_cp2_ParamLimits

0xc06c,	// (0x00023848) list_double2_pane_cp2

0xc06c,	// (0x00023848) list_double_graphic_pane_cp2_ParamLimits

0xc06c,	// (0x00023848) list_double_graphic_pane_cp2

0xc06c,	// (0x00023848) list_double_large_graphic_pane_cp2_ParamLimits

0xc06c,	// (0x00023848) list_double_large_graphic_pane_cp2

0xc06c,	// (0x00023848) list_double_number_pane_cp2_ParamLimits

0xc06c,	// (0x00023848) list_double_number_pane_cp2

0xc06c,	// (0x00023848) list_double_pane_cp2_ParamLimits

0xc06c,	// (0x00023848) list_double_pane_cp2

0x8292,	// (0x0001fa6e) list_single_2graphic_pane_cp2_ParamLimits

0x8292,	// (0x0001fa6e) list_single_2graphic_pane_cp2

0x8292,	// (0x0001fa6e) list_single_graphic_heading_pane_cp2_ParamLimits

0x8292,	// (0x0001fa6e) list_single_graphic_heading_pane_cp2

0x8292,	// (0x0001fa6e) list_single_graphic_pane_cp2_ParamLimits

0x8292,	// (0x0001fa6e) list_single_graphic_pane_cp2

0x8292,	// (0x0001fa6e) list_single_heading_pane_cp2_ParamLimits

0x8292,	// (0x0001fa6e) list_single_heading_pane_cp2

0xc07c,	// (0x00023858) list_single_large_graphic_pane_cp2_ParamLimits

0xc07c,	// (0x00023858) list_single_large_graphic_pane_cp2

0x8292,	// (0x0001fa6e) list_single_number_heading_pane_cp2_ParamLimits

0x8292,	// (0x0001fa6e) list_single_number_heading_pane_cp2

0x8292,	// (0x0001fa6e) list_single_number_pane_cp2_ParamLimits

0x8292,	// (0x0001fa6e) list_single_number_pane_cp2

0x8292,	// (0x0001fa6e) list_single_pane_cp2_ParamLimits

0x8292,	// (0x0001fa6e) list_single_pane_cp2

0xc096,	// (0x00023872) bg_popup_sub_pane_cp22

0x4f10,	// (0x0001c6ec) popup_side_volume_key_window_g1

0x4f3a,	// (0x0001c716) popup_side_volume_key_window_t1

0x4f56,	// (0x0001c732) volume_small_pane_cp1

0xb4f3,	// (0x00022ccf) bg_popup_sub_pane_cp24_ParamLimits

0xb4f3,	// (0x00022ccf) bg_popup_sub_pane_cp24

0xc0ac,	// (0x00023888) fep_china_uni_candidate_pane_ParamLimits

0xc0ac,	// (0x00023888) fep_china_uni_candidate_pane

0xc0c0,	// (0x0002389c) fep_china_uni_entry_pane

0xc0d0,	// (0x000238ac) popup_fep_china_uni_window_g1

0xc0ec,	// (0x000238c8) fep_china_uni_entry_pane_g1

0xc0f4,	// (0x000238d0) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x00026f3e) fep_china_uni_entry_pane_g

0xc0fc,	// (0x000238d8) fep_entry_item_pane

0xc106,	// (0x000238e2) fep_candidate_item_pane

0xc10e,	// (0x000238ea) fep_china_uni_candidate_pane_g1

0xc116,	// (0x000238f2) fep_china_uni_candidate_pane_g2

0xc11e,	// (0x000238fa) fep_china_uni_candidate_pane_g3

0xc126,	// (0x00023902) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x00026f43) fep_china_uni_candidate_pane_g

0xb49b,	// (0x00022c77) fep_entry_item_pane_g1

0xc12e,	// (0x0002390a) fep_entry_item_pane_t1_ParamLimits

0xc12e,	// (0x0002390a) fep_entry_item_pane_t1

0xc144,	// (0x00023920) fep_candidate_item_pane_t1_ParamLimits

0xc144,	// (0x00023920) fep_candidate_item_pane_t1

0xc159,	// (0x00023935) fep_candidate_item_pane_t2_ParamLimits

0xc159,	// (0x00023935) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x00026f4c) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x00026f4c) fep_candidate_item_pane_t

0xb501,	// (0x00022cdd) list_highlight_pane_cp31_ParamLimits

0xb501,	// (0x00022cdd) list_highlight_pane_cp31

0xc16b,	// (0x00023947) level_1_signal_lsc

0xc174,	// (0x00023950) level_2_signal_lsc

0xc17d,	// (0x00023959) level_3_signal_lsc

0xc186,	// (0x00023962) level_4_signal_lsc

0xc18f,	// (0x0002396b) level_5_signal_lsc

0xc198,	// (0x00023974) level_6_signal_lsc

0xc1a1,	// (0x0002397d) level_7_signal_lsc

0xc1a1,	// (0x0002397d) level_1_battery_lsc

0xc1aa,	// (0x00023986) level_2_battery_lsc

0xc1b3,	// (0x0002398f) level_3_battery_lsc

0xc1bc,	// (0x00023998) level_4_battery_lsc

0xc1c5,	// (0x000239a1) level_5_battery_lsc

0xc1ce,	// (0x000239aa) level_6_battery_lsc

0xc16b,	// (0x00023947) level_7_battery_lsc

0xc1d7,	// (0x000239b3) scroll_handle_focus_pane_g1

0xc1e0,	// (0x000239bc) scroll_handle_focus_pane_g2

0xc1e9,	// (0x000239c5) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x00026f51) scroll_handle_focus_pane_g

0x78e9,	// (0x0001f0c5) list_single_2graphic_pane_g1_ParamLimits

0x78e9,	// (0x0001f0c5) list_single_2graphic_pane_g1

0x73d9,	// (0x0001ebb5) list_single_2graphic_pane_g2_ParamLimits

0x73d9,	// (0x0001ebb5) list_single_2graphic_pane_g2

0x4048,	// (0x0001b824) list_single_2graphic_pane_g3_ParamLimits

0x4048,	// (0x0001b824) list_single_2graphic_pane_g3

0x78f5,	// (0x0001f0d1) list_single_2graphic_pane_g4_ParamLimits

0x78f5,	// (0x0001f0d1) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x00026f58) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x00026f58) list_single_2graphic_pane_g

0x7906,	// (0x0001f0e2) list_single_2graphic_pane_t1_ParamLimits

0x7906,	// (0x0001f0e2) list_single_2graphic_pane_t1

0x7934,	// (0x0001f110) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7934,	// (0x0001f110) list_double2_graphic_large_graphic_pane_g1

0x7438,	// (0x0001ec14) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7438,	// (0x0001ec14) list_double2_graphic_large_graphic_pane_g2

0x3b91,	// (0x0001b36d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x3b91,	// (0x0001b36d) list_double2_graphic_large_graphic_pane_g3

0x7946,	// (0x0001f122) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7946,	// (0x0001f122) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x00026f61) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x00026f61) list_double2_graphic_large_graphic_pane_g

0x7952,	// (0x0001f12e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7952,	// (0x0001f12e) list_double2_graphic_large_graphic_pane_t1

0x7968,	// (0x0001f144) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7968,	// (0x0001f144) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x00026f6a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x00026f6a) list_double2_graphic_large_graphic_pane_t

0xc2aa,	// (0x00023a86) popup_fast_swap_window_ParamLimits

0xc2aa,	// (0x00023a86) popup_fast_swap_window

0xc2c6,	// (0x00023aa2) popup_side_volume_key_window

0xc2e2,	// (0x00023abe) stacon_top_pane

0xc2ec,	// (0x00023ac8) status_pane_ParamLimits

0xc2ec,	// (0x00023ac8) status_pane

0xc2e2,	// (0x00023abe) status_small_pane

0xb4a5,	// (0x00022c81) control_pane

0xb4a5,	// (0x00022c81) stacon_bottom_pane

0xbae5,	// (0x000232c1) scroll_pane_cp121

0xbadc,	// (0x000232b8) set_content_pane

0xc1f2,	// (0x000239ce) bg_active_tab_pane_g1_cp1

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp1

0xc204,	// (0x000239e0) bg_active_tab_pane_g3_cp1

0xc1f2,	// (0x000239ce) bg_passive_tab_pane_g1_cp1

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp1

0xc204,	// (0x000239e0) bg_passive_tab_pane_g3_cp1

0x82f2,	// (0x0001face) bg_active_tab_pane_g1_cp2

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp2

0x82fb,	// (0x0001fad7) bg_active_tab_pane_g3_cp2

0x82f2,	// (0x0001face) bg_passive_tab_pane_g1_cp2

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp2

0x82fb,	// (0x0001fad7) bg_passive_tab_pane_g3_cp2

0x8304,	// (0x0001fae0) bg_active_tab_pane_g1_cp3

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp3

0x830d,	// (0x0001fae9) bg_active_tab_pane_g3_cp3

0x8304,	// (0x0001fae0) bg_passive_tab_pane_g1_cp3

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp3

0x830d,	// (0x0001fae9) bg_passive_tab_pane_g3_cp3

0x8316,	// (0x0001faf2) bg_active_tab_pane_g1_cp4

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp4

0x831f,	// (0x0001fafb) bg_active_tab_pane_g3_cp4

0x8316,	// (0x0001faf2) bg_passive_tab_pane_g1_cp4

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp4

0x831f,	// (0x0001fafb) bg_passive_tab_pane_g3_cp4

0xc24b,	// (0x00023a27) bg_active_tab_pane_g1_cp5

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp5

0xc254,	// (0x00023a30) bg_active_tab_pane_g3_cp5

0xc24b,	// (0x00023a27) bg_passive_tab_pane_g1_cp5

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp5

0xc254,	// (0x00023a30) bg_passive_tab_pane_g3_cp5

0x810e,	// (0x0001f8ea) list_set_graphic_pane_ParamLimits

0x810e,	// (0x0001f8ea) list_set_graphic_pane

0xb4a5,	// (0x00022c81) bg_set_opt_pane_cp4

0x8328,	// (0x0001fb04) list_set_graphic_pane_g1_ParamLimits

0x8328,	// (0x0001fb04) list_set_graphic_pane_g1

0x8334,	// (0x0001fb10) list_set_graphic_pane_g2_ParamLimits

0x8334,	// (0x0001fb10) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x00026f6f) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x00026f6f) list_set_graphic_pane_g

0x0009,

0xfaf9,	// (0x000272d5) volume_small_pane_cp_g

0xc25d,	// (0x00023a39) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc25d,	// (0x00023a39) list_double2_large_graphic_pane_g1_cp2

0xc269,	// (0x00023a45) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc269,	// (0x00023a45) list_double2_large_graphic_pane_g2_cp2

0xc27a,	// (0x00023a56) list_double2_large_graphic_pane_g3_cp2

0xc282,	// (0x00023a5e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc282,	// (0x00023a5e) list_double2_large_graphic_pane_t1_cp2

0xc298,	// (0x00023a74) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc298,	// (0x00023a74) list_double2_large_graphic_pane_t2_cp2

0xd9e5,	// (0x000251c1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd9e5,	// (0x000251c1) list_double_large_graphic_pane_g1_cp2

0xd9f6,	// (0x000251d2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd9f6,	// (0x000251d2) list_double_large_graphic_pane_g2_cp2

0xc408,	// (0x00023be4) list_double_large_graphic_pane_g3_cp2

0xda07,	// (0x000251e3) list_double_large_graphic_pane_g4_cp

0xda0f,	// (0x000251eb) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xda0f,	// (0x000251eb) list_double_large_graphic_pane_t1_cp2

0xda26,	// (0x00025202) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xda26,	// (0x00025202) list_double_large_graphic_pane_t2_cp2

0xc2fa,	// (0x00023ad6) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc2fa,	// (0x00023ad6) list_double2_graphic_pane_g1_cp2

0xc308,	// (0x00023ae4) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc308,	// (0x00023ae4) list_double2_graphic_pane_g2_cp2

0xc319,	// (0x00023af5) list_double2_graphic_pane_g3_cp2

0xc323,	// (0x00023aff) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc323,	// (0x00023aff) list_double2_graphic_pane_t1_cp2

0xc339,	// (0x00023b15) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc339,	// (0x00023b15) list_double2_graphic_pane_t2_cp2

0xc34b,	// (0x00023b27) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc34b,	// (0x00023b27) list_single_number_heading_pane_g1_cp2

0xc357,	// (0x00023b33) list_single_number_heading_pane_g2_cp2

0xc35f,	// (0x00023b3b) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc35f,	// (0x00023b3b) list_single_number_heading_pane_t1_cp2

0xc375,	// (0x00023b51) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc375,	// (0x00023b51) list_single_number_heading_pane_t2_cp2

0xc387,	// (0x00023b63) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc387,	// (0x00023b63) list_single_number_heading_pane_t3_cp2

0xc34b,	// (0x00023b27) list_single_heading_pane_g1_cp2_ParamLimits

0xc34b,	// (0x00023b27) list_single_heading_pane_g1_cp2

0xc357,	// (0x00023b33) list_single_heading_pane_g2_cp2

0xc35f,	// (0x00023b3b) list_single_heading_pane_t1_cp2_ParamLimits

0xc35f,	// (0x00023b3b) list_single_heading_pane_t1_cp2

0xd7c3,	// (0x00024f9f) list_single_heading_pane_t2_cp2_ParamLimits

0xd7c3,	// (0x00024f9f) list_single_heading_pane_t2_cp2

0xd729,	// (0x00024f05) list_double_graphic_pane_g1_cp2_ParamLimits

0xd729,	// (0x00024f05) list_double_graphic_pane_g1_cp2

0xd735,	// (0x00024f11) list_double_graphic_pane_g2_cp2_ParamLimits

0xd735,	// (0x00024f11) list_double_graphic_pane_g2_cp2

0xd744,	// (0x00024f20) list_double_graphic_pane_g3_cp2

0xd74c,	// (0x00024f28) list_double_graphic_pane_t1_cp2_ParamLimits

0xd74c,	// (0x00024f28) list_double_graphic_pane_t1_cp2

0xd762,	// (0x00024f3e) list_double_graphic_pane_t2_cp2_ParamLimits

0xd762,	// (0x00024f3e) list_double_graphic_pane_t2_cp2

0xc3fc,	// (0x00023bd8) list_double_number_pane_g1_cp2_ParamLimits

0xc3fc,	// (0x00023bd8) list_double_number_pane_g1_cp2

0xc408,	// (0x00023be4) list_double_number_pane_g2_cp2

0xd6ed,	// (0x00024ec9) list_double_number_pane_t1_cp2_ParamLimits

0xd6ed,	// (0x00024ec9) list_double_number_pane_t1_cp2

0xd701,	// (0x00024edd) list_double_number_pane_t2_cp2_ParamLimits

0xd701,	// (0x00024edd) list_double_number_pane_t2_cp2

0xd717,	// (0x00024ef3) list_double_number_pane_t3_cp2_ParamLimits

0xd717,	// (0x00024ef3) list_double_number_pane_t3_cp2

0xd664,	// (0x00024e40) list_single_graphic_pane_g1_cp2_ParamLimits

0xd664,	// (0x00024e40) list_single_graphic_pane_g1_cp2

0xc460,	// (0x00023c3c) list_single_graphic_pane_g2_cp2_ParamLimits

0xc460,	// (0x00023c3c) list_single_graphic_pane_g2_cp2

0xc46c,	// (0x00023c48) list_single_graphic_pane_g3_cp2

0xd63a,	// (0x00024e16) list_single_graphic_pane_t1_cp2_ParamLimits

0xd63a,	// (0x00024e16) list_single_graphic_pane_t1_cp2

0xc460,	// (0x00023c3c) list_single_number_pane_g1_cp2_ParamLimits

0xc460,	// (0x00023c3c) list_single_number_pane_g1_cp2

0xc46c,	// (0x00023c48) list_single_number_pane_g2_cp2

0xd63a,	// (0x00024e16) list_single_number_pane_t1_cp2_ParamLimits

0xd63a,	// (0x00024e16) list_single_number_pane_t1_cp2

0xd650,	// (0x00024e2c) list_single_number_pane_t2_cp2_ParamLimits

0xd650,	// (0x00024e2c) list_single_number_pane_t2_cp2

0xc269,	// (0x00023a45) list_double2_pane_g1_cp2_ParamLimits

0xc269,	// (0x00023a45) list_double2_pane_g1_cp2

0xc27a,	// (0x00023a56) list_double2_pane_g2_cp2

0xc3d4,	// (0x00023bb0) list_double2_pane_t1_cp2_ParamLimits

0xc3d4,	// (0x00023bb0) list_double2_pane_t1_cp2

0xc3ea,	// (0x00023bc6) list_double2_pane_t2_cp2_ParamLimits

0xc3ea,	// (0x00023bc6) list_double2_pane_t2_cp2

0xc3fc,	// (0x00023bd8) list_double_pane_g1_cp2_ParamLimits

0xc3fc,	// (0x00023bd8) list_double_pane_g1_cp2

0xc408,	// (0x00023be4) list_double_pane_g2_cp2

0xc410,	// (0x00023bec) list_double_pane_t1_cp2_ParamLimits

0xc410,	// (0x00023bec) list_double_pane_t1_cp2

0xc426,	// (0x00023c02) list_double_pane_t2_cp2_ParamLimits

0xc426,	// (0x00023c02) list_double_pane_t2_cp2

0xc450,	// (0x00023c2c) list_single_pane_cp2_g3

0xc460,	// (0x00023c3c) list_single_pane_g1_cp2_ParamLimits

0xc460,	// (0x00023c3c) list_single_pane_g1_cp2

0xc46c,	// (0x00023c48) list_single_pane_g2_cp2

0xc474,	// (0x00023c50) list_single_pane_t1_cp2_ParamLimits

0xc474,	// (0x00023c50) list_single_pane_t1_cp2

0xc48c,	// (0x00023c68) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc48c,	// (0x00023c68) list_single_large_graphic_pane_g1_cp2

0xc498,	// (0x00023c74) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc498,	// (0x00023c74) list_single_large_graphic_pane_g2_cp2

0xc4a4,	// (0x00023c80) list_single_large_graphic_pane_g3_cp2

0xc4ac,	// (0x00023c88) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc4ac,	// (0x00023c88) list_single_large_graphic_pane_g4_cp1

0xc4c6,	// (0x00023ca2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc4c6,	// (0x00023ca2) list_single_large_graphic_pane_t1_cp2

0xd606,	// (0x00024de2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd606,	// (0x00024de2) list_single_graphic_heading_pane_g1_cp2

0xd5d3,	// (0x00024daf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd5d3,	// (0x00024daf) list_single_graphic_heading_pane_g4_cp2

0xc46c,	// (0x00023c48) list_single_graphic_heading_pane_g5_cp2

0xd612,	// (0x00024dee) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd612,	// (0x00024dee) list_single_graphic_heading_pane_t1_cp2

0xd628,	// (0x00024e04) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd628,	// (0x00024e04) list_single_graphic_heading_pane_t2_cp2

0xd5c7,	// (0x00024da3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd5c7,	// (0x00024da3) list_single_2graphic_pane_g1_cp2

0xd5d3,	// (0x00024daf) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd5d3,	// (0x00024daf) list_single_2graphic_pane_g2_cp2

0xc46c,	// (0x00023c48) list_single_2graphic_pane_g3_cp2

0xd5e4,	// (0x00024dc0) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd5e4,	// (0x00024dc0) list_single_2graphic_pane_g4_cp2

0xd5f0,	// (0x00024dcc) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd5f0,	// (0x00024dcc) list_single_2graphic_pane_t1_cp2

0xb49b,	// (0x00022c77) list_highlight_pane_g10_cp1

0xd1bd,	// (0x00024999) list_highlight_pane_g1_cp1

0xd1c5,	// (0x000249a1) list_highlight_pane_g2_cp1

0xd1cd,	// (0x000249a9) list_highlight_pane_g3_cp1

0xd1d5,	// (0x000249b1) list_highlight_pane_g4_cp1

0xd1dd,	// (0x000249b9) list_highlight_pane_g5_cp1

0xd1e5,	// (0x000249c1) list_highlight_pane_g6_cp1

0xd1ed,	// (0x000249c9) list_highlight_pane_g7_cp1

0xd1f5,	// (0x000249d1) list_highlight_pane_g8_cp1

0xd1fd,	// (0x000249d9) list_highlight_pane_g9_cp1

0x914b,	// (0x00020927) form_field_slider_pane_t3

0x9159,	// (0x00020935) form_field_slider_pane_t4

0xd0f9,	// (0x000248d5) slider_form_pane_ParamLimits

0xd0f9,	// (0x000248d5) slider_form_pane

0xb4a5,	// (0x00022c81) control_abbreviations

0xb4a5,	// (0x00022c81) control_conventions

0xb4a5,	// (0x00022c81) control_definitions

0xb4a5,	// (0x00022c81) format_table_attribute

0xd80d,	// (0x00024fe9) bg_popup_preview_window_pane_g9

0xb4a5,	// (0x00022c81) format_table_data2

0xb4a5,	// (0x00022c81) format_table_data3

0xb4a5,	// (0x00022c81) format_table_data_example

0x0008,

0xb4a5,	// (0x00022c81) intro_purpose

0xf923,	// (0x000270ff) bg_popup_preview_window_pane_g

0xb4a5,	// (0x00022c81) texts_category

0xb4a5,	// (0x00022c81) texts_graphics

0xc4dc,	// (0x00023cb8) text_digital

0xc4eb,	// (0x00023cc7) text_primary

0xc4fa,	// (0x00023cd6) text_primary_small

0xc509,	// (0x00023ce5) text_secondary

0xc518,	// (0x00023cf4) text_title

0xdcc6,	// (0x000254a2) bg_passive_tab_pane_g1_cp3_srt

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp3_srt

0xdccf,	// (0x000254ab) bg_passive_tab_pane_g3_cp3_srt

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp3_srt_ParamLimits

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp3_srt

0xdcd8,	// (0x000254b4) tabs_4_active_pane_srt_g1

0x9628,	// (0x00020e04) tabs_4_active_pane_srt_t1_ParamLimits

0x9628,	// (0x00020e04) tabs_4_active_pane_srt_t1

0xdcc6,	// (0x000254a2) bg_active_tab_pane_g1_cp3_copy1

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp3_copy1

0xdccf,	// (0x000254ab) bg_active_tab_pane_g3_cp3_copy1

0xb501,	// (0x00022cdd) tabs_2_long_active_pane_srt_ParamLimits

0xb501,	// (0x00022cdd) tabs_2_long_active_pane_srt

0xb501,	// (0x00022cdd) tabs_2_long_passive_pane_srt_ParamLimits

0xb501,	// (0x00022cdd) tabs_2_long_passive_pane_srt

0xbc5a,	// (0x00023436) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbc5a,	// (0x00023436) bg_passive_tab_pane_cp4_srt

0xdbec,	// (0x000253c8) bg_passive_tab_pane_g1_cp4_srt

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp4_srt

0xdbf5,	// (0x000253d1) bg_passive_tab_pane_g3_cp4_srt

0xb501,	// (0x00022cdd) bg_active_tab_pane_cp4_srt_ParamLimits

0xb501,	// (0x00022cdd) bg_active_tab_pane_cp4_srt

0x9436,	// (0x00020c12) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9436,	// (0x00020c12) tabs_2_long_active_pane_srt_t1

0xdbec,	// (0x000253c8) bg_active_tab_pane_g1_cp4_srt

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp4_srt

0xdbf5,	// (0x000253d1) bg_active_tab_pane_g3_cp4_srt

0xb4f3,	// (0x00022ccf) tabs_3_long_active_pane_srt_ParamLimits

0xb4f3,	// (0x00022ccf) tabs_3_long_active_pane_srt

0xb4f3,	// (0x00022ccf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb4f3,	// (0x00022ccf) tabs_3_long_passive_pane_cp_srt

0xb4f3,	// (0x00022ccf) tabs_3_long_passive_pane_srt_ParamLimits

0xb4f3,	// (0x00022ccf) tabs_3_long_passive_pane_srt

0xbc5a,	// (0x00023436) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbc5a,	// (0x00023436) bg_passive_tab_pane_cp5_srt

0xc24b,	// (0x00023a27) bg_passive_tab_pane_g1_cp5_srt

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp5_srt

0xc254,	// (0x00023a30) bg_passive_tab_pane_g3_cp5_srt

0xb501,	// (0x00022cdd) bg_active_tab_pane_cp5_srt_ParamLimits

0xb501,	// (0x00022cdd) bg_active_tab_pane_cp5_srt

0x9420,	// (0x00020bfc) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9420,	// (0x00020bfc) tabs_3_long_active_pane_srt_t1

0xc24b,	// (0x00023a27) bg_active_tab_pane_g1_cp5_srt

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp5_srt

0xc254,	// (0x00023a30) bg_active_tab_pane_g3_cp5_srt

0xdbde,	// (0x000253ba) navi_text_pane_srt_t1

0xdbd6,	// (0x000253b2) navi_icon_pane_srt_g1

0xc61e,	// (0x00023dfa) midp_editing_number_pane_srt

0xc527,	// (0x00023d03) midp_ticker_pane_srt

0xc626,	// (0x00023e02) midp_ticker_pane_srt_g1

0xc62e,	// (0x00023e0a) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x00026f8e) midp_ticker_pane_srt_g

0xc636,	// (0x00023e12) midp_ticker_pane_srt_t1

0xdbc7,	// (0x000253a3) midp_editing_number_pane_t1_copy1

0x8358,	// (0x0001fb34) listscroll_midp_pane

0x8358,	// (0x0001fb34) midp_form_pane

0xc52f,	// (0x00023d0b) midp_info_popup_window_ParamLimits

0xc52f,	// (0x00023d0b) midp_info_popup_window

0xbbba,	// (0x00023396) bg_popup_sub_pane_cp50_ParamLimits

0xbbba,	// (0x00023396) bg_popup_sub_pane_cp50

0xce42,	// (0x0002461e) listscroll_midp_info_pane_ParamLimits

0xce42,	// (0x0002461e) listscroll_midp_info_pane

0xce2a,	// (0x00024606) listscroll_form_midp_pane_ParamLimits

0xce2a,	// (0x00024606) listscroll_form_midp_pane

0xce36,	// (0x00024612) scroll_bar_cp050

0x913f,	// (0x0002091b) list_midp_pane

0xe53c,	// (0x00025d18) signal_pane_g2_cp

0xcd5c,	// (0x00024538) listscroll_midp_info_pane_t1_ParamLimits

0xcd5c,	// (0x00024538) listscroll_midp_info_pane_t1

0xcd74,	// (0x00024550) listscroll_midp_info_pane_t2_ParamLimits

0xcd74,	// (0x00024550) listscroll_midp_info_pane_t2

0xcdb2,	// (0x0002458e) listscroll_midp_info_pane_t3_ParamLimits

0xcdb2,	// (0x0002458e) listscroll_midp_info_pane_t3

0xcdec,	// (0x000245c8) listscroll_midp_info_pane_t4_ParamLimits

0xcdec,	// (0x000245c8) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x0002703a) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x0002703a) listscroll_midp_info_pane_t

0xbc21,	// (0x000233fd) scroll_pane_cp21

0xccfa,	// (0x000244d6) form_midp_field_choice_group_pane

0xcd03,	// (0x000244df) form_midp_field_text_pane

0xcd42,	// (0x0002451e) form_midp_field_time_pane

0xcd4a,	// (0x00024526) form_midp_gauge_slider_pane

0xcd53,	// (0x0002452f) form_midp_gauge_wait_pane

0xb4a5,	// (0x00022c81) form_midp_image_pane

0x797a,	// (0x0001f156) list_single_midp_pane_ParamLimits

0x797a,	// (0x0001f156) list_single_midp_pane

0x911d,	// (0x000208f9) form_midp_field_text_pane_t1

0xcba1,	// (0x0002437d) input_focus_pane_cp050

0xcce9,	// (0x000244c5) list_midp_form_text_pane

0xccb8,	// (0x00024494) form_midp_field_choice_group_pane_t1

0xccc6,	// (0x000244a2) input_focus_pane_cp051

0xccda,	// (0x000244b6) list_midp_choice_pane

0xb4a5,	// (0x00022c81) status_idle_pane

0xcc9c,	// (0x00024478) form_midp_field_time_pane_t1

0xb49b,	// (0x00022c77) wait_anim_pane_g2_copy1

0xccaa,	// (0x00024486) form_midp_field_time_pane_t2

0x0001,

0xc588,	// (0x00023d64) aid_navinavi_width_2_pane

0xf859,	// (0x00027035) form_midp_field_time_pane_t

0xb4a5,	// (0x00022c81) input_focus_pane_cp052

0xb4a5,	// (0x00022c81) bg_input_focus_pane_cp040

0xcc78,	// (0x00024454) form_midp_gauge_slider_pane_t1

0xcc86,	// (0x00024462) form_midp_gauge_slider_pane_t2

0x9101,	// (0x000208dd) form_midp_gauge_slider_pane_t3

0x910f,	// (0x000208eb) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x0002702c) form_midp_gauge_slider_pane_t

0xcc94,	// (0x00024470) form_midp_slider_pane

0xb501,	// (0x00022cdd) bg_input_focus_pane_cp041_ParamLimits

0xb501,	// (0x00022cdd) bg_input_focus_pane_cp041

0xcc45,	// (0x00024421) form_midp_gauge_wait_pane_t1_ParamLimits

0xcc45,	// (0x00024421) form_midp_gauge_wait_pane_t1

0xcc57,	// (0x00024433) form_midp_gauge_wait_pane_t2_ParamLimits

0xcc57,	// (0x00024433) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x00027027) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x00027027) form_midp_gauge_wait_pane_t

0xcc69,	// (0x00024445) form_midp_wait_pane_ParamLimits

0xcc69,	// (0x00024445) form_midp_wait_pane

0xcc0f,	// (0x000243eb) form_midp_image_pane_g1

0xcc18,	// (0x000243f4) form_midp_image_pane_t1

0xcc27,	// (0x00024403) form_midp_image_pane_t2

0xcc36,	// (0x00024412) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x00027020) form_midp_image_pane_t

0xcc06,	// (0x000243e2) list_single_midp_pane_g1

0x40f4,	// (0x0001b8d0) list_single_midp_pane_t1

0x90ec,	// (0x000208c8) list_midp_form_item_pane_ParamLimits

0x90ec,	// (0x000208c8) list_midp_form_item_pane

0xc542,	// (0x00023d1e) list_midp_form_item_pane_t1

0xc551,	// (0x00023d2d) midp_ticker_pane_g1

0xc55d,	// (0x00023d39) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x00026f74) midp_ticker_pane_g

0x8400,	// (0x0001fbdc) midp_ticker_pane_t1

0x95a1,	// (0x00020d7d) midp_editing_number_pane_t1

0xdc5b,	// (0x00025437) midp_editing_number_pane

0xdc6a,	// (0x00025446) midp_ticker_pane

0xdbb7,	// (0x00025393) ai_message_heading_pane

0xb4a5,	// (0x00022c81) bg_popup_window_pane_cp14

0xdbbf,	// (0x0002539b) listscroll_ai_message_pane

0xdb41,	// (0x0002531d) ai_message_heading_pane_g1_ParamLimits

0xdb41,	// (0x0002531d) ai_message_heading_pane_g1

0xdb4d,	// (0x00025329) ai_message_heading_pane_g2_ParamLimits

0xdb4d,	// (0x00025329) ai_message_heading_pane_g2

0xdb59,	// (0x00025335) ai_message_heading_pane_g3_ParamLimits

0xdb59,	// (0x00025335) ai_message_heading_pane_g3

0xdb65,	// (0x00025341) ai_message_heading_pane_g4_ParamLimits

0xdb65,	// (0x00025341) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x00027161) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x00027161) ai_message_heading_pane_g

0xdb71,	// (0x0002534d) ai_message_heading_pane_t1_ParamLimits

0xdb71,	// (0x0002534d) ai_message_heading_pane_t1

0xdb8b,	// (0x00025367) ai_message_heading_pane_t2_ParamLimits

0xdb8b,	// (0x00025367) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x0002716a) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x0002716a) ai_message_heading_pane_t

0xdb9d,	// (0x00025379) bg_popup_heading_pane_cp1_ParamLimits

0xdb9d,	// (0x00025379) bg_popup_heading_pane_cp1

0xdb2f,	// (0x0002530b) list_ai_message_pane_ParamLimits

0xdb2f,	// (0x0002530b) list_ai_message_pane

0xbc21,	// (0x000233fd) scroll_pane_cp10

0xdacb,	// (0x000252a7) list_ai_message_pane_g1

0xdad3,	// (0x000252af) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x0002713e) list_ai_message_pane_g

0xdadb,	// (0x000252b7) list_ai_message_pane_t1_ParamLimits

0xdadb,	// (0x000252b7) list_ai_message_pane_t1

0xdaf0,	// (0x000252cc) list_ai_message_pane_t2_ParamLimits

0xdaf0,	// (0x000252cc) list_ai_message_pane_t2

0xdb05,	// (0x000252e1) list_ai_message_pane_t3_ParamLimits

0xdb05,	// (0x000252e1) list_ai_message_pane_t3

0xdb1a,	// (0x000252f6) list_ai_message_pane_t4_ParamLimits

0xdb1a,	// (0x000252f6) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x00027143) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x00027143) list_ai_message_pane_t

0x93ff,	// (0x00020bdb) cell_ai_soft_ind_pane_ParamLimits

0x93ff,	// (0x00020bdb) cell_ai_soft_ind_pane

0xc569,	// (0x00023d45) cell_ai_soft_ind_pane_g1_ParamLimits

0xc569,	// (0x00023d45) cell_ai_soft_ind_pane_g1

0xb4a5,	// (0x00022c81) grid_highlight_cp1

0xc576,	// (0x00023d52) text_secondary_cp56_ParamLimits

0xc576,	// (0x00023d52) text_secondary_cp56

0xdaa0,	// (0x0002527c) example_general_pane_ParamLimits

0xdaa0,	// (0x0002527c) example_general_pane

0xdaac,	// (0x00025288) example_parent_pane_g1_ParamLimits

0xdaac,	// (0x00025288) example_parent_pane_g1

0xdab8,	// (0x00025294) example_parent_pane_t1_ParamLimits

0xdab8,	// (0x00025294) example_parent_pane_t1

0x8951,	// (0x0002012d) popup_preview_text_window_ParamLimits

0x8951,	// (0x0002012d) popup_preview_text_window

0xc458,	// (0x00023c34) list_single_pane_cp2_g4

0xb6dc,	// (0x00022eb8) bg_popup_preview_window_pane_ParamLimits

0xb6dc,	// (0x00022eb8) bg_popup_preview_window_pane

0xd815,	// (0x00024ff1) popup_preview_text_window_t1_ParamLimits

0xd815,	// (0x00024ff1) popup_preview_text_window_t1

0xd85d,	// (0x00025039) popup_preview_text_window_t2_ParamLimits

0xd85d,	// (0x00025039) popup_preview_text_window_t2

0xd8a6,	// (0x00025082) popup_preview_text_window_t3_ParamLimits

0xd8a6,	// (0x00025082) popup_preview_text_window_t3

0xd8eb,	// (0x000250c7) popup_preview_text_window_t4_ParamLimits

0xd8eb,	// (0x000250c7) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x00027112) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x00027112) popup_preview_text_window_t

0xd969,	// (0x00025145) scroll_pane_cp11

0xcab1,	// (0x0002428d) bg_popup_preview_window_pane_g1

0xd7d5,	// (0x00024fb1) bg_popup_preview_window_pane_g2

0xd7dd,	// (0x00024fb9) bg_popup_preview_window_pane_g3

0xd7e5,	// (0x00024fc1) bg_popup_preview_window_pane_g4

0xd7ed,	// (0x00024fc9) bg_popup_preview_window_pane_g5

0xd7f5,	// (0x00024fd1) bg_popup_preview_window_pane_g6

0xd7fd,	// (0x00024fd9) bg_popup_preview_window_pane_g7

0xd805,	// (0x00024fe1) bg_popup_preview_window_pane_g8

0x4855,	// (0x0001c031) aid_popup_width_pane

0x88cd,	// (0x000200a9) popup_midp_note_alarm_window_ParamLimits

0x88cd,	// (0x000200a9) popup_midp_note_alarm_window

0xbaf6,	// (0x000232d2) data_form_pane_ParamLimits

0x77ed,	// (0x0001efc9) form_field_data_pane_g1

0x77f7,	// (0x0001efd3) form_field_data_pane_t1_ParamLimits

0xbb02,	// (0x000232de) input_focus_pane_ParamLimits

0xbb10,	// (0x000232ec) data_form_wide_pane_ParamLimits

0x3df6,	// (0x0001b5d2) form_field_data_wide_pane_g1

0x3e02,	// (0x0001b5de) form_field_data_wide_pane_t1_ParamLimits

0xb87d,	// (0x00023059) input_focus_pane_cp6_ParamLimits

0x816f,	// (0x0001f94b) input_popup_find_pane_g1_ParamLimits

0x816f,	// (0x0001f94b) input_popup_find_pane_g1

0x4dbf,	// (0x0001c59b) aid_navi_side_left_pane

0x4dd4,	// (0x0001c5b0) aid_navi_side_right_pane

0xd29a,	// (0x00024a76) bg_popup_window_pane_cp30_ParamLimits

0xd29a,	// (0x00024a76) bg_popup_window_pane_cp30

0xd314,	// (0x00024af0) popup_midp_note_alarm_window_g1_ParamLimits

0xd314,	// (0x00024af0) popup_midp_note_alarm_window_g1

0xd344,	// (0x00024b20) popup_midp_note_alarm_window_t1_ParamLimits

0xd344,	// (0x00024b20) popup_midp_note_alarm_window_t1

0xd3e5,	// (0x00024bc1) popup_midp_note_alarm_window_t2_ParamLimits

0xd3e5,	// (0x00024bc1) popup_midp_note_alarm_window_t2

0xd493,	// (0x00024c6f) popup_midp_note_alarm_window_t3_ParamLimits

0xd493,	// (0x00024c6f) popup_midp_note_alarm_window_t3

0xd4c5,	// (0x00024ca1) popup_midp_note_alarm_window_t4_ParamLimits

0xd4c5,	// (0x00024ca1) popup_midp_note_alarm_window_t4

0xd4eb,	// (0x00024cc7) popup_midp_note_alarm_window_t5_ParamLimits

0xd4eb,	// (0x00024cc7) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x000270af) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x000270af) popup_midp_note_alarm_window_t

0xd597,	// (0x00024d73) wait_bar_pane_cp1_ParamLimits

0xd597,	// (0x00024d73) wait_bar_pane_cp1

0xb4a5,	// (0x00022c81) wait_anim_pane_copy1

0xb4a5,	// (0x00022c81) wait_border_pane_copy1

0xcfba,	// (0x00024796) wait_border_pane_g1_copy1

0x3e1c,	// (0x0001b5f8) form_field_popup_pane_g1

0x7811,	// (0x0001efed) form_field_popup_pane_t1_ParamLimits

0xbb02,	// (0x000232de) input_focus_pane_cp7_ParamLimits

0xbb3c,	// (0x00023318) list_form_pane_ParamLimits

0x3e3c,	// (0x0001b618) form_field_popup_wide_pane_g1

0x3e44,	// (0x0001b620) form_field_popup_wide_pane_t1_ParamLimits

0xbb02,	// (0x000232de) input_focus_pane_cp8_ParamLimits

0xbb48,	// (0x00023324) list_form_wide_pane_ParamLimits

0xdcff,	// (0x000254db) aid_size_cell_graphic_pane

0x7890,	// (0x0001f06c) data_form_pane_t1_ParamLimits

0x79a6,	// (0x0001f182) data_form_wide_pane_t1_ParamLimits

0x8d06,	// (0x000204e2) bg_status_flat_pane

0x7da3,	// (0x0001f57f) title_pane_t1_ParamLimits

0xb4bb,	// (0x00022c97) title_pane_t2_ParamLimits

0xb4e1,	// (0x00022cbd) title_pane_t3_ParamLimits

0xf59b,	// (0x00026d77) title_pane_t_ParamLimits

0xbfcf,	// (0x000237ab) level_1_signal_ParamLimits

0xbfdc,	// (0x000237b8) level_2_signal_ParamLimits

0xbfe9,	// (0x000237c5) level_3_signal_ParamLimits

0xbff6,	// (0x000237d2) level_4_signal_ParamLimits

0xc003,	// (0x000237df) level_5_signal_ParamLimits

0xc010,	// (0x000237ec) level_6_signal_ParamLimits

0xc01d,	// (0x000237f9) level_7_signal_ParamLimits

0xbfcf,	// (0x000237ab) level_1_battery_ParamLimits

0xbfdc,	// (0x000237b8) level_2_battery_ParamLimits

0xbfe9,	// (0x000237c5) level_3_battery_ParamLimits

0xbff6,	// (0x000237d2) level_4_battery_ParamLimits

0xc003,	// (0x000237df) level_5_battery_ParamLimits

0xc010,	// (0x000237ec) level_6_battery_ParamLimits

0xc01d,	// (0x000237f9) level_7_battery_ParamLimits

0xd1bd,	// (0x00024999) bg_status_flat_pane_g1

0xd1c5,	// (0x000249a1) bg_status_flat_pane_g2

0xd1cd,	// (0x000249a9) bg_status_flat_pane_g3

0xd1d5,	// (0x000249b1) bg_status_flat_pane_g4

0xd1dd,	// (0x000249b9) bg_status_flat_pane_g5

0xd1e5,	// (0x000249c1) bg_status_flat_pane_g6

0xd1ed,	// (0x000249c9) bg_status_flat_pane_g7

0x7e37,	// (0x0001f613) tabs_3_active_pane_t1_ParamLimits

0x7e37,	// (0x0001f613) tabs_3_passive_pane_t1_ParamLimits

0x7e51,	// (0x0001f62d) tabs_4_active_pane_t1_ParamLimits

0x7e51,	// (0x0001f62d) tabs_4_1_passive_pane_t1_ParamLimits

0x8185,	// (0x0001f961) tabs_2_active_pane_t1_ParamLimits

0x8185,	// (0x0001f961) tabs_2_passive_pane_t1_ParamLimits

0xb501,	// (0x00022cdd) bg_active_tab_pane_cp4_ParamLimits

0x8197,	// (0x0001f973) tabs_2_long_active_pane_t1_ParamLimits

0xbc5a,	// (0x00023436) bg_passive_tab_pane_cp4_ParamLimits

0x530d,	// (0x0001cae9) list_single_midp_graphic_pane_t1_ParamLimits

0xb501,	// (0x00022cdd) bg_active_tab_pane_cp5_ParamLimits

0x81aa,	// (0x0001f986) tabs_3_long_active_pane_t1_ParamLimits

0xbc5a,	// (0x00023436) bg_passive_tab_pane_cp5_ParamLimits

0x530d,	// (0x0001cae9) list_single_midp_graphic_pane_t1

0x8d06,	// (0x000204e2) bg_status_flat_pane_ParamLimits

0xc982,	// (0x0002415e) indicator_pane_cp2_ParamLimits

0xc982,	// (0x0002415e) indicator_pane_cp2

0x8e7d,	// (0x00020659) navi_pane_srt_ParamLimits

0x8e7d,	// (0x00020659) navi_pane_srt

0xc9aa,	// (0x00024186) popup_clock_digital_analogue_window_cp1

0xb545,	// (0x00022d21) indicator_pane_t1

0xc527,	// (0x00023d03) copy_highlight_pane

0xc527,	// (0x00023d03) cursor_graphics_pane

0xc527,	// (0x00023d03) graphic_within_text_pane

0xc527,	// (0x00023d03) link_highlight_pane

0xd92c,	// (0x00025108) popup_preview_text_window_t5_ParamLimits

0xd92c,	// (0x00025108) popup_preview_text_window_t5

0xc590,	// (0x00023d6c) cursor_digital_pane

0xc590,	// (0x00023d6c) cursor_primary_pane

0xc5a1,	// (0x00023d7d) cursor_primary_small_pane

0xc5a9,	// (0x00023d85) cursor_secondary_pane

0xc5b1,	// (0x00023d8d) cursor_title_pane

0xc590,	// (0x00023d6c) link_highlight_digital_pane

0xc598,	// (0x00023d74) link_highlight_primary_pane

0xc5a1,	// (0x00023d7d) link_highlight_primary_small_pane

0xc5a9,	// (0x00023d85) link_highlight_secondary_pane

0xc5b1,	// (0x00023d8d) link_highlight_title_pane

0xc590,	// (0x00023d6c) copy_highlight_digital_pane

0xc590,	// (0x00023d6c) copy_highlight_primary_pane

0xc5a1,	// (0x00023d7d) copy_highlight_primary_small_pane

0xc5a9,	// (0x00023d85) copy_highlight_secondary_pane

0xc5b1,	// (0x00023d8d) copy_highlight_title_pane

0xc5a9,	// (0x00023d85) graphic_text_digital_pane

0xd23d,	// (0x00024a19) graphic_text_primary_pane

0xd246,	// (0x00024a22) graphic_text_primary_small_pane

0xc5a1,	// (0x00023d7d) graphic_text_secondary_pane

0xc590,	// (0x00023d6c) graphic_text_title_pane

0x8412,	// (0x0001fbee) cursor_primary_pane_g1

0xd22f,	// (0x00024a0b) cursor_text_primary_t1

0x917b,	// (0x00020957) cursor_primary_small_pane_g1

0xd221,	// (0x000249fd) cursor_text_primary_small_t1

0x9171,	// (0x0002094d) cursor_primary_small_pane_g1_copy1

0xd213,	// (0x000249ef) cursor_text_primary_small_t1_copy1

0xd205,	// (0x000249e1) cursor_text_title_t1

0x9167,	// (0x00020943) cursor_title_pane_g1

0x8412,	// (0x0001fbee) cursor_digital_pane_g1

0xc5b9,	// (0x00023d95) cursor_text_digital_t1

0xc5de,	// (0x00023dba) link_highlight_primary_pane_g1

0xd1ae,	// (0x0002498a) link_highlight_primary_pane_t1

0xc5c7,	// (0x00023da3) link_highlight_primary_small_pane_g1

0xc5cf,	// (0x00023dab) link_highlight_primary_small_pane_t1

0xc5de,	// (0x00023dba) link_highlight_secondary_pane_g1

0xc5e6,	// (0x00023dc2) link_highlight_secondary_pane_t1

0xd122,	// (0x000248fe) link_highlight_title_pane_g1

0xd12a,	// (0x00024906) link_highlight_title_pane_t1

0xd10b,	// (0x000248e7) link_highlight_digital_pane_g1

0xd113,	// (0x000248ef) link_highlight_digital_pane_t1

0xcfff,	// (0x000247db) copy_highlight_primary_pane_g1

0xd007,	// (0x000247e3) copy_highlight_primary_pane_t1

0xcfd9,	// (0x000247b5) copy_highlight_primary_small_pane_g1

0xcff0,	// (0x000247cc) copy_highlight_primary_small_pane_t1

0xc5f5,	// (0x00023dd1) copy_highlight_secondary_pane_g1

0xc5fd,	// (0x00023dd9) copy_highlight_secondary_pane_t1

0xcfd9,	// (0x000247b5) copy_highlight_title_pane_g1

0xcfe1,	// (0x000247bd) copy_highlight_title_pane_t1

0xcfff,	// (0x000247db) copy_highlight_digital_pane_g1

0xde85,	// (0x00025661) copy_highlight_digital_pane_t1

0xddd9,	// (0x000255b5) graphic_text_primary_pane_g1

0xde69,	// (0x00025645) graphic_text_primary_pane_t1

0xde77,	// (0x00025653) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x000271de) graphic_text_primary_pane_t

0xde45,	// (0x00025621) graphic_text_primary_small_pane_g1

0xde4d,	// (0x00025629) graphic_text_primary_small_pane_t1

0xde5b,	// (0x00025637) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x000271d9) graphic_text_primary_small_pane_t

0xde21,	// (0x000255fd) graphic_text_secondary_pane_g1

0xde29,	// (0x00025605) graphic_text_secondary_pane_t1

0xde37,	// (0x00025613) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x000271d4) graphic_text_secondary_pane_t

0xddfd,	// (0x000255d9) graphic_text_title_pane_g1

0xde05,	// (0x000255e1) graphic_text_title_pane_t1

0xde13,	// (0x000255ef) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x000271cf) graphic_text_title_pane_t

0xddd9,	// (0x000255b5) graphic_text_digital_pane_g1

0xdde1,	// (0x000255bd) graphic_text_digital_pane_t1

0xddef,	// (0x000255cb) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x000271ca) graphic_text_digital_pane_t

0xb501,	// (0x00022cdd) navi_icon_pane_srt_ParamLimits

0xb501,	// (0x00022cdd) navi_icon_pane_srt

0xb4a5,	// (0x00022c81) navi_midp_pane_srt

0xb4a5,	// (0x00022c81) navi_navi_pane_srt

0xb501,	// (0x00022cdd) navi_text_pane_srt_ParamLimits

0xb501,	// (0x00022cdd) navi_text_pane_srt

0xdda4,	// (0x00025580) navi_navi_icon_text_pane_srt

0xddac,	// (0x00025588) navi_navi_pane_srt_g1_ParamLimits

0xddac,	// (0x00025588) navi_navi_pane_srt_g1

0xddbe,	// (0x0002559a) navi_navi_pane_srt_g2_ParamLimits

0xddbe,	// (0x0002559a) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x000271c5) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x000271c5) navi_navi_pane_srt_g

0xddd0,	// (0x000255ac) navi_navi_tabs_pane_srt

0xdda4,	// (0x00025580) navi_navi_text_pane_srt

0xdda4,	// (0x00025580) navi_navi_volume_pane_srt

0xdd95,	// (0x00025571) navi_navi_text_pane_srt_t1

0x5687,	// (0x0001ce63) navi_navi_volume_pane_srt_g1

0x568f,	// (0x0001ce6b) volume_small_pane_srt_ParamLimits

0x568f,	// (0x0001ce6b) volume_small_pane_srt

0x509f,	// (0x0001c87b) volume_small_pane_srt_g1_ParamLimits

0x509f,	// (0x0001c87b) volume_small_pane_srt_g1

0x50af,	// (0x0001c88b) volume_small_pane_srt_g2_ParamLimits

0x50af,	// (0x0001c88b) volume_small_pane_srt_g2

0x50c0,	// (0x0001c89c) volume_small_pane_srt_g3_ParamLimits

0x50c0,	// (0x0001c89c) volume_small_pane_srt_g3

0x50d1,	// (0x0001c8ad) volume_small_pane_srt_g4_ParamLimits

0x50d1,	// (0x0001c8ad) volume_small_pane_srt_g4

0x50e2,	// (0x0001c8be) volume_small_pane_srt_g5_ParamLimits

0x50e2,	// (0x0001c8be) volume_small_pane_srt_g5

0x50f3,	// (0x0001c8cf) volume_small_pane_srt_g6_ParamLimits

0x50f3,	// (0x0001c8cf) volume_small_pane_srt_g6

0x5104,	// (0x0001c8e0) volume_small_pane_srt_g7_ParamLimits

0x5104,	// (0x0001c8e0) volume_small_pane_srt_g7

0x5115,	// (0x0001c8f1) volume_small_pane_srt_g8_ParamLimits

0x5115,	// (0x0001c8f1) volume_small_pane_srt_g8

0x5126,	// (0x0001c902) volume_small_pane_srt_g9_ParamLimits

0x5126,	// (0x0001c902) volume_small_pane_srt_g9

0x5137,	// (0x0001c913) volume_small_pane_srt_g10_ParamLimits

0x5137,	// (0x0001c913) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x00026f79) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x00026f79) volume_small_pane_srt_g

0xb785,	// (0x00022f61) query_popup_data_pane_cp2

0xdd7b,	// (0x00025557) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xdd7b,	// (0x00025557) navi_navi_icon_text_pane_srt_t1

0xd23d,	// (0x00024a19) navi_tabs_2_long_pane_srt

0xd23d,	// (0x00024a19) navi_tabs_2_pane_srt

0xd23d,	// (0x00024a19) navi_tabs_3_long_pane_srt

0xd23d,	// (0x00024a19) navi_tabs_3_pane_srt

0xd23d,	// (0x00024a19) navi_tabs_4_pane_srt

0x5667,	// (0x0001ce43) tabs_2_active_pane_srt_ParamLimits

0x5667,	// (0x0001ce43) tabs_2_active_pane_srt

0x5677,	// (0x0001ce53) tabs_2_passive_pane_srt_ParamLimits

0x5677,	// (0x0001ce53) tabs_2_passive_pane_srt

0xcba1,	// (0x0002437d) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcba1,	// (0x0002437d) bg_passive_tab_pane_cp1_srt

0xdd59,	// (0x00025535) bg_passive_tab_pane_g1_cp1_srt

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp1_srt

0xdd62,	// (0x0002553e) bg_passive_tab_pane_g3_cp1_srt

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp1_srt_ParamLimits

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp1_srt

0xdd6b,	// (0x00025547) tabs_2_active_pane_srt_g1

0x96a4,	// (0x00020e80) tabs_2_active_pane_srt_t1_ParamLimits

0x96a4,	// (0x00020e80) tabs_2_active_pane_srt_t1

0xdd59,	// (0x00025535) bg_active_tab_pane_g1_cp1_srt

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp1_srt

0xdd62,	// (0x0002553e) bg_active_tab_pane_g3_cp1_srt

0x5634,	// (0x0001ce10) tabs_3_active_pane_srt_ParamLimits

0x5634,	// (0x0001ce10) tabs_3_active_pane_srt

0x5645,	// (0x0001ce21) tabs_3_passive_pane_cp_srt_ParamLimits

0x5645,	// (0x0001ce21) tabs_3_passive_pane_cp_srt

0x5656,	// (0x0001ce32) tabs_3_passive_pane_srt_ParamLimits

0x5656,	// (0x0001ce32) tabs_3_passive_pane_srt

0xcba1,	// (0x0002437d) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcba1,	// (0x0002437d) bg_passive_tab_pane_cp2_srt

0xc60c,	// (0x00023de8) bg_passive_tab_pane_g1_cp2_srt

0xc1fb,	// (0x000239d7) bg_passive_tab_pane_g2_cp2_srt

0xc615,	// (0x00023df1) bg_passive_tab_pane_g3_cp2_srt

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp2_srt_ParamLimits

0xb4f3,	// (0x00022ccf) bg_active_tab_pane_cp2_srt

0xdd51,	// (0x0002552d) tabs_3_active_pane_srt_g1

0x968e,	// (0x00020e6a) tabs_3_active_pane_srt_t1_ParamLimits

0x968e,	// (0x00020e6a) tabs_3_active_pane_srt_t1

0xc60c,	// (0x00023de8) bg_active_tab_pane_g1_cp2_srt

0xc1fb,	// (0x000239d7) bg_active_tab_pane_g2_cp2_srt

0xc615,	// (0x00023df1) bg_active_tab_pane_g3_cp2_srt

0x55ec,	// (0x0001cdc8) tabs_4_active_pane_srt_ParamLimits

0x55ec,	// (0x0001cdc8) tabs_4_active_pane_srt

0x55fe,	// (0x0001cdda) tabs_4_passive_pane_cp2_srt_ParamLimits

0x55fe,	// (0x0001cdda) tabs_4_passive_pane_cp2_srt

0xc739,	// (0x00023f15) aid_size_cell_toolbar

0xd83f,	// (0x0002501b) main_idle_act_pane_ParamLimits

0xc805,	// (0x00023fe1) popup_large_graphic_colour_window_ParamLimits

0x8bd1,	// (0x000203ad) popup_toolbar_window_ParamLimits

0x8bd1,	// (0x000203ad) popup_toolbar_window

0xdc7d,	// (0x00025459) list_single_graphic_2heading_pane_ParamLimits

0xdc7d,	// (0x00025459) list_single_graphic_2heading_pane

0xbe04,	// (0x000235e0) aid_size_cell_apps_grid_lsc_pane

0xbe16,	// (0x000235f2) aid_size_cell_apps_grid_prt_pane

0xbc5a,	// (0x00023436) bg_wml_button_pane_cp1_ParamLimits

0xbc5a,	// (0x00023436) bg_wml_button_pane_cp1

0x911d,	// (0x000208f9) form_midp_field_text_pane_t1_ParamLimits

0xcba1,	// (0x0002437d) input_focus_pane_cp050_ParamLimits

0xcce9,	// (0x000244c5) list_midp_form_text_pane_ParamLimits

0xccc6,	// (0x000244a2) input_focus_pane_cp051_ParamLimits

0xccda,	// (0x000244b6) list_midp_choice_pane_ParamLimits

0x90b8,	// (0x00020894) list_single_2graphic_pane_cp3_ParamLimits

0x90b8,	// (0x00020894) list_single_2graphic_pane_cp3

0x90cc,	// (0x000208a8) list_single_midp_graphic_pane_ParamLimits

0x90cc,	// (0x000208a8) list_single_midp_graphic_pane

0x4030,	// (0x0001b80c) list_single_graphic_2heading_pane_g1_ParamLimits

0x4030,	// (0x0001b80c) list_single_graphic_2heading_pane_g1

0x403c,	// (0x0001b818) list_single_graphic_2heading_pane_g4_ParamLimits

0x403c,	// (0x0001b818) list_single_graphic_2heading_pane_g4

0x4048,	// (0x0001b824) list_single_graphic_2heading_pane_g5_ParamLimits

0x4048,	// (0x0001b824) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x00026fcc) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x00026fcc) list_single_graphic_2heading_pane_g

0x4054,	// (0x0001b830) list_single_graphic_2heading_pane_t1_ParamLimits

0x4054,	// (0x0001b830) list_single_graphic_2heading_pane_t1

0x4068,	// (0x0001b844) list_single_graphic_2heading_pane_t2_ParamLimits

0x4068,	// (0x0001b844) list_single_graphic_2heading_pane_t2

0x4084,	// (0x0001b860) list_single_graphic_2heading_pane_t3_ParamLimits

0x4084,	// (0x0001b860) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x00026fd3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x00026fd3) list_single_graphic_2heading_pane_t

0xc9ef,	// (0x000241cb) bg_popup_sub_pane_cp2

0xca19,	// (0x000241f5) grid_toobar_pane

0x5294,	// (0x0001ca70) cell_toolbar_pane_ParamLimits

0x5294,	// (0x0001ca70) cell_toolbar_pane

0xca55,	// (0x00024231) cell_toolbar_pane_g1_ParamLimits

0xca55,	// (0x00024231) cell_toolbar_pane_g1

0xca69,	// (0x00024245) cell_toolbar_pane_g2_ParamLimits

0xca69,	// (0x00024245) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x00026fe1) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x00026fe1) cell_toolbar_pane_g

0xca8b,	// (0x00024267) grid_highlight_pane_cp2_ParamLimits

0xca8b,	// (0x00024267) grid_highlight_pane_cp2

0xcaa5,	// (0x00024281) toolbar_button_pane

0xcab1,	// (0x0002428d) toolbar_button_pane_g1

0xcab9,	// (0x00024295) toolbar_button_pane_g2

0xcac1,	// (0x0002429d) toolbar_button_pane_g3

0xcac9,	// (0x000242a5) toolbar_button_pane_g4

0xcad1,	// (0x000242ad) toolbar_button_pane_g5

0xcad9,	// (0x000242b5) toolbar_button_pane_g6

0xcae1,	// (0x000242bd) toolbar_button_pane_g7

0xcae9,	// (0x000242c5) toolbar_button_pane_g8

0xcaf1,	// (0x000242cd) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x00026fe6) toolbar_button_pane_g

0x52cc,	// (0x0001caa8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x52cc,	// (0x0001caa8) list_single_2graphic_pane_g1_cp3

0x901a,	// (0x000207f6) list_single_2graphic_pane_g2_cp3_ParamLimits

0x901a,	// (0x000207f6) list_single_2graphic_pane_g2_cp3

0x52e9,	// (0x0001cac5) list_single_2graphic_pane_g3_cp3

0xc8c2,	// (0x0002409e) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc8c2,	// (0x0002409e) list_single_2graphic_pane_g4_cp3

0x52f1,	// (0x0001cacd) list_single_2graphic_pane_t1_cp3_ParamLimits

0x52f1,	// (0x0001cacd) list_single_2graphic_pane_t1_cp3

0xc8ce,	// (0x000240aa) list_single_midp_graphic_pane_g2_ParamLimits

0xc8ce,	// (0x000240aa) list_single_midp_graphic_pane_g2

0xc741,	// (0x00023f1d) aid_zoom_text_primary

0x4004,	// (0x0001b7e0) aid_zoom_text_secondary

0xc6c9,	// (0x00023ea5) status_small_pane_g7_ParamLimits

0xc6c9,	// (0x00023ea5) status_small_pane_g7

0xc6ec,	// (0x00023ec8) status_small_pane_t1_ParamLimits

0x7d7f,	// (0x0001f55b) title_pane_g2

0x0003,

0xf592,	// (0x00026d6e) title_pane_g

0x8007,	// (0x0001f7e3) aid_size_cell_colour_1_pane_ParamLimits

0x8007,	// (0x0001f7e3) aid_size_cell_colour_1_pane

0x801b,	// (0x0001f7f7) aid_size_cell_colour_2_pane_ParamLimits

0x801b,	// (0x0001f7f7) aid_size_cell_colour_2_pane

0x802f,	// (0x0001f80b) aid_size_cell_colour_3_pane_ParamLimits

0x802f,	// (0x0001f80b) aid_size_cell_colour_3_pane

0x8043,	// (0x0001f81f) aid_size_cell_colour_4_pane_ParamLimits

0x8043,	// (0x0001f81f) aid_size_cell_colour_4_pane

0x4cfb,	// (0x0001c4d7) title_pane_stacon_g1_ParamLimits

0x4cfb,	// (0x0001c4d7) title_pane_stacon_g1

0xd05e,	// (0x0002483a) popup_note_wait_window_g3_ParamLimits

0xd05e,	// (0x0002483a) popup_note_wait_window_g3

0xd0d4,	// (0x000248b0) popup_note_wait_window_t5_ParamLimits

0xd0d4,	// (0x000248b0) popup_note_wait_window_t5

0xb4a5,	// (0x00022c81) main_feb_china_hwr_fs_writing_pane

0x8603,	// (0x0001fddf) popup_feb_china_hwr_fs_window_ParamLimits

0x8603,	// (0x0001fddf) popup_feb_china_hwr_fs_window

0x902b,	// (0x00020807) aid_size_cell_hwr_fs_ParamLimits

0x902b,	// (0x00020807) aid_size_cell_hwr_fs

0xcba1,	// (0x0002437d) bg_popup_sub_pane_cp3_ParamLimits

0xcba1,	// (0x0002437d) bg_popup_sub_pane_cp3

0x9040,	// (0x0002081c) grid_hwr_fs_pane_ParamLimits

0x9040,	// (0x0002081c) grid_hwr_fs_pane

0x5350,	// (0x0001cb2c) linegrid_hwr_fs_pane_ParamLimits

0x5350,	// (0x0001cb2c) linegrid_hwr_fs_pane

0x9058,	// (0x00020834) cell_hwr_fs_pane_ParamLimits

0x9058,	// (0x00020834) cell_hwr_fs_pane

0xcbad,	// (0x00024389) linegrid_hwr_fs_pane_g1_ParamLimits

0xcbad,	// (0x00024389) linegrid_hwr_fs_pane_g1

0x907e,	// (0x0002085a) linegrid_hwr_fs_pane_g2_ParamLimits

0x907e,	// (0x0002085a) linegrid_hwr_fs_pane_g2

0xcbb9,	// (0x00024395) linegrid_hwr_fs_pane_g3_ParamLimits

0xcbb9,	// (0x00024395) linegrid_hwr_fs_pane_g3

0x5382,	// (0x0001cb5e) linegrid_hwr_fs_pane_g4_ParamLimits

0x5382,	// (0x0001cb5e) linegrid_hwr_fs_pane_g4

0x539c,	// (0x0001cb78) linegrid_hwr_fs_pane_g5_ParamLimits

0x539c,	// (0x0001cb78) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x0002700c) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x0002700c) linegrid_hwr_fs_pane_g

0xcbc5,	// (0x000243a1) cell_hwr_fs_pane_g1_ParamLimits

0xcbc5,	// (0x000243a1) cell_hwr_fs_pane_g1

0xc9bb,	// (0x00024197) cell_hwr_fs_pane_g2_ParamLimits

0xc9bb,	// (0x00024197) cell_hwr_fs_pane_g2

0x9090,	// (0x0002086c) cell_hwr_fs_pane_g3_ParamLimits

0x9090,	// (0x0002086c) cell_hwr_fs_pane_g3

0x909d,	// (0x00020879) cell_hwr_fs_pane_g4_ParamLimits

0x909d,	// (0x00020879) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x00027017) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x00027017) cell_hwr_fs_pane_g

0x90aa,	// (0x00020886) cell_hwr_fs_pane_t1

0xb4a5,	// (0x00022c81) grid_highlight_pane_cp6

0xb4a5,	// (0x00022c81) main_idle_act2_pane

0xbc08,	// (0x000233e4) aid_inside_area_popup_secondary

0x92d5,	// (0x00020ab1) aid_inside_area_window_primary_ParamLimits

0x92d5,	// (0x00020ab1) aid_inside_area_window_primary

0xde94,	// (0x00025670) ai2_news_ticker_pane

0xde9c,	// (0x00025678) aid_size_cell_ai1_link_ParamLimits

0xde9c,	// (0x00025678) aid_size_cell_ai1_link

0x96ba,	// (0x00020e96) popup_ai2_data_window_ParamLimits

0x96ba,	// (0x00020e96) popup_ai2_data_window

0xdeb6,	// (0x00025692) popup_ai2_link_window_ParamLimits

0xdeb6,	// (0x00025692) popup_ai2_link_window

0xcba1,	// (0x0002437d) bg_popup_sub_pane_cp4_ParamLimits

0xcba1,	// (0x0002437d) bg_popup_sub_pane_cp4

0xdeca,	// (0x000256a6) grid_ai2_link_pane_ParamLimits

0xdeca,	// (0x000256a6) grid_ai2_link_pane

0xdee1,	// (0x000256bd) popup_ai2_link_window_g1_ParamLimits

0xdee1,	// (0x000256bd) popup_ai2_link_window_g1

0xdeed,	// (0x000256c9) popup_ai2_link_window_g2_ParamLimits

0xdeed,	// (0x000256c9) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x000271e3) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x000271e3) popup_ai2_link_window_g

0xdefc,	// (0x000256d8) ai2_mp_button_pane

0xdf04,	// (0x000256e0) ai2_mp_volume_pane

0xccc6,	// (0x000244a2) bg_popup_sub_pane_cp5_ParamLimits

0xccc6,	// (0x000244a2) bg_popup_sub_pane_cp5

0xdf0c,	// (0x000256e8) heading_ai2_gene_pane_ParamLimits

0xdf0c,	// (0x000256e8) heading_ai2_gene_pane

0xdf18,	// (0x000256f4) list_ai2_gene_pane_ParamLimits

0xdf18,	// (0x000256f4) list_ai2_gene_pane

0xdf60,	// (0x0002573c) cell_ai2_link_pane_ParamLimits

0xdf60,	// (0x0002573c) cell_ai2_link_pane

0xdf76,	// (0x00025752) cell_ai2_link_pane_g1

0xb4a5,	// (0x00022c81) grid_highlight_pane_cp7

0x56a4,	// (0x0001ce80) ai2_mp_volume_pane_g1

0xe013,	// (0x000257ef) ai2_mp_volume_pane_g2

0x96e4,	// (0x00020ec0) list_ai2_gene_pane_t1

0xe01b,	// (0x000257f7) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x000271fc) ai2_mp_volume_pane_g

0x56ac,	// (0x0001ce88) volume_small_pane_cp3

0xe023,	// (0x000257ff) aid_size_cell_ai2_button

0xe02b,	// (0x00025807) grid_ai2_button_pane

0xe034,	// (0x00025810) cell_ai2_button_pane_ParamLimits

0xe034,	// (0x00025810) cell_ai2_button_pane

0xb49b,	// (0x00022c77) cell_ai2_button_pane_g1

0xb4a5,	// (0x00022c81) grid_highlight_pane_cp8

0xdfd3,	// (0x000257af) ai2_gene_pane_t1_ParamLimits

0xdfd3,	// (0x000257af) ai2_gene_pane_t1

0x8579,	// (0x0001fd55) aid_height_parent_landscape

0x944d,	// (0x00020c29) aid_height_set_list

0xd83f,	// (0x0002501b) aid_size_parent

0xdcff,	// (0x000254db) aid_size_cell_graphic_pane_ParamLimits

0xdf28,	// (0x00025704) popup_ai2_data_window_g1_ParamLimits

0xdf28,	// (0x00025704) popup_ai2_data_window_g1

0xdf34,	// (0x00025710) ai2_news_ticker_pane_g1

0xdf3c,	// (0x00025718) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x000271e8) ai2_news_ticker_pane_g

0xdf44,	// (0x00025720) ai2_news_ticker_pane_t1

0xdf52,	// (0x0002572e) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x000271ed) ai2_news_ticker_pane_t

0xdf7f,	// (0x0002575b) heading_ai2_gene_pane_g1

0xdf87,	// (0x00025763) heading_ai2_gene_pane_t1_ParamLimits

0xdf87,	// (0x00025763) heading_ai2_gene_pane_t1

0xdf9c,	// (0x00025778) list_highlight_pane_cp6

0x96ce,	// (0x00020eaa) ai2_gene_pane_ParamLimits

0x96ce,	// (0x00020eaa) ai2_gene_pane

0x96f2,	// (0x00020ece) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x000271f2) list_ai2_gene_pane_t

0xdfa4,	// (0x00025780) list_highlight_pane_cp8_ParamLimits

0xdfa4,	// (0x00025780) list_highlight_pane_cp8

0xdfb5,	// (0x00025791) ai2_gene_pane_g1_ParamLimits

0xdfb5,	// (0x00025791) ai2_gene_pane_g1

0xdfc7,	// (0x000257a3) ai2_gene_pane_g2_ParamLimits

0xdfc7,	// (0x000257a3) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x000271f7) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x000271f7) ai2_gene_pane_g

0xba98,	// (0x00023274) scroll_pane_cp12

0x8536,	// (0x0001fd12) control_pane_t3_ParamLimits

0x8536,	// (0x0001fd12) control_pane_t3

0xc6dd,	// (0x00023eb9) status_small_pane_g8_ParamLimits

0xc6dd,	// (0x00023eb9) status_small_pane_g8

0x8698,	// (0x0001fe74) popup_find_window_ParamLimits

0x8907,	// (0x000200e3) popup_note_image_window_ParamLimits

0x4030,	// (0x0001b80c) list_double2_graphic_pane_vc_g1_ParamLimits

0x4030,	// (0x0001b80c) list_double2_graphic_pane_vc_g1

0x409c,	// (0x0001b878) list_double2_graphic_pane_vc_g2_ParamLimits

0x409c,	// (0x0001b878) list_double2_graphic_pane_vc_g2

0x40a8,	// (0x0001b884) list_double2_graphic_pane_vc_g3_ParamLimits

0x40a8,	// (0x0001b884) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x00026fda) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x00026fda) list_double2_graphic_pane_vc_g

0x40b4,	// (0x0001b890) list_double2_graphic_pane_vc_t1_ParamLimits

0x40b4,	// (0x0001b890) list_double2_graphic_pane_vc_t1

0x403c,	// (0x0001b818) list_single_heading_pane_vc_g1_ParamLimits

0x403c,	// (0x0001b818) list_single_heading_pane_vc_g1

0x4048,	// (0x0001b824) list_single_heading_pane_vc_g2_ParamLimits

0x4048,	// (0x0001b824) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00026de8) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00026de8) list_single_heading_pane_vc_g

0x40ca,	// (0x0001b8a6) list_single_heading_pane_vc_t1_ParamLimits

0x40ca,	// (0x0001b8a6) list_single_heading_pane_vc_t1

0x40e0,	// (0x0001b8bc) list_single_heading_pane_vc_t2_ParamLimits

0x40e0,	// (0x0001b8bc) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x00026ffb) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x00026ffb) list_single_heading_pane_vc_t

0xcaf9,	// (0x000242d5) list_setting_number_pane_vc_g1_ParamLimits

0xcaf9,	// (0x000242d5) list_setting_number_pane_vc_g1

0xcb05,	// (0x000242e1) list_setting_number_pane_vc_g2_ParamLimits

0xcb05,	// (0x000242e1) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x00027000) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x00027000) list_setting_number_pane_vc_g

0xcb11,	// (0x000242ed) list_setting_number_pane_vc_t1_ParamLimits

0xcb11,	// (0x000242ed) list_setting_number_pane_vc_t1

0xcb25,	// (0x00024301) list_setting_number_pane_vc_t2_ParamLimits

0xcb25,	// (0x00024301) list_setting_number_pane_vc_t2

0xcb41,	// (0x0002431d) list_setting_number_pane_vc_t3_ParamLimits

0xcb41,	// (0x0002431d) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x00027005) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x00027005) list_setting_number_pane_vc_t

0xcb67,	// (0x00024343) set_value_pane_vc_ParamLimits

0xcb67,	// (0x00024343) set_value_pane_vc

0xdc7d,	// (0x00025459) list_double2_graphic_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double2_graphic_pane_vc

0xdc7d,	// (0x00025459) list_double2_large_graphic_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double2_large_graphic_pane_vc

0xdc7d,	// (0x00025459) list_double2_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double2_pane_vc

0xdc7d,	// (0x00025459) list_double_graphic_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double_graphic_heading_pane_vc

0xdc7d,	// (0x00025459) list_double_graphic_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double_graphic_pane_vc

0xdc7d,	// (0x00025459) list_double_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double_heading_pane_vc

0xdc7d,	// (0x00025459) list_double_large_graphic_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double_large_graphic_pane_vc

0xdc7d,	// (0x00025459) list_double_number_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double_number_pane_vc

0xdc7d,	// (0x00025459) list_double_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double_pane_vc

0xdc7d,	// (0x00025459) list_double_time_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_double_time_pane_vc

0xdc7d,	// (0x00025459) list_setting_number_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_setting_number_pane_vc

0xdc7d,	// (0x00025459) list_setting_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_setting_pane_vc

0xdc7d,	// (0x00025459) list_single_graphic_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_single_graphic_heading_pane_vc

0xdc7d,	// (0x00025459) list_single_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_single_heading_pane_vc

0xdc7d,	// (0x00025459) list_single_number_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00025459) list_single_number_heading_pane_vc

0x4259,	// (0x0001ba35) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4259,	// (0x0001ba35) list_double_graphic_heading_pane_vc_g1

0x403c,	// (0x0001b818) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x403c,	// (0x0001b818) list_double_graphic_heading_pane_vc_g2

0x4048,	// (0x0001b824) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4048,	// (0x0001b824) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa27,	// (0x00027203) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa27,	// (0x00027203) list_double_graphic_heading_pane_vc_g

0x4265,	// (0x0001ba41) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4265,	// (0x0001ba41) list_double_graphic_heading_pane_vc_t1

0x40ca,	// (0x0001b8a6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x40ca,	// (0x0001b8a6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2e,	// (0x0002720a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002720a) list_double_graphic_heading_pane_vc_t

0xcaf9,	// (0x000242d5) list_setting_pane_vc_g1_ParamLimits

0xcaf9,	// (0x000242d5) list_setting_pane_vc_g1

0xcb05,	// (0x000242e1) list_setting_pane_vc_g2_ParamLimits

0xcb05,	// (0x000242e1) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x00027000) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x00027000) list_setting_pane_vc_g

0xe24a,	// (0x00025a26) list_setting_pane_vc_t1_ParamLimits

0xe24a,	// (0x00025a26) list_setting_pane_vc_t1

0xe25e,	// (0x00025a3a) list_setting_pane_vc_t2_ParamLimits

0xe25e,	// (0x00025a3a) list_setting_pane_vc_t2

0x0001,

0xfa71,	// (0x0002724d) list_setting_pane_vc_t_ParamLimits

0xfa71,	// (0x0002724d) list_setting_pane_vc_t

0xcb67,	// (0x00024343) set_value_pane_cp_vc_ParamLimits

0xcb67,	// (0x00024343) set_value_pane_cp_vc

0x403c,	// (0x0001b818) list_single_number_heading_pane_vc_g1_ParamLimits

0x403c,	// (0x0001b818) list_single_number_heading_pane_vc_g1

0x4048,	// (0x0001b824) list_single_number_heading_pane_vc_g2_ParamLimits

0x4048,	// (0x0001b824) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00026de8) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00026de8) list_single_number_heading_pane_vc_g

0x40ca,	// (0x0001b8a6) list_single_number_heading_pane_vc_t1_ParamLimits

0x40ca,	// (0x0001b8a6) list_single_number_heading_pane_vc_t1

0x4279,	// (0x0001ba55) list_single_number_heading_pane_vc_t2_ParamLimits

0x4279,	// (0x0001ba55) list_single_number_heading_pane_vc_t2

0x428d,	// (0x0001ba69) list_single_number_heading_pane_vc_t3_ParamLimits

0x428d,	// (0x0001ba69) list_single_number_heading_pane_vc_t3

0x0002,

0xfa76,	// (0x00027252) list_single_number_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00027252) list_single_number_heading_pane_vc_t

0x4030,	// (0x0001b80c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4030,	// (0x0001b80c) list_single_graphic_heading_pane_vc_g1

0x403c,	// (0x0001b818) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x403c,	// (0x0001b818) list_single_graphic_heading_pane_vc_g4

0x4048,	// (0x0001b824) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4048,	// (0x0001b824) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f0,	// (0x00026fcc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f0,	// (0x00026fcc) list_single_graphic_heading_pane_vc_g

0x40ca,	// (0x0001b8a6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x40ca,	// (0x0001b8a6) list_single_graphic_heading_pane_vc_t1

0x429f,	// (0x0001ba7b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x429f,	// (0x0001ba7b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x00027259) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x00027259) list_single_graphic_heading_pane_vc_t

0x403c,	// (0x0001b818) list_double2_pane_vc_g1_ParamLimits

0x403c,	// (0x0001b818) list_double2_pane_vc_g1

0x4048,	// (0x0001b824) list_double2_pane_vc_g2_ParamLimits

0x4048,	// (0x0001b824) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x00026de8) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x00026de8) list_double2_pane_vc_g

0x42b3,	// (0x0001ba8f) list_double2_pane_vc_t1_ParamLimits

0x42b3,	// (0x0001ba8f) list_double2_pane_vc_t1

0x42c9,	// (0x0001baa5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x42c9,	// (0x0001baa5) list_double2_large_graphic_pane_vc_g1

0x403c,	// (0x0001b818) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x403c,	// (0x0001b818) list_double2_large_graphic_pane_vc_g2

0x4048,	// (0x0001b824) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4048,	// (0x0001b824) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00026e05) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00026e05) list_double2_large_graphic_pane_vc_g

0x42d5,	// (0x0001bab1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x42d5,	// (0x0001bab1) list_double2_large_graphic_pane_vc_t1

0x42eb,	// (0x0001bac7) list_double_time_pane_vc_g1_ParamLimits

0x42eb,	// (0x0001bac7) list_double_time_pane_vc_g1

0x42f7,	// (0x0001bad3) list_double_time_pane_vc_g2_ParamLimits

0x42f7,	// (0x0001bad3) list_double_time_pane_vc_g2

0x0001,

0xfa82,	// (0x0002725e) list_double_time_pane_vc_g_ParamLimits

0xfa82,	// (0x0002725e) list_double_time_pane_vc_g

0x4303,	// (0x0001badf) list_double_time_pane_vc_t1_ParamLimits

0x4303,	// (0x0001badf) list_double_time_pane_vc_t1

0x431c,	// (0x0001baf8) list_double_time_pane_vc_t2_ParamLimits

0x431c,	// (0x0001baf8) list_double_time_pane_vc_t2

0x4357,	// (0x0001bb33) list_double_time_pane_vc_t3_ParamLimits

0x4357,	// (0x0001bb33) list_double_time_pane_vc_t3

0x436f,	// (0x0001bb4b) list_double_time_pane_vc_t4_ParamLimits

0x436f,	// (0x0001bb4b) list_double_time_pane_vc_t4

0x0003,

0xfa87,	// (0x00027263) list_double_time_pane_vc_t_ParamLimits

0xfa87,	// (0x00027263) list_double_time_pane_vc_t

0x403c,	// (0x0001b818) list_double_pane_vc_g1_ParamLimits

0x403c,	// (0x0001b818) list_double_pane_vc_g1

0x4048,	// (0x0001b824) list_double_pane_vc_g2_ParamLimits

0x4048,	// (0x0001b824) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x00026de8) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x00026de8) list_double_pane_vc_g

0x4383,	// (0x0001bb5f) list_double_pane_vc_t1_ParamLimits

0x4383,	// (0x0001bb5f) list_double_pane_vc_t1

0x4395,	// (0x0001bb71) list_double_pane_vc_t2_ParamLimits

0x4395,	// (0x0001bb71) list_double_pane_vc_t2

0x0001,

0xfa90,	// (0x0002726c) list_double_pane_vc_t_ParamLimits

0xfa90,	// (0x0002726c) list_double_pane_vc_t

0x403c,	// (0x0001b818) list_double_number_pane_vc_g1_ParamLimits

0x403c,	// (0x0001b818) list_double_number_pane_vc_g1

0x4048,	// (0x0001b824) list_double_number_pane_vc_g2_ParamLimits

0x4048,	// (0x0001b824) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x00026de8) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x00026de8) list_double_number_pane_vc_g

0x43ad,	// (0x0001bb89) list_double_number_pane_vc_t1_ParamLimits

0x43ad,	// (0x0001bb89) list_double_number_pane_vc_t1

0x43c1,	// (0x0001bb9d) list_double_number_pane_vc_t2_ParamLimits

0x43c1,	// (0x0001bb9d) list_double_number_pane_vc_t2

0x4395,	// (0x0001bb71) list_double_number_pane_vc_t3_ParamLimits

0x4395,	// (0x0001bb71) list_double_number_pane_vc_t3

0x0002,

0xfa95,	// (0x00027271) list_double_number_pane_vc_t_ParamLimits

0xfa95,	// (0x00027271) list_double_number_pane_vc_t

0x43d3,	// (0x0001bbaf) list_double_large_graphic_pane_vc_g1_ParamLimits

0x43d3,	// (0x0001bbaf) list_double_large_graphic_pane_vc_g1

0x43df,	// (0x0001bbbb) list_double_large_graphic_pane_vc_g2_ParamLimits

0x43df,	// (0x0001bbbb) list_double_large_graphic_pane_vc_g2

0x4048,	// (0x0001b824) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4048,	// (0x0001b824) list_double_large_graphic_pane_vc_g3

0x43ee,	// (0x0001bbca) list_double_large_graphic_pane_vc_g4_ParamLimits

0x43ee,	// (0x0001bbca) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9c,	// (0x00027278) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9c,	// (0x00027278) list_double_large_graphic_pane_vc_g

0x43fa,	// (0x0001bbd6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x43fa,	// (0x0001bbd6) list_double_large_graphic_pane_vc_t1

0x440c,	// (0x0001bbe8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x440c,	// (0x0001bbe8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa5,	// (0x00027281) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa5,	// (0x00027281) list_double_large_graphic_pane_vc_t

0x403c,	// (0x0001b818) list_double_heading_pane_vc_g1_ParamLimits

0x403c,	// (0x0001b818) list_double_heading_pane_vc_g1

0x4048,	// (0x0001b824) list_double_heading_pane_vc_g2_ParamLimits

0x4048,	// (0x0001b824) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00026de8) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00026de8) list_double_heading_pane_vc_g

0x4425,	// (0x0001bc01) list_double_heading_pane_vc_t1_ParamLimits

0x4425,	// (0x0001bc01) list_double_heading_pane_vc_t1

0x40ca,	// (0x0001b8a6) list_double_heading_pane_vc_t2_ParamLimits

0x40ca,	// (0x0001b8a6) list_double_heading_pane_vc_t2

0x0001,

0xfaaa,	// (0x00027286) list_double_heading_pane_vc_t_ParamLimits

0xfaaa,	// (0x00027286) list_double_heading_pane_vc_t

0x4439,	// (0x0001bc15) list_double_graphic_pane_vc_g1_ParamLimits

0x4439,	// (0x0001bc15) list_double_graphic_pane_vc_g1

0x4449,	// (0x0001bc25) list_double_graphic_pane_vc_g2_ParamLimits

0x4449,	// (0x0001bc25) list_double_graphic_pane_vc_g2

0x4458,	// (0x0001bc34) list_double_graphic_pane_vc_g3_ParamLimits

0x4458,	// (0x0001bc34) list_double_graphic_pane_vc_g3

0x0002,

0xfaaf,	// (0x0002728b) list_double_graphic_pane_vc_g_ParamLimits

0xfaaf,	// (0x0002728b) list_double_graphic_pane_vc_g

0x4464,	// (0x0001bc40) list_double_graphic_pane_vc_t1_ParamLimits

0x4464,	// (0x0001bc40) list_double_graphic_pane_vc_t1

0x4395,	// (0x0001bb71) list_double_graphic_pane_vc_t2_ParamLimits

0x4395,	// (0x0001bb71) list_double_graphic_pane_vc_t2

0x0001,

0xfab6,	// (0x00027292) list_double_graphic_pane_vc_t_ParamLimits

0xfab6,	// (0x00027292) list_double_graphic_pane_vc_t

0x4861,	// (0x0001c03d) aid_size_cell_fastswap

0x7bcd,	// (0x0001f3a9) aid_size_cell_touch_ParamLimits

0x7bcd,	// (0x0001f3a9) aid_size_cell_touch

0x4ac4,	// (0x0001c2a0) popup_fast_swap_wide_window_ParamLimits

0x4ac4,	// (0x0001c2a0) popup_fast_swap_wide_window

0x7d18,	// (0x0001f4f4) touch_pane_ParamLimits

0x7d18,	// (0x0001f4f4) touch_pane

0xbaee,	// (0x000232ca) button_value_adjust_pane_cp2

0x3d28,	// (0x0001b504) button_value_adjust_pane_cp4

0x3d48,	// (0x0001b524) form_field_data_pane_cp2

0x77b4,	// (0x0001ef90) form_field_data_wide_pane_cp2

0xbe4d,	// (0x00023629) bg_scroll_pane_ParamLimits

0x4e5e,	// (0x0001c63a) scroll_handle_pane_ParamLimits

0x4e72,	// (0x0001c64e) scroll_sc2_down_pane_ParamLimits

0x4e72,	// (0x0001c64e) scroll_sc2_down_pane

0xbe7e,	// (0x0002365a) scroll_sc2_up_pane_ParamLimits

0xbe7e,	// (0x0002365a) scroll_sc2_up_pane

0x981d,	// (0x00020ff9) grid_wheel_folder_pane_g1_ParamLimits

0x981d,	// (0x00020ff9) grid_wheel_folder_pane_g1

0x5037,	// (0x0001c813) clock_nsta_pane_cp2_ParamLimits

0x5037,	// (0x0001c813) clock_nsta_pane_cp2

0x8358,	// (0x0001fb34) listscroll_midp_pane_ParamLimits

0x8369,	// (0x0001fb45) midp_canvas_pane

0xc731,	// (0x00023f0d) nsta_clock_indic_pane

0xc769,	// (0x00023f45) listscroll_form_pane_vc

0xc771,	// (0x00023f4d) listscroll_set_pane_vc_ParamLimits

0xc771,	// (0x00023f4d) listscroll_set_pane_vc

0x8d2e,	// (0x0002050a) clock_nsta_pane

0x8d58,	// (0x00020534) indicator_nsta_pane

0xc9ef,	// (0x000241cb) bg_popup_sub_pane_cp2_ParamLimits

0xca03,	// (0x000241df) find_pane_cp2_ParamLimits

0xca03,	// (0x000241df) find_pane_cp2

0xca19,	// (0x000241f5) grid_toobar_pane_ParamLimits

0xcb75,	// (0x00024351) list_form_gen_pane_vc_ParamLimits

0xcb75,	// (0x00024351) list_form_gen_pane_vc

0xcb8b,	// (0x00024367) scroll_pane_cp8_vc_ParamLimits

0xcb8b,	// (0x00024367) scroll_pane_cp8_vc

0xcbdb,	// (0x000243b7) data_form_wide_pane_vc_ParamLimits

0xcbdb,	// (0x000243b7) data_form_wide_pane_vc

0xcbe7,	// (0x000243c3) form_field_data_wide_pane_vc_g1

0xcbef,	// (0x000243cb) form_field_data_wide_pane_vc_t1_ParamLimits

0xcbef,	// (0x000243cb) form_field_data_wide_pane_vc_t1

0xbb02,	// (0x000232de) input_focus_pane_cp6_vc_ParamLimits

0xbb02,	// (0x000232de) input_focus_pane_cp6_vc

0x913f,	// (0x0002091b) list_midp_pane_ParamLimits

0xd851,	// (0x0002502d) scroll_pane_cp16_ParamLimits

0xd851,	// (0x0002502d) scroll_pane_cp16

0xce56,	// (0x00024632) button_value_adjust_pane_ParamLimits

0xce56,	// (0x00024632) button_value_adjust_pane

0x945e,	// (0x00020c3a) button_value_adjust_pane_cp6_ParamLimits

0x945e,	// (0x00020c3a) button_value_adjust_pane_cp6

0x9578,	// (0x00020d54) settings_code_pane_cp_ParamLimits

0x9578,	// (0x00020d54) settings_code_pane_cp

0xb49b,	// (0x00022c77) cell_touch_pane_g1

0xb49b,	// (0x00022c77) cell_touch_pane_g2

0x0001,

0xf747,	// (0x00026f23) cell_touch_pane_g

0x9700,	// (0x00020edc) cell_touch_pane_cp_ParamLimits

0x9700,	// (0x00020edc) cell_touch_pane_cp

0x971c,	// (0x00020ef8) cell_touch_pane_ParamLimits

0x971c,	// (0x00020ef8) cell_touch_pane

0xb49b,	// (0x00022c77) scroll_sc2_down_pane_g1

0xb49b,	// (0x00022c77) scroll_sc2_up_pane_g1

0xb4a5,	// (0x00022c81) bg_set_opt_pane_cp4_vc

0xe046,	// (0x00025822) list_set_graphic_pane_vc_g1_ParamLimits

0xe046,	// (0x00025822) list_set_graphic_pane_vc_g1

0xe052,	// (0x0002582e) list_set_graphic_pane_vc_g2_ParamLimits

0xe052,	// (0x0002582e) list_set_graphic_pane_vc_g2

0x0001,

0xfa33,	// (0x0002720f) list_set_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x0002720f) list_set_graphic_pane_vc_g

0xe05e,	// (0x0002583a) text_primary_small_cp13_vc_ParamLimits

0xe05e,	// (0x0002583a) text_primary_small_cp13_vc

0xe076,	// (0x00025852) list_set_graphic_pane_vc_ParamLimits

0xe076,	// (0x00025852) list_set_graphic_pane_vc

0xb4a5,	// (0x00022c81) input_focus_pane_cp2_vc

0xb49b,	// (0x00022c77) setting_code_pane_vc_g1

0xe08a,	// (0x00025866) setting_code_pane_vc_t1

0xe098,	// (0x00025874) set_text_pane_vc_t1_ParamLimits

0xe098,	// (0x00025874) set_text_pane_vc_t1

0xb4a5,	// (0x00022c81) input_focus_pane_cp1_vc

0xe0b3,	// (0x0002588f) list_set_text_pane_vc

0xb49b,	// (0x00022c77) setting_text_pane_vc_g1

0xb4a5,	// (0x00022c81) bg_set_opt_pane_cp2_vc

0xe0bd,	// (0x00025899) setting_slider_graphic_pane_vc_g1

0xe0c5,	// (0x000258a1) setting_slider_graphic_pane_vc_t1

0xe0d3,	// (0x000258af) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x00027214) setting_slider_graphic_pane_vc_t

0xe0e1,	// (0x000258bd) slider_set_pane_cp_vc

0xe0e9,	// (0x000258c5) slider_set_pane_vc_g1

0xe0f2,	// (0x000258ce) slider_set_pane_vc_g2

0x0006,

0xfa3d,	// (0x00027219) slider_set_pane_vc_g

0xbb69,	// (0x00023345) set_opt_bg_pane_g1_copy1

0xbb71,	// (0x0002334d) set_opt_bg_pane_g2_copy1

0xe11e,	// (0x000258fa) set_opt_bg_pane_g3_copy1

0xbb81,	// (0x0002335d) set_opt_bg_pane_g4_copy1

0xbb89,	// (0x00023365) set_opt_bg_pane_g5_copy1

0xbb91,	// (0x0002336d) set_opt_bg_pane_g6_copy1

0xe128,	// (0x00025904) set_opt_bg_pane_g7_copy1

0xe130,	// (0x0002590c) set_opt_bg_pane_g8_copy1

0xe13a,	// (0x00025916) set_opt_bg_pane_g9_copy1

0xb4a5,	// (0x00022c81) bg_set_opt_pane_cp_vc

0xe144,	// (0x00025920) setting_slider_pane_vc_t1

0xe0c5,	// (0x000258a1) setting_slider_pane_vc_t2

0xe0d3,	// (0x000258af) setting_slider_pane_vc_t3

0x0002,

0xfa4c,	// (0x00027228) setting_slider_pane_vc_t

0xe0e1,	// (0x000258bd) slider_set_pane_vc

0x53c0,	// (0x0001cb9c) volume_set_pane_vc_g1

0x53c9,	// (0x0001cba5) volume_set_pane_vc_g2

0x53d2,	// (0x0001cbae) volume_set_pane_vc_g3

0x53db,	// (0x0001cbb7) volume_set_pane_vc_g4

0x53e4,	// (0x0001cbc0) volume_set_pane_vc_g5

0x53ed,	// (0x0001cbc9) volume_set_pane_vc_g6

0x53f6,	// (0x0001cbd2) volume_set_pane_vc_g7

0x53ff,	// (0x0001cbdb) volume_set_pane_vc_g8

0x5408,	// (0x0001cbe4) volume_set_pane_vc_g9

0x5411,	// (0x0001cbed) volume_set_pane_vc_g10

0x0009,

0xfa53,	// (0x0002722f) volume_set_pane_vc_g

0xe153,	// (0x0002592f) volume_set_pane_vc

0xe15b,	// (0x00025937) button_value_adjust_pane_cp1_vc

0xe165,	// (0x00025941) list_highlight_pane_cp2_vc

0xe16e,	// (0x0002594a) list_set_pane_vc_ParamLimits

0xe16e,	// (0x0002594a) list_set_pane_vc

0xe1d8,	// (0x000259b4) main_pane_set_vc_t1_ParamLimits

0xe1d8,	// (0x000259b4) main_pane_set_vc_t1

0xe1ed,	// (0x000259c9) main_pane_set_vc_t2_ParamLimits

0xe1ed,	// (0x000259c9) main_pane_set_vc_t2

0xe1ff,	// (0x000259db) main_pane_set_vc_t3_ParamLimits

0xe1ff,	// (0x000259db) main_pane_set_vc_t3

0xe213,	// (0x000259ef) main_pane_set_vc_t4_ParamLimits

0xe213,	// (0x000259ef) main_pane_set_vc_t4

0x0003,

0xfa68,	// (0x00027244) main_pane_set_vc_t_ParamLimits

0xfa68,	// (0x00027244) main_pane_set_vc_t

0xe227,	// (0x00025a03) setting_code_pane_vc_ParamLimits

0xe227,	// (0x00025a03) setting_code_pane_vc

0xe238,	// (0x00025a14) setting_slider_graphic_pane_vc

0xe238,	// (0x00025a14) setting_slider_pane_vc

0xe238,	// (0x00025a14) setting_text_pane_vc

0xe238,	// (0x00025a14) setting_volume_pane_vc

0xe242,	// (0x00025a1e) scroll_pane_cp121_vc

0xbadc,	// (0x000232b8) set_content_pane_vc

0xe280,	// (0x00025a5c) button_value_adjust_pane_g1

0xe289,	// (0x00025a65) button_value_adjust_pane_g2

0x0001,

0xfabb,	// (0x00027297) button_value_adjust_pane_g

0xe292,	// (0x00025a6e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe292,	// (0x00025a6e) form_field_slider_wide_pane_vc_t1

0xe2a6,	// (0x00025a82) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe2a6,	// (0x00025a82) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac0,	// (0x0002729c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac0,	// (0x0002729c) form_field_slider_wide_pane_vc_t

0xb4f3,	// (0x00022ccf) input_focus_pane_cp10_vc_ParamLimits

0xb4f3,	// (0x00022ccf) input_focus_pane_cp10_vc

0xe2b8,	// (0x00025a94) slider_cont_pane_cp1_vc_ParamLimits

0xe2b8,	// (0x00025a94) slider_cont_pane_cp1_vc

0xe0e9,	// (0x000258c5) slider_form_pane_g1_cp2

0xe0f2,	// (0x000258ce) slider_form_pane_g2_cp2

0xe2d1,	// (0x00025aad) form_field_slider_pane_vc_t3

0xe2df,	// (0x00025abb) form_field_slider_pane_vc_t4

0xe2ed,	// (0x00025ac9) slider_form_pane_vc_ParamLimits

0xe2ed,	// (0x00025ac9) slider_form_pane_vc

0xe2fa,	// (0x00025ad6) form_field_slider_pane_vc_t1_ParamLimits

0xe2fa,	// (0x00025ad6) form_field_slider_pane_vc_t1

0xe2a6,	// (0x00025a82) form_field_slider_pane_vc_t2_ParamLimits

0xe2a6,	// (0x00025a82) form_field_slider_pane_vc_t2

0x0001,

0xfad0,	// (0x000272ac) form_field_slider_pane_vc_t_ParamLimits

0xfad0,	// (0x000272ac) form_field_slider_pane_vc_t

0xb4f3,	// (0x00022ccf) input_focus_pane_cp9_vc_ParamLimits

0xb4f3,	// (0x00022ccf) input_focus_pane_cp9_vc

0xe316,	// (0x00025af2) slider_cont_pane_vc_ParamLimits

0xe316,	// (0x00025af2) slider_cont_pane_vc

0xe328,	// (0x00025b04) list_form_graphic_pane_cp_vc_ParamLimits

0xe328,	// (0x00025b04) list_form_graphic_pane_cp_vc

0xcbe7,	// (0x000243c3) form_field_popup_wide_pane_vc_g1

0xe33d,	// (0x00025b19) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe33d,	// (0x00025b19) form_field_popup_wide_pane_vc_t1

0xbb02,	// (0x000232de) input_focus_pane_cp8_vc_ParamLimits

0xbb02,	// (0x000232de) input_focus_pane_cp8_vc

0xe354,	// (0x00025b30) list_form_wide_pane_vc_ParamLimits

0xe354,	// (0x00025b30) list_form_wide_pane_vc

0xe360,	// (0x00025b3c) list_form_graphic_pane_vc_g1

0xe368,	// (0x00025b44) list_form_graphic_pane_vc_t1_ParamLimits

0xe368,	// (0x00025b44) list_form_graphic_pane_vc_t1

0xb501,	// (0x00022cdd) list_highlight_pane_cp5_vc_ParamLimits

0xb501,	// (0x00022cdd) list_highlight_pane_cp5_vc

0xe384,	// (0x00025b60) list_form_graphic_pane_vc_ParamLimits

0xe384,	// (0x00025b60) list_form_graphic_pane_vc

0xcbe7,	// (0x000243c3) form_field_popup_pane_vc_g1

0xe39a,	// (0x00025b76) form_field_popup_pane_vc_t1_ParamLimits

0xe39a,	// (0x00025b76) form_field_popup_pane_vc_t1

0xbb02,	// (0x000232de) input_focus_pane_cp7_vc_ParamLimits

0xbb02,	// (0x000232de) input_focus_pane_cp7_vc

0xe3b1,	// (0x00025b8d) list_form_pane_vc_ParamLimits

0xe3b1,	// (0x00025b8d) list_form_pane_vc

0xe3bd,	// (0x00025b99) data_form_pane_vc_t1_ParamLimits

0xe3bd,	// (0x00025b99) data_form_pane_vc_t1

0xbb69,	// (0x00023345) input_focus_pane_vc_g1

0xbb71,	// (0x0002334d) input_focus_pane_vc_g2

0xbb79,	// (0x00023355) input_focus_pane_vc_g3

0xbb81,	// (0x0002335d) input_focus_pane_vc_g4

0xbb89,	// (0x00023365) input_focus_pane_vc_g5

0xbb91,	// (0x0002336d) input_focus_pane_vc_g6

0xbb99,	// (0x00023375) input_focus_pane_vc_g7

0xbba1,	// (0x0002337d) input_focus_pane_vc_g8

0xbba9,	// (0x00023385) input_focus_pane_vc_g9

0xb49b,	// (0x00022c77) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x00026eac) input_focus_pane_vc_g

0xcbdb,	// (0x000243b7) data_form_pane_vc_ParamLimits

0xcbdb,	// (0x000243b7) data_form_pane_vc

0xcbe7,	// (0x000243c3) form_field_data_pane_vc_g1

0xe3d8,	// (0x00025bb4) form_field_data_pane_vc_t1_ParamLimits

0xe3d8,	// (0x00025bb4) form_field_data_pane_vc_t1

0xbb02,	// (0x000232de) input_focus_pane_vc_ParamLimits

0xbb02,	// (0x000232de) input_focus_pane_vc

0xe3f2,	// (0x00025bce) button_value_adjust_pane_cp3_vc

0xe3fa,	// (0x00025bd6) button_value_adjust_pane_cp5_vc

0xe402,	// (0x00025bde) form_field_data_pane_vc_ParamLimits

0xe402,	// (0x00025bde) form_field_data_pane_vc

0xe419,	// (0x00025bf5) form_field_data_pane_vc_cp2

0xe421,	// (0x00025bfd) form_field_data_wide_pane_vc_ParamLimits

0xe421,	// (0x00025bfd) form_field_data_wide_pane_vc

0xe437,	// (0x00025c13) form_field_data_wide_pane_vc_cp2

0xe43f,	// (0x00025c1b) form_field_popup_pane_vc_ParamLimits

0xe43f,	// (0x00025c1b) form_field_popup_pane_vc

0xe456,	// (0x00025c32) form_field_popup_wide_pane_vc_ParamLimits

0xe456,	// (0x00025c32) form_field_popup_wide_pane_vc

0xe46c,	// (0x00025c48) form_field_slider_pane_vc_ParamLimits

0xe46c,	// (0x00025c48) form_field_slider_pane_vc

0xe47f,	// (0x00025c5b) form_field_slider_wide_pane_vc_ParamLimits

0xe47f,	// (0x00025c5b) form_field_slider_wide_pane_vc

0x973a,	// (0x00020f16) grid_touch_1_pane_ParamLimits

0x973a,	// (0x00020f16) grid_touch_1_pane

0x974e,	// (0x00020f2a) grid_touch_2_pane_ParamLimits

0x974e,	// (0x00020f2a) grid_touch_2_pane

0xe492,	// (0x00025c6e) touch_pane_g1_ParamLimits

0xe492,	// (0x00025c6e) touch_pane_g1

0xe4a0,	// (0x00025c7c) cell_app_pane_cp_wide_ParamLimits

0xe4a0,	// (0x00025c7c) cell_app_pane_cp_wide

0xe4b1,	// (0x00025c8d) grid_popup_fast_wide_pane_ParamLimits

0xe4b1,	// (0x00025c8d) grid_popup_fast_wide_pane

0xe4c5,	// (0x00025ca1) scroll_pane_cp19_ParamLimits

0xe4c5,	// (0x00025ca1) scroll_pane_cp19

0xb4a5,	// (0x00022c81) bg_popup_window_pane_cp20

0xe4d9,	// (0x00025cb5) listscroll_popup_fast_wide_pane

0xc8da,	// (0x000240b6) grid_indicator_nsta_pane

0xe4e1,	// (0x00025cbd) clock_nsta_pane_g1

0xe4ea,	// (0x00025cc6) clock_nsta_pane_t1

0x9778,	// (0x00020f54) cell_indicator_nsta_pane_ParamLimits

0x9778,	// (0x00020f54) cell_indicator_nsta_pane

0xe492,	// (0x00025c6e) cell_indicator_nsta_pane_g1

0x9791,	// (0x00020f6d) cell_indicator_nsta_pane_g2

0x0001,

0xfada,	// (0x000272b6) cell_indicator_nsta_pane_g

0xe506,	// (0x00025ce2) clock_nsta_pane_cp

0xe50e,	// (0x00025cea) indicator_nsta_pane_cp

0xe516,	// (0x00025cf2) nsta_clock_indic_pane_g1

0xb53d,	// (0x00022d19) grid_indicator_pane

0xbf73,	// (0x0002374f) scroll_pane_cp29

0x4f86,	// (0x0001c762) indicator_nsta_pane_cp2_ParamLimits

0x4f86,	// (0x0001c762) indicator_nsta_pane_cp2

0xb501,	// (0x00022cdd) main_apps_wheel_pane

0xcd03,	// (0x000244df) form_midp_field_text_pane_ParamLimits

0xce36,	// (0x00024612) scroll_bar_cp050_ParamLimits

0xe54e,	// (0x00025d2a) cell_indicator_pane_ParamLimits

0xe54e,	// (0x00025d2a) cell_indicator_pane

0xe565,	// (0x00025d41) cell_indicator_pane_g1

0x97a7,	// (0x00020f83) grid_wheel_folder_pane_ParamLimits

0x97a7,	// (0x00020f83) grid_wheel_folder_pane

0x97b5,	// (0x00020f91) list_wheel_apps_pane_ParamLimits

0x97b5,	// (0x00020f91) list_wheel_apps_pane

0x97c3,	// (0x00020f9f) main_apps_wheel_pane_g1_ParamLimits

0x97c3,	// (0x00020f9f) main_apps_wheel_pane_g1

0x97cf,	// (0x00020fab) main_apps_wheel_pane_g2_ParamLimits

0x97cf,	// (0x00020fab) main_apps_wheel_pane_g2

0x0001,

0xfae9,	// (0x000272c5) main_apps_wheel_pane_g_ParamLimits

0xfae9,	// (0x000272c5) main_apps_wheel_pane_g

0x97dd,	// (0x00020fb9) main_apps_wheel_pane_t1_ParamLimits

0x97dd,	// (0x00020fb9) main_apps_wheel_pane_t1

0x97f1,	// (0x00020fcd) list_wheel_apps_pane_g1

0x97f9,	// (0x00020fd5) list_wheel_apps_pane_g2

0x9801,	// (0x00020fdd) list_wheel_apps_pane_g3

0x9809,	// (0x00020fe5) list_wheel_apps_pane_g4

0x9813,	// (0x00020fef) list_wheel_apps_pane_g5

0x0004,

0xfaee,	// (0x000272ca) list_wheel_apps_pane_g

0xc3a7,	// (0x00023b83) navi_icon_text_pane

0x8c29,	// (0x00020405) aid_fill_nsta

0x982a,	// (0x00021006) navi_icon_text_pane_g1

0x9836,	// (0x00021012) navi_icon_text_pane_t1

0x8340,	// (0x0001fb1c) list_set_graphic_pane_t1_ParamLimits

0x8340,	// (0x0001fb1c) list_set_graphic_pane_t1

0xd51a,	// (0x00024cf6) popup_midp_note_alarm_window_t6_ParamLimits

0xd51a,	// (0x00024cf6) popup_midp_note_alarm_window_t6

0xd52c,	// (0x00024d08) popup_midp_note_alarm_window_t7_ParamLimits

0xd52c,	// (0x00024d08) popup_midp_note_alarm_window_t7

0xd53e,	// (0x00024d1a) popup_midp_note_alarm_window_t8_ParamLimits

0xd53e,	// (0x00024d1a) popup_midp_note_alarm_window_t8

0xd550,	// (0x00024d2c) popup_midp_note_alarm_window_t9_ParamLimits

0xd550,	// (0x00024d2c) popup_midp_note_alarm_window_t9

0xd562,	// (0x00024d3e) popup_midp_note_alarm_window_t10_ParamLimits

0xd562,	// (0x00024d3e) popup_midp_note_alarm_window_t10

0xd574,	// (0x00024d50) popup_midp_note_alarm_window_t11_ParamLimits

0xd574,	// (0x00024d50) popup_midp_note_alarm_window_t11

0xd586,	// (0x00024d62) scroll_pane_cp17_ParamLimits

0xd586,	// (0x00024d62) scroll_pane_cp17

0x53c0,	// (0x0001cb9c) volume_small_pane_cp_g1

0x56b5,	// (0x0001ce91) volume_small_pane_cp_g2

0x56be,	// (0x0001ce9a) volume_small_pane_cp_g3

0x56c7,	// (0x0001cea3) volume_small_pane_cp_g4

0x56d0,	// (0x0001ceac) volume_small_pane_cp_g5

0x56d9,	// (0x0001ceb5) volume_small_pane_cp_g6

0x56e2,	// (0x0001cebe) volume_small_pane_cp_g7

0x56eb,	// (0x0001cec7) volume_small_pane_cp_g8

0x56f4,	// (0x0001ced0) volume_small_pane_cp_g9

0x56fd,	// (0x0001ced9) volume_small_pane_cp_g10

0xc551,	// (0x00023d2d) midp_ticker_pane_g1_ParamLimits

0xc55d,	// (0x00023d39) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x00026f74) midp_ticker_pane_g_ParamLimits

0x8400,	// (0x0001fbdc) midp_ticker_pane_t1_ParamLimits

0x8c49,	// (0x00020425) aid_fill_nsta_2

0xce22,	// (0x000245fe) list_form2_midp_pane

0xdc5b,	// (0x00025437) midp_editing_number_pane_ParamLimits

0xdc6a,	// (0x00025446) midp_ticker_pane_ParamLimits

0xe56f,	// (0x00025d4b) form2_midp_field_pane

0xe577,	// (0x00025d53) scroll_pane_cp51

0xe597,	// (0x00025d73) form2_midp_button_pane_ParamLimits

0xe597,	// (0x00025d73) form2_midp_button_pane

0xe5a9,	// (0x00025d85) form2_midp_content_pane_ParamLimits

0xe5a9,	// (0x00025d85) form2_midp_content_pane

0xe5c3,	// (0x00025d9f) form2_midp_field_choice_group_pane

0xe5cb,	// (0x00025da7) form2_midp_field_pane_g1

0xe5d3,	// (0x00025daf) form2_midp_field_pane_g2

0xe5db,	// (0x00025db7) form2_midp_field_pane_g3

0xe5e3,	// (0x00025dbf) form2_midp_field_pane_g4

0x0003,

0xfb13,	// (0x000272ef) form2_midp_field_pane_g

0xe5eb,	// (0x00025dc7) form2_midp_gauge_slider_pane

0xe5f3,	// (0x00025dcf) form2_midp_gauge_wait_pane

0xe5fb,	// (0x00025dd7) form2_midp_image_pane_ParamLimits

0xe5fb,	// (0x00025dd7) form2_midp_image_pane

0xe616,	// (0x00025df2) form2_midp_label_pane_ParamLimits

0xe616,	// (0x00025df2) form2_midp_label_pane

0x9864,	// (0x00021040) form2_midp_label_pane_cp_ParamLimits

0x9864,	// (0x00021040) form2_midp_label_pane_cp

0xe62f,	// (0x00025e0b) form2_midp_string_pane_ParamLimits

0xe62f,	// (0x00025e0b) form2_midp_string_pane

0x4476,	// (0x0001bc52) form2_midp_text_pane_ParamLimits

0x4476,	// (0x0001bc52) form2_midp_text_pane

0xe641,	// (0x00025e1d) form2_midp_time_pane

0xe651,	// (0x00025e2d) input_focus_pane_cp51_ParamLimits

0xe651,	// (0x00025e2d) input_focus_pane_cp51

0xe669,	// (0x00025e45) form2_midp_label_pane_t1_ParamLimits

0xe669,	// (0x00025e45) form2_midp_label_pane_t1

0x4491,	// (0x0001bc6d) form2_mdip_text_pane_t1_ParamLimits

0x4491,	// (0x0001bc6d) form2_mdip_text_pane_t1

0x44af,	// (0x0001bc8b) form2_midp_time_pane_t1

0xe6b2,	// (0x00025e8e) form2_midp_gauge_slider_pane_t1

0x9885,	// (0x00021061) form2_midp_gauge_slider_pane_t2

0x9897,	// (0x00021073) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1c,	// (0x000272f8) form2_midp_gauge_slider_pane_t

0xe6c4,	// (0x00025ea0) form2_midp_slider_pane

0xe6d0,	// (0x00025eac) form2_midp_gauge_wait_pane_t1

0xe6de,	// (0x00025eba) form2_midp_wait_pane_ParamLimits

0xe6de,	// (0x00025eba) form2_midp_wait_pane

0x98a9,	// (0x00021085) list_single_2graphic_pane_cp4_ParamLimits

0x98a9,	// (0x00021085) list_single_2graphic_pane_cp4

0x90cc,	// (0x000208a8) list_single_midp_graphic_pane_cp_ParamLimits

0x90cc,	// (0x000208a8) list_single_midp_graphic_pane_cp

0xb4a5,	// (0x00022c81) list_highlight_pane_cp20

0xe709,	// (0x00025ee5) list_single_2graphic_pane_g1_cp4

0xe711,	// (0x00025eed) list_single_2graphic_pane_g2_cp4

0xe719,	// (0x00025ef5) list_single_2graphic_pane_t1_cp4

0xb501,	// (0x00022cdd) list_highlight_pane_cp21

0xe728,	// (0x00025f04) list_single_midp_graphic_pane_g4_cp

0xe737,	// (0x00025f13) list_single_midp_graphic_pane_t1_cp

0x98be,	// (0x0002109a) form2_mdip_string_pane_t1_ParamLimits

0x98be,	// (0x0002109a) form2_mdip_string_pane_t1

0xb4a5,	// (0x00022c81) bg_wml_button_pane_cp2

0xb49b,	// (0x00022c77) form2_midp_image_pane_g1

0x3afb,	// (0x0001b2d7) list_double_large_graphic_pane_g5_ParamLimits

0x3afb,	// (0x0001b2d7) list_double_large_graphic_pane_g5

0x8358,	// (0x0001fb34) midp_form_pane_ParamLimits

0xb501,	// (0x00022cdd) main_apps_wheel_pane_ParamLimits

0x8985,	// (0x00020161) popup_preview_window_ParamLimits

0x8985,	// (0x00020161) popup_preview_window

0xc850,	// (0x0002402c) popup_touch_info_window_ParamLimits

0xc850,	// (0x0002402c) popup_touch_info_window

0xc86e,	// (0x0002404a) popup_touch_menu_window_ParamLimits

0xc86e,	// (0x0002404a) popup_touch_menu_window

0xb491,	// (0x00022c6d) bg_popup_sub_pane_cp6

0xe74c,	// (0x00025f28) list_touch_menu_pane

0xe754,	// (0x00025f30) list_single_touch_menu_pane_ParamLimits

0xe754,	// (0x00025f30) list_single_touch_menu_pane

0xe76b,	// (0x00025f47) list_single_touch_menu_pane_t1

0xb501,	// (0x00022cdd) bg_popup_sub_pane_cp7_ParamLimits

0xb501,	// (0x00022cdd) bg_popup_sub_pane_cp7

0xe779,	// (0x00025f55) heading_sub_pane

0xe781,	// (0x00025f5d) list_touch_info_pane_ParamLimits

0xe781,	// (0x00025f5d) list_touch_info_pane

0xe790,	// (0x00025f6c) list_single_touch_info_pane_ParamLimits

0xe790,	// (0x00025f6c) list_single_touch_info_pane

0xe7a2,	// (0x00025f7e) list_single_touch_info_pane_t1

0xe7b0,	// (0x00025f8c) list_single_touch_info_pane_t2

0x0001,

0xfb2a,	// (0x00027306) list_single_touch_info_pane_t

0xc527,	// (0x00023d03) bg_popup_heading_pane_cp

0xe7be,	// (0x00025f9a) heading_sub_pane_t1

0xcba1,	// (0x0002437d) bg_popup_preview_window_pane_cp_ParamLimits

0xcba1,	// (0x0002437d) bg_popup_preview_window_pane_cp

0xe779,	// (0x00025f55) heading_preview_pane

0xe781,	// (0x00025f5d) list_preview_pane_ParamLimits

0xe781,	// (0x00025f5d) list_preview_pane

0xe7cc,	// (0x00025fa8) popup_preview_window_g1

0xe790,	// (0x00025f6c) list_single_preview_pane_ParamLimits

0xe790,	// (0x00025f6c) list_single_preview_pane

0xe7d4,	// (0x00025fb0) list_single_preview_pane_g1

0xe7dc,	// (0x00025fb8) list_single_preview_pane_t1

0xe7a2,	// (0x00025f7e) list_single_preview_pane_t2

0x0001,

0xfb2f,	// (0x0002730b) list_single_preview_pane_t

0xe7ea,	// (0x00025fc6) bg_popup_heading_pane_cp2_ParamLimits

0xe7ea,	// (0x00025fc6) bg_popup_heading_pane_cp2

0xe800,	// (0x00025fdc) heading_preview_pane_g1

0xe816,	// (0x00025ff2) heading_preview_pane_t1_ParamLimits

0xe816,	// (0x00025ff2) heading_preview_pane_t1

0xb554,	// (0x00022d30) soft_indicator_pane_t1_ParamLimits

0xba75,	// (0x00023251) scroll_pane_ParamLimits

0xbe6c,	// (0x00023648) scroll_sc2_left_pane

0xbe75,	// (0x00023651) scroll_sc2_right_pane

0xbe94,	// (0x00023670) scroll_bg_pane_g1_ParamLimits

0xbea9,	// (0x00023685) scroll_bg_pane_g2_ParamLimits

0xbec1,	// (0x0002369d) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x00026f03) scroll_bg_pane_g_ParamLimits

0xbe94,	// (0x00023670) scroll_handle_pane_g1_ParamLimits

0xbee3,	// (0x000236bf) scroll_handle_pane_g2_ParamLimits

0xbec1,	// (0x0002369d) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x00026f0a) scroll_handle_pane_g_ParamLimits

0xc791,	// (0x00023f6d) popup_choice_list_window_ParamLimits

0xc791,	// (0x00023f6d) popup_choice_list_window

0xc9fb,	// (0x000241d7) choice_list_pane

0xca7d,	// (0x00024259) cell_toolbar_pane_t1

0xcaa5,	// (0x00024281) toolbar_button_pane_ParamLimits

0xd9be,	// (0x0002519a) ai_gene_pane_1_t2_ParamLimits

0xd9be,	// (0x0002519a) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x00027122) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x00027122) ai_gene_pane_1_t

0xe833,	// (0x0002600f) scroll_sc2_left_pane_g1

0xe833,	// (0x0002600f) scroll_sc2_right_pane_g1

0xbc5a,	// (0x00023436) bg_popup_sub_pane_cp10

0xe83d,	// (0x00026019) list_choice_list_pane

0xe854,	// (0x00026030) list_single_choice_list_pane_ParamLimits

0xe854,	// (0x00026030) list_single_choice_list_pane

0xe868,	// (0x00026044) list_single_choice_list_pane_g1

0xe870,	// (0x0002604c) list_single_choice_list_pane_t1_ParamLimits

0xe870,	// (0x0002604c) list_single_choice_list_pane_t1

0xe885,	// (0x00026061) choice_list_pane_g1

0xe88d,	// (0x00026069) choice_list_pane_t1

0xb491,	// (0x00022c6d) input_focus_pane_cp11

0xbdcf,	// (0x000235ab) title_pane_stacon_g2_ParamLimits

0xbdcf,	// (0x000235ab) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x00026ee9) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x00026ee9) title_pane_stacon_g

0xc527,	// (0x00023d03) cursor_press_pane

0x8650,	// (0x0001fe2c) popup_fep_hwr_window_ParamLimits

0x8650,	// (0x0001fe2c) popup_fep_hwr_window

0xc7e7,	// (0x00023fc3) popup_fep_vkb_window_ParamLimits

0xc7e7,	// (0x00023fc3) popup_fep_vkb_window

0xe89b,	// (0x00026077) cursor_press_pane_g1

0x0002,

0xfb58,	// (0x00027334) fep_vkb_side_pane_g_ParamLimits

0x5731,	// (0x0001cf0d) fep_hwr_candidate_pane_ParamLimits

0x5731,	// (0x0001cf0d) fep_hwr_candidate_pane

0x575b,	// (0x0001cf37) fep_hwr_side_pane_ParamLimits

0x575b,	// (0x0001cf37) fep_hwr_side_pane

0x577b,	// (0x0001cf57) fep_hwr_top_pane_ParamLimits

0x577b,	// (0x0001cf57) fep_hwr_top_pane

0x5793,	// (0x0001cf6f) fep_hwr_write_pane_ParamLimits

0x5793,	// (0x0001cf6f) fep_hwr_write_pane

0xfb58,	// (0x00027334) fep_vkb_side_pane_g

0xe8a3,	// (0x0002607f) fep_hwr_top_pane_g1

0xe8b5,	// (0x00026091) fep_hwr_top_pane_g2

0x57bf,	// (0x0001cf9b) fep_hwr_top_pane_g3

0x0002,

0xfb34,	// (0x00027310) fep_hwr_top_pane_g

0x57d4,	// (0x0001cfb0) fep_hwr_top_text_pane

0xc03a,	// (0x00023816) fep_hwr_top_text_pane_g1

0xe8eb,	// (0x000260c7) fep_hwr_top_text_pane_t1

0x58ca,	// (0x0001d0a6) fep_hwr_candidate_pane_g1

0xea18,	// (0x000261f4) fep_vkb_keypad_pane_g3_ParamLimits

0xea18,	// (0x000261f4) fep_vkb_keypad_pane_g3

0xea40,	// (0x0002621c) fep_vkb_keypad_pane_g4_ParamLimits

0xea40,	// (0x0002621c) fep_vkb_keypad_pane_g4

0xeaaf,	// (0x0002628b) fep_vkb_bottom_pane_g2_ParamLimits

0xeaaf,	// (0x0002628b) fep_vkb_bottom_pane_g2

0x0001,

0xfb5f,	// (0x0002733b) fep_vkb_bottom_pane_g_ParamLimits

0xfb5f,	// (0x0002733b) fep_vkb_bottom_pane_g

0xe833,	// (0x0002600f) cell_vkb_side_pane_g2

0x0001,

0xfb69,	// (0x00027345) cell_vkb_side_pane_g

0xeaf3,	// (0x000262cf) cell_vkb_side_pane_t1

0xeb01,	// (0x000262dd) cell_vkb_side_pane_t1_copy1

0xe833,	// (0x0002600f) bg_fep_vkb_candidate_pane_g2

0xebd7,	// (0x000263b3) cell_vkb_candidate_pane_ParamLimits

0xe8f9,	// (0x000260d5) aid_size_cell_vkb_ParamLimits

0xe8f9,	// (0x000260d5) aid_size_cell_vkb

0xebd7,	// (0x000263b3) cell_vkb_candidate_pane

0x58e4,	// (0x0001d0c0) bg_popup_fep_shadow_pane_g1

0x9999,	// (0x00021175) fep_vkb_bottom_pane_ParamLimits

0x9999,	// (0x00021175) fep_vkb_bottom_pane

0xe986,	// (0x00026162) fep_vkb_candidate_pane_ParamLimits

0xe986,	// (0x00026162) fep_vkb_candidate_pane

0x99be,	// (0x0002119a) fep_vkb_keypad_pane_ParamLimits

0x99be,	// (0x0002119a) fep_vkb_keypad_pane

0x99fa,	// (0x000211d6) fep_vkb_side_pane_ParamLimits

0x99fa,	// (0x000211d6) fep_vkb_side_pane

0x9a36,	// (0x00021212) fep_vkb_top_pane_ParamLimits

0x9a36,	// (0x00021212) fep_vkb_top_pane

0xe9ac,	// (0x00026188) fep_vkb_top_pane_g1_ParamLimits

0xe9ac,	// (0x00026188) fep_vkb_top_pane_g1

0xe9bb,	// (0x00026197) fep_vkb_top_pane_g2_ParamLimits

0xe9bb,	// (0x00026197) fep_vkb_top_pane_g2

0xe9ca,	// (0x000261a6) fep_vkb_top_pane_g3_ParamLimits

0xe9ca,	// (0x000261a6) fep_vkb_top_pane_g3

0x0003,

0xfb4f,	// (0x0002732b) fep_vkb_top_pane_g_ParamLimits

0xfb4f,	// (0x0002732b) fep_vkb_top_pane_g

0xe9e8,	// (0x000261c4) fep_vkb_top_text_pane_ParamLimits

0xe9e8,	// (0x000261c4) fep_vkb_top_text_pane

0x9a72,	// (0x0002124e) fep_vkb_side_pane_g1_ParamLimits

0x9a72,	// (0x0002124e) fep_vkb_side_pane_g1

0xea07,	// (0x000261e3) grid_vkb_side_pane_ParamLimits

0xea07,	// (0x000261e3) grid_vkb_side_pane

0x58ec,	// (0x0001d0c8) bg_popup_fep_shadow_pane_g2

0x58f5,	// (0x0001d0d1) bg_popup_fep_shadow_pane_g3

0x58fd,	// (0x0001d0d9) bg_popup_fep_shadow_pane_g4

0x5906,	// (0x0001d0e2) bg_popup_fep_shadow_pane_g5

0x5910,	// (0x0001d0ec) bg_popup_fep_shadow_pane_g6

0x5918,	// (0x0001d0f4) bg_popup_fep_shadow_pane_g7

0xbb89,	// (0x00023365) bg_popup_fep_shadow_pane_g8

0xea5e,	// (0x0002623a) grid_vkb_keypad_number_pane_ParamLimits

0xea5e,	// (0x0002623a) grid_vkb_keypad_number_pane

0xea6e,	// (0x0002624a) grid_vkb_keypad_pane_ParamLimits

0xea6e,	// (0x0002624a) grid_vkb_keypad_pane

0xea94,	// (0x00026270) fep_vkb_bottom_pane_g1_ParamLimits

0xea94,	// (0x00026270) fep_vkb_bottom_pane_g1

0xeabd,	// (0x00026299) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xeabd,	// (0x00026299) grid_vkb_keypad_bottom_left_pane

0xead2,	// (0x000262ae) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xead2,	// (0x000262ae) grid_vkb_keypad_bottom_right_pane

0xeae7,	// (0x000262c3) fep_vkb_top_text_pane_g1

0x9ab9,	// (0x00021295) fep_vkb_top_text_pane_t1

0x9acb,	// (0x000212a7) cell_vkb_side_pane_ParamLimits

0x9acb,	// (0x000212a7) cell_vkb_side_pane

0xe833,	// (0x0002600f) cell_vkb_side_pane_g1

0xeb0f,	// (0x000262eb) cell_vkb_keypad_pane_ParamLimits

0xeb0f,	// (0x000262eb) cell_vkb_keypad_pane

0xeb84,	// (0x00026360) cell_vkb_keypad_pane_g1

0x0008,

0xfb7c,	// (0x00027358) bg_popup_fep_shadow_pane_g

0xe833,	// (0x0002600f) cell_hwr_side_pane_g1

0xe833,	// (0x0002600f) cell_hwr_side_pane_g2

0xeb8e,	// (0x0002636a) cell_vkb_keypad_pane_t1

0x9ae1,	// (0x000212bd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x9ae1,	// (0x000212bd) cell_vkb_keypad_bottom_left_pane

0x9af6,	// (0x000212d2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9af6,	// (0x000212d2) cell_vkb_keypad_bottom_right_pane

0xe833,	// (0x0002600f) cell_vkb_keypad_bottom_left_pane_g1

0xe833,	// (0x0002600f) cell_vkb_keypad_bottom_right_pane_g1

0xeb9c,	// (0x00026378) cell_vkb_keypad_number_pane_ParamLimits

0xeb9c,	// (0x00026378) cell_vkb_keypad_number_pane

0xebbb,	// (0x00026397) cell_vkb_keypad_number_pane_g1

0xebc5,	// (0x000263a1) cell_vkb_keypad_number_pane_g2

0xebce,	// (0x000263aa) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6e,	// (0x0002734a) cell_vkb_keypad_number_pane_g

0xeb8e,	// (0x0002636a) cell_vkb_keypad_number_pane_t1

0xebf2,	// (0x000263ce) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x00027345) cell_hwr_side_pane_g

0xec0b,	// (0x000263e7) cell_hwr_side_pane_t1

0x592a,	// (0x0001d106) cell_hwr_side_pane_t1_copy1

0xe9da,	// (0x000261b6) cell_hwr_candidate_pane_g1

0x5938,	// (0x0001d114) cell_hwr_candidate_pane_t1

0xe833,	// (0x0002600f) cell_vkb_candidate_pane_g2

0xec91,	// (0x0002646d) cell_vkb_candidate_pane_t1

0xe808,	// (0x00025fe4) bg_popup_fep_shadow_pane_ParamLimits

0xe808,	// (0x00025fe4) bg_popup_fep_shadow_pane

0x2705,	// (0x00019ee1) bg_fep_hwr_top_pane_g4

0xe8c7,	// (0x000260a3) bg_hwr_side_pane_g1_ParamLimits

0xe8c7,	// (0x000260a3) bg_hwr_side_pane_g1

0x9952,	// (0x0002112e) cell_hwr_side_pane_ParamLimits

0x9952,	// (0x0002112e) cell_hwr_side_pane

0x584b,	// (0x0001d027) fep_hwr_write_pane_g1_ParamLimits

0x584b,	// (0x0001d027) fep_hwr_write_pane_g1

0x5858,	// (0x0001d034) fep_hwr_write_pane_g2_ParamLimits

0x5858,	// (0x0001d034) fep_hwr_write_pane_g2

0x5865,	// (0x0001d041) fep_hwr_write_pane_g3_ParamLimits

0x5865,	// (0x0001d041) fep_hwr_write_pane_g3

0x9972,	// (0x0002114e) fep_hwr_write_pane_g4_ParamLimits

0x9972,	// (0x0002114e) fep_hwr_write_pane_g4

0x0005,

0xfb3b,	// (0x00027317) fep_hwr_write_pane_g_ParamLimits

0xfb3b,	// (0x00027317) fep_hwr_write_pane_g

0x2705,	// (0x00019ee1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2705,	// (0x00019ee1) bg_fep_hwr_candidate_pane_g2

0x5888,	// (0x0001d064) cell_hwr_candidate_pane_ParamLimits

0x5888,	// (0x0001d064) cell_hwr_candidate_pane

0x58ca,	// (0x0001d0a6) fep_hwr_candidate_pane_g1_ParamLimits

0xe927,	// (0x00026103) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe927,	// (0x00026103) bg_popup_fep_shadow_pane_cp2

0xe9da,	// (0x000261b6) fep_vkb_top_pane_g4_ParamLimits

0xe9da,	// (0x000261b6) fep_vkb_top_pane_g4

0xe9f9,	// (0x000261d5) fep_vkb_side_pane_g2_ParamLimits

0xe9f9,	// (0x000261d5) fep_vkb_side_pane_g2

0x76c2,	// (0x0001ee9e) list_setting_pane_t4_ParamLimits

0x76c2,	// (0x0001ee9e) list_setting_pane_t4

0x775c,	// (0x0001ef38) list_setting_number_pane_t5_ParamLimits

0x775c,	// (0x0001ef38) list_setting_number_pane_t5

0x8283,	// (0x0001fa5f) list_double_heading_pane_cp2_ParamLimits

0x8283,	// (0x0001fa5f) list_double_heading_pane_cp2

0xbb1c,	// (0x000232f8) list_double_heading_pane_g1_cp2_ParamLimits

0xbb1c,	// (0x000232f8) list_double_heading_pane_g1_cp2

0xbb28,	// (0x00023304) list_double_heading_pane_g2_cp2_ParamLimits

0xbb28,	// (0x00023304) list_double_heading_pane_g2_cp2

0xec9f,	// (0x0002647b) list_double_heading_pane_t1_cp2_ParamLimits

0xec9f,	// (0x0002647b) list_double_heading_pane_t1_cp2

0xecb5,	// (0x00026491) list_double_heading_pane_t2_cp2_ParamLimits

0xecb5,	// (0x00026491) list_double_heading_pane_t2_cp2

0xb489,	// (0x00022c65) aid_value_unit2

0x4b1e,	// (0x0001c2fa) popup_preview_fixed_window

0xb634,	// (0x00022e10) bg_popup_preview_window_pane_cp02

0xecc7,	// (0x000264a3) list_preview_fixed_pane

0xed0d,	// (0x000264e9) list_empty_pane_fp_ParamLimits

0xed0d,	// (0x000264e9) list_empty_pane_fp

0xed0d,	// (0x000264e9) list_single_cale_day_pane_fp_ParamLimits

0xed0d,	// (0x000264e9) list_single_cale_day_pane_fp

0xed0d,	// (0x000264e9) list_single_graphic_heading_pane_fp_ParamLimits

0xed0d,	// (0x000264e9) list_single_graphic_heading_pane_fp

0xed0d,	// (0x000264e9) list_single_graphic_pane_fp_ParamLimits

0xed0d,	// (0x000264e9) list_single_graphic_pane_fp

0xed0d,	// (0x000264e9) list_single_heading_pane_fp_ParamLimits

0xed0d,	// (0x000264e9) list_single_heading_pane_fp

0xed0d,	// (0x000264e9) list_single_pane_fp_ParamLimits

0xed0d,	// (0x000264e9) list_single_pane_fp

0xed22,	// (0x000264fe) list_single_pane_fp_g1_ParamLimits

0xed22,	// (0x000264fe) list_single_pane_fp_g1

0x44c2,	// (0x0001bc9e) list_single_pane_fp_g2_ParamLimits

0x44c2,	// (0x0001bc9e) list_single_pane_fp_g2

0x44ce,	// (0x0001bcaa) list_single_pane_fp_g3_ParamLimits

0x44ce,	// (0x0001bcaa) list_single_pane_fp_g3

0xed2e,	// (0x0002650a) list_single_pane_fp_g4_ParamLimits

0xed2e,	// (0x0002650a) list_single_pane_fp_g4

0x0003,

0xfb9d,	// (0x00027379) list_single_pane_fp_g_ParamLimits

0xfb9d,	// (0x00027379) list_single_pane_fp_g

0x44e2,	// (0x0001bcbe) list_single_pane_fp_t1_ParamLimits

0x44e2,	// (0x0001bcbe) list_single_pane_fp_t1

0x44f9,	// (0x0001bcd5) list_single_graphic_pane_fp_g1_ParamLimits

0x44f9,	// (0x0001bcd5) list_single_graphic_pane_fp_g1

0xed22,	// (0x000264fe) list_single_graphic_pane_fp_g2_ParamLimits

0xed22,	// (0x000264fe) list_single_graphic_pane_fp_g2

0x44c2,	// (0x0001bc9e) list_single_graphic_pane_fp_g3_ParamLimits

0x44c2,	// (0x0001bc9e) list_single_graphic_pane_fp_g3

0x44ce,	// (0x0001bcaa) list_single_graphic_pane_fp_g4_ParamLimits

0x44ce,	// (0x0001bcaa) list_single_graphic_pane_fp_g4

0xed2e,	// (0x0002650a) list_single_graphic_pane_fp_g5_ParamLimits

0xed2e,	// (0x0002650a) list_single_graphic_pane_fp_g5

0x0004,

0xfba6,	// (0x00027382) list_single_graphic_pane_fp_g_ParamLimits

0xfba6,	// (0x00027382) list_single_graphic_pane_fp_g

0x4505,	// (0x0001bce1) list_single_graphic_pane_fp_t1_ParamLimits

0x4505,	// (0x0001bce1) list_single_graphic_pane_fp_t1

0x44f9,	// (0x0001bcd5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x44f9,	// (0x0001bcd5) list_single_graphic_heading_pane_fp_g1

0xed22,	// (0x000264fe) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xed22,	// (0x000264fe) list_single_graphic_heading_pane_fp_g2

0x44c2,	// (0x0001bc9e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x44c2,	// (0x0001bc9e) list_single_graphic_heading_pane_fp_g3

0x44ce,	// (0x0001bcaa) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x44ce,	// (0x0001bcaa) list_single_graphic_heading_pane_fp_g4

0xed2e,	// (0x0002650a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xed2e,	// (0x0002650a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba6,	// (0x00027382) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x00027382) list_single_graphic_heading_pane_fp_g

0x451b,	// (0x0001bcf7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x451b,	// (0x0001bcf7) list_single_graphic_heading_pane_fp_t1

0x4531,	// (0x0001bd0d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4531,	// (0x0001bd0d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0002738d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0002738d) list_single_graphic_heading_pane_fp_t

0x4543,	// (0x0001bd1f) list_single_cale_day_pane_fp_g1_ParamLimits

0x4543,	// (0x0001bd1f) list_single_cale_day_pane_fp_g1

0xed3a,	// (0x00026516) list_single_cale_day_pane_fp_g2_ParamLimits

0xed3a,	// (0x00026516) list_single_cale_day_pane_fp_g2

0x457b,	// (0x0001bd57) list_single_cale_day_pane_fp_g3_ParamLimits

0x457b,	// (0x0001bd57) list_single_cale_day_pane_fp_g3

0x45a3,	// (0x0001bd7f) list_single_cale_day_pane_fp_g4_ParamLimits

0x45a3,	// (0x0001bd7f) list_single_cale_day_pane_fp_g4

0x45c7,	// (0x0001bda3) list_single_cale_day_pane_fp_g5_ParamLimits

0x45c7,	// (0x0001bda3) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb6,	// (0x00027392) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb6,	// (0x00027392) list_single_cale_day_pane_fp_g

0x45eb,	// (0x0001bdc7) list_single_cale_day_pane_fp_t1_ParamLimits

0x45eb,	// (0x0001bdc7) list_single_cale_day_pane_fp_t1

0x4611,	// (0x0001bded) list_single_cale_day_pane_fp_t2_ParamLimits

0x4611,	// (0x0001bded) list_single_cale_day_pane_fp_t2

0x462a,	// (0x0001be06) list_single_cale_day_pane_fp_t3_ParamLimits

0x462a,	// (0x0001be06) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc1,	// (0x0002739d) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc1,	// (0x0002739d) list_single_cale_day_pane_fp_t

0xed22,	// (0x000264fe) list_empty_pane_fp_g1_ParamLimits

0xed22,	// (0x000264fe) list_empty_pane_fp_g1

0x4643,	// (0x0001be1f) list_empty_pane_fp_t1

0x4651,	// (0x0001be2d) list_empty_pane_fp_t2

0x0001,

0xfbc8,	// (0x000273a4) list_empty_pane_fp_t

0xed22,	// (0x000264fe) list_single_heading_pane_fp_g1_ParamLimits

0xed22,	// (0x000264fe) list_single_heading_pane_fp_g1

0x44c2,	// (0x0001bc9e) list_single_heading_pane_fp_g2_ParamLimits

0x44c2,	// (0x0001bc9e) list_single_heading_pane_fp_g2

0x44ce,	// (0x0001bcaa) list_single_heading_pane_fp_g3_ParamLimits

0x44ce,	// (0x0001bcaa) list_single_heading_pane_fp_g3

0x0002,

0xfbcd,	// (0x000273a9) list_single_heading_pane_fp_g_ParamLimits

0xfbcd,	// (0x000273a9) list_single_heading_pane_fp_g

0x465f,	// (0x0001be3b) list_single_heading_pane_fp_t1_ParamLimits

0x465f,	// (0x0001be3b) list_single_heading_pane_fp_t1

0x4671,	// (0x0001be4d) list_single_heading_pane_fp_t2_ParamLimits

0x4671,	// (0x0001be4d) list_single_heading_pane_fp_t2

0x0001,

0xfbd4,	// (0x000273b0) list_single_heading_pane_fp_t_ParamLimits

0xfbd4,	// (0x000273b0) list_single_heading_pane_fp_t

0xbc66,	// (0x00023442) aid_size_cell_fast

0xb617,	// (0x00022df3) soft_indicator_pane_cp1_t1

0xbca3,	// (0x0002347f) cell_app_pane_cp2_ParamLimits

0xbca3,	// (0x0002347f) cell_app_pane_cp2

0x571a,	// (0x0001cef6) fep_hwr_candidate_drop_down_list_pane

0x2713,	// (0x00019eef) fep_hwr_candidate_pane_g3_ParamLimits

0x2713,	// (0x00019eef) fep_hwr_candidate_pane_g3

0x2720,	// (0x00019efc) fep_hwr_candidate_pane_g4_ParamLimits

0x2720,	// (0x00019efc) fep_hwr_candidate_pane_g4

0x0002,

0xfb48,	// (0x00027324) fep_hwr_candidate_pane_g_ParamLimits

0xfb48,	// (0x00027324) fep_hwr_candidate_pane_g

0xe975,	// (0x00026151) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe975,	// (0x00026151) fep_vkb_candidate_drop_down_list_pane

0xebfa,	// (0x000263d6) fep_vkb_candidate_pane_g3

0xec02,	// (0x000263de) fep_vkb_candidate_pane_g4

0x0002,

0xfb75,	// (0x00027351) fep_vkb_candidate_pane_g

0xe9da,	// (0x000261b6) cell_hwr_candidate_pane_g1_ParamLimits

0xec19,	// (0x000263f5) cell_hwr_candidate_pane_g3_ParamLimits

0xec19,	// (0x000263f5) cell_hwr_candidate_pane_g3

0xec3a,	// (0x00026416) cell_hwr_candidate_pane_g4_ParamLimits

0xec3a,	// (0x00026416) cell_hwr_candidate_pane_g4

0x0002,

0xfb8f,	// (0x0002736b) cell_hwr_candidate_pane_g_ParamLimits

0xfb8f,	// (0x0002736b) cell_hwr_candidate_pane_g

0xec5b,	// (0x00026437) cell_vkb_candidate_pane_g3_ParamLimits

0xec5b,	// (0x00026437) cell_vkb_candidate_pane_g3

0xec76,	// (0x00026452) cell_vkb_candidate_pane_g4_ParamLimits

0xec76,	// (0x00026452) cell_vkb_candidate_pane_g4

0xed46,	// (0x00026522) cell_app_pane_cp2_g1_ParamLimits

0xed46,	// (0x00026522) cell_app_pane_cp2_g1

0xed64,	// (0x00026540) cell_app_pane_cp2_g2_ParamLimits

0xed64,	// (0x00026540) cell_app_pane_cp2_g2

0x0001,

0xfbd9,	// (0x000273b5) cell_app_pane_cp2_g_ParamLimits

0xfbd9,	// (0x000273b5) cell_app_pane_cp2_g

0xed70,	// (0x0002654c) cell_app_pane_cp2_t1_ParamLimits

0xed70,	// (0x0002654c) cell_app_pane_cp2_t1

0xbb02,	// (0x000232de) grid_highlight_pane_cp1_ParamLimits

0xbb02,	// (0x000232de) grid_highlight_pane_cp1

0x5956,	// (0x0001d132) cell_hwr_candidate_pane_cp1_ParamLimits

0x5956,	// (0x0001d132) cell_hwr_candidate_pane_cp1

0xe9da,	// (0x000261b6) fep_hwr_candidate_drop_down_list_pane_g1

0xed82,	// (0x0002655e) fep_hwr_candidate_drop_down_list_pane_g2

0xed8f,	// (0x0002656b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x000273ba) fep_hwr_candidate_drop_down_list_pane_g

0x5975,	// (0x0001d151) fep_hwr_candidate_drop_down_list_scroll_pane

0x597e,	// (0x0001d15a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x597e,	// (0x0001d15a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x598b,	// (0x0001d167) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x598b,	// (0x0001d167) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5998,	// (0x0001d174) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5998,	// (0x0001d174) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xec5b,	// (0x00026437) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xec5b,	// (0x00026437) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xec76,	// (0x00026452) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xec76,	// (0x00026452) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x59a5,	// (0x0001d181) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x59a5,	// (0x0001d181) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x59c0,	// (0x0001d19c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x59c0,	// (0x0001d19c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x59db,	// (0x0001d1b7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x59db,	// (0x0001d1b7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x000273c1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x000273c1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xed9c,	// (0x00026578) cell_vkb_candidate_pane_cp1_ParamLimits

0xed9c,	// (0x00026578) cell_vkb_candidate_pane_cp1

0xe9da,	// (0x000261b6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe9da,	// (0x000261b6) fep_vkb_candidate_drop_down_list_pane_g1

0xed82,	// (0x0002655e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xed82,	// (0x0002655e) fep_vkb_candidate_drop_down_list_pane_g2

0xed8f,	// (0x0002656b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xed8f,	// (0x0002656b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x000273ba) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x000273ba) fep_vkb_candidate_drop_down_list_pane_g

0xedbc,	// (0x00026598) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xedbc,	// (0x00026598) fep_vkb_candidate_drop_down_list_scroll_pane

0xedc9,	// (0x000265a5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xedc9,	// (0x000265a5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xedd6,	// (0x000265b2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xedd6,	// (0x000265b2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xedf6,	// (0x000265d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xedf6,	// (0x000265d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xec19,	// (0x000263f5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xec19,	// (0x000263f5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xec3a,	// (0x00026416) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xec3a,	// (0x00026416) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xee02,	// (0x000265de) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xee02,	// (0x000265de) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xee23,	// (0x000265ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee23,	// (0x000265ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xee44,	// (0x00026620) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee44,	// (0x00026620) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf6,	// (0x000273d2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf6,	// (0x000273d2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7d6e,	// (0x0001f54a) title_pane_g1_ParamLimits

0x7d7f,	// (0x0001f55b) title_pane_g2_ParamLimits

0xf592,	// (0x00026d6e) title_pane_g_ParamLimits

0xc02a,	// (0x00023806) aid_call2_pane

0xc032,	// (0x0002380e) aid_call_pane

0xc03a,	// (0x00023816) popup_clock_analogue_window_g1

0xc03a,	// (0x00023816) popup_clock_analogue_window_g2

0x4e87,	// (0x0001c663) popup_clock_analogue_window_g3

0x4e90,	// (0x0001c66c) popup_clock_analogue_window_g4

0xb49b,	// (0x00022c77) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x00026f18) popup_clock_analogue_window_g

0x4e98,	// (0x0001c674) popup_clock_analogue_window_t1

0x4ea6,	// (0x0001c682) clock_digital_number_pane_ParamLimits

0x4ea6,	// (0x0001c682) clock_digital_number_pane

0x4eb2,	// (0x0001c68e) clock_digital_number_pane_cp02_ParamLimits

0x4eb2,	// (0x0001c68e) clock_digital_number_pane_cp02

0x4ebe,	// (0x0001c69a) clock_digital_number_pane_cp03_ParamLimits

0x4ebe,	// (0x0001c69a) clock_digital_number_pane_cp03

0x4eca,	// (0x0001c6a6) clock_digital_number_pane_cp04_ParamLimits

0x4eca,	// (0x0001c6a6) clock_digital_number_pane_cp04

0x4ed6,	// (0x0001c6b2) clock_digital_separator_pane_ParamLimits

0x4ed6,	// (0x0001c6b2) clock_digital_separator_pane

0x4ee2,	// (0x0001c6be) popup_clock_digital_window_t1_ParamLimits

0x4ee2,	// (0x0001c6be) popup_clock_digital_window_t1

0xb49b,	// (0x00022c77) clock_digital_number_pane_g1

0xb49b,	// (0x00022c77) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x00026f23) clock_digital_number_pane_g

0xb49b,	// (0x00022c77) clock_digital_separator_pane_g1

0xb49b,	// (0x00022c77) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x00026f23) clock_digital_separator_pane_g

0x8c29,	// (0x00020405) aid_fill_nsta_ParamLimits

0x8d58,	// (0x00020534) indicator_nsta_pane_ParamLimits

0xc9a2,	// (0x0002417e) popup_clock_analogue_window

0xc9a2,	// (0x0002417e) popup_clock_digital_window

0xc8da,	// (0x000240b6) grid_indicator_nsta_pane_ParamLimits

0xe4f8,	// (0x00025cd4) clock_nsta_pane_t2

0x0001,

0xfad5,	// (0x000272b1) clock_nsta_pane_t

0x4e4b,	// (0x0001c627) aid_size_max_handle

0x827a,	// (0x0001fa56) aid_size_min_handle

0xc527,	// (0x00023d03) editor_scroll_pane

0xee5f,	// (0x0002663b) ex_editor_pane

0xbc21,	// (0x000233fd) scroll_pane_cp13

0xbaa1,	// (0x0002327d) scroll_pane_cp14

0xc064,	// (0x00023840) scroll_pane_cp36

0x8292,	// (0x0001fa6e) list_single_graphic_hl_pane_cp2_ParamLimits

0x8292,	// (0x0001fa6e) list_single_graphic_hl_pane_cp2

0x79d2,	// (0x0001f1ae) list_single_graphic_hl_pane_ParamLimits

0x79d2,	// (0x0001f1ae) list_single_graphic_hl_pane

0x4687,	// (0x0001be63) aid_size_min_hl_cp1

0xee67,	// (0x00026643) list_highlight_pane_cp34_ParamLimits

0xee67,	// (0x00026643) list_highlight_pane_cp34

0xee78,	// (0x00026654) list_single_graphic_hl_pane_g1_ParamLimits

0xee78,	// (0x00026654) list_single_graphic_hl_pane_g1

0x79e4,	// (0x0001f1c0) list_single_graphic_hl_pane_g2_ParamLimits

0x79e4,	// (0x0001f1c0) list_single_graphic_hl_pane_g2

0x79e4,	// (0x0001f1c0) list_single_graphic_hl_pane_g3_ParamLimits

0x79e4,	// (0x0001f1c0) list_single_graphic_hl_pane_g3

0x79f0,	// (0x0001f1cc) list_single_graphic_hl_pane_g4_ParamLimits

0x79f0,	// (0x0001f1cc) list_single_graphic_hl_pane_g4

0x79fc,	// (0x0001f1d8) list_single_graphic_hl_pane_g5_ParamLimits

0x79fc,	// (0x0001f1d8) list_single_graphic_hl_pane_g5

0x0004,

0xfc07,	// (0x000273e3) list_single_graphic_hl_pane_g_ParamLimits

0xfc07,	// (0x000273e3) list_single_graphic_hl_pane_g

0x7a10,	// (0x0001f1ec) list_single_graphic_hl_pane_t1_ParamLimits

0x7a10,	// (0x0001f1ec) list_single_graphic_hl_pane_t1

0xee85,	// (0x00026661) aid_size_min_hl_cp2

0xee8e,	// (0x0002666a) list_highlight_pane_cp34_cp2_ParamLimits

0xee8e,	// (0x0002666a) list_highlight_pane_cp34_cp2

0xee78,	// (0x00026654) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xee78,	// (0x00026654) list_single_graphic_hl_pane_g1_cp2

0xee9b,	// (0x00026677) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xee9b,	// (0x00026677) list_single_graphic_hl_pane_g2_cp2

0xeea7,	// (0x00026683) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xeea7,	// (0x00026683) list_single_graphic_hl_pane_g3_cp2

0xd833,	// (0x0002500f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd833,	// (0x0002500f) list_single_graphic_hl_pane_g4_cp2

0xeeb5,	// (0x00026691) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xeeb5,	// (0x00026691) list_single_graphic_hl_pane_g5_cp2

0x8445,	// (0x0001fc21) control_pane_g4_ParamLimits

0x8445,	// (0x0001fc21) control_pane_g4

0xbc5a,	// (0x00023436) bg_popup_sub_pane_cp10_ParamLimits

0xe83d,	// (0x00026019) list_choice_list_pane_ParamLimits

0xe84c,	// (0x00026028) scroll_pane_cp23

0xb634,	// (0x00022e10) bg_popup_preview_window_pane_cp02_ParamLimits

0xecc7,	// (0x000264a3) list_preview_fixed_pane_ParamLimits

0xecdd,	// (0x000264b9) list_preview_fixed_pane_cp_ParamLimits

0xecdd,	// (0x000264b9) list_preview_fixed_pane_cp

0xece9,	// (0x000264c5) popup_preview_fixed_window_g1_ParamLimits

0xece9,	// (0x000264c5) popup_preview_fixed_window_g1

0xecf5,	// (0x000264d1) popup_preview_fixed_window_g2_ParamLimits

0xecf5,	// (0x000264d1) popup_preview_fixed_window_g2

0x0002,

0xfb96,	// (0x00027372) popup_preview_fixed_window_g_ParamLimits

0xfb96,	// (0x00027372) popup_preview_fixed_window_g

0x4dbf,	// (0x0001c59b) aid_navi_side_left_pane_ParamLimits

0x4dd4,	// (0x0001c5b0) aid_navi_side_right_pane_ParamLimits

0x4dec,	// (0x0001c5c8) navi_icon_pane_stacon_ParamLimits

0x4e00,	// (0x0001c5dc) navi_navi_pane_stacon_ParamLimits

0x4dec,	// (0x0001c5c8) navi_text_pane_stacon_ParamLimits

0xb491,	// (0x00022c6d) main_text_info_pane

0xeedf,	// (0x000266bb) listscroll_text_info_pane

0xeee7,	// (0x000266c3) list_text_info_pane_ParamLimits

0xeee7,	// (0x000266c3) list_text_info_pane

0xeef6,	// (0x000266d2) scroll_pane_cp24_ParamLimits

0xeef6,	// (0x000266d2) scroll_pane_cp24

0x9b11,	// (0x000212ed) list_text_info_pane_t1_ParamLimits

0x9b11,	// (0x000212ed) list_text_info_pane_t1

0x85c3,	// (0x0001fd9f) popup_fast_swap2_window_ParamLimits

0x85c3,	// (0x0001fd9f) popup_fast_swap2_window

0xef14,	// (0x000266f0) aid_size_cell_fast2

0xb491,	// (0x00022c6d) bg_popup_window_pane_cp17

0xce4e,	// (0x0002462a) heading_pane_cp2

0xb826,	// (0x00023002) listscroll_fast2_pane

0xef1e,	// (0x000266fa) grid_fast2_pane

0xef28,	// (0x00026704) listscroll_fast2_pane_g1

0xef30,	// (0x0002670c) listscroll_fast2_pane_g2

0x0001,

0xfc12,	// (0x000273ee) listscroll_fast2_pane_g

0xbc21,	// (0x000233fd) scroll_pane_cp26

0xef3a,	// (0x00026716) cell_fast2_pane_ParamLimits

0xef3a,	// (0x00026716) cell_fast2_pane

0xef4f,	// (0x0002672b) cell_fast2_pane_g1

0xef58,	// (0x00026734) cell_fast2_pane_g2

0xef61,	// (0x0002673d) cell_fast2_pane_g3

0x0002,

0xfc17,	// (0x000273f3) cell_fast2_pane_g

0xb868,	// (0x00023044) grid_highlight_pane_cp9

0xb87d,	// (0x00023059) main_eswt_pane_ParamLimits

0xb87d,	// (0x00023059) main_eswt_pane

0xef0b,	// (0x000266e7) list_single_text_info_pane

0xef69,	// (0x00026745) eswt_ctrl_button_pane

0xef69,	// (0x00026745) eswt_ctrl_canvas_pane

0xef71,	// (0x0002674d) eswt_ctrl_combo_pane

0xef69,	// (0x00026745) eswt_ctrl_default_pane

0xef69,	// (0x00026745) eswt_ctrl_label_pane

0xef79,	// (0x00026755) eswt_ctrl_wait_pane

0xef81,	// (0x0002675d) eswt_shell_pane

0xb491,	// (0x00022c6d) listscroll_eswt_app_pane

0xefa1,	// (0x0002677d) popup_eswt_tasktip_window_ParamLimits

0xefa1,	// (0x0002677d) popup_eswt_tasktip_window

0xcba1,	// (0x0002437d) bg_popup_window_pane_cp18

0xefb2,	// (0x0002678e) eswt_control_pane_g1_ParamLimits

0xefb2,	// (0x0002678e) eswt_control_pane_g1

0xefbf,	// (0x0002679b) eswt_control_pane_g2_ParamLimits

0xefbf,	// (0x0002679b) eswt_control_pane_g2

0xefcc,	// (0x000267a8) eswt_control_pane_g3_ParamLimits

0xefcc,	// (0x000267a8) eswt_control_pane_g3

0xefd9,	// (0x000267b5) eswt_control_pane_g4_ParamLimits

0xefd9,	// (0x000267b5) eswt_control_pane_g4

0x0003,

0xfc1e,	// (0x000273fa) eswt_control_pane_g_ParamLimits

0xfc1e,	// (0x000273fa) eswt_control_pane_g

0xbb02,	// (0x000232de) bg_button_pane_ParamLimits

0xbb02,	// (0x000232de) bg_button_pane

0xb87d,	// (0x00023059) common_borders_pane_copy2_ParamLimits

0xb87d,	// (0x00023059) common_borders_pane_copy2

0xefe6,	// (0x000267c2) control_button_pane_g1_ParamLimits

0xefe6,	// (0x000267c2) control_button_pane_g1

0xeff2,	// (0x000267ce) control_button_pane_g2_ParamLimits

0xeff2,	// (0x000267ce) control_button_pane_g2

0xeffe,	// (0x000267da) control_button_pane_g3_ParamLimits

0xeffe,	// (0x000267da) control_button_pane_g3

0x0002,

0xfc27,	// (0x00027403) control_button_pane_g_ParamLimits

0xfc27,	// (0x00027403) control_button_pane_g

0xf012,	// (0x000267ee) control_button_pane_t1

0xf020,	// (0x000267fc) control_button_pane_t2

0x0001,

0xfc2e,	// (0x0002740a) control_button_pane_t

0xcab1,	// (0x0002428d) bg_button_pane_g1

0xcab9,	// (0x00024295) bg_button_pane_g2

0xcac1,	// (0x0002429d) bg_button_pane_g3

0xcac9,	// (0x000242a5) bg_button_pane_g4

0xcad1,	// (0x000242ad) bg_button_pane_g5

0xcad9,	// (0x000242b5) bg_button_pane_g6

0xcae1,	// (0x000242bd) bg_button_pane_g7

0xcae9,	// (0x000242c5) bg_button_pane_g8

0xcaf1,	// (0x000242cd) bg_button_pane_g9

0x0008,

0xf89a,	// (0x00027076) bg_button_pane_g

0xe7ea,	// (0x00025fc6) common_borders_pane_ParamLimits

0xe7ea,	// (0x00025fc6) common_borders_pane

0xefb2,	// (0x0002678e) eswt_control_pane_g1_copy1_ParamLimits

0xefb2,	// (0x0002678e) eswt_control_pane_g1_copy1

0xefbf,	// (0x0002679b) eswt_control_pane_g2_copy1_ParamLimits

0xefbf,	// (0x0002679b) eswt_control_pane_g2_copy1

0xefcc,	// (0x000267a8) eswt_control_pane_g3_copy1_ParamLimits

0xefcc,	// (0x000267a8) eswt_control_pane_g3_copy1

0xefd9,	// (0x000267b5) eswt_control_pane_g4_copy1_ParamLimits

0xefd9,	// (0x000267b5) eswt_control_pane_g4_copy1

0xe833,	// (0x0002600f) bg_eswt_ctrl_canvas_pane_g1

0xe7ea,	// (0x00025fc6) common_borders_pane_cp2_ParamLimits

0xe7ea,	// (0x00025fc6) common_borders_pane_cp2

0xe7ea,	// (0x00025fc6) common_borders_pane_cp3_ParamLimits

0xe7ea,	// (0x00025fc6) common_borders_pane_cp3

0xf02e,	// (0x0002680a) separator_horizontal_pane

0xf036,	// (0x00026812) separator_vertical_pane

0xefb2,	// (0x0002678e) eswt_control_pane_g1_copy2_ParamLimits

0xefb2,	// (0x0002678e) eswt_control_pane_g1_copy2

0xefbf,	// (0x0002679b) eswt_control_pane_g2_copy2_ParamLimits

0xefbf,	// (0x0002679b) eswt_control_pane_g2_copy2

0xefcc,	// (0x000267a8) eswt_control_pane_g3_copy2_ParamLimits

0xefcc,	// (0x000267a8) eswt_control_pane_g3_copy2

0xefd9,	// (0x000267b5) eswt_control_pane_g4_copy2_ParamLimits

0xefd9,	// (0x000267b5) eswt_control_pane_g4_copy2

0xb491,	// (0x00022c6d) common_borders_pane_cp4

0xf03f,	// (0x0002681b) separator_horizontal_pane_g1

0xf048,	// (0x00026824) separator_horizontal_pane_g2

0xf051,	// (0x0002682d) separator_horizontal_pane_g3

0x0002,

0xfc33,	// (0x0002740f) separator_horizontal_pane_g

0xefb2,	// (0x0002678e) eswt_control_pane_g1_copy3_ParamLimits

0xefb2,	// (0x0002678e) eswt_control_pane_g1_copy3

0xefbf,	// (0x0002679b) eswt_control_pane_g2_copy3_ParamLimits

0xefbf,	// (0x0002679b) eswt_control_pane_g2_copy3

0xefcc,	// (0x000267a8) eswt_control_pane_g3_copy3_ParamLimits

0xefcc,	// (0x000267a8) eswt_control_pane_g3_copy3

0xefd9,	// (0x000267b5) eswt_control_pane_g4_copy3_ParamLimits

0xefd9,	// (0x000267b5) eswt_control_pane_g4_copy3

0xb491,	// (0x00022c6d) common_borders_pane_cp5

0xf05a,	// (0x00026836) separator_vertical_pane_g1

0xf063,	// (0x0002683f) separator_vertical_pane_g2

0xf06c,	// (0x00026848) separator_vertical_pane_g3

0x0002,

0xfc3a,	// (0x00027416) separator_vertical_pane_g

0xefb2,	// (0x0002678e) eswt_control_pane_g1_copy4_ParamLimits

0xefb2,	// (0x0002678e) eswt_control_pane_g1_copy4

0xefbf,	// (0x0002679b) eswt_control_pane_g2_copy4_ParamLimits

0xefbf,	// (0x0002679b) eswt_control_pane_g2_copy4

0xefcc,	// (0x000267a8) eswt_control_pane_g3_copy4_ParamLimits

0xefcc,	// (0x000267a8) eswt_control_pane_g3_copy4

0xefd9,	// (0x000267b5) eswt_control_pane_g4_copy4_ParamLimits

0xefd9,	// (0x000267b5) eswt_control_pane_g4_copy4

0x9b2c,	// (0x00021308) eswt_ctrl_combo_button_pane

0x9b34,	// (0x00021310) eswt_ctrl_input_pane

0x9b3c,	// (0x00021318) popup_choice_list_window_cp70

0x9b44,	// (0x00021320) eswt_ctrl_input_pane_t1

0xb491,	// (0x00022c6d) input_focus_pane_cp70

0xe7ea,	// (0x00025fc6) bg_button_pane_cp70_ParamLimits

0xe7ea,	// (0x00025fc6) bg_button_pane_cp70

0x9b52,	// (0x0002132e) eswt_ctrl_combo_button_pane_g1

0xf075,	// (0x00026851) wait_bar_pane_cp70

0xcba1,	// (0x0002437d) bg_popup_window_pane_cp70_ParamLimits

0xcba1,	// (0x0002437d) bg_popup_window_pane_cp70

0xf07d,	// (0x00026859) popup_eswt_tasktip_window_t1

0xf093,	// (0x0002686f) wait_bar_pane_cp71_ParamLimits

0xf093,	// (0x0002686f) wait_bar_pane_cp71

0xf09f,	// (0x0002687b) grid_eswt_app_pane

0xbe75,	// (0x00023651) scroll_pane_cp70

0x9b5a,	// (0x00021336) cell_eswt_app_pane_ParamLimits

0x9b5a,	// (0x00021336) cell_eswt_app_pane

0x9b84,	// (0x00021360) cell_eswt_app_pane_g1_ParamLimits

0x9b84,	// (0x00021360) cell_eswt_app_pane_g1

0x9bb3,	// (0x0002138f) cell_eswt_app_pane_g2_ParamLimits

0x9bb3,	// (0x0002138f) cell_eswt_app_pane_g2

0x0001,

0xfc41,	// (0x0002741d) cell_eswt_app_pane_g_ParamLimits

0xfc41,	// (0x0002741d) cell_eswt_app_pane_g

0x9bdc,	// (0x000213b8) cell_eswt_app_pane_t1_ParamLimits

0x9bdc,	// (0x000213b8) cell_eswt_app_pane_t1

0xf0a8,	// (0x00026884) grid_highlight_pane_cp70_ParamLimits

0xf0a8,	// (0x00026884) grid_highlight_pane_cp70

0xc3fc,	// (0x00023bd8) set_content_pane_g1

0xc706,	// (0x00023ee2) status_small_volume_pane

0x59f6,	// (0x0001d1d2) status_small_volume_pane_g1

0x59fe,	// (0x0001d1da) volume_small2_pane

0x5a07,	// (0x0001d1e3) volume_small2_pane_g1

0x5a10,	// (0x0001d1ec) volume_small2_pane_g2

0x5a19,	// (0x0001d1f5) volume_small2_pane_g3

0x5a22,	// (0x0001d1fe) volume_small2_pane_g4

0x5a2b,	// (0x0001d207) volume_small2_pane_g5

0x5a34,	// (0x0001d210) volume_small2_pane_g6

0x5a3d,	// (0x0001d219) volume_small2_pane_g7

0x5a46,	// (0x0001d222) volume_small2_pane_g8

0x5a4f,	// (0x0001d22b) volume_small2_pane_g9

0x5a58,	// (0x0001d234) volume_small2_pane_g10

0x0009,

0xfc46,	// (0x00027422) volume_small2_pane_g

0xeae7,	// (0x000262c3) fep_vkb_top_text_pane_g1_ParamLimits

0x9ab9,	// (0x00021295) fep_vkb_top_text_pane_t1_ParamLimits

0xed01,	// (0x000264dd) popup_preview_fixed_window_g3_ParamLimits

0xed01,	// (0x000264dd) popup_preview_fixed_window_g3

0x8bbc,	// (0x00020398) popup_toolbar_trans_pane

0x944d,	// (0x00020c29) aid_height_set_list_ParamLimits

0xd83f,	// (0x0002501b) aid_size_parent_ParamLimits

0xbc5a,	// (0x00023436) list_highlight_pane_cp2_ParamLimits

0xc3fc,	// (0x00023bd8) set_content_pane_g1_ParamLimits

0x95e8,	// (0x00020dc4) list_single_image_pane_ParamLimits

0x95e8,	// (0x00020dc4) list_single_image_pane

0xf0b4,	// (0x00026890) aid_size_cell_image_ParamLimits

0xf0b4,	// (0x00026890) aid_size_cell_image

0x9c0e,	// (0x000213ea) grid_single_image_pane_ParamLimits

0x9c0e,	// (0x000213ea) grid_single_image_pane

0xc8ce,	// (0x000240aa) list_single_image_pane_g1_ParamLimits

0xc8ce,	// (0x000240aa) list_single_image_pane_g1

0xede2,	// (0x000265be) list_single_image_pane_g2_ParamLimits

0xede2,	// (0x000265be) list_single_image_pane_g2

0x0001,

0xfc5b,	// (0x00027437) list_single_image_pane_g_ParamLimits

0xfc5b,	// (0x00027437) list_single_image_pane_g

0xc8e8,	// (0x000240c4) list_single_image_pane_t1_ParamLimits

0xc8e8,	// (0x000240c4) list_single_image_pane_t1

0x9c1c,	// (0x000213f8) cell_image_list_pane_ParamLimits

0x9c1c,	// (0x000213f8) cell_image_list_pane

0xf0c1,	// (0x0002689d) cell_image_list_pane_g1

0xf0ca,	// (0x000268a6) cell_image_list_pane_g2

0x0001,

0xfc60,	// (0x0002743c) cell_image_list_pane_g

0xf0d3,	// (0x000268af) aid_size_cell_tb_trans_pane

0xbb02,	// (0x000232de) bg_tb_trans_pane

0xf0e5,	// (0x000268c1) grid_tb_trans_pane

0xcab1,	// (0x0002428d) bg_tb_trans_pane_g1

0xcab9,	// (0x00024295) bg_tb_trans_pane_g2

0xcac1,	// (0x0002429d) bg_tb_trans_pane_g3

0xcac9,	// (0x000242a5) bg_tb_trans_pane_g4

0xcad1,	// (0x000242ad) bg_tb_trans_pane_g5

0xcae9,	// (0x000242c5) bg_tb_trans_pane_g6

0xcaf1,	// (0x000242cd) bg_tb_trans_pane_g7

0xcad9,	// (0x000242b5) bg_tb_trans_pane_g8

0xcae1,	// (0x000242bd) bg_tb_trans_pane_g9

0x0008,

0xfc65,	// (0x00027441) bg_tb_trans_pane_g

0xf0f9,	// (0x000268d5) cell_toolbar_trans_pane_ParamLimits

0xf0f9,	// (0x000268d5) cell_toolbar_trans_pane

0xe833,	// (0x0002600f) cell_toolbar_trans_pane_g1

0x9848,	// (0x00021024) list_form2_midp_pane_t1

0x9856,	// (0x00021032) list_form2_midp_pane_t2

0x0001,

0xfb0e,	// (0x000272ea) list_form2_midp_pane_t

0xe577,	// (0x00025d53) scroll_pane_cp51_ParamLimits

0xe6ee,	// (0x00025eca) form2_midp_wait_pane_g1

0xe6f7,	// (0x00025ed3) form2_midp_wait_pane_g2

0xe700,	// (0x00025edc) form2_midp_wait_pane_g3

0x0002,

0xfb23,	// (0x000272ff) form2_midp_wait_pane_g

0xb501,	// (0x00022cdd) list_highlight_pane_cp21_ParamLimits

0xe728,	// (0x00025f04) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe737,	// (0x00025f13) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdc7d,	// (0x00025459) list_single_2graphic_im_pane_ParamLimits

0xdc7d,	// (0x00025459) list_single_2graphic_im_pane

0x9c32,	// (0x0002140e) list_single_2graphic_im_pane_g1_ParamLimits

0x9c32,	// (0x0002140e) list_single_2graphic_im_pane_g1

0x9c43,	// (0x0002141f) list_single_2graphic_im_pane_g2_ParamLimits

0x9c43,	// (0x0002141f) list_single_2graphic_im_pane_g2

0x9c4f,	// (0x0002142b) list_single_2graphic_im_pane_g3_ParamLimits

0x9c4f,	// (0x0002142b) list_single_2graphic_im_pane_g3

0x0003,

0xfc78,	// (0x00027454) list_single_2graphic_im_pane_g_ParamLimits

0xfc78,	// (0x00027454) list_single_2graphic_im_pane_g

0x9c63,	// (0x0002143f) list_single_2graphic_im_pane_t1_ParamLimits

0x9c63,	// (0x0002143f) list_single_2graphic_im_pane_t1

0xed0d,	// (0x000264e9) list_single_graphic_2heading_pane_fp_ParamLimits

0xed0d,	// (0x000264e9) list_single_graphic_2heading_pane_fp

0x44f9,	// (0x0001bcd5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x44f9,	// (0x0001bcd5) list_single_graphic_2heading_pane_fp_g1

0xed22,	// (0x000264fe) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xed22,	// (0x000264fe) list_single_graphic_2heading_pane_fp_g2

0x44c2,	// (0x0001bc9e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x44c2,	// (0x0001bc9e) list_single_graphic_2heading_pane_fp_g3

0x44ce,	// (0x0001bcaa) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x44ce,	// (0x0001bcaa) list_single_graphic_2heading_pane_fp_g4

0xed2e,	// (0x0002650a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xed2e,	// (0x0002650a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba6,	// (0x00027382) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba6,	// (0x00027382) list_single_graphic_2heading_pane_fp_g

0x46c6,	// (0x0001bea2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x46c6,	// (0x0001bea2) list_single_graphic_2heading_pane_fp_t1

0x4531,	// (0x0001bd0d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4531,	// (0x0001bd0d) list_single_graphic_2heading_pane_fp_t2

0x46dc,	// (0x0001beb8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x46dc,	// (0x0001beb8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc81,	// (0x0002745d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc81,	// (0x0002745d) list_single_graphic_2heading_pane_fp_t

0xe8d3,	// (0x000260af) fep_hwr_write_pane_g5_ParamLimits

0xe8d3,	// (0x000260af) fep_hwr_write_pane_g5

0xe8df,	// (0x000260bb) fep_hwr_write_pane_g6_ParamLimits

0xe8df,	// (0x000260bb) fep_hwr_write_pane_g6

0xef81,	// (0x0002675d) eswt_shell_pane_ParamLimits

0xcba1,	// (0x0002437d) bg_popup_window_pane_cp18_ParamLimits

0xdbb7,	// (0x00025393) heading_pane_cp70

0xf07d,	// (0x00026859) popup_eswt_tasktip_window_t1_ParamLimits

0x8c7d,	// (0x00020459) aid_touch_tab_arrow_left

0x8c93,	// (0x0002046f) aid_touch_tab_arrow_right

0x7d97,	// (0x0001f573) title_pane_g3_ParamLimits

0x7d97,	// (0x0001f573) title_pane_g3

0xbac1,	// (0x0002329d) set_value_pane_g1

0x8bbc,	// (0x00020398) popup_toolbar_trans_pane_ParamLimits

0xf0d3,	// (0x000268af) aid_size_cell_tb_trans_pane_ParamLimits

0xbb02,	// (0x000232de) bg_tb_trans_pane_ParamLimits

0xf0e5,	// (0x000268c1) grid_tb_trans_pane_ParamLimits

0xb634,	// (0x00022e10) cont_note_pane_ParamLimits

0xb634,	// (0x00022e10) cont_note_pane

0xb87d,	// (0x00023059) cont_snote2_single_text_pane_ParamLimits

0xb87d,	// (0x00023059) cont_snote2_single_text_pane

0xb87d,	// (0x00023059) cont_snote2_single_graphic_pane_ParamLimits

0xb87d,	// (0x00023059) cont_snote2_single_graphic_pane

0xd038,	// (0x00024814) cont_note_wait_pane_ParamLimits

0xd038,	// (0x00024814) cont_note_wait_pane

0xd038,	// (0x00024814) cont_note_image_pane_ParamLimits

0xd038,	// (0x00024814) cont_note_image_pane

0xf12b,	// (0x00026907) popup_note2_window_g1_ParamLimits

0xf12b,	// (0x00026907) popup_note2_window_g1

0xf15c,	// (0x00026938) popup_note2_window_t1_ParamLimits

0xf15c,	// (0x00026938) popup_note2_window_t1

0xf1a1,	// (0x0002697d) popup_note2_window_t2_ParamLimits

0xf1a1,	// (0x0002697d) popup_note2_window_t2

0xf1e6,	// (0x000269c2) popup_note2_window_t3_ParamLimits

0xf1e6,	// (0x000269c2) popup_note2_window_t3

0xf22b,	// (0x00026a07) popup_note2_window_t4_ParamLimits

0xf22b,	// (0x00026a07) popup_note2_window_t4

0xb6b8,	// (0x00022e94) popup_note2_window_t5_ParamLimits

0xb6b8,	// (0x00022e94) popup_note2_window_t5

0x0004,

0xfc8d,	// (0x00027469) popup_note2_window_t_ParamLimits

0xfc8d,	// (0x00027469) popup_note2_window_t

0xf25a,	// (0x00026a36) popup_note2_image_window_g1_ParamLimits

0xf25a,	// (0x00026a36) popup_note2_image_window_g1

0xf266,	// (0x00026a42) popup_note2_image_window_g2_ParamLimits

0xf266,	// (0x00026a42) popup_note2_image_window_g2

0x0001,

0xfc98,	// (0x00027474) popup_note2_image_window_g_ParamLimits

0xfc98,	// (0x00027474) popup_note2_image_window_g

0xf278,	// (0x00026a54) popup_note2_image_window_t1_ParamLimits

0xf278,	// (0x00026a54) popup_note2_image_window_t1

0xf290,	// (0x00026a6c) popup_note2_image_window_t2_ParamLimits

0xf290,	// (0x00026a6c) popup_note2_image_window_t2

0xf2a8,	// (0x00026a84) popup_note2_image_window_t3_ParamLimits

0xf2a8,	// (0x00026a84) popup_note2_image_window_t3

0x0002,

0xfc9d,	// (0x00027479) popup_note2_image_window_t_ParamLimits

0xfc9d,	// (0x00027479) popup_note2_image_window_t

0xd046,	// (0x00024822) popup_note2_wait_window_g1_ParamLimits

0xd046,	// (0x00024822) popup_note2_wait_window_g1

0xf2c4,	// (0x00026aa0) popup_note2_wait_window_g2_ParamLimits

0xf2c4,	// (0x00026aa0) popup_note2_wait_window_g2

0xd05e,	// (0x0002483a) popup_note2_wait_window_g3_ParamLimits

0xd05e,	// (0x0002483a) popup_note2_wait_window_g3

0x0002,

0xfca4,	// (0x00027480) popup_note2_wait_window_g_ParamLimits

0xfca4,	// (0x00027480) popup_note2_wait_window_g

0xf2d0,	// (0x00026aac) popup_note2_wait_window_t1_ParamLimits

0xf2d0,	// (0x00026aac) popup_note2_wait_window_t1

0xf2ee,	// (0x00026aca) popup_note2_wait_window_t2_ParamLimits

0xf2ee,	// (0x00026aca) popup_note2_wait_window_t2

0xf30c,	// (0x00026ae8) popup_note2_wait_window_t3_ParamLimits

0xf30c,	// (0x00026ae8) popup_note2_wait_window_t3

0xf31e,	// (0x00026afa) popup_note2_wait_window_t4_ParamLimits

0xf31e,	// (0x00026afa) popup_note2_wait_window_t4

0x0003,

0xfcab,	// (0x00027487) popup_note2_wait_window_t_ParamLimits

0xfcab,	// (0x00027487) popup_note2_wait_window_t

0xf330,	// (0x00026b0c) wait_bar2_pane_ParamLimits

0xf330,	// (0x00026b0c) wait_bar2_pane

0xf348,	// (0x00026b24) popup_snote2_single_text_window_g1_ParamLimits

0xf348,	// (0x00026b24) popup_snote2_single_text_window_g1

0xf370,	// (0x00026b4c) popup_snote2_single_text_window_t1_ParamLimits

0xf370,	// (0x00026b4c) popup_snote2_single_text_window_t1

0xf3bc,	// (0x00026b98) popup_snote2_single_text_window_t2_ParamLimits

0xf3bc,	// (0x00026b98) popup_snote2_single_text_window_t2

0xf408,	// (0x00026be4) popup_snote2_single_text_window_t3_ParamLimits

0xf408,	// (0x00026be4) popup_snote2_single_text_window_t3

0xf449,	// (0x00026c25) popup_snote2_single_text_window_t4_ParamLimits

0xf449,	// (0x00026c25) popup_snote2_single_text_window_t4

0xf47f,	// (0x00026c5b) popup_snote2_single_text_window_t5_ParamLimits

0xf47f,	// (0x00026c5b) popup_snote2_single_text_window_t5

0x0004,

0xfcb4,	// (0x00027490) popup_snote2_single_text_window_t_ParamLimits

0xfcb4,	// (0x00027490) popup_snote2_single_text_window_t

0xf4aa,	// (0x00026c86) popup_snote2_single_graphic_window_g1_ParamLimits

0xf4aa,	// (0x00026c86) popup_snote2_single_graphic_window_g1

0xf4d2,	// (0x00026cae) popup_snote2_single_graphic_window_g2_ParamLimits

0xf4d2,	// (0x00026cae) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbf,	// (0x0002749b) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbf,	// (0x0002749b) popup_snote2_single_graphic_window_g

0xf4fa,	// (0x00026cd6) popup_snote2_single_graphic_window_t1_ParamLimits

0xf4fa,	// (0x00026cd6) popup_snote2_single_graphic_window_t1

0xf546,	// (0x00026d22) popup_snote2_single_graphic_window_t2_ParamLimits

0xf546,	// (0x00026d22) popup_snote2_single_graphic_window_t2

0xf408,	// (0x00026be4) popup_snote2_single_graphic_window_t3_ParamLimits

0xf408,	// (0x00026be4) popup_snote2_single_graphic_window_t3

0xf449,	// (0x00026c25) popup_snote2_single_graphic_window_t4_ParamLimits

0xf449,	// (0x00026c25) popup_snote2_single_graphic_window_t4

0xf47f,	// (0x00026c5b) popup_snote2_single_graphic_window_t5_ParamLimits

0xf47f,	// (0x00026c5b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc4,	// (0x000274a0) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc4,	// (0x000274a0) popup_snote2_single_graphic_window_t

0xe52d,	// (0x00025d09) clock_nsta_pane_cp2_t1

0xe52d,	// (0x00025d09) clock_nsta_pane_cp2_t2

0x0001,

0xfae4,	// (0x000272c0) clock_nsta_pane_cp2_t

0x3df6,	// (0x0001b5d2) form_field_data_wide_pane_g1_ParamLimits

0xbb1c,	// (0x000232f8) form_field_data_wide_pane_g2_ParamLimits

0xbb1c,	// (0x000232f8) form_field_data_wide_pane_g2

0xbb28,	// (0x00023304) form_field_data_wide_pane_g3_ParamLimits

0xbb28,	// (0x00023304) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x00026e9b) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x00026e9b) form_field_data_wide_pane_g

0x9762,	// (0x00020f3e) grid_touch_3_pane_ParamLimits

0x9762,	// (0x00020f3e) grid_touch_3_pane

0x9c94,	// (0x00021470) cell_touch_3_pane_ParamLimits

0x9c94,	// (0x00021470) cell_touch_3_pane

0xe833,	// (0x0002600f) cell_touch_3_pane_g1

0xe833,	// (0x0002600f) cell_touch_3_pane_g2

0x0001,

0xfb69,	// (0x00027345) cell_touch_3_pane_g

0xb6ea,	// (0x00022ec6) cont_query_data_pane

0xb6f2,	// (0x00022ece) cont_query_data_pane_cp1

0x0002,	// (0x000177de) button_value_adjust_pane_cp7

0x000a,	// (0x000177e6) query_popup_pane_cp3

0xc096,	// (0x00023872) bg_popup_sub_pane_cp22_ParamLimits

0x4f01,	// (0x0001c6dd) navi_navi_volume_pane_cp2

0x4f1c,	// (0x0001c6f8) popup_side_volume_key_window_g2

0x4f2b,	// (0x0001c707) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x00026f2d) popup_side_volume_key_window_g

0x4f48,	// (0x0001c724) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x00026f34) popup_side_volume_key_window_t

0xc2c6,	// (0x00023aa2) popup_side_volume_key_window_ParamLimits

0x74d2,	// (0x0001ecae) list_double_graphic_pane_g4_ParamLimits

0x74d2,	// (0x0001ecae) list_double_graphic_pane_g4

0x95d5,	// (0x00020db1) list_single_2heading_msg_pane_ParamLimits

0x95d5,	// (0x00020db1) list_single_2heading_msg_pane

0x7a26,	// (0x0001f202) list_single_2heading_msg_pane_g1_ParamLimits

0x7a26,	// (0x0001f202) list_single_2heading_msg_pane_g1

0x7a32,	// (0x0001f20e) list_single_2heading_msg_pane_g2_ParamLimits

0x7a32,	// (0x0001f20e) list_single_2heading_msg_pane_g2

0x7a45,	// (0x0001f221) list_single_2heading_msg_pane_g3_ParamLimits

0x7a45,	// (0x0001f221) list_single_2heading_msg_pane_g3

0x7a51,	// (0x0001f22d) list_single_2heading_msg_pane_g4_ParamLimits

0x7a51,	// (0x0001f22d) list_single_2heading_msg_pane_g4

0x0003,

0xfccf,	// (0x000274ab) list_single_2heading_msg_pane_g_ParamLimits

0xfccf,	// (0x000274ab) list_single_2heading_msg_pane_g

0x7a69,	// (0x0001f245) list_single_2heading_msg_pane_t1_ParamLimits

0x7a69,	// (0x0001f245) list_single_2heading_msg_pane_t1

0x7a91,	// (0x0001f26d) list_single_2heading_msg_pane_t2_ParamLimits

0x7a91,	// (0x0001f26d) list_single_2heading_msg_pane_t2

0x7afc,	// (0x0001f2d8) list_single_2heading_msg_pane_t3_ParamLimits

0x7afc,	// (0x0001f2d8) list_single_2heading_msg_pane_t3

0x47c1,	// (0x0001bf9d) list_single_2heading_msg_pane_t4_ParamLimits

0x47c1,	// (0x0001bf9d) list_single_2heading_msg_pane_t4

0x0003,

0xfcd8,	// (0x000274b4) list_single_2heading_msg_pane_t_ParamLimits

0xfcd8,	// (0x000274b4) list_single_2heading_msg_pane_t

0xb4af,	// (0x00022c8b) title_pane_g4_ParamLimits

0xb4af,	// (0x00022c8b) title_pane_g4

0x4d0f,	// (0x0001c4eb) title_pane_stacon_g3_ParamLimits

0x4d0f,	// (0x0001c4eb) title_pane_stacon_g3

0xf11f,	// (0x000268fb) list_single_2graphic_im_pane_g4_ParamLimits

0xf11f,	// (0x000268fb) list_single_2graphic_im_pane_g4

0xd9db,	// (0x000251b7) popup_side_volume_key_window_cp

0xdea8,	// (0x00025684) main_idle_act2_pane_t1

0x52c4,	// (0x0001caa0) toolbar_button_pane_g10

0x8104,	// (0x0001f8e0) popup_toolbar_window_cp1

0xe51e,	// (0x00025cfa) clock_nsta_pane_cp_t1

0xe51e,	// (0x00025cfa) clock_nsta_pane_cp_t2

0x0001,

0xfadf,	// (0x000272bb) clock_nsta_pane_cp_t

0x4f01,	// (0x0001c6dd) navi_navi_volume_pane_cp2_ParamLimits

0x4f10,	// (0x0001c6ec) popup_side_volume_key_window_g1_ParamLimits

0x4f1c,	// (0x0001c6f8) popup_side_volume_key_window_g2_ParamLimits

0x4f2b,	// (0x0001c707) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x00026f2d) popup_side_volume_key_window_g_ParamLimits

0x5706,	// (0x0001cee2) fep_hwr_aid_pane

0x2705,	// (0x00019ee1) bg_fep_hwr_top_pane_g4_ParamLimits

0xe8a3,	// (0x0002607f) fep_hwr_top_pane_g1_ParamLimits

0xe8b5,	// (0x00026091) fep_hwr_top_pane_g2_ParamLimits

0x57bf,	// (0x0001cf9b) fep_hwr_top_pane_g3_ParamLimits

0xfb34,	// (0x00027310) fep_hwr_top_pane_g_ParamLimits

0x57d4,	// (0x0001cfb0) fep_hwr_top_text_pane_ParamLimits

0xd774,	// (0x00024f50) aid_touch_tab_arrow_arrow_2

0xd77d,	// (0x00024f59) aid_touch_tab_arrow_left_2

0x571a,	// (0x0001cef6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5751,	// (0x0001cf2d) fep_hwr_prediction_pane

0xe9a2,	// (0x0002617e) fep_vkb_prediction_pane

0x9a99,	// (0x00021275) fep_vkb_side_pane_g3_ParamLimits

0x9a99,	// (0x00021275) fep_vkb_side_pane_g3

0xe9da,	// (0x000261b6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xed82,	// (0x0002655e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xed8f,	// (0x0002656b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbde,	// (0x000273ba) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x011e,	// (0x000178fa) fep_hwr_prediction_pane_g1

0x5a61,	// (0x0001d23d) fep_hwr_prediction_pane_g2

0x5a69,	// (0x0001d245) fep_hwr_prediction_pane_g3

0x5a71,	// (0x0001d24d) fep_hwr_prediction_pane_g4

0x0003,

0xfce1,	// (0x000274bd) fep_hwr_prediction_pane_g

0x011e,	// (0x000178fa) fep_vkb_prediction_pane_g1

0x0128,	// (0x00017904) fep_vkb_prediction_pane_g2

0x0130,	// (0x0001790c) fep_vkb_prediction_pane_g3

0x0138,	// (0x00017914) fep_vkb_prediction_pane_g4

0x0003,

0xfcea,	// (0x000274c6) fep_vkb_prediction_pane_g

0x5594,	// (0x0001cd70) slider_set_pane_g3

0x55a8,	// (0x0001cd84) slider_set_pane_g4

0x55c0,	// (0x0001cd9c) slider_set_pane_g5

0x5594,	// (0x0001cd70) slider_set_pane_g6

0x55d6,	// (0x0001cdb2) slider_set_pane_g7

0xdc42,	// (0x0002541e) slider_form_pane_g3

0xdc4b,	// (0x00025427) slider_form_pane_g4

0xdc53,	// (0x0002542f) slider_form_pane_g5

0xdc42,	// (0x0002541e) slider_form_pane_g6

0x9598,	// (0x00020d74) slider_form_pane_g7

0xe0fa,	// (0x000258d6) slider_set_pane_vc_g3

0xe103,	// (0x000258df) slider_set_pane_vc_g4

0xe10c,	// (0x000258e8) slider_set_pane_vc_g5

0xe0fa,	// (0x000258d6) slider_set_pane_vc_g6

0xe115,	// (0x000258f1) slider_set_pane_vc_g7

0xe0fa,	// (0x000258d6) slider_form_pane_vc_g1

0xe103,	// (0x000258df) slider_form_pane_vc_g2

0xe10c,	// (0x000258e8) slider_form_pane_vc_g3

0xe0fa,	// (0x000258d6) slider_form_pane_vc_g4

0xe2c8,	// (0x00025aa4) slider_form_pane_vc_g5

0x0004,

0xfac5,	// (0x000272a1) slider_form_pane_vc_g

0xb491,	// (0x00022c6d) main_idle_act3_pane

0x0140,	// (0x0001791c) ai3_links_pane

0x9cdd,	// (0x000214b9) popup_ai3_data_window_ParamLimits

0x9cdd,	// (0x000214b9) popup_ai3_data_window

0xb491,	// (0x00022c6d) grid_ai3_links_pane

0x9cf7,	// (0x000214d3) cell_ai3_links_pane_ParamLimits

0x9cf7,	// (0x000214d3) cell_ai3_links_pane

0x017b,	// (0x00017957) bg_popup_sub_pane_cp11

0x0188,	// (0x00017964) cell_ai3_links_pane_g1

0xb491,	// (0x00022c6d) bg_popup_sub_pane_cp12

0x01ad,	// (0x00017989) heading_ai3_data_pane

0x01b5,	// (0x00017991) list_ai3_gene_pane

0x01c1,	// (0x0001799d) popup_ai3_data_window_g1

0x01c9,	// (0x000179a5) heading_ai3_data_pane_g1

0x01d1,	// (0x000179ad) heading_ai3_data_pane_t1

0x01df,	// (0x000179bb) list_double_ai3_gene_pane_ParamLimits

0x01df,	// (0x000179bb) list_double_ai3_gene_pane

0x01ec,	// (0x000179c8) list_single_ai3_gene_pane_ParamLimits

0x01ec,	// (0x000179c8) list_single_ai3_gene_pane

0xe7ea,	// (0x00025fc6) list_highlight_pane_cp7_ParamLimits

0xe7ea,	// (0x00025fc6) list_highlight_pane_cp7

0x01f9,	// (0x000179d5) list_single_a13_gene_pane_t1_ParamLimits

0x01f9,	// (0x000179d5) list_single_a13_gene_pane_t1

0x0210,	// (0x000179ec) list_single_ai3_gene_pane_g1

0x0219,	// (0x000179f5) list_single_ai3_gene_pane_g2

0x0001,

0xfcf3,	// (0x000274cf) list_single_ai3_gene_pane_g

0x0221,	// (0x000179fd) list_double_ai3_gene_pane_g1_ParamLimits

0x0221,	// (0x000179fd) list_double_ai3_gene_pane_g1

0x022d,	// (0x00017a09) list_double_ai3_gene_pane_t1_ParamLimits

0x022d,	// (0x00017a09) list_double_ai3_gene_pane_t1

0x0249,	// (0x00017a25) list_double_ai3_gene_pane_t2_ParamLimits

0x0249,	// (0x00017a25) list_double_ai3_gene_pane_t2

0x025f,	// (0x00017a3b) list_double_ai3_gene_pane_t3_ParamLimits

0x025f,	// (0x00017a3b) list_double_ai3_gene_pane_t3

0x0002,

0xfcf8,	// (0x000274d4) list_double_ai3_gene_pane_t_ParamLimits

0xfcf8,	// (0x000274d4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x46f2,	// (0x0001bece) aid_size_min_col_2

0x9cc7,	// (0x000214a3) aid_size_min_msg_ParamLimits

0x9cc7,	// (0x000214a3) aid_size_min_msg

0x9aad,	// (0x00021289) fep_vkb_top_text_pane_g2_ParamLimits

0x9aad,	// (0x00021289) fep_vkb_top_text_pane_g2

0x0001,

0xfb64,	// (0x00027340) fep_vkb_top_text_pane_g_ParamLimits

0xfb64,	// (0x00027340) fep_vkb_top_text_pane_g

0xb491,	// (0x00022c6d) main_hc_apps_shell_pane

0x027c,	// (0x00017a58) grid_hc_apps_pane_ParamLimits

0x027c,	// (0x00017a58) grid_hc_apps_pane

0x028b,	// (0x00017a67) list_hc_apps_pane

0x0293,	// (0x00017a6f) scroll_pane_cp37_ParamLimits

0x0293,	// (0x00017a6f) scroll_pane_cp37

0x9d11,	// (0x000214ed) cell_hc_apps_pane_ParamLimits

0x9d11,	// (0x000214ed) cell_hc_apps_pane

0x9dcf,	// (0x000215ab) cell_hc_apps_pane_g1_ParamLimits

0x9dcf,	// (0x000215ab) cell_hc_apps_pane_g1

0x037e,	// (0x00017b5a) cell_hc_apps_pane_g2_ParamLimits

0x037e,	// (0x00017b5a) cell_hc_apps_pane_g2

0x039a,	// (0x00017b76) cell_hc_apps_pane_g3_ParamLimits

0x039a,	// (0x00017b76) cell_hc_apps_pane_g3

0x0002,

0xfcff,	// (0x000274db) cell_hc_apps_pane_g_ParamLimits

0xfcff,	// (0x000274db) cell_hc_apps_pane_g

0x9dfc,	// (0x000215d8) cell_hc_apps_pane_t1_ParamLimits

0x9dfc,	// (0x000215d8) cell_hc_apps_pane_t1

0xb634,	// (0x00022e10) grid_highlight_pane_cp10_ParamLimits

0xb634,	// (0x00022e10) grid_highlight_pane_cp10

0x9e3a,	// (0x00021616) list_single_hc_apps_pane_ParamLimits

0x9e3a,	// (0x00021616) list_single_hc_apps_pane

0x9e67,	// (0x00021643) list_single_hc_apps_pane_g1

0x7b6a,	// (0x0001f346) list_single_hc_apps_pane_g2

0x0001,

0xfd06,	// (0x000274e2) list_single_hc_apps_pane_g

0x7b83,	// (0x0001f35f) list_single_hc_apps_pane_g2_copy1

0x7b9f,	// (0x0001f37b) list_single_hc_apps_pane_t1

0xb501,	// (0x00022cdd) bg_set_opt_pane_cp_ParamLimits

0x4c36,	// (0x0001c412) setting_slider_pane_t1_ParamLimits

0x4c4f,	// (0x0001c42b) setting_slider_pane_t2_ParamLimits

0x4c69,	// (0x0001c445) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00026d7e) setting_slider_pane_t_ParamLimits

0x4c81,	// (0x0001c45d) slider_set_pane_ParamLimits

0x51a0,	// (0x0001c97c) control_pane_g5_ParamLimits

0x51a0,	// (0x0001c97c) control_pane_g5

0xdbfe,	// (0x000253da) slider_set_pane_g1_ParamLimits

0x5588,	// (0x0001cd64) slider_set_pane_g2_ParamLimits

0x5594,	// (0x0001cd70) slider_set_pane_g3_ParamLimits

0x55a8,	// (0x0001cd84) slider_set_pane_g4_ParamLimits

0x55c0,	// (0x0001cd9c) slider_set_pane_g5_ParamLimits

0x5594,	// (0x0001cd70) slider_set_pane_g6_ParamLimits

0x55d6,	// (0x0001cdb2) slider_set_pane_g7_ParamLimits

0xf998,	// (0x00027174) slider_set_pane_g_ParamLimits

0xc3a7,	// (0x00023b83) navi_icon_text_pane_ParamLimits

0x8c49,	// (0x00020425) aid_fill_nsta_2_ParamLimits

0x8c7d,	// (0x00020459) aid_touch_tab_arrow_left_ParamLimits

0x8c93,	// (0x0002046f) aid_touch_tab_arrow_right_ParamLimits

0x8d2e,	// (0x0002050a) clock_nsta_pane_ParamLimits

0x9374,	// (0x00020b50) navi_icon_pane_g1_ParamLimits

0x9380,	// (0x00020b5c) navi_text_pane_t1_ParamLimits

0x982a,	// (0x00021006) navi_icon_text_pane_g1_ParamLimits

0x9836,	// (0x00021012) navi_icon_text_pane_t1_ParamLimits

0x9e67,	// (0x00021643) list_single_hc_apps_pane_g1_ParamLimits

0x7b6a,	// (0x0001f346) list_single_hc_apps_pane_g2_ParamLimits

0xfd06,	// (0x000274e2) list_single_hc_apps_pane_g_ParamLimits

0x7b83,	// (0x0001f35f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7b9f,	// (0x0001f37b) list_single_hc_apps_pane_t1_ParamLimits

0x7d03,	// (0x0001f4df) popup_toolbar2_fixed_window_ParamLimits

0x7d03,	// (0x0001f4df) popup_toolbar2_fixed_window

0x8bb2,	// (0x0002038e) popup_toolbar2_float_window

0xb491,	// (0x00022c6d) bg_popup_sub_pane_cp27

0x04d4,	// (0x00017cb0) grid_toolbar2_float_pane

0xb491,	// (0x00022c6d) bg_popup_sub_pane_cp26

0x04d4,	// (0x00017cb0) grid_toolbar2_fixed_pane

0x9e80,	// (0x0002165c) cell_toolbar2_fixed_pane_ParamLimits

0x9e80,	// (0x0002165c) cell_toolbar2_fixed_pane

0x9e9b,	// (0x00021677) cell_toolbar2_fixed_pane_g1

0x04f5,	// (0x00017cd1) toolbar2_fixed_button_pane

0xcab1,	// (0x0002428d) toolbar2_fixed_button_pane_g1

0xcab9,	// (0x00024295) toolbar2_fixed_button_pane_g2

0xcac1,	// (0x0002429d) toolbar2_fixed_button_pane_g3

0xcac9,	// (0x000242a5) toolbar2_fixed_button_pane_g4

0xcad1,	// (0x000242ad) toolbar2_fixed_button_pane_g5

0xcad9,	// (0x000242b5) toolbar2_fixed_button_pane_g6

0xcae1,	// (0x000242bd) toolbar2_fixed_button_pane_g7

0xcae9,	// (0x000242c5) toolbar2_fixed_button_pane_g8

0xcaf1,	// (0x000242cd) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x00027076) toolbar2_fixed_button_pane_g

0x04fd,	// (0x00017cd9) cell_toolbar2_float_pane_ParamLimits

0x04fd,	// (0x00017cd9) cell_toolbar2_float_pane

0x050e,	// (0x00017cea) cell_toolbar2_float_pane_g1

0x04f5,	// (0x00017cd1) toolbar2_fixed_button_pane_cp

0x9987,	// (0x00021163) fep_vkb_accented_list_pane_ParamLimits

0x9987,	// (0x00021163) fep_vkb_accented_list_pane

0x5922,	// (0x0001d0fe) bg_popup_fep_shadow_pane_g9

0xc527,	// (0x00023d03) bg_popup_fep_shadow_pane_cp3

0xbc08,	// (0x000233e4) list_accented_list_pane

0x0517,	// (0x00017cf3) list_single_accented_list_pane_ParamLimits

0x0517,	// (0x00017cf3) list_single_accented_list_pane

0xc527,	// (0x00023d03) list_highlight_pane_cp10

0x0528,	// (0x00017d04) list_single_accented_list_pane_t1

0x8adc,	// (0x000202b8) popup_slider_window_ParamLimits

0x8adc,	// (0x000202b8) popup_slider_window

0x0012,	// (0x000177ee) aid_indentation_list_msg

0x9f94,	// (0x00021770) bg_popup_window_pane_cp19

0x064c,	// (0x00017e28) popup_slider_window_g1

0x0668,	// (0x00017e44) popup_slider_window_g2

0x0684,	// (0x00017e60) popup_slider_window_g3

0x0005,

0xfd0b,	// (0x000274e7) popup_slider_window_g

0x06e0,	// (0x00017ebc) popup_slider_window_t1

0x0754,	// (0x00017f30) small_volume_slider_vertical_pane

0xe833,	// (0x0002600f) small_volume_slider_vertical_pane_g1

0xe833,	// (0x0002600f) small_volume_slider_vertical_pane_g2

0x0770,	// (0x00017f4c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1d,	// (0x000274f9) small_volume_slider_vertical_pane_g

0x7c71,	// (0x0001f44d) area_side_right_pane_ParamLimits

0x7c71,	// (0x0001f44d) area_side_right_pane

0xa04c,	// (0x00021828) aid_size_side_button_ParamLimits

0xa04c,	// (0x00021828) aid_size_side_button

0xa065,	// (0x00021841) grid_sctrl_middle_pane_ParamLimits

0xa065,	// (0x00021841) grid_sctrl_middle_pane

0x5aad,	// (0x0001d289) sctrl_sk_bottom_pane

0x5abe,	// (0x0001d29a) sctrl_sk_top_pane

0x5ad0,	// (0x0001d2ac) aid_touch_sctrl_top

0xb634,	// (0x00022e10) bg_sctrl_sk_pane_ParamLimits

0xb634,	// (0x00022e10) bg_sctrl_sk_pane

0x5add,	// (0x0001d2b9) sctrl_sk_top_pane_g1

0x5aea,	// (0x0001d2c6) sctrl_sk_top_pane_t1

0x5ad0,	// (0x0001d2ac) aid_touch_sctrl_bottom

0xb634,	// (0x00022e10) bg_sctrl_sk_pane_cp_ParamLimits

0xb634,	// (0x00022e10) bg_sctrl_sk_pane_cp

0x5b05,	// (0x0001d2e1) sctrl_sk_bottom_pane_g1

0x5aea,	// (0x0001d2c6) sctrl_sk_bottom_pane_t1

0xa07f,	// (0x0002185b) cell_sctrl_middle_pane_ParamLimits

0xa07f,	// (0x0002185b) cell_sctrl_middle_pane

0xa090,	// (0x0002186c) aid_touch_sctrl_middle_ParamLimits

0xa090,	// (0x0002186c) aid_touch_sctrl_middle

0xa09d,	// (0x00021879) bg_sctrl_middle_pane_ParamLimits

0xa09d,	// (0x00021879) bg_sctrl_middle_pane

0x07f8,	// (0x00017fd4) cell_sctrl_middle_pane_g1_ParamLimits

0x07f8,	// (0x00017fd4) cell_sctrl_middle_pane_g1

0xa0ab,	// (0x00021887) cell_sctrl_middle_pane_g2_ParamLimits

0xa0ab,	// (0x00021887) cell_sctrl_middle_pane_g2

0x0001,

0xfd29,	// (0x00027505) cell_sctrl_middle_pane_g_ParamLimits

0xfd29,	// (0x00027505) cell_sctrl_middle_pane_g

0xcab1,	// (0x0002428d) bg_sctrl_middle_pane_g1

0xcab9,	// (0x00024295) bg_sctrl_middle_pane_g2

0xcac1,	// (0x0002429d) bg_sctrl_middle_pane_g3

0xcac9,	// (0x000242a5) bg_sctrl_middle_pane_g4

0xcad1,	// (0x000242ad) bg_sctrl_middle_pane_g5

0xcad9,	// (0x000242b5) bg_sctrl_middle_pane_g6

0xcae1,	// (0x000242bd) bg_sctrl_middle_pane_g7

0xcae9,	// (0x000242c5) bg_sctrl_middle_pane_g8

0x0007,

0xfd2e,	// (0x0002750a) bg_sctrl_middle_pane_g

0xcaf1,	// (0x000242cd) bg_sctrl_middle_pane_g8_copy1

0xcab1,	// (0x0002428d) bg_sctrl_sk_pane_g1

0xcab9,	// (0x00024295) bg_sctrl_sk_pane_g2

0xcac1,	// (0x0002429d) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x00027076) bg_sctrl_sk_pane_g

0xba3b,	// (0x00023217) aid_size_touch_scroll_bar

0xcac9,	// (0x000242a5) bg_sctrl_sk_pane_g4

0xcad1,	// (0x000242ad) bg_sctrl_sk_pane_g5

0xcad9,	// (0x000242b5) bg_sctrl_sk_pane_g6

0xcae1,	// (0x000242bd) bg_sctrl_sk_pane_g7

0xcae9,	// (0x000242c5) bg_sctrl_sk_pane_g8

0xcaf1,	// (0x000242cd) bg_sctrl_sk_pane_g9

0xc7ab,	// (0x00023f87) popup_fep_china_hwr2_fs_candidate_window

0x8620,	// (0x0001fdfc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8620,	// (0x0001fdfc) popup_fep_china_hwr2_fs_control_window

0xe9da,	// (0x000261b6) sctrl_sk_top_pane_g2

0x0001,

0xfd24,	// (0x00027500) sctrl_sk_top_pane_g

0xa0b7,	// (0x00021893) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa0b7,	// (0x00021893) aid_fep_china_hwr2_fs_cell

0xa0cb,	// (0x000218a7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa0cb,	// (0x000218a7) bg_popup_fep_shadow_pane_cp4

0xa0e2,	// (0x000218be) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa0e2,	// (0x000218be) bg_popup_fep_shadow_pane_cp5

0xa0f4,	// (0x000218d0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa0f4,	// (0x000218d0) popup_fep_china_hwr2_fs_control_bar_grid

0xa108,	// (0x000218e4) popup_fep_china_hwr2_fs_control_funtion_grid

0x07cc,	// (0x00017fa8) aid_fep_china_hwr2_fs_candi_cell

0xb491,	// (0x00022c6d) bg_popup_fep_shadow_pane_cp6

0x07d6,	// (0x00017fb2) popup_fep_china_hwr2_fs_candidate_grid

0xa110,	// (0x000218ec) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa110,	// (0x000218ec) cell_fep_china_hwr2_fs_funtion_grid

0xe833,	// (0x0002600f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x07f8,	// (0x00017fd4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x07f8,	// (0x00017fd4) cell_fep_china_hwr2_fs_funtion_grid_g1

0x0806,	// (0x00017fe2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x0806,	// (0x00017fe2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3f,	// (0x0002751b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3f,	// (0x0002751b) cell_fep_china_hwr2_fs_funtion_grid_g

0xa128,	// (0x00021904) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa128,	// (0x00021904) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa13d,	// (0x00021919) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa13d,	// (0x00021919) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd44,	// (0x00027520) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd44,	// (0x00027520) cell_fep_china_hwr2_fs_funtion_grid_t

0x084d,	// (0x00018029) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0855,	// (0x00018031) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x085d,	// (0x00018039) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd49,	// (0x00027525) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0865,	// (0x00018041) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0865,	// (0x00018041) cell_fep_china_hwr2_fs_candidate_grid

0x087e,	// (0x0001805a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x0886,	// (0x00018062) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe833,	// (0x0002600f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe833,	// (0x0002600f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb69,	// (0x00027345) cell_fep_china_hwr2_fs_candidate_grid_g

0x088e,	// (0x0001806a) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc8fe,	// (0x000240da) clock_nsta_pane_cp_24_ParamLimits

0xc8fe,	// (0x000240da) clock_nsta_pane_cp_24

0xc966,	// (0x00024142) indicator_nsta_pane_cp_24_ParamLimits

0xc966,	// (0x00024142) indicator_nsta_pane_cp_24

0xd67e,	// (0x00024e5a) heading_pane_g1

0x0001,

0xf8ff,	// (0x000270db) heading_pane_g

0xdd35,	// (0x00025511) grid_sct_catagory_button_pane

0xd851,	// (0x0002502d) scroll_pane_cp5_ParamLimits

0xe583,	// (0x00025d5f) button_value_adjust_pane_cp5_ParamLimits

0xe583,	// (0x00025d5f) button_value_adjust_pane_cp5

0xe641,	// (0x00025e1d) form2_midp_time_pane_ParamLimits

0x089c,	// (0x00018078) cell_sct_catagory_button_pane_ParamLimits

0x089c,	// (0x00018078) cell_sct_catagory_button_pane

0xe7ea,	// (0x00025fc6) bg_button_pane_cp01_ParamLimits

0xe7ea,	// (0x00025fc6) bg_button_pane_cp01

0xe833,	// (0x0002600f) cell_sct_catagory_button_pane_g1

0x8b55,	// (0x00020331) popup_tb_extension_window

0xa159,	// (0x00021935) aid_size_cell_ext_ParamLimits

0xa159,	// (0x00021935) aid_size_cell_ext

0xb87d,	// (0x00023059) bg_tb_trans_pane_cp1_ParamLimits

0xb87d,	// (0x00023059) bg_tb_trans_pane_cp1

0xa17f,	// (0x0002195b) grid_tb_ext_pane_ParamLimits

0xa17f,	// (0x0002195b) grid_tb_ext_pane

0xa1ba,	// (0x00021996) cell_tb_ext_pane_ParamLimits

0xa1ba,	// (0x00021996) cell_tb_ext_pane

0xa1e2,	// (0x000219be) cell_tb_ext_pane_g1_ParamLimits

0xa1e2,	// (0x000219be) cell_tb_ext_pane_g1

0x0930,	// (0x0001810c) cell_tb_ext_pane_t1

0xb634,	// (0x00022e10) list_highlight_pane_cp11_ParamLimits

0xb634,	// (0x00022e10) list_highlight_pane_cp11

0x4b69,	// (0x0001c345) popup_uni_indicator_window_ParamLimits

0x4b69,	// (0x0001c345) popup_uni_indicator_window

0xbb02,	// (0x000232de) bg_popup_sub_pane_cp14

0x094b,	// (0x00018127) list_uniindi_pane

0x0957,	// (0x00018133) uniindi_top_pane

0xb634,	// (0x00022e10) bg_uniindi_top_pane

0x0976,	// (0x00018152) uniindi_top_pane_g1

0x098c,	// (0x00018168) uniindi_top_pane_g2

0x0003,

0xfd50,	// (0x0002752c) uniindi_top_pane_g

0x09b6,	// (0x00018192) uniindi_top_pane_t1

0x09e0,	// (0x000181bc) list_single_uniindi_pane_ParamLimits

0x09e0,	// (0x000181bc) list_single_uniindi_pane

0xe833,	// (0x0002600f) bg_uniindi_top_pane_g1

0x09f3,	// (0x000181cf) list_single_uniindi_pane_g1

0x0a06,	// (0x000181e2) list_single_uniindi_pane_t1

0xb491,	// (0x00022c6d) control_bg_pane

0x0a2b,	// (0x00018207) bg_sctrl_sk_pane_cp1

0x0a34,	// (0x00018210) bg_sctrl_sk_pane_cp2

0x0a3d,	// (0x00018219) control_bg_pane_g1

0x0a46,	// (0x00018222) control_bg_pane_g2

0x0001,

0xfd59,	// (0x00027535) control_bg_pane_g

0xe492,	// (0x00025c6e) cell_indicator_nsta_pane_g1_ParamLimits

0x9791,	// (0x00020f6d) cell_indicator_nsta_pane_g2_ParamLimits

0xfada,	// (0x000272b6) cell_indicator_nsta_pane_g_ParamLimits

0x44af,	// (0x0001bc8b) form2_midp_time_pane_t1_ParamLimits

0xe808,	// (0x00025fe4) main_idle_act4_pane_ParamLimits

0xe808,	// (0x00025fe4) main_idle_act4_pane

0x8b55,	// (0x00020331) popup_tb_extension_window_ParamLimits

0xa1a1,	// (0x0002197d) tb_ext_find_pane_ParamLimits

0xa1a1,	// (0x0002197d) tb_ext_find_pane

0x0a4f,	// (0x0001822b) ai_gene_pane_1_cp1

0xc5a9,	// (0x00023d85) ai_gene_pane_2_cp1

0x0a57,	// (0x00018233) list_single_idle_plugin_calendar_pane

0x0a60,	// (0x0001823c) list_single_idle_plugin_notification_pane

0x0a69,	// (0x00018245) list_single_idle_plugin_player_pane

0xa1ff,	// (0x000219db) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa1ff,	// (0x000219db) list_single_idle_plugin_shortcut_pane

0xa227,	// (0x00021a03) main_idle_act4_pane_t1

0xa23d,	// (0x00021a19) main_idle_act4_pane_t2

0x0001,

0xfd5e,	// (0x0002753a) main_idle_act4_pane_t

0xa253,	// (0x00021a2f) middle_sk_idle_act4_pane_ParamLimits

0xa253,	// (0x00021a2f) middle_sk_idle_act4_pane

0xa26f,	// (0x00021a4b) popup_clock_digital_analogue_window_cp2

0xa297,	// (0x00021a73) shortcut_wheel_idle_act4_pane_ParamLimits

0xa297,	// (0x00021a73) shortcut_wheel_idle_act4_pane

0xe833,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g1

0xe833,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g2

0xe833,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g3

0xe833,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g4

0xe833,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g5

0x0afc,	// (0x000182d8) shortcut_wheel_idle_act4_pane_g6

0x0b04,	// (0x000182e0) shortcut_wheel_idle_act4_pane_g7

0x0b0c,	// (0x000182e8) shortcut_wheel_idle_act4_pane_g8

0x0b14,	// (0x000182f0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd63,	// (0x0002753f) shortcut_wheel_idle_act4_pane_g

0x2705,	// (0x00019ee1) middle_sk_idle_act4_pane_g1_ParamLimits

0x2705,	// (0x00019ee1) middle_sk_idle_act4_pane_g1

0xa314,	// (0x00021af0) middle_sk_idle_act4_pane_g2_ParamLimits

0xa314,	// (0x00021af0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd86,	// (0x00027562) middle_sk_idle_act4_pane_g_ParamLimits

0xfd86,	// (0x00027562) middle_sk_idle_act4_pane_g

0xa32c,	// (0x00021b08) middle_sk_idle_act4_pane_t1_ParamLimits

0xa32c,	// (0x00021b08) middle_sk_idle_act4_pane_t1

0xa35b,	// (0x00021b37) grid_ai_shortcut_pane_ParamLimits

0xa35b,	// (0x00021b37) grid_ai_shortcut_pane

0xa378,	// (0x00021b54) list_highlight_pane_cp16_ParamLimits

0xa378,	// (0x00021b54) list_highlight_pane_cp16

0xa385,	// (0x00021b61) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa385,	// (0x00021b61) list_single_idle_plugin_shortcut_pane_g1

0xa391,	// (0x00021b6d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa391,	// (0x00021b6d) list_single_idle_plugin_shortcut_pane_g2

0xa3ad,	// (0x00021b89) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa3ad,	// (0x00021b89) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8b,	// (0x00027567) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8b,	// (0x00027567) list_single_idle_plugin_shortcut_pane_g

0xa3c2,	// (0x00021b9e) cell_ai_shortcut_pane_ParamLimits

0xa3c2,	// (0x00021b9e) cell_ai_shortcut_pane

0xa3d8,	// (0x00021bb4) cell_ai_shortcut_pane_g1_ParamLimits

0xa3d8,	// (0x00021bb4) cell_ai_shortcut_pane_g1

0x0a4f,	// (0x0001822b) ai_gene_pane_1_cp2

0x0c44,	// (0x00018420) ai_gene_pane_2_cp2

0x0c4c,	// (0x00018428) list_highlight_pane_cp15

0x0c55,	// (0x00018431) list_single_idle_plugin_calendar_pane_g1

0x0c4c,	// (0x00018428) list_highlight_pane_cp17

0x0c5d,	// (0x00018439) list_single_idle_plugin_calendar_pane_g1_copy1

0x0c65,	// (0x00018441) list_single_idle_plugin_player_pane_g1

0xdf34,	// (0x00025710) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd92,	// (0x0002756e) list_single_idle_plugin_player_pane_g

0x0c6d,	// (0x00018449) list_single_idle_plugin_player_pane_t1

0x0c7b,	// (0x00018457) list_single_idle_plugin_player_pane_t2

0x0c89,	// (0x00018465) list_single_idle_plugin_player_pane_t3

0x0c97,	// (0x00018473) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd97,	// (0x00027573) list_single_idle_plugin_player_pane_t

0x0ca5,	// (0x00018481) wait_bar_pane_cp15

0x0cad,	// (0x00018489) grid_ai_notification_pane

0xdf34,	// (0x00025710) list_single_idle_plugin_notification_pane_g1

0xa3fa,	// (0x00021bd6) cell_ai_notification_pane_ParamLimits

0xa3fa,	// (0x00021bd6) cell_ai_notification_pane

0x0cc3,	// (0x0001849f) cell_ai_notification_pane_g1

0x0ccb,	// (0x000184a7) cell_ai_notification_pane_t1

0xa407,	// (0x00021be3) tb_ext_find_button_pane

0xa40f,	// (0x00021beb) tb_ext_find_pane_g1

0xa417,	// (0x00021bf3) tb_ext_find_pane_t1

0xc03a,	// (0x00023816) tb_ext_find_button_pane_g1

0x0cf7,	// (0x000184d3) tb_ext_find_button_pane_g2

0x0001,

0xfda0,	// (0x0002757c) tb_ext_find_button_pane_g

0xa227,	// (0x00021a03) main_idle_act4_pane_t1_ParamLimits

0xa23d,	// (0x00021a19) main_idle_act4_pane_t2_ParamLimits

0xfd5e,	// (0x0002753a) main_idle_act4_pane_t_ParamLimits

0xa26f,	// (0x00021a4b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa287,	// (0x00021a63) sat_plugin_idle_act4_pane_ParamLimits

0xa287,	// (0x00021a63) sat_plugin_idle_act4_pane

0xa425,	// (0x00021c01) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa425,	// (0x00021c01) sat_plugin_idle_act4_pane_t1

0xa43d,	// (0x00021c19) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa43d,	// (0x00021c19) sat_plugin_idle_act4_pane_t2

0xa455,	// (0x00021c31) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa455,	// (0x00021c31) sat_plugin_idle_act4_pane_t3

0xa46d,	// (0x00021c49) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa46d,	// (0x00021c49) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda5,	// (0x00027581) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda5,	// (0x00027581) sat_plugin_idle_act4_pane_t

0x4aa4,	// (0x0001c280) popup_battery_window_ParamLimits

0x4aa4,	// (0x0001c280) popup_battery_window

0xb634,	// (0x00022e10) bg_popup_sub_pane_cp25_ParamLimits

0xb634,	// (0x00022e10) bg_popup_sub_pane_cp25

0x0d4c,	// (0x00018528) popup_battery_window_g1_ParamLimits

0x0d4c,	// (0x00018528) popup_battery_window_g1

0x0d58,	// (0x00018534) popup_battery_window_t1_ParamLimits

0x0d58,	// (0x00018534) popup_battery_window_t1

0x0d6a,	// (0x00018546) popup_battery_window_t2_ParamLimits

0x0d6a,	// (0x00018546) popup_battery_window_t2

0x0001,

0xfdae,	// (0x0002758a) popup_battery_window_t_ParamLimits

0xfdae,	// (0x0002758a) popup_battery_window_t

0x8369,	// (0x0001fb45) midp_canvas_pane_ParamLimits

0x83c4,	// (0x0001fba0) midp_keypad_pane_ParamLimits

0x83c4,	// (0x0001fba0) midp_keypad_pane

0xbc5a,	// (0x00023436) main_midp_pane_ParamLimits

0xe53c,	// (0x00025d18) signal_pane_g2_cp_ParamLimits

0xa485,	// (0x00021c61) aid_size_cell_midp_keypad_ParamLimits

0xa485,	// (0x00021c61) aid_size_cell_midp_keypad

0xa4a3,	// (0x00021c7f) midp_keyp_game_grid_pane_ParamLimits

0xa4a3,	// (0x00021c7f) midp_keyp_game_grid_pane

0xa4ca,	// (0x00021ca6) midp_keyp_rocker_pane_ParamLimits

0xa4ca,	// (0x00021ca6) midp_keyp_rocker_pane

0xa523,	// (0x00021cff) midp_keyp_sk_left_pane_ParamLimits

0xa523,	// (0x00021cff) midp_keyp_sk_left_pane

0xa577,	// (0x00021d53) midp_keyp_sk_right_pane_ParamLimits

0xa577,	// (0x00021d53) midp_keyp_sk_right_pane

0xb491,	// (0x00022c6d) bg_button_pane_cp03

0xa5cb,	// (0x00021da7) midp_keyp_sk_left_pane_g1

0xb491,	// (0x00022c6d) bg_button_pane_cp04

0xa5cb,	// (0x00021da7) midp_keyp_sk_right_pane_g1

0xe833,	// (0x0002600f) midp_keyp_rocker_pane_g1

0xa5d4,	// (0x00021db0) keyp_game_cell_pane_ParamLimits

0xa5d4,	// (0x00021db0) keyp_game_cell_pane

0xb491,	// (0x00022c6d) bg_button_pane_cp02

0xa5f8,	// (0x00021dd4) keyp_game_cell_pane_g1

0x7cb3,	// (0x0001f48f) popup_fep_vkb2_window_ParamLimits

0x7cb3,	// (0x0001f48f) popup_fep_vkb2_window

0xa601,	// (0x00021ddd) aid_size_cell_vkb2_ParamLimits

0xa601,	// (0x00021ddd) aid_size_cell_vkb2

0xa637,	// (0x00021e13) popup_fep_vkb2_window_g1_ParamLimits

0xa637,	// (0x00021e13) popup_fep_vkb2_window_g1

0xa687,	// (0x00021e63) vkb2_area_bottom_pane_ParamLimits

0xa687,	// (0x00021e63) vkb2_area_bottom_pane

0xa6db,	// (0x00021eb7) vkb2_area_keypad_pane_ParamLimits

0xa6db,	// (0x00021eb7) vkb2_area_keypad_pane

0xa723,	// (0x00021eff) vkb2_area_top_pane_ParamLimits

0xa723,	// (0x00021eff) vkb2_area_top_pane

0xa7a9,	// (0x00021f85) vkb2_top_entry_pane_ParamLimits

0xa7a9,	// (0x00021f85) vkb2_top_entry_pane

0xa7d6,	// (0x00021fb2) vkb2_top_grid_left_pane_ParamLimits

0xa7d6,	// (0x00021fb2) vkb2_top_grid_left_pane

0xa7f6,	// (0x00021fd2) vkb2_top_grid_right_pane_ParamLimits

0xa7f6,	// (0x00021fd2) vkb2_top_grid_right_pane

0x5d66,	// (0x0001d542) vkb2_cell_keypad_pane_ParamLimits

0x5d66,	// (0x0001d542) vkb2_cell_keypad_pane

0xa83c,	// (0x00022018) vkb2_area_bottom_grid_pane_ParamLimits

0xa83c,	// (0x00022018) vkb2_area_bottom_grid_pane

0xa866,	// (0x00022042) vkb2_area_bottom_pane_g1_ParamLimits

0xa866,	// (0x00022042) vkb2_area_bottom_pane_g1

0xa88c,	// (0x00022068) vkb2_area_bottom_pane_g2_ParamLimits

0xa88c,	// (0x00022068) vkb2_area_bottom_pane_g2

0xa8bd,	// (0x00022099) vkb2_area_bottom_pane_g3_ParamLimits

0xa8bd,	// (0x00022099) vkb2_area_bottom_pane_g3

0x0002,

0xfdb3,	// (0x0002758f) vkb2_area_bottom_pane_g_ParamLimits

0xfdb3,	// (0x0002758f) vkb2_area_bottom_pane_g

0x5f10,	// (0x0001d6ec) vkb2_top_cell_left_pane_ParamLimits

0x5f10,	// (0x0001d6ec) vkb2_top_cell_left_pane

0xa927,	// (0x00022103) vkb2_top_entry_pane_g1_ParamLimits

0xa927,	// (0x00022103) vkb2_top_entry_pane_g1

0xa935,	// (0x00022111) vkb2_top_entry_pane_t1_ParamLimits

0xa935,	// (0x00022111) vkb2_top_entry_pane_t1

0x0f1b,	// (0x000186f7) vkb2_top_entry_pane_t2_ParamLimits

0x0f1b,	// (0x000186f7) vkb2_top_entry_pane_t2

0x0f4d,	// (0x00018729) vkb2_top_entry_pane_t3_ParamLimits

0x0f4d,	// (0x00018729) vkb2_top_entry_pane_t3

0x0002,

0xfdba,	// (0x00027596) vkb2_top_entry_pane_t_ParamLimits

0xfdba,	// (0x00027596) vkb2_top_entry_pane_t

0xa96e,	// (0x0002214a) vkb2_top_grid_right_pane_g1_ParamLimits

0xa96e,	// (0x0002214a) vkb2_top_grid_right_pane_g1

0x5f73,	// (0x0001d74f) vkb2_top_grid_right_pane_g2_ParamLimits

0x5f73,	// (0x0001d74f) vkb2_top_grid_right_pane_g2

0x5f8b,	// (0x0001d767) vkb2_top_grid_right_pane_g3_ParamLimits

0x5f8b,	// (0x0001d767) vkb2_top_grid_right_pane_g3

0xa984,	// (0x00022160) vkb2_top_grid_right_pane_g4_ParamLimits

0xa984,	// (0x00022160) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc1,	// (0x0002759d) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc1,	// (0x0002759d) vkb2_top_grid_right_pane_g

0x5fb9,	// (0x0001d795) vkb2_top_cell_left_pane_g1

0x5fd0,	// (0x0001d7ac) vkb2_cell_keypad_pane_g1_ParamLimits

0x5fd0,	// (0x0001d7ac) vkb2_cell_keypad_pane_g1

0x0f63,	// (0x0001873f) vkb2_cell_keypad_pane_t1_ParamLimits

0x0f63,	// (0x0001873f) vkb2_cell_keypad_pane_t1

0x5fde,	// (0x0001d7ba) vkb2_cell_bottom_grid_pane_ParamLimits

0x5fde,	// (0x0001d7ba) vkb2_cell_bottom_grid_pane

0x6017,	// (0x0001d7f3) vkb2_cell_bottom_grid_pane_g1

0xa2b8,	// (0x00021a94) aid_call2_pane_cp02

0xa2c0,	// (0x00021a9c) aid_call_pane_cp02

0xa2c8,	// (0x00021aa4) clock_digital_number_pane_cp10

0xa2d0,	// (0x00021aac) clock_digital_number_pane_cp11

0xa2d8,	// (0x00021ab4) clock_digital_number_pane_cp12

0xa2e0,	// (0x00021abc) clock_digital_number_pane_cp13

0xa2e8,	// (0x00021ac4) clock_digital_separator_pane_cp10

0xc03a,	// (0x00023816) popup_clock_digital_analogue_window_cp2_g1

0xc03a,	// (0x00023816) popup_clock_digital_analogue_window_cp2_g2

0xa2f0,	// (0x00021acc) popup_clock_digital_analogue_window_cp2_g3

0xc03a,	// (0x00023816) popup_clock_digital_analogue_window_cp2_g4

0xa2f0,	// (0x00021acc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd76,	// (0x00027552) popup_clock_digital_analogue_window_cp2_g

0xa2f8,	// (0x00021ad4) popup_clock_digital_analogue_window_cp2_t1

0xa306,	// (0x00021ae2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd81,	// (0x0002755d) popup_clock_digital_analogue_window_cp2_t

0xe833,	// (0x0002600f) clock_digital_number_pane_cp10_g1

0xe833,	// (0x0002600f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb69,	// (0x00027345) clock_digital_number_pane_cp10_g

0xe833,	// (0x0002600f) clock_digital_separator_pane_cp10_g1

0xe833,	// (0x0002600f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb69,	// (0x00027345) clock_digital_separator_pane_cp10_g

0x0998,	// (0x00018174) uniindi_top_pane_g3

0x09a9,	// (0x00018185) uniindi_top_pane_g4

0x5df1,	// (0x0001d5cd) vkb2_row_keypad_pane_ParamLimits

0x5df1,	// (0x0001d5cd) vkb2_row_keypad_pane

0x6033,	// (0x0001d80f) vkb2_cell_t_keypad_pane_ParamLimits

0x6033,	// (0x0001d80f) vkb2_cell_t_keypad_pane

0x6043,	// (0x0001d81f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6043,	// (0x0001d81f) vkb2_cell_t_keypad_pane_cp08

0x6056,	// (0x0001d832) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6056,	// (0x0001d832) vkb2_cell_t_keypad_pane_cp09

0x606a,	// (0x0001d846) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x606a,	// (0x0001d846) vkb2_cell_t_keypad_pane_cp01

0x607b,	// (0x0001d857) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x607b,	// (0x0001d857) vkb2_cell_t_keypad_pane_cp02

0x608c,	// (0x0001d868) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x608c,	// (0x0001d868) vkb2_cell_t_keypad_pane_cp03

0x609d,	// (0x0001d879) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x609d,	// (0x0001d879) vkb2_cell_t_keypad_pane_cp04

0x60ae,	// (0x0001d88a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x60ae,	// (0x0001d88a) vkb2_cell_t_keypad_pane_cp05

0x60bf,	// (0x0001d89b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x60bf,	// (0x0001d89b) vkb2_cell_t_keypad_pane_cp06

0x60d0,	// (0x0001d8ac) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x60d0,	// (0x0001d8ac) vkb2_cell_t_keypad_pane_cp07

0x60e1,	// (0x0001d8bd) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x60e1,	// (0x0001d8bd) vkb2_cell_t_keypad_pane_cp10

0xe9da,	// (0x000261b6) vkb2_cell_t_keypad_pane_g1

0x0f7a,	// (0x00018756) vkb2_cell_t_keypad_pane_t1

0xb491,	// (0x00022c6d) popup_grid_graphic2_window

0xa99a,	// (0x00022176) aid_size_cell_graphic2_ParamLimits

0xa99a,	// (0x00022176) aid_size_cell_graphic2

0xd038,	// (0x00024814) bg_popup_window_pane_cp21_ParamLimits

0xd038,	// (0x00024814) bg_popup_window_pane_cp21

0xa9cc,	// (0x000221a8) graphic2_pages_pane_ParamLimits

0xa9cc,	// (0x000221a8) graphic2_pages_pane

0xaa22,	// (0x000221fe) grid_graphic2_control_pane_ParamLimits

0xaa22,	// (0x000221fe) grid_graphic2_control_pane

0xaa56,	// (0x00022232) grid_graphic2_pane_ParamLimits

0xaa56,	// (0x00022232) grid_graphic2_pane

0xaac9,	// (0x000222a5) cell_graphic2_pane

0xb491,	// (0x00022c6d) main_comp_mode_pane

0x01b5,	// (0x00017991) list_ai3_gene_pane_ParamLimits

0x9f94,	// (0x00021770) bg_popup_window_pane_cp19_ParamLimits

0x05ee,	// (0x00017dca) bg_touch_area_indi_pane_ParamLimits

0x05ee,	// (0x00017dca) bg_touch_area_indi_pane

0x0604,	// (0x00017de0) bg_touch_area_indi_pane_cp01_ParamLimits

0x0604,	// (0x00017de0) bg_touch_area_indi_pane_cp01

0x061a,	// (0x00017df6) bg_touch_area_indi_pane_cp02_ParamLimits

0x061a,	// (0x00017df6) bg_touch_area_indi_pane_cp02

0x0632,	// (0x00017e0e) bg_touch_area_indi_pane_cp03_ParamLimits

0x0632,	// (0x00017e0e) bg_touch_area_indi_pane_cp03

0x064c,	// (0x00017e28) popup_slider_window_g1_ParamLimits

0x0668,	// (0x00017e44) popup_slider_window_g2_ParamLimits

0x0684,	// (0x00017e60) popup_slider_window_g3_ParamLimits

0xfd0b,	// (0x000274e7) popup_slider_window_g_ParamLimits

0x06e0,	// (0x00017ebc) popup_slider_window_t1_ParamLimits

0x0754,	// (0x00017f30) small_volume_slider_vertical_pane_ParamLimits

0xaac9,	// (0x000222a5) cell_graphic2_pane_ParamLimits

0xab24,	// (0x00022300) bg_button_pane_cp10_ParamLimits

0xab24,	// (0x00022300) bg_button_pane_cp10

0xab37,	// (0x00022313) bg_button_pane_cp11_ParamLimits

0xab37,	// (0x00022313) bg_button_pane_cp11

0xab4a,	// (0x00022326) graphic2_pages_pane_g1_ParamLimits

0xab4a,	// (0x00022326) graphic2_pages_pane_g1

0xab65,	// (0x00022341) graphic2_pages_pane_g2_ParamLimits

0xab65,	// (0x00022341) graphic2_pages_pane_g2

0x0001,

0xfdcf,	// (0x000275ab) graphic2_pages_pane_g_ParamLimits

0xfdcf,	// (0x000275ab) graphic2_pages_pane_g

0xab7d,	// (0x00022359) graphic2_pages_pane_t1_ParamLimits

0xab7d,	// (0x00022359) graphic2_pages_pane_t1

0xab95,	// (0x00022371) cell_graphic2_control_pane_ParamLimits

0xab95,	// (0x00022371) cell_graphic2_control_pane

0xabaf,	// (0x0002238b) cell_graphic2_pane_g1_ParamLimits

0xabaf,	// (0x0002238b) cell_graphic2_pane_g1

0x2713,	// (0x00019eef) cell_graphic2_pane_g2_ParamLimits

0x2713,	// (0x00019eef) cell_graphic2_pane_g2

0xabbc,	// (0x00022398) cell_graphic2_pane_g3_ParamLimits

0xabbc,	// (0x00022398) cell_graphic2_pane_g3

0x2720,	// (0x00019efc) cell_graphic2_pane_g4_ParamLimits

0x2720,	// (0x00019efc) cell_graphic2_pane_g4

0xabc9,	// (0x000223a5) cell_graphic2_pane_g5_ParamLimits

0xabc9,	// (0x000223a5) cell_graphic2_pane_g5

0x0004,

0xfdd4,	// (0x000275b0) cell_graphic2_pane_g_ParamLimits

0xfdd4,	// (0x000275b0) cell_graphic2_pane_g

0xabe9,	// (0x000223c5) cell_graphic2_pane_t1_ParamLimits

0xabe9,	// (0x000223c5) cell_graphic2_pane_t1

0xd672,	// (0x00024e4e) grid_highlight_pane_cp11_ParamLimits

0xd672,	// (0x00024e4e) grid_highlight_pane_cp11

0xbb02,	// (0x000232de) bg_button_pane_cp05

0xac00,	// (0x000223dc) cell_graphic2_control_pane_g1

0xe833,	// (0x0002600f) bg_touch_area_indi_pane_g1

0x11d8,	// (0x000189b4) aid_cmod_rocker_key_size

0x11e2,	// (0x000189be) aid_cmode_itu_key_size

0x11ec,	// (0x000189c8) main_cmode_video_pane

0x11f6,	// (0x000189d2) main_comp_mode_itu_pane

0x1202,	// (0x000189de) main_comp_mode_rocker_pane

0x120e,	// (0x000189ea) cell_cmode_rocker_pane_ParamLimits

0x120e,	// (0x000189ea) cell_cmode_rocker_pane

0x1220,	// (0x000189fc) cell_cmode_itu_pane_ParamLimits

0x1220,	// (0x000189fc) cell_cmode_itu_pane

0xbb02,	// (0x000232de) bg_button_pane_cp06_ParamLimits

0xbb02,	// (0x000232de) bg_button_pane_cp06

0xe9da,	// (0x000261b6) cell_cmode_rocker_pane_g1_ParamLimits

0xe9da,	// (0x000261b6) cell_cmode_rocker_pane_g1

0x07f8,	// (0x00017fd4) cell_cmode_rocker_pane_g2_ParamLimits

0x07f8,	// (0x00017fd4) cell_cmode_rocker_pane_g2

0x0001,

0xfddf,	// (0x000275bb) cell_cmode_rocker_pane_g_ParamLimits

0xfddf,	// (0x000275bb) cell_cmode_rocker_pane_g

0xb491,	// (0x00022c6d) bg_button_pane_cp07

0x1235,	// (0x00018a11) cell_cmode_itu_pane_g1

0x123e,	// (0x00018a1a) cell_cmode_itu_pane_t1

0x124c,	// (0x00018a28) cell_cmode_itu_pane_t2

0x0001,

0xfde4,	// (0x000275c0) cell_cmode_itu_pane_t

0x0a1b,	// (0x000181f7) aid_touch_ctrl_left

0x0a23,	// (0x000181ff) aid_touch_ctrl_right

0xb491,	// (0x00022c6d) compa_mode_pane

0xac0d,	// (0x000223e9) aid_cmod_rocker_key_size_cp

0xac17,	// (0x000223f3) aid_cmode_itu_key_size_cp

0x126e,	// (0x00018a4a) compa_mode_pane_g1

0x1276,	// (0x00018a52) compa_mode_pane_g2

0x127e,	// (0x00018a5a) compa_mode_pane_g3

0x0002,

0xfde9,	// (0x000275c5) compa_mode_pane_g

0xac21,	// (0x000223fd) main_comp_mode_itu_pane_cp

0xac29,	// (0x00022405) main_comp_mode_rocker_pane_cp

0xac31,	// (0x0002240d) cell_cmode_itu_pane_cp_ParamLimits

0xac31,	// (0x0002240d) cell_cmode_itu_pane_cp

0xac46,	// (0x00022422) cell_cmode_rocker_pane_cp_ParamLimits

0xac46,	// (0x00022422) cell_cmode_rocker_pane_cp

0xbb02,	// (0x000232de) bg_button_pane_cp06_cp_ParamLimits

0xbb02,	// (0x000232de) bg_button_pane_cp06_cp

0xe9da,	// (0x000261b6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe9da,	// (0x000261b6) cell_cmode_rocker_pane_g1_cp

0xe833,	// (0x0002600f) cell_cmode_rocker_pane_g2_cp

0xb491,	// (0x00022c6d) bg_button_pane_cp07_cp

0xac58,	// (0x00022434) cell_cmode_itu_pane_g1_cp

0xac61,	// (0x0002243d) cell_cmode_itu_pane_t1_cp

0xac61,	// (0x0002243d) cell_cmode_itu_pane_t2_cp

0x958e,	// (0x00020d6a) settings_code_pane_cp2

0xb501,	// (0x00022cdd) bg_popup_window_pane_cp3_ParamLimits

0xb80e,	// (0x00022fea) heading_pane_cp3_ParamLimits

0xb81a,	// (0x00022ff6) listscroll_popup_graphic_pane_ParamLimits

0x5706,	// (0x0001cee2) fep_hwr_aid_pane_ParamLimits

0x5ad0,	// (0x0001d2ac) aid_touch_sctrl_top_ParamLimits

0x5add,	// (0x0001d2b9) sctrl_sk_top_pane_g1_ParamLimits

0xe9da,	// (0x000261b6) sctrl_sk_top_pane_g2_ParamLimits

0xfd24,	// (0x00027500) sctrl_sk_top_pane_g_ParamLimits

0x5aea,	// (0x0001d2c6) sctrl_sk_top_pane_t1_ParamLimits

0x5ad0,	// (0x0001d2ac) aid_touch_sctrl_bottom_ParamLimits

0x5aea,	// (0x0001d2c6) sctrl_sk_bottom_pane_t1_ParamLimits

0x0964,	// (0x00018140) aid_area_touch_clock

0xa76b,	// (0x00021f47) aid_vkb2_area_top_pane_cell_ParamLimits

0xa76b,	// (0x00021f47) aid_vkb2_area_top_pane_cell

0xa816,	// (0x00021ff2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa816,	// (0x00021ff2) aid_vkb2_area_bottom_pane_cell

0x0ed3,	// (0x000186af) popup_char_count_window

0x12cb,	// (0x00018aa7) popup_char_count_window_g1

0x12d4,	// (0x00018ab0) popup_char_count_window_g2

0x12dd,	// (0x00018ab9) popup_char_count_window_g3

0x0002,

0xfdf0,	// (0x000275cc) popup_char_count_window_g

0x12e6,	// (0x00018ac2) popup_char_count_window_t1

0x5b8e,	// (0x0001d36a) popup_fep_char_preview_window_ParamLimits

0x5b8e,	// (0x0001d36a) popup_fep_char_preview_window

0xa78b,	// (0x00021f67) vkb2_top_candi_pane_ParamLimits

0xa78b,	// (0x00021f67) vkb2_top_candi_pane

0xac6f,	// (0x0002244b) cell_vkb2_top_candi_pane_ParamLimits

0xac6f,	// (0x0002244b) cell_vkb2_top_candi_pane

0xd038,	// (0x00024814) bg_popup_fep_char_preview_window_ParamLimits

0xd038,	// (0x00024814) bg_popup_fep_char_preview_window

0x60f6,	// (0x0001d8d2) popup_fep_char_preview_window_t1_ParamLimits

0x60f6,	// (0x0001d8d2) popup_fep_char_preview_window_t1

0x1351,	// (0x00018b2d) bg_popup_fep_char_preview_window_g1

0x1349,	// (0x00018b25) bg_popup_fep_char_preview_window_g2

0x1341,	// (0x00018b1d) bg_popup_fep_char_preview_window_g3

0x1361,	// (0x00018b3d) bg_popup_fep_char_preview_window_g4

0x1359,	// (0x00018b35) bg_popup_fep_char_preview_window_g5

0x6130,	// (0x0001d90c) bg_popup_fep_char_preview_window_g6

0x1392,	// (0x00018b6e) bg_popup_fep_char_preview_window_g7

0x138a,	// (0x00018b66) bg_popup_fep_char_preview_window_g8

0x139a,	// (0x00018b76) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf7,	// (0x000275d3) bg_popup_fep_char_preview_window_g

0xe9da,	// (0x000261b6) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe9da,	// (0x000261b6) cell_vkb2_top_candi_pane_g1

0xec19,	// (0x000263f5) cell_vkb2_top_candi_pane_g2_ParamLimits

0xec19,	// (0x000263f5) cell_vkb2_top_candi_pane_g2

0xec3a,	// (0x00026416) cell_vkb2_top_candi_pane_g3_ParamLimits

0xec3a,	// (0x00026416) cell_vkb2_top_candi_pane_g3

0x6138,	// (0x0001d914) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6138,	// (0x0001d914) cell_vkb2_top_candi_pane_g4

0x1369,	// (0x00018b45) cell_vkb2_top_candi_pane_g5_ParamLimits

0x1369,	// (0x00018b45) cell_vkb2_top_candi_pane_g5

0x07f8,	// (0x00017fd4) cell_vkb2_top_candi_pane_g6_ParamLimits

0x07f8,	// (0x00017fd4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0a,	// (0x000275e6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0a,	// (0x000275e6) cell_vkb2_top_candi_pane_g

0x6159,	// (0x0001d935) cell_vkb2_top_candi_pane_t1

0x5574,	// (0x0001cd50) aid_size_touch_slider_mark_ParamLimits

0x5574,	// (0x0001cd50) aid_size_touch_slider_mark

0xaa08,	// (0x000221e4) grid_graphic2_catg_pane_ParamLimits

0xaa08,	// (0x000221e4) grid_graphic2_catg_pane

0xaa9c,	// (0x00022278) popup_grid_graphic2_window_t1_ParamLimits

0xaa9c,	// (0x00022278) popup_grid_graphic2_window_t1

0xaab2,	// (0x0002228e) popup_grid_graphic2_window_t2_ParamLimits

0xaab2,	// (0x0002228e) popup_grid_graphic2_window_t2

0x0001,

0xfdca,	// (0x000275a6) popup_grid_graphic2_window_t_ParamLimits

0xfdca,	// (0x000275a6) popup_grid_graphic2_window_t

0xbb02,	// (0x000232de) bg_button_pane_cp05_ParamLimits

0xac00,	// (0x000223dc) cell_graphic2_control_pane_g1_ParamLimits

0xacd5,	// (0x000224b1) cell_graphic2_catg_pane_ParamLimits

0xacd5,	// (0x000224b1) cell_graphic2_catg_pane

0xb491,	// (0x00022c6d) bg_button_pane_cp12

0xace7,	// (0x000224c3) cell_graphic2_catg_pane_g1

0x0930,	// (0x0001810c) cell_tb_ext_pane_t1_ParamLimits

0x5f30,	// (0x0001d70c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5f30,	// (0x0001d70c) vkb2_top_cell_right_narrow_pane

0x5f48,	// (0x0001d724) vkb2_top_cell_right_wide_pane_ParamLimits

0x5f48,	// (0x0001d724) vkb2_top_cell_right_wide_pane

0xe808,	// (0x00025fe4) bg_vkb2_func_pane_ParamLimits

0xe808,	// (0x00025fe4) bg_vkb2_func_pane

0x5fb9,	// (0x0001d795) vkb2_top_cell_left_pane_g1_ParamLimits

0xe808,	// (0x00025fe4) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe808,	// (0x00025fe4) bg_vkb2_fuc_pane_cp03

0x6017,	// (0x0001d7f3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xcab9,	// (0x00024295) bg_vkb2_func_pane_g1

0xcac1,	// (0x0002429d) bg_vkb2_func_pane_g2

0xcad1,	// (0x000242ad) bg_vkb2_func_pane_g3

0xcac9,	// (0x000242a5) bg_vkb2_func_pane_g4

0xcad9,	// (0x000242b5) bg_vkb2_func_pane_g5

0xcae1,	// (0x000242bd) bg_vkb2_func_pane_g6

0xcae9,	// (0x000242c5) bg_vkb2_func_pane_g7

0xcaf1,	// (0x000242cd) bg_vkb2_func_pane_g8

0xcab1,	// (0x0002428d) bg_vkb2_func_pane_g9

0x0008,

0xfe17,	// (0x000275f3) bg_vkb2_func_pane_g

0xe808,	// (0x00025fe4) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe808,	// (0x00025fe4) bg_vkb2_fuc_pane_cp01

0x5fb9,	// (0x0001d795) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5fb9,	// (0x0001d795) vkb2_top_cell_right_wide_pane_g1

0xe808,	// (0x00025fe4) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe808,	// (0x00025fe4) bg_vkb2_fuc_pane_cp02

0x6017,	// (0x0001d7f3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6017,	// (0x0001d7f3) vkb2_top_cell_right_narrow_pane_g1

0x9ed4,	// (0x000216b0) aid_touch_area_decrease_ParamLimits

0x9ed4,	// (0x000216b0) aid_touch_area_decrease

0x9f08,	// (0x000216e4) aid_touch_area_increase_ParamLimits

0x9f08,	// (0x000216e4) aid_touch_area_increase

0x9f30,	// (0x0002170c) aid_touch_area_mute_ParamLimits

0x9f30,	// (0x0002170c) aid_touch_area_mute

0x9f60,	// (0x0002173c) aid_touch_area_slider_ParamLimits

0x9f60,	// (0x0002173c) aid_touch_area_slider

0x9fa0,	// (0x0002177c) popup_slider_window_g4_ParamLimits

0x9fa0,	// (0x0002177c) popup_slider_window_g4

0x9fc8,	// (0x000217a4) popup_slider_window_g5_ParamLimits

0x9fc8,	// (0x000217a4) popup_slider_window_g5

0x9ffc,	// (0x000217d8) popup_slider_window_g6_ParamLimits

0x9ffc,	// (0x000217d8) popup_slider_window_g6

0x070e,	// (0x00017eea) popup_slider_window_t2_ParamLimits

0x070e,	// (0x00017eea) popup_slider_window_t2

0x0001,

0xfd18,	// (0x000274f4) popup_slider_window_t_ParamLimits

0xfd18,	// (0x000274f4) popup_slider_window_t

0xa018,	// (0x000217f4) slider_pane_ParamLimits

0xa018,	// (0x000217f4) slider_pane

0x13bd,	// (0x00018b99) slider_pane_g1_ParamLimits

0x13bd,	// (0x00018b99) slider_pane_g1

0x13d1,	// (0x00018bad) slider_pane_g2_ParamLimits

0x13d1,	// (0x00018bad) slider_pane_g2

0x13e7,	// (0x00018bc3) slider_pane_g3_ParamLimits

0x13e7,	// (0x00018bc3) slider_pane_g3

0x0003,

0xfe2a,	// (0x00027606) slider_pane_g_ParamLimits

0xfe2a,	// (0x00027606) slider_pane_g

0x8b9d,	// (0x00020379) popup_tb_float_extension_window_ParamLimits

0x8b9d,	// (0x00020379) popup_tb_float_extension_window

0x1413,	// (0x00018bef) aid_size_cell_tb_float_ext

0xb491,	// (0x00022c6d) bg_popup_sub_window_cp28

0x141f,	// (0x00018bfb) grid_tb_float_ext_pane

0x1429,	// (0x00018c05) cell_tb_float_ext_pane_ParamLimits

0x1429,	// (0x00018c05) cell_tb_float_ext_pane

0x1443,	// (0x00018c1f) cell_tb_float_ext_pane_g1

0x144c,	// (0x00018c28) grid_highlight_pane_cp12

0x9965,	// (0x00021141) cell_last_hwr_side_pane_ParamLimits

0x9965,	// (0x00021141) cell_last_hwr_side_pane

0xe833,	// (0x0002600f) cell_last_hwr_side_pane_g1

0x1455,	// (0x00018c31) cell_last_hwr_side_pane_g2

0x0001,

0xfe33,	// (0x0002760f) cell_last_hwr_side_pane_g

0xa8f2,	// (0x000220ce) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa8f2,	// (0x000220ce) vkb2_area_bottom_space_btn_pane

0xe9da,	// (0x000261b6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0f7a,	// (0x00018756) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6159,	// (0x0001d935) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6178,	// (0x0001d954) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6178,	// (0x0001d954) vkb2_area_bottom_space_btn_pane_g1

0x61b2,	// (0x0001d98e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x61b2,	// (0x0001d98e) vkb2_area_bottom_space_btn_pane_g2

0x61e8,	// (0x0001d9c4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x61e8,	// (0x0001d9c4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe38,	// (0x00027614) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe38,	// (0x00027614) vkb2_area_bottom_space_btn_pane_g

0x57ad,	// (0x0001cf89) cel_fep_hwr_func_pane_ParamLimits

0x57ad,	// (0x0001cf89) cel_fep_hwr_func_pane

0x993a,	// (0x00021116) cell_hwr_side_button_pane_ParamLimits

0x993a,	// (0x00021116) cell_hwr_side_button_pane

0x0964,	// (0x00018140) aid_area_touch_clock_ParamLimits

0xb634,	// (0x00022e10) bg_uniindi_top_pane_ParamLimits

0x0976,	// (0x00018152) uniindi_top_pane_g1_ParamLimits

0x098c,	// (0x00018168) uniindi_top_pane_g2_ParamLimits

0x0998,	// (0x00018174) uniindi_top_pane_g3_ParamLimits

0x09a9,	// (0x00018185) uniindi_top_pane_g4_ParamLimits

0xfd50,	// (0x0002752c) uniindi_top_pane_g_ParamLimits

0x09b6,	// (0x00018192) uniindi_top_pane_t1_ParamLimits

0xb634,	// (0x00022e10) bg_vkb2_func_pane_cp01_ParamLimits

0xb634,	// (0x00022e10) bg_vkb2_func_pane_cp01

0x272d,	// (0x00019f09) cel_fep_hwr_func_pane_g1_ParamLimits

0x272d,	// (0x00019f09) cel_fep_hwr_func_pane_g1

0xb634,	// (0x00022e10) bg_vkb2_func_pane_cp02_ParamLimits

0xb634,	// (0x00022e10) bg_vkb2_func_pane_cp02

0x272d,	// (0x00019f09) cell_hwr_side_button_pane_g1_ParamLimits

0x272d,	// (0x00019f09) cell_hwr_side_button_pane_g1

0xc9c7,	// (0x000241a3) status_pane_g4_ParamLimits

0xc9c7,	// (0x000241a3) status_pane_g4

0xc9e1,	// (0x000241bd) status_pane_t1

0xe6aa,	// (0x00025e86) form2_midp_gauge_slider_cont_pane

0xe6b2,	// (0x00025e8e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9885,	// (0x00021061) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9897,	// (0x00021073) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1c,	// (0x000272f8) form2_midp_gauge_slider_pane_t_ParamLimits

0xe6c4,	// (0x00025ea0) form2_midp_slider_pane_ParamLimits

0x5b4e,	// (0x0001d32a) aid_size_cell_func_vkb2_ParamLimits

0x5b4e,	// (0x0001d32a) aid_size_cell_func_vkb2

0x13ff,	// (0x00018bdb) slider_pane_g4_ParamLimits

0x13ff,	// (0x00018bdb) slider_pane_g4

0xacf0,	// (0x000224cc) form2_midp_gauge_slider_pane_t2_cp01

0xacfe,	// (0x000224da) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xacfe,	// (0x000224da) form2_midp_gauge_slider_pane_t3_cp01

0x625d,	// (0x0001da39) form2_midp_slider_pane_cp01

0xb491,	// (0x00022c6d) navi_smil_pane

0x275d,	// (0x00019f39) navi_smil_pane_g1

0x2765,	// (0x00019f41) navi_smil_pane_t1

0x273b,	// (0x00019f17) form2_midp_slider_pane_g1

0x2744,	// (0x00019f20) form2_midp_slider_pane_g2

0x274c,	// (0x00019f28) form2_midp_slider_pane_g3

0x273b,	// (0x00019f17) form2_midp_slider_pane_g4

0xad1b,	// (0x000224f7) form2_midp_slider_pane_g5

0x0004,

0xfe41,	// (0x0002761d) form2_midp_slider_pane_g

0x6222,	// (0x0001d9fe) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6222,	// (0x0001d9fe) vkb2_area_bottom_space_btn_pane_g4

0x8d79,	// (0x00020555) lc0_navi_pane_ParamLimits

0x8d79,	// (0x00020555) lc0_navi_pane

0x8de3,	// (0x000205bf) lc0_stat_indi_pane_ParamLimits

0x8de3,	// (0x000205bf) lc0_stat_indi_pane

0x8df8,	// (0x000205d4) ls0_title_pane_ParamLimits

0x8df8,	// (0x000205d4) ls0_title_pane

0xbb02,	// (0x000232de) bg_popup_sub_pane_cp14_ParamLimits

0x094b,	// (0x00018127) list_uniindi_pane_ParamLimits

0x0957,	// (0x00018133) uniindi_top_pane_ParamLimits

0x09f3,	// (0x000181cf) list_single_uniindi_pane_g1_ParamLimits

0x0a06,	// (0x000181e2) list_single_uniindi_pane_t1_ParamLimits

0xad24,	// (0x00022500) lc0_stat_clock_pane_ParamLimits

0xad24,	// (0x00022500) lc0_stat_clock_pane

0xad31,	// (0x0002250d) lc0_stat_indi_pane_g1_ParamLimits

0xad31,	// (0x0002250d) lc0_stat_indi_pane_g1

0xad3e,	// (0x0002251a) lc0_stat_indi_pane_g2_ParamLimits

0xad3e,	// (0x0002251a) lc0_stat_indi_pane_g2

0x0001,

0xfe4c,	// (0x00027628) lc0_stat_indi_pane_g_ParamLimits

0xfe4c,	// (0x00027628) lc0_stat_indi_pane_g

0xad4b,	// (0x00022527) lc0_uni_indicator_pane_ParamLimits

0xad4b,	// (0x00022527) lc0_uni_indicator_pane

0x2773,	// (0x00019f4f) ls0_title_pane_g1_ParamLimits

0x2773,	// (0x00019f4f) ls0_title_pane_g1

0xad58,	// (0x00022534) ls0_title_pane_t1_ParamLimits

0xad58,	// (0x00022534) ls0_title_pane_t1

0xad86,	// (0x00022562) lc0_uni_indicator_pane_g1_ParamLimits

0xad86,	// (0x00022562) lc0_uni_indicator_pane_g1

0x2787,	// (0x00019f63) lc0_stat_clock_pane_t1

0xb491,	// (0x00022c6d) main_ai5_pane

0x2795,	// (0x00019f71) ai5_sk_pane_ParamLimits

0x2795,	// (0x00019f71) ai5_sk_pane

0xadad,	// (0x00022589) cell_ai5_widget_pane_ParamLimits

0xadad,	// (0x00022589) cell_ai5_widget_pane

0x27a2,	// (0x00019f7e) aid_size_cell_widget_grid

0x27b4,	// (0x00019f90) bg_ai5_widget_pane_ParamLimits

0x27b4,	// (0x00019f90) bg_ai5_widget_pane

0xae36,	// (0x00022612) cell_ai5_widget_pane_g2

0xae46,	// (0x00022622) cell_ai5_widget_pane_g3

0xae5a,	// (0x00022636) cell_ai5_widget_pane_g4

0xae66,	// (0x00022642) cell_ai5_widget_pane_g5

0xae72,	// (0x0002264e) cell_ai5_widget_pane_g6

0xae7e,	// (0x0002265a) cell_ai5_widget_pane_g7

0xaec6,	// (0x000226a2) cell_ai5_widget_pane_t1_ParamLimits

0xaec6,	// (0x000226a2) cell_ai5_widget_pane_t1

0xaee3,	// (0x000226bf) cell_ai5_widget_pane_t2_ParamLimits

0xaee3,	// (0x000226bf) cell_ai5_widget_pane_t2

0xaefb,	// (0x000226d7) cell_ai5_widget_pane_t3_ParamLimits

0xaefb,	// (0x000226d7) cell_ai5_widget_pane_t3

0xaf13,	// (0x000226ef) cell_ai5_widget_pane_t4_ParamLimits

0xaf13,	// (0x000226ef) cell_ai5_widget_pane_t4

0xaf2d,	// (0x00022709) cell_ai5_widget_pane_t5_ParamLimits

0xaf2d,	// (0x00022709) cell_ai5_widget_pane_t5

0x27c0,	// (0x00019f9c) cell_ai5_widget_pane_t6_ParamLimits

0x27c0,	// (0x00019f9c) cell_ai5_widget_pane_t6

0x27d2,	// (0x00019fae) cell_ai5_widget_pane_t7_ParamLimits

0x27d2,	// (0x00019fae) cell_ai5_widget_pane_t7

0xaf4c,	// (0x00022728) cell_ai5_widget_pane_t8_ParamLimits

0xaf4c,	// (0x00022728) cell_ai5_widget_pane_t8

0x0009,

0xfe66,	// (0x00027642) cell_ai5_widget_pane_t_ParamLimits

0xfe66,	// (0x00027642) cell_ai5_widget_pane_t

0xaf94,	// (0x00022770) grid_ai5_widget_pane

0xbb02,	// (0x000232de) highlight_cell_ai5_widget_pane_ParamLimits

0xbb02,	// (0x000232de) highlight_cell_ai5_widget_pane

0xafac,	// (0x00022788) ai5_sk_left_pane

0xafb6,	// (0x00022792) ai5_sk_middle_pane

0xafc0,	// (0x0002279c) ai5_sk_right_pane

0x27eb,	// (0x00019fc7) bg_ai5_widget_pane_g1_ParamLimits

0x27eb,	// (0x00019fc7) bg_ai5_widget_pane_g1

0x27f7,	// (0x00019fd3) bg_ai5_widget_pane_g2_ParamLimits

0x27f7,	// (0x00019fd3) bg_ai5_widget_pane_g2

0x2803,	// (0x00019fdf) bg_ai5_widget_pane_g3_ParamLimits

0x2803,	// (0x00019fdf) bg_ai5_widget_pane_g3

0x280f,	// (0x00019feb) bg_ai5_widget_pane_g4_ParamLimits

0x280f,	// (0x00019feb) bg_ai5_widget_pane_g4

0x281b,	// (0x00019ff7) bg_ai5_widget_pane_g5_ParamLimits

0x281b,	// (0x00019ff7) bg_ai5_widget_pane_g5

0x2827,	// (0x0001a003) bg_ai5_widget_pane_g6_ParamLimits

0x2827,	// (0x0001a003) bg_ai5_widget_pane_g6

0x2833,	// (0x0001a00f) bg_ai5_widget_pane_g7_ParamLimits

0x2833,	// (0x0001a00f) bg_ai5_widget_pane_g7

0x283f,	// (0x0001a01b) bg_ai5_widget_pane_g8_ParamLimits

0x283f,	// (0x0001a01b) bg_ai5_widget_pane_g8

0x284b,	// (0x0001a027) bg_ai5_widget_pane_g9_ParamLimits

0x284b,	// (0x0001a027) bg_ai5_widget_pane_g9

0x0008,

0xfe7b,	// (0x00027657) bg_ai5_widget_pane_g_ParamLimits

0xfe7b,	// (0x00027657) bg_ai5_widget_pane_g

0x2857,	// (0x0001a033) cell_shortcut_ai5_widget_pane_ParamLimits

0x2857,	// (0x0001a033) cell_shortcut_ai5_widget_pane

0xb53d,	// (0x00022d19) bg_cell_shortcut_ai5_widget_pane

0x2869,	// (0x0001a045) cell_grid_ai5_widget_pane_g1

0x2872,	// (0x0001a04e) highlight_cell_shortcut_ai5_widget_pane

0xcac1,	// (0x0002429d) ai5_sk_left_pane_g1

0x287a,	// (0x0001a056) ai5_sk_left_pane_g2

0x2882,	// (0x0001a05e) ai5_sk_left_pane_g3

0x288a,	// (0x0001a066) ai5_sk_left_pane_g4

0x0003,

0xfe8e,	// (0x0002766a) ai5_sk_left_pane_g

0x2892,	// (0x0001a06e) ai5_sk_left_pane_t1

0xcab9,	// (0x00024295) ai5_sk_right_pane_g1

0x28a0,	// (0x0001a07c) ai5_sk_right_pane_g2

0x28a8,	// (0x0001a084) ai5_sk_right_pane_g3

0x28b0,	// (0x0001a08c) ai5_sk_right_pane_g4

0x0003,

0xfe97,	// (0x00027673) ai5_sk_right_pane_g

0x28b8,	// (0x0001a094) ai5_sk_right_pane_t1

0xcab9,	// (0x00024295) ai5_sk_middle_pane_g1

0xcac1,	// (0x0002429d) ai5_sk_middle_pane_g2

0xcad9,	// (0x000242b5) ai5_sk_middle_pane_g3

0x28a8,	// (0x0001a084) ai5_sk_middle_pane_g4

0x2882,	// (0x0001a05e) ai5_sk_middle_pane_g5

0x28c6,	// (0x0001a0a2) ai5_sk_middle_pane_g6

0xafe7,	// (0x000227c3) ai5_sk_middle_pane_g7

0x0006,

0xfea0,	// (0x0002767c) ai5_sk_middle_pane_g

0x8c65,	// (0x00020441) aid_touch_area_size_lc0_ParamLimits

0x8c65,	// (0x00020441) aid_touch_area_size_lc0

0x5938,	// (0x0001d114) cell_hwr_candidate_pane_t1_ParamLimits

0xc8ad,	// (0x00024089) aid_touch_navi_pane

0x8eea,	// (0x000206c6) status_dt_navi_pane_ParamLimits

0x8eea,	// (0x000206c6) status_dt_navi_pane

0x8f02,	// (0x000206de) status_dt_sta_pane_ParamLimits

0x8f02,	// (0x000206de) status_dt_sta_pane

0xafef,	// (0x000227cb) dt_sta_controll_pane

0xaffc,	// (0x000227d8) dt_sta_indi_pane

0xb009,	// (0x000227e5) dt_sta_title_pane

0xb634,	// (0x00022e10) bg_dt_sta_indi_pane_ParamLimits

0xb634,	// (0x00022e10) bg_dt_sta_indi_pane

0x28ce,	// (0x0001a0aa) dt_sta_battery_pane

0xb01b,	// (0x000227f7) dt_sta_indi_pane_g1

0xb024,	// (0x00022800) dt_sta_indi_pane_g2

0xb02d,	// (0x00022809) dt_sta_indi_pane_g3

0x0002,

0xfeaf,	// (0x0002768b) dt_sta_indi_pane_g

0xb036,	// (0x00022812) dt_sta_signal_pane

0xbb02,	// (0x000232de) bg_dt_sta_title_pane_ParamLimits

0xbb02,	// (0x000232de) bg_dt_sta_title_pane

0xd744,	// (0x00024f20) dt_sta_title_pane_g1

0xb03f,	// (0x0002281b) dt_sta_title_pane_t1_ParamLimits

0xb03f,	// (0x0002281b) dt_sta_title_pane_t1

0xb491,	// (0x00022c6d) bg_dt_sta_control_pane

0xb054,	// (0x00022830) dt_sta_controll_pane_g1

0xb05d,	// (0x00022839) bg_dt_sta_title_pane_g1

0xb066,	// (0x00022842) bg_dt_sta_title_pane_g2

0xb06f,	// (0x0002284b) bg_dt_sta_title_pane_g3

0x0002,

0xfeb6,	// (0x00027692) bg_dt_sta_title_pane_g

0xe833,	// (0x0002600f) bg_dt_sta_indi_pane_g1

0x28d6,	// (0x0001a0b2) dt_sta_signal_pane_g1

0x28de,	// (0x0001a0ba) dt_sta_signal_pane_g2

0x0001,

0xfebd,	// (0x00027699) dt_sta_signal_pane_g

0x28e6,	// (0x0001a0c2) dt_sta_battery_pane_g1

0x28ef,	// (0x0001a0cb) dt_sta_battery_pane_t1

0xe833,	// (0x0002600f) bg_dt_sta_control_pane_g1

0xc0b8,	// (0x00023894) fep_china_uni_eep_pane

0xc0c0,	// (0x0002389c) fep_china_uni_entry_pane_ParamLimits

0xc0d0,	// (0x000238ac) popup_fep_china_uni_window_g1_ParamLimits

0xc0e0,	// (0x000238bc) popup_fep_china_uni_window_g2_ParamLimits

0xc0e0,	// (0x000238bc) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x00026f39) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x00026f39) popup_fep_china_uni_window_g

0x28fe,	// (0x0001a0da) fep_china_uni_eep_pane_g1

0x2906,	// (0x0001a0e2) fep_china_uni_eep_pane_t1

0x2754,	// (0x00019f30) aid_touch_area_size_smil_player

0xc99a,	// (0x00024176) lc0_clock_pane

0xc9d5,	// (0x000241b1) status_pane_g5_ParamLimits

0xc9d5,	// (0x000241b1) status_pane_g5

0x8743,	// (0x0001ff1f) popup_keymap_window

0xc9b3,	// (0x0002418f) status_icon_pane

0xae46,	// (0x00022622) cell_ai5_widget_pane_g3_ParamLimits

0xae5a,	// (0x00022636) cell_ai5_widget_pane_g4_ParamLimits

0xae66,	// (0x00022642) cell_ai5_widget_pane_g5_ParamLimits

0xae8a,	// (0x00022666) cell_ai5_widget_pane_g8_ParamLimits

0xae8a,	// (0x00022666) cell_ai5_widget_pane_g8

0xae9e,	// (0x0002267a) cell_ai5_widget_pane_g9_ParamLimits

0xae9e,	// (0x0002267a) cell_ai5_widget_pane_g9

0xaeb2,	// (0x0002268e) cell_ai5_widget_pane_g10_ParamLimits

0xaeb2,	// (0x0002268e) cell_ai5_widget_pane_g10

0x2915,	// (0x0001a0f1) status_icon_pane_g1

0xb491,	// (0x00022c6d) bg_popup_sub_pane_cp13

0x291d,	// (0x0001a0f9) popup_keymap_window_t1

0x8453,	// (0x0001fc2f) control_pane_g6_ParamLimits

0x8453,	// (0x0001fc2f) control_pane_g6

0x8460,	// (0x0001fc3c) control_pane_g7_ParamLimits

0x8460,	// (0x0001fc3c) control_pane_g7

0x846d,	// (0x0001fc49) control_pane_g8_ParamLimits

0x846d,	// (0x0001fc49) control_pane_g8

0xafef,	// (0x000227cb) dt_sta_controll_pane_ParamLimits

0xaffc,	// (0x000227d8) dt_sta_indi_pane_ParamLimits

0xb009,	// (0x000227e5) dt_sta_title_pane_ParamLimits

0xba44,	// (0x00023220) aid_size_touch_scroll_bar_cale

0x4ab8,	// (0x0001c294) popup_discreet_window_ParamLimits

0x4ab8,	// (0x0001c294) popup_discreet_window

0x7cf9,	// (0x0001f4d5) popup_sk_window

0xd038,	// (0x00024814) bg_popup_sub_pane_cp28_ParamLimits

0xd038,	// (0x00024814) bg_popup_sub_pane_cp28

0x292b,	// (0x0001a107) popup_discreet_window_g1_ParamLimits

0x292b,	// (0x0001a107) popup_discreet_window_g1

0x294b,	// (0x0001a127) popup_discreet_window_t1_ParamLimits

0x294b,	// (0x0001a127) popup_discreet_window_t1

0x2969,	// (0x0001a145) popup_discreet_window_t2_ParamLimits

0x2969,	// (0x0001a145) popup_discreet_window_t2

0x0002,

0xfec2,	// (0x0002769e) popup_discreet_window_t_ParamLimits

0xfec2,	// (0x0002769e) popup_discreet_window_t

0x65d9,	// (0x0001ddb5) popup_sk_window_g1

0x65e3,	// (0x0001ddbf) popup_sk_window_g2

0x0001,

0xfec9,	// (0x000276a5) popup_sk_window_g

0x29c9,	// (0x0001a1a5) popup_sk_window_t1

0x29bb,	// (0x0001a197) popup_sk_window_t1_copy1

0xae36,	// (0x00022612) cell_ai5_widget_pane_g2_ParamLimits

0xaf5e,	// (0x0002273a) cell_ai5_widget_pane_t9_ParamLimits

0xaf5e,	// (0x0002273a) cell_ai5_widget_pane_t9

0xb491,	// (0x00022c6d) main_fep_fshwr2_pane

0xb078,	// (0x00022854) aid_fshwr2_btn_pane

0xb080,	// (0x0002285c) aid_fshwr2_syb_pane

0xb088,	// (0x00022864) aid_fshwr2_txt_pane

0xb090,	// (0x0002286c) fshwr2_func_candi_pane

0xb09a,	// (0x00022876) fshwr2_hwr_syb_pane

0xb0a8,	// (0x00022884) fshwr2_icf_pane

0xb491,	// (0x00022c6d) fshwr2_icf_bg_pane

0xb0b2,	// (0x0002288e) fshwr2_icf_pane_t1_ParamLimits

0xb0b2,	// (0x0002288e) fshwr2_icf_pane_t1

0xe833,	// (0x0002600f) fshwr2_func_candi_pane_g1

0x29eb,	// (0x0001a1c7) fshwr2_func_candi_row_pane_ParamLimits

0x29eb,	// (0x0001a1c7) fshwr2_func_candi_row_pane

0xb0ca,	// (0x000228a6) cell_fshwr2_syb_pane_ParamLimits

0xb0ca,	// (0x000228a6) cell_fshwr2_syb_pane

0xe9da,	// (0x000261b6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe9da,	// (0x000261b6) fshwr2_hwr_syb_pane_g1

0xb491,	// (0x00022c6d) bg_popup_call_pane_cp01

0x29fc,	// (0x0001a1d8) fshwr2_func_candi_cell_pane_ParamLimits

0x29fc,	// (0x0001a1d8) fshwr2_func_candi_cell_pane

0x2a2d,	// (0x0001a209) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2a2d,	// (0x0001a209) fshwr2_func_candi_cell_bg_pane

0x2a47,	// (0x0001a223) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x2a47,	// (0x0001a223) fshwr2_func_candi_cell_pane_g1

0x2a6f,	// (0x0001a24b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x2a6f,	// (0x0001a24b) fshwr2_func_candi_cell_pane_t1

0xb491,	// (0x00022c6d) bg_button_pane_cp08

0xc527,	// (0x00023d03) cell_fshwr2_syb_bg_pane

0xb0e4,	// (0x000228c0) cell_fshwr2_syb_bg_pane_g1

0xb0ec,	// (0x000228c8) cell_fshwr2_syb_bg_pane_t1

0xbb02,	// (0x000232de) main_tmo_pane

0x93bf,	// (0x00020b9b) uni_indicator_pane_g1_ParamLimits

0x93d4,	// (0x00020bb0) uni_indicator_pane_g2_ParamLimits

0x93e9,	// (0x00020bc5) uni_indicator_pane_g3_ParamLimits

0xda64,	// (0x00025240) uni_indicator_pane_g4_ParamLimits

0xda64,	// (0x00025240) uni_indicator_pane_g4

0xda78,	// (0x00025254) uni_indicator_pane_g5_ParamLimits

0xda78,	// (0x00025254) uni_indicator_pane_g5

0xda8c,	// (0x00025268) uni_indicator_pane_g6_ParamLimits

0xda8c,	// (0x00025268) uni_indicator_pane_g6

0xf955,	// (0x00027131) uni_indicator_pane_g_ParamLimits

0x9eb0,	// (0x0002168c) popup_tmo_note_window_ParamLimits

0x9eb0,	// (0x0002168c) popup_tmo_note_window

0xb491,	// (0x00022c6d) fshwr2_bg_pane

0x2a60,	// (0x0001a23c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x2a60,	// (0x0001a23c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfece,	// (0x000276aa) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfece,	// (0x000276aa) fshwr2_func_candi_cell_pane_g

0xe833,	// (0x0002600f) bg_popup_window_pane_cp01

0x2a82,	// (0x0001a25e) bg_popup_window_pane_g1_cp01

0x2a8b,	// (0x0001a267) bg_popup_window_pane_cp22_ParamLimits

0x2a8b,	// (0x0001a267) bg_popup_window_pane_cp22

0x2a99,	// (0x0001a275) listscroll_tmo_link_pane_ParamLimits

0x2a99,	// (0x0001a275) listscroll_tmo_link_pane

0x2ad9,	// (0x0001a2b5) popup_tmo_note_window_g1_ParamLimits

0x2ad9,	// (0x0001a2b5) popup_tmo_note_window_g1

0x2ae6,	// (0x0001a2c2) tmo_note_info_pane_ParamLimits

0x2ae6,	// (0x0001a2c2) tmo_note_info_pane

0xb0fb,	// (0x000228d7) list_tmo_note_info_pane_g1_ParamLimits

0xb0fb,	// (0x000228d7) list_tmo_note_info_pane_g1

0x2b00,	// (0x0001a2dc) list_tmo_note_info_pane_g2_ParamLimits

0x2b00,	// (0x0001a2dc) list_tmo_note_info_pane_g2

0x0001,

0xfed3,	// (0x000276af) list_tmo_note_info_pane_g_ParamLimits

0xfed3,	// (0x000276af) list_tmo_note_info_pane_g

0x2b1c,	// (0x0001a2f8) list_tmo_note_info_text_pane_ParamLimits

0x2b1c,	// (0x0001a2f8) list_tmo_note_info_text_pane

0x2b5e,	// (0x0001a33a) list_tmo_link_pane

0x2b6b,	// (0x0001a347) scroll_pane_cp20

0x2b78,	// (0x0001a354) list_single_tmo_link_pane_ParamLimits

0x2b78,	// (0x0001a354) list_single_tmo_link_pane

0x2b88,	// (0x0001a364) list_single_tmo_link_pane_t1

0x2b96,	// (0x0001a372) list_tmo_note_info_text_pane_t1_ParamLimits

0x2b96,	// (0x0001a372) list_tmo_note_info_text_pane_t1

0x8120,	// (0x0001f8fc) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8120,	// (0x0001f8fc) aid_size_touch_scroll_bar_cp01

0x782b,	// (0x0001f007) aid_size_touch_slider_marker

0x7ce9,	// (0x0001f4c5) popup_settings_window_ParamLimits

0x7ce9,	// (0x0001f4c5) popup_settings_window

0x4028,	// (0x0001b804) popup_candi_list_indi_window

0xc8ad,	// (0x00024089) aid_touch_navi_pane_ParamLimits

0x5aa4,	// (0x0001d280) rs_clock_indi_pane

0x5aad,	// (0x0001d289) sctrl_sk_bottom_pane_ParamLimits

0x5abe,	// (0x0001d29a) sctrl_sk_top_pane_ParamLimits

0x5ba8,	// (0x0001d384) popup_fep_tooltip_window

0x27a2,	// (0x00019f7e) aid_size_cell_widget_grid_ParamLimits

0xae2a,	// (0x00022606) cell_ai5_widget_pane_g1_ParamLimits

0xae2a,	// (0x00022606) cell_ai5_widget_pane_g1

0xae72,	// (0x0002264e) cell_ai5_widget_pane_g6_ParamLimits

0xae7e,	// (0x0002265a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe51,	// (0x0002762d) cell_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0002762d) cell_ai5_widget_pane_g

0xaf82,	// (0x0002275e) cell_ai5_widget_pane_t10_ParamLimits

0xaf82,	// (0x0002275e) cell_ai5_widget_pane_t10

0xaf94,	// (0x00022770) grid_ai5_widget_pane_ParamLimits

0xafca,	// (0x000227a6) cell_contacts_ai5_widget_pane_ParamLimits

0xafca,	// (0x000227a6) cell_contacts_ai5_widget_pane

0x297e,	// (0x0001a15a) popup_discreet_window_t3_ParamLimits

0x297e,	// (0x0001a15a) popup_discreet_window_t3

0x29d7,	// (0x0001a1b3) popup_fshwr2_char_preview_window_ParamLimits

0x29d7,	// (0x0001a1b3) popup_fshwr2_char_preview_window

0xb112,	// (0x000228ee) tmo_note_info_pane_t1

0xb127,	// (0x00022903) tmo_note_info_pane_t2

0xb13e,	// (0x0002291a) tmo_note_info_pane_t3

0x2b3a,	// (0x0001a316) tmo_note_info_pane_t4

0x2b4c,	// (0x0001a328) tmo_note_info_pane_t5

0x0004,

0xfed8,	// (0x000276b4) tmo_note_info_pane_t

0x2b5e,	// (0x0001a33a) list_tmo_link_pane_ParamLimits

0x2b6b,	// (0x0001a347) scroll_pane_cp20_ParamLimits

0xb491,	// (0x00022c6d) bg_popup_fep_char_preview_window_cp01

0x2baf,	// (0x0001a38b) popup_fshwr2_char_preview_window_t1

0x2bbd,	// (0x0001a399) popup_candi_list_indi_window_g1

0x2bc6,	// (0x0001a3a2) bg_cell_contacts_ai5_widget_pane

0xb153,	// (0x0002292f) cell_contacts_ai5_widget_pane_g1

0xb167,	// (0x00022943) cell_contacts_ai5_widget_pane_g2

0xb176,	// (0x00022952) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee3,	// (0x000276bf) cell_contacts_ai5_widget_pane_g

0xb189,	// (0x00022965) cell_contacts_ai5_widget_pane_t1

0xbb02,	// (0x000232de) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb203,	// (0x000229df) settings_container_pane

0xc527,	// (0x00023d03) listscroll_set_pane_copy1

0xe242,	// (0x00025a1e) scroll_pane_cp121_copy1

0x2bd2,	// (0x0001a3ae) set_content_pane_copy1

0xb20f,	// (0x000229eb) aid_height_set_list_copy1_ParamLimits

0xb20f,	// (0x000229eb) aid_height_set_list_copy1

0xd83f,	// (0x0002501b) aid_size_parent_copy1_ParamLimits

0xd83f,	// (0x0002501b) aid_size_parent_copy1

0xb21b,	// (0x000229f7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb21b,	// (0x000229f7) button_value_adjust_pane_cp6_copy1

0xbc5a,	// (0x00023436) list_highlight_pane_cp2_copy1_ParamLimits

0xbc5a,	// (0x00023436) list_highlight_pane_cp2_copy1

0xb22f,	// (0x00022a0b) list_set_pane_copy1_ParamLimits

0xb22f,	// (0x00022a0b) list_set_pane_copy1

0xb19e,	// (0x0002297a) main_pane_set_t1_copy1_ParamLimits

0xb19e,	// (0x0002297a) main_pane_set_t1_copy1

0xb1d8,	// (0x000229b4) main_pane_set_t2_copy1_ParamLimits

0xb1d8,	// (0x000229b4) main_pane_set_t2_copy1

0xb2dc,	// (0x00022ab8) main_pane_set_t3_copy1

0xb2ea,	// (0x00022ac6) main_pane_set_t4_copy1

0xb1f7,	// (0x000229d3) set_content_pane_g1_copy1_ParamLimits

0xb1f7,	// (0x000229d3) set_content_pane_g1_copy1

0xb2f8,	// (0x00022ad4) setting_code_pane_copy1

0x2bda,	// (0x0001a3b6) setting_slider_graphic_pane_copy1

0x2bda,	// (0x0001a3b6) setting_slider_pane_copy1

0x2be4,	// (0x0001a3c0) setting_text_pane_copy1

0x2bee,	// (0x0001a3ca) setting_volume_pane_copy1

0xb302,	// (0x00022ade) settings_code_pane_cp2_copy1

0xb30a,	// (0x00022ae6) settings_code_pane_cp_copy1_ParamLimits

0xb30a,	// (0x00022ae6) settings_code_pane_cp_copy1

0xb31e,	// (0x00022afa) volume_set_pane_copy1

0xb326,	// (0x00022b02) volume_set_pane_g10_copy1

0xb32e,	// (0x00022b0a) volume_set_pane_g1_copy1

0xb336,	// (0x00022b12) volume_set_pane_g2_copy1

0xb33e,	// (0x00022b1a) volume_set_pane_g3_copy1

0xb346,	// (0x00022b22) volume_set_pane_g4_copy1

0xb34e,	// (0x00022b2a) volume_set_pane_g5_copy1

0xb356,	// (0x00022b32) volume_set_pane_g6_copy1

0xb35e,	// (0x00022b3a) volume_set_pane_g7_copy1

0xb366,	// (0x00022b42) volume_set_pane_g8_copy1

0xb36e,	// (0x00022b4a) volume_set_pane_g9_copy1

0xb501,	// (0x00022cdd) bg_set_opt_pane_cp_copy1_ParamLimits

0xb501,	// (0x00022cdd) bg_set_opt_pane_cp_copy1

0x2bf7,	// (0x0001a3d3) setting_slider_pane_t1_copy1_ParamLimits

0x2bf7,	// (0x0001a3d3) setting_slider_pane_t1_copy1

0xb376,	// (0x00022b52) setting_slider_pane_t2_copy1_ParamLimits

0xb376,	// (0x00022b52) setting_slider_pane_t2_copy1

0xb390,	// (0x00022b6c) setting_slider_pane_t3_copy1_ParamLimits

0xb390,	// (0x00022b6c) setting_slider_pane_t3_copy1

0xb3a8,	// (0x00022b84) slider_set_pane_copy1_ParamLimits

0xb3a8,	// (0x00022b84) slider_set_pane_copy1

0xbb69,	// (0x00023345) set_opt_bg_pane_g1_copy2

0xbb71,	// (0x0002334d) set_opt_bg_pane_g2_copy2

0x2c15,	// (0x0001a3f1) set_opt_bg_pane_g3_copy2

0xbb81,	// (0x0002335d) set_opt_bg_pane_g4_copy2

0xbb89,	// (0x00023365) set_opt_bg_pane_g5_copy2

0xbb91,	// (0x0002336d) set_opt_bg_pane_g6_copy2

0xb3be,	// (0x00022b9a) set_opt_bg_pane_g7_copy2

0x2c1f,	// (0x0001a3fb) set_opt_bg_pane_g8_copy2

0x2c29,	// (0x0001a405) set_opt_bg_pane_g9_copy2

0x6937,	// (0x0001e113) aid_size_touch_slider_mark_copy1_ParamLimits

0x6937,	// (0x0001e113) aid_size_touch_slider_mark_copy1

0x2c33,	// (0x0001a40f) slider_set_pane_g1_copy1

0x694b,	// (0x0001e127) slider_set_pane_g2_copy1

0x5594,	// (0x0001cd70) slider_set_pane_g3_copy1_ParamLimits

0x5594,	// (0x0001cd70) slider_set_pane_g3_copy1

0x55a8,	// (0x0001cd84) slider_set_pane_g4_copy1_ParamLimits

0x55a8,	// (0x0001cd84) slider_set_pane_g4_copy1

0x55c0,	// (0x0001cd9c) slider_set_pane_g5_copy1_ParamLimits

0x55c0,	// (0x0001cd9c) slider_set_pane_g5_copy1

0x5594,	// (0x0001cd70) slider_set_pane_g6_copy1_ParamLimits

0x5594,	// (0x0001cd70) slider_set_pane_g6_copy1

0xb3c6,	// (0x00022ba2) slider_set_pane_g7_copy1_ParamLimits

0xb3c6,	// (0x00022ba2) slider_set_pane_g7_copy1

0xb4a5,	// (0x00022c81) bg_set_opt_pane_cp2_copy1

0x2c3c,	// (0x0001a418) setting_slider_graphic_pane_g1_copy1

0xb3dc,	// (0x00022bb8) setting_slider_graphic_pane_t1_copy1

0xb3ec,	// (0x00022bc8) setting_slider_graphic_pane_t2_copy1

0xb3fc,	// (0x00022bd8) slider_set_pane_cp_copy1

0x2c4d,	// (0x0001a429) input_focus_pane_cp1_copy1

0x2c56,	// (0x0001a432) list_set_text_pane_copy1

0x2c5e,	// (0x0001a43a) setting_text_pane_g1_copy1

0x3839,	// (0x0001b015) set_text_pane_t1_copy1

0x2c4d,	// (0x0001a429) input_focus_pane_cp2_copy1

0x2c5e,	// (0x0001a43a) setting_code_pane_g1_copy1

0xb404,	// (0x00022be0) setting_code_pane_t1_copy1

0x810e,	// (0x0001f8ea) list_set_graphic_pane_copy1

0xb4a5,	// (0x00022c81) bg_set_opt_pane_cp4_copy1

0x8328,	// (0x0001fb04) list_set_graphic_pane_g1_copy1_ParamLimits

0x8328,	// (0x0001fb04) list_set_graphic_pane_g1_copy1

0xb412,	// (0x00022bee) list_set_graphic_pane_g2_copy1

0x8340,	// (0x0001fb1c) list_set_graphic_pane_t1_copy1_ParamLimits

0x8340,	// (0x0001fb1c) list_set_graphic_pane_t1_copy1

0xe833,	// (0x0002600f) rs_clock_indi_pane_g1

0x2c67,	// (0x0001a443) rs_clock_indi_pane_t1

0x28ce,	// (0x0001a0aa) rs_indi_pane

0x2c75,	// (0x0001a451) rs_indi_pane_g1

0x2c7e,	// (0x0001a45a) rs_indi_pane_g2

0x2c87,	// (0x0001a463) rs_indi_pane_g3

0x0002,

0xfeea,	// (0x000276c6) rs_indi_pane_g

0xc527,	// (0x00023d03) bg_popup_preview_window_pane_cp03

0x2c90,	// (0x0001a46c) popup_fep_tooltip_window_t1

0xf14f,	// (0x0002692b) popup_note2_window_g2_ParamLimits

0xf14f,	// (0x0002692b) popup_note2_window_g2

0x0001,

0xfc88,	// (0x00027464) popup_note2_window_g_ParamLimits

0xfc88,	// (0x00027464) popup_note2_window_g

0x017b,	// (0x00017957) bg_popup_sub_pane_cp11_ParamLimits

0x0188,	// (0x00017964) cell_ai3_links_pane_g1_ParamLimits

0x019f,	// (0x0001797b) cell_ai3_links_pane_t1

0x3839,	// (0x0001b015) set_text_pane_t1_copy1_ParamLimits

0xc438,	// (0x00023c14) cell_graphic_popup_pane_cp2_ParamLimits

0xc438,	// (0x00023c14) cell_graphic_popup_pane_cp2

0x2c9e,	// (0x0001a47a) cell_graphic_popup_pane_g1_cp2

0xb857,	// (0x00023033) cell_graphic_popup_pane_g2_cp2

0x2ca6,	// (0x0001a482) cell_graphic_popup_pane_g3_cp2

0x2cae,	// (0x0001a48a) cell_graphic_popup_pane_t2_cp2

0xb868,	// (0x00023044) grid_highlight_pane_cp3_cp2

0xbe04,	// (0x000235e0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbb02,	// (0x000232de) main_tmo_pane_ParamLimits

0x9ea4,	// (0x00021680) popup_tmo_big_image_note_window

0xae1a,	// (0x000225f6) cell_ai5_widget_list_pane

0xae22,	// (0x000225fe) cell_ai5_widget_lrg_icon_pane

0xb112,	// (0x000228ee) tmo_note_info_pane_t1_ParamLimits

0xb127,	// (0x00022903) tmo_note_info_pane_t2_ParamLimits

0xb13e,	// (0x0002291a) tmo_note_info_pane_t3_ParamLimits

0x2b3a,	// (0x0001a316) tmo_note_info_pane_t4_ParamLimits

0x2b4c,	// (0x0001a328) tmo_note_info_pane_t5_ParamLimits

0xfed8,	// (0x000276b4) tmo_note_info_pane_t_ParamLimits

0xb203,	// (0x000229df) settings_container_pane_ParamLimits

0x2c45,	// (0x0001a421) indicator_popup_pane_cp5

0x2c45,	// (0x0001a421) indicator_popup_pane_cp6

0x810e,	// (0x0001f8ea) list_set_graphic_pane_copy1_ParamLimits

0xb491,	// (0x00022c6d) bg_popup_window_pane_cp23

0x2cbc,	// (0x0001a498) popup_tmo_big_image_note_window_g1

0x2cc6,	// (0x0001a4a2) popup_tmo_big_image_note_window_t1

0x2cd6,	// (0x0001a4b2) popup_tmo_big_image_note_window_t2

0x2ce6,	// (0x0001a4c2) popup_tmo_big_image_note_window_t3

0x0002,

0xfef1,	// (0x000276cd) popup_tmo_big_image_note_window_t

0xb41a,	// (0x00022bf6) cell_ai5_widget_lrg_icon_pane_g1

0xb422,	// (0x00022bfe) cell_ai5_widget_lrg_icon_pane_t1

0xb430,	// (0x00022c0c) cell_ai5_widget_list_row_pane_ParamLimits

0xb430,	// (0x00022c0c) cell_ai5_widget_list_row_pane

0xb449,	// (0x00022c25) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb449,	// (0x00022c25) cell_ai5_widget_list_row_pane_g1

0xb456,	// (0x00022c32) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb456,	// (0x00022c32) cell_ai5_widget_list_row_pane_t1

0xb46e,	// (0x00022c4a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb46e,	// (0x00022c4a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef8,	// (0x000276d4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef8,	// (0x000276d4) cell_ai5_widget_list_row_pane_t

0xb491,	// (0x00022c6d) main_fep_vtchi_ss_pane

0x2cf6,	// (0x0001a4d2) popup_fep_char_pre_window

0x2cfe,	// (0x0001a4da) popup_fep_ituss_window

0x2d09,	// (0x0001a4e5) popup_fep_vkbss_window

0x2d12,	// (0x0001a4ee) grid_vkbss_keypad_pane_ParamLimits

0x2d12,	// (0x0001a4ee) grid_vkbss_keypad_pane

0x2d22,	// (0x0001a4fe) ituss_keypad_pane

0x2d2a,	// (0x0001a506) aid_vkbss_key_offset_ParamLimits

0x2d2a,	// (0x0001a506) aid_vkbss_key_offset

0x2d39,	// (0x0001a515) cell_vkbss_key_pane_ParamLimits

0x2d39,	// (0x0001a515) cell_vkbss_key_pane

0x2d4f,	// (0x0001a52b) bg_cell_vkbss_key_g1_ParamLimits

0x2d4f,	// (0x0001a52b) bg_cell_vkbss_key_g1

0x2d5b,	// (0x0001a537) cell_vkbss_key_3p_pane_ParamLimits

0x2d5b,	// (0x0001a537) cell_vkbss_key_3p_pane

0x2d75,	// (0x0001a551) cell_vkbss_key_g1_ParamLimits

0x2d75,	// (0x0001a551) cell_vkbss_key_g1

0x2d8f,	// (0x0001a56b) cell_vkbss_key_t1_ParamLimits

0x2d8f,	// (0x0001a56b) cell_vkbss_key_t1

0x2dba,	// (0x0001a596) cell_ituss_key_pane_ParamLimits

0x2dba,	// (0x0001a596) cell_ituss_key_pane

0x2dc9,	// (0x0001a5a5) bg_cell_ituss_key_g1_ParamLimits

0x2dc9,	// (0x0001a5a5) bg_cell_ituss_key_g1

0x2dd5,	// (0x0001a5b1) cell_ituss_key_pane_g1_ParamLimits

0x2dd5,	// (0x0001a5b1) cell_ituss_key_pane_g1

0x2de1,	// (0x0001a5bd) cell_ituss_key_pane_g2_ParamLimits

0x2de1,	// (0x0001a5bd) cell_ituss_key_pane_g2

0x0001,

0xfefd,	// (0x000276d9) cell_ituss_key_pane_g_ParamLimits

0xfefd,	// (0x000276d9) cell_ituss_key_pane_g

0x2df4,	// (0x0001a5d0) cell_ituss_key_t1_ParamLimits

0x2df4,	// (0x0001a5d0) cell_ituss_key_t1

0x2e12,	// (0x0001a5ee) cell_ituss_key_t2_ParamLimits

0x2e12,	// (0x0001a5ee) cell_ituss_key_t2

0x2e31,	// (0x0001a60d) cell_ituss_key_t3_ParamLimits

0x2e31,	// (0x0001a60d) cell_ituss_key_t3

0x2e50,	// (0x0001a62c) cell_ituss_key_t4_ParamLimits

0x2e50,	// (0x0001a62c) cell_ituss_key_t4

0x0003,

0xff02,	// (0x000276de) cell_ituss_key_t_ParamLimits

0xff02,	// (0x000276de) cell_ituss_key_t

0x2e6f,	// (0x0001a64b) cell_vkbss_key_3p_pane_g1

0x2e77,	// (0x0001a653) cell_vkbss_key_3p_pane_g2

0x2e7f,	// (0x0001a65b) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x000276e7) cell_vkbss_key_3p_pane_g

0xb491,	// (0x00022c6d) bg_popup_fep_char_preview_window_cp02

0x2e87,	// (0x0001a663) popup_fep_char_pre_window_t1

0xae10,	// (0x000225ec) main_ai5_sk_pane

0x2bc6,	// (0x0001a3a2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb153,	// (0x0002292f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb167,	// (0x00022943) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb176,	// (0x00022952) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee3,	// (0x000276bf) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb189,	// (0x00022965) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbb02,	// (0x000232de) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb480,	// (0x00022c5c) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
