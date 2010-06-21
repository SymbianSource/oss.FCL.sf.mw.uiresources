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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000172e1 };

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
0x7d3e,	// (0x0001f01f) Screen

0x7d48,	// (0x0001f029) application_window_ParamLimits

0x7d48,	// (0x0001f029) application_window

0xb38c,	// (0x0002266d) screen_g1

0x7d76,	// (0x0001f057) area_bottom_pane_ParamLimits

0x7d76,	// (0x0001f057) area_bottom_pane

0xb396,	// (0x00022677) area_top_pane_ParamLimits

0xb396,	// (0x00022677) area_top_pane

0x3eb3,	// (0x0001b194) main_pane_ParamLimits

0x3eb3,	// (0x0001b194) main_pane

0xb40e,	// (0x000226ef) misc_graphics

0x8e28,	// (0x00020109) battery_pane_ParamLimits

0x8e28,	// (0x00020109) battery_pane

0xced5,	// (0x000241b6) bg_status_flat_pane_g8

0xcedd,	// (0x000241be) bg_status_flat_pane_g9

0xc5ee,	// (0x000238cf) context_pane_ParamLimits

0xc5ee,	// (0x000238cf) context_pane

0x8f82,	// (0x00020263) navi_pane_ParamLimits

0x8f82,	// (0x00020263) navi_pane

0x8ff7,	// (0x000202d8) signal_pane_ParamLimits

0x8ff7,	// (0x000202d8) signal_pane

0x0008,

0xf866,	// (0x00026b47) bg_status_flat_pane_g

0x9083,	// (0x00020364) status_pane_g1_ParamLimits

0x9083,	// (0x00020364) status_pane_g1

0x908f,	// (0x00020370) status_pane_g2_ParamLimits

0x908f,	// (0x00020370) status_pane_g2

0xc654,	// (0x00023935) status_pane_g3_ParamLimits

0xc654,	// (0x00023935) status_pane_g3

0x0004,

0xf7a0,	// (0x00026a81) status_pane_g_ParamLimits

0xf7a0,	// (0x00026a81) status_pane_g

0x909b,	// (0x0002037c) title_pane_ParamLimits

0x909b,	// (0x0002037c) title_pane

0x90f6,	// (0x000203d7) uni_indicator_pane_ParamLimits

0x90f6,	// (0x000203d7) uni_indicator_pane

0xc545,	// (0x00023826) bg_list_pane_ParamLimits

0xc545,	// (0x00023826) bg_list_pane

0x7ad0,	// (0x0001edb1) find_pane

0x8809,	// (0x0001faea) listscroll_app_pane_ParamLimits

0x8809,	// (0x0001faea) listscroll_app_pane

0xc565,	// (0x00023846) listscroll_form_pane

0x7ad8,	// (0x0001edb9) listscroll_gen_pane_ParamLimits

0x7ad8,	// (0x0001edb9) listscroll_gen_pane

0x46aa,	// (0x0001b98b) listscroll_set_pane

0x8819,	// (0x0001fafa) main_idle_act_pane

0xc3b0,	// (0x00023691) main_idle_trad_pane

0xc3b0,	// (0x00023691) main_list_empty_pane

0xbb92,	// (0x00022e73) main_midp_pane

0xc57f,	// (0x00023860) main_pane_g1_ParamLimits

0xc57f,	// (0x00023860) main_pane_g1

0x882c,	// (0x0001fb0d) popup_ai_message_window_ParamLimits

0x882c,	// (0x0001fb0d) popup_ai_message_window

0x88b0,	// (0x0001fb91) popup_fep_china_uni_window_ParamLimits

0x88b0,	// (0x0001fb91) popup_fep_china_uni_window

0x4786,	// (0x0001ba67) popup_fep_japan_candidate_window_ParamLimits

0x4786,	// (0x0001ba67) popup_fep_japan_candidate_window

0x47a4,	// (0x0001ba85) popup_fep_japan_predictive_window_ParamLimits

0x47a4,	// (0x0001ba85) popup_fep_japan_predictive_window

0x88ee,	// (0x0001fbcf) popup_find_window

0x8907,	// (0x0001fbe8) popup_grid_graphic_window_ParamLimits

0x8907,	// (0x0001fbe8) popup_grid_graphic_window

0x47fb,	// (0x0001badc) popup_large_graphic_colour_window

0x8983,	// (0x0001fc64) popup_menu_window_ParamLimits

0x8983,	// (0x0001fc64) popup_menu_window

0x8ae1,	// (0x0001fdc2) popup_note_image_window

0x8aa9,	// (0x0001fd8a) popup_note_wait_window_ParamLimits

0x8aa9,	// (0x0001fd8a) popup_note_wait_window

0x8af7,	// (0x0001fdd8) popup_note_window_ParamLimits

0x8af7,	// (0x0001fdd8) popup_note_window

0x8b8b,	// (0x0001fe6c) popup_query_code_window_ParamLimits

0x8b8b,	// (0x0001fe6c) popup_query_code_window

0x49b8,	// (0x0001bc99) popup_query_data_code_window_ParamLimits

0x49b8,	// (0x0001bc99) popup_query_data_code_window

0x8bc3,	// (0x0001fea4) popup_query_data_window_ParamLimits

0x8bc3,	// (0x0001fea4) popup_query_data_window

0x8c37,	// (0x0001ff18) popup_query_sat_info_window_ParamLimits

0x8c37,	// (0x0001ff18) popup_query_sat_info_window

0x8cc4,	// (0x0001ffa5) popup_snote_single_graphic_window_ParamLimits

0x8cc4,	// (0x0001ffa5) popup_snote_single_graphic_window

0x8cc4,	// (0x0001ffa5) popup_snote_single_text_window_ParamLimits

0x8cc4,	// (0x0001ffa5) popup_snote_single_text_window

0x4a27,	// (0x0001bd08) popup_sub_window_general

0x4b2b,	// (0x0001be0c) popup_window_general_ParamLimits

0x4b2b,	// (0x0001be0c) popup_window_general

0xc58d,	// (0x0002386e) power_save_pane

0x86b3,	// (0x0001f994) control_pane_g1_ParamLimits

0x86b3,	// (0x0001f994) control_pane_g1

0x4567,	// (0x0001b848) control_pane_g2_ParamLimits

0x4567,	// (0x0001b848) control_pane_g2

0xc537,	// (0x00023818) control_pane_g3_ParamLimits

0xc537,	// (0x00023818) control_pane_g3

0x0007,

0xf788,	// (0x00026a69) control_pane_g_ParamLimits

0xf788,	// (0x00026a69) control_pane_g

0x870f,	// (0x0001f9f0) control_pane_t1_ParamLimits

0x870f,	// (0x0001f9f0) control_pane_t1

0x876b,	// (0x0001fa4c) control_pane_t2_ParamLimits

0x876b,	// (0x0001fa4c) control_pane_t2

0x0002,

0xf799,	// (0x00026a7a) control_pane_t_ParamLimits

0xf799,	// (0x00026a7a) control_pane_t

0xc4df,	// (0x000237c0) navi_navi_volume_pane_cp1

0xc4e7,	// (0x000237c8) status_small_icon_pane

0xc4ef,	// (0x000237d0) status_small_pane_g1_ParamLimits

0xc4ef,	// (0x000237d0) status_small_pane_g1

0x8632,	// (0x0001f913) status_small_pane_g2_ParamLimits

0x8632,	// (0x0001f913) status_small_pane_g2

0x863e,	// (0x0001f91f) status_small_pane_g3_ParamLimits

0x863e,	// (0x0001f91f) status_small_pane_g3

0x864a,	// (0x0001f92b) status_small_pane_g4_ParamLimits

0x864a,	// (0x0001f92b) status_small_pane_g4

0x8656,	// (0x0001f937) status_small_pane_g5_ParamLimits

0x8656,	// (0x0001f937) status_small_pane_g5

0xc523,	// (0x00023804) status_small_pane_g6_ParamLimits

0xc523,	// (0x00023804) status_small_pane_g6

0x0007,

0xf777,	// (0x00026a58) status_small_pane_g_ParamLimits

0xf777,	// (0x00026a58) status_small_pane_g

0x8685,	// (0x0001f966) status_small_pane_t1

0x869f,	// (0x0001f980) status_small_wait_pane_ParamLimits

0x869f,	// (0x0001f980) status_small_wait_pane

0x84c4,	// (0x0001f7a5) aid_levels_signal_ParamLimits

0x84c4,	// (0x0001f7a5) aid_levels_signal

0x84d8,	// (0x0001f7b9) signal_pane_g1_ParamLimits

0x84d8,	// (0x0001f7b9) signal_pane_g1

0x84f2,	// (0x0001f7d3) signal_pane_g2_ParamLimits

0x84f2,	// (0x0001f7d3) signal_pane_g2

0x0003,

0xf708,	// (0x000269e9) signal_pane_g_ParamLimits

0xf708,	// (0x000269e9) signal_pane_g

0xbf55,	// (0x00023236) context_pane_g1

0x7f0d,	// (0x0001f1ee) title_pane_g1

0x7f4f,	// (0x0001f230) title_pane_t1

0xb424,	// (0x00022705) title_pane_t2

0xb44a,	// (0x0002272b) title_pane_t3

0x0002,

0xf557,	// (0x00026838) title_pane_t

0x911c,	// (0x000203fd) aid_levels_battery_ParamLimits

0x911c,	// (0x000203fd) aid_levels_battery

0x9134,	// (0x00020415) battery_pane_g1_ParamLimits

0x9134,	// (0x00020415) battery_pane_g1

0x914f,	// (0x00020430) battery_pane_g2_ParamLimits

0x914f,	// (0x00020430) battery_pane_g2

0x0001,

0xf7ab,	// (0x00026a8c) battery_pane_g_ParamLimits

0xf7ab,	// (0x00026a8c) battery_pane_g

0x9457,	// (0x00020738) uni_indicator_pane_g1

0x946d,	// (0x0002074e) uni_indicator_pane_g2

0x9483,	// (0x00020764) uni_indicator_pane_g3

0x0005,

0xf90e,	// (0x00026bef) uni_indicator_pane_g

0xbab8,	// (0x00022d99) navi_icon_pane_ParamLimits

0xbab8,	// (0x00022d99) navi_icon_pane

0xb40e,	// (0x000226ef) navi_midp_pane

0xb40e,	// (0x000226ef) navi_navi_pane

0xbab8,	// (0x00022d99) navi_text_pane_ParamLimits

0xbab8,	// (0x00022d99) navi_text_pane

0xb38c,	// (0x0002266d) status_small_wait_pane_g1

0xb75f,	// (0x00022a40) status_small_wait_pane_g2

0x0001,

0xf909,	// (0x00026bea) status_small_wait_pane_g

0x93fd,	// (0x000206de) navi_navi_icon_text_pane

0x9405,	// (0x000206e6) navi_navi_pane_g1_ParamLimits

0x9405,	// (0x000206e6) navi_navi_pane_g1

0x9417,	// (0x000206f8) navi_navi_pane_g2_ParamLimits

0x9417,	// (0x000206f8) navi_navi_pane_g2

0x0001,

0xf8d7,	// (0x00026bb8) navi_navi_pane_g_ParamLimits

0xf8d7,	// (0x00026bb8) navi_navi_pane_g

0x9429,	// (0x0002070a) navi_navi_tabs_pane

0x93fd,	// (0x000206de) navi_navi_text_pane

0x93fd,	// (0x000206de) navi_navi_volume_pane

0xd41b,	// (0x000246fc) navi_text_pane_t1

0xd40f,	// (0x000246f0) navi_icon_pane_g1

0xd363,	// (0x00024644) navi_navi_text_pane_t1

0x4d92,	// (0x0001c073) navi_navi_volume_pane_g1

0x93f4,	// (0x000206d5) volume_small_pane

0x9350,	// (0x00020631) navi_navi_icon_text_pane_g1

0x9358,	// (0x00020639) navi_navi_icon_text_pane_t1

0xcf1d,	// (0x000241fe) navi_tabs_2_long_pane

0xcf1d,	// (0x000241fe) navi_tabs_2_pane

0xcf1d,	// (0x000241fe) navi_tabs_3_long_pane

0xcf1d,	// (0x000241fe) navi_tabs_3_pane

0xcf1d,	// (0x000241fe) navi_tabs_4_pane

0x9330,	// (0x00020611) tabs_2_active_pane_ParamLimits

0x9330,	// (0x00020611) tabs_2_active_pane

0x9340,	// (0x00020621) tabs_2_passive_pane_ParamLimits

0x9340,	// (0x00020621) tabs_2_passive_pane

0x92fe,	// (0x000205df) tabs_3_active_pane_ParamLimits

0x92fe,	// (0x000205df) tabs_3_active_pane

0x930e,	// (0x000205ef) tabs_3_passive_pane_ParamLimits

0x930e,	// (0x000205ef) tabs_3_passive_pane

0x931f,	// (0x00020600) tabs_3_passive_pane_cp_ParamLimits

0x931f,	// (0x00020600) tabs_3_passive_pane_cp

0x92ba,	// (0x0002059b) tabs_4_active_pane_ParamLimits

0x92ba,	// (0x0002059b) tabs_4_active_pane

0x92cb,	// (0x000205ac) tabs_4_passive_pane_ParamLimits

0x92cb,	// (0x000205ac) tabs_4_passive_pane

0x92dc,	// (0x000205bd) tabs_4_passive_pane_cp_ParamLimits

0x92dc,	// (0x000205bd) tabs_4_passive_pane_cp

0x92ed,	// (0x000205ce) tabs_4_passive_pane_cp2_ParamLimits

0x92ed,	// (0x000205ce) tabs_4_passive_pane_cp2

0x929a,	// (0x0002057b) tabs_2_long_active_pane_ParamLimits

0x929a,	// (0x0002057b) tabs_2_long_active_pane

0x92aa,	// (0x0002058b) tabs_2_long_passive_pane_ParamLimits

0x92aa,	// (0x0002058b) tabs_2_long_passive_pane

0x9263,	// (0x00020544) tabs_3_long_active_pane_ParamLimits

0x9263,	// (0x00020544) tabs_3_long_active_pane

0x9276,	// (0x00020557) tabs_3_long_passive_pane_ParamLimits

0x9276,	// (0x00020557) tabs_3_long_passive_pane

0x9287,	// (0x00020568) tabs_3_long_passive_pane_cp_ParamLimits

0x9287,	// (0x00020568) tabs_3_long_passive_pane_cp

0x4c4d,	// (0x0001bf2e) volume_small_pane_g1

0x4c56,	// (0x0001bf37) volume_small_pane_g2

0x4c5f,	// (0x0001bf40) volume_small_pane_g3

0x4c68,	// (0x0001bf49) volume_small_pane_g4

0x4c71,	// (0x0001bf52) volume_small_pane_g5

0x4c7a,	// (0x0001bf5b) volume_small_pane_g6

0x4c83,	// (0x0001bf64) volume_small_pane_g7

0x4c8c,	// (0x0001bf6d) volume_small_pane_g8

0x4c95,	// (0x0001bf76) volume_small_pane_g9

0x4c9e,	// (0x0001bf7f) volume_small_pane_g10

0x0009,

0xf8a3,	// (0x00026b84) volume_small_pane_g

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp2_ParamLimits

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp2

0xb46a,	// (0x0002274b) tabs_3_active_pane_g1

0x7fdc,	// (0x0001f2bd) tabs_3_active_pane_t1

0xb45c,	// (0x0002273d) bg_passive_tab_pane_cp2_ParamLimits

0xb45c,	// (0x0002273d) bg_passive_tab_pane_cp2

0xb46a,	// (0x0002274b) tabs_3_passive_pane_g1

0x7fdc,	// (0x0001f2bd) tabs_3_passive_pane_t1

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp3_ParamLimits

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp3

0xd8a6,	// (0x00024b87) tabs_4_active_pane_g1

0x7ff2,	// (0x0001f2d3) tabs_4_active_pane_t1

0xb45c,	// (0x0002273d) bg_passive_tab_pane_cp3_ParamLimits

0xb45c,	// (0x0002273d) bg_passive_tab_pane_cp3

0xd8a6,	// (0x00024b87) tabs_4_1_passive_pane_g1

0x7ff2,	// (0x0001f2d3) tabs_4_1_passive_pane_t1

0xbb92,	// (0x00022e73) list_highlight_pane_cp2

0x953e,	// (0x0002081f) list_set_pane_ParamLimits

0x953e,	// (0x0002081f) list_set_pane

0x95cc,	// (0x000208ad) main_pane_set_t1_ParamLimits

0x95cc,	// (0x000208ad) main_pane_set_t1

0x95ec,	// (0x000208cd) main_pane_set_t2_ParamLimits

0x95ec,	// (0x000208cd) main_pane_set_t2

0x9600,	// (0x000208e1) main_pane_set_t3_ParamLimits

0x9600,	// (0x000208e1) main_pane_set_t3

0x9612,	// (0x000208f3) main_pane_set_t4_ParamLimits

0x9612,	// (0x000208f3) main_pane_set_t4

0x0003,

0xf973,	// (0x00026c54) main_pane_set_t_ParamLimits

0xf973,	// (0x00026c54) main_pane_set_t

0x9624,	// (0x00020905) setting_code_pane

0x962c,	// (0x0002090d) setting_slider_graphic_pane

0x962c,	// (0x0002090d) setting_slider_pane

0x962c,	// (0x0002090d) setting_text_pane

0x962c,	// (0x0002090d) setting_volume_pane

0x8008,	// (0x0001f2e9) volume_set_pane

0xb472,	// (0x00022753) bg_set_opt_pane_cp

0x40ba,	// (0x0001b39b) setting_slider_pane_t1

0x8010,	// (0x0001f2f1) setting_slider_pane_t2

0x8029,	// (0x0001f30a) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002683f) setting_slider_pane_t

0x4100,	// (0x0001b3e1) slider_set_pane

0xb40e,	// (0x000226ef) bg_set_opt_pane_cp2

0xb480,	// (0x00022761) setting_slider_graphic_pane_g1

0x8040,	// (0x0001f321) setting_slider_graphic_pane_t1

0x804f,	// (0x0001f330) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00026846) setting_slider_graphic_pane_t

0x805e,	// (0x0001f33f) slider_set_pane_cp

0xb40e,	// (0x000226ef) input_focus_pane_cp1

0xd857,	// (0x00024b38) list_set_text_pane

0xb38c,	// (0x0002266d) setting_text_pane_g1

0xb40e,	// (0x000226ef) input_focus_pane_cp2

0xb38c,	// (0x0002266d) setting_code_pane_g1

0xb489,	// (0x0002276a) setting_code_pane_t1

0x7545,	// (0x0001e826) set_text_pane_t1_ParamLimits

0x7545,	// (0x0001e826) set_text_pane_t1

0xba67,	// (0x00022d48) set_opt_bg_pane_g1

0xba6f,	// (0x00022d50) set_opt_bg_pane_g2

0x94fe,	// (0x000207df) set_opt_bg_pane_g3

0xba7f,	// (0x00022d60) set_opt_bg_pane_g4

0xba87,	// (0x00022d68) set_opt_bg_pane_g5

0xba8f,	// (0x00022d70) set_opt_bg_pane_g6

0x9506,	// (0x000207e7) set_opt_bg_pane_g7

0x950e,	// (0x000207ef) set_opt_bg_pane_g8

0x9516,	// (0x000207f7) set_opt_bg_pane_g9

0x0008,

0xf960,	// (0x00026c41) set_opt_bg_pane_g

0xd84a,	// (0x00024b2b) slider_set_pane_g1

0x4e07,	// (0x0001c0e8) slider_set_pane_g2

0x0006,

0xf951,	// (0x00026c32) slider_set_pane_g

0x9498,	// (0x00020779) volume_set_pane_g1

0x94a0,	// (0x00020781) volume_set_pane_g2

0x94a8,	// (0x00020789) volume_set_pane_g3

0x94b0,	// (0x00020791) volume_set_pane_g4

0x94b8,	// (0x00020799) volume_set_pane_g5

0x94c0,	// (0x000207a1) volume_set_pane_g6

0x94c8,	// (0x000207a9) volume_set_pane_g7

0x94d0,	// (0x000207b1) volume_set_pane_g8

0x94d8,	// (0x000207b9) volume_set_pane_g9

0x94e0,	// (0x000207c1) volume_set_pane_g10

0x0009,

0xf929,	// (0x00026c0a) volume_set_pane_g

0x8066,	// (0x0001f347) indicator_pane_ParamLimits

0x8066,	// (0x0001f347) indicator_pane

0x808e,	// (0x0001f36f) main_idle_pane_g2_ParamLimits

0x808e,	// (0x0001f36f) main_idle_pane_g2

0x80be,	// (0x0001f39f) main_pane_idle_g1_ParamLimits

0x80be,	// (0x0001f39f) main_pane_idle_g1

0xb497,	// (0x00022778) popup_clock_digital_analogue_window_ParamLimits

0xb497,	// (0x00022778) popup_clock_digital_analogue_window

0x80e3,	// (0x0001f3c4) soft_indicator_pane_ParamLimits

0x80e3,	// (0x0001f3c4) soft_indicator_pane

0x80fd,	// (0x0001f3de) wallpaper_pane_ParamLimits

0x80fd,	// (0x0001f3de) wallpaper_pane

0xb38c,	// (0x0002266d) wallpaper_pane_g1

0x810f,	// (0x0001f3f0) indicator_pane_g1_ParamLimits

0x810f,	// (0x0001f3f0) indicator_pane_g1

0xd9bc,	// (0x00024c9d) navi_navi_icon_text_pane_srt_g1

0xb4c5,	// (0x000227a6) soft_indicator_pane_t1

0xb4df,	// (0x000227c0) aid_ps_area_pane

0x8128,	// (0x0001f409) aid_ps_clock_pane

0xb4f0,	// (0x000227d1) aid_ps_indicator_pane

0xb4fc,	// (0x000227dd) indicator_ps_pane_ParamLimits

0xb4fc,	// (0x000227dd) indicator_ps_pane

0xb50b,	// (0x000227ec) power_save_pane_g1_ParamLimits

0xb50b,	// (0x000227ec) power_save_pane_g1

0xb517,	// (0x000227f8) power_save_pane_g2_ParamLimits

0xb517,	// (0x000227f8) power_save_pane_g2

0x3e2f,	// (0x0001b110) aid_navinavi_width_pane

0xb4df,	// (0x000227c0) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002684b) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002684b) power_save_pane_g

0xb525,	// (0x00022806) power_save_pane_t1_ParamLimits

0xb525,	// (0x00022806) power_save_pane_t1

0x8128,	// (0x0001f409) aid_ps_clock_pane_ParamLimits

0xb4f0,	// (0x000227d1) aid_ps_indicator_pane_ParamLimits

0xb537,	// (0x00022818) power_save_pane_t4_ParamLimits

0xb537,	// (0x00022818) power_save_pane_t4

0x0001,

0xf56f,	// (0x00026850) power_save_pane_t_ParamLimits

0xf56f,	// (0x00026850) power_save_pane_t

0xb561,	// (0x00022842) power_save_t3_ParamLimits

0xb561,	// (0x00022842) power_save_t3

0xb54c,	// (0x0002282d) power_save_t2_ParamLimits

0xb54c,	// (0x0002282d) power_save_t2

0xb576,	// (0x00022857) indicator_ps_pane_g1

0x8134,	// (0x0001f415) ai_gene_pane_ParamLimits

0x8134,	// (0x0001f415) ai_gene_pane

0x814b,	// (0x0001f42c) ai_links_pane_ParamLimits

0x814b,	// (0x0001f42c) ai_links_pane

0x815d,	// (0x0001f43e) indicator_pane_cp1_ParamLimits

0x815d,	// (0x0001f43e) indicator_pane_cp1

0x816c,	// (0x0001f44d) main_pane_idle_g1_cp_ParamLimits

0x816c,	// (0x0001f44d) main_pane_idle_g1_cp

0xb57f,	// (0x00022860) popup_ai_links_title_window

0x8184,	// (0x0001f465) soft_indicator_pane_cp1_ParamLimits

0x8184,	// (0x0001f465) soft_indicator_pane_cp1

0xd6a0,	// (0x00024981) ai_links_pane_g1

0xd6a9,	// (0x0002498a) grid_ai_links_pane

0x944e,	// (0x0002072f) ai_gene_pane_1

0xd68e,	// (0x0002496f) ai_gene_pane_2

0xd697,	// (0x00024978) list_highlight_pane_cp4

0x9432,	// (0x00020713) cell_ai_link_pane_ParamLimits

0x9432,	// (0x00020713) cell_ai_link_pane

0xd686,	// (0x00024967) cell_ai_link_pane_g1

0xb75f,	// (0x00022a40) cell_ai_link_pane_g2

0x0001,

0xf904,	// (0x00026be5) cell_ai_link_pane_g

0xb40e,	// (0x000226ef) grid_highlight_cp2

0xb40e,	// (0x000226ef) bg_popup_sub_pane_cp1

0xb596,	// (0x00022877) popup_ai_links_title_window_t1

0xd5d8,	// (0x000248b9) ai_gene_pane_1_g1_ParamLimits

0xd5d8,	// (0x000248b9) ai_gene_pane_1_g1

0xd5e4,	// (0x000248c5) ai_gene_pane_1_g2_ParamLimits

0xd5e4,	// (0x000248c5) ai_gene_pane_1_g2

0x0001,

0xf8fa,	// (0x00026bdb) ai_gene_pane_1_g_ParamLimits

0xf8fa,	// (0x00026bdb) ai_gene_pane_1_g

0xd5f1,	// (0x000248d2) ai_gene_pane_1_t1_ParamLimits

0xd5f1,	// (0x000248d2) ai_gene_pane_1_t1

0xd625,	// (0x00024906) grid_ai_soft_ind_pane

0xd5c3,	// (0x000248a4) ai_gene_pane_2_t1_ParamLimits

0xd5c3,	// (0x000248a4) ai_gene_pane_2_t1

0x8198,	// (0x0001f479) main_pane_empty_t1_ParamLimits

0x8198,	// (0x0001f479) main_pane_empty_t1

0x81b5,	// (0x0001f496) main_pane_empty_t2_ParamLimits

0x81b5,	// (0x0001f496) main_pane_empty_t2

0x81cd,	// (0x0001f4ae) main_pane_empty_t3_ParamLimits

0x81cd,	// (0x0001f4ae) main_pane_empty_t3

0x81e0,	// (0x0001f4c1) main_pane_empty_t4_ParamLimits

0x81e0,	// (0x0001f4c1) main_pane_empty_t4

0x81f3,	// (0x0001f4d4) main_pane_empty_t5_ParamLimits

0x81f3,	// (0x0001f4d4) main_pane_empty_t5

0x0004,

0xf574,	// (0x00026855) main_pane_empty_t_ParamLimits

0xf574,	// (0x00026855) main_pane_empty_t

0xbab8,	// (0x00022d99) bg_popup_window_pane_ParamLimits

0xbab8,	// (0x00022d99) bg_popup_window_pane

0xd372,	// (0x00024653) find_popup_pane_cp2_ParamLimits

0xd372,	// (0x00024653) find_popup_pane_cp2

0xd37e,	// (0x0002465f) heading_pane_ParamLimits

0xd37e,	// (0x0002465f) heading_pane

0xb40e,	// (0x000226ef) bg_popup_sub_pane

0x9375,	// (0x00020656) bg_popup_window_pane_g1_ParamLimits

0x9375,	// (0x00020656) bg_popup_window_pane_g1

0x9384,	// (0x00020665) bg_popup_window_pane_g2_ParamLimits

0x9384,	// (0x00020665) bg_popup_window_pane_g2

0x9390,	// (0x00020671) bg_popup_window_pane_g3_ParamLimits

0x9390,	// (0x00020671) bg_popup_window_pane_g3

0x939c,	// (0x0002067d) bg_popup_window_pane_g4_ParamLimits

0x939c,	// (0x0002067d) bg_popup_window_pane_g4

0x93ab,	// (0x0002068c) bg_popup_window_pane_g5_ParamLimits

0x93ab,	// (0x0002068c) bg_popup_window_pane_g5

0x93bb,	// (0x0002069c) bg_popup_window_pane_g6_ParamLimits

0x93bb,	// (0x0002069c) bg_popup_window_pane_g6

0x93c7,	// (0x000206a8) bg_popup_window_pane_g7_ParamLimits

0x93c7,	// (0x000206a8) bg_popup_window_pane_g7

0x93d6,	// (0x000206b7) bg_popup_window_pane_g8_ParamLimits

0x93d6,	// (0x000206b7) bg_popup_window_pane_g8

0x93e5,	// (0x000206c6) bg_popup_window_pane_g9_ParamLimits

0x93e5,	// (0x000206c6) bg_popup_window_pane_g9

0xd357,	// (0x00024638) bg_popup_window_pane_g10_ParamLimits

0xd357,	// (0x00024638) bg_popup_window_pane_g10

0x0009,

0xf8c2,	// (0x00026ba3) bg_popup_window_pane_g_ParamLimits

0xf8c2,	// (0x00026ba3) bg_popup_window_pane_g

0xd30e,	// (0x000245ef) bg_popup_heading_pane_ParamLimits

0xd30e,	// (0x000245ef) bg_popup_heading_pane

0x4e8f,	// (0x0001c170) tabs_4_passive_pane_cp_srt_ParamLimits

0x4e8f,	// (0x0001c170) tabs_4_passive_pane_cp_srt

0x4ea1,	// (0x0001c182) tabs_4_passive_pane_srt_ParamLimits

0xd322,	// (0x00024603) heading_pane_g2

0x4ea1,	// (0x0001c182) tabs_4_passive_pane_srt

0xc7e6,	// (0x00023ac7) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc7e6,	// (0x00023ac7) bg_passive_tab_pane_cp3_srt

0xd32a,	// (0x0002460b) heading_pane_t1_ParamLimits

0xd32a,	// (0x0002460b) heading_pane_t1

0xd341,	// (0x00024622) heading_pane_t2_ParamLimits

0xd341,	// (0x00024622) heading_pane_t2

0x0001,

0xf8bd,	// (0x00026b9e) heading_pane_t_ParamLimits

0xf8bd,	// (0x00026b9e) heading_pane_t

0xce9d,	// (0x0002417e) bg_popup_heading_pane_g1

0xcf2e,	// (0x0002420f) bg_popup_heading_pane_g2

0xcf36,	// (0x00024217) bg_popup_heading_pane_g3

0xcf3e,	// (0x0002421f) bg_popup_heading_pane_g4

0xcf46,	// (0x00024227) bg_popup_heading_pane_g5

0xcf4e,	// (0x0002422f) bg_popup_heading_pane_g6

0xcf56,	// (0x00024237) bg_popup_heading_pane_g7

0xcf5e,	// (0x0002423f) bg_popup_heading_pane_g8

0xcf66,	// (0x00024247) bg_popup_heading_pane_g9

0x0008,

0xf879,	// (0x00026b5a) bg_popup_heading_pane_g

0xc73c,	// (0x00023a1d) bg_popup_sub_pane_g1

0xc744,	// (0x00023a25) bg_popup_sub_pane_g2

0xc74c,	// (0x00023a2d) bg_popup_sub_pane_g3

0xc754,	// (0x00023a35) bg_popup_sub_pane_g4

0xc75c,	// (0x00023a3d) bg_popup_sub_pane_g5

0xc764,	// (0x00023a45) bg_popup_sub_pane_g6

0xc76c,	// (0x00023a4d) bg_popup_sub_pane_g7

0xc774,	// (0x00023a55) bg_popup_sub_pane_g8

0xc77c,	// (0x00023a5d) bg_popup_sub_pane_g9

0x0008,

0xf853,	// (0x00026b34) bg_popup_sub_pane_g

0xb45c,	// (0x0002273d) bg_popup_window_pane_cp5_ParamLimits

0xb45c,	// (0x0002273d) bg_popup_window_pane_cp5

0xb5b3,	// (0x00022894) popup_note_window_g1_ParamLimits

0xb5b3,	// (0x00022894) popup_note_window_g1

0xb5bf,	// (0x000228a0) popup_note_window_t1_ParamLimits

0xb5bf,	// (0x000228a0) popup_note_window_t1

0xb5d5,	// (0x000228b6) popup_note_window_t2_ParamLimits

0xb5d5,	// (0x000228b6) popup_note_window_t2

0xb5eb,	// (0x000228cc) popup_note_window_t3_ParamLimits

0xb5eb,	// (0x000228cc) popup_note_window_t3

0xb601,	// (0x000228e2) popup_note_window_t4_ParamLimits

0xb601,	// (0x000228e2) popup_note_window_t4

0xb629,	// (0x0002290a) popup_note_window_t5_ParamLimits

0xb629,	// (0x0002290a) popup_note_window_t5

0x0004,

0xf57f,	// (0x00026860) popup_note_window_t_ParamLimits

0xf57f,	// (0x00026860) popup_note_window_t

0xb673,	// (0x00022954) bg_popup_window_pane_cp6_ParamLimits

0xb673,	// (0x00022954) bg_popup_window_pane_cp6

0xce19,	// (0x000240fa) popup_note_image_window_g1_ParamLimits

0xce19,	// (0x000240fa) popup_note_image_window_g1

0xce25,	// (0x00024106) popup_note_image_window_g2_ParamLimits

0xce25,	// (0x00024106) popup_note_image_window_g2

0x0001,

0xf847,	// (0x00026b28) popup_note_image_window_g_ParamLimits

0xf847,	// (0x00026b28) popup_note_image_window_g

0xce3e,	// (0x0002411f) popup_note_image_window_t1_ParamLimits

0xce3e,	// (0x0002411f) popup_note_image_window_t1

0xce57,	// (0x00024138) popup_note_image_window_t2_ParamLimits

0xce57,	// (0x00024138) popup_note_image_window_t2

0xce70,	// (0x00024151) popup_note_image_window_t3_ParamLimits

0xce70,	// (0x00024151) popup_note_image_window_t3

0x0002,

0xf84c,	// (0x00026b2d) popup_note_image_window_t_ParamLimits

0xf84c,	// (0x00026b2d) popup_note_image_window_t

0xcd04,	// (0x00023fe5) bg_popup_window_pane_cp7_ParamLimits

0xcd04,	// (0x00023fe5) bg_popup_window_pane_cp7

0xcd34,	// (0x00024015) popup_note_wait_window_g1_ParamLimits

0xcd34,	// (0x00024015) popup_note_wait_window_g1

0xcd40,	// (0x00024021) popup_note_wait_window_g2_ParamLimits

0xcd40,	// (0x00024021) popup_note_wait_window_g2

0x0002,

0xf835,	// (0x00026b16) popup_note_wait_window_g_ParamLimits

0xf835,	// (0x00026b16) popup_note_wait_window_g

0xcd58,	// (0x00024039) popup_note_wait_window_t1_ParamLimits

0xcd58,	// (0x00024039) popup_note_wait_window_t1

0xcd7f,	// (0x00024060) popup_note_wait_window_t2_ParamLimits

0xcd7f,	// (0x00024060) popup_note_wait_window_t2

0xcd9c,	// (0x0002407d) popup_note_wait_window_t3_ParamLimits

0xcd9c,	// (0x0002407d) popup_note_wait_window_t3

0xcdaf,	// (0x00024090) popup_note_wait_window_t4_ParamLimits

0xcdaf,	// (0x00024090) popup_note_wait_window_t4

0x0004,

0xf83c,	// (0x00026b1d) popup_note_wait_window_t_ParamLimits

0xf83c,	// (0x00026b1d) popup_note_wait_window_t

0xcdd4,	// (0x000240b5) wait_bar_pane_ParamLimits

0xcdd4,	// (0x000240b5) wait_bar_pane

0xb40e,	// (0x000226ef) wait_anim_pane

0xb40e,	// (0x000226ef) wait_border_pane

0xb38c,	// (0x0002266d) wait_anim_pane_g1

0xb38c,	// (0x0002266d) wait_anim_pane_g2

0x0001,

0xf703,	// (0x000269e4) wait_anim_pane_g

0xccb4,	// (0x00023f95) wait_border_pane_g1

0xccbd,	// (0x00023f9e) wait_border_pane_g2

0xccc6,	// (0x00023fa7) wait_border_pane_g3

0x0002,

0xf82e,	// (0x00026b0f) wait_border_pane_g

0xcb24,	// (0x00023e05) bg_popup_window_pane_cp16_ParamLimits

0xcb24,	// (0x00023e05) bg_popup_window_pane_cp16

0xcc24,	// (0x00023f05) indicator_popup_pane_cp4_ParamLimits

0xcc24,	// (0x00023f05) indicator_popup_pane_cp4

0xcc38,	// (0x00023f19) popup_query_data_window_t1_ParamLimits

0xcc38,	// (0x00023f19) popup_query_data_window_t1

0xcc4a,	// (0x00023f2b) popup_query_data_window_t2_ParamLimits

0xcc4a,	// (0x00023f2b) popup_query_data_window_t2

0xcc63,	// (0x00023f44) popup_query_data_window_t3_ParamLimits

0xcc63,	// (0x00023f44) popup_query_data_window_t3

0x0002,

0xf827,	// (0x00026b08) popup_query_data_window_t_ParamLimits

0xf827,	// (0x00026b08) popup_query_data_window_t

0xcc7d,	// (0x00023f5e) query_popup_data_pane_ParamLimits

0xcc7d,	// (0x00023f5e) query_popup_data_pane

0xcc91,	// (0x00023f72) query_popup_data_pane_cp1_ParamLimits

0xcc91,	// (0x00023f72) query_popup_data_pane_cp1

0xcb24,	// (0x00023e05) bg_popup_window_pane_cp10_ParamLimits

0xcb24,	// (0x00023e05) bg_popup_window_pane_cp10

0xcb56,	// (0x00023e37) indicator_popup_pane_ParamLimits

0xcb56,	// (0x00023e37) indicator_popup_pane

0xcb78,	// (0x00023e59) popup_query_code_window_t1_ParamLimits

0xcb78,	// (0x00023e59) popup_query_code_window_t1

0xcb92,	// (0x00023e73) popup_query_code_window_t2_ParamLimits

0xcb92,	// (0x00023e73) popup_query_code_window_t2

0xcbdb,	// (0x00023ebc) popup_query_code_window_t3_ParamLimits

0xcbdb,	// (0x00023ebc) popup_query_code_window_t3

0x0002,

0xf820,	// (0x00026b01) popup_query_code_window_t_ParamLimits

0xf820,	// (0x00026b01) popup_query_code_window_t

0xcc0a,	// (0x00023eeb) query_popup_pane_ParamLimits

0xcc0a,	// (0x00023eeb) query_popup_pane

0xb673,	// (0x00022954) bg_popup_window_pane_cp15_ParamLimits

0xb673,	// (0x00022954) bg_popup_window_pane_cp15

0xb691,	// (0x00022972) indicator_popup_pane_cp1_ParamLimits

0xb691,	// (0x00022972) indicator_popup_pane_cp1

0xb6a4,	// (0x00022985) indicator_popup_pane_cp2_ParamLimits

0xb6a4,	// (0x00022985) indicator_popup_pane_cp2

0xb6b7,	// (0x00022998) popup_query_data_code_window_g1_ParamLimits

0xb6b7,	// (0x00022998) popup_query_data_code_window_g1

0xb6ca,	// (0x000229ab) popup_query_data_code_window_t1_ParamLimits

0xb6ca,	// (0x000229ab) popup_query_data_code_window_t1

0xb6dc,	// (0x000229bd) popup_query_data_code_window_t2_ParamLimits

0xb6dc,	// (0x000229bd) popup_query_data_code_window_t2

0xb6ee,	// (0x000229cf) popup_query_data_code_window_t3_ParamLimits

0xb6ee,	// (0x000229cf) popup_query_data_code_window_t3

0xb704,	// (0x000229e5) popup_query_data_code_window_t4_ParamLimits

0xb704,	// (0x000229e5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002686b) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002686b) popup_query_data_code_window_t

0xc231,	// (0x00023512) list_single_midp_graphic_pane_g3

0xb71c,	// (0x000229fd) query_popup_data_pane_cp2_ParamLimits

0xb72f,	// (0x00022a10) query_popup_pane_cp2_ParamLimits

0xb72f,	// (0x00022a10) query_popup_pane_cp2

0xb40e,	// (0x000226ef) bg_popup_window_pane_cp11

0xcb10,	// (0x00023df1) heading_pane_cp5

0xb7bb,	// (0x00022a9c) listscroll_popup_info_pane

0xb40e,	// (0x000226ef) input_focus_pane_cp3

0xb742,	// (0x00022a23) query_popup_pane_t1

0xb750,	// (0x00022a31) list_popup_info_pane_ParamLimits

0xb750,	// (0x00022a31) list_popup_info_pane

0xb75f,	// (0x00022a40) listscroll_popup_info_pane_g1

0xb767,	// (0x00022a48) scroll_pane_cp7

0xb76f,	// (0x00022a50) popup_info_list_pane_t1_ParamLimits

0xb76f,	// (0x00022a50) popup_info_list_pane_t1

0xb789,	// (0x00022a6a) popup_info_list_pane_t2_ParamLimits

0xb789,	// (0x00022a6a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00026874) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00026874) popup_info_list_pane_t

0xb40e,	// (0x000226ef) bg_popup_window_pane_cp12

0xd9d6,	// (0x00024cb7) find_popup_pane

0xb472,	// (0x00022753) bg_popup_window_pane_cp3

0xb7a3,	// (0x00022a84) heading_pane_cp3

0xb7af,	// (0x00022a90) listscroll_popup_graphic_pane

0xb40e,	// (0x000226ef) bg_popup_window_pane_cp4

0x8256,	// (0x0001f537) heading_pane_cp4

0xb7bb,	// (0x00022a9c) listscroll_popup_colour_pane

0xb7c3,	// (0x00022aa4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb7c3,	// (0x00022aa4) cell_large_graphic_colour_none_popup_pane

0x825e,	// (0x0001f53f) grid_large_graphic_colour_popup_pane_ParamLimits

0x825e,	// (0x0001f53f) grid_large_graphic_colour_popup_pane

0x827a,	// (0x0001f55b) listscroll_popup_colour_pane_g1_ParamLimits

0x827a,	// (0x0001f55b) listscroll_popup_colour_pane_g1

0x8291,	// (0x0001f572) listscroll_popup_colour_pane_g2_ParamLimits

0x8291,	// (0x0001f572) listscroll_popup_colour_pane_g2

0xb7d3,	// (0x00022ab4) listscroll_popup_colour_pane_g3_ParamLimits

0xb7d3,	// (0x00022ab4) listscroll_popup_colour_pane_g3

0x82a5,	// (0x0001f586) listscroll_popup_colour_pane_g4_ParamLimits

0x82a5,	// (0x0001f586) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00026879) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00026879) listscroll_popup_colour_pane_g

0xb7e3,	// (0x00022ac4) scroll_pane_cp6_ParamLimits

0xb7e3,	// (0x00022ac4) scroll_pane_cp6

0x82b4,	// (0x0001f595) cell_large_graphic_colour_popup_pane_ParamLimits

0x82b4,	// (0x0001f595) cell_large_graphic_colour_popup_pane

0xb7f5,	// (0x00022ad6) cell_large_graphic_colour_none_popup_pane_t1

0xb40e,	// (0x000226ef) grid_highlight_pane_cp5

0xb804,	// (0x00022ae5) cell_large_graphic_colour_popup_pane_g1

0xb80c,	// (0x00022aed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00026882) cell_large_graphic_colour_popup_pane_g

0xb814,	// (0x00022af5) cell_large_graphic_colour_popup_pane_g2_copy1

0xb81d,	// (0x00022afe) grid_highlight_pane_cp4

0xb825,	// (0x00022b06) bg_popup_window_pane_cp8_ParamLimits

0xb825,	// (0x00022b06) bg_popup_window_pane_cp8

0xb840,	// (0x00022b21) popup_snote_single_text_window_g1_ParamLimits

0xb840,	// (0x00022b21) popup_snote_single_text_window_g1

0xb852,	// (0x00022b33) popup_snote_single_text_window_t1_ParamLimits

0xb852,	// (0x00022b33) popup_snote_single_text_window_t1

0xb865,	// (0x00022b46) popup_snote_single_text_window_t2_ParamLimits

0xb865,	// (0x00022b46) popup_snote_single_text_window_t2

0xb878,	// (0x00022b59) popup_snote_single_text_window_t3_ParamLimits

0xb878,	// (0x00022b59) popup_snote_single_text_window_t3

0xb8b1,	// (0x00022b92) popup_snote_single_text_window_t4_ParamLimits

0xb8b1,	// (0x00022b92) popup_snote_single_text_window_t4

0xb8e5,	// (0x00022bc6) popup_snote_single_text_window_t5_ParamLimits

0xb8e5,	// (0x00022bc6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00026887) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00026887) popup_snote_single_text_window_t

0xb914,	// (0x00022bf5) bg_popup_window_pane_cp9_ParamLimits

0xb914,	// (0x00022bf5) bg_popup_window_pane_cp9

0xb840,	// (0x00022b21) popup_snote_single_graphic_window_g1_ParamLimits

0xb840,	// (0x00022b21) popup_snote_single_graphic_window_g1

0xb922,	// (0x00022c03) popup_snote_single_graphic_window_g2_ParamLimits

0xb922,	// (0x00022c03) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00026892) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00026892) popup_snote_single_graphic_window_g

0xb92e,	// (0x00022c0f) popup_snote_single_graphic_window_t1_ParamLimits

0xb92e,	// (0x00022c0f) popup_snote_single_graphic_window_t1

0xb941,	// (0x00022c22) popup_snote_single_graphic_window_t2_ParamLimits

0xb941,	// (0x00022c22) popup_snote_single_graphic_window_t2

0xb878,	// (0x00022b59) popup_snote_single_graphic_window_t3_ParamLimits

0xb878,	// (0x00022b59) popup_snote_single_graphic_window_t3

0xb8b1,	// (0x00022b92) popup_snote_single_graphic_window_t4_ParamLimits

0xb8b1,	// (0x00022b92) popup_snote_single_graphic_window_t4

0xb8e5,	// (0x00022bc6) popup_snote_single_graphic_window_t5_ParamLimits

0xb8e5,	// (0x00022bc6) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00026897) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00026897) popup_snote_single_graphic_window_t

0x9727,	// (0x00020a08) grid_graphic_popup_pane_ParamLimits

0x9727,	// (0x00020a08) grid_graphic_popup_pane

0x974a,	// (0x00020a2b) listscroll_popup_graphic_pane_g1_ParamLimits

0x974a,	// (0x00020a2b) listscroll_popup_graphic_pane_g1

0x975e,	// (0x00020a3f) listscroll_popup_graphic_pane_g2_ParamLimits

0x975e,	// (0x00020a3f) listscroll_popup_graphic_pane_g2

0x0001,

0xf99d,	// (0x00026c7e) listscroll_popup_graphic_pane_g_ParamLimits

0xf99d,	// (0x00026c7e) listscroll_popup_graphic_pane_g

0xd8d0,	// (0x00024bb1) scroll_pane_cp5

0x96e2,	// (0x000209c3) cell_graphic_popup_pane_ParamLimits

0x96e2,	// (0x000209c3) cell_graphic_popup_pane

0xd97f,	// (0x00024c60) cell_graphic_popup_pane_g1

0xd987,	// (0x00024c68) cell_graphic_popup_pane_g2

0xb814,	// (0x00022af5) cell_graphic_popup_pane_g3

0x0002,

0xf996,	// (0x00026c77) cell_graphic_popup_pane_g

0xd990,	// (0x00024c71) cell_graphic_popup_pane_t2

0xb81d,	// (0x00022afe) grid_highlight_pane_cp3

0xb966,	// (0x00022c47) list_gen_pane_ParamLimits

0xb966,	// (0x00022c47) list_gen_pane

0xb98f,	// (0x00022c70) scroll_pane

0x96b5,	// (0x00020996) bg_list_pane_g1_ParamLimits

0x96b5,	// (0x00020996) bg_list_pane_g1

0xd936,	// (0x00024c17) bg_list_pane_g2_ParamLimits

0xd936,	// (0x00024c17) bg_list_pane_g2

0xd949,	// (0x00024c2a) bg_list_pane_g3_ParamLimits

0xd949,	// (0x00024c2a) bg_list_pane_g3

0xd95b,	// (0x00024c3c) bg_list_pane_g4_ParamLimits

0xd95b,	// (0x00024c3c) bg_list_pane_g4

0x96d0,	// (0x000209b1) bg_list_pane_g5_ParamLimits

0x96d0,	// (0x000209b1) bg_list_pane_g5

0x0004,

0xf98b,	// (0x00026c6c) bg_list_pane_g_ParamLimits

0xf98b,	// (0x00026c6c) bg_list_pane_g

0x9659,	// (0x0002093a) list_double2_graphic_large_graphic_pane_ParamLimits

0x9659,	// (0x0002093a) list_double2_graphic_large_graphic_pane

0x9659,	// (0x0002093a) list_double2_graphic_pane_ParamLimits

0x9659,	// (0x0002093a) list_double2_graphic_pane

0x9659,	// (0x0002093a) list_double2_large_graphic_pane_ParamLimits

0x9659,	// (0x0002093a) list_double2_large_graphic_pane

0x966b,	// (0x0002094c) list_double2_pane_ParamLimits

0x966b,	// (0x0002094c) list_double2_pane

0x9659,	// (0x0002093a) list_double_graphic_heading_pane_ParamLimits

0x9659,	// (0x0002093a) list_double_graphic_heading_pane

0x9659,	// (0x0002093a) list_double_graphic_pane_ParamLimits

0x9659,	// (0x0002093a) list_double_graphic_pane

0x9659,	// (0x0002093a) list_double_heading_pane_ParamLimits

0x9659,	// (0x0002093a) list_double_heading_pane

0x9659,	// (0x0002093a) list_double_large_graphic_pane_ParamLimits

0x9659,	// (0x0002093a) list_double_large_graphic_pane

0x9659,	// (0x0002093a) list_double_number_pane_ParamLimits

0x9659,	// (0x0002093a) list_double_number_pane

0x9659,	// (0x0002093a) list_double_pane_ParamLimits

0x9659,	// (0x0002093a) list_double_pane

0x9659,	// (0x0002093a) list_double_time_pane_ParamLimits

0x9659,	// (0x0002093a) list_double_time_pane

0x9659,	// (0x0002093a) list_setting_number_pane_ParamLimits

0x9659,	// (0x0002093a) list_setting_number_pane

0x9659,	// (0x0002093a) list_setting_pane_ParamLimits

0x9659,	// (0x0002093a) list_setting_pane

0x7b40,	// (0x0001ee21) list_single_2graphic_pane_ParamLimits

0x7b40,	// (0x0001ee21) list_single_2graphic_pane

0x7b40,	// (0x0001ee21) list_single_graphic_heading_pane_ParamLimits

0x7b40,	// (0x0001ee21) list_single_graphic_heading_pane

0x7b40,	// (0x0001ee21) list_single_graphic_pane_ParamLimits

0x7b40,	// (0x0001ee21) list_single_graphic_pane

0x7b40,	// (0x0001ee21) list_single_heading_pane_ParamLimits

0x7b40,	// (0x0001ee21) list_single_heading_pane

0x9659,	// (0x0002093a) list_single_large_graphic_pane_ParamLimits

0x9659,	// (0x0002093a) list_single_large_graphic_pane

0x7b40,	// (0x0001ee21) list_single_number_heading_pane_ParamLimits

0x7b40,	// (0x0001ee21) list_single_number_heading_pane

0x7b40,	// (0x0001ee21) list_single_number_pane_ParamLimits

0x7b40,	// (0x0001ee21) list_single_number_pane

0x7b40,	// (0x0001ee21) list_single_pane_ParamLimits

0x7b40,	// (0x0001ee21) list_single_pane

0xb40e,	// (0x000226ef) list_highlight_pane_cp1

0x35a2,	// (0x0001a883) list_single_pane_g1_ParamLimits

0x35a2,	// (0x0001a883) list_single_pane_g1

0x35ae,	// (0x0001a88f) list_single_pane_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000268a9) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000268a9) list_single_pane_g

0x3825,	// (0x0001ab06) list_single_pane_t1_ParamLimits

0x3825,	// (0x0001ab06) list_single_pane_t1

0x35a2,	// (0x0001a883) list_single_number_pane_g1_ParamLimits

0x35a2,	// (0x0001a883) list_single_number_pane_g1

0x35ae,	// (0x0001a88f) list_single_number_pane_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000268a9) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000268a9) list_single_number_pane_g

0x3600,	// (0x0001a8e1) list_single_number_pane_t1_ParamLimits

0x3600,	// (0x0001a8e1) list_single_number_pane_t1

0x7b03,	// (0x0001ede4) list_single_number_pane_t2_ParamLimits

0x7b03,	// (0x0001ede4) list_single_number_pane_t2

0x0001,

0xf94c,	// (0x00026c2d) list_single_number_pane_t_ParamLimits

0xf94c,	// (0x00026c2d) list_single_number_pane_t

0x2e77,	// (0x0001a158) list_single_graphic_pane_g1_ParamLimits

0x2e77,	// (0x0001a158) list_single_graphic_pane_g1

0x35a2,	// (0x0001a883) list_single_graphic_pane_g2_ParamLimits

0x35a2,	// (0x0001a883) list_single_graphic_pane_g2

0x35ae,	// (0x0001a88f) list_single_graphic_pane_g3_ParamLimits

0x35ae,	// (0x0001a88f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000268a2) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000268a2) list_single_graphic_pane_g

0x3600,	// (0x0001a8e1) list_single_graphic_pane_t1_ParamLimits

0x3600,	// (0x0001a8e1) list_single_graphic_pane_t1

0x35a2,	// (0x0001a883) list_single_heading_pane_g1_ParamLimits

0x35a2,	// (0x0001a883) list_single_heading_pane_g1

0x35ae,	// (0x0001a88f) list_single_heading_pane_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000268a9) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000268a9) list_single_heading_pane_g

0x755f,	// (0x0001e840) list_single_heading_pane_t1_ParamLimits

0x755f,	// (0x0001e840) list_single_heading_pane_t1

0x7575,	// (0x0001e856) list_single_heading_pane_t2_ParamLimits

0x7575,	// (0x0001e856) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000268ae) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000268ae) list_single_heading_pane_t

0x35a2,	// (0x0001a883) list_single_number_heading_pane_g1_ParamLimits

0x35a2,	// (0x0001a883) list_single_number_heading_pane_g1

0x35ae,	// (0x0001a88f) list_single_number_heading_pane_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000268a9) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000268a9) list_single_number_heading_pane_g

0x755f,	// (0x0001e840) list_single_number_heading_pane_t1_ParamLimits

0x755f,	// (0x0001e840) list_single_number_heading_pane_t1

0x7587,	// (0x0001e868) list_single_number_heading_pane_t2_ParamLimits

0x7587,	// (0x0001e868) list_single_number_heading_pane_t2

0x3801,	// (0x0001aae2) list_single_number_heading_pane_t3_ParamLimits

0x3801,	// (0x0001aae2) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000268b3) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000268b3) list_single_number_heading_pane_t

0x2e77,	// (0x0001a158) list_single_graphic_heading_pane_g1_ParamLimits

0x2e77,	// (0x0001a158) list_single_graphic_heading_pane_g1

0x7599,	// (0x0001e87a) list_single_graphic_heading_pane_g4_ParamLimits

0x7599,	// (0x0001e87a) list_single_graphic_heading_pane_g4

0x35ae,	// (0x0001a88f) list_single_graphic_heading_pane_g5_ParamLimits

0x35ae,	// (0x0001a88f) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000268ba) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000268ba) list_single_graphic_heading_pane_g

0x755f,	// (0x0001e840) list_single_graphic_heading_pane_t1_ParamLimits

0x755f,	// (0x0001e840) list_single_graphic_heading_pane_t1

0x75aa,	// (0x0001e88b) list_single_graphic_heading_pane_t2_ParamLimits

0x75aa,	// (0x0001e88b) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000268c1) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000268c1) list_single_graphic_heading_pane_t

0x383b,	// (0x0001ab1c) list_single_large_graphic_pane_g1_ParamLimits

0x383b,	// (0x0001ab1c) list_single_large_graphic_pane_g1

0x3847,	// (0x0001ab28) list_single_large_graphic_pane_g2_ParamLimits

0x3847,	// (0x0001ab28) list_single_large_graphic_pane_g2

0x3853,	// (0x0001ab34) list_single_large_graphic_pane_g3_ParamLimits

0x3853,	// (0x0001ab34) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000268c6) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000268c6) list_single_large_graphic_pane_g

0xccbd,	// (0x00023f9e) wait_border_pane_g2_copy1

0x75bc,	// (0x0001e89d) list_single_large_graphic_pane_g4_cp2

0x385f,	// (0x0001ab40) list_single_large_graphic_pane_t1_ParamLimits

0x385f,	// (0x0001ab40) list_single_large_graphic_pane_t1

0x2e83,	// (0x0001a164) list_double_pane_g1_ParamLimits

0x2e83,	// (0x0001a164) list_double_pane_g1

0x2e8f,	// (0x0001a170) list_double_pane_g2_ParamLimits

0x2e8f,	// (0x0001a170) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000268cd) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000268cd) list_double_pane_g

0x370e,	// (0x0001a9ef) list_double_pane_t1_ParamLimits

0x370e,	// (0x0001a9ef) list_double_pane_t1

0x75c4,	// (0x0001e8a5) list_double_pane_t2_ParamLimits

0x75c4,	// (0x0001e8a5) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000268d2) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000268d2) list_double_pane_t

0x75d6,	// (0x0001e8b7) list_double2_pane_g1_ParamLimits

0x75d6,	// (0x0001e8b7) list_double2_pane_g1

0x3062,	// (0x0001a343) list_double2_pane_g2_ParamLimits

0x3062,	// (0x0001a343) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000268d7) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000268d7) list_double2_pane_g

0x75e7,	// (0x0001e8c8) list_double2_pane_t1_ParamLimits

0x75e7,	// (0x0001e8c8) list_double2_pane_t1

0x75fd,	// (0x0001e8de) list_double2_pane_t2_ParamLimits

0x75fd,	// (0x0001e8de) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000268dc) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000268dc) list_double2_pane_t

0x2e83,	// (0x0001a164) list_double_number_pane_g1_ParamLimits

0x2e83,	// (0x0001a164) list_double_number_pane_g1

0x2e8f,	// (0x0001a170) list_double_number_pane_g2_ParamLimits

0x2e8f,	// (0x0001a170) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000268cd) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000268cd) list_double_number_pane_g

0x760f,	// (0x0001e8f0) list_double_number_pane_t1_ParamLimits

0x760f,	// (0x0001e8f0) list_double_number_pane_t1

0x2e9b,	// (0x0001a17c) list_double_number_pane_t2_ParamLimits

0x2e9b,	// (0x0001a17c) list_double_number_pane_t2

0x7621,	// (0x0001e902) list_double_number_pane_t3_ParamLimits

0x7621,	// (0x0001e902) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000268e1) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000268e1) list_double_number_pane_t

0x2e77,	// (0x0001a158) list_double_graphic_pane_g1_ParamLimits

0x2e77,	// (0x0001a158) list_double_graphic_pane_g1

0x7633,	// (0x0001e914) list_double_graphic_pane_g2_ParamLimits

0x7633,	// (0x0001e914) list_double_graphic_pane_g2

0x7642,	// (0x0001e923) list_double_graphic_pane_g3_ParamLimits

0x7642,	// (0x0001e923) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000268e8) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000268e8) list_double_graphic_pane_g

0x765a,	// (0x0001e93b) list_double_graphic_pane_t1_ParamLimits

0x765a,	// (0x0001e93b) list_double_graphic_pane_t1

0x7670,	// (0x0001e951) list_double_graphic_pane_t2_ParamLimits

0x7670,	// (0x0001e951) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000268f1) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000268f1) list_double_graphic_pane_t

0x7682,	// (0x0001e963) list_double2_graphic_pane_g1_ParamLimits

0x7682,	// (0x0001e963) list_double2_graphic_pane_g1

0x2e83,	// (0x0001a164) list_double2_graphic_pane_g2_ParamLimits

0x2e83,	// (0x0001a164) list_double2_graphic_pane_g2

0x2e8f,	// (0x0001a170) list_double2_graphic_pane_g3_ParamLimits

0x2e8f,	// (0x0001a170) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000268f6) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000268f6) list_double2_graphic_pane_g

0x768e,	// (0x0001e96f) list_double2_graphic_pane_t1_ParamLimits

0x768e,	// (0x0001e96f) list_double2_graphic_pane_t1

0x76a4,	// (0x0001e985) list_double2_graphic_pane_t2_ParamLimits

0x76a4,	// (0x0001e985) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000268fd) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000268fd) list_double2_graphic_pane_t

0x76b6,	// (0x0001e997) list_double_large_graphic_pane_g1_ParamLimits

0x76b6,	// (0x0001e997) list_double_large_graphic_pane_g1

0x76df,	// (0x0001e9c0) list_double_large_graphic_pane_g2_ParamLimits

0x76df,	// (0x0001e9c0) list_double_large_graphic_pane_g2

0x2e8f,	// (0x0001a170) list_double_large_graphic_pane_g3_ParamLimits

0x2e8f,	// (0x0001a170) list_double_large_graphic_pane_g3

0x76f0,	// (0x0001e9d1) list_double_large_graphic_pane_g4_ParamLimits

0x76f0,	// (0x0001e9d1) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00026902) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00026902) list_double_large_graphic_pane_g

0x7701,	// (0x0001e9e2) list_double_large_graphic_pane_t1_ParamLimits

0x7701,	// (0x0001e9e2) list_double_large_graphic_pane_t1

0x771a,	// (0x0001e9fb) list_double_large_graphic_pane_t2_ParamLimits

0x771a,	// (0x0001e9fb) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002690d) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002690d) list_double_large_graphic_pane_t

0x772c,	// (0x0001ea0d) list_double2_large_graphic_pane_g1_ParamLimits

0x772c,	// (0x0001ea0d) list_double2_large_graphic_pane_g1

0x7738,	// (0x0001ea19) list_double2_large_graphic_pane_g2_ParamLimits

0x7738,	// (0x0001ea19) list_double2_large_graphic_pane_g2

0x7749,	// (0x0001ea2a) list_double2_large_graphic_pane_g3_ParamLimits

0x7749,	// (0x0001ea2a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00026912) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00026912) list_double2_large_graphic_pane_g

0x7755,	// (0x0001ea36) list_double2_large_graphic_pane_t1_ParamLimits

0x7755,	// (0x0001ea36) list_double2_large_graphic_pane_t1

0x776b,	// (0x0001ea4c) list_double2_large_graphic_pane_t2_ParamLimits

0x776b,	// (0x0001ea4c) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00026919) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00026919) list_double2_large_graphic_pane_t

0x777d,	// (0x0001ea5e) list_double_heading_pane_g1_ParamLimits

0x777d,	// (0x0001ea5e) list_double_heading_pane_g1

0x778e,	// (0x0001ea6f) list_double_heading_pane_g2_ParamLimits

0x778e,	// (0x0001ea6f) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002691e) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002691e) list_double_heading_pane_g

0x779a,	// (0x0001ea7b) list_double_heading_pane_t1_ParamLimits

0x779a,	// (0x0001ea7b) list_double_heading_pane_t1

0x77b0,	// (0x0001ea91) list_double_heading_pane_t2_ParamLimits

0x77b0,	// (0x0001ea91) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00026923) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00026923) list_double_heading_pane_t

0x77c2,	// (0x0001eaa3) list_double_graphic_heading_pane_g1_ParamLimits

0x77c2,	// (0x0001eaa3) list_double_graphic_heading_pane_g1

0x777d,	// (0x0001ea5e) list_double_graphic_heading_pane_g2_ParamLimits

0x777d,	// (0x0001ea5e) list_double_graphic_heading_pane_g2

0x778e,	// (0x0001ea6f) list_double_graphic_heading_pane_g3_ParamLimits

0x778e,	// (0x0001ea6f) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00026928) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00026928) list_double_graphic_heading_pane_g

0x77ce,	// (0x0001eaaf) list_double_graphic_heading_pane_t1_ParamLimits

0x77ce,	// (0x0001eaaf) list_double_graphic_heading_pane_t1

0x76a4,	// (0x0001e985) list_double_graphic_heading_pane_t2_ParamLimits

0x76a4,	// (0x0001e985) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002692f) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002692f) list_double_graphic_heading_pane_t

0x76df,	// (0x0001e9c0) list_double_time_pane_g1_ParamLimits

0x76df,	// (0x0001e9c0) list_double_time_pane_g1

0x2e8f,	// (0x0001a170) list_double_time_pane_g2_ParamLimits

0x2e8f,	// (0x0001a170) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00026934) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00026934) list_double_time_pane_g

0x2eb1,	// (0x0001a192) list_double_time_pane_t1_ParamLimits

0x2eb1,	// (0x0001a192) list_double_time_pane_t1

0x77e4,	// (0x0001eac5) list_double_time_pane_t2_ParamLimits

0x77e4,	// (0x0001eac5) list_double_time_pane_t2

0x77f6,	// (0x0001ead7) list_double_time_pane_t3_ParamLimits

0x77f6,	// (0x0001ead7) list_double_time_pane_t3

0x7808,	// (0x0001eae9) list_double_time_pane_t4_ParamLimits

0x7808,	// (0x0001eae9) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00026939) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00026939) list_double_time_pane_t

0x781a,	// (0x0001eafb) list_setting_pane_g1_ParamLimits

0x781a,	// (0x0001eafb) list_setting_pane_g1

0x778e,	// (0x0001ea6f) list_setting_pane_g2_ParamLimits

0x778e,	// (0x0001ea6f) list_setting_pane_g2

0x0001,

0xf661,	// (0x00026942) list_setting_pane_g_ParamLimits

0xf661,	// (0x00026942) list_setting_pane_g

0x7826,	// (0x0001eb07) list_setting_pane_t1_ParamLimits

0x7826,	// (0x0001eb07) list_setting_pane_t1

0x783d,	// (0x0001eb1e) list_setting_pane_t2_ParamLimits

0x783d,	// (0x0001eb1e) list_setting_pane_t2

0x0002,

0xf666,	// (0x00026947) list_setting_pane_t_ParamLimits

0xf666,	// (0x00026947) list_setting_pane_t

0x787a,	// (0x0001eb5b) set_value_pane_cp_ParamLimits

0x787a,	// (0x0001eb5b) set_value_pane_cp

0x7886,	// (0x0001eb67) list_setting_number_pane_g1_ParamLimits

0x7886,	// (0x0001eb67) list_setting_number_pane_g1

0x7892,	// (0x0001eb73) list_setting_number_pane_g2_ParamLimits

0x7892,	// (0x0001eb73) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002694e) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002694e) list_setting_number_pane_g

0x789e,	// (0x0001eb7f) list_setting_number_pane_t1_ParamLimits

0x789e,	// (0x0001eb7f) list_setting_number_pane_t1

0x78b2,	// (0x0001eb93) list_setting_number_pane_t2_ParamLimits

0x78b2,	// (0x0001eb93) list_setting_number_pane_t2

0x78c9,	// (0x0001ebaa) list_setting_number_pane_t3_ParamLimits

0x78c9,	// (0x0001ebaa) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00026953) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00026953) list_setting_number_pane_t

0x787a,	// (0x0001eb5b) set_value_pane_ParamLimits

0x787a,	// (0x0001eb5b) set_value_pane

0xb9c4,	// (0x00022ca5) bg_set_opt_pane_ParamLimits

0xb9c4,	// (0x00022ca5) bg_set_opt_pane

0x32d5,	// (0x0001a5b6) set_value_pane_t1

0xb9e5,	// (0x00022cc6) slider_set_pane_cp3

0xb9ee,	// (0x00022ccf) volume_small_pane_cp

0xb9f7,	// (0x00022cd8) list_form_gen_pane

0xb9b3,	// (0x00022c94) scroll_pane_cp8

0x790c,	// (0x0001ebed) form_field_data_pane_ParamLimits

0x790c,	// (0x0001ebed) form_field_data_pane

0x7923,	// (0x0001ec04) form_field_data_wide_pane_ParamLimits

0x7923,	// (0x0001ec04) form_field_data_wide_pane

0x7943,	// (0x0001ec24) form_field_popup_pane_ParamLimits

0x7943,	// (0x0001ec24) form_field_popup_pane

0x795b,	// (0x0001ec3c) form_field_popup_wide_pane_ParamLimits

0x795b,	// (0x0001ec3c) form_field_popup_wide_pane

0x3359,	// (0x0001a63a) form_field_slider_pane_ParamLimits

0x3359,	// (0x0001a63a) form_field_slider_pane

0x336c,	// (0x0001a64d) form_field_slider_wide_pane_ParamLimits

0x336c,	// (0x0001a64d) form_field_slider_wide_pane

0xba00,	// (0x00022ce1) data_form_pane

0x82db,	// (0x0001f5bc) form_field_data_pane_t1

0xba0c,	// (0x00022ced) input_focus_pane

0xba1a,	// (0x00022cfb) data_form_wide_pane

0x3393,	// (0x0001a674) form_field_data_wide_pane_t1

0xb832,	// (0x00022b13) input_focus_pane_cp6

0x797c,	// (0x0001ec5d) form_field_popup_pane_t1

0xba0c,	// (0x00022ced) input_focus_pane_cp7

0xba00,	// (0x00022ce1) list_form_pane

0x33d5,	// (0x0001a6b6) form_field_popup_wide_pane_t1

0xba0c,	// (0x00022ced) input_focus_pane_cp8

0xba46,	// (0x00022d27) list_form_wide_pane

0x799c,	// (0x0001ec7d) form_field_slider_pane_t1_ParamLimits

0x799c,	// (0x0001ec7d) form_field_slider_pane_t1

0x79b2,	// (0x0001ec93) form_field_slider_pane_t2_ParamLimits

0x79b2,	// (0x0001ec93) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00026963) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00026963) form_field_slider_pane_t

0xb45c,	// (0x0002273d) input_focus_pane_cp9_ParamLimits

0xb45c,	// (0x0002273d) input_focus_pane_cp9

0x79c7,	// (0x0001eca8) slider_cont_pane_ParamLimits

0x79c7,	// (0x0001eca8) slider_cont_pane

0xba55,	// (0x00022d36) form_field_slider_wide_pane_t1_ParamLimits

0xba55,	// (0x00022d36) form_field_slider_wide_pane_t1

0x342a,	// (0x0001a70b) form_field_slider_wide_pane_t2_ParamLimits

0x342a,	// (0x0001a70b) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00026968) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00026968) form_field_slider_wide_pane_t

0xb45c,	// (0x0002273d) input_focus_pane_cp10_ParamLimits

0xb45c,	// (0x0002273d) input_focus_pane_cp10

0x79db,	// (0x0001ecbc) slider_cont_pane_cp1_ParamLimits

0x79db,	// (0x0001ecbc) slider_cont_pane_cp1

0x79f1,	// (0x0001ecd2) slider_form_pane_cp

0xba67,	// (0x00022d48) input_focus_pane_g1

0xba6f,	// (0x00022d50) input_focus_pane_g2

0xba77,	// (0x00022d58) input_focus_pane_g3

0xba7f,	// (0x00022d60) input_focus_pane_g4

0xba87,	// (0x00022d68) input_focus_pane_g5

0xba8f,	// (0x00022d70) input_focus_pane_g6

0xba97,	// (0x00022d78) input_focus_pane_g7

0xba9f,	// (0x00022d80) input_focus_pane_g8

0xbaa7,	// (0x00022d88) input_focus_pane_g9

0xb38c,	// (0x0002266d) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002696d) input_focus_pane_g

0xccc6,	// (0x00023fa7) wait_border_pane_g3_copy1

0x79f9,	// (0x0001ecda) data_form_pane_t1

0xb38c,	// (0x0002266d) wait_anim_pane_g1_copy1

0x7b15,	// (0x0001edf6) data_form_wide_pane_t1

0x7a12,	// (0x0001ecf3) list_form_graphic_pane_cp_ParamLimits

0x7a12,	// (0x0001ecf3) list_form_graphic_pane_cp

0xd8dc,	// (0x00024bbd) slider_form_pane_g1

0xd8e5,	// (0x00024bc6) slider_form_pane_g2

0x0006,

0xf97c,	// (0x00026c5d) slider_form_pane_g

0x7a26,	// (0x0001ed07) list_form_graphic_pane_ParamLimits

0x7a26,	// (0x0001ed07) list_form_graphic_pane

0x348a,	// (0x0001a76b) list_form_graphic_pane_g1

0x3492,	// (0x0001a773) list_form_graphic_pane_t1_ParamLimits

0x3492,	// (0x0001a773) list_form_graphic_pane_t1

0xb472,	// (0x00022753) list_highlight_pane_cp5_ParamLimits

0xb472,	// (0x00022753) list_highlight_pane_cp5

0x7a3b,	// (0x0001ed1c) find_pane_g1

0xbaaf,	// (0x00022d90) input_find_pane

0x7a46,	// (0x0001ed27) input_find_pane_g1_ParamLimits

0x7a46,	// (0x0001ed27) input_find_pane_g1

0x34bc,	// (0x0001a79d) input_find_pane_t1_ParamLimits

0x34bc,	// (0x0001a79d) input_find_pane_t1

0x34d1,	// (0x0001a7b2) input_find_pane_t2_ParamLimits

0x34d1,	// (0x0001a7b2) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00026982) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00026982) input_find_pane_t

0xbab8,	// (0x00022d99) input_focus_pane_cp5_ParamLimits

0xbab8,	// (0x00022d99) input_focus_pane_cp5

0xb45c,	// (0x0002273d) bg_popup_window_pane_cp2_ParamLimits

0xb45c,	// (0x0002273d) bg_popup_window_pane_cp2

0xbad2,	// (0x00022db3) listscroll_menu_pane_ParamLimits

0xbad2,	// (0x00022db3) listscroll_menu_pane

0xbade,	// (0x00022dbf) popup_submenu_window_ParamLimits

0xbade,	// (0x00022dbf) popup_submenu_window

0xbb02,	// (0x00022de3) find_popup_pane_g1

0xbb0a,	// (0x00022deb) input_popup_find_pane_cp

0xbab8,	// (0x00022d99) input_focus_pane_cp4_ParamLimits

0xbab8,	// (0x00022d99) input_focus_pane_cp4

0xbb14,	// (0x00022df5) input_popup_find_pane_t1_ParamLimits

0xbb14,	// (0x00022df5) input_popup_find_pane_t1

0xb40e,	// (0x000226ef) bg_popup_sub_pane_cp

0xbb42,	// (0x00022e23) listscroll_popup_sub_pane

0xbb4a,	// (0x00022e2b) list_submenu_pane_ParamLimits

0xbb4a,	// (0x00022e2b) list_submenu_pane

0xbb5b,	// (0x00022e3c) scroll_pane_cp4

0xbb63,	// (0x00022e44) list_single_popup_submenu_pane_ParamLimits

0xbb63,	// (0x00022e44) list_single_popup_submenu_pane

0xbb75,	// (0x00022e56) list_single_popup_submenu_pane_g1

0xbb7d,	// (0x00022e5e) list_single_popup_submenu_pane_t1_ParamLimits

0xbb7d,	// (0x00022e5e) list_single_popup_submenu_pane_t1

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp1_ParamLimits

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp1

0xd8b6,	// (0x00024b97) tabs_2_active_pane_g1

0x82ff,	// (0x0001f5e0) tabs_2_active_pane_t1

0xb45c,	// (0x0002273d) bg_passive_tab_pane_cp1_ParamLimits

0xb45c,	// (0x0002273d) bg_passive_tab_pane_cp1

0xd8b6,	// (0x00024b97) tabs_2_passive_pane_g1

0x82ff,	// (0x0001f5e0) tabs_2_passive_pane_t1

0xb472,	// (0x00022753) bg_active_tab_pane_cp4

0x8315,	// (0x0001f5f6) tabs_2_long_active_pane_t1

0xbb92,	// (0x00022e73) bg_passive_tab_pane_cp4

0xc7ae,	// (0x00023a8f) list_single_midp_graphic_pane_g4_ParamLimits

0xb472,	// (0x00022753) bg_active_tab_pane_cp5

0x832c,	// (0x0001f60d) tabs_3_long_active_pane_t1

0xbb92,	// (0x00022e73) bg_passive_tab_pane_cp5

0xc7ae,	// (0x00023a8f) list_single_midp_graphic_pane_g4

0xb472,	// (0x00022753) bg_popup_window_pane_cp13_ParamLimits

0xb472,	// (0x00022753) bg_popup_window_pane_cp13

0xbba7,	// (0x00022e88) listscroll_popup_fast_pane_ParamLimits

0xbba7,	// (0x00022e88) listscroll_popup_fast_pane

0xbbb6,	// (0x00022e97) grid_popup_fast_pane_ParamLimits

0xbbb6,	// (0x00022e97) grid_popup_fast_pane

0xbbc8,	// (0x00022ea9) scroll_pane_cp9_ParamLimits

0xbbc8,	// (0x00022ea9) scroll_pane_cp9

0xebbd,	// (0x00025e9e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xebbd,	// (0x00025e9e) list_single_graphic_hl_pane_t1_cp2

0xbbec,	// (0x00022ecd) input_focus_pane_cp20_ParamLimits

0xbbec,	// (0x00022ecd) input_focus_pane_cp20

0xbbfa,	// (0x00022edb) query_popup_data_pane_t1_ParamLimits

0xbbfa,	// (0x00022edb) query_popup_data_pane_t1

0xbc0d,	// (0x00022eee) query_popup_data_pane_t2_ParamLimits

0xbc0d,	// (0x00022eee) query_popup_data_pane_t2

0xbc53,	// (0x00022f34) query_popup_data_pane_t3_ParamLimits

0xbc53,	// (0x00022f34) query_popup_data_pane_t3

0xbc94,	// (0x00022f75) query_popup_data_pane_t4_ParamLimits

0xbc94,	// (0x00022f75) query_popup_data_pane_t4

0xbcd0,	// (0x00022fb1) query_popup_data_pane_t5_ParamLimits

0xbcd0,	// (0x00022fb1) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00026987) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00026987) query_popup_data_pane_t

0xba67,	// (0x00022d48) bg_set_opt_pane_g1

0xba6f,	// (0x00022d50) bg_set_opt_pane_g2

0xba77,	// (0x00022d58) bg_set_opt_pane_g3

0xba7f,	// (0x00022d60) bg_set_opt_pane_g4

0xba87,	// (0x00022d68) bg_set_opt_pane_g5

0xba8f,	// (0x00022d70) bg_set_opt_pane_g6

0xba97,	// (0x00022d78) bg_set_opt_pane_g7

0xba9f,	// (0x00022d80) bg_set_opt_pane_g8

0xbaa7,	// (0x00022d88) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00026992) bg_set_opt_pane_g

0x4370,	// (0x0001b651) control_top_pane_stacon_ParamLimits

0x4370,	// (0x0001b651) control_top_pane_stacon

0x43c3,	// (0x0001b6a4) signal_pane_stacon_ParamLimits

0x43c3,	// (0x0001b6a4) signal_pane_stacon

0xc0c3,	// (0x000233a4) stacon_top_pane_g1_ParamLimits

0xc0c3,	// (0x000233a4) stacon_top_pane_g1

0x43e8,	// (0x0001b6c9) title_pane_stacon_ParamLimits

0x43e8,	// (0x0001b6c9) title_pane_stacon

0x440a,	// (0x0001b6eb) uni_indicator_pane_stacon_ParamLimits

0x440a,	// (0x0001b6eb) uni_indicator_pane_stacon

0x441f,	// (0x0001b700) battery_pane_stacon_ParamLimits

0x441f,	// (0x0001b700) battery_pane_stacon

0x445f,	// (0x0001b740) control_bottom_pane_stacon_ParamLimits

0x445f,	// (0x0001b740) control_bottom_pane_stacon

0x447e,	// (0x0001b75f) navi_pane_stacon_ParamLimits

0x447e,	// (0x0001b75f) navi_pane_stacon

0xc0e5,	// (0x000233c6) stacon_bottom_pane_g1_ParamLimits

0xc0e5,	// (0x000233c6) stacon_bottom_pane_g1

0xbd07,	// (0x00022fe8) aid_levels_signal_lsc_ParamLimits

0xbd07,	// (0x00022fe8) aid_levels_signal_lsc

0x413c,	// (0x0001b41d) signal_pane_stacon_g1_ParamLimits

0x413c,	// (0x0001b41d) signal_pane_stacon_g1

0x4148,	// (0x0001b429) signal_pane_stacon_g2_ParamLimits

0x4148,	// (0x0001b429) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x000269a5) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000269a5) signal_pane_stacon_g

0x417c,	// (0x0001b45d) title_pane_stacon_t1_ParamLimits

0x417c,	// (0x0001b45d) title_pane_stacon_t1

0xbd21,	// (0x00023002) uni_indicator_pane_stacon_g1

0xbd2b,	// (0x0002300c) uni_indicator_pane_stacon_g2

0xbd35,	// (0x00023016) uni_indicator_pane_stacon_g3

0xbd3f,	// (0x00023020) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x000269b1) uni_indicator_pane_stacon_g

0x41a1,	// (0x0001b482) control_top_pane_stacon_g1

0x41a9,	// (0x0001b48a) control_top_pane_stacon_t1_ParamLimits

0x41a9,	// (0x0001b48a) control_top_pane_stacon_t1

0xbd49,	// (0x0002302a) aid_levels_battery_lsc_ParamLimits

0xbd49,	// (0x0002302a) aid_levels_battery_lsc

0x41da,	// (0x0001b4bb) battery_pane_stacon_g1_ParamLimits

0x41da,	// (0x0001b4bb) battery_pane_stacon_g1

0x41e6,	// (0x0001b4c7) battery_pane_stacon_g2_ParamLimits

0x41e6,	// (0x0001b4c7) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x000269ba) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x000269ba) battery_pane_stacon_g

0x4215,	// (0x0001b4f6) navi_icon_pane_stacon

0x4225,	// (0x0001b506) navi_navi_pane_stacon

0x4215,	// (0x0001b4f6) navi_text_pane_stacon

0x41a1,	// (0x0001b482) control_bottom_pane_stacon_g1

0x4235,	// (0x0001b516) control_bottom_pane_stacon_t1_ParamLimits

0x4235,	// (0x0001b516) control_bottom_pane_stacon_t1

0x8342,	// (0x0001f623) grid_app_pane_ParamLimits

0x8342,	// (0x0001f623) grid_app_pane

0x8370,	// (0x0001f651) scroll_pane_cp15_ParamLimits

0x8370,	// (0x0001f651) scroll_pane_cp15

0x8383,	// (0x0001f664) cell_app_pane_ParamLimits

0x8383,	// (0x0001f664) cell_app_pane

0x83c0,	// (0x0001f6a1) cell_app_pane_g1_ParamLimits

0x83c0,	// (0x0001f6a1) cell_app_pane_g1

0xbd71,	// (0x00023052) cell_app_pane_g2_ParamLimits

0xbd71,	// (0x00023052) cell_app_pane_g2

0x0001,

0xf6de,	// (0x000269bf) cell_app_pane_g_ParamLimits

0xf6de,	// (0x000269bf) cell_app_pane_g

0x83e4,	// (0x0001f6c5) cell_app_pane_t1_ParamLimits

0x83e4,	// (0x0001f6c5) cell_app_pane_t1

0xbd7d,	// (0x0002305e) grid_highlight_pane_ParamLimits

0xbd7d,	// (0x0002305e) grid_highlight_pane

0xba67,	// (0x00022d48) cell_highlight_pane_g1

0xba6f,	// (0x00022d50) cell_highlight_pane_g2

0xba77,	// (0x00022d58) cell_highlight_pane_g3

0xba7f,	// (0x00022d60) cell_highlight_pane_g4

0xba87,	// (0x00022d68) cell_highlight_pane_g5

0xba8f,	// (0x00022d70) cell_highlight_pane_g6

0xba97,	// (0x00022d78) cell_highlight_pane_g7

0xba9f,	// (0x00022d80) cell_highlight_pane_g8

0xbaa7,	// (0x00022d88) cell_highlight_pane_g9

0xb38c,	// (0x0002266d) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002696d) cell_highlight_pane_g

0xbd8e,	// (0x0002306f) bg_scroll_pane

0x4279,	// (0x0001b55a) scroll_handle_pane

0xbdd5,	// (0x000230b6) scroll_bg_pane_g1

0xbdea,	// (0x000230cb) scroll_bg_pane_g2

0xbe02,	// (0x000230e3) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x000269c4) scroll_bg_pane_g

0xbe17,	// (0x000230f8) scroll_handle_focus_pane_ParamLimits

0xbe17,	// (0x000230f8) scroll_handle_focus_pane

0xbdd5,	// (0x000230b6) scroll_handle_pane_g1

0xbe24,	// (0x00023105) scroll_handle_pane_g2

0xbe02,	// (0x000230e3) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x000269cb) scroll_handle_pane_g

0xbab8,	// (0x00022d99) bg_popup_sub_pane_cp21_ParamLimits

0xbab8,	// (0x00022d99) bg_popup_sub_pane_cp21

0xbe38,	// (0x00023119) popup_fep_japan_predictive_window_t1_ParamLimits

0xbe38,	// (0x00023119) popup_fep_japan_predictive_window_t1

0xbe4f,	// (0x00023130) popup_fep_japan_predictive_window_t2_ParamLimits

0xbe4f,	// (0x00023130) popup_fep_japan_predictive_window_t2

0xbe82,	// (0x00023163) popup_fep_japan_predictive_window_t3_ParamLimits

0xbe82,	// (0x00023163) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x000269d2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x000269d2) popup_fep_japan_predictive_window_t

0xb40e,	// (0x000226ef) bg_popup_sub_pane_cp23

0xbeb9,	// (0x0002319a) listscroll_japin_cand_pane

0xbec1,	// (0x000231a2) popup_fep_japan_candidate_window_t1

0xbecf,	// (0x000231b0) candidate_pane_ParamLimits

0xbecf,	// (0x000231b0) candidate_pane

0xbee2,	// (0x000231c3) scroll_pane_cp30

0xbeea,	// (0x000231cb) list_single_popup_jap_candidate_pane_ParamLimits

0xbeea,	// (0x000231cb) list_single_popup_jap_candidate_pane

0xb40e,	// (0x000226ef) list_highlight_pane_cp30

0xbeff,	// (0x000231e0) list_single_popup_jap_candidate_pane_t1

0x8404,	// (0x0001f6e5) level_1_signal

0x8416,	// (0x0001f6f7) level_2_signal

0x8429,	// (0x0001f70a) level_3_signal

0x843c,	// (0x0001f71d) level_4_signal

0x844f,	// (0x0001f730) level_5_signal

0x8462,	// (0x0001f743) level_6_signal

0x8475,	// (0x0001f756) level_7_signal

0x8404,	// (0x0001f6e5) level_1_battery

0x8416,	// (0x0001f6f7) level_2_battery

0x8429,	// (0x0001f70a) level_3_battery

0x843c,	// (0x0001f71d) level_4_battery

0x844f,	// (0x0001f730) level_5_battery

0x8462,	// (0x0001f743) level_6_battery

0x8475,	// (0x0001f756) level_7_battery

0xbf26,	// (0x00023207) list_menu_pane_ParamLimits

0xbf26,	// (0x00023207) list_menu_pane

0xbf3c,	// (0x0002321d) scroll_pane_cp25_ParamLimits

0xbf3c,	// (0x0002321d) scroll_pane_cp25

0x8488,	// (0x0001f769) list_double2_graphic_pane_cp2_ParamLimits

0x8488,	// (0x0001f769) list_double2_graphic_pane_cp2

0x8488,	// (0x0001f769) list_double2_large_graphic_pane_cp2_ParamLimits

0x8488,	// (0x0001f769) list_double2_large_graphic_pane_cp2

0x8488,	// (0x0001f769) list_double2_pane_cp2_ParamLimits

0x8488,	// (0x0001f769) list_double2_pane_cp2

0x8488,	// (0x0001f769) list_double_graphic_pane_cp2_ParamLimits

0x8488,	// (0x0001f769) list_double_graphic_pane_cp2

0x8488,	// (0x0001f769) list_double_large_graphic_pane_cp2_ParamLimits

0x8488,	// (0x0001f769) list_double_large_graphic_pane_cp2

0x8488,	// (0x0001f769) list_double_number_pane_cp2_ParamLimits

0x8488,	// (0x0001f769) list_double_number_pane_cp2

0x8488,	// (0x0001f769) list_double_pane_cp2_ParamLimits

0x8488,	// (0x0001f769) list_double_pane_cp2

0x84a3,	// (0x0001f784) list_single_2graphic_pane_cp2_ParamLimits

0x84a3,	// (0x0001f784) list_single_2graphic_pane_cp2

0x84a3,	// (0x0001f784) list_single_graphic_heading_pane_cp2_ParamLimits

0x84a3,	// (0x0001f784) list_single_graphic_heading_pane_cp2

0x84a3,	// (0x0001f784) list_single_graphic_pane_cp2_ParamLimits

0x84a3,	// (0x0001f784) list_single_graphic_pane_cp2

0x84a3,	// (0x0001f784) list_single_heading_pane_cp2_ParamLimits

0x84a3,	// (0x0001f784) list_single_heading_pane_cp2

0x84b4,	// (0x0001f795) list_single_large_graphic_pane_cp2_ParamLimits

0x84b4,	// (0x0001f795) list_single_large_graphic_pane_cp2

0x84a3,	// (0x0001f784) list_single_number_heading_pane_cp2_ParamLimits

0x84a3,	// (0x0001f784) list_single_number_heading_pane_cp2

0x84a3,	// (0x0001f784) list_single_number_pane_cp2_ParamLimits

0x84a3,	// (0x0001f784) list_single_number_pane_cp2

0x84a3,	// (0x0001f784) list_single_pane_cp2_ParamLimits

0x84a3,	// (0x0001f784) list_single_pane_cp2

0xbf5e,	// (0x0002323f) bg_popup_sub_pane_cp22

0x4328,	// (0x0001b609) popup_side_volume_key_window_g1

0x434c,	// (0x0001b62d) popup_side_volume_key_window_t1

0x4368,	// (0x0001b649) volume_small_pane_cp1

0xb45c,	// (0x0002273d) bg_popup_sub_pane_cp24_ParamLimits

0xb45c,	// (0x0002273d) bg_popup_sub_pane_cp24

0xbf74,	// (0x00023255) fep_china_uni_candidate_pane_ParamLimits

0xbf74,	// (0x00023255) fep_china_uni_candidate_pane

0xbf88,	// (0x00023269) fep_china_uni_entry_pane

0xbf98,	// (0x00023279) popup_fep_china_uni_window_g1

0xbfb4,	// (0x00023295) fep_china_uni_entry_pane_g1

0xbfbc,	// (0x0002329d) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00026a03) fep_china_uni_entry_pane_g

0xbfc4,	// (0x000232a5) fep_entry_item_pane

0xbfce,	// (0x000232af) fep_candidate_item_pane

0xbfd6,	// (0x000232b7) fep_china_uni_candidate_pane_g1

0xbfde,	// (0x000232bf) fep_china_uni_candidate_pane_g2

0xbfe6,	// (0x000232c7) fep_china_uni_candidate_pane_g3

0xbfee,	// (0x000232cf) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00026a08) fep_china_uni_candidate_pane_g

0xb38c,	// (0x0002266d) fep_entry_item_pane_g1

0xbff6,	// (0x000232d7) fep_entry_item_pane_t1_ParamLimits

0xbff6,	// (0x000232d7) fep_entry_item_pane_t1

0xc00c,	// (0x000232ed) fep_candidate_item_pane_t1_ParamLimits

0xc00c,	// (0x000232ed) fep_candidate_item_pane_t1

0xc021,	// (0x00023302) fep_candidate_item_pane_t2_ParamLimits

0xc021,	// (0x00023302) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00026a11) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00026a11) fep_candidate_item_pane_t

0xb472,	// (0x00022753) list_highlight_pane_cp31_ParamLimits

0xb472,	// (0x00022753) list_highlight_pane_cp31

0xc033,	// (0x00023314) level_1_signal_lsc

0xc03c,	// (0x0002331d) level_2_signal_lsc

0xc045,	// (0x00023326) level_3_signal_lsc

0xc04e,	// (0x0002332f) level_4_signal_lsc

0xc057,	// (0x00023338) level_5_signal_lsc

0xc060,	// (0x00023341) level_6_signal_lsc

0xc069,	// (0x0002334a) level_7_signal_lsc

0xc069,	// (0x0002334a) level_1_battery_lsc

0xc072,	// (0x00023353) level_2_battery_lsc

0xc07b,	// (0x0002335c) level_3_battery_lsc

0xc084,	// (0x00023365) level_4_battery_lsc

0xc08d,	// (0x0002336e) level_5_battery_lsc

0xc096,	// (0x00023377) level_6_battery_lsc

0xc033,	// (0x00023314) level_7_battery_lsc

0xc09f,	// (0x00023380) scroll_handle_focus_pane_g1

0xc0a8,	// (0x00023389) scroll_handle_focus_pane_g2

0xc0b1,	// (0x00023392) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00026a16) scroll_handle_focus_pane_g

0x34e6,	// (0x0001a7c7) list_single_2graphic_pane_g1_ParamLimits

0x34e6,	// (0x0001a7c7) list_single_2graphic_pane_g1

0x7599,	// (0x0001e87a) list_single_2graphic_pane_g2_ParamLimits

0x7599,	// (0x0001e87a) list_single_2graphic_pane_g2

0x35ae,	// (0x0001a88f) list_single_2graphic_pane_g3_ParamLimits

0x35ae,	// (0x0001a88f) list_single_2graphic_pane_g3

0x7a52,	// (0x0001ed33) list_single_2graphic_pane_g4_ParamLimits

0x7a52,	// (0x0001ed33) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00026a1d) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00026a1d) list_single_2graphic_pane_g

0x7a5e,	// (0x0001ed3f) list_single_2graphic_pane_t1_ParamLimits

0x7a5e,	// (0x0001ed3f) list_single_2graphic_pane_t1

0x7a8c,	// (0x0001ed6d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7a8c,	// (0x0001ed6d) list_double2_graphic_large_graphic_pane_g1

0x7738,	// (0x0001ea19) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7738,	// (0x0001ea19) list_double2_graphic_large_graphic_pane_g2

0x7749,	// (0x0001ea2a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7749,	// (0x0001ea2a) list_double2_graphic_large_graphic_pane_g3

0x7a9c,	// (0x0001ed7d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7a9c,	// (0x0001ed7d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00026a26) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00026a26) list_double2_graphic_large_graphic_pane_g

0x7aa8,	// (0x0001ed89) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7aa8,	// (0x0001ed89) list_double2_graphic_large_graphic_pane_t1

0x7abe,	// (0x0001ed9f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7abe,	// (0x0001ed9f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00026a2f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00026a2f) list_double2_graphic_large_graphic_pane_t

0xc18c,	// (0x0002346d) popup_fast_swap_window_ParamLimits

0xc18c,	// (0x0002346d) popup_fast_swap_window

0xc1a8,	// (0x00023489) popup_side_volume_key_window

0xc1c2,	// (0x000234a3) stacon_top_pane

0xc1cc,	// (0x000234ad) status_pane_ParamLimits

0xc1cc,	// (0x000234ad) status_pane

0x8583,	// (0x0001f864) status_small_pane

0xb40e,	// (0x000226ef) control_pane

0xb40e,	// (0x000226ef) stacon_bottom_pane

0xb9b3,	// (0x00022c94) scroll_pane_cp121

0xb9f7,	// (0x00022cd8) set_content_pane

0xd8be,	// (0x00024b9f) bg_active_tab_pane_g1_cp1

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp1

0xd8c7,	// (0x00024ba8) bg_active_tab_pane_g3_cp1

0xd8be,	// (0x00024b9f) bg_passive_tab_pane_g1_cp1

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp1

0xd8c7,	// (0x00024ba8) bg_passive_tab_pane_g3_cp1

0x8539,	// (0x0001f81a) bg_active_tab_pane_g1_cp2

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp2

0x8542,	// (0x0001f823) bg_active_tab_pane_g3_cp2

0x8539,	// (0x0001f81a) bg_passive_tab_pane_g1_cp2

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp2

0x8542,	// (0x0001f823) bg_passive_tab_pane_g3_cp2

0x854b,	// (0x0001f82c) bg_active_tab_pane_g1_cp3

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp3

0x8554,	// (0x0001f835) bg_active_tab_pane_g3_cp3

0x854b,	// (0x0001f82c) bg_passive_tab_pane_g1_cp3

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp3

0x8554,	// (0x0001f835) bg_passive_tab_pane_g3_cp3

0x855d,	// (0x0001f83e) bg_active_tab_pane_g1_cp4

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp4

0x8566,	// (0x0001f847) bg_active_tab_pane_g3_cp4

0x855d,	// (0x0001f83e) bg_passive_tab_pane_g1_cp4

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp4

0x8566,	// (0x0001f847) bg_passive_tab_pane_g3_cp4

0xc101,	// (0x000233e2) bg_active_tab_pane_g1_cp5

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp5

0xc10a,	// (0x000233eb) bg_active_tab_pane_g3_cp5

0xc101,	// (0x000233e2) bg_passive_tab_pane_g1_cp5

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp5

0xc10a,	// (0x000233eb) bg_passive_tab_pane_g3_cp5

0x856f,	// (0x0001f850) list_set_graphic_pane_ParamLimits

0x856f,	// (0x0001f850) list_set_graphic_pane

0xb40e,	// (0x000226ef) bg_set_opt_pane_cp4

0xc113,	// (0x000233f4) list_set_graphic_pane_g1_ParamLimits

0xc113,	// (0x000233f4) list_set_graphic_pane_g1

0xc11f,	// (0x00023400) list_set_graphic_pane_g2_ParamLimits

0xc11f,	// (0x00023400) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00026a34) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00026a34) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x00026dab) volume_small_pane_cp_g

0xc141,	// (0x00023422) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc141,	// (0x00023422) list_double2_large_graphic_pane_g1_cp2

0xc14d,	// (0x0002342e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc14d,	// (0x0002342e) list_double2_large_graphic_pane_g2_cp2

0xc15c,	// (0x0002343d) list_double2_large_graphic_pane_g3_cp2

0xc164,	// (0x00023445) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc164,	// (0x00023445) list_double2_large_graphic_pane_t1_cp2

0xc17a,	// (0x0002345b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc17a,	// (0x0002345b) list_double2_large_graphic_pane_t2_cp2

0xd635,	// (0x00024916) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd635,	// (0x00024916) list_double_large_graphic_pane_g1_cp2

0xd646,	// (0x00024927) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd646,	// (0x00024927) list_double_large_graphic_pane_g2_cp2

0xc2a7,	// (0x00023588) list_double_large_graphic_pane_g3_cp2

0xd655,	// (0x00024936) list_double_large_graphic_pane_g4_cp

0xd65d,	// (0x0002493e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd65d,	// (0x0002493e) list_double_large_graphic_pane_t1_cp2

0xd674,	// (0x00024955) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd674,	// (0x00024955) list_double_large_graphic_pane_t2_cp2

0xc1da,	// (0x000234bb) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc1da,	// (0x000234bb) list_double2_graphic_pane_g1_cp2

0xc1e6,	// (0x000234c7) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc1e6,	// (0x000234c7) list_double2_graphic_pane_g2_cp2

0xc1f5,	// (0x000234d6) list_double2_graphic_pane_g3_cp2

0xc1fd,	// (0x000234de) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc1fd,	// (0x000234de) list_double2_graphic_pane_t1_cp2

0xc213,	// (0x000234f4) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc213,	// (0x000234f4) list_double2_graphic_pane_t2_cp2

0xc225,	// (0x00023506) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc225,	// (0x00023506) list_single_number_heading_pane_g1_cp2

0xc231,	// (0x00023512) list_single_number_heading_pane_g2_cp2

0xc239,	// (0x0002351a) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc239,	// (0x0002351a) list_single_number_heading_pane_t1_cp2

0xc24f,	// (0x00023530) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc24f,	// (0x00023530) list_single_number_heading_pane_t2_cp2

0xc261,	// (0x00023542) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc261,	// (0x00023542) list_single_number_heading_pane_t3_cp2

0xc225,	// (0x00023506) list_single_heading_pane_g1_cp2_ParamLimits

0xc225,	// (0x00023506) list_single_heading_pane_g1_cp2

0xc231,	// (0x00023512) list_single_heading_pane_g2_cp2

0xc239,	// (0x0002351a) list_single_heading_pane_t1_cp2_ParamLimits

0xc239,	// (0x0002351a) list_single_heading_pane_t1_cp2

0xd43f,	// (0x00024720) list_single_heading_pane_t2_cp2_ParamLimits

0xd43f,	// (0x00024720) list_single_heading_pane_t2_cp2

0xd3c4,	// (0x000246a5) list_double_graphic_pane_g1_cp2_ParamLimits

0xd3c4,	// (0x000246a5) list_double_graphic_pane_g1_cp2

0xd3d0,	// (0x000246b1) list_double_graphic_pane_g2_cp2_ParamLimits

0xd3d0,	// (0x000246b1) list_double_graphic_pane_g2_cp2

0xd3df,	// (0x000246c0) list_double_graphic_pane_g3_cp2

0xd3e7,	// (0x000246c8) list_double_graphic_pane_t1_cp2_ParamLimits

0xd3e7,	// (0x000246c8) list_double_graphic_pane_t1_cp2

0xd3fd,	// (0x000246de) list_double_graphic_pane_t2_cp2_ParamLimits

0xd3fd,	// (0x000246de) list_double_graphic_pane_t2_cp2

0xc29b,	// (0x0002357c) list_double_number_pane_g1_cp2_ParamLimits

0xc29b,	// (0x0002357c) list_double_number_pane_g1_cp2

0xc2a7,	// (0x00023588) list_double_number_pane_g2_cp2

0xd38a,	// (0x0002466b) list_double_number_pane_t1_cp2_ParamLimits

0xd38a,	// (0x0002466b) list_double_number_pane_t1_cp2

0xd39c,	// (0x0002467d) list_double_number_pane_t2_cp2_ParamLimits

0xd39c,	// (0x0002467d) list_double_number_pane_t2_cp2

0xd3b2,	// (0x00024693) list_double_number_pane_t3_cp2_ParamLimits

0xd3b2,	// (0x00024693) list_double_number_pane_t3_cp2

0xd302,	// (0x000245e3) list_single_graphic_pane_g1_cp2_ParamLimits

0xd302,	// (0x000245e3) list_single_graphic_pane_g1_cp2

0xc225,	// (0x00023506) list_single_graphic_pane_g2_cp2_ParamLimits

0xc225,	// (0x00023506) list_single_graphic_pane_g2_cp2

0xc231,	// (0x00023512) list_single_graphic_pane_g3_cp2

0xd2da,	// (0x000245bb) list_single_graphic_pane_t1_cp2_ParamLimits

0xd2da,	// (0x000245bb) list_single_graphic_pane_t1_cp2

0xc225,	// (0x00023506) list_single_number_pane_g1_cp2_ParamLimits

0xc225,	// (0x00023506) list_single_number_pane_g1_cp2

0xc231,	// (0x00023512) list_single_number_pane_g2_cp2

0xd2da,	// (0x000245bb) list_single_number_pane_t1_cp2_ParamLimits

0xd2da,	// (0x000245bb) list_single_number_pane_t1_cp2

0xd2f0,	// (0x000245d1) list_single_number_pane_t2_cp2_ParamLimits

0xd2f0,	// (0x000245d1) list_single_number_pane_t2_cp2

0xc14d,	// (0x0002342e) list_double2_pane_g1_cp2_ParamLimits

0xc14d,	// (0x0002342e) list_double2_pane_g1_cp2

0xc15c,	// (0x0002343d) list_double2_pane_g2_cp2

0xc273,	// (0x00023554) list_double2_pane_t1_cp2_ParamLimits

0xc273,	// (0x00023554) list_double2_pane_t1_cp2

0xc289,	// (0x0002356a) list_double2_pane_t2_cp2_ParamLimits

0xc289,	// (0x0002356a) list_double2_pane_t2_cp2

0xc29b,	// (0x0002357c) list_double_pane_g1_cp2_ParamLimits

0xc29b,	// (0x0002357c) list_double_pane_g1_cp2

0xc2a7,	// (0x00023588) list_double_pane_g2_cp2

0xc2af,	// (0x00023590) list_double_pane_t1_cp2_ParamLimits

0xc2af,	// (0x00023590) list_double_pane_t1_cp2

0xc2c5,	// (0x000235a6) list_double_pane_t2_cp2_ParamLimits

0xc2c5,	// (0x000235a6) list_double_pane_t2_cp2

0xc2ed,	// (0x000235ce) list_single_pane_cp2_g3

0xc225,	// (0x00023506) list_single_pane_g1_cp2_ParamLimits

0xc225,	// (0x00023506) list_single_pane_g1_cp2

0xc231,	// (0x00023512) list_single_pane_g2_cp2

0xc2fd,	// (0x000235de) list_single_pane_t1_cp2_ParamLimits

0xc2fd,	// (0x000235de) list_single_pane_t1_cp2

0xc315,	// (0x000235f6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc315,	// (0x000235f6) list_single_large_graphic_pane_g1_cp2

0xc321,	// (0x00023602) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc321,	// (0x00023602) list_single_large_graphic_pane_g2_cp2

0xc32d,	// (0x0002360e) list_single_large_graphic_pane_g3_cp2

0xc335,	// (0x00023616) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc335,	// (0x00023616) list_single_large_graphic_pane_g4_cp1

0xc34f,	// (0x00023630) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc34f,	// (0x00023630) list_single_large_graphic_pane_t1_cp2

0xd2bc,	// (0x0002459d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd2bc,	// (0x0002459d) list_single_graphic_heading_pane_g1_cp2

0xd297,	// (0x00024578) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd297,	// (0x00024578) list_single_graphic_heading_pane_g4_cp2

0xc231,	// (0x00023512) list_single_graphic_heading_pane_g5_cp2

0xc239,	// (0x0002351a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xc239,	// (0x0002351a) list_single_graphic_heading_pane_t1_cp2

0xd2c8,	// (0x000245a9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd2c8,	// (0x000245a9) list_single_graphic_heading_pane_t2_cp2

0xd28b,	// (0x0002456c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd28b,	// (0x0002456c) list_single_2graphic_pane_g1_cp2

0xd297,	// (0x00024578) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd297,	// (0x00024578) list_single_2graphic_pane_g2_cp2

0xc231,	// (0x00023512) list_single_2graphic_pane_g3_cp2

0xc7ae,	// (0x00023a8f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xc7ae,	// (0x00023a8f) list_single_2graphic_pane_g4_cp2

0xd2a6,	// (0x00024587) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd2a6,	// (0x00024587) list_single_2graphic_pane_t1_cp2

0xb38c,	// (0x0002266d) list_highlight_pane_g10_cp1

0xce9d,	// (0x0002417e) list_highlight_pane_g1_cp1

0xcea5,	// (0x00024186) list_highlight_pane_g2_cp1

0xcead,	// (0x0002418e) list_highlight_pane_g3_cp1

0xceb5,	// (0x00024196) list_highlight_pane_g4_cp1

0xcebd,	// (0x0002419e) list_highlight_pane_g5_cp1

0xcec5,	// (0x000241a6) list_highlight_pane_g6_cp1

0xcecd,	// (0x000241ae) list_highlight_pane_g7_cp1

0xced5,	// (0x000241b6) list_highlight_pane_g8_cp1

0xcedd,	// (0x000241be) list_highlight_pane_g9_cp1

0x9229,	// (0x0002050a) form_field_slider_pane_t3

0x9237,	// (0x00020518) form_field_slider_pane_t4

0xcde7,	// (0x000240c8) slider_form_pane_ParamLimits

0xcde7,	// (0x000240c8) slider_form_pane

0xb40e,	// (0x000226ef) control_abbreviations

0xb40e,	// (0x000226ef) control_conventions

0xb40e,	// (0x000226ef) control_definitions

0xb40e,	// (0x000226ef) format_table_attribute

0xd489,	// (0x0002476a) bg_popup_preview_window_pane_g9

0xb40e,	// (0x000226ef) format_table_data2

0xb40e,	// (0x000226ef) format_table_data3

0xb40e,	// (0x000226ef) format_table_data_example

0x0008,

0xb40e,	// (0x000226ef) intro_purpose

0xf8dc,	// (0x00026bbd) bg_popup_preview_window_pane_g

0xb40e,	// (0x000226ef) texts_category

0xb40e,	// (0x000226ef) texts_graphics

0xc365,	// (0x00023646) text_digital

0xc374,	// (0x00023655) text_primary

0xc383,	// (0x00023664) text_primary_small

0xc392,	// (0x00023673) text_secondary

0xc3a1,	// (0x00023682) text_title

0xd96d,	// (0x00024c4e) bg_passive_tab_pane_g1_cp3_srt

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp3_srt

0xd976,	// (0x00024c57) bg_passive_tab_pane_g3_cp3_srt

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp3_srt_ParamLimits

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp3_srt

0xd8a6,	// (0x00024b87) tabs_4_active_pane_srt_g1

0x7ff2,	// (0x0001f2d3) tabs_4_active_pane_srt_t1_ParamLimits

0x7ff2,	// (0x0001f2d3) tabs_4_active_pane_srt_t1

0xd96d,	// (0x00024c4e) bg_active_tab_pane_g1_cp3_copy1

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp3_copy1

0xd976,	// (0x00024c57) bg_active_tab_pane_g3_cp3_copy1

0xb472,	// (0x00022753) tabs_2_long_active_pane_srt_ParamLimits

0xb472,	// (0x00022753) tabs_2_long_active_pane_srt

0xb472,	// (0x00022753) tabs_2_long_passive_pane_srt_ParamLimits

0xb472,	// (0x00022753) tabs_2_long_passive_pane_srt

0xbb92,	// (0x00022e73) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbb92,	// (0x00022e73) bg_passive_tab_pane_cp4_srt

0xd838,	// (0x00024b19) bg_passive_tab_pane_g1_cp4_srt

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp4_srt

0xd841,	// (0x00024b22) bg_passive_tab_pane_g3_cp4_srt

0xb472,	// (0x00022753) bg_active_tab_pane_cp4_srt_ParamLimits

0xb472,	// (0x00022753) bg_active_tab_pane_cp4_srt

0x8315,	// (0x0001f5f6) tabs_2_long_active_pane_srt_t1_ParamLimits

0x8315,	// (0x0001f5f6) tabs_2_long_active_pane_srt_t1

0xd838,	// (0x00024b19) bg_active_tab_pane_g1_cp4_srt

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp4_srt

0xd841,	// (0x00024b22) bg_active_tab_pane_g3_cp4_srt

0xb45c,	// (0x0002273d) tabs_3_long_active_pane_srt_ParamLimits

0xb45c,	// (0x0002273d) tabs_3_long_active_pane_srt

0xb45c,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb45c,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt

0xb45c,	// (0x0002273d) tabs_3_long_passive_pane_srt_ParamLimits

0xb45c,	// (0x0002273d) tabs_3_long_passive_pane_srt

0xbb92,	// (0x00022e73) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbb92,	// (0x00022e73) bg_passive_tab_pane_cp5_srt

0xc101,	// (0x000233e2) bg_passive_tab_pane_g1_cp5_srt

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp5_srt

0xc10a,	// (0x000233eb) bg_passive_tab_pane_g3_cp5_srt

0xb472,	// (0x00022753) bg_active_tab_pane_cp5_srt_ParamLimits

0xb472,	// (0x00022753) bg_active_tab_pane_cp5_srt

0x832c,	// (0x0001f60d) tabs_3_long_active_pane_srt_t1_ParamLimits

0x832c,	// (0x0001f60d) tabs_3_long_active_pane_srt_t1

0xc101,	// (0x000233e2) bg_active_tab_pane_g1_cp5_srt

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp5_srt

0xc10a,	// (0x000233eb) bg_active_tab_pane_g3_cp5_srt

0xd82a,	// (0x00024b0b) navi_text_pane_srt_t1

0xd822,	// (0x00024b03) navi_icon_pane_srt_g1

0xc4b9,	// (0x0002379a) midp_editing_number_pane_srt

0xc3b0,	// (0x00023691) midp_ticker_pane_srt

0xc4c1,	// (0x000237a2) midp_ticker_pane_srt_g1

0xc4c9,	// (0x000237aa) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00026a53) midp_ticker_pane_srt_g

0xc4d1,	// (0x000237b2) midp_ticker_pane_srt_t1

0xd813,	// (0x00024af4) midp_editing_number_pane_t1_copy1

0x858c,	// (0x0001f86d) listscroll_midp_pane

0x858c,	// (0x0001f86d) midp_form_pane

0xc3b8,	// (0x00023699) midp_info_popup_window_ParamLimits

0xc3b8,	// (0x00023699) midp_info_popup_window

0xbab8,	// (0x00022d99) bg_popup_sub_pane_cp50_ParamLimits

0xbab8,	// (0x00022d99) bg_popup_sub_pane_cp50

0xcb04,	// (0x00023de5) listscroll_midp_info_pane_ParamLimits

0xcb04,	// (0x00023de5) listscroll_midp_info_pane

0xcaec,	// (0x00023dcd) listscroll_form_midp_pane_ParamLimits

0xcaec,	// (0x00023dcd) listscroll_form_midp_pane

0xcaf8,	// (0x00023dd9) scroll_bar_cp050

0x921d,	// (0x000204fe) list_midp_pane

0xe14f,	// (0x00025430) signal_pane_g2_cp

0xca1e,	// (0x00023cff) listscroll_midp_info_pane_t1_ParamLimits

0xca1e,	// (0x00023cff) listscroll_midp_info_pane_t1

0xca36,	// (0x00023d17) listscroll_midp_info_pane_t2_ParamLimits

0xca36,	// (0x00023d17) listscroll_midp_info_pane_t2

0xca74,	// (0x00023d55) listscroll_midp_info_pane_t3_ParamLimits

0xca74,	// (0x00023d55) listscroll_midp_info_pane_t3

0xcaae,	// (0x00023d8f) listscroll_midp_info_pane_t4_ParamLimits

0xcaae,	// (0x00023d8f) listscroll_midp_info_pane_t4

0x0003,

0xf817,	// (0x00026af8) listscroll_midp_info_pane_t_ParamLimits

0xf817,	// (0x00026af8) listscroll_midp_info_pane_t

0xbb5b,	// (0x00022e3c) scroll_pane_cp21

0xc9c2,	// (0x00023ca3) form_midp_field_choice_group_pane

0xc9cb,	// (0x00023cac) form_midp_field_text_pane

0xca04,	// (0x00023ce5) form_midp_field_time_pane

0xca0c,	// (0x00023ced) form_midp_gauge_slider_pane

0xca15,	// (0x00023cf6) form_midp_gauge_wait_pane

0xb40e,	// (0x000226ef) form_midp_image_pane

0x7aed,	// (0x0001edce) list_single_midp_pane_ParamLimits

0x7aed,	// (0x0001edce) list_single_midp_pane

0xc990,	// (0x00023c71) form_midp_field_text_pane_t1

0xc7e6,	// (0x00023ac7) input_focus_pane_cp050

0xc9b1,	// (0x00023c92) list_midp_form_text_pane

0xc95f,	// (0x00023c40) form_midp_field_choice_group_pane_t1

0xc96d,	// (0x00023c4e) input_focus_pane_cp051

0xc981,	// (0x00023c62) list_midp_choice_pane

0xb40e,	// (0x000226ef) status_idle_pane

0xc943,	// (0x00023c24) form_midp_field_time_pane_t1

0xb38c,	// (0x0002266d) wait_anim_pane_g2_copy1

0xc951,	// (0x00023c32) form_midp_field_time_pane_t2

0x0001,

0xc423,	// (0x00023704) aid_navinavi_width_2_pane

0xf812,	// (0x00026af3) form_midp_field_time_pane_t

0xb40e,	// (0x000226ef) input_focus_pane_cp052

0xb40e,	// (0x000226ef) bg_input_focus_pane_cp040

0xc91f,	// (0x00023c00) form_midp_gauge_slider_pane_t1

0xc92d,	// (0x00023c0e) form_midp_gauge_slider_pane_t2

0x9201,	// (0x000204e2) form_midp_gauge_slider_pane_t3

0x920f,	// (0x000204f0) form_midp_gauge_slider_pane_t4

0x0003,

0xf809,	// (0x00026aea) form_midp_gauge_slider_pane_t

0xc93b,	// (0x00023c1c) form_midp_slider_pane

0xb472,	// (0x00022753) bg_input_focus_pane_cp041_ParamLimits

0xb472,	// (0x00022753) bg_input_focus_pane_cp041

0xc8ef,	// (0x00023bd0) form_midp_gauge_wait_pane_t1_ParamLimits

0xc8ef,	// (0x00023bd0) form_midp_gauge_wait_pane_t1

0xc901,	// (0x00023be2) form_midp_gauge_wait_pane_t2_ParamLimits

0xc901,	// (0x00023be2) form_midp_gauge_wait_pane_t2

0x0001,

0xf804,	// (0x00026ae5) form_midp_gauge_wait_pane_t_ParamLimits

0xf804,	// (0x00026ae5) form_midp_gauge_wait_pane_t

0xc913,	// (0x00023bf4) form_midp_wait_pane_ParamLimits

0xc913,	// (0x00023bf4) form_midp_wait_pane

0xc8b9,	// (0x00023b9a) form_midp_image_pane_g1

0xc8c2,	// (0x00023ba3) form_midp_image_pane_t1

0xc8d1,	// (0x00023bb2) form_midp_image_pane_t2

0xc8e0,	// (0x00023bc1) form_midp_image_pane_t3

0x0002,

0xf7fd,	// (0x00026ade) form_midp_image_pane_t

0xc8b0,	// (0x00023b91) list_single_midp_pane_g1

0x36aa,	// (0x0001a98b) list_single_midp_pane_t1

0xc89c,	// (0x00023b7d) list_midp_form_item_pane_ParamLimits

0xc89c,	// (0x00023b7d) list_midp_form_item_pane

0xc3cb,	// (0x000236ac) list_midp_form_item_pane_t1

0xc3da,	// (0x000236bb) midp_ticker_pane_g1

0xc3e6,	// (0x000236c7) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00026a39) midp_ticker_pane_g

0xc3f2,	// (0x000236d3) midp_ticker_pane_t1

0xd813,	// (0x00024af4) midp_editing_number_pane_t1

0xd906,	// (0x00024be7) midp_editing_number_pane

0xd912,	// (0x00024bf3) midp_ticker_pane

0xd803,	// (0x00024ae4) ai_message_heading_pane

0xb40e,	// (0x000226ef) bg_popup_window_pane_cp14

0xd80b,	// (0x00024aec) listscroll_ai_message_pane

0xd78d,	// (0x00024a6e) ai_message_heading_pane_g1_ParamLimits

0xd78d,	// (0x00024a6e) ai_message_heading_pane_g1

0xd799,	// (0x00024a7a) ai_message_heading_pane_g2_ParamLimits

0xd799,	// (0x00024a7a) ai_message_heading_pane_g2

0xd7a5,	// (0x00024a86) ai_message_heading_pane_g3_ParamLimits

0xd7a5,	// (0x00024a86) ai_message_heading_pane_g3

0xd7b1,	// (0x00024a92) ai_message_heading_pane_g4_ParamLimits

0xd7b1,	// (0x00024a92) ai_message_heading_pane_g4

0x0003,

0xf93e,	// (0x00026c1f) ai_message_heading_pane_g_ParamLimits

0xf93e,	// (0x00026c1f) ai_message_heading_pane_g

0xd7bd,	// (0x00024a9e) ai_message_heading_pane_t1_ParamLimits

0xd7bd,	// (0x00024a9e) ai_message_heading_pane_t1

0xd7d7,	// (0x00024ab8) ai_message_heading_pane_t2_ParamLimits

0xd7d7,	// (0x00024ab8) ai_message_heading_pane_t2

0x0001,

0xf947,	// (0x00026c28) ai_message_heading_pane_t_ParamLimits

0xf947,	// (0x00026c28) ai_message_heading_pane_t

0xd7e9,	// (0x00024aca) bg_popup_heading_pane_cp1_ParamLimits

0xd7e9,	// (0x00024aca) bg_popup_heading_pane_cp1

0xd77b,	// (0x00024a5c) list_ai_message_pane_ParamLimits

0xd77b,	// (0x00024a5c) list_ai_message_pane

0xbb5b,	// (0x00022e3c) scroll_pane_cp10

0xd717,	// (0x000249f8) list_ai_message_pane_g1

0xd71f,	// (0x00024a00) list_ai_message_pane_g2

0x0001,

0xf91b,	// (0x00026bfc) list_ai_message_pane_g

0xd727,	// (0x00024a08) list_ai_message_pane_t1_ParamLimits

0xd727,	// (0x00024a08) list_ai_message_pane_t1

0xd73c,	// (0x00024a1d) list_ai_message_pane_t2_ParamLimits

0xd73c,	// (0x00024a1d) list_ai_message_pane_t2

0xd751,	// (0x00024a32) list_ai_message_pane_t3_ParamLimits

0xd751,	// (0x00024a32) list_ai_message_pane_t3

0xd766,	// (0x00024a47) list_ai_message_pane_t4_ParamLimits

0xd766,	// (0x00024a47) list_ai_message_pane_t4

0x0003,

0xf920,	// (0x00026c01) list_ai_message_pane_t_ParamLimits

0xf920,	// (0x00026c01) list_ai_message_pane_t

0xd705,	// (0x000249e6) cell_ai_soft_ind_pane_ParamLimits

0xd705,	// (0x000249e6) cell_ai_soft_ind_pane

0xc404,	// (0x000236e5) cell_ai_soft_ind_pane_g1_ParamLimits

0xc404,	// (0x000236e5) cell_ai_soft_ind_pane_g1

0xb40e,	// (0x000226ef) grid_highlight_cp1

0xc411,	// (0x000236f2) text_secondary_cp56_ParamLimits

0xc411,	// (0x000236f2) text_secondary_cp56

0xd6da,	// (0x000249bb) example_general_pane_ParamLimits

0xd6da,	// (0x000249bb) example_general_pane

0xd6e6,	// (0x000249c7) example_parent_pane_g1_ParamLimits

0xd6e6,	// (0x000249c7) example_parent_pane_g1

0xd6f2,	// (0x000249d3) example_parent_pane_t1_ParamLimits

0xd6f2,	// (0x000249d3) example_parent_pane_t1

0x8b27,	// (0x0001fe08) popup_preview_text_window_ParamLimits

0x8b27,	// (0x0001fe08) popup_preview_text_window

0xc2f5,	// (0x000235d6) list_single_pane_cp2_g4

0xb673,	// (0x00022954) bg_popup_preview_window_pane_ParamLimits

0xb673,	// (0x00022954) bg_popup_preview_window_pane

0xd491,	// (0x00024772) popup_preview_text_window_t1_ParamLimits

0xd491,	// (0x00024772) popup_preview_text_window_t1

0xd4af,	// (0x00024790) popup_preview_text_window_t2_ParamLimits

0xd4af,	// (0x00024790) popup_preview_text_window_t2

0xd4f8,	// (0x000247d9) popup_preview_text_window_t3_ParamLimits

0xd4f8,	// (0x000247d9) popup_preview_text_window_t3

0xd53d,	// (0x0002481e) popup_preview_text_window_t4_ParamLimits

0xd53d,	// (0x0002481e) popup_preview_text_window_t4

0x0004,

0xf8ef,	// (0x00026bd0) popup_preview_text_window_t_ParamLimits

0xf8ef,	// (0x00026bd0) popup_preview_text_window_t

0xd5bb,	// (0x0002489c) scroll_pane_cp11

0xc73c,	// (0x00023a1d) bg_popup_preview_window_pane_g1

0xd451,	// (0x00024732) bg_popup_preview_window_pane_g2

0xd459,	// (0x0002473a) bg_popup_preview_window_pane_g3

0xd461,	// (0x00024742) bg_popup_preview_window_pane_g4

0xd469,	// (0x0002474a) bg_popup_preview_window_pane_g5

0xd471,	// (0x00024752) bg_popup_preview_window_pane_g6

0xd479,	// (0x0002475a) bg_popup_preview_window_pane_g7

0xd481,	// (0x00024762) bg_popup_preview_window_pane_g8

0x3e37,	// (0x0001b118) aid_popup_width_pane

0x8aa9,	// (0x0001fd8a) popup_midp_note_alarm_window_ParamLimits

0x8aa9,	// (0x0001fd8a) popup_midp_note_alarm_window

0xba00,	// (0x00022ce1) data_form_pane_ParamLimits

0x7972,	// (0x0001ec53) form_field_data_pane_g1

0x82db,	// (0x0001f5bc) form_field_data_pane_t1_ParamLimits

0xba0c,	// (0x00022ced) input_focus_pane_ParamLimits

0xba1a,	// (0x00022cfb) data_form_wide_pane_ParamLimits

0x3387,	// (0x0001a668) form_field_data_wide_pane_g1

0x3393,	// (0x0001a674) form_field_data_wide_pane_t1_ParamLimits

0xb832,	// (0x00022b13) input_focus_pane_cp6_ParamLimits

0x82f3,	// (0x0001f5d4) input_popup_find_pane_g1_ParamLimits

0x82f3,	// (0x0001f5d4) input_popup_find_pane_g1

0x41f6,	// (0x0001b4d7) aid_navi_side_left_pane

0x4206,	// (0x0001b4e7) aid_navi_side_right_pane

0xcf6e,	// (0x0002424f) bg_popup_window_pane_cp30_ParamLimits

0xcf6e,	// (0x0002424f) bg_popup_window_pane_cp30

0xcfe8,	// (0x000242c9) popup_midp_note_alarm_window_g1_ParamLimits

0xcfe8,	// (0x000242c9) popup_midp_note_alarm_window_g1

0xd018,	// (0x000242f9) popup_midp_note_alarm_window_t1_ParamLimits

0xd018,	// (0x000242f9) popup_midp_note_alarm_window_t1

0xd0b9,	// (0x0002439a) popup_midp_note_alarm_window_t2_ParamLimits

0xd0b9,	// (0x0002439a) popup_midp_note_alarm_window_t2

0xd167,	// (0x00024448) popup_midp_note_alarm_window_t3_ParamLimits

0xd167,	// (0x00024448) popup_midp_note_alarm_window_t3

0xd18f,	// (0x00024470) popup_midp_note_alarm_window_t4_ParamLimits

0xd18f,	// (0x00024470) popup_midp_note_alarm_window_t4

0xd1af,	// (0x00024490) popup_midp_note_alarm_window_t5_ParamLimits

0xd1af,	// (0x00024490) popup_midp_note_alarm_window_t5

0x000a,

0xf88c,	// (0x00026b6d) popup_midp_note_alarm_window_t_ParamLimits

0xf88c,	// (0x00026b6d) popup_midp_note_alarm_window_t

0xd25b,	// (0x0002453c) wait_bar_pane_cp1_ParamLimits

0xd25b,	// (0x0002453c) wait_bar_pane_cp1

0xb40e,	// (0x000226ef) wait_anim_pane_copy1

0xb40e,	// (0x000226ef) wait_border_pane_copy1

0xccb4,	// (0x00023f95) wait_border_pane_g1_copy1

0x33ad,	// (0x0001a68e) form_field_popup_pane_g1

0x797c,	// (0x0001ec5d) form_field_popup_pane_t1_ParamLimits

0xba0c,	// (0x00022ced) input_focus_pane_cp7_ParamLimits

0xba00,	// (0x00022ce1) list_form_pane_ParamLimits

0x33cd,	// (0x0001a6ae) form_field_popup_wide_pane_g1

0x33d5,	// (0x0001a6b6) form_field_popup_wide_pane_t1_ParamLimits

0xba0c,	// (0x00022ced) input_focus_pane_cp8_ParamLimits

0xba46,	// (0x00022d27) list_form_wide_pane_ParamLimits

0xd99e,	// (0x00024c7f) aid_size_cell_graphic_pane

0x79f9,	// (0x0001ecda) data_form_pane_t1_ParamLimits

0x7b15,	// (0x0001edf6) data_form_wide_pane_t1_ParamLimits

0x8e85,	// (0x00020166) bg_status_flat_pane

0x7f4f,	// (0x0001f230) title_pane_t1_ParamLimits

0xb424,	// (0x00022705) title_pane_t2_ParamLimits

0xb44a,	// (0x0002272b) title_pane_t3_ParamLimits

0xf557,	// (0x00026838) title_pane_t_ParamLimits

0x8404,	// (0x0001f6e5) level_1_signal_ParamLimits

0x8416,	// (0x0001f6f7) level_2_signal_ParamLimits

0x8429,	// (0x0001f70a) level_3_signal_ParamLimits

0x843c,	// (0x0001f71d) level_4_signal_ParamLimits

0x844f,	// (0x0001f730) level_5_signal_ParamLimits

0x8462,	// (0x0001f743) level_6_signal_ParamLimits

0x8475,	// (0x0001f756) level_7_signal_ParamLimits

0x8404,	// (0x0001f6e5) level_1_battery_ParamLimits

0x8416,	// (0x0001f6f7) level_2_battery_ParamLimits

0x8429,	// (0x0001f70a) level_3_battery_ParamLimits

0x843c,	// (0x0001f71d) level_4_battery_ParamLimits

0x844f,	// (0x0001f730) level_5_battery_ParamLimits

0x8462,	// (0x0001f743) level_6_battery_ParamLimits

0x8475,	// (0x0001f756) level_7_battery_ParamLimits

0xce9d,	// (0x0002417e) bg_status_flat_pane_g1

0xcea5,	// (0x00024186) bg_status_flat_pane_g2

0xcead,	// (0x0002418e) bg_status_flat_pane_g3

0xceb5,	// (0x00024196) bg_status_flat_pane_g4

0xcebd,	// (0x0002419e) bg_status_flat_pane_g5

0xcec5,	// (0x000241a6) bg_status_flat_pane_g6

0xcecd,	// (0x000241ae) bg_status_flat_pane_g7

0x7fdc,	// (0x0001f2bd) tabs_3_active_pane_t1_ParamLimits

0x7fdc,	// (0x0001f2bd) tabs_3_passive_pane_t1_ParamLimits

0x7ff2,	// (0x0001f2d3) tabs_4_active_pane_t1_ParamLimits

0x7ff2,	// (0x0001f2d3) tabs_4_1_passive_pane_t1_ParamLimits

0x82ff,	// (0x0001f5e0) tabs_2_active_pane_t1_ParamLimits

0x82ff,	// (0x0001f5e0) tabs_2_passive_pane_t1_ParamLimits

0xb472,	// (0x00022753) bg_active_tab_pane_cp4_ParamLimits

0x8315,	// (0x0001f5f6) tabs_2_long_active_pane_t1_ParamLimits

0xbb92,	// (0x00022e73) bg_passive_tab_pane_cp4_ParamLimits

0x4ba2,	// (0x0001be83) list_single_midp_graphic_pane_t1_ParamLimits

0xb472,	// (0x00022753) bg_active_tab_pane_cp5_ParamLimits

0x832c,	// (0x0001f60d) tabs_3_long_active_pane_t1_ParamLimits

0xbb92,	// (0x00022e73) bg_passive_tab_pane_cp5_ParamLimits

0x4ba2,	// (0x0001be83) list_single_midp_graphic_pane_t1

0x8e85,	// (0x00020166) bg_status_flat_pane_ParamLimits

0xc61b,	// (0x000238fc) indicator_pane_cp2_ParamLimits

0xc61b,	// (0x000238fc) indicator_pane_cp2

0x8feb,	// (0x000202cc) navi_pane_srt_ParamLimits

0x8feb,	// (0x000202cc) navi_pane_srt

0xc643,	// (0x00023924) popup_clock_digital_analogue_window_cp1

0xb4b6,	// (0x00022797) indicator_pane_t1

0xc3b0,	// (0x00023691) copy_highlight_pane

0xc3b0,	// (0x00023691) cursor_graphics_pane

0xc3b0,	// (0x00023691) graphic_within_text_pane

0xc3b0,	// (0x00023691) link_highlight_pane

0xd57e,	// (0x0002485f) popup_preview_text_window_t5_ParamLimits

0xd57e,	// (0x0002485f) popup_preview_text_window_t5

0xc42b,	// (0x0002370c) cursor_digital_pane

0xc42b,	// (0x0002370c) cursor_primary_pane

0xc43c,	// (0x0002371d) cursor_primary_small_pane

0xc444,	// (0x00023725) cursor_secondary_pane

0xc44c,	// (0x0002372d) cursor_title_pane

0xc42b,	// (0x0002370c) link_highlight_digital_pane

0xc433,	// (0x00023714) link_highlight_primary_pane

0xc43c,	// (0x0002371d) link_highlight_primary_small_pane

0xc444,	// (0x00023725) link_highlight_secondary_pane

0xc44c,	// (0x0002372d) link_highlight_title_pane

0xc42b,	// (0x0002370c) copy_highlight_digital_pane

0xc42b,	// (0x0002370c) copy_highlight_primary_pane

0xc43c,	// (0x0002371d) copy_highlight_primary_small_pane

0xc444,	// (0x00023725) copy_highlight_secondary_pane

0xc44c,	// (0x0002372d) copy_highlight_title_pane

0xc444,	// (0x00023725) graphic_text_digital_pane

0xcf1d,	// (0x000241fe) graphic_text_primary_pane

0xcf26,	// (0x00024207) graphic_text_primary_small_pane

0xc43c,	// (0x0002371d) graphic_text_secondary_pane

0xc42b,	// (0x0002370c) graphic_text_title_pane

0x8628,	// (0x0001f909) cursor_primary_pane_g1

0xcf0f,	// (0x000241f0) cursor_text_primary_t1

0x9259,	// (0x0002053a) cursor_primary_small_pane_g1

0xcf01,	// (0x000241e2) cursor_text_primary_small_t1

0x924f,	// (0x00020530) cursor_primary_small_pane_g1_copy1

0xcef3,	// (0x000241d4) cursor_text_primary_small_t1_copy1

0xcee5,	// (0x000241c6) cursor_text_title_t1

0x9245,	// (0x00020526) cursor_title_pane_g1

0x8628,	// (0x0001f909) cursor_digital_pane_g1

0xc454,	// (0x00023735) cursor_text_digital_t1

0xc462,	// (0x00023743) link_highlight_primary_pane_g1

0xce8e,	// (0x0002416f) link_highlight_primary_pane_t1

0xc462,	// (0x00023743) link_highlight_primary_small_pane_g1

0xc46a,	// (0x0002374b) link_highlight_primary_small_pane_t1

0xc479,	// (0x0002375a) link_highlight_secondary_pane_g1

0xc481,	// (0x00023762) link_highlight_secondary_pane_t1

0xcdf3,	// (0x000240d4) link_highlight_title_pane_g1

0xce0a,	// (0x000240eb) link_highlight_title_pane_t1

0xcdf3,	// (0x000240d4) link_highlight_digital_pane_g1

0xcdfb,	// (0x000240dc) link_highlight_digital_pane_t1

0xcccf,	// (0x00023fb0) copy_highlight_primary_pane_g1

0xccf5,	// (0x00023fd6) copy_highlight_primary_pane_t1

0xcccf,	// (0x00023fb0) copy_highlight_primary_small_pane_g1

0xcce6,	// (0x00023fc7) copy_highlight_primary_small_pane_t1

0xc490,	// (0x00023771) copy_highlight_secondary_pane_g1

0xc498,	// (0x00023779) copy_highlight_secondary_pane_t1

0xcccf,	// (0x00023fb0) copy_highlight_title_pane_g1

0xccd7,	// (0x00023fb8) copy_highlight_title_pane_t1

0xcccf,	// (0x00023fb0) copy_highlight_digital_pane_g1

0xda99,	// (0x00024d7a) copy_highlight_digital_pane_t1

0xd9ed,	// (0x00024cce) graphic_text_primary_pane_g1

0xda7d,	// (0x00024d5e) graphic_text_primary_pane_t1

0xda8b,	// (0x00024d6c) graphic_text_primary_pane_t2

0x0001,

0xf9bb,	// (0x00026c9c) graphic_text_primary_pane_t

0xda59,	// (0x00024d3a) graphic_text_primary_small_pane_g1

0xda61,	// (0x00024d42) graphic_text_primary_small_pane_t1

0xda6f,	// (0x00024d50) graphic_text_primary_small_pane_t2

0x0001,

0xf9b6,	// (0x00026c97) graphic_text_primary_small_pane_t

0xda35,	// (0x00024d16) graphic_text_secondary_pane_g1

0xda3d,	// (0x00024d1e) graphic_text_secondary_pane_t1

0xda4b,	// (0x00024d2c) graphic_text_secondary_pane_t2

0x0001,

0xf9b1,	// (0x00026c92) graphic_text_secondary_pane_t

0xda11,	// (0x00024cf2) graphic_text_title_pane_g1

0xda19,	// (0x00024cfa) graphic_text_title_pane_t1

0xda27,	// (0x00024d08) graphic_text_title_pane_t2

0x0001,

0xf9ac,	// (0x00026c8d) graphic_text_title_pane_t

0xd9ed,	// (0x00024cce) graphic_text_digital_pane_g1

0xd9f5,	// (0x00024cd6) graphic_text_digital_pane_t1

0xda03,	// (0x00024ce4) graphic_text_digital_pane_t2

0x0001,

0xf9a7,	// (0x00026c88) graphic_text_digital_pane_t

0xb472,	// (0x00022753) navi_icon_pane_srt_ParamLimits

0xb472,	// (0x00022753) navi_icon_pane_srt

0xb40e,	// (0x000226ef) navi_midp_pane_srt

0xb40e,	// (0x000226ef) navi_navi_pane_srt

0xb472,	// (0x00022753) navi_text_pane_srt_ParamLimits

0xb472,	// (0x00022753) navi_text_pane_srt

0xd871,	// (0x00024b52) navi_navi_icon_text_pane_srt

0xd879,	// (0x00024b5a) navi_navi_pane_srt_g1_ParamLimits

0xd879,	// (0x00024b5a) navi_navi_pane_srt_g1

0xd88b,	// (0x00024b6c) navi_navi_pane_srt_g2_ParamLimits

0xd88b,	// (0x00024b6c) navi_navi_pane_srt_g2

0x0001,

0xf9a2,	// (0x00026c83) navi_navi_pane_srt_g_ParamLimits

0xf9a2,	// (0x00026c83) navi_navi_pane_srt_g

0xd89d,	// (0x00024b7e) navi_navi_tabs_pane_srt

0xd871,	// (0x00024b52) navi_navi_text_pane_srt

0xd871,	// (0x00024b52) navi_navi_volume_pane_srt

0xd9de,	// (0x00024cbf) navi_navi_text_pane_srt_t1

0x4f06,	// (0x0001c1e7) navi_navi_volume_pane_srt_g1

0x4f0e,	// (0x0001c1ef) volume_small_pane_srt_ParamLimits

0x4f0e,	// (0x0001c1ef) volume_small_pane_srt

0x449d,	// (0x0001b77e) volume_small_pane_srt_g1_ParamLimits

0x449d,	// (0x0001b77e) volume_small_pane_srt_g1

0x44ad,	// (0x0001b78e) volume_small_pane_srt_g2_ParamLimits

0x44ad,	// (0x0001b78e) volume_small_pane_srt_g2

0x44be,	// (0x0001b79f) volume_small_pane_srt_g3_ParamLimits

0x44be,	// (0x0001b79f) volume_small_pane_srt_g3

0x44cf,	// (0x0001b7b0) volume_small_pane_srt_g4_ParamLimits

0x44cf,	// (0x0001b7b0) volume_small_pane_srt_g4

0x44e0,	// (0x0001b7c1) volume_small_pane_srt_g5_ParamLimits

0x44e0,	// (0x0001b7c1) volume_small_pane_srt_g5

0x44f1,	// (0x0001b7d2) volume_small_pane_srt_g6_ParamLimits

0x44f1,	// (0x0001b7d2) volume_small_pane_srt_g6

0x4502,	// (0x0001b7e3) volume_small_pane_srt_g7_ParamLimits

0x4502,	// (0x0001b7e3) volume_small_pane_srt_g7

0x4513,	// (0x0001b7f4) volume_small_pane_srt_g8_ParamLimits

0x4513,	// (0x0001b7f4) volume_small_pane_srt_g8

0x4524,	// (0x0001b805) volume_small_pane_srt_g9_ParamLimits

0x4524,	// (0x0001b805) volume_small_pane_srt_g9

0x4535,	// (0x0001b816) volume_small_pane_srt_g10_ParamLimits

0x4535,	// (0x0001b816) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00026a3e) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00026a3e) volume_small_pane_srt_g

0xb71c,	// (0x000229fd) query_popup_data_pane_cp2

0xd9c4,	// (0x00024ca5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd9c4,	// (0x00024ca5) navi_navi_icon_text_pane_srt_t1

0xcf1d,	// (0x000241fe) navi_tabs_2_long_pane_srt

0xcf1d,	// (0x000241fe) navi_tabs_2_pane_srt

0xcf1d,	// (0x000241fe) navi_tabs_3_long_pane_srt

0xcf1d,	// (0x000241fe) navi_tabs_3_pane_srt

0xcf1d,	// (0x000241fe) navi_tabs_4_pane_srt

0x4ee6,	// (0x0001c1c7) tabs_2_active_pane_srt_ParamLimits

0x4ee6,	// (0x0001c1c7) tabs_2_active_pane_srt

0x4ef6,	// (0x0001c1d7) tabs_2_passive_pane_srt_ParamLimits

0x4ef6,	// (0x0001c1d7) tabs_2_passive_pane_srt

0xc7e6,	// (0x00023ac7) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc7e6,	// (0x00023ac7) bg_passive_tab_pane_cp1_srt

0xd8be,	// (0x00024b9f) bg_passive_tab_pane_g1_cp1_srt

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp1_srt

0xd8c7,	// (0x00024ba8) bg_passive_tab_pane_g3_cp1_srt

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp1_srt_ParamLimits

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp1_srt

0xd8b6,	// (0x00024b97) tabs_2_active_pane_srt_g1

0x82ff,	// (0x0001f5e0) tabs_2_active_pane_srt_t1_ParamLimits

0x82ff,	// (0x0001f5e0) tabs_2_active_pane_srt_t1

0xd8be,	// (0x00024b9f) bg_active_tab_pane_g1_cp1_srt

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp1_srt

0xd8c7,	// (0x00024ba8) bg_active_tab_pane_g3_cp1_srt

0x4eb3,	// (0x0001c194) tabs_3_active_pane_srt_ParamLimits

0x4eb3,	// (0x0001c194) tabs_3_active_pane_srt

0x4ec4,	// (0x0001c1a5) tabs_3_passive_pane_cp_srt_ParamLimits

0x4ec4,	// (0x0001c1a5) tabs_3_passive_pane_cp_srt

0x4ed5,	// (0x0001c1b6) tabs_3_passive_pane_srt_ParamLimits

0x4ed5,	// (0x0001c1b6) tabs_3_passive_pane_srt

0xc7e6,	// (0x00023ac7) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc7e6,	// (0x00023ac7) bg_passive_tab_pane_cp2_srt

0xc4a7,	// (0x00023788) bg_passive_tab_pane_g1_cp2_srt

0xc0ba,	// (0x0002339b) bg_passive_tab_pane_g2_cp2_srt

0xc4b0,	// (0x00023791) bg_passive_tab_pane_g3_cp2_srt

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp2_srt_ParamLimits

0xb45c,	// (0x0002273d) bg_active_tab_pane_cp2_srt

0xd9b4,	// (0x00024c95) tabs_3_active_pane_srt_g1

0x7fdc,	// (0x0001f2bd) tabs_3_active_pane_srt_t1_ParamLimits

0x7fdc,	// (0x0001f2bd) tabs_3_active_pane_srt_t1

0xc4a7,	// (0x00023788) bg_active_tab_pane_g1_cp2_srt

0xc0ba,	// (0x0002339b) bg_active_tab_pane_g2_cp2_srt

0xc4b0,	// (0x00023791) bg_active_tab_pane_g3_cp2_srt

0x4e6b,	// (0x0001c14c) tabs_4_active_pane_srt_ParamLimits

0x4e6b,	// (0x0001c14c) tabs_4_active_pane_srt

0x4e7d,	// (0x0001c15e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4e7d,	// (0x0001c15e) tabs_4_passive_pane_cp2_srt

0x469a,	// (0x0001b97b) aid_size_cell_toolbar

0x8819,	// (0x0001fafa) main_idle_act_pane_ParamLimits

0x47fb,	// (0x0001badc) popup_large_graphic_colour_window_ParamLimits

0x8d77,	// (0x00020058) popup_toolbar_window_ParamLimits

0x8d77,	// (0x00020058) popup_toolbar_window

0x3724,	// (0x0001aa05) list_single_graphic_2heading_pane_ParamLimits

0x3724,	// (0x0001aa05) list_single_graphic_2heading_pane

0xbd57,	// (0x00023038) aid_size_cell_apps_grid_lsc_pane

0xbd69,	// (0x0002304a) aid_size_cell_apps_grid_prt_pane

0xbb92,	// (0x00022e73) bg_wml_button_pane_cp1_ParamLimits

0xbb92,	// (0x00022e73) bg_wml_button_pane_cp1

0xc990,	// (0x00023c71) form_midp_field_text_pane_t1_ParamLimits

0xc7e6,	// (0x00023ac7) input_focus_pane_cp050_ParamLimits

0xc9b1,	// (0x00023c92) list_midp_form_text_pane_ParamLimits

0xc96d,	// (0x00023c4e) input_focus_pane_cp051_ParamLimits

0xc981,	// (0x00023c62) list_midp_choice_pane_ParamLimits

0xc86a,	// (0x00023b4b) list_single_2graphic_pane_cp3_ParamLimits

0xc86a,	// (0x00023b4b) list_single_2graphic_pane_cp3

0xc87d,	// (0x00023b5e) list_single_midp_graphic_pane_ParamLimits

0xc87d,	// (0x00023b5e) list_single_midp_graphic_pane

0x2e77,	// (0x0001a158) list_single_graphic_2heading_pane_g1_ParamLimits

0x2e77,	// (0x0001a158) list_single_graphic_2heading_pane_g1

0x35a2,	// (0x0001a883) list_single_graphic_2heading_pane_g4_ParamLimits

0x35a2,	// (0x0001a883) list_single_graphic_2heading_pane_g4

0x35ae,	// (0x0001a88f) list_single_graphic_2heading_pane_g5_ParamLimits

0x35ae,	// (0x0001a88f) list_single_graphic_2heading_pane_g5

0x0002,

0xf5c1,	// (0x000268a2) list_single_graphic_2heading_pane_g_ParamLimits

0xf5c1,	// (0x000268a2) list_single_graphic_2heading_pane_g

0x35ba,	// (0x0001a89b) list_single_graphic_2heading_pane_t1_ParamLimits

0x35ba,	// (0x0001a89b) list_single_graphic_2heading_pane_t1

0x35ce,	// (0x0001a8af) list_single_graphic_2heading_pane_t2_ParamLimits

0x35ce,	// (0x0001a8af) list_single_graphic_2heading_pane_t2

0x35e8,	// (0x0001a8c9) list_single_graphic_2heading_pane_t3_ParamLimits

0x35e8,	// (0x0001a8c9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b0,	// (0x00026a91) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b0,	// (0x00026a91) list_single_graphic_2heading_pane_t

0xc686,	// (0x00023967) bg_popup_sub_pane_cp2

0xc6ac,	// (0x0002398d) grid_toobar_pane

0x4b3e,	// (0x0001be1f) cell_toolbar_pane_ParamLimits

0x4b3e,	// (0x0001be1f) cell_toolbar_pane

0xc6e2,	// (0x000239c3) cell_toolbar_pane_g1_ParamLimits

0xc6e2,	// (0x000239c3) cell_toolbar_pane_g1

0xc6f4,	// (0x000239d5) cell_toolbar_pane_g2_ParamLimits

0xc6f4,	// (0x000239d5) cell_toolbar_pane_g2

0x0001,

0xf7b7,	// (0x00026a98) cell_toolbar_pane_g_ParamLimits

0xf7b7,	// (0x00026a98) cell_toolbar_pane_g

0xc716,	// (0x000239f7) grid_highlight_pane_cp2_ParamLimits

0xc716,	// (0x000239f7) grid_highlight_pane_cp2

0xc730,	// (0x00023a11) toolbar_button_pane

0xc73c,	// (0x00023a1d) toolbar_button_pane_g1

0xc744,	// (0x00023a25) toolbar_button_pane_g2

0xc74c,	// (0x00023a2d) toolbar_button_pane_g3

0xc754,	// (0x00023a35) toolbar_button_pane_g4

0xc75c,	// (0x00023a3d) toolbar_button_pane_g5

0xc764,	// (0x00023a45) toolbar_button_pane_g6

0xc76c,	// (0x00023a4d) toolbar_button_pane_g7

0xc774,	// (0x00023a55) toolbar_button_pane_g8

0xc77c,	// (0x00023a5d) toolbar_button_pane_g9

0x0009,

0xf7bc,	// (0x00026a9d) toolbar_button_pane_g

0x4b6d,	// (0x0001be4e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4b6d,	// (0x0001be4e) list_single_2graphic_pane_g1_cp3

0x9169,	// (0x0002044a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9169,	// (0x0002044a) list_single_2graphic_pane_g2_cp3

0xc231,	// (0x00023512) list_single_2graphic_pane_g3_cp3

0xc7ae,	// (0x00023a8f) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc7ae,	// (0x00023a8f) list_single_2graphic_pane_g4_cp3

0x4b88,	// (0x0001be69) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4b88,	// (0x0001be69) list_single_2graphic_pane_t1_cp3

0xc225,	// (0x00023506) list_single_midp_graphic_pane_g2_ParamLimits

0xc225,	// (0x00023506) list_single_midp_graphic_pane_g2

0x46a2,	// (0x0001b983) aid_zoom_text_primary

0x3575,	// (0x0001a856) aid_zoom_text_secondary

0x8662,	// (0x0001f943) status_small_pane_g7_ParamLimits

0x8662,	// (0x0001f943) status_small_pane_g7

0x8685,	// (0x0001f966) status_small_pane_t1_ParamLimits

0x7f24,	// (0x0001f205) title_pane_g2

0x0003,

0xf54e,	// (0x0002682f) title_pane_g

0x8206,	// (0x0001f4e7) aid_size_cell_colour_1_pane_ParamLimits

0x8206,	// (0x0001f4e7) aid_size_cell_colour_1_pane

0x821a,	// (0x0001f4fb) aid_size_cell_colour_2_pane_ParamLimits

0x821a,	// (0x0001f4fb) aid_size_cell_colour_2_pane

0x822e,	// (0x0001f50f) aid_size_cell_colour_3_pane_ParamLimits

0x822e,	// (0x0001f50f) aid_size_cell_colour_3_pane

0x8242,	// (0x0001f523) aid_size_cell_colour_4_pane_ParamLimits

0x8242,	// (0x0001f523) aid_size_cell_colour_4_pane

0x4158,	// (0x0001b439) title_pane_stacon_g1_ParamLimits

0x4158,	// (0x0001b439) title_pane_stacon_g1

0xcd4c,	// (0x0002402d) popup_note_wait_window_g3_ParamLimits

0xcd4c,	// (0x0002402d) popup_note_wait_window_g3

0xcdc2,	// (0x000240a3) popup_note_wait_window_t5_ParamLimits

0xcdc2,	// (0x000240a3) popup_note_wait_window_t5

0xb40e,	// (0x000226ef) main_feb_china_hwr_fs_writing_pane

0x887a,	// (0x0001fb5b) popup_feb_china_hwr_fs_window_ParamLimits

0x887a,	// (0x0001fb5b) popup_feb_china_hwr_fs_window

0x917a,	// (0x0002045b) aid_size_cell_hwr_fs_ParamLimits

0x917a,	// (0x0002045b) aid_size_cell_hwr_fs

0xc7e6,	// (0x00023ac7) bg_popup_sub_pane_cp3_ParamLimits

0xc7e6,	// (0x00023ac7) bg_popup_sub_pane_cp3

0x918f,	// (0x00020470) grid_hwr_fs_pane_ParamLimits

0x918f,	// (0x00020470) grid_hwr_fs_pane

0x4be1,	// (0x0001bec2) linegrid_hwr_fs_pane_ParamLimits

0x4be1,	// (0x0001bec2) linegrid_hwr_fs_pane

0x91a7,	// (0x00020488) cell_hwr_fs_pane_ParamLimits

0x91a7,	// (0x00020488) cell_hwr_fs_pane

0xc7f2,	// (0x00023ad3) linegrid_hwr_fs_pane_g1_ParamLimits

0xc7f2,	// (0x00023ad3) linegrid_hwr_fs_pane_g1

0x91c7,	// (0x000204a8) linegrid_hwr_fs_pane_g2_ParamLimits

0x91c7,	// (0x000204a8) linegrid_hwr_fs_pane_g2

0xc7fe,	// (0x00023adf) linegrid_hwr_fs_pane_g3_ParamLimits

0xc7fe,	// (0x00023adf) linegrid_hwr_fs_pane_g3

0x4c0f,	// (0x0001bef0) linegrid_hwr_fs_pane_g4_ParamLimits

0x4c0f,	// (0x0001bef0) linegrid_hwr_fs_pane_g4

0x4c29,	// (0x0001bf0a) linegrid_hwr_fs_pane_g5_ParamLimits

0x4c29,	// (0x0001bf0a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e2,	// (0x00026ac3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e2,	// (0x00026ac3) linegrid_hwr_fs_pane_g

0xc80a,	// (0x00023aeb) cell_hwr_fs_pane_g1_ParamLimits

0xc80a,	// (0x00023aeb) cell_hwr_fs_pane_g1

0xc654,	// (0x00023935) cell_hwr_fs_pane_g2_ParamLimits

0xc654,	// (0x00023935) cell_hwr_fs_pane_g2

0x91d9,	// (0x000204ba) cell_hwr_fs_pane_g3_ParamLimits

0x91d9,	// (0x000204ba) cell_hwr_fs_pane_g3

0x91e6,	// (0x000204c7) cell_hwr_fs_pane_g4_ParamLimits

0x91e6,	// (0x000204c7) cell_hwr_fs_pane_g4

0x0003,

0xf7ed,	// (0x00026ace) cell_hwr_fs_pane_g_ParamLimits

0xf7ed,	// (0x00026ace) cell_hwr_fs_pane_g

0x91f3,	// (0x000204d4) cell_hwr_fs_pane_t1

0xb40e,	// (0x000226ef) grid_highlight_pane_cp6

0xb40e,	// (0x000226ef) main_idle_act2_pane

0xbb42,	// (0x00022e23) aid_inside_area_popup_secondary

0x9366,	// (0x00020647) aid_inside_area_window_primary_ParamLimits

0x9366,	// (0x00020647) aid_inside_area_window_primary

0xdaa8,	// (0x00024d89) ai2_news_ticker_pane

0xdab0,	// (0x00024d91) aid_size_cell_ai1_link_ParamLimits

0xdab0,	// (0x00024d91) aid_size_cell_ai1_link

0x9772,	// (0x00020a53) popup_ai2_data_window_ParamLimits

0x9772,	// (0x00020a53) popup_ai2_data_window

0xdaca,	// (0x00024dab) popup_ai2_link_window_ParamLimits

0xdaca,	// (0x00024dab) popup_ai2_link_window

0xc7e6,	// (0x00023ac7) bg_popup_sub_pane_cp4_ParamLimits

0xc7e6,	// (0x00023ac7) bg_popup_sub_pane_cp4

0xdade,	// (0x00024dbf) grid_ai2_link_pane_ParamLimits

0xdade,	// (0x00024dbf) grid_ai2_link_pane

0xdaf5,	// (0x00024dd6) popup_ai2_link_window_g1_ParamLimits

0xdaf5,	// (0x00024dd6) popup_ai2_link_window_g1

0xdb01,	// (0x00024de2) popup_ai2_link_window_g2_ParamLimits

0xdb01,	// (0x00024de2) popup_ai2_link_window_g2

0x0001,

0xf9c0,	// (0x00026ca1) popup_ai2_link_window_g_ParamLimits

0xf9c0,	// (0x00026ca1) popup_ai2_link_window_g

0xdb10,	// (0x00024df1) ai2_mp_button_pane

0xdb18,	// (0x00024df9) ai2_mp_volume_pane

0xc96d,	// (0x00023c4e) bg_popup_sub_pane_cp5_ParamLimits

0xc96d,	// (0x00023c4e) bg_popup_sub_pane_cp5

0xdb20,	// (0x00024e01) heading_ai2_gene_pane_ParamLimits

0xdb20,	// (0x00024e01) heading_ai2_gene_pane

0xdb2c,	// (0x00024e0d) list_ai2_gene_pane_ParamLimits

0xdb2c,	// (0x00024e0d) list_ai2_gene_pane

0xdb74,	// (0x00024e55) cell_ai2_link_pane_ParamLimits

0xdb74,	// (0x00024e55) cell_ai2_link_pane

0xdb8a,	// (0x00024e6b) cell_ai2_link_pane_g1

0xb40e,	// (0x000226ef) grid_highlight_pane_cp7

0x4f23,	// (0x0001c204) ai2_mp_volume_pane_g1

0xdc1f,	// (0x00024f00) ai2_mp_volume_pane_g2

0x979c,	// (0x00020a7d) list_ai2_gene_pane_t1

0xdc27,	// (0x00024f08) ai2_mp_volume_pane_g3

0x0002,

0xf9d9,	// (0x00026cba) ai2_mp_volume_pane_g

0x4f2b,	// (0x0001c20c) volume_small_pane_cp3

0xdc2f,	// (0x00024f10) aid_size_cell_ai2_button

0xdc37,	// (0x00024f18) grid_ai2_button_pane

0xdc40,	// (0x00024f21) cell_ai2_button_pane_ParamLimits

0xdc40,	// (0x00024f21) cell_ai2_button_pane

0xb38c,	// (0x0002266d) cell_ai2_button_pane_g1

0xb40e,	// (0x000226ef) grid_highlight_pane_cp8

0xdbdf,	// (0x00024ec0) ai2_gene_pane_t1_ParamLimits

0xdbdf,	// (0x00024ec0) ai2_gene_pane_t1

0x8801,	// (0x0001fae2) aid_height_parent_landscape

0x951e,	// (0x000207ff) aid_height_set_list

0xd85f,	// (0x00024b40) aid_size_parent

0xd99e,	// (0x00024c7f) aid_size_cell_graphic_pane_ParamLimits

0xdb3c,	// (0x00024e1d) popup_ai2_data_window_g1_ParamLimits

0xdb3c,	// (0x00024e1d) popup_ai2_data_window_g1

0xdb48,	// (0x00024e29) ai2_news_ticker_pane_g1

0xdb50,	// (0x00024e31) ai2_news_ticker_pane_g2

0x0001,

0xf9c5,	// (0x00026ca6) ai2_news_ticker_pane_g

0xdb58,	// (0x00024e39) ai2_news_ticker_pane_t1

0xdb66,	// (0x00024e47) ai2_news_ticker_pane_t2

0x0001,

0xf9ca,	// (0x00026cab) ai2_news_ticker_pane_t

0xd97f,	// (0x00024c60) heading_ai2_gene_pane_g1

0xdb93,	// (0x00024e74) heading_ai2_gene_pane_t1_ParamLimits

0xdb93,	// (0x00024e74) heading_ai2_gene_pane_t1

0xdba8,	// (0x00024e89) list_highlight_pane_cp6

0x9786,	// (0x00020a67) ai2_gene_pane_ParamLimits

0x9786,	// (0x00020a67) ai2_gene_pane

0x97aa,	// (0x00020a8b) list_ai2_gene_pane_t2

0x0001,

0xf9cf,	// (0x00026cb0) list_ai2_gene_pane_t

0xdbb0,	// (0x00024e91) list_highlight_pane_cp8_ParamLimits

0xdbb0,	// (0x00024e91) list_highlight_pane_cp8

0xdbc1,	// (0x00024ea2) ai2_gene_pane_g1_ParamLimits

0xdbc1,	// (0x00024ea2) ai2_gene_pane_g1

0xdbd3,	// (0x00024eb4) ai2_gene_pane_g2_ParamLimits

0xdbd3,	// (0x00024eb4) ai2_gene_pane_g2

0x0001,

0xf9d4,	// (0x00026cb5) ai2_gene_pane_g_ParamLimits

0xf9d4,	// (0x00026cb5) ai2_gene_pane_g

0xb9b3,	// (0x00022c94) scroll_pane_cp12

0x87c0,	// (0x0001faa1) control_pane_t3_ParamLimits

0x87c0,	// (0x0001faa1) control_pane_t3

0x8676,	// (0x0001f957) status_small_pane_g8_ParamLimits

0x8676,	// (0x0001f957) status_small_pane_g8

0x88ee,	// (0x0001fbcf) popup_find_window_ParamLimits

0x8ae1,	// (0x0001fdc2) popup_note_image_window_ParamLimits

0x2e77,	// (0x0001a158) list_double2_graphic_pane_vc_g1_ParamLimits

0x2e77,	// (0x0001a158) list_double2_graphic_pane_vc_g1

0x35a2,	// (0x0001a883) list_double2_graphic_pane_vc_g2_ParamLimits

0x35a2,	// (0x0001a883) list_double2_graphic_pane_vc_g2

0x35ae,	// (0x0001a88f) list_double2_graphic_pane_vc_g3_ParamLimits

0x35ae,	// (0x0001a88f) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x000268a2) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x000268a2) list_double2_graphic_pane_vc_g

0x3600,	// (0x0001a8e1) list_double2_graphic_pane_vc_t1_ParamLimits

0x3600,	// (0x0001a8e1) list_double2_graphic_pane_vc_t1

0x35a2,	// (0x0001a883) list_single_heading_pane_vc_g1_ParamLimits

0x35a2,	// (0x0001a883) list_single_heading_pane_vc_g1

0x35ae,	// (0x0001a88f) list_single_heading_pane_vc_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000268a9) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000268a9) list_single_heading_pane_vc_g

0x3616,	// (0x0001a8f7) list_single_heading_pane_vc_t1_ParamLimits

0x3616,	// (0x0001a8f7) list_single_heading_pane_vc_t1

0x362c,	// (0x0001a90d) list_single_heading_pane_vc_t2_ParamLimits

0x362c,	// (0x0001a90d) list_single_heading_pane_vc_t2

0x0001,

0xf7d1,	// (0x00026ab2) list_single_heading_pane_vc_t_ParamLimits

0xf7d1,	// (0x00026ab2) list_single_heading_pane_vc_t

0x363e,	// (0x0001a91f) list_setting_number_pane_vc_g1_ParamLimits

0x363e,	// (0x0001a91f) list_setting_number_pane_vc_g1

0x364a,	// (0x0001a92b) list_setting_number_pane_vc_g2_ParamLimits

0x364a,	// (0x0001a92b) list_setting_number_pane_vc_g2

0x0001,

0xf7d6,	// (0x00026ab7) list_setting_number_pane_vc_g_ParamLimits

0xf7d6,	// (0x00026ab7) list_setting_number_pane_vc_g

0x3656,	// (0x0001a937) list_setting_number_pane_vc_t1_ParamLimits

0x3656,	// (0x0001a937) list_setting_number_pane_vc_t1

0x366a,	// (0x0001a94b) list_setting_number_pane_vc_t2_ParamLimits

0x366a,	// (0x0001a94b) list_setting_number_pane_vc_t2

0x3686,	// (0x0001a967) list_setting_number_pane_vc_t3_ParamLimits

0x3686,	// (0x0001a967) list_setting_number_pane_vc_t3

0x0002,

0xf7db,	// (0x00026abc) list_setting_number_pane_vc_t_ParamLimits

0xf7db,	// (0x00026abc) list_setting_number_pane_vc_t

0x369e,	// (0x0001a97f) set_value_pane_vc_ParamLimits

0x369e,	// (0x0001a97f) set_value_pane_vc

0x3724,	// (0x0001aa05) list_double2_graphic_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_double2_graphic_pane_vc

0xd925,	// (0x00024c06) list_double2_large_graphic_pane_vc_ParamLimits

0xd925,	// (0x00024c06) list_double2_large_graphic_pane_vc

0x3724,	// (0x0001aa05) list_double2_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_double2_pane_vc

0x3724,	// (0x0001aa05) list_double_graphic_heading_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_double_graphic_heading_pane_vc

0x3724,	// (0x0001aa05) list_double_graphic_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_double_graphic_pane_vc

0x3724,	// (0x0001aa05) list_double_heading_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_double_heading_pane_vc

0x3738,	// (0x0001aa19) list_double_large_graphic_pane_vc_ParamLimits

0x3738,	// (0x0001aa19) list_double_large_graphic_pane_vc

0x3724,	// (0x0001aa05) list_double_number_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_double_number_pane_vc

0x3724,	// (0x0001aa05) list_double_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_double_pane_vc

0x3724,	// (0x0001aa05) list_double_time_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_double_time_pane_vc

0x3724,	// (0x0001aa05) list_setting_number_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_setting_number_pane_vc

0x3724,	// (0x0001aa05) list_setting_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_setting_pane_vc

0x3724,	// (0x0001aa05) list_single_graphic_heading_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_single_graphic_heading_pane_vc

0x3724,	// (0x0001aa05) list_single_heading_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_single_heading_pane_vc

0x3724,	// (0x0001aa05) list_single_number_heading_pane_vc_ParamLimits

0x3724,	// (0x0001aa05) list_single_number_heading_pane_vc

0x378d,	// (0x0001aa6e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x378d,	// (0x0001aa6e) list_double_graphic_heading_pane_vc_g1

0x35a2,	// (0x0001a883) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x35a2,	// (0x0001a883) list_double_graphic_heading_pane_vc_g2

0x35ae,	// (0x0001a88f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x35ae,	// (0x0001a88f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e0,	// (0x00026cc1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e0,	// (0x00026cc1) list_double_graphic_heading_pane_vc_g

0x3799,	// (0x0001aa7a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3799,	// (0x0001aa7a) list_double_graphic_heading_pane_vc_t1

0x37af,	// (0x0001aa90) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x37af,	// (0x0001aa90) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x00026cc8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x00026cc8) list_double_graphic_heading_pane_vc_t

0x363e,	// (0x0001a91f) list_setting_pane_vc_g1_ParamLimits

0x363e,	// (0x0001a91f) list_setting_pane_vc_g1

0x364a,	// (0x0001a92b) list_setting_pane_vc_g2_ParamLimits

0x364a,	// (0x0001a92b) list_setting_pane_vc_g2

0x0001,

0xf7d6,	// (0x00026ab7) list_setting_pane_vc_g_ParamLimits

0xf7d6,	// (0x00026ab7) list_setting_pane_vc_g

0x37c7,	// (0x0001aaa8) list_setting_pane_vc_t1_ParamLimits

0x37c7,	// (0x0001aaa8) list_setting_pane_vc_t1

0x37db,	// (0x0001aabc) list_setting_pane_vc_t2_ParamLimits

0x37db,	// (0x0001aabc) list_setting_pane_vc_t2

0x0001,

0xfa2a,	// (0x00026d0b) list_setting_pane_vc_t_ParamLimits

0xfa2a,	// (0x00026d0b) list_setting_pane_vc_t

0x369e,	// (0x0001a97f) set_value_pane_cp_vc_ParamLimits

0x369e,	// (0x0001a97f) set_value_pane_cp_vc

0x35a2,	// (0x0001a883) list_single_number_heading_pane_vc_g1_ParamLimits

0x35a2,	// (0x0001a883) list_single_number_heading_pane_vc_g1

0x35ae,	// (0x0001a88f) list_single_number_heading_pane_vc_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000268a9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000268a9) list_single_number_heading_pane_vc_g

0x3616,	// (0x0001a8f7) list_single_number_heading_pane_vc_t1_ParamLimits

0x3616,	// (0x0001a8f7) list_single_number_heading_pane_vc_t1

0x37ef,	// (0x0001aad0) list_single_number_heading_pane_vc_t2_ParamLimits

0x37ef,	// (0x0001aad0) list_single_number_heading_pane_vc_t2

0x3801,	// (0x0001aae2) list_single_number_heading_pane_vc_t3_ParamLimits

0x3801,	// (0x0001aae2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2f,	// (0x00026d10) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x00026d10) list_single_number_heading_pane_vc_t

0x2e77,	// (0x0001a158) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2e77,	// (0x0001a158) list_single_graphic_heading_pane_vc_g1

0x35a2,	// (0x0001a883) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x35a2,	// (0x0001a883) list_single_graphic_heading_pane_vc_g4

0x35ae,	// (0x0001a88f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x35ae,	// (0x0001a88f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x000268a2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x000268a2) list_single_graphic_heading_pane_vc_g

0x3616,	// (0x0001a8f7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3616,	// (0x0001a8f7) list_single_graphic_heading_pane_vc_t1

0x3813,	// (0x0001aaf4) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3813,	// (0x0001aaf4) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa36,	// (0x00026d17) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x00026d17) list_single_graphic_heading_pane_vc_t

0x35a2,	// (0x0001a883) list_double2_pane_vc_g1_ParamLimits

0x35a2,	// (0x0001a883) list_double2_pane_vc_g1

0x35ae,	// (0x0001a88f) list_double2_pane_vc_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000268a9) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000268a9) list_double2_pane_vc_g

0x3825,	// (0x0001ab06) list_double2_pane_vc_t1_ParamLimits

0x3825,	// (0x0001ab06) list_double2_pane_vc_t1

0x383b,	// (0x0001ab1c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x383b,	// (0x0001ab1c) list_double2_large_graphic_pane_vc_g1

0x3847,	// (0x0001ab28) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3847,	// (0x0001ab28) list_double2_large_graphic_pane_vc_g2

0x3853,	// (0x0001ab34) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3853,	// (0x0001ab34) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x000268c6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x000268c6) list_double2_large_graphic_pane_vc_g

0x385f,	// (0x0001ab40) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x385f,	// (0x0001ab40) list_double2_large_graphic_pane_vc_t1

0x3875,	// (0x0001ab56) list_double_time_pane_vc_g1_ParamLimits

0x3875,	// (0x0001ab56) list_double_time_pane_vc_g1

0x3881,	// (0x0001ab62) list_double_time_pane_vc_g2_ParamLimits

0x3881,	// (0x0001ab62) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x00026d1c) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x00026d1c) list_double_time_pane_vc_g

0x388d,	// (0x0001ab6e) list_double_time_pane_vc_t1_ParamLimits

0x388d,	// (0x0001ab6e) list_double_time_pane_vc_t1

0x38ab,	// (0x0001ab8c) list_double_time_pane_vc_t2_ParamLimits

0x38ab,	// (0x0001ab8c) list_double_time_pane_vc_t2

0x38ef,	// (0x0001abd0) list_double_time_pane_vc_t3_ParamLimits

0x38ef,	// (0x0001abd0) list_double_time_pane_vc_t3

0x3901,	// (0x0001abe2) list_double_time_pane_vc_t4_ParamLimits

0x3901,	// (0x0001abe2) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x00026d21) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x00026d21) list_double_time_pane_vc_t

0x35a2,	// (0x0001a883) list_double_pane_vc_g1_ParamLimits

0x35a2,	// (0x0001a883) list_double_pane_vc_g1

0x35ae,	// (0x0001a88f) list_double_pane_vc_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000268a9) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000268a9) list_double_pane_vc_g

0x3913,	// (0x0001abf4) list_double_pane_vc_t1_ParamLimits

0x3913,	// (0x0001abf4) list_double_pane_vc_t1

0x3925,	// (0x0001ac06) list_double_pane_vc_t2_ParamLimits

0x3925,	// (0x0001ac06) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x00026d2a) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x00026d2a) list_double_pane_vc_t

0x35a2,	// (0x0001a883) list_double_number_pane_vc_g1_ParamLimits

0x35a2,	// (0x0001a883) list_double_number_pane_vc_g1

0x35ae,	// (0x0001a88f) list_double_number_pane_vc_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000268a9) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000268a9) list_double_number_pane_vc_g

0x393b,	// (0x0001ac1c) list_double_number_pane_vc_t1_ParamLimits

0x393b,	// (0x0001ac1c) list_double_number_pane_vc_t1

0x394f,	// (0x0001ac30) list_double_number_pane_vc_t2_ParamLimits

0x394f,	// (0x0001ac30) list_double_number_pane_vc_t2

0x3961,	// (0x0001ac42) list_double_number_pane_vc_t3_ParamLimits

0x3961,	// (0x0001ac42) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x00026d2f) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x00026d2f) list_double_number_pane_vc_t

0x3977,	// (0x0001ac58) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3977,	// (0x0001ac58) list_double_large_graphic_pane_vc_g1

0x3983,	// (0x0001ac64) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3983,	// (0x0001ac64) list_double_large_graphic_pane_vc_g2

0x3994,	// (0x0001ac75) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3994,	// (0x0001ac75) list_double_large_graphic_pane_vc_g3

0x39a0,	// (0x0001ac81) list_double_large_graphic_pane_vc_g4_ParamLimits

0x39a0,	// (0x0001ac81) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x00026d36) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x00026d36) list_double_large_graphic_pane_vc_g

0x39ac,	// (0x0001ac8d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x39ac,	// (0x0001ac8d) list_double_large_graphic_pane_vc_t1

0x39be,	// (0x0001ac9f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x39be,	// (0x0001ac9f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x00026d3f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x00026d3f) list_double_large_graphic_pane_vc_t

0x35a2,	// (0x0001a883) list_double_heading_pane_vc_g1_ParamLimits

0x35a2,	// (0x0001a883) list_double_heading_pane_vc_g1

0x35ae,	// (0x0001a88f) list_double_heading_pane_vc_g2_ParamLimits

0x35ae,	// (0x0001a88f) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000268a9) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000268a9) list_double_heading_pane_vc_g

0x39d8,	// (0x0001acb9) list_double_heading_pane_vc_t1_ParamLimits

0x39d8,	// (0x0001acb9) list_double_heading_pane_vc_t1

0x3616,	// (0x0001a8f7) list_double_heading_pane_vc_t2_ParamLimits

0x3616,	// (0x0001a8f7) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x00026d44) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x00026d44) list_double_heading_pane_vc_t

0x39ea,	// (0x0001accb) list_double_graphic_pane_vc_g1_ParamLimits

0x39ea,	// (0x0001accb) list_double_graphic_pane_vc_g1

0x39fd,	// (0x0001acde) list_double_graphic_pane_vc_g2_ParamLimits

0x39fd,	// (0x0001acde) list_double_graphic_pane_vc_g2

0x35a2,	// (0x0001a883) list_double_graphic_pane_vc_g3_ParamLimits

0x35a2,	// (0x0001a883) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x00026d49) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00026d49) list_double_graphic_pane_vc_g

0x3a1a,	// (0x0001acfb) list_double_graphic_pane_vc_t1_ParamLimits

0x3a1a,	// (0x0001acfb) list_double_graphic_pane_vc_t1

0x3a38,	// (0x0001ad19) list_double_graphic_pane_vc_t2_ParamLimits

0x3a38,	// (0x0001ad19) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00026d52) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00026d52) list_double_graphic_pane_vc_t

0x3e3f,	// (0x0001b120) aid_size_cell_fastswap

0x7d56,	// (0x0001f037) aid_size_cell_touch_ParamLimits

0x7d56,	// (0x0001f037) aid_size_cell_touch

0x3f8c,	// (0x0001b26d) popup_fast_swap_wide_window_ParamLimits

0x3f8c,	// (0x0001b26d) popup_fast_swap_wide_window

0x7eb7,	// (0x0001f198) touch_pane_ParamLimits

0x7eb7,	// (0x0001f198) touch_pane

0x32e3,	// (0x0001a5c4) button_value_adjust_pane_cp2

0xd8ae,	// (0x00024b8f) button_value_adjust_pane_cp4

0x3303,	// (0x0001a5e4) form_field_data_pane_cp2

0x7939,	// (0x0001ec1a) form_field_data_wide_pane_cp2

0xbd8e,	// (0x0002306f) bg_scroll_pane_ParamLimits

0x4279,	// (0x0001b55a) scroll_handle_pane_ParamLimits

0x428d,	// (0x0001b56e) scroll_sc2_down_pane_ParamLimits

0x428d,	// (0x0001b56e) scroll_sc2_down_pane

0xbdbf,	// (0x000230a0) scroll_sc2_up_pane_ParamLimits

0xbdbf,	// (0x000230a0) scroll_sc2_up_pane

0x98c0,	// (0x00020ba1) grid_wheel_folder_pane_g1_ParamLimits

0x98c0,	// (0x00020ba1) grid_wheel_folder_pane_g1

0x4441,	// (0x0001b722) clock_nsta_pane_cp2_ParamLimits

0x4441,	// (0x0001b722) clock_nsta_pane_cp2

0x858c,	// (0x0001f86d) listscroll_midp_pane_ParamLimits

0x859b,	// (0x0001f87c) midp_canvas_pane

0x4688,	// (0x0001b969) nsta_clock_indic_pane

0xc565,	// (0x00023846) listscroll_form_pane_vc

0xc56d,	// (0x0002384e) listscroll_set_pane_vc_ParamLimits

0xc56d,	// (0x0002384e) listscroll_set_pane_vc

0x8ead,	// (0x0002018e) clock_nsta_pane

0x8ed0,	// (0x000201b1) indicator_nsta_pane

0xc686,	// (0x00023967) bg_popup_sub_pane_cp2_ParamLimits

0xc69a,	// (0x0002397b) find_pane_cp2_ParamLimits

0xc69a,	// (0x0002397b) find_pane_cp2

0xc6ac,	// (0x0002398d) grid_toobar_pane_ParamLimits

0xc7ba,	// (0x00023a9b) list_form_gen_pane_vc_ParamLimits

0xc7ba,	// (0x00023a9b) list_form_gen_pane_vc

0xc7d0,	// (0x00023ab1) scroll_pane_cp8_vc_ParamLimits

0xc7d0,	// (0x00023ab1) scroll_pane_cp8_vc

0xc820,	// (0x00023b01) data_form_wide_pane_vc_ParamLimits

0xc820,	// (0x00023b01) data_form_wide_pane_vc

0xc82c,	// (0x00023b0d) form_field_data_wide_pane_vc_g1

0xc834,	// (0x00023b15) form_field_data_wide_pane_vc_t1_ParamLimits

0xc834,	// (0x00023b15) form_field_data_wide_pane_vc_t1

0xba0c,	// (0x00022ced) input_focus_pane_cp6_vc_ParamLimits

0xba0c,	// (0x00022ced) input_focus_pane_cp6_vc

0x921d,	// (0x000204fe) list_midp_pane_ParamLimits

0xd8d0,	// (0x00024bb1) scroll_pane_cp16_ParamLimits

0xd8d0,	// (0x00024bb1) scroll_pane_cp16

0xcb32,	// (0x00023e13) button_value_adjust_pane_ParamLimits

0xcb32,	// (0x00023e13) button_value_adjust_pane

0x952a,	// (0x0002080b) button_value_adjust_pane_cp6_ParamLimits

0x952a,	// (0x0002080b) button_value_adjust_pane_cp6

0x9634,	// (0x00020915) settings_code_pane_cp_ParamLimits

0x9634,	// (0x00020915) settings_code_pane_cp

0xb38c,	// (0x0002266d) cell_touch_pane_g1

0xb38c,	// (0x0002266d) cell_touch_pane_g2

0x0001,

0xf703,	// (0x000269e4) cell_touch_pane_g

0x97b8,	// (0x00020a99) cell_touch_pane_cp_ParamLimits

0x97b8,	// (0x00020a99) cell_touch_pane_cp

0x97d4,	// (0x00020ab5) cell_touch_pane_ParamLimits

0x97d4,	// (0x00020ab5) cell_touch_pane

0xb38c,	// (0x0002266d) scroll_sc2_down_pane_g1

0xb38c,	// (0x0002266d) scroll_sc2_up_pane_g1

0xb40e,	// (0x000226ef) bg_set_opt_pane_cp4_vc

0xdc52,	// (0x00024f33) list_set_graphic_pane_vc_g1_ParamLimits

0xdc52,	// (0x00024f33) list_set_graphic_pane_vc_g1

0xdc5e,	// (0x00024f3f) list_set_graphic_pane_vc_g2_ParamLimits

0xdc5e,	// (0x00024f3f) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x00026ccd) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x00026ccd) list_set_graphic_pane_vc_g

0xdc6a,	// (0x00024f4b) text_primary_small_cp13_vc_ParamLimits

0xdc6a,	// (0x00024f4b) text_primary_small_cp13_vc

0xdc82,	// (0x00024f63) list_set_graphic_pane_vc_ParamLimits

0xdc82,	// (0x00024f63) list_set_graphic_pane_vc

0xb40e,	// (0x000226ef) input_focus_pane_cp2_vc

0xb38c,	// (0x0002266d) setting_code_pane_vc_g1

0xdc95,	// (0x00024f76) setting_code_pane_vc_t1

0xdca3,	// (0x00024f84) set_text_pane_vc_t1_ParamLimits

0xdca3,	// (0x00024f84) set_text_pane_vc_t1

0xb40e,	// (0x000226ef) input_focus_pane_cp1_vc

0xdcbe,	// (0x00024f9f) list_set_text_pane_vc

0xb38c,	// (0x0002266d) setting_text_pane_vc_g1

0xb40e,	// (0x000226ef) bg_set_opt_pane_cp2_vc

0xdcc8,	// (0x00024fa9) setting_slider_graphic_pane_vc_g1

0xdcd0,	// (0x00024fb1) setting_slider_graphic_pane_vc_t1

0xdcde,	// (0x00024fbf) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x00026cd2) setting_slider_graphic_pane_vc_t

0xdcec,	// (0x00024fcd) slider_set_pane_cp_vc

0xdcf4,	// (0x00024fd5) slider_set_pane_vc_g1

0xdcfd,	// (0x00024fde) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x00026cd7) slider_set_pane_vc_g

0xba67,	// (0x00022d48) set_opt_bg_pane_g1_copy1

0xba6f,	// (0x00022d50) set_opt_bg_pane_g2_copy1

0xdd29,	// (0x0002500a) set_opt_bg_pane_g3_copy1

0xba7f,	// (0x00022d60) set_opt_bg_pane_g4_copy1

0xba87,	// (0x00022d68) set_opt_bg_pane_g5_copy1

0xba8f,	// (0x00022d70) set_opt_bg_pane_g6_copy1

0xdd31,	// (0x00025012) set_opt_bg_pane_g7_copy1

0xdd39,	// (0x0002501a) set_opt_bg_pane_g8_copy1

0xdd41,	// (0x00025022) set_opt_bg_pane_g9_copy1

0xb40e,	// (0x000226ef) bg_set_opt_pane_cp_vc

0xdd49,	// (0x0002502a) setting_slider_pane_vc_t1

0xdcd0,	// (0x00024fb1) setting_slider_pane_vc_t2

0xdcde,	// (0x00024fbf) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x00026ce6) setting_slider_pane_vc_t

0xdcec,	// (0x00024fcd) slider_set_pane_vc

0x4c4d,	// (0x0001bf2e) volume_set_pane_vc_g1

0x4f34,	// (0x0001c215) volume_set_pane_vc_g2

0x4f3d,	// (0x0001c21e) volume_set_pane_vc_g3

0x4f46,	// (0x0001c227) volume_set_pane_vc_g4

0x4f4f,	// (0x0001c230) volume_set_pane_vc_g5

0x4f58,	// (0x0001c239) volume_set_pane_vc_g6

0x4f61,	// (0x0001c242) volume_set_pane_vc_g7

0x4f6a,	// (0x0001c24b) volume_set_pane_vc_g8

0x4f73,	// (0x0001c254) volume_set_pane_vc_g9

0x4f7c,	// (0x0001c25d) volume_set_pane_vc_g10

0x0009,

0xfa0c,	// (0x00026ced) volume_set_pane_vc_g

0xdd58,	// (0x00025039) volume_set_pane_vc

0xdd60,	// (0x00025041) button_value_adjust_pane_cp1_vc

0xdd6a,	// (0x0002504b) list_highlight_pane_cp2_vc

0xdd73,	// (0x00025054) list_set_pane_vc_ParamLimits

0xdd73,	// (0x00025054) list_set_pane_vc

0xddc5,	// (0x000250a6) main_pane_set_vc_t1_ParamLimits

0xddc5,	// (0x000250a6) main_pane_set_vc_t1

0xddda,	// (0x000250bb) main_pane_set_vc_t2_ParamLimits

0xddda,	// (0x000250bb) main_pane_set_vc_t2

0xddec,	// (0x000250cd) main_pane_set_vc_t3_ParamLimits

0xddec,	// (0x000250cd) main_pane_set_vc_t3

0xddfe,	// (0x000250df) main_pane_set_vc_t4_ParamLimits

0xddfe,	// (0x000250df) main_pane_set_vc_t4

0x0003,

0xfa21,	// (0x00026d02) main_pane_set_vc_t_ParamLimits

0xfa21,	// (0x00026d02) main_pane_set_vc_t

0xde10,	// (0x000250f1) setting_code_pane_vc_ParamLimits

0xde10,	// (0x000250f1) setting_code_pane_vc

0xde1f,	// (0x00025100) setting_slider_graphic_pane_vc

0xde1f,	// (0x00025100) setting_slider_pane_vc

0xde1f,	// (0x00025100) setting_text_pane_vc

0xde1f,	// (0x00025100) setting_volume_pane_vc

0xde27,	// (0x00025108) scroll_pane_cp121_vc

0xb9f7,	// (0x00022cd8) set_content_pane_vc

0xde2f,	// (0x00025110) button_value_adjust_pane_g1

0xde38,	// (0x00025119) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x00026d57) button_value_adjust_pane_g

0xde41,	// (0x00025122) form_field_slider_wide_pane_vc_t1_ParamLimits

0xde41,	// (0x00025122) form_field_slider_wide_pane_vc_t1

0xde57,	// (0x00025138) form_field_slider_wide_pane_vc_t2_ParamLimits

0xde57,	// (0x00025138) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x00026d5c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00026d5c) form_field_slider_wide_pane_vc_t

0xb45c,	// (0x0002273d) input_focus_pane_cp10_vc_ParamLimits

0xb45c,	// (0x0002273d) input_focus_pane_cp10_vc

0xde82,	// (0x00025163) slider_cont_pane_cp1_vc_ParamLimits

0xde82,	// (0x00025163) slider_cont_pane_cp1_vc

0xdcf4,	// (0x00024fd5) slider_form_pane_g1_cp2

0xdcfd,	// (0x00024fde) slider_form_pane_g2_cp2

0xde9d,	// (0x0002517e) form_field_slider_pane_vc_t3

0xdeab,	// (0x0002518c) form_field_slider_pane_vc_t4

0xdeb9,	// (0x0002519a) slider_form_pane_vc_ParamLimits

0xdeb9,	// (0x0002519a) slider_form_pane_vc

0xdec6,	// (0x000251a7) form_field_slider_pane_vc_t1_ParamLimits

0xdec6,	// (0x000251a7) form_field_slider_pane_vc_t1

0xdedc,	// (0x000251bd) form_field_slider_pane_vc_t2_ParamLimits

0xdedc,	// (0x000251bd) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x00026d6e) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x00026d6e) form_field_slider_pane_vc_t

0xb45c,	// (0x0002273d) input_focus_pane_cp9_vc_ParamLimits

0xb45c,	// (0x0002273d) input_focus_pane_cp9_vc

0xdeee,	// (0x000251cf) slider_cont_pane_vc_ParamLimits

0xdeee,	// (0x000251cf) slider_cont_pane_vc

0xdf00,	// (0x000251e1) list_form_graphic_pane_cp_vc_ParamLimits

0xdf00,	// (0x000251e1) list_form_graphic_pane_cp_vc

0xc82c,	// (0x00023b0d) form_field_popup_wide_pane_vc_g1

0xdf15,	// (0x000251f6) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdf15,	// (0x000251f6) form_field_popup_wide_pane_vc_t1

0xba0c,	// (0x00022ced) input_focus_pane_cp8_vc_ParamLimits

0xba0c,	// (0x00022ced) input_focus_pane_cp8_vc

0xdf54,	// (0x00025235) list_form_wide_pane_vc_ParamLimits

0xdf54,	// (0x00025235) list_form_wide_pane_vc

0xdf60,	// (0x00025241) list_form_graphic_pane_vc_g1

0xdf68,	// (0x00025249) list_form_graphic_pane_vc_t1_ParamLimits

0xdf68,	// (0x00025249) list_form_graphic_pane_vc_t1

0xb472,	// (0x00022753) list_highlight_pane_cp5_vc_ParamLimits

0xb472,	// (0x00022753) list_highlight_pane_cp5_vc

0xdf84,	// (0x00025265) list_form_graphic_pane_vc_ParamLimits

0xdf84,	// (0x00025265) list_form_graphic_pane_vc

0xc82c,	// (0x00023b0d) form_field_popup_pane_vc_g1

0xdf9a,	// (0x0002527b) form_field_popup_pane_vc_t1_ParamLimits

0xdf9a,	// (0x0002527b) form_field_popup_pane_vc_t1

0xba0c,	// (0x00022ced) input_focus_pane_cp7_vc_ParamLimits

0xba0c,	// (0x00022ced) input_focus_pane_cp7_vc

0xdfaf,	// (0x00025290) list_form_pane_vc_ParamLimits

0xdfaf,	// (0x00025290) list_form_pane_vc

0xdfbb,	// (0x0002529c) data_form_pane_vc_t1_ParamLimits

0xdfbb,	// (0x0002529c) data_form_pane_vc_t1

0xba67,	// (0x00022d48) input_focus_pane_vc_g1

0xba6f,	// (0x00022d50) input_focus_pane_vc_g2

0xba77,	// (0x00022d58) input_focus_pane_vc_g3

0xba7f,	// (0x00022d60) input_focus_pane_vc_g4

0xba87,	// (0x00022d68) input_focus_pane_vc_g5

0xba8f,	// (0x00022d70) input_focus_pane_vc_g6

0xba97,	// (0x00022d78) input_focus_pane_vc_g7

0xba9f,	// (0x00022d80) input_focus_pane_vc_g8

0xbaa7,	// (0x00022d88) input_focus_pane_vc_g9

0xb38c,	// (0x0002266d) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002696d) input_focus_pane_vc_g

0xc820,	// (0x00023b01) data_form_pane_vc_ParamLimits

0xc820,	// (0x00023b01) data_form_pane_vc

0xc82c,	// (0x00023b0d) form_field_data_pane_vc_g1

0xdfd6,	// (0x000252b7) form_field_data_pane_vc_t1_ParamLimits

0xdfd6,	// (0x000252b7) form_field_data_pane_vc_t1

0xba0c,	// (0x00022ced) input_focus_pane_vc_ParamLimits

0xba0c,	// (0x00022ced) input_focus_pane_vc

0xc784,	// (0x00023a65) button_value_adjust_pane_cp3_vc

0xd8ae,	// (0x00024b8f) button_value_adjust_pane_cp5_vc

0xdfec,	// (0x000252cd) form_field_data_pane_vc_ParamLimits

0xdfec,	// (0x000252cd) form_field_data_pane_vc

0xc78c,	// (0x00023a6d) form_field_data_pane_vc_cp2

0xe003,	// (0x000252e4) form_field_data_wide_pane_vc_ParamLimits

0xe003,	// (0x000252e4) form_field_data_wide_pane_vc

0xe019,	// (0x000252fa) form_field_data_wide_pane_vc_cp2

0xe021,	// (0x00025302) form_field_popup_pane_vc_ParamLimits

0xe021,	// (0x00025302) form_field_popup_pane_vc

0xe038,	// (0x00025319) form_field_popup_wide_pane_vc_ParamLimits

0xe038,	// (0x00025319) form_field_popup_wide_pane_vc

0xe04e,	// (0x0002532f) form_field_slider_pane_vc_ParamLimits

0xe04e,	// (0x0002532f) form_field_slider_pane_vc

0xe061,	// (0x00025342) form_field_slider_wide_pane_vc_ParamLimits

0xe061,	// (0x00025342) form_field_slider_wide_pane_vc

0x97f2,	// (0x00020ad3) grid_touch_1_pane_ParamLimits

0x97f2,	// (0x00020ad3) grid_touch_1_pane

0x9806,	// (0x00020ae7) grid_touch_2_pane_ParamLimits

0x9806,	// (0x00020ae7) grid_touch_2_pane

0xe074,	// (0x00025355) touch_pane_g1_ParamLimits

0xe074,	// (0x00025355) touch_pane_g1

0xe082,	// (0x00025363) cell_app_pane_cp_wide_ParamLimits

0xe082,	// (0x00025363) cell_app_pane_cp_wide

0xe092,	// (0x00025373) grid_popup_fast_wide_pane_ParamLimits

0xe092,	// (0x00025373) grid_popup_fast_wide_pane

0xe0a6,	// (0x00025387) scroll_pane_cp19_ParamLimits

0xe0a6,	// (0x00025387) scroll_pane_cp19

0xb40e,	// (0x000226ef) bg_popup_window_pane_cp20

0xe0ba,	// (0x0002539b) listscroll_popup_fast_wide_pane

0xc794,	// (0x00023a75) grid_indicator_nsta_pane

0xe0c2,	// (0x000253a3) clock_nsta_pane_g1

0xe0cb,	// (0x000253ac) clock_nsta_pane_t1

0x9830,	// (0x00020b11) cell_indicator_nsta_pane_ParamLimits

0x9830,	// (0x00020b11) cell_indicator_nsta_pane

0xe074,	// (0x00025355) cell_indicator_nsta_pane_g1

0x9847,	// (0x00020b28) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x00026d7f) cell_indicator_nsta_pane_g

0xe0e7,	// (0x000253c8) clock_nsta_pane_cp

0xe0ef,	// (0x000253d0) indicator_nsta_pane_cp

0xe0f8,	// (0x000253d9) nsta_clock_indic_pane_g1

0xb4ae,	// (0x0002278f) grid_indicator_pane

0xbeb1,	// (0x00023192) scroll_pane_cp29

0x4398,	// (0x0001b679) indicator_nsta_pane_cp2_ParamLimits

0x4398,	// (0x0001b679) indicator_nsta_pane_cp2

0xb472,	// (0x00022753) main_apps_wheel_pane

0xc9cb,	// (0x00023cac) form_midp_field_text_pane_ParamLimits

0xcaf8,	// (0x00023dd9) scroll_bar_cp050_ParamLimits

0xe161,	// (0x00025442) cell_indicator_pane_ParamLimits

0xe161,	// (0x00025442) cell_indicator_pane

0xe177,	// (0x00025458) cell_indicator_pane_g1

0x9854,	// (0x00020b35) grid_wheel_folder_pane_ParamLimits

0x9854,	// (0x00020b35) grid_wheel_folder_pane

0x9862,	// (0x00020b43) list_wheel_apps_pane_ParamLimits

0x9862,	// (0x00020b43) list_wheel_apps_pane

0x986e,	// (0x00020b4f) main_apps_wheel_pane_g1_ParamLimits

0x986e,	// (0x00020b4f) main_apps_wheel_pane_g1

0x987a,	// (0x00020b5b) main_apps_wheel_pane_g2_ParamLimits

0x987a,	// (0x00020b5b) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x00026d9b) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x00026d9b) main_apps_wheel_pane_g

0x9886,	// (0x00020b67) main_apps_wheel_pane_t1_ParamLimits

0x9886,	// (0x00020b67) main_apps_wheel_pane_t1

0x9898,	// (0x00020b79) list_wheel_apps_pane_g1

0x98a0,	// (0x00020b81) list_wheel_apps_pane_g2

0x98a8,	// (0x00020b89) list_wheel_apps_pane_g3

0x98b0,	// (0x00020b91) list_wheel_apps_pane_g4

0x98b8,	// (0x00020b99) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x00026da0) list_wheel_apps_pane_g

0xb472,	// (0x00022753) navi_icon_text_pane

0x8db9,	// (0x0002009a) aid_fill_nsta

0xe181,	// (0x00025462) navi_icon_text_pane_g1

0xe18d,	// (0x0002546e) navi_icon_text_pane_t1

0xc12b,	// (0x0002340c) list_set_graphic_pane_t1_ParamLimits

0xc12b,	// (0x0002340c) list_set_graphic_pane_t1

0xd1de,	// (0x000244bf) popup_midp_note_alarm_window_t6_ParamLimits

0xd1de,	// (0x000244bf) popup_midp_note_alarm_window_t6

0xd1f0,	// (0x000244d1) popup_midp_note_alarm_window_t7_ParamLimits

0xd1f0,	// (0x000244d1) popup_midp_note_alarm_window_t7

0xd202,	// (0x000244e3) popup_midp_note_alarm_window_t8_ParamLimits

0xd202,	// (0x000244e3) popup_midp_note_alarm_window_t8

0xd214,	// (0x000244f5) popup_midp_note_alarm_window_t9_ParamLimits

0xd214,	// (0x000244f5) popup_midp_note_alarm_window_t9

0xd226,	// (0x00024507) popup_midp_note_alarm_window_t10_ParamLimits

0xd226,	// (0x00024507) popup_midp_note_alarm_window_t10

0xd238,	// (0x00024519) popup_midp_note_alarm_window_t11_ParamLimits

0xd238,	// (0x00024519) popup_midp_note_alarm_window_t11

0xd24a,	// (0x0002452b) scroll_pane_cp17_ParamLimits

0xd24a,	// (0x0002452b) scroll_pane_cp17

0x4c4d,	// (0x0001bf2e) volume_small_pane_cp_g1

0x4f85,	// (0x0001c266) volume_small_pane_cp_g2

0x4f8e,	// (0x0001c26f) volume_small_pane_cp_g3

0x4f97,	// (0x0001c278) volume_small_pane_cp_g4

0x4c7a,	// (0x0001bf5b) volume_small_pane_cp_g5

0x4fa0,	// (0x0001c281) volume_small_pane_cp_g6

0x4fa9,	// (0x0001c28a) volume_small_pane_cp_g7

0x4fb2,	// (0x0001c293) volume_small_pane_cp_g8

0x4fbb,	// (0x0001c29c) volume_small_pane_cp_g9

0x4fc4,	// (0x0001c2a5) volume_small_pane_cp_g10

0xc3da,	// (0x000236bb) midp_ticker_pane_g1_ParamLimits

0xc3e6,	// (0x000236c7) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00026a39) midp_ticker_pane_g_ParamLimits

0xc3f2,	// (0x000236d3) midp_ticker_pane_t1_ParamLimits

0x8dcf,	// (0x000200b0) aid_fill_nsta_2

0xcae4,	// (0x00023dc5) list_form2_midp_pane

0xd906,	// (0x00024be7) midp_editing_number_pane_ParamLimits

0xd912,	// (0x00024bf3) midp_ticker_pane_ParamLimits

0xe19f,	// (0x00025480) form2_midp_field_pane

0xe1a7,	// (0x00025488) scroll_pane_cp51

0xe1c7,	// (0x000254a8) form2_midp_button_pane_ParamLimits

0xe1c7,	// (0x000254a8) form2_midp_button_pane

0xe1d9,	// (0x000254ba) form2_midp_content_pane_ParamLimits

0xe1d9,	// (0x000254ba) form2_midp_content_pane

0xe1f3,	// (0x000254d4) form2_midp_field_choice_group_pane

0xe1fb,	// (0x000254dc) form2_midp_field_pane_g1

0xe203,	// (0x000254e4) form2_midp_field_pane_g2

0xe20b,	// (0x000254ec) form2_midp_field_pane_g3

0xe213,	// (0x000254f4) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x00026dc5) form2_midp_field_pane_g

0xe21b,	// (0x000254fc) form2_midp_gauge_slider_pane

0xe223,	// (0x00025504) form2_midp_gauge_wait_pane

0xe22b,	// (0x0002550c) form2_midp_image_pane_ParamLimits

0xe22b,	// (0x0002550c) form2_midp_image_pane

0xe246,	// (0x00025527) form2_midp_label_pane_ParamLimits

0xe246,	// (0x00025527) form2_midp_label_pane

0x98ed,	// (0x00020bce) form2_midp_label_pane_cp_ParamLimits

0x98ed,	// (0x00020bce) form2_midp_label_pane_cp

0xe25f,	// (0x00025540) form2_midp_string_pane_ParamLimits

0xe25f,	// (0x00025540) form2_midp_string_pane

0x3a56,	// (0x0001ad37) form2_midp_text_pane_ParamLimits

0x3a56,	// (0x0001ad37) form2_midp_text_pane

0xe271,	// (0x00025552) form2_midp_time_pane

0xe281,	// (0x00025562) input_focus_pane_cp51_ParamLimits

0xe281,	// (0x00025562) input_focus_pane_cp51

0xe299,	// (0x0002557a) form2_midp_label_pane_t1_ParamLimits

0xe299,	// (0x0002557a) form2_midp_label_pane_t1

0x3a6f,	// (0x0001ad50) form2_mdip_text_pane_t1_ParamLimits

0x3a6f,	// (0x0001ad50) form2_mdip_text_pane_t1

0x3a8a,	// (0x0001ad6b) form2_midp_time_pane_t1

0xe2e1,	// (0x000255c2) form2_midp_gauge_slider_pane_t1

0x990c,	// (0x00020bed) form2_midp_gauge_slider_pane_t2

0x991e,	// (0x00020bff) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x00026dce) form2_midp_gauge_slider_pane_t

0xe2f3,	// (0x000255d4) form2_midp_slider_pane

0xe2ff,	// (0x000255e0) form2_midp_gauge_wait_pane_t1

0xe30d,	// (0x000255ee) form2_midp_wait_pane_ParamLimits

0xe30d,	// (0x000255ee) form2_midp_wait_pane

0xc86a,	// (0x00023b4b) list_single_2graphic_pane_cp4_ParamLimits

0xc86a,	// (0x00023b4b) list_single_2graphic_pane_cp4

0xe338,	// (0x00025619) list_single_midp_graphic_pane_cp_ParamLimits

0xe338,	// (0x00025619) list_single_midp_graphic_pane_cp

0xb40e,	// (0x000226ef) list_highlight_pane_cp20

0xe356,	// (0x00025637) list_single_2graphic_pane_g1_cp4

0xd97f,	// (0x00024c60) list_single_2graphic_pane_g2_cp4

0xe374,	// (0x00025655) list_single_2graphic_pane_t1_cp4

0xb472,	// (0x00022753) list_highlight_pane_cp21

0xe383,	// (0x00025664) list_single_midp_graphic_pane_g4_cp

0xe392,	// (0x00025673) list_single_midp_graphic_pane_t1_cp

0xe3a7,	// (0x00025688) form2_mdip_string_pane_t1_ParamLimits

0xe3a7,	// (0x00025688) form2_mdip_string_pane_t1

0xb40e,	// (0x000226ef) bg_wml_button_pane_cp2

0xb38c,	// (0x0002266d) form2_midp_image_pane_g1

0x30ba,	// (0x0001a39b) list_double_large_graphic_pane_g5_ParamLimits

0x30ba,	// (0x0001a39b) list_double_large_graphic_pane_g5

0x858c,	// (0x0001f86d) midp_form_pane_ParamLimits

0xb472,	// (0x00022753) main_apps_wheel_pane_ParamLimits

0x8b5b,	// (0x0001fe3c) popup_preview_window_ParamLimits

0x8b5b,	// (0x0001fe3c) popup_preview_window

0x4af1,	// (0x0001bdd2) popup_touch_info_window_ParamLimits

0x4af1,	// (0x0001bdd2) popup_touch_info_window

0x4b0f,	// (0x0001bdf0) popup_touch_menu_window_ParamLimits

0x4b0f,	// (0x0001bdf0) popup_touch_menu_window

0xb382,	// (0x00022663) bg_popup_sub_pane_cp6

0xe411,	// (0x000256f2) list_touch_menu_pane

0xe419,	// (0x000256fa) list_single_touch_menu_pane_ParamLimits

0xe419,	// (0x000256fa) list_single_touch_menu_pane

0xe430,	// (0x00025711) list_single_touch_menu_pane_t1

0xb472,	// (0x00022753) bg_popup_sub_pane_cp7_ParamLimits

0xb472,	// (0x00022753) bg_popup_sub_pane_cp7

0xe43e,	// (0x0002571f) heading_sub_pane

0xe446,	// (0x00025727) list_touch_info_pane_ParamLimits

0xe446,	// (0x00025727) list_touch_info_pane

0xe455,	// (0x00025736) list_single_touch_info_pane_ParamLimits

0xe455,	// (0x00025736) list_single_touch_info_pane

0xe466,	// (0x00025747) list_single_touch_info_pane_t1

0xe474,	// (0x00025755) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x00026ddc) list_single_touch_info_pane_t

0xc3b0,	// (0x00023691) bg_popup_heading_pane_cp

0xe482,	// (0x00025763) heading_sub_pane_t1

0xc7e6,	// (0x00023ac7) bg_popup_preview_window_pane_cp_ParamLimits

0xc7e6,	// (0x00023ac7) bg_popup_preview_window_pane_cp

0xe43e,	// (0x0002571f) heading_preview_pane

0xe446,	// (0x00025727) list_preview_pane_ParamLimits

0xe446,	// (0x00025727) list_preview_pane

0xe490,	// (0x00025771) popup_preview_window_g1

0xe455,	// (0x00025736) list_single_preview_pane_ParamLimits

0xe455,	// (0x00025736) list_single_preview_pane

0xe498,	// (0x00025779) list_single_preview_pane_g1

0xe4a0,	// (0x00025781) list_single_preview_pane_t1

0xe466,	// (0x00025747) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x00026de1) list_single_preview_pane_t

0xe4ae,	// (0x0002578f) bg_popup_heading_pane_cp2_ParamLimits

0xe4ae,	// (0x0002578f) bg_popup_heading_pane_cp2

0xe4c4,	// (0x000257a5) heading_preview_pane_g1

0xe4cc,	// (0x000257ad) heading_preview_pane_t1_ParamLimits

0xe4cc,	// (0x000257ad) heading_preview_pane_t1

0xb4c5,	// (0x000227a6) soft_indicator_pane_t1_ParamLimits

0xb98f,	// (0x00022c70) scroll_pane_ParamLimits

0xbdad,	// (0x0002308e) scroll_sc2_left_pane

0xbdb6,	// (0x00023097) scroll_sc2_right_pane

0xbdd5,	// (0x000230b6) scroll_bg_pane_g1_ParamLimits

0xbdea,	// (0x000230cb) scroll_bg_pane_g2_ParamLimits

0xbe02,	// (0x000230e3) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x000269c4) scroll_bg_pane_g_ParamLimits

0xbdd5,	// (0x000230b6) scroll_handle_pane_g1_ParamLimits

0xbe24,	// (0x00023105) scroll_handle_pane_g2_ParamLimits

0xbe02,	// (0x000230e3) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x000269cb) scroll_handle_pane_g_ParamLimits

0x46be,	// (0x0001b99f) popup_choice_list_window_ParamLimits

0x46be,	// (0x0001b99f) popup_choice_list_window

0xc692,	// (0x00023973) choice_list_pane

0xc708,	// (0x000239e9) cell_toolbar_pane_t1

0xc730,	// (0x00023a11) toolbar_button_pane_ParamLimits

0xd610,	// (0x000248f1) ai_gene_pane_1_t2_ParamLimits

0xd610,	// (0x000248f1) ai_gene_pane_1_t2

0x0001,

0xf8ff,	// (0x00026be0) ai_gene_pane_1_t_ParamLimits

0xf8ff,	// (0x00026be0) ai_gene_pane_1_t

0xe4e9,	// (0x000257ca) scroll_sc2_left_pane_g1

0xe4e9,	// (0x000257ca) scroll_sc2_right_pane_g1

0xbb92,	// (0x00022e73) bg_popup_sub_pane_cp10

0xe4f3,	// (0x000257d4) list_choice_list_pane

0xe50a,	// (0x000257eb) list_single_choice_list_pane_ParamLimits

0xe50a,	// (0x000257eb) list_single_choice_list_pane

0xe51c,	// (0x000257fd) list_single_choice_list_pane_g1

0xbb7d,	// (0x00022e5e) list_single_choice_list_pane_t1_ParamLimits

0xbb7d,	// (0x00022e5e) list_single_choice_list_pane_t1

0xe524,	// (0x00025805) choice_list_pane_g1

0xe52c,	// (0x0002580d) choice_list_pane_t1

0xb382,	// (0x00022663) input_focus_pane_cp11

0xbd14,	// (0x00022ff5) title_pane_stacon_g2_ParamLimits

0xbd14,	// (0x00022ff5) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x000269aa) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000269aa) title_pane_stacon_g

0xc3b0,	// (0x00023691) cursor_press_pane

0x88c2,	// (0x0001fba3) popup_fep_hwr_window_ParamLimits

0x88c2,	// (0x0001fba3) popup_fep_hwr_window

0x47b6,	// (0x0001ba97) popup_fep_vkb_window_ParamLimits

0x47b6,	// (0x0001ba97) popup_fep_vkb_window

0xe53a,	// (0x0002581b) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x00026e0a) fep_vkb_side_pane_g_ParamLimits

0x5002,	// (0x0001c2e3) fep_hwr_candidate_pane_ParamLimits

0x5002,	// (0x0001c2e3) fep_hwr_candidate_pane

0x502a,	// (0x0001c30b) fep_hwr_side_pane_ParamLimits

0x502a,	// (0x0001c30b) fep_hwr_side_pane

0x504a,	// (0x0001c32b) fep_hwr_top_pane_ParamLimits

0x504a,	// (0x0001c32b) fep_hwr_top_pane

0x5062,	// (0x0001c343) fep_hwr_write_pane_ParamLimits

0x5062,	// (0x0001c343) fep_hwr_write_pane

0xfb29,	// (0x00026e0a) fep_vkb_side_pane_g

0xe542,	// (0x00025823) fep_hwr_top_pane_g1

0xe554,	// (0x00025835) fep_hwr_top_pane_g2

0x508e,	// (0x0001c36f) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x00026de6) fep_hwr_top_pane_g

0x50a3,	// (0x0001c384) fep_hwr_top_text_pane

0xbf1e,	// (0x000231ff) fep_hwr_top_text_pane_g1

0xe58a,	// (0x0002586b) fep_hwr_top_text_pane_t1

0x5191,	// (0x0001c472) fep_hwr_candidate_pane_g1

0xe753,	// (0x00025a34) fep_vkb_keypad_pane_g3_ParamLimits

0xe753,	// (0x00025a34) fep_vkb_keypad_pane_g3

0xe775,	// (0x00025a56) fep_vkb_keypad_pane_g4_ParamLimits

0xe775,	// (0x00025a56) fep_vkb_keypad_pane_g4

0xe7e4,	// (0x00025ac5) fep_vkb_bottom_pane_g2_ParamLimits

0xe7e4,	// (0x00025ac5) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x00026e11) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x00026e11) fep_vkb_bottom_pane_g

0xe4e9,	// (0x000257ca) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x00026e1b) cell_vkb_side_pane_g

0xe828,	// (0x00025b09) cell_vkb_side_pane_t1

0xe836,	// (0x00025b17) cell_vkb_side_pane_t1_copy1

0xe4e9,	// (0x000257ca) bg_fep_vkb_candidate_pane_g2

0xe904,	// (0x00025be5) cell_vkb_candidate_pane_ParamLimits

0xe598,	// (0x00025879) aid_size_cell_vkb_ParamLimits

0xe598,	// (0x00025879) aid_size_cell_vkb

0xe904,	// (0x00025be5) cell_vkb_candidate_pane

0x51ab,	// (0x0001c48c) bg_popup_fep_shadow_pane_g1

0xe602,	// (0x000258e3) fep_vkb_bottom_pane_ParamLimits

0xe602,	// (0x000258e3) fep_vkb_bottom_pane

0xe63f,	// (0x00025920) fep_vkb_candidate_pane_ParamLimits

0xe63f,	// (0x00025920) fep_vkb_candidate_pane

0xe65b,	// (0x0002593c) fep_vkb_keypad_pane_ParamLimits

0xe65b,	// (0x0002593c) fep_vkb_keypad_pane

0xe68f,	// (0x00025970) fep_vkb_side_pane_ParamLimits

0xe68f,	// (0x00025970) fep_vkb_side_pane

0xe6bb,	// (0x0002599c) fep_vkb_top_pane_ParamLimits

0xe6bb,	// (0x0002599c) fep_vkb_top_pane

0xe6e7,	// (0x000259c8) fep_vkb_top_pane_g1_ParamLimits

0xe6e7,	// (0x000259c8) fep_vkb_top_pane_g1

0xe6f6,	// (0x000259d7) fep_vkb_top_pane_g2_ParamLimits

0xe6f6,	// (0x000259d7) fep_vkb_top_pane_g2

0xe705,	// (0x000259e6) fep_vkb_top_pane_g3_ParamLimits

0xe705,	// (0x000259e6) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x00026e01) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x00026e01) fep_vkb_top_pane_g

0xe723,	// (0x00025a04) fep_vkb_top_text_pane_ParamLimits

0xe723,	// (0x00025a04) fep_vkb_top_text_pane

0x998d,	// (0x00020c6e) fep_vkb_side_pane_g1_ParamLimits

0x998d,	// (0x00020c6e) fep_vkb_side_pane_g1

0xe742,	// (0x00025a23) grid_vkb_side_pane_ParamLimits

0xe742,	// (0x00025a23) grid_vkb_side_pane

0x51b3,	// (0x0001c494) bg_popup_fep_shadow_pane_g2

0x51bc,	// (0x0001c49d) bg_popup_fep_shadow_pane_g3

0x51c4,	// (0x0001c4a5) bg_popup_fep_shadow_pane_g4

0x51cd,	// (0x0001c4ae) bg_popup_fep_shadow_pane_g5

0x51d5,	// (0x0001c4b6) bg_popup_fep_shadow_pane_g6

0x51dd,	// (0x0001c4be) bg_popup_fep_shadow_pane_g7

0xba87,	// (0x00022d68) bg_popup_fep_shadow_pane_g8

0xe793,	// (0x00025a74) grid_vkb_keypad_number_pane_ParamLimits

0xe793,	// (0x00025a74) grid_vkb_keypad_number_pane

0xe7a3,	// (0x00025a84) grid_vkb_keypad_pane_ParamLimits

0xe7a3,	// (0x00025a84) grid_vkb_keypad_pane

0xe7c9,	// (0x00025aaa) fep_vkb_bottom_pane_g1_ParamLimits

0xe7c9,	// (0x00025aaa) fep_vkb_bottom_pane_g1

0xe7f2,	// (0x00025ad3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe7f2,	// (0x00025ad3) grid_vkb_keypad_bottom_left_pane

0xe807,	// (0x00025ae8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe807,	// (0x00025ae8) grid_vkb_keypad_bottom_right_pane

0xe81c,	// (0x00025afd) fep_vkb_top_text_pane_g1

0x99d4,	// (0x00020cb5) fep_vkb_top_text_pane_t1

0x99e6,	// (0x00020cc7) cell_vkb_side_pane_ParamLimits

0x99e6,	// (0x00020cc7) cell_vkb_side_pane

0xe4e9,	// (0x000257ca) cell_vkb_side_pane_g1

0xe844,	// (0x00025b25) cell_vkb_keypad_pane_ParamLimits

0xe844,	// (0x00025b25) cell_vkb_keypad_pane

0xe8b1,	// (0x00025b92) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x00026e2e) bg_popup_fep_shadow_pane_g

0xe4e9,	// (0x000257ca) cell_hwr_side_pane_g1

0xe4e9,	// (0x000257ca) cell_hwr_side_pane_g2

0xe8bb,	// (0x00025b9c) cell_vkb_keypad_pane_t1

0x99fc,	// (0x00020cdd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x99fc,	// (0x00020cdd) cell_vkb_keypad_bottom_left_pane

0x9a11,	// (0x00020cf2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9a11,	// (0x00020cf2) cell_vkb_keypad_bottom_right_pane

0xe4e9,	// (0x000257ca) cell_vkb_keypad_bottom_left_pane_g1

0xe4e9,	// (0x000257ca) cell_vkb_keypad_bottom_right_pane_g1

0xe8c9,	// (0x00025baa) cell_vkb_keypad_number_pane_ParamLimits

0xe8c9,	// (0x00025baa) cell_vkb_keypad_number_pane

0xe8e8,	// (0x00025bc9) cell_vkb_keypad_number_pane_g1

0xe8f2,	// (0x00025bd3) cell_vkb_keypad_number_pane_g2

0xe8fb,	// (0x00025bdc) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x00026e20) cell_vkb_keypad_number_pane_g

0xe8bb,	// (0x00025b9c) cell_vkb_keypad_number_pane_t1

0xe91d,	// (0x00025bfe) fep_vkb_candidate_pane_g1

0x0001,

0xfb3a,	// (0x00026e1b) cell_hwr_side_pane_g

0xe936,	// (0x00025c17) cell_hwr_side_pane_t1

0x51ed,	// (0x0001c4ce) cell_hwr_side_pane_t1_copy1

0xe715,	// (0x000259f6) cell_hwr_candidate_pane_g1

0x51fb,	// (0x0001c4dc) cell_hwr_candidate_pane_t1

0xe4e9,	// (0x000257ca) cell_vkb_candidate_pane_g2

0xe9bc,	// (0x00025c9d) cell_vkb_candidate_pane_t1

0x4fcd,	// (0x0001c2ae) bg_popup_fep_shadow_pane_ParamLimits

0x4fcd,	// (0x0001c2ae) bg_popup_fep_shadow_pane

0x19fc,	// (0x00018cdd) bg_fep_hwr_top_pane_g4

0xe566,	// (0x00025847) bg_hwr_side_pane_g1_ParamLimits

0xe566,	// (0x00025847) bg_hwr_side_pane_g1

0x9948,	// (0x00020c29) cell_hwr_side_pane_ParamLimits

0x9948,	// (0x00020c29) cell_hwr_side_pane

0x511a,	// (0x0001c3fb) fep_hwr_write_pane_g1_ParamLimits

0x511a,	// (0x0001c3fb) fep_hwr_write_pane_g1

0x5127,	// (0x0001c408) fep_hwr_write_pane_g2_ParamLimits

0x5127,	// (0x0001c408) fep_hwr_write_pane_g2

0x5134,	// (0x0001c415) fep_hwr_write_pane_g3_ParamLimits

0x5134,	// (0x0001c415) fep_hwr_write_pane_g3

0x9968,	// (0x00020c49) fep_hwr_write_pane_g4_ParamLimits

0x9968,	// (0x00020c49) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x00026ded) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x00026ded) fep_hwr_write_pane_g

0x19fc,	// (0x00018cdd) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x19fc,	// (0x00018cdd) bg_fep_hwr_candidate_pane_g2

0x5157,	// (0x0001c438) cell_hwr_candidate_pane_ParamLimits

0x5157,	// (0x0001c438) cell_hwr_candidate_pane

0x5191,	// (0x0001c472) fep_hwr_candidate_pane_g1_ParamLimits

0xe5c6,	// (0x000258a7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe5c6,	// (0x000258a7) bg_popup_fep_shadow_pane_cp2

0xe715,	// (0x000259f6) fep_vkb_top_pane_g4_ParamLimits

0xe715,	// (0x000259f6) fep_vkb_top_pane_g4

0xe734,	// (0x00025a15) fep_vkb_side_pane_g2_ParamLimits

0xe734,	// (0x00025a15) fep_vkb_side_pane_g2

0x784f,	// (0x0001eb30) list_setting_pane_t4_ParamLimits

0x784f,	// (0x0001eb30) list_setting_pane_t4

0x78e1,	// (0x0001ebc2) list_setting_number_pane_t5_ParamLimits

0x78e1,	// (0x0001ebc2) list_setting_number_pane_t5

0x8497,	// (0x0001f778) list_double_heading_pane_cp2_ParamLimits

0x8497,	// (0x0001f778) list_double_heading_pane_cp2

0xc225,	// (0x00023506) list_double_heading_pane_g1_cp2_ParamLimits

0xc225,	// (0x00023506) list_double_heading_pane_g1_cp2

0xe9ca,	// (0x00025cab) list_double_heading_pane_g2_cp2_ParamLimits

0xe9ca,	// (0x00025cab) list_double_heading_pane_g2_cp2

0xe9de,	// (0x00025cbf) list_double_heading_pane_t1_cp2_ParamLimits

0xe9de,	// (0x00025cbf) list_double_heading_pane_t1_cp2

0xe9f4,	// (0x00025cd5) list_double_heading_pane_t2_cp2_ParamLimits

0xe9f4,	// (0x00025cd5) list_double_heading_pane_t2_cp2

0xb37a,	// (0x0002265b) aid_value_unit2

0x3fc8,	// (0x0001b2a9) popup_preview_fixed_window

0xb5a5,	// (0x00022886) bg_popup_preview_window_pane_cp02

0xea06,	// (0x00025ce7) list_preview_fixed_pane

0xea4c,	// (0x00025d2d) list_empty_pane_fp_ParamLimits

0xea4c,	// (0x00025d2d) list_empty_pane_fp

0xea4c,	// (0x00025d2d) list_single_cale_day_pane_fp_ParamLimits

0xea4c,	// (0x00025d2d) list_single_cale_day_pane_fp

0xea4c,	// (0x00025d2d) list_single_graphic_heading_pane_fp_ParamLimits

0xea4c,	// (0x00025d2d) list_single_graphic_heading_pane_fp

0xea4c,	// (0x00025d2d) list_single_graphic_pane_fp_ParamLimits

0xea4c,	// (0x00025d2d) list_single_graphic_pane_fp

0xea4c,	// (0x00025d2d) list_single_heading_pane_fp_ParamLimits

0xea4c,	// (0x00025d2d) list_single_heading_pane_fp

0xea4c,	// (0x00025d2d) list_single_pane_fp_ParamLimits

0xea4c,	// (0x00025d2d) list_single_pane_fp

0xea60,	// (0x00025d41) list_single_pane_fp_g1_ParamLimits

0xea60,	// (0x00025d41) list_single_pane_fp_g1

0x31db,	// (0x0001a4bc) list_single_pane_fp_g2_ParamLimits

0x31db,	// (0x0001a4bc) list_single_pane_fp_g2

0x3a9d,	// (0x0001ad7e) list_single_pane_fp_g3_ParamLimits

0x3a9d,	// (0x0001ad7e) list_single_pane_fp_g3

0xea6c,	// (0x00025d4d) list_single_pane_fp_g4_ParamLimits

0xea6c,	// (0x00025d4d) list_single_pane_fp_g4

0x0003,

0xfb6e,	// (0x00026e4f) list_single_pane_fp_g_ParamLimits

0xfb6e,	// (0x00026e4f) list_single_pane_fp_g

0x3ab1,	// (0x0001ad92) list_single_pane_fp_t1_ParamLimits

0x3ab1,	// (0x0001ad92) list_single_pane_fp_t1

0x3ac8,	// (0x0001ada9) list_single_graphic_pane_fp_g1_ParamLimits

0x3ac8,	// (0x0001ada9) list_single_graphic_pane_fp_g1

0xea60,	// (0x00025d41) list_single_graphic_pane_fp_g2_ParamLimits

0xea60,	// (0x00025d41) list_single_graphic_pane_fp_g2

0x31db,	// (0x0001a4bc) list_single_graphic_pane_fp_g3_ParamLimits

0x31db,	// (0x0001a4bc) list_single_graphic_pane_fp_g3

0x3a9d,	// (0x0001ad7e) list_single_graphic_pane_fp_g4_ParamLimits

0x3a9d,	// (0x0001ad7e) list_single_graphic_pane_fp_g4

0xea6c,	// (0x00025d4d) list_single_graphic_pane_fp_g5_ParamLimits

0xea6c,	// (0x00025d4d) list_single_graphic_pane_fp_g5

0x0004,

0xfb77,	// (0x00026e58) list_single_graphic_pane_fp_g_ParamLimits

0xfb77,	// (0x00026e58) list_single_graphic_pane_fp_g

0x3ad4,	// (0x0001adb5) list_single_graphic_pane_fp_t1_ParamLimits

0x3ad4,	// (0x0001adb5) list_single_graphic_pane_fp_t1

0x3ac8,	// (0x0001ada9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3ac8,	// (0x0001ada9) list_single_graphic_heading_pane_fp_g1

0xea60,	// (0x00025d41) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xea60,	// (0x00025d41) list_single_graphic_heading_pane_fp_g2

0x31db,	// (0x0001a4bc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x31db,	// (0x0001a4bc) list_single_graphic_heading_pane_fp_g3

0x3a9d,	// (0x0001ad7e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3a9d,	// (0x0001ad7e) list_single_graphic_heading_pane_fp_g4

0xea6c,	// (0x00025d4d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xea6c,	// (0x00025d4d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb77,	// (0x00026e58) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x00026e58) list_single_graphic_heading_pane_fp_g

0x3aea,	// (0x0001adcb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3aea,	// (0x0001adcb) list_single_graphic_heading_pane_fp_t1

0x3b00,	// (0x0001ade1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3b00,	// (0x0001ade1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb82,	// (0x00026e63) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb82,	// (0x00026e63) list_single_graphic_heading_pane_fp_t

0x3b12,	// (0x0001adf3) list_single_cale_day_pane_fp_g1_ParamLimits

0x3b12,	// (0x0001adf3) list_single_cale_day_pane_fp_g1

0xea78,	// (0x00025d59) list_single_cale_day_pane_fp_g2_ParamLimits

0xea78,	// (0x00025d59) list_single_cale_day_pane_fp_g2

0x3b4a,	// (0x0001ae2b) list_single_cale_day_pane_fp_g3_ParamLimits

0x3b4a,	// (0x0001ae2b) list_single_cale_day_pane_fp_g3

0x3b72,	// (0x0001ae53) list_single_cale_day_pane_fp_g4_ParamLimits

0x3b72,	// (0x0001ae53) list_single_cale_day_pane_fp_g4

0x3b96,	// (0x0001ae77) list_single_cale_day_pane_fp_g5_ParamLimits

0x3b96,	// (0x0001ae77) list_single_cale_day_pane_fp_g5

0x0004,

0xfb87,	// (0x00026e68) list_single_cale_day_pane_fp_g_ParamLimits

0xfb87,	// (0x00026e68) list_single_cale_day_pane_fp_g

0x3bba,	// (0x0001ae9b) list_single_cale_day_pane_fp_t1_ParamLimits

0x3bba,	// (0x0001ae9b) list_single_cale_day_pane_fp_t1

0x3be0,	// (0x0001aec1) list_single_cale_day_pane_fp_t2_ParamLimits

0x3be0,	// (0x0001aec1) list_single_cale_day_pane_fp_t2

0x3bf9,	// (0x0001aeda) list_single_cale_day_pane_fp_t3_ParamLimits

0x3bf9,	// (0x0001aeda) list_single_cale_day_pane_fp_t3

0x0002,

0xfb92,	// (0x00026e73) list_single_cale_day_pane_fp_t_ParamLimits

0xfb92,	// (0x00026e73) list_single_cale_day_pane_fp_t

0xea60,	// (0x00025d41) list_empty_pane_fp_g1_ParamLimits

0xea60,	// (0x00025d41) list_empty_pane_fp_g1

0x3c12,	// (0x0001aef3) list_empty_pane_fp_t1

0x3c20,	// (0x0001af01) list_empty_pane_fp_t2

0x0001,

0xfb99,	// (0x00026e7a) list_empty_pane_fp_t

0xea60,	// (0x00025d41) list_single_heading_pane_fp_g1_ParamLimits

0xea60,	// (0x00025d41) list_single_heading_pane_fp_g1

0x31db,	// (0x0001a4bc) list_single_heading_pane_fp_g2_ParamLimits

0x31db,	// (0x0001a4bc) list_single_heading_pane_fp_g2

0x3a9d,	// (0x0001ad7e) list_single_heading_pane_fp_g3_ParamLimits

0x3a9d,	// (0x0001ad7e) list_single_heading_pane_fp_g3

0x0002,

0xfb9e,	// (0x00026e7f) list_single_heading_pane_fp_g_ParamLimits

0xfb9e,	// (0x00026e7f) list_single_heading_pane_fp_g

0x3c2e,	// (0x0001af0f) list_single_heading_pane_fp_t1_ParamLimits

0x3c2e,	// (0x0001af0f) list_single_heading_pane_fp_t1

0x3c40,	// (0x0001af21) list_single_heading_pane_fp_t2_ParamLimits

0x3c40,	// (0x0001af21) list_single_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x00026e86) list_single_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x00026e86) list_single_heading_pane_fp_t

0xbb9e,	// (0x00022e7f) aid_size_cell_fast

0xb588,	// (0x00022869) soft_indicator_pane_cp1_t1

0xbbdb,	// (0x00022ebc) cell_app_pane_cp2_ParamLimits

0xbbdb,	// (0x00022ebc) cell_app_pane_cp2

0x4fef,	// (0x0001c2d0) fep_hwr_candidate_drop_down_list_pane

0x1b4f,	// (0x00018e30) fep_hwr_candidate_pane_g3_ParamLimits

0x1b4f,	// (0x00018e30) fep_hwr_candidate_pane_g3

0x1b5c,	// (0x00018e3d) fep_hwr_candidate_pane_g4_ParamLimits

0x1b5c,	// (0x00018e3d) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x00026dfa) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x00026dfa) fep_hwr_candidate_pane_g

0xe62e,	// (0x0002590f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe62e,	// (0x0002590f) fep_vkb_candidate_drop_down_list_pane

0xe925,	// (0x00025c06) fep_vkb_candidate_pane_g3

0xe92d,	// (0x00025c0e) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x00026e27) fep_vkb_candidate_pane_g

0xe715,	// (0x000259f6) cell_hwr_candidate_pane_g1_ParamLimits

0xe944,	// (0x00025c25) cell_hwr_candidate_pane_g3_ParamLimits

0xe944,	// (0x00025c25) cell_hwr_candidate_pane_g3

0xe965,	// (0x00025c46) cell_hwr_candidate_pane_g4_ParamLimits

0xe965,	// (0x00025c46) cell_hwr_candidate_pane_g4

0x0002,

0xfb60,	// (0x00026e41) cell_hwr_candidate_pane_g_ParamLimits

0xfb60,	// (0x00026e41) cell_hwr_candidate_pane_g

0xe986,	// (0x00025c67) cell_vkb_candidate_pane_g3_ParamLimits

0xe986,	// (0x00025c67) cell_vkb_candidate_pane_g3

0xe9a1,	// (0x00025c82) cell_vkb_candidate_pane_g4_ParamLimits

0xe9a1,	// (0x00025c82) cell_vkb_candidate_pane_g4

0xea84,	// (0x00025d65) cell_app_pane_cp2_g1_ParamLimits

0xea84,	// (0x00025d65) cell_app_pane_cp2_g1

0xeaa2,	// (0x00025d83) cell_app_pane_cp2_g2_ParamLimits

0xeaa2,	// (0x00025d83) cell_app_pane_cp2_g2

0x0001,

0xfbaa,	// (0x00026e8b) cell_app_pane_cp2_g_ParamLimits

0xfbaa,	// (0x00026e8b) cell_app_pane_cp2_g

0xeaae,	// (0x00025d8f) cell_app_pane_cp2_t1_ParamLimits

0xeaae,	// (0x00025d8f) cell_app_pane_cp2_t1

0xba0c,	// (0x00022ced) grid_highlight_pane_cp1_ParamLimits

0xba0c,	// (0x00022ced) grid_highlight_pane_cp1

0x5218,	// (0x0001c4f9) cell_hwr_candidate_pane_cp1_ParamLimits

0x5218,	// (0x0001c4f9) cell_hwr_candidate_pane_cp1

0xe715,	// (0x000259f6) fep_hwr_candidate_drop_down_list_pane_g1

0xeac0,	// (0x00025da1) fep_hwr_candidate_drop_down_list_pane_g2

0xeacd,	// (0x00025dae) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x00026e90) fep_hwr_candidate_drop_down_list_pane_g

0x5236,	// (0x0001c517) fep_hwr_candidate_drop_down_list_scroll_pane

0x523f,	// (0x0001c520) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x523f,	// (0x0001c520) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x524c,	// (0x0001c52d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x524c,	// (0x0001c52d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5259,	// (0x0001c53a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5259,	// (0x0001c53a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe986,	// (0x00025c67) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe986,	// (0x00025c67) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe9a1,	// (0x00025c82) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe9a1,	// (0x00025c82) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5266,	// (0x0001c547) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5266,	// (0x0001c547) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5281,	// (0x0001c562) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5281,	// (0x0001c562) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x529c,	// (0x0001c57d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x529c,	// (0x0001c57d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x00026e97) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x00026e97) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x9a2c,	// (0x00020d0d) cell_vkb_candidate_pane_cp1_ParamLimits

0x9a2c,	// (0x00020d0d) cell_vkb_candidate_pane_cp1

0xe715,	// (0x000259f6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe715,	// (0x000259f6) fep_vkb_candidate_drop_down_list_pane_g1

0xeac0,	// (0x00025da1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xeac0,	// (0x00025da1) fep_vkb_candidate_drop_down_list_pane_g2

0xeacd,	// (0x00025dae) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xeacd,	// (0x00025dae) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x00026e90) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaf,	// (0x00026e90) fep_vkb_candidate_drop_down_list_pane_g

0xeada,	// (0x00025dbb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xeada,	// (0x00025dbb) fep_vkb_candidate_drop_down_list_scroll_pane

0xeae7,	// (0x00025dc8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xeae7,	// (0x00025dc8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xeaf4,	// (0x00025dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xeaf4,	// (0x00025dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xeb00,	// (0x00025de1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xeb00,	// (0x00025de1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe944,	// (0x00025c25) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe944,	// (0x00025c25) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe965,	// (0x00025c46) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe965,	// (0x00025c46) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xeb0c,	// (0x00025ded) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xeb0c,	// (0x00025ded) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xeb2d,	// (0x00025e0e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xeb2d,	// (0x00025e0e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xeb4e,	// (0x00025e2f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xeb4e,	// (0x00025e2f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc7,	// (0x00026ea8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc7,	// (0x00026ea8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7f0d,	// (0x0001f1ee) title_pane_g1_ParamLimits

0x7f24,	// (0x0001f205) title_pane_g2_ParamLimits

0xf54e,	// (0x0002682f) title_pane_g_ParamLimits

0xbf0e,	// (0x000231ef) aid_call2_pane

0xbf16,	// (0x000231f7) aid_call_pane

0xbf1e,	// (0x000231ff) popup_clock_analogue_window_g1

0xbf1e,	// (0x000231ff) popup_clock_analogue_window_g2

0x42a2,	// (0x0001b583) popup_clock_analogue_window_g3

0x42ab,	// (0x0001b58c) popup_clock_analogue_window_g4

0xb38c,	// (0x0002266d) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x000269d9) popup_clock_analogue_window_g

0x42b3,	// (0x0001b594) popup_clock_analogue_window_t1

0x42c1,	// (0x0001b5a2) clock_digital_number_pane_ParamLimits

0x42c1,	// (0x0001b5a2) clock_digital_number_pane

0x42cd,	// (0x0001b5ae) clock_digital_number_pane_cp02_ParamLimits

0x42cd,	// (0x0001b5ae) clock_digital_number_pane_cp02

0x42d9,	// (0x0001b5ba) clock_digital_number_pane_cp03_ParamLimits

0x42d9,	// (0x0001b5ba) clock_digital_number_pane_cp03

0x42e5,	// (0x0001b5c6) clock_digital_number_pane_cp04_ParamLimits

0x42e5,	// (0x0001b5c6) clock_digital_number_pane_cp04

0x42f1,	// (0x0001b5d2) clock_digital_separator_pane_ParamLimits

0x42f1,	// (0x0001b5d2) clock_digital_separator_pane

0x42fd,	// (0x0001b5de) popup_clock_digital_window_t1_ParamLimits

0x42fd,	// (0x0001b5de) popup_clock_digital_window_t1

0xb38c,	// (0x0002266d) clock_digital_number_pane_g1

0xb38c,	// (0x0002266d) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x000269e4) clock_digital_number_pane_g

0xb38c,	// (0x0002266d) clock_digital_separator_pane_g1

0xb38c,	// (0x0002266d) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x000269e4) clock_digital_separator_pane_g

0x8db9,	// (0x0002009a) aid_fill_nsta_ParamLimits

0x8ed0,	// (0x000201b1) indicator_nsta_pane_ParamLimits

0xc63b,	// (0x0002391c) popup_clock_analogue_window

0xc63b,	// (0x0002391c) popup_clock_digital_window

0xc794,	// (0x00023a75) grid_indicator_nsta_pane_ParamLimits

0xe0d9,	// (0x000253ba) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x00026d7a) clock_nsta_pane_t

0x4266,	// (0x0001b547) aid_size_max_handle

0x83fb,	// (0x0001f6dc) aid_size_min_handle

0xc3b0,	// (0x00023691) editor_scroll_pane

0xeb69,	// (0x00025e4a) ex_editor_pane

0xbb5b,	// (0x00022e3c) scroll_pane_cp13

0xb9bc,	// (0x00022c9d) scroll_pane_cp14

0xbf4d,	// (0x0002322e) scroll_pane_cp36

0x84a3,	// (0x0001f784) list_single_graphic_hl_pane_cp2_ParamLimits

0x84a3,	// (0x0001f784) list_single_graphic_hl_pane_cp2

0x9691,	// (0x00020972) list_single_graphic_hl_pane_ParamLimits

0x9691,	// (0x00020972) list_single_graphic_hl_pane

0x3c56,	// (0x0001af37) aid_size_min_hl_cp1

0xeb71,	// (0x00025e52) list_highlight_pane_cp34_ParamLimits

0xeb71,	// (0x00025e52) list_highlight_pane_cp34

0xeb82,	// (0x00025e63) list_single_graphic_hl_pane_g1_ParamLimits

0xeb82,	// (0x00025e63) list_single_graphic_hl_pane_g1

0x7b55,	// (0x0001ee36) list_single_graphic_hl_pane_g2_ParamLimits

0x7b55,	// (0x0001ee36) list_single_graphic_hl_pane_g2

0x7b55,	// (0x0001ee36) list_single_graphic_hl_pane_g3_ParamLimits

0x7b55,	// (0x0001ee36) list_single_graphic_hl_pane_g3

0x7b61,	// (0x0001ee42) list_single_graphic_hl_pane_g4_ParamLimits

0x7b61,	// (0x0001ee42) list_single_graphic_hl_pane_g4

0x7b6d,	// (0x0001ee4e) list_single_graphic_hl_pane_g5_ParamLimits

0x7b6d,	// (0x0001ee4e) list_single_graphic_hl_pane_g5

0x0004,

0xfbd8,	// (0x00026eb9) list_single_graphic_hl_pane_g_ParamLimits

0xfbd8,	// (0x00026eb9) list_single_graphic_hl_pane_g

0x7b81,	// (0x0001ee62) list_single_graphic_hl_pane_t1_ParamLimits

0x7b81,	// (0x0001ee62) list_single_graphic_hl_pane_t1

0xeb8f,	// (0x00025e70) aid_size_min_hl_cp2

0xeb98,	// (0x00025e79) list_highlight_pane_cp34_cp2_ParamLimits

0xeb98,	// (0x00025e79) list_highlight_pane_cp34_cp2

0xeb82,	// (0x00025e63) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xeb82,	// (0x00025e63) list_single_graphic_hl_pane_g1_cp2

0xeba5,	// (0x00025e86) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xeba5,	// (0x00025e86) list_single_graphic_hl_pane_g2_cp2

0xebb1,	// (0x00025e92) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xebb1,	// (0x00025e92) list_single_graphic_hl_pane_g3_cp2

0xc225,	// (0x00023506) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc225,	// (0x00023506) list_single_graphic_hl_pane_g4_cp2

0xe9ca,	// (0x00025cab) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe9ca,	// (0x00025cab) list_single_graphic_hl_pane_g5_cp2

0x86d4,	// (0x0001f9b5) control_pane_g4_ParamLimits

0x86d4,	// (0x0001f9b5) control_pane_g4

0xbb92,	// (0x00022e73) bg_popup_sub_pane_cp10_ParamLimits

0xe4f3,	// (0x000257d4) list_choice_list_pane_ParamLimits

0xe502,	// (0x000257e3) scroll_pane_cp23

0xb5a5,	// (0x00022886) bg_popup_preview_window_pane_cp02_ParamLimits

0xea06,	// (0x00025ce7) list_preview_fixed_pane_ParamLimits

0xea1c,	// (0x00025cfd) list_preview_fixed_pane_cp_ParamLimits

0xea1c,	// (0x00025cfd) list_preview_fixed_pane_cp

0xea28,	// (0x00025d09) popup_preview_fixed_window_g1_ParamLimits

0xea28,	// (0x00025d09) popup_preview_fixed_window_g1

0xea34,	// (0x00025d15) popup_preview_fixed_window_g2_ParamLimits

0xea34,	// (0x00025d15) popup_preview_fixed_window_g2

0x0002,

0xfb67,	// (0x00026e48) popup_preview_fixed_window_g_ParamLimits

0xfb67,	// (0x00026e48) popup_preview_fixed_window_g

0x41f6,	// (0x0001b4d7) aid_navi_side_left_pane_ParamLimits

0x4206,	// (0x0001b4e7) aid_navi_side_right_pane_ParamLimits

0x4215,	// (0x0001b4f6) navi_icon_pane_stacon_ParamLimits

0x4225,	// (0x0001b506) navi_navi_pane_stacon_ParamLimits

0x4215,	// (0x0001b4f6) navi_text_pane_stacon_ParamLimits

0xb382,	// (0x00022663) main_text_info_pane

0xebd3,	// (0x00025eb4) listscroll_text_info_pane

0xebdb,	// (0x00025ebc) list_text_info_pane_ParamLimits

0xebdb,	// (0x00025ebc) list_text_info_pane

0xebea,	// (0x00025ecb) scroll_pane_cp24_ParamLimits

0xebea,	// (0x00025ecb) scroll_pane_cp24

0x9a4c,	// (0x00020d2d) list_text_info_pane_t1_ParamLimits

0x9a4c,	// (0x00020d2d) list_text_info_pane_t1

0x8842,	// (0x0001fb23) popup_fast_swap2_window_ParamLimits

0x8842,	// (0x0001fb23) popup_fast_swap2_window

0xec08,	// (0x00025ee9) aid_size_cell_fast2

0xb382,	// (0x00022663) bg_popup_window_pane_cp17

0xcb10,	// (0x00023df1) heading_pane_cp2

0xb7bb,	// (0x00022a9c) listscroll_fast2_pane

0xec12,	// (0x00025ef3) grid_fast2_pane

0xec1a,	// (0x00025efb) listscroll_fast2_pane_g1

0xec22,	// (0x00025f03) listscroll_fast2_pane_g2

0x0001,

0xfbe3,	// (0x00026ec4) listscroll_fast2_pane_g

0xbb5b,	// (0x00022e3c) scroll_pane_cp26

0xec2a,	// (0x00025f0b) cell_fast2_pane_ParamLimits

0xec2a,	// (0x00025f0b) cell_fast2_pane

0xec40,	// (0x00025f21) cell_fast2_pane_g1

0xec49,	// (0x00025f2a) cell_fast2_pane_g2

0xec52,	// (0x00025f33) cell_fast2_pane_g3

0x0002,

0xfbe8,	// (0x00026ec9) cell_fast2_pane_g

0xb81d,	// (0x00022afe) grid_highlight_pane_cp9

0xb832,	// (0x00022b13) main_eswt_pane_ParamLimits

0xb832,	// (0x00022b13) main_eswt_pane

0xebff,	// (0x00025ee0) list_single_text_info_pane

0xec5a,	// (0x00025f3b) eswt_ctrl_button_pane

0xec5a,	// (0x00025f3b) eswt_ctrl_canvas_pane

0xec62,	// (0x00025f43) eswt_ctrl_combo_pane

0xec5a,	// (0x00025f3b) eswt_ctrl_default_pane

0xec5a,	// (0x00025f3b) eswt_ctrl_label_pane

0xec6a,	// (0x00025f4b) eswt_ctrl_wait_pane

0xec72,	// (0x00025f53) eswt_shell_pane

0xb382,	// (0x00022663) listscroll_eswt_app_pane

0xec8e,	// (0x00025f6f) popup_eswt_tasktip_window_ParamLimits

0xec8e,	// (0x00025f6f) popup_eswt_tasktip_window

0xc7e6,	// (0x00023ac7) bg_popup_window_pane_cp18

0xec9f,	// (0x00025f80) eswt_control_pane_g1_ParamLimits

0xec9f,	// (0x00025f80) eswt_control_pane_g1

0xecac,	// (0x00025f8d) eswt_control_pane_g2_ParamLimits

0xecac,	// (0x00025f8d) eswt_control_pane_g2

0xecb9,	// (0x00025f9a) eswt_control_pane_g3_ParamLimits

0xecb9,	// (0x00025f9a) eswt_control_pane_g3

0xecc6,	// (0x00025fa7) eswt_control_pane_g4_ParamLimits

0xecc6,	// (0x00025fa7) eswt_control_pane_g4

0x0003,

0xfbef,	// (0x00026ed0) eswt_control_pane_g_ParamLimits

0xfbef,	// (0x00026ed0) eswt_control_pane_g

0xba0c,	// (0x00022ced) bg_button_pane_ParamLimits

0xba0c,	// (0x00022ced) bg_button_pane

0xb832,	// (0x00022b13) common_borders_pane_copy2_ParamLimits

0xb832,	// (0x00022b13) common_borders_pane_copy2

0xecd3,	// (0x00025fb4) control_button_pane_g1_ParamLimits

0xecd3,	// (0x00025fb4) control_button_pane_g1

0xecdf,	// (0x00025fc0) control_button_pane_g2_ParamLimits

0xecdf,	// (0x00025fc0) control_button_pane_g2

0xeceb,	// (0x00025fcc) control_button_pane_g3_ParamLimits

0xeceb,	// (0x00025fcc) control_button_pane_g3

0x0002,

0xfbf8,	// (0x00026ed9) control_button_pane_g_ParamLimits

0xfbf8,	// (0x00026ed9) control_button_pane_g

0xecff,	// (0x00025fe0) control_button_pane_t1

0xed0d,	// (0x00025fee) control_button_pane_t2

0x0001,

0xfbff,	// (0x00026ee0) control_button_pane_t

0xc73c,	// (0x00023a1d) bg_button_pane_g1

0xc744,	// (0x00023a25) bg_button_pane_g2

0xc74c,	// (0x00023a2d) bg_button_pane_g3

0xc754,	// (0x00023a35) bg_button_pane_g4

0xc75c,	// (0x00023a3d) bg_button_pane_g5

0xc764,	// (0x00023a45) bg_button_pane_g6

0xc76c,	// (0x00023a4d) bg_button_pane_g7

0xc774,	// (0x00023a55) bg_button_pane_g8

0xc77c,	// (0x00023a5d) bg_button_pane_g9

0x0008,

0xf853,	// (0x00026b34) bg_button_pane_g

0xe4ae,	// (0x0002578f) common_borders_pane_ParamLimits

0xe4ae,	// (0x0002578f) common_borders_pane

0xec9f,	// (0x00025f80) eswt_control_pane_g1_copy1_ParamLimits

0xec9f,	// (0x00025f80) eswt_control_pane_g1_copy1

0xecac,	// (0x00025f8d) eswt_control_pane_g2_copy1_ParamLimits

0xecac,	// (0x00025f8d) eswt_control_pane_g2_copy1

0xecb9,	// (0x00025f9a) eswt_control_pane_g3_copy1_ParamLimits

0xecb9,	// (0x00025f9a) eswt_control_pane_g3_copy1

0xecc6,	// (0x00025fa7) eswt_control_pane_g4_copy1_ParamLimits

0xecc6,	// (0x00025fa7) eswt_control_pane_g4_copy1

0xe4e9,	// (0x000257ca) bg_eswt_ctrl_canvas_pane_g1

0xe4ae,	// (0x0002578f) common_borders_pane_cp2_ParamLimits

0xe4ae,	// (0x0002578f) common_borders_pane_cp2

0xe4ae,	// (0x0002578f) common_borders_pane_cp3_ParamLimits

0xe4ae,	// (0x0002578f) common_borders_pane_cp3

0xed1b,	// (0x00025ffc) separator_horizontal_pane

0xbdad,	// (0x0002308e) separator_vertical_pane

0xec9f,	// (0x00025f80) eswt_control_pane_g1_copy2_ParamLimits

0xec9f,	// (0x00025f80) eswt_control_pane_g1_copy2

0xecac,	// (0x00025f8d) eswt_control_pane_g2_copy2_ParamLimits

0xecac,	// (0x00025f8d) eswt_control_pane_g2_copy2

0xecb9,	// (0x00025f9a) eswt_control_pane_g3_copy2_ParamLimits

0xecb9,	// (0x00025f9a) eswt_control_pane_g3_copy2

0xecc6,	// (0x00025fa7) eswt_control_pane_g4_copy2_ParamLimits

0xecc6,	// (0x00025fa7) eswt_control_pane_g4_copy2

0xb382,	// (0x00022663) common_borders_pane_cp4

0xed23,	// (0x00026004) separator_horizontal_pane_g1

0xed2c,	// (0x0002600d) separator_horizontal_pane_g2

0xed35,	// (0x00026016) separator_horizontal_pane_g3

0x0002,

0xfc04,	// (0x00026ee5) separator_horizontal_pane_g

0xec9f,	// (0x00025f80) eswt_control_pane_g1_copy3_ParamLimits

0xec9f,	// (0x00025f80) eswt_control_pane_g1_copy3

0xecac,	// (0x00025f8d) eswt_control_pane_g2_copy3_ParamLimits

0xecac,	// (0x00025f8d) eswt_control_pane_g2_copy3

0xecb9,	// (0x00025f9a) eswt_control_pane_g3_copy3_ParamLimits

0xecb9,	// (0x00025f9a) eswt_control_pane_g3_copy3

0xecc6,	// (0x00025fa7) eswt_control_pane_g4_copy3_ParamLimits

0xecc6,	// (0x00025fa7) eswt_control_pane_g4_copy3

0xb382,	// (0x00022663) common_borders_pane_cp5

0xed3e,	// (0x0002601f) separator_vertical_pane_g1

0xed47,	// (0x00026028) separator_vertical_pane_g2

0xed50,	// (0x00026031) separator_vertical_pane_g3

0x0002,

0xfc0b,	// (0x00026eec) separator_vertical_pane_g

0xec9f,	// (0x00025f80) eswt_control_pane_g1_copy4_ParamLimits

0xec9f,	// (0x00025f80) eswt_control_pane_g1_copy4

0xecac,	// (0x00025f8d) eswt_control_pane_g2_copy4_ParamLimits

0xecac,	// (0x00025f8d) eswt_control_pane_g2_copy4

0xecb9,	// (0x00025f9a) eswt_control_pane_g3_copy4_ParamLimits

0xecb9,	// (0x00025f9a) eswt_control_pane_g3_copy4

0xecc6,	// (0x00025fa7) eswt_control_pane_g4_copy4_ParamLimits

0xecc6,	// (0x00025fa7) eswt_control_pane_g4_copy4

0x9a67,	// (0x00020d48) eswt_ctrl_combo_button_pane

0x9a6f,	// (0x00020d50) eswt_ctrl_input_pane

0x9a77,	// (0x00020d58) popup_choice_list_window_cp70

0x9a7f,	// (0x00020d60) eswt_ctrl_input_pane_t1

0xb382,	// (0x00022663) input_focus_pane_cp70

0xe4ae,	// (0x0002578f) bg_button_pane_cp70_ParamLimits

0xe4ae,	// (0x0002578f) bg_button_pane_cp70

0x9a8d,	// (0x00020d6e) eswt_ctrl_combo_button_pane_g1

0xed59,	// (0x0002603a) wait_bar_pane_cp70

0xc7e6,	// (0x00023ac7) bg_popup_window_pane_cp70_ParamLimits

0xc7e6,	// (0x00023ac7) bg_popup_window_pane_cp70

0xed61,	// (0x00026042) popup_eswt_tasktip_window_t1

0xed77,	// (0x00026058) wait_bar_pane_cp71_ParamLimits

0xed77,	// (0x00026058) wait_bar_pane_cp71

0xed83,	// (0x00026064) grid_eswt_app_pane

0xbdb6,	// (0x00023097) scroll_pane_cp70

0x9a95,	// (0x00020d76) cell_eswt_app_pane_ParamLimits

0x9a95,	// (0x00020d76) cell_eswt_app_pane

0x9abd,	// (0x00020d9e) cell_eswt_app_pane_g1_ParamLimits

0x9abd,	// (0x00020d9e) cell_eswt_app_pane_g1

0x9aec,	// (0x00020dcd) cell_eswt_app_pane_g2_ParamLimits

0x9aec,	// (0x00020dcd) cell_eswt_app_pane_g2

0x0001,

0xfc12,	// (0x00026ef3) cell_eswt_app_pane_g_ParamLimits

0xfc12,	// (0x00026ef3) cell_eswt_app_pane_g

0x9b15,	// (0x00020df6) cell_eswt_app_pane_t1_ParamLimits

0x9b15,	// (0x00020df6) cell_eswt_app_pane_t1

0xed8c,	// (0x0002606d) grid_highlight_pane_cp70_ParamLimits

0xed8c,	// (0x0002606d) grid_highlight_pane_cp70

0xba26,	// (0x00022d07) set_content_pane_g1

0xc52f,	// (0x00023810) status_small_volume_pane

0x52b7,	// (0x0001c598) status_small_volume_pane_g1

0x52bf,	// (0x0001c5a0) volume_small2_pane

0x52c8,	// (0x0001c5a9) volume_small2_pane_g1

0x52d1,	// (0x0001c5b2) volume_small2_pane_g2

0x52da,	// (0x0001c5bb) volume_small2_pane_g3

0x52e3,	// (0x0001c5c4) volume_small2_pane_g4

0x52ec,	// (0x0001c5cd) volume_small2_pane_g5

0x52f5,	// (0x0001c5d6) volume_small2_pane_g6

0x52fe,	// (0x0001c5df) volume_small2_pane_g7

0x5307,	// (0x0001c5e8) volume_small2_pane_g8

0x5310,	// (0x0001c5f1) volume_small2_pane_g9

0x5319,	// (0x0001c5fa) volume_small2_pane_g10

0x0009,

0xfc17,	// (0x00026ef8) volume_small2_pane_g

0xe81c,	// (0x00025afd) fep_vkb_top_text_pane_g1_ParamLimits

0x99d4,	// (0x00020cb5) fep_vkb_top_text_pane_t1_ParamLimits

0xea40,	// (0x00025d21) popup_preview_fixed_window_g3_ParamLimits

0xea40,	// (0x00025d21) popup_preview_fixed_window_g3

0x8d62,	// (0x00020043) popup_toolbar_trans_pane

0x951e,	// (0x000207ff) aid_height_set_list_ParamLimits

0xd85f,	// (0x00024b40) aid_size_parent_ParamLimits

0xbb92,	// (0x00022e73) list_highlight_pane_cp2_ParamLimits

0xba26,	// (0x00022d07) set_content_pane_g1_ParamLimits

0x96a4,	// (0x00020985) list_single_image_pane_ParamLimits

0x96a4,	// (0x00020985) list_single_image_pane

0x9b47,	// (0x00020e28) aid_size_cell_image_ParamLimits

0x9b47,	// (0x00020e28) aid_size_cell_image

0x9b54,	// (0x00020e35) grid_single_image_pane_ParamLimits

0x9b54,	// (0x00020e35) grid_single_image_pane

0xba26,	// (0x00022d07) list_single_image_pane_g1_ParamLimits

0xba26,	// (0x00022d07) list_single_image_pane_g1

0xba32,	// (0x00022d13) list_single_image_pane_g2_ParamLimits

0xba32,	// (0x00022d13) list_single_image_pane_g2

0x0001,

0xfc2c,	// (0x00026f0d) list_single_image_pane_g_ParamLimits

0xfc2c,	// (0x00026f0d) list_single_image_pane_g

0xe35e,	// (0x0002563f) list_single_image_pane_t1_ParamLimits

0xe35e,	// (0x0002563f) list_single_image_pane_t1

0x9b60,	// (0x00020e41) cell_image_list_pane_ParamLimits

0x9b60,	// (0x00020e41) cell_image_list_pane

0x9b74,	// (0x00020e55) cell_image_list_pane_g1

0x9b7d,	// (0x00020e5e) cell_image_list_pane_g2

0x0001,

0xfc31,	// (0x00026f12) cell_image_list_pane_g

0xed98,	// (0x00026079) aid_size_cell_tb_trans_pane

0xba0c,	// (0x00022ced) bg_tb_trans_pane

0xedaa,	// (0x0002608b) grid_tb_trans_pane

0xc73c,	// (0x00023a1d) bg_tb_trans_pane_g1

0xc744,	// (0x00023a25) bg_tb_trans_pane_g2

0xc74c,	// (0x00023a2d) bg_tb_trans_pane_g3

0xc754,	// (0x00023a35) bg_tb_trans_pane_g4

0xc75c,	// (0x00023a3d) bg_tb_trans_pane_g5

0xc774,	// (0x00023a55) bg_tb_trans_pane_g6

0xc77c,	// (0x00023a5d) bg_tb_trans_pane_g7

0xc764,	// (0x00023a45) bg_tb_trans_pane_g8

0xc76c,	// (0x00023a4d) bg_tb_trans_pane_g9

0x0008,

0xfc36,	// (0x00026f17) bg_tb_trans_pane_g

0xedbe,	// (0x0002609f) cell_toolbar_trans_pane_ParamLimits

0xedbe,	// (0x0002609f) cell_toolbar_trans_pane

0xe4e9,	// (0x000257ca) cell_toolbar_trans_pane_g1

0x98d1,	// (0x00020bb2) list_form2_midp_pane_t1

0x98df,	// (0x00020bc0) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x00026dc0) list_form2_midp_pane_t

0xe1a7,	// (0x00025488) scroll_pane_cp51_ParamLimits

0xe31d,	// (0x000255fe) form2_midp_wait_pane_g1

0xe326,	// (0x00025607) form2_midp_wait_pane_g2

0xe32f,	// (0x00025610) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x00026dd5) form2_midp_wait_pane_g

0xb472,	// (0x00022753) list_highlight_pane_cp21_ParamLimits

0xe383,	// (0x00025664) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe392,	// (0x00025673) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3724,	// (0x0001aa05) list_single_2graphic_im_pane_ParamLimits

0x3724,	// (0x0001aa05) list_single_2graphic_im_pane

0x9b86,	// (0x00020e67) list_single_2graphic_im_pane_g1_ParamLimits

0x9b86,	// (0x00020e67) list_single_2graphic_im_pane_g1

0x9b97,	// (0x00020e78) list_single_2graphic_im_pane_g2_ParamLimits

0x9b97,	// (0x00020e78) list_single_2graphic_im_pane_g2

0x9ba3,	// (0x00020e84) list_single_2graphic_im_pane_g3_ParamLimits

0x9ba3,	// (0x00020e84) list_single_2graphic_im_pane_g3

0x0003,

0xfc49,	// (0x00026f2a) list_single_2graphic_im_pane_g_ParamLimits

0xfc49,	// (0x00026f2a) list_single_2graphic_im_pane_g

0x9bb7,	// (0x00020e98) list_single_2graphic_im_pane_t1_ParamLimits

0x9bb7,	// (0x00020e98) list_single_2graphic_im_pane_t1

0xea4c,	// (0x00025d2d) list_single_graphic_2heading_pane_fp_ParamLimits

0xea4c,	// (0x00025d2d) list_single_graphic_2heading_pane_fp

0x3ac8,	// (0x0001ada9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3ac8,	// (0x0001ada9) list_single_graphic_2heading_pane_fp_g1

0xea60,	// (0x00025d41) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xea60,	// (0x00025d41) list_single_graphic_2heading_pane_fp_g2

0x31db,	// (0x0001a4bc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x31db,	// (0x0001a4bc) list_single_graphic_2heading_pane_fp_g3

0x3a9d,	// (0x0001ad7e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3a9d,	// (0x0001ad7e) list_single_graphic_2heading_pane_fp_g4

0xea6c,	// (0x00025d4d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xea6c,	// (0x00025d4d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb77,	// (0x00026e58) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb77,	// (0x00026e58) list_single_graphic_2heading_pane_fp_g

0x3c95,	// (0x0001af76) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3c95,	// (0x0001af76) list_single_graphic_2heading_pane_fp_t1

0x3b00,	// (0x0001ade1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3b00,	// (0x0001ade1) list_single_graphic_2heading_pane_fp_t2

0x3cab,	// (0x0001af8c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3cab,	// (0x0001af8c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc52,	// (0x00026f33) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc52,	// (0x00026f33) list_single_graphic_2heading_pane_fp_t

0xe572,	// (0x00025853) fep_hwr_write_pane_g5_ParamLimits

0xe572,	// (0x00025853) fep_hwr_write_pane_g5

0xe57e,	// (0x0002585f) fep_hwr_write_pane_g6_ParamLimits

0xe57e,	// (0x0002585f) fep_hwr_write_pane_g6

0xec72,	// (0x00025f53) eswt_shell_pane_ParamLimits

0xc7e6,	// (0x00023ac7) bg_popup_window_pane_cp18_ParamLimits

0xd803,	// (0x00024ae4) heading_pane_cp70

0xed61,	// (0x00026042) popup_eswt_tasktip_window_t1_ParamLimits

0x8dfd,	// (0x000200de) aid_touch_tab_arrow_left

0x8e11,	// (0x000200f2) aid_touch_tab_arrow_right

0x7f43,	// (0x0001f224) title_pane_g3_ParamLimits

0x7f43,	// (0x0001f224) title_pane_g3

0xb9dc,	// (0x00022cbd) set_value_pane_g1

0x8d62,	// (0x00020043) popup_toolbar_trans_pane_ParamLimits

0xed98,	// (0x00026079) aid_size_cell_tb_trans_pane_ParamLimits

0xba0c,	// (0x00022ced) bg_tb_trans_pane_ParamLimits

0xedaa,	// (0x0002608b) grid_tb_trans_pane_ParamLimits

0xb5a5,	// (0x00022886) cont_note_pane_ParamLimits

0xb5a5,	// (0x00022886) cont_note_pane

0xb832,	// (0x00022b13) cont_snote2_single_text_pane_ParamLimits

0xb832,	// (0x00022b13) cont_snote2_single_text_pane

0xb832,	// (0x00022b13) cont_snote2_single_graphic_pane_ParamLimits

0xb832,	// (0x00022b13) cont_snote2_single_graphic_pane

0xcd26,	// (0x00024007) cont_note_wait_pane_ParamLimits

0xcd26,	// (0x00024007) cont_note_wait_pane

0xcd26,	// (0x00024007) cont_note_image_pane_ParamLimits

0xcd26,	// (0x00024007) cont_note_image_pane

0xedf0,	// (0x000260d1) popup_note2_window_g1_ParamLimits

0xedf0,	// (0x000260d1) popup_note2_window_g1

0xee21,	// (0x00026102) popup_note2_window_t1_ParamLimits

0xee21,	// (0x00026102) popup_note2_window_t1

0xee66,	// (0x00026147) popup_note2_window_t2_ParamLimits

0xee66,	// (0x00026147) popup_note2_window_t2

0xeeab,	// (0x0002618c) popup_note2_window_t3_ParamLimits

0xeeab,	// (0x0002618c) popup_note2_window_t3

0xeef0,	// (0x000261d1) popup_note2_window_t4_ParamLimits

0xeef0,	// (0x000261d1) popup_note2_window_t4

0xb629,	// (0x0002290a) popup_note2_window_t5_ParamLimits

0xb629,	// (0x0002290a) popup_note2_window_t5

0x0004,

0xfc5e,	// (0x00026f3f) popup_note2_window_t_ParamLimits

0xfc5e,	// (0x00026f3f) popup_note2_window_t

0xef1f,	// (0x00026200) popup_note2_image_window_g1_ParamLimits

0xef1f,	// (0x00026200) popup_note2_image_window_g1

0xef2b,	// (0x0002620c) popup_note2_image_window_g2_ParamLimits

0xef2b,	// (0x0002620c) popup_note2_image_window_g2

0x0001,

0xfc69,	// (0x00026f4a) popup_note2_image_window_g_ParamLimits

0xfc69,	// (0x00026f4a) popup_note2_image_window_g

0xef3d,	// (0x0002621e) popup_note2_image_window_t1_ParamLimits

0xef3d,	// (0x0002621e) popup_note2_image_window_t1

0xef55,	// (0x00026236) popup_note2_image_window_t2_ParamLimits

0xef55,	// (0x00026236) popup_note2_image_window_t2

0xef6d,	// (0x0002624e) popup_note2_image_window_t3_ParamLimits

0xef6d,	// (0x0002624e) popup_note2_image_window_t3

0x0002,

0xfc6e,	// (0x00026f4f) popup_note2_image_window_t_ParamLimits

0xfc6e,	// (0x00026f4f) popup_note2_image_window_t

0xcd34,	// (0x00024015) popup_note2_wait_window_g1_ParamLimits

0xcd34,	// (0x00024015) popup_note2_wait_window_g1

0xcd40,	// (0x00024021) popup_note2_wait_window_g2_ParamLimits

0xcd40,	// (0x00024021) popup_note2_wait_window_g2

0xcd4c,	// (0x0002402d) popup_note2_wait_window_g3_ParamLimits

0xcd4c,	// (0x0002402d) popup_note2_wait_window_g3

0x0002,

0xf835,	// (0x00026b16) popup_note2_wait_window_g_ParamLimits

0xf835,	// (0x00026b16) popup_note2_wait_window_g

0xef89,	// (0x0002626a) popup_note2_wait_window_t1_ParamLimits

0xef89,	// (0x0002626a) popup_note2_wait_window_t1

0xefa7,	// (0x00026288) popup_note2_wait_window_t2_ParamLimits

0xefa7,	// (0x00026288) popup_note2_wait_window_t2

0xefc5,	// (0x000262a6) popup_note2_wait_window_t3_ParamLimits

0xefc5,	// (0x000262a6) popup_note2_wait_window_t3

0xefd7,	// (0x000262b8) popup_note2_wait_window_t4_ParamLimits

0xefd7,	// (0x000262b8) popup_note2_wait_window_t4

0x0003,

0xfc75,	// (0x00026f56) popup_note2_wait_window_t_ParamLimits

0xfc75,	// (0x00026f56) popup_note2_wait_window_t

0xefe9,	// (0x000262ca) wait_bar2_pane_ParamLimits

0xefe9,	// (0x000262ca) wait_bar2_pane

0xf001,	// (0x000262e2) popup_snote2_single_text_window_g1_ParamLimits

0xf001,	// (0x000262e2) popup_snote2_single_text_window_g1

0xf029,	// (0x0002630a) popup_snote2_single_text_window_t1_ParamLimits

0xf029,	// (0x0002630a) popup_snote2_single_text_window_t1

0xf075,	// (0x00026356) popup_snote2_single_text_window_t2_ParamLimits

0xf075,	// (0x00026356) popup_snote2_single_text_window_t2

0xf0c1,	// (0x000263a2) popup_snote2_single_text_window_t3_ParamLimits

0xf0c1,	// (0x000263a2) popup_snote2_single_text_window_t3

0xf102,	// (0x000263e3) popup_snote2_single_text_window_t4_ParamLimits

0xf102,	// (0x000263e3) popup_snote2_single_text_window_t4

0xf138,	// (0x00026419) popup_snote2_single_text_window_t5_ParamLimits

0xf138,	// (0x00026419) popup_snote2_single_text_window_t5

0x0004,

0xfc7e,	// (0x00026f5f) popup_snote2_single_text_window_t_ParamLimits

0xfc7e,	// (0x00026f5f) popup_snote2_single_text_window_t

0xf163,	// (0x00026444) popup_snote2_single_graphic_window_g1_ParamLimits

0xf163,	// (0x00026444) popup_snote2_single_graphic_window_g1

0xf18b,	// (0x0002646c) popup_snote2_single_graphic_window_g2_ParamLimits

0xf18b,	// (0x0002646c) popup_snote2_single_graphic_window_g2

0x0001,

0xfc89,	// (0x00026f6a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc89,	// (0x00026f6a) popup_snote2_single_graphic_window_g

0xf1b3,	// (0x00026494) popup_snote2_single_graphic_window_t1_ParamLimits

0xf1b3,	// (0x00026494) popup_snote2_single_graphic_window_t1

0xf1ff,	// (0x000264e0) popup_snote2_single_graphic_window_t2_ParamLimits

0xf1ff,	// (0x000264e0) popup_snote2_single_graphic_window_t2

0xf0c1,	// (0x000263a2) popup_snote2_single_graphic_window_t3_ParamLimits

0xf0c1,	// (0x000263a2) popup_snote2_single_graphic_window_t3

0xf102,	// (0x000263e3) popup_snote2_single_graphic_window_t4_ParamLimits

0xf102,	// (0x000263e3) popup_snote2_single_graphic_window_t4

0xf138,	// (0x00026419) popup_snote2_single_graphic_window_t5_ParamLimits

0xf138,	// (0x00026419) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8e,	// (0x00026f6f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8e,	// (0x00026f6f) popup_snote2_single_graphic_window_t

0xe140,	// (0x00025421) clock_nsta_pane_cp2_t1

0xe140,	// (0x00025421) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x00026d96) clock_nsta_pane_cp2_t

0x3387,	// (0x0001a668) form_field_data_wide_pane_g1_ParamLimits

0xba26,	// (0x00022d07) form_field_data_wide_pane_g2_ParamLimits

0xba26,	// (0x00022d07) form_field_data_wide_pane_g2

0xba32,	// (0x00022d13) form_field_data_wide_pane_g3_ParamLimits

0xba32,	// (0x00022d13) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002695c) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002695c) form_field_data_wide_pane_g

0x981a,	// (0x00020afb) grid_touch_3_pane_ParamLimits

0x981a,	// (0x00020afb) grid_touch_3_pane

0x9be8,	// (0x00020ec9) cell_touch_3_pane_ParamLimits

0x9be8,	// (0x00020ec9) cell_touch_3_pane

0xe4e9,	// (0x000257ca) cell_touch_3_pane_g1

0xe4e9,	// (0x000257ca) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x00026e1b) cell_touch_3_pane_g

0xb681,	// (0x00022962) cont_query_data_pane

0xb689,	// (0x0002296a) cont_query_data_pane_cp1

0xf24b,	// (0x0002652c) button_value_adjust_pane_cp7

0xf253,	// (0x00026534) query_popup_pane_cp3

0xbf5e,	// (0x0002323f) bg_popup_sub_pane_cp22_ParamLimits

0x431c,	// (0x0001b5fd) navi_navi_volume_pane_cp2

0x4334,	// (0x0001b615) popup_side_volume_key_window_g2

0x4340,	// (0x0001b621) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x000269f2) popup_side_volume_key_window_g

0x435a,	// (0x0001b63b) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x000269f9) popup_side_volume_key_window_t

0xc1a8,	// (0x00023489) popup_side_volume_key_window_ParamLimits

0x764e,	// (0x0001e92f) list_double_graphic_pane_g4_ParamLimits

0x764e,	// (0x0001e92f) list_double_graphic_pane_g4

0x967c,	// (0x0002095d) list_single_2heading_msg_pane_ParamLimits

0x967c,	// (0x0002095d) list_single_2heading_msg_pane

0x7b97,	// (0x0001ee78) list_single_2heading_msg_pane_g1_ParamLimits

0x7b97,	// (0x0001ee78) list_single_2heading_msg_pane_g1

0x7ba3,	// (0x0001ee84) list_single_2heading_msg_pane_g2_ParamLimits

0x7ba3,	// (0x0001ee84) list_single_2heading_msg_pane_g2

0x7bb6,	// (0x0001ee97) list_single_2heading_msg_pane_g3_ParamLimits

0x7bb6,	// (0x0001ee97) list_single_2heading_msg_pane_g3

0x7bc2,	// (0x0001eea3) list_single_2heading_msg_pane_g4_ParamLimits

0x7bc2,	// (0x0001eea3) list_single_2heading_msg_pane_g4

0x0003,

0xfc99,	// (0x00026f7a) list_single_2heading_msg_pane_g_ParamLimits

0xfc99,	// (0x00026f7a) list_single_2heading_msg_pane_g

0x7bda,	// (0x0001eebb) list_single_2heading_msg_pane_t1_ParamLimits

0x7bda,	// (0x0001eebb) list_single_2heading_msg_pane_t1

0x7c02,	// (0x0001eee3) list_single_2heading_msg_pane_t2_ParamLimits

0x7c02,	// (0x0001eee3) list_single_2heading_msg_pane_t2

0x7c6d,	// (0x0001ef4e) list_single_2heading_msg_pane_t3_ParamLimits

0x7c6d,	// (0x0001ef4e) list_single_2heading_msg_pane_t3

0x3d8e,	// (0x0001b06f) list_single_2heading_msg_pane_t4_ParamLimits

0x3d8e,	// (0x0001b06f) list_single_2heading_msg_pane_t4

0x0003,

0xfca2,	// (0x00026f83) list_single_2heading_msg_pane_t_ParamLimits

0xfca2,	// (0x00026f83) list_single_2heading_msg_pane_t

0xb418,	// (0x000226f9) title_pane_g4_ParamLimits

0xb418,	// (0x000226f9) title_pane_g4

0x416c,	// (0x0001b44d) title_pane_stacon_g3_ParamLimits

0x416c,	// (0x0001b44d) title_pane_stacon_g3

0xede4,	// (0x000260c5) list_single_2graphic_im_pane_g4_ParamLimits

0xede4,	// (0x000260c5) list_single_2graphic_im_pane_g4

0xd62d,	// (0x0002490e) popup_side_volume_key_window_cp

0xdabc,	// (0x00024d9d) main_idle_act2_pane_t1

0x4b65,	// (0x0001be46) toolbar_button_pane_g10

0x82d3,	// (0x0001f5b4) popup_toolbar_window_cp1

0xe131,	// (0x00025412) clock_nsta_pane_cp_t1

0xe131,	// (0x00025412) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x00026d91) clock_nsta_pane_cp_t

0x431c,	// (0x0001b5fd) navi_navi_volume_pane_cp2_ParamLimits

0x4328,	// (0x0001b609) popup_side_volume_key_window_g1_ParamLimits

0x4334,	// (0x0001b615) popup_side_volume_key_window_g2_ParamLimits

0x4340,	// (0x0001b621) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x000269f2) popup_side_volume_key_window_g_ParamLimits

0x4fdb,	// (0x0001c2bc) fep_hwr_aid_pane

0x19fc,	// (0x00018cdd) bg_fep_hwr_top_pane_g4_ParamLimits

0xe542,	// (0x00025823) fep_hwr_top_pane_g1_ParamLimits

0xe554,	// (0x00025835) fep_hwr_top_pane_g2_ParamLimits

0x508e,	// (0x0001c36f) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x00026de6) fep_hwr_top_pane_g_ParamLimits

0x50a3,	// (0x0001c384) fep_hwr_top_text_pane_ParamLimits

0xd42d,	// (0x0002470e) aid_touch_tab_arrow_arrow_2

0xd436,	// (0x00024717) aid_touch_tab_arrow_left_2

0x4fef,	// (0x0001c2d0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5022,	// (0x0001c303) fep_hwr_prediction_pane

0xe687,	// (0x00025968) fep_vkb_prediction_pane

0x99b4,	// (0x00020c95) fep_vkb_side_pane_g3_ParamLimits

0x99b4,	// (0x00020c95) fep_vkb_side_pane_g3

0xe715,	// (0x000259f6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xeac0,	// (0x00025da1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xeacd,	// (0x00025dae) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaf,	// (0x00026e90) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf264,	// (0x00026545) fep_hwr_prediction_pane_g1

0x5322,	// (0x0001c603) fep_hwr_prediction_pane_g2

0x532a,	// (0x0001c60b) fep_hwr_prediction_pane_g3

0x5332,	// (0x0001c613) fep_hwr_prediction_pane_g4

0x0003,

0xfcab,	// (0x00026f8c) fep_hwr_prediction_pane_g

0xf264,	// (0x00026545) fep_vkb_prediction_pane_g1

0xf26e,	// (0x0002654f) fep_vkb_prediction_pane_g2

0xf276,	// (0x00026557) fep_vkb_prediction_pane_g3

0xf27e,	// (0x0002655f) fep_vkb_prediction_pane_g4

0x0003,

0xfcb4,	// (0x00026f95) fep_vkb_prediction_pane_g

0x4e13,	// (0x0001c0f4) slider_set_pane_g3

0x4e27,	// (0x0001c108) slider_set_pane_g4

0x4e3f,	// (0x0001c120) slider_set_pane_g5

0x4e13,	// (0x0001c0f4) slider_set_pane_g6

0x94e8,	// (0x000207c9) slider_set_pane_g7

0xd8ed,	// (0x00024bce) slider_form_pane_g3

0xd8f6,	// (0x00024bd7) slider_form_pane_g4

0xd8fe,	// (0x00024bdf) slider_form_pane_g5

0xd8ed,	// (0x00024bce) slider_form_pane_g6

0x9650,	// (0x00020931) slider_form_pane_g7

0xdd05,	// (0x00024fe6) slider_set_pane_vc_g3

0xdd0e,	// (0x00024fef) slider_set_pane_vc_g4

0xdd17,	// (0x00024ff8) slider_set_pane_vc_g5

0xdd05,	// (0x00024fe6) slider_set_pane_vc_g6

0xdd20,	// (0x00025001) slider_set_pane_vc_g7

0xdd05,	// (0x00024fe6) slider_form_pane_vc_g1

0xdd0e,	// (0x00024fef) slider_form_pane_vc_g2

0xdd17,	// (0x00024ff8) slider_form_pane_vc_g3

0xdd05,	// (0x00024fe6) slider_form_pane_vc_g4

0xde94,	// (0x00025175) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x00026d63) slider_form_pane_vc_g

0xb382,	// (0x00022663) main_idle_act3_pane

0xf286,	// (0x00026567) ai3_links_pane

0x9c2f,	// (0x00020f10) popup_ai3_data_window_ParamLimits

0x9c2f,	// (0x00020f10) popup_ai3_data_window

0xb382,	// (0x00022663) grid_ai3_links_pane

0x9c47,	// (0x00020f28) cell_ai3_links_pane_ParamLimits

0x9c47,	// (0x00020f28) cell_ai3_links_pane

0xf28f,	// (0x00026570) bg_popup_sub_pane_cp11

0xf29c,	// (0x0002657d) cell_ai3_links_pane_g1

0xb382,	// (0x00022663) bg_popup_sub_pane_cp12

0xf2c1,	// (0x000265a2) heading_ai3_data_pane

0xf2c9,	// (0x000265aa) list_ai3_gene_pane

0xf2d5,	// (0x000265b6) popup_ai3_data_window_g1

0xf2dd,	// (0x000265be) heading_ai3_data_pane_g1

0xf2e5,	// (0x000265c6) heading_ai3_data_pane_t1

0xf2f3,	// (0x000265d4) list_double_ai3_gene_pane_ParamLimits

0xf2f3,	// (0x000265d4) list_double_ai3_gene_pane

0xf300,	// (0x000265e1) list_single_ai3_gene_pane_ParamLimits

0xf300,	// (0x000265e1) list_single_ai3_gene_pane

0xe4ae,	// (0x0002578f) list_highlight_pane_cp7_ParamLimits

0xe4ae,	// (0x0002578f) list_highlight_pane_cp7

0xf30d,	// (0x000265ee) list_single_a13_gene_pane_t1_ParamLimits

0xf30d,	// (0x000265ee) list_single_a13_gene_pane_t1

0xf324,	// (0x00026605) list_single_ai3_gene_pane_g1

0xf32d,	// (0x0002660e) list_single_ai3_gene_pane_g2

0x0001,

0xfcbd,	// (0x00026f9e) list_single_ai3_gene_pane_g

0xf335,	// (0x00026616) list_double_ai3_gene_pane_g1_ParamLimits

0xf335,	// (0x00026616) list_double_ai3_gene_pane_g1

0xf341,	// (0x00026622) list_double_ai3_gene_pane_t1_ParamLimits

0xf341,	// (0x00026622) list_double_ai3_gene_pane_t1

0xf35d,	// (0x0002663e) list_double_ai3_gene_pane_t2_ParamLimits

0xf35d,	// (0x0002663e) list_double_ai3_gene_pane_t2

0xf372,	// (0x00026653) list_double_ai3_gene_pane_t3_ParamLimits

0xf372,	// (0x00026653) list_double_ai3_gene_pane_t3

0x0002,

0xfcc2,	// (0x00026fa3) list_double_ai3_gene_pane_t_ParamLimits

0xfcc2,	// (0x00026fa3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3cc1,	// (0x0001afa2) aid_size_min_col_2

0x9c1b,	// (0x00020efc) aid_size_min_msg_ParamLimits

0x9c1b,	// (0x00020efc) aid_size_min_msg

0x99c8,	// (0x00020ca9) fep_vkb_top_text_pane_g2_ParamLimits

0x99c8,	// (0x00020ca9) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x00026e16) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x00026e16) fep_vkb_top_text_pane_g

0xb382,	// (0x00022663) main_hc_apps_shell_pane

0xf38f,	// (0x00026670) grid_hc_apps_pane_ParamLimits

0xf38f,	// (0x00026670) grid_hc_apps_pane

0xf39e,	// (0x0002667f) list_hc_apps_pane

0xf3a6,	// (0x00026687) scroll_pane_cp37_ParamLimits

0xf3a6,	// (0x00026687) scroll_pane_cp37

0x9c5d,	// (0x00020f3e) cell_hc_apps_pane_ParamLimits

0x9c5d,	// (0x00020f3e) cell_hc_apps_pane

0x9cf7,	// (0x00020fd8) cell_hc_apps_pane_g1_ParamLimits

0x9cf7,	// (0x00020fd8) cell_hc_apps_pane_g1

0xf3b2,	// (0x00026693) cell_hc_apps_pane_g2_ParamLimits

0xf3b2,	// (0x00026693) cell_hc_apps_pane_g2

0xf3ce,	// (0x000266af) cell_hc_apps_pane_g3_ParamLimits

0xf3ce,	// (0x000266af) cell_hc_apps_pane_g3

0x0002,

0xfcc9,	// (0x00026faa) cell_hc_apps_pane_g_ParamLimits

0xfcc9,	// (0x00026faa) cell_hc_apps_pane_g

0x9d24,	// (0x00021005) cell_hc_apps_pane_t1_ParamLimits

0x9d24,	// (0x00021005) cell_hc_apps_pane_t1

0xb5a5,	// (0x00022886) grid_highlight_pane_cp10_ParamLimits

0xb5a5,	// (0x00022886) grid_highlight_pane_cp10

0x9d62,	// (0x00021043) list_single_hc_apps_pane_ParamLimits

0x9d62,	// (0x00021043) list_single_hc_apps_pane

0x9d8e,	// (0x0002106f) list_single_hc_apps_pane_g1

0x7cdb,	// (0x0001efbc) list_single_hc_apps_pane_g2

0x0001,

0xfcd0,	// (0x00026fb1) list_single_hc_apps_pane_g

0x7cf4,	// (0x0001efd5) list_single_hc_apps_pane_g2_copy1

0x7d10,	// (0x0001eff1) list_single_hc_apps_pane_t1

0xb472,	// (0x00022753) bg_set_opt_pane_cp_ParamLimits

0x40ba,	// (0x0001b39b) setting_slider_pane_t1_ParamLimits

0x8010,	// (0x0001f2f1) setting_slider_pane_t2_ParamLimits

0x8029,	// (0x0001f30a) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002683f) setting_slider_pane_t_ParamLimits

0x4100,	// (0x0001b3e1) slider_set_pane_ParamLimits

0x459c,	// (0x0001b87d) control_pane_g5_ParamLimits

0x459c,	// (0x0001b87d) control_pane_g5

0xd84a,	// (0x00024b2b) slider_set_pane_g1_ParamLimits

0x4e07,	// (0x0001c0e8) slider_set_pane_g2_ParamLimits

0x4e13,	// (0x0001c0f4) slider_set_pane_g3_ParamLimits

0x4e27,	// (0x0001c108) slider_set_pane_g4_ParamLimits

0x4e3f,	// (0x0001c120) slider_set_pane_g5_ParamLimits

0x4e13,	// (0x0001c0f4) slider_set_pane_g6_ParamLimits

0x94e8,	// (0x000207c9) slider_set_pane_g7_ParamLimits

0xf951,	// (0x00026c32) slider_set_pane_g_ParamLimits

0xb472,	// (0x00022753) navi_icon_text_pane_ParamLimits

0x8dcf,	// (0x000200b0) aid_fill_nsta_2_ParamLimits

0x8dfd,	// (0x000200de) aid_touch_tab_arrow_left_ParamLimits

0x8e11,	// (0x000200f2) aid_touch_tab_arrow_right_ParamLimits

0x8ead,	// (0x0002018e) clock_nsta_pane_ParamLimits

0xd40f,	// (0x000246f0) navi_icon_pane_g1_ParamLimits

0xd41b,	// (0x000246fc) navi_text_pane_t1_ParamLimits

0xe181,	// (0x00025462) navi_icon_text_pane_g1_ParamLimits

0xe18d,	// (0x0002546e) navi_icon_text_pane_t1_ParamLimits

0x9d8e,	// (0x0002106f) list_single_hc_apps_pane_g1_ParamLimits

0x7cdb,	// (0x0001efbc) list_single_hc_apps_pane_g2_ParamLimits

0xfcd0,	// (0x00026fb1) list_single_hc_apps_pane_g_ParamLimits

0x7cf4,	// (0x0001efd5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7d10,	// (0x0001eff1) list_single_hc_apps_pane_t1_ParamLimits

0x7e5b,	// (0x0001f13c) popup_toolbar2_fixed_window_ParamLimits

0x7e5b,	// (0x0001f13c) popup_toolbar2_fixed_window

0x8d5a,	// (0x0002003b) popup_toolbar2_float_window

0xb382,	// (0x00022663) bg_popup_sub_pane_cp27

0xf3f0,	// (0x000266d1) grid_toolbar2_float_pane

0xb382,	// (0x00022663) bg_popup_sub_pane_cp26

0xf3f0,	// (0x000266d1) grid_toolbar2_fixed_pane

0x9da7,	// (0x00021088) cell_toolbar2_fixed_pane_ParamLimits

0x9da7,	// (0x00021088) cell_toolbar2_fixed_pane

0x9dc2,	// (0x000210a3) cell_toolbar2_fixed_pane_g1

0xf3f8,	// (0x000266d9) toolbar2_fixed_button_pane

0xc73c,	// (0x00023a1d) toolbar2_fixed_button_pane_g1

0xc744,	// (0x00023a25) toolbar2_fixed_button_pane_g2

0xc74c,	// (0x00023a2d) toolbar2_fixed_button_pane_g3

0xc754,	// (0x00023a35) toolbar2_fixed_button_pane_g4

0xc75c,	// (0x00023a3d) toolbar2_fixed_button_pane_g5

0xc764,	// (0x00023a45) toolbar2_fixed_button_pane_g6

0xc76c,	// (0x00023a4d) toolbar2_fixed_button_pane_g7

0xc774,	// (0x00023a55) toolbar2_fixed_button_pane_g8

0xc77c,	// (0x00023a5d) toolbar2_fixed_button_pane_g9

0x0008,

0xf853,	// (0x00026b34) toolbar2_fixed_button_pane_g

0xf400,	// (0x000266e1) cell_toolbar2_float_pane_ParamLimits

0xf400,	// (0x000266e1) cell_toolbar2_float_pane

0xf411,	// (0x000266f2) cell_toolbar2_float_pane_g1

0xf3f8,	// (0x000266d9) toolbar2_fixed_button_pane_cp

0x997d,	// (0x00020c5e) fep_vkb_accented_list_pane_ParamLimits

0x997d,	// (0x00020c5e) fep_vkb_accented_list_pane

0x51e5,	// (0x0001c4c6) bg_popup_fep_shadow_pane_g9

0xc3b0,	// (0x00023691) bg_popup_fep_shadow_pane_cp3

0xbb42,	// (0x00022e23) list_accented_list_pane

0xf41a,	// (0x000266fb) list_single_accented_list_pane_ParamLimits

0xf41a,	// (0x000266fb) list_single_accented_list_pane

0xc3b0,	// (0x00023691) list_highlight_pane_cp10

0xf42b,	// (0x0002670c) list_single_accented_list_pane_t1

0x8c9c,	// (0x0001ff7d) popup_slider_window_ParamLimits

0x8c9c,	// (0x0001ff7d) popup_slider_window

0xf25b,	// (0x0002653c) aid_indentation_list_msg

0x9ea1,	// (0x00021182) bg_popup_window_pane_cp19

0xf491,	// (0x00026772) popup_slider_window_g1

0xf4ad,	// (0x0002678e) popup_slider_window_g2

0xf4c9,	// (0x000267aa) popup_slider_window_g3

0x0005,

0xfcd5,	// (0x00026fb6) popup_slider_window_g

0xf4e5,	// (0x000267c6) popup_slider_window_t1

0xf529,	// (0x0002680a) small_volume_slider_vertical_pane

0xe4e9,	// (0x000257ca) small_volume_slider_vertical_pane_g1

0xe4e9,	// (0x000257ca) small_volume_slider_vertical_pane_g2

0xf545,	// (0x00026826) small_volume_slider_vertical_pane_g3

0x0002,

0xfce7,	// (0x00026fc8) small_volume_slider_vertical_pane_g

0x7ddf,	// (0x0001f0c0) area_side_right_pane_ParamLimits

0x7ddf,	// (0x0001f0c0) area_side_right_pane

0x9f59,	// (0x0002123a) aid_size_side_button_ParamLimits

0x9f59,	// (0x0002123a) aid_size_side_button

0x9f72,	// (0x00021253) grid_sctrl_middle_pane_ParamLimits

0x9f72,	// (0x00021253) grid_sctrl_middle_pane

0x536a,	// (0x0001c64b) sctrl_sk_bottom_pane

0x537b,	// (0x0001c65c) sctrl_sk_top_pane

0x538d,	// (0x0001c66e) aid_touch_sctrl_top

0xb5a5,	// (0x00022886) bg_sctrl_sk_pane_ParamLimits

0xb5a5,	// (0x00022886) bg_sctrl_sk_pane

0x539a,	// (0x0001c67b) sctrl_sk_top_pane_g1

0x53a7,	// (0x0001c688) sctrl_sk_top_pane_t1

0x538d,	// (0x0001c66e) aid_touch_sctrl_bottom

0xb5a5,	// (0x00022886) bg_sctrl_sk_pane_cp_ParamLimits

0xb5a5,	// (0x00022886) bg_sctrl_sk_pane_cp

0x53c2,	// (0x0001c6a3) sctrl_sk_bottom_pane_g1

0x53a7,	// (0x0001c688) sctrl_sk_bottom_pane_t1

0x9f88,	// (0x00021269) cell_sctrl_middle_pane_ParamLimits

0x9f88,	// (0x00021269) cell_sctrl_middle_pane

0x9f99,	// (0x0002127a) aid_touch_sctrl_middle_ParamLimits

0x9f99,	// (0x0002127a) aid_touch_sctrl_middle

0x9fa6,	// (0x00021287) bg_sctrl_middle_pane_ParamLimits

0x9fa6,	// (0x00021287) bg_sctrl_middle_pane

0x1816,	// (0x00018af7) cell_sctrl_middle_pane_g1_ParamLimits

0x1816,	// (0x00018af7) cell_sctrl_middle_pane_g1

0x9fb4,	// (0x00021295) cell_sctrl_middle_pane_g2_ParamLimits

0x9fb4,	// (0x00021295) cell_sctrl_middle_pane_g2

0x0001,

0xfcf3,	// (0x00026fd4) cell_sctrl_middle_pane_g_ParamLimits

0xfcf3,	// (0x00026fd4) cell_sctrl_middle_pane_g

0xc73c,	// (0x00023a1d) bg_sctrl_middle_pane_g1

0xc744,	// (0x00023a25) bg_sctrl_middle_pane_g2

0xc74c,	// (0x00023a2d) bg_sctrl_middle_pane_g3

0xc754,	// (0x00023a35) bg_sctrl_middle_pane_g4

0xc75c,	// (0x00023a3d) bg_sctrl_middle_pane_g5

0xc764,	// (0x00023a45) bg_sctrl_middle_pane_g6

0xc76c,	// (0x00023a4d) bg_sctrl_middle_pane_g7

0xc774,	// (0x00023a55) bg_sctrl_middle_pane_g8

0x0007,

0xfcf8,	// (0x00026fd9) bg_sctrl_middle_pane_g

0xc77c,	// (0x00023a5d) bg_sctrl_middle_pane_g8_copy1

0xc73c,	// (0x00023a1d) bg_sctrl_sk_pane_g1

0xc744,	// (0x00023a25) bg_sctrl_sk_pane_g2

0xc74c,	// (0x00023a2d) bg_sctrl_sk_pane_g3

0x0008,

0xf853,	// (0x00026b34) bg_sctrl_sk_pane_g

0xb954,	// (0x00022c35) aid_size_touch_scroll_bar

0xc754,	// (0x00023a35) bg_sctrl_sk_pane_g4

0xc75c,	// (0x00023a3d) bg_sctrl_sk_pane_g5

0xc764,	// (0x00023a45) bg_sctrl_sk_pane_g6

0xc76c,	// (0x00023a4d) bg_sctrl_sk_pane_g7

0xc774,	// (0x00023a55) bg_sctrl_sk_pane_g8

0xc77c,	// (0x00023a5d) bg_sctrl_sk_pane_g9

0x472e,	// (0x0001ba0f) popup_fep_china_hwr2_fs_candidate_window

0x8897,	// (0x0001fb78) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8897,	// (0x0001fb78) popup_fep_china_hwr2_fs_control_window

0xe715,	// (0x000259f6) sctrl_sk_top_pane_g2

0x0001,

0xfcee,	// (0x00026fcf) sctrl_sk_top_pane_g

0x9fc1,	// (0x000212a2) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9fc1,	// (0x000212a2) aid_fep_china_hwr2_fs_cell

0x9fd5,	// (0x000212b6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9fd5,	// (0x000212b6) bg_popup_fep_shadow_pane_cp4

0x9fec,	// (0x000212cd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x9fec,	// (0x000212cd) bg_popup_fep_shadow_pane_cp5

0x9ffe,	// (0x000212df) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x9ffe,	// (0x000212df) popup_fep_china_hwr2_fs_control_bar_grid

0xa012,	// (0x000212f3) popup_fep_china_hwr2_fs_control_funtion_grid

0x1804,	// (0x00018ae5) aid_fep_china_hwr2_fs_candi_cell

0xb382,	// (0x00022663) bg_popup_fep_shadow_pane_cp6

0x180e,	// (0x00018aef) popup_fep_china_hwr2_fs_candidate_grid

0xa01a,	// (0x000212fb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa01a,	// (0x000212fb) cell_fep_china_hwr2_fs_funtion_grid

0xe4e9,	// (0x000257ca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x1816,	// (0x00018af7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x1816,	// (0x00018af7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x1824,	// (0x00018b05) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x1824,	// (0x00018b05) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd09,	// (0x00026fea) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd09,	// (0x00026fea) cell_fep_china_hwr2_fs_funtion_grid_g

0xa032,	// (0x00021313) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa032,	// (0x00021313) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa047,	// (0x00021328) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa047,	// (0x00021328) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0e,	// (0x00026fef) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0e,	// (0x00026fef) cell_fep_china_hwr2_fs_funtion_grid_t

0x183a,	// (0x00018b1b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x1842,	// (0x00018b23) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x184a,	// (0x00018b2b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd13,	// (0x00026ff4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x1852,	// (0x00018b33) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x1852,	// (0x00018b33) cell_fep_china_hwr2_fs_candidate_grid

0x186b,	// (0x00018b4c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x1873,	// (0x00018b54) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe4e9,	// (0x000257ca) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe4e9,	// (0x000257ca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x00026e1b) cell_fep_china_hwr2_fs_candidate_grid_g

0x187b,	// (0x00018b5c) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc5a1,	// (0x00023882) clock_nsta_pane_cp_24_ParamLimits

0xc5a1,	// (0x00023882) clock_nsta_pane_cp_24

0xc5fe,	// (0x000238df) indicator_nsta_pane_cp_24_ParamLimits

0xc5fe,	// (0x000238df) indicator_nsta_pane_cp_24

0xd31a,	// (0x000245fb) heading_pane_g1

0x0001,

0xf8b8,	// (0x00026b99) heading_pane_g

0x9742,	// (0x00020a23) grid_sct_catagory_button_pane

0xd8d0,	// (0x00024bb1) scroll_pane_cp5_ParamLimits

0xe1b3,	// (0x00025494) button_value_adjust_pane_cp5_ParamLimits

0xe1b3,	// (0x00025494) button_value_adjust_pane_cp5

0xe271,	// (0x00025552) form2_midp_time_pane_ParamLimits

0x1889,	// (0x00018b6a) cell_sct_catagory_button_pane_ParamLimits

0x1889,	// (0x00018b6a) cell_sct_catagory_button_pane

0xe4ae,	// (0x0002578f) bg_button_pane_cp01_ParamLimits

0xe4ae,	// (0x0002578f) bg_button_pane_cp01

0xe4e9,	// (0x000257ca) cell_sct_catagory_button_pane_g1

0x8d0b,	// (0x0001ffec) popup_tb_extension_window

0xa063,	// (0x00021344) aid_size_cell_ext_ParamLimits

0xa063,	// (0x00021344) aid_size_cell_ext

0xb832,	// (0x00022b13) bg_tb_trans_pane_cp1_ParamLimits

0xb832,	// (0x00022b13) bg_tb_trans_pane_cp1

0xa089,	// (0x0002136a) grid_tb_ext_pane_ParamLimits

0xa089,	// (0x0002136a) grid_tb_ext_pane

0xa0bf,	// (0x000213a0) cell_tb_ext_pane_ParamLimits

0xa0bf,	// (0x000213a0) cell_tb_ext_pane

0xa0e3,	// (0x000213c4) cell_tb_ext_pane_g1_ParamLimits

0xa0e3,	// (0x000213c4) cell_tb_ext_pane_g1

0x189b,	// (0x00018b7c) cell_tb_ext_pane_t1

0xb5a5,	// (0x00022886) list_highlight_pane_cp11_ParamLimits

0xb5a5,	// (0x00022886) list_highlight_pane_cp11

0x7e70,	// (0x0001f151) popup_uni_indicator_window_ParamLimits

0x7e70,	// (0x0001f151) popup_uni_indicator_window

0xba0c,	// (0x00022ced) bg_popup_sub_pane_cp14

0x18b6,	// (0x00018b97) list_uniindi_pane

0x18c2,	// (0x00018ba3) uniindi_top_pane

0xb5a5,	// (0x00022886) bg_uniindi_top_pane

0x18e1,	// (0x00018bc2) uniindi_top_pane_g1

0x18f7,	// (0x00018bd8) uniindi_top_pane_g2

0x0003,

0xfd1a,	// (0x00026ffb) uniindi_top_pane_g

0x1921,	// (0x00018c02) uniindi_top_pane_t1

0x194b,	// (0x00018c2c) list_single_uniindi_pane_ParamLimits

0x194b,	// (0x00018c2c) list_single_uniindi_pane

0xe4e9,	// (0x000257ca) bg_uniindi_top_pane_g1

0x195d,	// (0x00018c3e) list_single_uniindi_pane_g1

0x1970,	// (0x00018c51) list_single_uniindi_pane_t1

0xb382,	// (0x00022663) control_bg_pane

0x1995,	// (0x00018c76) bg_sctrl_sk_pane_cp1

0x199e,	// (0x00018c7f) bg_sctrl_sk_pane_cp2

0x19a7,	// (0x00018c88) control_bg_pane_g1

0x19b0,	// (0x00018c91) control_bg_pane_g2

0x0001,

0xfd23,	// (0x00027004) control_bg_pane_g

0xe074,	// (0x00025355) cell_indicator_nsta_pane_g1_ParamLimits

0x9847,	// (0x00020b28) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x00026d7f) cell_indicator_nsta_pane_g_ParamLimits

0x3a8a,	// (0x0001ad6b) form2_midp_time_pane_t1_ParamLimits

0x4fcd,	// (0x0001c2ae) main_idle_act4_pane_ParamLimits

0x4fcd,	// (0x0001c2ae) main_idle_act4_pane

0x8d0b,	// (0x0001ffec) popup_tb_extension_window_ParamLimits

0xa0a9,	// (0x0002138a) tb_ext_find_pane_ParamLimits

0xa0a9,	// (0x0002138a) tb_ext_find_pane

0x19b9,	// (0x00018c9a) ai_gene_pane_1_cp1

0xc444,	// (0x00023725) ai_gene_pane_2_cp1

0x19c1,	// (0x00018ca2) list_single_idle_plugin_calendar_pane

0x19ca,	// (0x00018cab) list_single_idle_plugin_notification_pane

0x19d3,	// (0x00018cb4) list_single_idle_plugin_player_pane

0xa100,	// (0x000213e1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa100,	// (0x000213e1) list_single_idle_plugin_shortcut_pane

0xa128,	// (0x00021409) main_idle_act4_pane_t1

0xa13e,	// (0x0002141f) main_idle_act4_pane_t2

0x0001,

0xfd28,	// (0x00027009) main_idle_act4_pane_t

0xa154,	// (0x00021435) middle_sk_idle_act4_pane_ParamLimits

0xa154,	// (0x00021435) middle_sk_idle_act4_pane

0xa170,	// (0x00021451) popup_clock_digital_analogue_window_cp2

0xa196,	// (0x00021477) shortcut_wheel_idle_act4_pane_ParamLimits

0xa196,	// (0x00021477) shortcut_wheel_idle_act4_pane

0xe4e9,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g1

0xe4e9,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g2

0xe4e9,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g3

0xe4e9,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g4

0xe4e9,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g5

0x19dc,	// (0x00018cbd) shortcut_wheel_idle_act4_pane_g6

0x19e4,	// (0x00018cc5) shortcut_wheel_idle_act4_pane_g7

0x19ec,	// (0x00018ccd) shortcut_wheel_idle_act4_pane_g8

0x19f4,	// (0x00018cd5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2d,	// (0x0002700e) shortcut_wheel_idle_act4_pane_g

0x19fc,	// (0x00018cdd) middle_sk_idle_act4_pane_g1_ParamLimits

0x19fc,	// (0x00018cdd) middle_sk_idle_act4_pane_g1

0xa211,	// (0x000214f2) middle_sk_idle_act4_pane_g2_ParamLimits

0xa211,	// (0x000214f2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd50,	// (0x00027031) middle_sk_idle_act4_pane_g_ParamLimits

0xfd50,	// (0x00027031) middle_sk_idle_act4_pane_g

0xa229,	// (0x0002150a) middle_sk_idle_act4_pane_t1_ParamLimits

0xa229,	// (0x0002150a) middle_sk_idle_act4_pane_t1

0xa258,	// (0x00021539) grid_ai_shortcut_pane_ParamLimits

0xa258,	// (0x00021539) grid_ai_shortcut_pane

0xa275,	// (0x00021556) list_highlight_pane_cp16_ParamLimits

0xa275,	// (0x00021556) list_highlight_pane_cp16

0xa282,	// (0x00021563) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa282,	// (0x00021563) list_single_idle_plugin_shortcut_pane_g1

0xa28e,	// (0x0002156f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa28e,	// (0x0002156f) list_single_idle_plugin_shortcut_pane_g2

0xa2aa,	// (0x0002158b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa2aa,	// (0x0002158b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd55,	// (0x00027036) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd55,	// (0x00027036) list_single_idle_plugin_shortcut_pane_g

0xa2bf,	// (0x000215a0) cell_ai_shortcut_pane_ParamLimits

0xa2bf,	// (0x000215a0) cell_ai_shortcut_pane

0xa2d5,	// (0x000215b6) cell_ai_shortcut_pane_g1_ParamLimits

0xa2d5,	// (0x000215b6) cell_ai_shortcut_pane_g1

0x19b9,	// (0x00018c9a) ai_gene_pane_1_cp2

0x1a0a,	// (0x00018ceb) ai_gene_pane_2_cp2

0x1a12,	// (0x00018cf3) list_highlight_pane_cp15

0x1a1b,	// (0x00018cfc) list_single_idle_plugin_calendar_pane_g1

0x1a12,	// (0x00018cf3) list_highlight_pane_cp17

0x1a23,	// (0x00018d04) list_single_idle_plugin_calendar_pane_g1_copy1

0x1a2b,	// (0x00018d0c) list_single_idle_plugin_player_pane_g1

0xdb48,	// (0x00024e29) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5c,	// (0x0002703d) list_single_idle_plugin_player_pane_g

0x1a33,	// (0x00018d14) list_single_idle_plugin_player_pane_t1

0x1a41,	// (0x00018d22) list_single_idle_plugin_player_pane_t2

0x1a4f,	// (0x00018d30) list_single_idle_plugin_player_pane_t3

0x1a5d,	// (0x00018d3e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd61,	// (0x00027042) list_single_idle_plugin_player_pane_t

0x1a6b,	// (0x00018d4c) wait_bar_pane_cp15

0x1a73,	// (0x00018d54) grid_ai_notification_pane

0xdb48,	// (0x00024e29) list_single_idle_plugin_notification_pane_g1

0xa2f7,	// (0x000215d8) cell_ai_notification_pane_ParamLimits

0xa2f7,	// (0x000215d8) cell_ai_notification_pane

0x1a7c,	// (0x00018d5d) cell_ai_notification_pane_g1

0x1a84,	// (0x00018d65) cell_ai_notification_pane_t1

0xa304,	// (0x000215e5) tb_ext_find_button_pane

0xa30c,	// (0x000215ed) tb_ext_find_pane_g1

0xa314,	// (0x000215f5) tb_ext_find_pane_t1

0xbf1e,	// (0x000231ff) tb_ext_find_button_pane_g1

0x1a92,	// (0x00018d73) tb_ext_find_button_pane_g2

0x0001,

0xfd6a,	// (0x0002704b) tb_ext_find_button_pane_g

0xa128,	// (0x00021409) main_idle_act4_pane_t1_ParamLimits

0xa13e,	// (0x0002141f) main_idle_act4_pane_t2_ParamLimits

0xfd28,	// (0x00027009) main_idle_act4_pane_t_ParamLimits

0xa170,	// (0x00021451) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa186,	// (0x00021467) sat_plugin_idle_act4_pane_ParamLimits

0xa186,	// (0x00021467) sat_plugin_idle_act4_pane

0xa322,	// (0x00021603) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa322,	// (0x00021603) sat_plugin_idle_act4_pane_t1

0xa33a,	// (0x0002161b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa33a,	// (0x0002161b) sat_plugin_idle_act4_pane_t2

0xa352,	// (0x00021633) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa352,	// (0x00021633) sat_plugin_idle_act4_pane_t3

0xa36a,	// (0x0002164b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa36a,	// (0x0002164b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6f,	// (0x00027050) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6f,	// (0x00027050) sat_plugin_idle_act4_pane_t

0x3f6c,	// (0x0001b24d) popup_battery_window_ParamLimits

0x3f6c,	// (0x0001b24d) popup_battery_window

0xb5a5,	// (0x00022886) bg_popup_sub_pane_cp25_ParamLimits

0xb5a5,	// (0x00022886) bg_popup_sub_pane_cp25

0x1a9b,	// (0x00018d7c) popup_battery_window_g1_ParamLimits

0x1a9b,	// (0x00018d7c) popup_battery_window_g1

0x1aa7,	// (0x00018d88) popup_battery_window_t1_ParamLimits

0x1aa7,	// (0x00018d88) popup_battery_window_t1

0x1ab9,	// (0x00018d9a) popup_battery_window_t2_ParamLimits

0x1ab9,	// (0x00018d9a) popup_battery_window_t2

0x0001,

0xfd78,	// (0x00027059) popup_battery_window_t_ParamLimits

0xfd78,	// (0x00027059) popup_battery_window_t

0x859b,	// (0x0001f87c) midp_canvas_pane_ParamLimits

0x85f0,	// (0x0001f8d1) midp_keypad_pane_ParamLimits

0x85f0,	// (0x0001f8d1) midp_keypad_pane

0xbb92,	// (0x00022e73) main_midp_pane_ParamLimits

0xe14f,	// (0x00025430) signal_pane_g2_cp_ParamLimits

0xa382,	// (0x00021663) aid_size_cell_midp_keypad_ParamLimits

0xa382,	// (0x00021663) aid_size_cell_midp_keypad

0xa3a0,	// (0x00021681) midp_keyp_game_grid_pane_ParamLimits

0xa3a0,	// (0x00021681) midp_keyp_game_grid_pane

0xa3bf,	// (0x000216a0) midp_keyp_rocker_pane_ParamLimits

0xa3bf,	// (0x000216a0) midp_keyp_rocker_pane

0xa400,	// (0x000216e1) midp_keyp_sk_left_pane_ParamLimits

0xa400,	// (0x000216e1) midp_keyp_sk_left_pane

0xa452,	// (0x00021733) midp_keyp_sk_right_pane_ParamLimits

0xa452,	// (0x00021733) midp_keyp_sk_right_pane

0xb382,	// (0x00022663) bg_button_pane_cp03

0xa49e,	// (0x0002177f) midp_keyp_sk_left_pane_g1

0xb382,	// (0x00022663) bg_button_pane_cp04

0xa49e,	// (0x0002177f) midp_keyp_sk_right_pane_g1

0xe4e9,	// (0x000257ca) midp_keyp_rocker_pane_g1

0xa4a7,	// (0x00021788) keyp_game_cell_pane_ParamLimits

0xa4a7,	// (0x00021788) keyp_game_cell_pane

0xb382,	// (0x00022663) bg_button_pane_cp02

0xa4c9,	// (0x000217aa) keyp_game_cell_pane_g1

0x7e21,	// (0x0001f102) popup_fep_vkb2_window_ParamLimits

0x7e21,	// (0x0001f102) popup_fep_vkb2_window

0xa4d2,	// (0x000217b3) aid_size_cell_vkb2_ParamLimits

0xa4d2,	// (0x000217b3) aid_size_cell_vkb2

0xa508,	// (0x000217e9) popup_fep_vkb2_window_g1_ParamLimits

0xa508,	// (0x000217e9) popup_fep_vkb2_window_g1

0xa558,	// (0x00021839) vkb2_area_bottom_pane_ParamLimits

0xa558,	// (0x00021839) vkb2_area_bottom_pane

0xa596,	// (0x00021877) vkb2_area_keypad_pane_ParamLimits

0xa596,	// (0x00021877) vkb2_area_keypad_pane

0xa5d4,	// (0x000218b5) vkb2_area_top_pane_ParamLimits

0xa5d4,	// (0x000218b5) vkb2_area_top_pane

0xa650,	// (0x00021931) vkb2_top_entry_pane_ParamLimits

0xa650,	// (0x00021931) vkb2_top_entry_pane

0xa67d,	// (0x0002195e) vkb2_top_grid_left_pane_ParamLimits

0xa67d,	// (0x0002195e) vkb2_top_grid_left_pane

0xa69d,	// (0x0002197e) vkb2_top_grid_right_pane_ParamLimits

0xa69d,	// (0x0002197e) vkb2_top_grid_right_pane

0x5a64,	// (0x0001cd45) vkb2_cell_keypad_pane_ParamLimits

0x5a64,	// (0x0001cd45) vkb2_cell_keypad_pane

0xa6e3,	// (0x000219c4) vkb2_area_bottom_grid_pane_ParamLimits

0xa6e3,	// (0x000219c4) vkb2_area_bottom_grid_pane

0xa709,	// (0x000219ea) vkb2_area_bottom_pane_g1_ParamLimits

0xa709,	// (0x000219ea) vkb2_area_bottom_pane_g1

0xa72f,	// (0x00021a10) vkb2_area_bottom_pane_g2_ParamLimits

0xa72f,	// (0x00021a10) vkb2_area_bottom_pane_g2

0xa760,	// (0x00021a41) vkb2_area_bottom_pane_g3_ParamLimits

0xa760,	// (0x00021a41) vkb2_area_bottom_pane_g3

0x0002,

0xfd7d,	// (0x0002705e) vkb2_area_bottom_pane_g_ParamLimits

0xfd7d,	// (0x0002705e) vkb2_area_bottom_pane_g

0x5bdc,	// (0x0001cebd) vkb2_top_cell_left_pane_ParamLimits

0x5bdc,	// (0x0001cebd) vkb2_top_cell_left_pane

0xa7b6,	// (0x00021a97) vkb2_top_entry_pane_g1_ParamLimits

0xa7b6,	// (0x00021a97) vkb2_top_entry_pane_g1

0xa7c4,	// (0x00021aa5) vkb2_top_entry_pane_t1_ParamLimits

0xa7c4,	// (0x00021aa5) vkb2_top_entry_pane_t1

0x1ade,	// (0x00018dbf) vkb2_top_entry_pane_t2_ParamLimits

0x1ade,	// (0x00018dbf) vkb2_top_entry_pane_t2

0x1b10,	// (0x00018df1) vkb2_top_entry_pane_t3_ParamLimits

0x1b10,	// (0x00018df1) vkb2_top_entry_pane_t3

0x0002,

0xfd84,	// (0x00027065) vkb2_top_entry_pane_t_ParamLimits

0xfd84,	// (0x00027065) vkb2_top_entry_pane_t

0xa7fd,	// (0x00021ade) vkb2_top_grid_right_pane_g1_ParamLimits

0xa7fd,	// (0x00021ade) vkb2_top_grid_right_pane_g1

0x5c7f,	// (0x0001cf60) vkb2_top_grid_right_pane_g2_ParamLimits

0x5c7f,	// (0x0001cf60) vkb2_top_grid_right_pane_g2

0x5c97,	// (0x0001cf78) vkb2_top_grid_right_pane_g3_ParamLimits

0x5c97,	// (0x0001cf78) vkb2_top_grid_right_pane_g3

0xa813,	// (0x00021af4) vkb2_top_grid_right_pane_g4_ParamLimits

0xa813,	// (0x00021af4) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8b,	// (0x0002706c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8b,	// (0x0002706c) vkb2_top_grid_right_pane_g

0x5cc5,	// (0x0001cfa6) vkb2_top_cell_left_pane_g1

0x5cdc,	// (0x0001cfbd) vkb2_cell_keypad_pane_g1_ParamLimits

0x5cdc,	// (0x0001cfbd) vkb2_cell_keypad_pane_g1

0x1b26,	// (0x00018e07) vkb2_cell_keypad_pane_t1_ParamLimits

0x1b26,	// (0x00018e07) vkb2_cell_keypad_pane_t1

0x5cea,	// (0x0001cfcb) vkb2_cell_bottom_grid_pane_ParamLimits

0x5cea,	// (0x0001cfcb) vkb2_cell_bottom_grid_pane

0x5d23,	// (0x0001d004) vkb2_cell_bottom_grid_pane_g1

0xa1b5,	// (0x00021496) aid_call2_pane_cp02

0xa1bd,	// (0x0002149e) aid_call_pane_cp02

0xa1c5,	// (0x000214a6) clock_digital_number_pane_cp10

0xa1cd,	// (0x000214ae) clock_digital_number_pane_cp11

0xa1d5,	// (0x000214b6) clock_digital_number_pane_cp12

0xa1dd,	// (0x000214be) clock_digital_number_pane_cp13

0xa1e5,	// (0x000214c6) clock_digital_separator_pane_cp10

0xbf1e,	// (0x000231ff) popup_clock_digital_analogue_window_cp2_g1

0xbf1e,	// (0x000231ff) popup_clock_digital_analogue_window_cp2_g2

0xa1ed,	// (0x000214ce) popup_clock_digital_analogue_window_cp2_g3

0xbf1e,	// (0x000231ff) popup_clock_digital_analogue_window_cp2_g4

0xa1ed,	// (0x000214ce) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd40,	// (0x00027021) popup_clock_digital_analogue_window_cp2_g

0xa1f5,	// (0x000214d6) popup_clock_digital_analogue_window_cp2_t1

0xa203,	// (0x000214e4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4b,	// (0x0002702c) popup_clock_digital_analogue_window_cp2_t

0xe4e9,	// (0x000257ca) clock_digital_number_pane_cp10_g1

0xe4e9,	// (0x000257ca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00026e1b) clock_digital_number_pane_cp10_g

0xe4e9,	// (0x000257ca) clock_digital_separator_pane_cp10_g1

0xe4e9,	// (0x000257ca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00026e1b) clock_digital_separator_pane_cp10_g

0x1903,	// (0x00018be4) uniindi_top_pane_g3

0x1914,	// (0x00018bf5) uniindi_top_pane_g4

0x5acf,	// (0x0001cdb0) vkb2_row_keypad_pane_ParamLimits

0x5acf,	// (0x0001cdb0) vkb2_row_keypad_pane

0x5d3f,	// (0x0001d020) vkb2_cell_t_keypad_pane_ParamLimits

0x5d3f,	// (0x0001d020) vkb2_cell_t_keypad_pane

0x5d4c,	// (0x0001d02d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5d4c,	// (0x0001d02d) vkb2_cell_t_keypad_pane_cp08

0x5d5c,	// (0x0001d03d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5d5c,	// (0x0001d03d) vkb2_cell_t_keypad_pane_cp09

0x5d6d,	// (0x0001d04e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5d6d,	// (0x0001d04e) vkb2_cell_t_keypad_pane_cp01

0x5d7d,	// (0x0001d05e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5d7d,	// (0x0001d05e) vkb2_cell_t_keypad_pane_cp02

0x5d8d,	// (0x0001d06e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5d8d,	// (0x0001d06e) vkb2_cell_t_keypad_pane_cp03

0x5d9d,	// (0x0001d07e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5d9d,	// (0x0001d07e) vkb2_cell_t_keypad_pane_cp04

0x5dad,	// (0x0001d08e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5dad,	// (0x0001d08e) vkb2_cell_t_keypad_pane_cp05

0x5dbd,	// (0x0001d09e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5dbd,	// (0x0001d09e) vkb2_cell_t_keypad_pane_cp06

0x5dcd,	// (0x0001d0ae) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5dcd,	// (0x0001d0ae) vkb2_cell_t_keypad_pane_cp07

0x5ddd,	// (0x0001d0be) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5ddd,	// (0x0001d0be) vkb2_cell_t_keypad_pane_cp10

0xe715,	// (0x000259f6) vkb2_cell_t_keypad_pane_g1

0x1b3d,	// (0x00018e1e) vkb2_cell_t_keypad_pane_t1

0xb382,	// (0x00022663) popup_grid_graphic2_window

0xa829,	// (0x00021b0a) aid_size_cell_graphic2_ParamLimits

0xa829,	// (0x00021b0a) aid_size_cell_graphic2

0xa867,	// (0x00021b48) bg_popup_window_pane_cp21_ParamLimits

0xa867,	// (0x00021b48) bg_popup_window_pane_cp21

0xa875,	// (0x00021b56) graphic2_pages_pane_ParamLimits

0xa875,	// (0x00021b56) graphic2_pages_pane

0xa8be,	// (0x00021b9f) grid_graphic2_control_pane_ParamLimits

0xa8be,	// (0x00021b9f) grid_graphic2_control_pane

0xa8fc,	// (0x00021bdd) grid_graphic2_pane_ParamLimits

0xa8fc,	// (0x00021bdd) grid_graphic2_pane

0xa96b,	// (0x00021c4c) cell_graphic2_pane

0xb382,	// (0x00022663) main_comp_mode_pane

0xf2c9,	// (0x000265aa) list_ai3_gene_pane_ParamLimits

0x9ea1,	// (0x00021182) bg_popup_window_pane_cp19_ParamLimits

0xf439,	// (0x0002671a) bg_touch_area_indi_pane_ParamLimits

0xf439,	// (0x0002671a) bg_touch_area_indi_pane

0xf44f,	// (0x00026730) bg_touch_area_indi_pane_cp01_ParamLimits

0xf44f,	// (0x00026730) bg_touch_area_indi_pane_cp01

0xf465,	// (0x00026746) bg_touch_area_indi_pane_cp02_ParamLimits

0xf465,	// (0x00026746) bg_touch_area_indi_pane_cp02

0xf47b,	// (0x0002675c) bg_touch_area_indi_pane_cp03_ParamLimits

0xf47b,	// (0x0002675c) bg_touch_area_indi_pane_cp03

0xf491,	// (0x00026772) popup_slider_window_g1_ParamLimits

0xf4ad,	// (0x0002678e) popup_slider_window_g2_ParamLimits

0xf4c9,	// (0x000267aa) popup_slider_window_g3_ParamLimits

0xfcd5,	// (0x00026fb6) popup_slider_window_g_ParamLimits

0xf4e5,	// (0x000267c6) popup_slider_window_t1_ParamLimits

0xf529,	// (0x0002680a) small_volume_slider_vertical_pane_ParamLimits

0xa96b,	// (0x00021c4c) cell_graphic2_pane_ParamLimits

0xa9b6,	// (0x00021c97) bg_button_pane_cp10_ParamLimits

0xa9b6,	// (0x00021c97) bg_button_pane_cp10

0xa9c7,	// (0x00021ca8) bg_button_pane_cp11_ParamLimits

0xa9c7,	// (0x00021ca8) bg_button_pane_cp11

0xa9d8,	// (0x00021cb9) graphic2_pages_pane_g1_ParamLimits

0xa9d8,	// (0x00021cb9) graphic2_pages_pane_g1

0xa9f3,	// (0x00021cd4) graphic2_pages_pane_g2_ParamLimits

0xa9f3,	// (0x00021cd4) graphic2_pages_pane_g2

0x0001,

0xfd99,	// (0x0002707a) graphic2_pages_pane_g_ParamLimits

0xfd99,	// (0x0002707a) graphic2_pages_pane_g

0xaa0b,	// (0x00021cec) graphic2_pages_pane_t1_ParamLimits

0xaa0b,	// (0x00021cec) graphic2_pages_pane_t1

0xaa23,	// (0x00021d04) cell_graphic2_control_pane_ParamLimits

0xaa23,	// (0x00021d04) cell_graphic2_control_pane

0xaa4d,	// (0x00021d2e) cell_graphic2_pane_g1_ParamLimits

0xaa4d,	// (0x00021d2e) cell_graphic2_pane_g1

0x1b4f,	// (0x00018e30) cell_graphic2_pane_g2_ParamLimits

0x1b4f,	// (0x00018e30) cell_graphic2_pane_g2

0xaa5a,	// (0x00021d3b) cell_graphic2_pane_g3_ParamLimits

0xaa5a,	// (0x00021d3b) cell_graphic2_pane_g3

0x1b5c,	// (0x00018e3d) cell_graphic2_pane_g4_ParamLimits

0x1b5c,	// (0x00018e3d) cell_graphic2_pane_g4

0xaa67,	// (0x00021d48) cell_graphic2_pane_g5_ParamLimits

0xaa67,	// (0x00021d48) cell_graphic2_pane_g5

0x0004,

0xfd9e,	// (0x0002707f) cell_graphic2_pane_g_ParamLimits

0xfd9e,	// (0x0002707f) cell_graphic2_pane_g

0xaa87,	// (0x00021d68) cell_graphic2_pane_t1_ParamLimits

0xaa87,	// (0x00021d68) cell_graphic2_pane_t1

0xd30e,	// (0x000245ef) grid_highlight_pane_cp11_ParamLimits

0xd30e,	// (0x000245ef) grid_highlight_pane_cp11

0xb5a5,	// (0x00022886) bg_button_pane_cp05

0xaabc,	// (0x00021d9d) cell_graphic2_control_pane_g1

0xe4e9,	// (0x000257ca) bg_touch_area_indi_pane_g1

0x1b69,	// (0x00018e4a) aid_cmod_rocker_key_size

0x1b73,	// (0x00018e54) aid_cmode_itu_key_size

0x1b7d,	// (0x00018e5e) main_cmode_video_pane

0x1b85,	// (0x00018e66) main_comp_mode_itu_pane

0x1b8f,	// (0x00018e70) main_comp_mode_rocker_pane

0x1b97,	// (0x00018e78) cell_cmode_rocker_pane_ParamLimits

0x1b97,	// (0x00018e78) cell_cmode_rocker_pane

0x1ba9,	// (0x00018e8a) cell_cmode_itu_pane_ParamLimits

0x1ba9,	// (0x00018e8a) cell_cmode_itu_pane

0xba0c,	// (0x00022ced) bg_button_pane_cp06_ParamLimits

0xba0c,	// (0x00022ced) bg_button_pane_cp06

0xe715,	// (0x000259f6) cell_cmode_rocker_pane_g1_ParamLimits

0xe715,	// (0x000259f6) cell_cmode_rocker_pane_g1

0x1816,	// (0x00018af7) cell_cmode_rocker_pane_g2_ParamLimits

0x1816,	// (0x00018af7) cell_cmode_rocker_pane_g2

0x0001,

0xfdae,	// (0x0002708f) cell_cmode_rocker_pane_g_ParamLimits

0xfdae,	// (0x0002708f) cell_cmode_rocker_pane_g

0xb382,	// (0x00022663) bg_button_pane_cp07

0x1bbe,	// (0x00018e9f) cell_cmode_itu_pane_g1

0x1bc7,	// (0x00018ea8) cell_cmode_itu_pane_t1

0x1bd5,	// (0x00018eb6) cell_cmode_itu_pane_t2

0x0001,

0xfdb3,	// (0x00027094) cell_cmode_itu_pane_t

0x1985,	// (0x00018c66) aid_touch_ctrl_left

0x198d,	// (0x00018c6e) aid_touch_ctrl_right

0xb382,	// (0x00022663) compa_mode_pane

0xaae4,	// (0x00021dc5) aid_cmod_rocker_key_size_cp

0xaaee,	// (0x00021dcf) aid_cmode_itu_key_size_cp

0x1be3,	// (0x00018ec4) compa_mode_pane_g1

0x1beb,	// (0x00018ecc) compa_mode_pane_g2

0x1bf3,	// (0x00018ed4) compa_mode_pane_g3

0x0002,

0xfdb8,	// (0x00027099) compa_mode_pane_g

0xaaf8,	// (0x00021dd9) main_comp_mode_itu_pane_cp

0xab02,	// (0x00021de3) main_comp_mode_rocker_pane_cp

0xab0c,	// (0x00021ded) cell_cmode_itu_pane_cp_ParamLimits

0xab0c,	// (0x00021ded) cell_cmode_itu_pane_cp

0xab21,	// (0x00021e02) cell_cmode_rocker_pane_cp_ParamLimits

0xab21,	// (0x00021e02) cell_cmode_rocker_pane_cp

0xba0c,	// (0x00022ced) bg_button_pane_cp06_cp_ParamLimits

0xba0c,	// (0x00022ced) bg_button_pane_cp06_cp

0xe715,	// (0x000259f6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe715,	// (0x000259f6) cell_cmode_rocker_pane_g1_cp

0xe4e9,	// (0x000257ca) cell_cmode_rocker_pane_g2_cp

0xb382,	// (0x00022663) bg_button_pane_cp07_cp

0xab33,	// (0x00021e14) cell_cmode_itu_pane_g1_cp

0xab3c,	// (0x00021e1d) cell_cmode_itu_pane_t1_cp

0xab4a,	// (0x00021e2b) cell_cmode_itu_pane_t2_cp

0x9648,	// (0x00020929) settings_code_pane_cp2

0xb472,	// (0x00022753) bg_popup_window_pane_cp3_ParamLimits

0xb7a3,	// (0x00022a84) heading_pane_cp3_ParamLimits

0xb7af,	// (0x00022a90) listscroll_popup_graphic_pane_ParamLimits

0x4fdb,	// (0x0001c2bc) fep_hwr_aid_pane_ParamLimits

0x538d,	// (0x0001c66e) aid_touch_sctrl_top_ParamLimits

0x539a,	// (0x0001c67b) sctrl_sk_top_pane_g1_ParamLimits

0xe715,	// (0x000259f6) sctrl_sk_top_pane_g2_ParamLimits

0xfcee,	// (0x00026fcf) sctrl_sk_top_pane_g_ParamLimits

0x53a7,	// (0x0001c688) sctrl_sk_top_pane_t1_ParamLimits

0x538d,	// (0x0001c66e) aid_touch_sctrl_bottom_ParamLimits

0x53a7,	// (0x0001c688) sctrl_sk_bottom_pane_t1_ParamLimits

0x18cf,	// (0x00018bb0) aid_area_touch_clock

0xa612,	// (0x000218f3) aid_vkb2_area_top_pane_cell_ParamLimits

0xa612,	// (0x000218f3) aid_vkb2_area_top_pane_cell

0xa6bd,	// (0x0002199e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa6bd,	// (0x0002199e) aid_vkb2_area_bottom_pane_cell

0x1ad6,	// (0x00018db7) popup_char_count_window

0x1bfb,	// (0x00018edc) popup_char_count_window_g1

0x1c04,	// (0x00018ee5) popup_char_count_window_g2

0x1c0d,	// (0x00018eee) popup_char_count_window_g3

0x0002,

0xfdbf,	// (0x000270a0) popup_char_count_window_g

0x1c16,	// (0x00018ef7) popup_char_count_window_t1

0x58b4,	// (0x0001cb95) popup_fep_char_preview_window_ParamLimits

0x58b4,	// (0x0001cb95) popup_fep_char_preview_window

0xa632,	// (0x00021913) vkb2_top_candi_pane_ParamLimits

0xa632,	// (0x00021913) vkb2_top_candi_pane

0xab58,	// (0x00021e39) cell_vkb2_top_candi_pane_ParamLimits

0xab58,	// (0x00021e39) cell_vkb2_top_candi_pane

0xcd26,	// (0x00024007) bg_popup_fep_char_preview_window_ParamLimits

0xcd26,	// (0x00024007) bg_popup_fep_char_preview_window

0x610d,	// (0x0001d3ee) popup_fep_char_preview_window_t1_ParamLimits

0x610d,	// (0x0001d3ee) popup_fep_char_preview_window_t1

0x1c34,	// (0x00018f15) bg_popup_fep_char_preview_window_g1

0x1c2c,	// (0x00018f0d) bg_popup_fep_char_preview_window_g2

0x1c24,	// (0x00018f05) bg_popup_fep_char_preview_window_g3

0x1c54,	// (0x00018f35) bg_popup_fep_char_preview_window_g4

0x1c4c,	// (0x00018f2d) bg_popup_fep_char_preview_window_g5

0x6147,	// (0x0001d428) bg_popup_fep_char_preview_window_g6

0x1c44,	// (0x00018f25) bg_popup_fep_char_preview_window_g7

0x1c3c,	// (0x00018f1d) bg_popup_fep_char_preview_window_g8

0x1c5c,	// (0x00018f3d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc6,	// (0x000270a7) bg_popup_fep_char_preview_window_g

0xe715,	// (0x000259f6) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe715,	// (0x000259f6) cell_vkb2_top_candi_pane_g1

0xe944,	// (0x00025c25) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe944,	// (0x00025c25) cell_vkb2_top_candi_pane_g2

0xe965,	// (0x00025c46) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe965,	// (0x00025c46) cell_vkb2_top_candi_pane_g3

0x614f,	// (0x0001d430) cell_vkb2_top_candi_pane_g4_ParamLimits

0x614f,	// (0x0001d430) cell_vkb2_top_candi_pane_g4

0x17e3,	// (0x00018ac4) cell_vkb2_top_candi_pane_g5_ParamLimits

0x17e3,	// (0x00018ac4) cell_vkb2_top_candi_pane_g5

0x1816,	// (0x00018af7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1816,	// (0x00018af7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd9,	// (0x000270ba) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd9,	// (0x000270ba) cell_vkb2_top_candi_pane_g

0x6170,	// (0x0001d451) cell_vkb2_top_candi_pane_t1

0x4df3,	// (0x0001c0d4) aid_size_touch_slider_mark_ParamLimits

0x4df3,	// (0x0001c0d4) aid_size_touch_slider_mark

0xa8a9,	// (0x00021b8a) grid_graphic2_catg_pane_ParamLimits

0xa8a9,	// (0x00021b8a) grid_graphic2_catg_pane

0xa940,	// (0x00021c21) popup_grid_graphic2_window_t1_ParamLimits

0xa940,	// (0x00021c21) popup_grid_graphic2_window_t1

0xa955,	// (0x00021c36) popup_grid_graphic2_window_t2_ParamLimits

0xa955,	// (0x00021c36) popup_grid_graphic2_window_t2

0x0001,

0xfd94,	// (0x00027075) popup_grid_graphic2_window_t_ParamLimits

0xfd94,	// (0x00027075) popup_grid_graphic2_window_t

0xb5a5,	// (0x00022886) bg_button_pane_cp05_ParamLimits

0xaabc,	// (0x00021d9d) cell_graphic2_control_pane_g1_ParamLimits

0x194b,	// (0x00018c2c) cell_graphic2_catg_pane_ParamLimits

0x194b,	// (0x00018c2c) cell_graphic2_catg_pane

0xb382,	// (0x00022663) bg_button_pane_cp12

0xaba2,	// (0x00021e83) cell_graphic2_catg_pane_g1

0x189b,	// (0x00018b7c) cell_tb_ext_pane_t1_ParamLimits

0x5c3c,	// (0x0001cf1d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5c3c,	// (0x0001cf1d) vkb2_top_cell_right_narrow_pane

0x5c54,	// (0x0001cf35) vkb2_top_cell_right_wide_pane_ParamLimits

0x5c54,	// (0x0001cf35) vkb2_top_cell_right_wide_pane

0x4fcd,	// (0x0001c2ae) bg_vkb2_func_pane_ParamLimits

0x4fcd,	// (0x0001c2ae) bg_vkb2_func_pane

0x5cc5,	// (0x0001cfa6) vkb2_top_cell_left_pane_g1_ParamLimits

0x4fcd,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4fcd,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp03

0x5d23,	// (0x0001d004) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc744,	// (0x00023a25) bg_vkb2_func_pane_g1

0xc74c,	// (0x00023a2d) bg_vkb2_func_pane_g2

0xc75c,	// (0x00023a3d) bg_vkb2_func_pane_g3

0xc754,	// (0x00023a35) bg_vkb2_func_pane_g4

0xc764,	// (0x00023a45) bg_vkb2_func_pane_g5

0xc76c,	// (0x00023a4d) bg_vkb2_func_pane_g6

0xc774,	// (0x00023a55) bg_vkb2_func_pane_g7

0xc77c,	// (0x00023a5d) bg_vkb2_func_pane_g8

0xc73c,	// (0x00023a1d) bg_vkb2_func_pane_g9

0x0008,

0xfde6,	// (0x000270c7) bg_vkb2_func_pane_g

0x4fcd,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4fcd,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp01

0x5cc5,	// (0x0001cfa6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5cc5,	// (0x0001cfa6) vkb2_top_cell_right_wide_pane_g1

0x4fcd,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4fcd,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp02

0x5d23,	// (0x0001d004) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5d23,	// (0x0001d004) vkb2_top_cell_right_narrow_pane_g1

0x9def,	// (0x000210d0) aid_touch_area_decrease_ParamLimits

0x9def,	// (0x000210d0) aid_touch_area_decrease

0x9e1d,	// (0x000210fe) aid_touch_area_increase_ParamLimits

0x9e1d,	// (0x000210fe) aid_touch_area_increase

0x9e45,	// (0x00021126) aid_touch_area_mute_ParamLimits

0x9e45,	// (0x00021126) aid_touch_area_mute

0x9e6d,	// (0x0002114e) aid_touch_area_slider_ParamLimits

0x9e6d,	// (0x0002114e) aid_touch_area_slider

0x9ead,	// (0x0002118e) popup_slider_window_g4_ParamLimits

0x9ead,	// (0x0002118e) popup_slider_window_g4

0x9ed5,	// (0x000211b6) popup_slider_window_g5_ParamLimits

0x9ed5,	// (0x000211b6) popup_slider_window_g5

0x9f09,	// (0x000211ea) popup_slider_window_g6_ParamLimits

0x9f09,	// (0x000211ea) popup_slider_window_g6

0xf511,	// (0x000267f2) popup_slider_window_t2_ParamLimits

0xf511,	// (0x000267f2) popup_slider_window_t2

0x0001,

0xfce2,	// (0x00026fc3) popup_slider_window_t_ParamLimits

0xfce2,	// (0x00026fc3) popup_slider_window_t

0x9f25,	// (0x00021206) slider_pane_ParamLimits

0x9f25,	// (0x00021206) slider_pane

0x1c64,	// (0x00018f45) slider_pane_g1_ParamLimits

0x1c64,	// (0x00018f45) slider_pane_g1

0x1c78,	// (0x00018f59) slider_pane_g2_ParamLimits

0x1c78,	// (0x00018f59) slider_pane_g2

0x1c8e,	// (0x00018f6f) slider_pane_g3_ParamLimits

0x1c8e,	// (0x00018f6f) slider_pane_g3

0x0003,

0xfdf9,	// (0x000270da) slider_pane_g_ParamLimits

0xfdf9,	// (0x000270da) slider_pane_g

0x8d47,	// (0x00020028) popup_tb_float_extension_window_ParamLimits

0x8d47,	// (0x00020028) popup_tb_float_extension_window

0x1cba,	// (0x00018f9b) aid_size_cell_tb_float_ext

0xb382,	// (0x00022663) bg_popup_sub_window_cp28

0x1cc5,	// (0x00018fa6) grid_tb_float_ext_pane

0x1ccd,	// (0x00018fae) cell_tb_float_ext_pane_ParamLimits

0x1ccd,	// (0x00018fae) cell_tb_float_ext_pane

0x1ce5,	// (0x00018fc6) cell_tb_float_ext_pane_g1

0x1cee,	// (0x00018fcf) grid_highlight_pane_cp12

0x995b,	// (0x00020c3c) cell_last_hwr_side_pane_ParamLimits

0x995b,	// (0x00020c3c) cell_last_hwr_side_pane

0xe4e9,	// (0x000257ca) cell_last_hwr_side_pane_g1

0x1cf7,	// (0x00018fd8) cell_last_hwr_side_pane_g2

0x0001,

0xfe02,	// (0x000270e3) cell_last_hwr_side_pane_g

0xa791,	// (0x00021a72) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa791,	// (0x00021a72) vkb2_area_bottom_space_btn_pane

0xe715,	// (0x000259f6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x1b3d,	// (0x00018e1e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6170,	// (0x0001d451) cell_vkb2_top_candi_pane_t1_ParamLimits

0x61a1,	// (0x0001d482) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x61a1,	// (0x0001d482) vkb2_area_bottom_space_btn_pane_g1

0x61d7,	// (0x0001d4b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x61d7,	// (0x0001d4b8) vkb2_area_bottom_space_btn_pane_g2

0x620d,	// (0x0001d4ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x620d,	// (0x0001d4ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe07,	// (0x000270e8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe07,	// (0x000270e8) vkb2_area_bottom_space_btn_pane_g

0x507c,	// (0x0001c35d) cel_fep_hwr_func_pane_ParamLimits

0x507c,	// (0x0001c35d) cel_fep_hwr_func_pane

0x9930,	// (0x00020c11) cell_hwr_side_button_pane_ParamLimits

0x9930,	// (0x00020c11) cell_hwr_side_button_pane

0x18cf,	// (0x00018bb0) aid_area_touch_clock_ParamLimits

0xb5a5,	// (0x00022886) bg_uniindi_top_pane_ParamLimits

0x18e1,	// (0x00018bc2) uniindi_top_pane_g1_ParamLimits

0x18f7,	// (0x00018bd8) uniindi_top_pane_g2_ParamLimits

0x1903,	// (0x00018be4) uniindi_top_pane_g3_ParamLimits

0x1914,	// (0x00018bf5) uniindi_top_pane_g4_ParamLimits

0xfd1a,	// (0x00026ffb) uniindi_top_pane_g_ParamLimits

0x1921,	// (0x00018c02) uniindi_top_pane_t1_ParamLimits

0xb5a5,	// (0x00022886) bg_vkb2_func_pane_cp01_ParamLimits

0xb5a5,	// (0x00022886) bg_vkb2_func_pane_cp01

0x1d00,	// (0x00018fe1) cel_fep_hwr_func_pane_g1_ParamLimits

0x1d00,	// (0x00018fe1) cel_fep_hwr_func_pane_g1

0xb5a5,	// (0x00022886) bg_vkb2_func_pane_cp02_ParamLimits

0xb5a5,	// (0x00022886) bg_vkb2_func_pane_cp02

0x1d00,	// (0x00018fe1) cell_hwr_side_button_pane_g1_ParamLimits

0x1d00,	// (0x00018fe1) cell_hwr_side_button_pane_g1

0xc660,	// (0x00023941) status_pane_g4_ParamLimits

0xc660,	// (0x00023941) status_pane_g4

0xc678,	// (0x00023959) status_pane_t1

0xe2d9,	// (0x000255ba) form2_midp_gauge_slider_cont_pane

0xe2e1,	// (0x000255c2) form2_midp_gauge_slider_pane_t1_ParamLimits

0x990c,	// (0x00020bed) form2_midp_gauge_slider_pane_t2_ParamLimits

0x991e,	// (0x00020bff) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x00026dce) form2_midp_gauge_slider_pane_t_ParamLimits

0xe2f3,	// (0x000255d4) form2_midp_slider_pane_ParamLimits

0x5874,	// (0x0001cb55) aid_size_cell_func_vkb2_ParamLimits

0x5874,	// (0x0001cb55) aid_size_cell_func_vkb2

0x1ca6,	// (0x00018f87) slider_pane_g4_ParamLimits

0x1ca6,	// (0x00018f87) slider_pane_g4

0xabab,	// (0x00021e8c) form2_midp_gauge_slider_pane_t2_cp01

0xabb9,	// (0x00021e9a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xabb9,	// (0x00021e9a) form2_midp_gauge_slider_pane_t3_cp01

0x627e,	// (0x0001d55f) form2_midp_slider_pane_cp01

0xb382,	// (0x00022663) navi_smil_pane

0x1d30,	// (0x00019011) navi_smil_pane_g1

0x1d38,	// (0x00019019) navi_smil_pane_t1

0x1d0e,	// (0x00018fef) form2_midp_slider_pane_g1

0x1d17,	// (0x00018ff8) form2_midp_slider_pane_g2

0x1d1f,	// (0x00019000) form2_midp_slider_pane_g3

0x1d0e,	// (0x00018fef) form2_midp_slider_pane_g4

0xabd6,	// (0x00021eb7) form2_midp_slider_pane_g5

0x0004,

0xfe10,	// (0x000270f1) form2_midp_slider_pane_g

0x6243,	// (0x0001d524) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6243,	// (0x0001d524) vkb2_area_bottom_space_btn_pane_g4

0x8ee9,	// (0x000201ca) lc0_navi_pane_ParamLimits

0x8ee9,	// (0x000201ca) lc0_navi_pane

0x8f53,	// (0x00020234) lc0_stat_indi_pane_ParamLimits

0x8f53,	// (0x00020234) lc0_stat_indi_pane

0x8f68,	// (0x00020249) ls0_title_pane_ParamLimits

0x8f68,	// (0x00020249) ls0_title_pane

0xba0c,	// (0x00022ced) bg_popup_sub_pane_cp14_ParamLimits

0x18b6,	// (0x00018b97) list_uniindi_pane_ParamLimits

0x18c2,	// (0x00018ba3) uniindi_top_pane_ParamLimits

0x195d,	// (0x00018c3e) list_single_uniindi_pane_g1_ParamLimits

0x1970,	// (0x00018c51) list_single_uniindi_pane_t1_ParamLimits

0xabdf,	// (0x00021ec0) lc0_stat_clock_pane_ParamLimits

0xabdf,	// (0x00021ec0) lc0_stat_clock_pane

0xabec,	// (0x00021ecd) lc0_stat_indi_pane_g1_ParamLimits

0xabec,	// (0x00021ecd) lc0_stat_indi_pane_g1

0xabf9,	// (0x00021eda) lc0_stat_indi_pane_g2_ParamLimits

0xabf9,	// (0x00021eda) lc0_stat_indi_pane_g2

0x0001,

0xfe1b,	// (0x000270fc) lc0_stat_indi_pane_g_ParamLimits

0xfe1b,	// (0x000270fc) lc0_stat_indi_pane_g

0xac06,	// (0x00021ee7) lc0_uni_indicator_pane_ParamLimits

0xac06,	// (0x00021ee7) lc0_uni_indicator_pane

0x1d46,	// (0x00019027) ls0_title_pane_g1_ParamLimits

0x1d46,	// (0x00019027) ls0_title_pane_g1

0xac13,	// (0x00021ef4) ls0_title_pane_t1_ParamLimits

0xac13,	// (0x00021ef4) ls0_title_pane_t1

0xac41,	// (0x00021f22) lc0_uni_indicator_pane_g1_ParamLimits

0xac41,	// (0x00021f22) lc0_uni_indicator_pane_g1

0x1d5a,	// (0x0001903b) lc0_stat_clock_pane_t1

0xb382,	// (0x00022663) main_ai5_pane

0x1d68,	// (0x00019049) ai5_sk_pane_ParamLimits

0x1d68,	// (0x00019049) ai5_sk_pane

0xac56,	// (0x00021f37) cell_ai5_widget_pane_ParamLimits

0xac56,	// (0x00021f37) cell_ai5_widget_pane

0x1d75,	// (0x00019056) aid_size_cell_widget_grid

0x1d82,	// (0x00019063) bg_ai5_widget_pane_ParamLimits

0x1d82,	// (0x00019063) bg_ai5_widget_pane

0xace3,	// (0x00021fc4) cell_ai5_widget_pane_g2

0xacf7,	// (0x00021fd8) cell_ai5_widget_pane_g3

0xad11,	// (0x00021ff2) cell_ai5_widget_pane_g4

0xad21,	// (0x00022002) cell_ai5_widget_pane_g5

0xad31,	// (0x00022012) cell_ai5_widget_pane_g6

0xad3d,	// (0x0002201e) cell_ai5_widget_pane_g7

0xad85,	// (0x00022066) cell_ai5_widget_pane_t1_ParamLimits

0xad85,	// (0x00022066) cell_ai5_widget_pane_t1

0xada2,	// (0x00022083) cell_ai5_widget_pane_t2_ParamLimits

0xada2,	// (0x00022083) cell_ai5_widget_pane_t2

0xadba,	// (0x0002209b) cell_ai5_widget_pane_t3_ParamLimits

0xadba,	// (0x0002209b) cell_ai5_widget_pane_t3

0xadd2,	// (0x000220b3) cell_ai5_widget_pane_t4_ParamLimits

0xadd2,	// (0x000220b3) cell_ai5_widget_pane_t4

0xadf8,	// (0x000220d9) cell_ai5_widget_pane_t5_ParamLimits

0xadf8,	// (0x000220d9) cell_ai5_widget_pane_t5

0x1dba,	// (0x0001909b) cell_ai5_widget_pane_t6_ParamLimits

0x1dba,	// (0x0001909b) cell_ai5_widget_pane_t6

0x1dcc,	// (0x000190ad) cell_ai5_widget_pane_t7_ParamLimits

0x1dcc,	// (0x000190ad) cell_ai5_widget_pane_t7

0xae17,	// (0x000220f8) cell_ai5_widget_pane_t8_ParamLimits

0xae17,	// (0x000220f8) cell_ai5_widget_pane_t8

0x0009,

0xfe35,	// (0x00027116) cell_ai5_widget_pane_t_ParamLimits

0xfe35,	// (0x00027116) cell_ai5_widget_pane_t

0xae76,	// (0x00022157) grid_ai5_widget_pane

0xba0c,	// (0x00022ced) highlight_cell_ai5_widget_pane_ParamLimits

0xba0c,	// (0x00022ced) highlight_cell_ai5_widget_pane

0xae82,	// (0x00022163) ai5_sk_left_pane

0xae8c,	// (0x0002216d) ai5_sk_middle_pane

0xae96,	// (0x00022177) ai5_sk_right_pane

0x1de5,	// (0x000190c6) bg_ai5_widget_pane_g1_ParamLimits

0x1de5,	// (0x000190c6) bg_ai5_widget_pane_g1

0x1df1,	// (0x000190d2) bg_ai5_widget_pane_g2_ParamLimits

0x1df1,	// (0x000190d2) bg_ai5_widget_pane_g2

0x1dfd,	// (0x000190de) bg_ai5_widget_pane_g3_ParamLimits

0x1dfd,	// (0x000190de) bg_ai5_widget_pane_g3

0x1e09,	// (0x000190ea) bg_ai5_widget_pane_g4_ParamLimits

0x1e09,	// (0x000190ea) bg_ai5_widget_pane_g4

0x1e15,	// (0x000190f6) bg_ai5_widget_pane_g5_ParamLimits

0x1e15,	// (0x000190f6) bg_ai5_widget_pane_g5

0x1e21,	// (0x00019102) bg_ai5_widget_pane_g6_ParamLimits

0x1e21,	// (0x00019102) bg_ai5_widget_pane_g6

0x1e2d,	// (0x0001910e) bg_ai5_widget_pane_g7_ParamLimits

0x1e2d,	// (0x0001910e) bg_ai5_widget_pane_g7

0x1e39,	// (0x0001911a) bg_ai5_widget_pane_g8_ParamLimits

0x1e39,	// (0x0001911a) bg_ai5_widget_pane_g8

0x1e45,	// (0x00019126) bg_ai5_widget_pane_g9_ParamLimits

0x1e45,	// (0x00019126) bg_ai5_widget_pane_g9

0x0008,

0xfe4a,	// (0x0002712b) bg_ai5_widget_pane_g_ParamLimits

0xfe4a,	// (0x0002712b) bg_ai5_widget_pane_g

0x1e75,	// (0x00019156) cell_shortcut_ai5_widget_pane_ParamLimits

0x1e75,	// (0x00019156) cell_shortcut_ai5_widget_pane

0x1e86,	// (0x00019167) bg_cell_shortcut_ai5_widget_pane

0xb75f,	// (0x00022a40) cell_grid_ai5_widget_pane_g1

0xc3b0,	// (0x00023691) highlight_cell_shortcut_ai5_widget_pane

0xc74c,	// (0x00023a2d) ai5_sk_left_pane_g1

0x1e8e,	// (0x0001916f) ai5_sk_left_pane_g2

0x1e96,	// (0x00019177) ai5_sk_left_pane_g3

0x1e9e,	// (0x0001917f) ai5_sk_left_pane_g4

0x0003,

0xfe5d,	// (0x0002713e) ai5_sk_left_pane_g

0x1ea6,	// (0x00019187) ai5_sk_left_pane_t1

0xc744,	// (0x00023a25) ai5_sk_right_pane_g1

0x1eb4,	// (0x00019195) ai5_sk_right_pane_g2

0x1ebc,	// (0x0001919d) ai5_sk_right_pane_g3

0x1ec4,	// (0x000191a5) ai5_sk_right_pane_g4

0x0003,

0xfe66,	// (0x00027147) ai5_sk_right_pane_g

0x1ecc,	// (0x000191ad) ai5_sk_right_pane_t1

0xc744,	// (0x00023a25) ai5_sk_middle_pane_g1

0xc74c,	// (0x00023a2d) ai5_sk_middle_pane_g2

0xc764,	// (0x00023a45) ai5_sk_middle_pane_g3

0x1ebc,	// (0x0001919d) ai5_sk_middle_pane_g4

0x1e96,	// (0x00019177) ai5_sk_middle_pane_g5

0x1eda,	// (0x000191bb) ai5_sk_middle_pane_g6

0xaea0,	// (0x00022181) ai5_sk_middle_pane_g7

0x0006,

0xfe6f,	// (0x00027150) ai5_sk_middle_pane_g

0x8de7,	// (0x000200c8) aid_touch_area_size_lc0_ParamLimits

0x8de7,	// (0x000200c8) aid_touch_area_size_lc0

0x51fb,	// (0x0001c4dc) cell_hwr_candidate_pane_t1_ParamLimits

0xc595,	// (0x00023876) aid_touch_navi_pane

0x9054,	// (0x00020335) status_dt_navi_pane_ParamLimits

0x9054,	// (0x00020335) status_dt_navi_pane

0x906c,	// (0x0002034d) status_dt_sta_pane_ParamLimits

0x906c,	// (0x0002034d) status_dt_sta_pane

0xaea8,	// (0x00022189) dt_sta_controll_pane

0xaeb5,	// (0x00022196) dt_sta_indi_pane

0xaec2,	// (0x000221a3) dt_sta_title_pane

0xb5a5,	// (0x00022886) bg_dt_sta_indi_pane_ParamLimits

0xb5a5,	// (0x00022886) bg_dt_sta_indi_pane

0xaed4,	// (0x000221b5) dt_sta_battery_pane

0xaedc,	// (0x000221bd) dt_sta_indi_pane_g1

0xaee5,	// (0x000221c6) dt_sta_indi_pane_g2

0xaeee,	// (0x000221cf) dt_sta_indi_pane_g3

0x0002,

0xfe7e,	// (0x0002715f) dt_sta_indi_pane_g

0xaef7,	// (0x000221d8) dt_sta_signal_pane

0xba0c,	// (0x00022ced) bg_dt_sta_title_pane_ParamLimits

0xba0c,	// (0x00022ced) bg_dt_sta_title_pane

0xaf00,	// (0x000221e1) dt_sta_title_pane_g1

0xaf08,	// (0x000221e9) dt_sta_title_pane_t1_ParamLimits

0xaf08,	// (0x000221e9) dt_sta_title_pane_t1

0xb382,	// (0x00022663) bg_dt_sta_control_pane

0xaf1d,	// (0x000221fe) dt_sta_controll_pane_g1

0xaf26,	// (0x00022207) bg_dt_sta_title_pane_g1

0xaf2f,	// (0x00022210) bg_dt_sta_title_pane_g2

0xaf38,	// (0x00022219) bg_dt_sta_title_pane_g3

0x0002,

0xfe85,	// (0x00027166) bg_dt_sta_title_pane_g

0xe4e9,	// (0x000257ca) bg_dt_sta_indi_pane_g1

0xaf41,	// (0x00022222) dt_sta_signal_pane_g1

0xaf49,	// (0x0002222a) dt_sta_signal_pane_g2

0x0001,

0xfe8c,	// (0x0002716d) dt_sta_signal_pane_g

0x1ee2,	// (0x000191c3) dt_sta_battery_pane_g1

0x1eeb,	// (0x000191cc) dt_sta_battery_pane_t1

0xe4e9,	// (0x000257ca) bg_dt_sta_control_pane_g1

0xbf80,	// (0x00023261) fep_china_uni_eep_pane

0xbf88,	// (0x00023269) fep_china_uni_entry_pane_ParamLimits

0xbf98,	// (0x00023279) popup_fep_china_uni_window_g1_ParamLimits

0xbfa8,	// (0x00023289) popup_fep_china_uni_window_g2_ParamLimits

0xbfa8,	// (0x00023289) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x000269fe) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x000269fe) popup_fep_china_uni_window_g

0x1efa,	// (0x000191db) fep_china_uni_eep_pane_g1

0x1f02,	// (0x000191e3) fep_china_uni_eep_pane_t1

0x1d27,	// (0x00019008) aid_touch_area_size_smil_player

0xc633,	// (0x00023914) lc0_clock_pane

0xc66c,	// (0x0002394d) status_pane_g5_ParamLimits

0xc66c,	// (0x0002394d) status_pane_g5

0x897b,	// (0x0001fc5c) popup_keymap_window

0xc64c,	// (0x0002392d) status_icon_pane

0xacf7,	// (0x00021fd8) cell_ai5_widget_pane_g3_ParamLimits

0xad11,	// (0x00021ff2) cell_ai5_widget_pane_g4_ParamLimits

0xad21,	// (0x00022002) cell_ai5_widget_pane_g5_ParamLimits

0xad49,	// (0x0002202a) cell_ai5_widget_pane_g8_ParamLimits

0xad49,	// (0x0002202a) cell_ai5_widget_pane_g8

0xad5d,	// (0x0002203e) cell_ai5_widget_pane_g9_ParamLimits

0xad5d,	// (0x0002203e) cell_ai5_widget_pane_g9

0xad71,	// (0x00022052) cell_ai5_widget_pane_g10_ParamLimits

0xad71,	// (0x00022052) cell_ai5_widget_pane_g10

0x1f11,	// (0x000191f2) status_icon_pane_g1

0xb382,	// (0x00022663) bg_popup_sub_pane_cp13

0x1f19,	// (0x000191fa) popup_keymap_window_t1

0x86e8,	// (0x0001f9c9) control_pane_g6_ParamLimits

0x86e8,	// (0x0001f9c9) control_pane_g6

0x86f5,	// (0x0001f9d6) control_pane_g7_ParamLimits

0x86f5,	// (0x0001f9d6) control_pane_g7

0x8702,	// (0x0001f9e3) control_pane_g8_ParamLimits

0x8702,	// (0x0001f9e3) control_pane_g8

0xaea8,	// (0x00022189) dt_sta_controll_pane_ParamLimits

0xaeb5,	// (0x00022196) dt_sta_indi_pane_ParamLimits

0xaec2,	// (0x000221a3) dt_sta_title_pane_ParamLimits

0xb95d,	// (0x00022c3e) aid_size_touch_scroll_bar_cale

0x3f80,	// (0x0001b261) popup_discreet_window_ParamLimits

0x3f80,	// (0x0001b261) popup_discreet_window

0x7e53,	// (0x0001f134) popup_sk_window

0xcd26,	// (0x00024007) bg_popup_sub_pane_cp28_ParamLimits

0xcd26,	// (0x00024007) bg_popup_sub_pane_cp28

0x1f27,	// (0x00019208) popup_discreet_window_g1_ParamLimits

0x1f27,	// (0x00019208) popup_discreet_window_g1

0x1f47,	// (0x00019228) popup_discreet_window_t1_ParamLimits

0x1f47,	// (0x00019228) popup_discreet_window_t1

0x1f65,	// (0x00019246) popup_discreet_window_t2_ParamLimits

0x1f65,	// (0x00019246) popup_discreet_window_t2

0x0002,

0xfe91,	// (0x00027172) popup_discreet_window_t_ParamLimits

0xfe91,	// (0x00027172) popup_discreet_window_t

0x6612,	// (0x0001d8f3) popup_sk_window_g1

0x661b,	// (0x0001d8fc) popup_sk_window_g2

0x0001,

0xfe98,	// (0x00027179) popup_sk_window_g

0x6624,	// (0x0001d905) popup_sk_window_t1

0x6632,	// (0x0001d913) popup_sk_window_t1_copy1

0xace3,	// (0x00021fc4) cell_ai5_widget_pane_g2_ParamLimits

0xae29,	// (0x0002210a) cell_ai5_widget_pane_t9_ParamLimits

0xae29,	// (0x0002210a) cell_ai5_widget_pane_t9

0xb382,	// (0x00022663) main_fep_fshwr2_pane

0xaf51,	// (0x00022232) aid_fshwr2_btn_pane

0xaf62,	// (0x00022243) aid_fshwr2_syb_pane

0xaf73,	// (0x00022254) aid_fshwr2_txt_pane

0xaf7f,	// (0x00022260) fshwr2_func_candi_pane

0xaf99,	// (0x0002227a) fshwr2_hwr_syb_pane

0xafae,	// (0x0002228f) fshwr2_icf_pane

0xb382,	// (0x00022663) fshwr2_icf_bg_pane

0xafd4,	// (0x000222b5) fshwr2_icf_pane_t1_ParamLimits

0xafd4,	// (0x000222b5) fshwr2_icf_pane_t1

0xbf1e,	// (0x000231ff) fshwr2_func_candi_pane_g1

0xafeb,	// (0x000222cc) fshwr2_func_candi_row_pane_ParamLimits

0xafeb,	// (0x000222cc) fshwr2_func_candi_row_pane

0xb00e,	// (0x000222ef) cell_fshwr2_syb_pane_ParamLimits

0xb00e,	// (0x000222ef) cell_fshwr2_syb_pane

0xe715,	// (0x000259f6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe715,	// (0x000259f6) fshwr2_hwr_syb_pane_g1

0xb382,	// (0x00022663) bg_popup_call_pane_cp01

0xb022,	// (0x00022303) fshwr2_func_candi_cell_pane_ParamLimits

0xb022,	// (0x00022303) fshwr2_func_candi_cell_pane

0xcb18,	// (0x00023df9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xcb18,	// (0x00023df9) fshwr2_func_candi_cell_bg_pane

0xb061,	// (0x00022342) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb061,	// (0x00022342) fshwr2_func_candi_cell_pane_g1

0xb098,	// (0x00022379) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb098,	// (0x00022379) fshwr2_func_candi_cell_pane_t1

0xb382,	// (0x00022663) bg_button_pane_cp08

0xc3b0,	// (0x00023691) cell_fshwr2_syb_bg_pane

0xb0b3,	// (0x00022394) cell_fshwr2_syb_bg_pane_g1

0xb0bb,	// (0x0002239c) cell_fshwr2_syb_bg_pane_t1

0xba0c,	// (0x00022ced) main_tmo_pane

0x9457,	// (0x00020738) uni_indicator_pane_g1_ParamLimits

0x946d,	// (0x0002074e) uni_indicator_pane_g2_ParamLimits

0x9483,	// (0x00020764) uni_indicator_pane_g3_ParamLimits

0xd6b2,	// (0x00024993) uni_indicator_pane_g4_ParamLimits

0xd6b2,	// (0x00024993) uni_indicator_pane_g4

0xd6c6,	// (0x000249a7) uni_indicator_pane_g5_ParamLimits

0xd6c6,	// (0x000249a7) uni_indicator_pane_g5

0xd6c6,	// (0x000249a7) uni_indicator_pane_g6_ParamLimits

0xd6c6,	// (0x000249a7) uni_indicator_pane_g6

0xf90e,	// (0x00026bef) uni_indicator_pane_g_ParamLimits

0x9dd3,	// (0x000210b4) popup_tmo_note_window_ParamLimits

0x9dd3,	// (0x000210b4) popup_tmo_note_window

0xba0c,	// (0x00022ced) fshwr2_bg_pane

0xb089,	// (0x0002236a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb089,	// (0x0002236a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9d,	// (0x0002717e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9d,	// (0x0002717e) fshwr2_func_candi_cell_pane_g

0xe4e9,	// (0x000257ca) bg_popup_window_pane_cp01

0x676b,	// (0x0001da4c) bg_popup_window_pane_g1_cp01

0x1fd0,	// (0x000192b1) bg_popup_window_pane_cp22_ParamLimits

0x1fd0,	// (0x000192b1) bg_popup_window_pane_cp22

0x1fde,	// (0x000192bf) listscroll_tmo_link_pane_ParamLimits

0x1fde,	// (0x000192bf) listscroll_tmo_link_pane

0x201e,	// (0x000192ff) popup_tmo_note_window_g1_ParamLimits

0x201e,	// (0x000192ff) popup_tmo_note_window_g1

0x202b,	// (0x0001930c) tmo_note_info_pane_ParamLimits

0x202b,	// (0x0001930c) tmo_note_info_pane

0xb0ca,	// (0x000223ab) list_tmo_note_info_pane_g1_ParamLimits

0xb0ca,	// (0x000223ab) list_tmo_note_info_pane_g1

0x2045,	// (0x00019326) list_tmo_note_info_pane_g2_ParamLimits

0x2045,	// (0x00019326) list_tmo_note_info_pane_g2

0x0001,

0xfea2,	// (0x00027183) list_tmo_note_info_pane_g_ParamLimits

0xfea2,	// (0x00027183) list_tmo_note_info_pane_g

0x2061,	// (0x00019342) list_tmo_note_info_text_pane_ParamLimits

0x2061,	// (0x00019342) list_tmo_note_info_text_pane

0x20a3,	// (0x00019384) list_tmo_link_pane

0x20b0,	// (0x00019391) scroll_pane_cp20

0x20bd,	// (0x0001939e) list_single_tmo_link_pane_ParamLimits

0x20bd,	// (0x0001939e) list_single_tmo_link_pane

0x20cd,	// (0x000193ae) list_single_tmo_link_pane_t1

0x20db,	// (0x000193bc) list_tmo_note_info_text_pane_t1_ParamLimits

0x20db,	// (0x000193bc) list_tmo_note_info_text_pane_t1

0xbac6,	// (0x00022da7) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbac6,	// (0x00022da7) aid_size_touch_scroll_bar_cp01

0x7994,	// (0x0001ec75) aid_size_touch_slider_marker

0x7e47,	// (0x0001f128) popup_settings_window_ParamLimits

0x7e47,	// (0x0001f128) popup_settings_window

0x359a,	// (0x0001a87b) popup_candi_list_indi_window

0xc595,	// (0x00023876) aid_touch_navi_pane_ParamLimits

0x5361,	// (0x0001c642) rs_clock_indi_pane

0x536a,	// (0x0001c64b) sctrl_sk_bottom_pane_ParamLimits

0x537b,	// (0x0001c65c) sctrl_sk_top_pane_ParamLimits

0x58ce,	// (0x0001cbaf) popup_fep_tooltip_window

0x1d75,	// (0x00019056) aid_size_cell_widget_grid_ParamLimits

0xaccf,	// (0x00021fb0) cell_ai5_widget_pane_g1_ParamLimits

0xaccf,	// (0x00021fb0) cell_ai5_widget_pane_g1

0xad31,	// (0x00022012) cell_ai5_widget_pane_g6_ParamLimits

0xad3d,	// (0x0002201e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe20,	// (0x00027101) cell_ai5_widget_pane_g_ParamLimits

0xfe20,	// (0x00027101) cell_ai5_widget_pane_g

0xae58,	// (0x00022139) cell_ai5_widget_pane_t10_ParamLimits

0xae58,	// (0x00022139) cell_ai5_widget_pane_t10

0xae76,	// (0x00022157) grid_ai5_widget_pane_ParamLimits

0x1e51,	// (0x00019132) cell_contacts_ai5_widget_pane_ParamLimits

0x1e51,	// (0x00019132) cell_contacts_ai5_widget_pane

0x1f7a,	// (0x0001925b) popup_discreet_window_t3_ParamLimits

0x1f7a,	// (0x0001925b) popup_discreet_window_t3

0xafc2,	// (0x000222a3) popup_fshwr2_char_preview_window_ParamLimits

0xafc2,	// (0x000222a3) popup_fshwr2_char_preview_window

0xb0e1,	// (0x000223c2) tmo_note_info_pane_t1

0xb0f6,	// (0x000223d7) tmo_note_info_pane_t2

0xb10b,	// (0x000223ec) tmo_note_info_pane_t3

0x207f,	// (0x00019360) tmo_note_info_pane_t4

0x2091,	// (0x00019372) tmo_note_info_pane_t5

0x0004,

0xfea7,	// (0x00027188) tmo_note_info_pane_t

0x20a3,	// (0x00019384) list_tmo_link_pane_ParamLimits

0x20b0,	// (0x00019391) scroll_pane_cp20_ParamLimits

0xb382,	// (0x00022663) bg_popup_fep_char_preview_window_cp01

0x20f4,	// (0x000193d5) popup_fshwr2_char_preview_window_t1

0x2102,	// (0x000193e3) popup_candi_list_indi_window_g1

0x210b,	// (0x000193ec) bg_cell_contacts_ai5_widget_pane

0x2117,	// (0x000193f8) cell_contacts_ai5_widget_pane_g1

0x212c,	// (0x0001940d) cell_contacts_ai5_widget_pane_g2

0x2138,	// (0x00019419) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb2,	// (0x00027193) cell_contacts_ai5_widget_pane_g

0x2144,	// (0x00019425) cell_contacts_ai5_widget_pane_t1

0xba0c,	// (0x00022ced) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb183,	// (0x00022464) settings_container_pane

0xc3b0,	// (0x00023691) listscroll_set_pane_copy1

0xde27,	// (0x00025108) scroll_pane_cp121_copy1

0x2156,	// (0x00019437) set_content_pane_copy1

0x215e,	// (0x0001943f) aid_height_set_list_copy1_ParamLimits

0x215e,	// (0x0001943f) aid_height_set_list_copy1

0xd85f,	// (0x00024b40) aid_size_parent_copy1_ParamLimits

0xd85f,	// (0x00024b40) aid_size_parent_copy1

0x216a,	// (0x0001944b) button_value_adjust_pane_cp6_copy1_ParamLimits

0x216a,	// (0x0001944b) button_value_adjust_pane_cp6_copy1

0xbb92,	// (0x00022e73) list_highlight_pane_cp2_copy1_ParamLimits

0xbb92,	// (0x00022e73) list_highlight_pane_cp2_copy1

0xb18f,	// (0x00022470) list_set_pane_copy1_ParamLimits

0xb18f,	// (0x00022470) list_set_pane_copy1

0xb120,	// (0x00022401) main_pane_set_t1_copy1_ParamLimits

0xb120,	// (0x00022401) main_pane_set_t1_copy1

0xb15a,	// (0x0002243b) main_pane_set_t2_copy1_ParamLimits

0xb15a,	// (0x0002243b) main_pane_set_t2_copy1

0x217e,	// (0x0001945f) main_pane_set_t3_copy1

0x218c,	// (0x0001946d) main_pane_set_t4_copy1

0xb177,	// (0x00022458) set_content_pane_g1_copy1_ParamLimits

0xb177,	// (0x00022458) set_content_pane_g1_copy1

0x219a,	// (0x0001947b) setting_code_pane_copy1

0x21a2,	// (0x00019483) setting_slider_graphic_pane_copy1

0x21a2,	// (0x00019483) setting_slider_pane_copy1

0x21a2,	// (0x00019483) setting_text_pane_copy1

0x21a2,	// (0x00019483) setting_volume_pane_copy1

0x21aa,	// (0x0001948b) settings_code_pane_cp2_copy1

0x21b2,	// (0x00019493) settings_code_pane_cp_copy1_ParamLimits

0x21b2,	// (0x00019493) settings_code_pane_cp_copy1

0xb21d,	// (0x000224fe) volume_set_pane_copy1

0xb225,	// (0x00022506) volume_set_pane_g10_copy1

0xb22d,	// (0x0002250e) volume_set_pane_g1_copy1

0xb235,	// (0x00022516) volume_set_pane_g2_copy1

0xb23d,	// (0x0002251e) volume_set_pane_g3_copy1

0xb245,	// (0x00022526) volume_set_pane_g4_copy1

0xb24d,	// (0x0002252e) volume_set_pane_g5_copy1

0xb255,	// (0x00022536) volume_set_pane_g6_copy1

0xb25d,	// (0x0002253e) volume_set_pane_g7_copy1

0xb265,	// (0x00022546) volume_set_pane_g8_copy1

0xb26d,	// (0x0002254e) volume_set_pane_g9_copy1

0xb472,	// (0x00022753) bg_set_opt_pane_cp_copy1_ParamLimits

0xb472,	// (0x00022753) bg_set_opt_pane_cp_copy1

0x40ba,	// (0x0001b39b) setting_slider_pane_t1_copy1_ParamLimits

0x40ba,	// (0x0001b39b) setting_slider_pane_t1_copy1

0x691f,	// (0x0001dc00) setting_slider_pane_t2_copy1_ParamLimits

0x691f,	// (0x0001dc00) setting_slider_pane_t2_copy1

0x6938,	// (0x0001dc19) setting_slider_pane_t3_copy1_ParamLimits

0x6938,	// (0x0001dc19) setting_slider_pane_t3_copy1

0x4100,	// (0x0001b3e1) slider_set_pane_copy1_ParamLimits

0x4100,	// (0x0001b3e1) slider_set_pane_copy1

0xba67,	// (0x00022d48) set_opt_bg_pane_g1_copy2

0xba6f,	// (0x00022d50) set_opt_bg_pane_g2_copy2

0x21c6,	// (0x000194a7) set_opt_bg_pane_g3_copy2

0xba7f,	// (0x00022d60) set_opt_bg_pane_g4_copy2

0xba87,	// (0x00022d68) set_opt_bg_pane_g5_copy2

0xba8f,	// (0x00022d70) set_opt_bg_pane_g6_copy2

0xb275,	// (0x00022556) set_opt_bg_pane_g7_copy2

0x21ce,	// (0x000194af) set_opt_bg_pane_g8_copy2

0x21d6,	// (0x000194b7) set_opt_bg_pane_g9_copy2

0x4df3,	// (0x0001c0d4) aid_size_touch_slider_mark_copy1_ParamLimits

0x4df3,	// (0x0001c0d4) aid_size_touch_slider_mark_copy1

0xd8dc,	// (0x00024bbd) slider_set_pane_g1_copy1

0xd8e5,	// (0x00024bc6) slider_set_pane_g2_copy1

0x4e13,	// (0x0001c0f4) slider_set_pane_g3_copy1_ParamLimits

0x4e13,	// (0x0001c0f4) slider_set_pane_g3_copy1

0x4e27,	// (0x0001c108) slider_set_pane_g4_copy1_ParamLimits

0x4e27,	// (0x0001c108) slider_set_pane_g4_copy1

0x4e3f,	// (0x0001c120) slider_set_pane_g5_copy1_ParamLimits

0x4e3f,	// (0x0001c120) slider_set_pane_g5_copy1

0x4e13,	// (0x0001c0f4) slider_set_pane_g6_copy1_ParamLimits

0x4e13,	// (0x0001c0f4) slider_set_pane_g6_copy1

0xb27d,	// (0x0002255e) slider_set_pane_g7_copy1_ParamLimits

0xb27d,	// (0x0002255e) slider_set_pane_g7_copy1

0xb40e,	// (0x000226ef) bg_set_opt_pane_cp2_copy1

0xb480,	// (0x00022761) setting_slider_graphic_pane_g1_copy1

0xb293,	// (0x00022574) setting_slider_graphic_pane_t1_copy1

0xb2a2,	// (0x00022583) setting_slider_graphic_pane_t2_copy1

0xb2b1,	// (0x00022592) slider_set_pane_cp_copy1

0x21e6,	// (0x000194c7) input_focus_pane_cp1_copy1

0x21ef,	// (0x000194d0) list_set_text_pane_copy1

0x21f7,	// (0x000194d8) setting_text_pane_g1_copy1

0x3e16,	// (0x0001b0f7) set_text_pane_t1_copy1

0x21e6,	// (0x000194c7) input_focus_pane_cp2_copy1

0x21f7,	// (0x000194d8) setting_code_pane_g1_copy1

0x2200,	// (0x000194e1) setting_code_pane_t1_copy1

0x856f,	// (0x0001f850) list_set_graphic_pane_copy1

0xb40e,	// (0x000226ef) bg_set_opt_pane_cp4_copy1

0x220e,	// (0x000194ef) list_set_graphic_pane_g1_copy1_ParamLimits

0x220e,	// (0x000194ef) list_set_graphic_pane_g1_copy1

0x221a,	// (0x000194fb) list_set_graphic_pane_g2_copy1

0xc12b,	// (0x0002340c) list_set_graphic_pane_t1_copy1_ParamLimits

0xc12b,	// (0x0002340c) list_set_graphic_pane_t1_copy1

0xe4e9,	// (0x000257ca) rs_clock_indi_pane_g1

0x2222,	// (0x00019503) rs_clock_indi_pane_t1

0x2230,	// (0x00019511) rs_indi_pane

0x2238,	// (0x00019519) rs_indi_pane_g1

0x2241,	// (0x00019522) rs_indi_pane_g2

0x2102,	// (0x000193e3) rs_indi_pane_g3

0x0002,

0xfeb9,	// (0x0002719a) rs_indi_pane_g

0xc3b0,	// (0x00023691) bg_popup_preview_window_pane_cp03

0x224a,	// (0x0001952b) popup_fep_tooltip_window_t1

0xee14,	// (0x000260f5) popup_note2_window_g2_ParamLimits

0xee14,	// (0x000260f5) popup_note2_window_g2

0x0001,

0xfc59,	// (0x00026f3a) popup_note2_window_g_ParamLimits

0xfc59,	// (0x00026f3a) popup_note2_window_g

0xf28f,	// (0x00026570) bg_popup_sub_pane_cp11_ParamLimits

0xf29c,	// (0x0002657d) cell_ai3_links_pane_g1_ParamLimits

0xf2b3,	// (0x00026594) cell_ai3_links_pane_t1

0x3e16,	// (0x0001b0f7) set_text_pane_t1_copy1_ParamLimits

0xc2d7,	// (0x000235b8) cell_graphic_popup_pane_cp2_ParamLimits

0xc2d7,	// (0x000235b8) cell_graphic_popup_pane_cp2

0x2258,	// (0x00019539) cell_graphic_popup_pane_g1_cp2

0xb80c,	// (0x00022aed) cell_graphic_popup_pane_g2_cp2

0x2260,	// (0x00019541) cell_graphic_popup_pane_g3_cp2

0x2268,	// (0x00019549) cell_graphic_popup_pane_t2_cp2

0xb81d,	// (0x00022afe) grid_highlight_pane_cp3_cp2

0xbd57,	// (0x00023038) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xba0c,	// (0x00022ced) main_tmo_pane_ParamLimits

0x9dcb,	// (0x000210ac) popup_tmo_big_image_note_window

0x1db2,	// (0x00019093) cell_ai5_widget_list_pane

0xacc6,	// (0x00021fa7) cell_ai5_widget_lrg_icon_pane

0xb0e1,	// (0x000223c2) tmo_note_info_pane_t1_ParamLimits

0xb0f6,	// (0x000223d7) tmo_note_info_pane_t2_ParamLimits

0xb10b,	// (0x000223ec) tmo_note_info_pane_t3_ParamLimits

0x207f,	// (0x00019360) tmo_note_info_pane_t4_ParamLimits

0x2091,	// (0x00019372) tmo_note_info_pane_t5_ParamLimits

0xfea7,	// (0x00027188) tmo_note_info_pane_t_ParamLimits

0xb183,	// (0x00022464) settings_container_pane_ParamLimits

0x21de,	// (0x000194bf) indicator_popup_pane_cp5

0x21de,	// (0x000194bf) indicator_popup_pane_cp6

0x856f,	// (0x0001f850) list_set_graphic_pane_copy1_ParamLimits

0xb382,	// (0x00022663) bg_popup_window_pane_cp23

0x2276,	// (0x00019557) popup_tmo_big_image_note_window_g1

0x227f,	// (0x00019560) popup_tmo_big_image_note_window_t1

0x228d,	// (0x0001956e) popup_tmo_big_image_note_window_t2

0x229b,	// (0x0001957c) popup_tmo_big_image_note_window_t3

0x0002,

0xfec0,	// (0x000271a1) popup_tmo_big_image_note_window_t

0xe4e9,	// (0x000257ca) cell_ai5_widget_lrg_icon_pane_g1

0x22a9,	// (0x0001958a) cell_ai5_widget_lrg_icon_pane_t1

0xb2b9,	// (0x0002259a) cell_ai5_widget_list_row_pane_ParamLimits

0xb2b9,	// (0x0002259a) cell_ai5_widget_list_row_pane

0xb2d0,	// (0x000225b1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb2d0,	// (0x000225b1) cell_ai5_widget_list_row_pane_g1

0xb2dd,	// (0x000225be) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb2dd,	// (0x000225be) cell_ai5_widget_list_row_pane_t1

0xb30e,	// (0x000225ef) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb30e,	// (0x000225ef) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec7,	// (0x000271a8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec7,	// (0x000271a8) cell_ai5_widget_list_row_pane_t

0xb382,	// (0x00022663) main_fep_vtchi_ss_pane

0x22d7,	// (0x000195b8) popup_fep_char_pre_window

0x22df,	// (0x000195c0) popup_fep_ituss_window

0xb336,	// (0x00022617) popup_fep_vkbss_window

0x2312,	// (0x000195f3) grid_vkbss_keypad_pane_ParamLimits

0x2312,	// (0x000195f3) grid_vkbss_keypad_pane

0x2322,	// (0x00019603) ituss_keypad_pane

0x6a3d,	// (0x0001dd1e) aid_vkbss_key_offset_ParamLimits

0x6a3d,	// (0x0001dd1e) aid_vkbss_key_offset

0x6a49,	// (0x0001dd2a) cell_vkbss_key_pane_ParamLimits

0x6a49,	// (0x0001dd2a) cell_vkbss_key_pane

0xc7a2,	// (0x00023a83) bg_cell_vkbss_key_g1_ParamLimits

0xc7a2,	// (0x00023a83) bg_cell_vkbss_key_g1

0x2331,	// (0x00019612) cell_vkbss_key_3p_pane_ParamLimits

0x2331,	// (0x00019612) cell_vkbss_key_3p_pane

0x234b,	// (0x0001962c) cell_vkbss_key_g1_ParamLimits

0x234b,	// (0x0001962c) cell_vkbss_key_g1

0x2365,	// (0x00019646) cell_vkbss_key_t1_ParamLimits

0x2365,	// (0x00019646) cell_vkbss_key_t1

0x6a5f,	// (0x0001dd40) cell_ituss_key_pane_ParamLimits

0x6a5f,	// (0x0001dd40) cell_ituss_key_pane

0x2390,	// (0x00019671) bg_cell_ituss_key_g1_ParamLimits

0x2390,	// (0x00019671) bg_cell_ituss_key_g1

0x239c,	// (0x0001967d) cell_ituss_key_pane_g1_ParamLimits

0x239c,	// (0x0001967d) cell_ituss_key_pane_g1

0x6a70,	// (0x0001dd51) cell_ituss_key_pane_g2_ParamLimits

0x6a70,	// (0x0001dd51) cell_ituss_key_pane_g2

0x0002,

0xfece,	// (0x000271af) cell_ituss_key_pane_g_ParamLimits

0xfece,	// (0x000271af) cell_ituss_key_pane_g

0x6a98,	// (0x0001dd79) cell_ituss_key_t1_ParamLimits

0x6a98,	// (0x0001dd79) cell_ituss_key_t1

0x6ad2,	// (0x0001ddb3) cell_ituss_key_t2_ParamLimits

0x6ad2,	// (0x0001ddb3) cell_ituss_key_t2

0x6b03,	// (0x0001dde4) cell_ituss_key_t3_ParamLimits

0x6b03,	// (0x0001dde4) cell_ituss_key_t3

0x6ad2,	// (0x0001ddb3) cell_ituss_key_t4_ParamLimits

0x6ad2,	// (0x0001ddb3) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x000271b6) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x000271b6) cell_ituss_key_t

0x23d2,	// (0x000196b3) cell_vkbss_key_3p_pane_g1

0x23ca,	// (0x000196ab) cell_vkbss_key_3p_pane_g2

0x23c2,	// (0x000196a3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x000271c1) cell_vkbss_key_3p_pane_g

0xc3b0,	// (0x00023691) bg_popup_fep_char_preview_window_cp02

0x23da,	// (0x000196bb) popup_fep_char_pre_window_t1

0xacb3,	// (0x00021f94) main_ai5_sk_pane

0x210b,	// (0x000193ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x2117,	// (0x000193f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x212c,	// (0x0001940d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x2138,	// (0x00019419) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb2,	// (0x00027193) cell_contacts_ai5_widget_pane_g_ParamLimits

0x2144,	// (0x00019425) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xba0c,	// (0x00022ced) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb343,	// (0x00022624) main_ai5_sk_pane_g1

0xcb70,	// (0x00023e51) popup_query_code_window_g1

0x22f1,	// (0x000195d2) popup_fep_vkb_icf_pane

0x22fc,	// (0x000195dd) popup_fep_vtchi_icf_pane

0x23e8,	// (0x000196c9) bg_icf_pane

0x23f4,	// (0x000196d5) list_vkb_icf_pane

0x2400,	// (0x000196e1) bg_icf_pane_cp01

0x2413,	// (0x000196f4) vtchi_icf_list_pane

0x2423,	// (0x00019704) list_vkb_icf_pane_t1_ParamLimits

0x2423,	// (0x00019704) list_vkb_icf_pane_t1

0x2438,	// (0x00019719) vtchi_icf_list_pane_t1_ParamLimits

0x2438,	// (0x00019719) vtchi_icf_list_pane_t1

0x22df,	// (0x000195c0) popup_fep_ituss_window_ParamLimits

0x22fc,	// (0x000195dd) popup_fep_vtchi_icf_pane_ParamLimits

0x2322,	// (0x00019603) ituss_keypad_pane_ParamLimits

0x6a33,	// (0x0001dd14) ituss_sks_pane

0x23e8,	// (0x000196c9) bg_icf_pane_ParamLimits

0x22b7,	// (0x00019598) icf_edit_indi_pane_ParamLimits

0x22b7,	// (0x00019598) icf_edit_indi_pane

0x23f4,	// (0x000196d5) list_vkb_icf_pane_ParamLimits

0x2400,	// (0x000196e1) bg_icf_pane_cp01_ParamLimits

0x22ca,	// (0x000195ab) icf_edit_indi_pane_cp01_ParamLimits

0x22ca,	// (0x000195ab) icf_edit_indi_pane_cp01

0x241b,	// (0x000196fc) vtchi_query_pane

0x1d00,	// (0x00018fe1) icf_edit_indi_pane_g1_ParamLimits

0x1d00,	// (0x00018fe1) icf_edit_indi_pane_g1

0xb34c,	// (0x0002262d) icf_edit_indi_pane_g2_ParamLimits

0xb34c,	// (0x0002262d) icf_edit_indi_pane_g2

0x0001,

0xfef8,	// (0x000271d9) icf_edit_indi_pane_g_ParamLimits

0xfef8,	// (0x000271d9) icf_edit_indi_pane_g

0xb35c,	// (0x0002263d) icf_edit_indi_pane_t1

0x244f,	// (0x00019730) bg_input_focus_pane_cp042

0x2458,	// (0x00019739) vtchi_button_pane

0x2461,	// (0x00019742) vtchi_query_pane_t1

0x246f,	// (0x00019750) vtchi_query_pane_t2

0x247d,	// (0x0001975e) vtchi_query_pane_t3

0x0002,

0xfee7,	// (0x000271c8) vtchi_query_pane_t

0xb382,	// (0x00022663) bg_button_pane_cp13

0x248b,	// (0x0001976c) vtchi_button_pane_g1

0x6b4f,	// (0x0001de30) ituss_sks_pane_g1

0x6b58,	// (0x0001de39) ituss_sks_pane_g2

0x0001,

0xfeee,	// (0x000271cf) ituss_sks_pane_g

0x24a1,	// (0x00019782) ituss_sks_pane_t1

0x2493,	// (0x00019774) ituss_sks_pane_t2

0x0001,

0xfef3,	// (0x000271d4) ituss_sks_pane_t

0xe100,	// (0x000253e1) indicator_nsta_pane_cp_g1

0xe109,	// (0x000253ea) indicator_nsta_pane_cp_g2

0xe111,	// (0x000253f2) indicator_nsta_pane_cp_g3

0xe119,	// (0x000253fa) indicator_nsta_pane_cp_g4

0xe121,	// (0x00025402) indicator_nsta_pane_cp_g5

0xe129,	// (0x0002540a) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x00026d84) indicator_nsta_pane_cp_g

0xaa9e,	// (0x00021d7f) cell_graphic2_pane_t2_ParamLimits

0xaa9e,	// (0x00021d7f) cell_graphic2_pane_t2

0x0001,

0xfda9,	// (0x0002708a) cell_graphic2_pane_t_ParamLimits

0xfda9,	// (0x0002708a) cell_graphic2_pane_t

0xaad6,	// (0x00021db7) cell_graphic2_control_pane_t1

0x850d,	// (0x0001f7ee) signal_pane_g3_ParamLimits

0x850d,	// (0x0001f7ee) signal_pane_g3

0x8521,	// (0x0001f802) signal_pane_g4_ParamLimits

0x8521,	// (0x0001f802) signal_pane_g4

0xb320,	// (0x00022601) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xb320,	// (0x00022601) cell_ai5_widget_list_row_pane_t3

0x23b0,	// (0x00019691) cell_ituss_key_pane_t1_ParamLimits

0x23b0,	// (0x00019691) cell_ituss_key_pane_t1

0xc846,	// (0x00023b27) form_field_data_wide_pane_vc_t2_ParamLimits

0xc846,	// (0x00023b27) form_field_data_wide_pane_vc_t2

0xc858,	// (0x00023b39) form_field_data_wide_pane_vc_t3_ParamLimits

0xc858,	// (0x00023b39) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f6,	// (0x00026ad7) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f6,	// (0x00026ad7) form_field_data_wide_pane_vc_t

0xde6c,	// (0x0002514d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xde6c,	// (0x0002514d) form_field_slider_wide_pane_vc_t3

0xdf2a,	// (0x0002520b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdf2a,	// (0x0002520b) form_field_popup_wide_pane_vc_t2

0xdf3f,	// (0x00025220) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdf3f,	// (0x00025220) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x00026d73) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x00026d73) form_field_popup_wide_pane_vc_t

0xaf51,	// (0x00022232) aid_fshwr2_btn_pane_ParamLimits

0xaf62,	// (0x00022243) aid_fshwr2_syb_pane_ParamLimits

0xaf73,	// (0x00022254) aid_fshwr2_txt_pane_ParamLimits

0xba0c,	// (0x00022ced) fshwr2_bg_pane_ParamLimits

0xaf7f,	// (0x00022260) fshwr2_func_candi_pane_ParamLimits

0xaf99,	// (0x0002227a) fshwr2_hwr_syb_pane_ParamLimits

0xafae,	// (0x0002228f) fshwr2_icf_pane_ParamLimits

0x3a0e,	// (0x0001acef) list_double_graphic_pane_vc_g4_ParamLimits

0x3a0e,	// (0x0001acef) list_double_graphic_pane_vc_g4

0x6a8c,	// (0x0001dd6d) cell_ituss_key_pane_g3_ParamLimits

0x6a8c,	// (0x0001dd6d) cell_ituss_key_pane_g3

0x6b34,	// (0x0001de15) cell_ituss_key_t5_ParamLimits

0x6b34,	// (0x0001de15) cell_ituss_key_t5

0xb336,	// (0x00022617) popup_fep_vkbss_window_ParamLimits

0xacbd,	// (0x00021f9e) aid_cell_ai5_quarter

0xb35c,	// (0x0002263d) icf_edit_indi_pane_t1_ParamLimits

0xb64d,	// (0x0002292e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xb64d,	// (0x0002292e) aid_tch_indicator_popup_pane_cp2

0xb660,	// (0x00022941) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xb660,	// (0x00022941) aid_tch_query_popup_data_pane_cp2

0xcb18,	// (0x00023df9) aid_tch_query_popup_pane_ParamLimits

0xcb18,	// (0x00023df9) aid_tch_query_popup_pane

0xcb18,	// (0x00023df9) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xcb18,	// (0x00023df9) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
