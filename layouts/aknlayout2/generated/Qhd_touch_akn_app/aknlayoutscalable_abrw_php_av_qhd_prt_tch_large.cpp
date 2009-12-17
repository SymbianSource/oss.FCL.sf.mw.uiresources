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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003dfd7 };

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
0xafce,	// (0x00048fa5) Screen

0xafda,	// (0x00048fb1) application_window_ParamLimits

0xafda,	// (0x00048fb1) application_window

0x3b71,	// (0x00041b48) screen_g1

0x8ec7,	// (0x00046e9e) area_bottom_pane_ParamLimits

0x8ec7,	// (0x00046e9e) area_bottom_pane

0x8f87,	// (0x00046f5e) area_top_pane_ParamLimits

0x8f87,	// (0x00046f5e) area_top_pane

0x9025,	// (0x00046ffc) main_pane_ParamLimits

0x9025,	// (0x00046ffc) main_pane

0x3b7b,	// (0x00041b52) misc_graphics

0xc3f5,	// (0x0004a3cc) battery_pane_ParamLimits

0xc3f5,	// (0x0004a3cc) battery_pane

0x614c,	// (0x00044123) bg_status_flat_pane_g8

0x6154,	// (0x0004412b) bg_status_flat_pane_g9

0x587d,	// (0x00043854) context_pane_ParamLimits

0x587d,	// (0x00043854) context_pane

0xc529,	// (0x0004a500) navi_pane_ParamLimits

0xc529,	// (0x0004a500) navi_pane

0xc595,	// (0x0004a56c) signal_pane_ParamLimits

0xc595,	// (0x0004a56c) signal_pane

0x0008,

0xf8b7,	// (0x0004d88e) bg_status_flat_pane_g

0xc5fa,	// (0x0004a5d1) status_pane_g1_ParamLimits

0xc5fa,	// (0x0004a5d1) status_pane_g1

0xc60e,	// (0x0004a5e5) status_pane_g2_ParamLimits

0xc60e,	// (0x0004a5e5) status_pane_g2

0x58e2,	// (0x000438b9) status_pane_g3_ParamLimits

0x58e2,	// (0x000438b9) status_pane_g3

0x0004,

0xf7e5,	// (0x0004d7bc) status_pane_g_ParamLimits

0xf7e5,	// (0x0004d7bc) status_pane_g

0xc61a,	// (0x0004a5f1) title_pane_ParamLimits

0xc61a,	// (0x0004a5f1) title_pane

0xc657,	// (0x0004a62e) uni_indicator_pane_ParamLimits

0xc657,	// (0x0004a62e) uni_indicator_pane

0x56ac,	// (0x00043683) bg_list_pane_ParamLimits

0x56ac,	// (0x00043683) bg_list_pane

0xb87c,	// (0x00049853) find_pane

0xb884,	// (0x0004985b) listscroll_app_pane_ParamLimits

0xb884,	// (0x0004985b) listscroll_app_pane

0x56cc,	// (0x000436a3) listscroll_form_pane

0xb890,	// (0x00049867) listscroll_gen_pane_ParamLimits

0xb890,	// (0x00049867) listscroll_gen_pane

0x56cc,	// (0x000436a3) listscroll_set_pane

0xb555,	// (0x0004952c) main_idle_act_pane

0x5492,	// (0x00043469) main_idle_trad_pane

0x5492,	// (0x00043469) main_list_empty_pane

0x4bc5,	// (0x00042b9c) main_midp_pane

0x56e6,	// (0x000436bd) main_pane_g1_ParamLimits

0x56e6,	// (0x000436bd) main_pane_g1

0xb8a4,	// (0x0004987b) popup_ai_message_window_ParamLimits

0xb8a4,	// (0x0004987b) popup_ai_message_window

0xb92a,	// (0x00049901) popup_fep_china_uni_window_ParamLimits

0xb92a,	// (0x00049901) popup_fep_china_uni_window

0x5718,	// (0x000436ef) popup_fep_japan_candidate_window_ParamLimits

0x5718,	// (0x000436ef) popup_fep_japan_candidate_window

0x5738,	// (0x0004370f) popup_fep_japan_predictive_window_ParamLimits

0x5738,	// (0x0004370f) popup_fep_japan_predictive_window

0xb986,	// (0x0004995d) popup_find_window

0xb993,	// (0x0004996a) popup_grid_graphic_window_ParamLimits

0xb993,	// (0x0004996a) popup_grid_graphic_window

0x5768,	// (0x0004373f) popup_large_graphic_colour_window

0xb9bb,	// (0x00049992) popup_menu_window_ParamLimits

0xb9bb,	// (0x00049992) popup_menu_window

0xbb73,	// (0x00049b4a) popup_note_image_window

0xbb5f,	// (0x00049b36) popup_note_wait_window_ParamLimits

0xbb5f,	// (0x00049b36) popup_note_wait_window

0xbb5f,	// (0x00049b36) popup_note_window_ParamLimits

0xbb5f,	// (0x00049b36) popup_note_window

0xbbc9,	// (0x00049ba0) popup_query_code_window_ParamLimits

0xbbc9,	// (0x00049ba0) popup_query_code_window

0x578e,	// (0x00043765) popup_query_data_code_window_ParamLimits

0x578e,	// (0x00043765) popup_query_data_code_window

0xbbdd,	// (0x00049bb4) popup_query_data_window_ParamLimits

0xbbdd,	// (0x00049bb4) popup_query_data_window

0xbbf9,	// (0x00049bd0) popup_query_sat_info_window_ParamLimits

0xbbf9,	// (0x00049bd0) popup_query_sat_info_window

0xbc32,	// (0x00049c09) popup_snote_single_graphic_window_ParamLimits

0xbc32,	// (0x00049c09) popup_snote_single_graphic_window

0xbc32,	// (0x00049c09) popup_snote_single_text_window_ParamLimits

0xbc32,	// (0x00049c09) popup_snote_single_text_window

0x57ab,	// (0x00043782) popup_sub_window_general

0x57f3,	// (0x000437ca) popup_window_general_ParamLimits

0x57f3,	// (0x000437ca) popup_window_general

0x5808,	// (0x000437df) power_save_pane

0x9d30,	// (0x00047d07) control_pane_g1_ParamLimits

0x9d30,	// (0x00047d07) control_pane_g1

0x9d59,	// (0x00047d30) control_pane_g2_ParamLimits

0x9d59,	// (0x00047d30) control_pane_g2

0x568e,	// (0x00043665) control_pane_g3_ParamLimits

0x568e,	// (0x00043665) control_pane_g3

0x0007,

0xf7cd,	// (0x0004d7a4) control_pane_g_ParamLimits

0xf7cd,	// (0x0004d7a4) control_pane_g

0x9d97,	// (0x00047d6e) control_pane_t1_ParamLimits

0x9d97,	// (0x00047d6e) control_pane_t1

0x9de9,	// (0x00047dc0) control_pane_t2_ParamLimits

0x9de9,	// (0x00047dc0) control_pane_t2

0x0002,

0xf7de,	// (0x0004d7b5) control_pane_t_ParamLimits

0xf7de,	// (0x0004d7b5) control_pane_t

0x55af,	// (0x00043586) navi_navi_volume_pane_cp1

0x55b8,	// (0x0004358f) status_small_icon_pane

0x55c0,	// (0x00043597) status_small_pane_g1_ParamLimits

0x55c0,	// (0x00043597) status_small_pane_g1

0x55f4,	// (0x000435cb) status_small_pane_g2_ParamLimits

0x55f4,	// (0x000435cb) status_small_pane_g2

0x5600,	// (0x000435d7) status_small_pane_g3_ParamLimits

0x5600,	// (0x000435d7) status_small_pane_g3

0x560c,	// (0x000435e3) status_small_pane_g4_ParamLimits

0x560c,	// (0x000435e3) status_small_pane_g4

0x5618,	// (0x000435ef) status_small_pane_g5_ParamLimits

0x5618,	// (0x000435ef) status_small_pane_g5

0x5627,	// (0x000435fe) status_small_pane_g6_ParamLimits

0x5627,	// (0x000435fe) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0004d793) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0004d793) status_small_pane_g

0x5657,	// (0x0004362e) status_small_pane_t1

0x567a,	// (0x00043651) status_small_wait_pane_ParamLimits

0x567a,	// (0x00043651) status_small_wait_pane

0xb621,	// (0x000495f8) aid_levels_signal_ParamLimits

0xb621,	// (0x000495f8) aid_levels_signal

0xb633,	// (0x0004960a) signal_pane_g1_ParamLimits

0xb633,	// (0x0004960a) signal_pane_g1

0xb648,	// (0x0004961f) signal_pane_g2_ParamLimits

0xb648,	// (0x0004961f) signal_pane_g2

0x0001,

0xf751,	// (0x0004d728) signal_pane_g_ParamLimits

0xf751,	// (0x0004d728) signal_pane_g

0x4ff8,	// (0x00042fcf) context_pane_g1

0xafea,	// (0x00048fc1) title_pane_g1

0xb014,	// (0x00048feb) title_pane_t1

0x3b91,	// (0x00041b68) title_pane_t2

0x3bb7,	// (0x00041b8e) title_pane_t3

0x0002,

0xf59b,	// (0x0004d572) title_pane_t

0xc66f,	// (0x0004a646) aid_levels_battery_ParamLimits

0xc66f,	// (0x0004a646) aid_levels_battery

0xc683,	// (0x0004a65a) battery_pane_g1_ParamLimits

0xc683,	// (0x0004a65a) battery_pane_g1

0xc699,	// (0x0004a670) battery_pane_g2_ParamLimits

0xc699,	// (0x0004a670) battery_pane_g2

0x0001,

0xf7f0,	// (0x0004d7c7) battery_pane_g_ParamLimits

0xf7f0,	// (0x0004d7c7) battery_pane_g

0xca32,	// (0x0004aa09) uni_indicator_pane_g1

0xca47,	// (0x0004aa1e) uni_indicator_pane_g2

0xca5d,	// (0x0004aa34) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0004d936) uni_indicator_pane_g

0x5304,	// (0x000432db) navi_icon_pane_ParamLimits

0x5304,	// (0x000432db) navi_icon_pane

0x524d,	// (0x00043224) navi_midp_pane

0x5320,	// (0x000432f7) navi_navi_pane

0x532a,	// (0x00043301) navi_text_pane_ParamLimits

0x532a,	// (0x00043301) navi_text_pane

0x3b71,	// (0x00041b48) status_small_wait_pane_g1

0x4733,	// (0x0004270a) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0004d931) status_small_wait_pane_g

0x66fb,	// (0x000446d2) navi_navi_icon_text_pane

0x6715,	// (0x000446ec) navi_navi_pane_g1_ParamLimits

0x6715,	// (0x000446ec) navi_navi_pane_g1

0x6703,	// (0x000446da) navi_navi_pane_g2_ParamLimits

0x6703,	// (0x000446da) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0004d8ff) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0004d8ff) navi_navi_pane_g

0x6727,	// (0x000446fe) navi_navi_tabs_pane

0x6730,	// (0x00044707) navi_navi_text_pane

0x66fb,	// (0x000446d2) navi_navi_volume_pane

0xc9f6,	// (0x0004a9cd) navi_text_pane_t1

0xc9e7,	// (0x0004a9be) navi_icon_pane_g1

0x661e,	// (0x000445f5) navi_navi_text_pane_t1

0xa113,	// (0x000480ea) navi_navi_volume_pane_g1

0xa11b,	// (0x000480f2) volume_small_pane

0xc959,	// (0x0004a930) navi_navi_icon_text_pane_g1

0xc961,	// (0x0004a938) navi_navi_icon_text_pane_t1

0x5320,	// (0x000432f7) navi_tabs_2_long_pane

0x5320,	// (0x000432f7) navi_tabs_2_pane

0x5320,	// (0x000432f7) navi_tabs_3_long_pane

0x5320,	// (0x000432f7) navi_tabs_3_pane

0x5320,	// (0x000432f7) navi_tabs_4_pane

0xa0f3,	// (0x000480ca) tabs_2_active_pane_ParamLimits

0xa0f3,	// (0x000480ca) tabs_2_active_pane

0xa103,	// (0x000480da) tabs_2_passive_pane_ParamLimits

0xa103,	// (0x000480da) tabs_2_passive_pane

0xa0c1,	// (0x00048098) tabs_3_active_pane_ParamLimits

0xa0c1,	// (0x00048098) tabs_3_active_pane

0xa0d1,	// (0x000480a8) tabs_3_passive_pane_ParamLimits

0xa0d1,	// (0x000480a8) tabs_3_passive_pane

0xa0e2,	// (0x000480b9) tabs_3_passive_pane_cp_ParamLimits

0xa0e2,	// (0x000480b9) tabs_3_passive_pane_cp

0xa07d,	// (0x00048054) tabs_4_active_pane_ParamLimits

0xa07d,	// (0x00048054) tabs_4_active_pane

0xa08e,	// (0x00048065) tabs_4_passive_pane_ParamLimits

0xa08e,	// (0x00048065) tabs_4_passive_pane

0xa09f,	// (0x00048076) tabs_4_passive_pane_cp_ParamLimits

0xa09f,	// (0x00048076) tabs_4_passive_pane_cp

0xa0b0,	// (0x00048087) tabs_4_passive_pane_cp2_ParamLimits

0xa0b0,	// (0x00048087) tabs_4_passive_pane_cp2

0xa059,	// (0x00048030) tabs_2_long_active_pane_ParamLimits

0xa059,	// (0x00048030) tabs_2_long_active_pane

0xa06b,	// (0x00048042) tabs_2_long_passive_pane_ParamLimits

0xa06b,	// (0x00048042) tabs_2_long_passive_pane

0xa01a,	// (0x00047ff1) tabs_3_long_active_pane_ParamLimits

0xa01a,	// (0x00047ff1) tabs_3_long_active_pane

0xa02d,	// (0x00048004) tabs_3_long_passive_pane_ParamLimits

0xa02d,	// (0x00048004) tabs_3_long_passive_pane

0xa046,	// (0x0004801d) tabs_3_long_passive_pane_cp_ParamLimits

0xa046,	// (0x0004801d) tabs_3_long_passive_pane_cp

0x9fc0,	// (0x00047f97) volume_small_pane_g1

0x9fc9,	// (0x00047fa0) volume_small_pane_g2

0x9fd2,	// (0x00047fa9) volume_small_pane_g3

0x9fdb,	// (0x00047fb2) volume_small_pane_g4

0x9fe4,	// (0x00047fbb) volume_small_pane_g5

0x9fed,	// (0x00047fc4) volume_small_pane_g6

0x9ff6,	// (0x00047fcd) volume_small_pane_g7

0x9fff,	// (0x00047fd6) volume_small_pane_g8

0xa008,	// (0x00047fdf) volume_small_pane_g9

0xa011,	// (0x00047fe8) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0004d8cb) volume_small_pane_g

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp2_ParamLimits

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp2

0xb07c,	// (0x00049053) tabs_3_active_pane_g1

0xb084,	// (0x0004905b) tabs_3_active_pane_t1

0x3bd7,	// (0x00041bae) bg_passive_tab_pane_cp2_ParamLimits

0x3bd7,	// (0x00041bae) bg_passive_tab_pane_cp2

0xb07c,	// (0x00049053) tabs_3_passive_pane_g1

0xb084,	// (0x0004905b) tabs_3_passive_pane_t1

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp3_ParamLimits

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp3

0xb096,	// (0x0004906d) tabs_4_active_pane_g1

0xb09e,	// (0x00049075) tabs_4_active_pane_t1

0x3bd7,	// (0x00041bae) bg_passive_tab_pane_cp3_ParamLimits

0x3bd7,	// (0x00041bae) bg_passive_tab_pane_cp3

0xb096,	// (0x0004906d) tabs_4_1_passive_pane_g1

0xb09e,	// (0x00049075) tabs_4_1_passive_pane_t1

0x4bc5,	// (0x00042b9c) list_highlight_pane_cp2

0xcad4,	// (0x0004aaab) list_set_pane_ParamLimits

0xcad4,	// (0x0004aaab) list_set_pane

0xcb7a,	// (0x0004ab51) main_pane_set_t1_ParamLimits

0xcb7a,	// (0x0004ab51) main_pane_set_t1

0xcb9a,	// (0x0004ab71) main_pane_set_t2_ParamLimits

0xcb9a,	// (0x0004ab71) main_pane_set_t2

0xcbae,	// (0x0004ab85) main_pane_set_t3_ParamLimits

0xcbae,	// (0x0004ab85) main_pane_set_t3

0xcbc0,	// (0x0004ab97) main_pane_set_t4_ParamLimits

0xcbc0,	// (0x0004ab97) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0004d99b) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0004d99b) main_pane_set_t

0xcbd2,	// (0x0004aba9) setting_code_pane

0xcbde,	// (0x0004abb5) setting_slider_graphic_pane

0xcbde,	// (0x0004abb5) setting_slider_pane

0xcbde,	// (0x0004abb5) setting_text_pane

0xcbde,	// (0x0004abb5) setting_volume_pane

0x926a,	// (0x00047241) volume_set_pane

0x3bd7,	// (0x00041bae) bg_set_opt_pane_cp

0x9272,	// (0x00047249) setting_slider_pane_t1

0x928b,	// (0x00047262) setting_slider_pane_t2

0x92a5,	// (0x0004727c) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0004d579) setting_slider_pane_t

0x92bd,	// (0x00047294) slider_set_pane

0x3b7b,	// (0x00041b52) bg_set_opt_pane_cp2

0x3be5,	// (0x00041bbc) setting_slider_graphic_pane_g1

0x92d3,	// (0x000472aa) setting_slider_graphic_pane_t1

0x92e3,	// (0x000472ba) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0004d580) setting_slider_graphic_pane_t

0x92f3,	// (0x000472ca) slider_set_pane_cp

0x3b7b,	// (0x00041b52) input_focus_pane_cp1

0x6b7c,	// (0x00044b53) list_set_text_pane

0x3b71,	// (0x00041b48) setting_text_pane_g1

0x3b7b,	// (0x00041b52) input_focus_pane_cp2

0x3b71,	// (0x00041b48) setting_code_pane_g1

0x3bee,	// (0x00041bc5) setting_code_pane_t1

0x92fb,	// (0x000472d2) set_text_pane_t1_ParamLimits

0x92fb,	// (0x000472d2) set_text_pane_t1

0x4ad4,	// (0x00042aab) set_opt_bg_pane_g1

0x4adc,	// (0x00042ab3) set_opt_bg_pane_g2

0x6b56,	// (0x00044b2d) set_opt_bg_pane_g3

0x4aec,	// (0x00042ac3) set_opt_bg_pane_g4

0x4af4,	// (0x00042acb) set_opt_bg_pane_g5

0x4afc,	// (0x00042ad3) set_opt_bg_pane_g6

0x6b60,	// (0x00044b37) set_opt_bg_pane_g7

0x6b68,	// (0x00044b3f) set_opt_bg_pane_g8

0x6b72,	// (0x00044b49) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0004d988) set_opt_bg_pane_g

0x6b49,	// (0x00044b20) slider_set_pane_g1

0xa188,	// (0x0004815f) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0004d979) slider_set_pane_g

0xa124,	// (0x000480fb) volume_set_pane_g1

0xa12c,	// (0x00048103) volume_set_pane_g2

0xa134,	// (0x0004810b) volume_set_pane_g3

0xa13c,	// (0x00048113) volume_set_pane_g4

0xa144,	// (0x0004811b) volume_set_pane_g5

0xa14c,	// (0x00048123) volume_set_pane_g6

0xa154,	// (0x0004812b) volume_set_pane_g7

0xa15c,	// (0x00048133) volume_set_pane_g8

0xa164,	// (0x0004813b) volume_set_pane_g9

0xa16c,	// (0x00048143) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0004d951) volume_set_pane_g

0xb0b0,	// (0x00049087) indicator_pane_ParamLimits

0xb0b0,	// (0x00049087) indicator_pane

0xb0bc,	// (0x00049093) main_idle_pane_g2_ParamLimits

0xb0bc,	// (0x00049093) main_idle_pane_g2

0xb0e4,	// (0x000490bb) main_pane_idle_g1_ParamLimits

0xb0e4,	// (0x000490bb) main_pane_idle_g1

0x40b8,	// (0x0004208f) popup_clock_digital_analogue_window_ParamLimits

0x40b8,	// (0x0004208f) popup_clock_digital_analogue_window

0xb0f1,	// (0x000490c8) soft_indicator_pane_ParamLimits

0xb0f1,	// (0x000490c8) soft_indicator_pane

0xb0fd,	// (0x000490d4) wallpaper_pane_ParamLimits

0xb0fd,	// (0x000490d4) wallpaper_pane

0x3b71,	// (0x00041b48) wallpaper_pane_g1

0xb109,	// (0x000490e0) indicator_pane_g1_ParamLimits

0xb109,	// (0x000490e0) indicator_pane_g1

0x6cca,	// (0x00044ca1) navi_navi_icon_text_pane_srt_g1

0x40e6,	// (0x000420bd) soft_indicator_pane_t1

0x4100,	// (0x000420d7) aid_ps_area_pane

0xb115,	// (0x000490ec) aid_ps_clock_pane

0x4111,	// (0x000420e8) aid_ps_indicator_pane

0x411d,	// (0x000420f4) indicator_ps_pane_ParamLimits

0x411d,	// (0x000420f4) indicator_ps_pane

0x412c,	// (0x00042103) power_save_pane_g1_ParamLimits

0x412c,	// (0x00042103) power_save_pane_g1

0x4138,	// (0x0004210f) power_save_pane_g2_ParamLimits

0x4138,	// (0x0004210f) power_save_pane_g2

0x8e7b,	// (0x00046e52) aid_navinavi_width_pane

0x4100,	// (0x000420d7) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0004d585) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0004d585) power_save_pane_g

0x4146,	// (0x0004211d) power_save_pane_t1_ParamLimits

0x4146,	// (0x0004211d) power_save_pane_t1

0xb115,	// (0x000490ec) aid_ps_clock_pane_ParamLimits

0x4111,	// (0x000420e8) aid_ps_indicator_pane_ParamLimits

0x4158,	// (0x0004212f) power_save_pane_t4_ParamLimits

0x4158,	// (0x0004212f) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0004d58a) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0004d58a) power_save_pane_t

0x4182,	// (0x00042159) power_save_t3_ParamLimits

0x4182,	// (0x00042159) power_save_t3

0x416d,	// (0x00042144) power_save_t2_ParamLimits

0x416d,	// (0x00042144) power_save_t2

0x4197,	// (0x0004216e) indicator_ps_pane_g1

0xb123,	// (0x000490fa) ai_gene_pane_ParamLimits

0xb123,	// (0x000490fa) ai_gene_pane

0xb12f,	// (0x00049106) ai_links_pane_ParamLimits

0xb12f,	// (0x00049106) ai_links_pane

0xb13b,	// (0x00049112) indicator_pane_cp1_ParamLimits

0xb13b,	// (0x00049112) indicator_pane_cp1

0xb147,	// (0x0004911e) main_pane_idle_g1_cp_ParamLimits

0xb147,	// (0x0004911e) main_pane_idle_g1_cp

0x41a0,	// (0x00042177) popup_ai_links_title_window

0xb153,	// (0x0004912a) soft_indicator_pane_cp1_ParamLimits

0xb153,	// (0x0004912a) soft_indicator_pane_cp1

0x699d,	// (0x00044974) ai_links_pane_g1

0x69a6,	// (0x0004497d) grid_ai_links_pane

0xca27,	// (0x0004a9fe) ai_gene_pane_1

0x698b,	// (0x00044962) ai_gene_pane_2

0x6994,	// (0x0004496b) list_highlight_pane_cp4

0xca0b,	// (0x0004a9e2) cell_ai_link_pane_ParamLimits

0xca0b,	// (0x0004a9e2) cell_ai_link_pane

0x6983,	// (0x0004495a) cell_ai_link_pane_g1

0x4733,	// (0x0004270a) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0004d92c) cell_ai_link_pane_g

0x3b7b,	// (0x00041b52) grid_highlight_cp2

0x3b7b,	// (0x00041b52) bg_popup_sub_pane_cp1

0x41b7,	// (0x0004218e) popup_ai_links_title_window_t1

0x68d1,	// (0x000448a8) ai_gene_pane_1_g1_ParamLimits

0x68d1,	// (0x000448a8) ai_gene_pane_1_g1

0x68dd,	// (0x000448b4) ai_gene_pane_1_g2_ParamLimits

0x68dd,	// (0x000448b4) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0004d922) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0004d922) ai_gene_pane_1_g

0x68ea,	// (0x000448c1) ai_gene_pane_1_t1_ParamLimits

0x68ea,	// (0x000448c1) ai_gene_pane_1_t1

0x691e,	// (0x000448f5) grid_ai_soft_ind_pane

0x68bc,	// (0x00044893) ai_gene_pane_2_t1_ParamLimits

0x68bc,	// (0x00044893) ai_gene_pane_2_t1

0xb15f,	// (0x00049136) main_pane_empty_t1_ParamLimits

0xb15f,	// (0x00049136) main_pane_empty_t1

0xb177,	// (0x0004914e) main_pane_empty_t2_ParamLimits

0xb177,	// (0x0004914e) main_pane_empty_t2

0xb18c,	// (0x00049163) main_pane_empty_t3_ParamLimits

0xb18c,	// (0x00049163) main_pane_empty_t3

0xb19e,	// (0x00049175) main_pane_empty_t4_ParamLimits

0xb19e,	// (0x00049175) main_pane_empty_t4

0xb1b0,	// (0x00049187) main_pane_empty_t5_ParamLimits

0xb1b0,	// (0x00049187) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0004d58f) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0004d58f) main_pane_empty_t

0x4b25,	// (0x00042afc) bg_popup_window_pane_ParamLimits

0x4b25,	// (0x00042afc) bg_popup_window_pane

0x662c,	// (0x00044603) find_popup_pane_cp2_ParamLimits

0x662c,	// (0x00044603) find_popup_pane_cp2

0x6656,	// (0x0004462d) heading_pane_ParamLimits

0x6656,	// (0x0004462d) heading_pane

0x3b7b,	// (0x00041b52) bg_popup_sub_pane

0xc97b,	// (0x0004a952) bg_popup_window_pane_g1_ParamLimits

0xc97b,	// (0x0004a952) bg_popup_window_pane_g1

0xc987,	// (0x0004a95e) bg_popup_window_pane_g2_ParamLimits

0xc987,	// (0x0004a95e) bg_popup_window_pane_g2

0xc993,	// (0x0004a96a) bg_popup_window_pane_g3_ParamLimits

0xc993,	// (0x0004a96a) bg_popup_window_pane_g3

0xc99f,	// (0x0004a976) bg_popup_window_pane_g4_ParamLimits

0xc99f,	// (0x0004a976) bg_popup_window_pane_g4

0xc9ab,	// (0x0004a982) bg_popup_window_pane_g5_ParamLimits

0xc9ab,	// (0x0004a982) bg_popup_window_pane_g5

0xc9b7,	// (0x0004a98e) bg_popup_window_pane_g6_ParamLimits

0xc9b7,	// (0x0004a98e) bg_popup_window_pane_g6

0xc9c3,	// (0x0004a99a) bg_popup_window_pane_g7_ParamLimits

0xc9c3,	// (0x0004a99a) bg_popup_window_pane_g7

0xc9cf,	// (0x0004a9a6) bg_popup_window_pane_g8_ParamLimits

0xc9cf,	// (0x0004a9a6) bg_popup_window_pane_g8

0xc9db,	// (0x0004a9b2) bg_popup_window_pane_g9_ParamLimits

0xc9db,	// (0x0004a9b2) bg_popup_window_pane_g9

0x6612,	// (0x000445e9) bg_popup_window_pane_g10_ParamLimits

0x6612,	// (0x000445e9) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0004d8ea) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0004d8ea) bg_popup_window_pane_g

0x65c9,	// (0x000445a0) bg_popup_heading_pane_ParamLimits

0x65c9,	// (0x000445a0) bg_popup_heading_pane

0xa210,	// (0x000481e7) tabs_4_passive_pane_cp_srt_ParamLimits

0xa210,	// (0x000481e7) tabs_4_passive_pane_cp_srt

0xa222,	// (0x000481f9) tabs_4_passive_pane_srt_ParamLimits

0x65dd,	// (0x000445b4) heading_pane_g2

0xa222,	// (0x000481f9) tabs_4_passive_pane_srt

0x4bc5,	// (0x00042b9c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4bc5,	// (0x00042b9c) bg_passive_tab_pane_cp3_srt

0x65e5,	// (0x000445bc) heading_pane_t1_ParamLimits

0x65e5,	// (0x000445bc) heading_pane_t1

0x65fc,	// (0x000445d3) heading_pane_t2_ParamLimits

0x65fc,	// (0x000445d3) heading_pane_t2

0x0001,

0xf90e,	// (0x0004d8e5) heading_pane_t_ParamLimits

0xf90e,	// (0x0004d8e5) heading_pane_t

0x6114,	// (0x000440eb) bg_popup_heading_pane_g1

0x61a5,	// (0x0004417c) bg_popup_heading_pane_g2

0x61af,	// (0x00044186) bg_popup_heading_pane_g3

0x61b9,	// (0x00044190) bg_popup_heading_pane_g4

0x61c3,	// (0x0004419a) bg_popup_heading_pane_g5

0x61cd,	// (0x000441a4) bg_popup_heading_pane_g6

0x61d5,	// (0x000441ac) bg_popup_heading_pane_g7

0x61dd,	// (0x000441b4) bg_popup_heading_pane_g8

0x61e7,	// (0x000441be) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0004d8a1) bg_popup_heading_pane_g

0x59d8,	// (0x000439af) bg_popup_sub_pane_g1

0x59e0,	// (0x000439b7) bg_popup_sub_pane_g2

0x59e8,	// (0x000439bf) bg_popup_sub_pane_g3

0x59f0,	// (0x000439c7) bg_popup_sub_pane_g4

0x59f8,	// (0x000439cf) bg_popup_sub_pane_g5

0x5a00,	// (0x000439d7) bg_popup_sub_pane_g6

0x5a08,	// (0x000439df) bg_popup_sub_pane_g7

0x5a10,	// (0x000439e7) bg_popup_sub_pane_g8

0x5a18,	// (0x000439ef) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0004d87b) bg_popup_sub_pane_g

0x3bc9,	// (0x00041ba0) bg_popup_window_pane_cp5_ParamLimits

0x3bc9,	// (0x00041ba0) bg_popup_window_pane_cp5

0x41d4,	// (0x000421ab) popup_note_window_g1_ParamLimits

0x41d4,	// (0x000421ab) popup_note_window_g1

0x41e0,	// (0x000421b7) popup_note_window_t1_ParamLimits

0x41e0,	// (0x000421b7) popup_note_window_t1

0x41f6,	// (0x000421cd) popup_note_window_t2_ParamLimits

0x41f6,	// (0x000421cd) popup_note_window_t2

0x420c,	// (0x000421e3) popup_note_window_t3_ParamLimits

0x420c,	// (0x000421e3) popup_note_window_t3

0x4222,	// (0x000421f9) popup_note_window_t4_ParamLimits

0x4222,	// (0x000421f9) popup_note_window_t4

0x4623,	// (0x000425fa) popup_note_window_t5_ParamLimits

0x4623,	// (0x000425fa) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0004d59a) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0004d59a) popup_note_window_t

0x4647,	// (0x0004261e) bg_popup_window_pane_cp6_ParamLimits

0x4647,	// (0x0004261e) bg_popup_window_pane_cp6

0x6090,	// (0x00044067) popup_note_image_window_g1_ParamLimits

0x6090,	// (0x00044067) popup_note_image_window_g1

0x609c,	// (0x00044073) popup_note_image_window_g2_ParamLimits

0x609c,	// (0x00044073) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0004d86f) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0004d86f) popup_note_image_window_g

0x60b5,	// (0x0004408c) popup_note_image_window_t1_ParamLimits

0x60b5,	// (0x0004408c) popup_note_image_window_t1

0x60ce,	// (0x000440a5) popup_note_image_window_t2_ParamLimits

0x60ce,	// (0x000440a5) popup_note_image_window_t2

0x60e7,	// (0x000440be) popup_note_image_window_t3_ParamLimits

0x60e7,	// (0x000440be) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0004d874) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0004d874) popup_note_image_window_t

0x5f6d,	// (0x00043f44) bg_popup_window_pane_cp7_ParamLimits

0x5f6d,	// (0x00043f44) bg_popup_window_pane_cp7

0x5f9d,	// (0x00043f74) popup_note_wait_window_g1_ParamLimits

0x5f9d,	// (0x00043f74) popup_note_wait_window_g1

0x5fa9,	// (0x00043f80) popup_note_wait_window_g2_ParamLimits

0x5fa9,	// (0x00043f80) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0004d85d) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0004d85d) popup_note_wait_window_g

0x5fc1,	// (0x00043f98) popup_note_wait_window_t1_ParamLimits

0x5fc1,	// (0x00043f98) popup_note_wait_window_t1

0x5fe8,	// (0x00043fbf) popup_note_wait_window_t2_ParamLimits

0x5fe8,	// (0x00043fbf) popup_note_wait_window_t2

0x6005,	// (0x00043fdc) popup_note_wait_window_t3_ParamLimits

0x6005,	// (0x00043fdc) popup_note_wait_window_t3

0x6018,	// (0x00043fef) popup_note_wait_window_t4_ParamLimits

0x6018,	// (0x00043fef) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0004d864) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0004d864) popup_note_wait_window_t

0x603d,	// (0x00044014) wait_bar_pane_ParamLimits

0x603d,	// (0x00044014) wait_bar_pane

0x3b7b,	// (0x00041b52) wait_anim_pane

0x3b7b,	// (0x00041b52) wait_border_pane

0x3b71,	// (0x00041b48) wait_anim_pane_g1

0x3b71,	// (0x00041b48) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0004d723) wait_anim_pane_g

0x5f11,	// (0x00043ee8) wait_border_pane_g1

0x5f1c,	// (0x00043ef3) wait_border_pane_g2

0x5f25,	// (0x00043efc) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0004d856) wait_border_pane_g

0x5e6e,	// (0x00043e45) bg_popup_window_pane_cp16_ParamLimits

0x5e6e,	// (0x00043e45) bg_popup_window_pane_cp16

0x5e7c,	// (0x00043e53) indicator_popup_pane_cp4_ParamLimits

0x5e7c,	// (0x00043e53) indicator_popup_pane_cp4

0x5e90,	// (0x00043e67) popup_query_data_window_t1_ParamLimits

0x5e90,	// (0x00043e67) popup_query_data_window_t1

0x5ea2,	// (0x00043e79) popup_query_data_window_t2_ParamLimits

0x5ea2,	// (0x00043e79) popup_query_data_window_t2

0x5ebb,	// (0x00043e92) popup_query_data_window_t3_ParamLimits

0x5ebb,	// (0x00043e92) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0004d84f) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0004d84f) popup_query_data_window_t

0x5ed5,	// (0x00043eac) query_popup_data_pane_ParamLimits

0x5ed5,	// (0x00043eac) query_popup_data_pane

0x5ee9,	// (0x00043ec0) query_popup_data_pane_cp1_ParamLimits

0x5ee9,	// (0x00043ec0) query_popup_data_pane_cp1

0x4647,	// (0x0004261e) bg_popup_window_pane_cp10_ParamLimits

0x4647,	// (0x0004261e) bg_popup_window_pane_cp10

0x5dd1,	// (0x00043da8) indicator_popup_pane_ParamLimits

0x5dd1,	// (0x00043da8) indicator_popup_pane

0x469e,	// (0x00042675) popup_query_code_window_t1_ParamLimits

0x469e,	// (0x00042675) popup_query_code_window_t1

0x5de9,	// (0x00043dc0) popup_query_code_window_t2_ParamLimits

0x5de9,	// (0x00043dc0) popup_query_code_window_t2

0x5e27,	// (0x00043dfe) popup_query_code_window_t3_ParamLimits

0x5e27,	// (0x00043dfe) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0004d848) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0004d848) popup_query_code_window_t

0x5e56,	// (0x00043e2d) query_popup_pane_ParamLimits

0x5e56,	// (0x00043e2d) query_popup_pane

0x4647,	// (0x0004261e) bg_popup_window_pane_cp15_ParamLimits

0x4647,	// (0x0004261e) bg_popup_window_pane_cp15

0x4665,	// (0x0004263c) indicator_popup_pane_cp1_ParamLimits

0x4665,	// (0x0004263c) indicator_popup_pane_cp1

0x4678,	// (0x0004264f) indicator_popup_pane_cp2_ParamLimits

0x4678,	// (0x0004264f) indicator_popup_pane_cp2

0x468b,	// (0x00042662) popup_query_data_code_window_g1_ParamLimits

0x468b,	// (0x00042662) popup_query_data_code_window_g1

0x469e,	// (0x00042675) popup_query_data_code_window_t1_ParamLimits

0x469e,	// (0x00042675) popup_query_data_code_window_t1

0x46b0,	// (0x00042687) popup_query_data_code_window_t2_ParamLimits

0x46b0,	// (0x00042687) popup_query_data_code_window_t2

0x46c2,	// (0x00042699) popup_query_data_code_window_t3_ParamLimits

0x46c2,	// (0x00042699) popup_query_data_code_window_t3

0x46d8,	// (0x000426af) popup_query_data_code_window_t4_ParamLimits

0x46d8,	// (0x000426af) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0004d5a5) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0004d5a5) popup_query_data_code_window_t

0x9ed1,	// (0x00047ea8) list_single_midp_graphic_pane_g3

0x46f0,	// (0x000426c7) query_popup_data_pane_cp2_ParamLimits

0x4703,	// (0x000426da) query_popup_pane_cp2_ParamLimits

0x4703,	// (0x000426da) query_popup_pane_cp2

0x3b7b,	// (0x00041b52) bg_popup_window_pane_cp11

0x5da5,	// (0x00043d7c) heading_pane_cp5

0x4791,	// (0x00042768) listscroll_popup_info_pane

0x3b7b,	// (0x00041b52) input_focus_pane_cp3

0x4716,	// (0x000426ed) query_popup_pane_t1

0x4724,	// (0x000426fb) list_popup_info_pane_ParamLimits

0x4724,	// (0x000426fb) list_popup_info_pane

0x4733,	// (0x0004270a) listscroll_popup_info_pane_g1

0x473b,	// (0x00042712) scroll_pane_cp7

0x4745,	// (0x0004271c) popup_info_list_pane_t1_ParamLimits

0x4745,	// (0x0004271c) popup_info_list_pane_t1

0x475f,	// (0x00042736) popup_info_list_pane_t2_ParamLimits

0x475f,	// (0x00042736) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0004d5ae) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0004d5ae) popup_info_list_pane_t

0x3b7b,	// (0x00041b52) bg_popup_window_pane_cp12

0x6ce4,	// (0x00044cbb) find_popup_pane

0x3bd7,	// (0x00041bae) bg_popup_window_pane_cp3

0x4779,	// (0x00042750) heading_pane_cp3

0x4785,	// (0x0004275c) listscroll_popup_graphic_pane

0x3b7b,	// (0x00041b52) bg_popup_window_pane_cp4

0xb214,	// (0x000491eb) heading_pane_cp4

0x4791,	// (0x00042768) listscroll_popup_colour_pane

0xb21e,	// (0x000491f5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb21e,	// (0x000491f5) cell_large_graphic_colour_none_popup_pane

0xb232,	// (0x00049209) grid_large_graphic_colour_popup_pane_ParamLimits

0xb232,	// (0x00049209) grid_large_graphic_colour_popup_pane

0xb25e,	// (0x00049235) listscroll_popup_colour_pane_g1_ParamLimits

0xb25e,	// (0x00049235) listscroll_popup_colour_pane_g1

0xb275,	// (0x0004924c) listscroll_popup_colour_pane_g2_ParamLimits

0xb275,	// (0x0004924c) listscroll_popup_colour_pane_g2

0xb28c,	// (0x00049263) listscroll_popup_colour_pane_g3_ParamLimits

0xb28c,	// (0x00049263) listscroll_popup_colour_pane_g3

0xb29c,	// (0x00049273) listscroll_popup_colour_pane_g4_ParamLimits

0xb29c,	// (0x00049273) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0004d5b3) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0004d5b3) listscroll_popup_colour_pane_g

0x4799,	// (0x00042770) scroll_pane_cp6_ParamLimits

0x4799,	// (0x00042770) scroll_pane_cp6

0xb2b0,	// (0x00049287) cell_large_graphic_colour_popup_pane_ParamLimits

0xb2b0,	// (0x00049287) cell_large_graphic_colour_popup_pane

0x47ab,	// (0x00042782) cell_large_graphic_colour_none_popup_pane_t1

0x3b7b,	// (0x00041b52) grid_highlight_pane_cp5

0x47ba,	// (0x00042791) cell_large_graphic_colour_popup_pane_g1

0x47c2,	// (0x00042799) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0004d5bc) cell_large_graphic_colour_popup_pane_g

0x47ca,	// (0x000427a1) cell_large_graphic_colour_popup_pane_g2_copy1

0x47d3,	// (0x000427aa) grid_highlight_pane_cp4

0x47db,	// (0x000427b2) bg_popup_window_pane_cp8_ParamLimits

0x47db,	// (0x000427b2) bg_popup_window_pane_cp8

0x47f6,	// (0x000427cd) popup_snote_single_text_window_g1_ParamLimits

0x47f6,	// (0x000427cd) popup_snote_single_text_window_g1

0x4808,	// (0x000427df) popup_snote_single_text_window_t1_ParamLimits

0x4808,	// (0x000427df) popup_snote_single_text_window_t1

0x481b,	// (0x000427f2) popup_snote_single_text_window_t2_ParamLimits

0x481b,	// (0x000427f2) popup_snote_single_text_window_t2

0x482e,	// (0x00042805) popup_snote_single_text_window_t3_ParamLimits

0x482e,	// (0x00042805) popup_snote_single_text_window_t3

0x4867,	// (0x0004283e) popup_snote_single_text_window_t4_ParamLimits

0x4867,	// (0x0004283e) popup_snote_single_text_window_t4

0x489b,	// (0x00042872) popup_snote_single_text_window_t5_ParamLimits

0x489b,	// (0x00042872) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0004d5c1) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0004d5c1) popup_snote_single_text_window_t

0x48ca,	// (0x000428a1) bg_popup_window_pane_cp9_ParamLimits

0x48ca,	// (0x000428a1) bg_popup_window_pane_cp9

0x47f6,	// (0x000427cd) popup_snote_single_graphic_window_g1_ParamLimits

0x47f6,	// (0x000427cd) popup_snote_single_graphic_window_g1

0x48d8,	// (0x000428af) popup_snote_single_graphic_window_g2_ParamLimits

0x48d8,	// (0x000428af) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0004d5cc) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0004d5cc) popup_snote_single_graphic_window_g

0x48e4,	// (0x000428bb) popup_snote_single_graphic_window_t1_ParamLimits

0x48e4,	// (0x000428bb) popup_snote_single_graphic_window_t1

0x48f7,	// (0x000428ce) popup_snote_single_graphic_window_t2_ParamLimits

0x48f7,	// (0x000428ce) popup_snote_single_graphic_window_t2

0x490a,	// (0x000428e1) popup_snote_single_graphic_window_t3_ParamLimits

0x490a,	// (0x000428e1) popup_snote_single_graphic_window_t3

0x4943,	// (0x0004291a) popup_snote_single_graphic_window_t4_ParamLimits

0x4943,	// (0x0004291a) popup_snote_single_graphic_window_t4

0x4977,	// (0x0004294e) popup_snote_single_graphic_window_t5_ParamLimits

0x4977,	// (0x0004294e) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0004d5d1) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0004d5d1) popup_snote_single_graphic_window_t

0x6c6c,	// (0x00044c43) grid_graphic_popup_pane_ParamLimits

0x6c6c,	// (0x00044c43) grid_graphic_popup_pane

0x6c94,	// (0x00044c6b) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c94,	// (0x00044c6b) listscroll_popup_graphic_pane_g1

0xccc9,	// (0x0004aca0) listscroll_popup_graphic_pane_g2_ParamLimits

0xccc9,	// (0x0004aca0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0004d9c5) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0004d9c5) listscroll_popup_graphic_pane_g

0x664a,	// (0x00044621) scroll_pane_cp5

0xcc88,	// (0x0004ac5f) cell_graphic_popup_pane_ParamLimits

0xcc88,	// (0x0004ac5f) cell_graphic_popup_pane

0x6c37,	// (0x00044c0e) cell_graphic_popup_pane_g1

0x6c3f,	// (0x00044c16) cell_graphic_popup_pane_g2

0x47ca,	// (0x000427a1) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0004d9be) cell_graphic_popup_pane_g

0x6c48,	// (0x00044c1f) cell_graphic_popup_pane_t2

0x47d3,	// (0x000427aa) grid_highlight_pane_cp3

0x49b8,	// (0x0004298f) list_gen_pane_ParamLimits

0x49b8,	// (0x0004298f) list_gen_pane

0x49e0,	// (0x000429b7) scroll_pane

0xcc3b,	// (0x0004ac12) bg_list_pane_g1_ParamLimits

0xcc3b,	// (0x0004ac12) bg_list_pane_g1

0x6be6,	// (0x00044bbd) bg_list_pane_g2_ParamLimits

0x6be6,	// (0x00044bbd) bg_list_pane_g2

0x6bf9,	// (0x00044bd0) bg_list_pane_g3_ParamLimits

0x6bf9,	// (0x00044bd0) bg_list_pane_g3

0x6c0b,	// (0x00044be2) bg_list_pane_g4_ParamLimits

0x6c0b,	// (0x00044be2) bg_list_pane_g4

0xcc56,	// (0x0004ac2d) bg_list_pane_g5_ParamLimits

0xcc56,	// (0x0004ac2d) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0004d9b3) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0004d9b3) bg_list_pane_g

0xbd47,	// (0x00049d1e) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double2_graphic_large_graphic_pane

0xbd47,	// (0x00049d1e) list_double2_graphic_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double2_graphic_pane

0xbd47,	// (0x00049d1e) list_double2_large_graphic_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double2_large_graphic_pane

0xcc20,	// (0x0004abf7) list_double2_pane_ParamLimits

0xcc20,	// (0x0004abf7) list_double2_pane

0xbd47,	// (0x00049d1e) list_double_graphic_heading_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double_graphic_heading_pane

0xbd47,	// (0x00049d1e) list_double_graphic_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double_graphic_pane

0xbd47,	// (0x00049d1e) list_double_heading_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double_heading_pane

0xbd47,	// (0x00049d1e) list_double_large_graphic_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double_large_graphic_pane

0xbd47,	// (0x00049d1e) list_double_number_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double_number_pane

0xbd47,	// (0x00049d1e) list_double_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double_pane

0xbd47,	// (0x00049d1e) list_double_time_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_double_time_pane

0xbd47,	// (0x00049d1e) list_setting_number_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_setting_number_pane

0xbd47,	// (0x00049d1e) list_setting_pane_ParamLimits

0xbd47,	// (0x00049d1e) list_setting_pane

0xbd8e,	// (0x00049d65) list_single_2graphic_pane_ParamLimits

0xbd8e,	// (0x00049d65) list_single_2graphic_pane

0xbd8e,	// (0x00049d65) list_single_graphic_heading_pane_ParamLimits

0xbd8e,	// (0x00049d65) list_single_graphic_heading_pane

0xbd8e,	// (0x00049d65) list_single_graphic_pane_ParamLimits

0xbd8e,	// (0x00049d65) list_single_graphic_pane

0xbd8e,	// (0x00049d65) list_single_heading_pane_ParamLimits

0xbd8e,	// (0x00049d65) list_single_heading_pane

0xbdff,	// (0x00049dd6) list_single_large_graphic_pane_ParamLimits

0xbdff,	// (0x00049dd6) list_single_large_graphic_pane

0xbd8e,	// (0x00049d65) list_single_number_heading_pane_ParamLimits

0xbd8e,	// (0x00049d65) list_single_number_heading_pane

0xbd8e,	// (0x00049d65) list_single_number_pane_ParamLimits

0xbd8e,	// (0x00049d65) list_single_number_pane

0xbd8e,	// (0x00049d65) list_single_pane_ParamLimits

0xbd8e,	// (0x00049d65) list_single_pane

0x3b7b,	// (0x00041b52) list_highlight_pane_cp1

0xb2d9,	// (0x000492b0) list_single_pane_g1_ParamLimits

0xb2d9,	// (0x000492b0) list_single_pane_g1

0xb2e5,	// (0x000492bc) list_single_pane_g2_ParamLimits

0xb2e5,	// (0x000492bc) list_single_pane_g2

0x0001,

0xf616,	// (0x0004d5ed) list_single_pane_g_ParamLimits

0xf616,	// (0x0004d5ed) list_single_pane_g

0xbd31,	// (0x00049d08) list_single_pane_t1_ParamLimits

0xbd31,	// (0x00049d08) list_single_pane_t1

0xb2d9,	// (0x000492b0) list_single_number_pane_g1_ParamLimits

0xb2d9,	// (0x000492b0) list_single_number_pane_g1

0xb2e5,	// (0x000492bc) list_single_number_pane_g2_ParamLimits

0xb2e5,	// (0x000492bc) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0004d5ed) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0004d5ed) list_single_number_pane_g

0xbcd9,	// (0x00049cb0) list_single_number_pane_t1_ParamLimits

0xbcd9,	// (0x00049cb0) list_single_number_pane_t1

0xbcef,	// (0x00049cc6) list_single_number_pane_t2_ParamLimits

0xbcef,	// (0x00049cc6) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0004d974) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0004d974) list_single_number_pane_t

0x9314,	// (0x000472eb) list_single_graphic_pane_g1_ParamLimits

0x9314,	// (0x000472eb) list_single_graphic_pane_g1

0xb2d9,	// (0x000492b0) list_single_graphic_pane_g2_ParamLimits

0xb2d9,	// (0x000492b0) list_single_graphic_pane_g2

0xb2e5,	// (0x000492bc) list_single_graphic_pane_g3_ParamLimits

0xb2e5,	// (0x000492bc) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0004d5dc) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0004d5dc) list_single_graphic_pane_g

0x9320,	// (0x000472f7) list_single_graphic_pane_t1_ParamLimits

0x9320,	// (0x000472f7) list_single_graphic_pane_t1

0x9336,	// (0x0004730d) list_single_heading_pane_g1_ParamLimits

0x9336,	// (0x0004730d) list_single_heading_pane_g1

0xb2e5,	// (0x000492bc) list_single_heading_pane_g2_ParamLimits

0xb2e5,	// (0x000492bc) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0004d5e3) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0004d5e3) list_single_heading_pane_g

0x9349,	// (0x00047320) list_single_heading_pane_t1_ParamLimits

0x9349,	// (0x00047320) list_single_heading_pane_t1

0xb2f1,	// (0x000492c8) list_single_heading_pane_t2_ParamLimits

0xb2f1,	// (0x000492c8) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0004d5e8) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0004d5e8) list_single_heading_pane_t

0xb2d9,	// (0x000492b0) list_single_number_heading_pane_g1_ParamLimits

0xb2d9,	// (0x000492b0) list_single_number_heading_pane_g1

0xb2e5,	// (0x000492bc) list_single_number_heading_pane_g2_ParamLimits

0xb2e5,	// (0x000492bc) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0004d5ed) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0004d5ed) list_single_number_heading_pane_g

0x935f,	// (0x00047336) list_single_number_heading_pane_t1_ParamLimits

0x935f,	// (0x00047336) list_single_number_heading_pane_t1

0x9375,	// (0x0004734c) list_single_number_heading_pane_t2_ParamLimits

0x9375,	// (0x0004734c) list_single_number_heading_pane_t2

0x9387,	// (0x0004735e) list_single_number_heading_pane_t3_ParamLimits

0x9387,	// (0x0004735e) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0004d5f2) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0004d5f2) list_single_number_heading_pane_t

0x9399,	// (0x00047370) list_single_graphic_heading_pane_g1_ParamLimits

0x9399,	// (0x00047370) list_single_graphic_heading_pane_g1

0xb303,	// (0x000492da) list_single_graphic_heading_pane_g4_ParamLimits

0xb303,	// (0x000492da) list_single_graphic_heading_pane_g4

0xb2e5,	// (0x000492bc) list_single_graphic_heading_pane_g5_ParamLimits

0xb2e5,	// (0x000492bc) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0004d5f9) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0004d5f9) list_single_graphic_heading_pane_g

0x935f,	// (0x00047336) list_single_graphic_heading_pane_t1_ParamLimits

0x935f,	// (0x00047336) list_single_graphic_heading_pane_t1

0x93b1,	// (0x00047388) list_single_graphic_heading_pane_t2_ParamLimits

0x93b1,	// (0x00047388) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0004d600) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0004d600) list_single_graphic_heading_pane_t

0xb314,	// (0x000492eb) list_single_large_graphic_pane_g1_ParamLimits

0xb314,	// (0x000492eb) list_single_large_graphic_pane_g1

0xb320,	// (0x000492f7) list_single_large_graphic_pane_g2_ParamLimits

0xb320,	// (0x000492f7) list_single_large_graphic_pane_g2

0xb32c,	// (0x00049303) list_single_large_graphic_pane_g3_ParamLimits

0xb32c,	// (0x00049303) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0004d605) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0004d605) list_single_large_graphic_pane_g

0x5f1c,	// (0x00043ef3) wait_border_pane_g2_copy1

0xb338,	// (0x0004930f) list_single_large_graphic_pane_g4_cp2

0x93c7,	// (0x0004739e) list_single_large_graphic_pane_t1_ParamLimits

0x93c7,	// (0x0004739e) list_single_large_graphic_pane_t1

0x5367,	// (0x0004333e) list_double_pane_g1_ParamLimits

0x5367,	// (0x0004333e) list_double_pane_g1

0x93dd,	// (0x000473b4) list_double_pane_g2_ParamLimits

0x93dd,	// (0x000473b4) list_double_pane_g2

0x0001,

0xf635,	// (0x0004d60c) list_double_pane_g_ParamLimits

0xf635,	// (0x0004d60c) list_double_pane_g

0x93e9,	// (0x000473c0) list_double_pane_t1_ParamLimits

0x93e9,	// (0x000473c0) list_double_pane_t1

0x93ff,	// (0x000473d6) list_double_pane_t2_ParamLimits

0x93ff,	// (0x000473d6) list_double_pane_t2

0x0001,

0xf63a,	// (0x0004d611) list_double_pane_t_ParamLimits

0xf63a,	// (0x0004d611) list_double_pane_t

0x9411,	// (0x000473e8) list_double2_pane_g1_ParamLimits

0x9411,	// (0x000473e8) list_double2_pane_g1

0x9422,	// (0x000473f9) list_double2_pane_g2_ParamLimits

0x9422,	// (0x000473f9) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0004d616) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0004d616) list_double2_pane_g

0x942e,	// (0x00047405) list_double2_pane_t1_ParamLimits

0x942e,	// (0x00047405) list_double2_pane_t1

0x9444,	// (0x0004741b) list_double2_pane_t2_ParamLimits

0x9444,	// (0x0004741b) list_double2_pane_t2

0x0001,

0xf644,	// (0x0004d61b) list_double2_pane_t_ParamLimits

0xf644,	// (0x0004d61b) list_double2_pane_t

0x5367,	// (0x0004333e) list_double_number_pane_g1_ParamLimits

0x5367,	// (0x0004333e) list_double_number_pane_g1

0x93dd,	// (0x000473b4) list_double_number_pane_g2_ParamLimits

0x93dd,	// (0x000473b4) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0004d60c) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0004d60c) list_double_number_pane_g

0x9456,	// (0x0004742d) list_double_number_pane_t1_ParamLimits

0x9456,	// (0x0004742d) list_double_number_pane_t1

0x9468,	// (0x0004743f) list_double_number_pane_t2_ParamLimits

0x9468,	// (0x0004743f) list_double_number_pane_t2

0x947e,	// (0x00047455) list_double_number_pane_t3_ParamLimits

0x947e,	// (0x00047455) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0004d620) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0004d620) list_double_number_pane_t

0x9490,	// (0x00047467) list_double_graphic_pane_g1_ParamLimits

0x9490,	// (0x00047467) list_double_graphic_pane_g1

0x66aa,	// (0x00044681) list_double_graphic_pane_g2_ParamLimits

0x66aa,	// (0x00044681) list_double_graphic_pane_g2

0x949c,	// (0x00047473) list_double_graphic_pane_g3_ParamLimits

0x949c,	// (0x00047473) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0004d627) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0004d627) list_double_graphic_pane_g

0x94b4,	// (0x0004748b) list_double_graphic_pane_t1_ParamLimits

0x94b4,	// (0x0004748b) list_double_graphic_pane_t1

0x94ca,	// (0x000474a1) list_double_graphic_pane_t2_ParamLimits

0x94ca,	// (0x000474a1) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0004d630) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0004d630) list_double_graphic_pane_t

0x94dc,	// (0x000474b3) list_double2_graphic_pane_g1_ParamLimits

0x94dc,	// (0x000474b3) list_double2_graphic_pane_g1

0x94e8,	// (0x000474bf) list_double2_graphic_pane_g2_ParamLimits

0x94e8,	// (0x000474bf) list_double2_graphic_pane_g2

0x94f4,	// (0x000474cb) list_double2_graphic_pane_g3_ParamLimits

0x94f4,	// (0x000474cb) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0004d635) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0004d635) list_double2_graphic_pane_g

0x9500,	// (0x000474d7) list_double2_graphic_pane_t1_ParamLimits

0x9500,	// (0x000474d7) list_double2_graphic_pane_t1

0x9516,	// (0x000474ed) list_double2_graphic_pane_t2_ParamLimits

0x9516,	// (0x000474ed) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0004d63c) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0004d63c) list_double2_graphic_pane_t

0x9528,	// (0x000474ff) list_double_large_graphic_pane_g1_ParamLimits

0x9528,	// (0x000474ff) list_double_large_graphic_pane_g1

0x9551,	// (0x00047528) list_double_large_graphic_pane_g2_ParamLimits

0x9551,	// (0x00047528) list_double_large_graphic_pane_g2

0x93dd,	// (0x000473b4) list_double_large_graphic_pane_g3_ParamLimits

0x93dd,	// (0x000473b4) list_double_large_graphic_pane_g3

0x9567,	// (0x0004753e) list_double_large_graphic_pane_g4_ParamLimits

0x9567,	// (0x0004753e) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0004d641) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0004d641) list_double_large_graphic_pane_g

0x9578,	// (0x0004754f) list_double_large_graphic_pane_t1_ParamLimits

0x9578,	// (0x0004754f) list_double_large_graphic_pane_t1

0x9591,	// (0x00047568) list_double_large_graphic_pane_t2_ParamLimits

0x9591,	// (0x00047568) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0004d64c) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0004d64c) list_double_large_graphic_pane_t

0x95a3,	// (0x0004757a) list_double2_large_graphic_pane_g1_ParamLimits

0x95a3,	// (0x0004757a) list_double2_large_graphic_pane_g1

0x95af,	// (0x00047586) list_double2_large_graphic_pane_g2_ParamLimits

0x95af,	// (0x00047586) list_double2_large_graphic_pane_g2

0x94f4,	// (0x000474cb) list_double2_large_graphic_pane_g3_ParamLimits

0x94f4,	// (0x000474cb) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0004d651) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0004d651) list_double2_large_graphic_pane_g

0x95c0,	// (0x00047597) list_double2_large_graphic_pane_t1_ParamLimits

0x95c0,	// (0x00047597) list_double2_large_graphic_pane_t1

0x95d6,	// (0x000475ad) list_double2_large_graphic_pane_t2_ParamLimits

0x95d6,	// (0x000475ad) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0004d658) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0004d658) list_double2_large_graphic_pane_t

0x95e8,	// (0x000475bf) list_double_heading_pane_g1_ParamLimits

0x95e8,	// (0x000475bf) list_double_heading_pane_g1

0x95f9,	// (0x000475d0) list_double_heading_pane_g2_ParamLimits

0x95f9,	// (0x000475d0) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0004d65d) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0004d65d) list_double_heading_pane_g

0x9605,	// (0x000475dc) list_double_heading_pane_t1_ParamLimits

0x9605,	// (0x000475dc) list_double_heading_pane_t1

0x961b,	// (0x000475f2) list_double_heading_pane_t2_ParamLimits

0x961b,	// (0x000475f2) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0004d662) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0004d662) list_double_heading_pane_t

0x94dc,	// (0x000474b3) list_double_graphic_heading_pane_g1_ParamLimits

0x94dc,	// (0x000474b3) list_double_graphic_heading_pane_g1

0x95e8,	// (0x000475bf) list_double_graphic_heading_pane_g2_ParamLimits

0x95e8,	// (0x000475bf) list_double_graphic_heading_pane_g2

0x95f9,	// (0x000475d0) list_double_graphic_heading_pane_g3_ParamLimits

0x95f9,	// (0x000475d0) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0004d667) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0004d667) list_double_graphic_heading_pane_g

0x962d,	// (0x00047604) list_double_graphic_heading_pane_t1_ParamLimits

0x962d,	// (0x00047604) list_double_graphic_heading_pane_t1

0x9516,	// (0x000474ed) list_double_graphic_heading_pane_t2_ParamLimits

0x9516,	// (0x000474ed) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0004d66e) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0004d66e) list_double_graphic_heading_pane_t

0x9643,	// (0x0004761a) list_double_time_pane_g1_ParamLimits

0x9643,	// (0x0004761a) list_double_time_pane_g1

0x9654,	// (0x0004762b) list_double_time_pane_g2_ParamLimits

0x9654,	// (0x0004762b) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0004d673) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0004d673) list_double_time_pane_g

0x9660,	// (0x00047637) list_double_time_pane_t1_ParamLimits

0x9660,	// (0x00047637) list_double_time_pane_t1

0x9676,	// (0x0004764d) list_double_time_pane_t2_ParamLimits

0x9676,	// (0x0004764d) list_double_time_pane_t2

0x9688,	// (0x0004765f) list_double_time_pane_t3_ParamLimits

0x9688,	// (0x0004765f) list_double_time_pane_t3

0x969a,	// (0x00047671) list_double_time_pane_t4_ParamLimits

0x969a,	// (0x00047671) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0004d678) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0004d678) list_double_time_pane_t

0x96ac,	// (0x00047683) list_setting_pane_g1_ParamLimits

0x96ac,	// (0x00047683) list_setting_pane_g1

0x96b8,	// (0x0004768f) list_setting_pane_g2_ParamLimits

0x96b8,	// (0x0004768f) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0004d681) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0004d681) list_setting_pane_g

0x96c4,	// (0x0004769b) list_setting_pane_t1_ParamLimits

0x96c4,	// (0x0004769b) list_setting_pane_t1

0x96de,	// (0x000476b5) list_setting_pane_t2_ParamLimits

0x96de,	// (0x000476b5) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0004d686) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0004d686) list_setting_pane_t

0x971d,	// (0x000476f4) set_value_pane_cp_ParamLimits

0x971d,	// (0x000476f4) set_value_pane_cp

0x9729,	// (0x00047700) list_setting_number_pane_g1_ParamLimits

0x9729,	// (0x00047700) list_setting_number_pane_g1

0x9735,	// (0x0004770c) list_setting_number_pane_g2_ParamLimits

0x9735,	// (0x0004770c) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0004d68d) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0004d68d) list_setting_number_pane_g

0x9741,	// (0x00047718) list_setting_number_pane_t1_ParamLimits

0x9741,	// (0x00047718) list_setting_number_pane_t1

0x975a,	// (0x00047731) list_setting_number_pane_t2_ParamLimits

0x975a,	// (0x00047731) list_setting_number_pane_t2

0x9774,	// (0x0004774b) list_setting_number_pane_t3_ParamLimits

0x9774,	// (0x0004774b) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0004d692) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0004d692) list_setting_number_pane_t

0x971d,	// (0x000476f4) set_value_pane_ParamLimits

0x971d,	// (0x000476f4) set_value_pane

0x4a14,	// (0x000429eb) bg_set_opt_pane_ParamLimits

0x4a14,	// (0x000429eb) bg_set_opt_pane

0x97b7,	// (0x0004778e) set_value_pane_t1

0x4a35,	// (0x00042a0c) slider_set_pane_cp3

0x4a3e,	// (0x00042a15) volume_small_pane_cp

0x4a47,	// (0x00042a1e) list_form_gen_pane

0x4a50,	// (0x00042a27) scroll_pane_cp8

0x97cd,	// (0x000477a4) form_field_data_pane_ParamLimits

0x97cd,	// (0x000477a4) form_field_data_pane

0x97f1,	// (0x000477c8) form_field_data_wide_pane_ParamLimits

0x97f1,	// (0x000477c8) form_field_data_wide_pane

0x9814,	// (0x000477eb) form_field_popup_pane_ParamLimits

0x9814,	// (0x000477eb) form_field_popup_pane

0x9834,	// (0x0004780b) form_field_popup_wide_pane_ParamLimits

0x9834,	// (0x0004780b) form_field_popup_wide_pane

0x9853,	// (0x0004782a) form_field_slider_pane_ParamLimits

0x9853,	// (0x0004782a) form_field_slider_pane

0x9866,	// (0x0004783d) form_field_slider_wide_pane_ParamLimits

0x9866,	// (0x0004783d) form_field_slider_wide_pane

0x4a61,	// (0x00042a38) data_form_pane

0x9883,	// (0x0004785a) form_field_data_pane_t1

0x4a6d,	// (0x00042a44) input_focus_pane

0x4a7b,	// (0x00042a52) data_form_wide_pane

0xb355,	// (0x0004932c) form_field_data_wide_pane_t1

0x47e8,	// (0x000427bf) input_focus_pane_cp6

0xb377,	// (0x0004934e) form_field_popup_pane_t1

0x4a6d,	// (0x00042a44) input_focus_pane_cp7

0x4aa7,	// (0x00042a7e) list_form_pane

0xb397,	// (0x0004936e) form_field_popup_wide_pane_t1

0x4a6d,	// (0x00042a44) input_focus_pane_cp8

0x4ab3,	// (0x00042a8a) list_form_wide_pane

0xb3b4,	// (0x0004938b) form_field_slider_pane_t1_ParamLimits

0xb3b4,	// (0x0004938b) form_field_slider_pane_t1

0xb3ca,	// (0x000493a1) form_field_slider_pane_t2_ParamLimits

0xb3ca,	// (0x000493a1) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0004d6a2) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0004d6a2) form_field_slider_pane_t

0x3bc9,	// (0x00041ba0) input_focus_pane_cp9_ParamLimits

0x3bc9,	// (0x00041ba0) input_focus_pane_cp9

0xb3df,	// (0x000493b6) slider_cont_pane_ParamLimits

0xb3df,	// (0x000493b6) slider_cont_pane

0x4ac2,	// (0x00042a99) form_field_slider_wide_pane_t1_ParamLimits

0x4ac2,	// (0x00042a99) form_field_slider_wide_pane_t1

0xb3f3,	// (0x000493ca) form_field_slider_wide_pane_t2_ParamLimits

0xb3f3,	// (0x000493ca) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0004d6a7) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0004d6a7) form_field_slider_wide_pane_t

0x3bc9,	// (0x00041ba0) input_focus_pane_cp10_ParamLimits

0x3bc9,	// (0x00041ba0) input_focus_pane_cp10

0xb405,	// (0x000493dc) slider_cont_pane_cp1_ParamLimits

0xb405,	// (0x000493dc) slider_cont_pane_cp1

0xb419,	// (0x000493f0) slider_form_pane_cp

0x4ad4,	// (0x00042aab) input_focus_pane_g1

0x4adc,	// (0x00042ab3) input_focus_pane_g2

0x4ae4,	// (0x00042abb) input_focus_pane_g3

0x4aec,	// (0x00042ac3) input_focus_pane_g4

0x4af4,	// (0x00042acb) input_focus_pane_g5

0x4afc,	// (0x00042ad3) input_focus_pane_g6

0x4b04,	// (0x00042adb) input_focus_pane_g7

0x4b0c,	// (0x00042ae3) input_focus_pane_g8

0x4b14,	// (0x00042aeb) input_focus_pane_g9

0x3b71,	// (0x00041b48) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0004d6ac) input_focus_pane_g

0x5f25,	// (0x00043efc) wait_border_pane_g3_copy1

0xb421,	// (0x000493f8) data_form_pane_t1

0x3b71,	// (0x00041b48) wait_anim_pane_g1_copy1

0xbd01,	// (0x00049cd8) data_form_wide_pane_t1

0xb43c,	// (0x00049413) list_form_graphic_pane_cp_ParamLimits

0xb43c,	// (0x00049413) list_form_graphic_pane_cp

0x6b84,	// (0x00044b5b) slider_form_pane_g1

0x6b99,	// (0x00044b70) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0004d9a4) slider_form_pane_g

0xb455,	// (0x0004942c) list_form_graphic_pane_ParamLimits

0xb455,	// (0x0004942c) list_form_graphic_pane

0xb471,	// (0x00049448) list_form_graphic_pane_g1

0xb479,	// (0x00049450) list_form_graphic_pane_t1_ParamLimits

0xb479,	// (0x00049450) list_form_graphic_pane_t1

0x3bd7,	// (0x00041bae) list_highlight_pane_cp5_ParamLimits

0x3bd7,	// (0x00041bae) list_highlight_pane_cp5

0xb48e,	// (0x00049465) find_pane_g1

0x4b1c,	// (0x00042af3) input_find_pane

0xb497,	// (0x0004946e) input_find_pane_g1_ParamLimits

0xb497,	// (0x0004946e) input_find_pane_g1

0xb4a3,	// (0x0004947a) input_find_pane_t1_ParamLimits

0xb4a3,	// (0x0004947a) input_find_pane_t1

0xb4b8,	// (0x0004948f) input_find_pane_t2_ParamLimits

0xb4b8,	// (0x0004948f) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0004d6c1) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0004d6c1) input_find_pane_t

0x4b25,	// (0x00042afc) input_focus_pane_cp5_ParamLimits

0x4b25,	// (0x00042afc) input_focus_pane_cp5

0xb4d9,	// (0x000494b0) bg_popup_window_pane_cp2_ParamLimits

0xb4d9,	// (0x000494b0) bg_popup_window_pane_cp2

0xb4e6,	// (0x000494bd) listscroll_menu_pane_ParamLimits

0xb4e6,	// (0x000494bd) listscroll_menu_pane

0xb4f2,	// (0x000494c9) popup_submenu_window_ParamLimits

0xb4f2,	// (0x000494c9) popup_submenu_window

0x4b33,	// (0x00042b0a) find_popup_pane_g1

0x4b3b,	// (0x00042b12) input_popup_find_pane_cp

0x4b25,	// (0x00042afc) input_focus_pane_cp4_ParamLimits

0x4b25,	// (0x00042afc) input_focus_pane_cp4

0x4b45,	// (0x00042b1c) input_popup_find_pane_t1_ParamLimits

0x4b45,	// (0x00042b1c) input_popup_find_pane_t1

0x3b7b,	// (0x00041b52) bg_popup_sub_pane_cp

0x4b73,	// (0x00042b4a) listscroll_popup_sub_pane

0x4b7b,	// (0x00042b52) list_submenu_pane_ParamLimits

0x4b7b,	// (0x00042b52) list_submenu_pane

0x4b8c,	// (0x00042b63) scroll_pane_cp4

0x4b94,	// (0x00042b6b) list_single_popup_submenu_pane_ParamLimits

0x4b94,	// (0x00042b6b) list_single_popup_submenu_pane

0x4ba8,	// (0x00042b7f) list_single_popup_submenu_pane_g1

0x4bb0,	// (0x00042b87) list_single_popup_submenu_pane_t1_ParamLimits

0x4bb0,	// (0x00042b87) list_single_popup_submenu_pane_t1

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp1_ParamLimits

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp1

0xb528,	// (0x000494ff) tabs_2_active_pane_g1

0xb530,	// (0x00049507) tabs_2_active_pane_t1

0x3bd7,	// (0x00041bae) bg_passive_tab_pane_cp1_ParamLimits

0x3bd7,	// (0x00041bae) bg_passive_tab_pane_cp1

0xb528,	// (0x000494ff) tabs_2_passive_pane_g1

0xb530,	// (0x00049507) tabs_2_passive_pane_t1

0x5b69,	// (0x00043b40) bg_active_tab_pane_cp4

0xb542,	// (0x00049519) tabs_2_long_active_pane_t1

0xb555,	// (0x0004952c) bg_passive_tab_pane_cp4

0x9ed9,	// (0x00047eb0) list_single_midp_graphic_pane_g4_ParamLimits

0x5b69,	// (0x00043b40) bg_active_tab_pane_cp5

0xb561,	// (0x00049538) tabs_3_long_active_pane_t1

0xb555,	// (0x0004952c) bg_passive_tab_pane_cp5

0x9ed9,	// (0x00047eb0) list_single_midp_graphic_pane_g4

0x3bd7,	// (0x00041bae) bg_popup_window_pane_cp13_ParamLimits

0x3bd7,	// (0x00041bae) bg_popup_window_pane_cp13

0x4bda,	// (0x00042bb1) listscroll_popup_fast_pane_ParamLimits

0x4bda,	// (0x00042bb1) listscroll_popup_fast_pane

0x4be9,	// (0x00042bc0) grid_popup_fast_pane_ParamLimits

0x4be9,	// (0x00042bc0) grid_popup_fast_pane

0x4bfb,	// (0x00042bd2) scroll_pane_cp9_ParamLimits

0x4bfb,	// (0x00042bd2) scroll_pane_cp9

0x7e20,	// (0x00045df7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e20,	// (0x00045df7) list_single_graphic_hl_pane_t1_cp2

0x4c1f,	// (0x00042bf6) input_focus_pane_cp20_ParamLimits

0x4c1f,	// (0x00042bf6) input_focus_pane_cp20

0x4c2d,	// (0x00042c04) query_popup_data_pane_t1_ParamLimits

0x4c2d,	// (0x00042c04) query_popup_data_pane_t1

0x4c40,	// (0x00042c17) query_popup_data_pane_t2_ParamLimits

0x4c40,	// (0x00042c17) query_popup_data_pane_t2

0x4c86,	// (0x00042c5d) query_popup_data_pane_t3_ParamLimits

0x4c86,	// (0x00042c5d) query_popup_data_pane_t3

0x4cc7,	// (0x00042c9e) query_popup_data_pane_t4_ParamLimits

0x4cc7,	// (0x00042c9e) query_popup_data_pane_t4

0x4d03,	// (0x00042cda) query_popup_data_pane_t5_ParamLimits

0x4d03,	// (0x00042cda) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0004d6c6) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0004d6c6) query_popup_data_pane_t

0x4ad4,	// (0x00042aab) bg_set_opt_pane_g1

0x4adc,	// (0x00042ab3) bg_set_opt_pane_g2

0x4ae4,	// (0x00042abb) bg_set_opt_pane_g3

0x4aec,	// (0x00042ac3) bg_set_opt_pane_g4

0x4af4,	// (0x00042acb) bg_set_opt_pane_g5

0x4afc,	// (0x00042ad3) bg_set_opt_pane_g6

0x4b04,	// (0x00042adb) bg_set_opt_pane_g7

0x4b0c,	// (0x00042ae3) bg_set_opt_pane_g8

0x4b14,	// (0x00042aeb) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0004d6d1) bg_set_opt_pane_g

0x9b46,	// (0x00047b1d) control_top_pane_stacon_ParamLimits

0x9b46,	// (0x00047b1d) control_top_pane_stacon

0x9b99,	// (0x00047b70) signal_pane_stacon_ParamLimits

0x9b99,	// (0x00047b70) signal_pane_stacon

0x5178,	// (0x0004314f) stacon_top_pane_g1_ParamLimits

0x5178,	// (0x0004314f) stacon_top_pane_g1

0x9bbe,	// (0x00047b95) title_pane_stacon_ParamLimits

0x9bbe,	// (0x00047b95) title_pane_stacon

0x9be8,	// (0x00047bbf) uni_indicator_pane_stacon_ParamLimits

0x9be8,	// (0x00047bbf) uni_indicator_pane_stacon

0x9bfd,	// (0x00047bd4) battery_pane_stacon_ParamLimits

0x9bfd,	// (0x00047bd4) battery_pane_stacon

0x9c41,	// (0x00047c18) control_bottom_pane_stacon_ParamLimits

0x9c41,	// (0x00047c18) control_bottom_pane_stacon

0x9c64,	// (0x00047c3b) navi_pane_stacon_ParamLimits

0x9c64,	// (0x00047c3b) navi_pane_stacon

0x519a,	// (0x00043171) stacon_bottom_pane_g1_ParamLimits

0x519a,	// (0x00043171) stacon_bottom_pane_g1

0x98a7,	// (0x0004787e) aid_levels_signal_lsc_ParamLimits

0x98a7,	// (0x0004787e) aid_levels_signal_lsc

0x98be,	// (0x00047895) signal_pane_stacon_g1_ParamLimits

0x98be,	// (0x00047895) signal_pane_stacon_g1

0x98d2,	// (0x000478a9) signal_pane_stacon_g2_ParamLimits

0x98d2,	// (0x000478a9) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0004d6e4) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0004d6e4) signal_pane_stacon_g

0x9907,	// (0x000478de) title_pane_stacon_t1_ParamLimits

0x9907,	// (0x000478de) title_pane_stacon_t1

0x4d5b,	// (0x00042d32) uni_indicator_pane_stacon_g1

0x4d65,	// (0x00042d3c) uni_indicator_pane_stacon_g2

0x4d47,	// (0x00042d1e) uni_indicator_pane_stacon_g3

0x4d51,	// (0x00042d28) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0004d6f0) uni_indicator_pane_stacon_g

0x992c,	// (0x00047903) control_top_pane_stacon_g1

0x9934,	// (0x0004790b) control_top_pane_stacon_t1_ParamLimits

0x9934,	// (0x0004790b) control_top_pane_stacon_t1

0x996b,	// (0x00047942) aid_levels_battery_lsc_ParamLimits

0x996b,	// (0x00047942) aid_levels_battery_lsc

0x9983,	// (0x0004795a) battery_pane_stacon_g1_ParamLimits

0x9983,	// (0x0004795a) battery_pane_stacon_g1

0x9996,	// (0x0004796d) battery_pane_stacon_g2_ParamLimits

0x9996,	// (0x0004796d) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0004d6f9) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0004d6f9) battery_pane_stacon_g

0x99d4,	// (0x000479ab) navi_icon_pane_stacon

0x99e8,	// (0x000479bf) navi_navi_pane_stacon

0x99d4,	// (0x000479ab) navi_text_pane_stacon

0x992c,	// (0x00047903) control_bottom_pane_stacon_g1

0x99fc,	// (0x000479d3) control_bottom_pane_stacon_t1_ParamLimits

0x99fc,	// (0x000479d3) control_bottom_pane_stacon_t1

0xb573,	// (0x0004954a) grid_app_pane_ParamLimits

0xb573,	// (0x0004954a) grid_app_pane

0xb597,	// (0x0004956e) scroll_pane_cp15_ParamLimits

0xb597,	// (0x0004956e) scroll_pane_cp15

0xb5ac,	// (0x00049583) cell_app_pane_ParamLimits

0xb5ac,	// (0x00049583) cell_app_pane

0xb5d0,	// (0x000495a7) cell_app_pane_g1_ParamLimits

0xb5d0,	// (0x000495a7) cell_app_pane_g1

0x4d89,	// (0x00042d60) cell_app_pane_g2_ParamLimits

0x4d89,	// (0x00042d60) cell_app_pane_g2

0x0001,

0xf727,	// (0x0004d6fe) cell_app_pane_g_ParamLimits

0xf727,	// (0x0004d6fe) cell_app_pane_g

0x4d95,	// (0x00042d6c) cell_app_pane_t1_ParamLimits

0x4d95,	// (0x00042d6c) cell_app_pane_t1

0x4da7,	// (0x00042d7e) grid_highlight_pane_ParamLimits

0x4da7,	// (0x00042d7e) grid_highlight_pane

0x4ad4,	// (0x00042aab) cell_highlight_pane_g1

0x4adc,	// (0x00042ab3) cell_highlight_pane_g2

0x4ae4,	// (0x00042abb) cell_highlight_pane_g3

0x4aec,	// (0x00042ac3) cell_highlight_pane_g4

0x4af4,	// (0x00042acb) cell_highlight_pane_g5

0x4afc,	// (0x00042ad3) cell_highlight_pane_g6

0x4b04,	// (0x00042adb) cell_highlight_pane_g7

0x4b0c,	// (0x00042ae3) cell_highlight_pane_g8

0x4b14,	// (0x00042aeb) cell_highlight_pane_g9

0x3b71,	// (0x00041b48) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0004d6ac) cell_highlight_pane_g

0x4db8,	// (0x00042d8f) bg_scroll_pane

0x9a46,	// (0x00047a1d) scroll_handle_pane

0x4dff,	// (0x00042dd6) scroll_bg_pane_g1

0x4e14,	// (0x00042deb) scroll_bg_pane_g2

0x4e2c,	// (0x00042e03) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0004d703) scroll_bg_pane_g

0x4e41,	// (0x00042e18) scroll_handle_focus_pane_ParamLimits

0x4e41,	// (0x00042e18) scroll_handle_focus_pane

0x4dff,	// (0x00042dd6) scroll_handle_pane_g1

0x4e4e,	// (0x00042e25) scroll_handle_pane_g2

0x4e2c,	// (0x00042e03) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0004d70a) scroll_handle_pane_g

0x4b25,	// (0x00042afc) bg_popup_sub_pane_cp21_ParamLimits

0x4b25,	// (0x00042afc) bg_popup_sub_pane_cp21

0x4e62,	// (0x00042e39) popup_fep_japan_predictive_window_t1_ParamLimits

0x4e62,	// (0x00042e39) popup_fep_japan_predictive_window_t1

0x4e7c,	// (0x00042e53) popup_fep_japan_predictive_window_t2_ParamLimits

0x4e7c,	// (0x00042e53) popup_fep_japan_predictive_window_t2

0x4eaf,	// (0x00042e86) popup_fep_japan_predictive_window_t3_ParamLimits

0x4eaf,	// (0x00042e86) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0004d711) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0004d711) popup_fep_japan_predictive_window_t

0x3b7b,	// (0x00041b52) bg_popup_sub_pane_cp23

0x4ee6,	// (0x00042ebd) listscroll_japin_cand_pane

0x4eee,	// (0x00042ec5) popup_fep_japan_candidate_window_t1

0x4efc,	// (0x00042ed3) candidate_pane_ParamLimits

0x4efc,	// (0x00042ed3) candidate_pane

0x4f0e,	// (0x00042ee5) scroll_pane_cp30

0x4f16,	// (0x00042eed) list_single_popup_jap_candidate_pane_ParamLimits

0x4f16,	// (0x00042eed) list_single_popup_jap_candidate_pane

0x3b7b,	// (0x00041b52) list_highlight_pane_cp30

0x4f2b,	// (0x00042f02) list_single_popup_jap_candidate_pane_t1

0x4f3a,	// (0x00042f11) level_1_signal

0x4f47,	// (0x00042f1e) level_2_signal

0x4f54,	// (0x00042f2b) level_3_signal

0x4f61,	// (0x00042f38) level_4_signal

0x4f6e,	// (0x00042f45) level_5_signal

0x4f7b,	// (0x00042f52) level_6_signal

0x4f88,	// (0x00042f5f) level_7_signal

0x4f3a,	// (0x00042f11) level_1_battery

0x4f47,	// (0x00042f1e) level_2_battery

0x4f54,	// (0x00042f2b) level_3_battery

0x4f61,	// (0x00042f38) level_4_battery

0x4f6e,	// (0x00042f45) level_5_battery

0x4f7b,	// (0x00042f52) level_6_battery

0x4f88,	// (0x00042f5f) level_7_battery

0x4fad,	// (0x00042f84) list_menu_pane_ParamLimits

0x4fad,	// (0x00042f84) list_menu_pane

0x4fbe,	// (0x00042f95) scroll_pane_cp25_ParamLimits

0x4fbe,	// (0x00042f95) scroll_pane_cp25

0x4fd7,	// (0x00042fae) list_double2_graphic_pane_cp2_ParamLimits

0x4fd7,	// (0x00042fae) list_double2_graphic_pane_cp2

0x4fd7,	// (0x00042fae) list_double2_large_graphic_pane_cp2_ParamLimits

0x4fd7,	// (0x00042fae) list_double2_large_graphic_pane_cp2

0x4fd7,	// (0x00042fae) list_double2_pane_cp2_ParamLimits

0x4fd7,	// (0x00042fae) list_double2_pane_cp2

0x4fd7,	// (0x00042fae) list_double_graphic_pane_cp2_ParamLimits

0x4fd7,	// (0x00042fae) list_double_graphic_pane_cp2

0x4fd7,	// (0x00042fae) list_double_large_graphic_pane_cp2_ParamLimits

0x4fd7,	// (0x00042fae) list_double_large_graphic_pane_cp2

0x4fd7,	// (0x00042fae) list_double_number_pane_cp2_ParamLimits

0x4fd7,	// (0x00042fae) list_double_number_pane_cp2

0x4fd7,	// (0x00042fae) list_double_pane_cp2_ParamLimits

0x4fd7,	// (0x00042fae) list_double_pane_cp2

0xb608,	// (0x000495df) list_single_2graphic_pane_cp2_ParamLimits

0xb608,	// (0x000495df) list_single_2graphic_pane_cp2

0xb608,	// (0x000495df) list_single_graphic_heading_pane_cp2_ParamLimits

0xb608,	// (0x000495df) list_single_graphic_heading_pane_cp2

0xb608,	// (0x000495df) list_single_graphic_pane_cp2_ParamLimits

0xb608,	// (0x000495df) list_single_graphic_pane_cp2

0xb608,	// (0x000495df) list_single_heading_pane_cp2_ParamLimits

0xb608,	// (0x000495df) list_single_heading_pane_cp2

0x4fe7,	// (0x00042fbe) list_single_large_graphic_pane_cp2_ParamLimits

0x4fe7,	// (0x00042fbe) list_single_large_graphic_pane_cp2

0xb608,	// (0x000495df) list_single_number_heading_pane_cp2_ParamLimits

0xb608,	// (0x000495df) list_single_number_heading_pane_cp2

0xb608,	// (0x000495df) list_single_number_pane_cp2_ParamLimits

0xb608,	// (0x000495df) list_single_number_pane_cp2

0xb608,	// (0x000495df) list_single_pane_cp2_ParamLimits

0xb608,	// (0x000495df) list_single_pane_cp2

0x5001,	// (0x00042fd8) bg_popup_sub_pane_cp22

0x9af8,	// (0x00047acf) popup_side_volume_key_window_g1

0x9b22,	// (0x00047af9) popup_side_volume_key_window_t1

0x9b3e,	// (0x00047b15) volume_small_pane_cp1

0x3bc9,	// (0x00041ba0) bg_popup_sub_pane_cp24_ParamLimits

0x3bc9,	// (0x00041ba0) bg_popup_sub_pane_cp24

0x5017,	// (0x00042fee) fep_china_uni_candidate_pane_ParamLimits

0x5017,	// (0x00042fee) fep_china_uni_candidate_pane

0x502b,	// (0x00043002) fep_china_uni_entry_pane

0x503b,	// (0x00043012) popup_fep_china_uni_window_g1

0x5057,	// (0x0004302e) fep_china_uni_entry_pane_g1

0x505f,	// (0x00043036) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0004d73e) fep_china_uni_entry_pane_g

0x5067,	// (0x0004303e) fep_entry_item_pane

0x5071,	// (0x00043048) fep_candidate_item_pane

0x5079,	// (0x00043050) fep_china_uni_candidate_pane_g1

0x5081,	// (0x00043058) fep_china_uni_candidate_pane_g2

0x5089,	// (0x00043060) fep_china_uni_candidate_pane_g3

0x5091,	// (0x00043068) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0004d743) fep_china_uni_candidate_pane_g

0x3b71,	// (0x00041b48) fep_entry_item_pane_g1

0x5099,	// (0x00043070) fep_entry_item_pane_t1_ParamLimits

0x5099,	// (0x00043070) fep_entry_item_pane_t1

0x50af,	// (0x00043086) fep_candidate_item_pane_t1_ParamLimits

0x50af,	// (0x00043086) fep_candidate_item_pane_t1

0x50c4,	// (0x0004309b) fep_candidate_item_pane_t2_ParamLimits

0x50c4,	// (0x0004309b) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0004d74c) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0004d74c) fep_candidate_item_pane_t

0x3bd7,	// (0x00041bae) list_highlight_pane_cp31_ParamLimits

0x3bd7,	// (0x00041bae) list_highlight_pane_cp31

0x50d6,	// (0x000430ad) level_1_signal_lsc

0x50df,	// (0x000430b6) level_2_signal_lsc

0x50e8,	// (0x000430bf) level_3_signal_lsc

0x50f1,	// (0x000430c8) level_4_signal_lsc

0x50fa,	// (0x000430d1) level_5_signal_lsc

0x5103,	// (0x000430da) level_6_signal_lsc

0x510c,	// (0x000430e3) level_7_signal_lsc

0x510c,	// (0x000430e3) level_1_battery_lsc

0x5115,	// (0x000430ec) level_2_battery_lsc

0x511e,	// (0x000430f5) level_3_battery_lsc

0x5127,	// (0x000430fe) level_4_battery_lsc

0x5130,	// (0x00043107) level_5_battery_lsc

0x5139,	// (0x00043110) level_6_battery_lsc

0x50d6,	// (0x000430ad) level_7_battery_lsc

0x5142,	// (0x00043119) scroll_handle_focus_pane_g1

0x514b,	// (0x00043122) scroll_handle_focus_pane_g2

0x5154,	// (0x0004312b) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0004d751) scroll_handle_focus_pane_g

0xb65d,	// (0x00049634) list_single_2graphic_pane_g1_ParamLimits

0xb65d,	// (0x00049634) list_single_2graphic_pane_g1

0xb303,	// (0x000492da) list_single_2graphic_pane_g2_ParamLimits

0xb303,	// (0x000492da) list_single_2graphic_pane_g2

0xb2e5,	// (0x000492bc) list_single_2graphic_pane_g3_ParamLimits

0xb2e5,	// (0x000492bc) list_single_2graphic_pane_g3

0xb669,	// (0x00049640) list_single_2graphic_pane_g4_ParamLimits

0xb669,	// (0x00049640) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0004d758) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0004d758) list_single_2graphic_pane_g

0xb675,	// (0x0004964c) list_single_2graphic_pane_t1_ParamLimits

0xb675,	// (0x0004964c) list_single_2graphic_pane_t1

0xb6a3,	// (0x0004967a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb6a3,	// (0x0004967a) list_double2_graphic_large_graphic_pane_g1

0x95af,	// (0x00047586) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x95af,	// (0x00047586) list_double2_graphic_large_graphic_pane_g2

0x94f4,	// (0x000474cb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x94f4,	// (0x000474cb) list_double2_graphic_large_graphic_pane_g3

0xb6b3,	// (0x0004968a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb6b3,	// (0x0004968a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0004d761) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0004d761) list_double2_graphic_large_graphic_pane_g

0xb6bf,	// (0x00049696) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb6bf,	// (0x00049696) list_double2_graphic_large_graphic_pane_t1

0xb6d5,	// (0x000496ac) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb6d5,	// (0x000496ac) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0004d76a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0004d76a) list_double2_graphic_large_graphic_pane_t

0x5215,	// (0x000431ec) popup_fast_swap_window_ParamLimits

0x5215,	// (0x000431ec) popup_fast_swap_window

0x5231,	// (0x00043208) popup_side_volume_key_window

0x524d,	// (0x00043224) stacon_top_pane

0x5257,	// (0x0004322e) status_pane_ParamLimits

0x5257,	// (0x0004322e) status_pane

0x524d,	// (0x00043224) status_small_pane

0x3b7b,	// (0x00041b52) control_pane

0x3b7b,	// (0x00041b52) stacon_bottom_pane

0x4a50,	// (0x00042a27) scroll_pane_cp121

0x4a47,	// (0x00042a1e) set_content_pane

0xb6e7,	// (0x000496be) bg_active_tab_pane_g1_cp1

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp1

0xb6f0,	// (0x000496c7) bg_active_tab_pane_g3_cp1

0xb6e7,	// (0x000496be) bg_passive_tab_pane_g1_cp1

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp1

0xb6f0,	// (0x000496c7) bg_passive_tab_pane_g3_cp1

0x516f,	// (0x00043146) bg_active_tab_pane_g1_cp2

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp2

0x515d,	// (0x00043134) bg_active_tab_pane_g3_cp2

0x516f,	// (0x00043146) bg_passive_tab_pane_g1_cp2

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp2

0x515d,	// (0x00043134) bg_passive_tab_pane_g3_cp2

0xb6f9,	// (0x000496d0) bg_active_tab_pane_g1_cp3

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp3

0xb702,	// (0x000496d9) bg_active_tab_pane_g3_cp3

0xb6f9,	// (0x000496d0) bg_passive_tab_pane_g1_cp3

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp3

0xb702,	// (0x000496d9) bg_passive_tab_pane_g3_cp3

0xb70b,	// (0x000496e2) bg_active_tab_pane_g1_cp4

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp4

0xb716,	// (0x000496ed) bg_active_tab_pane_g3_cp4

0xb70b,	// (0x000496e2) bg_passive_tab_pane_g1_cp4

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp4

0xb716,	// (0x000496ed) bg_passive_tab_pane_g3_cp4

0x51bf,	// (0x00043196) bg_active_tab_pane_g1_cp5

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp5

0x51b6,	// (0x0004318d) bg_active_tab_pane_g3_cp5

0x51bf,	// (0x00043196) bg_passive_tab_pane_g1_cp5

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp5

0x51b6,	// (0x0004318d) bg_passive_tab_pane_g3_cp5

0xb721,	// (0x000496f8) list_set_graphic_pane_ParamLimits

0xb721,	// (0x000496f8) list_set_graphic_pane

0x3b7b,	// (0x00041b52) bg_set_opt_pane_cp4

0xb73e,	// (0x00049715) list_set_graphic_pane_g1_ParamLimits

0xb73e,	// (0x00049715) list_set_graphic_pane_g1

0xb74a,	// (0x00049721) list_set_graphic_pane_g2_ParamLimits

0xb74a,	// (0x00049721) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0004d76f) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0004d76f) list_set_graphic_pane_g

0x0009,

0xfaee,	// (0x0004dac5) volume_small_pane_cp_g

0x51c8,	// (0x0004319f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x51c8,	// (0x0004319f) list_double2_large_graphic_pane_g1_cp2

0x51d4,	// (0x000431ab) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x51d4,	// (0x000431ab) list_double2_large_graphic_pane_g2_cp2

0x51e5,	// (0x000431bc) list_double2_large_graphic_pane_g3_cp2

0x51ed,	// (0x000431c4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x51ed,	// (0x000431c4) list_double2_large_graphic_pane_t1_cp2

0x5203,	// (0x000431da) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5203,	// (0x000431da) list_double2_large_graphic_pane_t2_cp2

0x6930,	// (0x00044907) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6930,	// (0x00044907) list_double_large_graphic_pane_g1_cp2

0x6941,	// (0x00044918) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6941,	// (0x00044918) list_double_large_graphic_pane_g2_cp2

0x5373,	// (0x0004334a) list_double_large_graphic_pane_g3_cp2

0x6952,	// (0x00044929) list_double_large_graphic_pane_g4_cp

0x695a,	// (0x00044931) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x695a,	// (0x00044931) list_double_large_graphic_pane_t1_cp2

0x6971,	// (0x00044948) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6971,	// (0x00044948) list_double_large_graphic_pane_t2_cp2

0x5265,	// (0x0004323c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5265,	// (0x0004323c) list_double2_graphic_pane_g1_cp2

0x5273,	// (0x0004324a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5273,	// (0x0004324a) list_double2_graphic_pane_g2_cp2

0x5284,	// (0x0004325b) list_double2_graphic_pane_g3_cp2

0x528e,	// (0x00043265) list_double2_graphic_pane_t1_cp2_ParamLimits

0x528e,	// (0x00043265) list_double2_graphic_pane_t1_cp2

0x52a4,	// (0x0004327b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x52a4,	// (0x0004327b) list_double2_graphic_pane_t2_cp2

0x52b6,	// (0x0004328d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x52b6,	// (0x0004328d) list_single_number_heading_pane_g1_cp2

0x52c2,	// (0x00043299) list_single_number_heading_pane_g2_cp2

0x52ca,	// (0x000432a1) list_single_number_heading_pane_t1_cp2_ParamLimits

0x52ca,	// (0x000432a1) list_single_number_heading_pane_t1_cp2

0x52e0,	// (0x000432b7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x52e0,	// (0x000432b7) list_single_number_heading_pane_t2_cp2

0x52f2,	// (0x000432c9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x52f2,	// (0x000432c9) list_single_number_heading_pane_t3_cp2

0x52b6,	// (0x0004328d) list_single_heading_pane_g1_cp2_ParamLimits

0x52b6,	// (0x0004328d) list_single_heading_pane_g1_cp2

0x52c2,	// (0x00043299) list_single_heading_pane_g2_cp2

0x52ca,	// (0x000432a1) list_single_heading_pane_t1_cp2_ParamLimits

0x52ca,	// (0x000432a1) list_single_heading_pane_t1_cp2

0x6738,	// (0x0004470f) list_single_heading_pane_t2_cp2_ParamLimits

0x6738,	// (0x0004470f) list_single_heading_pane_t2_cp2

0x669e,	// (0x00044675) list_double_graphic_pane_g1_cp2_ParamLimits

0x669e,	// (0x00044675) list_double_graphic_pane_g1_cp2

0x66aa,	// (0x00044681) list_double_graphic_pane_g2_cp2_ParamLimits

0x66aa,	// (0x00044681) list_double_graphic_pane_g2_cp2

0x66b9,	// (0x00044690) list_double_graphic_pane_g3_cp2

0x66c1,	// (0x00044698) list_double_graphic_pane_t1_cp2_ParamLimits

0x66c1,	// (0x00044698) list_double_graphic_pane_t1_cp2

0x66d7,	// (0x000446ae) list_double_graphic_pane_t2_cp2_ParamLimits

0x66d7,	// (0x000446ae) list_double_graphic_pane_t2_cp2

0x5367,	// (0x0004333e) list_double_number_pane_g1_cp2_ParamLimits

0x5367,	// (0x0004333e) list_double_number_pane_g1_cp2

0x5373,	// (0x0004334a) list_double_number_pane_g2_cp2

0x6662,	// (0x00044639) list_double_number_pane_t1_cp2_ParamLimits

0x6662,	// (0x00044639) list_double_number_pane_t1_cp2

0x6676,	// (0x0004464d) list_double_number_pane_t2_cp2_ParamLimits

0x6676,	// (0x0004464d) list_double_number_pane_t2_cp2

0x668c,	// (0x00044663) list_double_number_pane_t3_cp2_ParamLimits

0x668c,	// (0x00044663) list_double_number_pane_t3_cp2

0x65bb,	// (0x00044592) list_single_graphic_pane_g1_cp2_ParamLimits

0x65bb,	// (0x00044592) list_single_graphic_pane_g1_cp2

0x53cb,	// (0x000433a2) list_single_graphic_pane_g2_cp2_ParamLimits

0x53cb,	// (0x000433a2) list_single_graphic_pane_g2_cp2

0x53d7,	// (0x000433ae) list_single_graphic_pane_g3_cp2

0x6591,	// (0x00044568) list_single_graphic_pane_t1_cp2_ParamLimits

0x6591,	// (0x00044568) list_single_graphic_pane_t1_cp2

0x53cb,	// (0x000433a2) list_single_number_pane_g1_cp2_ParamLimits

0x53cb,	// (0x000433a2) list_single_number_pane_g1_cp2

0x53d7,	// (0x000433ae) list_single_number_pane_g2_cp2

0x6591,	// (0x00044568) list_single_number_pane_t1_cp2_ParamLimits

0x6591,	// (0x00044568) list_single_number_pane_t1_cp2

0x65a7,	// (0x0004457e) list_single_number_pane_t2_cp2_ParamLimits

0x65a7,	// (0x0004457e) list_single_number_pane_t2_cp2

0x51d4,	// (0x000431ab) list_double2_pane_g1_cp2_ParamLimits

0x51d4,	// (0x000431ab) list_double2_pane_g1_cp2

0x51e5,	// (0x000431bc) list_double2_pane_g2_cp2

0x533f,	// (0x00043316) list_double2_pane_t1_cp2_ParamLimits

0x533f,	// (0x00043316) list_double2_pane_t1_cp2

0x5355,	// (0x0004332c) list_double2_pane_t2_cp2_ParamLimits

0x5355,	// (0x0004332c) list_double2_pane_t2_cp2

0x5367,	// (0x0004333e) list_double_pane_g1_cp2_ParamLimits

0x5367,	// (0x0004333e) list_double_pane_g1_cp2

0x5373,	// (0x0004334a) list_double_pane_g2_cp2

0x537b,	// (0x00043352) list_double_pane_t1_cp2_ParamLimits

0x537b,	// (0x00043352) list_double_pane_t1_cp2

0x5391,	// (0x00043368) list_double_pane_t2_cp2_ParamLimits

0x5391,	// (0x00043368) list_double_pane_t2_cp2

0x53bb,	// (0x00043392) list_single_pane_cp2_g3

0x53cb,	// (0x000433a2) list_single_pane_g1_cp2_ParamLimits

0x53cb,	// (0x000433a2) list_single_pane_g1_cp2

0x53d7,	// (0x000433ae) list_single_pane_g2_cp2

0x53df,	// (0x000433b6) list_single_pane_t1_cp2_ParamLimits

0x53df,	// (0x000433b6) list_single_pane_t1_cp2

0x53f7,	// (0x000433ce) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x53f7,	// (0x000433ce) list_single_large_graphic_pane_g1_cp2

0x5403,	// (0x000433da) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5403,	// (0x000433da) list_single_large_graphic_pane_g2_cp2

0x540f,	// (0x000433e6) list_single_large_graphic_pane_g3_cp2

0x5417,	// (0x000433ee) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5417,	// (0x000433ee) list_single_large_graphic_pane_g4_cp1

0x5431,	// (0x00043408) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5431,	// (0x00043408) list_single_large_graphic_pane_t1_cp2

0x655d,	// (0x00044534) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x655d,	// (0x00044534) list_single_graphic_heading_pane_g1_cp2

0x652a,	// (0x00044501) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x652a,	// (0x00044501) list_single_graphic_heading_pane_g4_cp2

0x53d7,	// (0x000433ae) list_single_graphic_heading_pane_g5_cp2

0x6569,	// (0x00044540) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6569,	// (0x00044540) list_single_graphic_heading_pane_t1_cp2

0x657f,	// (0x00044556) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x657f,	// (0x00044556) list_single_graphic_heading_pane_t2_cp2

0x651e,	// (0x000444f5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x651e,	// (0x000444f5) list_single_2graphic_pane_g1_cp2

0x652a,	// (0x00044501) list_single_2graphic_pane_g2_cp2_ParamLimits

0x652a,	// (0x00044501) list_single_2graphic_pane_g2_cp2

0x53d7,	// (0x000433ae) list_single_2graphic_pane_g3_cp2

0x653b,	// (0x00044512) list_single_2graphic_pane_g4_cp2_ParamLimits

0x653b,	// (0x00044512) list_single_2graphic_pane_g4_cp2

0x6547,	// (0x0004451e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6547,	// (0x0004451e) list_single_2graphic_pane_t1_cp2

0x3b71,	// (0x00041b48) list_highlight_pane_g10_cp1

0x6114,	// (0x000440eb) list_highlight_pane_g1_cp1

0x611c,	// (0x000440f3) list_highlight_pane_g2_cp1

0x6124,	// (0x000440fb) list_highlight_pane_g3_cp1

0x612c,	// (0x00044103) list_highlight_pane_g4_cp1

0x6134,	// (0x0004410b) list_highlight_pane_g5_cp1

0x613c,	// (0x00044113) list_highlight_pane_g6_cp1

0x6144,	// (0x0004411b) list_highlight_pane_g7_cp1

0x614c,	// (0x00044123) list_highlight_pane_g8_cp1

0x6154,	// (0x0004412b) list_highlight_pane_g9_cp1

0xc91f,	// (0x0004a8f6) form_field_slider_pane_t3

0xc92d,	// (0x0004a904) form_field_slider_pane_t4

0x6050,	// (0x00044027) slider_form_pane_ParamLimits

0x6050,	// (0x00044027) slider_form_pane

0x3b7b,	// (0x00041b52) control_abbreviations

0x3b7b,	// (0x00041b52) control_conventions

0x3b7b,	// (0x00041b52) control_definitions

0x3b7b,	// (0x00041b52) format_table_attribute

0x6782,	// (0x00044759) bg_popup_preview_window_pane_g9

0x3b7b,	// (0x00041b52) format_table_data2

0x3b7b,	// (0x00041b52) format_table_data3

0x3b7b,	// (0x00041b52) format_table_data_example

0x0008,

0x3b7b,	// (0x00041b52) intro_purpose

0xf92d,	// (0x0004d904) bg_popup_preview_window_pane_g

0x3b7b,	// (0x00041b52) texts_category

0x3b7b,	// (0x00041b52) texts_graphics

0x5447,	// (0x0004341e) text_digital

0x5456,	// (0x0004342d) text_primary

0x5465,	// (0x0004343c) text_primary_small

0x5474,	// (0x0004344b) text_secondary

0x5483,	// (0x0004345a) text_title

0x6c26,	// (0x00044bfd) bg_passive_tab_pane_g1_cp3_srt

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp3_srt

0x6c1d,	// (0x00044bf4) bg_passive_tab_pane_g3_cp3_srt

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp3_srt_ParamLimits

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp3_srt

0x6c2f,	// (0x00044c06) tabs_4_active_pane_srt_g1

0xcc76,	// (0x0004ac4d) tabs_4_active_pane_srt_t1_ParamLimits

0xcc76,	// (0x0004ac4d) tabs_4_active_pane_srt_t1

0x6c26,	// (0x00044bfd) bg_active_tab_pane_g1_cp3_copy1

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp3_copy1

0x6c1d,	// (0x00044bf4) bg_active_tab_pane_g3_cp3_copy1

0x3bd7,	// (0x00041bae) tabs_2_long_active_pane_srt_ParamLimits

0x3bd7,	// (0x00041bae) tabs_2_long_active_pane_srt

0x3bd7,	// (0x00041bae) tabs_2_long_passive_pane_srt_ParamLimits

0x3bd7,	// (0x00041bae) tabs_2_long_passive_pane_srt

0xb555,	// (0x0004952c) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb555,	// (0x0004952c) bg_passive_tab_pane_cp4_srt

0x6b40,	// (0x00044b17) bg_passive_tab_pane_g1_cp4_srt

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp4_srt

0x6b37,	// (0x00044b0e) bg_passive_tab_pane_g3_cp4_srt

0x5b69,	// (0x00043b40) bg_active_tab_pane_cp4_srt_ParamLimits

0x5b69,	// (0x00043b40) bg_active_tab_pane_cp4_srt

0xca9a,	// (0x0004aa71) tabs_2_long_active_pane_srt_t1_ParamLimits

0xca9a,	// (0x0004aa71) tabs_2_long_active_pane_srt_t1

0x6b40,	// (0x00044b17) bg_active_tab_pane_g1_cp4_srt

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp4_srt

0x6b37,	// (0x00044b0e) bg_active_tab_pane_g3_cp4_srt

0x3bc9,	// (0x00041ba0) tabs_3_long_active_pane_srt_ParamLimits

0x3bc9,	// (0x00041ba0) tabs_3_long_active_pane_srt

0x3bc9,	// (0x00041ba0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3bc9,	// (0x00041ba0) tabs_3_long_passive_pane_cp_srt

0x3bc9,	// (0x00041ba0) tabs_3_long_passive_pane_srt_ParamLimits

0x3bc9,	// (0x00041ba0) tabs_3_long_passive_pane_srt

0xb555,	// (0x0004952c) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb555,	// (0x0004952c) bg_passive_tab_pane_cp5_srt

0x51bf,	// (0x00043196) bg_passive_tab_pane_g1_cp5_srt

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp5_srt

0x51b6,	// (0x0004318d) bg_passive_tab_pane_g3_cp5_srt

0x5b69,	// (0x00043b40) bg_active_tab_pane_cp5_srt_ParamLimits

0x5b69,	// (0x00043b40) bg_active_tab_pane_cp5_srt

0xca88,	// (0x0004aa5f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xca88,	// (0x0004aa5f) tabs_3_long_active_pane_srt_t1

0x51bf,	// (0x00043196) bg_active_tab_pane_g1_cp5_srt

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp5_srt

0x51b6,	// (0x0004318d) bg_active_tab_pane_g3_cp5_srt

0x6b29,	// (0x00044b00) navi_text_pane_srt_t1

0x6b21,	// (0x00044af8) navi_icon_pane_srt_g1

0x5589,	// (0x00043560) midp_editing_number_pane_srt

0x5492,	// (0x00043469) midp_ticker_pane_srt

0x5591,	// (0x00043568) midp_ticker_pane_srt_g1

0x5599,	// (0x00043570) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0004d78e) midp_ticker_pane_srt_g

0x55a1,	// (0x00043578) midp_ticker_pane_srt_t1

0x6b12,	// (0x00044ae9) midp_editing_number_pane_t1_copy1

0xb76e,	// (0x00049745) listscroll_midp_pane

0xb76e,	// (0x00049745) midp_form_pane

0x549a,	// (0x00043471) midp_info_popup_window_ParamLimits

0x549a,	// (0x00043471) midp_info_popup_window

0x4b25,	// (0x00042afc) bg_popup_sub_pane_cp50_ParamLimits

0x4b25,	// (0x00042afc) bg_popup_sub_pane_cp50

0x5d99,	// (0x00043d70) listscroll_midp_info_pane_ParamLimits

0x5d99,	// (0x00043d70) listscroll_midp_info_pane

0x5d81,	// (0x00043d58) listscroll_form_midp_pane_ParamLimits

0x5d81,	// (0x00043d58) listscroll_form_midp_pane

0x5d8d,	// (0x00043d64) scroll_bar_cp050

0xc907,	// (0x0004a8de) list_midp_pane

0x74a1,	// (0x00045478) signal_pane_g2_cp

0x5cb3,	// (0x00043c8a) listscroll_midp_info_pane_t1_ParamLimits

0x5cb3,	// (0x00043c8a) listscroll_midp_info_pane_t1

0x5ccb,	// (0x00043ca2) listscroll_midp_info_pane_t2_ParamLimits

0x5ccb,	// (0x00043ca2) listscroll_midp_info_pane_t2

0x5d09,	// (0x00043ce0) listscroll_midp_info_pane_t3_ParamLimits

0x5d09,	// (0x00043ce0) listscroll_midp_info_pane_t3

0x5d43,	// (0x00043d1a) listscroll_midp_info_pane_t4_ParamLimits

0x5d43,	// (0x00043d1a) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0004d83f) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0004d83f) listscroll_midp_info_pane_t

0x4b8c,	// (0x00042b63) scroll_pane_cp21

0x5c51,	// (0x00043c28) form_midp_field_choice_group_pane

0x5c5a,	// (0x00043c31) form_midp_field_text_pane

0x5c99,	// (0x00043c70) form_midp_field_time_pane

0x5ca1,	// (0x00043c78) form_midp_gauge_slider_pane

0x5caa,	// (0x00043c81) form_midp_gauge_wait_pane

0x3b7b,	// (0x00041b52) form_midp_image_pane

0xbcae,	// (0x00049c85) list_single_midp_pane_ParamLimits

0xbcae,	// (0x00049c85) list_single_midp_pane

0xc775,	// (0x0004a74c) form_midp_field_text_pane_t1

0x5ad4,	// (0x00043aab) input_focus_pane_cp050

0x5c40,	// (0x00043c17) list_midp_form_text_pane

0x5c0f,	// (0x00043be6) form_midp_field_choice_group_pane_t1

0x5c1d,	// (0x00043bf4) input_focus_pane_cp051

0x5c31,	// (0x00043c08) list_midp_choice_pane

0x3b7b,	// (0x00041b52) status_idle_pane

0x5bf3,	// (0x00043bca) form_midp_field_time_pane_t1

0x3b71,	// (0x00041b48) wait_anim_pane_g2_copy1

0x5c01,	// (0x00043bd8) form_midp_field_time_pane_t2

0x0001,

0x54f3,	// (0x000434ca) aid_navinavi_width_2_pane

0xf863,	// (0x0004d83a) form_midp_field_time_pane_t

0x3b7b,	// (0x00041b52) input_focus_pane_cp052

0x3b7b,	// (0x00041b52) bg_input_focus_pane_cp040

0x5bcf,	// (0x00043ba6) form_midp_gauge_slider_pane_t1

0x5bdd,	// (0x00043bb4) form_midp_gauge_slider_pane_t2

0xc759,	// (0x0004a730) form_midp_gauge_slider_pane_t3

0xc767,	// (0x0004a73e) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0004d831) form_midp_gauge_slider_pane_t

0x5beb,	// (0x00043bc2) form_midp_slider_pane

0x3bd7,	// (0x00041bae) bg_input_focus_pane_cp041_ParamLimits

0x3bd7,	// (0x00041bae) bg_input_focus_pane_cp041

0x5b9c,	// (0x00043b73) form_midp_gauge_wait_pane_t1_ParamLimits

0x5b9c,	// (0x00043b73) form_midp_gauge_wait_pane_t1

0x5bae,	// (0x00043b85) form_midp_gauge_wait_pane_t2_ParamLimits

0x5bae,	// (0x00043b85) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0004d82c) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0004d82c) form_midp_gauge_wait_pane_t

0x5bc0,	// (0x00043b97) form_midp_wait_pane_ParamLimits

0x5bc0,	// (0x00043b97) form_midp_wait_pane

0x5b42,	// (0x00043b19) form_midp_image_pane_g1

0x5b4b,	// (0x00043b22) form_midp_image_pane_t1

0x5b5a,	// (0x00043b31) form_midp_image_pane_t2

0x5b8d,	// (0x00043b64) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0004d825) form_midp_image_pane_t

0x5b39,	// (0x00043b10) list_single_midp_pane_g1

0xbc9f,	// (0x00049c76) list_single_midp_pane_t1

0xc731,	// (0x0004a708) list_midp_form_item_pane_ParamLimits

0xc731,	// (0x0004a708) list_midp_form_item_pane

0x54ad,	// (0x00043484) list_midp_form_item_pane_t1

0x54bc,	// (0x00043493) midp_ticker_pane_g1

0x54c8,	// (0x0004349f) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0004d774) midp_ticker_pane_g

0xb81f,	// (0x000497f6) midp_ticker_pane_t1

0xcc11,	// (0x0004abe8) midp_editing_number_pane_t1

0x6bb2,	// (0x00044b89) midp_editing_number_pane

0x6bc1,	// (0x00044b98) midp_ticker_pane

0x6b02,	// (0x00044ad9) ai_message_heading_pane

0x3b7b,	// (0x00041b52) bg_popup_window_pane_cp14

0x6b0a,	// (0x00044ae1) listscroll_ai_message_pane

0x6a8c,	// (0x00044a63) ai_message_heading_pane_g1_ParamLimits

0x6a8c,	// (0x00044a63) ai_message_heading_pane_g1

0x6a98,	// (0x00044a6f) ai_message_heading_pane_g2_ParamLimits

0x6a98,	// (0x00044a6f) ai_message_heading_pane_g2

0x6aa4,	// (0x00044a7b) ai_message_heading_pane_g3_ParamLimits

0x6aa4,	// (0x00044a7b) ai_message_heading_pane_g3

0x6ab0,	// (0x00044a87) ai_message_heading_pane_g4_ParamLimits

0x6ab0,	// (0x00044a87) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0004d966) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0004d966) ai_message_heading_pane_g

0x6abc,	// (0x00044a93) ai_message_heading_pane_t1_ParamLimits

0x6abc,	// (0x00044a93) ai_message_heading_pane_t1

0x6ad6,	// (0x00044aad) ai_message_heading_pane_t2_ParamLimits

0x6ad6,	// (0x00044aad) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0004d96f) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0004d96f) ai_message_heading_pane_t

0x6ae8,	// (0x00044abf) bg_popup_heading_pane_cp1_ParamLimits

0x6ae8,	// (0x00044abf) bg_popup_heading_pane_cp1

0x6a7a,	// (0x00044a51) list_ai_message_pane_ParamLimits

0x6a7a,	// (0x00044a51) list_ai_message_pane

0x4b8c,	// (0x00042b63) scroll_pane_cp10

0x6a16,	// (0x000449ed) list_ai_message_pane_g1

0x6a1e,	// (0x000449f5) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0004d943) list_ai_message_pane_g

0x6a26,	// (0x000449fd) list_ai_message_pane_t1_ParamLimits

0x6a26,	// (0x000449fd) list_ai_message_pane_t1

0x6a3b,	// (0x00044a12) list_ai_message_pane_t2_ParamLimits

0x6a3b,	// (0x00044a12) list_ai_message_pane_t2

0x6a50,	// (0x00044a27) list_ai_message_pane_t3_ParamLimits

0x6a50,	// (0x00044a27) list_ai_message_pane_t3

0x6a65,	// (0x00044a3c) list_ai_message_pane_t4_ParamLimits

0x6a65,	// (0x00044a3c) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0004d948) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0004d948) list_ai_message_pane_t

0xca73,	// (0x0004aa4a) cell_ai_soft_ind_pane_ParamLimits

0xca73,	// (0x0004aa4a) cell_ai_soft_ind_pane

0x54d4,	// (0x000434ab) cell_ai_soft_ind_pane_g1_ParamLimits

0x54d4,	// (0x000434ab) cell_ai_soft_ind_pane_g1

0x3b7b,	// (0x00041b52) grid_highlight_cp1

0x54e1,	// (0x000434b8) text_secondary_cp56_ParamLimits

0x54e1,	// (0x000434b8) text_secondary_cp56

0x69eb,	// (0x000449c2) example_general_pane_ParamLimits

0x69eb,	// (0x000449c2) example_general_pane

0x69f7,	// (0x000449ce) example_parent_pane_g1_ParamLimits

0x69f7,	// (0x000449ce) example_parent_pane_g1

0x6a03,	// (0x000449da) example_parent_pane_t1_ParamLimits

0x6a03,	// (0x000449da) example_parent_pane_t1

0xbb81,	// (0x00049b58) popup_preview_text_window_ParamLimits

0xbb81,	// (0x00049b58) popup_preview_text_window

0x53c3,	// (0x0004339a) list_single_pane_cp2_g4

0x4647,	// (0x0004261e) bg_popup_preview_window_pane_ParamLimits

0x4647,	// (0x0004261e) bg_popup_preview_window_pane

0x678a,	// (0x00044761) popup_preview_text_window_t1_ParamLimits

0x678a,	// (0x00044761) popup_preview_text_window_t1

0x67a8,	// (0x0004477f) popup_preview_text_window_t2_ParamLimits

0x67a8,	// (0x0004477f) popup_preview_text_window_t2

0x67f1,	// (0x000447c8) popup_preview_text_window_t3_ParamLimits

0x67f1,	// (0x000447c8) popup_preview_text_window_t3

0x6836,	// (0x0004480d) popup_preview_text_window_t4_ParamLimits

0x6836,	// (0x0004480d) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0004d917) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0004d917) popup_preview_text_window_t

0x68b4,	// (0x0004488b) scroll_pane_cp11

0x59d8,	// (0x000439af) bg_popup_preview_window_pane_g1

0x674a,	// (0x00044721) bg_popup_preview_window_pane_g2

0x6752,	// (0x00044729) bg_popup_preview_window_pane_g3

0x675a,	// (0x00044731) bg_popup_preview_window_pane_g4

0x6762,	// (0x00044739) bg_popup_preview_window_pane_g5

0x676a,	// (0x00044741) bg_popup_preview_window_pane_g6

0x6772,	// (0x00044749) bg_popup_preview_window_pane_g7

0x677a,	// (0x00044751) bg_popup_preview_window_pane_g8

0x8e87,	// (0x00046e5e) aid_popup_width_pane

0xbb5f,	// (0x00049b36) popup_midp_note_alarm_window_ParamLimits

0xbb5f,	// (0x00049b36) popup_midp_note_alarm_window

0x4a61,	// (0x00042a38) data_form_pane_ParamLimits

0x9879,	// (0x00047850) form_field_data_pane_g1

0x9883,	// (0x0004785a) form_field_data_pane_t1_ParamLimits

0x4a6d,	// (0x00042a44) input_focus_pane_ParamLimits

0x4a7b,	// (0x00042a52) data_form_wide_pane_ParamLimits

0x989b,	// (0x00047872) form_field_data_wide_pane_g1

0xb355,	// (0x0004932c) form_field_data_wide_pane_t1_ParamLimits

0x47e8,	// (0x000427bf) input_focus_pane_cp6_ParamLimits

0xb51c,	// (0x000494f3) input_popup_find_pane_g1_ParamLimits

0xb51c,	// (0x000494f3) input_popup_find_pane_g1

0x99a7,	// (0x0004797e) aid_navi_side_left_pane

0x99bc,	// (0x00047993) aid_navi_side_right_pane

0x61f1,	// (0x000441c8) bg_popup_window_pane_cp30_ParamLimits

0x61f1,	// (0x000441c8) bg_popup_window_pane_cp30

0x626b,	// (0x00044242) popup_midp_note_alarm_window_g1_ParamLimits

0x626b,	// (0x00044242) popup_midp_note_alarm_window_g1

0x629b,	// (0x00044272) popup_midp_note_alarm_window_t1_ParamLimits

0x629b,	// (0x00044272) popup_midp_note_alarm_window_t1

0x633c,	// (0x00044313) popup_midp_note_alarm_window_t2_ParamLimits

0x633c,	// (0x00044313) popup_midp_note_alarm_window_t2

0x63ea,	// (0x000443c1) popup_midp_note_alarm_window_t3_ParamLimits

0x63ea,	// (0x000443c1) popup_midp_note_alarm_window_t3

0x641c,	// (0x000443f3) popup_midp_note_alarm_window_t4_ParamLimits

0x641c,	// (0x000443f3) popup_midp_note_alarm_window_t4

0x6442,	// (0x00044419) popup_midp_note_alarm_window_t5_ParamLimits

0x6442,	// (0x00044419) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0004d8b4) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0004d8b4) popup_midp_note_alarm_window_t

0x64ee,	// (0x000444c5) wait_bar_pane_cp1_ParamLimits

0x64ee,	// (0x000444c5) wait_bar_pane_cp1

0x3b7b,	// (0x00041b52) wait_anim_pane_copy1

0x3b7b,	// (0x00041b52) wait_border_pane_copy1

0x5f11,	// (0x00043ee8) wait_border_pane_g1_copy1

0xb36f,	// (0x00049346) form_field_popup_pane_g1

0xb377,	// (0x0004934e) form_field_popup_pane_t1_ParamLimits

0x4a6d,	// (0x00042a44) input_focus_pane_cp7_ParamLimits

0x4aa7,	// (0x00042a7e) list_form_pane_ParamLimits

0xb38f,	// (0x00049366) form_field_popup_wide_pane_g1

0xb397,	// (0x0004936e) form_field_popup_wide_pane_t1_ParamLimits

0x4a6d,	// (0x00042a44) input_focus_pane_cp8_ParamLimits

0x4ab3,	// (0x00042a8a) list_form_wide_pane_ParamLimits

0x6c56,	// (0x00044c2d) aid_size_cell_graphic_pane

0xb421,	// (0x000493f8) data_form_pane_t1_ParamLimits

0xbd01,	// (0x00049cd8) data_form_wide_pane_t1_ParamLimits

0xc436,	// (0x0004a40d) bg_status_flat_pane

0xb014,	// (0x00048feb) title_pane_t1_ParamLimits

0x3b91,	// (0x00041b68) title_pane_t2_ParamLimits

0x3bb7,	// (0x00041b8e) title_pane_t3_ParamLimits

0xf59b,	// (0x0004d572) title_pane_t_ParamLimits

0x4f3a,	// (0x00042f11) level_1_signal_ParamLimits

0x4f47,	// (0x00042f1e) level_2_signal_ParamLimits

0x4f54,	// (0x00042f2b) level_3_signal_ParamLimits

0x4f61,	// (0x00042f38) level_4_signal_ParamLimits

0x4f6e,	// (0x00042f45) level_5_signal_ParamLimits

0x4f7b,	// (0x00042f52) level_6_signal_ParamLimits

0x4f88,	// (0x00042f5f) level_7_signal_ParamLimits

0x4f3a,	// (0x00042f11) level_1_battery_ParamLimits

0x4f47,	// (0x00042f1e) level_2_battery_ParamLimits

0x4f54,	// (0x00042f2b) level_3_battery_ParamLimits

0x4f61,	// (0x00042f38) level_4_battery_ParamLimits

0x4f6e,	// (0x00042f45) level_5_battery_ParamLimits

0x4f7b,	// (0x00042f52) level_6_battery_ParamLimits

0x4f88,	// (0x00042f5f) level_7_battery_ParamLimits

0x6114,	// (0x000440eb) bg_status_flat_pane_g1

0x611c,	// (0x000440f3) bg_status_flat_pane_g2

0x6124,	// (0x000440fb) bg_status_flat_pane_g3

0x612c,	// (0x00044103) bg_status_flat_pane_g4

0x6134,	// (0x0004410b) bg_status_flat_pane_g5

0x613c,	// (0x00044113) bg_status_flat_pane_g6

0x6144,	// (0x0004411b) bg_status_flat_pane_g7

0xb084,	// (0x0004905b) tabs_3_active_pane_t1_ParamLimits

0xb084,	// (0x0004905b) tabs_3_passive_pane_t1_ParamLimits

0xb09e,	// (0x00049075) tabs_4_active_pane_t1_ParamLimits

0xb09e,	// (0x00049075) tabs_4_1_passive_pane_t1_ParamLimits

0xb530,	// (0x00049507) tabs_2_active_pane_t1_ParamLimits

0xb530,	// (0x00049507) tabs_2_passive_pane_t1_ParamLimits

0x5b69,	// (0x00043b40) bg_active_tab_pane_cp4_ParamLimits

0xb542,	// (0x00049519) tabs_2_long_active_pane_t1_ParamLimits

0xb555,	// (0x0004952c) bg_passive_tab_pane_cp4_ParamLimits

0x9f0d,	// (0x00047ee4) list_single_midp_graphic_pane_t1_ParamLimits

0x5b69,	// (0x00043b40) bg_active_tab_pane_cp5_ParamLimits

0xb561,	// (0x00049538) tabs_3_long_active_pane_t1_ParamLimits

0xb555,	// (0x0004952c) bg_passive_tab_pane_cp5_ParamLimits

0x9f0d,	// (0x00047ee4) list_single_midp_graphic_pane_t1

0xc436,	// (0x0004a40d) bg_status_flat_pane_ParamLimits

0x58a9,	// (0x00043880) indicator_pane_cp2_ParamLimits

0x58a9,	// (0x00043880) indicator_pane_cp2

0xc579,	// (0x0004a550) navi_pane_srt_ParamLimits

0xc579,	// (0x0004a550) navi_pane_srt

0x58d1,	// (0x000438a8) popup_clock_digital_analogue_window_cp1

0x40d7,	// (0x000420ae) indicator_pane_t1

0x5492,	// (0x00043469) copy_highlight_pane

0x5492,	// (0x00043469) cursor_graphics_pane

0x5492,	// (0x00043469) graphic_within_text_pane

0x5492,	// (0x00043469) link_highlight_pane

0x6877,	// (0x0004484e) popup_preview_text_window_t5_ParamLimits

0x6877,	// (0x0004484e) popup_preview_text_window_t5

0x54fb,	// (0x000434d2) cursor_digital_pane

0x54fb,	// (0x000434d2) cursor_primary_pane

0x550c,	// (0x000434e3) cursor_primary_small_pane

0x5514,	// (0x000434eb) cursor_secondary_pane

0x551c,	// (0x000434f3) cursor_title_pane

0x54fb,	// (0x000434d2) link_highlight_digital_pane

0x5503,	// (0x000434da) link_highlight_primary_pane

0x550c,	// (0x000434e3) link_highlight_primary_small_pane

0x5514,	// (0x000434eb) link_highlight_secondary_pane

0x551c,	// (0x000434f3) link_highlight_title_pane

0x54fb,	// (0x000434d2) copy_highlight_digital_pane

0x54fb,	// (0x000434d2) copy_highlight_primary_pane

0x550c,	// (0x000434e3) copy_highlight_primary_small_pane

0x5514,	// (0x000434eb) copy_highlight_secondary_pane

0x551c,	// (0x000434f3) copy_highlight_title_pane

0x5514,	// (0x000434eb) graphic_text_digital_pane

0x6194,	// (0x0004416b) graphic_text_primary_pane

0x619d,	// (0x00044174) graphic_text_primary_small_pane

0x550c,	// (0x000434e3) graphic_text_secondary_pane

0x54fb,	// (0x000434d2) graphic_text_title_pane

0xb831,	// (0x00049808) cursor_primary_pane_g1

0x6186,	// (0x0004415d) cursor_text_primary_t1

0xc94f,	// (0x0004a926) cursor_primary_small_pane_g1

0x6178,	// (0x0004414f) cursor_text_primary_small_t1

0xc945,	// (0x0004a91c) cursor_primary_small_pane_g1_copy1

0x616a,	// (0x00044141) cursor_text_primary_small_t1_copy1

0x615c,	// (0x00044133) cursor_text_title_t1

0xc93b,	// (0x0004a912) cursor_title_pane_g1

0xb831,	// (0x00049808) cursor_digital_pane_g1

0x5524,	// (0x000434fb) cursor_text_digital_t1

0x5549,	// (0x00043520) link_highlight_primary_pane_g1

0x6105,	// (0x000440dc) link_highlight_primary_pane_t1

0x5532,	// (0x00043509) link_highlight_primary_small_pane_g1

0x553a,	// (0x00043511) link_highlight_primary_small_pane_t1

0x5549,	// (0x00043520) link_highlight_secondary_pane_g1

0x5551,	// (0x00043528) link_highlight_secondary_pane_t1

0x6079,	// (0x00044050) link_highlight_title_pane_g1

0x6081,	// (0x00044058) link_highlight_title_pane_t1

0x6062,	// (0x00044039) link_highlight_digital_pane_g1

0x606a,	// (0x00044041) link_highlight_digital_pane_t1

0x5f56,	// (0x00043f2d) copy_highlight_primary_pane_g1

0x5f5e,	// (0x00043f35) copy_highlight_primary_pane_t1

0x5f30,	// (0x00043f07) copy_highlight_primary_small_pane_g1

0x5f47,	// (0x00043f1e) copy_highlight_primary_small_pane_t1

0x5560,	// (0x00043537) copy_highlight_secondary_pane_g1

0x5568,	// (0x0004353f) copy_highlight_secondary_pane_t1

0x5f30,	// (0x00043f07) copy_highlight_title_pane_g1

0x5f38,	// (0x00043f0f) copy_highlight_title_pane_t1

0x5f56,	// (0x00043f2d) copy_highlight_digital_pane_g1

0x6ddc,	// (0x00044db3) copy_highlight_digital_pane_t1

0x6d30,	// (0x00044d07) graphic_text_primary_pane_g1

0x6dc0,	// (0x00044d97) graphic_text_primary_pane_t1

0x6dce,	// (0x00044da5) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0004d9e3) graphic_text_primary_pane_t

0x6d9c,	// (0x00044d73) graphic_text_primary_small_pane_g1

0x6da4,	// (0x00044d7b) graphic_text_primary_small_pane_t1

0x6db2,	// (0x00044d89) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0004d9de) graphic_text_primary_small_pane_t

0x6d78,	// (0x00044d4f) graphic_text_secondary_pane_g1

0x6d80,	// (0x00044d57) graphic_text_secondary_pane_t1

0x6d8e,	// (0x00044d65) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0004d9d9) graphic_text_secondary_pane_t

0x6d54,	// (0x00044d2b) graphic_text_title_pane_g1

0x6d5c,	// (0x00044d33) graphic_text_title_pane_t1

0x6d6a,	// (0x00044d41) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0004d9d4) graphic_text_title_pane_t

0x6d30,	// (0x00044d07) graphic_text_digital_pane_g1

0x6d38,	// (0x00044d0f) graphic_text_digital_pane_t1

0x6d46,	// (0x00044d1d) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0004d9cf) graphic_text_digital_pane_t

0x3bd7,	// (0x00041bae) navi_icon_pane_srt_ParamLimits

0x3bd7,	// (0x00041bae) navi_icon_pane_srt

0x3b7b,	// (0x00041b52) navi_midp_pane_srt

0x3b7b,	// (0x00041b52) navi_navi_pane_srt

0x3bd7,	// (0x00041bae) navi_text_pane_srt_ParamLimits

0x3bd7,	// (0x00041bae) navi_text_pane_srt

0x6cfb,	// (0x00044cd2) navi_navi_icon_text_pane_srt

0x6d15,	// (0x00044cec) navi_navi_pane_srt_g1_ParamLimits

0x6d15,	// (0x00044cec) navi_navi_pane_srt_g1

0x6d03,	// (0x00044cda) navi_navi_pane_srt_g2_ParamLimits

0x6d03,	// (0x00044cda) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0004d9ca) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0004d9ca) navi_navi_pane_srt_g

0x6d27,	// (0x00044cfe) navi_navi_tabs_pane_srt

0x6cfb,	// (0x00044cd2) navi_navi_text_pane_srt

0x6cfb,	// (0x00044cd2) navi_navi_volume_pane_srt

0x6cec,	// (0x00044cc3) navi_navi_text_pane_srt_t1

0xa287,	// (0x0004825e) navi_navi_volume_pane_srt_g1

0xa28f,	// (0x00048266) volume_small_pane_srt_ParamLimits

0xa28f,	// (0x00048266) volume_small_pane_srt

0x9c87,	// (0x00047c5e) volume_small_pane_srt_g1_ParamLimits

0x9c87,	// (0x00047c5e) volume_small_pane_srt_g1

0x9c97,	// (0x00047c6e) volume_small_pane_srt_g2_ParamLimits

0x9c97,	// (0x00047c6e) volume_small_pane_srt_g2

0x9ca8,	// (0x00047c7f) volume_small_pane_srt_g3_ParamLimits

0x9ca8,	// (0x00047c7f) volume_small_pane_srt_g3

0x9cb9,	// (0x00047c90) volume_small_pane_srt_g4_ParamLimits

0x9cb9,	// (0x00047c90) volume_small_pane_srt_g4

0x9cca,	// (0x00047ca1) volume_small_pane_srt_g5_ParamLimits

0x9cca,	// (0x00047ca1) volume_small_pane_srt_g5

0x9cdb,	// (0x00047cb2) volume_small_pane_srt_g6_ParamLimits

0x9cdb,	// (0x00047cb2) volume_small_pane_srt_g6

0x9cec,	// (0x00047cc3) volume_small_pane_srt_g7_ParamLimits

0x9cec,	// (0x00047cc3) volume_small_pane_srt_g7

0x9cfd,	// (0x00047cd4) volume_small_pane_srt_g8_ParamLimits

0x9cfd,	// (0x00047cd4) volume_small_pane_srt_g8

0x9d0e,	// (0x00047ce5) volume_small_pane_srt_g9_ParamLimits

0x9d0e,	// (0x00047ce5) volume_small_pane_srt_g9

0x9d1f,	// (0x00047cf6) volume_small_pane_srt_g10_ParamLimits

0x9d1f,	// (0x00047cf6) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0004d779) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0004d779) volume_small_pane_srt_g

0x46f0,	// (0x000426c7) query_popup_data_pane_cp2

0x6cd2,	// (0x00044ca9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6cd2,	// (0x00044ca9) navi_navi_icon_text_pane_srt_t1

0x6194,	// (0x0004416b) navi_tabs_2_long_pane_srt

0x6194,	// (0x0004416b) navi_tabs_2_pane_srt

0x6194,	// (0x0004416b) navi_tabs_3_long_pane_srt

0x6194,	// (0x0004416b) navi_tabs_3_pane_srt

0x6194,	// (0x0004416b) navi_tabs_4_pane_srt

0xa267,	// (0x0004823e) tabs_2_active_pane_srt_ParamLimits

0xa267,	// (0x0004823e) tabs_2_active_pane_srt

0xa277,	// (0x0004824e) tabs_2_passive_pane_srt_ParamLimits

0xa277,	// (0x0004824e) tabs_2_passive_pane_srt

0x4bc5,	// (0x00042b9c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4bc5,	// (0x00042b9c) bg_passive_tab_pane_cp1_srt

0x6cb9,	// (0x00044c90) bg_passive_tab_pane_g1_cp1_srt

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp1_srt

0x6cb0,	// (0x00044c87) bg_passive_tab_pane_g3_cp1_srt

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp1_srt_ParamLimits

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp1_srt

0x6cc2,	// (0x00044c99) tabs_2_active_pane_srt_g1

0xccef,	// (0x0004acc6) tabs_2_active_pane_srt_t1_ParamLimits

0xccef,	// (0x0004acc6) tabs_2_active_pane_srt_t1

0x6cb9,	// (0x00044c90) bg_active_tab_pane_g1_cp1_srt

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp1_srt

0x6cb0,	// (0x00044c87) bg_active_tab_pane_g3_cp1_srt

0xa234,	// (0x0004820b) tabs_3_active_pane_srt_ParamLimits

0xa234,	// (0x0004820b) tabs_3_active_pane_srt

0xa245,	// (0x0004821c) tabs_3_passive_pane_cp_srt_ParamLimits

0xa245,	// (0x0004821c) tabs_3_passive_pane_cp_srt

0xa256,	// (0x0004822d) tabs_3_passive_pane_srt_ParamLimits

0xa256,	// (0x0004822d) tabs_3_passive_pane_srt

0x4bc5,	// (0x00042b9c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4bc5,	// (0x00042b9c) bg_passive_tab_pane_cp2_srt

0x5580,	// (0x00043557) bg_passive_tab_pane_g1_cp2_srt

0x5166,	// (0x0004313d) bg_passive_tab_pane_g2_cp2_srt

0x5577,	// (0x0004354e) bg_passive_tab_pane_g3_cp2_srt

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp2_srt_ParamLimits

0x3bd7,	// (0x00041bae) bg_active_tab_pane_cp2_srt

0x6ca8,	// (0x00044c7f) tabs_3_active_pane_srt_g1

0xccdd,	// (0x0004acb4) tabs_3_active_pane_srt_t1_ParamLimits

0xccdd,	// (0x0004acb4) tabs_3_active_pane_srt_t1

0x5580,	// (0x00043557) bg_active_tab_pane_g1_cp2_srt

0x5166,	// (0x0004313d) bg_active_tab_pane_g2_cp2_srt

0x5577,	// (0x0004354e) bg_active_tab_pane_g3_cp2_srt

0xa1ec,	// (0x000481c3) tabs_4_active_pane_srt_ParamLimits

0xa1ec,	// (0x000481c3) tabs_4_active_pane_srt

0xa1fe,	// (0x000481d5) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa1fe,	// (0x000481d5) tabs_4_passive_pane_cp2_srt

0x56a4,	// (0x0004367b) aid_size_cell_toolbar

0xb555,	// (0x0004952c) main_idle_act_pane_ParamLimits

0x5768,	// (0x0004373f) popup_large_graphic_colour_window_ParamLimits

0xc342,	// (0x0004a319) popup_toolbar_window_ParamLimits

0xc342,	// (0x0004a319) popup_toolbar_window

0x6bd4,	// (0x00044bab) list_single_graphic_2heading_pane_ParamLimits

0x6bd4,	// (0x00044bab) list_single_graphic_2heading_pane

0x4d6f,	// (0x00042d46) aid_size_cell_apps_grid_lsc_pane

0x4d81,	// (0x00042d58) aid_size_cell_apps_grid_prt_pane

0x4bc5,	// (0x00042b9c) bg_wml_button_pane_cp1_ParamLimits

0x4bc5,	// (0x00042b9c) bg_wml_button_pane_cp1

0xc775,	// (0x0004a74c) form_midp_field_text_pane_t1_ParamLimits

0x5ad4,	// (0x00043aab) input_focus_pane_cp050_ParamLimits

0x5c40,	// (0x00043c17) list_midp_form_text_pane_ParamLimits

0x5c1d,	// (0x00043bf4) input_focus_pane_cp051_ParamLimits

0x5c31,	// (0x00043c08) list_midp_choice_pane_ParamLimits

0xc6db,	// (0x0004a6b2) list_single_2graphic_pane_cp3_ParamLimits

0xc6db,	// (0x0004a6b2) list_single_2graphic_pane_cp3

0xc6ff,	// (0x0004a6d6) list_single_midp_graphic_pane_ParamLimits

0xc6ff,	// (0x0004a6d6) list_single_midp_graphic_pane

0x8e0f,	// (0x00046de6) list_single_graphic_2heading_pane_g1_ParamLimits

0x8e0f,	// (0x00046de6) list_single_graphic_2heading_pane_g1

0x8e1b,	// (0x00046df2) list_single_graphic_2heading_pane_g4_ParamLimits

0x8e1b,	// (0x00046df2) list_single_graphic_2heading_pane_g4

0x8e27,	// (0x00046dfe) list_single_graphic_2heading_pane_g5_ParamLimits

0x8e27,	// (0x00046dfe) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0004d7cc) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0004d7cc) list_single_graphic_2heading_pane_g

0x8e33,	// (0x00046e0a) list_single_graphic_2heading_pane_t1_ParamLimits

0x8e33,	// (0x00046e0a) list_single_graphic_2heading_pane_t1

0x8e47,	// (0x00046e1e) list_single_graphic_2heading_pane_t2_ParamLimits

0x8e47,	// (0x00046e1e) list_single_graphic_2heading_pane_t2

0x8e63,	// (0x00046e3a) list_single_graphic_2heading_pane_t3_ParamLimits

0x8e63,	// (0x00046e3a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0004d7d3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0004d7d3) list_single_graphic_2heading_pane_t

0x5916,	// (0x000438ed) bg_popup_sub_pane_cp2

0x5940,	// (0x00043917) grid_toobar_pane

0x9e7c,	// (0x00047e53) cell_toolbar_pane_ParamLimits

0x9e7c,	// (0x00047e53) cell_toolbar_pane

0x597c,	// (0x00043953) cell_toolbar_pane_g1_ParamLimits

0x597c,	// (0x00043953) cell_toolbar_pane_g1

0x5990,	// (0x00043967) cell_toolbar_pane_g2_ParamLimits

0x5990,	// (0x00043967) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0004d7e1) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0004d7e1) cell_toolbar_pane_g

0x59b2,	// (0x00043989) grid_highlight_pane_cp2_ParamLimits

0x59b2,	// (0x00043989) grid_highlight_pane_cp2

0x59cc,	// (0x000439a3) toolbar_button_pane

0x59d8,	// (0x000439af) toolbar_button_pane_g1

0x59e8,	// (0x000439bf) toolbar_button_pane_g2

0x59e0,	// (0x000439b7) toolbar_button_pane_g3

0x59f8,	// (0x000439cf) toolbar_button_pane_g4

0x59f0,	// (0x000439c7) toolbar_button_pane_g5

0x5a00,	// (0x000439d7) toolbar_button_pane_g6

0x5a08,	// (0x000439df) toolbar_button_pane_g7

0x5a18,	// (0x000439ef) toolbar_button_pane_g8

0x5a10,	// (0x000439e7) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0004d7e6) toolbar_button_pane_g

0x9eb4,	// (0x00047e8b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9eb4,	// (0x00047e8b) list_single_2graphic_pane_g1_cp3

0x9ec0,	// (0x00047e97) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9ec0,	// (0x00047e97) list_single_2graphic_pane_g2_cp3

0x9ed1,	// (0x00047ea8) list_single_2graphic_pane_g3_cp3

0x9ed9,	// (0x00047eb0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9ed9,	// (0x00047eb0) list_single_2graphic_pane_g4_cp3

0x9ee5,	// (0x00047ebc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9ee5,	// (0x00047ebc) list_single_2graphic_pane_t1_cp3

0x9f01,	// (0x00047ed8) list_single_midp_graphic_pane_g2_ParamLimits

0x9f01,	// (0x00047ed8) list_single_midp_graphic_pane_g2

0xb86c,	// (0x00049843) aid_zoom_text_primary

0xb874,	// (0x0004984b) aid_zoom_text_secondary

0x5634,	// (0x0004360b) status_small_pane_g7_ParamLimits

0x5634,	// (0x0004360b) status_small_pane_g7

0x5657,	// (0x0004362e) status_small_pane_t1_ParamLimits

0xaff7,	// (0x00048fce) title_pane_g2

0x0003,

0xf592,	// (0x0004d569) title_pane_g

0xb1c4,	// (0x0004919b) aid_size_cell_colour_1_pane_ParamLimits

0xb1c4,	// (0x0004919b) aid_size_cell_colour_1_pane

0xb1d8,	// (0x000491af) aid_size_cell_colour_2_pane_ParamLimits

0xb1d8,	// (0x000491af) aid_size_cell_colour_2_pane

0xb1ec,	// (0x000491c3) aid_size_cell_colour_3_pane_ParamLimits

0xb1ec,	// (0x000491c3) aid_size_cell_colour_3_pane

0xb200,	// (0x000491d7) aid_size_cell_colour_4_pane_ParamLimits

0xb200,	// (0x000491d7) aid_size_cell_colour_4_pane

0x98e3,	// (0x000478ba) title_pane_stacon_g1_ParamLimits

0x98e3,	// (0x000478ba) title_pane_stacon_g1

0x5fb5,	// (0x00043f8c) popup_note_wait_window_g3_ParamLimits

0x5fb5,	// (0x00043f8c) popup_note_wait_window_g3

0x602b,	// (0x00044002) popup_note_wait_window_t5_ParamLimits

0x602b,	// (0x00044002) popup_note_wait_window_t5

0x3b7b,	// (0x00041b52) main_feb_china_hwr_fs_writing_pane

0xb8fa,	// (0x000498d1) popup_feb_china_hwr_fs_window_ParamLimits

0xb8fa,	// (0x000498d1) popup_feb_china_hwr_fs_window

0x9f23,	// (0x00047efa) aid_size_cell_hwr_fs_ParamLimits

0x9f23,	// (0x00047efa) aid_size_cell_hwr_fs

0x5ad4,	// (0x00043aab) bg_popup_sub_pane_cp3_ParamLimits

0x5ad4,	// (0x00043aab) bg_popup_sub_pane_cp3

0x9f38,	// (0x00047f0f) grid_hwr_fs_pane_ParamLimits

0x9f38,	// (0x00047f0f) grid_hwr_fs_pane

0x9f50,	// (0x00047f27) linegrid_hwr_fs_pane_ParamLimits

0x9f50,	// (0x00047f27) linegrid_hwr_fs_pane

0x9f60,	// (0x00047f37) cell_hwr_fs_pane_ParamLimits

0x9f60,	// (0x00047f37) cell_hwr_fs_pane

0x5ae0,	// (0x00043ab7) linegrid_hwr_fs_pane_g1_ParamLimits

0x5ae0,	// (0x00043ab7) linegrid_hwr_fs_pane_g1

0xc6af,	// (0x0004a686) linegrid_hwr_fs_pane_g2_ParamLimits

0xc6af,	// (0x0004a686) linegrid_hwr_fs_pane_g2

0x5aec,	// (0x00043ac3) linegrid_hwr_fs_pane_g3_ParamLimits

0x5aec,	// (0x00043ac3) linegrid_hwr_fs_pane_g3

0x9f82,	// (0x00047f59) linegrid_hwr_fs_pane_g4_ParamLimits

0x9f82,	// (0x00047f59) linegrid_hwr_fs_pane_g4

0x9f9c,	// (0x00047f73) linegrid_hwr_fs_pane_g5_ParamLimits

0x9f9c,	// (0x00047f73) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0004d811) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0004d811) linegrid_hwr_fs_pane_g

0x5af8,	// (0x00043acf) cell_hwr_fs_pane_g1_ParamLimits

0x5af8,	// (0x00043acf) cell_hwr_fs_pane_g1

0x58e2,	// (0x000438b9) cell_hwr_fs_pane_g2_ParamLimits

0x58e2,	// (0x000438b9) cell_hwr_fs_pane_g2

0xc6c1,	// (0x0004a698) cell_hwr_fs_pane_g3_ParamLimits

0xc6c1,	// (0x0004a698) cell_hwr_fs_pane_g3

0xc6ce,	// (0x0004a6a5) cell_hwr_fs_pane_g4_ParamLimits

0xc6ce,	// (0x0004a6a5) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0004d81c) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0004d81c) cell_hwr_fs_pane_g

0x9fb2,	// (0x00047f89) cell_hwr_fs_pane_t1

0x3b7b,	// (0x00041b52) grid_highlight_pane_cp6

0x3b7b,	// (0x00041b52) main_idle_act2_pane

0x4b73,	// (0x00042b4a) aid_inside_area_popup_secondary

0xc96f,	// (0x0004a946) aid_inside_area_window_primary_ParamLimits

0xc96f,	// (0x0004a946) aid_inside_area_window_primary

0x6deb,	// (0x00044dc2) ai2_news_ticker_pane

0x6df3,	// (0x00044dca) aid_size_cell_ai1_link_ParamLimits

0x6df3,	// (0x00044dca) aid_size_cell_ai1_link

0xcd01,	// (0x0004acd8) popup_ai2_data_window_ParamLimits

0xcd01,	// (0x0004acd8) popup_ai2_data_window

0x6e0d,	// (0x00044de4) popup_ai2_link_window_ParamLimits

0x6e0d,	// (0x00044de4) popup_ai2_link_window

0x5ad4,	// (0x00043aab) bg_popup_sub_pane_cp4_ParamLimits

0x5ad4,	// (0x00043aab) bg_popup_sub_pane_cp4

0x6e21,	// (0x00044df8) grid_ai2_link_pane_ParamLimits

0x6e21,	// (0x00044df8) grid_ai2_link_pane

0x6e38,	// (0x00044e0f) popup_ai2_link_window_g1_ParamLimits

0x6e38,	// (0x00044e0f) popup_ai2_link_window_g1

0x6e44,	// (0x00044e1b) popup_ai2_link_window_g2_ParamLimits

0x6e44,	// (0x00044e1b) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0004d9e8) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0004d9e8) popup_ai2_link_window_g

0x6e53,	// (0x00044e2a) ai2_mp_button_pane

0x6e5b,	// (0x00044e32) ai2_mp_volume_pane

0x5c1d,	// (0x00043bf4) bg_popup_sub_pane_cp5_ParamLimits

0x5c1d,	// (0x00043bf4) bg_popup_sub_pane_cp5

0x6e63,	// (0x00044e3a) heading_ai2_gene_pane_ParamLimits

0x6e63,	// (0x00044e3a) heading_ai2_gene_pane

0x6e6f,	// (0x00044e46) list_ai2_gene_pane_ParamLimits

0x6e6f,	// (0x00044e46) list_ai2_gene_pane

0x6eb7,	// (0x00044e8e) cell_ai2_link_pane_ParamLimits

0x6eb7,	// (0x00044e8e) cell_ai2_link_pane

0x6ecd,	// (0x00044ea4) cell_ai2_link_pane_g1

0x3b7b,	// (0x00041b52) grid_highlight_pane_cp7

0xa2a4,	// (0x0004827b) ai2_mp_volume_pane_g1

0x6f72,	// (0x00044f49) ai2_mp_volume_pane_g2

0xcd2e,	// (0x0004ad05) list_ai2_gene_pane_t1

0x6f6a,	// (0x00044f41) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0004da01) ai2_mp_volume_pane_g

0xa2ac,	// (0x00048283) volume_small_pane_cp3

0x6f7a,	// (0x00044f51) aid_size_cell_ai2_button

0x6f82,	// (0x00044f59) grid_ai2_button_pane

0x6f8b,	// (0x00044f62) cell_ai2_button_pane_ParamLimits

0x6f8b,	// (0x00044f62) cell_ai2_button_pane

0x3b71,	// (0x00041b48) cell_ai2_button_pane_g1

0x3b7b,	// (0x00041b52) grid_highlight_pane_cp8

0x6f2a,	// (0x00044f01) ai2_gene_pane_t1_ParamLimits

0x6f2a,	// (0x00044f01) ai2_gene_pane_t1

0xb862,	// (0x00049839) aid_height_parent_landscape

0xcaad,	// (0x0004aa84) aid_height_set_list

0x6638,	// (0x0004460f) aid_size_parent

0x6c56,	// (0x00044c2d) aid_size_cell_graphic_pane_ParamLimits

0x6e7f,	// (0x00044e56) popup_ai2_data_window_g1_ParamLimits

0x6e7f,	// (0x00044e56) popup_ai2_data_window_g1

0x6e8b,	// (0x00044e62) ai2_news_ticker_pane_g1

0x6e93,	// (0x00044e6a) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0004d9ed) ai2_news_ticker_pane_g

0x6e9b,	// (0x00044e72) ai2_news_ticker_pane_t1

0x6ea9,	// (0x00044e80) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0004d9f2) ai2_news_ticker_pane_t

0x6ed6,	// (0x00044ead) heading_ai2_gene_pane_g1

0x6ede,	// (0x00044eb5) heading_ai2_gene_pane_t1_ParamLimits

0x6ede,	// (0x00044eb5) heading_ai2_gene_pane_t1

0x6ef3,	// (0x00044eca) list_highlight_pane_cp6

0xcd17,	// (0x0004acee) ai2_gene_pane_ParamLimits

0xcd17,	// (0x0004acee) ai2_gene_pane

0xcd3c,	// (0x0004ad13) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0004d9f7) list_ai2_gene_pane_t

0x6efb,	// (0x00044ed2) list_highlight_pane_cp8_ParamLimits

0x6efb,	// (0x00044ed2) list_highlight_pane_cp8

0x6f0c,	// (0x00044ee3) ai2_gene_pane_g1_ParamLimits

0x6f0c,	// (0x00044ee3) ai2_gene_pane_g1

0x6f1e,	// (0x00044ef5) ai2_gene_pane_g2_ParamLimits

0x6f1e,	// (0x00044ef5) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0004d9fc) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0004d9fc) ai2_gene_pane_g

0x4a03,	// (0x000429da) scroll_pane_cp12

0x9e3b,	// (0x00047e12) control_pane_t3_ParamLimits

0x9e3b,	// (0x00047e12) control_pane_t3

0x5648,	// (0x0004361f) status_small_pane_g8_ParamLimits

0x5648,	// (0x0004361f) status_small_pane_g8

0xb986,	// (0x0004995d) popup_find_window_ParamLimits

0xbb73,	// (0x00049b4a) popup_note_image_window_ParamLimits

0xbc47,	// (0x00049c1e) list_double2_graphic_pane_vc_g1_ParamLimits

0xbc47,	// (0x00049c1e) list_double2_graphic_pane_vc_g1

0x6b8d,	// (0x00044b64) list_double2_graphic_pane_vc_g2_ParamLimits

0x6b8d,	// (0x00044b64) list_double2_graphic_pane_vc_g2

0xbc53,	// (0x00049c2a) list_double2_graphic_pane_vc_g3_ParamLimits

0xbc53,	// (0x00049c2a) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0004d7da) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0004d7da) list_double2_graphic_pane_vc_g

0xbc5f,	// (0x00049c36) list_double2_graphic_pane_vc_t1_ParamLimits

0xbc5f,	// (0x00049c36) list_double2_graphic_pane_vc_t1

0x6b8d,	// (0x00044b64) list_single_heading_pane_vc_g1_ParamLimits

0x6b8d,	// (0x00044b64) list_single_heading_pane_vc_g1

0xbc53,	// (0x00049c2a) list_single_heading_pane_vc_g2_ParamLimits

0xbc53,	// (0x00049c2a) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004d7fb) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004d7fb) list_single_heading_pane_vc_g

0xbc75,	// (0x00049c4c) list_single_heading_pane_vc_t1_ParamLimits

0xbc75,	// (0x00049c4c) list_single_heading_pane_vc_t1

0xbc8b,	// (0x00049c62) list_single_heading_pane_vc_t2_ParamLimits

0xbc8b,	// (0x00049c62) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0004d800) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0004d800) list_single_heading_pane_vc_t

0x5a2c,	// (0x00043a03) list_setting_number_pane_vc_g1_ParamLimits

0x5a2c,	// (0x00043a03) list_setting_number_pane_vc_g1

0x5a38,	// (0x00043a0f) list_setting_number_pane_vc_g2_ParamLimits

0x5a38,	// (0x00043a0f) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0004d805) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0004d805) list_setting_number_pane_vc_g

0x5a44,	// (0x00043a1b) list_setting_number_pane_vc_t1_ParamLimits

0x5a44,	// (0x00043a1b) list_setting_number_pane_vc_t1

0x5a58,	// (0x00043a2f) list_setting_number_pane_vc_t2_ParamLimits

0x5a58,	// (0x00043a2f) list_setting_number_pane_vc_t2

0x5a74,	// (0x00043a4b) list_setting_number_pane_vc_t3_ParamLimits

0x5a74,	// (0x00043a4b) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0004d80a) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0004d80a) list_setting_number_pane_vc_t

0x5a9a,	// (0x00043a71) set_value_pane_vc_ParamLimits

0x5a9a,	// (0x00043a71) set_value_pane_vc

0x6bd4,	// (0x00044bab) list_double2_graphic_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_double2_graphic_pane_vc

0xbd5f,	// (0x00049d36) list_double2_large_graphic_pane_vc_ParamLimits

0xbd5f,	// (0x00049d36) list_double2_large_graphic_pane_vc

0x6bd4,	// (0x00044bab) list_double2_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_double2_pane_vc

0x6bd4,	// (0x00044bab) list_double_graphic_heading_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_double_graphic_heading_pane_vc

0x6bd4,	// (0x00044bab) list_double_graphic_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_double_graphic_pane_vc

0x6bd4,	// (0x00044bab) list_double_heading_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_double_heading_pane_vc

0xbd5f,	// (0x00049d36) list_double_large_graphic_pane_vc_ParamLimits

0xbd5f,	// (0x00049d36) list_double_large_graphic_pane_vc

0x6bd4,	// (0x00044bab) list_double_number_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_double_number_pane_vc

0x6bd4,	// (0x00044bab) list_double_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_double_pane_vc

0x6bd4,	// (0x00044bab) list_double_time_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_double_time_pane_vc

0x6bd4,	// (0x00044bab) list_setting_number_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_setting_number_pane_vc

0x6bd4,	// (0x00044bab) list_setting_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_setting_pane_vc

0x6bd4,	// (0x00044bab) list_single_graphic_heading_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_single_graphic_heading_pane_vc

0x6bd4,	// (0x00044bab) list_single_heading_pane_vc_ParamLimits

0x6bd4,	// (0x00044bab) list_single_heading_pane_vc

0xbd70,	// (0x00049d47) list_single_number_heading_pane_vc_ParamLimits

0xbd70,	// (0x00049d47) list_single_number_heading_pane_vc

0xbc47,	// (0x00049c1e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xbc47,	// (0x00049c1e) list_double_graphic_heading_pane_vc_g1

0x6b8d,	// (0x00044b64) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6b8d,	// (0x00044b64) list_double_graphic_heading_pane_vc_g2

0xbc53,	// (0x00049c2a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xbc53,	// (0x00049c2a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0004d7da) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004d7da) list_double_graphic_heading_pane_vc_g

0xbe1e,	// (0x00049df5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xbe1e,	// (0x00049df5) list_double_graphic_heading_pane_vc_t1

0xbc75,	// (0x00049c4c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xbc75,	// (0x00049c4c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa31,	// (0x0004da08) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0004da08) list_double_graphic_heading_pane_vc_t

0x5a2c,	// (0x00043a03) list_setting_pane_vc_g1_ParamLimits

0x5a2c,	// (0x00043a03) list_setting_pane_vc_g1

0x5a38,	// (0x00043a0f) list_setting_pane_vc_g2_ParamLimits

0x5a38,	// (0x00043a0f) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0004d805) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0004d805) list_setting_pane_vc_g

0x71af,	// (0x00045186) list_setting_pane_vc_t1_ParamLimits

0x71af,	// (0x00045186) list_setting_pane_vc_t1

0x71c3,	// (0x0004519a) list_setting_pane_vc_t2_ParamLimits

0x71c3,	// (0x0004519a) list_setting_pane_vc_t2

0x0001,

0xfa5f,	// (0x0004da36) list_setting_pane_vc_t_ParamLimits

0xfa5f,	// (0x0004da36) list_setting_pane_vc_t

0x5a9a,	// (0x00043a71) set_value_pane_cp_vc_ParamLimits

0x5a9a,	// (0x00043a71) set_value_pane_cp_vc

0x6b8d,	// (0x00044b64) list_single_number_heading_pane_vc_g1_ParamLimits

0x6b8d,	// (0x00044b64) list_single_number_heading_pane_vc_g1

0xbc53,	// (0x00049c2a) list_single_number_heading_pane_vc_g2_ParamLimits

0xbc53,	// (0x00049c2a) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004d7fb) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004d7fb) list_single_number_heading_pane_vc_g

0xbc75,	// (0x00049c4c) list_single_number_heading_pane_vc_t1_ParamLimits

0xbc75,	// (0x00049c4c) list_single_number_heading_pane_vc_t1

0xbe32,	// (0x00049e09) list_single_number_heading_pane_vc_t2_ParamLimits

0xbe32,	// (0x00049e09) list_single_number_heading_pane_vc_t2

0xbe46,	// (0x00049e1d) list_single_number_heading_pane_vc_t3_ParamLimits

0xbe46,	// (0x00049e1d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa64,	// (0x0004da3b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa64,	// (0x0004da3b) list_single_number_heading_pane_vc_t

0xbc47,	// (0x00049c1e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xbc47,	// (0x00049c1e) list_single_graphic_heading_pane_vc_g1

0x6b8d,	// (0x00044b64) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6b8d,	// (0x00044b64) list_single_graphic_heading_pane_vc_g4

0xbc53,	// (0x00049c2a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xbc53,	// (0x00049c2a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0004d7da) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004d7da) list_single_graphic_heading_pane_vc_g

0xbc75,	// (0x00049c4c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xbc75,	// (0x00049c4c) list_single_graphic_heading_pane_vc_t1

0xbe58,	// (0x00049e2f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xbe58,	// (0x00049e2f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6b,	// (0x0004da42) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6b,	// (0x0004da42) list_single_graphic_heading_pane_vc_t

0x6b8d,	// (0x00044b64) list_double2_pane_vc_g1_ParamLimits

0x6b8d,	// (0x00044b64) list_double2_pane_vc_g1

0xbc53,	// (0x00049c2a) list_double2_pane_vc_g2_ParamLimits

0xbc53,	// (0x00049c2a) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0004d7fb) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0004d7fb) list_double2_pane_vc_g

0xbe6c,	// (0x00049e43) list_double2_pane_vc_t1_ParamLimits

0xbe6c,	// (0x00049e43) list_double2_pane_vc_t1

0xc7ac,	// (0x0004a783) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc7ac,	// (0x0004a783) list_double2_large_graphic_pane_vc_g1

0xc7b8,	// (0x0004a78f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc7b8,	// (0x0004a78f) list_double2_large_graphic_pane_vc_g2

0xc7c4,	// (0x0004a79b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc7c4,	// (0x0004a79b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa70,	// (0x0004da47) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0004da47) list_double2_large_graphic_pane_vc_g

0xbe82,	// (0x00049e59) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xbe82,	// (0x00049e59) list_double2_large_graphic_pane_vc_t1

0xc7d0,	// (0x0004a7a7) list_double_time_pane_vc_g1_ParamLimits

0xc7d0,	// (0x0004a7a7) list_double_time_pane_vc_g1

0xc7dc,	// (0x0004a7b3) list_double_time_pane_vc_g2_ParamLimits

0xc7dc,	// (0x0004a7b3) list_double_time_pane_vc_g2

0x0001,

0xfa77,	// (0x0004da4e) list_double_time_pane_vc_g_ParamLimits

0xfa77,	// (0x0004da4e) list_double_time_pane_vc_g

0xbe98,	// (0x00049e6f) list_double_time_pane_vc_t1_ParamLimits

0xbe98,	// (0x00049e6f) list_double_time_pane_vc_t1

0xbeb1,	// (0x00049e88) list_double_time_pane_vc_t2_ParamLimits

0xbeb1,	// (0x00049e88) list_double_time_pane_vc_t2

0xbef1,	// (0x00049ec8) list_double_time_pane_vc_t3_ParamLimits

0xbef1,	// (0x00049ec8) list_double_time_pane_vc_t3

0xbf09,	// (0x00049ee0) list_double_time_pane_vc_t4_ParamLimits

0xbf09,	// (0x00049ee0) list_double_time_pane_vc_t4

0x0003,

0xfa7c,	// (0x0004da53) list_double_time_pane_vc_t_ParamLimits

0xfa7c,	// (0x0004da53) list_double_time_pane_vc_t

0x6b8d,	// (0x00044b64) list_double_pane_vc_g1_ParamLimits

0x6b8d,	// (0x00044b64) list_double_pane_vc_g1

0xbc53,	// (0x00049c2a) list_double_pane_vc_g2_ParamLimits

0xbc53,	// (0x00049c2a) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0004d7fb) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0004d7fb) list_double_pane_vc_g

0xbf1d,	// (0x00049ef4) list_double_pane_vc_t1_ParamLimits

0xbf1d,	// (0x00049ef4) list_double_pane_vc_t1

0xbf2f,	// (0x00049f06) list_double_pane_vc_t2_ParamLimits

0xbf2f,	// (0x00049f06) list_double_pane_vc_t2

0x0001,

0xfa85,	// (0x0004da5c) list_double_pane_vc_t_ParamLimits

0xfa85,	// (0x0004da5c) list_double_pane_vc_t

0x6b8d,	// (0x00044b64) list_double_number_pane_vc_g1_ParamLimits

0x6b8d,	// (0x00044b64) list_double_number_pane_vc_g1

0xbc53,	// (0x00049c2a) list_double_number_pane_vc_g2_ParamLimits

0xbc53,	// (0x00049c2a) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0004d7fb) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0004d7fb) list_double_number_pane_vc_g

0xbf47,	// (0x00049f1e) list_double_number_pane_vc_t1_ParamLimits

0xbf47,	// (0x00049f1e) list_double_number_pane_vc_t1

0xbf5b,	// (0x00049f32) list_double_number_pane_vc_t2_ParamLimits

0xbf5b,	// (0x00049f32) list_double_number_pane_vc_t2

0xbf2f,	// (0x00049f06) list_double_number_pane_vc_t3_ParamLimits

0xbf2f,	// (0x00049f06) list_double_number_pane_vc_t3

0x0002,

0xfa8a,	// (0x0004da61) list_double_number_pane_vc_t_ParamLimits

0xfa8a,	// (0x0004da61) list_double_number_pane_vc_t

0xc7e8,	// (0x0004a7bf) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc7e8,	// (0x0004a7bf) list_double_large_graphic_pane_vc_g1

0xc7f4,	// (0x0004a7cb) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc7f4,	// (0x0004a7cb) list_double_large_graphic_pane_vc_g2

0xc7c4,	// (0x0004a79b) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc7c4,	// (0x0004a79b) list_double_large_graphic_pane_vc_g3

0xbf6d,	// (0x00049f44) list_double_large_graphic_pane_vc_g4_ParamLimits

0xbf6d,	// (0x00049f44) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa91,	// (0x0004da68) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0004da68) list_double_large_graphic_pane_vc_g

0xbf79,	// (0x00049f50) list_double_large_graphic_pane_vc_t1_ParamLimits

0xbf79,	// (0x00049f50) list_double_large_graphic_pane_vc_t1

0xbf8b,	// (0x00049f62) list_double_large_graphic_pane_vc_t2_ParamLimits

0xbf8b,	// (0x00049f62) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9a,	// (0x0004da71) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9a,	// (0x0004da71) list_double_large_graphic_pane_vc_t

0x6b8d,	// (0x00044b64) list_double_heading_pane_vc_g1_ParamLimits

0x6b8d,	// (0x00044b64) list_double_heading_pane_vc_g1

0xbc53,	// (0x00049c2a) list_double_heading_pane_vc_g2_ParamLimits

0xbc53,	// (0x00049c2a) list_double_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004d7fb) list_double_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004d7fb) list_double_heading_pane_vc_g

0xbfa4,	// (0x00049f7b) list_double_heading_pane_vc_t1_ParamLimits

0xbfa4,	// (0x00049f7b) list_double_heading_pane_vc_t1

0xbc75,	// (0x00049c4c) list_double_heading_pane_vc_t2_ParamLimits

0xbc75,	// (0x00049c4c) list_double_heading_pane_vc_t2

0x0001,

0xfa9f,	// (0x0004da76) list_double_heading_pane_vc_t_ParamLimits

0xfa9f,	// (0x0004da76) list_double_heading_pane_vc_t

0xbc47,	// (0x00049c1e) list_double_graphic_pane_vc_g1_ParamLimits

0xbc47,	// (0x00049c1e) list_double_graphic_pane_vc_g1

0xc803,	// (0x0004a7da) list_double_graphic_pane_vc_g2_ParamLimits

0xc803,	// (0x0004a7da) list_double_graphic_pane_vc_g2

0xc812,	// (0x0004a7e9) list_double_graphic_pane_vc_g3_ParamLimits

0xc812,	// (0x0004a7e9) list_double_graphic_pane_vc_g3

0x0002,

0xfaa4,	// (0x0004da7b) list_double_graphic_pane_vc_g_ParamLimits

0xfaa4,	// (0x0004da7b) list_double_graphic_pane_vc_g

0xbfb8,	// (0x00049f8f) list_double_graphic_pane_vc_t1_ParamLimits

0xbfb8,	// (0x00049f8f) list_double_graphic_pane_vc_t1

0xbf2f,	// (0x00049f06) list_double_graphic_pane_vc_t2_ParamLimits

0xbf2f,	// (0x00049f06) list_double_graphic_pane_vc_t2

0x0001,

0xfaab,	// (0x0004da82) list_double_graphic_pane_vc_t_ParamLimits

0xfaab,	// (0x0004da82) list_double_graphic_pane_vc_t

0x8e93,	// (0x00046e6a) aid_size_cell_fastswap

0x8e9b,	// (0x00046e72) aid_size_cell_touch_ParamLimits

0x8e9b,	// (0x00046e72) aid_size_cell_touch

0x9100,	// (0x000470d7) popup_fast_swap_wide_window_ParamLimits

0x9100,	// (0x000470d7) popup_fast_swap_wide_window

0x920a,	// (0x000471e1) touch_pane_ParamLimits

0x920a,	// (0x000471e1) touch_pane

0x4a59,	// (0x00042a30) button_value_adjust_pane_cp2

0x97c5,	// (0x0004779c) button_value_adjust_pane_cp4

0x97e9,	// (0x000477c0) form_field_data_pane_cp2

0x980a,	// (0x000477e1) form_field_data_wide_pane_cp2

0x4db8,	// (0x00042d8f) bg_scroll_pane_ParamLimits

0x9a46,	// (0x00047a1d) scroll_handle_pane_ParamLimits

0x9a5a,	// (0x00047a31) scroll_sc2_down_pane_ParamLimits

0x9a5a,	// (0x00047a31) scroll_sc2_down_pane

0x4de9,	// (0x00042dc0) scroll_sc2_up_pane_ParamLimits

0x4de9,	// (0x00042dc0) scroll_sc2_up_pane

0xce7e,	// (0x0004ae55) grid_wheel_folder_pane_g1_ParamLimits

0xce7e,	// (0x0004ae55) grid_wheel_folder_pane_g1

0x9c1f,	// (0x00047bf6) clock_nsta_pane_cp2_ParamLimits

0x9c1f,	// (0x00047bf6) clock_nsta_pane_cp2

0xb76e,	// (0x00049745) listscroll_midp_pane_ParamLimits

0xb77a,	// (0x00049751) midp_canvas_pane

0x569c,	// (0x00043673) nsta_clock_indic_pane

0x56cc,	// (0x000436a3) listscroll_form_pane_vc

0x56d4,	// (0x000436ab) listscroll_set_pane_vc_ParamLimits

0x56d4,	// (0x000436ab) listscroll_set_pane_vc

0xc452,	// (0x0004a429) clock_nsta_pane

0xc45f,	// (0x0004a436) indicator_nsta_pane

0x5916,	// (0x000438ed) bg_popup_sub_pane_cp2_ParamLimits

0x592a,	// (0x00043901) find_pane_cp2_ParamLimits

0x592a,	// (0x00043901) find_pane_cp2

0x5940,	// (0x00043917) grid_toobar_pane_ParamLimits

0x5aa8,	// (0x00043a7f) list_form_gen_pane_vc_ParamLimits

0x5aa8,	// (0x00043a7f) list_form_gen_pane_vc

0x5abe,	// (0x00043a95) scroll_pane_cp8_vc_ParamLimits

0x5abe,	// (0x00043a95) scroll_pane_cp8_vc

0x5b0e,	// (0x00043ae5) data_form_wide_pane_vc_ParamLimits

0x5b0e,	// (0x00043ae5) data_form_wide_pane_vc

0x5b1a,	// (0x00043af1) form_field_data_wide_pane_vc_g1

0x5b22,	// (0x00043af9) form_field_data_wide_pane_vc_t1_ParamLimits

0x5b22,	// (0x00043af9) form_field_data_wide_pane_vc_t1

0x4a6d,	// (0x00042a44) input_focus_pane_cp6_vc_ParamLimits

0x4a6d,	// (0x00042a44) input_focus_pane_cp6_vc

0xc907,	// (0x0004a8de) list_midp_pane_ParamLimits

0xc913,	// (0x0004a8ea) scroll_pane_cp16_ParamLimits

0xc913,	// (0x0004a8ea) scroll_pane_cp16

0x5dad,	// (0x00043d84) button_value_adjust_pane_ParamLimits

0x5dad,	// (0x00043d84) button_value_adjust_pane

0xcabe,	// (0x0004aa95) button_value_adjust_pane_cp6_ParamLimits

0xcabe,	// (0x0004aa95) button_value_adjust_pane_cp6

0xcbe8,	// (0x0004abbf) settings_code_pane_cp_ParamLimits

0xcbe8,	// (0x0004abbf) settings_code_pane_cp

0x3b71,	// (0x00041b48) cell_touch_pane_g1

0x3b71,	// (0x00041b48) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0004d723) cell_touch_pane_g

0xcd4a,	// (0x0004ad21) cell_touch_pane_cp_ParamLimits

0xcd4a,	// (0x0004ad21) cell_touch_pane_cp

0xcd5a,	// (0x0004ad31) cell_touch_pane_ParamLimits

0xcd5a,	// (0x0004ad31) cell_touch_pane

0x3b71,	// (0x00041b48) scroll_sc2_down_pane_g1

0x3b71,	// (0x00041b48) scroll_sc2_up_pane_g1

0x3b7b,	// (0x00041b52) bg_set_opt_pane_cp4_vc

0x6f9d,	// (0x00044f74) list_set_graphic_pane_vc_g1_ParamLimits

0x6f9d,	// (0x00044f74) list_set_graphic_pane_vc_g1

0x6fa9,	// (0x00044f80) list_set_graphic_pane_vc_g2_ParamLimits

0x6fa9,	// (0x00044f80) list_set_graphic_pane_vc_g2

0x0001,

0xfa36,	// (0x0004da0d) list_set_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x0004da0d) list_set_graphic_pane_vc_g

0x6fb5,	// (0x00044f8c) text_primary_small_cp13_vc_ParamLimits

0x6fb5,	// (0x00044f8c) text_primary_small_cp13_vc

0x6fcd,	// (0x00044fa4) list_set_graphic_pane_vc_ParamLimits

0x6fcd,	// (0x00044fa4) list_set_graphic_pane_vc

0x3b7b,	// (0x00041b52) input_focus_pane_cp2_vc

0x3b71,	// (0x00041b48) setting_code_pane_vc_g1

0x6fe1,	// (0x00044fb8) setting_code_pane_vc_t1

0x6fef,	// (0x00044fc6) set_text_pane_vc_t1_ParamLimits

0x6fef,	// (0x00044fc6) set_text_pane_vc_t1

0x3b7b,	// (0x00041b52) input_focus_pane_cp1_vc

0x700a,	// (0x00044fe1) list_set_text_pane_vc

0x3b71,	// (0x00041b48) setting_text_pane_vc_g1

0x3b7b,	// (0x00041b52) bg_set_opt_pane_cp2_vc

0x7014,	// (0x00044feb) setting_slider_graphic_pane_vc_g1

0x701c,	// (0x00044ff3) setting_slider_graphic_pane_vc_t1

0x702a,	// (0x00045001) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x0004da12) setting_slider_graphic_pane_vc_t

0x7038,	// (0x0004500f) slider_set_pane_cp_vc

0x7040,	// (0x00045017) slider_set_pane_vc_g1

0x7049,	// (0x00045020) slider_set_pane_vc_g2

0x0006,

0xfa40,	// (0x0004da17) slider_set_pane_vc_g

0x4ad4,	// (0x00042aab) set_opt_bg_pane_g1_copy1

0x4adc,	// (0x00042ab3) set_opt_bg_pane_g2_copy1

0x7075,	// (0x0004504c) set_opt_bg_pane_g3_copy1

0x4aec,	// (0x00042ac3) set_opt_bg_pane_g4_copy1

0x4af4,	// (0x00042acb) set_opt_bg_pane_g5_copy1

0x4afc,	// (0x00042ad3) set_opt_bg_pane_g6_copy1

0x707f,	// (0x00045056) set_opt_bg_pane_g7_copy1

0x7087,	// (0x0004505e) set_opt_bg_pane_g8_copy1

0x7091,	// (0x00045068) set_opt_bg_pane_g9_copy1

0x3b7b,	// (0x00041b52) bg_set_opt_pane_cp_vc

0x709b,	// (0x00045072) setting_slider_pane_vc_t1

0x701c,	// (0x00044ff3) setting_slider_pane_vc_t2

0x702a,	// (0x00045001) setting_slider_pane_vc_t3

0x0002,

0xfa4f,	// (0x0004da26) setting_slider_pane_vc_t

0x7038,	// (0x0004500f) slider_set_pane_vc

0x9fc0,	// (0x00047f97) volume_set_pane_vc_g1

0x9fc9,	// (0x00047fa0) volume_set_pane_vc_g2

0x9fd2,	// (0x00047fa9) volume_set_pane_vc_g3

0x9fdb,	// (0x00047fb2) volume_set_pane_vc_g4

0x9fe4,	// (0x00047fbb) volume_set_pane_vc_g5

0x9fed,	// (0x00047fc4) volume_set_pane_vc_g6

0x9ff6,	// (0x00047fcd) volume_set_pane_vc_g7

0x9fff,	// (0x00047fd6) volume_set_pane_vc_g8

0xa008,	// (0x00047fdf) volume_set_pane_vc_g9

0xa011,	// (0x00047fe8) volume_set_pane_vc_g10

0x0009,

0xf8f4,	// (0x0004d8cb) volume_set_pane_vc_g

0x70aa,	// (0x00045081) volume_set_pane_vc

0x70b2,	// (0x00045089) button_value_adjust_pane_cp1_vc

0x70bc,	// (0x00045093) list_highlight_pane_cp2_vc

0x70c5,	// (0x0004509c) list_set_pane_vc_ParamLimits

0x70c5,	// (0x0004509c) list_set_pane_vc

0x713d,	// (0x00045114) main_pane_set_vc_t1_ParamLimits

0x713d,	// (0x00045114) main_pane_set_vc_t1

0x7152,	// (0x00045129) main_pane_set_vc_t2_ParamLimits

0x7152,	// (0x00045129) main_pane_set_vc_t2

0x7164,	// (0x0004513b) main_pane_set_vc_t3_ParamLimits

0x7164,	// (0x0004513b) main_pane_set_vc_t3

0x7178,	// (0x0004514f) main_pane_set_vc_t4_ParamLimits

0x7178,	// (0x0004514f) main_pane_set_vc_t4

0x0003,

0xfa56,	// (0x0004da2d) main_pane_set_vc_t_ParamLimits

0xfa56,	// (0x0004da2d) main_pane_set_vc_t

0x718c,	// (0x00045163) setting_code_pane_vc_ParamLimits

0x718c,	// (0x00045163) setting_code_pane_vc

0x719d,	// (0x00045174) setting_slider_graphic_pane_vc

0x719d,	// (0x00045174) setting_slider_pane_vc

0x719d,	// (0x00045174) setting_text_pane_vc

0x719d,	// (0x00045174) setting_volume_pane_vc

0x71a7,	// (0x0004517e) scroll_pane_cp121_vc

0x4a47,	// (0x00042a1e) set_content_pane_vc

0x71e5,	// (0x000451bc) button_value_adjust_pane_g1

0x71ee,	// (0x000451c5) button_value_adjust_pane_g2

0x0001,

0xfab0,	// (0x0004da87) button_value_adjust_pane_g

0x71f7,	// (0x000451ce) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71f7,	// (0x000451ce) form_field_slider_wide_pane_vc_t1

0x720b,	// (0x000451e2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x720b,	// (0x000451e2) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab5,	// (0x0004da8c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab5,	// (0x0004da8c) form_field_slider_wide_pane_vc_t

0x3bc9,	// (0x00041ba0) input_focus_pane_cp10_vc_ParamLimits

0x3bc9,	// (0x00041ba0) input_focus_pane_cp10_vc

0x721d,	// (0x000451f4) slider_cont_pane_cp1_vc_ParamLimits

0x721d,	// (0x000451f4) slider_cont_pane_cp1_vc

0x7040,	// (0x00045017) slider_form_pane_g1_cp2

0x7049,	// (0x00045020) slider_form_pane_g2_cp2

0x7236,	// (0x0004520d) form_field_slider_pane_vc_t3

0x7244,	// (0x0004521b) form_field_slider_pane_vc_t4

0x7252,	// (0x00045229) slider_form_pane_vc_ParamLimits

0x7252,	// (0x00045229) slider_form_pane_vc

0x725f,	// (0x00045236) form_field_slider_pane_vc_t1_ParamLimits

0x725f,	// (0x00045236) form_field_slider_pane_vc_t1

0x720b,	// (0x000451e2) form_field_slider_pane_vc_t2_ParamLimits

0x720b,	// (0x000451e2) form_field_slider_pane_vc_t2

0x0001,

0xfac5,	// (0x0004da9c) form_field_slider_pane_vc_t_ParamLimits

0xfac5,	// (0x0004da9c) form_field_slider_pane_vc_t

0x3bc9,	// (0x00041ba0) input_focus_pane_cp9_vc_ParamLimits

0x3bc9,	// (0x00041ba0) input_focus_pane_cp9_vc

0x727b,	// (0x00045252) slider_cont_pane_vc_ParamLimits

0x727b,	// (0x00045252) slider_cont_pane_vc

0x728d,	// (0x00045264) list_form_graphic_pane_cp_vc_ParamLimits

0x728d,	// (0x00045264) list_form_graphic_pane_cp_vc

0x5b1a,	// (0x00043af1) form_field_popup_wide_pane_vc_g1

0x72a2,	// (0x00045279) form_field_popup_wide_pane_vc_t1_ParamLimits

0x72a2,	// (0x00045279) form_field_popup_wide_pane_vc_t1

0x4a6d,	// (0x00042a44) input_focus_pane_cp8_vc_ParamLimits

0x4a6d,	// (0x00042a44) input_focus_pane_cp8_vc

0x72b9,	// (0x00045290) list_form_wide_pane_vc_ParamLimits

0x72b9,	// (0x00045290) list_form_wide_pane_vc

0x72c5,	// (0x0004529c) list_form_graphic_pane_vc_g1

0x72cd,	// (0x000452a4) list_form_graphic_pane_vc_t1_ParamLimits

0x72cd,	// (0x000452a4) list_form_graphic_pane_vc_t1

0x3bd7,	// (0x00041bae) list_highlight_pane_cp5_vc_ParamLimits

0x3bd7,	// (0x00041bae) list_highlight_pane_cp5_vc

0x72e9,	// (0x000452c0) list_form_graphic_pane_vc_ParamLimits

0x72e9,	// (0x000452c0) list_form_graphic_pane_vc

0x5b1a,	// (0x00043af1) form_field_popup_pane_vc_g1

0x72ff,	// (0x000452d6) form_field_popup_pane_vc_t1_ParamLimits

0x72ff,	// (0x000452d6) form_field_popup_pane_vc_t1

0x4a6d,	// (0x00042a44) input_focus_pane_cp7_vc_ParamLimits

0x4a6d,	// (0x00042a44) input_focus_pane_cp7_vc

0x7316,	// (0x000452ed) list_form_pane_vc_ParamLimits

0x7316,	// (0x000452ed) list_form_pane_vc

0x7322,	// (0x000452f9) data_form_pane_vc_t1_ParamLimits

0x7322,	// (0x000452f9) data_form_pane_vc_t1

0x4ad4,	// (0x00042aab) input_focus_pane_vc_g1

0x4adc,	// (0x00042ab3) input_focus_pane_vc_g2

0x4ae4,	// (0x00042abb) input_focus_pane_vc_g3

0x4aec,	// (0x00042ac3) input_focus_pane_vc_g4

0x4af4,	// (0x00042acb) input_focus_pane_vc_g5

0x4afc,	// (0x00042ad3) input_focus_pane_vc_g6

0x4b04,	// (0x00042adb) input_focus_pane_vc_g7

0x4b0c,	// (0x00042ae3) input_focus_pane_vc_g8

0x4b14,	// (0x00042aeb) input_focus_pane_vc_g9

0x3b71,	// (0x00041b48) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0004d6ac) input_focus_pane_vc_g

0x5b0e,	// (0x00043ae5) data_form_pane_vc_ParamLimits

0x5b0e,	// (0x00043ae5) data_form_pane_vc

0x5b1a,	// (0x00043af1) form_field_data_pane_vc_g1

0x733d,	// (0x00045314) form_field_data_pane_vc_t1_ParamLimits

0x733d,	// (0x00045314) form_field_data_pane_vc_t1

0x4a6d,	// (0x00042a44) input_focus_pane_vc_ParamLimits

0x4a6d,	// (0x00042a44) input_focus_pane_vc

0x7357,	// (0x0004532e) button_value_adjust_pane_cp3_vc

0x735f,	// (0x00045336) button_value_adjust_pane_cp5_vc

0x7367,	// (0x0004533e) form_field_data_pane_vc_ParamLimits

0x7367,	// (0x0004533e) form_field_data_pane_vc

0x737e,	// (0x00045355) form_field_data_pane_vc_cp2

0x7386,	// (0x0004535d) form_field_data_wide_pane_vc_ParamLimits

0x7386,	// (0x0004535d) form_field_data_wide_pane_vc

0x739c,	// (0x00045373) form_field_data_wide_pane_vc_cp2

0x73a4,	// (0x0004537b) form_field_popup_pane_vc_ParamLimits

0x73a4,	// (0x0004537b) form_field_popup_pane_vc

0x73bb,	// (0x00045392) form_field_popup_wide_pane_vc_ParamLimits

0x73bb,	// (0x00045392) form_field_popup_wide_pane_vc

0x73d1,	// (0x000453a8) form_field_slider_pane_vc_ParamLimits

0x73d1,	// (0x000453a8) form_field_slider_pane_vc

0x73e4,	// (0x000453bb) form_field_slider_wide_pane_vc_ParamLimits

0x73e4,	// (0x000453bb) form_field_slider_wide_pane_vc

0xcd6c,	// (0x0004ad43) grid_touch_1_pane_ParamLimits

0xcd6c,	// (0x0004ad43) grid_touch_1_pane

0xcd78,	// (0x0004ad4f) grid_touch_2_pane_ParamLimits

0xcd78,	// (0x0004ad4f) grid_touch_2_pane

0x568e,	// (0x00043665) touch_pane_g1_ParamLimits

0x568e,	// (0x00043665) touch_pane_g1

0x7405,	// (0x000453dc) cell_app_pane_cp_wide_ParamLimits

0x7405,	// (0x000453dc) cell_app_pane_cp_wide

0x7416,	// (0x000453ed) grid_popup_fast_wide_pane_ParamLimits

0x7416,	// (0x000453ed) grid_popup_fast_wide_pane

0x742a,	// (0x00045401) scroll_pane_cp19_ParamLimits

0x742a,	// (0x00045401) scroll_pane_cp19

0x3b7b,	// (0x00041b52) bg_popup_window_pane_cp20

0x743e,	// (0x00045415) listscroll_popup_fast_wide_pane

0x3bd7,	// (0x00041bae) grid_indicator_nsta_pane

0x7446,	// (0x0004541d) clock_nsta_pane_g1

0x744f,	// (0x00045426) clock_nsta_pane_t1

0xcd90,	// (0x0004ad67) cell_indicator_nsta_pane_ParamLimits

0xcd90,	// (0x0004ad67) cell_indicator_nsta_pane

0x73f7,	// (0x000453ce) cell_indicator_nsta_pane_g1

0xcdc8,	// (0x0004ad9f) cell_indicator_nsta_pane_g2

0x0001,

0xfacf,	// (0x0004daa6) cell_indicator_nsta_pane_g

0x746b,	// (0x00045442) clock_nsta_pane_cp

0x7473,	// (0x0004544a) indicator_nsta_pane_cp

0x747b,	// (0x00045452) nsta_clock_indic_pane_g1

0x40cf,	// (0x000420a6) grid_indicator_pane

0x4ede,	// (0x00042eb5) scroll_pane_cp29

0x9b6e,	// (0x00047b45) indicator_nsta_pane_cp2_ParamLimits

0x9b6e,	// (0x00047b45) indicator_nsta_pane_cp2

0x3bd7,	// (0x00041bae) main_apps_wheel_pane

0x5c5a,	// (0x00043c31) form_midp_field_text_pane_ParamLimits

0x5d8d,	// (0x00043d64) scroll_bar_cp050_ParamLimits

0x74b3,	// (0x0004548a) cell_indicator_pane_ParamLimits

0x74b3,	// (0x0004548a) cell_indicator_pane

0x74ca,	// (0x000454a1) cell_indicator_pane_g1

0xcdde,	// (0x0004adb5) grid_wheel_folder_pane_ParamLimits

0xcdde,	// (0x0004adb5) grid_wheel_folder_pane

0xcdf2,	// (0x0004adc9) list_wheel_apps_pane_ParamLimits

0xcdf2,	// (0x0004adc9) list_wheel_apps_pane

0xce03,	// (0x0004adda) main_apps_wheel_pane_g1_ParamLimits

0xce03,	// (0x0004adda) main_apps_wheel_pane_g1

0xce17,	// (0x0004adee) main_apps_wheel_pane_g2_ParamLimits

0xce17,	// (0x0004adee) main_apps_wheel_pane_g2

0x0001,

0xfade,	// (0x0004dab5) main_apps_wheel_pane_g_ParamLimits

0xfade,	// (0x0004dab5) main_apps_wheel_pane_g

0xce2f,	// (0x0004ae06) main_apps_wheel_pane_t1_ParamLimits

0xce2f,	// (0x0004ae06) main_apps_wheel_pane_t1

0xce52,	// (0x0004ae29) list_wheel_apps_pane_g1

0xce5a,	// (0x0004ae31) list_wheel_apps_pane_g2

0xce62,	// (0x0004ae39) list_wheel_apps_pane_g3

0xce6a,	// (0x0004ae41) list_wheel_apps_pane_g4

0xce74,	// (0x0004ae4b) list_wheel_apps_pane_g5

0x0004,

0xfae3,	// (0x0004daba) list_wheel_apps_pane_g

0x5312,	// (0x000432e9) navi_icon_text_pane

0xc39a,	// (0x0004a371) aid_fill_nsta

0xce97,	// (0x0004ae6e) navi_icon_text_pane_g1

0xcea6,	// (0x0004ae7d) navi_icon_text_pane_t1

0xb756,	// (0x0004972d) list_set_graphic_pane_t1_ParamLimits

0xb756,	// (0x0004972d) list_set_graphic_pane_t1

0x6471,	// (0x00044448) popup_midp_note_alarm_window_t6_ParamLimits

0x6471,	// (0x00044448) popup_midp_note_alarm_window_t6

0x6483,	// (0x0004445a) popup_midp_note_alarm_window_t7_ParamLimits

0x6483,	// (0x0004445a) popup_midp_note_alarm_window_t7

0x6495,	// (0x0004446c) popup_midp_note_alarm_window_t8_ParamLimits

0x6495,	// (0x0004446c) popup_midp_note_alarm_window_t8

0x64a7,	// (0x0004447e) popup_midp_note_alarm_window_t9_ParamLimits

0x64a7,	// (0x0004447e) popup_midp_note_alarm_window_t9

0x64b9,	// (0x00044490) popup_midp_note_alarm_window_t10_ParamLimits

0x64b9,	// (0x00044490) popup_midp_note_alarm_window_t10

0x64cb,	// (0x000444a2) popup_midp_note_alarm_window_t11_ParamLimits

0x64cb,	// (0x000444a2) popup_midp_note_alarm_window_t11

0x64dd,	// (0x000444b4) scroll_pane_cp17_ParamLimits

0x64dd,	// (0x000444b4) scroll_pane_cp17

0x9fc0,	// (0x00047f97) volume_small_pane_cp_g1

0xa2b5,	// (0x0004828c) volume_small_pane_cp_g2

0xa2be,	// (0x00048295) volume_small_pane_cp_g3

0xa2c7,	// (0x0004829e) volume_small_pane_cp_g4

0xa2d0,	// (0x000482a7) volume_small_pane_cp_g5

0xa2d9,	// (0x000482b0) volume_small_pane_cp_g6

0xa2e2,	// (0x000482b9) volume_small_pane_cp_g7

0xa2eb,	// (0x000482c2) volume_small_pane_cp_g8

0xa2f4,	// (0x000482cb) volume_small_pane_cp_g9

0xa2fd,	// (0x000482d4) volume_small_pane_cp_g10

0x54bc,	// (0x00043493) midp_ticker_pane_g1_ParamLimits

0x54c8,	// (0x0004349f) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0004d774) midp_ticker_pane_g_ParamLimits

0xb81f,	// (0x000497f6) midp_ticker_pane_t1_ParamLimits

0xc3b0,	// (0x0004a387) aid_fill_nsta_2

0x5d79,	// (0x00043d50) list_form2_midp_pane

0x6bb2,	// (0x00044b89) midp_editing_number_pane_ParamLimits

0x6bc1,	// (0x00044b98) midp_ticker_pane_ParamLimits

0x74d4,	// (0x000454ab) form2_midp_field_pane

0x74dc,	// (0x000454b3) scroll_pane_cp51

0x74fc,	// (0x000454d3) form2_midp_button_pane_ParamLimits

0x74fc,	// (0x000454d3) form2_midp_button_pane

0x750e,	// (0x000454e5) form2_midp_content_pane_ParamLimits

0x750e,	// (0x000454e5) form2_midp_content_pane

0x7528,	// (0x000454ff) form2_midp_field_choice_group_pane

0x7530,	// (0x00045507) form2_midp_field_pane_g1

0x7538,	// (0x0004550f) form2_midp_field_pane_g2

0x7540,	// (0x00045517) form2_midp_field_pane_g3

0x7548,	// (0x0004551f) form2_midp_field_pane_g4

0x0003,

0xfb08,	// (0x0004dadf) form2_midp_field_pane_g

0x7550,	// (0x00045527) form2_midp_gauge_slider_pane

0x7558,	// (0x0004552f) form2_midp_gauge_wait_pane

0x7560,	// (0x00045537) form2_midp_image_pane_ParamLimits

0x7560,	// (0x00045537) form2_midp_image_pane

0x757b,	// (0x00045552) form2_midp_label_pane_ParamLimits

0x757b,	// (0x00045552) form2_midp_label_pane

0xced7,	// (0x0004aeae) form2_midp_label_pane_cp_ParamLimits

0xced7,	// (0x0004aeae) form2_midp_label_pane_cp

0x7594,	// (0x0004556b) form2_midp_string_pane_ParamLimits

0x7594,	// (0x0004556b) form2_midp_string_pane

0xbfca,	// (0x00049fa1) form2_midp_text_pane_ParamLimits

0xbfca,	// (0x00049fa1) form2_midp_text_pane

0x75a6,	// (0x0004557d) form2_midp_time_pane

0x75b6,	// (0x0004558d) input_focus_pane_cp51_ParamLimits

0x75b6,	// (0x0004558d) input_focus_pane_cp51

0x75ce,	// (0x000455a5) form2_midp_label_pane_t1_ParamLimits

0x75ce,	// (0x000455a5) form2_midp_label_pane_t1

0xbfe9,	// (0x00049fc0) form2_mdip_text_pane_t1_ParamLimits

0xbfe9,	// (0x00049fc0) form2_mdip_text_pane_t1

0xc007,	// (0x00049fde) form2_midp_time_pane_t1

0x7617,	// (0x000455ee) form2_midp_gauge_slider_pane_t1

0xcef8,	// (0x0004aecf) form2_midp_gauge_slider_pane_t2

0xcf0a,	// (0x0004aee1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb11,	// (0x0004dae8) form2_midp_gauge_slider_pane_t

0x7629,	// (0x00045600) form2_midp_slider_pane

0x7635,	// (0x0004560c) form2_midp_gauge_wait_pane_t1

0x7643,	// (0x0004561a) form2_midp_wait_pane_ParamLimits

0x7643,	// (0x0004561a) form2_midp_wait_pane

0xc6db,	// (0x0004a6b2) list_single_2graphic_pane_cp4_ParamLimits

0xc6db,	// (0x0004a6b2) list_single_2graphic_pane_cp4

0xcf1c,	// (0x0004aef3) list_single_midp_graphic_pane_cp_ParamLimits

0xcf1c,	// (0x0004aef3) list_single_midp_graphic_pane_cp

0x3b7b,	// (0x00041b52) list_highlight_pane_cp20

0x766e,	// (0x00045645) list_single_2graphic_pane_g1_cp4

0x7676,	// (0x0004564d) list_single_2graphic_pane_g2_cp4

0x767e,	// (0x00045655) list_single_2graphic_pane_t1_cp4

0x3bd7,	// (0x00041bae) list_highlight_pane_cp21

0x768d,	// (0x00045664) list_single_midp_graphic_pane_g4_cp

0x769c,	// (0x00045673) list_single_midp_graphic_pane_t1_cp

0xcf4b,	// (0x0004af22) form2_mdip_string_pane_t1_ParamLimits

0xcf4b,	// (0x0004af22) form2_mdip_string_pane_t1

0x3b7b,	// (0x00041b52) bg_wml_button_pane_cp2

0x3b71,	// (0x00041b48) form2_midp_image_pane_g1

0xb340,	// (0x00049317) list_double_large_graphic_pane_g5_ParamLimits

0xb340,	// (0x00049317) list_double_large_graphic_pane_g5

0xb76e,	// (0x00049745) midp_form_pane_ParamLimits

0x3bd7,	// (0x00041bae) main_apps_wheel_pane_ParamLimits

0xbb99,	// (0x00049b70) popup_preview_window_ParamLimits

0xbb99,	// (0x00049b70) popup_preview_window

0x57b3,	// (0x0004378a) popup_touch_info_window_ParamLimits

0x57b3,	// (0x0004378a) popup_touch_info_window

0x57d1,	// (0x000437a8) popup_touch_menu_window_ParamLimits

0x57d1,	// (0x000437a8) popup_touch_menu_window

0x3b67,	// (0x00041b3e) bg_popup_sub_pane_cp6

0x76b1,	// (0x00045688) list_touch_menu_pane

0x76b9,	// (0x00045690) list_single_touch_menu_pane_ParamLimits

0x76b9,	// (0x00045690) list_single_touch_menu_pane

0x76d0,	// (0x000456a7) list_single_touch_menu_pane_t1

0x3bd7,	// (0x00041bae) bg_popup_sub_pane_cp7_ParamLimits

0x3bd7,	// (0x00041bae) bg_popup_sub_pane_cp7

0x76de,	// (0x000456b5) heading_sub_pane

0x76e6,	// (0x000456bd) list_touch_info_pane_ParamLimits

0x76e6,	// (0x000456bd) list_touch_info_pane

0x76f5,	// (0x000456cc) list_single_touch_info_pane_ParamLimits

0x76f5,	// (0x000456cc) list_single_touch_info_pane

0x7707,	// (0x000456de) list_single_touch_info_pane_t1

0x7715,	// (0x000456ec) list_single_touch_info_pane_t2

0x0001,

0xfb1f,	// (0x0004daf6) list_single_touch_info_pane_t

0x5492,	// (0x00043469) bg_popup_heading_pane_cp

0x7723,	// (0x000456fa) heading_sub_pane_t1

0x5ad4,	// (0x00043aab) bg_popup_preview_window_pane_cp_ParamLimits

0x5ad4,	// (0x00043aab) bg_popup_preview_window_pane_cp

0x76de,	// (0x000456b5) heading_preview_pane

0x76e6,	// (0x000456bd) list_preview_pane_ParamLimits

0x76e6,	// (0x000456bd) list_preview_pane

0x7731,	// (0x00045708) popup_preview_window_g1

0x76f5,	// (0x000456cc) list_single_preview_pane_ParamLimits

0x76f5,	// (0x000456cc) list_single_preview_pane

0x7739,	// (0x00045710) list_single_preview_pane_g1

0x7741,	// (0x00045718) list_single_preview_pane_t1

0x7707,	// (0x000456de) list_single_preview_pane_t2

0x0001,

0xfb24,	// (0x0004dafb) list_single_preview_pane_t

0x774f,	// (0x00045726) bg_popup_heading_pane_cp2_ParamLimits

0x774f,	// (0x00045726) bg_popup_heading_pane_cp2

0x7765,	// (0x0004573c) heading_preview_pane_g1

0x776d,	// (0x00045744) heading_preview_pane_t1_ParamLimits

0x776d,	// (0x00045744) heading_preview_pane_t1

0x40e6,	// (0x000420bd) soft_indicator_pane_t1_ParamLimits

0x49e0,	// (0x000429b7) scroll_pane_ParamLimits

0x4de0,	// (0x00042db7) scroll_sc2_left_pane

0x4dd7,	// (0x00042dae) scroll_sc2_right_pane

0x4dff,	// (0x00042dd6) scroll_bg_pane_g1_ParamLimits

0x4e14,	// (0x00042deb) scroll_bg_pane_g2_ParamLimits

0x4e2c,	// (0x00042e03) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0004d703) scroll_bg_pane_g_ParamLimits

0x4dff,	// (0x00042dd6) scroll_handle_pane_g1_ParamLimits

0x4e4e,	// (0x00042e25) scroll_handle_pane_g2_ParamLimits

0x4e2c,	// (0x00042e03) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0004d70a) scroll_handle_pane_g_ParamLimits

0x56f4,	// (0x000436cb) popup_choice_list_window_ParamLimits

0x56f4,	// (0x000436cb) popup_choice_list_window

0x5922,	// (0x000438f9) choice_list_pane

0x59a4,	// (0x0004397b) cell_toolbar_pane_t1

0x59cc,	// (0x000439a3) toolbar_button_pane_ParamLimits

0x6909,	// (0x000448e0) ai_gene_pane_1_t2_ParamLimits

0x6909,	// (0x000448e0) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0004d927) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0004d927) ai_gene_pane_1_t

0x778a,	// (0x00045761) scroll_sc2_left_pane_g1

0x778a,	// (0x00045761) scroll_sc2_right_pane_g1

0x4bc5,	// (0x00042b9c) bg_popup_sub_pane_cp10

0x7794,	// (0x0004576b) list_choice_list_pane

0x77ab,	// (0x00045782) list_single_choice_list_pane_ParamLimits

0x77ab,	// (0x00045782) list_single_choice_list_pane

0x77bf,	// (0x00045796) list_single_choice_list_pane_g1

0x77c7,	// (0x0004579e) list_single_choice_list_pane_t1_ParamLimits

0x77c7,	// (0x0004579e) list_single_choice_list_pane_t1

0x77dc,	// (0x000457b3) choice_list_pane_g1

0x77e4,	// (0x000457bb) choice_list_pane_t1

0x3b67,	// (0x00041b3e) input_focus_pane_cp11

0x4d3a,	// (0x00042d11) title_pane_stacon_g2_ParamLimits

0x4d3a,	// (0x00042d11) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0004d6e9) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0004d6e9) title_pane_stacon_g

0x5492,	// (0x00043469) cursor_press_pane

0xb93e,	// (0x00049915) popup_fep_hwr_window_ParamLimits

0xb93e,	// (0x00049915) popup_fep_hwr_window

0x574a,	// (0x00043721) popup_fep_vkb_window_ParamLimits

0x574a,	// (0x00043721) popup_fep_vkb_window

0x77f2,	// (0x000457c9) cursor_press_pane_g1

0x0002,

0xfb4d,	// (0x0004db24) fep_vkb_side_pane_g_ParamLimits

0xa33f,	// (0x00048316) fep_hwr_candidate_pane_ParamLimits

0xa33f,	// (0x00048316) fep_hwr_candidate_pane

0xa369,	// (0x00048340) fep_hwr_side_pane_ParamLimits

0xa369,	// (0x00048340) fep_hwr_side_pane

0xa389,	// (0x00048360) fep_hwr_top_pane_ParamLimits

0xa389,	// (0x00048360) fep_hwr_top_pane

0xa3a1,	// (0x00048378) fep_hwr_write_pane_ParamLimits

0xa3a1,	// (0x00048378) fep_hwr_write_pane

0xfb4d,	// (0x0004db24) fep_vkb_side_pane_g

0x780c,	// (0x000457e3) fep_hwr_top_pane_g1

0x77fa,	// (0x000457d1) fep_hwr_top_pane_g2

0xa3db,	// (0x000483b2) fep_hwr_top_pane_g3

0x0002,

0xfb29,	// (0x0004db00) fep_hwr_top_pane_g

0xa3f0,	// (0x000483c7) fep_hwr_top_text_pane

0x4fa5,	// (0x00042f7c) fep_hwr_top_text_pane_g1

0x7842,	// (0x00045819) fep_hwr_top_text_pane_t1

0xa4e6,	// (0x000484bd) fep_hwr_candidate_pane_g1

0x796f,	// (0x00045946) fep_vkb_keypad_pane_g3_ParamLimits

0x796f,	// (0x00045946) fep_vkb_keypad_pane_g3

0x7997,	// (0x0004596e) fep_vkb_keypad_pane_g4_ParamLimits

0x7997,	// (0x0004596e) fep_vkb_keypad_pane_g4

0x7a06,	// (0x000459dd) fep_vkb_bottom_pane_g2_ParamLimits

0x7a06,	// (0x000459dd) fep_vkb_bottom_pane_g2

0x0001,

0xfb54,	// (0x0004db2b) fep_vkb_bottom_pane_g_ParamLimits

0xfb54,	// (0x0004db2b) fep_vkb_bottom_pane_g

0x778a,	// (0x00045761) cell_vkb_side_pane_g2

0x0001,

0xfb5e,	// (0x0004db35) cell_vkb_side_pane_g

0x7a4a,	// (0x00045a21) cell_vkb_side_pane_t1

0x7a58,	// (0x00045a2f) cell_vkb_side_pane_t1_copy1

0x778a,	// (0x00045761) bg_fep_vkb_candidate_pane_g2

0x7b2e,	// (0x00045b05) cell_vkb_candidate_pane_ParamLimits

0x7850,	// (0x00045827) aid_size_cell_vkb_ParamLimits

0x7850,	// (0x00045827) aid_size_cell_vkb

0x7b2e,	// (0x00045b05) cell_vkb_candidate_pane

0xa50d,	// (0x000484e4) bg_popup_fep_shadow_pane_g1

0xd056,	// (0x0004b02d) fep_vkb_bottom_pane_ParamLimits

0xd056,	// (0x0004b02d) fep_vkb_bottom_pane

0x78dd,	// (0x000458b4) fep_vkb_candidate_pane_ParamLimits

0x78dd,	// (0x000458b4) fep_vkb_candidate_pane

0xd07b,	// (0x0004b052) fep_vkb_keypad_pane_ParamLimits

0xd07b,	// (0x0004b052) fep_vkb_keypad_pane

0xd0b7,	// (0x0004b08e) fep_vkb_side_pane_ParamLimits

0xd0b7,	// (0x0004b08e) fep_vkb_side_pane

0xd0f3,	// (0x0004b0ca) fep_vkb_top_pane_ParamLimits

0xd0f3,	// (0x0004b0ca) fep_vkb_top_pane

0x7903,	// (0x000458da) fep_vkb_top_pane_g1_ParamLimits

0x7903,	// (0x000458da) fep_vkb_top_pane_g1

0x7912,	// (0x000458e9) fep_vkb_top_pane_g2_ParamLimits

0x7912,	// (0x000458e9) fep_vkb_top_pane_g2

0x7921,	// (0x000458f8) fep_vkb_top_pane_g3_ParamLimits

0x7921,	// (0x000458f8) fep_vkb_top_pane_g3

0x0003,

0xfb44,	// (0x0004db1b) fep_vkb_top_pane_g_ParamLimits

0xfb44,	// (0x0004db1b) fep_vkb_top_pane_g

0x793f,	// (0x00045916) fep_vkb_top_text_pane_ParamLimits

0x793f,	// (0x00045916) fep_vkb_top_text_pane

0xd12f,	// (0x0004b106) fep_vkb_side_pane_g1_ParamLimits

0xd12f,	// (0x0004b106) fep_vkb_side_pane_g1

0x795e,	// (0x00045935) grid_vkb_side_pane_ParamLimits

0x795e,	// (0x00045935) grid_vkb_side_pane

0xa515,	// (0x000484ec) bg_popup_fep_shadow_pane_g2

0xa51e,	// (0x000484f5) bg_popup_fep_shadow_pane_g3

0xa526,	// (0x000484fd) bg_popup_fep_shadow_pane_g4

0xa52f,	// (0x00048506) bg_popup_fep_shadow_pane_g5

0xa539,	// (0x00048510) bg_popup_fep_shadow_pane_g6

0xa541,	// (0x00048518) bg_popup_fep_shadow_pane_g7

0x4aec,	// (0x00042ac3) bg_popup_fep_shadow_pane_g8

0x79b5,	// (0x0004598c) grid_vkb_keypad_number_pane_ParamLimits

0x79b5,	// (0x0004598c) grid_vkb_keypad_number_pane

0x79c5,	// (0x0004599c) grid_vkb_keypad_pane_ParamLimits

0x79c5,	// (0x0004599c) grid_vkb_keypad_pane

0x79eb,	// (0x000459c2) fep_vkb_bottom_pane_g1_ParamLimits

0x79eb,	// (0x000459c2) fep_vkb_bottom_pane_g1

0x7a14,	// (0x000459eb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a14,	// (0x000459eb) grid_vkb_keypad_bottom_left_pane

0x7a29,	// (0x00045a00) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a29,	// (0x00045a00) grid_vkb_keypad_bottom_right_pane

0x7a3e,	// (0x00045a15) fep_vkb_top_text_pane_g1

0xd179,	// (0x0004b150) fep_vkb_top_text_pane_t1

0xd18e,	// (0x0004b165) cell_vkb_side_pane_ParamLimits

0xd18e,	// (0x0004b165) cell_vkb_side_pane

0x778a,	// (0x00045761) cell_vkb_side_pane_g1

0x7a66,	// (0x00045a3d) cell_vkb_keypad_pane_ParamLimits

0x7a66,	// (0x00045a3d) cell_vkb_keypad_pane

0x7adb,	// (0x00045ab2) cell_vkb_keypad_pane_g1

0x0008,

0xfb71,	// (0x0004db48) bg_popup_fep_shadow_pane_g

0xa553,	// (0x0004852a) cell_hwr_side_pane_g1

0xa553,	// (0x0004852a) cell_hwr_side_pane_g2

0x7ae5,	// (0x00045abc) cell_vkb_keypad_pane_t1

0xd1b1,	// (0x0004b188) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd1b1,	// (0x0004b188) cell_vkb_keypad_bottom_left_pane

0xd1ce,	// (0x0004b1a5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd1ce,	// (0x0004b1a5) cell_vkb_keypad_bottom_right_pane

0x778a,	// (0x00045761) cell_vkb_keypad_bottom_left_pane_g1

0x778a,	// (0x00045761) cell_vkb_keypad_bottom_right_pane_g1

0x7af3,	// (0x00045aca) cell_vkb_keypad_number_pane_ParamLimits

0x7af3,	// (0x00045aca) cell_vkb_keypad_number_pane

0x7b12,	// (0x00045ae9) cell_vkb_keypad_number_pane_g1

0x7b1c,	// (0x00045af3) cell_vkb_keypad_number_pane_g2

0x7b25,	// (0x00045afc) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb63,	// (0x0004db3a) cell_vkb_keypad_number_pane_g

0x7ae5,	// (0x00045abc) cell_vkb_keypad_number_pane_t1

0x7b49,	// (0x00045b20) fep_vkb_candidate_pane_g1

0x0001,

0xfb84,	// (0x0004db5b) cell_hwr_side_pane_g

0x7b62,	// (0x00045b39) cell_hwr_side_pane_t1

0xa55d,	// (0x00048534) cell_hwr_side_pane_t1_copy1

0xa56b,	// (0x00048542) cell_hwr_candidate_pane_g1

0xa59a,	// (0x00048571) cell_hwr_candidate_pane_t1

0x778a,	// (0x00045761) cell_vkb_candidate_pane_g2

0x7bc7,	// (0x00045b9e) cell_vkb_candidate_pane_t1

0xa306,	// (0x000482dd) bg_popup_fep_shadow_pane_ParamLimits

0xa306,	// (0x000482dd) bg_popup_fep_shadow_pane

0xa3bb,	// (0x00048392) bg_fep_hwr_top_pane_g4

0x781e,	// (0x000457f5) bg_hwr_side_pane_g1_ParamLimits

0x781e,	// (0x000457f5) bg_hwr_side_pane_g1

0xa42c,	// (0x00048403) cell_hwr_side_pane_ParamLimits

0xa42c,	// (0x00048403) cell_hwr_side_pane

0xa467,	// (0x0004843e) fep_hwr_write_pane_g1_ParamLimits

0xa467,	// (0x0004843e) fep_hwr_write_pane_g1

0xa474,	// (0x0004844b) fep_hwr_write_pane_g2_ParamLimits

0xa474,	// (0x0004844b) fep_hwr_write_pane_g2

0xa481,	// (0x00048458) fep_hwr_write_pane_g3_ParamLimits

0xa481,	// (0x00048458) fep_hwr_write_pane_g3

0xa48f,	// (0x00048466) fep_hwr_write_pane_g4_ParamLimits

0xa48f,	// (0x00048466) fep_hwr_write_pane_g4

0x0005,

0xfb30,	// (0x0004db07) fep_hwr_write_pane_g_ParamLimits

0xfb30,	// (0x0004db07) fep_hwr_write_pane_g

0xa3bb,	// (0x00048392) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa3bb,	// (0x00048392) bg_fep_hwr_candidate_pane_g2

0xa4a4,	// (0x0004847b) cell_hwr_candidate_pane_ParamLimits

0xa4a4,	// (0x0004847b) cell_hwr_candidate_pane

0xa4e6,	// (0x000484bd) fep_hwr_candidate_pane_g1_ParamLimits

0x787e,	// (0x00045855) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x787e,	// (0x00045855) bg_popup_fep_shadow_pane_cp2

0x7931,	// (0x00045908) fep_vkb_top_pane_g4_ParamLimits

0x7931,	// (0x00045908) fep_vkb_top_pane_g4

0x7950,	// (0x00045927) fep_vkb_side_pane_g2_ParamLimits

0x7950,	// (0x00045927) fep_vkb_side_pane_g2

0x96f2,	// (0x000476c9) list_setting_pane_t4_ParamLimits

0x96f2,	// (0x000476c9) list_setting_pane_t4

0x978c,	// (0x00047763) list_setting_number_pane_t5_ParamLimits

0x978c,	// (0x00047763) list_setting_number_pane_t5

0xb5f4,	// (0x000495cb) list_double_heading_pane_cp2_ParamLimits

0xb5f4,	// (0x000495cb) list_double_heading_pane_cp2

0x4a87,	// (0x00042a5e) list_double_heading_pane_g1_cp2_ParamLimits

0x4a87,	// (0x00042a5e) list_double_heading_pane_g1_cp2

0x4a93,	// (0x00042a6a) list_double_heading_pane_g2_cp2_ParamLimits

0x4a93,	// (0x00042a6a) list_double_heading_pane_g2_cp2

0x7bd5,	// (0x00045bac) list_double_heading_pane_t1_cp2_ParamLimits

0x7bd5,	// (0x00045bac) list_double_heading_pane_t1_cp2

0x7c0c,	// (0x00045be3) list_double_heading_pane_t2_cp2_ParamLimits

0x7c0c,	// (0x00045be3) list_double_heading_pane_t2_cp2

0x3b5f,	// (0x00041b36) aid_value_unit2

0x915a,	// (0x00047131) popup_preview_fixed_window

0x41c6,	// (0x0004219d) bg_popup_preview_window_pane_cp02

0x7c1e,	// (0x00045bf5) list_preview_fixed_pane

0x7c64,	// (0x00045c3b) list_empty_pane_fp_ParamLimits

0x7c64,	// (0x00045c3b) list_empty_pane_fp

0x7c64,	// (0x00045c3b) list_single_cale_day_pane_fp_ParamLimits

0x7c64,	// (0x00045c3b) list_single_cale_day_pane_fp

0x7c64,	// (0x00045c3b) list_single_graphic_heading_pane_fp_ParamLimits

0x7c64,	// (0x00045c3b) list_single_graphic_heading_pane_fp

0x7c64,	// (0x00045c3b) list_single_graphic_pane_fp_ParamLimits

0x7c64,	// (0x00045c3b) list_single_graphic_pane_fp

0x7c64,	// (0x00045c3b) list_single_heading_pane_fp_ParamLimits

0x7c64,	// (0x00045c3b) list_single_heading_pane_fp

0x7c64,	// (0x00045c3b) list_single_pane_fp_ParamLimits

0x7c64,	// (0x00045c3b) list_single_pane_fp

0x7c79,	// (0x00045c50) list_single_pane_fp_g1_ParamLimits

0x7c79,	// (0x00045c50) list_single_pane_fp_g1

0x5a20,	// (0x000439f7) list_single_pane_fp_g2_ParamLimits

0x5a20,	// (0x000439f7) list_single_pane_fp_g2

0x7c85,	// (0x00045c5c) list_single_pane_fp_g3_ParamLimits

0x7c85,	// (0x00045c5c) list_single_pane_fp_g3

0x7c99,	// (0x00045c70) list_single_pane_fp_g4_ParamLimits

0x7c99,	// (0x00045c70) list_single_pane_fp_g4

0x0003,

0xfb97,	// (0x0004db6e) list_single_pane_fp_g_ParamLimits

0xfb97,	// (0x0004db6e) list_single_pane_fp_g

0xc01a,	// (0x00049ff1) list_single_pane_fp_t1_ParamLimits

0xc01a,	// (0x00049ff1) list_single_pane_fp_t1

0xc031,	// (0x0004a008) list_single_graphic_pane_fp_g1_ParamLimits

0xc031,	// (0x0004a008) list_single_graphic_pane_fp_g1

0x7c79,	// (0x00045c50) list_single_graphic_pane_fp_g2_ParamLimits

0x7c79,	// (0x00045c50) list_single_graphic_pane_fp_g2

0x5a20,	// (0x000439f7) list_single_graphic_pane_fp_g3_ParamLimits

0x5a20,	// (0x000439f7) list_single_graphic_pane_fp_g3

0x7c85,	// (0x00045c5c) list_single_graphic_pane_fp_g4_ParamLimits

0x7c85,	// (0x00045c5c) list_single_graphic_pane_fp_g4

0x7c99,	// (0x00045c70) list_single_graphic_pane_fp_g5_ParamLimits

0x7c99,	// (0x00045c70) list_single_graphic_pane_fp_g5

0x0004,

0xfba0,	// (0x0004db77) list_single_graphic_pane_fp_g_ParamLimits

0xfba0,	// (0x0004db77) list_single_graphic_pane_fp_g

0xc03d,	// (0x0004a014) list_single_graphic_pane_fp_t1_ParamLimits

0xc03d,	// (0x0004a014) list_single_graphic_pane_fp_t1

0xc031,	// (0x0004a008) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc031,	// (0x0004a008) list_single_graphic_heading_pane_fp_g1

0x7c79,	// (0x00045c50) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c79,	// (0x00045c50) list_single_graphic_heading_pane_fp_g2

0x5a20,	// (0x000439f7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5a20,	// (0x000439f7) list_single_graphic_heading_pane_fp_g3

0x7c85,	// (0x00045c5c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7c85,	// (0x00045c5c) list_single_graphic_heading_pane_fp_g4

0x7c99,	// (0x00045c70) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7c99,	// (0x00045c70) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba0,	// (0x0004db77) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba0,	// (0x0004db77) list_single_graphic_heading_pane_fp_g

0xc053,	// (0x0004a02a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc053,	// (0x0004a02a) list_single_graphic_heading_pane_fp_t1

0xc069,	// (0x0004a040) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc069,	// (0x0004a040) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbab,	// (0x0004db82) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbab,	// (0x0004db82) list_single_graphic_heading_pane_fp_t

0xc07b,	// (0x0004a052) list_single_cale_day_pane_fp_g1_ParamLimits

0xc07b,	// (0x0004a052) list_single_cale_day_pane_fp_g1

0x7ca5,	// (0x00045c7c) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ca5,	// (0x00045c7c) list_single_cale_day_pane_fp_g2

0xc81e,	// (0x0004a7f5) list_single_cale_day_pane_fp_g3_ParamLimits

0xc81e,	// (0x0004a7f5) list_single_cale_day_pane_fp_g3

0xc846,	// (0x0004a81d) list_single_cale_day_pane_fp_g4_ParamLimits

0xc846,	// (0x0004a81d) list_single_cale_day_pane_fp_g4

0xc86a,	// (0x0004a841) list_single_cale_day_pane_fp_g5_ParamLimits

0xc86a,	// (0x0004a841) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb0,	// (0x0004db87) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb0,	// (0x0004db87) list_single_cale_day_pane_fp_g

0xc0b3,	// (0x0004a08a) list_single_cale_day_pane_fp_t1_ParamLimits

0xc0b3,	// (0x0004a08a) list_single_cale_day_pane_fp_t1

0xc0d9,	// (0x0004a0b0) list_single_cale_day_pane_fp_t2_ParamLimits

0xc0d9,	// (0x0004a0b0) list_single_cale_day_pane_fp_t2

0xc0f2,	// (0x0004a0c9) list_single_cale_day_pane_fp_t3_ParamLimits

0xc0f2,	// (0x0004a0c9) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbb,	// (0x0004db92) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbb,	// (0x0004db92) list_single_cale_day_pane_fp_t

0x7c79,	// (0x00045c50) list_empty_pane_fp_g1_ParamLimits

0x7c79,	// (0x00045c50) list_empty_pane_fp_g1

0xc10b,	// (0x0004a0e2) list_empty_pane_fp_t1

0xc119,	// (0x0004a0f0) list_empty_pane_fp_t2

0x0001,

0xfbc2,	// (0x0004db99) list_empty_pane_fp_t

0x7c79,	// (0x00045c50) list_single_heading_pane_fp_g1_ParamLimits

0x7c79,	// (0x00045c50) list_single_heading_pane_fp_g1

0x5a20,	// (0x000439f7) list_single_heading_pane_fp_g2_ParamLimits

0x5a20,	// (0x000439f7) list_single_heading_pane_fp_g2

0x7c85,	// (0x00045c5c) list_single_heading_pane_fp_g3_ParamLimits

0x7c85,	// (0x00045c5c) list_single_heading_pane_fp_g3

0x0002,

0xfbc7,	// (0x0004db9e) list_single_heading_pane_fp_g_ParamLimits

0xfbc7,	// (0x0004db9e) list_single_heading_pane_fp_g

0xc127,	// (0x0004a0fe) list_single_heading_pane_fp_t1_ParamLimits

0xc127,	// (0x0004a0fe) list_single_heading_pane_fp_t1

0xc139,	// (0x0004a110) list_single_heading_pane_fp_t2_ParamLimits

0xc139,	// (0x0004a110) list_single_heading_pane_fp_t2

0x0001,

0xfbce,	// (0x0004dba5) list_single_heading_pane_fp_t_ParamLimits

0xfbce,	// (0x0004dba5) list_single_heading_pane_fp_t

0x4bd1,	// (0x00042ba8) aid_size_cell_fast

0x41a9,	// (0x00042180) soft_indicator_pane_cp1_t1

0x4c0e,	// (0x00042be5) cell_app_pane_cp2_ParamLimits

0x4c0e,	// (0x00042be5) cell_app_pane_cp2

0xa328,	// (0x000482ff) fep_hwr_candidate_drop_down_list_pane

0xa500,	// (0x000484d7) fep_hwr_candidate_pane_g3_ParamLimits

0xa500,	// (0x000484d7) fep_hwr_candidate_pane_g3

0x3b52,	// (0x00041b29) fep_hwr_candidate_pane_g4_ParamLimits

0x3b52,	// (0x00041b29) fep_hwr_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0004db14) fep_hwr_candidate_pane_g_ParamLimits

0xfb3d,	// (0x0004db14) fep_hwr_candidate_pane_g

0x78cc,	// (0x000458a3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x78cc,	// (0x000458a3) fep_vkb_candidate_drop_down_list_pane

0x7b51,	// (0x00045b28) fep_vkb_candidate_pane_g3

0x7b59,	// (0x00045b30) fep_vkb_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0004db41) fep_vkb_candidate_pane_g

0xa56b,	// (0x00048542) cell_hwr_candidate_pane_g1_ParamLimits

0xa579,	// (0x00048550) cell_hwr_candidate_pane_g3_ParamLimits

0xa579,	// (0x00048550) cell_hwr_candidate_pane_g3

0xdce6,	// (0x0004bcbd) cell_hwr_candidate_pane_g4_ParamLimits

0xdce6,	// (0x0004bcbd) cell_hwr_candidate_pane_g4

0x0002,

0xfb89,	// (0x0004db60) cell_hwr_candidate_pane_g_ParamLimits

0xfb89,	// (0x0004db60) cell_hwr_candidate_pane_g

0x7b91,	// (0x00045b68) cell_vkb_candidate_pane_g3_ParamLimits

0x7b91,	// (0x00045b68) cell_vkb_candidate_pane_g3

0x7bac,	// (0x00045b83) cell_vkb_candidate_pane_g4_ParamLimits

0x7bac,	// (0x00045b83) cell_vkb_candidate_pane_g4

0x7cb1,	// (0x00045c88) cell_app_pane_cp2_g1_ParamLimits

0x7cb1,	// (0x00045c88) cell_app_pane_cp2_g1

0x7ccf,	// (0x00045ca6) cell_app_pane_cp2_g2_ParamLimits

0x7ccf,	// (0x00045ca6) cell_app_pane_cp2_g2

0x0001,

0xfbd3,	// (0x0004dbaa) cell_app_pane_cp2_g_ParamLimits

0xfbd3,	// (0x0004dbaa) cell_app_pane_cp2_g

0x7cdb,	// (0x00045cb2) cell_app_pane_cp2_t1_ParamLimits

0x7cdb,	// (0x00045cb2) cell_app_pane_cp2_t1

0x4a6d,	// (0x00042a44) grid_highlight_pane_cp1_ParamLimits

0x4a6d,	// (0x00042a44) grid_highlight_pane_cp1

0xa5b8,	// (0x0004858f) cell_hwr_candidate_pane_cp1_ParamLimits

0xa5b8,	// (0x0004858f) cell_hwr_candidate_pane_cp1

0xa56b,	// (0x00048542) fep_hwr_candidate_drop_down_list_pane_g1

0xa5d7,	// (0x000485ae) fep_hwr_candidate_drop_down_list_pane_g2

0xa5e4,	// (0x000485bb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd8,	// (0x0004dbaf) fep_hwr_candidate_drop_down_list_pane_g

0xa5f1,	// (0x000485c8) fep_hwr_candidate_drop_down_list_scroll_pane

0xa5fa,	// (0x000485d1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xa5fa,	// (0x000485d1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xa607,	// (0x000485de) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xa607,	// (0x000485de) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xa614,	// (0x000485eb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xa614,	// (0x000485eb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xa621,	// (0x000485f8) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xa621,	// (0x000485f8) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xa63c,	// (0x00048613) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xa63c,	// (0x00048613) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xa657,	// (0x0004862e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xa657,	// (0x0004862e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xa672,	// (0x00048649) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xa672,	// (0x00048649) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xa68d,	// (0x00048664) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xa68d,	// (0x00048664) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x0004dbb6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x0004dbb6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d07,	// (0x00045cde) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d07,	// (0x00045cde) cell_vkb_candidate_pane_cp1

0x7931,	// (0x00045908) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7931,	// (0x00045908) fep_vkb_candidate_drop_down_list_pane_g1

0x7ced,	// (0x00045cc4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ced,	// (0x00045cc4) fep_vkb_candidate_drop_down_list_pane_g2

0x7cfa,	// (0x00045cd1) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7cfa,	// (0x00045cd1) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf0,	// (0x0004dbc7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf0,	// (0x0004dbc7) fep_vkb_candidate_drop_down_list_pane_g

0x7d27,	// (0x00045cfe) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d27,	// (0x00045cfe) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d34,	// (0x00045d0b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d34,	// (0x00045d0b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d41,	// (0x00045d18) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d41,	// (0x00045d18) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d4d,	// (0x00045d24) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d4d,	// (0x00045d24) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7b70,	// (0x00045b47) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b70,	// (0x00045b47) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7beb,	// (0x00045bc2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7beb,	// (0x00045bc2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7d59,	// (0x00045d30) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7d59,	// (0x00045d30) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7d7a,	// (0x00045d51) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d7a,	// (0x00045d51) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d9b,	// (0x00045d72) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d9b,	// (0x00045d72) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf7,	// (0x0004dbce) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf7,	// (0x0004dbce) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xafea,	// (0x00048fc1) title_pane_g1_ParamLimits

0xaff7,	// (0x00048fce) title_pane_g2_ParamLimits

0xf592,	// (0x0004d569) title_pane_g_ParamLimits

0x4f9d,	// (0x00042f74) aid_call2_pane

0x4f95,	// (0x00042f6c) aid_call_pane

0x4fa5,	// (0x00042f7c) popup_clock_analogue_window_g1

0x4fa5,	// (0x00042f7c) popup_clock_analogue_window_g2

0x9a6f,	// (0x00047a46) popup_clock_analogue_window_g3

0x9a78,	// (0x00047a4f) popup_clock_analogue_window_g4

0x3b71,	// (0x00041b48) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0004d718) popup_clock_analogue_window_g

0x9a80,	// (0x00047a57) popup_clock_analogue_window_t1

0x9a8e,	// (0x00047a65) clock_digital_number_pane_ParamLimits

0x9a8e,	// (0x00047a65) clock_digital_number_pane

0x9a9a,	// (0x00047a71) clock_digital_number_pane_cp02_ParamLimits

0x9a9a,	// (0x00047a71) clock_digital_number_pane_cp02

0x9aa6,	// (0x00047a7d) clock_digital_number_pane_cp03_ParamLimits

0x9aa6,	// (0x00047a7d) clock_digital_number_pane_cp03

0x9ab2,	// (0x00047a89) clock_digital_number_pane_cp04_ParamLimits

0x9ab2,	// (0x00047a89) clock_digital_number_pane_cp04

0x9abe,	// (0x00047a95) clock_digital_separator_pane_ParamLimits

0x9abe,	// (0x00047a95) clock_digital_separator_pane

0x9aca,	// (0x00047aa1) popup_clock_digital_window_t1_ParamLimits

0x9aca,	// (0x00047aa1) popup_clock_digital_window_t1

0x3b71,	// (0x00041b48) clock_digital_number_pane_g1

0x3b71,	// (0x00041b48) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0004d723) clock_digital_number_pane_g

0x3b71,	// (0x00041b48) clock_digital_separator_pane_g1

0x3b71,	// (0x00041b48) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0004d723) clock_digital_separator_pane_g

0xc39a,	// (0x0004a371) aid_fill_nsta_ParamLimits

0xc45f,	// (0x0004a436) indicator_nsta_pane_ParamLimits

0x58c9,	// (0x000438a0) popup_clock_analogue_window

0x58c9,	// (0x000438a0) popup_clock_digital_window

0x3bd7,	// (0x00041bae) grid_indicator_nsta_pane_ParamLimits

0x745d,	// (0x00045434) clock_nsta_pane_t2

0x0001,

0xfaca,	// (0x0004daa1) clock_nsta_pane_t

0x9a33,	// (0x00047a0a) aid_size_max_handle

0x9a3d,	// (0x00047a14) aid_size_min_handle

0x5492,	// (0x00043469) editor_scroll_pane

0x7db6,	// (0x00045d8d) ex_editor_pane

0x4b8c,	// (0x00042b63) scroll_pane_cp13

0x4a0c,	// (0x000429e3) scroll_pane_cp14

0x4fcf,	// (0x00042fa6) scroll_pane_cp36

0xb608,	// (0x000495df) list_single_graphic_hl_pane_cp2_ParamLimits

0xb608,	// (0x000495df) list_single_graphic_hl_pane_cp2

0xbdcc,	// (0x00049da3) list_single_graphic_hl_pane_ParamLimits

0xbdcc,	// (0x00049da3) list_single_graphic_hl_pane

0xc14f,	// (0x0004a126) aid_size_min_hl_cp1

0x7dbe,	// (0x00045d95) list_highlight_pane_cp34_ParamLimits

0x7dbe,	// (0x00045d95) list_highlight_pane_cp34

0x7dcf,	// (0x00045da6) list_single_graphic_hl_pane_g1_ParamLimits

0x7dcf,	// (0x00045da6) list_single_graphic_hl_pane_g1

0xc158,	// (0x0004a12f) list_single_graphic_hl_pane_g2_ParamLimits

0xc158,	// (0x0004a12f) list_single_graphic_hl_pane_g2

0xc158,	// (0x0004a12f) list_single_graphic_hl_pane_g3_ParamLimits

0xc158,	// (0x0004a12f) list_single_graphic_hl_pane_g3

0x5403,	// (0x000433da) list_single_graphic_hl_pane_g4_ParamLimits

0x5403,	// (0x000433da) list_single_graphic_hl_pane_g4

0xc88e,	// (0x0004a865) list_single_graphic_hl_pane_g5_ParamLimits

0xc88e,	// (0x0004a865) list_single_graphic_hl_pane_g5

0x0004,

0xfc08,	// (0x0004dbdf) list_single_graphic_hl_pane_g_ParamLimits

0xfc08,	// (0x0004dbdf) list_single_graphic_hl_pane_g

0xc164,	// (0x0004a13b) list_single_graphic_hl_pane_t1_ParamLimits

0xc164,	// (0x0004a13b) list_single_graphic_hl_pane_t1

0x7ddc,	// (0x00045db3) aid_size_min_hl_cp2

0x7de5,	// (0x00045dbc) list_highlight_pane_cp34_cp2_ParamLimits

0x7de5,	// (0x00045dbc) list_highlight_pane_cp34_cp2

0x7dcf,	// (0x00045da6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7dcf,	// (0x00045da6) list_single_graphic_hl_pane_g1_cp2

0x7df2,	// (0x00045dc9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7df2,	// (0x00045dc9) list_single_graphic_hl_pane_g2_cp2

0x7dfe,	// (0x00045dd5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7dfe,	// (0x00045dd5) list_single_graphic_hl_pane_g3_cp2

0x6b8d,	// (0x00044b64) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6b8d,	// (0x00044b64) list_single_graphic_hl_pane_g4_cp2

0x7e0c,	// (0x00045de3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e0c,	// (0x00045de3) list_single_graphic_hl_pane_g5_cp2

0x9d7c,	// (0x00047d53) control_pane_g4_ParamLimits

0x9d7c,	// (0x00047d53) control_pane_g4

0x4bc5,	// (0x00042b9c) bg_popup_sub_pane_cp10_ParamLimits

0x7794,	// (0x0004576b) list_choice_list_pane_ParamLimits

0x77a3,	// (0x0004577a) scroll_pane_cp23

0x41c6,	// (0x0004219d) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c1e,	// (0x00045bf5) list_preview_fixed_pane_ParamLimits

0x7c34,	// (0x00045c0b) list_preview_fixed_pane_cp_ParamLimits

0x7c34,	// (0x00045c0b) list_preview_fixed_pane_cp

0x7c40,	// (0x00045c17) popup_preview_fixed_window_g1_ParamLimits

0x7c40,	// (0x00045c17) popup_preview_fixed_window_g1

0x7c4c,	// (0x00045c23) popup_preview_fixed_window_g2_ParamLimits

0x7c4c,	// (0x00045c23) popup_preview_fixed_window_g2

0x0002,

0xfb90,	// (0x0004db67) popup_preview_fixed_window_g_ParamLimits

0xfb90,	// (0x0004db67) popup_preview_fixed_window_g

0x99a7,	// (0x0004797e) aid_navi_side_left_pane_ParamLimits

0x99bc,	// (0x00047993) aid_navi_side_right_pane_ParamLimits

0x99d4,	// (0x000479ab) navi_icon_pane_stacon_ParamLimits

0x99e8,	// (0x000479bf) navi_navi_pane_stacon_ParamLimits

0x99d4,	// (0x000479ab) navi_text_pane_stacon_ParamLimits

0x3b67,	// (0x00041b3e) main_text_info_pane

0x7e36,	// (0x00045e0d) listscroll_text_info_pane

0x7e3e,	// (0x00045e15) list_text_info_pane_ParamLimits

0x7e3e,	// (0x00045e15) list_text_info_pane

0x7e4d,	// (0x00045e24) scroll_pane_cp24_ParamLimits

0x7e4d,	// (0x00045e24) scroll_pane_cp24

0xd207,	// (0x0004b1de) list_text_info_pane_t1_ParamLimits

0xd207,	// (0x0004b1de) list_text_info_pane_t1

0xb8ba,	// (0x00049891) popup_fast_swap2_window_ParamLimits

0xb8ba,	// (0x00049891) popup_fast_swap2_window

0x7e6b,	// (0x00045e42) aid_size_cell_fast2

0x3b67,	// (0x00041b3e) bg_popup_window_pane_cp17

0x5da5,	// (0x00043d7c) heading_pane_cp2

0x4791,	// (0x00042768) listscroll_fast2_pane

0x7e75,	// (0x00045e4c) grid_fast2_pane

0x7e7f,	// (0x00045e56) listscroll_fast2_pane_g1

0x7e87,	// (0x00045e5e) listscroll_fast2_pane_g2

0x0001,

0xfc13,	// (0x0004dbea) listscroll_fast2_pane_g

0x4b8c,	// (0x00042b63) scroll_pane_cp26

0x7e91,	// (0x00045e68) cell_fast2_pane_ParamLimits

0x7e91,	// (0x00045e68) cell_fast2_pane

0x7ea6,	// (0x00045e7d) cell_fast2_pane_g1

0x7eaf,	// (0x00045e86) cell_fast2_pane_g2

0x7eb8,	// (0x00045e8f) cell_fast2_pane_g3

0x0002,

0xfc18,	// (0x0004dbef) cell_fast2_pane_g

0x47d3,	// (0x000427aa) grid_highlight_pane_cp9

0x47e8,	// (0x000427bf) main_eswt_pane_ParamLimits

0x47e8,	// (0x000427bf) main_eswt_pane

0x7e62,	// (0x00045e39) list_single_text_info_pane

0x7ec0,	// (0x00045e97) eswt_ctrl_button_pane

0x7ec0,	// (0x00045e97) eswt_ctrl_canvas_pane

0x7ec8,	// (0x00045e9f) eswt_ctrl_combo_pane

0x7ec0,	// (0x00045e97) eswt_ctrl_default_pane

0x7ec0,	// (0x00045e97) eswt_ctrl_label_pane

0x7ed0,	// (0x00045ea7) eswt_ctrl_wait_pane

0x7ed8,	// (0x00045eaf) eswt_shell_pane

0x3b67,	// (0x00041b3e) listscroll_eswt_app_pane

0x7ef8,	// (0x00045ecf) popup_eswt_tasktip_window_ParamLimits

0x7ef8,	// (0x00045ecf) popup_eswt_tasktip_window

0x5ad4,	// (0x00043aab) bg_popup_window_pane_cp18

0x7f09,	// (0x00045ee0) eswt_control_pane_g1_ParamLimits

0x7f09,	// (0x00045ee0) eswt_control_pane_g1

0x7f16,	// (0x00045eed) eswt_control_pane_g2_ParamLimits

0x7f16,	// (0x00045eed) eswt_control_pane_g2

0x7f23,	// (0x00045efa) eswt_control_pane_g3_ParamLimits

0x7f23,	// (0x00045efa) eswt_control_pane_g3

0x7f30,	// (0x00045f07) eswt_control_pane_g4_ParamLimits

0x7f30,	// (0x00045f07) eswt_control_pane_g4

0x0003,

0xfc1f,	// (0x0004dbf6) eswt_control_pane_g_ParamLimits

0xfc1f,	// (0x0004dbf6) eswt_control_pane_g

0x4a6d,	// (0x00042a44) bg_button_pane_ParamLimits

0x4a6d,	// (0x00042a44) bg_button_pane

0x47e8,	// (0x000427bf) common_borders_pane_copy2_ParamLimits

0x47e8,	// (0x000427bf) common_borders_pane_copy2

0x7f3d,	// (0x00045f14) control_button_pane_g1_ParamLimits

0x7f3d,	// (0x00045f14) control_button_pane_g1

0x7f49,	// (0x00045f20) control_button_pane_g2_ParamLimits

0x7f49,	// (0x00045f20) control_button_pane_g2

0x7f55,	// (0x00045f2c) control_button_pane_g3_ParamLimits

0x7f55,	// (0x00045f2c) control_button_pane_g3

0x0002,

0xfc28,	// (0x0004dbff) control_button_pane_g_ParamLimits

0xfc28,	// (0x0004dbff) control_button_pane_g

0x7f69,	// (0x00045f40) control_button_pane_t1

0x7f77,	// (0x00045f4e) control_button_pane_t2

0x0001,

0xfc2f,	// (0x0004dc06) control_button_pane_t

0x59d8,	// (0x000439af) bg_button_pane_g1

0x59e0,	// (0x000439b7) bg_button_pane_g2

0x59e8,	// (0x000439bf) bg_button_pane_g3

0x59f0,	// (0x000439c7) bg_button_pane_g4

0x59f8,	// (0x000439cf) bg_button_pane_g5

0x5a00,	// (0x000439d7) bg_button_pane_g6

0x5a08,	// (0x000439df) bg_button_pane_g7

0x5a10,	// (0x000439e7) bg_button_pane_g8

0x5a18,	// (0x000439ef) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0004d87b) bg_button_pane_g

0x774f,	// (0x00045726) common_borders_pane_ParamLimits

0x774f,	// (0x00045726) common_borders_pane

0x7f09,	// (0x00045ee0) eswt_control_pane_g1_copy1_ParamLimits

0x7f09,	// (0x00045ee0) eswt_control_pane_g1_copy1

0x7f16,	// (0x00045eed) eswt_control_pane_g2_copy1_ParamLimits

0x7f16,	// (0x00045eed) eswt_control_pane_g2_copy1

0x7f23,	// (0x00045efa) eswt_control_pane_g3_copy1_ParamLimits

0x7f23,	// (0x00045efa) eswt_control_pane_g3_copy1

0x7f30,	// (0x00045f07) eswt_control_pane_g4_copy1_ParamLimits

0x7f30,	// (0x00045f07) eswt_control_pane_g4_copy1

0x778a,	// (0x00045761) bg_eswt_ctrl_canvas_pane_g1

0x774f,	// (0x00045726) common_borders_pane_cp2_ParamLimits

0x774f,	// (0x00045726) common_borders_pane_cp2

0x774f,	// (0x00045726) common_borders_pane_cp3_ParamLimits

0x774f,	// (0x00045726) common_borders_pane_cp3

0x7f85,	// (0x00045f5c) separator_horizontal_pane

0x7f8d,	// (0x00045f64) separator_vertical_pane

0x7f09,	// (0x00045ee0) eswt_control_pane_g1_copy2_ParamLimits

0x7f09,	// (0x00045ee0) eswt_control_pane_g1_copy2

0x7f16,	// (0x00045eed) eswt_control_pane_g2_copy2_ParamLimits

0x7f16,	// (0x00045eed) eswt_control_pane_g2_copy2

0x7f23,	// (0x00045efa) eswt_control_pane_g3_copy2_ParamLimits

0x7f23,	// (0x00045efa) eswt_control_pane_g3_copy2

0x7f30,	// (0x00045f07) eswt_control_pane_g4_copy2_ParamLimits

0x7f30,	// (0x00045f07) eswt_control_pane_g4_copy2

0x3b67,	// (0x00041b3e) common_borders_pane_cp4

0x7f96,	// (0x00045f6d) separator_horizontal_pane_g1

0x7f9f,	// (0x00045f76) separator_horizontal_pane_g2

0x7fa8,	// (0x00045f7f) separator_horizontal_pane_g3

0x0002,

0xfc34,	// (0x0004dc0b) separator_horizontal_pane_g

0x7f09,	// (0x00045ee0) eswt_control_pane_g1_copy3_ParamLimits

0x7f09,	// (0x00045ee0) eswt_control_pane_g1_copy3

0x7f16,	// (0x00045eed) eswt_control_pane_g2_copy3_ParamLimits

0x7f16,	// (0x00045eed) eswt_control_pane_g2_copy3

0x7f23,	// (0x00045efa) eswt_control_pane_g3_copy3_ParamLimits

0x7f23,	// (0x00045efa) eswt_control_pane_g3_copy3

0x7f30,	// (0x00045f07) eswt_control_pane_g4_copy3_ParamLimits

0x7f30,	// (0x00045f07) eswt_control_pane_g4_copy3

0x3b67,	// (0x00041b3e) common_borders_pane_cp5

0x7fb1,	// (0x00045f88) separator_vertical_pane_g1

0x7fba,	// (0x00045f91) separator_vertical_pane_g2

0x7fc3,	// (0x00045f9a) separator_vertical_pane_g3

0x0002,

0xfc3b,	// (0x0004dc12) separator_vertical_pane_g

0x7f09,	// (0x00045ee0) eswt_control_pane_g1_copy4_ParamLimits

0x7f09,	// (0x00045ee0) eswt_control_pane_g1_copy4

0x7f16,	// (0x00045eed) eswt_control_pane_g2_copy4_ParamLimits

0x7f16,	// (0x00045eed) eswt_control_pane_g2_copy4

0x7f23,	// (0x00045efa) eswt_control_pane_g3_copy4_ParamLimits

0x7f23,	// (0x00045efa) eswt_control_pane_g3_copy4

0x7f30,	// (0x00045f07) eswt_control_pane_g4_copy4_ParamLimits

0x7f30,	// (0x00045f07) eswt_control_pane_g4_copy4

0xd238,	// (0x0004b20f) eswt_ctrl_combo_button_pane

0xd240,	// (0x0004b217) eswt_ctrl_input_pane

0xd248,	// (0x0004b21f) popup_choice_list_window_cp70

0xd250,	// (0x0004b227) eswt_ctrl_input_pane_t1

0x3b67,	// (0x00041b3e) input_focus_pane_cp70

0x774f,	// (0x00045726) bg_button_pane_cp70_ParamLimits

0x774f,	// (0x00045726) bg_button_pane_cp70

0xd25e,	// (0x0004b235) eswt_ctrl_combo_button_pane_g1

0x7fcc,	// (0x00045fa3) wait_bar_pane_cp70

0x5ad4,	// (0x00043aab) bg_popup_window_pane_cp70_ParamLimits

0x5ad4,	// (0x00043aab) bg_popup_window_pane_cp70

0x7fd4,	// (0x00045fab) popup_eswt_tasktip_window_t1

0x7fea,	// (0x00045fc1) wait_bar_pane_cp71_ParamLimits

0x7fea,	// (0x00045fc1) wait_bar_pane_cp71

0x7ff6,	// (0x00045fcd) grid_eswt_app_pane

0x4de0,	// (0x00042db7) scroll_pane_cp70

0xd266,	// (0x0004b23d) cell_eswt_app_pane_ParamLimits

0xd266,	// (0x0004b23d) cell_eswt_app_pane

0xd296,	// (0x0004b26d) cell_eswt_app_pane_g1_ParamLimits

0xd296,	// (0x0004b26d) cell_eswt_app_pane_g1

0xd2c5,	// (0x0004b29c) cell_eswt_app_pane_g2_ParamLimits

0xd2c5,	// (0x0004b29c) cell_eswt_app_pane_g2

0x0001,

0x005a,	// (0x0003e031) cell_eswt_app_pane_g_ParamLimits

0x005a,	// (0x0003e031) cell_eswt_app_pane_g

0xd2ee,	// (0x0004b2c5) cell_eswt_app_pane_t1_ParamLimits

0xd2ee,	// (0x0004b2c5) cell_eswt_app_pane_t1

0x7fff,	// (0x00045fd6) grid_highlight_pane_cp70_ParamLimits

0x7fff,	// (0x00045fd6) grid_highlight_pane_cp70

0x5367,	// (0x0004333e) set_content_pane_g1

0x5671,	// (0x00043648) status_small_volume_pane

0xa6a8,	// (0x0004867f) status_small_volume_pane_g1

0xa6b0,	// (0x00048687) volume_small2_pane

0xa6b9,	// (0x00048690) volume_small2_pane_g1

0xa6c2,	// (0x00048699) volume_small2_pane_g2

0xa6cb,	// (0x000486a2) volume_small2_pane_g3

0xa6d4,	// (0x000486ab) volume_small2_pane_g4

0xa6dd,	// (0x000486b4) volume_small2_pane_g5

0xa6e6,	// (0x000486bd) volume_small2_pane_g6

0xa6ef,	// (0x000486c6) volume_small2_pane_g7

0xa6f8,	// (0x000486cf) volume_small2_pane_g8

0xa701,	// (0x000486d8) volume_small2_pane_g9

0xa70a,	// (0x000486e1) volume_small2_pane_g10

0x0009,

0xfc42,	// (0x0004dc19) volume_small2_pane_g

0x7a3e,	// (0x00045a15) fep_vkb_top_text_pane_g1_ParamLimits

0xd179,	// (0x0004b150) fep_vkb_top_text_pane_t1_ParamLimits

0x7c58,	// (0x00045c2f) popup_preview_fixed_window_g3_ParamLimits

0x7c58,	// (0x00045c2f) popup_preview_fixed_window_g3

0xc32d,	// (0x0004a304) popup_toolbar_trans_pane

0xcaad,	// (0x0004aa84) aid_height_set_list_ParamLimits

0x6638,	// (0x0004460f) aid_size_parent_ParamLimits

0x4bc5,	// (0x00042b9c) list_highlight_pane_cp2_ParamLimits

0x5367,	// (0x0004333e) set_content_pane_g1_ParamLimits

0xbde7,	// (0x00049dbe) list_single_image_pane_ParamLimits

0xbde7,	// (0x00049dbe) list_single_image_pane

0x800b,	// (0x00045fe2) aid_size_cell_image_ParamLimits

0x800b,	// (0x00045fe2) aid_size_cell_image

0xd320,	// (0x0004b2f7) grid_single_image_pane_ParamLimits

0xd320,	// (0x0004b2f7) grid_single_image_pane

0x5a20,	// (0x000439f7) list_single_image_pane_g1_ParamLimits

0x5a20,	// (0x000439f7) list_single_image_pane_g1

0x7c85,	// (0x00045c5c) list_single_image_pane_g2_ParamLimits

0x7c85,	// (0x00045c5c) list_single_image_pane_g2

0x0001,

0xfc57,	// (0x0004dc2e) list_single_image_pane_g_ParamLimits

0xfc57,	// (0x0004dc2e) list_single_image_pane_g

0x5b77,	// (0x00043b4e) list_single_image_pane_t1_ParamLimits

0x5b77,	// (0x00043b4e) list_single_image_pane_t1

0xd32e,	// (0x0004b305) cell_image_list_pane_ParamLimits

0xd32e,	// (0x0004b305) cell_image_list_pane

0x8018,	// (0x00045fef) cell_image_list_pane_g1

0x8021,	// (0x00045ff8) cell_image_list_pane_g2

0x0001,

0xfc5c,	// (0x0004dc33) cell_image_list_pane_g

0x802a,	// (0x00046001) aid_size_cell_tb_trans_pane

0x4a6d,	// (0x00042a44) bg_tb_trans_pane

0x803c,	// (0x00046013) grid_tb_trans_pane

0x59d8,	// (0x000439af) bg_tb_trans_pane_g1

0x59e0,	// (0x000439b7) bg_tb_trans_pane_g2

0x59e8,	// (0x000439bf) bg_tb_trans_pane_g3

0x59f0,	// (0x000439c7) bg_tb_trans_pane_g4

0x59f8,	// (0x000439cf) bg_tb_trans_pane_g5

0x5a10,	// (0x000439e7) bg_tb_trans_pane_g6

0x5a18,	// (0x000439ef) bg_tb_trans_pane_g7

0x5a00,	// (0x000439d7) bg_tb_trans_pane_g8

0x5a08,	// (0x000439df) bg_tb_trans_pane_g9

0x0008,

0xfc61,	// (0x0004dc38) bg_tb_trans_pane_g

0x8050,	// (0x00046027) cell_toolbar_trans_pane_ParamLimits

0x8050,	// (0x00046027) cell_toolbar_trans_pane

0x778a,	// (0x00045761) cell_toolbar_trans_pane_g1

0xcebb,	// (0x0004ae92) list_form2_midp_pane_t1

0xcec9,	// (0x0004aea0) list_form2_midp_pane_t2

0x0001,

0xfb03,	// (0x0004dada) list_form2_midp_pane_t

0x74dc,	// (0x000454b3) scroll_pane_cp51_ParamLimits

0x7653,	// (0x0004562a) form2_midp_wait_pane_g1

0x765c,	// (0x00045633) form2_midp_wait_pane_g2

0x7665,	// (0x0004563c) form2_midp_wait_pane_g3

0x0002,

0xfb18,	// (0x0004daef) form2_midp_wait_pane_g

0x3bd7,	// (0x00041bae) list_highlight_pane_cp21_ParamLimits

0x768d,	// (0x00045664) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x769c,	// (0x00045673) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbd70,	// (0x00049d47) list_single_2graphic_im_pane_ParamLimits

0xbd70,	// (0x00049d47) list_single_2graphic_im_pane

0xd341,	// (0x0004b318) list_single_2graphic_im_pane_g1_ParamLimits

0xd341,	// (0x0004b318) list_single_2graphic_im_pane_g1

0xd352,	// (0x0004b329) list_single_2graphic_im_pane_g2_ParamLimits

0xd352,	// (0x0004b329) list_single_2graphic_im_pane_g2

0xd35e,	// (0x0004b335) list_single_2graphic_im_pane_g3_ParamLimits

0xd35e,	// (0x0004b335) list_single_2graphic_im_pane_g3

0x0003,

0xfc74,	// (0x0004dc4b) list_single_2graphic_im_pane_g_ParamLimits

0xfc74,	// (0x0004dc4b) list_single_2graphic_im_pane_g

0xd372,	// (0x0004b349) list_single_2graphic_im_pane_t1_ParamLimits

0xd372,	// (0x0004b349) list_single_2graphic_im_pane_t1

0x7c64,	// (0x00045c3b) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c64,	// (0x00045c3b) list_single_graphic_2heading_pane_fp

0xc031,	// (0x0004a008) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc031,	// (0x0004a008) list_single_graphic_2heading_pane_fp_g1

0x7c79,	// (0x00045c50) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c79,	// (0x00045c50) list_single_graphic_2heading_pane_fp_g2

0x5a20,	// (0x000439f7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5a20,	// (0x000439f7) list_single_graphic_2heading_pane_fp_g3

0x7c85,	// (0x00045c5c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7c85,	// (0x00045c5c) list_single_graphic_2heading_pane_fp_g4

0x7c99,	// (0x00045c70) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7c99,	// (0x00045c70) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba0,	// (0x0004db77) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba0,	// (0x0004db77) list_single_graphic_2heading_pane_fp_g

0xc17a,	// (0x0004a151) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc17a,	// (0x0004a151) list_single_graphic_2heading_pane_fp_t1

0xc069,	// (0x0004a040) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc069,	// (0x0004a040) list_single_graphic_2heading_pane_fp_t2

0xc190,	// (0x0004a167) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc190,	// (0x0004a167) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7d,	// (0x0004dc54) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7d,	// (0x0004dc54) list_single_graphic_2heading_pane_fp_t

0x782a,	// (0x00045801) fep_hwr_write_pane_g5_ParamLimits

0x782a,	// (0x00045801) fep_hwr_write_pane_g5

0x7836,	// (0x0004580d) fep_hwr_write_pane_g6_ParamLimits

0x7836,	// (0x0004580d) fep_hwr_write_pane_g6

0x7ed8,	// (0x00045eaf) eswt_shell_pane_ParamLimits

0x5ad4,	// (0x00043aab) bg_popup_window_pane_cp18_ParamLimits

0x6b02,	// (0x00044ad9) heading_pane_cp70

0x7fd4,	// (0x00045fab) popup_eswt_tasktip_window_t1_ParamLimits

0xc3da,	// (0x0004a3b1) aid_touch_tab_arrow_left

0xc3e6,	// (0x0004a3bd) aid_touch_tab_arrow_right

0xb008,	// (0x00048fdf) title_pane_g3_ParamLimits

0xb008,	// (0x00048fdf) title_pane_g3

0x4a2c,	// (0x00042a03) set_value_pane_g1

0xc32d,	// (0x0004a304) popup_toolbar_trans_pane_ParamLimits

0x802a,	// (0x00046001) aid_size_cell_tb_trans_pane_ParamLimits

0x4a6d,	// (0x00042a44) bg_tb_trans_pane_ParamLimits

0x803c,	// (0x00046013) grid_tb_trans_pane_ParamLimits

0x41c6,	// (0x0004219d) cont_note_pane_ParamLimits

0x41c6,	// (0x0004219d) cont_note_pane

0x47e8,	// (0x000427bf) cont_snote2_single_text_pane_ParamLimits

0x47e8,	// (0x000427bf) cont_snote2_single_text_pane

0x47e8,	// (0x000427bf) cont_snote2_single_graphic_pane_ParamLimits

0x47e8,	// (0x000427bf) cont_snote2_single_graphic_pane

0x5f8f,	// (0x00043f66) cont_note_wait_pane_ParamLimits

0x5f8f,	// (0x00043f66) cont_note_wait_pane

0x5f8f,	// (0x00043f66) cont_note_image_pane_ParamLimits

0x5f8f,	// (0x00043f66) cont_note_image_pane

0x8082,	// (0x00046059) popup_note2_window_g1_ParamLimits

0x8082,	// (0x00046059) popup_note2_window_g1

0x80b3,	// (0x0004608a) popup_note2_window_t1_ParamLimits

0x80b3,	// (0x0004608a) popup_note2_window_t1

0x80f8,	// (0x000460cf) popup_note2_window_t2_ParamLimits

0x80f8,	// (0x000460cf) popup_note2_window_t2

0x813d,	// (0x00046114) popup_note2_window_t3_ParamLimits

0x813d,	// (0x00046114) popup_note2_window_t3

0x8182,	// (0x00046159) popup_note2_window_t4_ParamLimits

0x8182,	// (0x00046159) popup_note2_window_t4

0x4623,	// (0x000425fa) popup_note2_window_t5_ParamLimits

0x4623,	// (0x000425fa) popup_note2_window_t5

0x0004,

0xfc89,	// (0x0004dc60) popup_note2_window_t_ParamLimits

0xfc89,	// (0x0004dc60) popup_note2_window_t

0x81b1,	// (0x00046188) popup_note2_image_window_g1_ParamLimits

0x81b1,	// (0x00046188) popup_note2_image_window_g1

0x81bd,	// (0x00046194) popup_note2_image_window_g2_ParamLimits

0x81bd,	// (0x00046194) popup_note2_image_window_g2

0x0001,

0xfc94,	// (0x0004dc6b) popup_note2_image_window_g_ParamLimits

0xfc94,	// (0x0004dc6b) popup_note2_image_window_g

0x81cf,	// (0x000461a6) popup_note2_image_window_t1_ParamLimits

0x81cf,	// (0x000461a6) popup_note2_image_window_t1

0x81e7,	// (0x000461be) popup_note2_image_window_t2_ParamLimits

0x81e7,	// (0x000461be) popup_note2_image_window_t2

0x81ff,	// (0x000461d6) popup_note2_image_window_t3_ParamLimits

0x81ff,	// (0x000461d6) popup_note2_image_window_t3

0x0002,

0xfc99,	// (0x0004dc70) popup_note2_image_window_t_ParamLimits

0xfc99,	// (0x0004dc70) popup_note2_image_window_t

0x5f9d,	// (0x00043f74) popup_note2_wait_window_g1_ParamLimits

0x5f9d,	// (0x00043f74) popup_note2_wait_window_g1

0x821b,	// (0x000461f2) popup_note2_wait_window_g2_ParamLimits

0x821b,	// (0x000461f2) popup_note2_wait_window_g2

0x5fb5,	// (0x00043f8c) popup_note2_wait_window_g3_ParamLimits

0x5fb5,	// (0x00043f8c) popup_note2_wait_window_g3

0x0002,

0xfca0,	// (0x0004dc77) popup_note2_wait_window_g_ParamLimits

0xfca0,	// (0x0004dc77) popup_note2_wait_window_g

0x8227,	// (0x000461fe) popup_note2_wait_window_t1_ParamLimits

0x8227,	// (0x000461fe) popup_note2_wait_window_t1

0x8245,	// (0x0004621c) popup_note2_wait_window_t2_ParamLimits

0x8245,	// (0x0004621c) popup_note2_wait_window_t2

0x8263,	// (0x0004623a) popup_note2_wait_window_t3_ParamLimits

0x8263,	// (0x0004623a) popup_note2_wait_window_t3

0x8275,	// (0x0004624c) popup_note2_wait_window_t4_ParamLimits

0x8275,	// (0x0004624c) popup_note2_wait_window_t4

0x0003,

0xfca7,	// (0x0004dc7e) popup_note2_wait_window_t_ParamLimits

0xfca7,	// (0x0004dc7e) popup_note2_wait_window_t

0x8287,	// (0x0004625e) wait_bar2_pane_ParamLimits

0x8287,	// (0x0004625e) wait_bar2_pane

0x829f,	// (0x00046276) popup_snote2_single_text_window_g1_ParamLimits

0x829f,	// (0x00046276) popup_snote2_single_text_window_g1

0x82c7,	// (0x0004629e) popup_snote2_single_text_window_t1_ParamLimits

0x82c7,	// (0x0004629e) popup_snote2_single_text_window_t1

0x8313,	// (0x000462ea) popup_snote2_single_text_window_t2_ParamLimits

0x8313,	// (0x000462ea) popup_snote2_single_text_window_t2

0x835f,	// (0x00046336) popup_snote2_single_text_window_t3_ParamLimits

0x835f,	// (0x00046336) popup_snote2_single_text_window_t3

0x83a0,	// (0x00046377) popup_snote2_single_text_window_t4_ParamLimits

0x83a0,	// (0x00046377) popup_snote2_single_text_window_t4

0x83d6,	// (0x000463ad) popup_snote2_single_text_window_t5_ParamLimits

0x83d6,	// (0x000463ad) popup_snote2_single_text_window_t5

0x0004,

0xfcb0,	// (0x0004dc87) popup_snote2_single_text_window_t_ParamLimits

0xfcb0,	// (0x0004dc87) popup_snote2_single_text_window_t

0x8401,	// (0x000463d8) popup_snote2_single_graphic_window_g1_ParamLimits

0x8401,	// (0x000463d8) popup_snote2_single_graphic_window_g1

0x8429,	// (0x00046400) popup_snote2_single_graphic_window_g2_ParamLimits

0x8429,	// (0x00046400) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbb,	// (0x0004dc92) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbb,	// (0x0004dc92) popup_snote2_single_graphic_window_g

0x8451,	// (0x00046428) popup_snote2_single_graphic_window_t1_ParamLimits

0x8451,	// (0x00046428) popup_snote2_single_graphic_window_t1

0x849d,	// (0x00046474) popup_snote2_single_graphic_window_t2_ParamLimits

0x849d,	// (0x00046474) popup_snote2_single_graphic_window_t2

0x835f,	// (0x00046336) popup_snote2_single_graphic_window_t3_ParamLimits

0x835f,	// (0x00046336) popup_snote2_single_graphic_window_t3

0x83a0,	// (0x00046377) popup_snote2_single_graphic_window_t4_ParamLimits

0x83a0,	// (0x00046377) popup_snote2_single_graphic_window_t4

0x83d6,	// (0x000463ad) popup_snote2_single_graphic_window_t5_ParamLimits

0x83d6,	// (0x000463ad) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc0,	// (0x0004dc97) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc0,	// (0x0004dc97) popup_snote2_single_graphic_window_t

0x7492,	// (0x00045469) clock_nsta_pane_cp2_t1

0x7492,	// (0x00045469) clock_nsta_pane_cp2_t2

0x0001,

0xfad9,	// (0x0004dab0) clock_nsta_pane_cp2_t

0x989b,	// (0x00047872) form_field_data_wide_pane_g1_ParamLimits

0x4a87,	// (0x00042a5e) form_field_data_wide_pane_g2_ParamLimits

0x4a87,	// (0x00042a5e) form_field_data_wide_pane_g2

0x4a93,	// (0x00042a6a) form_field_data_wide_pane_g3_ParamLimits

0x4a93,	// (0x00042a6a) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0004d69b) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0004d69b) form_field_data_wide_pane_g

0xcd84,	// (0x0004ad5b) grid_touch_3_pane_ParamLimits

0xcd84,	// (0x0004ad5b) grid_touch_3_pane

0xd3a3,	// (0x0004b37a) cell_touch_3_pane_ParamLimits

0xd3a3,	// (0x0004b37a) cell_touch_3_pane

0x778a,	// (0x00045761) cell_touch_3_pane_g1

0x778a,	// (0x00045761) cell_touch_3_pane_g2

0x0001,

0xfb5e,	// (0x0004db35) cell_touch_3_pane_g

0x4655,	// (0x0004262c) cont_query_data_pane

0x465d,	// (0x00042634) cont_query_data_pane_cp1

0xd3d1,	// (0x0004b3a8) button_value_adjust_pane_cp7

0xd3d9,	// (0x0004b3b0) query_popup_pane_cp3

0x5001,	// (0x00042fd8) bg_popup_sub_pane_cp22_ParamLimits

0x9ae9,	// (0x00047ac0) navi_navi_volume_pane_cp2

0x9b04,	// (0x00047adb) popup_side_volume_key_window_g2

0x9b13,	// (0x00047aea) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0004d72d) popup_side_volume_key_window_g

0x9b30,	// (0x00047b07) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0004d734) popup_side_volume_key_window_t

0x5231,	// (0x00043208) popup_side_volume_key_window_ParamLimits

0x94a8,	// (0x0004747f) list_double_graphic_pane_g4_ParamLimits

0x94a8,	// (0x0004747f) list_double_graphic_pane_g4

0xbdad,	// (0x00049d84) list_single_2heading_msg_pane_ParamLimits

0xbdad,	// (0x00049d84) list_single_2heading_msg_pane

0xc8a2,	// (0x0004a879) list_single_2heading_msg_pane_g1_ParamLimits

0xc8a2,	// (0x0004a879) list_single_2heading_msg_pane_g1

0x53cb,	// (0x000433a2) list_single_2heading_msg_pane_g2_ParamLimits

0x53cb,	// (0x000433a2) list_single_2heading_msg_pane_g2

0xc8ae,	// (0x0004a885) list_single_2heading_msg_pane_g3_ParamLimits

0xc8ae,	// (0x0004a885) list_single_2heading_msg_pane_g3

0xc8ba,	// (0x0004a891) list_single_2heading_msg_pane_g4_ParamLimits

0xc8ba,	// (0x0004a891) list_single_2heading_msg_pane_g4

0x0003,

0xfccb,	// (0x0004dca2) list_single_2heading_msg_pane_g_ParamLimits

0xfccb,	// (0x0004dca2) list_single_2heading_msg_pane_g

0xc1b0,	// (0x0004a187) list_single_2heading_msg_pane_t1_ParamLimits

0xc1b0,	// (0x0004a187) list_single_2heading_msg_pane_t1

0xc1d8,	// (0x0004a1af) list_single_2heading_msg_pane_t2_ParamLimits

0xc1d8,	// (0x0004a1af) list_single_2heading_msg_pane_t2

0xc20c,	// (0x0004a1e3) list_single_2heading_msg_pane_t3_ParamLimits

0xc20c,	// (0x0004a1e3) list_single_2heading_msg_pane_t3

0xc245,	// (0x0004a21c) list_single_2heading_msg_pane_t4_ParamLimits

0xc245,	// (0x0004a21c) list_single_2heading_msg_pane_t4

0x0003,

0xfcd4,	// (0x0004dcab) list_single_2heading_msg_pane_t_ParamLimits

0xfcd4,	// (0x0004dcab) list_single_2heading_msg_pane_t

0x3b85,	// (0x00041b5c) title_pane_g4_ParamLimits

0x3b85,	// (0x00041b5c) title_pane_g4

0x98f7,	// (0x000478ce) title_pane_stacon_g3_ParamLimits

0x98f7,	// (0x000478ce) title_pane_stacon_g3

0x8076,	// (0x0004604d) list_single_2graphic_im_pane_g4_ParamLimits

0x8076,	// (0x0004604d) list_single_2graphic_im_pane_g4

0x6926,	// (0x000448fd) popup_side_volume_key_window_cp

0x6dff,	// (0x00044dd6) main_idle_act2_pane_t1

0x9eac,	// (0x00047e83) toolbar_button_pane_g10

0xb2cf,	// (0x000492a6) popup_toolbar_window_cp1

0x7483,	// (0x0004545a) clock_nsta_pane_cp_t1

0x7483,	// (0x0004545a) clock_nsta_pane_cp_t2

0x0001,

0xfad4,	// (0x0004daab) clock_nsta_pane_cp_t

0x9ae9,	// (0x00047ac0) navi_navi_volume_pane_cp2_ParamLimits

0x9af8,	// (0x00047acf) popup_side_volume_key_window_g1_ParamLimits

0x9b04,	// (0x00047adb) popup_side_volume_key_window_g2_ParamLimits

0x9b13,	// (0x00047aea) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0004d72d) popup_side_volume_key_window_g_ParamLimits

0xa314,	// (0x000482eb) fep_hwr_aid_pane

0xa3bb,	// (0x00048392) bg_fep_hwr_top_pane_g4_ParamLimits

0x780c,	// (0x000457e3) fep_hwr_top_pane_g1_ParamLimits

0x77fa,	// (0x000457d1) fep_hwr_top_pane_g2_ParamLimits

0xa3db,	// (0x000483b2) fep_hwr_top_pane_g3_ParamLimits

0xfb29,	// (0x0004db00) fep_hwr_top_pane_g_ParamLimits

0xa3f0,	// (0x000483c7) fep_hwr_top_text_pane_ParamLimits

0x66f2,	// (0x000446c9) aid_touch_tab_arrow_arrow_2

0x66e9,	// (0x000446c0) aid_touch_tab_arrow_left_2

0xa328,	// (0x000482ff) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa35f,	// (0x00048336) fep_hwr_prediction_pane

0x78f9,	// (0x000458d0) fep_vkb_prediction_pane

0xd156,	// (0x0004b12d) fep_vkb_side_pane_g3_ParamLimits

0xd156,	// (0x0004b12d) fep_vkb_side_pane_g3

0xa56b,	// (0x00048542) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xa5d7,	// (0x000485ae) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xa5e4,	// (0x000485bb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd8,	// (0x0004dbaf) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa713,	// (0x000486ea) fep_hwr_prediction_pane_g1

0xa71d,	// (0x000486f4) fep_hwr_prediction_pane_g2

0xa725,	// (0x000486fc) fep_hwr_prediction_pane_g3

0xa72d,	// (0x00048704) fep_hwr_prediction_pane_g4

0x0003,

0xfcdd,	// (0x0004dcb4) fep_hwr_prediction_pane_g

0xd3fe,	// (0x0004b3d5) fep_vkb_prediction_pane_g1

0xd408,	// (0x0004b3df) fep_vkb_prediction_pane_g2

0xd410,	// (0x0004b3e7) fep_vkb_prediction_pane_g3

0xd418,	// (0x0004b3ef) fep_vkb_prediction_pane_g4

0x0003,

0x0103,	// (0x0003e0da) fep_vkb_prediction_pane_g

0xa194,	// (0x0004816b) slider_set_pane_g3

0xa1a8,	// (0x0004817f) slider_set_pane_g4

0xa1c0,	// (0x00048197) slider_set_pane_g5

0xa194,	// (0x0004816b) slider_set_pane_g6

0xa1d6,	// (0x000481ad) slider_set_pane_g7

0x6b99,	// (0x00044b70) slider_form_pane_g3

0x6ba2,	// (0x00044b79) slider_form_pane_g4

0x6baa,	// (0x00044b81) slider_form_pane_g5

0x6b99,	// (0x00044b70) slider_form_pane_g6

0xcc08,	// (0x0004abdf) slider_form_pane_g7

0x7051,	// (0x00045028) slider_set_pane_vc_g3

0x705a,	// (0x00045031) slider_set_pane_vc_g4

0x7063,	// (0x0004503a) slider_set_pane_vc_g5

0x7051,	// (0x00045028) slider_set_pane_vc_g6

0x706c,	// (0x00045043) slider_set_pane_vc_g7

0x7051,	// (0x00045028) slider_form_pane_vc_g1

0x705a,	// (0x00045031) slider_form_pane_vc_g2

0x7063,	// (0x0004503a) slider_form_pane_vc_g3

0x7051,	// (0x00045028) slider_form_pane_vc_g4

0x722d,	// (0x00045204) slider_form_pane_vc_g5

0x0004,

0xfaba,	// (0x0004da91) slider_form_pane_vc_g

0x3b67,	// (0x00041b3e) main_idle_act3_pane

0xd420,	// (0x0004b3f7) ai3_links_pane

0xd429,	// (0x0004b400) popup_ai3_data_window_ParamLimits

0xd429,	// (0x0004b400) popup_ai3_data_window

0x3b67,	// (0x00041b3e) grid_ai3_links_pane

0xd443,	// (0x0004b41a) cell_ai3_links_pane_ParamLimits

0xd443,	// (0x0004b41a) cell_ai3_links_pane

0xd45b,	// (0x0004b432) bg_popup_sub_pane_cp11

0xd468,	// (0x0004b43f) cell_ai3_links_pane_g1

0x3b67,	// (0x00041b3e) bg_popup_sub_pane_cp12

0xd48d,	// (0x0004b464) heading_ai3_data_pane

0xd495,	// (0x0004b46c) list_ai3_gene_pane

0xd4a1,	// (0x0004b478) popup_ai3_data_window_g1

0xd4a9,	// (0x0004b480) heading_ai3_data_pane_g1

0xd4b1,	// (0x0004b488) heading_ai3_data_pane_t1

0xd4bf,	// (0x0004b496) list_double_ai3_gene_pane_ParamLimits

0xd4bf,	// (0x0004b496) list_double_ai3_gene_pane

0xd4cc,	// (0x0004b4a3) list_single_ai3_gene_pane_ParamLimits

0xd4cc,	// (0x0004b4a3) list_single_ai3_gene_pane

0x774f,	// (0x00045726) list_highlight_pane_cp7_ParamLimits

0x774f,	// (0x00045726) list_highlight_pane_cp7

0xd4d9,	// (0x0004b4b0) list_single_a13_gene_pane_t1_ParamLimits

0xd4d9,	// (0x0004b4b0) list_single_a13_gene_pane_t1

0xd4f0,	// (0x0004b4c7) list_single_ai3_gene_pane_g1

0xd4f9,	// (0x0004b4d0) list_single_ai3_gene_pane_g2

0x0001,

0x010c,	// (0x0003e0e3) list_single_ai3_gene_pane_g

0xd501,	// (0x0004b4d8) list_double_ai3_gene_pane_g1_ParamLimits

0xd501,	// (0x0004b4d8) list_double_ai3_gene_pane_g1

0xd50d,	// (0x0004b4e4) list_double_ai3_gene_pane_t1_ParamLimits

0xd50d,	// (0x0004b4e4) list_double_ai3_gene_pane_t1

0xd529,	// (0x0004b500) list_double_ai3_gene_pane_t2_ParamLimits

0xd529,	// (0x0004b500) list_double_ai3_gene_pane_t2

0xd53f,	// (0x0004b516) list_double_ai3_gene_pane_t3_ParamLimits

0xd53f,	// (0x0004b516) list_double_ai3_gene_pane_t3

0x0002,

0x0111,	// (0x0003e0e8) list_double_ai3_gene_pane_t_ParamLimits

0x0111,	// (0x0003e0e8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc1a6,	// (0x0004a17d) aid_size_min_col_2

0xd3ea,	// (0x0004b3c1) aid_size_min_msg_ParamLimits

0xd3ea,	// (0x0004b3c1) aid_size_min_msg

0xd16a,	// (0x0004b141) fep_vkb_top_text_pane_g2_ParamLimits

0xd16a,	// (0x0004b141) fep_vkb_top_text_pane_g2

0x0001,

0xfb59,	// (0x0004db30) fep_vkb_top_text_pane_g_ParamLimits

0xfb59,	// (0x0004db30) fep_vkb_top_text_pane_g

0x3b67,	// (0x00041b3e) main_hc_apps_shell_pane

0xd55c,	// (0x0004b533) grid_hc_apps_pane_ParamLimits

0xd55c,	// (0x0004b533) grid_hc_apps_pane

0xd56b,	// (0x0004b542) list_hc_apps_pane

0xd573,	// (0x0004b54a) scroll_pane_cp37_ParamLimits

0xd573,	// (0x0004b54a) scroll_pane_cp37

0xd57f,	// (0x0004b556) cell_hc_apps_pane_ParamLimits

0xd57f,	// (0x0004b556) cell_hc_apps_pane

0xd62d,	// (0x0004b604) cell_hc_apps_pane_g1_ParamLimits

0xd62d,	// (0x0004b604) cell_hc_apps_pane_g1

0xd65e,	// (0x0004b635) cell_hc_apps_pane_g2_ParamLimits

0xd65e,	// (0x0004b635) cell_hc_apps_pane_g2

0xd67a,	// (0x0004b651) cell_hc_apps_pane_g3_ParamLimits

0xd67a,	// (0x0004b651) cell_hc_apps_pane_g3

0x0002,

0x0118,	// (0x0003e0ef) cell_hc_apps_pane_g_ParamLimits

0x0118,	// (0x0003e0ef) cell_hc_apps_pane_g

0xd69c,	// (0x0004b673) cell_hc_apps_pane_t1_ParamLimits

0xd69c,	// (0x0004b673) cell_hc_apps_pane_t1

0x41c6,	// (0x0004219d) grid_highlight_pane_cp10_ParamLimits

0x41c6,	// (0x0004219d) grid_highlight_pane_cp10

0xd6dc,	// (0x0004b6b3) list_single_hc_apps_pane_ParamLimits

0xd6dc,	// (0x0004b6b3) list_single_hc_apps_pane

0xd738,	// (0x0004b70f) list_single_hc_apps_pane_g1

0xc8d2,	// (0x0004a8a9) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x0004dcbd) list_single_hc_apps_pane_g

0xc8eb,	// (0x0004a8c2) list_single_hc_apps_pane_g2_copy1

0xc26a,	// (0x0004a241) list_single_hc_apps_pane_t1

0x3bd7,	// (0x00041bae) bg_set_opt_pane_cp_ParamLimits

0x9272,	// (0x00047249) setting_slider_pane_t1_ParamLimits

0x928b,	// (0x00047262) setting_slider_pane_t2_ParamLimits

0x92a5,	// (0x0004727c) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0004d579) setting_slider_pane_t_ParamLimits

0x92bd,	// (0x00047294) slider_set_pane_ParamLimits

0x9d88,	// (0x00047d5f) control_pane_g5_ParamLimits

0x9d88,	// (0x00047d5f) control_pane_g5

0x6b49,	// (0x00044b20) slider_set_pane_g1_ParamLimits

0xa188,	// (0x0004815f) slider_set_pane_g2_ParamLimits

0xa194,	// (0x0004816b) slider_set_pane_g3_ParamLimits

0xa1a8,	// (0x0004817f) slider_set_pane_g4_ParamLimits

0xa1c0,	// (0x00048197) slider_set_pane_g5_ParamLimits

0xa194,	// (0x0004816b) slider_set_pane_g6_ParamLimits

0xa1d6,	// (0x000481ad) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0004d979) slider_set_pane_g_ParamLimits

0x5312,	// (0x000432e9) navi_icon_text_pane_ParamLimits

0xc3b0,	// (0x0004a387) aid_fill_nsta_2_ParamLimits

0xc3da,	// (0x0004a3b1) aid_touch_tab_arrow_left_ParamLimits

0xc3e6,	// (0x0004a3bd) aid_touch_tab_arrow_right_ParamLimits

0xc452,	// (0x0004a429) clock_nsta_pane_ParamLimits

0xc9e7,	// (0x0004a9be) navi_icon_pane_g1_ParamLimits

0xc9f6,	// (0x0004a9cd) navi_text_pane_t1_ParamLimits

0xce97,	// (0x0004ae6e) navi_icon_text_pane_g1_ParamLimits

0xcea6,	// (0x0004ae7d) navi_icon_text_pane_t1_ParamLimits

0xd738,	// (0x0004b70f) list_single_hc_apps_pane_g1_ParamLimits

0xc8d2,	// (0x0004a8a9) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x0004dcbd) list_single_hc_apps_pane_g_ParamLimits

0xc8eb,	// (0x0004a8c2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc26a,	// (0x0004a241) list_single_hc_apps_pane_t1_ParamLimits

0x9186,	// (0x0004715d) popup_toolbar2_fixed_window_ParamLimits

0x9186,	// (0x0004715d) popup_toolbar2_fixed_window

0xc323,	// (0x0004a2fa) popup_toolbar2_float_window

0x3b67,	// (0x00041b3e) bg_popup_sub_pane_cp27

0xd751,	// (0x0004b728) grid_toolbar2_float_pane

0x3b67,	// (0x00041b3e) bg_popup_sub_pane_cp26

0xd751,	// (0x0004b728) grid_toolbar2_fixed_pane

0xd759,	// (0x0004b730) cell_toolbar2_fixed_pane_ParamLimits

0xd759,	// (0x0004b730) cell_toolbar2_fixed_pane

0xd769,	// (0x0004b740) cell_toolbar2_fixed_pane_g1

0xd772,	// (0x0004b749) toolbar2_fixed_button_pane

0x59d8,	// (0x000439af) toolbar2_fixed_button_pane_g1

0x59e0,	// (0x000439b7) toolbar2_fixed_button_pane_g2

0x59e8,	// (0x000439bf) toolbar2_fixed_button_pane_g3

0x59f0,	// (0x000439c7) toolbar2_fixed_button_pane_g4

0x59f8,	// (0x000439cf) toolbar2_fixed_button_pane_g5

0x5a00,	// (0x000439d7) toolbar2_fixed_button_pane_g6

0x5a08,	// (0x000439df) toolbar2_fixed_button_pane_g7

0x5a10,	// (0x000439e7) toolbar2_fixed_button_pane_g8

0x5a18,	// (0x000439ef) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0004d87b) toolbar2_fixed_button_pane_g

0xd77a,	// (0x0004b751) cell_toolbar2_float_pane_ParamLimits

0xd77a,	// (0x0004b751) cell_toolbar2_float_pane

0xd78b,	// (0x0004b762) cell_toolbar2_float_pane_g1

0xd772,	// (0x0004b749) toolbar2_fixed_button_pane_cp

0xd044,	// (0x0004b01b) fep_vkb_accented_list_pane_ParamLimits

0xd044,	// (0x0004b01b) fep_vkb_accented_list_pane

0xa54b,	// (0x00048522) bg_popup_fep_shadow_pane_g9

0x5492,	// (0x00043469) bg_popup_fep_shadow_pane_cp3

0x4b73,	// (0x00042b4a) list_accented_list_pane

0xd794,	// (0x0004b76b) list_single_accented_list_pane_ParamLimits

0xd794,	// (0x0004b76b) list_single_accented_list_pane

0x5492,	// (0x00043469) list_highlight_pane_cp10

0xd7a5,	// (0x0004b77c) list_single_accented_list_pane_t1

0xbc10,	// (0x00049be7) popup_slider_window_ParamLimits

0xbc10,	// (0x00049be7) popup_slider_window

0xd3e1,	// (0x0004b3b8) aid_indentation_list_msg

0xd85f,	// (0x0004b836) bg_popup_window_pane_cp19

0xd8c9,	// (0x0004b8a0) popup_slider_window_g1

0xd8e5,	// (0x0004b8bc) popup_slider_window_g2

0xd901,	// (0x0004b8d8) popup_slider_window_g3

0x0005,

0x0124,	// (0x0003e0fb) popup_slider_window_g

0xd95d,	// (0x0004b934) popup_slider_window_t1

0xd9d1,	// (0x0004b9a8) small_volume_slider_vertical_pane

0x778a,	// (0x00045761) small_volume_slider_vertical_pane_g1

0x778a,	// (0x00045761) small_volume_slider_vertical_pane_g2

0xd9ed,	// (0x0004b9c4) small_volume_slider_vertical_pane_g3

0x0002,

0xfceb,	// (0x0004dcc2) small_volume_slider_vertical_pane_g

0x8f3e,	// (0x00046f15) area_side_right_pane_ParamLimits

0x8f3e,	// (0x00046f15) area_side_right_pane

0xa735,	// (0x0004870c) aid_size_side_button_ParamLimits

0xa735,	// (0x0004870c) aid_size_side_button

0xa749,	// (0x00048720) grid_sctrl_middle_pane_ParamLimits

0xa749,	// (0x00048720) grid_sctrl_middle_pane

0xa769,	// (0x00048740) sctrl_sk_bottom_pane

0xa77a,	// (0x00048751) sctrl_sk_top_pane

0xa78c,	// (0x00048763) aid_touch_sctrl_top

0xa799,	// (0x00048770) bg_sctrl_sk_pane_ParamLimits

0xa799,	// (0x00048770) bg_sctrl_sk_pane

0xa7a7,	// (0x0004877e) sctrl_sk_top_pane_g1

0xa7b4,	// (0x0004878b) sctrl_sk_top_pane_t1

0xa78c,	// (0x00048763) aid_touch_sctrl_bottom

0xa799,	// (0x00048770) bg_sctrl_sk_pane_cp_ParamLimits

0xa799,	// (0x00048770) bg_sctrl_sk_pane_cp

0xa7cf,	// (0x000487a6) sctrl_sk_bottom_pane_g1

0xa7b4,	// (0x0004878b) sctrl_sk_bottom_pane_t1

0xa7d8,	// (0x000487af) cell_sctrl_middle_pane_ParamLimits

0xa7d8,	// (0x000487af) cell_sctrl_middle_pane

0xa7f3,	// (0x000487ca) aid_touch_sctrl_middle_ParamLimits

0xa7f3,	// (0x000487ca) aid_touch_sctrl_middle

0xa805,	// (0x000487dc) bg_sctrl_middle_pane_ParamLimits

0xa805,	// (0x000487dc) bg_sctrl_middle_pane

0xa56b,	// (0x00048542) cell_sctrl_middle_pane_g1_ParamLimits

0xa56b,	// (0x00048542) cell_sctrl_middle_pane_g1

0xa813,	// (0x000487ea) cell_sctrl_middle_pane_g2_ParamLimits

0xa813,	// (0x000487ea) cell_sctrl_middle_pane_g2

0x0001,

0xfcf7,	// (0x0004dcce) cell_sctrl_middle_pane_g_ParamLimits

0xfcf7,	// (0x0004dcce) cell_sctrl_middle_pane_g

0x59d8,	// (0x000439af) bg_sctrl_middle_pane_g1

0x59e8,	// (0x000439bf) bg_sctrl_middle_pane_g2

0x59e0,	// (0x000439b7) bg_sctrl_middle_pane_g3

0x59f8,	// (0x000439cf) bg_sctrl_middle_pane_g4

0x59f0,	// (0x000439c7) bg_sctrl_middle_pane_g5

0x5a00,	// (0x000439d7) bg_sctrl_middle_pane_g6

0x5a08,	// (0x000439df) bg_sctrl_middle_pane_g7

0x5a18,	// (0x000439ef) bg_sctrl_middle_pane_g8

0x0007,

0xfcfc,	// (0x0004dcd3) bg_sctrl_middle_pane_g

0x5a10,	// (0x000439e7) bg_sctrl_middle_pane_g8_copy1

0x59d8,	// (0x000439af) bg_sctrl_sk_pane_g1

0x59e0,	// (0x000439b7) bg_sctrl_sk_pane_g2

0x59e8,	// (0x000439bf) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0004d87b) bg_sctrl_sk_pane_g

0x49a6,	// (0x0004297d) aid_size_touch_scroll_bar

0x59f0,	// (0x000439c7) bg_sctrl_sk_pane_g4

0x59f8,	// (0x000439cf) bg_sctrl_sk_pane_g5

0x5a00,	// (0x000439d7) bg_sctrl_sk_pane_g6

0x5a08,	// (0x000439df) bg_sctrl_sk_pane_g7

0x5a10,	// (0x000439e7) bg_sctrl_sk_pane_g8

0x5a18,	// (0x000439ef) bg_sctrl_sk_pane_g9

0x570e,	// (0x000436e5) popup_fep_china_hwr2_fs_candidate_window

0xb918,	// (0x000498ef) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb918,	// (0x000498ef) popup_fep_china_hwr2_fs_control_window

0xa56b,	// (0x00048542) sctrl_sk_top_pane_g2

0x0001,

0xfcf2,	// (0x0004dcc9) sctrl_sk_top_pane_g

0xd9f6,	// (0x0004b9cd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9f6,	// (0x0004b9cd) aid_fep_china_hwr2_fs_cell

0xda08,	// (0x0004b9df) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda08,	// (0x0004b9df) bg_popup_fep_shadow_pane_cp4

0xda1f,	// (0x0004b9f6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda1f,	// (0x0004b9f6) bg_popup_fep_shadow_pane_cp5

0xda31,	// (0x0004ba08) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda31,	// (0x0004ba08) popup_fep_china_hwr2_fs_control_bar_grid

0xda41,	// (0x0004ba18) popup_fep_china_hwr2_fs_control_funtion_grid

0xda49,	// (0x0004ba20) aid_fep_china_hwr2_fs_candi_cell

0x3b67,	// (0x00041b3e) bg_popup_fep_shadow_pane_cp6

0xda53,	// (0x0004ba2a) popup_fep_china_hwr2_fs_candidate_grid

0xda5d,	// (0x0004ba34) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda5d,	// (0x0004ba34) cell_fep_china_hwr2_fs_funtion_grid

0x778a,	// (0x00045761) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda75,	// (0x0004ba4c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda75,	// (0x0004ba4c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda83,	// (0x0004ba5a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda83,	// (0x0004ba5a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0x0158,	// (0x0003e12f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0x0158,	// (0x0003e12f) cell_fep_china_hwr2_fs_funtion_grid_g

0xda99,	// (0x0004ba70) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda99,	// (0x0004ba70) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdaae,	// (0x0004ba85) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdaae,	// (0x0004ba85) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x015d,	// (0x0003e134) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x015d,	// (0x0003e134) cell_fep_china_hwr2_fs_funtion_grid_t

0xdaca,	// (0x0004baa1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdad2,	// (0x0004baa9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdada,	// (0x0004bab1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x0162,	// (0x0003e139) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdae2,	// (0x0004bab9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdae2,	// (0x0004bab9) cell_fep_china_hwr2_fs_candidate_grid

0xdafb,	// (0x0004bad2) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb03,	// (0x0004bada) popup_fep_china_hwr2_fs_candidate_grid_g21

0x778a,	// (0x00045761) cell_fep_china_hwr2_fs_candidate_grid_g1

0x778a,	// (0x00045761) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5e,	// (0x0004db35) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb0b,	// (0x0004bae2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5825,	// (0x000437fc) clock_nsta_pane_cp_24_ParamLimits

0x5825,	// (0x000437fc) clock_nsta_pane_cp_24

0x588d,	// (0x00043864) indicator_nsta_pane_cp_24_ParamLimits

0x588d,	// (0x00043864) indicator_nsta_pane_cp_24

0x65d5,	// (0x000445ac) heading_pane_g1

0x0001,

0xf909,	// (0x0004d8e0) heading_pane_g

0x6c8c,	// (0x00044c63) grid_sct_catagory_button_pane

0x664a,	// (0x00044621) scroll_pane_cp5_ParamLimits

0x74e8,	// (0x000454bf) button_value_adjust_pane_cp5_ParamLimits

0x74e8,	// (0x000454bf) button_value_adjust_pane_cp5

0x75a6,	// (0x0004557d) form2_midp_time_pane_ParamLimits

0xdb19,	// (0x0004baf0) cell_sct_catagory_button_pane_ParamLimits

0xdb19,	// (0x0004baf0) cell_sct_catagory_button_pane

0x774f,	// (0x00045726) bg_button_pane_cp01_ParamLimits

0x774f,	// (0x00045726) bg_button_pane_cp01

0x778a,	// (0x00045761) cell_sct_catagory_button_pane_g1

0xc2b2,	// (0x0004a289) popup_tb_extension_window

0xdb2b,	// (0x0004bb02) aid_size_cell_ext_ParamLimits

0xdb2b,	// (0x0004bb02) aid_size_cell_ext

0x41c6,	// (0x0004219d) bg_tb_trans_pane_cp1_ParamLimits

0x41c6,	// (0x0004219d) bg_tb_trans_pane_cp1

0xdb4b,	// (0x0004bb22) grid_tb_ext_pane_ParamLimits

0xdb4b,	// (0x0004bb22) grid_tb_ext_pane

0xdb79,	// (0x0004bb50) cell_tb_ext_pane_ParamLimits

0xdb79,	// (0x0004bb50) cell_tb_ext_pane

0xdb90,	// (0x0004bb67) cell_tb_ext_pane_g1_ParamLimits

0xdb90,	// (0x0004bb67) cell_tb_ext_pane_g1

0xdbad,	// (0x0004bb84) cell_tb_ext_pane_t1

0x41c6,	// (0x0004219d) list_highlight_pane_cp11_ParamLimits

0x41c6,	// (0x0004219d) list_highlight_pane_cp11

0x91a5,	// (0x0004717c) popup_uni_indicator_window_ParamLimits

0x91a5,	// (0x0004717c) popup_uni_indicator_window

0x4a6d,	// (0x00042a44) bg_popup_sub_pane_cp14

0xdbc8,	// (0x0004bb9f) list_uniindi_pane

0xdbd4,	// (0x0004bbab) uniindi_top_pane

0x41c6,	// (0x0004219d) bg_uniindi_top_pane

0xdbf3,	// (0x0004bbca) uniindi_top_pane_g1

0xdc09,	// (0x0004bbe0) uniindi_top_pane_g2

0x0003,

0x0169,	// (0x0003e140) uniindi_top_pane_g

0xdc33,	// (0x0004bc0a) uniindi_top_pane_t1

0xdc5d,	// (0x0004bc34) list_single_uniindi_pane_ParamLimits

0xdc5d,	// (0x0004bc34) list_single_uniindi_pane

0x778a,	// (0x00045761) bg_uniindi_top_pane_g1

0xdc70,	// (0x0004bc47) list_single_uniindi_pane_g1

0xdc83,	// (0x0004bc5a) list_single_uniindi_pane_t1

0x901b,	// (0x00046ff2) control_bg_pane

0xdca8,	// (0x0004bc7f) bg_sctrl_sk_pane_cp1

0xdcb1,	// (0x0004bc88) bg_sctrl_sk_pane_cp2

0xdcba,	// (0x0004bc91) control_bg_pane_g1

0xdcc3,	// (0x0004bc9a) control_bg_pane_g2

0x0001,

0x0172,	// (0x0003e149) control_bg_pane_g

0x73f7,	// (0x000453ce) cell_indicator_nsta_pane_g1_ParamLimits

0xcdc8,	// (0x0004ad9f) cell_indicator_nsta_pane_g2_ParamLimits

0xfacf,	// (0x0004daa6) cell_indicator_nsta_pane_g_ParamLimits

0xc007,	// (0x00049fde) form2_midp_time_pane_t1_ParamLimits

0x47e8,	// (0x000427bf) main_idle_act4_pane_ParamLimits

0x47e8,	// (0x000427bf) main_idle_act4_pane

0xc2b2,	// (0x0004a289) popup_tb_extension_window_ParamLimits

0xdb69,	// (0x0004bb40) tb_ext_find_pane_ParamLimits

0xdb69,	// (0x0004bb40) tb_ext_find_pane

0xdccc,	// (0x0004bca3) ai_gene_pane_1_cp1

0x5514,	// (0x000434eb) ai_gene_pane_2_cp1

0xdcd4,	// (0x0004bcab) list_single_idle_plugin_calendar_pane

0xdcdd,	// (0x0004bcb4) list_single_idle_plugin_notification_pane

0xdd07,	// (0x0004bcde) list_single_idle_plugin_player_pane

0xdd10,	// (0x0004bce7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd10,	// (0x0004bce7) list_single_idle_plugin_shortcut_pane

0xdd32,	// (0x0004bd09) main_idle_act4_pane_t1

0xdd44,	// (0x0004bd1b) main_idle_act4_pane_t2

0x0001,

0xfd0d,	// (0x0004dce4) main_idle_act4_pane_t

0xdd56,	// (0x0004bd2d) middle_sk_idle_act4_pane_ParamLimits

0xdd56,	// (0x0004bd2d) middle_sk_idle_act4_pane

0xdd6c,	// (0x0004bd43) popup_clock_digital_analogue_window_cp2

0xdd86,	// (0x0004bd5d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd86,	// (0x0004bd5d) shortcut_wheel_idle_act4_pane

0x778a,	// (0x00045761) shortcut_wheel_idle_act4_pane_g1

0x778a,	// (0x00045761) shortcut_wheel_idle_act4_pane_g2

0x778a,	// (0x00045761) shortcut_wheel_idle_act4_pane_g3

0x778a,	// (0x00045761) shortcut_wheel_idle_act4_pane_g4

0x778a,	// (0x00045761) shortcut_wheel_idle_act4_pane_g5

0xdd9a,	// (0x0004bd71) shortcut_wheel_idle_act4_pane_g6

0xdda2,	// (0x0004bd79) shortcut_wheel_idle_act4_pane_g7

0xddaa,	// (0x0004bd81) shortcut_wheel_idle_act4_pane_g8

0xddb2,	// (0x0004bd89) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd12,	// (0x0004dce9) shortcut_wheel_idle_act4_pane_g

0x7931,	// (0x00045908) middle_sk_idle_act4_pane_g1_ParamLimits

0x7931,	// (0x00045908) middle_sk_idle_act4_pane_g1

0xde16,	// (0x0004bded) middle_sk_idle_act4_pane_g2_ParamLimits

0xde16,	// (0x0004bded) middle_sk_idle_act4_pane_g2

0x0001,

0xfd35,	// (0x0004dd0c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd35,	// (0x0004dd0c) middle_sk_idle_act4_pane_g

0xde22,	// (0x0004bdf9) middle_sk_idle_act4_pane_t1_ParamLimits

0xde22,	// (0x0004bdf9) middle_sk_idle_act4_pane_t1

0xde3f,	// (0x0004be16) grid_ai_shortcut_pane_ParamLimits

0xde3f,	// (0x0004be16) grid_ai_shortcut_pane

0xde58,	// (0x0004be2f) list_highlight_pane_cp16_ParamLimits

0xde58,	// (0x0004be2f) list_highlight_pane_cp16

0xde65,	// (0x0004be3c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde65,	// (0x0004be3c) list_single_idle_plugin_shortcut_pane_g1

0xde71,	// (0x0004be48) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde71,	// (0x0004be48) list_single_idle_plugin_shortcut_pane_g2

0xde89,	// (0x0004be60) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde89,	// (0x0004be60) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3a,	// (0x0004dd11) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3a,	// (0x0004dd11) list_single_idle_plugin_shortcut_pane_g

0xde9c,	// (0x0004be73) cell_ai_shortcut_pane_ParamLimits

0xde9c,	// (0x0004be73) cell_ai_shortcut_pane

0xdec0,	// (0x0004be97) cell_ai_shortcut_pane_g1_ParamLimits

0xdec0,	// (0x0004be97) cell_ai_shortcut_pane_g1

0xdccc,	// (0x0004bca3) ai_gene_pane_1_cp2

0xdee2,	// (0x0004beb9) ai_gene_pane_2_cp2

0xdeea,	// (0x0004bec1) list_highlight_pane_cp15

0xdef3,	// (0x0004beca) list_single_idle_plugin_calendar_pane_g1

0xdeea,	// (0x0004bec1) list_highlight_pane_cp17

0xdefb,	// (0x0004bed2) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf03,	// (0x0004beda) list_single_idle_plugin_player_pane_g1

0x6e8b,	// (0x00044e62) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd41,	// (0x0004dd18) list_single_idle_plugin_player_pane_g

0xdf0b,	// (0x0004bee2) list_single_idle_plugin_player_pane_t1

0xdf19,	// (0x0004bef0) list_single_idle_plugin_player_pane_t2

0xdf27,	// (0x0004befe) list_single_idle_plugin_player_pane_t3

0xdf35,	// (0x0004bf0c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd46,	// (0x0004dd1d) list_single_idle_plugin_player_pane_t

0xdf43,	// (0x0004bf1a) wait_bar_pane_cp15

0xdf4b,	// (0x0004bf22) grid_ai_notification_pane

0x6e8b,	// (0x00044e62) list_single_idle_plugin_notification_pane_g1

0xdf54,	// (0x0004bf2b) cell_ai_notification_pane_ParamLimits

0xdf54,	// (0x0004bf2b) cell_ai_notification_pane

0xdf61,	// (0x0004bf38) cell_ai_notification_pane_g1

0xdf69,	// (0x0004bf40) cell_ai_notification_pane_t1

0xdf77,	// (0x0004bf4e) tb_ext_find_button_pane

0xdf7f,	// (0x0004bf56) tb_ext_find_pane_g1

0xdf87,	// (0x0004bf5e) tb_ext_find_pane_t1

0x4fa5,	// (0x00042f7c) tb_ext_find_button_pane_g1

0xdf95,	// (0x0004bf6c) tb_ext_find_button_pane_g2

0x0001,

0xfd4f,	// (0x0004dd26) tb_ext_find_button_pane_g

0xdd32,	// (0x0004bd09) main_idle_act4_pane_t1_ParamLimits

0xdd44,	// (0x0004bd1b) main_idle_act4_pane_t2_ParamLimits

0xfd0d,	// (0x0004dce4) main_idle_act4_pane_t_ParamLimits

0xdd6c,	// (0x0004bd43) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd7a,	// (0x0004bd51) sat_plugin_idle_act4_pane_ParamLimits

0xdd7a,	// (0x0004bd51) sat_plugin_idle_act4_pane

0xdf9e,	// (0x0004bf75) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf9e,	// (0x0004bf75) sat_plugin_idle_act4_pane_t1

0xdfb1,	// (0x0004bf88) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfb1,	// (0x0004bf88) sat_plugin_idle_act4_pane_t2

0xdfc4,	// (0x0004bf9b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfc4,	// (0x0004bf9b) sat_plugin_idle_act4_pane_t3

0xdfd7,	// (0x0004bfae) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfd7,	// (0x0004bfae) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd54,	// (0x0004dd2b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd54,	// (0x0004dd2b) sat_plugin_idle_act4_pane_t

0x90e0,	// (0x000470b7) popup_battery_window_ParamLimits

0x90e0,	// (0x000470b7) popup_battery_window

0x41c6,	// (0x0004219d) bg_popup_sub_pane_cp25_ParamLimits

0x41c6,	// (0x0004219d) bg_popup_sub_pane_cp25

0xdfea,	// (0x0004bfc1) popup_battery_window_g1_ParamLimits

0xdfea,	// (0x0004bfc1) popup_battery_window_g1

0xdff6,	// (0x0004bfcd) popup_battery_window_t1_ParamLimits

0xdff6,	// (0x0004bfcd) popup_battery_window_t1

0xe008,	// (0x0004bfdf) popup_battery_window_t2_ParamLimits

0xe008,	// (0x0004bfdf) popup_battery_window_t2

0x0001,

0xfd5d,	// (0x0004dd34) popup_battery_window_t_ParamLimits

0xfd5d,	// (0x0004dd34) popup_battery_window_t

0xb77a,	// (0x00049751) midp_canvas_pane_ParamLimits

0xb7dc,	// (0x000497b3) midp_keypad_pane_ParamLimits

0xb7dc,	// (0x000497b3) midp_keypad_pane

0x4bc5,	// (0x00042b9c) main_midp_pane_ParamLimits

0x74a1,	// (0x00045478) signal_pane_g2_cp_ParamLimits

0xe025,	// (0x0004bffc) aid_size_cell_midp_keypad_ParamLimits

0xe025,	// (0x0004bffc) aid_size_cell_midp_keypad

0xe03f,	// (0x0004c016) midp_keyp_game_grid_pane_ParamLimits

0xe03f,	// (0x0004c016) midp_keyp_game_grid_pane

0xe05f,	// (0x0004c036) midp_keyp_rocker_pane_ParamLimits

0xe05f,	// (0x0004c036) midp_keyp_rocker_pane

0xe098,	// (0x0004c06f) midp_keyp_sk_left_pane_ParamLimits

0xe098,	// (0x0004c06f) midp_keyp_sk_left_pane

0xe0f2,	// (0x0004c0c9) midp_keyp_sk_right_pane_ParamLimits

0xe0f2,	// (0x0004c0c9) midp_keyp_sk_right_pane

0x3b67,	// (0x00041b3e) bg_button_pane_cp03

0xe14c,	// (0x0004c123) midp_keyp_sk_left_pane_g1

0x3b67,	// (0x00041b3e) bg_button_pane_cp04

0xe14c,	// (0x0004c123) midp_keyp_sk_right_pane_g1

0x778a,	// (0x00045761) midp_keyp_rocker_pane_g1

0xe155,	// (0x0004c12c) keyp_game_cell_pane_ParamLimits

0xe155,	// (0x0004c12c) keyp_game_cell_pane

0x3b67,	// (0x00041b3e) bg_button_pane_cp02

0xe168,	// (0x0004c13f) keyp_game_cell_pane_g1

0x9124,	// (0x000470fb) popup_fep_vkb2_window_ParamLimits

0x9124,	// (0x000470fb) popup_fep_vkb2_window

0xa834,	// (0x0004880b) aid_size_cell_vkb2_ParamLimits

0xa834,	// (0x0004880b) aid_size_cell_vkb2

0xa888,	// (0x0004885f) popup_fep_vkb2_window_g1_ParamLimits

0xa888,	// (0x0004885f) popup_fep_vkb2_window_g1

0xa8d0,	// (0x000488a7) vkb2_area_bottom_pane_ParamLimits

0xa8d0,	// (0x000488a7) vkb2_area_bottom_pane

0xa91c,	// (0x000488f3) vkb2_area_keypad_pane_ParamLimits

0xa91c,	// (0x000488f3) vkb2_area_keypad_pane

0xa95e,	// (0x00048935) vkb2_area_top_pane_ParamLimits

0xa95e,	// (0x00048935) vkb2_area_top_pane

0xa9d8,	// (0x000489af) vkb2_top_entry_pane_ParamLimits

0xa9d8,	// (0x000489af) vkb2_top_entry_pane

0xaa02,	// (0x000489d9) vkb2_top_grid_left_pane_ParamLimits

0xaa02,	// (0x000489d9) vkb2_top_grid_left_pane

0xaa20,	// (0x000489f7) vkb2_top_grid_right_pane_ParamLimits

0xaa20,	// (0x000489f7) vkb2_top_grid_right_pane

0xaa3e,	// (0x00048a15) vkb2_cell_keypad_pane_ParamLimits

0xaa3e,	// (0x00048a15) vkb2_cell_keypad_pane

0xab0f,	// (0x00048ae6) vkb2_area_bottom_grid_pane_ParamLimits

0xab0f,	// (0x00048ae6) vkb2_area_bottom_grid_pane

0xab35,	// (0x00048b0c) vkb2_area_bottom_pane_g1_ParamLimits

0xab35,	// (0x00048b0c) vkb2_area_bottom_pane_g1

0xab59,	// (0x00048b30) vkb2_area_bottom_pane_g2_ParamLimits

0xab59,	// (0x00048b30) vkb2_area_bottom_pane_g2

0xab87,	// (0x00048b5e) vkb2_area_bottom_pane_g3_ParamLimits

0xab87,	// (0x00048b5e) vkb2_area_bottom_pane_g3

0x0002,

0xfd62,	// (0x0004dd39) vkb2_area_bottom_pane_g_ParamLimits

0xfd62,	// (0x0004dd39) vkb2_area_bottom_pane_g

0xabe8,	// (0x00048bbf) vkb2_top_cell_left_pane_ParamLimits

0xabe8,	// (0x00048bbf) vkb2_top_cell_left_pane

0xe179,	// (0x0004c150) vkb2_top_entry_pane_g1_ParamLimits

0xe179,	// (0x0004c150) vkb2_top_entry_pane_g1

0xe187,	// (0x0004c15e) vkb2_top_entry_pane_t1_ParamLimits

0xe187,	// (0x0004c15e) vkb2_top_entry_pane_t1

0xe1b9,	// (0x0004c190) vkb2_top_entry_pane_t2_ParamLimits

0xe1b9,	// (0x0004c190) vkb2_top_entry_pane_t2

0xe1eb,	// (0x0004c1c2) vkb2_top_entry_pane_t3_ParamLimits

0xe1eb,	// (0x0004c1c2) vkb2_top_entry_pane_t3

0x0002,

0xfd69,	// (0x0004dd40) vkb2_top_entry_pane_t_ParamLimits

0xfd69,	// (0x0004dd40) vkb2_top_entry_pane_t

0xac35,	// (0x00048c0c) vkb2_top_grid_right_pane_g1_ParamLimits

0xac35,	// (0x00048c0c) vkb2_top_grid_right_pane_g1

0xac4b,	// (0x00048c22) vkb2_top_grid_right_pane_g2_ParamLimits

0xac4b,	// (0x00048c22) vkb2_top_grid_right_pane_g2

0xac63,	// (0x00048c3a) vkb2_top_grid_right_pane_g3_ParamLimits

0xac63,	// (0x00048c3a) vkb2_top_grid_right_pane_g3

0xac7b,	// (0x00048c52) vkb2_top_grid_right_pane_g4_ParamLimits

0xac7b,	// (0x00048c52) vkb2_top_grid_right_pane_g4

0x0003,

0xfd70,	// (0x0004dd47) vkb2_top_grid_right_pane_g_ParamLimits

0xfd70,	// (0x0004dd47) vkb2_top_grid_right_pane_g

0xac91,	// (0x00048c68) vkb2_top_cell_left_pane_g1

0xaca8,	// (0x00048c7f) vkb2_cell_keypad_pane_g1_ParamLimits

0xaca8,	// (0x00048c7f) vkb2_cell_keypad_pane_g1

0xe201,	// (0x0004c1d8) vkb2_cell_keypad_pane_t1_ParamLimits

0xe201,	// (0x0004c1d8) vkb2_cell_keypad_pane_t1

0xacb6,	// (0x00048c8d) vkb2_cell_bottom_grid_pane_ParamLimits

0xacb6,	// (0x00048c8d) vkb2_cell_bottom_grid_pane

0xacef,	// (0x00048cc6) vkb2_cell_bottom_grid_pane_g1

0xddba,	// (0x0004bd91) aid_call2_pane_cp02

0xddc2,	// (0x0004bd99) aid_call_pane_cp02

0xddca,	// (0x0004bda1) clock_digital_number_pane_cp10

0xddd2,	// (0x0004bda9) clock_digital_number_pane_cp11

0xddda,	// (0x0004bdb1) clock_digital_number_pane_cp12

0xdde2,	// (0x0004bdb9) clock_digital_number_pane_cp13

0xddea,	// (0x0004bdc1) clock_digital_separator_pane_cp10

0x4fa5,	// (0x00042f7c) popup_clock_digital_analogue_window_cp2_g1

0x4fa5,	// (0x00042f7c) popup_clock_digital_analogue_window_cp2_g2

0xddf2,	// (0x0004bdc9) popup_clock_digital_analogue_window_cp2_g3

0x4fa5,	// (0x00042f7c) popup_clock_digital_analogue_window_cp2_g4

0xddf2,	// (0x0004bdc9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd25,	// (0x0004dcfc) popup_clock_digital_analogue_window_cp2_g

0xddfa,	// (0x0004bdd1) popup_clock_digital_analogue_window_cp2_t1

0xde08,	// (0x0004bddf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd30,	// (0x0004dd07) popup_clock_digital_analogue_window_cp2_t

0x778a,	// (0x00045761) clock_digital_number_pane_cp10_g1

0x778a,	// (0x00045761) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5e,	// (0x0004db35) clock_digital_number_pane_cp10_g

0x778a,	// (0x00045761) clock_digital_separator_pane_cp10_g1

0x778a,	// (0x00045761) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5e,	// (0x0004db35) clock_digital_separator_pane_cp10_g

0xdc15,	// (0x0004bbec) uniindi_top_pane_g3

0xdc26,	// (0x0004bbfd) uniindi_top_pane_g4

0xaac9,	// (0x00048aa0) vkb2_row_keypad_pane_ParamLimits

0xaac9,	// (0x00048aa0) vkb2_row_keypad_pane

0xad0b,	// (0x00048ce2) vkb2_cell_t_keypad_pane_ParamLimits

0xad0b,	// (0x00048ce2) vkb2_cell_t_keypad_pane

0xad1b,	// (0x00048cf2) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xad1b,	// (0x00048cf2) vkb2_cell_t_keypad_pane_cp08

0xad2e,	// (0x00048d05) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xad2e,	// (0x00048d05) vkb2_cell_t_keypad_pane_cp09

0xad42,	// (0x00048d19) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xad42,	// (0x00048d19) vkb2_cell_t_keypad_pane_cp01

0xad53,	// (0x00048d2a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xad53,	// (0x00048d2a) vkb2_cell_t_keypad_pane_cp02

0xad64,	// (0x00048d3b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xad64,	// (0x00048d3b) vkb2_cell_t_keypad_pane_cp03

0xad75,	// (0x00048d4c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xad75,	// (0x00048d4c) vkb2_cell_t_keypad_pane_cp04

0xad86,	// (0x00048d5d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xad86,	// (0x00048d5d) vkb2_cell_t_keypad_pane_cp05

0xad97,	// (0x00048d6e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xad97,	// (0x00048d6e) vkb2_cell_t_keypad_pane_cp06

0xada8,	// (0x00048d7f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xada8,	// (0x00048d7f) vkb2_cell_t_keypad_pane_cp07

0xadb9,	// (0x00048d90) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xadb9,	// (0x00048d90) vkb2_cell_t_keypad_pane_cp10

0xa56b,	// (0x00048542) vkb2_cell_t_keypad_pane_g1

0xe218,	// (0x0004c1ef) vkb2_cell_t_keypad_pane_t1

0x901b,	// (0x00046ff2) popup_grid_graphic2_window

0xe22a,	// (0x0004c201) aid_size_cell_graphic2_ParamLimits

0xe22a,	// (0x0004c201) aid_size_cell_graphic2

0x712f,	// (0x00045106) bg_popup_window_pane_cp21_ParamLimits

0x712f,	// (0x00045106) bg_popup_window_pane_cp21

0xe256,	// (0x0004c22d) graphic2_pages_pane_ParamLimits

0xe256,	// (0x0004c22d) graphic2_pages_pane

0xe29c,	// (0x0004c273) grid_graphic2_control_pane_ParamLimits

0xe29c,	// (0x0004c273) grid_graphic2_control_pane

0xe2ca,	// (0x0004c2a1) grid_graphic2_pane_ParamLimits

0xe2ca,	// (0x0004c2a1) grid_graphic2_pane

0xe32a,	// (0x0004c301) cell_graphic2_pane

0x3b67,	// (0x00041b3e) main_comp_mode_pane

0xd495,	// (0x0004b46c) list_ai3_gene_pane_ParamLimits

0xd85f,	// (0x0004b836) bg_popup_window_pane_cp19_ParamLimits

0xd86b,	// (0x0004b842) bg_touch_area_indi_pane_ParamLimits

0xd86b,	// (0x0004b842) bg_touch_area_indi_pane

0xd881,	// (0x0004b858) bg_touch_area_indi_pane_cp01_ParamLimits

0xd881,	// (0x0004b858) bg_touch_area_indi_pane_cp01

0xd897,	// (0x0004b86e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd897,	// (0x0004b86e) bg_touch_area_indi_pane_cp02

0xd8af,	// (0x0004b886) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8af,	// (0x0004b886) bg_touch_area_indi_pane_cp03

0xd8c9,	// (0x0004b8a0) popup_slider_window_g1_ParamLimits

0xd8e5,	// (0x0004b8bc) popup_slider_window_g2_ParamLimits

0xd901,	// (0x0004b8d8) popup_slider_window_g3_ParamLimits

0x0124,	// (0x0003e0fb) popup_slider_window_g_ParamLimits

0xd95d,	// (0x0004b934) popup_slider_window_t1_ParamLimits

0xd9d1,	// (0x0004b9a8) small_volume_slider_vertical_pane_ParamLimits

0xe32a,	// (0x0004c301) cell_graphic2_pane_ParamLimits

0xe379,	// (0x0004c350) bg_button_pane_cp10_ParamLimits

0xe379,	// (0x0004c350) bg_button_pane_cp10

0xe38c,	// (0x0004c363) bg_button_pane_cp11_ParamLimits

0xe38c,	// (0x0004c363) bg_button_pane_cp11

0xe39f,	// (0x0004c376) graphic2_pages_pane_g1_ParamLimits

0xe39f,	// (0x0004c376) graphic2_pages_pane_g1

0xe3ba,	// (0x0004c391) graphic2_pages_pane_g2_ParamLimits

0xe3ba,	// (0x0004c391) graphic2_pages_pane_g2

0x0001,

0x01e8,	// (0x0003e1bf) graphic2_pages_pane_g_ParamLimits

0x01e8,	// (0x0003e1bf) graphic2_pages_pane_g

0xe3d2,	// (0x0004c3a9) graphic2_pages_pane_t1_ParamLimits

0xe3d2,	// (0x0004c3a9) graphic2_pages_pane_t1

0xe3ea,	// (0x0004c3c1) cell_graphic2_control_pane_ParamLimits

0xe3ea,	// (0x0004c3c1) cell_graphic2_control_pane

0xe404,	// (0x0004c3db) cell_graphic2_pane_g1_ParamLimits

0xe404,	// (0x0004c3db) cell_graphic2_pane_g1

0xe411,	// (0x0004c3e8) cell_graphic2_pane_g2_ParamLimits

0xe411,	// (0x0004c3e8) cell_graphic2_pane_g2

0xe41e,	// (0x0004c3f5) cell_graphic2_pane_g3_ParamLimits

0xe41e,	// (0x0004c3f5) cell_graphic2_pane_g3

0xe42b,	// (0x0004c402) cell_graphic2_pane_g4_ParamLimits

0xe42b,	// (0x0004c402) cell_graphic2_pane_g4

0xe438,	// (0x0004c40f) cell_graphic2_pane_g5_ParamLimits

0xe438,	// (0x0004c40f) cell_graphic2_pane_g5

0x0004,

0x01ed,	// (0x0003e1c4) cell_graphic2_pane_g_ParamLimits

0x01ed,	// (0x0003e1c4) cell_graphic2_pane_g

0xe453,	// (0x0004c42a) cell_graphic2_pane_t1_ParamLimits

0xe453,	// (0x0004c42a) cell_graphic2_pane_t1

0x5ad4,	// (0x00043aab) grid_highlight_pane_cp11_ParamLimits

0x5ad4,	// (0x00043aab) grid_highlight_pane_cp11

0x4a6d,	// (0x00042a44) bg_button_pane_cp05

0xe469,	// (0x0004c440) cell_graphic2_control_pane_g1

0x778a,	// (0x00045761) bg_touch_area_indi_pane_g1

0xe476,	// (0x0004c44d) aid_cmod_rocker_key_size

0xe480,	// (0x0004c457) aid_cmode_itu_key_size

0xe48a,	// (0x0004c461) main_cmode_video_pane

0xe494,	// (0x0004c46b) main_comp_mode_itu_pane

0xe4a0,	// (0x0004c477) main_comp_mode_rocker_pane

0xe4ac,	// (0x0004c483) cell_cmode_rocker_pane_ParamLimits

0xe4ac,	// (0x0004c483) cell_cmode_rocker_pane

0xe4be,	// (0x0004c495) cell_cmode_itu_pane_ParamLimits

0xe4be,	// (0x0004c495) cell_cmode_itu_pane

0x4a6d,	// (0x00042a44) bg_button_pane_cp06_ParamLimits

0x4a6d,	// (0x00042a44) bg_button_pane_cp06

0x7931,	// (0x00045908) cell_cmode_rocker_pane_g1_ParamLimits

0x7931,	// (0x00045908) cell_cmode_rocker_pane_g1

0xda75,	// (0x0004ba4c) cell_cmode_rocker_pane_g2_ParamLimits

0xda75,	// (0x0004ba4c) cell_cmode_rocker_pane_g2

0x0001,

0xfd79,	// (0x0004dd50) cell_cmode_rocker_pane_g_ParamLimits

0xfd79,	// (0x0004dd50) cell_cmode_rocker_pane_g

0x3b67,	// (0x00041b3e) bg_button_pane_cp07

0xe4d3,	// (0x0004c4aa) cell_cmode_itu_pane_g1

0xe4dc,	// (0x0004c4b3) cell_cmode_itu_pane_t1

0xe4ea,	// (0x0004c4c1) cell_cmode_itu_pane_t2

0x0001,

0x01fd,	// (0x0003e1d4) cell_cmode_itu_pane_t

0xdc98,	// (0x0004bc6f) aid_touch_ctrl_left

0xdca0,	// (0x0004bc77) aid_touch_ctrl_right

0x3b67,	// (0x00041b3e) compa_mode_pane

0xe4f8,	// (0x0004c4cf) aid_cmod_rocker_key_size_cp

0xe502,	// (0x0004c4d9) aid_cmode_itu_key_size_cp

0xe50c,	// (0x0004c4e3) compa_mode_pane_g1

0xe514,	// (0x0004c4eb) compa_mode_pane_g2

0xe51c,	// (0x0004c4f3) compa_mode_pane_g3

0x0002,

0x0202,	// (0x0003e1d9) compa_mode_pane_g

0xe524,	// (0x0004c4fb) main_comp_mode_itu_pane_cp

0xe52c,	// (0x0004c503) main_comp_mode_rocker_pane_cp

0xe534,	// (0x0004c50b) cell_cmode_itu_pane_cp_ParamLimits

0xe534,	// (0x0004c50b) cell_cmode_itu_pane_cp

0xe549,	// (0x0004c520) cell_cmode_rocker_pane_cp_ParamLimits

0xe549,	// (0x0004c520) cell_cmode_rocker_pane_cp

0x4a6d,	// (0x00042a44) bg_button_pane_cp06_cp_ParamLimits

0x4a6d,	// (0x00042a44) bg_button_pane_cp06_cp

0x7931,	// (0x00045908) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7931,	// (0x00045908) cell_cmode_rocker_pane_g1_cp

0x778a,	// (0x00045761) cell_cmode_rocker_pane_g2_cp

0x3b67,	// (0x00041b3e) bg_button_pane_cp07_cp

0x6b99,	// (0x00044b70) cell_cmode_itu_pane_g1_cp

0xe55b,	// (0x0004c532) cell_cmode_itu_pane_t1_cp

0xe55b,	// (0x0004c532) cell_cmode_itu_pane_t2_cp

0xcbfe,	// (0x0004abd5) settings_code_pane_cp2

0x3bd7,	// (0x00041bae) bg_popup_window_pane_cp3_ParamLimits

0x4779,	// (0x00042750) heading_pane_cp3_ParamLimits

0x4785,	// (0x0004275c) listscroll_popup_graphic_pane_ParamLimits

0xa314,	// (0x000482eb) fep_hwr_aid_pane_ParamLimits

0xa78c,	// (0x00048763) aid_touch_sctrl_top_ParamLimits

0xa7a7,	// (0x0004877e) sctrl_sk_top_pane_g1_ParamLimits

0xa56b,	// (0x00048542) sctrl_sk_top_pane_g2_ParamLimits

0xfcf2,	// (0x0004dcc9) sctrl_sk_top_pane_g_ParamLimits

0xa7b4,	// (0x0004878b) sctrl_sk_top_pane_t1_ParamLimits

0xa78c,	// (0x00048763) aid_touch_sctrl_bottom_ParamLimits

0xa7b4,	// (0x0004878b) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbe1,	// (0x0004bbb8) aid_area_touch_clock

0xa9a0,	// (0x00048977) aid_vkb2_area_top_pane_cell_ParamLimits

0xa9a0,	// (0x00048977) aid_vkb2_area_top_pane_cell

0xaaeb,	// (0x00048ac2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xaaeb,	// (0x00048ac2) aid_vkb2_area_bottom_pane_cell

0xe171,	// (0x0004c148) popup_char_count_window

0xe569,	// (0x0004c540) popup_char_count_window_g1

0xe572,	// (0x0004c549) popup_char_count_window_g2

0xe57b,	// (0x0004c552) popup_char_count_window_g3

0x0002,

0x0209,	// (0x0003e1e0) popup_char_count_window_g

0xe584,	// (0x0004c55b) popup_char_count_window_t1

0xa866,	// (0x0004883d) popup_fep_char_preview_window_ParamLimits

0xa866,	// (0x0004883d) popup_fep_char_preview_window

0xa9be,	// (0x00048995) vkb2_top_candi_pane_ParamLimits

0xa9be,	// (0x00048995) vkb2_top_candi_pane

0xe592,	// (0x0004c569) cell_vkb2_top_candi_pane_ParamLimits

0xe592,	// (0x0004c569) cell_vkb2_top_candi_pane

0xadce,	// (0x00048da5) bg_popup_fep_char_preview_window_ParamLimits

0xadce,	// (0x00048da5) bg_popup_fep_char_preview_window

0xaddc,	// (0x00048db3) popup_fep_char_preview_window_t1_ParamLimits

0xaddc,	// (0x00048db3) popup_fep_char_preview_window_t1

0xe5df,	// (0x0004c5b6) bg_popup_fep_char_preview_window_g1

0xe5e7,	// (0x0004c5be) bg_popup_fep_char_preview_window_g2

0xe5ef,	// (0x0004c5c6) bg_popup_fep_char_preview_window_g3

0xe5f7,	// (0x0004c5ce) bg_popup_fep_char_preview_window_g4

0xe5ff,	// (0x0004c5d6) bg_popup_fep_char_preview_window_g5

0xae16,	// (0x00048ded) bg_popup_fep_char_preview_window_g6

0xe607,	// (0x0004c5de) bg_popup_fep_char_preview_window_g7

0xe60f,	// (0x0004c5e6) bg_popup_fep_char_preview_window_g8

0xe617,	// (0x0004c5ee) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd7e,	// (0x0004dd55) bg_popup_fep_char_preview_window_g

0xa56b,	// (0x00048542) cell_vkb2_top_candi_pane_g1_ParamLimits

0xa56b,	// (0x00048542) cell_vkb2_top_candi_pane_g1

0xa579,	// (0x00048550) cell_vkb2_top_candi_pane_g2_ParamLimits

0xa579,	// (0x00048550) cell_vkb2_top_candi_pane_g2

0xdce6,	// (0x0004bcbd) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdce6,	// (0x0004bcbd) cell_vkb2_top_candi_pane_g3

0xae1e,	// (0x00048df5) cell_vkb2_top_candi_pane_g4_ParamLimits

0xae1e,	// (0x00048df5) cell_vkb2_top_candi_pane_g4

0x7beb,	// (0x00045bc2) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7beb,	// (0x00045bc2) cell_vkb2_top_candi_pane_g5

0xae3f,	// (0x00048e16) cell_vkb2_top_candi_pane_g6_ParamLimits

0xae3f,	// (0x00048e16) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd91,	// (0x0004dd68) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd91,	// (0x0004dd68) cell_vkb2_top_candi_pane_g

0xae4d,	// (0x00048e24) cell_vkb2_top_candi_pane_t1

0xa174,	// (0x0004814b) aid_size_touch_slider_mark_ParamLimits

0xa174,	// (0x0004814b) aid_size_touch_slider_mark

0xe28c,	// (0x0004c263) grid_graphic2_catg_pane_ParamLimits

0xe28c,	// (0x0004c263) grid_graphic2_catg_pane

0xe306,	// (0x0004c2dd) popup_grid_graphic2_window_t1_ParamLimits

0xe306,	// (0x0004c2dd) popup_grid_graphic2_window_t1

0xe318,	// (0x0004c2ef) popup_grid_graphic2_window_t2_ParamLimits

0xe318,	// (0x0004c2ef) popup_grid_graphic2_window_t2

0x0001,

0x01e3,	// (0x0003e1ba) popup_grid_graphic2_window_t_ParamLimits

0x01e3,	// (0x0003e1ba) popup_grid_graphic2_window_t

0x4a6d,	// (0x00042a44) bg_button_pane_cp05_ParamLimits

0xe469,	// (0x0004c440) cell_graphic2_control_pane_g1_ParamLimits

0xe61f,	// (0x0004c5f6) cell_graphic2_catg_pane_ParamLimits

0xe61f,	// (0x0004c5f6) cell_graphic2_catg_pane

0x3b67,	// (0x00041b3e) bg_button_pane_cp12

0xe631,	// (0x0004c608) cell_graphic2_catg_pane_g1

0xdbad,	// (0x0004bb84) cell_tb_ext_pane_t1_ParamLimits

0xac08,	// (0x00048bdf) vkb2_top_cell_right_narrow_pane_ParamLimits

0xac08,	// (0x00048bdf) vkb2_top_cell_right_narrow_pane

0xac20,	// (0x00048bf7) vkb2_top_cell_right_wide_pane_ParamLimits

0xac20,	// (0x00048bf7) vkb2_top_cell_right_wide_pane

0xa306,	// (0x000482dd) bg_vkb2_func_pane_ParamLimits

0xa306,	// (0x000482dd) bg_vkb2_func_pane

0xac91,	// (0x00048c68) vkb2_top_cell_left_pane_g1_ParamLimits

0xa306,	// (0x000482dd) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa306,	// (0x000482dd) bg_vkb2_fuc_pane_cp03

0xacef,	// (0x00048cc6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x59e8,	// (0x000439bf) bg_vkb2_func_pane_g1

0x59e0,	// (0x000439b7) bg_vkb2_func_pane_g2

0x59f0,	// (0x000439c7) bg_vkb2_func_pane_g3

0x59f8,	// (0x000439cf) bg_vkb2_func_pane_g4

0x5a00,	// (0x000439d7) bg_vkb2_func_pane_g5

0x5a08,	// (0x000439df) bg_vkb2_func_pane_g6

0x5a18,	// (0x000439ef) bg_vkb2_func_pane_g7

0x5a10,	// (0x000439e7) bg_vkb2_func_pane_g8

0x59d8,	// (0x000439af) bg_vkb2_func_pane_g9

0x0008,

0xfd9e,	// (0x0004dd75) bg_vkb2_func_pane_g

0xa306,	// (0x000482dd) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa306,	// (0x000482dd) bg_vkb2_fuc_pane_cp01

0xac91,	// (0x00048c68) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xac91,	// (0x00048c68) vkb2_top_cell_right_wide_pane_g1

0xa306,	// (0x000482dd) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa306,	// (0x000482dd) bg_vkb2_fuc_pane_cp02

0xacef,	// (0x00048cc6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xacef,	// (0x00048cc6) vkb2_top_cell_right_narrow_pane_g1

0xd7e3,	// (0x0004b7ba) aid_touch_area_decrease_ParamLimits

0xd7e3,	// (0x0004b7ba) aid_touch_area_decrease

0xd801,	// (0x0004b7d8) aid_touch_area_increase_ParamLimits

0xd801,	// (0x0004b7d8) aid_touch_area_increase

0xd80d,	// (0x0004b7e4) aid_touch_area_mute_ParamLimits

0xd80d,	// (0x0004b7e4) aid_touch_area_mute

0xd831,	// (0x0004b808) aid_touch_area_slider_ParamLimits

0xd831,	// (0x0004b808) aid_touch_area_slider

0xd91d,	// (0x0004b8f4) popup_slider_window_g4_ParamLimits

0xd91d,	// (0x0004b8f4) popup_slider_window_g4

0xd929,	// (0x0004b900) popup_slider_window_g5_ParamLimits

0xd929,	// (0x0004b900) popup_slider_window_g5

0xd94b,	// (0x0004b922) popup_slider_window_g6_ParamLimits

0xd94b,	// (0x0004b922) popup_slider_window_g6

0xd98b,	// (0x0004b962) popup_slider_window_t2_ParamLimits

0xd98b,	// (0x0004b962) popup_slider_window_t2

0x0001,

0x0131,	// (0x0003e108) popup_slider_window_t_ParamLimits

0x0131,	// (0x0003e108) popup_slider_window_t

0xd9a3,	// (0x0004b97a) slider_pane_ParamLimits

0xd9a3,	// (0x0004b97a) slider_pane

0xe63a,	// (0x0004c611) slider_pane_g1_ParamLimits

0xe63a,	// (0x0004c611) slider_pane_g1

0xe64e,	// (0x0004c625) slider_pane_g2_ParamLimits

0xe64e,	// (0x0004c625) slider_pane_g2

0xe664,	// (0x0004c63b) slider_pane_g3_ParamLimits

0xe664,	// (0x0004c63b) slider_pane_g3

0x0003,

0x0243,	// (0x0003e21a) slider_pane_g_ParamLimits

0x0243,	// (0x0003e21a) slider_pane_g

0xc30e,	// (0x0004a2e5) popup_tb_float_extension_window_ParamLimits

0xc30e,	// (0x0004a2e5) popup_tb_float_extension_window

0xe690,	// (0x0004c667) aid_size_cell_tb_float_ext

0x3b67,	// (0x00041b3e) bg_popup_sub_window_cp28

0xe69c,	// (0x0004c673) grid_tb_float_ext_pane

0xe6a6,	// (0x0004c67d) cell_tb_float_ext_pane_ParamLimits

0xe6a6,	// (0x0004c67d) cell_tb_float_ext_pane

0xe6c0,	// (0x0004c697) cell_tb_float_ext_pane_g1

0xe6c9,	// (0x0004c6a0) grid_highlight_pane_cp12

0xa455,	// (0x0004842c) cell_last_hwr_side_pane_ParamLimits

0xa455,	// (0x0004842c) cell_last_hwr_side_pane

0x778a,	// (0x00045761) cell_last_hwr_side_pane_g1

0xe6d2,	// (0x0004c6a9) cell_last_hwr_side_pane_g2

0x0001,

0xfdb1,	// (0x0004dd88) cell_last_hwr_side_pane_g

0xabb7,	// (0x00048b8e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xabb7,	// (0x00048b8e) vkb2_area_bottom_space_btn_pane

0xa56b,	// (0x00048542) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe218,	// (0x0004c1ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xae4d,	// (0x00048e24) cell_vkb2_top_candi_pane_t1_ParamLimits

0xae6c,	// (0x00048e43) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xae6c,	// (0x00048e43) vkb2_area_bottom_space_btn_pane_g1

0xaea6,	// (0x00048e7d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xaea6,	// (0x00048e7d) vkb2_area_bottom_space_btn_pane_g2

0xaedc,	// (0x00048eb3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xaedc,	// (0x00048eb3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdb6,	// (0x0004dd8d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdb6,	// (0x0004dd8d) vkb2_area_bottom_space_btn_pane_g

0xa3c9,	// (0x000483a0) cel_fep_hwr_func_pane_ParamLimits

0xa3c9,	// (0x000483a0) cel_fep_hwr_func_pane

0xa405,	// (0x000483dc) cell_hwr_side_button_pane_ParamLimits

0xa405,	// (0x000483dc) cell_hwr_side_button_pane

0xdbe1,	// (0x0004bbb8) aid_area_touch_clock_ParamLimits

0x41c6,	// (0x0004219d) bg_uniindi_top_pane_ParamLimits

0xdbf3,	// (0x0004bbca) uniindi_top_pane_g1_ParamLimits

0xdc09,	// (0x0004bbe0) uniindi_top_pane_g2_ParamLimits

0xdc15,	// (0x0004bbec) uniindi_top_pane_g3_ParamLimits

0xdc26,	// (0x0004bbfd) uniindi_top_pane_g4_ParamLimits

0x0169,	// (0x0003e140) uniindi_top_pane_g_ParamLimits

0xdc33,	// (0x0004bc0a) uniindi_top_pane_t1_ParamLimits

0x41c6,	// (0x0004219d) bg_vkb2_func_pane_cp01_ParamLimits

0x41c6,	// (0x0004219d) bg_vkb2_func_pane_cp01

0xe6db,	// (0x0004c6b2) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6db,	// (0x0004c6b2) cel_fep_hwr_func_pane_g1

0x41c6,	// (0x0004219d) bg_vkb2_func_pane_cp02_ParamLimits

0x41c6,	// (0x0004219d) bg_vkb2_func_pane_cp02

0xe6db,	// (0x0004c6b2) cell_hwr_side_button_pane_g1_ParamLimits

0xe6db,	// (0x0004c6b2) cell_hwr_side_button_pane_g1

0x58ee,	// (0x000438c5) status_pane_g4_ParamLimits

0x58ee,	// (0x000438c5) status_pane_g4

0x5908,	// (0x000438df) status_pane_t1

0x760f,	// (0x000455e6) form2_midp_gauge_slider_cont_pane

0x7617,	// (0x000455ee) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcef8,	// (0x0004aecf) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcf0a,	// (0x0004aee1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb11,	// (0x0004dae8) form2_midp_gauge_slider_pane_t_ParamLimits

0x7629,	// (0x00045600) form2_midp_slider_pane_ParamLimits

0xa826,	// (0x000487fd) aid_size_cell_func_vkb2_ParamLimits

0xa826,	// (0x000487fd) aid_size_cell_func_vkb2

0xe67c,	// (0x0004c653) slider_pane_g4_ParamLimits

0xe67c,	// (0x0004c653) slider_pane_g4

0xaf26,	// (0x00048efd) form2_midp_gauge_slider_pane_t2_cp01

0xaf34,	// (0x00048f0b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaf34,	// (0x00048f0b) form2_midp_gauge_slider_pane_t3_cp01

0xaf51,	// (0x00048f28) form2_midp_slider_pane_cp01

0x3b67,	// (0x00041b3e) navi_smil_pane

0xe714,	// (0x0004c6eb) navi_smil_pane_g1

0xe71c,	// (0x0004c6f3) navi_smil_pane_t1

0xe6e9,	// (0x0004c6c0) form2_midp_slider_pane_g1

0xe6f2,	// (0x0004c6c9) form2_midp_slider_pane_g2

0xe6fa,	// (0x0004c6d1) form2_midp_slider_pane_g3

0xe6e9,	// (0x0004c6c0) form2_midp_slider_pane_g4

0xe702,	// (0x0004c6d9) form2_midp_slider_pane_g5

0x0004,

0xfdbf,	// (0x0004dd96) form2_midp_slider_pane_g

0xaf16,	// (0x00048eed) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xaf16,	// (0x00048eed) vkb2_area_bottom_space_btn_pane_g4

0xc475,	// (0x0004a44c) lc0_navi_pane_ParamLimits

0xc475,	// (0x0004a44c) lc0_navi_pane

0xc4eb,	// (0x0004a4c2) lc0_stat_indi_pane_ParamLimits

0xc4eb,	// (0x0004a4c2) lc0_stat_indi_pane

0xc502,	// (0x0004a4d9) ls0_title_pane_ParamLimits

0xc502,	// (0x0004a4d9) ls0_title_pane

0x4a6d,	// (0x00042a44) bg_popup_sub_pane_cp14_ParamLimits

0xdbc8,	// (0x0004bb9f) list_uniindi_pane_ParamLimits

0xdbd4,	// (0x0004bbab) uniindi_top_pane_ParamLimits

0xdc70,	// (0x0004bc47) list_single_uniindi_pane_g1_ParamLimits

0xdc83,	// (0x0004bc5a) list_single_uniindi_pane_t1_ParamLimits

0xaf5a,	// (0x00048f31) lc0_stat_clock_pane_ParamLimits

0xaf5a,	// (0x00048f31) lc0_stat_clock_pane

0xe72a,	// (0x0004c701) lc0_stat_indi_pane_g1_ParamLimits

0xe72a,	// (0x0004c701) lc0_stat_indi_pane_g1

0xe737,	// (0x0004c70e) lc0_stat_indi_pane_g2_ParamLimits

0xe737,	// (0x0004c70e) lc0_stat_indi_pane_g2

0x0001,

0xfdca,	// (0x0004dda1) lc0_stat_indi_pane_g_ParamLimits

0xfdca,	// (0x0004dda1) lc0_stat_indi_pane_g

0xaf67,	// (0x00048f3e) lc0_uni_indicator_pane_ParamLimits

0xaf67,	// (0x00048f3e) lc0_uni_indicator_pane

0xe744,	// (0x0004c71b) ls0_title_pane_g1_ParamLimits

0xe744,	// (0x0004c71b) ls0_title_pane_g1

0xe758,	// (0x0004c72f) ls0_title_pane_t1_ParamLimits

0xe758,	// (0x0004c72f) ls0_title_pane_t1

0xaf74,	// (0x00048f4b) lc0_uni_indicator_pane_g1_ParamLimits

0xaf74,	// (0x00048f4b) lc0_uni_indicator_pane_g1

0xe78e,	// (0x0004c765) lc0_stat_clock_pane_t1

0x3b67,	// (0x00041b3e) main_ai5_pane

0xe79c,	// (0x0004c773) ai5_sk_pane_ParamLimits

0xe79c,	// (0x0004c773) ai5_sk_pane

0xe7a9,	// (0x0004c780) cell_ai5_widget_pane_ParamLimits

0xe7a9,	// (0x0004c780) cell_ai5_widget_pane

0xe821,	// (0x0004c7f8) aid_size_cell_widget_grid

0xe833,	// (0x0004c80a) bg_ai5_widget_pane_ParamLimits

0xe833,	// (0x0004c80a) bg_ai5_widget_pane

0xe9f0,	// (0x0004c9c7) cell_ai5_widget_pane_g2

0xea00,	// (0x0004c9d7) cell_ai5_widget_pane_g3

0xea14,	// (0x0004c9eb) cell_ai5_widget_pane_g4

0xea20,	// (0x0004c9f7) cell_ai5_widget_pane_g5

0xea2c,	// (0x0004ca03) cell_ai5_widget_pane_g6

0xea38,	// (0x0004ca0f) cell_ai5_widget_pane_g7

0xea80,	// (0x0004ca57) cell_ai5_widget_pane_t1_ParamLimits

0xea80,	// (0x0004ca57) cell_ai5_widget_pane_t1

0xea9d,	// (0x0004ca74) cell_ai5_widget_pane_t2_ParamLimits

0xea9d,	// (0x0004ca74) cell_ai5_widget_pane_t2

0xeab5,	// (0x0004ca8c) cell_ai5_widget_pane_t3_ParamLimits

0xeab5,	// (0x0004ca8c) cell_ai5_widget_pane_t3

0xf018,	// (0x0004cfef) cell_ai5_widget_pane_t4_ParamLimits

0xf018,	// (0x0004cfef) cell_ai5_widget_pane_t4

0xf032,	// (0x0004d009) cell_ai5_widget_pane_t5_ParamLimits

0xf032,	// (0x0004d009) cell_ai5_widget_pane_t5

0xe83f,	// (0x0004c816) cell_ai5_widget_pane_t6_ParamLimits

0xe83f,	// (0x0004c816) cell_ai5_widget_pane_t6

0xe851,	// (0x0004c828) cell_ai5_widget_pane_t7_ParamLimits

0xe851,	// (0x0004c828) cell_ai5_widget_pane_t7

0xf051,	// (0x0004d028) cell_ai5_widget_pane_t8_ParamLimits

0xf051,	// (0x0004d028) cell_ai5_widget_pane_t8

0x0009,

0xfde4,	// (0x0004ddbb) cell_ai5_widget_pane_t_ParamLimits

0xfde4,	// (0x0004ddbb) cell_ai5_widget_pane_t

0xf099,	// (0x0004d070) grid_ai5_widget_pane

0x4a6d,	// (0x00042a44) highlight_cell_ai5_widget_pane_ParamLimits

0x4a6d,	// (0x00042a44) highlight_cell_ai5_widget_pane

0xf0b1,	// (0x0004d088) ai5_sk_left_pane

0xf0bb,	// (0x0004d092) ai5_sk_middle_pane

0xf0c5,	// (0x0004d09c) ai5_sk_right_pane

0xe86a,	// (0x0004c841) bg_ai5_widget_pane_g1_ParamLimits

0xe86a,	// (0x0004c841) bg_ai5_widget_pane_g1

0xe876,	// (0x0004c84d) bg_ai5_widget_pane_g2_ParamLimits

0xe876,	// (0x0004c84d) bg_ai5_widget_pane_g2

0xe882,	// (0x0004c859) bg_ai5_widget_pane_g3_ParamLimits

0xe882,	// (0x0004c859) bg_ai5_widget_pane_g3

0xe88e,	// (0x0004c865) bg_ai5_widget_pane_g4_ParamLimits

0xe88e,	// (0x0004c865) bg_ai5_widget_pane_g4

0xe89a,	// (0x0004c871) bg_ai5_widget_pane_g5_ParamLimits

0xe89a,	// (0x0004c871) bg_ai5_widget_pane_g5

0xe8a6,	// (0x0004c87d) bg_ai5_widget_pane_g6_ParamLimits

0xe8a6,	// (0x0004c87d) bg_ai5_widget_pane_g6

0xe8b2,	// (0x0004c889) bg_ai5_widget_pane_g7_ParamLimits

0xe8b2,	// (0x0004c889) bg_ai5_widget_pane_g7

0xe8be,	// (0x0004c895) bg_ai5_widget_pane_g8_ParamLimits

0xe8be,	// (0x0004c895) bg_ai5_widget_pane_g8

0xe8ca,	// (0x0004c8a1) bg_ai5_widget_pane_g9_ParamLimits

0xe8ca,	// (0x0004c8a1) bg_ai5_widget_pane_g9

0x0008,

0xfdf9,	// (0x0004ddd0) bg_ai5_widget_pane_g_ParamLimits

0xfdf9,	// (0x0004ddd0) bg_ai5_widget_pane_g

0xe8d6,	// (0x0004c8ad) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8d6,	// (0x0004c8ad) cell_shortcut_ai5_widget_pane

0x40cf,	// (0x000420a6) bg_cell_shortcut_ai5_widget_pane

0xe8e8,	// (0x0004c8bf) cell_grid_ai5_widget_pane_g1

0xe8f1,	// (0x0004c8c8) highlight_cell_shortcut_ai5_widget_pane

0x59e8,	// (0x000439bf) ai5_sk_left_pane_g1

0xe8f9,	// (0x0004c8d0) ai5_sk_left_pane_g2

0xe901,	// (0x0004c8d8) ai5_sk_left_pane_g3

0xe909,	// (0x0004c8e0) ai5_sk_left_pane_g4

0x0003,

0xfe0c,	// (0x0004dde3) ai5_sk_left_pane_g

0xe911,	// (0x0004c8e8) ai5_sk_left_pane_t1

0x59e0,	// (0x000439b7) ai5_sk_right_pane_g1

0xe91f,	// (0x0004c8f6) ai5_sk_right_pane_g2

0xe927,	// (0x0004c8fe) ai5_sk_right_pane_g3

0xe92f,	// (0x0004c906) ai5_sk_right_pane_g4

0x0003,

0xfe15,	// (0x0004ddec) ai5_sk_right_pane_g

0xe937,	// (0x0004c90e) ai5_sk_right_pane_t1

0x59e0,	// (0x000439b7) ai5_sk_middle_pane_g1

0x59e8,	// (0x000439bf) ai5_sk_middle_pane_g2

0x5a00,	// (0x000439d7) ai5_sk_middle_pane_g3

0xe927,	// (0x0004c8fe) ai5_sk_middle_pane_g4

0xe901,	// (0x0004c8d8) ai5_sk_middle_pane_g5

0xe945,	// (0x0004c91c) ai5_sk_middle_pane_g6

0xf0eb,	// (0x0004d0c2) ai5_sk_middle_pane_g7

0x0006,

0xfe1e,	// (0x0004ddf5) ai5_sk_middle_pane_g

0xc3be,	// (0x0004a395) aid_touch_area_size_lc0_ParamLimits

0xc3be,	// (0x0004a395) aid_touch_area_size_lc0

0xa59a,	// (0x00048571) cell_hwr_candidate_pane_t1_ParamLimits

0x5810,	// (0x000437e7) aid_touch_navi_pane

0xc5d8,	// (0x0004a5af) status_dt_navi_pane_ParamLimits

0xc5d8,	// (0x0004a5af) status_dt_navi_pane

0xc5e5,	// (0x0004a5bc) status_dt_sta_pane_ParamLimits

0xc5e5,	// (0x0004a5bc) status_dt_sta_pane

0xf0f3,	// (0x0004d0ca) dt_sta_controll_pane

0xf100,	// (0x0004d0d7) dt_sta_indi_pane

0xf111,	// (0x0004d0e8) dt_sta_title_pane

0x41c6,	// (0x0004219d) bg_dt_sta_indi_pane_ParamLimits

0x41c6,	// (0x0004219d) bg_dt_sta_indi_pane

0xe94d,	// (0x0004c924) dt_sta_battery_pane

0xf124,	// (0x0004d0fb) dt_sta_indi_pane_g1

0xf12d,	// (0x0004d104) dt_sta_indi_pane_g2

0xf136,	// (0x0004d10d) dt_sta_indi_pane_g3

0x0002,

0xfe2d,	// (0x0004de04) dt_sta_indi_pane_g

0xf13f,	// (0x0004d116) dt_sta_signal_pane

0x4a6d,	// (0x00042a44) bg_dt_sta_title_pane_ParamLimits

0x4a6d,	// (0x00042a44) bg_dt_sta_title_pane

0xf148,	// (0x0004d11f) dt_sta_title_pane_g1

0xf150,	// (0x0004d127) dt_sta_title_pane_t1_ParamLimits

0xf150,	// (0x0004d127) dt_sta_title_pane_t1

0x3b67,	// (0x00041b3e) bg_dt_sta_control_pane

0xf165,	// (0x0004d13c) dt_sta_controll_pane_g1

0xf16e,	// (0x0004d145) bg_dt_sta_title_pane_g1

0xf177,	// (0x0004d14e) bg_dt_sta_title_pane_g2

0xf180,	// (0x0004d157) bg_dt_sta_title_pane_g3

0x0002,

0xfe34,	// (0x0004de0b) bg_dt_sta_title_pane_g

0x778a,	// (0x00045761) bg_dt_sta_indi_pane_g1

0xe955,	// (0x0004c92c) dt_sta_signal_pane_g1

0xe95d,	// (0x0004c934) dt_sta_signal_pane_g2

0x0001,

0xfe3b,	// (0x0004de12) dt_sta_signal_pane_g

0xe965,	// (0x0004c93c) dt_sta_battery_pane_g1

0xe96e,	// (0x0004c945) dt_sta_battery_pane_t1

0x778a,	// (0x00045761) bg_dt_sta_control_pane_g1

0x5023,	// (0x00042ffa) fep_china_uni_eep_pane

0x502b,	// (0x00043002) fep_china_uni_entry_pane_ParamLimits

0x503b,	// (0x00043012) popup_fep_china_uni_window_g1_ParamLimits

0x504b,	// (0x00043022) popup_fep_china_uni_window_g2_ParamLimits

0x504b,	// (0x00043022) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0004d739) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0004d739) popup_fep_china_uni_window_g

0xe97d,	// (0x0004c954) fep_china_uni_eep_pane_g1

0xe985,	// (0x0004c95c) fep_china_uni_eep_pane_t1

0xe70b,	// (0x0004c6e2) aid_touch_area_size_smil_player

0x58c1,	// (0x00043898) lc0_clock_pane

0x58fc,	// (0x000438d3) status_pane_g5_ParamLimits

0x58fc,	// (0x000438d3) status_pane_g5

0xb9b3,	// (0x0004998a) popup_keymap_window

0x58da,	// (0x000438b1) status_icon_pane

0xea00,	// (0x0004c9d7) cell_ai5_widget_pane_g3_ParamLimits

0xea14,	// (0x0004c9eb) cell_ai5_widget_pane_g4_ParamLimits

0xea20,	// (0x0004c9f7) cell_ai5_widget_pane_g5_ParamLimits

0xea44,	// (0x0004ca1b) cell_ai5_widget_pane_g8_ParamLimits

0xea44,	// (0x0004ca1b) cell_ai5_widget_pane_g8

0xea58,	// (0x0004ca2f) cell_ai5_widget_pane_g9_ParamLimits

0xea58,	// (0x0004ca2f) cell_ai5_widget_pane_g9

0xea6c,	// (0x0004ca43) cell_ai5_widget_pane_g10_ParamLimits

0xea6c,	// (0x0004ca43) cell_ai5_widget_pane_g10

0xe994,	// (0x0004c96b) status_icon_pane_g1

0x3b67,	// (0x00041b3e) bg_popup_sub_pane_cp13

0xe99c,	// (0x0004c973) popup_keymap_window_t1

0xb83b,	// (0x00049812) control_pane_g6_ParamLimits

0xb83b,	// (0x00049812) control_pane_g6

0xb848,	// (0x0004981f) control_pane_g7_ParamLimits

0xb848,	// (0x0004981f) control_pane_g7

0xb855,	// (0x0004982c) control_pane_g8_ParamLimits

0xb855,	// (0x0004982c) control_pane_g8

0xf0f3,	// (0x0004d0ca) dt_sta_controll_pane_ParamLimits

0xf100,	// (0x0004d0d7) dt_sta_indi_pane_ParamLimits

0xf111,	// (0x0004d0e8) dt_sta_title_pane_ParamLimits

0x49af,	// (0x00042986) aid_size_touch_scroll_bar_cale

0x90f4,	// (0x000470cb) popup_discreet_window_ParamLimits

0x90f4,	// (0x000470cb) popup_discreet_window

0x917c,	// (0x00047153) popup_sk_window

0x5f8f,	// (0x00043f66) bg_popup_sub_pane_cp28_ParamLimits

0x5f8f,	// (0x00043f66) bg_popup_sub_pane_cp28

0xe9aa,	// (0x0004c981) popup_discreet_window_g1_ParamLimits

0xe9aa,	// (0x0004c981) popup_discreet_window_g1

0xeacd,	// (0x0004caa4) popup_discreet_window_t1_ParamLimits

0xeacd,	// (0x0004caa4) popup_discreet_window_t1

0xeaeb,	// (0x0004cac2) popup_discreet_window_t2_ParamLimits

0xeaeb,	// (0x0004cac2) popup_discreet_window_t2

0x0002,

0xfe40,	// (0x0004de17) popup_discreet_window_t_ParamLimits

0xfe40,	// (0x0004de17) popup_discreet_window_t

0xaf88,	// (0x00048f5f) popup_sk_window_g1

0xaf92,	// (0x00048f69) popup_sk_window_g2

0x0001,

0xfe47,	// (0x0004de1e) popup_sk_window_g

0xeb3d,	// (0x0004cb14) popup_sk_window_t1

0xeb4b,	// (0x0004cb22) popup_sk_window_t1_copy1

0xe9f0,	// (0x0004c9c7) cell_ai5_widget_pane_g2_ParamLimits

0xf063,	// (0x0004d03a) cell_ai5_widget_pane_t9_ParamLimits

0xf063,	// (0x0004d03a) cell_ai5_widget_pane_t9

0x3b67,	// (0x00041b3e) main_fep_fshwr2_pane

0xf189,	// (0x0004d160) aid_fshwr2_btn_pane

0xf191,	// (0x0004d168) aid_fshwr2_syb_pane

0xf199,	// (0x0004d170) aid_fshwr2_txt_pane

0xf1a1,	// (0x0004d178) fshwr2_func_candi_pane

0xf1ad,	// (0x0004d184) fshwr2_hwr_syb_pane

0xf1b9,	// (0x0004d190) fshwr2_icf_pane

0x3b67,	// (0x00041b3e) fshwr2_icf_bg_pane

0xf1c3,	// (0x0004d19a) fshwr2_icf_pane_t1_ParamLimits

0xf1c3,	// (0x0004d19a) fshwr2_icf_pane_t1

0x778a,	// (0x00045761) fshwr2_func_candi_pane_g1

0xeb6d,	// (0x0004cb44) fshwr2_func_candi_row_pane_ParamLimits

0xeb6d,	// (0x0004cb44) fshwr2_func_candi_row_pane

0xf1da,	// (0x0004d1b1) cell_fshwr2_syb_pane_ParamLimits

0xf1da,	// (0x0004d1b1) cell_fshwr2_syb_pane

0x7931,	// (0x00045908) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7931,	// (0x00045908) fshwr2_hwr_syb_pane_g1

0x3b67,	// (0x00041b3e) bg_popup_call_pane_cp01

0xeb7e,	// (0x0004cb55) fshwr2_func_candi_cell_pane_ParamLimits

0xeb7e,	// (0x0004cb55) fshwr2_func_candi_cell_pane

0xebaf,	// (0x0004cb86) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xebaf,	// (0x0004cb86) fshwr2_func_candi_cell_bg_pane

0xebc9,	// (0x0004cba0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebc9,	// (0x0004cba0) fshwr2_func_candi_cell_pane_g1

0xebf1,	// (0x0004cbc8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebf1,	// (0x0004cbc8) fshwr2_func_candi_cell_pane_t1

0x3b67,	// (0x00041b3e) bg_button_pane_cp08

0x5492,	// (0x00043469) cell_fshwr2_syb_bg_pane

0xf1f4,	// (0x0004d1cb) cell_fshwr2_syb_bg_pane_g1

0xf1fc,	// (0x0004d1d3) cell_fshwr2_syb_bg_pane_t1

0x4a6d,	// (0x00042a44) main_tmo_pane

0xca32,	// (0x0004aa09) uni_indicator_pane_g1_ParamLimits

0xca47,	// (0x0004aa1e) uni_indicator_pane_g2_ParamLimits

0xca5d,	// (0x0004aa34) uni_indicator_pane_g3_ParamLimits

0x69af,	// (0x00044986) uni_indicator_pane_g4_ParamLimits

0x69af,	// (0x00044986) uni_indicator_pane_g4

0x69c3,	// (0x0004499a) uni_indicator_pane_g5_ParamLimits

0x69c3,	// (0x0004499a) uni_indicator_pane_g5

0x69d7,	// (0x000449ae) uni_indicator_pane_g6_ParamLimits

0x69d7,	// (0x000449ae) uni_indicator_pane_g6

0xf95f,	// (0x0004d936) uni_indicator_pane_g_ParamLimits

0xd7bf,	// (0x0004b796) popup_tmo_note_window_ParamLimits

0xd7bf,	// (0x0004b796) popup_tmo_note_window

0x3b67,	// (0x00041b3e) fshwr2_bg_pane

0xebe2,	// (0x0004cbb9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebe2,	// (0x0004cbb9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe4c,	// (0x0004de23) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe4c,	// (0x0004de23) fshwr2_func_candi_cell_pane_g

0x778a,	// (0x00045761) bg_popup_window_pane_cp01

0xec04,	// (0x0004cbdb) bg_popup_window_pane_g1_cp01

0xec0d,	// (0x0004cbe4) bg_popup_window_pane_cp22_ParamLimits

0xec0d,	// (0x0004cbe4) bg_popup_window_pane_cp22

0xec1b,	// (0x0004cbf2) listscroll_tmo_link_pane_ParamLimits

0xec1b,	// (0x0004cbf2) listscroll_tmo_link_pane

0xec5b,	// (0x0004cc32) popup_tmo_note_window_g1_ParamLimits

0xec5b,	// (0x0004cc32) popup_tmo_note_window_g1

0xec68,	// (0x0004cc3f) tmo_note_info_pane_ParamLimits

0xec68,	// (0x0004cc3f) tmo_note_info_pane

0xf20b,	// (0x0004d1e2) list_tmo_note_info_pane_g1_ParamLimits

0xf20b,	// (0x0004d1e2) list_tmo_note_info_pane_g1

0xec82,	// (0x0004cc59) list_tmo_note_info_pane_g2_ParamLimits

0xec82,	// (0x0004cc59) list_tmo_note_info_pane_g2

0x0001,

0xfe51,	// (0x0004de28) list_tmo_note_info_pane_g_ParamLimits

0xfe51,	// (0x0004de28) list_tmo_note_info_pane_g

0xec9e,	// (0x0004cc75) list_tmo_note_info_text_pane_ParamLimits

0xec9e,	// (0x0004cc75) list_tmo_note_info_text_pane

0xece0,	// (0x0004ccb7) list_tmo_link_pane

0xeced,	// (0x0004ccc4) scroll_pane_cp20

0xecfa,	// (0x0004ccd1) list_single_tmo_link_pane_ParamLimits

0xecfa,	// (0x0004ccd1) list_single_tmo_link_pane

0xed0a,	// (0x0004cce1) list_single_tmo_link_pane_t1

0xed18,	// (0x0004ccef) list_tmo_note_info_text_pane_t1_ParamLimits

0xed18,	// (0x0004ccef) list_tmo_note_info_text_pane_t1

0xb4cd,	// (0x000494a4) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb4cd,	// (0x000494a4) aid_size_touch_scroll_bar_cp01

0xb3ac,	// (0x00049383) aid_size_touch_slider_marker

0x9164,	// (0x0004713b) popup_settings_window_ParamLimits

0x9164,	// (0x0004713b) popup_settings_window

0xb8b2,	// (0x00049889) popup_candi_list_indi_window

0x5810,	// (0x000437e7) aid_touch_navi_pane_ParamLimits

0xa760,	// (0x00048737) rs_clock_indi_pane

0xa769,	// (0x00048740) sctrl_sk_bottom_pane_ParamLimits

0xa77a,	// (0x00048751) sctrl_sk_top_pane_ParamLimits

0xa880,	// (0x00048857) popup_fep_tooltip_window

0xe821,	// (0x0004c7f8) aid_size_cell_widget_grid_ParamLimits

0xe9e4,	// (0x0004c9bb) cell_ai5_widget_pane_g1_ParamLimits

0xe9e4,	// (0x0004c9bb) cell_ai5_widget_pane_g1

0xea2c,	// (0x0004ca03) cell_ai5_widget_pane_g6_ParamLimits

0xea38,	// (0x0004ca0f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdcf,	// (0x0004dda6) cell_ai5_widget_pane_g_ParamLimits

0xfdcf,	// (0x0004dda6) cell_ai5_widget_pane_g

0xf087,	// (0x0004d05e) cell_ai5_widget_pane_t10_ParamLimits

0xf087,	// (0x0004d05e) cell_ai5_widget_pane_t10

0xf099,	// (0x0004d070) grid_ai5_widget_pane_ParamLimits

0xf0cf,	// (0x0004d0a6) cell_contacts_ai5_widget_pane_ParamLimits

0xf0cf,	// (0x0004d0a6) cell_contacts_ai5_widget_pane

0xeb00,	// (0x0004cad7) popup_discreet_window_t3_ParamLimits

0xeb00,	// (0x0004cad7) popup_discreet_window_t3

0xeb59,	// (0x0004cb30) popup_fshwr2_char_preview_window_ParamLimits

0xeb59,	// (0x0004cb30) popup_fshwr2_char_preview_window

0xf222,	// (0x0004d1f9) tmo_note_info_pane_t1

0xf237,	// (0x0004d20e) tmo_note_info_pane_t2

0xf24c,	// (0x0004d223) tmo_note_info_pane_t3

0xecbc,	// (0x0004cc93) tmo_note_info_pane_t4

0xecce,	// (0x0004cca5) tmo_note_info_pane_t5

0x0004,

0xfe56,	// (0x0004de2d) tmo_note_info_pane_t

0xece0,	// (0x0004ccb7) list_tmo_link_pane_ParamLimits

0xeced,	// (0x0004ccc4) scroll_pane_cp20_ParamLimits

0x3b67,	// (0x00041b3e) bg_popup_fep_char_preview_window_cp01

0xed31,	// (0x0004cd08) popup_fshwr2_char_preview_window_t1

0xed3f,	// (0x0004cd16) popup_candi_list_indi_window_g1

0xed48,	// (0x0004cd1f) bg_cell_contacts_ai5_widget_pane

0xf261,	// (0x0004d238) cell_contacts_ai5_widget_pane_g1

0xf276,	// (0x0004d24d) cell_contacts_ai5_widget_pane_g2

0xf285,	// (0x0004d25c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe61,	// (0x0004de38) cell_contacts_ai5_widget_pane_g

0xf299,	// (0x0004d270) cell_contacts_ai5_widget_pane_t1

0x4a6d,	// (0x00042a44) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf310,	// (0x0004d2e7) settings_container_pane

0x5492,	// (0x00043469) listscroll_set_pane_copy1

0x71a7,	// (0x0004517e) scroll_pane_cp121_copy1

0xed54,	// (0x0004cd2b) set_content_pane_copy1

0xf31c,	// (0x0004d2f3) aid_height_set_list_copy1_ParamLimits

0xf31c,	// (0x0004d2f3) aid_height_set_list_copy1

0x6638,	// (0x0004460f) aid_size_parent_copy1_ParamLimits

0x6638,	// (0x0004460f) aid_size_parent_copy1

0xf328,	// (0x0004d2ff) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf328,	// (0x0004d2ff) button_value_adjust_pane_cp6_copy1

0x4bc5,	// (0x00042b9c) list_highlight_pane_cp2_copy1_ParamLimits

0x4bc5,	// (0x00042b9c) list_highlight_pane_cp2_copy1

0xf33c,	// (0x0004d313) list_set_pane_copy1_ParamLimits

0xf33c,	// (0x0004d313) list_set_pane_copy1

0xf2ab,	// (0x0004d282) main_pane_set_t1_copy1_ParamLimits

0xf2ab,	// (0x0004d282) main_pane_set_t1_copy1

0xf2e5,	// (0x0004d2bc) main_pane_set_t2_copy1_ParamLimits

0xf2e5,	// (0x0004d2bc) main_pane_set_t2_copy1

0xf3e9,	// (0x0004d3c0) main_pane_set_t3_copy1

0xf3f7,	// (0x0004d3ce) main_pane_set_t4_copy1

0xf304,	// (0x0004d2db) set_content_pane_g1_copy1_ParamLimits

0xf304,	// (0x0004d2db) set_content_pane_g1_copy1

0xf405,	// (0x0004d3dc) setting_code_pane_copy1

0xed5c,	// (0x0004cd33) setting_slider_graphic_pane_copy1

0xed5c,	// (0x0004cd33) setting_slider_pane_copy1

0xed66,	// (0x0004cd3d) setting_text_pane_copy1

0xed70,	// (0x0004cd47) setting_volume_pane_copy1

0xf40f,	// (0x0004d3e6) settings_code_pane_cp2_copy1

0xf417,	// (0x0004d3ee) settings_code_pane_cp_copy1_ParamLimits

0xf417,	// (0x0004d3ee) settings_code_pane_cp_copy1

0xf42b,	// (0x0004d402) volume_set_pane_copy1

0xf433,	// (0x0004d40a) volume_set_pane_g10_copy1

0xf43b,	// (0x0004d412) volume_set_pane_g1_copy1

0xf443,	// (0x0004d41a) volume_set_pane_g2_copy1

0xf44b,	// (0x0004d422) volume_set_pane_g3_copy1

0xf453,	// (0x0004d42a) volume_set_pane_g4_copy1

0xf45b,	// (0x0004d432) volume_set_pane_g5_copy1

0xf463,	// (0x0004d43a) volume_set_pane_g6_copy1

0xf46b,	// (0x0004d442) volume_set_pane_g7_copy1

0xf473,	// (0x0004d44a) volume_set_pane_g8_copy1

0xf47b,	// (0x0004d452) volume_set_pane_g9_copy1

0x3bd7,	// (0x00041bae) bg_set_opt_pane_cp_copy1_ParamLimits

0x3bd7,	// (0x00041bae) bg_set_opt_pane_cp_copy1

0xed79,	// (0x0004cd50) setting_slider_pane_t1_copy1_ParamLimits

0xed79,	// (0x0004cd50) setting_slider_pane_t1_copy1

0xf483,	// (0x0004d45a) setting_slider_pane_t2_copy1_ParamLimits

0xf483,	// (0x0004d45a) setting_slider_pane_t2_copy1

0xf49d,	// (0x0004d474) setting_slider_pane_t3_copy1_ParamLimits

0xf49d,	// (0x0004d474) setting_slider_pane_t3_copy1

0xf4b5,	// (0x0004d48c) slider_set_pane_copy1_ParamLimits

0xf4b5,	// (0x0004d48c) slider_set_pane_copy1

0x4ad4,	// (0x00042aab) set_opt_bg_pane_g1_copy2

0x4adc,	// (0x00042ab3) set_opt_bg_pane_g2_copy2

0xed97,	// (0x0004cd6e) set_opt_bg_pane_g3_copy2

0x4aec,	// (0x00042ac3) set_opt_bg_pane_g4_copy2

0x4af4,	// (0x00042acb) set_opt_bg_pane_g5_copy2

0x4afc,	// (0x00042ad3) set_opt_bg_pane_g6_copy2

0xf4cb,	// (0x0004d4a2) set_opt_bg_pane_g7_copy2

0xeda1,	// (0x0004cd78) set_opt_bg_pane_g8_copy2

0xedab,	// (0x0004cd82) set_opt_bg_pane_g9_copy2

0xaf9c,	// (0x00048f73) aid_size_touch_slider_mark_copy1_ParamLimits

0xaf9c,	// (0x00048f73) aid_size_touch_slider_mark_copy1

0xedb5,	// (0x0004cd8c) slider_set_pane_g1_copy1

0xafb0,	// (0x00048f87) slider_set_pane_g2_copy1

0xa194,	// (0x0004816b) slider_set_pane_g3_copy1_ParamLimits

0xa194,	// (0x0004816b) slider_set_pane_g3_copy1

0xa1a8,	// (0x0004817f) slider_set_pane_g4_copy1_ParamLimits

0xa1a8,	// (0x0004817f) slider_set_pane_g4_copy1

0xa1c0,	// (0x00048197) slider_set_pane_g5_copy1_ParamLimits

0xa1c0,	// (0x00048197) slider_set_pane_g5_copy1

0xa194,	// (0x0004816b) slider_set_pane_g6_copy1_ParamLimits

0xa194,	// (0x0004816b) slider_set_pane_g6_copy1

0xafb8,	// (0x00048f8f) slider_set_pane_g7_copy1_ParamLimits

0xafb8,	// (0x00048f8f) slider_set_pane_g7_copy1

0x3b7b,	// (0x00041b52) bg_set_opt_pane_cp2_copy1

0xedbe,	// (0x0004cd95) setting_slider_graphic_pane_g1_copy1

0xf4d3,	// (0x0004d4aa) setting_slider_graphic_pane_t1_copy1

0xf4e3,	// (0x0004d4ba) setting_slider_graphic_pane_t2_copy1

0xf4f3,	// (0x0004d4ca) slider_set_pane_cp_copy1

0xedcf,	// (0x0004cda6) input_focus_pane_cp1_copy1

0xedd8,	// (0x0004cdaf) list_set_text_pane_copy1

0xede0,	// (0x0004cdb7) setting_text_pane_g1_copy1

0xc298,	// (0x0004a26f) set_text_pane_t1_copy1

0xedcf,	// (0x0004cda6) input_focus_pane_cp2_copy1

0xede0,	// (0x0004cdb7) setting_code_pane_g1_copy1

0xf4fb,	// (0x0004d4d2) setting_code_pane_t1_copy1

0xf509,	// (0x0004d4e0) list_set_graphic_pane_copy1

0x3b7b,	// (0x00041b52) bg_set_opt_pane_cp4_copy1

0xb73e,	// (0x00049715) list_set_graphic_pane_g1_copy1_ParamLimits

0xb73e,	// (0x00049715) list_set_graphic_pane_g1_copy1

0xf51b,	// (0x0004d4f2) list_set_graphic_pane_g2_copy1

0xb756,	// (0x0004972d) list_set_graphic_pane_t1_copy1_ParamLimits

0xb756,	// (0x0004972d) list_set_graphic_pane_t1_copy1

0x778a,	// (0x00045761) rs_clock_indi_pane_g1

0xede9,	// (0x0004cdc0) rs_clock_indi_pane_t1

0xe94d,	// (0x0004c924) rs_indi_pane

0xedf7,	// (0x0004cdce) rs_indi_pane_g1

0xee00,	// (0x0004cdd7) rs_indi_pane_g2

0xee09,	// (0x0004cde0) rs_indi_pane_g3

0x0002,

0xfe68,	// (0x0004de3f) rs_indi_pane_g

0x5492,	// (0x00043469) bg_popup_preview_window_pane_cp03

0xee12,	// (0x0004cde9) popup_fep_tooltip_window_t1

0x80a6,	// (0x0004607d) popup_note2_window_g2_ParamLimits

0x80a6,	// (0x0004607d) popup_note2_window_g2

0x0001,

0xfc84,	// (0x0004dc5b) popup_note2_window_g_ParamLimits

0xfc84,	// (0x0004dc5b) popup_note2_window_g

0xd45b,	// (0x0004b432) bg_popup_sub_pane_cp11_ParamLimits

0xd468,	// (0x0004b43f) cell_ai3_links_pane_g1_ParamLimits

0xd47f,	// (0x0004b456) cell_ai3_links_pane_t1

0xc298,	// (0x0004a26f) set_text_pane_t1_copy1_ParamLimits

0x53a3,	// (0x0004337a) cell_graphic_popup_pane_cp2_ParamLimits

0x53a3,	// (0x0004337a) cell_graphic_popup_pane_cp2

0xee20,	// (0x0004cdf7) cell_graphic_popup_pane_g1_cp2

0x47c2,	// (0x00042799) cell_graphic_popup_pane_g2_cp2

0xee28,	// (0x0004cdff) cell_graphic_popup_pane_g3_cp2

0xee30,	// (0x0004ce07) cell_graphic_popup_pane_t2_cp2

0x47d3,	// (0x000427aa) grid_highlight_pane_cp3_cp2

0x4d6f,	// (0x00042d46) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4a6d,	// (0x00042a44) main_tmo_pane_ParamLimits

0xd7b3,	// (0x0004b78a) popup_tmo_big_image_note_window

0xe9d4,	// (0x0004c9ab) cell_ai5_widget_list_pane

0xe9dc,	// (0x0004c9b3) cell_ai5_widget_lrg_icon_pane

0xf222,	// (0x0004d1f9) tmo_note_info_pane_t1_ParamLimits

0xf237,	// (0x0004d20e) tmo_note_info_pane_t2_ParamLimits

0xf24c,	// (0x0004d223) tmo_note_info_pane_t3_ParamLimits

0xecbc,	// (0x0004cc93) tmo_note_info_pane_t4_ParamLimits

0xecce,	// (0x0004cca5) tmo_note_info_pane_t5_ParamLimits

0xfe56,	// (0x0004de2d) tmo_note_info_pane_t_ParamLimits

0xf310,	// (0x0004d2e7) settings_container_pane_ParamLimits

0xedc7,	// (0x0004cd9e) indicator_popup_pane_cp5

0xedc7,	// (0x0004cd9e) indicator_popup_pane_cp6

0xf509,	// (0x0004d4e0) list_set_graphic_pane_copy1_ParamLimits

0x3b67,	// (0x00041b3e) bg_popup_window_pane_cp23

0xee3e,	// (0x0004ce15) popup_tmo_big_image_note_window_g1

0xee48,	// (0x0004ce1f) popup_tmo_big_image_note_window_t1

0xee58,	// (0x0004ce2f) popup_tmo_big_image_note_window_t2

0xee68,	// (0x0004ce3f) popup_tmo_big_image_note_window_t3

0x0002,

0xfe6f,	// (0x0004de46) popup_tmo_big_image_note_window_t

0xf523,	// (0x0004d4fa) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0004d502) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0004d510) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0004d510) cell_ai5_widget_list_row_pane

0xf552,	// (0x0004d529) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0004d529) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0004d536) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0004d536) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0004d54e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0004d54e) cell_ai5_widget_list_row_pane_t2

0x0001,

0x02e7,	// (0x0003e2be) cell_ai5_widget_list_row_pane_t_ParamLimits

0x02e7,	// (0x0003e2be) cell_ai5_widget_list_row_pane_t

0x901b,	// (0x00046ff2) main_fep_vtchi_ss_pane

0xee78,	// (0x0004ce4f) popup_fep_char_pre_window

0xee80,	// (0x0004ce57) popup_fep_ituss_window

0xee8b,	// (0x0004ce62) popup_fep_vkbss_window

0xee94,	// (0x0004ce6b) grid_vkbss_keypad_pane_ParamLimits

0xee94,	// (0x0004ce6b) grid_vkbss_keypad_pane

0xeea4,	// (0x0004ce7b) ituss_keypad_pane

0xeeac,	// (0x0004ce83) aid_vkbss_key_offset_ParamLimits

0xeeac,	// (0x0004ce83) aid_vkbss_key_offset

0xeebb,	// (0x0004ce92) cell_vkbss_key_pane_ParamLimits

0xeebb,	// (0x0004ce92) cell_vkbss_key_pane

0xeed1,	// (0x0004cea8) bg_cell_vkbss_key_g1_ParamLimits

0xeed1,	// (0x0004cea8) bg_cell_vkbss_key_g1

0xeedd,	// (0x0004ceb4) cell_vkbss_key_3p_pane_ParamLimits

0xeedd,	// (0x0004ceb4) cell_vkbss_key_3p_pane

0xeef7,	// (0x0004cece) cell_vkbss_key_g1_ParamLimits

0xeef7,	// (0x0004cece) cell_vkbss_key_g1

0xef11,	// (0x0004cee8) cell_vkbss_key_t1_ParamLimits

0xef11,	// (0x0004cee8) cell_vkbss_key_t1

0xef3c,	// (0x0004cf13) cell_ituss_key_pane_ParamLimits

0xef3c,	// (0x0004cf13) cell_ituss_key_pane

0xef4b,	// (0x0004cf22) bg_cell_ituss_key_g1_ParamLimits

0xef4b,	// (0x0004cf22) bg_cell_ituss_key_g1

0xef57,	// (0x0004cf2e) cell_ituss_key_pane_g1_ParamLimits

0xef57,	// (0x0004cf2e) cell_ituss_key_pane_g1

0xef63,	// (0x0004cf3a) cell_ituss_key_pane_g2_ParamLimits

0xef63,	// (0x0004cf3a) cell_ituss_key_pane_g2

0x0001,

0xfe76,	// (0x0004de4d) cell_ituss_key_pane_g_ParamLimits

0xfe76,	// (0x0004de4d) cell_ituss_key_pane_g

0xef76,	// (0x0004cf4d) cell_ituss_key_t1_ParamLimits

0xef76,	// (0x0004cf4d) cell_ituss_key_t1

0xef94,	// (0x0004cf6b) cell_ituss_key_t2_ParamLimits

0xef94,	// (0x0004cf6b) cell_ituss_key_t2

0xefb3,	// (0x0004cf8a) cell_ituss_key_t3_ParamLimits

0xefb3,	// (0x0004cf8a) cell_ituss_key_t3

0xefd2,	// (0x0004cfa9) cell_ituss_key_t4_ParamLimits

0xefd2,	// (0x0004cfa9) cell_ituss_key_t4

0x0003,

0xfe7b,	// (0x0004de52) cell_ituss_key_t_ParamLimits

0xfe7b,	// (0x0004de52) cell_ituss_key_t

0xeff1,	// (0x0004cfc8) cell_vkbss_key_3p_pane_g1

0xeff9,	// (0x0004cfd0) cell_vkbss_key_3p_pane_g2

0xf001,	// (0x0004cfd8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe84,	// (0x0004de5b) cell_vkbss_key_3p_pane_g

0x3b67,	// (0x00041b3e) bg_popup_fep_char_preview_window_cp02

0xf009,	// (0x0004cfe0) popup_fep_char_pre_window_t1

0xe9ca,	// (0x0004c9a1) main_ai5_sk_pane

0xed48,	// (0x0004cd1f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf261,	// (0x0004d238) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf276,	// (0x0004d24d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf285,	// (0x0004d25c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe61,	// (0x0004de38) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf299,	// (0x0004d270) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4a6d,	// (0x00042a44) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0004d560) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
